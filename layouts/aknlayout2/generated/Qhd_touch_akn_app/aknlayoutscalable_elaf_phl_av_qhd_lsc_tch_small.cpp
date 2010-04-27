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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f555 };

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
0xbe50,	// (0x0002b3a5) Screen

0xbe5c,	// (0x0002b3b1) application_window_ParamLimits

0xbe5c,	// (0x0002b3b1) application_window

0x3565,	// (0x00022aba) screen_g1

0xbe94,	// (0x0002b3e9) area_bottom_pane_ParamLimits

0xbe94,	// (0x0002b3e9) area_bottom_pane

0x12f8,	// (0x0002084d) area_top_pane_ParamLimits

0x12f8,	// (0x0002084d) area_top_pane

0x138c,	// (0x000208e1) main_pane_ParamLimits

0x138c,	// (0x000208e1) main_pane

0x356f,	// (0x00022ac4) misc_graphics

0xd68e,	// (0x0002cbe3) battery_pane_ParamLimits

0xd68e,	// (0x0002cbe3) battery_pane

0x5bfa,	// (0x0002514f) bg_status_flat_pane_g8

0x5c02,	// (0x00025157) bg_status_flat_pane_g9

0x4fea,	// (0x0002453f) context_pane_ParamLimits

0x4fea,	// (0x0002453f) context_pane

0xd7f9,	// (0x0002cd4e) navi_pane_ParamLimits

0xd7f9,	// (0x0002cd4e) navi_pane

0xd877,	// (0x0002cdcc) signal_pane_ParamLimits

0xd877,	// (0x0002cdcc) signal_pane

0x0008,

0xf86d,	// (0x0002edc2) bg_status_flat_pane_g

0xd907,	// (0x0002ce5c) status_pane_g1_ParamLimits

0xd907,	// (0x0002ce5c) status_pane_g1

0xd91d,	// (0x0002ce72) status_pane_g2_ParamLimits

0xd91d,	// (0x0002ce72) status_pane_g2

0x5211,	// (0x00024766) status_pane_g3_ParamLimits

0x5211,	// (0x00024766) status_pane_g3

0x0004,

0xf7a0,	// (0x0002ecf5) status_pane_g_ParamLimits

0xf7a0,	// (0x0002ecf5) status_pane_g

0xd929,	// (0x0002ce7e) title_pane_ParamLimits

0xd929,	// (0x0002ce7e) title_pane

0xd98c,	// (0x0002cee1) uni_indicator_pane_ParamLimits

0xd98c,	// (0x0002cee1) uni_indicator_pane

0x4e4c,	// (0x000243a1) bg_list_pane_ParamLimits

0x4e4c,	// (0x000243a1) bg_list_pane

0xd601,	// (0x0002cb56) find_pane

0xc2af,	// (0x0002b804) listscroll_app_pane_ParamLimits

0xc2af,	// (0x0002b804) listscroll_app_pane

0x4e78,	// (0x000243cd) listscroll_form_pane

0xc2bf,	// (0x0002b814) listscroll_gen_pane_ParamLimits

0xc2bf,	// (0x0002b814) listscroll_gen_pane

0x1c57,	// (0x000211ac) listscroll_set_pane

0x677c,	// (0x00025cd1) main_idle_act_pane

0x4b54,	// (0x000240a9) main_idle_trad_pane

0x4b54,	// (0x000240a9) main_list_empty_pane

0x4e92,	// (0x000243e7) main_midp_pane

0x4e9e,	// (0x000243f3) main_pane_g1_ParamLimits

0x4e9e,	// (0x000243f3) main_pane_g1

0xc2d3,	// (0x0002b828) popup_ai_message_window_ParamLimits

0xc2d3,	// (0x0002b828) popup_ai_message_window

0xc364,	// (0x0002b8b9) popup_fep_china_uni_window_ParamLimits

0xc364,	// (0x0002b8b9) popup_fep_china_uni_window

0x1d61,	// (0x000212b6) popup_fep_japan_candidate_window_ParamLimits

0x1d61,	// (0x000212b6) popup_fep_japan_candidate_window

0x1d81,	// (0x000212d6) popup_fep_japan_predictive_window_ParamLimits

0x1d81,	// (0x000212d6) popup_fep_japan_predictive_window

0xc3c0,	// (0x0002b915) popup_find_window

0xc3dd,	// (0x0002b932) popup_grid_graphic_window_ParamLimits

0xc3dd,	// (0x0002b932) popup_grid_graphic_window

0x1de8,	// (0x0002133d) popup_large_graphic_colour_window

0xc47b,	// (0x0002b9d0) popup_menu_window_ParamLimits

0xc47b,	// (0x0002b9d0) popup_menu_window

0xc64d,	// (0x0002bba2) popup_note_image_window

0xc613,	// (0x0002bb68) popup_note_wait_window_ParamLimits

0xc613,	// (0x0002bb68) popup_note_wait_window

0xc665,	// (0x0002bbba) popup_note_window_ParamLimits

0xc665,	// (0x0002bbba) popup_note_window

0xc70b,	// (0x0002bc60) popup_query_code_window_ParamLimits

0xc70b,	// (0x0002bc60) popup_query_code_window

0x2030,	// (0x00021585) popup_query_data_code_window_ParamLimits

0x2030,	// (0x00021585) popup_query_data_code_window

0xc745,	// (0x0002bc9a) popup_query_data_window_ParamLimits

0xc745,	// (0x0002bc9a) popup_query_data_window

0xc7c7,	// (0x0002bd1c) popup_query_sat_info_window_ParamLimits

0xc7c7,	// (0x0002bd1c) popup_query_sat_info_window

0xc85e,	// (0x0002bdb3) popup_snote_single_graphic_window_ParamLimits

0xc85e,	// (0x0002bdb3) popup_snote_single_graphic_window

0xc85e,	// (0x0002bdb3) popup_snote_single_text_window_ParamLimits

0xc85e,	// (0x0002bdb3) popup_snote_single_text_window

0x20b7,	// (0x0002160c) popup_sub_window_general

0x21e7,	// (0x0002173c) popup_window_general_ParamLimits

0x21e7,	// (0x0002173c) popup_window_general

0x4eac,	// (0x00024401) power_save_pane

0xc13e,	// (0x0002b693) control_pane_g1_ParamLimits

0xc13e,	// (0x0002b693) control_pane_g1

0xc167,	// (0x0002b6bc) control_pane_g2_ParamLimits

0xc167,	// (0x0002b6bc) control_pane_g2

0x4e0f,	// (0x00024364) control_pane_g3_ParamLimits

0x4e0f,	// (0x00024364) control_pane_g3

0x0007,

0xf788,	// (0x0002ecdd) control_pane_g_ParamLimits

0xf788,	// (0x0002ecdd) control_pane_g

0xc1a8,	// (0x0002b6fd) control_pane_t1_ParamLimits

0xc1a8,	// (0x0002b6fd) control_pane_t1

0xc206,	// (0x0002b75b) control_pane_t2_ParamLimits

0xc206,	// (0x0002b75b) control_pane_t2

0x0002,

0xf799,	// (0x0002ecee) control_pane_t_ParamLimits

0xf799,	// (0x0002ecee) control_pane_t

0xd533,	// (0x0002ca88) navi_navi_volume_pane_cp1

0xd53b,	// (0x0002ca90) status_small_icon_pane

0x4d44,	// (0x00024299) status_small_pane_g1_ParamLimits

0x4d44,	// (0x00024299) status_small_pane_g1

0xd543,	// (0x0002ca98) status_small_pane_g2_ParamLimits

0xd543,	// (0x0002ca98) status_small_pane_g2

0xd54f,	// (0x0002caa4) status_small_pane_g3_ParamLimits

0xd54f,	// (0x0002caa4) status_small_pane_g3

0xd55b,	// (0x0002cab0) status_small_pane_g4_ParamLimits

0xd55b,	// (0x0002cab0) status_small_pane_g4

0xd567,	// (0x0002cabc) status_small_pane_g5_ParamLimits

0xd567,	// (0x0002cabc) status_small_pane_g5

0xd575,	// (0x0002caca) status_small_pane_g6_ParamLimits

0xd575,	// (0x0002caca) status_small_pane_g6

0x0007,

0xf777,	// (0x0002eccc) status_small_pane_g_ParamLimits

0xf777,	// (0x0002eccc) status_small_pane_g

0xd5a4,	// (0x0002caf9) status_small_pane_t1

0xd5c6,	// (0x0002cb1b) status_small_wait_pane_ParamLimits

0xd5c6,	// (0x0002cb1b) status_small_wait_pane

0xd3da,	// (0x0002c92f) aid_levels_signal_ParamLimits

0xd3da,	// (0x0002c92f) aid_levels_signal

0xd3f2,	// (0x0002c947) signal_pane_g1_ParamLimits

0xd3f2,	// (0x0002c947) signal_pane_g1

0xd40d,	// (0x0002c962) signal_pane_g2_ParamLimits

0xd40d,	// (0x0002c962) signal_pane_g2

0x0003,

0xf708,	// (0x0002ec5d) signal_pane_g_ParamLimits

0xf708,	// (0x0002ec5d) signal_pane_g

0x4628,	// (0x00023b7d) context_pane_g1

0xc072,	// (0x0002b5c7) title_pane_g1

0xc0a9,	// (0x0002b5fe) title_pane_t1

0x3617,	// (0x00022b6c) title_pane_t2

0x363d,	// (0x00022b92) title_pane_t3

0x0002,

0xf557,	// (0x0002eaac) title_pane_t

0xd9b4,	// (0x0002cf09) aid_levels_battery_ParamLimits

0xd9b4,	// (0x0002cf09) aid_levels_battery

0xd9d0,	// (0x0002cf25) battery_pane_g1_ParamLimits

0xd9d0,	// (0x0002cf25) battery_pane_g1

0xd9ed,	// (0x0002cf42) battery_pane_g2_ParamLimits

0xd9ed,	// (0x0002cf42) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002ed00) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002ed00) battery_pane_g

0xdbfa,	// (0x0002d14f) uni_indicator_pane_g1

0xdc10,	// (0x0002d165) uni_indicator_pane_g2

0xdc26,	// (0x0002d17b) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002ee6a) uni_indicator_pane_g

0x49c6,	// (0x00023f1b) navi_icon_pane_ParamLimits

0x49c6,	// (0x00023f1b) navi_icon_pane

0x4904,	// (0x00023e59) navi_midp_pane

0x49e2,	// (0x00023f37) navi_navi_pane

0x49ec,	// (0x00023f41) navi_text_pane_ParamLimits

0x49ec,	// (0x00023f41) navi_text_pane

0x3565,	// (0x00022aba) status_small_wait_pane_g1

0x3a6c,	// (0x00022fc1) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002ee65) status_small_wait_pane_g

0x6255,	// (0x000257aa) navi_navi_icon_text_pane

0x625d,	// (0x000257b2) navi_navi_pane_g1_ParamLimits

0x625d,	// (0x000257b2) navi_navi_pane_g1

0x626f,	// (0x000257c4) navi_navi_pane_g2_ParamLimits

0x626f,	// (0x000257c4) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002ee33) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002ee33) navi_navi_pane_g

0x6281,	// (0x000257d6) navi_navi_tabs_pane

0x628a,	// (0x000257df) navi_navi_text_pane

0x6255,	// (0x000257aa) navi_navi_volume_pane

0x6231,	// (0x00025786) navi_text_pane_t1

0x6225,	// (0x0002577a) navi_icon_pane_g1

0x6178,	// (0x000256cd) navi_navi_text_pane_t1

0x2471,	// (0x000219c6) navi_navi_volume_pane_g1

0x2479,	// (0x000219ce) volume_small_pane

0x60de,	// (0x00025633) navi_navi_icon_text_pane_g1

0x60e6,	// (0x0002563b) navi_navi_icon_text_pane_t1

0x49e2,	// (0x00023f37) navi_tabs_2_long_pane

0x49e2,	// (0x00023f37) navi_tabs_2_pane

0x49e2,	// (0x00023f37) navi_tabs_3_long_pane

0x49e2,	// (0x00023f37) navi_tabs_3_pane

0x49e2,	// (0x00023f37) navi_tabs_4_pane

0x2451,	// (0x000219a6) tabs_2_active_pane_ParamLimits

0x2451,	// (0x000219a6) tabs_2_active_pane

0x2461,	// (0x000219b6) tabs_2_passive_pane_ParamLimits

0x2461,	// (0x000219b6) tabs_2_passive_pane

0x241f,	// (0x00021974) tabs_3_active_pane_ParamLimits

0x241f,	// (0x00021974) tabs_3_active_pane

0x242f,	// (0x00021984) tabs_3_passive_pane_ParamLimits

0x242f,	// (0x00021984) tabs_3_passive_pane

0x2440,	// (0x00021995) tabs_3_passive_pane_cp_ParamLimits

0x2440,	// (0x00021995) tabs_3_passive_pane_cp

0x23db,	// (0x00021930) tabs_4_active_pane_ParamLimits

0x23db,	// (0x00021930) tabs_4_active_pane

0x23ec,	// (0x00021941) tabs_4_passive_pane_ParamLimits

0x23ec,	// (0x00021941) tabs_4_passive_pane

0x23fd,	// (0x00021952) tabs_4_passive_pane_cp_ParamLimits

0x23fd,	// (0x00021952) tabs_4_passive_pane_cp

0x240e,	// (0x00021963) tabs_4_passive_pane_cp2_ParamLimits

0x240e,	// (0x00021963) tabs_4_passive_pane_cp2

0x23b7,	// (0x0002190c) tabs_2_long_active_pane_ParamLimits

0x23b7,	// (0x0002190c) tabs_2_long_active_pane

0x23c9,	// (0x0002191e) tabs_2_long_passive_pane_ParamLimits

0x23c9,	// (0x0002191e) tabs_2_long_passive_pane

0x2378,	// (0x000218cd) tabs_3_long_active_pane_ParamLimits

0x2378,	// (0x000218cd) tabs_3_long_active_pane

0x238b,	// (0x000218e0) tabs_3_long_passive_pane_ParamLimits

0x238b,	// (0x000218e0) tabs_3_long_passive_pane

0x23a4,	// (0x000218f9) tabs_3_long_passive_pane_cp_ParamLimits

0x23a4,	// (0x000218f9) tabs_3_long_passive_pane_cp

0x231e,	// (0x00021873) volume_small_pane_g1

0x2327,	// (0x0002187c) volume_small_pane_g2

0x2330,	// (0x00021885) volume_small_pane_g3

0x2339,	// (0x0002188e) volume_small_pane_g4

0x2342,	// (0x00021897) volume_small_pane_g5

0x234b,	// (0x000218a0) volume_small_pane_g6

0x2354,	// (0x000218a9) volume_small_pane_g7

0x235d,	// (0x000218b2) volume_small_pane_g8

0x2366,	// (0x000218bb) volume_small_pane_g9

0x236f,	// (0x000218c4) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002edff) volume_small_pane_g

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp2_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp2

0x365d,	// (0x00022bb2) tabs_3_active_pane_g1

0xd001,	// (0x0002c556) tabs_3_active_pane_t1

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp2_ParamLimits

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp2

0x365d,	// (0x00022bb2) tabs_3_passive_pane_g1

0xd001,	// (0x0002c556) tabs_3_passive_pane_t1

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp3_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp3

0x3677,	// (0x00022bcc) tabs_4_active_pane_g1

0xd013,	// (0x0002c568) tabs_4_active_pane_t1

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp3_ParamLimits

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp3

0x3677,	// (0x00022bcc) tabs_4_1_passive_pane_g1

0xd013,	// (0x0002c568) tabs_4_1_passive_pane_t1

0x4e92,	// (0x000243e7) list_highlight_pane_cp2

0xdcae,	// (0x0002d203) list_set_pane_ParamLimits

0xdcae,	// (0x0002d203) list_set_pane

0xdd48,	// (0x0002d29d) main_pane_set_t1_ParamLimits

0xdd48,	// (0x0002d29d) main_pane_set_t1

0xdd68,	// (0x0002d2bd) main_pane_set_t2_ParamLimits

0xdd68,	// (0x0002d2bd) main_pane_set_t2

0xdd7c,	// (0x0002d2d1) main_pane_set_t3_ParamLimits

0xdd7c,	// (0x0002d2d1) main_pane_set_t3

0xdd8e,	// (0x0002d2e3) main_pane_set_t4_ParamLimits

0xdd8e,	// (0x0002d2e3) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002eecf) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002eecf) main_pane_set_t

0xdda0,	// (0x0002d2f5) setting_code_pane

0xddaa,	// (0x0002d2ff) setting_slider_graphic_pane

0xddaa,	// (0x0002d2ff) setting_slider_pane

0xddaa,	// (0x0002d2ff) setting_text_pane

0xddaa,	// (0x0002d2ff) setting_volume_pane

0x15db,	// (0x00020b30) volume_set_pane

0x364f,	// (0x00022ba4) bg_set_opt_pane_cp

0x15e3,	// (0x00020b38) setting_slider_pane_t1

0x15fc,	// (0x00020b51) setting_slider_pane_t2

0x1616,	// (0x00020b6b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002eab3) setting_slider_pane_t

0x162e,	// (0x00020b83) slider_set_pane

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp2

0x3691,	// (0x00022be6) setting_slider_graphic_pane_g1

0x1644,	// (0x00020b99) setting_slider_graphic_pane_t1

0x1654,	// (0x00020ba9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002eaba) setting_slider_graphic_pane_t

0x1664,	// (0x00020bb9) slider_set_pane_cp

0x356f,	// (0x00022ac4) input_focus_pane_cp1

0x6763,	// (0x00025cb8) list_set_text_pane

0x3565,	// (0x00022aba) setting_text_pane_g1

0x356f,	// (0x00022ac4) input_focus_pane_cp2

0x3565,	// (0x00022aba) setting_code_pane_g1

0x369a,	// (0x00022bef) setting_code_pane_t1

0x00a9,	// (0x0001f5fe) set_text_pane_t1_ParamLimits

0x00a9,	// (0x0001f5fe) set_text_pane_t1

0x3f19,	// (0x0002346e) set_opt_bg_pane_g1

0x3f21,	// (0x00023476) set_opt_bg_pane_g2

0x673d,	// (0x00025c92) set_opt_bg_pane_g3

0x3f31,	// (0x00023486) set_opt_bg_pane_g4

0x3f39,	// (0x0002348e) set_opt_bg_pane_g5

0x3f41,	// (0x00023496) set_opt_bg_pane_g6

0x6747,	// (0x00025c9c) set_opt_bg_pane_g7

0x674f,	// (0x00025ca4) set_opt_bg_pane_g8

0x6759,	// (0x00025cae) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002eebc) set_opt_bg_pane_g

0x6730,	// (0x00025c85) slider_set_pane_g1

0x24e6,	// (0x00021a3b) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002eead) slider_set_pane_g

0x2482,	// (0x000219d7) volume_set_pane_g1

0x248a,	// (0x000219df) volume_set_pane_g2

0x2492,	// (0x000219e7) volume_set_pane_g3

0x249a,	// (0x000219ef) volume_set_pane_g4

0x24a2,	// (0x000219f7) volume_set_pane_g5

0x24aa,	// (0x000219ff) volume_set_pane_g6

0x24b2,	// (0x00021a07) volume_set_pane_g7

0x24ba,	// (0x00021a0f) volume_set_pane_g8

0x24c2,	// (0x00021a17) volume_set_pane_g9

0x24ca,	// (0x00021a1f) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002ee85) volume_set_pane_g

0xd025,	// (0x0002c57a) indicator_pane_ParamLimits

0xd025,	// (0x0002c57a) indicator_pane

0xd04d,	// (0x0002c5a2) main_idle_pane_g2_ParamLimits

0xd04d,	// (0x0002c5a2) main_idle_pane_g2

0xd085,	// (0x0002c5da) main_pane_idle_g1_ParamLimits

0xd085,	// (0x0002c5da) main_pane_idle_g1

0x36e9,	// (0x00022c3e) popup_clock_digital_analogue_window_ParamLimits

0x36e9,	// (0x00022c3e) popup_clock_digital_analogue_window

0xd0ac,	// (0x0002c601) soft_indicator_pane_ParamLimits

0xd0ac,	// (0x0002c601) soft_indicator_pane

0xd0c6,	// (0x0002c61b) wallpaper_pane_ParamLimits

0xd0c6,	// (0x0002c61b) wallpaper_pane

0x3565,	// (0x00022aba) wallpaper_pane_g1

0xd0d8,	// (0x0002c62d) indicator_pane_g1_ParamLimits

0xd0d8,	// (0x0002c62d) indicator_pane_g1

0x6b67,	// (0x000260bc) navi_navi_icon_text_pane_srt_g1

0x373b,	// (0x00022c90) soft_indicator_pane_t1

0x3755,	// (0x00022caa) aid_ps_area_pane

0xd0ee,	// (0x0002c643) aid_ps_clock_pane

0x3774,	// (0x00022cc9) aid_ps_indicator_pane

0x3780,	// (0x00022cd5) indicator_ps_pane_ParamLimits

0x3780,	// (0x00022cd5) indicator_ps_pane

0x378f,	// (0x00022ce4) power_save_pane_g1_ParamLimits

0x378f,	// (0x00022ce4) power_save_pane_g1

0x379b,	// (0x00022cf0) power_save_pane_g2_ParamLimits

0x379b,	// (0x00022cf0) power_save_pane_g2

0x11ec,	// (0x00020741) aid_navinavi_width_pane

0x3755,	// (0x00022caa) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002eabf) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002eabf) power_save_pane_g

0x37a9,	// (0x00022cfe) power_save_pane_t1_ParamLimits

0x37a9,	// (0x00022cfe) power_save_pane_t1

0xd0ee,	// (0x0002c643) aid_ps_clock_pane_ParamLimits

0x3774,	// (0x00022cc9) aid_ps_indicator_pane_ParamLimits

0x37bb,	// (0x00022d10) power_save_pane_t4_ParamLimits

0x37bb,	// (0x00022d10) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002eac4) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002eac4) power_save_pane_t

0x37e5,	// (0x00022d3a) power_save_t3_ParamLimits

0x37e5,	// (0x00022d3a) power_save_t3

0x37d0,	// (0x00022d25) power_save_t2_ParamLimits

0x37d0,	// (0x00022d25) power_save_t2

0x37fa,	// (0x00022d4f) indicator_ps_pane_g1

0xd0fc,	// (0x0002c651) ai_gene_pane_ParamLimits

0xd0fc,	// (0x0002c651) ai_gene_pane

0xd113,	// (0x0002c668) ai_links_pane_ParamLimits

0xd113,	// (0x0002c668) ai_links_pane

0xd12b,	// (0x0002c680) indicator_pane_cp1_ParamLimits

0xd12b,	// (0x0002c680) indicator_pane_cp1

0xd13a,	// (0x0002c68f) main_pane_idle_g1_cp_ParamLimits

0xd13a,	// (0x0002c68f) main_pane_idle_g1_cp

0x3833,	// (0x00022d88) popup_ai_links_title_window

0xd152,	// (0x0002c6a7) soft_indicator_pane_cp1_ParamLimits

0xd152,	// (0x0002c6a7) soft_indicator_pane_cp1

0x651e,	// (0x00025a73) ai_links_pane_g1

0x6527,	// (0x00025a7c) grid_ai_links_pane

0xdbf1,	// (0x0002d146) ai_gene_pane_1

0x650c,	// (0x00025a61) ai_gene_pane_2

0x6515,	// (0x00025a6a) list_highlight_pane_cp4

0xdbcd,	// (0x0002d122) cell_ai_link_pane_ParamLimits

0xdbcd,	// (0x0002d122) cell_ai_link_pane

0x64dd,	// (0x00025a32) cell_ai_link_pane_g1

0x3a6c,	// (0x00022fc1) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002ee60) cell_ai_link_pane_g

0x356f,	// (0x00022ac4) grid_highlight_cp2

0x356f,	// (0x00022ac4) bg_popup_sub_pane_cp1

0x3856,	// (0x00022dab) popup_ai_links_title_window_t1

0x642b,	// (0x00025980) ai_gene_pane_1_g1_ParamLimits

0x642b,	// (0x00025980) ai_gene_pane_1_g1

0x6437,	// (0x0002598c) ai_gene_pane_1_g2_ParamLimits

0x6437,	// (0x0002598c) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002ee56) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002ee56) ai_gene_pane_1_g

0x6444,	// (0x00025999) ai_gene_pane_1_t1_ParamLimits

0x6444,	// (0x00025999) ai_gene_pane_1_t1

0x6478,	// (0x000259cd) grid_ai_soft_ind_pane

0x6416,	// (0x0002596b) ai_gene_pane_2_t1_ParamLimits

0x6416,	// (0x0002596b) ai_gene_pane_2_t1

0xd166,	// (0x0002c6bb) main_pane_empty_t1_ParamLimits

0xd166,	// (0x0002c6bb) main_pane_empty_t1

0xd17e,	// (0x0002c6d3) main_pane_empty_t2_ParamLimits

0xd17e,	// (0x0002c6d3) main_pane_empty_t2

0xd193,	// (0x0002c6e8) main_pane_empty_t3_ParamLimits

0xd193,	// (0x0002c6e8) main_pane_empty_t3

0xd1a5,	// (0x0002c6fa) main_pane_empty_t4_ParamLimits

0xd1a5,	// (0x0002c6fa) main_pane_empty_t4

0xd1b7,	// (0x0002c70c) main_pane_empty_t5_ParamLimits

0xd1b7,	// (0x0002c70c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002eac9) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002eac9) main_pane_empty_t

0x3f6a,	// (0x000234bf) bg_popup_window_pane_ParamLimits

0x3f6a,	// (0x000234bf) bg_popup_window_pane

0x6186,	// (0x000256db) find_popup_pane_cp2_ParamLimits

0x6186,	// (0x000256db) find_popup_pane_cp2

0x6192,	// (0x000256e7) heading_pane_ParamLimits

0x6192,	// (0x000256e7) heading_pane

0x356f,	// (0x00022ac4) bg_popup_sub_pane

0xdb26,	// (0x0002d07b) bg_popup_window_pane_g1_ParamLimits

0xdb26,	// (0x0002d07b) bg_popup_window_pane_g1

0xdb35,	// (0x0002d08a) bg_popup_window_pane_g2_ParamLimits

0xdb35,	// (0x0002d08a) bg_popup_window_pane_g2

0xdb69,	// (0x0002d0be) bg_popup_window_pane_g3_ParamLimits

0xdb69,	// (0x0002d0be) bg_popup_window_pane_g3

0xdb75,	// (0x0002d0ca) bg_popup_window_pane_g4_ParamLimits

0xdb75,	// (0x0002d0ca) bg_popup_window_pane_g4

0xdb84,	// (0x0002d0d9) bg_popup_window_pane_g5_ParamLimits

0xdb84,	// (0x0002d0d9) bg_popup_window_pane_g5

0xdb94,	// (0x0002d0e9) bg_popup_window_pane_g6_ParamLimits

0xdb94,	// (0x0002d0e9) bg_popup_window_pane_g6

0xdba0,	// (0x0002d0f5) bg_popup_window_pane_g7_ParamLimits

0xdba0,	// (0x0002d0f5) bg_popup_window_pane_g7

0xdbaf,	// (0x0002d104) bg_popup_window_pane_g8_ParamLimits

0xdbaf,	// (0x0002d104) bg_popup_window_pane_g8

0xdbbe,	// (0x0002d113) bg_popup_window_pane_g9_ParamLimits

0xdbbe,	// (0x0002d113) bg_popup_window_pane_g9

0x616c,	// (0x000256c1) bg_popup_window_pane_g10_ParamLimits

0x616c,	// (0x000256c1) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002ee1e) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002ee1e) bg_popup_window_pane_g

0x6095,	// (0x000255ea) bg_popup_heading_pane_ParamLimits

0x6095,	// (0x000255ea) bg_popup_heading_pane

0x256e,	// (0x00021ac3) tabs_4_passive_pane_cp_srt_ParamLimits

0x256e,	// (0x00021ac3) tabs_4_passive_pane_cp_srt

0x2580,	// (0x00021ad5) tabs_4_passive_pane_srt_ParamLimits

0x60a9,	// (0x000255fe) heading_pane_g2

0x2580,	// (0x00021ad5) tabs_4_passive_pane_srt

0x5410,	// (0x00024965) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5410,	// (0x00024965) bg_passive_tab_pane_cp3_srt

0x60b1,	// (0x00025606) heading_pane_t1_ParamLimits

0x60b1,	// (0x00025606) heading_pane_t1

0x60c8,	// (0x0002561d) heading_pane_t2_ParamLimits

0x60c8,	// (0x0002561d) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002ee19) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002ee19) heading_pane_t

0x5bc2,	// (0x00025117) bg_popup_heading_pane_g1

0x5c71,	// (0x000251c6) bg_popup_heading_pane_g2

0x5c7b,	// (0x000251d0) bg_popup_heading_pane_g3

0x5c85,	// (0x000251da) bg_popup_heading_pane_g4

0x5c8f,	// (0x000251e4) bg_popup_heading_pane_g5

0x5c99,	// (0x000251ee) bg_popup_heading_pane_g6

0x5ca1,	// (0x000251f6) bg_popup_heading_pane_g7

0x5ca9,	// (0x000251fe) bg_popup_heading_pane_g8

0x5cb3,	// (0x00025208) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002edd5) bg_popup_heading_pane_g

0x539c,	// (0x000248f1) bg_popup_sub_pane_g1

0x53a4,	// (0x000248f9) bg_popup_sub_pane_g2

0x53ac,	// (0x00024901) bg_popup_sub_pane_g3

0x53b4,	// (0x00024909) bg_popup_sub_pane_g4

0x53bc,	// (0x00024911) bg_popup_sub_pane_g5

0x53c4,	// (0x00024919) bg_popup_sub_pane_g6

0x53cc,	// (0x00024921) bg_popup_sub_pane_g7

0x53d4,	// (0x00024929) bg_popup_sub_pane_g8

0x53dc,	// (0x00024931) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002edaf) bg_popup_sub_pane_g

0x38ca,	// (0x00022e1f) bg_popup_window_pane_cp5_ParamLimits

0x38ca,	// (0x00022e1f) bg_popup_window_pane_cp5

0x38e6,	// (0x00022e3b) popup_note_window_g1_ParamLimits

0x38e6,	// (0x00022e3b) popup_note_window_g1

0x38f2,	// (0x00022e47) popup_note_window_t1_ParamLimits

0x38f2,	// (0x00022e47) popup_note_window_t1

0x3908,	// (0x00022e5d) popup_note_window_t2_ParamLimits

0x3908,	// (0x00022e5d) popup_note_window_t2

0x391e,	// (0x00022e73) popup_note_window_t3_ParamLimits

0x391e,	// (0x00022e73) popup_note_window_t3

0x3934,	// (0x00022e89) popup_note_window_t4_ParamLimits

0x3934,	// (0x00022e89) popup_note_window_t4

0x395c,	// (0x00022eb1) popup_note_window_t5_ParamLimits

0x395c,	// (0x00022eb1) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002ead4) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002ead4) popup_note_window_t

0x3980,	// (0x00022ed5) bg_popup_window_pane_cp6_ParamLimits

0x3980,	// (0x00022ed5) bg_popup_window_pane_cp6

0x5b3e,	// (0x00025093) popup_note_image_window_g1_ParamLimits

0x5b3e,	// (0x00025093) popup_note_image_window_g1

0x5b4a,	// (0x0002509f) popup_note_image_window_g2_ParamLimits

0x5b4a,	// (0x0002509f) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002eda3) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002eda3) popup_note_image_window_g

0x5b63,	// (0x000250b8) popup_note_image_window_t1_ParamLimits

0x5b63,	// (0x000250b8) popup_note_image_window_t1

0x5b7c,	// (0x000250d1) popup_note_image_window_t2_ParamLimits

0x5b7c,	// (0x000250d1) popup_note_image_window_t2

0x5b95,	// (0x000250ea) popup_note_image_window_t3_ParamLimits

0x5b95,	// (0x000250ea) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002eda8) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002eda8) popup_note_image_window_t

0x59ff,	// (0x00024f54) bg_popup_window_pane_cp7_ParamLimits

0x59ff,	// (0x00024f54) bg_popup_window_pane_cp7

0x5a2f,	// (0x00024f84) popup_note_wait_window_g1_ParamLimits

0x5a2f,	// (0x00024f84) popup_note_wait_window_g1

0x5a3b,	// (0x00024f90) popup_note_wait_window_g2_ParamLimits

0x5a3b,	// (0x00024f90) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002ed91) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002ed91) popup_note_wait_window_g

0x5a53,	// (0x00024fa8) popup_note_wait_window_t1_ParamLimits

0x5a53,	// (0x00024fa8) popup_note_wait_window_t1

0x5a7a,	// (0x00024fcf) popup_note_wait_window_t2_ParamLimits

0x5a7a,	// (0x00024fcf) popup_note_wait_window_t2

0x5a97,	// (0x00024fec) popup_note_wait_window_t3_ParamLimits

0x5a97,	// (0x00024fec) popup_note_wait_window_t3

0x5aaa,	// (0x00024fff) popup_note_wait_window_t4_ParamLimits

0x5aaa,	// (0x00024fff) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002ed98) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002ed98) popup_note_wait_window_t

0x5acf,	// (0x00025024) wait_bar_pane_ParamLimits

0x5acf,	// (0x00025024) wait_bar_pane

0x356f,	// (0x00022ac4) wait_anim_pane

0x356f,	// (0x00022ac4) wait_border_pane

0x3565,	// (0x00022aba) wait_anim_pane_g1

0x3565,	// (0x00022aba) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002ec58) wait_anim_pane_g

0x59a3,	// (0x00024ef8) wait_border_pane_g1

0x59ae,	// (0x00024f03) wait_border_pane_g2

0x59b7,	// (0x00024f0c) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002ed8a) wait_border_pane_g

0x5802,	// (0x00024d57) bg_popup_window_pane_cp16_ParamLimits

0x5802,	// (0x00024d57) bg_popup_window_pane_cp16

0x590e,	// (0x00024e63) indicator_popup_pane_cp4_ParamLimits

0x590e,	// (0x00024e63) indicator_popup_pane_cp4

0x5922,	// (0x00024e77) popup_query_data_window_t1_ParamLimits

0x5922,	// (0x00024e77) popup_query_data_window_t1

0x5934,	// (0x00024e89) popup_query_data_window_t2_ParamLimits

0x5934,	// (0x00024e89) popup_query_data_window_t2

0x594d,	// (0x00024ea2) popup_query_data_window_t3_ParamLimits

0x594d,	// (0x00024ea2) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002ed83) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002ed83) popup_query_data_window_t

0x5967,	// (0x00024ebc) query_popup_data_pane_ParamLimits

0x5967,	// (0x00024ebc) query_popup_data_pane

0x597b,	// (0x00024ed0) query_popup_data_pane_cp1_ParamLimits

0x597b,	// (0x00024ed0) query_popup_data_pane_cp1

0x5802,	// (0x00024d57) bg_popup_window_pane_cp10_ParamLimits

0x5802,	// (0x00024d57) bg_popup_window_pane_cp10

0x5834,	// (0x00024d89) indicator_popup_pane_ParamLimits

0x5834,	// (0x00024d89) indicator_popup_pane

0x5862,	// (0x00024db7) popup_query_code_window_t1_ParamLimits

0x5862,	// (0x00024db7) popup_query_code_window_t1

0x587c,	// (0x00024dd1) popup_query_code_window_t2_ParamLimits

0x587c,	// (0x00024dd1) popup_query_code_window_t2

0x58c5,	// (0x00024e1a) popup_query_code_window_t3_ParamLimits

0x58c5,	// (0x00024e1a) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002ed7c) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002ed7c) popup_query_code_window_t

0x58f4,	// (0x00024e49) query_popup_pane_ParamLimits

0x58f4,	// (0x00024e49) query_popup_pane

0x3980,	// (0x00022ed5) bg_popup_window_pane_cp15_ParamLimits

0x3980,	// (0x00022ed5) bg_popup_window_pane_cp15

0x399e,	// (0x00022ef3) indicator_popup_pane_cp1_ParamLimits

0x399e,	// (0x00022ef3) indicator_popup_pane_cp1

0x39b1,	// (0x00022f06) indicator_popup_pane_cp2_ParamLimits

0x39b1,	// (0x00022f06) indicator_popup_pane_cp2

0x39c4,	// (0x00022f19) popup_query_data_code_window_g1_ParamLimits

0x39c4,	// (0x00022f19) popup_query_data_code_window_g1

0x39d7,	// (0x00022f2c) popup_query_data_code_window_t1_ParamLimits

0x39d7,	// (0x00022f2c) popup_query_data_code_window_t1

0x39e9,	// (0x00022f3e) popup_query_data_code_window_t2_ParamLimits

0x39e9,	// (0x00022f3e) popup_query_data_code_window_t2

0x39fb,	// (0x00022f50) popup_query_data_code_window_t3_ParamLimits

0x39fb,	// (0x00022f50) popup_query_data_code_window_t3

0x3a11,	// (0x00022f66) popup_query_data_code_window_t4_ParamLimits

0x3a11,	// (0x00022f66) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002eadf) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002eadf) popup_query_data_code_window_t

0x2251,	// (0x000217a6) list_single_midp_graphic_pane_g3

0x3a29,	// (0x00022f7e) query_popup_data_pane_cp2_ParamLimits

0x3a3c,	// (0x00022f91) query_popup_pane_cp2_ParamLimits

0x3a3c,	// (0x00022f91) query_popup_pane_cp2

0x356f,	// (0x00022ac4) bg_popup_window_pane_cp11

0x57fa,	// (0x00024d4f) heading_pane_cp5

0x3b27,	// (0x0002307c) listscroll_popup_info_pane

0x356f,	// (0x00022ac4) input_focus_pane_cp3

0x3a4f,	// (0x00022fa4) query_popup_pane_t1

0x3a5d,	// (0x00022fb2) list_popup_info_pane_ParamLimits

0x3a5d,	// (0x00022fb2) list_popup_info_pane

0x3a6c,	// (0x00022fc1) listscroll_popup_info_pane_g1

0x3a74,	// (0x00022fc9) scroll_pane_cp7

0x3a7e,	// (0x00022fd3) popup_info_list_pane_t1_ParamLimits

0x3a7e,	// (0x00022fd3) popup_info_list_pane_t1

0x3a98,	// (0x00022fed) popup_info_list_pane_t2_ParamLimits

0x3a98,	// (0x00022fed) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002eae8) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002eae8) popup_info_list_pane_t

0x356f,	// (0x00022ac4) bg_popup_window_pane_cp12

0x6b81,	// (0x000260d6) find_popup_pane

0x364f,	// (0x00022ba4) bg_popup_window_pane_cp3

0x3ab2,	// (0x00023007) heading_pane_cp3

0x3abe,	// (0x00023013) listscroll_popup_graphic_pane

0x356f,	// (0x00022ac4) bg_popup_window_pane_cp4

0xd219,	// (0x0002c76e) heading_pane_cp4

0x3b27,	// (0x0002307c) listscroll_popup_colour_pane

0x3b2f,	// (0x00023084) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3b2f,	// (0x00023084) cell_large_graphic_colour_none_popup_pane

0xd221,	// (0x0002c776) grid_large_graphic_colour_popup_pane_ParamLimits

0xd221,	// (0x0002c776) grid_large_graphic_colour_popup_pane

0x3b6f,	// (0x000230c4) listscroll_popup_colour_pane_g1_ParamLimits

0x3b6f,	// (0x000230c4) listscroll_popup_colour_pane_g1

0x3b86,	// (0x000230db) listscroll_popup_colour_pane_g2_ParamLimits

0x3b86,	// (0x000230db) listscroll_popup_colour_pane_g2

0x3b9d,	// (0x000230f2) listscroll_popup_colour_pane_g3_ParamLimits

0x3b9d,	// (0x000230f2) listscroll_popup_colour_pane_g3

0xd245,	// (0x0002c79a) listscroll_popup_colour_pane_g4_ParamLimits

0xd245,	// (0x0002c79a) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002eaed) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002eaed) listscroll_popup_colour_pane_g

0x3bc1,	// (0x00023116) scroll_pane_cp6_ParamLimits

0x3bc1,	// (0x00023116) scroll_pane_cp6

0xd255,	// (0x0002c7aa) cell_large_graphic_colour_popup_pane_ParamLimits

0xd255,	// (0x0002c7aa) cell_large_graphic_colour_popup_pane

0x3bf2,	// (0x00023147) cell_large_graphic_colour_none_popup_pane_t1

0x356f,	// (0x00022ac4) grid_highlight_pane_cp5

0x3c01,	// (0x00023156) cell_large_graphic_colour_popup_pane_g1

0x3c09,	// (0x0002315e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002eaf6) cell_large_graphic_colour_popup_pane_g

0x3c11,	// (0x00023166) cell_large_graphic_colour_popup_pane_g2_copy1

0x3c1a,	// (0x0002316f) grid_highlight_pane_cp4

0x3c22,	// (0x00023177) bg_popup_window_pane_cp8_ParamLimits

0x3c22,	// (0x00023177) bg_popup_window_pane_cp8

0x3c3d,	// (0x00023192) popup_snote_single_text_window_g1_ParamLimits

0x3c3d,	// (0x00023192) popup_snote_single_text_window_g1

0x3c4f,	// (0x000231a4) popup_snote_single_text_window_t1_ParamLimits

0x3c4f,	// (0x000231a4) popup_snote_single_text_window_t1

0x3c62,	// (0x000231b7) popup_snote_single_text_window_t2_ParamLimits

0x3c62,	// (0x000231b7) popup_snote_single_text_window_t2

0x3c75,	// (0x000231ca) popup_snote_single_text_window_t3_ParamLimits

0x3c75,	// (0x000231ca) popup_snote_single_text_window_t3

0x3cae,	// (0x00023203) popup_snote_single_text_window_t4_ParamLimits

0x3cae,	// (0x00023203) popup_snote_single_text_window_t4

0x3ce2,	// (0x00023237) popup_snote_single_text_window_t5_ParamLimits

0x3ce2,	// (0x00023237) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002eafb) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002eafb) popup_snote_single_text_window_t

0x3d11,	// (0x00023266) bg_popup_window_pane_cp9_ParamLimits

0x3d11,	// (0x00023266) bg_popup_window_pane_cp9

0x3c3d,	// (0x00023192) popup_snote_single_graphic_window_g1_ParamLimits

0x3c3d,	// (0x00023192) popup_snote_single_graphic_window_g1

0x3d1f,	// (0x00023274) popup_snote_single_graphic_window_g2_ParamLimits

0x3d1f,	// (0x00023274) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002eb06) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002eb06) popup_snote_single_graphic_window_g

0x3d2b,	// (0x00023280) popup_snote_single_graphic_window_t1_ParamLimits

0x3d2b,	// (0x00023280) popup_snote_single_graphic_window_t1

0x3d3e,	// (0x00023293) popup_snote_single_graphic_window_t2_ParamLimits

0x3d3e,	// (0x00023293) popup_snote_single_graphic_window_t2

0x3d51,	// (0x000232a6) popup_snote_single_graphic_window_t3_ParamLimits

0x3d51,	// (0x000232a6) popup_snote_single_graphic_window_t3

0x3d8a,	// (0x000232df) popup_snote_single_graphic_window_t4_ParamLimits

0x3d8a,	// (0x000232df) popup_snote_single_graphic_window_t4

0x3dbe,	// (0x00023313) popup_snote_single_graphic_window_t5_ParamLimits

0x3dbe,	// (0x00023313) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002eb0b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002eb0b) popup_snote_single_graphic_window_t

0x6ac5,	// (0x0002601a) grid_graphic_popup_pane_ParamLimits

0x6ac5,	// (0x0002601a) grid_graphic_popup_pane

0x6aed,	// (0x00026042) listscroll_popup_graphic_pane_g1_ParamLimits

0x6aed,	// (0x00026042) listscroll_popup_graphic_pane_g1

0xdea2,	// (0x0002d3f7) listscroll_popup_graphic_pane_g2_ParamLimits

0xdea2,	// (0x0002d3f7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002eef9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002eef9) listscroll_popup_graphic_pane_g

0x6b15,	// (0x0002606a) scroll_pane_cp5

0xde5e,	// (0x0002d3b3) cell_graphic_popup_pane_ParamLimits

0xde5e,	// (0x0002d3b3) cell_graphic_popup_pane

0x6a43,	// (0x00025f98) cell_graphic_popup_pane_g1

0x6a4b,	// (0x00025fa0) cell_graphic_popup_pane_g2

0x3c11,	// (0x00023166) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002eef2) cell_graphic_popup_pane_g

0x6a54,	// (0x00025fa9) cell_graphic_popup_pane_t2

0x3c1a,	// (0x0002316f) grid_highlight_pane_cp3

0x3dff,	// (0x00023354) list_gen_pane_ParamLimits

0x3dff,	// (0x00023354) list_gen_pane

0x3e31,	// (0x00023386) scroll_pane

0xde15,	// (0x0002d36a) bg_list_pane_g1_ParamLimits

0xde15,	// (0x0002d36a) bg_list_pane_g1

0x69b8,	// (0x00025f0d) bg_list_pane_g2_ParamLimits

0x69b8,	// (0x00025f0d) bg_list_pane_g2

0x69cd,	// (0x00025f22) bg_list_pane_g3_ParamLimits

0x69cd,	// (0x00025f22) bg_list_pane_g3

0x69e1,	// (0x00025f36) bg_list_pane_g4_ParamLimits

0x69e1,	// (0x00025f36) bg_list_pane_g4

0xde32,	// (0x0002d387) bg_list_pane_g5_ParamLimits

0xde32,	// (0x0002d387) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002eee7) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002eee7) bg_list_pane_g

0xdddd,	// (0x0002d332) list_double2_graphic_large_graphic_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double2_graphic_large_graphic_pane

0xdddd,	// (0x0002d332) list_double2_graphic_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double2_graphic_pane

0xdddd,	// (0x0002d332) list_double2_large_graphic_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double2_large_graphic_pane

0xdddd,	// (0x0002d332) list_double2_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double2_pane

0xdddd,	// (0x0002d332) list_double_graphic_heading_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_graphic_heading_pane

0xdddd,	// (0x0002d332) list_double_graphic_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_graphic_pane

0xdddd,	// (0x0002d332) list_double_heading_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_heading_pane

0xdddd,	// (0x0002d332) list_double_large_graphic_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_large_graphic_pane

0xdddd,	// (0x0002d332) list_double_number_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_number_pane

0xdddd,	// (0x0002d332) list_double_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_pane

0xdddd,	// (0x0002d332) list_double_time_pane_ParamLimits

0xdddd,	// (0x0002d332) list_double_time_pane

0xdddd,	// (0x0002d332) list_setting_number_pane_ParamLimits

0xdddd,	// (0x0002d332) list_setting_number_pane

0xdddd,	// (0x0002d332) list_setting_pane_ParamLimits

0xdddd,	// (0x0002d332) list_setting_pane

0xddef,	// (0x0002d344) list_single_2graphic_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_2graphic_pane

0xddef,	// (0x0002d344) list_single_graphic_heading_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_graphic_heading_pane

0xddef,	// (0x0002d344) list_single_graphic_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_graphic_pane

0xddef,	// (0x0002d344) list_single_heading_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_heading_pane

0xddef,	// (0x0002d344) list_single_large_graphic_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_large_graphic_pane

0xddef,	// (0x0002d344) list_single_number_heading_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_number_heading_pane

0xddef,	// (0x0002d344) list_single_number_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_number_pane

0xddef,	// (0x0002d344) list_single_pane_ParamLimits

0xddef,	// (0x0002d344) list_single_pane

0x356f,	// (0x00022ac4) list_highlight_pane_cp1

0x0886,	// (0x0001fddb) list_single_pane_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_pane_g1

0x0892,	// (0x0001fde7) list_single_pane_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_pane_g

0x0b9a,	// (0x000200ef) list_single_pane_t1_ParamLimits

0x0b9a,	// (0x000200ef) list_single_pane_t1

0x0886,	// (0x0001fddb) list_single_number_pane_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_number_pane_g1

0x0892,	// (0x0001fde7) list_single_number_pane_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_number_pane_g

0x08e4,	// (0x0001fe39) list_single_number_pane_t1_ParamLimits

0x08e4,	// (0x0001fe39) list_single_number_pane_t1

0xbbcf,	// (0x0002b124) list_single_number_pane_t2_ParamLimits

0xbbcf,	// (0x0002b124) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002eea8) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002eea8) list_single_number_pane_t

0xb5b9,	// (0x0002ab0e) list_single_graphic_pane_g1_ParamLimits

0xb5b9,	// (0x0002ab0e) list_single_graphic_pane_g1

0x0886,	// (0x0001fddb) list_single_graphic_pane_g2_ParamLimits

0x0886,	// (0x0001fddb) list_single_graphic_pane_g2

0x0892,	// (0x0001fde7) list_single_graphic_pane_g3_ParamLimits

0x0892,	// (0x0001fde7) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002eb16) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002eb16) list_single_graphic_pane_g

0xb5c5,	// (0x0002ab1a) list_single_graphic_pane_t1_ParamLimits

0xb5c5,	// (0x0002ab1a) list_single_graphic_pane_t1

0x0886,	// (0x0001fddb) list_single_heading_pane_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_heading_pane_g1

0x0892,	// (0x0001fde7) list_single_heading_pane_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_heading_pane_g

0xb5db,	// (0x0002ab30) list_single_heading_pane_t1_ParamLimits

0xb5db,	// (0x0002ab30) list_single_heading_pane_t1

0xb5f1,	// (0x0002ab46) list_single_heading_pane_t2_ParamLimits

0xb5f1,	// (0x0002ab46) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002eb22) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002eb22) list_single_heading_pane_t

0x0886,	// (0x0001fddb) list_single_number_heading_pane_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_number_heading_pane_g1

0x0892,	// (0x0001fde7) list_single_number_heading_pane_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_number_heading_pane_g

0xb5db,	// (0x0002ab30) list_single_number_heading_pane_t1_ParamLimits

0xb5db,	// (0x0002ab30) list_single_number_heading_pane_t1

0xb603,	// (0x0002ab58) list_single_number_heading_pane_t2_ParamLimits

0xb603,	// (0x0002ab58) list_single_number_heading_pane_t2

0x0b74,	// (0x000200c9) list_single_number_heading_pane_t3_ParamLimits

0x0b74,	// (0x000200c9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002eb27) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002eb27) list_single_number_heading_pane_t

0x087a,	// (0x0001fdcf) list_single_graphic_heading_pane_g1_ParamLimits

0x087a,	// (0x0001fdcf) list_single_graphic_heading_pane_g1

0xb615,	// (0x0002ab6a) list_single_graphic_heading_pane_g4_ParamLimits

0xb615,	// (0x0002ab6a) list_single_graphic_heading_pane_g4

0x0892,	// (0x0001fde7) list_single_graphic_heading_pane_g5_ParamLimits

0x0892,	// (0x0001fde7) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002eb2e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002eb2e) list_single_graphic_heading_pane_g

0xb5db,	// (0x0002ab30) list_single_graphic_heading_pane_t1_ParamLimits

0xb5db,	// (0x0002ab30) list_single_graphic_heading_pane_t1

0xb626,	// (0x0002ab7b) list_single_graphic_heading_pane_t2_ParamLimits

0xb626,	// (0x0002ab7b) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002eb35) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002eb35) list_single_graphic_heading_pane_t

0x0bb0,	// (0x00020105) list_single_large_graphic_pane_g1_ParamLimits

0x0bb0,	// (0x00020105) list_single_large_graphic_pane_g1

0x0886,	// (0x0001fddb) list_single_large_graphic_pane_g2_ParamLimits

0x0886,	// (0x0001fddb) list_single_large_graphic_pane_g2

0x0892,	// (0x0001fde7) list_single_large_graphic_pane_g3_ParamLimits

0x0892,	// (0x0001fde7) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002eb3a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002eb3a) list_single_large_graphic_pane_g

0x59ae,	// (0x00024f03) wait_border_pane_g2_copy1

0xb638,	// (0x0002ab8d) list_single_large_graphic_pane_g4_cp2

0x0bbc,	// (0x00020111) list_single_large_graphic_pane_t1_ParamLimits

0x0bbc,	// (0x00020111) list_single_large_graphic_pane_t1

0xb640,	// (0x0002ab95) list_double_pane_g1_ParamLimits

0xb640,	// (0x0002ab95) list_double_pane_g1

0xb64c,	// (0x0002aba1) list_double_pane_g2_ParamLimits

0xb64c,	// (0x0002aba1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002eb41) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002eb41) list_double_pane_g

0xb658,	// (0x0002abad) list_double_pane_t1_ParamLimits

0xb658,	// (0x0002abad) list_double_pane_t1

0xb66e,	// (0x0002abc3) list_double_pane_t2_ParamLimits

0xb66e,	// (0x0002abc3) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002eb46) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002eb46) list_double_pane_t

0xb680,	// (0x0002abd5) list_double2_pane_g1_ParamLimits

0xb680,	// (0x0002abd5) list_double2_pane_g1

0xb691,	// (0x0002abe6) list_double2_pane_g2_ParamLimits

0xb691,	// (0x0002abe6) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002eb4b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002eb4b) list_double2_pane_g

0xb69d,	// (0x0002abf2) list_double2_pane_t1_ParamLimits

0xb69d,	// (0x0002abf2) list_double2_pane_t1

0xb6b3,	// (0x0002ac08) list_double2_pane_t2_ParamLimits

0xb6b3,	// (0x0002ac08) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002eb50) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002eb50) list_double2_pane_t

0xb640,	// (0x0002ab95) list_double_number_pane_g1_ParamLimits

0xb640,	// (0x0002ab95) list_double_number_pane_g1

0xb64c,	// (0x0002aba1) list_double_number_pane_g2_ParamLimits

0xb64c,	// (0x0002aba1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002eb41) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002eb41) list_double_number_pane_g

0xb6c5,	// (0x0002ac1a) list_double_number_pane_t1_ParamLimits

0xb6c5,	// (0x0002ac1a) list_double_number_pane_t1

0xb6d7,	// (0x0002ac2c) list_double_number_pane_t2_ParamLimits

0xb6d7,	// (0x0002ac2c) list_double_number_pane_t2

0xb6ed,	// (0x0002ac42) list_double_number_pane_t3_ParamLimits

0xb6ed,	// (0x0002ac42) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002eb55) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002eb55) list_double_number_pane_t

0xb6ff,	// (0x0002ac54) list_double_graphic_pane_g1_ParamLimits

0xb6ff,	// (0x0002ac54) list_double_graphic_pane_g1

0xb70b,	// (0x0002ac60) list_double_graphic_pane_g2_ParamLimits

0xb70b,	// (0x0002ac60) list_double_graphic_pane_g2

0xb71a,	// (0x0002ac6f) list_double_graphic_pane_g3_ParamLimits

0xb71a,	// (0x0002ac6f) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002eb5c) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002eb5c) list_double_graphic_pane_g

0xb732,	// (0x0002ac87) list_double_graphic_pane_t1_ParamLimits

0xb732,	// (0x0002ac87) list_double_graphic_pane_t1

0xb748,	// (0x0002ac9d) list_double_graphic_pane_t2_ParamLimits

0xb748,	// (0x0002ac9d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002eb65) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002eb65) list_double_graphic_pane_t

0x03f2,	// (0x0001f947) list_double2_graphic_pane_g1_ParamLimits

0x03f2,	// (0x0001f947) list_double2_graphic_pane_g1

0x0e59,	// (0x000203ae) list_double2_graphic_pane_g2_ParamLimits

0x0e59,	// (0x000203ae) list_double2_graphic_pane_g2

0xb691,	// (0x0002abe6) list_double2_graphic_pane_g3_ParamLimits

0xb691,	// (0x0002abe6) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002eb6a) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002eb6a) list_double2_graphic_pane_g

0xb75a,	// (0x0002acaf) list_double2_graphic_pane_t1_ParamLimits

0xb75a,	// (0x0002acaf) list_double2_graphic_pane_t1

0xb770,	// (0x0002acc5) list_double2_graphic_pane_t2_ParamLimits

0xb770,	// (0x0002acc5) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002eb71) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002eb71) list_double2_graphic_pane_t

0xb782,	// (0x0002acd7) list_double_large_graphic_pane_g1_ParamLimits

0xb782,	// (0x0002acd7) list_double_large_graphic_pane_g1

0xb7a1,	// (0x0002acf6) list_double_large_graphic_pane_g2_ParamLimits

0xb7a1,	// (0x0002acf6) list_double_large_graphic_pane_g2

0xb64c,	// (0x0002aba1) list_double_large_graphic_pane_g3_ParamLimits

0xb64c,	// (0x0002aba1) list_double_large_graphic_pane_g3

0xb7b2,	// (0x0002ad07) list_double_large_graphic_pane_g4_ParamLimits

0xb7b2,	// (0x0002ad07) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002eb76) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002eb76) list_double_large_graphic_pane_g

0xb7c5,	// (0x0002ad1a) list_double_large_graphic_pane_t1_ParamLimits

0xb7c5,	// (0x0002ad1a) list_double_large_graphic_pane_t1

0xb7de,	// (0x0002ad33) list_double_large_graphic_pane_t2_ParamLimits

0xb7de,	// (0x0002ad33) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002eb81) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002eb81) list_double_large_graphic_pane_t

0xb7f0,	// (0x0002ad45) list_double2_large_graphic_pane_g1_ParamLimits

0xb7f0,	// (0x0002ad45) list_double2_large_graphic_pane_g1

0xb680,	// (0x0002abd5) list_double2_large_graphic_pane_g2_ParamLimits

0xb680,	// (0x0002abd5) list_double2_large_graphic_pane_g2

0xb691,	// (0x0002abe6) list_double2_large_graphic_pane_g3_ParamLimits

0xb691,	// (0x0002abe6) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002eb86) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002eb86) list_double2_large_graphic_pane_g

0xb7fc,	// (0x0002ad51) list_double2_large_graphic_pane_t1_ParamLimits

0xb7fc,	// (0x0002ad51) list_double2_large_graphic_pane_t1

0xb812,	// (0x0002ad67) list_double2_large_graphic_pane_t2_ParamLimits

0xb812,	// (0x0002ad67) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002eb8d) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002eb8d) list_double2_large_graphic_pane_t

0xb824,	// (0x0002ad79) list_double_heading_pane_g1_ParamLimits

0xb824,	// (0x0002ad79) list_double_heading_pane_g1

0x01c7,	// (0x0001f71c) list_double_heading_pane_g2_ParamLimits

0x01c7,	// (0x0001f71c) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002eb92) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002eb92) list_double_heading_pane_g

0xb835,	// (0x0002ad8a) list_double_heading_pane_t1_ParamLimits

0xb835,	// (0x0002ad8a) list_double_heading_pane_t1

0xb6b3,	// (0x0002ac08) list_double_heading_pane_t2_ParamLimits

0xb6b3,	// (0x0002ac08) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002eb97) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002eb97) list_double_heading_pane_t

0x03f2,	// (0x0001f947) list_double_graphic_heading_pane_g1_ParamLimits

0x03f2,	// (0x0001f947) list_double_graphic_heading_pane_g1

0xb824,	// (0x0002ad79) list_double_graphic_heading_pane_g2_ParamLimits

0xb824,	// (0x0002ad79) list_double_graphic_heading_pane_g2

0x01c7,	// (0x0001f71c) list_double_graphic_heading_pane_g3_ParamLimits

0x01c7,	// (0x0001f71c) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002eb9c) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002eb9c) list_double_graphic_heading_pane_g

0xb84b,	// (0x0002ada0) list_double_graphic_heading_pane_t1_ParamLimits

0xb84b,	// (0x0002ada0) list_double_graphic_heading_pane_t1

0xb770,	// (0x0002acc5) list_double_graphic_heading_pane_t2_ParamLimits

0xb770,	// (0x0002acc5) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002eba3) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002eba3) list_double_graphic_heading_pane_t

0xb7a1,	// (0x0002acf6) list_double_time_pane_g1_ParamLimits

0xb7a1,	// (0x0002acf6) list_double_time_pane_g1

0xb64c,	// (0x0002aba1) list_double_time_pane_g2_ParamLimits

0xb64c,	// (0x0002aba1) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002eba8) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002eba8) list_double_time_pane_g

0xb861,	// (0x0002adb6) list_double_time_pane_t1_ParamLimits

0xb861,	// (0x0002adb6) list_double_time_pane_t1

0xb877,	// (0x0002adcc) list_double_time_pane_t2_ParamLimits

0xb877,	// (0x0002adcc) list_double_time_pane_t2

0xb889,	// (0x0002adde) list_double_time_pane_t3_ParamLimits

0xb889,	// (0x0002adde) list_double_time_pane_t3

0xb89b,	// (0x0002adf0) list_double_time_pane_t4_ParamLimits

0xb89b,	// (0x0002adf0) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002ebad) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002ebad) list_double_time_pane_t

0xb8ad,	// (0x0002ae02) list_setting_pane_g1_ParamLimits

0xb8ad,	// (0x0002ae02) list_setting_pane_g1

0xb8b9,	// (0x0002ae0e) list_setting_pane_g2_ParamLimits

0xb8b9,	// (0x0002ae0e) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002ebb6) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002ebb6) list_setting_pane_g

0xb8c5,	// (0x0002ae1a) list_setting_pane_t1_ParamLimits

0xb8c5,	// (0x0002ae1a) list_setting_pane_t1

0xb8df,	// (0x0002ae34) list_setting_pane_t2_ParamLimits

0xb8df,	// (0x0002ae34) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002ebbb) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002ebbb) list_setting_pane_t

0xb91e,	// (0x0002ae73) set_value_pane_cp_ParamLimits

0xb91e,	// (0x0002ae73) set_value_pane_cp

0xb92a,	// (0x0002ae7f) list_setting_number_pane_g1_ParamLimits

0xb92a,	// (0x0002ae7f) list_setting_number_pane_g1

0xb936,	// (0x0002ae8b) list_setting_number_pane_g2_ParamLimits

0xb936,	// (0x0002ae8b) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002ebc2) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002ebc2) list_setting_number_pane_g

0xb942,	// (0x0002ae97) list_setting_number_pane_t1_ParamLimits

0xb942,	// (0x0002ae97) list_setting_number_pane_t1

0xb95b,	// (0x0002aeb0) list_setting_number_pane_t2_ParamLimits

0xb95b,	// (0x0002aeb0) list_setting_number_pane_t2

0xb975,	// (0x0002aeca) list_setting_number_pane_t3_ParamLimits

0xb975,	// (0x0002aeca) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002ebc7) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002ebc7) list_setting_number_pane_t

0xb91e,	// (0x0002ae73) set_value_pane_ParamLimits

0xb91e,	// (0x0002ae73) set_value_pane

0x3e65,	// (0x000233ba) bg_set_opt_pane_ParamLimits

0x3e65,	// (0x000233ba) bg_set_opt_pane

0x0553,	// (0x0001faa8) set_value_pane_t1

0x3e86,	// (0x000233db) slider_set_pane_cp3

0x3e8f,	// (0x000233e4) volume_small_pane_cp

0x3e98,	// (0x000233ed) list_form_gen_pane

0x3ea1,	// (0x000233f6) scroll_pane_cp8

0xb9b8,	// (0x0002af0d) form_field_data_pane_ParamLimits

0xb9b8,	// (0x0002af0d) form_field_data_pane

0xb9cf,	// (0x0002af24) form_field_data_wide_pane_ParamLimits

0xb9cf,	// (0x0002af24) form_field_data_wide_pane

0xb9ef,	// (0x0002af44) form_field_popup_pane_ParamLimits

0xb9ef,	// (0x0002af44) form_field_popup_pane

0xba07,	// (0x0002af5c) form_field_popup_wide_pane_ParamLimits

0xba07,	// (0x0002af5c) form_field_popup_wide_pane

0x05e7,	// (0x0001fb3c) form_field_slider_pane_ParamLimits

0x05e7,	// (0x0001fb3c) form_field_slider_pane

0x05fa,	// (0x0001fb4f) form_field_slider_wide_pane_ParamLimits

0x05fa,	// (0x0001fb4f) form_field_slider_wide_pane

0x3eb2,	// (0x00023407) data_form_pane

0xba28,	// (0x0002af7d) form_field_data_pane_t1

0x3ebe,	// (0x00023413) input_focus_pane

0x062f,	// (0x0001fb84) data_form_wide_pane

0x064c,	// (0x0001fba1) form_field_data_wide_pane_t1

0x3c2f,	// (0x00023184) input_focus_pane_cp6

0xba42,	// (0x0002af97) form_field_popup_pane_t1

0x3ebe,	// (0x00023413) input_focus_pane_cp7

0x3eec,	// (0x00023441) list_form_pane

0x068e,	// (0x0001fbe3) form_field_popup_wide_pane_t1

0x3ebe,	// (0x00023413) input_focus_pane_cp8

0x3ef8,	// (0x0002344d) list_form_wide_pane

0xba64,	// (0x0002afb9) form_field_slider_pane_t1_ParamLimits

0xba64,	// (0x0002afb9) form_field_slider_pane_t1

0xba7c,	// (0x0002afd1) form_field_slider_pane_t2_ParamLimits

0xba7c,	// (0x0002afd1) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002ebd7) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002ebd7) form_field_slider_pane_t

0x38ca,	// (0x00022e1f) input_focus_pane_cp9_ParamLimits

0x38ca,	// (0x00022e1f) input_focus_pane_cp9

0xba91,	// (0x0002afe6) slider_cont_pane_ParamLimits

0xba91,	// (0x0002afe6) slider_cont_pane

0x3f07,	// (0x0002345c) form_field_slider_wide_pane_t1_ParamLimits

0x3f07,	// (0x0002345c) form_field_slider_wide_pane_t1

0x06ea,	// (0x0001fc3f) form_field_slider_wide_pane_t2_ParamLimits

0x06ea,	// (0x0001fc3f) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002ebdc) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002ebdc) form_field_slider_wide_pane_t

0x38ca,	// (0x00022e1f) input_focus_pane_cp10_ParamLimits

0x38ca,	// (0x00022e1f) input_focus_pane_cp10

0xbaa5,	// (0x0002affa) slider_cont_pane_cp1_ParamLimits

0xbaa5,	// (0x0002affa) slider_cont_pane_cp1

0xbab9,	// (0x0002b00e) slider_form_pane_cp

0x3f19,	// (0x0002346e) input_focus_pane_g1

0x3f21,	// (0x00023476) input_focus_pane_g2

0x3f29,	// (0x0002347e) input_focus_pane_g3

0x3f31,	// (0x00023486) input_focus_pane_g4

0x3f39,	// (0x0002348e) input_focus_pane_g5

0x3f41,	// (0x00023496) input_focus_pane_g6

0x3f49,	// (0x0002349e) input_focus_pane_g7

0x3f51,	// (0x000234a6) input_focus_pane_g8

0x3f59,	// (0x000234ae) input_focus_pane_g9

0x3565,	// (0x00022aba) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002ebe1) input_focus_pane_g

0x59b7,	// (0x00024f0c) wait_border_pane_g3_copy1

0xbac1,	// (0x0002b016) data_form_pane_t1

0x3565,	// (0x00022aba) wait_anim_pane_g1_copy1

0xbbe1,	// (0x0002b136) data_form_wide_pane_t1

0xbadb,	// (0x0002b030) list_form_graphic_pane_cp_ParamLimits

0xbadb,	// (0x0002b030) list_form_graphic_pane_cp

0x68d8,	// (0x00025e2d) slider_form_pane_g1

0x68e1,	// (0x00025e36) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002eed8) slider_form_pane_g

0xbadb,	// (0x0002b030) list_form_graphic_pane_ParamLimits

0xbadb,	// (0x0002b030) list_form_graphic_pane

0x0768,	// (0x0001fcbd) list_form_graphic_pane_g1

0x0770,	// (0x0001fcc5) list_form_graphic_pane_t1_ParamLimits

0x0770,	// (0x0001fcc5) list_form_graphic_pane_t1

0x364f,	// (0x00022ba4) list_highlight_pane_cp5_ParamLimits

0x364f,	// (0x00022ba4) list_highlight_pane_cp5

0xbaed,	// (0x0002b042) find_pane_g1

0x3f61,	// (0x000234b6) input_find_pane

0xbaf6,	// (0x0002b04b) input_find_pane_g1_ParamLimits

0xbaf6,	// (0x0002b04b) input_find_pane_g1

0xbb02,	// (0x0002b057) input_find_pane_t1_ParamLimits

0xbb02,	// (0x0002b057) input_find_pane_t1

0xbb17,	// (0x0002b06c) input_find_pane_t2_ParamLimits

0xbb17,	// (0x0002b06c) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002ebf6) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002ebf6) input_find_pane_t

0x3f6a,	// (0x000234bf) input_focus_pane_cp5_ParamLimits

0x3f6a,	// (0x000234bf) input_focus_pane_cp5

0x3f84,	// (0x000234d9) bg_popup_window_pane_cp2_ParamLimits

0x3f84,	// (0x000234d9) bg_popup_window_pane_cp2

0x3f91,	// (0x000234e6) listscroll_menu_pane_ParamLimits

0x3f91,	// (0x000234e6) listscroll_menu_pane

0xd28a,	// (0x0002c7df) popup_submenu_window_ParamLimits

0xd28a,	// (0x0002c7df) popup_submenu_window

0x3fc9,	// (0x0002351e) find_popup_pane_g1

0x3fd1,	// (0x00023526) input_popup_find_pane_cp

0x3f6a,	// (0x000234bf) input_focus_pane_cp4_ParamLimits

0x3f6a,	// (0x000234bf) input_focus_pane_cp4

0x3fe7,	// (0x0002353c) input_popup_find_pane_t1_ParamLimits

0x3fe7,	// (0x0002353c) input_popup_find_pane_t1

0x356f,	// (0x00022ac4) bg_popup_sub_pane_cp

0x4015,	// (0x0002356a) listscroll_popup_sub_pane

0x401d,	// (0x00023572) list_submenu_pane_ParamLimits

0x401d,	// (0x00023572) list_submenu_pane

0x402e,	// (0x00023583) scroll_pane_cp4

0x4036,	// (0x0002358b) list_single_popup_submenu_pane_ParamLimits

0x4036,	// (0x0002358b) list_single_popup_submenu_pane

0x404a,	// (0x0002359f) list_single_popup_submenu_pane_g1

0x4052,	// (0x000235a7) list_single_popup_submenu_pane_t1_ParamLimits

0x4052,	// (0x000235a7) list_single_popup_submenu_pane_t1

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp1_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp1

0x4067,	// (0x000235bc) tabs_2_active_pane_g1

0xd2c4,	// (0x0002c819) tabs_2_active_pane_t1

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp1_ParamLimits

0x38ca,	// (0x00022e1f) bg_passive_tab_pane_cp1

0x4067,	// (0x000235bc) tabs_2_passive_pane_g1

0xd2c4,	// (0x0002c819) tabs_2_passive_pane_t1

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp4

0xd2d6,	// (0x0002c82b) tabs_2_long_active_pane_t1

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp4

0x2259,	// (0x000217ae) list_single_midp_graphic_pane_g4_ParamLimits

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp5

0xd2e9,	// (0x0002c83e) tabs_3_long_active_pane_t1

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp5

0x2259,	// (0x000217ae) list_single_midp_graphic_pane_g4

0x364f,	// (0x00022ba4) bg_popup_window_pane_cp13_ParamLimits

0x364f,	// (0x00022ba4) bg_popup_window_pane_cp13

0x40c9,	// (0x0002361e) listscroll_popup_fast_pane_ParamLimits

0x40c9,	// (0x0002361e) listscroll_popup_fast_pane

0x40d8,	// (0x0002362d) grid_popup_fast_pane_ParamLimits

0x40d8,	// (0x0002362d) grid_popup_fast_pane

0x40ea,	// (0x0002363f) scroll_pane_cp9_ParamLimits

0x40ea,	// (0x0002363f) scroll_pane_cp9

0x81f3,	// (0x00027748) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81f3,	// (0x00027748) list_single_graphic_hl_pane_t1_cp2

0x410e,	// (0x00023663) input_focus_pane_cp20_ParamLimits

0x410e,	// (0x00023663) input_focus_pane_cp20

0x411c,	// (0x00023671) query_popup_data_pane_t1_ParamLimits

0x411c,	// (0x00023671) query_popup_data_pane_t1

0x412f,	// (0x00023684) query_popup_data_pane_t2_ParamLimits

0x412f,	// (0x00023684) query_popup_data_pane_t2

0x4175,	// (0x000236ca) query_popup_data_pane_t3_ParamLimits

0x4175,	// (0x000236ca) query_popup_data_pane_t3

0x41b6,	// (0x0002370b) query_popup_data_pane_t4_ParamLimits

0x41b6,	// (0x0002370b) query_popup_data_pane_t4

0x41f2,	// (0x00023747) query_popup_data_pane_t5_ParamLimits

0x41f2,	// (0x00023747) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002ebfb) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002ebfb) query_popup_data_pane_t

0x3f19,	// (0x0002346e) bg_set_opt_pane_g1

0x3f21,	// (0x00023476) bg_set_opt_pane_g2

0x3f29,	// (0x0002347e) bg_set_opt_pane_g3

0x3f31,	// (0x00023486) bg_set_opt_pane_g4

0x3f39,	// (0x0002348e) bg_set_opt_pane_g5

0x3f41,	// (0x00023496) bg_set_opt_pane_g6

0x3f49,	// (0x0002349e) bg_set_opt_pane_g7

0x3f51,	// (0x000234a6) bg_set_opt_pane_g8

0x3f59,	// (0x000234ae) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002ec06) bg_set_opt_pane_g

0x1909,	// (0x00020e5e) control_top_pane_stacon_ParamLimits

0x1909,	// (0x00020e5e) control_top_pane_stacon

0x195c,	// (0x00020eb1) signal_pane_stacon_ParamLimits

0x195c,	// (0x00020eb1) signal_pane_stacon

0x47e2,	// (0x00023d37) stacon_top_pane_g1_ParamLimits

0x47e2,	// (0x00023d37) stacon_top_pane_g1

0x1981,	// (0x00020ed6) title_pane_stacon_ParamLimits

0x1981,	// (0x00020ed6) title_pane_stacon

0x19ab,	// (0x00020f00) uni_indicator_pane_stacon_ParamLimits

0x19ab,	// (0x00020f00) uni_indicator_pane_stacon

0x19c0,	// (0x00020f15) battery_pane_stacon_ParamLimits

0x19c0,	// (0x00020f15) battery_pane_stacon

0x1a04,	// (0x00020f59) control_bottom_pane_stacon_ParamLimits

0x1a04,	// (0x00020f59) control_bottom_pane_stacon

0x1a27,	// (0x00020f7c) navi_pane_stacon_ParamLimits

0x1a27,	// (0x00020f7c) navi_pane_stacon

0x4804,	// (0x00023d59) stacon_bottom_pane_g1_ParamLimits

0x4804,	// (0x00023d59) stacon_bottom_pane_g1

0x166c,	// (0x00020bc1) aid_levels_signal_lsc_ParamLimits

0x166c,	// (0x00020bc1) aid_levels_signal_lsc

0x1682,	// (0x00020bd7) signal_pane_stacon_g1_ParamLimits

0x1682,	// (0x00020bd7) signal_pane_stacon_g1

0x1696,	// (0x00020beb) signal_pane_stacon_g2_ParamLimits

0x1696,	// (0x00020beb) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002ec19) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ec19) signal_pane_stacon_g

0x16cb,	// (0x00020c20) title_pane_stacon_t1_ParamLimits

0x16cb,	// (0x00020c20) title_pane_stacon_t1

0x4236,	// (0x0002378b) uni_indicator_pane_stacon_g1

0x4240,	// (0x00023795) uni_indicator_pane_stacon_g2

0x424a,	// (0x0002379f) uni_indicator_pane_stacon_g3

0x4254,	// (0x000237a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002ec25) uni_indicator_pane_stacon_g

0x16f0,	// (0x00020c45) control_top_pane_stacon_g1

0x16f8,	// (0x00020c4d) control_top_pane_stacon_t1_ParamLimits

0x16f8,	// (0x00020c4d) control_top_pane_stacon_t1

0x172f,	// (0x00020c84) aid_levels_battery_lsc_ParamLimits

0x172f,	// (0x00020c84) aid_levels_battery_lsc

0x1746,	// (0x00020c9b) battery_pane_stacon_g1_ParamLimits

0x1746,	// (0x00020c9b) battery_pane_stacon_g1

0x1759,	// (0x00020cae) battery_pane_stacon_g2_ParamLimits

0x1759,	// (0x00020cae) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002ec2e) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002ec2e) battery_pane_stacon_g

0x1797,	// (0x00020cec) navi_icon_pane_stacon

0x17ab,	// (0x00020d00) navi_navi_pane_stacon

0x1797,	// (0x00020cec) navi_text_pane_stacon

0x16f0,	// (0x00020c45) control_bottom_pane_stacon_g1

0x17bf,	// (0x00020d14) control_bottom_pane_stacon_t1_ParamLimits

0x17bf,	// (0x00020d14) control_bottom_pane_stacon_t1

0xd2fb,	// (0x0002c850) grid_app_pane_ParamLimits

0xd2fb,	// (0x0002c850) grid_app_pane

0xd333,	// (0x0002c888) scroll_pane_cp15_ParamLimits

0xd333,	// (0x0002c888) scroll_pane_cp15

0xd348,	// (0x0002c89d) cell_app_pane_ParamLimits

0xd348,	// (0x0002c89d) cell_app_pane

0xd38d,	// (0x0002c8e2) cell_app_pane_g1_ParamLimits

0xd38d,	// (0x0002c8e2) cell_app_pane_g1

0x42f7,	// (0x0002384c) cell_app_pane_g2_ParamLimits

0x42f7,	// (0x0002384c) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002ec33) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002ec33) cell_app_pane_g

0xd3b1,	// (0x0002c906) cell_app_pane_t1_ParamLimits

0xd3b1,	// (0x0002c906) cell_app_pane_t1

0x431a,	// (0x0002386f) grid_highlight_pane_ParamLimits

0x431a,	// (0x0002386f) grid_highlight_pane

0x3f19,	// (0x0002346e) cell_highlight_pane_g1

0x3f21,	// (0x00023476) cell_highlight_pane_g2

0x3f29,	// (0x0002347e) cell_highlight_pane_g3

0x3f31,	// (0x00023486) cell_highlight_pane_g4

0x3f39,	// (0x0002348e) cell_highlight_pane_g5

0x3f41,	// (0x00023496) cell_highlight_pane_g6

0x3f49,	// (0x0002349e) cell_highlight_pane_g7

0x3f51,	// (0x000234a6) cell_highlight_pane_g8

0x3f59,	// (0x000234ae) cell_highlight_pane_g9

0x3565,	// (0x00022aba) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002ebe1) cell_highlight_pane_g

0x432b,	// (0x00023880) bg_scroll_pane

0x1809,	// (0x00020d5e) scroll_handle_pane

0x4372,	// (0x000238c7) scroll_bg_pane_g1

0x4387,	// (0x000238dc) scroll_bg_pane_g2

0x439f,	// (0x000238f4) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002ec38) scroll_bg_pane_g

0x43b4,	// (0x00023909) scroll_handle_focus_pane_ParamLimits

0x43b4,	// (0x00023909) scroll_handle_focus_pane

0x4372,	// (0x000238c7) scroll_handle_pane_g1

0x43c1,	// (0x00023916) scroll_handle_pane_g2

0x439f,	// (0x000238f4) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002ec3f) scroll_handle_pane_g

0x3f6a,	// (0x000234bf) bg_popup_sub_pane_cp21_ParamLimits

0x3f6a,	// (0x000234bf) bg_popup_sub_pane_cp21

0x43d5,	// (0x0002392a) popup_fep_japan_predictive_window_t1_ParamLimits

0x43d5,	// (0x0002392a) popup_fep_japan_predictive_window_t1

0x43ef,	// (0x00023944) popup_fep_japan_predictive_window_t2_ParamLimits

0x43ef,	// (0x00023944) popup_fep_japan_predictive_window_t2

0x4422,	// (0x00023977) popup_fep_japan_predictive_window_t3_ParamLimits

0x4422,	// (0x00023977) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002ec46) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002ec46) popup_fep_japan_predictive_window_t

0x356f,	// (0x00022ac4) bg_popup_sub_pane_cp23

0x4459,	// (0x000239ae) listscroll_japin_cand_pane

0x4461,	// (0x000239b6) popup_fep_japan_candidate_window_t1

0x446f,	// (0x000239c4) candidate_pane_ParamLimits

0x446f,	// (0x000239c4) candidate_pane

0x4481,	// (0x000239d6) scroll_pane_cp30

0x4489,	// (0x000239de) list_single_popup_jap_candidate_pane_ParamLimits

0x4489,	// (0x000239de) list_single_popup_jap_candidate_pane

0x356f,	// (0x00022ac4) list_highlight_pane_cp30

0x449e,	// (0x000239f3) list_single_popup_jap_candidate_pane_t1

0x44ad,	// (0x00023a02) level_1_signal

0x44bf,	// (0x00023a14) level_2_signal

0x44d2,	// (0x00023a27) level_3_signal

0x44e5,	// (0x00023a3a) level_4_signal

0x44f8,	// (0x00023a4d) level_5_signal

0x450b,	// (0x00023a60) level_6_signal

0x451e,	// (0x00023a73) level_7_signal

0x44ad,	// (0x00023a02) level_1_battery

0x44bf,	// (0x00023a14) level_2_battery

0x44d2,	// (0x00023a27) level_3_battery

0x44e5,	// (0x00023a3a) level_4_battery

0x44f8,	// (0x00023a4d) level_5_battery

0x450b,	// (0x00023a60) level_6_battery

0x451e,	// (0x00023a73) level_7_battery

0x4549,	// (0x00023a9e) list_menu_pane_ParamLimits

0x4549,	// (0x00023a9e) list_menu_pane

0x455f,	// (0x00023ab4) scroll_pane_cp25_ParamLimits

0x455f,	// (0x00023ab4) scroll_pane_cp25

0x4578,	// (0x00023acd) list_double2_graphic_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double2_graphic_pane_cp2

0x4578,	// (0x00023acd) list_double2_large_graphic_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double2_large_graphic_pane_cp2

0x4578,	// (0x00023acd) list_double2_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double2_pane_cp2

0x4578,	// (0x00023acd) list_double_graphic_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double_graphic_pane_cp2

0x4578,	// (0x00023acd) list_double_large_graphic_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double_large_graphic_pane_cp2

0x4578,	// (0x00023acd) list_double_number_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double_number_pane_cp2

0x4578,	// (0x00023acd) list_double_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_2graphic_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_2graphic_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_graphic_heading_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_graphic_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_graphic_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_heading_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_heading_pane_cp2

0x45b5,	// (0x00023b0a) list_single_large_graphic_pane_cp2_ParamLimits

0x45b5,	// (0x00023b0a) list_single_large_graphic_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_number_heading_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_number_heading_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_number_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_number_pane_cp2

0xd3c8,	// (0x0002c91d) list_single_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_pane_cp2

0x4631,	// (0x00023b86) bg_popup_sub_pane_cp22

0x18bb,	// (0x00020e10) popup_side_volume_key_window_g1

0x18e5,	// (0x00020e3a) popup_side_volume_key_window_t1

0x1901,	// (0x00020e56) volume_small_pane_cp1

0x38ca,	// (0x00022e1f) bg_popup_sub_pane_cp24_ParamLimits

0x38ca,	// (0x00022e1f) bg_popup_sub_pane_cp24

0x4647,	// (0x00023b9c) fep_china_uni_candidate_pane_ParamLimits

0x4647,	// (0x00023b9c) fep_china_uni_candidate_pane

0x465b,	// (0x00023bb0) fep_china_uni_entry_pane

0x466b,	// (0x00023bc0) popup_fep_china_uni_window_g1

0x4687,	// (0x00023bdc) fep_china_uni_entry_pane_g1

0x468f,	// (0x00023be4) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002ec77) fep_china_uni_entry_pane_g

0x4697,	// (0x00023bec) fep_entry_item_pane

0x46a1,	// (0x00023bf6) fep_candidate_item_pane

0x46a9,	// (0x00023bfe) fep_china_uni_candidate_pane_g1

0x46b1,	// (0x00023c06) fep_china_uni_candidate_pane_g2

0x46b9,	// (0x00023c0e) fep_china_uni_candidate_pane_g3

0x46c1,	// (0x00023c16) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002ec7c) fep_china_uni_candidate_pane_g

0x3565,	// (0x00022aba) fep_entry_item_pane_g1

0x46c9,	// (0x00023c1e) fep_entry_item_pane_t1_ParamLimits

0x46c9,	// (0x00023c1e) fep_entry_item_pane_t1

0x46df,	// (0x00023c34) fep_candidate_item_pane_t1_ParamLimits

0x46df,	// (0x00023c34) fep_candidate_item_pane_t1

0x46f4,	// (0x00023c49) fep_candidate_item_pane_t2_ParamLimits

0x46f4,	// (0x00023c49) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002ec85) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002ec85) fep_candidate_item_pane_t

0x364f,	// (0x00022ba4) list_highlight_pane_cp31_ParamLimits

0x364f,	// (0x00022ba4) list_highlight_pane_cp31

0x4706,	// (0x00023c5b) level_1_signal_lsc

0x470f,	// (0x00023c64) level_2_signal_lsc

0x4718,	// (0x00023c6d) level_3_signal_lsc

0x4721,	// (0x00023c76) level_4_signal_lsc

0x472a,	// (0x00023c7f) level_5_signal_lsc

0x4733,	// (0x00023c88) level_6_signal_lsc

0x473c,	// (0x00023c91) level_7_signal_lsc

0x473c,	// (0x00023c91) level_1_battery_lsc

0x4745,	// (0x00023c9a) level_2_battery_lsc

0x474e,	// (0x00023ca3) level_3_battery_lsc

0x4757,	// (0x00023cac) level_4_battery_lsc

0x4760,	// (0x00023cb5) level_5_battery_lsc

0x4769,	// (0x00023cbe) level_6_battery_lsc

0x4706,	// (0x00023c5b) level_7_battery_lsc

0x4772,	// (0x00023cc7) scroll_handle_focus_pane_g1

0x477b,	// (0x00023cd0) scroll_handle_focus_pane_g2

0x4784,	// (0x00023cd9) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002ec8a) scroll_handle_focus_pane_g

0xbb2c,	// (0x0002b081) list_single_2graphic_pane_g1_ParamLimits

0xbb2c,	// (0x0002b081) list_single_2graphic_pane_g1

0xb615,	// (0x0002ab6a) list_single_2graphic_pane_g2_ParamLimits

0xb615,	// (0x0002ab6a) list_single_2graphic_pane_g2

0x0892,	// (0x0001fde7) list_single_2graphic_pane_g3_ParamLimits

0x0892,	// (0x0001fde7) list_single_2graphic_pane_g3

0xbb38,	// (0x0002b08d) list_single_2graphic_pane_g4_ParamLimits

0xbb38,	// (0x0002b08d) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002ec91) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002ec91) list_single_2graphic_pane_g

0xbb44,	// (0x0002b099) list_single_2graphic_pane_t1_ParamLimits

0xbb44,	// (0x0002b099) list_single_2graphic_pane_t1

0xbb72,	// (0x0002b0c7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb72,	// (0x0002b0c7) list_double2_graphic_large_graphic_pane_g1

0xb680,	// (0x0002abd5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb680,	// (0x0002abd5) list_double2_graphic_large_graphic_pane_g2

0xb691,	// (0x0002abe6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb691,	// (0x0002abe6) list_double2_graphic_large_graphic_pane_g3

0xbb84,	// (0x0002b0d9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb84,	// (0x0002b0d9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002ec9a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002ec9a) list_double2_graphic_large_graphic_pane_g

0xbb90,	// (0x0002b0e5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb90,	// (0x0002b0e5) list_double2_graphic_large_graphic_pane_t1

0xbba6,	// (0x0002b0fb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbba6,	// (0x0002b0fb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002eca3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002eca3) list_double2_graphic_large_graphic_pane_t

0x48cc,	// (0x00023e21) popup_fast_swap_window_ParamLimits

0x48cc,	// (0x00023e21) popup_fast_swap_window

0x48e8,	// (0x00023e3d) popup_side_volume_key_window

0x4904,	// (0x00023e59) stacon_top_pane

0x490e,	// (0x00023e63) status_pane_ParamLimits

0x490e,	// (0x00023e63) status_pane

0xd485,	// (0x0002c9da) status_small_pane

0x356f,	// (0x00022ac4) control_pane

0x356f,	// (0x00022ac4) stacon_bottom_pane

0x3ea1,	// (0x000233f6) scroll_pane_cp121

0x3e98,	// (0x000233ed) set_content_pane

0x478d,	// (0x00023ce2) bg_active_tab_pane_g1_cp1

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp1

0x479f,	// (0x00023cf4) bg_active_tab_pane_g3_cp1

0x478d,	// (0x00023ce2) bg_passive_tab_pane_g1_cp1

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp1

0x479f,	// (0x00023cf4) bg_passive_tab_pane_g3_cp1

0x47a8,	// (0x00023cfd) bg_active_tab_pane_g1_cp2

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp2

0x47b1,	// (0x00023d06) bg_active_tab_pane_g3_cp2

0x47a8,	// (0x00023cfd) bg_passive_tab_pane_g1_cp2

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp2

0x47b1,	// (0x00023d06) bg_passive_tab_pane_g3_cp2

0x47ba,	// (0x00023d0f) bg_active_tab_pane_g1_cp3

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp3

0x47c3,	// (0x00023d18) bg_active_tab_pane_g3_cp3

0x47ba,	// (0x00023d0f) bg_passive_tab_pane_g1_cp3

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp3

0x47c3,	// (0x00023d18) bg_passive_tab_pane_g3_cp3

0x47cc,	// (0x00023d21) bg_active_tab_pane_g1_cp4

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp4

0x47d7,	// (0x00023d2c) bg_active_tab_pane_g3_cp4

0x47cc,	// (0x00023d21) bg_passive_tab_pane_g1_cp4

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp4

0x47d7,	// (0x00023d2c) bg_passive_tab_pane_g3_cp4

0x4820,	// (0x00023d75) bg_active_tab_pane_g1_cp5

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp5

0x4829,	// (0x00023d7e) bg_active_tab_pane_g3_cp5

0x4820,	// (0x00023d75) bg_passive_tab_pane_g1_cp5

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp5

0x4829,	// (0x00023d7e) bg_passive_tab_pane_g3_cp5

0x6ed5,	// (0x0002642a) list_set_graphic_pane_ParamLimits

0x6ed5,	// (0x0002642a) list_set_graphic_pane

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp4

0xd455,	// (0x0002c9aa) list_set_graphic_pane_g1_ParamLimits

0xd455,	// (0x0002c9aa) list_set_graphic_pane_g1

0xd461,	// (0x0002c9b6) list_set_graphic_pane_g2_ParamLimits

0xd461,	// (0x0002c9b6) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002eca8) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002eca8) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002f00a) volume_small_pane_cp_g

0x487f,	// (0x00023dd4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x487f,	// (0x00023dd4) list_double2_large_graphic_pane_g1_cp2

0x488b,	// (0x00023de0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x488b,	// (0x00023de0) list_double2_large_graphic_pane_g2_cp2

0x489c,	// (0x00023df1) list_double2_large_graphic_pane_g3_cp2

0x48a4,	// (0x00023df9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x48a4,	// (0x00023df9) list_double2_large_graphic_pane_t1_cp2

0x48ba,	// (0x00023e0f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x48ba,	// (0x00023e0f) list_double2_large_graphic_pane_t2_cp2

0x648a,	// (0x000259df) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x648a,	// (0x000259df) list_double_large_graphic_pane_g1_cp2

0x649b,	// (0x000259f0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x649b,	// (0x000259f0) list_double_large_graphic_pane_g2_cp2

0x4a35,	// (0x00023f8a) list_double_large_graphic_pane_g3_cp2

0x64ac,	// (0x00025a01) list_double_large_graphic_pane_g4_cp

0x64b4,	// (0x00025a09) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x64b4,	// (0x00025a09) list_double_large_graphic_pane_t1_cp2

0x64cb,	// (0x00025a20) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x64cb,	// (0x00025a20) list_double_large_graphic_pane_t2_cp2

0x4927,	// (0x00023e7c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4927,	// (0x00023e7c) list_double2_graphic_pane_g1_cp2

0x4935,	// (0x00023e8a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4935,	// (0x00023e8a) list_double2_graphic_pane_g2_cp2

0x4946,	// (0x00023e9b) list_double2_graphic_pane_g3_cp2

0x4950,	// (0x00023ea5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4950,	// (0x00023ea5) list_double2_graphic_pane_t1_cp2

0x4966,	// (0x00023ebb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4966,	// (0x00023ebb) list_double2_graphic_pane_t2_cp2

0x4978,	// (0x00023ecd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4978,	// (0x00023ecd) list_single_number_heading_pane_g1_cp2

0x4984,	// (0x00023ed9) list_single_number_heading_pane_g2_cp2

0x498c,	// (0x00023ee1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x498c,	// (0x00023ee1) list_single_number_heading_pane_t1_cp2

0x49a2,	// (0x00023ef7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x49a2,	// (0x00023ef7) list_single_number_heading_pane_t2_cp2

0x49b4,	// (0x00023f09) list_single_number_heading_pane_t3_cp2_ParamLimits

0x49b4,	// (0x00023f09) list_single_number_heading_pane_t3_cp2

0x4978,	// (0x00023ecd) list_single_heading_pane_g1_cp2_ParamLimits

0x4978,	// (0x00023ecd) list_single_heading_pane_g1_cp2

0x4984,	// (0x00023ed9) list_single_heading_pane_g2_cp2

0x498c,	// (0x00023ee1) list_single_heading_pane_t1_cp2_ParamLimits

0x498c,	// (0x00023ee1) list_single_heading_pane_t1_cp2

0x6292,	// (0x000257e7) list_single_heading_pane_t2_cp2_ParamLimits

0x6292,	// (0x000257e7) list_single_heading_pane_t2_cp2

0x61da,	// (0x0002572f) list_double_graphic_pane_g1_cp2_ParamLimits

0x61da,	// (0x0002572f) list_double_graphic_pane_g1_cp2

0x61e6,	// (0x0002573b) list_double_graphic_pane_g2_cp2_ParamLimits

0x61e6,	// (0x0002573b) list_double_graphic_pane_g2_cp2

0x61f5,	// (0x0002574a) list_double_graphic_pane_g3_cp2

0x61fd,	// (0x00025752) list_double_graphic_pane_t1_cp2_ParamLimits

0x61fd,	// (0x00025752) list_double_graphic_pane_t1_cp2

0x6213,	// (0x00025768) list_double_graphic_pane_t2_cp2_ParamLimits

0x6213,	// (0x00025768) list_double_graphic_pane_t2_cp2

0x4a29,	// (0x00023f7e) list_double_number_pane_g1_cp2_ParamLimits

0x4a29,	// (0x00023f7e) list_double_number_pane_g1_cp2

0x4a35,	// (0x00023f8a) list_double_number_pane_g2_cp2

0x619e,	// (0x000256f3) list_double_number_pane_t1_cp2_ParamLimits

0x619e,	// (0x000256f3) list_double_number_pane_t1_cp2

0x61b2,	// (0x00025707) list_double_number_pane_t2_cp2_ParamLimits

0x61b2,	// (0x00025707) list_double_number_pane_t2_cp2

0x61c8,	// (0x0002571d) list_double_number_pane_t3_cp2_ParamLimits

0x61c8,	// (0x0002571d) list_double_number_pane_t3_cp2

0x6087,	// (0x000255dc) list_single_graphic_pane_g1_cp2_ParamLimits

0x6087,	// (0x000255dc) list_single_graphic_pane_g1_cp2

0x4a8d,	// (0x00023fe2) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a8d,	// (0x00023fe2) list_single_graphic_pane_g2_cp2

0x4a99,	// (0x00023fee) list_single_graphic_pane_g3_cp2

0x605d,	// (0x000255b2) list_single_graphic_pane_t1_cp2_ParamLimits

0x605d,	// (0x000255b2) list_single_graphic_pane_t1_cp2

0x4a8d,	// (0x00023fe2) list_single_number_pane_g1_cp2_ParamLimits

0x4a8d,	// (0x00023fe2) list_single_number_pane_g1_cp2

0x4a99,	// (0x00023fee) list_single_number_pane_g2_cp2

0x605d,	// (0x000255b2) list_single_number_pane_t1_cp2_ParamLimits

0x605d,	// (0x000255b2) list_single_number_pane_t1_cp2

0x6073,	// (0x000255c8) list_single_number_pane_t2_cp2_ParamLimits

0x6073,	// (0x000255c8) list_single_number_pane_t2_cp2

0x488b,	// (0x00023de0) list_double2_pane_g1_cp2_ParamLimits

0x488b,	// (0x00023de0) list_double2_pane_g1_cp2

0x489c,	// (0x00023df1) list_double2_pane_g2_cp2

0x4a01,	// (0x00023f56) list_double2_pane_t1_cp2_ParamLimits

0x4a01,	// (0x00023f56) list_double2_pane_t1_cp2

0x4a17,	// (0x00023f6c) list_double2_pane_t2_cp2_ParamLimits

0x4a17,	// (0x00023f6c) list_double2_pane_t2_cp2

0x4a29,	// (0x00023f7e) list_double_pane_g1_cp2_ParamLimits

0x4a29,	// (0x00023f7e) list_double_pane_g1_cp2

0x4a35,	// (0x00023f8a) list_double_pane_g2_cp2

0x4a3d,	// (0x00023f92) list_double_pane_t1_cp2_ParamLimits

0x4a3d,	// (0x00023f92) list_double_pane_t1_cp2

0x4a53,	// (0x00023fa8) list_double_pane_t2_cp2_ParamLimits

0x4a53,	// (0x00023fa8) list_double_pane_t2_cp2

0x4a7d,	// (0x00023fd2) list_single_pane_cp2_g3

0x4a8d,	// (0x00023fe2) list_single_pane_g1_cp2_ParamLimits

0x4a8d,	// (0x00023fe2) list_single_pane_g1_cp2

0x4a99,	// (0x00023fee) list_single_pane_g2_cp2

0x4aa1,	// (0x00023ff6) list_single_pane_t1_cp2_ParamLimits

0x4aa1,	// (0x00023ff6) list_single_pane_t1_cp2

0x4ab9,	// (0x0002400e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4ab9,	// (0x0002400e) list_single_large_graphic_pane_g1_cp2

0x4ac5,	// (0x0002401a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4ac5,	// (0x0002401a) list_single_large_graphic_pane_g2_cp2

0x4ad1,	// (0x00024026) list_single_large_graphic_pane_g3_cp2

0x4ad9,	// (0x0002402e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4ad9,	// (0x0002402e) list_single_large_graphic_pane_g4_cp1

0x4af3,	// (0x00024048) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4af3,	// (0x00024048) list_single_large_graphic_pane_t1_cp2

0x6029,	// (0x0002557e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6029,	// (0x0002557e) list_single_graphic_heading_pane_g1_cp2

0x5ff6,	// (0x0002554b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5ff6,	// (0x0002554b) list_single_graphic_heading_pane_g4_cp2

0x4a99,	// (0x00023fee) list_single_graphic_heading_pane_g5_cp2

0x6035,	// (0x0002558a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6035,	// (0x0002558a) list_single_graphic_heading_pane_t1_cp2

0x604b,	// (0x000255a0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x604b,	// (0x000255a0) list_single_graphic_heading_pane_t2_cp2

0x5fea,	// (0x0002553f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5fea,	// (0x0002553f) list_single_2graphic_pane_g1_cp2

0x5ff6,	// (0x0002554b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5ff6,	// (0x0002554b) list_single_2graphic_pane_g2_cp2

0x4a99,	// (0x00023fee) list_single_2graphic_pane_g3_cp2

0x6007,	// (0x0002555c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6007,	// (0x0002555c) list_single_2graphic_pane_g4_cp2

0x6013,	// (0x00025568) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6013,	// (0x00025568) list_single_2graphic_pane_t1_cp2

0x3565,	// (0x00022aba) list_highlight_pane_g10_cp1

0x5bc2,	// (0x00025117) list_highlight_pane_g1_cp1

0x5bca,	// (0x0002511f) list_highlight_pane_g2_cp1

0x5bd2,	// (0x00025127) list_highlight_pane_g3_cp1

0x5bda,	// (0x0002512f) list_highlight_pane_g4_cp1

0x5be2,	// (0x00025137) list_highlight_pane_g5_cp1

0x5bea,	// (0x0002513f) list_highlight_pane_g6_cp1

0x5bf2,	// (0x00025147) list_highlight_pane_g7_cp1

0x5bfa,	// (0x0002514f) list_highlight_pane_g8_cp1

0x5c02,	// (0x00025157) list_highlight_pane_g9_cp1

0xdadd,	// (0x0002d032) form_field_slider_pane_t3

0xdaeb,	// (0x0002d040) form_field_slider_pane_t4

0x5afe,	// (0x00025053) slider_form_pane_ParamLimits

0x5afe,	// (0x00025053) slider_form_pane

0x356f,	// (0x00022ac4) control_abbreviations

0x356f,	// (0x00022ac4) control_conventions

0x356f,	// (0x00022ac4) control_definitions

0x356f,	// (0x00022ac4) format_table_attribute

0x62dc,	// (0x00025831) bg_popup_preview_window_pane_g9

0x356f,	// (0x00022ac4) format_table_data2

0x356f,	// (0x00022ac4) format_table_data3

0x356f,	// (0x00022ac4) format_table_data_example

0x0008,

0x356f,	// (0x00022ac4) intro_purpose

0xf8e3,	// (0x0002ee38) bg_popup_preview_window_pane_g

0x356f,	// (0x00022ac4) texts_category

0x356f,	// (0x00022ac4) texts_graphics

0x4b09,	// (0x0002405e) text_digital

0x4b18,	// (0x0002406d) text_primary

0x4b27,	// (0x0002407c) text_primary_small

0x4b36,	// (0x0002408b) text_secondary

0x4b45,	// (0x0002409a) text_title

0x6a17,	// (0x00025f6c) bg_passive_tab_pane_g1_cp3_srt

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp3_srt

0x6a20,	// (0x00025f75) bg_passive_tab_pane_g3_cp3_srt

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp3_srt_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp3_srt

0x6a29,	// (0x00025f7e) tabs_4_active_pane_srt_g1

0xde48,	// (0x0002d39d) tabs_4_active_pane_srt_t1_ParamLimits

0xde48,	// (0x0002d39d) tabs_4_active_pane_srt_t1

0x6a17,	// (0x00025f6c) bg_active_tab_pane_g1_cp3_copy1

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp3_copy1

0x6a20,	// (0x00025f75) bg_active_tab_pane_g3_cp3_copy1

0x364f,	// (0x00022ba4) tabs_2_long_active_pane_srt_ParamLimits

0x364f,	// (0x00022ba4) tabs_2_long_active_pane_srt

0x364f,	// (0x00022ba4) tabs_2_long_passive_pane_srt_ParamLimits

0x364f,	// (0x00022ba4) tabs_2_long_passive_pane_srt

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp4_srt

0x670b,	// (0x00025c60) bg_passive_tab_pane_g1_cp4_srt

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp4_srt

0x6714,	// (0x00025c69) bg_passive_tab_pane_g3_cp4_srt

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp4_srt_ParamLimits

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp4_srt

0xdc72,	// (0x0002d1c7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc72,	// (0x0002d1c7) tabs_2_long_active_pane_srt_t1

0x670b,	// (0x00025c60) bg_active_tab_pane_g1_cp4_srt

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp4_srt

0x6714,	// (0x00025c69) bg_active_tab_pane_g3_cp4_srt

0x38ca,	// (0x00022e1f) tabs_3_long_active_pane_srt_ParamLimits

0x38ca,	// (0x00022e1f) tabs_3_long_active_pane_srt

0x38ca,	// (0x00022e1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x38ca,	// (0x00022e1f) tabs_3_long_passive_pane_cp_srt

0x38ca,	// (0x00022e1f) tabs_3_long_passive_pane_srt_ParamLimits

0x38ca,	// (0x00022e1f) tabs_3_long_passive_pane_srt

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp5_srt

0x4820,	// (0x00023d75) bg_passive_tab_pane_g1_cp5_srt

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp5_srt

0x4829,	// (0x00023d7e) bg_passive_tab_pane_g3_cp5_srt

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp5_srt_ParamLimits

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp5_srt

0xdc5c,	// (0x0002d1b1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc5c,	// (0x0002d1b1) tabs_3_long_active_pane_srt_t1

0x4820,	// (0x00023d75) bg_active_tab_pane_g1_cp5_srt

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp5_srt

0x4829,	// (0x00023d7e) bg_active_tab_pane_g3_cp5_srt

0x66eb,	// (0x00025c40) navi_text_pane_srt_t1

0x66e3,	// (0x00025c38) navi_icon_pane_srt_g1

0x4d0e,	// (0x00024263) midp_editing_number_pane_srt

0x4b54,	// (0x000240a9) midp_ticker_pane_srt

0x4d16,	// (0x0002426b) midp_ticker_pane_srt_g1

0x4d1e,	// (0x00024273) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002ecc7) midp_ticker_pane_srt_g

0x4d26,	// (0x0002427b) midp_ticker_pane_srt_t1

0x66d4,	// (0x00025c29) midp_editing_number_pane_t1_copy1

0x4e92,	// (0x000243e7) listscroll_midp_pane

0x4e92,	// (0x000243e7) midp_form_pane

0x4bc0,	// (0x00024115) midp_info_popup_window_ParamLimits

0x4bc0,	// (0x00024115) midp_info_popup_window

0x3f6a,	// (0x000234bf) bg_popup_sub_pane_cp50_ParamLimits

0x3f6a,	// (0x000234bf) bg_popup_sub_pane_cp50

0x57ee,	// (0x00024d43) listscroll_midp_info_pane_ParamLimits

0x57ee,	// (0x00024d43) listscroll_midp_info_pane

0x57d6,	// (0x00024d2b) listscroll_form_midp_pane_ParamLimits

0x57d6,	// (0x00024d2b) listscroll_form_midp_pane

0x57e2,	// (0x00024d37) scroll_bar_cp050

0xdad1,	// (0x0002d026) list_midp_pane

0x746c,	// (0x000269c1) signal_pane_g2_cp

0x56f0,	// (0x00024c45) listscroll_midp_info_pane_t1_ParamLimits

0x56f0,	// (0x00024c45) listscroll_midp_info_pane_t1

0x5708,	// (0x00024c5d) listscroll_midp_info_pane_t2_ParamLimits

0x5708,	// (0x00024c5d) listscroll_midp_info_pane_t2

0x5746,	// (0x00024c9b) listscroll_midp_info_pane_t3_ParamLimits

0x5746,	// (0x00024c9b) listscroll_midp_info_pane_t3

0x5780,	// (0x00024cd5) listscroll_midp_info_pane_t4_ParamLimits

0x5780,	// (0x00024cd5) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002ed73) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002ed73) listscroll_midp_info_pane_t

0x402e,	// (0x00023583) scroll_pane_cp21

0x568e,	// (0x00024be3) form_midp_field_choice_group_pane

0x5697,	// (0x00024bec) form_midp_field_text_pane

0x56d6,	// (0x00024c2b) form_midp_field_time_pane

0x56de,	// (0x00024c33) form_midp_gauge_slider_pane

0x56e7,	// (0x00024c3c) form_midp_gauge_wait_pane

0x356f,	// (0x00022ac4) form_midp_image_pane

0xbbb8,	// (0x0002b10d) list_single_midp_pane_ParamLimits

0xbbb8,	// (0x0002b10d) list_single_midp_pane

0xdaaf,	// (0x0002d004) form_midp_field_text_pane_t1

0x5410,	// (0x00024965) input_focus_pane_cp050

0x567d,	// (0x00024bd2) list_midp_form_text_pane

0x5615,	// (0x00024b6a) form_midp_field_choice_group_pane_t1

0x5623,	// (0x00024b78) input_focus_pane_cp051

0x5637,	// (0x00024b8c) list_midp_choice_pane

0x356f,	// (0x00022ac4) status_idle_pane

0x55f9,	// (0x00024b4e) form_midp_field_time_pane_t1

0x3565,	// (0x00022aba) wait_anim_pane_g2_copy1

0x5607,	// (0x00024b5c) form_midp_field_time_pane_t2

0x0001,

0x4c6e,	// (0x000241c3) aid_navinavi_width_2_pane

0xf819,	// (0x0002ed6e) form_midp_field_time_pane_t

0x356f,	// (0x00022ac4) input_focus_pane_cp052

0x356f,	// (0x00022ac4) bg_input_focus_pane_cp040

0x55b9,	// (0x00024b0e) form_midp_gauge_slider_pane_t1

0x55c7,	// (0x00024b1c) form_midp_gauge_slider_pane_t2

0xda93,	// (0x0002cfe8) form_midp_gauge_slider_pane_t3

0xdaa1,	// (0x0002cff6) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002ed65) form_midp_gauge_slider_pane_t

0x55f1,	// (0x00024b46) form_midp_slider_pane

0x364f,	// (0x00022ba4) bg_input_focus_pane_cp041_ParamLimits

0x364f,	// (0x00022ba4) bg_input_focus_pane_cp041

0x5586,	// (0x00024adb) form_midp_gauge_wait_pane_t1_ParamLimits

0x5586,	// (0x00024adb) form_midp_gauge_wait_pane_t1

0x5598,	// (0x00024aed) form_midp_gauge_wait_pane_t2_ParamLimits

0x5598,	// (0x00024aed) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002ed60) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002ed60) form_midp_gauge_wait_pane_t

0x55aa,	// (0x00024aff) form_midp_wait_pane_ParamLimits

0x55aa,	// (0x00024aff) form_midp_wait_pane

0x5550,	// (0x00024aa5) form_midp_image_pane_g1

0x5559,	// (0x00024aae) form_midp_image_pane_t1

0x5568,	// (0x00024abd) form_midp_image_pane_t2

0x5577,	// (0x00024acc) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002ed59) form_midp_image_pane_t

0x5547,	// (0x00024a9c) list_single_midp_pane_g1

0x09a4,	// (0x0001fef9) list_single_midp_pane_t1

0xda7e,	// (0x0002cfd3) list_midp_form_item_pane_ParamLimits

0xda7e,	// (0x0002cfd3) list_midp_form_item_pane

0x4c16,	// (0x0002416b) list_midp_form_item_pane_t1

0x4c25,	// (0x0002417a) midp_ticker_pane_g1

0x4c31,	// (0x00024186) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002ecad) midp_ticker_pane_g

0x4c3d,	// (0x00024192) midp_ticker_pane_t1

0x6925,	// (0x00025e7a) midp_editing_number_pane_t1

0x6903,	// (0x00025e58) midp_editing_number_pane

0x6912,	// (0x00025e67) midp_ticker_pane

0x66c4,	// (0x00025c19) ai_message_heading_pane

0x356f,	// (0x00022ac4) bg_popup_window_pane_cp14

0x66cc,	// (0x00025c21) listscroll_ai_message_pane

0x664e,	// (0x00025ba3) ai_message_heading_pane_g1_ParamLimits

0x664e,	// (0x00025ba3) ai_message_heading_pane_g1

0x665a,	// (0x00025baf) ai_message_heading_pane_g2_ParamLimits

0x665a,	// (0x00025baf) ai_message_heading_pane_g2

0x6666,	// (0x00025bbb) ai_message_heading_pane_g3_ParamLimits

0x6666,	// (0x00025bbb) ai_message_heading_pane_g3

0x6672,	// (0x00025bc7) ai_message_heading_pane_g4_ParamLimits

0x6672,	// (0x00025bc7) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002ee9a) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002ee9a) ai_message_heading_pane_g

0x667e,	// (0x00025bd3) ai_message_heading_pane_t1_ParamLimits

0x667e,	// (0x00025bd3) ai_message_heading_pane_t1

0x6698,	// (0x00025bed) ai_message_heading_pane_t2_ParamLimits

0x6698,	// (0x00025bed) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002eea3) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002eea3) ai_message_heading_pane_t

0x66aa,	// (0x00025bff) bg_popup_heading_pane_cp1_ParamLimits

0x66aa,	// (0x00025bff) bg_popup_heading_pane_cp1

0x663c,	// (0x00025b91) list_ai_message_pane_ParamLimits

0x663c,	// (0x00025b91) list_ai_message_pane

0x402e,	// (0x00023583) scroll_pane_cp10

0x65d8,	// (0x00025b2d) list_ai_message_pane_g1

0x65e0,	// (0x00025b35) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002ee77) list_ai_message_pane_g

0x65e8,	// (0x00025b3d) list_ai_message_pane_t1_ParamLimits

0x65e8,	// (0x00025b3d) list_ai_message_pane_t1

0x65fd,	// (0x00025b52) list_ai_message_pane_t2_ParamLimits

0x65fd,	// (0x00025b52) list_ai_message_pane_t2

0x6612,	// (0x00025b67) list_ai_message_pane_t3_ParamLimits

0x6612,	// (0x00025b67) list_ai_message_pane_t3

0x6627,	// (0x00025b7c) list_ai_message_pane_t4_ParamLimits

0x6627,	// (0x00025b7c) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002ee7c) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002ee7c) list_ai_message_pane_t

0xdc3b,	// (0x0002d190) cell_ai_soft_ind_pane_ParamLimits

0xdc3b,	// (0x0002d190) cell_ai_soft_ind_pane

0x4c4f,	// (0x000241a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c4f,	// (0x000241a4) cell_ai_soft_ind_pane_g1

0x356f,	// (0x00022ac4) grid_highlight_cp1

0x4c5c,	// (0x000241b1) text_secondary_cp56_ParamLimits

0x4c5c,	// (0x000241b1) text_secondary_cp56

0x6598,	// (0x00025aed) example_general_pane_ParamLimits

0x6598,	// (0x00025aed) example_general_pane

0x65a4,	// (0x00025af9) example_parent_pane_g1_ParamLimits

0x65a4,	// (0x00025af9) example_parent_pane_g1

0x65b0,	// (0x00025b05) example_parent_pane_t1_ParamLimits

0x65b0,	// (0x00025b05) example_parent_pane_t1

0xc697,	// (0x0002bbec) popup_preview_text_window_ParamLimits

0xc697,	// (0x0002bbec) popup_preview_text_window

0x4a85,	// (0x00023fda) list_single_pane_cp2_g4

0x3980,	// (0x00022ed5) bg_popup_preview_window_pane_ParamLimits

0x3980,	// (0x00022ed5) bg_popup_preview_window_pane

0x62e4,	// (0x00025839) popup_preview_text_window_t1_ParamLimits

0x62e4,	// (0x00025839) popup_preview_text_window_t1

0x6302,	// (0x00025857) popup_preview_text_window_t2_ParamLimits

0x6302,	// (0x00025857) popup_preview_text_window_t2

0x634b,	// (0x000258a0) popup_preview_text_window_t3_ParamLimits

0x634b,	// (0x000258a0) popup_preview_text_window_t3

0x6390,	// (0x000258e5) popup_preview_text_window_t4_ParamLimits

0x6390,	// (0x000258e5) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002ee4b) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002ee4b) popup_preview_text_window_t

0x640e,	// (0x00025963) scroll_pane_cp11

0x539c,	// (0x000248f1) bg_popup_preview_window_pane_g1

0x62a4,	// (0x000257f9) bg_popup_preview_window_pane_g2

0x62ac,	// (0x00025801) bg_popup_preview_window_pane_g3

0x62b4,	// (0x00025809) bg_popup_preview_window_pane_g4

0x62bc,	// (0x00025811) bg_popup_preview_window_pane_g5

0x62c4,	// (0x00025819) bg_popup_preview_window_pane_g6

0x62cc,	// (0x00025821) bg_popup_preview_window_pane_g7

0x62d4,	// (0x00025829) bg_popup_preview_window_pane_g8

0x11f8,	// (0x0002074d) aid_popup_width_pane

0xc613,	// (0x0002bb68) popup_midp_note_alarm_window_ParamLimits

0xc613,	// (0x0002bb68) popup_midp_note_alarm_window

0x3eb2,	// (0x00023407) data_form_pane_ParamLimits

0xba1e,	// (0x0002af73) form_field_data_pane_g1

0xba28,	// (0x0002af7d) form_field_data_pane_t1_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_ParamLimits

0x062f,	// (0x0001fb84) data_form_wide_pane_ParamLimits

0x0640,	// (0x0001fb95) form_field_data_wide_pane_g1

0x064c,	// (0x0001fba1) form_field_data_wide_pane_t1_ParamLimits

0x3c2f,	// (0x00023184) input_focus_pane_cp6_ParamLimits

0xd2b6,	// (0x0002c80b) input_popup_find_pane_g1_ParamLimits

0xd2b6,	// (0x0002c80b) input_popup_find_pane_g1

0x176a,	// (0x00020cbf) aid_navi_side_left_pane

0x177f,	// (0x00020cd4) aid_navi_side_right_pane

0x5cbd,	// (0x00025212) bg_popup_window_pane_cp30_ParamLimits

0x5cbd,	// (0x00025212) bg_popup_window_pane_cp30

0x5d37,	// (0x0002528c) popup_midp_note_alarm_window_g1_ParamLimits

0x5d37,	// (0x0002528c) popup_midp_note_alarm_window_g1

0x5d67,	// (0x000252bc) popup_midp_note_alarm_window_t1_ParamLimits

0x5d67,	// (0x000252bc) popup_midp_note_alarm_window_t1

0x5e08,	// (0x0002535d) popup_midp_note_alarm_window_t2_ParamLimits

0x5e08,	// (0x0002535d) popup_midp_note_alarm_window_t2

0x5eb6,	// (0x0002540b) popup_midp_note_alarm_window_t3_ParamLimits

0x5eb6,	// (0x0002540b) popup_midp_note_alarm_window_t3

0x5ee8,	// (0x0002543d) popup_midp_note_alarm_window_t4_ParamLimits

0x5ee8,	// (0x0002543d) popup_midp_note_alarm_window_t4

0x5f0e,	// (0x00025463) popup_midp_note_alarm_window_t5_ParamLimits

0x5f0e,	// (0x00025463) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002ede8) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002ede8) popup_midp_note_alarm_window_t

0x5fba,	// (0x0002550f) wait_bar_pane_cp1_ParamLimits

0x5fba,	// (0x0002550f) wait_bar_pane_cp1

0x356f,	// (0x00022ac4) wait_anim_pane_copy1

0x356f,	// (0x00022ac4) wait_border_pane_copy1

0x59a3,	// (0x00024ef8) wait_border_pane_g1_copy1

0x0666,	// (0x0001fbbb) form_field_popup_pane_g1

0xba42,	// (0x0002af97) form_field_popup_pane_t1_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_cp7_ParamLimits

0x3eec,	// (0x00023441) list_form_pane_ParamLimits

0x0686,	// (0x0001fbdb) form_field_popup_wide_pane_g1

0x068e,	// (0x0001fbe3) form_field_popup_wide_pane_t1_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_cp8_ParamLimits

0x3ef8,	// (0x0002344d) list_form_wide_pane_ParamLimits

0x6aaf,	// (0x00026004) aid_size_cell_graphic_pane

0xbac1,	// (0x0002b016) data_form_pane_t1_ParamLimits

0xbbe1,	// (0x0002b136) data_form_wide_pane_t1_ParamLimits

0xd6ed,	// (0x0002cc42) bg_status_flat_pane

0xc0a9,	// (0x0002b5fe) title_pane_t1_ParamLimits

0x3617,	// (0x00022b6c) title_pane_t2_ParamLimits

0x363d,	// (0x00022b92) title_pane_t3_ParamLimits

0xf557,	// (0x0002eaac) title_pane_t_ParamLimits

0x44ad,	// (0x00023a02) level_1_signal_ParamLimits

0x44bf,	// (0x00023a14) level_2_signal_ParamLimits

0x44d2,	// (0x00023a27) level_3_signal_ParamLimits

0x44e5,	// (0x00023a3a) level_4_signal_ParamLimits

0x44f8,	// (0x00023a4d) level_5_signal_ParamLimits

0x450b,	// (0x00023a60) level_6_signal_ParamLimits

0x451e,	// (0x00023a73) level_7_signal_ParamLimits

0x44ad,	// (0x00023a02) level_1_battery_ParamLimits

0x44bf,	// (0x00023a14) level_2_battery_ParamLimits

0x44d2,	// (0x00023a27) level_3_battery_ParamLimits

0x44e5,	// (0x00023a3a) level_4_battery_ParamLimits

0x44f8,	// (0x00023a4d) level_5_battery_ParamLimits

0x450b,	// (0x00023a60) level_6_battery_ParamLimits

0x451e,	// (0x00023a73) level_7_battery_ParamLimits

0x5bc2,	// (0x00025117) bg_status_flat_pane_g1

0x5bca,	// (0x0002511f) bg_status_flat_pane_g2

0x5bd2,	// (0x00025127) bg_status_flat_pane_g3

0x5bda,	// (0x0002512f) bg_status_flat_pane_g4

0x5be2,	// (0x00025137) bg_status_flat_pane_g5

0x5bea,	// (0x0002513f) bg_status_flat_pane_g6

0x5bf2,	// (0x00025147) bg_status_flat_pane_g7

0xd001,	// (0x0002c556) tabs_3_active_pane_t1_ParamLimits

0xd001,	// (0x0002c556) tabs_3_passive_pane_t1_ParamLimits

0xd013,	// (0x0002c568) tabs_4_active_pane_t1_ParamLimits

0xd013,	// (0x0002c568) tabs_4_1_passive_pane_t1_ParamLimits

0xd2c4,	// (0x0002c819) tabs_2_active_pane_t1_ParamLimits

0xd2c4,	// (0x0002c819) tabs_2_passive_pane_t1_ParamLimits

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp4_ParamLimits

0xd2d6,	// (0x0002c82b) tabs_2_long_active_pane_t1_ParamLimits

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp4_ParamLimits

0xda0a,	// (0x0002cf5f) list_single_midp_graphic_pane_t1_ParamLimits

0x364f,	// (0x00022ba4) bg_active_tab_pane_cp5_ParamLimits

0xd2e9,	// (0x0002c83e) tabs_3_long_active_pane_t1_ParamLimits

0x4e92,	// (0x000243e7) bg_passive_tab_pane_cp5_ParamLimits

0xda0a,	// (0x0002cf5f) list_single_midp_graphic_pane_t1

0xd6ed,	// (0x0002cc42) bg_status_flat_pane_ParamLimits

0x502c,	// (0x00024581) indicator_pane_cp2_ParamLimits

0x502c,	// (0x00024581) indicator_pane_cp2

0xd86b,	// (0x0002cdc0) navi_pane_srt_ParamLimits

0xd86b,	// (0x0002cdc0) navi_pane_srt

0x517b,	// (0x000246d0) popup_clock_digital_analogue_window_cp1

0x372c,	// (0x00022c81) indicator_pane_t1

0x4b54,	// (0x000240a9) copy_highlight_pane

0x4b54,	// (0x000240a9) cursor_graphics_pane

0x4b54,	// (0x000240a9) graphic_within_text_pane

0x4b54,	// (0x000240a9) link_highlight_pane

0x63d1,	// (0x00025926) popup_preview_text_window_t5_ParamLimits

0x63d1,	// (0x00025926) popup_preview_text_window_t5

0x4c76,	// (0x000241cb) cursor_digital_pane

0x4c76,	// (0x000241cb) cursor_primary_pane

0x4c87,	// (0x000241dc) cursor_primary_small_pane

0x4c8f,	// (0x000241e4) cursor_secondary_pane

0x4c97,	// (0x000241ec) cursor_title_pane

0x4c76,	// (0x000241cb) link_highlight_digital_pane

0x4c7e,	// (0x000241d3) link_highlight_primary_pane

0x4c87,	// (0x000241dc) link_highlight_primary_small_pane

0x4c8f,	// (0x000241e4) link_highlight_secondary_pane

0x4c97,	// (0x000241ec) link_highlight_title_pane

0x4c76,	// (0x000241cb) copy_highlight_digital_pane

0x4c76,	// (0x000241cb) copy_highlight_primary_pane

0x4c87,	// (0x000241dc) copy_highlight_primary_small_pane

0x4c8f,	// (0x000241e4) copy_highlight_secondary_pane

0x4c97,	// (0x000241ec) copy_highlight_title_pane

0x4c8f,	// (0x000241e4) graphic_text_digital_pane

0x5c60,	// (0x000251b5) graphic_text_primary_pane

0x5c69,	// (0x000251be) graphic_text_primary_small_pane

0x4c87,	// (0x000241dc) graphic_text_secondary_pane

0x4c76,	// (0x000241cb) graphic_text_title_pane

0xd529,	// (0x0002ca7e) cursor_primary_pane_g1

0x5c52,	// (0x000251a7) cursor_text_primary_t1

0xdb0d,	// (0x0002d062) cursor_primary_small_pane_g1

0x5c44,	// (0x00025199) cursor_text_primary_small_t1

0xdb03,	// (0x0002d058) cursor_primary_small_pane_g1_copy1

0x5c2c,	// (0x00025181) cursor_text_primary_small_t1_copy1

0x5c0a,	// (0x0002515f) cursor_text_title_t1

0xdaf9,	// (0x0002d04e) cursor_title_pane_g1

0xd529,	// (0x0002ca7e) cursor_digital_pane_g1

0x4ca9,	// (0x000241fe) cursor_text_digital_t1

0x4cce,	// (0x00024223) link_highlight_primary_pane_g1

0x5bb3,	// (0x00025108) link_highlight_primary_pane_t1

0x4cb7,	// (0x0002420c) link_highlight_primary_small_pane_g1

0x4cbf,	// (0x00024214) link_highlight_primary_small_pane_t1

0x4cce,	// (0x00024223) link_highlight_secondary_pane_g1

0x4cd6,	// (0x0002422b) link_highlight_secondary_pane_t1

0x5b27,	// (0x0002507c) link_highlight_title_pane_g1

0x5b2f,	// (0x00025084) link_highlight_title_pane_t1

0x5b10,	// (0x00025065) link_highlight_digital_pane_g1

0x5b18,	// (0x0002506d) link_highlight_digital_pane_t1

0x59e8,	// (0x00024f3d) copy_highlight_primary_pane_g1

0x59f0,	// (0x00024f45) copy_highlight_primary_pane_t1

0x59c2,	// (0x00024f17) copy_highlight_primary_small_pane_g1

0x59d9,	// (0x00024f2e) copy_highlight_primary_small_pane_t1

0x4ce5,	// (0x0002423a) copy_highlight_secondary_pane_g1

0x4ced,	// (0x00024242) copy_highlight_secondary_pane_t1

0x59c2,	// (0x00024f17) copy_highlight_title_pane_g1

0x59ca,	// (0x00024f1f) copy_highlight_title_pane_t1

0x59e8,	// (0x00024f3d) copy_highlight_digital_pane_g1

0x6c79,	// (0x000261ce) copy_highlight_digital_pane_t1

0x6bcd,	// (0x00026122) graphic_text_primary_pane_g1

0x6c5d,	// (0x000261b2) graphic_text_primary_pane_t1

0x6c6b,	// (0x000261c0) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002ef17) graphic_text_primary_pane_t

0x6c39,	// (0x0002618e) graphic_text_primary_small_pane_g1

0x6c41,	// (0x00026196) graphic_text_primary_small_pane_t1

0x6c4f,	// (0x000261a4) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002ef12) graphic_text_primary_small_pane_t

0x6c15,	// (0x0002616a) graphic_text_secondary_pane_g1

0x6c1d,	// (0x00026172) graphic_text_secondary_pane_t1

0x6c2b,	// (0x00026180) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002ef0d) graphic_text_secondary_pane_t

0x6bf1,	// (0x00026146) graphic_text_title_pane_g1

0x6bf9,	// (0x0002614e) graphic_text_title_pane_t1

0x6c07,	// (0x0002615c) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002ef08) graphic_text_title_pane_t

0x6bcd,	// (0x00026122) graphic_text_digital_pane_g1

0x6bd5,	// (0x0002612a) graphic_text_digital_pane_t1

0x6be3,	// (0x00026138) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002ef03) graphic_text_digital_pane_t

0x364f,	// (0x00022ba4) navi_icon_pane_srt_ParamLimits

0x364f,	// (0x00022ba4) navi_icon_pane_srt

0x356f,	// (0x00022ac4) navi_midp_pane_srt

0x356f,	// (0x00022ac4) navi_navi_pane_srt

0x364f,	// (0x00022ba4) navi_text_pane_srt_ParamLimits

0x364f,	// (0x00022ba4) navi_text_pane_srt

0x6b98,	// (0x000260ed) navi_navi_icon_text_pane_srt

0x6ba0,	// (0x000260f5) navi_navi_pane_srt_g1_ParamLimits

0x6ba0,	// (0x000260f5) navi_navi_pane_srt_g1

0x6bb2,	// (0x00026107) navi_navi_pane_srt_g2_ParamLimits

0x6bb2,	// (0x00026107) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002eefe) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002eefe) navi_navi_pane_srt_g

0x6bc4,	// (0x00026119) navi_navi_tabs_pane_srt

0x6b98,	// (0x000260ed) navi_navi_text_pane_srt

0x6b98,	// (0x000260ed) navi_navi_volume_pane_srt

0x6b89,	// (0x000260de) navi_navi_text_pane_srt_t1

0x25e5,	// (0x00021b3a) navi_navi_volume_pane_srt_g1

0x25ed,	// (0x00021b42) volume_small_pane_srt_ParamLimits

0x25ed,	// (0x00021b42) volume_small_pane_srt

0x1a4a,	// (0x00020f9f) volume_small_pane_srt_g1_ParamLimits

0x1a4a,	// (0x00020f9f) volume_small_pane_srt_g1

0x1a5a,	// (0x00020faf) volume_small_pane_srt_g2_ParamLimits

0x1a5a,	// (0x00020faf) volume_small_pane_srt_g2

0x1a6b,	// (0x00020fc0) volume_small_pane_srt_g3_ParamLimits

0x1a6b,	// (0x00020fc0) volume_small_pane_srt_g3

0x1a7c,	// (0x00020fd1) volume_small_pane_srt_g4_ParamLimits

0x1a7c,	// (0x00020fd1) volume_small_pane_srt_g4

0x1a8d,	// (0x00020fe2) volume_small_pane_srt_g5_ParamLimits

0x1a8d,	// (0x00020fe2) volume_small_pane_srt_g5

0x1a9e,	// (0x00020ff3) volume_small_pane_srt_g6_ParamLimits

0x1a9e,	// (0x00020ff3) volume_small_pane_srt_g6

0x1aaf,	// (0x00021004) volume_small_pane_srt_g7_ParamLimits

0x1aaf,	// (0x00021004) volume_small_pane_srt_g7

0x1ac0,	// (0x00021015) volume_small_pane_srt_g8_ParamLimits

0x1ac0,	// (0x00021015) volume_small_pane_srt_g8

0x1ad1,	// (0x00021026) volume_small_pane_srt_g9_ParamLimits

0x1ad1,	// (0x00021026) volume_small_pane_srt_g9

0x1ae2,	// (0x00021037) volume_small_pane_srt_g10_ParamLimits

0x1ae2,	// (0x00021037) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002ecb2) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002ecb2) volume_small_pane_srt_g

0x3a29,	// (0x00022f7e) query_popup_data_pane_cp2

0x6b6f,	// (0x000260c4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b6f,	// (0x000260c4) navi_navi_icon_text_pane_srt_t1

0x5c60,	// (0x000251b5) navi_tabs_2_long_pane_srt

0x5c60,	// (0x000251b5) navi_tabs_2_pane_srt

0x5c60,	// (0x000251b5) navi_tabs_3_long_pane_srt

0x5c60,	// (0x000251b5) navi_tabs_3_pane_srt

0x5c60,	// (0x000251b5) navi_tabs_4_pane_srt

0x25c5,	// (0x00021b1a) tabs_2_active_pane_srt_ParamLimits

0x25c5,	// (0x00021b1a) tabs_2_active_pane_srt

0x25d5,	// (0x00021b2a) tabs_2_passive_pane_srt_ParamLimits

0x25d5,	// (0x00021b2a) tabs_2_passive_pane_srt

0x5410,	// (0x00024965) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5410,	// (0x00024965) bg_passive_tab_pane_cp1_srt

0x6b3b,	// (0x00026090) bg_passive_tab_pane_g1_cp1_srt

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp1_srt

0x6b44,	// (0x00026099) bg_passive_tab_pane_g3_cp1_srt

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp1_srt_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp1_srt

0x6b4d,	// (0x000260a2) tabs_2_active_pane_srt_g1

0xdecc,	// (0x0002d421) tabs_2_active_pane_srt_t1_ParamLimits

0xdecc,	// (0x0002d421) tabs_2_active_pane_srt_t1

0x6b3b,	// (0x00026090) bg_active_tab_pane_g1_cp1_srt

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp1_srt

0x6b44,	// (0x00026099) bg_active_tab_pane_g3_cp1_srt

0x2592,	// (0x00021ae7) tabs_3_active_pane_srt_ParamLimits

0x2592,	// (0x00021ae7) tabs_3_active_pane_srt

0x25a3,	// (0x00021af8) tabs_3_passive_pane_cp_srt_ParamLimits

0x25a3,	// (0x00021af8) tabs_3_passive_pane_cp_srt

0x25b4,	// (0x00021b09) tabs_3_passive_pane_srt_ParamLimits

0x25b4,	// (0x00021b09) tabs_3_passive_pane_srt

0x5410,	// (0x00024965) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5410,	// (0x00024965) bg_passive_tab_pane_cp2_srt

0x4cfc,	// (0x00024251) bg_passive_tab_pane_g1_cp2_srt

0x4796,	// (0x00023ceb) bg_passive_tab_pane_g2_cp2_srt

0x4d05,	// (0x0002425a) bg_passive_tab_pane_g3_cp2_srt

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp2_srt_ParamLimits

0x38ca,	// (0x00022e1f) bg_active_tab_pane_cp2_srt

0x6b21,	// (0x00026076) tabs_3_active_pane_srt_g1

0xdeb6,	// (0x0002d40b) tabs_3_active_pane_srt_t1_ParamLimits

0xdeb6,	// (0x0002d40b) tabs_3_active_pane_srt_t1

0x4cfc,	// (0x00024251) bg_active_tab_pane_g1_cp2_srt

0x4796,	// (0x00023ceb) bg_active_tab_pane_g2_cp2_srt

0x4d05,	// (0x0002425a) bg_active_tab_pane_g3_cp2_srt

0x254a,	// (0x00021a9f) tabs_4_active_pane_srt_ParamLimits

0x254a,	// (0x00021a9f) tabs_4_active_pane_srt

0x255c,	// (0x00021ab1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x255c,	// (0x00021ab1) tabs_4_passive_pane_cp2_srt

0x1c47,	// (0x0002119c) aid_size_cell_toolbar

0x677c,	// (0x00025cd1) main_idle_act_pane_ParamLimits

0x1de8,	// (0x0002133d) popup_large_graphic_colour_window_ParamLimits

0xc923,	// (0x0002be78) popup_toolbar_window_ParamLimits

0xc923,	// (0x0002be78) popup_toolbar_window

0x6934,	// (0x00025e89) list_single_graphic_2heading_pane_ParamLimits

0x6934,	// (0x00025e89) list_single_graphic_2heading_pane

0x425e,	// (0x000237b3) aid_size_cell_apps_grid_lsc_pane

0x4270,	// (0x000237c5) aid_size_cell_apps_grid_prt_pane

0x4e92,	// (0x000243e7) bg_wml_button_pane_cp1_ParamLimits

0x4e92,	// (0x000243e7) bg_wml_button_pane_cp1

0xdaaf,	// (0x0002d004) form_midp_field_text_pane_t1_ParamLimits

0x5410,	// (0x00024965) input_focus_pane_cp050_ParamLimits

0x567d,	// (0x00024bd2) list_midp_form_text_pane_ParamLimits

0x5623,	// (0x00024b78) input_focus_pane_cp051_ParamLimits

0x5637,	// (0x00024b8c) list_midp_choice_pane_ParamLimits

0xda4c,	// (0x0002cfa1) list_single_2graphic_pane_cp3_ParamLimits

0xda4c,	// (0x0002cfa1) list_single_2graphic_pane_cp3

0xda5f,	// (0x0002cfb4) list_single_midp_graphic_pane_ParamLimits

0xda5f,	// (0x0002cfb4) list_single_midp_graphic_pane

0x087a,	// (0x0001fdcf) list_single_graphic_2heading_pane_g1_ParamLimits

0x087a,	// (0x0001fdcf) list_single_graphic_2heading_pane_g1

0x0886,	// (0x0001fddb) list_single_graphic_2heading_pane_g4_ParamLimits

0x0886,	// (0x0001fddb) list_single_graphic_2heading_pane_g4

0x0892,	// (0x0001fde7) list_single_graphic_2heading_pane_g5_ParamLimits

0x0892,	// (0x0001fde7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002ed05) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002ed05) list_single_graphic_2heading_pane_g

0x089e,	// (0x0001fdf3) list_single_graphic_2heading_pane_t1_ParamLimits

0x089e,	// (0x0001fdf3) list_single_graphic_2heading_pane_t1

0x08b2,	// (0x0001fe07) list_single_graphic_2heading_pane_t2_ParamLimits

0x08b2,	// (0x0001fe07) list_single_graphic_2heading_pane_t2

0x08cc,	// (0x0001fe21) list_single_graphic_2heading_pane_t3_ParamLimits

0x08cc,	// (0x0001fe21) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002ed0c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002ed0c) list_single_graphic_2heading_pane_t

0x52da,	// (0x0002482f) bg_popup_sub_pane_cp2

0x5304,	// (0x00024859) grid_toobar_pane

0x21fc,	// (0x00021751) cell_toolbar_pane_ParamLimits

0x21fc,	// (0x00021751) cell_toolbar_pane

0x5340,	// (0x00024895) cell_toolbar_pane_g1_ParamLimits

0x5340,	// (0x00024895) cell_toolbar_pane_g1

0x5354,	// (0x000248a9) cell_toolbar_pane_g2_ParamLimits

0x5354,	// (0x000248a9) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002ed13) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002ed13) cell_toolbar_pane_g

0x5376,	// (0x000248cb) grid_highlight_pane_cp2_ParamLimits

0x5376,	// (0x000248cb) grid_highlight_pane_cp2

0x5390,	// (0x000248e5) toolbar_button_pane

0x539c,	// (0x000248f1) toolbar_button_pane_g1

0x53a4,	// (0x000248f9) toolbar_button_pane_g2

0x53ac,	// (0x00024901) toolbar_button_pane_g3

0x53b4,	// (0x00024909) toolbar_button_pane_g4

0x53bc,	// (0x00024911) toolbar_button_pane_g5

0x53c4,	// (0x00024919) toolbar_button_pane_g6

0x53cc,	// (0x00024921) toolbar_button_pane_g7

0x53d4,	// (0x00024929) toolbar_button_pane_g8

0x53dc,	// (0x00024931) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002ed18) toolbar_button_pane_g

0x2234,	// (0x00021789) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2234,	// (0x00021789) list_single_2graphic_pane_g1_cp3

0xc97b,	// (0x0002bed0) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc97b,	// (0x0002bed0) list_single_2graphic_pane_g2_cp3

0x2251,	// (0x000217a6) list_single_2graphic_pane_g3_cp3

0x2259,	// (0x000217ae) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2259,	// (0x000217ae) list_single_2graphic_pane_g4_cp3

0x2265,	// (0x000217ba) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2265,	// (0x000217ba) list_single_2graphic_pane_t1_cp3

0x584e,	// (0x00024da3) list_single_midp_graphic_pane_g2_ParamLimits

0x584e,	// (0x00024da3) list_single_midp_graphic_pane_g2

0x1c4f,	// (0x000211a4) aid_zoom_text_primary

0x084e,	// (0x0001fda3) aid_zoom_text_secondary

0xd581,	// (0x0002cad6) status_small_pane_g7_ParamLimits

0xd581,	// (0x0002cad6) status_small_pane_g7

0xd5a4,	// (0x0002caf9) status_small_pane_t1_ParamLimits

0xc085,	// (0x0002b5da) title_pane_g2

0x0003,

0xf54e,	// (0x0002eaa3) title_pane_g

0xd1c9,	// (0x0002c71e) aid_size_cell_colour_1_pane_ParamLimits

0xd1c9,	// (0x0002c71e) aid_size_cell_colour_1_pane

0xd1dd,	// (0x0002c732) aid_size_cell_colour_2_pane_ParamLimits

0xd1dd,	// (0x0002c732) aid_size_cell_colour_2_pane

0xd1f1,	// (0x0002c746) aid_size_cell_colour_3_pane_ParamLimits

0xd1f1,	// (0x0002c746) aid_size_cell_colour_3_pane

0xd205,	// (0x0002c75a) aid_size_cell_colour_4_pane_ParamLimits

0xd205,	// (0x0002c75a) aid_size_cell_colour_4_pane

0x16a7,	// (0x00020bfc) title_pane_stacon_g1_ParamLimits

0x16a7,	// (0x00020bfc) title_pane_stacon_g1

0x5a47,	// (0x00024f9c) popup_note_wait_window_g3_ParamLimits

0x5a47,	// (0x00024f9c) popup_note_wait_window_g3

0x5abd,	// (0x00025012) popup_note_wait_window_t5_ParamLimits

0x5abd,	// (0x00025012) popup_note_wait_window_t5

0x356f,	// (0x00022ac4) main_feb_china_hwr_fs_writing_pane

0xc32b,	// (0x0002b880) popup_feb_china_hwr_fs_window_ParamLimits

0xc32b,	// (0x0002b880) popup_feb_china_hwr_fs_window

0xc98c,	// (0x0002bee1) aid_size_cell_hwr_fs_ParamLimits

0xc98c,	// (0x0002bee1) aid_size_cell_hwr_fs

0x5410,	// (0x00024965) bg_popup_sub_pane_cp3_ParamLimits

0x5410,	// (0x00024965) bg_popup_sub_pane_cp3

0xc9a1,	// (0x0002bef6) grid_hwr_fs_pane_ParamLimits

0xc9a1,	// (0x0002bef6) grid_hwr_fs_pane

0x22ae,	// (0x00021803) linegrid_hwr_fs_pane_ParamLimits

0x22ae,	// (0x00021803) linegrid_hwr_fs_pane

0xc9b9,	// (0x0002bf0e) cell_hwr_fs_pane_ParamLimits

0xc9b9,	// (0x0002bf0e) cell_hwr_fs_pane

0x541c,	// (0x00024971) linegrid_hwr_fs_pane_g1_ParamLimits

0x541c,	// (0x00024971) linegrid_hwr_fs_pane_g1

0xda20,	// (0x0002cf75) linegrid_hwr_fs_pane_g2_ParamLimits

0xda20,	// (0x0002cf75) linegrid_hwr_fs_pane_g2

0x543a,	// (0x0002498f) linegrid_hwr_fs_pane_g3_ParamLimits

0x543a,	// (0x0002498f) linegrid_hwr_fs_pane_g3

0x22e0,	// (0x00021835) linegrid_hwr_fs_pane_g4_ParamLimits

0x22e0,	// (0x00021835) linegrid_hwr_fs_pane_g4

0x22fa,	// (0x0002184f) linegrid_hwr_fs_pane_g5_ParamLimits

0x22fa,	// (0x0002184f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002ed3e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002ed3e) linegrid_hwr_fs_pane_g

0x5446,	// (0x0002499b) cell_hwr_fs_pane_g1_ParamLimits

0x5446,	// (0x0002499b) cell_hwr_fs_pane_g1

0x5211,	// (0x00024766) cell_hwr_fs_pane_g2_ParamLimits

0x5211,	// (0x00024766) cell_hwr_fs_pane_g2

0xda32,	// (0x0002cf87) cell_hwr_fs_pane_g3_ParamLimits

0xda32,	// (0x0002cf87) cell_hwr_fs_pane_g3

0xda3f,	// (0x0002cf94) cell_hwr_fs_pane_g4_ParamLimits

0xda3f,	// (0x0002cf94) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002ed49) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002ed49) cell_hwr_fs_pane_g

0xc9df,	// (0x0002bf34) cell_hwr_fs_pane_t1

0x356f,	// (0x00022ac4) grid_highlight_pane_cp6

0x356f,	// (0x00022ac4) main_idle_act2_pane

0x4015,	// (0x0002356a) aid_inside_area_popup_secondary

0xdb17,	// (0x0002d06c) aid_inside_area_window_primary_ParamLimits

0xdb17,	// (0x0002d06c) aid_inside_area_window_primary

0x6c88,	// (0x000261dd) ai2_news_ticker_pane

0x6c90,	// (0x000261e5) aid_size_cell_ai1_link_ParamLimits

0x6c90,	// (0x000261e5) aid_size_cell_ai1_link

0xdee2,	// (0x0002d437) popup_ai2_data_window_ParamLimits

0xdee2,	// (0x0002d437) popup_ai2_data_window

0x6cc0,	// (0x00026215) popup_ai2_link_window_ParamLimits

0x6cc0,	// (0x00026215) popup_ai2_link_window

0x5410,	// (0x00024965) bg_popup_sub_pane_cp4_ParamLimits

0x5410,	// (0x00024965) bg_popup_sub_pane_cp4

0x6cd4,	// (0x00026229) grid_ai2_link_pane_ParamLimits

0x6cd4,	// (0x00026229) grid_ai2_link_pane

0x6ceb,	// (0x00026240) popup_ai2_link_window_g1_ParamLimits

0x6ceb,	// (0x00026240) popup_ai2_link_window_g1

0x6cf7,	// (0x0002624c) popup_ai2_link_window_g2_ParamLimits

0x6cf7,	// (0x0002624c) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002ef1c) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002ef1c) popup_ai2_link_window_g

0x6d06,	// (0x0002625b) ai2_mp_button_pane

0x6d0e,	// (0x00026263) ai2_mp_volume_pane

0x5623,	// (0x00024b78) bg_popup_sub_pane_cp5_ParamLimits

0x5623,	// (0x00024b78) bg_popup_sub_pane_cp5

0x6d16,	// (0x0002626b) heading_ai2_gene_pane_ParamLimits

0x6d16,	// (0x0002626b) heading_ai2_gene_pane

0x6d22,	// (0x00026277) list_ai2_gene_pane_ParamLimits

0x6d22,	// (0x00026277) list_ai2_gene_pane

0x6d6a,	// (0x000262bf) cell_ai2_link_pane_ParamLimits

0x6d6a,	// (0x000262bf) cell_ai2_link_pane

0x6d80,	// (0x000262d5) cell_ai2_link_pane_g1

0x356f,	// (0x00022ac4) grid_highlight_pane_cp7

0x2602,	// (0x00021b57) ai2_mp_volume_pane_g1

0x6e50,	// (0x000263a5) ai2_mp_volume_pane_g2

0xdf0c,	// (0x0002d461) list_ai2_gene_pane_t1

0x6e58,	// (0x000263ad) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002ef35) ai2_mp_volume_pane_g

0x260a,	// (0x00021b5f) volume_small_pane_cp3

0x6e60,	// (0x000263b5) aid_size_cell_ai2_button

0x6e68,	// (0x000263bd) grid_ai2_button_pane

0x6e71,	// (0x000263c6) cell_ai2_button_pane_ParamLimits

0x6e71,	// (0x000263c6) cell_ai2_button_pane

0x3565,	// (0x00022aba) cell_ai2_button_pane_g1

0x356f,	// (0x00022ac4) grid_highlight_pane_cp8

0x6e10,	// (0x00026365) ai2_gene_pane_t1_ParamLimits

0x6e10,	// (0x00026365) ai2_gene_pane_t1

0xc2a5,	// (0x0002b7fa) aid_height_parent_landscape

0xdc89,	// (0x0002d1de) aid_height_set_list

0x677c,	// (0x00025cd1) aid_size_parent

0x6aaf,	// (0x00026004) aid_size_cell_graphic_pane_ParamLimits

0x6d32,	// (0x00026287) popup_ai2_data_window_g1_ParamLimits

0x6d32,	// (0x00026287) popup_ai2_data_window_g1

0x6d3e,	// (0x00026293) ai2_news_ticker_pane_g1

0x6d46,	// (0x0002629b) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002ef21) ai2_news_ticker_pane_g

0x6d4e,	// (0x000262a3) ai2_news_ticker_pane_t1

0x6d5c,	// (0x000262b1) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002ef26) ai2_news_ticker_pane_t

0x6d89,	// (0x000262de) heading_ai2_gene_pane_g1

0x6d91,	// (0x000262e6) heading_ai2_gene_pane_t1_ParamLimits

0x6d91,	// (0x000262e6) heading_ai2_gene_pane_t1

0x6da6,	// (0x000262fb) list_highlight_pane_cp6

0xdef6,	// (0x0002d44b) ai2_gene_pane_ParamLimits

0xdef6,	// (0x0002d44b) ai2_gene_pane

0xdf1a,	// (0x0002d46f) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002ef2b) list_ai2_gene_pane_t

0x6de1,	// (0x00026336) list_highlight_pane_cp8_ParamLimits

0x6de1,	// (0x00026336) list_highlight_pane_cp8

0x6df2,	// (0x00026347) ai2_gene_pane_g1_ParamLimits

0x6df2,	// (0x00026347) ai2_gene_pane_g1

0x6e04,	// (0x00026359) ai2_gene_pane_g2_ParamLimits

0x6e04,	// (0x00026359) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002ef30) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002ef30) ai2_gene_pane_g

0x3e54,	// (0x000233a9) scroll_pane_cp12

0xc264,	// (0x0002b7b9) control_pane_t3_ParamLimits

0xc264,	// (0x0002b7b9) control_pane_t3

0xd595,	// (0x0002caea) status_small_pane_g8_ParamLimits

0xd595,	// (0x0002caea) status_small_pane_g8

0xc3c0,	// (0x0002b915) popup_find_window_ParamLimits

0xc64d,	// (0x0002bba2) popup_note_image_window_ParamLimits

0x087a,	// (0x0001fdcf) list_double2_graphic_pane_vc_g1_ParamLimits

0x087a,	// (0x0001fdcf) list_double2_graphic_pane_vc_g1

0x0886,	// (0x0001fddb) list_double2_graphic_pane_vc_g2_ParamLimits

0x0886,	// (0x0001fddb) list_double2_graphic_pane_vc_g2

0x0892,	// (0x0001fde7) list_double2_graphic_pane_vc_g3_ParamLimits

0x0892,	// (0x0001fde7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ed05) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed05) list_double2_graphic_pane_vc_g

0x08e4,	// (0x0001fe39) list_double2_graphic_pane_vc_t1_ParamLimits

0x08e4,	// (0x0001fe39) list_double2_graphic_pane_vc_t1

0x0886,	// (0x0001fddb) list_single_heading_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_heading_pane_vc_g1

0x0892,	// (0x0001fde7) list_single_heading_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_heading_pane_vc_g

0x08fa,	// (0x0001fe4f) list_single_heading_pane_vc_t1_ParamLimits

0x08fa,	// (0x0001fe4f) list_single_heading_pane_vc_t1

0x0912,	// (0x0001fe67) list_single_heading_pane_vc_t2_ParamLimits

0x0912,	// (0x0001fe67) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002ed2d) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002ed2d) list_single_heading_pane_vc_t

0x092e,	// (0x0001fe83) list_setting_number_pane_vc_g1_ParamLimits

0x092e,	// (0x0001fe83) list_setting_number_pane_vc_g1

0x093a,	// (0x0001fe8f) list_setting_number_pane_vc_g2_ParamLimits

0x093a,	// (0x0001fe8f) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ed32) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ed32) list_setting_number_pane_vc_g

0x0946,	// (0x0001fe9b) list_setting_number_pane_vc_t1_ParamLimits

0x0946,	// (0x0001fe9b) list_setting_number_pane_vc_t1

0x095a,	// (0x0001feaf) list_setting_number_pane_vc_t2_ParamLimits

0x095a,	// (0x0001feaf) list_setting_number_pane_vc_t2

0x0976,	// (0x0001fecb) list_setting_number_pane_vc_t3_ParamLimits

0x0976,	// (0x0001fecb) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002ed37) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002ed37) list_setting_number_pane_vc_t

0x0994,	// (0x0001fee9) set_value_pane_vc_ParamLimits

0x0994,	// (0x0001fee9) set_value_pane_vc

0x6934,	// (0x00025e89) list_double2_graphic_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double2_graphic_pane_vc

0x6934,	// (0x00025e89) list_double2_large_graphic_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double2_large_graphic_pane_vc

0x6934,	// (0x00025e89) list_double2_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double2_pane_vc

0x6934,	// (0x00025e89) list_double_graphic_heading_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_graphic_heading_pane_vc

0x6934,	// (0x00025e89) list_double_graphic_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_graphic_pane_vc

0x6934,	// (0x00025e89) list_double_heading_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_heading_pane_vc

0x6946,	// (0x00025e9b) list_double_large_graphic_pane_vc_ParamLimits

0x6946,	// (0x00025e9b) list_double_large_graphic_pane_vc

0x6934,	// (0x00025e89) list_double_number_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_number_pane_vc

0x6934,	// (0x00025e89) list_double_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_pane_vc

0x6934,	// (0x00025e89) list_double_time_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_double_time_pane_vc

0x6934,	// (0x00025e89) list_setting_number_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_setting_number_pane_vc

0x6934,	// (0x00025e89) list_setting_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_setting_pane_vc

0x6934,	// (0x00025e89) list_single_graphic_heading_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_single_graphic_heading_pane_vc

0x6934,	// (0x00025e89) list_single_heading_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_single_heading_pane_vc

0x6934,	// (0x00025e89) list_single_number_heading_pane_vc_ParamLimits

0x6934,	// (0x00025e89) list_single_number_heading_pane_vc

0x087a,	// (0x0001fdcf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x087a,	// (0x0001fdcf) list_double_graphic_heading_pane_vc_g1

0x0886,	// (0x0001fddb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0886,	// (0x0001fddb) list_double_graphic_heading_pane_vc_g2

0x0892,	// (0x0001fde7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0892,	// (0x0001fde7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002ed05) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed05) list_double_graphic_heading_pane_vc_g

0x0aee,	// (0x00020043) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0aee,	// (0x00020043) list_double_graphic_heading_pane_vc_t1

0x0b0a,	// (0x0002005f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b0a,	// (0x0002005f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002ef3c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002ef3c) list_double_graphic_heading_pane_vc_t

0x092e,	// (0x0001fe83) list_setting_pane_vc_g1_ParamLimits

0x092e,	// (0x0001fe83) list_setting_pane_vc_g1

0x093a,	// (0x0001fe8f) list_setting_pane_vc_g2_ParamLimits

0x093a,	// (0x0001fe8f) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ed32) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ed32) list_setting_pane_vc_g

0x0b28,	// (0x0002007d) list_setting_pane_vc_t1_ParamLimits

0x0b28,	// (0x0002007d) list_setting_pane_vc_t1

0x0b44,	// (0x00020099) list_setting_pane_vc_t2_ParamLimits

0x0b44,	// (0x00020099) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002ef6a) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002ef6a) list_setting_pane_vc_t

0x0994,	// (0x0001fee9) set_value_pane_cp_vc_ParamLimits

0x0994,	// (0x0001fee9) set_value_pane_cp_vc

0x0886,	// (0x0001fddb) list_single_number_heading_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_single_number_heading_pane_vc_g1

0x0892,	// (0x0001fde7) list_single_number_heading_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_single_number_heading_pane_vc_g

0x08fa,	// (0x0001fe4f) list_single_number_heading_pane_vc_t1_ParamLimits

0x08fa,	// (0x0001fe4f) list_single_number_heading_pane_vc_t1

0x0b60,	// (0x000200b5) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b60,	// (0x000200b5) list_single_number_heading_pane_vc_t2

0x0b74,	// (0x000200c9) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b74,	// (0x000200c9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002ef6f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002ef6f) list_single_number_heading_pane_vc_t

0x087a,	// (0x0001fdcf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x087a,	// (0x0001fdcf) list_single_graphic_heading_pane_vc_g1

0x0886,	// (0x0001fddb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0886,	// (0x0001fddb) list_single_graphic_heading_pane_vc_g4

0x0892,	// (0x0001fde7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0892,	// (0x0001fde7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002ed05) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002ed05) list_single_graphic_heading_pane_vc_g

0x08fa,	// (0x0001fe4f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x08fa,	// (0x0001fe4f) list_single_graphic_heading_pane_vc_t1

0x0b86,	// (0x000200db) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b86,	// (0x000200db) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002ef76) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002ef76) list_single_graphic_heading_pane_vc_t

0x0886,	// (0x0001fddb) list_double2_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_double2_pane_vc_g1

0x0892,	// (0x0001fde7) list_double2_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_double2_pane_vc_g

0x0b9a,	// (0x000200ef) list_double2_pane_vc_t1_ParamLimits

0x0b9a,	// (0x000200ef) list_double2_pane_vc_t1

0x0bb0,	// (0x00020105) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0bb0,	// (0x00020105) list_double2_large_graphic_pane_vc_g1

0x0886,	// (0x0001fddb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0886,	// (0x0001fddb) list_double2_large_graphic_pane_vc_g2

0x0892,	// (0x0001fde7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0892,	// (0x0001fde7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002eb3a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002eb3a) list_double2_large_graphic_pane_vc_g

0x0bbc,	// (0x00020111) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0bbc,	// (0x00020111) list_double2_large_graphic_pane_vc_t1

0x0bd2,	// (0x00020127) list_double_time_pane_vc_g1_ParamLimits

0x0bd2,	// (0x00020127) list_double_time_pane_vc_g1

0x0bde,	// (0x00020133) list_double_time_pane_vc_g2_ParamLimits

0x0bde,	// (0x00020133) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002ef7b) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002ef7b) list_double_time_pane_vc_g

0x0bea,	// (0x0002013f) list_double_time_pane_vc_t1_ParamLimits

0x0bea,	// (0x0002013f) list_double_time_pane_vc_t1

0x0c0e,	// (0x00020163) list_double_time_pane_vc_t2_ParamLimits

0x0c0e,	// (0x00020163) list_double_time_pane_vc_t2

0x0c5d,	// (0x000201b2) list_double_time_pane_vc_t3_ParamLimits

0x0c5d,	// (0x000201b2) list_double_time_pane_vc_t3

0x0c6f,	// (0x000201c4) list_double_time_pane_vc_t4_ParamLimits

0x0c6f,	// (0x000201c4) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002ef80) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002ef80) list_double_time_pane_vc_t

0x0886,	// (0x0001fddb) list_double_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_double_pane_vc_g1

0x0892,	// (0x0001fde7) list_double_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_double_pane_vc_g

0x0c83,	// (0x000201d8) list_double_pane_vc_t1_ParamLimits

0x0c83,	// (0x000201d8) list_double_pane_vc_t1

0x0c97,	// (0x000201ec) list_double_pane_vc_t2_ParamLimits

0x0c97,	// (0x000201ec) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002ef89) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002ef89) list_double_pane_vc_t

0x0886,	// (0x0001fddb) list_double_number_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_double_number_pane_vc_g1

0x0892,	// (0x0001fde7) list_double_number_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_double_number_pane_vc_g

0x0caf,	// (0x00020204) list_double_number_pane_vc_t1_ParamLimits

0x0caf,	// (0x00020204) list_double_number_pane_vc_t1

0x0cc1,	// (0x00020216) list_double_number_pane_vc_t2_ParamLimits

0x0cc1,	// (0x00020216) list_double_number_pane_vc_t2

0x0cd5,	// (0x0002022a) list_double_number_pane_vc_t3_ParamLimits

0x0cd5,	// (0x0002022a) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002ef8e) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002ef8e) list_double_number_pane_vc_t

0x0ced,	// (0x00020242) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ced,	// (0x00020242) list_double_large_graphic_pane_vc_g1

0x0d0f,	// (0x00020264) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0d0f,	// (0x00020264) list_double_large_graphic_pane_vc_g2

0x0d23,	// (0x00020278) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0d23,	// (0x00020278) list_double_large_graphic_pane_vc_g3

0x0d32,	// (0x00020287) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0d32,	// (0x00020287) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002ef95) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002ef95) list_double_large_graphic_pane_vc_g

0x0d3e,	// (0x00020293) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0d3e,	// (0x00020293) list_double_large_graphic_pane_vc_t1

0x0d5a,	// (0x000202af) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0d5a,	// (0x000202af) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ef9e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ef9e) list_double_large_graphic_pane_vc_t

0x0886,	// (0x0001fddb) list_double_heading_pane_vc_g1_ParamLimits

0x0886,	// (0x0001fddb) list_double_heading_pane_vc_g1

0x0892,	// (0x0001fde7) list_double_heading_pane_vc_g2_ParamLimits

0x0892,	// (0x0001fde7) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002eb1d) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002eb1d) list_double_heading_pane_vc_g

0x0d7c,	// (0x000202d1) list_double_heading_pane_vc_t1_ParamLimits

0x0d7c,	// (0x000202d1) list_double_heading_pane_vc_t1

0x08fa,	// (0x0001fe4f) list_double_heading_pane_vc_t2_ParamLimits

0x08fa,	// (0x0001fe4f) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002efa3) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002efa3) list_double_heading_pane_vc_t

0x0d90,	// (0x000202e5) list_double_graphic_pane_vc_g1_ParamLimits

0x0d90,	// (0x000202e5) list_double_graphic_pane_vc_g1

0x0d9c,	// (0x000202f1) list_double_graphic_pane_vc_g2_ParamLimits

0x0d9c,	// (0x000202f1) list_double_graphic_pane_vc_g2

0x0886,	// (0x0001fddb) list_double_graphic_pane_vc_g3_ParamLimits

0x0886,	// (0x0001fddb) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002efa8) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002efa8) list_double_graphic_pane_vc_g

0x0db9,	// (0x0002030e) list_double_graphic_pane_vc_t1_ParamLimits

0x0db9,	// (0x0002030e) list_double_graphic_pane_vc_t1

0x0de3,	// (0x00020338) list_double_graphic_pane_vc_t2_ParamLimits

0x0de3,	// (0x00020338) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002efb1) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002efb1) list_double_graphic_pane_vc_t

0x1204,	// (0x00020759) aid_size_cell_fastswap

0xbe6c,	// (0x0002b3c1) aid_size_cell_touch_ParamLimits

0xbe6c,	// (0x0002b3c1) aid_size_cell_touch

0x1467,	// (0x000209bc) popup_fast_swap_wide_window_ParamLimits

0x1467,	// (0x000209bc) popup_fast_swap_wide_window

0xc01c,	// (0x0002b571) touch_pane_ParamLimits

0xc01c,	// (0x0002b571) touch_pane

0x3eaa,	// (0x000233ff) button_value_adjust_pane_cp2

0x0561,	// (0x0001fab6) button_value_adjust_pane_cp4

0x0581,	// (0x0001fad6) form_field_data_pane_cp2

0xb9e5,	// (0x0002af3a) form_field_data_wide_pane_cp2

0x432b,	// (0x00023880) bg_scroll_pane_ParamLimits

0x1809,	// (0x00020d5e) scroll_handle_pane_ParamLimits

0x181d,	// (0x00020d72) scroll_sc2_down_pane_ParamLimits

0x181d,	// (0x00020d72) scroll_sc2_down_pane

0x435c,	// (0x000238b1) scroll_sc2_up_pane_ParamLimits

0x435c,	// (0x000238b1) scroll_sc2_up_pane

0xe03a,	// (0x0002d58f) grid_wheel_folder_pane_g1_ParamLimits

0xe03a,	// (0x0002d58f) grid_wheel_folder_pane_g1

0x19e2,	// (0x00020f37) clock_nsta_pane_cp2_ParamLimits

0x19e2,	// (0x00020f37) clock_nsta_pane_cp2

0x4e92,	// (0x000243e7) listscroll_midp_pane_ParamLimits

0xd490,	// (0x0002c9e5) midp_canvas_pane

0x4e44,	// (0x00024399) nsta_clock_indic_pane

0x4e78,	// (0x000243cd) listscroll_form_pane_vc

0x4e80,	// (0x000243d5) listscroll_set_pane_vc_ParamLimits

0x4e80,	// (0x000243d5) listscroll_set_pane_vc

0xd715,	// (0x0002cc6a) clock_nsta_pane

0xd73f,	// (0x0002cc94) indicator_nsta_pane

0x52da,	// (0x0002482f) bg_popup_sub_pane_cp2_ParamLimits

0x52ee,	// (0x00024843) find_pane_cp2_ParamLimits

0x52ee,	// (0x00024843) find_pane_cp2

0x5304,	// (0x00024859) grid_toobar_pane_ParamLimits

0x53e4,	// (0x00024939) list_form_gen_pane_vc_ParamLimits

0x53e4,	// (0x00024939) list_form_gen_pane_vc

0x53fa,	// (0x0002494f) scroll_pane_cp8_vc_ParamLimits

0x53fa,	// (0x0002494f) scroll_pane_cp8_vc

0x5476,	// (0x000249cb) data_form_wide_pane_vc_ParamLimits

0x5476,	// (0x000249cb) data_form_wide_pane_vc

0x5482,	// (0x000249d7) form_field_data_wide_pane_vc_g1

0x548a,	// (0x000249df) form_field_data_wide_pane_vc_t1_ParamLimits

0x548a,	// (0x000249df) form_field_data_wide_pane_vc_t1

0x3ebe,	// (0x00023413) input_focus_pane_cp6_vc_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_cp6_vc

0xdad1,	// (0x0002d026) list_midp_pane_ParamLimits

0x6b15,	// (0x0002606a) scroll_pane_cp16_ParamLimits

0x6b15,	// (0x0002606a) scroll_pane_cp16

0x5810,	// (0x00024d65) button_value_adjust_pane_ParamLimits

0x5810,	// (0x00024d65) button_value_adjust_pane

0xdc9a,	// (0x0002d1ef) button_value_adjust_pane_cp6_ParamLimits

0xdc9a,	// (0x0002d1ef) button_value_adjust_pane_cp6

0xddb4,	// (0x0002d309) settings_code_pane_cp_ParamLimits

0xddb4,	// (0x0002d309) settings_code_pane_cp

0x3565,	// (0x00022aba) cell_touch_pane_g1

0x3565,	// (0x00022aba) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002ec58) cell_touch_pane_g

0xdf28,	// (0x0002d47d) cell_touch_pane_cp_ParamLimits

0xdf28,	// (0x0002d47d) cell_touch_pane_cp

0xdf44,	// (0x0002d499) cell_touch_pane_ParamLimits

0xdf44,	// (0x0002d499) cell_touch_pane

0x3565,	// (0x00022aba) scroll_sc2_down_pane_g1

0x3565,	// (0x00022aba) scroll_sc2_up_pane_g1

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp4_vc

0x6ea5,	// (0x000263fa) list_set_graphic_pane_vc_g1_ParamLimits

0x6ea5,	// (0x000263fa) list_set_graphic_pane_vc_g1

0x6eb1,	// (0x00026406) list_set_graphic_pane_vc_g2_ParamLimits

0x6eb1,	// (0x00026406) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002ef41) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002ef41) list_set_graphic_pane_vc_g

0x6ebd,	// (0x00026412) text_primary_small_cp13_vc_ParamLimits

0x6ebd,	// (0x00026412) text_primary_small_cp13_vc

0x6ed5,	// (0x0002642a) list_set_graphic_pane_vc_ParamLimits

0x6ed5,	// (0x0002642a) list_set_graphic_pane_vc

0x356f,	// (0x00022ac4) input_focus_pane_cp2_vc

0x3565,	// (0x00022aba) setting_code_pane_vc_g1

0x369a,	// (0x00022bef) setting_code_pane_vc_t1

0x6ee8,	// (0x0002643d) set_text_pane_vc_t1_ParamLimits

0x6ee8,	// (0x0002643d) set_text_pane_vc_t1

0x356f,	// (0x00022ac4) input_focus_pane_cp1_vc

0x6f04,	// (0x00026459) list_set_text_pane_vc

0x3565,	// (0x00022aba) setting_text_pane_vc_g1

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp2_vc

0x3691,	// (0x00022be6) setting_slider_graphic_pane_vc_g1

0x6f0e,	// (0x00026463) setting_slider_graphic_pane_vc_t1

0x6f1e,	// (0x00026473) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002ef46) setting_slider_graphic_pane_vc_t

0x6f2e,	// (0x00026483) slider_set_pane_cp_vc

0x6f36,	// (0x0002648b) slider_set_pane_vc_g1

0x6f3f,	// (0x00026494) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002ef4b) slider_set_pane_vc_g

0x3f19,	// (0x0002346e) set_opt_bg_pane_g1_copy1

0x3f21,	// (0x00023476) set_opt_bg_pane_g2_copy1

0x6f6b,	// (0x000264c0) set_opt_bg_pane_g3_copy1

0x3f31,	// (0x00023486) set_opt_bg_pane_g4_copy1

0x3f39,	// (0x0002348e) set_opt_bg_pane_g5_copy1

0x3f41,	// (0x00023496) set_opt_bg_pane_g6_copy1

0x6f75,	// (0x000264ca) set_opt_bg_pane_g7_copy1

0x6f7d,	// (0x000264d2) set_opt_bg_pane_g8_copy1

0x6f87,	// (0x000264dc) set_opt_bg_pane_g9_copy1

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp_vc

0x6f91,	// (0x000264e6) setting_slider_pane_vc_t1

0x6fa0,	// (0x000264f5) setting_slider_pane_vc_t2

0x6fb0,	// (0x00026505) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002ef5a) setting_slider_pane_vc_t

0x6fc0,	// (0x00026515) slider_set_pane_vc

0x231e,	// (0x00021873) volume_set_pane_vc_g1

0x2327,	// (0x0002187c) volume_set_pane_vc_g2

0x2330,	// (0x00021885) volume_set_pane_vc_g3

0x2339,	// (0x0002188e) volume_set_pane_vc_g4

0x2342,	// (0x00021897) volume_set_pane_vc_g5

0x234b,	// (0x000218a0) volume_set_pane_vc_g6

0x2354,	// (0x000218a9) volume_set_pane_vc_g7

0x235d,	// (0x000218b2) volume_set_pane_vc_g8

0x2366,	// (0x000218bb) volume_set_pane_vc_g9

0x236f,	// (0x000218c4) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002edff) volume_set_pane_vc_g

0x6fc8,	// (0x0002651d) volume_set_pane_vc

0x6fd0,	// (0x00026525) button_value_adjust_pane_cp1_vc

0x6fda,	// (0x0002652f) list_highlight_pane_cp2_vc

0x6fe3,	// (0x00026538) list_set_pane_vc_ParamLimits

0x6fe3,	// (0x00026538) list_set_pane_vc

0x7041,	// (0x00026596) main_pane_set_vc_t1_ParamLimits

0x7041,	// (0x00026596) main_pane_set_vc_t1

0x7056,	// (0x000265ab) main_pane_set_vc_t2_ParamLimits

0x7056,	// (0x000265ab) main_pane_set_vc_t2

0x7068,	// (0x000265bd) main_pane_set_vc_t3_ParamLimits

0x7068,	// (0x000265bd) main_pane_set_vc_t3

0x707c,	// (0x000265d1) main_pane_set_vc_t4_ParamLimits

0x707c,	// (0x000265d1) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002ef61) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002ef61) main_pane_set_vc_t

0x7090,	// (0x000265e5) setting_code_pane_vc_ParamLimits

0x7090,	// (0x000265e5) setting_code_pane_vc

0x70a1,	// (0x000265f6) setting_slider_graphic_pane_vc

0x70a1,	// (0x000265f6) setting_slider_pane_vc

0x70a1,	// (0x000265f6) setting_text_pane_vc

0x70a1,	// (0x000265f6) setting_volume_pane_vc

0x70ab,	// (0x00026600) scroll_pane_cp121_vc

0x3e98,	// (0x000233ed) set_content_pane_vc

0x70b3,	// (0x00026608) button_value_adjust_pane_g1

0x70bc,	// (0x00026611) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002efb6) button_value_adjust_pane_g

0x70c5,	// (0x0002661a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70c5,	// (0x0002661a) form_field_slider_wide_pane_vc_t1

0x70d9,	// (0x0002662e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x70d9,	// (0x0002662e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002efbb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002efbb) form_field_slider_wide_pane_vc_t

0x38ca,	// (0x00022e1f) input_focus_pane_cp10_vc_ParamLimits

0x38ca,	// (0x00022e1f) input_focus_pane_cp10_vc

0x7107,	// (0x0002665c) slider_cont_pane_cp1_vc_ParamLimits

0x7107,	// (0x0002665c) slider_cont_pane_cp1_vc

0x7119,	// (0x0002666e) slider_form_pane_g1_cp2

0x6f3f,	// (0x00026494) slider_form_pane_g2_cp2

0x7146,	// (0x0002669b) form_field_slider_pane_vc_t3

0x7154,	// (0x000266a9) form_field_slider_pane_vc_t4

0x7162,	// (0x000266b7) slider_form_pane_vc_ParamLimits

0x7162,	// (0x000266b7) slider_form_pane_vc

0x716f,	// (0x000266c4) form_field_slider_pane_vc_t1_ParamLimits

0x716f,	// (0x000266c4) form_field_slider_pane_vc_t1

0x70d9,	// (0x0002662e) form_field_slider_pane_vc_t2_ParamLimits

0x70d9,	// (0x0002662e) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002efcd) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002efcd) form_field_slider_pane_vc_t

0x38ca,	// (0x00022e1f) input_focus_pane_cp9_vc_ParamLimits

0x38ca,	// (0x00022e1f) input_focus_pane_cp9_vc

0x718b,	// (0x000266e0) slider_cont_pane_vc_ParamLimits

0x718b,	// (0x000266e0) slider_cont_pane_vc

0x719f,	// (0x000266f4) list_form_graphic_pane_cp_vc_ParamLimits

0x719f,	// (0x000266f4) list_form_graphic_pane_cp_vc

0x5482,	// (0x000249d7) form_field_popup_wide_pane_vc_g1

0x71b4,	// (0x00026709) form_field_popup_wide_pane_vc_t1_ParamLimits

0x71b4,	// (0x00026709) form_field_popup_wide_pane_vc_t1

0x3ebe,	// (0x00023413) input_focus_pane_cp8_vc_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_cp8_vc

0x71f9,	// (0x0002674e) list_form_wide_pane_vc_ParamLimits

0x71f9,	// (0x0002674e) list_form_wide_pane_vc

0x7205,	// (0x0002675a) list_form_graphic_pane_vc_g1

0x720d,	// (0x00026762) list_form_graphic_pane_vc_t1_ParamLimits

0x720d,	// (0x00026762) list_form_graphic_pane_vc_t1

0x364f,	// (0x00022ba4) list_highlight_pane_cp5_vc_ParamLimits

0x364f,	// (0x00022ba4) list_highlight_pane_cp5_vc

0x7229,	// (0x0002677e) list_form_graphic_pane_vc_ParamLimits

0x7229,	// (0x0002677e) list_form_graphic_pane_vc

0x5482,	// (0x000249d7) form_field_popup_pane_vc_g1

0x723f,	// (0x00026794) form_field_popup_pane_vc_t1_ParamLimits

0x723f,	// (0x00026794) form_field_popup_pane_vc_t1

0x3ebe,	// (0x00023413) input_focus_pane_cp7_vc_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_cp7_vc

0x7256,	// (0x000267ab) list_form_pane_vc_ParamLimits

0x7256,	// (0x000267ab) list_form_pane_vc

0x7262,	// (0x000267b7) data_form_pane_vc_t1_ParamLimits

0x7262,	// (0x000267b7) data_form_pane_vc_t1

0x3f19,	// (0x0002346e) input_focus_pane_vc_g1

0x3f21,	// (0x00023476) input_focus_pane_vc_g2

0x3f29,	// (0x0002347e) input_focus_pane_vc_g3

0x3f31,	// (0x00023486) input_focus_pane_vc_g4

0x3f39,	// (0x0002348e) input_focus_pane_vc_g5

0x3f41,	// (0x00023496) input_focus_pane_vc_g6

0x3f49,	// (0x0002349e) input_focus_pane_vc_g7

0x3f51,	// (0x000234a6) input_focus_pane_vc_g8

0x3f59,	// (0x000234ae) input_focus_pane_vc_g9

0x3565,	// (0x00022aba) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002ebe1) input_focus_pane_vc_g

0x5476,	// (0x000249cb) data_form_pane_vc_ParamLimits

0x5476,	// (0x000249cb) data_form_pane_vc

0x5482,	// (0x000249d7) form_field_data_pane_vc_g1

0x727d,	// (0x000267d2) form_field_data_pane_vc_t1_ParamLimits

0x727d,	// (0x000267d2) form_field_data_pane_vc_t1

0x3ebe,	// (0x00023413) input_focus_pane_vc_ParamLimits

0x3ebe,	// (0x00023413) input_focus_pane_vc

0x7297,	// (0x000267ec) button_value_adjust_pane_cp3_vc

0x729f,	// (0x000267f4) button_value_adjust_pane_cp5_vc

0x72a7,	// (0x000267fc) form_field_data_pane_vc_ParamLimits

0x72a7,	// (0x000267fc) form_field_data_pane_vc

0x72be,	// (0x00026813) form_field_data_pane_vc_cp2

0x72c6,	// (0x0002681b) form_field_data_wide_pane_vc_ParamLimits

0x72c6,	// (0x0002681b) form_field_data_wide_pane_vc

0x72dc,	// (0x00026831) form_field_data_wide_pane_vc_cp2

0x72e4,	// (0x00026839) form_field_popup_pane_vc_ParamLimits

0x72e4,	// (0x00026839) form_field_popup_pane_vc

0x72fb,	// (0x00026850) form_field_popup_wide_pane_vc_ParamLimits

0x72fb,	// (0x00026850) form_field_popup_wide_pane_vc

0x7311,	// (0x00026866) form_field_slider_pane_vc_ParamLimits

0x7311,	// (0x00026866) form_field_slider_pane_vc

0x7324,	// (0x00026879) form_field_slider_wide_pane_vc_ParamLimits

0x7324,	// (0x00026879) form_field_slider_wide_pane_vc

0xdf62,	// (0x0002d4b7) grid_touch_1_pane_ParamLimits

0xdf62,	// (0x0002d4b7) grid_touch_1_pane

0xdf76,	// (0x0002d4cb) grid_touch_2_pane_ParamLimits

0xdf76,	// (0x0002d4cb) grid_touch_2_pane

0x73f2,	// (0x00026947) touch_pane_g1_ParamLimits

0x73f2,	// (0x00026947) touch_pane_g1

0x735b,	// (0x000268b0) cell_app_pane_cp_wide_ParamLimits

0x735b,	// (0x000268b0) cell_app_pane_cp_wide

0x736c,	// (0x000268c1) grid_popup_fast_wide_pane_ParamLimits

0x736c,	// (0x000268c1) grid_popup_fast_wide_pane

0x7380,	// (0x000268d5) scroll_pane_cp19_ParamLimits

0x7380,	// (0x000268d5) scroll_pane_cp19

0x356f,	// (0x00022ac4) bg_popup_window_pane_cp20

0x7394,	// (0x000268e9) listscroll_popup_fast_wide_pane

0x4081,	// (0x000235d6) grid_indicator_nsta_pane

0x739c,	// (0x000268f1) clock_nsta_pane_g1

0x73a5,	// (0x000268fa) clock_nsta_pane_t1

0xdfa0,	// (0x0002d4f5) cell_indicator_nsta_pane_ParamLimits

0xdfa0,	// (0x0002d4f5) cell_indicator_nsta_pane

0x73f2,	// (0x00026947) cell_indicator_nsta_pane_g1

0xdfb7,	// (0x0002d50c) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002efde) cell_indicator_nsta_pane_g

0x740d,	// (0x00026962) clock_nsta_pane_cp

0x7415,	// (0x0002696a) indicator_nsta_pane_cp

0x741d,	// (0x00026972) nsta_clock_indic_pane_g1

0x3718,	// (0x00022c6d) grid_indicator_pane

0x4451,	// (0x000239a6) scroll_pane_cp29

0x1931,	// (0x00020e86) indicator_nsta_pane_cp2_ParamLimits

0x1931,	// (0x00020e86) indicator_nsta_pane_cp2

0x364f,	// (0x00022ba4) main_apps_wheel_pane

0x5697,	// (0x00024bec) form_midp_field_text_pane_ParamLimits

0x57e2,	// (0x00024d37) scroll_bar_cp050_ParamLimits

0x747e,	// (0x000269d3) cell_indicator_pane_ParamLimits

0x747e,	// (0x000269d3) cell_indicator_pane

0x7495,	// (0x000269ea) cell_indicator_pane_g1

0xdfc4,	// (0x0002d519) grid_wheel_folder_pane_ParamLimits

0xdfc4,	// (0x0002d519) grid_wheel_folder_pane

0xdfd2,	// (0x0002d527) list_wheel_apps_pane_ParamLimits

0xdfd2,	// (0x0002d527) list_wheel_apps_pane

0xdfe0,	// (0x0002d535) main_apps_wheel_pane_g1_ParamLimits

0xdfe0,	// (0x0002d535) main_apps_wheel_pane_g1

0xdfec,	// (0x0002d541) main_apps_wheel_pane_g2_ParamLimits

0xdfec,	// (0x0002d541) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002effa) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002effa) main_apps_wheel_pane_g

0xdffa,	// (0x0002d54f) main_apps_wheel_pane_t1_ParamLimits

0xdffa,	// (0x0002d54f) main_apps_wheel_pane_t1

0xe00e,	// (0x0002d563) list_wheel_apps_pane_g1

0xe016,	// (0x0002d56b) list_wheel_apps_pane_g2

0xe01e,	// (0x0002d573) list_wheel_apps_pane_g3

0xe026,	// (0x0002d57b) list_wheel_apps_pane_g4

0xe030,	// (0x0002d585) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002efff) list_wheel_apps_pane_g

0x49d4,	// (0x00023f29) navi_icon_text_pane

0xd609,	// (0x0002cb5e) aid_fill_nsta

0x755a,	// (0x00026aaf) navi_icon_text_pane_g1

0x7566,	// (0x00026abb) navi_icon_text_pane_t1

0xd46d,	// (0x0002c9c2) list_set_graphic_pane_t1_ParamLimits

0xd46d,	// (0x0002c9c2) list_set_graphic_pane_t1

0x5f3d,	// (0x00025492) popup_midp_note_alarm_window_t6_ParamLimits

0x5f3d,	// (0x00025492) popup_midp_note_alarm_window_t6

0x5f4f,	// (0x000254a4) popup_midp_note_alarm_window_t7_ParamLimits

0x5f4f,	// (0x000254a4) popup_midp_note_alarm_window_t7

0x5f61,	// (0x000254b6) popup_midp_note_alarm_window_t8_ParamLimits

0x5f61,	// (0x000254b6) popup_midp_note_alarm_window_t8

0x5f73,	// (0x000254c8) popup_midp_note_alarm_window_t9_ParamLimits

0x5f73,	// (0x000254c8) popup_midp_note_alarm_window_t9

0x5f85,	// (0x000254da) popup_midp_note_alarm_window_t10_ParamLimits

0x5f85,	// (0x000254da) popup_midp_note_alarm_window_t10

0x5f97,	// (0x000254ec) popup_midp_note_alarm_window_t11_ParamLimits

0x5f97,	// (0x000254ec) popup_midp_note_alarm_window_t11

0x5fa9,	// (0x000254fe) scroll_pane_cp17_ParamLimits

0x5fa9,	// (0x000254fe) scroll_pane_cp17

0x231e,	// (0x00021873) volume_small_pane_cp_g1

0x2613,	// (0x00021b68) volume_small_pane_cp_g2

0x261c,	// (0x00021b71) volume_small_pane_cp_g3

0x2625,	// (0x00021b7a) volume_small_pane_cp_g4

0x262e,	// (0x00021b83) volume_small_pane_cp_g5

0x2637,	// (0x00021b8c) volume_small_pane_cp_g6

0x2640,	// (0x00021b95) volume_small_pane_cp_g7

0x2649,	// (0x00021b9e) volume_small_pane_cp_g8

0x2652,	// (0x00021ba7) volume_small_pane_cp_g9

0x265b,	// (0x00021bb0) volume_small_pane_cp_g10

0x4c25,	// (0x0002417a) midp_ticker_pane_g1_ParamLimits

0x4c31,	// (0x00024186) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002ecad) midp_ticker_pane_g_ParamLimits

0x4c3d,	// (0x00024192) midp_ticker_pane_t1_ParamLimits

0xd62d,	// (0x0002cb82) aid_fill_nsta_2

0x57ce,	// (0x00024d23) list_form2_midp_pane

0x6903,	// (0x00025e58) midp_editing_number_pane_ParamLimits

0x6912,	// (0x00025e67) midp_ticker_pane_ParamLimits

0x7578,	// (0x00026acd) form2_midp_field_pane

0x75a8,	// (0x00026afd) scroll_pane_cp51

0x75c8,	// (0x00026b1d) form2_midp_button_pane_ParamLimits

0x75c8,	// (0x00026b1d) form2_midp_button_pane

0x75da,	// (0x00026b2f) form2_midp_content_pane_ParamLimits

0x75da,	// (0x00026b2f) form2_midp_content_pane

0x75f4,	// (0x00026b49) form2_midp_field_choice_group_pane

0x75fc,	// (0x00026b51) form2_midp_field_pane_g1

0x7604,	// (0x00026b59) form2_midp_field_pane_g2

0x760c,	// (0x00026b61) form2_midp_field_pane_g3

0x7614,	// (0x00026b69) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002f024) form2_midp_field_pane_g

0x761c,	// (0x00026b71) form2_midp_gauge_slider_pane

0x7624,	// (0x00026b79) form2_midp_gauge_wait_pane

0x762c,	// (0x00026b81) form2_midp_image_pane_ParamLimits

0x762c,	// (0x00026b81) form2_midp_image_pane

0x7647,	// (0x00026b9c) form2_midp_label_pane_ParamLimits

0x7647,	// (0x00026b9c) form2_midp_label_pane

0xe063,	// (0x0002d5b8) form2_midp_label_pane_cp_ParamLimits

0xe063,	// (0x0002d5b8) form2_midp_label_pane_cp

0x7681,	// (0x00026bd6) form2_midp_string_pane_ParamLimits

0x7681,	// (0x00026bd6) form2_midp_string_pane

0xbc31,	// (0x0002b186) form2_midp_text_pane_ParamLimits

0xbc31,	// (0x0002b186) form2_midp_text_pane

0x7693,	// (0x00026be8) form2_midp_time_pane

0x76a3,	// (0x00026bf8) input_focus_pane_cp51_ParamLimits

0x76a3,	// (0x00026bf8) input_focus_pane_cp51

0x76bb,	// (0x00026c10) form2_midp_label_pane_t1_ParamLimits

0x76bb,	// (0x00026c10) form2_midp_label_pane_t1

0xbc4a,	// (0x0002b19f) form2_mdip_text_pane_t1_ParamLimits

0xbc4a,	// (0x0002b19f) form2_mdip_text_pane_t1

0x0e46,	// (0x0002039b) form2_midp_time_pane_t1

0x7704,	// (0x00026c59) form2_midp_gauge_slider_pane_t1

0xe082,	// (0x0002d5d7) form2_midp_gauge_slider_pane_t2

0xe094,	// (0x0002d5e9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002f02d) form2_midp_gauge_slider_pane_t

0x773a,	// (0x00026c8f) form2_midp_slider_pane

0x7746,	// (0x00026c9b) form2_midp_gauge_wait_pane_t1

0x7754,	// (0x00026ca9) form2_midp_wait_pane_ParamLimits

0x7754,	// (0x00026ca9) form2_midp_wait_pane

0xe0a6,	// (0x0002d5fb) list_single_2graphic_pane_cp4_ParamLimits

0xe0a6,	// (0x0002d5fb) list_single_2graphic_pane_cp4

0xda5f,	// (0x0002cfb4) list_single_midp_graphic_pane_cp_ParamLimits

0xda5f,	// (0x0002cfb4) list_single_midp_graphic_pane_cp

0x356f,	// (0x00022ac4) list_highlight_pane_cp20

0x77ae,	// (0x00026d03) list_single_2graphic_pane_g1_cp4

0x77b6,	// (0x00026d0b) list_single_2graphic_pane_g2_cp4

0x77be,	// (0x00026d13) list_single_2graphic_pane_t1_cp4

0x364f,	// (0x00022ba4) list_highlight_pane_cp21

0x77cd,	// (0x00026d22) list_single_midp_graphic_pane_g4_cp

0x77dc,	// (0x00026d31) list_single_midp_graphic_pane_t1_cp

0xe0ba,	// (0x0002d60f) form2_mdip_string_pane_t1_ParamLimits

0xe0ba,	// (0x0002d60f) form2_mdip_string_pane_t1

0x356f,	// (0x00022ac4) bg_wml_button_pane_cp2

0x3565,	// (0x00022aba) form2_midp_image_pane_g1

0x034b,	// (0x0001f8a0) list_double_large_graphic_pane_g5_ParamLimits

0x034b,	// (0x0001f8a0) list_double_large_graphic_pane_g5

0x4e92,	// (0x000243e7) midp_form_pane_ParamLimits

0x364f,	// (0x00022ba4) main_apps_wheel_pane_ParamLimits

0xc6cb,	// (0x0002bc20) popup_preview_window_ParamLimits

0xc6cb,	// (0x0002bc20) popup_preview_window

0x21a7,	// (0x000216fc) popup_touch_info_window_ParamLimits

0x21a7,	// (0x000216fc) popup_touch_info_window

0x21c5,	// (0x0002171a) popup_touch_menu_window_ParamLimits

0x21c5,	// (0x0002171a) popup_touch_menu_window

0x355b,	// (0x00022ab0) bg_popup_sub_pane_cp6

0x78ea,	// (0x00026e3f) list_touch_menu_pane

0x78f2,	// (0x00026e47) list_single_touch_menu_pane_ParamLimits

0x78f2,	// (0x00026e47) list_single_touch_menu_pane

0x7908,	// (0x00026e5d) list_single_touch_menu_pane_t1

0x364f,	// (0x00022ba4) bg_popup_sub_pane_cp7_ParamLimits

0x364f,	// (0x00022ba4) bg_popup_sub_pane_cp7

0x7916,	// (0x00026e6b) heading_sub_pane

0x791e,	// (0x00026e73) list_touch_info_pane_ParamLimits

0x791e,	// (0x00026e73) list_touch_info_pane

0x792d,	// (0x00026e82) list_single_touch_info_pane_ParamLimits

0x792d,	// (0x00026e82) list_single_touch_info_pane

0x793f,	// (0x00026e94) list_single_touch_info_pane_t1

0x794d,	// (0x00026ea2) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002f03b) list_single_touch_info_pane_t

0x4b54,	// (0x000240a9) bg_popup_heading_pane_cp

0x795b,	// (0x00026eb0) heading_sub_pane_t1

0x5410,	// (0x00024965) bg_popup_preview_window_pane_cp_ParamLimits

0x5410,	// (0x00024965) bg_popup_preview_window_pane_cp

0x7916,	// (0x00026e6b) heading_preview_pane

0x791e,	// (0x00026e73) list_preview_pane_ParamLimits

0x791e,	// (0x00026e73) list_preview_pane

0x7969,	// (0x00026ebe) popup_preview_window_g1

0x792d,	// (0x00026e82) list_single_preview_pane_ParamLimits

0x792d,	// (0x00026e82) list_single_preview_pane

0x7971,	// (0x00026ec6) list_single_preview_pane_g1

0x7979,	// (0x00026ece) list_single_preview_pane_t1

0x793f,	// (0x00026e94) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002f040) list_single_preview_pane_t

0x7987,	// (0x00026edc) bg_popup_heading_pane_cp2_ParamLimits

0x7987,	// (0x00026edc) bg_popup_heading_pane_cp2

0x799d,	// (0x00026ef2) heading_preview_pane_g1

0x79a5,	// (0x00026efa) heading_preview_pane_t1_ParamLimits

0x79a5,	// (0x00026efa) heading_preview_pane_t1

0x373b,	// (0x00022c90) soft_indicator_pane_t1_ParamLimits

0x3e31,	// (0x00023386) scroll_pane_ParamLimits

0x434a,	// (0x0002389f) scroll_sc2_left_pane

0x4353,	// (0x000238a8) scroll_sc2_right_pane

0x4372,	// (0x000238c7) scroll_bg_pane_g1_ParamLimits

0x4387,	// (0x000238dc) scroll_bg_pane_g2_ParamLimits

0x439f,	// (0x000238f4) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002ec38) scroll_bg_pane_g_ParamLimits

0x4372,	// (0x000238c7) scroll_handle_pane_g1_ParamLimits

0x43c1,	// (0x00023916) scroll_handle_pane_g2_ParamLimits

0x439f,	// (0x000238f4) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002ec3f) scroll_handle_pane_g_ParamLimits

0x1c6d,	// (0x000211c2) popup_choice_list_window_ParamLimits

0x1c6d,	// (0x000211c2) popup_choice_list_window

0x52e6,	// (0x0002483b) choice_list_pane

0x5368,	// (0x000248bd) cell_toolbar_pane_t1

0x5390,	// (0x000248e5) toolbar_button_pane_ParamLimits

0x6463,	// (0x000259b8) ai_gene_pane_1_t2_ParamLimits

0x6463,	// (0x000259b8) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002ee5b) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002ee5b) ai_gene_pane_1_t

0x79c2,	// (0x00026f17) scroll_sc2_left_pane_g1

0x79c2,	// (0x00026f17) scroll_sc2_right_pane_g1

0x4e92,	// (0x000243e7) bg_popup_sub_pane_cp10

0x79cc,	// (0x00026f21) list_choice_list_pane

0x79e5,	// (0x00026f3a) list_single_choice_list_pane_ParamLimits

0x79e5,	// (0x00026f3a) list_single_choice_list_pane

0x79f8,	// (0x00026f4d) list_single_choice_list_pane_g1

0x4052,	// (0x000235a7) list_single_choice_list_pane_t1_ParamLimits

0x4052,	// (0x000235a7) list_single_choice_list_pane_t1

0x7a00,	// (0x00026f55) choice_list_pane_g1

0x7a08,	// (0x00026f5d) choice_list_pane_t1

0x355b,	// (0x00022ab0) input_focus_pane_cp11

0x4229,	// (0x0002377e) title_pane_stacon_g2_ParamLimits

0x4229,	// (0x0002377e) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002ec1e) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002ec1e) title_pane_stacon_g

0x4b54,	// (0x000240a9) cursor_press_pane

0xc378,	// (0x0002b8cd) popup_fep_hwr_window_ParamLimits

0xc378,	// (0x0002b8cd) popup_fep_hwr_window

0x1d93,	// (0x000212e8) popup_fep_vkb_window_ParamLimits

0x1d93,	// (0x000212e8) popup_fep_vkb_window

0x7a16,	// (0x00026f6b) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002f069) fep_vkb_side_pane_g_ParamLimits

0x269d,	// (0x00021bf2) fep_hwr_candidate_pane_ParamLimits

0x269d,	// (0x00021bf2) fep_hwr_candidate_pane

0x26c7,	// (0x00021c1c) fep_hwr_side_pane_ParamLimits

0x26c7,	// (0x00021c1c) fep_hwr_side_pane

0x26e7,	// (0x00021c3c) fep_hwr_top_pane_ParamLimits

0x26e7,	// (0x00021c3c) fep_hwr_top_pane

0x26ff,	// (0x00021c54) fep_hwr_write_pane_ParamLimits

0x26ff,	// (0x00021c54) fep_hwr_write_pane

0xfb14,	// (0x0002f069) fep_vkb_side_pane_g

0x7a1e,	// (0x00026f73) fep_hwr_top_pane_g1

0x7a30,	// (0x00026f85) fep_hwr_top_pane_g2

0x272b,	// (0x00021c80) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002f045) fep_hwr_top_pane_g

0x2740,	// (0x00021c95) fep_hwr_top_text_pane

0x4541,	// (0x00023a96) fep_hwr_top_text_pane_g1

0x7a66,	// (0x00026fbb) fep_hwr_top_text_pane_t1

0x2836,	// (0x00021d8b) fep_hwr_candidate_pane_g1

0x7cb9,	// (0x0002720e) fep_vkb_keypad_pane_g3_ParamLimits

0x7cb9,	// (0x0002720e) fep_vkb_keypad_pane_g3

0x7ce1,	// (0x00027236) fep_vkb_keypad_pane_g4_ParamLimits

0x7ce1,	// (0x00027236) fep_vkb_keypad_pane_g4

0x7d50,	// (0x000272a5) fep_vkb_bottom_pane_g2_ParamLimits

0x7d50,	// (0x000272a5) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002f070) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002f070) fep_vkb_bottom_pane_g

0x79c2,	// (0x00026f17) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002f07a) cell_vkb_side_pane_g

0x7ddb,	// (0x00027330) cell_vkb_side_pane_t1

0x7de9,	// (0x0002733e) cell_vkb_side_pane_t1_copy1

0x79c2,	// (0x00026f17) bg_fep_vkb_candidate_pane_g2

0x7f15,	// (0x0002746a) cell_vkb_candidate_pane_ParamLimits

0x7a74,	// (0x00026fc9) aid_size_cell_vkb_ParamLimits

0x7a74,	// (0x00026fc9) aid_size_cell_vkb

0x7f15,	// (0x0002746a) cell_vkb_candidate_pane

0x2850,	// (0x00021da5) bg_popup_fep_shadow_pane_g1

0xe13e,	// (0x0002d693) fep_vkb_bottom_pane_ParamLimits

0xe13e,	// (0x0002d693) fep_vkb_bottom_pane

0x7b38,	// (0x0002708d) fep_vkb_candidate_pane_ParamLimits

0x7b38,	// (0x0002708d) fep_vkb_candidate_pane

0xe163,	// (0x0002d6b8) fep_vkb_keypad_pane_ParamLimits

0xe163,	// (0x0002d6b8) fep_vkb_keypad_pane

0xe19f,	// (0x0002d6f4) fep_vkb_side_pane_ParamLimits

0xe19f,	// (0x0002d6f4) fep_vkb_side_pane

0xe1db,	// (0x0002d730) fep_vkb_top_pane_ParamLimits

0xe1db,	// (0x0002d730) fep_vkb_top_pane

0x7c12,	// (0x00027167) fep_vkb_top_pane_g1_ParamLimits

0x7c12,	// (0x00027167) fep_vkb_top_pane_g1

0x7c21,	// (0x00027176) fep_vkb_top_pane_g2_ParamLimits

0x7c21,	// (0x00027176) fep_vkb_top_pane_g2

0x7c30,	// (0x00027185) fep_vkb_top_pane_g3_ParamLimits

0x7c30,	// (0x00027185) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002f060) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002f060) fep_vkb_top_pane_g

0x7c4e,	// (0x000271a3) fep_vkb_top_text_pane_ParamLimits

0x7c4e,	// (0x000271a3) fep_vkb_top_text_pane

0xe217,	// (0x0002d76c) fep_vkb_side_pane_g1_ParamLimits

0xe217,	// (0x0002d76c) fep_vkb_side_pane_g1

0x7ca8,	// (0x000271fd) grid_vkb_side_pane_ParamLimits

0x7ca8,	// (0x000271fd) grid_vkb_side_pane

0x2858,	// (0x00021dad) bg_popup_fep_shadow_pane_g2

0x2861,	// (0x00021db6) bg_popup_fep_shadow_pane_g3

0x2869,	// (0x00021dbe) bg_popup_fep_shadow_pane_g4

0x2872,	// (0x00021dc7) bg_popup_fep_shadow_pane_g5

0x287c,	// (0x00021dd1) bg_popup_fep_shadow_pane_g6

0x2884,	// (0x00021dd9) bg_popup_fep_shadow_pane_g7

0x3f39,	// (0x0002348e) bg_popup_fep_shadow_pane_g8

0x7cff,	// (0x00027254) grid_vkb_keypad_number_pane_ParamLimits

0x7cff,	// (0x00027254) grid_vkb_keypad_number_pane

0x7d0f,	// (0x00027264) grid_vkb_keypad_pane_ParamLimits

0x7d0f,	// (0x00027264) grid_vkb_keypad_pane

0x7d35,	// (0x0002728a) fep_vkb_bottom_pane_g1_ParamLimits

0x7d35,	// (0x0002728a) fep_vkb_bottom_pane_g1

0x7d5e,	// (0x000272b3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d5e,	// (0x000272b3) grid_vkb_keypad_bottom_left_pane

0x7d73,	// (0x000272c8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d73,	// (0x000272c8) grid_vkb_keypad_bottom_right_pane

0x7d88,	// (0x000272dd) fep_vkb_top_text_pane_g1

0xe25e,	// (0x0002d7b3) fep_vkb_top_text_pane_t1

0xe270,	// (0x0002d7c5) cell_vkb_side_pane_ParamLimits

0xe270,	// (0x0002d7c5) cell_vkb_side_pane

0x79c2,	// (0x00026f17) cell_vkb_side_pane_g1

0x7df7,	// (0x0002734c) cell_vkb_keypad_pane_ParamLimits

0x7df7,	// (0x0002734c) cell_vkb_keypad_pane

0x7e6c,	// (0x000273c1) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002f08d) bg_popup_fep_shadow_pane_g

0x79c2,	// (0x00026f17) cell_hwr_side_pane_g1

0x79c2,	// (0x00026f17) cell_hwr_side_pane_g2

0x7e76,	// (0x000273cb) cell_vkb_keypad_pane_t1

0xe286,	// (0x0002d7db) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe286,	// (0x0002d7db) cell_vkb_keypad_bottom_left_pane

0xe29b,	// (0x0002d7f0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe29b,	// (0x0002d7f0) cell_vkb_keypad_bottom_right_pane

0x79c2,	// (0x00026f17) cell_vkb_keypad_bottom_left_pane_g1

0x79c2,	// (0x00026f17) cell_vkb_keypad_bottom_right_pane_g1

0x7eda,	// (0x0002742f) cell_vkb_keypad_number_pane_ParamLimits

0x7eda,	// (0x0002742f) cell_vkb_keypad_number_pane

0x7ef9,	// (0x0002744e) cell_vkb_keypad_number_pane_g1

0x7f03,	// (0x00027458) cell_vkb_keypad_number_pane_g2

0x7f0c,	// (0x00027461) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002f07f) cell_vkb_keypad_number_pane_g

0x7e76,	// (0x000273cb) cell_vkb_keypad_number_pane_t1

0x7f30,	// (0x00027485) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002f07a) cell_hwr_side_pane_g

0x7f49,	// (0x0002749e) cell_hwr_side_pane_t1

0x2896,	// (0x00021deb) cell_hwr_side_pane_t1_copy1

0x7c40,	// (0x00027195) cell_hwr_candidate_pane_g1

0x28a4,	// (0x00021df9) cell_hwr_candidate_pane_t1

0x79c2,	// (0x00026f17) cell_vkb_candidate_pane_g2

0x7f8d,	// (0x000274e2) cell_vkb_candidate_pane_t1

0x2664,	// (0x00021bb9) bg_popup_fep_shadow_pane_ParamLimits

0x2664,	// (0x00021bb9) bg_popup_fep_shadow_pane

0xdb41,	// (0x0002d096) bg_fep_hwr_top_pane_g4

0x7a42,	// (0x00026f97) bg_hwr_side_pane_g1_ParamLimits

0x7a42,	// (0x00026f97) bg_hwr_side_pane_g1

0xca05,	// (0x0002bf5a) cell_hwr_side_pane_ParamLimits

0xca05,	// (0x0002bf5a) cell_hwr_side_pane

0x27b7,	// (0x00021d0c) fep_hwr_write_pane_g1_ParamLimits

0x27b7,	// (0x00021d0c) fep_hwr_write_pane_g1

0x27c4,	// (0x00021d19) fep_hwr_write_pane_g2_ParamLimits

0x27c4,	// (0x00021d19) fep_hwr_write_pane_g2

0x27d1,	// (0x00021d26) fep_hwr_write_pane_g3_ParamLimits

0x27d1,	// (0x00021d26) fep_hwr_write_pane_g3

0xca25,	// (0x0002bf7a) fep_hwr_write_pane_g4_ParamLimits

0xca25,	// (0x0002bf7a) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002f04c) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002f04c) fep_hwr_write_pane_g

0xdb41,	// (0x0002d096) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdb41,	// (0x0002d096) bg_fep_hwr_candidate_pane_g2

0x27f4,	// (0x00021d49) cell_hwr_candidate_pane_ParamLimits

0x27f4,	// (0x00021d49) cell_hwr_candidate_pane

0x2836,	// (0x00021d8b) fep_hwr_candidate_pane_g1_ParamLimits

0x7aa2,	// (0x00026ff7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7aa2,	// (0x00026ff7) bg_popup_fep_shadow_pane_cp2

0x7c40,	// (0x00027195) fep_vkb_top_pane_g4_ParamLimits

0x7c40,	// (0x00027195) fep_vkb_top_pane_g4

0x7c86,	// (0x000271db) fep_vkb_side_pane_g2_ParamLimits

0x7c86,	// (0x000271db) fep_vkb_side_pane_g2

0xb8f3,	// (0x0002ae48) list_setting_pane_t4_ParamLimits

0xb8f3,	// (0x0002ae48) list_setting_pane_t4

0xb98d,	// (0x0002aee2) list_setting_number_pane_t5_ParamLimits

0xb98d,	// (0x0002aee2) list_setting_number_pane_t5

0x4578,	// (0x00023acd) list_double_heading_pane_cp2_ParamLimits

0x4578,	// (0x00023acd) list_double_heading_pane_cp2

0x3ecc,	// (0x00023421) list_double_heading_pane_g1_cp2_ParamLimits

0x3ecc,	// (0x00023421) list_double_heading_pane_g1_cp2

0x3ed8,	// (0x0002342d) list_double_heading_pane_g2_cp2_ParamLimits

0x3ed8,	// (0x0002342d) list_double_heading_pane_g2_cp2

0x7f9b,	// (0x000274f0) list_double_heading_pane_t1_cp2_ParamLimits

0x7f9b,	// (0x000274f0) list_double_heading_pane_t1_cp2

0x7fb1,	// (0x00027506) list_double_heading_pane_t2_cp2_ParamLimits

0x7fb1,	// (0x00027506) list_double_heading_pane_t2_cp2

0x3543,	// (0x00022a98) aid_value_unit2

0x14c1,	// (0x00020a16) popup_preview_fixed_window

0x38d8,	// (0x00022e2d) bg_popup_preview_window_pane_cp02

0x7fc3,	// (0x00027518) list_preview_fixed_pane

0x8009,	// (0x0002755e) list_empty_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_empty_pane_fp

0x8009,	// (0x0002755e) list_single_cale_day_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_cale_day_pane_fp

0x8009,	// (0x0002755e) list_single_graphic_heading_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_graphic_heading_pane_fp

0x8009,	// (0x0002755e) list_single_graphic_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_graphic_pane_fp

0x8009,	// (0x0002755e) list_single_heading_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_heading_pane_fp

0x8009,	// (0x0002755e) list_single_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_pane_fp

0x801e,	// (0x00027573) list_single_pane_fp_g1_ParamLimits

0x801e,	// (0x00027573) list_single_pane_fp_g1

0x0e59,	// (0x000203ae) list_single_pane_fp_g2_ParamLimits

0x0e59,	// (0x000203ae) list_single_pane_fp_g2

0x0e65,	// (0x000203ba) list_single_pane_fp_g3_ParamLimits

0x0e65,	// (0x000203ba) list_single_pane_fp_g3

0x802a,	// (0x0002757f) list_single_pane_fp_g4_ParamLimits

0x802a,	// (0x0002757f) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002f0ae) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002f0ae) list_single_pane_fp_g

0x0e79,	// (0x000203ce) list_single_pane_fp_t1_ParamLimits

0x0e79,	// (0x000203ce) list_single_pane_fp_t1

0x0e90,	// (0x000203e5) list_single_graphic_pane_fp_g1_ParamLimits

0x0e90,	// (0x000203e5) list_single_graphic_pane_fp_g1

0x801e,	// (0x00027573) list_single_graphic_pane_fp_g2_ParamLimits

0x801e,	// (0x00027573) list_single_graphic_pane_fp_g2

0x0e59,	// (0x000203ae) list_single_graphic_pane_fp_g3_ParamLimits

0x0e59,	// (0x000203ae) list_single_graphic_pane_fp_g3

0x0e65,	// (0x000203ba) list_single_graphic_pane_fp_g4_ParamLimits

0x0e65,	// (0x000203ba) list_single_graphic_pane_fp_g4

0x802a,	// (0x0002757f) list_single_graphic_pane_fp_g5_ParamLimits

0x802a,	// (0x0002757f) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0b7) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0b7) list_single_graphic_pane_fp_g

0x0e9c,	// (0x000203f1) list_single_graphic_pane_fp_t1_ParamLimits

0x0e9c,	// (0x000203f1) list_single_graphic_pane_fp_t1

0x0e90,	// (0x000203e5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e90,	// (0x000203e5) list_single_graphic_heading_pane_fp_g1

0x801e,	// (0x00027573) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x801e,	// (0x00027573) list_single_graphic_heading_pane_fp_g2

0x0e59,	// (0x000203ae) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e59,	// (0x000203ae) list_single_graphic_heading_pane_fp_g3

0x0e65,	// (0x000203ba) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0e65,	// (0x000203ba) list_single_graphic_heading_pane_fp_g4

0x802a,	// (0x0002757f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x802a,	// (0x0002757f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0b7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0b7) list_single_graphic_heading_pane_fp_g

0x0eb2,	// (0x00020407) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0eb2,	// (0x00020407) list_single_graphic_heading_pane_fp_t1

0x0ec8,	// (0x0002041d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0ec8,	// (0x0002041d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002f0c2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002f0c2) list_single_graphic_heading_pane_fp_t

0x0eda,	// (0x0002042f) list_single_cale_day_pane_fp_g1_ParamLimits

0x0eda,	// (0x0002042f) list_single_cale_day_pane_fp_g1

0x8036,	// (0x0002758b) list_single_cale_day_pane_fp_g2_ParamLimits

0x8036,	// (0x0002758b) list_single_cale_day_pane_fp_g2

0x0f12,	// (0x00020467) list_single_cale_day_pane_fp_g3_ParamLimits

0x0f12,	// (0x00020467) list_single_cale_day_pane_fp_g3

0x0f3a,	// (0x0002048f) list_single_cale_day_pane_fp_g4_ParamLimits

0x0f3a,	// (0x0002048f) list_single_cale_day_pane_fp_g4

0x0f5e,	// (0x000204b3) list_single_cale_day_pane_fp_g5_ParamLimits

0x0f5e,	// (0x000204b3) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002f0c7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002f0c7) list_single_cale_day_pane_fp_g

0x0f82,	// (0x000204d7) list_single_cale_day_pane_fp_t1_ParamLimits

0x0f82,	// (0x000204d7) list_single_cale_day_pane_fp_t1

0x0fa8,	// (0x000204fd) list_single_cale_day_pane_fp_t2_ParamLimits

0x0fa8,	// (0x000204fd) list_single_cale_day_pane_fp_t2

0x0fc1,	// (0x00020516) list_single_cale_day_pane_fp_t3_ParamLimits

0x0fc1,	// (0x00020516) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002f0d2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002f0d2) list_single_cale_day_pane_fp_t

0x801e,	// (0x00027573) list_empty_pane_fp_g1_ParamLimits

0x801e,	// (0x00027573) list_empty_pane_fp_g1

0x0fda,	// (0x0002052f) list_empty_pane_fp_t1

0x0fe8,	// (0x0002053d) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002f0d9) list_empty_pane_fp_t

0x801e,	// (0x00027573) list_single_heading_pane_fp_g1_ParamLimits

0x801e,	// (0x00027573) list_single_heading_pane_fp_g1

0x0e59,	// (0x000203ae) list_single_heading_pane_fp_g2_ParamLimits

0x0e59,	// (0x000203ae) list_single_heading_pane_fp_g2

0x0e65,	// (0x000203ba) list_single_heading_pane_fp_g3_ParamLimits

0x0e65,	// (0x000203ba) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002f0de) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f0de) list_single_heading_pane_fp_g

0x0ff6,	// (0x0002054b) list_single_heading_pane_fp_t1_ParamLimits

0x0ff6,	// (0x0002054b) list_single_heading_pane_fp_t1

0x1008,	// (0x0002055d) list_single_heading_pane_fp_t2_ParamLimits

0x1008,	// (0x0002055d) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002f0e5) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002f0e5) list_single_heading_pane_fp_t

0x40c0,	// (0x00023615) aid_size_cell_fast

0x3848,	// (0x00022d9d) soft_indicator_pane_cp1_t1

0x40fd,	// (0x00023652) cell_app_pane_cp2_ParamLimits

0x40fd,	// (0x00023652) cell_app_pane_cp2

0x2686,	// (0x00021bdb) fep_hwr_candidate_drop_down_list_pane

0xdb4f,	// (0x0002d0a4) fep_hwr_candidate_pane_g3_ParamLimits

0xdb4f,	// (0x0002d0a4) fep_hwr_candidate_pane_g3

0xdb5c,	// (0x0002d0b1) fep_hwr_candidate_pane_g4_ParamLimits

0xdb5c,	// (0x0002d0b1) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002f059) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002f059) fep_hwr_candidate_pane_g

0x7b27,	// (0x0002707c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b27,	// (0x0002707c) fep_vkb_candidate_drop_down_list_pane

0x7f38,	// (0x0002748d) fep_vkb_candidate_pane_g3

0x7f40,	// (0x00027495) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002f086) fep_vkb_candidate_pane_g

0x7c40,	// (0x00027195) cell_hwr_candidate_pane_g1_ParamLimits

0x8060,	// (0x000275b5) cell_hwr_candidate_pane_g3_ParamLimits

0x8060,	// (0x000275b5) cell_hwr_candidate_pane_g3

0x8081,	// (0x000275d6) cell_hwr_candidate_pane_g4_ParamLimits

0x8081,	// (0x000275d6) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002f0a0) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002f0a0) cell_hwr_candidate_pane_g

0x7f57,	// (0x000274ac) cell_vkb_candidate_pane_g3_ParamLimits

0x7f57,	// (0x000274ac) cell_vkb_candidate_pane_g3

0x7f72,	// (0x000274c7) cell_vkb_candidate_pane_g4_ParamLimits

0x7f72,	// (0x000274c7) cell_vkb_candidate_pane_g4

0x8042,	// (0x00027597) cell_app_pane_cp2_g1_ParamLimits

0x8042,	// (0x00027597) cell_app_pane_cp2_g1

0x80a2,	// (0x000275f7) cell_app_pane_cp2_g2_ParamLimits

0x80a2,	// (0x000275f7) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002f0ea) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002f0ea) cell_app_pane_cp2_g

0x80ae,	// (0x00027603) cell_app_pane_cp2_t1_ParamLimits

0x80ae,	// (0x00027603) cell_app_pane_cp2_t1

0x3ebe,	// (0x00023413) grid_highlight_pane_cp1_ParamLimits

0x3ebe,	// (0x00023413) grid_highlight_pane_cp1

0x28c2,	// (0x00021e17) cell_hwr_candidate_pane_cp1_ParamLimits

0x28c2,	// (0x00021e17) cell_hwr_candidate_pane_cp1

0x7c40,	// (0x00027195) fep_hwr_candidate_drop_down_list_pane_g1

0x80c0,	// (0x00027615) fep_hwr_candidate_drop_down_list_pane_g2

0x80cd,	// (0x00027622) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f0ef) fep_hwr_candidate_drop_down_list_pane_g

0x28e1,	// (0x00021e36) fep_hwr_candidate_drop_down_list_scroll_pane

0x28ea,	// (0x00021e3f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x28ea,	// (0x00021e3f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x28f7,	// (0x00021e4c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x28f7,	// (0x00021e4c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2904,	// (0x00021e59) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2904,	// (0x00021e59) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f57,	// (0x000274ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f57,	// (0x000274ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f72,	// (0x000274c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f72,	// (0x000274c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2911,	// (0x00021e66) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2911,	// (0x00021e66) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x292c,	// (0x00021e81) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x292c,	// (0x00021e81) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2947,	// (0x00021e9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2947,	// (0x00021e9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002f0f6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002f0f6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80da,	// (0x0002762f) cell_vkb_candidate_pane_cp1_ParamLimits

0x80da,	// (0x0002762f) cell_vkb_candidate_pane_cp1

0x7c40,	// (0x00027195) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c40,	// (0x00027195) fep_vkb_candidate_drop_down_list_pane_g1

0x80c0,	// (0x00027615) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80c0,	// (0x00027615) fep_vkb_candidate_drop_down_list_pane_g2

0x80cd,	// (0x00027622) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80cd,	// (0x00027622) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f0ef) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002f0ef) fep_vkb_candidate_drop_down_list_pane_g

0x80fa,	// (0x0002764f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80fa,	// (0x0002764f) fep_vkb_candidate_drop_down_list_scroll_pane

0x8107,	// (0x0002765c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8107,	// (0x0002765c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8114,	// (0x00027669) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8114,	// (0x00027669) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8120,	// (0x00027675) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8120,	// (0x00027675) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8060,	// (0x000275b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8060,	// (0x000275b5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8081,	// (0x000275d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8081,	// (0x000275d6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x812c,	// (0x00027681) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x812c,	// (0x00027681) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x814d,	// (0x000276a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x814d,	// (0x000276a2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x816e,	// (0x000276c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x816e,	// (0x000276c3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002f107) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002f107) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc072,	// (0x0002b5c7) title_pane_g1_ParamLimits

0xc085,	// (0x0002b5da) title_pane_g2_ParamLimits

0xf54e,	// (0x0002eaa3) title_pane_g_ParamLimits

0x4531,	// (0x00023a86) aid_call2_pane

0x4539,	// (0x00023a8e) aid_call_pane

0x4541,	// (0x00023a96) popup_clock_analogue_window_g1

0x4541,	// (0x00023a96) popup_clock_analogue_window_g2

0x1832,	// (0x00020d87) popup_clock_analogue_window_g3

0x183b,	// (0x00020d90) popup_clock_analogue_window_g4

0x3565,	// (0x00022aba) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002ec4d) popup_clock_analogue_window_g

0x1843,	// (0x00020d98) popup_clock_analogue_window_t1

0x1851,	// (0x00020da6) clock_digital_number_pane_ParamLimits

0x1851,	// (0x00020da6) clock_digital_number_pane

0x185d,	// (0x00020db2) clock_digital_number_pane_cp02_ParamLimits

0x185d,	// (0x00020db2) clock_digital_number_pane_cp02

0x1869,	// (0x00020dbe) clock_digital_number_pane_cp03_ParamLimits

0x1869,	// (0x00020dbe) clock_digital_number_pane_cp03

0x1875,	// (0x00020dca) clock_digital_number_pane_cp04_ParamLimits

0x1875,	// (0x00020dca) clock_digital_number_pane_cp04

0x1881,	// (0x00020dd6) clock_digital_separator_pane_ParamLimits

0x1881,	// (0x00020dd6) clock_digital_separator_pane

0x188d,	// (0x00020de2) popup_clock_digital_window_t1_ParamLimits

0x188d,	// (0x00020de2) popup_clock_digital_window_t1

0x3565,	// (0x00022aba) clock_digital_number_pane_g1

0x3565,	// (0x00022aba) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002ec58) clock_digital_number_pane_g

0x3565,	// (0x00022aba) clock_digital_separator_pane_g1

0x3565,	// (0x00022aba) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002ec58) clock_digital_separator_pane_g

0xd609,	// (0x0002cb5e) aid_fill_nsta_ParamLimits

0xd73f,	// (0x0002cc94) indicator_nsta_pane_ParamLimits

0x5173,	// (0x000246c8) popup_clock_analogue_window

0x5173,	// (0x000246c8) popup_clock_digital_window

0x4081,	// (0x000235d6) grid_indicator_nsta_pane_ParamLimits

0x73b3,	// (0x00026908) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002efd9) clock_nsta_pane_t

0x17f6,	// (0x00020d4b) aid_size_max_handle

0xc135,	// (0x0002b68a) aid_size_min_handle

0x4b54,	// (0x000240a9) editor_scroll_pane

0x8189,	// (0x000276de) ex_editor_pane

0x402e,	// (0x00023583) scroll_pane_cp13

0x3e5d,	// (0x000233b2) scroll_pane_cp14

0x4570,	// (0x00023ac5) scroll_pane_cp36

0xd3c8,	// (0x0002c91d) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3c8,	// (0x0002c91d) list_single_graphic_hl_pane_cp2

0xbc0d,	// (0x0002b162) list_single_graphic_hl_pane_ParamLimits

0xbc0d,	// (0x0002b162) list_single_graphic_hl_pane

0x101e,	// (0x00020573) aid_size_min_hl_cp1

0x8191,	// (0x000276e6) list_highlight_pane_cp34_ParamLimits

0x8191,	// (0x000276e6) list_highlight_pane_cp34

0x81a2,	// (0x000276f7) list_single_graphic_hl_pane_g1_ParamLimits

0x81a2,	// (0x000276f7) list_single_graphic_hl_pane_g1

0xbc67,	// (0x0002b1bc) list_single_graphic_hl_pane_g2_ParamLimits

0xbc67,	// (0x0002b1bc) list_single_graphic_hl_pane_g2

0xbc67,	// (0x0002b1bc) list_single_graphic_hl_pane_g3_ParamLimits

0xbc67,	// (0x0002b1bc) list_single_graphic_hl_pane_g3

0xbc73,	// (0x0002b1c8) list_single_graphic_hl_pane_g4_ParamLimits

0xbc73,	// (0x0002b1c8) list_single_graphic_hl_pane_g4

0xbc7f,	// (0x0002b1d4) list_single_graphic_hl_pane_g5_ParamLimits

0xbc7f,	// (0x0002b1d4) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002f118) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002f118) list_single_graphic_hl_pane_g

0xbc93,	// (0x0002b1e8) list_single_graphic_hl_pane_t1_ParamLimits

0xbc93,	// (0x0002b1e8) list_single_graphic_hl_pane_t1

0x81af,	// (0x00027704) aid_size_min_hl_cp2

0x81b8,	// (0x0002770d) list_highlight_pane_cp34_cp2_ParamLimits

0x81b8,	// (0x0002770d) list_highlight_pane_cp34_cp2

0x81a2,	// (0x000276f7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81a2,	// (0x000276f7) list_single_graphic_hl_pane_g1_cp2

0x81c5,	// (0x0002771a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81c5,	// (0x0002771a) list_single_graphic_hl_pane_g2_cp2

0x81d1,	// (0x00027726) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81d1,	// (0x00027726) list_single_graphic_hl_pane_g3_cp2

0x7580,	// (0x00026ad5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7580,	// (0x00026ad5) list_single_graphic_hl_pane_g4_cp2

0x81df,	// (0x00027734) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81df,	// (0x00027734) list_single_graphic_hl_pane_g5_cp2

0xc190,	// (0x0002b6e5) control_pane_g4_ParamLimits

0xc190,	// (0x0002b6e5) control_pane_g4

0x4e92,	// (0x000243e7) bg_popup_sub_pane_cp10_ParamLimits

0x79cc,	// (0x00026f21) list_choice_list_pane_ParamLimits

0x79db,	// (0x00026f30) scroll_pane_cp23

0x38d8,	// (0x00022e2d) bg_popup_preview_window_pane_cp02_ParamLimits

0x7fc3,	// (0x00027518) list_preview_fixed_pane_ParamLimits

0x7fd9,	// (0x0002752e) list_preview_fixed_pane_cp_ParamLimits

0x7fd9,	// (0x0002752e) list_preview_fixed_pane_cp

0x7fe5,	// (0x0002753a) popup_preview_fixed_window_g1_ParamLimits

0x7fe5,	// (0x0002753a) popup_preview_fixed_window_g1

0x7ff1,	// (0x00027546) popup_preview_fixed_window_g2_ParamLimits

0x7ff1,	// (0x00027546) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002f0a7) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002f0a7) popup_preview_fixed_window_g

0x176a,	// (0x00020cbf) aid_navi_side_left_pane_ParamLimits

0x177f,	// (0x00020cd4) aid_navi_side_right_pane_ParamLimits

0x1797,	// (0x00020cec) navi_icon_pane_stacon_ParamLimits

0x17ab,	// (0x00020d00) navi_navi_pane_stacon_ParamLimits

0x1797,	// (0x00020cec) navi_text_pane_stacon_ParamLimits

0x355b,	// (0x00022ab0) main_text_info_pane

0x8209,	// (0x0002775e) listscroll_text_info_pane

0x8211,	// (0x00027766) list_text_info_pane_ParamLimits

0x8211,	// (0x00027766) list_text_info_pane

0x8220,	// (0x00027775) scroll_pane_cp24_ParamLimits

0x8220,	// (0x00027775) scroll_pane_cp24

0xe2b6,	// (0x0002d80b) list_text_info_pane_t1_ParamLimits

0xe2b6,	// (0x0002d80b) list_text_info_pane_t1

0xc2eb,	// (0x0002b840) popup_fast_swap2_window_ParamLimits

0xc2eb,	// (0x0002b840) popup_fast_swap2_window

0x826f,	// (0x000277c4) aid_size_cell_fast2

0x355b,	// (0x00022ab0) bg_popup_window_pane_cp17

0x57fa,	// (0x00024d4f) heading_pane_cp2

0x3b27,	// (0x0002307c) listscroll_fast2_pane

0x8279,	// (0x000277ce) grid_fast2_pane

0x8283,	// (0x000277d8) listscroll_fast2_pane_g1

0x828b,	// (0x000277e0) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002f123) listscroll_fast2_pane_g

0x402e,	// (0x00023583) scroll_pane_cp26

0x8295,	// (0x000277ea) cell_fast2_pane_ParamLimits

0x8295,	// (0x000277ea) cell_fast2_pane

0x82aa,	// (0x000277ff) cell_fast2_pane_g1

0x82b3,	// (0x00027808) cell_fast2_pane_g2

0x82bc,	// (0x00027811) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002f128) cell_fast2_pane_g

0x3c1a,	// (0x0002316f) grid_highlight_pane_cp9

0x3c2f,	// (0x00023184) main_eswt_pane_ParamLimits

0x3c2f,	// (0x00023184) main_eswt_pane

0x8235,	// (0x0002778a) list_single_text_info_pane

0x82c4,	// (0x00027819) eswt_ctrl_button_pane

0x82c4,	// (0x00027819) eswt_ctrl_canvas_pane

0x82cc,	// (0x00027821) eswt_ctrl_combo_pane

0x82c4,	// (0x00027819) eswt_ctrl_default_pane

0x82c4,	// (0x00027819) eswt_ctrl_label_pane

0x82d4,	// (0x00027829) eswt_ctrl_wait_pane

0x82dc,	// (0x00027831) eswt_shell_pane

0x355b,	// (0x00022ab0) listscroll_eswt_app_pane

0x82fc,	// (0x00027851) popup_eswt_tasktip_window_ParamLimits

0x82fc,	// (0x00027851) popup_eswt_tasktip_window

0x5410,	// (0x00024965) bg_popup_window_pane_cp18

0x830d,	// (0x00027862) eswt_control_pane_g1_ParamLimits

0x830d,	// (0x00027862) eswt_control_pane_g1

0x831a,	// (0x0002786f) eswt_control_pane_g2_ParamLimits

0x831a,	// (0x0002786f) eswt_control_pane_g2

0x8327,	// (0x0002787c) eswt_control_pane_g3_ParamLimits

0x8327,	// (0x0002787c) eswt_control_pane_g3

0x8334,	// (0x00027889) eswt_control_pane_g4_ParamLimits

0x8334,	// (0x00027889) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002f12f) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002f12f) eswt_control_pane_g

0x3ebe,	// (0x00023413) bg_button_pane_ParamLimits

0x3ebe,	// (0x00023413) bg_button_pane

0x3c2f,	// (0x00023184) common_borders_pane_copy2_ParamLimits

0x3c2f,	// (0x00023184) common_borders_pane_copy2

0x8341,	// (0x00027896) control_button_pane_g1_ParamLimits

0x8341,	// (0x00027896) control_button_pane_g1

0x834d,	// (0x000278a2) control_button_pane_g2_ParamLimits

0x834d,	// (0x000278a2) control_button_pane_g2

0x8359,	// (0x000278ae) control_button_pane_g3_ParamLimits

0x8359,	// (0x000278ae) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002f138) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002f138) control_button_pane_g

0x836d,	// (0x000278c2) control_button_pane_t1

0x837b,	// (0x000278d0) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002f13f) control_button_pane_t

0x539c,	// (0x000248f1) bg_button_pane_g1

0x53a4,	// (0x000248f9) bg_button_pane_g2

0x53ac,	// (0x00024901) bg_button_pane_g3

0x53b4,	// (0x00024909) bg_button_pane_g4

0x53bc,	// (0x00024911) bg_button_pane_g5

0x53c4,	// (0x00024919) bg_button_pane_g6

0x53cc,	// (0x00024921) bg_button_pane_g7

0x53d4,	// (0x00024929) bg_button_pane_g8

0x53dc,	// (0x00024931) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002edaf) bg_button_pane_g

0x7987,	// (0x00026edc) common_borders_pane_ParamLimits

0x7987,	// (0x00026edc) common_borders_pane

0x830d,	// (0x00027862) eswt_control_pane_g1_copy1_ParamLimits

0x830d,	// (0x00027862) eswt_control_pane_g1_copy1

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy1_ParamLimits

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy1

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy1_ParamLimits

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy1

0x8334,	// (0x00027889) eswt_control_pane_g4_copy1_ParamLimits

0x8334,	// (0x00027889) eswt_control_pane_g4_copy1

0x79c2,	// (0x00026f17) bg_eswt_ctrl_canvas_pane_g1

0x7987,	// (0x00026edc) common_borders_pane_cp2_ParamLimits

0x7987,	// (0x00026edc) common_borders_pane_cp2

0x7987,	// (0x00026edc) common_borders_pane_cp3_ParamLimits

0x7987,	// (0x00026edc) common_borders_pane_cp3

0x8389,	// (0x000278de) separator_horizontal_pane

0x8391,	// (0x000278e6) separator_vertical_pane

0x830d,	// (0x00027862) eswt_control_pane_g1_copy2_ParamLimits

0x830d,	// (0x00027862) eswt_control_pane_g1_copy2

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy2_ParamLimits

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy2

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy2_ParamLimits

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy2

0x8334,	// (0x00027889) eswt_control_pane_g4_copy2_ParamLimits

0x8334,	// (0x00027889) eswt_control_pane_g4_copy2

0x355b,	// (0x00022ab0) common_borders_pane_cp4

0x839a,	// (0x000278ef) separator_horizontal_pane_g1

0x83a3,	// (0x000278f8) separator_horizontal_pane_g2

0x83ac,	// (0x00027901) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002f144) separator_horizontal_pane_g

0x830d,	// (0x00027862) eswt_control_pane_g1_copy3_ParamLimits

0x830d,	// (0x00027862) eswt_control_pane_g1_copy3

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy3_ParamLimits

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy3

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy3_ParamLimits

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy3

0x8334,	// (0x00027889) eswt_control_pane_g4_copy3_ParamLimits

0x8334,	// (0x00027889) eswt_control_pane_g4_copy3

0x355b,	// (0x00022ab0) common_borders_pane_cp5

0x83b5,	// (0x0002790a) separator_vertical_pane_g1

0x83be,	// (0x00027913) separator_vertical_pane_g2

0x83c7,	// (0x0002791c) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002f14b) separator_vertical_pane_g

0x830d,	// (0x00027862) eswt_control_pane_g1_copy4_ParamLimits

0x830d,	// (0x00027862) eswt_control_pane_g1_copy4

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy4_ParamLimits

0x831a,	// (0x0002786f) eswt_control_pane_g2_copy4

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy4_ParamLimits

0x8327,	// (0x0002787c) eswt_control_pane_g3_copy4

0x8334,	// (0x00027889) eswt_control_pane_g4_copy4_ParamLimits

0x8334,	// (0x00027889) eswt_control_pane_g4_copy4

0xe2d1,	// (0x0002d826) eswt_ctrl_combo_button_pane

0xe2d9,	// (0x0002d82e) eswt_ctrl_input_pane

0xe2e1,	// (0x0002d836) popup_choice_list_window_cp70

0xe2e9,	// (0x0002d83e) eswt_ctrl_input_pane_t1

0x355b,	// (0x00022ab0) input_focus_pane_cp70

0x7987,	// (0x00026edc) bg_button_pane_cp70_ParamLimits

0x7987,	// (0x00026edc) bg_button_pane_cp70

0xe2f7,	// (0x0002d84c) eswt_ctrl_combo_button_pane_g1

0x83fe,	// (0x00027953) wait_bar_pane_cp70

0x5410,	// (0x00024965) bg_popup_window_pane_cp70_ParamLimits

0x5410,	// (0x00024965) bg_popup_window_pane_cp70

0x8406,	// (0x0002795b) popup_eswt_tasktip_window_t1

0x841c,	// (0x00027971) wait_bar_pane_cp71_ParamLimits

0x841c,	// (0x00027971) wait_bar_pane_cp71

0x8428,	// (0x0002797d) grid_eswt_app_pane

0x4353,	// (0x000238a8) scroll_pane_cp70

0xe2ff,	// (0x0002d854) cell_eswt_app_pane_ParamLimits

0xe2ff,	// (0x0002d854) cell_eswt_app_pane

0xe329,	// (0x0002d87e) cell_eswt_app_pane_g1_ParamLimits

0xe329,	// (0x0002d87e) cell_eswt_app_pane_g1

0xe358,	// (0x0002d8ad) cell_eswt_app_pane_g2_ParamLimits

0xe358,	// (0x0002d8ad) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002f152) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002f152) cell_eswt_app_pane_g

0xe381,	// (0x0002d8d6) cell_eswt_app_pane_t1_ParamLimits

0xe381,	// (0x0002d8d6) cell_eswt_app_pane_t1

0x84eb,	// (0x00027a40) grid_highlight_pane_cp70_ParamLimits

0x84eb,	// (0x00027a40) grid_highlight_pane_cp70

0x4a29,	// (0x00023f7e) set_content_pane_g1

0xd5be,	// (0x0002cb13) status_small_volume_pane

0x2962,	// (0x00021eb7) status_small_volume_pane_g1

0x296a,	// (0x00021ebf) volume_small2_pane

0x2973,	// (0x00021ec8) volume_small2_pane_g1

0x297c,	// (0x00021ed1) volume_small2_pane_g2

0x2985,	// (0x00021eda) volume_small2_pane_g3

0x298e,	// (0x00021ee3) volume_small2_pane_g4

0x2997,	// (0x00021eec) volume_small2_pane_g5

0x29a0,	// (0x00021ef5) volume_small2_pane_g6

0x29a9,	// (0x00021efe) volume_small2_pane_g7

0x29b2,	// (0x00021f07) volume_small2_pane_g8

0x29bb,	// (0x00021f10) volume_small2_pane_g9

0x29c4,	// (0x00021f19) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002f157) volume_small2_pane_g

0x7d88,	// (0x000272dd) fep_vkb_top_text_pane_g1_ParamLimits

0xe25e,	// (0x0002d7b3) fep_vkb_top_text_pane_t1_ParamLimits

0x7ffd,	// (0x00027552) popup_preview_fixed_window_g3_ParamLimits

0x7ffd,	// (0x00027552) popup_preview_fixed_window_g3

0xc90e,	// (0x0002be63) popup_toolbar_trans_pane

0xdc89,	// (0x0002d1de) aid_height_set_list_ParamLimits

0x677c,	// (0x00025cd1) aid_size_parent_ParamLimits

0x4e92,	// (0x000243e7) list_highlight_pane_cp2_ParamLimits

0x4a29,	// (0x00023f7e) set_content_pane_g1_ParamLimits

0xbc1f,	// (0x0002b174) list_single_image_pane_ParamLimits

0xbc1f,	// (0x0002b174) list_single_image_pane

0xe3b3,	// (0x0002d908) aid_size_cell_image_ParamLimits

0xe3b3,	// (0x0002d908) aid_size_cell_image

0xe3c0,	// (0x0002d915) grid_single_image_pane_ParamLimits

0xe3c0,	// (0x0002d915) grid_single_image_pane

0x584e,	// (0x00024da3) list_single_image_pane_g1_ParamLimits

0x584e,	// (0x00024da3) list_single_image_pane_g1

0x8510,	// (0x00027a65) list_single_image_pane_g2_ParamLimits

0x8510,	// (0x00027a65) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002f16c) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002f16c) list_single_image_pane_g

0x8524,	// (0x00027a79) list_single_image_pane_t1_ParamLimits

0x8524,	// (0x00027a79) list_single_image_pane_t1

0xe3ce,	// (0x0002d923) cell_image_list_pane_ParamLimits

0xe3ce,	// (0x0002d923) cell_image_list_pane

0xe3e4,	// (0x0002d939) cell_image_list_pane_g1

0xe3ed,	// (0x0002d942) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002f171) cell_image_list_pane_g

0x8560,	// (0x00027ab5) aid_size_cell_tb_trans_pane

0x3ebe,	// (0x00023413) bg_tb_trans_pane

0x8572,	// (0x00027ac7) grid_tb_trans_pane

0x539c,	// (0x000248f1) bg_tb_trans_pane_g1

0x53a4,	// (0x000248f9) bg_tb_trans_pane_g2

0x53ac,	// (0x00024901) bg_tb_trans_pane_g3

0x53b4,	// (0x00024909) bg_tb_trans_pane_g4

0x53bc,	// (0x00024911) bg_tb_trans_pane_g5

0x53d4,	// (0x00024929) bg_tb_trans_pane_g6

0x53dc,	// (0x00024931) bg_tb_trans_pane_g7

0x53c4,	// (0x00024919) bg_tb_trans_pane_g8

0x53cc,	// (0x00024921) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002f176) bg_tb_trans_pane_g

0x8586,	// (0x00027adb) cell_toolbar_trans_pane_ParamLimits

0x8586,	// (0x00027adb) cell_toolbar_trans_pane

0x79c2,	// (0x00026f17) cell_toolbar_trans_pane_g1

0xe047,	// (0x0002d59c) list_form2_midp_pane_t1

0xe055,	// (0x0002d5aa) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002f01f) list_form2_midp_pane_t

0x75a8,	// (0x00026afd) scroll_pane_cp51_ParamLimits

0x7764,	// (0x00026cb9) form2_midp_wait_pane_g1

0x776d,	// (0x00026cc2) form2_midp_wait_pane_g2

0x7776,	// (0x00026ccb) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002f034) form2_midp_wait_pane_g

0x364f,	// (0x00022ba4) list_highlight_pane_cp21_ParamLimits

0x77cd,	// (0x00026d22) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77dc,	// (0x00026d31) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6934,	// (0x00025e89) list_single_2graphic_im_pane_ParamLimits

0x6934,	// (0x00025e89) list_single_2graphic_im_pane

0xe3f6,	// (0x0002d94b) list_single_2graphic_im_pane_g1_ParamLimits

0xe3f6,	// (0x0002d94b) list_single_2graphic_im_pane_g1

0xe407,	// (0x0002d95c) list_single_2graphic_im_pane_g2_ParamLimits

0xe407,	// (0x0002d95c) list_single_2graphic_im_pane_g2

0xe413,	// (0x0002d968) list_single_2graphic_im_pane_g3_ParamLimits

0xe413,	// (0x0002d968) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002f189) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002f189) list_single_2graphic_im_pane_g

0xe427,	// (0x0002d97c) list_single_2graphic_im_pane_t1_ParamLimits

0xe427,	// (0x0002d97c) list_single_2graphic_im_pane_t1

0x8009,	// (0x0002755e) list_single_graphic_2heading_pane_fp_ParamLimits

0x8009,	// (0x0002755e) list_single_graphic_2heading_pane_fp

0x0e90,	// (0x000203e5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e90,	// (0x000203e5) list_single_graphic_2heading_pane_fp_g1

0x801e,	// (0x00027573) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x801e,	// (0x00027573) list_single_graphic_2heading_pane_fp_g2

0x0e59,	// (0x000203ae) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e59,	// (0x000203ae) list_single_graphic_2heading_pane_fp_g3

0x0e65,	// (0x000203ba) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0e65,	// (0x000203ba) list_single_graphic_2heading_pane_fp_g4

0x802a,	// (0x0002757f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x802a,	// (0x0002757f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f0b7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f0b7) list_single_graphic_2heading_pane_fp_g

0x1069,	// (0x000205be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1069,	// (0x000205be) list_single_graphic_2heading_pane_fp_t1

0x0ec8,	// (0x0002041d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0ec8,	// (0x0002041d) list_single_graphic_2heading_pane_fp_t2

0x107f,	// (0x000205d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x107f,	// (0x000205d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002f192) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002f192) list_single_graphic_2heading_pane_fp_t

0x7a4e,	// (0x00026fa3) fep_hwr_write_pane_g5_ParamLimits

0x7a4e,	// (0x00026fa3) fep_hwr_write_pane_g5

0x7a5a,	// (0x00026faf) fep_hwr_write_pane_g6_ParamLimits

0x7a5a,	// (0x00026faf) fep_hwr_write_pane_g6

0x82dc,	// (0x00027831) eswt_shell_pane_ParamLimits

0x5410,	// (0x00024965) bg_popup_window_pane_cp18_ParamLimits

0x66c4,	// (0x00025c19) heading_pane_cp70

0x8406,	// (0x0002795b) popup_eswt_tasktip_window_t1_ParamLimits

0xd664,	// (0x0002cbb9) aid_touch_tab_arrow_left

0xd67a,	// (0x0002cbcf) aid_touch_tab_arrow_right

0xc09d,	// (0x0002b5f2) title_pane_g3_ParamLimits

0xc09d,	// (0x0002b5f2) title_pane_g3

0x3e7d,	// (0x000233d2) set_value_pane_g1

0xc90e,	// (0x0002be63) popup_toolbar_trans_pane_ParamLimits

0x8560,	// (0x00027ab5) aid_size_cell_tb_trans_pane_ParamLimits

0x3ebe,	// (0x00023413) bg_tb_trans_pane_ParamLimits

0x8572,	// (0x00027ac7) grid_tb_trans_pane_ParamLimits

0x38d8,	// (0x00022e2d) cont_note_pane_ParamLimits

0x38d8,	// (0x00022e2d) cont_note_pane

0x3c2f,	// (0x00023184) cont_snote2_single_text_pane_ParamLimits

0x3c2f,	// (0x00023184) cont_snote2_single_text_pane

0x3c2f,	// (0x00023184) cont_snote2_single_graphic_pane_ParamLimits

0x3c2f,	// (0x00023184) cont_snote2_single_graphic_pane

0x5a21,	// (0x00024f76) cont_note_wait_pane_ParamLimits

0x5a21,	// (0x00024f76) cont_note_wait_pane

0x5a21,	// (0x00024f76) cont_note_image_pane_ParamLimits

0x5a21,	// (0x00024f76) cont_note_image_pane

0x861a,	// (0x00027b6f) popup_note2_window_g1_ParamLimits

0x861a,	// (0x00027b6f) popup_note2_window_g1

0x864b,	// (0x00027ba0) popup_note2_window_t1_ParamLimits

0x864b,	// (0x00027ba0) popup_note2_window_t1

0x8690,	// (0x00027be5) popup_note2_window_t2_ParamLimits

0x8690,	// (0x00027be5) popup_note2_window_t2

0x86d5,	// (0x00027c2a) popup_note2_window_t3_ParamLimits

0x86d5,	// (0x00027c2a) popup_note2_window_t3

0x871a,	// (0x00027c6f) popup_note2_window_t4_ParamLimits

0x871a,	// (0x00027c6f) popup_note2_window_t4

0x395c,	// (0x00022eb1) popup_note2_window_t5_ParamLimits

0x395c,	// (0x00022eb1) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002f19e) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002f19e) popup_note2_window_t

0x8749,	// (0x00027c9e) popup_note2_image_window_g1_ParamLimits

0x8749,	// (0x00027c9e) popup_note2_image_window_g1

0x8755,	// (0x00027caa) popup_note2_image_window_g2_ParamLimits

0x8755,	// (0x00027caa) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002f1a9) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002f1a9) popup_note2_image_window_g

0x8767,	// (0x00027cbc) popup_note2_image_window_t1_ParamLimits

0x8767,	// (0x00027cbc) popup_note2_image_window_t1

0x877f,	// (0x00027cd4) popup_note2_image_window_t2_ParamLimits

0x877f,	// (0x00027cd4) popup_note2_image_window_t2

0x8797,	// (0x00027cec) popup_note2_image_window_t3_ParamLimits

0x8797,	// (0x00027cec) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002f1ae) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002f1ae) popup_note2_image_window_t

0x5a2f,	// (0x00024f84) popup_note2_wait_window_g1_ParamLimits

0x5a2f,	// (0x00024f84) popup_note2_wait_window_g1

0x87b3,	// (0x00027d08) popup_note2_wait_window_g2_ParamLimits

0x87b3,	// (0x00027d08) popup_note2_wait_window_g2

0x5a47,	// (0x00024f9c) popup_note2_wait_window_g3_ParamLimits

0x5a47,	// (0x00024f9c) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002f1b5) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002f1b5) popup_note2_wait_window_g

0x87bf,	// (0x00027d14) popup_note2_wait_window_t1_ParamLimits

0x87bf,	// (0x00027d14) popup_note2_wait_window_t1

0x87dd,	// (0x00027d32) popup_note2_wait_window_t2_ParamLimits

0x87dd,	// (0x00027d32) popup_note2_wait_window_t2

0x87fb,	// (0x00027d50) popup_note2_wait_window_t3_ParamLimits

0x87fb,	// (0x00027d50) popup_note2_wait_window_t3

0x880d,	// (0x00027d62) popup_note2_wait_window_t4_ParamLimits

0x880d,	// (0x00027d62) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002f1bc) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002f1bc) popup_note2_wait_window_t

0x881f,	// (0x00027d74) wait_bar2_pane_ParamLimits

0x881f,	// (0x00027d74) wait_bar2_pane

0x8837,	// (0x00027d8c) popup_snote2_single_text_window_g1_ParamLimits

0x8837,	// (0x00027d8c) popup_snote2_single_text_window_g1

0x885f,	// (0x00027db4) popup_snote2_single_text_window_t1_ParamLimits

0x885f,	// (0x00027db4) popup_snote2_single_text_window_t1

0x88ab,	// (0x00027e00) popup_snote2_single_text_window_t2_ParamLimits

0x88ab,	// (0x00027e00) popup_snote2_single_text_window_t2

0x88f7,	// (0x00027e4c) popup_snote2_single_text_window_t3_ParamLimits

0x88f7,	// (0x00027e4c) popup_snote2_single_text_window_t3

0x8938,	// (0x00027e8d) popup_snote2_single_text_window_t4_ParamLimits

0x8938,	// (0x00027e8d) popup_snote2_single_text_window_t4

0x896e,	// (0x00027ec3) popup_snote2_single_text_window_t5_ParamLimits

0x896e,	// (0x00027ec3) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002f1c5) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002f1c5) popup_snote2_single_text_window_t

0x8999,	// (0x00027eee) popup_snote2_single_graphic_window_g1_ParamLimits

0x8999,	// (0x00027eee) popup_snote2_single_graphic_window_g1

0x89c1,	// (0x00027f16) popup_snote2_single_graphic_window_g2_ParamLimits

0x89c1,	// (0x00027f16) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002f1d0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002f1d0) popup_snote2_single_graphic_window_g

0x89e9,	// (0x00027f3e) popup_snote2_single_graphic_window_t1_ParamLimits

0x89e9,	// (0x00027f3e) popup_snote2_single_graphic_window_t1

0x8a35,	// (0x00027f8a) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a35,	// (0x00027f8a) popup_snote2_single_graphic_window_t2

0x88f7,	// (0x00027e4c) popup_snote2_single_graphic_window_t3_ParamLimits

0x88f7,	// (0x00027e4c) popup_snote2_single_graphic_window_t3

0x8938,	// (0x00027e8d) popup_snote2_single_graphic_window_t4_ParamLimits

0x8938,	// (0x00027e8d) popup_snote2_single_graphic_window_t4

0x896e,	// (0x00027ec3) popup_snote2_single_graphic_window_t5_ParamLimits

0x896e,	// (0x00027ec3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002f1d5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002f1d5) popup_snote2_single_graphic_window_t

0x745d,	// (0x000269b2) clock_nsta_pane_cp2_t1

0x745d,	// (0x000269b2) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002eff5) clock_nsta_pane_cp2_t

0x0640,	// (0x0001fb95) form_field_data_wide_pane_g1_ParamLimits

0x3ecc,	// (0x00023421) form_field_data_wide_pane_g2_ParamLimits

0x3ecc,	// (0x00023421) form_field_data_wide_pane_g2

0x3ed8,	// (0x0002342d) form_field_data_wide_pane_g3_ParamLimits

0x3ed8,	// (0x0002342d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002ebd0) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002ebd0) form_field_data_wide_pane_g

0xdf8a,	// (0x0002d4df) grid_touch_3_pane_ParamLimits

0xdf8a,	// (0x0002d4df) grid_touch_3_pane

0xe458,	// (0x0002d9ad) cell_touch_3_pane_ParamLimits

0xe458,	// (0x0002d9ad) cell_touch_3_pane

0x79c2,	// (0x00026f17) cell_touch_3_pane_g1

0x79c2,	// (0x00026f17) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002f07a) cell_touch_3_pane_g

0x398e,	// (0x00022ee3) cont_query_data_pane

0x3996,	// (0x00022eeb) cont_query_data_pane_cp1

0x8aaf,	// (0x00028004) button_value_adjust_pane_cp7

0x8ab7,	// (0x0002800c) query_popup_pane_cp3

0x4631,	// (0x00023b86) bg_popup_sub_pane_cp22_ParamLimits

0x18ac,	// (0x00020e01) navi_navi_volume_pane_cp2

0x18c7,	// (0x00020e1c) popup_side_volume_key_window_g2

0x18d6,	// (0x00020e2b) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002ec66) popup_side_volume_key_window_g

0x18f3,	// (0x00020e48) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002ec6d) popup_side_volume_key_window_t

0x48e8,	// (0x00023e3d) popup_side_volume_key_window_ParamLimits

0xb726,	// (0x0002ac7b) list_double_graphic_pane_g4_ParamLimits

0xb726,	// (0x0002ac7b) list_double_graphic_pane_g4

0xde02,	// (0x0002d357) list_single_2heading_msg_pane_ParamLimits

0xde02,	// (0x0002d357) list_single_2heading_msg_pane

0xbca9,	// (0x0002b1fe) list_single_2heading_msg_pane_g1_ParamLimits

0xbca9,	// (0x0002b1fe) list_single_2heading_msg_pane_g1

0xbcb5,	// (0x0002b20a) list_single_2heading_msg_pane_g2_ParamLimits

0xbcb5,	// (0x0002b20a) list_single_2heading_msg_pane_g2

0xbcc8,	// (0x0002b21d) list_single_2heading_msg_pane_g3_ParamLimits

0xbcc8,	// (0x0002b21d) list_single_2heading_msg_pane_g3

0xbcd4,	// (0x0002b229) list_single_2heading_msg_pane_g4_ParamLimits

0xbcd4,	// (0x0002b229) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002f1e0) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002f1e0) list_single_2heading_msg_pane_g

0xbcec,	// (0x0002b241) list_single_2heading_msg_pane_t1_ParamLimits

0xbcec,	// (0x0002b241) list_single_2heading_msg_pane_t1

0xbd14,	// (0x0002b269) list_single_2heading_msg_pane_t2_ParamLimits

0xbd14,	// (0x0002b269) list_single_2heading_msg_pane_t2

0xbd7f,	// (0x0002b2d4) list_single_2heading_msg_pane_t3_ParamLimits

0xbd7f,	// (0x0002b2d4) list_single_2heading_msg_pane_t3

0x1164,	// (0x000206b9) list_single_2heading_msg_pane_t4_ParamLimits

0x1164,	// (0x000206b9) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002f1e9) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002f1e9) list_single_2heading_msg_pane_t

0x35a3,	// (0x00022af8) title_pane_g4_ParamLimits

0x35a3,	// (0x00022af8) title_pane_g4

0x16bb,	// (0x00020c10) title_pane_stacon_g3_ParamLimits

0x16bb,	// (0x00020c10) title_pane_stacon_g3

0x85dd,	// (0x00027b32) list_single_2graphic_im_pane_g4_ParamLimits

0x85dd,	// (0x00027b32) list_single_2graphic_im_pane_g4

0x6480,	// (0x000259d5) popup_side_volume_key_window_cp

0x6c9c,	// (0x000261f1) main_idle_act2_pane_t1

0x222c,	// (0x00021781) toolbar_button_pane_g10

0xd274,	// (0x0002c7c9) popup_toolbar_window_cp1

0x744e,	// (0x000269a3) clock_nsta_pane_cp_t1

0x744e,	// (0x000269a3) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002eff0) clock_nsta_pane_cp_t

0x18ac,	// (0x00020e01) navi_navi_volume_pane_cp2_ParamLimits

0x18bb,	// (0x00020e10) popup_side_volume_key_window_g1_ParamLimits

0x18c7,	// (0x00020e1c) popup_side_volume_key_window_g2_ParamLimits

0x18d6,	// (0x00020e2b) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002ec66) popup_side_volume_key_window_g_ParamLimits

0x2672,	// (0x00021bc7) fep_hwr_aid_pane

0xdb41,	// (0x0002d096) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a1e,	// (0x00026f73) fep_hwr_top_pane_g1_ParamLimits

0x7a30,	// (0x00026f85) fep_hwr_top_pane_g2_ParamLimits

0x272b,	// (0x00021c80) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002f045) fep_hwr_top_pane_g_ParamLimits

0x2740,	// (0x00021c95) fep_hwr_top_text_pane_ParamLimits

0x6243,	// (0x00025798) aid_touch_tab_arrow_arrow_2

0x624c,	// (0x000257a1) aid_touch_tab_arrow_left_2

0x2686,	// (0x00021bdb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x26bd,	// (0x00021c12) fep_hwr_prediction_pane

0x7b90,	// (0x000270e5) fep_vkb_prediction_pane

0xe23e,	// (0x0002d793) fep_vkb_side_pane_g3_ParamLimits

0xe23e,	// (0x0002d793) fep_vkb_side_pane_g3

0x7c40,	// (0x00027195) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x80c0,	// (0x00027615) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x80cd,	// (0x00027622) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002f0ef) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8adc,	// (0x00028031) fep_hwr_prediction_pane_g1

0x29cd,	// (0x00021f22) fep_hwr_prediction_pane_g2

0x29d5,	// (0x00021f2a) fep_hwr_prediction_pane_g3

0x29dd,	// (0x00021f32) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002f1f2) fep_hwr_prediction_pane_g

0x8adc,	// (0x00028031) fep_vkb_prediction_pane_g1

0x8ae6,	// (0x0002803b) fep_vkb_prediction_pane_g2

0x8aee,	// (0x00028043) fep_vkb_prediction_pane_g3

0x8af6,	// (0x0002804b) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002f1fb) fep_vkb_prediction_pane_g

0x24f2,	// (0x00021a47) slider_set_pane_g3

0x2506,	// (0x00021a5b) slider_set_pane_g4

0x251e,	// (0x00021a73) slider_set_pane_g5

0x24f2,	// (0x00021a47) slider_set_pane_g6

0x2534,	// (0x00021a89) slider_set_pane_g7

0x68e1,	// (0x00025e36) slider_form_pane_g3

0x68ea,	// (0x00025e3f) slider_form_pane_g4

0x68f2,	// (0x00025e47) slider_form_pane_g5

0x68e1,	// (0x00025e36) slider_form_pane_g6

0xddd4,	// (0x0002d329) slider_form_pane_g7

0x6f47,	// (0x0002649c) slider_set_pane_vc_g3

0x6f50,	// (0x000264a5) slider_set_pane_vc_g4

0x6f59,	// (0x000264ae) slider_set_pane_vc_g5

0x6f47,	// (0x0002649c) slider_set_pane_vc_g6

0x6f62,	// (0x000264b7) slider_set_pane_vc_g7

0x7122,	// (0x00026677) slider_form_pane_vc_g1

0x712b,	// (0x00026680) slider_form_pane_vc_g2

0x7134,	// (0x00026689) slider_form_pane_vc_g3

0x7122,	// (0x00026677) slider_form_pane_vc_g4

0x713d,	// (0x00026692) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002efc2) slider_form_pane_vc_g

0x355b,	// (0x00022ab0) main_idle_act3_pane

0x8afe,	// (0x00028053) ai3_links_pane

0xe4a0,	// (0x0002d9f5) popup_ai3_data_window_ParamLimits

0xe4a0,	// (0x0002d9f5) popup_ai3_data_window

0x355b,	// (0x00022ab0) grid_ai3_links_pane

0xe4ba,	// (0x0002da0f) cell_ai3_links_pane_ParamLimits

0xe4ba,	// (0x0002da0f) cell_ai3_links_pane

0x8b39,	// (0x0002808e) bg_popup_sub_pane_cp11

0x8b46,	// (0x0002809b) cell_ai3_links_pane_g1

0x355b,	// (0x00022ab0) bg_popup_sub_pane_cp12

0x8b6b,	// (0x000280c0) heading_ai3_data_pane

0x8b73,	// (0x000280c8) list_ai3_gene_pane

0x8b7f,	// (0x000280d4) popup_ai3_data_window_g1

0x8b87,	// (0x000280dc) heading_ai3_data_pane_g1

0x8b8f,	// (0x000280e4) heading_ai3_data_pane_t1

0x8b9d,	// (0x000280f2) list_double_ai3_gene_pane_ParamLimits

0x8b9d,	// (0x000280f2) list_double_ai3_gene_pane

0x8baa,	// (0x000280ff) list_single_ai3_gene_pane_ParamLimits

0x8baa,	// (0x000280ff) list_single_ai3_gene_pane

0x7987,	// (0x00026edc) list_highlight_pane_cp7_ParamLimits

0x7987,	// (0x00026edc) list_highlight_pane_cp7

0x8bb7,	// (0x0002810c) list_single_a13_gene_pane_t1_ParamLimits

0x8bb7,	// (0x0002810c) list_single_a13_gene_pane_t1

0x8bce,	// (0x00028123) list_single_ai3_gene_pane_g1

0x8bd7,	// (0x0002812c) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002f204) list_single_ai3_gene_pane_g

0x8bdf,	// (0x00028134) list_double_ai3_gene_pane_g1_ParamLimits

0x8bdf,	// (0x00028134) list_double_ai3_gene_pane_g1

0x8beb,	// (0x00028140) list_double_ai3_gene_pane_t1_ParamLimits

0x8beb,	// (0x00028140) list_double_ai3_gene_pane_t1

0x8c07,	// (0x0002815c) list_double_ai3_gene_pane_t2_ParamLimits

0x8c07,	// (0x0002815c) list_double_ai3_gene_pane_t2

0x8c1d,	// (0x00028172) list_double_ai3_gene_pane_t3_ParamLimits

0x8c1d,	// (0x00028172) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002f209) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002f209) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1095,	// (0x000205ea) aid_size_min_col_2

0xe48a,	// (0x0002d9df) aid_size_min_msg_ParamLimits

0xe48a,	// (0x0002d9df) aid_size_min_msg

0xe252,	// (0x0002d7a7) fep_vkb_top_text_pane_g2_ParamLimits

0xe252,	// (0x0002d7a7) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002f075) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002f075) fep_vkb_top_text_pane_g

0x355b,	// (0x00022ab0) main_hc_apps_shell_pane

0x8c3a,	// (0x0002818f) grid_hc_apps_pane_ParamLimits

0x8c3a,	// (0x0002818f) grid_hc_apps_pane

0x8c49,	// (0x0002819e) list_hc_apps_pane

0x8c51,	// (0x000281a6) scroll_pane_cp37_ParamLimits

0x8c51,	// (0x000281a6) scroll_pane_cp37

0xe4d4,	// (0x0002da29) cell_hc_apps_pane_ParamLimits

0xe4d4,	// (0x0002da29) cell_hc_apps_pane

0xe592,	// (0x0002dae7) cell_hc_apps_pane_g1_ParamLimits

0xe592,	// (0x0002dae7) cell_hc_apps_pane_g1

0x8d3c,	// (0x00028291) cell_hc_apps_pane_g2_ParamLimits

0x8d3c,	// (0x00028291) cell_hc_apps_pane_g2

0x8d58,	// (0x000282ad) cell_hc_apps_pane_g3_ParamLimits

0x8d58,	// (0x000282ad) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002f210) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002f210) cell_hc_apps_pane_g

0xe5bf,	// (0x0002db14) cell_hc_apps_pane_t1_ParamLimits

0xe5bf,	// (0x0002db14) cell_hc_apps_pane_t1

0x38d8,	// (0x00022e2d) grid_highlight_pane_cp10_ParamLimits

0x38d8,	// (0x00022e2d) grid_highlight_pane_cp10

0xe5fd,	// (0x0002db52) list_single_hc_apps_pane_ParamLimits

0xe5fd,	// (0x0002db52) list_single_hc_apps_pane

0xe62a,	// (0x0002db7f) list_single_hc_apps_pane_g1

0xbded,	// (0x0002b342) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002f217) list_single_hc_apps_pane_g

0xbe06,	// (0x0002b35b) list_single_hc_apps_pane_g2_copy1

0xbe22,	// (0x0002b377) list_single_hc_apps_pane_t1

0x364f,	// (0x00022ba4) bg_set_opt_pane_cp_ParamLimits

0x15e3,	// (0x00020b38) setting_slider_pane_t1_ParamLimits

0x15fc,	// (0x00020b51) setting_slider_pane_t2_ParamLimits

0x1616,	// (0x00020b6b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002eab3) setting_slider_pane_t_ParamLimits

0x162e,	// (0x00020b83) slider_set_pane_ParamLimits

0x1b55,	// (0x000210aa) control_pane_g5_ParamLimits

0x1b55,	// (0x000210aa) control_pane_g5

0x6730,	// (0x00025c85) slider_set_pane_g1_ParamLimits

0x24e6,	// (0x00021a3b) slider_set_pane_g2_ParamLimits

0x24f2,	// (0x00021a47) slider_set_pane_g3_ParamLimits

0x2506,	// (0x00021a5b) slider_set_pane_g4_ParamLimits

0x251e,	// (0x00021a73) slider_set_pane_g5_ParamLimits

0x24f2,	// (0x00021a47) slider_set_pane_g6_ParamLimits

0x2534,	// (0x00021a89) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002eead) slider_set_pane_g_ParamLimits

0x49d4,	// (0x00023f29) navi_icon_text_pane_ParamLimits

0xd62d,	// (0x0002cb82) aid_fill_nsta_2_ParamLimits

0xd664,	// (0x0002cbb9) aid_touch_tab_arrow_left_ParamLimits

0xd67a,	// (0x0002cbcf) aid_touch_tab_arrow_right_ParamLimits

0xd715,	// (0x0002cc6a) clock_nsta_pane_ParamLimits

0x6225,	// (0x0002577a) navi_icon_pane_g1_ParamLimits

0x6231,	// (0x00025786) navi_text_pane_t1_ParamLimits

0x755a,	// (0x00026aaf) navi_icon_text_pane_g1_ParamLimits

0x7566,	// (0x00026abb) navi_icon_text_pane_t1_ParamLimits

0xe62a,	// (0x0002db7f) list_single_hc_apps_pane_g1_ParamLimits

0xbded,	// (0x0002b342) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002f217) list_single_hc_apps_pane_g_ParamLimits

0xbe06,	// (0x0002b35b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe22,	// (0x0002b377) list_single_hc_apps_pane_t1_ParamLimits

0xbfa2,	// (0x0002b4f7) popup_toolbar2_fixed_window_ParamLimits

0xbfa2,	// (0x0002b4f7) popup_toolbar2_fixed_window

0xc904,	// (0x0002be59) popup_toolbar2_float_window

0x355b,	// (0x00022ab0) bg_popup_sub_pane_cp27

0x8e2f,	// (0x00028384) grid_toolbar2_float_pane

0x355b,	// (0x00022ab0) bg_popup_sub_pane_cp26

0x8e2f,	// (0x00028384) grid_toolbar2_fixed_pane

0xe643,	// (0x0002db98) cell_toolbar2_fixed_pane_ParamLimits

0xe643,	// (0x0002db98) cell_toolbar2_fixed_pane

0xe65d,	// (0x0002dbb2) cell_toolbar2_fixed_pane_g1

0x8e50,	// (0x000283a5) toolbar2_fixed_button_pane

0x539c,	// (0x000248f1) toolbar2_fixed_button_pane_g1

0x53a4,	// (0x000248f9) toolbar2_fixed_button_pane_g2

0x53ac,	// (0x00024901) toolbar2_fixed_button_pane_g3

0x53b4,	// (0x00024909) toolbar2_fixed_button_pane_g4

0x53bc,	// (0x00024911) toolbar2_fixed_button_pane_g5

0x53c4,	// (0x00024919) toolbar2_fixed_button_pane_g6

0x53cc,	// (0x00024921) toolbar2_fixed_button_pane_g7

0x53d4,	// (0x00024929) toolbar2_fixed_button_pane_g8

0x53dc,	// (0x00024931) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002edaf) toolbar2_fixed_button_pane_g

0x8e58,	// (0x000283ad) cell_toolbar2_float_pane_ParamLimits

0x8e58,	// (0x000283ad) cell_toolbar2_float_pane

0x8e69,	// (0x000283be) cell_toolbar2_float_pane_g1

0x8e50,	// (0x000283a5) toolbar2_fixed_button_pane_cp

0xe12c,	// (0x0002d681) fep_vkb_accented_list_pane_ParamLimits

0xe12c,	// (0x0002d681) fep_vkb_accented_list_pane

0x288e,	// (0x00021de3) bg_popup_fep_shadow_pane_g9

0x4b54,	// (0x000240a9) bg_popup_fep_shadow_pane_cp3

0x4015,	// (0x0002356a) list_accented_list_pane

0x8e72,	// (0x000283c7) list_single_accented_list_pane_ParamLimits

0x8e72,	// (0x000283c7) list_single_accented_list_pane

0x4b54,	// (0x000240a9) list_highlight_pane_cp10

0x8e83,	// (0x000283d8) list_single_accented_list_pane_t1

0xc82e,	// (0x0002bd83) popup_slider_window_ParamLimits

0xc82e,	// (0x0002bd83) popup_slider_window

0x8abf,	// (0x00028014) aid_indentation_list_msg

0xe756,	// (0x0002dcab) bg_popup_window_pane_cp19

0x8fa7,	// (0x000284fc) popup_slider_window_g1

0x8fc3,	// (0x00028518) popup_slider_window_g2

0x8fdf,	// (0x00028534) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002f21c) popup_slider_window_g

0x903b,	// (0x00028590) popup_slider_window_t1

0x90af,	// (0x00028604) small_volume_slider_vertical_pane

0x79c2,	// (0x00026f17) small_volume_slider_vertical_pane_g1

0x79c2,	// (0x00026f17) small_volume_slider_vertical_pane_g2

0x90cb,	// (0x00028620) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002f22e) small_volume_slider_vertical_pane_g

0xbf10,	// (0x0002b465) area_side_right_pane_ParamLimits

0xbf10,	// (0x0002b465) area_side_right_pane

0xca3a,	// (0x0002bf8f) aid_size_side_button_ParamLimits

0xca3a,	// (0x0002bf8f) aid_size_side_button

0xca53,	// (0x0002bfa8) grid_sctrl_middle_pane_ParamLimits

0xca53,	// (0x0002bfa8) grid_sctrl_middle_pane

0x2a18,	// (0x00021f6d) sctrl_sk_bottom_pane

0x2a29,	// (0x00021f7e) sctrl_sk_top_pane

0x2a3b,	// (0x00021f90) aid_touch_sctrl_top

0x38d8,	// (0x00022e2d) bg_sctrl_sk_pane_ParamLimits

0x38d8,	// (0x00022e2d) bg_sctrl_sk_pane

0x2a48,	// (0x00021f9d) sctrl_sk_top_pane_g1

0x2a55,	// (0x00021faa) sctrl_sk_top_pane_t1

0x2a3b,	// (0x00021f90) aid_touch_sctrl_bottom

0x38d8,	// (0x00022e2d) bg_sctrl_sk_pane_cp_ParamLimits

0x38d8,	// (0x00022e2d) bg_sctrl_sk_pane_cp

0x2a70,	// (0x00021fc5) sctrl_sk_bottom_pane_g1

0x2a55,	// (0x00021faa) sctrl_sk_bottom_pane_t1

0xca6d,	// (0x0002bfc2) cell_sctrl_middle_pane_ParamLimits

0xca6d,	// (0x0002bfc2) cell_sctrl_middle_pane

0xca7e,	// (0x0002bfd3) aid_touch_sctrl_middle_ParamLimits

0xca7e,	// (0x0002bfd3) aid_touch_sctrl_middle

0xca8b,	// (0x0002bfe0) bg_sctrl_middle_pane_ParamLimits

0xca8b,	// (0x0002bfe0) bg_sctrl_middle_pane

0x9153,	// (0x000286a8) cell_sctrl_middle_pane_g1_ParamLimits

0x9153,	// (0x000286a8) cell_sctrl_middle_pane_g1

0xca99,	// (0x0002bfee) cell_sctrl_middle_pane_g2_ParamLimits

0xca99,	// (0x0002bfee) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002f23a) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002f23a) cell_sctrl_middle_pane_g

0x539c,	// (0x000248f1) bg_sctrl_middle_pane_g1

0x53a4,	// (0x000248f9) bg_sctrl_middle_pane_g2

0x53ac,	// (0x00024901) bg_sctrl_middle_pane_g3

0x53b4,	// (0x00024909) bg_sctrl_middle_pane_g4

0x53bc,	// (0x00024911) bg_sctrl_middle_pane_g5

0x53c4,	// (0x00024919) bg_sctrl_middle_pane_g6

0x53cc,	// (0x00024921) bg_sctrl_middle_pane_g7

0x53d4,	// (0x00024929) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002f23f) bg_sctrl_middle_pane_g

0x53dc,	// (0x00024931) bg_sctrl_middle_pane_g8_copy1

0x539c,	// (0x000248f1) bg_sctrl_sk_pane_g1

0x53a4,	// (0x000248f9) bg_sctrl_sk_pane_g2

0x53ac,	// (0x00024901) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002edaf) bg_sctrl_sk_pane_g

0x3ded,	// (0x00023342) aid_size_touch_scroll_bar

0x53b4,	// (0x00024909) bg_sctrl_sk_pane_g4

0x53bc,	// (0x00024911) bg_sctrl_sk_pane_g5

0x53c4,	// (0x00024919) bg_sctrl_sk_pane_g6

0x53cc,	// (0x00024921) bg_sctrl_sk_pane_g7

0x53d4,	// (0x00024929) bg_sctrl_sk_pane_g8

0x53dc,	// (0x00024931) bg_sctrl_sk_pane_g9

0x1ce9,	// (0x0002123e) popup_fep_china_hwr2_fs_candidate_window

0xc348,	// (0x0002b89d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc348,	// (0x0002b89d) popup_fep_china_hwr2_fs_control_window

0x7c40,	// (0x00027195) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002f235) sctrl_sk_top_pane_g

0xe80e,	// (0x0002dd63) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe80e,	// (0x0002dd63) aid_fep_china_hwr2_fs_cell

0xe822,	// (0x0002dd77) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe822,	// (0x0002dd77) bg_popup_fep_shadow_pane_cp4

0xe839,	// (0x0002dd8e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe839,	// (0x0002dd8e) bg_popup_fep_shadow_pane_cp5

0xe84b,	// (0x0002dda0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe84b,	// (0x0002dda0) popup_fep_china_hwr2_fs_control_bar_grid

0xe85f,	// (0x0002ddb4) popup_fep_china_hwr2_fs_control_funtion_grid

0x9127,	// (0x0002867c) aid_fep_china_hwr2_fs_candi_cell

0x355b,	// (0x00022ab0) bg_popup_fep_shadow_pane_cp6

0x9131,	// (0x00028686) popup_fep_china_hwr2_fs_candidate_grid

0xe867,	// (0x0002ddbc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe867,	// (0x0002ddbc) cell_fep_china_hwr2_fs_funtion_grid

0x79c2,	// (0x00026f17) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9153,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9153,	// (0x000286a8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9161,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9161,	// (0x000286b6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002f250) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002f250) cell_fep_china_hwr2_fs_funtion_grid_g

0xe87f,	// (0x0002ddd4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe87f,	// (0x0002ddd4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe894,	// (0x0002dde9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe894,	// (0x0002dde9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0002f255) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0002f255) cell_fep_china_hwr2_fs_funtion_grid_t

0x91a8,	// (0x000286fd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91b0,	// (0x00028705) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91b8,	// (0x0002870d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x0002f25a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91c0,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91c0,	// (0x00028715) cell_fep_china_hwr2_fs_candidate_grid

0x91d9,	// (0x0002872e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91e1,	// (0x00028736) popup_fep_china_hwr2_fs_candidate_grid_g21

0x79c2,	// (0x00026f17) cell_fep_china_hwr2_fs_candidate_grid_g1

0x79c2,	// (0x00026f17) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002f07a) cell_fep_china_hwr2_fs_candidate_grid_g

0x91e9,	// (0x0002873e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f92,	// (0x000244e7) clock_nsta_pane_cp_24_ParamLimits

0x4f92,	// (0x000244e7) clock_nsta_pane_cp_24

0x5010,	// (0x00024565) indicator_nsta_pane_cp_24_ParamLimits

0x5010,	// (0x00024565) indicator_nsta_pane_cp_24

0x60a1,	// (0x000255f6) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002ee14) heading_pane_g

0x6ae5,	// (0x0002603a) grid_sct_catagory_button_pane

0x6b15,	// (0x0002606a) scroll_pane_cp5_ParamLimits

0x75b4,	// (0x00026b09) button_value_adjust_pane_cp5_ParamLimits

0x75b4,	// (0x00026b09) button_value_adjust_pane_cp5

0x7693,	// (0x00026be8) form2_midp_time_pane_ParamLimits

0x91f7,	// (0x0002874c) cell_sct_catagory_button_pane_ParamLimits

0x91f7,	// (0x0002874c) cell_sct_catagory_button_pane

0x7987,	// (0x00026edc) bg_button_pane_cp01_ParamLimits

0x7987,	// (0x00026edc) bg_button_pane_cp01

0x79c2,	// (0x00026f17) cell_sct_catagory_button_pane_g1

0xc8a7,	// (0x0002bdfc) popup_tb_extension_window

0xe8b0,	// (0x0002de05) aid_size_cell_ext_ParamLimits

0xe8b0,	// (0x0002de05) aid_size_cell_ext

0x3c2f,	// (0x00023184) bg_tb_trans_pane_cp1_ParamLimits

0x3c2f,	// (0x00023184) bg_tb_trans_pane_cp1

0xe8d6,	// (0x0002de2b) grid_tb_ext_pane_ParamLimits

0xe8d6,	// (0x0002de2b) grid_tb_ext_pane

0xe911,	// (0x0002de66) cell_tb_ext_pane_ParamLimits

0xe911,	// (0x0002de66) cell_tb_ext_pane

0xe939,	// (0x0002de8e) cell_tb_ext_pane_g1_ParamLimits

0xe939,	// (0x0002de8e) cell_tb_ext_pane_g1

0x928b,	// (0x000287e0) cell_tb_ext_pane_t1

0x38d8,	// (0x00022e2d) list_highlight_pane_cp11_ParamLimits

0x38d8,	// (0x00022e2d) list_highlight_pane_cp11

0xbfb7,	// (0x0002b50c) popup_uni_indicator_window_ParamLimits

0xbfb7,	// (0x0002b50c) popup_uni_indicator_window

0x3ebe,	// (0x00023413) bg_popup_sub_pane_cp14

0x92a6,	// (0x000287fb) list_uniindi_pane

0x92b2,	// (0x00028807) uniindi_top_pane

0x38d8,	// (0x00022e2d) bg_uniindi_top_pane

0x92d1,	// (0x00028826) uniindi_top_pane_g1

0x92e7,	// (0x0002883c) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0002f261) uniindi_top_pane_g

0x9311,	// (0x00028866) uniindi_top_pane_t1

0x933b,	// (0x00028890) list_single_uniindi_pane_ParamLimits

0x933b,	// (0x00028890) list_single_uniindi_pane

0x79c2,	// (0x00026f17) bg_uniindi_top_pane_g1

0x934e,	// (0x000288a3) list_single_uniindi_pane_g1

0x9361,	// (0x000288b6) list_single_uniindi_pane_t1

0x355b,	// (0x00022ab0) control_bg_pane

0x9386,	// (0x000288db) bg_sctrl_sk_pane_cp1

0x938f,	// (0x000288e4) bg_sctrl_sk_pane_cp2

0x9398,	// (0x000288ed) control_bg_pane_g1

0x93a1,	// (0x000288f6) control_bg_pane_g2

0x0001,

0xfd15,	// (0x0002f26a) control_bg_pane_g

0x73f2,	// (0x00026947) cell_indicator_nsta_pane_g1_ParamLimits

0xdfb7,	// (0x0002d50c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002efde) cell_indicator_nsta_pane_g_ParamLimits

0x0e46,	// (0x0002039b) form2_midp_time_pane_t1_ParamLimits

0x2664,	// (0x00021bb9) main_idle_act4_pane_ParamLimits

0x2664,	// (0x00021bb9) main_idle_act4_pane

0xc8a7,	// (0x0002bdfc) popup_tb_extension_window_ParamLimits

0xe8f8,	// (0x0002de4d) tb_ext_find_pane_ParamLimits

0xe8f8,	// (0x0002de4d) tb_ext_find_pane

0x93aa,	// (0x000288ff) ai_gene_pane_1_cp1

0x4c8f,	// (0x000241e4) ai_gene_pane_2_cp1

0x93b2,	// (0x00028907) list_single_idle_plugin_calendar_pane

0x93bb,	// (0x00028910) list_single_idle_plugin_notification_pane

0x93c4,	// (0x00028919) list_single_idle_plugin_player_pane

0xe956,	// (0x0002deab) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe956,	// (0x0002deab) list_single_idle_plugin_shortcut_pane

0xe97e,	// (0x0002ded3) main_idle_act4_pane_t1

0xe994,	// (0x0002dee9) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0002f26f) main_idle_act4_pane_t

0xe9aa,	// (0x0002deff) middle_sk_idle_act4_pane_ParamLimits

0xe9aa,	// (0x0002deff) middle_sk_idle_act4_pane

0xe9c6,	// (0x0002df1b) popup_clock_digital_analogue_window_cp2

0xe9ee,	// (0x0002df43) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9ee,	// (0x0002df43) shortcut_wheel_idle_act4_pane

0x79c2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g1

0x79c2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g2

0x79c2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g3

0x79c2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g4

0x79c2,	// (0x00026f17) shortcut_wheel_idle_act4_pane_g5

0x9457,	// (0x000289ac) shortcut_wheel_idle_act4_pane_g6

0x945f,	// (0x000289b4) shortcut_wheel_idle_act4_pane_g7

0x9467,	// (0x000289bc) shortcut_wheel_idle_act4_pane_g8

0x946f,	// (0x000289c4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0002f274) shortcut_wheel_idle_act4_pane_g

0xdb41,	// (0x0002d096) middle_sk_idle_act4_pane_g1_ParamLimits

0xdb41,	// (0x0002d096) middle_sk_idle_act4_pane_g1

0xea6b,	// (0x0002dfc0) middle_sk_idle_act4_pane_g2_ParamLimits

0xea6b,	// (0x0002dfc0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0002f297) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0002f297) middle_sk_idle_act4_pane_g

0xea83,	// (0x0002dfd8) middle_sk_idle_act4_pane_t1_ParamLimits

0xea83,	// (0x0002dfd8) middle_sk_idle_act4_pane_t1

0xeab2,	// (0x0002e007) grid_ai_shortcut_pane_ParamLimits

0xeab2,	// (0x0002e007) grid_ai_shortcut_pane

0xeacf,	// (0x0002e024) list_highlight_pane_cp16_ParamLimits

0xeacf,	// (0x0002e024) list_highlight_pane_cp16

0xeadc,	// (0x0002e031) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeadc,	// (0x0002e031) list_single_idle_plugin_shortcut_pane_g1

0xeae8,	// (0x0002e03d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeae8,	// (0x0002e03d) list_single_idle_plugin_shortcut_pane_g2

0xeb04,	// (0x0002e059) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb04,	// (0x0002e059) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x0002f29c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x0002f29c) list_single_idle_plugin_shortcut_pane_g

0xeb19,	// (0x0002e06e) cell_ai_shortcut_pane_ParamLimits

0xeb19,	// (0x0002e06e) cell_ai_shortcut_pane

0xeb2f,	// (0x0002e084) cell_ai_shortcut_pane_g1_ParamLimits

0xeb2f,	// (0x0002e084) cell_ai_shortcut_pane_g1

0x93aa,	// (0x000288ff) ai_gene_pane_1_cp2

0x959f,	// (0x00028af4) ai_gene_pane_2_cp2

0x95a7,	// (0x00028afc) list_highlight_pane_cp15

0x95b0,	// (0x00028b05) list_single_idle_plugin_calendar_pane_g1

0x95a7,	// (0x00028afc) list_highlight_pane_cp17

0x95b8,	// (0x00028b0d) list_single_idle_plugin_calendar_pane_g1_copy1

0x95c0,	// (0x00028b15) list_single_idle_plugin_player_pane_g1

0x6d3e,	// (0x00026293) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0002f2a3) list_single_idle_plugin_player_pane_g

0x95c8,	// (0x00028b1d) list_single_idle_plugin_player_pane_t1

0x95d6,	// (0x00028b2b) list_single_idle_plugin_player_pane_t2

0x95e4,	// (0x00028b39) list_single_idle_plugin_player_pane_t3

0x95f2,	// (0x00028b47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0002f2a8) list_single_idle_plugin_player_pane_t

0x9600,	// (0x00028b55) wait_bar_pane_cp15

0x9608,	// (0x00028b5d) grid_ai_notification_pane

0x6d3e,	// (0x00026293) list_single_idle_plugin_notification_pane_g1

0xeb51,	// (0x0002e0a6) cell_ai_notification_pane_ParamLimits

0xeb51,	// (0x0002e0a6) cell_ai_notification_pane

0x961e,	// (0x00028b73) cell_ai_notification_pane_g1

0x9626,	// (0x00028b7b) cell_ai_notification_pane_t1

0xeb5e,	// (0x0002e0b3) tb_ext_find_button_pane

0xeb66,	// (0x0002e0bb) tb_ext_find_pane_g1

0xeb6e,	// (0x0002e0c3) tb_ext_find_pane_t1

0x4541,	// (0x00023a96) tb_ext_find_button_pane_g1

0x9652,	// (0x00028ba7) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0002f2b1) tb_ext_find_button_pane_g

0xe97e,	// (0x0002ded3) main_idle_act4_pane_t1_ParamLimits

0xe994,	// (0x0002dee9) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0002f26f) main_idle_act4_pane_t_ParamLimits

0xe9c6,	// (0x0002df1b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9de,	// (0x0002df33) sat_plugin_idle_act4_pane_ParamLimits

0xe9de,	// (0x0002df33) sat_plugin_idle_act4_pane

0xeb7c,	// (0x0002e0d1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb7c,	// (0x0002e0d1) sat_plugin_idle_act4_pane_t1

0xeb94,	// (0x0002e0e9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb94,	// (0x0002e0e9) sat_plugin_idle_act4_pane_t2

0xebac,	// (0x0002e101) sat_plugin_idle_act4_pane_t3_ParamLimits

0xebac,	// (0x0002e101) sat_plugin_idle_act4_pane_t3

0xebc4,	// (0x0002e119) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebc4,	// (0x0002e119) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0002f2b6) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0002f2b6) sat_plugin_idle_act4_pane_t

0x1447,	// (0x0002099c) popup_battery_window_ParamLimits

0x1447,	// (0x0002099c) popup_battery_window

0x38d8,	// (0x00022e2d) bg_popup_sub_pane_cp25_ParamLimits

0x38d8,	// (0x00022e2d) bg_popup_sub_pane_cp25

0x96a7,	// (0x00028bfc) popup_battery_window_g1_ParamLimits

0x96a7,	// (0x00028bfc) popup_battery_window_g1

0x96b3,	// (0x00028c08) popup_battery_window_t1_ParamLimits

0x96b3,	// (0x00028c08) popup_battery_window_t1

0x96c5,	// (0x00028c1a) popup_battery_window_t2_ParamLimits

0x96c5,	// (0x00028c1a) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x0002f2bf) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x0002f2bf) popup_battery_window_t

0xd490,	// (0x0002c9e5) midp_canvas_pane_ParamLimits

0xd4ed,	// (0x0002ca42) midp_keypad_pane_ParamLimits

0xd4ed,	// (0x0002ca42) midp_keypad_pane

0x4e92,	// (0x000243e7) main_midp_pane_ParamLimits

0x746c,	// (0x000269c1) signal_pane_g2_cp_ParamLimits

0xebdc,	// (0x0002e131) aid_size_cell_midp_keypad_ParamLimits

0xebdc,	// (0x0002e131) aid_size_cell_midp_keypad

0xebfa,	// (0x0002e14f) midp_keyp_game_grid_pane_ParamLimits

0xebfa,	// (0x0002e14f) midp_keyp_game_grid_pane

0xec21,	// (0x0002e176) midp_keyp_rocker_pane_ParamLimits

0xec21,	// (0x0002e176) midp_keyp_rocker_pane

0xec72,	// (0x0002e1c7) midp_keyp_sk_left_pane_ParamLimits

0xec72,	// (0x0002e1c7) midp_keyp_sk_left_pane

0xecc6,	// (0x0002e21b) midp_keyp_sk_right_pane_ParamLimits

0xecc6,	// (0x0002e21b) midp_keyp_sk_right_pane

0x355b,	// (0x00022ab0) bg_button_pane_cp03

0xed1a,	// (0x0002e26f) midp_keyp_sk_left_pane_g1

0x355b,	// (0x00022ab0) bg_button_pane_cp04

0xed1a,	// (0x0002e26f) midp_keyp_sk_right_pane_g1

0x79c2,	// (0x00026f17) midp_keyp_rocker_pane_g1

0xed23,	// (0x0002e278) keyp_game_cell_pane_ParamLimits

0xed23,	// (0x0002e278) keyp_game_cell_pane

0x355b,	// (0x00022ab0) bg_button_pane_cp02

0xed47,	// (0x0002e29c) keyp_game_cell_pane_g1

0xbf52,	// (0x0002b4a7) popup_fep_vkb2_window_ParamLimits

0xbf52,	// (0x0002b4a7) popup_fep_vkb2_window

0xcaa5,	// (0x0002bffa) aid_size_cell_vkb2_ParamLimits

0xcaa5,	// (0x0002bffa) aid_size_cell_vkb2

0xcadb,	// (0x0002c030) popup_fep_vkb2_window_g1_ParamLimits

0xcadb,	// (0x0002c030) popup_fep_vkb2_window_g1

0xcb2b,	// (0x0002c080) vkb2_area_bottom_pane_ParamLimits

0xcb2b,	// (0x0002c080) vkb2_area_bottom_pane

0xcb7f,	// (0x0002c0d4) vkb2_area_keypad_pane_ParamLimits

0xcb7f,	// (0x0002c0d4) vkb2_area_keypad_pane

0xcbc7,	// (0x0002c11c) vkb2_area_top_pane_ParamLimits

0xcbc7,	// (0x0002c11c) vkb2_area_top_pane

0xcc4d,	// (0x0002c1a2) vkb2_top_entry_pane_ParamLimits

0xcc4d,	// (0x0002c1a2) vkb2_top_entry_pane

0xcc7a,	// (0x0002c1cf) vkb2_top_grid_left_pane_ParamLimits

0xcc7a,	// (0x0002c1cf) vkb2_top_grid_left_pane

0xcc9a,	// (0x0002c1ef) vkb2_top_grid_right_pane_ParamLimits

0xcc9a,	// (0x0002c1ef) vkb2_top_grid_right_pane

0x2cce,	// (0x00022223) vkb2_cell_keypad_pane_ParamLimits

0x2cce,	// (0x00022223) vkb2_cell_keypad_pane

0xcce0,	// (0x0002c235) vkb2_area_bottom_grid_pane_ParamLimits

0xcce0,	// (0x0002c235) vkb2_area_bottom_grid_pane

0xcd0a,	// (0x0002c25f) vkb2_area_bottom_pane_g1_ParamLimits

0xcd0a,	// (0x0002c25f) vkb2_area_bottom_pane_g1

0xcd30,	// (0x0002c285) vkb2_area_bottom_pane_g2_ParamLimits

0xcd30,	// (0x0002c285) vkb2_area_bottom_pane_g2

0xcd61,	// (0x0002c2b6) vkb2_area_bottom_pane_g3_ParamLimits

0xcd61,	// (0x0002c2b6) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0002f2c4) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0002f2c4) vkb2_area_bottom_pane_g

0x2e78,	// (0x000223cd) vkb2_top_cell_left_pane_ParamLimits

0x2e78,	// (0x000223cd) vkb2_top_cell_left_pane

0xed50,	// (0x0002e2a5) vkb2_top_entry_pane_g1_ParamLimits

0xed50,	// (0x0002e2a5) vkb2_top_entry_pane_g1

0xed5e,	// (0x0002e2b3) vkb2_top_entry_pane_t1_ParamLimits

0xed5e,	// (0x0002e2b3) vkb2_top_entry_pane_t1

0x9876,	// (0x00028dcb) vkb2_top_entry_pane_t2_ParamLimits

0x9876,	// (0x00028dcb) vkb2_top_entry_pane_t2

0x98a8,	// (0x00028dfd) vkb2_top_entry_pane_t3_ParamLimits

0x98a8,	// (0x00028dfd) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x0002f2cb) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x0002f2cb) vkb2_top_entry_pane_t

0xcdcb,	// (0x0002c320) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdcb,	// (0x0002c320) vkb2_top_grid_right_pane_g1

0x2edb,	// (0x00022430) vkb2_top_grid_right_pane_g2_ParamLimits

0x2edb,	// (0x00022430) vkb2_top_grid_right_pane_g2

0x2ef3,	// (0x00022448) vkb2_top_grid_right_pane_g3_ParamLimits

0x2ef3,	// (0x00022448) vkb2_top_grid_right_pane_g3

0xcde1,	// (0x0002c336) vkb2_top_grid_right_pane_g4_ParamLimits

0xcde1,	// (0x0002c336) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0002f2d2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0002f2d2) vkb2_top_grid_right_pane_g

0x2f21,	// (0x00022476) vkb2_top_cell_left_pane_g1

0x2f38,	// (0x0002248d) vkb2_cell_keypad_pane_g1_ParamLimits

0x2f38,	// (0x0002248d) vkb2_cell_keypad_pane_g1

0x98cc,	// (0x00028e21) vkb2_cell_keypad_pane_t1_ParamLimits

0x98cc,	// (0x00028e21) vkb2_cell_keypad_pane_t1

0x2f46,	// (0x0002249b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2f46,	// (0x0002249b) vkb2_cell_bottom_grid_pane

0x2f7f,	// (0x000224d4) vkb2_cell_bottom_grid_pane_g1

0xea0f,	// (0x0002df64) aid_call2_pane_cp02

0xea17,	// (0x0002df6c) aid_call_pane_cp02

0xea1f,	// (0x0002df74) clock_digital_number_pane_cp10

0xea27,	// (0x0002df7c) clock_digital_number_pane_cp11

0xea2f,	// (0x0002df84) clock_digital_number_pane_cp12

0xea37,	// (0x0002df8c) clock_digital_number_pane_cp13

0xea3f,	// (0x0002df94) clock_digital_separator_pane_cp10

0x4541,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g1

0x4541,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g2

0xea47,	// (0x0002df9c) popup_clock_digital_analogue_window_cp2_g3

0x4541,	// (0x00023a96) popup_clock_digital_analogue_window_cp2_g4

0xea47,	// (0x0002df9c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0002f287) popup_clock_digital_analogue_window_cp2_g

0xea4f,	// (0x0002dfa4) popup_clock_digital_analogue_window_cp2_t1

0xea5d,	// (0x0002dfb2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0002f292) popup_clock_digital_analogue_window_cp2_t

0x79c2,	// (0x00026f17) clock_digital_number_pane_cp10_g1

0x79c2,	// (0x00026f17) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f07a) clock_digital_number_pane_cp10_g

0x79c2,	// (0x00026f17) clock_digital_separator_pane_cp10_g1

0x79c2,	// (0x00026f17) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f07a) clock_digital_separator_pane_cp10_g

0x92f3,	// (0x00028848) uniindi_top_pane_g3

0x9304,	// (0x00028859) uniindi_top_pane_g4

0x2d59,	// (0x000222ae) vkb2_row_keypad_pane_ParamLimits

0x2d59,	// (0x000222ae) vkb2_row_keypad_pane

0x2f9b,	// (0x000224f0) vkb2_cell_t_keypad_pane_ParamLimits

0x2f9b,	// (0x000224f0) vkb2_cell_t_keypad_pane

0x2fab,	// (0x00022500) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2fab,	// (0x00022500) vkb2_cell_t_keypad_pane_cp08

0x2fbe,	// (0x00022513) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2fbe,	// (0x00022513) vkb2_cell_t_keypad_pane_cp09

0x2fd2,	// (0x00022527) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2fd2,	// (0x00022527) vkb2_cell_t_keypad_pane_cp01

0x2fe3,	// (0x00022538) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2fe3,	// (0x00022538) vkb2_cell_t_keypad_pane_cp02

0x2ff4,	// (0x00022549) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2ff4,	// (0x00022549) vkb2_cell_t_keypad_pane_cp03

0x3005,	// (0x0002255a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3005,	// (0x0002255a) vkb2_cell_t_keypad_pane_cp04

0x3016,	// (0x0002256b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3016,	// (0x0002256b) vkb2_cell_t_keypad_pane_cp05

0x3027,	// (0x0002257c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3027,	// (0x0002257c) vkb2_cell_t_keypad_pane_cp06

0x3038,	// (0x0002258d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3038,	// (0x0002258d) vkb2_cell_t_keypad_pane_cp07

0x3049,	// (0x0002259e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3049,	// (0x0002259e) vkb2_cell_t_keypad_pane_cp10

0x7c40,	// (0x00027195) vkb2_cell_t_keypad_pane_g1

0x98e3,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1

0x355b,	// (0x00022ab0) popup_grid_graphic2_window

0xed97,	// (0x0002e2ec) aid_size_cell_graphic2_ParamLimits

0xed97,	// (0x0002e2ec) aid_size_cell_graphic2

0xedd5,	// (0x0002e32a) bg_popup_window_pane_cp21_ParamLimits

0xedd5,	// (0x0002e32a) bg_popup_window_pane_cp21

0xede3,	// (0x0002e338) graphic2_pages_pane_ParamLimits

0xede3,	// (0x0002e338) graphic2_pages_pane

0xee46,	// (0x0002e39b) grid_graphic2_control_pane_ParamLimits

0xee46,	// (0x0002e39b) grid_graphic2_control_pane

0xee8e,	// (0x0002e3e3) grid_graphic2_pane_ParamLimits

0xee8e,	// (0x0002e3e3) grid_graphic2_pane

0xef15,	// (0x0002e46a) cell_graphic2_pane

0x355b,	// (0x00022ab0) main_comp_mode_pane

0x8b73,	// (0x000280c8) list_ai3_gene_pane_ParamLimits

0xe756,	// (0x0002dcab) bg_popup_window_pane_cp19_ParamLimits

0x8f49,	// (0x0002849e) bg_touch_area_indi_pane_ParamLimits

0x8f49,	// (0x0002849e) bg_touch_area_indi_pane

0x8f5f,	// (0x000284b4) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f5f,	// (0x000284b4) bg_touch_area_indi_pane_cp01

0x8f75,	// (0x000284ca) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f75,	// (0x000284ca) bg_touch_area_indi_pane_cp02

0x8f8d,	// (0x000284e2) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f8d,	// (0x000284e2) bg_touch_area_indi_pane_cp03

0x8fa7,	// (0x000284fc) popup_slider_window_g1_ParamLimits

0x8fc3,	// (0x00028518) popup_slider_window_g2_ParamLimits

0x8fdf,	// (0x00028534) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002f21c) popup_slider_window_g_ParamLimits

0x903b,	// (0x00028590) popup_slider_window_t1_ParamLimits

0x90af,	// (0x00028604) small_volume_slider_vertical_pane_ParamLimits

0xef15,	// (0x0002e46a) cell_graphic2_pane_ParamLimits

0xef72,	// (0x0002e4c7) bg_button_pane_cp10_ParamLimits

0xef72,	// (0x0002e4c7) bg_button_pane_cp10

0xef85,	// (0x0002e4da) bg_button_pane_cp11_ParamLimits

0xef85,	// (0x0002e4da) bg_button_pane_cp11

0xef98,	// (0x0002e4ed) graphic2_pages_pane_g1_ParamLimits

0xef98,	// (0x0002e4ed) graphic2_pages_pane_g1

0xefb3,	// (0x0002e508) graphic2_pages_pane_g2_ParamLimits

0xefb3,	// (0x0002e508) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0002f2e0) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0002f2e0) graphic2_pages_pane_g

0xefcb,	// (0x0002e520) graphic2_pages_pane_t1_ParamLimits

0xefcb,	// (0x0002e520) graphic2_pages_pane_t1

0xefe3,	// (0x0002e538) cell_graphic2_control_pane_ParamLimits

0xefe3,	// (0x0002e538) cell_graphic2_control_pane

0xf015,	// (0x0002e56a) cell_graphic2_pane_g1_ParamLimits

0xf015,	// (0x0002e56a) cell_graphic2_pane_g1

0xdb4f,	// (0x0002d0a4) cell_graphic2_pane_g2_ParamLimits

0xdb4f,	// (0x0002d0a4) cell_graphic2_pane_g2

0xee1f,	// (0x0002e374) cell_graphic2_pane_g3_ParamLimits

0xee1f,	// (0x0002e374) cell_graphic2_pane_g3

0xdb5c,	// (0x0002d0b1) cell_graphic2_pane_g4_ParamLimits

0xdb5c,	// (0x0002d0b1) cell_graphic2_pane_g4

0xf022,	// (0x0002e577) cell_graphic2_pane_g5_ParamLimits

0xf022,	// (0x0002e577) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0002f2e5) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0002f2e5) cell_graphic2_pane_g

0xf042,	// (0x0002e597) cell_graphic2_pane_t1_ParamLimits

0xf042,	// (0x0002e597) cell_graphic2_pane_t1

0x6095,	// (0x000255ea) grid_highlight_pane_cp11_ParamLimits

0x6095,	// (0x000255ea) grid_highlight_pane_cp11

0x38d8,	// (0x00022e2d) bg_button_pane_cp05

0xf077,	// (0x0002e5cc) cell_graphic2_control_pane_g1

0x79c2,	// (0x00026f17) bg_touch_area_indi_pane_g1

0x9bb3,	// (0x00029108) aid_cmod_rocker_key_size

0x9bbd,	// (0x00029112) aid_cmode_itu_key_size

0x9bc7,	// (0x0002911c) main_cmode_video_pane

0x9bd1,	// (0x00029126) main_comp_mode_itu_pane

0x9bdd,	// (0x00029132) main_comp_mode_rocker_pane

0x9be9,	// (0x0002913e) cell_cmode_rocker_pane_ParamLimits

0x9be9,	// (0x0002913e) cell_cmode_rocker_pane

0x9bfb,	// (0x00029150) cell_cmode_itu_pane_ParamLimits

0x9bfb,	// (0x00029150) cell_cmode_itu_pane

0x3ebe,	// (0x00023413) bg_button_pane_cp06_ParamLimits

0x3ebe,	// (0x00023413) bg_button_pane_cp06

0x7c40,	// (0x00027195) cell_cmode_rocker_pane_g1_ParamLimits

0x7c40,	// (0x00027195) cell_cmode_rocker_pane_g1

0x9153,	// (0x000286a8) cell_cmode_rocker_pane_g2_ParamLimits

0x9153,	// (0x000286a8) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0002f2f5) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0002f2f5) cell_cmode_rocker_pane_g

0x355b,	// (0x00022ab0) bg_button_pane_cp07

0x9c10,	// (0x00029165) cell_cmode_itu_pane_g1

0x9c19,	// (0x0002916e) cell_cmode_itu_pane_t1

0x9c27,	// (0x0002917c) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0002f2fa) cell_cmode_itu_pane_t

0x9376,	// (0x000288cb) aid_touch_ctrl_left

0x937e,	// (0x000288d3) aid_touch_ctrl_right

0x355b,	// (0x00022ab0) compa_mode_pane

0xf09d,	// (0x0002e5f2) aid_cmod_rocker_key_size_cp

0xf0a7,	// (0x0002e5fc) aid_cmode_itu_key_size_cp

0x9c49,	// (0x0002919e) compa_mode_pane_g1

0x9c51,	// (0x000291a6) compa_mode_pane_g2

0x9c59,	// (0x000291ae) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0002f2ff) compa_mode_pane_g

0xf0b1,	// (0x0002e606) main_comp_mode_itu_pane_cp

0xf0b9,	// (0x0002e60e) main_comp_mode_rocker_pane_cp

0xf0c1,	// (0x0002e616) cell_cmode_itu_pane_cp_ParamLimits

0xf0c1,	// (0x0002e616) cell_cmode_itu_pane_cp

0xf0d6,	// (0x0002e62b) cell_cmode_rocker_pane_cp_ParamLimits

0xf0d6,	// (0x0002e62b) cell_cmode_rocker_pane_cp

0x3ebe,	// (0x00023413) bg_button_pane_cp06_cp_ParamLimits

0x3ebe,	// (0x00023413) bg_button_pane_cp06_cp

0x7c40,	// (0x00027195) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c40,	// (0x00027195) cell_cmode_rocker_pane_g1_cp

0x79c2,	// (0x00026f17) cell_cmode_rocker_pane_g2_cp

0x355b,	// (0x00022ab0) bg_button_pane_cp07_cp

0xf0e8,	// (0x0002e63d) cell_cmode_itu_pane_g1_cp

0xf0f1,	// (0x0002e646) cell_cmode_itu_pane_t1_cp

0xf0f1,	// (0x0002e646) cell_cmode_itu_pane_t2_cp

0xddca,	// (0x0002d31f) settings_code_pane_cp2

0x364f,	// (0x00022ba4) bg_popup_window_pane_cp3_ParamLimits

0x3ab2,	// (0x00023007) heading_pane_cp3_ParamLimits

0x3abe,	// (0x00023013) listscroll_popup_graphic_pane_ParamLimits

0x2672,	// (0x00021bc7) fep_hwr_aid_pane_ParamLimits

0x2a3b,	// (0x00021f90) aid_touch_sctrl_top_ParamLimits

0x2a48,	// (0x00021f9d) sctrl_sk_top_pane_g1_ParamLimits

0x7c40,	// (0x00027195) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002f235) sctrl_sk_top_pane_g_ParamLimits

0x2a55,	// (0x00021faa) sctrl_sk_top_pane_t1_ParamLimits

0x2a3b,	// (0x00021f90) aid_touch_sctrl_bottom_ParamLimits

0x2a55,	// (0x00021faa) sctrl_sk_bottom_pane_t1_ParamLimits

0x92bf,	// (0x00028814) aid_area_touch_clock

0xcc0f,	// (0x0002c164) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc0f,	// (0x0002c164) aid_vkb2_area_top_pane_cell

0xccba,	// (0x0002c20f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccba,	// (0x0002c20f) aid_vkb2_area_bottom_pane_cell

0x982e,	// (0x00028d83) popup_char_count_window

0x9ca6,	// (0x000291fb) popup_char_count_window_g1

0x9caf,	// (0x00029204) popup_char_count_window_g2

0x9cb8,	// (0x0002920d) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0002f306) popup_char_count_window_g

0x9cc1,	// (0x00029216) popup_char_count_window_t1

0x2af6,	// (0x0002204b) popup_fep_char_preview_window_ParamLimits

0x2af6,	// (0x0002204b) popup_fep_char_preview_window

0xcc2f,	// (0x0002c184) vkb2_top_candi_pane_ParamLimits

0xcc2f,	// (0x0002c184) vkb2_top_candi_pane

0xf0ff,	// (0x0002e654) cell_vkb2_top_candi_pane_ParamLimits

0xf0ff,	// (0x0002e654) cell_vkb2_top_candi_pane

0x5a21,	// (0x00024f76) bg_popup_fep_char_preview_window_ParamLimits

0x5a21,	// (0x00024f76) bg_popup_fep_char_preview_window

0x305e,	// (0x000225b3) popup_fep_char_preview_window_t1_ParamLimits

0x305e,	// (0x000225b3) popup_fep_char_preview_window_t1

0x9d3d,	// (0x00029292) bg_popup_fep_char_preview_window_g1

0x9d45,	// (0x0002929a) bg_popup_fep_char_preview_window_g2

0x9d4d,	// (0x000292a2) bg_popup_fep_char_preview_window_g3

0x9d55,	// (0x000292aa) bg_popup_fep_char_preview_window_g4

0x9d5d,	// (0x000292b2) bg_popup_fep_char_preview_window_g5

0x3098,	// (0x000225ed) bg_popup_fep_char_preview_window_g6

0x9d65,	// (0x000292ba) bg_popup_fep_char_preview_window_g7

0x9d6d,	// (0x000292c2) bg_popup_fep_char_preview_window_g8

0x9d75,	// (0x000292ca) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb8,	// (0x0002f30d) bg_popup_fep_char_preview_window_g

0x7c40,	// (0x00027195) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7c40,	// (0x00027195) cell_vkb2_top_candi_pane_g1

0x8060,	// (0x000275b5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8060,	// (0x000275b5) cell_vkb2_top_candi_pane_g2

0x8081,	// (0x000275d6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8081,	// (0x000275d6) cell_vkb2_top_candi_pane_g3

0x30a0,	// (0x000225f5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x30a0,	// (0x000225f5) cell_vkb2_top_candi_pane_g4

0x9d1c,	// (0x00029271) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d1c,	// (0x00029271) cell_vkb2_top_candi_pane_g5

0x9153,	// (0x000286a8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9153,	// (0x000286a8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0002f320) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0002f320) cell_vkb2_top_candi_pane_g

0x30c1,	// (0x00022616) cell_vkb2_top_candi_pane_t1

0x24d2,	// (0x00021a27) aid_size_touch_slider_mark_ParamLimits

0x24d2,	// (0x00021a27) aid_size_touch_slider_mark

0xee2c,	// (0x0002e381) grid_graphic2_catg_pane_ParamLimits

0xee2c,	// (0x0002e381) grid_graphic2_catg_pane

0xeee8,	// (0x0002e43d) popup_grid_graphic2_window_t1_ParamLimits

0xeee8,	// (0x0002e43d) popup_grid_graphic2_window_t1

0xeefe,	// (0x0002e453) popup_grid_graphic2_window_t2_ParamLimits

0xeefe,	// (0x0002e453) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x0002f2db) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x0002f2db) popup_grid_graphic2_window_t

0x38d8,	// (0x00022e2d) bg_button_pane_cp05_ParamLimits

0xf077,	// (0x0002e5cc) cell_graphic2_control_pane_g1_ParamLimits

0xf165,	// (0x0002e6ba) cell_graphic2_catg_pane_ParamLimits

0xf165,	// (0x0002e6ba) cell_graphic2_catg_pane

0x355b,	// (0x00022ab0) bg_button_pane_cp12

0xf177,	// (0x0002e6cc) cell_graphic2_catg_pane_g1

0x928b,	// (0x000287e0) cell_tb_ext_pane_t1_ParamLimits

0x2e98,	// (0x000223ed) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2e98,	// (0x000223ed) vkb2_top_cell_right_narrow_pane

0x2eb0,	// (0x00022405) vkb2_top_cell_right_wide_pane_ParamLimits

0x2eb0,	// (0x00022405) vkb2_top_cell_right_wide_pane

0x2664,	// (0x00021bb9) bg_vkb2_func_pane_ParamLimits

0x2664,	// (0x00021bb9) bg_vkb2_func_pane

0x2f21,	// (0x00022476) vkb2_top_cell_left_pane_g1_ParamLimits

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp03

0x2f7f,	// (0x000224d4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x53a4,	// (0x000248f9) bg_vkb2_func_pane_g1

0x53ac,	// (0x00024901) bg_vkb2_func_pane_g2

0x53bc,	// (0x00024911) bg_vkb2_func_pane_g3

0x53b4,	// (0x00024909) bg_vkb2_func_pane_g4

0x53c4,	// (0x00024919) bg_vkb2_func_pane_g5

0x53cc,	// (0x00024921) bg_vkb2_func_pane_g6

0x53d4,	// (0x00024929) bg_vkb2_func_pane_g7

0x53dc,	// (0x00024931) bg_vkb2_func_pane_g8

0x539c,	// (0x000248f1) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0002f32d) bg_vkb2_func_pane_g

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp01

0x2f21,	// (0x00022476) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2f21,	// (0x00022476) vkb2_top_cell_right_wide_pane_g1

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2664,	// (0x00021bb9) bg_vkb2_fuc_pane_cp02

0x2f7f,	// (0x000224d4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2f7f,	// (0x000224d4) vkb2_top_cell_right_narrow_pane_g1

0xe696,	// (0x0002dbeb) aid_touch_area_decrease_ParamLimits

0xe696,	// (0x0002dbeb) aid_touch_area_decrease

0xe6ca,	// (0x0002dc1f) aid_touch_area_increase_ParamLimits

0xe6ca,	// (0x0002dc1f) aid_touch_area_increase

0xe6f2,	// (0x0002dc47) aid_touch_area_mute_ParamLimits

0xe6f2,	// (0x0002dc47) aid_touch_area_mute

0xe722,	// (0x0002dc77) aid_touch_area_slider_ParamLimits

0xe722,	// (0x0002dc77) aid_touch_area_slider

0xe762,	// (0x0002dcb7) popup_slider_window_g4_ParamLimits

0xe762,	// (0x0002dcb7) popup_slider_window_g4

0xe78a,	// (0x0002dcdf) popup_slider_window_g5_ParamLimits

0xe78a,	// (0x0002dcdf) popup_slider_window_g5

0xe7be,	// (0x0002dd13) popup_slider_window_g6_ParamLimits

0xe7be,	// (0x0002dd13) popup_slider_window_g6

0x9069,	// (0x000285be) popup_slider_window_t2_ParamLimits

0x9069,	// (0x000285be) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002f229) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002f229) popup_slider_window_t

0xe7da,	// (0x0002dd2f) slider_pane_ParamLimits

0xe7da,	// (0x0002dd2f) slider_pane

0x9d98,	// (0x000292ed) slider_pane_g1_ParamLimits

0x9d98,	// (0x000292ed) slider_pane_g1

0x9dac,	// (0x00029301) slider_pane_g2_ParamLimits

0x9dac,	// (0x00029301) slider_pane_g2

0x9dc2,	// (0x00029317) slider_pane_g3_ParamLimits

0x9dc2,	// (0x00029317) slider_pane_g3

0x0003,

0xfdeb,	// (0x0002f340) slider_pane_g_ParamLimits

0xfdeb,	// (0x0002f340) slider_pane_g

0xc8ef,	// (0x0002be44) popup_tb_float_extension_window_ParamLimits

0xc8ef,	// (0x0002be44) popup_tb_float_extension_window

0x9dee,	// (0x00029343) aid_size_cell_tb_float_ext

0x355b,	// (0x00022ab0) bg_popup_sub_window_cp28

0x9dfa,	// (0x0002934f) grid_tb_float_ext_pane

0x9e04,	// (0x00029359) cell_tb_float_ext_pane_ParamLimits

0x9e04,	// (0x00029359) cell_tb_float_ext_pane

0x9e1e,	// (0x00029373) cell_tb_float_ext_pane_g1

0x9e27,	// (0x0002937c) grid_highlight_pane_cp12

0xca18,	// (0x0002bf6d) cell_last_hwr_side_pane_ParamLimits

0xca18,	// (0x0002bf6d) cell_last_hwr_side_pane

0x79c2,	// (0x00026f17) cell_last_hwr_side_pane_g1

0x9e30,	// (0x00029385) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x0002f349) cell_last_hwr_side_pane_g

0xcd96,	// (0x0002c2eb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd96,	// (0x0002c2eb) vkb2_area_bottom_space_btn_pane

0x7c40,	// (0x00027195) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x98e3,	// (0x00028e38) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x30c1,	// (0x00022616) cell_vkb2_top_candi_pane_t1_ParamLimits

0x30e0,	// (0x00022635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x30e0,	// (0x00022635) vkb2_area_bottom_space_btn_pane_g1

0x311a,	// (0x0002266f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x311a,	// (0x0002266f) vkb2_area_bottom_space_btn_pane_g2

0x3150,	// (0x000226a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3150,	// (0x000226a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x0002f34e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x0002f34e) vkb2_area_bottom_space_btn_pane_g

0x2719,	// (0x00021c6e) cel_fep_hwr_func_pane_ParamLimits

0x2719,	// (0x00021c6e) cel_fep_hwr_func_pane

0xc9ed,	// (0x0002bf42) cell_hwr_side_button_pane_ParamLimits

0xc9ed,	// (0x0002bf42) cell_hwr_side_button_pane

0x92bf,	// (0x00028814) aid_area_touch_clock_ParamLimits

0x38d8,	// (0x00022e2d) bg_uniindi_top_pane_ParamLimits

0x92d1,	// (0x00028826) uniindi_top_pane_g1_ParamLimits

0x92e7,	// (0x0002883c) uniindi_top_pane_g2_ParamLimits

0x92f3,	// (0x00028848) uniindi_top_pane_g3_ParamLimits

0x9304,	// (0x00028859) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0002f261) uniindi_top_pane_g_ParamLimits

0x9311,	// (0x00028866) uniindi_top_pane_t1_ParamLimits

0x38d8,	// (0x00022e2d) bg_vkb2_func_pane_cp01_ParamLimits

0x38d8,	// (0x00022e2d) bg_vkb2_func_pane_cp01

0x9e39,	// (0x0002938e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e39,	// (0x0002938e) cel_fep_hwr_func_pane_g1

0x38d8,	// (0x00022e2d) bg_vkb2_func_pane_cp02_ParamLimits

0x38d8,	// (0x00022e2d) bg_vkb2_func_pane_cp02

0x9e39,	// (0x0002938e) cell_hwr_side_button_pane_g1_ParamLimits

0x9e39,	// (0x0002938e) cell_hwr_side_button_pane_g1

0x521d,	// (0x00024772) status_pane_g4_ParamLimits

0x521d,	// (0x00024772) status_pane_g4

0x5237,	// (0x0002478c) status_pane_t1

0x76fc,	// (0x00026c51) form2_midp_gauge_slider_cont_pane

0x7704,	// (0x00026c59) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe082,	// (0x0002d5d7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe094,	// (0x0002d5e9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002f02d) form2_midp_gauge_slider_pane_t_ParamLimits

0x773a,	// (0x00026c8f) form2_midp_slider_pane_ParamLimits

0x2ab6,	// (0x0002200b) aid_size_cell_func_vkb2_ParamLimits

0x2ab6,	// (0x0002200b) aid_size_cell_func_vkb2

0x9dda,	// (0x0002932f) slider_pane_g4_ParamLimits

0x9dda,	// (0x0002932f) slider_pane_g4

0xcdf7,	// (0x0002c34c) form2_midp_gauge_slider_pane_t2_cp01

0xce05,	// (0x0002c35a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce05,	// (0x0002c35a) form2_midp_gauge_slider_pane_t3_cp01

0x31c5,	// (0x0002271a) form2_midp_slider_pane_cp01

0x355b,	// (0x00022ab0) navi_smil_pane

0x9e72,	// (0x000293c7) navi_smil_pane_g1

0x9e7a,	// (0x000293cf) navi_smil_pane_t1

0x9e47,	// (0x0002939c) form2_midp_slider_pane_g1

0x9e50,	// (0x000293a5) form2_midp_slider_pane_g2

0x9e58,	// (0x000293ad) form2_midp_slider_pane_g3

0x9e47,	// (0x0002939c) form2_midp_slider_pane_g4

0xf180,	// (0x0002e6d5) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x0002f357) form2_midp_slider_pane_g

0x318a,	// (0x000226df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x318a,	// (0x000226df) vkb2_area_bottom_space_btn_pane_g4

0xd760,	// (0x0002ccb5) lc0_navi_pane_ParamLimits

0xd760,	// (0x0002ccb5) lc0_navi_pane

0xd7ca,	// (0x0002cd1f) lc0_stat_indi_pane_ParamLimits

0xd7ca,	// (0x0002cd1f) lc0_stat_indi_pane

0xd7df,	// (0x0002cd34) ls0_title_pane_ParamLimits

0xd7df,	// (0x0002cd34) ls0_title_pane

0x3ebe,	// (0x00023413) bg_popup_sub_pane_cp14_ParamLimits

0x92a6,	// (0x000287fb) list_uniindi_pane_ParamLimits

0x92b2,	// (0x00028807) uniindi_top_pane_ParamLimits

0x934e,	// (0x000288a3) list_single_uniindi_pane_g1_ParamLimits

0x9361,	// (0x000288b6) list_single_uniindi_pane_t1_ParamLimits

0xce22,	// (0x0002c377) lc0_stat_clock_pane_ParamLimits

0xce22,	// (0x0002c377) lc0_stat_clock_pane

0xf18b,	// (0x0002e6e0) lc0_stat_indi_pane_g1_ParamLimits

0xf18b,	// (0x0002e6e0) lc0_stat_indi_pane_g1

0xf198,	// (0x0002e6ed) lc0_stat_indi_pane_g2_ParamLimits

0xf198,	// (0x0002e6ed) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x0002f362) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x0002f362) lc0_stat_indi_pane_g

0xce2f,	// (0x0002c384) lc0_uni_indicator_pane_ParamLimits

0xce2f,	// (0x0002c384) lc0_uni_indicator_pane

0xf1a5,	// (0x0002e6fa) ls0_title_pane_g1_ParamLimits

0xf1a5,	// (0x0002e6fa) ls0_title_pane_g1

0xf1b9,	// (0x0002e70e) ls0_title_pane_t1_ParamLimits

0xf1b9,	// (0x0002e70e) ls0_title_pane_t1

0xce3c,	// (0x0002c391) lc0_uni_indicator_pane_g1_ParamLimits

0xce3c,	// (0x0002c391) lc0_uni_indicator_pane_g1

0x9eec,	// (0x00029441) lc0_stat_clock_pane_t1

0x355b,	// (0x00022ab0) main_ai5_pane

0x9efa,	// (0x0002944f) ai5_sk_pane_ParamLimits

0x9efa,	// (0x0002944f) ai5_sk_pane

0xf1e7,	// (0x0002e73c) cell_ai5_widget_pane_ParamLimits

0xf1e7,	// (0x0002e73c) cell_ai5_widget_pane

0x9fbd,	// (0x00029512) aid_size_cell_widget_grid

0x9fd3,	// (0x00029528) bg_ai5_widget_pane_ParamLimits

0x9fd3,	// (0x00029528) bg_ai5_widget_pane

0xa047,	// (0x0002959c) cell_ai5_widget_pane_g2

0xa057,	// (0x000295ac) cell_ai5_widget_pane_g3

0xa06e,	// (0x000295c3) cell_ai5_widget_pane_g4

0xa07a,	// (0x000295cf) cell_ai5_widget_pane_g5

0xa086,	// (0x000295db) cell_ai5_widget_pane_g6

0xa092,	// (0x000295e7) cell_ai5_widget_pane_g7

0xa0da,	// (0x0002962f) cell_ai5_widget_pane_t1_ParamLimits

0xa0da,	// (0x0002962f) cell_ai5_widget_pane_t1

0xa0f7,	// (0x0002964c) cell_ai5_widget_pane_t2_ParamLimits

0xa0f7,	// (0x0002964c) cell_ai5_widget_pane_t2

0xa10f,	// (0x00029664) cell_ai5_widget_pane_t3_ParamLimits

0xa10f,	// (0x00029664) cell_ai5_widget_pane_t3

0xa127,	// (0x0002967c) cell_ai5_widget_pane_t4_ParamLimits

0xa127,	// (0x0002967c) cell_ai5_widget_pane_t4

0xa144,	// (0x00029699) cell_ai5_widget_pane_t5_ParamLimits

0xa144,	// (0x00029699) cell_ai5_widget_pane_t5

0xa163,	// (0x000296b8) cell_ai5_widget_pane_t6_ParamLimits

0xa163,	// (0x000296b8) cell_ai5_widget_pane_t6

0xa175,	// (0x000296ca) cell_ai5_widget_pane_t7_ParamLimits

0xa175,	// (0x000296ca) cell_ai5_widget_pane_t7

0xa18e,	// (0x000296e3) cell_ai5_widget_pane_t8_ParamLimits

0xa18e,	// (0x000296e3) cell_ai5_widget_pane_t8

0x0009,

0xfe27,	// (0x0002f37c) cell_ai5_widget_pane_t_ParamLimits

0xfe27,	// (0x0002f37c) cell_ai5_widget_pane_t

0xa1e2,	// (0x00029737) grid_ai5_widget_pane

0x3ebe,	// (0x00023413) highlight_cell_ai5_widget_pane_ParamLimits

0x3ebe,	// (0x00023413) highlight_cell_ai5_widget_pane

0xf251,	// (0x0002e7a6) ai5_sk_left_pane

0xf25b,	// (0x0002e7b0) ai5_sk_middle_pane

0xf265,	// (0x0002e7ba) ai5_sk_right_pane

0xa217,	// (0x0002976c) bg_ai5_widget_pane_g1_ParamLimits

0xa217,	// (0x0002976c) bg_ai5_widget_pane_g1

0xa223,	// (0x00029778) bg_ai5_widget_pane_g2_ParamLimits

0xa223,	// (0x00029778) bg_ai5_widget_pane_g2

0xa22f,	// (0x00029784) bg_ai5_widget_pane_g3_ParamLimits

0xa22f,	// (0x00029784) bg_ai5_widget_pane_g3

0xa23b,	// (0x00029790) bg_ai5_widget_pane_g4_ParamLimits

0xa23b,	// (0x00029790) bg_ai5_widget_pane_g4

0xa247,	// (0x0002979c) bg_ai5_widget_pane_g5_ParamLimits

0xa247,	// (0x0002979c) bg_ai5_widget_pane_g5

0xa253,	// (0x000297a8) bg_ai5_widget_pane_g6_ParamLimits

0xa253,	// (0x000297a8) bg_ai5_widget_pane_g6

0xa25f,	// (0x000297b4) bg_ai5_widget_pane_g7_ParamLimits

0xa25f,	// (0x000297b4) bg_ai5_widget_pane_g7

0xa26b,	// (0x000297c0) bg_ai5_widget_pane_g8_ParamLimits

0xa26b,	// (0x000297c0) bg_ai5_widget_pane_g8

0xa277,	// (0x000297cc) bg_ai5_widget_pane_g9_ParamLimits

0xa277,	// (0x000297cc) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x0002f391) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0002f391) bg_ai5_widget_pane_g

0xa2a9,	// (0x000297fe) cell_shortcut_ai5_widget_pane_ParamLimits

0xa2a9,	// (0x000297fe) cell_shortcut_ai5_widget_pane

0x4b54,	// (0x000240a9) bg_cell_shortcut_ai5_widget_pane

0xa2ba,	// (0x0002980f) cell_grid_ai5_widget_pane_g1

0x4b54,	// (0x000240a9) highlight_cell_shortcut_ai5_widget_pane

0x53ac,	// (0x00024901) ai5_sk_left_pane_g1

0xa2c3,	// (0x00029818) ai5_sk_left_pane_g2

0xa2cb,	// (0x00029820) ai5_sk_left_pane_g3

0xa2d3,	// (0x00029828) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0002f3a4) ai5_sk_left_pane_g

0xa2db,	// (0x00029830) ai5_sk_left_pane_t1

0x53a4,	// (0x000248f9) ai5_sk_right_pane_g1

0xa2e9,	// (0x0002983e) ai5_sk_right_pane_g2

0xa2f1,	// (0x00029846) ai5_sk_right_pane_g3

0xa2f9,	// (0x0002984e) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x0002f3ad) ai5_sk_right_pane_g

0xa301,	// (0x00029856) ai5_sk_right_pane_t1

0x53a4,	// (0x000248f9) ai5_sk_middle_pane_g1

0x53ac,	// (0x00024901) ai5_sk_middle_pane_g2

0x53c4,	// (0x00024919) ai5_sk_middle_pane_g3

0xa2f1,	// (0x00029846) ai5_sk_middle_pane_g4

0xa2cb,	// (0x00029820) ai5_sk_middle_pane_g5

0xa30f,	// (0x00029864) ai5_sk_middle_pane_g6

0xf26f,	// (0x0002e7c4) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0002f3b6) ai5_sk_middle_pane_g

0xd64c,	// (0x0002cba1) aid_touch_area_size_lc0_ParamLimits

0xd64c,	// (0x0002cba1) aid_touch_area_size_lc0

0x28a4,	// (0x00021df9) cell_hwr_candidate_pane_t1_ParamLimits

0x4ef4,	// (0x00024449) aid_touch_navi_pane

0xd8d8,	// (0x0002ce2d) status_dt_navi_pane_ParamLimits

0xd8d8,	// (0x0002ce2d) status_dt_navi_pane

0xd8f0,	// (0x0002ce45) status_dt_sta_pane_ParamLimits

0xd8f0,	// (0x0002ce45) status_dt_sta_pane

0xf277,	// (0x0002e7cc) dt_sta_controll_pane

0xf284,	// (0x0002e7d9) dt_sta_indi_pane

0xf291,	// (0x0002e7e6) dt_sta_title_pane

0x38d8,	// (0x00022e2d) bg_dt_sta_indi_pane_ParamLimits

0x38d8,	// (0x00022e2d) bg_dt_sta_indi_pane

0xf2a3,	// (0x0002e7f8) dt_sta_battery_pane

0xf2ab,	// (0x0002e800) dt_sta_indi_pane_g1

0xa361,	// (0x000298b6) dt_sta_indi_pane_g2

0xa36a,	// (0x000298bf) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0002f3c5) dt_sta_indi_pane_g

0xa373,	// (0x000298c8) dt_sta_signal_pane

0x3ebe,	// (0x00023413) bg_dt_sta_title_pane_ParamLimits

0x3ebe,	// (0x00023413) bg_dt_sta_title_pane

0xa37c,	// (0x000298d1) dt_sta_title_pane_g1

0xa384,	// (0x000298d9) dt_sta_title_pane_t1_ParamLimits

0xa384,	// (0x000298d9) dt_sta_title_pane_t1

0x355b,	// (0x00022ab0) bg_dt_sta_control_pane

0xf2b4,	// (0x0002e809) dt_sta_controll_pane_g1

0xa3a2,	// (0x000298f7) bg_dt_sta_title_pane_g1

0xa3ab,	// (0x00029900) bg_dt_sta_title_pane_g2

0xa3b4,	// (0x00029909) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x0002f3cc) bg_dt_sta_title_pane_g

0x79c2,	// (0x00026f17) bg_dt_sta_indi_pane_g1

0xa3bd,	// (0x00029912) dt_sta_signal_pane_g1

0xa3c5,	// (0x0002991a) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x0002f3d3) dt_sta_signal_pane_g

0xa3cd,	// (0x00029922) dt_sta_battery_pane_g1

0xa3d6,	// (0x0002992b) dt_sta_battery_pane_t1

0x79c2,	// (0x00026f17) bg_dt_sta_control_pane_g1

0x4653,	// (0x00023ba8) fep_china_uni_eep_pane

0x465b,	// (0x00023bb0) fep_china_uni_entry_pane_ParamLimits

0x466b,	// (0x00023bc0) popup_fep_china_uni_window_g1_ParamLimits

0x467b,	// (0x00023bd0) popup_fep_china_uni_window_g2_ParamLimits

0x467b,	// (0x00023bd0) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002ec72) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002ec72) popup_fep_china_uni_window_g

0xa3e5,	// (0x0002993a) fep_china_uni_eep_pane_g1

0xa3ed,	// (0x00029942) fep_china_uni_eep_pane_t1

0x9e69,	// (0x000293be) aid_touch_area_size_smil_player

0x5044,	// (0x00024599) lc0_clock_pane

0x522b,	// (0x00024780) status_pane_g5_ParamLimits

0x522b,	// (0x00024780) status_pane_g5

0xc471,	// (0x0002b9c6) popup_keymap_window

0x51e9,	// (0x0002473e) status_icon_pane

0xa057,	// (0x000295ac) cell_ai5_widget_pane_g3_ParamLimits

0xa06e,	// (0x000295c3) cell_ai5_widget_pane_g4_ParamLimits

0xa07a,	// (0x000295cf) cell_ai5_widget_pane_g5_ParamLimits

0xa09e,	// (0x000295f3) cell_ai5_widget_pane_g8_ParamLimits

0xa09e,	// (0x000295f3) cell_ai5_widget_pane_g8

0xa0b2,	// (0x00029607) cell_ai5_widget_pane_g9_ParamLimits

0xa0b2,	// (0x00029607) cell_ai5_widget_pane_g9

0xa0c6,	// (0x0002961b) cell_ai5_widget_pane_g10_ParamLimits

0xa0c6,	// (0x0002961b) cell_ai5_widget_pane_g10

0xa3fc,	// (0x00029951) status_icon_pane_g1

0x355b,	// (0x00022ab0) bg_popup_sub_pane_cp13

0xa404,	// (0x00029959) popup_keymap_window_t1

0xd5da,	// (0x0002cb2f) control_pane_g6_ParamLimits

0xd5da,	// (0x0002cb2f) control_pane_g6

0xd5e7,	// (0x0002cb3c) control_pane_g7_ParamLimits

0xd5e7,	// (0x0002cb3c) control_pane_g7

0xd5f4,	// (0x0002cb49) control_pane_g8_ParamLimits

0xd5f4,	// (0x0002cb49) control_pane_g8

0xf277,	// (0x0002e7cc) dt_sta_controll_pane_ParamLimits

0xf284,	// (0x0002e7d9) dt_sta_indi_pane_ParamLimits

0xf291,	// (0x0002e7e6) dt_sta_title_pane_ParamLimits

0x3df6,	// (0x0002334b) aid_size_touch_scroll_bar_cale

0x145b,	// (0x000209b0) popup_discreet_window_ParamLimits

0x145b,	// (0x000209b0) popup_discreet_window

0xbf98,	// (0x0002b4ed) popup_sk_window

0x5a21,	// (0x00024f76) bg_popup_sub_pane_cp28_ParamLimits

0x5a21,	// (0x00024f76) bg_popup_sub_pane_cp28

0xa412,	// (0x00029967) popup_discreet_window_g1_ParamLimits

0xa412,	// (0x00029967) popup_discreet_window_g1

0xa432,	// (0x00029987) popup_discreet_window_t1_ParamLimits

0xa432,	// (0x00029987) popup_discreet_window_t1

0xa450,	// (0x000299a5) popup_discreet_window_t2_ParamLimits

0xa450,	// (0x000299a5) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x0002f3d8) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x0002f3d8) popup_discreet_window_t

0x31fc,	// (0x00022751) popup_sk_window_g1

0x3206,	// (0x0002275b) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x0002f3df) popup_sk_window_g

0x3210,	// (0x00022765) popup_sk_window_t1

0x321e,	// (0x00022773) popup_sk_window_t1_copy1

0xa047,	// (0x0002959c) cell_ai5_widget_pane_g2_ParamLimits

0xa1a0,	// (0x000296f5) cell_ai5_widget_pane_t9_ParamLimits

0xa1a0,	// (0x000296f5) cell_ai5_widget_pane_t9

0x355b,	// (0x00022ab0) main_fep_fshwr2_pane

0xce63,	// (0x0002c3b8) aid_fshwr2_btn_pane

0xce74,	// (0x0002c3c9) aid_fshwr2_syb_pane

0xce85,	// (0x0002c3da) aid_fshwr2_txt_pane

0xce91,	// (0x0002c3e6) fshwr2_func_candi_pane

0xceb0,	// (0x0002c405) fshwr2_hwr_syb_pane

0xcecb,	// (0x0002c420) fshwr2_icf_pane

0x355b,	// (0x00022ab0) fshwr2_icf_bg_pane

0x329e,	// (0x000227f3) fshwr2_icf_pane_t1_ParamLimits

0x329e,	// (0x000227f3) fshwr2_icf_pane_t1

0x4541,	// (0x00023a96) fshwr2_func_candi_pane_g1

0xf2bd,	// (0x0002e812) fshwr2_func_candi_row_pane_ParamLimits

0xf2bd,	// (0x0002e812) fshwr2_func_candi_row_pane

0xcef7,	// (0x0002c44c) cell_fshwr2_syb_pane_ParamLimits

0xcef7,	// (0x0002c44c) cell_fshwr2_syb_pane

0x7c40,	// (0x00027195) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7c40,	// (0x00027195) fshwr2_hwr_syb_pane_g1

0x355b,	// (0x00022ab0) bg_popup_call_pane_cp01

0xcf0d,	// (0x0002c462) fshwr2_func_candi_cell_pane_ParamLimits

0xcf0d,	// (0x0002c462) fshwr2_func_candi_cell_pane

0xf2d5,	// (0x0002e82a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2d5,	// (0x0002e82a) fshwr2_func_candi_cell_bg_pane

0xcf42,	// (0x0002c497) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf42,	// (0x0002c497) fshwr2_func_candi_cell_pane_g1

0xcf71,	// (0x0002c4c6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf71,	// (0x0002c4c6) fshwr2_func_candi_cell_pane_t1

0x355b,	// (0x00022ab0) bg_button_pane_cp08

0xa4be,	// (0x00029a13) cell_fshwr2_syb_bg_pane

0xcf84,	// (0x0002c4d9) cell_fshwr2_syb_bg_pane_g1

0xcf8c,	// (0x0002c4e1) cell_fshwr2_syb_bg_pane_t1

0x3ebe,	// (0x00023413) main_tmo_pane

0xdbfa,	// (0x0002d14f) uni_indicator_pane_g1_ParamLimits

0xdc10,	// (0x0002d165) uni_indicator_pane_g2_ParamLimits

0xdc26,	// (0x0002d17b) uni_indicator_pane_g3_ParamLimits

0x6570,	// (0x00025ac5) uni_indicator_pane_g4_ParamLimits

0x6570,	// (0x00025ac5) uni_indicator_pane_g4

0x6584,	// (0x00025ad9) uni_indicator_pane_g5_ParamLimits

0x6584,	// (0x00025ad9) uni_indicator_pane_g5

0x6584,	// (0x00025ad9) uni_indicator_pane_g6_ParamLimits

0x6584,	// (0x00025ad9) uni_indicator_pane_g6

0xf915,	// (0x0002ee6a) uni_indicator_pane_g_ParamLimits

0xe672,	// (0x0002dbc7) popup_tmo_note_window_ParamLimits

0xe672,	// (0x0002dbc7) popup_tmo_note_window

0x3ebe,	// (0x00023413) fshwr2_bg_pane

0xcf62,	// (0x0002c4b7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf62,	// (0x0002c4b7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x0002f3e4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x0002f3e4) fshwr2_func_candi_cell_pane_g

0x79c2,	// (0x00026f17) bg_popup_window_pane_cp01

0x3353,	// (0x000228a8) bg_popup_window_pane_g1_cp01

0xa4c6,	// (0x00029a1b) bg_popup_window_pane_cp22_ParamLimits

0xa4c6,	// (0x00029a1b) bg_popup_window_pane_cp22

0xa4d4,	// (0x00029a29) listscroll_tmo_link_pane_ParamLimits

0xa4d4,	// (0x00029a29) listscroll_tmo_link_pane

0xa514,	// (0x00029a69) popup_tmo_note_window_g1_ParamLimits

0xa514,	// (0x00029a69) popup_tmo_note_window_g1

0xa521,	// (0x00029a76) tmo_note_info_pane_ParamLimits

0xa521,	// (0x00029a76) tmo_note_info_pane

0xf2e1,	// (0x0002e836) list_tmo_note_info_pane_g1_ParamLimits

0xf2e1,	// (0x0002e836) list_tmo_note_info_pane_g1

0xa552,	// (0x00029aa7) list_tmo_note_info_pane_g2_ParamLimits

0xa552,	// (0x00029aa7) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x0002f3e9) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x0002f3e9) list_tmo_note_info_pane_g

0xa56e,	// (0x00029ac3) list_tmo_note_info_text_pane_ParamLimits

0xa56e,	// (0x00029ac3) list_tmo_note_info_text_pane

0xa5ef,	// (0x00029b44) list_tmo_link_pane

0xa5fc,	// (0x00029b51) scroll_pane_cp20

0xa609,	// (0x00029b5e) list_single_tmo_link_pane_ParamLimits

0xa609,	// (0x00029b5e) list_single_tmo_link_pane

0xa619,	// (0x00029b6e) list_single_tmo_link_pane_t1

0xa627,	// (0x00029b7c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa627,	// (0x00029b7c) list_tmo_note_info_text_pane_t1

0xd27e,	// (0x0002c7d3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd27e,	// (0x0002c7d3) aid_size_touch_scroll_bar_cp01

0xba5c,	// (0x0002afb1) aid_size_touch_slider_marker

0xbf88,	// (0x0002b4dd) popup_settings_window_ParamLimits

0xbf88,	// (0x0002b4dd) popup_settings_window

0x0872,	// (0x0001fdc7) popup_candi_list_indi_window

0x4ef4,	// (0x00024449) aid_touch_navi_pane_ParamLimits

0x2a0f,	// (0x00021f64) rs_clock_indi_pane

0x2a18,	// (0x00021f6d) sctrl_sk_bottom_pane_ParamLimits

0x2a29,	// (0x00021f7e) sctrl_sk_top_pane_ParamLimits

0x2b10,	// (0x00022065) popup_fep_tooltip_window

0x9fbd,	// (0x00029512) aid_size_cell_widget_grid_ParamLimits

0xa032,	// (0x00029587) cell_ai5_widget_pane_g1_ParamLimits

0xa032,	// (0x00029587) cell_ai5_widget_pane_g1

0xa086,	// (0x000295db) cell_ai5_widget_pane_g6_ParamLimits

0xa092,	// (0x000295e7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe12,	// (0x0002f367) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x0002f367) cell_ai5_widget_pane_g

0xa1c4,	// (0x00029719) cell_ai5_widget_pane_t10_ParamLimits

0xa1c4,	// (0x00029719) cell_ai5_widget_pane_t10

0xa1e2,	// (0x00029737) grid_ai5_widget_pane_ParamLimits

0xa283,	// (0x000297d8) cell_contacts_ai5_widget_pane_ParamLimits

0xa283,	// (0x000297d8) cell_contacts_ai5_widget_pane

0xa465,	// (0x000299ba) popup_discreet_window_t3_ParamLimits

0xa465,	// (0x000299ba) popup_discreet_window_t3

0xcee3,	// (0x0002c438) popup_fshwr2_char_preview_window_ParamLimits

0xcee3,	// (0x0002c438) popup_fshwr2_char_preview_window

0xf2f8,	// (0x0002e84d) tmo_note_info_pane_t1

0xf30d,	// (0x0002e862) tmo_note_info_pane_t2

0xf324,	// (0x0002e879) tmo_note_info_pane_t3

0xa5cb,	// (0x00029b20) tmo_note_info_pane_t4

0xa5dd,	// (0x00029b32) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x0002f3ee) tmo_note_info_pane_t

0xa5ef,	// (0x00029b44) list_tmo_link_pane_ParamLimits

0xa5fc,	// (0x00029b51) scroll_pane_cp20_ParamLimits

0x355b,	// (0x00022ab0) bg_popup_fep_char_preview_window_cp01

0xa640,	// (0x00029b95) popup_fshwr2_char_preview_window_t1

0xa64e,	// (0x00029ba3) popup_candi_list_indi_window_g1

0xa657,	// (0x00029bac) bg_cell_contacts_ai5_widget_pane

0xa663,	// (0x00029bb8) cell_contacts_ai5_widget_pane_g1

0x80a2,	// (0x000275f7) cell_contacts_ai5_widget_pane_g2

0xa678,	// (0x00029bcd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x0002f3f9) cell_contacts_ai5_widget_pane_g

0xa684,	// (0x00029bd9) cell_contacts_ai5_widget_pane_t1

0x3ebe,	// (0x00023413) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf39e,	// (0x0002e8f3) settings_container_pane

0x4b54,	// (0x000240a9) listscroll_set_pane_copy1

0x70ab,	// (0x00026600) scroll_pane_cp121_copy1

0xa707,	// (0x00029c5c) set_content_pane_copy1

0xf3aa,	// (0x0002e8ff) aid_height_set_list_copy1_ParamLimits

0xf3aa,	// (0x0002e8ff) aid_height_set_list_copy1

0x677c,	// (0x00025cd1) aid_size_parent_copy1_ParamLimits

0x677c,	// (0x00025cd1) aid_size_parent_copy1

0xf3b6,	// (0x0002e90b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3b6,	// (0x0002e90b) button_value_adjust_pane_cp6_copy1

0x4e92,	// (0x000243e7) list_highlight_pane_cp2_copy1_ParamLimits

0x4e92,	// (0x000243e7) list_highlight_pane_cp2_copy1

0xf3ca,	// (0x0002e91f) list_set_pane_copy1_ParamLimits

0xf3ca,	// (0x0002e91f) list_set_pane_copy1

0xf339,	// (0x0002e88e) main_pane_set_t1_copy1_ParamLimits

0xf339,	// (0x0002e88e) main_pane_set_t1_copy1

0xf373,	// (0x0002e8c8) main_pane_set_t2_copy1_ParamLimits

0xf373,	// (0x0002e8c8) main_pane_set_t2_copy1

0xf477,	// (0x0002e9cc) main_pane_set_t3_copy1

0xf485,	// (0x0002e9da) main_pane_set_t4_copy1

0xf392,	// (0x0002e8e7) set_content_pane_g1_copy1_ParamLimits

0xf392,	// (0x0002e8e7) set_content_pane_g1_copy1

0xf493,	// (0x0002e9e8) setting_code_pane_copy1

0xa800,	// (0x00029d55) setting_slider_graphic_pane_copy1

0xa800,	// (0x00029d55) setting_slider_pane_copy1

0xa800,	// (0x00029d55) setting_text_pane_copy1

0xa800,	// (0x00029d55) setting_volume_pane_copy1

0xf493,	// (0x0002e9e8) settings_code_pane_cp2_copy1

0xf49b,	// (0x0002e9f0) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0002e9f0) settings_code_pane_cp_copy1

0xcf9b,	// (0x0002c4f0) volume_set_pane_copy1

0xf4af,	// (0x0002ea04) volume_set_pane_g10_copy1

0xf4b7,	// (0x0002ea0c) volume_set_pane_g1_copy1

0xf4bf,	// (0x0002ea14) volume_set_pane_g2_copy1

0xf4c7,	// (0x0002ea1c) volume_set_pane_g3_copy1

0xf4cf,	// (0x0002ea24) volume_set_pane_g4_copy1

0xf4d7,	// (0x0002ea2c) volume_set_pane_g5_copy1

0xf4df,	// (0x0002ea34) volume_set_pane_g6_copy1

0xf4e7,	// (0x0002ea3c) volume_set_pane_g7_copy1

0xf4ef,	// (0x0002ea44) volume_set_pane_g8_copy1

0xf4f7,	// (0x0002ea4c) volume_set_pane_g9_copy1

0x364f,	// (0x00022ba4) bg_set_opt_pane_cp_copy1_ParamLimits

0x364f,	// (0x00022ba4) bg_set_opt_pane_cp_copy1

0x3364,	// (0x000228b9) setting_slider_pane_t1_copy1_ParamLimits

0x3364,	// (0x000228b9) setting_slider_pane_t1_copy1

0xcfa3,	// (0x0002c4f8) setting_slider_pane_t2_copy1_ParamLimits

0xcfa3,	// (0x0002c4f8) setting_slider_pane_t2_copy1

0xcfbd,	// (0x0002c512) setting_slider_pane_t3_copy1_ParamLimits

0xcfbd,	// (0x0002c512) setting_slider_pane_t3_copy1

0xcfd5,	// (0x0002c52a) slider_set_pane_copy1_ParamLimits

0xcfd5,	// (0x0002c52a) slider_set_pane_copy1

0x3f19,	// (0x0002346e) set_opt_bg_pane_g1_copy2

0x3f21,	// (0x00023476) set_opt_bg_pane_g2_copy2

0xa86c,	// (0x00029dc1) set_opt_bg_pane_g3_copy2

0x3f31,	// (0x00023486) set_opt_bg_pane_g4_copy2

0x3f39,	// (0x0002348e) set_opt_bg_pane_g5_copy2

0x3f41,	// (0x00023496) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0002ea54) set_opt_bg_pane_g7_copy2

0xa87e,	// (0x00029dd3) set_opt_bg_pane_g8_copy2

0xa888,	// (0x00029ddd) set_opt_bg_pane_g9_copy2

0x33ca,	// (0x0002291f) aid_size_touch_slider_mark_copy1_ParamLimits

0x33ca,	// (0x0002291f) aid_size_touch_slider_mark_copy1

0xa892,	// (0x00029de7) slider_set_pane_g1_copy1

0x33de,	// (0x00022933) slider_set_pane_g2_copy1

0x24f2,	// (0x00021a47) slider_set_pane_g3_copy1_ParamLimits

0x24f2,	// (0x00021a47) slider_set_pane_g3_copy1

0x2506,	// (0x00021a5b) slider_set_pane_g4_copy1_ParamLimits

0x2506,	// (0x00021a5b) slider_set_pane_g4_copy1

0x251e,	// (0x00021a73) slider_set_pane_g5_copy1_ParamLimits

0x251e,	// (0x00021a73) slider_set_pane_g5_copy1

0x24f2,	// (0x00021a47) slider_set_pane_g6_copy1_ParamLimits

0x24f2,	// (0x00021a47) slider_set_pane_g6_copy1

0xcfeb,	// (0x0002c540) slider_set_pane_g7_copy1_ParamLimits

0xcfeb,	// (0x0002c540) slider_set_pane_g7_copy1

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp2_copy1

0xa89b,	// (0x00029df0) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0002ea5c) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0002ea6c) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0002ea7c) slider_set_pane_cp_copy1

0xa8d4,	// (0x00029e29) input_focus_pane_cp1_copy1

0xa8dd,	// (0x00029e32) list_set_text_pane_copy1

0xa8e5,	// (0x00029e3a) setting_text_pane_g1_copy1

0x00a9,	// (0x0001f5fe) set_text_pane_t1_copy1

0xa8d4,	// (0x00029e29) input_focus_pane_cp2_copy1

0xa8e5,	// (0x00029e3a) setting_code_pane_g1_copy1

0xf52f,	// (0x0002ea84) setting_code_pane_t1_copy1

0x6ed5,	// (0x0002642a) list_set_graphic_pane_copy1

0x356f,	// (0x00022ac4) bg_set_opt_pane_cp4_copy1

0xd455,	// (0x0002c9aa) list_set_graphic_pane_g1_copy1_ParamLimits

0xd455,	// (0x0002c9aa) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0002ea92) list_set_graphic_pane_g2_copy1

0xd46d,	// (0x0002c9c2) list_set_graphic_pane_t1_copy1_ParamLimits

0xd46d,	// (0x0002c9c2) list_set_graphic_pane_t1_copy1

0x79c2,	// (0x00026f17) rs_clock_indi_pane_g1

0xa916,	// (0x00029e6b) rs_clock_indi_pane_t1

0xa924,	// (0x00029e79) rs_indi_pane

0xa92c,	// (0x00029e81) rs_indi_pane_g1

0xa935,	// (0x00029e8a) rs_indi_pane_g2

0xa93e,	// (0x00029e93) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x0002f400) rs_indi_pane_g

0x4b54,	// (0x000240a9) bg_popup_preview_window_pane_cp03

0xa947,	// (0x00029e9c) popup_fep_tooltip_window_t1

0x863e,	// (0x00027b93) popup_note2_window_g2_ParamLimits

0x863e,	// (0x00027b93) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002f199) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002f199) popup_note2_window_g

0x8b39,	// (0x0002808e) bg_popup_sub_pane_cp11_ParamLimits

0x8b46,	// (0x0002809b) cell_ai3_links_pane_g1_ParamLimits

0x8b5d,	// (0x000280b2) cell_ai3_links_pane_t1

0x00a9,	// (0x0001f5fe) set_text_pane_t1_copy1_ParamLimits

0x4a65,	// (0x00023fba) cell_graphic_popup_pane_cp2_ParamLimits

0x4a65,	// (0x00023fba) cell_graphic_popup_pane_cp2

0xa955,	// (0x00029eaa) cell_graphic_popup_pane_g1_cp2

0x3c09,	// (0x0002315e) cell_graphic_popup_pane_g2_cp2

0xa95d,	// (0x00029eb2) cell_graphic_popup_pane_g3_cp2

0xa965,	// (0x00029eba) cell_graphic_popup_pane_t2_cp2

0x3c1a,	// (0x0002316f) grid_highlight_pane_cp3_cp2

0x425e,	// (0x000237b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ebe,	// (0x00023413) main_tmo_pane_ParamLimits

0xe666,	// (0x0002dbbb) popup_tmo_big_image_note_window

0xa021,	// (0x00029576) cell_ai5_widget_list_pane

0xa029,	// (0x0002957e) cell_ai5_widget_lrg_icon_pane

0xf2f8,	// (0x0002e84d) tmo_note_info_pane_t1_ParamLimits

0xf30d,	// (0x0002e862) tmo_note_info_pane_t2_ParamLimits

0xf324,	// (0x0002e879) tmo_note_info_pane_t3_ParamLimits

0xa5cb,	// (0x00029b20) tmo_note_info_pane_t4_ParamLimits

0xa5dd,	// (0x00029b32) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x0002f3ee) tmo_note_info_pane_t_ParamLimits

0xf39e,	// (0x0002e8f3) settings_container_pane_ParamLimits

0xa8cc,	// (0x00029e21) indicator_popup_pane_cp5

0xa8cc,	// (0x00029e21) indicator_popup_pane_cp6

0x6ed5,	// (0x0002642a) list_set_graphic_pane_copy1_ParamLimits

0x355b,	// (0x00022ab0) bg_popup_window_pane_cp23

0xa973,	// (0x00029ec8) popup_tmo_big_image_note_window_g1

0xa97d,	// (0x00029ed2) popup_tmo_big_image_note_window_t1

0xa98d,	// (0x00029ee2) popup_tmo_big_image_note_window_t2

0xa99d,	// (0x00029ef2) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x0002f407) popup_tmo_big_image_note_window_t

0x79c2,	// (0x00026f17) cell_ai5_widget_lrg_icon_pane_g1

0xa9ad,	// (0x00029f02) cell_ai5_widget_lrg_icon_pane_t1

0xa9bb,	// (0x00029f10) cell_ai5_widget_list_row_pane_ParamLimits

0xa9bb,	// (0x00029f10) cell_ai5_widget_list_row_pane

0xa9d2,	// (0x00029f27) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa9d2,	// (0x00029f27) cell_ai5_widget_list_row_pane_g1

0xa9df,	// (0x00029f34) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa9df,	// (0x00029f34) cell_ai5_widget_list_row_pane_t1

0xaa10,	// (0x00029f65) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa10,	// (0x00029f65) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x0002f40e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x0002f40e) cell_ai5_widget_list_row_pane_t

0x355b,	// (0x00022ab0) main_fep_vtchi_ss_pane

0xaa54,	// (0x00029fa9) popup_fep_char_pre_window

0xaa5c,	// (0x00029fb1) popup_fep_ituss_window

0xaa7d,	// (0x00029fd2) popup_fep_vkbss_window

0xaa9c,	// (0x00029ff1) grid_vkbss_keypad_pane_ParamLimits

0xaa9c,	// (0x00029ff1) grid_vkbss_keypad_pane

0xaaac,	// (0x0002a001) ituss_keypad_pane

0x3408,	// (0x0002295d) aid_vkbss_key_offset_ParamLimits

0x3408,	// (0x0002295d) aid_vkbss_key_offset

0x3414,	// (0x00022969) cell_vkbss_key_pane_ParamLimits

0x3414,	// (0x00022969) cell_vkbss_key_pane

0xaabb,	// (0x0002a010) bg_cell_vkbss_key_g1_ParamLimits

0xaabb,	// (0x0002a010) bg_cell_vkbss_key_g1

0xaac7,	// (0x0002a01c) cell_vkbss_key_3p_pane_ParamLimits

0xaac7,	// (0x0002a01c) cell_vkbss_key_3p_pane

0xaae1,	// (0x0002a036) cell_vkbss_key_g1_ParamLimits

0xaae1,	// (0x0002a036) cell_vkbss_key_g1

0xaafb,	// (0x0002a050) cell_vkbss_key_t1_ParamLimits

0xaafb,	// (0x0002a050) cell_vkbss_key_t1

0x342a,	// (0x0002297f) cell_ituss_key_pane_ParamLimits

0x342a,	// (0x0002297f) cell_ituss_key_pane

0xab26,	// (0x0002a07b) bg_cell_ituss_key_g1_ParamLimits

0xab26,	// (0x0002a07b) bg_cell_ituss_key_g1

0xab32,	// (0x0002a087) cell_ituss_key_pane_g1_ParamLimits

0xab32,	// (0x0002a087) cell_ituss_key_pane_g1

0x343b,	// (0x00022990) cell_ituss_key_pane_g2_ParamLimits

0x343b,	// (0x00022990) cell_ituss_key_pane_g2

0x0002,

0xfec0,	// (0x0002f415) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x0002f415) cell_ituss_key_pane_g

0x3467,	// (0x000229bc) cell_ituss_key_t1_ParamLimits

0x3467,	// (0x000229bc) cell_ituss_key_t1

0x34a1,	// (0x000229f6) cell_ituss_key_t2_ParamLimits

0x34a1,	// (0x000229f6) cell_ituss_key_t2

0x34d2,	// (0x00022a27) cell_ituss_key_t3_ParamLimits

0x34d2,	// (0x00022a27) cell_ituss_key_t3

0x34a1,	// (0x000229f6) cell_ituss_key_t4_ParamLimits

0x34a1,	// (0x000229f6) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0002f41c) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0002f41c) cell_ituss_key_t

0xab5e,	// (0x0002a0b3) cell_vkbss_key_3p_pane_g1

0xab66,	// (0x0002a0bb) cell_vkbss_key_3p_pane_g2

0xab6e,	// (0x0002a0c3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0002f427) cell_vkbss_key_3p_pane_g

0x355b,	// (0x00022ab0) bg_popup_fep_char_preview_window_cp02

0x3515,	// (0x00022a6a) popup_fep_char_pre_window_t1

0xf247,	// (0x0002e79c) main_ai5_sk_pane

0xa657,	// (0x00029bac) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa663,	// (0x00029bb8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80a2,	// (0x000275f7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa678,	// (0x00029bcd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x0002f3f9) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa684,	// (0x00029bd9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ebe,	// (0x00023413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002ea9a) main_ai5_sk_pane_g1

0x585a,	// (0x00024daf) popup_query_code_window_g1

0xaa72,	// (0x00029fc7) popup_fep_vkb_icf_pane

0xaa86,	// (0x00029fdb) popup_fep_vtchi_icf_pane

0xab7f,	// (0x0002a0d4) bg_icf_pane

0xab8b,	// (0x0002a0e0) list_vkb_icf_pane

0xab97,	// (0x0002a0ec) bg_icf_pane_cp01

0xabaa,	// (0x0002a0ff) vtchi_icf_list_pane

0xabba,	// (0x0002a10f) list_vkb_icf_pane_t1_ParamLimits

0xabba,	// (0x0002a10f) list_vkb_icf_pane_t1

0xabd0,	// (0x0002a125) vtchi_icf_list_pane_t1_ParamLimits

0xabd0,	// (0x0002a125) vtchi_icf_list_pane_t1

0xaa5c,	// (0x00029fb1) popup_fep_ituss_window_ParamLimits

0xaa86,	// (0x00029fdb) popup_fep_vtchi_icf_pane_ParamLimits

0xaaac,	// (0x0002a001) ituss_keypad_pane_ParamLimits

0x33fc,	// (0x00022951) ituss_sks_pane

0xab7f,	// (0x0002a0d4) bg_icf_pane_ParamLimits

0xaa38,	// (0x00029f8d) icf_edit_indi_pane_ParamLimits

0xaa38,	// (0x00029f8d) icf_edit_indi_pane

0xab8b,	// (0x0002a0e0) list_vkb_icf_pane_ParamLimits

0xab97,	// (0x0002a0ec) bg_icf_pane_cp01_ParamLimits

0xaa47,	// (0x00029f9c) icf_edit_indi_pane_cp01_ParamLimits

0xaa47,	// (0x00029f9c) icf_edit_indi_pane_cp01

0xabb2,	// (0x0002a107) vtchi_query_pane

0x7c40,	// (0x00027195) icf_edit_indi_pane_g1_ParamLimits

0x7c40,	// (0x00027195) icf_edit_indi_pane_g1

0xac41,	// (0x0002a196) icf_edit_indi_pane_g2_ParamLimits

0xac41,	// (0x0002a196) icf_edit_indi_pane_g2

0x0001,

0xfeea,	// (0x0002f43f) icf_edit_indi_pane_g_ParamLimits

0xfeea,	// (0x0002f43f) icf_edit_indi_pane_g

0xac50,	// (0x0002a1a5) icf_edit_indi_pane_t1

0xabea,	// (0x0002a13f) bg_input_focus_pane_cp042

0x3ded,	// (0x00023342) vtchi_button_pane

0xabf3,	// (0x0002a148) vtchi_query_pane_t1

0xac01,	// (0x0002a156) vtchi_query_pane_t2

0xac0f,	// (0x0002a164) vtchi_query_pane_t3

0x0002,

0xfed9,	// (0x0002f42e) vtchi_query_pane_t

0x355b,	// (0x00022ab0) bg_button_pane_cp13

0xac1d,	// (0x0002a172) vtchi_button_pane_g1

0x3524,	// (0x00022a79) ituss_sks_pane_g1

0x352f,	// (0x00022a84) ituss_sks_pane_g2

0x0001,

0xfee0,	// (0x0002f435) ituss_sks_pane_g

0xac25,	// (0x0002a17a) ituss_sks_pane_t1

0xac33,	// (0x0002a188) ituss_sks_pane_t2

0x0001,

0xfee5,	// (0x0002f43a) ituss_sks_pane_t

0x7425,	// (0x0002697a) indicator_nsta_pane_cp_g1

0x742e,	// (0x00026983) indicator_nsta_pane_cp_g2

0x7436,	// (0x0002698b) indicator_nsta_pane_cp_g3

0x743e,	// (0x00026993) indicator_nsta_pane_cp_g4

0x7446,	// (0x0002699b) indicator_nsta_pane_cp_g5

0x7446,	// (0x0002699b) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002efe3) indicator_nsta_pane_cp_g

0xf059,	// (0x0002e5ae) cell_graphic2_pane_t2_ParamLimits

0xf059,	// (0x0002e5ae) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0002f2f0) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0002f2f0) cell_graphic2_pane_t

0xf08f,	// (0x0002e5e4) cell_graphic2_control_pane_t1

0xd429,	// (0x0002c97e) signal_pane_g3_ParamLimits

0xd429,	// (0x0002c97e) signal_pane_g3

0xd43d,	// (0x0002c992) signal_pane_g4_ParamLimits

0xd43d,	// (0x0002c992) signal_pane_g4

0xaa22,	// (0x00029f77) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa22,	// (0x00029f77) cell_ai5_widget_list_row_pane_t3

0xab4c,	// (0x0002a0a1) cell_ituss_key_pane_t1_ParamLimits

0xab4c,	// (0x0002a0a1) cell_ituss_key_pane_t1

0x54a1,	// (0x000249f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x54a1,	// (0x000249f6) form_field_data_wide_pane_vc_t2

0x54b5,	// (0x00024a0a) form_field_data_wide_pane_vc_t3_ParamLimits

0x54b5,	// (0x00024a0a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002ed52) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002ed52) form_field_data_wide_pane_vc_t

0x70ed,	// (0x00026642) form_field_slider_wide_pane_vc_t3_ParamLimits

0x70ed,	// (0x00026642) form_field_slider_wide_pane_vc_t3

0x71cb,	// (0x00026720) form_field_popup_wide_pane_vc_t2_ParamLimits

0x71cb,	// (0x00026720) form_field_popup_wide_pane_vc_t2

0x71e2,	// (0x00026737) form_field_popup_wide_pane_vc_t3_ParamLimits

0x71e2,	// (0x00026737) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002efd2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002efd2) form_field_popup_wide_pane_vc_t

0xce63,	// (0x0002c3b8) aid_fshwr2_btn_pane_ParamLimits

0xce74,	// (0x0002c3c9) aid_fshwr2_syb_pane_ParamLimits

0xce85,	// (0x0002c3da) aid_fshwr2_txt_pane_ParamLimits

0x3ebe,	// (0x00023413) fshwr2_bg_pane_ParamLimits

0xce91,	// (0x0002c3e6) fshwr2_func_candi_pane_ParamLimits

0xceb0,	// (0x0002c405) fshwr2_hwr_syb_pane_ParamLimits

0xcecb,	// (0x0002c420) fshwr2_icf_pane_ParamLimits

0x0dad,	// (0x00020302) list_double_graphic_pane_vc_g4_ParamLimits

0x0dad,	// (0x00020302) list_double_graphic_pane_vc_g4

0x345b,	// (0x000229b0) cell_ituss_key_pane_g3_ParamLimits

0x345b,	// (0x000229b0) cell_ituss_key_pane_g3

0x3503,	// (0x00022a58) cell_ituss_key_t5_ParamLimits

0x3503,	// (0x00022a58) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

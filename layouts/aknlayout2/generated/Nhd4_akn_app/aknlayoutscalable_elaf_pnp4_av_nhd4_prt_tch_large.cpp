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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002de5a };

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
0x9706,	// (0x00037560) Screen

0x9712,	// (0x0003756c) application_window_ParamLimits

0x9712,	// (0x0003756c) application_window

0x4127,	// (0x00031f81) screen_g1

0x976e,	// (0x000375c8) area_bottom_pane_ParamLimits

0x976e,	// (0x000375c8) area_bottom_pane

0x982e,	// (0x00037688) area_top_pane_ParamLimits

0x982e,	// (0x00037688) area_top_pane

0x98c2,	// (0x0003771c) main_pane_ParamLimits

0x98c2,	// (0x0003771c) main_pane

0x4131,	// (0x00031f8b) misc_graphics

0xbebc,	// (0x00039d16) battery_pane_ParamLimits

0xbebc,	// (0x00039d16) battery_pane

0x6116,	// (0x00033f70) bg_status_flat_pane_g8

0x611e,	// (0x00033f78) bg_status_flat_pane_g9

0x583d,	// (0x00033697) context_pane_ParamLimits

0x583d,	// (0x00033697) context_pane

0xbff0,	// (0x00039e4a) navi_pane_ParamLimits

0xbff0,	// (0x00039e4a) navi_pane

0xc05c,	// (0x00039eb6) signal_pane_ParamLimits

0xc05c,	// (0x00039eb6) signal_pane

0x0008,

0xf88f,	// (0x0003d6e9) bg_status_flat_pane_g

0xc0c1,	// (0x00039f1b) status_pane_g1_ParamLimits

0xc0c1,	// (0x00039f1b) status_pane_g1

0x68fb,	// (0x00034755) status_pane_g2_ParamLimits

0x68fb,	// (0x00034755) status_pane_g2

0x58a2,	// (0x000336fc) status_pane_g3_ParamLimits

0x58a2,	// (0x000336fc) status_pane_g3

0x0004,

0xf7bd,	// (0x0003d617) status_pane_g_ParamLimits

0xf7bd,	// (0x0003d617) status_pane_g

0xc0d5,	// (0x00039f2f) title_pane_ParamLimits

0xc0d5,	// (0x00039f2f) title_pane

0xc112,	// (0x00039f6c) uni_indicator_pane_ParamLimits

0xc112,	// (0x00039f6c) uni_indicator_pane

0x5676,	// (0x000334d0) bg_list_pane_ParamLimits

0x5676,	// (0x000334d0) bg_list_pane

0xa7b8,	// (0x00038612) find_pane

0xa7c0,	// (0x0003861a) listscroll_app_pane_ParamLimits

0xa7c0,	// (0x0003861a) listscroll_app_pane

0x5696,	// (0x000334f0) listscroll_form_pane

0xa7cc,	// (0x00038626) listscroll_gen_pane_ParamLimits

0xa7cc,	// (0x00038626) listscroll_gen_pane

0x5696,	// (0x000334f0) listscroll_set_pane

0x9f5b,	// (0x00037db5) main_idle_act_pane

0x545c,	// (0x000332b6) main_idle_trad_pane

0x545c,	// (0x000332b6) main_list_empty_pane

0x4b6c,	// (0x000329c6) main_midp_pane

0x56b0,	// (0x0003350a) main_pane_g1_ParamLimits

0x56b0,	// (0x0003350a) main_pane_g1

0xa7e0,	// (0x0003863a) popup_ai_message_window_ParamLimits

0xa7e0,	// (0x0003863a) popup_ai_message_window

0xba5e,	// (0x000398b8) popup_fep_china_uni_window_ParamLimits

0xba5e,	// (0x000398b8) popup_fep_china_uni_window

0x56e2,	// (0x0003353c) popup_fep_japan_candidate_window_ParamLimits

0x56e2,	// (0x0003353c) popup_fep_japan_candidate_window

0x5700,	// (0x0003355a) popup_fep_japan_predictive_window_ParamLimits

0x5700,	// (0x0003355a) popup_fep_japan_predictive_window

0xbab8,	// (0x00039912) popup_find_window

0xbac5,	// (0x0003991f) popup_grid_graphic_window_ParamLimits

0xbac5,	// (0x0003991f) popup_grid_graphic_window

0x5730,	// (0x0003358a) popup_large_graphic_colour_window

0xbaeb,	// (0x00039945) popup_menu_window_ParamLimits

0xbaeb,	// (0x00039945) popup_menu_window

0xbca5,	// (0x00039aff) popup_note_image_window

0xbc91,	// (0x00039aeb) popup_note_wait_window_ParamLimits

0xbc91,	// (0x00039aeb) popup_note_wait_window

0xbc91,	// (0x00039aeb) popup_note_window_ParamLimits

0xbc91,	// (0x00039aeb) popup_note_window

0xbcfb,	// (0x00039b55) popup_query_code_window_ParamLimits

0xbcfb,	// (0x00039b55) popup_query_code_window

0x5756,	// (0x000335b0) popup_query_data_code_window_ParamLimits

0x5756,	// (0x000335b0) popup_query_data_code_window

0xbd0f,	// (0x00039b69) popup_query_data_window_ParamLimits

0xbd0f,	// (0x00039b69) popup_query_data_window

0xbd27,	// (0x00039b81) popup_query_sat_info_window_ParamLimits

0xbd27,	// (0x00039b81) popup_query_sat_info_window

0xbd60,	// (0x00039bba) popup_snote_single_graphic_window_ParamLimits

0xbd60,	// (0x00039bba) popup_snote_single_graphic_window

0xbd60,	// (0x00039bba) popup_snote_single_text_window_ParamLimits

0xbd60,	// (0x00039bba) popup_snote_single_text_window

0x576d,	// (0x000335c7) popup_sub_window_general

0x57b3,	// (0x0003360d) popup_window_general_ParamLimits

0x57b3,	// (0x0003360d) popup_window_general

0x57c8,	// (0x00033622) power_save_pane

0xa643,	// (0x0003849d) control_pane_g1_ParamLimits

0xa643,	// (0x0003849d) control_pane_g1

0xa66a,	// (0x000384c4) control_pane_g2_ParamLimits

0xa66a,	// (0x000384c4) control_pane_g2

0x5650,	// (0x000334aa) control_pane_g3_ParamLimits

0x5650,	// (0x000334aa) control_pane_g3

0x0007,

0xf7a5,	// (0x0003d5ff) control_pane_g_ParamLimits

0xf7a5,	// (0x0003d5ff) control_pane_g

0xa6d5,	// (0x0003852f) control_pane_t1_ParamLimits

0xa6d5,	// (0x0003852f) control_pane_t1

0xa721,	// (0x0003857b) control_pane_t2_ParamLimits

0xa721,	// (0x0003857b) control_pane_t2

0x0002,

0xf7b6,	// (0x0003d610) control_pane_t_ParamLimits

0xf7b6,	// (0x0003d610) control_pane_t

0x5571,	// (0x000333cb) navi_navi_volume_pane_cp1

0x557a,	// (0x000333d4) status_small_icon_pane

0x5582,	// (0x000333dc) status_small_pane_g1_ParamLimits

0x5582,	// (0x000333dc) status_small_pane_g1

0x55b6,	// (0x00033410) status_small_pane_g2_ParamLimits

0x55b6,	// (0x00033410) status_small_pane_g2

0x55c2,	// (0x0003341c) status_small_pane_g3_ParamLimits

0x55c2,	// (0x0003341c) status_small_pane_g3

0x55ce,	// (0x00033428) status_small_pane_g4_ParamLimits

0x55ce,	// (0x00033428) status_small_pane_g4

0x55da,	// (0x00033434) status_small_pane_g5_ParamLimits

0x55da,	// (0x00033434) status_small_pane_g5

0x55e9,	// (0x00033443) status_small_pane_g6_ParamLimits

0x55e9,	// (0x00033443) status_small_pane_g6

0x0007,

0xf794,	// (0x0003d5ee) status_small_pane_g_ParamLimits

0xf794,	// (0x0003d5ee) status_small_pane_g

0x5619,	// (0x00033473) status_small_pane_t1

0x563c,	// (0x00033496) status_small_wait_pane_ParamLimits

0x563c,	// (0x00033496) status_small_wait_pane

0xa269,	// (0x000380c3) aid_levels_signal_ParamLimits

0xa269,	// (0x000380c3) aid_levels_signal

0xa27b,	// (0x000380d5) signal_pane_g1_ParamLimits

0xa27b,	// (0x000380d5) signal_pane_g1

0xa290,	// (0x000380ea) signal_pane_g2_ParamLimits

0xa290,	// (0x000380ea) signal_pane_g2

0x0001,

0xf729,	// (0x0003d583) signal_pane_g_ParamLimits

0xf729,	// (0x0003d583) signal_pane_g

0x4fa0,	// (0x00032dfa) context_pane_g1

0x9af3,	// (0x0003794d) title_pane_g1

0x9b1d,	// (0x00037977) title_pane_t1

0x4147,	// (0x00031fa1) title_pane_t2

0x416d,	// (0x00031fc7) title_pane_t3

0x0002,

0xf573,	// (0x0003d3cd) title_pane_t

0xc12a,	// (0x00039f84) aid_levels_battery_ParamLimits

0xc12a,	// (0x00039f84) aid_levels_battery

0xc13e,	// (0x00039f98) battery_pane_g1_ParamLimits

0xc13e,	// (0x00039f98) battery_pane_g1

0xc154,	// (0x00039fae) battery_pane_g2_ParamLimits

0xc154,	// (0x00039fae) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003d622) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003d622) battery_pane_g

0xc3e6,	// (0x0003a240) uni_indicator_pane_g1

0xc3fb,	// (0x0003a255) uni_indicator_pane_g2

0xc411,	// (0x0003a26b) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0003d791) uni_indicator_pane_g

0x52cc,	// (0x00033126) navi_icon_pane_ParamLimits

0x52cc,	// (0x00033126) navi_icon_pane

0x5213,	// (0x0003306d) navi_midp_pane

0x52e8,	// (0x00033142) navi_navi_pane

0x52f2,	// (0x0003314c) navi_text_pane_ParamLimits

0x52f2,	// (0x0003314c) navi_text_pane

0x4127,	// (0x00031f81) status_small_wait_pane_g1

0x4689,	// (0x000324e3) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0003d78c) status_small_wait_pane_g

0xc38b,	// (0x0003a1e5) navi_navi_icon_text_pane

0xc393,	// (0x0003a1ed) navi_navi_pane_g1_ParamLimits

0xc393,	// (0x0003a1ed) navi_navi_pane_g1

0xc3a5,	// (0x0003a1ff) navi_navi_pane_g2_ParamLimits

0xc3a5,	// (0x0003a1ff) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0003d75a) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0003d75a) navi_navi_pane_g

0x66b7,	// (0x00034511) navi_navi_tabs_pane

0xc3b7,	// (0x0003a211) navi_navi_text_pane

0xc38b,	// (0x0003a1e5) navi_navi_volume_pane

0xc376,	// (0x0003a1d0) navi_text_pane_t1

0xc367,	// (0x0003a1c1) navi_icon_pane_g1

0x65f8,	// (0x00034452) navi_navi_text_pane_t1

0xaae5,	// (0x0003893f) navi_navi_volume_pane_g1

0xaaed,	// (0x00038947) volume_small_pane

0xc2d9,	// (0x0003a133) navi_navi_icon_text_pane_g1

0xc2e1,	// (0x0003a13b) navi_navi_icon_text_pane_t1

0x52e8,	// (0x00033142) navi_tabs_2_long_pane

0x52e8,	// (0x00033142) navi_tabs_2_pane

0x52e8,	// (0x00033142) navi_tabs_3_long_pane

0x52e8,	// (0x00033142) navi_tabs_3_pane

0x52e8,	// (0x00033142) navi_tabs_4_pane

0xaac5,	// (0x0003891f) tabs_2_active_pane_ParamLimits

0xaac5,	// (0x0003891f) tabs_2_active_pane

0xaad5,	// (0x0003892f) tabs_2_passive_pane_ParamLimits

0xaad5,	// (0x0003892f) tabs_2_passive_pane

0xaa93,	// (0x000388ed) tabs_3_active_pane_ParamLimits

0xaa93,	// (0x000388ed) tabs_3_active_pane

0xaaa3,	// (0x000388fd) tabs_3_passive_pane_ParamLimits

0xaaa3,	// (0x000388fd) tabs_3_passive_pane

0xaab4,	// (0x0003890e) tabs_3_passive_pane_cp_ParamLimits

0xaab4,	// (0x0003890e) tabs_3_passive_pane_cp

0xaa4f,	// (0x000388a9) tabs_4_active_pane_ParamLimits

0xaa4f,	// (0x000388a9) tabs_4_active_pane

0xaa60,	// (0x000388ba) tabs_4_passive_pane_ParamLimits

0xaa60,	// (0x000388ba) tabs_4_passive_pane

0xaa71,	// (0x000388cb) tabs_4_passive_pane_cp_ParamLimits

0xaa71,	// (0x000388cb) tabs_4_passive_pane_cp

0xaa82,	// (0x000388dc) tabs_4_passive_pane_cp2_ParamLimits

0xaa82,	// (0x000388dc) tabs_4_passive_pane_cp2

0xaa2b,	// (0x00038885) tabs_2_long_active_pane_ParamLimits

0xaa2b,	// (0x00038885) tabs_2_long_active_pane

0xaa3d,	// (0x00038897) tabs_2_long_passive_pane_ParamLimits

0xaa3d,	// (0x00038897) tabs_2_long_passive_pane

0xa9e6,	// (0x00038840) tabs_3_long_active_pane_ParamLimits

0xa9e6,	// (0x00038840) tabs_3_long_active_pane

0xa9ff,	// (0x00038859) tabs_3_long_passive_pane_ParamLimits

0xa9ff,	// (0x00038859) tabs_3_long_passive_pane

0xaa12,	// (0x0003886c) tabs_3_long_passive_pane_cp_ParamLimits

0xaa12,	// (0x0003886c) tabs_3_long_passive_pane_cp

0xa98c,	// (0x000387e6) volume_small_pane_g1

0xa995,	// (0x000387ef) volume_small_pane_g2

0xa99e,	// (0x000387f8) volume_small_pane_g3

0xa9a7,	// (0x00038801) volume_small_pane_g4

0xa9b0,	// (0x0003880a) volume_small_pane_g5

0xa9b9,	// (0x00038813) volume_small_pane_g6

0xa9c2,	// (0x0003881c) volume_small_pane_g7

0xa9cb,	// (0x00038825) volume_small_pane_g8

0xa9d4,	// (0x0003882e) volume_small_pane_g9

0xa9dd,	// (0x00038837) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0003d726) volume_small_pane_g

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp2_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp2

0x9b85,	// (0x000379df) tabs_3_active_pane_g1

0x9b8d,	// (0x000379e7) tabs_3_active_pane_t1

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp2_ParamLimits

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp2

0x9b85,	// (0x000379df) tabs_3_passive_pane_g1

0x9b8d,	// (0x000379e7) tabs_3_passive_pane_t1

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp3_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp3

0x9b9f,	// (0x000379f9) tabs_4_active_pane_g1

0x9ba7,	// (0x00037a01) tabs_4_active_pane_t1

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp3_ParamLimits

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp3

0x9b9f,	// (0x000379f9) tabs_4_1_passive_pane_g1

0x9ba7,	// (0x00037a01) tabs_4_1_passive_pane_t1

0x4b6c,	// (0x000329c6) list_highlight_pane_cp2

0xc489,	// (0x0003a2e3) list_set_pane_ParamLimits

0xc489,	// (0x0003a2e3) list_set_pane

0xc52b,	// (0x0003a385) main_pane_set_t1_ParamLimits

0xc52b,	// (0x0003a385) main_pane_set_t1

0xc54b,	// (0x0003a3a5) main_pane_set_t2_ParamLimits

0xc54b,	// (0x0003a3a5) main_pane_set_t2

0xc55f,	// (0x0003a3b9) main_pane_set_t3_ParamLimits

0xc55f,	// (0x0003a3b9) main_pane_set_t3

0xc571,	// (0x0003a3cb) main_pane_set_t4_ParamLimits

0xc571,	// (0x0003a3cb) main_pane_set_t4

0x0003,

0xf99c,	// (0x0003d7f6) main_pane_set_t_ParamLimits

0xf99c,	// (0x0003d7f6) main_pane_set_t

0xc583,	// (0x0003a3dd) setting_code_pane

0xc58d,	// (0x0003a3e7) setting_slider_graphic_pane

0xc58d,	// (0x0003a3e7) setting_slider_pane

0xc58d,	// (0x0003a3e7) setting_text_pane

0xc58d,	// (0x0003a3e7) setting_volume_pane

0x9bb9,	// (0x00037a13) volume_set_pane

0x418d,	// (0x00031fe7) bg_set_opt_pane_cp

0x9bc1,	// (0x00037a1b) setting_slider_pane_t1

0x9bda,	// (0x00037a34) setting_slider_pane_t2

0x9bf3,	// (0x00037a4d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003d3d4) setting_slider_pane_t

0x9c0a,	// (0x00037a64) slider_set_pane

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp2

0x419b,	// (0x00031ff5) setting_slider_graphic_pane_g1

0x9c20,	// (0x00037a7a) setting_slider_graphic_pane_t1

0x9c2f,	// (0x00037a89) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003d3db) setting_slider_graphic_pane_t

0x9c3e,	// (0x00037a98) slider_set_pane_cp

0x4131,	// (0x00031f8b) input_focus_pane_cp1

0x6b0c,	// (0x00034966) list_set_text_pane

0x4127,	// (0x00031f81) setting_text_pane_g1

0x4131,	// (0x00031f8b) input_focus_pane_cp2

0x4127,	// (0x00031f81) setting_code_pane_g1

0x41a4,	// (0x00031ffe) setting_code_pane_t1

0x88e2,	// (0x0003673c) set_text_pane_t1_ParamLimits

0x88e2,	// (0x0003673c) set_text_pane_t1

0x4a7c,	// (0x000328d6) set_opt_bg_pane_g1

0x4a84,	// (0x000328de) set_opt_bg_pane_g2

0x6aec,	// (0x00034946) set_opt_bg_pane_g3

0x4a94,	// (0x000328ee) set_opt_bg_pane_g4

0x4a9c,	// (0x000328f6) set_opt_bg_pane_g5

0x4aa4,	// (0x000328fe) set_opt_bg_pane_g6

0x6af4,	// (0x0003494e) set_opt_bg_pane_g7

0x6afc,	// (0x00034956) set_opt_bg_pane_g8

0x6b04,	// (0x0003495e) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0003d7e3) set_opt_bg_pane_g

0x6adf,	// (0x00034939) slider_set_pane_g1

0xab5a,	// (0x000389b4) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0003d7d4) slider_set_pane_g

0xaaf6,	// (0x00038950) volume_set_pane_g1

0xaafe,	// (0x00038958) volume_set_pane_g2

0xab06,	// (0x00038960) volume_set_pane_g3

0xab0e,	// (0x00038968) volume_set_pane_g4

0xab16,	// (0x00038970) volume_set_pane_g5

0xab1e,	// (0x00038978) volume_set_pane_g6

0xab26,	// (0x00038980) volume_set_pane_g7

0xab2e,	// (0x00038988) volume_set_pane_g8

0xab36,	// (0x00038990) volume_set_pane_g9

0xab3e,	// (0x00038998) volume_set_pane_g10

0x0009,

0xf952,	// (0x0003d7ac) volume_set_pane_g

0x9c46,	// (0x00037aa0) indicator_pane_ParamLimits

0x9c46,	// (0x00037aa0) indicator_pane

0x9c52,	// (0x00037aac) main_idle_pane_g2_ParamLimits

0x9c52,	// (0x00037aac) main_idle_pane_g2

0x9c7a,	// (0x00037ad4) main_pane_idle_g1_ParamLimits

0x9c7a,	// (0x00037ad4) main_pane_idle_g1

0x41b2,	// (0x0003200c) popup_clock_digital_analogue_window_ParamLimits

0x41b2,	// (0x0003200c) popup_clock_digital_analogue_window

0x9c87,	// (0x00037ae1) soft_indicator_pane_ParamLimits

0x9c87,	// (0x00037ae1) soft_indicator_pane

0x9c93,	// (0x00037aed) wallpaper_pane_ParamLimits

0x9c93,	// (0x00037aed) wallpaper_pane

0x4127,	// (0x00031f81) wallpaper_pane_g1

0x9c9f,	// (0x00037af9) indicator_pane_g1_ParamLimits

0x9c9f,	// (0x00037af9) indicator_pane_g1

0x6c53,	// (0x00034aad) navi_navi_icon_text_pane_srt_g1

0x41e0,	// (0x0003203a) soft_indicator_pane_t1

0x41fa,	// (0x00032054) aid_ps_area_pane

0x9cab,	// (0x00037b05) aid_ps_clock_pane

0x420b,	// (0x00032065) aid_ps_indicator_pane

0x4217,	// (0x00032071) indicator_ps_pane_ParamLimits

0x4217,	// (0x00032071) indicator_ps_pane

0x4226,	// (0x00032080) power_save_pane_g1_ParamLimits

0x4226,	// (0x00032080) power_save_pane_g1

0x4232,	// (0x0003208c) power_save_pane_g2_ParamLimits

0x4232,	// (0x0003208c) power_save_pane_g2

0x9722,	// (0x0003757c) aid_navinavi_width_pane

0x41fa,	// (0x00032054) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003d3e0) power_save_pane_g_ParamLimits

0xf586,	// (0x0003d3e0) power_save_pane_g

0x4240,	// (0x0003209a) power_save_pane_t1_ParamLimits

0x4240,	// (0x0003209a) power_save_pane_t1

0x9cab,	// (0x00037b05) aid_ps_clock_pane_ParamLimits

0x420b,	// (0x00032065) aid_ps_indicator_pane_ParamLimits

0x4252,	// (0x000320ac) power_save_pane_t4_ParamLimits

0x4252,	// (0x000320ac) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003d3e5) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003d3e5) power_save_pane_t

0x427c,	// (0x000320d6) power_save_t3_ParamLimits

0x427c,	// (0x000320d6) power_save_t3

0x4267,	// (0x000320c1) power_save_t2_ParamLimits

0x4267,	// (0x000320c1) power_save_t2

0x4291,	// (0x000320eb) indicator_ps_pane_g1

0x9cb9,	// (0x00037b13) ai_gene_pane_ParamLimits

0x9cb9,	// (0x00037b13) ai_gene_pane

0x9cc5,	// (0x00037b1f) ai_links_pane_ParamLimits

0x9cc5,	// (0x00037b1f) ai_links_pane

0x9cd1,	// (0x00037b2b) indicator_pane_cp1_ParamLimits

0x9cd1,	// (0x00037b2b) indicator_pane_cp1

0x9cdd,	// (0x00037b37) main_pane_idle_g1_cp_ParamLimits

0x9cdd,	// (0x00037b37) main_pane_idle_g1_cp

0x429a,	// (0x000320f4) popup_ai_links_title_window

0x9ce9,	// (0x00037b43) soft_indicator_pane_cp1_ParamLimits

0x9ce9,	// (0x00037b43) soft_indicator_pane_cp1

0x6933,	// (0x0003478d) ai_links_pane_g1

0x693c,	// (0x00034796) grid_ai_links_pane

0xc3db,	// (0x0003a235) ai_gene_pane_1

0x6921,	// (0x0003477b) ai_gene_pane_2

0x692a,	// (0x00034784) list_highlight_pane_cp4

0xc3bf,	// (0x0003a219) cell_ai_link_pane_ParamLimits

0xc3bf,	// (0x0003a219) cell_ai_link_pane

0x6919,	// (0x00034773) cell_ai_link_pane_g1

0x4689,	// (0x000324e3) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0003d787) cell_ai_link_pane_g

0x4131,	// (0x00031f8b) grid_highlight_cp2

0x4131,	// (0x00031f8b) bg_popup_sub_pane_cp1

0x42b1,	// (0x0003210b) popup_ai_links_title_window_t1

0x685b,	// (0x000346b5) ai_gene_pane_1_g1_ParamLimits

0x685b,	// (0x000346b5) ai_gene_pane_1_g1

0x6867,	// (0x000346c1) ai_gene_pane_1_g2_ParamLimits

0x6867,	// (0x000346c1) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0003d77d) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0003d77d) ai_gene_pane_1_g

0x6874,	// (0x000346ce) ai_gene_pane_1_t1_ParamLimits

0x6874,	// (0x000346ce) ai_gene_pane_1_t1

0x68a8,	// (0x00034702) grid_ai_soft_ind_pane

0x6846,	// (0x000346a0) ai_gene_pane_2_t1_ParamLimits

0x6846,	// (0x000346a0) ai_gene_pane_2_t1

0x9cf5,	// (0x00037b4f) main_pane_empty_t1_ParamLimits

0x9cf5,	// (0x00037b4f) main_pane_empty_t1

0x9d0d,	// (0x00037b67) main_pane_empty_t2_ParamLimits

0x9d0d,	// (0x00037b67) main_pane_empty_t2

0x9d22,	// (0x00037b7c) main_pane_empty_t3_ParamLimits

0x9d22,	// (0x00037b7c) main_pane_empty_t3

0x9d34,	// (0x00037b8e) main_pane_empty_t4_ParamLimits

0x9d34,	// (0x00037b8e) main_pane_empty_t4

0x9d46,	// (0x00037ba0) main_pane_empty_t5_ParamLimits

0x9d46,	// (0x00037ba0) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003d3ea) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003d3ea) main_pane_empty_t

0x4acd,	// (0x00032927) bg_popup_window_pane_ParamLimits

0x4acd,	// (0x00032927) bg_popup_window_pane

0x6606,	// (0x00034460) find_popup_pane_cp2_ParamLimits

0x6606,	// (0x00034460) find_popup_pane_cp2

0x6612,	// (0x0003446c) heading_pane_ParamLimits

0x6612,	// (0x0003446c) heading_pane

0x4131,	// (0x00031f8b) bg_popup_sub_pane

0xc2fb,	// (0x0003a155) bg_popup_window_pane_g1_ParamLimits

0xc2fb,	// (0x0003a155) bg_popup_window_pane_g1

0xc307,	// (0x0003a161) bg_popup_window_pane_g2_ParamLimits

0xc307,	// (0x0003a161) bg_popup_window_pane_g2

0xc313,	// (0x0003a16d) bg_popup_window_pane_g3_ParamLimits

0xc313,	// (0x0003a16d) bg_popup_window_pane_g3

0xc31f,	// (0x0003a179) bg_popup_window_pane_g4_ParamLimits

0xc31f,	// (0x0003a179) bg_popup_window_pane_g4

0xc32b,	// (0x0003a185) bg_popup_window_pane_g5_ParamLimits

0xc32b,	// (0x0003a185) bg_popup_window_pane_g5

0xc337,	// (0x0003a191) bg_popup_window_pane_g6_ParamLimits

0xc337,	// (0x0003a191) bg_popup_window_pane_g6

0xc343,	// (0x0003a19d) bg_popup_window_pane_g7_ParamLimits

0xc343,	// (0x0003a19d) bg_popup_window_pane_g7

0xc34f,	// (0x0003a1a9) bg_popup_window_pane_g8_ParamLimits

0xc34f,	// (0x0003a1a9) bg_popup_window_pane_g8

0xc35b,	// (0x0003a1b5) bg_popup_window_pane_g9_ParamLimits

0xc35b,	// (0x0003a1b5) bg_popup_window_pane_g9

0x65ec,	// (0x00034446) bg_popup_window_pane_g10_ParamLimits

0x65ec,	// (0x00034446) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0003d745) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0003d745) bg_popup_window_pane_g

0x65a3,	// (0x000343fd) bg_popup_heading_pane_ParamLimits

0x65a3,	// (0x000343fd) bg_popup_heading_pane

0xac98,	// (0x00038af2) tabs_4_passive_pane_cp_srt_ParamLimits

0xac98,	// (0x00038af2) tabs_4_passive_pane_cp_srt

0xacaa,	// (0x00038b04) tabs_4_passive_pane_srt_ParamLimits

0x65b7,	// (0x00034411) heading_pane_g2

0xacaa,	// (0x00038b04) tabs_4_passive_pane_srt

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp3_srt

0x65bf,	// (0x00034419) heading_pane_t1_ParamLimits

0x65bf,	// (0x00034419) heading_pane_t1

0x65d6,	// (0x00034430) heading_pane_t2_ParamLimits

0x65d6,	// (0x00034430) heading_pane_t2

0x0001,

0xf8e6,	// (0x0003d740) heading_pane_t_ParamLimits

0xf8e6,	// (0x0003d740) heading_pane_t

0x60de,	// (0x00033f38) bg_popup_heading_pane_g1

0x616f,	// (0x00033fc9) bg_popup_heading_pane_g2

0x6179,	// (0x00033fd3) bg_popup_heading_pane_g3

0x6183,	// (0x00033fdd) bg_popup_heading_pane_g4

0x618d,	// (0x00033fe7) bg_popup_heading_pane_g5

0x6197,	// (0x00033ff1) bg_popup_heading_pane_g6

0x619f,	// (0x00033ff9) bg_popup_heading_pane_g7

0x61a7,	// (0x00034001) bg_popup_heading_pane_g8

0x61b1,	// (0x0003400b) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0003d6fc) bg_popup_heading_pane_g

0x59a4,	// (0x000337fe) bg_popup_sub_pane_g1

0x59b4,	// (0x0003380e) bg_popup_sub_pane_g2

0x59ac,	// (0x00033806) bg_popup_sub_pane_g3

0x59c4,	// (0x0003381e) bg_popup_sub_pane_g4

0x59bc,	// (0x00033816) bg_popup_sub_pane_g5

0x59cc,	// (0x00033826) bg_popup_sub_pane_g6

0x59d4,	// (0x0003382e) bg_popup_sub_pane_g7

0x59e4,	// (0x0003383e) bg_popup_sub_pane_g8

0x59dc,	// (0x00033836) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0003d6d6) bg_popup_sub_pane_g

0x417f,	// (0x00031fd9) bg_popup_window_pane_cp5_ParamLimits

0x417f,	// (0x00031fd9) bg_popup_window_pane_cp5

0x450f,	// (0x00032369) popup_note_window_g1_ParamLimits

0x450f,	// (0x00032369) popup_note_window_g1

0x451b,	// (0x00032375) popup_note_window_t1_ParamLimits

0x451b,	// (0x00032375) popup_note_window_t1

0x452d,	// (0x00032387) popup_note_window_t2_ParamLimits

0x452d,	// (0x00032387) popup_note_window_t2

0x453f,	// (0x00032399) popup_note_window_t3_ParamLimits

0x453f,	// (0x00032399) popup_note_window_t3

0x4551,	// (0x000323ab) popup_note_window_t4_ParamLimits

0x4551,	// (0x000323ab) popup_note_window_t4

0x4579,	// (0x000323d3) popup_note_window_t5_ParamLimits

0x4579,	// (0x000323d3) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003d3f5) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003d3f5) popup_note_window_t

0x459d,	// (0x000323f7) bg_popup_window_pane_cp6_ParamLimits

0x459d,	// (0x000323f7) bg_popup_window_pane_cp6

0x6052,	// (0x00033eac) popup_note_image_window_g1_ParamLimits

0x6052,	// (0x00033eac) popup_note_image_window_g1

0x605e,	// (0x00033eb8) popup_note_image_window_g2_ParamLimits

0x605e,	// (0x00033eb8) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0003d6ca) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0003d6ca) popup_note_image_window_g

0x6077,	// (0x00033ed1) popup_note_image_window_t1_ParamLimits

0x6077,	// (0x00033ed1) popup_note_image_window_t1

0x6090,	// (0x00033eea) popup_note_image_window_t2_ParamLimits

0x6090,	// (0x00033eea) popup_note_image_window_t2

0x60a9,	// (0x00033f03) popup_note_image_window_t3_ParamLimits

0x60a9,	// (0x00033f03) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0003d6cf) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0003d6cf) popup_note_image_window_t

0x5f2f,	// (0x00033d89) bg_popup_window_pane_cp7_ParamLimits

0x5f2f,	// (0x00033d89) bg_popup_window_pane_cp7

0x5f5f,	// (0x00033db9) popup_note_wait_window_g1_ParamLimits

0x5f5f,	// (0x00033db9) popup_note_wait_window_g1

0x5f6b,	// (0x00033dc5) popup_note_wait_window_g2_ParamLimits

0x5f6b,	// (0x00033dc5) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0003d6b8) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0003d6b8) popup_note_wait_window_g

0x5f83,	// (0x00033ddd) popup_note_wait_window_t1_ParamLimits

0x5f83,	// (0x00033ddd) popup_note_wait_window_t1

0x5faa,	// (0x00033e04) popup_note_wait_window_t2_ParamLimits

0x5faa,	// (0x00033e04) popup_note_wait_window_t2

0x5fc7,	// (0x00033e21) popup_note_wait_window_t3_ParamLimits

0x5fc7,	// (0x00033e21) popup_note_wait_window_t3

0x5fda,	// (0x00033e34) popup_note_wait_window_t4_ParamLimits

0x5fda,	// (0x00033e34) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0003d6bf) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0003d6bf) popup_note_wait_window_t

0x5fff,	// (0x00033e59) wait_bar_pane_ParamLimits

0x5fff,	// (0x00033e59) wait_bar_pane

0x4131,	// (0x00031f8b) wait_anim_pane

0x4131,	// (0x00031f8b) wait_border_pane

0x4127,	// (0x00031f81) wait_anim_pane_g1

0x4127,	// (0x00031f81) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0003d57e) wait_anim_pane_g

0x5ed3,	// (0x00033d2d) wait_border_pane_g1

0x5ede,	// (0x00033d38) wait_border_pane_g2

0x5ee7,	// (0x00033d41) wait_border_pane_g3

0x0002,

0xf857,	// (0x0003d6b1) wait_border_pane_g

0x5d43,	// (0x00033b9d) bg_popup_window_pane_cp16_ParamLimits

0x5d43,	// (0x00033b9d) bg_popup_window_pane_cp16

0x5e43,	// (0x00033c9d) indicator_popup_pane_cp4_ParamLimits

0x5e43,	// (0x00033c9d) indicator_popup_pane_cp4

0x5e57,	// (0x00033cb1) popup_query_data_window_t1_ParamLimits

0x5e57,	// (0x00033cb1) popup_query_data_window_t1

0x5e69,	// (0x00033cc3) popup_query_data_window_t2_ParamLimits

0x5e69,	// (0x00033cc3) popup_query_data_window_t2

0x5e82,	// (0x00033cdc) popup_query_data_window_t3_ParamLimits

0x5e82,	// (0x00033cdc) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0003d6aa) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0003d6aa) popup_query_data_window_t

0x5e9c,	// (0x00033cf6) query_popup_data_pane_ParamLimits

0x5e9c,	// (0x00033cf6) query_popup_data_pane

0x5eb0,	// (0x00033d0a) query_popup_data_pane_cp1_ParamLimits

0x5eb0,	// (0x00033d0a) query_popup_data_pane_cp1

0x5d43,	// (0x00033b9d) bg_popup_window_pane_cp10_ParamLimits

0x5d43,	// (0x00033b9d) bg_popup_window_pane_cp10

0x5d75,	// (0x00033bcf) indicator_popup_pane_ParamLimits

0x5d75,	// (0x00033bcf) indicator_popup_pane

0x5d97,	// (0x00033bf1) popup_query_code_window_t1_ParamLimits

0x5d97,	// (0x00033bf1) popup_query_code_window_t1

0x5db1,	// (0x00033c0b) popup_query_code_window_t2_ParamLimits

0x5db1,	// (0x00033c0b) popup_query_code_window_t2

0x5dfa,	// (0x00033c54) popup_query_code_window_t3_ParamLimits

0x5dfa,	// (0x00033c54) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0003d6a3) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0003d6a3) popup_query_code_window_t

0x5e29,	// (0x00033c83) query_popup_pane_ParamLimits

0x5e29,	// (0x00033c83) query_popup_pane

0x459d,	// (0x000323f7) bg_popup_window_pane_cp15_ParamLimits

0x459d,	// (0x000323f7) bg_popup_window_pane_cp15

0x45bb,	// (0x00032415) indicator_popup_pane_cp1_ParamLimits

0x45bb,	// (0x00032415) indicator_popup_pane_cp1

0x45ce,	// (0x00032428) indicator_popup_pane_cp2_ParamLimits

0x45ce,	// (0x00032428) indicator_popup_pane_cp2

0x45e1,	// (0x0003243b) popup_query_data_code_window_g1_ParamLimits

0x45e1,	// (0x0003243b) popup_query_data_code_window_g1

0x45f4,	// (0x0003244e) popup_query_data_code_window_t1_ParamLimits

0x45f4,	// (0x0003244e) popup_query_data_code_window_t1

0x4606,	// (0x00032460) popup_query_data_code_window_t2_ParamLimits

0x4606,	// (0x00032460) popup_query_data_code_window_t2

0x4618,	// (0x00032472) popup_query_data_code_window_t3_ParamLimits

0x4618,	// (0x00032472) popup_query_data_code_window_t3

0x462e,	// (0x00032488) popup_query_data_code_window_t4_ParamLimits

0x462e,	// (0x00032488) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003d400) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003d400) popup_query_data_code_window_t

0x5288,	// (0x000330e2) list_single_midp_graphic_pane_g3

0x4646,	// (0x000324a0) query_popup_data_pane_cp2_ParamLimits

0x4659,	// (0x000324b3) query_popup_pane_cp2_ParamLimits

0x4659,	// (0x000324b3) query_popup_pane_cp2

0x4131,	// (0x00031f8b) bg_popup_window_pane_cp11

0x5d3b,	// (0x00033b95) heading_pane_cp5

0x46e7,	// (0x00032541) listscroll_popup_info_pane

0x4131,	// (0x00031f8b) input_focus_pane_cp3

0x466c,	// (0x000324c6) query_popup_pane_t1

0x467a,	// (0x000324d4) list_popup_info_pane_ParamLimits

0x467a,	// (0x000324d4) list_popup_info_pane

0x4689,	// (0x000324e3) listscroll_popup_info_pane_g1

0x4691,	// (0x000324eb) scroll_pane_cp7

0x469b,	// (0x000324f5) popup_info_list_pane_t1_ParamLimits

0x469b,	// (0x000324f5) popup_info_list_pane_t1

0x46b5,	// (0x0003250f) popup_info_list_pane_t2_ParamLimits

0x46b5,	// (0x0003250f) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003d409) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003d409) popup_info_list_pane_t

0x4131,	// (0x00031f8b) bg_popup_window_pane_cp12

0x6c6d,	// (0x00034ac7) find_popup_pane

0x418d,	// (0x00031fe7) bg_popup_window_pane_cp3

0x46cf,	// (0x00032529) heading_pane_cp3

0x46db,	// (0x00032535) listscroll_popup_graphic_pane

0x4131,	// (0x00031f8b) bg_popup_window_pane_cp4

0x9daa,	// (0x00037c04) heading_pane_cp4

0x46e7,	// (0x00032541) listscroll_popup_colour_pane

0x46ef,	// (0x00032549) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x46ef,	// (0x00032549) cell_large_graphic_colour_none_popup_pane

0x9db4,	// (0x00037c0e) grid_large_graphic_colour_popup_pane_ParamLimits

0x9db4,	// (0x00037c0e) grid_large_graphic_colour_popup_pane

0x4703,	// (0x0003255d) listscroll_popup_colour_pane_g1_ParamLimits

0x4703,	// (0x0003255d) listscroll_popup_colour_pane_g1

0x471a,	// (0x00032574) listscroll_popup_colour_pane_g2_ParamLimits

0x471a,	// (0x00032574) listscroll_popup_colour_pane_g2

0x4731,	// (0x0003258b) listscroll_popup_colour_pane_g3_ParamLimits

0x4731,	// (0x0003258b) listscroll_popup_colour_pane_g3

0x9dd8,	// (0x00037c32) listscroll_popup_colour_pane_g4_ParamLimits

0x9dd8,	// (0x00037c32) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003d40e) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003d40e) listscroll_popup_colour_pane_g

0x4741,	// (0x0003259b) scroll_pane_cp6_ParamLimits

0x4741,	// (0x0003259b) scroll_pane_cp6

0x9de7,	// (0x00037c41) cell_large_graphic_colour_popup_pane_ParamLimits

0x9de7,	// (0x00037c41) cell_large_graphic_colour_popup_pane

0x4753,	// (0x000325ad) cell_large_graphic_colour_none_popup_pane_t1

0x4131,	// (0x00031f8b) grid_highlight_pane_cp5

0x4762,	// (0x000325bc) cell_large_graphic_colour_popup_pane_g1

0x476a,	// (0x000325c4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003d417) cell_large_graphic_colour_popup_pane_g

0x4772,	// (0x000325cc) cell_large_graphic_colour_popup_pane_g2_copy1

0x477b,	// (0x000325d5) grid_highlight_pane_cp4

0x4783,	// (0x000325dd) bg_popup_window_pane_cp8_ParamLimits

0x4783,	// (0x000325dd) bg_popup_window_pane_cp8

0x479e,	// (0x000325f8) popup_snote_single_text_window_g1_ParamLimits

0x479e,	// (0x000325f8) popup_snote_single_text_window_g1

0x47b0,	// (0x0003260a) popup_snote_single_text_window_t1_ParamLimits

0x47b0,	// (0x0003260a) popup_snote_single_text_window_t1

0x47c3,	// (0x0003261d) popup_snote_single_text_window_t2_ParamLimits

0x47c3,	// (0x0003261d) popup_snote_single_text_window_t2

0x47d6,	// (0x00032630) popup_snote_single_text_window_t3_ParamLimits

0x47d6,	// (0x00032630) popup_snote_single_text_window_t3

0x480f,	// (0x00032669) popup_snote_single_text_window_t4_ParamLimits

0x480f,	// (0x00032669) popup_snote_single_text_window_t4

0x4843,	// (0x0003269d) popup_snote_single_text_window_t5_ParamLimits

0x4843,	// (0x0003269d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003d41c) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003d41c) popup_snote_single_text_window_t

0x4872,	// (0x000326cc) bg_popup_window_pane_cp9_ParamLimits

0x4872,	// (0x000326cc) bg_popup_window_pane_cp9

0x479e,	// (0x000325f8) popup_snote_single_graphic_window_g1_ParamLimits

0x479e,	// (0x000325f8) popup_snote_single_graphic_window_g1

0x4880,	// (0x000326da) popup_snote_single_graphic_window_g2_ParamLimits

0x4880,	// (0x000326da) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003d427) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003d427) popup_snote_single_graphic_window_g

0x488c,	// (0x000326e6) popup_snote_single_graphic_window_t1_ParamLimits

0x488c,	// (0x000326e6) popup_snote_single_graphic_window_t1

0x489f,	// (0x000326f9) popup_snote_single_graphic_window_t2_ParamLimits

0x489f,	// (0x000326f9) popup_snote_single_graphic_window_t2

0x48b2,	// (0x0003270c) popup_snote_single_graphic_window_t3_ParamLimits

0x48b2,	// (0x0003270c) popup_snote_single_graphic_window_t3

0x48eb,	// (0x00032745) popup_snote_single_graphic_window_t4_ParamLimits

0x48eb,	// (0x00032745) popup_snote_single_graphic_window_t4

0x491f,	// (0x00032779) popup_snote_single_graphic_window_t5_ParamLimits

0x491f,	// (0x00032779) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003d42c) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003d42c) popup_snote_single_graphic_window_t

0x6bf1,	// (0x00034a4b) grid_graphic_popup_pane_ParamLimits

0x6bf1,	// (0x00034a4b) grid_graphic_popup_pane

0x6c1d,	// (0x00034a77) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c1d,	// (0x00034a77) listscroll_popup_graphic_pane_g1

0xc659,	// (0x0003a4b3) listscroll_popup_graphic_pane_g2_ParamLimits

0xc659,	// (0x0003a4b3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0003d820) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0003d820) listscroll_popup_graphic_pane_g

0x6513,	// (0x0003436d) scroll_pane_cp5

0xc61a,	// (0x0003a474) cell_graphic_popup_pane_ParamLimits

0xc61a,	// (0x0003a474) cell_graphic_popup_pane

0x6bbc,	// (0x00034a16) cell_graphic_popup_pane_g1

0x6bc4,	// (0x00034a1e) cell_graphic_popup_pane_g2

0x4772,	// (0x000325cc) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0003d819) cell_graphic_popup_pane_g

0x6bcd,	// (0x00034a27) cell_graphic_popup_pane_t2

0x477b,	// (0x000325d5) grid_highlight_pane_cp3

0x4960,	// (0x000327ba) list_gen_pane_ParamLimits

0x4960,	// (0x000327ba) list_gen_pane

0x4988,	// (0x000327e2) scroll_pane

0xc5cd,	// (0x0003a427) bg_list_pane_g1_ParamLimits

0xc5cd,	// (0x0003a427) bg_list_pane_g1

0x6b6b,	// (0x000349c5) bg_list_pane_g2_ParamLimits

0x6b6b,	// (0x000349c5) bg_list_pane_g2

0x6b7e,	// (0x000349d8) bg_list_pane_g3_ParamLimits

0x6b7e,	// (0x000349d8) bg_list_pane_g3

0x6b90,	// (0x000349ea) bg_list_pane_g4_ParamLimits

0x6b90,	// (0x000349ea) bg_list_pane_g4

0xc5e8,	// (0x0003a442) bg_list_pane_g5_ParamLimits

0xc5e8,	// (0x0003a442) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0003d80e) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0003d80e) bg_list_pane_g

0xabbe,	// (0x00038a18) list_double2_graphic_large_graphic_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double2_graphic_large_graphic_pane

0xabbe,	// (0x00038a18) list_double2_graphic_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double2_graphic_pane

0xabbe,	// (0x00038a18) list_double2_large_graphic_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double2_large_graphic_pane

0xabbe,	// (0x00038a18) list_double2_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double2_pane

0xabbe,	// (0x00038a18) list_double_graphic_heading_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_graphic_heading_pane

0xabbe,	// (0x00038a18) list_double_graphic_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_graphic_pane

0xabbe,	// (0x00038a18) list_double_heading_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_heading_pane

0xabbe,	// (0x00038a18) list_double_large_graphic_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_large_graphic_pane

0xabbe,	// (0x00038a18) list_double_number_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_number_pane

0xabbe,	// (0x00038a18) list_double_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_pane

0xabbe,	// (0x00038a18) list_double_time_pane_ParamLimits

0xabbe,	// (0x00038a18) list_double_time_pane

0xabbe,	// (0x00038a18) list_setting_number_pane_ParamLimits

0xabbe,	// (0x00038a18) list_setting_number_pane

0xabbe,	// (0x00038a18) list_setting_pane_ParamLimits

0xabbe,	// (0x00038a18) list_setting_pane

0xac02,	// (0x00038a5c) list_single_2graphic_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_2graphic_pane

0xac02,	// (0x00038a5c) list_single_graphic_heading_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_graphic_heading_pane

0xac02,	// (0x00038a5c) list_single_graphic_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_graphic_pane

0xac02,	// (0x00038a5c) list_single_heading_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_heading_pane

0xac4e,	// (0x00038aa8) list_single_large_graphic_pane_ParamLimits

0xac4e,	// (0x00038aa8) list_single_large_graphic_pane

0xac02,	// (0x00038a5c) list_single_number_heading_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_number_heading_pane

0xac02,	// (0x00038a5c) list_single_number_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_number_pane

0xac02,	// (0x00038a5c) list_single_pane_ParamLimits

0xac02,	// (0x00038a5c) list_single_pane

0x4131,	// (0x00031f8b) list_highlight_pane_cp1

0x53cd,	// (0x00033227) list_single_pane_g1_ParamLimits

0x53cd,	// (0x00033227) list_single_pane_g1

0x8907,	// (0x00036761) list_single_pane_g2_ParamLimits

0x8907,	// (0x00036761) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0003d448) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0003d448) list_single_pane_g

0x91a0,	// (0x00036ffa) list_single_pane_t1_ParamLimits

0x91a0,	// (0x00036ffa) list_single_pane_t1

0x53cd,	// (0x00033227) list_single_number_pane_g1_ParamLimits

0x53cd,	// (0x00033227) list_single_number_pane_g1

0x8907,	// (0x00036761) list_single_number_pane_g2_ParamLimits

0x8907,	// (0x00036761) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0003d448) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0003d448) list_single_number_pane_g

0x9148,	// (0x00036fa2) list_single_number_pane_t1_ParamLimits

0x9148,	// (0x00036fa2) list_single_number_pane_t1

0x915e,	// (0x00036fb8) list_single_number_pane_t2_ParamLimits

0x915e,	// (0x00036fb8) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0003d7cf) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0003d7cf) list_single_number_pane_t

0x88fb,	// (0x00036755) list_single_graphic_pane_g1_ParamLimits

0x88fb,	// (0x00036755) list_single_graphic_pane_g1

0x53cd,	// (0x00033227) list_single_graphic_pane_g2_ParamLimits

0x53cd,	// (0x00033227) list_single_graphic_pane_g2

0x8907,	// (0x00036761) list_single_graphic_pane_g3_ParamLimits

0x8907,	// (0x00036761) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003d437) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003d437) list_single_graphic_pane_g

0x8913,	// (0x0003676d) list_single_graphic_pane_t1_ParamLimits

0x8913,	// (0x0003676d) list_single_graphic_pane_t1

0x8929,	// (0x00036783) list_single_heading_pane_g1_ParamLimits

0x8929,	// (0x00036783) list_single_heading_pane_g1

0x8907,	// (0x00036761) list_single_heading_pane_g2_ParamLimits

0x8907,	// (0x00036761) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003d43e) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003d43e) list_single_heading_pane_g

0x893c,	// (0x00036796) list_single_heading_pane_t1_ParamLimits

0x893c,	// (0x00036796) list_single_heading_pane_t1

0x9e10,	// (0x00037c6a) list_single_heading_pane_t2_ParamLimits

0x9e10,	// (0x00037c6a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003d443) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003d443) list_single_heading_pane_t

0x53cd,	// (0x00033227) list_single_number_heading_pane_g1_ParamLimits

0x53cd,	// (0x00033227) list_single_number_heading_pane_g1

0x8907,	// (0x00036761) list_single_number_heading_pane_g2_ParamLimits

0x8907,	// (0x00036761) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0003d448) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0003d448) list_single_number_heading_pane_g

0x8952,	// (0x000367ac) list_single_number_heading_pane_t1_ParamLimits

0x8952,	// (0x000367ac) list_single_number_heading_pane_t1

0x8968,	// (0x000367c2) list_single_number_heading_pane_t2_ParamLimits

0x8968,	// (0x000367c2) list_single_number_heading_pane_t2

0x897a,	// (0x000367d4) list_single_number_heading_pane_t3_ParamLimits

0x897a,	// (0x000367d4) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0003d44d) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0003d44d) list_single_number_heading_pane_t

0x898c,	// (0x000367e6) list_single_graphic_heading_pane_g1_ParamLimits

0x898c,	// (0x000367e6) list_single_graphic_heading_pane_g1

0x89a2,	// (0x000367fc) list_single_graphic_heading_pane_g4_ParamLimits

0x89a2,	// (0x000367fc) list_single_graphic_heading_pane_g4

0x8907,	// (0x00036761) list_single_graphic_heading_pane_g5_ParamLimits

0x8907,	// (0x00036761) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0003d454) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0003d454) list_single_graphic_heading_pane_g

0x8952,	// (0x000367ac) list_single_graphic_heading_pane_t1_ParamLimits

0x8952,	// (0x000367ac) list_single_graphic_heading_pane_t1

0x89b3,	// (0x0003680d) list_single_graphic_heading_pane_t2_ParamLimits

0x89b3,	// (0x0003680d) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0003d45b) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0003d45b) list_single_graphic_heading_pane_t

0x9e22,	// (0x00037c7c) list_single_large_graphic_pane_g1_ParamLimits

0x9e22,	// (0x00037c7c) list_single_large_graphic_pane_g1

0x9e2e,	// (0x00037c88) list_single_large_graphic_pane_g2_ParamLimits

0x9e2e,	// (0x00037c88) list_single_large_graphic_pane_g2

0x9e3a,	// (0x00037c94) list_single_large_graphic_pane_g3_ParamLimits

0x9e3a,	// (0x00037c94) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0003d460) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0003d460) list_single_large_graphic_pane_g

0x5ede,	// (0x00033d38) wait_border_pane_g2_copy1

0x9e46,	// (0x00037ca0) list_single_large_graphic_pane_g4_cp2

0x89cb,	// (0x00036825) list_single_large_graphic_pane_t1_ParamLimits

0x89cb,	// (0x00036825) list_single_large_graphic_pane_t1

0x9e4e,	// (0x00037ca8) list_double_pane_g1_ParamLimits

0x9e4e,	// (0x00037ca8) list_double_pane_g1

0x9e5a,	// (0x00037cb4) list_double_pane_g2_ParamLimits

0x9e5a,	// (0x00037cb4) list_double_pane_g2

0x0001,

0xf60d,	// (0x0003d467) list_double_pane_g_ParamLimits

0xf60d,	// (0x0003d467) list_double_pane_g

0x89e1,	// (0x0003683b) list_double_pane_t1_ParamLimits

0x89e1,	// (0x0003683b) list_double_pane_t1

0x89f7,	// (0x00036851) list_double_pane_t2_ParamLimits

0x89f7,	// (0x00036851) list_double_pane_t2

0x0001,

0xf612,	// (0x0003d46c) list_double_pane_t_ParamLimits

0xf612,	// (0x0003d46c) list_double_pane_t

0x8a09,	// (0x00036863) list_double2_pane_g1_ParamLimits

0x8a09,	// (0x00036863) list_double2_pane_g1

0x8a1a,	// (0x00036874) list_double2_pane_g2_ParamLimits

0x8a1a,	// (0x00036874) list_double2_pane_g2

0x0001,

0xf617,	// (0x0003d471) list_double2_pane_g_ParamLimits

0xf617,	// (0x0003d471) list_double2_pane_g

0x8a26,	// (0x00036880) list_double2_pane_t1_ParamLimits

0x8a26,	// (0x00036880) list_double2_pane_t1

0x8a3c,	// (0x00036896) list_double2_pane_t2_ParamLimits

0x8a3c,	// (0x00036896) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0003d476) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0003d476) list_double2_pane_t

0x9e4e,	// (0x00037ca8) list_double_number_pane_g1_ParamLimits

0x9e4e,	// (0x00037ca8) list_double_number_pane_g1

0x9e5a,	// (0x00037cb4) list_double_number_pane_g2_ParamLimits

0x9e5a,	// (0x00037cb4) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0003d467) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0003d467) list_double_number_pane_g

0x8a4e,	// (0x000368a8) list_double_number_pane_t1_ParamLimits

0x8a4e,	// (0x000368a8) list_double_number_pane_t1

0x8a60,	// (0x000368ba) list_double_number_pane_t2_ParamLimits

0x8a60,	// (0x000368ba) list_double_number_pane_t2

0x8a76,	// (0x000368d0) list_double_number_pane_t3_ParamLimits

0x8a76,	// (0x000368d0) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0003d47b) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0003d47b) list_double_number_pane_t

0x8a88,	// (0x000368e2) list_double_graphic_pane_g1_ParamLimits

0x8a88,	// (0x000368e2) list_double_graphic_pane_g1

0x9e66,	// (0x00037cc0) list_double_graphic_pane_g2_ParamLimits

0x9e66,	// (0x00037cc0) list_double_graphic_pane_g2

0x9e75,	// (0x00037ccf) list_double_graphic_pane_g3_ParamLimits

0x9e75,	// (0x00037ccf) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0003d482) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0003d482) list_double_graphic_pane_g

0x8aa0,	// (0x000368fa) list_double_graphic_pane_t1_ParamLimits

0x8aa0,	// (0x000368fa) list_double_graphic_pane_t1

0x8ab6,	// (0x00036910) list_double_graphic_pane_t2_ParamLimits

0x8ab6,	// (0x00036910) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0003d48b) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0003d48b) list_double_graphic_pane_t

0x8ac8,	// (0x00036922) list_double2_graphic_pane_g1_ParamLimits

0x8ac8,	// (0x00036922) list_double2_graphic_pane_g1

0x9e81,	// (0x00037cdb) list_double2_graphic_pane_g2_ParamLimits

0x9e81,	// (0x00037cdb) list_double2_graphic_pane_g2

0x9e8d,	// (0x00037ce7) list_double2_graphic_pane_g3_ParamLimits

0x9e8d,	// (0x00037ce7) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0003d490) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0003d490) list_double2_graphic_pane_g

0x8ad4,	// (0x0003692e) list_double2_graphic_pane_t1_ParamLimits

0x8ad4,	// (0x0003692e) list_double2_graphic_pane_t1

0x8aea,	// (0x00036944) list_double2_graphic_pane_t2_ParamLimits

0x8aea,	// (0x00036944) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003d497) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003d497) list_double2_graphic_pane_t

0x8afc,	// (0x00036956) list_double_large_graphic_pane_g1_ParamLimits

0x8afc,	// (0x00036956) list_double_large_graphic_pane_g1

0x8b27,	// (0x00036981) list_double_large_graphic_pane_g2_ParamLimits

0x8b27,	// (0x00036981) list_double_large_graphic_pane_g2

0x9e5a,	// (0x00037cb4) list_double_large_graphic_pane_g3_ParamLimits

0x9e5a,	// (0x00037cb4) list_double_large_graphic_pane_g3

0x8b3d,	// (0x00036997) list_double_large_graphic_pane_g4_ParamLimits

0x8b3d,	// (0x00036997) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0003d49c) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0003d49c) list_double_large_graphic_pane_g

0x8b50,	// (0x000369aa) list_double_large_graphic_pane_t1_ParamLimits

0x8b50,	// (0x000369aa) list_double_large_graphic_pane_t1

0x8b69,	// (0x000369c3) list_double_large_graphic_pane_t2_ParamLimits

0x8b69,	// (0x000369c3) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0003d4a7) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0003d4a7) list_double_large_graphic_pane_t

0x9eae,	// (0x00037d08) list_double2_large_graphic_pane_g1_ParamLimits

0x9eae,	// (0x00037d08) list_double2_large_graphic_pane_g1

0x9eba,	// (0x00037d14) list_double2_large_graphic_pane_g2_ParamLimits

0x9eba,	// (0x00037d14) list_double2_large_graphic_pane_g2

0x9e8d,	// (0x00037ce7) list_double2_large_graphic_pane_g3_ParamLimits

0x9e8d,	// (0x00037ce7) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0003d4ac) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0003d4ac) list_double2_large_graphic_pane_g

0x8b7b,	// (0x000369d5) list_double2_large_graphic_pane_t1_ParamLimits

0x8b7b,	// (0x000369d5) list_double2_large_graphic_pane_t1

0x8b91,	// (0x000369eb) list_double2_large_graphic_pane_t2_ParamLimits

0x8b91,	// (0x000369eb) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0003d4b3) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0003d4b3) list_double2_large_graphic_pane_t

0x8ba3,	// (0x000369fd) list_double_heading_pane_g1_ParamLimits

0x8ba3,	// (0x000369fd) list_double_heading_pane_g1

0x9ecb,	// (0x00037d25) list_double_heading_pane_g2_ParamLimits

0x9ecb,	// (0x00037d25) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0003d4b8) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0003d4b8) list_double_heading_pane_g

0x8bb4,	// (0x00036a0e) list_double_heading_pane_t1_ParamLimits

0x8bb4,	// (0x00036a0e) list_double_heading_pane_t1

0x8a3c,	// (0x00036896) list_double_heading_pane_t2_ParamLimits

0x8a3c,	// (0x00036896) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0003d4bd) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0003d4bd) list_double_heading_pane_t

0x8bca,	// (0x00036a24) list_double_graphic_heading_pane_g1_ParamLimits

0x8bca,	// (0x00036a24) list_double_graphic_heading_pane_g1

0x8ba3,	// (0x000369fd) list_double_graphic_heading_pane_g2_ParamLimits

0x8ba3,	// (0x000369fd) list_double_graphic_heading_pane_g2

0x9ecb,	// (0x00037d25) list_double_graphic_heading_pane_g3_ParamLimits

0x9ecb,	// (0x00037d25) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0003d4c2) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0003d4c2) list_double_graphic_heading_pane_g

0x8bd6,	// (0x00036a30) list_double_graphic_heading_pane_t1_ParamLimits

0x8bd6,	// (0x00036a30) list_double_graphic_heading_pane_t1

0x8aea,	// (0x00036944) list_double_graphic_heading_pane_t2_ParamLimits

0x8aea,	// (0x00036944) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0003d4c9) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0003d4c9) list_double_graphic_heading_pane_t

0x8bec,	// (0x00036a46) list_double_time_pane_g1_ParamLimits

0x8bec,	// (0x00036a46) list_double_time_pane_g1

0x8bfd,	// (0x00036a57) list_double_time_pane_g2_ParamLimits

0x8bfd,	// (0x00036a57) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0003d4ce) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0003d4ce) list_double_time_pane_g

0x8c09,	// (0x00036a63) list_double_time_pane_t1_ParamLimits

0x8c09,	// (0x00036a63) list_double_time_pane_t1

0x8c1f,	// (0x00036a79) list_double_time_pane_t2_ParamLimits

0x8c1f,	// (0x00036a79) list_double_time_pane_t2

0x8c31,	// (0x00036a8b) list_double_time_pane_t3_ParamLimits

0x8c31,	// (0x00036a8b) list_double_time_pane_t3

0x8c43,	// (0x00036a9d) list_double_time_pane_t4_ParamLimits

0x8c43,	// (0x00036a9d) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0003d4d3) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0003d4d3) list_double_time_pane_t

0x8c55,	// (0x00036aaf) list_setting_pane_g1_ParamLimits

0x8c55,	// (0x00036aaf) list_setting_pane_g1

0x8c61,	// (0x00036abb) list_setting_pane_g2_ParamLimits

0x8c61,	// (0x00036abb) list_setting_pane_g2

0x0001,

0xf682,	// (0x0003d4dc) list_setting_pane_g_ParamLimits

0xf682,	// (0x0003d4dc) list_setting_pane_g

0x8c6d,	// (0x00036ac7) list_setting_pane_t1_ParamLimits

0x8c6d,	// (0x00036ac7) list_setting_pane_t1

0x8c87,	// (0x00036ae1) list_setting_pane_t2_ParamLimits

0x8c87,	// (0x00036ae1) list_setting_pane_t2

0x0002,

0xf687,	// (0x0003d4e1) list_setting_pane_t_ParamLimits

0xf687,	// (0x0003d4e1) list_setting_pane_t

0x8cc4,	// (0x00036b1e) set_value_pane_cp_ParamLimits

0x8cc4,	// (0x00036b1e) set_value_pane_cp

0x8cd0,	// (0x00036b2a) list_setting_number_pane_g1_ParamLimits

0x8cd0,	// (0x00036b2a) list_setting_number_pane_g1

0x8cdc,	// (0x00036b36) list_setting_number_pane_g2_ParamLimits

0x8cdc,	// (0x00036b36) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0003d4e8) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0003d4e8) list_setting_number_pane_g

0x8ce8,	// (0x00036b42) list_setting_number_pane_t1_ParamLimits

0x8ce8,	// (0x00036b42) list_setting_number_pane_t1

0x8d01,	// (0x00036b5b) list_setting_number_pane_t2_ParamLimits

0x8d01,	// (0x00036b5b) list_setting_number_pane_t2

0x8d1b,	// (0x00036b75) list_setting_number_pane_t3_ParamLimits

0x8d1b,	// (0x00036b75) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0003d4ed) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0003d4ed) list_setting_number_pane_t

0x8cc4,	// (0x00036b1e) set_value_pane_ParamLimits

0x8cc4,	// (0x00036b1e) set_value_pane

0x49bc,	// (0x00032816) bg_set_opt_pane_ParamLimits

0x49bc,	// (0x00032816) bg_set_opt_pane

0x8d5e,	// (0x00036bb8) set_value_pane_t1

0x49dd,	// (0x00032837) slider_set_pane_cp3

0x49e6,	// (0x00032840) volume_small_pane_cp

0x49ef,	// (0x00032849) list_form_gen_pane

0x49f8,	// (0x00032852) scroll_pane_cp8

0x8d74,	// (0x00036bce) form_field_data_pane_ParamLimits

0x8d74,	// (0x00036bce) form_field_data_pane

0x8d94,	// (0x00036bee) form_field_data_wide_pane_ParamLimits

0x8d94,	// (0x00036bee) form_field_data_wide_pane

0x8db5,	// (0x00036c0f) form_field_popup_pane_ParamLimits

0x8db5,	// (0x00036c0f) form_field_popup_pane

0x8dd3,	// (0x00036c2d) form_field_popup_wide_pane_ParamLimits

0x8dd3,	// (0x00036c2d) form_field_popup_wide_pane

0x8df0,	// (0x00036c4a) form_field_slider_pane_ParamLimits

0x8df0,	// (0x00036c4a) form_field_slider_pane

0x8e03,	// (0x00036c5d) form_field_slider_wide_pane_ParamLimits

0x8e03,	// (0x00036c5d) form_field_slider_wide_pane

0x4a09,	// (0x00032863) data_form_pane

0x8e20,	// (0x00036c7a) form_field_data_pane_t1

0x4a15,	// (0x0003286f) input_focus_pane

0x4a23,	// (0x0003287d) data_form_wide_pane

0x8e46,	// (0x00036ca0) form_field_data_wide_pane_t1

0x4790,	// (0x000325ea) input_focus_pane_cp6

0x8e68,	// (0x00036cc2) form_field_popup_pane_t1

0x4a15,	// (0x0003286f) input_focus_pane_cp7

0x4a4f,	// (0x000328a9) list_form_pane

0x8e8a,	// (0x00036ce4) form_field_popup_wide_pane_t1

0x4a15,	// (0x0003286f) input_focus_pane_cp8

0x4a5b,	// (0x000328b5) list_form_wide_pane

0x8ea7,	// (0x00036d01) form_field_slider_pane_t1_ParamLimits

0x8ea7,	// (0x00036d01) form_field_slider_pane_t1

0x8ebf,	// (0x00036d19) form_field_slider_pane_t2_ParamLimits

0x8ebf,	// (0x00036d19) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0003d4fd) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0003d4fd) form_field_slider_pane_t

0x417f,	// (0x00031fd9) input_focus_pane_cp9_ParamLimits

0x417f,	// (0x00031fd9) input_focus_pane_cp9

0x8ed4,	// (0x00036d2e) slider_cont_pane_ParamLimits

0x8ed4,	// (0x00036d2e) slider_cont_pane

0x4a6a,	// (0x000328c4) form_field_slider_wide_pane_t1_ParamLimits

0x4a6a,	// (0x000328c4) form_field_slider_wide_pane_t1

0x8ee8,	// (0x00036d42) form_field_slider_wide_pane_t2_ParamLimits

0x8ee8,	// (0x00036d42) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0003d502) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0003d502) form_field_slider_wide_pane_t

0x417f,	// (0x00031fd9) input_focus_pane_cp10_ParamLimits

0x417f,	// (0x00031fd9) input_focus_pane_cp10

0x8efa,	// (0x00036d54) slider_cont_pane_cp1_ParamLimits

0x8efa,	// (0x00036d54) slider_cont_pane_cp1

0x8f0e,	// (0x00036d68) slider_form_pane_cp

0x4a7c,	// (0x000328d6) input_focus_pane_g1

0x4a84,	// (0x000328de) input_focus_pane_g2

0x4a8c,	// (0x000328e6) input_focus_pane_g3

0x4a94,	// (0x000328ee) input_focus_pane_g4

0x4a9c,	// (0x000328f6) input_focus_pane_g5

0x4aa4,	// (0x000328fe) input_focus_pane_g6

0x4aac,	// (0x00032906) input_focus_pane_g7

0x4ab4,	// (0x0003290e) input_focus_pane_g8

0x4abc,	// (0x00032916) input_focus_pane_g9

0x4127,	// (0x00031f81) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0003d507) input_focus_pane_g

0x5ee7,	// (0x00033d41) wait_border_pane_g3_copy1

0x8f16,	// (0x00036d70) data_form_pane_t1

0x4127,	// (0x00031f81) wait_anim_pane_g1_copy1

0x9170,	// (0x00036fca) data_form_wide_pane_t1

0x8f31,	// (0x00036d8b) list_form_graphic_pane_cp_ParamLimits

0x8f31,	// (0x00036d8b) list_form_graphic_pane_cp

0x6b14,	// (0x0003496e) slider_form_pane_g1

0x6b1d,	// (0x00034977) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0003d7ff) slider_form_pane_g

0x8f48,	// (0x00036da2) list_form_graphic_pane_ParamLimits

0x8f48,	// (0x00036da2) list_form_graphic_pane

0x8f62,	// (0x00036dbc) list_form_graphic_pane_g1

0x8f6a,	// (0x00036dc4) list_form_graphic_pane_t1_ParamLimits

0x8f6a,	// (0x00036dc4) list_form_graphic_pane_t1

0x418d,	// (0x00031fe7) list_highlight_pane_cp5_ParamLimits

0x418d,	// (0x00031fe7) list_highlight_pane_cp5

0x8f7f,	// (0x00036dd9) find_pane_g1

0x4ac4,	// (0x0003291e) input_find_pane

0x8f88,	// (0x00036de2) input_find_pane_g1_ParamLimits

0x8f88,	// (0x00036de2) input_find_pane_g1

0x8f94,	// (0x00036dee) input_find_pane_t1_ParamLimits

0x8f94,	// (0x00036dee) input_find_pane_t1

0x8fa9,	// (0x00036e03) input_find_pane_t2_ParamLimits

0x8fa9,	// (0x00036e03) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0003d51c) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0003d51c) input_find_pane_t

0x4acd,	// (0x00032927) input_focus_pane_cp5_ParamLimits

0x4acd,	// (0x00032927) input_focus_pane_cp5

0x9ee3,	// (0x00037d3d) bg_popup_window_pane_cp2_ParamLimits

0x9ee3,	// (0x00037d3d) bg_popup_window_pane_cp2

0x9ef0,	// (0x00037d4a) listscroll_menu_pane_ParamLimits

0x9ef0,	// (0x00037d4a) listscroll_menu_pane

0x9efc,	// (0x00037d56) popup_submenu_window_ParamLimits

0x9efc,	// (0x00037d56) popup_submenu_window

0x4adb,	// (0x00032935) find_popup_pane_g1

0x4ae3,	// (0x0003293d) input_popup_find_pane_cp

0x4acd,	// (0x00032927) input_focus_pane_cp4_ParamLimits

0x4acd,	// (0x00032927) input_focus_pane_cp4

0x4aed,	// (0x00032947) input_popup_find_pane_t1_ParamLimits

0x4aed,	// (0x00032947) input_popup_find_pane_t1

0x4131,	// (0x00031f8b) bg_popup_sub_pane_cp

0x4b1b,	// (0x00032975) listscroll_popup_sub_pane

0x4b23,	// (0x0003297d) list_submenu_pane_ParamLimits

0x4b23,	// (0x0003297d) list_submenu_pane

0x4b34,	// (0x0003298e) scroll_pane_cp4

0x4b3c,	// (0x00032996) list_single_popup_submenu_pane_ParamLimits

0x4b3c,	// (0x00032996) list_single_popup_submenu_pane

0x4b4f,	// (0x000329a9) list_single_popup_submenu_pane_g1

0x4b57,	// (0x000329b1) list_single_popup_submenu_pane_t1_ParamLimits

0x4b57,	// (0x000329b1) list_single_popup_submenu_pane_t1

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp1_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp1

0x9f2e,	// (0x00037d88) tabs_2_active_pane_g1

0x9f36,	// (0x00037d90) tabs_2_active_pane_t1

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp1_ParamLimits

0x418d,	// (0x00031fe7) bg_passive_tab_pane_cp1

0x9f2e,	// (0x00037d88) tabs_2_passive_pane_g1

0x9f36,	// (0x00037d90) tabs_2_passive_pane_t1

0x58fe,	// (0x00033758) bg_active_tab_pane_cp4

0x9f48,	// (0x00037da2) tabs_2_long_active_pane_t1

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp4

0xa8b3,	// (0x0003870d) list_single_midp_graphic_pane_g4_ParamLimits

0x58fe,	// (0x00033758) bg_active_tab_pane_cp5

0x9f67,	// (0x00037dc1) tabs_3_long_active_pane_t1

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp5

0xa8b3,	// (0x0003870d) list_single_midp_graphic_pane_g4

0x418d,	// (0x00031fe7) bg_popup_window_pane_cp13_ParamLimits

0x418d,	// (0x00031fe7) bg_popup_window_pane_cp13

0x4b81,	// (0x000329db) listscroll_popup_fast_pane_ParamLimits

0x4b81,	// (0x000329db) listscroll_popup_fast_pane

0x4b90,	// (0x000329ea) grid_popup_fast_pane_ParamLimits

0x4b90,	// (0x000329ea) grid_popup_fast_pane

0x4ba2,	// (0x000329fc) scroll_pane_cp9_ParamLimits

0x4ba2,	// (0x000329fc) scroll_pane_cp9

0x7ec6,	// (0x00035d20) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ec6,	// (0x00035d20) list_single_graphic_hl_pane_t1_cp2

0x4bc6,	// (0x00032a20) input_focus_pane_cp20_ParamLimits

0x4bc6,	// (0x00032a20) input_focus_pane_cp20

0x4bd4,	// (0x00032a2e) query_popup_data_pane_t1_ParamLimits

0x4bd4,	// (0x00032a2e) query_popup_data_pane_t1

0x4be7,	// (0x00032a41) query_popup_data_pane_t2_ParamLimits

0x4be7,	// (0x00032a41) query_popup_data_pane_t2

0x4c2d,	// (0x00032a87) query_popup_data_pane_t3_ParamLimits

0x4c2d,	// (0x00032a87) query_popup_data_pane_t3

0x4c6e,	// (0x00032ac8) query_popup_data_pane_t4_ParamLimits

0x4c6e,	// (0x00032ac8) query_popup_data_pane_t4

0x4caa,	// (0x00032b04) query_popup_data_pane_t5_ParamLimits

0x4caa,	// (0x00032b04) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0003d521) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0003d521) query_popup_data_pane_t

0x4a7c,	// (0x000328d6) bg_set_opt_pane_g1

0x4a84,	// (0x000328de) bg_set_opt_pane_g2

0x4a8c,	// (0x000328e6) bg_set_opt_pane_g3

0x4a94,	// (0x000328ee) bg_set_opt_pane_g4

0x4a9c,	// (0x000328f6) bg_set_opt_pane_g5

0x4aa4,	// (0x000328fe) bg_set_opt_pane_g6

0x4aac,	// (0x00032906) bg_set_opt_pane_g7

0x4ab4,	// (0x0003290e) bg_set_opt_pane_g8

0x4abc,	// (0x00032916) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0003d52c) bg_set_opt_pane_g

0xa36a,	// (0x000381c4) control_top_pane_stacon_ParamLimits

0xa36a,	// (0x000381c4) control_top_pane_stacon

0xa3bd,	// (0x00038217) signal_pane_stacon_ParamLimits

0xa3bd,	// (0x00038217) signal_pane_stacon

0x510e,	// (0x00032f68) stacon_top_pane_g1_ParamLimits

0x510e,	// (0x00032f68) stacon_top_pane_g1

0xa3e2,	// (0x0003823c) title_pane_stacon_ParamLimits

0xa3e2,	// (0x0003823c) title_pane_stacon

0xa40c,	// (0x00038266) uni_indicator_pane_stacon_ParamLimits

0xa40c,	// (0x00038266) uni_indicator_pane_stacon

0xa421,	// (0x0003827b) battery_pane_stacon_ParamLimits

0xa421,	// (0x0003827b) battery_pane_stacon

0xa465,	// (0x000382bf) control_bottom_pane_stacon_ParamLimits

0xa465,	// (0x000382bf) control_bottom_pane_stacon

0xa488,	// (0x000382e2) navi_pane_stacon_ParamLimits

0xa488,	// (0x000382e2) navi_pane_stacon

0x5130,	// (0x00032f8a) stacon_bottom_pane_g1_ParamLimits

0x5130,	// (0x00032f8a) stacon_bottom_pane_g1

0x9f79,	// (0x00037dd3) aid_levels_signal_lsc_ParamLimits

0x9f79,	// (0x00037dd3) aid_levels_signal_lsc

0x9f90,	// (0x00037dea) signal_pane_stacon_g1_ParamLimits

0x9f90,	// (0x00037dea) signal_pane_stacon_g1

0x9fa4,	// (0x00037dfe) signal_pane_stacon_g2_ParamLimits

0x9fa4,	// (0x00037dfe) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0003d53f) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003d53f) signal_pane_stacon_g

0x9fd9,	// (0x00037e33) title_pane_stacon_t1_ParamLimits

0x9fd9,	// (0x00037e33) title_pane_stacon_t1

0x4d02,	// (0x00032b5c) uni_indicator_pane_stacon_g1

0x4d0c,	// (0x00032b66) uni_indicator_pane_stacon_g2

0x4cee,	// (0x00032b48) uni_indicator_pane_stacon_g3

0x4cf8,	// (0x00032b52) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0003d54b) uni_indicator_pane_stacon_g

0x9ffe,	// (0x00037e58) control_top_pane_stacon_g1

0xa006,	// (0x00037e60) control_top_pane_stacon_t1_ParamLimits

0xa006,	// (0x00037e60) control_top_pane_stacon_t1

0xa03d,	// (0x00037e97) aid_levels_battery_lsc_ParamLimits

0xa03d,	// (0x00037e97) aid_levels_battery_lsc

0xa055,	// (0x00037eaf) battery_pane_stacon_g1_ParamLimits

0xa055,	// (0x00037eaf) battery_pane_stacon_g1

0xa068,	// (0x00037ec2) battery_pane_stacon_g2_ParamLimits

0xa068,	// (0x00037ec2) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0003d554) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0003d554) battery_pane_stacon_g

0xa0a6,	// (0x00037f00) navi_icon_pane_stacon

0xa0ba,	// (0x00037f14) navi_navi_pane_stacon

0xa0a6,	// (0x00037f00) navi_text_pane_stacon

0x9ffe,	// (0x00037e58) control_bottom_pane_stacon_g1

0xa0ce,	// (0x00037f28) control_bottom_pane_stacon_t1_ParamLimits

0xa0ce,	// (0x00037f28) control_bottom_pane_stacon_t1

0xa105,	// (0x00037f5f) grid_app_pane_ParamLimits

0xa105,	// (0x00037f5f) grid_app_pane

0xa127,	// (0x00037f81) scroll_pane_cp15_ParamLimits

0xa127,	// (0x00037f81) scroll_pane_cp15

0xa13c,	// (0x00037f96) cell_app_pane_ParamLimits

0xa13c,	// (0x00037f96) cell_app_pane

0xa166,	// (0x00037fc0) cell_app_pane_g1_ParamLimits

0xa166,	// (0x00037fc0) cell_app_pane_g1

0x4d30,	// (0x00032b8a) cell_app_pane_g2_ParamLimits

0x4d30,	// (0x00032b8a) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0003d559) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0003d559) cell_app_pane_g

0x4d3c,	// (0x00032b96) cell_app_pane_t1_ParamLimits

0x4d3c,	// (0x00032b96) cell_app_pane_t1

0x4d53,	// (0x00032bad) grid_highlight_pane_ParamLimits

0x4d53,	// (0x00032bad) grid_highlight_pane

0x4a7c,	// (0x000328d6) cell_highlight_pane_g1

0x4a84,	// (0x000328de) cell_highlight_pane_g2

0x4a8c,	// (0x000328e6) cell_highlight_pane_g3

0x4a94,	// (0x000328ee) cell_highlight_pane_g4

0x4a9c,	// (0x000328f6) cell_highlight_pane_g5

0x4aa4,	// (0x000328fe) cell_highlight_pane_g6

0x4aac,	// (0x00032906) cell_highlight_pane_g7

0x4ab4,	// (0x0003290e) cell_highlight_pane_g8

0x4abc,	// (0x00032916) cell_highlight_pane_g9

0x4127,	// (0x00031f81) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0003d507) cell_highlight_pane_g

0x4d64,	// (0x00032bbe) bg_scroll_pane

0xa19d,	// (0x00037ff7) scroll_handle_pane

0x4dab,	// (0x00032c05) scroll_bg_pane_g1

0x4dc0,	// (0x00032c1a) scroll_bg_pane_g2

0x4dd8,	// (0x00032c32) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0003d55e) scroll_bg_pane_g

0x4ded,	// (0x00032c47) scroll_handle_focus_pane_ParamLimits

0x4ded,	// (0x00032c47) scroll_handle_focus_pane

0x4dab,	// (0x00032c05) scroll_handle_pane_g1

0x4dfa,	// (0x00032c54) scroll_handle_pane_g2

0x4dd8,	// (0x00032c32) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0003d565) scroll_handle_pane_g

0x4acd,	// (0x00032927) bg_popup_sub_pane_cp21_ParamLimits

0x4acd,	// (0x00032927) bg_popup_sub_pane_cp21

0x4e0e,	// (0x00032c68) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e0e,	// (0x00032c68) popup_fep_japan_predictive_window_t1

0x4e25,	// (0x00032c7f) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e25,	// (0x00032c7f) popup_fep_japan_predictive_window_t2

0x4e58,	// (0x00032cb2) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e58,	// (0x00032cb2) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0003d56c) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0003d56c) popup_fep_japan_predictive_window_t

0x4131,	// (0x00031f8b) bg_popup_sub_pane_cp23

0x4e8f,	// (0x00032ce9) listscroll_japin_cand_pane

0x4e97,	// (0x00032cf1) popup_fep_japan_candidate_window_t1

0x4ea5,	// (0x00032cff) candidate_pane_ParamLimits

0x4ea5,	// (0x00032cff) candidate_pane

0x4eb7,	// (0x00032d11) scroll_pane_cp30

0x4ebf,	// (0x00032d19) list_single_popup_jap_candidate_pane_ParamLimits

0x4ebf,	// (0x00032d19) list_single_popup_jap_candidate_pane

0x4131,	// (0x00031f8b) list_highlight_pane_cp30

0x4ed3,	// (0x00032d2d) list_single_popup_jap_candidate_pane_t1

0x4ee2,	// (0x00032d3c) level_1_signal

0x4eef,	// (0x00032d49) level_2_signal

0x4efc,	// (0x00032d56) level_3_signal

0x4f09,	// (0x00032d63) level_4_signal

0x4f16,	// (0x00032d70) level_5_signal

0x4f23,	// (0x00032d7d) level_6_signal

0x4f30,	// (0x00032d8a) level_7_signal

0x4ee2,	// (0x00032d3c) level_1_battery

0x4eef,	// (0x00032d49) level_2_battery

0x4efc,	// (0x00032d56) level_3_battery

0x4f09,	// (0x00032d63) level_4_battery

0x4f16,	// (0x00032d70) level_5_battery

0x4f23,	// (0x00032d7d) level_6_battery

0x4f30,	// (0x00032d8a) level_7_battery

0x4f55,	// (0x00032daf) list_menu_pane_ParamLimits

0x4f55,	// (0x00032daf) list_menu_pane

0x4f66,	// (0x00032dc0) scroll_pane_cp25_ParamLimits

0x4f66,	// (0x00032dc0) scroll_pane_cp25

0x4f7f,	// (0x00032dd9) list_double2_graphic_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double2_graphic_pane_cp2

0x4f7f,	// (0x00032dd9) list_double2_large_graphic_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double2_large_graphic_pane_cp2

0x4f7f,	// (0x00032dd9) list_double2_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double2_pane_cp2

0x4f7f,	// (0x00032dd9) list_double_graphic_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double_graphic_pane_cp2

0x4f7f,	// (0x00032dd9) list_double_large_graphic_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double_large_graphic_pane_cp2

0x4f7f,	// (0x00032dd9) list_double_number_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double_number_pane_cp2

0x4f7f,	// (0x00032dd9) list_double_pane_cp2_ParamLimits

0x4f7f,	// (0x00032dd9) list_double_pane_cp2

0xa1f7,	// (0x00038051) list_single_2graphic_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_2graphic_pane_cp2

0xa1f7,	// (0x00038051) list_single_graphic_heading_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_graphic_heading_pane_cp2

0xa1f7,	// (0x00038051) list_single_graphic_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_graphic_pane_cp2

0xa1f7,	// (0x00038051) list_single_heading_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_heading_pane_cp2

0x4f8f,	// (0x00032de9) list_single_large_graphic_pane_cp2_ParamLimits

0x4f8f,	// (0x00032de9) list_single_large_graphic_pane_cp2

0xa1f7,	// (0x00038051) list_single_number_heading_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_number_heading_pane_cp2

0xa1f7,	// (0x00038051) list_single_number_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_number_pane_cp2

0xa1f7,	// (0x00038051) list_single_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_pane_cp2

0x4fa9,	// (0x00032e03) bg_popup_sub_pane_cp22

0xa2b4,	// (0x0003810e) popup_side_volume_key_window_g1

0xa2de,	// (0x00038138) popup_side_volume_key_window_t1

0xa2fa,	// (0x00038154) volume_small_pane_cp1

0x417f,	// (0x00031fd9) bg_popup_sub_pane_cp24_ParamLimits

0x417f,	// (0x00031fd9) bg_popup_sub_pane_cp24

0x4fbf,	// (0x00032e19) fep_china_uni_candidate_pane_ParamLimits

0x4fbf,	// (0x00032e19) fep_china_uni_candidate_pane

0x4fd3,	// (0x00032e2d) fep_china_uni_entry_pane

0x4fe3,	// (0x00032e3d) popup_fep_china_uni_window_g1

0x4fff,	// (0x00032e59) fep_china_uni_entry_pane_g1

0x5007,	// (0x00032e61) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003d599) fep_china_uni_entry_pane_g

0x500f,	// (0x00032e69) fep_entry_item_pane

0x5019,	// (0x00032e73) fep_candidate_item_pane

0x5021,	// (0x00032e7b) fep_china_uni_candidate_pane_g1

0x5029,	// (0x00032e83) fep_china_uni_candidate_pane_g2

0x5031,	// (0x00032e8b) fep_china_uni_candidate_pane_g3

0x5039,	// (0x00032e93) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003d59e) fep_china_uni_candidate_pane_g

0x4127,	// (0x00031f81) fep_entry_item_pane_g1

0x5041,	// (0x00032e9b) fep_entry_item_pane_t1_ParamLimits

0x5041,	// (0x00032e9b) fep_entry_item_pane_t1

0x5057,	// (0x00032eb1) fep_candidate_item_pane_t1_ParamLimits

0x5057,	// (0x00032eb1) fep_candidate_item_pane_t1

0x506c,	// (0x00032ec6) fep_candidate_item_pane_t2_ParamLimits

0x506c,	// (0x00032ec6) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003d5a7) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003d5a7) fep_candidate_item_pane_t

0x418d,	// (0x00031fe7) list_highlight_pane_cp31_ParamLimits

0x418d,	// (0x00031fe7) list_highlight_pane_cp31

0x507e,	// (0x00032ed8) level_1_signal_lsc

0x5087,	// (0x00032ee1) level_2_signal_lsc

0x5090,	// (0x00032eea) level_3_signal_lsc

0x5099,	// (0x00032ef3) level_4_signal_lsc

0x50a2,	// (0x00032efc) level_5_signal_lsc

0x50ab,	// (0x00032f05) level_6_signal_lsc

0x50b4,	// (0x00032f0e) level_7_signal_lsc

0x50b4,	// (0x00032f0e) level_1_battery_lsc

0x50bd,	// (0x00032f17) level_2_battery_lsc

0x50c6,	// (0x00032f20) level_3_battery_lsc

0x50cf,	// (0x00032f29) level_4_battery_lsc

0x50d8,	// (0x00032f32) level_5_battery_lsc

0x50e1,	// (0x00032f3b) level_6_battery_lsc

0x507e,	// (0x00032ed8) level_7_battery_lsc

0x50ea,	// (0x00032f44) scroll_handle_focus_pane_g1

0x50f3,	// (0x00032f4d) scroll_handle_focus_pane_g2

0x50fc,	// (0x00032f56) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003d5ac) scroll_handle_focus_pane_g

0x8fbe,	// (0x00036e18) list_single_2graphic_pane_g1_ParamLimits

0x8fbe,	// (0x00036e18) list_single_2graphic_pane_g1

0x89a2,	// (0x000367fc) list_single_2graphic_pane_g2_ParamLimits

0x89a2,	// (0x000367fc) list_single_2graphic_pane_g2

0x8907,	// (0x00036761) list_single_2graphic_pane_g3_ParamLimits

0x8907,	// (0x00036761) list_single_2graphic_pane_g3

0x8fca,	// (0x00036e24) list_single_2graphic_pane_g4_ParamLimits

0x8fca,	// (0x00036e24) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003d5b3) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003d5b3) list_single_2graphic_pane_g

0x8fdb,	// (0x00036e35) list_single_2graphic_pane_t1_ParamLimits

0x8fdb,	// (0x00036e35) list_single_2graphic_pane_t1

0xa302,	// (0x0003815c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa302,	// (0x0003815c) list_double2_graphic_large_graphic_pane_g1

0x9eba,	// (0x00037d14) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9eba,	// (0x00037d14) list_double2_graphic_large_graphic_pane_g2

0x9e8d,	// (0x00037ce7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9e8d,	// (0x00037ce7) list_double2_graphic_large_graphic_pane_g3

0xa312,	// (0x0003816c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa312,	// (0x0003816c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003d5bc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003d5bc) list_double2_graphic_large_graphic_pane_g

0x9009,	// (0x00036e63) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9009,	// (0x00036e63) list_double2_graphic_large_graphic_pane_t1

0x901f,	// (0x00036e79) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x901f,	// (0x00036e79) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003d5c5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003d5c5) list_double2_graphic_large_graphic_pane_t

0x51dd,	// (0x00033037) popup_fast_swap_window_ParamLimits

0x51dd,	// (0x00033037) popup_fast_swap_window

0x51f9,	// (0x00033053) popup_side_volume_key_window

0x5213,	// (0x0003306d) stacon_top_pane

0x521d,	// (0x00033077) status_pane_ParamLimits

0x521d,	// (0x00033077) status_pane

0x5213,	// (0x0003306d) status_small_pane

0x4131,	// (0x00031f8b) control_pane

0x4131,	// (0x00031f8b) stacon_bottom_pane

0x49f8,	// (0x00032852) scroll_pane_cp121

0x49ef,	// (0x00032849) set_content_pane

0xa31e,	// (0x00038178) bg_active_tab_pane_g1_cp1

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp1

0xa327,	// (0x00038181) bg_active_tab_pane_g3_cp1

0xa31e,	// (0x00038178) bg_passive_tab_pane_g1_cp1

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp1

0xa327,	// (0x00038181) bg_passive_tab_pane_g3_cp1

0xa330,	// (0x0003818a) bg_active_tab_pane_g1_cp2

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp2

0xa339,	// (0x00038193) bg_active_tab_pane_g3_cp2

0xa330,	// (0x0003818a) bg_passive_tab_pane_g1_cp2

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp2

0xa339,	// (0x00038193) bg_passive_tab_pane_g3_cp2

0xa342,	// (0x0003819c) bg_active_tab_pane_g1_cp3

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp3

0xa34b,	// (0x000381a5) bg_active_tab_pane_g3_cp3

0xa342,	// (0x0003819c) bg_passive_tab_pane_g1_cp3

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp3

0xa34b,	// (0x000381a5) bg_passive_tab_pane_g3_cp3

0xa354,	// (0x000381ae) bg_active_tab_pane_g1_cp4

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp4

0xa35f,	// (0x000381b9) bg_active_tab_pane_g3_cp4

0xa354,	// (0x000381ae) bg_passive_tab_pane_g1_cp4

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp4

0xa35f,	// (0x000381b9) bg_passive_tab_pane_g3_cp4

0x5155,	// (0x00032faf) bg_active_tab_pane_g1_cp5

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp5

0x514c,	// (0x00032fa6) bg_active_tab_pane_g3_cp5

0x5155,	// (0x00032faf) bg_passive_tab_pane_g1_cp5

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp5

0x514c,	// (0x00032fa6) bg_passive_tab_pane_g3_cp5

0xa4ab,	// (0x00038305) list_set_graphic_pane_ParamLimits

0xa4ab,	// (0x00038305) list_set_graphic_pane

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp4

0x515e,	// (0x00032fb8) list_set_graphic_pane_g1_ParamLimits

0x515e,	// (0x00032fb8) list_set_graphic_pane_g1

0x516a,	// (0x00032fc4) list_set_graphic_pane_g2_ParamLimits

0x516a,	// (0x00032fc4) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003d5ca) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003d5ca) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0003d942) volume_small_pane_cp_g

0x518e,	// (0x00032fe8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x518e,	// (0x00032fe8) list_double2_large_graphic_pane_g1_cp2

0x519c,	// (0x00032ff6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x519c,	// (0x00032ff6) list_double2_large_graphic_pane_g2_cp2

0x51ad,	// (0x00033007) list_double2_large_graphic_pane_g3_cp2

0x51b5,	// (0x0003300f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x51b5,	// (0x0003300f) list_double2_large_graphic_pane_t1_cp2

0x51cb,	// (0x00033025) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x51cb,	// (0x00033025) list_double2_large_graphic_pane_t2_cp2

0x68b8,	// (0x00034712) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x68b8,	// (0x00034712) list_double_large_graphic_pane_g1_cp2

0x68cb,	// (0x00034725) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x68cb,	// (0x00034725) list_double_large_graphic_pane_g2_cp2

0x533b,	// (0x00033195) list_double_large_graphic_pane_g3_cp2

0x68dc,	// (0x00034736) list_double_large_graphic_pane_g4_cp

0x68e4,	// (0x0003473e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x68e4,	// (0x0003473e) list_double_large_graphic_pane_t1_cp2

0x6907,	// (0x00034761) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6907,	// (0x00034761) list_double_large_graphic_pane_t2_cp2

0x522b,	// (0x00033085) list_double2_graphic_pane_g1_cp2_ParamLimits

0x522b,	// (0x00033085) list_double2_graphic_pane_g1_cp2

0x5239,	// (0x00033093) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5239,	// (0x00033093) list_double2_graphic_pane_g2_cp2

0x524a,	// (0x000330a4) list_double2_graphic_pane_g3_cp2

0x5254,	// (0x000330ae) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5254,	// (0x000330ae) list_double2_graphic_pane_t1_cp2

0x526a,	// (0x000330c4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x526a,	// (0x000330c4) list_double2_graphic_pane_t2_cp2

0x527c,	// (0x000330d6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x527c,	// (0x000330d6) list_single_number_heading_pane_g1_cp2

0x5288,	// (0x000330e2) list_single_number_heading_pane_g2_cp2

0x5290,	// (0x000330ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5290,	// (0x000330ea) list_single_number_heading_pane_t1_cp2

0x52a6,	// (0x00033100) list_single_number_heading_pane_t2_cp2_ParamLimits

0x52a6,	// (0x00033100) list_single_number_heading_pane_t2_cp2

0x52ba,	// (0x00033114) list_single_number_heading_pane_t3_cp2_ParamLimits

0x52ba,	// (0x00033114) list_single_number_heading_pane_t3_cp2

0x527c,	// (0x000330d6) list_single_heading_pane_g1_cp2_ParamLimits

0x527c,	// (0x000330d6) list_single_heading_pane_g1_cp2

0x5288,	// (0x000330e2) list_single_heading_pane_g2_cp2

0x5290,	// (0x000330ea) list_single_heading_pane_t1_cp2_ParamLimits

0x5290,	// (0x000330ea) list_single_heading_pane_t1_cp2

0x66c0,	// (0x0003451a) list_single_heading_pane_t2_cp2_ParamLimits

0x66c0,	// (0x0003451a) list_single_heading_pane_t2_cp2

0x665a,	// (0x000344b4) list_double_graphic_pane_g1_cp2_ParamLimits

0x665a,	// (0x000344b4) list_double_graphic_pane_g1_cp2

0x6666,	// (0x000344c0) list_double_graphic_pane_g2_cp2_ParamLimits

0x6666,	// (0x000344c0) list_double_graphic_pane_g2_cp2

0x6675,	// (0x000344cf) list_double_graphic_pane_g3_cp2

0x667d,	// (0x000344d7) list_double_graphic_pane_t1_cp2_ParamLimits

0x667d,	// (0x000344d7) list_double_graphic_pane_t1_cp2

0x6693,	// (0x000344ed) list_double_graphic_pane_t2_cp2_ParamLimits

0x6693,	// (0x000344ed) list_double_graphic_pane_t2_cp2

0x532f,	// (0x00033189) list_double_number_pane_g1_cp2_ParamLimits

0x532f,	// (0x00033189) list_double_number_pane_g1_cp2

0x533b,	// (0x00033195) list_double_number_pane_g2_cp2

0x661e,	// (0x00034478) list_double_number_pane_t1_cp2_ParamLimits

0x661e,	// (0x00034478) list_double_number_pane_t1_cp2

0x6632,	// (0x0003448c) list_double_number_pane_t2_cp2_ParamLimits

0x6632,	// (0x0003448c) list_double_number_pane_t2_cp2

0x6648,	// (0x000344a2) list_double_number_pane_t3_cp2_ParamLimits

0x6648,	// (0x000344a2) list_double_number_pane_t3_cp2

0x6595,	// (0x000343ef) list_single_graphic_pane_g1_cp2_ParamLimits

0x6595,	// (0x000343ef) list_single_graphic_pane_g1_cp2

0x5393,	// (0x000331ed) list_single_graphic_pane_g2_cp2_ParamLimits

0x5393,	// (0x000331ed) list_single_graphic_pane_g2_cp2

0x539f,	// (0x000331f9) list_single_graphic_pane_g3_cp2

0x656b,	// (0x000343c5) list_single_graphic_pane_t1_cp2_ParamLimits

0x656b,	// (0x000343c5) list_single_graphic_pane_t1_cp2

0x5393,	// (0x000331ed) list_single_number_pane_g1_cp2_ParamLimits

0x5393,	// (0x000331ed) list_single_number_pane_g1_cp2

0x539f,	// (0x000331f9) list_single_number_pane_g2_cp2

0x656b,	// (0x000343c5) list_single_number_pane_t1_cp2_ParamLimits

0x656b,	// (0x000343c5) list_single_number_pane_t1_cp2

0x6581,	// (0x000343db) list_single_number_pane_t2_cp2_ParamLimits

0x6581,	// (0x000343db) list_single_number_pane_t2_cp2

0x519c,	// (0x00032ff6) list_double2_pane_g1_cp2_ParamLimits

0x519c,	// (0x00032ff6) list_double2_pane_g1_cp2

0x51ad,	// (0x00033007) list_double2_pane_g2_cp2

0x5307,	// (0x00033161) list_double2_pane_t1_cp2_ParamLimits

0x5307,	// (0x00033161) list_double2_pane_t1_cp2

0x531d,	// (0x00033177) list_double2_pane_t2_cp2_ParamLimits

0x531d,	// (0x00033177) list_double2_pane_t2_cp2

0x532f,	// (0x00033189) list_double_pane_g1_cp2_ParamLimits

0x532f,	// (0x00033189) list_double_pane_g1_cp2

0x533b,	// (0x00033195) list_double_pane_g2_cp2

0x5343,	// (0x0003319d) list_double_pane_t1_cp2_ParamLimits

0x5343,	// (0x0003319d) list_double_pane_t1_cp2

0x5359,	// (0x000331b3) list_double_pane_t2_cp2_ParamLimits

0x5359,	// (0x000331b3) list_double_pane_t2_cp2

0x5383,	// (0x000331dd) list_single_pane_cp2_g3

0x5393,	// (0x000331ed) list_single_pane_g1_cp2_ParamLimits

0x5393,	// (0x000331ed) list_single_pane_g1_cp2

0x539f,	// (0x000331f9) list_single_pane_g2_cp2

0x53a7,	// (0x00033201) list_single_pane_t1_cp2_ParamLimits

0x53a7,	// (0x00033201) list_single_pane_t1_cp2

0x53bf,	// (0x00033219) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x53bf,	// (0x00033219) list_single_large_graphic_pane_g1_cp2

0x53cd,	// (0x00033227) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x53cd,	// (0x00033227) list_single_large_graphic_pane_g2_cp2

0x53d9,	// (0x00033233) list_single_large_graphic_pane_g3_cp2

0x53e1,	// (0x0003323b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53e1,	// (0x0003323b) list_single_large_graphic_pane_g4_cp1

0x53fb,	// (0x00033255) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x53fb,	// (0x00033255) list_single_large_graphic_pane_t1_cp2

0x6535,	// (0x0003438f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6535,	// (0x0003438f) list_single_graphic_heading_pane_g1_cp2

0x64e4,	// (0x0003433e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x64e4,	// (0x0003433e) list_single_graphic_heading_pane_g4_cp2

0x539f,	// (0x000331f9) list_single_graphic_heading_pane_g5_cp2

0x6541,	// (0x0003439b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6541,	// (0x0003439b) list_single_graphic_heading_pane_t1_cp2

0x6557,	// (0x000343b1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6557,	// (0x000343b1) list_single_graphic_heading_pane_t2_cp2

0x64d8,	// (0x00034332) list_single_2graphic_pane_g1_cp2_ParamLimits

0x64d8,	// (0x00034332) list_single_2graphic_pane_g1_cp2

0x64e4,	// (0x0003433e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x64e4,	// (0x0003433e) list_single_2graphic_pane_g2_cp2

0x539f,	// (0x000331f9) list_single_2graphic_pane_g3_cp2

0x64f5,	// (0x0003434f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x64f5,	// (0x0003434f) list_single_2graphic_pane_g4_cp2

0x651f,	// (0x00034379) list_single_2graphic_pane_t1_cp2_ParamLimits

0x651f,	// (0x00034379) list_single_2graphic_pane_t1_cp2

0x4127,	// (0x00031f81) list_highlight_pane_g10_cp1

0x60de,	// (0x00033f38) list_highlight_pane_g1_cp1

0x60e6,	// (0x00033f40) list_highlight_pane_g2_cp1

0x60ee,	// (0x00033f48) list_highlight_pane_g3_cp1

0x60f6,	// (0x00033f50) list_highlight_pane_g4_cp1

0x60fe,	// (0x00033f58) list_highlight_pane_g5_cp1

0x6106,	// (0x00033f60) list_highlight_pane_g6_cp1

0x610e,	// (0x00033f68) list_highlight_pane_g7_cp1

0x6116,	// (0x00033f70) list_highlight_pane_g8_cp1

0x611e,	// (0x00033f78) list_highlight_pane_g9_cp1

0xc29f,	// (0x0003a0f9) form_field_slider_pane_t3

0xc2ad,	// (0x0003a107) form_field_slider_pane_t4

0x6012,	// (0x00033e6c) slider_form_pane_ParamLimits

0x6012,	// (0x00033e6c) slider_form_pane

0x4131,	// (0x00031f8b) control_abbreviations

0x4131,	// (0x00031f8b) control_conventions

0x4131,	// (0x00031f8b) control_definitions

0x4131,	// (0x00031f8b) format_table_attribute

0x670c,	// (0x00034566) bg_popup_preview_window_pane_g9

0x4131,	// (0x00031f8b) format_table_data2

0x4131,	// (0x00031f8b) format_table_data3

0x4131,	// (0x00031f8b) format_table_data_example

0x0008,

0x4131,	// (0x00031f8b) intro_purpose

0xf905,	// (0x0003d75f) bg_popup_preview_window_pane_g

0x4131,	// (0x00031f8b) texts_category

0x4131,	// (0x00031f8b) texts_graphics

0x5411,	// (0x0003326b) text_digital

0x5420,	// (0x0003327a) text_primary

0x542f,	// (0x00033289) text_primary_small

0x543e,	// (0x00033298) text_secondary

0x544d,	// (0x000332a7) text_title

0x6bab,	// (0x00034a05) bg_passive_tab_pane_g1_cp3_srt

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp3_srt

0x6ba2,	// (0x000349fc) bg_passive_tab_pane_g3_cp3_srt

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp3_srt_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp3_srt

0x6bb4,	// (0x00034a0e) tabs_4_active_pane_srt_g1

0xc608,	// (0x0003a462) tabs_4_active_pane_srt_t1_ParamLimits

0xc608,	// (0x0003a462) tabs_4_active_pane_srt_t1

0x6bab,	// (0x00034a05) bg_active_tab_pane_g1_cp3_copy1

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp3_copy1

0x6ba2,	// (0x000349fc) bg_active_tab_pane_g3_cp3_copy1

0x418d,	// (0x00031fe7) tabs_2_long_active_pane_srt_ParamLimits

0x418d,	// (0x00031fe7) tabs_2_long_active_pane_srt

0x418d,	// (0x00031fe7) tabs_2_long_passive_pane_srt_ParamLimits

0x418d,	// (0x00031fe7) tabs_2_long_passive_pane_srt

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp4_srt

0x6ad6,	// (0x00034930) bg_passive_tab_pane_g1_cp4_srt

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp4_srt

0x6acd,	// (0x00034927) bg_passive_tab_pane_g3_cp4_srt

0x58fe,	// (0x00033758) bg_active_tab_pane_cp4_srt_ParamLimits

0x58fe,	// (0x00033758) bg_active_tab_pane_cp4_srt

0xc44f,	// (0x0003a2a9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc44f,	// (0x0003a2a9) tabs_2_long_active_pane_srt_t1

0x6ad6,	// (0x00034930) bg_active_tab_pane_g1_cp4_srt

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp4_srt

0x6acd,	// (0x00034927) bg_active_tab_pane_g3_cp4_srt

0x417f,	// (0x00031fd9) tabs_3_long_active_pane_srt_ParamLimits

0x417f,	// (0x00031fd9) tabs_3_long_active_pane_srt

0x417f,	// (0x00031fd9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x417f,	// (0x00031fd9) tabs_3_long_passive_pane_cp_srt

0x417f,	// (0x00031fd9) tabs_3_long_passive_pane_srt_ParamLimits

0x417f,	// (0x00031fd9) tabs_3_long_passive_pane_srt

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp5_srt

0x5155,	// (0x00032faf) bg_passive_tab_pane_g1_cp5_srt

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp5_srt

0x514c,	// (0x00032fa6) bg_passive_tab_pane_g3_cp5_srt

0x58fe,	// (0x00033758) bg_active_tab_pane_cp5_srt_ParamLimits

0x58fe,	// (0x00033758) bg_active_tab_pane_cp5_srt

0xc43d,	// (0x0003a297) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc43d,	// (0x0003a297) tabs_3_long_active_pane_srt_t1

0x5155,	// (0x00032faf) bg_active_tab_pane_g1_cp5_srt

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp5_srt

0x514c,	// (0x00032fa6) bg_active_tab_pane_g3_cp5_srt

0x6abf,	// (0x00034919) navi_text_pane_srt_t1

0x6ab7,	// (0x00034911) navi_icon_pane_srt_g1

0x554b,	// (0x000333a5) midp_editing_number_pane_srt

0x545c,	// (0x000332b6) midp_ticker_pane_srt

0x5553,	// (0x000333ad) midp_ticker_pane_srt_g1

0x555b,	// (0x000333b5) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003d5e9) midp_ticker_pane_srt_g

0x5563,	// (0x000333bd) midp_ticker_pane_srt_t1

0x6aa8,	// (0x00034902) midp_editing_number_pane_t1_copy1

0xa4c9,	// (0x00038323) listscroll_midp_pane

0xa4c9,	// (0x00038323) midp_form_pane

0x5464,	// (0x000332be) midp_info_popup_window_ParamLimits

0x5464,	// (0x000332be) midp_info_popup_window

0x4acd,	// (0x00032927) bg_popup_sub_pane_cp50_ParamLimits

0x4acd,	// (0x00032927) bg_popup_sub_pane_cp50

0x5d2f,	// (0x00033b89) listscroll_midp_info_pane_ParamLimits

0x5d2f,	// (0x00033b89) listscroll_midp_info_pane

0x5d17,	// (0x00033b71) listscroll_form_midp_pane_ParamLimits

0x5d17,	// (0x00033b71) listscroll_form_midp_pane

0x5d23,	// (0x00033b7d) scroll_bar_cp050

0xc287,	// (0x0003a0e1) list_midp_pane

0x7476,	// (0x000352d0) signal_pane_g2_cp

0x5c49,	// (0x00033aa3) listscroll_midp_info_pane_t1_ParamLimits

0x5c49,	// (0x00033aa3) listscroll_midp_info_pane_t1

0x5c61,	// (0x00033abb) listscroll_midp_info_pane_t2_ParamLimits

0x5c61,	// (0x00033abb) listscroll_midp_info_pane_t2

0x5c9f,	// (0x00033af9) listscroll_midp_info_pane_t3_ParamLimits

0x5c9f,	// (0x00033af9) listscroll_midp_info_pane_t3

0x5cd9,	// (0x00033b33) listscroll_midp_info_pane_t4_ParamLimits

0x5cd9,	// (0x00033b33) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0003d69a) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0003d69a) listscroll_midp_info_pane_t

0x4b34,	// (0x0003298e) scroll_pane_cp21

0x5bed,	// (0x00033a47) form_midp_field_choice_group_pane

0x5bf6,	// (0x00033a50) form_midp_field_text_pane

0x5c2f,	// (0x00033a89) form_midp_field_time_pane

0x5c37,	// (0x00033a91) form_midp_gauge_slider_pane

0x5c40,	// (0x00033a9a) form_midp_gauge_wait_pane

0x4131,	// (0x00031f8b) form_midp_image_pane

0x9110,	// (0x00036f6a) list_single_midp_pane_ParamLimits

0x9110,	// (0x00036f6a) list_single_midp_pane

0xc248,	// (0x0003a0a2) form_midp_field_text_pane_t1

0x5a94,	// (0x000338ee) input_focus_pane_cp050

0x5bdc,	// (0x00033a36) list_midp_form_text_pane

0x5bab,	// (0x00033a05) form_midp_field_choice_group_pane_t1

0x5bb9,	// (0x00033a13) input_focus_pane_cp051

0x5bcd,	// (0x00033a27) list_midp_choice_pane

0x4131,	// (0x00031f8b) status_idle_pane

0x5b8f,	// (0x000339e9) form_midp_field_time_pane_t1

0x4127,	// (0x00031f81) wait_anim_pane_g2_copy1

0x5b9d,	// (0x000339f7) form_midp_field_time_pane_t2

0x0001,

0x54bd,	// (0x00033317) aid_navinavi_width_2_pane

0xf83b,	// (0x0003d695) form_midp_field_time_pane_t

0x4131,	// (0x00031f8b) input_focus_pane_cp052

0x4131,	// (0x00031f8b) bg_input_focus_pane_cp040

0x5b6b,	// (0x000339c5) form_midp_gauge_slider_pane_t1

0x5b79,	// (0x000339d3) form_midp_gauge_slider_pane_t2

0xc22c,	// (0x0003a086) form_midp_gauge_slider_pane_t3

0xc23a,	// (0x0003a094) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0003d68c) form_midp_gauge_slider_pane_t

0x5b87,	// (0x000339e1) form_midp_slider_pane

0x418d,	// (0x00031fe7) bg_input_focus_pane_cp041_ParamLimits

0x418d,	// (0x00031fe7) bg_input_focus_pane_cp041

0x5b38,	// (0x00033992) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b38,	// (0x00033992) form_midp_gauge_wait_pane_t1

0x5b4a,	// (0x000339a4) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b4a,	// (0x000339a4) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0003d687) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0003d687) form_midp_gauge_wait_pane_t

0x5b5c,	// (0x000339b6) form_midp_wait_pane_ParamLimits

0x5b5c,	// (0x000339b6) form_midp_wait_pane

0x5b02,	// (0x0003395c) form_midp_image_pane_g1

0x5b0b,	// (0x00033965) form_midp_image_pane_t1

0x5b1a,	// (0x00033974) form_midp_image_pane_t2

0x5b29,	// (0x00033983) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0003d680) form_midp_image_pane_t

0x5af9,	// (0x00033953) list_single_midp_pane_g1

0x9101,	// (0x00036f5b) list_single_midp_pane_t1

0xc1fc,	// (0x0003a056) list_midp_form_item_pane_ParamLimits

0xc1fc,	// (0x0003a056) list_midp_form_item_pane

0x5477,	// (0x000332d1) list_midp_form_item_pane_t1

0x5486,	// (0x000332e0) midp_ticker_pane_g1

0x5492,	// (0x000332ec) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003d5cf) midp_ticker_pane_g

0xa57e,	// (0x000383d8) midp_ticker_pane_t1

0xc5be,	// (0x0003a418) midp_editing_number_pane_t1

0x6b36,	// (0x00034990) midp_editing_number_pane

0x6b45,	// (0x0003499f) midp_ticker_pane

0x6a98,	// (0x000348f2) ai_message_heading_pane

0x4131,	// (0x00031f8b) bg_popup_window_pane_cp14

0x6aa0,	// (0x000348fa) listscroll_ai_message_pane

0x6a22,	// (0x0003487c) ai_message_heading_pane_g1_ParamLimits

0x6a22,	// (0x0003487c) ai_message_heading_pane_g1

0x6a2e,	// (0x00034888) ai_message_heading_pane_g2_ParamLimits

0x6a2e,	// (0x00034888) ai_message_heading_pane_g2

0x6a3a,	// (0x00034894) ai_message_heading_pane_g3_ParamLimits

0x6a3a,	// (0x00034894) ai_message_heading_pane_g3

0x6a46,	// (0x000348a0) ai_message_heading_pane_g4_ParamLimits

0x6a46,	// (0x000348a0) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0003d7c1) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0003d7c1) ai_message_heading_pane_g

0x6a52,	// (0x000348ac) ai_message_heading_pane_t1_ParamLimits

0x6a52,	// (0x000348ac) ai_message_heading_pane_t1

0x6a6c,	// (0x000348c6) ai_message_heading_pane_t2_ParamLimits

0x6a6c,	// (0x000348c6) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0003d7ca) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0003d7ca) ai_message_heading_pane_t

0x6a7e,	// (0x000348d8) bg_popup_heading_pane_cp1_ParamLimits

0x6a7e,	// (0x000348d8) bg_popup_heading_pane_cp1

0x6a10,	// (0x0003486a) list_ai_message_pane_ParamLimits

0x6a10,	// (0x0003486a) list_ai_message_pane

0x4b34,	// (0x0003298e) scroll_pane_cp10

0x69ac,	// (0x00034806) list_ai_message_pane_g1

0x69b4,	// (0x0003480e) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0003d79e) list_ai_message_pane_g

0x69bc,	// (0x00034816) list_ai_message_pane_t1_ParamLimits

0x69bc,	// (0x00034816) list_ai_message_pane_t1

0x69d1,	// (0x0003482b) list_ai_message_pane_t2_ParamLimits

0x69d1,	// (0x0003482b) list_ai_message_pane_t2

0x69e6,	// (0x00034840) list_ai_message_pane_t3_ParamLimits

0x69e6,	// (0x00034840) list_ai_message_pane_t3

0x69fb,	// (0x00034855) list_ai_message_pane_t4_ParamLimits

0x69fb,	// (0x00034855) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0003d7a3) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0003d7a3) list_ai_message_pane_t

0xc427,	// (0x0003a281) cell_ai_soft_ind_pane_ParamLimits

0xc427,	// (0x0003a281) cell_ai_soft_ind_pane

0x549e,	// (0x000332f8) cell_ai_soft_ind_pane_g1_ParamLimits

0x549e,	// (0x000332f8) cell_ai_soft_ind_pane_g1

0x4131,	// (0x00031f8b) grid_highlight_cp1

0x54ab,	// (0x00033305) text_secondary_cp56_ParamLimits

0x54ab,	// (0x00033305) text_secondary_cp56

0x6981,	// (0x000347db) example_general_pane_ParamLimits

0x6981,	// (0x000347db) example_general_pane

0x698d,	// (0x000347e7) example_parent_pane_g1_ParamLimits

0x698d,	// (0x000347e7) example_parent_pane_g1

0x6999,	// (0x000347f3) example_parent_pane_t1_ParamLimits

0x6999,	// (0x000347f3) example_parent_pane_t1

0xbcb3,	// (0x00039b0d) popup_preview_text_window_ParamLimits

0xbcb3,	// (0x00039b0d) popup_preview_text_window

0x538b,	// (0x000331e5) list_single_pane_cp2_g4

0x459d,	// (0x000323f7) bg_popup_preview_window_pane_ParamLimits

0x459d,	// (0x000323f7) bg_popup_preview_window_pane

0x6714,	// (0x0003456e) popup_preview_text_window_t1_ParamLimits

0x6714,	// (0x0003456e) popup_preview_text_window_t1

0x6732,	// (0x0003458c) popup_preview_text_window_t2_ParamLimits

0x6732,	// (0x0003458c) popup_preview_text_window_t2

0x677b,	// (0x000345d5) popup_preview_text_window_t3_ParamLimits

0x677b,	// (0x000345d5) popup_preview_text_window_t3

0x67c0,	// (0x0003461a) popup_preview_text_window_t4_ParamLimits

0x67c0,	// (0x0003461a) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0003d772) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0003d772) popup_preview_text_window_t

0x683e,	// (0x00034698) scroll_pane_cp11

0x59a4,	// (0x000337fe) bg_popup_preview_window_pane_g1

0x66d4,	// (0x0003452e) bg_popup_preview_window_pane_g2

0x66dc,	// (0x00034536) bg_popup_preview_window_pane_g3

0x66e4,	// (0x0003453e) bg_popup_preview_window_pane_g4

0x66ec,	// (0x00034546) bg_popup_preview_window_pane_g5

0x66f4,	// (0x0003454e) bg_popup_preview_window_pane_g6

0x66fc,	// (0x00034556) bg_popup_preview_window_pane_g7

0x6704,	// (0x0003455e) bg_popup_preview_window_pane_g8

0x972e,	// (0x00037588) aid_popup_width_pane

0xbc91,	// (0x00039aeb) popup_midp_note_alarm_window_ParamLimits

0xbc91,	// (0x00039aeb) popup_midp_note_alarm_window

0x4a09,	// (0x00032863) data_form_pane_ParamLimits

0x8e16,	// (0x00036c70) form_field_data_pane_g1

0x8e20,	// (0x00036c7a) form_field_data_pane_t1_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_ParamLimits

0x4a23,	// (0x0003287d) data_form_wide_pane_ParamLimits

0x8e3a,	// (0x00036c94) form_field_data_wide_pane_g1

0x8e46,	// (0x00036ca0) form_field_data_wide_pane_t1_ParamLimits

0x4790,	// (0x000325ea) input_focus_pane_cp6_ParamLimits

0x9f20,	// (0x00037d7a) input_popup_find_pane_g1_ParamLimits

0x9f20,	// (0x00037d7a) input_popup_find_pane_g1

0xa079,	// (0x00037ed3) aid_navi_side_left_pane

0xa08e,	// (0x00037ee8) aid_navi_side_right_pane

0x61bb,	// (0x00034015) bg_popup_window_pane_cp30_ParamLimits

0x61bb,	// (0x00034015) bg_popup_window_pane_cp30

0x6235,	// (0x0003408f) popup_midp_note_alarm_window_g1_ParamLimits

0x6235,	// (0x0003408f) popup_midp_note_alarm_window_g1

0x6265,	// (0x000340bf) popup_midp_note_alarm_window_t1_ParamLimits

0x6265,	// (0x000340bf) popup_midp_note_alarm_window_t1

0x6306,	// (0x00034160) popup_midp_note_alarm_window_t2_ParamLimits

0x6306,	// (0x00034160) popup_midp_note_alarm_window_t2

0x63b4,	// (0x0003420e) popup_midp_note_alarm_window_t3_ParamLimits

0x63b4,	// (0x0003420e) popup_midp_note_alarm_window_t3

0x63dc,	// (0x00034236) popup_midp_note_alarm_window_t4_ParamLimits

0x63dc,	// (0x00034236) popup_midp_note_alarm_window_t4

0x63fc,	// (0x00034256) popup_midp_note_alarm_window_t5_ParamLimits

0x63fc,	// (0x00034256) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0003d70f) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0003d70f) popup_midp_note_alarm_window_t

0x64a8,	// (0x00034302) wait_bar_pane_cp1_ParamLimits

0x64a8,	// (0x00034302) wait_bar_pane_cp1

0x4131,	// (0x00031f8b) wait_anim_pane_copy1

0x4131,	// (0x00031f8b) wait_border_pane_copy1

0x5ed3,	// (0x00033d2d) wait_border_pane_g1_copy1

0x8e60,	// (0x00036cba) form_field_popup_pane_g1

0x8e68,	// (0x00036cc2) form_field_popup_pane_t1_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_cp7_ParamLimits

0x4a4f,	// (0x000328a9) list_form_pane_ParamLimits

0x8e82,	// (0x00036cdc) form_field_popup_wide_pane_g1

0x8e8a,	// (0x00036ce4) form_field_popup_wide_pane_t1_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_cp8_ParamLimits

0x4a5b,	// (0x000328b5) list_form_wide_pane_ParamLimits

0x6bdb,	// (0x00034a35) aid_size_cell_graphic_pane

0x8f16,	// (0x00036d70) data_form_pane_t1_ParamLimits

0x9170,	// (0x00036fca) data_form_wide_pane_t1_ParamLimits

0xbefd,	// (0x00039d57) bg_status_flat_pane

0x9b1d,	// (0x00037977) title_pane_t1_ParamLimits

0x4147,	// (0x00031fa1) title_pane_t2_ParamLimits

0x416d,	// (0x00031fc7) title_pane_t3_ParamLimits

0xf573,	// (0x0003d3cd) title_pane_t_ParamLimits

0x4ee2,	// (0x00032d3c) level_1_signal_ParamLimits

0x4eef,	// (0x00032d49) level_2_signal_ParamLimits

0x4efc,	// (0x00032d56) level_3_signal_ParamLimits

0x4f09,	// (0x00032d63) level_4_signal_ParamLimits

0x4f16,	// (0x00032d70) level_5_signal_ParamLimits

0x4f23,	// (0x00032d7d) level_6_signal_ParamLimits

0x4f30,	// (0x00032d8a) level_7_signal_ParamLimits

0x4ee2,	// (0x00032d3c) level_1_battery_ParamLimits

0x4eef,	// (0x00032d49) level_2_battery_ParamLimits

0x4efc,	// (0x00032d56) level_3_battery_ParamLimits

0x4f09,	// (0x00032d63) level_4_battery_ParamLimits

0x4f16,	// (0x00032d70) level_5_battery_ParamLimits

0x4f23,	// (0x00032d7d) level_6_battery_ParamLimits

0x4f30,	// (0x00032d8a) level_7_battery_ParamLimits

0x60de,	// (0x00033f38) bg_status_flat_pane_g1

0x60e6,	// (0x00033f40) bg_status_flat_pane_g2

0x60ee,	// (0x00033f48) bg_status_flat_pane_g3

0x60f6,	// (0x00033f50) bg_status_flat_pane_g4

0x60fe,	// (0x00033f58) bg_status_flat_pane_g5

0x6106,	// (0x00033f60) bg_status_flat_pane_g6

0x610e,	// (0x00033f68) bg_status_flat_pane_g7

0x9b8d,	// (0x000379e7) tabs_3_active_pane_t1_ParamLimits

0x9b8d,	// (0x000379e7) tabs_3_passive_pane_t1_ParamLimits

0x9ba7,	// (0x00037a01) tabs_4_active_pane_t1_ParamLimits

0x9ba7,	// (0x00037a01) tabs_4_1_passive_pane_t1_ParamLimits

0x9f36,	// (0x00037d90) tabs_2_active_pane_t1_ParamLimits

0x9f36,	// (0x00037d90) tabs_2_passive_pane_t1_ParamLimits

0x58fe,	// (0x00033758) bg_active_tab_pane_cp4_ParamLimits

0x9f48,	// (0x00037da2) tabs_2_long_active_pane_t1_ParamLimits

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp4_ParamLimits

0xa8d9,	// (0x00038733) list_single_midp_graphic_pane_t1_ParamLimits

0x58fe,	// (0x00033758) bg_active_tab_pane_cp5_ParamLimits

0x9f67,	// (0x00037dc1) tabs_3_long_active_pane_t1_ParamLimits

0x9f5b,	// (0x00037db5) bg_passive_tab_pane_cp5_ParamLimits

0xa8d9,	// (0x00038733) list_single_midp_graphic_pane_t1

0xbefd,	// (0x00039d57) bg_status_flat_pane_ParamLimits

0x5869,	// (0x000336c3) indicator_pane_cp2_ParamLimits

0x5869,	// (0x000336c3) indicator_pane_cp2

0xc040,	// (0x00039e9a) navi_pane_srt_ParamLimits

0xc040,	// (0x00039e9a) navi_pane_srt

0x5891,	// (0x000336eb) popup_clock_digital_analogue_window_cp1

0x41d1,	// (0x0003202b) indicator_pane_t1

0x545c,	// (0x000332b6) copy_highlight_pane

0x545c,	// (0x000332b6) cursor_graphics_pane

0x545c,	// (0x000332b6) graphic_within_text_pane

0x545c,	// (0x000332b6) link_highlight_pane

0x6801,	// (0x0003465b) popup_preview_text_window_t5_ParamLimits

0x6801,	// (0x0003465b) popup_preview_text_window_t5

0x54c5,	// (0x0003331f) cursor_digital_pane

0x54c5,	// (0x0003331f) cursor_primary_pane

0x54d6,	// (0x00033330) cursor_primary_small_pane

0x54de,	// (0x00033338) cursor_secondary_pane

0x54e6,	// (0x00033340) cursor_title_pane

0x54c5,	// (0x0003331f) link_highlight_digital_pane

0x54cd,	// (0x00033327) link_highlight_primary_pane

0x54d6,	// (0x00033330) link_highlight_primary_small_pane

0x54de,	// (0x00033338) link_highlight_secondary_pane

0x54e6,	// (0x00033340) link_highlight_title_pane

0x54c5,	// (0x0003331f) copy_highlight_digital_pane

0x54c5,	// (0x0003331f) copy_highlight_primary_pane

0x54d6,	// (0x00033330) copy_highlight_primary_small_pane

0x54de,	// (0x00033338) copy_highlight_secondary_pane

0x54e6,	// (0x00033340) copy_highlight_title_pane

0x54de,	// (0x00033338) graphic_text_digital_pane

0x615e,	// (0x00033fb8) graphic_text_primary_pane

0x6167,	// (0x00033fc1) graphic_text_primary_small_pane

0x54d6,	// (0x00033330) graphic_text_secondary_pane

0x54c5,	// (0x0003331f) graphic_text_title_pane

0xa590,	// (0x000383ea) cursor_primary_pane_g1

0x6150,	// (0x00033faa) cursor_text_primary_t1

0xc2cf,	// (0x0003a129) cursor_primary_small_pane_g1

0x6142,	// (0x00033f9c) cursor_text_primary_small_t1

0xc2c5,	// (0x0003a11f) cursor_primary_small_pane_g1_copy1

0x6134,	// (0x00033f8e) cursor_text_primary_small_t1_copy1

0x6126,	// (0x00033f80) cursor_text_title_t1

0xc2bb,	// (0x0003a115) cursor_title_pane_g1

0xa590,	// (0x000383ea) cursor_digital_pane_g1

0x54ee,	// (0x00033348) cursor_text_digital_t1

0x60c7,	// (0x00033f21) link_highlight_primary_pane_g1

0x60cf,	// (0x00033f29) link_highlight_primary_pane_t1

0x54fc,	// (0x00033356) link_highlight_primary_small_pane_g1

0x5504,	// (0x0003335e) link_highlight_primary_small_pane_t1

0x54fc,	// (0x00033356) link_highlight_secondary_pane_g1

0x5513,	// (0x0003336d) link_highlight_secondary_pane_t1

0x603b,	// (0x00033e95) link_highlight_title_pane_g1

0x6043,	// (0x00033e9d) link_highlight_title_pane_t1

0x6024,	// (0x00033e7e) link_highlight_digital_pane_g1

0x602c,	// (0x00033e86) link_highlight_digital_pane_t1

0x5f18,	// (0x00033d72) copy_highlight_primary_pane_g1

0x5f20,	// (0x00033d7a) copy_highlight_primary_pane_t1

0x5ef2,	// (0x00033d4c) copy_highlight_primary_small_pane_g1

0x5f09,	// (0x00033d63) copy_highlight_primary_small_pane_t1

0x5522,	// (0x0003337c) copy_highlight_secondary_pane_g1

0x552a,	// (0x00033384) copy_highlight_secondary_pane_t1

0x5ef2,	// (0x00033d4c) copy_highlight_title_pane_g1

0x5efa,	// (0x00033d54) copy_highlight_title_pane_t1

0x5f18,	// (0x00033d72) copy_highlight_digital_pane_g1

0x6d65,	// (0x00034bbf) copy_highlight_digital_pane_t1

0x6cb9,	// (0x00034b13) graphic_text_primary_pane_g1

0x6d49,	// (0x00034ba3) graphic_text_primary_pane_t1

0x6d57,	// (0x00034bb1) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0003d83e) graphic_text_primary_pane_t

0x6d25,	// (0x00034b7f) graphic_text_primary_small_pane_g1

0x6d2d,	// (0x00034b87) graphic_text_primary_small_pane_t1

0x6d3b,	// (0x00034b95) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0003d839) graphic_text_primary_small_pane_t

0x6d01,	// (0x00034b5b) graphic_text_secondary_pane_g1

0x6d09,	// (0x00034b63) graphic_text_secondary_pane_t1

0x6d17,	// (0x00034b71) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0003d834) graphic_text_secondary_pane_t

0x6cdd,	// (0x00034b37) graphic_text_title_pane_g1

0x6ce5,	// (0x00034b3f) graphic_text_title_pane_t1

0x6cf3,	// (0x00034b4d) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0003d82f) graphic_text_title_pane_t

0x6cb9,	// (0x00034b13) graphic_text_digital_pane_g1

0x6cc1,	// (0x00034b1b) graphic_text_digital_pane_t1

0x6ccf,	// (0x00034b29) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0003d82a) graphic_text_digital_pane_t

0x418d,	// (0x00031fe7) navi_icon_pane_srt_ParamLimits

0x418d,	// (0x00031fe7) navi_icon_pane_srt

0x4131,	// (0x00031f8b) navi_midp_pane_srt

0x4131,	// (0x00031f8b) navi_navi_pane_srt

0x418d,	// (0x00031fe7) navi_text_pane_srt_ParamLimits

0x418d,	// (0x00031fe7) navi_text_pane_srt

0x6c84,	// (0x00034ade) navi_navi_icon_text_pane_srt

0x6c9e,	// (0x00034af8) navi_navi_pane_srt_g1_ParamLimits

0x6c9e,	// (0x00034af8) navi_navi_pane_srt_g1

0x6c8c,	// (0x00034ae6) navi_navi_pane_srt_g2_ParamLimits

0x6c8c,	// (0x00034ae6) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0003d825) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0003d825) navi_navi_pane_srt_g

0x6cb0,	// (0x00034b0a) navi_navi_tabs_pane_srt

0x6c84,	// (0x00034ade) navi_navi_text_pane_srt

0x6c84,	// (0x00034ade) navi_navi_volume_pane_srt

0x6c75,	// (0x00034acf) navi_navi_text_pane_srt_t1

0xad0f,	// (0x00038b69) navi_navi_volume_pane_srt_g1

0xad17,	// (0x00038b71) volume_small_pane_srt_ParamLimits

0xad17,	// (0x00038b71) volume_small_pane_srt

0xa59a,	// (0x000383f4) volume_small_pane_srt_g1_ParamLimits

0xa59a,	// (0x000383f4) volume_small_pane_srt_g1

0xa5aa,	// (0x00038404) volume_small_pane_srt_g2_ParamLimits

0xa5aa,	// (0x00038404) volume_small_pane_srt_g2

0xa5bb,	// (0x00038415) volume_small_pane_srt_g3_ParamLimits

0xa5bb,	// (0x00038415) volume_small_pane_srt_g3

0xa5cc,	// (0x00038426) volume_small_pane_srt_g4_ParamLimits

0xa5cc,	// (0x00038426) volume_small_pane_srt_g4

0xa5dd,	// (0x00038437) volume_small_pane_srt_g5_ParamLimits

0xa5dd,	// (0x00038437) volume_small_pane_srt_g5

0xa5ee,	// (0x00038448) volume_small_pane_srt_g6_ParamLimits

0xa5ee,	// (0x00038448) volume_small_pane_srt_g6

0xa5ff,	// (0x00038459) volume_small_pane_srt_g7_ParamLimits

0xa5ff,	// (0x00038459) volume_small_pane_srt_g7

0xa610,	// (0x0003846a) volume_small_pane_srt_g8_ParamLimits

0xa610,	// (0x0003846a) volume_small_pane_srt_g8

0xa621,	// (0x0003847b) volume_small_pane_srt_g9_ParamLimits

0xa621,	// (0x0003847b) volume_small_pane_srt_g9

0xa632,	// (0x0003848c) volume_small_pane_srt_g10_ParamLimits

0xa632,	// (0x0003848c) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003d5d4) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003d5d4) volume_small_pane_srt_g

0x4646,	// (0x000324a0) query_popup_data_pane_cp2

0x6c5b,	// (0x00034ab5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c5b,	// (0x00034ab5) navi_navi_icon_text_pane_srt_t1

0x615e,	// (0x00033fb8) navi_tabs_2_long_pane_srt

0x615e,	// (0x00033fb8) navi_tabs_2_pane_srt

0x615e,	// (0x00033fb8) navi_tabs_3_long_pane_srt

0x615e,	// (0x00033fb8) navi_tabs_3_pane_srt

0x615e,	// (0x00033fb8) navi_tabs_4_pane_srt

0xacef,	// (0x00038b49) tabs_2_active_pane_srt_ParamLimits

0xacef,	// (0x00038b49) tabs_2_active_pane_srt

0xacff,	// (0x00038b59) tabs_2_passive_pane_srt_ParamLimits

0xacff,	// (0x00038b59) tabs_2_passive_pane_srt

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp1_srt

0x6c42,	// (0x00034a9c) bg_passive_tab_pane_g1_cp1_srt

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp1_srt

0x6c39,	// (0x00034a93) bg_passive_tab_pane_g3_cp1_srt

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp1_srt_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp1_srt

0x6c4b,	// (0x00034aa5) tabs_2_active_pane_srt_g1

0xc67f,	// (0x0003a4d9) tabs_2_active_pane_srt_t1_ParamLimits

0xc67f,	// (0x0003a4d9) tabs_2_active_pane_srt_t1

0x6c42,	// (0x00034a9c) bg_active_tab_pane_g1_cp1_srt

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp1_srt

0x6c39,	// (0x00034a93) bg_active_tab_pane_g3_cp1_srt

0xacbc,	// (0x00038b16) tabs_3_active_pane_srt_ParamLimits

0xacbc,	// (0x00038b16) tabs_3_active_pane_srt

0xaccd,	// (0x00038b27) tabs_3_passive_pane_cp_srt_ParamLimits

0xaccd,	// (0x00038b27) tabs_3_passive_pane_cp_srt

0xacde,	// (0x00038b38) tabs_3_passive_pane_srt_ParamLimits

0xacde,	// (0x00038b38) tabs_3_passive_pane_srt

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b6c,	// (0x000329c6) bg_passive_tab_pane_cp2_srt

0x5542,	// (0x0003339c) bg_passive_tab_pane_g1_cp2_srt

0x5105,	// (0x00032f5f) bg_passive_tab_pane_g2_cp2_srt

0x5539,	// (0x00033393) bg_passive_tab_pane_g3_cp2_srt

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp2_srt_ParamLimits

0x418d,	// (0x00031fe7) bg_active_tab_pane_cp2_srt

0x6c31,	// (0x00034a8b) tabs_3_active_pane_srt_g1

0xc66d,	// (0x0003a4c7) tabs_3_active_pane_srt_t1_ParamLimits

0xc66d,	// (0x0003a4c7) tabs_3_active_pane_srt_t1

0x5542,	// (0x0003339c) bg_active_tab_pane_g1_cp2_srt

0x5105,	// (0x00032f5f) bg_active_tab_pane_g2_cp2_srt

0x5539,	// (0x00033393) bg_active_tab_pane_g3_cp2_srt

0xac74,	// (0x00038ace) tabs_4_active_pane_srt_ParamLimits

0xac74,	// (0x00038ace) tabs_4_active_pane_srt

0xac86,	// (0x00038ae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0xac86,	// (0x00038ae0) tabs_4_passive_pane_cp2_srt

0x5666,	// (0x000334c0) aid_size_cell_toolbar

0x9f5b,	// (0x00037db5) main_idle_act_pane_ParamLimits

0x5730,	// (0x0003358a) popup_large_graphic_colour_window_ParamLimits

0xbe05,	// (0x00039c5f) popup_toolbar_window_ParamLimits

0xbe05,	// (0x00039c5f) popup_toolbar_window

0x6b58,	// (0x000349b2) list_single_graphic_2heading_pane_ParamLimits

0x6b58,	// (0x000349b2) list_single_graphic_2heading_pane

0x4d16,	// (0x00032b70) aid_size_cell_apps_grid_lsc_pane

0x4d28,	// (0x00032b82) aid_size_cell_apps_grid_prt_pane

0x4b6c,	// (0x000329c6) bg_wml_button_pane_cp1_ParamLimits

0x4b6c,	// (0x000329c6) bg_wml_button_pane_cp1

0xc248,	// (0x0003a0a2) form_midp_field_text_pane_t1_ParamLimits

0x5a94,	// (0x000338ee) input_focus_pane_cp050_ParamLimits

0x5bdc,	// (0x00033a36) list_midp_form_text_pane_ParamLimits

0x5bb9,	// (0x00033a13) input_focus_pane_cp051_ParamLimits

0x5bcd,	// (0x00033a27) list_midp_choice_pane_ParamLimits

0xc196,	// (0x00039ff0) list_single_2graphic_pane_cp3_ParamLimits

0xc196,	// (0x00039ff0) list_single_2graphic_pane_cp3

0xc1c2,	// (0x0003a01c) list_single_midp_graphic_pane_ParamLimits

0xc1c2,	// (0x0003a01c) list_single_midp_graphic_pane

0x9049,	// (0x00036ea3) list_single_graphic_2heading_pane_g1_ParamLimits

0x9049,	// (0x00036ea3) list_single_graphic_2heading_pane_g1

0x9055,	// (0x00036eaf) list_single_graphic_2heading_pane_g4_ParamLimits

0x9055,	// (0x00036eaf) list_single_graphic_2heading_pane_g4

0x9061,	// (0x00036ebb) list_single_graphic_2heading_pane_g5_ParamLimits

0x9061,	// (0x00036ebb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003d627) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003d627) list_single_graphic_2heading_pane_g

0x906d,	// (0x00036ec7) list_single_graphic_2heading_pane_t1_ParamLimits

0x906d,	// (0x00036ec7) list_single_graphic_2heading_pane_t1

0x9081,	// (0x00036edb) list_single_graphic_2heading_pane_t2_ParamLimits

0x9081,	// (0x00036edb) list_single_graphic_2heading_pane_t2

0x909d,	// (0x00036ef7) list_single_graphic_2heading_pane_t3_ParamLimits

0x909d,	// (0x00036ef7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003d62e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003d62e) list_single_graphic_2heading_pane_t

0x58d4,	// (0x0003372e) bg_popup_sub_pane_cp2

0x590c,	// (0x00033766) grid_toobar_pane

0xa85e,	// (0x000386b8) cell_toolbar_pane_ParamLimits

0xa85e,	// (0x000386b8) cell_toolbar_pane

0x5948,	// (0x000337a2) cell_toolbar_pane_g1_ParamLimits

0x5948,	// (0x000337a2) cell_toolbar_pane_g1

0x595c,	// (0x000337b6) cell_toolbar_pane_g2_ParamLimits

0x595c,	// (0x000337b6) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0003d63c) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0003d63c) cell_toolbar_pane_g

0x597e,	// (0x000337d8) grid_highlight_pane_cp2_ParamLimits

0x597e,	// (0x000337d8) grid_highlight_pane_cp2

0x5998,	// (0x000337f2) toolbar_button_pane

0x59a4,	// (0x000337fe) toolbar_button_pane_g1

0x59b4,	// (0x0003380e) toolbar_button_pane_g2

0x59ac,	// (0x00033806) toolbar_button_pane_g3

0x59c4,	// (0x0003381e) toolbar_button_pane_g4

0x59bc,	// (0x00033816) toolbar_button_pane_g5

0x59cc,	// (0x00033826) toolbar_button_pane_g6

0x59d4,	// (0x0003382e) toolbar_button_pane_g7

0x59e4,	// (0x0003383e) toolbar_button_pane_g8

0x59dc,	// (0x00033836) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0003d641) toolbar_button_pane_g

0xa896,	// (0x000386f0) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa896,	// (0x000386f0) list_single_2graphic_pane_g1_cp3

0xa8a2,	// (0x000386fc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa8a2,	// (0x000386fc) list_single_2graphic_pane_g2_cp3

0x5288,	// (0x000330e2) list_single_2graphic_pane_g3_cp3

0xa8b3,	// (0x0003870d) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa8b3,	// (0x0003870d) list_single_2graphic_pane_g4_cp3

0xa8bf,	// (0x00038719) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa8bf,	// (0x00038719) list_single_2graphic_pane_t1_cp3

0x527c,	// (0x000330d6) list_single_midp_graphic_pane_g2_ParamLimits

0x527c,	// (0x000330d6) list_single_midp_graphic_pane_g2

0x9031,	// (0x00036e8b) aid_zoom_text_primary

0x9039,	// (0x00036e93) aid_zoom_text_secondary

0x55f6,	// (0x00033450) status_small_pane_g7_ParamLimits

0x55f6,	// (0x00033450) status_small_pane_g7

0x5619,	// (0x00033473) status_small_pane_t1_ParamLimits

0x9b00,	// (0x0003795a) title_pane_g2

0x0003,

0xf56a,	// (0x0003d3c4) title_pane_g

0x9d5a,	// (0x00037bb4) aid_size_cell_colour_1_pane_ParamLimits

0x9d5a,	// (0x00037bb4) aid_size_cell_colour_1_pane

0x9d6e,	// (0x00037bc8) aid_size_cell_colour_2_pane_ParamLimits

0x9d6e,	// (0x00037bc8) aid_size_cell_colour_2_pane

0x9d82,	// (0x00037bdc) aid_size_cell_colour_3_pane_ParamLimits

0x9d82,	// (0x00037bdc) aid_size_cell_colour_3_pane

0x9d96,	// (0x00037bf0) aid_size_cell_colour_4_pane_ParamLimits

0x9d96,	// (0x00037bf0) aid_size_cell_colour_4_pane

0x9fb5,	// (0x00037e0f) title_pane_stacon_g1_ParamLimits

0x9fb5,	// (0x00037e0f) title_pane_stacon_g1

0x5f77,	// (0x00033dd1) popup_note_wait_window_g3_ParamLimits

0x5f77,	// (0x00033dd1) popup_note_wait_window_g3

0x5fed,	// (0x00033e47) popup_note_wait_window_t5_ParamLimits

0x5fed,	// (0x00033e47) popup_note_wait_window_t5

0x4131,	// (0x00031f8b) main_feb_china_hwr_fs_writing_pane

0xa82e,	// (0x00038688) popup_feb_china_hwr_fs_window_ParamLimits

0xa82e,	// (0x00038688) popup_feb_china_hwr_fs_window

0xa8ef,	// (0x00038749) aid_size_cell_hwr_fs_ParamLimits

0xa8ef,	// (0x00038749) aid_size_cell_hwr_fs

0x5a94,	// (0x000338ee) bg_popup_sub_pane_cp3_ParamLimits

0x5a94,	// (0x000338ee) bg_popup_sub_pane_cp3

0xa904,	// (0x0003875e) grid_hwr_fs_pane_ParamLimits

0xa904,	// (0x0003875e) grid_hwr_fs_pane

0xa91c,	// (0x00038776) linegrid_hwr_fs_pane_ParamLimits

0xa91c,	// (0x00038776) linegrid_hwr_fs_pane

0xa92c,	// (0x00038786) cell_hwr_fs_pane_ParamLimits

0xa92c,	// (0x00038786) cell_hwr_fs_pane

0x5aa0,	// (0x000338fa) linegrid_hwr_fs_pane_g1_ParamLimits

0x5aa0,	// (0x000338fa) linegrid_hwr_fs_pane_g1

0xc16a,	// (0x00039fc4) linegrid_hwr_fs_pane_g2_ParamLimits

0xc16a,	// (0x00039fc4) linegrid_hwr_fs_pane_g2

0x5aac,	// (0x00033906) linegrid_hwr_fs_pane_g3_ParamLimits

0x5aac,	// (0x00033906) linegrid_hwr_fs_pane_g3

0xa94e,	// (0x000387a8) linegrid_hwr_fs_pane_g4_ParamLimits

0xa94e,	// (0x000387a8) linegrid_hwr_fs_pane_g4

0xa968,	// (0x000387c2) linegrid_hwr_fs_pane_g5_ParamLimits

0xa968,	// (0x000387c2) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0003d66c) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0003d66c) linegrid_hwr_fs_pane_g

0x5ab8,	// (0x00033912) cell_hwr_fs_pane_g1_ParamLimits

0x5ab8,	// (0x00033912) cell_hwr_fs_pane_g1

0x58a2,	// (0x000336fc) cell_hwr_fs_pane_g2_ParamLimits

0x58a2,	// (0x000336fc) cell_hwr_fs_pane_g2

0xc17c,	// (0x00039fd6) cell_hwr_fs_pane_g3_ParamLimits

0xc17c,	// (0x00039fd6) cell_hwr_fs_pane_g3

0xc189,	// (0x00039fe3) cell_hwr_fs_pane_g4_ParamLimits

0xc189,	// (0x00039fe3) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0003d677) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0003d677) cell_hwr_fs_pane_g

0xa97e,	// (0x000387d8) cell_hwr_fs_pane_t1

0x4131,	// (0x00031f8b) grid_highlight_pane_cp6

0x4131,	// (0x00031f8b) main_idle_act2_pane

0x4b1b,	// (0x00032975) aid_inside_area_popup_secondary

0xc2ef,	// (0x0003a149) aid_inside_area_window_primary_ParamLimits

0xc2ef,	// (0x0003a149) aid_inside_area_window_primary

0x6d74,	// (0x00034bce) ai2_news_ticker_pane

0x6d7c,	// (0x00034bd6) aid_size_cell_ai1_link_ParamLimits

0x6d7c,	// (0x00034bd6) aid_size_cell_ai1_link

0x6d96,	// (0x00034bf0) popup_ai2_data_window_ParamLimits

0x6d96,	// (0x00034bf0) popup_ai2_data_window

0x6daa,	// (0x00034c04) popup_ai2_link_window_ParamLimits

0x6daa,	// (0x00034c04) popup_ai2_link_window

0x5a94,	// (0x000338ee) bg_popup_sub_pane_cp4_ParamLimits

0x5a94,	// (0x000338ee) bg_popup_sub_pane_cp4

0x6dbe,	// (0x00034c18) grid_ai2_link_pane_ParamLimits

0x6dbe,	// (0x00034c18) grid_ai2_link_pane

0x6dd5,	// (0x00034c2f) popup_ai2_link_window_g1_ParamLimits

0x6dd5,	// (0x00034c2f) popup_ai2_link_window_g1

0x6de1,	// (0x00034c3b) popup_ai2_link_window_g2_ParamLimits

0x6de1,	// (0x00034c3b) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0003d843) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0003d843) popup_ai2_link_window_g

0x6df0,	// (0x00034c4a) ai2_mp_button_pane

0x6df8,	// (0x00034c52) ai2_mp_volume_pane

0x5bb9,	// (0x00033a13) bg_popup_sub_pane_cp5_ParamLimits

0x5bb9,	// (0x00033a13) bg_popup_sub_pane_cp5

0x6e00,	// (0x00034c5a) heading_ai2_gene_pane_ParamLimits

0x6e00,	// (0x00034c5a) heading_ai2_gene_pane

0x6e0c,	// (0x00034c66) list_ai2_gene_pane_ParamLimits

0x6e0c,	// (0x00034c66) list_ai2_gene_pane

0x6e54,	// (0x00034cae) cell_ai2_link_pane_ParamLimits

0x6e54,	// (0x00034cae) cell_ai2_link_pane

0x6e6a,	// (0x00034cc4) cell_ai2_link_pane_g1

0x4131,	// (0x00031f8b) grid_highlight_pane_cp7

0xad2c,	// (0x00038b86) ai2_mp_volume_pane_g1

0x6f43,	// (0x00034d9d) ai2_mp_volume_pane_g2

0x6eb0,	// (0x00034d0a) list_ai2_gene_pane_t1

0x6f3b,	// (0x00034d95) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0003d85c) ai2_mp_volume_pane_g

0xad34,	// (0x00038b8e) volume_small_pane_cp3

0x6f4b,	// (0x00034da5) aid_size_cell_ai2_button

0x6f53,	// (0x00034dad) grid_ai2_button_pane

0x6f5c,	// (0x00034db6) cell_ai2_button_pane_ParamLimits

0x6f5c,	// (0x00034db6) cell_ai2_button_pane

0x4127,	// (0x00031f81) cell_ai2_button_pane_g1

0x4131,	// (0x00031f8b) grid_highlight_pane_cp8

0x6efb,	// (0x00034d55) ai2_gene_pane_t1_ParamLimits

0x6efb,	// (0x00034d55) ai2_gene_pane_t1

0xa7ae,	// (0x00038608) aid_height_parent_landscape

0xc462,	// (0x0003a2bc) aid_height_set_list

0x6501,	// (0x0003435b) aid_size_parent

0x6bdb,	// (0x00034a35) aid_size_cell_graphic_pane_ParamLimits

0x6e1c,	// (0x00034c76) popup_ai2_data_window_g1_ParamLimits

0x6e1c,	// (0x00034c76) popup_ai2_data_window_g1

0x6e28,	// (0x00034c82) ai2_news_ticker_pane_g1

0x6e30,	// (0x00034c8a) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0003d848) ai2_news_ticker_pane_g

0x6e38,	// (0x00034c92) ai2_news_ticker_pane_t1

0x6e46,	// (0x00034ca0) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0003d84d) ai2_news_ticker_pane_t

0x6e73,	// (0x00034ccd) heading_ai2_gene_pane_g1

0x6e7b,	// (0x00034cd5) heading_ai2_gene_pane_t1_ParamLimits

0x6e7b,	// (0x00034cd5) heading_ai2_gene_pane_t1

0x6e90,	// (0x00034cea) list_highlight_pane_cp6

0x6e98,	// (0x00034cf2) ai2_gene_pane_ParamLimits

0x6e98,	// (0x00034cf2) ai2_gene_pane

0x6ebe,	// (0x00034d18) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0003d852) list_ai2_gene_pane_t

0x6ecc,	// (0x00034d26) list_highlight_pane_cp8_ParamLimits

0x6ecc,	// (0x00034d26) list_highlight_pane_cp8

0x6edd,	// (0x00034d37) ai2_gene_pane_g1_ParamLimits

0x6edd,	// (0x00034d37) ai2_gene_pane_g1

0x6eef,	// (0x00034d49) ai2_gene_pane_g2_ParamLimits

0x6eef,	// (0x00034d49) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0003d857) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0003d857) ai2_gene_pane_g

0x49ab,	// (0x00032805) scroll_pane_cp12

0xa76d,	// (0x000385c7) control_pane_t3_ParamLimits

0xa76d,	// (0x000385c7) control_pane_t3

0x560a,	// (0x00033464) status_small_pane_g8_ParamLimits

0x560a,	// (0x00033464) status_small_pane_g8

0xbab8,	// (0x00039912) popup_find_window_ParamLimits

0xbca5,	// (0x00039aff) popup_note_image_window_ParamLimits

0x90b5,	// (0x00036f0f) list_double2_graphic_pane_vc_g1_ParamLimits

0x90b5,	// (0x00036f0f) list_double2_graphic_pane_vc_g1

0x9e2e,	// (0x00037c88) list_double2_graphic_pane_vc_g2_ParamLimits

0x9e2e,	// (0x00037c88) list_double2_graphic_pane_vc_g2

0x9e3a,	// (0x00037c94) list_double2_graphic_pane_vc_g3_ParamLimits

0x9e3a,	// (0x00037c94) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d635) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d635) list_double2_graphic_pane_vc_g

0x90c1,	// (0x00036f1b) list_double2_graphic_pane_vc_t1_ParamLimits

0x90c1,	// (0x00036f1b) list_double2_graphic_pane_vc_t1

0x9e2e,	// (0x00037c88) list_single_heading_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_single_heading_pane_vc_g1

0x9e3a,	// (0x00037c94) list_single_heading_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_single_heading_pane_vc_g

0x90d7,	// (0x00036f31) list_single_heading_pane_vc_t1_ParamLimits

0x90d7,	// (0x00036f31) list_single_heading_pane_vc_t1

0x90ed,	// (0x00036f47) list_single_heading_pane_vc_t2_ParamLimits

0x90ed,	// (0x00036f47) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0003d65b) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0003d65b) list_single_heading_pane_vc_t

0x59ec,	// (0x00033846) list_setting_number_pane_vc_g1_ParamLimits

0x59ec,	// (0x00033846) list_setting_number_pane_vc_g1

0x59f8,	// (0x00033852) list_setting_number_pane_vc_g2_ParamLimits

0x59f8,	// (0x00033852) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0003d660) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0003d660) list_setting_number_pane_vc_g

0x5a04,	// (0x0003385e) list_setting_number_pane_vc_t1_ParamLimits

0x5a04,	// (0x0003385e) list_setting_number_pane_vc_t1

0x5a18,	// (0x00033872) list_setting_number_pane_vc_t2_ParamLimits

0x5a18,	// (0x00033872) list_setting_number_pane_vc_t2

0x5a34,	// (0x0003388e) list_setting_number_pane_vc_t3_ParamLimits

0x5a34,	// (0x0003388e) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0003d665) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0003d665) list_setting_number_pane_vc_t

0x5a5c,	// (0x000338b6) set_value_pane_vc_ParamLimits

0x5a5c,	// (0x000338b6) set_value_pane_vc

0x6b58,	// (0x000349b2) list_double2_graphic_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double2_graphic_pane_vc

0x6b58,	// (0x000349b2) list_double2_large_graphic_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double2_large_graphic_pane_vc

0x6b58,	// (0x000349b2) list_double2_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double2_pane_vc

0x6b58,	// (0x000349b2) list_double_graphic_heading_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_graphic_heading_pane_vc

0x6b58,	// (0x000349b2) list_double_graphic_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_graphic_pane_vc

0x6b58,	// (0x000349b2) list_double_heading_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_heading_pane_vc

0x6b58,	// (0x000349b2) list_double_large_graphic_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_large_graphic_pane_vc

0x6b58,	// (0x000349b2) list_double_number_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_number_pane_vc

0x6b58,	// (0x000349b2) list_double_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_pane_vc

0x6b58,	// (0x000349b2) list_double_time_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_double_time_pane_vc

0x6b58,	// (0x000349b2) list_setting_number_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_setting_number_pane_vc

0x6b58,	// (0x000349b2) list_setting_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_setting_pane_vc

0x6b58,	// (0x000349b2) list_single_graphic_heading_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_single_graphic_heading_pane_vc

0x6b58,	// (0x000349b2) list_single_heading_pane_vc_ParamLimits

0x6b58,	// (0x000349b2) list_single_heading_pane_vc

0xabdd,	// (0x00038a37) list_single_number_heading_pane_vc_ParamLimits

0xabdd,	// (0x00038a37) list_single_number_heading_pane_vc

0x90b5,	// (0x00036f0f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x90b5,	// (0x00036f0f) list_double_graphic_heading_pane_vc_g1

0x9e2e,	// (0x00037c88) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9e2e,	// (0x00037c88) list_double_graphic_heading_pane_vc_g2

0x9e3a,	// (0x00037c94) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9e3a,	// (0x00037c94) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d635) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d635) list_double_graphic_heading_pane_vc_g

0x91f4,	// (0x0003704e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x91f4,	// (0x0003704e) list_double_graphic_heading_pane_vc_t1

0x90d7,	// (0x00036f31) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x90d7,	// (0x00036f31) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0003d863) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0003d863) list_double_graphic_heading_pane_vc_t

0x59ec,	// (0x00033846) list_setting_pane_vc_g1_ParamLimits

0x59ec,	// (0x00033846) list_setting_pane_vc_g1

0x59f8,	// (0x00033852) list_setting_pane_vc_g2_ParamLimits

0x59f8,	// (0x00033852) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0003d660) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0003d660) list_setting_pane_vc_g

0x7152,	// (0x00034fac) list_setting_pane_vc_t1_ParamLimits

0x7152,	// (0x00034fac) list_setting_pane_vc_t1

0x7166,	// (0x00034fc0) list_setting_pane_vc_t2_ParamLimits

0x7166,	// (0x00034fc0) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003d8a6) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003d8a6) list_setting_pane_vc_t

0x5a5c,	// (0x000338b6) set_value_pane_cp_vc_ParamLimits

0x5a5c,	// (0x000338b6) set_value_pane_cp_vc

0x9e2e,	// (0x00037c88) list_single_number_heading_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_single_number_heading_pane_vc_g1

0x9e3a,	// (0x00037c94) list_single_number_heading_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_single_number_heading_pane_vc_g

0x90d7,	// (0x00036f31) list_single_number_heading_pane_vc_t1_ParamLimits

0x90d7,	// (0x00036f31) list_single_number_heading_pane_vc_t1

0x9208,	// (0x00037062) list_single_number_heading_pane_vc_t2_ParamLimits

0x9208,	// (0x00037062) list_single_number_heading_pane_vc_t2

0x921c,	// (0x00037076) list_single_number_heading_pane_vc_t3_ParamLimits

0x921c,	// (0x00037076) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0003d8ab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0003d8ab) list_single_number_heading_pane_vc_t

0x90b5,	// (0x00036f0f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x90b5,	// (0x00036f0f) list_single_graphic_heading_pane_vc_g1

0x9e2e,	// (0x00037c88) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9e2e,	// (0x00037c88) list_single_graphic_heading_pane_vc_g4

0x9e3a,	// (0x00037c94) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9e3a,	// (0x00037c94) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0003d635) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d635) list_single_graphic_heading_pane_vc_g

0x90d7,	// (0x00036f31) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x90d7,	// (0x00036f31) list_single_graphic_heading_pane_vc_t1

0x922e,	// (0x00037088) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x922e,	// (0x00037088) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0003d8b2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0003d8b2) list_single_graphic_heading_pane_vc_t

0x9e2e,	// (0x00037c88) list_double2_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_double2_pane_vc_g1

0x9e3a,	// (0x00037c94) list_double2_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_double2_pane_vc_g

0x9242,	// (0x0003709c) list_double2_pane_vc_t1_ParamLimits

0x9242,	// (0x0003709c) list_double2_pane_vc_t1

0xad8e,	// (0x00038be8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xad8e,	// (0x00038be8) list_double2_large_graphic_pane_vc_g1

0x9e2e,	// (0x00037c88) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9e2e,	// (0x00037c88) list_double2_large_graphic_pane_vc_g2

0x9e3a,	// (0x00037c94) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9e3a,	// (0x00037c94) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0003d8b7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0003d8b7) list_double2_large_graphic_pane_vc_g

0x9258,	// (0x000370b2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9258,	// (0x000370b2) list_double2_large_graphic_pane_vc_t1

0xad9a,	// (0x00038bf4) list_double_time_pane_vc_g1_ParamLimits

0xad9a,	// (0x00038bf4) list_double_time_pane_vc_g1

0xada6,	// (0x00038c00) list_double_time_pane_vc_g2_ParamLimits

0xada6,	// (0x00038c00) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0003d8be) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0003d8be) list_double_time_pane_vc_g

0x926e,	// (0x000370c8) list_double_time_pane_vc_t1_ParamLimits

0x926e,	// (0x000370c8) list_double_time_pane_vc_t1

0x9287,	// (0x000370e1) list_double_time_pane_vc_t2_ParamLimits

0x9287,	// (0x000370e1) list_double_time_pane_vc_t2

0x92c7,	// (0x00037121) list_double_time_pane_vc_t3_ParamLimits

0x92c7,	// (0x00037121) list_double_time_pane_vc_t3

0x92df,	// (0x00037139) list_double_time_pane_vc_t4_ParamLimits

0x92df,	// (0x00037139) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0003d8c3) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0003d8c3) list_double_time_pane_vc_t

0x9e2e,	// (0x00037c88) list_double_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_double_pane_vc_g1

0x9e3a,	// (0x00037c94) list_double_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_double_pane_vc_g

0x92f3,	// (0x0003714d) list_double_pane_vc_t1_ParamLimits

0x92f3,	// (0x0003714d) list_double_pane_vc_t1

0x9305,	// (0x0003715f) list_double_pane_vc_t2_ParamLimits

0x9305,	// (0x0003715f) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0003d8cc) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0003d8cc) list_double_pane_vc_t

0x9e2e,	// (0x00037c88) list_double_number_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_double_number_pane_vc_g1

0x9e3a,	// (0x00037c94) list_double_number_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_double_number_pane_vc_g

0x931d,	// (0x00037177) list_double_number_pane_vc_t1_ParamLimits

0x931d,	// (0x00037177) list_double_number_pane_vc_t1

0x9331,	// (0x0003718b) list_double_number_pane_vc_t2_ParamLimits

0x9331,	// (0x0003718b) list_double_number_pane_vc_t2

0x9305,	// (0x0003715f) list_double_number_pane_vc_t3_ParamLimits

0x9305,	// (0x0003715f) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0003d8d1) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0003d8d1) list_double_number_pane_vc_t

0xadb2,	// (0x00038c0c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xadb2,	// (0x00038c0c) list_double_large_graphic_pane_vc_g1

0xadbe,	// (0x00038c18) list_double_large_graphic_pane_vc_g2_ParamLimits

0xadbe,	// (0x00038c18) list_double_large_graphic_pane_vc_g2

0x9e3a,	// (0x00037c94) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9e3a,	// (0x00037c94) list_double_large_graphic_pane_vc_g3

0x9343,	// (0x0003719d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9343,	// (0x0003719d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0003d8d8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003d8d8) list_double_large_graphic_pane_vc_g

0x934f,	// (0x000371a9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x934f,	// (0x000371a9) list_double_large_graphic_pane_vc_t1

0x9361,	// (0x000371bb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9361,	// (0x000371bb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0003d8e1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0003d8e1) list_double_large_graphic_pane_vc_t

0x9e2e,	// (0x00037c88) list_double_heading_pane_vc_g1_ParamLimits

0x9e2e,	// (0x00037c88) list_double_heading_pane_vc_g1

0x9e3a,	// (0x00037c94) list_double_heading_pane_vc_g2_ParamLimits

0x9e3a,	// (0x00037c94) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d656) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d656) list_double_heading_pane_vc_g

0x937a,	// (0x000371d4) list_double_heading_pane_vc_t1_ParamLimits

0x937a,	// (0x000371d4) list_double_heading_pane_vc_t1

0x90d7,	// (0x00036f31) list_double_heading_pane_vc_t2_ParamLimits

0x90d7,	// (0x00036f31) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0003d8e6) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003d8e6) list_double_heading_pane_vc_t

0x90b5,	// (0x00036f0f) list_double_graphic_pane_vc_g1_ParamLimits

0x90b5,	// (0x00036f0f) list_double_graphic_pane_vc_g1

0xadcd,	// (0x00038c27) list_double_graphic_pane_vc_g2_ParamLimits

0xadcd,	// (0x00038c27) list_double_graphic_pane_vc_g2

0xaddc,	// (0x00038c36) list_double_graphic_pane_vc_g3_ParamLimits

0xaddc,	// (0x00038c36) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0003d8eb) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0003d8eb) list_double_graphic_pane_vc_g

0x938e,	// (0x000371e8) list_double_graphic_pane_vc_t1_ParamLimits

0x938e,	// (0x000371e8) list_double_graphic_pane_vc_t1

0x9305,	// (0x0003715f) list_double_graphic_pane_vc_t2_ParamLimits

0x9305,	// (0x0003715f) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0003d8f2) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0003d8f2) list_double_graphic_pane_vc_t

0x973a,	// (0x00037594) aid_size_cell_fastswap

0x9742,	// (0x0003759c) aid_size_cell_touch_ParamLimits

0x9742,	// (0x0003759c) aid_size_cell_touch

0x999d,	// (0x000377f7) popup_fast_swap_wide_window_ParamLimits

0x999d,	// (0x000377f7) popup_fast_swap_wide_window

0x9a93,	// (0x000378ed) touch_pane_ParamLimits

0x9a93,	// (0x000378ed) touch_pane

0x4a01,	// (0x0003285b) button_value_adjust_pane_cp2

0x8d6c,	// (0x00036bc6) button_value_adjust_pane_cp4

0x8d8c,	// (0x00036be6) form_field_data_pane_cp2

0x8dab,	// (0x00036c05) form_field_data_wide_pane_cp2

0x4d64,	// (0x00032bbe) bg_scroll_pane_ParamLimits

0xa19d,	// (0x00037ff7) scroll_handle_pane_ParamLimits

0xa1b1,	// (0x0003800b) scroll_sc2_down_pane_ParamLimits

0xa1b1,	// (0x0003800b) scroll_sc2_down_pane

0x4d95,	// (0x00032bef) scroll_sc2_up_pane_ParamLimits

0x4d95,	// (0x00032bef) scroll_sc2_up_pane

0xc7c7,	// (0x0003a621) grid_wheel_folder_pane_g1_ParamLimits

0xc7c7,	// (0x0003a621) grid_wheel_folder_pane_g1

0xa443,	// (0x0003829d) clock_nsta_pane_cp2_ParamLimits

0xa443,	// (0x0003829d) clock_nsta_pane_cp2

0xa4c9,	// (0x00038323) listscroll_midp_pane_ParamLimits

0xa4d5,	// (0x0003832f) midp_canvas_pane

0x565e,	// (0x000334b8) nsta_clock_indic_pane

0x5696,	// (0x000334f0) listscroll_form_pane_vc

0x569e,	// (0x000334f8) listscroll_set_pane_vc_ParamLimits

0x569e,	// (0x000334f8) listscroll_set_pane_vc

0xbf19,	// (0x00039d73) clock_nsta_pane

0xbf26,	// (0x00039d80) indicator_nsta_pane

0x58d4,	// (0x0003372e) bg_popup_sub_pane_cp2_ParamLimits

0x58e8,	// (0x00033742) find_pane_cp2_ParamLimits

0x58e8,	// (0x00033742) find_pane_cp2

0x590c,	// (0x00033766) grid_toobar_pane_ParamLimits

0x5a68,	// (0x000338c2) list_form_gen_pane_vc_ParamLimits

0x5a68,	// (0x000338c2) list_form_gen_pane_vc

0x5a7e,	// (0x000338d8) scroll_pane_cp8_vc_ParamLimits

0x5a7e,	// (0x000338d8) scroll_pane_cp8_vc

0x5ace,	// (0x00033928) data_form_wide_pane_vc_ParamLimits

0x5ace,	// (0x00033928) data_form_wide_pane_vc

0x5ada,	// (0x00033934) form_field_data_wide_pane_vc_g1

0x5ae2,	// (0x0003393c) form_field_data_wide_pane_vc_t1_ParamLimits

0x5ae2,	// (0x0003393c) form_field_data_wide_pane_vc_t1

0x4a15,	// (0x0003286f) input_focus_pane_cp6_vc_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_cp6_vc

0xc287,	// (0x0003a0e1) list_midp_pane_ParamLimits

0xc293,	// (0x0003a0ed) scroll_pane_cp16_ParamLimits

0xc293,	// (0x0003a0ed) scroll_pane_cp16

0x5d51,	// (0x00033bab) button_value_adjust_pane_ParamLimits

0x5d51,	// (0x00033bab) button_value_adjust_pane

0xc473,	// (0x0003a2cd) button_value_adjust_pane_cp6_ParamLimits

0xc473,	// (0x0003a2cd) button_value_adjust_pane_cp6

0xc595,	// (0x0003a3ef) settings_code_pane_cp_ParamLimits

0xc595,	// (0x0003a3ef) settings_code_pane_cp

0x4127,	// (0x00031f81) cell_touch_pane_g1

0x4127,	// (0x00031f81) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0003d57e) cell_touch_pane_g

0xc691,	// (0x0003a4eb) cell_touch_pane_cp_ParamLimits

0xc691,	// (0x0003a4eb) cell_touch_pane_cp

0xc6a1,	// (0x0003a4fb) cell_touch_pane_ParamLimits

0xc6a1,	// (0x0003a4fb) cell_touch_pane

0x4127,	// (0x00031f81) scroll_sc2_down_pane_g1

0x4127,	// (0x00031f81) scroll_sc2_up_pane_g1

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp4_vc

0x6f6e,	// (0x00034dc8) list_set_graphic_pane_vc_g1_ParamLimits

0x6f6e,	// (0x00034dc8) list_set_graphic_pane_vc_g1

0x6f7a,	// (0x00034dd4) list_set_graphic_pane_vc_g2_ParamLimits

0x6f7a,	// (0x00034dd4) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0003d868) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0003d868) list_set_graphic_pane_vc_g

0x6f86,	// (0x00034de0) text_primary_small_cp13_vc_ParamLimits

0x6f86,	// (0x00034de0) text_primary_small_cp13_vc

0x6f9e,	// (0x00034df8) list_set_graphic_pane_vc_ParamLimits

0x6f9e,	// (0x00034df8) list_set_graphic_pane_vc

0x4131,	// (0x00031f8b) input_focus_pane_cp2_vc

0x4127,	// (0x00031f81) setting_code_pane_vc_g1

0x6fb2,	// (0x00034e0c) setting_code_pane_vc_t1

0x6fc0,	// (0x00034e1a) set_text_pane_vc_t1_ParamLimits

0x6fc0,	// (0x00034e1a) set_text_pane_vc_t1

0x4131,	// (0x00031f8b) input_focus_pane_cp1_vc

0x6fdf,	// (0x00034e39) list_set_text_pane_vc

0x4127,	// (0x00031f81) setting_text_pane_vc_g1

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp2_vc

0x6fe9,	// (0x00034e43) setting_slider_graphic_pane_vc_g1

0x6ff1,	// (0x00034e4b) setting_slider_graphic_pane_vc_t1

0x6fff,	// (0x00034e59) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0003d86d) setting_slider_graphic_pane_vc_t

0x700d,	// (0x00034e67) slider_set_pane_cp_vc

0x7015,	// (0x00034e6f) slider_set_pane_vc_g1

0x701e,	// (0x00034e78) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0003d872) slider_set_pane_vc_g

0x4a7c,	// (0x000328d6) set_opt_bg_pane_g1_copy1

0x4a84,	// (0x000328de) set_opt_bg_pane_g2_copy1

0x704a,	// (0x00034ea4) set_opt_bg_pane_g3_copy1

0x4a94,	// (0x000328ee) set_opt_bg_pane_g4_copy1

0x4a9c,	// (0x000328f6) set_opt_bg_pane_g5_copy1

0x4aa4,	// (0x000328fe) set_opt_bg_pane_g6_copy1

0x7052,	// (0x00034eac) set_opt_bg_pane_g7_copy1

0x705c,	// (0x00034eb6) set_opt_bg_pane_g8_copy1

0x7064,	// (0x00034ebe) set_opt_bg_pane_g9_copy1

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp_vc

0x706c,	// (0x00034ec6) setting_slider_pane_vc_t1

0x6ff1,	// (0x00034e4b) setting_slider_pane_vc_t2

0x6fff,	// (0x00034e59) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0003d881) setting_slider_pane_vc_t

0x700d,	// (0x00034e67) slider_set_pane_vc

0xa98c,	// (0x000387e6) volume_set_pane_vc_g1

0xad3d,	// (0x00038b97) volume_set_pane_vc_g2

0xad46,	// (0x00038ba0) volume_set_pane_vc_g3

0xad4f,	// (0x00038ba9) volume_set_pane_vc_g4

0xad58,	// (0x00038bb2) volume_set_pane_vc_g5

0xad61,	// (0x00038bbb) volume_set_pane_vc_g6

0xad6a,	// (0x00038bc4) volume_set_pane_vc_g7

0xad73,	// (0x00038bcd) volume_set_pane_vc_g8

0xad7c,	// (0x00038bd6) volume_set_pane_vc_g9

0xad85,	// (0x00038bdf) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0003d888) volume_set_pane_vc_g

0x707b,	// (0x00034ed5) volume_set_pane_vc

0x7083,	// (0x00034edd) button_value_adjust_pane_cp1_vc

0x708d,	// (0x00034ee7) list_highlight_pane_cp2_vc

0x7096,	// (0x00034ef0) list_set_pane_vc_ParamLimits

0x7096,	// (0x00034ef0) list_set_pane_vc

0x70e8,	// (0x00034f42) main_pane_set_vc_t1_ParamLimits

0x70e8,	// (0x00034f42) main_pane_set_vc_t1

0x70fd,	// (0x00034f57) main_pane_set_vc_t2_ParamLimits

0x70fd,	// (0x00034f57) main_pane_set_vc_t2

0x710f,	// (0x00034f69) main_pane_set_vc_t3_ParamLimits

0x710f,	// (0x00034f69) main_pane_set_vc_t3

0x7121,	// (0x00034f7b) main_pane_set_vc_t4_ParamLimits

0x7121,	// (0x00034f7b) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0003d89d) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0003d89d) main_pane_set_vc_t

0x7133,	// (0x00034f8d) setting_code_pane_vc_ParamLimits

0x7133,	// (0x00034f8d) setting_code_pane_vc

0x7142,	// (0x00034f9c) setting_slider_graphic_pane_vc

0x7142,	// (0x00034f9c) setting_slider_pane_vc

0x7142,	// (0x00034f9c) setting_text_pane_vc

0x7142,	// (0x00034f9c) setting_volume_pane_vc

0x714a,	// (0x00034fa4) scroll_pane_cp121_vc

0x49ef,	// (0x00032849) set_content_pane_vc

0x7188,	// (0x00034fe2) button_value_adjust_pane_g1

0x7191,	// (0x00034feb) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0003d8f7) button_value_adjust_pane_g

0x719a,	// (0x00034ff4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x719a,	// (0x00034ff4) form_field_slider_wide_pane_vc_t1

0x71ae,	// (0x00035008) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71ae,	// (0x00035008) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0003d8fc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0003d8fc) form_field_slider_wide_pane_vc_t

0x417f,	// (0x00031fd9) input_focus_pane_cp10_vc_ParamLimits

0x417f,	// (0x00031fd9) input_focus_pane_cp10_vc

0x71c0,	// (0x0003501a) slider_cont_pane_cp1_vc_ParamLimits

0x71c0,	// (0x0003501a) slider_cont_pane_cp1_vc

0x7015,	// (0x00034e6f) slider_form_pane_g1_cp2

0x701e,	// (0x00034e78) slider_form_pane_g2_cp2

0x71d9,	// (0x00035033) form_field_slider_pane_vc_t3

0x71e7,	// (0x00035041) form_field_slider_pane_vc_t4

0x71f5,	// (0x0003504f) slider_form_pane_vc_ParamLimits

0x71f5,	// (0x0003504f) slider_form_pane_vc

0x7202,	// (0x0003505c) form_field_slider_pane_vc_t1_ParamLimits

0x7202,	// (0x0003505c) form_field_slider_pane_vc_t1

0x71ae,	// (0x00035008) form_field_slider_pane_vc_t2_ParamLimits

0x71ae,	// (0x00035008) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0003d90c) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0003d90c) form_field_slider_pane_vc_t

0x417f,	// (0x00031fd9) input_focus_pane_cp9_vc_ParamLimits

0x417f,	// (0x00031fd9) input_focus_pane_cp9_vc

0x721e,	// (0x00035078) slider_cont_pane_vc_ParamLimits

0x721e,	// (0x00035078) slider_cont_pane_vc

0x7230,	// (0x0003508a) list_form_graphic_pane_cp_vc_ParamLimits

0x7230,	// (0x0003508a) list_form_graphic_pane_cp_vc

0x5ada,	// (0x00033934) form_field_popup_wide_pane_vc_g1

0x7245,	// (0x0003509f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7245,	// (0x0003509f) form_field_popup_wide_pane_vc_t1

0x4a15,	// (0x0003286f) input_focus_pane_cp8_vc_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_cp8_vc

0x725c,	// (0x000350b6) list_form_wide_pane_vc_ParamLimits

0x725c,	// (0x000350b6) list_form_wide_pane_vc

0x7268,	// (0x000350c2) list_form_graphic_pane_vc_g1

0x7270,	// (0x000350ca) list_form_graphic_pane_vc_t1_ParamLimits

0x7270,	// (0x000350ca) list_form_graphic_pane_vc_t1

0x418d,	// (0x00031fe7) list_highlight_pane_cp5_vc_ParamLimits

0x418d,	// (0x00031fe7) list_highlight_pane_cp5_vc

0x728c,	// (0x000350e6) list_form_graphic_pane_vc_ParamLimits

0x728c,	// (0x000350e6) list_form_graphic_pane_vc

0x5ada,	// (0x00033934) form_field_popup_pane_vc_g1

0x72a2,	// (0x000350fc) form_field_popup_pane_vc_t1_ParamLimits

0x72a2,	// (0x000350fc) form_field_popup_pane_vc_t1

0x4a15,	// (0x0003286f) input_focus_pane_cp7_vc_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_cp7_vc

0x72b9,	// (0x00035113) list_form_pane_vc_ParamLimits

0x72b9,	// (0x00035113) list_form_pane_vc

0x72c5,	// (0x0003511f) data_form_pane_vc_t1_ParamLimits

0x72c5,	// (0x0003511f) data_form_pane_vc_t1

0x4a7c,	// (0x000328d6) input_focus_pane_vc_g1

0x4a84,	// (0x000328de) input_focus_pane_vc_g2

0x4a8c,	// (0x000328e6) input_focus_pane_vc_g3

0x4a94,	// (0x000328ee) input_focus_pane_vc_g4

0x4a9c,	// (0x000328f6) input_focus_pane_vc_g5

0x4aa4,	// (0x000328fe) input_focus_pane_vc_g6

0x4aac,	// (0x00032906) input_focus_pane_vc_g7

0x4ab4,	// (0x0003290e) input_focus_pane_vc_g8

0x4abc,	// (0x00032916) input_focus_pane_vc_g9

0x4127,	// (0x00031f81) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0003d507) input_focus_pane_vc_g

0x5ace,	// (0x00033928) data_form_pane_vc_ParamLimits

0x5ace,	// (0x00033928) data_form_pane_vc

0x5ada,	// (0x00033934) form_field_data_pane_vc_g1

0x72e0,	// (0x0003513a) form_field_data_pane_vc_t1_ParamLimits

0x72e0,	// (0x0003513a) form_field_data_pane_vc_t1

0x4a15,	// (0x0003286f) input_focus_pane_vc_ParamLimits

0x4a15,	// (0x0003286f) input_focus_pane_vc

0x72fa,	// (0x00035154) button_value_adjust_pane_cp3_vc

0x7302,	// (0x0003515c) button_value_adjust_pane_cp5_vc

0x730a,	// (0x00035164) form_field_data_pane_vc_ParamLimits

0x730a,	// (0x00035164) form_field_data_pane_vc

0x7321,	// (0x0003517b) form_field_data_pane_vc_cp2

0x7329,	// (0x00035183) form_field_data_wide_pane_vc_ParamLimits

0x7329,	// (0x00035183) form_field_data_wide_pane_vc

0x733f,	// (0x00035199) form_field_data_wide_pane_vc_cp2

0x7347,	// (0x000351a1) form_field_popup_pane_vc_ParamLimits

0x7347,	// (0x000351a1) form_field_popup_pane_vc

0x735e,	// (0x000351b8) form_field_popup_wide_pane_vc_ParamLimits

0x735e,	// (0x000351b8) form_field_popup_wide_pane_vc

0x7374,	// (0x000351ce) form_field_slider_pane_vc_ParamLimits

0x7374,	// (0x000351ce) form_field_slider_pane_vc

0x7387,	// (0x000351e1) form_field_slider_wide_pane_vc_ParamLimits

0x7387,	// (0x000351e1) form_field_slider_wide_pane_vc

0xc6b3,	// (0x0003a50d) grid_touch_1_pane_ParamLimits

0xc6b3,	// (0x0003a50d) grid_touch_1_pane

0xc6bf,	// (0x0003a519) grid_touch_2_pane_ParamLimits

0xc6bf,	// (0x0003a519) grid_touch_2_pane

0x5650,	// (0x000334aa) touch_pane_g1_ParamLimits

0x5650,	// (0x000334aa) touch_pane_g1

0x73a8,	// (0x00035202) cell_app_pane_cp_wide_ParamLimits

0x73a8,	// (0x00035202) cell_app_pane_cp_wide

0x73b9,	// (0x00035213) grid_popup_fast_wide_pane_ParamLimits

0x73b9,	// (0x00035213) grid_popup_fast_wide_pane

0x73cd,	// (0x00035227) scroll_pane_cp19_ParamLimits

0x73cd,	// (0x00035227) scroll_pane_cp19

0x4131,	// (0x00031f8b) bg_popup_window_pane_cp20

0x73e1,	// (0x0003523b) listscroll_popup_fast_wide_pane

0x418d,	// (0x00031fe7) grid_indicator_nsta_pane

0x73e9,	// (0x00035243) clock_nsta_pane_g1

0x73f2,	// (0x0003524c) clock_nsta_pane_t1

0xc6d7,	// (0x0003a531) cell_indicator_nsta_pane_ParamLimits

0xc6d7,	// (0x0003a531) cell_indicator_nsta_pane

0x739a,	// (0x000351f4) cell_indicator_nsta_pane_g1

0xc70f,	// (0x0003a569) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0003d916) cell_indicator_nsta_pane_g

0x740e,	// (0x00035268) clock_nsta_pane_cp

0x7416,	// (0x00035270) indicator_nsta_pane_cp

0x741f,	// (0x00035279) nsta_clock_indic_pane_g1

0x41c9,	// (0x00032023) grid_indicator_pane

0x4e87,	// (0x00032ce1) scroll_pane_cp29

0xa392,	// (0x000381ec) indicator_nsta_pane_cp2_ParamLimits

0xa392,	// (0x000381ec) indicator_nsta_pane_cp2

0x418d,	// (0x00031fe7) main_apps_wheel_pane

0x5bf6,	// (0x00033a50) form_midp_field_text_pane_ParamLimits

0x5d23,	// (0x00033b7d) scroll_bar_cp050_ParamLimits

0x7488,	// (0x000352e2) cell_indicator_pane_ParamLimits

0x7488,	// (0x000352e2) cell_indicator_pane

0x74a5,	// (0x000352ff) cell_indicator_pane_g1

0xc725,	// (0x0003a57f) grid_wheel_folder_pane_ParamLimits

0xc725,	// (0x0003a57f) grid_wheel_folder_pane

0xc73b,	// (0x0003a595) list_wheel_apps_pane_ParamLimits

0xc73b,	// (0x0003a595) list_wheel_apps_pane

0xc74c,	// (0x0003a5a6) main_apps_wheel_pane_g1_ParamLimits

0xc74c,	// (0x0003a5a6) main_apps_wheel_pane_g1

0xc760,	// (0x0003a5ba) main_apps_wheel_pane_g2_ParamLimits

0xc760,	// (0x0003a5ba) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0003d932) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0003d932) main_apps_wheel_pane_g

0xc778,	// (0x0003a5d2) main_apps_wheel_pane_t1_ParamLimits

0xc778,	// (0x0003a5d2) main_apps_wheel_pane_t1

0xc79b,	// (0x0003a5f5) list_wheel_apps_pane_g1

0xc7a3,	// (0x0003a5fd) list_wheel_apps_pane_g2

0xc7ab,	// (0x0003a605) list_wheel_apps_pane_g3

0xc7b3,	// (0x0003a60d) list_wheel_apps_pane_g4

0xc7bd,	// (0x0003a617) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0003d937) list_wheel_apps_pane_g

0x52da,	// (0x00033134) navi_icon_text_pane

0xbe5d,	// (0x00039cb7) aid_fill_nsta

0xc7e0,	// (0x0003a63a) navi_icon_text_pane_g1

0xc7ef,	// (0x0003a649) navi_icon_text_pane_t1

0x5176,	// (0x00032fd0) list_set_graphic_pane_t1_ParamLimits

0x5176,	// (0x00032fd0) list_set_graphic_pane_t1

0x642b,	// (0x00034285) popup_midp_note_alarm_window_t6_ParamLimits

0x642b,	// (0x00034285) popup_midp_note_alarm_window_t6

0x643d,	// (0x00034297) popup_midp_note_alarm_window_t7_ParamLimits

0x643d,	// (0x00034297) popup_midp_note_alarm_window_t7

0x644f,	// (0x000342a9) popup_midp_note_alarm_window_t8_ParamLimits

0x644f,	// (0x000342a9) popup_midp_note_alarm_window_t8

0x6461,	// (0x000342bb) popup_midp_note_alarm_window_t9_ParamLimits

0x6461,	// (0x000342bb) popup_midp_note_alarm_window_t9

0x6473,	// (0x000342cd) popup_midp_note_alarm_window_t10_ParamLimits

0x6473,	// (0x000342cd) popup_midp_note_alarm_window_t10

0x6485,	// (0x000342df) popup_midp_note_alarm_window_t11_ParamLimits

0x6485,	// (0x000342df) popup_midp_note_alarm_window_t11

0x6497,	// (0x000342f1) scroll_pane_cp17_ParamLimits

0x6497,	// (0x000342f1) scroll_pane_cp17

0xa98c,	// (0x000387e6) volume_small_pane_cp_g1

0xade8,	// (0x00038c42) volume_small_pane_cp_g2

0xadf1,	// (0x00038c4b) volume_small_pane_cp_g3

0xadfa,	// (0x00038c54) volume_small_pane_cp_g4

0xae03,	// (0x00038c5d) volume_small_pane_cp_g5

0xae0c,	// (0x00038c66) volume_small_pane_cp_g6

0xae15,	// (0x00038c6f) volume_small_pane_cp_g7

0xae1e,	// (0x00038c78) volume_small_pane_cp_g8

0xae27,	// (0x00038c81) volume_small_pane_cp_g9

0xae30,	// (0x00038c8a) volume_small_pane_cp_g10

0x5486,	// (0x000332e0) midp_ticker_pane_g1_ParamLimits

0x5492,	// (0x000332ec) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003d5cf) midp_ticker_pane_g_ParamLimits

0xa57e,	// (0x000383d8) midp_ticker_pane_t1_ParamLimits

0xbe73,	// (0x00039ccd) aid_fill_nsta_2

0x5d0f,	// (0x00033b69) list_form2_midp_pane

0x6b36,	// (0x00034990) midp_editing_number_pane_ParamLimits

0x6b45,	// (0x0003499f) midp_ticker_pane_ParamLimits

0x74af,	// (0x00035309) form2_midp_field_pane

0x74b7,	// (0x00035311) scroll_pane_cp51

0x74d7,	// (0x00035331) form2_midp_button_pane_ParamLimits

0x74d7,	// (0x00035331) form2_midp_button_pane

0x74e9,	// (0x00035343) form2_midp_content_pane_ParamLimits

0x74e9,	// (0x00035343) form2_midp_content_pane

0x7503,	// (0x0003535d) form2_midp_field_choice_group_pane

0x750b,	// (0x00035365) form2_midp_field_pane_g1

0x7513,	// (0x0003536d) form2_midp_field_pane_g2

0x751b,	// (0x00035375) form2_midp_field_pane_g3

0x7523,	// (0x0003537d) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0003d95c) form2_midp_field_pane_g

0x752b,	// (0x00035385) form2_midp_gauge_slider_pane

0x7533,	// (0x0003538d) form2_midp_gauge_wait_pane

0x753b,	// (0x00035395) form2_midp_image_pane_ParamLimits

0x753b,	// (0x00035395) form2_midp_image_pane

0x7556,	// (0x000353b0) form2_midp_label_pane_ParamLimits

0x7556,	// (0x000353b0) form2_midp_label_pane

0xc820,	// (0x0003a67a) form2_midp_label_pane_cp_ParamLimits

0xc820,	// (0x0003a67a) form2_midp_label_pane_cp

0x756f,	// (0x000353c9) form2_midp_string_pane_ParamLimits

0x756f,	// (0x000353c9) form2_midp_string_pane

0x93a0,	// (0x000371fa) form2_midp_text_pane_ParamLimits

0x93a0,	// (0x000371fa) form2_midp_text_pane

0x7581,	// (0x000353db) form2_midp_time_pane

0x7591,	// (0x000353eb) input_focus_pane_cp51_ParamLimits

0x7591,	// (0x000353eb) input_focus_pane_cp51

0x75a9,	// (0x00035403) form2_midp_label_pane_t1_ParamLimits

0x75a9,	// (0x00035403) form2_midp_label_pane_t1

0x93bb,	// (0x00037215) form2_mdip_text_pane_t1_ParamLimits

0x93bb,	// (0x00037215) form2_mdip_text_pane_t1

0x93d7,	// (0x00037231) form2_midp_time_pane_t1

0x75f1,	// (0x0003544b) form2_midp_gauge_slider_pane_t1

0xc841,	// (0x0003a69b) form2_midp_gauge_slider_pane_t2

0xc853,	// (0x0003a6ad) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0003d965) form2_midp_gauge_slider_pane_t

0x7603,	// (0x0003545d) form2_midp_slider_pane

0x760f,	// (0x00035469) form2_midp_gauge_wait_pane_t1

0x761d,	// (0x00035477) form2_midp_wait_pane_ParamLimits

0x761d,	// (0x00035477) form2_midp_wait_pane

0xc865,	// (0x0003a6bf) list_single_2graphic_pane_cp4_ParamLimits

0xc865,	// (0x0003a6bf) list_single_2graphic_pane_cp4

0xc1c2,	// (0x0003a01c) list_single_midp_graphic_pane_cp_ParamLimits

0xc1c2,	// (0x0003a01c) list_single_midp_graphic_pane_cp

0x4131,	// (0x00031f8b) list_highlight_pane_cp20

0x7648,	// (0x000354a2) list_single_2graphic_pane_g1_cp4

0x6e73,	// (0x00034ccd) list_single_2graphic_pane_g2_cp4

0x7650,	// (0x000354aa) list_single_2graphic_pane_t1_cp4

0x418d,	// (0x00031fe7) list_highlight_pane_cp21

0x765f,	// (0x000354b9) list_single_midp_graphic_pane_g4_cp

0x766e,	// (0x000354c8) list_single_midp_graphic_pane_t1_cp

0xc894,	// (0x0003a6ee) form2_mdip_string_pane_t1_ParamLimits

0xc894,	// (0x0003a6ee) form2_mdip_string_pane_t1

0x4131,	// (0x00031f8b) bg_wml_button_pane_cp2

0x4127,	// (0x00031f81) form2_midp_image_pane_g1

0x9e99,	// (0x00037cf3) list_double_large_graphic_pane_g5_ParamLimits

0x9e99,	// (0x00037cf3) list_double_large_graphic_pane_g5

0xa4c9,	// (0x00038323) midp_form_pane_ParamLimits

0x418d,	// (0x00031fe7) main_apps_wheel_pane_ParamLimits

0xbccb,	// (0x00039b25) popup_preview_window_ParamLimits

0xbccb,	// (0x00039b25) popup_preview_window

0x5775,	// (0x000335cf) popup_touch_info_window_ParamLimits

0x5775,	// (0x000335cf) popup_touch_info_window

0x5793,	// (0x000335ed) popup_touch_menu_window_ParamLimits

0x5793,	// (0x000335ed) popup_touch_menu_window

0x411d,	// (0x00031f77) bg_popup_sub_pane_cp6

0x7683,	// (0x000354dd) list_touch_menu_pane

0x768b,	// (0x000354e5) list_single_touch_menu_pane_ParamLimits

0x768b,	// (0x000354e5) list_single_touch_menu_pane

0x76a0,	// (0x000354fa) list_single_touch_menu_pane_t1

0x418d,	// (0x00031fe7) bg_popup_sub_pane_cp7_ParamLimits

0x418d,	// (0x00031fe7) bg_popup_sub_pane_cp7

0x76ae,	// (0x00035508) heading_sub_pane

0x76b6,	// (0x00035510) list_touch_info_pane_ParamLimits

0x76b6,	// (0x00035510) list_touch_info_pane

0x76c5,	// (0x0003551f) list_single_touch_info_pane_ParamLimits

0x76c5,	// (0x0003551f) list_single_touch_info_pane

0x76d7,	// (0x00035531) list_single_touch_info_pane_t1

0x76e5,	// (0x0003553f) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0003d973) list_single_touch_info_pane_t

0x545c,	// (0x000332b6) bg_popup_heading_pane_cp

0x76f3,	// (0x0003554d) heading_sub_pane_t1

0x5a94,	// (0x000338ee) bg_popup_preview_window_pane_cp_ParamLimits

0x5a94,	// (0x000338ee) bg_popup_preview_window_pane_cp

0x76ae,	// (0x00035508) heading_preview_pane

0x76b6,	// (0x00035510) list_preview_pane_ParamLimits

0x76b6,	// (0x00035510) list_preview_pane

0x7701,	// (0x0003555b) popup_preview_window_g1

0x76c5,	// (0x0003551f) list_single_preview_pane_ParamLimits

0x76c5,	// (0x0003551f) list_single_preview_pane

0x7709,	// (0x00035563) list_single_preview_pane_g1

0x7711,	// (0x0003556b) list_single_preview_pane_t1

0x76d7,	// (0x00035531) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0003d978) list_single_preview_pane_t

0x771f,	// (0x00035579) bg_popup_heading_pane_cp2_ParamLimits

0x771f,	// (0x00035579) bg_popup_heading_pane_cp2

0x7735,	// (0x0003558f) heading_preview_pane_g1

0x773d,	// (0x00035597) heading_preview_pane_t1_ParamLimits

0x773d,	// (0x00035597) heading_preview_pane_t1

0x41e0,	// (0x0003203a) soft_indicator_pane_t1_ParamLimits

0x4988,	// (0x000327e2) scroll_pane_ParamLimits

0x4d8c,	// (0x00032be6) scroll_sc2_left_pane

0x4d83,	// (0x00032bdd) scroll_sc2_right_pane

0x4dab,	// (0x00032c05) scroll_bg_pane_g1_ParamLimits

0x4dc0,	// (0x00032c1a) scroll_bg_pane_g2_ParamLimits

0x4dd8,	// (0x00032c32) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0003d55e) scroll_bg_pane_g_ParamLimits

0x4dab,	// (0x00032c05) scroll_handle_pane_g1_ParamLimits

0x4dfa,	// (0x00032c54) scroll_handle_pane_g2_ParamLimits

0x4dd8,	// (0x00032c32) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0003d565) scroll_handle_pane_g_ParamLimits

0x56be,	// (0x00033518) popup_choice_list_window_ParamLimits

0x56be,	// (0x00033518) popup_choice_list_window

0x58e0,	// (0x0003373a) choice_list_pane

0x5970,	// (0x000337ca) cell_toolbar_pane_t1

0x5998,	// (0x000337f2) toolbar_button_pane_ParamLimits

0x6893,	// (0x000346ed) ai_gene_pane_1_t2_ParamLimits

0x6893,	// (0x000346ed) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0003d782) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0003d782) ai_gene_pane_1_t

0x775a,	// (0x000355b4) scroll_sc2_left_pane_g1

0x775a,	// (0x000355b4) scroll_sc2_right_pane_g1

0x4b6c,	// (0x000329c6) bg_popup_sub_pane_cp10

0x7764,	// (0x000355be) list_choice_list_pane

0x777b,	// (0x000355d5) list_single_choice_list_pane_ParamLimits

0x777b,	// (0x000355d5) list_single_choice_list_pane

0x778f,	// (0x000355e9) list_single_choice_list_pane_g1

0x7797,	// (0x000355f1) list_single_choice_list_pane_t1_ParamLimits

0x7797,	// (0x000355f1) list_single_choice_list_pane_t1

0x77ac,	// (0x00035606) choice_list_pane_g1

0x77b4,	// (0x0003560e) choice_list_pane_t1

0x411d,	// (0x00031f77) input_focus_pane_cp11

0x4ce1,	// (0x00032b3b) title_pane_stacon_g2_ParamLimits

0x4ce1,	// (0x00032b3b) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0003d544) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0003d544) title_pane_stacon_g

0x545c,	// (0x000332b6) cursor_press_pane

0xba70,	// (0x000398ca) popup_fep_hwr_window_ParamLimits

0xba70,	// (0x000398ca) popup_fep_hwr_window

0x5712,	// (0x0003356c) popup_fep_vkb_window_ParamLimits

0x5712,	// (0x0003356c) popup_fep_vkb_window

0x77c2,	// (0x0003561c) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0003d9a1) fep_vkb_side_pane_g_ParamLimits

0xae64,	// (0x00038cbe) fep_hwr_candidate_pane_ParamLimits

0xae64,	// (0x00038cbe) fep_hwr_candidate_pane

0xae8e,	// (0x00038ce8) fep_hwr_side_pane_ParamLimits

0xae8e,	// (0x00038ce8) fep_hwr_side_pane

0xaeae,	// (0x00038d08) fep_hwr_top_pane_ParamLimits

0xaeae,	// (0x00038d08) fep_hwr_top_pane

0xaec6,	// (0x00038d20) fep_hwr_write_pane_ParamLimits

0xaec6,	// (0x00038d20) fep_hwr_write_pane

0xfb47,	// (0x0003d9a1) fep_vkb_side_pane_g

0x77dc,	// (0x00035636) fep_hwr_top_pane_g1

0x77ca,	// (0x00035624) fep_hwr_top_pane_g2

0xaef2,	// (0x00038d4c) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0003d97d) fep_hwr_top_pane_g

0xaf07,	// (0x00038d61) fep_hwr_top_text_pane

0x4f4d,	// (0x00032da7) fep_hwr_top_text_pane_g1

0x7812,	// (0x0003566c) fep_hwr_top_text_pane_t1

0xaffd,	// (0x00038e57) fep_hwr_candidate_pane_g1

0x7a1f,	// (0x00035879) fep_vkb_keypad_pane_g3_ParamLimits

0x7a1f,	// (0x00035879) fep_vkb_keypad_pane_g3

0x7a47,	// (0x000358a1) fep_vkb_keypad_pane_g4_ParamLimits

0x7a47,	// (0x000358a1) fep_vkb_keypad_pane_g4

0x7ab6,	// (0x00035910) fep_vkb_bottom_pane_g2_ParamLimits

0x7ab6,	// (0x00035910) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0003d9a8) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0003d9a8) fep_vkb_bottom_pane_g

0x775a,	// (0x000355b4) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0003d9b2) cell_vkb_side_pane_g

0x7afa,	// (0x00035954) cell_vkb_side_pane_t1

0x7b08,	// (0x00035962) cell_vkb_side_pane_t1_copy1

0x775a,	// (0x000355b4) bg_fep_vkb_candidate_pane_g2

0x7be4,	// (0x00035a3e) cell_vkb_candidate_pane_ParamLimits

0x7820,	// (0x0003567a) aid_size_cell_vkb_ParamLimits

0x7820,	// (0x0003567a) aid_size_cell_vkb

0x7be4,	// (0x00035a3e) cell_vkb_candidate_pane

0xb017,	// (0x00038e71) bg_popup_fep_shadow_pane_g1

0x789c,	// (0x000356f6) fep_vkb_bottom_pane_ParamLimits

0x789c,	// (0x000356f6) fep_vkb_bottom_pane

0x78d9,	// (0x00035733) fep_vkb_candidate_pane_ParamLimits

0x78d9,	// (0x00035733) fep_vkb_candidate_pane

0x78f5,	// (0x0003574f) fep_vkb_keypad_pane_ParamLimits

0x78f5,	// (0x0003574f) fep_vkb_keypad_pane

0x793b,	// (0x00035795) fep_vkb_side_pane_ParamLimits

0x793b,	// (0x00035795) fep_vkb_side_pane

0x7977,	// (0x000357d1) fep_vkb_top_pane_ParamLimits

0x7977,	// (0x000357d1) fep_vkb_top_pane

0x79b3,	// (0x0003580d) fep_vkb_top_pane_g1_ParamLimits

0x79b3,	// (0x0003580d) fep_vkb_top_pane_g1

0x79c2,	// (0x0003581c) fep_vkb_top_pane_g2_ParamLimits

0x79c2,	// (0x0003581c) fep_vkb_top_pane_g2

0x79d1,	// (0x0003582b) fep_vkb_top_pane_g3_ParamLimits

0x79d1,	// (0x0003582b) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0003d998) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0003d998) fep_vkb_top_pane_g

0x79ef,	// (0x00035849) fep_vkb_top_text_pane_ParamLimits

0x79ef,	// (0x00035849) fep_vkb_top_text_pane

0xc9e0,	// (0x0003a83a) fep_vkb_side_pane_g1_ParamLimits

0xc9e0,	// (0x0003a83a) fep_vkb_side_pane_g1

0x7a0e,	// (0x00035868) grid_vkb_side_pane_ParamLimits

0x7a0e,	// (0x00035868) grid_vkb_side_pane

0xb01f,	// (0x00038e79) bg_popup_fep_shadow_pane_g2

0xb028,	// (0x00038e82) bg_popup_fep_shadow_pane_g3

0xb030,	// (0x00038e8a) bg_popup_fep_shadow_pane_g4

0xb039,	// (0x00038e93) bg_popup_fep_shadow_pane_g5

0xb043,	// (0x00038e9d) bg_popup_fep_shadow_pane_g6

0xb04b,	// (0x00038ea5) bg_popup_fep_shadow_pane_g7

0x4a9c,	// (0x000328f6) bg_popup_fep_shadow_pane_g8

0x7a65,	// (0x000358bf) grid_vkb_keypad_number_pane_ParamLimits

0x7a65,	// (0x000358bf) grid_vkb_keypad_number_pane

0x7a75,	// (0x000358cf) grid_vkb_keypad_pane_ParamLimits

0x7a75,	// (0x000358cf) grid_vkb_keypad_pane

0x7a9b,	// (0x000358f5) fep_vkb_bottom_pane_g1_ParamLimits

0x7a9b,	// (0x000358f5) fep_vkb_bottom_pane_g1

0x7ac4,	// (0x0003591e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7ac4,	// (0x0003591e) grid_vkb_keypad_bottom_left_pane

0x7ad9,	// (0x00035933) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ad9,	// (0x00035933) grid_vkb_keypad_bottom_right_pane

0x7aee,	// (0x00035948) fep_vkb_top_text_pane_g1

0xca2a,	// (0x0003a884) fep_vkb_top_text_pane_t1

0xca3f,	// (0x0003a899) cell_vkb_side_pane_ParamLimits

0xca3f,	// (0x0003a899) cell_vkb_side_pane

0x775a,	// (0x000355b4) cell_vkb_side_pane_g1

0x7b16,	// (0x00035970) cell_vkb_keypad_pane_ParamLimits

0x7b16,	// (0x00035970) cell_vkb_keypad_pane

0x7b91,	// (0x000359eb) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0003d9c5) bg_popup_fep_shadow_pane_g

0x775a,	// (0x000355b4) cell_hwr_side_pane_g1

0x775a,	// (0x000355b4) cell_hwr_side_pane_g2

0x7b9b,	// (0x000359f5) cell_vkb_keypad_pane_t1

0xca62,	// (0x0003a8bc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xca62,	// (0x0003a8bc) cell_vkb_keypad_bottom_left_pane

0xca7f,	// (0x0003a8d9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xca7f,	// (0x0003a8d9) cell_vkb_keypad_bottom_right_pane

0x775a,	// (0x000355b4) cell_vkb_keypad_bottom_left_pane_g1

0x775a,	// (0x000355b4) cell_vkb_keypad_bottom_right_pane_g1

0x7ba9,	// (0x00035a03) cell_vkb_keypad_number_pane_ParamLimits

0x7ba9,	// (0x00035a03) cell_vkb_keypad_number_pane

0x7bc8,	// (0x00035a22) cell_vkb_keypad_number_pane_g1

0x7bd2,	// (0x00035a2c) cell_vkb_keypad_number_pane_g2

0x7bdb,	// (0x00035a35) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0003d9b7) cell_vkb_keypad_number_pane_g

0x7b9b,	// (0x000359f5) cell_vkb_keypad_number_pane_t1

0x7c01,	// (0x00035a5b) fep_vkb_candidate_pane_g1

0x0001,

0xfb58,	// (0x0003d9b2) cell_hwr_side_pane_g

0x7c1a,	// (0x00035a74) cell_hwr_side_pane_t1

0xb05d,	// (0x00038eb7) cell_hwr_side_pane_t1_copy1

0x79e1,	// (0x0003583b) cell_hwr_candidate_pane_g1

0xb06b,	// (0x00038ec5) cell_hwr_candidate_pane_t1

0x775a,	// (0x000355b4) cell_vkb_candidate_pane_g2

0x7c5e,	// (0x00035ab8) cell_vkb_candidate_pane_t1

0x0e18,	// (0x0002ec72) bg_popup_fep_shadow_pane_ParamLimits

0x0e18,	// (0x0002ec72) bg_popup_fep_shadow_pane

0x109d,	// (0x0002eef7) bg_fep_hwr_top_pane_g4

0x77ee,	// (0x00035648) bg_hwr_side_pane_g1_ParamLimits

0x77ee,	// (0x00035648) bg_hwr_side_pane_g1

0xaf43,	// (0x00038d9d) cell_hwr_side_pane_ParamLimits

0xaf43,	// (0x00038d9d) cell_hwr_side_pane

0xaf7e,	// (0x00038dd8) fep_hwr_write_pane_g1_ParamLimits

0xaf7e,	// (0x00038dd8) fep_hwr_write_pane_g1

0xaf8b,	// (0x00038de5) fep_hwr_write_pane_g2_ParamLimits

0xaf8b,	// (0x00038de5) fep_hwr_write_pane_g2

0xaf98,	// (0x00038df2) fep_hwr_write_pane_g3_ParamLimits

0xaf98,	// (0x00038df2) fep_hwr_write_pane_g3

0xafa6,	// (0x00038e00) fep_hwr_write_pane_g4_ParamLimits

0xafa6,	// (0x00038e00) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0003d984) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0003d984) fep_hwr_write_pane_g

0x109d,	// (0x0002eef7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x109d,	// (0x0002eef7) bg_fep_hwr_candidate_pane_g2

0xafbb,	// (0x00038e15) cell_hwr_candidate_pane_ParamLimits

0xafbb,	// (0x00038e15) cell_hwr_candidate_pane

0xaffd,	// (0x00038e57) fep_hwr_candidate_pane_g1_ParamLimits

0x784e,	// (0x000356a8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x784e,	// (0x000356a8) bg_popup_fep_shadow_pane_cp2

0x79e1,	// (0x0003583b) fep_vkb_top_pane_g4_ParamLimits

0x79e1,	// (0x0003583b) fep_vkb_top_pane_g4

0x7a00,	// (0x0003585a) fep_vkb_side_pane_g2_ParamLimits

0x7a00,	// (0x0003585a) fep_vkb_side_pane_g2

0x8c99,	// (0x00036af3) list_setting_pane_t4_ParamLimits

0x8c99,	// (0x00036af3) list_setting_pane_t4

0x8d33,	// (0x00036b8d) list_setting_number_pane_t5_ParamLimits

0x8d33,	// (0x00036b8d) list_setting_number_pane_t5

0xa1e5,	// (0x0003803f) list_double_heading_pane_cp2_ParamLimits

0xa1e5,	// (0x0003803f) list_double_heading_pane_cp2

0x4a2f,	// (0x00032889) list_double_heading_pane_g1_cp2_ParamLimits

0x4a2f,	// (0x00032889) list_double_heading_pane_g1_cp2

0x4a3b,	// (0x00032895) list_double_heading_pane_g2_cp2_ParamLimits

0x4a3b,	// (0x00032895) list_double_heading_pane_g2_cp2

0x7c6c,	// (0x00035ac6) list_double_heading_pane_t1_cp2_ParamLimits

0x7c6c,	// (0x00035ac6) list_double_heading_pane_t1_cp2

0x7c82,	// (0x00035adc) list_double_heading_pane_t2_cp2_ParamLimits

0x7c82,	// (0x00035adc) list_double_heading_pane_t2_cp2

0x4115,	// (0x00031f6f) aid_value_unit2

0x99e9,	// (0x00037843) popup_preview_fixed_window

0x42c0,	// (0x0003211a) bg_popup_preview_window_pane_cp02

0x7c94,	// (0x00035aee) list_preview_fixed_pane

0x7cda,	// (0x00035b34) list_empty_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_empty_pane_fp

0x7cda,	// (0x00035b34) list_single_cale_day_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_cale_day_pane_fp

0x7cda,	// (0x00035b34) list_single_graphic_heading_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_graphic_heading_pane_fp

0x7cda,	// (0x00035b34) list_single_graphic_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_graphic_pane_fp

0x7cda,	// (0x00035b34) list_single_heading_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_heading_pane_fp

0x7cda,	// (0x00035b34) list_single_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_pane_fp

0x7cf1,	// (0x00035b4b) list_single_pane_fp_g1_ParamLimits

0x7cf1,	// (0x00035b4b) list_single_pane_fp_g1

0x9e81,	// (0x00037cdb) list_single_pane_fp_g2_ParamLimits

0x9e81,	// (0x00037cdb) list_single_pane_fp_g2

0x93ea,	// (0x00037244) list_single_pane_fp_g3_ParamLimits

0x93ea,	// (0x00037244) list_single_pane_fp_g3

0x7cfd,	// (0x00035b57) list_single_pane_fp_g4_ParamLimits

0x7cfd,	// (0x00035b57) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x0003d9e6) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003d9e6) list_single_pane_fp_g

0x93fe,	// (0x00037258) list_single_pane_fp_t1_ParamLimits

0x93fe,	// (0x00037258) list_single_pane_fp_t1

0x9415,	// (0x0003726f) list_single_graphic_pane_fp_g1_ParamLimits

0x9415,	// (0x0003726f) list_single_graphic_pane_fp_g1

0x7cf1,	// (0x00035b4b) list_single_graphic_pane_fp_g2_ParamLimits

0x7cf1,	// (0x00035b4b) list_single_graphic_pane_fp_g2

0x9e81,	// (0x00037cdb) list_single_graphic_pane_fp_g3_ParamLimits

0x9e81,	// (0x00037cdb) list_single_graphic_pane_fp_g3

0x93ea,	// (0x00037244) list_single_graphic_pane_fp_g4_ParamLimits

0x93ea,	// (0x00037244) list_single_graphic_pane_fp_g4

0x7cfd,	// (0x00035b57) list_single_graphic_pane_fp_g5_ParamLimits

0x7cfd,	// (0x00035b57) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d9ef) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d9ef) list_single_graphic_pane_fp_g

0x9421,	// (0x0003727b) list_single_graphic_pane_fp_t1_ParamLimits

0x9421,	// (0x0003727b) list_single_graphic_pane_fp_t1

0x9415,	// (0x0003726f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9415,	// (0x0003726f) list_single_graphic_heading_pane_fp_g1

0x7cf1,	// (0x00035b4b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cf1,	// (0x00035b4b) list_single_graphic_heading_pane_fp_g2

0x9e81,	// (0x00037cdb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9e81,	// (0x00037cdb) list_single_graphic_heading_pane_fp_g3

0x93ea,	// (0x00037244) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x93ea,	// (0x00037244) list_single_graphic_heading_pane_fp_g4

0x7cfd,	// (0x00035b57) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cfd,	// (0x00035b57) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d9ef) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d9ef) list_single_graphic_heading_pane_fp_g

0x9437,	// (0x00037291) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9437,	// (0x00037291) list_single_graphic_heading_pane_fp_t1

0x944d,	// (0x000372a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x944d,	// (0x000372a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0003d9fa) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0003d9fa) list_single_graphic_heading_pane_fp_t

0x945f,	// (0x000372b9) list_single_cale_day_pane_fp_g1_ParamLimits

0x945f,	// (0x000372b9) list_single_cale_day_pane_fp_g1

0x7d09,	// (0x00035b63) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d09,	// (0x00035b63) list_single_cale_day_pane_fp_g2

0x9497,	// (0x000372f1) list_single_cale_day_pane_fp_g3_ParamLimits

0x9497,	// (0x000372f1) list_single_cale_day_pane_fp_g3

0x94bf,	// (0x00037319) list_single_cale_day_pane_fp_g4_ParamLimits

0x94bf,	// (0x00037319) list_single_cale_day_pane_fp_g4

0x94e3,	// (0x0003733d) list_single_cale_day_pane_fp_g5_ParamLimits

0x94e3,	// (0x0003733d) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x0003d9ff) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x0003d9ff) list_single_cale_day_pane_fp_g

0x9507,	// (0x00037361) list_single_cale_day_pane_fp_t1_ParamLimits

0x9507,	// (0x00037361) list_single_cale_day_pane_fp_t1

0x952d,	// (0x00037387) list_single_cale_day_pane_fp_t2_ParamLimits

0x952d,	// (0x00037387) list_single_cale_day_pane_fp_t2

0x9546,	// (0x000373a0) list_single_cale_day_pane_fp_t3_ParamLimits

0x9546,	// (0x000373a0) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0003da0a) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0003da0a) list_single_cale_day_pane_fp_t

0x7cf1,	// (0x00035b4b) list_empty_pane_fp_g1_ParamLimits

0x7cf1,	// (0x00035b4b) list_empty_pane_fp_g1

0x955f,	// (0x000373b9) list_empty_pane_fp_t1

0x956d,	// (0x000373c7) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x0003da11) list_empty_pane_fp_t

0x7cf1,	// (0x00035b4b) list_single_heading_pane_fp_g1_ParamLimits

0x7cf1,	// (0x00035b4b) list_single_heading_pane_fp_g1

0x9e81,	// (0x00037cdb) list_single_heading_pane_fp_g2_ParamLimits

0x9e81,	// (0x00037cdb) list_single_heading_pane_fp_g2

0x93ea,	// (0x00037244) list_single_heading_pane_fp_g3_ParamLimits

0x93ea,	// (0x00037244) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x0003da16) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x0003da16) list_single_heading_pane_fp_g

0x957b,	// (0x000373d5) list_single_heading_pane_fp_t1_ParamLimits

0x957b,	// (0x000373d5) list_single_heading_pane_fp_t1

0x958d,	// (0x000373e7) list_single_heading_pane_fp_t2_ParamLimits

0x958d,	// (0x000373e7) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x0003da1d) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x0003da1d) list_single_heading_pane_fp_t

0x4b78,	// (0x000329d2) aid_size_cell_fast

0x42a3,	// (0x000320fd) soft_indicator_pane_cp1_t1

0x4bb5,	// (0x00032a0f) cell_app_pane_cp2_ParamLimits

0x4bb5,	// (0x00032a0f) cell_app_pane_cp2

0xae4d,	// (0x00038ca7) fep_hwr_candidate_drop_down_list_pane

0x13f4,	// (0x0002f24e) fep_hwr_candidate_pane_g3_ParamLimits

0x13f4,	// (0x0002f24e) fep_hwr_candidate_pane_g3

0x1401,	// (0x0002f25b) fep_hwr_candidate_pane_g4_ParamLimits

0x1401,	// (0x0002f25b) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0003d991) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0003d991) fep_hwr_candidate_pane_g

0x78c8,	// (0x00035722) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78c8,	// (0x00035722) fep_vkb_candidate_drop_down_list_pane

0x7c09,	// (0x00035a63) fep_vkb_candidate_pane_g3

0x7c11,	// (0x00035a6b) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0003d9be) fep_vkb_candidate_pane_g

0x79e1,	// (0x0003583b) cell_hwr_candidate_pane_g1_ParamLimits

0x7dbd,	// (0x00035c17) cell_hwr_candidate_pane_g3_ParamLimits

0x7dbd,	// (0x00035c17) cell_hwr_candidate_pane_g3

0x7dde,	// (0x00035c38) cell_hwr_candidate_pane_g4_ParamLimits

0x7dde,	// (0x00035c38) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0003d9d8) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0003d9d8) cell_hwr_candidate_pane_g

0x7c28,	// (0x00035a82) cell_vkb_candidate_pane_g3_ParamLimits

0x7c28,	// (0x00035a82) cell_vkb_candidate_pane_g3

0x7c43,	// (0x00035a9d) cell_vkb_candidate_pane_g4_ParamLimits

0x7c43,	// (0x00035a9d) cell_vkb_candidate_pane_g4

0x7d15,	// (0x00035b6f) cell_app_pane_cp2_g1_ParamLimits

0x7d15,	// (0x00035b6f) cell_app_pane_cp2_g1

0x7d33,	// (0x00035b8d) cell_app_pane_cp2_g2_ParamLimits

0x7d33,	// (0x00035b8d) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x0003da22) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x0003da22) cell_app_pane_cp2_g

0x7d3f,	// (0x00035b99) cell_app_pane_cp2_t1_ParamLimits

0x7d3f,	// (0x00035b99) cell_app_pane_cp2_t1

0x4a15,	// (0x0003286f) grid_highlight_pane_cp1_ParamLimits

0x4a15,	// (0x0003286f) grid_highlight_pane_cp1

0xb089,	// (0x00038ee3) cell_hwr_candidate_pane_cp1_ParamLimits

0xb089,	// (0x00038ee3) cell_hwr_candidate_pane_cp1

0x79e1,	// (0x0003583b) fep_hwr_candidate_drop_down_list_pane_g1

0x7d71,	// (0x00035bcb) fep_hwr_candidate_drop_down_list_pane_g2

0x7d7e,	// (0x00035bd8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003da27) fep_hwr_candidate_drop_down_list_pane_g

0xb0a8,	// (0x00038f02) fep_hwr_candidate_drop_down_list_scroll_pane

0xb0b1,	// (0x00038f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb0b1,	// (0x00038f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb0be,	// (0x00038f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb0be,	// (0x00038f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb0cb,	// (0x00038f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb0cb,	// (0x00038f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c28,	// (0x00035a82) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c28,	// (0x00035a82) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c43,	// (0x00035a9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c43,	// (0x00035a9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb0d8,	// (0x00038f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb0d8,	// (0x00038f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb0f3,	// (0x00038f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb0f3,	// (0x00038f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7e41,	// (0x00035c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e41,	// (0x00035c9b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0003da2e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0003da2e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d51,	// (0x00035bab) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d51,	// (0x00035bab) cell_vkb_candidate_pane_cp1

0x79e1,	// (0x0003583b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) fep_vkb_candidate_drop_down_list_pane_g1

0x7d71,	// (0x00035bcb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d71,	// (0x00035bcb) fep_vkb_candidate_drop_down_list_pane_g2

0x7d7e,	// (0x00035bd8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7d7e,	// (0x00035bd8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003da27) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0003da27) fep_vkb_candidate_drop_down_list_pane_g

0x7d8b,	// (0x00035be5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d8b,	// (0x00035be5) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d98,	// (0x00035bf2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d98,	// (0x00035bf2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7da5,	// (0x00035bff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7da5,	// (0x00035bff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7db1,	// (0x00035c0b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7db1,	// (0x00035c0b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7dbd,	// (0x00035c17) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7dbd,	// (0x00035c17) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7dde,	// (0x00035c38) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7dde,	// (0x00035c38) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7dff,	// (0x00035c59) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7dff,	// (0x00035c59) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e20,	// (0x00035c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e20,	// (0x00035c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e41,	// (0x00035c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e41,	// (0x00035c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003da3f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003da3f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9af3,	// (0x0003794d) title_pane_g1_ParamLimits

0x9b00,	// (0x0003795a) title_pane_g2_ParamLimits

0xf56a,	// (0x0003d3c4) title_pane_g_ParamLimits

0x4f45,	// (0x00032d9f) aid_call2_pane

0x4f3d,	// (0x00032d97) aid_call_pane

0x4f4d,	// (0x00032da7) popup_clock_analogue_window_g1

0x4f4d,	// (0x00032da7) popup_clock_analogue_window_g2

0xa1c6,	// (0x00038020) popup_clock_analogue_window_g3

0xa1cf,	// (0x00038029) popup_clock_analogue_window_g4

0x4127,	// (0x00031f81) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0003d573) popup_clock_analogue_window_g

0xa1d7,	// (0x00038031) popup_clock_analogue_window_t1

0xa20e,	// (0x00038068) clock_digital_number_pane_ParamLimits

0xa20e,	// (0x00038068) clock_digital_number_pane

0xa21a,	// (0x00038074) clock_digital_number_pane_cp02_ParamLimits

0xa21a,	// (0x00038074) clock_digital_number_pane_cp02

0xa226,	// (0x00038080) clock_digital_number_pane_cp03_ParamLimits

0xa226,	// (0x00038080) clock_digital_number_pane_cp03

0xa232,	// (0x0003808c) clock_digital_number_pane_cp04_ParamLimits

0xa232,	// (0x0003808c) clock_digital_number_pane_cp04

0xa23e,	// (0x00038098) clock_digital_separator_pane_ParamLimits

0xa23e,	// (0x00038098) clock_digital_separator_pane

0xa24a,	// (0x000380a4) popup_clock_digital_window_t1_ParamLimits

0xa24a,	// (0x000380a4) popup_clock_digital_window_t1

0x4127,	// (0x00031f81) clock_digital_number_pane_g1

0x4127,	// (0x00031f81) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0003d57e) clock_digital_number_pane_g

0x4127,	// (0x00031f81) clock_digital_separator_pane_g1

0x4127,	// (0x00031f81) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0003d57e) clock_digital_separator_pane_g

0xbe5d,	// (0x00039cb7) aid_fill_nsta_ParamLimits

0xbf26,	// (0x00039d80) indicator_nsta_pane_ParamLimits

0x5889,	// (0x000336e3) popup_clock_analogue_window

0x5889,	// (0x000336e3) popup_clock_digital_window

0x418d,	// (0x00031fe7) grid_indicator_nsta_pane_ParamLimits

0x7400,	// (0x0003525a) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0003d911) clock_nsta_pane_t

0xa18a,	// (0x00037fe4) aid_size_max_handle

0xa194,	// (0x00037fee) aid_size_min_handle

0x545c,	// (0x000332b6) editor_scroll_pane

0x7e5c,	// (0x00035cb6) ex_editor_pane

0x4b34,	// (0x0003298e) scroll_pane_cp13

0x49b4,	// (0x0003280e) scroll_pane_cp14

0x4f77,	// (0x00032dd1) scroll_pane_cp36

0xa1f7,	// (0x00038051) list_single_graphic_hl_pane_cp2_ParamLimits

0xa1f7,	// (0x00038051) list_single_graphic_hl_pane_cp2

0x91b6,	// (0x00037010) list_single_graphic_hl_pane_ParamLimits

0x91b6,	// (0x00037010) list_single_graphic_hl_pane

0x95a3,	// (0x000373fd) aid_size_min_hl_cp1

0x7e64,	// (0x00035cbe) list_highlight_pane_cp34_ParamLimits

0x7e64,	// (0x00035cbe) list_highlight_pane_cp34

0x7e75,	// (0x00035ccf) list_single_graphic_hl_pane_g1_ParamLimits

0x7e75,	// (0x00035ccf) list_single_graphic_hl_pane_g1

0x95ac,	// (0x00037406) list_single_graphic_hl_pane_g2_ParamLimits

0x95ac,	// (0x00037406) list_single_graphic_hl_pane_g2

0x95ac,	// (0x00037406) list_single_graphic_hl_pane_g3_ParamLimits

0x95ac,	// (0x00037406) list_single_graphic_hl_pane_g3

0x53cd,	// (0x00033227) list_single_graphic_hl_pane_g4_ParamLimits

0x53cd,	// (0x00033227) list_single_graphic_hl_pane_g4

0x95b8,	// (0x00037412) list_single_graphic_hl_pane_g5_ParamLimits

0x95b8,	// (0x00037412) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003da50) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003da50) list_single_graphic_hl_pane_g

0x8913,	// (0x0003676d) list_single_graphic_hl_pane_t1_ParamLimits

0x8913,	// (0x0003676d) list_single_graphic_hl_pane_t1

0x7e82,	// (0x00035cdc) aid_size_min_hl_cp2

0x7e8b,	// (0x00035ce5) list_highlight_pane_cp34_cp2_ParamLimits

0x7e8b,	// (0x00035ce5) list_highlight_pane_cp34_cp2

0x7e75,	// (0x00035ccf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e75,	// (0x00035ccf) list_single_graphic_hl_pane_g1_cp2

0x7e98,	// (0x00035cf2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7e98,	// (0x00035cf2) list_single_graphic_hl_pane_g2_cp2

0x7ea4,	// (0x00035cfe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ea4,	// (0x00035cfe) list_single_graphic_hl_pane_g3_cp2

0x5393,	// (0x000331ed) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5393,	// (0x000331ed) list_single_graphic_hl_pane_g4_cp2

0x7eb2,	// (0x00035d0c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7eb2,	// (0x00035d0c) list_single_graphic_hl_pane_g5_cp2

0xa68d,	// (0x000384e7) control_pane_g4_ParamLimits

0xa68d,	// (0x000384e7) control_pane_g4

0x4b6c,	// (0x000329c6) bg_popup_sub_pane_cp10_ParamLimits

0x7764,	// (0x000355be) list_choice_list_pane_ParamLimits

0x7773,	// (0x000355cd) scroll_pane_cp23

0x42c0,	// (0x0003211a) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c94,	// (0x00035aee) list_preview_fixed_pane_ParamLimits

0x7caa,	// (0x00035b04) list_preview_fixed_pane_cp_ParamLimits

0x7caa,	// (0x00035b04) list_preview_fixed_pane_cp

0x7cb6,	// (0x00035b10) popup_preview_fixed_window_g1_ParamLimits

0x7cb6,	// (0x00035b10) popup_preview_fixed_window_g1

0x7cc2,	// (0x00035b1c) popup_preview_fixed_window_g2_ParamLimits

0x7cc2,	// (0x00035b1c) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x0003d9df) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x0003d9df) popup_preview_fixed_window_g

0xa079,	// (0x00037ed3) aid_navi_side_left_pane_ParamLimits

0xa08e,	// (0x00037ee8) aid_navi_side_right_pane_ParamLimits

0xa0a6,	// (0x00037f00) navi_icon_pane_stacon_ParamLimits

0xa0ba,	// (0x00037f14) navi_navi_pane_stacon_ParamLimits

0xa0a6,	// (0x00037f00) navi_text_pane_stacon_ParamLimits

0x411d,	// (0x00031f77) main_text_info_pane

0x7edc,	// (0x00035d36) listscroll_text_info_pane

0x7ee4,	// (0x00035d3e) list_text_info_pane_ParamLimits

0x7ee4,	// (0x00035d3e) list_text_info_pane

0x7ef3,	// (0x00035d4d) scroll_pane_cp24_ParamLimits

0x7ef3,	// (0x00035d4d) scroll_pane_cp24

0xcab8,	// (0x0003a912) list_text_info_pane_t1_ParamLimits

0xcab8,	// (0x0003a912) list_text_info_pane_t1

0xa7ee,	// (0x00038648) popup_fast_swap2_window_ParamLimits

0xa7ee,	// (0x00038648) popup_fast_swap2_window

0x7f11,	// (0x00035d6b) aid_size_cell_fast2

0x411d,	// (0x00031f77) bg_popup_window_pane_cp17

0x5d3b,	// (0x00033b95) heading_pane_cp2

0x46e7,	// (0x00032541) listscroll_fast2_pane

0x7f1b,	// (0x00035d75) grid_fast2_pane

0x7f25,	// (0x00035d7f) listscroll_fast2_pane_g1

0x7f2d,	// (0x00035d87) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003da5b) listscroll_fast2_pane_g

0x4b34,	// (0x0003298e) scroll_pane_cp26

0x7f37,	// (0x00035d91) cell_fast2_pane_ParamLimits

0x7f37,	// (0x00035d91) cell_fast2_pane

0x7f4c,	// (0x00035da6) cell_fast2_pane_g1

0x7f55,	// (0x00035daf) cell_fast2_pane_g2

0x7f5e,	// (0x00035db8) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003da60) cell_fast2_pane_g

0x477b,	// (0x000325d5) grid_highlight_pane_cp9

0x4790,	// (0x000325ea) main_eswt_pane_ParamLimits

0x4790,	// (0x000325ea) main_eswt_pane

0x7f08,	// (0x00035d62) list_single_text_info_pane

0x7f66,	// (0x00035dc0) eswt_ctrl_button_pane

0x7f66,	// (0x00035dc0) eswt_ctrl_canvas_pane

0x7f6e,	// (0x00035dc8) eswt_ctrl_combo_pane

0x7f66,	// (0x00035dc0) eswt_ctrl_default_pane

0x7f66,	// (0x00035dc0) eswt_ctrl_label_pane

0x7f76,	// (0x00035dd0) eswt_ctrl_wait_pane

0x7f7e,	// (0x00035dd8) eswt_shell_pane

0x411d,	// (0x00031f77) listscroll_eswt_app_pane

0x7f9e,	// (0x00035df8) popup_eswt_tasktip_window_ParamLimits

0x7f9e,	// (0x00035df8) popup_eswt_tasktip_window

0x5a94,	// (0x000338ee) bg_popup_window_pane_cp18

0x7faf,	// (0x00035e09) eswt_control_pane_g1_ParamLimits

0x7faf,	// (0x00035e09) eswt_control_pane_g1

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_ParamLimits

0x7fbc,	// (0x00035e16) eswt_control_pane_g2

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_ParamLimits

0x7fc9,	// (0x00035e23) eswt_control_pane_g3

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_ParamLimits

0x7fd6,	// (0x00035e30) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003da67) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003da67) eswt_control_pane_g

0x4a15,	// (0x0003286f) bg_button_pane_ParamLimits

0x4a15,	// (0x0003286f) bg_button_pane

0x4790,	// (0x000325ea) common_borders_pane_copy2_ParamLimits

0x4790,	// (0x000325ea) common_borders_pane_copy2

0x7fe3,	// (0x00035e3d) control_button_pane_g1_ParamLimits

0x7fe3,	// (0x00035e3d) control_button_pane_g1

0x7fef,	// (0x00035e49) control_button_pane_g2_ParamLimits

0x7fef,	// (0x00035e49) control_button_pane_g2

0x7ffb,	// (0x00035e55) control_button_pane_g3_ParamLimits

0x7ffb,	// (0x00035e55) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003da70) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003da70) control_button_pane_g

0x800f,	// (0x00035e69) control_button_pane_t1

0x801d,	// (0x00035e77) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003da77) control_button_pane_t

0x59a4,	// (0x000337fe) bg_button_pane_g1

0x59b4,	// (0x0003380e) bg_button_pane_g2

0x59ac,	// (0x00033806) bg_button_pane_g3

0x59c4,	// (0x0003381e) bg_button_pane_g4

0x59bc,	// (0x00033816) bg_button_pane_g5

0x59cc,	// (0x00033826) bg_button_pane_g6

0x59d4,	// (0x0003382e) bg_button_pane_g7

0x59e4,	// (0x0003383e) bg_button_pane_g8

0x59dc,	// (0x00033836) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0003d6d6) bg_button_pane_g

0x771f,	// (0x00035579) common_borders_pane_ParamLimits

0x771f,	// (0x00035579) common_borders_pane

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy1_ParamLimits

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy1

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy1_ParamLimits

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy1

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy1_ParamLimits

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy1

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy1_ParamLimits

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy1

0x775a,	// (0x000355b4) bg_eswt_ctrl_canvas_pane_g1

0x771f,	// (0x00035579) common_borders_pane_cp2_ParamLimits

0x771f,	// (0x00035579) common_borders_pane_cp2

0x771f,	// (0x00035579) common_borders_pane_cp3_ParamLimits

0x771f,	// (0x00035579) common_borders_pane_cp3

0x802b,	// (0x00035e85) separator_horizontal_pane

0x8033,	// (0x00035e8d) separator_vertical_pane

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy2_ParamLimits

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy2

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy2_ParamLimits

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy2

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy2_ParamLimits

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy2

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy2_ParamLimits

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy2

0x411d,	// (0x00031f77) common_borders_pane_cp4

0x803c,	// (0x00035e96) separator_horizontal_pane_g1

0x8045,	// (0x00035e9f) separator_horizontal_pane_g2

0x804e,	// (0x00035ea8) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003da7c) separator_horizontal_pane_g

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy3_ParamLimits

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy3

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy3_ParamLimits

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy3

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy3_ParamLimits

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy3

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy3_ParamLimits

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy3

0x411d,	// (0x00031f77) common_borders_pane_cp5

0x8057,	// (0x00035eb1) separator_vertical_pane_g1

0x8060,	// (0x00035eba) separator_vertical_pane_g2

0x8069,	// (0x00035ec3) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003da83) separator_vertical_pane_g

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy4_ParamLimits

0x7faf,	// (0x00035e09) eswt_control_pane_g1_copy4

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy4_ParamLimits

0x7fbc,	// (0x00035e16) eswt_control_pane_g2_copy4

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy4_ParamLimits

0x7fc9,	// (0x00035e23) eswt_control_pane_g3_copy4

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy4_ParamLimits

0x7fd6,	// (0x00035e30) eswt_control_pane_g4_copy4

0xcaf1,	// (0x0003a94b) eswt_ctrl_combo_button_pane

0xcaf9,	// (0x0003a953) eswt_ctrl_input_pane

0xcb01,	// (0x0003a95b) popup_choice_list_window_cp70

0xcb09,	// (0x0003a963) eswt_ctrl_input_pane_t1

0x411d,	// (0x00031f77) input_focus_pane_cp70

0x771f,	// (0x00035579) bg_button_pane_cp70_ParamLimits

0x771f,	// (0x00035579) bg_button_pane_cp70

0xcb17,	// (0x0003a971) eswt_ctrl_combo_button_pane_g1

0x8072,	// (0x00035ecc) wait_bar_pane_cp70

0x5a94,	// (0x000338ee) bg_popup_window_pane_cp70_ParamLimits

0x5a94,	// (0x000338ee) bg_popup_window_pane_cp70

0x807a,	// (0x00035ed4) popup_eswt_tasktip_window_t1

0x8090,	// (0x00035eea) wait_bar_pane_cp71_ParamLimits

0x8090,	// (0x00035eea) wait_bar_pane_cp71

0x809c,	// (0x00035ef6) grid_eswt_app_pane

0x4d83,	// (0x00032bdd) scroll_pane_cp70

0xcb1f,	// (0x0003a979) cell_eswt_app_pane_ParamLimits

0xcb1f,	// (0x0003a979) cell_eswt_app_pane

0xcb53,	// (0x0003a9ad) cell_eswt_app_pane_g1_ParamLimits

0xcb53,	// (0x0003a9ad) cell_eswt_app_pane_g1

0xcb82,	// (0x0003a9dc) cell_eswt_app_pane_g2_ParamLimits

0xcb82,	// (0x0003a9dc) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003da8a) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003da8a) cell_eswt_app_pane_g

0xcbab,	// (0x0003aa05) cell_eswt_app_pane_t1_ParamLimits

0xcbab,	// (0x0003aa05) cell_eswt_app_pane_t1

0xcbdd,	// (0x0003aa37) grid_highlight_pane_cp70_ParamLimits

0xcbdd,	// (0x0003aa37) grid_highlight_pane_cp70

0x532f,	// (0x00033189) set_content_pane_g1

0x5633,	// (0x0003348d) status_small_volume_pane

0xb10e,	// (0x00038f68) status_small_volume_pane_g1

0xb116,	// (0x00038f70) volume_small2_pane

0xb11f,	// (0x00038f79) volume_small2_pane_g1

0xb128,	// (0x00038f82) volume_small2_pane_g2

0xb131,	// (0x00038f8b) volume_small2_pane_g3

0xb13a,	// (0x00038f94) volume_small2_pane_g4

0xb143,	// (0x00038f9d) volume_small2_pane_g5

0xb14c,	// (0x00038fa6) volume_small2_pane_g6

0xb155,	// (0x00038faf) volume_small2_pane_g7

0xb15e,	// (0x00038fb8) volume_small2_pane_g8

0xb167,	// (0x00038fc1) volume_small2_pane_g9

0xb170,	// (0x00038fca) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003da8f) volume_small2_pane_g

0x7aee,	// (0x00035948) fep_vkb_top_text_pane_g1_ParamLimits

0xca2a,	// (0x0003a884) fep_vkb_top_text_pane_t1_ParamLimits

0x7cce,	// (0x00035b28) popup_preview_fixed_window_g3_ParamLimits

0x7cce,	// (0x00035b28) popup_preview_fixed_window_g3

0xbdf0,	// (0x00039c4a) popup_toolbar_trans_pane

0xc462,	// (0x0003a2bc) aid_height_set_list_ParamLimits

0x6501,	// (0x0003435b) aid_size_parent_ParamLimits

0x4b6c,	// (0x000329c6) list_highlight_pane_cp2_ParamLimits

0x532f,	// (0x00033189) set_content_pane_g1_ParamLimits

0x91d8,	// (0x00037032) list_single_image_pane_ParamLimits

0x91d8,	// (0x00037032) list_single_image_pane

0xcbe9,	// (0x0003aa43) aid_size_cell_image_ParamLimits

0xcbe9,	// (0x0003aa43) aid_size_cell_image

0xcbf6,	// (0x0003aa50) grid_single_image_pane_ParamLimits

0xcbf6,	// (0x0003aa50) grid_single_image_pane

0x4a2f,	// (0x00032889) list_single_image_pane_g1_ParamLimits

0x4a2f,	// (0x00032889) list_single_image_pane_g1

0x4a3b,	// (0x00032895) list_single_image_pane_g2_ParamLimits

0x4a3b,	// (0x00032895) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003daa4) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003daa4) list_single_image_pane_g

0xcc02,	// (0x0003aa5c) list_single_image_pane_t1_ParamLimits

0xcc02,	// (0x0003aa5c) list_single_image_pane_t1

0xcc18,	// (0x0003aa72) cell_image_list_pane_ParamLimits

0xcc18,	// (0x0003aa72) cell_image_list_pane

0xcc2c,	// (0x0003aa86) cell_image_list_pane_g1

0xcc35,	// (0x0003aa8f) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003daa9) cell_image_list_pane_g

0xcc3e,	// (0x0003aa98) aid_size_cell_tb_trans_pane

0x4a15,	// (0x0003286f) bg_tb_trans_pane

0xcc50,	// (0x0003aaaa) grid_tb_trans_pane

0x59a4,	// (0x000337fe) bg_tb_trans_pane_g1

0x59b4,	// (0x0003380e) bg_tb_trans_pane_g2

0x59ac,	// (0x00033806) bg_tb_trans_pane_g3

0x59c4,	// (0x0003381e) bg_tb_trans_pane_g4

0x59bc,	// (0x00033816) bg_tb_trans_pane_g5

0x59e4,	// (0x0003383e) bg_tb_trans_pane_g6

0x59dc,	// (0x00033836) bg_tb_trans_pane_g7

0x59cc,	// (0x00033826) bg_tb_trans_pane_g8

0x59d4,	// (0x0003382e) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003daae) bg_tb_trans_pane_g

0xcc64,	// (0x0003aabe) cell_toolbar_trans_pane_ParamLimits

0xcc64,	// (0x0003aabe) cell_toolbar_trans_pane

0x775a,	// (0x000355b4) cell_toolbar_trans_pane_g1

0xc804,	// (0x0003a65e) list_form2_midp_pane_t1

0xc812,	// (0x0003a66c) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0003d957) list_form2_midp_pane_t

0x74b7,	// (0x00035311) scroll_pane_cp51_ParamLimits

0x762d,	// (0x00035487) form2_midp_wait_pane_g1

0x7636,	// (0x00035490) form2_midp_wait_pane_g2

0x763f,	// (0x00035499) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0003d96c) form2_midp_wait_pane_g

0x418d,	// (0x00031fe7) list_highlight_pane_cp21_ParamLimits

0x765f,	// (0x000354b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x766e,	// (0x000354c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xabdd,	// (0x00038a37) list_single_2graphic_im_pane_ParamLimits

0xabdd,	// (0x00038a37) list_single_2graphic_im_pane

0xcc8a,	// (0x0003aae4) list_single_2graphic_im_pane_g1_ParamLimits

0xcc8a,	// (0x0003aae4) list_single_2graphic_im_pane_g1

0xcc9b,	// (0x0003aaf5) list_single_2graphic_im_pane_g2_ParamLimits

0xcc9b,	// (0x0003aaf5) list_single_2graphic_im_pane_g2

0xcca7,	// (0x0003ab01) list_single_2graphic_im_pane_g3_ParamLimits

0xcca7,	// (0x0003ab01) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003dac1) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003dac1) list_single_2graphic_im_pane_g

0xccc7,	// (0x0003ab21) list_single_2graphic_im_pane_t1_ParamLimits

0xccc7,	// (0x0003ab21) list_single_2graphic_im_pane_t1

0x7cda,	// (0x00035b34) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cda,	// (0x00035b34) list_single_graphic_2heading_pane_fp

0x9415,	// (0x0003726f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9415,	// (0x0003726f) list_single_graphic_2heading_pane_fp_g1

0x7cf1,	// (0x00035b4b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cf1,	// (0x00035b4b) list_single_graphic_2heading_pane_fp_g2

0x9e81,	// (0x00037cdb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9e81,	// (0x00037cdb) list_single_graphic_2heading_pane_fp_g3

0x93ea,	// (0x00037244) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x93ea,	// (0x00037244) list_single_graphic_2heading_pane_fp_g4

0x7cfd,	// (0x00035b57) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cfd,	// (0x00035b57) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d9ef) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d9ef) list_single_graphic_2heading_pane_fp_g

0x95cc,	// (0x00037426) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x95cc,	// (0x00037426) list_single_graphic_2heading_pane_fp_t1

0x944d,	// (0x000372a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x944d,	// (0x000372a7) list_single_graphic_2heading_pane_fp_t2

0x95e2,	// (0x0003743c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x95e2,	// (0x0003743c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003daca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003daca) list_single_graphic_2heading_pane_fp_t

0x77fa,	// (0x00035654) fep_hwr_write_pane_g5_ParamLimits

0x77fa,	// (0x00035654) fep_hwr_write_pane_g5

0x7806,	// (0x00035660) fep_hwr_write_pane_g6_ParamLimits

0x7806,	// (0x00035660) fep_hwr_write_pane_g6

0x7f7e,	// (0x00035dd8) eswt_shell_pane_ParamLimits

0x5a94,	// (0x000338ee) bg_popup_window_pane_cp18_ParamLimits

0x6a98,	// (0x000348f2) heading_pane_cp70

0x807a,	// (0x00035ed4) popup_eswt_tasktip_window_t1_ParamLimits

0xbe9d,	// (0x00039cf7) aid_touch_tab_arrow_left

0xbeac,	// (0x00039d06) aid_touch_tab_arrow_right

0x9b11,	// (0x0003796b) title_pane_g3_ParamLimits

0x9b11,	// (0x0003796b) title_pane_g3

0x49d4,	// (0x0003282e) set_value_pane_g1

0xbdf0,	// (0x00039c4a) popup_toolbar_trans_pane_ParamLimits

0xcc3e,	// (0x0003aa98) aid_size_cell_tb_trans_pane_ParamLimits

0x4a15,	// (0x0003286f) bg_tb_trans_pane_ParamLimits

0xcc50,	// (0x0003aaaa) grid_tb_trans_pane_ParamLimits

0x42c0,	// (0x0003211a) cont_note_pane_ParamLimits

0x42c0,	// (0x0003211a) cont_note_pane

0x4790,	// (0x000325ea) cont_snote2_single_text_pane_ParamLimits

0x4790,	// (0x000325ea) cont_snote2_single_text_pane

0x4790,	// (0x000325ea) cont_snote2_single_graphic_pane_ParamLimits

0x4790,	// (0x000325ea) cont_snote2_single_graphic_pane

0x5f51,	// (0x00033dab) cont_note_wait_pane_ParamLimits

0x5f51,	// (0x00033dab) cont_note_wait_pane

0x5f51,	// (0x00033dab) cont_note_image_pane_ParamLimits

0x5f51,	// (0x00033dab) cont_note_image_pane

0xccf8,	// (0x0003ab52) popup_note2_window_g1_ParamLimits

0xccf8,	// (0x0003ab52) popup_note2_window_g1

0xcd29,	// (0x0003ab83) popup_note2_window_t1_ParamLimits

0xcd29,	// (0x0003ab83) popup_note2_window_t1

0xcd6e,	// (0x0003abc8) popup_note2_window_t2_ParamLimits

0xcd6e,	// (0x0003abc8) popup_note2_window_t2

0xcdb3,	// (0x0003ac0d) popup_note2_window_t3_ParamLimits

0xcdb3,	// (0x0003ac0d) popup_note2_window_t3

0xcdf8,	// (0x0003ac52) popup_note2_window_t4_ParamLimits

0xcdf8,	// (0x0003ac52) popup_note2_window_t4

0x4579,	// (0x000323d3) popup_note2_window_t5_ParamLimits

0x4579,	// (0x000323d3) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003dad6) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003dad6) popup_note2_window_t

0xce27,	// (0x0003ac81) popup_note2_image_window_g1_ParamLimits

0xce27,	// (0x0003ac81) popup_note2_image_window_g1

0xce33,	// (0x0003ac8d) popup_note2_image_window_g2_ParamLimits

0xce33,	// (0x0003ac8d) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003dae1) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003dae1) popup_note2_image_window_g

0xce45,	// (0x0003ac9f) popup_note2_image_window_t1_ParamLimits

0xce45,	// (0x0003ac9f) popup_note2_image_window_t1

0xce5d,	// (0x0003acb7) popup_note2_image_window_t2_ParamLimits

0xce5d,	// (0x0003acb7) popup_note2_image_window_t2

0xce75,	// (0x0003accf) popup_note2_image_window_t3_ParamLimits

0xce75,	// (0x0003accf) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003dae6) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003dae6) popup_note2_image_window_t

0x5f5f,	// (0x00033db9) popup_note2_wait_window_g1_ParamLimits

0x5f5f,	// (0x00033db9) popup_note2_wait_window_g1

0x5f6b,	// (0x00033dc5) popup_note2_wait_window_g2_ParamLimits

0x5f6b,	// (0x00033dc5) popup_note2_wait_window_g2

0x5f77,	// (0x00033dd1) popup_note2_wait_window_g3_ParamLimits

0x5f77,	// (0x00033dd1) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0003d6b8) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0003d6b8) popup_note2_wait_window_g

0xce91,	// (0x0003aceb) popup_note2_wait_window_t1_ParamLimits

0xce91,	// (0x0003aceb) popup_note2_wait_window_t1

0xceaf,	// (0x0003ad09) popup_note2_wait_window_t2_ParamLimits

0xceaf,	// (0x0003ad09) popup_note2_wait_window_t2

0xcecd,	// (0x0003ad27) popup_note2_wait_window_t3_ParamLimits

0xcecd,	// (0x0003ad27) popup_note2_wait_window_t3

0xcedf,	// (0x0003ad39) popup_note2_wait_window_t4_ParamLimits

0xcedf,	// (0x0003ad39) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003daed) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003daed) popup_note2_wait_window_t

0xcef1,	// (0x0003ad4b) wait_bar2_pane_ParamLimits

0xcef1,	// (0x0003ad4b) wait_bar2_pane

0xcf09,	// (0x0003ad63) popup_snote2_single_text_window_g1_ParamLimits

0xcf09,	// (0x0003ad63) popup_snote2_single_text_window_g1

0xcf31,	// (0x0003ad8b) popup_snote2_single_text_window_t1_ParamLimits

0xcf31,	// (0x0003ad8b) popup_snote2_single_text_window_t1

0xcf7d,	// (0x0003add7) popup_snote2_single_text_window_t2_ParamLimits

0xcf7d,	// (0x0003add7) popup_snote2_single_text_window_t2

0xcfc9,	// (0x0003ae23) popup_snote2_single_text_window_t3_ParamLimits

0xcfc9,	// (0x0003ae23) popup_snote2_single_text_window_t3

0xd00a,	// (0x0003ae64) popup_snote2_single_text_window_t4_ParamLimits

0xd00a,	// (0x0003ae64) popup_snote2_single_text_window_t4

0xd040,	// (0x0003ae9a) popup_snote2_single_text_window_t5_ParamLimits

0xd040,	// (0x0003ae9a) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003daf6) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003daf6) popup_snote2_single_text_window_t

0xd06b,	// (0x0003aec5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd06b,	// (0x0003aec5) popup_snote2_single_graphic_window_g1

0xd093,	// (0x0003aeed) popup_snote2_single_graphic_window_g2_ParamLimits

0xd093,	// (0x0003aeed) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003db01) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003db01) popup_snote2_single_graphic_window_g

0xd0bb,	// (0x0003af15) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0bb,	// (0x0003af15) popup_snote2_single_graphic_window_t1

0xd107,	// (0x0003af61) popup_snote2_single_graphic_window_t2_ParamLimits

0xd107,	// (0x0003af61) popup_snote2_single_graphic_window_t2

0xcfc9,	// (0x0003ae23) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfc9,	// (0x0003ae23) popup_snote2_single_graphic_window_t3

0xd00a,	// (0x0003ae64) popup_snote2_single_graphic_window_t4_ParamLimits

0xd00a,	// (0x0003ae64) popup_snote2_single_graphic_window_t4

0xd040,	// (0x0003ae9a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd040,	// (0x0003ae9a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003db06) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003db06) popup_snote2_single_graphic_window_t

0x7467,	// (0x000352c1) clock_nsta_pane_cp2_t1

0x7467,	// (0x000352c1) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0003d92d) clock_nsta_pane_cp2_t

0x8e3a,	// (0x00036c94) form_field_data_wide_pane_g1_ParamLimits

0x4a2f,	// (0x00032889) form_field_data_wide_pane_g2_ParamLimits

0x4a2f,	// (0x00032889) form_field_data_wide_pane_g2

0x4a3b,	// (0x00032895) form_field_data_wide_pane_g3_ParamLimits

0x4a3b,	// (0x00032895) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0003d4f6) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0003d4f6) form_field_data_wide_pane_g

0xc6cb,	// (0x0003a525) grid_touch_3_pane_ParamLimits

0xc6cb,	// (0x0003a525) grid_touch_3_pane

0xd153,	// (0x0003afad) cell_touch_3_pane_ParamLimits

0xd153,	// (0x0003afad) cell_touch_3_pane

0x775a,	// (0x000355b4) cell_touch_3_pane_g1

0x775a,	// (0x000355b4) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0003d9b2) cell_touch_3_pane_g

0x45ab,	// (0x00032405) cont_query_data_pane

0x45b3,	// (0x0003240d) cont_query_data_pane_cp1

0xd182,	// (0x0003afdc) button_value_adjust_pane_cp7

0xd18a,	// (0x0003afe4) query_popup_pane_cp3

0x4fa9,	// (0x00032e03) bg_popup_sub_pane_cp22_ParamLimits

0xa2a5,	// (0x000380ff) navi_navi_volume_pane_cp2

0xa2c0,	// (0x0003811a) popup_side_volume_key_window_g2

0xa2cf,	// (0x00038129) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003d588) popup_side_volume_key_window_g

0xa2ec,	// (0x00038146) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003d58f) popup_side_volume_key_window_t

0x51f9,	// (0x00033053) popup_side_volume_key_window_ParamLimits

0x8a94,	// (0x000368ee) list_double_graphic_pane_g4_ParamLimits

0x8a94,	// (0x000368ee) list_double_graphic_pane_g4

0xac28,	// (0x00038a82) list_single_2heading_msg_pane_ParamLimits

0xac28,	// (0x00038a82) list_single_2heading_msg_pane

0xb179,	// (0x00038fd3) list_single_2heading_msg_pane_g1_ParamLimits

0xb179,	// (0x00038fd3) list_single_2heading_msg_pane_g1

0xb185,	// (0x00038fdf) list_single_2heading_msg_pane_g2_ParamLimits

0xb185,	// (0x00038fdf) list_single_2heading_msg_pane_g2

0xb191,	// (0x00038feb) list_single_2heading_msg_pane_g3_ParamLimits

0xb191,	// (0x00038feb) list_single_2heading_msg_pane_g3

0xb19d,	// (0x00038ff7) list_single_2heading_msg_pane_g4_ParamLimits

0xb19d,	// (0x00038ff7) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003db11) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003db11) list_single_2heading_msg_pane_g

0x9602,	// (0x0003745c) list_single_2heading_msg_pane_t1_ParamLimits

0x9602,	// (0x0003745c) list_single_2heading_msg_pane_t1

0x962a,	// (0x00037484) list_single_2heading_msg_pane_t2_ParamLimits

0x962a,	// (0x00037484) list_single_2heading_msg_pane_t2

0x965e,	// (0x000374b8) list_single_2heading_msg_pane_t3_ParamLimits

0x965e,	// (0x000374b8) list_single_2heading_msg_pane_t3

0x9697,	// (0x000374f1) list_single_2heading_msg_pane_t4_ParamLimits

0x9697,	// (0x000374f1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003db1a) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003db1a) list_single_2heading_msg_pane_t

0x413b,	// (0x00031f95) title_pane_g4_ParamLimits

0x413b,	// (0x00031f95) title_pane_g4

0x9fc9,	// (0x00037e23) title_pane_stacon_g3_ParamLimits

0x9fc9,	// (0x00037e23) title_pane_stacon_g3

0xccbb,	// (0x0003ab15) list_single_2graphic_im_pane_g4_ParamLimits

0xccbb,	// (0x0003ab15) list_single_2graphic_im_pane_g4

0x68b0,	// (0x0003470a) popup_side_volume_key_window_cp

0x6d88,	// (0x00034be2) main_idle_act2_pane_t1

0xa88e,	// (0x000386e8) toolbar_button_pane_g10

0x9e06,	// (0x00037c60) popup_toolbar_window_cp1

0x7458,	// (0x000352b2) clock_nsta_pane_cp_t1

0x7458,	// (0x000352b2) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0003d928) clock_nsta_pane_cp_t

0xa2a5,	// (0x000380ff) navi_navi_volume_pane_cp2_ParamLimits

0xa2b4,	// (0x0003810e) popup_side_volume_key_window_g1_ParamLimits

0xa2c0,	// (0x0003811a) popup_side_volume_key_window_g2_ParamLimits

0xa2cf,	// (0x00038129) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003d588) popup_side_volume_key_window_g_ParamLimits

0xae39,	// (0x00038c93) fep_hwr_aid_pane

0x109d,	// (0x0002eef7) bg_fep_hwr_top_pane_g4_ParamLimits

0x77dc,	// (0x00035636) fep_hwr_top_pane_g1_ParamLimits

0x77ca,	// (0x00035624) fep_hwr_top_pane_g2_ParamLimits

0xaef2,	// (0x00038d4c) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0003d97d) fep_hwr_top_pane_g_ParamLimits

0xaf07,	// (0x00038d61) fep_hwr_top_text_pane_ParamLimits

0x66ae,	// (0x00034508) aid_touch_tab_arrow_arrow_2

0x66a5,	// (0x000344ff) aid_touch_tab_arrow_left_2

0xae4d,	// (0x00038ca7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xae84,	// (0x00038cde) fep_hwr_prediction_pane

0x7931,	// (0x0003578b) fep_vkb_prediction_pane

0xca07,	// (0x0003a861) fep_vkb_side_pane_g3_ParamLimits

0xca07,	// (0x0003a861) fep_vkb_side_pane_g3

0x79e1,	// (0x0003583b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d71,	// (0x00035bcb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7d7e,	// (0x00035bd8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0003da27) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1af,	// (0x0003b009) fep_hwr_prediction_pane_g1

0xb1b5,	// (0x0003900f) fep_hwr_prediction_pane_g2

0xb1bd,	// (0x00039017) fep_hwr_prediction_pane_g3

0xb1c5,	// (0x0003901f) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003db23) fep_hwr_prediction_pane_g

0xd1af,	// (0x0003b009) fep_vkb_prediction_pane_g1

0xd1b9,	// (0x0003b013) fep_vkb_prediction_pane_g2

0xd1c1,	// (0x0003b01b) fep_vkb_prediction_pane_g3

0xd1c9,	// (0x0003b023) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003db2c) fep_vkb_prediction_pane_g

0xab66,	// (0x000389c0) slider_set_pane_g3

0xab7a,	// (0x000389d4) slider_set_pane_g4

0xab92,	// (0x000389ec) slider_set_pane_g5

0xab66,	// (0x000389c0) slider_set_pane_g6

0xaba8,	// (0x00038a02) slider_set_pane_g7

0x6b1d,	// (0x00034977) slider_form_pane_g3

0x6b26,	// (0x00034980) slider_form_pane_g4

0x6b2e,	// (0x00034988) slider_form_pane_g5

0x6b1d,	// (0x00034977) slider_form_pane_g6

0xc5b5,	// (0x0003a40f) slider_form_pane_g7

0x7026,	// (0x00034e80) slider_set_pane_vc_g3

0x702f,	// (0x00034e89) slider_set_pane_vc_g4

0x7038,	// (0x00034e92) slider_set_pane_vc_g5

0x7026,	// (0x00034e80) slider_set_pane_vc_g6

0x7041,	// (0x00034e9b) slider_set_pane_vc_g7

0x7026,	// (0x00034e80) slider_form_pane_vc_g1

0x702f,	// (0x00034e89) slider_form_pane_vc_g2

0x7038,	// (0x00034e92) slider_form_pane_vc_g3

0x7026,	// (0x00034e80) slider_form_pane_vc_g4

0x71d0,	// (0x0003502a) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0003d901) slider_form_pane_vc_g

0x411d,	// (0x00031f77) main_idle_act3_pane

0xd1d1,	// (0x0003b02b) ai3_links_pane

0xd1da,	// (0x0003b034) popup_ai3_data_window_ParamLimits

0xd1da,	// (0x0003b034) popup_ai3_data_window

0x411d,	// (0x00031f77) grid_ai3_links_pane

0xd1f2,	// (0x0003b04c) cell_ai3_links_pane_ParamLimits

0xd1f2,	// (0x0003b04c) cell_ai3_links_pane

0xd20a,	// (0x0003b064) bg_popup_sub_pane_cp11

0xd217,	// (0x0003b071) cell_ai3_links_pane_g1

0x411d,	// (0x00031f77) bg_popup_sub_pane_cp12

0xd23c,	// (0x0003b096) heading_ai3_data_pane

0xd244,	// (0x0003b09e) list_ai3_gene_pane

0xd250,	// (0x0003b0aa) popup_ai3_data_window_g1

0xd258,	// (0x0003b0b2) heading_ai3_data_pane_g1

0xd260,	// (0x0003b0ba) heading_ai3_data_pane_t1

0xd26e,	// (0x0003b0c8) list_double_ai3_gene_pane_ParamLimits

0xd26e,	// (0x0003b0c8) list_double_ai3_gene_pane

0xd27b,	// (0x0003b0d5) list_single_ai3_gene_pane_ParamLimits

0xd27b,	// (0x0003b0d5) list_single_ai3_gene_pane

0x771f,	// (0x00035579) list_highlight_pane_cp7_ParamLimits

0x771f,	// (0x00035579) list_highlight_pane_cp7

0xd288,	// (0x0003b0e2) list_single_a13_gene_pane_t1_ParamLimits

0xd288,	// (0x0003b0e2) list_single_a13_gene_pane_t1

0xd29f,	// (0x0003b0f9) list_single_ai3_gene_pane_g1

0xd2a8,	// (0x0003b102) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003db35) list_single_ai3_gene_pane_g

0xd2b0,	// (0x0003b10a) list_double_ai3_gene_pane_g1_ParamLimits

0xd2b0,	// (0x0003b10a) list_double_ai3_gene_pane_g1

0xd2bc,	// (0x0003b116) list_double_ai3_gene_pane_t1_ParamLimits

0xd2bc,	// (0x0003b116) list_double_ai3_gene_pane_t1

0xd2d8,	// (0x0003b132) list_double_ai3_gene_pane_t2_ParamLimits

0xd2d8,	// (0x0003b132) list_double_ai3_gene_pane_t2

0xd2ed,	// (0x0003b147) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ed,	// (0x0003b147) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003db3a) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003db3a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95f8,	// (0x00037452) aid_size_min_col_2

0xd19b,	// (0x0003aff5) aid_size_min_msg_ParamLimits

0xd19b,	// (0x0003aff5) aid_size_min_msg

0xca1b,	// (0x0003a875) fep_vkb_top_text_pane_g2_ParamLimits

0xca1b,	// (0x0003a875) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0003d9ad) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0003d9ad) fep_vkb_top_text_pane_g

0x411d,	// (0x00031f77) main_hc_apps_shell_pane

0xd30a,	// (0x0003b164) grid_hc_apps_pane_ParamLimits

0xd30a,	// (0x0003b164) grid_hc_apps_pane

0xd319,	// (0x0003b173) list_hc_apps_pane

0xd321,	// (0x0003b17b) scroll_pane_cp37_ParamLimits

0xd321,	// (0x0003b17b) scroll_pane_cp37

0xd32d,	// (0x0003b187) cell_hc_apps_pane_ParamLimits

0xd32d,	// (0x0003b187) cell_hc_apps_pane

0xd3dd,	// (0x0003b237) cell_hc_apps_pane_g1_ParamLimits

0xd3dd,	// (0x0003b237) cell_hc_apps_pane_g1

0xd40e,	// (0x0003b268) cell_hc_apps_pane_g2_ParamLimits

0xd40e,	// (0x0003b268) cell_hc_apps_pane_g2

0xd42a,	// (0x0003b284) cell_hc_apps_pane_g3_ParamLimits

0xd42a,	// (0x0003b284) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003db41) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003db41) cell_hc_apps_pane_g

0xd44c,	// (0x0003b2a6) cell_hc_apps_pane_t1_ParamLimits

0xd44c,	// (0x0003b2a6) cell_hc_apps_pane_t1

0x42c0,	// (0x0003211a) grid_highlight_pane_cp10_ParamLimits

0x42c0,	// (0x0003211a) grid_highlight_pane_cp10

0xd48c,	// (0x0003b2e6) list_single_hc_apps_pane_ParamLimits

0xd48c,	// (0x0003b2e6) list_single_hc_apps_pane

0xd4ff,	// (0x0003b359) list_single_hc_apps_pane_g1

0xb1cd,	// (0x00039027) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003db48) list_single_hc_apps_pane_g

0xb1e6,	// (0x00039040) list_single_hc_apps_pane_g2_copy1

0x96bc,	// (0x00037516) list_single_hc_apps_pane_t1

0x418d,	// (0x00031fe7) bg_set_opt_pane_cp_ParamLimits

0x9bc1,	// (0x00037a1b) setting_slider_pane_t1_ParamLimits

0x9bda,	// (0x00037a34) setting_slider_pane_t2_ParamLimits

0x9bf3,	// (0x00037a4d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003d3d4) setting_slider_pane_t_ParamLimits

0x9c0a,	// (0x00037a64) slider_set_pane_ParamLimits

0xa6a1,	// (0x000384fb) control_pane_g5_ParamLimits

0xa6a1,	// (0x000384fb) control_pane_g5

0x6adf,	// (0x00034939) slider_set_pane_g1_ParamLimits

0xab5a,	// (0x000389b4) slider_set_pane_g2_ParamLimits

0xab66,	// (0x000389c0) slider_set_pane_g3_ParamLimits

0xab7a,	// (0x000389d4) slider_set_pane_g4_ParamLimits

0xab92,	// (0x000389ec) slider_set_pane_g5_ParamLimits

0xab66,	// (0x000389c0) slider_set_pane_g6_ParamLimits

0xaba8,	// (0x00038a02) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0003d7d4) slider_set_pane_g_ParamLimits

0x52da,	// (0x00033134) navi_icon_text_pane_ParamLimits

0xbe73,	// (0x00039ccd) aid_fill_nsta_2_ParamLimits

0xbe9d,	// (0x00039cf7) aid_touch_tab_arrow_left_ParamLimits

0xbeac,	// (0x00039d06) aid_touch_tab_arrow_right_ParamLimits

0xbf19,	// (0x00039d73) clock_nsta_pane_ParamLimits

0xc367,	// (0x0003a1c1) navi_icon_pane_g1_ParamLimits

0xc376,	// (0x0003a1d0) navi_text_pane_t1_ParamLimits

0xc7e0,	// (0x0003a63a) navi_icon_text_pane_g1_ParamLimits

0xc7ef,	// (0x0003a649) navi_icon_text_pane_t1_ParamLimits

0xd4ff,	// (0x0003b359) list_single_hc_apps_pane_g1_ParamLimits

0xb1cd,	// (0x00039027) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003db48) list_single_hc_apps_pane_g_ParamLimits

0xb1e6,	// (0x00039040) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x96bc,	// (0x00037516) list_single_hc_apps_pane_t1_ParamLimits

0x9a15,	// (0x0003786f) popup_toolbar2_fixed_window_ParamLimits

0x9a15,	// (0x0003786f) popup_toolbar2_fixed_window

0xbde6,	// (0x00039c40) popup_toolbar2_float_window

0x411d,	// (0x00031f77) bg_popup_sub_pane_cp27

0xd518,	// (0x0003b372) grid_toolbar2_float_pane

0x411d,	// (0x00031f77) bg_popup_sub_pane_cp26

0xd518,	// (0x0003b372) grid_toolbar2_fixed_pane

0xd520,	// (0x0003b37a) cell_toolbar2_fixed_pane_ParamLimits

0xd520,	// (0x0003b37a) cell_toolbar2_fixed_pane

0xd531,	// (0x0003b38b) cell_toolbar2_fixed_pane_g1

0xd53a,	// (0x0003b394) toolbar2_fixed_button_pane

0x59a4,	// (0x000337fe) toolbar2_fixed_button_pane_g1

0x59b4,	// (0x0003380e) toolbar2_fixed_button_pane_g2

0x59ac,	// (0x00033806) toolbar2_fixed_button_pane_g3

0x59c4,	// (0x0003381e) toolbar2_fixed_button_pane_g4

0x59bc,	// (0x00033816) toolbar2_fixed_button_pane_g5

0x59cc,	// (0x00033826) toolbar2_fixed_button_pane_g6

0x59d4,	// (0x0003382e) toolbar2_fixed_button_pane_g7

0x59e4,	// (0x0003383e) toolbar2_fixed_button_pane_g8

0x59dc,	// (0x00033836) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0003d6d6) toolbar2_fixed_button_pane_g

0xd542,	// (0x0003b39c) cell_toolbar2_float_pane_ParamLimits

0xd542,	// (0x0003b39c) cell_toolbar2_float_pane

0xd553,	// (0x0003b3ad) cell_toolbar2_float_pane_g1

0xd53a,	// (0x0003b394) toolbar2_fixed_button_pane_cp

0xc9ce,	// (0x0003a828) fep_vkb_accented_list_pane_ParamLimits

0xc9ce,	// (0x0003a828) fep_vkb_accented_list_pane

0xb055,	// (0x00038eaf) bg_popup_fep_shadow_pane_g9

0x545c,	// (0x000332b6) bg_popup_fep_shadow_pane_cp3

0x4b1b,	// (0x00032975) list_accented_list_pane

0xd55c,	// (0x0003b3b6) list_single_accented_list_pane_ParamLimits

0xd55c,	// (0x0003b3b6) list_single_accented_list_pane

0x545c,	// (0x000332b6) list_highlight_pane_cp10

0xd56d,	// (0x0003b3c7) list_single_accented_list_pane_t1

0xbd3e,	// (0x00039b98) popup_slider_window_ParamLimits

0xbd3e,	// (0x00039b98) popup_slider_window

0xd192,	// (0x0003afec) aid_indentation_list_msg

0xd627,	// (0x0003b481) bg_popup_window_pane_cp19

0xd691,	// (0x0003b4eb) popup_slider_window_g1

0xd6ad,	// (0x0003b507) popup_slider_window_g2

0xd6c9,	// (0x0003b523) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003db4d) popup_slider_window_g

0xd725,	// (0x0003b57f) popup_slider_window_t1

0xd799,	// (0x0003b5f3) small_volume_slider_vertical_pane

0x775a,	// (0x000355b4) small_volume_slider_vertical_pane_g1

0x775a,	// (0x000355b4) small_volume_slider_vertical_pane_g2

0xd7b5,	// (0x0003b60f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003db5f) small_volume_slider_vertical_pane_g

0x97e5,	// (0x0003763f) area_side_right_pane_ParamLimits

0x97e5,	// (0x0003763f) area_side_right_pane

0xb202,	// (0x0003905c) aid_size_side_button_ParamLimits

0xb202,	// (0x0003905c) aid_size_side_button

0xb216,	// (0x00039070) grid_sctrl_middle_pane_ParamLimits

0xb216,	// (0x00039070) grid_sctrl_middle_pane

0xb236,	// (0x00039090) sctrl_sk_bottom_pane

0xb247,	// (0x000390a1) sctrl_sk_top_pane

0xb259,	// (0x000390b3) aid_touch_sctrl_top

0x42c0,	// (0x0003211a) bg_sctrl_sk_pane_ParamLimits

0x42c0,	// (0x0003211a) bg_sctrl_sk_pane

0xb266,	// (0x000390c0) sctrl_sk_top_pane_g1

0xb273,	// (0x000390cd) sctrl_sk_top_pane_t1

0xb259,	// (0x000390b3) aid_touch_sctrl_bottom

0x42c0,	// (0x0003211a) bg_sctrl_sk_pane_cp_ParamLimits

0x42c0,	// (0x0003211a) bg_sctrl_sk_pane_cp

0xb28e,	// (0x000390e8) sctrl_sk_bottom_pane_g1

0xb273,	// (0x000390cd) sctrl_sk_bottom_pane_t1

0xb297,	// (0x000390f1) cell_sctrl_middle_pane_ParamLimits

0xb297,	// (0x000390f1) cell_sctrl_middle_pane

0xb2b2,	// (0x0003910c) aid_touch_sctrl_middle_ParamLimits

0xb2b2,	// (0x0003910c) aid_touch_sctrl_middle

0x4a15,	// (0x0003286f) bg_sctrl_middle_pane_ParamLimits

0x4a15,	// (0x0003286f) bg_sctrl_middle_pane

0x79e1,	// (0x0003583b) cell_sctrl_middle_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) cell_sctrl_middle_pane_g1

0xb2c4,	// (0x0003911e) cell_sctrl_middle_pane_g2_ParamLimits

0xb2c4,	// (0x0003911e) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003db6b) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003db6b) cell_sctrl_middle_pane_g

0x59a4,	// (0x000337fe) bg_sctrl_middle_pane_g1

0x59b4,	// (0x0003380e) bg_sctrl_middle_pane_g2

0x59ac,	// (0x00033806) bg_sctrl_middle_pane_g3

0x59c4,	// (0x0003381e) bg_sctrl_middle_pane_g4

0x59bc,	// (0x00033816) bg_sctrl_middle_pane_g5

0x59cc,	// (0x00033826) bg_sctrl_middle_pane_g6

0x59d4,	// (0x0003382e) bg_sctrl_middle_pane_g7

0x59e4,	// (0x0003383e) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003db70) bg_sctrl_middle_pane_g

0x59dc,	// (0x00033836) bg_sctrl_middle_pane_g8_copy1

0x59a4,	// (0x000337fe) bg_sctrl_sk_pane_g1

0x59b4,	// (0x0003380e) bg_sctrl_sk_pane_g2

0x59ac,	// (0x00033806) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0003d6d6) bg_sctrl_sk_pane_g

0x494e,	// (0x000327a8) aid_size_touch_scroll_bar

0x59c4,	// (0x0003381e) bg_sctrl_sk_pane_g4

0x59bc,	// (0x00033816) bg_sctrl_sk_pane_g5

0x59cc,	// (0x00033826) bg_sctrl_sk_pane_g6

0x59d4,	// (0x0003382e) bg_sctrl_sk_pane_g7

0x59e4,	// (0x0003383e) bg_sctrl_sk_pane_g8

0x59dc,	// (0x00033836) bg_sctrl_sk_pane_g9

0x56d8,	// (0x00033532) popup_fep_china_hwr2_fs_candidate_window

0xa84c,	// (0x000386a6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa84c,	// (0x000386a6) popup_fep_china_hwr2_fs_control_window

0x79e1,	// (0x0003583b) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003db66) sctrl_sk_top_pane_g

0xd7be,	// (0x0003b618) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7be,	// (0x0003b618) aid_fep_china_hwr2_fs_cell

0xd7d0,	// (0x0003b62a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d0,	// (0x0003b62a) bg_popup_fep_shadow_pane_cp4

0xd7e7,	// (0x0003b641) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7e7,	// (0x0003b641) bg_popup_fep_shadow_pane_cp5

0xd7f9,	// (0x0003b653) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7f9,	// (0x0003b653) popup_fep_china_hwr2_fs_control_bar_grid

0xd809,	// (0x0003b663) popup_fep_china_hwr2_fs_control_funtion_grid

0xd811,	// (0x0003b66b) aid_fep_china_hwr2_fs_candi_cell

0x411d,	// (0x00031f77) bg_popup_fep_shadow_pane_cp6

0xd81b,	// (0x0003b675) popup_fep_china_hwr2_fs_candidate_grid

0xd825,	// (0x0003b67f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd825,	// (0x0003b67f) cell_fep_china_hwr2_fs_funtion_grid

0x775a,	// (0x000355b4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd83d,	// (0x0003b697) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd83d,	// (0x0003b697) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd84b,	// (0x0003b6a5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd84b,	// (0x0003b6a5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003db81) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003db81) cell_fep_china_hwr2_fs_funtion_grid_g

0xd861,	// (0x0003b6bb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd861,	// (0x0003b6bb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd876,	// (0x0003b6d0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd876,	// (0x0003b6d0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003db86) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003db86) cell_fep_china_hwr2_fs_funtion_grid_t

0xd892,	// (0x0003b6ec) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd89a,	// (0x0003b6f4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8a2,	// (0x0003b6fc) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003db8b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8aa,	// (0x0003b704) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8aa,	// (0x0003b704) cell_fep_china_hwr2_fs_candidate_grid

0xd8c3,	// (0x0003b71d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8cb,	// (0x0003b725) popup_fep_china_hwr2_fs_candidate_grid_g21

0x775a,	// (0x000355b4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x775a,	// (0x000355b4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0003d9b2) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8d3,	// (0x0003b72d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x57e5,	// (0x0003363f) clock_nsta_pane_cp_24_ParamLimits

0x57e5,	// (0x0003363f) clock_nsta_pane_cp_24

0x584d,	// (0x000336a7) indicator_nsta_pane_cp_24_ParamLimits

0x584d,	// (0x000336a7) indicator_nsta_pane_cp_24

0x65af,	// (0x00034409) heading_pane_g1

0x0001,

0xf8e1,	// (0x0003d73b) heading_pane_g

0x6c13,	// (0x00034a6d) grid_sct_catagory_button_pane

0x6513,	// (0x0003436d) scroll_pane_cp5_ParamLimits

0x74c3,	// (0x0003531d) button_value_adjust_pane_cp5_ParamLimits

0x74c3,	// (0x0003531d) button_value_adjust_pane_cp5

0x7581,	// (0x000353db) form2_midp_time_pane_ParamLimits

0xd8e1,	// (0x0003b73b) cell_sct_catagory_button_pane_ParamLimits

0xd8e1,	// (0x0003b73b) cell_sct_catagory_button_pane

0x771f,	// (0x00035579) bg_button_pane_cp01_ParamLimits

0x771f,	// (0x00035579) bg_button_pane_cp01

0x775a,	// (0x000355b4) cell_sct_catagory_button_pane_g1

0xbd75,	// (0x00039bcf) popup_tb_extension_window

0xd8f3,	// (0x0003b74d) aid_size_cell_ext_ParamLimits

0xd8f3,	// (0x0003b74d) aid_size_cell_ext

0x42c0,	// (0x0003211a) bg_tb_trans_pane_cp1_ParamLimits

0x42c0,	// (0x0003211a) bg_tb_trans_pane_cp1

0xd913,	// (0x0003b76d) grid_tb_ext_pane_ParamLimits

0xd913,	// (0x0003b76d) grid_tb_ext_pane

0xd945,	// (0x0003b79f) cell_tb_ext_pane_ParamLimits

0xd945,	// (0x0003b79f) cell_tb_ext_pane

0xd95c,	// (0x0003b7b6) cell_tb_ext_pane_g1_ParamLimits

0xd95c,	// (0x0003b7b6) cell_tb_ext_pane_g1

0xd979,	// (0x0003b7d3) cell_tb_ext_pane_t1

0x42c0,	// (0x0003211a) list_highlight_pane_cp11_ParamLimits

0x42c0,	// (0x0003211a) list_highlight_pane_cp11

0x9a34,	// (0x0003788e) popup_uni_indicator_window_ParamLimits

0x9a34,	// (0x0003788e) popup_uni_indicator_window

0x4a15,	// (0x0003286f) bg_popup_sub_pane_cp14

0xd994,	// (0x0003b7ee) list_uniindi_pane

0xd9a0,	// (0x0003b7fa) uniindi_top_pane

0x42c0,	// (0x0003211a) bg_uniindi_top_pane

0xd9bf,	// (0x0003b819) uniindi_top_pane_g1

0xd9d5,	// (0x0003b82f) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003db92) uniindi_top_pane_g

0xd9ff,	// (0x0003b859) uniindi_top_pane_t1

0xda29,	// (0x0003b883) list_single_uniindi_pane_ParamLimits

0xda29,	// (0x0003b883) list_single_uniindi_pane

0x775a,	// (0x000355b4) bg_uniindi_top_pane_g1

0xda3b,	// (0x0003b895) list_single_uniindi_pane_g1

0xda4e,	// (0x0003b8a8) list_single_uniindi_pane_t1

0x411d,	// (0x00031f77) control_bg_pane

0xda73,	// (0x0003b8cd) bg_sctrl_sk_pane_cp1

0xda7c,	// (0x0003b8d6) bg_sctrl_sk_pane_cp2

0xda85,	// (0x0003b8df) control_bg_pane_g1

0xda8e,	// (0x0003b8e8) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003db9b) control_bg_pane_g

0x739a,	// (0x000351f4) cell_indicator_nsta_pane_g1_ParamLimits

0xc70f,	// (0x0003a569) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0003d916) cell_indicator_nsta_pane_g_ParamLimits

0x93d7,	// (0x00037231) form2_midp_time_pane_t1_ParamLimits

0x4790,	// (0x000325ea) main_idle_act4_pane_ParamLimits

0x4790,	// (0x000325ea) main_idle_act4_pane

0xbd75,	// (0x00039bcf) popup_tb_extension_window_ParamLimits

0xd935,	// (0x0003b78f) tb_ext_find_pane_ParamLimits

0xd935,	// (0x0003b78f) tb_ext_find_pane

0xda97,	// (0x0003b8f1) ai_gene_pane_1_cp1

0x54de,	// (0x00033338) ai_gene_pane_2_cp1

0xda9f,	// (0x0003b8f9) list_single_idle_plugin_calendar_pane

0xdaa8,	// (0x0003b902) list_single_idle_plugin_notification_pane

0xdab1,	// (0x0003b90b) list_single_idle_plugin_player_pane

0xdaba,	// (0x0003b914) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaba,	// (0x0003b914) list_single_idle_plugin_shortcut_pane

0xdadc,	// (0x0003b936) main_idle_act4_pane_t1

0xdaee,	// (0x0003b948) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003dba0) main_idle_act4_pane_t

0xdb00,	// (0x0003b95a) middle_sk_idle_act4_pane_ParamLimits

0xdb00,	// (0x0003b95a) middle_sk_idle_act4_pane

0xdb16,	// (0x0003b970) popup_clock_digital_analogue_window_cp2

0xdb30,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb30,	// (0x0003b98a) shortcut_wheel_idle_act4_pane

0x775a,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g1

0x775a,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g2

0x775a,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g3

0x775a,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g4

0x775a,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g5

0xdb44,	// (0x0003b99e) shortcut_wheel_idle_act4_pane_g6

0xdb4c,	// (0x0003b9a6) shortcut_wheel_idle_act4_pane_g7

0xdb54,	// (0x0003b9ae) shortcut_wheel_idle_act4_pane_g8

0xdb5c,	// (0x0003b9b6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003dba5) shortcut_wheel_idle_act4_pane_g

0x79e1,	// (0x0003583b) middle_sk_idle_act4_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) middle_sk_idle_act4_pane_g1

0xdbc0,	// (0x0003ba1a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbc0,	// (0x0003ba1a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003dbc8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003dbc8) middle_sk_idle_act4_pane_g

0xdbcc,	// (0x0003ba26) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbcc,	// (0x0003ba26) middle_sk_idle_act4_pane_t1

0xdbe9,	// (0x0003ba43) grid_ai_shortcut_pane_ParamLimits

0xdbe9,	// (0x0003ba43) grid_ai_shortcut_pane

0xdc02,	// (0x0003ba5c) list_highlight_pane_cp16_ParamLimits

0xdc02,	// (0x0003ba5c) list_highlight_pane_cp16

0xdc0f,	// (0x0003ba69) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x0003ba69) list_single_idle_plugin_shortcut_pane_g1

0xdc1b,	// (0x0003ba75) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc1b,	// (0x0003ba75) list_single_idle_plugin_shortcut_pane_g2

0xdc33,	// (0x0003ba8d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc33,	// (0x0003ba8d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003dbcd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003dbcd) list_single_idle_plugin_shortcut_pane_g

0xdc46,	// (0x0003baa0) cell_ai_shortcut_pane_ParamLimits

0xdc46,	// (0x0003baa0) cell_ai_shortcut_pane

0xdc67,	// (0x0003bac1) cell_ai_shortcut_pane_g1_ParamLimits

0xdc67,	// (0x0003bac1) cell_ai_shortcut_pane_g1

0xda97,	// (0x0003b8f1) ai_gene_pane_1_cp2

0xdc89,	// (0x0003bae3) ai_gene_pane_2_cp2

0xdc91,	// (0x0003baeb) list_highlight_pane_cp15

0xdc9a,	// (0x0003baf4) list_single_idle_plugin_calendar_pane_g1

0xdc91,	// (0x0003baeb) list_highlight_pane_cp17

0xdca2,	// (0x0003bafc) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcaa,	// (0x0003bb04) list_single_idle_plugin_player_pane_g1

0x6e28,	// (0x00034c82) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003dbd4) list_single_idle_plugin_player_pane_g

0xdcb2,	// (0x0003bb0c) list_single_idle_plugin_player_pane_t1

0xdcc0,	// (0x0003bb1a) list_single_idle_plugin_player_pane_t2

0xdcce,	// (0x0003bb28) list_single_idle_plugin_player_pane_t3

0xdcdc,	// (0x0003bb36) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003dbd9) list_single_idle_plugin_player_pane_t

0xdcea,	// (0x0003bb44) wait_bar_pane_cp15

0xdcf2,	// (0x0003bb4c) grid_ai_notification_pane

0x6e28,	// (0x00034c82) list_single_idle_plugin_notification_pane_g1

0xdcfb,	// (0x0003bb55) cell_ai_notification_pane_ParamLimits

0xdcfb,	// (0x0003bb55) cell_ai_notification_pane

0xdd08,	// (0x0003bb62) cell_ai_notification_pane_g1

0xdd10,	// (0x0003bb6a) cell_ai_notification_pane_t1

0xdd1e,	// (0x0003bb78) tb_ext_find_button_pane

0xdd26,	// (0x0003bb80) tb_ext_find_pane_g1

0xdd2e,	// (0x0003bb88) tb_ext_find_pane_t1

0x4f4d,	// (0x00032da7) tb_ext_find_button_pane_g1

0xdd3c,	// (0x0003bb96) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003dbe2) tb_ext_find_button_pane_g

0xdadc,	// (0x0003b936) main_idle_act4_pane_t1_ParamLimits

0xdaee,	// (0x0003b948) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003dba0) main_idle_act4_pane_t_ParamLimits

0xdb16,	// (0x0003b970) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb24,	// (0x0003b97e) sat_plugin_idle_act4_pane_ParamLimits

0xdb24,	// (0x0003b97e) sat_plugin_idle_act4_pane

0xdd45,	// (0x0003bb9f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd45,	// (0x0003bb9f) sat_plugin_idle_act4_pane_t1

0xdd58,	// (0x0003bbb2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd58,	// (0x0003bbb2) sat_plugin_idle_act4_pane_t2

0xdd6b,	// (0x0003bbc5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd6b,	// (0x0003bbc5) sat_plugin_idle_act4_pane_t3

0xdd7e,	// (0x0003bbd8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd7e,	// (0x0003bbd8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003dbe7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003dbe7) sat_plugin_idle_act4_pane_t

0x997d,	// (0x000377d7) popup_battery_window_ParamLimits

0x997d,	// (0x000377d7) popup_battery_window

0x42c0,	// (0x0003211a) bg_popup_sub_pane_cp25_ParamLimits

0x42c0,	// (0x0003211a) bg_popup_sub_pane_cp25

0xdd91,	// (0x0003bbeb) popup_battery_window_g1_ParamLimits

0xdd91,	// (0x0003bbeb) popup_battery_window_g1

0xdd9d,	// (0x0003bbf7) popup_battery_window_t1_ParamLimits

0xdd9d,	// (0x0003bbf7) popup_battery_window_t1

0xddaf,	// (0x0003bc09) popup_battery_window_t2_ParamLimits

0xddaf,	// (0x0003bc09) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003dbf0) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003dbf0) popup_battery_window_t

0xa4d5,	// (0x0003832f) midp_canvas_pane_ParamLimits

0xa539,	// (0x00038393) midp_keypad_pane_ParamLimits

0xa539,	// (0x00038393) midp_keypad_pane

0x4b6c,	// (0x000329c6) main_midp_pane_ParamLimits

0x7476,	// (0x000352d0) signal_pane_g2_cp_ParamLimits

0xddcc,	// (0x0003bc26) aid_size_cell_midp_keypad_ParamLimits

0xddcc,	// (0x0003bc26) aid_size_cell_midp_keypad

0xdde6,	// (0x0003bc40) midp_keyp_game_grid_pane_ParamLimits

0xdde6,	// (0x0003bc40) midp_keyp_game_grid_pane

0xde06,	// (0x0003bc60) midp_keyp_rocker_pane_ParamLimits

0xde06,	// (0x0003bc60) midp_keyp_rocker_pane

0xde3f,	// (0x0003bc99) midp_keyp_sk_left_pane_ParamLimits

0xde3f,	// (0x0003bc99) midp_keyp_sk_left_pane

0xde99,	// (0x0003bcf3) midp_keyp_sk_right_pane_ParamLimits

0xde99,	// (0x0003bcf3) midp_keyp_sk_right_pane

0x411d,	// (0x00031f77) bg_button_pane_cp03

0xdef3,	// (0x0003bd4d) midp_keyp_sk_left_pane_g1

0x411d,	// (0x00031f77) bg_button_pane_cp04

0xdef3,	// (0x0003bd4d) midp_keyp_sk_right_pane_g1

0x775a,	// (0x000355b4) midp_keyp_rocker_pane_g1

0xdefc,	// (0x0003bd56) keyp_game_cell_pane_ParamLimits

0xdefc,	// (0x0003bd56) keyp_game_cell_pane

0x411d,	// (0x00031f77) bg_button_pane_cp02

0xdf0f,	// (0x0003bd69) keyp_game_cell_pane_g1

0x99b3,	// (0x0003780d) popup_fep_vkb2_window_ParamLimits

0x99b3,	// (0x0003780d) popup_fep_vkb2_window

0xb2e2,	// (0x0003913c) aid_size_cell_vkb2_ParamLimits

0xb2e2,	// (0x0003913c) aid_size_cell_vkb2

0xb336,	// (0x00039190) popup_fep_vkb2_window_g1_ParamLimits

0xb336,	// (0x00039190) popup_fep_vkb2_window_g1

0xb376,	// (0x000391d0) vkb2_area_bottom_pane_ParamLimits

0xb376,	// (0x000391d0) vkb2_area_bottom_pane

0xb3c2,	// (0x0003921c) vkb2_area_keypad_pane_ParamLimits

0xb3c2,	// (0x0003921c) vkb2_area_keypad_pane

0xb404,	// (0x0003925e) vkb2_area_top_pane_ParamLimits

0xb404,	// (0x0003925e) vkb2_area_top_pane

0xb47e,	// (0x000392d8) vkb2_top_entry_pane_ParamLimits

0xb47e,	// (0x000392d8) vkb2_top_entry_pane

0xb4a8,	// (0x00039302) vkb2_top_grid_left_pane_ParamLimits

0xb4a8,	// (0x00039302) vkb2_top_grid_left_pane

0xb4c6,	// (0x00039320) vkb2_top_grid_right_pane_ParamLimits

0xb4c6,	// (0x00039320) vkb2_top_grid_right_pane

0xb4e4,	// (0x0003933e) vkb2_cell_keypad_pane_ParamLimits

0xb4e4,	// (0x0003933e) vkb2_cell_keypad_pane

0xb5b5,	// (0x0003940f) vkb2_area_bottom_grid_pane_ParamLimits

0xb5b5,	// (0x0003940f) vkb2_area_bottom_grid_pane

0xb5db,	// (0x00039435) vkb2_area_bottom_pane_g1_ParamLimits

0xb5db,	// (0x00039435) vkb2_area_bottom_pane_g1

0xb5ff,	// (0x00039459) vkb2_area_bottom_pane_g2_ParamLimits

0xb5ff,	// (0x00039459) vkb2_area_bottom_pane_g2

0xb62d,	// (0x00039487) vkb2_area_bottom_pane_g3_ParamLimits

0xb62d,	// (0x00039487) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003dbf5) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003dbf5) vkb2_area_bottom_pane_g

0xb68e,	// (0x000394e8) vkb2_top_cell_left_pane_ParamLimits

0xb68e,	// (0x000394e8) vkb2_top_cell_left_pane

0xdf20,	// (0x0003bd7a) vkb2_top_entry_pane_g1_ParamLimits

0xdf20,	// (0x0003bd7a) vkb2_top_entry_pane_g1

0xdf2e,	// (0x0003bd88) vkb2_top_entry_pane_t1_ParamLimits

0xdf2e,	// (0x0003bd88) vkb2_top_entry_pane_t1

0xdf60,	// (0x0003bdba) vkb2_top_entry_pane_t2_ParamLimits

0xdf60,	// (0x0003bdba) vkb2_top_entry_pane_t2

0xdf92,	// (0x0003bdec) vkb2_top_entry_pane_t3_ParamLimits

0xdf92,	// (0x0003bdec) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003dbfc) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003dbfc) vkb2_top_entry_pane_t

0xb6db,	// (0x00039535) vkb2_top_grid_right_pane_g1_ParamLimits

0xb6db,	// (0x00039535) vkb2_top_grid_right_pane_g1

0xb6f1,	// (0x0003954b) vkb2_top_grid_right_pane_g2_ParamLimits

0xb6f1,	// (0x0003954b) vkb2_top_grid_right_pane_g2

0xb709,	// (0x00039563) vkb2_top_grid_right_pane_g3_ParamLimits

0xb709,	// (0x00039563) vkb2_top_grid_right_pane_g3

0xb721,	// (0x0003957b) vkb2_top_grid_right_pane_g4_ParamLimits

0xb721,	// (0x0003957b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003dc03) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003dc03) vkb2_top_grid_right_pane_g

0xb737,	// (0x00039591) vkb2_top_cell_left_pane_g1

0xb74e,	// (0x000395a8) vkb2_cell_keypad_pane_g1_ParamLimits

0xb74e,	// (0x000395a8) vkb2_cell_keypad_pane_g1

0xdfb6,	// (0x0003be10) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfb6,	// (0x0003be10) vkb2_cell_keypad_pane_t1

0xb75c,	// (0x000395b6) vkb2_cell_bottom_grid_pane_ParamLimits

0xb75c,	// (0x000395b6) vkb2_cell_bottom_grid_pane

0xb795,	// (0x000395ef) vkb2_cell_bottom_grid_pane_g1

0xdb64,	// (0x0003b9be) aid_call2_pane_cp02

0xdb6c,	// (0x0003b9c6) aid_call_pane_cp02

0xdb74,	// (0x0003b9ce) clock_digital_number_pane_cp10

0xdb7c,	// (0x0003b9d6) clock_digital_number_pane_cp11

0xdb84,	// (0x0003b9de) clock_digital_number_pane_cp12

0xdb8c,	// (0x0003b9e6) clock_digital_number_pane_cp13

0xdb94,	// (0x0003b9ee) clock_digital_separator_pane_cp10

0x4f4d,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g1

0x4f4d,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g2

0xdb9c,	// (0x0003b9f6) popup_clock_digital_analogue_window_cp2_g3

0x4f4d,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g4

0xdb9c,	// (0x0003b9f6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003dbb8) popup_clock_digital_analogue_window_cp2_g

0xdba4,	// (0x0003b9fe) popup_clock_digital_analogue_window_cp2_t1

0xdbb2,	// (0x0003ba0c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003dbc3) popup_clock_digital_analogue_window_cp2_t

0x775a,	// (0x000355b4) clock_digital_number_pane_cp10_g1

0x775a,	// (0x000355b4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d9b2) clock_digital_number_pane_cp10_g

0x775a,	// (0x000355b4) clock_digital_separator_pane_cp10_g1

0x775a,	// (0x000355b4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d9b2) clock_digital_separator_pane_cp10_g

0xd9e1,	// (0x0003b83b) uniindi_top_pane_g3

0xd9f2,	// (0x0003b84c) uniindi_top_pane_g4

0xb56f,	// (0x000393c9) vkb2_row_keypad_pane_ParamLimits

0xb56f,	// (0x000393c9) vkb2_row_keypad_pane

0xb7b5,	// (0x0003960f) vkb2_cell_t_keypad_pane_ParamLimits

0xb7b5,	// (0x0003960f) vkb2_cell_t_keypad_pane

0xb7c5,	// (0x0003961f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb7c5,	// (0x0003961f) vkb2_cell_t_keypad_pane_cp08

0xb7d8,	// (0x00039632) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb7d8,	// (0x00039632) vkb2_cell_t_keypad_pane_cp09

0xb7ec,	// (0x00039646) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb7ec,	// (0x00039646) vkb2_cell_t_keypad_pane_cp01

0xb7fd,	// (0x00039657) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb7fd,	// (0x00039657) vkb2_cell_t_keypad_pane_cp02

0xb80e,	// (0x00039668) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb80e,	// (0x00039668) vkb2_cell_t_keypad_pane_cp03

0xb81f,	// (0x00039679) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb81f,	// (0x00039679) vkb2_cell_t_keypad_pane_cp04

0xb830,	// (0x0003968a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb830,	// (0x0003968a) vkb2_cell_t_keypad_pane_cp05

0xb841,	// (0x0003969b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb841,	// (0x0003969b) vkb2_cell_t_keypad_pane_cp06

0xb852,	// (0x000396ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb852,	// (0x000396ac) vkb2_cell_t_keypad_pane_cp07

0xb863,	// (0x000396bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb863,	// (0x000396bd) vkb2_cell_t_keypad_pane_cp10

0x79e1,	// (0x0003583b) vkb2_cell_t_keypad_pane_g1

0xdfcd,	// (0x0003be27) vkb2_cell_t_keypad_pane_t1

0x411d,	// (0x00031f77) popup_grid_graphic2_window

0xecbb,	// (0x0003cb15) aid_size_cell_graphic2_ParamLimits

0xecbb,	// (0x0003cb15) aid_size_cell_graphic2

0xecf3,	// (0x0003cb4d) bg_popup_window_pane_cp21_ParamLimits

0xecf3,	// (0x0003cb4d) bg_popup_window_pane_cp21

0xed01,	// (0x0003cb5b) graphic2_pages_pane_ParamLimits

0xed01,	// (0x0003cb5b) graphic2_pages_pane

0xed47,	// (0x0003cba1) grid_graphic2_control_pane_ParamLimits

0xed47,	// (0x0003cba1) grid_graphic2_control_pane

0xed85,	// (0x0003cbdf) grid_graphic2_pane_ParamLimits

0xed85,	// (0x0003cbdf) grid_graphic2_pane

0xedf9,	// (0x0003cc53) cell_graphic2_pane

0x411d,	// (0x00031f77) main_comp_mode_pane

0xd244,	// (0x0003b09e) list_ai3_gene_pane_ParamLimits

0xd627,	// (0x0003b481) bg_popup_window_pane_cp19_ParamLimits

0xd633,	// (0x0003b48d) bg_touch_area_indi_pane_ParamLimits

0xd633,	// (0x0003b48d) bg_touch_area_indi_pane

0xd649,	// (0x0003b4a3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd649,	// (0x0003b4a3) bg_touch_area_indi_pane_cp01

0xd65f,	// (0x0003b4b9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd65f,	// (0x0003b4b9) bg_touch_area_indi_pane_cp02

0xd677,	// (0x0003b4d1) bg_touch_area_indi_pane_cp03_ParamLimits

0xd677,	// (0x0003b4d1) bg_touch_area_indi_pane_cp03

0xd691,	// (0x0003b4eb) popup_slider_window_g1_ParamLimits

0xd6ad,	// (0x0003b507) popup_slider_window_g2_ParamLimits

0xd6c9,	// (0x0003b523) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003db4d) popup_slider_window_g_ParamLimits

0xd725,	// (0x0003b57f) popup_slider_window_t1_ParamLimits

0xd799,	// (0x0003b5f3) small_volume_slider_vertical_pane_ParamLimits

0xedf9,	// (0x0003cc53) cell_graphic2_pane_ParamLimits

0xee47,	// (0x0003cca1) bg_button_pane_cp10_ParamLimits

0xee47,	// (0x0003cca1) bg_button_pane_cp10

0xef25,	// (0x0003cd7f) bg_button_pane_cp11_ParamLimits

0xef25,	// (0x0003cd7f) bg_button_pane_cp11

0xef38,	// (0x0003cd92) graphic2_pages_pane_g1_ParamLimits

0xef38,	// (0x0003cd92) graphic2_pages_pane_g1

0xef53,	// (0x0003cdad) graphic2_pages_pane_g2_ParamLimits

0xef53,	// (0x0003cdad) graphic2_pages_pane_g2

0x0001,

0x05eb,	// (0x0002e445) graphic2_pages_pane_g_ParamLimits

0x05eb,	// (0x0002e445) graphic2_pages_pane_g

0xef6b,	// (0x0003cdc5) graphic2_pages_pane_t1_ParamLimits

0xef6b,	// (0x0003cdc5) graphic2_pages_pane_t1

0xef81,	// (0x0003cddb) cell_graphic2_control_pane_ParamLimits

0xef81,	// (0x0003cddb) cell_graphic2_control_pane

0xefa2,	// (0x0003cdfc) cell_graphic2_pane_g1_ParamLimits

0xefa2,	// (0x0003cdfc) cell_graphic2_pane_g1

0xefaf,	// (0x0003ce09) cell_graphic2_pane_g2_ParamLimits

0xefaf,	// (0x0003ce09) cell_graphic2_pane_g2

0xefbc,	// (0x0003ce16) cell_graphic2_pane_g3_ParamLimits

0xefbc,	// (0x0003ce16) cell_graphic2_pane_g3

0xefc9,	// (0x0003ce23) cell_graphic2_pane_g4_ParamLimits

0xefc9,	// (0x0003ce23) cell_graphic2_pane_g4

0xefd6,	// (0x0003ce30) cell_graphic2_pane_g5_ParamLimits

0xefd6,	// (0x0003ce30) cell_graphic2_pane_g5

0x0004,

0x05f0,	// (0x0002e44a) cell_graphic2_pane_g_ParamLimits

0x05f0,	// (0x0002e44a) cell_graphic2_pane_g

0xeff1,	// (0x0003ce4b) cell_graphic2_pane_t1_ParamLimits

0xeff1,	// (0x0003ce4b) cell_graphic2_pane_t1

0x5a94,	// (0x000338ee) grid_highlight_pane_cp11_ParamLimits

0x5a94,	// (0x000338ee) grid_highlight_pane_cp11

0x42c0,	// (0x0003211a) bg_button_pane_cp05

0xf01a,	// (0x0003ce74) cell_graphic2_control_pane_g1

0x775a,	// (0x000355b4) bg_touch_area_indi_pane_g1

0xdfdf,	// (0x0003be39) aid_cmod_rocker_key_size

0xdfe9,	// (0x0003be43) aid_cmode_itu_key_size

0xdff3,	// (0x0003be4d) main_cmode_video_pane

0xdffd,	// (0x0003be57) main_comp_mode_itu_pane

0xe009,	// (0x0003be63) main_comp_mode_rocker_pane

0xe015,	// (0x0003be6f) cell_cmode_rocker_pane_ParamLimits

0xe015,	// (0x0003be6f) cell_cmode_rocker_pane

0xe027,	// (0x0003be81) cell_cmode_itu_pane_ParamLimits

0xe027,	// (0x0003be81) cell_cmode_itu_pane

0x4a15,	// (0x0003286f) bg_button_pane_cp06_ParamLimits

0x4a15,	// (0x0003286f) bg_button_pane_cp06

0x79e1,	// (0x0003583b) cell_cmode_rocker_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) cell_cmode_rocker_pane_g1

0xd83d,	// (0x0003b697) cell_cmode_rocker_pane_g2_ParamLimits

0xd83d,	// (0x0003b697) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0003dc11) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0003dc11) cell_cmode_rocker_pane_g

0x411d,	// (0x00031f77) bg_button_pane_cp07

0xe03c,	// (0x0003be96) cell_cmode_itu_pane_g1

0xe045,	// (0x0003be9f) cell_cmode_itu_pane_t1

0xe074,	// (0x0003bece) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0003dc16) cell_cmode_itu_pane_t

0xda63,	// (0x0003b8bd) aid_touch_ctrl_left

0xda6b,	// (0x0003b8c5) aid_touch_ctrl_right

0x411d,	// (0x00031f77) compa_mode_pane

0xf042,	// (0x0003ce9c) aid_cmod_rocker_key_size_cp

0xf04c,	// (0x0003cea6) aid_cmode_itu_key_size_cp

0xe082,	// (0x0003bedc) compa_mode_pane_g1

0xe08a,	// (0x0003bee4) compa_mode_pane_g2

0xe092,	// (0x0003beec) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0003dc1b) compa_mode_pane_g

0xf056,	// (0x0003ceb0) main_comp_mode_itu_pane_cp

0xf05e,	// (0x0003ceb8) main_comp_mode_rocker_pane_cp

0xf066,	// (0x0003cec0) cell_cmode_itu_pane_cp_ParamLimits

0xf066,	// (0x0003cec0) cell_cmode_itu_pane_cp

0xf07b,	// (0x0003ced5) cell_cmode_rocker_pane_cp_ParamLimits

0xf07b,	// (0x0003ced5) cell_cmode_rocker_pane_cp

0x4a15,	// (0x0003286f) bg_button_pane_cp06_cp_ParamLimits

0x4a15,	// (0x0003286f) bg_button_pane_cp06_cp

0x79e1,	// (0x0003583b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x79e1,	// (0x0003583b) cell_cmode_rocker_pane_g1_cp

0x775a,	// (0x000355b4) cell_cmode_rocker_pane_g2_cp

0x411d,	// (0x00031f77) bg_button_pane_cp07_cp

0xf08d,	// (0x0003cee7) cell_cmode_itu_pane_g1_cp

0xf096,	// (0x0003cef0) cell_cmode_itu_pane_t1_cp

0xf096,	// (0x0003cef0) cell_cmode_itu_pane_t2_cp

0xc5ab,	// (0x0003a405) settings_code_pane_cp2

0x418d,	// (0x00031fe7) bg_popup_window_pane_cp3_ParamLimits

0x46cf,	// (0x00032529) heading_pane_cp3_ParamLimits

0x46db,	// (0x00032535) listscroll_popup_graphic_pane_ParamLimits

0xae39,	// (0x00038c93) fep_hwr_aid_pane_ParamLimits

0xb259,	// (0x000390b3) aid_touch_sctrl_top_ParamLimits

0xb266,	// (0x000390c0) sctrl_sk_top_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003db66) sctrl_sk_top_pane_g_ParamLimits

0xb273,	// (0x000390cd) sctrl_sk_top_pane_t1_ParamLimits

0xb259,	// (0x000390b3) aid_touch_sctrl_bottom_ParamLimits

0xb273,	// (0x000390cd) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9ad,	// (0x0003b807) aid_area_touch_clock

0xb446,	// (0x000392a0) aid_vkb2_area_top_pane_cell_ParamLimits

0xb446,	// (0x000392a0) aid_vkb2_area_top_pane_cell

0xb591,	// (0x000393eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb591,	// (0x000393eb) aid_vkb2_area_bottom_pane_cell

0xdf18,	// (0x0003bd72) popup_char_count_window

0xe09a,	// (0x0003bef4) popup_char_count_window_g1

0xe0a3,	// (0x0003befd) popup_char_count_window_g2

0xe0ac,	// (0x0003bf06) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0003dc22) popup_char_count_window_g

0xe0b5,	// (0x0003bf0f) popup_char_count_window_t1

0xb314,	// (0x0003916e) popup_fep_char_preview_window_ParamLimits

0xb314,	// (0x0003916e) popup_fep_char_preview_window

0xb464,	// (0x000392be) vkb2_top_candi_pane_ParamLimits

0xb464,	// (0x000392be) vkb2_top_candi_pane

0xf0a4,	// (0x0003cefe) cell_vkb2_top_candi_pane_ParamLimits

0xf0a4,	// (0x0003cefe) cell_vkb2_top_candi_pane

0x5f51,	// (0x00033dab) bg_popup_fep_char_preview_window_ParamLimits

0x5f51,	// (0x00033dab) bg_popup_fep_char_preview_window

0xb878,	// (0x000396d2) popup_fep_char_preview_window_t1_ParamLimits

0xb878,	// (0x000396d2) popup_fep_char_preview_window_t1

0xe0c3,	// (0x0003bf1d) bg_popup_fep_char_preview_window_g1

0xe0cb,	// (0x0003bf25) bg_popup_fep_char_preview_window_g2

0xe0d3,	// (0x0003bf2d) bg_popup_fep_char_preview_window_g3

0xe0db,	// (0x0003bf35) bg_popup_fep_char_preview_window_g4

0xe0e3,	// (0x0003bf3d) bg_popup_fep_char_preview_window_g5

0xb8b2,	// (0x0003970c) bg_popup_fep_char_preview_window_g6

0xe0eb,	// (0x0003bf45) bg_popup_fep_char_preview_window_g7

0xe0f3,	// (0x0003bf4d) bg_popup_fep_char_preview_window_g8

0xe0fb,	// (0x0003bf55) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0003dc29) bg_popup_fep_char_preview_window_g

0x79e1,	// (0x0003583b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) cell_vkb2_top_candi_pane_g1

0x7dbd,	// (0x00035c17) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7dbd,	// (0x00035c17) cell_vkb2_top_candi_pane_g2

0x7dde,	// (0x00035c38) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7dde,	// (0x00035c38) cell_vkb2_top_candi_pane_g3

0xb8ba,	// (0x00039714) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb8ba,	// (0x00039714) cell_vkb2_top_candi_pane_g4

0xe053,	// (0x0003bead) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe053,	// (0x0003bead) cell_vkb2_top_candi_pane_g5

0xd83d,	// (0x0003b697) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd83d,	// (0x0003b697) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0003dc3c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0003dc3c) cell_vkb2_top_candi_pane_g

0xb8db,	// (0x00039735) cell_vkb2_top_candi_pane_t1

0xab46,	// (0x000389a0) aid_size_touch_slider_mark_ParamLimits

0xab46,	// (0x000389a0) aid_size_touch_slider_mark

0xed37,	// (0x0003cb91) grid_graphic2_catg_pane_ParamLimits

0xed37,	// (0x0003cb91) grid_graphic2_catg_pane

0xedd5,	// (0x0003cc2f) popup_grid_graphic2_window_t1_ParamLimits

0xedd5,	// (0x0003cc2f) popup_grid_graphic2_window_t1

0xede7,	// (0x0003cc41) popup_grid_graphic2_window_t2_ParamLimits

0xede7,	// (0x0003cc41) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003dc0c) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003dc0c) popup_grid_graphic2_window_t

0x42c0,	// (0x0003211a) bg_button_pane_cp05_ParamLimits

0xf01a,	// (0x0003ce74) cell_graphic2_control_pane_g1_ParamLimits

0xf0f1,	// (0x0003cf4b) cell_graphic2_catg_pane_ParamLimits

0xf0f1,	// (0x0003cf4b) cell_graphic2_catg_pane

0x411d,	// (0x00031f77) bg_button_pane_cp12

0xf103,	// (0x0003cf5d) cell_graphic2_catg_pane_g1

0xd979,	// (0x0003b7d3) cell_tb_ext_pane_t1_ParamLimits

0xb6ae,	// (0x00039508) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb6ae,	// (0x00039508) vkb2_top_cell_right_narrow_pane

0xb6c6,	// (0x00039520) vkb2_top_cell_right_wide_pane_ParamLimits

0xb6c6,	// (0x00039520) vkb2_top_cell_right_wide_pane

0x0e18,	// (0x0002ec72) bg_vkb2_func_pane_ParamLimits

0x0e18,	// (0x0002ec72) bg_vkb2_func_pane

0xb737,	// (0x00039591) vkb2_top_cell_left_pane_g1_ParamLimits

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp03

0xb795,	// (0x000395ef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59b4,	// (0x0003380e) bg_vkb2_func_pane_g1

0x59ac,	// (0x00033806) bg_vkb2_func_pane_g2

0x59bc,	// (0x00033816) bg_vkb2_func_pane_g3

0x59c4,	// (0x0003381e) bg_vkb2_func_pane_g4

0x59cc,	// (0x00033826) bg_vkb2_func_pane_g5

0x59d4,	// (0x0003382e) bg_vkb2_func_pane_g6

0x59e4,	// (0x0003383e) bg_vkb2_func_pane_g7

0x59dc,	// (0x00033836) bg_vkb2_func_pane_g8

0x59a4,	// (0x000337fe) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0003dc49) bg_vkb2_func_pane_g

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp01

0xb737,	// (0x00039591) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb737,	// (0x00039591) vkb2_top_cell_right_wide_pane_g1

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0e18,	// (0x0002ec72) bg_vkb2_fuc_pane_cp02

0xb795,	// (0x000395ef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb795,	// (0x000395ef) vkb2_top_cell_right_narrow_pane_g1

0xd5a5,	// (0x0003b3ff) aid_touch_area_decrease_ParamLimits

0xd5a5,	// (0x0003b3ff) aid_touch_area_decrease

0xd5c9,	// (0x0003b423) aid_touch_area_increase_ParamLimits

0xd5c9,	// (0x0003b423) aid_touch_area_increase

0xd5d5,	// (0x0003b42f) aid_touch_area_mute_ParamLimits

0xd5d5,	// (0x0003b42f) aid_touch_area_mute

0xd5f9,	// (0x0003b453) aid_touch_area_slider_ParamLimits

0xd5f9,	// (0x0003b453) aid_touch_area_slider

0xd6e5,	// (0x0003b53f) popup_slider_window_g4_ParamLimits

0xd6e5,	// (0x0003b53f) popup_slider_window_g4

0xd6f1,	// (0x0003b54b) popup_slider_window_g5_ParamLimits

0xd6f1,	// (0x0003b54b) popup_slider_window_g5

0xd713,	// (0x0003b56d) popup_slider_window_g6_ParamLimits

0xd713,	// (0x0003b56d) popup_slider_window_g6

0xd753,	// (0x0003b5ad) popup_slider_window_t2_ParamLimits

0xd753,	// (0x0003b5ad) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003db5a) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003db5a) popup_slider_window_t

0xd76b,	// (0x0003b5c5) slider_pane_ParamLimits

0xd76b,	// (0x0003b5c5) slider_pane

0xe103,	// (0x0003bf5d) slider_pane_g1_ParamLimits

0xe103,	// (0x0003bf5d) slider_pane_g1

0xe117,	// (0x0003bf71) slider_pane_g2_ParamLimits

0xe117,	// (0x0003bf71) slider_pane_g2

0xe12d,	// (0x0003bf87) slider_pane_g3_ParamLimits

0xe12d,	// (0x0003bf87) slider_pane_g3

0x0003,

0xfe02,	// (0x0003dc5c) slider_pane_g_ParamLimits

0xfe02,	// (0x0003dc5c) slider_pane_g

0xbdd1,	// (0x00039c2b) popup_tb_float_extension_window_ParamLimits

0xbdd1,	// (0x00039c2b) popup_tb_float_extension_window

0xe159,	// (0x0003bfb3) aid_size_cell_tb_float_ext

0x411d,	// (0x00031f77) bg_popup_sub_window_cp28

0xe165,	// (0x0003bfbf) grid_tb_float_ext_pane

0xe16f,	// (0x0003bfc9) cell_tb_float_ext_pane_ParamLimits

0xe16f,	// (0x0003bfc9) cell_tb_float_ext_pane

0xe189,	// (0x0003bfe3) cell_tb_float_ext_pane_g1

0xe192,	// (0x0003bfec) grid_highlight_pane_cp12

0xaf6c,	// (0x00038dc6) cell_last_hwr_side_pane_ParamLimits

0xaf6c,	// (0x00038dc6) cell_last_hwr_side_pane

0x775a,	// (0x000355b4) cell_last_hwr_side_pane_g1

0xe19b,	// (0x0003bff5) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0003dc65) cell_last_hwr_side_pane_g

0xb65d,	// (0x000394b7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb65d,	// (0x000394b7) vkb2_area_bottom_space_btn_pane

0x79e1,	// (0x0003583b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfcd,	// (0x0003be27) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb8db,	// (0x00039735) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb8fa,	// (0x00039754) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb8fa,	// (0x00039754) vkb2_area_bottom_space_btn_pane_g1

0xb934,	// (0x0003978e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb934,	// (0x0003978e) vkb2_area_bottom_space_btn_pane_g2

0xb96a,	// (0x000397c4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb96a,	// (0x000397c4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0003dc6a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0003dc6a) vkb2_area_bottom_space_btn_pane_g

0xaee0,	// (0x00038d3a) cel_fep_hwr_func_pane_ParamLimits

0xaee0,	// (0x00038d3a) cel_fep_hwr_func_pane

0xaf1c,	// (0x00038d76) cell_hwr_side_button_pane_ParamLimits

0xaf1c,	// (0x00038d76) cell_hwr_side_button_pane

0xd9ad,	// (0x0003b807) aid_area_touch_clock_ParamLimits

0x42c0,	// (0x0003211a) bg_uniindi_top_pane_ParamLimits

0xd9bf,	// (0x0003b819) uniindi_top_pane_g1_ParamLimits

0xd9d5,	// (0x0003b82f) uniindi_top_pane_g2_ParamLimits

0xd9e1,	// (0x0003b83b) uniindi_top_pane_g3_ParamLimits

0xd9f2,	// (0x0003b84c) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003db92) uniindi_top_pane_g_ParamLimits

0xd9ff,	// (0x0003b859) uniindi_top_pane_t1_ParamLimits

0x42c0,	// (0x0003211a) bg_vkb2_func_pane_cp01_ParamLimits

0x42c0,	// (0x0003211a) bg_vkb2_func_pane_cp01

0xe1a4,	// (0x0003bffe) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1a4,	// (0x0003bffe) cel_fep_hwr_func_pane_g1

0x42c0,	// (0x0003211a) bg_vkb2_func_pane_cp02_ParamLimits

0x42c0,	// (0x0003211a) bg_vkb2_func_pane_cp02

0xe1a4,	// (0x0003bffe) cell_hwr_side_button_pane_g1_ParamLimits

0xe1a4,	// (0x0003bffe) cell_hwr_side_button_pane_g1

0x58ae,	// (0x00033708) status_pane_g4_ParamLimits

0x58ae,	// (0x00033708) status_pane_g4

0x58c6,	// (0x00033720) status_pane_t1

0x75e9,	// (0x00035443) form2_midp_gauge_slider_cont_pane

0x75f1,	// (0x0003544b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc841,	// (0x0003a69b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc853,	// (0x0003a6ad) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0003d965) form2_midp_gauge_slider_pane_t_ParamLimits

0x7603,	// (0x0003545d) form2_midp_slider_pane_ParamLimits

0xb2d4,	// (0x0003912e) aid_size_cell_func_vkb2_ParamLimits

0xb2d4,	// (0x0003912e) aid_size_cell_func_vkb2

0xe145,	// (0x0003bf9f) slider_pane_g4_ParamLimits

0xe145,	// (0x0003bf9f) slider_pane_g4

0xb9b4,	// (0x0003980e) form2_midp_gauge_slider_pane_t2_cp01

0xb9c2,	// (0x0003981c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb9c2,	// (0x0003981c) form2_midp_gauge_slider_pane_t3_cp01

0xb9df,	// (0x00039839) form2_midp_slider_pane_cp01

0x411d,	// (0x00031f77) navi_smil_pane

0xe1d4,	// (0x0003c02e) navi_smil_pane_g1

0xe1dc,	// (0x0003c036) navi_smil_pane_t1

0xe1b2,	// (0x0003c00c) form2_midp_slider_pane_g1

0xe1bb,	// (0x0003c015) form2_midp_slider_pane_g2

0xe1c3,	// (0x0003c01d) form2_midp_slider_pane_g3

0xe1b2,	// (0x0003c00c) form2_midp_slider_pane_g4

0xf10c,	// (0x0003cf66) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0003dc73) form2_midp_slider_pane_g

0xb9a4,	// (0x000397fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb9a4,	// (0x000397fe) vkb2_area_bottom_space_btn_pane_g4

0xbf3c,	// (0x00039d96) lc0_navi_pane_ParamLimits

0xbf3c,	// (0x00039d96) lc0_navi_pane

0xbfb2,	// (0x00039e0c) lc0_stat_indi_pane_ParamLimits

0xbfb2,	// (0x00039e0c) lc0_stat_indi_pane

0xbfc9,	// (0x00039e23) ls0_title_pane_ParamLimits

0xbfc9,	// (0x00039e23) ls0_title_pane

0x4a15,	// (0x0003286f) bg_popup_sub_pane_cp14_ParamLimits

0xd994,	// (0x0003b7ee) list_uniindi_pane_ParamLimits

0xd9a0,	// (0x0003b7fa) uniindi_top_pane_ParamLimits

0xda3b,	// (0x0003b895) list_single_uniindi_pane_g1_ParamLimits

0xda4e,	// (0x0003b8a8) list_single_uniindi_pane_t1_ParamLimits

0xb9e8,	// (0x00039842) lc0_stat_clock_pane_ParamLimits

0xb9e8,	// (0x00039842) lc0_stat_clock_pane

0xf115,	// (0x0003cf6f) lc0_stat_indi_pane_g1_ParamLimits

0xf115,	// (0x0003cf6f) lc0_stat_indi_pane_g1

0xf122,	// (0x0003cf7c) lc0_stat_indi_pane_g2_ParamLimits

0xf122,	// (0x0003cf7c) lc0_stat_indi_pane_g2

0x0001,

0x066d,	// (0x0002e4c7) lc0_stat_indi_pane_g_ParamLimits

0x066d,	// (0x0002e4c7) lc0_stat_indi_pane_g

0xb9f5,	// (0x0003984f) lc0_uni_indicator_pane_ParamLimits

0xb9f5,	// (0x0003984f) lc0_uni_indicator_pane

0xf12f,	// (0x0003cf89) ls0_title_pane_g1_ParamLimits

0xf12f,	// (0x0003cf89) ls0_title_pane_g1

0xf143,	// (0x0003cf9d) ls0_title_pane_t1_ParamLimits

0xf143,	// (0x0003cf9d) ls0_title_pane_t1

0xba02,	// (0x0003985c) lc0_uni_indicator_pane_g1_ParamLimits

0xba02,	// (0x0003985c) lc0_uni_indicator_pane_g1

0xe1ea,	// (0x0003c044) lc0_stat_clock_pane_t1

0x411d,	// (0x00031f77) main_ai5_pane

0xe1f8,	// (0x0003c052) ai5_sk_pane_ParamLimits

0xe1f8,	// (0x0003c052) ai5_sk_pane

0xf179,	// (0x0003cfd3) cell_ai5_widget_pane_ParamLimits

0xf179,	// (0x0003cfd3) cell_ai5_widget_pane

0xe205,	// (0x0003c05f) aid_size_cell_widget_grid

0xe219,	// (0x0003c073) bg_ai5_widget_pane_ParamLimits

0xe219,	// (0x0003c073) bg_ai5_widget_pane

0xf223,	// (0x0003d07d) cell_ai5_widget_pane_g2

0xf233,	// (0x0003d08d) cell_ai5_widget_pane_g3

0xf252,	// (0x0003d0ac) cell_ai5_widget_pane_g4

0xf25e,	// (0x0003d0b8) cell_ai5_widget_pane_g5

0xf26a,	// (0x0003d0c4) cell_ai5_widget_pane_g6

0xf276,	// (0x0003d0d0) cell_ai5_widget_pane_g7

0xf2be,	// (0x0003d118) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0003d118) cell_ai5_widget_pane_t1

0xf2db,	// (0x0003d135) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0003d135) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0003d14d) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0003d14d) cell_ai5_widget_pane_t3

0xf30b,	// (0x0003d165) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0003d165) cell_ai5_widget_pane_t4

0xf325,	// (0x0003d17f) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0003d17f) cell_ai5_widget_pane_t5

0xe225,	// (0x0003c07f) cell_ai5_widget_pane_t6_ParamLimits

0xe225,	// (0x0003c07f) cell_ai5_widget_pane_t6

0xe237,	// (0x0003c091) cell_ai5_widget_pane_t7_ParamLimits

0xe237,	// (0x0003c091) cell_ai5_widget_pane_t7

0xf344,	// (0x0003d19e) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0003d19e) cell_ai5_widget_pane_t8

0x0009,

0xfe24,	// (0x0003dc7e) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0003dc7e) cell_ai5_widget_pane_t

0xf390,	// (0x0003d1ea) grid_ai5_widget_pane

0x4a15,	// (0x0003286f) highlight_cell_ai5_widget_pane_ParamLimits

0x4a15,	// (0x0003286f) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0003d200) ai5_sk_left_pane

0xf3b0,	// (0x0003d20a) ai5_sk_middle_pane

0xf3ba,	// (0x0003d214) ai5_sk_right_pane

0xe250,	// (0x0003c0aa) bg_ai5_widget_pane_g1_ParamLimits

0xe250,	// (0x0003c0aa) bg_ai5_widget_pane_g1

0xe25c,	// (0x0003c0b6) bg_ai5_widget_pane_g2_ParamLimits

0xe25c,	// (0x0003c0b6) bg_ai5_widget_pane_g2

0xe268,	// (0x0003c0c2) bg_ai5_widget_pane_g3_ParamLimits

0xe268,	// (0x0003c0c2) bg_ai5_widget_pane_g3

0xe274,	// (0x0003c0ce) bg_ai5_widget_pane_g4_ParamLimits

0xe274,	// (0x0003c0ce) bg_ai5_widget_pane_g4

0xe280,	// (0x0003c0da) bg_ai5_widget_pane_g5_ParamLimits

0xe280,	// (0x0003c0da) bg_ai5_widget_pane_g5

0xe28c,	// (0x0003c0e6) bg_ai5_widget_pane_g6_ParamLimits

0xe28c,	// (0x0003c0e6) bg_ai5_widget_pane_g6

0xe298,	// (0x0003c0f2) bg_ai5_widget_pane_g7_ParamLimits

0xe298,	// (0x0003c0f2) bg_ai5_widget_pane_g7

0xe2a4,	// (0x0003c0fe) bg_ai5_widget_pane_g8_ParamLimits

0xe2a4,	// (0x0003c0fe) bg_ai5_widget_pane_g8

0xe2b0,	// (0x0003c10a) bg_ai5_widget_pane_g9_ParamLimits

0xe2b0,	// (0x0003c10a) bg_ai5_widget_pane_g9

0x0008,

0xfe39,	// (0x0003dc93) bg_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x0003dc93) bg_ai5_widget_pane_g

0xe2e3,	// (0x0003c13d) cell_shortcut_ai5_widget_pane_ParamLimits

0xe2e3,	// (0x0003c13d) cell_shortcut_ai5_widget_pane

0x41c9,	// (0x00032023) bg_cell_shortcut_ai5_widget_pane

0xe2f4,	// (0x0003c14e) cell_grid_ai5_widget_pane_g1

0xe2fd,	// (0x0003c157) highlight_cell_shortcut_ai5_widget_pane

0x59ac,	// (0x00033806) ai5_sk_left_pane_g1

0xe305,	// (0x0003c15f) ai5_sk_left_pane_g2

0xe30d,	// (0x0003c167) ai5_sk_left_pane_g3

0xe315,	// (0x0003c16f) ai5_sk_left_pane_g4

0x0003,

0xfe4c,	// (0x0003dca6) ai5_sk_left_pane_g

0xe31d,	// (0x0003c177) ai5_sk_left_pane_t1

0x59b4,	// (0x0003380e) ai5_sk_right_pane_g1

0xe32b,	// (0x0003c185) ai5_sk_right_pane_g2

0xe333,	// (0x0003c18d) ai5_sk_right_pane_g3

0xe33b,	// (0x0003c195) ai5_sk_right_pane_g4

0x0003,

0xfe55,	// (0x0003dcaf) ai5_sk_right_pane_g

0xe343,	// (0x0003c19d) ai5_sk_right_pane_t1

0x59b4,	// (0x0003380e) ai5_sk_middle_pane_g1

0x59ac,	// (0x00033806) ai5_sk_middle_pane_g2

0x59cc,	// (0x00033826) ai5_sk_middle_pane_g3

0xe333,	// (0x0003c18d) ai5_sk_middle_pane_g4

0xe30d,	// (0x0003c167) ai5_sk_middle_pane_g5

0xe351,	// (0x0003c1ab) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0003d21e) ai5_sk_middle_pane_g7

0x0006,

0xfe5e,	// (0x0003dcb8) ai5_sk_middle_pane_g

0xbe81,	// (0x00039cdb) aid_touch_area_size_lc0_ParamLimits

0xbe81,	// (0x00039cdb) aid_touch_area_size_lc0

0xb06b,	// (0x00038ec5) cell_hwr_candidate_pane_t1_ParamLimits

0x57d0,	// (0x0003362a) aid_touch_navi_pane

0xc09f,	// (0x00039ef9) status_dt_navi_pane_ParamLimits

0xc09f,	// (0x00039ef9) status_dt_navi_pane

0xc0ac,	// (0x00039f06) status_dt_sta_pane_ParamLimits

0xc0ac,	// (0x00039f06) status_dt_sta_pane

0xf3cc,	// (0x0003d226) dt_sta_controll_pane

0xf3d9,	// (0x0003d233) dt_sta_indi_pane

0xf3ea,	// (0x0003d244) dt_sta_title_pane

0x42c0,	// (0x0003211a) bg_dt_sta_indi_pane_ParamLimits

0x42c0,	// (0x0003211a) bg_dt_sta_indi_pane

0xf3fd,	// (0x0003d257) dt_sta_battery_pane

0xf405,	// (0x0003d25f) dt_sta_indi_pane_g1

0xe359,	// (0x0003c1b3) dt_sta_indi_pane_g2

0xe362,	// (0x0003c1bc) dt_sta_indi_pane_g3

0x0002,

0xfe6d,	// (0x0003dcc7) dt_sta_indi_pane_g

0xe36b,	// (0x0003c1c5) dt_sta_signal_pane

0x4a15,	// (0x0003286f) bg_dt_sta_title_pane_ParamLimits

0x4a15,	// (0x0003286f) bg_dt_sta_title_pane

0x6675,	// (0x000344cf) dt_sta_title_pane_g1

0xf40e,	// (0x0003d268) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0003d268) dt_sta_title_pane_t1

0x411d,	// (0x00031f77) bg_dt_sta_control_pane

0xf423,	// (0x0003d27d) dt_sta_controll_pane_g1

0xe374,	// (0x0003c1ce) bg_dt_sta_title_pane_g1

0xe37d,	// (0x0003c1d7) bg_dt_sta_title_pane_g2

0xe386,	// (0x0003c1e0) bg_dt_sta_title_pane_g3

0x0002,

0xfe74,	// (0x0003dcce) bg_dt_sta_title_pane_g

0x775a,	// (0x000355b4) bg_dt_sta_indi_pane_g1

0xe38f,	// (0x0003c1e9) dt_sta_signal_pane_g1

0xe397,	// (0x0003c1f1) dt_sta_signal_pane_g2

0x0001,

0xfe7b,	// (0x0003dcd5) dt_sta_signal_pane_g

0xe39f,	// (0x0003c1f9) dt_sta_battery_pane_g1

0xe3a8,	// (0x0003c202) dt_sta_battery_pane_t1

0x775a,	// (0x000355b4) bg_dt_sta_control_pane_g1

0x4fcb,	// (0x00032e25) fep_china_uni_eep_pane

0x4fd3,	// (0x00032e2d) fep_china_uni_entry_pane_ParamLimits

0x4fe3,	// (0x00032e3d) popup_fep_china_uni_window_g1_ParamLimits

0x4ff3,	// (0x00032e4d) popup_fep_china_uni_window_g2_ParamLimits

0x4ff3,	// (0x00032e4d) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003d594) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003d594) popup_fep_china_uni_window_g

0xe3b7,	// (0x0003c211) fep_china_uni_eep_pane_g1

0xe3bf,	// (0x0003c219) fep_china_uni_eep_pane_t1

0xe1cb,	// (0x0003c025) aid_touch_area_size_smil_player

0x5881,	// (0x000336db) lc0_clock_pane

0x58ba,	// (0x00033714) status_pane_g5_ParamLimits

0x58ba,	// (0x00033714) status_pane_g5

0xbae3,	// (0x0003993d) popup_keymap_window

0x589a,	// (0x000336f4) status_icon_pane

0xf233,	// (0x0003d08d) cell_ai5_widget_pane_g3_ParamLimits

0xf252,	// (0x0003d0ac) cell_ai5_widget_pane_g4_ParamLimits

0xf25e,	// (0x0003d0b8) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0003d0dc) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0003d0dc) cell_ai5_widget_pane_g8

0xf296,	// (0x0003d0f0) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0003d0f0) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0003d104) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0003d104) cell_ai5_widget_pane_g10

0xe3ce,	// (0x0003c228) status_icon_pane_g1

0x411d,	// (0x00031f77) bg_popup_sub_pane_cp13

0xe3d6,	// (0x0003c230) popup_keymap_window_t1

0xa6ae,	// (0x00038508) control_pane_g6_ParamLimits

0xa6ae,	// (0x00038508) control_pane_g6

0xa6bb,	// (0x00038515) control_pane_g7_ParamLimits

0xa6bb,	// (0x00038515) control_pane_g7

0xa6c8,	// (0x00038522) control_pane_g8_ParamLimits

0xa6c8,	// (0x00038522) control_pane_g8

0xf3cc,	// (0x0003d226) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0003d233) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0003d244) dt_sta_title_pane_ParamLimits

0x4957,	// (0x000327b1) aid_size_touch_scroll_bar_cale

0x9991,	// (0x000377eb) popup_discreet_window_ParamLimits

0x9991,	// (0x000377eb) popup_discreet_window

0x9a0b,	// (0x00037865) popup_sk_window

0x5f51,	// (0x00033dab) bg_popup_sub_pane_cp28_ParamLimits

0x5f51,	// (0x00033dab) bg_popup_sub_pane_cp28

0xe3e4,	// (0x0003c23e) popup_discreet_window_g1_ParamLimits

0xe3e4,	// (0x0003c23e) popup_discreet_window_g1

0xe404,	// (0x0003c25e) popup_discreet_window_t1_ParamLimits

0xe404,	// (0x0003c25e) popup_discreet_window_t1

0xe422,	// (0x0003c27c) popup_discreet_window_t2_ParamLimits

0xe422,	// (0x0003c27c) popup_discreet_window_t2

0x0002,

0xfe80,	// (0x0003dcda) popup_discreet_window_t_ParamLimits

0xfe80,	// (0x0003dcda) popup_discreet_window_t

0xba18,	// (0x00039872) popup_sk_window_g1

0xba22,	// (0x0003987c) popup_sk_window_g2

0x0001,

0xfe87,	// (0x0003dce1) popup_sk_window_g

0xe474,	// (0x0003c2ce) popup_sk_window_t1

0xe482,	// (0x0003c2dc) popup_sk_window_t1_copy1

0xf223,	// (0x0003d07d) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0003d1b0) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0003d1b0) cell_ai5_widget_pane_t9

0x411d,	// (0x00031f77) main_fep_fshwr2_pane

0xf42c,	// (0x0003d286) aid_fshwr2_btn_pane

0xf434,	// (0x0003d28e) aid_fshwr2_syb_pane

0xf43c,	// (0x0003d296) aid_fshwr2_txt_pane

0xf444,	// (0x0003d29e) fshwr2_func_candi_pane

0xf450,	// (0x0003d2aa) fshwr2_hwr_syb_pane

0xf45c,	// (0x0003d2b6) fshwr2_icf_pane

0x411d,	// (0x00031f77) fshwr2_icf_bg_pane

0xf466,	// (0x0003d2c0) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0003d2c0) fshwr2_icf_pane_t1

0x775a,	// (0x000355b4) fshwr2_func_candi_pane_g1

0xe4a4,	// (0x0003c2fe) fshwr2_func_candi_row_pane_ParamLimits

0xe4a4,	// (0x0003c2fe) fshwr2_func_candi_row_pane

0xf47d,	// (0x0003d2d7) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0003d2d7) cell_fshwr2_syb_pane

0x79e1,	// (0x0003583b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) fshwr2_hwr_syb_pane_g1

0x411d,	// (0x00031f77) bg_popup_call_pane_cp01

0xe4b5,	// (0x0003c30f) fshwr2_func_candi_cell_pane_ParamLimits

0xe4b5,	// (0x0003c30f) fshwr2_func_candi_cell_pane

0xe4e6,	// (0x0003c340) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe4e6,	// (0x0003c340) fshwr2_func_candi_cell_bg_pane

0xe500,	// (0x0003c35a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe500,	// (0x0003c35a) fshwr2_func_candi_cell_pane_g1

0xe520,	// (0x0003c37a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe520,	// (0x0003c37a) fshwr2_func_candi_cell_pane_t1

0x411d,	// (0x00031f77) bg_button_pane_cp08

0x545c,	// (0x000332b6) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0003d2f3) cell_fshwr2_syb_bg_pane_g1

0xe533,	// (0x0003c38d) cell_fshwr2_syb_bg_pane_t1

0x4a15,	// (0x0003286f) main_tmo_pane

0xc3e6,	// (0x0003a240) uni_indicator_pane_g1_ParamLimits

0xc3fb,	// (0x0003a255) uni_indicator_pane_g2_ParamLimits

0xc411,	// (0x0003a26b) uni_indicator_pane_g3_ParamLimits

0x6945,	// (0x0003479f) uni_indicator_pane_g4_ParamLimits

0x6945,	// (0x0003479f) uni_indicator_pane_g4

0x6959,	// (0x000347b3) uni_indicator_pane_g5_ParamLimits

0x6959,	// (0x000347b3) uni_indicator_pane_g5

0x696d,	// (0x000347c7) uni_indicator_pane_g6_ParamLimits

0x696d,	// (0x000347c7) uni_indicator_pane_g6

0xf937,	// (0x0003d791) uni_indicator_pane_g_ParamLimits

0xd587,	// (0x0003b3e1) popup_tmo_note_window_ParamLimits

0xd587,	// (0x0003b3e1) popup_tmo_note_window

0x411d,	// (0x00031f77) fshwr2_bg_pane

0xe511,	// (0x0003c36b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe511,	// (0x0003c36b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8c,	// (0x0003dce6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8c,	// (0x0003dce6) fshwr2_func_candi_cell_pane_g

0x775a,	// (0x000355b4) bg_popup_window_pane_cp01

0xe542,	// (0x0003c39c) bg_popup_window_pane_g1_cp01

0xe54b,	// (0x0003c3a5) bg_popup_window_pane_cp22_ParamLimits

0xe54b,	// (0x0003c3a5) bg_popup_window_pane_cp22

0xe559,	// (0x0003c3b3) listscroll_tmo_link_pane_ParamLimits

0xe559,	// (0x0003c3b3) listscroll_tmo_link_pane

0xe599,	// (0x0003c3f3) popup_tmo_note_window_g1_ParamLimits

0xe599,	// (0x0003c3f3) popup_tmo_note_window_g1

0xe5a6,	// (0x0003c400) tmo_note_info_pane_ParamLimits

0xe5a6,	// (0x0003c400) tmo_note_info_pane

0xf4a1,	// (0x0003d2fb) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0003d2fb) list_tmo_note_info_pane_g1

0xe5c0,	// (0x0003c41a) list_tmo_note_info_pane_g2_ParamLimits

0xe5c0,	// (0x0003c41a) list_tmo_note_info_pane_g2

0x0001,

0xfe91,	// (0x0003dceb) list_tmo_note_info_pane_g_ParamLimits

0xfe91,	// (0x0003dceb) list_tmo_note_info_pane_g

0xe5dc,	// (0x0003c436) list_tmo_note_info_text_pane_ParamLimits

0xe5dc,	// (0x0003c436) list_tmo_note_info_text_pane

0xe61e,	// (0x0003c478) list_tmo_link_pane

0xe62b,	// (0x0003c485) scroll_pane_cp20

0xe638,	// (0x0003c492) list_single_tmo_link_pane_ParamLimits

0xe638,	// (0x0003c492) list_single_tmo_link_pane

0xe648,	// (0x0003c4a2) list_single_tmo_link_pane_t1

0xe656,	// (0x0003c4b0) list_tmo_note_info_text_pane_t1_ParamLimits

0xe656,	// (0x0003c4b0) list_tmo_note_info_text_pane_t1

0x9ed7,	// (0x00037d31) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ed7,	// (0x00037d31) aid_size_touch_scroll_bar_cp01

0x8e9f,	// (0x00036cf9) aid_size_touch_slider_marker

0x99f3,	// (0x0003784d) popup_settings_window_ParamLimits

0x99f3,	// (0x0003784d) popup_settings_window

0x9041,	// (0x00036e9b) popup_candi_list_indi_window

0x57d0,	// (0x0003362a) aid_touch_navi_pane_ParamLimits

0xb22d,	// (0x00039087) rs_clock_indi_pane

0xb236,	// (0x00039090) sctrl_sk_bottom_pane_ParamLimits

0xb247,	// (0x000390a1) sctrl_sk_top_pane_ParamLimits

0xb32e,	// (0x00039188) popup_fep_tooltip_window

0xe205,	// (0x0003c05f) aid_size_cell_widget_grid_ParamLimits

0xf217,	// (0x0003d071) cell_ai5_widget_pane_g1_ParamLimits

0xf217,	// (0x0003d071) cell_ai5_widget_pane_g1

0xf26a,	// (0x0003d0c4) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0003d0d0) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0672,	// (0x0002e4cc) cell_ai5_widget_pane_g_ParamLimits

0x0672,	// (0x0002e4cc) cell_ai5_widget_pane_g

0xf37a,	// (0x0003d1d4) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0003d1d4) cell_ai5_widget_pane_t10

0xf390,	// (0x0003d1ea) grid_ai5_widget_pane_ParamLimits

0xe2bc,	// (0x0003c116) cell_contacts_ai5_widget_pane_ParamLimits

0xe2bc,	// (0x0003c116) cell_contacts_ai5_widget_pane

0xe437,	// (0x0003c291) popup_discreet_window_t3_ParamLimits

0xe437,	// (0x0003c291) popup_discreet_window_t3

0xe490,	// (0x0003c2ea) popup_fshwr2_char_preview_window_ParamLimits

0xe490,	// (0x0003c2ea) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0003d312) tmo_note_info_pane_t1

0xf4cd,	// (0x0003d327) tmo_note_info_pane_t2

0xf4e6,	// (0x0003d340) tmo_note_info_pane_t3

0xe5fa,	// (0x0003c454) tmo_note_info_pane_t4

0xe60c,	// (0x0003c466) tmo_note_info_pane_t5

0x0004,

0xfe96,	// (0x0003dcf0) tmo_note_info_pane_t

0xe61e,	// (0x0003c478) list_tmo_link_pane_ParamLimits

0xe62b,	// (0x0003c485) scroll_pane_cp20_ParamLimits

0x411d,	// (0x00031f77) bg_popup_fep_char_preview_window_cp01

0xe66f,	// (0x0003c4c9) popup_fshwr2_char_preview_window_t1

0xe67d,	// (0x0003c4d7) popup_candi_list_indi_window_g1

0xe686,	// (0x0003c4e0) bg_cell_contacts_ai5_widget_pane

0xe692,	// (0x0003c4ec) cell_contacts_ai5_widget_pane_g1

0xe6a6,	// (0x0003c500) cell_contacts_ai5_widget_pane_g2

0xe6b5,	// (0x0003c50f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea1,	// (0x0003dcfb) cell_contacts_ai5_widget_pane_g

0xe6c8,	// (0x0003c522) cell_contacts_ai5_widget_pane_t1

0x4a15,	// (0x0003286f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe742,	// (0x0003c59c) settings_container_pane

0x545c,	// (0x000332b6) listscroll_set_pane_copy1

0x714a,	// (0x00034fa4) scroll_pane_cp121_copy1

0xe74e,	// (0x0003c5a8) set_content_pane_copy1

0xe756,	// (0x0003c5b0) aid_height_set_list_copy1_ParamLimits

0xe756,	// (0x0003c5b0) aid_height_set_list_copy1

0x6501,	// (0x0003435b) aid_size_parent_copy1_ParamLimits

0x6501,	// (0x0003435b) aid_size_parent_copy1

0xe762,	// (0x0003c5bc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe762,	// (0x0003c5bc) button_value_adjust_pane_cp6_copy1

0x4b6c,	// (0x000329c6) list_highlight_pane_cp2_copy1_ParamLimits

0x4b6c,	// (0x000329c6) list_highlight_pane_cp2_copy1

0xe776,	// (0x0003c5d0) list_set_pane_copy1_ParamLimits

0xe776,	// (0x0003c5d0) list_set_pane_copy1

0xe6dd,	// (0x0003c537) main_pane_set_t1_copy1_ParamLimits

0xe6dd,	// (0x0003c537) main_pane_set_t1_copy1

0xe717,	// (0x0003c571) main_pane_set_t2_copy1_ParamLimits

0xe717,	// (0x0003c571) main_pane_set_t2_copy1

0xe823,	// (0x0003c67d) main_pane_set_t3_copy1

0xe831,	// (0x0003c68b) main_pane_set_t4_copy1

0xe736,	// (0x0003c590) set_content_pane_g1_copy1_ParamLimits

0xe736,	// (0x0003c590) set_content_pane_g1_copy1

0xe83f,	// (0x0003c699) setting_code_pane_copy1

0xe849,	// (0x0003c6a3) setting_slider_graphic_pane_copy1

0xe849,	// (0x0003c6a3) setting_slider_pane_copy1

0xe849,	// (0x0003c6a3) setting_text_pane_copy1

0xe853,	// (0x0003c6ad) setting_volume_pane_copy1

0xe85c,	// (0x0003c6b6) settings_code_pane_cp2_copy1

0xe864,	// (0x0003c6be) settings_code_pane_cp_copy1_ParamLimits

0xe864,	// (0x0003c6be) settings_code_pane_cp_copy1

0xe878,	// (0x0003c6d2) volume_set_pane_copy1

0xe880,	// (0x0003c6da) volume_set_pane_g10_copy1

0xe888,	// (0x0003c6e2) volume_set_pane_g1_copy1

0xe890,	// (0x0003c6ea) volume_set_pane_g2_copy1

0xe898,	// (0x0003c6f2) volume_set_pane_g3_copy1

0xe8a0,	// (0x0003c6fa) volume_set_pane_g4_copy1

0xe8a8,	// (0x0003c702) volume_set_pane_g5_copy1

0xe8b0,	// (0x0003c70a) volume_set_pane_g6_copy1

0xe8b8,	// (0x0003c712) volume_set_pane_g7_copy1

0xe8c0,	// (0x0003c71a) volume_set_pane_g8_copy1

0xe8c8,	// (0x0003c722) volume_set_pane_g9_copy1

0x418d,	// (0x00031fe7) bg_set_opt_pane_cp_copy1_ParamLimits

0x418d,	// (0x00031fe7) bg_set_opt_pane_cp_copy1

0xe8d0,	// (0x0003c72a) setting_slider_pane_t1_copy1_ParamLimits

0xe8d0,	// (0x0003c72a) setting_slider_pane_t1_copy1

0xe8ee,	// (0x0003c748) setting_slider_pane_t2_copy1_ParamLimits

0xe8ee,	// (0x0003c748) setting_slider_pane_t2_copy1

0xe908,	// (0x0003c762) setting_slider_pane_t3_copy1_ParamLimits

0xe908,	// (0x0003c762) setting_slider_pane_t3_copy1

0xe920,	// (0x0003c77a) slider_set_pane_copy1_ParamLimits

0xe920,	// (0x0003c77a) slider_set_pane_copy1

0x4a7c,	// (0x000328d6) set_opt_bg_pane_g1_copy2

0x4a84,	// (0x000328de) set_opt_bg_pane_g2_copy2

0xe936,	// (0x0003c790) set_opt_bg_pane_g3_copy2

0x4a94,	// (0x000328ee) set_opt_bg_pane_g4_copy2

0x4a9c,	// (0x000328f6) set_opt_bg_pane_g5_copy2

0x4aa4,	// (0x000328fe) set_opt_bg_pane_g6_copy2

0xe940,	// (0x0003c79a) set_opt_bg_pane_g7_copy2

0xe948,	// (0x0003c7a2) set_opt_bg_pane_g8_copy2

0xe952,	// (0x0003c7ac) set_opt_bg_pane_g9_copy2

0xba2c,	// (0x00039886) aid_size_touch_slider_mark_copy1_ParamLimits

0xba2c,	// (0x00039886) aid_size_touch_slider_mark_copy1

0xe95c,	// (0x0003c7b6) slider_set_pane_g1_copy1

0xba40,	// (0x0003989a) slider_set_pane_g2_copy1

0xab66,	// (0x000389c0) slider_set_pane_g3_copy1_ParamLimits

0xab66,	// (0x000389c0) slider_set_pane_g3_copy1

0xab7a,	// (0x000389d4) slider_set_pane_g4_copy1_ParamLimits

0xab7a,	// (0x000389d4) slider_set_pane_g4_copy1

0xab92,	// (0x000389ec) slider_set_pane_g5_copy1_ParamLimits

0xab92,	// (0x000389ec) slider_set_pane_g5_copy1

0xab66,	// (0x000389c0) slider_set_pane_g6_copy1_ParamLimits

0xab66,	// (0x000389c0) slider_set_pane_g6_copy1

0xba48,	// (0x000398a2) slider_set_pane_g7_copy1_ParamLimits

0xba48,	// (0x000398a2) slider_set_pane_g7_copy1

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp2_copy1

0xe965,	// (0x0003c7bf) setting_slider_graphic_pane_g1_copy1

0xe96e,	// (0x0003c7c8) setting_slider_graphic_pane_t1_copy1

0xe97e,	// (0x0003c7d8) setting_slider_graphic_pane_t2_copy1

0xe98e,	// (0x0003c7e8) slider_set_pane_cp_copy1

0xe99e,	// (0x0003c7f8) input_focus_pane_cp1_copy1

0xe9a7,	// (0x0003c801) list_set_text_pane_copy1

0xe9af,	// (0x0003c809) setting_text_pane_g1_copy1

0x96ea,	// (0x00037544) set_text_pane_t1_copy1

0xe99e,	// (0x0003c7f8) input_focus_pane_cp2_copy1

0xe9af,	// (0x0003c809) setting_code_pane_g1_copy1

0xe9b8,	// (0x0003c812) setting_code_pane_t1_copy1

0xe9c6,	// (0x0003c820) list_set_graphic_pane_copy1

0x4131,	// (0x00031f8b) bg_set_opt_pane_cp4_copy1

0x515e,	// (0x00032fb8) list_set_graphic_pane_g1_copy1_ParamLimits

0x515e,	// (0x00032fb8) list_set_graphic_pane_g1_copy1

0xe9da,	// (0x0003c834) list_set_graphic_pane_g2_copy1

0x5176,	// (0x00032fd0) list_set_graphic_pane_t1_copy1_ParamLimits

0x5176,	// (0x00032fd0) list_set_graphic_pane_t1_copy1

0x775a,	// (0x000355b4) rs_clock_indi_pane_g1

0xe9e2,	// (0x0003c83c) rs_clock_indi_pane_t1

0xe9f0,	// (0x0003c84a) rs_indi_pane

0xe9f8,	// (0x0003c852) rs_indi_pane_g1

0xea01,	// (0x0003c85b) rs_indi_pane_g2

0xea0a,	// (0x0003c864) rs_indi_pane_g3

0x0002,

0xfea8,	// (0x0003dd02) rs_indi_pane_g

0x545c,	// (0x000332b6) bg_popup_preview_window_pane_cp03

0xea13,	// (0x0003c86d) popup_fep_tooltip_window_t1

0xcd1c,	// (0x0003ab76) popup_note2_window_g2_ParamLimits

0xcd1c,	// (0x0003ab76) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003dad1) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003dad1) popup_note2_window_g

0xd20a,	// (0x0003b064) bg_popup_sub_pane_cp11_ParamLimits

0xd217,	// (0x0003b071) cell_ai3_links_pane_g1_ParamLimits

0xd22e,	// (0x0003b088) cell_ai3_links_pane_t1

0x96ea,	// (0x00037544) set_text_pane_t1_copy1_ParamLimits

0x536b,	// (0x000331c5) cell_graphic_popup_pane_cp2_ParamLimits

0x536b,	// (0x000331c5) cell_graphic_popup_pane_cp2

0xea21,	// (0x0003c87b) cell_graphic_popup_pane_g1_cp2

0x476a,	// (0x000325c4) cell_graphic_popup_pane_g2_cp2

0xea29,	// (0x0003c883) cell_graphic_popup_pane_g3_cp2

0xea31,	// (0x0003c88b) cell_graphic_popup_pane_t2_cp2

0x477b,	// (0x000325d5) grid_highlight_pane_cp3_cp2

0x4d16,	// (0x00032b70) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a15,	// (0x0003286f) main_tmo_pane_ParamLimits

0xd57b,	// (0x0003b3d5) popup_tmo_big_image_note_window

0xf207,	// (0x0003d061) cell_ai5_widget_list_pane

0xf20f,	// (0x0003d069) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0003d312) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0003d327) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0003d340) tmo_note_info_pane_t3_ParamLimits

0xe5fa,	// (0x0003c454) tmo_note_info_pane_t4_ParamLimits

0xe60c,	// (0x0003c466) tmo_note_info_pane_t5_ParamLimits

0xfe96,	// (0x0003dcf0) tmo_note_info_pane_t_ParamLimits

0xe742,	// (0x0003c59c) settings_container_pane_ParamLimits

0xe996,	// (0x0003c7f0) indicator_popup_pane_cp5

0xe996,	// (0x0003c7f0) indicator_popup_pane_cp6

0xe9c6,	// (0x0003c820) list_set_graphic_pane_copy1_ParamLimits

0x411d,	// (0x00031f77) bg_popup_window_pane_cp23

0xea3f,	// (0x0003c899) popup_tmo_big_image_note_window_g1

0xea4a,	// (0x0003c8a4) popup_tmo_big_image_note_window_t1

0xea5a,	// (0x0003c8b4) popup_tmo_big_image_note_window_t2

0xea6a,	// (0x0003c8c4) popup_tmo_big_image_note_window_t3

0x0002,

0xfeaf,	// (0x0003dd09) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0003d355) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0003d35d) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0003d36b) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0003d36b) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0003d384) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0003d384) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0003d391) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0003d391) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0003d3a9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0003d3a9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeb6,	// (0x0003dd10) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb6,	// (0x0003dd10) cell_ai5_widget_list_row_pane_t

0x411d,	// (0x00031f77) main_fep_vtchi_ss_pane

0xea7a,	// (0x0003c8d4) popup_fep_char_pre_window

0xea82,	// (0x0003c8dc) popup_fep_ituss_window

0xeaa3,	// (0x0003c8fd) popup_fep_vkbss_window

0xeac2,	// (0x0003c91c) grid_vkbss_keypad_pane_ParamLimits

0xeac2,	// (0x0003c91c) grid_vkbss_keypad_pane

0xead2,	// (0x0003c92c) ituss_keypad_pane

0xeaea,	// (0x0003c944) aid_vkbss_key_offset_ParamLimits

0xeaea,	// (0x0003c944) aid_vkbss_key_offset

0xeaf6,	// (0x0003c950) cell_vkbss_key_pane_ParamLimits

0xeaf6,	// (0x0003c950) cell_vkbss_key_pane

0x68fb,	// (0x00034755) bg_cell_vkbss_key_g1_ParamLimits

0x68fb,	// (0x00034755) bg_cell_vkbss_key_g1

0xeb0c,	// (0x0003c966) cell_vkbss_key_3p_pane_ParamLimits

0xeb0c,	// (0x0003c966) cell_vkbss_key_3p_pane

0xeb26,	// (0x0003c980) cell_vkbss_key_g1_ParamLimits

0xeb26,	// (0x0003c980) cell_vkbss_key_g1

0xeb40,	// (0x0003c99a) cell_vkbss_key_t1_ParamLimits

0xeb40,	// (0x0003c99a) cell_vkbss_key_t1

0xeb6b,	// (0x0003c9c5) cell_ituss_key_pane_ParamLimits

0xeb6b,	// (0x0003c9c5) cell_ituss_key_pane

0xeb7b,	// (0x0003c9d5) bg_cell_ituss_key_g1_ParamLimits

0xeb7b,	// (0x0003c9d5) bg_cell_ituss_key_g1

0xeb87,	// (0x0003c9e1) cell_ituss_key_pane_g1_ParamLimits

0xeb87,	// (0x0003c9e1) cell_ituss_key_pane_g1

0xeb93,	// (0x0003c9ed) cell_ituss_key_pane_g2_ParamLimits

0xeb93,	// (0x0003c9ed) cell_ituss_key_pane_g2

0x0001,

0xfebb,	// (0x0003dd15) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x0003dd15) cell_ituss_key_pane_g

0xebac,	// (0x0003ca06) cell_ituss_key_t1_ParamLimits

0xebac,	// (0x0003ca06) cell_ituss_key_t1

0xebda,	// (0x0003ca34) cell_ituss_key_t2_ParamLimits

0xebda,	// (0x0003ca34) cell_ituss_key_t2

0xec0b,	// (0x0003ca65) cell_ituss_key_t3_ParamLimits

0xec0b,	// (0x0003ca65) cell_ituss_key_t3

0xec3c,	// (0x0003ca96) cell_ituss_key_t4_ParamLimits

0xec3c,	// (0x0003ca96) cell_ituss_key_t4

0x0003,

0xfec0,	// (0x0003dd1a) cell_ituss_key_t_ParamLimits

0xfec0,	// (0x0003dd1a) cell_ituss_key_t

0xec6d,	// (0x0003cac7) cell_vkbss_key_3p_pane_g1

0xec75,	// (0x0003cacf) cell_vkbss_key_3p_pane_g2

0xec7d,	// (0x0003cad7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec9,	// (0x0003dd23) cell_vkbss_key_3p_pane_g

0x411d,	// (0x00031f77) bg_popup_fep_char_preview_window_cp02

0xec85,	// (0x0003cadf) popup_fep_char_pre_window_t1

0xf1fd,	// (0x0003d057) main_ai5_sk_pane

0xe686,	// (0x0003c4e0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe692,	// (0x0003c4ec) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe6a6,	// (0x0003c500) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe6b5,	// (0x0003c50f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea1,	// (0x0003dcfb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe6c8,	// (0x0003c522) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a15,	// (0x0003286f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0003d3bb) main_ai5_sk_pane_g1

0x5d8f,	// (0x00033be9) popup_query_code_window_g1

0xea98,	// (0x0003c8f2) popup_fep_vkb_icf_pane

0xeaac,	// (0x0003c906) popup_fep_vtchi_icf_pane

0x4a15,	// (0x0003286f) bg_icf_pane

0xeca3,	// (0x0003cafd) list_vkb_icf_pane

0x4a15,	// (0x0003286f) bg_icf_pane_cp01

0xee5a,	// (0x0003ccb4) vtchi_icf_list_pane

0xee6a,	// (0x0003ccc4) list_vkb_icf_pane_t1_ParamLimits

0xee6a,	// (0x0003ccc4) list_vkb_icf_pane_t1

0xee84,	// (0x0003ccde) vtchi_icf_list_pane_t1_ParamLimits

0xee84,	// (0x0003ccde) vtchi_icf_list_pane_t1

0xea82,	// (0x0003c8dc) popup_fep_ituss_window_ParamLimits

0xeaac,	// (0x0003c906) popup_fep_vtchi_icf_pane_ParamLimits

0xead2,	// (0x0003c92c) ituss_keypad_pane_ParamLimits

0xeae1,	// (0x0003c93b) ituss_sks_pane

0x4a15,	// (0x0003286f) bg_icf_pane_ParamLimits

0xec94,	// (0x0003caee) icf_edit_indi_pane_ParamLimits

0xec94,	// (0x0003caee) icf_edit_indi_pane

0xeca3,	// (0x0003cafd) list_vkb_icf_pane_ParamLimits

0x4a15,	// (0x0003286f) bg_icf_pane_cp01_ParamLimits

0xecaf,	// (0x0003cb09) icf_edit_indi_pane_cp01_ParamLimits

0xecaf,	// (0x0003cb09) icf_edit_indi_pane_cp01

0xee62,	// (0x0003ccbc) vtchi_query_pane

0x79e1,	// (0x0003583b) icf_edit_indi_pane_g1_ParamLimits

0x79e1,	// (0x0003583b) icf_edit_indi_pane_g1

0xeeab,	// (0x0003cd05) icf_edit_indi_pane_g2_ParamLimits

0xeeab,	// (0x0003cd05) icf_edit_indi_pane_g2

0x0001,

0xfed0,	// (0x0003dd2a) icf_edit_indi_pane_g_ParamLimits

0xfed0,	// (0x0003dd2a) icf_edit_indi_pane_g

0xeeb7,	// (0x0003cd11) icf_edit_indi_pane_t1

0xeec5,	// (0x0003cd1f) bg_input_focus_pane_cp042

0x494e,	// (0x000327a8) vtchi_button_pane

0xeece,	// (0x0003cd28) vtchi_query_pane_t1

0xeedc,	// (0x0003cd36) vtchi_query_pane_t2

0xeeea,	// (0x0003cd44) vtchi_query_pane_t3

0x0002,

0xfed5,	// (0x0003dd2f) vtchi_query_pane_t

0x411d,	// (0x00031f77) bg_button_pane_cp13

0xeef8,	// (0x0003cd52) vtchi_button_pane_g1

0xda85,	// (0x0003b8df) ituss_sks_pane_g1

0xef00,	// (0x0003cd5a) ituss_sks_pane_g2

0x0001,

0xfedc,	// (0x0003dd36) ituss_sks_pane_g

0xef09,	// (0x0003cd63) ituss_sks_pane_t1

0xef17,	// (0x0003cd71) ituss_sks_pane_t2

0x0001,

0xfee1,	// (0x0003dd3b) ituss_sks_pane_t

0x7427,	// (0x00035281) indicator_nsta_pane_cp_g1

0x7430,	// (0x0003528a) indicator_nsta_pane_cp_g2

0x7438,	// (0x00035292) indicator_nsta_pane_cp_g3

0x7440,	// (0x0003529a) indicator_nsta_pane_cp_g4

0x7448,	// (0x000352a2) indicator_nsta_pane_cp_g5

0x7450,	// (0x000352aa) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0003d91b) indicator_nsta_pane_cp_g

0xf007,	// (0x0003ce61) cell_graphic2_pane_t2_ParamLimits

0xf007,	// (0x0003ce61) cell_graphic2_pane_t2

0x0001,

0x05fb,	// (0x0002e455) cell_graphic2_pane_t_ParamLimits

0x05fb,	// (0x0002e455) cell_graphic2_pane_t

0xf034,	// (0x0003ce8e) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00017038 };

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
0x82cb,	// (0x0001f303) Screen

0x82d7,	// (0x0001f30f) application_window_ParamLimits

0x82d7,	// (0x0001f30f) application_window

0xb82d,	// (0x00022865) screen_g1

0x830f,	// (0x0001f347) area_bottom_pane_ParamLimits

0x830f,	// (0x0001f347) area_bottom_pane

0x5128,	// (0x0001c160) area_top_pane_ParamLimits

0x5128,	// (0x0001c160) area_top_pane

0x51bc,	// (0x0001c1f4) main_pane_ParamLimits

0x51bc,	// (0x0001c1f4) main_pane

0xb837,	// (0x0002286f) misc_graphics

0x9358,	// (0x00020390) battery_pane_ParamLimits

0x9358,	// (0x00020390) battery_pane

0xd5db,	// (0x00024613) bg_status_flat_pane_g8

0xd5e3,	// (0x0002461b) bg_status_flat_pane_g9

0xcd10,	// (0x00023d48) context_pane_ParamLimits

0xcd10,	// (0x00023d48) context_pane

0x94c3,	// (0x000204fb) navi_pane_ParamLimits

0x94c3,	// (0x000204fb) navi_pane

0x953a,	// (0x00020572) signal_pane_ParamLimits

0x953a,	// (0x00020572) signal_pane

0x0008,

0xf87e,	// (0x000268b6) bg_status_flat_pane_g

0x95ca,	// (0x00020602) status_pane_g1_ParamLimits

0x95ca,	// (0x00020602) status_pane_g1

0x95e0,	// (0x00020618) status_pane_g2_ParamLimits

0x95e0,	// (0x00020618) status_pane_g2

0xcd75,	// (0x00023dad) status_pane_g3_ParamLimits

0xcd75,	// (0x00023dad) status_pane_g3

0x0004,

0xf7b8,	// (0x000267f0) status_pane_g_ParamLimits

0xf7b8,	// (0x000267f0) status_pane_g

0x95ec,	// (0x00020624) title_pane_ParamLimits

0x95ec,	// (0x00020624) title_pane

0x964d,	// (0x00020685) uni_indicator_pane_ParamLimits

0x964d,	// (0x00020685) uni_indicator_pane

0xcb3b,	// (0x00023b73) bg_list_pane_ParamLimits

0xcb3b,	// (0x00023b73) bg_list_pane

0x47f3,	// (0x0001b82b) find_pane

0x8c46,	// (0x0001fc7e) listscroll_app_pane_ParamLimits

0x8c46,	// (0x0001fc7e) listscroll_app_pane

0xcb5b,	// (0x00023b93) listscroll_form_pane

0x47fb,	// (0x0001b833) listscroll_gen_pane_ParamLimits

0x47fb,	// (0x0001b833) listscroll_gen_pane

0xcb5b,	// (0x00023b93) listscroll_set_pane

0xd9d2,	// (0x00024a0a) main_idle_act_pane

0xc921,	// (0x00023959) main_idle_trad_pane

0xc921,	// (0x00023959) main_list_empty_pane

0xc031,	// (0x00023069) main_midp_pane

0xcb75,	// (0x00023bad) main_pane_g1_ParamLimits

0xcb75,	// (0x00023bad) main_pane_g1

0x8c52,	// (0x0001fc8a) popup_ai_message_window_ParamLimits

0x8c52,	// (0x0001fc8a) popup_ai_message_window

0x8ce3,	// (0x0001fd1b) popup_fep_china_uni_window_ParamLimits

0x8ce3,	// (0x0001fd1b) popup_fep_china_uni_window

0xcba7,	// (0x00023bdf) popup_fep_japan_candidate_window_ParamLimits

0xcba7,	// (0x00023bdf) popup_fep_japan_candidate_window

0xcbc5,	// (0x00023bfd) popup_fep_japan_predictive_window_ParamLimits

0xcbc5,	// (0x00023bfd) popup_fep_japan_predictive_window

0x8d3d,	// (0x0001fd75) popup_find_window

0x8d5a,	// (0x0001fd92) popup_grid_graphic_window_ParamLimits

0x8d5a,	// (0x0001fd92) popup_grid_graphic_window

0xcbf5,	// (0x00023c2d) popup_large_graphic_colour_window

0x8dec,	// (0x0001fe24) popup_menu_window_ParamLimits

0x8dec,	// (0x0001fe24) popup_menu_window

0x8fb8,	// (0x0001fff0) popup_note_image_window

0x8f7e,	// (0x0001ffb6) popup_note_wait_window_ParamLimits

0x8f7e,	// (0x0001ffb6) popup_note_wait_window

0x8fd0,	// (0x00020008) popup_note_window_ParamLimits

0x8fd0,	// (0x00020008) popup_note_window

0x9076,	// (0x000200ae) popup_query_code_window_ParamLimits

0x9076,	// (0x000200ae) popup_query_code_window

0xcc29,	// (0x00023c61) popup_query_data_code_window_ParamLimits

0xcc29,	// (0x00023c61) popup_query_data_code_window

0x90b0,	// (0x000200e8) popup_query_data_window_ParamLimits

0x90b0,	// (0x000200e8) popup_query_data_window

0x9126,	// (0x0002015e) popup_query_sat_info_window_ParamLimits

0x9126,	// (0x0002015e) popup_query_sat_info_window

0x91bd,	// (0x000201f5) popup_snote_single_graphic_window_ParamLimits

0x91bd,	// (0x000201f5) popup_snote_single_graphic_window

0x91bd,	// (0x000201f5) popup_snote_single_text_window_ParamLimits

0x91bd,	// (0x000201f5) popup_snote_single_text_window

0xcc40,	// (0x00023c78) popup_sub_window_general

0xcc86,	// (0x00023cbe) popup_window_general_ParamLimits

0xcc86,	// (0x00023cbe) popup_window_general

0xcc9b,	// (0x00023cd3) power_save_pane

0x8ab4,	// (0x0001faec) control_pane_g1_ParamLimits

0x8ab4,	// (0x0001faec) control_pane_g1

0x8add,	// (0x0001fb15) control_pane_g2_ParamLimits

0x8add,	// (0x0001fb15) control_pane_g2

0xcb15,	// (0x00023b4d) control_pane_g3_ParamLimits

0xcb15,	// (0x00023b4d) control_pane_g3

0x0007,

0xf7a0,	// (0x000267d8) control_pane_g_ParamLimits

0xf7a0,	// (0x000267d8) control_pane_g

0x8b3f,	// (0x0001fb77) control_pane_t1_ParamLimits

0x8b3f,	// (0x0001fb77) control_pane_t1

0x8b9d,	// (0x0001fbd5) control_pane_t2_ParamLimits

0x8b9d,	// (0x0001fbd5) control_pane_t2

0x0002,

0xf7b1,	// (0x000267e9) control_pane_t_ParamLimits

0xf7b1,	// (0x000267e9) control_pane_t

0xca36,	// (0x00023a6e) navi_navi_volume_pane_cp1

0xca3f,	// (0x00023a77) status_small_icon_pane

0xca47,	// (0x00023a7f) status_small_pane_g1_ParamLimits

0xca47,	// (0x00023a7f) status_small_pane_g1

0xca7b,	// (0x00023ab3) status_small_pane_g2_ParamLimits

0xca7b,	// (0x00023ab3) status_small_pane_g2

0xca87,	// (0x00023abf) status_small_pane_g3_ParamLimits

0xca87,	// (0x00023abf) status_small_pane_g3

0xca93,	// (0x00023acb) status_small_pane_g4_ParamLimits

0xca93,	// (0x00023acb) status_small_pane_g4

0xca9f,	// (0x00023ad7) status_small_pane_g5_ParamLimits

0xca9f,	// (0x00023ad7) status_small_pane_g5

0xcaae,	// (0x00023ae6) status_small_pane_g6_ParamLimits

0xcaae,	// (0x00023ae6) status_small_pane_g6

0x0007,

0xf78f,	// (0x000267c7) status_small_pane_g_ParamLimits

0xf78f,	// (0x000267c7) status_small_pane_g

0xcade,	// (0x00023b16) status_small_pane_t1

0xcb01,	// (0x00023b39) status_small_wait_pane_ParamLimits

0xcb01,	// (0x00023b39) status_small_wait_pane

0x8955,	// (0x0001f98d) aid_levels_signal_ParamLimits

0x8955,	// (0x0001f98d) aid_levels_signal

0x896d,	// (0x0001f9a5) signal_pane_g1_ParamLimits

0x896d,	// (0x0001f9a5) signal_pane_g1

0x8988,	// (0x0001f9c0) signal_pane_g2_ParamLimits

0x8988,	// (0x0001f9c0) signal_pane_g2

0x0001,

0xf724,	// (0x0002675c) signal_pane_g_ParamLimits

0xf724,	// (0x0002675c) signal_pane_g

0xc465,	// (0x0002349d) context_pane_g1

0x8488,	// (0x0001f4c0) title_pane_g1

0x84bd,	// (0x0001f4f5) title_pane_t1

0xb84d,	// (0x00022885) title_pane_t2

0xb873,	// (0x000228ab) title_pane_t3

0x0002,

0xf573,	// (0x000265ab) title_pane_t

0x9675,	// (0x000206ad) aid_levels_battery_ParamLimits

0x9675,	// (0x000206ad) aid_levels_battery

0x9691,	// (0x000206c9) battery_pane_g1_ParamLimits

0x9691,	// (0x000206c9) battery_pane_g1

0x96ae,	// (0x000206e6) battery_pane_g2_ParamLimits

0x96ae,	// (0x000206e6) battery_pane_g2

0x0001,

0xf7c3,	// (0x000267fb) battery_pane_g_ParamLimits

0xf7c3,	// (0x000267fb) battery_pane_g

0x9ab2,	// (0x00020aea) uni_indicator_pane_g1

0x9ac7,	// (0x00020aff) uni_indicator_pane_g2

0x9adc,	// (0x00020b14) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0002695e) uni_indicator_pane_g

0xc791,	// (0x000237c9) navi_icon_pane_ParamLimits

0xc791,	// (0x000237c9) navi_icon_pane

0xc6d8,	// (0x00023710) navi_midp_pane

0xc7ad,	// (0x000237e5) navi_navi_pane

0xc7b7,	// (0x000237ef) navi_text_pane_ParamLimits

0xc7b7,	// (0x000237ef) navi_text_pane

0xb82d,	// (0x00022865) status_small_wait_pane_g1

0xbb4e,	// (0x00022b86) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00026959) status_small_wait_pane_g

0x9a51,	// (0x00020a89) navi_navi_icon_text_pane

0x9a59,	// (0x00020a91) navi_navi_pane_g1_ParamLimits

0x9a59,	// (0x00020a91) navi_navi_pane_g1

0x9a6b,	// (0x00020aa3) navi_navi_pane_g2_ParamLimits

0x9a6b,	// (0x00020aa3) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00026927) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00026927) navi_navi_pane_g

0xdb88,	// (0x00024bc0) navi_navi_tabs_pane

0x9a7d,	// (0x00020ab5) navi_navi_text_pane

0x9a51,	// (0x00020a89) navi_navi_volume_pane

0x9a3f,	// (0x00020a77) navi_text_pane_t1

0x9a33,	// (0x00020a6b) navi_icon_pane_g1

0xdac9,	// (0x00024b01) navi_navi_text_pane_t1

0x9a22,	// (0x00020a5a) navi_navi_volume_pane_g1

0x9a2a,	// (0x00020a62) volume_small_pane

0x997e,	// (0x000209b6) navi_navi_icon_text_pane_g1

0x9986,	// (0x000209be) navi_navi_icon_text_pane_t1

0xc7ad,	// (0x000237e5) navi_tabs_2_long_pane

0xc7ad,	// (0x000237e5) navi_tabs_2_pane

0xc7ad,	// (0x000237e5) navi_tabs_3_long_pane

0xc7ad,	// (0x000237e5) navi_tabs_3_pane

0xc7ad,	// (0x000237e5) navi_tabs_4_pane

0x995e,	// (0x00020996) tabs_2_active_pane_ParamLimits

0x995e,	// (0x00020996) tabs_2_active_pane

0x996e,	// (0x000209a6) tabs_2_passive_pane_ParamLimits

0x996e,	// (0x000209a6) tabs_2_passive_pane

0x992c,	// (0x00020964) tabs_3_active_pane_ParamLimits

0x992c,	// (0x00020964) tabs_3_active_pane

0x993c,	// (0x00020974) tabs_3_passive_pane_ParamLimits

0x993c,	// (0x00020974) tabs_3_passive_pane

0x994d,	// (0x00020985) tabs_3_passive_pane_cp_ParamLimits

0x994d,	// (0x00020985) tabs_3_passive_pane_cp

0x98e8,	// (0x00020920) tabs_4_active_pane_ParamLimits

0x98e8,	// (0x00020920) tabs_4_active_pane

0x98f9,	// (0x00020931) tabs_4_passive_pane_ParamLimits

0x98f9,	// (0x00020931) tabs_4_passive_pane

0x990a,	// (0x00020942) tabs_4_passive_pane_cp_ParamLimits

0x990a,	// (0x00020942) tabs_4_passive_pane_cp

0x991b,	// (0x00020953) tabs_4_passive_pane_cp2_ParamLimits

0x991b,	// (0x00020953) tabs_4_passive_pane_cp2

0x98c8,	// (0x00020900) tabs_2_long_active_pane_ParamLimits

0x98c8,	// (0x00020900) tabs_2_long_active_pane

0x98d8,	// (0x00020910) tabs_2_long_passive_pane_ParamLimits

0x98d8,	// (0x00020910) tabs_2_long_passive_pane

0x9893,	// (0x000208cb) tabs_3_long_active_pane_ParamLimits

0x9893,	// (0x000208cb) tabs_3_long_active_pane

0x98a4,	// (0x000208dc) tabs_3_long_passive_pane_ParamLimits

0x98a4,	// (0x000208dc) tabs_3_long_passive_pane

0x98b7,	// (0x000208ef) tabs_3_long_passive_pane_cp_ParamLimits

0x98b7,	// (0x000208ef) tabs_3_long_passive_pane_cp

0x5b75,	// (0x0001cbad) volume_small_pane_g1

0x9842,	// (0x0002087a) volume_small_pane_g2

0x984b,	// (0x00020883) volume_small_pane_g3

0x9854,	// (0x0002088c) volume_small_pane_g4

0x985d,	// (0x00020895) volume_small_pane_g5

0x9866,	// (0x0002089e) volume_small_pane_g6

0x986f,	// (0x000208a7) volume_small_pane_g7

0x9878,	// (0x000208b0) volume_small_pane_g8

0x9881,	// (0x000208b9) volume_small_pane_g9

0x988a,	// (0x000208c2) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000268f3) volume_small_pane_g

0xb885,	// (0x000228bd) bg_active_tab_pane_cp2_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp2

0x8549,	// (0x0001f581) tabs_3_active_pane_g1

0x8551,	// (0x0001f589) tabs_3_active_pane_t1

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp2_ParamLimits

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp2

0x8549,	// (0x0001f581) tabs_3_passive_pane_g1

0x8551,	// (0x0001f589) tabs_3_passive_pane_t1

0xb885,	// (0x000228bd) bg_active_tab_pane_cp3_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp3

0x8563,	// (0x0001f59b) tabs_4_active_pane_g1

0x856b,	// (0x0001f5a3) tabs_4_active_pane_t1

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp3_ParamLimits

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp3

0x8563,	// (0x0001f59b) tabs_4_1_passive_pane_g1

0x856b,	// (0x0001f5a3) tabs_4_1_passive_pane_t1

0xc031,	// (0x00023069) list_highlight_pane_cp2

0x9b69,	// (0x00020ba1) list_set_pane_ParamLimits

0x9b69,	// (0x00020ba1) list_set_pane

0x9c03,	// (0x00020c3b) main_pane_set_t1_ParamLimits

0x9c03,	// (0x00020c3b) main_pane_set_t1

0x9c23,	// (0x00020c5b) main_pane_set_t2_ParamLimits

0x9c23,	// (0x00020c5b) main_pane_set_t2

0x9c37,	// (0x00020c6f) main_pane_set_t3_ParamLimits

0x9c37,	// (0x00020c6f) main_pane_set_t3

0x9c49,	// (0x00020c81) main_pane_set_t4_ParamLimits

0x9c49,	// (0x00020c81) main_pane_set_t4

0x0003,

0xf98b,	// (0x000269c3) main_pane_set_t_ParamLimits

0xf98b,	// (0x000269c3) main_pane_set_t

0x9c5b,	// (0x00020c93) setting_code_pane

0x9c63,	// (0x00020c9b) setting_slider_graphic_pane

0x9c63,	// (0x00020c9b) setting_slider_pane

0x9c63,	// (0x00020c9b) setting_text_pane

0x9c63,	// (0x00020c9b) setting_volume_pane

0x53ed,	// (0x0001c425) volume_set_pane

0xb893,	// (0x000228cb) bg_set_opt_pane_cp

0x53f5,	// (0x0001c42d) setting_slider_pane_t1

0x540e,	// (0x0001c446) setting_slider_pane_t2

0x5427,	// (0x0001c45f) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000265b2) setting_slider_pane_t

0x543e,	// (0x0001c476) slider_set_pane

0xb837,	// (0x0002286f) bg_set_opt_pane_cp2

0xb8a1,	// (0x000228d9) setting_slider_graphic_pane_g1

0x5454,	// (0x0001c48c) setting_slider_graphic_pane_t1

0x5463,	// (0x0001c49b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000265b9) setting_slider_graphic_pane_t

0x5472,	// (0x0001c4aa) slider_set_pane_cp

0xb837,	// (0x0002286f) input_focus_pane_cp1

0xdfd1,	// (0x00025009) list_set_text_pane

0xb82d,	// (0x00022865) setting_text_pane_g1

0xb837,	// (0x0002286f) input_focus_pane_cp2

0xb82d,	// (0x00022865) setting_code_pane_g1

0xb8aa,	// (0x000228e2) setting_code_pane_t1

0x40a6,	// (0x0001b0de) set_text_pane_t1_ParamLimits

0x40a6,	// (0x0001b0de) set_text_pane_t1

0xbf41,	// (0x00022f79) set_opt_bg_pane_g1

0xbf49,	// (0x00022f81) set_opt_bg_pane_g2

0xdfb1,	// (0x00024fe9) set_opt_bg_pane_g3

0xbf59,	// (0x00022f91) set_opt_bg_pane_g4

0xbf61,	// (0x00022f99) set_opt_bg_pane_g5

0xbf69,	// (0x00022fa1) set_opt_bg_pane_g6

0xdfb9,	// (0x00024ff1) set_opt_bg_pane_g7

0xdfc1,	// (0x00024ff9) set_opt_bg_pane_g8

0xdfc9,	// (0x00025001) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x000269b0) set_opt_bg_pane_g

0xdfa4,	// (0x00024fdc) slider_set_pane_g1

0x5d43,	// (0x0001cd7b) slider_set_pane_g2

0x0006,

0xf969,	// (0x000269a1) slider_set_pane_g

0x5cdf,	// (0x0001cd17) volume_set_pane_g1

0x5ce7,	// (0x0001cd1f) volume_set_pane_g2

0x5cef,	// (0x0001cd27) volume_set_pane_g3

0x5cf7,	// (0x0001cd2f) volume_set_pane_g4

0x5cff,	// (0x0001cd37) volume_set_pane_g5

0x5d07,	// (0x0001cd3f) volume_set_pane_g6

0x5d0f,	// (0x0001cd47) volume_set_pane_g7

0x5d17,	// (0x0001cd4f) volume_set_pane_g8

0x5d1f,	// (0x0001cd57) volume_set_pane_g9

0x5d27,	// (0x0001cd5f) volume_set_pane_g10

0x0009,

0xf941,	// (0x00026979) volume_set_pane_g

0x857d,	// (0x0001f5b5) indicator_pane_ParamLimits

0x857d,	// (0x0001f5b5) indicator_pane

0x85a5,	// (0x0001f5dd) main_idle_pane_g2_ParamLimits

0x85a5,	// (0x0001f5dd) main_idle_pane_g2

0x85dd,	// (0x0001f615) main_pane_idle_g1_ParamLimits

0x85dd,	// (0x0001f615) main_pane_idle_g1

0xb8b8,	// (0x000228f0) popup_clock_digital_analogue_window_ParamLimits

0xb8b8,	// (0x000228f0) popup_clock_digital_analogue_window

0x8604,	// (0x0001f63c) soft_indicator_pane_ParamLimits

0x8604,	// (0x0001f63c) soft_indicator_pane

0x861e,	// (0x0001f656) wallpaper_pane_ParamLimits

0x861e,	// (0x0001f656) wallpaper_pane

0xb82d,	// (0x00022865) wallpaper_pane_g1

0x8630,	// (0x0001f668) indicator_pane_g1_ParamLimits

0x8630,	// (0x0001f668) indicator_pane_g1

0xe118,	// (0x00025150) navi_navi_icon_text_pane_srt_g1

0xb8e6,	// (0x0002291e) soft_indicator_pane_t1

0xb900,	// (0x00022938) aid_ps_area_pane

0x8649,	// (0x0001f681) aid_ps_clock_pane

0xb911,	// (0x00022949) aid_ps_indicator_pane

0xb91d,	// (0x00022955) indicator_ps_pane_ParamLimits

0xb91d,	// (0x00022955) indicator_ps_pane

0xb92c,	// (0x00022964) power_save_pane_g1_ParamLimits

0xb92c,	// (0x00022964) power_save_pane_g1

0xb938,	// (0x00022970) power_save_pane_g2_ParamLimits

0xb938,	// (0x00022970) power_save_pane_g2

0x501c,	// (0x0001c054) aid_navinavi_width_pane

0xb900,	// (0x00022938) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x000265be) power_save_pane_g_ParamLimits

0xf586,	// (0x000265be) power_save_pane_g

0xb946,	// (0x0002297e) power_save_pane_t1_ParamLimits

0xb946,	// (0x0002297e) power_save_pane_t1

0x8649,	// (0x0001f681) aid_ps_clock_pane_ParamLimits

0xb911,	// (0x00022949) aid_ps_indicator_pane_ParamLimits

0xb958,	// (0x00022990) power_save_pane_t4_ParamLimits

0xb958,	// (0x00022990) power_save_pane_t4

0x0001,

0xf58b,	// (0x000265c3) power_save_pane_t_ParamLimits

0xf58b,	// (0x000265c3) power_save_pane_t

0xb982,	// (0x000229ba) power_save_t3_ParamLimits

0xb982,	// (0x000229ba) power_save_t3

0xb96d,	// (0x000229a5) power_save_t2_ParamLimits

0xb96d,	// (0x000229a5) power_save_t2

0xb997,	// (0x000229cf) indicator_ps_pane_g1

0x8657,	// (0x0001f68f) ai_gene_pane_ParamLimits

0x8657,	// (0x0001f68f) ai_gene_pane

0x866e,	// (0x0001f6a6) ai_links_pane_ParamLimits

0x866e,	// (0x0001f6a6) ai_links_pane

0x8686,	// (0x0001f6be) indicator_pane_cp1_ParamLimits

0x8686,	// (0x0001f6be) indicator_pane_cp1

0x8695,	// (0x0001f6cd) main_pane_idle_g1_cp_ParamLimits

0x8695,	// (0x0001f6cd) main_pane_idle_g1_cp

0xb9a0,	// (0x000229d8) popup_ai_links_title_window

0x86ad,	// (0x0001f6e5) soft_indicator_pane_cp1_ParamLimits

0x86ad,	// (0x0001f6e5) soft_indicator_pane_cp1

0xddf8,	// (0x00024e30) ai_links_pane_g1

0xde01,	// (0x00024e39) grid_ai_links_pane

0x9aa9,	// (0x00020ae1) ai_gene_pane_1

0xdde6,	// (0x00024e1e) ai_gene_pane_2

0xddef,	// (0x00024e27) list_highlight_pane_cp4

0x9a85,	// (0x00020abd) cell_ai_link_pane_ParamLimits

0x9a85,	// (0x00020abd) cell_ai_link_pane

0xddde,	// (0x00024e16) cell_ai_link_pane_g1

0xbb4e,	// (0x00022b86) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00026954) cell_ai_link_pane_g

0xb837,	// (0x0002286f) grid_highlight_cp2

0xb837,	// (0x0002286f) bg_popup_sub_pane_cp1

0xb9b7,	// (0x000229ef) popup_ai_links_title_window_t1

0xdd2c,	// (0x00024d64) ai_gene_pane_1_g1_ParamLimits

0xdd2c,	// (0x00024d64) ai_gene_pane_1_g1

0xdd38,	// (0x00024d70) ai_gene_pane_1_g2_ParamLimits

0xdd38,	// (0x00024d70) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0002694a) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0002694a) ai_gene_pane_1_g

0xdd45,	// (0x00024d7d) ai_gene_pane_1_t1_ParamLimits

0xdd45,	// (0x00024d7d) ai_gene_pane_1_t1

0xdd79,	// (0x00024db1) grid_ai_soft_ind_pane

0xdd17,	// (0x00024d4f) ai_gene_pane_2_t1_ParamLimits

0xdd17,	// (0x00024d4f) ai_gene_pane_2_t1

0x86c1,	// (0x0001f6f9) main_pane_empty_t1_ParamLimits

0x86c1,	// (0x0001f6f9) main_pane_empty_t1

0x86d9,	// (0x0001f711) main_pane_empty_t2_ParamLimits

0x86d9,	// (0x0001f711) main_pane_empty_t2

0x86ee,	// (0x0001f726) main_pane_empty_t3_ParamLimits

0x86ee,	// (0x0001f726) main_pane_empty_t3

0x8700,	// (0x0001f738) main_pane_empty_t4_ParamLimits

0x8700,	// (0x0001f738) main_pane_empty_t4

0x8712,	// (0x0001f74a) main_pane_empty_t5_ParamLimits

0x8712,	// (0x0001f74a) main_pane_empty_t5

0x0004,

0xf590,	// (0x000265c8) main_pane_empty_t_ParamLimits

0xf590,	// (0x000265c8) main_pane_empty_t

0xbf92,	// (0x00022fca) bg_popup_window_pane_ParamLimits

0xbf92,	// (0x00022fca) bg_popup_window_pane

0xdad7,	// (0x00024b0f) find_popup_pane_cp2_ParamLimits

0xdad7,	// (0x00024b0f) find_popup_pane_cp2

0xdae3,	// (0x00024b1b) heading_pane_ParamLimits

0xdae3,	// (0x00024b1b) heading_pane

0xb837,	// (0x0002286f) bg_popup_sub_pane

0x99a3,	// (0x000209db) bg_popup_window_pane_g1_ParamLimits

0x99a3,	// (0x000209db) bg_popup_window_pane_g1

0x99b2,	// (0x000209ea) bg_popup_window_pane_g2_ParamLimits

0x99b2,	// (0x000209ea) bg_popup_window_pane_g2

0x99be,	// (0x000209f6) bg_popup_window_pane_g3_ParamLimits

0x99be,	// (0x000209f6) bg_popup_window_pane_g3

0x99ca,	// (0x00020a02) bg_popup_window_pane_g4_ParamLimits

0x99ca,	// (0x00020a02) bg_popup_window_pane_g4

0x99d9,	// (0x00020a11) bg_popup_window_pane_g5_ParamLimits

0x99d9,	// (0x00020a11) bg_popup_window_pane_g5

0x99e9,	// (0x00020a21) bg_popup_window_pane_g6_ParamLimits

0x99e9,	// (0x00020a21) bg_popup_window_pane_g6

0x99f5,	// (0x00020a2d) bg_popup_window_pane_g7_ParamLimits

0x99f5,	// (0x00020a2d) bg_popup_window_pane_g7

0x9a04,	// (0x00020a3c) bg_popup_window_pane_g8_ParamLimits

0x9a04,	// (0x00020a3c) bg_popup_window_pane_g8

0x9a13,	// (0x00020a4b) bg_popup_window_pane_g9_ParamLimits

0x9a13,	// (0x00020a4b) bg_popup_window_pane_g9

0xdabd,	// (0x00024af5) bg_popup_window_pane_g10_ParamLimits

0xdabd,	// (0x00024af5) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00026912) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00026912) bg_popup_window_pane_g

0xda74,	// (0x00024aac) bg_popup_heading_pane_ParamLimits

0xda74,	// (0x00024aac) bg_popup_heading_pane

0x5dcb,	// (0x0001ce03) tabs_4_passive_pane_cp_srt_ParamLimits

0x5dcb,	// (0x0001ce03) tabs_4_passive_pane_cp_srt

0x5ddd,	// (0x0001ce15) tabs_4_passive_pane_srt_ParamLimits

0xda88,	// (0x00024ac0) heading_pane_g2

0x5ddd,	// (0x0001ce15) tabs_4_passive_pane_srt

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp3_srt

0xda90,	// (0x00024ac8) heading_pane_t1_ParamLimits

0xda90,	// (0x00024ac8) heading_pane_t1

0xdaa7,	// (0x00024adf) heading_pane_t2_ParamLimits

0xdaa7,	// (0x00024adf) heading_pane_t2

0x0001,

0xf8d5,	// (0x0002690d) heading_pane_t_ParamLimits

0xf8d5,	// (0x0002690d) heading_pane_t

0xd5a3,	// (0x000245db) bg_popup_heading_pane_g1

0xd634,	// (0x0002466c) bg_popup_heading_pane_g2

0xd63e,	// (0x00024676) bg_popup_heading_pane_g3

0xd648,	// (0x00024680) bg_popup_heading_pane_g4

0xd652,	// (0x0002468a) bg_popup_heading_pane_g5

0xd65c,	// (0x00024694) bg_popup_heading_pane_g6

0xd664,	// (0x0002469c) bg_popup_heading_pane_g7

0xd66c,	// (0x000246a4) bg_popup_heading_pane_g8

0xd676,	// (0x000246ae) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000268c9) bg_popup_heading_pane_g

0xce69,	// (0x00023ea1) bg_popup_sub_pane_g1

0xce71,	// (0x00023ea9) bg_popup_sub_pane_g2

0xce79,	// (0x00023eb1) bg_popup_sub_pane_g3

0xce81,	// (0x00023eb9) bg_popup_sub_pane_g4

0xce89,	// (0x00023ec1) bg_popup_sub_pane_g5

0xce91,	// (0x00023ec9) bg_popup_sub_pane_g6

0xce99,	// (0x00023ed1) bg_popup_sub_pane_g7

0xcea1,	// (0x00023ed9) bg_popup_sub_pane_g8

0xcea9,	// (0x00023ee1) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x000268a3) bg_popup_sub_pane_g

0xb885,	// (0x000228bd) bg_popup_window_pane_cp5_ParamLimits

0xb885,	// (0x000228bd) bg_popup_window_pane_cp5

0xb9d4,	// (0x00022a0c) popup_note_window_g1_ParamLimits

0xb9d4,	// (0x00022a0c) popup_note_window_g1

0xb9e0,	// (0x00022a18) popup_note_window_t1_ParamLimits

0xb9e0,	// (0x00022a18) popup_note_window_t1

0xb9f2,	// (0x00022a2a) popup_note_window_t2_ParamLimits

0xb9f2,	// (0x00022a2a) popup_note_window_t2

0xba04,	// (0x00022a3c) popup_note_window_t3_ParamLimits

0xba04,	// (0x00022a3c) popup_note_window_t3

0xba16,	// (0x00022a4e) popup_note_window_t4_ParamLimits

0xba16,	// (0x00022a4e) popup_note_window_t4

0xba3e,	// (0x00022a76) popup_note_window_t5_ParamLimits

0xba3e,	// (0x00022a76) popup_note_window_t5

0x0004,

0xf59b,	// (0x000265d3) popup_note_window_t_ParamLimits

0xf59b,	// (0x000265d3) popup_note_window_t

0xba62,	// (0x00022a9a) bg_popup_window_pane_cp6_ParamLimits

0xba62,	// (0x00022a9a) bg_popup_window_pane_cp6

0xd517,	// (0x0002454f) popup_note_image_window_g1_ParamLimits

0xd517,	// (0x0002454f) popup_note_image_window_g1

0xd523,	// (0x0002455b) popup_note_image_window_g2_ParamLimits

0xd523,	// (0x0002455b) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00026897) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00026897) popup_note_image_window_g

0xd53c,	// (0x00024574) popup_note_image_window_t1_ParamLimits

0xd53c,	// (0x00024574) popup_note_image_window_t1

0xd555,	// (0x0002458d) popup_note_image_window_t2_ParamLimits

0xd555,	// (0x0002458d) popup_note_image_window_t2

0xd56e,	// (0x000245a6) popup_note_image_window_t3_ParamLimits

0xd56e,	// (0x000245a6) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0002689c) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0002689c) popup_note_image_window_t

0xd3f4,	// (0x0002442c) bg_popup_window_pane_cp7_ParamLimits

0xd3f4,	// (0x0002442c) bg_popup_window_pane_cp7

0xd424,	// (0x0002445c) popup_note_wait_window_g1_ParamLimits

0xd424,	// (0x0002445c) popup_note_wait_window_g1

0xd430,	// (0x00024468) popup_note_wait_window_g2_ParamLimits

0xd430,	// (0x00024468) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00026885) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00026885) popup_note_wait_window_g

0xd448,	// (0x00024480) popup_note_wait_window_t1_ParamLimits

0xd448,	// (0x00024480) popup_note_wait_window_t1

0xd46f,	// (0x000244a7) popup_note_wait_window_t2_ParamLimits

0xd46f,	// (0x000244a7) popup_note_wait_window_t2

0xd48c,	// (0x000244c4) popup_note_wait_window_t3_ParamLimits

0xd48c,	// (0x000244c4) popup_note_wait_window_t3

0xd49f,	// (0x000244d7) popup_note_wait_window_t4_ParamLimits

0xd49f,	// (0x000244d7) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0002688c) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0002688c) popup_note_wait_window_t

0xd4c4,	// (0x000244fc) wait_bar_pane_ParamLimits

0xd4c4,	// (0x000244fc) wait_bar_pane

0xb837,	// (0x0002286f) wait_anim_pane

0xb837,	// (0x0002286f) wait_border_pane

0xb82d,	// (0x00022865) wait_anim_pane_g1

0xb82d,	// (0x00022865) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00026757) wait_anim_pane_g

0xd398,	// (0x000243d0) wait_border_pane_g1

0xd3a3,	// (0x000243db) wait_border_pane_g2

0xd3ac,	// (0x000243e4) wait_border_pane_g3

0x0002,

0xf846,	// (0x0002687e) wait_border_pane_g

0xd208,	// (0x00024240) bg_popup_window_pane_cp16_ParamLimits

0xd208,	// (0x00024240) bg_popup_window_pane_cp16

0xd308,	// (0x00024340) indicator_popup_pane_cp4_ParamLimits

0xd308,	// (0x00024340) indicator_popup_pane_cp4

0xd31c,	// (0x00024354) popup_query_data_window_t1_ParamLimits

0xd31c,	// (0x00024354) popup_query_data_window_t1

0xd32e,	// (0x00024366) popup_query_data_window_t2_ParamLimits

0xd32e,	// (0x00024366) popup_query_data_window_t2

0xd347,	// (0x0002437f) popup_query_data_window_t3_ParamLimits

0xd347,	// (0x0002437f) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00026877) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00026877) popup_query_data_window_t

0xd361,	// (0x00024399) query_popup_data_pane_ParamLimits

0xd361,	// (0x00024399) query_popup_data_pane

0xd375,	// (0x000243ad) query_popup_data_pane_cp1_ParamLimits

0xd375,	// (0x000243ad) query_popup_data_pane_cp1

0xd208,	// (0x00024240) bg_popup_window_pane_cp10_ParamLimits

0xd208,	// (0x00024240) bg_popup_window_pane_cp10

0xd23a,	// (0x00024272) indicator_popup_pane_ParamLimits

0xd23a,	// (0x00024272) indicator_popup_pane

0xd25c,	// (0x00024294) popup_query_code_window_t1_ParamLimits

0xd25c,	// (0x00024294) popup_query_code_window_t1

0xd276,	// (0x000242ae) popup_query_code_window_t2_ParamLimits

0xd276,	// (0x000242ae) popup_query_code_window_t2

0xd2bf,	// (0x000242f7) popup_query_code_window_t3_ParamLimits

0xd2bf,	// (0x000242f7) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00026870) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00026870) popup_query_code_window_t

0xd2ee,	// (0x00024326) query_popup_pane_ParamLimits

0xd2ee,	// (0x00024326) query_popup_pane

0xba62,	// (0x00022a9a) bg_popup_window_pane_cp15_ParamLimits

0xba62,	// (0x00022a9a) bg_popup_window_pane_cp15

0xba80,	// (0x00022ab8) indicator_popup_pane_cp1_ParamLimits

0xba80,	// (0x00022ab8) indicator_popup_pane_cp1

0xba93,	// (0x00022acb) indicator_popup_pane_cp2_ParamLimits

0xba93,	// (0x00022acb) indicator_popup_pane_cp2

0xbaa6,	// (0x00022ade) popup_query_data_code_window_g1_ParamLimits

0xbaa6,	// (0x00022ade) popup_query_data_code_window_g1

0xbab9,	// (0x00022af1) popup_query_data_code_window_t1_ParamLimits

0xbab9,	// (0x00022af1) popup_query_data_code_window_t1

0xbacb,	// (0x00022b03) popup_query_data_code_window_t2_ParamLimits

0xbacb,	// (0x00022b03) popup_query_data_code_window_t2

0xbadd,	// (0x00022b15) popup_query_data_code_window_t3_ParamLimits

0xbadd,	// (0x00022b15) popup_query_data_code_window_t3

0xbaf3,	// (0x00022b2b) popup_query_data_code_window_t4_ParamLimits

0xbaf3,	// (0x00022b2b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000265de) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000265de) popup_query_data_code_window_t

0xc74d,	// (0x00023785) list_single_midp_graphic_pane_g3

0xbb0b,	// (0x00022b43) query_popup_data_pane_cp2_ParamLimits

0xbb1e,	// (0x00022b56) query_popup_pane_cp2_ParamLimits

0xbb1e,	// (0x00022b56) query_popup_pane_cp2

0xb837,	// (0x0002286f) bg_popup_window_pane_cp11

0xd200,	// (0x00024238) heading_pane_cp5

0xbbac,	// (0x00022be4) listscroll_popup_info_pane

0xb837,	// (0x0002286f) input_focus_pane_cp3

0xbb31,	// (0x00022b69) query_popup_pane_t1

0xbb3f,	// (0x00022b77) list_popup_info_pane_ParamLimits

0xbb3f,	// (0x00022b77) list_popup_info_pane

0xbb4e,	// (0x00022b86) listscroll_popup_info_pane_g1

0xbb56,	// (0x00022b8e) scroll_pane_cp7

0xbb60,	// (0x00022b98) popup_info_list_pane_t1_ParamLimits

0xbb60,	// (0x00022b98) popup_info_list_pane_t1

0xbb7a,	// (0x00022bb2) popup_info_list_pane_t2_ParamLimits

0xbb7a,	// (0x00022bb2) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000265e7) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000265e7) popup_info_list_pane_t

0xb837,	// (0x0002286f) bg_popup_window_pane_cp12

0xe132,	// (0x0002516a) find_popup_pane

0xb893,	// (0x000228cb) bg_popup_window_pane_cp3

0xbb94,	// (0x00022bcc) heading_pane_cp3

0xbba0,	// (0x00022bd8) listscroll_popup_graphic_pane

0xb837,	// (0x0002286f) bg_popup_window_pane_cp4

0x8774,	// (0x0001f7ac) heading_pane_cp4

0xbbac,	// (0x00022be4) listscroll_popup_colour_pane

0xbbb4,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbbb4,	// (0x00022bec) cell_large_graphic_colour_none_popup_pane

0x877c,	// (0x0001f7b4) grid_large_graphic_colour_popup_pane_ParamLimits

0x877c,	// (0x0001f7b4) grid_large_graphic_colour_popup_pane

0xbbc8,	// (0x00022c00) listscroll_popup_colour_pane_g1_ParamLimits

0xbbc8,	// (0x00022c00) listscroll_popup_colour_pane_g1

0xbbdf,	// (0x00022c17) listscroll_popup_colour_pane_g2_ParamLimits

0xbbdf,	// (0x00022c17) listscroll_popup_colour_pane_g2

0xbbf6,	// (0x00022c2e) listscroll_popup_colour_pane_g3_ParamLimits

0xbbf6,	// (0x00022c2e) listscroll_popup_colour_pane_g3

0x87a0,	// (0x0001f7d8) listscroll_popup_colour_pane_g4_ParamLimits

0x87a0,	// (0x0001f7d8) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000265ec) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000265ec) listscroll_popup_colour_pane_g

0xbc06,	// (0x00022c3e) scroll_pane_cp6_ParamLimits

0xbc06,	// (0x00022c3e) scroll_pane_cp6

0x87af,	// (0x0001f7e7) cell_large_graphic_colour_popup_pane_ParamLimits

0x87af,	// (0x0001f7e7) cell_large_graphic_colour_popup_pane

0xbc18,	// (0x00022c50) cell_large_graphic_colour_none_popup_pane_t1

0xb837,	// (0x0002286f) grid_highlight_pane_cp5

0xbc27,	// (0x00022c5f) cell_large_graphic_colour_popup_pane_g1

0xbc2f,	// (0x00022c67) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000265f5) cell_large_graphic_colour_popup_pane_g

0xbc37,	// (0x00022c6f) cell_large_graphic_colour_popup_pane_g2_copy1

0xbc40,	// (0x00022c78) grid_highlight_pane_cp4

0xbc48,	// (0x00022c80) bg_popup_window_pane_cp8_ParamLimits

0xbc48,	// (0x00022c80) bg_popup_window_pane_cp8

0xbc63,	// (0x00022c9b) popup_snote_single_text_window_g1_ParamLimits

0xbc63,	// (0x00022c9b) popup_snote_single_text_window_g1

0xbc75,	// (0x00022cad) popup_snote_single_text_window_t1_ParamLimits

0xbc75,	// (0x00022cad) popup_snote_single_text_window_t1

0xbc88,	// (0x00022cc0) popup_snote_single_text_window_t2_ParamLimits

0xbc88,	// (0x00022cc0) popup_snote_single_text_window_t2

0xbc9b,	// (0x00022cd3) popup_snote_single_text_window_t3_ParamLimits

0xbc9b,	// (0x00022cd3) popup_snote_single_text_window_t3

0xbcd4,	// (0x00022d0c) popup_snote_single_text_window_t4_ParamLimits

0xbcd4,	// (0x00022d0c) popup_snote_single_text_window_t4

0xbd08,	// (0x00022d40) popup_snote_single_text_window_t5_ParamLimits

0xbd08,	// (0x00022d40) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000265fa) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000265fa) popup_snote_single_text_window_t

0xbd37,	// (0x00022d6f) bg_popup_window_pane_cp9_ParamLimits

0xbd37,	// (0x00022d6f) bg_popup_window_pane_cp9

0xbc63,	// (0x00022c9b) popup_snote_single_graphic_window_g1_ParamLimits

0xbc63,	// (0x00022c9b) popup_snote_single_graphic_window_g1

0xbd45,	// (0x00022d7d) popup_snote_single_graphic_window_g2_ParamLimits

0xbd45,	// (0x00022d7d) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00026605) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00026605) popup_snote_single_graphic_window_g

0xbd51,	// (0x00022d89) popup_snote_single_graphic_window_t1_ParamLimits

0xbd51,	// (0x00022d89) popup_snote_single_graphic_window_t1

0xbd64,	// (0x00022d9c) popup_snote_single_graphic_window_t2_ParamLimits

0xbd64,	// (0x00022d9c) popup_snote_single_graphic_window_t2

0xbd77,	// (0x00022daf) popup_snote_single_graphic_window_t3_ParamLimits

0xbd77,	// (0x00022daf) popup_snote_single_graphic_window_t3

0xbdb0,	// (0x00022de8) popup_snote_single_graphic_window_t4_ParamLimits

0xbdb0,	// (0x00022de8) popup_snote_single_graphic_window_t4

0xbde4,	// (0x00022e1c) popup_snote_single_graphic_window_t5_ParamLimits

0xbde4,	// (0x00022e1c) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002660a) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002660a) popup_snote_single_graphic_window_t

0xe0b6,	// (0x000250ee) grid_graphic_popup_pane_ParamLimits

0xe0b6,	// (0x000250ee) grid_graphic_popup_pane

0xe0e2,	// (0x0002511a) listscroll_popup_graphic_pane_g1_ParamLimits

0xe0e2,	// (0x0002511a) listscroll_popup_graphic_pane_g1

0x9d74,	// (0x00020dac) listscroll_popup_graphic_pane_g2_ParamLimits

0x9d74,	// (0x00020dac) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x000269ed) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x000269ed) listscroll_popup_graphic_pane_g

0xd9e4,	// (0x00024a1c) scroll_pane_cp5

0x9d37,	// (0x00020d6f) cell_graphic_popup_pane_ParamLimits

0x9d37,	// (0x00020d6f) cell_graphic_popup_pane

0xe081,	// (0x000250b9) cell_graphic_popup_pane_g1

0xe089,	// (0x000250c1) cell_graphic_popup_pane_g2

0xbc37,	// (0x00022c6f) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x000269e6) cell_graphic_popup_pane_g

0xe092,	// (0x000250ca) cell_graphic_popup_pane_t2

0xbc40,	// (0x00022c78) grid_highlight_pane_cp3

0xbe25,	// (0x00022e5d) list_gen_pane_ParamLimits

0xbe25,	// (0x00022e5d) list_gen_pane

0xbe4d,	// (0x00022e85) scroll_pane

0x9cf2,	// (0x00020d2a) bg_list_pane_g1_ParamLimits

0x9cf2,	// (0x00020d2a) bg_list_pane_g1

0xe030,	// (0x00025068) bg_list_pane_g2_ParamLimits

0xe030,	// (0x00025068) bg_list_pane_g2

0xe043,	// (0x0002507b) bg_list_pane_g3_ParamLimits

0xe043,	// (0x0002507b) bg_list_pane_g3

0xe055,	// (0x0002508d) bg_list_pane_g4_ParamLimits

0xe055,	// (0x0002508d) bg_list_pane_g4

0x9d0d,	// (0x00020d45) bg_list_pane_g5_ParamLimits

0x9d0d,	// (0x00020d45) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x000269db) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x000269db) bg_list_pane_g

0x9ca5,	// (0x00020cdd) list_double2_graphic_large_graphic_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double2_graphic_large_graphic_pane

0x9ca5,	// (0x00020cdd) list_double2_graphic_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double2_graphic_pane

0x9ca5,	// (0x00020cdd) list_double2_large_graphic_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double2_large_graphic_pane

0x9cb8,	// (0x00020cf0) list_double2_pane_ParamLimits

0x9cb8,	// (0x00020cf0) list_double2_pane

0x9ca5,	// (0x00020cdd) list_double_graphic_heading_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_graphic_heading_pane

0x9ca5,	// (0x00020cdd) list_double_graphic_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_graphic_pane

0x9ca5,	// (0x00020cdd) list_double_heading_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_heading_pane

0x9ca5,	// (0x00020cdd) list_double_large_graphic_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_large_graphic_pane

0x9ca5,	// (0x00020cdd) list_double_number_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_number_pane

0x9ca5,	// (0x00020cdd) list_double_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_pane

0x9ca5,	// (0x00020cdd) list_double_time_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_double_time_pane

0x9ca5,	// (0x00020cdd) list_setting_number_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_setting_number_pane

0x9ca5,	// (0x00020cdd) list_setting_pane_ParamLimits

0x9ca5,	// (0x00020cdd) list_setting_pane

0x8191,	// (0x0001f1c9) list_single_2graphic_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_2graphic_pane

0x8191,	// (0x0001f1c9) list_single_graphic_heading_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_graphic_heading_pane

0x8191,	// (0x0001f1c9) list_single_graphic_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_graphic_pane

0x8191,	// (0x0001f1c9) list_single_heading_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_heading_pane

0x9cb8,	// (0x00020cf0) list_single_large_graphic_pane_ParamLimits

0x9cb8,	// (0x00020cf0) list_single_large_graphic_pane

0x8191,	// (0x0001f1c9) list_single_number_heading_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_number_heading_pane

0x8191,	// (0x0001f1c9) list_single_number_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_number_pane

0x8191,	// (0x0001f1c9) list_single_pane_ParamLimits

0x8191,	// (0x0001f1c9) list_single_pane

0xb837,	// (0x0002286f) list_highlight_pane_cp1

0x40cc,	// (0x0001b104) list_single_pane_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_pane_g1

0x40d8,	// (0x0001b110) list_single_pane_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_pane_g

0x492b,	// (0x0001b963) list_single_pane_t1_ParamLimits

0x492b,	// (0x0001b963) list_single_pane_t1

0x40cc,	// (0x0001b104) list_single_number_pane_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_number_pane_g1

0x40d8,	// (0x0001b110) list_single_number_pane_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_number_pane_g

0x485f,	// (0x0001b897) list_single_number_pane_t1_ParamLimits

0x485f,	// (0x0001b897) list_single_number_pane_t1

0x48eb,	// (0x0001b923) list_single_number_pane_t2_ParamLimits

0x48eb,	// (0x0001b923) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0002699c) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0002699c) list_single_number_pane_t

0x40c0,	// (0x0001b0f8) list_single_graphic_pane_g1_ParamLimits

0x40c0,	// (0x0001b0f8) list_single_graphic_pane_g1

0x40cc,	// (0x0001b104) list_single_graphic_pane_g2_ParamLimits

0x40cc,	// (0x0001b104) list_single_graphic_pane_g2

0x40d8,	// (0x0001b110) list_single_graphic_pane_g3_ParamLimits

0x40d8,	// (0x0001b110) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00026615) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00026615) list_single_graphic_pane_g

0x40e4,	// (0x0001b11c) list_single_graphic_pane_t1_ParamLimits

0x40e4,	// (0x0001b11c) list_single_graphic_pane_t1

0x40cc,	// (0x0001b104) list_single_heading_pane_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_heading_pane_g1

0x40d8,	// (0x0001b110) list_single_heading_pane_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_heading_pane_g

0x40fa,	// (0x0001b132) list_single_heading_pane_t1_ParamLimits

0x40fa,	// (0x0001b132) list_single_heading_pane_t1

0x4110,	// (0x0001b148) list_single_heading_pane_t2_ParamLimits

0x4110,	// (0x0001b148) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00026621) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00026621) list_single_heading_pane_t

0x40cc,	// (0x0001b104) list_single_number_heading_pane_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_number_heading_pane_g1

0x40d8,	// (0x0001b110) list_single_number_heading_pane_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_number_heading_pane_g

0x40fa,	// (0x0001b132) list_single_number_heading_pane_t1_ParamLimits

0x40fa,	// (0x0001b132) list_single_number_heading_pane_t1

0x4122,	// (0x0001b15a) list_single_number_heading_pane_t2_ParamLimits

0x4122,	// (0x0001b15a) list_single_number_heading_pane_t2

0x4134,	// (0x0001b16c) list_single_number_heading_pane_t3_ParamLimits

0x4134,	// (0x0001b16c) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00026626) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00026626) list_single_number_heading_pane_t

0x4146,	// (0x0001b17e) list_single_graphic_heading_pane_g1_ParamLimits

0x4146,	// (0x0001b17e) list_single_graphic_heading_pane_g1

0x7c3f,	// (0x0001ec77) list_single_graphic_heading_pane_g4_ParamLimits

0x7c3f,	// (0x0001ec77) list_single_graphic_heading_pane_g4

0x40d8,	// (0x0001b110) list_single_graphic_heading_pane_g5_ParamLimits

0x40d8,	// (0x0001b110) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002662d) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002662d) list_single_graphic_heading_pane_g

0x40fa,	// (0x0001b132) list_single_graphic_heading_pane_t1_ParamLimits

0x40fa,	// (0x0001b132) list_single_graphic_heading_pane_t1

0x4163,	// (0x0001b19b) list_single_graphic_heading_pane_t2_ParamLimits

0x4163,	// (0x0001b19b) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00026634) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00026634) list_single_graphic_heading_pane_t

0x4a70,	// (0x0001baa8) list_single_large_graphic_pane_g1_ParamLimits

0x4a70,	// (0x0001baa8) list_single_large_graphic_pane_g1

0x4a7c,	// (0x0001bab4) list_single_large_graphic_pane_g2_ParamLimits

0x4a7c,	// (0x0001bab4) list_single_large_graphic_pane_g2

0x4a88,	// (0x0001bac0) list_single_large_graphic_pane_g3_ParamLimits

0x4a88,	// (0x0001bac0) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00026639) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00026639) list_single_large_graphic_pane_g

0xd3a3,	// (0x000243db) wait_border_pane_g2_copy1

0x7c50,	// (0x0001ec88) list_single_large_graphic_pane_g4_cp2

0x4a94,	// (0x0001bacc) list_single_large_graphic_pane_t1_ParamLimits

0x4a94,	// (0x0001bacc) list_single_large_graphic_pane_t1

0x7c58,	// (0x0001ec90) list_double_pane_g1_ParamLimits

0x7c58,	// (0x0001ec90) list_double_pane_g1

0x7c64,	// (0x0001ec9c) list_double_pane_g2_ParamLimits

0x7c64,	// (0x0001ec9c) list_double_pane_g2

0x0001,

0xf608,	// (0x00026640) list_double_pane_g_ParamLimits

0xf608,	// (0x00026640) list_double_pane_g

0x7c70,	// (0x0001eca8) list_double_pane_t1_ParamLimits

0x7c70,	// (0x0001eca8) list_double_pane_t1

0x7c86,	// (0x0001ecbe) list_double_pane_t2_ParamLimits

0x7c86,	// (0x0001ecbe) list_double_pane_t2

0x0001,

0xf60d,	// (0x00026645) list_double_pane_t_ParamLimits

0xf60d,	// (0x00026645) list_double_pane_t

0x7c98,	// (0x0001ecd0) list_double2_pane_g1_ParamLimits

0x7c98,	// (0x0001ecd0) list_double2_pane_g1

0x439c,	// (0x0001b3d4) list_double2_pane_g2_ParamLimits

0x439c,	// (0x0001b3d4) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002664a) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002664a) list_double2_pane_g

0x7ca9,	// (0x0001ece1) list_double2_pane_t1_ParamLimits

0x7ca9,	// (0x0001ece1) list_double2_pane_t1

0x7cbf,	// (0x0001ecf7) list_double2_pane_t2_ParamLimits

0x7cbf,	// (0x0001ecf7) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002664f) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002664f) list_double2_pane_t

0x7c58,	// (0x0001ec90) list_double_number_pane_g1_ParamLimits

0x7c58,	// (0x0001ec90) list_double_number_pane_g1

0x7c64,	// (0x0001ec9c) list_double_number_pane_g2_ParamLimits

0x7c64,	// (0x0001ec9c) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00026640) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00026640) list_double_number_pane_g

0x7cd1,	// (0x0001ed09) list_double_number_pane_t1_ParamLimits

0x7cd1,	// (0x0001ed09) list_double_number_pane_t1

0x7ce3,	// (0x0001ed1b) list_double_number_pane_t2_ParamLimits

0x7ce3,	// (0x0001ed1b) list_double_number_pane_t2

0x7cf9,	// (0x0001ed31) list_double_number_pane_t3_ParamLimits

0x7cf9,	// (0x0001ed31) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00026654) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00026654) list_double_number_pane_t

0x7d0b,	// (0x0001ed43) list_double_graphic_pane_g1_ParamLimits

0x7d0b,	// (0x0001ed43) list_double_graphic_pane_g1

0x7d17,	// (0x0001ed4f) list_double_graphic_pane_g2_ParamLimits

0x7d17,	// (0x0001ed4f) list_double_graphic_pane_g2

0x7d26,	// (0x0001ed5e) list_double_graphic_pane_g3_ParamLimits

0x7d26,	// (0x0001ed5e) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002665b) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002665b) list_double_graphic_pane_g

0x7d3e,	// (0x0001ed76) list_double_graphic_pane_t1_ParamLimits

0x7d3e,	// (0x0001ed76) list_double_graphic_pane_t1

0x7d54,	// (0x0001ed8c) list_double_graphic_pane_t2_ParamLimits

0x7d54,	// (0x0001ed8c) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00026664) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00026664) list_double_graphic_pane_t

0x7d0b,	// (0x0001ed43) list_double2_graphic_pane_g1_ParamLimits

0x7d0b,	// (0x0001ed43) list_double2_graphic_pane_g1

0x7d66,	// (0x0001ed9e) list_double2_graphic_pane_g2_ParamLimits

0x7d66,	// (0x0001ed9e) list_double2_graphic_pane_g2

0x7d72,	// (0x0001edaa) list_double2_graphic_pane_g3_ParamLimits

0x7d72,	// (0x0001edaa) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00026669) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00026669) list_double2_graphic_pane_g

0x7ce3,	// (0x0001ed1b) list_double2_graphic_pane_t1_ParamLimits

0x7ce3,	// (0x0001ed1b) list_double2_graphic_pane_t1

0x7d7e,	// (0x0001edb6) list_double2_graphic_pane_t2_ParamLimits

0x7d7e,	// (0x0001edb6) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00026670) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00026670) list_double2_graphic_pane_t

0x7d90,	// (0x0001edc8) list_double_large_graphic_pane_g1_ParamLimits

0x7d90,	// (0x0001edc8) list_double_large_graphic_pane_g1

0x7dbb,	// (0x0001edf3) list_double_large_graphic_pane_g2_ParamLimits

0x7dbb,	// (0x0001edf3) list_double_large_graphic_pane_g2

0x7c64,	// (0x0001ec9c) list_double_large_graphic_pane_g3_ParamLimits

0x7c64,	// (0x0001ec9c) list_double_large_graphic_pane_g3

0x7dcc,	// (0x0001ee04) list_double_large_graphic_pane_g4_ParamLimits

0x7dcc,	// (0x0001ee04) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00026675) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00026675) list_double_large_graphic_pane_g

0x7dde,	// (0x0001ee16) list_double_large_graphic_pane_t1_ParamLimits

0x7dde,	// (0x0001ee16) list_double_large_graphic_pane_t1

0x7df7,	// (0x0001ee2f) list_double_large_graphic_pane_t2_ParamLimits

0x7df7,	// (0x0001ee2f) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00026680) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00026680) list_double_large_graphic_pane_t

0x7e09,	// (0x0001ee41) list_double2_large_graphic_pane_g1_ParamLimits

0x7e09,	// (0x0001ee41) list_double2_large_graphic_pane_g1

0x7dbb,	// (0x0001edf3) list_double2_large_graphic_pane_g2_ParamLimits

0x7dbb,	// (0x0001edf3) list_double2_large_graphic_pane_g2

0x7c64,	// (0x0001ec9c) list_double2_large_graphic_pane_g3_ParamLimits

0x7c64,	// (0x0001ec9c) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00026685) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00026685) list_double2_large_graphic_pane_g

0x7e15,	// (0x0001ee4d) list_double2_large_graphic_pane_t1_ParamLimits

0x7e15,	// (0x0001ee4d) list_double2_large_graphic_pane_t1

0x7e2b,	// (0x0001ee63) list_double2_large_graphic_pane_t2_ParamLimits

0x7e2b,	// (0x0001ee63) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002668c) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002668c) list_double2_large_graphic_pane_t

0x7e3d,	// (0x0001ee75) list_double_heading_pane_g1_ParamLimits

0x7e3d,	// (0x0001ee75) list_double_heading_pane_g1

0x41c3,	// (0x0001b1fb) list_double_heading_pane_g2_ParamLimits

0x41c3,	// (0x0001b1fb) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00026691) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00026691) list_double_heading_pane_g

0x7e4e,	// (0x0001ee86) list_double_heading_pane_t1_ParamLimits

0x7e4e,	// (0x0001ee86) list_double_heading_pane_t1

0x7e64,	// (0x0001ee9c) list_double_heading_pane_t2_ParamLimits

0x7e64,	// (0x0001ee9c) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00026696) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00026696) list_double_heading_pane_t

0x4254,	// (0x0001b28c) list_double_graphic_heading_pane_g1_ParamLimits

0x4254,	// (0x0001b28c) list_double_graphic_heading_pane_g1

0x7e3d,	// (0x0001ee75) list_double_graphic_heading_pane_g2_ParamLimits

0x7e3d,	// (0x0001ee75) list_double_graphic_heading_pane_g2

0x41c3,	// (0x0001b1fb) list_double_graphic_heading_pane_g3_ParamLimits

0x41c3,	// (0x0001b1fb) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002669b) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002669b) list_double_graphic_heading_pane_g

0x7e76,	// (0x0001eeae) list_double_graphic_heading_pane_t1_ParamLimits

0x7e76,	// (0x0001eeae) list_double_graphic_heading_pane_t1

0x7d7e,	// (0x0001edb6) list_double_graphic_heading_pane_t2_ParamLimits

0x7d7e,	// (0x0001edb6) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x000266a2) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x000266a2) list_double_graphic_heading_pane_t

0x7dbb,	// (0x0001edf3) list_double_time_pane_g1_ParamLimits

0x7dbb,	// (0x0001edf3) list_double_time_pane_g1

0x7c64,	// (0x0001ec9c) list_double_time_pane_g2_ParamLimits

0x7c64,	// (0x0001ec9c) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x000266a7) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x000266a7) list_double_time_pane_g

0x7e15,	// (0x0001ee4d) list_double_time_pane_t1_ParamLimits

0x7e15,	// (0x0001ee4d) list_double_time_pane_t1

0x7e8c,	// (0x0001eec4) list_double_time_pane_t2_ParamLimits

0x7e8c,	// (0x0001eec4) list_double_time_pane_t2

0x7e9e,	// (0x0001eed6) list_double_time_pane_t3_ParamLimits

0x7e9e,	// (0x0001eed6) list_double_time_pane_t3

0x7eb0,	// (0x0001eee8) list_double_time_pane_t4_ParamLimits

0x7eb0,	// (0x0001eee8) list_double_time_pane_t4

0x0003,

0xf674,	// (0x000266ac) list_double_time_pane_t_ParamLimits

0xf674,	// (0x000266ac) list_double_time_pane_t

0x42af,	// (0x0001b2e7) list_setting_pane_g1_ParamLimits

0x42af,	// (0x0001b2e7) list_setting_pane_g1

0x42bb,	// (0x0001b2f3) list_setting_pane_g2_ParamLimits

0x42bb,	// (0x0001b2f3) list_setting_pane_g2

0x0001,

0xf67d,	// (0x000266b5) list_setting_pane_g_ParamLimits

0xf67d,	// (0x000266b5) list_setting_pane_g

0x7ec2,	// (0x0001eefa) list_setting_pane_t1_ParamLimits

0x7ec2,	// (0x0001eefa) list_setting_pane_t1

0x7edc,	// (0x0001ef14) list_setting_pane_t2_ParamLimits

0x7edc,	// (0x0001ef14) list_setting_pane_t2

0x0002,

0xf682,	// (0x000266ba) list_setting_pane_t_ParamLimits

0xf682,	// (0x000266ba) list_setting_pane_t

0x7f19,	// (0x0001ef51) set_value_pane_cp_ParamLimits

0x7f19,	// (0x0001ef51) set_value_pane_cp

0x7f25,	// (0x0001ef5d) list_setting_number_pane_g1_ParamLimits

0x7f25,	// (0x0001ef5d) list_setting_number_pane_g1

0x7f31,	// (0x0001ef69) list_setting_number_pane_g2_ParamLimits

0x7f31,	// (0x0001ef69) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x000266c1) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x000266c1) list_setting_number_pane_g

0x7f3d,	// (0x0001ef75) list_setting_number_pane_t1_ParamLimits

0x7f3d,	// (0x0001ef75) list_setting_number_pane_t1

0x7f56,	// (0x0001ef8e) list_setting_number_pane_t2_ParamLimits

0x7f56,	// (0x0001ef8e) list_setting_number_pane_t2

0x7f70,	// (0x0001efa8) list_setting_number_pane_t3_ParamLimits

0x7f70,	// (0x0001efa8) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x000266c6) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x000266c6) list_setting_number_pane_t

0x7f19,	// (0x0001ef51) set_value_pane_ParamLimits

0x7f19,	// (0x0001ef51) set_value_pane

0xbe81,	// (0x00022eb9) bg_set_opt_pane_ParamLimits

0xbe81,	// (0x00022eb9) bg_set_opt_pane

0x4508,	// (0x0001b540) set_value_pane_t1

0xbea2,	// (0x00022eda) slider_set_pane_cp3

0xbeab,	// (0x00022ee3) volume_small_pane_cp

0xbeb4,	// (0x00022eec) list_form_gen_pane

0xbebd,	// (0x00022ef5) scroll_pane_cp8

0x7fb3,	// (0x0001efeb) form_field_data_pane_ParamLimits

0x7fb3,	// (0x0001efeb) form_field_data_pane

0x7fca,	// (0x0001f002) form_field_data_wide_pane_ParamLimits

0x7fca,	// (0x0001f002) form_field_data_wide_pane

0x7fea,	// (0x0001f022) form_field_popup_pane_ParamLimits

0x7fea,	// (0x0001f022) form_field_popup_pane

0x8008,	// (0x0001f040) form_field_popup_wide_pane_ParamLimits

0x8008,	// (0x0001f040) form_field_popup_wide_pane

0x4598,	// (0x0001b5d0) form_field_slider_pane_ParamLimits

0x4598,	// (0x0001b5d0) form_field_slider_pane

0x45ab,	// (0x0001b5e3) form_field_slider_wide_pane_ParamLimits

0x45ab,	// (0x0001b5e3) form_field_slider_wide_pane

0xbece,	// (0x00022f06) data_form_pane

0x8029,	// (0x0001f061) form_field_data_pane_t1

0xbeda,	// (0x00022f12) input_focus_pane

0xbee8,	// (0x00022f20) data_form_wide_pane

0x45ee,	// (0x0001b626) form_field_data_wide_pane_t1

0xbc55,	// (0x00022c8d) input_focus_pane_cp6

0x8043,	// (0x0001f07b) form_field_popup_pane_t1

0xbeda,	// (0x00022f12) input_focus_pane_cp7

0xbf14,	// (0x00022f4c) list_form_pane

0x4632,	// (0x0001b66a) form_field_popup_wide_pane_t1

0xbeda,	// (0x00022f12) input_focus_pane_cp8

0xbf20,	// (0x00022f58) list_form_wide_pane

0x8065,	// (0x0001f09d) form_field_slider_pane_t1_ParamLimits

0x8065,	// (0x0001f09d) form_field_slider_pane_t1

0x807d,	// (0x0001f0b5) form_field_slider_pane_t2_ParamLimits

0x807d,	// (0x0001f0b5) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x000266d6) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x000266d6) form_field_slider_pane_t

0xb885,	// (0x000228bd) input_focus_pane_cp9_ParamLimits

0xb885,	// (0x000228bd) input_focus_pane_cp9

0x8092,	// (0x0001f0ca) slider_cont_pane_ParamLimits

0x8092,	// (0x0001f0ca) slider_cont_pane

0xbf2f,	// (0x00022f67) form_field_slider_wide_pane_t1_ParamLimits

0xbf2f,	// (0x00022f67) form_field_slider_wide_pane_t1

0x4689,	// (0x0001b6c1) form_field_slider_wide_pane_t2_ParamLimits

0x4689,	// (0x0001b6c1) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x000266db) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x000266db) form_field_slider_wide_pane_t

0xb885,	// (0x000228bd) input_focus_pane_cp10_ParamLimits

0xb885,	// (0x000228bd) input_focus_pane_cp10

0x80a6,	// (0x0001f0de) slider_cont_pane_cp1_ParamLimits

0x80a6,	// (0x0001f0de) slider_cont_pane_cp1

0x80ba,	// (0x0001f0f2) slider_form_pane_cp

0xbf41,	// (0x00022f79) input_focus_pane_g1

0xbf49,	// (0x00022f81) input_focus_pane_g2

0xbf51,	// (0x00022f89) input_focus_pane_g3

0xbf59,	// (0x00022f91) input_focus_pane_g4

0xbf61,	// (0x00022f99) input_focus_pane_g5

0xbf69,	// (0x00022fa1) input_focus_pane_g6

0xbf71,	// (0x00022fa9) input_focus_pane_g7

0xbf79,	// (0x00022fb1) input_focus_pane_g8

0xbf81,	// (0x00022fb9) input_focus_pane_g9

0xb82d,	// (0x00022865) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x000266e0) input_focus_pane_g

0xd3ac,	// (0x000243e4) wait_border_pane_g3_copy1

0x80c2,	// (0x0001f0fa) data_form_pane_t1

0xb82d,	// (0x00022865) wait_anim_pane_g1_copy1

0x8165,	// (0x0001f19d) data_form_wide_pane_t1

0x80dc,	// (0x0001f114) list_form_graphic_pane_cp_ParamLimits

0x80dc,	// (0x0001f114) list_form_graphic_pane_cp

0xdfd9,	// (0x00025011) slider_form_pane_g1

0xdfe2,	// (0x0002501a) slider_form_pane_g2

0x0006,

0xf994,	// (0x000269cc) slider_form_pane_g

0x80ef,	// (0x0001f127) list_form_graphic_pane_ParamLimits

0x80ef,	// (0x0001f127) list_form_graphic_pane

0x4703,	// (0x0001b73b) list_form_graphic_pane_g1

0x470b,	// (0x0001b743) list_form_graphic_pane_t1_ParamLimits

0x470b,	// (0x0001b743) list_form_graphic_pane_t1

0xb893,	// (0x000228cb) list_highlight_pane_cp5_ParamLimits

0xb893,	// (0x000228cb) list_highlight_pane_cp5

0x4720,	// (0x0001b758) find_pane_g1

0xbf89,	// (0x00022fc1) input_find_pane

0x4729,	// (0x0001b761) input_find_pane_g1_ParamLimits

0x4729,	// (0x0001b761) input_find_pane_g1

0x4735,	// (0x0001b76d) input_find_pane_t1_ParamLimits

0x4735,	// (0x0001b76d) input_find_pane_t1

0x474a,	// (0x0001b782) input_find_pane_t2_ParamLimits

0x474a,	// (0x0001b782) input_find_pane_t2

0x0001,

0xf6bd,	// (0x000266f5) input_find_pane_t_ParamLimits

0xf6bd,	// (0x000266f5) input_find_pane_t

0xbf92,	// (0x00022fca) input_focus_pane_cp5_ParamLimits

0xbf92,	// (0x00022fca) input_focus_pane_cp5

0x87e4,	// (0x0001f81c) bg_popup_window_pane_cp2_ParamLimits

0x87e4,	// (0x0001f81c) bg_popup_window_pane_cp2

0x87f1,	// (0x0001f829) listscroll_menu_pane_ParamLimits

0x87f1,	// (0x0001f829) listscroll_menu_pane

0x87fd,	// (0x0001f835) popup_submenu_window_ParamLimits

0x87fd,	// (0x0001f835) popup_submenu_window

0xbfa0,	// (0x00022fd8) find_popup_pane_g1

0xbfa8,	// (0x00022fe0) input_popup_find_pane_cp

0xbf92,	// (0x00022fca) input_focus_pane_cp4_ParamLimits

0xbf92,	// (0x00022fca) input_focus_pane_cp4

0xbfb2,	// (0x00022fea) input_popup_find_pane_t1_ParamLimits

0xbfb2,	// (0x00022fea) input_popup_find_pane_t1

0xb837,	// (0x0002286f) bg_popup_sub_pane_cp

0xbfe0,	// (0x00023018) listscroll_popup_sub_pane

0xbfe8,	// (0x00023020) list_submenu_pane_ParamLimits

0xbfe8,	// (0x00023020) list_submenu_pane

0xbff9,	// (0x00023031) scroll_pane_cp4

0xc001,	// (0x00023039) list_single_popup_submenu_pane_ParamLimits

0xc001,	// (0x00023039) list_single_popup_submenu_pane

0xc014,	// (0x0002304c) list_single_popup_submenu_pane_g1

0xc01c,	// (0x00023054) list_single_popup_submenu_pane_t1_ParamLimits

0xc01c,	// (0x00023054) list_single_popup_submenu_pane_t1

0xb885,	// (0x000228bd) bg_active_tab_pane_cp1_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp1

0x882f,	// (0x0001f867) tabs_2_active_pane_g1

0x8837,	// (0x0001f86f) tabs_2_active_pane_t1

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp1_ParamLimits

0xb885,	// (0x000228bd) bg_passive_tab_pane_cp1

0x882f,	// (0x0001f867) tabs_2_passive_pane_g1

0x8837,	// (0x0001f86f) tabs_2_passive_pane_t1

0xb893,	// (0x000228cb) bg_active_tab_pane_cp4

0x8849,	// (0x0001f881) tabs_2_long_active_pane_t1

0xc031,	// (0x00023069) bg_passive_tab_pane_cp4

0x5a9c,	// (0x0001cad4) list_single_midp_graphic_pane_g4_ParamLimits

0xb893,	// (0x000228cb) bg_active_tab_pane_cp5

0x885c,	// (0x0001f894) tabs_3_long_active_pane_t1

0xc031,	// (0x00023069) bg_passive_tab_pane_cp5

0x5a9c,	// (0x0001cad4) list_single_midp_graphic_pane_g4

0xb893,	// (0x000228cb) bg_popup_window_pane_cp13_ParamLimits

0xb893,	// (0x000228cb) bg_popup_window_pane_cp13

0xc046,	// (0x0002307e) listscroll_popup_fast_pane_ParamLimits

0xc046,	// (0x0002307e) listscroll_popup_fast_pane

0xc055,	// (0x0002308d) grid_popup_fast_pane_ParamLimits

0xc055,	// (0x0002308d) grid_popup_fast_pane

0xc067,	// (0x0002309f) scroll_pane_cp9_ParamLimits

0xc067,	// (0x0002309f) scroll_pane_cp9

0xf38b,	// (0x000263c3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf38b,	// (0x000263c3) list_single_graphic_hl_pane_t1_cp2

0xc08b,	// (0x000230c3) input_focus_pane_cp20_ParamLimits

0xc08b,	// (0x000230c3) input_focus_pane_cp20

0xc099,	// (0x000230d1) query_popup_data_pane_t1_ParamLimits

0xc099,	// (0x000230d1) query_popup_data_pane_t1

0xc0ac,	// (0x000230e4) query_popup_data_pane_t2_ParamLimits

0xc0ac,	// (0x000230e4) query_popup_data_pane_t2

0xc0f2,	// (0x0002312a) query_popup_data_pane_t3_ParamLimits

0xc0f2,	// (0x0002312a) query_popup_data_pane_t3

0xc133,	// (0x0002316b) query_popup_data_pane_t4_ParamLimits

0xc133,	// (0x0002316b) query_popup_data_pane_t4

0xc16f,	// (0x000231a7) query_popup_data_pane_t5_ParamLimits

0xc16f,	// (0x000231a7) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x000266fa) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x000266fa) query_popup_data_pane_t

0xbf41,	// (0x00022f79) bg_set_opt_pane_g1

0xbf49,	// (0x00022f81) bg_set_opt_pane_g2

0xbf51,	// (0x00022f89) bg_set_opt_pane_g3

0xbf59,	// (0x00022f91) bg_set_opt_pane_g4

0xbf61,	// (0x00022f99) bg_set_opt_pane_g5

0xbf69,	// (0x00022fa1) bg_set_opt_pane_g6

0xbf71,	// (0x00022fa9) bg_set_opt_pane_g7

0xbf79,	// (0x00022fb1) bg_set_opt_pane_g8

0xbf81,	// (0x00022fb9) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00026705) bg_set_opt_pane_g

0x5719,	// (0x0001c751) control_top_pane_stacon_ParamLimits

0x5719,	// (0x0001c751) control_top_pane_stacon

0x576c,	// (0x0001c7a4) signal_pane_stacon_ParamLimits

0x576c,	// (0x0001c7a4) signal_pane_stacon

0xc5d3,	// (0x0002360b) stacon_top_pane_g1_ParamLimits

0xc5d3,	// (0x0002360b) stacon_top_pane_g1

0x5791,	// (0x0001c7c9) title_pane_stacon_ParamLimits

0x5791,	// (0x0001c7c9) title_pane_stacon

0x57bb,	// (0x0001c7f3) uni_indicator_pane_stacon_ParamLimits

0x57bb,	// (0x0001c7f3) uni_indicator_pane_stacon

0x57d0,	// (0x0001c808) battery_pane_stacon_ParamLimits

0x57d0,	// (0x0001c808) battery_pane_stacon

0x5814,	// (0x0001c84c) control_bottom_pane_stacon_ParamLimits

0x5814,	// (0x0001c84c) control_bottom_pane_stacon

0x5837,	// (0x0001c86f) navi_pane_stacon_ParamLimits

0x5837,	// (0x0001c86f) navi_pane_stacon

0xc5f5,	// (0x0002362d) stacon_bottom_pane_g1_ParamLimits

0xc5f5,	// (0x0002362d) stacon_bottom_pane_g1

0x547a,	// (0x0001c4b2) aid_levels_signal_lsc_ParamLimits

0x547a,	// (0x0001c4b2) aid_levels_signal_lsc

0x5491,	// (0x0001c4c9) signal_pane_stacon_g1_ParamLimits

0x5491,	// (0x0001c4c9) signal_pane_stacon_g1

0x54a5,	// (0x0001c4dd) signal_pane_stacon_g2_ParamLimits

0x54a5,	// (0x0001c4dd) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00026718) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00026718) signal_pane_stacon_g

0x54da,	// (0x0001c512) title_pane_stacon_t1_ParamLimits

0x54da,	// (0x0001c512) title_pane_stacon_t1

0xc1b3,	// (0x000231eb) uni_indicator_pane_stacon_g1

0xc1bd,	// (0x000231f5) uni_indicator_pane_stacon_g2

0xc1c7,	// (0x000231ff) uni_indicator_pane_stacon_g3

0xc1d1,	// (0x00023209) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00026724) uni_indicator_pane_stacon_g

0x54ff,	// (0x0001c537) control_top_pane_stacon_g1

0x5507,	// (0x0001c53f) control_top_pane_stacon_t1_ParamLimits

0x5507,	// (0x0001c53f) control_top_pane_stacon_t1

0x553e,	// (0x0001c576) aid_levels_battery_lsc_ParamLimits

0x553e,	// (0x0001c576) aid_levels_battery_lsc

0x5556,	// (0x0001c58e) battery_pane_stacon_g1_ParamLimits

0x5556,	// (0x0001c58e) battery_pane_stacon_g1

0x5569,	// (0x0001c5a1) battery_pane_stacon_g2_ParamLimits

0x5569,	// (0x0001c5a1) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002672d) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002672d) battery_pane_stacon_g

0x55a7,	// (0x0001c5df) navi_icon_pane_stacon

0x55bb,	// (0x0001c5f3) navi_navi_pane_stacon

0x55a7,	// (0x0001c5df) navi_text_pane_stacon

0x54ff,	// (0x0001c537) control_bottom_pane_stacon_g1

0x55cf,	// (0x0001c607) control_bottom_pane_stacon_t1_ParamLimits

0x55cf,	// (0x0001c607) control_bottom_pane_stacon_t1

0x886e,	// (0x0001f8a6) grid_app_pane_ParamLimits

0x886e,	// (0x0001f8a6) grid_app_pane

0x88a4,	// (0x0001f8dc) scroll_pane_cp15_ParamLimits

0x88a4,	// (0x0001f8dc) scroll_pane_cp15

0x88bd,	// (0x0001f8f5) cell_app_pane_ParamLimits

0x88bd,	// (0x0001f8f5) cell_app_pane

0x8904,	// (0x0001f93c) cell_app_pane_g1_ParamLimits

0x8904,	// (0x0001f93c) cell_app_pane_g1

0xc1f5,	// (0x0002322d) cell_app_pane_g2_ParamLimits

0xc1f5,	// (0x0002322d) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00026732) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00026732) cell_app_pane_g

0xc201,	// (0x00023239) cell_app_pane_t1_ParamLimits

0xc201,	// (0x00023239) cell_app_pane_t1

0xc218,	// (0x00023250) grid_highlight_pane_ParamLimits

0xc218,	// (0x00023250) grid_highlight_pane

0xbf41,	// (0x00022f79) cell_highlight_pane_g1

0xbf49,	// (0x00022f81) cell_highlight_pane_g2

0xbf51,	// (0x00022f89) cell_highlight_pane_g3

0xbf59,	// (0x00022f91) cell_highlight_pane_g4

0xbf61,	// (0x00022f99) cell_highlight_pane_g5

0xbf69,	// (0x00022fa1) cell_highlight_pane_g6

0xbf71,	// (0x00022fa9) cell_highlight_pane_g7

0xbf79,	// (0x00022fb1) cell_highlight_pane_g8

0xbf81,	// (0x00022fb9) cell_highlight_pane_g9

0xb82d,	// (0x00022865) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x000266e0) cell_highlight_pane_g

0xc229,	// (0x00023261) bg_scroll_pane

0x5619,	// (0x0001c651) scroll_handle_pane

0xc270,	// (0x000232a8) scroll_bg_pane_g1

0xc285,	// (0x000232bd) scroll_bg_pane_g2

0xc29d,	// (0x000232d5) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00026737) scroll_bg_pane_g

0xc2b2,	// (0x000232ea) scroll_handle_focus_pane_ParamLimits

0xc2b2,	// (0x000232ea) scroll_handle_focus_pane

0xc270,	// (0x000232a8) scroll_handle_pane_g1

0xc2bf,	// (0x000232f7) scroll_handle_pane_g2

0xc29d,	// (0x000232d5) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002673e) scroll_handle_pane_g

0xbf92,	// (0x00022fca) bg_popup_sub_pane_cp21_ParamLimits

0xbf92,	// (0x00022fca) bg_popup_sub_pane_cp21

0xc2d3,	// (0x0002330b) popup_fep_japan_predictive_window_t1_ParamLimits

0xc2d3,	// (0x0002330b) popup_fep_japan_predictive_window_t1

0xc2ea,	// (0x00023322) popup_fep_japan_predictive_window_t2_ParamLimits

0xc2ea,	// (0x00023322) popup_fep_japan_predictive_window_t2

0xc31d,	// (0x00023355) popup_fep_japan_predictive_window_t3_ParamLimits

0xc31d,	// (0x00023355) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00026745) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00026745) popup_fep_japan_predictive_window_t

0xb837,	// (0x0002286f) bg_popup_sub_pane_cp23

0xc354,	// (0x0002338c) listscroll_japin_cand_pane

0xc35c,	// (0x00023394) popup_fep_japan_candidate_window_t1

0xc36a,	// (0x000233a2) candidate_pane_ParamLimits

0xc36a,	// (0x000233a2) candidate_pane

0xc37c,	// (0x000233b4) scroll_pane_cp30

0xc384,	// (0x000233bc) list_single_popup_jap_candidate_pane_ParamLimits

0xc384,	// (0x000233bc) list_single_popup_jap_candidate_pane

0xb837,	// (0x0002286f) list_highlight_pane_cp30

0xc398,	// (0x000233d0) list_single_popup_jap_candidate_pane_t1

0xc3a7,	// (0x000233df) level_1_signal

0xc3b4,	// (0x000233ec) level_2_signal

0xc3c1,	// (0x000233f9) level_3_signal

0xc3ce,	// (0x00023406) level_4_signal

0xc3db,	// (0x00023413) level_5_signal

0xc3e8,	// (0x00023420) level_6_signal

0xc3f5,	// (0x0002342d) level_7_signal

0xc3a7,	// (0x000233df) level_1_battery

0xc3b4,	// (0x000233ec) level_2_battery

0xc3c1,	// (0x000233f9) level_3_battery

0xc3ce,	// (0x00023406) level_4_battery

0xc3db,	// (0x00023413) level_5_battery

0xc3e8,	// (0x00023420) level_6_battery

0xc3f5,	// (0x0002342d) level_7_battery

0xc41a,	// (0x00023452) list_menu_pane_ParamLimits

0xc41a,	// (0x00023452) list_menu_pane

0xc42b,	// (0x00023463) scroll_pane_cp25_ParamLimits

0xc42b,	// (0x00023463) scroll_pane_cp25

0xc444,	// (0x0002347c) list_double2_graphic_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double2_graphic_pane_cp2

0xc444,	// (0x0002347c) list_double2_large_graphic_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double2_large_graphic_pane_cp2

0xc444,	// (0x0002347c) list_double2_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double2_pane_cp2

0xc444,	// (0x0002347c) list_double_graphic_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double_graphic_pane_cp2

0xc444,	// (0x0002347c) list_double_large_graphic_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double_large_graphic_pane_cp2

0xc444,	// (0x0002347c) list_double_number_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double_number_pane_cp2

0xc444,	// (0x0002347c) list_double_pane_cp2_ParamLimits

0xc444,	// (0x0002347c) list_double_pane_cp2

0x8942,	// (0x0001f97a) list_single_2graphic_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_2graphic_pane_cp2

0x8942,	// (0x0001f97a) list_single_graphic_heading_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_graphic_heading_pane_cp2

0x8942,	// (0x0001f97a) list_single_graphic_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_graphic_pane_cp2

0x8942,	// (0x0001f97a) list_single_heading_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_heading_pane_cp2

0xc454,	// (0x0002348c) list_single_large_graphic_pane_cp2_ParamLimits

0xc454,	// (0x0002348c) list_single_large_graphic_pane_cp2

0x8942,	// (0x0001f97a) list_single_number_heading_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_number_heading_pane_cp2

0x8942,	// (0x0001f97a) list_single_number_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_number_pane_cp2

0x8942,	// (0x0001f97a) list_single_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_pane_cp2

0xc46e,	// (0x000234a6) bg_popup_sub_pane_cp22

0x56cb,	// (0x0001c703) popup_side_volume_key_window_g1

0x56f5,	// (0x0001c72d) popup_side_volume_key_window_t1

0x5711,	// (0x0001c749) volume_small_pane_cp1

0xb885,	// (0x000228bd) bg_popup_sub_pane_cp24_ParamLimits

0xb885,	// (0x000228bd) bg_popup_sub_pane_cp24

0xc484,	// (0x000234bc) fep_china_uni_candidate_pane_ParamLimits

0xc484,	// (0x000234bc) fep_china_uni_candidate_pane

0xc498,	// (0x000234d0) fep_china_uni_entry_pane

0xc4a8,	// (0x000234e0) popup_fep_china_uni_window_g1

0xc4c4,	// (0x000234fc) fep_china_uni_entry_pane_g1

0xc4cc,	// (0x00023504) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00026772) fep_china_uni_entry_pane_g

0xc4d4,	// (0x0002350c) fep_entry_item_pane

0xc4de,	// (0x00023516) fep_candidate_item_pane

0xc4e6,	// (0x0002351e) fep_china_uni_candidate_pane_g1

0xc4ee,	// (0x00023526) fep_china_uni_candidate_pane_g2

0xc4f6,	// (0x0002352e) fep_china_uni_candidate_pane_g3

0xc4fe,	// (0x00023536) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00026777) fep_china_uni_candidate_pane_g

0xb82d,	// (0x00022865) fep_entry_item_pane_g1

0xc506,	// (0x0002353e) fep_entry_item_pane_t1_ParamLimits

0xc506,	// (0x0002353e) fep_entry_item_pane_t1

0xc51c,	// (0x00023554) fep_candidate_item_pane_t1_ParamLimits

0xc51c,	// (0x00023554) fep_candidate_item_pane_t1

0xc531,	// (0x00023569) fep_candidate_item_pane_t2_ParamLimits

0xc531,	// (0x00023569) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00026780) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00026780) fep_candidate_item_pane_t

0xb893,	// (0x000228cb) list_highlight_pane_cp31_ParamLimits

0xb893,	// (0x000228cb) list_highlight_pane_cp31

0xc543,	// (0x0002357b) level_1_signal_lsc

0xc54c,	// (0x00023584) level_2_signal_lsc

0xc555,	// (0x0002358d) level_3_signal_lsc

0xc55e,	// (0x00023596) level_4_signal_lsc

0xc567,	// (0x0002359f) level_5_signal_lsc

0xc570,	// (0x000235a8) level_6_signal_lsc

0xc579,	// (0x000235b1) level_7_signal_lsc

0xc579,	// (0x000235b1) level_1_battery_lsc

0xc582,	// (0x000235ba) level_2_battery_lsc

0xc58b,	// (0x000235c3) level_3_battery_lsc

0xc594,	// (0x000235cc) level_4_battery_lsc

0xc59d,	// (0x000235d5) level_5_battery_lsc

0xc5a6,	// (0x000235de) level_6_battery_lsc

0xc543,	// (0x0002357b) level_7_battery_lsc

0xc5af,	// (0x000235e7) scroll_handle_focus_pane_g1

0xc5b8,	// (0x000235f0) scroll_handle_focus_pane_g2

0xc5c1,	// (0x000235f9) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00026785) scroll_handle_focus_pane_g

0x475f,	// (0x0001b797) list_single_2graphic_pane_g1_ParamLimits

0x475f,	// (0x0001b797) list_single_2graphic_pane_g1

0x7c3f,	// (0x0001ec77) list_single_2graphic_pane_g2_ParamLimits

0x7c3f,	// (0x0001ec77) list_single_2graphic_pane_g2

0x40d8,	// (0x0001b110) list_single_2graphic_pane_g3_ParamLimits

0x40d8,	// (0x0001b110) list_single_2graphic_pane_g3

0x476b,	// (0x0001b7a3) list_single_2graphic_pane_g4_ParamLimits

0x476b,	// (0x0001b7a3) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002678c) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002678c) list_single_2graphic_pane_g

0x4777,	// (0x0001b7af) list_single_2graphic_pane_t1_ParamLimits

0x4777,	// (0x0001b7af) list_single_2graphic_pane_t1

0x8103,	// (0x0001f13b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8103,	// (0x0001f13b) list_double2_graphic_large_graphic_pane_g1

0x7dbb,	// (0x0001edf3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7dbb,	// (0x0001edf3) list_double2_graphic_large_graphic_pane_g2

0x7c64,	// (0x0001ec9c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7c64,	// (0x0001ec9c) list_double2_graphic_large_graphic_pane_g3

0x8115,	// (0x0001f14d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8115,	// (0x0001f14d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00026795) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00026795) list_double2_graphic_large_graphic_pane_g

0x8121,	// (0x0001f159) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8121,	// (0x0001f159) list_double2_graphic_large_graphic_pane_t1

0x8137,	// (0x0001f16f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8137,	// (0x0001f16f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002679e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002679e) list_double2_graphic_large_graphic_pane_t

0xc6a2,	// (0x000236da) popup_fast_swap_window_ParamLimits

0xc6a2,	// (0x000236da) popup_fast_swap_window

0xc6be,	// (0x000236f6) popup_side_volume_key_window

0xc6d8,	// (0x00023710) stacon_top_pane

0xc6e2,	// (0x0002371a) status_pane_ParamLimits

0xc6e2,	// (0x0002371a) status_pane

0xc6d8,	// (0x00023710) status_small_pane

0xb837,	// (0x0002286f) control_pane

0xb837,	// (0x0002286f) stacon_bottom_pane

0xbebd,	// (0x00022ef5) scroll_pane_cp121

0xbeb4,	// (0x00022eec) set_content_pane

0x89a4,	// (0x0001f9dc) bg_active_tab_pane_g1_cp1

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp1

0x89ad,	// (0x0001f9e5) bg_active_tab_pane_g3_cp1

0x89a4,	// (0x0001f9dc) bg_passive_tab_pane_g1_cp1

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp1

0x89ad,	// (0x0001f9e5) bg_passive_tab_pane_g3_cp1

0x89b6,	// (0x0001f9ee) bg_active_tab_pane_g1_cp2

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp2

0x89bf,	// (0x0001f9f7) bg_active_tab_pane_g3_cp2

0x89b6,	// (0x0001f9ee) bg_passive_tab_pane_g1_cp2

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp2

0x89bf,	// (0x0001f9f7) bg_passive_tab_pane_g3_cp2

0x89c8,	// (0x0001fa00) bg_active_tab_pane_g1_cp3

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp3

0x89d1,	// (0x0001fa09) bg_active_tab_pane_g3_cp3

0x89c8,	// (0x0001fa00) bg_passive_tab_pane_g1_cp3

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp3

0x89d1,	// (0x0001fa09) bg_passive_tab_pane_g3_cp3

0x89da,	// (0x0001fa12) bg_active_tab_pane_g1_cp4

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp4

0x89e3,	// (0x0001fa1b) bg_active_tab_pane_g3_cp4

0x89da,	// (0x0001fa12) bg_passive_tab_pane_g1_cp4

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp4

0x89e3,	// (0x0001fa1b) bg_passive_tab_pane_g3_cp4

0xc611,	// (0x00023649) bg_active_tab_pane_g1_cp5

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp5

0xc61a,	// (0x00023652) bg_active_tab_pane_g3_cp5

0xc611,	// (0x00023649) bg_passive_tab_pane_g1_cp5

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp5

0xc61a,	// (0x00023652) bg_passive_tab_pane_g3_cp5

0x3298,	// (0x0001a2d0) list_set_graphic_pane_ParamLimits

0x3298,	// (0x0001a2d0) list_set_graphic_pane

0xb837,	// (0x0002286f) bg_set_opt_pane_cp4

0xc623,	// (0x0002365b) list_set_graphic_pane_g1_ParamLimits

0xc623,	// (0x0002365b) list_set_graphic_pane_g1

0xc62f,	// (0x00023667) list_set_graphic_pane_g2_ParamLimits

0xc62f,	// (0x00023667) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x000267a3) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x000267a3) list_set_graphic_pane_g

0x0009,

0xfad0,	// (0x00026b08) volume_small_pane_cp_g

0xc653,	// (0x0002368b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc653,	// (0x0002368b) list_double2_large_graphic_pane_g1_cp2

0xc661,	// (0x00023699) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc661,	// (0x00023699) list_double2_large_graphic_pane_g2_cp2

0xc672,	// (0x000236aa) list_double2_large_graphic_pane_g3_cp2

0xc67a,	// (0x000236b2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc67a,	// (0x000236b2) list_double2_large_graphic_pane_t1_cp2

0xc690,	// (0x000236c8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc690,	// (0x000236c8) list_double2_large_graphic_pane_t2_cp2

0xdd89,	// (0x00024dc1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd89,	// (0x00024dc1) list_double_large_graphic_pane_g1_cp2

0xdd9c,	// (0x00024dd4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd9c,	// (0x00024dd4) list_double_large_graphic_pane_g2_cp2

0xc800,	// (0x00023838) list_double_large_graphic_pane_g3_cp2

0xddad,	// (0x00024de5) list_double_large_graphic_pane_g4_cp

0xddb5,	// (0x00024ded) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xddb5,	// (0x00024ded) list_double_large_graphic_pane_t1_cp2

0xddcc,	// (0x00024e04) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xddcc,	// (0x00024e04) list_double_large_graphic_pane_t2_cp2

0xc6f0,	// (0x00023728) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc6f0,	// (0x00023728) list_double2_graphic_pane_g1_cp2

0xc6fe,	// (0x00023736) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc6fe,	// (0x00023736) list_double2_graphic_pane_g2_cp2

0xc70f,	// (0x00023747) list_double2_graphic_pane_g3_cp2

0xc719,	// (0x00023751) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc719,	// (0x00023751) list_double2_graphic_pane_t1_cp2

0xc72f,	// (0x00023767) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc72f,	// (0x00023767) list_double2_graphic_pane_t2_cp2

0xc741,	// (0x00023779) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc741,	// (0x00023779) list_single_number_heading_pane_g1_cp2

0xc74d,	// (0x00023785) list_single_number_heading_pane_g2_cp2

0xc755,	// (0x0002378d) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc755,	// (0x0002378d) list_single_number_heading_pane_t1_cp2

0xc76b,	// (0x000237a3) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc76b,	// (0x000237a3) list_single_number_heading_pane_t2_cp2

0xc77f,	// (0x000237b7) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc77f,	// (0x000237b7) list_single_number_heading_pane_t3_cp2

0xc741,	// (0x00023779) list_single_heading_pane_g1_cp2_ParamLimits

0xc741,	// (0x00023779) list_single_heading_pane_g1_cp2

0xc74d,	// (0x00023785) list_single_heading_pane_g2_cp2

0xc755,	// (0x0002378d) list_single_heading_pane_t1_cp2_ParamLimits

0xc755,	// (0x0002378d) list_single_heading_pane_t1_cp2

0xdb91,	// (0x00024bc9) list_single_heading_pane_t2_cp2_ParamLimits

0xdb91,	// (0x00024bc9) list_single_heading_pane_t2_cp2

0xdb2b,	// (0x00024b63) list_double_graphic_pane_g1_cp2_ParamLimits

0xdb2b,	// (0x00024b63) list_double_graphic_pane_g1_cp2

0xdb37,	// (0x00024b6f) list_double_graphic_pane_g2_cp2_ParamLimits

0xdb37,	// (0x00024b6f) list_double_graphic_pane_g2_cp2

0xdb46,	// (0x00024b7e) list_double_graphic_pane_g3_cp2

0xdb4e,	// (0x00024b86) list_double_graphic_pane_t1_cp2_ParamLimits

0xdb4e,	// (0x00024b86) list_double_graphic_pane_t1_cp2

0xdb64,	// (0x00024b9c) list_double_graphic_pane_t2_cp2_ParamLimits

0xdb64,	// (0x00024b9c) list_double_graphic_pane_t2_cp2

0xc7f4,	// (0x0002382c) list_double_number_pane_g1_cp2_ParamLimits

0xc7f4,	// (0x0002382c) list_double_number_pane_g1_cp2

0xc800,	// (0x00023838) list_double_number_pane_g2_cp2

0xdaef,	// (0x00024b27) list_double_number_pane_t1_cp2_ParamLimits

0xdaef,	// (0x00024b27) list_double_number_pane_t1_cp2

0xdb03,	// (0x00024b3b) list_double_number_pane_t2_cp2_ParamLimits

0xdb03,	// (0x00024b3b) list_double_number_pane_t2_cp2

0xdb19,	// (0x00024b51) list_double_number_pane_t3_cp2_ParamLimits

0xdb19,	// (0x00024b51) list_double_number_pane_t3_cp2

0xda66,	// (0x00024a9e) list_single_graphic_pane_g1_cp2_ParamLimits

0xda66,	// (0x00024a9e) list_single_graphic_pane_g1_cp2

0xc858,	// (0x00023890) list_single_graphic_pane_g2_cp2_ParamLimits

0xc858,	// (0x00023890) list_single_graphic_pane_g2_cp2

0xc864,	// (0x0002389c) list_single_graphic_pane_g3_cp2

0xda3c,	// (0x00024a74) list_single_graphic_pane_t1_cp2_ParamLimits

0xda3c,	// (0x00024a74) list_single_graphic_pane_t1_cp2

0xc858,	// (0x00023890) list_single_number_pane_g1_cp2_ParamLimits

0xc858,	// (0x00023890) list_single_number_pane_g1_cp2

0xc864,	// (0x0002389c) list_single_number_pane_g2_cp2

0xda3c,	// (0x00024a74) list_single_number_pane_t1_cp2_ParamLimits

0xda3c,	// (0x00024a74) list_single_number_pane_t1_cp2

0xda52,	// (0x00024a8a) list_single_number_pane_t2_cp2_ParamLimits

0xda52,	// (0x00024a8a) list_single_number_pane_t2_cp2

0xc661,	// (0x00023699) list_double2_pane_g1_cp2_ParamLimits

0xc661,	// (0x00023699) list_double2_pane_g1_cp2

0xc672,	// (0x000236aa) list_double2_pane_g2_cp2

0xc7cc,	// (0x00023804) list_double2_pane_t1_cp2_ParamLimits

0xc7cc,	// (0x00023804) list_double2_pane_t1_cp2

0xc7e2,	// (0x0002381a) list_double2_pane_t2_cp2_ParamLimits

0xc7e2,	// (0x0002381a) list_double2_pane_t2_cp2

0xc7f4,	// (0x0002382c) list_double_pane_g1_cp2_ParamLimits

0xc7f4,	// (0x0002382c) list_double_pane_g1_cp2

0xc800,	// (0x00023838) list_double_pane_g2_cp2

0xc808,	// (0x00023840) list_double_pane_t1_cp2_ParamLimits

0xc808,	// (0x00023840) list_double_pane_t1_cp2

0xc81e,	// (0x00023856) list_double_pane_t2_cp2_ParamLimits

0xc81e,	// (0x00023856) list_double_pane_t2_cp2

0xc848,	// (0x00023880) list_single_pane_cp2_g3

0xc858,	// (0x00023890) list_single_pane_g1_cp2_ParamLimits

0xc858,	// (0x00023890) list_single_pane_g1_cp2

0xc864,	// (0x0002389c) list_single_pane_g2_cp2

0xc86c,	// (0x000238a4) list_single_pane_t1_cp2_ParamLimits

0xc86c,	// (0x000238a4) list_single_pane_t1_cp2

0xc884,	// (0x000238bc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc884,	// (0x000238bc) list_single_large_graphic_pane_g1_cp2

0xc892,	// (0x000238ca) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc892,	// (0x000238ca) list_single_large_graphic_pane_g2_cp2

0xc89e,	// (0x000238d6) list_single_large_graphic_pane_g3_cp2

0xc8a6,	// (0x000238de) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc8a6,	// (0x000238de) list_single_large_graphic_pane_g4_cp1

0xc8c0,	// (0x000238f8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc8c0,	// (0x000238f8) list_single_large_graphic_pane_t1_cp2

0xda06,	// (0x00024a3e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xda06,	// (0x00024a3e) list_single_graphic_heading_pane_g1_cp2

0xd9a9,	// (0x000249e1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9a9,	// (0x000249e1) list_single_graphic_heading_pane_g4_cp2

0xc864,	// (0x0002389c) list_single_graphic_heading_pane_g5_cp2

0xda12,	// (0x00024a4a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda12,	// (0x00024a4a) list_single_graphic_heading_pane_t1_cp2

0xda28,	// (0x00024a60) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda28,	// (0x00024a60) list_single_graphic_heading_pane_t2_cp2

0xd99d,	// (0x000249d5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd99d,	// (0x000249d5) list_single_2graphic_pane_g1_cp2

0xd9a9,	// (0x000249e1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9a9,	// (0x000249e1) list_single_2graphic_pane_g2_cp2

0xc864,	// (0x0002389c) list_single_2graphic_pane_g3_cp2

0xd9ba,	// (0x000249f2) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd9ba,	// (0x000249f2) list_single_2graphic_pane_g4_cp2

0xd9f0,	// (0x00024a28) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd9f0,	// (0x00024a28) list_single_2graphic_pane_t1_cp2

0xb82d,	// (0x00022865) list_highlight_pane_g10_cp1

0xd5a3,	// (0x000245db) list_highlight_pane_g1_cp1

0xd5ab,	// (0x000245e3) list_highlight_pane_g2_cp1

0xd5b3,	// (0x000245eb) list_highlight_pane_g3_cp1

0xd5bb,	// (0x000245f3) list_highlight_pane_g4_cp1

0xd5c3,	// (0x000245fb) list_highlight_pane_g5_cp1

0xd5cb,	// (0x00024603) list_highlight_pane_g6_cp1

0xd5d3,	// (0x0002460b) list_highlight_pane_g7_cp1

0xd5db,	// (0x00024613) list_highlight_pane_g8_cp1

0xd5e3,	// (0x0002461b) list_highlight_pane_g9_cp1

0x9804,	// (0x0002083c) form_field_slider_pane_t3

0x9814,	// (0x0002084c) form_field_slider_pane_t4

0xd4d7,	// (0x0002450f) slider_form_pane_ParamLimits

0xd4d7,	// (0x0002450f) slider_form_pane

0xb837,	// (0x0002286f) control_abbreviations

0xb837,	// (0x0002286f) control_conventions

0xb837,	// (0x0002286f) control_definitions

0xb837,	// (0x0002286f) format_table_attribute

0xdbdd,	// (0x00024c15) bg_popup_preview_window_pane_g9

0xb837,	// (0x0002286f) format_table_data2

0xb837,	// (0x0002286f) format_table_data3

0xb837,	// (0x0002286f) format_table_data_example

0x0008,

0xb837,	// (0x0002286f) intro_purpose

0xf8f4,	// (0x0002692c) bg_popup_preview_window_pane_g

0xb837,	// (0x0002286f) texts_category

0xb837,	// (0x0002286f) texts_graphics

0xc8d6,	// (0x0002390e) text_digital

0xc8e5,	// (0x0002391d) text_primary

0xc8f4,	// (0x0002392c) text_primary_small

0xc903,	// (0x0002393b) text_secondary

0xc912,	// (0x0002394a) text_title

0xe067,	// (0x0002509f) bg_passive_tab_pane_g1_cp3_srt

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp3_srt

0xe070,	// (0x000250a8) bg_passive_tab_pane_g3_cp3_srt

0xb885,	// (0x000228bd) bg_active_tab_pane_cp3_srt_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp3_srt

0xe079,	// (0x000250b1) tabs_4_active_pane_srt_g1

0x9d21,	// (0x00020d59) tabs_4_active_pane_srt_t1_ParamLimits

0x9d21,	// (0x00020d59) tabs_4_active_pane_srt_t1

0xe067,	// (0x0002509f) bg_active_tab_pane_g1_cp3_copy1

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp3_copy1

0xe070,	// (0x000250a8) bg_active_tab_pane_g3_cp3_copy1

0xb893,	// (0x000228cb) tabs_2_long_active_pane_srt_ParamLimits

0xb893,	// (0x000228cb) tabs_2_long_active_pane_srt

0xb893,	// (0x000228cb) tabs_2_long_passive_pane_srt_ParamLimits

0xb893,	// (0x000228cb) tabs_2_long_passive_pane_srt

0xc031,	// (0x00023069) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc031,	// (0x00023069) bg_passive_tab_pane_cp4_srt

0xdf92,	// (0x00024fca) bg_passive_tab_pane_g1_cp4_srt

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp4_srt

0xdf9b,	// (0x00024fd3) bg_passive_tab_pane_g3_cp4_srt

0xb893,	// (0x000228cb) bg_active_tab_pane_cp4_srt_ParamLimits

0xb893,	// (0x000228cb) bg_active_tab_pane_cp4_srt

0x9b2d,	// (0x00020b65) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9b2d,	// (0x00020b65) tabs_2_long_active_pane_srt_t1

0xdf92,	// (0x00024fca) bg_active_tab_pane_g1_cp4_srt

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp4_srt

0xdf9b,	// (0x00024fd3) bg_active_tab_pane_g3_cp4_srt

0xb885,	// (0x000228bd) tabs_3_long_active_pane_srt_ParamLimits

0xb885,	// (0x000228bd) tabs_3_long_active_pane_srt

0xb885,	// (0x000228bd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb885,	// (0x000228bd) tabs_3_long_passive_pane_cp_srt

0xb885,	// (0x000228bd) tabs_3_long_passive_pane_srt_ParamLimits

0xb885,	// (0x000228bd) tabs_3_long_passive_pane_srt

0xc031,	// (0x00023069) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc031,	// (0x00023069) bg_passive_tab_pane_cp5_srt

0xc611,	// (0x00023649) bg_passive_tab_pane_g1_cp5_srt

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp5_srt

0xc61a,	// (0x00023652) bg_passive_tab_pane_g3_cp5_srt

0xb893,	// (0x000228cb) bg_active_tab_pane_cp5_srt_ParamLimits

0xb893,	// (0x000228cb) bg_active_tab_pane_cp5_srt

0x9b17,	// (0x00020b4f) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9b17,	// (0x00020b4f) tabs_3_long_active_pane_srt_t1

0xc611,	// (0x00023649) bg_active_tab_pane_g1_cp5_srt

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp5_srt

0xc61a,	// (0x00023652) bg_active_tab_pane_g3_cp5_srt

0xdf84,	// (0x00024fbc) navi_text_pane_srt_t1

0xdf7c,	// (0x00024fb4) navi_icon_pane_srt_g1

0xca10,	// (0x00023a48) midp_editing_number_pane_srt

0xc921,	// (0x00023959) midp_ticker_pane_srt

0xca18,	// (0x00023a50) midp_ticker_pane_srt_g1

0xca20,	// (0x00023a58) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x000267c2) midp_ticker_pane_srt_g

0xca28,	// (0x00023a60) midp_ticker_pane_srt_t1

0xdf6d,	// (0x00024fa5) midp_editing_number_pane_t1_copy1

0x89ec,	// (0x0001fa24) listscroll_midp_pane

0x89ec,	// (0x0001fa24) midp_form_pane

0xc929,	// (0x00023961) midp_info_popup_window_ParamLimits

0xc929,	// (0x00023961) midp_info_popup_window

0xbf92,	// (0x00022fca) bg_popup_sub_pane_cp50_ParamLimits

0xbf92,	// (0x00022fca) bg_popup_sub_pane_cp50

0xd1f4,	// (0x0002422c) listscroll_midp_info_pane_ParamLimits

0xd1f4,	// (0x0002422c) listscroll_midp_info_pane

0xd1dc,	// (0x00024214) listscroll_form_midp_pane_ParamLimits

0xd1dc,	// (0x00024214) listscroll_form_midp_pane

0xd1e8,	// (0x00024220) scroll_bar_cp050

0x97f8,	// (0x00020830) list_midp_pane

0xe93b,	// (0x00025973) signal_pane_g2_cp

0xd10e,	// (0x00024146) listscroll_midp_info_pane_t1_ParamLimits

0xd10e,	// (0x00024146) listscroll_midp_info_pane_t1

0xd126,	// (0x0002415e) listscroll_midp_info_pane_t2_ParamLimits

0xd126,	// (0x0002415e) listscroll_midp_info_pane_t2

0xd164,	// (0x0002419c) listscroll_midp_info_pane_t3_ParamLimits

0xd164,	// (0x0002419c) listscroll_midp_info_pane_t3

0xd19e,	// (0x000241d6) listscroll_midp_info_pane_t4_ParamLimits

0xd19e,	// (0x000241d6) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00026867) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00026867) listscroll_midp_info_pane_t

0xbff9,	// (0x00023031) scroll_pane_cp21

0xd0b2,	// (0x000240ea) form_midp_field_choice_group_pane

0xd0bb,	// (0x000240f3) form_midp_field_text_pane

0xd0f4,	// (0x0002412c) form_midp_field_time_pane

0xd0fc,	// (0x00024134) form_midp_gauge_slider_pane

0xd105,	// (0x0002413d) form_midp_gauge_wait_pane

0xb837,	// (0x0002286f) form_midp_image_pane

0x8149,	// (0x0001f181) list_single_midp_pane_ParamLimits

0x8149,	// (0x0001f181) list_single_midp_pane

0x97d4,	// (0x0002080c) form_midp_field_text_pane_t1

0xcf59,	// (0x00023f91) input_focus_pane_cp050

0xd0a1,	// (0x000240d9) list_midp_form_text_pane

0xd070,	// (0x000240a8) form_midp_field_choice_group_pane_t1

0xd07e,	// (0x000240b6) input_focus_pane_cp051

0xd092,	// (0x000240ca) list_midp_choice_pane

0xb837,	// (0x0002286f) status_idle_pane

0xd054,	// (0x0002408c) form_midp_field_time_pane_t1

0xb82d,	// (0x00022865) wait_anim_pane_g2_copy1

0xd062,	// (0x0002409a) form_midp_field_time_pane_t2

0x0001,

0xc982,	// (0x000239ba) aid_navinavi_width_2_pane

0xf82a,	// (0x00026862) form_midp_field_time_pane_t

0xb837,	// (0x0002286f) input_focus_pane_cp052

0xb837,	// (0x0002286f) bg_input_focus_pane_cp040

0xd030,	// (0x00024068) form_midp_gauge_slider_pane_t1

0xd03e,	// (0x00024076) form_midp_gauge_slider_pane_t2

0x97b8,	// (0x000207f0) form_midp_gauge_slider_pane_t3

0x97c6,	// (0x000207fe) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00026859) form_midp_gauge_slider_pane_t

0xd04c,	// (0x00024084) form_midp_slider_pane

0xb893,	// (0x000228cb) bg_input_focus_pane_cp041_ParamLimits

0xb893,	// (0x000228cb) bg_input_focus_pane_cp041

0xcffd,	// (0x00024035) form_midp_gauge_wait_pane_t1_ParamLimits

0xcffd,	// (0x00024035) form_midp_gauge_wait_pane_t1

0xd00f,	// (0x00024047) form_midp_gauge_wait_pane_t2_ParamLimits

0xd00f,	// (0x00024047) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00026854) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00026854) form_midp_gauge_wait_pane_t

0xd021,	// (0x00024059) form_midp_wait_pane_ParamLimits

0xd021,	// (0x00024059) form_midp_wait_pane

0xcfc7,	// (0x00023fff) form_midp_image_pane_g1

0xcfd0,	// (0x00024008) form_midp_image_pane_t1

0xcfdf,	// (0x00024017) form_midp_image_pane_t2

0xcfee,	// (0x00024026) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0002684d) form_midp_image_pane_t

0xcfbe,	// (0x00023ff6) list_single_midp_pane_g1

0x489f,	// (0x0001b8d7) list_single_midp_pane_t1

0x97a1,	// (0x000207d9) list_midp_form_item_pane_ParamLimits

0x97a1,	// (0x000207d9) list_midp_form_item_pane

0xc93c,	// (0x00023974) list_midp_form_item_pane_t1

0xc94b,	// (0x00023983) midp_ticker_pane_g1

0xc957,	// (0x0002398f) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x000267a8) midp_ticker_pane_g

0x8a98,	// (0x0001fad0) midp_ticker_pane_t1

0x9c96,	// (0x00020cce) midp_editing_number_pane_t1

0xdffb,	// (0x00025033) midp_editing_number_pane

0xe00a,	// (0x00025042) midp_ticker_pane

0xdf5d,	// (0x00024f95) ai_message_heading_pane

0xb837,	// (0x0002286f) bg_popup_window_pane_cp14

0xdf65,	// (0x00024f9d) listscroll_ai_message_pane

0xdee7,	// (0x00024f1f) ai_message_heading_pane_g1_ParamLimits

0xdee7,	// (0x00024f1f) ai_message_heading_pane_g1

0xdef3,	// (0x00024f2b) ai_message_heading_pane_g2_ParamLimits

0xdef3,	// (0x00024f2b) ai_message_heading_pane_g2

0xdeff,	// (0x00024f37) ai_message_heading_pane_g3_ParamLimits

0xdeff,	// (0x00024f37) ai_message_heading_pane_g3

0xdf0b,	// (0x00024f43) ai_message_heading_pane_g4_ParamLimits

0xdf0b,	// (0x00024f43) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0002698e) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0002698e) ai_message_heading_pane_g

0xdf17,	// (0x00024f4f) ai_message_heading_pane_t1_ParamLimits

0xdf17,	// (0x00024f4f) ai_message_heading_pane_t1

0xdf31,	// (0x00024f69) ai_message_heading_pane_t2_ParamLimits

0xdf31,	// (0x00024f69) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00026997) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00026997) ai_message_heading_pane_t

0xdf43,	// (0x00024f7b) bg_popup_heading_pane_cp1_ParamLimits

0xdf43,	// (0x00024f7b) bg_popup_heading_pane_cp1

0xded5,	// (0x00024f0d) list_ai_message_pane_ParamLimits

0xded5,	// (0x00024f0d) list_ai_message_pane

0xbff9,	// (0x00023031) scroll_pane_cp10

0xde71,	// (0x00024ea9) list_ai_message_pane_g1

0xde79,	// (0x00024eb1) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0002696b) list_ai_message_pane_g

0xde81,	// (0x00024eb9) list_ai_message_pane_t1_ParamLimits

0xde81,	// (0x00024eb9) list_ai_message_pane_t1

0xde96,	// (0x00024ece) list_ai_message_pane_t2_ParamLimits

0xde96,	// (0x00024ece) list_ai_message_pane_t2

0xdeab,	// (0x00024ee3) list_ai_message_pane_t3_ParamLimits

0xdeab,	// (0x00024ee3) list_ai_message_pane_t3

0xdec0,	// (0x00024ef8) list_ai_message_pane_t4_ParamLimits

0xdec0,	// (0x00024ef8) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00026970) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00026970) list_ai_message_pane_t

0x9af2,	// (0x00020b2a) cell_ai_soft_ind_pane_ParamLimits

0x9af2,	// (0x00020b2a) cell_ai_soft_ind_pane

0xc963,	// (0x0002399b) cell_ai_soft_ind_pane_g1_ParamLimits

0xc963,	// (0x0002399b) cell_ai_soft_ind_pane_g1

0xb837,	// (0x0002286f) grid_highlight_cp1

0xc970,	// (0x000239a8) text_secondary_cp56_ParamLimits

0xc970,	// (0x000239a8) text_secondary_cp56

0xde46,	// (0x00024e7e) example_general_pane_ParamLimits

0xde46,	// (0x00024e7e) example_general_pane

0xde52,	// (0x00024e8a) example_parent_pane_g1_ParamLimits

0xde52,	// (0x00024e8a) example_parent_pane_g1

0xde5e,	// (0x00024e96) example_parent_pane_t1_ParamLimits

0xde5e,	// (0x00024e96) example_parent_pane_t1

0x9002,	// (0x0002003a) popup_preview_text_window_ParamLimits

0x9002,	// (0x0002003a) popup_preview_text_window

0xc850,	// (0x00023888) list_single_pane_cp2_g4

0xba62,	// (0x00022a9a) bg_popup_preview_window_pane_ParamLimits

0xba62,	// (0x00022a9a) bg_popup_preview_window_pane

0xdbe5,	// (0x00024c1d) popup_preview_text_window_t1_ParamLimits

0xdbe5,	// (0x00024c1d) popup_preview_text_window_t1

0xdc03,	// (0x00024c3b) popup_preview_text_window_t2_ParamLimits

0xdc03,	// (0x00024c3b) popup_preview_text_window_t2

0xdc4c,	// (0x00024c84) popup_preview_text_window_t3_ParamLimits

0xdc4c,	// (0x00024c84) popup_preview_text_window_t3

0xdc91,	// (0x00024cc9) popup_preview_text_window_t4_ParamLimits

0xdc91,	// (0x00024cc9) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0002693f) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0002693f) popup_preview_text_window_t

0xdd0f,	// (0x00024d47) scroll_pane_cp11

0xce69,	// (0x00023ea1) bg_popup_preview_window_pane_g1

0xdba5,	// (0x00024bdd) bg_popup_preview_window_pane_g2

0xdbad,	// (0x00024be5) bg_popup_preview_window_pane_g3

0xdbb5,	// (0x00024bed) bg_popup_preview_window_pane_g4

0xdbbd,	// (0x00024bf5) bg_popup_preview_window_pane_g5

0xdbc5,	// (0x00024bfd) bg_popup_preview_window_pane_g6

0xdbcd,	// (0x00024c05) bg_popup_preview_window_pane_g7

0xdbd5,	// (0x00024c0d) bg_popup_preview_window_pane_g8

0x5028,	// (0x0001c060) aid_popup_width_pane

0x8f7e,	// (0x0001ffb6) popup_midp_note_alarm_window_ParamLimits

0x8f7e,	// (0x0001ffb6) popup_midp_note_alarm_window

0xbece,	// (0x00022f06) data_form_pane_ParamLimits

0x801f,	// (0x0001f057) form_field_data_pane_g1

0x8029,	// (0x0001f061) form_field_data_pane_t1_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_ParamLimits

0xbee8,	// (0x00022f20) data_form_wide_pane_ParamLimits

0x45e2,	// (0x0001b61a) form_field_data_wide_pane_g1

0x45ee,	// (0x0001b626) form_field_data_wide_pane_t1_ParamLimits

0xbc55,	// (0x00022c8d) input_focus_pane_cp6_ParamLimits

0x8821,	// (0x0001f859) input_popup_find_pane_g1_ParamLimits

0x8821,	// (0x0001f859) input_popup_find_pane_g1

0x557a,	// (0x0001c5b2) aid_navi_side_left_pane

0x558f,	// (0x0001c5c7) aid_navi_side_right_pane

0xd680,	// (0x000246b8) bg_popup_window_pane_cp30_ParamLimits

0xd680,	// (0x000246b8) bg_popup_window_pane_cp30

0xd6fa,	// (0x00024732) popup_midp_note_alarm_window_g1_ParamLimits

0xd6fa,	// (0x00024732) popup_midp_note_alarm_window_g1

0xd72a,	// (0x00024762) popup_midp_note_alarm_window_t1_ParamLimits

0xd72a,	// (0x00024762) popup_midp_note_alarm_window_t1

0xd7cb,	// (0x00024803) popup_midp_note_alarm_window_t2_ParamLimits

0xd7cb,	// (0x00024803) popup_midp_note_alarm_window_t2

0xd879,	// (0x000248b1) popup_midp_note_alarm_window_t3_ParamLimits

0xd879,	// (0x000248b1) popup_midp_note_alarm_window_t3

0xd8a1,	// (0x000248d9) popup_midp_note_alarm_window_t4_ParamLimits

0xd8a1,	// (0x000248d9) popup_midp_note_alarm_window_t4

0xd8c1,	// (0x000248f9) popup_midp_note_alarm_window_t5_ParamLimits

0xd8c1,	// (0x000248f9) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x000268dc) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x000268dc) popup_midp_note_alarm_window_t

0xd96d,	// (0x000249a5) wait_bar_pane_cp1_ParamLimits

0xd96d,	// (0x000249a5) wait_bar_pane_cp1

0xb837,	// (0x0002286f) wait_anim_pane_copy1

0xb837,	// (0x0002286f) wait_border_pane_copy1

0xd398,	// (0x000243d0) wait_border_pane_g1_copy1

0x4608,	// (0x0001b640) form_field_popup_pane_g1

0x8043,	// (0x0001f07b) form_field_popup_pane_t1_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_cp7_ParamLimits

0xbf14,	// (0x00022f4c) list_form_pane_ParamLimits

0x462a,	// (0x0001b662) form_field_popup_wide_pane_g1

0x4632,	// (0x0001b66a) form_field_popup_wide_pane_t1_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_cp8_ParamLimits

0xbf20,	// (0x00022f58) list_form_wide_pane_ParamLimits

0xe0a0,	// (0x000250d8) aid_size_cell_graphic_pane

0x80c2,	// (0x0001f0fa) data_form_pane_t1_ParamLimits

0x8165,	// (0x0001f19d) data_form_wide_pane_t1_ParamLimits

0x93b7,	// (0x000203ef) bg_status_flat_pane

0x84bd,	// (0x0001f4f5) title_pane_t1_ParamLimits

0xb84d,	// (0x00022885) title_pane_t2_ParamLimits

0xb873,	// (0x000228ab) title_pane_t3_ParamLimits

0xf573,	// (0x000265ab) title_pane_t_ParamLimits

0xc3a7,	// (0x000233df) level_1_signal_ParamLimits

0xc3b4,	// (0x000233ec) level_2_signal_ParamLimits

0xc3c1,	// (0x000233f9) level_3_signal_ParamLimits

0xc3ce,	// (0x00023406) level_4_signal_ParamLimits

0xc3db,	// (0x00023413) level_5_signal_ParamLimits

0xc3e8,	// (0x00023420) level_6_signal_ParamLimits

0xc3f5,	// (0x0002342d) level_7_signal_ParamLimits

0xc3a7,	// (0x000233df) level_1_battery_ParamLimits

0xc3b4,	// (0x000233ec) level_2_battery_ParamLimits

0xc3c1,	// (0x000233f9) level_3_battery_ParamLimits

0xc3ce,	// (0x00023406) level_4_battery_ParamLimits

0xc3db,	// (0x00023413) level_5_battery_ParamLimits

0xc3e8,	// (0x00023420) level_6_battery_ParamLimits

0xc3f5,	// (0x0002342d) level_7_battery_ParamLimits

0xd5a3,	// (0x000245db) bg_status_flat_pane_g1

0xd5ab,	// (0x000245e3) bg_status_flat_pane_g2

0xd5b3,	// (0x000245eb) bg_status_flat_pane_g3

0xd5bb,	// (0x000245f3) bg_status_flat_pane_g4

0xd5c3,	// (0x000245fb) bg_status_flat_pane_g5

0xd5cb,	// (0x00024603) bg_status_flat_pane_g6

0xd5d3,	// (0x0002460b) bg_status_flat_pane_g7

0x8551,	// (0x0001f589) tabs_3_active_pane_t1_ParamLimits

0x8551,	// (0x0001f589) tabs_3_passive_pane_t1_ParamLimits

0x856b,	// (0x0001f5a3) tabs_4_active_pane_t1_ParamLimits

0x856b,	// (0x0001f5a3) tabs_4_1_passive_pane_t1_ParamLimits

0x8837,	// (0x0001f86f) tabs_2_active_pane_t1_ParamLimits

0x8837,	// (0x0001f86f) tabs_2_passive_pane_t1_ParamLimits

0xb893,	// (0x000228cb) bg_active_tab_pane_cp4_ParamLimits

0x8849,	// (0x0001f881) tabs_2_long_active_pane_t1_ParamLimits

0xc031,	// (0x00023069) bg_passive_tab_pane_cp4_ParamLimits

0x5ac2,	// (0x0001cafa) list_single_midp_graphic_pane_t1_ParamLimits

0xb893,	// (0x000228cb) bg_active_tab_pane_cp5_ParamLimits

0x885c,	// (0x0001f894) tabs_3_long_active_pane_t1_ParamLimits

0xc031,	// (0x00023069) bg_passive_tab_pane_cp5_ParamLimits

0x5ac2,	// (0x0001cafa) list_single_midp_graphic_pane_t1

0x93b7,	// (0x000203ef) bg_status_flat_pane_ParamLimits

0xcd3c,	// (0x00023d74) indicator_pane_cp2_ParamLimits

0xcd3c,	// (0x00023d74) indicator_pane_cp2

0x952e,	// (0x00020566) navi_pane_srt_ParamLimits

0x952e,	// (0x00020566) navi_pane_srt

0xcd64,	// (0x00023d9c) popup_clock_digital_analogue_window_cp1

0xb8d7,	// (0x0002290f) indicator_pane_t1

0xc921,	// (0x00023959) copy_highlight_pane

0xc921,	// (0x00023959) cursor_graphics_pane

0xc921,	// (0x00023959) graphic_within_text_pane

0xc921,	// (0x00023959) link_highlight_pane

0xdcd2,	// (0x00024d0a) popup_preview_text_window_t5_ParamLimits

0xdcd2,	// (0x00024d0a) popup_preview_text_window_t5

0xc98a,	// (0x000239c2) cursor_digital_pane

0xc98a,	// (0x000239c2) cursor_primary_pane

0xc99b,	// (0x000239d3) cursor_primary_small_pane

0xc9a3,	// (0x000239db) cursor_secondary_pane

0xc9ab,	// (0x000239e3) cursor_title_pane

0xc98a,	// (0x000239c2) link_highlight_digital_pane

0xc992,	// (0x000239ca) link_highlight_primary_pane

0xc99b,	// (0x000239d3) link_highlight_primary_small_pane

0xc9a3,	// (0x000239db) link_highlight_secondary_pane

0xc9ab,	// (0x000239e3) link_highlight_title_pane

0xc98a,	// (0x000239c2) copy_highlight_digital_pane

0xc98a,	// (0x000239c2) copy_highlight_primary_pane

0xc99b,	// (0x000239d3) copy_highlight_primary_small_pane

0xc9a3,	// (0x000239db) copy_highlight_secondary_pane

0xc9ab,	// (0x000239e3) copy_highlight_title_pane

0xc9a3,	// (0x000239db) graphic_text_digital_pane

0xd623,	// (0x0002465b) graphic_text_primary_pane

0xd62c,	// (0x00024664) graphic_text_primary_small_pane

0xc99b,	// (0x000239d3) graphic_text_secondary_pane

0xc98a,	// (0x000239c2) graphic_text_title_pane

0x8aaa,	// (0x0001fae2) cursor_primary_pane_g1

0xd615,	// (0x0002464d) cursor_text_primary_t1

0x9838,	// (0x00020870) cursor_primary_small_pane_g1

0xd607,	// (0x0002463f) cursor_text_primary_small_t1

0x982e,	// (0x00020866) cursor_primary_small_pane_g1_copy1

0xd5f9,	// (0x00024631) cursor_text_primary_small_t1_copy1

0xd5eb,	// (0x00024623) cursor_text_title_t1

0x9824,	// (0x0002085c) cursor_title_pane_g1

0x8aaa,	// (0x0001fae2) cursor_digital_pane_g1

0xc9b3,	// (0x000239eb) cursor_text_digital_t1

0xd58c,	// (0x000245c4) link_highlight_primary_pane_g1

0xd594,	// (0x000245cc) link_highlight_primary_pane_t1

0xc9c1,	// (0x000239f9) link_highlight_primary_small_pane_g1

0xc9c9,	// (0x00023a01) link_highlight_primary_small_pane_t1

0xc9c1,	// (0x000239f9) link_highlight_secondary_pane_g1

0xc9d8,	// (0x00023a10) link_highlight_secondary_pane_t1

0xd500,	// (0x00024538) link_highlight_title_pane_g1

0xd508,	// (0x00024540) link_highlight_title_pane_t1

0xd4e9,	// (0x00024521) link_highlight_digital_pane_g1

0xd4f1,	// (0x00024529) link_highlight_digital_pane_t1

0xd3dd,	// (0x00024415) copy_highlight_primary_pane_g1

0xd3e5,	// (0x0002441d) copy_highlight_primary_pane_t1

0xd3b7,	// (0x000243ef) copy_highlight_primary_small_pane_g1

0xd3ce,	// (0x00024406) copy_highlight_primary_small_pane_t1

0xc9e7,	// (0x00023a1f) copy_highlight_secondary_pane_g1

0xc9ef,	// (0x00023a27) copy_highlight_secondary_pane_t1

0xd3b7,	// (0x000243ef) copy_highlight_title_pane_g1

0xd3bf,	// (0x000243f7) copy_highlight_title_pane_t1

0xd3dd,	// (0x00024415) copy_highlight_digital_pane_g1

0xe22a,	// (0x00025262) copy_highlight_digital_pane_t1

0xe17e,	// (0x000251b6) graphic_text_primary_pane_g1

0xe20e,	// (0x00025246) graphic_text_primary_pane_t1

0xe21c,	// (0x00025254) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00026a0b) graphic_text_primary_pane_t

0xe1ea,	// (0x00025222) graphic_text_primary_small_pane_g1

0xe1f2,	// (0x0002522a) graphic_text_primary_small_pane_t1

0xe200,	// (0x00025238) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00026a06) graphic_text_primary_small_pane_t

0xe1c6,	// (0x000251fe) graphic_text_secondary_pane_g1

0xe1ce,	// (0x00025206) graphic_text_secondary_pane_t1

0xe1dc,	// (0x00025214) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00026a01) graphic_text_secondary_pane_t

0xe1a2,	// (0x000251da) graphic_text_title_pane_g1

0xe1aa,	// (0x000251e2) graphic_text_title_pane_t1

0xe1b8,	// (0x000251f0) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000269fc) graphic_text_title_pane_t

0xe17e,	// (0x000251b6) graphic_text_digital_pane_g1

0xe186,	// (0x000251be) graphic_text_digital_pane_t1

0xe194,	// (0x000251cc) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000269f7) graphic_text_digital_pane_t

0xb893,	// (0x000228cb) navi_icon_pane_srt_ParamLimits

0xb893,	// (0x000228cb) navi_icon_pane_srt

0xb837,	// (0x0002286f) navi_midp_pane_srt

0xb837,	// (0x0002286f) navi_navi_pane_srt

0xb893,	// (0x000228cb) navi_text_pane_srt_ParamLimits

0xb893,	// (0x000228cb) navi_text_pane_srt

0xe149,	// (0x00025181) navi_navi_icon_text_pane_srt

0xe151,	// (0x00025189) navi_navi_pane_srt_g1_ParamLimits

0xe151,	// (0x00025189) navi_navi_pane_srt_g1

0xe163,	// (0x0002519b) navi_navi_pane_srt_g2_ParamLimits

0xe163,	// (0x0002519b) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x000269f2) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x000269f2) navi_navi_pane_srt_g

0xe175,	// (0x000251ad) navi_navi_tabs_pane_srt

0xe149,	// (0x00025181) navi_navi_text_pane_srt

0xe149,	// (0x00025181) navi_navi_volume_pane_srt

0xe13a,	// (0x00025172) navi_navi_text_pane_srt_t1

0x5e42,	// (0x0001ce7a) navi_navi_volume_pane_srt_g1

0x5e4a,	// (0x0001ce82) volume_small_pane_srt_ParamLimits

0x5e4a,	// (0x0001ce82) volume_small_pane_srt

0x585a,	// (0x0001c892) volume_small_pane_srt_g1_ParamLimits

0x585a,	// (0x0001c892) volume_small_pane_srt_g1

0x586a,	// (0x0001c8a2) volume_small_pane_srt_g2_ParamLimits

0x586a,	// (0x0001c8a2) volume_small_pane_srt_g2

0x587b,	// (0x0001c8b3) volume_small_pane_srt_g3_ParamLimits

0x587b,	// (0x0001c8b3) volume_small_pane_srt_g3

0x588c,	// (0x0001c8c4) volume_small_pane_srt_g4_ParamLimits

0x588c,	// (0x0001c8c4) volume_small_pane_srt_g4

0x589d,	// (0x0001c8d5) volume_small_pane_srt_g5_ParamLimits

0x589d,	// (0x0001c8d5) volume_small_pane_srt_g5

0x58ae,	// (0x0001c8e6) volume_small_pane_srt_g6_ParamLimits

0x58ae,	// (0x0001c8e6) volume_small_pane_srt_g6

0x58bf,	// (0x0001c8f7) volume_small_pane_srt_g7_ParamLimits

0x58bf,	// (0x0001c8f7) volume_small_pane_srt_g7

0x58d0,	// (0x0001c908) volume_small_pane_srt_g8_ParamLimits

0x58d0,	// (0x0001c908) volume_small_pane_srt_g8

0x58e1,	// (0x0001c919) volume_small_pane_srt_g9_ParamLimits

0x58e1,	// (0x0001c919) volume_small_pane_srt_g9

0x58f2,	// (0x0001c92a) volume_small_pane_srt_g10_ParamLimits

0x58f2,	// (0x0001c92a) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x000267ad) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x000267ad) volume_small_pane_srt_g

0xbb0b,	// (0x00022b43) query_popup_data_pane_cp2

0xe120,	// (0x00025158) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe120,	// (0x00025158) navi_navi_icon_text_pane_srt_t1

0xd623,	// (0x0002465b) navi_tabs_2_long_pane_srt

0xd623,	// (0x0002465b) navi_tabs_2_pane_srt

0xd623,	// (0x0002465b) navi_tabs_3_long_pane_srt

0xd623,	// (0x0002465b) navi_tabs_3_pane_srt

0xd623,	// (0x0002465b) navi_tabs_4_pane_srt

0x5e22,	// (0x0001ce5a) tabs_2_active_pane_srt_ParamLimits

0x5e22,	// (0x0001ce5a) tabs_2_active_pane_srt

0x5e32,	// (0x0001ce6a) tabs_2_passive_pane_srt_ParamLimits

0x5e32,	// (0x0001ce6a) tabs_2_passive_pane_srt

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp1_srt

0xe0fe,	// (0x00025136) bg_passive_tab_pane_g1_cp1_srt

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp1_srt

0xe107,	// (0x0002513f) bg_passive_tab_pane_g3_cp1_srt

0xb885,	// (0x000228bd) bg_active_tab_pane_cp1_srt_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp1_srt

0xe110,	// (0x00025148) tabs_2_active_pane_srt_g1

0x9d9e,	// (0x00020dd6) tabs_2_active_pane_srt_t1_ParamLimits

0x9d9e,	// (0x00020dd6) tabs_2_active_pane_srt_t1

0xe0fe,	// (0x00025136) bg_active_tab_pane_g1_cp1_srt

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp1_srt

0xe107,	// (0x0002513f) bg_active_tab_pane_g3_cp1_srt

0x5def,	// (0x0001ce27) tabs_3_active_pane_srt_ParamLimits

0x5def,	// (0x0001ce27) tabs_3_active_pane_srt

0x5e00,	// (0x0001ce38) tabs_3_passive_pane_cp_srt_ParamLimits

0x5e00,	// (0x0001ce38) tabs_3_passive_pane_cp_srt

0x5e11,	// (0x0001ce49) tabs_3_passive_pane_srt_ParamLimits

0x5e11,	// (0x0001ce49) tabs_3_passive_pane_srt

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcf59,	// (0x00023f91) bg_passive_tab_pane_cp2_srt

0xc9fe,	// (0x00023a36) bg_passive_tab_pane_g1_cp2_srt

0xc5ca,	// (0x00023602) bg_passive_tab_pane_g2_cp2_srt

0xca07,	// (0x00023a3f) bg_passive_tab_pane_g3_cp2_srt

0xb885,	// (0x000228bd) bg_active_tab_pane_cp2_srt_ParamLimits

0xb885,	// (0x000228bd) bg_active_tab_pane_cp2_srt

0xe0f6,	// (0x0002512e) tabs_3_active_pane_srt_g1

0x9d88,	// (0x00020dc0) tabs_3_active_pane_srt_t1_ParamLimits

0x9d88,	// (0x00020dc0) tabs_3_active_pane_srt_t1

0xc9fe,	// (0x00023a36) bg_active_tab_pane_g1_cp2_srt

0xc5ca,	// (0x00023602) bg_active_tab_pane_g2_cp2_srt

0xca07,	// (0x00023a3f) bg_active_tab_pane_g3_cp2_srt

0x5da7,	// (0x0001cddf) tabs_4_active_pane_srt_ParamLimits

0x5da7,	// (0x0001cddf) tabs_4_active_pane_srt

0x5db9,	// (0x0001cdf1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5db9,	// (0x0001cdf1) tabs_4_passive_pane_cp2_srt

0xcb2b,	// (0x00023b63) aid_size_cell_toolbar

0xd9d2,	// (0x00024a0a) main_idle_act_pane_ParamLimits

0xcbf5,	// (0x00023c2d) popup_large_graphic_colour_window_ParamLimits

0x9282,	// (0x000202ba) popup_toolbar_window_ParamLimits

0x9282,	// (0x000202ba) popup_toolbar_window

0x4963,	// (0x0001b99b) list_single_graphic_2heading_pane_ParamLimits

0x4963,	// (0x0001b99b) list_single_graphic_2heading_pane

0xc1db,	// (0x00023213) aid_size_cell_apps_grid_lsc_pane

0xc1ed,	// (0x00023225) aid_size_cell_apps_grid_prt_pane

0xc031,	// (0x00023069) bg_wml_button_pane_cp1_ParamLimits

0xc031,	// (0x00023069) bg_wml_button_pane_cp1

0x97d4,	// (0x0002080c) form_midp_field_text_pane_t1_ParamLimits

0xcf59,	// (0x00023f91) input_focus_pane_cp050_ParamLimits

0xd0a1,	// (0x000240d9) list_midp_form_text_pane_ParamLimits

0xd07e,	// (0x000240b6) input_focus_pane_cp051_ParamLimits

0xd092,	// (0x000240ca) list_midp_choice_pane_ParamLimits

0x9769,	// (0x000207a1) list_single_2graphic_pane_cp3_ParamLimits

0x9769,	// (0x000207a1) list_single_2graphic_pane_cp3

0x977f,	// (0x000207b7) list_single_midp_graphic_pane_ParamLimits

0x977f,	// (0x000207b7) list_single_midp_graphic_pane

0x4146,	// (0x0001b17e) list_single_graphic_2heading_pane_g1_ParamLimits

0x4146,	// (0x0001b17e) list_single_graphic_2heading_pane_g1

0x40cc,	// (0x0001b104) list_single_graphic_2heading_pane_g4_ParamLimits

0x40cc,	// (0x0001b104) list_single_graphic_2heading_pane_g4

0x40d8,	// (0x0001b110) list_single_graphic_2heading_pane_g5_ParamLimits

0x40d8,	// (0x0001b110) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00026800) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00026800) list_single_graphic_2heading_pane_g

0x4817,	// (0x0001b84f) list_single_graphic_2heading_pane_t1_ParamLimits

0x4817,	// (0x0001b84f) list_single_graphic_2heading_pane_t1

0x482b,	// (0x0001b863) list_single_graphic_2heading_pane_t2_ParamLimits

0x482b,	// (0x0001b863) list_single_graphic_2heading_pane_t2

0x4847,	// (0x0001b87f) list_single_graphic_2heading_pane_t3_ParamLimits

0x4847,	// (0x0001b87f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00026807) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00026807) list_single_graphic_2heading_pane_t

0xcda7,	// (0x00023ddf) bg_popup_sub_pane_cp2

0xcdd1,	// (0x00023e09) grid_toobar_pane

0x5a47,	// (0x0001ca7f) cell_toolbar_pane_ParamLimits

0x5a47,	// (0x0001ca7f) cell_toolbar_pane

0xce0d,	// (0x00023e45) cell_toolbar_pane_g1_ParamLimits

0xce0d,	// (0x00023e45) cell_toolbar_pane_g1

0xce21,	// (0x00023e59) cell_toolbar_pane_g2_ParamLimits

0xce21,	// (0x00023e59) cell_toolbar_pane_g2

0x0001,

0xf7d6,	// (0x0002680e) cell_toolbar_pane_g_ParamLimits

0xf7d6,	// (0x0002680e) cell_toolbar_pane_g

0xce43,	// (0x00023e7b) grid_highlight_pane_cp2_ParamLimits

0xce43,	// (0x00023e7b) grid_highlight_pane_cp2

0xce5d,	// (0x00023e95) toolbar_button_pane

0xce69,	// (0x00023ea1) toolbar_button_pane_g1

0xce71,	// (0x00023ea9) toolbar_button_pane_g2

0xce79,	// (0x00023eb1) toolbar_button_pane_g3

0xce81,	// (0x00023eb9) toolbar_button_pane_g4

0xce89,	// (0x00023ec1) toolbar_button_pane_g5

0xce91,	// (0x00023ec9) toolbar_button_pane_g6

0xce99,	// (0x00023ed1) toolbar_button_pane_g7

0xcea1,	// (0x00023ed9) toolbar_button_pane_g8

0xcea9,	// (0x00023ee1) toolbar_button_pane_g9

0x0009,

0xf7db,	// (0x00026813) toolbar_button_pane_g

0x5a7f,	// (0x0001cab7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5a7f,	// (0x0001cab7) list_single_2graphic_pane_g1_cp3

0x96cb,	// (0x00020703) list_single_2graphic_pane_g2_cp3_ParamLimits

0x96cb,	// (0x00020703) list_single_2graphic_pane_g2_cp3

0xc74d,	// (0x00023785) list_single_2graphic_pane_g3_cp3

0x5a9c,	// (0x0001cad4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5a9c,	// (0x0001cad4) list_single_2graphic_pane_g4_cp3

0x5aa8,	// (0x0001cae0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5aa8,	// (0x0001cae0) list_single_2graphic_pane_t1_cp3

0xc741,	// (0x00023779) list_single_midp_graphic_pane_g2_ParamLimits

0xc741,	// (0x00023779) list_single_midp_graphic_pane_g2

0xcb33,	// (0x00023b6b) aid_zoom_text_primary

0x47eb,	// (0x0001b823) aid_zoom_text_secondary

0xcabb,	// (0x00023af3) status_small_pane_g7_ParamLimits

0xcabb,	// (0x00023af3) status_small_pane_g7

0xcade,	// (0x00023b16) status_small_pane_t1_ParamLimits

0x8499,	// (0x0001f4d1) title_pane_g2

0x0003,

0xf56a,	// (0x000265a2) title_pane_g

0x8724,	// (0x0001f75c) aid_size_cell_colour_1_pane_ParamLimits

0x8724,	// (0x0001f75c) aid_size_cell_colour_1_pane

0x8738,	// (0x0001f770) aid_size_cell_colour_2_pane_ParamLimits

0x8738,	// (0x0001f770) aid_size_cell_colour_2_pane

0x874c,	// (0x0001f784) aid_size_cell_colour_3_pane_ParamLimits

0x874c,	// (0x0001f784) aid_size_cell_colour_3_pane

0x8760,	// (0x0001f798) aid_size_cell_colour_4_pane_ParamLimits

0x8760,	// (0x0001f798) aid_size_cell_colour_4_pane

0x54b6,	// (0x0001c4ee) title_pane_stacon_g1_ParamLimits

0x54b6,	// (0x0001c4ee) title_pane_stacon_g1

0xd43c,	// (0x00024474) popup_note_wait_window_g3_ParamLimits

0xd43c,	// (0x00024474) popup_note_wait_window_g3

0xd4b2,	// (0x000244ea) popup_note_wait_window_t5_ParamLimits

0xd4b2,	// (0x000244ea) popup_note_wait_window_t5

0xb837,	// (0x0002286f) main_feb_china_hwr_fs_writing_pane

0x8caa,	// (0x0001fce2) popup_feb_china_hwr_fs_window_ParamLimits

0x8caa,	// (0x0001fce2) popup_feb_china_hwr_fs_window

0x96dc,	// (0x00020714) aid_size_cell_hwr_fs_ParamLimits

0x96dc,	// (0x00020714) aid_size_cell_hwr_fs

0xcf59,	// (0x00023f91) bg_popup_sub_pane_cp3_ParamLimits

0xcf59,	// (0x00023f91) bg_popup_sub_pane_cp3

0x96f1,	// (0x00020729) grid_hwr_fs_pane_ParamLimits

0x96f1,	// (0x00020729) grid_hwr_fs_pane

0x5b05,	// (0x0001cb3d) linegrid_hwr_fs_pane_ParamLimits

0x5b05,	// (0x0001cb3d) linegrid_hwr_fs_pane

0x9709,	// (0x00020741) cell_hwr_fs_pane_ParamLimits

0x9709,	// (0x00020741) cell_hwr_fs_pane

0xcf65,	// (0x00023f9d) linegrid_hwr_fs_pane_g1_ParamLimits

0xcf65,	// (0x00023f9d) linegrid_hwr_fs_pane_g1

0x972f,	// (0x00020767) linegrid_hwr_fs_pane_g2_ParamLimits

0x972f,	// (0x00020767) linegrid_hwr_fs_pane_g2

0xcf71,	// (0x00023fa9) linegrid_hwr_fs_pane_g3_ParamLimits

0xcf71,	// (0x00023fa9) linegrid_hwr_fs_pane_g3

0x5b37,	// (0x0001cb6f) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b37,	// (0x0001cb6f) linegrid_hwr_fs_pane_g4

0x5b51,	// (0x0001cb89) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b51,	// (0x0001cb89) linegrid_hwr_fs_pane_g5

0x0004,

0xf801,	// (0x00026839) linegrid_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00026839) linegrid_hwr_fs_pane_g

0xcf7d,	// (0x00023fb5) cell_hwr_fs_pane_g1_ParamLimits

0xcf7d,	// (0x00023fb5) cell_hwr_fs_pane_g1

0xcd75,	// (0x00023dad) cell_hwr_fs_pane_g2_ParamLimits

0xcd75,	// (0x00023dad) cell_hwr_fs_pane_g2

0x9741,	// (0x00020779) cell_hwr_fs_pane_g3_ParamLimits

0x9741,	// (0x00020779) cell_hwr_fs_pane_g3

0x974e,	// (0x00020786) cell_hwr_fs_pane_g4_ParamLimits

0x974e,	// (0x00020786) cell_hwr_fs_pane_g4

0x0003,

0xf80c,	// (0x00026844) cell_hwr_fs_pane_g_ParamLimits

0xf80c,	// (0x00026844) cell_hwr_fs_pane_g

0x975b,	// (0x00020793) cell_hwr_fs_pane_t1

0xb837,	// (0x0002286f) grid_highlight_pane_cp6

0xb837,	// (0x0002286f) main_idle_act2_pane

0xbfe0,	// (0x00023018) aid_inside_area_popup_secondary

0x9994,	// (0x000209cc) aid_inside_area_window_primary_ParamLimits

0x9994,	// (0x000209cc) aid_inside_area_window_primary

0xe239,	// (0x00025271) ai2_news_ticker_pane

0xe241,	// (0x00025279) aid_size_cell_ai1_link_ParamLimits

0xe241,	// (0x00025279) aid_size_cell_ai1_link

0xe25b,	// (0x00025293) popup_ai2_data_window_ParamLimits

0xe25b,	// (0x00025293) popup_ai2_data_window

0xe26f,	// (0x000252a7) popup_ai2_link_window_ParamLimits

0xe26f,	// (0x000252a7) popup_ai2_link_window

0xcf59,	// (0x00023f91) bg_popup_sub_pane_cp4_ParamLimits

0xcf59,	// (0x00023f91) bg_popup_sub_pane_cp4

0xe283,	// (0x000252bb) grid_ai2_link_pane_ParamLimits

0xe283,	// (0x000252bb) grid_ai2_link_pane

0xe29a,	// (0x000252d2) popup_ai2_link_window_g1_ParamLimits

0xe29a,	// (0x000252d2) popup_ai2_link_window_g1

0xe2a6,	// (0x000252de) popup_ai2_link_window_g2_ParamLimits

0xe2a6,	// (0x000252de) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00026a10) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00026a10) popup_ai2_link_window_g

0xe2b5,	// (0x000252ed) ai2_mp_button_pane

0xe2bd,	// (0x000252f5) ai2_mp_volume_pane

0xd07e,	// (0x000240b6) bg_popup_sub_pane_cp5_ParamLimits

0xd07e,	// (0x000240b6) bg_popup_sub_pane_cp5

0xe2c5,	// (0x000252fd) heading_ai2_gene_pane_ParamLimits

0xe2c5,	// (0x000252fd) heading_ai2_gene_pane

0xe2d1,	// (0x00025309) list_ai2_gene_pane_ParamLimits

0xe2d1,	// (0x00025309) list_ai2_gene_pane

0xe319,	// (0x00025351) cell_ai2_link_pane_ParamLimits

0xe319,	// (0x00025351) cell_ai2_link_pane

0xe32f,	// (0x00025367) cell_ai2_link_pane_g1

0xb837,	// (0x0002286f) grid_highlight_pane_cp7

0x5e5f,	// (0x0001ce97) ai2_mp_volume_pane_g1

0xe400,	// (0x00025438) ai2_mp_volume_pane_g2

0xe375,	// (0x000253ad) list_ai2_gene_pane_t1

0xe408,	// (0x00025440) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00026a29) ai2_mp_volume_pane_g

0x5e67,	// (0x0001ce9f) volume_small_pane_cp3

0xe410,	// (0x00025448) aid_size_cell_ai2_button

0xe418,	// (0x00025450) grid_ai2_button_pane

0xe421,	// (0x00025459) cell_ai2_button_pane_ParamLimits

0xe421,	// (0x00025459) cell_ai2_button_pane

0xb82d,	// (0x00022865) cell_ai2_button_pane_g1

0xb837,	// (0x0002286f) grid_highlight_pane_cp8

0xe3c0,	// (0x000253f8) ai2_gene_pane_t1_ParamLimits

0xe3c0,	// (0x000253f8) ai2_gene_pane_t1

0x8c3c,	// (0x0001fc74) aid_height_parent_landscape

0x9b44,	// (0x00020b7c) aid_height_set_list

0xd9d2,	// (0x00024a0a) aid_size_parent

0xe0a0,	// (0x000250d8) aid_size_cell_graphic_pane_ParamLimits

0xe2e1,	// (0x00025319) popup_ai2_data_window_g1_ParamLimits

0xe2e1,	// (0x00025319) popup_ai2_data_window_g1

0xe2ed,	// (0x00025325) ai2_news_ticker_pane_g1

0xe2f5,	// (0x0002532d) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00026a15) ai2_news_ticker_pane_g

0xe2fd,	// (0x00025335) ai2_news_ticker_pane_t1

0xe30b,	// (0x00025343) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00026a1a) ai2_news_ticker_pane_t

0xe338,	// (0x00025370) heading_ai2_gene_pane_g1

0xe340,	// (0x00025378) heading_ai2_gene_pane_t1_ParamLimits

0xe340,	// (0x00025378) heading_ai2_gene_pane_t1

0xe355,	// (0x0002538d) list_highlight_pane_cp6

0xe35d,	// (0x00025395) ai2_gene_pane_ParamLimits

0xe35d,	// (0x00025395) ai2_gene_pane

0xe383,	// (0x000253bb) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00026a1f) list_ai2_gene_pane_t

0xe391,	// (0x000253c9) list_highlight_pane_cp8_ParamLimits

0xe391,	// (0x000253c9) list_highlight_pane_cp8

0xe3a2,	// (0x000253da) ai2_gene_pane_g1_ParamLimits

0xe3a2,	// (0x000253da) ai2_gene_pane_g1

0xe3b4,	// (0x000253ec) ai2_gene_pane_g2_ParamLimits

0xe3b4,	// (0x000253ec) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00026a24) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00026a24) ai2_gene_pane_g

0xbe70,	// (0x00022ea8) scroll_pane_cp12

0x8bfb,	// (0x0001fc33) control_pane_t3_ParamLimits

0x8bfb,	// (0x0001fc33) control_pane_t3

0xcacf,	// (0x00023b07) status_small_pane_g8_ParamLimits

0xcacf,	// (0x00023b07) status_small_pane_g8

0x8d3d,	// (0x0001fd75) popup_find_window_ParamLimits

0x8fb8,	// (0x0001fff0) popup_note_image_window_ParamLimits

0x4146,	// (0x0001b17e) list_double2_graphic_pane_vc_g1_ParamLimits

0x4146,	// (0x0001b17e) list_double2_graphic_pane_vc_g1

0x40cc,	// (0x0001b104) list_double2_graphic_pane_vc_g2_ParamLimits

0x40cc,	// (0x0001b104) list_double2_graphic_pane_vc_g2

0x40d8,	// (0x0001b110) list_double2_graphic_pane_vc_g3_ParamLimits

0x40d8,	// (0x0001b110) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c8,	// (0x00026800) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c8,	// (0x00026800) list_double2_graphic_pane_vc_g

0x485f,	// (0x0001b897) list_double2_graphic_pane_vc_t1_ParamLimits

0x485f,	// (0x0001b897) list_double2_graphic_pane_vc_t1

0x40cc,	// (0x0001b104) list_single_heading_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_heading_pane_vc_g1

0x40d8,	// (0x0001b110) list_single_heading_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_heading_pane_vc_g

0x4875,	// (0x0001b8ad) list_single_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x0001b8ad) list_single_heading_pane_vc_t1

0x488b,	// (0x0001b8c3) list_single_heading_pane_vc_t2_ParamLimits

0x488b,	// (0x0001b8c3) list_single_heading_pane_vc_t2

0x0001,

0xf7f0,	// (0x00026828) list_single_heading_pane_vc_t_ParamLimits

0xf7f0,	// (0x00026828) list_single_heading_pane_vc_t

0xceb1,	// (0x00023ee9) list_setting_number_pane_vc_g1_ParamLimits

0xceb1,	// (0x00023ee9) list_setting_number_pane_vc_g1

0xcebd,	// (0x00023ef5) list_setting_number_pane_vc_g2_ParamLimits

0xcebd,	// (0x00023ef5) list_setting_number_pane_vc_g2

0x0001,

0xf7f5,	// (0x0002682d) list_setting_number_pane_vc_g_ParamLimits

0xf7f5,	// (0x0002682d) list_setting_number_pane_vc_g

0xcec9,	// (0x00023f01) list_setting_number_pane_vc_t1_ParamLimits

0xcec9,	// (0x00023f01) list_setting_number_pane_vc_t1

0xcedd,	// (0x00023f15) list_setting_number_pane_vc_t2_ParamLimits

0xcedd,	// (0x00023f15) list_setting_number_pane_vc_t2

0xcef9,	// (0x00023f31) list_setting_number_pane_vc_t3_ParamLimits

0xcef9,	// (0x00023f31) list_setting_number_pane_vc_t3

0x0002,

0xf7fa,	// (0x00026832) list_setting_number_pane_vc_t_ParamLimits

0xf7fa,	// (0x00026832) list_setting_number_pane_vc_t

0xcf21,	// (0x00023f59) set_value_pane_vc_ParamLimits

0xcf21,	// (0x00023f59) set_value_pane_vc

0x4963,	// (0x0001b99b) list_double2_graphic_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double2_graphic_pane_vc

0xe01d,	// (0x00025055) list_double2_large_graphic_pane_vc_ParamLimits

0xe01d,	// (0x00025055) list_double2_large_graphic_pane_vc

0x4963,	// (0x0001b99b) list_double2_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double2_pane_vc

0x4963,	// (0x0001b99b) list_double_graphic_heading_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_graphic_heading_pane_vc

0x4963,	// (0x0001b99b) list_double_graphic_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_graphic_pane_vc

0x4963,	// (0x0001b99b) list_double_heading_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_heading_pane_vc

0xe01d,	// (0x00025055) list_double_large_graphic_pane_vc_ParamLimits

0xe01d,	// (0x00025055) list_double_large_graphic_pane_vc

0x4963,	// (0x0001b99b) list_double_number_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_number_pane_vc

0x4963,	// (0x0001b99b) list_double_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_pane_vc

0x4963,	// (0x0001b99b) list_double_time_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_double_time_pane_vc

0x4963,	// (0x0001b99b) list_setting_number_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_setting_number_pane_vc

0x4963,	// (0x0001b99b) list_setting_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_setting_pane_vc

0x4963,	// (0x0001b99b) list_single_graphic_heading_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_single_graphic_heading_pane_vc

0x4963,	// (0x0001b99b) list_single_heading_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_single_heading_pane_vc

0x4963,	// (0x0001b99b) list_single_number_heading_pane_vc_ParamLimits

0x4963,	// (0x0001b99b) list_single_number_heading_pane_vc

0x4146,	// (0x0001b17e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4146,	// (0x0001b17e) list_double_graphic_heading_pane_vc_g1

0x40cc,	// (0x0001b104) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x40cc,	// (0x0001b104) list_double_graphic_heading_pane_vc_g2

0x40d8,	// (0x0001b110) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x40d8,	// (0x0001b110) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c8,	// (0x00026800) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x00026800) list_double_graphic_heading_pane_vc_g

0x4a34,	// (0x0001ba6c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4a34,	// (0x0001ba6c) list_double_graphic_heading_pane_vc_t1

0x4875,	// (0x0001b8ad) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4875,	// (0x0001b8ad) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00026a30) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00026a30) list_double_graphic_heading_pane_vc_t

0xceb1,	// (0x00023ee9) list_setting_pane_vc_g1_ParamLimits

0xceb1,	// (0x00023ee9) list_setting_pane_vc_g1

0xcebd,	// (0x00023ef5) list_setting_pane_vc_g2_ParamLimits

0xcebd,	// (0x00023ef5) list_setting_pane_vc_g2

0x0001,

0xf7f5,	// (0x0002682d) list_setting_pane_vc_g_ParamLimits

0xf7f5,	// (0x0002682d) list_setting_pane_vc_g

0xe617,	// (0x0002564f) list_setting_pane_vc_t1_ParamLimits

0xe617,	// (0x0002564f) list_setting_pane_vc_t1

0xe62b,	// (0x00025663) list_setting_pane_vc_t2_ParamLimits

0xe62b,	// (0x00025663) list_setting_pane_vc_t2

0x0001,

0xfa3b,	// (0x00026a73) list_setting_pane_vc_t_ParamLimits

0xfa3b,	// (0x00026a73) list_setting_pane_vc_t

0xcf21,	// (0x00023f59) set_value_pane_cp_vc_ParamLimits

0xcf21,	// (0x00023f59) set_value_pane_cp_vc

0x40cc,	// (0x0001b104) list_single_number_heading_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_single_number_heading_pane_vc_g1

0x40d8,	// (0x0001b110) list_single_number_heading_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_single_number_heading_pane_vc_g

0x4875,	// (0x0001b8ad) list_single_number_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x0001b8ad) list_single_number_heading_pane_vc_t1

0x4a48,	// (0x0001ba80) list_single_number_heading_pane_vc_t2_ParamLimits

0x4a48,	// (0x0001ba80) list_single_number_heading_pane_vc_t2

0x4134,	// (0x0001b16c) list_single_number_heading_pane_vc_t3_ParamLimits

0x4134,	// (0x0001b16c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa40,	// (0x00026a78) list_single_number_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x00026a78) list_single_number_heading_pane_vc_t

0x4146,	// (0x0001b17e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4146,	// (0x0001b17e) list_single_graphic_heading_pane_vc_g1

0x40cc,	// (0x0001b104) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x40cc,	// (0x0001b104) list_single_graphic_heading_pane_vc_g4

0x40d8,	// (0x0001b110) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x40d8,	// (0x0001b110) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x00026800) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x00026800) list_single_graphic_heading_pane_vc_g

0x4875,	// (0x0001b8ad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x0001b8ad) list_single_graphic_heading_pane_vc_t1

0x4a5c,	// (0x0001ba94) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4a5c,	// (0x0001ba94) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00026a7f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00026a7f) list_single_graphic_heading_pane_vc_t

0x40cc,	// (0x0001b104) list_double2_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_double2_pane_vc_g1

0x40d8,	// (0x0001b110) list_double2_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_double2_pane_vc_g

0x492b,	// (0x0001b963) list_double2_pane_vc_t1_ParamLimits

0x492b,	// (0x0001b963) list_double2_pane_vc_t1

0x4a70,	// (0x0001baa8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4a70,	// (0x0001baa8) list_double2_large_graphic_pane_vc_g1

0x4a7c,	// (0x0001bab4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4a7c,	// (0x0001bab4) list_double2_large_graphic_pane_vc_g2

0x4a88,	// (0x0001bac0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4a88,	// (0x0001bac0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00026639) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00026639) list_double2_large_graphic_pane_vc_g

0x4a94,	// (0x0001bacc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4a94,	// (0x0001bacc) list_double2_large_graphic_pane_vc_t1

0x4aaa,	// (0x0001bae2) list_double_time_pane_vc_g1_ParamLimits

0x4aaa,	// (0x0001bae2) list_double_time_pane_vc_g1

0x4ab6,	// (0x0001baee) list_double_time_pane_vc_g2_ParamLimits

0x4ab6,	// (0x0001baee) list_double_time_pane_vc_g2

0x0001,

0xfa4c,	// (0x00026a84) list_double_time_pane_vc_g_ParamLimits

0xfa4c,	// (0x00026a84) list_double_time_pane_vc_g

0x4ac2,	// (0x0001bafa) list_double_time_pane_vc_t1_ParamLimits

0x4ac2,	// (0x0001bafa) list_double_time_pane_vc_t1

0x4adb,	// (0x0001bb13) list_double_time_pane_vc_t2_ParamLimits

0x4adb,	// (0x0001bb13) list_double_time_pane_vc_t2

0x4b1b,	// (0x0001bb53) list_double_time_pane_vc_t3_ParamLimits

0x4b1b,	// (0x0001bb53) list_double_time_pane_vc_t3

0x4b33,	// (0x0001bb6b) list_double_time_pane_vc_t4_ParamLimits

0x4b33,	// (0x0001bb6b) list_double_time_pane_vc_t4

0x0003,

0xfa51,	// (0x00026a89) list_double_time_pane_vc_t_ParamLimits

0xfa51,	// (0x00026a89) list_double_time_pane_vc_t

0x40cc,	// (0x0001b104) list_double_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_double_pane_vc_g1

0x40d8,	// (0x0001b110) list_double_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_double_pane_vc_g

0x4b47,	// (0x0001bb7f) list_double_pane_vc_t1_ParamLimits

0x4b47,	// (0x0001bb7f) list_double_pane_vc_t1

0x4b59,	// (0x0001bb91) list_double_pane_vc_t2_ParamLimits

0x4b59,	// (0x0001bb91) list_double_pane_vc_t2

0x0001,

0xfa5a,	// (0x00026a92) list_double_pane_vc_t_ParamLimits

0xfa5a,	// (0x00026a92) list_double_pane_vc_t

0x40cc,	// (0x0001b104) list_double_number_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_double_number_pane_vc_g1

0x40d8,	// (0x0001b110) list_double_number_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_double_number_pane_vc_g

0x4b71,	// (0x0001bba9) list_double_number_pane_vc_t1_ParamLimits

0x4b71,	// (0x0001bba9) list_double_number_pane_vc_t1

0x4b85,	// (0x0001bbbd) list_double_number_pane_vc_t2_ParamLimits

0x4b85,	// (0x0001bbbd) list_double_number_pane_vc_t2

0x4b59,	// (0x0001bb91) list_double_number_pane_vc_t3_ParamLimits

0x4b59,	// (0x0001bb91) list_double_number_pane_vc_t3

0x0002,

0xfa5f,	// (0x00026a97) list_double_number_pane_vc_t_ParamLimits

0xfa5f,	// (0x00026a97) list_double_number_pane_vc_t

0x4b97,	// (0x0001bbcf) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4b97,	// (0x0001bbcf) list_double_large_graphic_pane_vc_g1

0x4ba3,	// (0x0001bbdb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4ba3,	// (0x0001bbdb) list_double_large_graphic_pane_vc_g2

0x4a88,	// (0x0001bac0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4a88,	// (0x0001bac0) list_double_large_graphic_pane_vc_g3

0x4bb2,	// (0x0001bbea) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4bb2,	// (0x0001bbea) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa66,	// (0x00026a9e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x00026a9e) list_double_large_graphic_pane_vc_g

0x4bbe,	// (0x0001bbf6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4bbe,	// (0x0001bbf6) list_double_large_graphic_pane_vc_t1

0x4bd0,	// (0x0001bc08) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4bd0,	// (0x0001bc08) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x00026aa7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x00026aa7) list_double_large_graphic_pane_vc_t

0x40cc,	// (0x0001b104) list_double_heading_pane_vc_g1_ParamLimits

0x40cc,	// (0x0001b104) list_double_heading_pane_vc_g1

0x40d8,	// (0x0001b110) list_double_heading_pane_vc_g2_ParamLimits

0x40d8,	// (0x0001b110) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002661c) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002661c) list_double_heading_pane_vc_g

0x4be9,	// (0x0001bc21) list_double_heading_pane_vc_t1_ParamLimits

0x4be9,	// (0x0001bc21) list_double_heading_pane_vc_t1

0x4875,	// (0x0001b8ad) list_double_heading_pane_vc_t2_ParamLimits

0x4875,	// (0x0001b8ad) list_double_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x00026aac) list_double_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x00026aac) list_double_heading_pane_vc_t

0x4bfd,	// (0x0001bc35) list_double_graphic_pane_vc_g1_ParamLimits

0x4bfd,	// (0x0001bc35) list_double_graphic_pane_vc_g1

0x4c0d,	// (0x0001bc45) list_double_graphic_pane_vc_g2_ParamLimits

0x4c0d,	// (0x0001bc45) list_double_graphic_pane_vc_g2

0x4c1c,	// (0x0001bc54) list_double_graphic_pane_vc_g3_ParamLimits

0x4c1c,	// (0x0001bc54) list_double_graphic_pane_vc_g3

0x0002,

0xfa79,	// (0x00026ab1) list_double_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00026ab1) list_double_graphic_pane_vc_g

0x4c28,	// (0x0001bc60) list_double_graphic_pane_vc_t1_ParamLimits

0x4c28,	// (0x0001bc60) list_double_graphic_pane_vc_t1

0x4b59,	// (0x0001bb91) list_double_graphic_pane_vc_t2_ParamLimits

0x4b59,	// (0x0001bb91) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00026ab8) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00026ab8) list_double_graphic_pane_vc_t

0x5034,	// (0x0001c06c) aid_size_cell_fastswap

0x82e7,	// (0x0001f31f) aid_size_cell_touch_ParamLimits

0x82e7,	// (0x0001f31f) aid_size_cell_touch

0x5297,	// (0x0001c2cf) popup_fast_swap_wide_window_ParamLimits

0x5297,	// (0x0001c2cf) popup_fast_swap_wide_window

0x8432,	// (0x0001f46a) touch_pane_ParamLimits

0x8432,	// (0x0001f46a) touch_pane

0xbec6,	// (0x00022efe) button_value_adjust_pane_cp2

0x4516,	// (0x0001b54e) button_value_adjust_pane_cp4

0x4536,	// (0x0001b56e) form_field_data_pane_cp2

0x7fe0,	// (0x0001f018) form_field_data_wide_pane_cp2

0xc229,	// (0x00023261) bg_scroll_pane_ParamLimits

0x5619,	// (0x0001c651) scroll_handle_pane_ParamLimits

0x562d,	// (0x0001c665) scroll_sc2_down_pane_ParamLimits

0x562d,	// (0x0001c665) scroll_sc2_down_pane

0xc25a,	// (0x00023292) scroll_sc2_up_pane_ParamLimits

0xc25a,	// (0x00023292) scroll_sc2_up_pane

0x9ed5,	// (0x00020f0d) grid_wheel_folder_pane_g1_ParamLimits

0x9ed5,	// (0x00020f0d) grid_wheel_folder_pane_g1

0x57f2,	// (0x0001c82a) clock_nsta_pane_cp2_ParamLimits

0x57f2,	// (0x0001c82a) clock_nsta_pane_cp2

0x89ec,	// (0x0001fa24) listscroll_midp_pane_ParamLimits

0x89fd,	// (0x0001fa35) midp_canvas_pane

0xcb23,	// (0x00023b5b) nsta_clock_indic_pane

0xcb5b,	// (0x00023b93) listscroll_form_pane_vc

0xcb63,	// (0x00023b9b) listscroll_set_pane_vc_ParamLimits

0xcb63,	// (0x00023b9b) listscroll_set_pane_vc

0x93df,	// (0x00020417) clock_nsta_pane

0x9409,	// (0x00020441) indicator_nsta_pane

0xcda7,	// (0x00023ddf) bg_popup_sub_pane_cp2_ParamLimits

0xcdbb,	// (0x00023df3) find_pane_cp2_ParamLimits

0xcdbb,	// (0x00023df3) find_pane_cp2

0xcdd1,	// (0x00023e09) grid_toobar_pane_ParamLimits

0xcf2d,	// (0x00023f65) list_form_gen_pane_vc_ParamLimits

0xcf2d,	// (0x00023f65) list_form_gen_pane_vc

0xcf43,	// (0x00023f7b) scroll_pane_cp8_vc_ParamLimits

0xcf43,	// (0x00023f7b) scroll_pane_cp8_vc

0xcf93,	// (0x00023fcb) data_form_wide_pane_vc_ParamLimits

0xcf93,	// (0x00023fcb) data_form_wide_pane_vc

0xcf9f,	// (0x00023fd7) form_field_data_wide_pane_vc_g1

0xcfa7,	// (0x00023fdf) form_field_data_wide_pane_vc_t1_ParamLimits

0xcfa7,	// (0x00023fdf) form_field_data_wide_pane_vc_t1

0xbeda,	// (0x00022f12) input_focus_pane_cp6_vc_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_cp6_vc

0x97f8,	// (0x00020830) list_midp_pane_ParamLimits

0xd9e4,	// (0x00024a1c) scroll_pane_cp16_ParamLimits

0xd9e4,	// (0x00024a1c) scroll_pane_cp16

0xd216,	// (0x0002424e) button_value_adjust_pane_ParamLimits

0xd216,	// (0x0002424e) button_value_adjust_pane

0x9b55,	// (0x00020b8d) button_value_adjust_pane_cp6_ParamLimits

0x9b55,	// (0x00020b8d) button_value_adjust_pane_cp6

0x9c6b,	// (0x00020ca3) settings_code_pane_cp_ParamLimits

0x9c6b,	// (0x00020ca3) settings_code_pane_cp

0xb82d,	// (0x00022865) cell_touch_pane_g1

0xb82d,	// (0x00022865) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00026757) cell_touch_pane_g

0x9db4,	// (0x00020dec) cell_touch_pane_cp_ParamLimits

0x9db4,	// (0x00020dec) cell_touch_pane_cp

0x9dd0,	// (0x00020e08) cell_touch_pane_ParamLimits

0x9dd0,	// (0x00020e08) cell_touch_pane

0xb82d,	// (0x00022865) scroll_sc2_down_pane_g1

0xb82d,	// (0x00022865) scroll_sc2_up_pane_g1

0xb837,	// (0x0002286f) bg_set_opt_pane_cp4_vc

0xe433,	// (0x0002546b) list_set_graphic_pane_vc_g1_ParamLimits

0xe433,	// (0x0002546b) list_set_graphic_pane_vc_g1

0xe43f,	// (0x00025477) list_set_graphic_pane_vc_g2_ParamLimits

0xe43f,	// (0x00025477) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00026a35) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00026a35) list_set_graphic_pane_vc_g

0xe44b,	// (0x00025483) text_primary_small_cp13_vc_ParamLimits

0xe44b,	// (0x00025483) text_primary_small_cp13_vc

0xe463,	// (0x0002549b) list_set_graphic_pane_vc_ParamLimits

0xe463,	// (0x0002549b) list_set_graphic_pane_vc

0xb837,	// (0x0002286f) input_focus_pane_cp2_vc

0xb82d,	// (0x00022865) setting_code_pane_vc_g1

0xe477,	// (0x000254af) setting_code_pane_vc_t1

0xe485,	// (0x000254bd) set_text_pane_vc_t1_ParamLimits

0xe485,	// (0x000254bd) set_text_pane_vc_t1

0xb837,	// (0x0002286f) input_focus_pane_cp1_vc

0xe4a4,	// (0x000254dc) list_set_text_pane_vc

0xb82d,	// (0x00022865) setting_text_pane_vc_g1

0xb837,	// (0x0002286f) bg_set_opt_pane_cp2_vc

0xe4ae,	// (0x000254e6) setting_slider_graphic_pane_vc_g1

0xe4b6,	// (0x000254ee) setting_slider_graphic_pane_vc_t1

0xe4c4,	// (0x000254fc) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00026a3a) setting_slider_graphic_pane_vc_t

0xe4d2,	// (0x0002550a) slider_set_pane_cp_vc

0xe4da,	// (0x00025512) slider_set_pane_vc_g1

0xe4e3,	// (0x0002551b) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00026a3f) slider_set_pane_vc_g

0xbf41,	// (0x00022f79) set_opt_bg_pane_g1_copy1

0xbf49,	// (0x00022f81) set_opt_bg_pane_g2_copy1

0xe50f,	// (0x00025547) set_opt_bg_pane_g3_copy1

0xbf59,	// (0x00022f91) set_opt_bg_pane_g4_copy1

0xbf61,	// (0x00022f99) set_opt_bg_pane_g5_copy1

0xbf69,	// (0x00022fa1) set_opt_bg_pane_g6_copy1

0xe517,	// (0x0002554f) set_opt_bg_pane_g7_copy1

0xe521,	// (0x00025559) set_opt_bg_pane_g8_copy1

0xe529,	// (0x00025561) set_opt_bg_pane_g9_copy1

0xb837,	// (0x0002286f) bg_set_opt_pane_cp_vc

0xe531,	// (0x00025569) setting_slider_pane_vc_t1

0xe4b6,	// (0x000254ee) setting_slider_pane_vc_t2

0xe4c4,	// (0x000254fc) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00026a4e) setting_slider_pane_vc_t

0xe4d2,	// (0x0002550a) slider_set_pane_vc

0x5b75,	// (0x0001cbad) volume_set_pane_vc_g1

0x5e70,	// (0x0001cea8) volume_set_pane_vc_g2

0x5e79,	// (0x0001ceb1) volume_set_pane_vc_g3

0x5e82,	// (0x0001ceba) volume_set_pane_vc_g4

0x5e8b,	// (0x0001cec3) volume_set_pane_vc_g5

0x5e94,	// (0x0001cecc) volume_set_pane_vc_g6

0x5e9d,	// (0x0001ced5) volume_set_pane_vc_g7

0x5ea6,	// (0x0001cede) volume_set_pane_vc_g8

0x5eaf,	// (0x0001cee7) volume_set_pane_vc_g9

0x5eb8,	// (0x0001cef0) volume_set_pane_vc_g10

0x0009,

0xfa1d,	// (0x00026a55) volume_set_pane_vc_g

0xe540,	// (0x00025578) volume_set_pane_vc

0xe548,	// (0x00025580) button_value_adjust_pane_cp1_vc

0xe552,	// (0x0002558a) list_highlight_pane_cp2_vc

0xe55b,	// (0x00025593) list_set_pane_vc_ParamLimits

0xe55b,	// (0x00025593) list_set_pane_vc

0xe5ad,	// (0x000255e5) main_pane_set_vc_t1_ParamLimits

0xe5ad,	// (0x000255e5) main_pane_set_vc_t1

0xe5c2,	// (0x000255fa) main_pane_set_vc_t2_ParamLimits

0xe5c2,	// (0x000255fa) main_pane_set_vc_t2

0xe5d4,	// (0x0002560c) main_pane_set_vc_t3_ParamLimits

0xe5d4,	// (0x0002560c) main_pane_set_vc_t3

0xe5e6,	// (0x0002561e) main_pane_set_vc_t4_ParamLimits

0xe5e6,	// (0x0002561e) main_pane_set_vc_t4

0x0003,

0xfa32,	// (0x00026a6a) main_pane_set_vc_t_ParamLimits

0xfa32,	// (0x00026a6a) main_pane_set_vc_t

0xe5f8,	// (0x00025630) setting_code_pane_vc_ParamLimits

0xe5f8,	// (0x00025630) setting_code_pane_vc

0xe607,	// (0x0002563f) setting_slider_graphic_pane_vc

0xe607,	// (0x0002563f) setting_slider_pane_vc

0xe607,	// (0x0002563f) setting_text_pane_vc

0xe607,	// (0x0002563f) setting_volume_pane_vc

0xe60f,	// (0x00025647) scroll_pane_cp121_vc

0xbeb4,	// (0x00022eec) set_content_pane_vc

0xe64d,	// (0x00025685) button_value_adjust_pane_g1

0xe656,	// (0x0002568e) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00026abd) button_value_adjust_pane_g

0xe65f,	// (0x00025697) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe65f,	// (0x00025697) form_field_slider_wide_pane_vc_t1

0xe673,	// (0x000256ab) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe673,	// (0x000256ab) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8a,	// (0x00026ac2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00026ac2) form_field_slider_wide_pane_vc_t

0xb885,	// (0x000228bd) input_focus_pane_cp10_vc_ParamLimits

0xb885,	// (0x000228bd) input_focus_pane_cp10_vc

0xe685,	// (0x000256bd) slider_cont_pane_cp1_vc_ParamLimits

0xe685,	// (0x000256bd) slider_cont_pane_cp1_vc

0xe4da,	// (0x00025512) slider_form_pane_g1_cp2

0xe4e3,	// (0x0002551b) slider_form_pane_g2_cp2

0xe69e,	// (0x000256d6) form_field_slider_pane_vc_t3

0xe6ac,	// (0x000256e4) form_field_slider_pane_vc_t4

0xe6ba,	// (0x000256f2) slider_form_pane_vc_ParamLimits

0xe6ba,	// (0x000256f2) slider_form_pane_vc

0xe6c7,	// (0x000256ff) form_field_slider_pane_vc_t1_ParamLimits

0xe6c7,	// (0x000256ff) form_field_slider_pane_vc_t1

0xe673,	// (0x000256ab) form_field_slider_pane_vc_t2_ParamLimits

0xe673,	// (0x000256ab) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x00026ad2) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x00026ad2) form_field_slider_pane_vc_t

0xb885,	// (0x000228bd) input_focus_pane_cp9_vc_ParamLimits

0xb885,	// (0x000228bd) input_focus_pane_cp9_vc

0xe6e3,	// (0x0002571b) slider_cont_pane_vc_ParamLimits

0xe6e3,	// (0x0002571b) slider_cont_pane_vc

0xe6f5,	// (0x0002572d) list_form_graphic_pane_cp_vc_ParamLimits

0xe6f5,	// (0x0002572d) list_form_graphic_pane_cp_vc

0xcf9f,	// (0x00023fd7) form_field_popup_wide_pane_vc_g1

0xe70a,	// (0x00025742) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe70a,	// (0x00025742) form_field_popup_wide_pane_vc_t1

0xbeda,	// (0x00022f12) input_focus_pane_cp8_vc_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_cp8_vc

0xe721,	// (0x00025759) list_form_wide_pane_vc_ParamLimits

0xe721,	// (0x00025759) list_form_wide_pane_vc

0xe72d,	// (0x00025765) list_form_graphic_pane_vc_g1

0xe735,	// (0x0002576d) list_form_graphic_pane_vc_t1_ParamLimits

0xe735,	// (0x0002576d) list_form_graphic_pane_vc_t1

0xb893,	// (0x000228cb) list_highlight_pane_cp5_vc_ParamLimits

0xb893,	// (0x000228cb) list_highlight_pane_cp5_vc

0xe751,	// (0x00025789) list_form_graphic_pane_vc_ParamLimits

0xe751,	// (0x00025789) list_form_graphic_pane_vc

0xcf9f,	// (0x00023fd7) form_field_popup_pane_vc_g1

0xe767,	// (0x0002579f) form_field_popup_pane_vc_t1_ParamLimits

0xe767,	// (0x0002579f) form_field_popup_pane_vc_t1

0xbeda,	// (0x00022f12) input_focus_pane_cp7_vc_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_cp7_vc

0xe77e,	// (0x000257b6) list_form_pane_vc_ParamLimits

0xe77e,	// (0x000257b6) list_form_pane_vc

0xe78a,	// (0x000257c2) data_form_pane_vc_t1_ParamLimits

0xe78a,	// (0x000257c2) data_form_pane_vc_t1

0xbf41,	// (0x00022f79) input_focus_pane_vc_g1

0xbf49,	// (0x00022f81) input_focus_pane_vc_g2

0xbf51,	// (0x00022f89) input_focus_pane_vc_g3

0xbf59,	// (0x00022f91) input_focus_pane_vc_g4

0xbf61,	// (0x00022f99) input_focus_pane_vc_g5

0xbf69,	// (0x00022fa1) input_focus_pane_vc_g6

0xbf71,	// (0x00022fa9) input_focus_pane_vc_g7

0xbf79,	// (0x00022fb1) input_focus_pane_vc_g8

0xbf81,	// (0x00022fb9) input_focus_pane_vc_g9

0xb82d,	// (0x00022865) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x000266e0) input_focus_pane_vc_g

0xcf93,	// (0x00023fcb) data_form_pane_vc_ParamLimits

0xcf93,	// (0x00023fcb) data_form_pane_vc

0xcf9f,	// (0x00023fd7) form_field_data_pane_vc_g1

0xe7a5,	// (0x000257dd) form_field_data_pane_vc_t1_ParamLimits

0xe7a5,	// (0x000257dd) form_field_data_pane_vc_t1

0xbeda,	// (0x00022f12) input_focus_pane_vc_ParamLimits

0xbeda,	// (0x00022f12) input_focus_pane_vc

0xe7bf,	// (0x000257f7) button_value_adjust_pane_cp3_vc

0xe7c7,	// (0x000257ff) button_value_adjust_pane_cp5_vc

0xe7cf,	// (0x00025807) form_field_data_pane_vc_ParamLimits

0xe7cf,	// (0x00025807) form_field_data_pane_vc

0xe7e6,	// (0x0002581e) form_field_data_pane_vc_cp2

0xe7ee,	// (0x00025826) form_field_data_wide_pane_vc_ParamLimits

0xe7ee,	// (0x00025826) form_field_data_wide_pane_vc

0xe804,	// (0x0002583c) form_field_data_wide_pane_vc_cp2

0xe80c,	// (0x00025844) form_field_popup_pane_vc_ParamLimits

0xe80c,	// (0x00025844) form_field_popup_pane_vc

0xe823,	// (0x0002585b) form_field_popup_wide_pane_vc_ParamLimits

0xe823,	// (0x0002585b) form_field_popup_wide_pane_vc

0xe839,	// (0x00025871) form_field_slider_pane_vc_ParamLimits

0xe839,	// (0x00025871) form_field_slider_pane_vc

0xe84c,	// (0x00025884) form_field_slider_wide_pane_vc_ParamLimits

0xe84c,	// (0x00025884) form_field_slider_wide_pane_vc

0x9dee,	// (0x00020e26) grid_touch_1_pane_ParamLimits

0x9dee,	// (0x00020e26) grid_touch_1_pane

0x9e02,	// (0x00020e3a) grid_touch_2_pane_ParamLimits

0x9e02,	// (0x00020e3a) grid_touch_2_pane

0xe8c5,	// (0x000258fd) touch_pane_g1_ParamLimits

0xe8c5,	// (0x000258fd) touch_pane_g1

0xe85f,	// (0x00025897) cell_app_pane_cp_wide_ParamLimits

0xe85f,	// (0x00025897) cell_app_pane_cp_wide

0xe870,	// (0x000258a8) grid_popup_fast_wide_pane_ParamLimits

0xe870,	// (0x000258a8) grid_popup_fast_wide_pane

0xe884,	// (0x000258bc) scroll_pane_cp19_ParamLimits

0xe884,	// (0x000258bc) scroll_pane_cp19

0xb837,	// (0x0002286f) bg_popup_window_pane_cp20

0xe898,	// (0x000258d0) listscroll_popup_fast_wide_pane

0xcc1b,	// (0x00023c53) grid_indicator_nsta_pane

0xe8a0,	// (0x000258d8) clock_nsta_pane_g1

0xe8a9,	// (0x000258e1) clock_nsta_pane_t1

0x9e2c,	// (0x00020e64) cell_indicator_nsta_pane_ParamLimits

0x9e2c,	// (0x00020e64) cell_indicator_nsta_pane

0xe8c5,	// (0x000258fd) cell_indicator_nsta_pane_g1

0x9e49,	// (0x00020e81) cell_indicator_nsta_pane_g2

0x0001,

0xfaa4,	// (0x00026adc) cell_indicator_nsta_pane_g

0xe8d3,	// (0x0002590b) clock_nsta_pane_cp

0xe8db,	// (0x00025913) indicator_nsta_pane_cp

0xe8e4,	// (0x0002591c) nsta_clock_indic_pane_g1

0xb8cf,	// (0x00022907) grid_indicator_pane

0xc34c,	// (0x00023384) scroll_pane_cp29

0x5741,	// (0x0001c779) indicator_nsta_pane_cp2_ParamLimits

0x5741,	// (0x0001c779) indicator_nsta_pane_cp2

0xb893,	// (0x000228cb) main_apps_wheel_pane

0xd0bb,	// (0x000240f3) form_midp_field_text_pane_ParamLimits

0xd1e8,	// (0x00024220) scroll_bar_cp050_ParamLimits

0xe94d,	// (0x00025985) cell_indicator_pane_ParamLimits

0xe94d,	// (0x00025985) cell_indicator_pane

0xe96a,	// (0x000259a2) cell_indicator_pane_g1

0x9e5f,	// (0x00020e97) grid_wheel_folder_pane_ParamLimits

0x9e5f,	// (0x00020e97) grid_wheel_folder_pane

0x9e6d,	// (0x00020ea5) list_wheel_apps_pane_ParamLimits

0x9e6d,	// (0x00020ea5) list_wheel_apps_pane

0x9e7b,	// (0x00020eb3) main_apps_wheel_pane_g1_ParamLimits

0x9e7b,	// (0x00020eb3) main_apps_wheel_pane_g1

0x9e87,	// (0x00020ebf) main_apps_wheel_pane_g2_ParamLimits

0x9e87,	// (0x00020ebf) main_apps_wheel_pane_g2

0x0001,

0xfac0,	// (0x00026af8) main_apps_wheel_pane_g_ParamLimits

0xfac0,	// (0x00026af8) main_apps_wheel_pane_g

0x9e95,	// (0x00020ecd) main_apps_wheel_pane_t1_ParamLimits

0x9e95,	// (0x00020ecd) main_apps_wheel_pane_t1

0x9ea9,	// (0x00020ee1) list_wheel_apps_pane_g1

0x9eb1,	// (0x00020ee9) list_wheel_apps_pane_g2

0x9eb9,	// (0x00020ef1) list_wheel_apps_pane_g3

0x9ec1,	// (0x00020ef9) list_wheel_apps_pane_g4

0x9ecb,	// (0x00020f03) list_wheel_apps_pane_g5

0x0004,

0xfac5,	// (0x00026afd) list_wheel_apps_pane_g

0xc79f,	// (0x000237d7) navi_icon_text_pane

0x92da,	// (0x00020312) aid_fill_nsta

0x9ee2,	// (0x00020f1a) navi_icon_text_pane_g1

0x9eee,	// (0x00020f26) navi_icon_text_pane_t1

0xc63b,	// (0x00023673) list_set_graphic_pane_t1_ParamLimits

0xc63b,	// (0x00023673) list_set_graphic_pane_t1

0xd8f0,	// (0x00024928) popup_midp_note_alarm_window_t6_ParamLimits

0xd8f0,	// (0x00024928) popup_midp_note_alarm_window_t6

0xd902,	// (0x0002493a) popup_midp_note_alarm_window_t7_ParamLimits

0xd902,	// (0x0002493a) popup_midp_note_alarm_window_t7

0xd914,	// (0x0002494c) popup_midp_note_alarm_window_t8_ParamLimits

0xd914,	// (0x0002494c) popup_midp_note_alarm_window_t8

0xd926,	// (0x0002495e) popup_midp_note_alarm_window_t9_ParamLimits

0xd926,	// (0x0002495e) popup_midp_note_alarm_window_t9

0xd938,	// (0x00024970) popup_midp_note_alarm_window_t10_ParamLimits

0xd938,	// (0x00024970) popup_midp_note_alarm_window_t10

0xd94a,	// (0x00024982) popup_midp_note_alarm_window_t11_ParamLimits

0xd94a,	// (0x00024982) popup_midp_note_alarm_window_t11

0xd95c,	// (0x00024994) scroll_pane_cp17_ParamLimits

0xd95c,	// (0x00024994) scroll_pane_cp17

0x5b75,	// (0x0001cbad) volume_small_pane_cp_g1

0x5ec1,	// (0x0001cef9) volume_small_pane_cp_g2

0x5eca,	// (0x0001cf02) volume_small_pane_cp_g3

0x5ed3,	// (0x0001cf0b) volume_small_pane_cp_g4

0x5edc,	// (0x0001cf14) volume_small_pane_cp_g5

0x5ee5,	// (0x0001cf1d) volume_small_pane_cp_g6

0x5eee,	// (0x0001cf26) volume_small_pane_cp_g7

0x5ef7,	// (0x0001cf2f) volume_small_pane_cp_g8

0x5f00,	// (0x0001cf38) volume_small_pane_cp_g9

0x5f09,	// (0x0001cf41) volume_small_pane_cp_g10

0xc94b,	// (0x00023983) midp_ticker_pane_g1_ParamLimits

0xc957,	// (0x0002398f) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x000267a8) midp_ticker_pane_g_ParamLimits

0x8a98,	// (0x0001fad0) midp_ticker_pane_t1_ParamLimits

0x92fa,	// (0x00020332) aid_fill_nsta_2

0xd1d4,	// (0x0002420c) list_form2_midp_pane

0xdffb,	// (0x00025033) midp_editing_number_pane_ParamLimits

0xe00a,	// (0x00025042) midp_ticker_pane_ParamLimits

0xe974,	// (0x000259ac) form2_midp_field_pane

0xe97c,	// (0x000259b4) scroll_pane_cp51

0xe99c,	// (0x000259d4) form2_midp_button_pane_ParamLimits

0xe99c,	// (0x000259d4) form2_midp_button_pane

0xe9ae,	// (0x000259e6) form2_midp_content_pane_ParamLimits

0xe9ae,	// (0x000259e6) form2_midp_content_pane

0xe9c8,	// (0x00025a00) form2_midp_field_choice_group_pane

0xe9d0,	// (0x00025a08) form2_midp_field_pane_g1

0xe9d8,	// (0x00025a10) form2_midp_field_pane_g2

0xe9e0,	// (0x00025a18) form2_midp_field_pane_g3

0xe9e8,	// (0x00025a20) form2_midp_field_pane_g4

0x0003,

0xfaea,	// (0x00026b22) form2_midp_field_pane_g

0xe9f0,	// (0x00025a28) form2_midp_gauge_slider_pane

0xe9f8,	// (0x00025a30) form2_midp_gauge_wait_pane

0xea00,	// (0x00025a38) form2_midp_image_pane_ParamLimits

0xea00,	// (0x00025a38) form2_midp_image_pane

0xea1b,	// (0x00025a53) form2_midp_label_pane_ParamLimits

0xea1b,	// (0x00025a53) form2_midp_label_pane

0x9f1c,	// (0x00020f54) form2_midp_label_pane_cp_ParamLimits

0x9f1c,	// (0x00020f54) form2_midp_label_pane_cp

0xea34,	// (0x00025a6c) form2_midp_string_pane_ParamLimits

0xea34,	// (0x00025a6c) form2_midp_string_pane

0x4c3a,	// (0x0001bc72) form2_midp_text_pane_ParamLimits

0x4c3a,	// (0x0001bc72) form2_midp_text_pane

0xea46,	// (0x00025a7e) form2_midp_time_pane

0xea56,	// (0x00025a8e) input_focus_pane_cp51_ParamLimits

0xea56,	// (0x00025a8e) input_focus_pane_cp51

0xea6e,	// (0x00025aa6) form2_midp_label_pane_t1_ParamLimits

0xea6e,	// (0x00025aa6) form2_midp_label_pane_t1

0x4c53,	// (0x0001bc8b) form2_mdip_text_pane_t1_ParamLimits

0x4c53,	// (0x0001bc8b) form2_mdip_text_pane_t1

0x4c70,	// (0x0001bca8) form2_midp_time_pane_t1

0xeab6,	// (0x00025aee) form2_midp_gauge_slider_pane_t1

0x9f3d,	// (0x00020f75) form2_midp_gauge_slider_pane_t2

0x9f4f,	// (0x00020f87) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf3,	// (0x00026b2b) form2_midp_gauge_slider_pane_t

0xeac8,	// (0x00025b00) form2_midp_slider_pane

0xead4,	// (0x00025b0c) form2_midp_gauge_wait_pane_t1

0xeae2,	// (0x00025b1a) form2_midp_wait_pane_ParamLimits

0xeae2,	// (0x00025b1a) form2_midp_wait_pane

0x9f61,	// (0x00020f99) list_single_2graphic_pane_cp4_ParamLimits

0x9f61,	// (0x00020f99) list_single_2graphic_pane_cp4

0x977f,	// (0x000207b7) list_single_midp_graphic_pane_cp_ParamLimits

0x977f,	// (0x000207b7) list_single_midp_graphic_pane_cp

0xb837,	// (0x0002286f) list_highlight_pane_cp20

0xeb0d,	// (0x00025b45) list_single_2graphic_pane_g1_cp4

0xe338,	// (0x00025370) list_single_2graphic_pane_g2_cp4

0xeb15,	// (0x00025b4d) list_single_2graphic_pane_t1_cp4

0xb893,	// (0x000228cb) list_highlight_pane_cp21

0xeb24,	// (0x00025b5c) list_single_midp_graphic_pane_g4_cp

0xeb33,	// (0x00025b6b) list_single_midp_graphic_pane_t1_cp

0x9f78,	// (0x00020fb0) form2_mdip_string_pane_t1_ParamLimits

0x9f78,	// (0x00020fb0) form2_mdip_string_pane_t1

0xb837,	// (0x0002286f) bg_wml_button_pane_cp2

0xb82d,	// (0x00022865) form2_midp_image_pane_g1

0x4317,	// (0x0001b34f) list_double_large_graphic_pane_g5_ParamLimits

0x4317,	// (0x0001b34f) list_double_large_graphic_pane_g5

0x89ec,	// (0x0001fa24) midp_form_pane_ParamLimits

0xb893,	// (0x000228cb) main_apps_wheel_pane_ParamLimits

0x9036,	// (0x0002006e) popup_preview_window_ParamLimits

0x9036,	// (0x0002006e) popup_preview_window

0xcc48,	// (0x00023c80) popup_touch_info_window_ParamLimits

0xcc48,	// (0x00023c80) popup_touch_info_window

0xcc66,	// (0x00023c9e) popup_touch_menu_window_ParamLimits

0xcc66,	// (0x00023c9e) popup_touch_menu_window

0xb823,	// (0x0002285b) bg_popup_sub_pane_cp6

0xeb48,	// (0x00025b80) list_touch_menu_pane

0xeb50,	// (0x00025b88) list_single_touch_menu_pane_ParamLimits

0xeb50,	// (0x00025b88) list_single_touch_menu_pane

0xeb65,	// (0x00025b9d) list_single_touch_menu_pane_t1

0xb893,	// (0x000228cb) bg_popup_sub_pane_cp7_ParamLimits

0xb893,	// (0x000228cb) bg_popup_sub_pane_cp7

0xeb73,	// (0x00025bab) heading_sub_pane

0xeb7b,	// (0x00025bb3) list_touch_info_pane_ParamLimits

0xeb7b,	// (0x00025bb3) list_touch_info_pane

0xeb8a,	// (0x00025bc2) list_single_touch_info_pane_ParamLimits

0xeb8a,	// (0x00025bc2) list_single_touch_info_pane

0xeb9c,	// (0x00025bd4) list_single_touch_info_pane_t1

0xebaa,	// (0x00025be2) list_single_touch_info_pane_t2

0x0001,

0xfb01,	// (0x00026b39) list_single_touch_info_pane_t

0xc921,	// (0x00023959) bg_popup_heading_pane_cp

0xebb8,	// (0x00025bf0) heading_sub_pane_t1

0xcf59,	// (0x00023f91) bg_popup_preview_window_pane_cp_ParamLimits

0xcf59,	// (0x00023f91) bg_popup_preview_window_pane_cp

0xeb73,	// (0x00025bab) heading_preview_pane

0xeb7b,	// (0x00025bb3) list_preview_pane_ParamLimits

0xeb7b,	// (0x00025bb3) list_preview_pane

0xebc6,	// (0x00025bfe) popup_preview_window_g1

0xeb8a,	// (0x00025bc2) list_single_preview_pane_ParamLimits

0xeb8a,	// (0x00025bc2) list_single_preview_pane

0xebce,	// (0x00025c06) list_single_preview_pane_g1

0xebd6,	// (0x00025c0e) list_single_preview_pane_t1

0xeb9c,	// (0x00025bd4) list_single_preview_pane_t2

0x0001,

0xfb06,	// (0x00026b3e) list_single_preview_pane_t

0xebe4,	// (0x00025c1c) bg_popup_heading_pane_cp2_ParamLimits

0xebe4,	// (0x00025c1c) bg_popup_heading_pane_cp2

0xebfa,	// (0x00025c32) heading_preview_pane_g1

0xec02,	// (0x00025c3a) heading_preview_pane_t1_ParamLimits

0xec02,	// (0x00025c3a) heading_preview_pane_t1

0xb8e6,	// (0x0002291e) soft_indicator_pane_t1_ParamLimits

0xbe4d,	// (0x00022e85) scroll_pane_ParamLimits

0xc248,	// (0x00023280) scroll_sc2_left_pane

0xc251,	// (0x00023289) scroll_sc2_right_pane

0xc270,	// (0x000232a8) scroll_bg_pane_g1_ParamLimits

0xc285,	// (0x000232bd) scroll_bg_pane_g2_ParamLimits

0xc29d,	// (0x000232d5) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00026737) scroll_bg_pane_g_ParamLimits

0xc270,	// (0x000232a8) scroll_handle_pane_g1_ParamLimits

0xc2bf,	// (0x000232f7) scroll_handle_pane_g2_ParamLimits

0xc29d,	// (0x000232d5) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002673e) scroll_handle_pane_g_ParamLimits

0xcb83,	// (0x00023bbb) popup_choice_list_window_ParamLimits

0xcb83,	// (0x00023bbb) popup_choice_list_window

0xcdb3,	// (0x00023deb) choice_list_pane

0xce35,	// (0x00023e6d) cell_toolbar_pane_t1

0xce5d,	// (0x00023e95) toolbar_button_pane_ParamLimits

0xdd64,	// (0x00024d9c) ai_gene_pane_1_t2_ParamLimits

0xdd64,	// (0x00024d9c) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0002694f) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0002694f) ai_gene_pane_1_t

0xec1f,	// (0x00025c57) scroll_sc2_left_pane_g1

0xec1f,	// (0x00025c57) scroll_sc2_right_pane_g1

0xc031,	// (0x00023069) bg_popup_sub_pane_cp10

0xec29,	// (0x00025c61) list_choice_list_pane

0xec40,	// (0x00025c78) list_single_choice_list_pane_ParamLimits

0xec40,	// (0x00025c78) list_single_choice_list_pane

0xec54,	// (0x00025c8c) list_single_choice_list_pane_g1

0xec5c,	// (0x00025c94) list_single_choice_list_pane_t1_ParamLimits

0xec5c,	// (0x00025c94) list_single_choice_list_pane_t1

0xec71,	// (0x00025ca9) choice_list_pane_g1

0xec79,	// (0x00025cb1) choice_list_pane_t1

0xb823,	// (0x0002285b) input_focus_pane_cp11

0xc1a6,	// (0x000231de) title_pane_stacon_g2_ParamLimits

0xc1a6,	// (0x000231de) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002671d) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002671d) title_pane_stacon_g

0xc921,	// (0x00023959) cursor_press_pane

0x8cf5,	// (0x0001fd2d) popup_fep_hwr_window_ParamLimits

0x8cf5,	// (0x0001fd2d) popup_fep_hwr_window

0xcbd7,	// (0x00023c0f) popup_fep_vkb_window_ParamLimits

0xcbd7,	// (0x00023c0f) popup_fep_vkb_window

0xec87,	// (0x00025cbf) cursor_press_pane_g1

0x0002,

0xfb2f,	// (0x00026b67) fep_vkb_side_pane_g_ParamLimits

0x5f3d,	// (0x0001cf75) fep_hwr_candidate_pane_ParamLimits

0x5f3d,	// (0x0001cf75) fep_hwr_candidate_pane

0x5f67,	// (0x0001cf9f) fep_hwr_side_pane_ParamLimits

0x5f67,	// (0x0001cf9f) fep_hwr_side_pane

0x5f87,	// (0x0001cfbf) fep_hwr_top_pane_ParamLimits

0x5f87,	// (0x0001cfbf) fep_hwr_top_pane

0x5f9f,	// (0x0001cfd7) fep_hwr_write_pane_ParamLimits

0x5f9f,	// (0x0001cfd7) fep_hwr_write_pane

0xfb2f,	// (0x00026b67) fep_vkb_side_pane_g

0xec8f,	// (0x00025cc7) fep_hwr_top_pane_g1

0xeca1,	// (0x00025cd9) fep_hwr_top_pane_g2

0x5fcb,	// (0x0001d003) fep_hwr_top_pane_g3

0x0002,

0xfb0b,	// (0x00026b43) fep_hwr_top_pane_g

0x5fe0,	// (0x0001d018) fep_hwr_top_text_pane

0xc412,	// (0x0002344a) fep_hwr_top_text_pane_g1

0xecd7,	// (0x00025d0f) fep_hwr_top_text_pane_t1

0x60d6,	// (0x0001d10e) fep_hwr_candidate_pane_g1

0xeee4,	// (0x00025f1c) fep_vkb_keypad_pane_g3_ParamLimits

0xeee4,	// (0x00025f1c) fep_vkb_keypad_pane_g3

0xef0c,	// (0x00025f44) fep_vkb_keypad_pane_g4_ParamLimits

0xef0c,	// (0x00025f44) fep_vkb_keypad_pane_g4

0xef7b,	// (0x00025fb3) fep_vkb_bottom_pane_g2_ParamLimits

0xef7b,	// (0x00025fb3) fep_vkb_bottom_pane_g2

0x0001,

0xfb36,	// (0x00026b6e) fep_vkb_bottom_pane_g_ParamLimits

0xfb36,	// (0x00026b6e) fep_vkb_bottom_pane_g

0xec1f,	// (0x00025c57) cell_vkb_side_pane_g2

0x0001,

0xfb40,	// (0x00026b78) cell_vkb_side_pane_g

0xefbf,	// (0x00025ff7) cell_vkb_side_pane_t1

0xefcd,	// (0x00026005) cell_vkb_side_pane_t1_copy1

0xec1f,	// (0x00025c57) bg_fep_vkb_candidate_pane_g2

0xf0a9,	// (0x000260e1) cell_vkb_candidate_pane_ParamLimits

0xece5,	// (0x00025d1d) aid_size_cell_vkb_ParamLimits

0xece5,	// (0x00025d1d) aid_size_cell_vkb

0xf0a9,	// (0x000260e1) cell_vkb_candidate_pane

0x60f0,	// (0x0001d128) bg_popup_fep_shadow_pane_g1

0xed61,	// (0x00025d99) fep_vkb_bottom_pane_ParamLimits

0xed61,	// (0x00025d99) fep_vkb_bottom_pane

0xed9e,	// (0x00025dd6) fep_vkb_candidate_pane_ParamLimits

0xed9e,	// (0x00025dd6) fep_vkb_candidate_pane

0xedba,	// (0x00025df2) fep_vkb_keypad_pane_ParamLimits

0xedba,	// (0x00025df2) fep_vkb_keypad_pane

0xee00,	// (0x00025e38) fep_vkb_side_pane_ParamLimits

0xee00,	// (0x00025e38) fep_vkb_side_pane

0xee3c,	// (0x00025e74) fep_vkb_top_pane_ParamLimits

0xee3c,	// (0x00025e74) fep_vkb_top_pane

0xee78,	// (0x00025eb0) fep_vkb_top_pane_g1_ParamLimits

0xee78,	// (0x00025eb0) fep_vkb_top_pane_g1

0xee87,	// (0x00025ebf) fep_vkb_top_pane_g2_ParamLimits

0xee87,	// (0x00025ebf) fep_vkb_top_pane_g2

0xee96,	// (0x00025ece) fep_vkb_top_pane_g3_ParamLimits

0xee96,	// (0x00025ece) fep_vkb_top_pane_g3

0x0003,

0xfb26,	// (0x00026b5e) fep_vkb_top_pane_g_ParamLimits

0xfb26,	// (0x00026b5e) fep_vkb_top_pane_g

0xeeb4,	// (0x00025eec) fep_vkb_top_text_pane_ParamLimits

0xeeb4,	// (0x00025eec) fep_vkb_top_text_pane

0xa05d,	// (0x00021095) fep_vkb_side_pane_g1_ParamLimits

0xa05d,	// (0x00021095) fep_vkb_side_pane_g1

0xeed3,	// (0x00025f0b) grid_vkb_side_pane_ParamLimits

0xeed3,	// (0x00025f0b) grid_vkb_side_pane

0x60f8,	// (0x0001d130) bg_popup_fep_shadow_pane_g2

0x6101,	// (0x0001d139) bg_popup_fep_shadow_pane_g3

0x6109,	// (0x0001d141) bg_popup_fep_shadow_pane_g4

0x6112,	// (0x0001d14a) bg_popup_fep_shadow_pane_g5

0x611c,	// (0x0001d154) bg_popup_fep_shadow_pane_g6

0x6124,	// (0x0001d15c) bg_popup_fep_shadow_pane_g7

0xbf61,	// (0x00022f99) bg_popup_fep_shadow_pane_g8

0xef2a,	// (0x00025f62) grid_vkb_keypad_number_pane_ParamLimits

0xef2a,	// (0x00025f62) grid_vkb_keypad_number_pane

0xef3a,	// (0x00025f72) grid_vkb_keypad_pane_ParamLimits

0xef3a,	// (0x00025f72) grid_vkb_keypad_pane

0xef60,	// (0x00025f98) fep_vkb_bottom_pane_g1_ParamLimits

0xef60,	// (0x00025f98) fep_vkb_bottom_pane_g1

0xef89,	// (0x00025fc1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef89,	// (0x00025fc1) grid_vkb_keypad_bottom_left_pane

0xef9e,	// (0x00025fd6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef9e,	// (0x00025fd6) grid_vkb_keypad_bottom_right_pane

0xefb3,	// (0x00025feb) fep_vkb_top_text_pane_g1

0xa0a4,	// (0x000210dc) fep_vkb_top_text_pane_t1

0xa0b6,	// (0x000210ee) cell_vkb_side_pane_ParamLimits

0xa0b6,	// (0x000210ee) cell_vkb_side_pane

0xec1f,	// (0x00025c57) cell_vkb_side_pane_g1

0xefdb,	// (0x00026013) cell_vkb_keypad_pane_ParamLimits

0xefdb,	// (0x00026013) cell_vkb_keypad_pane

0xf056,	// (0x0002608e) cell_vkb_keypad_pane_g1

0x0008,

0xfb53,	// (0x00026b8b) bg_popup_fep_shadow_pane_g

0xec1f,	// (0x00025c57) cell_hwr_side_pane_g1

0xec1f,	// (0x00025c57) cell_hwr_side_pane_g2

0xf060,	// (0x00026098) cell_vkb_keypad_pane_t1

0xa0cc,	// (0x00021104) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa0cc,	// (0x00021104) cell_vkb_keypad_bottom_left_pane

0xa0e1,	// (0x00021119) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa0e1,	// (0x00021119) cell_vkb_keypad_bottom_right_pane

0xec1f,	// (0x00025c57) cell_vkb_keypad_bottom_left_pane_g1

0xec1f,	// (0x00025c57) cell_vkb_keypad_bottom_right_pane_g1

0xf06e,	// (0x000260a6) cell_vkb_keypad_number_pane_ParamLimits

0xf06e,	// (0x000260a6) cell_vkb_keypad_number_pane

0xf08d,	// (0x000260c5) cell_vkb_keypad_number_pane_g1

0xf097,	// (0x000260cf) cell_vkb_keypad_number_pane_g2

0xf0a0,	// (0x000260d8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb45,	// (0x00026b7d) cell_vkb_keypad_number_pane_g

0xf060,	// (0x00026098) cell_vkb_keypad_number_pane_t1

0xf0c6,	// (0x000260fe) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x00026b78) cell_hwr_side_pane_g

0xf0df,	// (0x00026117) cell_hwr_side_pane_t1

0x6136,	// (0x0001d16e) cell_hwr_side_pane_t1_copy1

0xeea6,	// (0x00025ede) cell_hwr_candidate_pane_g1

0x6144,	// (0x0001d17c) cell_hwr_candidate_pane_t1

0xec1f,	// (0x00025c57) cell_vkb_candidate_pane_g2

0xf123,	// (0x0002615b) cell_vkb_candidate_pane_t1

0x28f9,	// (0x00019931) bg_popup_fep_shadow_pane_ParamLimits

0x28f9,	// (0x00019931) bg_popup_fep_shadow_pane

0x2928,	// (0x00019960) bg_fep_hwr_top_pane_g4

0xecb3,	// (0x00025ceb) bg_hwr_side_pane_g1_ParamLimits

0xecb3,	// (0x00025ceb) bg_hwr_side_pane_g1

0xa016,	// (0x0002104e) cell_hwr_side_pane_ParamLimits

0xa016,	// (0x0002104e) cell_hwr_side_pane

0x6057,	// (0x0001d08f) fep_hwr_write_pane_g1_ParamLimits

0x6057,	// (0x0001d08f) fep_hwr_write_pane_g1

0x6064,	// (0x0001d09c) fep_hwr_write_pane_g2_ParamLimits

0x6064,	// (0x0001d09c) fep_hwr_write_pane_g2

0x6071,	// (0x0001d0a9) fep_hwr_write_pane_g3_ParamLimits

0x6071,	// (0x0001d0a9) fep_hwr_write_pane_g3

0xa036,	// (0x0002106e) fep_hwr_write_pane_g4_ParamLimits

0xa036,	// (0x0002106e) fep_hwr_write_pane_g4

0x0005,

0xfb12,	// (0x00026b4a) fep_hwr_write_pane_g_ParamLimits

0xfb12,	// (0x00026b4a) fep_hwr_write_pane_g

0x2928,	// (0x00019960) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2928,	// (0x00019960) bg_fep_hwr_candidate_pane_g2

0x6094,	// (0x0001d0cc) cell_hwr_candidate_pane_ParamLimits

0x6094,	// (0x0001d0cc) cell_hwr_candidate_pane

0x60d6,	// (0x0001d10e) fep_hwr_candidate_pane_g1_ParamLimits

0xed13,	// (0x00025d4b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed13,	// (0x00025d4b) bg_popup_fep_shadow_pane_cp2

0xeea6,	// (0x00025ede) fep_vkb_top_pane_g4_ParamLimits

0xeea6,	// (0x00025ede) fep_vkb_top_pane_g4

0xeec5,	// (0x00025efd) fep_vkb_side_pane_g2_ParamLimits

0xeec5,	// (0x00025efd) fep_vkb_side_pane_g2

0x7eee,	// (0x0001ef26) list_setting_pane_t4_ParamLimits

0x7eee,	// (0x0001ef26) list_setting_pane_t4

0x7f88,	// (0x0001efc0) list_setting_number_pane_t5_ParamLimits

0x7f88,	// (0x0001efc0) list_setting_number_pane_t5

0x8931,	// (0x0001f969) list_double_heading_pane_cp2_ParamLimits

0x8931,	// (0x0001f969) list_double_heading_pane_cp2

0xbef4,	// (0x00022f2c) list_double_heading_pane_g1_cp2_ParamLimits

0xbef4,	// (0x00022f2c) list_double_heading_pane_g1_cp2

0xbf00,	// (0x00022f38) list_double_heading_pane_g2_cp2_ParamLimits

0xbf00,	// (0x00022f38) list_double_heading_pane_g2_cp2

0xf131,	// (0x00026169) list_double_heading_pane_t1_cp2_ParamLimits

0xf131,	// (0x00026169) list_double_heading_pane_t1_cp2

0xf147,	// (0x0002617f) list_double_heading_pane_t2_cp2_ParamLimits

0xf147,	// (0x0002617f) list_double_heading_pane_t2_cp2

0xb81b,	// (0x00022853) aid_value_unit2

0x52e3,	// (0x0001c31b) popup_preview_fixed_window

0xb9c6,	// (0x000229fe) bg_popup_preview_window_pane_cp02

0xf159,	// (0x00026191) list_preview_fixed_pane

0xf19f,	// (0x000261d7) list_empty_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_empty_pane_fp

0xf19f,	// (0x000261d7) list_single_cale_day_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_cale_day_pane_fp

0xf19f,	// (0x000261d7) list_single_graphic_heading_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_graphic_heading_pane_fp

0xf19f,	// (0x000261d7) list_single_graphic_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_graphic_pane_fp

0xf19f,	// (0x000261d7) list_single_heading_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_heading_pane_fp

0xf19f,	// (0x000261d7) list_single_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_pane_fp

0xf1b6,	// (0x000261ee) list_single_pane_fp_g1_ParamLimits

0xf1b6,	// (0x000261ee) list_single_pane_fp_g1

0x42af,	// (0x0001b2e7) list_single_pane_fp_g2_ParamLimits

0x42af,	// (0x0001b2e7) list_single_pane_fp_g2

0x4c83,	// (0x0001bcbb) list_single_pane_fp_g3_ParamLimits

0x4c83,	// (0x0001bcbb) list_single_pane_fp_g3

0xf1c2,	// (0x000261fa) list_single_pane_fp_g4_ParamLimits

0xf1c2,	// (0x000261fa) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x00026bac) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x00026bac) list_single_pane_fp_g

0x4c97,	// (0x0001bccf) list_single_pane_fp_t1_ParamLimits

0x4c97,	// (0x0001bccf) list_single_pane_fp_t1

0x4cae,	// (0x0001bce6) list_single_graphic_pane_fp_g1_ParamLimits

0x4cae,	// (0x0001bce6) list_single_graphic_pane_fp_g1

0xf1b6,	// (0x000261ee) list_single_graphic_pane_fp_g2_ParamLimits

0xf1b6,	// (0x000261ee) list_single_graphic_pane_fp_g2

0x42af,	// (0x0001b2e7) list_single_graphic_pane_fp_g3_ParamLimits

0x42af,	// (0x0001b2e7) list_single_graphic_pane_fp_g3

0x4c83,	// (0x0001bcbb) list_single_graphic_pane_fp_g4_ParamLimits

0x4c83,	// (0x0001bcbb) list_single_graphic_pane_fp_g4

0xf1c2,	// (0x000261fa) list_single_graphic_pane_fp_g5_ParamLimits

0xf1c2,	// (0x000261fa) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026bb5) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026bb5) list_single_graphic_pane_fp_g

0x4cba,	// (0x0001bcf2) list_single_graphic_pane_fp_t1_ParamLimits

0x4cba,	// (0x0001bcf2) list_single_graphic_pane_fp_t1

0x4cae,	// (0x0001bce6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4cae,	// (0x0001bce6) list_single_graphic_heading_pane_fp_g1

0xf1b6,	// (0x000261ee) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x000261ee) list_single_graphic_heading_pane_fp_g2

0x42af,	// (0x0001b2e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x42af,	// (0x0001b2e7) list_single_graphic_heading_pane_fp_g3

0x4c83,	// (0x0001bcbb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4c83,	// (0x0001bcbb) list_single_graphic_heading_pane_fp_g4

0xf1c2,	// (0x000261fa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x000261fa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026bb5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026bb5) list_single_graphic_heading_pane_fp_g

0x4cd0,	// (0x0001bd08) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4cd0,	// (0x0001bd08) list_single_graphic_heading_pane_fp_t1

0x4ce6,	// (0x0001bd1e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ce6,	// (0x0001bd1e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x00026bc0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x00026bc0) list_single_graphic_heading_pane_fp_t

0x4cf8,	// (0x0001bd30) list_single_cale_day_pane_fp_g1_ParamLimits

0x4cf8,	// (0x0001bd30) list_single_cale_day_pane_fp_g1

0xf1ce,	// (0x00026206) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1ce,	// (0x00026206) list_single_cale_day_pane_fp_g2

0x4d30,	// (0x0001bd68) list_single_cale_day_pane_fp_g3_ParamLimits

0x4d30,	// (0x0001bd68) list_single_cale_day_pane_fp_g3

0x4d58,	// (0x0001bd90) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d58,	// (0x0001bd90) list_single_cale_day_pane_fp_g4

0x4d7c,	// (0x0001bdb4) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d7c,	// (0x0001bdb4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x00026bc5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x00026bc5) list_single_cale_day_pane_fp_g

0x4da0,	// (0x0001bdd8) list_single_cale_day_pane_fp_t1_ParamLimits

0x4da0,	// (0x0001bdd8) list_single_cale_day_pane_fp_t1

0x4dc6,	// (0x0001bdfe) list_single_cale_day_pane_fp_t2_ParamLimits

0x4dc6,	// (0x0001bdfe) list_single_cale_day_pane_fp_t2

0x4ddf,	// (0x0001be17) list_single_cale_day_pane_fp_t3_ParamLimits

0x4ddf,	// (0x0001be17) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x00026bd0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x00026bd0) list_single_cale_day_pane_fp_t

0xf1b6,	// (0x000261ee) list_empty_pane_fp_g1_ParamLimits

0xf1b6,	// (0x000261ee) list_empty_pane_fp_g1

0x4df8,	// (0x0001be30) list_empty_pane_fp_t1

0x4e06,	// (0x0001be3e) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x00026bd7) list_empty_pane_fp_t

0xf1b6,	// (0x000261ee) list_single_heading_pane_fp_g1_ParamLimits

0xf1b6,	// (0x000261ee) list_single_heading_pane_fp_g1

0x42af,	// (0x0001b2e7) list_single_heading_pane_fp_g2_ParamLimits

0x42af,	// (0x0001b2e7) list_single_heading_pane_fp_g2

0x4c83,	// (0x0001bcbb) list_single_heading_pane_fp_g3_ParamLimits

0x4c83,	// (0x0001bcbb) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x00026bdc) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x00026bdc) list_single_heading_pane_fp_g

0x4e14,	// (0x0001be4c) list_single_heading_pane_fp_t1_ParamLimits

0x4e14,	// (0x0001be4c) list_single_heading_pane_fp_t1

0x4e26,	// (0x0001be5e) list_single_heading_pane_fp_t2_ParamLimits

0x4e26,	// (0x0001be5e) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x00026be3) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x00026be3) list_single_heading_pane_fp_t

0xc03d,	// (0x00023075) aid_size_cell_fast

0xb9a9,	// (0x000229e1) soft_indicator_pane_cp1_t1

0xc07a,	// (0x000230b2) cell_app_pane_cp2_ParamLimits

0xc07a,	// (0x000230b2) cell_app_pane_cp2

0x5f26,	// (0x0001cf5e) fep_hwr_candidate_drop_down_list_pane

0x2948,	// (0x00019980) fep_hwr_candidate_pane_g3_ParamLimits

0x2948,	// (0x00019980) fep_hwr_candidate_pane_g3

0x2955,	// (0x0001998d) fep_hwr_candidate_pane_g4_ParamLimits

0x2955,	// (0x0001998d) fep_hwr_candidate_pane_g4

0x0002,

0xfb1f,	// (0x00026b57) fep_hwr_candidate_pane_g_ParamLimits

0xfb1f,	// (0x00026b57) fep_hwr_candidate_pane_g

0xed8d,	// (0x00025dc5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed8d,	// (0x00025dc5) fep_vkb_candidate_drop_down_list_pane

0xf0ce,	// (0x00026106) fep_vkb_candidate_pane_g3

0xf0d6,	// (0x0002610e) fep_vkb_candidate_pane_g4

0x0002,

0xfb4c,	// (0x00026b84) fep_vkb_candidate_pane_g

0xeea6,	// (0x00025ede) cell_hwr_candidate_pane_g1_ParamLimits

0xf282,	// (0x000262ba) cell_hwr_candidate_pane_g3_ParamLimits

0xf282,	// (0x000262ba) cell_hwr_candidate_pane_g3

0xf2a3,	// (0x000262db) cell_hwr_candidate_pane_g4_ParamLimits

0xf2a3,	// (0x000262db) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x00026b9e) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x00026b9e) cell_hwr_candidate_pane_g

0xf0ed,	// (0x00026125) cell_vkb_candidate_pane_g3_ParamLimits

0xf0ed,	// (0x00026125) cell_vkb_candidate_pane_g3

0xf108,	// (0x00026140) cell_vkb_candidate_pane_g4_ParamLimits

0xf108,	// (0x00026140) cell_vkb_candidate_pane_g4

0xf1da,	// (0x00026212) cell_app_pane_cp2_g1_ParamLimits

0xf1da,	// (0x00026212) cell_app_pane_cp2_g1

0xf1f8,	// (0x00026230) cell_app_pane_cp2_g2_ParamLimits

0xf1f8,	// (0x00026230) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x00026be8) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x00026be8) cell_app_pane_cp2_g

0xf204,	// (0x0002623c) cell_app_pane_cp2_t1_ParamLimits

0xf204,	// (0x0002623c) cell_app_pane_cp2_t1

0xbeda,	// (0x00022f12) grid_highlight_pane_cp1_ParamLimits

0xbeda,	// (0x00022f12) grid_highlight_pane_cp1

0x6162,	// (0x0001d19a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6162,	// (0x0001d19a) cell_hwr_candidate_pane_cp1

0xeea6,	// (0x00025ede) fep_hwr_candidate_drop_down_list_pane_g1

0xf216,	// (0x0002624e) fep_hwr_candidate_drop_down_list_pane_g2

0xf223,	// (0x0002625b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00026bed) fep_hwr_candidate_drop_down_list_pane_g

0x6181,	// (0x0001d1b9) fep_hwr_candidate_drop_down_list_scroll_pane

0x618a,	// (0x0001d1c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x618a,	// (0x0001d1c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6197,	// (0x0001d1cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6197,	// (0x0001d1cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x61a4,	// (0x0001d1dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x61a4,	// (0x0001d1dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf0ed,	// (0x00026125) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf0ed,	// (0x00026125) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf108,	// (0x00026140) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf108,	// (0x00026140) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x61b1,	// (0x0001d1e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x61b1,	// (0x0001d1e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x61cc,	// (0x0001d204) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x61cc,	// (0x0001d204) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf2c4,	// (0x000262fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf2c4,	// (0x000262fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00026bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00026bf4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf230,	// (0x00026268) cell_vkb_candidate_pane_cp1_ParamLimits

0xf230,	// (0x00026268) cell_vkb_candidate_pane_cp1

0xeea6,	// (0x00025ede) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) fep_vkb_candidate_drop_down_list_pane_g1

0xf216,	// (0x0002624e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf216,	// (0x0002624e) fep_vkb_candidate_drop_down_list_pane_g2

0xf223,	// (0x0002625b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf223,	// (0x0002625b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00026bed) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x00026bed) fep_vkb_candidate_drop_down_list_pane_g

0xf250,	// (0x00026288) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf250,	// (0x00026288) fep_vkb_candidate_drop_down_list_scroll_pane

0xf25d,	// (0x00026295) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf25d,	// (0x00026295) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf26a,	// (0x000262a2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf26a,	// (0x000262a2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf276,	// (0x000262ae) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf276,	// (0x000262ae) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf282,	// (0x000262ba) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf282,	// (0x000262ba) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf2a3,	// (0x000262db) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf2a3,	// (0x000262db) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf2df,	// (0x00026317) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf2df,	// (0x00026317) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf300,	// (0x00026338) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf300,	// (0x00026338) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf2c4,	// (0x000262fc) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf2c4,	// (0x000262fc) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00026c05) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00026c05) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8488,	// (0x0001f4c0) title_pane_g1_ParamLimits

0x8499,	// (0x0001f4d1) title_pane_g2_ParamLimits

0xf56a,	// (0x000265a2) title_pane_g_ParamLimits

0xc402,	// (0x0002343a) aid_call2_pane

0xc40a,	// (0x00023442) aid_call_pane

0xc412,	// (0x0002344a) popup_clock_analogue_window_g1

0xc412,	// (0x0002344a) popup_clock_analogue_window_g2

0x5642,	// (0x0001c67a) popup_clock_analogue_window_g3

0x564b,	// (0x0001c683) popup_clock_analogue_window_g4

0xb82d,	// (0x00022865) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002674c) popup_clock_analogue_window_g

0x5653,	// (0x0001c68b) popup_clock_analogue_window_t1

0x5661,	// (0x0001c699) clock_digital_number_pane_ParamLimits

0x5661,	// (0x0001c699) clock_digital_number_pane

0x566d,	// (0x0001c6a5) clock_digital_number_pane_cp02_ParamLimits

0x566d,	// (0x0001c6a5) clock_digital_number_pane_cp02

0x5679,	// (0x0001c6b1) clock_digital_number_pane_cp03_ParamLimits

0x5679,	// (0x0001c6b1) clock_digital_number_pane_cp03

0x5685,	// (0x0001c6bd) clock_digital_number_pane_cp04_ParamLimits

0x5685,	// (0x0001c6bd) clock_digital_number_pane_cp04

0x5691,	// (0x0001c6c9) clock_digital_separator_pane_ParamLimits

0x5691,	// (0x0001c6c9) clock_digital_separator_pane

0x569d,	// (0x0001c6d5) popup_clock_digital_window_t1_ParamLimits

0x569d,	// (0x0001c6d5) popup_clock_digital_window_t1

0xb82d,	// (0x00022865) clock_digital_number_pane_g1

0xb82d,	// (0x00022865) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00026757) clock_digital_number_pane_g

0xb82d,	// (0x00022865) clock_digital_separator_pane_g1

0xb82d,	// (0x00022865) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00026757) clock_digital_separator_pane_g

0x92da,	// (0x00020312) aid_fill_nsta_ParamLimits

0x9409,	// (0x00020441) indicator_nsta_pane_ParamLimits

0xcd5c,	// (0x00023d94) popup_clock_analogue_window

0xcd5c,	// (0x00023d94) popup_clock_digital_window

0xcc1b,	// (0x00023c53) grid_indicator_nsta_pane_ParamLimits

0xe8b7,	// (0x000258ef) clock_nsta_pane_t2

0x0001,

0xfa9f,	// (0x00026ad7) clock_nsta_pane_t

0x5606,	// (0x0001c63e) aid_size_max_handle

0x8928,	// (0x0001f960) aid_size_min_handle

0xc921,	// (0x00023959) editor_scroll_pane

0xf321,	// (0x00026359) ex_editor_pane

0xbff9,	// (0x00023031) scroll_pane_cp13

0xbe79,	// (0x00022eb1) scroll_pane_cp14

0xc43c,	// (0x00023474) scroll_pane_cp36

0x8942,	// (0x0001f97a) list_single_graphic_hl_pane_cp2_ParamLimits

0x8942,	// (0x0001f97a) list_single_graphic_hl_pane_cp2

0x9ccc,	// (0x00020d04) list_single_graphic_hl_pane_ParamLimits

0x9ccc,	// (0x00020d04) list_single_graphic_hl_pane

0x4e3c,	// (0x0001be74) aid_size_min_hl_cp1

0xf329,	// (0x00026361) list_highlight_pane_cp34_ParamLimits

0xf329,	// (0x00026361) list_highlight_pane_cp34

0xf33a,	// (0x00026372) list_single_graphic_hl_pane_g1_ParamLimits

0xf33a,	// (0x00026372) list_single_graphic_hl_pane_g1

0x81bb,	// (0x0001f1f3) list_single_graphic_hl_pane_g2_ParamLimits

0x81bb,	// (0x0001f1f3) list_single_graphic_hl_pane_g2

0x81bb,	// (0x0001f1f3) list_single_graphic_hl_pane_g3_ParamLimits

0x81bb,	// (0x0001f1f3) list_single_graphic_hl_pane_g3

0x4e51,	// (0x0001be89) list_single_graphic_hl_pane_g4_ParamLimits

0x4e51,	// (0x0001be89) list_single_graphic_hl_pane_g4

0x4e5d,	// (0x0001be95) list_single_graphic_hl_pane_g5_ParamLimits

0x4e5d,	// (0x0001be95) list_single_graphic_hl_pane_g5

0x0004,

0xfbde,	// (0x00026c16) list_single_graphic_hl_pane_g_ParamLimits

0xfbde,	// (0x00026c16) list_single_graphic_hl_pane_g

0x4e71,	// (0x0001bea9) list_single_graphic_hl_pane_t1_ParamLimits

0x4e71,	// (0x0001bea9) list_single_graphic_hl_pane_t1

0xf347,	// (0x0002637f) aid_size_min_hl_cp2

0xf350,	// (0x00026388) list_highlight_pane_cp34_cp2_ParamLimits

0xf350,	// (0x00026388) list_highlight_pane_cp34_cp2

0xf33a,	// (0x00026372) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf33a,	// (0x00026372) list_single_graphic_hl_pane_g1_cp2

0xf35d,	// (0x00026395) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf35d,	// (0x00026395) list_single_graphic_hl_pane_g2_cp2

0xf369,	// (0x000263a1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf369,	// (0x000263a1) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x00023890) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x00023890) list_single_graphic_hl_pane_g4_cp2

0xf377,	// (0x000263af) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf377,	// (0x000263af) list_single_graphic_hl_pane_g5_cp2

0x8b02,	// (0x0001fb3a) control_pane_g4_ParamLimits

0x8b02,	// (0x0001fb3a) control_pane_g4

0xc031,	// (0x00023069) bg_popup_sub_pane_cp10_ParamLimits

0xec29,	// (0x00025c61) list_choice_list_pane_ParamLimits

0xec38,	// (0x00025c70) scroll_pane_cp23

0xb9c6,	// (0x000229fe) bg_popup_preview_window_pane_cp02_ParamLimits

0xf159,	// (0x00026191) list_preview_fixed_pane_ParamLimits

0xf16f,	// (0x000261a7) list_preview_fixed_pane_cp_ParamLimits

0xf16f,	// (0x000261a7) list_preview_fixed_pane_cp

0xf17b,	// (0x000261b3) popup_preview_fixed_window_g1_ParamLimits

0xf17b,	// (0x000261b3) popup_preview_fixed_window_g1

0xf187,	// (0x000261bf) popup_preview_fixed_window_g2_ParamLimits

0xf187,	// (0x000261bf) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x00026ba5) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x00026ba5) popup_preview_fixed_window_g

0x557a,	// (0x0001c5b2) aid_navi_side_left_pane_ParamLimits

0x558f,	// (0x0001c5c7) aid_navi_side_right_pane_ParamLimits

0x55a7,	// (0x0001c5df) navi_icon_pane_stacon_ParamLimits

0x55bb,	// (0x0001c5f3) navi_navi_pane_stacon_ParamLimits

0x55a7,	// (0x0001c5df) navi_text_pane_stacon_ParamLimits

0xb823,	// (0x0002285b) main_text_info_pane

0xf3a1,	// (0x000263d9) listscroll_text_info_pane

0xf3a9,	// (0x000263e1) list_text_info_pane_ParamLimits

0xf3a9,	// (0x000263e1) list_text_info_pane

0xf3b8,	// (0x000263f0) scroll_pane_cp24_ParamLimits

0xf3b8,	// (0x000263f0) scroll_pane_cp24

0xa0fc,	// (0x00021134) list_text_info_pane_t1_ParamLimits

0xa0fc,	// (0x00021134) list_text_info_pane_t1

0x8c6a,	// (0x0001fca2) popup_fast_swap2_window_ParamLimits

0x8c6a,	// (0x0001fca2) popup_fast_swap2_window

0xf3d6,	// (0x0002640e) aid_size_cell_fast2

0xb823,	// (0x0002285b) bg_popup_window_pane_cp17

0xd200,	// (0x00024238) heading_pane_cp2

0xbbac,	// (0x00022be4) listscroll_fast2_pane

0xf3e0,	// (0x00026418) grid_fast2_pane

0xf3ea,	// (0x00026422) listscroll_fast2_pane_g1

0xf3f2,	// (0x0002642a) listscroll_fast2_pane_g2

0x0001,

0xfbe9,	// (0x00026c21) listscroll_fast2_pane_g

0xbff9,	// (0x00023031) scroll_pane_cp26

0xf3fc,	// (0x00026434) cell_fast2_pane_ParamLimits

0xf3fc,	// (0x00026434) cell_fast2_pane

0xf411,	// (0x00026449) cell_fast2_pane_g1

0xf41a,	// (0x00026452) cell_fast2_pane_g2

0xf423,	// (0x0002645b) cell_fast2_pane_g3

0x0002,

0xfbee,	// (0x00026c26) cell_fast2_pane_g

0xbc40,	// (0x00022c78) grid_highlight_pane_cp9

0xbc55,	// (0x00022c8d) main_eswt_pane_ParamLimits

0xbc55,	// (0x00022c8d) main_eswt_pane

0xf3cd,	// (0x00026405) list_single_text_info_pane

0xf42b,	// (0x00026463) eswt_ctrl_button_pane

0xf42b,	// (0x00026463) eswt_ctrl_canvas_pane

0xf433,	// (0x0002646b) eswt_ctrl_combo_pane

0xf42b,	// (0x00026463) eswt_ctrl_default_pane

0xf42b,	// (0x00026463) eswt_ctrl_label_pane

0xf43b,	// (0x00026473) eswt_ctrl_wait_pane

0xf443,	// (0x0002647b) eswt_shell_pane

0xb823,	// (0x0002285b) listscroll_eswt_app_pane

0xf463,	// (0x0002649b) popup_eswt_tasktip_window_ParamLimits

0xf463,	// (0x0002649b) popup_eswt_tasktip_window

0xcf59,	// (0x00023f91) bg_popup_window_pane_cp18

0xf474,	// (0x000264ac) eswt_control_pane_g1_ParamLimits

0xf474,	// (0x000264ac) eswt_control_pane_g1

0xf481,	// (0x000264b9) eswt_control_pane_g2_ParamLimits

0xf481,	// (0x000264b9) eswt_control_pane_g2

0xf48e,	// (0x000264c6) eswt_control_pane_g3_ParamLimits

0xf48e,	// (0x000264c6) eswt_control_pane_g3

0xf49b,	// (0x000264d3) eswt_control_pane_g4_ParamLimits

0xf49b,	// (0x000264d3) eswt_control_pane_g4

0x0003,

0xfbf5,	// (0x00026c2d) eswt_control_pane_g_ParamLimits

0xfbf5,	// (0x00026c2d) eswt_control_pane_g

0xbeda,	// (0x00022f12) bg_button_pane_ParamLimits

0xbeda,	// (0x00022f12) bg_button_pane

0xbc55,	// (0x00022c8d) common_borders_pane_copy2_ParamLimits

0xbc55,	// (0x00022c8d) common_borders_pane_copy2

0xf4a8,	// (0x000264e0) control_button_pane_g1_ParamLimits

0xf4a8,	// (0x000264e0) control_button_pane_g1

0xf4b4,	// (0x000264ec) control_button_pane_g2_ParamLimits

0xf4b4,	// (0x000264ec) control_button_pane_g2

0xf4c0,	// (0x000264f8) control_button_pane_g3_ParamLimits

0xf4c0,	// (0x000264f8) control_button_pane_g3

0x0002,

0xfbfe,	// (0x00026c36) control_button_pane_g_ParamLimits

0xfbfe,	// (0x00026c36) control_button_pane_g

0xf4d4,	// (0x0002650c) control_button_pane_t1

0xf4e2,	// (0x0002651a) control_button_pane_t2

0x0001,

0xfc05,	// (0x00026c3d) control_button_pane_t

0xce69,	// (0x00023ea1) bg_button_pane_g1

0xce71,	// (0x00023ea9) bg_button_pane_g2

0xce79,	// (0x00023eb1) bg_button_pane_g3

0xce81,	// (0x00023eb9) bg_button_pane_g4

0xce89,	// (0x00023ec1) bg_button_pane_g5

0xce91,	// (0x00023ec9) bg_button_pane_g6

0xce99,	// (0x00023ed1) bg_button_pane_g7

0xcea1,	// (0x00023ed9) bg_button_pane_g8

0xcea9,	// (0x00023ee1) bg_button_pane_g9

0x0008,

0xf86b,	// (0x000268a3) bg_button_pane_g

0xebe4,	// (0x00025c1c) common_borders_pane_ParamLimits

0xebe4,	// (0x00025c1c) common_borders_pane

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy1_ParamLimits

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy1

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy1_ParamLimits

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy1

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy1_ParamLimits

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy1

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy1_ParamLimits

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy1

0xec1f,	// (0x00025c57) bg_eswt_ctrl_canvas_pane_g1

0xebe4,	// (0x00025c1c) common_borders_pane_cp2_ParamLimits

0xebe4,	// (0x00025c1c) common_borders_pane_cp2

0xebe4,	// (0x00025c1c) common_borders_pane_cp3_ParamLimits

0xebe4,	// (0x00025c1c) common_borders_pane_cp3

0xf4f0,	// (0x00026528) separator_horizontal_pane

0xf4f8,	// (0x00026530) separator_vertical_pane

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy2_ParamLimits

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy2

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy2_ParamLimits

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy2

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy2_ParamLimits

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy2

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy2_ParamLimits

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy2

0xb823,	// (0x0002285b) common_borders_pane_cp4

0xf501,	// (0x00026539) separator_horizontal_pane_g1

0xf50a,	// (0x00026542) separator_horizontal_pane_g2

0xf513,	// (0x0002654b) separator_horizontal_pane_g3

0x0002,

0xfc0a,	// (0x00026c42) separator_horizontal_pane_g

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy3_ParamLimits

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy3

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy3_ParamLimits

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy3

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy3_ParamLimits

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy3

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy3_ParamLimits

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy3

0xb823,	// (0x0002285b) common_borders_pane_cp5

0xf51c,	// (0x00026554) separator_vertical_pane_g1

0xf525,	// (0x0002655d) separator_vertical_pane_g2

0xf52e,	// (0x00026566) separator_vertical_pane_g3

0x0002,

0xfc11,	// (0x00026c49) separator_vertical_pane_g

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy4_ParamLimits

0xf474,	// (0x000264ac) eswt_control_pane_g1_copy4

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy4_ParamLimits

0xf481,	// (0x000264b9) eswt_control_pane_g2_copy4

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy4_ParamLimits

0xf48e,	// (0x000264c6) eswt_control_pane_g3_copy4

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy4_ParamLimits

0xf49b,	// (0x000264d3) eswt_control_pane_g4_copy4

0xa11a,	// (0x00021152) eswt_ctrl_combo_button_pane

0xa122,	// (0x0002115a) eswt_ctrl_input_pane

0xa12a,	// (0x00021162) popup_choice_list_window_cp70

0xa132,	// (0x0002116a) eswt_ctrl_input_pane_t1

0xb823,	// (0x0002285b) input_focus_pane_cp70

0xebe4,	// (0x00025c1c) bg_button_pane_cp70_ParamLimits

0xebe4,	// (0x00025c1c) bg_button_pane_cp70

0xa140,	// (0x00021178) eswt_ctrl_combo_button_pane_g1

0xf537,	// (0x0002656f) wait_bar_pane_cp70

0xcf59,	// (0x00023f91) bg_popup_window_pane_cp70_ParamLimits

0xcf59,	// (0x00023f91) bg_popup_window_pane_cp70

0xf53f,	// (0x00026577) popup_eswt_tasktip_window_t1

0xf555,	// (0x0002658d) wait_bar_pane_cp71_ParamLimits

0xf555,	// (0x0002658d) wait_bar_pane_cp71

0xf561,	// (0x00026599) grid_eswt_app_pane

0xc251,	// (0x00023289) scroll_pane_cp70

0xa148,	// (0x00021180) cell_eswt_app_pane_ParamLimits

0xa148,	// (0x00021180) cell_eswt_app_pane

0xa172,	// (0x000211aa) cell_eswt_app_pane_g1_ParamLimits

0xa172,	// (0x000211aa) cell_eswt_app_pane_g1

0xa1a1,	// (0x000211d9) cell_eswt_app_pane_g2_ParamLimits

0xa1a1,	// (0x000211d9) cell_eswt_app_pane_g2

0x0001,

0xfc18,	// (0x00026c50) cell_eswt_app_pane_g_ParamLimits

0xfc18,	// (0x00026c50) cell_eswt_app_pane_g

0xa1ca,	// (0x00021202) cell_eswt_app_pane_t1_ParamLimits

0xa1ca,	// (0x00021202) cell_eswt_app_pane_t1

0x009a,	// (0x000170d2) grid_highlight_pane_cp70_ParamLimits

0x009a,	// (0x000170d2) grid_highlight_pane_cp70

0xc7f4,	// (0x0002382c) set_content_pane_g1

0xcaf8,	// (0x00023b30) status_small_volume_pane

0x61e7,	// (0x0001d21f) status_small_volume_pane_g1

0x61ef,	// (0x0001d227) volume_small2_pane

0x61f8,	// (0x0001d230) volume_small2_pane_g1

0x6201,	// (0x0001d239) volume_small2_pane_g2

0x620a,	// (0x0001d242) volume_small2_pane_g3

0x6213,	// (0x0001d24b) volume_small2_pane_g4

0x621c,	// (0x0001d254) volume_small2_pane_g5

0x6225,	// (0x0001d25d) volume_small2_pane_g6

0x622e,	// (0x0001d266) volume_small2_pane_g7

0x6237,	// (0x0001d26f) volume_small2_pane_g8

0x6240,	// (0x0001d278) volume_small2_pane_g9

0x6249,	// (0x0001d281) volume_small2_pane_g10

0x0009,

0xfc1d,	// (0x00026c55) volume_small2_pane_g

0xefb3,	// (0x00025feb) fep_vkb_top_text_pane_g1_ParamLimits

0xa0a4,	// (0x000210dc) fep_vkb_top_text_pane_t1_ParamLimits

0xf193,	// (0x000261cb) popup_preview_fixed_window_g3_ParamLimits

0xf193,	// (0x000261cb) popup_preview_fixed_window_g3

0x926d,	// (0x000202a5) popup_toolbar_trans_pane

0x9b44,	// (0x00020b7c) aid_height_set_list_ParamLimits

0xd9d2,	// (0x00024a0a) aid_size_parent_ParamLimits

0xc031,	// (0x00023069) list_highlight_pane_cp2_ParamLimits

0xc7f4,	// (0x0002382c) set_content_pane_g1_ParamLimits

0x9cdf,	// (0x00020d17) list_single_image_pane_ParamLimits

0x9cdf,	// (0x00020d17) list_single_image_pane

0xa1fc,	// (0x00021234) aid_size_cell_image_ParamLimits

0xa1fc,	// (0x00021234) aid_size_cell_image

0xa209,	// (0x00021241) grid_single_image_pane_ParamLimits

0xa209,	// (0x00021241) grid_single_image_pane

0xbef4,	// (0x00022f2c) list_single_image_pane_g1_ParamLimits

0xbef4,	// (0x00022f2c) list_single_image_pane_g1

0xbf00,	// (0x00022f38) list_single_image_pane_g2_ParamLimits

0xbf00,	// (0x00022f38) list_single_image_pane_g2

0x0001,

0xfc32,	// (0x00026c6a) list_single_image_pane_g_ParamLimits

0xfc32,	// (0x00026c6a) list_single_image_pane_g

0x00bf,	// (0x000170f7) list_single_image_pane_t1_ParamLimits

0x00bf,	// (0x000170f7) list_single_image_pane_t1

0xa215,	// (0x0002124d) cell_image_list_pane_ParamLimits

0xa215,	// (0x0002124d) cell_image_list_pane

0xa229,	// (0x00021261) cell_image_list_pane_g1

0xa232,	// (0x0002126a) cell_image_list_pane_g2

0x0001,

0xfc37,	// (0x00026c6f) cell_image_list_pane_g

0x00fb,	// (0x00017133) aid_size_cell_tb_trans_pane

0xbeda,	// (0x00022f12) bg_tb_trans_pane

0x010d,	// (0x00017145) grid_tb_trans_pane

0xce69,	// (0x00023ea1) bg_tb_trans_pane_g1

0xce71,	// (0x00023ea9) bg_tb_trans_pane_g2

0xce79,	// (0x00023eb1) bg_tb_trans_pane_g3

0xce81,	// (0x00023eb9) bg_tb_trans_pane_g4

0xce89,	// (0x00023ec1) bg_tb_trans_pane_g5

0xcea1,	// (0x00023ed9) bg_tb_trans_pane_g6

0xcea9,	// (0x00023ee1) bg_tb_trans_pane_g7

0xce91,	// (0x00023ec9) bg_tb_trans_pane_g8

0xce99,	// (0x00023ed1) bg_tb_trans_pane_g9

0x0008,

0xfc3c,	// (0x00026c74) bg_tb_trans_pane_g

0x0121,	// (0x00017159) cell_toolbar_trans_pane_ParamLimits

0x0121,	// (0x00017159) cell_toolbar_trans_pane

0xec1f,	// (0x00025c57) cell_toolbar_trans_pane_g1

0x9f00,	// (0x00020f38) list_form2_midp_pane_t1

0x9f0e,	// (0x00020f46) list_form2_midp_pane_t2

0x0001,

0xfae5,	// (0x00026b1d) list_form2_midp_pane_t

0xe97c,	// (0x000259b4) scroll_pane_cp51_ParamLimits

0xeaf2,	// (0x00025b2a) form2_midp_wait_pane_g1

0xeafb,	// (0x00025b33) form2_midp_wait_pane_g2

0xeb04,	// (0x00025b3c) form2_midp_wait_pane_g3

0x0002,

0xfafa,	// (0x00026b32) form2_midp_wait_pane_g

0xb893,	// (0x000228cb) list_highlight_pane_cp21_ParamLimits

0xeb24,	// (0x00025b5c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb33,	// (0x00025b6b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4963,	// (0x0001b99b) list_single_2graphic_im_pane_ParamLimits

0x4963,	// (0x0001b99b) list_single_2graphic_im_pane

0xa23b,	// (0x00021273) list_single_2graphic_im_pane_g1_ParamLimits

0xa23b,	// (0x00021273) list_single_2graphic_im_pane_g1

0xa24c,	// (0x00021284) list_single_2graphic_im_pane_g2_ParamLimits

0xa24c,	// (0x00021284) list_single_2graphic_im_pane_g2

0xa258,	// (0x00021290) list_single_2graphic_im_pane_g3_ParamLimits

0xa258,	// (0x00021290) list_single_2graphic_im_pane_g3

0x0003,

0xfc4f,	// (0x00026c87) list_single_2graphic_im_pane_g_ParamLimits

0xfc4f,	// (0x00026c87) list_single_2graphic_im_pane_g

0xa26c,	// (0x000212a4) list_single_2graphic_im_pane_t1_ParamLimits

0xa26c,	// (0x000212a4) list_single_2graphic_im_pane_t1

0xf19f,	// (0x000261d7) list_single_graphic_2heading_pane_fp_ParamLimits

0xf19f,	// (0x000261d7) list_single_graphic_2heading_pane_fp

0x4cae,	// (0x0001bce6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4cae,	// (0x0001bce6) list_single_graphic_2heading_pane_fp_g1

0xf1b6,	// (0x000261ee) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x000261ee) list_single_graphic_2heading_pane_fp_g2

0x42af,	// (0x0001b2e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x42af,	// (0x0001b2e7) list_single_graphic_2heading_pane_fp_g3

0x4c83,	// (0x0001bcbb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4c83,	// (0x0001bcbb) list_single_graphic_2heading_pane_fp_g4

0xf1c2,	// (0x000261fa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x000261fa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x00026bb5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x00026bb5) list_single_graphic_2heading_pane_fp_g

0x4e87,	// (0x0001bebf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4e87,	// (0x0001bebf) list_single_graphic_2heading_pane_fp_t1

0x4ce6,	// (0x0001bd1e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ce6,	// (0x0001bd1e) list_single_graphic_2heading_pane_fp_t2

0x4e9d,	// (0x0001bed5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4e9d,	// (0x0001bed5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc58,	// (0x00026c90) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc58,	// (0x00026c90) list_single_graphic_2heading_pane_fp_t

0xecbf,	// (0x00025cf7) fep_hwr_write_pane_g5_ParamLimits

0xecbf,	// (0x00025cf7) fep_hwr_write_pane_g5

0xeccb,	// (0x00025d03) fep_hwr_write_pane_g6_ParamLimits

0xeccb,	// (0x00025d03) fep_hwr_write_pane_g6

0xf443,	// (0x0002647b) eswt_shell_pane_ParamLimits

0xcf59,	// (0x00023f91) bg_popup_window_pane_cp18_ParamLimits

0xdf5d,	// (0x00024f95) heading_pane_cp70

0xf53f,	// (0x00026577) popup_eswt_tasktip_window_t1_ParamLimits

0x932e,	// (0x00020366) aid_touch_tab_arrow_left

0x9344,	// (0x0002037c) aid_touch_tab_arrow_right

0x84b1,	// (0x0001f4e9) title_pane_g3_ParamLimits

0x84b1,	// (0x0001f4e9) title_pane_g3

0xbe99,	// (0x00022ed1) set_value_pane_g1

0x926d,	// (0x000202a5) popup_toolbar_trans_pane_ParamLimits

0x00fb,	// (0x00017133) aid_size_cell_tb_trans_pane_ParamLimits

0xbeda,	// (0x00022f12) bg_tb_trans_pane_ParamLimits

0x010d,	// (0x00017145) grid_tb_trans_pane_ParamLimits

0xb9c6,	// (0x000229fe) cont_note_pane_ParamLimits

0xb9c6,	// (0x000229fe) cont_note_pane

0xbc55,	// (0x00022c8d) cont_snote2_single_text_pane_ParamLimits

0xbc55,	// (0x00022c8d) cont_snote2_single_text_pane

0xbc55,	// (0x00022c8d) cont_snote2_single_graphic_pane_ParamLimits

0xbc55,	// (0x00022c8d) cont_snote2_single_graphic_pane

0xd416,	// (0x0002444e) cont_note_wait_pane_ParamLimits

0xd416,	// (0x0002444e) cont_note_wait_pane

0xd416,	// (0x0002444e) cont_note_image_pane_ParamLimits

0xd416,	// (0x0002444e) cont_note_image_pane

0x01e1,	// (0x00017219) popup_note2_window_g1_ParamLimits

0x01e1,	// (0x00017219) popup_note2_window_g1

0x0212,	// (0x0001724a) popup_note2_window_t1_ParamLimits

0x0212,	// (0x0001724a) popup_note2_window_t1

0x0257,	// (0x0001728f) popup_note2_window_t2_ParamLimits

0x0257,	// (0x0001728f) popup_note2_window_t2

0x029c,	// (0x000172d4) popup_note2_window_t3_ParamLimits

0x029c,	// (0x000172d4) popup_note2_window_t3

0x02e1,	// (0x00017319) popup_note2_window_t4_ParamLimits

0x02e1,	// (0x00017319) popup_note2_window_t4

0xba3e,	// (0x00022a76) popup_note2_window_t5_ParamLimits

0xba3e,	// (0x00022a76) popup_note2_window_t5

0x0004,

0xfc64,	// (0x00026c9c) popup_note2_window_t_ParamLimits

0xfc64,	// (0x00026c9c) popup_note2_window_t

0x0310,	// (0x00017348) popup_note2_image_window_g1_ParamLimits

0x0310,	// (0x00017348) popup_note2_image_window_g1

0x031c,	// (0x00017354) popup_note2_image_window_g2_ParamLimits

0x031c,	// (0x00017354) popup_note2_image_window_g2

0x0001,

0xfc6f,	// (0x00026ca7) popup_note2_image_window_g_ParamLimits

0xfc6f,	// (0x00026ca7) popup_note2_image_window_g

0x032e,	// (0x00017366) popup_note2_image_window_t1_ParamLimits

0x032e,	// (0x00017366) popup_note2_image_window_t1

0x0346,	// (0x0001737e) popup_note2_image_window_t2_ParamLimits

0x0346,	// (0x0001737e) popup_note2_image_window_t2

0x035e,	// (0x00017396) popup_note2_image_window_t3_ParamLimits

0x035e,	// (0x00017396) popup_note2_image_window_t3

0x0002,

0xfc74,	// (0x00026cac) popup_note2_image_window_t_ParamLimits

0xfc74,	// (0x00026cac) popup_note2_image_window_t

0xd424,	// (0x0002445c) popup_note2_wait_window_g1_ParamLimits

0xd424,	// (0x0002445c) popup_note2_wait_window_g1

0xd430,	// (0x00024468) popup_note2_wait_window_g2_ParamLimits

0xd430,	// (0x00024468) popup_note2_wait_window_g2

0xd43c,	// (0x00024474) popup_note2_wait_window_g3_ParamLimits

0xd43c,	// (0x00024474) popup_note2_wait_window_g3

0x0002,

0xf84d,	// (0x00026885) popup_note2_wait_window_g_ParamLimits

0xf84d,	// (0x00026885) popup_note2_wait_window_g

0x037a,	// (0x000173b2) popup_note2_wait_window_t1_ParamLimits

0x037a,	// (0x000173b2) popup_note2_wait_window_t1

0x0398,	// (0x000173d0) popup_note2_wait_window_t2_ParamLimits

0x0398,	// (0x000173d0) popup_note2_wait_window_t2

0x03b6,	// (0x000173ee) popup_note2_wait_window_t3_ParamLimits

0x03b6,	// (0x000173ee) popup_note2_wait_window_t3

0x03c8,	// (0x00017400) popup_note2_wait_window_t4_ParamLimits

0x03c8,	// (0x00017400) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00026cb3) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00026cb3) popup_note2_wait_window_t

0x03da,	// (0x00017412) wait_bar2_pane_ParamLimits

0x03da,	// (0x00017412) wait_bar2_pane

0x03f2,	// (0x0001742a) popup_snote2_single_text_window_g1_ParamLimits

0x03f2,	// (0x0001742a) popup_snote2_single_text_window_g1

0x041a,	// (0x00017452) popup_snote2_single_text_window_t1_ParamLimits

0x041a,	// (0x00017452) popup_snote2_single_text_window_t1

0x0466,	// (0x0001749e) popup_snote2_single_text_window_t2_ParamLimits

0x0466,	// (0x0001749e) popup_snote2_single_text_window_t2

0x04b2,	// (0x000174ea) popup_snote2_single_text_window_t3_ParamLimits

0x04b2,	// (0x000174ea) popup_snote2_single_text_window_t3

0x04f3,	// (0x0001752b) popup_snote2_single_text_window_t4_ParamLimits

0x04f3,	// (0x0001752b) popup_snote2_single_text_window_t4

0x0529,	// (0x00017561) popup_snote2_single_text_window_t5_ParamLimits

0x0529,	// (0x00017561) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x00026cbc) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x00026cbc) popup_snote2_single_text_window_t

0x0554,	// (0x0001758c) popup_snote2_single_graphic_window_g1_ParamLimits

0x0554,	// (0x0001758c) popup_snote2_single_graphic_window_g1

0x057c,	// (0x000175b4) popup_snote2_single_graphic_window_g2_ParamLimits

0x057c,	// (0x000175b4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00026cc7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00026cc7) popup_snote2_single_graphic_window_g

0x05a4,	// (0x000175dc) popup_snote2_single_graphic_window_t1_ParamLimits

0x05a4,	// (0x000175dc) popup_snote2_single_graphic_window_t1

0x05f0,	// (0x00017628) popup_snote2_single_graphic_window_t2_ParamLimits

0x05f0,	// (0x00017628) popup_snote2_single_graphic_window_t2

0x04b2,	// (0x000174ea) popup_snote2_single_graphic_window_t3_ParamLimits

0x04b2,	// (0x000174ea) popup_snote2_single_graphic_window_t3

0x04f3,	// (0x0001752b) popup_snote2_single_graphic_window_t4_ParamLimits

0x04f3,	// (0x0001752b) popup_snote2_single_graphic_window_t4

0x0529,	// (0x00017561) popup_snote2_single_graphic_window_t5_ParamLimits

0x0529,	// (0x00017561) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x00026ccc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x00026ccc) popup_snote2_single_graphic_window_t

0xe92c,	// (0x00025964) clock_nsta_pane_cp2_t1

0xe92c,	// (0x00025964) clock_nsta_pane_cp2_t2

0x0001,

0xfabb,	// (0x00026af3) clock_nsta_pane_cp2_t

0x45e2,	// (0x0001b61a) form_field_data_wide_pane_g1_ParamLimits

0xbef4,	// (0x00022f2c) form_field_data_wide_pane_g2_ParamLimits

0xbef4,	// (0x00022f2c) form_field_data_wide_pane_g2

0xbf00,	// (0x00022f38) form_field_data_wide_pane_g3_ParamLimits

0xbf00,	// (0x00022f38) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x000266cf) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x000266cf) form_field_data_wide_pane_g

0x9e16,	// (0x00020e4e) grid_touch_3_pane_ParamLimits

0x9e16,	// (0x00020e4e) grid_touch_3_pane

0xa29d,	// (0x000212d5) cell_touch_3_pane_ParamLimits

0xa29d,	// (0x000212d5) cell_touch_3_pane

0xec1f,	// (0x00025c57) cell_touch_3_pane_g1

0xec1f,	// (0x00025c57) cell_touch_3_pane_g2

0x0001,

0xfb40,	// (0x00026b78) cell_touch_3_pane_g

0xba70,	// (0x00022aa8) cont_query_data_pane

0xba78,	// (0x00022ab0) cont_query_data_pane_cp1

0x066b,	// (0x000176a3) button_value_adjust_pane_cp7

0x0673,	// (0x000176ab) query_popup_pane_cp3

0xc46e,	// (0x000234a6) bg_popup_sub_pane_cp22_ParamLimits

0x56bc,	// (0x0001c6f4) navi_navi_volume_pane_cp2

0x56d7,	// (0x0001c70f) popup_side_volume_key_window_g2

0x56e6,	// (0x0001c71e) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00026761) popup_side_volume_key_window_g

0x5703,	// (0x0001c73b) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00026768) popup_side_volume_key_window_t

0xc6be,	// (0x000236f6) popup_side_volume_key_window_ParamLimits

0x7d32,	// (0x0001ed6a) list_double_graphic_pane_g4_ParamLimits

0x7d32,	// (0x0001ed6a) list_double_graphic_pane_g4

0x81a6,	// (0x0001f1de) list_single_2heading_msg_pane_ParamLimits

0x81a6,	// (0x0001f1de) list_single_2heading_msg_pane

0x81c7,	// (0x0001f1ff) list_single_2heading_msg_pane_g1_ParamLimits

0x81c7,	// (0x0001f1ff) list_single_2heading_msg_pane_g1

0x81d3,	// (0x0001f20b) list_single_2heading_msg_pane_g2_ParamLimits

0x81d3,	// (0x0001f20b) list_single_2heading_msg_pane_g2

0x81e6,	// (0x0001f21e) list_single_2heading_msg_pane_g3_ParamLimits

0x81e6,	// (0x0001f21e) list_single_2heading_msg_pane_g3

0x4ec9,	// (0x0001bf01) list_single_2heading_msg_pane_g4_ParamLimits

0x4ec9,	// (0x0001bf01) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00026cd7) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00026cd7) list_single_2heading_msg_pane_g

0x4ee1,	// (0x0001bf19) list_single_2heading_msg_pane_t1_ParamLimits

0x4ee1,	// (0x0001bf19) list_single_2heading_msg_pane_t1

0x81f2,	// (0x0001f22a) list_single_2heading_msg_pane_t2_ParamLimits

0x81f2,	// (0x0001f22a) list_single_2heading_msg_pane_t2

0x825d,	// (0x0001f295) list_single_2heading_msg_pane_t3_ParamLimits

0x825d,	// (0x0001f295) list_single_2heading_msg_pane_t3

0x4f76,	// (0x0001bfae) list_single_2heading_msg_pane_t4_ParamLimits

0x4f76,	// (0x0001bfae) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00026ce0) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00026ce0) list_single_2heading_msg_pane_t

0xb841,	// (0x00022879) title_pane_g4_ParamLimits

0xb841,	// (0x00022879) title_pane_g4

0x54ca,	// (0x0001c502) title_pane_stacon_g3_ParamLimits

0x54ca,	// (0x0001c502) title_pane_stacon_g3

0x0178,	// (0x000171b0) list_single_2graphic_im_pane_g4_ParamLimits

0x0178,	// (0x000171b0) list_single_2graphic_im_pane_g4

0xdd81,	// (0x00024db9) popup_side_volume_key_window_cp

0xe24d,	// (0x00025285) main_idle_act2_pane_t1

0x5a77,	// (0x0001caaf) toolbar_button_pane_g10

0x87ce,	// (0x0001f806) popup_toolbar_window_cp1

0xe91d,	// (0x00025955) clock_nsta_pane_cp_t1

0xe91d,	// (0x00025955) clock_nsta_pane_cp_t2

0x0001,

0xfab6,	// (0x00026aee) clock_nsta_pane_cp_t

0x56bc,	// (0x0001c6f4) navi_navi_volume_pane_cp2_ParamLimits

0x56cb,	// (0x0001c703) popup_side_volume_key_window_g1_ParamLimits

0x56d7,	// (0x0001c70f) popup_side_volume_key_window_g2_ParamLimits

0x56e6,	// (0x0001c71e) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00026761) popup_side_volume_key_window_g_ParamLimits

0x5f12,	// (0x0001cf4a) fep_hwr_aid_pane

0x2928,	// (0x00019960) bg_fep_hwr_top_pane_g4_ParamLimits

0xec8f,	// (0x00025cc7) fep_hwr_top_pane_g1_ParamLimits

0xeca1,	// (0x00025cd9) fep_hwr_top_pane_g2_ParamLimits

0x5fcb,	// (0x0001d003) fep_hwr_top_pane_g3_ParamLimits

0xfb0b,	// (0x00026b43) fep_hwr_top_pane_g_ParamLimits

0x5fe0,	// (0x0001d018) fep_hwr_top_text_pane_ParamLimits

0xdb76,	// (0x00024bae) aid_touch_tab_arrow_arrow_2

0xdb7f,	// (0x00024bb7) aid_touch_tab_arrow_left_2

0x5f26,	// (0x0001cf5e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f5d,	// (0x0001cf95) fep_hwr_prediction_pane

0xedf6,	// (0x00025e2e) fep_vkb_prediction_pane

0xa084,	// (0x000210bc) fep_vkb_side_pane_g3_ParamLimits

0xa084,	// (0x000210bc) fep_vkb_side_pane_g3

0xeea6,	// (0x00025ede) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf216,	// (0x0002624e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf223,	// (0x0002625b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x00026bed) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x078c,	// (0x000177c4) fep_hwr_prediction_pane_g1

0x6252,	// (0x0001d28a) fep_hwr_prediction_pane_g2

0x625a,	// (0x0001d292) fep_hwr_prediction_pane_g3

0x6262,	// (0x0001d29a) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00026ce9) fep_hwr_prediction_pane_g

0x078c,	// (0x000177c4) fep_vkb_prediction_pane_g1

0x0796,	// (0x000177ce) fep_vkb_prediction_pane_g2

0x079e,	// (0x000177d6) fep_vkb_prediction_pane_g3

0x07a6,	// (0x000177de) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00026cf2) fep_vkb_prediction_pane_g

0x5d4f,	// (0x0001cd87) slider_set_pane_g3

0x5d63,	// (0x0001cd9b) slider_set_pane_g4

0x5d7b,	// (0x0001cdb3) slider_set_pane_g5

0x5d4f,	// (0x0001cd87) slider_set_pane_g6

0x5d91,	// (0x0001cdc9) slider_set_pane_g7

0xdfe2,	// (0x0002501a) slider_form_pane_g3

0xdfeb,	// (0x00025023) slider_form_pane_g4

0xdff3,	// (0x0002502b) slider_form_pane_g5

0xdfe2,	// (0x0002501a) slider_form_pane_g6

0x9c8b,	// (0x00020cc3) slider_form_pane_g7

0xe4eb,	// (0x00025523) slider_set_pane_vc_g3

0xe4f4,	// (0x0002552c) slider_set_pane_vc_g4

0xe4fd,	// (0x00025535) slider_set_pane_vc_g5

0xe4eb,	// (0x00025523) slider_set_pane_vc_g6

0xe506,	// (0x0002553e) slider_set_pane_vc_g7

0xe4eb,	// (0x00025523) slider_form_pane_vc_g1

0xe4f4,	// (0x0002552c) slider_form_pane_vc_g2

0xe4fd,	// (0x00025535) slider_form_pane_vc_g3

0xe4eb,	// (0x00025523) slider_form_pane_vc_g4

0xe695,	// (0x000256cd) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x00026ac7) slider_form_pane_vc_g

0xb823,	// (0x0002285b) main_idle_act3_pane

0x07ae,	// (0x000177e6) ai3_links_pane

0xa2e6,	// (0x0002131e) popup_ai3_data_window_ParamLimits

0xa2e6,	// (0x0002131e) popup_ai3_data_window

0xb823,	// (0x0002285b) grid_ai3_links_pane

0xa2fe,	// (0x00021336) cell_ai3_links_pane_ParamLimits

0xa2fe,	// (0x00021336) cell_ai3_links_pane

0x07e7,	// (0x0001781f) bg_popup_sub_pane_cp11

0x07f4,	// (0x0001782c) cell_ai3_links_pane_g1

0xb823,	// (0x0002285b) bg_popup_sub_pane_cp12

0x0819,	// (0x00017851) heading_ai3_data_pane

0x0821,	// (0x00017859) list_ai3_gene_pane

0x082d,	// (0x00017865) popup_ai3_data_window_g1

0x0835,	// (0x0001786d) heading_ai3_data_pane_g1

0x083d,	// (0x00017875) heading_ai3_data_pane_t1

0x084b,	// (0x00017883) list_double_ai3_gene_pane_ParamLimits

0x084b,	// (0x00017883) list_double_ai3_gene_pane

0x0858,	// (0x00017890) list_single_ai3_gene_pane_ParamLimits

0x0858,	// (0x00017890) list_single_ai3_gene_pane

0xebe4,	// (0x00025c1c) list_highlight_pane_cp7_ParamLimits

0xebe4,	// (0x00025c1c) list_highlight_pane_cp7

0x0865,	// (0x0001789d) list_single_a13_gene_pane_t1_ParamLimits

0x0865,	// (0x0001789d) list_single_a13_gene_pane_t1

0x087c,	// (0x000178b4) list_single_ai3_gene_pane_g1

0x0885,	// (0x000178bd) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x00026cfb) list_single_ai3_gene_pane_g

0x088d,	// (0x000178c5) list_double_ai3_gene_pane_g1_ParamLimits

0x088d,	// (0x000178c5) list_double_ai3_gene_pane_g1

0x0899,	// (0x000178d1) list_double_ai3_gene_pane_t1_ParamLimits

0x0899,	// (0x000178d1) list_double_ai3_gene_pane_t1

0x08b5,	// (0x000178ed) list_double_ai3_gene_pane_t2_ParamLimits

0x08b5,	// (0x000178ed) list_double_ai3_gene_pane_t2

0x08ca,	// (0x00017902) list_double_ai3_gene_pane_t3_ParamLimits

0x08ca,	// (0x00017902) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00026d00) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00026d00) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4eb3,	// (0x0001beeb) aid_size_min_col_2

0xa2d0,	// (0x00021308) aid_size_min_msg_ParamLimits

0xa2d0,	// (0x00021308) aid_size_min_msg

0xa098,	// (0x000210d0) fep_vkb_top_text_pane_g2_ParamLimits

0xa098,	// (0x000210d0) fep_vkb_top_text_pane_g2

0x0001,

0xfb3b,	// (0x00026b73) fep_vkb_top_text_pane_g_ParamLimits

0xfb3b,	// (0x00026b73) fep_vkb_top_text_pane_g

0xb823,	// (0x0002285b) main_hc_apps_shell_pane

0x08e7,	// (0x0001791f) grid_hc_apps_pane_ParamLimits

0x08e7,	// (0x0001791f) grid_hc_apps_pane

0x08f6,	// (0x0001792e) list_hc_apps_pane

0x08fe,	// (0x00017936) scroll_pane_cp37_ParamLimits

0x08fe,	// (0x00017936) scroll_pane_cp37

0xa318,	// (0x00021350) cell_hc_apps_pane_ParamLimits

0xa318,	// (0x00021350) cell_hc_apps_pane

0xa3d8,	// (0x00021410) cell_hc_apps_pane_g1_ParamLimits

0xa3d8,	// (0x00021410) cell_hc_apps_pane_g1

0x09eb,	// (0x00017a23) cell_hc_apps_pane_g2_ParamLimits

0x09eb,	// (0x00017a23) cell_hc_apps_pane_g2

0x0a07,	// (0x00017a3f) cell_hc_apps_pane_g3_ParamLimits

0x0a07,	// (0x00017a3f) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x00026d07) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x00026d07) cell_hc_apps_pane_g

0xa405,	// (0x0002143d) cell_hc_apps_pane_t1_ParamLimits

0xa405,	// (0x0002143d) cell_hc_apps_pane_t1

0xb9c6,	// (0x000229fe) grid_highlight_pane_cp10_ParamLimits

0xb9c6,	// (0x000229fe) grid_highlight_pane_cp10

0xa443,	// (0x0002147b) list_single_hc_apps_pane_ParamLimits

0xa443,	// (0x0002147b) list_single_hc_apps_pane

0x0adc,	// (0x00017b14) list_single_hc_apps_pane_g1

0x4f9b,	// (0x0001bfd3) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00026d0e) list_single_hc_apps_pane_g

0x4fb4,	// (0x0001bfec) list_single_hc_apps_pane_g2_copy1

0x4fd0,	// (0x0001c008) list_single_hc_apps_pane_t1

0xb893,	// (0x000228cb) bg_set_opt_pane_cp_ParamLimits

0x53f5,	// (0x0001c42d) setting_slider_pane_t1_ParamLimits

0x540e,	// (0x0001c446) setting_slider_pane_t2_ParamLimits

0x5427,	// (0x0001c45f) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000265b2) setting_slider_pane_t_ParamLimits

0x543e,	// (0x0001c476) slider_set_pane_ParamLimits

0x5961,	// (0x0001c999) control_pane_g5_ParamLimits

0x5961,	// (0x0001c999) control_pane_g5

0xdfa4,	// (0x00024fdc) slider_set_pane_g1_ParamLimits

0x5d43,	// (0x0001cd7b) slider_set_pane_g2_ParamLimits

0x5d4f,	// (0x0001cd87) slider_set_pane_g3_ParamLimits

0x5d63,	// (0x0001cd9b) slider_set_pane_g4_ParamLimits

0x5d7b,	// (0x0001cdb3) slider_set_pane_g5_ParamLimits

0x5d4f,	// (0x0001cd87) slider_set_pane_g6_ParamLimits

0x5d91,	// (0x0001cdc9) slider_set_pane_g7_ParamLimits

0xf969,	// (0x000269a1) slider_set_pane_g_ParamLimits

0xc79f,	// (0x000237d7) navi_icon_text_pane_ParamLimits

0x92fa,	// (0x00020332) aid_fill_nsta_2_ParamLimits

0x932e,	// (0x00020366) aid_touch_tab_arrow_left_ParamLimits

0x9344,	// (0x0002037c) aid_touch_tab_arrow_right_ParamLimits

0x93df,	// (0x00020417) clock_nsta_pane_ParamLimits

0x9a33,	// (0x00020a6b) navi_icon_pane_g1_ParamLimits

0x9a3f,	// (0x00020a77) navi_text_pane_t1_ParamLimits

0x9ee2,	// (0x00020f1a) navi_icon_text_pane_g1_ParamLimits

0x9eee,	// (0x00020f26) navi_icon_text_pane_t1_ParamLimits

0x0adc,	// (0x00017b14) list_single_hc_apps_pane_g1_ParamLimits

0x4f9b,	// (0x0001bfd3) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00026d0e) list_single_hc_apps_pane_g_ParamLimits

0x4fb4,	// (0x0001bfec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x4fd0,	// (0x0001c008) list_single_hc_apps_pane_t1_ParamLimits

0x841d,	// (0x0001f455) popup_toolbar2_fixed_window_ParamLimits

0x841d,	// (0x0001f455) popup_toolbar2_fixed_window

0x9263,	// (0x0002029b) popup_toolbar2_float_window

0xb823,	// (0x0002285b) bg_popup_sub_pane_cp27

0x0b58,	// (0x00017b90) grid_toolbar2_float_pane

0xb823,	// (0x0002285b) bg_popup_sub_pane_cp26

0x0b58,	// (0x00017b90) grid_toolbar2_fixed_pane

0xa476,	// (0x000214ae) cell_toolbar2_fixed_pane_ParamLimits

0xa476,	// (0x000214ae) cell_toolbar2_fixed_pane

0xa491,	// (0x000214c9) cell_toolbar2_fixed_pane_g1

0x0b7a,	// (0x00017bb2) toolbar2_fixed_button_pane

0xce69,	// (0x00023ea1) toolbar2_fixed_button_pane_g1

0xce71,	// (0x00023ea9) toolbar2_fixed_button_pane_g2

0xce79,	// (0x00023eb1) toolbar2_fixed_button_pane_g3

0xce81,	// (0x00023eb9) toolbar2_fixed_button_pane_g4

0xce89,	// (0x00023ec1) toolbar2_fixed_button_pane_g5

0xce91,	// (0x00023ec9) toolbar2_fixed_button_pane_g6

0xce99,	// (0x00023ed1) toolbar2_fixed_button_pane_g7

0xcea1,	// (0x00023ed9) toolbar2_fixed_button_pane_g8

0xcea9,	// (0x00023ee1) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x000268a3) toolbar2_fixed_button_pane_g

0x0b82,	// (0x00017bba) cell_toolbar2_float_pane_ParamLimits

0x0b82,	// (0x00017bba) cell_toolbar2_float_pane

0x0b93,	// (0x00017bcb) cell_toolbar2_float_pane_g1

0x0b7a,	// (0x00017bb2) toolbar2_fixed_button_pane_cp

0xa04b,	// (0x00021083) fep_vkb_accented_list_pane_ParamLimits

0xa04b,	// (0x00021083) fep_vkb_accented_list_pane

0x612e,	// (0x0001d166) bg_popup_fep_shadow_pane_g9

0xc921,	// (0x00023959) bg_popup_fep_shadow_pane_cp3

0xbfe0,	// (0x00023018) list_accented_list_pane

0x0b9c,	// (0x00017bd4) list_single_accented_list_pane_ParamLimits

0x0b9c,	// (0x00017bd4) list_single_accented_list_pane

0xc921,	// (0x00023959) list_highlight_pane_cp10

0x0bad,	// (0x00017be5) list_single_accented_list_pane_t1

0x918d,	// (0x000201c5) popup_slider_window_ParamLimits

0x918d,	// (0x000201c5) popup_slider_window

0x067b,	// (0x000176b3) aid_indentation_list_msg

0xa58a,	// (0x000215c2) bg_popup_window_pane_cp19

0x0cd1,	// (0x00017d09) popup_slider_window_g1

0x0ced,	// (0x00017d25) popup_slider_window_g2

0x0d09,	// (0x00017d41) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00026d13) popup_slider_window_g

0x0d65,	// (0x00017d9d) popup_slider_window_t1

0x0dd9,	// (0x00017e11) small_volume_slider_vertical_pane

0xec1f,	// (0x00025c57) small_volume_slider_vertical_pane_g1

0xec1f,	// (0x00025c57) small_volume_slider_vertical_pane_g2

0x0df5,	// (0x00017e2d) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x00026d25) small_volume_slider_vertical_pane_g

0x838b,	// (0x0001f3c3) area_side_right_pane_ParamLimits

0x838b,	// (0x0001f3c3) area_side_right_pane

0xa642,	// (0x0002167a) aid_size_side_button_ParamLimits

0xa642,	// (0x0002167a) aid_size_side_button

0xa65b,	// (0x00021693) grid_sctrl_middle_pane_ParamLimits

0xa65b,	// (0x00021693) grid_sctrl_middle_pane

0x629e,	// (0x0001d2d6) sctrl_sk_bottom_pane

0x62af,	// (0x0001d2e7) sctrl_sk_top_pane

0x62c1,	// (0x0001d2f9) aid_touch_sctrl_top

0xb9c6,	// (0x000229fe) bg_sctrl_sk_pane_ParamLimits

0xb9c6,	// (0x000229fe) bg_sctrl_sk_pane

0x62ce,	// (0x0001d306) sctrl_sk_top_pane_g1

0x62db,	// (0x0001d313) sctrl_sk_top_pane_t1

0x62c1,	// (0x0001d2f9) aid_touch_sctrl_bottom

0xb9c6,	// (0x000229fe) bg_sctrl_sk_pane_cp_ParamLimits

0xb9c6,	// (0x000229fe) bg_sctrl_sk_pane_cp

0x62f6,	// (0x0001d32e) sctrl_sk_bottom_pane_g1

0x62db,	// (0x0001d313) sctrl_sk_bottom_pane_t1

0xa675,	// (0x000216ad) cell_sctrl_middle_pane_ParamLimits

0xa675,	// (0x000216ad) cell_sctrl_middle_pane

0xa686,	// (0x000216be) aid_touch_sctrl_middle_ParamLimits

0xa686,	// (0x000216be) aid_touch_sctrl_middle

0xa693,	// (0x000216cb) bg_sctrl_middle_pane_ParamLimits

0xa693,	// (0x000216cb) bg_sctrl_middle_pane

0x0e7d,	// (0x00017eb5) cell_sctrl_middle_pane_g1_ParamLimits

0x0e7d,	// (0x00017eb5) cell_sctrl_middle_pane_g1

0xa6a1,	// (0x000216d9) cell_sctrl_middle_pane_g2_ParamLimits

0xa6a1,	// (0x000216d9) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00026d31) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00026d31) cell_sctrl_middle_pane_g

0xce69,	// (0x00023ea1) bg_sctrl_middle_pane_g1

0xce71,	// (0x00023ea9) bg_sctrl_middle_pane_g2

0xce79,	// (0x00023eb1) bg_sctrl_middle_pane_g3

0xce81,	// (0x00023eb9) bg_sctrl_middle_pane_g4

0xce89,	// (0x00023ec1) bg_sctrl_middle_pane_g5

0xce91,	// (0x00023ec9) bg_sctrl_middle_pane_g6

0xce99,	// (0x00023ed1) bg_sctrl_middle_pane_g7

0xcea1,	// (0x00023ed9) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x00026d36) bg_sctrl_middle_pane_g

0xcea9,	// (0x00023ee1) bg_sctrl_middle_pane_g8_copy1

0xce69,	// (0x00023ea1) bg_sctrl_sk_pane_g1

0xce71,	// (0x00023ea9) bg_sctrl_sk_pane_g2

0xce79,	// (0x00023eb1) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x000268a3) bg_sctrl_sk_pane_g

0xbe13,	// (0x00022e4b) aid_size_touch_scroll_bar

0xce81,	// (0x00023eb9) bg_sctrl_sk_pane_g4

0xce89,	// (0x00023ec1) bg_sctrl_sk_pane_g5

0xce91,	// (0x00023ec9) bg_sctrl_sk_pane_g6

0xce99,	// (0x00023ed1) bg_sctrl_sk_pane_g7

0xcea1,	// (0x00023ed9) bg_sctrl_sk_pane_g8

0xcea9,	// (0x00023ee1) bg_sctrl_sk_pane_g9

0xcb9d,	// (0x00023bd5) popup_fep_china_hwr2_fs_candidate_window

0x8cc7,	// (0x0001fcff) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8cc7,	// (0x0001fcff) popup_fep_china_hwr2_fs_control_window

0xeea6,	// (0x00025ede) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00026d2c) sctrl_sk_top_pane_g

0xa6ad,	// (0x000216e5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa6ad,	// (0x000216e5) aid_fep_china_hwr2_fs_cell

0xa6c1,	// (0x000216f9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa6c1,	// (0x000216f9) bg_popup_fep_shadow_pane_cp4

0xa6d8,	// (0x00021710) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa6d8,	// (0x00021710) bg_popup_fep_shadow_pane_cp5

0xa6ea,	// (0x00021722) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa6ea,	// (0x00021722) popup_fep_china_hwr2_fs_control_bar_grid

0xa6fe,	// (0x00021736) popup_fep_china_hwr2_fs_control_funtion_grid

0x0e51,	// (0x00017e89) aid_fep_china_hwr2_fs_candi_cell

0xb823,	// (0x0002285b) bg_popup_fep_shadow_pane_cp6

0x0e5b,	// (0x00017e93) popup_fep_china_hwr2_fs_candidate_grid

0xa706,	// (0x0002173e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa706,	// (0x0002173e) cell_fep_china_hwr2_fs_funtion_grid

0xec1f,	// (0x00025c57) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0e7d,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0e7d,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0e8b,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0e8b,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x00026d47) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x00026d47) cell_fep_china_hwr2_fs_funtion_grid_g

0xa71e,	// (0x00021756) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa71e,	// (0x00021756) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa733,	// (0x0002176b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa733,	// (0x0002176b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00026d4c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00026d4c) cell_fep_china_hwr2_fs_funtion_grid_t

0x0ed2,	// (0x00017f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0eda,	// (0x00017f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0ee2,	// (0x00017f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00026d51) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0eea,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0eea,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid

0x0f03,	// (0x00017f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0f0b,	// (0x00017f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec1f,	// (0x00025c57) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec1f,	// (0x00025c57) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb40,	// (0x00026b78) cell_fep_china_hwr2_fs_candidate_grid_g

0x0f13,	// (0x00017f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0xccb8,	// (0x00023cf0) clock_nsta_pane_cp_24_ParamLimits

0xccb8,	// (0x00023cf0) clock_nsta_pane_cp_24

0xcd20,	// (0x00023d58) indicator_nsta_pane_cp_24_ParamLimits

0xcd20,	// (0x00023d58) indicator_nsta_pane_cp_24

0xda80,	// (0x00024ab8) heading_pane_g1

0x0001,

0xf8d0,	// (0x00026908) heading_pane_g

0xe0d8,	// (0x00025110) grid_sct_catagory_button_pane

0xd9e4,	// (0x00024a1c) scroll_pane_cp5_ParamLimits

0xe988,	// (0x000259c0) button_value_adjust_pane_cp5_ParamLimits

0xe988,	// (0x000259c0) button_value_adjust_pane_cp5

0xea46,	// (0x00025a7e) form2_midp_time_pane_ParamLimits

0x0f21,	// (0x00017f59) cell_sct_catagory_button_pane_ParamLimits

0x0f21,	// (0x00017f59) cell_sct_catagory_button_pane

0xebe4,	// (0x00025c1c) bg_button_pane_cp01_ParamLimits

0xebe4,	// (0x00025c1c) bg_button_pane_cp01

0xec1f,	// (0x00025c57) cell_sct_catagory_button_pane_g1

0x9206,	// (0x0002023e) popup_tb_extension_window

0xa74f,	// (0x00021787) aid_size_cell_ext_ParamLimits

0xa74f,	// (0x00021787) aid_size_cell_ext

0xbc55,	// (0x00022c8d) bg_tb_trans_pane_cp1_ParamLimits

0xbc55,	// (0x00022c8d) bg_tb_trans_pane_cp1

0xa775,	// (0x000217ad) grid_tb_ext_pane_ParamLimits

0xa775,	// (0x000217ad) grid_tb_ext_pane

0xa7b5,	// (0x000217ed) cell_tb_ext_pane_ParamLimits

0xa7b5,	// (0x000217ed) cell_tb_ext_pane

0xa7dd,	// (0x00021815) cell_tb_ext_pane_g1_ParamLimits

0xa7dd,	// (0x00021815) cell_tb_ext_pane_g1

0x0fb9,	// (0x00017ff1) cell_tb_ext_pane_t1

0xb9c6,	// (0x000229fe) list_highlight_pane_cp11_ParamLimits

0xb9c6,	// (0x000229fe) list_highlight_pane_cp11

0x532e,	// (0x0001c366) popup_uni_indicator_window_ParamLimits

0x532e,	// (0x0001c366) popup_uni_indicator_window

0xbeda,	// (0x00022f12) bg_popup_sub_pane_cp14

0x0fd4,	// (0x0001800c) list_uniindi_pane

0x0fe0,	// (0x00018018) uniindi_top_pane

0xb9c6,	// (0x000229fe) bg_uniindi_top_pane

0x0fff,	// (0x00018037) uniindi_top_pane_g1

0x1015,	// (0x0001804d) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00026d58) uniindi_top_pane_g

0x103f,	// (0x00018077) uniindi_top_pane_t1

0x1069,	// (0x000180a1) list_single_uniindi_pane_ParamLimits

0x1069,	// (0x000180a1) list_single_uniindi_pane

0xec1f,	// (0x00025c57) bg_uniindi_top_pane_g1

0x107b,	// (0x000180b3) list_single_uniindi_pane_g1

0x108e,	// (0x000180c6) list_single_uniindi_pane_t1

0xb823,	// (0x0002285b) control_bg_pane

0x10b3,	// (0x000180eb) bg_sctrl_sk_pane_cp1

0x10bc,	// (0x000180f4) bg_sctrl_sk_pane_cp2

0x10c5,	// (0x000180fd) control_bg_pane_g1

0x10ce,	// (0x00018106) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00026d61) control_bg_pane_g

0xe8c5,	// (0x000258fd) cell_indicator_nsta_pane_g1_ParamLimits

0x9e49,	// (0x00020e81) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa4,	// (0x00026adc) cell_indicator_nsta_pane_g_ParamLimits

0x4c70,	// (0x0001bca8) form2_midp_time_pane_t1_ParamLimits

0x28f9,	// (0x00019931) main_idle_act4_pane_ParamLimits

0x28f9,	// (0x00019931) main_idle_act4_pane

0x9206,	// (0x0002023e) popup_tb_extension_window_ParamLimits

0xa79c,	// (0x000217d4) tb_ext_find_pane_ParamLimits

0xa79c,	// (0x000217d4) tb_ext_find_pane

0x10d7,	// (0x0001810f) ai_gene_pane_1_cp1

0xc9a3,	// (0x000239db) ai_gene_pane_2_cp1

0x10df,	// (0x00018117) list_single_idle_plugin_calendar_pane

0x10e8,	// (0x00018120) list_single_idle_plugin_notification_pane

0x10f1,	// (0x00018129) list_single_idle_plugin_player_pane

0xa7fa,	// (0x00021832) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa7fa,	// (0x00021832) list_single_idle_plugin_shortcut_pane

0xa822,	// (0x0002185a) main_idle_act4_pane_t1

0xa838,	// (0x00021870) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x00026d66) main_idle_act4_pane_t

0xa850,	// (0x00021888) middle_sk_idle_act4_pane_ParamLimits

0xa850,	// (0x00021888) middle_sk_idle_act4_pane

0xa86c,	// (0x000218a4) popup_clock_digital_analogue_window_cp2

0xa893,	// (0x000218cb) shortcut_wheel_idle_act4_pane_ParamLimits

0xa893,	// (0x000218cb) shortcut_wheel_idle_act4_pane

0xec1f,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g1

0xec1f,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g2

0xec1f,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g3

0xec1f,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g4

0xec1f,	// (0x00025c57) shortcut_wheel_idle_act4_pane_g5

0x1184,	// (0x000181bc) shortcut_wheel_idle_act4_pane_g6

0x118c,	// (0x000181c4) shortcut_wheel_idle_act4_pane_g7

0x1194,	// (0x000181cc) shortcut_wheel_idle_act4_pane_g8

0x119c,	// (0x000181d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00026d6b) shortcut_wheel_idle_act4_pane_g

0x2928,	// (0x00019960) middle_sk_idle_act4_pane_g1_ParamLimits

0x2928,	// (0x00019960) middle_sk_idle_act4_pane_g1

0xa910,	// (0x00021948) middle_sk_idle_act4_pane_g2_ParamLimits

0xa910,	// (0x00021948) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00026d8e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00026d8e) middle_sk_idle_act4_pane_g

0xa928,	// (0x00021960) middle_sk_idle_act4_pane_t1_ParamLimits

0xa928,	// (0x00021960) middle_sk_idle_act4_pane_t1

0xa957,	// (0x0002198f) grid_ai_shortcut_pane_ParamLimits

0xa957,	// (0x0002198f) grid_ai_shortcut_pane

0xa974,	// (0x000219ac) list_highlight_pane_cp16_ParamLimits

0xa974,	// (0x000219ac) list_highlight_pane_cp16

0xa981,	// (0x000219b9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa981,	// (0x000219b9) list_single_idle_plugin_shortcut_pane_g1

0xa98d,	// (0x000219c5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa98d,	// (0x000219c5) list_single_idle_plugin_shortcut_pane_g2

0xa9a9,	// (0x000219e1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa9a9,	// (0x000219e1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00026d93) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00026d93) list_single_idle_plugin_shortcut_pane_g

0xa9be,	// (0x000219f6) cell_ai_shortcut_pane_ParamLimits

0xa9be,	// (0x000219f6) cell_ai_shortcut_pane

0xa9d4,	// (0x00021a0c) cell_ai_shortcut_pane_g1_ParamLimits

0xa9d4,	// (0x00021a0c) cell_ai_shortcut_pane_g1

0x10d7,	// (0x0001810f) ai_gene_pane_1_cp2

0x12c9,	// (0x00018301) ai_gene_pane_2_cp2

0x12d1,	// (0x00018309) list_highlight_pane_cp15

0x12da,	// (0x00018312) list_single_idle_plugin_calendar_pane_g1

0x12d1,	// (0x00018309) list_highlight_pane_cp17

0x12e2,	// (0x0001831a) list_single_idle_plugin_calendar_pane_g1_copy1

0x12ea,	// (0x00018322) list_single_idle_plugin_player_pane_g1

0xe2ed,	// (0x00025325) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00026d9a) list_single_idle_plugin_player_pane_g

0x12f2,	// (0x0001832a) list_single_idle_plugin_player_pane_t1

0x1300,	// (0x00018338) list_single_idle_plugin_player_pane_t2

0x130e,	// (0x00018346) list_single_idle_plugin_player_pane_t3

0x131c,	// (0x00018354) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00026d9f) list_single_idle_plugin_player_pane_t

0x132a,	// (0x00018362) wait_bar_pane_cp15

0x1332,	// (0x0001836a) grid_ai_notification_pane

0xe2ed,	// (0x00025325) list_single_idle_plugin_notification_pane_g1

0xa9f6,	// (0x00021a2e) cell_ai_notification_pane_ParamLimits

0xa9f6,	// (0x00021a2e) cell_ai_notification_pane

0x1348,	// (0x00018380) cell_ai_notification_pane_g1

0x1350,	// (0x00018388) cell_ai_notification_pane_t1

0xaa03,	// (0x00021a3b) tb_ext_find_button_pane

0xaa0b,	// (0x00021a43) tb_ext_find_pane_g1

0xaa13,	// (0x00021a4b) tb_ext_find_pane_t1

0xc412,	// (0x0002344a) tb_ext_find_button_pane_g1

0x137c,	// (0x000183b4) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00026da8) tb_ext_find_button_pane_g

0xa822,	// (0x0002185a) main_idle_act4_pane_t1_ParamLimits

0xa838,	// (0x00021870) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x00026d66) main_idle_act4_pane_t_ParamLimits

0xa86c,	// (0x000218a4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa883,	// (0x000218bb) sat_plugin_idle_act4_pane_ParamLimits

0xa883,	// (0x000218bb) sat_plugin_idle_act4_pane

0xaa21,	// (0x00021a59) sat_plugin_idle_act4_pane_t1_ParamLimits

0xaa21,	// (0x00021a59) sat_plugin_idle_act4_pane_t1

0xaa39,	// (0x00021a71) sat_plugin_idle_act4_pane_t2_ParamLimits

0xaa39,	// (0x00021a71) sat_plugin_idle_act4_pane_t2

0xaa51,	// (0x00021a89) sat_plugin_idle_act4_pane_t3_ParamLimits

0xaa51,	// (0x00021a89) sat_plugin_idle_act4_pane_t3

0xaa69,	// (0x00021aa1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaa69,	// (0x00021aa1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00026dad) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00026dad) sat_plugin_idle_act4_pane_t

0x5277,	// (0x0001c2af) popup_battery_window_ParamLimits

0x5277,	// (0x0001c2af) popup_battery_window

0xb9c6,	// (0x000229fe) bg_popup_sub_pane_cp25_ParamLimits

0xb9c6,	// (0x000229fe) bg_popup_sub_pane_cp25

0x13d1,	// (0x00018409) popup_battery_window_g1_ParamLimits

0x13d1,	// (0x00018409) popup_battery_window_g1

0x13dd,	// (0x00018415) popup_battery_window_t1_ParamLimits

0x13dd,	// (0x00018415) popup_battery_window_t1

0x13ef,	// (0x00018427) popup_battery_window_t2_ParamLimits

0x13ef,	// (0x00018427) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x00026db6) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x00026db6) popup_battery_window_t

0x89fd,	// (0x0001fa35) midp_canvas_pane_ParamLimits

0x8a5a,	// (0x0001fa92) midp_keypad_pane_ParamLimits

0x8a5a,	// (0x0001fa92) midp_keypad_pane

0xc031,	// (0x00023069) main_midp_pane_ParamLimits

0xe93b,	// (0x00025973) signal_pane_g2_cp_ParamLimits

0xaa81,	// (0x00021ab9) aid_size_cell_midp_keypad_ParamLimits

0xaa81,	// (0x00021ab9) aid_size_cell_midp_keypad

0xaa9f,	// (0x00021ad7) midp_keyp_game_grid_pane_ParamLimits

0xaa9f,	// (0x00021ad7) midp_keyp_game_grid_pane

0xaac6,	// (0x00021afe) midp_keyp_rocker_pane_ParamLimits

0xaac6,	// (0x00021afe) midp_keyp_rocker_pane

0xab1f,	// (0x00021b57) midp_keyp_sk_left_pane_ParamLimits

0xab1f,	// (0x00021b57) midp_keyp_sk_left_pane

0xab73,	// (0x00021bab) midp_keyp_sk_right_pane_ParamLimits

0xab73,	// (0x00021bab) midp_keyp_sk_right_pane

0xb823,	// (0x0002285b) bg_button_pane_cp03

0xabc7,	// (0x00021bff) midp_keyp_sk_left_pane_g1

0xb823,	// (0x0002285b) bg_button_pane_cp04

0xabc7,	// (0x00021bff) midp_keyp_sk_right_pane_g1

0xec1f,	// (0x00025c57) midp_keyp_rocker_pane_g1

0xabd0,	// (0x00021c08) keyp_game_cell_pane_ParamLimits

0xabd0,	// (0x00021c08) keyp_game_cell_pane

0xb823,	// (0x0002285b) bg_button_pane_cp02

0xabf4,	// (0x00021c2c) keyp_game_cell_pane_g1

0x83cd,	// (0x0001f405) popup_fep_vkb2_window_ParamLimits

0x83cd,	// (0x0001f405) popup_fep_vkb2_window

0xabfd,	// (0x00021c35) aid_size_cell_vkb2_ParamLimits

0xabfd,	// (0x00021c35) aid_size_cell_vkb2

0xac33,	// (0x00021c6b) popup_fep_vkb2_window_g1_ParamLimits

0xac33,	// (0x00021c6b) popup_fep_vkb2_window_g1

0xac7a,	// (0x00021cb2) vkb2_area_bottom_pane_ParamLimits

0xac7a,	// (0x00021cb2) vkb2_area_bottom_pane

0xacce,	// (0x00021d06) vkb2_area_keypad_pane_ParamLimits

0xacce,	// (0x00021d06) vkb2_area_keypad_pane

0xad16,	// (0x00021d4e) vkb2_area_top_pane_ParamLimits

0xad16,	// (0x00021d4e) vkb2_area_top_pane

0xad9c,	// (0x00021dd4) vkb2_top_entry_pane_ParamLimits

0xad9c,	// (0x00021dd4) vkb2_top_entry_pane

0xadc9,	// (0x00021e01) vkb2_top_grid_left_pane_ParamLimits

0xadc9,	// (0x00021e01) vkb2_top_grid_left_pane

0xade9,	// (0x00021e21) vkb2_top_grid_right_pane_ParamLimits

0xade9,	// (0x00021e21) vkb2_top_grid_right_pane

0x654c,	// (0x0001d584) vkb2_cell_keypad_pane_ParamLimits

0x654c,	// (0x0001d584) vkb2_cell_keypad_pane

0xae2f,	// (0x00021e67) vkb2_area_bottom_grid_pane_ParamLimits

0xae2f,	// (0x00021e67) vkb2_area_bottom_grid_pane

0xae59,	// (0x00021e91) vkb2_area_bottom_pane_g1_ParamLimits

0xae59,	// (0x00021e91) vkb2_area_bottom_pane_g1

0xae7f,	// (0x00021eb7) vkb2_area_bottom_pane_g2_ParamLimits

0xae7f,	// (0x00021eb7) vkb2_area_bottom_pane_g2

0xaeb0,	// (0x00021ee8) vkb2_area_bottom_pane_g3_ParamLimits

0xaeb0,	// (0x00021ee8) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x00026dbb) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x00026dbb) vkb2_area_bottom_pane_g

0x66f6,	// (0x0001d72e) vkb2_top_cell_left_pane_ParamLimits

0x66f6,	// (0x0001d72e) vkb2_top_cell_left_pane

0xaf1a,	// (0x00021f52) vkb2_top_entry_pane_g1_ParamLimits

0xaf1a,	// (0x00021f52) vkb2_top_entry_pane_g1

0xaf28,	// (0x00021f60) vkb2_top_entry_pane_t1_ParamLimits

0xaf28,	// (0x00021f60) vkb2_top_entry_pane_t1

0x15a0,	// (0x000185d8) vkb2_top_entry_pane_t2_ParamLimits

0x15a0,	// (0x000185d8) vkb2_top_entry_pane_t2

0x15d2,	// (0x0001860a) vkb2_top_entry_pane_t3_ParamLimits

0x15d2,	// (0x0001860a) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00026dc2) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00026dc2) vkb2_top_entry_pane_t

0xaf61,	// (0x00021f99) vkb2_top_grid_right_pane_g1_ParamLimits

0xaf61,	// (0x00021f99) vkb2_top_grid_right_pane_g1

0x6759,	// (0x0001d791) vkb2_top_grid_right_pane_g2_ParamLimits

0x6759,	// (0x0001d791) vkb2_top_grid_right_pane_g2

0x6771,	// (0x0001d7a9) vkb2_top_grid_right_pane_g3_ParamLimits

0x6771,	// (0x0001d7a9) vkb2_top_grid_right_pane_g3

0xaf77,	// (0x00021faf) vkb2_top_grid_right_pane_g4_ParamLimits

0xaf77,	// (0x00021faf) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00026dc9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00026dc9) vkb2_top_grid_right_pane_g

0x679f,	// (0x0001d7d7) vkb2_top_cell_left_pane_g1

0x67b6,	// (0x0001d7ee) vkb2_cell_keypad_pane_g1_ParamLimits

0x67b6,	// (0x0001d7ee) vkb2_cell_keypad_pane_g1

0x15f6,	// (0x0001862e) vkb2_cell_keypad_pane_t1_ParamLimits

0x15f6,	// (0x0001862e) vkb2_cell_keypad_pane_t1

0x67c4,	// (0x0001d7fc) vkb2_cell_bottom_grid_pane_ParamLimits

0x67c4,	// (0x0001d7fc) vkb2_cell_bottom_grid_pane

0x67fd,	// (0x0001d835) vkb2_cell_bottom_grid_pane_g1

0xa8b4,	// (0x000218ec) aid_call2_pane_cp02

0xa8bc,	// (0x000218f4) aid_call_pane_cp02

0xa8c4,	// (0x000218fc) clock_digital_number_pane_cp10

0xa8cc,	// (0x00021904) clock_digital_number_pane_cp11

0xa8d4,	// (0x0002190c) clock_digital_number_pane_cp12

0xa8dc,	// (0x00021914) clock_digital_number_pane_cp13

0xa8e4,	// (0x0002191c) clock_digital_separator_pane_cp10

0xc412,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g1

0xc412,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g2

0xa8ec,	// (0x00021924) popup_clock_digital_analogue_window_cp2_g3

0xc412,	// (0x0002344a) popup_clock_digital_analogue_window_cp2_g4

0xa8ec,	// (0x00021924) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00026d7e) popup_clock_digital_analogue_window_cp2_g

0xa8f4,	// (0x0002192c) popup_clock_digital_analogue_window_cp2_t1

0xa902,	// (0x0002193a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00026d89) popup_clock_digital_analogue_window_cp2_t

0xec1f,	// (0x00025c57) clock_digital_number_pane_cp10_g1

0xec1f,	// (0x00025c57) clock_digital_number_pane_cp10_g2

0x0001,

0xfb40,	// (0x00026b78) clock_digital_number_pane_cp10_g

0xec1f,	// (0x00025c57) clock_digital_separator_pane_cp10_g1

0xec1f,	// (0x00025c57) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb40,	// (0x00026b78) clock_digital_separator_pane_cp10_g

0x1021,	// (0x00018059) uniindi_top_pane_g3

0x1032,	// (0x0001806a) uniindi_top_pane_g4

0x65d7,	// (0x0001d60f) vkb2_row_keypad_pane_ParamLimits

0x65d7,	// (0x0001d60f) vkb2_row_keypad_pane

0x681d,	// (0x0001d855) vkb2_cell_t_keypad_pane_ParamLimits

0x681d,	// (0x0001d855) vkb2_cell_t_keypad_pane

0x682d,	// (0x0001d865) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x682d,	// (0x0001d865) vkb2_cell_t_keypad_pane_cp08

0x6840,	// (0x0001d878) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6840,	// (0x0001d878) vkb2_cell_t_keypad_pane_cp09

0x6854,	// (0x0001d88c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6854,	// (0x0001d88c) vkb2_cell_t_keypad_pane_cp01

0x6865,	// (0x0001d89d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6865,	// (0x0001d89d) vkb2_cell_t_keypad_pane_cp02

0x6876,	// (0x0001d8ae) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6876,	// (0x0001d8ae) vkb2_cell_t_keypad_pane_cp03

0x6887,	// (0x0001d8bf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6887,	// (0x0001d8bf) vkb2_cell_t_keypad_pane_cp04

0x6898,	// (0x0001d8d0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6898,	// (0x0001d8d0) vkb2_cell_t_keypad_pane_cp05

0x68a9,	// (0x0001d8e1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x68a9,	// (0x0001d8e1) vkb2_cell_t_keypad_pane_cp06

0x68ba,	// (0x0001d8f2) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x68ba,	// (0x0001d8f2) vkb2_cell_t_keypad_pane_cp07

0x68cb,	// (0x0001d903) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x68cb,	// (0x0001d903) vkb2_cell_t_keypad_pane_cp10

0xeea6,	// (0x00025ede) vkb2_cell_t_keypad_pane_g1

0x2936,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1

0xb823,	// (0x0002285b) popup_grid_graphic2_window

0xaf8d,	// (0x00021fc5) aid_size_cell_graphic2_ParamLimits

0xaf8d,	// (0x00021fc5) aid_size_cell_graphic2

0xafcb,	// (0x00022003) bg_popup_window_pane_cp21_ParamLimits

0xafcb,	// (0x00022003) bg_popup_window_pane_cp21

0xafd9,	// (0x00022011) graphic2_pages_pane_ParamLimits

0xafd9,	// (0x00022011) graphic2_pages_pane

0xb02f,	// (0x00022067) grid_graphic2_control_pane_ParamLimits

0xb02f,	// (0x00022067) grid_graphic2_control_pane

0xb077,	// (0x000220af) grid_graphic2_pane_ParamLimits

0xb077,	// (0x000220af) grid_graphic2_pane

0xb0fe,	// (0x00022136) cell_graphic2_pane

0xb823,	// (0x0002285b) main_comp_mode_pane

0x0821,	// (0x00017859) list_ai3_gene_pane_ParamLimits

0xa58a,	// (0x000215c2) bg_popup_window_pane_cp19_ParamLimits

0x0c73,	// (0x00017cab) bg_touch_area_indi_pane_ParamLimits

0x0c73,	// (0x00017cab) bg_touch_area_indi_pane

0x0c89,	// (0x00017cc1) bg_touch_area_indi_pane_cp01_ParamLimits

0x0c89,	// (0x00017cc1) bg_touch_area_indi_pane_cp01

0x0c9f,	// (0x00017cd7) bg_touch_area_indi_pane_cp02_ParamLimits

0x0c9f,	// (0x00017cd7) bg_touch_area_indi_pane_cp02

0x0cb7,	// (0x00017cef) bg_touch_area_indi_pane_cp03_ParamLimits

0x0cb7,	// (0x00017cef) bg_touch_area_indi_pane_cp03

0x0cd1,	// (0x00017d09) popup_slider_window_g1_ParamLimits

0x0ced,	// (0x00017d25) popup_slider_window_g2_ParamLimits

0x0d09,	// (0x00017d41) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00026d13) popup_slider_window_g_ParamLimits

0x0d65,	// (0x00017d9d) popup_slider_window_t1_ParamLimits

0x0dd9,	// (0x00017e11) small_volume_slider_vertical_pane_ParamLimits

0xb0fe,	// (0x00022136) cell_graphic2_pane_ParamLimits

0xb15b,	// (0x00022193) bg_button_pane_cp10_ParamLimits

0xb15b,	// (0x00022193) bg_button_pane_cp10

0xb16e,	// (0x000221a6) bg_button_pane_cp11_ParamLimits

0xb16e,	// (0x000221a6) bg_button_pane_cp11

0xb181,	// (0x000221b9) graphic2_pages_pane_g1_ParamLimits

0xb181,	// (0x000221b9) graphic2_pages_pane_g1

0xb19c,	// (0x000221d4) graphic2_pages_pane_g2_ParamLimits

0xb19c,	// (0x000221d4) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00026dd7) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00026dd7) graphic2_pages_pane_g

0xb1b4,	// (0x000221ec) graphic2_pages_pane_t1_ParamLimits

0xb1b4,	// (0x000221ec) graphic2_pages_pane_t1

0xb1cc,	// (0x00022204) cell_graphic2_control_pane_ParamLimits

0xb1cc,	// (0x00022204) cell_graphic2_control_pane

0xb1fe,	// (0x00022236) cell_graphic2_pane_g1_ParamLimits

0xb1fe,	// (0x00022236) cell_graphic2_pane_g1

0x2948,	// (0x00019980) cell_graphic2_pane_g2_ParamLimits

0x2948,	// (0x00019980) cell_graphic2_pane_g2

0xb20b,	// (0x00022243) cell_graphic2_pane_g3_ParamLimits

0xb20b,	// (0x00022243) cell_graphic2_pane_g3

0x2955,	// (0x0001998d) cell_graphic2_pane_g4_ParamLimits

0x2955,	// (0x0001998d) cell_graphic2_pane_g4

0xb218,	// (0x00022250) cell_graphic2_pane_g5_ParamLimits

0xb218,	// (0x00022250) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x00026ddc) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x00026ddc) cell_graphic2_pane_g

0xb238,	// (0x00022270) cell_graphic2_pane_t1_ParamLimits

0xb238,	// (0x00022270) cell_graphic2_pane_t1

0xda74,	// (0x00024aac) grid_highlight_pane_cp11_ParamLimits

0xda74,	// (0x00024aac) grid_highlight_pane_cp11

0xb9c6,	// (0x000229fe) bg_button_pane_cp05

0xb26d,	// (0x000222a5) cell_graphic2_control_pane_g1

0xec1f,	// (0x00025c57) bg_touch_area_indi_pane_g1

0x2962,	// (0x0001999a) aid_cmod_rocker_key_size

0x296c,	// (0x000199a4) aid_cmode_itu_key_size

0x2976,	// (0x000199ae) main_cmode_video_pane

0x2980,	// (0x000199b8) main_comp_mode_itu_pane

0x298c,	// (0x000199c4) main_comp_mode_rocker_pane

0x2998,	// (0x000199d0) cell_cmode_rocker_pane_ParamLimits

0x2998,	// (0x000199d0) cell_cmode_rocker_pane

0x29aa,	// (0x000199e2) cell_cmode_itu_pane_ParamLimits

0x29aa,	// (0x000199e2) cell_cmode_itu_pane

0xbeda,	// (0x00022f12) bg_button_pane_cp06_ParamLimits

0xbeda,	// (0x00022f12) bg_button_pane_cp06

0xeea6,	// (0x00025ede) cell_cmode_rocker_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) cell_cmode_rocker_pane_g1

0x0e7d,	// (0x00017eb5) cell_cmode_rocker_pane_g2_ParamLimits

0x0e7d,	// (0x00017eb5) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x00026dec) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x00026dec) cell_cmode_rocker_pane_g

0xb823,	// (0x0002285b) bg_button_pane_cp07

0x29bf,	// (0x000199f7) cell_cmode_itu_pane_g1

0x29c8,	// (0x00019a00) cell_cmode_itu_pane_t1

0x29d6,	// (0x00019a0e) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00026df1) cell_cmode_itu_pane_t

0x10a3,	// (0x000180db) aid_touch_ctrl_left

0x10ab,	// (0x000180e3) aid_touch_ctrl_right

0xb823,	// (0x0002285b) compa_mode_pane

0xb293,	// (0x000222cb) aid_cmod_rocker_key_size_cp

0xb29d,	// (0x000222d5) aid_cmode_itu_key_size_cp

0x29e4,	// (0x00019a1c) compa_mode_pane_g1

0x29ec,	// (0x00019a24) compa_mode_pane_g2

0x29f4,	// (0x00019a2c) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x00026df6) compa_mode_pane_g

0xb2a7,	// (0x000222df) main_comp_mode_itu_pane_cp

0xb2af,	// (0x000222e7) main_comp_mode_rocker_pane_cp

0xb2b7,	// (0x000222ef) cell_cmode_itu_pane_cp_ParamLimits

0xb2b7,	// (0x000222ef) cell_cmode_itu_pane_cp

0xb2cc,	// (0x00022304) cell_cmode_rocker_pane_cp_ParamLimits

0xb2cc,	// (0x00022304) cell_cmode_rocker_pane_cp

0xbeda,	// (0x00022f12) bg_button_pane_cp06_cp_ParamLimits

0xbeda,	// (0x00022f12) bg_button_pane_cp06_cp

0xeea6,	// (0x00025ede) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xeea6,	// (0x00025ede) cell_cmode_rocker_pane_g1_cp

0xec1f,	// (0x00025c57) cell_cmode_rocker_pane_g2_cp

0xb823,	// (0x0002285b) bg_button_pane_cp07_cp

0xb2de,	// (0x00022316) cell_cmode_itu_pane_g1_cp

0xb2e7,	// (0x0002231f) cell_cmode_itu_pane_t1_cp

0xb2e7,	// (0x0002231f) cell_cmode_itu_pane_t2_cp

0x9c81,	// (0x00020cb9) settings_code_pane_cp2

0xb893,	// (0x000228cb) bg_popup_window_pane_cp3_ParamLimits

0xbb94,	// (0x00022bcc) heading_pane_cp3_ParamLimits

0xbba0,	// (0x00022bd8) listscroll_popup_graphic_pane_ParamLimits

0x5f12,	// (0x0001cf4a) fep_hwr_aid_pane_ParamLimits

0x62c1,	// (0x0001d2f9) aid_touch_sctrl_top_ParamLimits

0x62ce,	// (0x0001d306) sctrl_sk_top_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00026d2c) sctrl_sk_top_pane_g_ParamLimits

0x62db,	// (0x0001d313) sctrl_sk_top_pane_t1_ParamLimits

0x62c1,	// (0x0001d2f9) aid_touch_sctrl_bottom_ParamLimits

0x62db,	// (0x0001d313) sctrl_sk_bottom_pane_t1_ParamLimits

0x0fed,	// (0x00018025) aid_area_touch_clock

0xad5e,	// (0x00021d96) aid_vkb2_area_top_pane_cell_ParamLimits

0xad5e,	// (0x00021d96) aid_vkb2_area_top_pane_cell

0xae09,	// (0x00021e41) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xae09,	// (0x00021e41) aid_vkb2_area_bottom_pane_cell

0x1558,	// (0x00018590) popup_char_count_window

0x29fc,	// (0x00019a34) popup_char_count_window_g1

0x2a05,	// (0x00019a3d) popup_char_count_window_g2

0x2a0e,	// (0x00019a46) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00026dfd) popup_char_count_window_g

0x2a17,	// (0x00019a4f) popup_char_count_window_t1

0x637c,	// (0x0001d3b4) popup_fep_char_preview_window_ParamLimits

0x637c,	// (0x0001d3b4) popup_fep_char_preview_window

0xad7e,	// (0x00021db6) vkb2_top_candi_pane_ParamLimits

0xad7e,	// (0x00021db6) vkb2_top_candi_pane

0xb2f5,	// (0x0002232d) cell_vkb2_top_candi_pane_ParamLimits

0xb2f5,	// (0x0002232d) cell_vkb2_top_candi_pane

0xd416,	// (0x0002444e) bg_popup_fep_char_preview_window_ParamLimits

0xd416,	// (0x0002444e) bg_popup_fep_char_preview_window

0x6c4b,	// (0x0001dc83) popup_fep_char_preview_window_t1_ParamLimits

0x6c4b,	// (0x0001dc83) popup_fep_char_preview_window_t1

0x2a35,	// (0x00019a6d) bg_popup_fep_char_preview_window_g1

0x2a2d,	// (0x00019a65) bg_popup_fep_char_preview_window_g2

0x2a25,	// (0x00019a5d) bg_popup_fep_char_preview_window_g3

0x2a55,	// (0x00019a8d) bg_popup_fep_char_preview_window_g4

0x2a4d,	// (0x00019a85) bg_popup_fep_char_preview_window_g5

0x6c85,	// (0x0001dcbd) bg_popup_fep_char_preview_window_g6

0x2a45,	// (0x00019a7d) bg_popup_fep_char_preview_window_g7

0x2a3d,	// (0x00019a75) bg_popup_fep_char_preview_window_g8

0x2a5d,	// (0x00019a95) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcc,	// (0x00026e04) bg_popup_fep_char_preview_window_g

0xeea6,	// (0x00025ede) cell_vkb2_top_candi_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) cell_vkb2_top_candi_pane_g1

0xf282,	// (0x000262ba) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf282,	// (0x000262ba) cell_vkb2_top_candi_pane_g2

0xf2a3,	// (0x000262db) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf2a3,	// (0x000262db) cell_vkb2_top_candi_pane_g3

0x6c8d,	// (0x0001dcc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c8d,	// (0x0001dcc5) cell_vkb2_top_candi_pane_g4

0x2907,	// (0x0001993f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x2907,	// (0x0001993f) cell_vkb2_top_candi_pane_g5

0x0e7d,	// (0x00017eb5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0e7d,	// (0x00017eb5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddf,	// (0x00026e17) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddf,	// (0x00026e17) cell_vkb2_top_candi_pane_g

0x6cae,	// (0x0001dce6) cell_vkb2_top_candi_pane_t1

0x5d2f,	// (0x0001cd67) aid_size_touch_slider_mark_ParamLimits

0x5d2f,	// (0x0001cd67) aid_size_touch_slider_mark

0xb015,	// (0x0002204d) grid_graphic2_catg_pane_ParamLimits

0xb015,	// (0x0002204d) grid_graphic2_catg_pane

0xb0d1,	// (0x00022109) popup_grid_graphic2_window_t1_ParamLimits

0xb0d1,	// (0x00022109) popup_grid_graphic2_window_t1

0xb0e7,	// (0x0002211f) popup_grid_graphic2_window_t2_ParamLimits

0xb0e7,	// (0x0002211f) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00026dd2) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00026dd2) popup_grid_graphic2_window_t

0xb9c6,	// (0x000229fe) bg_button_pane_cp05_ParamLimits

0xb26d,	// (0x000222a5) cell_graphic2_control_pane_g1_ParamLimits

0xb35b,	// (0x00022393) cell_graphic2_catg_pane_ParamLimits

0xb35b,	// (0x00022393) cell_graphic2_catg_pane

0xb823,	// (0x0002285b) bg_button_pane_cp12

0xb36d,	// (0x000223a5) cell_graphic2_catg_pane_g1

0x0fb9,	// (0x00017ff1) cell_tb_ext_pane_t1_ParamLimits

0x6716,	// (0x0001d74e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6716,	// (0x0001d74e) vkb2_top_cell_right_narrow_pane

0x672e,	// (0x0001d766) vkb2_top_cell_right_wide_pane_ParamLimits

0x672e,	// (0x0001d766) vkb2_top_cell_right_wide_pane

0x28f9,	// (0x00019931) bg_vkb2_func_pane_ParamLimits

0x28f9,	// (0x00019931) bg_vkb2_func_pane

0x679f,	// (0x0001d7d7) vkb2_top_cell_left_pane_g1_ParamLimits

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp03_ParamLimits

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp03

0x67fd,	// (0x0001d835) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce71,	// (0x00023ea9) bg_vkb2_func_pane_g1

0xce79,	// (0x00023eb1) bg_vkb2_func_pane_g2

0xce89,	// (0x00023ec1) bg_vkb2_func_pane_g3

0xce81,	// (0x00023eb9) bg_vkb2_func_pane_g4

0xce91,	// (0x00023ec9) bg_vkb2_func_pane_g5

0xce99,	// (0x00023ed1) bg_vkb2_func_pane_g6

0xcea1,	// (0x00023ed9) bg_vkb2_func_pane_g7

0xcea9,	// (0x00023ee1) bg_vkb2_func_pane_g8

0xce69,	// (0x00023ea1) bg_vkb2_func_pane_g9

0x0008,

0xfdec,	// (0x00026e24) bg_vkb2_func_pane_g

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp01_ParamLimits

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp01

0x679f,	// (0x0001d7d7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x679f,	// (0x0001d7d7) vkb2_top_cell_right_wide_pane_g1

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp02_ParamLimits

0x28f9,	// (0x00019931) bg_vkb2_fuc_pane_cp02

0x67fd,	// (0x0001d835) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67fd,	// (0x0001d835) vkb2_top_cell_right_narrow_pane_g1

0xa4c4,	// (0x000214fc) aid_touch_area_decrease_ParamLimits

0xa4c4,	// (0x000214fc) aid_touch_area_decrease

0xa4fe,	// (0x00021536) aid_touch_area_increase_ParamLimits

0xa4fe,	// (0x00021536) aid_touch_area_increase

0xa526,	// (0x0002155e) aid_touch_area_mute_ParamLimits

0xa526,	// (0x0002155e) aid_touch_area_mute

0xa556,	// (0x0002158e) aid_touch_area_slider_ParamLimits

0xa556,	// (0x0002158e) aid_touch_area_slider

0xa596,	// (0x000215ce) popup_slider_window_g4_ParamLimits

0xa596,	// (0x000215ce) popup_slider_window_g4

0xa5be,	// (0x000215f6) popup_slider_window_g5_ParamLimits

0xa5be,	// (0x000215f6) popup_slider_window_g5

0xa5f2,	// (0x0002162a) popup_slider_window_g6_ParamLimits

0xa5f2,	// (0x0002162a) popup_slider_window_g6

0x0d93,	// (0x00017dcb) popup_slider_window_t2_ParamLimits

0x0d93,	// (0x00017dcb) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00026d20) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00026d20) popup_slider_window_t

0xa60e,	// (0x00021646) slider_pane_ParamLimits

0xa60e,	// (0x00021646) slider_pane

0x2a65,	// (0x00019a9d) slider_pane_g1_ParamLimits

0x2a65,	// (0x00019a9d) slider_pane_g1

0x2a79,	// (0x00019ab1) slider_pane_g2_ParamLimits

0x2a79,	// (0x00019ab1) slider_pane_g2

0x2a8f,	// (0x00019ac7) slider_pane_g3_ParamLimits

0x2a8f,	// (0x00019ac7) slider_pane_g3

0x0003,

0xfdff,	// (0x00026e37) slider_pane_g_ParamLimits

0xfdff,	// (0x00026e37) slider_pane_g

0x924e,	// (0x00020286) popup_tb_float_extension_window_ParamLimits

0x924e,	// (0x00020286) popup_tb_float_extension_window

0x2abb,	// (0x00019af3) aid_size_cell_tb_float_ext

0xb823,	// (0x0002285b) bg_popup_sub_window_cp28

0x2ac7,	// (0x00019aff) grid_tb_float_ext_pane

0x2ad1,	// (0x00019b09) cell_tb_float_ext_pane_ParamLimits

0x2ad1,	// (0x00019b09) cell_tb_float_ext_pane

0x2aeb,	// (0x00019b23) cell_tb_float_ext_pane_g1

0x2af4,	// (0x00019b2c) grid_highlight_pane_cp12

0xa029,	// (0x00021061) cell_last_hwr_side_pane_ParamLimits

0xa029,	// (0x00021061) cell_last_hwr_side_pane

0xec1f,	// (0x00025c57) cell_last_hwr_side_pane_g1

0x2afd,	// (0x00019b35) cell_last_hwr_side_pane_g2

0x0001,

0xfe08,	// (0x00026e40) cell_last_hwr_side_pane_g

0xaee5,	// (0x00021f1d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaee5,	// (0x00021f1d) vkb2_area_bottom_space_btn_pane

0xeea6,	// (0x00025ede) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2936,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6cae,	// (0x0001dce6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6ce8,	// (0x0001dd20) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6ce8,	// (0x0001dd20) vkb2_area_bottom_space_btn_pane_g1

0x6d22,	// (0x0001dd5a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d22,	// (0x0001dd5a) vkb2_area_bottom_space_btn_pane_g2

0x6d58,	// (0x0001dd90) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d58,	// (0x0001dd90) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0d,	// (0x00026e45) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0d,	// (0x00026e45) vkb2_area_bottom_space_btn_pane_g

0x5fb9,	// (0x0001cff1) cel_fep_hwr_func_pane_ParamLimits

0x5fb9,	// (0x0001cff1) cel_fep_hwr_func_pane

0x9ffe,	// (0x00021036) cell_hwr_side_button_pane_ParamLimits

0x9ffe,	// (0x00021036) cell_hwr_side_button_pane

0x0fed,	// (0x00018025) aid_area_touch_clock_ParamLimits

0xb9c6,	// (0x000229fe) bg_uniindi_top_pane_ParamLimits

0x0fff,	// (0x00018037) uniindi_top_pane_g1_ParamLimits

0x1015,	// (0x0001804d) uniindi_top_pane_g2_ParamLimits

0x1021,	// (0x00018059) uniindi_top_pane_g3_ParamLimits

0x1032,	// (0x0001806a) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00026d58) uniindi_top_pane_g_ParamLimits

0x103f,	// (0x00018077) uniindi_top_pane_t1_ParamLimits

0xb9c6,	// (0x000229fe) bg_vkb2_func_pane_cp01_ParamLimits

0xb9c6,	// (0x000229fe) bg_vkb2_func_pane_cp01

0x2b06,	// (0x00019b3e) cel_fep_hwr_func_pane_g1_ParamLimits

0x2b06,	// (0x00019b3e) cel_fep_hwr_func_pane_g1

0xb9c6,	// (0x000229fe) bg_vkb2_func_pane_cp02_ParamLimits

0xb9c6,	// (0x000229fe) bg_vkb2_func_pane_cp02

0x2b06,	// (0x00019b3e) cell_hwr_side_button_pane_g1_ParamLimits

0x2b06,	// (0x00019b3e) cell_hwr_side_button_pane_g1

0xcd81,	// (0x00023db9) status_pane_g4_ParamLimits

0xcd81,	// (0x00023db9) status_pane_g4

0xcd99,	// (0x00023dd1) status_pane_t1

0xeaae,	// (0x00025ae6) form2_midp_gauge_slider_cont_pane

0xeab6,	// (0x00025aee) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9f3d,	// (0x00020f75) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9f4f,	// (0x00020f87) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf3,	// (0x00026b2b) form2_midp_gauge_slider_pane_t_ParamLimits

0xeac8,	// (0x00025b00) form2_midp_slider_pane_ParamLimits

0x633c,	// (0x0001d374) aid_size_cell_func_vkb2_ParamLimits

0x633c,	// (0x0001d374) aid_size_cell_func_vkb2

0x2aa7,	// (0x00019adf) slider_pane_g4_ParamLimits

0x2aa7,	// (0x00019adf) slider_pane_g4

0xb376,	// (0x000223ae) form2_midp_gauge_slider_pane_t2_cp01

0xb384,	// (0x000223bc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb384,	// (0x000223bc) form2_midp_gauge_slider_pane_t3_cp01

0x6dcd,	// (0x0001de05) form2_midp_slider_pane_cp01

0xb823,	// (0x0002285b) navi_smil_pane

0x2b36,	// (0x00019b6e) navi_smil_pane_g1

0x2b3e,	// (0x00019b76) navi_smil_pane_t1

0x2b14,	// (0x00019b4c) form2_midp_slider_pane_g1

0x2b1d,	// (0x00019b55) form2_midp_slider_pane_g2

0x2b25,	// (0x00019b5d) form2_midp_slider_pane_g3

0x2b14,	// (0x00019b4c) form2_midp_slider_pane_g4

0xb3a1,	// (0x000223d9) form2_midp_slider_pane_g5

0x0004,

0xfe16,	// (0x00026e4e) form2_midp_slider_pane_g

0x6d92,	// (0x0001ddca) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d92,	// (0x0001ddca) vkb2_area_bottom_space_btn_pane_g4

0x942a,	// (0x00020462) lc0_navi_pane_ParamLimits

0x942a,	// (0x00020462) lc0_navi_pane

0x9494,	// (0x000204cc) lc0_stat_indi_pane_ParamLimits

0x9494,	// (0x000204cc) lc0_stat_indi_pane

0x94a9,	// (0x000204e1) ls0_title_pane_ParamLimits

0x94a9,	// (0x000204e1) ls0_title_pane

0xbeda,	// (0x00022f12) bg_popup_sub_pane_cp14_ParamLimits

0x0fd4,	// (0x0001800c) list_uniindi_pane_ParamLimits

0x0fe0,	// (0x00018018) uniindi_top_pane_ParamLimits

0x107b,	// (0x000180b3) list_single_uniindi_pane_g1_ParamLimits

0x108e,	// (0x000180c6) list_single_uniindi_pane_t1_ParamLimits

0xb3aa,	// (0x000223e2) lc0_stat_clock_pane_ParamLimits

0xb3aa,	// (0x000223e2) lc0_stat_clock_pane

0xb3b7,	// (0x000223ef) lc0_stat_indi_pane_g1_ParamLimits

0xb3b7,	// (0x000223ef) lc0_stat_indi_pane_g1

0xb3c4,	// (0x000223fc) lc0_stat_indi_pane_g2_ParamLimits

0xb3c4,	// (0x000223fc) lc0_stat_indi_pane_g2

0x0001,

0xfe21,	// (0x00026e59) lc0_stat_indi_pane_g_ParamLimits

0xfe21,	// (0x00026e59) lc0_stat_indi_pane_g

0xb3d1,	// (0x00022409) lc0_uni_indicator_pane_ParamLimits

0xb3d1,	// (0x00022409) lc0_uni_indicator_pane

0xb3de,	// (0x00022416) ls0_title_pane_g1_ParamLimits

0xb3de,	// (0x00022416) ls0_title_pane_g1

0xb3f2,	// (0x0002242a) ls0_title_pane_t1_ParamLimits

0xb3f2,	// (0x0002242a) ls0_title_pane_t1

0xb420,	// (0x00022458) lc0_uni_indicator_pane_g1_ParamLimits

0xb420,	// (0x00022458) lc0_uni_indicator_pane_g1

0x2b4c,	// (0x00019b84) lc0_stat_clock_pane_t1

0xb823,	// (0x0002285b) main_ai5_pane

0x2b5a,	// (0x00019b92) ai5_sk_pane_ParamLimits

0x2b5a,	// (0x00019b92) ai5_sk_pane

0xb44f,	// (0x00022487) cell_ai5_widget_pane_ParamLimits

0xb44f,	// (0x00022487) cell_ai5_widget_pane

0x2b67,	// (0x00019b9f) aid_size_cell_widget_grid

0x2b7b,	// (0x00019bb3) bg_ai5_widget_pane_ParamLimits

0x2b7b,	// (0x00019bb3) bg_ai5_widget_pane

0xb4d8,	// (0x00022510) cell_ai5_widget_pane_g2

0xb4e8,	// (0x00022520) cell_ai5_widget_pane_g3

0xb507,	// (0x0002253f) cell_ai5_widget_pane_g4

0xb513,	// (0x0002254b) cell_ai5_widget_pane_g5

0xb51f,	// (0x00022557) cell_ai5_widget_pane_g6

0xb52b,	// (0x00022563) cell_ai5_widget_pane_g7

0xb573,	// (0x000225ab) cell_ai5_widget_pane_t1_ParamLimits

0xb573,	// (0x000225ab) cell_ai5_widget_pane_t1

0xb590,	// (0x000225c8) cell_ai5_widget_pane_t2_ParamLimits

0xb590,	// (0x000225c8) cell_ai5_widget_pane_t2

0xb5a8,	// (0x000225e0) cell_ai5_widget_pane_t3_ParamLimits

0xb5a8,	// (0x000225e0) cell_ai5_widget_pane_t3

0xb5c0,	// (0x000225f8) cell_ai5_widget_pane_t4_ParamLimits

0xb5c0,	// (0x000225f8) cell_ai5_widget_pane_t4

0xb5da,	// (0x00022612) cell_ai5_widget_pane_t5_ParamLimits

0xb5da,	// (0x00022612) cell_ai5_widget_pane_t5

0x2b87,	// (0x00019bbf) cell_ai5_widget_pane_t6_ParamLimits

0x2b87,	// (0x00019bbf) cell_ai5_widget_pane_t6

0x2b99,	// (0x00019bd1) cell_ai5_widget_pane_t7_ParamLimits

0x2b99,	// (0x00019bd1) cell_ai5_widget_pane_t7

0xb5f9,	// (0x00022631) cell_ai5_widget_pane_t8_ParamLimits

0xb5f9,	// (0x00022631) cell_ai5_widget_pane_t8

0x0009,

0xfe3b,	// (0x00026e73) cell_ai5_widget_pane_t_ParamLimits

0xfe3b,	// (0x00026e73) cell_ai5_widget_pane_t

0xb645,	// (0x0002267d) grid_ai5_widget_pane

0xbeda,	// (0x00022f12) highlight_cell_ai5_widget_pane_ParamLimits

0xbeda,	// (0x00022f12) highlight_cell_ai5_widget_pane

0xb65b,	// (0x00022693) ai5_sk_left_pane

0xb665,	// (0x0002269d) ai5_sk_middle_pane

0xb66f,	// (0x000226a7) ai5_sk_right_pane

0x2bb2,	// (0x00019bea) bg_ai5_widget_pane_g1_ParamLimits

0x2bb2,	// (0x00019bea) bg_ai5_widget_pane_g1

0x2bbe,	// (0x00019bf6) bg_ai5_widget_pane_g2_ParamLimits

0x2bbe,	// (0x00019bf6) bg_ai5_widget_pane_g2

0x2bca,	// (0x00019c02) bg_ai5_widget_pane_g3_ParamLimits

0x2bca,	// (0x00019c02) bg_ai5_widget_pane_g3

0x2bd6,	// (0x00019c0e) bg_ai5_widget_pane_g4_ParamLimits

0x2bd6,	// (0x00019c0e) bg_ai5_widget_pane_g4

0x2be2,	// (0x00019c1a) bg_ai5_widget_pane_g5_ParamLimits

0x2be2,	// (0x00019c1a) bg_ai5_widget_pane_g5

0x2bee,	// (0x00019c26) bg_ai5_widget_pane_g6_ParamLimits

0x2bee,	// (0x00019c26) bg_ai5_widget_pane_g6

0x2bfa,	// (0x00019c32) bg_ai5_widget_pane_g7_ParamLimits

0x2bfa,	// (0x00019c32) bg_ai5_widget_pane_g7

0x2c06,	// (0x00019c3e) bg_ai5_widget_pane_g8_ParamLimits

0x2c06,	// (0x00019c3e) bg_ai5_widget_pane_g8

0x2c12,	// (0x00019c4a) bg_ai5_widget_pane_g9_ParamLimits

0x2c12,	// (0x00019c4a) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x00026e88) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x00026e88) bg_ai5_widget_pane_g

0x2c45,	// (0x00019c7d) cell_shortcut_ai5_widget_pane_ParamLimits

0x2c45,	// (0x00019c7d) cell_shortcut_ai5_widget_pane

0xb8cf,	// (0x00022907) bg_cell_shortcut_ai5_widget_pane

0x2c56,	// (0x00019c8e) cell_grid_ai5_widget_pane_g1

0x2c5f,	// (0x00019c97) highlight_cell_shortcut_ai5_widget_pane

0xce79,	// (0x00023eb1) ai5_sk_left_pane_g1

0x2c67,	// (0x00019c9f) ai5_sk_left_pane_g2

0x2c6f,	// (0x00019ca7) ai5_sk_left_pane_g3

0x2c77,	// (0x00019caf) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x00026e9b) ai5_sk_left_pane_g

0x2c7f,	// (0x00019cb7) ai5_sk_left_pane_t1

0xce71,	// (0x00023ea9) ai5_sk_right_pane_g1

0x2c8d,	// (0x00019cc5) ai5_sk_right_pane_g2

0x2c95,	// (0x00019ccd) ai5_sk_right_pane_g3

0x2c9d,	// (0x00019cd5) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x00026ea4) ai5_sk_right_pane_g

0x2ca5,	// (0x00019cdd) ai5_sk_right_pane_t1

0xce71,	// (0x00023ea9) ai5_sk_middle_pane_g1

0xce79,	// (0x00023eb1) ai5_sk_middle_pane_g2

0xce91,	// (0x00023ec9) ai5_sk_middle_pane_g3

0x2c95,	// (0x00019ccd) ai5_sk_middle_pane_g4

0x2c6f,	// (0x00019ca7) ai5_sk_middle_pane_g5

0x2cb3,	// (0x00019ceb) ai5_sk_middle_pane_g6

0xb679,	// (0x000226b1) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x00026ead) ai5_sk_middle_pane_g

0x9316,	// (0x0002034e) aid_touch_area_size_lc0_ParamLimits

0x9316,	// (0x0002034e) aid_touch_area_size_lc0

0x6144,	// (0x0001d17c) cell_hwr_candidate_pane_t1_ParamLimits

0xcca3,	// (0x00023cdb) aid_touch_navi_pane

0x959b,	// (0x000205d3) status_dt_navi_pane_ParamLimits

0x959b,	// (0x000205d3) status_dt_navi_pane

0x95b3,	// (0x000205eb) status_dt_sta_pane_ParamLimits

0x95b3,	// (0x000205eb) status_dt_sta_pane

0xb681,	// (0x000226b9) dt_sta_controll_pane

0xb68e,	// (0x000226c6) dt_sta_indi_pane

0xb69b,	// (0x000226d3) dt_sta_title_pane

0xb9c6,	// (0x000229fe) bg_dt_sta_indi_pane_ParamLimits

0xb9c6,	// (0x000229fe) bg_dt_sta_indi_pane

0xb6ad,	// (0x000226e5) dt_sta_battery_pane

0xb6b5,	// (0x000226ed) dt_sta_indi_pane_g1

0x2cbb,	// (0x00019cf3) dt_sta_indi_pane_g2

0x2cc4,	// (0x00019cfc) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x00026ebc) dt_sta_indi_pane_g

0x2ccd,	// (0x00019d05) dt_sta_signal_pane

0xbeda,	// (0x00022f12) bg_dt_sta_title_pane_ParamLimits

0xbeda,	// (0x00022f12) bg_dt_sta_title_pane

0xdb46,	// (0x00024b7e) dt_sta_title_pane_g1

0xb6be,	// (0x000226f6) dt_sta_title_pane_t1_ParamLimits

0xb6be,	// (0x000226f6) dt_sta_title_pane_t1

0xb823,	// (0x0002285b) bg_dt_sta_control_pane

0xb6d3,	// (0x0002270b) dt_sta_controll_pane_g1

0x2cd6,	// (0x00019d0e) bg_dt_sta_title_pane_g1

0x2cdf,	// (0x00019d17) bg_dt_sta_title_pane_g2

0x2ce8,	// (0x00019d20) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x00026ec3) bg_dt_sta_title_pane_g

0xec1f,	// (0x00025c57) bg_dt_sta_indi_pane_g1

0x2cf1,	// (0x00019d29) dt_sta_signal_pane_g1

0x2cf9,	// (0x00019d31) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x00026eca) dt_sta_signal_pane_g

0x2d01,	// (0x00019d39) dt_sta_battery_pane_g1

0x2d0a,	// (0x00019d42) dt_sta_battery_pane_t1

0xec1f,	// (0x00025c57) bg_dt_sta_control_pane_g1

0xc490,	// (0x000234c8) fep_china_uni_eep_pane

0xc498,	// (0x000234d0) fep_china_uni_entry_pane_ParamLimits

0xc4a8,	// (0x000234e0) popup_fep_china_uni_window_g1_ParamLimits

0xc4b8,	// (0x000234f0) popup_fep_china_uni_window_g2_ParamLimits

0xc4b8,	// (0x000234f0) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002676d) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002676d) popup_fep_china_uni_window_g

0x2d19,	// (0x00019d51) fep_china_uni_eep_pane_g1

0x2d21,	// (0x00019d59) fep_china_uni_eep_pane_t1

0x2b2d,	// (0x00019b65) aid_touch_area_size_smil_player

0xcd54,	// (0x00023d8c) lc0_clock_pane

0xcd8d,	// (0x00023dc5) status_pane_g5_ParamLimits

0xcd8d,	// (0x00023dc5) status_pane_g5

0x8de2,	// (0x0001fe1a) popup_keymap_window

0xcd6d,	// (0x00023da5) status_icon_pane

0xb4e8,	// (0x00022520) cell_ai5_widget_pane_g3_ParamLimits

0xb507,	// (0x0002253f) cell_ai5_widget_pane_g4_ParamLimits

0xb513,	// (0x0002254b) cell_ai5_widget_pane_g5_ParamLimits

0xb537,	// (0x0002256f) cell_ai5_widget_pane_g8_ParamLimits

0xb537,	// (0x0002256f) cell_ai5_widget_pane_g8

0xb54b,	// (0x00022583) cell_ai5_widget_pane_g9_ParamLimits

0xb54b,	// (0x00022583) cell_ai5_widget_pane_g9

0xb55f,	// (0x00022597) cell_ai5_widget_pane_g10_ParamLimits

0xb55f,	// (0x00022597) cell_ai5_widget_pane_g10

0x2d30,	// (0x00019d68) status_icon_pane_g1

0xb823,	// (0x0002285b) bg_popup_sub_pane_cp13

0x2d38,	// (0x00019d70) popup_keymap_window_t1

0x8b18,	// (0x0001fb50) control_pane_g6_ParamLimits

0x8b18,	// (0x0001fb50) control_pane_g6

0x8b25,	// (0x0001fb5d) control_pane_g7_ParamLimits

0x8b25,	// (0x0001fb5d) control_pane_g7

0x8b32,	// (0x0001fb6a) control_pane_g8_ParamLimits

0x8b32,	// (0x0001fb6a) control_pane_g8

0xb681,	// (0x000226b9) dt_sta_controll_pane_ParamLimits

0xb68e,	// (0x000226c6) dt_sta_indi_pane_ParamLimits

0xb69b,	// (0x000226d3) dt_sta_title_pane_ParamLimits

0xbe1c,	// (0x00022e54) aid_size_touch_scroll_bar_cale

0x528b,	// (0x0001c2c3) popup_discreet_window_ParamLimits

0x528b,	// (0x0001c2c3) popup_discreet_window

0x8413,	// (0x0001f44b) popup_sk_window

0xd416,	// (0x0002444e) bg_popup_sub_pane_cp28_ParamLimits

0xd416,	// (0x0002444e) bg_popup_sub_pane_cp28

0x2d46,	// (0x00019d7e) popup_discreet_window_g1_ParamLimits

0x2d46,	// (0x00019d7e) popup_discreet_window_g1

0x2d66,	// (0x00019d9e) popup_discreet_window_t1_ParamLimits

0x2d66,	// (0x00019d9e) popup_discreet_window_t1

0x2d84,	// (0x00019dbc) popup_discreet_window_t2_ParamLimits

0x2d84,	// (0x00019dbc) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x00026ecf) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x00026ecf) popup_discreet_window_t

0x7126,	// (0x0001e15e) popup_sk_window_g1

0x7130,	// (0x0001e168) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x00026ed6) popup_sk_window_g

0x2de4,	// (0x00019e1c) popup_sk_window_t1

0x2dd6,	// (0x00019e0e) popup_sk_window_t1_copy1

0xb4d8,	// (0x00022510) cell_ai5_widget_pane_g2_ParamLimits

0xb60b,	// (0x00022643) cell_ai5_widget_pane_t9_ParamLimits

0xb60b,	// (0x00022643) cell_ai5_widget_pane_t9

0xb823,	// (0x0002285b) main_fep_fshwr2_pane

0xb6dc,	// (0x00022714) aid_fshwr2_btn_pane

0xb6e4,	// (0x0002271c) aid_fshwr2_syb_pane

0xb6ec,	// (0x00022724) aid_fshwr2_txt_pane

0xb6f4,	// (0x0002272c) fshwr2_func_candi_pane

0xb6fe,	// (0x00022736) fshwr2_hwr_syb_pane

0xb70c,	// (0x00022744) fshwr2_icf_pane

0xb823,	// (0x0002285b) fshwr2_icf_bg_pane

0xb716,	// (0x0002274e) fshwr2_icf_pane_t1_ParamLimits

0xb716,	// (0x0002274e) fshwr2_icf_pane_t1

0xec1f,	// (0x00025c57) fshwr2_func_candi_pane_g1

0x2e06,	// (0x00019e3e) fshwr2_func_candi_row_pane_ParamLimits

0x2e06,	// (0x00019e3e) fshwr2_func_candi_row_pane

0xb730,	// (0x00022768) cell_fshwr2_syb_pane_ParamLimits

0xb730,	// (0x00022768) cell_fshwr2_syb_pane

0xeea6,	// (0x00025ede) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) fshwr2_hwr_syb_pane_g1

0xb823,	// (0x0002285b) bg_popup_call_pane_cp01

0x2e17,	// (0x00019e4f) fshwr2_func_candi_cell_pane_ParamLimits

0x2e17,	// (0x00019e4f) fshwr2_func_candi_cell_pane

0x2e48,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2e48,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane

0x2e62,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x2e62,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1

0x2e82,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x2e82,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1

0xb823,	// (0x0002285b) bg_button_pane_cp08

0xc921,	// (0x00023959) cell_fshwr2_syb_bg_pane

0xb74a,	// (0x00022782) cell_fshwr2_syb_bg_pane_g1

0x2e95,	// (0x00019ecd) cell_fshwr2_syb_bg_pane_t1

0xbeda,	// (0x00022f12) main_tmo_pane

0x9ab2,	// (0x00020aea) uni_indicator_pane_g1_ParamLimits

0x9ac7,	// (0x00020aff) uni_indicator_pane_g2_ParamLimits

0x9adc,	// (0x00020b14) uni_indicator_pane_g3_ParamLimits

0xde0a,	// (0x00024e42) uni_indicator_pane_g4_ParamLimits

0xde0a,	// (0x00024e42) uni_indicator_pane_g4

0xde1e,	// (0x00024e56) uni_indicator_pane_g5_ParamLimits

0xde1e,	// (0x00024e56) uni_indicator_pane_g5

0xde32,	// (0x00024e6a) uni_indicator_pane_g6_ParamLimits

0xde32,	// (0x00024e6a) uni_indicator_pane_g6

0xf926,	// (0x0002695e) uni_indicator_pane_g_ParamLimits

0xa4a6,	// (0x000214de) popup_tmo_note_window_ParamLimits

0xa4a6,	// (0x000214de) popup_tmo_note_window

0xb823,	// (0x0002285b) fshwr2_bg_pane

0x2e73,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x2e73,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x00026edb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x00026edb) fshwr2_func_candi_cell_pane_g

0xec1f,	// (0x00025c57) bg_popup_window_pane_cp01

0x2ea4,	// (0x00019edc) bg_popup_window_pane_g1_cp01

0x2ead,	// (0x00019ee5) bg_popup_window_pane_cp22_ParamLimits

0x2ead,	// (0x00019ee5) bg_popup_window_pane_cp22

0x2ebb,	// (0x00019ef3) listscroll_tmo_link_pane_ParamLimits

0x2ebb,	// (0x00019ef3) listscroll_tmo_link_pane

0x2efb,	// (0x00019f33) popup_tmo_note_window_g1_ParamLimits

0x2efb,	// (0x00019f33) popup_tmo_note_window_g1

0x2f08,	// (0x00019f40) tmo_note_info_pane_ParamLimits

0x2f08,	// (0x00019f40) tmo_note_info_pane

0xb752,	// (0x0002278a) list_tmo_note_info_pane_g1_ParamLimits

0xb752,	// (0x0002278a) list_tmo_note_info_pane_g1

0x2f22,	// (0x00019f5a) list_tmo_note_info_pane_g2_ParamLimits

0x2f22,	// (0x00019f5a) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x00026ee0) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x00026ee0) list_tmo_note_info_pane_g

0x2f3e,	// (0x00019f76) list_tmo_note_info_text_pane_ParamLimits

0x2f3e,	// (0x00019f76) list_tmo_note_info_text_pane

0x2f80,	// (0x00019fb8) list_tmo_link_pane

0x2f8d,	// (0x00019fc5) scroll_pane_cp20

0x2f9a,	// (0x00019fd2) list_single_tmo_link_pane_ParamLimits

0x2f9a,	// (0x00019fd2) list_single_tmo_link_pane

0x2faa,	// (0x00019fe2) list_single_tmo_link_pane_t1

0x2fb8,	// (0x00019ff0) list_tmo_note_info_text_pane_t1_ParamLimits

0x2fb8,	// (0x00019ff0) list_tmo_note_info_text_pane_t1

0x87d8,	// (0x0001f810) aid_size_touch_scroll_bar_cp01_ParamLimits

0x87d8,	// (0x0001f810) aid_size_touch_scroll_bar_cp01

0x805d,	// (0x0001f095) aid_size_touch_slider_marker

0x8403,	// (0x0001f43b) popup_settings_window_ParamLimits

0x8403,	// (0x0001f43b) popup_settings_window

0x480f,	// (0x0001b847) popup_candi_list_indi_window

0xcca3,	// (0x00023cdb) aid_touch_navi_pane_ParamLimits

0x6295,	// (0x0001d2cd) rs_clock_indi_pane

0x629e,	// (0x0001d2d6) sctrl_sk_bottom_pane_ParamLimits

0x62af,	// (0x0001d2e7) sctrl_sk_top_pane_ParamLimits

0x6396,	// (0x0001d3ce) popup_fep_tooltip_window

0x2b67,	// (0x00019b9f) aid_size_cell_widget_grid_ParamLimits

0xb4cc,	// (0x00022504) cell_ai5_widget_pane_g1_ParamLimits

0xb4cc,	// (0x00022504) cell_ai5_widget_pane_g1

0xb51f,	// (0x00022557) cell_ai5_widget_pane_g6_ParamLimits

0xb52b,	// (0x00022563) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe26,	// (0x00026e5e) cell_ai5_widget_pane_g_ParamLimits

0xfe26,	// (0x00026e5e) cell_ai5_widget_pane_g

0xb62f,	// (0x00022667) cell_ai5_widget_pane_t10_ParamLimits

0xb62f,	// (0x00022667) cell_ai5_widget_pane_t10

0xb645,	// (0x0002267d) grid_ai5_widget_pane_ParamLimits

0x2c1e,	// (0x00019c56) cell_contacts_ai5_widget_pane_ParamLimits

0x2c1e,	// (0x00019c56) cell_contacts_ai5_widget_pane

0x2d99,	// (0x00019dd1) popup_discreet_window_t3_ParamLimits

0x2d99,	// (0x00019dd1) popup_discreet_window_t3

0x2df2,	// (0x00019e2a) popup_fshwr2_char_preview_window_ParamLimits

0x2df2,	// (0x00019e2a) popup_fshwr2_char_preview_window

0xb769,	// (0x000227a1) tmo_note_info_pane_t1

0xb77e,	// (0x000227b6) tmo_note_info_pane_t2

0xb797,	// (0x000227cf) tmo_note_info_pane_t3

0x2f5c,	// (0x00019f94) tmo_note_info_pane_t4

0x2f6e,	// (0x00019fa6) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x00026ee5) tmo_note_info_pane_t

0x2f80,	// (0x00019fb8) list_tmo_link_pane_ParamLimits

0x2f8d,	// (0x00019fc5) scroll_pane_cp20_ParamLimits

0xb823,	// (0x0002285b) bg_popup_fep_char_preview_window_cp01

0x2fd1,	// (0x0001a009) popup_fshwr2_char_preview_window_t1

0x2fdf,	// (0x0001a017) popup_candi_list_indi_window_g1

0x2fe8,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane

0x2ff4,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1

0x3008,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2

0x3017,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x00026ef0) cell_contacts_ai5_widget_pane_g

0x302a,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1

0xbeda,	// (0x00022f12) highlight_cell_shortcut_ai5_widget_pane_cp01

0x30a4,	// (0x0001a0dc) settings_container_pane

0xc921,	// (0x00023959) listscroll_set_pane_copy1

0xe60f,	// (0x00025647) scroll_pane_cp121_copy1

0x30b0,	// (0x0001a0e8) set_content_pane_copy1

0x30b8,	// (0x0001a0f0) aid_height_set_list_copy1_ParamLimits

0x30b8,	// (0x0001a0f0) aid_height_set_list_copy1

0xd9d2,	// (0x00024a0a) aid_size_parent_copy1_ParamLimits

0xd9d2,	// (0x00024a0a) aid_size_parent_copy1

0x30c4,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1_ParamLimits

0x30c4,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1

0xc031,	// (0x00023069) list_highlight_pane_cp2_copy1_ParamLimits

0xc031,	// (0x00023069) list_highlight_pane_cp2_copy1

0x30d8,	// (0x0001a110) list_set_pane_copy1_ParamLimits

0x30d8,	// (0x0001a110) list_set_pane_copy1

0x303f,	// (0x0001a077) main_pane_set_t1_copy1_ParamLimits

0x303f,	// (0x0001a077) main_pane_set_t1_copy1

0x3079,	// (0x0001a0b1) main_pane_set_t2_copy1_ParamLimits

0x3079,	// (0x0001a0b1) main_pane_set_t2_copy1

0x3185,	// (0x0001a1bd) main_pane_set_t3_copy1

0x3193,	// (0x0001a1cb) main_pane_set_t4_copy1

0x3098,	// (0x0001a0d0) set_content_pane_g1_copy1_ParamLimits

0x3098,	// (0x0001a0d0) set_content_pane_g1_copy1

0x31a1,	// (0x0001a1d9) setting_code_pane_copy1

0x31ab,	// (0x0001a1e3) setting_slider_graphic_pane_copy1

0x31ab,	// (0x0001a1e3) setting_slider_pane_copy1

0x31ab,	// (0x0001a1e3) setting_text_pane_copy1

0x31b5,	// (0x0001a1ed) setting_volume_pane_copy1

0x31be,	// (0x0001a1f6) settings_code_pane_cp2_copy1

0x31c6,	// (0x0001a1fe) settings_code_pane_cp_copy1_ParamLimits

0x31c6,	// (0x0001a1fe) settings_code_pane_cp_copy1

0x31da,	// (0x0001a212) volume_set_pane_copy1

0x31e2,	// (0x0001a21a) volume_set_pane_g10_copy1

0x31ea,	// (0x0001a222) volume_set_pane_g1_copy1

0x31f2,	// (0x0001a22a) volume_set_pane_g2_copy1

0x31fa,	// (0x0001a232) volume_set_pane_g3_copy1

0x3202,	// (0x0001a23a) volume_set_pane_g4_copy1

0x320a,	// (0x0001a242) volume_set_pane_g5_copy1

0x3212,	// (0x0001a24a) volume_set_pane_g6_copy1

0x321a,	// (0x0001a252) volume_set_pane_g7_copy1

0x3222,	// (0x0001a25a) volume_set_pane_g8_copy1

0x322a,	// (0x0001a262) volume_set_pane_g9_copy1

0xb893,	// (0x000228cb) bg_set_opt_pane_cp_copy1_ParamLimits

0xb893,	// (0x000228cb) bg_set_opt_pane_cp_copy1

0x3232,	// (0x0001a26a) setting_slider_pane_t1_copy1_ParamLimits

0x3232,	// (0x0001a26a) setting_slider_pane_t1_copy1

0x3250,	// (0x0001a288) setting_slider_pane_t2_copy1_ParamLimits

0x3250,	// (0x0001a288) setting_slider_pane_t2_copy1

0x326a,	// (0x0001a2a2) setting_slider_pane_t3_copy1_ParamLimits

0x326a,	// (0x0001a2a2) setting_slider_pane_t3_copy1

0x3282,	// (0x0001a2ba) slider_set_pane_copy1_ParamLimits

0x3282,	// (0x0001a2ba) slider_set_pane_copy1

0xbf41,	// (0x00022f79) set_opt_bg_pane_g1_copy2

0xbf49,	// (0x00022f81) set_opt_bg_pane_g2_copy2

0x32ac,	// (0x0001a2e4) set_opt_bg_pane_g3_copy2

0xbf59,	// (0x00022f91) set_opt_bg_pane_g4_copy2

0xbf61,	// (0x00022f99) set_opt_bg_pane_g5_copy2

0xbf69,	// (0x00022fa1) set_opt_bg_pane_g6_copy2

0x32b6,	// (0x0001a2ee) set_opt_bg_pane_g7_copy2

0x32be,	// (0x0001a2f6) set_opt_bg_pane_g8_copy2

0x32c8,	// (0x0001a300) set_opt_bg_pane_g9_copy2

0x7209,	// (0x0001e241) aid_size_touch_slider_mark_copy1_ParamLimits

0x7209,	// (0x0001e241) aid_size_touch_slider_mark_copy1

0x32d2,	// (0x0001a30a) slider_set_pane_g1_copy1

0x721d,	// (0x0001e255) slider_set_pane_g2_copy1

0x5d4f,	// (0x0001cd87) slider_set_pane_g3_copy1_ParamLimits

0x5d4f,	// (0x0001cd87) slider_set_pane_g3_copy1

0x5d63,	// (0x0001cd9b) slider_set_pane_g4_copy1_ParamLimits

0x5d63,	// (0x0001cd9b) slider_set_pane_g4_copy1

0x5d7b,	// (0x0001cdb3) slider_set_pane_g5_copy1_ParamLimits

0x5d7b,	// (0x0001cdb3) slider_set_pane_g5_copy1

0x5d4f,	// (0x0001cd87) slider_set_pane_g6_copy1_ParamLimits

0x5d4f,	// (0x0001cd87) slider_set_pane_g6_copy1

0x7225,	// (0x0001e25d) slider_set_pane_g7_copy1_ParamLimits

0x7225,	// (0x0001e25d) slider_set_pane_g7_copy1

0xb837,	// (0x0002286f) bg_set_opt_pane_cp2_copy1

0x32db,	// (0x0001a313) setting_slider_graphic_pane_g1_copy1

0x32e4,	// (0x0001a31c) setting_slider_graphic_pane_t1_copy1

0x32f4,	// (0x0001a32c) setting_slider_graphic_pane_t2_copy1

0x3304,	// (0x0001a33c) slider_set_pane_cp_copy1

0x3314,	// (0x0001a34c) input_focus_pane_cp1_copy1

0x331d,	// (0x0001a355) list_set_text_pane_copy1

0x3325,	// (0x0001a35d) setting_text_pane_g1_copy1

0x4ffe,	// (0x0001c036) set_text_pane_t1_copy1

0x3314,	// (0x0001a34c) input_focus_pane_cp2_copy1

0x3325,	// (0x0001a35d) setting_code_pane_g1_copy1

0x334b,	// (0x0001a383) setting_code_pane_t1_copy1

0x3298,	// (0x0001a2d0) list_set_graphic_pane_copy1

0xb837,	// (0x0002286f) bg_set_opt_pane_cp4_copy1

0xc623,	// (0x0002365b) list_set_graphic_pane_g1_copy1_ParamLimits

0xc623,	// (0x0002365b) list_set_graphic_pane_g1_copy1

0x3359,	// (0x0001a391) list_set_graphic_pane_g2_copy1

0xc63b,	// (0x00023673) list_set_graphic_pane_t1_copy1_ParamLimits

0xc63b,	// (0x00023673) list_set_graphic_pane_t1_copy1

0xec1f,	// (0x00025c57) rs_clock_indi_pane_g1

0x3361,	// (0x0001a399) rs_clock_indi_pane_t1

0x336f,	// (0x0001a3a7) rs_indi_pane

0x3377,	// (0x0001a3af) rs_indi_pane_g1

0x3380,	// (0x0001a3b8) rs_indi_pane_g2

0x3389,	// (0x0001a3c1) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x00026ef7) rs_indi_pane_g

0xc921,	// (0x00023959) bg_popup_preview_window_pane_cp03

0x3392,	// (0x0001a3ca) popup_fep_tooltip_window_t1

0x0205,	// (0x0001723d) popup_note2_window_g2_ParamLimits

0x0205,	// (0x0001723d) popup_note2_window_g2

0x0001,

0xfc5f,	// (0x00026c97) popup_note2_window_g_ParamLimits

0xfc5f,	// (0x00026c97) popup_note2_window_g

0x07e7,	// (0x0001781f) bg_popup_sub_pane_cp11_ParamLimits

0x07f4,	// (0x0001782c) cell_ai3_links_pane_g1_ParamLimits

0x080b,	// (0x00017843) cell_ai3_links_pane_t1

0x4ffe,	// (0x0001c036) set_text_pane_t1_copy1_ParamLimits

0xc830,	// (0x00023868) cell_graphic_popup_pane_cp2_ParamLimits

0xc830,	// (0x00023868) cell_graphic_popup_pane_cp2

0x33a0,	// (0x0001a3d8) cell_graphic_popup_pane_g1_cp2

0xbc2f,	// (0x00022c67) cell_graphic_popup_pane_g2_cp2

0x33a8,	// (0x0001a3e0) cell_graphic_popup_pane_g3_cp2

0x33b0,	// (0x0001a3e8) cell_graphic_popup_pane_t2_cp2

0xbc40,	// (0x00022c78) grid_highlight_pane_cp3_cp2

0xc1db,	// (0x00023213) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbeda,	// (0x00022f12) main_tmo_pane_ParamLimits

0xa49a,	// (0x000214d2) popup_tmo_big_image_note_window

0xb4bc,	// (0x000224f4) cell_ai5_widget_list_pane

0xb4c4,	// (0x000224fc) cell_ai5_widget_lrg_icon_pane

0xb769,	// (0x000227a1) tmo_note_info_pane_t1_ParamLimits

0xb77e,	// (0x000227b6) tmo_note_info_pane_t2_ParamLimits

0xb797,	// (0x000227cf) tmo_note_info_pane_t3_ParamLimits

0x2f5c,	// (0x00019f94) tmo_note_info_pane_t4_ParamLimits

0x2f6e,	// (0x00019fa6) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x00026ee5) tmo_note_info_pane_t_ParamLimits

0x30a4,	// (0x0001a0dc) settings_container_pane_ParamLimits

0x330c,	// (0x0001a344) indicator_popup_pane_cp5

0x330c,	// (0x0001a344) indicator_popup_pane_cp6

0x3298,	// (0x0001a2d0) list_set_graphic_pane_copy1_ParamLimits

0xb823,	// (0x0002285b) bg_popup_window_pane_cp23

0x33be,	// (0x0001a3f6) popup_tmo_big_image_note_window_g1

0x33c9,	// (0x0001a401) popup_tmo_big_image_note_window_t1

0x33d9,	// (0x0001a411) popup_tmo_big_image_note_window_t2

0x33e9,	// (0x0001a421) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x00026efe) popup_tmo_big_image_note_window_t

0xb7ac,	// (0x000227e4) cell_ai5_widget_lrg_icon_pane_g1

0xb7b4,	// (0x000227ec) cell_ai5_widget_lrg_icon_pane_t1

0xb7c2,	// (0x000227fa) cell_ai5_widget_list_row_pane_ParamLimits

0xb7c2,	// (0x000227fa) cell_ai5_widget_list_row_pane

0xb7db,	// (0x00022813) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb7db,	// (0x00022813) cell_ai5_widget_list_row_pane_g1

0xb7e8,	// (0x00022820) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb7e8,	// (0x00022820) cell_ai5_widget_list_row_pane_t1

0xb800,	// (0x00022838) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb800,	// (0x00022838) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecd,	// (0x00026f05) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x00026f05) cell_ai5_widget_list_row_pane_t

0xb823,	// (0x0002285b) main_fep_vtchi_ss_pane

0x33f9,	// (0x0001a431) popup_fep_char_pre_window

0x3401,	// (0x0001a439) popup_fep_ituss_window

0x3422,	// (0x0001a45a) popup_fep_vkbss_window

0x3441,	// (0x0001a479) grid_vkbss_keypad_pane_ParamLimits

0x3441,	// (0x0001a479) grid_vkbss_keypad_pane

0x3451,	// (0x0001a489) ituss_keypad_pane

0x3469,	// (0x0001a4a1) aid_vkbss_key_offset_ParamLimits

0x3469,	// (0x0001a4a1) aid_vkbss_key_offset

0x3475,	// (0x0001a4ad) cell_vkbss_key_pane_ParamLimits

0x3475,	// (0x0001a4ad) cell_vkbss_key_pane

0xd9c6,	// (0x000249fe) bg_cell_vkbss_key_g1_ParamLimits

0xd9c6,	// (0x000249fe) bg_cell_vkbss_key_g1

0x348b,	// (0x0001a4c3) cell_vkbss_key_3p_pane_ParamLimits

0x348b,	// (0x0001a4c3) cell_vkbss_key_3p_pane

0x34a5,	// (0x0001a4dd) cell_vkbss_key_g1_ParamLimits

0x34a5,	// (0x0001a4dd) cell_vkbss_key_g1

0x34bf,	// (0x0001a4f7) cell_vkbss_key_t1_ParamLimits

0x34bf,	// (0x0001a4f7) cell_vkbss_key_t1

0x34ea,	// (0x0001a522) cell_ituss_key_pane_ParamLimits

0x34ea,	// (0x0001a522) cell_ituss_key_pane

0x34fa,	// (0x0001a532) bg_cell_ituss_key_g1_ParamLimits

0x34fa,	// (0x0001a532) bg_cell_ituss_key_g1

0x3506,	// (0x0001a53e) cell_ituss_key_pane_g1_ParamLimits

0x3506,	// (0x0001a53e) cell_ituss_key_pane_g1

0x3512,	// (0x0001a54a) cell_ituss_key_pane_g2_ParamLimits

0x3512,	// (0x0001a54a) cell_ituss_key_pane_g2

0x0001,

0xfed2,	// (0x00026f0a) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x00026f0a) cell_ituss_key_pane_g

0x352b,	// (0x0001a563) cell_ituss_key_t1_ParamLimits

0x352b,	// (0x0001a563) cell_ituss_key_t1

0x3559,	// (0x0001a591) cell_ituss_key_t2_ParamLimits

0x3559,	// (0x0001a591) cell_ituss_key_t2

0x358a,	// (0x0001a5c2) cell_ituss_key_t3_ParamLimits

0x358a,	// (0x0001a5c2) cell_ituss_key_t3

0x35bb,	// (0x0001a5f3) cell_ituss_key_t4_ParamLimits

0x35bb,	// (0x0001a5f3) cell_ituss_key_t4

0x0003,

0xfed7,	// (0x00026f0f) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00026f0f) cell_ituss_key_t

0x35ec,	// (0x0001a624) cell_vkbss_key_3p_pane_g1

0x35f4,	// (0x0001a62c) cell_vkbss_key_3p_pane_g2

0x35fc,	// (0x0001a634) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00026f18) cell_vkbss_key_3p_pane_g

0xb823,	// (0x0002285b) bg_popup_fep_char_preview_window_cp02

0x3604,	// (0x0001a63c) popup_fep_char_pre_window_t1

0xb4b2,	// (0x000224ea) main_ai5_sk_pane

0x2fe8,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x2ff4,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3008,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3017,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x00026ef0) cell_contacts_ai5_widget_pane_g_ParamLimits

0x302a,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbeda,	// (0x00022f12) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb812,	// (0x0002284a) main_ai5_sk_pane_g1

0xd254,	// (0x0002428c) popup_query_code_window_g1

0x3417,	// (0x0001a44f) popup_fep_vkb_icf_pane

0x342b,	// (0x0001a463) popup_fep_vtchi_icf_pane

0xbeda,	// (0x00022f12) bg_icf_pane

0x3622,	// (0x0001a65a) list_vkb_icf_pane

0xbeda,	// (0x00022f12) bg_icf_pane_cp01

0x363a,	// (0x0001a672) vtchi_icf_list_pane

0x364a,	// (0x0001a682) list_vkb_icf_pane_t1_ParamLimits

0x364a,	// (0x0001a682) list_vkb_icf_pane_t1

0x3664,	// (0x0001a69c) vtchi_icf_list_pane_t1_ParamLimits

0x3664,	// (0x0001a69c) vtchi_icf_list_pane_t1

0x3401,	// (0x0001a439) popup_fep_ituss_window_ParamLimits

0x342b,	// (0x0001a463) popup_fep_vtchi_icf_pane_ParamLimits

0x3451,	// (0x0001a489) ituss_keypad_pane_ParamLimits

0x3460,	// (0x0001a498) ituss_sks_pane

0xbeda,	// (0x00022f12) bg_icf_pane_ParamLimits

0x3613,	// (0x0001a64b) icf_edit_indi_pane_ParamLimits

0x3613,	// (0x0001a64b) icf_edit_indi_pane

0x3622,	// (0x0001a65a) list_vkb_icf_pane_ParamLimits

0xbeda,	// (0x00022f12) bg_icf_pane_cp01_ParamLimits

0x362e,	// (0x0001a666) icf_edit_indi_pane_cp01_ParamLimits

0x362e,	// (0x0001a666) icf_edit_indi_pane_cp01

0x3642,	// (0x0001a67a) vtchi_query_pane

0xeea6,	// (0x00025ede) icf_edit_indi_pane_g1_ParamLimits

0xeea6,	// (0x00025ede) icf_edit_indi_pane_g1

0x368b,	// (0x0001a6c3) icf_edit_indi_pane_g2_ParamLimits

0x368b,	// (0x0001a6c3) icf_edit_indi_pane_g2

0x0001,

0xfee7,	// (0x00026f1f) icf_edit_indi_pane_g_ParamLimits

0xfee7,	// (0x00026f1f) icf_edit_indi_pane_g

0x3697,	// (0x0001a6cf) icf_edit_indi_pane_t1

0x36a5,	// (0x0001a6dd) bg_input_focus_pane_cp042

0xbe13,	// (0x00022e4b) vtchi_button_pane

0x36ae,	// (0x0001a6e6) vtchi_query_pane_t1

0x36bc,	// (0x0001a6f4) vtchi_query_pane_t2

0x36ca,	// (0x0001a702) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x00026f24) vtchi_query_pane_t

0xb823,	// (0x0002285b) bg_button_pane_cp13

0x36d8,	// (0x0001a710) vtchi_button_pane_g1

0x10c5,	// (0x000180fd) ituss_sks_pane_g1

0x36e0,	// (0x0001a718) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x00026f2b) ituss_sks_pane_g

0x36e9,	// (0x0001a721) ituss_sks_pane_t1

0x36f7,	// (0x0001a72f) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x00026f30) ituss_sks_pane_t

0xe8ec,	// (0x00025924) indicator_nsta_pane_cp_g1

0xe8f5,	// (0x0002592d) indicator_nsta_pane_cp_g2

0xe8fd,	// (0x00025935) indicator_nsta_pane_cp_g3

0xe905,	// (0x0002593d) indicator_nsta_pane_cp_g4

0xe90d,	// (0x00025945) indicator_nsta_pane_cp_g5

0xe915,	// (0x0002594d) indicator_nsta_pane_cp_g6

0x0005,

0xfaa9,	// (0x00026ae1) indicator_nsta_pane_cp_g

0xb24f,	// (0x00022287) cell_graphic2_pane_t2_ParamLimits

0xb24f,	// (0x00022287) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x00026de7) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x00026de7) cell_graphic2_pane_t

0xb285,	// (0x000222bd) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

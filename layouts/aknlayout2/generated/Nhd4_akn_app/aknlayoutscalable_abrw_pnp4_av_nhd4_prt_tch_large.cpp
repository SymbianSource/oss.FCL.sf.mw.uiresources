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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003d9e8 };

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
0xa976,	// (0x0004835e) Screen

0xa982,	// (0x0004836a) application_window_ParamLimits

0xa982,	// (0x0004836a) application_window

0x3cd0,	// (0x000416b8) screen_g1

0x8875,	// (0x0004625d) area_bottom_pane_ParamLimits

0x8875,	// (0x0004625d) area_bottom_pane

0x8935,	// (0x0004631d) area_top_pane_ParamLimits

0x8935,	// (0x0004631d) area_top_pane

0x89d3,	// (0x000463bb) main_pane_ParamLimits

0x89d3,	// (0x000463bb) main_pane

0x3cda,	// (0x000416c2) misc_graphics

0xbe4b,	// (0x00049833) battery_pane_ParamLimits

0xbe4b,	// (0x00049833) battery_pane

0x5e9e,	// (0x00043886) bg_status_flat_pane_g8

0x5ea6,	// (0x0004388e) bg_status_flat_pane_g9

0x55c5,	// (0x00042fad) context_pane_ParamLimits

0x55c5,	// (0x00042fad) context_pane

0xbf7f,	// (0x00049967) navi_pane_ParamLimits

0xbf7f,	// (0x00049967) navi_pane

0xc05c,	// (0x00049a44) signal_pane_ParamLimits

0xc05c,	// (0x00049a44) signal_pane

0x0008,

0xf88f,	// (0x0004d277) bg_status_flat_pane_g

0xc0c1,	// (0x00049aa9) status_pane_g1_ParamLimits

0xc0c1,	// (0x00049aa9) status_pane_g1

0x696d,	// (0x00044355) status_pane_g2_ParamLimits

0x696d,	// (0x00044355) status_pane_g2

0x562a,	// (0x00043012) status_pane_g3_ParamLimits

0x562a,	// (0x00043012) status_pane_g3

0x0004,

0xf7bd,	// (0x0004d1a5) status_pane_g_ParamLimits

0xf7bd,	// (0x0004d1a5) status_pane_g

0xc0d5,	// (0x00049abd) title_pane_ParamLimits

0xc0d5,	// (0x00049abd) title_pane

0xc112,	// (0x00049afa) uni_indicator_pane_ParamLimits

0xc112,	// (0x00049afa) uni_indicator_pane

0x53fe,	// (0x00042de6) bg_list_pane_ParamLimits

0x53fe,	// (0x00042de6) bg_list_pane

0xb1de,	// (0x00048bc6) find_pane

0xb1e6,	// (0x00048bce) listscroll_app_pane_ParamLimits

0xb1e6,	// (0x00048bce) listscroll_app_pane

0x541e,	// (0x00042e06) listscroll_form_pane

0xb1f2,	// (0x00048bda) listscroll_gen_pane_ParamLimits

0xb1f2,	// (0x00048bda) listscroll_gen_pane

0x541e,	// (0x00042e06) listscroll_set_pane

0xaecb,	// (0x000488b3) main_idle_act_pane

0x51ec,	// (0x00042bd4) main_idle_trad_pane

0x51ec,	// (0x00042bd4) main_list_empty_pane

0x48fc,	// (0x000422e4) main_midp_pane

0x5438,	// (0x00042e20) main_pane_g1_ParamLimits

0x5438,	// (0x00042e20) main_pane_g1

0xb206,	// (0x00048bee) popup_ai_message_window_ParamLimits

0xb206,	// (0x00048bee) popup_ai_message_window

0xb9ed,	// (0x000493d5) popup_fep_china_uni_window_ParamLimits

0xb9ed,	// (0x000493d5) popup_fep_china_uni_window

0x546a,	// (0x00042e52) popup_fep_japan_candidate_window_ParamLimits

0x546a,	// (0x00042e52) popup_fep_japan_candidate_window

0x5488,	// (0x00042e70) popup_fep_japan_predictive_window_ParamLimits

0x5488,	// (0x00042e70) popup_fep_japan_predictive_window

0xba47,	// (0x0004942f) popup_find_window

0xba54,	// (0x0004943c) popup_grid_graphic_window_ParamLimits

0xba54,	// (0x0004943c) popup_grid_graphic_window

0x54b8,	// (0x00042ea0) popup_large_graphic_colour_window

0xba7a,	// (0x00049462) popup_menu_window_ParamLimits

0xba7a,	// (0x00049462) popup_menu_window

0xbc34,	// (0x0004961c) popup_note_image_window

0xbc20,	// (0x00049608) popup_note_wait_window_ParamLimits

0xbc20,	// (0x00049608) popup_note_wait_window

0xbc20,	// (0x00049608) popup_note_window_ParamLimits

0xbc20,	// (0x00049608) popup_note_window

0xbc8a,	// (0x00049672) popup_query_code_window_ParamLimits

0xbc8a,	// (0x00049672) popup_query_code_window

0x54de,	// (0x00042ec6) popup_query_data_code_window_ParamLimits

0x54de,	// (0x00042ec6) popup_query_data_code_window

0xbc9e,	// (0x00049686) popup_query_data_window_ParamLimits

0xbc9e,	// (0x00049686) popup_query_data_window

0xbcb6,	// (0x0004969e) popup_query_sat_info_window_ParamLimits

0xbcb6,	// (0x0004969e) popup_query_sat_info_window

0xbcef,	// (0x000496d7) popup_snote_single_graphic_window_ParamLimits

0xbcef,	// (0x000496d7) popup_snote_single_graphic_window

0xbcef,	// (0x000496d7) popup_snote_single_text_window_ParamLimits

0xbcef,	// (0x000496d7) popup_snote_single_text_window

0x54f5,	// (0x00042edd) popup_sub_window_general

0x553b,	// (0x00042f23) popup_window_general_ParamLimits

0x553b,	// (0x00042f23) popup_window_general

0x5550,	// (0x00042f38) power_save_pane

0x9698,	// (0x00047080) control_pane_g1_ParamLimits

0x9698,	// (0x00047080) control_pane_g1

0x96bf,	// (0x000470a7) control_pane_g2_ParamLimits

0x96bf,	// (0x000470a7) control_pane_g2

0x53e0,	// (0x00042dc8) control_pane_g3_ParamLimits

0x53e0,	// (0x00042dc8) control_pane_g3

0x0007,

0xf7a5,	// (0x0004d18d) control_pane_g_ParamLimits

0xf7a5,	// (0x0004d18d) control_pane_g

0x9703,	// (0x000470eb) control_pane_t1_ParamLimits

0x9703,	// (0x000470eb) control_pane_t1

0x974f,	// (0x00047137) control_pane_t2_ParamLimits

0x974f,	// (0x00047137) control_pane_t2

0x0002,

0xf7b6,	// (0x0004d19e) control_pane_t_ParamLimits

0xf7b6,	// (0x0004d19e) control_pane_t

0x5301,	// (0x00042ce9) navi_navi_volume_pane_cp1

0x530a,	// (0x00042cf2) status_small_icon_pane

0x5312,	// (0x00042cfa) status_small_pane_g1_ParamLimits

0x5312,	// (0x00042cfa) status_small_pane_g1

0x5346,	// (0x00042d2e) status_small_pane_g2_ParamLimits

0x5346,	// (0x00042d2e) status_small_pane_g2

0x5352,	// (0x00042d3a) status_small_pane_g3_ParamLimits

0x5352,	// (0x00042d3a) status_small_pane_g3

0x535e,	// (0x00042d46) status_small_pane_g4_ParamLimits

0x535e,	// (0x00042d46) status_small_pane_g4

0x536a,	// (0x00042d52) status_small_pane_g5_ParamLimits

0x536a,	// (0x00042d52) status_small_pane_g5

0x5379,	// (0x00042d61) status_small_pane_g6_ParamLimits

0x5379,	// (0x00042d61) status_small_pane_g6

0x0007,

0xf794,	// (0x0004d17c) status_small_pane_g_ParamLimits

0xf794,	// (0x0004d17c) status_small_pane_g

0x53a9,	// (0x00042d91) status_small_pane_t1

0x53cc,	// (0x00042db4) status_small_wait_pane_ParamLimits

0x53cc,	// (0x00042db4) status_small_wait_pane

0xaf97,	// (0x0004897f) aid_levels_signal_ParamLimits

0xaf97,	// (0x0004897f) aid_levels_signal

0xafa9,	// (0x00048991) signal_pane_g1_ParamLimits

0xafa9,	// (0x00048991) signal_pane_g1

0xafbe,	// (0x000489a6) signal_pane_g2_ParamLimits

0xafbe,	// (0x000489a6) signal_pane_g2

0x0001,

0xf729,	// (0x0004d111) signal_pane_g_ParamLimits

0xf729,	// (0x0004d111) signal_pane_g

0x4d30,	// (0x00042718) context_pane_g1

0xa992,	// (0x0004837a) title_pane_g1

0xa9bc,	// (0x000483a4) title_pane_t1

0x3cf0,	// (0x000416d8) title_pane_t2

0x3d16,	// (0x000416fe) title_pane_t3

0x0002,

0xf573,	// (0x0004cf5b) title_pane_t

0xc12a,	// (0x00049b12) aid_levels_battery_ParamLimits

0xc12a,	// (0x00049b12) aid_levels_battery

0xc13e,	// (0x00049b26) battery_pane_g1_ParamLimits

0xc13e,	// (0x00049b26) battery_pane_g1

0xc154,	// (0x00049b3c) battery_pane_g2_ParamLimits

0xc154,	// (0x00049b3c) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004d1b0) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004d1b0) battery_pane_g

0xc3e6,	// (0x00049dce) uni_indicator_pane_g1

0xc3fb,	// (0x00049de3) uni_indicator_pane_g2

0xc411,	// (0x00049df9) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004d31f) uni_indicator_pane_g

0x505c,	// (0x00042a44) navi_icon_pane_ParamLimits

0x505c,	// (0x00042a44) navi_icon_pane

0x4fa3,	// (0x0004298b) navi_midp_pane

0x5078,	// (0x00042a60) navi_navi_pane

0x5082,	// (0x00042a6a) navi_text_pane_ParamLimits

0x5082,	// (0x00042a6a) navi_text_pane

0x3cd0,	// (0x000416b8) status_small_wait_pane_g1

0x41f7,	// (0x00041bdf) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004d31a) status_small_wait_pane_g

0xc38b,	// (0x00049d73) navi_navi_icon_text_pane

0xc393,	// (0x00049d7b) navi_navi_pane_g1_ParamLimits

0xc393,	// (0x00049d7b) navi_navi_pane_g1

0xc3a5,	// (0x00049d8d) navi_navi_pane_g2_ParamLimits

0xc3a5,	// (0x00049d8d) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004d2e8) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004d2e8) navi_navi_pane_g

0x643f,	// (0x00043e27) navi_navi_tabs_pane

0xc3b7,	// (0x00049d9f) navi_navi_text_pane

0xc38b,	// (0x00049d73) navi_navi_volume_pane

0xc376,	// (0x00049d5e) navi_text_pane_t1

0xc367,	// (0x00049d4f) navi_icon_pane_g1

0x6380,	// (0x00043d68) navi_navi_text_pane_t1

0x9a77,	// (0x0004745f) navi_navi_volume_pane_g1

0x9a7f,	// (0x00047467) volume_small_pane

0xc2d9,	// (0x00049cc1) navi_navi_icon_text_pane_g1

0xc2e1,	// (0x00049cc9) navi_navi_icon_text_pane_t1

0x5078,	// (0x00042a60) navi_tabs_2_long_pane

0x5078,	// (0x00042a60) navi_tabs_2_pane

0x5078,	// (0x00042a60) navi_tabs_3_long_pane

0x5078,	// (0x00042a60) navi_tabs_3_pane

0x5078,	// (0x00042a60) navi_tabs_4_pane

0x9a57,	// (0x0004743f) tabs_2_active_pane_ParamLimits

0x9a57,	// (0x0004743f) tabs_2_active_pane

0x9a67,	// (0x0004744f) tabs_2_passive_pane_ParamLimits

0x9a67,	// (0x0004744f) tabs_2_passive_pane

0x9a25,	// (0x0004740d) tabs_3_active_pane_ParamLimits

0x9a25,	// (0x0004740d) tabs_3_active_pane

0x9a35,	// (0x0004741d) tabs_3_passive_pane_ParamLimits

0x9a35,	// (0x0004741d) tabs_3_passive_pane

0x9a46,	// (0x0004742e) tabs_3_passive_pane_cp_ParamLimits

0x9a46,	// (0x0004742e) tabs_3_passive_pane_cp

0x99e1,	// (0x000473c9) tabs_4_active_pane_ParamLimits

0x99e1,	// (0x000473c9) tabs_4_active_pane

0x99f2,	// (0x000473da) tabs_4_passive_pane_ParamLimits

0x99f2,	// (0x000473da) tabs_4_passive_pane

0x9a03,	// (0x000473eb) tabs_4_passive_pane_cp_ParamLimits

0x9a03,	// (0x000473eb) tabs_4_passive_pane_cp

0x9a14,	// (0x000473fc) tabs_4_passive_pane_cp2_ParamLimits

0x9a14,	// (0x000473fc) tabs_4_passive_pane_cp2

0x99bd,	// (0x000473a5) tabs_2_long_active_pane_ParamLimits

0x99bd,	// (0x000473a5) tabs_2_long_active_pane

0x99cf,	// (0x000473b7) tabs_2_long_passive_pane_ParamLimits

0x99cf,	// (0x000473b7) tabs_2_long_passive_pane

0x9978,	// (0x00047360) tabs_3_long_active_pane_ParamLimits

0x9978,	// (0x00047360) tabs_3_long_active_pane

0x9991,	// (0x00047379) tabs_3_long_passive_pane_ParamLimits

0x9991,	// (0x00047379) tabs_3_long_passive_pane

0x99a4,	// (0x0004738c) tabs_3_long_passive_pane_cp_ParamLimits

0x99a4,	// (0x0004738c) tabs_3_long_passive_pane_cp

0x991e,	// (0x00047306) volume_small_pane_g1

0x9927,	// (0x0004730f) volume_small_pane_g2

0x9930,	// (0x00047318) volume_small_pane_g3

0x9939,	// (0x00047321) volume_small_pane_g4

0x9942,	// (0x0004732a) volume_small_pane_g5

0x994b,	// (0x00047333) volume_small_pane_g6

0x9954,	// (0x0004733c) volume_small_pane_g7

0x995d,	// (0x00047345) volume_small_pane_g8

0x9966,	// (0x0004734e) volume_small_pane_g9

0x996f,	// (0x00047357) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004d2b4) volume_small_pane_g

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp2_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp2

0xaa24,	// (0x0004840c) tabs_3_active_pane_g1

0xaa2c,	// (0x00048414) tabs_3_active_pane_t1

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp2_ParamLimits

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp2

0xaa24,	// (0x0004840c) tabs_3_passive_pane_g1

0xaa2c,	// (0x00048414) tabs_3_passive_pane_t1

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp3_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp3

0xaa3e,	// (0x00048426) tabs_4_active_pane_g1

0xaa46,	// (0x0004842e) tabs_4_active_pane_t1

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp3_ParamLimits

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp3

0xaa3e,	// (0x00048426) tabs_4_1_passive_pane_g1

0xaa46,	// (0x0004842e) tabs_4_1_passive_pane_t1

0x48fc,	// (0x000422e4) list_highlight_pane_cp2

0xc489,	// (0x00049e71) list_set_pane_ParamLimits

0xc489,	// (0x00049e71) list_set_pane

0xc52b,	// (0x00049f13) main_pane_set_t1_ParamLimits

0xc52b,	// (0x00049f13) main_pane_set_t1

0xc54b,	// (0x00049f33) main_pane_set_t2_ParamLimits

0xc54b,	// (0x00049f33) main_pane_set_t2

0xc55f,	// (0x00049f47) main_pane_set_t3_ParamLimits

0xc55f,	// (0x00049f47) main_pane_set_t3

0xc571,	// (0x00049f59) main_pane_set_t4_ParamLimits

0xc571,	// (0x00049f59) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004d384) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004d384) main_pane_set_t

0xc583,	// (0x00049f6b) setting_code_pane

0xc58d,	// (0x00049f75) setting_slider_graphic_pane

0xc58d,	// (0x00049f75) setting_slider_pane

0xc58d,	// (0x00049f75) setting_text_pane

0xc58d,	// (0x00049f75) setting_volume_pane

0x8c04,	// (0x000465ec) volume_set_pane

0x3d36,	// (0x0004171e) bg_set_opt_pane_cp

0x8c0c,	// (0x000465f4) setting_slider_pane_t1

0x8c25,	// (0x0004660d) setting_slider_pane_t2

0x8c3e,	// (0x00046626) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004cf62) setting_slider_pane_t

0x8c55,	// (0x0004663d) slider_set_pane

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp2

0x3d44,	// (0x0004172c) setting_slider_graphic_pane_g1

0x8c6b,	// (0x00046653) setting_slider_graphic_pane_t1

0x8c7a,	// (0x00046662) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004cf69) setting_slider_graphic_pane_t

0x8c89,	// (0x00046671) slider_set_pane_cp

0x3cda,	// (0x000416c2) input_focus_pane_cp1

0x6888,	// (0x00044270) list_set_text_pane

0x3cd0,	// (0x000416b8) setting_text_pane_g1

0x3cda,	// (0x000416c2) input_focus_pane_cp2

0x3cd0,	// (0x000416b8) setting_code_pane_g1

0x3d4d,	// (0x00041735) setting_code_pane_t1

0x8c91,	// (0x00046679) set_text_pane_t1_ParamLimits

0x8c91,	// (0x00046679) set_text_pane_t1

0x480c,	// (0x000421f4) set_opt_bg_pane_g1

0x4814,	// (0x000421fc) set_opt_bg_pane_g2

0x6868,	// (0x00044250) set_opt_bg_pane_g3

0x4824,	// (0x0004220c) set_opt_bg_pane_g4

0x482c,	// (0x00042214) set_opt_bg_pane_g5

0x4834,	// (0x0004221c) set_opt_bg_pane_g6

0x6870,	// (0x00044258) set_opt_bg_pane_g7

0x6878,	// (0x00044260) set_opt_bg_pane_g8

0x6880,	// (0x00044268) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004d371) set_opt_bg_pane_g

0x685b,	// (0x00044243) slider_set_pane_g1

0x9aec,	// (0x000474d4) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004d362) slider_set_pane_g

0x9a88,	// (0x00047470) volume_set_pane_g1

0x9a90,	// (0x00047478) volume_set_pane_g2

0x9a98,	// (0x00047480) volume_set_pane_g3

0x9aa0,	// (0x00047488) volume_set_pane_g4

0x9aa8,	// (0x00047490) volume_set_pane_g5

0x9ab0,	// (0x00047498) volume_set_pane_g6

0x9ab8,	// (0x000474a0) volume_set_pane_g7

0x9ac0,	// (0x000474a8) volume_set_pane_g8

0x9ac8,	// (0x000474b0) volume_set_pane_g9

0x9ad0,	// (0x000474b8) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004d33a) volume_set_pane_g

0xaa58,	// (0x00048440) indicator_pane_ParamLimits

0xaa58,	// (0x00048440) indicator_pane

0xaa64,	// (0x0004844c) main_idle_pane_g2_ParamLimits

0xaa64,	// (0x0004844c) main_idle_pane_g2

0xaa8c,	// (0x00048474) main_pane_idle_g1_ParamLimits

0xaa8c,	// (0x00048474) main_pane_idle_g1

0x3d5b,	// (0x00041743) popup_clock_digital_analogue_window_ParamLimits

0x3d5b,	// (0x00041743) popup_clock_digital_analogue_window

0xaa99,	// (0x00048481) soft_indicator_pane_ParamLimits

0xaa99,	// (0x00048481) soft_indicator_pane

0xaaa5,	// (0x0004848d) wallpaper_pane_ParamLimits

0xaaa5,	// (0x0004848d) wallpaper_pane

0x3cd0,	// (0x000416b8) wallpaper_pane_g1

0xaab1,	// (0x00048499) indicator_pane_g1_ParamLimits

0xaab1,	// (0x00048499) indicator_pane_g1

0x69db,	// (0x000443c3) navi_navi_icon_text_pane_srt_g1

0x3d89,	// (0x00041771) soft_indicator_pane_t1

0x3da3,	// (0x0004178b) aid_ps_area_pane

0xaabd,	// (0x000484a5) aid_ps_clock_pane

0x3db4,	// (0x0004179c) aid_ps_indicator_pane

0x3dc0,	// (0x000417a8) indicator_ps_pane_ParamLimits

0x3dc0,	// (0x000417a8) indicator_ps_pane

0x3dcf,	// (0x000417b7) power_save_pane_g1_ParamLimits

0x3dcf,	// (0x000417b7) power_save_pane_g1

0x3ddb,	// (0x000417c3) power_save_pane_g2_ParamLimits

0x3ddb,	// (0x000417c3) power_save_pane_g2

0x8829,	// (0x00046211) aid_navinavi_width_pane

0x3da3,	// (0x0004178b) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004cf6e) power_save_pane_g_ParamLimits

0xf586,	// (0x0004cf6e) power_save_pane_g

0x3de9,	// (0x000417d1) power_save_pane_t1_ParamLimits

0x3de9,	// (0x000417d1) power_save_pane_t1

0xaabd,	// (0x000484a5) aid_ps_clock_pane_ParamLimits

0x3db4,	// (0x0004179c) aid_ps_indicator_pane_ParamLimits

0x3dfb,	// (0x000417e3) power_save_pane_t4_ParamLimits

0x3dfb,	// (0x000417e3) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004cf73) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004cf73) power_save_pane_t

0x3e25,	// (0x0004180d) power_save_t3_ParamLimits

0x3e25,	// (0x0004180d) power_save_t3

0x3e10,	// (0x000417f8) power_save_t2_ParamLimits

0x3e10,	// (0x000417f8) power_save_t2

0x3e3a,	// (0x00041822) indicator_ps_pane_g1

0xaacb,	// (0x000484b3) ai_gene_pane_ParamLimits

0xaacb,	// (0x000484b3) ai_gene_pane

0xaad7,	// (0x000484bf) ai_links_pane_ParamLimits

0xaad7,	// (0x000484bf) ai_links_pane

0xaae3,	// (0x000484cb) indicator_pane_cp1_ParamLimits

0xaae3,	// (0x000484cb) indicator_pane_cp1

0xaaef,	// (0x000484d7) main_pane_idle_g1_cp_ParamLimits

0xaaef,	// (0x000484d7) main_pane_idle_g1_cp

0x3e43,	// (0x0004182b) popup_ai_links_title_window

0xaafb,	// (0x000484e3) soft_indicator_pane_cp1_ParamLimits

0xaafb,	// (0x000484e3) soft_indicator_pane_cp1

0x66af,	// (0x00044097) ai_links_pane_g1

0x66b8,	// (0x000440a0) grid_ai_links_pane

0xc3db,	// (0x00049dc3) ai_gene_pane_1

0x669d,	// (0x00044085) ai_gene_pane_2

0x66a6,	// (0x0004408e) list_highlight_pane_cp4

0xc3bf,	// (0x00049da7) cell_ai_link_pane_ParamLimits

0xc3bf,	// (0x00049da7) cell_ai_link_pane

0x6695,	// (0x0004407d) cell_ai_link_pane_g1

0x41f7,	// (0x00041bdf) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004d315) cell_ai_link_pane_g

0x3cda,	// (0x000416c2) grid_highlight_cp2

0x3cda,	// (0x000416c2) bg_popup_sub_pane_cp1

0x3e5a,	// (0x00041842) popup_ai_links_title_window_t1

0x65e3,	// (0x00043fcb) ai_gene_pane_1_g1_ParamLimits

0x65e3,	// (0x00043fcb) ai_gene_pane_1_g1

0x65ef,	// (0x00043fd7) ai_gene_pane_1_g2_ParamLimits

0x65ef,	// (0x00043fd7) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004d30b) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004d30b) ai_gene_pane_1_g

0x65fc,	// (0x00043fe4) ai_gene_pane_1_t1_ParamLimits

0x65fc,	// (0x00043fe4) ai_gene_pane_1_t1

0x6630,	// (0x00044018) grid_ai_soft_ind_pane

0x65ce,	// (0x00043fb6) ai_gene_pane_2_t1_ParamLimits

0x65ce,	// (0x00043fb6) ai_gene_pane_2_t1

0xab07,	// (0x000484ef) main_pane_empty_t1_ParamLimits

0xab07,	// (0x000484ef) main_pane_empty_t1

0xab1f,	// (0x00048507) main_pane_empty_t2_ParamLimits

0xab1f,	// (0x00048507) main_pane_empty_t2

0xab34,	// (0x0004851c) main_pane_empty_t3_ParamLimits

0xab34,	// (0x0004851c) main_pane_empty_t3

0xab46,	// (0x0004852e) main_pane_empty_t4_ParamLimits

0xab46,	// (0x0004852e) main_pane_empty_t4

0xab58,	// (0x00048540) main_pane_empty_t5_ParamLimits

0xab58,	// (0x00048540) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004cf78) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004cf78) main_pane_empty_t

0x485d,	// (0x00042245) bg_popup_window_pane_ParamLimits

0x485d,	// (0x00042245) bg_popup_window_pane

0x638e,	// (0x00043d76) find_popup_pane_cp2_ParamLimits

0x638e,	// (0x00043d76) find_popup_pane_cp2

0x639a,	// (0x00043d82) heading_pane_ParamLimits

0x639a,	// (0x00043d82) heading_pane

0x3cda,	// (0x000416c2) bg_popup_sub_pane

0xc2fb,	// (0x00049ce3) bg_popup_window_pane_g1_ParamLimits

0xc2fb,	// (0x00049ce3) bg_popup_window_pane_g1

0xc307,	// (0x00049cef) bg_popup_window_pane_g2_ParamLimits

0xc307,	// (0x00049cef) bg_popup_window_pane_g2

0xc313,	// (0x00049cfb) bg_popup_window_pane_g3_ParamLimits

0xc313,	// (0x00049cfb) bg_popup_window_pane_g3

0xc31f,	// (0x00049d07) bg_popup_window_pane_g4_ParamLimits

0xc31f,	// (0x00049d07) bg_popup_window_pane_g4

0xc32b,	// (0x00049d13) bg_popup_window_pane_g5_ParamLimits

0xc32b,	// (0x00049d13) bg_popup_window_pane_g5

0xc337,	// (0x00049d1f) bg_popup_window_pane_g6_ParamLimits

0xc337,	// (0x00049d1f) bg_popup_window_pane_g6

0xc343,	// (0x00049d2b) bg_popup_window_pane_g7_ParamLimits

0xc343,	// (0x00049d2b) bg_popup_window_pane_g7

0xc34f,	// (0x00049d37) bg_popup_window_pane_g8_ParamLimits

0xc34f,	// (0x00049d37) bg_popup_window_pane_g8

0xc35b,	// (0x00049d43) bg_popup_window_pane_g9_ParamLimits

0xc35b,	// (0x00049d43) bg_popup_window_pane_g9

0x6374,	// (0x00043d5c) bg_popup_window_pane_g10_ParamLimits

0x6374,	// (0x00043d5c) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004d2d3) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004d2d3) bg_popup_window_pane_g

0x632b,	// (0x00043d13) bg_popup_heading_pane_ParamLimits

0x632b,	// (0x00043d13) bg_popup_heading_pane

0x9b74,	// (0x0004755c) tabs_4_passive_pane_cp_srt_ParamLimits

0x9b74,	// (0x0004755c) tabs_4_passive_pane_cp_srt

0x9b86,	// (0x0004756e) tabs_4_passive_pane_srt_ParamLimits

0x633f,	// (0x00043d27) heading_pane_g2

0x9b86,	// (0x0004756e) tabs_4_passive_pane_srt

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp3_srt

0x6347,	// (0x00043d2f) heading_pane_t1_ParamLimits

0x6347,	// (0x00043d2f) heading_pane_t1

0x635e,	// (0x00043d46) heading_pane_t2_ParamLimits

0x635e,	// (0x00043d46) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004d2ce) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004d2ce) heading_pane_t

0x5e66,	// (0x0004384e) bg_popup_heading_pane_g1

0x5ef7,	// (0x000438df) bg_popup_heading_pane_g2

0x5f01,	// (0x000438e9) bg_popup_heading_pane_g3

0x5f0b,	// (0x000438f3) bg_popup_heading_pane_g4

0x5f15,	// (0x000438fd) bg_popup_heading_pane_g5

0x5f1f,	// (0x00043907) bg_popup_heading_pane_g6

0x5f27,	// (0x0004390f) bg_popup_heading_pane_g7

0x5f2f,	// (0x00043917) bg_popup_heading_pane_g8

0x5f39,	// (0x00043921) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004d28a) bg_popup_heading_pane_g

0x572c,	// (0x00043114) bg_popup_sub_pane_g1

0x5734,	// (0x0004311c) bg_popup_sub_pane_g2

0x573c,	// (0x00043124) bg_popup_sub_pane_g3

0x5744,	// (0x0004312c) bg_popup_sub_pane_g4

0x574c,	// (0x00043134) bg_popup_sub_pane_g5

0x5754,	// (0x0004313c) bg_popup_sub_pane_g6

0x575c,	// (0x00043144) bg_popup_sub_pane_g7

0x5764,	// (0x0004314c) bg_popup_sub_pane_g8

0x576c,	// (0x00043154) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004d264) bg_popup_sub_pane_g

0x3d28,	// (0x00041710) bg_popup_window_pane_cp5_ParamLimits

0x3d28,	// (0x00041710) bg_popup_window_pane_cp5

0x407d,	// (0x00041a65) popup_note_window_g1_ParamLimits

0x407d,	// (0x00041a65) popup_note_window_g1

0x4089,	// (0x00041a71) popup_note_window_t1_ParamLimits

0x4089,	// (0x00041a71) popup_note_window_t1

0x409b,	// (0x00041a83) popup_note_window_t2_ParamLimits

0x409b,	// (0x00041a83) popup_note_window_t2

0x40ad,	// (0x00041a95) popup_note_window_t3_ParamLimits

0x40ad,	// (0x00041a95) popup_note_window_t3

0x40bf,	// (0x00041aa7) popup_note_window_t4_ParamLimits

0x40bf,	// (0x00041aa7) popup_note_window_t4

0x40e7,	// (0x00041acf) popup_note_window_t5_ParamLimits

0x40e7,	// (0x00041acf) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004cf83) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004cf83) popup_note_window_t

0x410b,	// (0x00041af3) bg_popup_window_pane_cp6_ParamLimits

0x410b,	// (0x00041af3) bg_popup_window_pane_cp6

0x5dda,	// (0x000437c2) popup_note_image_window_g1_ParamLimits

0x5dda,	// (0x000437c2) popup_note_image_window_g1

0x5de6,	// (0x000437ce) popup_note_image_window_g2_ParamLimits

0x5de6,	// (0x000437ce) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004d258) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004d258) popup_note_image_window_g

0x5dff,	// (0x000437e7) popup_note_image_window_t1_ParamLimits

0x5dff,	// (0x000437e7) popup_note_image_window_t1

0x5e18,	// (0x00043800) popup_note_image_window_t2_ParamLimits

0x5e18,	// (0x00043800) popup_note_image_window_t2

0x5e31,	// (0x00043819) popup_note_image_window_t3_ParamLimits

0x5e31,	// (0x00043819) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004d25d) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004d25d) popup_note_image_window_t

0x5cb7,	// (0x0004369f) bg_popup_window_pane_cp7_ParamLimits

0x5cb7,	// (0x0004369f) bg_popup_window_pane_cp7

0x5ce7,	// (0x000436cf) popup_note_wait_window_g1_ParamLimits

0x5ce7,	// (0x000436cf) popup_note_wait_window_g1

0x5cf3,	// (0x000436db) popup_note_wait_window_g2_ParamLimits

0x5cf3,	// (0x000436db) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004d246) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004d246) popup_note_wait_window_g

0x5d0b,	// (0x000436f3) popup_note_wait_window_t1_ParamLimits

0x5d0b,	// (0x000436f3) popup_note_wait_window_t1

0x5d32,	// (0x0004371a) popup_note_wait_window_t2_ParamLimits

0x5d32,	// (0x0004371a) popup_note_wait_window_t2

0x5d4f,	// (0x00043737) popup_note_wait_window_t3_ParamLimits

0x5d4f,	// (0x00043737) popup_note_wait_window_t3

0x5d62,	// (0x0004374a) popup_note_wait_window_t4_ParamLimits

0x5d62,	// (0x0004374a) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004d24d) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004d24d) popup_note_wait_window_t

0x5d87,	// (0x0004376f) wait_bar_pane_ParamLimits

0x5d87,	// (0x0004376f) wait_bar_pane

0x3cda,	// (0x000416c2) wait_anim_pane

0x3cda,	// (0x000416c2) wait_border_pane

0x3cd0,	// (0x000416b8) wait_anim_pane_g1

0x3cd0,	// (0x000416b8) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0004d10c) wait_anim_pane_g

0x5c5b,	// (0x00043643) wait_border_pane_g1

0x5c66,	// (0x0004364e) wait_border_pane_g2

0x5c6f,	// (0x00043657) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004d23f) wait_border_pane_g

0x5acb,	// (0x000434b3) bg_popup_window_pane_cp16_ParamLimits

0x5acb,	// (0x000434b3) bg_popup_window_pane_cp16

0x5bcb,	// (0x000435b3) indicator_popup_pane_cp4_ParamLimits

0x5bcb,	// (0x000435b3) indicator_popup_pane_cp4

0x5bdf,	// (0x000435c7) popup_query_data_window_t1_ParamLimits

0x5bdf,	// (0x000435c7) popup_query_data_window_t1

0x5bf1,	// (0x000435d9) popup_query_data_window_t2_ParamLimits

0x5bf1,	// (0x000435d9) popup_query_data_window_t2

0x5c0a,	// (0x000435f2) popup_query_data_window_t3_ParamLimits

0x5c0a,	// (0x000435f2) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004d238) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004d238) popup_query_data_window_t

0x5c24,	// (0x0004360c) query_popup_data_pane_ParamLimits

0x5c24,	// (0x0004360c) query_popup_data_pane

0x5c38,	// (0x00043620) query_popup_data_pane_cp1_ParamLimits

0x5c38,	// (0x00043620) query_popup_data_pane_cp1

0x5acb,	// (0x000434b3) bg_popup_window_pane_cp10_ParamLimits

0x5acb,	// (0x000434b3) bg_popup_window_pane_cp10

0x5afd,	// (0x000434e5) indicator_popup_pane_ParamLimits

0x5afd,	// (0x000434e5) indicator_popup_pane

0x5b1f,	// (0x00043507) popup_query_code_window_t1_ParamLimits

0x5b1f,	// (0x00043507) popup_query_code_window_t1

0x5b39,	// (0x00043521) popup_query_code_window_t2_ParamLimits

0x5b39,	// (0x00043521) popup_query_code_window_t2

0x5b82,	// (0x0004356a) popup_query_code_window_t3_ParamLimits

0x5b82,	// (0x0004356a) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004d231) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004d231) popup_query_code_window_t

0x5bb1,	// (0x00043599) query_popup_pane_ParamLimits

0x5bb1,	// (0x00043599) query_popup_pane

0x410b,	// (0x00041af3) bg_popup_window_pane_cp15_ParamLimits

0x410b,	// (0x00041af3) bg_popup_window_pane_cp15

0x4129,	// (0x00041b11) indicator_popup_pane_cp1_ParamLimits

0x4129,	// (0x00041b11) indicator_popup_pane_cp1

0x413c,	// (0x00041b24) indicator_popup_pane_cp2_ParamLimits

0x413c,	// (0x00041b24) indicator_popup_pane_cp2

0x414f,	// (0x00041b37) popup_query_data_code_window_g1_ParamLimits

0x414f,	// (0x00041b37) popup_query_data_code_window_g1

0x4162,	// (0x00041b4a) popup_query_data_code_window_t1_ParamLimits

0x4162,	// (0x00041b4a) popup_query_data_code_window_t1

0x4174,	// (0x00041b5c) popup_query_data_code_window_t2_ParamLimits

0x4174,	// (0x00041b5c) popup_query_data_code_window_t2

0x4186,	// (0x00041b6e) popup_query_data_code_window_t3_ParamLimits

0x4186,	// (0x00041b6e) popup_query_data_code_window_t3

0x419c,	// (0x00041b84) popup_query_data_code_window_t4_ParamLimits

0x419c,	// (0x00041b84) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004cf8e) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004cf8e) popup_query_data_code_window_t

0x9831,	// (0x00047219) list_single_midp_graphic_pane_g3

0x41b4,	// (0x00041b9c) query_popup_data_pane_cp2_ParamLimits

0x41c7,	// (0x00041baf) query_popup_pane_cp2_ParamLimits

0x41c7,	// (0x00041baf) query_popup_pane_cp2

0x3cda,	// (0x000416c2) bg_popup_window_pane_cp11

0x5ac3,	// (0x000434ab) heading_pane_cp5

0x4477,	// (0x00041e5f) listscroll_popup_info_pane

0x3cda,	// (0x000416c2) input_focus_pane_cp3

0x41da,	// (0x00041bc2) query_popup_pane_t1

0x41e8,	// (0x00041bd0) list_popup_info_pane_ParamLimits

0x41e8,	// (0x00041bd0) list_popup_info_pane

0x41f7,	// (0x00041bdf) listscroll_popup_info_pane_g1

0x41ff,	// (0x00041be7) scroll_pane_cp7

0x4209,	// (0x00041bf1) popup_info_list_pane_t1_ParamLimits

0x4209,	// (0x00041bf1) popup_info_list_pane_t1

0x4445,	// (0x00041e2d) popup_info_list_pane_t2_ParamLimits

0x4445,	// (0x00041e2d) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004cf97) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004cf97) popup_info_list_pane_t

0x3cda,	// (0x000416c2) bg_popup_window_pane_cp12

0x69f5,	// (0x000443dd) find_popup_pane

0x3d36,	// (0x0004171e) bg_popup_window_pane_cp3

0x445f,	// (0x00041e47) heading_pane_cp3

0x446b,	// (0x00041e53) listscroll_popup_graphic_pane

0x3cda,	// (0x000416c2) bg_popup_window_pane_cp4

0xabbc,	// (0x000485a4) heading_pane_cp4

0x4477,	// (0x00041e5f) listscroll_popup_colour_pane

0x447f,	// (0x00041e67) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x447f,	// (0x00041e67) cell_large_graphic_colour_none_popup_pane

0xabc6,	// (0x000485ae) grid_large_graphic_colour_popup_pane_ParamLimits

0xabc6,	// (0x000485ae) grid_large_graphic_colour_popup_pane

0x4493,	// (0x00041e7b) listscroll_popup_colour_pane_g1_ParamLimits

0x4493,	// (0x00041e7b) listscroll_popup_colour_pane_g1

0x44aa,	// (0x00041e92) listscroll_popup_colour_pane_g2_ParamLimits

0x44aa,	// (0x00041e92) listscroll_popup_colour_pane_g2

0x44c1,	// (0x00041ea9) listscroll_popup_colour_pane_g3_ParamLimits

0x44c1,	// (0x00041ea9) listscroll_popup_colour_pane_g3

0xabea,	// (0x000485d2) listscroll_popup_colour_pane_g4_ParamLimits

0xabea,	// (0x000485d2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004cf9c) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004cf9c) listscroll_popup_colour_pane_g

0x44d1,	// (0x00041eb9) scroll_pane_cp6_ParamLimits

0x44d1,	// (0x00041eb9) scroll_pane_cp6

0xabf9,	// (0x000485e1) cell_large_graphic_colour_popup_pane_ParamLimits

0xabf9,	// (0x000485e1) cell_large_graphic_colour_popup_pane

0x44e3,	// (0x00041ecb) cell_large_graphic_colour_none_popup_pane_t1

0x3cda,	// (0x000416c2) grid_highlight_pane_cp5

0x44f2,	// (0x00041eda) cell_large_graphic_colour_popup_pane_g1

0x44fa,	// (0x00041ee2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004cfa5) cell_large_graphic_colour_popup_pane_g

0x4502,	// (0x00041eea) cell_large_graphic_colour_popup_pane_g2_copy1

0x450b,	// (0x00041ef3) grid_highlight_pane_cp4

0x4513,	// (0x00041efb) bg_popup_window_pane_cp8_ParamLimits

0x4513,	// (0x00041efb) bg_popup_window_pane_cp8

0x452e,	// (0x00041f16) popup_snote_single_text_window_g1_ParamLimits

0x452e,	// (0x00041f16) popup_snote_single_text_window_g1

0x4540,	// (0x00041f28) popup_snote_single_text_window_t1_ParamLimits

0x4540,	// (0x00041f28) popup_snote_single_text_window_t1

0x4553,	// (0x00041f3b) popup_snote_single_text_window_t2_ParamLimits

0x4553,	// (0x00041f3b) popup_snote_single_text_window_t2

0x4566,	// (0x00041f4e) popup_snote_single_text_window_t3_ParamLimits

0x4566,	// (0x00041f4e) popup_snote_single_text_window_t3

0x459f,	// (0x00041f87) popup_snote_single_text_window_t4_ParamLimits

0x459f,	// (0x00041f87) popup_snote_single_text_window_t4

0x45d3,	// (0x00041fbb) popup_snote_single_text_window_t5_ParamLimits

0x45d3,	// (0x00041fbb) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004cfaa) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004cfaa) popup_snote_single_text_window_t

0x4602,	// (0x00041fea) bg_popup_window_pane_cp9_ParamLimits

0x4602,	// (0x00041fea) bg_popup_window_pane_cp9

0x452e,	// (0x00041f16) popup_snote_single_graphic_window_g1_ParamLimits

0x452e,	// (0x00041f16) popup_snote_single_graphic_window_g1

0x4610,	// (0x00041ff8) popup_snote_single_graphic_window_g2_ParamLimits

0x4610,	// (0x00041ff8) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004cfb5) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004cfb5) popup_snote_single_graphic_window_g

0x461c,	// (0x00042004) popup_snote_single_graphic_window_t1_ParamLimits

0x461c,	// (0x00042004) popup_snote_single_graphic_window_t1

0x462f,	// (0x00042017) popup_snote_single_graphic_window_t2_ParamLimits

0x462f,	// (0x00042017) popup_snote_single_graphic_window_t2

0x4642,	// (0x0004202a) popup_snote_single_graphic_window_t3_ParamLimits

0x4642,	// (0x0004202a) popup_snote_single_graphic_window_t3

0x467b,	// (0x00042063) popup_snote_single_graphic_window_t4_ParamLimits

0x467b,	// (0x00042063) popup_snote_single_graphic_window_t4

0x46af,	// (0x00042097) popup_snote_single_graphic_window_t5_ParamLimits

0x46af,	// (0x00042097) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004cfba) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004cfba) popup_snote_single_graphic_window_t

0x6979,	// (0x00044361) grid_graphic_popup_pane_ParamLimits

0x6979,	// (0x00044361) grid_graphic_popup_pane

0x69a5,	// (0x0004438d) listscroll_popup_graphic_pane_g1_ParamLimits

0x69a5,	// (0x0004438d) listscroll_popup_graphic_pane_g1

0xc659,	// (0x0004a041) listscroll_popup_graphic_pane_g2_ParamLimits

0xc659,	// (0x0004a041) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004d3ae) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004d3ae) listscroll_popup_graphic_pane_g

0x621f,	// (0x00043c07) scroll_pane_cp5

0xc61a,	// (0x0004a002) cell_graphic_popup_pane_ParamLimits

0xc61a,	// (0x0004a002) cell_graphic_popup_pane

0x6938,	// (0x00044320) cell_graphic_popup_pane_g1

0x6940,	// (0x00044328) cell_graphic_popup_pane_g2

0x4502,	// (0x00041eea) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004d3a7) cell_graphic_popup_pane_g

0x6949,	// (0x00044331) cell_graphic_popup_pane_t2

0x450b,	// (0x00041ef3) grid_highlight_pane_cp3

0x46f0,	// (0x000420d8) list_gen_pane_ParamLimits

0x46f0,	// (0x000420d8) list_gen_pane

0x4718,	// (0x00042100) scroll_pane

0xc5cd,	// (0x00049fb5) bg_list_pane_g1_ParamLimits

0xc5cd,	// (0x00049fb5) bg_list_pane_g1

0x68e7,	// (0x000442cf) bg_list_pane_g2_ParamLimits

0x68e7,	// (0x000442cf) bg_list_pane_g2

0x68fa,	// (0x000442e2) bg_list_pane_g3_ParamLimits

0x68fa,	// (0x000442e2) bg_list_pane_g3

0x690c,	// (0x000442f4) bg_list_pane_g4_ParamLimits

0x690c,	// (0x000442f4) bg_list_pane_g4

0xc5e8,	// (0x00049fd0) bg_list_pane_g5_ParamLimits

0xc5e8,	// (0x00049fd0) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004d39c) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004d39c) bg_list_pane_g

0xb38d,	// (0x00048d75) list_double2_graphic_large_graphic_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double2_graphic_large_graphic_pane

0xb38d,	// (0x00048d75) list_double2_graphic_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double2_graphic_pane

0xb38d,	// (0x00048d75) list_double2_large_graphic_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double2_large_graphic_pane

0xb38d,	// (0x00048d75) list_double2_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double2_pane

0xb38d,	// (0x00048d75) list_double_graphic_heading_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_graphic_heading_pane

0xb38d,	// (0x00048d75) list_double_graphic_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_graphic_pane

0xb38d,	// (0x00048d75) list_double_heading_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_heading_pane

0xb38d,	// (0x00048d75) list_double_large_graphic_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_large_graphic_pane

0xb38d,	// (0x00048d75) list_double_number_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_number_pane

0xb38d,	// (0x00048d75) list_double_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_pane

0xb38d,	// (0x00048d75) list_double_time_pane_ParamLimits

0xb38d,	// (0x00048d75) list_double_time_pane

0xb38d,	// (0x00048d75) list_setting_number_pane_ParamLimits

0xb38d,	// (0x00048d75) list_setting_number_pane

0xb38d,	// (0x00048d75) list_setting_pane_ParamLimits

0xb38d,	// (0x00048d75) list_setting_pane

0xb3d1,	// (0x00048db9) list_single_2graphic_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_2graphic_pane

0xb3d1,	// (0x00048db9) list_single_graphic_heading_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_graphic_heading_pane

0xb3d1,	// (0x00048db9) list_single_graphic_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_graphic_pane

0xb3d1,	// (0x00048db9) list_single_heading_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_heading_pane

0xb45b,	// (0x00048e43) list_single_large_graphic_pane_ParamLimits

0xb45b,	// (0x00048e43) list_single_large_graphic_pane

0xb3d1,	// (0x00048db9) list_single_number_heading_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_number_heading_pane

0xb3d1,	// (0x00048db9) list_single_number_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_number_pane

0xb3d1,	// (0x00048db9) list_single_pane_ParamLimits

0xb3d1,	// (0x00048db9) list_single_pane

0x3cda,	// (0x000416c2) list_highlight_pane_cp1

0x515d,	// (0x00042b45) list_single_pane_g1_ParamLimits

0x515d,	// (0x00042b45) list_single_pane_g1

0x8cb6,	// (0x0004669e) list_single_pane_g2_ParamLimits

0x8cb6,	// (0x0004669e) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004cfd6) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004cfd6) list_single_pane_g

0xb377,	// (0x00048d5f) list_single_pane_t1_ParamLimits

0xb377,	// (0x00048d5f) list_single_pane_t1

0x515d,	// (0x00042b45) list_single_number_pane_g1_ParamLimits

0x515d,	// (0x00042b45) list_single_number_pane_g1

0x8cb6,	// (0x0004669e) list_single_number_pane_g2_ParamLimits

0x8cb6,	// (0x0004669e) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004cfd6) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004cfd6) list_single_number_pane_g

0xb31f,	// (0x00048d07) list_single_number_pane_t1_ParamLimits

0xb31f,	// (0x00048d07) list_single_number_pane_t1

0xb335,	// (0x00048d1d) list_single_number_pane_t2_ParamLimits

0xb335,	// (0x00048d1d) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004d35d) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004d35d) list_single_number_pane_t

0x8caa,	// (0x00046692) list_single_graphic_pane_g1_ParamLimits

0x8caa,	// (0x00046692) list_single_graphic_pane_g1

0x515d,	// (0x00042b45) list_single_graphic_pane_g2_ParamLimits

0x515d,	// (0x00042b45) list_single_graphic_pane_g2

0x8cb6,	// (0x0004669e) list_single_graphic_pane_g3_ParamLimits

0x8cb6,	// (0x0004669e) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004cfc5) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004cfc5) list_single_graphic_pane_g

0x8cc2,	// (0x000466aa) list_single_graphic_pane_t1_ParamLimits

0x8cc2,	// (0x000466aa) list_single_graphic_pane_t1

0x8cd8,	// (0x000466c0) list_single_heading_pane_g1_ParamLimits

0x8cd8,	// (0x000466c0) list_single_heading_pane_g1

0x8cb6,	// (0x0004669e) list_single_heading_pane_g2_ParamLimits

0x8cb6,	// (0x0004669e) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004cfcc) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004cfcc) list_single_heading_pane_g

0x8ceb,	// (0x000466d3) list_single_heading_pane_t1_ParamLimits

0x8ceb,	// (0x000466d3) list_single_heading_pane_t1

0xac22,	// (0x0004860a) list_single_heading_pane_t2_ParamLimits

0xac22,	// (0x0004860a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004cfd1) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004cfd1) list_single_heading_pane_t

0x515d,	// (0x00042b45) list_single_number_heading_pane_g1_ParamLimits

0x515d,	// (0x00042b45) list_single_number_heading_pane_g1

0x8cb6,	// (0x0004669e) list_single_number_heading_pane_g2_ParamLimits

0x8cb6,	// (0x0004669e) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004cfd6) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004cfd6) list_single_number_heading_pane_g

0x8d01,	// (0x000466e9) list_single_number_heading_pane_t1_ParamLimits

0x8d01,	// (0x000466e9) list_single_number_heading_pane_t1

0x8d17,	// (0x000466ff) list_single_number_heading_pane_t2_ParamLimits

0x8d17,	// (0x000466ff) list_single_number_heading_pane_t2

0x8d29,	// (0x00046711) list_single_number_heading_pane_t3_ParamLimits

0x8d29,	// (0x00046711) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004cfdb) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004cfdb) list_single_number_heading_pane_t

0x8d3b,	// (0x00046723) list_single_graphic_heading_pane_g1_ParamLimits

0x8d3b,	// (0x00046723) list_single_graphic_heading_pane_g1

0x8d51,	// (0x00046739) list_single_graphic_heading_pane_g4_ParamLimits

0x8d51,	// (0x00046739) list_single_graphic_heading_pane_g4

0x8cb6,	// (0x0004669e) list_single_graphic_heading_pane_g5_ParamLimits

0x8cb6,	// (0x0004669e) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004cfe2) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004cfe2) list_single_graphic_heading_pane_g

0x8d01,	// (0x000466e9) list_single_graphic_heading_pane_t1_ParamLimits

0x8d01,	// (0x000466e9) list_single_graphic_heading_pane_t1

0x8d62,	// (0x0004674a) list_single_graphic_heading_pane_t2_ParamLimits

0x8d62,	// (0x0004674a) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004cfe9) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004cfe9) list_single_graphic_heading_pane_t

0xac34,	// (0x0004861c) list_single_large_graphic_pane_g1_ParamLimits

0xac34,	// (0x0004861c) list_single_large_graphic_pane_g1

0xac40,	// (0x00048628) list_single_large_graphic_pane_g2_ParamLimits

0xac40,	// (0x00048628) list_single_large_graphic_pane_g2

0xac4c,	// (0x00048634) list_single_large_graphic_pane_g3_ParamLimits

0xac4c,	// (0x00048634) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004cfee) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004cfee) list_single_large_graphic_pane_g

0x5c66,	// (0x0004364e) wait_border_pane_g2_copy1

0xac58,	// (0x00048640) list_single_large_graphic_pane_g4_cp2

0x8d7a,	// (0x00046762) list_single_large_graphic_pane_t1_ParamLimits

0x8d7a,	// (0x00046762) list_single_large_graphic_pane_t1

0xac60,	// (0x00048648) list_double_pane_g1_ParamLimits

0xac60,	// (0x00048648) list_double_pane_g1

0xac6c,	// (0x00048654) list_double_pane_g2_ParamLimits

0xac6c,	// (0x00048654) list_double_pane_g2

0x0001,

0xf60d,	// (0x0004cff5) list_double_pane_g_ParamLimits

0xf60d,	// (0x0004cff5) list_double_pane_g

0x8d90,	// (0x00046778) list_double_pane_t1_ParamLimits

0x8d90,	// (0x00046778) list_double_pane_t1

0x8da6,	// (0x0004678e) list_double_pane_t2_ParamLimits

0x8da6,	// (0x0004678e) list_double_pane_t2

0x0001,

0xf612,	// (0x0004cffa) list_double_pane_t_ParamLimits

0xf612,	// (0x0004cffa) list_double_pane_t

0x8db8,	// (0x000467a0) list_double2_pane_g1_ParamLimits

0x8db8,	// (0x000467a0) list_double2_pane_g1

0x8dc9,	// (0x000467b1) list_double2_pane_g2_ParamLimits

0x8dc9,	// (0x000467b1) list_double2_pane_g2

0x0001,

0xf617,	// (0x0004cfff) list_double2_pane_g_ParamLimits

0xf617,	// (0x0004cfff) list_double2_pane_g

0x8dd5,	// (0x000467bd) list_double2_pane_t1_ParamLimits

0x8dd5,	// (0x000467bd) list_double2_pane_t1

0x8deb,	// (0x000467d3) list_double2_pane_t2_ParamLimits

0x8deb,	// (0x000467d3) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0004d004) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0004d004) list_double2_pane_t

0xac60,	// (0x00048648) list_double_number_pane_g1_ParamLimits

0xac60,	// (0x00048648) list_double_number_pane_g1

0xac6c,	// (0x00048654) list_double_number_pane_g2_ParamLimits

0xac6c,	// (0x00048654) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0004cff5) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0004cff5) list_double_number_pane_g

0x8dfd,	// (0x000467e5) list_double_number_pane_t1_ParamLimits

0x8dfd,	// (0x000467e5) list_double_number_pane_t1

0x8e0f,	// (0x000467f7) list_double_number_pane_t2_ParamLimits

0x8e0f,	// (0x000467f7) list_double_number_pane_t2

0x8e25,	// (0x0004680d) list_double_number_pane_t3_ParamLimits

0x8e25,	// (0x0004680d) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0004d009) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0004d009) list_double_number_pane_t

0x8e37,	// (0x0004681f) list_double_graphic_pane_g1_ParamLimits

0x8e37,	// (0x0004681f) list_double_graphic_pane_g1

0xac78,	// (0x00048660) list_double_graphic_pane_g2_ParamLimits

0xac78,	// (0x00048660) list_double_graphic_pane_g2

0xac87,	// (0x0004866f) list_double_graphic_pane_g3_ParamLimits

0xac87,	// (0x0004866f) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0004d010) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0004d010) list_double_graphic_pane_g

0x8e4f,	// (0x00046837) list_double_graphic_pane_t1_ParamLimits

0x8e4f,	// (0x00046837) list_double_graphic_pane_t1

0x8e65,	// (0x0004684d) list_double_graphic_pane_t2_ParamLimits

0x8e65,	// (0x0004684d) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0004d019) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0004d019) list_double_graphic_pane_t

0x8e77,	// (0x0004685f) list_double2_graphic_pane_g1_ParamLimits

0x8e77,	// (0x0004685f) list_double2_graphic_pane_g1

0xac93,	// (0x0004867b) list_double2_graphic_pane_g2_ParamLimits

0xac93,	// (0x0004867b) list_double2_graphic_pane_g2

0xac9f,	// (0x00048687) list_double2_graphic_pane_g3_ParamLimits

0xac9f,	// (0x00048687) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0004d01e) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0004d01e) list_double2_graphic_pane_g

0x8e83,	// (0x0004686b) list_double2_graphic_pane_t1_ParamLimits

0x8e83,	// (0x0004686b) list_double2_graphic_pane_t1

0x8e99,	// (0x00046881) list_double2_graphic_pane_t2_ParamLimits

0x8e99,	// (0x00046881) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004d025) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004d025) list_double2_graphic_pane_t

0x8eab,	// (0x00046893) list_double_large_graphic_pane_g1_ParamLimits

0x8eab,	// (0x00046893) list_double_large_graphic_pane_g1

0x8ed6,	// (0x000468be) list_double_large_graphic_pane_g2_ParamLimits

0x8ed6,	// (0x000468be) list_double_large_graphic_pane_g2

0xac6c,	// (0x00048654) list_double_large_graphic_pane_g3_ParamLimits

0xac6c,	// (0x00048654) list_double_large_graphic_pane_g3

0x8eec,	// (0x000468d4) list_double_large_graphic_pane_g4_ParamLimits

0x8eec,	// (0x000468d4) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0004d02a) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0004d02a) list_double_large_graphic_pane_g

0x8eff,	// (0x000468e7) list_double_large_graphic_pane_t1_ParamLimits

0x8eff,	// (0x000468e7) list_double_large_graphic_pane_t1

0x8f18,	// (0x00046900) list_double_large_graphic_pane_t2_ParamLimits

0x8f18,	// (0x00046900) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0004d035) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0004d035) list_double_large_graphic_pane_t

0xacc0,	// (0x000486a8) list_double2_large_graphic_pane_g1_ParamLimits

0xacc0,	// (0x000486a8) list_double2_large_graphic_pane_g1

0xaccc,	// (0x000486b4) list_double2_large_graphic_pane_g2_ParamLimits

0xaccc,	// (0x000486b4) list_double2_large_graphic_pane_g2

0xac9f,	// (0x00048687) list_double2_large_graphic_pane_g3_ParamLimits

0xac9f,	// (0x00048687) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0004d03a) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0004d03a) list_double2_large_graphic_pane_g

0x8f2a,	// (0x00046912) list_double2_large_graphic_pane_t1_ParamLimits

0x8f2a,	// (0x00046912) list_double2_large_graphic_pane_t1

0x8f40,	// (0x00046928) list_double2_large_graphic_pane_t2_ParamLimits

0x8f40,	// (0x00046928) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0004d041) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0004d041) list_double2_large_graphic_pane_t

0x8f52,	// (0x0004693a) list_double_heading_pane_g1_ParamLimits

0x8f52,	// (0x0004693a) list_double_heading_pane_g1

0xacdd,	// (0x000486c5) list_double_heading_pane_g2_ParamLimits

0xacdd,	// (0x000486c5) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004d046) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004d046) list_double_heading_pane_g

0x8f63,	// (0x0004694b) list_double_heading_pane_t1_ParamLimits

0x8f63,	// (0x0004694b) list_double_heading_pane_t1

0x8deb,	// (0x000467d3) list_double_heading_pane_t2_ParamLimits

0x8deb,	// (0x000467d3) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004d04b) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004d04b) list_double_heading_pane_t

0x8f79,	// (0x00046961) list_double_graphic_heading_pane_g1_ParamLimits

0x8f79,	// (0x00046961) list_double_graphic_heading_pane_g1

0x8f52,	// (0x0004693a) list_double_graphic_heading_pane_g2_ParamLimits

0x8f52,	// (0x0004693a) list_double_graphic_heading_pane_g2

0xacdd,	// (0x000486c5) list_double_graphic_heading_pane_g3_ParamLimits

0xacdd,	// (0x000486c5) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0004d050) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0004d050) list_double_graphic_heading_pane_g

0x8f85,	// (0x0004696d) list_double_graphic_heading_pane_t1_ParamLimits

0x8f85,	// (0x0004696d) list_double_graphic_heading_pane_t1

0x8e99,	// (0x00046881) list_double_graphic_heading_pane_t2_ParamLimits

0x8e99,	// (0x00046881) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004d057) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004d057) list_double_graphic_heading_pane_t

0x8f9b,	// (0x00046983) list_double_time_pane_g1_ParamLimits

0x8f9b,	// (0x00046983) list_double_time_pane_g1

0x8fac,	// (0x00046994) list_double_time_pane_g2_ParamLimits

0x8fac,	// (0x00046994) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0004d05c) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0004d05c) list_double_time_pane_g

0x8fb8,	// (0x000469a0) list_double_time_pane_t1_ParamLimits

0x8fb8,	// (0x000469a0) list_double_time_pane_t1

0x8fce,	// (0x000469b6) list_double_time_pane_t2_ParamLimits

0x8fce,	// (0x000469b6) list_double_time_pane_t2

0x8fe0,	// (0x000469c8) list_double_time_pane_t3_ParamLimits

0x8fe0,	// (0x000469c8) list_double_time_pane_t3

0x8ff2,	// (0x000469da) list_double_time_pane_t4_ParamLimits

0x8ff2,	// (0x000469da) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0004d061) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0004d061) list_double_time_pane_t

0x9004,	// (0x000469ec) list_setting_pane_g1_ParamLimits

0x9004,	// (0x000469ec) list_setting_pane_g1

0x9010,	// (0x000469f8) list_setting_pane_g2_ParamLimits

0x9010,	// (0x000469f8) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004d06a) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004d06a) list_setting_pane_g

0x901c,	// (0x00046a04) list_setting_pane_t1_ParamLimits

0x901c,	// (0x00046a04) list_setting_pane_t1

0x9036,	// (0x00046a1e) list_setting_pane_t2_ParamLimits

0x9036,	// (0x00046a1e) list_setting_pane_t2

0x0002,

0xf687,	// (0x0004d06f) list_setting_pane_t_ParamLimits

0xf687,	// (0x0004d06f) list_setting_pane_t

0x9073,	// (0x00046a5b) set_value_pane_cp_ParamLimits

0x9073,	// (0x00046a5b) set_value_pane_cp

0x907f,	// (0x00046a67) list_setting_number_pane_g1_ParamLimits

0x907f,	// (0x00046a67) list_setting_number_pane_g1

0x908b,	// (0x00046a73) list_setting_number_pane_g2_ParamLimits

0x908b,	// (0x00046a73) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004d076) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004d076) list_setting_number_pane_g

0x9097,	// (0x00046a7f) list_setting_number_pane_t1_ParamLimits

0x9097,	// (0x00046a7f) list_setting_number_pane_t1

0x90b0,	// (0x00046a98) list_setting_number_pane_t2_ParamLimits

0x90b0,	// (0x00046a98) list_setting_number_pane_t2

0x90ca,	// (0x00046ab2) list_setting_number_pane_t3_ParamLimits

0x90ca,	// (0x00046ab2) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004d07b) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004d07b) list_setting_number_pane_t

0x9073,	// (0x00046a5b) set_value_pane_ParamLimits

0x9073,	// (0x00046a5b) set_value_pane

0x4758,	// (0x00042140) bg_set_opt_pane_ParamLimits

0x4758,	// (0x00042140) bg_set_opt_pane

0x910d,	// (0x00046af5) set_value_pane_t1

0x4779,	// (0x00042161) slider_set_pane_cp3

0x4782,	// (0x0004216a) volume_small_pane_cp

0x478b,	// (0x00042173) list_form_gen_pane

0x4794,	// (0x0004217c) scroll_pane_cp8

0x9123,	// (0x00046b0b) form_field_data_pane_ParamLimits

0x9123,	// (0x00046b0b) form_field_data_pane

0x9143,	// (0x00046b2b) form_field_data_wide_pane_ParamLimits

0x9143,	// (0x00046b2b) form_field_data_wide_pane

0x9164,	// (0x00046b4c) form_field_popup_pane_ParamLimits

0x9164,	// (0x00046b4c) form_field_popup_pane

0x9182,	// (0x00046b6a) form_field_popup_wide_pane_ParamLimits

0x9182,	// (0x00046b6a) form_field_popup_wide_pane

0x919f,	// (0x00046b87) form_field_slider_pane_ParamLimits

0x919f,	// (0x00046b87) form_field_slider_pane

0x91b2,	// (0x00046b9a) form_field_slider_wide_pane_ParamLimits

0x91b2,	// (0x00046b9a) form_field_slider_wide_pane

0x47a5,	// (0x0004218d) data_form_pane

0x91cf,	// (0x00046bb7) form_field_data_pane_t1

0x47b1,	// (0x00042199) input_focus_pane

0x47bf,	// (0x000421a7) data_form_wide_pane

0x91f5,	// (0x00046bdd) form_field_data_wide_pane_t1

0x4520,	// (0x00041f08) input_focus_pane_cp6

0xacf1,	// (0x000486d9) form_field_popup_pane_t1

0x47b1,	// (0x00042199) input_focus_pane_cp7

0x47df,	// (0x000421c7) list_form_pane

0xad13,	// (0x000486fb) form_field_popup_wide_pane_t1

0x47b1,	// (0x00042199) input_focus_pane_cp8

0x47eb,	// (0x000421d3) list_form_wide_pane

0xad30,	// (0x00048718) form_field_slider_pane_t1_ParamLimits

0xad30,	// (0x00048718) form_field_slider_pane_t1

0xad48,	// (0x00048730) form_field_slider_pane_t2_ParamLimits

0xad48,	// (0x00048730) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004d08b) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004d08b) form_field_slider_pane_t

0x3d28,	// (0x00041710) input_focus_pane_cp9_ParamLimits

0x3d28,	// (0x00041710) input_focus_pane_cp9

0xad5d,	// (0x00048745) slider_cont_pane_ParamLimits

0xad5d,	// (0x00048745) slider_cont_pane

0x47fa,	// (0x000421e2) form_field_slider_wide_pane_t1_ParamLimits

0x47fa,	// (0x000421e2) form_field_slider_wide_pane_t1

0xad71,	// (0x00048759) form_field_slider_wide_pane_t2_ParamLimits

0xad71,	// (0x00048759) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0004d090) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0004d090) form_field_slider_wide_pane_t

0x3d28,	// (0x00041710) input_focus_pane_cp10_ParamLimits

0x3d28,	// (0x00041710) input_focus_pane_cp10

0xad83,	// (0x0004876b) slider_cont_pane_cp1_ParamLimits

0xad83,	// (0x0004876b) slider_cont_pane_cp1

0xad97,	// (0x0004877f) slider_form_pane_cp

0x480c,	// (0x000421f4) input_focus_pane_g1

0x4814,	// (0x000421fc) input_focus_pane_g2

0x481c,	// (0x00042204) input_focus_pane_g3

0x4824,	// (0x0004220c) input_focus_pane_g4

0x482c,	// (0x00042214) input_focus_pane_g5

0x4834,	// (0x0004221c) input_focus_pane_g6

0x483c,	// (0x00042224) input_focus_pane_g7

0x4844,	// (0x0004222c) input_focus_pane_g8

0x484c,	// (0x00042234) input_focus_pane_g9

0x3cd0,	// (0x000416b8) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0004d095) input_focus_pane_g

0x5c6f,	// (0x00043657) wait_border_pane_g3_copy1

0xad9f,	// (0x00048787) data_form_pane_t1

0x3cd0,	// (0x000416b8) wait_anim_pane_g1_copy1

0xb347,	// (0x00048d2f) data_form_wide_pane_t1

0xadba,	// (0x000487a2) list_form_graphic_pane_cp_ParamLimits

0xadba,	// (0x000487a2) list_form_graphic_pane_cp

0x6890,	// (0x00044278) slider_form_pane_g1

0x6899,	// (0x00044281) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004d38d) slider_form_pane_g

0xadd1,	// (0x000487b9) list_form_graphic_pane_ParamLimits

0xadd1,	// (0x000487b9) list_form_graphic_pane

0xadeb,	// (0x000487d3) list_form_graphic_pane_g1

0xadf3,	// (0x000487db) list_form_graphic_pane_t1_ParamLimits

0xadf3,	// (0x000487db) list_form_graphic_pane_t1

0x3d36,	// (0x0004171e) list_highlight_pane_cp5_ParamLimits

0x3d36,	// (0x0004171e) list_highlight_pane_cp5

0xae08,	// (0x000487f0) find_pane_g1

0x4854,	// (0x0004223c) input_find_pane

0xae11,	// (0x000487f9) input_find_pane_g1_ParamLimits

0xae11,	// (0x000487f9) input_find_pane_g1

0xae1d,	// (0x00048805) input_find_pane_t1_ParamLimits

0xae1d,	// (0x00048805) input_find_pane_t1

0xae32,	// (0x0004881a) input_find_pane_t2_ParamLimits

0xae32,	// (0x0004881a) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0004d0aa) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0004d0aa) input_find_pane_t

0x485d,	// (0x00042245) input_focus_pane_cp5_ParamLimits

0x485d,	// (0x00042245) input_focus_pane_cp5

0xae53,	// (0x0004883b) bg_popup_window_pane_cp2_ParamLimits

0xae53,	// (0x0004883b) bg_popup_window_pane_cp2

0xae60,	// (0x00048848) listscroll_menu_pane_ParamLimits

0xae60,	// (0x00048848) listscroll_menu_pane

0xae6c,	// (0x00048854) popup_submenu_window_ParamLimits

0xae6c,	// (0x00048854) popup_submenu_window

0x486b,	// (0x00042253) find_popup_pane_g1

0x4873,	// (0x0004225b) input_popup_find_pane_cp

0x485d,	// (0x00042245) input_focus_pane_cp4_ParamLimits

0x485d,	// (0x00042245) input_focus_pane_cp4

0x487d,	// (0x00042265) input_popup_find_pane_t1_ParamLimits

0x487d,	// (0x00042265) input_popup_find_pane_t1

0x3cda,	// (0x000416c2) bg_popup_sub_pane_cp

0x48ab,	// (0x00042293) listscroll_popup_sub_pane

0x48b3,	// (0x0004229b) list_submenu_pane_ParamLimits

0x48b3,	// (0x0004229b) list_submenu_pane

0x48c4,	// (0x000422ac) scroll_pane_cp4

0x48cc,	// (0x000422b4) list_single_popup_submenu_pane_ParamLimits

0x48cc,	// (0x000422b4) list_single_popup_submenu_pane

0x48df,	// (0x000422c7) list_single_popup_submenu_pane_g1

0x48e7,	// (0x000422cf) list_single_popup_submenu_pane_t1_ParamLimits

0x48e7,	// (0x000422cf) list_single_popup_submenu_pane_t1

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp1_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp1

0xae9e,	// (0x00048886) tabs_2_active_pane_g1

0xaea6,	// (0x0004888e) tabs_2_active_pane_t1

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp1_ParamLimits

0x3d36,	// (0x0004171e) bg_passive_tab_pane_cp1

0xae9e,	// (0x00048886) tabs_2_passive_pane_g1

0xaea6,	// (0x0004888e) tabs_2_passive_pane_t1

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp4

0xaeb8,	// (0x000488a0) tabs_2_long_active_pane_t1

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp4

0x9839,	// (0x00047221) list_single_midp_graphic_pane_g4_ParamLimits

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp5

0xaed7,	// (0x000488bf) tabs_3_long_active_pane_t1

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp5

0x9839,	// (0x00047221) list_single_midp_graphic_pane_g4

0x3d36,	// (0x0004171e) bg_popup_window_pane_cp13_ParamLimits

0x3d36,	// (0x0004171e) bg_popup_window_pane_cp13

0x4911,	// (0x000422f9) listscroll_popup_fast_pane_ParamLimits

0x4911,	// (0x000422f9) listscroll_popup_fast_pane

0x4920,	// (0x00042308) grid_popup_fast_pane_ParamLimits

0x4920,	// (0x00042308) grid_popup_fast_pane

0x4932,	// (0x0004231a) scroll_pane_cp9_ParamLimits

0x4932,	// (0x0004231a) scroll_pane_cp9

0x7c4e,	// (0x00045636) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c4e,	// (0x00045636) list_single_graphic_hl_pane_t1_cp2

0x4956,	// (0x0004233e) input_focus_pane_cp20_ParamLimits

0x4956,	// (0x0004233e) input_focus_pane_cp20

0x4964,	// (0x0004234c) query_popup_data_pane_t1_ParamLimits

0x4964,	// (0x0004234c) query_popup_data_pane_t1

0x4977,	// (0x0004235f) query_popup_data_pane_t2_ParamLimits

0x4977,	// (0x0004235f) query_popup_data_pane_t2

0x49bd,	// (0x000423a5) query_popup_data_pane_t3_ParamLimits

0x49bd,	// (0x000423a5) query_popup_data_pane_t3

0x49fe,	// (0x000423e6) query_popup_data_pane_t4_ParamLimits

0x49fe,	// (0x000423e6) query_popup_data_pane_t4

0x4a3a,	// (0x00042422) query_popup_data_pane_t5_ParamLimits

0x4a3a,	// (0x00042422) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0004d0af) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0004d0af) query_popup_data_pane_t

0x480c,	// (0x000421f4) bg_set_opt_pane_g1

0x4814,	// (0x000421fc) bg_set_opt_pane_g2

0x481c,	// (0x00042204) bg_set_opt_pane_g3

0x4824,	// (0x0004220c) bg_set_opt_pane_g4

0x482c,	// (0x00042214) bg_set_opt_pane_g5

0x4834,	// (0x0004221c) bg_set_opt_pane_g6

0x483c,	// (0x00042224) bg_set_opt_pane_g7

0x4844,	// (0x0004222c) bg_set_opt_pane_g8

0x484c,	// (0x00042234) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0004d0ba) bg_set_opt_pane_g

0x94ae,	// (0x00046e96) control_top_pane_stacon_ParamLimits

0x94ae,	// (0x00046e96) control_top_pane_stacon

0x9501,	// (0x00046ee9) signal_pane_stacon_ParamLimits

0x9501,	// (0x00046ee9) signal_pane_stacon

0x4e9e,	// (0x00042886) stacon_top_pane_g1_ParamLimits

0x4e9e,	// (0x00042886) stacon_top_pane_g1

0x9526,	// (0x00046f0e) title_pane_stacon_ParamLimits

0x9526,	// (0x00046f0e) title_pane_stacon

0x9550,	// (0x00046f38) uni_indicator_pane_stacon_ParamLimits

0x9550,	// (0x00046f38) uni_indicator_pane_stacon

0x9565,	// (0x00046f4d) battery_pane_stacon_ParamLimits

0x9565,	// (0x00046f4d) battery_pane_stacon

0x95a9,	// (0x00046f91) control_bottom_pane_stacon_ParamLimits

0x95a9,	// (0x00046f91) control_bottom_pane_stacon

0x95cc,	// (0x00046fb4) navi_pane_stacon_ParamLimits

0x95cc,	// (0x00046fb4) navi_pane_stacon

0x4ec0,	// (0x000428a8) stacon_bottom_pane_g1_ParamLimits

0x4ec0,	// (0x000428a8) stacon_bottom_pane_g1

0x920f,	// (0x00046bf7) aid_levels_signal_lsc_ParamLimits

0x920f,	// (0x00046bf7) aid_levels_signal_lsc

0x9226,	// (0x00046c0e) signal_pane_stacon_g1_ParamLimits

0x9226,	// (0x00046c0e) signal_pane_stacon_g1

0x923a,	// (0x00046c22) signal_pane_stacon_g2_ParamLimits

0x923a,	// (0x00046c22) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0004d0cd) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0004d0cd) signal_pane_stacon_g

0x926f,	// (0x00046c57) title_pane_stacon_t1_ParamLimits

0x926f,	// (0x00046c57) title_pane_stacon_t1

0x4a92,	// (0x0004247a) uni_indicator_pane_stacon_g1

0x4a9c,	// (0x00042484) uni_indicator_pane_stacon_g2

0x4a7e,	// (0x00042466) uni_indicator_pane_stacon_g3

0x4a88,	// (0x00042470) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0004d0d9) uni_indicator_pane_stacon_g

0x9294,	// (0x00046c7c) control_top_pane_stacon_g1

0x929c,	// (0x00046c84) control_top_pane_stacon_t1_ParamLimits

0x929c,	// (0x00046c84) control_top_pane_stacon_t1

0x92d3,	// (0x00046cbb) aid_levels_battery_lsc_ParamLimits

0x92d3,	// (0x00046cbb) aid_levels_battery_lsc

0x92eb,	// (0x00046cd3) battery_pane_stacon_g1_ParamLimits

0x92eb,	// (0x00046cd3) battery_pane_stacon_g1

0x92fe,	// (0x00046ce6) battery_pane_stacon_g2_ParamLimits

0x92fe,	// (0x00046ce6) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0004d0e2) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0004d0e2) battery_pane_stacon_g

0x933c,	// (0x00046d24) navi_icon_pane_stacon

0x9350,	// (0x00046d38) navi_navi_pane_stacon

0x933c,	// (0x00046d24) navi_text_pane_stacon

0x9294,	// (0x00046c7c) control_bottom_pane_stacon_g1

0x9364,	// (0x00046d4c) control_bottom_pane_stacon_t1_ParamLimits

0x9364,	// (0x00046d4c) control_bottom_pane_stacon_t1

0xaee9,	// (0x000488d1) grid_app_pane_ParamLimits

0xaee9,	// (0x000488d1) grid_app_pane

0xaf0b,	// (0x000488f3) scroll_pane_cp15_ParamLimits

0xaf0b,	// (0x000488f3) scroll_pane_cp15

0xaf20,	// (0x00048908) cell_app_pane_ParamLimits

0xaf20,	// (0x00048908) cell_app_pane

0xaf4a,	// (0x00048932) cell_app_pane_g1_ParamLimits

0xaf4a,	// (0x00048932) cell_app_pane_g1

0x4ac0,	// (0x000424a8) cell_app_pane_g2_ParamLimits

0x4ac0,	// (0x000424a8) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0004d0e7) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0004d0e7) cell_app_pane_g

0x4acc,	// (0x000424b4) cell_app_pane_t1_ParamLimits

0x4acc,	// (0x000424b4) cell_app_pane_t1

0x4ae3,	// (0x000424cb) grid_highlight_pane_ParamLimits

0x4ae3,	// (0x000424cb) grid_highlight_pane

0x480c,	// (0x000421f4) cell_highlight_pane_g1

0x4814,	// (0x000421fc) cell_highlight_pane_g2

0x481c,	// (0x00042204) cell_highlight_pane_g3

0x4824,	// (0x0004220c) cell_highlight_pane_g4

0x482c,	// (0x00042214) cell_highlight_pane_g5

0x4834,	// (0x0004221c) cell_highlight_pane_g6

0x483c,	// (0x00042224) cell_highlight_pane_g7

0x4844,	// (0x0004222c) cell_highlight_pane_g8

0x484c,	// (0x00042234) cell_highlight_pane_g9

0x3cd0,	// (0x000416b8) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0004d095) cell_highlight_pane_g

0x4af4,	// (0x000424dc) bg_scroll_pane

0x93ae,	// (0x00046d96) scroll_handle_pane

0x4b3b,	// (0x00042523) scroll_bg_pane_g1

0x4b50,	// (0x00042538) scroll_bg_pane_g2

0x4b68,	// (0x00042550) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0004d0ec) scroll_bg_pane_g

0x4b7d,	// (0x00042565) scroll_handle_focus_pane_ParamLimits

0x4b7d,	// (0x00042565) scroll_handle_focus_pane

0x4b3b,	// (0x00042523) scroll_handle_pane_g1

0x4b8a,	// (0x00042572) scroll_handle_pane_g2

0x4b68,	// (0x00042550) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0004d0f3) scroll_handle_pane_g

0x485d,	// (0x00042245) bg_popup_sub_pane_cp21_ParamLimits

0x485d,	// (0x00042245) bg_popup_sub_pane_cp21

0x4b9e,	// (0x00042586) popup_fep_japan_predictive_window_t1_ParamLimits

0x4b9e,	// (0x00042586) popup_fep_japan_predictive_window_t1

0x4bb5,	// (0x0004259d) popup_fep_japan_predictive_window_t2_ParamLimits

0x4bb5,	// (0x0004259d) popup_fep_japan_predictive_window_t2

0x4be8,	// (0x000425d0) popup_fep_japan_predictive_window_t3_ParamLimits

0x4be8,	// (0x000425d0) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0004d0fa) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0004d0fa) popup_fep_japan_predictive_window_t

0x3cda,	// (0x000416c2) bg_popup_sub_pane_cp23

0x4c1f,	// (0x00042607) listscroll_japin_cand_pane

0x4c27,	// (0x0004260f) popup_fep_japan_candidate_window_t1

0x4c35,	// (0x0004261d) candidate_pane_ParamLimits

0x4c35,	// (0x0004261d) candidate_pane

0x4c47,	// (0x0004262f) scroll_pane_cp30

0x4c4f,	// (0x00042637) list_single_popup_jap_candidate_pane_ParamLimits

0x4c4f,	// (0x00042637) list_single_popup_jap_candidate_pane

0x3cda,	// (0x000416c2) list_highlight_pane_cp30

0x4c63,	// (0x0004264b) list_single_popup_jap_candidate_pane_t1

0x4c72,	// (0x0004265a) level_1_signal

0x4c7f,	// (0x00042667) level_2_signal

0x4c8c,	// (0x00042674) level_3_signal

0x4c99,	// (0x00042681) level_4_signal

0x4ca6,	// (0x0004268e) level_5_signal

0x4cb3,	// (0x0004269b) level_6_signal

0x4cc0,	// (0x000426a8) level_7_signal

0x4c72,	// (0x0004265a) level_1_battery

0x4c7f,	// (0x00042667) level_2_battery

0x4c8c,	// (0x00042674) level_3_battery

0x4c99,	// (0x00042681) level_4_battery

0x4ca6,	// (0x0004268e) level_5_battery

0x4cb3,	// (0x0004269b) level_6_battery

0x4cc0,	// (0x000426a8) level_7_battery

0x4ce5,	// (0x000426cd) list_menu_pane_ParamLimits

0x4ce5,	// (0x000426cd) list_menu_pane

0x4cf6,	// (0x000426de) scroll_pane_cp25_ParamLimits

0x4cf6,	// (0x000426de) scroll_pane_cp25

0x4d0f,	// (0x000426f7) list_double2_graphic_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double2_graphic_pane_cp2

0x4d0f,	// (0x000426f7) list_double2_large_graphic_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double2_large_graphic_pane_cp2

0x4d0f,	// (0x000426f7) list_double2_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double2_pane_cp2

0x4d0f,	// (0x000426f7) list_double_graphic_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double_graphic_pane_cp2

0x4d0f,	// (0x000426f7) list_double_large_graphic_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double_large_graphic_pane_cp2

0x4d0f,	// (0x000426f7) list_double_number_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double_number_pane_cp2

0x4d0f,	// (0x000426f7) list_double_pane_cp2_ParamLimits

0x4d0f,	// (0x000426f7) list_double_pane_cp2

0xaf80,	// (0x00048968) list_single_2graphic_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_2graphic_pane_cp2

0xaf80,	// (0x00048968) list_single_graphic_heading_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_graphic_heading_pane_cp2

0xaf80,	// (0x00048968) list_single_graphic_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_graphic_pane_cp2

0xaf80,	// (0x00048968) list_single_heading_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_heading_pane_cp2

0x4d1f,	// (0x00042707) list_single_large_graphic_pane_cp2_ParamLimits

0x4d1f,	// (0x00042707) list_single_large_graphic_pane_cp2

0xaf80,	// (0x00048968) list_single_number_heading_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_number_heading_pane_cp2

0xaf80,	// (0x00048968) list_single_number_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_number_pane_cp2

0xaf80,	// (0x00048968) list_single_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_pane_cp2

0x4d39,	// (0x00042721) bg_popup_sub_pane_cp22

0x9460,	// (0x00046e48) popup_side_volume_key_window_g1

0x948a,	// (0x00046e72) popup_side_volume_key_window_t1

0x94a6,	// (0x00046e8e) volume_small_pane_cp1

0x3d28,	// (0x00041710) bg_popup_sub_pane_cp24_ParamLimits

0x3d28,	// (0x00041710) bg_popup_sub_pane_cp24

0x4d4f,	// (0x00042737) fep_china_uni_candidate_pane_ParamLimits

0x4d4f,	// (0x00042737) fep_china_uni_candidate_pane

0x4d63,	// (0x0004274b) fep_china_uni_entry_pane

0x4d73,	// (0x0004275b) popup_fep_china_uni_window_g1

0x4d8f,	// (0x00042777) fep_china_uni_entry_pane_g1

0x4d97,	// (0x0004277f) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004d127) fep_china_uni_entry_pane_g

0x4d9f,	// (0x00042787) fep_entry_item_pane

0x4da9,	// (0x00042791) fep_candidate_item_pane

0x4db1,	// (0x00042799) fep_china_uni_candidate_pane_g1

0x4db9,	// (0x000427a1) fep_china_uni_candidate_pane_g2

0x4dc1,	// (0x000427a9) fep_china_uni_candidate_pane_g3

0x4dc9,	// (0x000427b1) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004d12c) fep_china_uni_candidate_pane_g

0x3cd0,	// (0x000416b8) fep_entry_item_pane_g1

0x4dd1,	// (0x000427b9) fep_entry_item_pane_t1_ParamLimits

0x4dd1,	// (0x000427b9) fep_entry_item_pane_t1

0x4de7,	// (0x000427cf) fep_candidate_item_pane_t1_ParamLimits

0x4de7,	// (0x000427cf) fep_candidate_item_pane_t1

0x4dfc,	// (0x000427e4) fep_candidate_item_pane_t2_ParamLimits

0x4dfc,	// (0x000427e4) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004d135) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004d135) fep_candidate_item_pane_t

0x3d36,	// (0x0004171e) list_highlight_pane_cp31_ParamLimits

0x3d36,	// (0x0004171e) list_highlight_pane_cp31

0x4e0e,	// (0x000427f6) level_1_signal_lsc

0x4e17,	// (0x000427ff) level_2_signal_lsc

0x4e20,	// (0x00042808) level_3_signal_lsc

0x4e29,	// (0x00042811) level_4_signal_lsc

0x4e32,	// (0x0004281a) level_5_signal_lsc

0x4e3b,	// (0x00042823) level_6_signal_lsc

0x4e44,	// (0x0004282c) level_7_signal_lsc

0x4e44,	// (0x0004282c) level_1_battery_lsc

0x4e4d,	// (0x00042835) level_2_battery_lsc

0x4e56,	// (0x0004283e) level_3_battery_lsc

0x4e5f,	// (0x00042847) level_4_battery_lsc

0x4e68,	// (0x00042850) level_5_battery_lsc

0x4e71,	// (0x00042859) level_6_battery_lsc

0x4e0e,	// (0x000427f6) level_7_battery_lsc

0x4e7a,	// (0x00042862) scroll_handle_focus_pane_g1

0x4e83,	// (0x0004286b) scroll_handle_focus_pane_g2

0x4e8c,	// (0x00042874) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004d13a) scroll_handle_focus_pane_g

0xafd3,	// (0x000489bb) list_single_2graphic_pane_g1_ParamLimits

0xafd3,	// (0x000489bb) list_single_2graphic_pane_g1

0x8d51,	// (0x00046739) list_single_2graphic_pane_g2_ParamLimits

0x8d51,	// (0x00046739) list_single_2graphic_pane_g2

0x8cb6,	// (0x0004669e) list_single_2graphic_pane_g3_ParamLimits

0x8cb6,	// (0x0004669e) list_single_2graphic_pane_g3

0xafdf,	// (0x000489c7) list_single_2graphic_pane_g4_ParamLimits

0xafdf,	// (0x000489c7) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004d141) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004d141) list_single_2graphic_pane_g

0xaff0,	// (0x000489d8) list_single_2graphic_pane_t1_ParamLimits

0xaff0,	// (0x000489d8) list_single_2graphic_pane_t1

0xb01e,	// (0x00048a06) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb01e,	// (0x00048a06) list_double2_graphic_large_graphic_pane_g1

0xaccc,	// (0x000486b4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaccc,	// (0x000486b4) list_double2_graphic_large_graphic_pane_g2

0xac9f,	// (0x00048687) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xac9f,	// (0x00048687) list_double2_graphic_large_graphic_pane_g3

0xb02e,	// (0x00048a16) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb02e,	// (0x00048a16) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004d14a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004d14a) list_double2_graphic_large_graphic_pane_g

0xb03a,	// (0x00048a22) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb03a,	// (0x00048a22) list_double2_graphic_large_graphic_pane_t1

0xb050,	// (0x00048a38) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb050,	// (0x00048a38) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004d153) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004d153) list_double2_graphic_large_graphic_pane_t

0x4f6d,	// (0x00042955) popup_fast_swap_window_ParamLimits

0x4f6d,	// (0x00042955) popup_fast_swap_window

0x4f89,	// (0x00042971) popup_side_volume_key_window

0x4fa3,	// (0x0004298b) stacon_top_pane

0x4fad,	// (0x00042995) status_pane_ParamLimits

0x4fad,	// (0x00042995) status_pane

0x4fa3,	// (0x0004298b) status_small_pane

0x3cda,	// (0x000416c2) control_pane

0x3cda,	// (0x000416c2) stacon_bottom_pane

0x4794,	// (0x0004217c) scroll_pane_cp121

0x478b,	// (0x00042173) set_content_pane

0xb062,	// (0x00048a4a) bg_active_tab_pane_g1_cp1

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp1

0xb06b,	// (0x00048a53) bg_active_tab_pane_g3_cp1

0xb062,	// (0x00048a4a) bg_passive_tab_pane_g1_cp1

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp1

0xb06b,	// (0x00048a53) bg_passive_tab_pane_g3_cp1

0xb074,	// (0x00048a5c) bg_active_tab_pane_g1_cp2

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp2

0xb07d,	// (0x00048a65) bg_active_tab_pane_g3_cp2

0xb074,	// (0x00048a5c) bg_passive_tab_pane_g1_cp2

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp2

0xb07d,	// (0x00048a65) bg_passive_tab_pane_g3_cp2

0xb086,	// (0x00048a6e) bg_active_tab_pane_g1_cp3

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp3

0xb08f,	// (0x00048a77) bg_active_tab_pane_g3_cp3

0xb086,	// (0x00048a6e) bg_passive_tab_pane_g1_cp3

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp3

0xb08f,	// (0x00048a77) bg_passive_tab_pane_g3_cp3

0xb098,	// (0x00048a80) bg_active_tab_pane_g1_cp4

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp4

0xb0a3,	// (0x00048a8b) bg_active_tab_pane_g3_cp4

0xb098,	// (0x00048a80) bg_passive_tab_pane_g1_cp4

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp4

0xb0a3,	// (0x00048a8b) bg_passive_tab_pane_g3_cp4

0x4ee5,	// (0x000428cd) bg_active_tab_pane_g1_cp5

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp5

0x4edc,	// (0x000428c4) bg_active_tab_pane_g3_cp5

0x4ee5,	// (0x000428cd) bg_passive_tab_pane_g1_cp5

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp5

0x4edc,	// (0x000428c4) bg_passive_tab_pane_g3_cp5

0xb0ae,	// (0x00048a96) list_set_graphic_pane_ParamLimits

0xb0ae,	// (0x00048a96) list_set_graphic_pane

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp4

0x4eee,	// (0x000428d6) list_set_graphic_pane_g1_ParamLimits

0x4eee,	// (0x000428d6) list_set_graphic_pane_g1

0x4efa,	// (0x000428e2) list_set_graphic_pane_g2_ParamLimits

0x4efa,	// (0x000428e2) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004d158) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004d158) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0004d4d0) volume_small_pane_cp_g

0x4f1e,	// (0x00042906) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4f1e,	// (0x00042906) list_double2_large_graphic_pane_g1_cp2

0x4f2c,	// (0x00042914) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f2c,	// (0x00042914) list_double2_large_graphic_pane_g2_cp2

0x4f3d,	// (0x00042925) list_double2_large_graphic_pane_g3_cp2

0x4f45,	// (0x0004292d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f45,	// (0x0004292d) list_double2_large_graphic_pane_t1_cp2

0x4f5b,	// (0x00042943) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f5b,	// (0x00042943) list_double2_large_graphic_pane_t2_cp2

0x6640,	// (0x00044028) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6640,	// (0x00044028) list_double_large_graphic_pane_g1_cp2

0x6653,	// (0x0004403b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6653,	// (0x0004403b) list_double_large_graphic_pane_g2_cp2

0x50cb,	// (0x00042ab3) list_double_large_graphic_pane_g3_cp2

0x6664,	// (0x0004404c) list_double_large_graphic_pane_g4_cp

0x666c,	// (0x00044054) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x666c,	// (0x00044054) list_double_large_graphic_pane_t1_cp2

0x6683,	// (0x0004406b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6683,	// (0x0004406b) list_double_large_graphic_pane_t2_cp2

0x4fbb,	// (0x000429a3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4fbb,	// (0x000429a3) list_double2_graphic_pane_g1_cp2

0x4fc9,	// (0x000429b1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4fc9,	// (0x000429b1) list_double2_graphic_pane_g2_cp2

0x4fda,	// (0x000429c2) list_double2_graphic_pane_g3_cp2

0x4fe4,	// (0x000429cc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4fe4,	// (0x000429cc) list_double2_graphic_pane_t1_cp2

0x4ffa,	// (0x000429e2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4ffa,	// (0x000429e2) list_double2_graphic_pane_t2_cp2

0x500c,	// (0x000429f4) list_single_number_heading_pane_g1_cp2_ParamLimits

0x500c,	// (0x000429f4) list_single_number_heading_pane_g1_cp2

0x5018,	// (0x00042a00) list_single_number_heading_pane_g2_cp2

0x5020,	// (0x00042a08) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5020,	// (0x00042a08) list_single_number_heading_pane_t1_cp2

0x5036,	// (0x00042a1e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5036,	// (0x00042a1e) list_single_number_heading_pane_t2_cp2

0x504a,	// (0x00042a32) list_single_number_heading_pane_t3_cp2_ParamLimits

0x504a,	// (0x00042a32) list_single_number_heading_pane_t3_cp2

0x500c,	// (0x000429f4) list_single_heading_pane_g1_cp2_ParamLimits

0x500c,	// (0x000429f4) list_single_heading_pane_g1_cp2

0x5018,	// (0x00042a00) list_single_heading_pane_g2_cp2

0x5020,	// (0x00042a08) list_single_heading_pane_t1_cp2_ParamLimits

0x5020,	// (0x00042a08) list_single_heading_pane_t1_cp2

0x6448,	// (0x00043e30) list_single_heading_pane_t2_cp2_ParamLimits

0x6448,	// (0x00043e30) list_single_heading_pane_t2_cp2

0x63e2,	// (0x00043dca) list_double_graphic_pane_g1_cp2_ParamLimits

0x63e2,	// (0x00043dca) list_double_graphic_pane_g1_cp2

0x63ee,	// (0x00043dd6) list_double_graphic_pane_g2_cp2_ParamLimits

0x63ee,	// (0x00043dd6) list_double_graphic_pane_g2_cp2

0x63fd,	// (0x00043de5) list_double_graphic_pane_g3_cp2

0x6405,	// (0x00043ded) list_double_graphic_pane_t1_cp2_ParamLimits

0x6405,	// (0x00043ded) list_double_graphic_pane_t1_cp2

0x641b,	// (0x00043e03) list_double_graphic_pane_t2_cp2_ParamLimits

0x641b,	// (0x00043e03) list_double_graphic_pane_t2_cp2

0x50bf,	// (0x00042aa7) list_double_number_pane_g1_cp2_ParamLimits

0x50bf,	// (0x00042aa7) list_double_number_pane_g1_cp2

0x50cb,	// (0x00042ab3) list_double_number_pane_g2_cp2

0x63a6,	// (0x00043d8e) list_double_number_pane_t1_cp2_ParamLimits

0x63a6,	// (0x00043d8e) list_double_number_pane_t1_cp2

0x63ba,	// (0x00043da2) list_double_number_pane_t2_cp2_ParamLimits

0x63ba,	// (0x00043da2) list_double_number_pane_t2_cp2

0x63d0,	// (0x00043db8) list_double_number_pane_t3_cp2_ParamLimits

0x63d0,	// (0x00043db8) list_double_number_pane_t3_cp2

0x631d,	// (0x00043d05) list_single_graphic_pane_g1_cp2_ParamLimits

0x631d,	// (0x00043d05) list_single_graphic_pane_g1_cp2

0x5123,	// (0x00042b0b) list_single_graphic_pane_g2_cp2_ParamLimits

0x5123,	// (0x00042b0b) list_single_graphic_pane_g2_cp2

0x512f,	// (0x00042b17) list_single_graphic_pane_g3_cp2

0x62f3,	// (0x00043cdb) list_single_graphic_pane_t1_cp2_ParamLimits

0x62f3,	// (0x00043cdb) list_single_graphic_pane_t1_cp2

0x5123,	// (0x00042b0b) list_single_number_pane_g1_cp2_ParamLimits

0x5123,	// (0x00042b0b) list_single_number_pane_g1_cp2

0x512f,	// (0x00042b17) list_single_number_pane_g2_cp2

0x62f3,	// (0x00043cdb) list_single_number_pane_t1_cp2_ParamLimits

0x62f3,	// (0x00043cdb) list_single_number_pane_t1_cp2

0x6309,	// (0x00043cf1) list_single_number_pane_t2_cp2_ParamLimits

0x6309,	// (0x00043cf1) list_single_number_pane_t2_cp2

0x4f2c,	// (0x00042914) list_double2_pane_g1_cp2_ParamLimits

0x4f2c,	// (0x00042914) list_double2_pane_g1_cp2

0x4f3d,	// (0x00042925) list_double2_pane_g2_cp2

0x5097,	// (0x00042a7f) list_double2_pane_t1_cp2_ParamLimits

0x5097,	// (0x00042a7f) list_double2_pane_t1_cp2

0x50ad,	// (0x00042a95) list_double2_pane_t2_cp2_ParamLimits

0x50ad,	// (0x00042a95) list_double2_pane_t2_cp2

0x50bf,	// (0x00042aa7) list_double_pane_g1_cp2_ParamLimits

0x50bf,	// (0x00042aa7) list_double_pane_g1_cp2

0x50cb,	// (0x00042ab3) list_double_pane_g2_cp2

0x50d3,	// (0x00042abb) list_double_pane_t1_cp2_ParamLimits

0x50d3,	// (0x00042abb) list_double_pane_t1_cp2

0x50e9,	// (0x00042ad1) list_double_pane_t2_cp2_ParamLimits

0x50e9,	// (0x00042ad1) list_double_pane_t2_cp2

0x5113,	// (0x00042afb) list_single_pane_cp2_g3

0x5123,	// (0x00042b0b) list_single_pane_g1_cp2_ParamLimits

0x5123,	// (0x00042b0b) list_single_pane_g1_cp2

0x512f,	// (0x00042b17) list_single_pane_g2_cp2

0x5137,	// (0x00042b1f) list_single_pane_t1_cp2_ParamLimits

0x5137,	// (0x00042b1f) list_single_pane_t1_cp2

0x514f,	// (0x00042b37) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x514f,	// (0x00042b37) list_single_large_graphic_pane_g1_cp2

0x515d,	// (0x00042b45) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x515d,	// (0x00042b45) list_single_large_graphic_pane_g2_cp2

0x5169,	// (0x00042b51) list_single_large_graphic_pane_g3_cp2

0x5171,	// (0x00042b59) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5171,	// (0x00042b59) list_single_large_graphic_pane_g4_cp1

0x518b,	// (0x00042b73) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x518b,	// (0x00042b73) list_single_large_graphic_pane_t1_cp2

0x62bd,	// (0x00043ca5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x62bd,	// (0x00043ca5) list_single_graphic_heading_pane_g1_cp2

0x628a,	// (0x00043c72) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x628a,	// (0x00043c72) list_single_graphic_heading_pane_g4_cp2

0x512f,	// (0x00042b17) list_single_graphic_heading_pane_g5_cp2

0x62c9,	// (0x00043cb1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62c9,	// (0x00043cb1) list_single_graphic_heading_pane_t1_cp2

0x62df,	// (0x00043cc7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x62df,	// (0x00043cc7) list_single_graphic_heading_pane_t2_cp2

0x627e,	// (0x00043c66) list_single_2graphic_pane_g1_cp2_ParamLimits

0x627e,	// (0x00043c66) list_single_2graphic_pane_g1_cp2

0x628a,	// (0x00043c72) list_single_2graphic_pane_g2_cp2_ParamLimits

0x628a,	// (0x00043c72) list_single_2graphic_pane_g2_cp2

0x512f,	// (0x00042b17) list_single_2graphic_pane_g3_cp2

0x629b,	// (0x00043c83) list_single_2graphic_pane_g4_cp2_ParamLimits

0x629b,	// (0x00043c83) list_single_2graphic_pane_g4_cp2

0x62a7,	// (0x00043c8f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x62a7,	// (0x00043c8f) list_single_2graphic_pane_t1_cp2

0x3cd0,	// (0x000416b8) list_highlight_pane_g10_cp1

0x5e66,	// (0x0004384e) list_highlight_pane_g1_cp1

0x5e6e,	// (0x00043856) list_highlight_pane_g2_cp1

0x5e76,	// (0x0004385e) list_highlight_pane_g3_cp1

0x5e7e,	// (0x00043866) list_highlight_pane_g4_cp1

0x5e86,	// (0x0004386e) list_highlight_pane_g5_cp1

0x5e8e,	// (0x00043876) list_highlight_pane_g6_cp1

0x5e96,	// (0x0004387e) list_highlight_pane_g7_cp1

0x5e9e,	// (0x00043886) list_highlight_pane_g8_cp1

0x5ea6,	// (0x0004388e) list_highlight_pane_g9_cp1

0xc29f,	// (0x00049c87) form_field_slider_pane_t3

0xc2ad,	// (0x00049c95) form_field_slider_pane_t4

0x5d9a,	// (0x00043782) slider_form_pane_ParamLimits

0x5d9a,	// (0x00043782) slider_form_pane

0x3cda,	// (0x000416c2) control_abbreviations

0x3cda,	// (0x000416c2) control_conventions

0x3cda,	// (0x000416c2) control_definitions

0x3cda,	// (0x000416c2) format_table_attribute

0x6494,	// (0x00043e7c) bg_popup_preview_window_pane_g9

0x3cda,	// (0x000416c2) format_table_data2

0x3cda,	// (0x000416c2) format_table_data3

0x3cda,	// (0x000416c2) format_table_data_example

0x0008,

0x3cda,	// (0x000416c2) intro_purpose

0xf905,	// (0x0004d2ed) bg_popup_preview_window_pane_g

0x3cda,	// (0x000416c2) texts_category

0x3cda,	// (0x000416c2) texts_graphics

0x51a1,	// (0x00042b89) text_digital

0x51b0,	// (0x00042b98) text_primary

0x51bf,	// (0x00042ba7) text_primary_small

0x51ce,	// (0x00042bb6) text_secondary

0x51dd,	// (0x00042bc5) text_title

0x6927,	// (0x0004430f) bg_passive_tab_pane_g1_cp3_srt

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp3_srt

0x691e,	// (0x00044306) bg_passive_tab_pane_g3_cp3_srt

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp3_srt_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp3_srt

0x6930,	// (0x00044318) tabs_4_active_pane_srt_g1

0xc608,	// (0x00049ff0) tabs_4_active_pane_srt_t1_ParamLimits

0xc608,	// (0x00049ff0) tabs_4_active_pane_srt_t1

0x6927,	// (0x0004430f) bg_active_tab_pane_g1_cp3_copy1

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp3_copy1

0x691e,	// (0x00044306) bg_active_tab_pane_g3_cp3_copy1

0x3d36,	// (0x0004171e) tabs_2_long_active_pane_srt_ParamLimits

0x3d36,	// (0x0004171e) tabs_2_long_active_pane_srt

0x3d36,	// (0x0004171e) tabs_2_long_passive_pane_srt_ParamLimits

0x3d36,	// (0x0004171e) tabs_2_long_passive_pane_srt

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp4_srt_ParamLimits

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp4_srt

0x6852,	// (0x0004423a) bg_passive_tab_pane_g1_cp4_srt

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp4_srt

0x6849,	// (0x00044231) bg_passive_tab_pane_g3_cp4_srt

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp4_srt_ParamLimits

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp4_srt

0xc44f,	// (0x00049e37) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc44f,	// (0x00049e37) tabs_2_long_active_pane_srt_t1

0x6852,	// (0x0004423a) bg_active_tab_pane_g1_cp4_srt

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp4_srt

0x6849,	// (0x00044231) bg_active_tab_pane_g3_cp4_srt

0x3d28,	// (0x00041710) tabs_3_long_active_pane_srt_ParamLimits

0x3d28,	// (0x00041710) tabs_3_long_active_pane_srt

0x3d28,	// (0x00041710) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3d28,	// (0x00041710) tabs_3_long_passive_pane_cp_srt

0x3d28,	// (0x00041710) tabs_3_long_passive_pane_srt_ParamLimits

0x3d28,	// (0x00041710) tabs_3_long_passive_pane_srt

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp5_srt_ParamLimits

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp5_srt

0x4ee5,	// (0x000428cd) bg_passive_tab_pane_g1_cp5_srt

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp5_srt

0x4edc,	// (0x000428c4) bg_passive_tab_pane_g3_cp5_srt

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp5_srt_ParamLimits

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp5_srt

0xc43d,	// (0x00049e25) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc43d,	// (0x00049e25) tabs_3_long_active_pane_srt_t1

0x4ee5,	// (0x000428cd) bg_active_tab_pane_g1_cp5_srt

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp5_srt

0x4edc,	// (0x000428c4) bg_active_tab_pane_g3_cp5_srt

0x683b,	// (0x00044223) navi_text_pane_srt_t1

0x6833,	// (0x0004421b) navi_icon_pane_srt_g1

0x52db,	// (0x00042cc3) midp_editing_number_pane_srt

0x51ec,	// (0x00042bd4) midp_ticker_pane_srt

0x52e3,	// (0x00042ccb) midp_ticker_pane_srt_g1

0x52eb,	// (0x00042cd3) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004d177) midp_ticker_pane_srt_g

0x52f3,	// (0x00042cdb) midp_ticker_pane_srt_t1

0x6824,	// (0x0004420c) midp_editing_number_pane_t1_copy1

0xb0cc,	// (0x00048ab4) listscroll_midp_pane

0xb0cc,	// (0x00048ab4) midp_form_pane

0x51f4,	// (0x00042bdc) midp_info_popup_window_ParamLimits

0x51f4,	// (0x00042bdc) midp_info_popup_window

0x485d,	// (0x00042245) bg_popup_sub_pane_cp50_ParamLimits

0x485d,	// (0x00042245) bg_popup_sub_pane_cp50

0x5ab7,	// (0x0004349f) listscroll_midp_info_pane_ParamLimits

0x5ab7,	// (0x0004349f) listscroll_midp_info_pane

0x5a9f,	// (0x00043487) listscroll_form_midp_pane_ParamLimits

0x5a9f,	// (0x00043487) listscroll_form_midp_pane

0x5aab,	// (0x00043493) scroll_bar_cp050

0xc287,	// (0x00049c6f) list_midp_pane

0x71fe,	// (0x00044be6) signal_pane_g2_cp

0x59d1,	// (0x000433b9) listscroll_midp_info_pane_t1_ParamLimits

0x59d1,	// (0x000433b9) listscroll_midp_info_pane_t1

0x59e9,	// (0x000433d1) listscroll_midp_info_pane_t2_ParamLimits

0x59e9,	// (0x000433d1) listscroll_midp_info_pane_t2

0x5a27,	// (0x0004340f) listscroll_midp_info_pane_t3_ParamLimits

0x5a27,	// (0x0004340f) listscroll_midp_info_pane_t3

0x5a61,	// (0x00043449) listscroll_midp_info_pane_t4_ParamLimits

0x5a61,	// (0x00043449) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004d228) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004d228) listscroll_midp_info_pane_t

0x48c4,	// (0x000422ac) scroll_pane_cp21

0x5975,	// (0x0004335d) form_midp_field_choice_group_pane

0x597e,	// (0x00043366) form_midp_field_text_pane

0x59b7,	// (0x0004339f) form_midp_field_time_pane

0x59bf,	// (0x000433a7) form_midp_gauge_slider_pane

0x59c8,	// (0x000433b0) form_midp_gauge_wait_pane

0x3cda,	// (0x000416c2) form_midp_image_pane

0xb2e7,	// (0x00048ccf) list_single_midp_pane_ParamLimits

0xb2e7,	// (0x00048ccf) list_single_midp_pane

0xc248,	// (0x00049c30) form_midp_field_text_pane_t1

0x581c,	// (0x00043204) input_focus_pane_cp050

0x5964,	// (0x0004334c) list_midp_form_text_pane

0x5933,	// (0x0004331b) form_midp_field_choice_group_pane_t1

0x5941,	// (0x00043329) input_focus_pane_cp051

0x5955,	// (0x0004333d) list_midp_choice_pane

0x3cda,	// (0x000416c2) status_idle_pane

0x5917,	// (0x000432ff) form_midp_field_time_pane_t1

0x3cd0,	// (0x000416b8) wait_anim_pane_g2_copy1

0x5925,	// (0x0004330d) form_midp_field_time_pane_t2

0x0001,

0x524d,	// (0x00042c35) aid_navinavi_width_2_pane

0xf83b,	// (0x0004d223) form_midp_field_time_pane_t

0x3cda,	// (0x000416c2) input_focus_pane_cp052

0x3cda,	// (0x000416c2) bg_input_focus_pane_cp040

0x58f3,	// (0x000432db) form_midp_gauge_slider_pane_t1

0x5901,	// (0x000432e9) form_midp_gauge_slider_pane_t2

0xc22c,	// (0x00049c14) form_midp_gauge_slider_pane_t3

0xc23a,	// (0x00049c22) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004d21a) form_midp_gauge_slider_pane_t

0x590f,	// (0x000432f7) form_midp_slider_pane

0x3d36,	// (0x0004171e) bg_input_focus_pane_cp041_ParamLimits

0x3d36,	// (0x0004171e) bg_input_focus_pane_cp041

0x58c0,	// (0x000432a8) form_midp_gauge_wait_pane_t1_ParamLimits

0x58c0,	// (0x000432a8) form_midp_gauge_wait_pane_t1

0x58d2,	// (0x000432ba) form_midp_gauge_wait_pane_t2_ParamLimits

0x58d2,	// (0x000432ba) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004d215) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004d215) form_midp_gauge_wait_pane_t

0x58e4,	// (0x000432cc) form_midp_wait_pane_ParamLimits

0x58e4,	// (0x000432cc) form_midp_wait_pane

0x588a,	// (0x00043272) form_midp_image_pane_g1

0x5893,	// (0x0004327b) form_midp_image_pane_t1

0x58a2,	// (0x0004328a) form_midp_image_pane_t2

0x58b1,	// (0x00043299) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004d20e) form_midp_image_pane_t

0x5881,	// (0x00043269) list_single_midp_pane_g1

0xb2d8,	// (0x00048cc0) list_single_midp_pane_t1

0xc1fc,	// (0x00049be4) list_midp_form_item_pane_ParamLimits

0xc1fc,	// (0x00049be4) list_midp_form_item_pane

0x5207,	// (0x00042bef) list_midp_form_item_pane_t1

0x5216,	// (0x00042bfe) midp_ticker_pane_g1

0x5222,	// (0x00042c0a) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004d15d) midp_ticker_pane_g

0xb181,	// (0x00048b69) midp_ticker_pane_t1

0xc5be,	// (0x00049fa6) midp_editing_number_pane_t1

0x68b2,	// (0x0004429a) midp_editing_number_pane

0x68c1,	// (0x000442a9) midp_ticker_pane

0x6814,	// (0x000441fc) ai_message_heading_pane

0x3cda,	// (0x000416c2) bg_popup_window_pane_cp14

0x681c,	// (0x00044204) listscroll_ai_message_pane

0x679e,	// (0x00044186) ai_message_heading_pane_g1_ParamLimits

0x679e,	// (0x00044186) ai_message_heading_pane_g1

0x67aa,	// (0x00044192) ai_message_heading_pane_g2_ParamLimits

0x67aa,	// (0x00044192) ai_message_heading_pane_g2

0x67b6,	// (0x0004419e) ai_message_heading_pane_g3_ParamLimits

0x67b6,	// (0x0004419e) ai_message_heading_pane_g3

0x67c2,	// (0x000441aa) ai_message_heading_pane_g4_ParamLimits

0x67c2,	// (0x000441aa) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004d34f) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004d34f) ai_message_heading_pane_g

0x67ce,	// (0x000441b6) ai_message_heading_pane_t1_ParamLimits

0x67ce,	// (0x000441b6) ai_message_heading_pane_t1

0x67e8,	// (0x000441d0) ai_message_heading_pane_t2_ParamLimits

0x67e8,	// (0x000441d0) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004d358) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004d358) ai_message_heading_pane_t

0x67fa,	// (0x000441e2) bg_popup_heading_pane_cp1_ParamLimits

0x67fa,	// (0x000441e2) bg_popup_heading_pane_cp1

0x678c,	// (0x00044174) list_ai_message_pane_ParamLimits

0x678c,	// (0x00044174) list_ai_message_pane

0x48c4,	// (0x000422ac) scroll_pane_cp10

0x6728,	// (0x00044110) list_ai_message_pane_g1

0x6730,	// (0x00044118) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004d32c) list_ai_message_pane_g

0x6738,	// (0x00044120) list_ai_message_pane_t1_ParamLimits

0x6738,	// (0x00044120) list_ai_message_pane_t1

0x674d,	// (0x00044135) list_ai_message_pane_t2_ParamLimits

0x674d,	// (0x00044135) list_ai_message_pane_t2

0x6762,	// (0x0004414a) list_ai_message_pane_t3_ParamLimits

0x6762,	// (0x0004414a) list_ai_message_pane_t3

0x6777,	// (0x0004415f) list_ai_message_pane_t4_ParamLimits

0x6777,	// (0x0004415f) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004d331) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004d331) list_ai_message_pane_t

0xc427,	// (0x00049e0f) cell_ai_soft_ind_pane_ParamLimits

0xc427,	// (0x00049e0f) cell_ai_soft_ind_pane

0x522e,	// (0x00042c16) cell_ai_soft_ind_pane_g1_ParamLimits

0x522e,	// (0x00042c16) cell_ai_soft_ind_pane_g1

0x3cda,	// (0x000416c2) grid_highlight_cp1

0x523b,	// (0x00042c23) text_secondary_cp56_ParamLimits

0x523b,	// (0x00042c23) text_secondary_cp56

0x66fd,	// (0x000440e5) example_general_pane_ParamLimits

0x66fd,	// (0x000440e5) example_general_pane

0x6709,	// (0x000440f1) example_parent_pane_g1_ParamLimits

0x6709,	// (0x000440f1) example_parent_pane_g1

0x6715,	// (0x000440fd) example_parent_pane_t1_ParamLimits

0x6715,	// (0x000440fd) example_parent_pane_t1

0xbc42,	// (0x0004962a) popup_preview_text_window_ParamLimits

0xbc42,	// (0x0004962a) popup_preview_text_window

0x511b,	// (0x00042b03) list_single_pane_cp2_g4

0x410b,	// (0x00041af3) bg_popup_preview_window_pane_ParamLimits

0x410b,	// (0x00041af3) bg_popup_preview_window_pane

0x649c,	// (0x00043e84) popup_preview_text_window_t1_ParamLimits

0x649c,	// (0x00043e84) popup_preview_text_window_t1

0x64ba,	// (0x00043ea2) popup_preview_text_window_t2_ParamLimits

0x64ba,	// (0x00043ea2) popup_preview_text_window_t2

0x6503,	// (0x00043eeb) popup_preview_text_window_t3_ParamLimits

0x6503,	// (0x00043eeb) popup_preview_text_window_t3

0x6548,	// (0x00043f30) popup_preview_text_window_t4_ParamLimits

0x6548,	// (0x00043f30) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004d300) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004d300) popup_preview_text_window_t

0x65c6,	// (0x00043fae) scroll_pane_cp11

0x572c,	// (0x00043114) bg_popup_preview_window_pane_g1

0x645c,	// (0x00043e44) bg_popup_preview_window_pane_g2

0x6464,	// (0x00043e4c) bg_popup_preview_window_pane_g3

0x646c,	// (0x00043e54) bg_popup_preview_window_pane_g4

0x6474,	// (0x00043e5c) bg_popup_preview_window_pane_g5

0x647c,	// (0x00043e64) bg_popup_preview_window_pane_g6

0x6484,	// (0x00043e6c) bg_popup_preview_window_pane_g7

0x648c,	// (0x00043e74) bg_popup_preview_window_pane_g8

0x8835,	// (0x0004621d) aid_popup_width_pane

0xbc20,	// (0x00049608) popup_midp_note_alarm_window_ParamLimits

0xbc20,	// (0x00049608) popup_midp_note_alarm_window

0x47a5,	// (0x0004218d) data_form_pane_ParamLimits

0x91c5,	// (0x00046bad) form_field_data_pane_g1

0x91cf,	// (0x00046bb7) form_field_data_pane_t1_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_ParamLimits

0x47bf,	// (0x000421a7) data_form_wide_pane_ParamLimits

0x91e9,	// (0x00046bd1) form_field_data_wide_pane_g1

0x91f5,	// (0x00046bdd) form_field_data_wide_pane_t1_ParamLimits

0x4520,	// (0x00041f08) input_focus_pane_cp6_ParamLimits

0xae90,	// (0x00048878) input_popup_find_pane_g1_ParamLimits

0xae90,	// (0x00048878) input_popup_find_pane_g1

0x930f,	// (0x00046cf7) aid_navi_side_left_pane

0x9324,	// (0x00046d0c) aid_navi_side_right_pane

0x5f43,	// (0x0004392b) bg_popup_window_pane_cp30_ParamLimits

0x5f43,	// (0x0004392b) bg_popup_window_pane_cp30

0x5fbd,	// (0x000439a5) popup_midp_note_alarm_window_g1_ParamLimits

0x5fbd,	// (0x000439a5) popup_midp_note_alarm_window_g1

0x5fed,	// (0x000439d5) popup_midp_note_alarm_window_t1_ParamLimits

0x5fed,	// (0x000439d5) popup_midp_note_alarm_window_t1

0x608e,	// (0x00043a76) popup_midp_note_alarm_window_t2_ParamLimits

0x608e,	// (0x00043a76) popup_midp_note_alarm_window_t2

0x613c,	// (0x00043b24) popup_midp_note_alarm_window_t3_ParamLimits

0x613c,	// (0x00043b24) popup_midp_note_alarm_window_t3

0x6164,	// (0x00043b4c) popup_midp_note_alarm_window_t4_ParamLimits

0x6164,	// (0x00043b4c) popup_midp_note_alarm_window_t4

0x6184,	// (0x00043b6c) popup_midp_note_alarm_window_t5_ParamLimits

0x6184,	// (0x00043b6c) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004d29d) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004d29d) popup_midp_note_alarm_window_t

0x624e,	// (0x00043c36) wait_bar_pane_cp1_ParamLimits

0x624e,	// (0x00043c36) wait_bar_pane_cp1

0x3cda,	// (0x000416c2) wait_anim_pane_copy1

0x3cda,	// (0x000416c2) wait_border_pane_copy1

0x5c5b,	// (0x00043643) wait_border_pane_g1_copy1

0xace9,	// (0x000486d1) form_field_popup_pane_g1

0xacf1,	// (0x000486d9) form_field_popup_pane_t1_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_cp7_ParamLimits

0x47df,	// (0x000421c7) list_form_pane_ParamLimits

0xad0b,	// (0x000486f3) form_field_popup_wide_pane_g1

0xad13,	// (0x000486fb) form_field_popup_wide_pane_t1_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_cp8_ParamLimits

0x47eb,	// (0x000421d3) list_form_wide_pane_ParamLimits

0x6957,	// (0x0004433f) aid_size_cell_graphic_pane

0xad9f,	// (0x00048787) data_form_pane_t1_ParamLimits

0xb347,	// (0x00048d2f) data_form_wide_pane_t1_ParamLimits

0xbe8c,	// (0x00049874) bg_status_flat_pane

0xa9bc,	// (0x000483a4) title_pane_t1_ParamLimits

0x3cf0,	// (0x000416d8) title_pane_t2_ParamLimits

0x3d16,	// (0x000416fe) title_pane_t3_ParamLimits

0xf573,	// (0x0004cf5b) title_pane_t_ParamLimits

0x4c72,	// (0x0004265a) level_1_signal_ParamLimits

0x4c7f,	// (0x00042667) level_2_signal_ParamLimits

0x4c8c,	// (0x00042674) level_3_signal_ParamLimits

0x4c99,	// (0x00042681) level_4_signal_ParamLimits

0x4ca6,	// (0x0004268e) level_5_signal_ParamLimits

0x4cb3,	// (0x0004269b) level_6_signal_ParamLimits

0x4cc0,	// (0x000426a8) level_7_signal_ParamLimits

0x4c72,	// (0x0004265a) level_1_battery_ParamLimits

0x4c7f,	// (0x00042667) level_2_battery_ParamLimits

0x4c8c,	// (0x00042674) level_3_battery_ParamLimits

0x4c99,	// (0x00042681) level_4_battery_ParamLimits

0x4ca6,	// (0x0004268e) level_5_battery_ParamLimits

0x4cb3,	// (0x0004269b) level_6_battery_ParamLimits

0x4cc0,	// (0x000426a8) level_7_battery_ParamLimits

0x5e66,	// (0x0004384e) bg_status_flat_pane_g1

0x5e6e,	// (0x00043856) bg_status_flat_pane_g2

0x5e76,	// (0x0004385e) bg_status_flat_pane_g3

0x5e7e,	// (0x00043866) bg_status_flat_pane_g4

0x5e86,	// (0x0004386e) bg_status_flat_pane_g5

0x5e8e,	// (0x00043876) bg_status_flat_pane_g6

0x5e96,	// (0x0004387e) bg_status_flat_pane_g7

0xaa2c,	// (0x00048414) tabs_3_active_pane_t1_ParamLimits

0xaa2c,	// (0x00048414) tabs_3_passive_pane_t1_ParamLimits

0xaa46,	// (0x0004842e) tabs_4_active_pane_t1_ParamLimits

0xaa46,	// (0x0004842e) tabs_4_1_passive_pane_t1_ParamLimits

0xaea6,	// (0x0004888e) tabs_2_active_pane_t1_ParamLimits

0xaea6,	// (0x0004888e) tabs_2_passive_pane_t1_ParamLimits

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp4_ParamLimits

0xaeb8,	// (0x000488a0) tabs_2_long_active_pane_t1_ParamLimits

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp4_ParamLimits

0x986b,	// (0x00047253) list_single_midp_graphic_pane_t1_ParamLimits

0x56ea,	// (0x000430d2) bg_active_tab_pane_cp5_ParamLimits

0xaed7,	// (0x000488bf) tabs_3_long_active_pane_t1_ParamLimits

0xaecb,	// (0x000488b3) bg_passive_tab_pane_cp5_ParamLimits

0x986b,	// (0x00047253) list_single_midp_graphic_pane_t1

0xbe8c,	// (0x00049874) bg_status_flat_pane_ParamLimits

0x55f1,	// (0x00042fd9) indicator_pane_cp2_ParamLimits

0x55f1,	// (0x00042fd9) indicator_pane_cp2

0xc040,	// (0x00049a28) navi_pane_srt_ParamLimits

0xc040,	// (0x00049a28) navi_pane_srt

0x5619,	// (0x00043001) popup_clock_digital_analogue_window_cp1

0x3d7a,	// (0x00041762) indicator_pane_t1

0x51ec,	// (0x00042bd4) copy_highlight_pane

0x51ec,	// (0x00042bd4) cursor_graphics_pane

0x51ec,	// (0x00042bd4) graphic_within_text_pane

0x51ec,	// (0x00042bd4) link_highlight_pane

0x6589,	// (0x00043f71) popup_preview_text_window_t5_ParamLimits

0x6589,	// (0x00043f71) popup_preview_text_window_t5

0x5255,	// (0x00042c3d) cursor_digital_pane

0x5255,	// (0x00042c3d) cursor_primary_pane

0x5266,	// (0x00042c4e) cursor_primary_small_pane

0x526e,	// (0x00042c56) cursor_secondary_pane

0x5276,	// (0x00042c5e) cursor_title_pane

0x5255,	// (0x00042c3d) link_highlight_digital_pane

0x525d,	// (0x00042c45) link_highlight_primary_pane

0x5266,	// (0x00042c4e) link_highlight_primary_small_pane

0x526e,	// (0x00042c56) link_highlight_secondary_pane

0x5276,	// (0x00042c5e) link_highlight_title_pane

0x5255,	// (0x00042c3d) copy_highlight_digital_pane

0x5255,	// (0x00042c3d) copy_highlight_primary_pane

0x5266,	// (0x00042c4e) copy_highlight_primary_small_pane

0x526e,	// (0x00042c56) copy_highlight_secondary_pane

0x5276,	// (0x00042c5e) copy_highlight_title_pane

0x526e,	// (0x00042c56) graphic_text_digital_pane

0x5ee6,	// (0x000438ce) graphic_text_primary_pane

0x5eef,	// (0x000438d7) graphic_text_primary_small_pane

0x5266,	// (0x00042c4e) graphic_text_secondary_pane

0x5255,	// (0x00042c3d) graphic_text_title_pane

0xb193,	// (0x00048b7b) cursor_primary_pane_g1

0x5ed8,	// (0x000438c0) cursor_text_primary_t1

0xc2cf,	// (0x00049cb7) cursor_primary_small_pane_g1

0x5eca,	// (0x000438b2) cursor_text_primary_small_t1

0xc2c5,	// (0x00049cad) cursor_primary_small_pane_g1_copy1

0x5ebc,	// (0x000438a4) cursor_text_primary_small_t1_copy1

0x5eae,	// (0x00043896) cursor_text_title_t1

0xc2bb,	// (0x00049ca3) cursor_title_pane_g1

0xb193,	// (0x00048b7b) cursor_digital_pane_g1

0x527e,	// (0x00042c66) cursor_text_digital_t1

0x5e4f,	// (0x00043837) link_highlight_primary_pane_g1

0x5e57,	// (0x0004383f) link_highlight_primary_pane_t1

0x528c,	// (0x00042c74) link_highlight_primary_small_pane_g1

0x5294,	// (0x00042c7c) link_highlight_primary_small_pane_t1

0x528c,	// (0x00042c74) link_highlight_secondary_pane_g1

0x52a3,	// (0x00042c8b) link_highlight_secondary_pane_t1

0x5dc3,	// (0x000437ab) link_highlight_title_pane_g1

0x5dcb,	// (0x000437b3) link_highlight_title_pane_t1

0x5dac,	// (0x00043794) link_highlight_digital_pane_g1

0x5db4,	// (0x0004379c) link_highlight_digital_pane_t1

0x5ca0,	// (0x00043688) copy_highlight_primary_pane_g1

0x5ca8,	// (0x00043690) copy_highlight_primary_pane_t1

0x5c7a,	// (0x00043662) copy_highlight_primary_small_pane_g1

0x5c91,	// (0x00043679) copy_highlight_primary_small_pane_t1

0x52b2,	// (0x00042c9a) copy_highlight_secondary_pane_g1

0x52ba,	// (0x00042ca2) copy_highlight_secondary_pane_t1

0x5c7a,	// (0x00043662) copy_highlight_title_pane_g1

0x5c82,	// (0x0004366a) copy_highlight_title_pane_t1

0x5ca0,	// (0x00043688) copy_highlight_digital_pane_g1

0x6aed,	// (0x000444d5) copy_highlight_digital_pane_t1

0x6a41,	// (0x00044429) graphic_text_primary_pane_g1

0x6ad1,	// (0x000444b9) graphic_text_primary_pane_t1

0x6adf,	// (0x000444c7) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004d3cc) graphic_text_primary_pane_t

0x6aad,	// (0x00044495) graphic_text_primary_small_pane_g1

0x6ab5,	// (0x0004449d) graphic_text_primary_small_pane_t1

0x6ac3,	// (0x000444ab) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004d3c7) graphic_text_primary_small_pane_t

0x6a89,	// (0x00044471) graphic_text_secondary_pane_g1

0x6a91,	// (0x00044479) graphic_text_secondary_pane_t1

0x6a9f,	// (0x00044487) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004d3c2) graphic_text_secondary_pane_t

0x6a65,	// (0x0004444d) graphic_text_title_pane_g1

0x6a6d,	// (0x00044455) graphic_text_title_pane_t1

0x6a7b,	// (0x00044463) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004d3bd) graphic_text_title_pane_t

0x6a41,	// (0x00044429) graphic_text_digital_pane_g1

0x6a49,	// (0x00044431) graphic_text_digital_pane_t1

0x6a57,	// (0x0004443f) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004d3b8) graphic_text_digital_pane_t

0x3d36,	// (0x0004171e) navi_icon_pane_srt_ParamLimits

0x3d36,	// (0x0004171e) navi_icon_pane_srt

0x3cda,	// (0x000416c2) navi_midp_pane_srt

0x3cda,	// (0x000416c2) navi_navi_pane_srt

0x3d36,	// (0x0004171e) navi_text_pane_srt_ParamLimits

0x3d36,	// (0x0004171e) navi_text_pane_srt

0x6a0c,	// (0x000443f4) navi_navi_icon_text_pane_srt

0x6a26,	// (0x0004440e) navi_navi_pane_srt_g1_ParamLimits

0x6a26,	// (0x0004440e) navi_navi_pane_srt_g1

0x6a14,	// (0x000443fc) navi_navi_pane_srt_g2_ParamLimits

0x6a14,	// (0x000443fc) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004d3b3) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004d3b3) navi_navi_pane_srt_g

0x6a38,	// (0x00044420) navi_navi_tabs_pane_srt

0x6a0c,	// (0x000443f4) navi_navi_text_pane_srt

0x6a0c,	// (0x000443f4) navi_navi_volume_pane_srt

0x69fd,	// (0x000443e5) navi_navi_text_pane_srt_t1

0x9beb,	// (0x000475d3) navi_navi_volume_pane_srt_g1

0x9bf3,	// (0x000475db) volume_small_pane_srt_ParamLimits

0x9bf3,	// (0x000475db) volume_small_pane_srt

0x95ef,	// (0x00046fd7) volume_small_pane_srt_g1_ParamLimits

0x95ef,	// (0x00046fd7) volume_small_pane_srt_g1

0x95ff,	// (0x00046fe7) volume_small_pane_srt_g2_ParamLimits

0x95ff,	// (0x00046fe7) volume_small_pane_srt_g2

0x9610,	// (0x00046ff8) volume_small_pane_srt_g3_ParamLimits

0x9610,	// (0x00046ff8) volume_small_pane_srt_g3

0x9621,	// (0x00047009) volume_small_pane_srt_g4_ParamLimits

0x9621,	// (0x00047009) volume_small_pane_srt_g4

0x9632,	// (0x0004701a) volume_small_pane_srt_g5_ParamLimits

0x9632,	// (0x0004701a) volume_small_pane_srt_g5

0x9643,	// (0x0004702b) volume_small_pane_srt_g6_ParamLimits

0x9643,	// (0x0004702b) volume_small_pane_srt_g6

0x9654,	// (0x0004703c) volume_small_pane_srt_g7_ParamLimits

0x9654,	// (0x0004703c) volume_small_pane_srt_g7

0x9665,	// (0x0004704d) volume_small_pane_srt_g8_ParamLimits

0x9665,	// (0x0004704d) volume_small_pane_srt_g8

0x9676,	// (0x0004705e) volume_small_pane_srt_g9_ParamLimits

0x9676,	// (0x0004705e) volume_small_pane_srt_g9

0x9687,	// (0x0004706f) volume_small_pane_srt_g10_ParamLimits

0x9687,	// (0x0004706f) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004d162) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004d162) volume_small_pane_srt_g

0x41b4,	// (0x00041b9c) query_popup_data_pane_cp2

0x69e3,	// (0x000443cb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x69e3,	// (0x000443cb) navi_navi_icon_text_pane_srt_t1

0x5ee6,	// (0x000438ce) navi_tabs_2_long_pane_srt

0x5ee6,	// (0x000438ce) navi_tabs_2_pane_srt

0x5ee6,	// (0x000438ce) navi_tabs_3_long_pane_srt

0x5ee6,	// (0x000438ce) navi_tabs_3_pane_srt

0x5ee6,	// (0x000438ce) navi_tabs_4_pane_srt

0x9bcb,	// (0x000475b3) tabs_2_active_pane_srt_ParamLimits

0x9bcb,	// (0x000475b3) tabs_2_active_pane_srt

0x9bdb,	// (0x000475c3) tabs_2_passive_pane_srt_ParamLimits

0x9bdb,	// (0x000475c3) tabs_2_passive_pane_srt

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp1_srt

0x69ca,	// (0x000443b2) bg_passive_tab_pane_g1_cp1_srt

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp1_srt

0x69c1,	// (0x000443a9) bg_passive_tab_pane_g3_cp1_srt

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp1_srt_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp1_srt

0x69d3,	// (0x000443bb) tabs_2_active_pane_srt_g1

0xc67f,	// (0x0004a067) tabs_2_active_pane_srt_t1_ParamLimits

0xc67f,	// (0x0004a067) tabs_2_active_pane_srt_t1

0x69ca,	// (0x000443b2) bg_active_tab_pane_g1_cp1_srt

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp1_srt

0x69c1,	// (0x000443a9) bg_active_tab_pane_g3_cp1_srt

0x9b98,	// (0x00047580) tabs_3_active_pane_srt_ParamLimits

0x9b98,	// (0x00047580) tabs_3_active_pane_srt

0x9ba9,	// (0x00047591) tabs_3_passive_pane_cp_srt_ParamLimits

0x9ba9,	// (0x00047591) tabs_3_passive_pane_cp_srt

0x9bba,	// (0x000475a2) tabs_3_passive_pane_srt_ParamLimits

0x9bba,	// (0x000475a2) tabs_3_passive_pane_srt

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x48fc,	// (0x000422e4) bg_passive_tab_pane_cp2_srt

0x52d2,	// (0x00042cba) bg_passive_tab_pane_g1_cp2_srt

0x4e95,	// (0x0004287d) bg_passive_tab_pane_g2_cp2_srt

0x52c9,	// (0x00042cb1) bg_passive_tab_pane_g3_cp2_srt

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp2_srt_ParamLimits

0x3d36,	// (0x0004171e) bg_active_tab_pane_cp2_srt

0x69b9,	// (0x000443a1) tabs_3_active_pane_srt_g1

0xc66d,	// (0x0004a055) tabs_3_active_pane_srt_t1_ParamLimits

0xc66d,	// (0x0004a055) tabs_3_active_pane_srt_t1

0x52d2,	// (0x00042cba) bg_active_tab_pane_g1_cp2_srt

0x4e95,	// (0x0004287d) bg_active_tab_pane_g2_cp2_srt

0x52c9,	// (0x00042cb1) bg_active_tab_pane_g3_cp2_srt

0x9b50,	// (0x00047538) tabs_4_active_pane_srt_ParamLimits

0x9b50,	// (0x00047538) tabs_4_active_pane_srt

0x9b62,	// (0x0004754a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9b62,	// (0x0004754a) tabs_4_passive_pane_cp2_srt

0x53f6,	// (0x00042dde) aid_size_cell_toolbar

0xaecb,	// (0x000488b3) main_idle_act_pane_ParamLimits

0x54b8,	// (0x00042ea0) popup_large_graphic_colour_window_ParamLimits

0xbd94,	// (0x0004977c) popup_toolbar_window_ParamLimits

0xbd94,	// (0x0004977c) popup_toolbar_window

0x68d4,	// (0x000442bc) list_single_graphic_2heading_pane_ParamLimits

0x68d4,	// (0x000442bc) list_single_graphic_2heading_pane

0x4aa6,	// (0x0004248e) aid_size_cell_apps_grid_lsc_pane

0x4ab8,	// (0x000424a0) aid_size_cell_apps_grid_prt_pane

0x48fc,	// (0x000422e4) bg_wml_button_pane_cp1_ParamLimits

0x48fc,	// (0x000422e4) bg_wml_button_pane_cp1

0xc248,	// (0x00049c30) form_midp_field_text_pane_t1_ParamLimits

0x581c,	// (0x00043204) input_focus_pane_cp050_ParamLimits

0x5964,	// (0x0004334c) list_midp_form_text_pane_ParamLimits

0x5941,	// (0x00043329) input_focus_pane_cp051_ParamLimits

0x5955,	// (0x0004333d) list_midp_choice_pane_ParamLimits

0xc196,	// (0x00049b7e) list_single_2graphic_pane_cp3_ParamLimits

0xc196,	// (0x00049b7e) list_single_2graphic_pane_cp3

0xc1c2,	// (0x00049baa) list_single_midp_graphic_pane_ParamLimits

0xc1c2,	// (0x00049baa) list_single_midp_graphic_pane

0x87bd,	// (0x000461a5) list_single_graphic_2heading_pane_g1_ParamLimits

0x87bd,	// (0x000461a5) list_single_graphic_2heading_pane_g1

0x87c9,	// (0x000461b1) list_single_graphic_2heading_pane_g4_ParamLimits

0x87c9,	// (0x000461b1) list_single_graphic_2heading_pane_g4

0x87d5,	// (0x000461bd) list_single_graphic_2heading_pane_g5_ParamLimits

0x87d5,	// (0x000461bd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004d1b5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004d1b5) list_single_graphic_2heading_pane_g

0x87e1,	// (0x000461c9) list_single_graphic_2heading_pane_t1_ParamLimits

0x87e1,	// (0x000461c9) list_single_graphic_2heading_pane_t1

0x87f5,	// (0x000461dd) list_single_graphic_2heading_pane_t2_ParamLimits

0x87f5,	// (0x000461dd) list_single_graphic_2heading_pane_t2

0x8811,	// (0x000461f9) list_single_graphic_2heading_pane_t3_ParamLimits

0x8811,	// (0x000461f9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004d1bc) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004d1bc) list_single_graphic_2heading_pane_t

0x565c,	// (0x00043044) bg_popup_sub_pane_cp2

0x5686,	// (0x0004306e) grid_toobar_pane

0x97dc,	// (0x000471c4) cell_toolbar_pane_ParamLimits

0x97dc,	// (0x000471c4) cell_toolbar_pane

0x56c2,	// (0x000430aa) cell_toolbar_pane_g1_ParamLimits

0x56c2,	// (0x000430aa) cell_toolbar_pane_g1

0x56d6,	// (0x000430be) cell_toolbar_pane_g2_ParamLimits

0x56d6,	// (0x000430be) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004d1ca) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004d1ca) cell_toolbar_pane_g

0x5706,	// (0x000430ee) grid_highlight_pane_cp2_ParamLimits

0x5706,	// (0x000430ee) grid_highlight_pane_cp2

0x5720,	// (0x00043108) toolbar_button_pane

0x572c,	// (0x00043114) toolbar_button_pane_g1

0x573c,	// (0x00043124) toolbar_button_pane_g2

0x5734,	// (0x0004311c) toolbar_button_pane_g3

0x574c,	// (0x00043134) toolbar_button_pane_g4

0x5744,	// (0x0004312c) toolbar_button_pane_g5

0x5754,	// (0x0004313c) toolbar_button_pane_g6

0x575c,	// (0x00043144) toolbar_button_pane_g7

0x576c,	// (0x00043154) toolbar_button_pane_g8

0x5764,	// (0x0004314c) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004d1cf) toolbar_button_pane_g

0x9814,	// (0x000471fc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9814,	// (0x000471fc) list_single_2graphic_pane_g1_cp3

0x9820,	// (0x00047208) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9820,	// (0x00047208) list_single_2graphic_pane_g2_cp3

0x9831,	// (0x00047219) list_single_2graphic_pane_g3_cp3

0x9839,	// (0x00047221) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9839,	// (0x00047221) list_single_2graphic_pane_g4_cp3

0x9845,	// (0x0004722d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9845,	// (0x0004722d) list_single_2graphic_pane_t1_cp3

0x985f,	// (0x00047247) list_single_midp_graphic_pane_g2_ParamLimits

0x985f,	// (0x00047247) list_single_midp_graphic_pane_g2

0xb1ce,	// (0x00048bb6) aid_zoom_text_primary

0xb1d6,	// (0x00048bbe) aid_zoom_text_secondary

0x5386,	// (0x00042d6e) status_small_pane_g7_ParamLimits

0x5386,	// (0x00042d6e) status_small_pane_g7

0x53a9,	// (0x00042d91) status_small_pane_t1_ParamLimits

0xa99f,	// (0x00048387) title_pane_g2

0x0003,

0xf56a,	// (0x0004cf52) title_pane_g

0xab6c,	// (0x00048554) aid_size_cell_colour_1_pane_ParamLimits

0xab6c,	// (0x00048554) aid_size_cell_colour_1_pane

0xab80,	// (0x00048568) aid_size_cell_colour_2_pane_ParamLimits

0xab80,	// (0x00048568) aid_size_cell_colour_2_pane

0xab94,	// (0x0004857c) aid_size_cell_colour_3_pane_ParamLimits

0xab94,	// (0x0004857c) aid_size_cell_colour_3_pane

0xaba8,	// (0x00048590) aid_size_cell_colour_4_pane_ParamLimits

0xaba8,	// (0x00048590) aid_size_cell_colour_4_pane

0x924b,	// (0x00046c33) title_pane_stacon_g1_ParamLimits

0x924b,	// (0x00046c33) title_pane_stacon_g1

0x5cff,	// (0x000436e7) popup_note_wait_window_g3_ParamLimits

0x5cff,	// (0x000436e7) popup_note_wait_window_g3

0x5d75,	// (0x0004375d) popup_note_wait_window_t5_ParamLimits

0x5d75,	// (0x0004375d) popup_note_wait_window_t5

0x3cda,	// (0x000416c2) main_feb_china_hwr_fs_writing_pane

0xb25c,	// (0x00048c44) popup_feb_china_hwr_fs_window_ParamLimits

0xb25c,	// (0x00048c44) popup_feb_china_hwr_fs_window

0x9881,	// (0x00047269) aid_size_cell_hwr_fs_ParamLimits

0x9881,	// (0x00047269) aid_size_cell_hwr_fs

0x581c,	// (0x00043204) bg_popup_sub_pane_cp3_ParamLimits

0x581c,	// (0x00043204) bg_popup_sub_pane_cp3

0x9896,	// (0x0004727e) grid_hwr_fs_pane_ParamLimits

0x9896,	// (0x0004727e) grid_hwr_fs_pane

0x98ae,	// (0x00047296) linegrid_hwr_fs_pane_ParamLimits

0x98ae,	// (0x00047296) linegrid_hwr_fs_pane

0x98be,	// (0x000472a6) cell_hwr_fs_pane_ParamLimits

0x98be,	// (0x000472a6) cell_hwr_fs_pane

0x5828,	// (0x00043210) linegrid_hwr_fs_pane_g1_ParamLimits

0x5828,	// (0x00043210) linegrid_hwr_fs_pane_g1

0xc16a,	// (0x00049b52) linegrid_hwr_fs_pane_g2_ParamLimits

0xc16a,	// (0x00049b52) linegrid_hwr_fs_pane_g2

0x5834,	// (0x0004321c) linegrid_hwr_fs_pane_g3_ParamLimits

0x5834,	// (0x0004321c) linegrid_hwr_fs_pane_g3

0x98e0,	// (0x000472c8) linegrid_hwr_fs_pane_g4_ParamLimits

0x98e0,	// (0x000472c8) linegrid_hwr_fs_pane_g4

0x98fa,	// (0x000472e2) linegrid_hwr_fs_pane_g5_ParamLimits

0x98fa,	// (0x000472e2) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004d1fa) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004d1fa) linegrid_hwr_fs_pane_g

0x5840,	// (0x00043228) cell_hwr_fs_pane_g1_ParamLimits

0x5840,	// (0x00043228) cell_hwr_fs_pane_g1

0x562a,	// (0x00043012) cell_hwr_fs_pane_g2_ParamLimits

0x562a,	// (0x00043012) cell_hwr_fs_pane_g2

0xc17c,	// (0x00049b64) cell_hwr_fs_pane_g3_ParamLimits

0xc17c,	// (0x00049b64) cell_hwr_fs_pane_g3

0xc189,	// (0x00049b71) cell_hwr_fs_pane_g4_ParamLimits

0xc189,	// (0x00049b71) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004d205) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004d205) cell_hwr_fs_pane_g

0x9910,	// (0x000472f8) cell_hwr_fs_pane_t1

0x3cda,	// (0x000416c2) grid_highlight_pane_cp6

0x3cda,	// (0x000416c2) main_idle_act2_pane

0x48ab,	// (0x00042293) aid_inside_area_popup_secondary

0xc2ef,	// (0x00049cd7) aid_inside_area_window_primary_ParamLimits

0xc2ef,	// (0x00049cd7) aid_inside_area_window_primary

0x6afc,	// (0x000444e4) ai2_news_ticker_pane

0x6b04,	// (0x000444ec) aid_size_cell_ai1_link_ParamLimits

0x6b04,	// (0x000444ec) aid_size_cell_ai1_link

0x6b1e,	// (0x00044506) popup_ai2_data_window_ParamLimits

0x6b1e,	// (0x00044506) popup_ai2_data_window

0x6b32,	// (0x0004451a) popup_ai2_link_window_ParamLimits

0x6b32,	// (0x0004451a) popup_ai2_link_window

0x581c,	// (0x00043204) bg_popup_sub_pane_cp4_ParamLimits

0x581c,	// (0x00043204) bg_popup_sub_pane_cp4

0x6b46,	// (0x0004452e) grid_ai2_link_pane_ParamLimits

0x6b46,	// (0x0004452e) grid_ai2_link_pane

0x6b5d,	// (0x00044545) popup_ai2_link_window_g1_ParamLimits

0x6b5d,	// (0x00044545) popup_ai2_link_window_g1

0x6b69,	// (0x00044551) popup_ai2_link_window_g2_ParamLimits

0x6b69,	// (0x00044551) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004d3d1) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004d3d1) popup_ai2_link_window_g

0x6b78,	// (0x00044560) ai2_mp_button_pane

0x6b80,	// (0x00044568) ai2_mp_volume_pane

0x5941,	// (0x00043329) bg_popup_sub_pane_cp5_ParamLimits

0x5941,	// (0x00043329) bg_popup_sub_pane_cp5

0x6b88,	// (0x00044570) heading_ai2_gene_pane_ParamLimits

0x6b88,	// (0x00044570) heading_ai2_gene_pane

0x6b94,	// (0x0004457c) list_ai2_gene_pane_ParamLimits

0x6b94,	// (0x0004457c) list_ai2_gene_pane

0x6bdc,	// (0x000445c4) cell_ai2_link_pane_ParamLimits

0x6bdc,	// (0x000445c4) cell_ai2_link_pane

0x6bf2,	// (0x000445da) cell_ai2_link_pane_g1

0x3cda,	// (0x000416c2) grid_highlight_pane_cp7

0x9c08,	// (0x000475f0) ai2_mp_volume_pane_g1

0x6ccb,	// (0x000446b3) ai2_mp_volume_pane_g2

0x6c38,	// (0x00044620) list_ai2_gene_pane_t1

0x6cc3,	// (0x000446ab) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004d3ea) ai2_mp_volume_pane_g

0x9c10,	// (0x000475f8) volume_small_pane_cp3

0x6cd3,	// (0x000446bb) aid_size_cell_ai2_button

0x6cdb,	// (0x000446c3) grid_ai2_button_pane

0x6ce4,	// (0x000446cc) cell_ai2_button_pane_ParamLimits

0x6ce4,	// (0x000446cc) cell_ai2_button_pane

0x3cd0,	// (0x000416b8) cell_ai2_button_pane_g1

0x3cda,	// (0x000416c2) grid_highlight_pane_cp8

0x6c83,	// (0x0004466b) ai2_gene_pane_t1_ParamLimits

0x6c83,	// (0x0004466b) ai2_gene_pane_t1

0xb1c4,	// (0x00048bac) aid_height_parent_landscape

0xc462,	// (0x00049e4a) aid_height_set_list

0x620d,	// (0x00043bf5) aid_size_parent

0x6957,	// (0x0004433f) aid_size_cell_graphic_pane_ParamLimits

0x6ba4,	// (0x0004458c) popup_ai2_data_window_g1_ParamLimits

0x6ba4,	// (0x0004458c) popup_ai2_data_window_g1

0x6bb0,	// (0x00044598) ai2_news_ticker_pane_g1

0x6bb8,	// (0x000445a0) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004d3d6) ai2_news_ticker_pane_g

0x6bc0,	// (0x000445a8) ai2_news_ticker_pane_t1

0x6bce,	// (0x000445b6) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004d3db) ai2_news_ticker_pane_t

0x6bfb,	// (0x000445e3) heading_ai2_gene_pane_g1

0x6c03,	// (0x000445eb) heading_ai2_gene_pane_t1_ParamLimits

0x6c03,	// (0x000445eb) heading_ai2_gene_pane_t1

0x6c18,	// (0x00044600) list_highlight_pane_cp6

0x6c20,	// (0x00044608) ai2_gene_pane_ParamLimits

0x6c20,	// (0x00044608) ai2_gene_pane

0x6c46,	// (0x0004462e) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004d3e0) list_ai2_gene_pane_t

0x6c54,	// (0x0004463c) list_highlight_pane_cp8_ParamLimits

0x6c54,	// (0x0004463c) list_highlight_pane_cp8

0x6c65,	// (0x0004464d) ai2_gene_pane_g1_ParamLimits

0x6c65,	// (0x0004464d) ai2_gene_pane_g1

0x6c77,	// (0x0004465f) ai2_gene_pane_g2_ParamLimits

0x6c77,	// (0x0004465f) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004d3e5) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004d3e5) ai2_gene_pane_g

0x473b,	// (0x00042123) scroll_pane_cp12

0x979b,	// (0x00047183) control_pane_t3_ParamLimits

0x979b,	// (0x00047183) control_pane_t3

0x539a,	// (0x00042d82) status_small_pane_g8_ParamLimits

0x539a,	// (0x00042d82) status_small_pane_g8

0xba47,	// (0x0004942f) popup_find_window_ParamLimits

0xbc34,	// (0x0004961c) popup_note_image_window_ParamLimits

0xb28c,	// (0x00048c74) list_double2_graphic_pane_vc_g1_ParamLimits

0xb28c,	// (0x00048c74) list_double2_graphic_pane_vc_g1

0xac40,	// (0x00048628) list_double2_graphic_pane_vc_g2_ParamLimits

0xac40,	// (0x00048628) list_double2_graphic_pane_vc_g2

0xac4c,	// (0x00048634) list_double2_graphic_pane_vc_g3_ParamLimits

0xac4c,	// (0x00048634) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004d1c3) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004d1c3) list_double2_graphic_pane_vc_g

0xb298,	// (0x00048c80) list_double2_graphic_pane_vc_t1_ParamLimits

0xb298,	// (0x00048c80) list_double2_graphic_pane_vc_t1

0xac40,	// (0x00048628) list_single_heading_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_single_heading_pane_vc_g1

0xac4c,	// (0x00048634) list_single_heading_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_single_heading_pane_vc_g

0xb2ae,	// (0x00048c96) list_single_heading_pane_vc_t1_ParamLimits

0xb2ae,	// (0x00048c96) list_single_heading_pane_vc_t1

0xb2c4,	// (0x00048cac) list_single_heading_pane_vc_t2_ParamLimits

0xb2c4,	// (0x00048cac) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004d1e9) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004d1e9) list_single_heading_pane_vc_t

0x5774,	// (0x0004315c) list_setting_number_pane_vc_g1_ParamLimits

0x5774,	// (0x0004315c) list_setting_number_pane_vc_g1

0x5780,	// (0x00043168) list_setting_number_pane_vc_g2_ParamLimits

0x5780,	// (0x00043168) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004d1ee) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004d1ee) list_setting_number_pane_vc_g

0x578c,	// (0x00043174) list_setting_number_pane_vc_t1_ParamLimits

0x578c,	// (0x00043174) list_setting_number_pane_vc_t1

0x57a0,	// (0x00043188) list_setting_number_pane_vc_t2_ParamLimits

0x57a0,	// (0x00043188) list_setting_number_pane_vc_t2

0x57bc,	// (0x000431a4) list_setting_number_pane_vc_t3_ParamLimits

0x57bc,	// (0x000431a4) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004d1f3) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004d1f3) list_setting_number_pane_vc_t

0x57e4,	// (0x000431cc) set_value_pane_vc_ParamLimits

0x57e4,	// (0x000431cc) set_value_pane_vc

0x68d4,	// (0x000442bc) list_double2_graphic_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double2_graphic_pane_vc

0x68d4,	// (0x000442bc) list_double2_large_graphic_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double2_large_graphic_pane_vc

0x68d4,	// (0x000442bc) list_double2_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double2_pane_vc

0x68d4,	// (0x000442bc) list_double_graphic_heading_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_graphic_heading_pane_vc

0x68d4,	// (0x000442bc) list_double_graphic_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_graphic_pane_vc

0x68d4,	// (0x000442bc) list_double_heading_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_heading_pane_vc

0x68d4,	// (0x000442bc) list_double_large_graphic_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_large_graphic_pane_vc

0x68d4,	// (0x000442bc) list_double_number_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_number_pane_vc

0x68d4,	// (0x000442bc) list_double_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_pane_vc

0x68d4,	// (0x000442bc) list_double_time_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_double_time_pane_vc

0x68d4,	// (0x000442bc) list_setting_number_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_setting_number_pane_vc

0x68d4,	// (0x000442bc) list_setting_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_setting_pane_vc

0x68d4,	// (0x000442bc) list_single_graphic_heading_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_single_graphic_heading_pane_vc

0x68d4,	// (0x000442bc) list_single_heading_pane_vc_ParamLimits

0x68d4,	// (0x000442bc) list_single_heading_pane_vc

0xb3ac,	// (0x00048d94) list_single_number_heading_pane_vc_ParamLimits

0xb3ac,	// (0x00048d94) list_single_number_heading_pane_vc

0xb28c,	// (0x00048c74) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb28c,	// (0x00048c74) list_double_graphic_heading_pane_vc_g1

0xac40,	// (0x00048628) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xac40,	// (0x00048628) list_double_graphic_heading_pane_vc_g2

0xac4c,	// (0x00048634) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xac4c,	// (0x00048634) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0004d1c3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004d1c3) list_double_graphic_heading_pane_vc_g

0xb481,	// (0x00048e69) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb481,	// (0x00048e69) list_double_graphic_heading_pane_vc_t1

0xb2ae,	// (0x00048c96) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb2ae,	// (0x00048c96) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0004d3f1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0004d3f1) list_double_graphic_heading_pane_vc_t

0x5774,	// (0x0004315c) list_setting_pane_vc_g1_ParamLimits

0x5774,	// (0x0004315c) list_setting_pane_vc_g1

0x5780,	// (0x00043168) list_setting_pane_vc_g2_ParamLimits

0x5780,	// (0x00043168) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004d1ee) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004d1ee) list_setting_pane_vc_g

0x6eda,	// (0x000448c2) list_setting_pane_vc_t1_ParamLimits

0x6eda,	// (0x000448c2) list_setting_pane_vc_t1

0x6eee,	// (0x000448d6) list_setting_pane_vc_t2_ParamLimits

0x6eee,	// (0x000448d6) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004d434) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004d434) list_setting_pane_vc_t

0x57e4,	// (0x000431cc) set_value_pane_cp_vc_ParamLimits

0x57e4,	// (0x000431cc) set_value_pane_cp_vc

0xac40,	// (0x00048628) list_single_number_heading_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_single_number_heading_pane_vc_g1

0xac4c,	// (0x00048634) list_single_number_heading_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_single_number_heading_pane_vc_g

0xb2ae,	// (0x00048c96) list_single_number_heading_pane_vc_t1_ParamLimits

0xb2ae,	// (0x00048c96) list_single_number_heading_pane_vc_t1

0xb495,	// (0x00048e7d) list_single_number_heading_pane_vc_t2_ParamLimits

0xb495,	// (0x00048e7d) list_single_number_heading_pane_vc_t2

0xb4a9,	// (0x00048e91) list_single_number_heading_pane_vc_t3_ParamLimits

0xb4a9,	// (0x00048e91) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0004d439) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0004d439) list_single_number_heading_pane_vc_t

0xb28c,	// (0x00048c74) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb28c,	// (0x00048c74) list_single_graphic_heading_pane_vc_g1

0xac40,	// (0x00048628) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xac40,	// (0x00048628) list_single_graphic_heading_pane_vc_g4

0xac4c,	// (0x00048634) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xac4c,	// (0x00048634) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004d1c3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004d1c3) list_single_graphic_heading_pane_vc_g

0xb2ae,	// (0x00048c96) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb2ae,	// (0x00048c96) list_single_graphic_heading_pane_vc_t1

0xb4bb,	// (0x00048ea3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb4bb,	// (0x00048ea3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0004d440) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0004d440) list_single_graphic_heading_pane_vc_t

0xac40,	// (0x00048628) list_double2_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_double2_pane_vc_g1

0xac4c,	// (0x00048634) list_double2_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_double2_pane_vc_g

0xb4cf,	// (0x00048eb7) list_double2_pane_vc_t1_ParamLimits

0xb4cf,	// (0x00048eb7) list_double2_pane_vc_t1

0xb4e5,	// (0x00048ecd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb4e5,	// (0x00048ecd) list_double2_large_graphic_pane_vc_g1

0xac40,	// (0x00048628) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xac40,	// (0x00048628) list_double2_large_graphic_pane_vc_g2

0xac4c,	// (0x00048634) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xac4c,	// (0x00048634) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0004d445) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0004d445) list_double2_large_graphic_pane_vc_g

0xb4f1,	// (0x00048ed9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb4f1,	// (0x00048ed9) list_double2_large_graphic_pane_vc_t1

0xb507,	// (0x00048eef) list_double_time_pane_vc_g1_ParamLimits

0xb507,	// (0x00048eef) list_double_time_pane_vc_g1

0xb513,	// (0x00048efb) list_double_time_pane_vc_g2_ParamLimits

0xb513,	// (0x00048efb) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0004d44c) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0004d44c) list_double_time_pane_vc_g

0xb51f,	// (0x00048f07) list_double_time_pane_vc_t1_ParamLimits

0xb51f,	// (0x00048f07) list_double_time_pane_vc_t1

0xb538,	// (0x00048f20) list_double_time_pane_vc_t2_ParamLimits

0xb538,	// (0x00048f20) list_double_time_pane_vc_t2

0xb578,	// (0x00048f60) list_double_time_pane_vc_t3_ParamLimits

0xb578,	// (0x00048f60) list_double_time_pane_vc_t3

0xb590,	// (0x00048f78) list_double_time_pane_vc_t4_ParamLimits

0xb590,	// (0x00048f78) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0004d451) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0004d451) list_double_time_pane_vc_t

0xac40,	// (0x00048628) list_double_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_double_pane_vc_g1

0xac4c,	// (0x00048634) list_double_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_double_pane_vc_g

0xb5a4,	// (0x00048f8c) list_double_pane_vc_t1_ParamLimits

0xb5a4,	// (0x00048f8c) list_double_pane_vc_t1

0xb5b6,	// (0x00048f9e) list_double_pane_vc_t2_ParamLimits

0xb5b6,	// (0x00048f9e) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0004d45a) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0004d45a) list_double_pane_vc_t

0xac40,	// (0x00048628) list_double_number_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_double_number_pane_vc_g1

0xac4c,	// (0x00048634) list_double_number_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_double_number_pane_vc_g

0xb5ce,	// (0x00048fb6) list_double_number_pane_vc_t1_ParamLimits

0xb5ce,	// (0x00048fb6) list_double_number_pane_vc_t1

0xb5e2,	// (0x00048fca) list_double_number_pane_vc_t2_ParamLimits

0xb5e2,	// (0x00048fca) list_double_number_pane_vc_t2

0xb5b6,	// (0x00048f9e) list_double_number_pane_vc_t3_ParamLimits

0xb5b6,	// (0x00048f9e) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0004d45f) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0004d45f) list_double_number_pane_vc_t

0xb5f4,	// (0x00048fdc) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb5f4,	// (0x00048fdc) list_double_large_graphic_pane_vc_g1

0xb600,	// (0x00048fe8) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb600,	// (0x00048fe8) list_double_large_graphic_pane_vc_g2

0xac4c,	// (0x00048634) list_double_large_graphic_pane_vc_g3_ParamLimits

0xac4c,	// (0x00048634) list_double_large_graphic_pane_vc_g3

0xb60f,	// (0x00048ff7) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb60f,	// (0x00048ff7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0004d466) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004d466) list_double_large_graphic_pane_vc_g

0xb61b,	// (0x00049003) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb61b,	// (0x00049003) list_double_large_graphic_pane_vc_t1

0xb62d,	// (0x00049015) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb62d,	// (0x00049015) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0004d46f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0004d46f) list_double_large_graphic_pane_vc_t

0xac40,	// (0x00048628) list_double_heading_pane_vc_g1_ParamLimits

0xac40,	// (0x00048628) list_double_heading_pane_vc_g1

0xac4c,	// (0x00048634) list_double_heading_pane_vc_g2_ParamLimits

0xac4c,	// (0x00048634) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004d1e4) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004d1e4) list_double_heading_pane_vc_g

0xb646,	// (0x0004902e) list_double_heading_pane_vc_t1_ParamLimits

0xb646,	// (0x0004902e) list_double_heading_pane_vc_t1

0xb2ae,	// (0x00048c96) list_double_heading_pane_vc_t2_ParamLimits

0xb2ae,	// (0x00048c96) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004d474) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004d474) list_double_heading_pane_vc_t

0xb28c,	// (0x00048c74) list_double_graphic_pane_vc_g1_ParamLimits

0xb28c,	// (0x00048c74) list_double_graphic_pane_vc_g1

0xb65a,	// (0x00049042) list_double_graphic_pane_vc_g2_ParamLimits

0xb65a,	// (0x00049042) list_double_graphic_pane_vc_g2

0xb669,	// (0x00049051) list_double_graphic_pane_vc_g3_ParamLimits

0xb669,	// (0x00049051) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0004d479) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0004d479) list_double_graphic_pane_vc_g

0xb675,	// (0x0004905d) list_double_graphic_pane_vc_t1_ParamLimits

0xb675,	// (0x0004905d) list_double_graphic_pane_vc_t1

0xb5b6,	// (0x00048f9e) list_double_graphic_pane_vc_t2_ParamLimits

0xb5b6,	// (0x00048f9e) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0004d480) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0004d480) list_double_graphic_pane_vc_t

0x8841,	// (0x00046229) aid_size_cell_fastswap

0x8849,	// (0x00046231) aid_size_cell_touch_ParamLimits

0x8849,	// (0x00046231) aid_size_cell_touch

0x8aae,	// (0x00046496) popup_fast_swap_wide_window_ParamLimits

0x8aae,	// (0x00046496) popup_fast_swap_wide_window

0x8ba4,	// (0x0004658c) touch_pane_ParamLimits

0x8ba4,	// (0x0004658c) touch_pane

0x479d,	// (0x00042185) button_value_adjust_pane_cp2

0x911b,	// (0x00046b03) button_value_adjust_pane_cp4

0x913b,	// (0x00046b23) form_field_data_pane_cp2

0x915a,	// (0x00046b42) form_field_data_wide_pane_cp2

0x4af4,	// (0x000424dc) bg_scroll_pane_ParamLimits

0x93ae,	// (0x00046d96) scroll_handle_pane_ParamLimits

0x93c2,	// (0x00046daa) scroll_sc2_down_pane_ParamLimits

0x93c2,	// (0x00046daa) scroll_sc2_down_pane

0x4b25,	// (0x0004250d) scroll_sc2_up_pane_ParamLimits

0x4b25,	// (0x0004250d) scroll_sc2_up_pane

0xc7c7,	// (0x0004a1af) grid_wheel_folder_pane_g1_ParamLimits

0xc7c7,	// (0x0004a1af) grid_wheel_folder_pane_g1

0x9587,	// (0x00046f6f) clock_nsta_pane_cp2_ParamLimits

0x9587,	// (0x00046f6f) clock_nsta_pane_cp2

0xb0cc,	// (0x00048ab4) listscroll_midp_pane_ParamLimits

0xb0d8,	// (0x00048ac0) midp_canvas_pane

0x53ee,	// (0x00042dd6) nsta_clock_indic_pane

0x541e,	// (0x00042e06) listscroll_form_pane_vc

0x5426,	// (0x00042e0e) listscroll_set_pane_vc_ParamLimits

0x5426,	// (0x00042e0e) listscroll_set_pane_vc

0xbea8,	// (0x00049890) clock_nsta_pane

0xbeb5,	// (0x0004989d) indicator_nsta_pane

0x565c,	// (0x00043044) bg_popup_sub_pane_cp2_ParamLimits

0x5670,	// (0x00043058) find_pane_cp2_ParamLimits

0x5670,	// (0x00043058) find_pane_cp2

0x5686,	// (0x0004306e) grid_toobar_pane_ParamLimits

0x57f0,	// (0x000431d8) list_form_gen_pane_vc_ParamLimits

0x57f0,	// (0x000431d8) list_form_gen_pane_vc

0x5806,	// (0x000431ee) scroll_pane_cp8_vc_ParamLimits

0x5806,	// (0x000431ee) scroll_pane_cp8_vc

0x5856,	// (0x0004323e) data_form_wide_pane_vc_ParamLimits

0x5856,	// (0x0004323e) data_form_wide_pane_vc

0x5862,	// (0x0004324a) form_field_data_wide_pane_vc_g1

0x586a,	// (0x00043252) form_field_data_wide_pane_vc_t1_ParamLimits

0x586a,	// (0x00043252) form_field_data_wide_pane_vc_t1

0x47b1,	// (0x00042199) input_focus_pane_cp6_vc_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_cp6_vc

0xc287,	// (0x00049c6f) list_midp_pane_ParamLimits

0xc293,	// (0x00049c7b) scroll_pane_cp16_ParamLimits

0xc293,	// (0x00049c7b) scroll_pane_cp16

0x5ad9,	// (0x000434c1) button_value_adjust_pane_ParamLimits

0x5ad9,	// (0x000434c1) button_value_adjust_pane

0xc473,	// (0x00049e5b) button_value_adjust_pane_cp6_ParamLimits

0xc473,	// (0x00049e5b) button_value_adjust_pane_cp6

0xc595,	// (0x00049f7d) settings_code_pane_cp_ParamLimits

0xc595,	// (0x00049f7d) settings_code_pane_cp

0x3cd0,	// (0x000416b8) cell_touch_pane_g1

0x3cd0,	// (0x000416b8) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0004d10c) cell_touch_pane_g

0xc691,	// (0x0004a079) cell_touch_pane_cp_ParamLimits

0xc691,	// (0x0004a079) cell_touch_pane_cp

0xc6a1,	// (0x0004a089) cell_touch_pane_ParamLimits

0xc6a1,	// (0x0004a089) cell_touch_pane

0x3cd0,	// (0x000416b8) scroll_sc2_down_pane_g1

0x3cd0,	// (0x000416b8) scroll_sc2_up_pane_g1

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp4_vc

0x6cf6,	// (0x000446de) list_set_graphic_pane_vc_g1_ParamLimits

0x6cf6,	// (0x000446de) list_set_graphic_pane_vc_g1

0x6d02,	// (0x000446ea) list_set_graphic_pane_vc_g2_ParamLimits

0x6d02,	// (0x000446ea) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0004d3f6) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0004d3f6) list_set_graphic_pane_vc_g

0x6d0e,	// (0x000446f6) text_primary_small_cp13_vc_ParamLimits

0x6d0e,	// (0x000446f6) text_primary_small_cp13_vc

0x6d26,	// (0x0004470e) list_set_graphic_pane_vc_ParamLimits

0x6d26,	// (0x0004470e) list_set_graphic_pane_vc

0x3cda,	// (0x000416c2) input_focus_pane_cp2_vc

0x3cd0,	// (0x000416b8) setting_code_pane_vc_g1

0x6d3a,	// (0x00044722) setting_code_pane_vc_t1

0x6d48,	// (0x00044730) set_text_pane_vc_t1_ParamLimits

0x6d48,	// (0x00044730) set_text_pane_vc_t1

0x3cda,	// (0x000416c2) input_focus_pane_cp1_vc

0x6d67,	// (0x0004474f) list_set_text_pane_vc

0x3cd0,	// (0x000416b8) setting_text_pane_vc_g1

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp2_vc

0x6d71,	// (0x00044759) setting_slider_graphic_pane_vc_g1

0x6d79,	// (0x00044761) setting_slider_graphic_pane_vc_t1

0x6d87,	// (0x0004476f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0004d3fb) setting_slider_graphic_pane_vc_t

0x6d95,	// (0x0004477d) slider_set_pane_cp_vc

0x6d9d,	// (0x00044785) slider_set_pane_vc_g1

0x6da6,	// (0x0004478e) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0004d400) slider_set_pane_vc_g

0x480c,	// (0x000421f4) set_opt_bg_pane_g1_copy1

0x4814,	// (0x000421fc) set_opt_bg_pane_g2_copy1

0x6dd2,	// (0x000447ba) set_opt_bg_pane_g3_copy1

0x4824,	// (0x0004220c) set_opt_bg_pane_g4_copy1

0x482c,	// (0x00042214) set_opt_bg_pane_g5_copy1

0x4834,	// (0x0004221c) set_opt_bg_pane_g6_copy1

0x6dda,	// (0x000447c2) set_opt_bg_pane_g7_copy1

0x6de4,	// (0x000447cc) set_opt_bg_pane_g8_copy1

0x6dec,	// (0x000447d4) set_opt_bg_pane_g9_copy1

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp_vc

0x6df4,	// (0x000447dc) setting_slider_pane_vc_t1

0x6d79,	// (0x00044761) setting_slider_pane_vc_t2

0x6d87,	// (0x0004476f) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0004d40f) setting_slider_pane_vc_t

0x6d95,	// (0x0004477d) slider_set_pane_vc

0x991e,	// (0x00047306) volume_set_pane_vc_g1

0x9c19,	// (0x00047601) volume_set_pane_vc_g2

0x9c22,	// (0x0004760a) volume_set_pane_vc_g3

0x9c2b,	// (0x00047613) volume_set_pane_vc_g4

0x9c34,	// (0x0004761c) volume_set_pane_vc_g5

0x9c3d,	// (0x00047625) volume_set_pane_vc_g6

0x9c46,	// (0x0004762e) volume_set_pane_vc_g7

0x9c4f,	// (0x00047637) volume_set_pane_vc_g8

0x9c58,	// (0x00047640) volume_set_pane_vc_g9

0x9c61,	// (0x00047649) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0004d416) volume_set_pane_vc_g

0x6e03,	// (0x000447eb) volume_set_pane_vc

0x6e0b,	// (0x000447f3) button_value_adjust_pane_cp1_vc

0x6e15,	// (0x000447fd) list_highlight_pane_cp2_vc

0x6e1e,	// (0x00044806) list_set_pane_vc_ParamLimits

0x6e1e,	// (0x00044806) list_set_pane_vc

0x6e70,	// (0x00044858) main_pane_set_vc_t1_ParamLimits

0x6e70,	// (0x00044858) main_pane_set_vc_t1

0x6e85,	// (0x0004486d) main_pane_set_vc_t2_ParamLimits

0x6e85,	// (0x0004486d) main_pane_set_vc_t2

0x6e97,	// (0x0004487f) main_pane_set_vc_t3_ParamLimits

0x6e97,	// (0x0004487f) main_pane_set_vc_t3

0x6ea9,	// (0x00044891) main_pane_set_vc_t4_ParamLimits

0x6ea9,	// (0x00044891) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0004d42b) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0004d42b) main_pane_set_vc_t

0x6ebb,	// (0x000448a3) setting_code_pane_vc_ParamLimits

0x6ebb,	// (0x000448a3) setting_code_pane_vc

0x6eca,	// (0x000448b2) setting_slider_graphic_pane_vc

0x6eca,	// (0x000448b2) setting_slider_pane_vc

0x6eca,	// (0x000448b2) setting_text_pane_vc

0x6eca,	// (0x000448b2) setting_volume_pane_vc

0x6ed2,	// (0x000448ba) scroll_pane_cp121_vc

0x478b,	// (0x00042173) set_content_pane_vc

0x6f10,	// (0x000448f8) button_value_adjust_pane_g1

0x6f19,	// (0x00044901) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0004d485) button_value_adjust_pane_g

0x6f22,	// (0x0004490a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6f22,	// (0x0004490a) form_field_slider_wide_pane_vc_t1

0x6f36,	// (0x0004491e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f36,	// (0x0004491e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0004d48a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0004d48a) form_field_slider_wide_pane_vc_t

0x3d28,	// (0x00041710) input_focus_pane_cp10_vc_ParamLimits

0x3d28,	// (0x00041710) input_focus_pane_cp10_vc

0x6f48,	// (0x00044930) slider_cont_pane_cp1_vc_ParamLimits

0x6f48,	// (0x00044930) slider_cont_pane_cp1_vc

0x6d9d,	// (0x00044785) slider_form_pane_g1_cp2

0x6da6,	// (0x0004478e) slider_form_pane_g2_cp2

0x6f61,	// (0x00044949) form_field_slider_pane_vc_t3

0x6f6f,	// (0x00044957) form_field_slider_pane_vc_t4

0x6f7d,	// (0x00044965) slider_form_pane_vc_ParamLimits

0x6f7d,	// (0x00044965) slider_form_pane_vc

0x6f8a,	// (0x00044972) form_field_slider_pane_vc_t1_ParamLimits

0x6f8a,	// (0x00044972) form_field_slider_pane_vc_t1

0x6f36,	// (0x0004491e) form_field_slider_pane_vc_t2_ParamLimits

0x6f36,	// (0x0004491e) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0004d49a) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0004d49a) form_field_slider_pane_vc_t

0x3d28,	// (0x00041710) input_focus_pane_cp9_vc_ParamLimits

0x3d28,	// (0x00041710) input_focus_pane_cp9_vc

0x6fa6,	// (0x0004498e) slider_cont_pane_vc_ParamLimits

0x6fa6,	// (0x0004498e) slider_cont_pane_vc

0x6fb8,	// (0x000449a0) list_form_graphic_pane_cp_vc_ParamLimits

0x6fb8,	// (0x000449a0) list_form_graphic_pane_cp_vc

0x5862,	// (0x0004324a) form_field_popup_wide_pane_vc_g1

0x6fcd,	// (0x000449b5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fcd,	// (0x000449b5) form_field_popup_wide_pane_vc_t1

0x47b1,	// (0x00042199) input_focus_pane_cp8_vc_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_cp8_vc

0x6fe4,	// (0x000449cc) list_form_wide_pane_vc_ParamLimits

0x6fe4,	// (0x000449cc) list_form_wide_pane_vc

0x6ff0,	// (0x000449d8) list_form_graphic_pane_vc_g1

0x6ff8,	// (0x000449e0) list_form_graphic_pane_vc_t1_ParamLimits

0x6ff8,	// (0x000449e0) list_form_graphic_pane_vc_t1

0x3d36,	// (0x0004171e) list_highlight_pane_cp5_vc_ParamLimits

0x3d36,	// (0x0004171e) list_highlight_pane_cp5_vc

0x7014,	// (0x000449fc) list_form_graphic_pane_vc_ParamLimits

0x7014,	// (0x000449fc) list_form_graphic_pane_vc

0x5862,	// (0x0004324a) form_field_popup_pane_vc_g1

0x702a,	// (0x00044a12) form_field_popup_pane_vc_t1_ParamLimits

0x702a,	// (0x00044a12) form_field_popup_pane_vc_t1

0x47b1,	// (0x00042199) input_focus_pane_cp7_vc_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_cp7_vc

0x7041,	// (0x00044a29) list_form_pane_vc_ParamLimits

0x7041,	// (0x00044a29) list_form_pane_vc

0x704d,	// (0x00044a35) data_form_pane_vc_t1_ParamLimits

0x704d,	// (0x00044a35) data_form_pane_vc_t1

0x480c,	// (0x000421f4) input_focus_pane_vc_g1

0x4814,	// (0x000421fc) input_focus_pane_vc_g2

0x481c,	// (0x00042204) input_focus_pane_vc_g3

0x4824,	// (0x0004220c) input_focus_pane_vc_g4

0x482c,	// (0x00042214) input_focus_pane_vc_g5

0x4834,	// (0x0004221c) input_focus_pane_vc_g6

0x483c,	// (0x00042224) input_focus_pane_vc_g7

0x4844,	// (0x0004222c) input_focus_pane_vc_g8

0x484c,	// (0x00042234) input_focus_pane_vc_g9

0x3cd0,	// (0x000416b8) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0004d095) input_focus_pane_vc_g

0x5856,	// (0x0004323e) data_form_pane_vc_ParamLimits

0x5856,	// (0x0004323e) data_form_pane_vc

0x5862,	// (0x0004324a) form_field_data_pane_vc_g1

0x7068,	// (0x00044a50) form_field_data_pane_vc_t1_ParamLimits

0x7068,	// (0x00044a50) form_field_data_pane_vc_t1

0x47b1,	// (0x00042199) input_focus_pane_vc_ParamLimits

0x47b1,	// (0x00042199) input_focus_pane_vc

0x7082,	// (0x00044a6a) button_value_adjust_pane_cp3_vc

0x708a,	// (0x00044a72) button_value_adjust_pane_cp5_vc

0x7092,	// (0x00044a7a) form_field_data_pane_vc_ParamLimits

0x7092,	// (0x00044a7a) form_field_data_pane_vc

0x70a9,	// (0x00044a91) form_field_data_pane_vc_cp2

0x70b1,	// (0x00044a99) form_field_data_wide_pane_vc_ParamLimits

0x70b1,	// (0x00044a99) form_field_data_wide_pane_vc

0x70c7,	// (0x00044aaf) form_field_data_wide_pane_vc_cp2

0x70cf,	// (0x00044ab7) form_field_popup_pane_vc_ParamLimits

0x70cf,	// (0x00044ab7) form_field_popup_pane_vc

0x70e6,	// (0x00044ace) form_field_popup_wide_pane_vc_ParamLimits

0x70e6,	// (0x00044ace) form_field_popup_wide_pane_vc

0x70fc,	// (0x00044ae4) form_field_slider_pane_vc_ParamLimits

0x70fc,	// (0x00044ae4) form_field_slider_pane_vc

0x710f,	// (0x00044af7) form_field_slider_wide_pane_vc_ParamLimits

0x710f,	// (0x00044af7) form_field_slider_wide_pane_vc

0xc6b3,	// (0x0004a09b) grid_touch_1_pane_ParamLimits

0xc6b3,	// (0x0004a09b) grid_touch_1_pane

0xc6bf,	// (0x0004a0a7) grid_touch_2_pane_ParamLimits

0xc6bf,	// (0x0004a0a7) grid_touch_2_pane

0x53e0,	// (0x00042dc8) touch_pane_g1_ParamLimits

0x53e0,	// (0x00042dc8) touch_pane_g1

0x7130,	// (0x00044b18) cell_app_pane_cp_wide_ParamLimits

0x7130,	// (0x00044b18) cell_app_pane_cp_wide

0x7141,	// (0x00044b29) grid_popup_fast_wide_pane_ParamLimits

0x7141,	// (0x00044b29) grid_popup_fast_wide_pane

0x7155,	// (0x00044b3d) scroll_pane_cp19_ParamLimits

0x7155,	// (0x00044b3d) scroll_pane_cp19

0x3cda,	// (0x000416c2) bg_popup_window_pane_cp20

0x7169,	// (0x00044b51) listscroll_popup_fast_wide_pane

0x3d36,	// (0x0004171e) grid_indicator_nsta_pane

0x7171,	// (0x00044b59) clock_nsta_pane_g1

0x717a,	// (0x00044b62) clock_nsta_pane_t1

0xc6d7,	// (0x0004a0bf) cell_indicator_nsta_pane_ParamLimits

0xc6d7,	// (0x0004a0bf) cell_indicator_nsta_pane

0x7122,	// (0x00044b0a) cell_indicator_nsta_pane_g1

0xc70f,	// (0x0004a0f7) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0004d4a4) cell_indicator_nsta_pane_g

0x7196,	// (0x00044b7e) clock_nsta_pane_cp

0x719e,	// (0x00044b86) indicator_nsta_pane_cp

0x71a7,	// (0x00044b8f) nsta_clock_indic_pane_g1

0x3d72,	// (0x0004175a) grid_indicator_pane

0x4c17,	// (0x000425ff) scroll_pane_cp29

0x94d6,	// (0x00046ebe) indicator_nsta_pane_cp2_ParamLimits

0x94d6,	// (0x00046ebe) indicator_nsta_pane_cp2

0x3d36,	// (0x0004171e) main_apps_wheel_pane

0x597e,	// (0x00043366) form_midp_field_text_pane_ParamLimits

0x5aab,	// (0x00043493) scroll_bar_cp050_ParamLimits

0x7210,	// (0x00044bf8) cell_indicator_pane_ParamLimits

0x7210,	// (0x00044bf8) cell_indicator_pane

0x722d,	// (0x00044c15) cell_indicator_pane_g1

0xc725,	// (0x0004a10d) grid_wheel_folder_pane_ParamLimits

0xc725,	// (0x0004a10d) grid_wheel_folder_pane

0xc73b,	// (0x0004a123) list_wheel_apps_pane_ParamLimits

0xc73b,	// (0x0004a123) list_wheel_apps_pane

0xc74c,	// (0x0004a134) main_apps_wheel_pane_g1_ParamLimits

0xc74c,	// (0x0004a134) main_apps_wheel_pane_g1

0xc760,	// (0x0004a148) main_apps_wheel_pane_g2_ParamLimits

0xc760,	// (0x0004a148) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0004d4c0) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0004d4c0) main_apps_wheel_pane_g

0xc778,	// (0x0004a160) main_apps_wheel_pane_t1_ParamLimits

0xc778,	// (0x0004a160) main_apps_wheel_pane_t1

0xc79b,	// (0x0004a183) list_wheel_apps_pane_g1

0xc7a3,	// (0x0004a18b) list_wheel_apps_pane_g2

0xc7ab,	// (0x0004a193) list_wheel_apps_pane_g3

0xc7b3,	// (0x0004a19b) list_wheel_apps_pane_g4

0xc7bd,	// (0x0004a1a5) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0004d4c5) list_wheel_apps_pane_g

0x506a,	// (0x00042a52) navi_icon_text_pane

0xbdec,	// (0x000497d4) aid_fill_nsta

0xc7e0,	// (0x0004a1c8) navi_icon_text_pane_g1

0xc7ef,	// (0x0004a1d7) navi_icon_text_pane_t1

0x4f06,	// (0x000428ee) list_set_graphic_pane_t1_ParamLimits

0x4f06,	// (0x000428ee) list_set_graphic_pane_t1

0x61b3,	// (0x00043b9b) popup_midp_note_alarm_window_t6_ParamLimits

0x61b3,	// (0x00043b9b) popup_midp_note_alarm_window_t6

0x61c5,	// (0x00043bad) popup_midp_note_alarm_window_t7_ParamLimits

0x61c5,	// (0x00043bad) popup_midp_note_alarm_window_t7

0x61d7,	// (0x00043bbf) popup_midp_note_alarm_window_t8_ParamLimits

0x61d7,	// (0x00043bbf) popup_midp_note_alarm_window_t8

0x61e9,	// (0x00043bd1) popup_midp_note_alarm_window_t9_ParamLimits

0x61e9,	// (0x00043bd1) popup_midp_note_alarm_window_t9

0x61fb,	// (0x00043be3) popup_midp_note_alarm_window_t10_ParamLimits

0x61fb,	// (0x00043be3) popup_midp_note_alarm_window_t10

0x622b,	// (0x00043c13) popup_midp_note_alarm_window_t11_ParamLimits

0x622b,	// (0x00043c13) popup_midp_note_alarm_window_t11

0x623d,	// (0x00043c25) scroll_pane_cp17_ParamLimits

0x623d,	// (0x00043c25) scroll_pane_cp17

0x991e,	// (0x00047306) volume_small_pane_cp_g1

0x9c6a,	// (0x00047652) volume_small_pane_cp_g2

0x9c73,	// (0x0004765b) volume_small_pane_cp_g3

0x9c7c,	// (0x00047664) volume_small_pane_cp_g4

0x9c85,	// (0x0004766d) volume_small_pane_cp_g5

0x9c8e,	// (0x00047676) volume_small_pane_cp_g6

0x9c97,	// (0x0004767f) volume_small_pane_cp_g7

0x9ca0,	// (0x00047688) volume_small_pane_cp_g8

0x9ca9,	// (0x00047691) volume_small_pane_cp_g9

0x9cb2,	// (0x0004769a) volume_small_pane_cp_g10

0x5216,	// (0x00042bfe) midp_ticker_pane_g1_ParamLimits

0x5222,	// (0x00042c0a) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004d15d) midp_ticker_pane_g_ParamLimits

0xb181,	// (0x00048b69) midp_ticker_pane_t1_ParamLimits

0xbe02,	// (0x000497ea) aid_fill_nsta_2

0x5a97,	// (0x0004347f) list_form2_midp_pane

0x68b2,	// (0x0004429a) midp_editing_number_pane_ParamLimits

0x68c1,	// (0x000442a9) midp_ticker_pane_ParamLimits

0x7237,	// (0x00044c1f) form2_midp_field_pane

0x723f,	// (0x00044c27) scroll_pane_cp51

0x725f,	// (0x00044c47) form2_midp_button_pane_ParamLimits

0x725f,	// (0x00044c47) form2_midp_button_pane

0x7271,	// (0x00044c59) form2_midp_content_pane_ParamLimits

0x7271,	// (0x00044c59) form2_midp_content_pane

0x728b,	// (0x00044c73) form2_midp_field_choice_group_pane

0x7293,	// (0x00044c7b) form2_midp_field_pane_g1

0x729b,	// (0x00044c83) form2_midp_field_pane_g2

0x72a3,	// (0x00044c8b) form2_midp_field_pane_g3

0x72ab,	// (0x00044c93) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0004d4ea) form2_midp_field_pane_g

0x72b3,	// (0x00044c9b) form2_midp_gauge_slider_pane

0x72bb,	// (0x00044ca3) form2_midp_gauge_wait_pane

0x72c3,	// (0x00044cab) form2_midp_image_pane_ParamLimits

0x72c3,	// (0x00044cab) form2_midp_image_pane

0x72de,	// (0x00044cc6) form2_midp_label_pane_ParamLimits

0x72de,	// (0x00044cc6) form2_midp_label_pane

0xc820,	// (0x0004a208) form2_midp_label_pane_cp_ParamLimits

0xc820,	// (0x0004a208) form2_midp_label_pane_cp

0x72f7,	// (0x00044cdf) form2_midp_string_pane_ParamLimits

0x72f7,	// (0x00044cdf) form2_midp_string_pane

0xb687,	// (0x0004906f) form2_midp_text_pane_ParamLimits

0xb687,	// (0x0004906f) form2_midp_text_pane

0x7309,	// (0x00044cf1) form2_midp_time_pane

0x7319,	// (0x00044d01) input_focus_pane_cp51_ParamLimits

0x7319,	// (0x00044d01) input_focus_pane_cp51

0x7331,	// (0x00044d19) form2_midp_label_pane_t1_ParamLimits

0x7331,	// (0x00044d19) form2_midp_label_pane_t1

0xb6a2,	// (0x0004908a) form2_mdip_text_pane_t1_ParamLimits

0xb6a2,	// (0x0004908a) form2_mdip_text_pane_t1

0xb6be,	// (0x000490a6) form2_midp_time_pane_t1

0x7379,	// (0x00044d61) form2_midp_gauge_slider_pane_t1

0xc841,	// (0x0004a229) form2_midp_gauge_slider_pane_t2

0xc853,	// (0x0004a23b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0004d4f3) form2_midp_gauge_slider_pane_t

0x738b,	// (0x00044d73) form2_midp_slider_pane

0x7397,	// (0x00044d7f) form2_midp_gauge_wait_pane_t1

0x73a5,	// (0x00044d8d) form2_midp_wait_pane_ParamLimits

0x73a5,	// (0x00044d8d) form2_midp_wait_pane

0xc865,	// (0x0004a24d) list_single_2graphic_pane_cp4_ParamLimits

0xc865,	// (0x0004a24d) list_single_2graphic_pane_cp4

0xc1c2,	// (0x00049baa) list_single_midp_graphic_pane_cp_ParamLimits

0xc1c2,	// (0x00049baa) list_single_midp_graphic_pane_cp

0x3cda,	// (0x000416c2) list_highlight_pane_cp20

0x73d0,	// (0x00044db8) list_single_2graphic_pane_g1_cp4

0x6bfb,	// (0x000445e3) list_single_2graphic_pane_g2_cp4

0x73d8,	// (0x00044dc0) list_single_2graphic_pane_t1_cp4

0x3d36,	// (0x0004171e) list_highlight_pane_cp21

0x73e7,	// (0x00044dcf) list_single_midp_graphic_pane_g4_cp

0x73f6,	// (0x00044dde) list_single_midp_graphic_pane_t1_cp

0xc894,	// (0x0004a27c) form2_mdip_string_pane_t1_ParamLimits

0xc894,	// (0x0004a27c) form2_mdip_string_pane_t1

0x3cda,	// (0x000416c2) bg_wml_button_pane_cp2

0x3cd0,	// (0x000416b8) form2_midp_image_pane_g1

0xacab,	// (0x00048693) list_double_large_graphic_pane_g5_ParamLimits

0xacab,	// (0x00048693) list_double_large_graphic_pane_g5

0xb0cc,	// (0x00048ab4) midp_form_pane_ParamLimits

0x3d36,	// (0x0004171e) main_apps_wheel_pane_ParamLimits

0xbc5a,	// (0x00049642) popup_preview_window_ParamLimits

0xbc5a,	// (0x00049642) popup_preview_window

0x54fd,	// (0x00042ee5) popup_touch_info_window_ParamLimits

0x54fd,	// (0x00042ee5) popup_touch_info_window

0x551b,	// (0x00042f03) popup_touch_menu_window_ParamLimits

0x551b,	// (0x00042f03) popup_touch_menu_window

0x3cc6,	// (0x000416ae) bg_popup_sub_pane_cp6

0x740b,	// (0x00044df3) list_touch_menu_pane

0x7413,	// (0x00044dfb) list_single_touch_menu_pane_ParamLimits

0x7413,	// (0x00044dfb) list_single_touch_menu_pane

0x7428,	// (0x00044e10) list_single_touch_menu_pane_t1

0x3d36,	// (0x0004171e) bg_popup_sub_pane_cp7_ParamLimits

0x3d36,	// (0x0004171e) bg_popup_sub_pane_cp7

0x7436,	// (0x00044e1e) heading_sub_pane

0x743e,	// (0x00044e26) list_touch_info_pane_ParamLimits

0x743e,	// (0x00044e26) list_touch_info_pane

0x744d,	// (0x00044e35) list_single_touch_info_pane_ParamLimits

0x744d,	// (0x00044e35) list_single_touch_info_pane

0x745f,	// (0x00044e47) list_single_touch_info_pane_t1

0x746d,	// (0x00044e55) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0004d501) list_single_touch_info_pane_t

0x51ec,	// (0x00042bd4) bg_popup_heading_pane_cp

0x747b,	// (0x00044e63) heading_sub_pane_t1

0x581c,	// (0x00043204) bg_popup_preview_window_pane_cp_ParamLimits

0x581c,	// (0x00043204) bg_popup_preview_window_pane_cp

0x7436,	// (0x00044e1e) heading_preview_pane

0x743e,	// (0x00044e26) list_preview_pane_ParamLimits

0x743e,	// (0x00044e26) list_preview_pane

0x7489,	// (0x00044e71) popup_preview_window_g1

0x744d,	// (0x00044e35) list_single_preview_pane_ParamLimits

0x744d,	// (0x00044e35) list_single_preview_pane

0x7491,	// (0x00044e79) list_single_preview_pane_g1

0x7499,	// (0x00044e81) list_single_preview_pane_t1

0x745f,	// (0x00044e47) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0004d506) list_single_preview_pane_t

0x74a7,	// (0x00044e8f) bg_popup_heading_pane_cp2_ParamLimits

0x74a7,	// (0x00044e8f) bg_popup_heading_pane_cp2

0x74bd,	// (0x00044ea5) heading_preview_pane_g1

0x74c5,	// (0x00044ead) heading_preview_pane_t1_ParamLimits

0x74c5,	// (0x00044ead) heading_preview_pane_t1

0x3d89,	// (0x00041771) soft_indicator_pane_t1_ParamLimits

0x4718,	// (0x00042100) scroll_pane_ParamLimits

0x4b1c,	// (0x00042504) scroll_sc2_left_pane

0x4b13,	// (0x000424fb) scroll_sc2_right_pane

0x4b3b,	// (0x00042523) scroll_bg_pane_g1_ParamLimits

0x4b50,	// (0x00042538) scroll_bg_pane_g2_ParamLimits

0x4b68,	// (0x00042550) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0004d0ec) scroll_bg_pane_g_ParamLimits

0x4b3b,	// (0x00042523) scroll_handle_pane_g1_ParamLimits

0x4b8a,	// (0x00042572) scroll_handle_pane_g2_ParamLimits

0x4b68,	// (0x00042550) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0004d0f3) scroll_handle_pane_g_ParamLimits

0x5446,	// (0x00042e2e) popup_choice_list_window_ParamLimits

0x5446,	// (0x00042e2e) popup_choice_list_window

0x5668,	// (0x00043050) choice_list_pane

0x56f8,	// (0x000430e0) cell_toolbar_pane_t1

0x5720,	// (0x00043108) toolbar_button_pane_ParamLimits

0x661b,	// (0x00044003) ai_gene_pane_1_t2_ParamLimits

0x661b,	// (0x00044003) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004d310) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004d310) ai_gene_pane_1_t

0x74e2,	// (0x00044eca) scroll_sc2_left_pane_g1

0x74e2,	// (0x00044eca) scroll_sc2_right_pane_g1

0x48fc,	// (0x000422e4) bg_popup_sub_pane_cp10

0x74ec,	// (0x00044ed4) list_choice_list_pane

0x7503,	// (0x00044eeb) list_single_choice_list_pane_ParamLimits

0x7503,	// (0x00044eeb) list_single_choice_list_pane

0x7517,	// (0x00044eff) list_single_choice_list_pane_g1

0x751f,	// (0x00044f07) list_single_choice_list_pane_t1_ParamLimits

0x751f,	// (0x00044f07) list_single_choice_list_pane_t1

0x7534,	// (0x00044f1c) choice_list_pane_g1

0x753c,	// (0x00044f24) choice_list_pane_t1

0x3cc6,	// (0x000416ae) input_focus_pane_cp11

0x4a71,	// (0x00042459) title_pane_stacon_g2_ParamLimits

0x4a71,	// (0x00042459) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0004d0d2) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0004d0d2) title_pane_stacon_g

0x51ec,	// (0x00042bd4) cursor_press_pane

0xb9ff,	// (0x000493e7) popup_fep_hwr_window_ParamLimits

0xb9ff,	// (0x000493e7) popup_fep_hwr_window

0x549a,	// (0x00042e82) popup_fep_vkb_window_ParamLimits

0x549a,	// (0x00042e82) popup_fep_vkb_window

0x754a,	// (0x00044f32) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0004d52f) fep_vkb_side_pane_g_ParamLimits

0x9cf4,	// (0x000476dc) fep_hwr_candidate_pane_ParamLimits

0x9cf4,	// (0x000476dc) fep_hwr_candidate_pane

0x9d1e,	// (0x00047706) fep_hwr_side_pane_ParamLimits

0x9d1e,	// (0x00047706) fep_hwr_side_pane

0x9d3e,	// (0x00047726) fep_hwr_top_pane_ParamLimits

0x9d3e,	// (0x00047726) fep_hwr_top_pane

0x9d56,	// (0x0004773e) fep_hwr_write_pane_ParamLimits

0x9d56,	// (0x0004773e) fep_hwr_write_pane

0xfb47,	// (0x0004d52f) fep_vkb_side_pane_g

0x7564,	// (0x00044f4c) fep_hwr_top_pane_g1

0x7552,	// (0x00044f3a) fep_hwr_top_pane_g2

0x9d90,	// (0x00047778) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0004d50b) fep_hwr_top_pane_g

0x9da5,	// (0x0004778d) fep_hwr_top_text_pane

0x4cdd,	// (0x000426c5) fep_hwr_top_text_pane_g1

0x759a,	// (0x00044f82) fep_hwr_top_text_pane_t1

0x9e9b,	// (0x00047883) fep_hwr_candidate_pane_g1

0x77a7,	// (0x0004518f) fep_vkb_keypad_pane_g3_ParamLimits

0x77a7,	// (0x0004518f) fep_vkb_keypad_pane_g3

0x77cf,	// (0x000451b7) fep_vkb_keypad_pane_g4_ParamLimits

0x77cf,	// (0x000451b7) fep_vkb_keypad_pane_g4

0x783e,	// (0x00045226) fep_vkb_bottom_pane_g2_ParamLimits

0x783e,	// (0x00045226) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0004d536) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0004d536) fep_vkb_bottom_pane_g

0x74e2,	// (0x00044eca) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0004d540) cell_vkb_side_pane_g

0x7882,	// (0x0004526a) cell_vkb_side_pane_t1

0x7890,	// (0x00045278) cell_vkb_side_pane_t1_copy1

0x74e2,	// (0x00044eca) bg_fep_vkb_candidate_pane_g2

0x796c,	// (0x00045354) cell_vkb_candidate_pane_ParamLimits

0x75a8,	// (0x00044f90) aid_size_cell_vkb_ParamLimits

0x75a8,	// (0x00044f90) aid_size_cell_vkb

0x796c,	// (0x00045354) cell_vkb_candidate_pane

0x9ec2,	// (0x000478aa) bg_popup_fep_shadow_pane_g1

0x7624,	// (0x0004500c) fep_vkb_bottom_pane_ParamLimits

0x7624,	// (0x0004500c) fep_vkb_bottom_pane

0x7661,	// (0x00045049) fep_vkb_candidate_pane_ParamLimits

0x7661,	// (0x00045049) fep_vkb_candidate_pane

0x767d,	// (0x00045065) fep_vkb_keypad_pane_ParamLimits

0x767d,	// (0x00045065) fep_vkb_keypad_pane

0x76c3,	// (0x000450ab) fep_vkb_side_pane_ParamLimits

0x76c3,	// (0x000450ab) fep_vkb_side_pane

0x76ff,	// (0x000450e7) fep_vkb_top_pane_ParamLimits

0x76ff,	// (0x000450e7) fep_vkb_top_pane

0x773b,	// (0x00045123) fep_vkb_top_pane_g1_ParamLimits

0x773b,	// (0x00045123) fep_vkb_top_pane_g1

0x774a,	// (0x00045132) fep_vkb_top_pane_g2_ParamLimits

0x774a,	// (0x00045132) fep_vkb_top_pane_g2

0x7759,	// (0x00045141) fep_vkb_top_pane_g3_ParamLimits

0x7759,	// (0x00045141) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0004d526) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0004d526) fep_vkb_top_pane_g

0x7777,	// (0x0004515f) fep_vkb_top_text_pane_ParamLimits

0x7777,	// (0x0004515f) fep_vkb_top_text_pane

0xc9e0,	// (0x0004a3c8) fep_vkb_side_pane_g1_ParamLimits

0xc9e0,	// (0x0004a3c8) fep_vkb_side_pane_g1

0x7796,	// (0x0004517e) grid_vkb_side_pane_ParamLimits

0x7796,	// (0x0004517e) grid_vkb_side_pane

0x9eca,	// (0x000478b2) bg_popup_fep_shadow_pane_g2

0x9ed3,	// (0x000478bb) bg_popup_fep_shadow_pane_g3

0x9edb,	// (0x000478c3) bg_popup_fep_shadow_pane_g4

0x9ee4,	// (0x000478cc) bg_popup_fep_shadow_pane_g5

0x9eee,	// (0x000478d6) bg_popup_fep_shadow_pane_g6

0x9ef6,	// (0x000478de) bg_popup_fep_shadow_pane_g7

0x4824,	// (0x0004220c) bg_popup_fep_shadow_pane_g8

0x77ed,	// (0x000451d5) grid_vkb_keypad_number_pane_ParamLimits

0x77ed,	// (0x000451d5) grid_vkb_keypad_number_pane

0x77fd,	// (0x000451e5) grid_vkb_keypad_pane_ParamLimits

0x77fd,	// (0x000451e5) grid_vkb_keypad_pane

0x7823,	// (0x0004520b) fep_vkb_bottom_pane_g1_ParamLimits

0x7823,	// (0x0004520b) fep_vkb_bottom_pane_g1

0x784c,	// (0x00045234) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x784c,	// (0x00045234) grid_vkb_keypad_bottom_left_pane

0x7861,	// (0x00045249) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7861,	// (0x00045249) grid_vkb_keypad_bottom_right_pane

0x7876,	// (0x0004525e) fep_vkb_top_text_pane_g1

0xca2a,	// (0x0004a412) fep_vkb_top_text_pane_t1

0xca3f,	// (0x0004a427) cell_vkb_side_pane_ParamLimits

0xca3f,	// (0x0004a427) cell_vkb_side_pane

0x74e2,	// (0x00044eca) cell_vkb_side_pane_g1

0x789e,	// (0x00045286) cell_vkb_keypad_pane_ParamLimits

0x789e,	// (0x00045286) cell_vkb_keypad_pane

0x7919,	// (0x00045301) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0004d553) bg_popup_fep_shadow_pane_g

0x9f08,	// (0x000478f0) cell_hwr_side_pane_g1

0x9f08,	// (0x000478f0) cell_hwr_side_pane_g2

0x7923,	// (0x0004530b) cell_vkb_keypad_pane_t1

0xca62,	// (0x0004a44a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xca62,	// (0x0004a44a) cell_vkb_keypad_bottom_left_pane

0xca7f,	// (0x0004a467) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xca7f,	// (0x0004a467) cell_vkb_keypad_bottom_right_pane

0x74e2,	// (0x00044eca) cell_vkb_keypad_bottom_left_pane_g1

0x74e2,	// (0x00044eca) cell_vkb_keypad_bottom_right_pane_g1

0x7931,	// (0x00045319) cell_vkb_keypad_number_pane_ParamLimits

0x7931,	// (0x00045319) cell_vkb_keypad_number_pane

0x7950,	// (0x00045338) cell_vkb_keypad_number_pane_g1

0x795a,	// (0x00045342) cell_vkb_keypad_number_pane_g2

0x7963,	// (0x0004534b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0004d545) cell_vkb_keypad_number_pane_g

0x7923,	// (0x0004530b) cell_vkb_keypad_number_pane_t1

0x7989,	// (0x00045371) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x0004d566) cell_hwr_side_pane_g

0x79a2,	// (0x0004538a) cell_hwr_side_pane_t1

0x9f12,	// (0x000478fa) cell_hwr_side_pane_t1_copy1

0x9f20,	// (0x00047908) cell_hwr_candidate_pane_g1

0x9f4f,	// (0x00047937) cell_hwr_candidate_pane_t1

0x74e2,	// (0x00044eca) cell_vkb_candidate_pane_g2

0x7a28,	// (0x00045410) cell_vkb_candidate_pane_t1

0x9cbb,	// (0x000476a3) bg_popup_fep_shadow_pane_ParamLimits

0x9cbb,	// (0x000476a3) bg_popup_fep_shadow_pane

0x9d70,	// (0x00047758) bg_fep_hwr_top_pane_g4

0x7576,	// (0x00044f5e) bg_hwr_side_pane_g1_ParamLimits

0x7576,	// (0x00044f5e) bg_hwr_side_pane_g1

0x9de1,	// (0x000477c9) cell_hwr_side_pane_ParamLimits

0x9de1,	// (0x000477c9) cell_hwr_side_pane

0x9e1c,	// (0x00047804) fep_hwr_write_pane_g1_ParamLimits

0x9e1c,	// (0x00047804) fep_hwr_write_pane_g1

0x9e29,	// (0x00047811) fep_hwr_write_pane_g2_ParamLimits

0x9e29,	// (0x00047811) fep_hwr_write_pane_g2

0x9e36,	// (0x0004781e) fep_hwr_write_pane_g3_ParamLimits

0x9e36,	// (0x0004781e) fep_hwr_write_pane_g3

0x9e44,	// (0x0004782c) fep_hwr_write_pane_g4_ParamLimits

0x9e44,	// (0x0004782c) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0004d512) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0004d512) fep_hwr_write_pane_g

0x9d70,	// (0x00047758) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9d70,	// (0x00047758) bg_fep_hwr_candidate_pane_g2

0x9e59,	// (0x00047841) cell_hwr_candidate_pane_ParamLimits

0x9e59,	// (0x00047841) cell_hwr_candidate_pane

0x9e9b,	// (0x00047883) fep_hwr_candidate_pane_g1_ParamLimits

0x75d6,	// (0x00044fbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x75d6,	// (0x00044fbe) bg_popup_fep_shadow_pane_cp2

0x7769,	// (0x00045151) fep_vkb_top_pane_g4_ParamLimits

0x7769,	// (0x00045151) fep_vkb_top_pane_g4

0x7788,	// (0x00045170) fep_vkb_side_pane_g2_ParamLimits

0x7788,	// (0x00045170) fep_vkb_side_pane_g2

0x9048,	// (0x00046a30) list_setting_pane_t4_ParamLimits

0x9048,	// (0x00046a30) list_setting_pane_t4

0x90e2,	// (0x00046aca) list_setting_number_pane_t5_ParamLimits

0x90e2,	// (0x00046aca) list_setting_number_pane_t5

0xaf6e,	// (0x00048956) list_double_heading_pane_cp2_ParamLimits

0xaf6e,	// (0x00048956) list_double_heading_pane_cp2

0x474c,	// (0x00042134) list_double_heading_pane_g1_cp2_ParamLimits

0x474c,	// (0x00042134) list_double_heading_pane_g1_cp2

0x47cb,	// (0x000421b3) list_double_heading_pane_g2_cp2_ParamLimits

0x47cb,	// (0x000421b3) list_double_heading_pane_g2_cp2

0x7a36,	// (0x0004541e) list_double_heading_pane_t1_cp2_ParamLimits

0x7a36,	// (0x0004541e) list_double_heading_pane_t1_cp2

0x7a4c,	// (0x00045434) list_double_heading_pane_t2_cp2_ParamLimits

0x7a4c,	// (0x00045434) list_double_heading_pane_t2_cp2

0x3cbe,	// (0x000416a6) aid_value_unit2

0x8afa,	// (0x000464e2) popup_preview_fixed_window

0x3e69,	// (0x00041851) bg_popup_preview_window_pane_cp02

0x7a5e,	// (0x00045446) list_preview_fixed_pane

0x7aa4,	// (0x0004548c) list_empty_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_empty_pane_fp

0x7aa4,	// (0x0004548c) list_single_cale_day_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_cale_day_pane_fp

0x7aa4,	// (0x0004548c) list_single_graphic_heading_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_graphic_heading_pane_fp

0x7aa4,	// (0x0004548c) list_single_graphic_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_graphic_pane_fp

0x7aa4,	// (0x0004548c) list_single_heading_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_heading_pane_fp

0x7aa4,	// (0x0004548c) list_single_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_pane_fp

0x7abb,	// (0x000454a3) list_single_pane_fp_g1_ParamLimits

0x7abb,	// (0x000454a3) list_single_pane_fp_g1

0xac93,	// (0x0004867b) list_single_pane_fp_g2_ParamLimits

0xac93,	// (0x0004867b) list_single_pane_fp_g2

0xb6d1,	// (0x000490b9) list_single_pane_fp_g3_ParamLimits

0xb6d1,	// (0x000490b9) list_single_pane_fp_g3

0x7ac7,	// (0x000454af) list_single_pane_fp_g4_ParamLimits

0x7ac7,	// (0x000454af) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0004d579) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0004d579) list_single_pane_fp_g

0xb6e5,	// (0x000490cd) list_single_pane_fp_t1_ParamLimits

0xb6e5,	// (0x000490cd) list_single_pane_fp_t1

0xb6fc,	// (0x000490e4) list_single_graphic_pane_fp_g1_ParamLimits

0xb6fc,	// (0x000490e4) list_single_graphic_pane_fp_g1

0x7abb,	// (0x000454a3) list_single_graphic_pane_fp_g2_ParamLimits

0x7abb,	// (0x000454a3) list_single_graphic_pane_fp_g2

0xac93,	// (0x0004867b) list_single_graphic_pane_fp_g3_ParamLimits

0xac93,	// (0x0004867b) list_single_graphic_pane_fp_g3

0xb6d1,	// (0x000490b9) list_single_graphic_pane_fp_g4_ParamLimits

0xb6d1,	// (0x000490b9) list_single_graphic_pane_fp_g4

0x7ac7,	// (0x000454af) list_single_graphic_pane_fp_g5_ParamLimits

0x7ac7,	// (0x000454af) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004d582) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004d582) list_single_graphic_pane_fp_g

0xb708,	// (0x000490f0) list_single_graphic_pane_fp_t1_ParamLimits

0xb708,	// (0x000490f0) list_single_graphic_pane_fp_t1

0xb6fc,	// (0x000490e4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb6fc,	// (0x000490e4) list_single_graphic_heading_pane_fp_g1

0x7abb,	// (0x000454a3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7abb,	// (0x000454a3) list_single_graphic_heading_pane_fp_g2

0xac93,	// (0x0004867b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xac93,	// (0x0004867b) list_single_graphic_heading_pane_fp_g3

0xb6d1,	// (0x000490b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb6d1,	// (0x000490b9) list_single_graphic_heading_pane_fp_g4

0x7ac7,	// (0x000454af) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7ac7,	// (0x000454af) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004d582) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004d582) list_single_graphic_heading_pane_fp_g

0xb71e,	// (0x00049106) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb71e,	// (0x00049106) list_single_graphic_heading_pane_fp_t1

0xb734,	// (0x0004911c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb734,	// (0x0004911c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0004d58d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0004d58d) list_single_graphic_heading_pane_fp_t

0xb746,	// (0x0004912e) list_single_cale_day_pane_fp_g1_ParamLimits

0xb746,	// (0x0004912e) list_single_cale_day_pane_fp_g1

0x7ad3,	// (0x000454bb) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ad3,	// (0x000454bb) list_single_cale_day_pane_fp_g2

0xb77e,	// (0x00049166) list_single_cale_day_pane_fp_g3_ParamLimits

0xb77e,	// (0x00049166) list_single_cale_day_pane_fp_g3

0xb7a6,	// (0x0004918e) list_single_cale_day_pane_fp_g4_ParamLimits

0xb7a6,	// (0x0004918e) list_single_cale_day_pane_fp_g4

0xb7ca,	// (0x000491b2) list_single_cale_day_pane_fp_g5_ParamLimits

0xb7ca,	// (0x000491b2) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0004d592) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0004d592) list_single_cale_day_pane_fp_g

0xb7ee,	// (0x000491d6) list_single_cale_day_pane_fp_t1_ParamLimits

0xb7ee,	// (0x000491d6) list_single_cale_day_pane_fp_t1

0xb814,	// (0x000491fc) list_single_cale_day_pane_fp_t2_ParamLimits

0xb814,	// (0x000491fc) list_single_cale_day_pane_fp_t2

0xb82d,	// (0x00049215) list_single_cale_day_pane_fp_t3_ParamLimits

0xb82d,	// (0x00049215) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0004d59d) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0004d59d) list_single_cale_day_pane_fp_t

0x7abb,	// (0x000454a3) list_empty_pane_fp_g1_ParamLimits

0x7abb,	// (0x000454a3) list_empty_pane_fp_g1

0xb846,	// (0x0004922e) list_empty_pane_fp_t1

0xb854,	// (0x0004923c) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0004d5a4) list_empty_pane_fp_t

0x7abb,	// (0x000454a3) list_single_heading_pane_fp_g1_ParamLimits

0x7abb,	// (0x000454a3) list_single_heading_pane_fp_g1

0xac93,	// (0x0004867b) list_single_heading_pane_fp_g2_ParamLimits

0xac93,	// (0x0004867b) list_single_heading_pane_fp_g2

0xb6d1,	// (0x000490b9) list_single_heading_pane_fp_g3_ParamLimits

0xb6d1,	// (0x000490b9) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x0004d5a9) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x0004d5a9) list_single_heading_pane_fp_g

0xb862,	// (0x0004924a) list_single_heading_pane_fp_t1_ParamLimits

0xb862,	// (0x0004924a) list_single_heading_pane_fp_t1

0xb874,	// (0x0004925c) list_single_heading_pane_fp_t2_ParamLimits

0xb874,	// (0x0004925c) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0004d5b0) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0004d5b0) list_single_heading_pane_fp_t

0x4908,	// (0x000422f0) aid_size_cell_fast

0x3e4c,	// (0x00041834) soft_indicator_pane_cp1_t1

0x4945,	// (0x0004232d) cell_app_pane_cp2_ParamLimits

0x4945,	// (0x0004232d) cell_app_pane_cp2

0x9cdd,	// (0x000476c5) fep_hwr_candidate_drop_down_list_pane

0x9eb5,	// (0x0004789d) fep_hwr_candidate_pane_g3_ParamLimits

0x9eb5,	// (0x0004789d) fep_hwr_candidate_pane_g3

0x3b4a,	// (0x00041532) fep_hwr_candidate_pane_g4_ParamLimits

0x3b4a,	// (0x00041532) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0004d51f) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0004d51f) fep_hwr_candidate_pane_g

0x7650,	// (0x00045038) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7650,	// (0x00045038) fep_vkb_candidate_drop_down_list_pane

0x7991,	// (0x00045379) fep_vkb_candidate_pane_g3

0x7999,	// (0x00045381) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0004d54c) fep_vkb_candidate_pane_g

0x9f20,	// (0x00047908) cell_hwr_candidate_pane_g1_ParamLimits

0x9f2e,	// (0x00047916) cell_hwr_candidate_pane_g3_ParamLimits

0x9f2e,	// (0x00047916) cell_hwr_candidate_pane_g3

0xdf60,	// (0x0004b948) cell_hwr_candidate_pane_g4_ParamLimits

0xdf60,	// (0x0004b948) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x0004d56b) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x0004d56b) cell_hwr_candidate_pane_g

0x79f2,	// (0x000453da) cell_vkb_candidate_pane_g3_ParamLimits

0x79f2,	// (0x000453da) cell_vkb_candidate_pane_g3

0x7a0d,	// (0x000453f5) cell_vkb_candidate_pane_g4_ParamLimits

0x7a0d,	// (0x000453f5) cell_vkb_candidate_pane_g4

0x7adf,	// (0x000454c7) cell_app_pane_cp2_g1_ParamLimits

0x7adf,	// (0x000454c7) cell_app_pane_cp2_g1

0x7afd,	// (0x000454e5) cell_app_pane_cp2_g2_ParamLimits

0x7afd,	// (0x000454e5) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0004d5b5) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0004d5b5) cell_app_pane_cp2_g

0x7b09,	// (0x000454f1) cell_app_pane_cp2_t1_ParamLimits

0x7b09,	// (0x000454f1) cell_app_pane_cp2_t1

0x47b1,	// (0x00042199) grid_highlight_pane_cp1_ParamLimits

0x47b1,	// (0x00042199) grid_highlight_pane_cp1

0x9f6d,	// (0x00047955) cell_hwr_candidate_pane_cp1_ParamLimits

0x9f6d,	// (0x00047955) cell_hwr_candidate_pane_cp1

0x9f20,	// (0x00047908) fep_hwr_candidate_drop_down_list_pane_g1

0x9f8c,	// (0x00047974) fep_hwr_candidate_drop_down_list_pane_g2

0x9f99,	// (0x00047981) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0004d5ba) fep_hwr_candidate_drop_down_list_pane_g

0x9fa6,	// (0x0004798e) fep_hwr_candidate_drop_down_list_scroll_pane

0x9faf,	// (0x00047997) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9faf,	// (0x00047997) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9fbc,	// (0x000479a4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9fbc,	// (0x000479a4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9fc9,	// (0x000479b1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9fc9,	// (0x000479b1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9fd6,	// (0x000479be) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9fd6,	// (0x000479be) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9ff1,	// (0x000479d9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9ff1,	// (0x000479d9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa00c,	// (0x000479f4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa00c,	// (0x000479f4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa027,	// (0x00047a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa027,	// (0x00047a0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa042,	// (0x00047a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa042,	// (0x00047a2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0004d5c1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0004d5c1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b50,	// (0x00045538) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b50,	// (0x00045538) cell_vkb_candidate_pane_cp1

0x7769,	// (0x00045151) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7769,	// (0x00045151) fep_vkb_candidate_drop_down_list_pane_g1

0x7b1b,	// (0x00045503) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7b1b,	// (0x00045503) fep_vkb_candidate_drop_down_list_pane_g2

0x7b28,	// (0x00045510) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7b28,	// (0x00045510) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x0004d5d2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x0004d5d2) fep_vkb_candidate_drop_down_list_pane_g

0x7b70,	// (0x00045558) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7b70,	// (0x00045558) fep_vkb_candidate_drop_down_list_scroll_pane

0x7b7d,	// (0x00045565) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7b7d,	// (0x00045565) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7b8a,	// (0x00045572) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b8a,	// (0x00045572) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b96,	// (0x0004557e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b96,	// (0x0004557e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79b0,	// (0x00045398) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79b0,	// (0x00045398) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x79d1,	// (0x000453b9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x79d1,	// (0x000453b9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7ba2,	// (0x0004558a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ba2,	// (0x0004558a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7bc3,	// (0x000455ab) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7bc3,	// (0x000455ab) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b35,	// (0x0004551d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b35,	// (0x0004551d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0004d5d9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0004d5d9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa992,	// (0x0004837a) title_pane_g1_ParamLimits

0xa99f,	// (0x00048387) title_pane_g2_ParamLimits

0xf56a,	// (0x0004cf52) title_pane_g_ParamLimits

0x4cd5,	// (0x000426bd) aid_call2_pane

0x4ccd,	// (0x000426b5) aid_call_pane

0x4cdd,	// (0x000426c5) popup_clock_analogue_window_g1

0x4cdd,	// (0x000426c5) popup_clock_analogue_window_g2

0x93d7,	// (0x00046dbf) popup_clock_analogue_window_g3

0x93e0,	// (0x00046dc8) popup_clock_analogue_window_g4

0x3cd0,	// (0x000416b8) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0004d101) popup_clock_analogue_window_g

0x93e8,	// (0x00046dd0) popup_clock_analogue_window_t1

0x93f6,	// (0x00046dde) clock_digital_number_pane_ParamLimits

0x93f6,	// (0x00046dde) clock_digital_number_pane

0x9402,	// (0x00046dea) clock_digital_number_pane_cp02_ParamLimits

0x9402,	// (0x00046dea) clock_digital_number_pane_cp02

0x940e,	// (0x00046df6) clock_digital_number_pane_cp03_ParamLimits

0x940e,	// (0x00046df6) clock_digital_number_pane_cp03

0x941a,	// (0x00046e02) clock_digital_number_pane_cp04_ParamLimits

0x941a,	// (0x00046e02) clock_digital_number_pane_cp04

0x9426,	// (0x00046e0e) clock_digital_separator_pane_ParamLimits

0x9426,	// (0x00046e0e) clock_digital_separator_pane

0x9432,	// (0x00046e1a) popup_clock_digital_window_t1_ParamLimits

0x9432,	// (0x00046e1a) popup_clock_digital_window_t1

0x3cd0,	// (0x000416b8) clock_digital_number_pane_g1

0x3cd0,	// (0x000416b8) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0004d10c) clock_digital_number_pane_g

0x3cd0,	// (0x000416b8) clock_digital_separator_pane_g1

0x3cd0,	// (0x000416b8) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0004d10c) clock_digital_separator_pane_g

0xbdec,	// (0x000497d4) aid_fill_nsta_ParamLimits

0xbeb5,	// (0x0004989d) indicator_nsta_pane_ParamLimits

0x5611,	// (0x00042ff9) popup_clock_analogue_window

0x5611,	// (0x00042ff9) popup_clock_digital_window

0x3d36,	// (0x0004171e) grid_indicator_nsta_pane_ParamLimits

0x7188,	// (0x00044b70) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0004d49f) clock_nsta_pane_t

0x939b,	// (0x00046d83) aid_size_max_handle

0x93a5,	// (0x00046d8d) aid_size_min_handle

0x51ec,	// (0x00042bd4) editor_scroll_pane

0x7be4,	// (0x000455cc) ex_editor_pane

0x48c4,	// (0x000422ac) scroll_pane_cp13

0x4744,	// (0x0004212c) scroll_pane_cp14

0x4d07,	// (0x000426ef) scroll_pane_cp36

0xaf80,	// (0x00048968) list_single_graphic_hl_pane_cp2_ParamLimits

0xaf80,	// (0x00048968) list_single_graphic_hl_pane_cp2

0xb41d,	// (0x00048e05) list_single_graphic_hl_pane_ParamLimits

0xb41d,	// (0x00048e05) list_single_graphic_hl_pane

0xb88a,	// (0x00049272) aid_size_min_hl_cp1

0x7bec,	// (0x000455d4) list_highlight_pane_cp34_ParamLimits

0x7bec,	// (0x000455d4) list_highlight_pane_cp34

0x7bfd,	// (0x000455e5) list_single_graphic_hl_pane_g1_ParamLimits

0x7bfd,	// (0x000455e5) list_single_graphic_hl_pane_g1

0xb893,	// (0x0004927b) list_single_graphic_hl_pane_g2_ParamLimits

0xb893,	// (0x0004927b) list_single_graphic_hl_pane_g2

0xb893,	// (0x0004927b) list_single_graphic_hl_pane_g3_ParamLimits

0xb893,	// (0x0004927b) list_single_graphic_hl_pane_g3

0x515d,	// (0x00042b45) list_single_graphic_hl_pane_g4_ParamLimits

0x515d,	// (0x00042b45) list_single_graphic_hl_pane_g4

0xb89f,	// (0x00049287) list_single_graphic_hl_pane_g5_ParamLimits

0xb89f,	// (0x00049287) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0004d5ea) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0004d5ea) list_single_graphic_hl_pane_g

0x8cc2,	// (0x000466aa) list_single_graphic_hl_pane_t1_ParamLimits

0x8cc2,	// (0x000466aa) list_single_graphic_hl_pane_t1

0x7c0a,	// (0x000455f2) aid_size_min_hl_cp2

0x7c13,	// (0x000455fb) list_highlight_pane_cp34_cp2_ParamLimits

0x7c13,	// (0x000455fb) list_highlight_pane_cp34_cp2

0x7bfd,	// (0x000455e5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bfd,	// (0x000455e5) list_single_graphic_hl_pane_g1_cp2

0x7c20,	// (0x00045608) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7c20,	// (0x00045608) list_single_graphic_hl_pane_g2_cp2

0x7c2c,	// (0x00045614) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c2c,	// (0x00045614) list_single_graphic_hl_pane_g3_cp2

0x5123,	// (0x00042b0b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5123,	// (0x00042b0b) list_single_graphic_hl_pane_g4_cp2

0x7c3a,	// (0x00045622) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7c3a,	// (0x00045622) list_single_graphic_hl_pane_g5_cp2

0x96e2,	// (0x000470ca) control_pane_g4_ParamLimits

0x96e2,	// (0x000470ca) control_pane_g4

0x48fc,	// (0x000422e4) bg_popup_sub_pane_cp10_ParamLimits

0x74ec,	// (0x00044ed4) list_choice_list_pane_ParamLimits

0x74fb,	// (0x00044ee3) scroll_pane_cp23

0x3e69,	// (0x00041851) bg_popup_preview_window_pane_cp02_ParamLimits

0x7a5e,	// (0x00045446) list_preview_fixed_pane_ParamLimits

0x7a74,	// (0x0004545c) list_preview_fixed_pane_cp_ParamLimits

0x7a74,	// (0x0004545c) list_preview_fixed_pane_cp

0x7a80,	// (0x00045468) popup_preview_fixed_window_g1_ParamLimits

0x7a80,	// (0x00045468) popup_preview_fixed_window_g1

0x7a8c,	// (0x00045474) popup_preview_fixed_window_g2_ParamLimits

0x7a8c,	// (0x00045474) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0004d572) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0004d572) popup_preview_fixed_window_g

0x930f,	// (0x00046cf7) aid_navi_side_left_pane_ParamLimits

0x9324,	// (0x00046d0c) aid_navi_side_right_pane_ParamLimits

0x933c,	// (0x00046d24) navi_icon_pane_stacon_ParamLimits

0x9350,	// (0x00046d38) navi_navi_pane_stacon_ParamLimits

0x933c,	// (0x00046d24) navi_text_pane_stacon_ParamLimits

0x3cc6,	// (0x000416ae) main_text_info_pane

0x7c64,	// (0x0004564c) listscroll_text_info_pane

0x7c6c,	// (0x00045654) list_text_info_pane_ParamLimits

0x7c6c,	// (0x00045654) list_text_info_pane

0x7c7b,	// (0x00045663) scroll_pane_cp24_ParamLimits

0x7c7b,	// (0x00045663) scroll_pane_cp24

0xcab8,	// (0x0004a4a0) list_text_info_pane_t1_ParamLimits

0xcab8,	// (0x0004a4a0) list_text_info_pane_t1

0xb21c,	// (0x00048c04) popup_fast_swap2_window_ParamLimits

0xb21c,	// (0x00048c04) popup_fast_swap2_window

0x7c99,	// (0x00045681) aid_size_cell_fast2

0x3cc6,	// (0x000416ae) bg_popup_window_pane_cp17

0x5ac3,	// (0x000434ab) heading_pane_cp2

0x4477,	// (0x00041e5f) listscroll_fast2_pane

0x7ca3,	// (0x0004568b) grid_fast2_pane

0x7cad,	// (0x00045695) listscroll_fast2_pane_g1

0x7cb5,	// (0x0004569d) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0004d5f5) listscroll_fast2_pane_g

0x48c4,	// (0x000422ac) scroll_pane_cp26

0x7cbf,	// (0x000456a7) cell_fast2_pane_ParamLimits

0x7cbf,	// (0x000456a7) cell_fast2_pane

0x7cd4,	// (0x000456bc) cell_fast2_pane_g1

0x7cdd,	// (0x000456c5) cell_fast2_pane_g2

0x7ce6,	// (0x000456ce) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0004d5fa) cell_fast2_pane_g

0x450b,	// (0x00041ef3) grid_highlight_pane_cp9

0x4520,	// (0x00041f08) main_eswt_pane_ParamLimits

0x4520,	// (0x00041f08) main_eswt_pane

0x7c90,	// (0x00045678) list_single_text_info_pane

0x7cee,	// (0x000456d6) eswt_ctrl_button_pane

0x7cee,	// (0x000456d6) eswt_ctrl_canvas_pane

0x7cf6,	// (0x000456de) eswt_ctrl_combo_pane

0x7cee,	// (0x000456d6) eswt_ctrl_default_pane

0x7cee,	// (0x000456d6) eswt_ctrl_label_pane

0x7cfe,	// (0x000456e6) eswt_ctrl_wait_pane

0x7d06,	// (0x000456ee) eswt_shell_pane

0x3cc6,	// (0x000416ae) listscroll_eswt_app_pane

0x7d26,	// (0x0004570e) popup_eswt_tasktip_window_ParamLimits

0x7d26,	// (0x0004570e) popup_eswt_tasktip_window

0x581c,	// (0x00043204) bg_popup_window_pane_cp18

0x7d37,	// (0x0004571f) eswt_control_pane_g1_ParamLimits

0x7d37,	// (0x0004571f) eswt_control_pane_g1

0x7d44,	// (0x0004572c) eswt_control_pane_g2_ParamLimits

0x7d44,	// (0x0004572c) eswt_control_pane_g2

0x7d51,	// (0x00045739) eswt_control_pane_g3_ParamLimits

0x7d51,	// (0x00045739) eswt_control_pane_g3

0x7d5e,	// (0x00045746) eswt_control_pane_g4_ParamLimits

0x7d5e,	// (0x00045746) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0004d601) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0004d601) eswt_control_pane_g

0x47b1,	// (0x00042199) bg_button_pane_ParamLimits

0x47b1,	// (0x00042199) bg_button_pane

0x4520,	// (0x00041f08) common_borders_pane_copy2_ParamLimits

0x4520,	// (0x00041f08) common_borders_pane_copy2

0x7d6b,	// (0x00045753) control_button_pane_g1_ParamLimits

0x7d6b,	// (0x00045753) control_button_pane_g1

0x7d77,	// (0x0004575f) control_button_pane_g2_ParamLimits

0x7d77,	// (0x0004575f) control_button_pane_g2

0x7d83,	// (0x0004576b) control_button_pane_g3_ParamLimits

0x7d83,	// (0x0004576b) control_button_pane_g3

0x0002,

0xfc22,	// (0x0004d60a) control_button_pane_g_ParamLimits

0xfc22,	// (0x0004d60a) control_button_pane_g

0x7d97,	// (0x0004577f) control_button_pane_t1

0x7da5,	// (0x0004578d) control_button_pane_t2

0x0001,

0xfc29,	// (0x0004d611) control_button_pane_t

0x572c,	// (0x00043114) bg_button_pane_g1

0x5734,	// (0x0004311c) bg_button_pane_g2

0x573c,	// (0x00043124) bg_button_pane_g3

0x5744,	// (0x0004312c) bg_button_pane_g4

0x574c,	// (0x00043134) bg_button_pane_g5

0x5754,	// (0x0004313c) bg_button_pane_g6

0x575c,	// (0x00043144) bg_button_pane_g7

0x5764,	// (0x0004314c) bg_button_pane_g8

0x576c,	// (0x00043154) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004d264) bg_button_pane_g

0x74a7,	// (0x00044e8f) common_borders_pane_ParamLimits

0x74a7,	// (0x00044e8f) common_borders_pane

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy1_ParamLimits

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy1

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy1_ParamLimits

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy1

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy1_ParamLimits

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy1

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy1_ParamLimits

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy1

0x74e2,	// (0x00044eca) bg_eswt_ctrl_canvas_pane_g1

0x74a7,	// (0x00044e8f) common_borders_pane_cp2_ParamLimits

0x74a7,	// (0x00044e8f) common_borders_pane_cp2

0x74a7,	// (0x00044e8f) common_borders_pane_cp3_ParamLimits

0x74a7,	// (0x00044e8f) common_borders_pane_cp3

0x7db3,	// (0x0004579b) separator_horizontal_pane

0x7dbb,	// (0x000457a3) separator_vertical_pane

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy2_ParamLimits

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy2

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy2_ParamLimits

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy2

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy2_ParamLimits

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy2

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy2_ParamLimits

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy2

0x3cc6,	// (0x000416ae) common_borders_pane_cp4

0x7dc4,	// (0x000457ac) separator_horizontal_pane_g1

0x7dcd,	// (0x000457b5) separator_horizontal_pane_g2

0x7dd6,	// (0x000457be) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0004d616) separator_horizontal_pane_g

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy3_ParamLimits

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy3

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy3_ParamLimits

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy3

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy3_ParamLimits

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy3

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy3_ParamLimits

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy3

0x3cc6,	// (0x000416ae) common_borders_pane_cp5

0x7ddf,	// (0x000457c7) separator_vertical_pane_g1

0x7de8,	// (0x000457d0) separator_vertical_pane_g2

0x7df1,	// (0x000457d9) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0004d61d) separator_vertical_pane_g

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy4_ParamLimits

0x7d37,	// (0x0004571f) eswt_control_pane_g1_copy4

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy4_ParamLimits

0x7d44,	// (0x0004572c) eswt_control_pane_g2_copy4

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy4_ParamLimits

0x7d51,	// (0x00045739) eswt_control_pane_g3_copy4

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy4_ParamLimits

0x7d5e,	// (0x00045746) eswt_control_pane_g4_copy4

0xcaf1,	// (0x0004a4d9) eswt_ctrl_combo_button_pane

0xcaf9,	// (0x0004a4e1) eswt_ctrl_input_pane

0xcb01,	// (0x0004a4e9) popup_choice_list_window_cp70

0xcb09,	// (0x0004a4f1) eswt_ctrl_input_pane_t1

0x3cc6,	// (0x000416ae) input_focus_pane_cp70

0x74a7,	// (0x00044e8f) bg_button_pane_cp70_ParamLimits

0x74a7,	// (0x00044e8f) bg_button_pane_cp70

0xcb17,	// (0x0004a4ff) eswt_ctrl_combo_button_pane_g1

0x7dfa,	// (0x000457e2) wait_bar_pane_cp70

0x581c,	// (0x00043204) bg_popup_window_pane_cp70_ParamLimits

0x581c,	// (0x00043204) bg_popup_window_pane_cp70

0x7e02,	// (0x000457ea) popup_eswt_tasktip_window_t1

0x7e18,	// (0x00045800) wait_bar_pane_cp71_ParamLimits

0x7e18,	// (0x00045800) wait_bar_pane_cp71

0x7e24,	// (0x0004580c) grid_eswt_app_pane

0x4b1c,	// (0x00042504) scroll_pane_cp70

0xcb1f,	// (0x0004a507) cell_eswt_app_pane_ParamLimits

0xcb1f,	// (0x0004a507) cell_eswt_app_pane

0xcb53,	// (0x0004a53b) cell_eswt_app_pane_g1_ParamLimits

0xcb53,	// (0x0004a53b) cell_eswt_app_pane_g1

0xcb82,	// (0x0004a56a) cell_eswt_app_pane_g2_ParamLimits

0xcb82,	// (0x0004a56a) cell_eswt_app_pane_g2

0x0001,

0x00a2,	// (0x0003da8a) cell_eswt_app_pane_g_ParamLimits

0x00a2,	// (0x0003da8a) cell_eswt_app_pane_g

0xcbab,	// (0x0004a593) cell_eswt_app_pane_t1_ParamLimits

0xcbab,	// (0x0004a593) cell_eswt_app_pane_t1

0xcbdd,	// (0x0004a5c5) grid_highlight_pane_cp70_ParamLimits

0xcbdd,	// (0x0004a5c5) grid_highlight_pane_cp70

0x50bf,	// (0x00042aa7) set_content_pane_g1

0x53c3,	// (0x00042dab) status_small_volume_pane

0xa05d,	// (0x00047a45) status_small_volume_pane_g1

0xa065,	// (0x00047a4d) volume_small2_pane

0xa06e,	// (0x00047a56) volume_small2_pane_g1

0xa077,	// (0x00047a5f) volume_small2_pane_g2

0xa080,	// (0x00047a68) volume_small2_pane_g3

0xa089,	// (0x00047a71) volume_small2_pane_g4

0xa092,	// (0x00047a7a) volume_small2_pane_g5

0xa09b,	// (0x00047a83) volume_small2_pane_g6

0xa0a4,	// (0x00047a8c) volume_small2_pane_g7

0xa0ad,	// (0x00047a95) volume_small2_pane_g8

0xa0b6,	// (0x00047a9e) volume_small2_pane_g9

0xa0bf,	// (0x00047aa7) volume_small2_pane_g10

0x0009,

0xfc3c,	// (0x0004d624) volume_small2_pane_g

0x7876,	// (0x0004525e) fep_vkb_top_text_pane_g1_ParamLimits

0xca2a,	// (0x0004a412) fep_vkb_top_text_pane_t1_ParamLimits

0x7a98,	// (0x00045480) popup_preview_fixed_window_g3_ParamLimits

0x7a98,	// (0x00045480) popup_preview_fixed_window_g3

0xbd7f,	// (0x00049767) popup_toolbar_trans_pane

0xc462,	// (0x00049e4a) aid_height_set_list_ParamLimits

0x620d,	// (0x00043bf5) aid_size_parent_ParamLimits

0x48fc,	// (0x000422e4) list_highlight_pane_cp2_ParamLimits

0x50bf,	// (0x00042aa7) set_content_pane_g1_ParamLimits

0xb43f,	// (0x00048e27) list_single_image_pane_ParamLimits

0xb43f,	// (0x00048e27) list_single_image_pane

0xcbe9,	// (0x0004a5d1) aid_size_cell_image_ParamLimits

0xcbe9,	// (0x0004a5d1) aid_size_cell_image

0xcbf6,	// (0x0004a5de) grid_single_image_pane_ParamLimits

0xcbf6,	// (0x0004a5de) grid_single_image_pane

0x474c,	// (0x00042134) list_single_image_pane_g1_ParamLimits

0x474c,	// (0x00042134) list_single_image_pane_g1

0x47cb,	// (0x000421b3) list_single_image_pane_g2_ParamLimits

0x47cb,	// (0x000421b3) list_single_image_pane_g2

0x0001,

0xfc51,	// (0x0004d639) list_single_image_pane_g_ParamLimits

0xfc51,	// (0x0004d639) list_single_image_pane_g

0xcc02,	// (0x0004a5ea) list_single_image_pane_t1_ParamLimits

0xcc02,	// (0x0004a5ea) list_single_image_pane_t1

0xcc18,	// (0x0004a600) cell_image_list_pane_ParamLimits

0xcc18,	// (0x0004a600) cell_image_list_pane

0xcc2c,	// (0x0004a614) cell_image_list_pane_g1

0xcc35,	// (0x0004a61d) cell_image_list_pane_g2

0x0001,

0x00c1,	// (0x0003daa9) cell_image_list_pane_g

0xcc3e,	// (0x0004a626) aid_size_cell_tb_trans_pane

0x47b1,	// (0x00042199) bg_tb_trans_pane

0xcc50,	// (0x0004a638) grid_tb_trans_pane

0x572c,	// (0x00043114) bg_tb_trans_pane_g1

0x5734,	// (0x0004311c) bg_tb_trans_pane_g2

0x573c,	// (0x00043124) bg_tb_trans_pane_g3

0x5744,	// (0x0004312c) bg_tb_trans_pane_g4

0x574c,	// (0x00043134) bg_tb_trans_pane_g5

0x5764,	// (0x0004314c) bg_tb_trans_pane_g6

0x576c,	// (0x00043154) bg_tb_trans_pane_g7

0x5754,	// (0x0004313c) bg_tb_trans_pane_g8

0x575c,	// (0x00043144) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x0004d63e) bg_tb_trans_pane_g

0xcc64,	// (0x0004a64c) cell_toolbar_trans_pane_ParamLimits

0xcc64,	// (0x0004a64c) cell_toolbar_trans_pane

0x74e2,	// (0x00044eca) cell_toolbar_trans_pane_g1

0xc804,	// (0x0004a1ec) list_form2_midp_pane_t1

0xc812,	// (0x0004a1fa) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0004d4e5) list_form2_midp_pane_t

0x723f,	// (0x00044c27) scroll_pane_cp51_ParamLimits

0x73b5,	// (0x00044d9d) form2_midp_wait_pane_g1

0x73be,	// (0x00044da6) form2_midp_wait_pane_g2

0x73c7,	// (0x00044daf) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0004d4fa) form2_midp_wait_pane_g

0x3d36,	// (0x0004171e) list_highlight_pane_cp21_ParamLimits

0x73e7,	// (0x00044dcf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x73f6,	// (0x00044dde) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb3ac,	// (0x00048d94) list_single_2graphic_im_pane_ParamLimits

0xb3ac,	// (0x00048d94) list_single_2graphic_im_pane

0xcc8a,	// (0x0004a672) list_single_2graphic_im_pane_g1_ParamLimits

0xcc8a,	// (0x0004a672) list_single_2graphic_im_pane_g1

0xcc9b,	// (0x0004a683) list_single_2graphic_im_pane_g2_ParamLimits

0xcc9b,	// (0x0004a683) list_single_2graphic_im_pane_g2

0xcca7,	// (0x0004a68f) list_single_2graphic_im_pane_g3_ParamLimits

0xcca7,	// (0x0004a68f) list_single_2graphic_im_pane_g3

0x0003,

0x00d9,	// (0x0003dac1) list_single_2graphic_im_pane_g_ParamLimits

0x00d9,	// (0x0003dac1) list_single_2graphic_im_pane_g

0xccc7,	// (0x0004a6af) list_single_2graphic_im_pane_t1_ParamLimits

0xccc7,	// (0x0004a6af) list_single_2graphic_im_pane_t1

0x7aa4,	// (0x0004548c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7aa4,	// (0x0004548c) list_single_graphic_2heading_pane_fp

0xb6fc,	// (0x000490e4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb6fc,	// (0x000490e4) list_single_graphic_2heading_pane_fp_g1

0x7abb,	// (0x000454a3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7abb,	// (0x000454a3) list_single_graphic_2heading_pane_fp_g2

0xac93,	// (0x0004867b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xac93,	// (0x0004867b) list_single_graphic_2heading_pane_fp_g3

0xb6d1,	// (0x000490b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb6d1,	// (0x000490b9) list_single_graphic_2heading_pane_fp_g4

0x7ac7,	// (0x000454af) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7ac7,	// (0x000454af) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0004d582) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0004d582) list_single_graphic_2heading_pane_fp_g

0xb8b3,	// (0x0004929b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xb8b3,	// (0x0004929b) list_single_graphic_2heading_pane_fp_t1

0xb734,	// (0x0004911c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb734,	// (0x0004911c) list_single_graphic_2heading_pane_fp_t2

0xb8c9,	// (0x000492b1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xb8c9,	// (0x000492b1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0004d651) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0004d651) list_single_graphic_2heading_pane_fp_t

0x7582,	// (0x00044f6a) fep_hwr_write_pane_g5_ParamLimits

0x7582,	// (0x00044f6a) fep_hwr_write_pane_g5

0x758e,	// (0x00044f76) fep_hwr_write_pane_g6_ParamLimits

0x758e,	// (0x00044f76) fep_hwr_write_pane_g6

0x7d06,	// (0x000456ee) eswt_shell_pane_ParamLimits

0x581c,	// (0x00043204) bg_popup_window_pane_cp18_ParamLimits

0x6814,	// (0x000441fc) heading_pane_cp70

0x7e02,	// (0x000457ea) popup_eswt_tasktip_window_t1_ParamLimits

0xbe2c,	// (0x00049814) aid_touch_tab_arrow_left

0xbe3b,	// (0x00049823) aid_touch_tab_arrow_right

0xa9b0,	// (0x00048398) title_pane_g3_ParamLimits

0xa9b0,	// (0x00048398) title_pane_g3

0x4770,	// (0x00042158) set_value_pane_g1

0xbd7f,	// (0x00049767) popup_toolbar_trans_pane_ParamLimits

0xcc3e,	// (0x0004a626) aid_size_cell_tb_trans_pane_ParamLimits

0x47b1,	// (0x00042199) bg_tb_trans_pane_ParamLimits

0xcc50,	// (0x0004a638) grid_tb_trans_pane_ParamLimits

0x3e69,	// (0x00041851) cont_note_pane_ParamLimits

0x3e69,	// (0x00041851) cont_note_pane

0x4520,	// (0x00041f08) cont_snote2_single_text_pane_ParamLimits

0x4520,	// (0x00041f08) cont_snote2_single_text_pane

0x4520,	// (0x00041f08) cont_snote2_single_graphic_pane_ParamLimits

0x4520,	// (0x00041f08) cont_snote2_single_graphic_pane

0x5cd9,	// (0x000436c1) cont_note_wait_pane_ParamLimits

0x5cd9,	// (0x000436c1) cont_note_wait_pane

0x5cd9,	// (0x000436c1) cont_note_image_pane_ParamLimits

0x5cd9,	// (0x000436c1) cont_note_image_pane

0xccf8,	// (0x0004a6e0) popup_note2_window_g1_ParamLimits

0xccf8,	// (0x0004a6e0) popup_note2_window_g1

0xcd29,	// (0x0004a711) popup_note2_window_t1_ParamLimits

0xcd29,	// (0x0004a711) popup_note2_window_t1

0xcd6e,	// (0x0004a756) popup_note2_window_t2_ParamLimits

0xcd6e,	// (0x0004a756) popup_note2_window_t2

0xcdb3,	// (0x0004a79b) popup_note2_window_t3_ParamLimits

0xcdb3,	// (0x0004a79b) popup_note2_window_t3

0xcdf8,	// (0x0004a7e0) popup_note2_window_t4_ParamLimits

0xcdf8,	// (0x0004a7e0) popup_note2_window_t4

0x40e7,	// (0x00041acf) popup_note2_window_t5_ParamLimits

0x40e7,	// (0x00041acf) popup_note2_window_t5

0x0004,

0xfc70,	// (0x0004d658) popup_note2_window_t_ParamLimits

0xfc70,	// (0x0004d658) popup_note2_window_t

0xce27,	// (0x0004a80f) popup_note2_image_window_g1_ParamLimits

0xce27,	// (0x0004a80f) popup_note2_image_window_g1

0xce33,	// (0x0004a81b) popup_note2_image_window_g2_ParamLimits

0xce33,	// (0x0004a81b) popup_note2_image_window_g2

0x0001,

0x00f9,	// (0x0003dae1) popup_note2_image_window_g_ParamLimits

0x00f9,	// (0x0003dae1) popup_note2_image_window_g

0xce45,	// (0x0004a82d) popup_note2_image_window_t1_ParamLimits

0xce45,	// (0x0004a82d) popup_note2_image_window_t1

0xce5d,	// (0x0004a845) popup_note2_image_window_t2_ParamLimits

0xce5d,	// (0x0004a845) popup_note2_image_window_t2

0xce75,	// (0x0004a85d) popup_note2_image_window_t3_ParamLimits

0xce75,	// (0x0004a85d) popup_note2_image_window_t3

0x0002,

0x00fe,	// (0x0003dae6) popup_note2_image_window_t_ParamLimits

0x00fe,	// (0x0003dae6) popup_note2_image_window_t

0x5ce7,	// (0x000436cf) popup_note2_wait_window_g1_ParamLimits

0x5ce7,	// (0x000436cf) popup_note2_wait_window_g1

0x5cf3,	// (0x000436db) popup_note2_wait_window_g2_ParamLimits

0x5cf3,	// (0x000436db) popup_note2_wait_window_g2

0x5cff,	// (0x000436e7) popup_note2_wait_window_g3_ParamLimits

0x5cff,	// (0x000436e7) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0004d246) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0004d246) popup_note2_wait_window_g

0xce91,	// (0x0004a879) popup_note2_wait_window_t1_ParamLimits

0xce91,	// (0x0004a879) popup_note2_wait_window_t1

0xceaf,	// (0x0004a897) popup_note2_wait_window_t2_ParamLimits

0xceaf,	// (0x0004a897) popup_note2_wait_window_t2

0xcecd,	// (0x0004a8b5) popup_note2_wait_window_t3_ParamLimits

0xcecd,	// (0x0004a8b5) popup_note2_wait_window_t3

0xcedf,	// (0x0004a8c7) popup_note2_wait_window_t4_ParamLimits

0xcedf,	// (0x0004a8c7) popup_note2_wait_window_t4

0x0003,

0x0105,	// (0x0003daed) popup_note2_wait_window_t_ParamLimits

0x0105,	// (0x0003daed) popup_note2_wait_window_t

0xcef1,	// (0x0004a8d9) wait_bar2_pane_ParamLimits

0xcef1,	// (0x0004a8d9) wait_bar2_pane

0xcf09,	// (0x0004a8f1) popup_snote2_single_text_window_g1_ParamLimits

0xcf09,	// (0x0004a8f1) popup_snote2_single_text_window_g1

0xcf31,	// (0x0004a919) popup_snote2_single_text_window_t1_ParamLimits

0xcf31,	// (0x0004a919) popup_snote2_single_text_window_t1

0xcf7d,	// (0x0004a965) popup_snote2_single_text_window_t2_ParamLimits

0xcf7d,	// (0x0004a965) popup_snote2_single_text_window_t2

0xcfc9,	// (0x0004a9b1) popup_snote2_single_text_window_t3_ParamLimits

0xcfc9,	// (0x0004a9b1) popup_snote2_single_text_window_t3

0xd00a,	// (0x0004a9f2) popup_snote2_single_text_window_t4_ParamLimits

0xd00a,	// (0x0004a9f2) popup_snote2_single_text_window_t4

0xd040,	// (0x0004aa28) popup_snote2_single_text_window_t5_ParamLimits

0xd040,	// (0x0004aa28) popup_snote2_single_text_window_t5

0x0004,

0x010e,	// (0x0003daf6) popup_snote2_single_text_window_t_ParamLimits

0x010e,	// (0x0003daf6) popup_snote2_single_text_window_t

0xd06b,	// (0x0004aa53) popup_snote2_single_graphic_window_g1_ParamLimits

0xd06b,	// (0x0004aa53) popup_snote2_single_graphic_window_g1

0xd093,	// (0x0004aa7b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd093,	// (0x0004aa7b) popup_snote2_single_graphic_window_g2

0x0001,

0x0119,	// (0x0003db01) popup_snote2_single_graphic_window_g_ParamLimits

0x0119,	// (0x0003db01) popup_snote2_single_graphic_window_g

0xd0bb,	// (0x0004aaa3) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0bb,	// (0x0004aaa3) popup_snote2_single_graphic_window_t1

0xd107,	// (0x0004aaef) popup_snote2_single_graphic_window_t2_ParamLimits

0xd107,	// (0x0004aaef) popup_snote2_single_graphic_window_t2

0xcfc9,	// (0x0004a9b1) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfc9,	// (0x0004a9b1) popup_snote2_single_graphic_window_t3

0xd00a,	// (0x0004a9f2) popup_snote2_single_graphic_window_t4_ParamLimits

0xd00a,	// (0x0004a9f2) popup_snote2_single_graphic_window_t4

0xd040,	// (0x0004aa28) popup_snote2_single_graphic_window_t5_ParamLimits

0xd040,	// (0x0004aa28) popup_snote2_single_graphic_window_t5

0x0004,

0x011e,	// (0x0003db06) popup_snote2_single_graphic_window_t_ParamLimits

0x011e,	// (0x0003db06) popup_snote2_single_graphic_window_t

0x71ef,	// (0x00044bd7) clock_nsta_pane_cp2_t1

0x71ef,	// (0x00044bd7) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0004d4bb) clock_nsta_pane_cp2_t

0x91e9,	// (0x00046bd1) form_field_data_wide_pane_g1_ParamLimits

0x474c,	// (0x00042134) form_field_data_wide_pane_g2_ParamLimits

0x474c,	// (0x00042134) form_field_data_wide_pane_g2

0x47cb,	// (0x000421b3) form_field_data_wide_pane_g3_ParamLimits

0x47cb,	// (0x000421b3) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0004d084) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0004d084) form_field_data_wide_pane_g

0xc6cb,	// (0x0004a0b3) grid_touch_3_pane_ParamLimits

0xc6cb,	// (0x0004a0b3) grid_touch_3_pane

0xd153,	// (0x0004ab3b) cell_touch_3_pane_ParamLimits

0xd153,	// (0x0004ab3b) cell_touch_3_pane

0x74e2,	// (0x00044eca) cell_touch_3_pane_g1

0x74e2,	// (0x00044eca) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0004d540) cell_touch_3_pane_g

0x4119,	// (0x00041b01) cont_query_data_pane

0x4121,	// (0x00041b09) cont_query_data_pane_cp1

0xd182,	// (0x0004ab6a) button_value_adjust_pane_cp7

0xd18a,	// (0x0004ab72) query_popup_pane_cp3

0x4d39,	// (0x00042721) bg_popup_sub_pane_cp22_ParamLimits

0x9451,	// (0x00046e39) navi_navi_volume_pane_cp2

0x946c,	// (0x00046e54) popup_side_volume_key_window_g2

0x947b,	// (0x00046e63) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004d116) popup_side_volume_key_window_g

0x9498,	// (0x00046e80) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004d11d) popup_side_volume_key_window_t

0x4f89,	// (0x00042971) popup_side_volume_key_window_ParamLimits

0x8e43,	// (0x0004682b) list_double_graphic_pane_g4_ParamLimits

0x8e43,	// (0x0004682b) list_double_graphic_pane_g4

0xb3f7,	// (0x00048ddf) list_single_2heading_msg_pane_ParamLimits

0xb3f7,	// (0x00048ddf) list_single_2heading_msg_pane

0xbfcf,	// (0x000499b7) list_single_2heading_msg_pane_g1_ParamLimits

0xbfcf,	// (0x000499b7) list_single_2heading_msg_pane_g1

0xbfdb,	// (0x000499c3) list_single_2heading_msg_pane_g2_ParamLimits

0xbfdb,	// (0x000499c3) list_single_2heading_msg_pane_g2

0xbfe7,	// (0x000499cf) list_single_2heading_msg_pane_g3_ParamLimits

0xbfe7,	// (0x000499cf) list_single_2heading_msg_pane_g3

0xbff3,	// (0x000499db) list_single_2heading_msg_pane_g4_ParamLimits

0xbff3,	// (0x000499db) list_single_2heading_msg_pane_g4

0x0003,

0xfc7b,	// (0x0004d663) list_single_2heading_msg_pane_g_ParamLimits

0xfc7b,	// (0x0004d663) list_single_2heading_msg_pane_g

0xb8e9,	// (0x000492d1) list_single_2heading_msg_pane_t1_ParamLimits

0xb8e9,	// (0x000492d1) list_single_2heading_msg_pane_t1

0xb911,	// (0x000492f9) list_single_2heading_msg_pane_t2_ParamLimits

0xb911,	// (0x000492f9) list_single_2heading_msg_pane_t2

0xb945,	// (0x0004932d) list_single_2heading_msg_pane_t3_ParamLimits

0xb945,	// (0x0004932d) list_single_2heading_msg_pane_t3

0xb97e,	// (0x00049366) list_single_2heading_msg_pane_t4_ParamLimits

0xb97e,	// (0x00049366) list_single_2heading_msg_pane_t4

0x0003,

0xfc84,	// (0x0004d66c) list_single_2heading_msg_pane_t_ParamLimits

0xfc84,	// (0x0004d66c) list_single_2heading_msg_pane_t

0x3ce4,	// (0x000416cc) title_pane_g4_ParamLimits

0x3ce4,	// (0x000416cc) title_pane_g4

0x925f,	// (0x00046c47) title_pane_stacon_g3_ParamLimits

0x925f,	// (0x00046c47) title_pane_stacon_g3

0xccbb,	// (0x0004a6a3) list_single_2graphic_im_pane_g4_ParamLimits

0xccbb,	// (0x0004a6a3) list_single_2graphic_im_pane_g4

0x6638,	// (0x00044020) popup_side_volume_key_window_cp

0x6b10,	// (0x000444f8) main_idle_act2_pane_t1

0x980c,	// (0x000471f4) toolbar_button_pane_g10

0xac18,	// (0x00048600) popup_toolbar_window_cp1

0x71e0,	// (0x00044bc8) clock_nsta_pane_cp_t1

0x71e0,	// (0x00044bc8) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0004d4b6) clock_nsta_pane_cp_t

0x9451,	// (0x00046e39) navi_navi_volume_pane_cp2_ParamLimits

0x9460,	// (0x00046e48) popup_side_volume_key_window_g1_ParamLimits

0x946c,	// (0x00046e54) popup_side_volume_key_window_g2_ParamLimits

0x947b,	// (0x00046e63) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004d116) popup_side_volume_key_window_g_ParamLimits

0x9cc9,	// (0x000476b1) fep_hwr_aid_pane

0x9d70,	// (0x00047758) bg_fep_hwr_top_pane_g4_ParamLimits

0x7564,	// (0x00044f4c) fep_hwr_top_pane_g1_ParamLimits

0x7552,	// (0x00044f3a) fep_hwr_top_pane_g2_ParamLimits

0x9d90,	// (0x00047778) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0004d50b) fep_hwr_top_pane_g_ParamLimits

0x9da5,	// (0x0004778d) fep_hwr_top_text_pane_ParamLimits

0x6436,	// (0x00043e1e) aid_touch_tab_arrow_arrow_2

0x642d,	// (0x00043e15) aid_touch_tab_arrow_left_2

0x9cdd,	// (0x000476c5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9d14,	// (0x000476fc) fep_hwr_prediction_pane

0x76b9,	// (0x000450a1) fep_vkb_prediction_pane

0xca07,	// (0x0004a3ef) fep_vkb_side_pane_g3_ParamLimits

0xca07,	// (0x0004a3ef) fep_vkb_side_pane_g3

0x9f20,	// (0x00047908) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9f8c,	// (0x00047974) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9f99,	// (0x00047981) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x0004d5ba) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa0c8,	// (0x00047ab0) fep_hwr_prediction_pane_g1

0xa0d2,	// (0x00047aba) fep_hwr_prediction_pane_g2

0x754a,	// (0x00044f32) fep_hwr_prediction_pane_g3

0xa0da,	// (0x00047ac2) fep_hwr_prediction_pane_g4

0x0003,

0xfc8d,	// (0x0004d675) fep_hwr_prediction_pane_g

0xd1af,	// (0x0004ab97) fep_vkb_prediction_pane_g1

0xd1b9,	// (0x0004aba1) fep_vkb_prediction_pane_g2

0xd1c1,	// (0x0004aba9) fep_vkb_prediction_pane_g3

0xd1c9,	// (0x0004abb1) fep_vkb_prediction_pane_g4

0x0003,

0x0144,	// (0x0003db2c) fep_vkb_prediction_pane_g

0x9af8,	// (0x000474e0) slider_set_pane_g3

0x9b0c,	// (0x000474f4) slider_set_pane_g4

0x9b24,	// (0x0004750c) slider_set_pane_g5

0x9af8,	// (0x000474e0) slider_set_pane_g6

0x9b3a,	// (0x00047522) slider_set_pane_g7

0x6899,	// (0x00044281) slider_form_pane_g3

0x68a2,	// (0x0004428a) slider_form_pane_g4

0x68aa,	// (0x00044292) slider_form_pane_g5

0x6899,	// (0x00044281) slider_form_pane_g6

0xc5b5,	// (0x00049f9d) slider_form_pane_g7

0x6dae,	// (0x00044796) slider_set_pane_vc_g3

0x6db7,	// (0x0004479f) slider_set_pane_vc_g4

0x6dc0,	// (0x000447a8) slider_set_pane_vc_g5

0x6dae,	// (0x00044796) slider_set_pane_vc_g6

0x6dc9,	// (0x000447b1) slider_set_pane_vc_g7

0x6dae,	// (0x00044796) slider_form_pane_vc_g1

0x6db7,	// (0x0004479f) slider_form_pane_vc_g2

0x6dc0,	// (0x000447a8) slider_form_pane_vc_g3

0x6dae,	// (0x00044796) slider_form_pane_vc_g4

0x6f58,	// (0x00044940) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0004d48f) slider_form_pane_vc_g

0x3cc6,	// (0x000416ae) main_idle_act3_pane

0xd1d1,	// (0x0004abb9) ai3_links_pane

0xd1da,	// (0x0004abc2) popup_ai3_data_window_ParamLimits

0xd1da,	// (0x0004abc2) popup_ai3_data_window

0x3cc6,	// (0x000416ae) grid_ai3_links_pane

0xd1f2,	// (0x0004abda) cell_ai3_links_pane_ParamLimits

0xd1f2,	// (0x0004abda) cell_ai3_links_pane

0xd20a,	// (0x0004abf2) bg_popup_sub_pane_cp11

0xd217,	// (0x0004abff) cell_ai3_links_pane_g1

0x3cc6,	// (0x000416ae) bg_popup_sub_pane_cp12

0xd23c,	// (0x0004ac24) heading_ai3_data_pane

0xd244,	// (0x0004ac2c) list_ai3_gene_pane

0xd250,	// (0x0004ac38) popup_ai3_data_window_g1

0xd258,	// (0x0004ac40) heading_ai3_data_pane_g1

0xd260,	// (0x0004ac48) heading_ai3_data_pane_t1

0xd26e,	// (0x0004ac56) list_double_ai3_gene_pane_ParamLimits

0xd26e,	// (0x0004ac56) list_double_ai3_gene_pane

0xd27b,	// (0x0004ac63) list_single_ai3_gene_pane_ParamLimits

0xd27b,	// (0x0004ac63) list_single_ai3_gene_pane

0x74a7,	// (0x00044e8f) list_highlight_pane_cp7_ParamLimits

0x74a7,	// (0x00044e8f) list_highlight_pane_cp7

0xd288,	// (0x0004ac70) list_single_a13_gene_pane_t1_ParamLimits

0xd288,	// (0x0004ac70) list_single_a13_gene_pane_t1

0xd29f,	// (0x0004ac87) list_single_ai3_gene_pane_g1

0xd2a8,	// (0x0004ac90) list_single_ai3_gene_pane_g2

0x0001,

0x014d,	// (0x0003db35) list_single_ai3_gene_pane_g

0xd2b0,	// (0x0004ac98) list_double_ai3_gene_pane_g1_ParamLimits

0xd2b0,	// (0x0004ac98) list_double_ai3_gene_pane_g1

0xd2bc,	// (0x0004aca4) list_double_ai3_gene_pane_t1_ParamLimits

0xd2bc,	// (0x0004aca4) list_double_ai3_gene_pane_t1

0xd2d8,	// (0x0004acc0) list_double_ai3_gene_pane_t2_ParamLimits

0xd2d8,	// (0x0004acc0) list_double_ai3_gene_pane_t2

0xd2ed,	// (0x0004acd5) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ed,	// (0x0004acd5) list_double_ai3_gene_pane_t3

0x0002,

0x0152,	// (0x0003db3a) list_double_ai3_gene_pane_t_ParamLimits

0x0152,	// (0x0003db3a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb8df,	// (0x000492c7) aid_size_min_col_2

0xd19b,	// (0x0004ab83) aid_size_min_msg_ParamLimits

0xd19b,	// (0x0004ab83) aid_size_min_msg

0xca1b,	// (0x0004a403) fep_vkb_top_text_pane_g2_ParamLimits

0xca1b,	// (0x0004a403) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0004d53b) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0004d53b) fep_vkb_top_text_pane_g

0x3cc6,	// (0x000416ae) main_hc_apps_shell_pane

0xd30a,	// (0x0004acf2) grid_hc_apps_pane_ParamLimits

0xd30a,	// (0x0004acf2) grid_hc_apps_pane

0xd319,	// (0x0004ad01) list_hc_apps_pane

0xd321,	// (0x0004ad09) scroll_pane_cp37_ParamLimits

0xd321,	// (0x0004ad09) scroll_pane_cp37

0xd32d,	// (0x0004ad15) cell_hc_apps_pane_ParamLimits

0xd32d,	// (0x0004ad15) cell_hc_apps_pane

0xd3dd,	// (0x0004adc5) cell_hc_apps_pane_g1_ParamLimits

0xd3dd,	// (0x0004adc5) cell_hc_apps_pane_g1

0xd40e,	// (0x0004adf6) cell_hc_apps_pane_g2_ParamLimits

0xd40e,	// (0x0004adf6) cell_hc_apps_pane_g2

0xd42a,	// (0x0004ae12) cell_hc_apps_pane_g3_ParamLimits

0xd42a,	// (0x0004ae12) cell_hc_apps_pane_g3

0x0002,

0x0159,	// (0x0003db41) cell_hc_apps_pane_g_ParamLimits

0x0159,	// (0x0003db41) cell_hc_apps_pane_g

0xd44c,	// (0x0004ae34) cell_hc_apps_pane_t1_ParamLimits

0xd44c,	// (0x0004ae34) cell_hc_apps_pane_t1

0x3e69,	// (0x00041851) grid_highlight_pane_cp10_ParamLimits

0x3e69,	// (0x00041851) grid_highlight_pane_cp10

0xd48c,	// (0x0004ae74) list_single_hc_apps_pane_ParamLimits

0xd48c,	// (0x0004ae74) list_single_hc_apps_pane

0xd4ff,	// (0x0004aee7) list_single_hc_apps_pane_g1

0xc00b,	// (0x000499f3) list_single_hc_apps_pane_g2

0x0001,

0xfc96,	// (0x0004d67e) list_single_hc_apps_pane_g

0xc024,	// (0x00049a0c) list_single_hc_apps_pane_g2_copy1

0xb9a3,	// (0x0004938b) list_single_hc_apps_pane_t1

0x3d36,	// (0x0004171e) bg_set_opt_pane_cp_ParamLimits

0x8c0c,	// (0x000465f4) setting_slider_pane_t1_ParamLimits

0x8c25,	// (0x0004660d) setting_slider_pane_t2_ParamLimits

0x8c3e,	// (0x00046626) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004cf62) setting_slider_pane_t_ParamLimits

0x8c55,	// (0x0004663d) slider_set_pane_ParamLimits

0x96f6,	// (0x000470de) control_pane_g5_ParamLimits

0x96f6,	// (0x000470de) control_pane_g5

0x685b,	// (0x00044243) slider_set_pane_g1_ParamLimits

0x9aec,	// (0x000474d4) slider_set_pane_g2_ParamLimits

0x9af8,	// (0x000474e0) slider_set_pane_g3_ParamLimits

0x9b0c,	// (0x000474f4) slider_set_pane_g4_ParamLimits

0x9b24,	// (0x0004750c) slider_set_pane_g5_ParamLimits

0x9af8,	// (0x000474e0) slider_set_pane_g6_ParamLimits

0x9b3a,	// (0x00047522) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004d362) slider_set_pane_g_ParamLimits

0x506a,	// (0x00042a52) navi_icon_text_pane_ParamLimits

0xbe02,	// (0x000497ea) aid_fill_nsta_2_ParamLimits

0xbe2c,	// (0x00049814) aid_touch_tab_arrow_left_ParamLimits

0xbe3b,	// (0x00049823) aid_touch_tab_arrow_right_ParamLimits

0xbea8,	// (0x00049890) clock_nsta_pane_ParamLimits

0xc367,	// (0x00049d4f) navi_icon_pane_g1_ParamLimits

0xc376,	// (0x00049d5e) navi_text_pane_t1_ParamLimits

0xc7e0,	// (0x0004a1c8) navi_icon_text_pane_g1_ParamLimits

0xc7ef,	// (0x0004a1d7) navi_icon_text_pane_t1_ParamLimits

0xd4ff,	// (0x0004aee7) list_single_hc_apps_pane_g1_ParamLimits

0xc00b,	// (0x000499f3) list_single_hc_apps_pane_g2_ParamLimits

0xfc96,	// (0x0004d67e) list_single_hc_apps_pane_g_ParamLimits

0xc024,	// (0x00049a0c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb9a3,	// (0x0004938b) list_single_hc_apps_pane_t1_ParamLimits

0x8b26,	// (0x0004650e) popup_toolbar2_fixed_window_ParamLimits

0x8b26,	// (0x0004650e) popup_toolbar2_fixed_window

0xbd75,	// (0x0004975d) popup_toolbar2_float_window

0x3cc6,	// (0x000416ae) bg_popup_sub_pane_cp27

0xd518,	// (0x0004af00) grid_toolbar2_float_pane

0x3cc6,	// (0x000416ae) bg_popup_sub_pane_cp26

0xd518,	// (0x0004af00) grid_toolbar2_fixed_pane

0xd520,	// (0x0004af08) cell_toolbar2_fixed_pane_ParamLimits

0xd520,	// (0x0004af08) cell_toolbar2_fixed_pane

0xd531,	// (0x0004af19) cell_toolbar2_fixed_pane_g1

0xd53a,	// (0x0004af22) toolbar2_fixed_button_pane

0x572c,	// (0x00043114) toolbar2_fixed_button_pane_g1

0x5734,	// (0x0004311c) toolbar2_fixed_button_pane_g2

0x573c,	// (0x00043124) toolbar2_fixed_button_pane_g3

0x5744,	// (0x0004312c) toolbar2_fixed_button_pane_g4

0x574c,	// (0x00043134) toolbar2_fixed_button_pane_g5

0x5754,	// (0x0004313c) toolbar2_fixed_button_pane_g6

0x575c,	// (0x00043144) toolbar2_fixed_button_pane_g7

0x5764,	// (0x0004314c) toolbar2_fixed_button_pane_g8

0x576c,	// (0x00043154) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004d264) toolbar2_fixed_button_pane_g

0xd542,	// (0x0004af2a) cell_toolbar2_float_pane_ParamLimits

0xd542,	// (0x0004af2a) cell_toolbar2_float_pane

0xd553,	// (0x0004af3b) cell_toolbar2_float_pane_g1

0xd53a,	// (0x0004af22) toolbar2_fixed_button_pane_cp

0xc9ce,	// (0x0004a3b6) fep_vkb_accented_list_pane_ParamLimits

0xc9ce,	// (0x0004a3b6) fep_vkb_accented_list_pane

0x9f00,	// (0x000478e8) bg_popup_fep_shadow_pane_g9

0x51ec,	// (0x00042bd4) bg_popup_fep_shadow_pane_cp3

0x48ab,	// (0x00042293) list_accented_list_pane

0xd55c,	// (0x0004af44) list_single_accented_list_pane_ParamLimits

0xd55c,	// (0x0004af44) list_single_accented_list_pane

0x51ec,	// (0x00042bd4) list_highlight_pane_cp10

0xd56d,	// (0x0004af55) list_single_accented_list_pane_t1

0xbccd,	// (0x000496b5) popup_slider_window_ParamLimits

0xbccd,	// (0x000496b5) popup_slider_window

0xd192,	// (0x0004ab7a) aid_indentation_list_msg

0xd627,	// (0x0004b00f) bg_popup_window_pane_cp19

0xd691,	// (0x0004b079) popup_slider_window_g1

0xd6ad,	// (0x0004b095) popup_slider_window_g2

0xd6c9,	// (0x0004b0b1) popup_slider_window_g3

0x0005,

0x0165,	// (0x0003db4d) popup_slider_window_g

0xd725,	// (0x0004b10d) popup_slider_window_t1

0xd799,	// (0x0004b181) small_volume_slider_vertical_pane

0x74e2,	// (0x00044eca) small_volume_slider_vertical_pane_g1

0x74e2,	// (0x00044eca) small_volume_slider_vertical_pane_g2

0xd7b5,	// (0x0004b19d) small_volume_slider_vertical_pane_g3

0x0002,

0xfc9b,	// (0x0004d683) small_volume_slider_vertical_pane_g

0x88ec,	// (0x000462d4) area_side_right_pane_ParamLimits

0x88ec,	// (0x000462d4) area_side_right_pane

0xa0e2,	// (0x00047aca) aid_size_side_button_ParamLimits

0xa0e2,	// (0x00047aca) aid_size_side_button

0xa0f6,	// (0x00047ade) grid_sctrl_middle_pane_ParamLimits

0xa0f6,	// (0x00047ade) grid_sctrl_middle_pane

0xa116,	// (0x00047afe) sctrl_sk_bottom_pane

0xa127,	// (0x00047b0f) sctrl_sk_top_pane

0xa139,	// (0x00047b21) aid_touch_sctrl_top

0xa146,	// (0x00047b2e) bg_sctrl_sk_pane_ParamLimits

0xa146,	// (0x00047b2e) bg_sctrl_sk_pane

0xa154,	// (0x00047b3c) sctrl_sk_top_pane_g1

0xa161,	// (0x00047b49) sctrl_sk_top_pane_t1

0xa139,	// (0x00047b21) aid_touch_sctrl_bottom

0xa146,	// (0x00047b2e) bg_sctrl_sk_pane_cp_ParamLimits

0xa146,	// (0x00047b2e) bg_sctrl_sk_pane_cp

0xa17c,	// (0x00047b64) sctrl_sk_bottom_pane_g1

0xa161,	// (0x00047b49) sctrl_sk_bottom_pane_t1

0xa185,	// (0x00047b6d) cell_sctrl_middle_pane_ParamLimits

0xa185,	// (0x00047b6d) cell_sctrl_middle_pane

0xa1a0,	// (0x00047b88) aid_touch_sctrl_middle_ParamLimits

0xa1a0,	// (0x00047b88) aid_touch_sctrl_middle

0xa1b2,	// (0x00047b9a) bg_sctrl_middle_pane_ParamLimits

0xa1b2,	// (0x00047b9a) bg_sctrl_middle_pane

0x9f20,	// (0x00047908) cell_sctrl_middle_pane_g1_ParamLimits

0x9f20,	// (0x00047908) cell_sctrl_middle_pane_g1

0xa1c0,	// (0x00047ba8) cell_sctrl_middle_pane_g2_ParamLimits

0xa1c0,	// (0x00047ba8) cell_sctrl_middle_pane_g2

0x0001,

0xfca7,	// (0x0004d68f) cell_sctrl_middle_pane_g_ParamLimits

0xfca7,	// (0x0004d68f) cell_sctrl_middle_pane_g

0x572c,	// (0x00043114) bg_sctrl_middle_pane_g1

0x573c,	// (0x00043124) bg_sctrl_middle_pane_g2

0x5734,	// (0x0004311c) bg_sctrl_middle_pane_g3

0x574c,	// (0x00043134) bg_sctrl_middle_pane_g4

0x5744,	// (0x0004312c) bg_sctrl_middle_pane_g5

0x5754,	// (0x0004313c) bg_sctrl_middle_pane_g6

0x575c,	// (0x00043144) bg_sctrl_middle_pane_g7

0x576c,	// (0x00043154) bg_sctrl_middle_pane_g8

0x0007,

0xfcac,	// (0x0004d694) bg_sctrl_middle_pane_g

0x5764,	// (0x0004314c) bg_sctrl_middle_pane_g8_copy1

0x572c,	// (0x00043114) bg_sctrl_sk_pane_g1

0x5734,	// (0x0004311c) bg_sctrl_sk_pane_g2

0x573c,	// (0x00043124) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004d264) bg_sctrl_sk_pane_g

0x46de,	// (0x000420c6) aid_size_touch_scroll_bar

0x5744,	// (0x0004312c) bg_sctrl_sk_pane_g4

0x574c,	// (0x00043134) bg_sctrl_sk_pane_g5

0x5754,	// (0x0004313c) bg_sctrl_sk_pane_g6

0x575c,	// (0x00043144) bg_sctrl_sk_pane_g7

0x5764,	// (0x0004314c) bg_sctrl_sk_pane_g8

0x576c,	// (0x00043154) bg_sctrl_sk_pane_g9

0x5460,	// (0x00042e48) popup_fep_china_hwr2_fs_candidate_window

0xb27a,	// (0x00048c62) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb27a,	// (0x00048c62) popup_fep_china_hwr2_fs_control_window

0x9f20,	// (0x00047908) sctrl_sk_top_pane_g2

0x0001,

0xfca2,	// (0x0004d68a) sctrl_sk_top_pane_g

0xd7be,	// (0x0004b1a6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7be,	// (0x0004b1a6) aid_fep_china_hwr2_fs_cell

0xd7d0,	// (0x0004b1b8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d0,	// (0x0004b1b8) bg_popup_fep_shadow_pane_cp4

0xd7e7,	// (0x0004b1cf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7e7,	// (0x0004b1cf) bg_popup_fep_shadow_pane_cp5

0xd7f9,	// (0x0004b1e1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7f9,	// (0x0004b1e1) popup_fep_china_hwr2_fs_control_bar_grid

0xd809,	// (0x0004b1f1) popup_fep_china_hwr2_fs_control_funtion_grid

0xd811,	// (0x0004b1f9) aid_fep_china_hwr2_fs_candi_cell

0x3cc6,	// (0x000416ae) bg_popup_fep_shadow_pane_cp6

0xd81b,	// (0x0004b203) popup_fep_china_hwr2_fs_candidate_grid

0xd825,	// (0x0004b20d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd825,	// (0x0004b20d) cell_fep_china_hwr2_fs_funtion_grid

0x74e2,	// (0x00044eca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd83d,	// (0x0004b225) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd83d,	// (0x0004b225) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd84b,	// (0x0004b233) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd84b,	// (0x0004b233) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x0199,	// (0x0003db81) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x0199,	// (0x0003db81) cell_fep_china_hwr2_fs_funtion_grid_g

0xd861,	// (0x0004b249) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd861,	// (0x0004b249) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd876,	// (0x0004b25e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd876,	// (0x0004b25e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x019e,	// (0x0003db86) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x019e,	// (0x0003db86) cell_fep_china_hwr2_fs_funtion_grid_t

0xd892,	// (0x0004b27a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd89a,	// (0x0004b282) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8a2,	// (0x0004b28a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x01a3,	// (0x0003db8b) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8aa,	// (0x0004b292) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8aa,	// (0x0004b292) cell_fep_china_hwr2_fs_candidate_grid

0xd8c3,	// (0x0004b2ab) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8cb,	// (0x0004b2b3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x74e2,	// (0x00044eca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x74e2,	// (0x00044eca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0004d540) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8d3,	// (0x0004b2bb) cell_fep_china_hwr2_fs_candidate_grid_t1

0x556d,	// (0x00042f55) clock_nsta_pane_cp_24_ParamLimits

0x556d,	// (0x00042f55) clock_nsta_pane_cp_24

0x55d5,	// (0x00042fbd) indicator_nsta_pane_cp_24_ParamLimits

0x55d5,	// (0x00042fbd) indicator_nsta_pane_cp_24

0x6337,	// (0x00043d1f) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004d2c9) heading_pane_g

0x699b,	// (0x00044383) grid_sct_catagory_button_pane

0x621f,	// (0x00043c07) scroll_pane_cp5_ParamLimits

0x724b,	// (0x00044c33) button_value_adjust_pane_cp5_ParamLimits

0x724b,	// (0x00044c33) button_value_adjust_pane_cp5

0x7309,	// (0x00044cf1) form2_midp_time_pane_ParamLimits

0xd8e1,	// (0x0004b2c9) cell_sct_catagory_button_pane_ParamLimits

0xd8e1,	// (0x0004b2c9) cell_sct_catagory_button_pane

0x74a7,	// (0x00044e8f) bg_button_pane_cp01_ParamLimits

0x74a7,	// (0x00044e8f) bg_button_pane_cp01

0x74e2,	// (0x00044eca) cell_sct_catagory_button_pane_g1

0xbd04,	// (0x000496ec) popup_tb_extension_window

0xd8f3,	// (0x0004b2db) aid_size_cell_ext_ParamLimits

0xd8f3,	// (0x0004b2db) aid_size_cell_ext

0x3e69,	// (0x00041851) bg_tb_trans_pane_cp1_ParamLimits

0x3e69,	// (0x00041851) bg_tb_trans_pane_cp1

0xd913,	// (0x0004b2fb) grid_tb_ext_pane_ParamLimits

0xd913,	// (0x0004b2fb) grid_tb_ext_pane

0xd945,	// (0x0004b32d) cell_tb_ext_pane_ParamLimits

0xd945,	// (0x0004b32d) cell_tb_ext_pane

0xd95c,	// (0x0004b344) cell_tb_ext_pane_g1_ParamLimits

0xd95c,	// (0x0004b344) cell_tb_ext_pane_g1

0xd979,	// (0x0004b361) cell_tb_ext_pane_t1

0x3e69,	// (0x00041851) list_highlight_pane_cp11_ParamLimits

0x3e69,	// (0x00041851) list_highlight_pane_cp11

0x8b45,	// (0x0004652d) popup_uni_indicator_window_ParamLimits

0x8b45,	// (0x0004652d) popup_uni_indicator_window

0x47b1,	// (0x00042199) bg_popup_sub_pane_cp14

0xd994,	// (0x0004b37c) list_uniindi_pane

0xd9a0,	// (0x0004b388) uniindi_top_pane

0x3e69,	// (0x00041851) bg_uniindi_top_pane

0xd9bf,	// (0x0004b3a7) uniindi_top_pane_g1

0xd9d5,	// (0x0004b3bd) uniindi_top_pane_g2

0x0003,

0x01aa,	// (0x0003db92) uniindi_top_pane_g

0xd9ff,	// (0x0004b3e7) uniindi_top_pane_t1

0xda29,	// (0x0004b411) list_single_uniindi_pane_ParamLimits

0xda29,	// (0x0004b411) list_single_uniindi_pane

0x74e2,	// (0x00044eca) bg_uniindi_top_pane_g1

0xda3b,	// (0x0004b423) list_single_uniindi_pane_g1

0xda4e,	// (0x0004b436) list_single_uniindi_pane_t1

0x89c9,	// (0x000463b1) control_bg_pane

0xda73,	// (0x0004b45b) bg_sctrl_sk_pane_cp1

0xda7c,	// (0x0004b464) bg_sctrl_sk_pane_cp2

0xda85,	// (0x0004b46d) control_bg_pane_g1

0xda8e,	// (0x0004b476) control_bg_pane_g2

0x0001,

0x01b3,	// (0x0003db9b) control_bg_pane_g

0x7122,	// (0x00044b0a) cell_indicator_nsta_pane_g1_ParamLimits

0xc70f,	// (0x0004a0f7) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0004d4a4) cell_indicator_nsta_pane_g_ParamLimits

0xb6be,	// (0x000490a6) form2_midp_time_pane_t1_ParamLimits

0x4520,	// (0x00041f08) main_idle_act4_pane_ParamLimits

0x4520,	// (0x00041f08) main_idle_act4_pane

0xbd04,	// (0x000496ec) popup_tb_extension_window_ParamLimits

0xd935,	// (0x0004b31d) tb_ext_find_pane_ParamLimits

0xd935,	// (0x0004b31d) tb_ext_find_pane

0xda97,	// (0x0004b47f) ai_gene_pane_1_cp1

0x526e,	// (0x00042c56) ai_gene_pane_2_cp1

0xda9f,	// (0x0004b487) list_single_idle_plugin_calendar_pane

0xdaa8,	// (0x0004b490) list_single_idle_plugin_notification_pane

0xdab1,	// (0x0004b499) list_single_idle_plugin_player_pane

0xdaba,	// (0x0004b4a2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaba,	// (0x0004b4a2) list_single_idle_plugin_shortcut_pane

0xdadc,	// (0x0004b4c4) main_idle_act4_pane_t1

0xdaee,	// (0x0004b4d6) main_idle_act4_pane_t2

0x0001,

0x01b8,	// (0x0003dba0) main_idle_act4_pane_t

0xdb00,	// (0x0004b4e8) middle_sk_idle_act4_pane_ParamLimits

0xdb00,	// (0x0004b4e8) middle_sk_idle_act4_pane

0xdb16,	// (0x0004b4fe) popup_clock_digital_analogue_window_cp2

0xdb30,	// (0x0004b518) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb30,	// (0x0004b518) shortcut_wheel_idle_act4_pane

0x74e2,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g1

0x74e2,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g2

0x74e2,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g3

0x74e2,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g4

0x74e2,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g5

0xdb44,	// (0x0004b52c) shortcut_wheel_idle_act4_pane_g6

0xdb4c,	// (0x0004b534) shortcut_wheel_idle_act4_pane_g7

0xdb54,	// (0x0004b53c) shortcut_wheel_idle_act4_pane_g8

0xdb5c,	// (0x0004b544) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcbd,	// (0x0004d6a5) shortcut_wheel_idle_act4_pane_g

0x7769,	// (0x00045151) middle_sk_idle_act4_pane_g1_ParamLimits

0x7769,	// (0x00045151) middle_sk_idle_act4_pane_g1

0xdbc0,	// (0x0004b5a8) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbc0,	// (0x0004b5a8) middle_sk_idle_act4_pane_g2

0x0001,

0xfcdb,	// (0x0004d6c3) middle_sk_idle_act4_pane_g_ParamLimits

0xfcdb,	// (0x0004d6c3) middle_sk_idle_act4_pane_g

0xdbcc,	// (0x0004b5b4) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbcc,	// (0x0004b5b4) middle_sk_idle_act4_pane_t1

0xdbe9,	// (0x0004b5d1) grid_ai_shortcut_pane_ParamLimits

0xdbe9,	// (0x0004b5d1) grid_ai_shortcut_pane

0xdc02,	// (0x0004b5ea) list_highlight_pane_cp16_ParamLimits

0xdc02,	// (0x0004b5ea) list_highlight_pane_cp16

0xdc0f,	// (0x0004b5f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x0004b5f7) list_single_idle_plugin_shortcut_pane_g1

0xdc1b,	// (0x0004b603) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc1b,	// (0x0004b603) list_single_idle_plugin_shortcut_pane_g2

0xdc33,	// (0x0004b61b) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc33,	// (0x0004b61b) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x01e5,	// (0x0003dbcd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x01e5,	// (0x0003dbcd) list_single_idle_plugin_shortcut_pane_g

0xdc46,	// (0x0004b62e) cell_ai_shortcut_pane_ParamLimits

0xdc46,	// (0x0004b62e) cell_ai_shortcut_pane

0xdc67,	// (0x0004b64f) cell_ai_shortcut_pane_g1_ParamLimits

0xdc67,	// (0x0004b64f) cell_ai_shortcut_pane_g1

0xda97,	// (0x0004b47f) ai_gene_pane_1_cp2

0xdc89,	// (0x0004b671) ai_gene_pane_2_cp2

0xdc91,	// (0x0004b679) list_highlight_pane_cp15

0xdc9a,	// (0x0004b682) list_single_idle_plugin_calendar_pane_g1

0xdc91,	// (0x0004b679) list_highlight_pane_cp17

0xdca2,	// (0x0004b68a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcaa,	// (0x0004b692) list_single_idle_plugin_player_pane_g1

0x6bb0,	// (0x00044598) list_single_idle_plugin_player_pane_g2

0x0001,

0xfce0,	// (0x0004d6c8) list_single_idle_plugin_player_pane_g

0xdcb2,	// (0x0004b69a) list_single_idle_plugin_player_pane_t1

0xdcc0,	// (0x0004b6a8) list_single_idle_plugin_player_pane_t2

0xdcce,	// (0x0004b6b6) list_single_idle_plugin_player_pane_t3

0xdcdc,	// (0x0004b6c4) list_single_idle_plugin_player_pane_t4

0x0003,

0x01f1,	// (0x0003dbd9) list_single_idle_plugin_player_pane_t

0xdcea,	// (0x0004b6d2) wait_bar_pane_cp15

0xdcf2,	// (0x0004b6da) grid_ai_notification_pane

0x6bb0,	// (0x00044598) list_single_idle_plugin_notification_pane_g1

0xdcfb,	// (0x0004b6e3) cell_ai_notification_pane_ParamLimits

0xdcfb,	// (0x0004b6e3) cell_ai_notification_pane

0xdd08,	// (0x0004b6f0) cell_ai_notification_pane_g1

0xdd10,	// (0x0004b6f8) cell_ai_notification_pane_t1

0xdd1e,	// (0x0004b706) tb_ext_find_button_pane

0xdd26,	// (0x0004b70e) tb_ext_find_pane_g1

0xdd2e,	// (0x0004b716) tb_ext_find_pane_t1

0x4cdd,	// (0x000426c5) tb_ext_find_button_pane_g1

0xdd3c,	// (0x0004b724) tb_ext_find_button_pane_g2

0x0001,

0xfce5,	// (0x0004d6cd) tb_ext_find_button_pane_g

0xdadc,	// (0x0004b4c4) main_idle_act4_pane_t1_ParamLimits

0xdaee,	// (0x0004b4d6) main_idle_act4_pane_t2_ParamLimits

0x01b8,	// (0x0003dba0) main_idle_act4_pane_t_ParamLimits

0xdb16,	// (0x0004b4fe) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb24,	// (0x0004b50c) sat_plugin_idle_act4_pane_ParamLimits

0xdb24,	// (0x0004b50c) sat_plugin_idle_act4_pane

0xdd45,	// (0x0004b72d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd45,	// (0x0004b72d) sat_plugin_idle_act4_pane_t1

0xdd58,	// (0x0004b740) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd58,	// (0x0004b740) sat_plugin_idle_act4_pane_t2

0xdd6b,	// (0x0004b753) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd6b,	// (0x0004b753) sat_plugin_idle_act4_pane_t3

0xdd7e,	// (0x0004b766) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd7e,	// (0x0004b766) sat_plugin_idle_act4_pane_t4

0x0003,

0x01ff,	// (0x0003dbe7) sat_plugin_idle_act4_pane_t_ParamLimits

0x01ff,	// (0x0003dbe7) sat_plugin_idle_act4_pane_t

0x8a8e,	// (0x00046476) popup_battery_window_ParamLimits

0x8a8e,	// (0x00046476) popup_battery_window

0x3e69,	// (0x00041851) bg_popup_sub_pane_cp25_ParamLimits

0x3e69,	// (0x00041851) bg_popup_sub_pane_cp25

0xdd91,	// (0x0004b779) popup_battery_window_g1_ParamLimits

0xdd91,	// (0x0004b779) popup_battery_window_g1

0xdd9d,	// (0x0004b785) popup_battery_window_t1_ParamLimits

0xdd9d,	// (0x0004b785) popup_battery_window_t1

0xddaf,	// (0x0004b797) popup_battery_window_t2_ParamLimits

0xddaf,	// (0x0004b797) popup_battery_window_t2

0x0001,

0x0208,	// (0x0003dbf0) popup_battery_window_t_ParamLimits

0x0208,	// (0x0003dbf0) popup_battery_window_t

0xb0d8,	// (0x00048ac0) midp_canvas_pane_ParamLimits

0xb13c,	// (0x00048b24) midp_keypad_pane_ParamLimits

0xb13c,	// (0x00048b24) midp_keypad_pane

0x48fc,	// (0x000422e4) main_midp_pane_ParamLimits

0x71fe,	// (0x00044be6) signal_pane_g2_cp_ParamLimits

0xddcc,	// (0x0004b7b4) aid_size_cell_midp_keypad_ParamLimits

0xddcc,	// (0x0004b7b4) aid_size_cell_midp_keypad

0xdde6,	// (0x0004b7ce) midp_keyp_game_grid_pane_ParamLimits

0xdde6,	// (0x0004b7ce) midp_keyp_game_grid_pane

0xde06,	// (0x0004b7ee) midp_keyp_rocker_pane_ParamLimits

0xde06,	// (0x0004b7ee) midp_keyp_rocker_pane

0xde3f,	// (0x0004b827) midp_keyp_sk_left_pane_ParamLimits

0xde3f,	// (0x0004b827) midp_keyp_sk_left_pane

0xde99,	// (0x0004b881) midp_keyp_sk_right_pane_ParamLimits

0xde99,	// (0x0004b881) midp_keyp_sk_right_pane

0x3cc6,	// (0x000416ae) bg_button_pane_cp03

0xdef3,	// (0x0004b8db) midp_keyp_sk_left_pane_g1

0x3cc6,	// (0x000416ae) bg_button_pane_cp04

0xdef3,	// (0x0004b8db) midp_keyp_sk_right_pane_g1

0x74e2,	// (0x00044eca) midp_keyp_rocker_pane_g1

0xdefc,	// (0x0004b8e4) keyp_game_cell_pane_ParamLimits

0xdefc,	// (0x0004b8e4) keyp_game_cell_pane

0x3cc6,	// (0x000416ae) bg_button_pane_cp02

0xdf0f,	// (0x0004b8f7) keyp_game_cell_pane_g1

0x8ac4,	// (0x000464ac) popup_fep_vkb2_window_ParamLimits

0x8ac4,	// (0x000464ac) popup_fep_vkb2_window

0xa1de,	// (0x00047bc6) aid_size_cell_vkb2_ParamLimits

0xa1de,	// (0x00047bc6) aid_size_cell_vkb2

0xa232,	// (0x00047c1a) popup_fep_vkb2_window_g1_ParamLimits

0xa232,	// (0x00047c1a) popup_fep_vkb2_window_g1

0xa272,	// (0x00047c5a) vkb2_area_bottom_pane_ParamLimits

0xa272,	// (0x00047c5a) vkb2_area_bottom_pane

0xa2be,	// (0x00047ca6) vkb2_area_keypad_pane_ParamLimits

0xa2be,	// (0x00047ca6) vkb2_area_keypad_pane

0xa300,	// (0x00047ce8) vkb2_area_top_pane_ParamLimits

0xa300,	// (0x00047ce8) vkb2_area_top_pane

0xa37a,	// (0x00047d62) vkb2_top_entry_pane_ParamLimits

0xa37a,	// (0x00047d62) vkb2_top_entry_pane

0xa3a4,	// (0x00047d8c) vkb2_top_grid_left_pane_ParamLimits

0xa3a4,	// (0x00047d8c) vkb2_top_grid_left_pane

0xa3c2,	// (0x00047daa) vkb2_top_grid_right_pane_ParamLimits

0xa3c2,	// (0x00047daa) vkb2_top_grid_right_pane

0xa3e0,	// (0x00047dc8) vkb2_cell_keypad_pane_ParamLimits

0xa3e0,	// (0x00047dc8) vkb2_cell_keypad_pane

0xa4b1,	// (0x00047e99) vkb2_area_bottom_grid_pane_ParamLimits

0xa4b1,	// (0x00047e99) vkb2_area_bottom_grid_pane

0xa4d7,	// (0x00047ebf) vkb2_area_bottom_pane_g1_ParamLimits

0xa4d7,	// (0x00047ebf) vkb2_area_bottom_pane_g1

0xa4fb,	// (0x00047ee3) vkb2_area_bottom_pane_g2_ParamLimits

0xa4fb,	// (0x00047ee3) vkb2_area_bottom_pane_g2

0xa529,	// (0x00047f11) vkb2_area_bottom_pane_g3_ParamLimits

0xa529,	// (0x00047f11) vkb2_area_bottom_pane_g3

0x0002,

0xfcea,	// (0x0004d6d2) vkb2_area_bottom_pane_g_ParamLimits

0xfcea,	// (0x0004d6d2) vkb2_area_bottom_pane_g

0xa58a,	// (0x00047f72) vkb2_top_cell_left_pane_ParamLimits

0xa58a,	// (0x00047f72) vkb2_top_cell_left_pane

0xdf20,	// (0x0004b908) vkb2_top_entry_pane_g1_ParamLimits

0xdf20,	// (0x0004b908) vkb2_top_entry_pane_g1

0xdf2e,	// (0x0004b916) vkb2_top_entry_pane_t1_ParamLimits

0xdf2e,	// (0x0004b916) vkb2_top_entry_pane_t1

0xdf81,	// (0x0004b969) vkb2_top_entry_pane_t2_ParamLimits

0xdf81,	// (0x0004b969) vkb2_top_entry_pane_t2

0xdfb3,	// (0x0004b99b) vkb2_top_entry_pane_t3_ParamLimits

0xdfb3,	// (0x0004b99b) vkb2_top_entry_pane_t3

0x0002,

0xfcf1,	// (0x0004d6d9) vkb2_top_entry_pane_t_ParamLimits

0xfcf1,	// (0x0004d6d9) vkb2_top_entry_pane_t

0xa5d7,	// (0x00047fbf) vkb2_top_grid_right_pane_g1_ParamLimits

0xa5d7,	// (0x00047fbf) vkb2_top_grid_right_pane_g1

0xa5ed,	// (0x00047fd5) vkb2_top_grid_right_pane_g2_ParamLimits

0xa5ed,	// (0x00047fd5) vkb2_top_grid_right_pane_g2

0xa605,	// (0x00047fed) vkb2_top_grid_right_pane_g3_ParamLimits

0xa605,	// (0x00047fed) vkb2_top_grid_right_pane_g3

0xa61d,	// (0x00048005) vkb2_top_grid_right_pane_g4_ParamLimits

0xa61d,	// (0x00048005) vkb2_top_grid_right_pane_g4

0x0003,

0xfcf8,	// (0x0004d6e0) vkb2_top_grid_right_pane_g_ParamLimits

0xfcf8,	// (0x0004d6e0) vkb2_top_grid_right_pane_g

0xa633,	// (0x0004801b) vkb2_top_cell_left_pane_g1

0xa64a,	// (0x00048032) vkb2_cell_keypad_pane_g1_ParamLimits

0xa64a,	// (0x00048032) vkb2_cell_keypad_pane_g1

0xdfd7,	// (0x0004b9bf) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfd7,	// (0x0004b9bf) vkb2_cell_keypad_pane_t1

0xa658,	// (0x00048040) vkb2_cell_bottom_grid_pane_ParamLimits

0xa658,	// (0x00048040) vkb2_cell_bottom_grid_pane

0xa691,	// (0x00048079) vkb2_cell_bottom_grid_pane_g1

0xdb64,	// (0x0004b54c) aid_call2_pane_cp02

0xdb6c,	// (0x0004b554) aid_call_pane_cp02

0xdb74,	// (0x0004b55c) clock_digital_number_pane_cp10

0xdb7c,	// (0x0004b564) clock_digital_number_pane_cp11

0xdb84,	// (0x0004b56c) clock_digital_number_pane_cp12

0xdb8c,	// (0x0004b574) clock_digital_number_pane_cp13

0xdb94,	// (0x0004b57c) clock_digital_separator_pane_cp10

0x4cdd,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g1

0x4cdd,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g2

0xdb9c,	// (0x0004b584) popup_clock_digital_analogue_window_cp2_g3

0x4cdd,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g4

0xdb9c,	// (0x0004b584) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfcd0,	// (0x0004d6b8) popup_clock_digital_analogue_window_cp2_g

0xdba4,	// (0x0004b58c) popup_clock_digital_analogue_window_cp2_t1

0xdbb2,	// (0x0004b59a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x01db,	// (0x0003dbc3) popup_clock_digital_analogue_window_cp2_t

0x74e2,	// (0x00044eca) clock_digital_number_pane_cp10_g1

0x74e2,	// (0x00044eca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0004d540) clock_digital_number_pane_cp10_g

0x74e2,	// (0x00044eca) clock_digital_separator_pane_cp10_g1

0x74e2,	// (0x00044eca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0004d540) clock_digital_separator_pane_cp10_g

0xd9e1,	// (0x0004b3c9) uniindi_top_pane_g3

0xd9f2,	// (0x0004b3da) uniindi_top_pane_g4

0xa46b,	// (0x00047e53) vkb2_row_keypad_pane_ParamLimits

0xa46b,	// (0x00047e53) vkb2_row_keypad_pane

0xa6b1,	// (0x00048099) vkb2_cell_t_keypad_pane_ParamLimits

0xa6b1,	// (0x00048099) vkb2_cell_t_keypad_pane

0xa6c1,	// (0x000480a9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa6c1,	// (0x000480a9) vkb2_cell_t_keypad_pane_cp08

0xa6d4,	// (0x000480bc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa6d4,	// (0x000480bc) vkb2_cell_t_keypad_pane_cp09

0xa6e8,	// (0x000480d0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa6e8,	// (0x000480d0) vkb2_cell_t_keypad_pane_cp01

0xa6f9,	// (0x000480e1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa6f9,	// (0x000480e1) vkb2_cell_t_keypad_pane_cp02

0xa70a,	// (0x000480f2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa70a,	// (0x000480f2) vkb2_cell_t_keypad_pane_cp03

0xa71b,	// (0x00048103) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa71b,	// (0x00048103) vkb2_cell_t_keypad_pane_cp04

0xa72c,	// (0x00048114) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa72c,	// (0x00048114) vkb2_cell_t_keypad_pane_cp05

0xa73d,	// (0x00048125) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa73d,	// (0x00048125) vkb2_cell_t_keypad_pane_cp06

0xa74e,	// (0x00048136) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa74e,	// (0x00048136) vkb2_cell_t_keypad_pane_cp07

0xa75f,	// (0x00048147) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa75f,	// (0x00048147) vkb2_cell_t_keypad_pane_cp10

0x9f20,	// (0x00047908) vkb2_cell_t_keypad_pane_g1

0xdfee,	// (0x0004b9d6) vkb2_cell_t_keypad_pane_t1

0x89c9,	// (0x000463b1) popup_grid_graphic2_window

0xebda,	// (0x0004c5c2) aid_size_cell_graphic2_ParamLimits

0xebda,	// (0x0004c5c2) aid_size_cell_graphic2

0xec12,	// (0x0004c5fa) bg_popup_window_pane_cp21_ParamLimits

0xec12,	// (0x0004c5fa) bg_popup_window_pane_cp21

0xec20,	// (0x0004c608) graphic2_pages_pane_ParamLimits

0xec20,	// (0x0004c608) graphic2_pages_pane

0xec66,	// (0x0004c64e) grid_graphic2_control_pane_ParamLimits

0xec66,	// (0x0004c64e) grid_graphic2_control_pane

0xeca4,	// (0x0004c68c) grid_graphic2_pane_ParamLimits

0xeca4,	// (0x0004c68c) grid_graphic2_pane

0xed18,	// (0x0004c700) cell_graphic2_pane

0x3cc6,	// (0x000416ae) main_comp_mode_pane

0xd244,	// (0x0004ac2c) list_ai3_gene_pane_ParamLimits

0xd627,	// (0x0004b00f) bg_popup_window_pane_cp19_ParamLimits

0xd633,	// (0x0004b01b) bg_touch_area_indi_pane_ParamLimits

0xd633,	// (0x0004b01b) bg_touch_area_indi_pane

0xd649,	// (0x0004b031) bg_touch_area_indi_pane_cp01_ParamLimits

0xd649,	// (0x0004b031) bg_touch_area_indi_pane_cp01

0xd65f,	// (0x0004b047) bg_touch_area_indi_pane_cp02_ParamLimits

0xd65f,	// (0x0004b047) bg_touch_area_indi_pane_cp02

0xd677,	// (0x0004b05f) bg_touch_area_indi_pane_cp03_ParamLimits

0xd677,	// (0x0004b05f) bg_touch_area_indi_pane_cp03

0xd691,	// (0x0004b079) popup_slider_window_g1_ParamLimits

0xd6ad,	// (0x0004b095) popup_slider_window_g2_ParamLimits

0xd6c9,	// (0x0004b0b1) popup_slider_window_g3_ParamLimits

0x0165,	// (0x0003db4d) popup_slider_window_g_ParamLimits

0xd725,	// (0x0004b10d) popup_slider_window_t1_ParamLimits

0xd799,	// (0x0004b181) small_volume_slider_vertical_pane_ParamLimits

0xed18,	// (0x0004c700) cell_graphic2_pane_ParamLimits

0xed66,	// (0x0004c74e) bg_button_pane_cp10_ParamLimits

0xed66,	// (0x0004c74e) bg_button_pane_cp10

0xed79,	// (0x0004c761) bg_button_pane_cp11_ParamLimits

0xed79,	// (0x0004c761) bg_button_pane_cp11

0xed8c,	// (0x0004c774) graphic2_pages_pane_g1_ParamLimits

0xed8c,	// (0x0004c774) graphic2_pages_pane_g1

0xeda7,	// (0x0004c78f) graphic2_pages_pane_g2_ParamLimits

0xeda7,	// (0x0004c78f) graphic2_pages_pane_g2

0x0001,

0xfd06,	// (0x0004d6ee) graphic2_pages_pane_g_ParamLimits

0xfd06,	// (0x0004d6ee) graphic2_pages_pane_g

0xedbf,	// (0x0004c7a7) graphic2_pages_pane_t1_ParamLimits

0xedbf,	// (0x0004c7a7) graphic2_pages_pane_t1

0xedd5,	// (0x0004c7bd) cell_graphic2_control_pane_ParamLimits

0xedd5,	// (0x0004c7bd) cell_graphic2_control_pane

0xedf6,	// (0x0004c7de) cell_graphic2_pane_g1_ParamLimits

0xedf6,	// (0x0004c7de) cell_graphic2_pane_g1

0xee03,	// (0x0004c7eb) cell_graphic2_pane_g2_ParamLimits

0xee03,	// (0x0004c7eb) cell_graphic2_pane_g2

0xee10,	// (0x0004c7f8) cell_graphic2_pane_g3_ParamLimits

0xee10,	// (0x0004c7f8) cell_graphic2_pane_g3

0xee1d,	// (0x0004c805) cell_graphic2_pane_g4_ParamLimits

0xee1d,	// (0x0004c805) cell_graphic2_pane_g4

0xee2a,	// (0x0004c812) cell_graphic2_pane_g5_ParamLimits

0xee2a,	// (0x0004c812) cell_graphic2_pane_g5

0x0004,

0xfd0b,	// (0x0004d6f3) cell_graphic2_pane_g_ParamLimits

0xfd0b,	// (0x0004d6f3) cell_graphic2_pane_g

0xee45,	// (0x0004c82d) cell_graphic2_pane_t1_ParamLimits

0xee45,	// (0x0004c82d) cell_graphic2_pane_t1

0x581c,	// (0x00043204) grid_highlight_pane_cp11_ParamLimits

0x581c,	// (0x00043204) grid_highlight_pane_cp11

0x3e69,	// (0x00041851) bg_button_pane_cp05

0xee6e,	// (0x0004c856) cell_graphic2_control_pane_g1

0x74e2,	// (0x00044eca) bg_touch_area_indi_pane_g1

0xe000,	// (0x0004b9e8) aid_cmod_rocker_key_size

0xe00a,	// (0x0004b9f2) aid_cmode_itu_key_size

0xe014,	// (0x0004b9fc) main_cmode_video_pane

0xe01e,	// (0x0004ba06) main_comp_mode_itu_pane

0xe02a,	// (0x0004ba12) main_comp_mode_rocker_pane

0xe036,	// (0x0004ba1e) cell_cmode_rocker_pane_ParamLimits

0xe036,	// (0x0004ba1e) cell_cmode_rocker_pane

0xe048,	// (0x0004ba30) cell_cmode_itu_pane_ParamLimits

0xe048,	// (0x0004ba30) cell_cmode_itu_pane

0x47b1,	// (0x00042199) bg_button_pane_cp06_ParamLimits

0x47b1,	// (0x00042199) bg_button_pane_cp06

0x7769,	// (0x00045151) cell_cmode_rocker_pane_g1_ParamLimits

0x7769,	// (0x00045151) cell_cmode_rocker_pane_g1

0xd83d,	// (0x0004b225) cell_cmode_rocker_pane_g2_ParamLimits

0xd83d,	// (0x0004b225) cell_cmode_rocker_pane_g2

0x0001,

0xfd1b,	// (0x0004d703) cell_cmode_rocker_pane_g_ParamLimits

0xfd1b,	// (0x0004d703) cell_cmode_rocker_pane_g

0x3cc6,	// (0x000416ae) bg_button_pane_cp07

0xe05d,	// (0x0004ba45) cell_cmode_itu_pane_g1

0xe066,	// (0x0004ba4e) cell_cmode_itu_pane_t1

0xe074,	// (0x0004ba5c) cell_cmode_itu_pane_t2

0x0001,

0xfd20,	// (0x0004d708) cell_cmode_itu_pane_t

0xda63,	// (0x0004b44b) aid_touch_ctrl_left

0xda6b,	// (0x0004b453) aid_touch_ctrl_right

0x3cc6,	// (0x000416ae) compa_mode_pane

0xee96,	// (0x0004c87e) aid_cmod_rocker_key_size_cp

0xeea0,	// (0x0004c888) aid_cmode_itu_key_size_cp

0xe082,	// (0x0004ba6a) compa_mode_pane_g1

0xe08a,	// (0x0004ba72) compa_mode_pane_g2

0xe092,	// (0x0004ba7a) compa_mode_pane_g3

0x0002,

0x0233,	// (0x0003dc1b) compa_mode_pane_g

0xeeaa,	// (0x0004c892) main_comp_mode_itu_pane_cp

0xeeb2,	// (0x0004c89a) main_comp_mode_rocker_pane_cp

0xeeba,	// (0x0004c8a2) cell_cmode_itu_pane_cp_ParamLimits

0xeeba,	// (0x0004c8a2) cell_cmode_itu_pane_cp

0xeecf,	// (0x0004c8b7) cell_cmode_rocker_pane_cp_ParamLimits

0xeecf,	// (0x0004c8b7) cell_cmode_rocker_pane_cp

0x47b1,	// (0x00042199) bg_button_pane_cp06_cp_ParamLimits

0x47b1,	// (0x00042199) bg_button_pane_cp06_cp

0x7769,	// (0x00045151) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7769,	// (0x00045151) cell_cmode_rocker_pane_g1_cp

0x74e2,	// (0x00044eca) cell_cmode_rocker_pane_g2_cp

0x3cc6,	// (0x000416ae) bg_button_pane_cp07_cp

0xeee1,	// (0x0004c8c9) cell_cmode_itu_pane_g1_cp

0xeeea,	// (0x0004c8d2) cell_cmode_itu_pane_t1_cp

0xeeea,	// (0x0004c8d2) cell_cmode_itu_pane_t2_cp

0xc5ab,	// (0x00049f93) settings_code_pane_cp2

0x3d36,	// (0x0004171e) bg_popup_window_pane_cp3_ParamLimits

0x445f,	// (0x00041e47) heading_pane_cp3_ParamLimits

0x446b,	// (0x00041e53) listscroll_popup_graphic_pane_ParamLimits

0x9cc9,	// (0x000476b1) fep_hwr_aid_pane_ParamLimits

0xa139,	// (0x00047b21) aid_touch_sctrl_top_ParamLimits

0xa154,	// (0x00047b3c) sctrl_sk_top_pane_g1_ParamLimits

0x9f20,	// (0x00047908) sctrl_sk_top_pane_g2_ParamLimits

0xfca2,	// (0x0004d68a) sctrl_sk_top_pane_g_ParamLimits

0xa161,	// (0x00047b49) sctrl_sk_top_pane_t1_ParamLimits

0xa139,	// (0x00047b21) aid_touch_sctrl_bottom_ParamLimits

0xa161,	// (0x00047b49) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9ad,	// (0x0004b395) aid_area_touch_clock

0xa342,	// (0x00047d2a) aid_vkb2_area_top_pane_cell_ParamLimits

0xa342,	// (0x00047d2a) aid_vkb2_area_top_pane_cell

0xa48d,	// (0x00047e75) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa48d,	// (0x00047e75) aid_vkb2_area_bottom_pane_cell

0xdf18,	// (0x0004b900) popup_char_count_window

0xe09a,	// (0x0004ba82) popup_char_count_window_g1

0xe0a3,	// (0x0004ba8b) popup_char_count_window_g2

0xe0ac,	// (0x0004ba94) popup_char_count_window_g3

0x0002,

0x023a,	// (0x0003dc22) popup_char_count_window_g

0xe0b5,	// (0x0004ba9d) popup_char_count_window_t1

0xa210,	// (0x00047bf8) popup_fep_char_preview_window_ParamLimits

0xa210,	// (0x00047bf8) popup_fep_char_preview_window

0xa360,	// (0x00047d48) vkb2_top_candi_pane_ParamLimits

0xa360,	// (0x00047d48) vkb2_top_candi_pane

0xeef8,	// (0x0004c8e0) cell_vkb2_top_candi_pane_ParamLimits

0xeef8,	// (0x0004c8e0) cell_vkb2_top_candi_pane

0xa774,	// (0x0004815c) bg_popup_fep_char_preview_window_ParamLimits

0xa774,	// (0x0004815c) bg_popup_fep_char_preview_window

0xa782,	// (0x0004816a) popup_fep_char_preview_window_t1_ParamLimits

0xa782,	// (0x0004816a) popup_fep_char_preview_window_t1

0xe0c3,	// (0x0004baab) bg_popup_fep_char_preview_window_g1

0xe0cb,	// (0x0004bab3) bg_popup_fep_char_preview_window_g2

0xe0d3,	// (0x0004babb) bg_popup_fep_char_preview_window_g3

0xe0db,	// (0x0004bac3) bg_popup_fep_char_preview_window_g4

0xe0e3,	// (0x0004bacb) bg_popup_fep_char_preview_window_g5

0xa7bc,	// (0x000481a4) bg_popup_fep_char_preview_window_g6

0xe0eb,	// (0x0004bad3) bg_popup_fep_char_preview_window_g7

0xe0f3,	// (0x0004badb) bg_popup_fep_char_preview_window_g8

0xe0fb,	// (0x0004bae3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd25,	// (0x0004d70d) bg_popup_fep_char_preview_window_g

0x9f20,	// (0x00047908) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9f20,	// (0x00047908) cell_vkb2_top_candi_pane_g1

0x9f2e,	// (0x00047916) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9f2e,	// (0x00047916) cell_vkb2_top_candi_pane_g2

0xdf60,	// (0x0004b948) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf60,	// (0x0004b948) cell_vkb2_top_candi_pane_g3

0xa7c4,	// (0x000481ac) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa7c4,	// (0x000481ac) cell_vkb2_top_candi_pane_g4

0x79d1,	// (0x000453b9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79d1,	// (0x000453b9) cell_vkb2_top_candi_pane_g5

0xa7e5,	// (0x000481cd) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa7e5,	// (0x000481cd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd38,	// (0x0004d720) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd38,	// (0x0004d720) cell_vkb2_top_candi_pane_g

0xa7f3,	// (0x000481db) cell_vkb2_top_candi_pane_t1

0x9ad8,	// (0x000474c0) aid_size_touch_slider_mark_ParamLimits

0x9ad8,	// (0x000474c0) aid_size_touch_slider_mark

0xec56,	// (0x0004c63e) grid_graphic2_catg_pane_ParamLimits

0xec56,	// (0x0004c63e) grid_graphic2_catg_pane

0xecf4,	// (0x0004c6dc) popup_grid_graphic2_window_t1_ParamLimits

0xecf4,	// (0x0004c6dc) popup_grid_graphic2_window_t1

0xed06,	// (0x0004c6ee) popup_grid_graphic2_window_t2_ParamLimits

0xed06,	// (0x0004c6ee) popup_grid_graphic2_window_t2

0x0001,

0xfd01,	// (0x0004d6e9) popup_grid_graphic2_window_t_ParamLimits

0xfd01,	// (0x0004d6e9) popup_grid_graphic2_window_t

0x3e69,	// (0x00041851) bg_button_pane_cp05_ParamLimits

0xee6e,	// (0x0004c856) cell_graphic2_control_pane_g1_ParamLimits

0xef45,	// (0x0004c92d) cell_graphic2_catg_pane_ParamLimits

0xef45,	// (0x0004c92d) cell_graphic2_catg_pane

0x3cc6,	// (0x000416ae) bg_button_pane_cp12

0xef57,	// (0x0004c93f) cell_graphic2_catg_pane_g1

0xd979,	// (0x0004b361) cell_tb_ext_pane_t1_ParamLimits

0xa5aa,	// (0x00047f92) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa5aa,	// (0x00047f92) vkb2_top_cell_right_narrow_pane

0xa5c2,	// (0x00047faa) vkb2_top_cell_right_wide_pane_ParamLimits

0xa5c2,	// (0x00047faa) vkb2_top_cell_right_wide_pane

0x9cbb,	// (0x000476a3) bg_vkb2_func_pane_ParamLimits

0x9cbb,	// (0x000476a3) bg_vkb2_func_pane

0xa633,	// (0x0004801b) vkb2_top_cell_left_pane_g1_ParamLimits

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp03

0xa691,	// (0x00048079) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x573c,	// (0x00043124) bg_vkb2_func_pane_g1

0x5734,	// (0x0004311c) bg_vkb2_func_pane_g2

0x5744,	// (0x0004312c) bg_vkb2_func_pane_g3

0x574c,	// (0x00043134) bg_vkb2_func_pane_g4

0x5754,	// (0x0004313c) bg_vkb2_func_pane_g5

0x575c,	// (0x00043144) bg_vkb2_func_pane_g6

0x576c,	// (0x00043154) bg_vkb2_func_pane_g7

0x5764,	// (0x0004314c) bg_vkb2_func_pane_g8

0x572c,	// (0x00043114) bg_vkb2_func_pane_g9

0x0008,

0xfd45,	// (0x0004d72d) bg_vkb2_func_pane_g

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp01

0xa633,	// (0x0004801b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa633,	// (0x0004801b) vkb2_top_cell_right_wide_pane_g1

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9cbb,	// (0x000476a3) bg_vkb2_fuc_pane_cp02

0xa691,	// (0x00048079) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa691,	// (0x00048079) vkb2_top_cell_right_narrow_pane_g1

0xd5a5,	// (0x0004af8d) aid_touch_area_decrease_ParamLimits

0xd5a5,	// (0x0004af8d) aid_touch_area_decrease

0xd5c9,	// (0x0004afb1) aid_touch_area_increase_ParamLimits

0xd5c9,	// (0x0004afb1) aid_touch_area_increase

0xd5d5,	// (0x0004afbd) aid_touch_area_mute_ParamLimits

0xd5d5,	// (0x0004afbd) aid_touch_area_mute

0xd5f9,	// (0x0004afe1) aid_touch_area_slider_ParamLimits

0xd5f9,	// (0x0004afe1) aid_touch_area_slider

0xd6e5,	// (0x0004b0cd) popup_slider_window_g4_ParamLimits

0xd6e5,	// (0x0004b0cd) popup_slider_window_g4

0xd6f1,	// (0x0004b0d9) popup_slider_window_g5_ParamLimits

0xd6f1,	// (0x0004b0d9) popup_slider_window_g5

0xd713,	// (0x0004b0fb) popup_slider_window_g6_ParamLimits

0xd713,	// (0x0004b0fb) popup_slider_window_g6

0xd753,	// (0x0004b13b) popup_slider_window_t2_ParamLimits

0xd753,	// (0x0004b13b) popup_slider_window_t2

0x0001,

0x0172,	// (0x0003db5a) popup_slider_window_t_ParamLimits

0x0172,	// (0x0003db5a) popup_slider_window_t

0xd76b,	// (0x0004b153) slider_pane_ParamLimits

0xd76b,	// (0x0004b153) slider_pane

0xe103,	// (0x0004baeb) slider_pane_g1_ParamLimits

0xe103,	// (0x0004baeb) slider_pane_g1

0xe117,	// (0x0004baff) slider_pane_g2_ParamLimits

0xe117,	// (0x0004baff) slider_pane_g2

0xe12d,	// (0x0004bb15) slider_pane_g3_ParamLimits

0xe12d,	// (0x0004bb15) slider_pane_g3

0x0003,

0x0274,	// (0x0003dc5c) slider_pane_g_ParamLimits

0x0274,	// (0x0003dc5c) slider_pane_g

0xbd60,	// (0x00049748) popup_tb_float_extension_window_ParamLimits

0xbd60,	// (0x00049748) popup_tb_float_extension_window

0xe159,	// (0x0004bb41) aid_size_cell_tb_float_ext

0x3cc6,	// (0x000416ae) bg_popup_sub_window_cp28

0xe165,	// (0x0004bb4d) grid_tb_float_ext_pane

0xe16f,	// (0x0004bb57) cell_tb_float_ext_pane_ParamLimits

0xe16f,	// (0x0004bb57) cell_tb_float_ext_pane

0xe189,	// (0x0004bb71) cell_tb_float_ext_pane_g1

0xe192,	// (0x0004bb7a) grid_highlight_pane_cp12

0x9e0a,	// (0x000477f2) cell_last_hwr_side_pane_ParamLimits

0x9e0a,	// (0x000477f2) cell_last_hwr_side_pane

0x74e2,	// (0x00044eca) cell_last_hwr_side_pane_g1

0xe19b,	// (0x0004bb83) cell_last_hwr_side_pane_g2

0x0001,

0xfd58,	// (0x0004d740) cell_last_hwr_side_pane_g

0xa559,	// (0x00047f41) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa559,	// (0x00047f41) vkb2_area_bottom_space_btn_pane

0x9f20,	// (0x00047908) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfee,	// (0x0004b9d6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa7f3,	// (0x000481db) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa812,	// (0x000481fa) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa812,	// (0x000481fa) vkb2_area_bottom_space_btn_pane_g1

0xa84c,	// (0x00048234) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa84c,	// (0x00048234) vkb2_area_bottom_space_btn_pane_g2

0xa882,	// (0x0004826a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa882,	// (0x0004826a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd5d,	// (0x0004d745) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd5d,	// (0x0004d745) vkb2_area_bottom_space_btn_pane_g

0x9d7e,	// (0x00047766) cel_fep_hwr_func_pane_ParamLimits

0x9d7e,	// (0x00047766) cel_fep_hwr_func_pane

0x9dba,	// (0x000477a2) cell_hwr_side_button_pane_ParamLimits

0x9dba,	// (0x000477a2) cell_hwr_side_button_pane

0xd9ad,	// (0x0004b395) aid_area_touch_clock_ParamLimits

0x3e69,	// (0x00041851) bg_uniindi_top_pane_ParamLimits

0xd9bf,	// (0x0004b3a7) uniindi_top_pane_g1_ParamLimits

0xd9d5,	// (0x0004b3bd) uniindi_top_pane_g2_ParamLimits

0xd9e1,	// (0x0004b3c9) uniindi_top_pane_g3_ParamLimits

0xd9f2,	// (0x0004b3da) uniindi_top_pane_g4_ParamLimits

0x01aa,	// (0x0003db92) uniindi_top_pane_g_ParamLimits

0xd9ff,	// (0x0004b3e7) uniindi_top_pane_t1_ParamLimits

0x3e69,	// (0x00041851) bg_vkb2_func_pane_cp01_ParamLimits

0x3e69,	// (0x00041851) bg_vkb2_func_pane_cp01

0xe1a4,	// (0x0004bb8c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1a4,	// (0x0004bb8c) cel_fep_hwr_func_pane_g1

0x3e69,	// (0x00041851) bg_vkb2_func_pane_cp02_ParamLimits

0x3e69,	// (0x00041851) bg_vkb2_func_pane_cp02

0xe1a4,	// (0x0004bb8c) cell_hwr_side_button_pane_g1_ParamLimits

0xe1a4,	// (0x0004bb8c) cell_hwr_side_button_pane_g1

0x5636,	// (0x0004301e) status_pane_g4_ParamLimits

0x5636,	// (0x0004301e) status_pane_g4

0x564e,	// (0x00043036) status_pane_t1

0x7371,	// (0x00044d59) form2_midp_gauge_slider_cont_pane

0x7379,	// (0x00044d61) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc841,	// (0x0004a229) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc853,	// (0x0004a23b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0004d4f3) form2_midp_gauge_slider_pane_t_ParamLimits

0x738b,	// (0x00044d73) form2_midp_slider_pane_ParamLimits

0xa1d0,	// (0x00047bb8) aid_size_cell_func_vkb2_ParamLimits

0xa1d0,	// (0x00047bb8) aid_size_cell_func_vkb2

0xe145,	// (0x0004bb2d) slider_pane_g4_ParamLimits

0xe145,	// (0x0004bb2d) slider_pane_g4

0xa8cc,	// (0x000482b4) form2_midp_gauge_slider_pane_t2_cp01

0xa8da,	// (0x000482c2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa8da,	// (0x000482c2) form2_midp_gauge_slider_pane_t3_cp01

0xa8f7,	// (0x000482df) form2_midp_slider_pane_cp01

0x3cc6,	// (0x000416ae) navi_smil_pane

0xe1d4,	// (0x0004bbbc) navi_smil_pane_g1

0xe1dc,	// (0x0004bbc4) navi_smil_pane_t1

0xe1b2,	// (0x0004bb9a) form2_midp_slider_pane_g1

0xe1bb,	// (0x0004bba3) form2_midp_slider_pane_g2

0xe1c3,	// (0x0004bbab) form2_midp_slider_pane_g3

0xe1b2,	// (0x0004bb9a) form2_midp_slider_pane_g4

0xef60,	// (0x0004c948) form2_midp_slider_pane_g5

0x0004,

0xfd66,	// (0x0004d74e) form2_midp_slider_pane_g

0xa8bc,	// (0x000482a4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa8bc,	// (0x000482a4) vkb2_area_bottom_space_btn_pane_g4

0xbecb,	// (0x000498b3) lc0_navi_pane_ParamLimits

0xbecb,	// (0x000498b3) lc0_navi_pane

0xbf41,	// (0x00049929) lc0_stat_indi_pane_ParamLimits

0xbf41,	// (0x00049929) lc0_stat_indi_pane

0xbf58,	// (0x00049940) ls0_title_pane_ParamLimits

0xbf58,	// (0x00049940) ls0_title_pane

0x47b1,	// (0x00042199) bg_popup_sub_pane_cp14_ParamLimits

0xd994,	// (0x0004b37c) list_uniindi_pane_ParamLimits

0xd9a0,	// (0x0004b388) uniindi_top_pane_ParamLimits

0xda3b,	// (0x0004b423) list_single_uniindi_pane_g1_ParamLimits

0xda4e,	// (0x0004b436) list_single_uniindi_pane_t1_ParamLimits

0xa900,	// (0x000482e8) lc0_stat_clock_pane_ParamLimits

0xa900,	// (0x000482e8) lc0_stat_clock_pane

0xef69,	// (0x0004c951) lc0_stat_indi_pane_g1_ParamLimits

0xef69,	// (0x0004c951) lc0_stat_indi_pane_g1

0xef76,	// (0x0004c95e) lc0_stat_indi_pane_g2_ParamLimits

0xef76,	// (0x0004c95e) lc0_stat_indi_pane_g2

0x0001,

0xfd71,	// (0x0004d759) lc0_stat_indi_pane_g_ParamLimits

0xfd71,	// (0x0004d759) lc0_stat_indi_pane_g

0xa90d,	// (0x000482f5) lc0_uni_indicator_pane_ParamLimits

0xa90d,	// (0x000482f5) lc0_uni_indicator_pane

0xef83,	// (0x0004c96b) ls0_title_pane_g1_ParamLimits

0xef83,	// (0x0004c96b) ls0_title_pane_g1

0xef97,	// (0x0004c97f) ls0_title_pane_t1_ParamLimits

0xef97,	// (0x0004c97f) ls0_title_pane_t1

0xa91a,	// (0x00048302) lc0_uni_indicator_pane_g1_ParamLimits

0xa91a,	// (0x00048302) lc0_uni_indicator_pane_g1

0xe1ea,	// (0x0004bbd2) lc0_stat_clock_pane_t1

0x3cc6,	// (0x000416ae) main_ai5_pane

0xe1f8,	// (0x0004bbe0) ai5_sk_pane_ParamLimits

0xe1f8,	// (0x0004bbe0) ai5_sk_pane

0xefcd,	// (0x0004c9b5) cell_ai5_widget_pane_ParamLimits

0xefcd,	// (0x0004c9b5) cell_ai5_widget_pane

0xe205,	// (0x0004bbed) aid_size_cell_widget_grid

0xe219,	// (0x0004bc01) bg_ai5_widget_pane_ParamLimits

0xe219,	// (0x0004bc01) bg_ai5_widget_pane

0xf223,	// (0x0004cc0b) cell_ai5_widget_pane_g2

0xf233,	// (0x0004cc1b) cell_ai5_widget_pane_g3

0xf252,	// (0x0004cc3a) cell_ai5_widget_pane_g4

0xf25e,	// (0x0004cc46) cell_ai5_widget_pane_g5

0xf26a,	// (0x0004cc52) cell_ai5_widget_pane_g6

0xf276,	// (0x0004cc5e) cell_ai5_widget_pane_g7

0xf2be,	// (0x0004cca6) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0004cca6) cell_ai5_widget_pane_t1

0xf2db,	// (0x0004ccc3) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0004ccc3) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0004ccdb) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0004ccdb) cell_ai5_widget_pane_t3

0xf30b,	// (0x0004ccf3) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0004ccf3) cell_ai5_widget_pane_t4

0xf325,	// (0x0004cd0d) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0004cd0d) cell_ai5_widget_pane_t5

0xe225,	// (0x0004bc0d) cell_ai5_widget_pane_t6_ParamLimits

0xe225,	// (0x0004bc0d) cell_ai5_widget_pane_t6

0xe237,	// (0x0004bc1f) cell_ai5_widget_pane_t7_ParamLimits

0xe237,	// (0x0004bc1f) cell_ai5_widget_pane_t7

0xf344,	// (0x0004cd2c) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0004cd2c) cell_ai5_widget_pane_t8

0x0009,

0x0296,	// (0x0003dc7e) cell_ai5_widget_pane_t_ParamLimits

0x0296,	// (0x0003dc7e) cell_ai5_widget_pane_t

0xf390,	// (0x0004cd78) grid_ai5_widget_pane

0x47b1,	// (0x00042199) highlight_cell_ai5_widget_pane_ParamLimits

0x47b1,	// (0x00042199) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0004cd8e) ai5_sk_left_pane

0xf3b0,	// (0x0004cd98) ai5_sk_middle_pane

0xf3ba,	// (0x0004cda2) ai5_sk_right_pane

0xe250,	// (0x0004bc38) bg_ai5_widget_pane_g1_ParamLimits

0xe250,	// (0x0004bc38) bg_ai5_widget_pane_g1

0xe25c,	// (0x0004bc44) bg_ai5_widget_pane_g2_ParamLimits

0xe25c,	// (0x0004bc44) bg_ai5_widget_pane_g2

0xe268,	// (0x0004bc50) bg_ai5_widget_pane_g3_ParamLimits

0xe268,	// (0x0004bc50) bg_ai5_widget_pane_g3

0xe274,	// (0x0004bc5c) bg_ai5_widget_pane_g4_ParamLimits

0xe274,	// (0x0004bc5c) bg_ai5_widget_pane_g4

0xe280,	// (0x0004bc68) bg_ai5_widget_pane_g5_ParamLimits

0xe280,	// (0x0004bc68) bg_ai5_widget_pane_g5

0xe28c,	// (0x0004bc74) bg_ai5_widget_pane_g6_ParamLimits

0xe28c,	// (0x0004bc74) bg_ai5_widget_pane_g6

0xe298,	// (0x0004bc80) bg_ai5_widget_pane_g7_ParamLimits

0xe298,	// (0x0004bc80) bg_ai5_widget_pane_g7

0xe2a4,	// (0x0004bc8c) bg_ai5_widget_pane_g8_ParamLimits

0xe2a4,	// (0x0004bc8c) bg_ai5_widget_pane_g8

0xe2b0,	// (0x0004bc98) bg_ai5_widget_pane_g9_ParamLimits

0xe2b0,	// (0x0004bc98) bg_ai5_widget_pane_g9

0x0008,

0x02ab,	// (0x0003dc93) bg_ai5_widget_pane_g_ParamLimits

0x02ab,	// (0x0003dc93) bg_ai5_widget_pane_g

0xe2e3,	// (0x0004bccb) cell_shortcut_ai5_widget_pane_ParamLimits

0xe2e3,	// (0x0004bccb) cell_shortcut_ai5_widget_pane

0x3d72,	// (0x0004175a) bg_cell_shortcut_ai5_widget_pane

0xe2f4,	// (0x0004bcdc) cell_grid_ai5_widget_pane_g1

0xe2fd,	// (0x0004bce5) highlight_cell_shortcut_ai5_widget_pane

0x573c,	// (0x00043124) ai5_sk_left_pane_g1

0xe305,	// (0x0004bced) ai5_sk_left_pane_g2

0xe30d,	// (0x0004bcf5) ai5_sk_left_pane_g3

0xe315,	// (0x0004bcfd) ai5_sk_left_pane_g4

0x0003,

0xfd8b,	// (0x0004d773) ai5_sk_left_pane_g

0xe31d,	// (0x0004bd05) ai5_sk_left_pane_t1

0x5734,	// (0x0004311c) ai5_sk_right_pane_g1

0xe32b,	// (0x0004bd13) ai5_sk_right_pane_g2

0xe333,	// (0x0004bd1b) ai5_sk_right_pane_g3

0xe33b,	// (0x0004bd23) ai5_sk_right_pane_g4

0x0003,

0xfd94,	// (0x0004d77c) ai5_sk_right_pane_g

0xe343,	// (0x0004bd2b) ai5_sk_right_pane_t1

0x5734,	// (0x0004311c) ai5_sk_middle_pane_g1

0x573c,	// (0x00043124) ai5_sk_middle_pane_g2

0x5754,	// (0x0004313c) ai5_sk_middle_pane_g3

0xe333,	// (0x0004bd1b) ai5_sk_middle_pane_g4

0xe30d,	// (0x0004bcf5) ai5_sk_middle_pane_g5

0xe351,	// (0x0004bd39) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0004cdac) ai5_sk_middle_pane_g7

0x0006,

0xfd9d,	// (0x0004d785) ai5_sk_middle_pane_g

0xbe10,	// (0x000497f8) aid_touch_area_size_lc0_ParamLimits

0xbe10,	// (0x000497f8) aid_touch_area_size_lc0

0x9f4f,	// (0x00047937) cell_hwr_candidate_pane_t1_ParamLimits

0x5558,	// (0x00042f40) aid_touch_navi_pane

0xc09f,	// (0x00049a87) status_dt_navi_pane_ParamLimits

0xc09f,	// (0x00049a87) status_dt_navi_pane

0xc0ac,	// (0x00049a94) status_dt_sta_pane_ParamLimits

0xc0ac,	// (0x00049a94) status_dt_sta_pane

0xf3cc,	// (0x0004cdb4) dt_sta_controll_pane

0xf3d9,	// (0x0004cdc1) dt_sta_indi_pane

0xf3ea,	// (0x0004cdd2) dt_sta_title_pane

0x3e69,	// (0x00041851) bg_dt_sta_indi_pane_ParamLimits

0x3e69,	// (0x00041851) bg_dt_sta_indi_pane

0xf3fd,	// (0x0004cde5) dt_sta_battery_pane

0xf405,	// (0x0004cded) dt_sta_indi_pane_g1

0xe359,	// (0x0004bd41) dt_sta_indi_pane_g2

0xe362,	// (0x0004bd4a) dt_sta_indi_pane_g3

0x0002,

0x02df,	// (0x0003dcc7) dt_sta_indi_pane_g

0xe36b,	// (0x0004bd53) dt_sta_signal_pane

0x47b1,	// (0x00042199) bg_dt_sta_title_pane_ParamLimits

0x47b1,	// (0x00042199) bg_dt_sta_title_pane

0x63fd,	// (0x00043de5) dt_sta_title_pane_g1

0xf40e,	// (0x0004cdf6) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0004cdf6) dt_sta_title_pane_t1

0x3cc6,	// (0x000416ae) bg_dt_sta_control_pane

0xf423,	// (0x0004ce0b) dt_sta_controll_pane_g1

0xe374,	// (0x0004bd5c) bg_dt_sta_title_pane_g1

0xe37d,	// (0x0004bd65) bg_dt_sta_title_pane_g2

0xe386,	// (0x0004bd6e) bg_dt_sta_title_pane_g3

0x0002,

0x02e6,	// (0x0003dcce) bg_dt_sta_title_pane_g

0x74e2,	// (0x00044eca) bg_dt_sta_indi_pane_g1

0xe38f,	// (0x0004bd77) dt_sta_signal_pane_g1

0xe397,	// (0x0004bd7f) dt_sta_signal_pane_g2

0x0001,

0x02ed,	// (0x0003dcd5) dt_sta_signal_pane_g

0xe39f,	// (0x0004bd87) dt_sta_battery_pane_g1

0xe3a8,	// (0x0004bd90) dt_sta_battery_pane_t1

0x74e2,	// (0x00044eca) bg_dt_sta_control_pane_g1

0x4d5b,	// (0x00042743) fep_china_uni_eep_pane

0x4d63,	// (0x0004274b) fep_china_uni_entry_pane_ParamLimits

0x4d73,	// (0x0004275b) popup_fep_china_uni_window_g1_ParamLimits

0x4d83,	// (0x0004276b) popup_fep_china_uni_window_g2_ParamLimits

0x4d83,	// (0x0004276b) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004d122) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004d122) popup_fep_china_uni_window_g

0xe3b7,	// (0x0004bd9f) fep_china_uni_eep_pane_g1

0xe3bf,	// (0x0004bda7) fep_china_uni_eep_pane_t1

0xe1cb,	// (0x0004bbb3) aid_touch_area_size_smil_player

0x5609,	// (0x00042ff1) lc0_clock_pane

0x5642,	// (0x0004302a) status_pane_g5_ParamLimits

0x5642,	// (0x0004302a) status_pane_g5

0xba72,	// (0x0004945a) popup_keymap_window

0x5622,	// (0x0004300a) status_icon_pane

0xf233,	// (0x0004cc1b) cell_ai5_widget_pane_g3_ParamLimits

0xf252,	// (0x0004cc3a) cell_ai5_widget_pane_g4_ParamLimits

0xf25e,	// (0x0004cc46) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0004cc6a) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0004cc6a) cell_ai5_widget_pane_g8

0xf296,	// (0x0004cc7e) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0004cc7e) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0004cc92) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0004cc92) cell_ai5_widget_pane_g10

0xe3ce,	// (0x0004bdb6) status_icon_pane_g1

0x3cc6,	// (0x000416ae) bg_popup_sub_pane_cp13

0xe3d6,	// (0x0004bdbe) popup_keymap_window_t1

0xb19d,	// (0x00048b85) control_pane_g6_ParamLimits

0xb19d,	// (0x00048b85) control_pane_g6

0xb1aa,	// (0x00048b92) control_pane_g7_ParamLimits

0xb1aa,	// (0x00048b92) control_pane_g7

0xb1b7,	// (0x00048b9f) control_pane_g8_ParamLimits

0xb1b7,	// (0x00048b9f) control_pane_g8

0xf3cc,	// (0x0004cdb4) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0004cdc1) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0004cdd2) dt_sta_title_pane_ParamLimits

0x46e7,	// (0x000420cf) aid_size_touch_scroll_bar_cale

0x8aa2,	// (0x0004648a) popup_discreet_window_ParamLimits

0x8aa2,	// (0x0004648a) popup_discreet_window

0x8b1c,	// (0x00046504) popup_sk_window

0x5cd9,	// (0x000436c1) bg_popup_sub_pane_cp28_ParamLimits

0x5cd9,	// (0x000436c1) bg_popup_sub_pane_cp28

0xe3e4,	// (0x0004bdcc) popup_discreet_window_g1_ParamLimits

0xe3e4,	// (0x0004bdcc) popup_discreet_window_g1

0xe404,	// (0x0004bdec) popup_discreet_window_t1_ParamLimits

0xe404,	// (0x0004bdec) popup_discreet_window_t1

0xe422,	// (0x0004be0a) popup_discreet_window_t2_ParamLimits

0xe422,	// (0x0004be0a) popup_discreet_window_t2

0x0002,

0x02f2,	// (0x0003dcda) popup_discreet_window_t_ParamLimits

0x02f2,	// (0x0003dcda) popup_discreet_window_t

0xa930,	// (0x00048318) popup_sk_window_g1

0xa93a,	// (0x00048322) popup_sk_window_g2

0x0001,

0xfdac,	// (0x0004d794) popup_sk_window_g

0xe474,	// (0x0004be5c) popup_sk_window_t1

0xe482,	// (0x0004be6a) popup_sk_window_t1_copy1

0xf223,	// (0x0004cc0b) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0004cd3e) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0004cd3e) cell_ai5_widget_pane_t9

0x3cc6,	// (0x000416ae) main_fep_fshwr2_pane

0xf42c,	// (0x0004ce14) aid_fshwr2_btn_pane

0xf434,	// (0x0004ce1c) aid_fshwr2_syb_pane

0xf43c,	// (0x0004ce24) aid_fshwr2_txt_pane

0xf444,	// (0x0004ce2c) fshwr2_func_candi_pane

0xf450,	// (0x0004ce38) fshwr2_hwr_syb_pane

0xf45c,	// (0x0004ce44) fshwr2_icf_pane

0x3cc6,	// (0x000416ae) fshwr2_icf_bg_pane

0xf466,	// (0x0004ce4e) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0004ce4e) fshwr2_icf_pane_t1

0x74e2,	// (0x00044eca) fshwr2_func_candi_pane_g1

0xe4a4,	// (0x0004be8c) fshwr2_func_candi_row_pane_ParamLimits

0xe4a4,	// (0x0004be8c) fshwr2_func_candi_row_pane

0xf47d,	// (0x0004ce65) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0004ce65) cell_fshwr2_syb_pane

0x7769,	// (0x00045151) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7769,	// (0x00045151) fshwr2_hwr_syb_pane_g1

0x3cc6,	// (0x000416ae) bg_popup_call_pane_cp01

0xe4b5,	// (0x0004be9d) fshwr2_func_candi_cell_pane_ParamLimits

0xe4b5,	// (0x0004be9d) fshwr2_func_candi_cell_pane

0xe4e6,	// (0x0004bece) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe4e6,	// (0x0004bece) fshwr2_func_candi_cell_bg_pane

0xe500,	// (0x0004bee8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe500,	// (0x0004bee8) fshwr2_func_candi_cell_pane_g1

0xe520,	// (0x0004bf08) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe520,	// (0x0004bf08) fshwr2_func_candi_cell_pane_t1

0x3cc6,	// (0x000416ae) bg_button_pane_cp08

0x51ec,	// (0x00042bd4) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0004ce81) cell_fshwr2_syb_bg_pane_g1

0xe533,	// (0x0004bf1b) cell_fshwr2_syb_bg_pane_t1

0x47b1,	// (0x00042199) main_tmo_pane

0xc3e6,	// (0x00049dce) uni_indicator_pane_g1_ParamLimits

0xc3fb,	// (0x00049de3) uni_indicator_pane_g2_ParamLimits

0xc411,	// (0x00049df9) uni_indicator_pane_g3_ParamLimits

0x66c1,	// (0x000440a9) uni_indicator_pane_g4_ParamLimits

0x66c1,	// (0x000440a9) uni_indicator_pane_g4

0x66d5,	// (0x000440bd) uni_indicator_pane_g5_ParamLimits

0x66d5,	// (0x000440bd) uni_indicator_pane_g5

0x66e9,	// (0x000440d1) uni_indicator_pane_g6_ParamLimits

0x66e9,	// (0x000440d1) uni_indicator_pane_g6

0xf937,	// (0x0004d31f) uni_indicator_pane_g_ParamLimits

0xd587,	// (0x0004af6f) popup_tmo_note_window_ParamLimits

0xd587,	// (0x0004af6f) popup_tmo_note_window

0x3cc6,	// (0x000416ae) fshwr2_bg_pane

0xe511,	// (0x0004bef9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe511,	// (0x0004bef9) fshwr2_func_candi_cell_pane_g2

0x0001,

0x02fe,	// (0x0003dce6) fshwr2_func_candi_cell_pane_g_ParamLimits

0x02fe,	// (0x0003dce6) fshwr2_func_candi_cell_pane_g

0x74e2,	// (0x00044eca) bg_popup_window_pane_cp01

0xe542,	// (0x0004bf2a) bg_popup_window_pane_g1_cp01

0xe54b,	// (0x0004bf33) bg_popup_window_pane_cp22_ParamLimits

0xe54b,	// (0x0004bf33) bg_popup_window_pane_cp22

0xe559,	// (0x0004bf41) listscroll_tmo_link_pane_ParamLimits

0xe559,	// (0x0004bf41) listscroll_tmo_link_pane

0xe599,	// (0x0004bf81) popup_tmo_note_window_g1_ParamLimits

0xe599,	// (0x0004bf81) popup_tmo_note_window_g1

0xe5a6,	// (0x0004bf8e) tmo_note_info_pane_ParamLimits

0xe5a6,	// (0x0004bf8e) tmo_note_info_pane

0xf4a1,	// (0x0004ce89) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0004ce89) list_tmo_note_info_pane_g1

0xe5c0,	// (0x0004bfa8) list_tmo_note_info_pane_g2_ParamLimits

0xe5c0,	// (0x0004bfa8) list_tmo_note_info_pane_g2

0x0001,

0x0303,	// (0x0003dceb) list_tmo_note_info_pane_g_ParamLimits

0x0303,	// (0x0003dceb) list_tmo_note_info_pane_g

0xe5dc,	// (0x0004bfc4) list_tmo_note_info_text_pane_ParamLimits

0xe5dc,	// (0x0004bfc4) list_tmo_note_info_text_pane

0xe61e,	// (0x0004c006) list_tmo_link_pane

0xe62b,	// (0x0004c013) scroll_pane_cp20

0xe638,	// (0x0004c020) list_single_tmo_link_pane_ParamLimits

0xe638,	// (0x0004c020) list_single_tmo_link_pane

0xe648,	// (0x0004c030) list_single_tmo_link_pane_t1

0xe656,	// (0x0004c03e) list_tmo_note_info_text_pane_t1_ParamLimits

0xe656,	// (0x0004c03e) list_tmo_note_info_text_pane_t1

0xae47,	// (0x0004882f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xae47,	// (0x0004882f) aid_size_touch_scroll_bar_cp01

0xad28,	// (0x00048710) aid_size_touch_slider_marker

0x8b04,	// (0x000464ec) popup_settings_window_ParamLimits

0x8b04,	// (0x000464ec) popup_settings_window

0xb214,	// (0x00048bfc) popup_candi_list_indi_window

0x5558,	// (0x00042f40) aid_touch_navi_pane_ParamLimits

0xa10d,	// (0x00047af5) rs_clock_indi_pane

0xa116,	// (0x00047afe) sctrl_sk_bottom_pane_ParamLimits

0xa127,	// (0x00047b0f) sctrl_sk_top_pane_ParamLimits

0xa22a,	// (0x00047c12) popup_fep_tooltip_window

0xe205,	// (0x0004bbed) aid_size_cell_widget_grid_ParamLimits

0xf217,	// (0x0004cbff) cell_ai5_widget_pane_g1_ParamLimits

0xf217,	// (0x0004cbff) cell_ai5_widget_pane_g1

0xf26a,	// (0x0004cc52) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0004cc5e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfd76,	// (0x0004d75e) cell_ai5_widget_pane_g_ParamLimits

0xfd76,	// (0x0004d75e) cell_ai5_widget_pane_g

0xf37a,	// (0x0004cd62) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0004cd62) cell_ai5_widget_pane_t10

0xf390,	// (0x0004cd78) grid_ai5_widget_pane_ParamLimits

0xe2bc,	// (0x0004bca4) cell_contacts_ai5_widget_pane_ParamLimits

0xe2bc,	// (0x0004bca4) cell_contacts_ai5_widget_pane

0xe437,	// (0x0004be1f) popup_discreet_window_t3_ParamLimits

0xe437,	// (0x0004be1f) popup_discreet_window_t3

0xe490,	// (0x0004be78) popup_fshwr2_char_preview_window_ParamLimits

0xe490,	// (0x0004be78) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0004cea0) tmo_note_info_pane_t1

0xf4cd,	// (0x0004ceb5) tmo_note_info_pane_t2

0xf4e6,	// (0x0004cece) tmo_note_info_pane_t3

0xe5fa,	// (0x0004bfe2) tmo_note_info_pane_t4

0xe60c,	// (0x0004bff4) tmo_note_info_pane_t5

0x0004,

0x0308,	// (0x0003dcf0) tmo_note_info_pane_t

0xe61e,	// (0x0004c006) list_tmo_link_pane_ParamLimits

0xe62b,	// (0x0004c013) scroll_pane_cp20_ParamLimits

0x3cc6,	// (0x000416ae) bg_popup_fep_char_preview_window_cp01

0xe66f,	// (0x0004c057) popup_fshwr2_char_preview_window_t1

0xe67d,	// (0x0004c065) popup_candi_list_indi_window_g1

0xe686,	// (0x0004c06e) bg_cell_contacts_ai5_widget_pane

0xe692,	// (0x0004c07a) cell_contacts_ai5_widget_pane_g1

0xe6a6,	// (0x0004c08e) cell_contacts_ai5_widget_pane_g2

0xe6b5,	// (0x0004c09d) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0313,	// (0x0003dcfb) cell_contacts_ai5_widget_pane_g

0xe6c8,	// (0x0004c0b0) cell_contacts_ai5_widget_pane_t1

0x47b1,	// (0x00042199) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe742,	// (0x0004c12a) settings_container_pane

0x51ec,	// (0x00042bd4) listscroll_set_pane_copy1

0x6ed2,	// (0x000448ba) scroll_pane_cp121_copy1

0xe74e,	// (0x0004c136) set_content_pane_copy1

0xe756,	// (0x0004c13e) aid_height_set_list_copy1_ParamLimits

0xe756,	// (0x0004c13e) aid_height_set_list_copy1

0x620d,	// (0x00043bf5) aid_size_parent_copy1_ParamLimits

0x620d,	// (0x00043bf5) aid_size_parent_copy1

0xe762,	// (0x0004c14a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe762,	// (0x0004c14a) button_value_adjust_pane_cp6_copy1

0x48fc,	// (0x000422e4) list_highlight_pane_cp2_copy1_ParamLimits

0x48fc,	// (0x000422e4) list_highlight_pane_cp2_copy1

0xe776,	// (0x0004c15e) list_set_pane_copy1_ParamLimits

0xe776,	// (0x0004c15e) list_set_pane_copy1

0xe6dd,	// (0x0004c0c5) main_pane_set_t1_copy1_ParamLimits

0xe6dd,	// (0x0004c0c5) main_pane_set_t1_copy1

0xe717,	// (0x0004c0ff) main_pane_set_t2_copy1_ParamLimits

0xe717,	// (0x0004c0ff) main_pane_set_t2_copy1

0xe823,	// (0x0004c20b) main_pane_set_t3_copy1

0xe831,	// (0x0004c219) main_pane_set_t4_copy1

0xe736,	// (0x0004c11e) set_content_pane_g1_copy1_ParamLimits

0xe736,	// (0x0004c11e) set_content_pane_g1_copy1

0xe83f,	// (0x0004c227) setting_code_pane_copy1

0xe849,	// (0x0004c231) setting_slider_graphic_pane_copy1

0xe849,	// (0x0004c231) setting_slider_pane_copy1

0xe849,	// (0x0004c231) setting_text_pane_copy1

0xe853,	// (0x0004c23b) setting_volume_pane_copy1

0xe85c,	// (0x0004c244) settings_code_pane_cp2_copy1

0xe864,	// (0x0004c24c) settings_code_pane_cp_copy1_ParamLimits

0xe864,	// (0x0004c24c) settings_code_pane_cp_copy1

0xe878,	// (0x0004c260) volume_set_pane_copy1

0xe880,	// (0x0004c268) volume_set_pane_g10_copy1

0xe888,	// (0x0004c270) volume_set_pane_g1_copy1

0xe890,	// (0x0004c278) volume_set_pane_g2_copy1

0xe898,	// (0x0004c280) volume_set_pane_g3_copy1

0xe8a0,	// (0x0004c288) volume_set_pane_g4_copy1

0xe8a8,	// (0x0004c290) volume_set_pane_g5_copy1

0xe8b0,	// (0x0004c298) volume_set_pane_g6_copy1

0xe8b8,	// (0x0004c2a0) volume_set_pane_g7_copy1

0xe8c0,	// (0x0004c2a8) volume_set_pane_g8_copy1

0xe8c8,	// (0x0004c2b0) volume_set_pane_g9_copy1

0x3d36,	// (0x0004171e) bg_set_opt_pane_cp_copy1_ParamLimits

0x3d36,	// (0x0004171e) bg_set_opt_pane_cp_copy1

0xe8d0,	// (0x0004c2b8) setting_slider_pane_t1_copy1_ParamLimits

0xe8d0,	// (0x0004c2b8) setting_slider_pane_t1_copy1

0xe8ee,	// (0x0004c2d6) setting_slider_pane_t2_copy1_ParamLimits

0xe8ee,	// (0x0004c2d6) setting_slider_pane_t2_copy1

0xe908,	// (0x0004c2f0) setting_slider_pane_t3_copy1_ParamLimits

0xe908,	// (0x0004c2f0) setting_slider_pane_t3_copy1

0xe920,	// (0x0004c308) slider_set_pane_copy1_ParamLimits

0xe920,	// (0x0004c308) slider_set_pane_copy1

0x480c,	// (0x000421f4) set_opt_bg_pane_g1_copy2

0x4814,	// (0x000421fc) set_opt_bg_pane_g2_copy2

0xe936,	// (0x0004c31e) set_opt_bg_pane_g3_copy2

0x4824,	// (0x0004220c) set_opt_bg_pane_g4_copy2

0x482c,	// (0x00042214) set_opt_bg_pane_g5_copy2

0x4834,	// (0x0004221c) set_opt_bg_pane_g6_copy2

0xe940,	// (0x0004c328) set_opt_bg_pane_g7_copy2

0xe948,	// (0x0004c330) set_opt_bg_pane_g8_copy2

0xe952,	// (0x0004c33a) set_opt_bg_pane_g9_copy2

0xa944,	// (0x0004832c) aid_size_touch_slider_mark_copy1_ParamLimits

0xa944,	// (0x0004832c) aid_size_touch_slider_mark_copy1

0xe95c,	// (0x0004c344) slider_set_pane_g1_copy1

0xa958,	// (0x00048340) slider_set_pane_g2_copy1

0x9af8,	// (0x000474e0) slider_set_pane_g3_copy1_ParamLimits

0x9af8,	// (0x000474e0) slider_set_pane_g3_copy1

0x9b0c,	// (0x000474f4) slider_set_pane_g4_copy1_ParamLimits

0x9b0c,	// (0x000474f4) slider_set_pane_g4_copy1

0x9b24,	// (0x0004750c) slider_set_pane_g5_copy1_ParamLimits

0x9b24,	// (0x0004750c) slider_set_pane_g5_copy1

0x9af8,	// (0x000474e0) slider_set_pane_g6_copy1_ParamLimits

0x9af8,	// (0x000474e0) slider_set_pane_g6_copy1

0xa960,	// (0x00048348) slider_set_pane_g7_copy1_ParamLimits

0xa960,	// (0x00048348) slider_set_pane_g7_copy1

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp2_copy1

0xe965,	// (0x0004c34d) setting_slider_graphic_pane_g1_copy1

0xe96e,	// (0x0004c356) setting_slider_graphic_pane_t1_copy1

0xe97e,	// (0x0004c366) setting_slider_graphic_pane_t2_copy1

0xe98e,	// (0x0004c376) slider_set_pane_cp_copy1

0xe99e,	// (0x0004c386) input_focus_pane_cp1_copy1

0xe9a7,	// (0x0004c38f) list_set_text_pane_copy1

0xe9af,	// (0x0004c397) setting_text_pane_g1_copy1

0xb9d1,	// (0x000493b9) set_text_pane_t1_copy1

0xe99e,	// (0x0004c386) input_focus_pane_cp2_copy1

0xe9af,	// (0x0004c397) setting_code_pane_g1_copy1

0xe9b8,	// (0x0004c3a0) setting_code_pane_t1_copy1

0xe9c6,	// (0x0004c3ae) list_set_graphic_pane_copy1

0x3cda,	// (0x000416c2) bg_set_opt_pane_cp4_copy1

0x4eee,	// (0x000428d6) list_set_graphic_pane_g1_copy1_ParamLimits

0x4eee,	// (0x000428d6) list_set_graphic_pane_g1_copy1

0xe9da,	// (0x0004c3c2) list_set_graphic_pane_g2_copy1

0x4f06,	// (0x000428ee) list_set_graphic_pane_t1_copy1_ParamLimits

0x4f06,	// (0x000428ee) list_set_graphic_pane_t1_copy1

0x74e2,	// (0x00044eca) rs_clock_indi_pane_g1

0xe9e2,	// (0x0004c3ca) rs_clock_indi_pane_t1

0xe9f0,	// (0x0004c3d8) rs_indi_pane

0xe9f8,	// (0x0004c3e0) rs_indi_pane_g1

0xea01,	// (0x0004c3e9) rs_indi_pane_g2

0xea0a,	// (0x0004c3f2) rs_indi_pane_g3

0x0002,

0x031a,	// (0x0003dd02) rs_indi_pane_g

0x51ec,	// (0x00042bd4) bg_popup_preview_window_pane_cp03

0xea13,	// (0x0004c3fb) popup_fep_tooltip_window_t1

0xcd1c,	// (0x0004a704) popup_note2_window_g2_ParamLimits

0xcd1c,	// (0x0004a704) popup_note2_window_g2

0x0001,

0x00e9,	// (0x0003dad1) popup_note2_window_g_ParamLimits

0x00e9,	// (0x0003dad1) popup_note2_window_g

0xd20a,	// (0x0004abf2) bg_popup_sub_pane_cp11_ParamLimits

0xd217,	// (0x0004abff) cell_ai3_links_pane_g1_ParamLimits

0xd22e,	// (0x0004ac16) cell_ai3_links_pane_t1

0xb9d1,	// (0x000493b9) set_text_pane_t1_copy1_ParamLimits

0x50fb,	// (0x00042ae3) cell_graphic_popup_pane_cp2_ParamLimits

0x50fb,	// (0x00042ae3) cell_graphic_popup_pane_cp2

0xea21,	// (0x0004c409) cell_graphic_popup_pane_g1_cp2

0x44fa,	// (0x00041ee2) cell_graphic_popup_pane_g2_cp2

0xea29,	// (0x0004c411) cell_graphic_popup_pane_g3_cp2

0xea31,	// (0x0004c419) cell_graphic_popup_pane_t2_cp2

0x450b,	// (0x00041ef3) grid_highlight_pane_cp3_cp2

0x4aa6,	// (0x0004248e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x47b1,	// (0x00042199) main_tmo_pane_ParamLimits

0xd57b,	// (0x0004af63) popup_tmo_big_image_note_window

0xf207,	// (0x0004cbef) cell_ai5_widget_list_pane

0xf20f,	// (0x0004cbf7) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0004cea0) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0004ceb5) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0004cece) tmo_note_info_pane_t3_ParamLimits

0xe5fa,	// (0x0004bfe2) tmo_note_info_pane_t4_ParamLimits

0xe60c,	// (0x0004bff4) tmo_note_info_pane_t5_ParamLimits

0x0308,	// (0x0003dcf0) tmo_note_info_pane_t_ParamLimits

0xe742,	// (0x0004c12a) settings_container_pane_ParamLimits

0xe996,	// (0x0004c37e) indicator_popup_pane_cp5

0xe996,	// (0x0004c37e) indicator_popup_pane_cp6

0xe9c6,	// (0x0004c3ae) list_set_graphic_pane_copy1_ParamLimits

0x3cc6,	// (0x000416ae) bg_popup_window_pane_cp23

0xea3f,	// (0x0004c427) popup_tmo_big_image_note_window_g1

0xea4a,	// (0x0004c432) popup_tmo_big_image_note_window_t1

0xea5a,	// (0x0004c442) popup_tmo_big_image_note_window_t2

0xea6a,	// (0x0004c452) popup_tmo_big_image_note_window_t3

0x0002,

0x0321,	// (0x0003dd09) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0004cee3) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0004ceeb) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0004cef9) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0004cef9) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0004cf12) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0004cf12) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0004cf1f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0004cf1f) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0004cf37) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0004cf37) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0328,	// (0x0003dd10) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0328,	// (0x0003dd10) cell_ai5_widget_list_row_pane_t

0x89c9,	// (0x000463b1) main_fep_vtchi_ss_pane

0xea7a,	// (0x0004c462) popup_fep_char_pre_window

0xea82,	// (0x0004c46a) popup_fep_ituss_window

0xeaa3,	// (0x0004c48b) popup_fep_vkbss_window

0xeac2,	// (0x0004c4aa) grid_vkbss_keypad_pane_ParamLimits

0xeac2,	// (0x0004c4aa) grid_vkbss_keypad_pane

0xead2,	// (0x0004c4ba) ituss_keypad_pane

0xeaea,	// (0x0004c4d2) aid_vkbss_key_offset_ParamLimits

0xeaea,	// (0x0004c4d2) aid_vkbss_key_offset

0xeaf6,	// (0x0004c4de) cell_vkbss_key_pane_ParamLimits

0xeaf6,	// (0x0004c4de) cell_vkbss_key_pane

0x696d,	// (0x00044355) bg_cell_vkbss_key_g1_ParamLimits

0x696d,	// (0x00044355) bg_cell_vkbss_key_g1

0xeb0c,	// (0x0004c4f4) cell_vkbss_key_3p_pane_ParamLimits

0xeb0c,	// (0x0004c4f4) cell_vkbss_key_3p_pane

0xeb26,	// (0x0004c50e) cell_vkbss_key_g1_ParamLimits

0xeb26,	// (0x0004c50e) cell_vkbss_key_g1

0xeb40,	// (0x0004c528) cell_vkbss_key_t1_ParamLimits

0xeb40,	// (0x0004c528) cell_vkbss_key_t1

0xeb6b,	// (0x0004c553) cell_ituss_key_pane_ParamLimits

0xeb6b,	// (0x0004c553) cell_ituss_key_pane

0xeb7b,	// (0x0004c563) bg_cell_ituss_key_g1_ParamLimits

0xeb7b,	// (0x0004c563) bg_cell_ituss_key_g1

0xeb87,	// (0x0004c56f) cell_ituss_key_pane_g1_ParamLimits

0xeb87,	// (0x0004c56f) cell_ituss_key_pane_g1

0xeb93,	// (0x0004c57b) cell_ituss_key_pane_g2_ParamLimits

0xeb93,	// (0x0004c57b) cell_ituss_key_pane_g2

0x0001,

0x032d,	// (0x0003dd15) cell_ituss_key_pane_g_ParamLimits

0x032d,	// (0x0003dd15) cell_ituss_key_pane_g

0xebac,	// (0x0004c594) cell_ituss_key_t1_ParamLimits

0xebac,	// (0x0004c594) cell_ituss_key_t1

0xf05b,	// (0x0004ca43) cell_ituss_key_t2_ParamLimits

0xf05b,	// (0x0004ca43) cell_ituss_key_t2

0xf08c,	// (0x0004ca74) cell_ituss_key_t3_ParamLimits

0xf08c,	// (0x0004ca74) cell_ituss_key_t3

0xf0bd,	// (0x0004caa5) cell_ituss_key_t4_ParamLimits

0xf0bd,	// (0x0004caa5) cell_ituss_key_t4

0x0003,

0xfdb1,	// (0x0004d799) cell_ituss_key_t_ParamLimits

0xfdb1,	// (0x0004d799) cell_ituss_key_t

0xf0ee,	// (0x0004cad6) cell_vkbss_key_3p_pane_g1

0xf0f6,	// (0x0004cade) cell_vkbss_key_3p_pane_g2

0xf0fe,	// (0x0004cae6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfdba,	// (0x0004d7a2) cell_vkbss_key_3p_pane_g

0x3cc6,	// (0x000416ae) bg_popup_fep_char_preview_window_cp02

0xf106,	// (0x0004caee) popup_fep_char_pre_window_t1

0xf051,	// (0x0004ca39) main_ai5_sk_pane

0xe686,	// (0x0004c06e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe692,	// (0x0004c07a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe6a6,	// (0x0004c08e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe6b5,	// (0x0004c09d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0313,	// (0x0003dcfb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe6c8,	// (0x0004c0b0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x47b1,	// (0x00042199) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0004cf49) main_ai5_sk_pane_g1

0x5b17,	// (0x000434ff) popup_query_code_window_g1

0xea98,	// (0x0004c480) popup_fep_vkb_icf_pane

0xeaac,	// (0x0004c494) popup_fep_vtchi_icf_pane

0x47b1,	// (0x00042199) bg_icf_pane

0xf124,	// (0x0004cb0c) list_vkb_icf_pane

0x47b1,	// (0x00042199) bg_icf_pane_cp01

0xf13c,	// (0x0004cb24) vtchi_icf_list_pane

0xf14c,	// (0x0004cb34) list_vkb_icf_pane_t1_ParamLimits

0xf14c,	// (0x0004cb34) list_vkb_icf_pane_t1

0xf166,	// (0x0004cb4e) vtchi_icf_list_pane_t1_ParamLimits

0xf166,	// (0x0004cb4e) vtchi_icf_list_pane_t1

0xea82,	// (0x0004c46a) popup_fep_ituss_window_ParamLimits

0xeaac,	// (0x0004c494) popup_fep_vtchi_icf_pane_ParamLimits

0xead2,	// (0x0004c4ba) ituss_keypad_pane_ParamLimits

0xeae1,	// (0x0004c4c9) ituss_sks_pane

0x47b1,	// (0x00042199) bg_icf_pane_ParamLimits

0xf115,	// (0x0004cafd) icf_edit_indi_pane_ParamLimits

0xf115,	// (0x0004cafd) icf_edit_indi_pane

0xf124,	// (0x0004cb0c) list_vkb_icf_pane_ParamLimits

0x47b1,	// (0x00042199) bg_icf_pane_cp01_ParamLimits

0xf130,	// (0x0004cb18) icf_edit_indi_pane_cp01_ParamLimits

0xf130,	// (0x0004cb18) icf_edit_indi_pane_cp01

0xf144,	// (0x0004cb2c) vtchi_query_pane

0x7769,	// (0x00045151) icf_edit_indi_pane_g1_ParamLimits

0x7769,	// (0x00045151) icf_edit_indi_pane_g1

0xf18d,	// (0x0004cb75) icf_edit_indi_pane_g2_ParamLimits

0xf18d,	// (0x0004cb75) icf_edit_indi_pane_g2

0x0001,

0xfdc1,	// (0x0004d7a9) icf_edit_indi_pane_g_ParamLimits

0xfdc1,	// (0x0004d7a9) icf_edit_indi_pane_g

0xf199,	// (0x0004cb81) icf_edit_indi_pane_t1

0xf1a7,	// (0x0004cb8f) bg_input_focus_pane_cp042

0x46de,	// (0x000420c6) vtchi_button_pane

0xf1b0,	// (0x0004cb98) vtchi_query_pane_t1

0xf1be,	// (0x0004cba6) vtchi_query_pane_t2

0xf1cc,	// (0x0004cbb4) vtchi_query_pane_t3

0x0002,

0xfdc6,	// (0x0004d7ae) vtchi_query_pane_t

0x3cc6,	// (0x000416ae) bg_button_pane_cp13

0xf1da,	// (0x0004cbc2) vtchi_button_pane_g1

0xda85,	// (0x0004b46d) ituss_sks_pane_g1

0xf1e2,	// (0x0004cbca) ituss_sks_pane_g2

0x0001,

0xfdcd,	// (0x0004d7b5) ituss_sks_pane_g

0xf1eb,	// (0x0004cbd3) ituss_sks_pane_t1

0xf1f9,	// (0x0004cbe1) ituss_sks_pane_t2

0x0001,

0xfdd2,	// (0x0004d7ba) ituss_sks_pane_t

0x71af,	// (0x00044b97) indicator_nsta_pane_cp_g1

0x71b8,	// (0x00044ba0) indicator_nsta_pane_cp_g2

0x71c0,	// (0x00044ba8) indicator_nsta_pane_cp_g3

0x71c8,	// (0x00044bb0) indicator_nsta_pane_cp_g4

0x71d0,	// (0x00044bb8) indicator_nsta_pane_cp_g5

0x71d8,	// (0x00044bc0) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0004d4a9) indicator_nsta_pane_cp_g

0xee5b,	// (0x0004c843) cell_graphic2_pane_t2_ParamLimits

0xee5b,	// (0x0004c843) cell_graphic2_pane_t2

0x0001,

0xfd16,	// (0x0004d6fe) cell_graphic2_pane_t_ParamLimits

0xfd16,	// (0x0004d6fe) cell_graphic2_pane_t

0xee88,	// (0x0004c870) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

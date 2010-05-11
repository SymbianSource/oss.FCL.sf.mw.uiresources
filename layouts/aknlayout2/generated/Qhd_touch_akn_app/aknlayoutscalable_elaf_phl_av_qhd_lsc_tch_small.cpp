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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f647 };

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
0xbe1f,	// (0x0002b466) Screen

0xbe2b,	// (0x0002b472) application_window_ParamLimits

0xbe2b,	// (0x0002b472) application_window

0x3517,	// (0x00022b5e) screen_g1

0xbe63,	// (0x0002b4aa) area_bottom_pane_ParamLimits

0xbe63,	// (0x0002b4aa) area_bottom_pane

0x1296,	// (0x000208dd) area_top_pane_ParamLimits

0x1296,	// (0x000208dd) area_top_pane

0x132a,	// (0x00020971) main_pane_ParamLimits

0x132a,	// (0x00020971) main_pane

0x3521,	// (0x00022b68) misc_graphics

0xd683,	// (0x0002ccca) battery_pane_ParamLimits

0xd683,	// (0x0002ccca) battery_pane

0x5bac,	// (0x000251f3) bg_status_flat_pane_g8

0x5bb4,	// (0x000251fb) bg_status_flat_pane_g9

0x4f9c,	// (0x000245e3) context_pane_ParamLimits

0x4f9c,	// (0x000245e3) context_pane

0xd7ee,	// (0x0002ce35) navi_pane_ParamLimits

0xd7ee,	// (0x0002ce35) navi_pane

0xd86c,	// (0x0002ceb3) signal_pane_ParamLimits

0xd86c,	// (0x0002ceb3) signal_pane

0x0008,

0xf86d,	// (0x0002eeb4) bg_status_flat_pane_g

0xd8fc,	// (0x0002cf43) status_pane_g1_ParamLimits

0xd8fc,	// (0x0002cf43) status_pane_g1

0xd912,	// (0x0002cf59) status_pane_g2_ParamLimits

0xd912,	// (0x0002cf59) status_pane_g2

0x51c3,	// (0x0002480a) status_pane_g3_ParamLimits

0x51c3,	// (0x0002480a) status_pane_g3

0x0004,

0xf7a0,	// (0x0002ede7) status_pane_g_ParamLimits

0xf7a0,	// (0x0002ede7) status_pane_g

0xd91e,	// (0x0002cf65) title_pane_ParamLimits

0xd91e,	// (0x0002cf65) title_pane

0xd981,	// (0x0002cfc8) uni_indicator_pane_ParamLimits

0xd981,	// (0x0002cfc8) uni_indicator_pane

0x4dfe,	// (0x00024445) bg_list_pane_ParamLimits

0x4dfe,	// (0x00024445) bg_list_pane

0xd5f6,	// (0x0002cc3d) find_pane

0xc27e,	// (0x0002b8c5) listscroll_app_pane_ParamLimits

0xc27e,	// (0x0002b8c5) listscroll_app_pane

0x4e2a,	// (0x00024471) listscroll_form_pane

0xc28e,	// (0x0002b8d5) listscroll_gen_pane_ParamLimits

0xc28e,	// (0x0002b8d5) listscroll_gen_pane

0x1bf5,	// (0x0002123c) listscroll_set_pane

0x672e,	// (0x00025d75) main_idle_act_pane

0x4b06,	// (0x0002414d) main_idle_trad_pane

0x4b06,	// (0x0002414d) main_list_empty_pane

0x4e44,	// (0x0002448b) main_midp_pane

0x4e50,	// (0x00024497) main_pane_g1_ParamLimits

0x4e50,	// (0x00024497) main_pane_g1

0xc2a2,	// (0x0002b8e9) popup_ai_message_window_ParamLimits

0xc2a2,	// (0x0002b8e9) popup_ai_message_window

0xc333,	// (0x0002b97a) popup_fep_china_uni_window_ParamLimits

0xc333,	// (0x0002b97a) popup_fep_china_uni_window

0x1cff,	// (0x00021346) popup_fep_japan_candidate_window_ParamLimits

0x1cff,	// (0x00021346) popup_fep_japan_candidate_window

0x1d1f,	// (0x00021366) popup_fep_japan_predictive_window_ParamLimits

0x1d1f,	// (0x00021366) popup_fep_japan_predictive_window

0xc38f,	// (0x0002b9d6) popup_find_window

0xc3ac,	// (0x0002b9f3) popup_grid_graphic_window_ParamLimits

0xc3ac,	// (0x0002b9f3) popup_grid_graphic_window

0x1d86,	// (0x000213cd) popup_large_graphic_colour_window

0xc44a,	// (0x0002ba91) popup_menu_window_ParamLimits

0xc44a,	// (0x0002ba91) popup_menu_window

0xc61c,	// (0x0002bc63) popup_note_image_window

0xc5e2,	// (0x0002bc29) popup_note_wait_window_ParamLimits

0xc5e2,	// (0x0002bc29) popup_note_wait_window

0xc634,	// (0x0002bc7b) popup_note_window_ParamLimits

0xc634,	// (0x0002bc7b) popup_note_window

0xc6da,	// (0x0002bd21) popup_query_code_window_ParamLimits

0xc6da,	// (0x0002bd21) popup_query_code_window

0x1fce,	// (0x00021615) popup_query_data_code_window_ParamLimits

0x1fce,	// (0x00021615) popup_query_data_code_window

0xc714,	// (0x0002bd5b) popup_query_data_window_ParamLimits

0xc714,	// (0x0002bd5b) popup_query_data_window

0xc796,	// (0x0002bddd) popup_query_sat_info_window_ParamLimits

0xc796,	// (0x0002bddd) popup_query_sat_info_window

0xc82d,	// (0x0002be74) popup_snote_single_graphic_window_ParamLimits

0xc82d,	// (0x0002be74) popup_snote_single_graphic_window

0xc82d,	// (0x0002be74) popup_snote_single_text_window_ParamLimits

0xc82d,	// (0x0002be74) popup_snote_single_text_window

0x2055,	// (0x0002169c) popup_sub_window_general

0x2185,	// (0x000217cc) popup_window_general_ParamLimits

0x2185,	// (0x000217cc) popup_window_general

0x4e5e,	// (0x000244a5) power_save_pane

0xc10d,	// (0x0002b754) control_pane_g1_ParamLimits

0xc10d,	// (0x0002b754) control_pane_g1

0xc136,	// (0x0002b77d) control_pane_g2_ParamLimits

0xc136,	// (0x0002b77d) control_pane_g2

0x4dc1,	// (0x00024408) control_pane_g3_ParamLimits

0x4dc1,	// (0x00024408) control_pane_g3

0x0007,

0xf788,	// (0x0002edcf) control_pane_g_ParamLimits

0xf788,	// (0x0002edcf) control_pane_g

0xc177,	// (0x0002b7be) control_pane_t1_ParamLimits

0xc177,	// (0x0002b7be) control_pane_t1

0xc1d5,	// (0x0002b81c) control_pane_t2_ParamLimits

0xc1d5,	// (0x0002b81c) control_pane_t2

0x0002,

0xf799,	// (0x0002ede0) control_pane_t_ParamLimits

0xf799,	// (0x0002ede0) control_pane_t

0xd528,	// (0x0002cb6f) navi_navi_volume_pane_cp1

0xd530,	// (0x0002cb77) status_small_icon_pane

0x4cf6,	// (0x0002433d) status_small_pane_g1_ParamLimits

0x4cf6,	// (0x0002433d) status_small_pane_g1

0xd538,	// (0x0002cb7f) status_small_pane_g2_ParamLimits

0xd538,	// (0x0002cb7f) status_small_pane_g2

0xd544,	// (0x0002cb8b) status_small_pane_g3_ParamLimits

0xd544,	// (0x0002cb8b) status_small_pane_g3

0xd550,	// (0x0002cb97) status_small_pane_g4_ParamLimits

0xd550,	// (0x0002cb97) status_small_pane_g4

0xd55c,	// (0x0002cba3) status_small_pane_g5_ParamLimits

0xd55c,	// (0x0002cba3) status_small_pane_g5

0xd56a,	// (0x0002cbb1) status_small_pane_g6_ParamLimits

0xd56a,	// (0x0002cbb1) status_small_pane_g6

0x0007,

0xf777,	// (0x0002edbe) status_small_pane_g_ParamLimits

0xf777,	// (0x0002edbe) status_small_pane_g

0xd599,	// (0x0002cbe0) status_small_pane_t1

0xd5bb,	// (0x0002cc02) status_small_wait_pane_ParamLimits

0xd5bb,	// (0x0002cc02) status_small_wait_pane

0xd3cf,	// (0x0002ca16) aid_levels_signal_ParamLimits

0xd3cf,	// (0x0002ca16) aid_levels_signal

0xd3e7,	// (0x0002ca2e) signal_pane_g1_ParamLimits

0xd3e7,	// (0x0002ca2e) signal_pane_g1

0xd402,	// (0x0002ca49) signal_pane_g2_ParamLimits

0xd402,	// (0x0002ca49) signal_pane_g2

0x0003,

0xf708,	// (0x0002ed4f) signal_pane_g_ParamLimits

0xf708,	// (0x0002ed4f) signal_pane_g

0x45da,	// (0x00023c21) context_pane_g1

0xc041,	// (0x0002b688) title_pane_g1

0xc078,	// (0x0002b6bf) title_pane_t1

0x35c9,	// (0x00022c10) title_pane_t2

0x35ef,	// (0x00022c36) title_pane_t3

0x0002,

0xf557,	// (0x0002eb9e) title_pane_t

0xd9a9,	// (0x0002cff0) aid_levels_battery_ParamLimits

0xd9a9,	// (0x0002cff0) aid_levels_battery

0xd9c5,	// (0x0002d00c) battery_pane_g1_ParamLimits

0xd9c5,	// (0x0002d00c) battery_pane_g1

0xd9e2,	// (0x0002d029) battery_pane_g2_ParamLimits

0xd9e2,	// (0x0002d029) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002edf2) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002edf2) battery_pane_g

0xdbef,	// (0x0002d236) uni_indicator_pane_g1

0xdc05,	// (0x0002d24c) uni_indicator_pane_g2

0xdc1b,	// (0x0002d262) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002ef5c) uni_indicator_pane_g

0x4978,	// (0x00023fbf) navi_icon_pane_ParamLimits

0x4978,	// (0x00023fbf) navi_icon_pane

0x48b6,	// (0x00023efd) navi_midp_pane

0x4994,	// (0x00023fdb) navi_navi_pane

0x499e,	// (0x00023fe5) navi_text_pane_ParamLimits

0x499e,	// (0x00023fe5) navi_text_pane

0x3517,	// (0x00022b5e) status_small_wait_pane_g1

0x3a1e,	// (0x00023065) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002ef57) status_small_wait_pane_g

0x6207,	// (0x0002584e) navi_navi_icon_text_pane

0x620f,	// (0x00025856) navi_navi_pane_g1_ParamLimits

0x620f,	// (0x00025856) navi_navi_pane_g1

0x6221,	// (0x00025868) navi_navi_pane_g2_ParamLimits

0x6221,	// (0x00025868) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002ef25) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002ef25) navi_navi_pane_g

0x6233,	// (0x0002587a) navi_navi_tabs_pane

0x623c,	// (0x00025883) navi_navi_text_pane

0x6207,	// (0x0002584e) navi_navi_volume_pane

0x61e3,	// (0x0002582a) navi_text_pane_t1

0x61d7,	// (0x0002581e) navi_icon_pane_g1

0x612a,	// (0x00025771) navi_navi_text_pane_t1

0x240f,	// (0x00021a56) navi_navi_volume_pane_g1

0x2417,	// (0x00021a5e) volume_small_pane

0x6090,	// (0x000256d7) navi_navi_icon_text_pane_g1

0x6098,	// (0x000256df) navi_navi_icon_text_pane_t1

0x4994,	// (0x00023fdb) navi_tabs_2_long_pane

0x4994,	// (0x00023fdb) navi_tabs_2_pane

0x4994,	// (0x00023fdb) navi_tabs_3_long_pane

0x4994,	// (0x00023fdb) navi_tabs_3_pane

0x4994,	// (0x00023fdb) navi_tabs_4_pane

0x23ef,	// (0x00021a36) tabs_2_active_pane_ParamLimits

0x23ef,	// (0x00021a36) tabs_2_active_pane

0x23ff,	// (0x00021a46) tabs_2_passive_pane_ParamLimits

0x23ff,	// (0x00021a46) tabs_2_passive_pane

0x23bd,	// (0x00021a04) tabs_3_active_pane_ParamLimits

0x23bd,	// (0x00021a04) tabs_3_active_pane

0x23cd,	// (0x00021a14) tabs_3_passive_pane_ParamLimits

0x23cd,	// (0x00021a14) tabs_3_passive_pane

0x23de,	// (0x00021a25) tabs_3_passive_pane_cp_ParamLimits

0x23de,	// (0x00021a25) tabs_3_passive_pane_cp

0x2379,	// (0x000219c0) tabs_4_active_pane_ParamLimits

0x2379,	// (0x000219c0) tabs_4_active_pane

0x238a,	// (0x000219d1) tabs_4_passive_pane_ParamLimits

0x238a,	// (0x000219d1) tabs_4_passive_pane

0x239b,	// (0x000219e2) tabs_4_passive_pane_cp_ParamLimits

0x239b,	// (0x000219e2) tabs_4_passive_pane_cp

0x23ac,	// (0x000219f3) tabs_4_passive_pane_cp2_ParamLimits

0x23ac,	// (0x000219f3) tabs_4_passive_pane_cp2

0x2355,	// (0x0002199c) tabs_2_long_active_pane_ParamLimits

0x2355,	// (0x0002199c) tabs_2_long_active_pane

0x2367,	// (0x000219ae) tabs_2_long_passive_pane_ParamLimits

0x2367,	// (0x000219ae) tabs_2_long_passive_pane

0x2316,	// (0x0002195d) tabs_3_long_active_pane_ParamLimits

0x2316,	// (0x0002195d) tabs_3_long_active_pane

0x2329,	// (0x00021970) tabs_3_long_passive_pane_ParamLimits

0x2329,	// (0x00021970) tabs_3_long_passive_pane

0x2342,	// (0x00021989) tabs_3_long_passive_pane_cp_ParamLimits

0x2342,	// (0x00021989) tabs_3_long_passive_pane_cp

0x22bc,	// (0x00021903) volume_small_pane_g1

0x22c5,	// (0x0002190c) volume_small_pane_g2

0x22ce,	// (0x00021915) volume_small_pane_g3

0x22d7,	// (0x0002191e) volume_small_pane_g4

0x22e0,	// (0x00021927) volume_small_pane_g5

0x22e9,	// (0x00021930) volume_small_pane_g6

0x22f2,	// (0x00021939) volume_small_pane_g7

0x22fb,	// (0x00021942) volume_small_pane_g8

0x2304,	// (0x0002194b) volume_small_pane_g9

0x230d,	// (0x00021954) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002eef1) volume_small_pane_g

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp2_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp2

0x360f,	// (0x00022c56) tabs_3_active_pane_g1

0xcff6,	// (0x0002c63d) tabs_3_active_pane_t1

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp2_ParamLimits

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp2

0x360f,	// (0x00022c56) tabs_3_passive_pane_g1

0xcff6,	// (0x0002c63d) tabs_3_passive_pane_t1

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp3_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp3

0x3629,	// (0x00022c70) tabs_4_active_pane_g1

0xd008,	// (0x0002c64f) tabs_4_active_pane_t1

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp3_ParamLimits

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp3

0x3629,	// (0x00022c70) tabs_4_1_passive_pane_g1

0xd008,	// (0x0002c64f) tabs_4_1_passive_pane_t1

0x4e44,	// (0x0002448b) list_highlight_pane_cp2

0xdca3,	// (0x0002d2ea) list_set_pane_ParamLimits

0xdca3,	// (0x0002d2ea) list_set_pane

0xdd3d,	// (0x0002d384) main_pane_set_t1_ParamLimits

0xdd3d,	// (0x0002d384) main_pane_set_t1

0xdd5d,	// (0x0002d3a4) main_pane_set_t2_ParamLimits

0xdd5d,	// (0x0002d3a4) main_pane_set_t2

0xdd71,	// (0x0002d3b8) main_pane_set_t3_ParamLimits

0xdd71,	// (0x0002d3b8) main_pane_set_t3

0xdd83,	// (0x0002d3ca) main_pane_set_t4_ParamLimits

0xdd83,	// (0x0002d3ca) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002efc1) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002efc1) main_pane_set_t

0xdd95,	// (0x0002d3dc) setting_code_pane

0xdd9f,	// (0x0002d3e6) setting_slider_graphic_pane

0xdd9f,	// (0x0002d3e6) setting_slider_pane

0xdd9f,	// (0x0002d3e6) setting_text_pane

0xdd9f,	// (0x0002d3e6) setting_volume_pane

0x1579,	// (0x00020bc0) volume_set_pane

0x3601,	// (0x00022c48) bg_set_opt_pane_cp

0x1581,	// (0x00020bc8) setting_slider_pane_t1

0x159a,	// (0x00020be1) setting_slider_pane_t2

0x15b4,	// (0x00020bfb) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002eba5) setting_slider_pane_t

0x15cc,	// (0x00020c13) slider_set_pane

0x3521,	// (0x00022b68) bg_set_opt_pane_cp2

0x3643,	// (0x00022c8a) setting_slider_graphic_pane_g1

0x15e2,	// (0x00020c29) setting_slider_graphic_pane_t1

0x15f2,	// (0x00020c39) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002ebac) setting_slider_graphic_pane_t

0x1602,	// (0x00020c49) slider_set_pane_cp

0x3521,	// (0x00022b68) input_focus_pane_cp1

0x6715,	// (0x00025d5c) list_set_text_pane

0x3517,	// (0x00022b5e) setting_text_pane_g1

0x3521,	// (0x00022b68) input_focus_pane_cp2

0x3517,	// (0x00022b5e) setting_code_pane_g1

0x364c,	// (0x00022c93) setting_code_pane_t1

0x0047,	// (0x0001f68e) set_text_pane_t1_ParamLimits

0x0047,	// (0x0001f68e) set_text_pane_t1

0x3ecb,	// (0x00023512) set_opt_bg_pane_g1

0x3ed3,	// (0x0002351a) set_opt_bg_pane_g2

0x66ef,	// (0x00025d36) set_opt_bg_pane_g3

0x3ee3,	// (0x0002352a) set_opt_bg_pane_g4

0x3eeb,	// (0x00023532) set_opt_bg_pane_g5

0x3ef3,	// (0x0002353a) set_opt_bg_pane_g6

0x66f9,	// (0x00025d40) set_opt_bg_pane_g7

0x6701,	// (0x00025d48) set_opt_bg_pane_g8

0x670b,	// (0x00025d52) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002efae) set_opt_bg_pane_g

0x66e2,	// (0x00025d29) slider_set_pane_g1

0x2484,	// (0x00021acb) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002ef9f) slider_set_pane_g

0x2420,	// (0x00021a67) volume_set_pane_g1

0x2428,	// (0x00021a6f) volume_set_pane_g2

0x2430,	// (0x00021a77) volume_set_pane_g3

0x2438,	// (0x00021a7f) volume_set_pane_g4

0x2440,	// (0x00021a87) volume_set_pane_g5

0x2448,	// (0x00021a8f) volume_set_pane_g6

0x2450,	// (0x00021a97) volume_set_pane_g7

0x2458,	// (0x00021a9f) volume_set_pane_g8

0x2460,	// (0x00021aa7) volume_set_pane_g9

0x2468,	// (0x00021aaf) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002ef77) volume_set_pane_g

0xd01a,	// (0x0002c661) indicator_pane_ParamLimits

0xd01a,	// (0x0002c661) indicator_pane

0xd042,	// (0x0002c689) main_idle_pane_g2_ParamLimits

0xd042,	// (0x0002c689) main_idle_pane_g2

0xd07a,	// (0x0002c6c1) main_pane_idle_g1_ParamLimits

0xd07a,	// (0x0002c6c1) main_pane_idle_g1

0x369b,	// (0x00022ce2) popup_clock_digital_analogue_window_ParamLimits

0x369b,	// (0x00022ce2) popup_clock_digital_analogue_window

0xd0a1,	// (0x0002c6e8) soft_indicator_pane_ParamLimits

0xd0a1,	// (0x0002c6e8) soft_indicator_pane

0xd0bb,	// (0x0002c702) wallpaper_pane_ParamLimits

0xd0bb,	// (0x0002c702) wallpaper_pane

0x3517,	// (0x00022b5e) wallpaper_pane_g1

0xd0cd,	// (0x0002c714) indicator_pane_g1_ParamLimits

0xd0cd,	// (0x0002c714) indicator_pane_g1

0x6b19,	// (0x00026160) navi_navi_icon_text_pane_srt_g1

0x36ed,	// (0x00022d34) soft_indicator_pane_t1

0x3707,	// (0x00022d4e) aid_ps_area_pane

0xd0e3,	// (0x0002c72a) aid_ps_clock_pane

0x3726,	// (0x00022d6d) aid_ps_indicator_pane

0x3732,	// (0x00022d79) indicator_ps_pane_ParamLimits

0x3732,	// (0x00022d79) indicator_ps_pane

0x3741,	// (0x00022d88) power_save_pane_g1_ParamLimits

0x3741,	// (0x00022d88) power_save_pane_g1

0x374d,	// (0x00022d94) power_save_pane_g2_ParamLimits

0x374d,	// (0x00022d94) power_save_pane_g2

0x118a,	// (0x000207d1) aid_navinavi_width_pane

0x3707,	// (0x00022d4e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002ebb1) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002ebb1) power_save_pane_g

0x375b,	// (0x00022da2) power_save_pane_t1_ParamLimits

0x375b,	// (0x00022da2) power_save_pane_t1

0xd0e3,	// (0x0002c72a) aid_ps_clock_pane_ParamLimits

0x3726,	// (0x00022d6d) aid_ps_indicator_pane_ParamLimits

0x376d,	// (0x00022db4) power_save_pane_t4_ParamLimits

0x376d,	// (0x00022db4) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002ebb6) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002ebb6) power_save_pane_t

0x3797,	// (0x00022dde) power_save_t3_ParamLimits

0x3797,	// (0x00022dde) power_save_t3

0x3782,	// (0x00022dc9) power_save_t2_ParamLimits

0x3782,	// (0x00022dc9) power_save_t2

0x37ac,	// (0x00022df3) indicator_ps_pane_g1

0xd0f1,	// (0x0002c738) ai_gene_pane_ParamLimits

0xd0f1,	// (0x0002c738) ai_gene_pane

0xd108,	// (0x0002c74f) ai_links_pane_ParamLimits

0xd108,	// (0x0002c74f) ai_links_pane

0xd120,	// (0x0002c767) indicator_pane_cp1_ParamLimits

0xd120,	// (0x0002c767) indicator_pane_cp1

0xd12f,	// (0x0002c776) main_pane_idle_g1_cp_ParamLimits

0xd12f,	// (0x0002c776) main_pane_idle_g1_cp

0x37e5,	// (0x00022e2c) popup_ai_links_title_window

0xd147,	// (0x0002c78e) soft_indicator_pane_cp1_ParamLimits

0xd147,	// (0x0002c78e) soft_indicator_pane_cp1

0x64d0,	// (0x00025b17) ai_links_pane_g1

0x64d9,	// (0x00025b20) grid_ai_links_pane

0xdbe6,	// (0x0002d22d) ai_gene_pane_1

0x64be,	// (0x00025b05) ai_gene_pane_2

0x64c7,	// (0x00025b0e) list_highlight_pane_cp4

0xdbc2,	// (0x0002d209) cell_ai_link_pane_ParamLimits

0xdbc2,	// (0x0002d209) cell_ai_link_pane

0x648f,	// (0x00025ad6) cell_ai_link_pane_g1

0x3a1e,	// (0x00023065) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002ef52) cell_ai_link_pane_g

0x3521,	// (0x00022b68) grid_highlight_cp2

0x3521,	// (0x00022b68) bg_popup_sub_pane_cp1

0x3808,	// (0x00022e4f) popup_ai_links_title_window_t1

0x63dd,	// (0x00025a24) ai_gene_pane_1_g1_ParamLimits

0x63dd,	// (0x00025a24) ai_gene_pane_1_g1

0x63e9,	// (0x00025a30) ai_gene_pane_1_g2_ParamLimits

0x63e9,	// (0x00025a30) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002ef48) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002ef48) ai_gene_pane_1_g

0x63f6,	// (0x00025a3d) ai_gene_pane_1_t1_ParamLimits

0x63f6,	// (0x00025a3d) ai_gene_pane_1_t1

0x642a,	// (0x00025a71) grid_ai_soft_ind_pane

0x63c8,	// (0x00025a0f) ai_gene_pane_2_t1_ParamLimits

0x63c8,	// (0x00025a0f) ai_gene_pane_2_t1

0xd15b,	// (0x0002c7a2) main_pane_empty_t1_ParamLimits

0xd15b,	// (0x0002c7a2) main_pane_empty_t1

0xd173,	// (0x0002c7ba) main_pane_empty_t2_ParamLimits

0xd173,	// (0x0002c7ba) main_pane_empty_t2

0xd188,	// (0x0002c7cf) main_pane_empty_t3_ParamLimits

0xd188,	// (0x0002c7cf) main_pane_empty_t3

0xd19a,	// (0x0002c7e1) main_pane_empty_t4_ParamLimits

0xd19a,	// (0x0002c7e1) main_pane_empty_t4

0xd1ac,	// (0x0002c7f3) main_pane_empty_t5_ParamLimits

0xd1ac,	// (0x0002c7f3) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002ebbb) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002ebbb) main_pane_empty_t

0x3f1c,	// (0x00023563) bg_popup_window_pane_ParamLimits

0x3f1c,	// (0x00023563) bg_popup_window_pane

0x6138,	// (0x0002577f) find_popup_pane_cp2_ParamLimits

0x6138,	// (0x0002577f) find_popup_pane_cp2

0x6144,	// (0x0002578b) heading_pane_ParamLimits

0x6144,	// (0x0002578b) heading_pane

0x3521,	// (0x00022b68) bg_popup_sub_pane

0xdb1b,	// (0x0002d162) bg_popup_window_pane_g1_ParamLimits

0xdb1b,	// (0x0002d162) bg_popup_window_pane_g1

0xdb2a,	// (0x0002d171) bg_popup_window_pane_g2_ParamLimits

0xdb2a,	// (0x0002d171) bg_popup_window_pane_g2

0xdb36,	// (0x0002d17d) bg_popup_window_pane_g3_ParamLimits

0xdb36,	// (0x0002d17d) bg_popup_window_pane_g3

0xdb42,	// (0x0002d189) bg_popup_window_pane_g4_ParamLimits

0xdb42,	// (0x0002d189) bg_popup_window_pane_g4

0xdb51,	// (0x0002d198) bg_popup_window_pane_g5_ParamLimits

0xdb51,	// (0x0002d198) bg_popup_window_pane_g5

0xdb61,	// (0x0002d1a8) bg_popup_window_pane_g6_ParamLimits

0xdb61,	// (0x0002d1a8) bg_popup_window_pane_g6

0xdb6d,	// (0x0002d1b4) bg_popup_window_pane_g7_ParamLimits

0xdb6d,	// (0x0002d1b4) bg_popup_window_pane_g7

0xdb7c,	// (0x0002d1c3) bg_popup_window_pane_g8_ParamLimits

0xdb7c,	// (0x0002d1c3) bg_popup_window_pane_g8

0xdb8b,	// (0x0002d1d2) bg_popup_window_pane_g9_ParamLimits

0xdb8b,	// (0x0002d1d2) bg_popup_window_pane_g9

0x611e,	// (0x00025765) bg_popup_window_pane_g10_ParamLimits

0x611e,	// (0x00025765) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002ef10) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002ef10) bg_popup_window_pane_g

0x6047,	// (0x0002568e) bg_popup_heading_pane_ParamLimits

0x6047,	// (0x0002568e) bg_popup_heading_pane

0x250c,	// (0x00021b53) tabs_4_passive_pane_cp_srt_ParamLimits

0x250c,	// (0x00021b53) tabs_4_passive_pane_cp_srt

0x251e,	// (0x00021b65) tabs_4_passive_pane_srt_ParamLimits

0x605b,	// (0x000256a2) heading_pane_g2

0x251e,	// (0x00021b65) tabs_4_passive_pane_srt

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp3_srt_ParamLimits

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp3_srt

0x6063,	// (0x000256aa) heading_pane_t1_ParamLimits

0x6063,	// (0x000256aa) heading_pane_t1

0x607a,	// (0x000256c1) heading_pane_t2_ParamLimits

0x607a,	// (0x000256c1) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002ef0b) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002ef0b) heading_pane_t

0x5b74,	// (0x000251bb) bg_popup_heading_pane_g1

0x5c23,	// (0x0002526a) bg_popup_heading_pane_g2

0x5c2d,	// (0x00025274) bg_popup_heading_pane_g3

0x5c37,	// (0x0002527e) bg_popup_heading_pane_g4

0x5c41,	// (0x00025288) bg_popup_heading_pane_g5

0x5c4b,	// (0x00025292) bg_popup_heading_pane_g6

0x5c53,	// (0x0002529a) bg_popup_heading_pane_g7

0x5c5b,	// (0x000252a2) bg_popup_heading_pane_g8

0x5c65,	// (0x000252ac) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002eec7) bg_popup_heading_pane_g

0x534e,	// (0x00024995) bg_popup_sub_pane_g1

0x5356,	// (0x0002499d) bg_popup_sub_pane_g2

0x535e,	// (0x000249a5) bg_popup_sub_pane_g3

0x5366,	// (0x000249ad) bg_popup_sub_pane_g4

0x536e,	// (0x000249b5) bg_popup_sub_pane_g5

0x5376,	// (0x000249bd) bg_popup_sub_pane_g6

0x537e,	// (0x000249c5) bg_popup_sub_pane_g7

0x5386,	// (0x000249cd) bg_popup_sub_pane_g8

0x538e,	// (0x000249d5) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002eea1) bg_popup_sub_pane_g

0x387c,	// (0x00022ec3) bg_popup_window_pane_cp5_ParamLimits

0x387c,	// (0x00022ec3) bg_popup_window_pane_cp5

0x3898,	// (0x00022edf) popup_note_window_g1_ParamLimits

0x3898,	// (0x00022edf) popup_note_window_g1

0x38a4,	// (0x00022eeb) popup_note_window_t1_ParamLimits

0x38a4,	// (0x00022eeb) popup_note_window_t1

0x38ba,	// (0x00022f01) popup_note_window_t2_ParamLimits

0x38ba,	// (0x00022f01) popup_note_window_t2

0x38d0,	// (0x00022f17) popup_note_window_t3_ParamLimits

0x38d0,	// (0x00022f17) popup_note_window_t3

0x38e6,	// (0x00022f2d) popup_note_window_t4_ParamLimits

0x38e6,	// (0x00022f2d) popup_note_window_t4

0x390e,	// (0x00022f55) popup_note_window_t5_ParamLimits

0x390e,	// (0x00022f55) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002ebc6) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002ebc6) popup_note_window_t

0x3932,	// (0x00022f79) bg_popup_window_pane_cp6_ParamLimits

0x3932,	// (0x00022f79) bg_popup_window_pane_cp6

0x5af0,	// (0x00025137) popup_note_image_window_g1_ParamLimits

0x5af0,	// (0x00025137) popup_note_image_window_g1

0x5afc,	// (0x00025143) popup_note_image_window_g2_ParamLimits

0x5afc,	// (0x00025143) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002ee95) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002ee95) popup_note_image_window_g

0x5b15,	// (0x0002515c) popup_note_image_window_t1_ParamLimits

0x5b15,	// (0x0002515c) popup_note_image_window_t1

0x5b2e,	// (0x00025175) popup_note_image_window_t2_ParamLimits

0x5b2e,	// (0x00025175) popup_note_image_window_t2

0x5b47,	// (0x0002518e) popup_note_image_window_t3_ParamLimits

0x5b47,	// (0x0002518e) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002ee9a) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002ee9a) popup_note_image_window_t

0x59b1,	// (0x00024ff8) bg_popup_window_pane_cp7_ParamLimits

0x59b1,	// (0x00024ff8) bg_popup_window_pane_cp7

0x59e1,	// (0x00025028) popup_note_wait_window_g1_ParamLimits

0x59e1,	// (0x00025028) popup_note_wait_window_g1

0x59ed,	// (0x00025034) popup_note_wait_window_g2_ParamLimits

0x59ed,	// (0x00025034) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002ee83) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002ee83) popup_note_wait_window_g

0x5a05,	// (0x0002504c) popup_note_wait_window_t1_ParamLimits

0x5a05,	// (0x0002504c) popup_note_wait_window_t1

0x5a2c,	// (0x00025073) popup_note_wait_window_t2_ParamLimits

0x5a2c,	// (0x00025073) popup_note_wait_window_t2

0x5a49,	// (0x00025090) popup_note_wait_window_t3_ParamLimits

0x5a49,	// (0x00025090) popup_note_wait_window_t3

0x5a5c,	// (0x000250a3) popup_note_wait_window_t4_ParamLimits

0x5a5c,	// (0x000250a3) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002ee8a) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002ee8a) popup_note_wait_window_t

0x5a81,	// (0x000250c8) wait_bar_pane_ParamLimits

0x5a81,	// (0x000250c8) wait_bar_pane

0x3521,	// (0x00022b68) wait_anim_pane

0x3521,	// (0x00022b68) wait_border_pane

0x3517,	// (0x00022b5e) wait_anim_pane_g1

0x3517,	// (0x00022b5e) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002ed4a) wait_anim_pane_g

0x5955,	// (0x00024f9c) wait_border_pane_g1

0x5960,	// (0x00024fa7) wait_border_pane_g2

0x5969,	// (0x00024fb0) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002ee7c) wait_border_pane_g

0x57b4,	// (0x00024dfb) bg_popup_window_pane_cp16_ParamLimits

0x57b4,	// (0x00024dfb) bg_popup_window_pane_cp16

0x58c0,	// (0x00024f07) indicator_popup_pane_cp4_ParamLimits

0x58c0,	// (0x00024f07) indicator_popup_pane_cp4

0x58d4,	// (0x00024f1b) popup_query_data_window_t1_ParamLimits

0x58d4,	// (0x00024f1b) popup_query_data_window_t1

0x58e6,	// (0x00024f2d) popup_query_data_window_t2_ParamLimits

0x58e6,	// (0x00024f2d) popup_query_data_window_t2

0x58ff,	// (0x00024f46) popup_query_data_window_t3_ParamLimits

0x58ff,	// (0x00024f46) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002ee75) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002ee75) popup_query_data_window_t

0x5919,	// (0x00024f60) query_popup_data_pane_ParamLimits

0x5919,	// (0x00024f60) query_popup_data_pane

0x592d,	// (0x00024f74) query_popup_data_pane_cp1_ParamLimits

0x592d,	// (0x00024f74) query_popup_data_pane_cp1

0x57b4,	// (0x00024dfb) bg_popup_window_pane_cp10_ParamLimits

0x57b4,	// (0x00024dfb) bg_popup_window_pane_cp10

0x57e6,	// (0x00024e2d) indicator_popup_pane_ParamLimits

0x57e6,	// (0x00024e2d) indicator_popup_pane

0x5808,	// (0x00024e4f) popup_query_code_window_t1_ParamLimits

0x5808,	// (0x00024e4f) popup_query_code_window_t1

0x5822,	// (0x00024e69) popup_query_code_window_t2_ParamLimits

0x5822,	// (0x00024e69) popup_query_code_window_t2

0x5877,	// (0x00024ebe) popup_query_code_window_t3_ParamLimits

0x5877,	// (0x00024ebe) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002ee6e) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002ee6e) popup_query_code_window_t

0x58a6,	// (0x00024eed) query_popup_pane_ParamLimits

0x58a6,	// (0x00024eed) query_popup_pane

0x3932,	// (0x00022f79) bg_popup_window_pane_cp15_ParamLimits

0x3932,	// (0x00022f79) bg_popup_window_pane_cp15

0x3950,	// (0x00022f97) indicator_popup_pane_cp1_ParamLimits

0x3950,	// (0x00022f97) indicator_popup_pane_cp1

0x3963,	// (0x00022faa) indicator_popup_pane_cp2_ParamLimits

0x3963,	// (0x00022faa) indicator_popup_pane_cp2

0x3976,	// (0x00022fbd) popup_query_data_code_window_g1_ParamLimits

0x3976,	// (0x00022fbd) popup_query_data_code_window_g1

0x3989,	// (0x00022fd0) popup_query_data_code_window_t1_ParamLimits

0x3989,	// (0x00022fd0) popup_query_data_code_window_t1

0x399b,	// (0x00022fe2) popup_query_data_code_window_t2_ParamLimits

0x399b,	// (0x00022fe2) popup_query_data_code_window_t2

0x39ad,	// (0x00022ff4) popup_query_data_code_window_t3_ParamLimits

0x39ad,	// (0x00022ff4) popup_query_data_code_window_t3

0x39c3,	// (0x0002300a) popup_query_data_code_window_t4_ParamLimits

0x39c3,	// (0x0002300a) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002ebd1) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002ebd1) popup_query_data_code_window_t

0x21ef,	// (0x00021836) list_single_midp_graphic_pane_g3

0x39db,	// (0x00023022) query_popup_data_pane_cp2_ParamLimits

0x39ee,	// (0x00023035) query_popup_pane_cp2_ParamLimits

0x39ee,	// (0x00023035) query_popup_pane_cp2

0x3521,	// (0x00022b68) bg_popup_window_pane_cp11

0x57ac,	// (0x00024df3) heading_pane_cp5

0x3ad9,	// (0x00023120) listscroll_popup_info_pane

0x3521,	// (0x00022b68) input_focus_pane_cp3

0x3a01,	// (0x00023048) query_popup_pane_t1

0x3a0f,	// (0x00023056) list_popup_info_pane_ParamLimits

0x3a0f,	// (0x00023056) list_popup_info_pane

0x3a1e,	// (0x00023065) listscroll_popup_info_pane_g1

0x3a26,	// (0x0002306d) scroll_pane_cp7

0x3a30,	// (0x00023077) popup_info_list_pane_t1_ParamLimits

0x3a30,	// (0x00023077) popup_info_list_pane_t1

0x3a4a,	// (0x00023091) popup_info_list_pane_t2_ParamLimits

0x3a4a,	// (0x00023091) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002ebda) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002ebda) popup_info_list_pane_t

0x3521,	// (0x00022b68) bg_popup_window_pane_cp12

0x6b33,	// (0x0002617a) find_popup_pane

0x3601,	// (0x00022c48) bg_popup_window_pane_cp3

0x3a64,	// (0x000230ab) heading_pane_cp3

0x3a70,	// (0x000230b7) listscroll_popup_graphic_pane

0x3521,	// (0x00022b68) bg_popup_window_pane_cp4

0xd20e,	// (0x0002c855) heading_pane_cp4

0x3ad9,	// (0x00023120) listscroll_popup_colour_pane

0x3ae1,	// (0x00023128) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3ae1,	// (0x00023128) cell_large_graphic_colour_none_popup_pane

0xd216,	// (0x0002c85d) grid_large_graphic_colour_popup_pane_ParamLimits

0xd216,	// (0x0002c85d) grid_large_graphic_colour_popup_pane

0x3b21,	// (0x00023168) listscroll_popup_colour_pane_g1_ParamLimits

0x3b21,	// (0x00023168) listscroll_popup_colour_pane_g1

0x3b38,	// (0x0002317f) listscroll_popup_colour_pane_g2_ParamLimits

0x3b38,	// (0x0002317f) listscroll_popup_colour_pane_g2

0x3b4f,	// (0x00023196) listscroll_popup_colour_pane_g3_ParamLimits

0x3b4f,	// (0x00023196) listscroll_popup_colour_pane_g3

0xd23a,	// (0x0002c881) listscroll_popup_colour_pane_g4_ParamLimits

0xd23a,	// (0x0002c881) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002ebdf) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002ebdf) listscroll_popup_colour_pane_g

0x3b73,	// (0x000231ba) scroll_pane_cp6_ParamLimits

0x3b73,	// (0x000231ba) scroll_pane_cp6

0xd24a,	// (0x0002c891) cell_large_graphic_colour_popup_pane_ParamLimits

0xd24a,	// (0x0002c891) cell_large_graphic_colour_popup_pane

0x3ba4,	// (0x000231eb) cell_large_graphic_colour_none_popup_pane_t1

0x3521,	// (0x00022b68) grid_highlight_pane_cp5

0x3bb3,	// (0x000231fa) cell_large_graphic_colour_popup_pane_g1

0x3bbb,	// (0x00023202) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002ebe8) cell_large_graphic_colour_popup_pane_g

0x3bc3,	// (0x0002320a) cell_large_graphic_colour_popup_pane_g2_copy1

0x3bcc,	// (0x00023213) grid_highlight_pane_cp4

0x3bd4,	// (0x0002321b) bg_popup_window_pane_cp8_ParamLimits

0x3bd4,	// (0x0002321b) bg_popup_window_pane_cp8

0x3bef,	// (0x00023236) popup_snote_single_text_window_g1_ParamLimits

0x3bef,	// (0x00023236) popup_snote_single_text_window_g1

0x3c01,	// (0x00023248) popup_snote_single_text_window_t1_ParamLimits

0x3c01,	// (0x00023248) popup_snote_single_text_window_t1

0x3c14,	// (0x0002325b) popup_snote_single_text_window_t2_ParamLimits

0x3c14,	// (0x0002325b) popup_snote_single_text_window_t2

0x3c27,	// (0x0002326e) popup_snote_single_text_window_t3_ParamLimits

0x3c27,	// (0x0002326e) popup_snote_single_text_window_t3

0x3c60,	// (0x000232a7) popup_snote_single_text_window_t4_ParamLimits

0x3c60,	// (0x000232a7) popup_snote_single_text_window_t4

0x3c94,	// (0x000232db) popup_snote_single_text_window_t5_ParamLimits

0x3c94,	// (0x000232db) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002ebed) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002ebed) popup_snote_single_text_window_t

0x3cc3,	// (0x0002330a) bg_popup_window_pane_cp9_ParamLimits

0x3cc3,	// (0x0002330a) bg_popup_window_pane_cp9

0x3bef,	// (0x00023236) popup_snote_single_graphic_window_g1_ParamLimits

0x3bef,	// (0x00023236) popup_snote_single_graphic_window_g1

0x3cd1,	// (0x00023318) popup_snote_single_graphic_window_g2_ParamLimits

0x3cd1,	// (0x00023318) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002ebf8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002ebf8) popup_snote_single_graphic_window_g

0x3cdd,	// (0x00023324) popup_snote_single_graphic_window_t1_ParamLimits

0x3cdd,	// (0x00023324) popup_snote_single_graphic_window_t1

0x3cf0,	// (0x00023337) popup_snote_single_graphic_window_t2_ParamLimits

0x3cf0,	// (0x00023337) popup_snote_single_graphic_window_t2

0x3d03,	// (0x0002334a) popup_snote_single_graphic_window_t3_ParamLimits

0x3d03,	// (0x0002334a) popup_snote_single_graphic_window_t3

0x3d3c,	// (0x00023383) popup_snote_single_graphic_window_t4_ParamLimits

0x3d3c,	// (0x00023383) popup_snote_single_graphic_window_t4

0x3d70,	// (0x000233b7) popup_snote_single_graphic_window_t5_ParamLimits

0x3d70,	// (0x000233b7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002ebfd) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002ebfd) popup_snote_single_graphic_window_t

0x6a77,	// (0x000260be) grid_graphic_popup_pane_ParamLimits

0x6a77,	// (0x000260be) grid_graphic_popup_pane

0x6a9f,	// (0x000260e6) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a9f,	// (0x000260e6) listscroll_popup_graphic_pane_g1

0xde97,	// (0x0002d4de) listscroll_popup_graphic_pane_g2_ParamLimits

0xde97,	// (0x0002d4de) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002efeb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002efeb) listscroll_popup_graphic_pane_g

0x6ac7,	// (0x0002610e) scroll_pane_cp5

0xde53,	// (0x0002d49a) cell_graphic_popup_pane_ParamLimits

0xde53,	// (0x0002d49a) cell_graphic_popup_pane

0x69f5,	// (0x0002603c) cell_graphic_popup_pane_g1

0x69fd,	// (0x00026044) cell_graphic_popup_pane_g2

0x3bc3,	// (0x0002320a) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002efe4) cell_graphic_popup_pane_g

0x6a06,	// (0x0002604d) cell_graphic_popup_pane_t2

0x3bcc,	// (0x00023213) grid_highlight_pane_cp3

0x3db1,	// (0x000233f8) list_gen_pane_ParamLimits

0x3db1,	// (0x000233f8) list_gen_pane

0x3de3,	// (0x0002342a) scroll_pane

0xde0a,	// (0x0002d451) bg_list_pane_g1_ParamLimits

0xde0a,	// (0x0002d451) bg_list_pane_g1

0x696a,	// (0x00025fb1) bg_list_pane_g2_ParamLimits

0x696a,	// (0x00025fb1) bg_list_pane_g2

0x697f,	// (0x00025fc6) bg_list_pane_g3_ParamLimits

0x697f,	// (0x00025fc6) bg_list_pane_g3

0x6993,	// (0x00025fda) bg_list_pane_g4_ParamLimits

0x6993,	// (0x00025fda) bg_list_pane_g4

0xde27,	// (0x0002d46e) bg_list_pane_g5_ParamLimits

0xde27,	// (0x0002d46e) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002efd9) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002efd9) bg_list_pane_g

0xddd2,	// (0x0002d419) list_double2_graphic_large_graphic_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double2_graphic_large_graphic_pane

0xddd2,	// (0x0002d419) list_double2_graphic_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double2_graphic_pane

0xddd2,	// (0x0002d419) list_double2_large_graphic_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double2_large_graphic_pane

0xddd2,	// (0x0002d419) list_double2_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double2_pane

0xddd2,	// (0x0002d419) list_double_graphic_heading_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_graphic_heading_pane

0xddd2,	// (0x0002d419) list_double_graphic_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_graphic_pane

0xddd2,	// (0x0002d419) list_double_heading_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_heading_pane

0xddd2,	// (0x0002d419) list_double_large_graphic_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_large_graphic_pane

0xddd2,	// (0x0002d419) list_double_number_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_number_pane

0xddd2,	// (0x0002d419) list_double_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_pane

0xddd2,	// (0x0002d419) list_double_time_pane_ParamLimits

0xddd2,	// (0x0002d419) list_double_time_pane

0xddd2,	// (0x0002d419) list_setting_number_pane_ParamLimits

0xddd2,	// (0x0002d419) list_setting_number_pane

0xddd2,	// (0x0002d419) list_setting_pane_ParamLimits

0xddd2,	// (0x0002d419) list_setting_pane

0xdde4,	// (0x0002d42b) list_single_2graphic_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_2graphic_pane

0xdde4,	// (0x0002d42b) list_single_graphic_heading_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_graphic_heading_pane

0xdde4,	// (0x0002d42b) list_single_graphic_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_graphic_pane

0xdde4,	// (0x0002d42b) list_single_heading_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_heading_pane

0xdde4,	// (0x0002d42b) list_single_large_graphic_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_large_graphic_pane

0xdde4,	// (0x0002d42b) list_single_number_heading_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_number_heading_pane

0xdde4,	// (0x0002d42b) list_single_number_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_number_pane

0xdde4,	// (0x0002d42b) list_single_pane_ParamLimits

0xdde4,	// (0x0002d42b) list_single_pane

0x3521,	// (0x00022b68) list_highlight_pane_cp1

0x0824,	// (0x0001fe6b) list_single_pane_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_pane_g1

0x0830,	// (0x0001fe77) list_single_pane_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_pane_g

0x0b38,	// (0x0002017f) list_single_pane_t1_ParamLimits

0x0b38,	// (0x0002017f) list_single_pane_t1

0x0824,	// (0x0001fe6b) list_single_number_pane_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_number_pane_g1

0x0830,	// (0x0001fe77) list_single_number_pane_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_number_pane_g

0x0882,	// (0x0001fec9) list_single_number_pane_t1_ParamLimits

0x0882,	// (0x0001fec9) list_single_number_pane_t1

0xbb9e,	// (0x0002b1e5) list_single_number_pane_t2_ParamLimits

0xbb9e,	// (0x0002b1e5) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002ef9a) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002ef9a) list_single_number_pane_t

0xb588,	// (0x0002abcf) list_single_graphic_pane_g1_ParamLimits

0xb588,	// (0x0002abcf) list_single_graphic_pane_g1

0x0824,	// (0x0001fe6b) list_single_graphic_pane_g2_ParamLimits

0x0824,	// (0x0001fe6b) list_single_graphic_pane_g2

0x0830,	// (0x0001fe77) list_single_graphic_pane_g3_ParamLimits

0x0830,	// (0x0001fe77) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002ec08) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002ec08) list_single_graphic_pane_g

0xb594,	// (0x0002abdb) list_single_graphic_pane_t1_ParamLimits

0xb594,	// (0x0002abdb) list_single_graphic_pane_t1

0x0824,	// (0x0001fe6b) list_single_heading_pane_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_heading_pane_g1

0x0830,	// (0x0001fe77) list_single_heading_pane_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_heading_pane_g

0xb5aa,	// (0x0002abf1) list_single_heading_pane_t1_ParamLimits

0xb5aa,	// (0x0002abf1) list_single_heading_pane_t1

0xb5c0,	// (0x0002ac07) list_single_heading_pane_t2_ParamLimits

0xb5c0,	// (0x0002ac07) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002ec14) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002ec14) list_single_heading_pane_t

0x0824,	// (0x0001fe6b) list_single_number_heading_pane_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_number_heading_pane_g1

0x0830,	// (0x0001fe77) list_single_number_heading_pane_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_number_heading_pane_g

0xb5aa,	// (0x0002abf1) list_single_number_heading_pane_t1_ParamLimits

0xb5aa,	// (0x0002abf1) list_single_number_heading_pane_t1

0xb5d2,	// (0x0002ac19) list_single_number_heading_pane_t2_ParamLimits

0xb5d2,	// (0x0002ac19) list_single_number_heading_pane_t2

0x0b12,	// (0x00020159) list_single_number_heading_pane_t3_ParamLimits

0x0b12,	// (0x00020159) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002ec19) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002ec19) list_single_number_heading_pane_t

0x0818,	// (0x0001fe5f) list_single_graphic_heading_pane_g1_ParamLimits

0x0818,	// (0x0001fe5f) list_single_graphic_heading_pane_g1

0xb5e4,	// (0x0002ac2b) list_single_graphic_heading_pane_g4_ParamLimits

0xb5e4,	// (0x0002ac2b) list_single_graphic_heading_pane_g4

0x0830,	// (0x0001fe77) list_single_graphic_heading_pane_g5_ParamLimits

0x0830,	// (0x0001fe77) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002ec20) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002ec20) list_single_graphic_heading_pane_g

0xb5aa,	// (0x0002abf1) list_single_graphic_heading_pane_t1_ParamLimits

0xb5aa,	// (0x0002abf1) list_single_graphic_heading_pane_t1

0xb5f5,	// (0x0002ac3c) list_single_graphic_heading_pane_t2_ParamLimits

0xb5f5,	// (0x0002ac3c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002ec27) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002ec27) list_single_graphic_heading_pane_t

0x0b4e,	// (0x00020195) list_single_large_graphic_pane_g1_ParamLimits

0x0b4e,	// (0x00020195) list_single_large_graphic_pane_g1

0x0824,	// (0x0001fe6b) list_single_large_graphic_pane_g2_ParamLimits

0x0824,	// (0x0001fe6b) list_single_large_graphic_pane_g2

0x0830,	// (0x0001fe77) list_single_large_graphic_pane_g3_ParamLimits

0x0830,	// (0x0001fe77) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002ec2c) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002ec2c) list_single_large_graphic_pane_g

0x5960,	// (0x00024fa7) wait_border_pane_g2_copy1

0xb607,	// (0x0002ac4e) list_single_large_graphic_pane_g4_cp2

0x0b5a,	// (0x000201a1) list_single_large_graphic_pane_t1_ParamLimits

0x0b5a,	// (0x000201a1) list_single_large_graphic_pane_t1

0xb60f,	// (0x0002ac56) list_double_pane_g1_ParamLimits

0xb60f,	// (0x0002ac56) list_double_pane_g1

0xb61b,	// (0x0002ac62) list_double_pane_g2_ParamLimits

0xb61b,	// (0x0002ac62) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002ec33) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002ec33) list_double_pane_g

0xb627,	// (0x0002ac6e) list_double_pane_t1_ParamLimits

0xb627,	// (0x0002ac6e) list_double_pane_t1

0xb63d,	// (0x0002ac84) list_double_pane_t2_ParamLimits

0xb63d,	// (0x0002ac84) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002ec38) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002ec38) list_double_pane_t

0xb64f,	// (0x0002ac96) list_double2_pane_g1_ParamLimits

0xb64f,	// (0x0002ac96) list_double2_pane_g1

0xb660,	// (0x0002aca7) list_double2_pane_g2_ParamLimits

0xb660,	// (0x0002aca7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002ec3d) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002ec3d) list_double2_pane_g

0xb66c,	// (0x0002acb3) list_double2_pane_t1_ParamLimits

0xb66c,	// (0x0002acb3) list_double2_pane_t1

0xb682,	// (0x0002acc9) list_double2_pane_t2_ParamLimits

0xb682,	// (0x0002acc9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002ec42) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002ec42) list_double2_pane_t

0xb60f,	// (0x0002ac56) list_double_number_pane_g1_ParamLimits

0xb60f,	// (0x0002ac56) list_double_number_pane_g1

0xb61b,	// (0x0002ac62) list_double_number_pane_g2_ParamLimits

0xb61b,	// (0x0002ac62) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002ec33) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002ec33) list_double_number_pane_g

0xb694,	// (0x0002acdb) list_double_number_pane_t1_ParamLimits

0xb694,	// (0x0002acdb) list_double_number_pane_t1

0xb6a6,	// (0x0002aced) list_double_number_pane_t2_ParamLimits

0xb6a6,	// (0x0002aced) list_double_number_pane_t2

0xb6bc,	// (0x0002ad03) list_double_number_pane_t3_ParamLimits

0xb6bc,	// (0x0002ad03) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002ec47) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002ec47) list_double_number_pane_t

0xb6ce,	// (0x0002ad15) list_double_graphic_pane_g1_ParamLimits

0xb6ce,	// (0x0002ad15) list_double_graphic_pane_g1

0xb6da,	// (0x0002ad21) list_double_graphic_pane_g2_ParamLimits

0xb6da,	// (0x0002ad21) list_double_graphic_pane_g2

0xb6e9,	// (0x0002ad30) list_double_graphic_pane_g3_ParamLimits

0xb6e9,	// (0x0002ad30) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002ec4e) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002ec4e) list_double_graphic_pane_g

0xb701,	// (0x0002ad48) list_double_graphic_pane_t1_ParamLimits

0xb701,	// (0x0002ad48) list_double_graphic_pane_t1

0xb717,	// (0x0002ad5e) list_double_graphic_pane_t2_ParamLimits

0xb717,	// (0x0002ad5e) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002ec57) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002ec57) list_double_graphic_pane_t

0x0390,	// (0x0001f9d7) list_double2_graphic_pane_g1_ParamLimits

0x0390,	// (0x0001f9d7) list_double2_graphic_pane_g1

0x0df7,	// (0x0002043e) list_double2_graphic_pane_g2_ParamLimits

0x0df7,	// (0x0002043e) list_double2_graphic_pane_g2

0xb660,	// (0x0002aca7) list_double2_graphic_pane_g3_ParamLimits

0xb660,	// (0x0002aca7) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002ec5c) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002ec5c) list_double2_graphic_pane_g

0xb729,	// (0x0002ad70) list_double2_graphic_pane_t1_ParamLimits

0xb729,	// (0x0002ad70) list_double2_graphic_pane_t1

0xb73f,	// (0x0002ad86) list_double2_graphic_pane_t2_ParamLimits

0xb73f,	// (0x0002ad86) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002ec63) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002ec63) list_double2_graphic_pane_t

0xb751,	// (0x0002ad98) list_double_large_graphic_pane_g1_ParamLimits

0xb751,	// (0x0002ad98) list_double_large_graphic_pane_g1

0xb770,	// (0x0002adb7) list_double_large_graphic_pane_g2_ParamLimits

0xb770,	// (0x0002adb7) list_double_large_graphic_pane_g2

0xb61b,	// (0x0002ac62) list_double_large_graphic_pane_g3_ParamLimits

0xb61b,	// (0x0002ac62) list_double_large_graphic_pane_g3

0xb781,	// (0x0002adc8) list_double_large_graphic_pane_g4_ParamLimits

0xb781,	// (0x0002adc8) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002ec68) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002ec68) list_double_large_graphic_pane_g

0xb794,	// (0x0002addb) list_double_large_graphic_pane_t1_ParamLimits

0xb794,	// (0x0002addb) list_double_large_graphic_pane_t1

0xb7ad,	// (0x0002adf4) list_double_large_graphic_pane_t2_ParamLimits

0xb7ad,	// (0x0002adf4) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ec73) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ec73) list_double_large_graphic_pane_t

0xb7bf,	// (0x0002ae06) list_double2_large_graphic_pane_g1_ParamLimits

0xb7bf,	// (0x0002ae06) list_double2_large_graphic_pane_g1

0xb64f,	// (0x0002ac96) list_double2_large_graphic_pane_g2_ParamLimits

0xb64f,	// (0x0002ac96) list_double2_large_graphic_pane_g2

0xb660,	// (0x0002aca7) list_double2_large_graphic_pane_g3_ParamLimits

0xb660,	// (0x0002aca7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ec78) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ec78) list_double2_large_graphic_pane_g

0xb7cb,	// (0x0002ae12) list_double2_large_graphic_pane_t1_ParamLimits

0xb7cb,	// (0x0002ae12) list_double2_large_graphic_pane_t1

0xb7e1,	// (0x0002ae28) list_double2_large_graphic_pane_t2_ParamLimits

0xb7e1,	// (0x0002ae28) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ec7f) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ec7f) list_double2_large_graphic_pane_t

0xb7f3,	// (0x0002ae3a) list_double_heading_pane_g1_ParamLimits

0xb7f3,	// (0x0002ae3a) list_double_heading_pane_g1

0x0165,	// (0x0001f7ac) list_double_heading_pane_g2_ParamLimits

0x0165,	// (0x0001f7ac) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002ec84) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002ec84) list_double_heading_pane_g

0xb804,	// (0x0002ae4b) list_double_heading_pane_t1_ParamLimits

0xb804,	// (0x0002ae4b) list_double_heading_pane_t1

0xb682,	// (0x0002acc9) list_double_heading_pane_t2_ParamLimits

0xb682,	// (0x0002acc9) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002ec89) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002ec89) list_double_heading_pane_t

0x0390,	// (0x0001f9d7) list_double_graphic_heading_pane_g1_ParamLimits

0x0390,	// (0x0001f9d7) list_double_graphic_heading_pane_g1

0xb7f3,	// (0x0002ae3a) list_double_graphic_heading_pane_g2_ParamLimits

0xb7f3,	// (0x0002ae3a) list_double_graphic_heading_pane_g2

0x0165,	// (0x0001f7ac) list_double_graphic_heading_pane_g3_ParamLimits

0x0165,	// (0x0001f7ac) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002ec8e) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002ec8e) list_double_graphic_heading_pane_g

0xb81a,	// (0x0002ae61) list_double_graphic_heading_pane_t1_ParamLimits

0xb81a,	// (0x0002ae61) list_double_graphic_heading_pane_t1

0xb73f,	// (0x0002ad86) list_double_graphic_heading_pane_t2_ParamLimits

0xb73f,	// (0x0002ad86) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002ec95) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002ec95) list_double_graphic_heading_pane_t

0xb770,	// (0x0002adb7) list_double_time_pane_g1_ParamLimits

0xb770,	// (0x0002adb7) list_double_time_pane_g1

0xb61b,	// (0x0002ac62) list_double_time_pane_g2_ParamLimits

0xb61b,	// (0x0002ac62) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002ec9a) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002ec9a) list_double_time_pane_g

0xb830,	// (0x0002ae77) list_double_time_pane_t1_ParamLimits

0xb830,	// (0x0002ae77) list_double_time_pane_t1

0xb846,	// (0x0002ae8d) list_double_time_pane_t2_ParamLimits

0xb846,	// (0x0002ae8d) list_double_time_pane_t2

0xb858,	// (0x0002ae9f) list_double_time_pane_t3_ParamLimits

0xb858,	// (0x0002ae9f) list_double_time_pane_t3

0xb86a,	// (0x0002aeb1) list_double_time_pane_t4_ParamLimits

0xb86a,	// (0x0002aeb1) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002ec9f) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002ec9f) list_double_time_pane_t

0xb87c,	// (0x0002aec3) list_setting_pane_g1_ParamLimits

0xb87c,	// (0x0002aec3) list_setting_pane_g1

0xb888,	// (0x0002aecf) list_setting_pane_g2_ParamLimits

0xb888,	// (0x0002aecf) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002eca8) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002eca8) list_setting_pane_g

0xb894,	// (0x0002aedb) list_setting_pane_t1_ParamLimits

0xb894,	// (0x0002aedb) list_setting_pane_t1

0xb8ae,	// (0x0002aef5) list_setting_pane_t2_ParamLimits

0xb8ae,	// (0x0002aef5) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002ecad) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002ecad) list_setting_pane_t

0xb8ed,	// (0x0002af34) set_value_pane_cp_ParamLimits

0xb8ed,	// (0x0002af34) set_value_pane_cp

0xb8f9,	// (0x0002af40) list_setting_number_pane_g1_ParamLimits

0xb8f9,	// (0x0002af40) list_setting_number_pane_g1

0xb905,	// (0x0002af4c) list_setting_number_pane_g2_ParamLimits

0xb905,	// (0x0002af4c) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002ecb4) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002ecb4) list_setting_number_pane_g

0xb911,	// (0x0002af58) list_setting_number_pane_t1_ParamLimits

0xb911,	// (0x0002af58) list_setting_number_pane_t1

0xb92a,	// (0x0002af71) list_setting_number_pane_t2_ParamLimits

0xb92a,	// (0x0002af71) list_setting_number_pane_t2

0xb944,	// (0x0002af8b) list_setting_number_pane_t3_ParamLimits

0xb944,	// (0x0002af8b) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002ecb9) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002ecb9) list_setting_number_pane_t

0xb8ed,	// (0x0002af34) set_value_pane_ParamLimits

0xb8ed,	// (0x0002af34) set_value_pane

0x3e17,	// (0x0002345e) bg_set_opt_pane_ParamLimits

0x3e17,	// (0x0002345e) bg_set_opt_pane

0x04f1,	// (0x0001fb38) set_value_pane_t1

0x3e38,	// (0x0002347f) slider_set_pane_cp3

0x3e41,	// (0x00023488) volume_small_pane_cp

0x3e4a,	// (0x00023491) list_form_gen_pane

0x3e53,	// (0x0002349a) scroll_pane_cp8

0xb987,	// (0x0002afce) form_field_data_pane_ParamLimits

0xb987,	// (0x0002afce) form_field_data_pane

0xb99e,	// (0x0002afe5) form_field_data_wide_pane_ParamLimits

0xb99e,	// (0x0002afe5) form_field_data_wide_pane

0xb9be,	// (0x0002b005) form_field_popup_pane_ParamLimits

0xb9be,	// (0x0002b005) form_field_popup_pane

0xb9d6,	// (0x0002b01d) form_field_popup_wide_pane_ParamLimits

0xb9d6,	// (0x0002b01d) form_field_popup_wide_pane

0x0585,	// (0x0001fbcc) form_field_slider_pane_ParamLimits

0x0585,	// (0x0001fbcc) form_field_slider_pane

0x0598,	// (0x0001fbdf) form_field_slider_wide_pane_ParamLimits

0x0598,	// (0x0001fbdf) form_field_slider_wide_pane

0x3e64,	// (0x000234ab) data_form_pane

0xb9f7,	// (0x0002b03e) form_field_data_pane_t1

0x3e70,	// (0x000234b7) input_focus_pane

0x05cd,	// (0x0001fc14) data_form_wide_pane

0x05ea,	// (0x0001fc31) form_field_data_wide_pane_t1

0x3be1,	// (0x00023228) input_focus_pane_cp6

0xba11,	// (0x0002b058) form_field_popup_pane_t1

0x3e70,	// (0x000234b7) input_focus_pane_cp7

0x3e9e,	// (0x000234e5) list_form_pane

0x062c,	// (0x0001fc73) form_field_popup_wide_pane_t1

0x3e70,	// (0x000234b7) input_focus_pane_cp8

0x3eaa,	// (0x000234f1) list_form_wide_pane

0xba33,	// (0x0002b07a) form_field_slider_pane_t1_ParamLimits

0xba33,	// (0x0002b07a) form_field_slider_pane_t1

0xba4b,	// (0x0002b092) form_field_slider_pane_t2_ParamLimits

0xba4b,	// (0x0002b092) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002ecc9) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002ecc9) form_field_slider_pane_t

0x387c,	// (0x00022ec3) input_focus_pane_cp9_ParamLimits

0x387c,	// (0x00022ec3) input_focus_pane_cp9

0xba60,	// (0x0002b0a7) slider_cont_pane_ParamLimits

0xba60,	// (0x0002b0a7) slider_cont_pane

0x3eb9,	// (0x00023500) form_field_slider_wide_pane_t1_ParamLimits

0x3eb9,	// (0x00023500) form_field_slider_wide_pane_t1

0x0688,	// (0x0001fccf) form_field_slider_wide_pane_t2_ParamLimits

0x0688,	// (0x0001fccf) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002ecce) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002ecce) form_field_slider_wide_pane_t

0x387c,	// (0x00022ec3) input_focus_pane_cp10_ParamLimits

0x387c,	// (0x00022ec3) input_focus_pane_cp10

0xba74,	// (0x0002b0bb) slider_cont_pane_cp1_ParamLimits

0xba74,	// (0x0002b0bb) slider_cont_pane_cp1

0xba88,	// (0x0002b0cf) slider_form_pane_cp

0x3ecb,	// (0x00023512) input_focus_pane_g1

0x3ed3,	// (0x0002351a) input_focus_pane_g2

0x3edb,	// (0x00023522) input_focus_pane_g3

0x3ee3,	// (0x0002352a) input_focus_pane_g4

0x3eeb,	// (0x00023532) input_focus_pane_g5

0x3ef3,	// (0x0002353a) input_focus_pane_g6

0x3efb,	// (0x00023542) input_focus_pane_g7

0x3f03,	// (0x0002354a) input_focus_pane_g8

0x3f0b,	// (0x00023552) input_focus_pane_g9

0x3517,	// (0x00022b5e) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002ecd3) input_focus_pane_g

0x5969,	// (0x00024fb0) wait_border_pane_g3_copy1

0xba90,	// (0x0002b0d7) data_form_pane_t1

0x3517,	// (0x00022b5e) wait_anim_pane_g1_copy1

0xbbb0,	// (0x0002b1f7) data_form_wide_pane_t1

0xbaaa,	// (0x0002b0f1) list_form_graphic_pane_cp_ParamLimits

0xbaaa,	// (0x0002b0f1) list_form_graphic_pane_cp

0x688a,	// (0x00025ed1) slider_form_pane_g1

0x6893,	// (0x00025eda) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002efca) slider_form_pane_g

0xbaaa,	// (0x0002b0f1) list_form_graphic_pane_ParamLimits

0xbaaa,	// (0x0002b0f1) list_form_graphic_pane

0x0706,	// (0x0001fd4d) list_form_graphic_pane_g1

0x070e,	// (0x0001fd55) list_form_graphic_pane_t1_ParamLimits

0x070e,	// (0x0001fd55) list_form_graphic_pane_t1

0x3601,	// (0x00022c48) list_highlight_pane_cp5_ParamLimits

0x3601,	// (0x00022c48) list_highlight_pane_cp5

0xbabc,	// (0x0002b103) find_pane_g1

0x3f13,	// (0x0002355a) input_find_pane

0xbac5,	// (0x0002b10c) input_find_pane_g1_ParamLimits

0xbac5,	// (0x0002b10c) input_find_pane_g1

0xbad1,	// (0x0002b118) input_find_pane_t1_ParamLimits

0xbad1,	// (0x0002b118) input_find_pane_t1

0xbae6,	// (0x0002b12d) input_find_pane_t2_ParamLimits

0xbae6,	// (0x0002b12d) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002ece8) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002ece8) input_find_pane_t

0x3f1c,	// (0x00023563) input_focus_pane_cp5_ParamLimits

0x3f1c,	// (0x00023563) input_focus_pane_cp5

0x3f36,	// (0x0002357d) bg_popup_window_pane_cp2_ParamLimits

0x3f36,	// (0x0002357d) bg_popup_window_pane_cp2

0x3f43,	// (0x0002358a) listscroll_menu_pane_ParamLimits

0x3f43,	// (0x0002358a) listscroll_menu_pane

0xd27f,	// (0x0002c8c6) popup_submenu_window_ParamLimits

0xd27f,	// (0x0002c8c6) popup_submenu_window

0x3f7b,	// (0x000235c2) find_popup_pane_g1

0x3f83,	// (0x000235ca) input_popup_find_pane_cp

0x3f1c,	// (0x00023563) input_focus_pane_cp4_ParamLimits

0x3f1c,	// (0x00023563) input_focus_pane_cp4

0x3f99,	// (0x000235e0) input_popup_find_pane_t1_ParamLimits

0x3f99,	// (0x000235e0) input_popup_find_pane_t1

0x3521,	// (0x00022b68) bg_popup_sub_pane_cp

0x3fc7,	// (0x0002360e) listscroll_popup_sub_pane

0x3fcf,	// (0x00023616) list_submenu_pane_ParamLimits

0x3fcf,	// (0x00023616) list_submenu_pane

0x3fe0,	// (0x00023627) scroll_pane_cp4

0x3fe8,	// (0x0002362f) list_single_popup_submenu_pane_ParamLimits

0x3fe8,	// (0x0002362f) list_single_popup_submenu_pane

0x3ffc,	// (0x00023643) list_single_popup_submenu_pane_g1

0x4004,	// (0x0002364b) list_single_popup_submenu_pane_t1_ParamLimits

0x4004,	// (0x0002364b) list_single_popup_submenu_pane_t1

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp1_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp1

0x4019,	// (0x00023660) tabs_2_active_pane_g1

0xd2b9,	// (0x0002c900) tabs_2_active_pane_t1

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp1_ParamLimits

0x387c,	// (0x00022ec3) bg_passive_tab_pane_cp1

0x4019,	// (0x00023660) tabs_2_passive_pane_g1

0xd2b9,	// (0x0002c900) tabs_2_passive_pane_t1

0x3601,	// (0x00022c48) bg_active_tab_pane_cp4

0xd2cb,	// (0x0002c912) tabs_2_long_active_pane_t1

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp4

0x21f7,	// (0x0002183e) list_single_midp_graphic_pane_g4_ParamLimits

0x3601,	// (0x00022c48) bg_active_tab_pane_cp5

0xd2de,	// (0x0002c925) tabs_3_long_active_pane_t1

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp5

0x21f7,	// (0x0002183e) list_single_midp_graphic_pane_g4

0x3601,	// (0x00022c48) bg_popup_window_pane_cp13_ParamLimits

0x3601,	// (0x00022c48) bg_popup_window_pane_cp13

0x407b,	// (0x000236c2) listscroll_popup_fast_pane_ParamLimits

0x407b,	// (0x000236c2) listscroll_popup_fast_pane

0x408a,	// (0x000236d1) grid_popup_fast_pane_ParamLimits

0x408a,	// (0x000236d1) grid_popup_fast_pane

0x409c,	// (0x000236e3) scroll_pane_cp9_ParamLimits

0x409c,	// (0x000236e3) scroll_pane_cp9

0x81a5,	// (0x000277ec) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81a5,	// (0x000277ec) list_single_graphic_hl_pane_t1_cp2

0x40c0,	// (0x00023707) input_focus_pane_cp20_ParamLimits

0x40c0,	// (0x00023707) input_focus_pane_cp20

0x40ce,	// (0x00023715) query_popup_data_pane_t1_ParamLimits

0x40ce,	// (0x00023715) query_popup_data_pane_t1

0x40e1,	// (0x00023728) query_popup_data_pane_t2_ParamLimits

0x40e1,	// (0x00023728) query_popup_data_pane_t2

0x4127,	// (0x0002376e) query_popup_data_pane_t3_ParamLimits

0x4127,	// (0x0002376e) query_popup_data_pane_t3

0x4168,	// (0x000237af) query_popup_data_pane_t4_ParamLimits

0x4168,	// (0x000237af) query_popup_data_pane_t4

0x41a4,	// (0x000237eb) query_popup_data_pane_t5_ParamLimits

0x41a4,	// (0x000237eb) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002eced) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002eced) query_popup_data_pane_t

0x3ecb,	// (0x00023512) bg_set_opt_pane_g1

0x3ed3,	// (0x0002351a) bg_set_opt_pane_g2

0x3edb,	// (0x00023522) bg_set_opt_pane_g3

0x3ee3,	// (0x0002352a) bg_set_opt_pane_g4

0x3eeb,	// (0x00023532) bg_set_opt_pane_g5

0x3ef3,	// (0x0002353a) bg_set_opt_pane_g6

0x3efb,	// (0x00023542) bg_set_opt_pane_g7

0x3f03,	// (0x0002354a) bg_set_opt_pane_g8

0x3f0b,	// (0x00023552) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002ecf8) bg_set_opt_pane_g

0x18a7,	// (0x00020eee) control_top_pane_stacon_ParamLimits

0x18a7,	// (0x00020eee) control_top_pane_stacon

0x18fa,	// (0x00020f41) signal_pane_stacon_ParamLimits

0x18fa,	// (0x00020f41) signal_pane_stacon

0x4794,	// (0x00023ddb) stacon_top_pane_g1_ParamLimits

0x4794,	// (0x00023ddb) stacon_top_pane_g1

0x191f,	// (0x00020f66) title_pane_stacon_ParamLimits

0x191f,	// (0x00020f66) title_pane_stacon

0x1949,	// (0x00020f90) uni_indicator_pane_stacon_ParamLimits

0x1949,	// (0x00020f90) uni_indicator_pane_stacon

0x195e,	// (0x00020fa5) battery_pane_stacon_ParamLimits

0x195e,	// (0x00020fa5) battery_pane_stacon

0x19a2,	// (0x00020fe9) control_bottom_pane_stacon_ParamLimits

0x19a2,	// (0x00020fe9) control_bottom_pane_stacon

0x19c5,	// (0x0002100c) navi_pane_stacon_ParamLimits

0x19c5,	// (0x0002100c) navi_pane_stacon

0x47b6,	// (0x00023dfd) stacon_bottom_pane_g1_ParamLimits

0x47b6,	// (0x00023dfd) stacon_bottom_pane_g1

0x160a,	// (0x00020c51) aid_levels_signal_lsc_ParamLimits

0x160a,	// (0x00020c51) aid_levels_signal_lsc

0x1620,	// (0x00020c67) signal_pane_stacon_g1_ParamLimits

0x1620,	// (0x00020c67) signal_pane_stacon_g1

0x1634,	// (0x00020c7b) signal_pane_stacon_g2_ParamLimits

0x1634,	// (0x00020c7b) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002ed0b) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002ed0b) signal_pane_stacon_g

0x1669,	// (0x00020cb0) title_pane_stacon_t1_ParamLimits

0x1669,	// (0x00020cb0) title_pane_stacon_t1

0x41e8,	// (0x0002382f) uni_indicator_pane_stacon_g1

0x41f2,	// (0x00023839) uni_indicator_pane_stacon_g2

0x41fc,	// (0x00023843) uni_indicator_pane_stacon_g3

0x4206,	// (0x0002384d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002ed17) uni_indicator_pane_stacon_g

0x168e,	// (0x00020cd5) control_top_pane_stacon_g1

0x1696,	// (0x00020cdd) control_top_pane_stacon_t1_ParamLimits

0x1696,	// (0x00020cdd) control_top_pane_stacon_t1

0x16cd,	// (0x00020d14) aid_levels_battery_lsc_ParamLimits

0x16cd,	// (0x00020d14) aid_levels_battery_lsc

0x16e4,	// (0x00020d2b) battery_pane_stacon_g1_ParamLimits

0x16e4,	// (0x00020d2b) battery_pane_stacon_g1

0x16f7,	// (0x00020d3e) battery_pane_stacon_g2_ParamLimits

0x16f7,	// (0x00020d3e) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002ed20) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002ed20) battery_pane_stacon_g

0x1735,	// (0x00020d7c) navi_icon_pane_stacon

0x1749,	// (0x00020d90) navi_navi_pane_stacon

0x1735,	// (0x00020d7c) navi_text_pane_stacon

0x168e,	// (0x00020cd5) control_bottom_pane_stacon_g1

0x175d,	// (0x00020da4) control_bottom_pane_stacon_t1_ParamLimits

0x175d,	// (0x00020da4) control_bottom_pane_stacon_t1

0xd2f0,	// (0x0002c937) grid_app_pane_ParamLimits

0xd2f0,	// (0x0002c937) grid_app_pane

0xd328,	// (0x0002c96f) scroll_pane_cp15_ParamLimits

0xd328,	// (0x0002c96f) scroll_pane_cp15

0xd33d,	// (0x0002c984) cell_app_pane_ParamLimits

0xd33d,	// (0x0002c984) cell_app_pane

0xd382,	// (0x0002c9c9) cell_app_pane_g1_ParamLimits

0xd382,	// (0x0002c9c9) cell_app_pane_g1

0x42a9,	// (0x000238f0) cell_app_pane_g2_ParamLimits

0x42a9,	// (0x000238f0) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002ed25) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002ed25) cell_app_pane_g

0xd3a6,	// (0x0002c9ed) cell_app_pane_t1_ParamLimits

0xd3a6,	// (0x0002c9ed) cell_app_pane_t1

0x42cc,	// (0x00023913) grid_highlight_pane_ParamLimits

0x42cc,	// (0x00023913) grid_highlight_pane

0x3ecb,	// (0x00023512) cell_highlight_pane_g1

0x3ed3,	// (0x0002351a) cell_highlight_pane_g2

0x3edb,	// (0x00023522) cell_highlight_pane_g3

0x3ee3,	// (0x0002352a) cell_highlight_pane_g4

0x3eeb,	// (0x00023532) cell_highlight_pane_g5

0x3ef3,	// (0x0002353a) cell_highlight_pane_g6

0x3efb,	// (0x00023542) cell_highlight_pane_g7

0x3f03,	// (0x0002354a) cell_highlight_pane_g8

0x3f0b,	// (0x00023552) cell_highlight_pane_g9

0x3517,	// (0x00022b5e) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002ecd3) cell_highlight_pane_g

0x42dd,	// (0x00023924) bg_scroll_pane

0x17a7,	// (0x00020dee) scroll_handle_pane

0x4324,	// (0x0002396b) scroll_bg_pane_g1

0x4339,	// (0x00023980) scroll_bg_pane_g2

0x4351,	// (0x00023998) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002ed2a) scroll_bg_pane_g

0x4366,	// (0x000239ad) scroll_handle_focus_pane_ParamLimits

0x4366,	// (0x000239ad) scroll_handle_focus_pane

0x4324,	// (0x0002396b) scroll_handle_pane_g1

0x4373,	// (0x000239ba) scroll_handle_pane_g2

0x4351,	// (0x00023998) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002ed31) scroll_handle_pane_g

0x3f1c,	// (0x00023563) bg_popup_sub_pane_cp21_ParamLimits

0x3f1c,	// (0x00023563) bg_popup_sub_pane_cp21

0x4387,	// (0x000239ce) popup_fep_japan_predictive_window_t1_ParamLimits

0x4387,	// (0x000239ce) popup_fep_japan_predictive_window_t1

0x43a1,	// (0x000239e8) popup_fep_japan_predictive_window_t2_ParamLimits

0x43a1,	// (0x000239e8) popup_fep_japan_predictive_window_t2

0x43d4,	// (0x00023a1b) popup_fep_japan_predictive_window_t3_ParamLimits

0x43d4,	// (0x00023a1b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002ed38) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002ed38) popup_fep_japan_predictive_window_t

0x3521,	// (0x00022b68) bg_popup_sub_pane_cp23

0x440b,	// (0x00023a52) listscroll_japin_cand_pane

0x4413,	// (0x00023a5a) popup_fep_japan_candidate_window_t1

0x4421,	// (0x00023a68) candidate_pane_ParamLimits

0x4421,	// (0x00023a68) candidate_pane

0x4433,	// (0x00023a7a) scroll_pane_cp30

0x443b,	// (0x00023a82) list_single_popup_jap_candidate_pane_ParamLimits

0x443b,	// (0x00023a82) list_single_popup_jap_candidate_pane

0x3521,	// (0x00022b68) list_highlight_pane_cp30

0x4450,	// (0x00023a97) list_single_popup_jap_candidate_pane_t1

0x445f,	// (0x00023aa6) level_1_signal

0x4471,	// (0x00023ab8) level_2_signal

0x4484,	// (0x00023acb) level_3_signal

0x4497,	// (0x00023ade) level_4_signal

0x44aa,	// (0x00023af1) level_5_signal

0x44bd,	// (0x00023b04) level_6_signal

0x44d0,	// (0x00023b17) level_7_signal

0x445f,	// (0x00023aa6) level_1_battery

0x4471,	// (0x00023ab8) level_2_battery

0x4484,	// (0x00023acb) level_3_battery

0x4497,	// (0x00023ade) level_4_battery

0x44aa,	// (0x00023af1) level_5_battery

0x44bd,	// (0x00023b04) level_6_battery

0x44d0,	// (0x00023b17) level_7_battery

0x44fb,	// (0x00023b42) list_menu_pane_ParamLimits

0x44fb,	// (0x00023b42) list_menu_pane

0x4511,	// (0x00023b58) scroll_pane_cp25_ParamLimits

0x4511,	// (0x00023b58) scroll_pane_cp25

0x452a,	// (0x00023b71) list_double2_graphic_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double2_graphic_pane_cp2

0x452a,	// (0x00023b71) list_double2_large_graphic_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double2_large_graphic_pane_cp2

0x452a,	// (0x00023b71) list_double2_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double2_pane_cp2

0x452a,	// (0x00023b71) list_double_graphic_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double_graphic_pane_cp2

0x452a,	// (0x00023b71) list_double_large_graphic_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double_large_graphic_pane_cp2

0x452a,	// (0x00023b71) list_double_number_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double_number_pane_cp2

0x452a,	// (0x00023b71) list_double_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_2graphic_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_2graphic_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_graphic_heading_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_graphic_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_graphic_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_heading_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_heading_pane_cp2

0x4567,	// (0x00023bae) list_single_large_graphic_pane_cp2_ParamLimits

0x4567,	// (0x00023bae) list_single_large_graphic_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_number_heading_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_number_heading_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_number_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_number_pane_cp2

0xd3bd,	// (0x0002ca04) list_single_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_pane_cp2

0x45e3,	// (0x00023c2a) bg_popup_sub_pane_cp22

0x1859,	// (0x00020ea0) popup_side_volume_key_window_g1

0x1883,	// (0x00020eca) popup_side_volume_key_window_t1

0x189f,	// (0x00020ee6) volume_small_pane_cp1

0x387c,	// (0x00022ec3) bg_popup_sub_pane_cp24_ParamLimits

0x387c,	// (0x00022ec3) bg_popup_sub_pane_cp24

0x45f9,	// (0x00023c40) fep_china_uni_candidate_pane_ParamLimits

0x45f9,	// (0x00023c40) fep_china_uni_candidate_pane

0x460d,	// (0x00023c54) fep_china_uni_entry_pane

0x461d,	// (0x00023c64) popup_fep_china_uni_window_g1

0x4639,	// (0x00023c80) fep_china_uni_entry_pane_g1

0x4641,	// (0x00023c88) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002ed69) fep_china_uni_entry_pane_g

0x4649,	// (0x00023c90) fep_entry_item_pane

0x4653,	// (0x00023c9a) fep_candidate_item_pane

0x465b,	// (0x00023ca2) fep_china_uni_candidate_pane_g1

0x4663,	// (0x00023caa) fep_china_uni_candidate_pane_g2

0x466b,	// (0x00023cb2) fep_china_uni_candidate_pane_g3

0x4673,	// (0x00023cba) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002ed6e) fep_china_uni_candidate_pane_g

0x3517,	// (0x00022b5e) fep_entry_item_pane_g1

0x467b,	// (0x00023cc2) fep_entry_item_pane_t1_ParamLimits

0x467b,	// (0x00023cc2) fep_entry_item_pane_t1

0x4691,	// (0x00023cd8) fep_candidate_item_pane_t1_ParamLimits

0x4691,	// (0x00023cd8) fep_candidate_item_pane_t1

0x46a6,	// (0x00023ced) fep_candidate_item_pane_t2_ParamLimits

0x46a6,	// (0x00023ced) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002ed77) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002ed77) fep_candidate_item_pane_t

0x3601,	// (0x00022c48) list_highlight_pane_cp31_ParamLimits

0x3601,	// (0x00022c48) list_highlight_pane_cp31

0x46b8,	// (0x00023cff) level_1_signal_lsc

0x46c1,	// (0x00023d08) level_2_signal_lsc

0x46ca,	// (0x00023d11) level_3_signal_lsc

0x46d3,	// (0x00023d1a) level_4_signal_lsc

0x46dc,	// (0x00023d23) level_5_signal_lsc

0x46e5,	// (0x00023d2c) level_6_signal_lsc

0x46ee,	// (0x00023d35) level_7_signal_lsc

0x46ee,	// (0x00023d35) level_1_battery_lsc

0x46f7,	// (0x00023d3e) level_2_battery_lsc

0x4700,	// (0x00023d47) level_3_battery_lsc

0x4709,	// (0x00023d50) level_4_battery_lsc

0x4712,	// (0x00023d59) level_5_battery_lsc

0x471b,	// (0x00023d62) level_6_battery_lsc

0x46b8,	// (0x00023cff) level_7_battery_lsc

0x4724,	// (0x00023d6b) scroll_handle_focus_pane_g1

0x472d,	// (0x00023d74) scroll_handle_focus_pane_g2

0x4736,	// (0x00023d7d) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002ed7c) scroll_handle_focus_pane_g

0xbafb,	// (0x0002b142) list_single_2graphic_pane_g1_ParamLimits

0xbafb,	// (0x0002b142) list_single_2graphic_pane_g1

0xb5e4,	// (0x0002ac2b) list_single_2graphic_pane_g2_ParamLimits

0xb5e4,	// (0x0002ac2b) list_single_2graphic_pane_g2

0x0830,	// (0x0001fe77) list_single_2graphic_pane_g3_ParamLimits

0x0830,	// (0x0001fe77) list_single_2graphic_pane_g3

0xbb07,	// (0x0002b14e) list_single_2graphic_pane_g4_ParamLimits

0xbb07,	// (0x0002b14e) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002ed83) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002ed83) list_single_2graphic_pane_g

0xbb13,	// (0x0002b15a) list_single_2graphic_pane_t1_ParamLimits

0xbb13,	// (0x0002b15a) list_single_2graphic_pane_t1

0xbb41,	// (0x0002b188) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb41,	// (0x0002b188) list_double2_graphic_large_graphic_pane_g1

0xb64f,	// (0x0002ac96) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb64f,	// (0x0002ac96) list_double2_graphic_large_graphic_pane_g2

0xb660,	// (0x0002aca7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb660,	// (0x0002aca7) list_double2_graphic_large_graphic_pane_g3

0xbb53,	// (0x0002b19a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb53,	// (0x0002b19a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002ed8c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002ed8c) list_double2_graphic_large_graphic_pane_g

0xbb5f,	// (0x0002b1a6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb5f,	// (0x0002b1a6) list_double2_graphic_large_graphic_pane_t1

0xbb75,	// (0x0002b1bc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb75,	// (0x0002b1bc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002ed95) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002ed95) list_double2_graphic_large_graphic_pane_t

0x487e,	// (0x00023ec5) popup_fast_swap_window_ParamLimits

0x487e,	// (0x00023ec5) popup_fast_swap_window

0x489a,	// (0x00023ee1) popup_side_volume_key_window

0x48b6,	// (0x00023efd) stacon_top_pane

0x48c0,	// (0x00023f07) status_pane_ParamLimits

0x48c0,	// (0x00023f07) status_pane

0xd47a,	// (0x0002cac1) status_small_pane

0x3521,	// (0x00022b68) control_pane

0x3521,	// (0x00022b68) stacon_bottom_pane

0x3e53,	// (0x0002349a) scroll_pane_cp121

0x3e4a,	// (0x00023491) set_content_pane

0x473f,	// (0x00023d86) bg_active_tab_pane_g1_cp1

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp1

0x4751,	// (0x00023d98) bg_active_tab_pane_g3_cp1

0x473f,	// (0x00023d86) bg_passive_tab_pane_g1_cp1

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp1

0x4751,	// (0x00023d98) bg_passive_tab_pane_g3_cp1

0x475a,	// (0x00023da1) bg_active_tab_pane_g1_cp2

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp2

0x4763,	// (0x00023daa) bg_active_tab_pane_g3_cp2

0x475a,	// (0x00023da1) bg_passive_tab_pane_g1_cp2

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp2

0x4763,	// (0x00023daa) bg_passive_tab_pane_g3_cp2

0x476c,	// (0x00023db3) bg_active_tab_pane_g1_cp3

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp3

0x4775,	// (0x00023dbc) bg_active_tab_pane_g3_cp3

0x476c,	// (0x00023db3) bg_passive_tab_pane_g1_cp3

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp3

0x4775,	// (0x00023dbc) bg_passive_tab_pane_g3_cp3

0x477e,	// (0x00023dc5) bg_active_tab_pane_g1_cp4

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp4

0x4789,	// (0x00023dd0) bg_active_tab_pane_g3_cp4

0x477e,	// (0x00023dc5) bg_passive_tab_pane_g1_cp4

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp4

0x4789,	// (0x00023dd0) bg_passive_tab_pane_g3_cp4

0x47d2,	// (0x00023e19) bg_active_tab_pane_g1_cp5

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp5

0x47db,	// (0x00023e22) bg_active_tab_pane_g3_cp5

0x47d2,	// (0x00023e19) bg_passive_tab_pane_g1_cp5

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp5

0x47db,	// (0x00023e22) bg_passive_tab_pane_g3_cp5

0x6e87,	// (0x000264ce) list_set_graphic_pane_ParamLimits

0x6e87,	// (0x000264ce) list_set_graphic_pane

0x3521,	// (0x00022b68) bg_set_opt_pane_cp4

0xd44a,	// (0x0002ca91) list_set_graphic_pane_g1_ParamLimits

0xd44a,	// (0x0002ca91) list_set_graphic_pane_g1

0xd456,	// (0x0002ca9d) list_set_graphic_pane_g2_ParamLimits

0xd456,	// (0x0002ca9d) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002ed9a) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002ed9a) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002f0fc) volume_small_pane_cp_g

0x4831,	// (0x00023e78) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4831,	// (0x00023e78) list_double2_large_graphic_pane_g1_cp2

0x483d,	// (0x00023e84) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x483d,	// (0x00023e84) list_double2_large_graphic_pane_g2_cp2

0x484e,	// (0x00023e95) list_double2_large_graphic_pane_g3_cp2

0x4856,	// (0x00023e9d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4856,	// (0x00023e9d) list_double2_large_graphic_pane_t1_cp2

0x486c,	// (0x00023eb3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x486c,	// (0x00023eb3) list_double2_large_graphic_pane_t2_cp2

0x643c,	// (0x00025a83) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x643c,	// (0x00025a83) list_double_large_graphic_pane_g1_cp2

0x644d,	// (0x00025a94) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x644d,	// (0x00025a94) list_double_large_graphic_pane_g2_cp2

0x49e7,	// (0x0002402e) list_double_large_graphic_pane_g3_cp2

0x645e,	// (0x00025aa5) list_double_large_graphic_pane_g4_cp

0x6466,	// (0x00025aad) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6466,	// (0x00025aad) list_double_large_graphic_pane_t1_cp2

0x647d,	// (0x00025ac4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x647d,	// (0x00025ac4) list_double_large_graphic_pane_t2_cp2

0x48d9,	// (0x00023f20) list_double2_graphic_pane_g1_cp2_ParamLimits

0x48d9,	// (0x00023f20) list_double2_graphic_pane_g1_cp2

0x48e7,	// (0x00023f2e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x48e7,	// (0x00023f2e) list_double2_graphic_pane_g2_cp2

0x48f8,	// (0x00023f3f) list_double2_graphic_pane_g3_cp2

0x4902,	// (0x00023f49) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4902,	// (0x00023f49) list_double2_graphic_pane_t1_cp2

0x4918,	// (0x00023f5f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4918,	// (0x00023f5f) list_double2_graphic_pane_t2_cp2

0x492a,	// (0x00023f71) list_single_number_heading_pane_g1_cp2_ParamLimits

0x492a,	// (0x00023f71) list_single_number_heading_pane_g1_cp2

0x4936,	// (0x00023f7d) list_single_number_heading_pane_g2_cp2

0x493e,	// (0x00023f85) list_single_number_heading_pane_t1_cp2_ParamLimits

0x493e,	// (0x00023f85) list_single_number_heading_pane_t1_cp2

0x4954,	// (0x00023f9b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4954,	// (0x00023f9b) list_single_number_heading_pane_t2_cp2

0x4966,	// (0x00023fad) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4966,	// (0x00023fad) list_single_number_heading_pane_t3_cp2

0x492a,	// (0x00023f71) list_single_heading_pane_g1_cp2_ParamLimits

0x492a,	// (0x00023f71) list_single_heading_pane_g1_cp2

0x4936,	// (0x00023f7d) list_single_heading_pane_g2_cp2

0x493e,	// (0x00023f85) list_single_heading_pane_t1_cp2_ParamLimits

0x493e,	// (0x00023f85) list_single_heading_pane_t1_cp2

0x6244,	// (0x0002588b) list_single_heading_pane_t2_cp2_ParamLimits

0x6244,	// (0x0002588b) list_single_heading_pane_t2_cp2

0x618c,	// (0x000257d3) list_double_graphic_pane_g1_cp2_ParamLimits

0x618c,	// (0x000257d3) list_double_graphic_pane_g1_cp2

0x6198,	// (0x000257df) list_double_graphic_pane_g2_cp2_ParamLimits

0x6198,	// (0x000257df) list_double_graphic_pane_g2_cp2

0x61a7,	// (0x000257ee) list_double_graphic_pane_g3_cp2

0x61af,	// (0x000257f6) list_double_graphic_pane_t1_cp2_ParamLimits

0x61af,	// (0x000257f6) list_double_graphic_pane_t1_cp2

0x61c5,	// (0x0002580c) list_double_graphic_pane_t2_cp2_ParamLimits

0x61c5,	// (0x0002580c) list_double_graphic_pane_t2_cp2

0x49db,	// (0x00024022) list_double_number_pane_g1_cp2_ParamLimits

0x49db,	// (0x00024022) list_double_number_pane_g1_cp2

0x49e7,	// (0x0002402e) list_double_number_pane_g2_cp2

0x6150,	// (0x00025797) list_double_number_pane_t1_cp2_ParamLimits

0x6150,	// (0x00025797) list_double_number_pane_t1_cp2

0x6164,	// (0x000257ab) list_double_number_pane_t2_cp2_ParamLimits

0x6164,	// (0x000257ab) list_double_number_pane_t2_cp2

0x617a,	// (0x000257c1) list_double_number_pane_t3_cp2_ParamLimits

0x617a,	// (0x000257c1) list_double_number_pane_t3_cp2

0x6039,	// (0x00025680) list_single_graphic_pane_g1_cp2_ParamLimits

0x6039,	// (0x00025680) list_single_graphic_pane_g1_cp2

0x4a3f,	// (0x00024086) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a3f,	// (0x00024086) list_single_graphic_pane_g2_cp2

0x4a4b,	// (0x00024092) list_single_graphic_pane_g3_cp2

0x600f,	// (0x00025656) list_single_graphic_pane_t1_cp2_ParamLimits

0x600f,	// (0x00025656) list_single_graphic_pane_t1_cp2

0x4a3f,	// (0x00024086) list_single_number_pane_g1_cp2_ParamLimits

0x4a3f,	// (0x00024086) list_single_number_pane_g1_cp2

0x4a4b,	// (0x00024092) list_single_number_pane_g2_cp2

0x600f,	// (0x00025656) list_single_number_pane_t1_cp2_ParamLimits

0x600f,	// (0x00025656) list_single_number_pane_t1_cp2

0x6025,	// (0x0002566c) list_single_number_pane_t2_cp2_ParamLimits

0x6025,	// (0x0002566c) list_single_number_pane_t2_cp2

0x483d,	// (0x00023e84) list_double2_pane_g1_cp2_ParamLimits

0x483d,	// (0x00023e84) list_double2_pane_g1_cp2

0x484e,	// (0x00023e95) list_double2_pane_g2_cp2

0x49b3,	// (0x00023ffa) list_double2_pane_t1_cp2_ParamLimits

0x49b3,	// (0x00023ffa) list_double2_pane_t1_cp2

0x49c9,	// (0x00024010) list_double2_pane_t2_cp2_ParamLimits

0x49c9,	// (0x00024010) list_double2_pane_t2_cp2

0x49db,	// (0x00024022) list_double_pane_g1_cp2_ParamLimits

0x49db,	// (0x00024022) list_double_pane_g1_cp2

0x49e7,	// (0x0002402e) list_double_pane_g2_cp2

0x49ef,	// (0x00024036) list_double_pane_t1_cp2_ParamLimits

0x49ef,	// (0x00024036) list_double_pane_t1_cp2

0x4a05,	// (0x0002404c) list_double_pane_t2_cp2_ParamLimits

0x4a05,	// (0x0002404c) list_double_pane_t2_cp2

0x4a2f,	// (0x00024076) list_single_pane_cp2_g3

0x4a3f,	// (0x00024086) list_single_pane_g1_cp2_ParamLimits

0x4a3f,	// (0x00024086) list_single_pane_g1_cp2

0x4a4b,	// (0x00024092) list_single_pane_g2_cp2

0x4a53,	// (0x0002409a) list_single_pane_t1_cp2_ParamLimits

0x4a53,	// (0x0002409a) list_single_pane_t1_cp2

0x4a6b,	// (0x000240b2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4a6b,	// (0x000240b2) list_single_large_graphic_pane_g1_cp2

0x4a77,	// (0x000240be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4a77,	// (0x000240be) list_single_large_graphic_pane_g2_cp2

0x4a83,	// (0x000240ca) list_single_large_graphic_pane_g3_cp2

0x4a8b,	// (0x000240d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a8b,	// (0x000240d2) list_single_large_graphic_pane_g4_cp1

0x4aa5,	// (0x000240ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4aa5,	// (0x000240ec) list_single_large_graphic_pane_t1_cp2

0x5fdb,	// (0x00025622) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5fdb,	// (0x00025622) list_single_graphic_heading_pane_g1_cp2

0x5fa8,	// (0x000255ef) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5fa8,	// (0x000255ef) list_single_graphic_heading_pane_g4_cp2

0x4a4b,	// (0x00024092) list_single_graphic_heading_pane_g5_cp2

0x5fe7,	// (0x0002562e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5fe7,	// (0x0002562e) list_single_graphic_heading_pane_t1_cp2

0x5ffd,	// (0x00025644) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5ffd,	// (0x00025644) list_single_graphic_heading_pane_t2_cp2

0x5f9c,	// (0x000255e3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f9c,	// (0x000255e3) list_single_2graphic_pane_g1_cp2

0x5fa8,	// (0x000255ef) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5fa8,	// (0x000255ef) list_single_2graphic_pane_g2_cp2

0x4a4b,	// (0x00024092) list_single_2graphic_pane_g3_cp2

0x5fb9,	// (0x00025600) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5fb9,	// (0x00025600) list_single_2graphic_pane_g4_cp2

0x5fc5,	// (0x0002560c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5fc5,	// (0x0002560c) list_single_2graphic_pane_t1_cp2

0x3517,	// (0x00022b5e) list_highlight_pane_g10_cp1

0x5b74,	// (0x000251bb) list_highlight_pane_g1_cp1

0x5b7c,	// (0x000251c3) list_highlight_pane_g2_cp1

0x5b84,	// (0x000251cb) list_highlight_pane_g3_cp1

0x5b8c,	// (0x000251d3) list_highlight_pane_g4_cp1

0x5b94,	// (0x000251db) list_highlight_pane_g5_cp1

0x5b9c,	// (0x000251e3) list_highlight_pane_g6_cp1

0x5ba4,	// (0x000251eb) list_highlight_pane_g7_cp1

0x5bac,	// (0x000251f3) list_highlight_pane_g8_cp1

0x5bb4,	// (0x000251fb) list_highlight_pane_g9_cp1

0xdad2,	// (0x0002d119) form_field_slider_pane_t3

0xdae0,	// (0x0002d127) form_field_slider_pane_t4

0x5ab0,	// (0x000250f7) slider_form_pane_ParamLimits

0x5ab0,	// (0x000250f7) slider_form_pane

0x3521,	// (0x00022b68) control_abbreviations

0x3521,	// (0x00022b68) control_conventions

0x3521,	// (0x00022b68) control_definitions

0x3521,	// (0x00022b68) format_table_attribute

0x628e,	// (0x000258d5) bg_popup_preview_window_pane_g9

0x3521,	// (0x00022b68) format_table_data2

0x3521,	// (0x00022b68) format_table_data3

0x3521,	// (0x00022b68) format_table_data_example

0x0008,

0x3521,	// (0x00022b68) intro_purpose

0xf8e3,	// (0x0002ef2a) bg_popup_preview_window_pane_g

0x3521,	// (0x00022b68) texts_category

0x3521,	// (0x00022b68) texts_graphics

0x4abb,	// (0x00024102) text_digital

0x4aca,	// (0x00024111) text_primary

0x4ad9,	// (0x00024120) text_primary_small

0x4ae8,	// (0x0002412f) text_secondary

0x4af7,	// (0x0002413e) text_title

0x69c9,	// (0x00026010) bg_passive_tab_pane_g1_cp3_srt

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp3_srt

0x69d2,	// (0x00026019) bg_passive_tab_pane_g3_cp3_srt

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp3_srt_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp3_srt

0x69db,	// (0x00026022) tabs_4_active_pane_srt_g1

0xde3d,	// (0x0002d484) tabs_4_active_pane_srt_t1_ParamLimits

0xde3d,	// (0x0002d484) tabs_4_active_pane_srt_t1

0x69c9,	// (0x00026010) bg_active_tab_pane_g1_cp3_copy1

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp3_copy1

0x69d2,	// (0x00026019) bg_active_tab_pane_g3_cp3_copy1

0x3601,	// (0x00022c48) tabs_2_long_active_pane_srt_ParamLimits

0x3601,	// (0x00022c48) tabs_2_long_active_pane_srt

0x3601,	// (0x00022c48) tabs_2_long_passive_pane_srt_ParamLimits

0x3601,	// (0x00022c48) tabs_2_long_passive_pane_srt

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp4_srt

0x66bd,	// (0x00025d04) bg_passive_tab_pane_g1_cp4_srt

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp4_srt

0x66c6,	// (0x00025d0d) bg_passive_tab_pane_g3_cp4_srt

0x3601,	// (0x00022c48) bg_active_tab_pane_cp4_srt_ParamLimits

0x3601,	// (0x00022c48) bg_active_tab_pane_cp4_srt

0xdc67,	// (0x0002d2ae) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc67,	// (0x0002d2ae) tabs_2_long_active_pane_srt_t1

0x66bd,	// (0x00025d04) bg_active_tab_pane_g1_cp4_srt

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp4_srt

0x66c6,	// (0x00025d0d) bg_active_tab_pane_g3_cp4_srt

0x387c,	// (0x00022ec3) tabs_3_long_active_pane_srt_ParamLimits

0x387c,	// (0x00022ec3) tabs_3_long_active_pane_srt

0x387c,	// (0x00022ec3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x387c,	// (0x00022ec3) tabs_3_long_passive_pane_cp_srt

0x387c,	// (0x00022ec3) tabs_3_long_passive_pane_srt_ParamLimits

0x387c,	// (0x00022ec3) tabs_3_long_passive_pane_srt

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp5_srt

0x47d2,	// (0x00023e19) bg_passive_tab_pane_g1_cp5_srt

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp5_srt

0x47db,	// (0x00023e22) bg_passive_tab_pane_g3_cp5_srt

0x3601,	// (0x00022c48) bg_active_tab_pane_cp5_srt_ParamLimits

0x3601,	// (0x00022c48) bg_active_tab_pane_cp5_srt

0xdc51,	// (0x0002d298) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc51,	// (0x0002d298) tabs_3_long_active_pane_srt_t1

0x47d2,	// (0x00023e19) bg_active_tab_pane_g1_cp5_srt

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp5_srt

0x47db,	// (0x00023e22) bg_active_tab_pane_g3_cp5_srt

0x669d,	// (0x00025ce4) navi_text_pane_srt_t1

0x6695,	// (0x00025cdc) navi_icon_pane_srt_g1

0x4cc0,	// (0x00024307) midp_editing_number_pane_srt

0x4b06,	// (0x0002414d) midp_ticker_pane_srt

0x4cc8,	// (0x0002430f) midp_ticker_pane_srt_g1

0x4cd0,	// (0x00024317) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002edb9) midp_ticker_pane_srt_g

0x4cd8,	// (0x0002431f) midp_ticker_pane_srt_t1

0x6686,	// (0x00025ccd) midp_editing_number_pane_t1_copy1

0x4e44,	// (0x0002448b) listscroll_midp_pane

0x4e44,	// (0x0002448b) midp_form_pane

0x4b72,	// (0x000241b9) midp_info_popup_window_ParamLimits

0x4b72,	// (0x000241b9) midp_info_popup_window

0x3f1c,	// (0x00023563) bg_popup_sub_pane_cp50_ParamLimits

0x3f1c,	// (0x00023563) bg_popup_sub_pane_cp50

0x57a0,	// (0x00024de7) listscroll_midp_info_pane_ParamLimits

0x57a0,	// (0x00024de7) listscroll_midp_info_pane

0x5788,	// (0x00024dcf) listscroll_form_midp_pane_ParamLimits

0x5788,	// (0x00024dcf) listscroll_form_midp_pane

0x5794,	// (0x00024ddb) scroll_bar_cp050

0xdac6,	// (0x0002d10d) list_midp_pane

0x741e,	// (0x00026a65) signal_pane_g2_cp

0x56a2,	// (0x00024ce9) listscroll_midp_info_pane_t1_ParamLimits

0x56a2,	// (0x00024ce9) listscroll_midp_info_pane_t1

0x56ba,	// (0x00024d01) listscroll_midp_info_pane_t2_ParamLimits

0x56ba,	// (0x00024d01) listscroll_midp_info_pane_t2

0x56f8,	// (0x00024d3f) listscroll_midp_info_pane_t3_ParamLimits

0x56f8,	// (0x00024d3f) listscroll_midp_info_pane_t3

0x5732,	// (0x00024d79) listscroll_midp_info_pane_t4_ParamLimits

0x5732,	// (0x00024d79) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002ee65) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002ee65) listscroll_midp_info_pane_t

0x3fe0,	// (0x00023627) scroll_pane_cp21

0x5640,	// (0x00024c87) form_midp_field_choice_group_pane

0x5649,	// (0x00024c90) form_midp_field_text_pane

0x5688,	// (0x00024ccf) form_midp_field_time_pane

0x5690,	// (0x00024cd7) form_midp_gauge_slider_pane

0x5699,	// (0x00024ce0) form_midp_gauge_wait_pane

0x3521,	// (0x00022b68) form_midp_image_pane

0xbb87,	// (0x0002b1ce) list_single_midp_pane_ParamLimits

0xbb87,	// (0x0002b1ce) list_single_midp_pane

0xdaa4,	// (0x0002d0eb) form_midp_field_text_pane_t1

0x53c2,	// (0x00024a09) input_focus_pane_cp050

0x562f,	// (0x00024c76) list_midp_form_text_pane

0x55c7,	// (0x00024c0e) form_midp_field_choice_group_pane_t1

0x55d5,	// (0x00024c1c) input_focus_pane_cp051

0x55e9,	// (0x00024c30) list_midp_choice_pane

0x3521,	// (0x00022b68) status_idle_pane

0x55ab,	// (0x00024bf2) form_midp_field_time_pane_t1

0x3517,	// (0x00022b5e) wait_anim_pane_g2_copy1

0x55b9,	// (0x00024c00) form_midp_field_time_pane_t2

0x0001,

0x4c20,	// (0x00024267) aid_navinavi_width_2_pane

0xf819,	// (0x0002ee60) form_midp_field_time_pane_t

0x3521,	// (0x00022b68) input_focus_pane_cp052

0x3521,	// (0x00022b68) bg_input_focus_pane_cp040

0x556b,	// (0x00024bb2) form_midp_gauge_slider_pane_t1

0x5579,	// (0x00024bc0) form_midp_gauge_slider_pane_t2

0xda88,	// (0x0002d0cf) form_midp_gauge_slider_pane_t3

0xda96,	// (0x0002d0dd) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002ee57) form_midp_gauge_slider_pane_t

0x55a3,	// (0x00024bea) form_midp_slider_pane

0x3601,	// (0x00022c48) bg_input_focus_pane_cp041_ParamLimits

0x3601,	// (0x00022c48) bg_input_focus_pane_cp041

0x5538,	// (0x00024b7f) form_midp_gauge_wait_pane_t1_ParamLimits

0x5538,	// (0x00024b7f) form_midp_gauge_wait_pane_t1

0x554a,	// (0x00024b91) form_midp_gauge_wait_pane_t2_ParamLimits

0x554a,	// (0x00024b91) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002ee52) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002ee52) form_midp_gauge_wait_pane_t

0x555c,	// (0x00024ba3) form_midp_wait_pane_ParamLimits

0x555c,	// (0x00024ba3) form_midp_wait_pane

0x5502,	// (0x00024b49) form_midp_image_pane_g1

0x550b,	// (0x00024b52) form_midp_image_pane_t1

0x551a,	// (0x00024b61) form_midp_image_pane_t2

0x5529,	// (0x00024b70) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002ee4b) form_midp_image_pane_t

0x54f9,	// (0x00024b40) list_single_midp_pane_g1

0x0942,	// (0x0001ff89) list_single_midp_pane_t1

0xda73,	// (0x0002d0ba) list_midp_form_item_pane_ParamLimits

0xda73,	// (0x0002d0ba) list_midp_form_item_pane

0x4bc8,	// (0x0002420f) list_midp_form_item_pane_t1

0x4bd7,	// (0x0002421e) midp_ticker_pane_g1

0x4be3,	// (0x0002422a) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002ed9f) midp_ticker_pane_g

0x4bef,	// (0x00024236) midp_ticker_pane_t1

0x68d7,	// (0x00025f1e) midp_editing_number_pane_t1

0x68b5,	// (0x00025efc) midp_editing_number_pane

0x68c4,	// (0x00025f0b) midp_ticker_pane

0x6676,	// (0x00025cbd) ai_message_heading_pane

0x3521,	// (0x00022b68) bg_popup_window_pane_cp14

0x667e,	// (0x00025cc5) listscroll_ai_message_pane

0x6600,	// (0x00025c47) ai_message_heading_pane_g1_ParamLimits

0x6600,	// (0x00025c47) ai_message_heading_pane_g1

0x660c,	// (0x00025c53) ai_message_heading_pane_g2_ParamLimits

0x660c,	// (0x00025c53) ai_message_heading_pane_g2

0x6618,	// (0x00025c5f) ai_message_heading_pane_g3_ParamLimits

0x6618,	// (0x00025c5f) ai_message_heading_pane_g3

0x6624,	// (0x00025c6b) ai_message_heading_pane_g4_ParamLimits

0x6624,	// (0x00025c6b) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002ef8c) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002ef8c) ai_message_heading_pane_g

0x6630,	// (0x00025c77) ai_message_heading_pane_t1_ParamLimits

0x6630,	// (0x00025c77) ai_message_heading_pane_t1

0x664a,	// (0x00025c91) ai_message_heading_pane_t2_ParamLimits

0x664a,	// (0x00025c91) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002ef95) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002ef95) ai_message_heading_pane_t

0x665c,	// (0x00025ca3) bg_popup_heading_pane_cp1_ParamLimits

0x665c,	// (0x00025ca3) bg_popup_heading_pane_cp1

0x65ee,	// (0x00025c35) list_ai_message_pane_ParamLimits

0x65ee,	// (0x00025c35) list_ai_message_pane

0x3fe0,	// (0x00023627) scroll_pane_cp10

0x658a,	// (0x00025bd1) list_ai_message_pane_g1

0x6592,	// (0x00025bd9) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002ef69) list_ai_message_pane_g

0x659a,	// (0x00025be1) list_ai_message_pane_t1_ParamLimits

0x659a,	// (0x00025be1) list_ai_message_pane_t1

0x65af,	// (0x00025bf6) list_ai_message_pane_t2_ParamLimits

0x65af,	// (0x00025bf6) list_ai_message_pane_t2

0x65c4,	// (0x00025c0b) list_ai_message_pane_t3_ParamLimits

0x65c4,	// (0x00025c0b) list_ai_message_pane_t3

0x65d9,	// (0x00025c20) list_ai_message_pane_t4_ParamLimits

0x65d9,	// (0x00025c20) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002ef6e) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002ef6e) list_ai_message_pane_t

0xdc30,	// (0x0002d277) cell_ai_soft_ind_pane_ParamLimits

0xdc30,	// (0x0002d277) cell_ai_soft_ind_pane

0x4c01,	// (0x00024248) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c01,	// (0x00024248) cell_ai_soft_ind_pane_g1

0x3521,	// (0x00022b68) grid_highlight_cp1

0x4c0e,	// (0x00024255) text_secondary_cp56_ParamLimits

0x4c0e,	// (0x00024255) text_secondary_cp56

0x654a,	// (0x00025b91) example_general_pane_ParamLimits

0x654a,	// (0x00025b91) example_general_pane

0x6556,	// (0x00025b9d) example_parent_pane_g1_ParamLimits

0x6556,	// (0x00025b9d) example_parent_pane_g1

0x6562,	// (0x00025ba9) example_parent_pane_t1_ParamLimits

0x6562,	// (0x00025ba9) example_parent_pane_t1

0xc666,	// (0x0002bcad) popup_preview_text_window_ParamLimits

0xc666,	// (0x0002bcad) popup_preview_text_window

0x4a37,	// (0x0002407e) list_single_pane_cp2_g4

0x3932,	// (0x00022f79) bg_popup_preview_window_pane_ParamLimits

0x3932,	// (0x00022f79) bg_popup_preview_window_pane

0x6296,	// (0x000258dd) popup_preview_text_window_t1_ParamLimits

0x6296,	// (0x000258dd) popup_preview_text_window_t1

0x62b4,	// (0x000258fb) popup_preview_text_window_t2_ParamLimits

0x62b4,	// (0x000258fb) popup_preview_text_window_t2

0x62fd,	// (0x00025944) popup_preview_text_window_t3_ParamLimits

0x62fd,	// (0x00025944) popup_preview_text_window_t3

0x6342,	// (0x00025989) popup_preview_text_window_t4_ParamLimits

0x6342,	// (0x00025989) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002ef3d) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002ef3d) popup_preview_text_window_t

0x63c0,	// (0x00025a07) scroll_pane_cp11

0x534e,	// (0x00024995) bg_popup_preview_window_pane_g1

0x6256,	// (0x0002589d) bg_popup_preview_window_pane_g2

0x625e,	// (0x000258a5) bg_popup_preview_window_pane_g3

0x6266,	// (0x000258ad) bg_popup_preview_window_pane_g4

0x626e,	// (0x000258b5) bg_popup_preview_window_pane_g5

0x6276,	// (0x000258bd) bg_popup_preview_window_pane_g6

0x627e,	// (0x000258c5) bg_popup_preview_window_pane_g7

0x6286,	// (0x000258cd) bg_popup_preview_window_pane_g8

0x1196,	// (0x000207dd) aid_popup_width_pane

0xc5e2,	// (0x0002bc29) popup_midp_note_alarm_window_ParamLimits

0xc5e2,	// (0x0002bc29) popup_midp_note_alarm_window

0x3e64,	// (0x000234ab) data_form_pane_ParamLimits

0xb9ed,	// (0x0002b034) form_field_data_pane_g1

0xb9f7,	// (0x0002b03e) form_field_data_pane_t1_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_ParamLimits

0x05cd,	// (0x0001fc14) data_form_wide_pane_ParamLimits

0x05de,	// (0x0001fc25) form_field_data_wide_pane_g1

0x05ea,	// (0x0001fc31) form_field_data_wide_pane_t1_ParamLimits

0x3be1,	// (0x00023228) input_focus_pane_cp6_ParamLimits

0xd2ab,	// (0x0002c8f2) input_popup_find_pane_g1_ParamLimits

0xd2ab,	// (0x0002c8f2) input_popup_find_pane_g1

0x1708,	// (0x00020d4f) aid_navi_side_left_pane

0x171d,	// (0x00020d64) aid_navi_side_right_pane

0x5c6f,	// (0x000252b6) bg_popup_window_pane_cp30_ParamLimits

0x5c6f,	// (0x000252b6) bg_popup_window_pane_cp30

0x5ce9,	// (0x00025330) popup_midp_note_alarm_window_g1_ParamLimits

0x5ce9,	// (0x00025330) popup_midp_note_alarm_window_g1

0x5d19,	// (0x00025360) popup_midp_note_alarm_window_t1_ParamLimits

0x5d19,	// (0x00025360) popup_midp_note_alarm_window_t1

0x5dba,	// (0x00025401) popup_midp_note_alarm_window_t2_ParamLimits

0x5dba,	// (0x00025401) popup_midp_note_alarm_window_t2

0x5e68,	// (0x000254af) popup_midp_note_alarm_window_t3_ParamLimits

0x5e68,	// (0x000254af) popup_midp_note_alarm_window_t3

0x5e9a,	// (0x000254e1) popup_midp_note_alarm_window_t4_ParamLimits

0x5e9a,	// (0x000254e1) popup_midp_note_alarm_window_t4

0x5ec0,	// (0x00025507) popup_midp_note_alarm_window_t5_ParamLimits

0x5ec0,	// (0x00025507) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002eeda) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002eeda) popup_midp_note_alarm_window_t

0x5f6c,	// (0x000255b3) wait_bar_pane_cp1_ParamLimits

0x5f6c,	// (0x000255b3) wait_bar_pane_cp1

0x3521,	// (0x00022b68) wait_anim_pane_copy1

0x3521,	// (0x00022b68) wait_border_pane_copy1

0x5955,	// (0x00024f9c) wait_border_pane_g1_copy1

0x0604,	// (0x0001fc4b) form_field_popup_pane_g1

0xba11,	// (0x0002b058) form_field_popup_pane_t1_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_cp7_ParamLimits

0x3e9e,	// (0x000234e5) list_form_pane_ParamLimits

0x0624,	// (0x0001fc6b) form_field_popup_wide_pane_g1

0x062c,	// (0x0001fc73) form_field_popup_wide_pane_t1_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_cp8_ParamLimits

0x3eaa,	// (0x000234f1) list_form_wide_pane_ParamLimits

0x6a61,	// (0x000260a8) aid_size_cell_graphic_pane

0xba90,	// (0x0002b0d7) data_form_pane_t1_ParamLimits

0xbbb0,	// (0x0002b1f7) data_form_wide_pane_t1_ParamLimits

0xd6e2,	// (0x0002cd29) bg_status_flat_pane

0xc078,	// (0x0002b6bf) title_pane_t1_ParamLimits

0x35c9,	// (0x00022c10) title_pane_t2_ParamLimits

0x35ef,	// (0x00022c36) title_pane_t3_ParamLimits

0xf557,	// (0x0002eb9e) title_pane_t_ParamLimits

0x445f,	// (0x00023aa6) level_1_signal_ParamLimits

0x4471,	// (0x00023ab8) level_2_signal_ParamLimits

0x4484,	// (0x00023acb) level_3_signal_ParamLimits

0x4497,	// (0x00023ade) level_4_signal_ParamLimits

0x44aa,	// (0x00023af1) level_5_signal_ParamLimits

0x44bd,	// (0x00023b04) level_6_signal_ParamLimits

0x44d0,	// (0x00023b17) level_7_signal_ParamLimits

0x445f,	// (0x00023aa6) level_1_battery_ParamLimits

0x4471,	// (0x00023ab8) level_2_battery_ParamLimits

0x4484,	// (0x00023acb) level_3_battery_ParamLimits

0x4497,	// (0x00023ade) level_4_battery_ParamLimits

0x44aa,	// (0x00023af1) level_5_battery_ParamLimits

0x44bd,	// (0x00023b04) level_6_battery_ParamLimits

0x44d0,	// (0x00023b17) level_7_battery_ParamLimits

0x5b74,	// (0x000251bb) bg_status_flat_pane_g1

0x5b7c,	// (0x000251c3) bg_status_flat_pane_g2

0x5b84,	// (0x000251cb) bg_status_flat_pane_g3

0x5b8c,	// (0x000251d3) bg_status_flat_pane_g4

0x5b94,	// (0x000251db) bg_status_flat_pane_g5

0x5b9c,	// (0x000251e3) bg_status_flat_pane_g6

0x5ba4,	// (0x000251eb) bg_status_flat_pane_g7

0xcff6,	// (0x0002c63d) tabs_3_active_pane_t1_ParamLimits

0xcff6,	// (0x0002c63d) tabs_3_passive_pane_t1_ParamLimits

0xd008,	// (0x0002c64f) tabs_4_active_pane_t1_ParamLimits

0xd008,	// (0x0002c64f) tabs_4_1_passive_pane_t1_ParamLimits

0xd2b9,	// (0x0002c900) tabs_2_active_pane_t1_ParamLimits

0xd2b9,	// (0x0002c900) tabs_2_passive_pane_t1_ParamLimits

0x3601,	// (0x00022c48) bg_active_tab_pane_cp4_ParamLimits

0xd2cb,	// (0x0002c912) tabs_2_long_active_pane_t1_ParamLimits

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp4_ParamLimits

0xd9ff,	// (0x0002d046) list_single_midp_graphic_pane_t1_ParamLimits

0x3601,	// (0x00022c48) bg_active_tab_pane_cp5_ParamLimits

0xd2de,	// (0x0002c925) tabs_3_long_active_pane_t1_ParamLimits

0x4e44,	// (0x0002448b) bg_passive_tab_pane_cp5_ParamLimits

0xd9ff,	// (0x0002d046) list_single_midp_graphic_pane_t1

0xd6e2,	// (0x0002cd29) bg_status_flat_pane_ParamLimits

0x4fde,	// (0x00024625) indicator_pane_cp2_ParamLimits

0x4fde,	// (0x00024625) indicator_pane_cp2

0xd860,	// (0x0002cea7) navi_pane_srt_ParamLimits

0xd860,	// (0x0002cea7) navi_pane_srt

0x512d,	// (0x00024774) popup_clock_digital_analogue_window_cp1

0x36de,	// (0x00022d25) indicator_pane_t1

0x4b06,	// (0x0002414d) copy_highlight_pane

0x4b06,	// (0x0002414d) cursor_graphics_pane

0x4b06,	// (0x0002414d) graphic_within_text_pane

0x4b06,	// (0x0002414d) link_highlight_pane

0x6383,	// (0x000259ca) popup_preview_text_window_t5_ParamLimits

0x6383,	// (0x000259ca) popup_preview_text_window_t5

0x4c28,	// (0x0002426f) cursor_digital_pane

0x4c28,	// (0x0002426f) cursor_primary_pane

0x4c39,	// (0x00024280) cursor_primary_small_pane

0x4c41,	// (0x00024288) cursor_secondary_pane

0x4c49,	// (0x00024290) cursor_title_pane

0x4c28,	// (0x0002426f) link_highlight_digital_pane

0x4c30,	// (0x00024277) link_highlight_primary_pane

0x4c39,	// (0x00024280) link_highlight_primary_small_pane

0x4c41,	// (0x00024288) link_highlight_secondary_pane

0x4c49,	// (0x00024290) link_highlight_title_pane

0x4c28,	// (0x0002426f) copy_highlight_digital_pane

0x4c28,	// (0x0002426f) copy_highlight_primary_pane

0x4c39,	// (0x00024280) copy_highlight_primary_small_pane

0x4c41,	// (0x00024288) copy_highlight_secondary_pane

0x4c49,	// (0x00024290) copy_highlight_title_pane

0x4c41,	// (0x00024288) graphic_text_digital_pane

0x5c12,	// (0x00025259) graphic_text_primary_pane

0x5c1b,	// (0x00025262) graphic_text_primary_small_pane

0x4c39,	// (0x00024280) graphic_text_secondary_pane

0x4c28,	// (0x0002426f) graphic_text_title_pane

0xd51e,	// (0x0002cb65) cursor_primary_pane_g1

0x5c04,	// (0x0002524b) cursor_text_primary_t1

0xdb02,	// (0x0002d149) cursor_primary_small_pane_g1

0x5bf6,	// (0x0002523d) cursor_text_primary_small_t1

0xdaf8,	// (0x0002d13f) cursor_primary_small_pane_g1_copy1

0x5bde,	// (0x00025225) cursor_text_primary_small_t1_copy1

0x5bbc,	// (0x00025203) cursor_text_title_t1

0xdaee,	// (0x0002d135) cursor_title_pane_g1

0xd51e,	// (0x0002cb65) cursor_digital_pane_g1

0x4c5b,	// (0x000242a2) cursor_text_digital_t1

0x4c80,	// (0x000242c7) link_highlight_primary_pane_g1

0x5b65,	// (0x000251ac) link_highlight_primary_pane_t1

0x4c69,	// (0x000242b0) link_highlight_primary_small_pane_g1

0x4c71,	// (0x000242b8) link_highlight_primary_small_pane_t1

0x4c80,	// (0x000242c7) link_highlight_secondary_pane_g1

0x4c88,	// (0x000242cf) link_highlight_secondary_pane_t1

0x5ad9,	// (0x00025120) link_highlight_title_pane_g1

0x5ae1,	// (0x00025128) link_highlight_title_pane_t1

0x5ac2,	// (0x00025109) link_highlight_digital_pane_g1

0x5aca,	// (0x00025111) link_highlight_digital_pane_t1

0x599a,	// (0x00024fe1) copy_highlight_primary_pane_g1

0x59a2,	// (0x00024fe9) copy_highlight_primary_pane_t1

0x5974,	// (0x00024fbb) copy_highlight_primary_small_pane_g1

0x598b,	// (0x00024fd2) copy_highlight_primary_small_pane_t1

0x4c97,	// (0x000242de) copy_highlight_secondary_pane_g1

0x4c9f,	// (0x000242e6) copy_highlight_secondary_pane_t1

0x5974,	// (0x00024fbb) copy_highlight_title_pane_g1

0x597c,	// (0x00024fc3) copy_highlight_title_pane_t1

0x599a,	// (0x00024fe1) copy_highlight_digital_pane_g1

0x6c2b,	// (0x00026272) copy_highlight_digital_pane_t1

0x6b7f,	// (0x000261c6) graphic_text_primary_pane_g1

0x6c0f,	// (0x00026256) graphic_text_primary_pane_t1

0x6c1d,	// (0x00026264) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002f009) graphic_text_primary_pane_t

0x6beb,	// (0x00026232) graphic_text_primary_small_pane_g1

0x6bf3,	// (0x0002623a) graphic_text_primary_small_pane_t1

0x6c01,	// (0x00026248) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002f004) graphic_text_primary_small_pane_t

0x6bc7,	// (0x0002620e) graphic_text_secondary_pane_g1

0x6bcf,	// (0x00026216) graphic_text_secondary_pane_t1

0x6bdd,	// (0x00026224) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002efff) graphic_text_secondary_pane_t

0x6ba3,	// (0x000261ea) graphic_text_title_pane_g1

0x6bab,	// (0x000261f2) graphic_text_title_pane_t1

0x6bb9,	// (0x00026200) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002effa) graphic_text_title_pane_t

0x6b7f,	// (0x000261c6) graphic_text_digital_pane_g1

0x6b87,	// (0x000261ce) graphic_text_digital_pane_t1

0x6b95,	// (0x000261dc) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002eff5) graphic_text_digital_pane_t

0x3601,	// (0x00022c48) navi_icon_pane_srt_ParamLimits

0x3601,	// (0x00022c48) navi_icon_pane_srt

0x3521,	// (0x00022b68) navi_midp_pane_srt

0x3521,	// (0x00022b68) navi_navi_pane_srt

0x3601,	// (0x00022c48) navi_text_pane_srt_ParamLimits

0x3601,	// (0x00022c48) navi_text_pane_srt

0x6b4a,	// (0x00026191) navi_navi_icon_text_pane_srt

0x6b52,	// (0x00026199) navi_navi_pane_srt_g1_ParamLimits

0x6b52,	// (0x00026199) navi_navi_pane_srt_g1

0x6b64,	// (0x000261ab) navi_navi_pane_srt_g2_ParamLimits

0x6b64,	// (0x000261ab) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002eff0) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002eff0) navi_navi_pane_srt_g

0x6b76,	// (0x000261bd) navi_navi_tabs_pane_srt

0x6b4a,	// (0x00026191) navi_navi_text_pane_srt

0x6b4a,	// (0x00026191) navi_navi_volume_pane_srt

0x6b3b,	// (0x00026182) navi_navi_text_pane_srt_t1

0x2583,	// (0x00021bca) navi_navi_volume_pane_srt_g1

0x258b,	// (0x00021bd2) volume_small_pane_srt_ParamLimits

0x258b,	// (0x00021bd2) volume_small_pane_srt

0x19e8,	// (0x0002102f) volume_small_pane_srt_g1_ParamLimits

0x19e8,	// (0x0002102f) volume_small_pane_srt_g1

0x19f8,	// (0x0002103f) volume_small_pane_srt_g2_ParamLimits

0x19f8,	// (0x0002103f) volume_small_pane_srt_g2

0x1a09,	// (0x00021050) volume_small_pane_srt_g3_ParamLimits

0x1a09,	// (0x00021050) volume_small_pane_srt_g3

0x1a1a,	// (0x00021061) volume_small_pane_srt_g4_ParamLimits

0x1a1a,	// (0x00021061) volume_small_pane_srt_g4

0x1a2b,	// (0x00021072) volume_small_pane_srt_g5_ParamLimits

0x1a2b,	// (0x00021072) volume_small_pane_srt_g5

0x1a3c,	// (0x00021083) volume_small_pane_srt_g6_ParamLimits

0x1a3c,	// (0x00021083) volume_small_pane_srt_g6

0x1a4d,	// (0x00021094) volume_small_pane_srt_g7_ParamLimits

0x1a4d,	// (0x00021094) volume_small_pane_srt_g7

0x1a5e,	// (0x000210a5) volume_small_pane_srt_g8_ParamLimits

0x1a5e,	// (0x000210a5) volume_small_pane_srt_g8

0x1a6f,	// (0x000210b6) volume_small_pane_srt_g9_ParamLimits

0x1a6f,	// (0x000210b6) volume_small_pane_srt_g9

0x1a80,	// (0x000210c7) volume_small_pane_srt_g10_ParamLimits

0x1a80,	// (0x000210c7) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002eda4) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002eda4) volume_small_pane_srt_g

0x39db,	// (0x00023022) query_popup_data_pane_cp2

0x6b21,	// (0x00026168) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b21,	// (0x00026168) navi_navi_icon_text_pane_srt_t1

0x5c12,	// (0x00025259) navi_tabs_2_long_pane_srt

0x5c12,	// (0x00025259) navi_tabs_2_pane_srt

0x5c12,	// (0x00025259) navi_tabs_3_long_pane_srt

0x5c12,	// (0x00025259) navi_tabs_3_pane_srt

0x5c12,	// (0x00025259) navi_tabs_4_pane_srt

0x2563,	// (0x00021baa) tabs_2_active_pane_srt_ParamLimits

0x2563,	// (0x00021baa) tabs_2_active_pane_srt

0x2573,	// (0x00021bba) tabs_2_passive_pane_srt_ParamLimits

0x2573,	// (0x00021bba) tabs_2_passive_pane_srt

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp1_srt_ParamLimits

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp1_srt

0x6aed,	// (0x00026134) bg_passive_tab_pane_g1_cp1_srt

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp1_srt

0x6af6,	// (0x0002613d) bg_passive_tab_pane_g3_cp1_srt

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp1_srt_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp1_srt

0x6aff,	// (0x00026146) tabs_2_active_pane_srt_g1

0xdec1,	// (0x0002d508) tabs_2_active_pane_srt_t1_ParamLimits

0xdec1,	// (0x0002d508) tabs_2_active_pane_srt_t1

0x6aed,	// (0x00026134) bg_active_tab_pane_g1_cp1_srt

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp1_srt

0x6af6,	// (0x0002613d) bg_active_tab_pane_g3_cp1_srt

0x2530,	// (0x00021b77) tabs_3_active_pane_srt_ParamLimits

0x2530,	// (0x00021b77) tabs_3_active_pane_srt

0x2541,	// (0x00021b88) tabs_3_passive_pane_cp_srt_ParamLimits

0x2541,	// (0x00021b88) tabs_3_passive_pane_cp_srt

0x2552,	// (0x00021b99) tabs_3_passive_pane_srt_ParamLimits

0x2552,	// (0x00021b99) tabs_3_passive_pane_srt

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp2_srt_ParamLimits

0x53c2,	// (0x00024a09) bg_passive_tab_pane_cp2_srt

0x4cae,	// (0x000242f5) bg_passive_tab_pane_g1_cp2_srt

0x4748,	// (0x00023d8f) bg_passive_tab_pane_g2_cp2_srt

0x4cb7,	// (0x000242fe) bg_passive_tab_pane_g3_cp2_srt

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp2_srt_ParamLimits

0x387c,	// (0x00022ec3) bg_active_tab_pane_cp2_srt

0x6ad3,	// (0x0002611a) tabs_3_active_pane_srt_g1

0xdeab,	// (0x0002d4f2) tabs_3_active_pane_srt_t1_ParamLimits

0xdeab,	// (0x0002d4f2) tabs_3_active_pane_srt_t1

0x4cae,	// (0x000242f5) bg_active_tab_pane_g1_cp2_srt

0x4748,	// (0x00023d8f) bg_active_tab_pane_g2_cp2_srt

0x4cb7,	// (0x000242fe) bg_active_tab_pane_g3_cp2_srt

0x24e8,	// (0x00021b2f) tabs_4_active_pane_srt_ParamLimits

0x24e8,	// (0x00021b2f) tabs_4_active_pane_srt

0x24fa,	// (0x00021b41) tabs_4_passive_pane_cp2_srt_ParamLimits

0x24fa,	// (0x00021b41) tabs_4_passive_pane_cp2_srt

0x1be5,	// (0x0002122c) aid_size_cell_toolbar

0x672e,	// (0x00025d75) main_idle_act_pane_ParamLimits

0x1d86,	// (0x000213cd) popup_large_graphic_colour_window_ParamLimits

0xc8f2,	// (0x0002bf39) popup_toolbar_window_ParamLimits

0xc8f2,	// (0x0002bf39) popup_toolbar_window

0x68e6,	// (0x00025f2d) list_single_graphic_2heading_pane_ParamLimits

0x68e6,	// (0x00025f2d) list_single_graphic_2heading_pane

0x4210,	// (0x00023857) aid_size_cell_apps_grid_lsc_pane

0x4222,	// (0x00023869) aid_size_cell_apps_grid_prt_pane

0x4e44,	// (0x0002448b) bg_wml_button_pane_cp1_ParamLimits

0x4e44,	// (0x0002448b) bg_wml_button_pane_cp1

0xdaa4,	// (0x0002d0eb) form_midp_field_text_pane_t1_ParamLimits

0x53c2,	// (0x00024a09) input_focus_pane_cp050_ParamLimits

0x562f,	// (0x00024c76) list_midp_form_text_pane_ParamLimits

0x55d5,	// (0x00024c1c) input_focus_pane_cp051_ParamLimits

0x55e9,	// (0x00024c30) list_midp_choice_pane_ParamLimits

0xda41,	// (0x0002d088) list_single_2graphic_pane_cp3_ParamLimits

0xda41,	// (0x0002d088) list_single_2graphic_pane_cp3

0xda54,	// (0x0002d09b) list_single_midp_graphic_pane_ParamLimits

0xda54,	// (0x0002d09b) list_single_midp_graphic_pane

0x0818,	// (0x0001fe5f) list_single_graphic_2heading_pane_g1_ParamLimits

0x0818,	// (0x0001fe5f) list_single_graphic_2heading_pane_g1

0x0824,	// (0x0001fe6b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0824,	// (0x0001fe6b) list_single_graphic_2heading_pane_g4

0x0830,	// (0x0001fe77) list_single_graphic_2heading_pane_g5_ParamLimits

0x0830,	// (0x0001fe77) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002edf7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002edf7) list_single_graphic_2heading_pane_g

0x083c,	// (0x0001fe83) list_single_graphic_2heading_pane_t1_ParamLimits

0x083c,	// (0x0001fe83) list_single_graphic_2heading_pane_t1

0x0850,	// (0x0001fe97) list_single_graphic_2heading_pane_t2_ParamLimits

0x0850,	// (0x0001fe97) list_single_graphic_2heading_pane_t2

0x086a,	// (0x0001feb1) list_single_graphic_2heading_pane_t3_ParamLimits

0x086a,	// (0x0001feb1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002edfe) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002edfe) list_single_graphic_2heading_pane_t

0x528c,	// (0x000248d3) bg_popup_sub_pane_cp2

0x52b6,	// (0x000248fd) grid_toobar_pane

0x219a,	// (0x000217e1) cell_toolbar_pane_ParamLimits

0x219a,	// (0x000217e1) cell_toolbar_pane

0x52f2,	// (0x00024939) cell_toolbar_pane_g1_ParamLimits

0x52f2,	// (0x00024939) cell_toolbar_pane_g1

0x5306,	// (0x0002494d) cell_toolbar_pane_g2_ParamLimits

0x5306,	// (0x0002494d) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002ee05) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002ee05) cell_toolbar_pane_g

0x5328,	// (0x0002496f) grid_highlight_pane_cp2_ParamLimits

0x5328,	// (0x0002496f) grid_highlight_pane_cp2

0x5342,	// (0x00024989) toolbar_button_pane

0x534e,	// (0x00024995) toolbar_button_pane_g1

0x5356,	// (0x0002499d) toolbar_button_pane_g2

0x535e,	// (0x000249a5) toolbar_button_pane_g3

0x5366,	// (0x000249ad) toolbar_button_pane_g4

0x536e,	// (0x000249b5) toolbar_button_pane_g5

0x5376,	// (0x000249bd) toolbar_button_pane_g6

0x537e,	// (0x000249c5) toolbar_button_pane_g7

0x5386,	// (0x000249cd) toolbar_button_pane_g8

0x538e,	// (0x000249d5) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002ee0a) toolbar_button_pane_g

0x21d2,	// (0x00021819) list_single_2graphic_pane_g1_cp3_ParamLimits

0x21d2,	// (0x00021819) list_single_2graphic_pane_g1_cp3

0xc94a,	// (0x0002bf91) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc94a,	// (0x0002bf91) list_single_2graphic_pane_g2_cp3

0x21ef,	// (0x00021836) list_single_2graphic_pane_g3_cp3

0x21f7,	// (0x0002183e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x21f7,	// (0x0002183e) list_single_2graphic_pane_g4_cp3

0x2203,	// (0x0002184a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2203,	// (0x0002184a) list_single_2graphic_pane_t1_cp3

0x586b,	// (0x00024eb2) list_single_midp_graphic_pane_g2_ParamLimits

0x586b,	// (0x00024eb2) list_single_midp_graphic_pane_g2

0x1bed,	// (0x00021234) aid_zoom_text_primary

0x07ec,	// (0x0001fe33) aid_zoom_text_secondary

0xd576,	// (0x0002cbbd) status_small_pane_g7_ParamLimits

0xd576,	// (0x0002cbbd) status_small_pane_g7

0xd599,	// (0x0002cbe0) status_small_pane_t1_ParamLimits

0xc054,	// (0x0002b69b) title_pane_g2

0x0003,

0xf54e,	// (0x0002eb95) title_pane_g

0xd1be,	// (0x0002c805) aid_size_cell_colour_1_pane_ParamLimits

0xd1be,	// (0x0002c805) aid_size_cell_colour_1_pane

0xd1d2,	// (0x0002c819) aid_size_cell_colour_2_pane_ParamLimits

0xd1d2,	// (0x0002c819) aid_size_cell_colour_2_pane

0xd1e6,	// (0x0002c82d) aid_size_cell_colour_3_pane_ParamLimits

0xd1e6,	// (0x0002c82d) aid_size_cell_colour_3_pane

0xd1fa,	// (0x0002c841) aid_size_cell_colour_4_pane_ParamLimits

0xd1fa,	// (0x0002c841) aid_size_cell_colour_4_pane

0x1645,	// (0x00020c8c) title_pane_stacon_g1_ParamLimits

0x1645,	// (0x00020c8c) title_pane_stacon_g1

0x59f9,	// (0x00025040) popup_note_wait_window_g3_ParamLimits

0x59f9,	// (0x00025040) popup_note_wait_window_g3

0x5a6f,	// (0x000250b6) popup_note_wait_window_t5_ParamLimits

0x5a6f,	// (0x000250b6) popup_note_wait_window_t5

0x3521,	// (0x00022b68) main_feb_china_hwr_fs_writing_pane

0xc2fa,	// (0x0002b941) popup_feb_china_hwr_fs_window_ParamLimits

0xc2fa,	// (0x0002b941) popup_feb_china_hwr_fs_window

0xc95b,	// (0x0002bfa2) aid_size_cell_hwr_fs_ParamLimits

0xc95b,	// (0x0002bfa2) aid_size_cell_hwr_fs

0x53c2,	// (0x00024a09) bg_popup_sub_pane_cp3_ParamLimits

0x53c2,	// (0x00024a09) bg_popup_sub_pane_cp3

0xc970,	// (0x0002bfb7) grid_hwr_fs_pane_ParamLimits

0xc970,	// (0x0002bfb7) grid_hwr_fs_pane

0x224c,	// (0x00021893) linegrid_hwr_fs_pane_ParamLimits

0x224c,	// (0x00021893) linegrid_hwr_fs_pane

0xc988,	// (0x0002bfcf) cell_hwr_fs_pane_ParamLimits

0xc988,	// (0x0002bfcf) cell_hwr_fs_pane

0x53ce,	// (0x00024a15) linegrid_hwr_fs_pane_g1_ParamLimits

0x53ce,	// (0x00024a15) linegrid_hwr_fs_pane_g1

0xda15,	// (0x0002d05c) linegrid_hwr_fs_pane_g2_ParamLimits

0xda15,	// (0x0002d05c) linegrid_hwr_fs_pane_g2

0x53ec,	// (0x00024a33) linegrid_hwr_fs_pane_g3_ParamLimits

0x53ec,	// (0x00024a33) linegrid_hwr_fs_pane_g3

0x227e,	// (0x000218c5) linegrid_hwr_fs_pane_g4_ParamLimits

0x227e,	// (0x000218c5) linegrid_hwr_fs_pane_g4

0x2298,	// (0x000218df) linegrid_hwr_fs_pane_g5_ParamLimits

0x2298,	// (0x000218df) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002ee30) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002ee30) linegrid_hwr_fs_pane_g

0x53f8,	// (0x00024a3f) cell_hwr_fs_pane_g1_ParamLimits

0x53f8,	// (0x00024a3f) cell_hwr_fs_pane_g1

0x51c3,	// (0x0002480a) cell_hwr_fs_pane_g2_ParamLimits

0x51c3,	// (0x0002480a) cell_hwr_fs_pane_g2

0xda27,	// (0x0002d06e) cell_hwr_fs_pane_g3_ParamLimits

0xda27,	// (0x0002d06e) cell_hwr_fs_pane_g3

0xda34,	// (0x0002d07b) cell_hwr_fs_pane_g4_ParamLimits

0xda34,	// (0x0002d07b) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002ee3b) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002ee3b) cell_hwr_fs_pane_g

0xc9ae,	// (0x0002bff5) cell_hwr_fs_pane_t1

0x3521,	// (0x00022b68) grid_highlight_pane_cp6

0x3521,	// (0x00022b68) main_idle_act2_pane

0x3fc7,	// (0x0002360e) aid_inside_area_popup_secondary

0xdb0c,	// (0x0002d153) aid_inside_area_window_primary_ParamLimits

0xdb0c,	// (0x0002d153) aid_inside_area_window_primary

0x6c3a,	// (0x00026281) ai2_news_ticker_pane

0x6c42,	// (0x00026289) aid_size_cell_ai1_link_ParamLimits

0x6c42,	// (0x00026289) aid_size_cell_ai1_link

0xded7,	// (0x0002d51e) popup_ai2_data_window_ParamLimits

0xded7,	// (0x0002d51e) popup_ai2_data_window

0x6c72,	// (0x000262b9) popup_ai2_link_window_ParamLimits

0x6c72,	// (0x000262b9) popup_ai2_link_window

0x53c2,	// (0x00024a09) bg_popup_sub_pane_cp4_ParamLimits

0x53c2,	// (0x00024a09) bg_popup_sub_pane_cp4

0x6c86,	// (0x000262cd) grid_ai2_link_pane_ParamLimits

0x6c86,	// (0x000262cd) grid_ai2_link_pane

0x6c9d,	// (0x000262e4) popup_ai2_link_window_g1_ParamLimits

0x6c9d,	// (0x000262e4) popup_ai2_link_window_g1

0x6ca9,	// (0x000262f0) popup_ai2_link_window_g2_ParamLimits

0x6ca9,	// (0x000262f0) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002f00e) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002f00e) popup_ai2_link_window_g

0x6cb8,	// (0x000262ff) ai2_mp_button_pane

0x6cc0,	// (0x00026307) ai2_mp_volume_pane

0x55d5,	// (0x00024c1c) bg_popup_sub_pane_cp5_ParamLimits

0x55d5,	// (0x00024c1c) bg_popup_sub_pane_cp5

0x6cc8,	// (0x0002630f) heading_ai2_gene_pane_ParamLimits

0x6cc8,	// (0x0002630f) heading_ai2_gene_pane

0x6cd4,	// (0x0002631b) list_ai2_gene_pane_ParamLimits

0x6cd4,	// (0x0002631b) list_ai2_gene_pane

0x6d1c,	// (0x00026363) cell_ai2_link_pane_ParamLimits

0x6d1c,	// (0x00026363) cell_ai2_link_pane

0x6d32,	// (0x00026379) cell_ai2_link_pane_g1

0x3521,	// (0x00022b68) grid_highlight_pane_cp7

0x25a0,	// (0x00021be7) ai2_mp_volume_pane_g1

0x6e02,	// (0x00026449) ai2_mp_volume_pane_g2

0xdf01,	// (0x0002d548) list_ai2_gene_pane_t1

0x6e0a,	// (0x00026451) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002f027) ai2_mp_volume_pane_g

0x25a8,	// (0x00021bef) volume_small_pane_cp3

0x6e12,	// (0x00026459) aid_size_cell_ai2_button

0x6e1a,	// (0x00026461) grid_ai2_button_pane

0x6e23,	// (0x0002646a) cell_ai2_button_pane_ParamLimits

0x6e23,	// (0x0002646a) cell_ai2_button_pane

0x3517,	// (0x00022b5e) cell_ai2_button_pane_g1

0x3521,	// (0x00022b68) grid_highlight_pane_cp8

0x6dc2,	// (0x00026409) ai2_gene_pane_t1_ParamLimits

0x6dc2,	// (0x00026409) ai2_gene_pane_t1

0xc274,	// (0x0002b8bb) aid_height_parent_landscape

0xdc7e,	// (0x0002d2c5) aid_height_set_list

0x672e,	// (0x00025d75) aid_size_parent

0x6a61,	// (0x000260a8) aid_size_cell_graphic_pane_ParamLimits

0x6ce4,	// (0x0002632b) popup_ai2_data_window_g1_ParamLimits

0x6ce4,	// (0x0002632b) popup_ai2_data_window_g1

0x6cf0,	// (0x00026337) ai2_news_ticker_pane_g1

0x6cf8,	// (0x0002633f) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002f013) ai2_news_ticker_pane_g

0x6d00,	// (0x00026347) ai2_news_ticker_pane_t1

0x6d0e,	// (0x00026355) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002f018) ai2_news_ticker_pane_t

0x6d3b,	// (0x00026382) heading_ai2_gene_pane_g1

0x6d43,	// (0x0002638a) heading_ai2_gene_pane_t1_ParamLimits

0x6d43,	// (0x0002638a) heading_ai2_gene_pane_t1

0x6d58,	// (0x0002639f) list_highlight_pane_cp6

0xdeeb,	// (0x0002d532) ai2_gene_pane_ParamLimits

0xdeeb,	// (0x0002d532) ai2_gene_pane

0xdf0f,	// (0x0002d556) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002f01d) list_ai2_gene_pane_t

0x6d93,	// (0x000263da) list_highlight_pane_cp8_ParamLimits

0x6d93,	// (0x000263da) list_highlight_pane_cp8

0x6da4,	// (0x000263eb) ai2_gene_pane_g1_ParamLimits

0x6da4,	// (0x000263eb) ai2_gene_pane_g1

0x6db6,	// (0x000263fd) ai2_gene_pane_g2_ParamLimits

0x6db6,	// (0x000263fd) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002f022) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002f022) ai2_gene_pane_g

0x3e06,	// (0x0002344d) scroll_pane_cp12

0xc233,	// (0x0002b87a) control_pane_t3_ParamLimits

0xc233,	// (0x0002b87a) control_pane_t3

0xd58a,	// (0x0002cbd1) status_small_pane_g8_ParamLimits

0xd58a,	// (0x0002cbd1) status_small_pane_g8

0xc38f,	// (0x0002b9d6) popup_find_window_ParamLimits

0xc61c,	// (0x0002bc63) popup_note_image_window_ParamLimits

0x0818,	// (0x0001fe5f) list_double2_graphic_pane_vc_g1_ParamLimits

0x0818,	// (0x0001fe5f) list_double2_graphic_pane_vc_g1

0x0824,	// (0x0001fe6b) list_double2_graphic_pane_vc_g2_ParamLimits

0x0824,	// (0x0001fe6b) list_double2_graphic_pane_vc_g2

0x0830,	// (0x0001fe77) list_double2_graphic_pane_vc_g3_ParamLimits

0x0830,	// (0x0001fe77) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002edf7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002edf7) list_double2_graphic_pane_vc_g

0x0882,	// (0x0001fec9) list_double2_graphic_pane_vc_t1_ParamLimits

0x0882,	// (0x0001fec9) list_double2_graphic_pane_vc_t1

0x0824,	// (0x0001fe6b) list_single_heading_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_heading_pane_vc_g1

0x0830,	// (0x0001fe77) list_single_heading_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_heading_pane_vc_g

0x0898,	// (0x0001fedf) list_single_heading_pane_vc_t1_ParamLimits

0x0898,	// (0x0001fedf) list_single_heading_pane_vc_t1

0x08b0,	// (0x0001fef7) list_single_heading_pane_vc_t2_ParamLimits

0x08b0,	// (0x0001fef7) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002ee1f) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002ee1f) list_single_heading_pane_vc_t

0x08cc,	// (0x0001ff13) list_setting_number_pane_vc_g1_ParamLimits

0x08cc,	// (0x0001ff13) list_setting_number_pane_vc_g1

0x08d8,	// (0x0001ff1f) list_setting_number_pane_vc_g2_ParamLimits

0x08d8,	// (0x0001ff1f) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ee24) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ee24) list_setting_number_pane_vc_g

0x08e4,	// (0x0001ff2b) list_setting_number_pane_vc_t1_ParamLimits

0x08e4,	// (0x0001ff2b) list_setting_number_pane_vc_t1

0x08f8,	// (0x0001ff3f) list_setting_number_pane_vc_t2_ParamLimits

0x08f8,	// (0x0001ff3f) list_setting_number_pane_vc_t2

0x0914,	// (0x0001ff5b) list_setting_number_pane_vc_t3_ParamLimits

0x0914,	// (0x0001ff5b) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002ee29) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002ee29) list_setting_number_pane_vc_t

0x0932,	// (0x0001ff79) set_value_pane_vc_ParamLimits

0x0932,	// (0x0001ff79) set_value_pane_vc

0x68e6,	// (0x00025f2d) list_double2_graphic_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double2_graphic_pane_vc

0x68e6,	// (0x00025f2d) list_double2_large_graphic_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double2_large_graphic_pane_vc

0x68e6,	// (0x00025f2d) list_double2_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double2_pane_vc

0x68e6,	// (0x00025f2d) list_double_graphic_heading_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_graphic_heading_pane_vc

0x68e6,	// (0x00025f2d) list_double_graphic_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_graphic_pane_vc

0x68e6,	// (0x00025f2d) list_double_heading_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_heading_pane_vc

0x68f8,	// (0x00025f3f) list_double_large_graphic_pane_vc_ParamLimits

0x68f8,	// (0x00025f3f) list_double_large_graphic_pane_vc

0x68e6,	// (0x00025f2d) list_double_number_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_number_pane_vc

0x68e6,	// (0x00025f2d) list_double_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_pane_vc

0x68e6,	// (0x00025f2d) list_double_time_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_double_time_pane_vc

0x68e6,	// (0x00025f2d) list_setting_number_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_setting_number_pane_vc

0x68e6,	// (0x00025f2d) list_setting_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_setting_pane_vc

0x68e6,	// (0x00025f2d) list_single_graphic_heading_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_single_graphic_heading_pane_vc

0x68e6,	// (0x00025f2d) list_single_heading_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_single_heading_pane_vc

0x68e6,	// (0x00025f2d) list_single_number_heading_pane_vc_ParamLimits

0x68e6,	// (0x00025f2d) list_single_number_heading_pane_vc

0x0818,	// (0x0001fe5f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0818,	// (0x0001fe5f) list_double_graphic_heading_pane_vc_g1

0x0824,	// (0x0001fe6b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0824,	// (0x0001fe6b) list_double_graphic_heading_pane_vc_g2

0x0830,	// (0x0001fe77) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0830,	// (0x0001fe77) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002edf7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002edf7) list_double_graphic_heading_pane_vc_g

0x0a8c,	// (0x000200d3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0a8c,	// (0x000200d3) list_double_graphic_heading_pane_vc_t1

0x0aa8,	// (0x000200ef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0aa8,	// (0x000200ef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002f02e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002f02e) list_double_graphic_heading_pane_vc_t

0x08cc,	// (0x0001ff13) list_setting_pane_vc_g1_ParamLimits

0x08cc,	// (0x0001ff13) list_setting_pane_vc_g1

0x08d8,	// (0x0001ff1f) list_setting_pane_vc_g2_ParamLimits

0x08d8,	// (0x0001ff1f) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002ee24) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002ee24) list_setting_pane_vc_g

0x0ac6,	// (0x0002010d) list_setting_pane_vc_t1_ParamLimits

0x0ac6,	// (0x0002010d) list_setting_pane_vc_t1

0x0ae2,	// (0x00020129) list_setting_pane_vc_t2_ParamLimits

0x0ae2,	// (0x00020129) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002f05c) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002f05c) list_setting_pane_vc_t

0x0932,	// (0x0001ff79) set_value_pane_cp_vc_ParamLimits

0x0932,	// (0x0001ff79) set_value_pane_cp_vc

0x0824,	// (0x0001fe6b) list_single_number_heading_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_single_number_heading_pane_vc_g1

0x0830,	// (0x0001fe77) list_single_number_heading_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_single_number_heading_pane_vc_g

0x0898,	// (0x0001fedf) list_single_number_heading_pane_vc_t1_ParamLimits

0x0898,	// (0x0001fedf) list_single_number_heading_pane_vc_t1

0x0afe,	// (0x00020145) list_single_number_heading_pane_vc_t2_ParamLimits

0x0afe,	// (0x00020145) list_single_number_heading_pane_vc_t2

0x0b12,	// (0x00020159) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b12,	// (0x00020159) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002f061) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002f061) list_single_number_heading_pane_vc_t

0x0818,	// (0x0001fe5f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0818,	// (0x0001fe5f) list_single_graphic_heading_pane_vc_g1

0x0824,	// (0x0001fe6b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0824,	// (0x0001fe6b) list_single_graphic_heading_pane_vc_g4

0x0830,	// (0x0001fe77) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0830,	// (0x0001fe77) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002edf7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002edf7) list_single_graphic_heading_pane_vc_g

0x0898,	// (0x0001fedf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0898,	// (0x0001fedf) list_single_graphic_heading_pane_vc_t1

0x0b24,	// (0x0002016b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b24,	// (0x0002016b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002f068) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002f068) list_single_graphic_heading_pane_vc_t

0x0824,	// (0x0001fe6b) list_double2_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_double2_pane_vc_g1

0x0830,	// (0x0001fe77) list_double2_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_double2_pane_vc_g

0x0b38,	// (0x0002017f) list_double2_pane_vc_t1_ParamLimits

0x0b38,	// (0x0002017f) list_double2_pane_vc_t1

0x0b4e,	// (0x00020195) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0b4e,	// (0x00020195) list_double2_large_graphic_pane_vc_g1

0x0824,	// (0x0001fe6b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0824,	// (0x0001fe6b) list_double2_large_graphic_pane_vc_g2

0x0830,	// (0x0001fe77) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0830,	// (0x0001fe77) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002ec2c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002ec2c) list_double2_large_graphic_pane_vc_g

0x0b5a,	// (0x000201a1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0b5a,	// (0x000201a1) list_double2_large_graphic_pane_vc_t1

0x0b70,	// (0x000201b7) list_double_time_pane_vc_g1_ParamLimits

0x0b70,	// (0x000201b7) list_double_time_pane_vc_g1

0x0b7c,	// (0x000201c3) list_double_time_pane_vc_g2_ParamLimits

0x0b7c,	// (0x000201c3) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002f06d) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002f06d) list_double_time_pane_vc_g

0x0b88,	// (0x000201cf) list_double_time_pane_vc_t1_ParamLimits

0x0b88,	// (0x000201cf) list_double_time_pane_vc_t1

0x0bac,	// (0x000201f3) list_double_time_pane_vc_t2_ParamLimits

0x0bac,	// (0x000201f3) list_double_time_pane_vc_t2

0x0bfb,	// (0x00020242) list_double_time_pane_vc_t3_ParamLimits

0x0bfb,	// (0x00020242) list_double_time_pane_vc_t3

0x0c0d,	// (0x00020254) list_double_time_pane_vc_t4_ParamLimits

0x0c0d,	// (0x00020254) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002f072) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002f072) list_double_time_pane_vc_t

0x0824,	// (0x0001fe6b) list_double_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_double_pane_vc_g1

0x0830,	// (0x0001fe77) list_double_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_double_pane_vc_g

0x0c21,	// (0x00020268) list_double_pane_vc_t1_ParamLimits

0x0c21,	// (0x00020268) list_double_pane_vc_t1

0x0c35,	// (0x0002027c) list_double_pane_vc_t2_ParamLimits

0x0c35,	// (0x0002027c) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002f07b) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002f07b) list_double_pane_vc_t

0x0824,	// (0x0001fe6b) list_double_number_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_double_number_pane_vc_g1

0x0830,	// (0x0001fe77) list_double_number_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_double_number_pane_vc_g

0x0c4d,	// (0x00020294) list_double_number_pane_vc_t1_ParamLimits

0x0c4d,	// (0x00020294) list_double_number_pane_vc_t1

0x0c5f,	// (0x000202a6) list_double_number_pane_vc_t2_ParamLimits

0x0c5f,	// (0x000202a6) list_double_number_pane_vc_t2

0x0c73,	// (0x000202ba) list_double_number_pane_vc_t3_ParamLimits

0x0c73,	// (0x000202ba) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002f080) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002f080) list_double_number_pane_vc_t

0x0c8b,	// (0x000202d2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0c8b,	// (0x000202d2) list_double_large_graphic_pane_vc_g1

0x0cad,	// (0x000202f4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cad,	// (0x000202f4) list_double_large_graphic_pane_vc_g2

0x0cc1,	// (0x00020308) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0cc1,	// (0x00020308) list_double_large_graphic_pane_vc_g3

0x0cd0,	// (0x00020317) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0cd0,	// (0x00020317) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002f087) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002f087) list_double_large_graphic_pane_vc_g

0x0cdc,	// (0x00020323) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0cdc,	// (0x00020323) list_double_large_graphic_pane_vc_t1

0x0cf8,	// (0x0002033f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0cf8,	// (0x0002033f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002f090) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002f090) list_double_large_graphic_pane_vc_t

0x0824,	// (0x0001fe6b) list_double_heading_pane_vc_g1_ParamLimits

0x0824,	// (0x0001fe6b) list_double_heading_pane_vc_g1

0x0830,	// (0x0001fe77) list_double_heading_pane_vc_g2_ParamLimits

0x0830,	// (0x0001fe77) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002ec0f) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002ec0f) list_double_heading_pane_vc_g

0x0d1a,	// (0x00020361) list_double_heading_pane_vc_t1_ParamLimits

0x0d1a,	// (0x00020361) list_double_heading_pane_vc_t1

0x0898,	// (0x0001fedf) list_double_heading_pane_vc_t2_ParamLimits

0x0898,	// (0x0001fedf) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002f095) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002f095) list_double_heading_pane_vc_t

0x0d2e,	// (0x00020375) list_double_graphic_pane_vc_g1_ParamLimits

0x0d2e,	// (0x00020375) list_double_graphic_pane_vc_g1

0x0d3a,	// (0x00020381) list_double_graphic_pane_vc_g2_ParamLimits

0x0d3a,	// (0x00020381) list_double_graphic_pane_vc_g2

0x0824,	// (0x0001fe6b) list_double_graphic_pane_vc_g3_ParamLimits

0x0824,	// (0x0001fe6b) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002f09a) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002f09a) list_double_graphic_pane_vc_g

0x0d57,	// (0x0002039e) list_double_graphic_pane_vc_t1_ParamLimits

0x0d57,	// (0x0002039e) list_double_graphic_pane_vc_t1

0x0d81,	// (0x000203c8) list_double_graphic_pane_vc_t2_ParamLimits

0x0d81,	// (0x000203c8) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002f0a3) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002f0a3) list_double_graphic_pane_vc_t

0x11a2,	// (0x000207e9) aid_size_cell_fastswap

0xbe3b,	// (0x0002b482) aid_size_cell_touch_ParamLimits

0xbe3b,	// (0x0002b482) aid_size_cell_touch

0x1405,	// (0x00020a4c) popup_fast_swap_wide_window_ParamLimits

0x1405,	// (0x00020a4c) popup_fast_swap_wide_window

0xbfeb,	// (0x0002b632) touch_pane_ParamLimits

0xbfeb,	// (0x0002b632) touch_pane

0x3e5c,	// (0x000234a3) button_value_adjust_pane_cp2

0x04ff,	// (0x0001fb46) button_value_adjust_pane_cp4

0x051f,	// (0x0001fb66) form_field_data_pane_cp2

0xb9b4,	// (0x0002affb) form_field_data_wide_pane_cp2

0x42dd,	// (0x00023924) bg_scroll_pane_ParamLimits

0x17a7,	// (0x00020dee) scroll_handle_pane_ParamLimits

0x17bb,	// (0x00020e02) scroll_sc2_down_pane_ParamLimits

0x17bb,	// (0x00020e02) scroll_sc2_down_pane

0x430e,	// (0x00023955) scroll_sc2_up_pane_ParamLimits

0x430e,	// (0x00023955) scroll_sc2_up_pane

0xe02f,	// (0x0002d676) grid_wheel_folder_pane_g1_ParamLimits

0xe02f,	// (0x0002d676) grid_wheel_folder_pane_g1

0x1980,	// (0x00020fc7) clock_nsta_pane_cp2_ParamLimits

0x1980,	// (0x00020fc7) clock_nsta_pane_cp2

0x4e44,	// (0x0002448b) listscroll_midp_pane_ParamLimits

0xd485,	// (0x0002cacc) midp_canvas_pane

0x4df6,	// (0x0002443d) nsta_clock_indic_pane

0x4e2a,	// (0x00024471) listscroll_form_pane_vc

0x4e32,	// (0x00024479) listscroll_set_pane_vc_ParamLimits

0x4e32,	// (0x00024479) listscroll_set_pane_vc

0xd70a,	// (0x0002cd51) clock_nsta_pane

0xd734,	// (0x0002cd7b) indicator_nsta_pane

0x528c,	// (0x000248d3) bg_popup_sub_pane_cp2_ParamLimits

0x52a0,	// (0x000248e7) find_pane_cp2_ParamLimits

0x52a0,	// (0x000248e7) find_pane_cp2

0x52b6,	// (0x000248fd) grid_toobar_pane_ParamLimits

0x5396,	// (0x000249dd) list_form_gen_pane_vc_ParamLimits

0x5396,	// (0x000249dd) list_form_gen_pane_vc

0x53ac,	// (0x000249f3) scroll_pane_cp8_vc_ParamLimits

0x53ac,	// (0x000249f3) scroll_pane_cp8_vc

0x5428,	// (0x00024a6f) data_form_wide_pane_vc_ParamLimits

0x5428,	// (0x00024a6f) data_form_wide_pane_vc

0x5434,	// (0x00024a7b) form_field_data_wide_pane_vc_g1

0x543c,	// (0x00024a83) form_field_data_wide_pane_vc_t1_ParamLimits

0x543c,	// (0x00024a83) form_field_data_wide_pane_vc_t1

0x3e70,	// (0x000234b7) input_focus_pane_cp6_vc_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_cp6_vc

0xdac6,	// (0x0002d10d) list_midp_pane_ParamLimits

0x6ac7,	// (0x0002610e) scroll_pane_cp16_ParamLimits

0x6ac7,	// (0x0002610e) scroll_pane_cp16

0x57c2,	// (0x00024e09) button_value_adjust_pane_ParamLimits

0x57c2,	// (0x00024e09) button_value_adjust_pane

0xdc8f,	// (0x0002d2d6) button_value_adjust_pane_cp6_ParamLimits

0xdc8f,	// (0x0002d2d6) button_value_adjust_pane_cp6

0xdda9,	// (0x0002d3f0) settings_code_pane_cp_ParamLimits

0xdda9,	// (0x0002d3f0) settings_code_pane_cp

0x3517,	// (0x00022b5e) cell_touch_pane_g1

0x3517,	// (0x00022b5e) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002ed4a) cell_touch_pane_g

0xdf1d,	// (0x0002d564) cell_touch_pane_cp_ParamLimits

0xdf1d,	// (0x0002d564) cell_touch_pane_cp

0xdf39,	// (0x0002d580) cell_touch_pane_ParamLimits

0xdf39,	// (0x0002d580) cell_touch_pane

0x3517,	// (0x00022b5e) scroll_sc2_down_pane_g1

0x3517,	// (0x00022b5e) scroll_sc2_up_pane_g1

0x3521,	// (0x00022b68) bg_set_opt_pane_cp4_vc

0x6e57,	// (0x0002649e) list_set_graphic_pane_vc_g1_ParamLimits

0x6e57,	// (0x0002649e) list_set_graphic_pane_vc_g1

0x6e63,	// (0x000264aa) list_set_graphic_pane_vc_g2_ParamLimits

0x6e63,	// (0x000264aa) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002f033) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002f033) list_set_graphic_pane_vc_g

0x6e6f,	// (0x000264b6) text_primary_small_cp13_vc_ParamLimits

0x6e6f,	// (0x000264b6) text_primary_small_cp13_vc

0x6e87,	// (0x000264ce) list_set_graphic_pane_vc_ParamLimits

0x6e87,	// (0x000264ce) list_set_graphic_pane_vc

0x3521,	// (0x00022b68) input_focus_pane_cp2_vc

0x3517,	// (0x00022b5e) setting_code_pane_vc_g1

0x364c,	// (0x00022c93) setting_code_pane_vc_t1

0x6e9a,	// (0x000264e1) set_text_pane_vc_t1_ParamLimits

0x6e9a,	// (0x000264e1) set_text_pane_vc_t1

0x3521,	// (0x00022b68) input_focus_pane_cp1_vc

0x6eb6,	// (0x000264fd) list_set_text_pane_vc

0x3517,	// (0x00022b5e) setting_text_pane_vc_g1

0x3521,	// (0x00022b68) bg_set_opt_pane_cp2_vc

0x3643,	// (0x00022c8a) setting_slider_graphic_pane_vc_g1

0x6ec0,	// (0x00026507) setting_slider_graphic_pane_vc_t1

0x6ed0,	// (0x00026517) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002f038) setting_slider_graphic_pane_vc_t

0x6ee0,	// (0x00026527) slider_set_pane_cp_vc

0x6ee8,	// (0x0002652f) slider_set_pane_vc_g1

0x6ef1,	// (0x00026538) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002f03d) slider_set_pane_vc_g

0x3ecb,	// (0x00023512) set_opt_bg_pane_g1_copy1

0x3ed3,	// (0x0002351a) set_opt_bg_pane_g2_copy1

0x6f1d,	// (0x00026564) set_opt_bg_pane_g3_copy1

0x3ee3,	// (0x0002352a) set_opt_bg_pane_g4_copy1

0x3eeb,	// (0x00023532) set_opt_bg_pane_g5_copy1

0x3ef3,	// (0x0002353a) set_opt_bg_pane_g6_copy1

0x6f27,	// (0x0002656e) set_opt_bg_pane_g7_copy1

0x6f2f,	// (0x00026576) set_opt_bg_pane_g8_copy1

0x6f39,	// (0x00026580) set_opt_bg_pane_g9_copy1

0x3521,	// (0x00022b68) bg_set_opt_pane_cp_vc

0x6f43,	// (0x0002658a) setting_slider_pane_vc_t1

0x6f52,	// (0x00026599) setting_slider_pane_vc_t2

0x6f62,	// (0x000265a9) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002f04c) setting_slider_pane_vc_t

0x6f72,	// (0x000265b9) slider_set_pane_vc

0x22bc,	// (0x00021903) volume_set_pane_vc_g1

0x22c5,	// (0x0002190c) volume_set_pane_vc_g2

0x22ce,	// (0x00021915) volume_set_pane_vc_g3

0x22d7,	// (0x0002191e) volume_set_pane_vc_g4

0x22e0,	// (0x00021927) volume_set_pane_vc_g5

0x22e9,	// (0x00021930) volume_set_pane_vc_g6

0x22f2,	// (0x00021939) volume_set_pane_vc_g7

0x22fb,	// (0x00021942) volume_set_pane_vc_g8

0x2304,	// (0x0002194b) volume_set_pane_vc_g9

0x230d,	// (0x00021954) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002eef1) volume_set_pane_vc_g

0x6f7a,	// (0x000265c1) volume_set_pane_vc

0x6f82,	// (0x000265c9) button_value_adjust_pane_cp1_vc

0x6f8c,	// (0x000265d3) list_highlight_pane_cp2_vc

0x6f95,	// (0x000265dc) list_set_pane_vc_ParamLimits

0x6f95,	// (0x000265dc) list_set_pane_vc

0x6ff3,	// (0x0002663a) main_pane_set_vc_t1_ParamLimits

0x6ff3,	// (0x0002663a) main_pane_set_vc_t1

0x7008,	// (0x0002664f) main_pane_set_vc_t2_ParamLimits

0x7008,	// (0x0002664f) main_pane_set_vc_t2

0x701a,	// (0x00026661) main_pane_set_vc_t3_ParamLimits

0x701a,	// (0x00026661) main_pane_set_vc_t3

0x702e,	// (0x00026675) main_pane_set_vc_t4_ParamLimits

0x702e,	// (0x00026675) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002f053) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002f053) main_pane_set_vc_t

0x7042,	// (0x00026689) setting_code_pane_vc_ParamLimits

0x7042,	// (0x00026689) setting_code_pane_vc

0x7053,	// (0x0002669a) setting_slider_graphic_pane_vc

0x7053,	// (0x0002669a) setting_slider_pane_vc

0x7053,	// (0x0002669a) setting_text_pane_vc

0x7053,	// (0x0002669a) setting_volume_pane_vc

0x705d,	// (0x000266a4) scroll_pane_cp121_vc

0x3e4a,	// (0x00023491) set_content_pane_vc

0x7065,	// (0x000266ac) button_value_adjust_pane_g1

0x706e,	// (0x000266b5) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002f0a8) button_value_adjust_pane_g

0x7077,	// (0x000266be) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7077,	// (0x000266be) form_field_slider_wide_pane_vc_t1

0x708b,	// (0x000266d2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x708b,	// (0x000266d2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002f0ad) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002f0ad) form_field_slider_wide_pane_vc_t

0x387c,	// (0x00022ec3) input_focus_pane_cp10_vc_ParamLimits

0x387c,	// (0x00022ec3) input_focus_pane_cp10_vc

0x70b9,	// (0x00026700) slider_cont_pane_cp1_vc_ParamLimits

0x70b9,	// (0x00026700) slider_cont_pane_cp1_vc

0x70cb,	// (0x00026712) slider_form_pane_g1_cp2

0x6ef1,	// (0x00026538) slider_form_pane_g2_cp2

0x70f8,	// (0x0002673f) form_field_slider_pane_vc_t3

0x7106,	// (0x0002674d) form_field_slider_pane_vc_t4

0x7114,	// (0x0002675b) slider_form_pane_vc_ParamLimits

0x7114,	// (0x0002675b) slider_form_pane_vc

0x7121,	// (0x00026768) form_field_slider_pane_vc_t1_ParamLimits

0x7121,	// (0x00026768) form_field_slider_pane_vc_t1

0x708b,	// (0x000266d2) form_field_slider_pane_vc_t2_ParamLimits

0x708b,	// (0x000266d2) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002f0bf) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002f0bf) form_field_slider_pane_vc_t

0x387c,	// (0x00022ec3) input_focus_pane_cp9_vc_ParamLimits

0x387c,	// (0x00022ec3) input_focus_pane_cp9_vc

0x713d,	// (0x00026784) slider_cont_pane_vc_ParamLimits

0x713d,	// (0x00026784) slider_cont_pane_vc

0x7151,	// (0x00026798) list_form_graphic_pane_cp_vc_ParamLimits

0x7151,	// (0x00026798) list_form_graphic_pane_cp_vc

0x5434,	// (0x00024a7b) form_field_popup_wide_pane_vc_g1

0x7166,	// (0x000267ad) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7166,	// (0x000267ad) form_field_popup_wide_pane_vc_t1

0x3e70,	// (0x000234b7) input_focus_pane_cp8_vc_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_cp8_vc

0x71ab,	// (0x000267f2) list_form_wide_pane_vc_ParamLimits

0x71ab,	// (0x000267f2) list_form_wide_pane_vc

0x71b7,	// (0x000267fe) list_form_graphic_pane_vc_g1

0x71bf,	// (0x00026806) list_form_graphic_pane_vc_t1_ParamLimits

0x71bf,	// (0x00026806) list_form_graphic_pane_vc_t1

0x3601,	// (0x00022c48) list_highlight_pane_cp5_vc_ParamLimits

0x3601,	// (0x00022c48) list_highlight_pane_cp5_vc

0x71db,	// (0x00026822) list_form_graphic_pane_vc_ParamLimits

0x71db,	// (0x00026822) list_form_graphic_pane_vc

0x5434,	// (0x00024a7b) form_field_popup_pane_vc_g1

0x71f1,	// (0x00026838) form_field_popup_pane_vc_t1_ParamLimits

0x71f1,	// (0x00026838) form_field_popup_pane_vc_t1

0x3e70,	// (0x000234b7) input_focus_pane_cp7_vc_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_cp7_vc

0x7208,	// (0x0002684f) list_form_pane_vc_ParamLimits

0x7208,	// (0x0002684f) list_form_pane_vc

0x7214,	// (0x0002685b) data_form_pane_vc_t1_ParamLimits

0x7214,	// (0x0002685b) data_form_pane_vc_t1

0x3ecb,	// (0x00023512) input_focus_pane_vc_g1

0x3ed3,	// (0x0002351a) input_focus_pane_vc_g2

0x3edb,	// (0x00023522) input_focus_pane_vc_g3

0x3ee3,	// (0x0002352a) input_focus_pane_vc_g4

0x3eeb,	// (0x00023532) input_focus_pane_vc_g5

0x3ef3,	// (0x0002353a) input_focus_pane_vc_g6

0x3efb,	// (0x00023542) input_focus_pane_vc_g7

0x3f03,	// (0x0002354a) input_focus_pane_vc_g8

0x3f0b,	// (0x00023552) input_focus_pane_vc_g9

0x3517,	// (0x00022b5e) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002ecd3) input_focus_pane_vc_g

0x5428,	// (0x00024a6f) data_form_pane_vc_ParamLimits

0x5428,	// (0x00024a6f) data_form_pane_vc

0x5434,	// (0x00024a7b) form_field_data_pane_vc_g1

0x722f,	// (0x00026876) form_field_data_pane_vc_t1_ParamLimits

0x722f,	// (0x00026876) form_field_data_pane_vc_t1

0x3e70,	// (0x000234b7) input_focus_pane_vc_ParamLimits

0x3e70,	// (0x000234b7) input_focus_pane_vc

0x7249,	// (0x00026890) button_value_adjust_pane_cp3_vc

0x7251,	// (0x00026898) button_value_adjust_pane_cp5_vc

0x7259,	// (0x000268a0) form_field_data_pane_vc_ParamLimits

0x7259,	// (0x000268a0) form_field_data_pane_vc

0x7270,	// (0x000268b7) form_field_data_pane_vc_cp2

0x7278,	// (0x000268bf) form_field_data_wide_pane_vc_ParamLimits

0x7278,	// (0x000268bf) form_field_data_wide_pane_vc

0x728e,	// (0x000268d5) form_field_data_wide_pane_vc_cp2

0x7296,	// (0x000268dd) form_field_popup_pane_vc_ParamLimits

0x7296,	// (0x000268dd) form_field_popup_pane_vc

0x72ad,	// (0x000268f4) form_field_popup_wide_pane_vc_ParamLimits

0x72ad,	// (0x000268f4) form_field_popup_wide_pane_vc

0x72c3,	// (0x0002690a) form_field_slider_pane_vc_ParamLimits

0x72c3,	// (0x0002690a) form_field_slider_pane_vc

0x72d6,	// (0x0002691d) form_field_slider_wide_pane_vc_ParamLimits

0x72d6,	// (0x0002691d) form_field_slider_wide_pane_vc

0xdf57,	// (0x0002d59e) grid_touch_1_pane_ParamLimits

0xdf57,	// (0x0002d59e) grid_touch_1_pane

0xdf6b,	// (0x0002d5b2) grid_touch_2_pane_ParamLimits

0xdf6b,	// (0x0002d5b2) grid_touch_2_pane

0x73a4,	// (0x000269eb) touch_pane_g1_ParamLimits

0x73a4,	// (0x000269eb) touch_pane_g1

0x730d,	// (0x00026954) cell_app_pane_cp_wide_ParamLimits

0x730d,	// (0x00026954) cell_app_pane_cp_wide

0x731e,	// (0x00026965) grid_popup_fast_wide_pane_ParamLimits

0x731e,	// (0x00026965) grid_popup_fast_wide_pane

0x7332,	// (0x00026979) scroll_pane_cp19_ParamLimits

0x7332,	// (0x00026979) scroll_pane_cp19

0x3521,	// (0x00022b68) bg_popup_window_pane_cp20

0x7346,	// (0x0002698d) listscroll_popup_fast_wide_pane

0x4033,	// (0x0002367a) grid_indicator_nsta_pane

0x734e,	// (0x00026995) clock_nsta_pane_g1

0x7357,	// (0x0002699e) clock_nsta_pane_t1

0xdf95,	// (0x0002d5dc) cell_indicator_nsta_pane_ParamLimits

0xdf95,	// (0x0002d5dc) cell_indicator_nsta_pane

0x73a4,	// (0x000269eb) cell_indicator_nsta_pane_g1

0xdfac,	// (0x0002d5f3) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002f0d0) cell_indicator_nsta_pane_g

0x73bf,	// (0x00026a06) clock_nsta_pane_cp

0x73c7,	// (0x00026a0e) indicator_nsta_pane_cp

0x73cf,	// (0x00026a16) nsta_clock_indic_pane_g1

0x36ca,	// (0x00022d11) grid_indicator_pane

0x4403,	// (0x00023a4a) scroll_pane_cp29

0x18cf,	// (0x00020f16) indicator_nsta_pane_cp2_ParamLimits

0x18cf,	// (0x00020f16) indicator_nsta_pane_cp2

0x3601,	// (0x00022c48) main_apps_wheel_pane

0x5649,	// (0x00024c90) form_midp_field_text_pane_ParamLimits

0x5794,	// (0x00024ddb) scroll_bar_cp050_ParamLimits

0x7430,	// (0x00026a77) cell_indicator_pane_ParamLimits

0x7430,	// (0x00026a77) cell_indicator_pane

0x7447,	// (0x00026a8e) cell_indicator_pane_g1

0xdfb9,	// (0x0002d600) grid_wheel_folder_pane_ParamLimits

0xdfb9,	// (0x0002d600) grid_wheel_folder_pane

0xdfc7,	// (0x0002d60e) list_wheel_apps_pane_ParamLimits

0xdfc7,	// (0x0002d60e) list_wheel_apps_pane

0xdfd5,	// (0x0002d61c) main_apps_wheel_pane_g1_ParamLimits

0xdfd5,	// (0x0002d61c) main_apps_wheel_pane_g1

0xdfe1,	// (0x0002d628) main_apps_wheel_pane_g2_ParamLimits

0xdfe1,	// (0x0002d628) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002f0ec) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002f0ec) main_apps_wheel_pane_g

0xdfef,	// (0x0002d636) main_apps_wheel_pane_t1_ParamLimits

0xdfef,	// (0x0002d636) main_apps_wheel_pane_t1

0xe003,	// (0x0002d64a) list_wheel_apps_pane_g1

0xe00b,	// (0x0002d652) list_wheel_apps_pane_g2

0xe013,	// (0x0002d65a) list_wheel_apps_pane_g3

0xe01b,	// (0x0002d662) list_wheel_apps_pane_g4

0xe025,	// (0x0002d66c) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002f0f1) list_wheel_apps_pane_g

0x4986,	// (0x00023fcd) navi_icon_text_pane

0xd5fe,	// (0x0002cc45) aid_fill_nsta

0x750c,	// (0x00026b53) navi_icon_text_pane_g1

0x7518,	// (0x00026b5f) navi_icon_text_pane_t1

0xd462,	// (0x0002caa9) list_set_graphic_pane_t1_ParamLimits

0xd462,	// (0x0002caa9) list_set_graphic_pane_t1

0x5eef,	// (0x00025536) popup_midp_note_alarm_window_t6_ParamLimits

0x5eef,	// (0x00025536) popup_midp_note_alarm_window_t6

0x5f01,	// (0x00025548) popup_midp_note_alarm_window_t7_ParamLimits

0x5f01,	// (0x00025548) popup_midp_note_alarm_window_t7

0x5f13,	// (0x0002555a) popup_midp_note_alarm_window_t8_ParamLimits

0x5f13,	// (0x0002555a) popup_midp_note_alarm_window_t8

0x5f25,	// (0x0002556c) popup_midp_note_alarm_window_t9_ParamLimits

0x5f25,	// (0x0002556c) popup_midp_note_alarm_window_t9

0x5f37,	// (0x0002557e) popup_midp_note_alarm_window_t10_ParamLimits

0x5f37,	// (0x0002557e) popup_midp_note_alarm_window_t10

0x5f49,	// (0x00025590) popup_midp_note_alarm_window_t11_ParamLimits

0x5f49,	// (0x00025590) popup_midp_note_alarm_window_t11

0x5f5b,	// (0x000255a2) scroll_pane_cp17_ParamLimits

0x5f5b,	// (0x000255a2) scroll_pane_cp17

0x22bc,	// (0x00021903) volume_small_pane_cp_g1

0x25b1,	// (0x00021bf8) volume_small_pane_cp_g2

0x25ba,	// (0x00021c01) volume_small_pane_cp_g3

0x25c3,	// (0x00021c0a) volume_small_pane_cp_g4

0x25cc,	// (0x00021c13) volume_small_pane_cp_g5

0x25d5,	// (0x00021c1c) volume_small_pane_cp_g6

0x25de,	// (0x00021c25) volume_small_pane_cp_g7

0x25e7,	// (0x00021c2e) volume_small_pane_cp_g8

0x25f0,	// (0x00021c37) volume_small_pane_cp_g9

0x25f9,	// (0x00021c40) volume_small_pane_cp_g10

0x4bd7,	// (0x0002421e) midp_ticker_pane_g1_ParamLimits

0x4be3,	// (0x0002422a) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002ed9f) midp_ticker_pane_g_ParamLimits

0x4bef,	// (0x00024236) midp_ticker_pane_t1_ParamLimits

0xd622,	// (0x0002cc69) aid_fill_nsta_2

0x5780,	// (0x00024dc7) list_form2_midp_pane

0x68b5,	// (0x00025efc) midp_editing_number_pane_ParamLimits

0x68c4,	// (0x00025f0b) midp_ticker_pane_ParamLimits

0x752a,	// (0x00026b71) form2_midp_field_pane

0x754e,	// (0x00026b95) scroll_pane_cp51

0x756e,	// (0x00026bb5) form2_midp_button_pane_ParamLimits

0x756e,	// (0x00026bb5) form2_midp_button_pane

0x7580,	// (0x00026bc7) form2_midp_content_pane_ParamLimits

0x7580,	// (0x00026bc7) form2_midp_content_pane

0x759a,	// (0x00026be1) form2_midp_field_choice_group_pane

0x75a2,	// (0x00026be9) form2_midp_field_pane_g1

0x75aa,	// (0x00026bf1) form2_midp_field_pane_g2

0x75b2,	// (0x00026bf9) form2_midp_field_pane_g3

0x75ba,	// (0x00026c01) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002f116) form2_midp_field_pane_g

0x75c2,	// (0x00026c09) form2_midp_gauge_slider_pane

0x75ca,	// (0x00026c11) form2_midp_gauge_wait_pane

0x75d2,	// (0x00026c19) form2_midp_image_pane_ParamLimits

0x75d2,	// (0x00026c19) form2_midp_image_pane

0x75f9,	// (0x00026c40) form2_midp_label_pane_ParamLimits

0x75f9,	// (0x00026c40) form2_midp_label_pane

0xe058,	// (0x0002d69f) form2_midp_label_pane_cp_ParamLimits

0xe058,	// (0x0002d69f) form2_midp_label_pane_cp

0x7633,	// (0x00026c7a) form2_midp_string_pane_ParamLimits

0x7633,	// (0x00026c7a) form2_midp_string_pane

0xbc00,	// (0x0002b247) form2_midp_text_pane_ParamLimits

0xbc00,	// (0x0002b247) form2_midp_text_pane

0x7645,	// (0x00026c8c) form2_midp_time_pane

0x7655,	// (0x00026c9c) input_focus_pane_cp51_ParamLimits

0x7655,	// (0x00026c9c) input_focus_pane_cp51

0x766d,	// (0x00026cb4) form2_midp_label_pane_t1_ParamLimits

0x766d,	// (0x00026cb4) form2_midp_label_pane_t1

0xbc19,	// (0x0002b260) form2_mdip_text_pane_t1_ParamLimits

0xbc19,	// (0x0002b260) form2_mdip_text_pane_t1

0x0de4,	// (0x0002042b) form2_midp_time_pane_t1

0x76b6,	// (0x00026cfd) form2_midp_gauge_slider_pane_t1

0xe077,	// (0x0002d6be) form2_midp_gauge_slider_pane_t2

0xe089,	// (0x0002d6d0) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002f11f) form2_midp_gauge_slider_pane_t

0x76ec,	// (0x00026d33) form2_midp_slider_pane

0x76f8,	// (0x00026d3f) form2_midp_gauge_wait_pane_t1

0x7706,	// (0x00026d4d) form2_midp_wait_pane_ParamLimits

0x7706,	// (0x00026d4d) form2_midp_wait_pane

0xe09b,	// (0x0002d6e2) list_single_2graphic_pane_cp4_ParamLimits

0xe09b,	// (0x0002d6e2) list_single_2graphic_pane_cp4

0xda54,	// (0x0002d09b) list_single_midp_graphic_pane_cp_ParamLimits

0xda54,	// (0x0002d09b) list_single_midp_graphic_pane_cp

0x3521,	// (0x00022b68) list_highlight_pane_cp20

0x7760,	// (0x00026da7) list_single_2graphic_pane_g1_cp4

0x7768,	// (0x00026daf) list_single_2graphic_pane_g2_cp4

0x7770,	// (0x00026db7) list_single_2graphic_pane_t1_cp4

0x3601,	// (0x00022c48) list_highlight_pane_cp21

0x777f,	// (0x00026dc6) list_single_midp_graphic_pane_g4_cp

0x778e,	// (0x00026dd5) list_single_midp_graphic_pane_t1_cp

0xe0af,	// (0x0002d6f6) form2_mdip_string_pane_t1_ParamLimits

0xe0af,	// (0x0002d6f6) form2_mdip_string_pane_t1

0x3521,	// (0x00022b68) bg_wml_button_pane_cp2

0x3517,	// (0x00022b5e) form2_midp_image_pane_g1

0x02e9,	// (0x0001f930) list_double_large_graphic_pane_g5_ParamLimits

0x02e9,	// (0x0001f930) list_double_large_graphic_pane_g5

0x4e44,	// (0x0002448b) midp_form_pane_ParamLimits

0x3601,	// (0x00022c48) main_apps_wheel_pane_ParamLimits

0xc69a,	// (0x0002bce1) popup_preview_window_ParamLimits

0xc69a,	// (0x0002bce1) popup_preview_window

0x2145,	// (0x0002178c) popup_touch_info_window_ParamLimits

0x2145,	// (0x0002178c) popup_touch_info_window

0x2163,	// (0x000217aa) popup_touch_menu_window_ParamLimits

0x2163,	// (0x000217aa) popup_touch_menu_window

0x350d,	// (0x00022b54) bg_popup_sub_pane_cp6

0x789c,	// (0x00026ee3) list_touch_menu_pane

0x78a4,	// (0x00026eeb) list_single_touch_menu_pane_ParamLimits

0x78a4,	// (0x00026eeb) list_single_touch_menu_pane

0x78ba,	// (0x00026f01) list_single_touch_menu_pane_t1

0x3601,	// (0x00022c48) bg_popup_sub_pane_cp7_ParamLimits

0x3601,	// (0x00022c48) bg_popup_sub_pane_cp7

0x78c8,	// (0x00026f0f) heading_sub_pane

0x78d0,	// (0x00026f17) list_touch_info_pane_ParamLimits

0x78d0,	// (0x00026f17) list_touch_info_pane

0x78df,	// (0x00026f26) list_single_touch_info_pane_ParamLimits

0x78df,	// (0x00026f26) list_single_touch_info_pane

0x78f1,	// (0x00026f38) list_single_touch_info_pane_t1

0x78ff,	// (0x00026f46) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002f12d) list_single_touch_info_pane_t

0x4b06,	// (0x0002414d) bg_popup_heading_pane_cp

0x790d,	// (0x00026f54) heading_sub_pane_t1

0x53c2,	// (0x00024a09) bg_popup_preview_window_pane_cp_ParamLimits

0x53c2,	// (0x00024a09) bg_popup_preview_window_pane_cp

0x78c8,	// (0x00026f0f) heading_preview_pane

0x78d0,	// (0x00026f17) list_preview_pane_ParamLimits

0x78d0,	// (0x00026f17) list_preview_pane

0x791b,	// (0x00026f62) popup_preview_window_g1

0x78df,	// (0x00026f26) list_single_preview_pane_ParamLimits

0x78df,	// (0x00026f26) list_single_preview_pane

0x7923,	// (0x00026f6a) list_single_preview_pane_g1

0x792b,	// (0x00026f72) list_single_preview_pane_t1

0x78f1,	// (0x00026f38) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002f132) list_single_preview_pane_t

0x7939,	// (0x00026f80) bg_popup_heading_pane_cp2_ParamLimits

0x7939,	// (0x00026f80) bg_popup_heading_pane_cp2

0x794f,	// (0x00026f96) heading_preview_pane_g1

0x7957,	// (0x00026f9e) heading_preview_pane_t1_ParamLimits

0x7957,	// (0x00026f9e) heading_preview_pane_t1

0x36ed,	// (0x00022d34) soft_indicator_pane_t1_ParamLimits

0x3de3,	// (0x0002342a) scroll_pane_ParamLimits

0x42fc,	// (0x00023943) scroll_sc2_left_pane

0x4305,	// (0x0002394c) scroll_sc2_right_pane

0x4324,	// (0x0002396b) scroll_bg_pane_g1_ParamLimits

0x4339,	// (0x00023980) scroll_bg_pane_g2_ParamLimits

0x4351,	// (0x00023998) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002ed2a) scroll_bg_pane_g_ParamLimits

0x4324,	// (0x0002396b) scroll_handle_pane_g1_ParamLimits

0x4373,	// (0x000239ba) scroll_handle_pane_g2_ParamLimits

0x4351,	// (0x00023998) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002ed31) scroll_handle_pane_g_ParamLimits

0x1c0b,	// (0x00021252) popup_choice_list_window_ParamLimits

0x1c0b,	// (0x00021252) popup_choice_list_window

0x5298,	// (0x000248df) choice_list_pane

0x531a,	// (0x00024961) cell_toolbar_pane_t1

0x5342,	// (0x00024989) toolbar_button_pane_ParamLimits

0x6415,	// (0x00025a5c) ai_gene_pane_1_t2_ParamLimits

0x6415,	// (0x00025a5c) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002ef4d) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002ef4d) ai_gene_pane_1_t

0x7974,	// (0x00026fbb) scroll_sc2_left_pane_g1

0x7974,	// (0x00026fbb) scroll_sc2_right_pane_g1

0x4e44,	// (0x0002448b) bg_popup_sub_pane_cp10

0x797e,	// (0x00026fc5) list_choice_list_pane

0x7997,	// (0x00026fde) list_single_choice_list_pane_ParamLimits

0x7997,	// (0x00026fde) list_single_choice_list_pane

0x79aa,	// (0x00026ff1) list_single_choice_list_pane_g1

0x4004,	// (0x0002364b) list_single_choice_list_pane_t1_ParamLimits

0x4004,	// (0x0002364b) list_single_choice_list_pane_t1

0x79b2,	// (0x00026ff9) choice_list_pane_g1

0x79ba,	// (0x00027001) choice_list_pane_t1

0x350d,	// (0x00022b54) input_focus_pane_cp11

0x41db,	// (0x00023822) title_pane_stacon_g2_ParamLimits

0x41db,	// (0x00023822) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002ed10) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002ed10) title_pane_stacon_g

0x4b06,	// (0x0002414d) cursor_press_pane

0xc347,	// (0x0002b98e) popup_fep_hwr_window_ParamLimits

0xc347,	// (0x0002b98e) popup_fep_hwr_window

0x1d31,	// (0x00021378) popup_fep_vkb_window_ParamLimits

0x1d31,	// (0x00021378) popup_fep_vkb_window

0x79c8,	// (0x0002700f) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002f15b) fep_vkb_side_pane_g_ParamLimits

0x263b,	// (0x00021c82) fep_hwr_candidate_pane_ParamLimits

0x263b,	// (0x00021c82) fep_hwr_candidate_pane

0x2665,	// (0x00021cac) fep_hwr_side_pane_ParamLimits

0x2665,	// (0x00021cac) fep_hwr_side_pane

0x2685,	// (0x00021ccc) fep_hwr_top_pane_ParamLimits

0x2685,	// (0x00021ccc) fep_hwr_top_pane

0x269d,	// (0x00021ce4) fep_hwr_write_pane_ParamLimits

0x269d,	// (0x00021ce4) fep_hwr_write_pane

0xfb14,	// (0x0002f15b) fep_vkb_side_pane_g

0x79d0,	// (0x00027017) fep_hwr_top_pane_g1

0x79e2,	// (0x00027029) fep_hwr_top_pane_g2

0x26c9,	// (0x00021d10) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002f137) fep_hwr_top_pane_g

0x26de,	// (0x00021d25) fep_hwr_top_text_pane

0x44f3,	// (0x00023b3a) fep_hwr_top_text_pane_g1

0x7a18,	// (0x0002705f) fep_hwr_top_text_pane_t1

0x27d4,	// (0x00021e1b) fep_hwr_candidate_pane_g1

0x7c6b,	// (0x000272b2) fep_vkb_keypad_pane_g3_ParamLimits

0x7c6b,	// (0x000272b2) fep_vkb_keypad_pane_g3

0x7c93,	// (0x000272da) fep_vkb_keypad_pane_g4_ParamLimits

0x7c93,	// (0x000272da) fep_vkb_keypad_pane_g4

0x7d02,	// (0x00027349) fep_vkb_bottom_pane_g2_ParamLimits

0x7d02,	// (0x00027349) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002f162) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002f162) fep_vkb_bottom_pane_g

0x7974,	// (0x00026fbb) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002f16c) cell_vkb_side_pane_g

0x7d8d,	// (0x000273d4) cell_vkb_side_pane_t1

0x7d9b,	// (0x000273e2) cell_vkb_side_pane_t1_copy1

0x7974,	// (0x00026fbb) bg_fep_vkb_candidate_pane_g2

0x7ec7,	// (0x0002750e) cell_vkb_candidate_pane_ParamLimits

0x7a26,	// (0x0002706d) aid_size_cell_vkb_ParamLimits

0x7a26,	// (0x0002706d) aid_size_cell_vkb

0x7ec7,	// (0x0002750e) cell_vkb_candidate_pane

0x27ee,	// (0x00021e35) bg_popup_fep_shadow_pane_g1

0xe133,	// (0x0002d77a) fep_vkb_bottom_pane_ParamLimits

0xe133,	// (0x0002d77a) fep_vkb_bottom_pane

0x7aea,	// (0x00027131) fep_vkb_candidate_pane_ParamLimits

0x7aea,	// (0x00027131) fep_vkb_candidate_pane

0xe158,	// (0x0002d79f) fep_vkb_keypad_pane_ParamLimits

0xe158,	// (0x0002d79f) fep_vkb_keypad_pane

0xe194,	// (0x0002d7db) fep_vkb_side_pane_ParamLimits

0xe194,	// (0x0002d7db) fep_vkb_side_pane

0xe1d0,	// (0x0002d817) fep_vkb_top_pane_ParamLimits

0xe1d0,	// (0x0002d817) fep_vkb_top_pane

0x7bc4,	// (0x0002720b) fep_vkb_top_pane_g1_ParamLimits

0x7bc4,	// (0x0002720b) fep_vkb_top_pane_g1

0x7bd3,	// (0x0002721a) fep_vkb_top_pane_g2_ParamLimits

0x7bd3,	// (0x0002721a) fep_vkb_top_pane_g2

0x7be2,	// (0x00027229) fep_vkb_top_pane_g3_ParamLimits

0x7be2,	// (0x00027229) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002f152) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002f152) fep_vkb_top_pane_g

0x7c00,	// (0x00027247) fep_vkb_top_text_pane_ParamLimits

0x7c00,	// (0x00027247) fep_vkb_top_text_pane

0xe20c,	// (0x0002d853) fep_vkb_side_pane_g1_ParamLimits

0xe20c,	// (0x0002d853) fep_vkb_side_pane_g1

0x7c5a,	// (0x000272a1) grid_vkb_side_pane_ParamLimits

0x7c5a,	// (0x000272a1) grid_vkb_side_pane

0x27f6,	// (0x00021e3d) bg_popup_fep_shadow_pane_g2

0x27ff,	// (0x00021e46) bg_popup_fep_shadow_pane_g3

0x2807,	// (0x00021e4e) bg_popup_fep_shadow_pane_g4

0x2810,	// (0x00021e57) bg_popup_fep_shadow_pane_g5

0x281a,	// (0x00021e61) bg_popup_fep_shadow_pane_g6

0x2822,	// (0x00021e69) bg_popup_fep_shadow_pane_g7

0x3eeb,	// (0x00023532) bg_popup_fep_shadow_pane_g8

0x7cb1,	// (0x000272f8) grid_vkb_keypad_number_pane_ParamLimits

0x7cb1,	// (0x000272f8) grid_vkb_keypad_number_pane

0x7cc1,	// (0x00027308) grid_vkb_keypad_pane_ParamLimits

0x7cc1,	// (0x00027308) grid_vkb_keypad_pane

0x7ce7,	// (0x0002732e) fep_vkb_bottom_pane_g1_ParamLimits

0x7ce7,	// (0x0002732e) fep_vkb_bottom_pane_g1

0x7d10,	// (0x00027357) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d10,	// (0x00027357) grid_vkb_keypad_bottom_left_pane

0x7d25,	// (0x0002736c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d25,	// (0x0002736c) grid_vkb_keypad_bottom_right_pane

0x7d3a,	// (0x00027381) fep_vkb_top_text_pane_g1

0xe253,	// (0x0002d89a) fep_vkb_top_text_pane_t1

0xe265,	// (0x0002d8ac) cell_vkb_side_pane_ParamLimits

0xe265,	// (0x0002d8ac) cell_vkb_side_pane

0x7974,	// (0x00026fbb) cell_vkb_side_pane_g1

0x7da9,	// (0x000273f0) cell_vkb_keypad_pane_ParamLimits

0x7da9,	// (0x000273f0) cell_vkb_keypad_pane

0x7e1e,	// (0x00027465) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002f17f) bg_popup_fep_shadow_pane_g

0x7974,	// (0x00026fbb) cell_hwr_side_pane_g1

0x7974,	// (0x00026fbb) cell_hwr_side_pane_g2

0x7e28,	// (0x0002746f) cell_vkb_keypad_pane_t1

0xe27b,	// (0x0002d8c2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe27b,	// (0x0002d8c2) cell_vkb_keypad_bottom_left_pane

0xe290,	// (0x0002d8d7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe290,	// (0x0002d8d7) cell_vkb_keypad_bottom_right_pane

0x7974,	// (0x00026fbb) cell_vkb_keypad_bottom_left_pane_g1

0x7974,	// (0x00026fbb) cell_vkb_keypad_bottom_right_pane_g1

0x7e8c,	// (0x000274d3) cell_vkb_keypad_number_pane_ParamLimits

0x7e8c,	// (0x000274d3) cell_vkb_keypad_number_pane

0x7eab,	// (0x000274f2) cell_vkb_keypad_number_pane_g1

0x7eb5,	// (0x000274fc) cell_vkb_keypad_number_pane_g2

0x7ebe,	// (0x00027505) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002f171) cell_vkb_keypad_number_pane_g

0x7e28,	// (0x0002746f) cell_vkb_keypad_number_pane_t1

0x7ee2,	// (0x00027529) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002f16c) cell_hwr_side_pane_g

0x7efb,	// (0x00027542) cell_hwr_side_pane_t1

0x2834,	// (0x00021e7b) cell_hwr_side_pane_t1_copy1

0x7bf2,	// (0x00027239) cell_hwr_candidate_pane_g1

0x2842,	// (0x00021e89) cell_hwr_candidate_pane_t1

0x7974,	// (0x00026fbb) cell_vkb_candidate_pane_g2

0x7f81,	// (0x000275c8) cell_vkb_candidate_pane_t1

0x2602,	// (0x00021c49) bg_popup_fep_shadow_pane_ParamLimits

0x2602,	// (0x00021c49) bg_popup_fep_shadow_pane

0xdb9a,	// (0x0002d1e1) bg_fep_hwr_top_pane_g4

0x79f4,	// (0x0002703b) bg_hwr_side_pane_g1_ParamLimits

0x79f4,	// (0x0002703b) bg_hwr_side_pane_g1

0xc9d4,	// (0x0002c01b) cell_hwr_side_pane_ParamLimits

0xc9d4,	// (0x0002c01b) cell_hwr_side_pane

0x2755,	// (0x00021d9c) fep_hwr_write_pane_g1_ParamLimits

0x2755,	// (0x00021d9c) fep_hwr_write_pane_g1

0x2762,	// (0x00021da9) fep_hwr_write_pane_g2_ParamLimits

0x2762,	// (0x00021da9) fep_hwr_write_pane_g2

0x276f,	// (0x00021db6) fep_hwr_write_pane_g3_ParamLimits

0x276f,	// (0x00021db6) fep_hwr_write_pane_g3

0xc9f4,	// (0x0002c03b) fep_hwr_write_pane_g4_ParamLimits

0xc9f4,	// (0x0002c03b) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002f13e) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002f13e) fep_hwr_write_pane_g

0xdb9a,	// (0x0002d1e1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdb9a,	// (0x0002d1e1) bg_fep_hwr_candidate_pane_g2

0x2792,	// (0x00021dd9) cell_hwr_candidate_pane_ParamLimits

0x2792,	// (0x00021dd9) cell_hwr_candidate_pane

0x27d4,	// (0x00021e1b) fep_hwr_candidate_pane_g1_ParamLimits

0x7a54,	// (0x0002709b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a54,	// (0x0002709b) bg_popup_fep_shadow_pane_cp2

0x7bf2,	// (0x00027239) fep_vkb_top_pane_g4_ParamLimits

0x7bf2,	// (0x00027239) fep_vkb_top_pane_g4

0x7c38,	// (0x0002727f) fep_vkb_side_pane_g2_ParamLimits

0x7c38,	// (0x0002727f) fep_vkb_side_pane_g2

0xb8c2,	// (0x0002af09) list_setting_pane_t4_ParamLimits

0xb8c2,	// (0x0002af09) list_setting_pane_t4

0xb95c,	// (0x0002afa3) list_setting_number_pane_t5_ParamLimits

0xb95c,	// (0x0002afa3) list_setting_number_pane_t5

0x452a,	// (0x00023b71) list_double_heading_pane_cp2_ParamLimits

0x452a,	// (0x00023b71) list_double_heading_pane_cp2

0x3e7e,	// (0x000234c5) list_double_heading_pane_g1_cp2_ParamLimits

0x3e7e,	// (0x000234c5) list_double_heading_pane_g1_cp2

0x3e8a,	// (0x000234d1) list_double_heading_pane_g2_cp2_ParamLimits

0x3e8a,	// (0x000234d1) list_double_heading_pane_g2_cp2

0x7f8f,	// (0x000275d6) list_double_heading_pane_t1_cp2_ParamLimits

0x7f8f,	// (0x000275d6) list_double_heading_pane_t1_cp2

0x7fa5,	// (0x000275ec) list_double_heading_pane_t2_cp2_ParamLimits

0x7fa5,	// (0x000275ec) list_double_heading_pane_t2_cp2

0x34f5,	// (0x00022b3c) aid_value_unit2

0x145f,	// (0x00020aa6) popup_preview_fixed_window

0x388a,	// (0x00022ed1) bg_popup_preview_window_pane_cp02

0x7fb7,	// (0x000275fe) list_preview_fixed_pane

0x7ffd,	// (0x00027644) list_empty_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_empty_pane_fp

0x7ffd,	// (0x00027644) list_single_cale_day_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_cale_day_pane_fp

0x7ffd,	// (0x00027644) list_single_graphic_heading_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_graphic_heading_pane_fp

0x7ffd,	// (0x00027644) list_single_graphic_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_graphic_pane_fp

0x7ffd,	// (0x00027644) list_single_heading_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_heading_pane_fp

0x7ffd,	// (0x00027644) list_single_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_pane_fp

0x8012,	// (0x00027659) list_single_pane_fp_g1_ParamLimits

0x8012,	// (0x00027659) list_single_pane_fp_g1

0x0df7,	// (0x0002043e) list_single_pane_fp_g2_ParamLimits

0x0df7,	// (0x0002043e) list_single_pane_fp_g2

0x0e03,	// (0x0002044a) list_single_pane_fp_g3_ParamLimits

0x0e03,	// (0x0002044a) list_single_pane_fp_g3

0x801e,	// (0x00027665) list_single_pane_fp_g4_ParamLimits

0x801e,	// (0x00027665) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002f1a0) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002f1a0) list_single_pane_fp_g

0x0e17,	// (0x0002045e) list_single_pane_fp_t1_ParamLimits

0x0e17,	// (0x0002045e) list_single_pane_fp_t1

0x0e2e,	// (0x00020475) list_single_graphic_pane_fp_g1_ParamLimits

0x0e2e,	// (0x00020475) list_single_graphic_pane_fp_g1

0x8012,	// (0x00027659) list_single_graphic_pane_fp_g2_ParamLimits

0x8012,	// (0x00027659) list_single_graphic_pane_fp_g2

0x0df7,	// (0x0002043e) list_single_graphic_pane_fp_g3_ParamLimits

0x0df7,	// (0x0002043e) list_single_graphic_pane_fp_g3

0x0e03,	// (0x0002044a) list_single_graphic_pane_fp_g4_ParamLimits

0x0e03,	// (0x0002044a) list_single_graphic_pane_fp_g4

0x801e,	// (0x00027665) list_single_graphic_pane_fp_g5_ParamLimits

0x801e,	// (0x00027665) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f1a9) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f1a9) list_single_graphic_pane_fp_g

0x0e3a,	// (0x00020481) list_single_graphic_pane_fp_t1_ParamLimits

0x0e3a,	// (0x00020481) list_single_graphic_pane_fp_t1

0x0e2e,	// (0x00020475) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e2e,	// (0x00020475) list_single_graphic_heading_pane_fp_g1

0x8012,	// (0x00027659) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8012,	// (0x00027659) list_single_graphic_heading_pane_fp_g2

0x0df7,	// (0x0002043e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0df7,	// (0x0002043e) list_single_graphic_heading_pane_fp_g3

0x0e03,	// (0x0002044a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0e03,	// (0x0002044a) list_single_graphic_heading_pane_fp_g4

0x801e,	// (0x00027665) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x801e,	// (0x00027665) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f1a9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f1a9) list_single_graphic_heading_pane_fp_g

0x0e50,	// (0x00020497) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e50,	// (0x00020497) list_single_graphic_heading_pane_fp_t1

0x0e66,	// (0x000204ad) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e66,	// (0x000204ad) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002f1b4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002f1b4) list_single_graphic_heading_pane_fp_t

0x0e78,	// (0x000204bf) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e78,	// (0x000204bf) list_single_cale_day_pane_fp_g1

0x802a,	// (0x00027671) list_single_cale_day_pane_fp_g2_ParamLimits

0x802a,	// (0x00027671) list_single_cale_day_pane_fp_g2

0x0eb0,	// (0x000204f7) list_single_cale_day_pane_fp_g3_ParamLimits

0x0eb0,	// (0x000204f7) list_single_cale_day_pane_fp_g3

0x0ed8,	// (0x0002051f) list_single_cale_day_pane_fp_g4_ParamLimits

0x0ed8,	// (0x0002051f) list_single_cale_day_pane_fp_g4

0x0efc,	// (0x00020543) list_single_cale_day_pane_fp_g5_ParamLimits

0x0efc,	// (0x00020543) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002f1b9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002f1b9) list_single_cale_day_pane_fp_g

0x0f20,	// (0x00020567) list_single_cale_day_pane_fp_t1_ParamLimits

0x0f20,	// (0x00020567) list_single_cale_day_pane_fp_t1

0x0f46,	// (0x0002058d) list_single_cale_day_pane_fp_t2_ParamLimits

0x0f46,	// (0x0002058d) list_single_cale_day_pane_fp_t2

0x0f5f,	// (0x000205a6) list_single_cale_day_pane_fp_t3_ParamLimits

0x0f5f,	// (0x000205a6) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002f1c4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002f1c4) list_single_cale_day_pane_fp_t

0x8012,	// (0x00027659) list_empty_pane_fp_g1_ParamLimits

0x8012,	// (0x00027659) list_empty_pane_fp_g1

0x0f78,	// (0x000205bf) list_empty_pane_fp_t1

0x0f86,	// (0x000205cd) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002f1cb) list_empty_pane_fp_t

0x8012,	// (0x00027659) list_single_heading_pane_fp_g1_ParamLimits

0x8012,	// (0x00027659) list_single_heading_pane_fp_g1

0x0df7,	// (0x0002043e) list_single_heading_pane_fp_g2_ParamLimits

0x0df7,	// (0x0002043e) list_single_heading_pane_fp_g2

0x0e03,	// (0x0002044a) list_single_heading_pane_fp_g3_ParamLimits

0x0e03,	// (0x0002044a) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002f1d0) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002f1d0) list_single_heading_pane_fp_g

0x0f94,	// (0x000205db) list_single_heading_pane_fp_t1_ParamLimits

0x0f94,	// (0x000205db) list_single_heading_pane_fp_t1

0x0fa6,	// (0x000205ed) list_single_heading_pane_fp_t2_ParamLimits

0x0fa6,	// (0x000205ed) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002f1d7) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002f1d7) list_single_heading_pane_fp_t

0x4072,	// (0x000236b9) aid_size_cell_fast

0x37fa,	// (0x00022e41) soft_indicator_pane_cp1_t1

0x40af,	// (0x000236f6) cell_app_pane_cp2_ParamLimits

0x40af,	// (0x000236f6) cell_app_pane_cp2

0x2624,	// (0x00021c6b) fep_hwr_candidate_drop_down_list_pane

0xdba8,	// (0x0002d1ef) fep_hwr_candidate_pane_g3_ParamLimits

0xdba8,	// (0x0002d1ef) fep_hwr_candidate_pane_g3

0xdbb5,	// (0x0002d1fc) fep_hwr_candidate_pane_g4_ParamLimits

0xdbb5,	// (0x0002d1fc) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002f14b) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002f14b) fep_hwr_candidate_pane_g

0x7ad9,	// (0x00027120) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7ad9,	// (0x00027120) fep_vkb_candidate_drop_down_list_pane

0x7eea,	// (0x00027531) fep_vkb_candidate_pane_g3

0x7ef2,	// (0x00027539) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002f178) fep_vkb_candidate_pane_g

0x7bf2,	// (0x00027239) cell_hwr_candidate_pane_g1_ParamLimits

0x7f09,	// (0x00027550) cell_hwr_candidate_pane_g3_ParamLimits

0x7f09,	// (0x00027550) cell_hwr_candidate_pane_g3

0x7f2a,	// (0x00027571) cell_hwr_candidate_pane_g4_ParamLimits

0x7f2a,	// (0x00027571) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002f192) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002f192) cell_hwr_candidate_pane_g

0x7f4b,	// (0x00027592) cell_vkb_candidate_pane_g3_ParamLimits

0x7f4b,	// (0x00027592) cell_vkb_candidate_pane_g3

0x7f66,	// (0x000275ad) cell_vkb_candidate_pane_g4_ParamLimits

0x7f66,	// (0x000275ad) cell_vkb_candidate_pane_g4

0x8036,	// (0x0002767d) cell_app_pane_cp2_g1_ParamLimits

0x8036,	// (0x0002767d) cell_app_pane_cp2_g1

0x8054,	// (0x0002769b) cell_app_pane_cp2_g2_ParamLimits

0x8054,	// (0x0002769b) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002f1dc) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002f1dc) cell_app_pane_cp2_g

0x8060,	// (0x000276a7) cell_app_pane_cp2_t1_ParamLimits

0x8060,	// (0x000276a7) cell_app_pane_cp2_t1

0x3e70,	// (0x000234b7) grid_highlight_pane_cp1_ParamLimits

0x3e70,	// (0x000234b7) grid_highlight_pane_cp1

0x2860,	// (0x00021ea7) cell_hwr_candidate_pane_cp1_ParamLimits

0x2860,	// (0x00021ea7) cell_hwr_candidate_pane_cp1

0x7bf2,	// (0x00027239) fep_hwr_candidate_drop_down_list_pane_g1

0x8072,	// (0x000276b9) fep_hwr_candidate_drop_down_list_pane_g2

0x807f,	// (0x000276c6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f1e1) fep_hwr_candidate_drop_down_list_pane_g

0x287f,	// (0x00021ec6) fep_hwr_candidate_drop_down_list_scroll_pane

0x2888,	// (0x00021ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2888,	// (0x00021ecf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2895,	// (0x00021edc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2895,	// (0x00021edc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x28a2,	// (0x00021ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x28a2,	// (0x00021ee9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f4b,	// (0x00027592) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f4b,	// (0x00027592) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f66,	// (0x000275ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f66,	// (0x000275ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x28af,	// (0x00021ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x28af,	// (0x00021ef6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x28ca,	// (0x00021f11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x28ca,	// (0x00021f11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x28e5,	// (0x00021f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x28e5,	// (0x00021f2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002f1e8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002f1e8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x808c,	// (0x000276d3) cell_vkb_candidate_pane_cp1_ParamLimits

0x808c,	// (0x000276d3) cell_vkb_candidate_pane_cp1

0x7bf2,	// (0x00027239) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) fep_vkb_candidate_drop_down_list_pane_g1

0x8072,	// (0x000276b9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8072,	// (0x000276b9) fep_vkb_candidate_drop_down_list_pane_g2

0x807f,	// (0x000276c6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x807f,	// (0x000276c6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002f1e1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002f1e1) fep_vkb_candidate_drop_down_list_pane_g

0x80ac,	// (0x000276f3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80ac,	// (0x000276f3) fep_vkb_candidate_drop_down_list_scroll_pane

0x80b9,	// (0x00027700) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x80b9,	// (0x00027700) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80c6,	// (0x0002770d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80c6,	// (0x0002770d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80d2,	// (0x00027719) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80d2,	// (0x00027719) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f09,	// (0x00027550) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f09,	// (0x00027550) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f2a,	// (0x00027571) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f2a,	// (0x00027571) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80de,	// (0x00027725) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80de,	// (0x00027725) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x80ff,	// (0x00027746) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80ff,	// (0x00027746) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8120,	// (0x00027767) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8120,	// (0x00027767) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002f1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002f1f9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc041,	// (0x0002b688) title_pane_g1_ParamLimits

0xc054,	// (0x0002b69b) title_pane_g2_ParamLimits

0xf54e,	// (0x0002eb95) title_pane_g_ParamLimits

0x44e3,	// (0x00023b2a) aid_call2_pane

0x44eb,	// (0x00023b32) aid_call_pane

0x44f3,	// (0x00023b3a) popup_clock_analogue_window_g1

0x44f3,	// (0x00023b3a) popup_clock_analogue_window_g2

0x17d0,	// (0x00020e17) popup_clock_analogue_window_g3

0x17d9,	// (0x00020e20) popup_clock_analogue_window_g4

0x3517,	// (0x00022b5e) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002ed3f) popup_clock_analogue_window_g

0x17e1,	// (0x00020e28) popup_clock_analogue_window_t1

0x17ef,	// (0x00020e36) clock_digital_number_pane_ParamLimits

0x17ef,	// (0x00020e36) clock_digital_number_pane

0x17fb,	// (0x00020e42) clock_digital_number_pane_cp02_ParamLimits

0x17fb,	// (0x00020e42) clock_digital_number_pane_cp02

0x1807,	// (0x00020e4e) clock_digital_number_pane_cp03_ParamLimits

0x1807,	// (0x00020e4e) clock_digital_number_pane_cp03

0x1813,	// (0x00020e5a) clock_digital_number_pane_cp04_ParamLimits

0x1813,	// (0x00020e5a) clock_digital_number_pane_cp04

0x181f,	// (0x00020e66) clock_digital_separator_pane_ParamLimits

0x181f,	// (0x00020e66) clock_digital_separator_pane

0x182b,	// (0x00020e72) popup_clock_digital_window_t1_ParamLimits

0x182b,	// (0x00020e72) popup_clock_digital_window_t1

0x3517,	// (0x00022b5e) clock_digital_number_pane_g1

0x3517,	// (0x00022b5e) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002ed4a) clock_digital_number_pane_g

0x3517,	// (0x00022b5e) clock_digital_separator_pane_g1

0x3517,	// (0x00022b5e) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002ed4a) clock_digital_separator_pane_g

0xd5fe,	// (0x0002cc45) aid_fill_nsta_ParamLimits

0xd734,	// (0x0002cd7b) indicator_nsta_pane_ParamLimits

0x5125,	// (0x0002476c) popup_clock_analogue_window

0x5125,	// (0x0002476c) popup_clock_digital_window

0x4033,	// (0x0002367a) grid_indicator_nsta_pane_ParamLimits

0x7365,	// (0x000269ac) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002f0cb) clock_nsta_pane_t

0x1794,	// (0x00020ddb) aid_size_max_handle

0xc104,	// (0x0002b74b) aid_size_min_handle

0x4b06,	// (0x0002414d) editor_scroll_pane

0x813b,	// (0x00027782) ex_editor_pane

0x3fe0,	// (0x00023627) scroll_pane_cp13

0x3e0f,	// (0x00023456) scroll_pane_cp14

0x4522,	// (0x00023b69) scroll_pane_cp36

0xd3bd,	// (0x0002ca04) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3bd,	// (0x0002ca04) list_single_graphic_hl_pane_cp2

0xbbdc,	// (0x0002b223) list_single_graphic_hl_pane_ParamLimits

0xbbdc,	// (0x0002b223) list_single_graphic_hl_pane

0x0fbc,	// (0x00020603) aid_size_min_hl_cp1

0x8143,	// (0x0002778a) list_highlight_pane_cp34_ParamLimits

0x8143,	// (0x0002778a) list_highlight_pane_cp34

0x8154,	// (0x0002779b) list_single_graphic_hl_pane_g1_ParamLimits

0x8154,	// (0x0002779b) list_single_graphic_hl_pane_g1

0xbc36,	// (0x0002b27d) list_single_graphic_hl_pane_g2_ParamLimits

0xbc36,	// (0x0002b27d) list_single_graphic_hl_pane_g2

0xbc36,	// (0x0002b27d) list_single_graphic_hl_pane_g3_ParamLimits

0xbc36,	// (0x0002b27d) list_single_graphic_hl_pane_g3

0xbc42,	// (0x0002b289) list_single_graphic_hl_pane_g4_ParamLimits

0xbc42,	// (0x0002b289) list_single_graphic_hl_pane_g4

0xbc4e,	// (0x0002b295) list_single_graphic_hl_pane_g5_ParamLimits

0xbc4e,	// (0x0002b295) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002f20a) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002f20a) list_single_graphic_hl_pane_g

0xbc62,	// (0x0002b2a9) list_single_graphic_hl_pane_t1_ParamLimits

0xbc62,	// (0x0002b2a9) list_single_graphic_hl_pane_t1

0x8161,	// (0x000277a8) aid_size_min_hl_cp2

0x816a,	// (0x000277b1) list_highlight_pane_cp34_cp2_ParamLimits

0x816a,	// (0x000277b1) list_highlight_pane_cp34_cp2

0x8154,	// (0x0002779b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8154,	// (0x0002779b) list_single_graphic_hl_pane_g1_cp2

0x8177,	// (0x000277be) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8177,	// (0x000277be) list_single_graphic_hl_pane_g2_cp2

0x8183,	// (0x000277ca) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8183,	// (0x000277ca) list_single_graphic_hl_pane_g3_cp2

0x75ed,	// (0x00026c34) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x75ed,	// (0x00026c34) list_single_graphic_hl_pane_g4_cp2

0x8191,	// (0x000277d8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8191,	// (0x000277d8) list_single_graphic_hl_pane_g5_cp2

0xc15f,	// (0x0002b7a6) control_pane_g4_ParamLimits

0xc15f,	// (0x0002b7a6) control_pane_g4

0x4e44,	// (0x0002448b) bg_popup_sub_pane_cp10_ParamLimits

0x797e,	// (0x00026fc5) list_choice_list_pane_ParamLimits

0x798d,	// (0x00026fd4) scroll_pane_cp23

0x388a,	// (0x00022ed1) bg_popup_preview_window_pane_cp02_ParamLimits

0x7fb7,	// (0x000275fe) list_preview_fixed_pane_ParamLimits

0x7fcd,	// (0x00027614) list_preview_fixed_pane_cp_ParamLimits

0x7fcd,	// (0x00027614) list_preview_fixed_pane_cp

0x7fd9,	// (0x00027620) popup_preview_fixed_window_g1_ParamLimits

0x7fd9,	// (0x00027620) popup_preview_fixed_window_g1

0x7fe5,	// (0x0002762c) popup_preview_fixed_window_g2_ParamLimits

0x7fe5,	// (0x0002762c) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002f199) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002f199) popup_preview_fixed_window_g

0x1708,	// (0x00020d4f) aid_navi_side_left_pane_ParamLimits

0x171d,	// (0x00020d64) aid_navi_side_right_pane_ParamLimits

0x1735,	// (0x00020d7c) navi_icon_pane_stacon_ParamLimits

0x1749,	// (0x00020d90) navi_navi_pane_stacon_ParamLimits

0x1735,	// (0x00020d7c) navi_text_pane_stacon_ParamLimits

0x350d,	// (0x00022b54) main_text_info_pane

0x81bb,	// (0x00027802) listscroll_text_info_pane

0x81c3,	// (0x0002780a) list_text_info_pane_ParamLimits

0x81c3,	// (0x0002780a) list_text_info_pane

0x81d2,	// (0x00027819) scroll_pane_cp24_ParamLimits

0x81d2,	// (0x00027819) scroll_pane_cp24

0xe2ab,	// (0x0002d8f2) list_text_info_pane_t1_ParamLimits

0xe2ab,	// (0x0002d8f2) list_text_info_pane_t1

0xc2ba,	// (0x0002b901) popup_fast_swap2_window_ParamLimits

0xc2ba,	// (0x0002b901) popup_fast_swap2_window

0x8221,	// (0x00027868) aid_size_cell_fast2

0x350d,	// (0x00022b54) bg_popup_window_pane_cp17

0x57ac,	// (0x00024df3) heading_pane_cp2

0x3ad9,	// (0x00023120) listscroll_fast2_pane

0x822b,	// (0x00027872) grid_fast2_pane

0x8235,	// (0x0002787c) listscroll_fast2_pane_g1

0x823d,	// (0x00027884) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002f215) listscroll_fast2_pane_g

0x3fe0,	// (0x00023627) scroll_pane_cp26

0x8247,	// (0x0002788e) cell_fast2_pane_ParamLimits

0x8247,	// (0x0002788e) cell_fast2_pane

0x825c,	// (0x000278a3) cell_fast2_pane_g1

0x8265,	// (0x000278ac) cell_fast2_pane_g2

0x826e,	// (0x000278b5) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002f21a) cell_fast2_pane_g

0x3bcc,	// (0x00023213) grid_highlight_pane_cp9

0x3be1,	// (0x00023228) main_eswt_pane_ParamLimits

0x3be1,	// (0x00023228) main_eswt_pane

0x81e7,	// (0x0002782e) list_single_text_info_pane

0x8276,	// (0x000278bd) eswt_ctrl_button_pane

0x8276,	// (0x000278bd) eswt_ctrl_canvas_pane

0x827e,	// (0x000278c5) eswt_ctrl_combo_pane

0x8276,	// (0x000278bd) eswt_ctrl_default_pane

0x8276,	// (0x000278bd) eswt_ctrl_label_pane

0x8286,	// (0x000278cd) eswt_ctrl_wait_pane

0x828e,	// (0x000278d5) eswt_shell_pane

0x350d,	// (0x00022b54) listscroll_eswt_app_pane

0x82ae,	// (0x000278f5) popup_eswt_tasktip_window_ParamLimits

0x82ae,	// (0x000278f5) popup_eswt_tasktip_window

0x53c2,	// (0x00024a09) bg_popup_window_pane_cp18

0x82bf,	// (0x00027906) eswt_control_pane_g1_ParamLimits

0x82bf,	// (0x00027906) eswt_control_pane_g1

0x82cc,	// (0x00027913) eswt_control_pane_g2_ParamLimits

0x82cc,	// (0x00027913) eswt_control_pane_g2

0x82d9,	// (0x00027920) eswt_control_pane_g3_ParamLimits

0x82d9,	// (0x00027920) eswt_control_pane_g3

0x82e6,	// (0x0002792d) eswt_control_pane_g4_ParamLimits

0x82e6,	// (0x0002792d) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002f221) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002f221) eswt_control_pane_g

0x3e70,	// (0x000234b7) bg_button_pane_ParamLimits

0x3e70,	// (0x000234b7) bg_button_pane

0x3be1,	// (0x00023228) common_borders_pane_copy2_ParamLimits

0x3be1,	// (0x00023228) common_borders_pane_copy2

0x82f3,	// (0x0002793a) control_button_pane_g1_ParamLimits

0x82f3,	// (0x0002793a) control_button_pane_g1

0x82ff,	// (0x00027946) control_button_pane_g2_ParamLimits

0x82ff,	// (0x00027946) control_button_pane_g2

0x830b,	// (0x00027952) control_button_pane_g3_ParamLimits

0x830b,	// (0x00027952) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002f22a) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002f22a) control_button_pane_g

0x831f,	// (0x00027966) control_button_pane_t1

0x832d,	// (0x00027974) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002f231) control_button_pane_t

0x534e,	// (0x00024995) bg_button_pane_g1

0x5356,	// (0x0002499d) bg_button_pane_g2

0x535e,	// (0x000249a5) bg_button_pane_g3

0x5366,	// (0x000249ad) bg_button_pane_g4

0x536e,	// (0x000249b5) bg_button_pane_g5

0x5376,	// (0x000249bd) bg_button_pane_g6

0x537e,	// (0x000249c5) bg_button_pane_g7

0x5386,	// (0x000249cd) bg_button_pane_g8

0x538e,	// (0x000249d5) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002eea1) bg_button_pane_g

0x7939,	// (0x00026f80) common_borders_pane_ParamLimits

0x7939,	// (0x00026f80) common_borders_pane

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy1_ParamLimits

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy1

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy1_ParamLimits

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy1

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy1_ParamLimits

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy1

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy1_ParamLimits

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy1

0x7974,	// (0x00026fbb) bg_eswt_ctrl_canvas_pane_g1

0x7939,	// (0x00026f80) common_borders_pane_cp2_ParamLimits

0x7939,	// (0x00026f80) common_borders_pane_cp2

0x7939,	// (0x00026f80) common_borders_pane_cp3_ParamLimits

0x7939,	// (0x00026f80) common_borders_pane_cp3

0x833b,	// (0x00027982) separator_horizontal_pane

0x8343,	// (0x0002798a) separator_vertical_pane

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy2_ParamLimits

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy2

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy2_ParamLimits

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy2

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy2_ParamLimits

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy2

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy2_ParamLimits

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy2

0x350d,	// (0x00022b54) common_borders_pane_cp4

0x834c,	// (0x00027993) separator_horizontal_pane_g1

0x8355,	// (0x0002799c) separator_horizontal_pane_g2

0x835e,	// (0x000279a5) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002f236) separator_horizontal_pane_g

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy3_ParamLimits

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy3

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy3_ParamLimits

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy3

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy3_ParamLimits

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy3

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy3_ParamLimits

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy3

0x350d,	// (0x00022b54) common_borders_pane_cp5

0x8367,	// (0x000279ae) separator_vertical_pane_g1

0x8370,	// (0x000279b7) separator_vertical_pane_g2

0x8379,	// (0x000279c0) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002f23d) separator_vertical_pane_g

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy4_ParamLimits

0x82bf,	// (0x00027906) eswt_control_pane_g1_copy4

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy4_ParamLimits

0x82cc,	// (0x00027913) eswt_control_pane_g2_copy4

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy4_ParamLimits

0x82d9,	// (0x00027920) eswt_control_pane_g3_copy4

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy4_ParamLimits

0x82e6,	// (0x0002792d) eswt_control_pane_g4_copy4

0xe2c6,	// (0x0002d90d) eswt_ctrl_combo_button_pane

0xe2ce,	// (0x0002d915) eswt_ctrl_input_pane

0xe2d6,	// (0x0002d91d) popup_choice_list_window_cp70

0xe2de,	// (0x0002d925) eswt_ctrl_input_pane_t1

0x350d,	// (0x00022b54) input_focus_pane_cp70

0x7939,	// (0x00026f80) bg_button_pane_cp70_ParamLimits

0x7939,	// (0x00026f80) bg_button_pane_cp70

0xe2ec,	// (0x0002d933) eswt_ctrl_combo_button_pane_g1

0x83b0,	// (0x000279f7) wait_bar_pane_cp70

0x53c2,	// (0x00024a09) bg_popup_window_pane_cp70_ParamLimits

0x53c2,	// (0x00024a09) bg_popup_window_pane_cp70

0x83b8,	// (0x000279ff) popup_eswt_tasktip_window_t1

0x83ce,	// (0x00027a15) wait_bar_pane_cp71_ParamLimits

0x83ce,	// (0x00027a15) wait_bar_pane_cp71

0x83da,	// (0x00027a21) grid_eswt_app_pane

0x4305,	// (0x0002394c) scroll_pane_cp70

0xe2f4,	// (0x0002d93b) cell_eswt_app_pane_ParamLimits

0xe2f4,	// (0x0002d93b) cell_eswt_app_pane

0xe31e,	// (0x0002d965) cell_eswt_app_pane_g1_ParamLimits

0xe31e,	// (0x0002d965) cell_eswt_app_pane_g1

0xe34d,	// (0x0002d994) cell_eswt_app_pane_g2_ParamLimits

0xe34d,	// (0x0002d994) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002f244) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002f244) cell_eswt_app_pane_g

0xe376,	// (0x0002d9bd) cell_eswt_app_pane_t1_ParamLimits

0xe376,	// (0x0002d9bd) cell_eswt_app_pane_t1

0x849d,	// (0x00027ae4) grid_highlight_pane_cp70_ParamLimits

0x849d,	// (0x00027ae4) grid_highlight_pane_cp70

0x49db,	// (0x00024022) set_content_pane_g1

0xd5b3,	// (0x0002cbfa) status_small_volume_pane

0x2900,	// (0x00021f47) status_small_volume_pane_g1

0x2908,	// (0x00021f4f) volume_small2_pane

0x2911,	// (0x00021f58) volume_small2_pane_g1

0x291a,	// (0x00021f61) volume_small2_pane_g2

0x2923,	// (0x00021f6a) volume_small2_pane_g3

0x292c,	// (0x00021f73) volume_small2_pane_g4

0x2935,	// (0x00021f7c) volume_small2_pane_g5

0x293e,	// (0x00021f85) volume_small2_pane_g6

0x2947,	// (0x00021f8e) volume_small2_pane_g7

0x2950,	// (0x00021f97) volume_small2_pane_g8

0x2959,	// (0x00021fa0) volume_small2_pane_g9

0x2962,	// (0x00021fa9) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002f249) volume_small2_pane_g

0x7d3a,	// (0x00027381) fep_vkb_top_text_pane_g1_ParamLimits

0xe253,	// (0x0002d89a) fep_vkb_top_text_pane_t1_ParamLimits

0x7ff1,	// (0x00027638) popup_preview_fixed_window_g3_ParamLimits

0x7ff1,	// (0x00027638) popup_preview_fixed_window_g3

0xc8dd,	// (0x0002bf24) popup_toolbar_trans_pane

0xdc7e,	// (0x0002d2c5) aid_height_set_list_ParamLimits

0x672e,	// (0x00025d75) aid_size_parent_ParamLimits

0x4e44,	// (0x0002448b) list_highlight_pane_cp2_ParamLimits

0x49db,	// (0x00024022) set_content_pane_g1_ParamLimits

0xbbee,	// (0x0002b235) list_single_image_pane_ParamLimits

0xbbee,	// (0x0002b235) list_single_image_pane

0xe3a8,	// (0x0002d9ef) aid_size_cell_image_ParamLimits

0xe3a8,	// (0x0002d9ef) aid_size_cell_image

0xe3b5,	// (0x0002d9fc) grid_single_image_pane_ParamLimits

0xe3b5,	// (0x0002d9fc) grid_single_image_pane

0x586b,	// (0x00024eb2) list_single_image_pane_g1_ParamLimits

0x586b,	// (0x00024eb2) list_single_image_pane_g1

0x84c2,	// (0x00027b09) list_single_image_pane_g2_ParamLimits

0x84c2,	// (0x00027b09) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002f25e) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002f25e) list_single_image_pane_g

0x84d6,	// (0x00027b1d) list_single_image_pane_t1_ParamLimits

0x84d6,	// (0x00027b1d) list_single_image_pane_t1

0xe3c3,	// (0x0002da0a) cell_image_list_pane_ParamLimits

0xe3c3,	// (0x0002da0a) cell_image_list_pane

0xe3d9,	// (0x0002da20) cell_image_list_pane_g1

0xe3e2,	// (0x0002da29) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002f263) cell_image_list_pane_g

0x8512,	// (0x00027b59) aid_size_cell_tb_trans_pane

0x3e70,	// (0x000234b7) bg_tb_trans_pane

0x8524,	// (0x00027b6b) grid_tb_trans_pane

0x534e,	// (0x00024995) bg_tb_trans_pane_g1

0x5356,	// (0x0002499d) bg_tb_trans_pane_g2

0x535e,	// (0x000249a5) bg_tb_trans_pane_g3

0x5366,	// (0x000249ad) bg_tb_trans_pane_g4

0x536e,	// (0x000249b5) bg_tb_trans_pane_g5

0x5386,	// (0x000249cd) bg_tb_trans_pane_g6

0x538e,	// (0x000249d5) bg_tb_trans_pane_g7

0x5376,	// (0x000249bd) bg_tb_trans_pane_g8

0x537e,	// (0x000249c5) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002f268) bg_tb_trans_pane_g

0x8538,	// (0x00027b7f) cell_toolbar_trans_pane_ParamLimits

0x8538,	// (0x00027b7f) cell_toolbar_trans_pane

0x7974,	// (0x00026fbb) cell_toolbar_trans_pane_g1

0xe03c,	// (0x0002d683) list_form2_midp_pane_t1

0xe04a,	// (0x0002d691) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002f111) list_form2_midp_pane_t

0x754e,	// (0x00026b95) scroll_pane_cp51_ParamLimits

0x7716,	// (0x00026d5d) form2_midp_wait_pane_g1

0x771f,	// (0x00026d66) form2_midp_wait_pane_g2

0x7728,	// (0x00026d6f) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002f126) form2_midp_wait_pane_g

0x3601,	// (0x00022c48) list_highlight_pane_cp21_ParamLimits

0x777f,	// (0x00026dc6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x778e,	// (0x00026dd5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x68e6,	// (0x00025f2d) list_single_2graphic_im_pane_ParamLimits

0x68e6,	// (0x00025f2d) list_single_2graphic_im_pane

0xe3eb,	// (0x0002da32) list_single_2graphic_im_pane_g1_ParamLimits

0xe3eb,	// (0x0002da32) list_single_2graphic_im_pane_g1

0xe3fc,	// (0x0002da43) list_single_2graphic_im_pane_g2_ParamLimits

0xe3fc,	// (0x0002da43) list_single_2graphic_im_pane_g2

0xe408,	// (0x0002da4f) list_single_2graphic_im_pane_g3_ParamLimits

0xe408,	// (0x0002da4f) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002f27b) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002f27b) list_single_2graphic_im_pane_g

0xe41c,	// (0x0002da63) list_single_2graphic_im_pane_t1_ParamLimits

0xe41c,	// (0x0002da63) list_single_2graphic_im_pane_t1

0x7ffd,	// (0x00027644) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ffd,	// (0x00027644) list_single_graphic_2heading_pane_fp

0x0e2e,	// (0x00020475) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e2e,	// (0x00020475) list_single_graphic_2heading_pane_fp_g1

0x8012,	// (0x00027659) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8012,	// (0x00027659) list_single_graphic_2heading_pane_fp_g2

0x0df7,	// (0x0002043e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0df7,	// (0x0002043e) list_single_graphic_2heading_pane_fp_g3

0x0e03,	// (0x0002044a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0e03,	// (0x0002044a) list_single_graphic_2heading_pane_fp_g4

0x801e,	// (0x00027665) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x801e,	// (0x00027665) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002f1a9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002f1a9) list_single_graphic_2heading_pane_fp_g

0x1007,	// (0x0002064e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1007,	// (0x0002064e) list_single_graphic_2heading_pane_fp_t1

0x0e66,	// (0x000204ad) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e66,	// (0x000204ad) list_single_graphic_2heading_pane_fp_t2

0x101d,	// (0x00020664) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x101d,	// (0x00020664) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002f284) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002f284) list_single_graphic_2heading_pane_fp_t

0x7a00,	// (0x00027047) fep_hwr_write_pane_g5_ParamLimits

0x7a00,	// (0x00027047) fep_hwr_write_pane_g5

0x7a0c,	// (0x00027053) fep_hwr_write_pane_g6_ParamLimits

0x7a0c,	// (0x00027053) fep_hwr_write_pane_g6

0x828e,	// (0x000278d5) eswt_shell_pane_ParamLimits

0x53c2,	// (0x00024a09) bg_popup_window_pane_cp18_ParamLimits

0x6676,	// (0x00025cbd) heading_pane_cp70

0x83b8,	// (0x000279ff) popup_eswt_tasktip_window_t1_ParamLimits

0xd659,	// (0x0002cca0) aid_touch_tab_arrow_left

0xd66f,	// (0x0002ccb6) aid_touch_tab_arrow_right

0xc06c,	// (0x0002b6b3) title_pane_g3_ParamLimits

0xc06c,	// (0x0002b6b3) title_pane_g3

0x3e2f,	// (0x00023476) set_value_pane_g1

0xc8dd,	// (0x0002bf24) popup_toolbar_trans_pane_ParamLimits

0x8512,	// (0x00027b59) aid_size_cell_tb_trans_pane_ParamLimits

0x3e70,	// (0x000234b7) bg_tb_trans_pane_ParamLimits

0x8524,	// (0x00027b6b) grid_tb_trans_pane_ParamLimits

0x388a,	// (0x00022ed1) cont_note_pane_ParamLimits

0x388a,	// (0x00022ed1) cont_note_pane

0x3be1,	// (0x00023228) cont_snote2_single_text_pane_ParamLimits

0x3be1,	// (0x00023228) cont_snote2_single_text_pane

0x3be1,	// (0x00023228) cont_snote2_single_graphic_pane_ParamLimits

0x3be1,	// (0x00023228) cont_snote2_single_graphic_pane

0x59d3,	// (0x0002501a) cont_note_wait_pane_ParamLimits

0x59d3,	// (0x0002501a) cont_note_wait_pane

0x59d3,	// (0x0002501a) cont_note_image_pane_ParamLimits

0x59d3,	// (0x0002501a) cont_note_image_pane

0x85cc,	// (0x00027c13) popup_note2_window_g1_ParamLimits

0x85cc,	// (0x00027c13) popup_note2_window_g1

0x85fd,	// (0x00027c44) popup_note2_window_t1_ParamLimits

0x85fd,	// (0x00027c44) popup_note2_window_t1

0x8642,	// (0x00027c89) popup_note2_window_t2_ParamLimits

0x8642,	// (0x00027c89) popup_note2_window_t2

0x8687,	// (0x00027cce) popup_note2_window_t3_ParamLimits

0x8687,	// (0x00027cce) popup_note2_window_t3

0x86cc,	// (0x00027d13) popup_note2_window_t4_ParamLimits

0x86cc,	// (0x00027d13) popup_note2_window_t4

0x390e,	// (0x00022f55) popup_note2_window_t5_ParamLimits

0x390e,	// (0x00022f55) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002f290) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002f290) popup_note2_window_t

0x86fb,	// (0x00027d42) popup_note2_image_window_g1_ParamLimits

0x86fb,	// (0x00027d42) popup_note2_image_window_g1

0x8707,	// (0x00027d4e) popup_note2_image_window_g2_ParamLimits

0x8707,	// (0x00027d4e) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002f29b) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002f29b) popup_note2_image_window_g

0x8719,	// (0x00027d60) popup_note2_image_window_t1_ParamLimits

0x8719,	// (0x00027d60) popup_note2_image_window_t1

0x8731,	// (0x00027d78) popup_note2_image_window_t2_ParamLimits

0x8731,	// (0x00027d78) popup_note2_image_window_t2

0x8749,	// (0x00027d90) popup_note2_image_window_t3_ParamLimits

0x8749,	// (0x00027d90) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002f2a0) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002f2a0) popup_note2_image_window_t

0x59e1,	// (0x00025028) popup_note2_wait_window_g1_ParamLimits

0x59e1,	// (0x00025028) popup_note2_wait_window_g1

0x8765,	// (0x00027dac) popup_note2_wait_window_g2_ParamLimits

0x8765,	// (0x00027dac) popup_note2_wait_window_g2

0x59f9,	// (0x00025040) popup_note2_wait_window_g3_ParamLimits

0x59f9,	// (0x00025040) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002f2a7) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002f2a7) popup_note2_wait_window_g

0x8771,	// (0x00027db8) popup_note2_wait_window_t1_ParamLimits

0x8771,	// (0x00027db8) popup_note2_wait_window_t1

0x878f,	// (0x00027dd6) popup_note2_wait_window_t2_ParamLimits

0x878f,	// (0x00027dd6) popup_note2_wait_window_t2

0x87ad,	// (0x00027df4) popup_note2_wait_window_t3_ParamLimits

0x87ad,	// (0x00027df4) popup_note2_wait_window_t3

0x87bf,	// (0x00027e06) popup_note2_wait_window_t4_ParamLimits

0x87bf,	// (0x00027e06) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002f2ae) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002f2ae) popup_note2_wait_window_t

0x87d1,	// (0x00027e18) wait_bar2_pane_ParamLimits

0x87d1,	// (0x00027e18) wait_bar2_pane

0x87e9,	// (0x00027e30) popup_snote2_single_text_window_g1_ParamLimits

0x87e9,	// (0x00027e30) popup_snote2_single_text_window_g1

0x8811,	// (0x00027e58) popup_snote2_single_text_window_t1_ParamLimits

0x8811,	// (0x00027e58) popup_snote2_single_text_window_t1

0x885d,	// (0x00027ea4) popup_snote2_single_text_window_t2_ParamLimits

0x885d,	// (0x00027ea4) popup_snote2_single_text_window_t2

0x88a9,	// (0x00027ef0) popup_snote2_single_text_window_t3_ParamLimits

0x88a9,	// (0x00027ef0) popup_snote2_single_text_window_t3

0x88ea,	// (0x00027f31) popup_snote2_single_text_window_t4_ParamLimits

0x88ea,	// (0x00027f31) popup_snote2_single_text_window_t4

0x8920,	// (0x00027f67) popup_snote2_single_text_window_t5_ParamLimits

0x8920,	// (0x00027f67) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002f2b7) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002f2b7) popup_snote2_single_text_window_t

0x894b,	// (0x00027f92) popup_snote2_single_graphic_window_g1_ParamLimits

0x894b,	// (0x00027f92) popup_snote2_single_graphic_window_g1

0x8973,	// (0x00027fba) popup_snote2_single_graphic_window_g2_ParamLimits

0x8973,	// (0x00027fba) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002f2c2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002f2c2) popup_snote2_single_graphic_window_g

0x899b,	// (0x00027fe2) popup_snote2_single_graphic_window_t1_ParamLimits

0x899b,	// (0x00027fe2) popup_snote2_single_graphic_window_t1

0x89e7,	// (0x0002802e) popup_snote2_single_graphic_window_t2_ParamLimits

0x89e7,	// (0x0002802e) popup_snote2_single_graphic_window_t2

0x88a9,	// (0x00027ef0) popup_snote2_single_graphic_window_t3_ParamLimits

0x88a9,	// (0x00027ef0) popup_snote2_single_graphic_window_t3

0x88ea,	// (0x00027f31) popup_snote2_single_graphic_window_t4_ParamLimits

0x88ea,	// (0x00027f31) popup_snote2_single_graphic_window_t4

0x8920,	// (0x00027f67) popup_snote2_single_graphic_window_t5_ParamLimits

0x8920,	// (0x00027f67) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002f2c7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002f2c7) popup_snote2_single_graphic_window_t

0x740f,	// (0x00026a56) clock_nsta_pane_cp2_t1

0x740f,	// (0x00026a56) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002f0e7) clock_nsta_pane_cp2_t

0x05de,	// (0x0001fc25) form_field_data_wide_pane_g1_ParamLimits

0x3e7e,	// (0x000234c5) form_field_data_wide_pane_g2_ParamLimits

0x3e7e,	// (0x000234c5) form_field_data_wide_pane_g2

0x3e8a,	// (0x000234d1) form_field_data_wide_pane_g3_ParamLimits

0x3e8a,	// (0x000234d1) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002ecc2) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002ecc2) form_field_data_wide_pane_g

0xdf7f,	// (0x0002d5c6) grid_touch_3_pane_ParamLimits

0xdf7f,	// (0x0002d5c6) grid_touch_3_pane

0xe44d,	// (0x0002da94) cell_touch_3_pane_ParamLimits

0xe44d,	// (0x0002da94) cell_touch_3_pane

0x7974,	// (0x00026fbb) cell_touch_3_pane_g1

0x7974,	// (0x00026fbb) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002f16c) cell_touch_3_pane_g

0x3940,	// (0x00022f87) cont_query_data_pane

0x3948,	// (0x00022f8f) cont_query_data_pane_cp1

0x8a61,	// (0x000280a8) button_value_adjust_pane_cp7

0x8a69,	// (0x000280b0) query_popup_pane_cp3

0x45e3,	// (0x00023c2a) bg_popup_sub_pane_cp22_ParamLimits

0x184a,	// (0x00020e91) navi_navi_volume_pane_cp2

0x1865,	// (0x00020eac) popup_side_volume_key_window_g2

0x1874,	// (0x00020ebb) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002ed58) popup_side_volume_key_window_g

0x1891,	// (0x00020ed8) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002ed5f) popup_side_volume_key_window_t

0x489a,	// (0x00023ee1) popup_side_volume_key_window_ParamLimits

0xb6f5,	// (0x0002ad3c) list_double_graphic_pane_g4_ParamLimits

0xb6f5,	// (0x0002ad3c) list_double_graphic_pane_g4

0xddf7,	// (0x0002d43e) list_single_2heading_msg_pane_ParamLimits

0xddf7,	// (0x0002d43e) list_single_2heading_msg_pane

0xbc78,	// (0x0002b2bf) list_single_2heading_msg_pane_g1_ParamLimits

0xbc78,	// (0x0002b2bf) list_single_2heading_msg_pane_g1

0xbc84,	// (0x0002b2cb) list_single_2heading_msg_pane_g2_ParamLimits

0xbc84,	// (0x0002b2cb) list_single_2heading_msg_pane_g2

0xbc97,	// (0x0002b2de) list_single_2heading_msg_pane_g3_ParamLimits

0xbc97,	// (0x0002b2de) list_single_2heading_msg_pane_g3

0xbca3,	// (0x0002b2ea) list_single_2heading_msg_pane_g4_ParamLimits

0xbca3,	// (0x0002b2ea) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002f2d2) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002f2d2) list_single_2heading_msg_pane_g

0xbcbb,	// (0x0002b302) list_single_2heading_msg_pane_t1_ParamLimits

0xbcbb,	// (0x0002b302) list_single_2heading_msg_pane_t1

0xbce3,	// (0x0002b32a) list_single_2heading_msg_pane_t2_ParamLimits

0xbce3,	// (0x0002b32a) list_single_2heading_msg_pane_t2

0xbd4e,	// (0x0002b395) list_single_2heading_msg_pane_t3_ParamLimits

0xbd4e,	// (0x0002b395) list_single_2heading_msg_pane_t3

0x1102,	// (0x00020749) list_single_2heading_msg_pane_t4_ParamLimits

0x1102,	// (0x00020749) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002f2db) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002f2db) list_single_2heading_msg_pane_t

0x3555,	// (0x00022b9c) title_pane_g4_ParamLimits

0x3555,	// (0x00022b9c) title_pane_g4

0x1659,	// (0x00020ca0) title_pane_stacon_g3_ParamLimits

0x1659,	// (0x00020ca0) title_pane_stacon_g3

0x858f,	// (0x00027bd6) list_single_2graphic_im_pane_g4_ParamLimits

0x858f,	// (0x00027bd6) list_single_2graphic_im_pane_g4

0x6432,	// (0x00025a79) popup_side_volume_key_window_cp

0x6c4e,	// (0x00026295) main_idle_act2_pane_t1

0x21ca,	// (0x00021811) toolbar_button_pane_g10

0xd269,	// (0x0002c8b0) popup_toolbar_window_cp1

0x7400,	// (0x00026a47) clock_nsta_pane_cp_t1

0x7400,	// (0x00026a47) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002f0e2) clock_nsta_pane_cp_t

0x184a,	// (0x00020e91) navi_navi_volume_pane_cp2_ParamLimits

0x1859,	// (0x00020ea0) popup_side_volume_key_window_g1_ParamLimits

0x1865,	// (0x00020eac) popup_side_volume_key_window_g2_ParamLimits

0x1874,	// (0x00020ebb) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002ed58) popup_side_volume_key_window_g_ParamLimits

0x2610,	// (0x00021c57) fep_hwr_aid_pane

0xdb9a,	// (0x0002d1e1) bg_fep_hwr_top_pane_g4_ParamLimits

0x79d0,	// (0x00027017) fep_hwr_top_pane_g1_ParamLimits

0x79e2,	// (0x00027029) fep_hwr_top_pane_g2_ParamLimits

0x26c9,	// (0x00021d10) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002f137) fep_hwr_top_pane_g_ParamLimits

0x26de,	// (0x00021d25) fep_hwr_top_text_pane_ParamLimits

0x61f5,	// (0x0002583c) aid_touch_tab_arrow_arrow_2

0x61fe,	// (0x00025845) aid_touch_tab_arrow_left_2

0x2624,	// (0x00021c6b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x265b,	// (0x00021ca2) fep_hwr_prediction_pane

0x7b42,	// (0x00027189) fep_vkb_prediction_pane

0xe233,	// (0x0002d87a) fep_vkb_side_pane_g3_ParamLimits

0xe233,	// (0x0002d87a) fep_vkb_side_pane_g3

0x7bf2,	// (0x00027239) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8072,	// (0x000276b9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x807f,	// (0x000276c6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002f1e1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a8e,	// (0x000280d5) fep_hwr_prediction_pane_g1

0x296b,	// (0x00021fb2) fep_hwr_prediction_pane_g2

0x2973,	// (0x00021fba) fep_hwr_prediction_pane_g3

0x297b,	// (0x00021fc2) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002f2e4) fep_hwr_prediction_pane_g

0x8a8e,	// (0x000280d5) fep_vkb_prediction_pane_g1

0x8a98,	// (0x000280df) fep_vkb_prediction_pane_g2

0x8aa0,	// (0x000280e7) fep_vkb_prediction_pane_g3

0x8aa8,	// (0x000280ef) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002f2ed) fep_vkb_prediction_pane_g

0x2490,	// (0x00021ad7) slider_set_pane_g3

0x24a4,	// (0x00021aeb) slider_set_pane_g4

0x24bc,	// (0x00021b03) slider_set_pane_g5

0x2490,	// (0x00021ad7) slider_set_pane_g6

0x24d2,	// (0x00021b19) slider_set_pane_g7

0x6893,	// (0x00025eda) slider_form_pane_g3

0x689c,	// (0x00025ee3) slider_form_pane_g4

0x68a4,	// (0x00025eeb) slider_form_pane_g5

0x6893,	// (0x00025eda) slider_form_pane_g6

0xddc9,	// (0x0002d410) slider_form_pane_g7

0x6ef9,	// (0x00026540) slider_set_pane_vc_g3

0x6f02,	// (0x00026549) slider_set_pane_vc_g4

0x6f0b,	// (0x00026552) slider_set_pane_vc_g5

0x6ef9,	// (0x00026540) slider_set_pane_vc_g6

0x6f14,	// (0x0002655b) slider_set_pane_vc_g7

0x70d4,	// (0x0002671b) slider_form_pane_vc_g1

0x70dd,	// (0x00026724) slider_form_pane_vc_g2

0x70e6,	// (0x0002672d) slider_form_pane_vc_g3

0x70d4,	// (0x0002671b) slider_form_pane_vc_g4

0x70ef,	// (0x00026736) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002f0b4) slider_form_pane_vc_g

0x350d,	// (0x00022b54) main_idle_act3_pane

0x8ab0,	// (0x000280f7) ai3_links_pane

0xe495,	// (0x0002dadc) popup_ai3_data_window_ParamLimits

0xe495,	// (0x0002dadc) popup_ai3_data_window

0x350d,	// (0x00022b54) grid_ai3_links_pane

0xe4af,	// (0x0002daf6) cell_ai3_links_pane_ParamLimits

0xe4af,	// (0x0002daf6) cell_ai3_links_pane

0x8aeb,	// (0x00028132) bg_popup_sub_pane_cp11

0x8af8,	// (0x0002813f) cell_ai3_links_pane_g1

0x350d,	// (0x00022b54) bg_popup_sub_pane_cp12

0x8b1d,	// (0x00028164) heading_ai3_data_pane

0x8b25,	// (0x0002816c) list_ai3_gene_pane

0x8b31,	// (0x00028178) popup_ai3_data_window_g1

0x8b39,	// (0x00028180) heading_ai3_data_pane_g1

0x8b41,	// (0x00028188) heading_ai3_data_pane_t1

0x8b4f,	// (0x00028196) list_double_ai3_gene_pane_ParamLimits

0x8b4f,	// (0x00028196) list_double_ai3_gene_pane

0x8b5c,	// (0x000281a3) list_single_ai3_gene_pane_ParamLimits

0x8b5c,	// (0x000281a3) list_single_ai3_gene_pane

0x7939,	// (0x00026f80) list_highlight_pane_cp7_ParamLimits

0x7939,	// (0x00026f80) list_highlight_pane_cp7

0x8b69,	// (0x000281b0) list_single_a13_gene_pane_t1_ParamLimits

0x8b69,	// (0x000281b0) list_single_a13_gene_pane_t1

0x8b80,	// (0x000281c7) list_single_ai3_gene_pane_g1

0x8b89,	// (0x000281d0) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002f2f6) list_single_ai3_gene_pane_g

0x8b91,	// (0x000281d8) list_double_ai3_gene_pane_g1_ParamLimits

0x8b91,	// (0x000281d8) list_double_ai3_gene_pane_g1

0x8b9d,	// (0x000281e4) list_double_ai3_gene_pane_t1_ParamLimits

0x8b9d,	// (0x000281e4) list_double_ai3_gene_pane_t1

0x8bb9,	// (0x00028200) list_double_ai3_gene_pane_t2_ParamLimits

0x8bb9,	// (0x00028200) list_double_ai3_gene_pane_t2

0x8bcf,	// (0x00028216) list_double_ai3_gene_pane_t3_ParamLimits

0x8bcf,	// (0x00028216) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002f2fb) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002f2fb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1033,	// (0x0002067a) aid_size_min_col_2

0xe47f,	// (0x0002dac6) aid_size_min_msg_ParamLimits

0xe47f,	// (0x0002dac6) aid_size_min_msg

0xe247,	// (0x0002d88e) fep_vkb_top_text_pane_g2_ParamLimits

0xe247,	// (0x0002d88e) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002f167) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002f167) fep_vkb_top_text_pane_g

0x350d,	// (0x00022b54) main_hc_apps_shell_pane

0x8bec,	// (0x00028233) grid_hc_apps_pane_ParamLimits

0x8bec,	// (0x00028233) grid_hc_apps_pane

0x8bfb,	// (0x00028242) list_hc_apps_pane

0x8c03,	// (0x0002824a) scroll_pane_cp37_ParamLimits

0x8c03,	// (0x0002824a) scroll_pane_cp37

0xe4c9,	// (0x0002db10) cell_hc_apps_pane_ParamLimits

0xe4c9,	// (0x0002db10) cell_hc_apps_pane

0xe587,	// (0x0002dbce) cell_hc_apps_pane_g1_ParamLimits

0xe587,	// (0x0002dbce) cell_hc_apps_pane_g1

0x8cee,	// (0x00028335) cell_hc_apps_pane_g2_ParamLimits

0x8cee,	// (0x00028335) cell_hc_apps_pane_g2

0x8d0a,	// (0x00028351) cell_hc_apps_pane_g3_ParamLimits

0x8d0a,	// (0x00028351) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002f302) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002f302) cell_hc_apps_pane_g

0xe5b4,	// (0x0002dbfb) cell_hc_apps_pane_t1_ParamLimits

0xe5b4,	// (0x0002dbfb) cell_hc_apps_pane_t1

0x388a,	// (0x00022ed1) grid_highlight_pane_cp10_ParamLimits

0x388a,	// (0x00022ed1) grid_highlight_pane_cp10

0xe5f2,	// (0x0002dc39) list_single_hc_apps_pane_ParamLimits

0xe5f2,	// (0x0002dc39) list_single_hc_apps_pane

0xe61f,	// (0x0002dc66) list_single_hc_apps_pane_g1

0xbdbc,	// (0x0002b403) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002f309) list_single_hc_apps_pane_g

0xbdd5,	// (0x0002b41c) list_single_hc_apps_pane_g2_copy1

0xbdf1,	// (0x0002b438) list_single_hc_apps_pane_t1

0x3601,	// (0x00022c48) bg_set_opt_pane_cp_ParamLimits

0x1581,	// (0x00020bc8) setting_slider_pane_t1_ParamLimits

0x159a,	// (0x00020be1) setting_slider_pane_t2_ParamLimits

0x15b4,	// (0x00020bfb) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002eba5) setting_slider_pane_t_ParamLimits

0x15cc,	// (0x00020c13) slider_set_pane_ParamLimits

0x1af3,	// (0x0002113a) control_pane_g5_ParamLimits

0x1af3,	// (0x0002113a) control_pane_g5

0x66e2,	// (0x00025d29) slider_set_pane_g1_ParamLimits

0x2484,	// (0x00021acb) slider_set_pane_g2_ParamLimits

0x2490,	// (0x00021ad7) slider_set_pane_g3_ParamLimits

0x24a4,	// (0x00021aeb) slider_set_pane_g4_ParamLimits

0x24bc,	// (0x00021b03) slider_set_pane_g5_ParamLimits

0x2490,	// (0x00021ad7) slider_set_pane_g6_ParamLimits

0x24d2,	// (0x00021b19) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002ef9f) slider_set_pane_g_ParamLimits

0x4986,	// (0x00023fcd) navi_icon_text_pane_ParamLimits

0xd622,	// (0x0002cc69) aid_fill_nsta_2_ParamLimits

0xd659,	// (0x0002cca0) aid_touch_tab_arrow_left_ParamLimits

0xd66f,	// (0x0002ccb6) aid_touch_tab_arrow_right_ParamLimits

0xd70a,	// (0x0002cd51) clock_nsta_pane_ParamLimits

0x61d7,	// (0x0002581e) navi_icon_pane_g1_ParamLimits

0x61e3,	// (0x0002582a) navi_text_pane_t1_ParamLimits

0x750c,	// (0x00026b53) navi_icon_text_pane_g1_ParamLimits

0x7518,	// (0x00026b5f) navi_icon_text_pane_t1_ParamLimits

0xe61f,	// (0x0002dc66) list_single_hc_apps_pane_g1_ParamLimits

0xbdbc,	// (0x0002b403) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002f309) list_single_hc_apps_pane_g_ParamLimits

0xbdd5,	// (0x0002b41c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdf1,	// (0x0002b438) list_single_hc_apps_pane_t1_ParamLimits

0xbf71,	// (0x0002b5b8) popup_toolbar2_fixed_window_ParamLimits

0xbf71,	// (0x0002b5b8) popup_toolbar2_fixed_window

0xc8d3,	// (0x0002bf1a) popup_toolbar2_float_window

0x350d,	// (0x00022b54) bg_popup_sub_pane_cp27

0x8de1,	// (0x00028428) grid_toolbar2_float_pane

0x350d,	// (0x00022b54) bg_popup_sub_pane_cp26

0x8de1,	// (0x00028428) grid_toolbar2_fixed_pane

0xe638,	// (0x0002dc7f) cell_toolbar2_fixed_pane_ParamLimits

0xe638,	// (0x0002dc7f) cell_toolbar2_fixed_pane

0xe652,	// (0x0002dc99) cell_toolbar2_fixed_pane_g1

0x8e02,	// (0x00028449) toolbar2_fixed_button_pane

0x534e,	// (0x00024995) toolbar2_fixed_button_pane_g1

0x5356,	// (0x0002499d) toolbar2_fixed_button_pane_g2

0x535e,	// (0x000249a5) toolbar2_fixed_button_pane_g3

0x5366,	// (0x000249ad) toolbar2_fixed_button_pane_g4

0x536e,	// (0x000249b5) toolbar2_fixed_button_pane_g5

0x5376,	// (0x000249bd) toolbar2_fixed_button_pane_g6

0x537e,	// (0x000249c5) toolbar2_fixed_button_pane_g7

0x5386,	// (0x000249cd) toolbar2_fixed_button_pane_g8

0x538e,	// (0x000249d5) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002eea1) toolbar2_fixed_button_pane_g

0x8e0a,	// (0x00028451) cell_toolbar2_float_pane_ParamLimits

0x8e0a,	// (0x00028451) cell_toolbar2_float_pane

0x8e1b,	// (0x00028462) cell_toolbar2_float_pane_g1

0x8e02,	// (0x00028449) toolbar2_fixed_button_pane_cp

0xe121,	// (0x0002d768) fep_vkb_accented_list_pane_ParamLimits

0xe121,	// (0x0002d768) fep_vkb_accented_list_pane

0x282c,	// (0x00021e73) bg_popup_fep_shadow_pane_g9

0x4b06,	// (0x0002414d) bg_popup_fep_shadow_pane_cp3

0x3fc7,	// (0x0002360e) list_accented_list_pane

0x8e24,	// (0x0002846b) list_single_accented_list_pane_ParamLimits

0x8e24,	// (0x0002846b) list_single_accented_list_pane

0x4b06,	// (0x0002414d) list_highlight_pane_cp10

0x8e35,	// (0x0002847c) list_single_accented_list_pane_t1

0xc7fd,	// (0x0002be44) popup_slider_window_ParamLimits

0xc7fd,	// (0x0002be44) popup_slider_window

0x8a71,	// (0x000280b8) aid_indentation_list_msg

0xe74b,	// (0x0002dd92) bg_popup_window_pane_cp19

0x8f59,	// (0x000285a0) popup_slider_window_g1

0x8f75,	// (0x000285bc) popup_slider_window_g2

0x8f91,	// (0x000285d8) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002f30e) popup_slider_window_g

0x8fed,	// (0x00028634) popup_slider_window_t1

0x9061,	// (0x000286a8) small_volume_slider_vertical_pane

0x7974,	// (0x00026fbb) small_volume_slider_vertical_pane_g1

0x7974,	// (0x00026fbb) small_volume_slider_vertical_pane_g2

0x907d,	// (0x000286c4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002f320) small_volume_slider_vertical_pane_g

0xbedf,	// (0x0002b526) area_side_right_pane_ParamLimits

0xbedf,	// (0x0002b526) area_side_right_pane

0xca09,	// (0x0002c050) aid_size_side_button_ParamLimits

0xca09,	// (0x0002c050) aid_size_side_button

0xca22,	// (0x0002c069) grid_sctrl_middle_pane_ParamLimits

0xca22,	// (0x0002c069) grid_sctrl_middle_pane

0x29b6,	// (0x00021ffd) sctrl_sk_bottom_pane

0x29c7,	// (0x0002200e) sctrl_sk_top_pane

0x29d9,	// (0x00022020) aid_touch_sctrl_top

0x388a,	// (0x00022ed1) bg_sctrl_sk_pane_ParamLimits

0x388a,	// (0x00022ed1) bg_sctrl_sk_pane

0x29e6,	// (0x0002202d) sctrl_sk_top_pane_g1

0x29f3,	// (0x0002203a) sctrl_sk_top_pane_t1

0x29d9,	// (0x00022020) aid_touch_sctrl_bottom

0x388a,	// (0x00022ed1) bg_sctrl_sk_pane_cp_ParamLimits

0x388a,	// (0x00022ed1) bg_sctrl_sk_pane_cp

0x2a0e,	// (0x00022055) sctrl_sk_bottom_pane_g1

0x29f3,	// (0x0002203a) sctrl_sk_bottom_pane_t1

0xca3c,	// (0x0002c083) cell_sctrl_middle_pane_ParamLimits

0xca3c,	// (0x0002c083) cell_sctrl_middle_pane

0xca4d,	// (0x0002c094) aid_touch_sctrl_middle_ParamLimits

0xca4d,	// (0x0002c094) aid_touch_sctrl_middle

0xca5a,	// (0x0002c0a1) bg_sctrl_middle_pane_ParamLimits

0xca5a,	// (0x0002c0a1) bg_sctrl_middle_pane

0x9105,	// (0x0002874c) cell_sctrl_middle_pane_g1_ParamLimits

0x9105,	// (0x0002874c) cell_sctrl_middle_pane_g1

0xca68,	// (0x0002c0af) cell_sctrl_middle_pane_g2_ParamLimits

0xca68,	// (0x0002c0af) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002f32c) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002f32c) cell_sctrl_middle_pane_g

0x534e,	// (0x00024995) bg_sctrl_middle_pane_g1

0x5356,	// (0x0002499d) bg_sctrl_middle_pane_g2

0x535e,	// (0x000249a5) bg_sctrl_middle_pane_g3

0x5366,	// (0x000249ad) bg_sctrl_middle_pane_g4

0x536e,	// (0x000249b5) bg_sctrl_middle_pane_g5

0x5376,	// (0x000249bd) bg_sctrl_middle_pane_g6

0x537e,	// (0x000249c5) bg_sctrl_middle_pane_g7

0x5386,	// (0x000249cd) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002f331) bg_sctrl_middle_pane_g

0x538e,	// (0x000249d5) bg_sctrl_middle_pane_g8_copy1

0x534e,	// (0x00024995) bg_sctrl_sk_pane_g1

0x5356,	// (0x0002499d) bg_sctrl_sk_pane_g2

0x535e,	// (0x000249a5) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002eea1) bg_sctrl_sk_pane_g

0x3d9f,	// (0x000233e6) aid_size_touch_scroll_bar

0x5366,	// (0x000249ad) bg_sctrl_sk_pane_g4

0x536e,	// (0x000249b5) bg_sctrl_sk_pane_g5

0x5376,	// (0x000249bd) bg_sctrl_sk_pane_g6

0x537e,	// (0x000249c5) bg_sctrl_sk_pane_g7

0x5386,	// (0x000249cd) bg_sctrl_sk_pane_g8

0x538e,	// (0x000249d5) bg_sctrl_sk_pane_g9

0x1c87,	// (0x000212ce) popup_fep_china_hwr2_fs_candidate_window

0xc317,	// (0x0002b95e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc317,	// (0x0002b95e) popup_fep_china_hwr2_fs_control_window

0x7bf2,	// (0x00027239) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002f327) sctrl_sk_top_pane_g

0xe803,	// (0x0002de4a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe803,	// (0x0002de4a) aid_fep_china_hwr2_fs_cell

0xe817,	// (0x0002de5e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe817,	// (0x0002de5e) bg_popup_fep_shadow_pane_cp4

0xe82e,	// (0x0002de75) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe82e,	// (0x0002de75) bg_popup_fep_shadow_pane_cp5

0xe840,	// (0x0002de87) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe840,	// (0x0002de87) popup_fep_china_hwr2_fs_control_bar_grid

0xe854,	// (0x0002de9b) popup_fep_china_hwr2_fs_control_funtion_grid

0x90d9,	// (0x00028720) aid_fep_china_hwr2_fs_candi_cell

0x350d,	// (0x00022b54) bg_popup_fep_shadow_pane_cp6

0x90e3,	// (0x0002872a) popup_fep_china_hwr2_fs_candidate_grid

0xe85c,	// (0x0002dea3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe85c,	// (0x0002dea3) cell_fep_china_hwr2_fs_funtion_grid

0x7974,	// (0x00026fbb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9105,	// (0x0002874c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9105,	// (0x0002874c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9113,	// (0x0002875a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9113,	// (0x0002875a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002f342) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002f342) cell_fep_china_hwr2_fs_funtion_grid_g

0xe874,	// (0x0002debb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe874,	// (0x0002debb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe889,	// (0x0002ded0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe889,	// (0x0002ded0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0002f347) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0002f347) cell_fep_china_hwr2_fs_funtion_grid_t

0x915a,	// (0x000287a1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9162,	// (0x000287a9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x916a,	// (0x000287b1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x0002f34c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9172,	// (0x000287b9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9172,	// (0x000287b9) cell_fep_china_hwr2_fs_candidate_grid

0x918b,	// (0x000287d2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9193,	// (0x000287da) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7974,	// (0x00026fbb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7974,	// (0x00026fbb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002f16c) cell_fep_china_hwr2_fs_candidate_grid_g

0x919b,	// (0x000287e2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f44,	// (0x0002458b) clock_nsta_pane_cp_24_ParamLimits

0x4f44,	// (0x0002458b) clock_nsta_pane_cp_24

0x4fc2,	// (0x00024609) indicator_nsta_pane_cp_24_ParamLimits

0x4fc2,	// (0x00024609) indicator_nsta_pane_cp_24

0x6053,	// (0x0002569a) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002ef06) heading_pane_g

0x6a97,	// (0x000260de) grid_sct_catagory_button_pane

0x6ac7,	// (0x0002610e) scroll_pane_cp5_ParamLimits

0x755a,	// (0x00026ba1) button_value_adjust_pane_cp5_ParamLimits

0x755a,	// (0x00026ba1) button_value_adjust_pane_cp5

0x7645,	// (0x00026c8c) form2_midp_time_pane_ParamLimits

0x91a9,	// (0x000287f0) cell_sct_catagory_button_pane_ParamLimits

0x91a9,	// (0x000287f0) cell_sct_catagory_button_pane

0x7939,	// (0x00026f80) bg_button_pane_cp01_ParamLimits

0x7939,	// (0x00026f80) bg_button_pane_cp01

0x7974,	// (0x00026fbb) cell_sct_catagory_button_pane_g1

0xc876,	// (0x0002bebd) popup_tb_extension_window

0xe8a5,	// (0x0002deec) aid_size_cell_ext_ParamLimits

0xe8a5,	// (0x0002deec) aid_size_cell_ext

0x3be1,	// (0x00023228) bg_tb_trans_pane_cp1_ParamLimits

0x3be1,	// (0x00023228) bg_tb_trans_pane_cp1

0xe8cb,	// (0x0002df12) grid_tb_ext_pane_ParamLimits

0xe8cb,	// (0x0002df12) grid_tb_ext_pane

0xe906,	// (0x0002df4d) cell_tb_ext_pane_ParamLimits

0xe906,	// (0x0002df4d) cell_tb_ext_pane

0xe92e,	// (0x0002df75) cell_tb_ext_pane_g1_ParamLimits

0xe92e,	// (0x0002df75) cell_tb_ext_pane_g1

0x923d,	// (0x00028884) cell_tb_ext_pane_t1

0x388a,	// (0x00022ed1) list_highlight_pane_cp11_ParamLimits

0x388a,	// (0x00022ed1) list_highlight_pane_cp11

0xbf86,	// (0x0002b5cd) popup_uni_indicator_window_ParamLimits

0xbf86,	// (0x0002b5cd) popup_uni_indicator_window

0x3e70,	// (0x000234b7) bg_popup_sub_pane_cp14

0x9258,	// (0x0002889f) list_uniindi_pane

0x9264,	// (0x000288ab) uniindi_top_pane

0x388a,	// (0x00022ed1) bg_uniindi_top_pane

0x9283,	// (0x000288ca) uniindi_top_pane_g1

0x9299,	// (0x000288e0) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x0002f353) uniindi_top_pane_g

0x92c3,	// (0x0002890a) uniindi_top_pane_t1

0x92ed,	// (0x00028934) list_single_uniindi_pane_ParamLimits

0x92ed,	// (0x00028934) list_single_uniindi_pane

0x7974,	// (0x00026fbb) bg_uniindi_top_pane_g1

0x9300,	// (0x00028947) list_single_uniindi_pane_g1

0x9313,	// (0x0002895a) list_single_uniindi_pane_t1

0x350d,	// (0x00022b54) control_bg_pane

0x9338,	// (0x0002897f) bg_sctrl_sk_pane_cp1

0x9341,	// (0x00028988) bg_sctrl_sk_pane_cp2

0x934a,	// (0x00028991) control_bg_pane_g1

0x9353,	// (0x0002899a) control_bg_pane_g2

0x0001,

0xfd15,	// (0x0002f35c) control_bg_pane_g

0x73a4,	// (0x000269eb) cell_indicator_nsta_pane_g1_ParamLimits

0xdfac,	// (0x0002d5f3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002f0d0) cell_indicator_nsta_pane_g_ParamLimits

0x0de4,	// (0x0002042b) form2_midp_time_pane_t1_ParamLimits

0x2602,	// (0x00021c49) main_idle_act4_pane_ParamLimits

0x2602,	// (0x00021c49) main_idle_act4_pane

0xc876,	// (0x0002bebd) popup_tb_extension_window_ParamLimits

0xe8ed,	// (0x0002df34) tb_ext_find_pane_ParamLimits

0xe8ed,	// (0x0002df34) tb_ext_find_pane

0x935c,	// (0x000289a3) ai_gene_pane_1_cp1

0x4c41,	// (0x00024288) ai_gene_pane_2_cp1

0x9364,	// (0x000289ab) list_single_idle_plugin_calendar_pane

0x936d,	// (0x000289b4) list_single_idle_plugin_notification_pane

0x9376,	// (0x000289bd) list_single_idle_plugin_player_pane

0xe94b,	// (0x0002df92) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe94b,	// (0x0002df92) list_single_idle_plugin_shortcut_pane

0xe973,	// (0x0002dfba) main_idle_act4_pane_t1

0xe989,	// (0x0002dfd0) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x0002f361) main_idle_act4_pane_t

0xe99f,	// (0x0002dfe6) middle_sk_idle_act4_pane_ParamLimits

0xe99f,	// (0x0002dfe6) middle_sk_idle_act4_pane

0xe9bb,	// (0x0002e002) popup_clock_digital_analogue_window_cp2

0xe9e3,	// (0x0002e02a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9e3,	// (0x0002e02a) shortcut_wheel_idle_act4_pane

0x7974,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g1

0x7974,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g2

0x7974,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g3

0x7974,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g4

0x7974,	// (0x00026fbb) shortcut_wheel_idle_act4_pane_g5

0x9409,	// (0x00028a50) shortcut_wheel_idle_act4_pane_g6

0x9411,	// (0x00028a58) shortcut_wheel_idle_act4_pane_g7

0x9419,	// (0x00028a60) shortcut_wheel_idle_act4_pane_g8

0x9421,	// (0x00028a68) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0002f366) shortcut_wheel_idle_act4_pane_g

0xdb9a,	// (0x0002d1e1) middle_sk_idle_act4_pane_g1_ParamLimits

0xdb9a,	// (0x0002d1e1) middle_sk_idle_act4_pane_g1

0xea60,	// (0x0002e0a7) middle_sk_idle_act4_pane_g2_ParamLimits

0xea60,	// (0x0002e0a7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0002f389) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0002f389) middle_sk_idle_act4_pane_g

0xea78,	// (0x0002e0bf) middle_sk_idle_act4_pane_t1_ParamLimits

0xea78,	// (0x0002e0bf) middle_sk_idle_act4_pane_t1

0xeaa7,	// (0x0002e0ee) grid_ai_shortcut_pane_ParamLimits

0xeaa7,	// (0x0002e0ee) grid_ai_shortcut_pane

0xeac4,	// (0x0002e10b) list_highlight_pane_cp16_ParamLimits

0xeac4,	// (0x0002e10b) list_highlight_pane_cp16

0xead1,	// (0x0002e118) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xead1,	// (0x0002e118) list_single_idle_plugin_shortcut_pane_g1

0xeadd,	// (0x0002e124) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeadd,	// (0x0002e124) list_single_idle_plugin_shortcut_pane_g2

0xeaf9,	// (0x0002e140) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaf9,	// (0x0002e140) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x0002f38e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x0002f38e) list_single_idle_plugin_shortcut_pane_g

0xeb0e,	// (0x0002e155) cell_ai_shortcut_pane_ParamLimits

0xeb0e,	// (0x0002e155) cell_ai_shortcut_pane

0xeb24,	// (0x0002e16b) cell_ai_shortcut_pane_g1_ParamLimits

0xeb24,	// (0x0002e16b) cell_ai_shortcut_pane_g1

0x935c,	// (0x000289a3) ai_gene_pane_1_cp2

0x9551,	// (0x00028b98) ai_gene_pane_2_cp2

0x9559,	// (0x00028ba0) list_highlight_pane_cp15

0x9562,	// (0x00028ba9) list_single_idle_plugin_calendar_pane_g1

0x9559,	// (0x00028ba0) list_highlight_pane_cp17

0x956a,	// (0x00028bb1) list_single_idle_plugin_calendar_pane_g1_copy1

0x9572,	// (0x00028bb9) list_single_idle_plugin_player_pane_g1

0x6cf0,	// (0x00026337) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x0002f395) list_single_idle_plugin_player_pane_g

0x957a,	// (0x00028bc1) list_single_idle_plugin_player_pane_t1

0x9588,	// (0x00028bcf) list_single_idle_plugin_player_pane_t2

0x9596,	// (0x00028bdd) list_single_idle_plugin_player_pane_t3

0x95a4,	// (0x00028beb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x0002f39a) list_single_idle_plugin_player_pane_t

0x95b2,	// (0x00028bf9) wait_bar_pane_cp15

0x95ba,	// (0x00028c01) grid_ai_notification_pane

0x6cf0,	// (0x00026337) list_single_idle_plugin_notification_pane_g1

0xeb46,	// (0x0002e18d) cell_ai_notification_pane_ParamLimits

0xeb46,	// (0x0002e18d) cell_ai_notification_pane

0x95d0,	// (0x00028c17) cell_ai_notification_pane_g1

0x95d8,	// (0x00028c1f) cell_ai_notification_pane_t1

0xeb53,	// (0x0002e19a) tb_ext_find_button_pane

0xeb5b,	// (0x0002e1a2) tb_ext_find_pane_g1

0xeb63,	// (0x0002e1aa) tb_ext_find_pane_t1

0x44f3,	// (0x00023b3a) tb_ext_find_button_pane_g1

0x9604,	// (0x00028c4b) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x0002f3a3) tb_ext_find_button_pane_g

0xe973,	// (0x0002dfba) main_idle_act4_pane_t1_ParamLimits

0xe989,	// (0x0002dfd0) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x0002f361) main_idle_act4_pane_t_ParamLimits

0xe9bb,	// (0x0002e002) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9d3,	// (0x0002e01a) sat_plugin_idle_act4_pane_ParamLimits

0xe9d3,	// (0x0002e01a) sat_plugin_idle_act4_pane

0xeb71,	// (0x0002e1b8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb71,	// (0x0002e1b8) sat_plugin_idle_act4_pane_t1

0xeb89,	// (0x0002e1d0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb89,	// (0x0002e1d0) sat_plugin_idle_act4_pane_t2

0xeba1,	// (0x0002e1e8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeba1,	// (0x0002e1e8) sat_plugin_idle_act4_pane_t3

0xebb9,	// (0x0002e200) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebb9,	// (0x0002e200) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x0002f3a8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x0002f3a8) sat_plugin_idle_act4_pane_t

0x13e5,	// (0x00020a2c) popup_battery_window_ParamLimits

0x13e5,	// (0x00020a2c) popup_battery_window

0x388a,	// (0x00022ed1) bg_popup_sub_pane_cp25_ParamLimits

0x388a,	// (0x00022ed1) bg_popup_sub_pane_cp25

0x9659,	// (0x00028ca0) popup_battery_window_g1_ParamLimits

0x9659,	// (0x00028ca0) popup_battery_window_g1

0x9665,	// (0x00028cac) popup_battery_window_t1_ParamLimits

0x9665,	// (0x00028cac) popup_battery_window_t1

0x9677,	// (0x00028cbe) popup_battery_window_t2_ParamLimits

0x9677,	// (0x00028cbe) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x0002f3b1) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x0002f3b1) popup_battery_window_t

0xd485,	// (0x0002cacc) midp_canvas_pane_ParamLimits

0xd4e2,	// (0x0002cb29) midp_keypad_pane_ParamLimits

0xd4e2,	// (0x0002cb29) midp_keypad_pane

0x4e44,	// (0x0002448b) main_midp_pane_ParamLimits

0x741e,	// (0x00026a65) signal_pane_g2_cp_ParamLimits

0xebd1,	// (0x0002e218) aid_size_cell_midp_keypad_ParamLimits

0xebd1,	// (0x0002e218) aid_size_cell_midp_keypad

0xebef,	// (0x0002e236) midp_keyp_game_grid_pane_ParamLimits

0xebef,	// (0x0002e236) midp_keyp_game_grid_pane

0xec16,	// (0x0002e25d) midp_keyp_rocker_pane_ParamLimits

0xec16,	// (0x0002e25d) midp_keyp_rocker_pane

0xec67,	// (0x0002e2ae) midp_keyp_sk_left_pane_ParamLimits

0xec67,	// (0x0002e2ae) midp_keyp_sk_left_pane

0xecbb,	// (0x0002e302) midp_keyp_sk_right_pane_ParamLimits

0xecbb,	// (0x0002e302) midp_keyp_sk_right_pane

0x350d,	// (0x00022b54) bg_button_pane_cp03

0xed0f,	// (0x0002e356) midp_keyp_sk_left_pane_g1

0x350d,	// (0x00022b54) bg_button_pane_cp04

0xed0f,	// (0x0002e356) midp_keyp_sk_right_pane_g1

0x7974,	// (0x00026fbb) midp_keyp_rocker_pane_g1

0xed18,	// (0x0002e35f) keyp_game_cell_pane_ParamLimits

0xed18,	// (0x0002e35f) keyp_game_cell_pane

0x350d,	// (0x00022b54) bg_button_pane_cp02

0xed3c,	// (0x0002e383) keyp_game_cell_pane_g1

0xbf21,	// (0x0002b568) popup_fep_vkb2_window_ParamLimits

0xbf21,	// (0x0002b568) popup_fep_vkb2_window

0xca74,	// (0x0002c0bb) aid_size_cell_vkb2_ParamLimits

0xca74,	// (0x0002c0bb) aid_size_cell_vkb2

0xcaaa,	// (0x0002c0f1) popup_fep_vkb2_window_g1_ParamLimits

0xcaaa,	// (0x0002c0f1) popup_fep_vkb2_window_g1

0xcafa,	// (0x0002c141) vkb2_area_bottom_pane_ParamLimits

0xcafa,	// (0x0002c141) vkb2_area_bottom_pane

0xcb4e,	// (0x0002c195) vkb2_area_keypad_pane_ParamLimits

0xcb4e,	// (0x0002c195) vkb2_area_keypad_pane

0xcb96,	// (0x0002c1dd) vkb2_area_top_pane_ParamLimits

0xcb96,	// (0x0002c1dd) vkb2_area_top_pane

0xcc1c,	// (0x0002c263) vkb2_top_entry_pane_ParamLimits

0xcc1c,	// (0x0002c263) vkb2_top_entry_pane

0xcc49,	// (0x0002c290) vkb2_top_grid_left_pane_ParamLimits

0xcc49,	// (0x0002c290) vkb2_top_grid_left_pane

0xcc69,	// (0x0002c2b0) vkb2_top_grid_right_pane_ParamLimits

0xcc69,	// (0x0002c2b0) vkb2_top_grid_right_pane

0x2c6c,	// (0x000222b3) vkb2_cell_keypad_pane_ParamLimits

0x2c6c,	// (0x000222b3) vkb2_cell_keypad_pane

0xccaf,	// (0x0002c2f6) vkb2_area_bottom_grid_pane_ParamLimits

0xccaf,	// (0x0002c2f6) vkb2_area_bottom_grid_pane

0xccd9,	// (0x0002c320) vkb2_area_bottom_pane_g1_ParamLimits

0xccd9,	// (0x0002c320) vkb2_area_bottom_pane_g1

0xccff,	// (0x0002c346) vkb2_area_bottom_pane_g2_ParamLimits

0xccff,	// (0x0002c346) vkb2_area_bottom_pane_g2

0xcd30,	// (0x0002c377) vkb2_area_bottom_pane_g3_ParamLimits

0xcd30,	// (0x0002c377) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x0002f3b6) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x0002f3b6) vkb2_area_bottom_pane_g

0x2e16,	// (0x0002245d) vkb2_top_cell_left_pane_ParamLimits

0x2e16,	// (0x0002245d) vkb2_top_cell_left_pane

0xed45,	// (0x0002e38c) vkb2_top_entry_pane_g1_ParamLimits

0xed45,	// (0x0002e38c) vkb2_top_entry_pane_g1

0xed53,	// (0x0002e39a) vkb2_top_entry_pane_t1_ParamLimits

0xed53,	// (0x0002e39a) vkb2_top_entry_pane_t1

0x9828,	// (0x00028e6f) vkb2_top_entry_pane_t2_ParamLimits

0x9828,	// (0x00028e6f) vkb2_top_entry_pane_t2

0x985a,	// (0x00028ea1) vkb2_top_entry_pane_t3_ParamLimits

0x985a,	// (0x00028ea1) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x0002f3bd) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x0002f3bd) vkb2_top_entry_pane_t

0xcd9a,	// (0x0002c3e1) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd9a,	// (0x0002c3e1) vkb2_top_grid_right_pane_g1

0x2e79,	// (0x000224c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x2e79,	// (0x000224c0) vkb2_top_grid_right_pane_g2

0x2e91,	// (0x000224d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x2e91,	// (0x000224d8) vkb2_top_grid_right_pane_g3

0xcdb0,	// (0x0002c3f7) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdb0,	// (0x0002c3f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x0002f3c4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x0002f3c4) vkb2_top_grid_right_pane_g

0x2ebf,	// (0x00022506) vkb2_top_cell_left_pane_g1

0x2ed6,	// (0x0002251d) vkb2_cell_keypad_pane_g1_ParamLimits

0x2ed6,	// (0x0002251d) vkb2_cell_keypad_pane_g1

0x987e,	// (0x00028ec5) vkb2_cell_keypad_pane_t1_ParamLimits

0x987e,	// (0x00028ec5) vkb2_cell_keypad_pane_t1

0x2ee4,	// (0x0002252b) vkb2_cell_bottom_grid_pane_ParamLimits

0x2ee4,	// (0x0002252b) vkb2_cell_bottom_grid_pane

0x2f1d,	// (0x00022564) vkb2_cell_bottom_grid_pane_g1

0xea04,	// (0x0002e04b) aid_call2_pane_cp02

0xea0c,	// (0x0002e053) aid_call_pane_cp02

0xea14,	// (0x0002e05b) clock_digital_number_pane_cp10

0xea1c,	// (0x0002e063) clock_digital_number_pane_cp11

0xea24,	// (0x0002e06b) clock_digital_number_pane_cp12

0xea2c,	// (0x0002e073) clock_digital_number_pane_cp13

0xea34,	// (0x0002e07b) clock_digital_separator_pane_cp10

0x44f3,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g1

0x44f3,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g2

0xea3c,	// (0x0002e083) popup_clock_digital_analogue_window_cp2_g3

0x44f3,	// (0x00023b3a) popup_clock_digital_analogue_window_cp2_g4

0xea3c,	// (0x0002e083) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0002f379) popup_clock_digital_analogue_window_cp2_g

0xea44,	// (0x0002e08b) popup_clock_digital_analogue_window_cp2_t1

0xea52,	// (0x0002e099) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x0002f384) popup_clock_digital_analogue_window_cp2_t

0x7974,	// (0x00026fbb) clock_digital_number_pane_cp10_g1

0x7974,	// (0x00026fbb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f16c) clock_digital_number_pane_cp10_g

0x7974,	// (0x00026fbb) clock_digital_separator_pane_cp10_g1

0x7974,	// (0x00026fbb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002f16c) clock_digital_separator_pane_cp10_g

0x92a5,	// (0x000288ec) uniindi_top_pane_g3

0x92b6,	// (0x000288fd) uniindi_top_pane_g4

0x2cf7,	// (0x0002233e) vkb2_row_keypad_pane_ParamLimits

0x2cf7,	// (0x0002233e) vkb2_row_keypad_pane

0x2f39,	// (0x00022580) vkb2_cell_t_keypad_pane_ParamLimits

0x2f39,	// (0x00022580) vkb2_cell_t_keypad_pane

0x2f49,	// (0x00022590) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2f49,	// (0x00022590) vkb2_cell_t_keypad_pane_cp08

0x2f5c,	// (0x000225a3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2f5c,	// (0x000225a3) vkb2_cell_t_keypad_pane_cp09

0x2f70,	// (0x000225b7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2f70,	// (0x000225b7) vkb2_cell_t_keypad_pane_cp01

0x2f81,	// (0x000225c8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2f81,	// (0x000225c8) vkb2_cell_t_keypad_pane_cp02

0x2f92,	// (0x000225d9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2f92,	// (0x000225d9) vkb2_cell_t_keypad_pane_cp03

0x2fa3,	// (0x000225ea) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2fa3,	// (0x000225ea) vkb2_cell_t_keypad_pane_cp04

0x2fb4,	// (0x000225fb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2fb4,	// (0x000225fb) vkb2_cell_t_keypad_pane_cp05

0x2fc5,	// (0x0002260c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2fc5,	// (0x0002260c) vkb2_cell_t_keypad_pane_cp06

0x2fd6,	// (0x0002261d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2fd6,	// (0x0002261d) vkb2_cell_t_keypad_pane_cp07

0x2fe7,	// (0x0002262e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2fe7,	// (0x0002262e) vkb2_cell_t_keypad_pane_cp10

0x7bf2,	// (0x00027239) vkb2_cell_t_keypad_pane_g1

0x9895,	// (0x00028edc) vkb2_cell_t_keypad_pane_t1

0x350d,	// (0x00022b54) popup_grid_graphic2_window

0xed8c,	// (0x0002e3d3) aid_size_cell_graphic2_ParamLimits

0xed8c,	// (0x0002e3d3) aid_size_cell_graphic2

0xedca,	// (0x0002e411) bg_popup_window_pane_cp21_ParamLimits

0xedca,	// (0x0002e411) bg_popup_window_pane_cp21

0xedd8,	// (0x0002e41f) graphic2_pages_pane_ParamLimits

0xedd8,	// (0x0002e41f) graphic2_pages_pane

0xee2e,	// (0x0002e475) grid_graphic2_control_pane_ParamLimits

0xee2e,	// (0x0002e475) grid_graphic2_control_pane

0xee76,	// (0x0002e4bd) grid_graphic2_pane_ParamLimits

0xee76,	// (0x0002e4bd) grid_graphic2_pane

0xeefd,	// (0x0002e544) cell_graphic2_pane

0x350d,	// (0x00022b54) main_comp_mode_pane

0x8b25,	// (0x0002816c) list_ai3_gene_pane_ParamLimits

0xe74b,	// (0x0002dd92) bg_popup_window_pane_cp19_ParamLimits

0x8efb,	// (0x00028542) bg_touch_area_indi_pane_ParamLimits

0x8efb,	// (0x00028542) bg_touch_area_indi_pane

0x8f11,	// (0x00028558) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f11,	// (0x00028558) bg_touch_area_indi_pane_cp01

0x8f27,	// (0x0002856e) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f27,	// (0x0002856e) bg_touch_area_indi_pane_cp02

0x8f3f,	// (0x00028586) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f3f,	// (0x00028586) bg_touch_area_indi_pane_cp03

0x8f59,	// (0x000285a0) popup_slider_window_g1_ParamLimits

0x8f75,	// (0x000285bc) popup_slider_window_g2_ParamLimits

0x8f91,	// (0x000285d8) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002f30e) popup_slider_window_g_ParamLimits

0x8fed,	// (0x00028634) popup_slider_window_t1_ParamLimits

0x9061,	// (0x000286a8) small_volume_slider_vertical_pane_ParamLimits

0xeefd,	// (0x0002e544) cell_graphic2_pane_ParamLimits

0xef67,	// (0x0002e5ae) bg_button_pane_cp10_ParamLimits

0xef67,	// (0x0002e5ae) bg_button_pane_cp10

0xef7a,	// (0x0002e5c1) bg_button_pane_cp11_ParamLimits

0xef7a,	// (0x0002e5c1) bg_button_pane_cp11

0xef8d,	// (0x0002e5d4) graphic2_pages_pane_g1_ParamLimits

0xef8d,	// (0x0002e5d4) graphic2_pages_pane_g1

0xefa8,	// (0x0002e5ef) graphic2_pages_pane_g2_ParamLimits

0xefa8,	// (0x0002e5ef) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x0002f3d2) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x0002f3d2) graphic2_pages_pane_g

0xefc0,	// (0x0002e607) graphic2_pages_pane_t1_ParamLimits

0xefc0,	// (0x0002e607) graphic2_pages_pane_t1

0xefd8,	// (0x0002e61f) cell_graphic2_control_pane_ParamLimits

0xefd8,	// (0x0002e61f) cell_graphic2_control_pane

0xf00a,	// (0x0002e651) cell_graphic2_pane_g1_ParamLimits

0xf00a,	// (0x0002e651) cell_graphic2_pane_g1

0xdba8,	// (0x0002d1ef) cell_graphic2_pane_g2_ParamLimits

0xdba8,	// (0x0002d1ef) cell_graphic2_pane_g2

0xef5a,	// (0x0002e5a1) cell_graphic2_pane_g3_ParamLimits

0xef5a,	// (0x0002e5a1) cell_graphic2_pane_g3

0xdbb5,	// (0x0002d1fc) cell_graphic2_pane_g4_ParamLimits

0xdbb5,	// (0x0002d1fc) cell_graphic2_pane_g4

0xf017,	// (0x0002e65e) cell_graphic2_pane_g5_ParamLimits

0xf017,	// (0x0002e65e) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x0002f3d7) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x0002f3d7) cell_graphic2_pane_g

0xf037,	// (0x0002e67e) cell_graphic2_pane_t1_ParamLimits

0xf037,	// (0x0002e67e) cell_graphic2_pane_t1

0x6047,	// (0x0002568e) grid_highlight_pane_cp11_ParamLimits

0x6047,	// (0x0002568e) grid_highlight_pane_cp11

0x388a,	// (0x00022ed1) bg_button_pane_cp05

0xf06c,	// (0x0002e6b3) cell_graphic2_control_pane_g1

0x7974,	// (0x00026fbb) bg_touch_area_indi_pane_g1

0x9b65,	// (0x000291ac) aid_cmod_rocker_key_size

0x9b6f,	// (0x000291b6) aid_cmode_itu_key_size

0x9b79,	// (0x000291c0) main_cmode_video_pane

0x9b83,	// (0x000291ca) main_comp_mode_itu_pane

0x9b8f,	// (0x000291d6) main_comp_mode_rocker_pane

0x9b9b,	// (0x000291e2) cell_cmode_rocker_pane_ParamLimits

0x9b9b,	// (0x000291e2) cell_cmode_rocker_pane

0x9bad,	// (0x000291f4) cell_cmode_itu_pane_ParamLimits

0x9bad,	// (0x000291f4) cell_cmode_itu_pane

0x3e70,	// (0x000234b7) bg_button_pane_cp06_ParamLimits

0x3e70,	// (0x000234b7) bg_button_pane_cp06

0x7bf2,	// (0x00027239) cell_cmode_rocker_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) cell_cmode_rocker_pane_g1

0x9105,	// (0x0002874c) cell_cmode_rocker_pane_g2_ParamLimits

0x9105,	// (0x0002874c) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x0002f3e7) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x0002f3e7) cell_cmode_rocker_pane_g

0x350d,	// (0x00022b54) bg_button_pane_cp07

0x9bc2,	// (0x00029209) cell_cmode_itu_pane_g1

0x9bcb,	// (0x00029212) cell_cmode_itu_pane_t1

0x9bd9,	// (0x00029220) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x0002f3ec) cell_cmode_itu_pane_t

0x9328,	// (0x0002896f) aid_touch_ctrl_left

0x9330,	// (0x00028977) aid_touch_ctrl_right

0x350d,	// (0x00022b54) compa_mode_pane

0xf092,	// (0x0002e6d9) aid_cmod_rocker_key_size_cp

0xf09c,	// (0x0002e6e3) aid_cmode_itu_key_size_cp

0x9bfb,	// (0x00029242) compa_mode_pane_g1

0x9c03,	// (0x0002924a) compa_mode_pane_g2

0x9c0b,	// (0x00029252) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x0002f3f1) compa_mode_pane_g

0xf0a6,	// (0x0002e6ed) main_comp_mode_itu_pane_cp

0xf0ae,	// (0x0002e6f5) main_comp_mode_rocker_pane_cp

0xf0b6,	// (0x0002e6fd) cell_cmode_itu_pane_cp_ParamLimits

0xf0b6,	// (0x0002e6fd) cell_cmode_itu_pane_cp

0xf0cb,	// (0x0002e712) cell_cmode_rocker_pane_cp_ParamLimits

0xf0cb,	// (0x0002e712) cell_cmode_rocker_pane_cp

0x3e70,	// (0x000234b7) bg_button_pane_cp06_cp_ParamLimits

0x3e70,	// (0x000234b7) bg_button_pane_cp06_cp

0x7bf2,	// (0x00027239) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7bf2,	// (0x00027239) cell_cmode_rocker_pane_g1_cp

0x7974,	// (0x00026fbb) cell_cmode_rocker_pane_g2_cp

0x350d,	// (0x00022b54) bg_button_pane_cp07_cp

0xf0dd,	// (0x0002e724) cell_cmode_itu_pane_g1_cp

0xf0e6,	// (0x0002e72d) cell_cmode_itu_pane_t1_cp

0xf0e6,	// (0x0002e72d) cell_cmode_itu_pane_t2_cp

0xddbf,	// (0x0002d406) settings_code_pane_cp2

0x3601,	// (0x00022c48) bg_popup_window_pane_cp3_ParamLimits

0x3a64,	// (0x000230ab) heading_pane_cp3_ParamLimits

0x3a70,	// (0x000230b7) listscroll_popup_graphic_pane_ParamLimits

0x2610,	// (0x00021c57) fep_hwr_aid_pane_ParamLimits

0x29d9,	// (0x00022020) aid_touch_sctrl_top_ParamLimits

0x29e6,	// (0x0002202d) sctrl_sk_top_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002f327) sctrl_sk_top_pane_g_ParamLimits

0x29f3,	// (0x0002203a) sctrl_sk_top_pane_t1_ParamLimits

0x29d9,	// (0x00022020) aid_touch_sctrl_bottom_ParamLimits

0x29f3,	// (0x0002203a) sctrl_sk_bottom_pane_t1_ParamLimits

0x9271,	// (0x000288b8) aid_area_touch_clock

0xcbde,	// (0x0002c225) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbde,	// (0x0002c225) aid_vkb2_area_top_pane_cell

0xcc89,	// (0x0002c2d0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc89,	// (0x0002c2d0) aid_vkb2_area_bottom_pane_cell

0x97e0,	// (0x00028e27) popup_char_count_window

0x9c58,	// (0x0002929f) popup_char_count_window_g1

0x9c61,	// (0x000292a8) popup_char_count_window_g2

0x9c6a,	// (0x000292b1) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x0002f3f8) popup_char_count_window_g

0x9c73,	// (0x000292ba) popup_char_count_window_t1

0x2a94,	// (0x000220db) popup_fep_char_preview_window_ParamLimits

0x2a94,	// (0x000220db) popup_fep_char_preview_window

0xcbfe,	// (0x0002c245) vkb2_top_candi_pane_ParamLimits

0xcbfe,	// (0x0002c245) vkb2_top_candi_pane

0xf0f4,	// (0x0002e73b) cell_vkb2_top_candi_pane_ParamLimits

0xf0f4,	// (0x0002e73b) cell_vkb2_top_candi_pane

0x59d3,	// (0x0002501a) bg_popup_fep_char_preview_window_ParamLimits

0x59d3,	// (0x0002501a) bg_popup_fep_char_preview_window

0x2ffc,	// (0x00022643) popup_fep_char_preview_window_t1_ParamLimits

0x2ffc,	// (0x00022643) popup_fep_char_preview_window_t1

0x9cce,	// (0x00029315) bg_popup_fep_char_preview_window_g1

0x9cd6,	// (0x0002931d) bg_popup_fep_char_preview_window_g2

0x9cde,	// (0x00029325) bg_popup_fep_char_preview_window_g3

0x9ce6,	// (0x0002932d) bg_popup_fep_char_preview_window_g4

0x9cee,	// (0x00029335) bg_popup_fep_char_preview_window_g5

0x3036,	// (0x0002267d) bg_popup_fep_char_preview_window_g6

0x9cf6,	// (0x0002933d) bg_popup_fep_char_preview_window_g7

0x9cfe,	// (0x00029345) bg_popup_fep_char_preview_window_g8

0x9d06,	// (0x0002934d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdb8,	// (0x0002f3ff) bg_popup_fep_char_preview_window_g

0x7bf2,	// (0x00027239) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) cell_vkb2_top_candi_pane_g1

0x7f09,	// (0x00027550) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f09,	// (0x00027550) cell_vkb2_top_candi_pane_g2

0x7f2a,	// (0x00027571) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f2a,	// (0x00027571) cell_vkb2_top_candi_pane_g3

0x303e,	// (0x00022685) cell_vkb2_top_candi_pane_g4_ParamLimits

0x303e,	// (0x00022685) cell_vkb2_top_candi_pane_g4

0x9d0e,	// (0x00029355) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d0e,	// (0x00029355) cell_vkb2_top_candi_pane_g5

0x9105,	// (0x0002874c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9105,	// (0x0002874c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcb,	// (0x0002f412) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcb,	// (0x0002f412) cell_vkb2_top_candi_pane_g

0x305f,	// (0x000226a6) cell_vkb2_top_candi_pane_t1

0x2470,	// (0x00021ab7) aid_size_touch_slider_mark_ParamLimits

0x2470,	// (0x00021ab7) aid_size_touch_slider_mark

0xee14,	// (0x0002e45b) grid_graphic2_catg_pane_ParamLimits

0xee14,	// (0x0002e45b) grid_graphic2_catg_pane

0xeed0,	// (0x0002e517) popup_grid_graphic2_window_t1_ParamLimits

0xeed0,	// (0x0002e517) popup_grid_graphic2_window_t1

0xeee6,	// (0x0002e52d) popup_grid_graphic2_window_t2_ParamLimits

0xeee6,	// (0x0002e52d) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x0002f3cd) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x0002f3cd) popup_grid_graphic2_window_t

0x388a,	// (0x00022ed1) bg_button_pane_cp05_ParamLimits

0xf06c,	// (0x0002e6b3) cell_graphic2_control_pane_g1_ParamLimits

0xf15a,	// (0x0002e7a1) cell_graphic2_catg_pane_ParamLimits

0xf15a,	// (0x0002e7a1) cell_graphic2_catg_pane

0x350d,	// (0x00022b54) bg_button_pane_cp12

0xf16c,	// (0x0002e7b3) cell_graphic2_catg_pane_g1

0x923d,	// (0x00028884) cell_tb_ext_pane_t1_ParamLimits

0x2e36,	// (0x0002247d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2e36,	// (0x0002247d) vkb2_top_cell_right_narrow_pane

0x2e4e,	// (0x00022495) vkb2_top_cell_right_wide_pane_ParamLimits

0x2e4e,	// (0x00022495) vkb2_top_cell_right_wide_pane

0x2602,	// (0x00021c49) bg_vkb2_func_pane_ParamLimits

0x2602,	// (0x00021c49) bg_vkb2_func_pane

0x2ebf,	// (0x00022506) vkb2_top_cell_left_pane_g1_ParamLimits

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp03

0x2f1d,	// (0x00022564) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5356,	// (0x0002499d) bg_vkb2_func_pane_g1

0x535e,	// (0x000249a5) bg_vkb2_func_pane_g2

0x536e,	// (0x000249b5) bg_vkb2_func_pane_g3

0x5366,	// (0x000249ad) bg_vkb2_func_pane_g4

0x5376,	// (0x000249bd) bg_vkb2_func_pane_g5

0x537e,	// (0x000249c5) bg_vkb2_func_pane_g6

0x5386,	// (0x000249cd) bg_vkb2_func_pane_g7

0x538e,	// (0x000249d5) bg_vkb2_func_pane_g8

0x534e,	// (0x00024995) bg_vkb2_func_pane_g9

0x0008,

0xfdd8,	// (0x0002f41f) bg_vkb2_func_pane_g

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp01

0x2ebf,	// (0x00022506) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2ebf,	// (0x00022506) vkb2_top_cell_right_wide_pane_g1

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2602,	// (0x00021c49) bg_vkb2_fuc_pane_cp02

0x2f1d,	// (0x00022564) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2f1d,	// (0x00022564) vkb2_top_cell_right_narrow_pane_g1

0xe68b,	// (0x0002dcd2) aid_touch_area_decrease_ParamLimits

0xe68b,	// (0x0002dcd2) aid_touch_area_decrease

0xe6bf,	// (0x0002dd06) aid_touch_area_increase_ParamLimits

0xe6bf,	// (0x0002dd06) aid_touch_area_increase

0xe6e7,	// (0x0002dd2e) aid_touch_area_mute_ParamLimits

0xe6e7,	// (0x0002dd2e) aid_touch_area_mute

0xe717,	// (0x0002dd5e) aid_touch_area_slider_ParamLimits

0xe717,	// (0x0002dd5e) aid_touch_area_slider

0xe757,	// (0x0002dd9e) popup_slider_window_g4_ParamLimits

0xe757,	// (0x0002dd9e) popup_slider_window_g4

0xe77f,	// (0x0002ddc6) popup_slider_window_g5_ParamLimits

0xe77f,	// (0x0002ddc6) popup_slider_window_g5

0xe7b3,	// (0x0002ddfa) popup_slider_window_g6_ParamLimits

0xe7b3,	// (0x0002ddfa) popup_slider_window_g6

0x901b,	// (0x00028662) popup_slider_window_t2_ParamLimits

0x901b,	// (0x00028662) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002f31b) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002f31b) popup_slider_window_t

0xe7cf,	// (0x0002de16) slider_pane_ParamLimits

0xe7cf,	// (0x0002de16) slider_pane

0x9d4a,	// (0x00029391) slider_pane_g1_ParamLimits

0x9d4a,	// (0x00029391) slider_pane_g1

0x9d5e,	// (0x000293a5) slider_pane_g2_ParamLimits

0x9d5e,	// (0x000293a5) slider_pane_g2

0x9d74,	// (0x000293bb) slider_pane_g3_ParamLimits

0x9d74,	// (0x000293bb) slider_pane_g3

0x0003,

0xfdeb,	// (0x0002f432) slider_pane_g_ParamLimits

0xfdeb,	// (0x0002f432) slider_pane_g

0xc8be,	// (0x0002bf05) popup_tb_float_extension_window_ParamLimits

0xc8be,	// (0x0002bf05) popup_tb_float_extension_window

0x9da0,	// (0x000293e7) aid_size_cell_tb_float_ext

0x350d,	// (0x00022b54) bg_popup_sub_window_cp28

0x9dac,	// (0x000293f3) grid_tb_float_ext_pane

0x9db6,	// (0x000293fd) cell_tb_float_ext_pane_ParamLimits

0x9db6,	// (0x000293fd) cell_tb_float_ext_pane

0x9dd0,	// (0x00029417) cell_tb_float_ext_pane_g1

0x9dd9,	// (0x00029420) grid_highlight_pane_cp12

0xc9e7,	// (0x0002c02e) cell_last_hwr_side_pane_ParamLimits

0xc9e7,	// (0x0002c02e) cell_last_hwr_side_pane

0x7974,	// (0x00026fbb) cell_last_hwr_side_pane_g1

0x9de2,	// (0x00029429) cell_last_hwr_side_pane_g2

0x0001,

0xfdf4,	// (0x0002f43b) cell_last_hwr_side_pane_g

0xcd65,	// (0x0002c3ac) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd65,	// (0x0002c3ac) vkb2_area_bottom_space_btn_pane

0x7bf2,	// (0x00027239) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9895,	// (0x00028edc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x305f,	// (0x000226a6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x307e,	// (0x000226c5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x307e,	// (0x000226c5) vkb2_area_bottom_space_btn_pane_g1

0x30b8,	// (0x000226ff) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x30b8,	// (0x000226ff) vkb2_area_bottom_space_btn_pane_g2

0x30ee,	// (0x00022735) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x30ee,	// (0x00022735) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf9,	// (0x0002f440) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf9,	// (0x0002f440) vkb2_area_bottom_space_btn_pane_g

0x26b7,	// (0x00021cfe) cel_fep_hwr_func_pane_ParamLimits

0x26b7,	// (0x00021cfe) cel_fep_hwr_func_pane

0xc9bc,	// (0x0002c003) cell_hwr_side_button_pane_ParamLimits

0xc9bc,	// (0x0002c003) cell_hwr_side_button_pane

0x9271,	// (0x000288b8) aid_area_touch_clock_ParamLimits

0x388a,	// (0x00022ed1) bg_uniindi_top_pane_ParamLimits

0x9283,	// (0x000288ca) uniindi_top_pane_g1_ParamLimits

0x9299,	// (0x000288e0) uniindi_top_pane_g2_ParamLimits

0x92a5,	// (0x000288ec) uniindi_top_pane_g3_ParamLimits

0x92b6,	// (0x000288fd) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x0002f353) uniindi_top_pane_g_ParamLimits

0x92c3,	// (0x0002890a) uniindi_top_pane_t1_ParamLimits

0x388a,	// (0x00022ed1) bg_vkb2_func_pane_cp01_ParamLimits

0x388a,	// (0x00022ed1) bg_vkb2_func_pane_cp01

0x9deb,	// (0x00029432) cel_fep_hwr_func_pane_g1_ParamLimits

0x9deb,	// (0x00029432) cel_fep_hwr_func_pane_g1

0x388a,	// (0x00022ed1) bg_vkb2_func_pane_cp02_ParamLimits

0x388a,	// (0x00022ed1) bg_vkb2_func_pane_cp02

0x9deb,	// (0x00029432) cell_hwr_side_button_pane_g1_ParamLimits

0x9deb,	// (0x00029432) cell_hwr_side_button_pane_g1

0x51cf,	// (0x00024816) status_pane_g4_ParamLimits

0x51cf,	// (0x00024816) status_pane_g4

0x51e9,	// (0x00024830) status_pane_t1

0x76ae,	// (0x00026cf5) form2_midp_gauge_slider_cont_pane

0x76b6,	// (0x00026cfd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe077,	// (0x0002d6be) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe089,	// (0x0002d6d0) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002f11f) form2_midp_gauge_slider_pane_t_ParamLimits

0x76ec,	// (0x00026d33) form2_midp_slider_pane_ParamLimits

0x2a54,	// (0x0002209b) aid_size_cell_func_vkb2_ParamLimits

0x2a54,	// (0x0002209b) aid_size_cell_func_vkb2

0x9d8c,	// (0x000293d3) slider_pane_g4_ParamLimits

0x9d8c,	// (0x000293d3) slider_pane_g4

0xcdc6,	// (0x0002c40d) form2_midp_gauge_slider_pane_t2_cp01

0xcdd4,	// (0x0002c41b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdd4,	// (0x0002c41b) form2_midp_gauge_slider_pane_t3_cp01

0x3163,	// (0x000227aa) form2_midp_slider_pane_cp01

0x350d,	// (0x00022b54) navi_smil_pane

0x9e24,	// (0x0002946b) navi_smil_pane_g1

0x9e2c,	// (0x00029473) navi_smil_pane_t1

0x9df9,	// (0x00029440) form2_midp_slider_pane_g1

0x9e02,	// (0x00029449) form2_midp_slider_pane_g2

0x9e0a,	// (0x00029451) form2_midp_slider_pane_g3

0x9df9,	// (0x00029440) form2_midp_slider_pane_g4

0xf175,	// (0x0002e7bc) form2_midp_slider_pane_g5

0x0004,

0xfe02,	// (0x0002f449) form2_midp_slider_pane_g

0x3128,	// (0x0002276f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3128,	// (0x0002276f) vkb2_area_bottom_space_btn_pane_g4

0xd755,	// (0x0002cd9c) lc0_navi_pane_ParamLimits

0xd755,	// (0x0002cd9c) lc0_navi_pane

0xd7bf,	// (0x0002ce06) lc0_stat_indi_pane_ParamLimits

0xd7bf,	// (0x0002ce06) lc0_stat_indi_pane

0xd7d4,	// (0x0002ce1b) ls0_title_pane_ParamLimits

0xd7d4,	// (0x0002ce1b) ls0_title_pane

0x3e70,	// (0x000234b7) bg_popup_sub_pane_cp14_ParamLimits

0x9258,	// (0x0002889f) list_uniindi_pane_ParamLimits

0x9264,	// (0x000288ab) uniindi_top_pane_ParamLimits

0x9300,	// (0x00028947) list_single_uniindi_pane_g1_ParamLimits

0x9313,	// (0x0002895a) list_single_uniindi_pane_t1_ParamLimits

0xcdf1,	// (0x0002c438) lc0_stat_clock_pane_ParamLimits

0xcdf1,	// (0x0002c438) lc0_stat_clock_pane

0xf180,	// (0x0002e7c7) lc0_stat_indi_pane_g1_ParamLimits

0xf180,	// (0x0002e7c7) lc0_stat_indi_pane_g1

0xf18d,	// (0x0002e7d4) lc0_stat_indi_pane_g2_ParamLimits

0xf18d,	// (0x0002e7d4) lc0_stat_indi_pane_g2

0x0001,

0xfe0d,	// (0x0002f454) lc0_stat_indi_pane_g_ParamLimits

0xfe0d,	// (0x0002f454) lc0_stat_indi_pane_g

0xcdfe,	// (0x0002c445) lc0_uni_indicator_pane_ParamLimits

0xcdfe,	// (0x0002c445) lc0_uni_indicator_pane

0xf19a,	// (0x0002e7e1) ls0_title_pane_g1_ParamLimits

0xf19a,	// (0x0002e7e1) ls0_title_pane_g1

0xf1ae,	// (0x0002e7f5) ls0_title_pane_t1_ParamLimits

0xf1ae,	// (0x0002e7f5) ls0_title_pane_t1

0xce0b,	// (0x0002c452) lc0_uni_indicator_pane_g1_ParamLimits

0xce0b,	// (0x0002c452) lc0_uni_indicator_pane_g1

0x9e9e,	// (0x000294e5) lc0_stat_clock_pane_t1

0x350d,	// (0x00022b54) main_ai5_pane

0x9eac,	// (0x000294f3) ai5_sk_pane_ParamLimits

0x9eac,	// (0x000294f3) ai5_sk_pane

0xf1dc,	// (0x0002e823) cell_ai5_widget_pane_ParamLimits

0xf1dc,	// (0x0002e823) cell_ai5_widget_pane

0x9f6f,	// (0x000295b6) aid_size_cell_widget_grid

0x9f85,	// (0x000295cc) bg_ai5_widget_pane_ParamLimits

0x9f85,	// (0x000295cc) bg_ai5_widget_pane

0x9ff9,	// (0x00029640) cell_ai5_widget_pane_g2

0xa009,	// (0x00029650) cell_ai5_widget_pane_g3

0xa020,	// (0x00029667) cell_ai5_widget_pane_g4

0xa02c,	// (0x00029673) cell_ai5_widget_pane_g5

0xa038,	// (0x0002967f) cell_ai5_widget_pane_g6

0xa044,	// (0x0002968b) cell_ai5_widget_pane_g7

0xa08c,	// (0x000296d3) cell_ai5_widget_pane_t1_ParamLimits

0xa08c,	// (0x000296d3) cell_ai5_widget_pane_t1

0xa0a9,	// (0x000296f0) cell_ai5_widget_pane_t2_ParamLimits

0xa0a9,	// (0x000296f0) cell_ai5_widget_pane_t2

0xa0c1,	// (0x00029708) cell_ai5_widget_pane_t3_ParamLimits

0xa0c1,	// (0x00029708) cell_ai5_widget_pane_t3

0xa0d9,	// (0x00029720) cell_ai5_widget_pane_t4_ParamLimits

0xa0d9,	// (0x00029720) cell_ai5_widget_pane_t4

0xa0f6,	// (0x0002973d) cell_ai5_widget_pane_t5_ParamLimits

0xa0f6,	// (0x0002973d) cell_ai5_widget_pane_t5

0xa115,	// (0x0002975c) cell_ai5_widget_pane_t6_ParamLimits

0xa115,	// (0x0002975c) cell_ai5_widget_pane_t6

0xa127,	// (0x0002976e) cell_ai5_widget_pane_t7_ParamLimits

0xa127,	// (0x0002976e) cell_ai5_widget_pane_t7

0xa140,	// (0x00029787) cell_ai5_widget_pane_t8_ParamLimits

0xa140,	// (0x00029787) cell_ai5_widget_pane_t8

0x0009,

0xfe27,	// (0x0002f46e) cell_ai5_widget_pane_t_ParamLimits

0xfe27,	// (0x0002f46e) cell_ai5_widget_pane_t

0xa194,	// (0x000297db) grid_ai5_widget_pane

0x3e70,	// (0x000234b7) highlight_cell_ai5_widget_pane_ParamLimits

0x3e70,	// (0x000234b7) highlight_cell_ai5_widget_pane

0xf246,	// (0x0002e88d) ai5_sk_left_pane

0xf250,	// (0x0002e897) ai5_sk_middle_pane

0xf25a,	// (0x0002e8a1) ai5_sk_right_pane

0xa1c9,	// (0x00029810) bg_ai5_widget_pane_g1_ParamLimits

0xa1c9,	// (0x00029810) bg_ai5_widget_pane_g1

0xa1d5,	// (0x0002981c) bg_ai5_widget_pane_g2_ParamLimits

0xa1d5,	// (0x0002981c) bg_ai5_widget_pane_g2

0xa1e1,	// (0x00029828) bg_ai5_widget_pane_g3_ParamLimits

0xa1e1,	// (0x00029828) bg_ai5_widget_pane_g3

0xa1ed,	// (0x00029834) bg_ai5_widget_pane_g4_ParamLimits

0xa1ed,	// (0x00029834) bg_ai5_widget_pane_g4

0xa1f9,	// (0x00029840) bg_ai5_widget_pane_g5_ParamLimits

0xa1f9,	// (0x00029840) bg_ai5_widget_pane_g5

0xa205,	// (0x0002984c) bg_ai5_widget_pane_g6_ParamLimits

0xa205,	// (0x0002984c) bg_ai5_widget_pane_g6

0xa211,	// (0x00029858) bg_ai5_widget_pane_g7_ParamLimits

0xa211,	// (0x00029858) bg_ai5_widget_pane_g7

0xa21d,	// (0x00029864) bg_ai5_widget_pane_g8_ParamLimits

0xa21d,	// (0x00029864) bg_ai5_widget_pane_g8

0xa229,	// (0x00029870) bg_ai5_widget_pane_g9_ParamLimits

0xa229,	// (0x00029870) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x0002f483) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0002f483) bg_ai5_widget_pane_g

0xa25b,	// (0x000298a2) cell_shortcut_ai5_widget_pane_ParamLimits

0xa25b,	// (0x000298a2) cell_shortcut_ai5_widget_pane

0x4b06,	// (0x0002414d) bg_cell_shortcut_ai5_widget_pane

0xa26c,	// (0x000298b3) cell_grid_ai5_widget_pane_g1

0x4b06,	// (0x0002414d) highlight_cell_shortcut_ai5_widget_pane

0x535e,	// (0x000249a5) ai5_sk_left_pane_g1

0xa275,	// (0x000298bc) ai5_sk_left_pane_g2

0xa27d,	// (0x000298c4) ai5_sk_left_pane_g3

0xa285,	// (0x000298cc) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0002f496) ai5_sk_left_pane_g

0xa28d,	// (0x000298d4) ai5_sk_left_pane_t1

0x5356,	// (0x0002499d) ai5_sk_right_pane_g1

0xa29b,	// (0x000298e2) ai5_sk_right_pane_g2

0xa2a3,	// (0x000298ea) ai5_sk_right_pane_g3

0xa2ab,	// (0x000298f2) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x0002f49f) ai5_sk_right_pane_g

0xa2b3,	// (0x000298fa) ai5_sk_right_pane_t1

0x5356,	// (0x0002499d) ai5_sk_middle_pane_g1

0x535e,	// (0x000249a5) ai5_sk_middle_pane_g2

0x5376,	// (0x000249bd) ai5_sk_middle_pane_g3

0xa2a3,	// (0x000298ea) ai5_sk_middle_pane_g4

0xa27d,	// (0x000298c4) ai5_sk_middle_pane_g5

0xa2c1,	// (0x00029908) ai5_sk_middle_pane_g6

0xf264,	// (0x0002e8ab) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0002f4a8) ai5_sk_middle_pane_g

0xd641,	// (0x0002cc88) aid_touch_area_size_lc0_ParamLimits

0xd641,	// (0x0002cc88) aid_touch_area_size_lc0

0x2842,	// (0x00021e89) cell_hwr_candidate_pane_t1_ParamLimits

0x4ea6,	// (0x000244ed) aid_touch_navi_pane

0xd8cd,	// (0x0002cf14) status_dt_navi_pane_ParamLimits

0xd8cd,	// (0x0002cf14) status_dt_navi_pane

0xd8e5,	// (0x0002cf2c) status_dt_sta_pane_ParamLimits

0xd8e5,	// (0x0002cf2c) status_dt_sta_pane

0xf26c,	// (0x0002e8b3) dt_sta_controll_pane

0xf279,	// (0x0002e8c0) dt_sta_indi_pane

0xf286,	// (0x0002e8cd) dt_sta_title_pane

0x388a,	// (0x00022ed1) bg_dt_sta_indi_pane_ParamLimits

0x388a,	// (0x00022ed1) bg_dt_sta_indi_pane

0xf298,	// (0x0002e8df) dt_sta_battery_pane

0xf2a0,	// (0x0002e8e7) dt_sta_indi_pane_g1

0xa313,	// (0x0002995a) dt_sta_indi_pane_g2

0xa31c,	// (0x00029963) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0002f4b7) dt_sta_indi_pane_g

0xa325,	// (0x0002996c) dt_sta_signal_pane

0x3e70,	// (0x000234b7) bg_dt_sta_title_pane_ParamLimits

0x3e70,	// (0x000234b7) bg_dt_sta_title_pane

0xa32e,	// (0x00029975) dt_sta_title_pane_g1

0xa336,	// (0x0002997d) dt_sta_title_pane_t1_ParamLimits

0xa336,	// (0x0002997d) dt_sta_title_pane_t1

0x350d,	// (0x00022b54) bg_dt_sta_control_pane

0xf2a9,	// (0x0002e8f0) dt_sta_controll_pane_g1

0xa354,	// (0x0002999b) bg_dt_sta_title_pane_g1

0xa35d,	// (0x000299a4) bg_dt_sta_title_pane_g2

0xa366,	// (0x000299ad) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x0002f4be) bg_dt_sta_title_pane_g

0x7974,	// (0x00026fbb) bg_dt_sta_indi_pane_g1

0xa36f,	// (0x000299b6) dt_sta_signal_pane_g1

0xa377,	// (0x000299be) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x0002f4c5) dt_sta_signal_pane_g

0xa37f,	// (0x000299c6) dt_sta_battery_pane_g1

0xa388,	// (0x000299cf) dt_sta_battery_pane_t1

0x7974,	// (0x00026fbb) bg_dt_sta_control_pane_g1

0x4605,	// (0x00023c4c) fep_china_uni_eep_pane

0x460d,	// (0x00023c54) fep_china_uni_entry_pane_ParamLimits

0x461d,	// (0x00023c64) popup_fep_china_uni_window_g1_ParamLimits

0x462d,	// (0x00023c74) popup_fep_china_uni_window_g2_ParamLimits

0x462d,	// (0x00023c74) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002ed64) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002ed64) popup_fep_china_uni_window_g

0xa397,	// (0x000299de) fep_china_uni_eep_pane_g1

0xa39f,	// (0x000299e6) fep_china_uni_eep_pane_t1

0x9e1b,	// (0x00029462) aid_touch_area_size_smil_player

0x4ff6,	// (0x0002463d) lc0_clock_pane

0x51dd,	// (0x00024824) status_pane_g5_ParamLimits

0x51dd,	// (0x00024824) status_pane_g5

0xc440,	// (0x0002ba87) popup_keymap_window

0x519b,	// (0x000247e2) status_icon_pane

0xa009,	// (0x00029650) cell_ai5_widget_pane_g3_ParamLimits

0xa020,	// (0x00029667) cell_ai5_widget_pane_g4_ParamLimits

0xa02c,	// (0x00029673) cell_ai5_widget_pane_g5_ParamLimits

0xa050,	// (0x00029697) cell_ai5_widget_pane_g8_ParamLimits

0xa050,	// (0x00029697) cell_ai5_widget_pane_g8

0xa064,	// (0x000296ab) cell_ai5_widget_pane_g9_ParamLimits

0xa064,	// (0x000296ab) cell_ai5_widget_pane_g9

0xa078,	// (0x000296bf) cell_ai5_widget_pane_g10_ParamLimits

0xa078,	// (0x000296bf) cell_ai5_widget_pane_g10

0xa3ae,	// (0x000299f5) status_icon_pane_g1

0x350d,	// (0x00022b54) bg_popup_sub_pane_cp13

0xa3b6,	// (0x000299fd) popup_keymap_window_t1

0xd5cf,	// (0x0002cc16) control_pane_g6_ParamLimits

0xd5cf,	// (0x0002cc16) control_pane_g6

0xd5dc,	// (0x0002cc23) control_pane_g7_ParamLimits

0xd5dc,	// (0x0002cc23) control_pane_g7

0xd5e9,	// (0x0002cc30) control_pane_g8_ParamLimits

0xd5e9,	// (0x0002cc30) control_pane_g8

0xf26c,	// (0x0002e8b3) dt_sta_controll_pane_ParamLimits

0xf279,	// (0x0002e8c0) dt_sta_indi_pane_ParamLimits

0xf286,	// (0x0002e8cd) dt_sta_title_pane_ParamLimits

0x3da8,	// (0x000233ef) aid_size_touch_scroll_bar_cale

0x13f9,	// (0x00020a40) popup_discreet_window_ParamLimits

0x13f9,	// (0x00020a40) popup_discreet_window

0xbf67,	// (0x0002b5ae) popup_sk_window

0x59d3,	// (0x0002501a) bg_popup_sub_pane_cp28_ParamLimits

0x59d3,	// (0x0002501a) bg_popup_sub_pane_cp28

0xa3c4,	// (0x00029a0b) popup_discreet_window_g1_ParamLimits

0xa3c4,	// (0x00029a0b) popup_discreet_window_g1

0xa3e4,	// (0x00029a2b) popup_discreet_window_t1_ParamLimits

0xa3e4,	// (0x00029a2b) popup_discreet_window_t1

0xa402,	// (0x00029a49) popup_discreet_window_t2_ParamLimits

0xa402,	// (0x00029a49) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x0002f4ca) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x0002f4ca) popup_discreet_window_t

0x319a,	// (0x000227e1) popup_sk_window_g1

0x31a4,	// (0x000227eb) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x0002f4d1) popup_sk_window_g

0x31ae,	// (0x000227f5) popup_sk_window_t1

0x31bc,	// (0x00022803) popup_sk_window_t1_copy1

0x9ff9,	// (0x00029640) cell_ai5_widget_pane_g2_ParamLimits

0xa152,	// (0x00029799) cell_ai5_widget_pane_t9_ParamLimits

0xa152,	// (0x00029799) cell_ai5_widget_pane_t9

0x350d,	// (0x00022b54) main_fep_fshwr2_pane

0xce32,	// (0x0002c479) aid_fshwr2_btn_pane

0xce43,	// (0x0002c48a) aid_fshwr2_syb_pane

0xce54,	// (0x0002c49b) aid_fshwr2_txt_pane

0xce60,	// (0x0002c4a7) fshwr2_func_candi_pane

0xce7f,	// (0x0002c4c6) fshwr2_hwr_syb_pane

0xce9a,	// (0x0002c4e1) fshwr2_icf_pane

0x350d,	// (0x00022b54) fshwr2_icf_bg_pane

0x323c,	// (0x00022883) fshwr2_icf_pane_t1_ParamLimits

0x323c,	// (0x00022883) fshwr2_icf_pane_t1

0x44f3,	// (0x00023b3a) fshwr2_func_candi_pane_g1

0xf2b2,	// (0x0002e8f9) fshwr2_func_candi_row_pane_ParamLimits

0xf2b2,	// (0x0002e8f9) fshwr2_func_candi_row_pane

0xcec6,	// (0x0002c50d) cell_fshwr2_syb_pane_ParamLimits

0xcec6,	// (0x0002c50d) cell_fshwr2_syb_pane

0x7bf2,	// (0x00027239) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) fshwr2_hwr_syb_pane_g1

0x350d,	// (0x00022b54) bg_popup_call_pane_cp01

0xcedc,	// (0x0002c523) fshwr2_func_candi_cell_pane_ParamLimits

0xcedc,	// (0x0002c523) fshwr2_func_candi_cell_pane

0xf2d5,	// (0x0002e91c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2d5,	// (0x0002e91c) fshwr2_func_candi_cell_bg_pane

0xcf27,	// (0x0002c56e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf27,	// (0x0002c56e) fshwr2_func_candi_cell_pane_g1

0xcf5e,	// (0x0002c5a5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf5e,	// (0x0002c5a5) fshwr2_func_candi_cell_pane_t1

0x350d,	// (0x00022b54) bg_button_pane_cp08

0xa470,	// (0x00029ab7) cell_fshwr2_syb_bg_pane

0xcf79,	// (0x0002c5c0) cell_fshwr2_syb_bg_pane_g1

0xcf81,	// (0x0002c5c8) cell_fshwr2_syb_bg_pane_t1

0x3e70,	// (0x000234b7) main_tmo_pane

0xdbef,	// (0x0002d236) uni_indicator_pane_g1_ParamLimits

0xdc05,	// (0x0002d24c) uni_indicator_pane_g2_ParamLimits

0xdc1b,	// (0x0002d262) uni_indicator_pane_g3_ParamLimits

0x6522,	// (0x00025b69) uni_indicator_pane_g4_ParamLimits

0x6522,	// (0x00025b69) uni_indicator_pane_g4

0x6536,	// (0x00025b7d) uni_indicator_pane_g5_ParamLimits

0x6536,	// (0x00025b7d) uni_indicator_pane_g5

0x6536,	// (0x00025b7d) uni_indicator_pane_g6_ParamLimits

0x6536,	// (0x00025b7d) uni_indicator_pane_g6

0xf915,	// (0x0002ef5c) uni_indicator_pane_g_ParamLimits

0xe667,	// (0x0002dcae) popup_tmo_note_window_ParamLimits

0xe667,	// (0x0002dcae) popup_tmo_note_window

0x3e70,	// (0x000234b7) fshwr2_bg_pane

0xcf4f,	// (0x0002c596) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf4f,	// (0x0002c596) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x0002f4d6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x0002f4d6) fshwr2_func_candi_cell_pane_g

0x7974,	// (0x00026fbb) bg_popup_window_pane_cp01

0x3305,	// (0x0002294c) bg_popup_window_pane_g1_cp01

0xa478,	// (0x00029abf) bg_popup_window_pane_cp22_ParamLimits

0xa478,	// (0x00029abf) bg_popup_window_pane_cp22

0xa486,	// (0x00029acd) listscroll_tmo_link_pane_ParamLimits

0xa486,	// (0x00029acd) listscroll_tmo_link_pane

0xa4c6,	// (0x00029b0d) popup_tmo_note_window_g1_ParamLimits

0xa4c6,	// (0x00029b0d) popup_tmo_note_window_g1

0xa4d3,	// (0x00029b1a) tmo_note_info_pane_ParamLimits

0xa4d3,	// (0x00029b1a) tmo_note_info_pane

0xf2e1,	// (0x0002e928) list_tmo_note_info_pane_g1_ParamLimits

0xf2e1,	// (0x0002e928) list_tmo_note_info_pane_g1

0xa504,	// (0x00029b4b) list_tmo_note_info_pane_g2_ParamLimits

0xa504,	// (0x00029b4b) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x0002f4db) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x0002f4db) list_tmo_note_info_pane_g

0xa520,	// (0x00029b67) list_tmo_note_info_text_pane_ParamLimits

0xa520,	// (0x00029b67) list_tmo_note_info_text_pane

0xa5a1,	// (0x00029be8) list_tmo_link_pane

0xa5ae,	// (0x00029bf5) scroll_pane_cp20

0xa5bb,	// (0x00029c02) list_single_tmo_link_pane_ParamLimits

0xa5bb,	// (0x00029c02) list_single_tmo_link_pane

0xa5cb,	// (0x00029c12) list_single_tmo_link_pane_t1

0xa5d9,	// (0x00029c20) list_tmo_note_info_text_pane_t1_ParamLimits

0xa5d9,	// (0x00029c20) list_tmo_note_info_text_pane_t1

0xd273,	// (0x0002c8ba) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd273,	// (0x0002c8ba) aid_size_touch_scroll_bar_cp01

0xba2b,	// (0x0002b072) aid_size_touch_slider_marker

0xbf57,	// (0x0002b59e) popup_settings_window_ParamLimits

0xbf57,	// (0x0002b59e) popup_settings_window

0x0810,	// (0x0001fe57) popup_candi_list_indi_window

0x4ea6,	// (0x000244ed) aid_touch_navi_pane_ParamLimits

0x29ad,	// (0x00021ff4) rs_clock_indi_pane

0x29b6,	// (0x00021ffd) sctrl_sk_bottom_pane_ParamLimits

0x29c7,	// (0x0002200e) sctrl_sk_top_pane_ParamLimits

0x2aae,	// (0x000220f5) popup_fep_tooltip_window

0x9f6f,	// (0x000295b6) aid_size_cell_widget_grid_ParamLimits

0x9fe4,	// (0x0002962b) cell_ai5_widget_pane_g1_ParamLimits

0x9fe4,	// (0x0002962b) cell_ai5_widget_pane_g1

0xa038,	// (0x0002967f) cell_ai5_widget_pane_g6_ParamLimits

0xa044,	// (0x0002968b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe12,	// (0x0002f459) cell_ai5_widget_pane_g_ParamLimits

0xfe12,	// (0x0002f459) cell_ai5_widget_pane_g

0xa176,	// (0x000297bd) cell_ai5_widget_pane_t10_ParamLimits

0xa176,	// (0x000297bd) cell_ai5_widget_pane_t10

0xa194,	// (0x000297db) grid_ai5_widget_pane_ParamLimits

0xa235,	// (0x0002987c) cell_contacts_ai5_widget_pane_ParamLimits

0xa235,	// (0x0002987c) cell_contacts_ai5_widget_pane

0xa417,	// (0x00029a5e) popup_discreet_window_t3_ParamLimits

0xa417,	// (0x00029a5e) popup_discreet_window_t3

0xceb2,	// (0x0002c4f9) popup_fshwr2_char_preview_window_ParamLimits

0xceb2,	// (0x0002c4f9) popup_fshwr2_char_preview_window

0xf2f8,	// (0x0002e93f) tmo_note_info_pane_t1

0xf30d,	// (0x0002e954) tmo_note_info_pane_t2

0xf324,	// (0x0002e96b) tmo_note_info_pane_t3

0xa57d,	// (0x00029bc4) tmo_note_info_pane_t4

0xa58f,	// (0x00029bd6) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x0002f4e0) tmo_note_info_pane_t

0xa5a1,	// (0x00029be8) list_tmo_link_pane_ParamLimits

0xa5ae,	// (0x00029bf5) scroll_pane_cp20_ParamLimits

0x350d,	// (0x00022b54) bg_popup_fep_char_preview_window_cp01

0xa5f2,	// (0x00029c39) popup_fshwr2_char_preview_window_t1

0xa600,	// (0x00029c47) popup_candi_list_indi_window_g1

0xa609,	// (0x00029c50) bg_cell_contacts_ai5_widget_pane

0xa615,	// (0x00029c5c) cell_contacts_ai5_widget_pane_g1

0x8054,	// (0x0002769b) cell_contacts_ai5_widget_pane_g2

0xa62a,	// (0x00029c71) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x0002f4eb) cell_contacts_ai5_widget_pane_g

0xa636,	// (0x00029c7d) cell_contacts_ai5_widget_pane_t1

0x3e70,	// (0x000234b7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf39e,	// (0x0002e9e5) settings_container_pane

0x4b06,	// (0x0002414d) listscroll_set_pane_copy1

0x705d,	// (0x000266a4) scroll_pane_cp121_copy1

0xa6b9,	// (0x00029d00) set_content_pane_copy1

0xf3aa,	// (0x0002e9f1) aid_height_set_list_copy1_ParamLimits

0xf3aa,	// (0x0002e9f1) aid_height_set_list_copy1

0x672e,	// (0x00025d75) aid_size_parent_copy1_ParamLimits

0x672e,	// (0x00025d75) aid_size_parent_copy1

0xf3b6,	// (0x0002e9fd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3b6,	// (0x0002e9fd) button_value_adjust_pane_cp6_copy1

0x4e44,	// (0x0002448b) list_highlight_pane_cp2_copy1_ParamLimits

0x4e44,	// (0x0002448b) list_highlight_pane_cp2_copy1

0xf3ca,	// (0x0002ea11) list_set_pane_copy1_ParamLimits

0xf3ca,	// (0x0002ea11) list_set_pane_copy1

0xf339,	// (0x0002e980) main_pane_set_t1_copy1_ParamLimits

0xf339,	// (0x0002e980) main_pane_set_t1_copy1

0xf373,	// (0x0002e9ba) main_pane_set_t2_copy1_ParamLimits

0xf373,	// (0x0002e9ba) main_pane_set_t2_copy1

0xf477,	// (0x0002eabe) main_pane_set_t3_copy1

0xf485,	// (0x0002eacc) main_pane_set_t4_copy1

0xf392,	// (0x0002e9d9) set_content_pane_g1_copy1_ParamLimits

0xf392,	// (0x0002e9d9) set_content_pane_g1_copy1

0xf493,	// (0x0002eada) setting_code_pane_copy1

0xa7b2,	// (0x00029df9) setting_slider_graphic_pane_copy1

0xa7b2,	// (0x00029df9) setting_slider_pane_copy1

0xa7b2,	// (0x00029df9) setting_text_pane_copy1

0xa7b2,	// (0x00029df9) setting_volume_pane_copy1

0xf493,	// (0x0002eada) settings_code_pane_cp2_copy1

0xf49b,	// (0x0002eae2) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0002eae2) settings_code_pane_cp_copy1

0xcf90,	// (0x0002c5d7) volume_set_pane_copy1

0xf4af,	// (0x0002eaf6) volume_set_pane_g10_copy1

0xf4b7,	// (0x0002eafe) volume_set_pane_g1_copy1

0xf4bf,	// (0x0002eb06) volume_set_pane_g2_copy1

0xf4c7,	// (0x0002eb0e) volume_set_pane_g3_copy1

0xf4cf,	// (0x0002eb16) volume_set_pane_g4_copy1

0xf4d7,	// (0x0002eb1e) volume_set_pane_g5_copy1

0xf4df,	// (0x0002eb26) volume_set_pane_g6_copy1

0xf4e7,	// (0x0002eb2e) volume_set_pane_g7_copy1

0xf4ef,	// (0x0002eb36) volume_set_pane_g8_copy1

0xf4f7,	// (0x0002eb3e) volume_set_pane_g9_copy1

0x3601,	// (0x00022c48) bg_set_opt_pane_cp_copy1_ParamLimits

0x3601,	// (0x00022c48) bg_set_opt_pane_cp_copy1

0x3316,	// (0x0002295d) setting_slider_pane_t1_copy1_ParamLimits

0x3316,	// (0x0002295d) setting_slider_pane_t1_copy1

0xcf98,	// (0x0002c5df) setting_slider_pane_t2_copy1_ParamLimits

0xcf98,	// (0x0002c5df) setting_slider_pane_t2_copy1

0xcfb2,	// (0x0002c5f9) setting_slider_pane_t3_copy1_ParamLimits

0xcfb2,	// (0x0002c5f9) setting_slider_pane_t3_copy1

0xcfca,	// (0x0002c611) slider_set_pane_copy1_ParamLimits

0xcfca,	// (0x0002c611) slider_set_pane_copy1

0x3ecb,	// (0x00023512) set_opt_bg_pane_g1_copy2

0x3ed3,	// (0x0002351a) set_opt_bg_pane_g2_copy2

0xa81e,	// (0x00029e65) set_opt_bg_pane_g3_copy2

0x3ee3,	// (0x0002352a) set_opt_bg_pane_g4_copy2

0x3eeb,	// (0x00023532) set_opt_bg_pane_g5_copy2

0x3ef3,	// (0x0002353a) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0002eb46) set_opt_bg_pane_g7_copy2

0xa830,	// (0x00029e77) set_opt_bg_pane_g8_copy2

0xa83a,	// (0x00029e81) set_opt_bg_pane_g9_copy2

0x337c,	// (0x000229c3) aid_size_touch_slider_mark_copy1_ParamLimits

0x337c,	// (0x000229c3) aid_size_touch_slider_mark_copy1

0xa844,	// (0x00029e8b) slider_set_pane_g1_copy1

0x3390,	// (0x000229d7) slider_set_pane_g2_copy1

0x2490,	// (0x00021ad7) slider_set_pane_g3_copy1_ParamLimits

0x2490,	// (0x00021ad7) slider_set_pane_g3_copy1

0x24a4,	// (0x00021aeb) slider_set_pane_g4_copy1_ParamLimits

0x24a4,	// (0x00021aeb) slider_set_pane_g4_copy1

0x24bc,	// (0x00021b03) slider_set_pane_g5_copy1_ParamLimits

0x24bc,	// (0x00021b03) slider_set_pane_g5_copy1

0x2490,	// (0x00021ad7) slider_set_pane_g6_copy1_ParamLimits

0x2490,	// (0x00021ad7) slider_set_pane_g6_copy1

0xcfe0,	// (0x0002c627) slider_set_pane_g7_copy1_ParamLimits

0xcfe0,	// (0x0002c627) slider_set_pane_g7_copy1

0x3521,	// (0x00022b68) bg_set_opt_pane_cp2_copy1

0xa84d,	// (0x00029e94) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0002eb4e) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0002eb5e) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0002eb6e) slider_set_pane_cp_copy1

0xa886,	// (0x00029ecd) input_focus_pane_cp1_copy1

0xa88f,	// (0x00029ed6) list_set_text_pane_copy1

0xa897,	// (0x00029ede) setting_text_pane_g1_copy1

0x0047,	// (0x0001f68e) set_text_pane_t1_copy1

0xa886,	// (0x00029ecd) input_focus_pane_cp2_copy1

0xa897,	// (0x00029ede) setting_code_pane_g1_copy1

0xf52f,	// (0x0002eb76) setting_code_pane_t1_copy1

0x6e87,	// (0x000264ce) list_set_graphic_pane_copy1

0x3521,	// (0x00022b68) bg_set_opt_pane_cp4_copy1

0xd44a,	// (0x0002ca91) list_set_graphic_pane_g1_copy1_ParamLimits

0xd44a,	// (0x0002ca91) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0002eb84) list_set_graphic_pane_g2_copy1

0xd462,	// (0x0002caa9) list_set_graphic_pane_t1_copy1_ParamLimits

0xd462,	// (0x0002caa9) list_set_graphic_pane_t1_copy1

0x7974,	// (0x00026fbb) rs_clock_indi_pane_g1

0xa8c8,	// (0x00029f0f) rs_clock_indi_pane_t1

0xa8d6,	// (0x00029f1d) rs_indi_pane

0xa8de,	// (0x00029f25) rs_indi_pane_g1

0xa8e7,	// (0x00029f2e) rs_indi_pane_g2

0xa8f0,	// (0x00029f37) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x0002f4f2) rs_indi_pane_g

0x4b06,	// (0x0002414d) bg_popup_preview_window_pane_cp03

0xa8f9,	// (0x00029f40) popup_fep_tooltip_window_t1

0x85f0,	// (0x00027c37) popup_note2_window_g2_ParamLimits

0x85f0,	// (0x00027c37) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002f28b) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002f28b) popup_note2_window_g

0x8aeb,	// (0x00028132) bg_popup_sub_pane_cp11_ParamLimits

0x8af8,	// (0x0002813f) cell_ai3_links_pane_g1_ParamLimits

0x8b0f,	// (0x00028156) cell_ai3_links_pane_t1

0x0047,	// (0x0001f68e) set_text_pane_t1_copy1_ParamLimits

0x4a17,	// (0x0002405e) cell_graphic_popup_pane_cp2_ParamLimits

0x4a17,	// (0x0002405e) cell_graphic_popup_pane_cp2

0xa907,	// (0x00029f4e) cell_graphic_popup_pane_g1_cp2

0x3bbb,	// (0x00023202) cell_graphic_popup_pane_g2_cp2

0xa90f,	// (0x00029f56) cell_graphic_popup_pane_g3_cp2

0xa917,	// (0x00029f5e) cell_graphic_popup_pane_t2_cp2

0x3bcc,	// (0x00023213) grid_highlight_pane_cp3_cp2

0x4210,	// (0x00023857) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3e70,	// (0x000234b7) main_tmo_pane_ParamLimits

0xe65b,	// (0x0002dca2) popup_tmo_big_image_note_window

0x9fd3,	// (0x0002961a) cell_ai5_widget_list_pane

0x9fdb,	// (0x00029622) cell_ai5_widget_lrg_icon_pane

0xf2f8,	// (0x0002e93f) tmo_note_info_pane_t1_ParamLimits

0xf30d,	// (0x0002e954) tmo_note_info_pane_t2_ParamLimits

0xf324,	// (0x0002e96b) tmo_note_info_pane_t3_ParamLimits

0xa57d,	// (0x00029bc4) tmo_note_info_pane_t4_ParamLimits

0xa58f,	// (0x00029bd6) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x0002f4e0) tmo_note_info_pane_t_ParamLimits

0xf39e,	// (0x0002e9e5) settings_container_pane_ParamLimits

0xa87e,	// (0x00029ec5) indicator_popup_pane_cp5

0xa87e,	// (0x00029ec5) indicator_popup_pane_cp6

0x6e87,	// (0x000264ce) list_set_graphic_pane_copy1_ParamLimits

0x350d,	// (0x00022b54) bg_popup_window_pane_cp23

0xa925,	// (0x00029f6c) popup_tmo_big_image_note_window_g1

0xa92f,	// (0x00029f76) popup_tmo_big_image_note_window_t1

0xa93f,	// (0x00029f86) popup_tmo_big_image_note_window_t2

0xa94f,	// (0x00029f96) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x0002f4f9) popup_tmo_big_image_note_window_t

0x7974,	// (0x00026fbb) cell_ai5_widget_lrg_icon_pane_g1

0xa95f,	// (0x00029fa6) cell_ai5_widget_lrg_icon_pane_t1

0xa96d,	// (0x00029fb4) cell_ai5_widget_list_row_pane_ParamLimits

0xa96d,	// (0x00029fb4) cell_ai5_widget_list_row_pane

0xa984,	// (0x00029fcb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa984,	// (0x00029fcb) cell_ai5_widget_list_row_pane_g1

0xa991,	// (0x00029fd8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa991,	// (0x00029fd8) cell_ai5_widget_list_row_pane_t1

0xa9c2,	// (0x0002a009) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa9c2,	// (0x0002a009) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x0002f500) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x0002f500) cell_ai5_widget_list_row_pane_t

0x350d,	// (0x00022b54) main_fep_vtchi_ss_pane

0xaa06,	// (0x0002a04d) popup_fep_char_pre_window

0xaa0e,	// (0x0002a055) popup_fep_ituss_window

0xaa2f,	// (0x0002a076) popup_fep_vkbss_window

0xaa4e,	// (0x0002a095) grid_vkbss_keypad_pane_ParamLimits

0xaa4e,	// (0x0002a095) grid_vkbss_keypad_pane

0xaa5e,	// (0x0002a0a5) ituss_keypad_pane

0x33ba,	// (0x00022a01) aid_vkbss_key_offset_ParamLimits

0x33ba,	// (0x00022a01) aid_vkbss_key_offset

0x33c6,	// (0x00022a0d) cell_vkbss_key_pane_ParamLimits

0x33c6,	// (0x00022a0d) cell_vkbss_key_pane

0xaa6d,	// (0x0002a0b4) bg_cell_vkbss_key_g1_ParamLimits

0xaa6d,	// (0x0002a0b4) bg_cell_vkbss_key_g1

0xaa79,	// (0x0002a0c0) cell_vkbss_key_3p_pane_ParamLimits

0xaa79,	// (0x0002a0c0) cell_vkbss_key_3p_pane

0xaa93,	// (0x0002a0da) cell_vkbss_key_g1_ParamLimits

0xaa93,	// (0x0002a0da) cell_vkbss_key_g1

0xaaad,	// (0x0002a0f4) cell_vkbss_key_t1_ParamLimits

0xaaad,	// (0x0002a0f4) cell_vkbss_key_t1

0x33dc,	// (0x00022a23) cell_ituss_key_pane_ParamLimits

0x33dc,	// (0x00022a23) cell_ituss_key_pane

0xaad8,	// (0x0002a11f) bg_cell_ituss_key_g1_ParamLimits

0xaad8,	// (0x0002a11f) bg_cell_ituss_key_g1

0xaae4,	// (0x0002a12b) cell_ituss_key_pane_g1_ParamLimits

0xaae4,	// (0x0002a12b) cell_ituss_key_pane_g1

0x33ed,	// (0x00022a34) cell_ituss_key_pane_g2_ParamLimits

0x33ed,	// (0x00022a34) cell_ituss_key_pane_g2

0x0002,

0xfec0,	// (0x0002f507) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x0002f507) cell_ituss_key_pane_g

0x3419,	// (0x00022a60) cell_ituss_key_t1_ParamLimits

0x3419,	// (0x00022a60) cell_ituss_key_t1

0x3453,	// (0x00022a9a) cell_ituss_key_t2_ParamLimits

0x3453,	// (0x00022a9a) cell_ituss_key_t2

0x3484,	// (0x00022acb) cell_ituss_key_t3_ParamLimits

0x3484,	// (0x00022acb) cell_ituss_key_t3

0x3453,	// (0x00022a9a) cell_ituss_key_t4_ParamLimits

0x3453,	// (0x00022a9a) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0002f50e) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0002f50e) cell_ituss_key_t

0xab10,	// (0x0002a157) cell_vkbss_key_3p_pane_g1

0xab18,	// (0x0002a15f) cell_vkbss_key_3p_pane_g2

0xab20,	// (0x0002a167) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0002f519) cell_vkbss_key_3p_pane_g

0x350d,	// (0x00022b54) bg_popup_fep_char_preview_window_cp02

0x34c7,	// (0x00022b0e) popup_fep_char_pre_window_t1

0xf23c,	// (0x0002e883) main_ai5_sk_pane

0xa609,	// (0x00029c50) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa615,	// (0x00029c5c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8054,	// (0x0002769b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa62a,	// (0x00029c71) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x0002f4eb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa636,	// (0x00029c7d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3e70,	// (0x000234b7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002eb8c) main_ai5_sk_pane_g1

0x5800,	// (0x00024e47) popup_query_code_window_g1

0xaa24,	// (0x0002a06b) popup_fep_vkb_icf_pane

0xaa38,	// (0x0002a07f) popup_fep_vtchi_icf_pane

0xab31,	// (0x0002a178) bg_icf_pane

0xab3d,	// (0x0002a184) list_vkb_icf_pane

0xab4c,	// (0x0002a193) bg_icf_pane_cp01

0xab5f,	// (0x0002a1a6) vtchi_icf_list_pane

0xab6f,	// (0x0002a1b6) list_vkb_icf_pane_t1_ParamLimits

0xab6f,	// (0x0002a1b6) list_vkb_icf_pane_t1

0xab85,	// (0x0002a1cc) vtchi_icf_list_pane_t1_ParamLimits

0xab85,	// (0x0002a1cc) vtchi_icf_list_pane_t1

0xaa0e,	// (0x0002a055) popup_fep_ituss_window_ParamLimits

0xaa38,	// (0x0002a07f) popup_fep_vtchi_icf_pane_ParamLimits

0xaa5e,	// (0x0002a0a5) ituss_keypad_pane_ParamLimits

0x33ae,	// (0x000229f5) ituss_sks_pane

0xab31,	// (0x0002a178) bg_icf_pane_ParamLimits

0xa9ea,	// (0x0002a031) icf_edit_indi_pane_ParamLimits

0xa9ea,	// (0x0002a031) icf_edit_indi_pane

0xab3d,	// (0x0002a184) list_vkb_icf_pane_ParamLimits

0xab4c,	// (0x0002a193) bg_icf_pane_cp01_ParamLimits

0xa9f9,	// (0x0002a040) icf_edit_indi_pane_cp01_ParamLimits

0xa9f9,	// (0x0002a040) icf_edit_indi_pane_cp01

0xab67,	// (0x0002a1ae) vtchi_query_pane

0x7bf2,	// (0x00027239) icf_edit_indi_pane_g1_ParamLimits

0x7bf2,	// (0x00027239) icf_edit_indi_pane_g1

0xabf6,	// (0x0002a23d) icf_edit_indi_pane_g2_ParamLimits

0xabf6,	// (0x0002a23d) icf_edit_indi_pane_g2

0x0001,

0xfeea,	// (0x0002f531) icf_edit_indi_pane_g_ParamLimits

0xfeea,	// (0x0002f531) icf_edit_indi_pane_g

0xac05,	// (0x0002a24c) icf_edit_indi_pane_t1

0xab9f,	// (0x0002a1e6) bg_input_focus_pane_cp042

0x3d9f,	// (0x000233e6) vtchi_button_pane

0xaba8,	// (0x0002a1ef) vtchi_query_pane_t1

0xabb6,	// (0x0002a1fd) vtchi_query_pane_t2

0xabc4,	// (0x0002a20b) vtchi_query_pane_t3

0x0002,

0xfed9,	// (0x0002f520) vtchi_query_pane_t

0x350d,	// (0x00022b54) bg_button_pane_cp13

0xabd2,	// (0x0002a219) vtchi_button_pane_g1

0x34d6,	// (0x00022b1d) ituss_sks_pane_g1

0x34e1,	// (0x00022b28) ituss_sks_pane_g2

0x0001,

0xfee0,	// (0x0002f527) ituss_sks_pane_g

0xabda,	// (0x0002a221) ituss_sks_pane_t1

0xabe8,	// (0x0002a22f) ituss_sks_pane_t2

0x0001,

0xfee5,	// (0x0002f52c) ituss_sks_pane_t

0x73d7,	// (0x00026a1e) indicator_nsta_pane_cp_g1

0x73e0,	// (0x00026a27) indicator_nsta_pane_cp_g2

0x73e8,	// (0x00026a2f) indicator_nsta_pane_cp_g3

0x73f0,	// (0x00026a37) indicator_nsta_pane_cp_g4

0x73f8,	// (0x00026a3f) indicator_nsta_pane_cp_g5

0x73f8,	// (0x00026a3f) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002f0d5) indicator_nsta_pane_cp_g

0xf04e,	// (0x0002e695) cell_graphic2_pane_t2_ParamLimits

0xf04e,	// (0x0002e695) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x0002f3e2) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x0002f3e2) cell_graphic2_pane_t

0xf084,	// (0x0002e6cb) cell_graphic2_control_pane_t1

0xd41e,	// (0x0002ca65) signal_pane_g3_ParamLimits

0xd41e,	// (0x0002ca65) signal_pane_g3

0xd432,	// (0x0002ca79) signal_pane_g4_ParamLimits

0xd432,	// (0x0002ca79) signal_pane_g4

0xa9d4,	// (0x0002a01b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa9d4,	// (0x0002a01b) cell_ai5_widget_list_row_pane_t3

0xaafe,	// (0x0002a145) cell_ituss_key_pane_t1_ParamLimits

0xaafe,	// (0x0002a145) cell_ituss_key_pane_t1

0x5453,	// (0x00024a9a) form_field_data_wide_pane_vc_t2_ParamLimits

0x5453,	// (0x00024a9a) form_field_data_wide_pane_vc_t2

0x5467,	// (0x00024aae) form_field_data_wide_pane_vc_t3_ParamLimits

0x5467,	// (0x00024aae) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002ee44) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002ee44) form_field_data_wide_pane_vc_t

0x709f,	// (0x000266e6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x709f,	// (0x000266e6) form_field_slider_wide_pane_vc_t3

0x717d,	// (0x000267c4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x717d,	// (0x000267c4) form_field_popup_wide_pane_vc_t2

0x7194,	// (0x000267db) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7194,	// (0x000267db) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002f0c4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002f0c4) form_field_popup_wide_pane_vc_t

0xce32,	// (0x0002c479) aid_fshwr2_btn_pane_ParamLimits

0xce43,	// (0x0002c48a) aid_fshwr2_syb_pane_ParamLimits

0xce54,	// (0x0002c49b) aid_fshwr2_txt_pane_ParamLimits

0x3e70,	// (0x000234b7) fshwr2_bg_pane_ParamLimits

0xce60,	// (0x0002c4a7) fshwr2_func_candi_pane_ParamLimits

0xce7f,	// (0x0002c4c6) fshwr2_hwr_syb_pane_ParamLimits

0xce9a,	// (0x0002c4e1) fshwr2_icf_pane_ParamLimits

0x0d4b,	// (0x00020392) list_double_graphic_pane_vc_g4_ParamLimits

0x0d4b,	// (0x00020392) list_double_graphic_pane_vc_g4

0x340d,	// (0x00022a54) cell_ituss_key_pane_g3_ParamLimits

0x340d,	// (0x00022a54) cell_ituss_key_pane_g3

0x34b5,	// (0x00022afc) cell_ituss_key_t5_ParamLimits

0x34b5,	// (0x00022afc) cell_ituss_key_t5
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

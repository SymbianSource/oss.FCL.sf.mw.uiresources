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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001e487 };

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
0x8600,	// (0x00026a87) Screen

0x860c,	// (0x00026a93) application_window_ParamLimits

0x860c,	// (0x00026a93) application_window

0x4210,	// (0x00022697) screen_g1

0x8668,	// (0x00026aef) area_bottom_pane_ParamLimits

0x8668,	// (0x00026aef) area_bottom_pane

0x8728,	// (0x00026baf) area_top_pane_ParamLimits

0x8728,	// (0x00026baf) area_top_pane

0x87c6,	// (0x00026c4d) main_pane_ParamLimits

0x87c6,	// (0x00026c4d) main_pane

0x421a,	// (0x000226a1) misc_graphics

0x9ad0,	// (0x00027f57) battery_pane_ParamLimits

0x9ad0,	// (0x00027f57) battery_pane

0x5fbe,	// (0x00024445) bg_status_flat_pane_g8

0x5fc6,	// (0x0002444d) bg_status_flat_pane_g9

0x56f3,	// (0x00023b7a) context_pane_ParamLimits

0x56f3,	// (0x00023b7a) context_pane

0x9c04,	// (0x0002808b) navi_pane_ParamLimits

0x9c04,	// (0x0002808b) navi_pane

0x9c70,	// (0x000280f7) signal_pane_ParamLimits

0x9c70,	// (0x000280f7) signal_pane

0x0008,

0xf880,	// (0x0002dd07) bg_status_flat_pane_g

0x9cd5,	// (0x0002815c) status_pane_g1_ParamLimits

0x9cd5,	// (0x0002815c) status_pane_g1

0x9ce9,	// (0x00028170) status_pane_g2_ParamLimits

0x9ce9,	// (0x00028170) status_pane_g2

0x5758,	// (0x00023bdf) status_pane_g3_ParamLimits

0x5758,	// (0x00023bdf) status_pane_g3

0x0004,

0xf7b3,	// (0x0002dc3a) status_pane_g_ParamLimits

0xf7b3,	// (0x0002dc3a) status_pane_g

0x9cf5,	// (0x0002817c) title_pane_ParamLimits

0x9cf5,	// (0x0002817c) title_pane

0x9d32,	// (0x000281b9) uni_indicator_pane_ParamLimits

0x9d32,	// (0x000281b9) uni_indicator_pane

0x551e,	// (0x000239a5) bg_list_pane_ParamLimits

0x551e,	// (0x000239a5) bg_list_pane

0xe604,	// (0x0002ca8b) find_pane

0x95e8,	// (0x00027a6f) listscroll_app_pane_ParamLimits

0x95e8,	// (0x00027a6f) listscroll_app_pane

0x553e,	// (0x000239c5) listscroll_form_pane

0xe60c,	// (0x0002ca93) listscroll_gen_pane_ParamLimits

0xe60c,	// (0x0002ca93) listscroll_gen_pane

0x553e,	// (0x000239c5) listscroll_set_pane

0x8d98,	// (0x0002721f) main_idle_act_pane

0x5304,	// (0x0002378b) main_idle_trad_pane

0x5304,	// (0x0002378b) main_list_empty_pane

0x4a14,	// (0x00022e9b) main_midp_pane

0x5558,	// (0x000239df) main_pane_g1_ParamLimits

0x5558,	// (0x000239df) main_pane_g1

0x95f4,	// (0x00027a7b) popup_ai_message_window_ParamLimits

0x95f4,	// (0x00027a7b) popup_ai_message_window

0x9672,	// (0x00027af9) popup_fep_china_uni_window_ParamLimits

0x9672,	// (0x00027af9) popup_fep_china_uni_window

0x558a,	// (0x00023a11) popup_fep_japan_candidate_window_ParamLimits

0x558a,	// (0x00023a11) popup_fep_japan_candidate_window

0x55a8,	// (0x00023a2f) popup_fep_japan_predictive_window_ParamLimits

0x55a8,	// (0x00023a2f) popup_fep_japan_predictive_window

0x96cc,	// (0x00027b53) popup_find_window

0x96d9,	// (0x00027b60) popup_grid_graphic_window_ParamLimits

0x96d9,	// (0x00027b60) popup_grid_graphic_window

0x55d8,	// (0x00023a5f) popup_large_graphic_colour_window

0x96ff,	// (0x00027b86) popup_menu_window_ParamLimits

0x96ff,	// (0x00027b86) popup_menu_window

0x98b9,	// (0x00027d40) popup_note_image_window

0x98a5,	// (0x00027d2c) popup_note_wait_window_ParamLimits

0x98a5,	// (0x00027d2c) popup_note_wait_window

0x98a5,	// (0x00027d2c) popup_note_window_ParamLimits

0x98a5,	// (0x00027d2c) popup_note_window

0x990f,	// (0x00027d96) popup_query_code_window_ParamLimits

0x990f,	// (0x00027d96) popup_query_code_window

0x560c,	// (0x00023a93) popup_query_data_code_window_ParamLimits

0x560c,	// (0x00023a93) popup_query_data_code_window

0x9923,	// (0x00027daa) popup_query_data_window_ParamLimits

0x9923,	// (0x00027daa) popup_query_data_window

0x993b,	// (0x00027dc2) popup_query_sat_info_window_ParamLimits

0x993b,	// (0x00027dc2) popup_query_sat_info_window

0x9974,	// (0x00027dfb) popup_snote_single_graphic_window_ParamLimits

0x9974,	// (0x00027dfb) popup_snote_single_graphic_window

0x9974,	// (0x00027dfb) popup_snote_single_text_window_ParamLimits

0x9974,	// (0x00027dfb) popup_snote_single_text_window

0x5623,	// (0x00023aaa) popup_sub_window_general

0x5669,	// (0x00023af0) popup_window_general_ParamLimits

0x5669,	// (0x00023af0) popup_window_general

0x567e,	// (0x00023b05) power_save_pane

0x9464,	// (0x000278eb) control_pane_g1_ParamLimits

0x9464,	// (0x000278eb) control_pane_g1

0x948d,	// (0x00027914) control_pane_g2_ParamLimits

0x948d,	// (0x00027914) control_pane_g2

0x54f8,	// (0x0002397f) control_pane_g3_ParamLimits

0x54f8,	// (0x0002397f) control_pane_g3

0x0007,

0xf79b,	// (0x0002dc22) control_pane_g_ParamLimits

0xf79b,	// (0x0002dc22) control_pane_g

0x94f9,	// (0x00027980) control_pane_t1_ParamLimits

0x94f9,	// (0x00027980) control_pane_t1

0x954b,	// (0x000279d2) control_pane_t2_ParamLimits

0x954b,	// (0x000279d2) control_pane_t2

0x0002,

0xf7ac,	// (0x0002dc33) control_pane_t_ParamLimits

0xf7ac,	// (0x0002dc33) control_pane_t

0x5419,	// (0x000238a0) navi_navi_volume_pane_cp1

0x5422,	// (0x000238a9) status_small_icon_pane

0x542a,	// (0x000238b1) status_small_pane_g1_ParamLimits

0x542a,	// (0x000238b1) status_small_pane_g1

0x545e,	// (0x000238e5) status_small_pane_g2_ParamLimits

0x545e,	// (0x000238e5) status_small_pane_g2

0x546a,	// (0x000238f1) status_small_pane_g3_ParamLimits

0x546a,	// (0x000238f1) status_small_pane_g3

0x5476,	// (0x000238fd) status_small_pane_g4_ParamLimits

0x5476,	// (0x000238fd) status_small_pane_g4

0x5482,	// (0x00023909) status_small_pane_g5_ParamLimits

0x5482,	// (0x00023909) status_small_pane_g5

0x5491,	// (0x00023918) status_small_pane_g6_ParamLimits

0x5491,	// (0x00023918) status_small_pane_g6

0x0007,

0xf78a,	// (0x0002dc11) status_small_pane_g_ParamLimits

0xf78a,	// (0x0002dc11) status_small_pane_g

0x54c1,	// (0x00023948) status_small_pane_t1

0x54e4,	// (0x0002396b) status_small_wait_pane_ParamLimits

0x54e4,	// (0x0002396b) status_small_wait_pane

0x90a6,	// (0x0002752d) aid_levels_signal_ParamLimits

0x90a6,	// (0x0002752d) aid_levels_signal

0x90b8,	// (0x0002753f) signal_pane_g1_ParamLimits

0x90b8,	// (0x0002753f) signal_pane_g1

0x90cd,	// (0x00027554) signal_pane_g2_ParamLimits

0x90cd,	// (0x00027554) signal_pane_g2

0x0001,

0xf71f,	// (0x0002dba6) signal_pane_g_ParamLimits

0xf71f,	// (0x0002dba6) signal_pane_g

0x4e48,	// (0x000232cf) context_pane_g1

0x89f7,	// (0x00026e7e) title_pane_g1

0x8a21,	// (0x00026ea8) title_pane_t1

0x4230,	// (0x000226b7) title_pane_t2

0x4256,	// (0x000226dd) title_pane_t3

0x0002,

0xf573,	// (0x0002d9fa) title_pane_t

0x9d4a,	// (0x000281d1) aid_levels_battery_ParamLimits

0x9d4a,	// (0x000281d1) aid_levels_battery

0x9d5e,	// (0x000281e5) battery_pane_g1_ParamLimits

0x9d5e,	// (0x000281e5) battery_pane_g1

0x9d74,	// (0x000281fb) battery_pane_g2_ParamLimits

0x9d74,	// (0x000281fb) battery_pane_g2

0x0001,

0xf7be,	// (0x0002dc45) battery_pane_g_ParamLimits

0xf7be,	// (0x0002dc45) battery_pane_g

0xa2b2,	// (0x00028739) uni_indicator_pane_g1

0xa2c7,	// (0x0002874e) uni_indicator_pane_g2

0xa2dd,	// (0x00028764) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0002ddaf) uni_indicator_pane_g

0x5174,	// (0x000235fb) navi_icon_pane_ParamLimits

0x5174,	// (0x000235fb) navi_icon_pane

0x50bb,	// (0x00023542) navi_midp_pane

0x5190,	// (0x00023617) navi_navi_pane

0x519a,	// (0x00023621) navi_text_pane_ParamLimits

0x519a,	// (0x00023621) navi_text_pane

0x4210,	// (0x00022697) status_small_wait_pane_g1

0x4531,	// (0x000229b8) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0002ddaa) status_small_wait_pane_g

0xa257,	// (0x000286de) navi_navi_icon_text_pane

0xa25f,	// (0x000286e6) navi_navi_pane_g1_ParamLimits

0xa25f,	// (0x000286e6) navi_navi_pane_g1

0xa271,	// (0x000286f8) navi_navi_pane_g2_ParamLimits

0xa271,	// (0x000286f8) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0002dd78) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0002dd78) navi_navi_pane_g

0x6553,	// (0x000249da) navi_navi_tabs_pane

0xa283,	// (0x0002870a) navi_navi_text_pane

0xa257,	// (0x000286de) navi_navi_volume_pane

0xa242,	// (0x000286c9) navi_text_pane_t1

0xa233,	// (0x000286ba) navi_icon_pane_g1

0x6494,	// (0x0002491b) navi_navi_text_pane_t1

0xa222,	// (0x000286a9) navi_navi_volume_pane_g1

0xa22a,	// (0x000286b1) volume_small_pane

0xa194,	// (0x0002861b) navi_navi_icon_text_pane_g1

0xa19c,	// (0x00028623) navi_navi_icon_text_pane_t1

0x5190,	// (0x00023617) navi_tabs_2_long_pane

0x5190,	// (0x00023617) navi_tabs_2_pane

0x5190,	// (0x00023617) navi_tabs_3_long_pane

0x5190,	// (0x00023617) navi_tabs_3_pane

0x5190,	// (0x00023617) navi_tabs_4_pane

0xa174,	// (0x000285fb) tabs_2_active_pane_ParamLimits

0xa174,	// (0x000285fb) tabs_2_active_pane

0xa184,	// (0x0002860b) tabs_2_passive_pane_ParamLimits

0xa184,	// (0x0002860b) tabs_2_passive_pane

0xa142,	// (0x000285c9) tabs_3_active_pane_ParamLimits

0xa142,	// (0x000285c9) tabs_3_active_pane

0xa152,	// (0x000285d9) tabs_3_passive_pane_ParamLimits

0xa152,	// (0x000285d9) tabs_3_passive_pane

0xa163,	// (0x000285ea) tabs_3_passive_pane_cp_ParamLimits

0xa163,	// (0x000285ea) tabs_3_passive_pane_cp

0xa0fe,	// (0x00028585) tabs_4_active_pane_ParamLimits

0xa0fe,	// (0x00028585) tabs_4_active_pane

0xa10f,	// (0x00028596) tabs_4_passive_pane_ParamLimits

0xa10f,	// (0x00028596) tabs_4_passive_pane

0xa120,	// (0x000285a7) tabs_4_passive_pane_cp_ParamLimits

0xa120,	// (0x000285a7) tabs_4_passive_pane_cp

0xa131,	// (0x000285b8) tabs_4_passive_pane_cp2_ParamLimits

0xa131,	// (0x000285b8) tabs_4_passive_pane_cp2

0xa0da,	// (0x00028561) tabs_2_long_active_pane_ParamLimits

0xa0da,	// (0x00028561) tabs_2_long_active_pane

0xa0ec,	// (0x00028573) tabs_2_long_passive_pane_ParamLimits

0xa0ec,	// (0x00028573) tabs_2_long_passive_pane

0xa095,	// (0x0002851c) tabs_3_long_active_pane_ParamLimits

0xa095,	// (0x0002851c) tabs_3_long_active_pane

0xa0ae,	// (0x00028535) tabs_3_long_passive_pane_ParamLimits

0xa0ae,	// (0x00028535) tabs_3_long_passive_pane

0xa0c1,	// (0x00028548) tabs_3_long_passive_pane_cp_ParamLimits

0xa0c1,	// (0x00028548) tabs_3_long_passive_pane_cp

0xa03b,	// (0x000284c2) volume_small_pane_g1

0xa044,	// (0x000284cb) volume_small_pane_g2

0xa04d,	// (0x000284d4) volume_small_pane_g3

0xa056,	// (0x000284dd) volume_small_pane_g4

0xa05f,	// (0x000284e6) volume_small_pane_g5

0xa068,	// (0x000284ef) volume_small_pane_g6

0xa071,	// (0x000284f8) volume_small_pane_g7

0xa07a,	// (0x00028501) volume_small_pane_g8

0xa083,	// (0x0002850a) volume_small_pane_g9

0xa08c,	// (0x00028513) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0002dd44) volume_small_pane_g

0x4276,	// (0x000226fd) bg_active_tab_pane_cp2_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp2

0x8a89,	// (0x00026f10) tabs_3_active_pane_g1

0x8a91,	// (0x00026f18) tabs_3_active_pane_t1

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp2_ParamLimits

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp2

0x8a89,	// (0x00026f10) tabs_3_passive_pane_g1

0x8a91,	// (0x00026f18) tabs_3_passive_pane_t1

0x4276,	// (0x000226fd) bg_active_tab_pane_cp3_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp3

0x8aa3,	// (0x00026f2a) tabs_4_active_pane_g1

0x8aab,	// (0x00026f32) tabs_4_active_pane_t1

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp3_ParamLimits

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp3

0x8aa3,	// (0x00026f2a) tabs_4_1_passive_pane_g1

0x8aab,	// (0x00026f32) tabs_4_1_passive_pane_t1

0x4a14,	// (0x00022e9b) list_highlight_pane_cp2

0xa41d,	// (0x000288a4) list_set_pane_ParamLimits

0xa41d,	// (0x000288a4) list_set_pane

0xa4bf,	// (0x00028946) main_pane_set_t1_ParamLimits

0xa4bf,	// (0x00028946) main_pane_set_t1

0xa4df,	// (0x00028966) main_pane_set_t2_ParamLimits

0xa4df,	// (0x00028966) main_pane_set_t2

0xa4f3,	// (0x0002897a) main_pane_set_t3_ParamLimits

0xa4f3,	// (0x0002897a) main_pane_set_t3

0xa505,	// (0x0002898c) main_pane_set_t4_ParamLimits

0xa505,	// (0x0002898c) main_pane_set_t4

0x0003,

0xf98d,	// (0x0002de14) main_pane_set_t_ParamLimits

0xf98d,	// (0x0002de14) main_pane_set_t

0xa517,	// (0x0002899e) setting_code_pane

0xa521,	// (0x000289a8) setting_slider_graphic_pane

0xa521,	// (0x000289a8) setting_slider_pane

0xa521,	// (0x000289a8) setting_text_pane

0xa521,	// (0x000289a8) setting_volume_pane

0x8abd,	// (0x00026f44) volume_set_pane

0x4276,	// (0x000226fd) bg_set_opt_pane_cp

0x8ac5,	// (0x00026f4c) setting_slider_pane_t1

0x8ade,	// (0x00026f65) setting_slider_pane_t2

0x8af7,	// (0x00026f7e) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002da01) setting_slider_pane_t

0x8b0e,	// (0x00026f95) slider_set_pane

0x421a,	// (0x000226a1) bg_set_opt_pane_cp2

0x4284,	// (0x0002270b) setting_slider_graphic_pane_g1

0x8b24,	// (0x00026fab) setting_slider_graphic_pane_t1

0x8b33,	// (0x00026fba) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002da08) setting_slider_graphic_pane_t

0x8b42,	// (0x00026fc9) slider_set_pane_cp

0x421a,	// (0x000226a1) input_focus_pane_cp1

0x699c,	// (0x00024e23) list_set_text_pane

0x4210,	// (0x00022697) setting_text_pane_g1

0x421a,	// (0x000226a1) input_focus_pane_cp2

0x4210,	// (0x00022697) setting_code_pane_g1

0x428d,	// (0x00022714) setting_code_pane_t1

0xc1ea,	// (0x0002a671) set_text_pane_t1_ParamLimits

0xc1ea,	// (0x0002a671) set_text_pane_t1

0x4924,	// (0x00022dab) set_opt_bg_pane_g1

0x492c,	// (0x00022db3) set_opt_bg_pane_g2

0x697c,	// (0x00024e03) set_opt_bg_pane_g3

0x493c,	// (0x00022dc3) set_opt_bg_pane_g4

0x4944,	// (0x00022dcb) set_opt_bg_pane_g5

0x494c,	// (0x00022dd3) set_opt_bg_pane_g6

0x6984,	// (0x00024e0b) set_opt_bg_pane_g7

0x698c,	// (0x00024e13) set_opt_bg_pane_g8

0x6994,	// (0x00024e1b) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0002de01) set_opt_bg_pane_g

0x696f,	// (0x00024df6) slider_set_pane_g1

0xa392,	// (0x00028819) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0002ddf2) slider_set_pane_g

0xa309,	// (0x00028790) volume_set_pane_g1

0xa311,	// (0x00028798) volume_set_pane_g2

0xa319,	// (0x000287a0) volume_set_pane_g3

0xa321,	// (0x000287a8) volume_set_pane_g4

0xa329,	// (0x000287b0) volume_set_pane_g5

0xa331,	// (0x000287b8) volume_set_pane_g6

0xa339,	// (0x000287c0) volume_set_pane_g7

0xa341,	// (0x000287c8) volume_set_pane_g8

0xa349,	// (0x000287d0) volume_set_pane_g9

0xa351,	// (0x000287d8) volume_set_pane_g10

0x0009,

0xf943,	// (0x0002ddca) volume_set_pane_g

0x8b4a,	// (0x00026fd1) indicator_pane_ParamLimits

0x8b4a,	// (0x00026fd1) indicator_pane

0x8b56,	// (0x00026fdd) main_idle_pane_g2_ParamLimits

0x8b56,	// (0x00026fdd) main_idle_pane_g2

0x8b7e,	// (0x00027005) main_pane_idle_g1_ParamLimits

0x8b7e,	// (0x00027005) main_pane_idle_g1

0x429b,	// (0x00022722) popup_clock_digital_analogue_window_ParamLimits

0x429b,	// (0x00022722) popup_clock_digital_analogue_window

0x8b8b,	// (0x00027012) soft_indicator_pane_ParamLimits

0x8b8b,	// (0x00027012) soft_indicator_pane

0x8b97,	// (0x0002701e) wallpaper_pane_ParamLimits

0x8b97,	// (0x0002701e) wallpaper_pane

0x4210,	// (0x00022697) wallpaper_pane_g1

0x8ba3,	// (0x0002702a) indicator_pane_g1_ParamLimits

0x8ba3,	// (0x0002702a) indicator_pane_g1

0x6aef,	// (0x00024f76) navi_navi_icon_text_pane_srt_g1

0x42c9,	// (0x00022750) soft_indicator_pane_t1

0x42e3,	// (0x0002276a) aid_ps_area_pane

0x8baf,	// (0x00027036) aid_ps_clock_pane

0x42f4,	// (0x0002277b) aid_ps_indicator_pane

0x4300,	// (0x00022787) indicator_ps_pane_ParamLimits

0x4300,	// (0x00022787) indicator_ps_pane

0x430f,	// (0x00022796) power_save_pane_g1_ParamLimits

0x430f,	// (0x00022796) power_save_pane_g1

0x431b,	// (0x000227a2) power_save_pane_g2_ParamLimits

0x431b,	// (0x000227a2) power_save_pane_g2

0x861c,	// (0x00026aa3) aid_navinavi_width_pane

0x42e3,	// (0x0002276a) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002da0d) power_save_pane_g_ParamLimits

0xf586,	// (0x0002da0d) power_save_pane_g

0x4329,	// (0x000227b0) power_save_pane_t1_ParamLimits

0x4329,	// (0x000227b0) power_save_pane_t1

0x8baf,	// (0x00027036) aid_ps_clock_pane_ParamLimits

0x42f4,	// (0x0002277b) aid_ps_indicator_pane_ParamLimits

0x433b,	// (0x000227c2) power_save_pane_t4_ParamLimits

0x433b,	// (0x000227c2) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002da12) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002da12) power_save_pane_t

0x4365,	// (0x000227ec) power_save_t3_ParamLimits

0x4365,	// (0x000227ec) power_save_t3

0x4350,	// (0x000227d7) power_save_t2_ParamLimits

0x4350,	// (0x000227d7) power_save_t2

0x437a,	// (0x00022801) indicator_ps_pane_g1

0x8bbd,	// (0x00027044) ai_gene_pane_ParamLimits

0x8bbd,	// (0x00027044) ai_gene_pane

0x8bc9,	// (0x00027050) ai_links_pane_ParamLimits

0x8bc9,	// (0x00027050) ai_links_pane

0x8bd5,	// (0x0002705c) indicator_pane_cp1_ParamLimits

0x8bd5,	// (0x0002705c) indicator_pane_cp1

0x8be1,	// (0x00027068) main_pane_idle_g1_cp_ParamLimits

0x8be1,	// (0x00027068) main_pane_idle_g1_cp

0x4383,	// (0x0002280a) popup_ai_links_title_window

0x8bed,	// (0x00027074) soft_indicator_pane_cp1_ParamLimits

0x8bed,	// (0x00027074) soft_indicator_pane_cp1

0x67c3,	// (0x00024c4a) ai_links_pane_g1

0x67cc,	// (0x00024c53) grid_ai_links_pane

0xa2a7,	// (0x0002872e) ai_gene_pane_1

0x67b1,	// (0x00024c38) ai_gene_pane_2

0x67ba,	// (0x00024c41) list_highlight_pane_cp4

0xa28b,	// (0x00028712) cell_ai_link_pane_ParamLimits

0xa28b,	// (0x00028712) cell_ai_link_pane

0x67a9,	// (0x00024c30) cell_ai_link_pane_g1

0x4531,	// (0x000229b8) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0002dda5) cell_ai_link_pane_g

0x421a,	// (0x000226a1) grid_highlight_cp2

0x421a,	// (0x000226a1) bg_popup_sub_pane_cp1

0x439a,	// (0x00022821) popup_ai_links_title_window_t1

0x66f7,	// (0x00024b7e) ai_gene_pane_1_g1_ParamLimits

0x66f7,	// (0x00024b7e) ai_gene_pane_1_g1

0x6703,	// (0x00024b8a) ai_gene_pane_1_g2_ParamLimits

0x6703,	// (0x00024b8a) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0002dd9b) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0002dd9b) ai_gene_pane_1_g

0x6710,	// (0x00024b97) ai_gene_pane_1_t1_ParamLimits

0x6710,	// (0x00024b97) ai_gene_pane_1_t1

0x6744,	// (0x00024bcb) grid_ai_soft_ind_pane

0x66e2,	// (0x00024b69) ai_gene_pane_2_t1_ParamLimits

0x66e2,	// (0x00024b69) ai_gene_pane_2_t1

0x8bf9,	// (0x00027080) main_pane_empty_t1_ParamLimits

0x8bf9,	// (0x00027080) main_pane_empty_t1

0x8c11,	// (0x00027098) main_pane_empty_t2_ParamLimits

0x8c11,	// (0x00027098) main_pane_empty_t2

0x8c26,	// (0x000270ad) main_pane_empty_t3_ParamLimits

0x8c26,	// (0x000270ad) main_pane_empty_t3

0x8c38,	// (0x000270bf) main_pane_empty_t4_ParamLimits

0x8c38,	// (0x000270bf) main_pane_empty_t4

0x8c4a,	// (0x000270d1) main_pane_empty_t5_ParamLimits

0x8c4a,	// (0x000270d1) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002da17) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002da17) main_pane_empty_t

0x4975,	// (0x00022dfc) bg_popup_window_pane_ParamLimits

0x4975,	// (0x00022dfc) bg_popup_window_pane

0x64a2,	// (0x00024929) find_popup_pane_cp2_ParamLimits

0x64a2,	// (0x00024929) find_popup_pane_cp2

0x64ae,	// (0x00024935) heading_pane_ParamLimits

0x64ae,	// (0x00024935) heading_pane

0x421a,	// (0x000226a1) bg_popup_sub_pane

0xa1b6,	// (0x0002863d) bg_popup_window_pane_g1_ParamLimits

0xa1b6,	// (0x0002863d) bg_popup_window_pane_g1

0xa1c2,	// (0x00028649) bg_popup_window_pane_g2_ParamLimits

0xa1c2,	// (0x00028649) bg_popup_window_pane_g2

0xa1ce,	// (0x00028655) bg_popup_window_pane_g3_ParamLimits

0xa1ce,	// (0x00028655) bg_popup_window_pane_g3

0xa1da,	// (0x00028661) bg_popup_window_pane_g4_ParamLimits

0xa1da,	// (0x00028661) bg_popup_window_pane_g4

0xa1e6,	// (0x0002866d) bg_popup_window_pane_g5_ParamLimits

0xa1e6,	// (0x0002866d) bg_popup_window_pane_g5

0xa1f2,	// (0x00028679) bg_popup_window_pane_g6_ParamLimits

0xa1f2,	// (0x00028679) bg_popup_window_pane_g6

0xa1fe,	// (0x00028685) bg_popup_window_pane_g7_ParamLimits

0xa1fe,	// (0x00028685) bg_popup_window_pane_g7

0xa20a,	// (0x00028691) bg_popup_window_pane_g8_ParamLimits

0xa20a,	// (0x00028691) bg_popup_window_pane_g8

0xa216,	// (0x0002869d) bg_popup_window_pane_g9_ParamLimits

0xa216,	// (0x0002869d) bg_popup_window_pane_g9

0x6488,	// (0x0002490f) bg_popup_window_pane_g10_ParamLimits

0x6488,	// (0x0002490f) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0002dd63) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0002dd63) bg_popup_window_pane_g

0x643f,	// (0x000248c6) bg_popup_heading_pane_ParamLimits

0x643f,	// (0x000248c6) bg_popup_heading_pane

0xa648,	// (0x00028acf) tabs_4_passive_pane_cp_srt_ParamLimits

0xa648,	// (0x00028acf) tabs_4_passive_pane_cp_srt

0xa65a,	// (0x00028ae1) tabs_4_passive_pane_srt_ParamLimits

0x6453,	// (0x000248da) heading_pane_g2

0xa65a,	// (0x00028ae1) tabs_4_passive_pane_srt

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp3_srt

0x645b,	// (0x000248e2) heading_pane_t1_ParamLimits

0x645b,	// (0x000248e2) heading_pane_t1

0x6472,	// (0x000248f9) heading_pane_t2_ParamLimits

0x6472,	// (0x000248f9) heading_pane_t2

0x0001,

0xf8d7,	// (0x0002dd5e) heading_pane_t_ParamLimits

0xf8d7,	// (0x0002dd5e) heading_pane_t

0x5f86,	// (0x0002440d) bg_popup_heading_pane_g1

0x6017,	// (0x0002449e) bg_popup_heading_pane_g2

0x6021,	// (0x000244a8) bg_popup_heading_pane_g3

0x602b,	// (0x000244b2) bg_popup_heading_pane_g4

0x6035,	// (0x000244bc) bg_popup_heading_pane_g5

0x603f,	// (0x000244c6) bg_popup_heading_pane_g6

0x6047,	// (0x000244ce) bg_popup_heading_pane_g7

0x604f,	// (0x000244d6) bg_popup_heading_pane_g8

0x6059,	// (0x000244e0) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0002dd1a) bg_popup_heading_pane_g

0x584c,	// (0x00023cd3) bg_popup_sub_pane_g1

0x5854,	// (0x00023cdb) bg_popup_sub_pane_g2

0x585c,	// (0x00023ce3) bg_popup_sub_pane_g3

0x5864,	// (0x00023ceb) bg_popup_sub_pane_g4

0x586c,	// (0x00023cf3) bg_popup_sub_pane_g5

0x5874,	// (0x00023cfb) bg_popup_sub_pane_g6

0x587c,	// (0x00023d03) bg_popup_sub_pane_g7

0x5884,	// (0x00023d0b) bg_popup_sub_pane_g8

0x588c,	// (0x00023d13) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0002dcf4) bg_popup_sub_pane_g

0x4268,	// (0x000226ef) bg_popup_window_pane_cp5_ParamLimits

0x4268,	// (0x000226ef) bg_popup_window_pane_cp5

0x43b7,	// (0x0002283e) popup_note_window_g1_ParamLimits

0x43b7,	// (0x0002283e) popup_note_window_g1

0x43c3,	// (0x0002284a) popup_note_window_t1_ParamLimits

0x43c3,	// (0x0002284a) popup_note_window_t1

0x43d5,	// (0x0002285c) popup_note_window_t2_ParamLimits

0x43d5,	// (0x0002285c) popup_note_window_t2

0x43e7,	// (0x0002286e) popup_note_window_t3_ParamLimits

0x43e7,	// (0x0002286e) popup_note_window_t3

0x43f9,	// (0x00022880) popup_note_window_t4_ParamLimits

0x43f9,	// (0x00022880) popup_note_window_t4

0x4421,	// (0x000228a8) popup_note_window_t5_ParamLimits

0x4421,	// (0x000228a8) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002da22) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002da22) popup_note_window_t

0x4445,	// (0x000228cc) bg_popup_window_pane_cp6_ParamLimits

0x4445,	// (0x000228cc) bg_popup_window_pane_cp6

0x5efa,	// (0x00024381) popup_note_image_window_g1_ParamLimits

0x5efa,	// (0x00024381) popup_note_image_window_g1

0x5f06,	// (0x0002438d) popup_note_image_window_g2_ParamLimits

0x5f06,	// (0x0002438d) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0002dce8) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0002dce8) popup_note_image_window_g

0x5f1f,	// (0x000243a6) popup_note_image_window_t1_ParamLimits

0x5f1f,	// (0x000243a6) popup_note_image_window_t1

0x5f38,	// (0x000243bf) popup_note_image_window_t2_ParamLimits

0x5f38,	// (0x000243bf) popup_note_image_window_t2

0x5f51,	// (0x000243d8) popup_note_image_window_t3_ParamLimits

0x5f51,	// (0x000243d8) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0002dced) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0002dced) popup_note_image_window_t

0x5dd7,	// (0x0002425e) bg_popup_window_pane_cp7_ParamLimits

0x5dd7,	// (0x0002425e) bg_popup_window_pane_cp7

0x5e07,	// (0x0002428e) popup_note_wait_window_g1_ParamLimits

0x5e07,	// (0x0002428e) popup_note_wait_window_g1

0x5e13,	// (0x0002429a) popup_note_wait_window_g2_ParamLimits

0x5e13,	// (0x0002429a) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0002dcd6) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0002dcd6) popup_note_wait_window_g

0x5e2b,	// (0x000242b2) popup_note_wait_window_t1_ParamLimits

0x5e2b,	// (0x000242b2) popup_note_wait_window_t1

0x5e52,	// (0x000242d9) popup_note_wait_window_t2_ParamLimits

0x5e52,	// (0x000242d9) popup_note_wait_window_t2

0x5e6f,	// (0x000242f6) popup_note_wait_window_t3_ParamLimits

0x5e6f,	// (0x000242f6) popup_note_wait_window_t3

0x5e82,	// (0x00024309) popup_note_wait_window_t4_ParamLimits

0x5e82,	// (0x00024309) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0002dcdd) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0002dcdd) popup_note_wait_window_t

0x5ea7,	// (0x0002432e) wait_bar_pane_ParamLimits

0x5ea7,	// (0x0002432e) wait_bar_pane

0x421a,	// (0x000226a1) wait_anim_pane

0x421a,	// (0x000226a1) wait_border_pane

0x4210,	// (0x00022697) wait_anim_pane_g1

0x4210,	// (0x00022697) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0002dba1) wait_anim_pane_g

0x5d7b,	// (0x00024202) wait_border_pane_g1

0x5d86,	// (0x0002420d) wait_border_pane_g2

0x5d8f,	// (0x00024216) wait_border_pane_g3

0x0002,

0xf848,	// (0x0002dccf) wait_border_pane_g

0x5beb,	// (0x00024072) bg_popup_window_pane_cp16_ParamLimits

0x5beb,	// (0x00024072) bg_popup_window_pane_cp16

0x5ceb,	// (0x00024172) indicator_popup_pane_cp4_ParamLimits

0x5ceb,	// (0x00024172) indicator_popup_pane_cp4

0x5cff,	// (0x00024186) popup_query_data_window_t1_ParamLimits

0x5cff,	// (0x00024186) popup_query_data_window_t1

0x5d11,	// (0x00024198) popup_query_data_window_t2_ParamLimits

0x5d11,	// (0x00024198) popup_query_data_window_t2

0x5d2a,	// (0x000241b1) popup_query_data_window_t3_ParamLimits

0x5d2a,	// (0x000241b1) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0002dcc8) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0002dcc8) popup_query_data_window_t

0x5d44,	// (0x000241cb) query_popup_data_pane_ParamLimits

0x5d44,	// (0x000241cb) query_popup_data_pane

0x5d58,	// (0x000241df) query_popup_data_pane_cp1_ParamLimits

0x5d58,	// (0x000241df) query_popup_data_pane_cp1

0x5beb,	// (0x00024072) bg_popup_window_pane_cp10_ParamLimits

0x5beb,	// (0x00024072) bg_popup_window_pane_cp10

0x5c1d,	// (0x000240a4) indicator_popup_pane_ParamLimits

0x5c1d,	// (0x000240a4) indicator_popup_pane

0x5c3f,	// (0x000240c6) popup_query_code_window_t1_ParamLimits

0x5c3f,	// (0x000240c6) popup_query_code_window_t1

0x5c59,	// (0x000240e0) popup_query_code_window_t2_ParamLimits

0x5c59,	// (0x000240e0) popup_query_code_window_t2

0x5ca2,	// (0x00024129) popup_query_code_window_t3_ParamLimits

0x5ca2,	// (0x00024129) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0002dcc1) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0002dcc1) popup_query_code_window_t

0x5cd1,	// (0x00024158) query_popup_pane_ParamLimits

0x5cd1,	// (0x00024158) query_popup_pane

0x4445,	// (0x000228cc) bg_popup_window_pane_cp15_ParamLimits

0x4445,	// (0x000228cc) bg_popup_window_pane_cp15

0x4463,	// (0x000228ea) indicator_popup_pane_cp1_ParamLimits

0x4463,	// (0x000228ea) indicator_popup_pane_cp1

0x4476,	// (0x000228fd) indicator_popup_pane_cp2_ParamLimits

0x4476,	// (0x000228fd) indicator_popup_pane_cp2

0x4489,	// (0x00022910) popup_query_data_code_window_g1_ParamLimits

0x4489,	// (0x00022910) popup_query_data_code_window_g1

0x449c,	// (0x00022923) popup_query_data_code_window_t1_ParamLimits

0x449c,	// (0x00022923) popup_query_data_code_window_t1

0x44ae,	// (0x00022935) popup_query_data_code_window_t2_ParamLimits

0x44ae,	// (0x00022935) popup_query_data_code_window_t2

0x44c0,	// (0x00022947) popup_query_data_code_window_t3_ParamLimits

0x44c0,	// (0x00022947) popup_query_data_code_window_t3

0x44d6,	// (0x0002295d) popup_query_data_code_window_t4_ParamLimits

0x44d6,	// (0x0002295d) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002da2d) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002da2d) popup_query_data_code_window_t

0x9ddf,	// (0x00028266) list_single_midp_graphic_pane_g3

0x44ee,	// (0x00022975) query_popup_data_pane_cp2_ParamLimits

0x4501,	// (0x00022988) query_popup_pane_cp2_ParamLimits

0x4501,	// (0x00022988) query_popup_pane_cp2

0x421a,	// (0x000226a1) bg_popup_window_pane_cp11

0x5be3,	// (0x0002406a) heading_pane_cp5

0x458f,	// (0x00022a16) listscroll_popup_info_pane

0x421a,	// (0x000226a1) input_focus_pane_cp3

0x4514,	// (0x0002299b) query_popup_pane_t1

0x4522,	// (0x000229a9) list_popup_info_pane_ParamLimits

0x4522,	// (0x000229a9) list_popup_info_pane

0x4531,	// (0x000229b8) listscroll_popup_info_pane_g1

0x4539,	// (0x000229c0) scroll_pane_cp7

0x4543,	// (0x000229ca) popup_info_list_pane_t1_ParamLimits

0x4543,	// (0x000229ca) popup_info_list_pane_t1

0x455d,	// (0x000229e4) popup_info_list_pane_t2_ParamLimits

0x455d,	// (0x000229e4) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002da36) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002da36) popup_info_list_pane_t

0x421a,	// (0x000226a1) bg_popup_window_pane_cp12

0x6b09,	// (0x00024f90) find_popup_pane

0x4276,	// (0x000226fd) bg_popup_window_pane_cp3

0x4577,	// (0x000229fe) heading_pane_cp3

0x4583,	// (0x00022a0a) listscroll_popup_graphic_pane

0x421a,	// (0x000226a1) bg_popup_window_pane_cp4

0x8cae,	// (0x00027135) heading_pane_cp4

0x458f,	// (0x00022a16) listscroll_popup_colour_pane

0x4597,	// (0x00022a1e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4597,	// (0x00022a1e) cell_large_graphic_colour_none_popup_pane

0x8cb8,	// (0x0002713f) grid_large_graphic_colour_popup_pane_ParamLimits

0x8cb8,	// (0x0002713f) grid_large_graphic_colour_popup_pane

0x45ab,	// (0x00022a32) listscroll_popup_colour_pane_g1_ParamLimits

0x45ab,	// (0x00022a32) listscroll_popup_colour_pane_g1

0x45c2,	// (0x00022a49) listscroll_popup_colour_pane_g2_ParamLimits

0x45c2,	// (0x00022a49) listscroll_popup_colour_pane_g2

0x45d9,	// (0x00022a60) listscroll_popup_colour_pane_g3_ParamLimits

0x45d9,	// (0x00022a60) listscroll_popup_colour_pane_g3

0x8cdc,	// (0x00027163) listscroll_popup_colour_pane_g4_ParamLimits

0x8cdc,	// (0x00027163) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002da3b) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002da3b) listscroll_popup_colour_pane_g

0x45e9,	// (0x00022a70) scroll_pane_cp6_ParamLimits

0x45e9,	// (0x00022a70) scroll_pane_cp6

0x8ceb,	// (0x00027172) cell_large_graphic_colour_popup_pane_ParamLimits

0x8ceb,	// (0x00027172) cell_large_graphic_colour_popup_pane

0x45fb,	// (0x00022a82) cell_large_graphic_colour_none_popup_pane_t1

0x421a,	// (0x000226a1) grid_highlight_pane_cp5

0x460a,	// (0x00022a91) cell_large_graphic_colour_popup_pane_g1

0x4612,	// (0x00022a99) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002da44) cell_large_graphic_colour_popup_pane_g

0x461a,	// (0x00022aa1) cell_large_graphic_colour_popup_pane_g2_copy1

0x4623,	// (0x00022aaa) grid_highlight_pane_cp4

0x462b,	// (0x00022ab2) bg_popup_window_pane_cp8_ParamLimits

0x462b,	// (0x00022ab2) bg_popup_window_pane_cp8

0x4646,	// (0x00022acd) popup_snote_single_text_window_g1_ParamLimits

0x4646,	// (0x00022acd) popup_snote_single_text_window_g1

0x4658,	// (0x00022adf) popup_snote_single_text_window_t1_ParamLimits

0x4658,	// (0x00022adf) popup_snote_single_text_window_t1

0x466b,	// (0x00022af2) popup_snote_single_text_window_t2_ParamLimits

0x466b,	// (0x00022af2) popup_snote_single_text_window_t2

0x467e,	// (0x00022b05) popup_snote_single_text_window_t3_ParamLimits

0x467e,	// (0x00022b05) popup_snote_single_text_window_t3

0x46b7,	// (0x00022b3e) popup_snote_single_text_window_t4_ParamLimits

0x46b7,	// (0x00022b3e) popup_snote_single_text_window_t4

0x46eb,	// (0x00022b72) popup_snote_single_text_window_t5_ParamLimits

0x46eb,	// (0x00022b72) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002da49) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002da49) popup_snote_single_text_window_t

0x471a,	// (0x00022ba1) bg_popup_window_pane_cp9_ParamLimits

0x471a,	// (0x00022ba1) bg_popup_window_pane_cp9

0x4646,	// (0x00022acd) popup_snote_single_graphic_window_g1_ParamLimits

0x4646,	// (0x00022acd) popup_snote_single_graphic_window_g1

0x4728,	// (0x00022baf) popup_snote_single_graphic_window_g2_ParamLimits

0x4728,	// (0x00022baf) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002da54) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002da54) popup_snote_single_graphic_window_g

0x4734,	// (0x00022bbb) popup_snote_single_graphic_window_t1_ParamLimits

0x4734,	// (0x00022bbb) popup_snote_single_graphic_window_t1

0x4747,	// (0x00022bce) popup_snote_single_graphic_window_t2_ParamLimits

0x4747,	// (0x00022bce) popup_snote_single_graphic_window_t2

0x475a,	// (0x00022be1) popup_snote_single_graphic_window_t3_ParamLimits

0x475a,	// (0x00022be1) popup_snote_single_graphic_window_t3

0x4793,	// (0x00022c1a) popup_snote_single_graphic_window_t4_ParamLimits

0x4793,	// (0x00022c1a) popup_snote_single_graphic_window_t4

0x47c7,	// (0x00022c4e) popup_snote_single_graphic_window_t5_ParamLimits

0x47c7,	// (0x00022c4e) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002da59) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002da59) popup_snote_single_graphic_window_t

0x6a8d,	// (0x00024f14) grid_graphic_popup_pane_ParamLimits

0x6a8d,	// (0x00024f14) grid_graphic_popup_pane

0x6ab9,	// (0x00024f40) listscroll_popup_graphic_pane_g1_ParamLimits

0x6ab9,	// (0x00024f40) listscroll_popup_graphic_pane_g1

0xa610,	// (0x00028a97) listscroll_popup_graphic_pane_g2_ParamLimits

0xa610,	// (0x00028a97) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0002de3e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0002de3e) listscroll_popup_graphic_pane_g

0x6a6b,	// (0x00024ef2) scroll_pane_cp5

0xa5d1,	// (0x00028a58) cell_graphic_popup_pane_ParamLimits

0xa5d1,	// (0x00028a58) cell_graphic_popup_pane

0x6a4c,	// (0x00024ed3) cell_graphic_popup_pane_g1

0x6a54,	// (0x00024edb) cell_graphic_popup_pane_g2

0x461a,	// (0x00022aa1) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0002de37) cell_graphic_popup_pane_g

0x6a5d,	// (0x00024ee4) cell_graphic_popup_pane_t2

0x4623,	// (0x00022aaa) grid_highlight_pane_cp3

0x4808,	// (0x00022c8f) list_gen_pane_ParamLimits

0x4808,	// (0x00022c8f) list_gen_pane

0x4830,	// (0x00022cb7) scroll_pane

0xa584,	// (0x00028a0b) bg_list_pane_g1_ParamLimits

0xa584,	// (0x00028a0b) bg_list_pane_g1

0x69fb,	// (0x00024e82) bg_list_pane_g2_ParamLimits

0x69fb,	// (0x00024e82) bg_list_pane_g2

0x6a0e,	// (0x00024e95) bg_list_pane_g3_ParamLimits

0x6a0e,	// (0x00024e95) bg_list_pane_g3

0x6a20,	// (0x00024ea7) bg_list_pane_g4_ParamLimits

0x6a20,	// (0x00024ea7) bg_list_pane_g4

0xa59f,	// (0x00028a26) bg_list_pane_g5_ParamLimits

0xa59f,	// (0x00028a26) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0002de2c) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0002de2c) bg_list_pane_g

0xe70a,	// (0x0002cb91) list_double2_graphic_large_graphic_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double2_graphic_large_graphic_pane

0xe70a,	// (0x0002cb91) list_double2_graphic_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double2_graphic_pane

0xe70a,	// (0x0002cb91) list_double2_large_graphic_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double2_large_graphic_pane

0xe70a,	// (0x0002cb91) list_double2_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double2_pane

0xe70a,	// (0x0002cb91) list_double_graphic_heading_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_graphic_heading_pane

0xe70a,	// (0x0002cb91) list_double_graphic_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_graphic_pane

0xe70a,	// (0x0002cb91) list_double_heading_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_heading_pane

0xe70a,	// (0x0002cb91) list_double_large_graphic_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_large_graphic_pane

0xe70a,	// (0x0002cb91) list_double_number_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_number_pane

0xe70a,	// (0x0002cb91) list_double_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_pane

0xe70a,	// (0x0002cb91) list_double_time_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_double_time_pane

0xe70a,	// (0x0002cb91) list_setting_number_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_setting_number_pane

0xe70a,	// (0x0002cb91) list_setting_pane_ParamLimits

0xe70a,	// (0x0002cb91) list_setting_pane

0xe766,	// (0x0002cbed) list_single_2graphic_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_2graphic_pane

0xe766,	// (0x0002cbed) list_single_graphic_heading_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_graphic_heading_pane

0xe766,	// (0x0002cbed) list_single_graphic_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_graphic_pane

0xe766,	// (0x0002cbed) list_single_heading_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_heading_pane

0xe7d4,	// (0x0002cc5b) list_single_large_graphic_pane_ParamLimits

0xe7d4,	// (0x0002cc5b) list_single_large_graphic_pane

0xe766,	// (0x0002cbed) list_single_number_heading_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_number_heading_pane

0xe766,	// (0x0002cbed) list_single_number_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_number_pane

0xe766,	// (0x0002cbed) list_single_pane_ParamLimits

0xe766,	// (0x0002cbed) list_single_pane

0x421a,	// (0x000226a1) list_highlight_pane_cp1

0xc210,	// (0x0002a697) list_single_pane_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_pane_g1

0xc21c,	// (0x0002a6a3) list_single_pane_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_pane_g

0xe6f4,	// (0x0002cb7b) list_single_pane_t1_ParamLimits

0xe6f4,	// (0x0002cb7b) list_single_pane_t1

0xc210,	// (0x0002a697) list_single_number_pane_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_number_pane_g1

0xc21c,	// (0x0002a6a3) list_single_number_pane_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_number_pane_g

0xe628,	// (0x0002caaf) list_single_number_pane_t1_ParamLimits

0xe628,	// (0x0002caaf) list_single_number_pane_t1

0xe6b4,	// (0x0002cb3b) list_single_number_pane_t2_ParamLimits

0xe6b4,	// (0x0002cb3b) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0002dded) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0002dded) list_single_number_pane_t

0xc204,	// (0x0002a68b) list_single_graphic_pane_g1_ParamLimits

0xc204,	// (0x0002a68b) list_single_graphic_pane_g1

0xc210,	// (0x0002a697) list_single_graphic_pane_g2_ParamLimits

0xc210,	// (0x0002a697) list_single_graphic_pane_g2

0xc21c,	// (0x0002a6a3) list_single_graphic_pane_g3_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002da64) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002da64) list_single_graphic_pane_g

0xc228,	// (0x0002a6af) list_single_graphic_pane_t1_ParamLimits

0xc228,	// (0x0002a6af) list_single_graphic_pane_t1

0xc210,	// (0x0002a697) list_single_heading_pane_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_heading_pane_g1

0xc21c,	// (0x0002a6a3) list_single_heading_pane_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_heading_pane_g

0xc23e,	// (0x0002a6c5) list_single_heading_pane_t1_ParamLimits

0xc23e,	// (0x0002a6c5) list_single_heading_pane_t1

0xc254,	// (0x0002a6db) list_single_heading_pane_t2_ParamLimits

0xc254,	// (0x0002a6db) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002da70) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002da70) list_single_heading_pane_t

0xc210,	// (0x0002a697) list_single_number_heading_pane_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_number_heading_pane_g1

0xc21c,	// (0x0002a6a3) list_single_number_heading_pane_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_number_heading_pane_g

0xc23e,	// (0x0002a6c5) list_single_number_heading_pane_t1_ParamLimits

0xc23e,	// (0x0002a6c5) list_single_number_heading_pane_t1

0xc266,	// (0x0002a6ed) list_single_number_heading_pane_t2_ParamLimits

0xc266,	// (0x0002a6ed) list_single_number_heading_pane_t2

0xc278,	// (0x0002a6ff) list_single_number_heading_pane_t3_ParamLimits

0xc278,	// (0x0002a6ff) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002da75) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002da75) list_single_number_heading_pane_t

0xc28a,	// (0x0002a711) list_single_graphic_heading_pane_g1_ParamLimits

0xc28a,	// (0x0002a711) list_single_graphic_heading_pane_g1

0xc296,	// (0x0002a71d) list_single_graphic_heading_pane_g4_ParamLimits

0xc296,	// (0x0002a71d) list_single_graphic_heading_pane_g4

0xc21c,	// (0x0002a6a3) list_single_graphic_heading_pane_g5_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002da7c) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002da7c) list_single_graphic_heading_pane_g

0xc23e,	// (0x0002a6c5) list_single_graphic_heading_pane_t1_ParamLimits

0xc23e,	// (0x0002a6c5) list_single_graphic_heading_pane_t1

0xc2a7,	// (0x0002a72e) list_single_graphic_heading_pane_t2_ParamLimits

0xc2a7,	// (0x0002a72e) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002da83) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002da83) list_single_graphic_heading_pane_t

0xc2b9,	// (0x0002a740) list_single_large_graphic_pane_g1_ParamLimits

0xc2b9,	// (0x0002a740) list_single_large_graphic_pane_g1

0xc2c5,	// (0x0002a74c) list_single_large_graphic_pane_g2_ParamLimits

0xc2c5,	// (0x0002a74c) list_single_large_graphic_pane_g2

0xc2d1,	// (0x0002a758) list_single_large_graphic_pane_g3_ParamLimits

0xc2d1,	// (0x0002a758) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002da88) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002da88) list_single_large_graphic_pane_g

0x5d86,	// (0x0002420d) wait_border_pane_g2_copy1

0xc2dd,	// (0x0002a764) list_single_large_graphic_pane_g4_cp2

0xc2e5,	// (0x0002a76c) list_single_large_graphic_pane_t1_ParamLimits

0xc2e5,	// (0x0002a76c) list_single_large_graphic_pane_t1

0xc2fb,	// (0x0002a782) list_double_pane_g1_ParamLimits

0xc2fb,	// (0x0002a782) list_double_pane_g1

0xdfd4,	// (0x0002c45b) list_double_pane_g2_ParamLimits

0xdfd4,	// (0x0002c45b) list_double_pane_g2

0x0001,

0xf608,	// (0x0002da8f) list_double_pane_g_ParamLimits

0xf608,	// (0x0002da8f) list_double_pane_g

0xdfe0,	// (0x0002c467) list_double_pane_t1_ParamLimits

0xdfe0,	// (0x0002c467) list_double_pane_t1

0xdff6,	// (0x0002c47d) list_double_pane_t2_ParamLimits

0xdff6,	// (0x0002c47d) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002da94) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002da94) list_double_pane_t

0xe008,	// (0x0002c48f) list_double2_pane_g1_ParamLimits

0xe008,	// (0x0002c48f) list_double2_pane_g1

0xdfd4,	// (0x0002c45b) list_double2_pane_g2_ParamLimits

0xdfd4,	// (0x0002c45b) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002da99) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002da99) list_double2_pane_g

0xdfe0,	// (0x0002c467) list_double2_pane_t1_ParamLimits

0xdfe0,	// (0x0002c467) list_double2_pane_t1

0xe019,	// (0x0002c4a0) list_double2_pane_t2_ParamLimits

0xe019,	// (0x0002c4a0) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002da9e) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002da9e) list_double2_pane_t

0xc2fb,	// (0x0002a782) list_double_number_pane_g1_ParamLimits

0xc2fb,	// (0x0002a782) list_double_number_pane_g1

0xdfd4,	// (0x0002c45b) list_double_number_pane_g2_ParamLimits

0xdfd4,	// (0x0002c45b) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002da8f) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002da8f) list_double_number_pane_g

0xe02b,	// (0x0002c4b2) list_double_number_pane_t1_ParamLimits

0xe02b,	// (0x0002c4b2) list_double_number_pane_t1

0xe03d,	// (0x0002c4c4) list_double_number_pane_t2_ParamLimits

0xe03d,	// (0x0002c4c4) list_double_number_pane_t2

0xe053,	// (0x0002c4da) list_double_number_pane_t3_ParamLimits

0xe053,	// (0x0002c4da) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002daa3) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002daa3) list_double_number_pane_t

0xe065,	// (0x0002c4ec) list_double_graphic_pane_g1_ParamLimits

0xe065,	// (0x0002c4ec) list_double_graphic_pane_g1

0xe071,	// (0x0002c4f8) list_double_graphic_pane_g2_ParamLimits

0xe071,	// (0x0002c4f8) list_double_graphic_pane_g2

0xe080,	// (0x0002c507) list_double_graphic_pane_g3_ParamLimits

0xe080,	// (0x0002c507) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002daaa) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002daaa) list_double_graphic_pane_g

0xe098,	// (0x0002c51f) list_double_graphic_pane_t1_ParamLimits

0xe098,	// (0x0002c51f) list_double_graphic_pane_t1

0xe0ae,	// (0x0002c535) list_double_graphic_pane_t2_ParamLimits

0xe0ae,	// (0x0002c535) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002dab3) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002dab3) list_double_graphic_pane_t

0xe065,	// (0x0002c4ec) list_double2_graphic_pane_g1_ParamLimits

0xe065,	// (0x0002c4ec) list_double2_graphic_pane_g1

0xe0c0,	// (0x0002c547) list_double2_graphic_pane_g2_ParamLimits

0xe0c0,	// (0x0002c547) list_double2_graphic_pane_g2

0xe0cc,	// (0x0002c553) list_double2_graphic_pane_g3_ParamLimits

0xe0cc,	// (0x0002c553) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002dab8) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002dab8) list_double2_graphic_pane_g

0xe03d,	// (0x0002c4c4) list_double2_graphic_pane_t1_ParamLimits

0xe03d,	// (0x0002c4c4) list_double2_graphic_pane_t1

0xe0d8,	// (0x0002c55f) list_double2_graphic_pane_t2_ParamLimits

0xe0d8,	// (0x0002c55f) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002dabf) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002dabf) list_double2_graphic_pane_t

0xe0ea,	// (0x0002c571) list_double_large_graphic_pane_g1_ParamLimits

0xe0ea,	// (0x0002c571) list_double_large_graphic_pane_g1

0xe008,	// (0x0002c48f) list_double_large_graphic_pane_g2_ParamLimits

0xe008,	// (0x0002c48f) list_double_large_graphic_pane_g2

0xdfd4,	// (0x0002c45b) list_double_large_graphic_pane_g3_ParamLimits

0xdfd4,	// (0x0002c45b) list_double_large_graphic_pane_g3

0xe115,	// (0x0002c59c) list_double_large_graphic_pane_g4_ParamLimits

0xe115,	// (0x0002c59c) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002dac4) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002dac4) list_double_large_graphic_pane_g

0xe13d,	// (0x0002c5c4) list_double_large_graphic_pane_t1_ParamLimits

0xe13d,	// (0x0002c5c4) list_double_large_graphic_pane_t1

0xe156,	// (0x0002c5dd) list_double_large_graphic_pane_t2_ParamLimits

0xe156,	// (0x0002c5dd) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002dacf) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002dacf) list_double_large_graphic_pane_t

0xe168,	// (0x0002c5ef) list_double2_large_graphic_pane_g1_ParamLimits

0xe168,	// (0x0002c5ef) list_double2_large_graphic_pane_g1

0xe008,	// (0x0002c48f) list_double2_large_graphic_pane_g2_ParamLimits

0xe008,	// (0x0002c48f) list_double2_large_graphic_pane_g2

0xdfd4,	// (0x0002c45b) list_double2_large_graphic_pane_g3_ParamLimits

0xdfd4,	// (0x0002c45b) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002dad4) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002dad4) list_double2_large_graphic_pane_g

0xe174,	// (0x0002c5fb) list_double2_large_graphic_pane_t1_ParamLimits

0xe174,	// (0x0002c5fb) list_double2_large_graphic_pane_t1

0xe18a,	// (0x0002c611) list_double2_large_graphic_pane_t2_ParamLimits

0xe18a,	// (0x0002c611) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002dadb) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002dadb) list_double2_large_graphic_pane_t

0xe19c,	// (0x0002c623) list_double_heading_pane_g1_ParamLimits

0xe19c,	// (0x0002c623) list_double_heading_pane_g1

0xe1ad,	// (0x0002c634) list_double_heading_pane_g2_ParamLimits

0xe1ad,	// (0x0002c634) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002dae0) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002dae0) list_double_heading_pane_g

0xe1b9,	// (0x0002c640) list_double_heading_pane_t1_ParamLimits

0xe1b9,	// (0x0002c640) list_double_heading_pane_t1

0xe019,	// (0x0002c4a0) list_double_heading_pane_t2_ParamLimits

0xe019,	// (0x0002c4a0) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002dae5) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002dae5) list_double_heading_pane_t

0xe065,	// (0x0002c4ec) list_double_graphic_heading_pane_g1_ParamLimits

0xe065,	// (0x0002c4ec) list_double_graphic_heading_pane_g1

0xe19c,	// (0x0002c623) list_double_graphic_heading_pane_g2_ParamLimits

0xe19c,	// (0x0002c623) list_double_graphic_heading_pane_g2

0xe1ad,	// (0x0002c634) list_double_graphic_heading_pane_g3_ParamLimits

0xe1ad,	// (0x0002c634) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002daea) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002daea) list_double_graphic_heading_pane_g

0xe1cf,	// (0x0002c656) list_double_graphic_heading_pane_t1_ParamLimits

0xe1cf,	// (0x0002c656) list_double_graphic_heading_pane_t1

0xe0d8,	// (0x0002c55f) list_double_graphic_heading_pane_t2_ParamLimits

0xe0d8,	// (0x0002c55f) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002daf1) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002daf1) list_double_graphic_heading_pane_t

0xe008,	// (0x0002c48f) list_double_time_pane_g1_ParamLimits

0xe008,	// (0x0002c48f) list_double_time_pane_g1

0xdfd4,	// (0x0002c45b) list_double_time_pane_g2_ParamLimits

0xdfd4,	// (0x0002c45b) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0002da99) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0002da99) list_double_time_pane_g

0xe174,	// (0x0002c5fb) list_double_time_pane_t1_ParamLimits

0xe174,	// (0x0002c5fb) list_double_time_pane_t1

0xe1e5,	// (0x0002c66c) list_double_time_pane_t2_ParamLimits

0xe1e5,	// (0x0002c66c) list_double_time_pane_t2

0xe1f7,	// (0x0002c67e) list_double_time_pane_t3_ParamLimits

0xe1f7,	// (0x0002c67e) list_double_time_pane_t3

0xe209,	// (0x0002c690) list_double_time_pane_t4_ParamLimits

0xe209,	// (0x0002c690) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0002daf6) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0002daf6) list_double_time_pane_t

0xe21b,	// (0x0002c6a2) list_setting_pane_g1_ParamLimits

0xe21b,	// (0x0002c6a2) list_setting_pane_g1

0xe227,	// (0x0002c6ae) list_setting_pane_g2_ParamLimits

0xe227,	// (0x0002c6ae) list_setting_pane_g2

0x0001,

0xf678,	// (0x0002daff) list_setting_pane_g_ParamLimits

0xf678,	// (0x0002daff) list_setting_pane_g

0xe233,	// (0x0002c6ba) list_setting_pane_t1_ParamLimits

0xe233,	// (0x0002c6ba) list_setting_pane_t1

0xe24a,	// (0x0002c6d1) list_setting_pane_t2_ParamLimits

0xe24a,	// (0x0002c6d1) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0002db04) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0002db04) list_setting_pane_t

0xe287,	// (0x0002c70e) set_value_pane_cp_ParamLimits

0xe287,	// (0x0002c70e) set_value_pane_cp

0xe293,	// (0x0002c71a) list_setting_number_pane_g1_ParamLimits

0xe293,	// (0x0002c71a) list_setting_number_pane_g1

0xe29f,	// (0x0002c726) list_setting_number_pane_g2_ParamLimits

0xe29f,	// (0x0002c726) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0002db0b) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0002db0b) list_setting_number_pane_g

0xe2ab,	// (0x0002c732) list_setting_number_pane_t1_ParamLimits

0xe2ab,	// (0x0002c732) list_setting_number_pane_t1

0xe2bf,	// (0x0002c746) list_setting_number_pane_t2_ParamLimits

0xe2bf,	// (0x0002c746) list_setting_number_pane_t2

0xe2d6,	// (0x0002c75d) list_setting_number_pane_t3_ParamLimits

0xe2d6,	// (0x0002c75d) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0002db10) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0002db10) list_setting_number_pane_t

0xe287,	// (0x0002c70e) set_value_pane_ParamLimits

0xe287,	// (0x0002c70e) set_value_pane

0x4864,	// (0x00022ceb) bg_set_opt_pane_ParamLimits

0x4864,	// (0x00022ceb) bg_set_opt_pane

0xe319,	// (0x0002c7a0) set_value_pane_t1

0x4885,	// (0x00022d0c) slider_set_pane_cp3

0x488e,	// (0x00022d15) volume_small_pane_cp

0x4897,	// (0x00022d1e) list_form_gen_pane

0x48a0,	// (0x00022d27) scroll_pane_cp8

0xe32f,	// (0x0002c7b6) form_field_data_pane_ParamLimits

0xe32f,	// (0x0002c7b6) form_field_data_pane

0xe34f,	// (0x0002c7d6) form_field_data_wide_pane_ParamLimits

0xe34f,	// (0x0002c7d6) form_field_data_wide_pane

0xe370,	// (0x0002c7f7) form_field_popup_pane_ParamLimits

0xe370,	// (0x0002c7f7) form_field_popup_pane

0xe38e,	// (0x0002c815) form_field_popup_wide_pane_ParamLimits

0xe38e,	// (0x0002c815) form_field_popup_wide_pane

0xe3a9,	// (0x0002c830) form_field_slider_pane_ParamLimits

0xe3a9,	// (0x0002c830) form_field_slider_pane

0xe3bc,	// (0x0002c843) form_field_slider_wide_pane_ParamLimits

0xe3bc,	// (0x0002c843) form_field_slider_wide_pane

0x48b1,	// (0x00022d38) data_form_pane

0xe3d9,	// (0x0002c860) form_field_data_pane_t1

0x48bd,	// (0x00022d44) input_focus_pane

0x48cb,	// (0x00022d52) data_form_wide_pane

0xe3ff,	// (0x0002c886) form_field_data_wide_pane_t1

0x4638,	// (0x00022abf) input_focus_pane_cp6

0xe421,	// (0x0002c8a8) form_field_popup_pane_t1

0x48bd,	// (0x00022d44) input_focus_pane_cp7

0x48f7,	// (0x00022d7e) list_form_pane

0xe443,	// (0x0002c8ca) form_field_popup_wide_pane_t1

0x48bd,	// (0x00022d44) input_focus_pane_cp8

0x4903,	// (0x00022d8a) list_form_wide_pane

0xe460,	// (0x0002c8e7) form_field_slider_pane_t1_ParamLimits

0xe460,	// (0x0002c8e7) form_field_slider_pane_t1

0xe474,	// (0x0002c8fb) form_field_slider_pane_t2_ParamLimits

0xe474,	// (0x0002c8fb) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0002db20) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0002db20) form_field_slider_pane_t

0x4268,	// (0x000226ef) input_focus_pane_cp9_ParamLimits

0x4268,	// (0x000226ef) input_focus_pane_cp9

0xe486,	// (0x0002c90d) slider_cont_pane_ParamLimits

0xe486,	// (0x0002c90d) slider_cont_pane

0x4912,	// (0x00022d99) form_field_slider_wide_pane_t1_ParamLimits

0x4912,	// (0x00022d99) form_field_slider_wide_pane_t1

0xe49a,	// (0x0002c921) form_field_slider_wide_pane_t2_ParamLimits

0xe49a,	// (0x0002c921) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0002db25) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0002db25) form_field_slider_wide_pane_t

0x4268,	// (0x000226ef) input_focus_pane_cp10_ParamLimits

0x4268,	// (0x000226ef) input_focus_pane_cp10

0xe4ac,	// (0x0002c933) slider_cont_pane_cp1_ParamLimits

0xe4ac,	// (0x0002c933) slider_cont_pane_cp1

0xe4c0,	// (0x0002c947) slider_form_pane_cp

0x4924,	// (0x00022dab) input_focus_pane_g1

0x492c,	// (0x00022db3) input_focus_pane_g2

0x4934,	// (0x00022dbb) input_focus_pane_g3

0x493c,	// (0x00022dc3) input_focus_pane_g4

0x4944,	// (0x00022dcb) input_focus_pane_g5

0x494c,	// (0x00022dd3) input_focus_pane_g6

0x4954,	// (0x00022ddb) input_focus_pane_g7

0x495c,	// (0x00022de3) input_focus_pane_g8

0x4964,	// (0x00022deb) input_focus_pane_g9

0x4210,	// (0x00022697) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0002db2a) input_focus_pane_g

0x5d8f,	// (0x00024216) wait_border_pane_g3_copy1

0xe4c8,	// (0x0002c94f) data_form_pane_t1

0x4210,	// (0x00022697) wait_anim_pane_g1_copy1

0xe6c6,	// (0x0002cb4d) data_form_wide_pane_t1

0xe4e3,	// (0x0002c96a) list_form_graphic_pane_cp_ParamLimits

0xe4e3,	// (0x0002c96a) list_form_graphic_pane_cp

0x69a4,	// (0x00024e2b) slider_form_pane_g1

0x69ad,	// (0x00024e34) slider_form_pane_g2

0x0006,

0xf996,	// (0x0002de1d) slider_form_pane_g

0xe4fa,	// (0x0002c981) list_form_graphic_pane_ParamLimits

0xe4fa,	// (0x0002c981) list_form_graphic_pane

0xe514,	// (0x0002c99b) list_form_graphic_pane_g1

0xe51c,	// (0x0002c9a3) list_form_graphic_pane_t1_ParamLimits

0xe51c,	// (0x0002c9a3) list_form_graphic_pane_t1

0x4276,	// (0x000226fd) list_highlight_pane_cp5_ParamLimits

0x4276,	// (0x000226fd) list_highlight_pane_cp5

0xe531,	// (0x0002c9b8) find_pane_g1

0x496c,	// (0x00022df3) input_find_pane

0xe53a,	// (0x0002c9c1) input_find_pane_g1_ParamLimits

0xe53a,	// (0x0002c9c1) input_find_pane_g1

0xe546,	// (0x0002c9cd) input_find_pane_t1_ParamLimits

0xe546,	// (0x0002c9cd) input_find_pane_t1

0xe55b,	// (0x0002c9e2) input_find_pane_t2_ParamLimits

0xe55b,	// (0x0002c9e2) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0002db3f) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0002db3f) input_find_pane_t

0x4975,	// (0x00022dfc) input_focus_pane_cp5_ParamLimits

0x4975,	// (0x00022dfc) input_focus_pane_cp5

0x8d20,	// (0x000271a7) bg_popup_window_pane_cp2_ParamLimits

0x8d20,	// (0x000271a7) bg_popup_window_pane_cp2

0x8d2d,	// (0x000271b4) listscroll_menu_pane_ParamLimits

0x8d2d,	// (0x000271b4) listscroll_menu_pane

0x8d39,	// (0x000271c0) popup_submenu_window_ParamLimits

0x8d39,	// (0x000271c0) popup_submenu_window

0x4983,	// (0x00022e0a) find_popup_pane_g1

0x498b,	// (0x00022e12) input_popup_find_pane_cp

0x4975,	// (0x00022dfc) input_focus_pane_cp4_ParamLimits

0x4975,	// (0x00022dfc) input_focus_pane_cp4

0x4995,	// (0x00022e1c) input_popup_find_pane_t1_ParamLimits

0x4995,	// (0x00022e1c) input_popup_find_pane_t1

0x421a,	// (0x000226a1) bg_popup_sub_pane_cp

0x49c3,	// (0x00022e4a) listscroll_popup_sub_pane

0x49cb,	// (0x00022e52) list_submenu_pane_ParamLimits

0x49cb,	// (0x00022e52) list_submenu_pane

0x49dc,	// (0x00022e63) scroll_pane_cp4

0x49e4,	// (0x00022e6b) list_single_popup_submenu_pane_ParamLimits

0x49e4,	// (0x00022e6b) list_single_popup_submenu_pane

0x49f7,	// (0x00022e7e) list_single_popup_submenu_pane_g1

0x49ff,	// (0x00022e86) list_single_popup_submenu_pane_t1_ParamLimits

0x49ff,	// (0x00022e86) list_single_popup_submenu_pane_t1

0x4276,	// (0x000226fd) bg_active_tab_pane_cp1_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp1

0x8d6b,	// (0x000271f2) tabs_2_active_pane_g1

0x8d73,	// (0x000271fa) tabs_2_active_pane_t1

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp1_ParamLimits

0x4276,	// (0x000226fd) bg_passive_tab_pane_cp1

0x8d6b,	// (0x000271f2) tabs_2_passive_pane_g1

0x8d73,	// (0x000271fa) tabs_2_passive_pane_t1

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp4

0x8d85,	// (0x0002720c) tabs_2_long_active_pane_t1

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp4

0x9de7,	// (0x0002826e) list_single_midp_graphic_pane_g4_ParamLimits

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp5

0x8da4,	// (0x0002722b) tabs_3_long_active_pane_t1

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp5

0x9de7,	// (0x0002826e) list_single_midp_graphic_pane_g4

0x4276,	// (0x000226fd) bg_popup_window_pane_cp13_ParamLimits

0x4276,	// (0x000226fd) bg_popup_window_pane_cp13

0x4a29,	// (0x00022eb0) listscroll_popup_fast_pane_ParamLimits

0x4a29,	// (0x00022eb0) listscroll_popup_fast_pane

0x4a38,	// (0x00022ebf) grid_popup_fast_pane_ParamLimits

0x4a38,	// (0x00022ebf) grid_popup_fast_pane

0x4a4a,	// (0x00022ed1) scroll_pane_cp9_ParamLimits

0x4a4a,	// (0x00022ed1) scroll_pane_cp9

0xb0eb,	// (0x00029572) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb0eb,	// (0x00029572) list_single_graphic_hl_pane_t1_cp2

0x4a6e,	// (0x00022ef5) input_focus_pane_cp20_ParamLimits

0x4a6e,	// (0x00022ef5) input_focus_pane_cp20

0x4a7c,	// (0x00022f03) query_popup_data_pane_t1_ParamLimits

0x4a7c,	// (0x00022f03) query_popup_data_pane_t1

0x4a8f,	// (0x00022f16) query_popup_data_pane_t2_ParamLimits

0x4a8f,	// (0x00022f16) query_popup_data_pane_t2

0x4ad5,	// (0x00022f5c) query_popup_data_pane_t3_ParamLimits

0x4ad5,	// (0x00022f5c) query_popup_data_pane_t3

0x4b16,	// (0x00022f9d) query_popup_data_pane_t4_ParamLimits

0x4b16,	// (0x00022f9d) query_popup_data_pane_t4

0x4b52,	// (0x00022fd9) query_popup_data_pane_t5_ParamLimits

0x4b52,	// (0x00022fd9) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0002db44) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0002db44) query_popup_data_pane_t

0x4924,	// (0x00022dab) bg_set_opt_pane_g1

0x492c,	// (0x00022db3) bg_set_opt_pane_g2

0x4934,	// (0x00022dbb) bg_set_opt_pane_g3

0x493c,	// (0x00022dc3) bg_set_opt_pane_g4

0x4944,	// (0x00022dcb) bg_set_opt_pane_g5

0x494c,	// (0x00022dd3) bg_set_opt_pane_g6

0x4954,	// (0x00022ddb) bg_set_opt_pane_g7

0x495c,	// (0x00022de3) bg_set_opt_pane_g8

0x4964,	// (0x00022deb) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0002db4f) bg_set_opt_pane_g

0x918b,	// (0x00027612) control_top_pane_stacon_ParamLimits

0x918b,	// (0x00027612) control_top_pane_stacon

0x91de,	// (0x00027665) signal_pane_stacon_ParamLimits

0x91de,	// (0x00027665) signal_pane_stacon

0x4fb6,	// (0x0002343d) stacon_top_pane_g1_ParamLimits

0x4fb6,	// (0x0002343d) stacon_top_pane_g1

0x9203,	// (0x0002768a) title_pane_stacon_ParamLimits

0x9203,	// (0x0002768a) title_pane_stacon

0x922d,	// (0x000276b4) uni_indicator_pane_stacon_ParamLimits

0x922d,	// (0x000276b4) uni_indicator_pane_stacon

0x9242,	// (0x000276c9) battery_pane_stacon_ParamLimits

0x9242,	// (0x000276c9) battery_pane_stacon

0x9286,	// (0x0002770d) control_bottom_pane_stacon_ParamLimits

0x9286,	// (0x0002770d) control_bottom_pane_stacon

0x92a9,	// (0x00027730) navi_pane_stacon_ParamLimits

0x92a9,	// (0x00027730) navi_pane_stacon

0x4fd8,	// (0x0002345f) stacon_bottom_pane_g1_ParamLimits

0x4fd8,	// (0x0002345f) stacon_bottom_pane_g1

0x8db6,	// (0x0002723d) aid_levels_signal_lsc_ParamLimits

0x8db6,	// (0x0002723d) aid_levels_signal_lsc

0x8dcd,	// (0x00027254) signal_pane_stacon_g1_ParamLimits

0x8dcd,	// (0x00027254) signal_pane_stacon_g1

0x8de1,	// (0x00027268) signal_pane_stacon_g2_ParamLimits

0x8de1,	// (0x00027268) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0002db62) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0002db62) signal_pane_stacon_g

0x8e16,	// (0x0002729d) title_pane_stacon_t1_ParamLimits

0x8e16,	// (0x0002729d) title_pane_stacon_t1

0x4baa,	// (0x00023031) uni_indicator_pane_stacon_g1

0x4bb4,	// (0x0002303b) uni_indicator_pane_stacon_g2

0x4b96,	// (0x0002301d) uni_indicator_pane_stacon_g3

0x4ba0,	// (0x00023027) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0002db6e) uni_indicator_pane_stacon_g

0x8e3b,	// (0x000272c2) control_top_pane_stacon_g1

0x8e43,	// (0x000272ca) control_top_pane_stacon_t1_ParamLimits

0x8e43,	// (0x000272ca) control_top_pane_stacon_t1

0x8e7a,	// (0x00027301) aid_levels_battery_lsc_ParamLimits

0x8e7a,	// (0x00027301) aid_levels_battery_lsc

0x8e92,	// (0x00027319) battery_pane_stacon_g1_ParamLimits

0x8e92,	// (0x00027319) battery_pane_stacon_g1

0x8ea5,	// (0x0002732c) battery_pane_stacon_g2_ParamLimits

0x8ea5,	// (0x0002732c) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0002db77) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0002db77) battery_pane_stacon_g

0x8ee3,	// (0x0002736a) navi_icon_pane_stacon

0x8ef7,	// (0x0002737e) navi_navi_pane_stacon

0x8ee3,	// (0x0002736a) navi_text_pane_stacon

0x8e3b,	// (0x000272c2) control_bottom_pane_stacon_g1

0x8f0b,	// (0x00027392) control_bottom_pane_stacon_t1_ParamLimits

0x8f0b,	// (0x00027392) control_bottom_pane_stacon_t1

0x8f42,	// (0x000273c9) grid_app_pane_ParamLimits

0x8f42,	// (0x000273c9) grid_app_pane

0x8f64,	// (0x000273eb) scroll_pane_cp15_ParamLimits

0x8f64,	// (0x000273eb) scroll_pane_cp15

0x8f79,	// (0x00027400) cell_app_pane_ParamLimits

0x8f79,	// (0x00027400) cell_app_pane

0x8fa3,	// (0x0002742a) cell_app_pane_g1_ParamLimits

0x8fa3,	// (0x0002742a) cell_app_pane_g1

0x4bd8,	// (0x0002305f) cell_app_pane_g2_ParamLimits

0x4bd8,	// (0x0002305f) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0002db7c) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0002db7c) cell_app_pane_g

0x4be4,	// (0x0002306b) cell_app_pane_t1_ParamLimits

0x4be4,	// (0x0002306b) cell_app_pane_t1

0x4bfb,	// (0x00023082) grid_highlight_pane_ParamLimits

0x4bfb,	// (0x00023082) grid_highlight_pane

0x4924,	// (0x00022dab) cell_highlight_pane_g1

0x492c,	// (0x00022db3) cell_highlight_pane_g2

0x4934,	// (0x00022dbb) cell_highlight_pane_g3

0x493c,	// (0x00022dc3) cell_highlight_pane_g4

0x4944,	// (0x00022dcb) cell_highlight_pane_g5

0x494c,	// (0x00022dd3) cell_highlight_pane_g6

0x4954,	// (0x00022ddb) cell_highlight_pane_g7

0x495c,	// (0x00022de3) cell_highlight_pane_g8

0x4964,	// (0x00022deb) cell_highlight_pane_g9

0x4210,	// (0x00022697) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0002db2a) cell_highlight_pane_g

0x4c0c,	// (0x00023093) bg_scroll_pane

0x8fda,	// (0x00027461) scroll_handle_pane

0x4c53,	// (0x000230da) scroll_bg_pane_g1

0x4c68,	// (0x000230ef) scroll_bg_pane_g2

0x4c80,	// (0x00023107) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0002db81) scroll_bg_pane_g

0x4c95,	// (0x0002311c) scroll_handle_focus_pane_ParamLimits

0x4c95,	// (0x0002311c) scroll_handle_focus_pane

0x4c53,	// (0x000230da) scroll_handle_pane_g1

0x4ca2,	// (0x00023129) scroll_handle_pane_g2

0x4c80,	// (0x00023107) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0002db88) scroll_handle_pane_g

0x4975,	// (0x00022dfc) bg_popup_sub_pane_cp21_ParamLimits

0x4975,	// (0x00022dfc) bg_popup_sub_pane_cp21

0x4cb6,	// (0x0002313d) popup_fep_japan_predictive_window_t1_ParamLimits

0x4cb6,	// (0x0002313d) popup_fep_japan_predictive_window_t1

0x4ccd,	// (0x00023154) popup_fep_japan_predictive_window_t2_ParamLimits

0x4ccd,	// (0x00023154) popup_fep_japan_predictive_window_t2

0x4d00,	// (0x00023187) popup_fep_japan_predictive_window_t3_ParamLimits

0x4d00,	// (0x00023187) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0002db8f) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0002db8f) popup_fep_japan_predictive_window_t

0x421a,	// (0x000226a1) bg_popup_sub_pane_cp23

0x4d37,	// (0x000231be) listscroll_japin_cand_pane

0x4d3f,	// (0x000231c6) popup_fep_japan_candidate_window_t1

0x4d4d,	// (0x000231d4) candidate_pane_ParamLimits

0x4d4d,	// (0x000231d4) candidate_pane

0x4d5f,	// (0x000231e6) scroll_pane_cp30

0x4d67,	// (0x000231ee) list_single_popup_jap_candidate_pane_ParamLimits

0x4d67,	// (0x000231ee) list_single_popup_jap_candidate_pane

0x421a,	// (0x000226a1) list_highlight_pane_cp30

0x4d7b,	// (0x00023202) list_single_popup_jap_candidate_pane_t1

0x4d8a,	// (0x00023211) level_1_signal

0x4d97,	// (0x0002321e) level_2_signal

0x4da4,	// (0x0002322b) level_3_signal

0x4db1,	// (0x00023238) level_4_signal

0x4dbe,	// (0x00023245) level_5_signal

0x4dcb,	// (0x00023252) level_6_signal

0x4dd8,	// (0x0002325f) level_7_signal

0x4d8a,	// (0x00023211) level_1_battery

0x4d97,	// (0x0002321e) level_2_battery

0x4da4,	// (0x0002322b) level_3_battery

0x4db1,	// (0x00023238) level_4_battery

0x4dbe,	// (0x00023245) level_5_battery

0x4dcb,	// (0x00023252) level_6_battery

0x4dd8,	// (0x0002325f) level_7_battery

0x4dfd,	// (0x00023284) list_menu_pane_ParamLimits

0x4dfd,	// (0x00023284) list_menu_pane

0x4e0e,	// (0x00023295) scroll_pane_cp25_ParamLimits

0x4e0e,	// (0x00023295) scroll_pane_cp25

0x4e27,	// (0x000232ae) list_double2_graphic_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double2_graphic_pane_cp2

0x4e27,	// (0x000232ae) list_double2_large_graphic_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double2_large_graphic_pane_cp2

0x4e27,	// (0x000232ae) list_double2_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double2_pane_cp2

0x4e27,	// (0x000232ae) list_double_graphic_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double_graphic_pane_cp2

0x4e27,	// (0x000232ae) list_double_large_graphic_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double_large_graphic_pane_cp2

0x4e27,	// (0x000232ae) list_double_number_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double_number_pane_cp2

0x4e27,	// (0x000232ae) list_double_pane_cp2_ParamLimits

0x4e27,	// (0x000232ae) list_double_pane_cp2

0x9034,	// (0x000274bb) list_single_2graphic_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_2graphic_pane_cp2

0x9034,	// (0x000274bb) list_single_graphic_heading_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_graphic_heading_pane_cp2

0x9034,	// (0x000274bb) list_single_graphic_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_graphic_pane_cp2

0x9034,	// (0x000274bb) list_single_heading_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_heading_pane_cp2

0x4e37,	// (0x000232be) list_single_large_graphic_pane_cp2_ParamLimits

0x4e37,	// (0x000232be) list_single_large_graphic_pane_cp2

0x9034,	// (0x000274bb) list_single_number_heading_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_number_heading_pane_cp2

0x9034,	// (0x000274bb) list_single_number_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_number_pane_cp2

0x9034,	// (0x000274bb) list_single_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_pane_cp2

0x4e51,	// (0x000232d8) bg_popup_sub_pane_cp22

0x90f1,	// (0x00027578) popup_side_volume_key_window_g1

0x911b,	// (0x000275a2) popup_side_volume_key_window_t1

0x9137,	// (0x000275be) volume_small_pane_cp1

0x4268,	// (0x000226ef) bg_popup_sub_pane_cp24_ParamLimits

0x4268,	// (0x000226ef) bg_popup_sub_pane_cp24

0x4e67,	// (0x000232ee) fep_china_uni_candidate_pane_ParamLimits

0x4e67,	// (0x000232ee) fep_china_uni_candidate_pane

0x4e7b,	// (0x00023302) fep_china_uni_entry_pane

0x4e8b,	// (0x00023312) popup_fep_china_uni_window_g1

0x4ea7,	// (0x0002332e) fep_china_uni_entry_pane_g1

0x4eaf,	// (0x00023336) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0002dbbc) fep_china_uni_entry_pane_g

0x4eb7,	// (0x0002333e) fep_entry_item_pane

0x4ec1,	// (0x00023348) fep_candidate_item_pane

0x4ec9,	// (0x00023350) fep_china_uni_candidate_pane_g1

0x4ed1,	// (0x00023358) fep_china_uni_candidate_pane_g2

0x4ed9,	// (0x00023360) fep_china_uni_candidate_pane_g3

0x4ee1,	// (0x00023368) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0002dbc1) fep_china_uni_candidate_pane_g

0x4210,	// (0x00022697) fep_entry_item_pane_g1

0x4ee9,	// (0x00023370) fep_entry_item_pane_t1_ParamLimits

0x4ee9,	// (0x00023370) fep_entry_item_pane_t1

0x4eff,	// (0x00023386) fep_candidate_item_pane_t1_ParamLimits

0x4eff,	// (0x00023386) fep_candidate_item_pane_t1

0x4f14,	// (0x0002339b) fep_candidate_item_pane_t2_ParamLimits

0x4f14,	// (0x0002339b) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0002dbca) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0002dbca) fep_candidate_item_pane_t

0x4276,	// (0x000226fd) list_highlight_pane_cp31_ParamLimits

0x4276,	// (0x000226fd) list_highlight_pane_cp31

0x4f26,	// (0x000233ad) level_1_signal_lsc

0x4f2f,	// (0x000233b6) level_2_signal_lsc

0x4f38,	// (0x000233bf) level_3_signal_lsc

0x4f41,	// (0x000233c8) level_4_signal_lsc

0x4f4a,	// (0x000233d1) level_5_signal_lsc

0x4f53,	// (0x000233da) level_6_signal_lsc

0x4f5c,	// (0x000233e3) level_7_signal_lsc

0x4f5c,	// (0x000233e3) level_1_battery_lsc

0x4f65,	// (0x000233ec) level_2_battery_lsc

0x4f6e,	// (0x000233f5) level_3_battery_lsc

0x4f77,	// (0x000233fe) level_4_battery_lsc

0x4f80,	// (0x00023407) level_5_battery_lsc

0x4f89,	// (0x00023410) level_6_battery_lsc

0x4f26,	// (0x000233ad) level_7_battery_lsc

0x4f92,	// (0x00023419) scroll_handle_focus_pane_g1

0x4f9b,	// (0x00023422) scroll_handle_focus_pane_g2

0x4fa4,	// (0x0002342b) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0002dbcf) scroll_handle_focus_pane_g

0xe570,	// (0x0002c9f7) list_single_2graphic_pane_g1_ParamLimits

0xe570,	// (0x0002c9f7) list_single_2graphic_pane_g1

0xc296,	// (0x0002a71d) list_single_2graphic_pane_g2_ParamLimits

0xc296,	// (0x0002a71d) list_single_2graphic_pane_g2

0xc21c,	// (0x0002a6a3) list_single_2graphic_pane_g3_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_2graphic_pane_g3

0xe57c,	// (0x0002ca03) list_single_2graphic_pane_g4_ParamLimits

0xe57c,	// (0x0002ca03) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0002dbd6) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0002dbd6) list_single_2graphic_pane_g

0xe588,	// (0x0002ca0f) list_single_2graphic_pane_t1_ParamLimits

0xe588,	// (0x0002ca0f) list_single_2graphic_pane_t1

0xe5b6,	// (0x0002ca3d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe5b6,	// (0x0002ca3d) list_double2_graphic_large_graphic_pane_g1

0xe008,	// (0x0002c48f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe008,	// (0x0002c48f) list_double2_graphic_large_graphic_pane_g2

0xdfd4,	// (0x0002c45b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdfd4,	// (0x0002c45b) list_double2_graphic_large_graphic_pane_g3

0xe5c8,	// (0x0002ca4f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe5c8,	// (0x0002ca4f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0002dbdf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0002dbdf) list_double2_graphic_large_graphic_pane_g

0xe5d4,	// (0x0002ca5b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe5d4,	// (0x0002ca5b) list_double2_graphic_large_graphic_pane_t1

0xe5ea,	// (0x0002ca71) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe5ea,	// (0x0002ca71) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0002dbe8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0002dbe8) list_double2_graphic_large_graphic_pane_t

0x5085,	// (0x0002350c) popup_fast_swap_window_ParamLimits

0x5085,	// (0x0002350c) popup_fast_swap_window

0x50a1,	// (0x00023528) popup_side_volume_key_window

0x50bb,	// (0x00023542) stacon_top_pane

0x50c5,	// (0x0002354c) status_pane_ParamLimits

0x50c5,	// (0x0002354c) status_pane

0x50bb,	// (0x00023542) status_small_pane

0x421a,	// (0x000226a1) control_pane

0x421a,	// (0x000226a1) stacon_bottom_pane

0x48a0,	// (0x00022d27) scroll_pane_cp121

0x4897,	// (0x00022d1e) set_content_pane

0x913f,	// (0x000275c6) bg_active_tab_pane_g1_cp1

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp1

0x9148,	// (0x000275cf) bg_active_tab_pane_g3_cp1

0x913f,	// (0x000275c6) bg_passive_tab_pane_g1_cp1

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp1

0x9148,	// (0x000275cf) bg_passive_tab_pane_g3_cp1

0x9151,	// (0x000275d8) bg_active_tab_pane_g1_cp2

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp2

0x915a,	// (0x000275e1) bg_active_tab_pane_g3_cp2

0x9151,	// (0x000275d8) bg_passive_tab_pane_g1_cp2

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp2

0x915a,	// (0x000275e1) bg_passive_tab_pane_g3_cp2

0x9163,	// (0x000275ea) bg_active_tab_pane_g1_cp3

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp3

0x916c,	// (0x000275f3) bg_active_tab_pane_g3_cp3

0x9163,	// (0x000275ea) bg_passive_tab_pane_g1_cp3

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp3

0x916c,	// (0x000275f3) bg_passive_tab_pane_g3_cp3

0x9175,	// (0x000275fc) bg_active_tab_pane_g1_cp4

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp4

0x9180,	// (0x00027607) bg_active_tab_pane_g3_cp4

0x9175,	// (0x000275fc) bg_passive_tab_pane_g1_cp4

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp4

0x9180,	// (0x00027607) bg_passive_tab_pane_g3_cp4

0x4ffd,	// (0x00023484) bg_active_tab_pane_g1_cp5

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp5

0x4ff4,	// (0x0002347b) bg_active_tab_pane_g3_cp5

0x4ffd,	// (0x00023484) bg_passive_tab_pane_g1_cp5

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp5

0x4ff4,	// (0x0002347b) bg_passive_tab_pane_g3_cp5

0x92cc,	// (0x00027753) list_set_graphic_pane_ParamLimits

0x92cc,	// (0x00027753) list_set_graphic_pane

0x421a,	// (0x000226a1) bg_set_opt_pane_cp4

0x5006,	// (0x0002348d) list_set_graphic_pane_g1_ParamLimits

0x5006,	// (0x0002348d) list_set_graphic_pane_g1

0x5012,	// (0x00023499) list_set_graphic_pane_g2_ParamLimits

0x5012,	// (0x00023499) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0002dbed) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0002dbed) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0002df60) volume_small_pane_cp_g

0x5036,	// (0x000234bd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5036,	// (0x000234bd) list_double2_large_graphic_pane_g1_cp2

0x5044,	// (0x000234cb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5044,	// (0x000234cb) list_double2_large_graphic_pane_g2_cp2

0x5055,	// (0x000234dc) list_double2_large_graphic_pane_g3_cp2

0x505d,	// (0x000234e4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x505d,	// (0x000234e4) list_double2_large_graphic_pane_t1_cp2

0x5073,	// (0x000234fa) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5073,	// (0x000234fa) list_double2_large_graphic_pane_t2_cp2

0x6754,	// (0x00024bdb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6754,	// (0x00024bdb) list_double_large_graphic_pane_g1_cp2

0x6767,	// (0x00024bee) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6767,	// (0x00024bee) list_double_large_graphic_pane_g2_cp2

0x51e3,	// (0x0002366a) list_double_large_graphic_pane_g3_cp2

0x6778,	// (0x00024bff) list_double_large_graphic_pane_g4_cp

0x6780,	// (0x00024c07) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6780,	// (0x00024c07) list_double_large_graphic_pane_t1_cp2

0x6797,	// (0x00024c1e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6797,	// (0x00024c1e) list_double_large_graphic_pane_t2_cp2

0x50d3,	// (0x0002355a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x50d3,	// (0x0002355a) list_double2_graphic_pane_g1_cp2

0x50e1,	// (0x00023568) list_double2_graphic_pane_g2_cp2_ParamLimits

0x50e1,	// (0x00023568) list_double2_graphic_pane_g2_cp2

0x50f2,	// (0x00023579) list_double2_graphic_pane_g3_cp2

0x50fc,	// (0x00023583) list_double2_graphic_pane_t1_cp2_ParamLimits

0x50fc,	// (0x00023583) list_double2_graphic_pane_t1_cp2

0x5112,	// (0x00023599) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5112,	// (0x00023599) list_double2_graphic_pane_t2_cp2

0x5124,	// (0x000235ab) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5124,	// (0x000235ab) list_single_number_heading_pane_g1_cp2

0x5130,	// (0x000235b7) list_single_number_heading_pane_g2_cp2

0x5138,	// (0x000235bf) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5138,	// (0x000235bf) list_single_number_heading_pane_t1_cp2

0x514e,	// (0x000235d5) list_single_number_heading_pane_t2_cp2_ParamLimits

0x514e,	// (0x000235d5) list_single_number_heading_pane_t2_cp2

0x5162,	// (0x000235e9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5162,	// (0x000235e9) list_single_number_heading_pane_t3_cp2

0x5124,	// (0x000235ab) list_single_heading_pane_g1_cp2_ParamLimits

0x5124,	// (0x000235ab) list_single_heading_pane_g1_cp2

0x5130,	// (0x000235b7) list_single_heading_pane_g2_cp2

0x5138,	// (0x000235bf) list_single_heading_pane_t1_cp2_ParamLimits

0x5138,	// (0x000235bf) list_single_heading_pane_t1_cp2

0x655c,	// (0x000249e3) list_single_heading_pane_t2_cp2_ParamLimits

0x655c,	// (0x000249e3) list_single_heading_pane_t2_cp2

0x64f6,	// (0x0002497d) list_double_graphic_pane_g1_cp2_ParamLimits

0x64f6,	// (0x0002497d) list_double_graphic_pane_g1_cp2

0x6502,	// (0x00024989) list_double_graphic_pane_g2_cp2_ParamLimits

0x6502,	// (0x00024989) list_double_graphic_pane_g2_cp2

0x6511,	// (0x00024998) list_double_graphic_pane_g3_cp2

0x6519,	// (0x000249a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x6519,	// (0x000249a0) list_double_graphic_pane_t1_cp2

0x652f,	// (0x000249b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x652f,	// (0x000249b6) list_double_graphic_pane_t2_cp2

0x51d7,	// (0x0002365e) list_double_number_pane_g1_cp2_ParamLimits

0x51d7,	// (0x0002365e) list_double_number_pane_g1_cp2

0x51e3,	// (0x0002366a) list_double_number_pane_g2_cp2

0x64ba,	// (0x00024941) list_double_number_pane_t1_cp2_ParamLimits

0x64ba,	// (0x00024941) list_double_number_pane_t1_cp2

0x64ce,	// (0x00024955) list_double_number_pane_t2_cp2_ParamLimits

0x64ce,	// (0x00024955) list_double_number_pane_t2_cp2

0x64e4,	// (0x0002496b) list_double_number_pane_t3_cp2_ParamLimits

0x64e4,	// (0x0002496b) list_double_number_pane_t3_cp2

0x6431,	// (0x000248b8) list_single_graphic_pane_g1_cp2_ParamLimits

0x6431,	// (0x000248b8) list_single_graphic_pane_g1_cp2

0x523b,	// (0x000236c2) list_single_graphic_pane_g2_cp2_ParamLimits

0x523b,	// (0x000236c2) list_single_graphic_pane_g2_cp2

0x5247,	// (0x000236ce) list_single_graphic_pane_g3_cp2

0x6407,	// (0x0002488e) list_single_graphic_pane_t1_cp2_ParamLimits

0x6407,	// (0x0002488e) list_single_graphic_pane_t1_cp2

0x523b,	// (0x000236c2) list_single_number_pane_g1_cp2_ParamLimits

0x523b,	// (0x000236c2) list_single_number_pane_g1_cp2

0x5247,	// (0x000236ce) list_single_number_pane_g2_cp2

0x6407,	// (0x0002488e) list_single_number_pane_t1_cp2_ParamLimits

0x6407,	// (0x0002488e) list_single_number_pane_t1_cp2

0x641d,	// (0x000248a4) list_single_number_pane_t2_cp2_ParamLimits

0x641d,	// (0x000248a4) list_single_number_pane_t2_cp2

0x5044,	// (0x000234cb) list_double2_pane_g1_cp2_ParamLimits

0x5044,	// (0x000234cb) list_double2_pane_g1_cp2

0x5055,	// (0x000234dc) list_double2_pane_g2_cp2

0x51af,	// (0x00023636) list_double2_pane_t1_cp2_ParamLimits

0x51af,	// (0x00023636) list_double2_pane_t1_cp2

0x51c5,	// (0x0002364c) list_double2_pane_t2_cp2_ParamLimits

0x51c5,	// (0x0002364c) list_double2_pane_t2_cp2

0x51d7,	// (0x0002365e) list_double_pane_g1_cp2_ParamLimits

0x51d7,	// (0x0002365e) list_double_pane_g1_cp2

0x51e3,	// (0x0002366a) list_double_pane_g2_cp2

0x51eb,	// (0x00023672) list_double_pane_t1_cp2_ParamLimits

0x51eb,	// (0x00023672) list_double_pane_t1_cp2

0x5201,	// (0x00023688) list_double_pane_t2_cp2_ParamLimits

0x5201,	// (0x00023688) list_double_pane_t2_cp2

0x522b,	// (0x000236b2) list_single_pane_cp2_g3

0x523b,	// (0x000236c2) list_single_pane_g1_cp2_ParamLimits

0x523b,	// (0x000236c2) list_single_pane_g1_cp2

0x5247,	// (0x000236ce) list_single_pane_g2_cp2

0x524f,	// (0x000236d6) list_single_pane_t1_cp2_ParamLimits

0x524f,	// (0x000236d6) list_single_pane_t1_cp2

0x5267,	// (0x000236ee) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5267,	// (0x000236ee) list_single_large_graphic_pane_g1_cp2

0x5275,	// (0x000236fc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5275,	// (0x000236fc) list_single_large_graphic_pane_g2_cp2

0x5281,	// (0x00023708) list_single_large_graphic_pane_g3_cp2

0x5289,	// (0x00023710) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5289,	// (0x00023710) list_single_large_graphic_pane_g4_cp1

0x52a3,	// (0x0002372a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x52a3,	// (0x0002372a) list_single_large_graphic_pane_t1_cp2

0x63d1,	// (0x00024858) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x63d1,	// (0x00024858) list_single_graphic_heading_pane_g1_cp2

0x639e,	// (0x00024825) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x639e,	// (0x00024825) list_single_graphic_heading_pane_g4_cp2

0x5247,	// (0x000236ce) list_single_graphic_heading_pane_g5_cp2

0x63dd,	// (0x00024864) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x63dd,	// (0x00024864) list_single_graphic_heading_pane_t1_cp2

0x63f3,	// (0x0002487a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x63f3,	// (0x0002487a) list_single_graphic_heading_pane_t2_cp2

0x6392,	// (0x00024819) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6392,	// (0x00024819) list_single_2graphic_pane_g1_cp2

0x639e,	// (0x00024825) list_single_2graphic_pane_g2_cp2_ParamLimits

0x639e,	// (0x00024825) list_single_2graphic_pane_g2_cp2

0x5247,	// (0x000236ce) list_single_2graphic_pane_g3_cp2

0x63af,	// (0x00024836) list_single_2graphic_pane_g4_cp2_ParamLimits

0x63af,	// (0x00024836) list_single_2graphic_pane_g4_cp2

0x63bb,	// (0x00024842) list_single_2graphic_pane_t1_cp2_ParamLimits

0x63bb,	// (0x00024842) list_single_2graphic_pane_t1_cp2

0x4210,	// (0x00022697) list_highlight_pane_g10_cp1

0x5f86,	// (0x0002440d) list_highlight_pane_g1_cp1

0x5f8e,	// (0x00024415) list_highlight_pane_g2_cp1

0x5f96,	// (0x0002441d) list_highlight_pane_g3_cp1

0x5f9e,	// (0x00024425) list_highlight_pane_g4_cp1

0x5fa6,	// (0x0002442d) list_highlight_pane_g5_cp1

0x5fae,	// (0x00024435) list_highlight_pane_g6_cp1

0x5fb6,	// (0x0002443d) list_highlight_pane_g7_cp1

0x5fbe,	// (0x00024445) list_highlight_pane_g8_cp1

0x5fc6,	// (0x0002444d) list_highlight_pane_g9_cp1

0xa001,	// (0x00028488) form_field_slider_pane_t3

0xa00f,	// (0x00028496) form_field_slider_pane_t4

0x5eba,	// (0x00024341) slider_form_pane_ParamLimits

0x5eba,	// (0x00024341) slider_form_pane

0x421a,	// (0x000226a1) control_abbreviations

0x421a,	// (0x000226a1) control_conventions

0x421a,	// (0x000226a1) control_definitions

0x421a,	// (0x000226a1) format_table_attribute

0x65a8,	// (0x00024a2f) bg_popup_preview_window_pane_g9

0x421a,	// (0x000226a1) format_table_data2

0x421a,	// (0x000226a1) format_table_data3

0x421a,	// (0x000226a1) format_table_data_example

0x0008,

0x421a,	// (0x000226a1) intro_purpose

0xf8f6,	// (0x0002dd7d) bg_popup_preview_window_pane_g

0x421a,	// (0x000226a1) texts_category

0x421a,	// (0x000226a1) texts_graphics

0x52b9,	// (0x00023740) text_digital

0x52c8,	// (0x0002374f) text_primary

0x52d7,	// (0x0002375e) text_primary_small

0x52e6,	// (0x0002376d) text_secondary

0x52f5,	// (0x0002377c) text_title

0x6a3b,	// (0x00024ec2) bg_passive_tab_pane_g1_cp3_srt

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp3_srt

0x6a32,	// (0x00024eb9) bg_passive_tab_pane_g3_cp3_srt

0x4276,	// (0x000226fd) bg_active_tab_pane_cp3_srt_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp3_srt

0x6a44,	// (0x00024ecb) tabs_4_active_pane_srt_g1

0xa5bf,	// (0x00028a46) tabs_4_active_pane_srt_t1_ParamLimits

0xa5bf,	// (0x00028a46) tabs_4_active_pane_srt_t1

0x6a3b,	// (0x00024ec2) bg_active_tab_pane_g1_cp3_copy1

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp3_copy1

0x6a32,	// (0x00024eb9) bg_active_tab_pane_g3_cp3_copy1

0x4276,	// (0x000226fd) tabs_2_long_active_pane_srt_ParamLimits

0x4276,	// (0x000226fd) tabs_2_long_active_pane_srt

0x4276,	// (0x000226fd) tabs_2_long_passive_pane_srt_ParamLimits

0x4276,	// (0x000226fd) tabs_2_long_passive_pane_srt

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp4_srt

0x6966,	// (0x00024ded) bg_passive_tab_pane_g1_cp4_srt

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp4_srt

0x695d,	// (0x00024de4) bg_passive_tab_pane_g3_cp4_srt

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp4_srt_ParamLimits

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp4_srt

0xa36b,	// (0x000287f2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa36b,	// (0x000287f2) tabs_2_long_active_pane_srt_t1

0x6966,	// (0x00024ded) bg_active_tab_pane_g1_cp4_srt

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp4_srt

0x695d,	// (0x00024de4) bg_active_tab_pane_g3_cp4_srt

0x4268,	// (0x000226ef) tabs_3_long_active_pane_srt_ParamLimits

0x4268,	// (0x000226ef) tabs_3_long_active_pane_srt

0x4268,	// (0x000226ef) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4268,	// (0x000226ef) tabs_3_long_passive_pane_cp_srt

0x4268,	// (0x000226ef) tabs_3_long_passive_pane_srt_ParamLimits

0x4268,	// (0x000226ef) tabs_3_long_passive_pane_srt

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp5_srt

0x4ffd,	// (0x00023484) bg_passive_tab_pane_g1_cp5_srt

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp5_srt

0x4ff4,	// (0x0002347b) bg_passive_tab_pane_g3_cp5_srt

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp5_srt_ParamLimits

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp5_srt

0xa359,	// (0x000287e0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa359,	// (0x000287e0) tabs_3_long_active_pane_srt_t1

0x4ffd,	// (0x00023484) bg_active_tab_pane_g1_cp5_srt

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp5_srt

0x4ff4,	// (0x0002347b) bg_active_tab_pane_g3_cp5_srt

0x694f,	// (0x00024dd6) navi_text_pane_srt_t1

0x6947,	// (0x00024dce) navi_icon_pane_srt_g1

0x53f3,	// (0x0002387a) midp_editing_number_pane_srt

0x5304,	// (0x0002378b) midp_ticker_pane_srt

0x53fb,	// (0x00023882) midp_ticker_pane_srt_g1

0x5403,	// (0x0002388a) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0002dc0c) midp_ticker_pane_srt_g

0x540b,	// (0x00023892) midp_ticker_pane_srt_t1

0x6938,	// (0x00024dbf) midp_editing_number_pane_t1_copy1

0x92ea,	// (0x00027771) listscroll_midp_pane

0x92ea,	// (0x00027771) midp_form_pane

0x530c,	// (0x00023793) midp_info_popup_window_ParamLimits

0x530c,	// (0x00023793) midp_info_popup_window

0x4975,	// (0x00022dfc) bg_popup_sub_pane_cp50_ParamLimits

0x4975,	// (0x00022dfc) bg_popup_sub_pane_cp50

0x5bd7,	// (0x0002405e) listscroll_midp_info_pane_ParamLimits

0x5bd7,	// (0x0002405e) listscroll_midp_info_pane

0x5bbf,	// (0x00024046) listscroll_form_midp_pane_ParamLimits

0x5bbf,	// (0x00024046) listscroll_form_midp_pane

0x5bcb,	// (0x00024052) scroll_bar_cp050

0x9fe9,	// (0x00028470) list_midp_pane

0x7312,	// (0x00025799) signal_pane_g2_cp

0x5af1,	// (0x00023f78) listscroll_midp_info_pane_t1_ParamLimits

0x5af1,	// (0x00023f78) listscroll_midp_info_pane_t1

0x5b09,	// (0x00023f90) listscroll_midp_info_pane_t2_ParamLimits

0x5b09,	// (0x00023f90) listscroll_midp_info_pane_t2

0x5b47,	// (0x00023fce) listscroll_midp_info_pane_t3_ParamLimits

0x5b47,	// (0x00023fce) listscroll_midp_info_pane_t3

0x5b81,	// (0x00024008) listscroll_midp_info_pane_t4_ParamLimits

0x5b81,	// (0x00024008) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0002dcb8) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0002dcb8) listscroll_midp_info_pane_t

0x49dc,	// (0x00022e63) scroll_pane_cp21

0x5a95,	// (0x00023f1c) form_midp_field_choice_group_pane

0x5a9e,	// (0x00023f25) form_midp_field_text_pane

0x5ad7,	// (0x00023f5e) form_midp_field_time_pane

0x5adf,	// (0x00023f66) form_midp_gauge_slider_pane

0x5ae8,	// (0x00023f6f) form_midp_gauge_wait_pane

0x421a,	// (0x000226a1) form_midp_image_pane

0xe677,	// (0x0002cafe) list_single_midp_pane_ParamLimits

0xe677,	// (0x0002cafe) list_single_midp_pane

0x9faa,	// (0x00028431) form_midp_field_text_pane_t1

0x593c,	// (0x00023dc3) input_focus_pane_cp050

0x5a84,	// (0x00023f0b) list_midp_form_text_pane

0x5a53,	// (0x00023eda) form_midp_field_choice_group_pane_t1

0x5a61,	// (0x00023ee8) input_focus_pane_cp051

0x5a75,	// (0x00023efc) list_midp_choice_pane

0x421a,	// (0x000226a1) status_idle_pane

0x5a37,	// (0x00023ebe) form_midp_field_time_pane_t1

0x4210,	// (0x00022697) wait_anim_pane_g2_copy1

0x5a45,	// (0x00023ecc) form_midp_field_time_pane_t2

0x0001,

0x5365,	// (0x000237ec) aid_navinavi_width_2_pane

0xf82c,	// (0x0002dcb3) form_midp_field_time_pane_t

0x421a,	// (0x000226a1) input_focus_pane_cp052

0x421a,	// (0x000226a1) bg_input_focus_pane_cp040

0x5a13,	// (0x00023e9a) form_midp_gauge_slider_pane_t1

0x5a21,	// (0x00023ea8) form_midp_gauge_slider_pane_t2

0x9f8e,	// (0x00028415) form_midp_gauge_slider_pane_t3

0x9f9c,	// (0x00028423) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0002dcaa) form_midp_gauge_slider_pane_t

0x5a2f,	// (0x00023eb6) form_midp_slider_pane

0x4276,	// (0x000226fd) bg_input_focus_pane_cp041_ParamLimits

0x4276,	// (0x000226fd) bg_input_focus_pane_cp041

0x59e0,	// (0x00023e67) form_midp_gauge_wait_pane_t1_ParamLimits

0x59e0,	// (0x00023e67) form_midp_gauge_wait_pane_t1

0x59f2,	// (0x00023e79) form_midp_gauge_wait_pane_t2_ParamLimits

0x59f2,	// (0x00023e79) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0002dca5) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0002dca5) form_midp_gauge_wait_pane_t

0x5a04,	// (0x00023e8b) form_midp_wait_pane_ParamLimits

0x5a04,	// (0x00023e8b) form_midp_wait_pane

0x59aa,	// (0x00023e31) form_midp_image_pane_g1

0x59b3,	// (0x00023e3a) form_midp_image_pane_t1

0x59c2,	// (0x00023e49) form_midp_image_pane_t2

0x59d1,	// (0x00023e58) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0002dc9e) form_midp_image_pane_t

0x59a1,	// (0x00023e28) list_single_midp_pane_g1

0xe668,	// (0x0002caef) list_single_midp_pane_t1

0x9f5e,	// (0x000283e5) list_midp_form_item_pane_ParamLimits

0x9f5e,	// (0x000283e5) list_midp_form_item_pane

0x531f,	// (0x000237a6) list_midp_form_item_pane_t1

0x532e,	// (0x000237b5) midp_ticker_pane_g1

0x533a,	// (0x000237c1) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0002dbf2) midp_ticker_pane_g

0x939f,	// (0x00027826) midp_ticker_pane_t1

0xa552,	// (0x000289d9) midp_editing_number_pane_t1

0x69c6,	// (0x00024e4d) midp_editing_number_pane

0x69d5,	// (0x00024e5c) midp_ticker_pane

0x6928,	// (0x00024daf) ai_message_heading_pane

0x421a,	// (0x000226a1) bg_popup_window_pane_cp14

0x6930,	// (0x00024db7) listscroll_ai_message_pane

0x68b2,	// (0x00024d39) ai_message_heading_pane_g1_ParamLimits

0x68b2,	// (0x00024d39) ai_message_heading_pane_g1

0x68be,	// (0x00024d45) ai_message_heading_pane_g2_ParamLimits

0x68be,	// (0x00024d45) ai_message_heading_pane_g2

0x68ca,	// (0x00024d51) ai_message_heading_pane_g3_ParamLimits

0x68ca,	// (0x00024d51) ai_message_heading_pane_g3

0x68d6,	// (0x00024d5d) ai_message_heading_pane_g4_ParamLimits

0x68d6,	// (0x00024d5d) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0002dddf) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0002dddf) ai_message_heading_pane_g

0x68e2,	// (0x00024d69) ai_message_heading_pane_t1_ParamLimits

0x68e2,	// (0x00024d69) ai_message_heading_pane_t1

0x68fc,	// (0x00024d83) ai_message_heading_pane_t2_ParamLimits

0x68fc,	// (0x00024d83) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0002dde8) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0002dde8) ai_message_heading_pane_t

0x690e,	// (0x00024d95) bg_popup_heading_pane_cp1_ParamLimits

0x690e,	// (0x00024d95) bg_popup_heading_pane_cp1

0x68a0,	// (0x00024d27) list_ai_message_pane_ParamLimits

0x68a0,	// (0x00024d27) list_ai_message_pane

0x49dc,	// (0x00022e63) scroll_pane_cp10

0x683c,	// (0x00024cc3) list_ai_message_pane_g1

0x6844,	// (0x00024ccb) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0002ddbc) list_ai_message_pane_g

0x684c,	// (0x00024cd3) list_ai_message_pane_t1_ParamLimits

0x684c,	// (0x00024cd3) list_ai_message_pane_t1

0x6861,	// (0x00024ce8) list_ai_message_pane_t2_ParamLimits

0x6861,	// (0x00024ce8) list_ai_message_pane_t2

0x6876,	// (0x00024cfd) list_ai_message_pane_t3_ParamLimits

0x6876,	// (0x00024cfd) list_ai_message_pane_t3

0x688b,	// (0x00024d12) list_ai_message_pane_t4_ParamLimits

0x688b,	// (0x00024d12) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0002ddc1) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0002ddc1) list_ai_message_pane_t

0xa2f3,	// (0x0002877a) cell_ai_soft_ind_pane_ParamLimits

0xa2f3,	// (0x0002877a) cell_ai_soft_ind_pane

0x5346,	// (0x000237cd) cell_ai_soft_ind_pane_g1_ParamLimits

0x5346,	// (0x000237cd) cell_ai_soft_ind_pane_g1

0x421a,	// (0x000226a1) grid_highlight_cp1

0x5353,	// (0x000237da) text_secondary_cp56_ParamLimits

0x5353,	// (0x000237da) text_secondary_cp56

0x6811,	// (0x00024c98) example_general_pane_ParamLimits

0x6811,	// (0x00024c98) example_general_pane

0x681d,	// (0x00024ca4) example_parent_pane_g1_ParamLimits

0x681d,	// (0x00024ca4) example_parent_pane_g1

0x6829,	// (0x00024cb0) example_parent_pane_t1_ParamLimits

0x6829,	// (0x00024cb0) example_parent_pane_t1

0x98c7,	// (0x00027d4e) popup_preview_text_window_ParamLimits

0x98c7,	// (0x00027d4e) popup_preview_text_window

0x5233,	// (0x000236ba) list_single_pane_cp2_g4

0x4445,	// (0x000228cc) bg_popup_preview_window_pane_ParamLimits

0x4445,	// (0x000228cc) bg_popup_preview_window_pane

0x65b0,	// (0x00024a37) popup_preview_text_window_t1_ParamLimits

0x65b0,	// (0x00024a37) popup_preview_text_window_t1

0x65ce,	// (0x00024a55) popup_preview_text_window_t2_ParamLimits

0x65ce,	// (0x00024a55) popup_preview_text_window_t2

0x6617,	// (0x00024a9e) popup_preview_text_window_t3_ParamLimits

0x6617,	// (0x00024a9e) popup_preview_text_window_t3

0x665c,	// (0x00024ae3) popup_preview_text_window_t4_ParamLimits

0x665c,	// (0x00024ae3) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0002dd90) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0002dd90) popup_preview_text_window_t

0x66da,	// (0x00024b61) scroll_pane_cp11

0x584c,	// (0x00023cd3) bg_popup_preview_window_pane_g1

0x6570,	// (0x000249f7) bg_popup_preview_window_pane_g2

0x6578,	// (0x000249ff) bg_popup_preview_window_pane_g3

0x6580,	// (0x00024a07) bg_popup_preview_window_pane_g4

0x6588,	// (0x00024a0f) bg_popup_preview_window_pane_g5

0x6590,	// (0x00024a17) bg_popup_preview_window_pane_g6

0x6598,	// (0x00024a1f) bg_popup_preview_window_pane_g7

0x65a0,	// (0x00024a27) bg_popup_preview_window_pane_g8

0x8628,	// (0x00026aaf) aid_popup_width_pane

0x98a5,	// (0x00027d2c) popup_midp_note_alarm_window_ParamLimits

0x98a5,	// (0x00027d2c) popup_midp_note_alarm_window

0x48b1,	// (0x00022d38) data_form_pane_ParamLimits

0xe3cf,	// (0x0002c856) form_field_data_pane_g1

0xe3d9,	// (0x0002c860) form_field_data_pane_t1_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_ParamLimits

0x48cb,	// (0x00022d52) data_form_wide_pane_ParamLimits

0xe3f3,	// (0x0002c87a) form_field_data_wide_pane_g1

0xe3ff,	// (0x0002c886) form_field_data_wide_pane_t1_ParamLimits

0x4638,	// (0x00022abf) input_focus_pane_cp6_ParamLimits

0x8d5d,	// (0x000271e4) input_popup_find_pane_g1_ParamLimits

0x8d5d,	// (0x000271e4) input_popup_find_pane_g1

0x8eb6,	// (0x0002733d) aid_navi_side_left_pane

0x8ecb,	// (0x00027352) aid_navi_side_right_pane

0x6063,	// (0x000244ea) bg_popup_window_pane_cp30_ParamLimits

0x6063,	// (0x000244ea) bg_popup_window_pane_cp30

0x60dd,	// (0x00024564) popup_midp_note_alarm_window_g1_ParamLimits

0x60dd,	// (0x00024564) popup_midp_note_alarm_window_g1

0x610d,	// (0x00024594) popup_midp_note_alarm_window_t1_ParamLimits

0x610d,	// (0x00024594) popup_midp_note_alarm_window_t1

0x61ae,	// (0x00024635) popup_midp_note_alarm_window_t2_ParamLimits

0x61ae,	// (0x00024635) popup_midp_note_alarm_window_t2

0x625c,	// (0x000246e3) popup_midp_note_alarm_window_t3_ParamLimits

0x625c,	// (0x000246e3) popup_midp_note_alarm_window_t3

0x6284,	// (0x0002470b) popup_midp_note_alarm_window_t4_ParamLimits

0x6284,	// (0x0002470b) popup_midp_note_alarm_window_t4

0x62b6,	// (0x0002473d) popup_midp_note_alarm_window_t5_ParamLimits

0x62b6,	// (0x0002473d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0002dd2d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0002dd2d) popup_midp_note_alarm_window_t

0x6362,	// (0x000247e9) wait_bar_pane_cp1_ParamLimits

0x6362,	// (0x000247e9) wait_bar_pane_cp1

0x421a,	// (0x000226a1) wait_anim_pane_copy1

0x421a,	// (0x000226a1) wait_border_pane_copy1

0x5d7b,	// (0x00024202) wait_border_pane_g1_copy1

0xe419,	// (0x0002c8a0) form_field_popup_pane_g1

0xe421,	// (0x0002c8a8) form_field_popup_pane_t1_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_cp7_ParamLimits

0x48f7,	// (0x00022d7e) list_form_pane_ParamLimits

0xe43b,	// (0x0002c8c2) form_field_popup_wide_pane_g1

0xe443,	// (0x0002c8ca) form_field_popup_wide_pane_t1_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_cp8_ParamLimits

0x4903,	// (0x00022d8a) list_form_wide_pane_ParamLimits

0x6a77,	// (0x00024efe) aid_size_cell_graphic_pane

0xe4c8,	// (0x0002c94f) data_form_pane_t1_ParamLimits

0xe6c6,	// (0x0002cb4d) data_form_wide_pane_t1_ParamLimits

0x9b11,	// (0x00027f98) bg_status_flat_pane

0x8a21,	// (0x00026ea8) title_pane_t1_ParamLimits

0x4230,	// (0x000226b7) title_pane_t2_ParamLimits

0x4256,	// (0x000226dd) title_pane_t3_ParamLimits

0xf573,	// (0x0002d9fa) title_pane_t_ParamLimits

0x4d8a,	// (0x00023211) level_1_signal_ParamLimits

0x4d97,	// (0x0002321e) level_2_signal_ParamLimits

0x4da4,	// (0x0002322b) level_3_signal_ParamLimits

0x4db1,	// (0x00023238) level_4_signal_ParamLimits

0x4dbe,	// (0x00023245) level_5_signal_ParamLimits

0x4dcb,	// (0x00023252) level_6_signal_ParamLimits

0x4dd8,	// (0x0002325f) level_7_signal_ParamLimits

0x4d8a,	// (0x00023211) level_1_battery_ParamLimits

0x4d97,	// (0x0002321e) level_2_battery_ParamLimits

0x4da4,	// (0x0002322b) level_3_battery_ParamLimits

0x4db1,	// (0x00023238) level_4_battery_ParamLimits

0x4dbe,	// (0x00023245) level_5_battery_ParamLimits

0x4dcb,	// (0x00023252) level_6_battery_ParamLimits

0x4dd8,	// (0x0002325f) level_7_battery_ParamLimits

0x5f86,	// (0x0002440d) bg_status_flat_pane_g1

0x5f8e,	// (0x00024415) bg_status_flat_pane_g2

0x5f96,	// (0x0002441d) bg_status_flat_pane_g3

0x5f9e,	// (0x00024425) bg_status_flat_pane_g4

0x5fa6,	// (0x0002442d) bg_status_flat_pane_g5

0x5fae,	// (0x00024435) bg_status_flat_pane_g6

0x5fb6,	// (0x0002443d) bg_status_flat_pane_g7

0x8a91,	// (0x00026f18) tabs_3_active_pane_t1_ParamLimits

0x8a91,	// (0x00026f18) tabs_3_passive_pane_t1_ParamLimits

0x8aab,	// (0x00026f32) tabs_4_active_pane_t1_ParamLimits

0x8aab,	// (0x00026f32) tabs_4_1_passive_pane_t1_ParamLimits

0x8d73,	// (0x000271fa) tabs_2_active_pane_t1_ParamLimits

0x8d73,	// (0x000271fa) tabs_2_passive_pane_t1_ParamLimits

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp4_ParamLimits

0x8d85,	// (0x0002720c) tabs_2_long_active_pane_t1_ParamLimits

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp4_ParamLimits

0x9e19,	// (0x000282a0) list_single_midp_graphic_pane_t1_ParamLimits

0x55fe,	// (0x00023a85) bg_active_tab_pane_cp5_ParamLimits

0x8da4,	// (0x0002722b) tabs_3_long_active_pane_t1_ParamLimits

0x8d98,	// (0x0002721f) bg_passive_tab_pane_cp5_ParamLimits

0x9e19,	// (0x000282a0) list_single_midp_graphic_pane_t1

0x9b11,	// (0x00027f98) bg_status_flat_pane_ParamLimits

0x571f,	// (0x00023ba6) indicator_pane_cp2_ParamLimits

0x571f,	// (0x00023ba6) indicator_pane_cp2

0x9c54,	// (0x000280db) navi_pane_srt_ParamLimits

0x9c54,	// (0x000280db) navi_pane_srt

0x5747,	// (0x00023bce) popup_clock_digital_analogue_window_cp1

0x42ba,	// (0x00022741) indicator_pane_t1

0x5304,	// (0x0002378b) copy_highlight_pane

0x5304,	// (0x0002378b) cursor_graphics_pane

0x5304,	// (0x0002378b) graphic_within_text_pane

0x5304,	// (0x0002378b) link_highlight_pane

0x669d,	// (0x00024b24) popup_preview_text_window_t5_ParamLimits

0x669d,	// (0x00024b24) popup_preview_text_window_t5

0x536d,	// (0x000237f4) cursor_digital_pane

0x536d,	// (0x000237f4) cursor_primary_pane

0x537e,	// (0x00023805) cursor_primary_small_pane

0x5386,	// (0x0002380d) cursor_secondary_pane

0x538e,	// (0x00023815) cursor_title_pane

0x536d,	// (0x000237f4) link_highlight_digital_pane

0x5375,	// (0x000237fc) link_highlight_primary_pane

0x537e,	// (0x00023805) link_highlight_primary_small_pane

0x5386,	// (0x0002380d) link_highlight_secondary_pane

0x538e,	// (0x00023815) link_highlight_title_pane

0x536d,	// (0x000237f4) copy_highlight_digital_pane

0x536d,	// (0x000237f4) copy_highlight_primary_pane

0x537e,	// (0x00023805) copy_highlight_primary_small_pane

0x5386,	// (0x0002380d) copy_highlight_secondary_pane

0x538e,	// (0x00023815) copy_highlight_title_pane

0x5386,	// (0x0002380d) graphic_text_digital_pane

0x6006,	// (0x0002448d) graphic_text_primary_pane

0x600f,	// (0x00024496) graphic_text_primary_small_pane

0x537e,	// (0x00023805) graphic_text_secondary_pane

0x536d,	// (0x000237f4) graphic_text_title_pane

0x93b1,	// (0x00027838) cursor_primary_pane_g1

0x5ff8,	// (0x0002447f) cursor_text_primary_t1

0xa031,	// (0x000284b8) cursor_primary_small_pane_g1

0x5fea,	// (0x00024471) cursor_text_primary_small_t1

0xa027,	// (0x000284ae) cursor_primary_small_pane_g1_copy1

0x5fdc,	// (0x00024463) cursor_text_primary_small_t1_copy1

0x5fce,	// (0x00024455) cursor_text_title_t1

0xa01d,	// (0x000284a4) cursor_title_pane_g1

0x93b1,	// (0x00027838) cursor_digital_pane_g1

0x5396,	// (0x0002381d) cursor_text_digital_t1

0x5f6f,	// (0x000243f6) link_highlight_primary_pane_g1

0x5f77,	// (0x000243fe) link_highlight_primary_pane_t1

0x53a4,	// (0x0002382b) link_highlight_primary_small_pane_g1

0x53ac,	// (0x00023833) link_highlight_primary_small_pane_t1

0x53a4,	// (0x0002382b) link_highlight_secondary_pane_g1

0x53bb,	// (0x00023842) link_highlight_secondary_pane_t1

0x5ee3,	// (0x0002436a) link_highlight_title_pane_g1

0x5eeb,	// (0x00024372) link_highlight_title_pane_t1

0x5ecc,	// (0x00024353) link_highlight_digital_pane_g1

0x5ed4,	// (0x0002435b) link_highlight_digital_pane_t1

0x5dc0,	// (0x00024247) copy_highlight_primary_pane_g1

0x5dc8,	// (0x0002424f) copy_highlight_primary_pane_t1

0x5d9a,	// (0x00024221) copy_highlight_primary_small_pane_g1

0x5db1,	// (0x00024238) copy_highlight_primary_small_pane_t1

0x53ca,	// (0x00023851) copy_highlight_secondary_pane_g1

0x53d2,	// (0x00023859) copy_highlight_secondary_pane_t1

0x5d9a,	// (0x00024221) copy_highlight_title_pane_g1

0x5da2,	// (0x00024229) copy_highlight_title_pane_t1

0x5dc0,	// (0x00024247) copy_highlight_digital_pane_g1

0x6c01,	// (0x00025088) copy_highlight_digital_pane_t1

0x6b55,	// (0x00024fdc) graphic_text_primary_pane_g1

0x6be5,	// (0x0002506c) graphic_text_primary_pane_t1

0x6bf3,	// (0x0002507a) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0002de5c) graphic_text_primary_pane_t

0x6bc1,	// (0x00025048) graphic_text_primary_small_pane_g1

0x6bc9,	// (0x00025050) graphic_text_primary_small_pane_t1

0x6bd7,	// (0x0002505e) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0002de57) graphic_text_primary_small_pane_t

0x6b9d,	// (0x00025024) graphic_text_secondary_pane_g1

0x6ba5,	// (0x0002502c) graphic_text_secondary_pane_t1

0x6bb3,	// (0x0002503a) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0002de52) graphic_text_secondary_pane_t

0x6b79,	// (0x00025000) graphic_text_title_pane_g1

0x6b81,	// (0x00025008) graphic_text_title_pane_t1

0x6b8f,	// (0x00025016) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0002de4d) graphic_text_title_pane_t

0x6b55,	// (0x00024fdc) graphic_text_digital_pane_g1

0x6b5d,	// (0x00024fe4) graphic_text_digital_pane_t1

0x6b6b,	// (0x00024ff2) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0002de48) graphic_text_digital_pane_t

0x4276,	// (0x000226fd) navi_icon_pane_srt_ParamLimits

0x4276,	// (0x000226fd) navi_icon_pane_srt

0x421a,	// (0x000226a1) navi_midp_pane_srt

0x421a,	// (0x000226a1) navi_navi_pane_srt

0x4276,	// (0x000226fd) navi_text_pane_srt_ParamLimits

0x4276,	// (0x000226fd) navi_text_pane_srt

0x6b20,	// (0x00024fa7) navi_navi_icon_text_pane_srt

0x6b3a,	// (0x00024fc1) navi_navi_pane_srt_g1_ParamLimits

0x6b3a,	// (0x00024fc1) navi_navi_pane_srt_g1

0x6b28,	// (0x00024faf) navi_navi_pane_srt_g2_ParamLimits

0x6b28,	// (0x00024faf) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0002de43) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0002de43) navi_navi_pane_srt_g

0x6b4c,	// (0x00024fd3) navi_navi_tabs_pane_srt

0x6b20,	// (0x00024fa7) navi_navi_text_pane_srt

0x6b20,	// (0x00024fa7) navi_navi_volume_pane_srt

0x6b11,	// (0x00024f98) navi_navi_text_pane_srt_t1

0xa6e3,	// (0x00028b6a) navi_navi_volume_pane_srt_g1

0xa6eb,	// (0x00028b72) volume_small_pane_srt_ParamLimits

0xa6eb,	// (0x00028b72) volume_small_pane_srt

0x93bb,	// (0x00027842) volume_small_pane_srt_g1_ParamLimits

0x93bb,	// (0x00027842) volume_small_pane_srt_g1

0x93cb,	// (0x00027852) volume_small_pane_srt_g2_ParamLimits

0x93cb,	// (0x00027852) volume_small_pane_srt_g2

0x93dc,	// (0x00027863) volume_small_pane_srt_g3_ParamLimits

0x93dc,	// (0x00027863) volume_small_pane_srt_g3

0x93ed,	// (0x00027874) volume_small_pane_srt_g4_ParamLimits

0x93ed,	// (0x00027874) volume_small_pane_srt_g4

0x93fe,	// (0x00027885) volume_small_pane_srt_g5_ParamLimits

0x93fe,	// (0x00027885) volume_small_pane_srt_g5

0x940f,	// (0x00027896) volume_small_pane_srt_g6_ParamLimits

0x940f,	// (0x00027896) volume_small_pane_srt_g6

0x9420,	// (0x000278a7) volume_small_pane_srt_g7_ParamLimits

0x9420,	// (0x000278a7) volume_small_pane_srt_g7

0x9431,	// (0x000278b8) volume_small_pane_srt_g8_ParamLimits

0x9431,	// (0x000278b8) volume_small_pane_srt_g8

0x9442,	// (0x000278c9) volume_small_pane_srt_g9_ParamLimits

0x9442,	// (0x000278c9) volume_small_pane_srt_g9

0x9453,	// (0x000278da) volume_small_pane_srt_g10_ParamLimits

0x9453,	// (0x000278da) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0002dbf7) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0002dbf7) volume_small_pane_srt_g

0x44ee,	// (0x00022975) query_popup_data_pane_cp2

0x6af7,	// (0x00024f7e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6af7,	// (0x00024f7e) navi_navi_icon_text_pane_srt_t1

0x6006,	// (0x0002448d) navi_tabs_2_long_pane_srt

0x6006,	// (0x0002448d) navi_tabs_2_pane_srt

0x6006,	// (0x0002448d) navi_tabs_3_long_pane_srt

0x6006,	// (0x0002448d) navi_tabs_3_pane_srt

0x6006,	// (0x0002448d) navi_tabs_4_pane_srt

0xa6c3,	// (0x00028b4a) tabs_2_active_pane_srt_ParamLimits

0xa6c3,	// (0x00028b4a) tabs_2_active_pane_srt

0xa6d3,	// (0x00028b5a) tabs_2_passive_pane_srt_ParamLimits

0xa6d3,	// (0x00028b5a) tabs_2_passive_pane_srt

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp1_srt

0x6ade,	// (0x00024f65) bg_passive_tab_pane_g1_cp1_srt

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp1_srt

0x6ad5,	// (0x00024f5c) bg_passive_tab_pane_g3_cp1_srt

0x4276,	// (0x000226fd) bg_active_tab_pane_cp1_srt_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp1_srt

0x6ae7,	// (0x00024f6e) tabs_2_active_pane_srt_g1

0xa6b1,	// (0x00028b38) tabs_2_active_pane_srt_t1_ParamLimits

0xa6b1,	// (0x00028b38) tabs_2_active_pane_srt_t1

0x6ade,	// (0x00024f65) bg_active_tab_pane_g1_cp1_srt

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp1_srt

0x6ad5,	// (0x00024f5c) bg_active_tab_pane_g3_cp1_srt

0xa67e,	// (0x00028b05) tabs_3_active_pane_srt_ParamLimits

0xa67e,	// (0x00028b05) tabs_3_active_pane_srt

0xa68f,	// (0x00028b16) tabs_3_passive_pane_cp_srt_ParamLimits

0xa68f,	// (0x00028b16) tabs_3_passive_pane_cp_srt

0xa6a0,	// (0x00028b27) tabs_3_passive_pane_srt_ParamLimits

0xa6a0,	// (0x00028b27) tabs_3_passive_pane_srt

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4a14,	// (0x00022e9b) bg_passive_tab_pane_cp2_srt

0x53ea,	// (0x00023871) bg_passive_tab_pane_g1_cp2_srt

0x4fad,	// (0x00023434) bg_passive_tab_pane_g2_cp2_srt

0x53e1,	// (0x00023868) bg_passive_tab_pane_g3_cp2_srt

0x4276,	// (0x000226fd) bg_active_tab_pane_cp2_srt_ParamLimits

0x4276,	// (0x000226fd) bg_active_tab_pane_cp2_srt

0x6acd,	// (0x00024f54) tabs_3_active_pane_srt_g1

0xa66c,	// (0x00028af3) tabs_3_active_pane_srt_t1_ParamLimits

0xa66c,	// (0x00028af3) tabs_3_active_pane_srt_t1

0x53ea,	// (0x00023871) bg_active_tab_pane_g1_cp2_srt

0x4fad,	// (0x00023434) bg_active_tab_pane_g2_cp2_srt

0x53e1,	// (0x00023868) bg_active_tab_pane_g3_cp2_srt

0xa624,	// (0x00028aab) tabs_4_active_pane_srt_ParamLimits

0xa624,	// (0x00028aab) tabs_4_active_pane_srt

0xa636,	// (0x00028abd) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa636,	// (0x00028abd) tabs_4_passive_pane_cp2_srt

0x550e,	// (0x00023995) aid_size_cell_toolbar

0x8d98,	// (0x0002721f) main_idle_act_pane_ParamLimits

0x55d8,	// (0x00023a5f) popup_large_graphic_colour_window_ParamLimits

0x9a19,	// (0x00027ea0) popup_toolbar_window_ParamLimits

0x9a19,	// (0x00027ea0) popup_toolbar_window

0xe72c,	// (0x0002cbb3) list_single_graphic_2heading_pane_ParamLimits

0xe72c,	// (0x0002cbb3) list_single_graphic_2heading_pane

0x4bbe,	// (0x00023045) aid_size_cell_apps_grid_lsc_pane

0x4bd0,	// (0x00023057) aid_size_cell_apps_grid_prt_pane

0x4a14,	// (0x00022e9b) bg_wml_button_pane_cp1_ParamLimits

0x4a14,	// (0x00022e9b) bg_wml_button_pane_cp1

0x9faa,	// (0x00028431) form_midp_field_text_pane_t1_ParamLimits

0x593c,	// (0x00023dc3) input_focus_pane_cp050_ParamLimits

0x5a84,	// (0x00023f0b) list_midp_form_text_pane_ParamLimits

0x5a61,	// (0x00023ee8) input_focus_pane_cp051_ParamLimits

0x5a75,	// (0x00023efc) list_midp_choice_pane_ParamLimits

0x9ef8,	// (0x0002837f) list_single_2graphic_pane_cp3_ParamLimits

0x9ef8,	// (0x0002837f) list_single_2graphic_pane_cp3

0x9f24,	// (0x000283ab) list_single_midp_graphic_pane_ParamLimits

0x9f24,	// (0x000283ab) list_single_midp_graphic_pane

0x8594,	// (0x00026a1b) list_single_graphic_2heading_pane_g1_ParamLimits

0x8594,	// (0x00026a1b) list_single_graphic_2heading_pane_g1

0x85a0,	// (0x00026a27) list_single_graphic_2heading_pane_g4_ParamLimits

0x85a0,	// (0x00026a27) list_single_graphic_2heading_pane_g4

0x85ac,	// (0x00026a33) list_single_graphic_2heading_pane_g5_ParamLimits

0x85ac,	// (0x00026a33) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0002dc4a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0002dc4a) list_single_graphic_2heading_pane_g

0x85b8,	// (0x00026a3f) list_single_graphic_2heading_pane_t1_ParamLimits

0x85b8,	// (0x00026a3f) list_single_graphic_2heading_pane_t1

0x85cc,	// (0x00026a53) list_single_graphic_2heading_pane_t2_ParamLimits

0x85cc,	// (0x00026a53) list_single_graphic_2heading_pane_t2

0x85e8,	// (0x00026a6f) list_single_graphic_2heading_pane_t3_ParamLimits

0x85e8,	// (0x00026a6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0002dc51) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0002dc51) list_single_graphic_2heading_pane_t

0x578a,	// (0x00023c11) bg_popup_sub_pane_cp2

0x57b4,	// (0x00023c3b) grid_toobar_pane

0x9d8a,	// (0x00028211) cell_toolbar_pane_ParamLimits

0x9d8a,	// (0x00028211) cell_toolbar_pane

0x57f0,	// (0x00023c77) cell_toolbar_pane_g1_ParamLimits

0x57f0,	// (0x00023c77) cell_toolbar_pane_g1

0x5804,	// (0x00023c8b) cell_toolbar_pane_g2_ParamLimits

0x5804,	// (0x00023c8b) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0002dc5f) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0002dc5f) cell_toolbar_pane_g

0x5826,	// (0x00023cad) grid_highlight_pane_cp2_ParamLimits

0x5826,	// (0x00023cad) grid_highlight_pane_cp2

0x5840,	// (0x00023cc7) toolbar_button_pane

0x584c,	// (0x00023cd3) toolbar_button_pane_g1

0x585c,	// (0x00023ce3) toolbar_button_pane_g2

0x5854,	// (0x00023cdb) toolbar_button_pane_g3

0x586c,	// (0x00023cf3) toolbar_button_pane_g4

0x5864,	// (0x00023ceb) toolbar_button_pane_g5

0x5874,	// (0x00023cfb) toolbar_button_pane_g6

0x587c,	// (0x00023d03) toolbar_button_pane_g7

0x588c,	// (0x00023d13) toolbar_button_pane_g8

0x5884,	// (0x00023d0b) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0002dc64) toolbar_button_pane_g

0x9dc2,	// (0x00028249) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9dc2,	// (0x00028249) list_single_2graphic_pane_g1_cp3

0x9dce,	// (0x00028255) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9dce,	// (0x00028255) list_single_2graphic_pane_g2_cp3

0x9ddf,	// (0x00028266) list_single_2graphic_pane_g3_cp3

0x9de7,	// (0x0002826e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9de7,	// (0x0002826e) list_single_2graphic_pane_g4_cp3

0x9df3,	// (0x0002827a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9df3,	// (0x0002827a) list_single_2graphic_pane_t1_cp3

0x9e0d,	// (0x00028294) list_single_midp_graphic_pane_g2_ParamLimits

0x9e0d,	// (0x00028294) list_single_midp_graphic_pane_g2

0x5516,	// (0x0002399d) aid_zoom_text_primary

0xe5fc,	// (0x0002ca83) aid_zoom_text_secondary

0x549e,	// (0x00023925) status_small_pane_g7_ParamLimits

0x549e,	// (0x00023925) status_small_pane_g7

0x54c1,	// (0x00023948) status_small_pane_t1_ParamLimits

0x8a04,	// (0x00026e8b) title_pane_g2

0x0003,

0xf56a,	// (0x0002d9f1) title_pane_g

0x8c5e,	// (0x000270e5) aid_size_cell_colour_1_pane_ParamLimits

0x8c5e,	// (0x000270e5) aid_size_cell_colour_1_pane

0x8c72,	// (0x000270f9) aid_size_cell_colour_2_pane_ParamLimits

0x8c72,	// (0x000270f9) aid_size_cell_colour_2_pane

0x8c86,	// (0x0002710d) aid_size_cell_colour_3_pane_ParamLimits

0x8c86,	// (0x0002710d) aid_size_cell_colour_3_pane

0x8c9a,	// (0x00027121) aid_size_cell_colour_4_pane_ParamLimits

0x8c9a,	// (0x00027121) aid_size_cell_colour_4_pane

0x8df2,	// (0x00027279) title_pane_stacon_g1_ParamLimits

0x8df2,	// (0x00027279) title_pane_stacon_g1

0x5e1f,	// (0x000242a6) popup_note_wait_window_g3_ParamLimits

0x5e1f,	// (0x000242a6) popup_note_wait_window_g3

0x5e95,	// (0x0002431c) popup_note_wait_window_t5_ParamLimits

0x5e95,	// (0x0002431c) popup_note_wait_window_t5

0x421a,	// (0x000226a1) main_feb_china_hwr_fs_writing_pane

0x9642,	// (0x00027ac9) popup_feb_china_hwr_fs_window_ParamLimits

0x9642,	// (0x00027ac9) popup_feb_china_hwr_fs_window

0x9e2f,	// (0x000282b6) aid_size_cell_hwr_fs_ParamLimits

0x9e2f,	// (0x000282b6) aid_size_cell_hwr_fs

0x593c,	// (0x00023dc3) bg_popup_sub_pane_cp3_ParamLimits

0x593c,	// (0x00023dc3) bg_popup_sub_pane_cp3

0x9e44,	// (0x000282cb) grid_hwr_fs_pane_ParamLimits

0x9e44,	// (0x000282cb) grid_hwr_fs_pane

0x9e5c,	// (0x000282e3) linegrid_hwr_fs_pane_ParamLimits

0x9e5c,	// (0x000282e3) linegrid_hwr_fs_pane

0x9e6c,	// (0x000282f3) cell_hwr_fs_pane_ParamLimits

0x9e6c,	// (0x000282f3) cell_hwr_fs_pane

0x5948,	// (0x00023dcf) linegrid_hwr_fs_pane_g1_ParamLimits

0x5948,	// (0x00023dcf) linegrid_hwr_fs_pane_g1

0x9e8e,	// (0x00028315) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e8e,	// (0x00028315) linegrid_hwr_fs_pane_g2

0x5954,	// (0x00023ddb) linegrid_hwr_fs_pane_g3_ParamLimits

0x5954,	// (0x00023ddb) linegrid_hwr_fs_pane_g3

0x9ea0,	// (0x00028327) linegrid_hwr_fs_pane_g4_ParamLimits

0x9ea0,	// (0x00028327) linegrid_hwr_fs_pane_g4

0x9eba,	// (0x00028341) linegrid_hwr_fs_pane_g5_ParamLimits

0x9eba,	// (0x00028341) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0002dc8a) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0002dc8a) linegrid_hwr_fs_pane_g

0x5960,	// (0x00023de7) cell_hwr_fs_pane_g1_ParamLimits

0x5960,	// (0x00023de7) cell_hwr_fs_pane_g1

0x5758,	// (0x00023bdf) cell_hwr_fs_pane_g2_ParamLimits

0x5758,	// (0x00023bdf) cell_hwr_fs_pane_g2

0x9ed0,	// (0x00028357) cell_hwr_fs_pane_g3_ParamLimits

0x9ed0,	// (0x00028357) cell_hwr_fs_pane_g3

0x9edd,	// (0x00028364) cell_hwr_fs_pane_g4_ParamLimits

0x9edd,	// (0x00028364) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0002dc95) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0002dc95) cell_hwr_fs_pane_g

0x9eea,	// (0x00028371) cell_hwr_fs_pane_t1

0x421a,	// (0x000226a1) grid_highlight_pane_cp6

0x421a,	// (0x000226a1) main_idle_act2_pane

0x49c3,	// (0x00022e4a) aid_inside_area_popup_secondary

0xa1aa,	// (0x00028631) aid_inside_area_window_primary_ParamLimits

0xa1aa,	// (0x00028631) aid_inside_area_window_primary

0x6c10,	// (0x00025097) ai2_news_ticker_pane

0x6c18,	// (0x0002509f) aid_size_cell_ai1_link_ParamLimits

0x6c18,	// (0x0002509f) aid_size_cell_ai1_link

0x6c32,	// (0x000250b9) popup_ai2_data_window_ParamLimits

0x6c32,	// (0x000250b9) popup_ai2_data_window

0x6c46,	// (0x000250cd) popup_ai2_link_window_ParamLimits

0x6c46,	// (0x000250cd) popup_ai2_link_window

0x593c,	// (0x00023dc3) bg_popup_sub_pane_cp4_ParamLimits

0x593c,	// (0x00023dc3) bg_popup_sub_pane_cp4

0x6c5a,	// (0x000250e1) grid_ai2_link_pane_ParamLimits

0x6c5a,	// (0x000250e1) grid_ai2_link_pane

0x6c71,	// (0x000250f8) popup_ai2_link_window_g1_ParamLimits

0x6c71,	// (0x000250f8) popup_ai2_link_window_g1

0x6c7d,	// (0x00025104) popup_ai2_link_window_g2_ParamLimits

0x6c7d,	// (0x00025104) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0002de61) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0002de61) popup_ai2_link_window_g

0x6c8c,	// (0x00025113) ai2_mp_button_pane

0x6c94,	// (0x0002511b) ai2_mp_volume_pane

0x5a61,	// (0x00023ee8) bg_popup_sub_pane_cp5_ParamLimits

0x5a61,	// (0x00023ee8) bg_popup_sub_pane_cp5

0x6c9c,	// (0x00025123) heading_ai2_gene_pane_ParamLimits

0x6c9c,	// (0x00025123) heading_ai2_gene_pane

0x6ca8,	// (0x0002512f) list_ai2_gene_pane_ParamLimits

0x6ca8,	// (0x0002512f) list_ai2_gene_pane

0x6cf0,	// (0x00025177) cell_ai2_link_pane_ParamLimits

0x6cf0,	// (0x00025177) cell_ai2_link_pane

0x6d06,	// (0x0002518d) cell_ai2_link_pane_g1

0x421a,	// (0x000226a1) grid_highlight_pane_cp7

0xa700,	// (0x00028b87) ai2_mp_volume_pane_g1

0x6ddf,	// (0x00025266) ai2_mp_volume_pane_g2

0x6d4c,	// (0x000251d3) list_ai2_gene_pane_t1

0x6dd7,	// (0x0002525e) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0002de7a) ai2_mp_volume_pane_g

0xa708,	// (0x00028b8f) volume_small_pane_cp3

0x6de7,	// (0x0002526e) aid_size_cell_ai2_button

0x6def,	// (0x00025276) grid_ai2_button_pane

0x6df8,	// (0x0002527f) cell_ai2_button_pane_ParamLimits

0x6df8,	// (0x0002527f) cell_ai2_button_pane

0x4210,	// (0x00022697) cell_ai2_button_pane_g1

0x421a,	// (0x000226a1) grid_highlight_pane_cp8

0x6d97,	// (0x0002521e) ai2_gene_pane_t1_ParamLimits

0x6d97,	// (0x0002521e) ai2_gene_pane_t1

0x95de,	// (0x00027a65) aid_height_parent_landscape

0xa3f6,	// (0x0002887d) aid_height_set_list

0x62a4,	// (0x0002472b) aid_size_parent

0x6a77,	// (0x00024efe) aid_size_cell_graphic_pane_ParamLimits

0x6cb8,	// (0x0002513f) popup_ai2_data_window_g1_ParamLimits

0x6cb8,	// (0x0002513f) popup_ai2_data_window_g1

0x6cc4,	// (0x0002514b) ai2_news_ticker_pane_g1

0x6ccc,	// (0x00025153) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0002de66) ai2_news_ticker_pane_g

0x6cd4,	// (0x0002515b) ai2_news_ticker_pane_t1

0x6ce2,	// (0x00025169) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0002de6b) ai2_news_ticker_pane_t

0x6d0f,	// (0x00025196) heading_ai2_gene_pane_g1

0x6d17,	// (0x0002519e) heading_ai2_gene_pane_t1_ParamLimits

0x6d17,	// (0x0002519e) heading_ai2_gene_pane_t1

0x6d2c,	// (0x000251b3) list_highlight_pane_cp6

0x6d34,	// (0x000251bb) ai2_gene_pane_ParamLimits

0x6d34,	// (0x000251bb) ai2_gene_pane

0x6d5a,	// (0x000251e1) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0002de70) list_ai2_gene_pane_t

0x6d68,	// (0x000251ef) list_highlight_pane_cp8_ParamLimits

0x6d68,	// (0x000251ef) list_highlight_pane_cp8

0x6d79,	// (0x00025200) ai2_gene_pane_g1_ParamLimits

0x6d79,	// (0x00025200) ai2_gene_pane_g1

0x6d8b,	// (0x00025212) ai2_gene_pane_g2_ParamLimits

0x6d8b,	// (0x00025212) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0002de75) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0002de75) ai2_gene_pane_g

0x4853,	// (0x00022cda) scroll_pane_cp12

0x959d,	// (0x00027a24) control_pane_t3_ParamLimits

0x959d,	// (0x00027a24) control_pane_t3

0x54b2,	// (0x00023939) status_small_pane_g8_ParamLimits

0x54b2,	// (0x00023939) status_small_pane_g8

0x96cc,	// (0x00027b53) popup_find_window_ParamLimits

0x98b9,	// (0x00027d40) popup_note_image_window_ParamLimits

0xc28a,	// (0x0002a711) list_double2_graphic_pane_vc_g1_ParamLimits

0xc28a,	// (0x0002a711) list_double2_graphic_pane_vc_g1

0xc210,	// (0x0002a697) list_double2_graphic_pane_vc_g2_ParamLimits

0xc210,	// (0x0002a697) list_double2_graphic_pane_vc_g2

0xc21c,	// (0x0002a6a3) list_double2_graphic_pane_vc_g3_ParamLimits

0xc21c,	// (0x0002a6a3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002dc58) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dc58) list_double2_graphic_pane_vc_g

0xe628,	// (0x0002caaf) list_double2_graphic_pane_vc_t1_ParamLimits

0xe628,	// (0x0002caaf) list_double2_graphic_pane_vc_t1

0xc210,	// (0x0002a697) list_single_heading_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_heading_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_single_heading_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_heading_pane_vc_g

0xe63e,	// (0x0002cac5) list_single_heading_pane_vc_t1_ParamLimits

0xe63e,	// (0x0002cac5) list_single_heading_pane_vc_t1

0xe654,	// (0x0002cadb) list_single_heading_pane_vc_t2_ParamLimits

0xe654,	// (0x0002cadb) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0002dc79) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0002dc79) list_single_heading_pane_vc_t

0x5894,	// (0x00023d1b) list_setting_number_pane_vc_g1_ParamLimits

0x5894,	// (0x00023d1b) list_setting_number_pane_vc_g1

0x58a0,	// (0x00023d27) list_setting_number_pane_vc_g2_ParamLimits

0x58a0,	// (0x00023d27) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002dc7e) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002dc7e) list_setting_number_pane_vc_g

0x58ac,	// (0x00023d33) list_setting_number_pane_vc_t1_ParamLimits

0x58ac,	// (0x00023d33) list_setting_number_pane_vc_t1

0x58c0,	// (0x00023d47) list_setting_number_pane_vc_t2_ParamLimits

0x58c0,	// (0x00023d47) list_setting_number_pane_vc_t2

0x58dc,	// (0x00023d63) list_setting_number_pane_vc_t3_ParamLimits

0x58dc,	// (0x00023d63) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0002dc83) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002dc83) list_setting_number_pane_vc_t

0x5904,	// (0x00023d8b) set_value_pane_vc_ParamLimits

0x5904,	// (0x00023d8b) set_value_pane_vc

0xe72c,	// (0x0002cbb3) list_double2_graphic_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double2_graphic_pane_vc

0x69e8,	// (0x00024e6f) list_double2_large_graphic_pane_vc_ParamLimits

0x69e8,	// (0x00024e6f) list_double2_large_graphic_pane_vc

0xe72c,	// (0x0002cbb3) list_double2_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double2_pane_vc

0xe72c,	// (0x0002cbb3) list_double_graphic_heading_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_graphic_heading_pane_vc

0xe72c,	// (0x0002cbb3) list_double_graphic_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_graphic_pane_vc

0xe72c,	// (0x0002cbb3) list_double_heading_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_heading_pane_vc

0x69e8,	// (0x00024e6f) list_double_large_graphic_pane_vc_ParamLimits

0x69e8,	// (0x00024e6f) list_double_large_graphic_pane_vc

0xe72c,	// (0x0002cbb3) list_double_number_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_number_pane_vc

0xe72c,	// (0x0002cbb3) list_double_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_pane_vc

0xe72c,	// (0x0002cbb3) list_double_time_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_double_time_pane_vc

0xe72c,	// (0x0002cbb3) list_setting_number_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_setting_number_pane_vc

0xe72c,	// (0x0002cbb3) list_setting_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_setting_pane_vc

0xe72c,	// (0x0002cbb3) list_single_graphic_heading_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_single_graphic_heading_pane_vc

0xe72c,	// (0x0002cbb3) list_single_heading_pane_vc_ParamLimits

0xe72c,	// (0x0002cbb3) list_single_heading_pane_vc

0xe740,	// (0x0002cbc7) list_single_number_heading_pane_vc_ParamLimits

0xe740,	// (0x0002cbc7) list_single_number_heading_pane_vc

0xc28a,	// (0x0002a711) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc28a,	// (0x0002a711) list_double_graphic_heading_pane_vc_g1

0xc210,	// (0x0002a697) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc210,	// (0x0002a697) list_double_graphic_heading_pane_vc_g2

0xc21c,	// (0x0002a6a3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc21c,	// (0x0002a6a3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002dc58) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dc58) list_double_graphic_heading_pane_vc_g

0xe7fd,	// (0x0002cc84) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe7fd,	// (0x0002cc84) list_double_graphic_heading_pane_vc_t1

0xe63e,	// (0x0002cac5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe63e,	// (0x0002cac5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0002de81) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0002de81) list_double_graphic_heading_pane_vc_t

0x5894,	// (0x00023d1b) list_setting_pane_vc_g1_ParamLimits

0x5894,	// (0x00023d1b) list_setting_pane_vc_g1

0x58a0,	// (0x00023d27) list_setting_pane_vc_g2_ParamLimits

0x58a0,	// (0x00023d27) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002dc7e) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002dc7e) list_setting_pane_vc_g

0x6fee,	// (0x00025475) list_setting_pane_vc_t1_ParamLimits

0x6fee,	// (0x00025475) list_setting_pane_vc_t1

0x7002,	// (0x00025489) list_setting_pane_vc_t2_ParamLimits

0x7002,	// (0x00025489) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002dec4) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002dec4) list_setting_pane_vc_t

0x5904,	// (0x00023d8b) set_value_pane_cp_vc_ParamLimits

0x5904,	// (0x00023d8b) set_value_pane_cp_vc

0xc210,	// (0x0002a697) list_single_number_heading_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_single_number_heading_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_single_number_heading_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_single_number_heading_pane_vc_g

0xe63e,	// (0x0002cac5) list_single_number_heading_pane_vc_t1_ParamLimits

0xe63e,	// (0x0002cac5) list_single_number_heading_pane_vc_t1

0xe811,	// (0x0002cc98) list_single_number_heading_pane_vc_t2_ParamLimits

0xe811,	// (0x0002cc98) list_single_number_heading_pane_vc_t2

0xc278,	// (0x0002a6ff) list_single_number_heading_pane_vc_t3_ParamLimits

0xc278,	// (0x0002a6ff) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0002dec9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002dec9) list_single_number_heading_pane_vc_t

0xc28a,	// (0x0002a711) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc28a,	// (0x0002a711) list_single_graphic_heading_pane_vc_g1

0xc210,	// (0x0002a697) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc210,	// (0x0002a697) list_single_graphic_heading_pane_vc_g4

0xc21c,	// (0x0002a6a3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc21c,	// (0x0002a6a3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0002dc58) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002dc58) list_single_graphic_heading_pane_vc_g

0xe63e,	// (0x0002cac5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe63e,	// (0x0002cac5) list_single_graphic_heading_pane_vc_t1

0xe825,	// (0x0002ccac) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe825,	// (0x0002ccac) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ded0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ded0) list_single_graphic_heading_pane_vc_t

0xc210,	// (0x0002a697) list_double2_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_double2_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_double2_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_double2_pane_vc_g

0xe6f4,	// (0x0002cb7b) list_double2_pane_vc_t1_ParamLimits

0xe6f4,	// (0x0002cb7b) list_double2_pane_vc_t1

0xe839,	// (0x0002ccc0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe839,	// (0x0002ccc0) list_double2_large_graphic_pane_vc_g1

0xe845,	// (0x0002cccc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe845,	// (0x0002cccc) list_double2_large_graphic_pane_vc_g2

0xe851,	// (0x0002ccd8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe851,	// (0x0002ccd8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0002ded5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002ded5) list_double2_large_graphic_pane_vc_g

0xe85d,	// (0x0002cce4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe85d,	// (0x0002cce4) list_double2_large_graphic_pane_vc_t1

0xe873,	// (0x0002ccfa) list_double_time_pane_vc_g1_ParamLimits

0xe873,	// (0x0002ccfa) list_double_time_pane_vc_g1

0xe87f,	// (0x0002cd06) list_double_time_pane_vc_g2_ParamLimits

0xe87f,	// (0x0002cd06) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0002dedc) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0002dedc) list_double_time_pane_vc_g

0xe88b,	// (0x0002cd12) list_double_time_pane_vc_t1_ParamLimits

0xe88b,	// (0x0002cd12) list_double_time_pane_vc_t1

0xe8a4,	// (0x0002cd2b) list_double_time_pane_vc_t2_ParamLimits

0xe8a4,	// (0x0002cd2b) list_double_time_pane_vc_t2

0xe8e4,	// (0x0002cd6b) list_double_time_pane_vc_t3_ParamLimits

0xe8e4,	// (0x0002cd6b) list_double_time_pane_vc_t3

0xe8fc,	// (0x0002cd83) list_double_time_pane_vc_t4_ParamLimits

0xe8fc,	// (0x0002cd83) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0002dee1) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0002dee1) list_double_time_pane_vc_t

0xc210,	// (0x0002a697) list_double_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_double_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_double_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_double_pane_vc_g

0xe910,	// (0x0002cd97) list_double_pane_vc_t1_ParamLimits

0xe910,	// (0x0002cd97) list_double_pane_vc_t1

0xe922,	// (0x0002cda9) list_double_pane_vc_t2_ParamLimits

0xe922,	// (0x0002cda9) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0002deea) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0002deea) list_double_pane_vc_t

0xc210,	// (0x0002a697) list_double_number_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_double_number_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_double_number_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_double_number_pane_vc_g

0xe93a,	// (0x0002cdc1) list_double_number_pane_vc_t1_ParamLimits

0xe93a,	// (0x0002cdc1) list_double_number_pane_vc_t1

0xe94e,	// (0x0002cdd5) list_double_number_pane_vc_t2_ParamLimits

0xe94e,	// (0x0002cdd5) list_double_number_pane_vc_t2

0xe922,	// (0x0002cda9) list_double_number_pane_vc_t3_ParamLimits

0xe922,	// (0x0002cda9) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0002deef) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0002deef) list_double_number_pane_vc_t

0xe960,	// (0x0002cde7) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe960,	// (0x0002cde7) list_double_large_graphic_pane_vc_g1

0xe96c,	// (0x0002cdf3) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe96c,	// (0x0002cdf3) list_double_large_graphic_pane_vc_g2

0xe851,	// (0x0002ccd8) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe851,	// (0x0002ccd8) list_double_large_graphic_pane_vc_g3

0xe97b,	// (0x0002ce02) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe97b,	// (0x0002ce02) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0002def6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002def6) list_double_large_graphic_pane_vc_g

0xe987,	// (0x0002ce0e) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe987,	// (0x0002ce0e) list_double_large_graphic_pane_vc_t1

0xe999,	// (0x0002ce20) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe999,	// (0x0002ce20) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002deff) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002deff) list_double_large_graphic_pane_vc_t

0xc210,	// (0x0002a697) list_double_heading_pane_vc_g1_ParamLimits

0xc210,	// (0x0002a697) list_double_heading_pane_vc_g1

0xc21c,	// (0x0002a6a3) list_double_heading_pane_vc_g2_ParamLimits

0xc21c,	// (0x0002a6a3) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002da6b) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002da6b) list_double_heading_pane_vc_g

0xe9b2,	// (0x0002ce39) list_double_heading_pane_vc_t1_ParamLimits

0xe9b2,	// (0x0002ce39) list_double_heading_pane_vc_t1

0xe63e,	// (0x0002cac5) list_double_heading_pane_vc_t2_ParamLimits

0xe63e,	// (0x0002cac5) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002df04) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002df04) list_double_heading_pane_vc_t

0xe9c6,	// (0x0002ce4d) list_double_graphic_pane_vc_g1_ParamLimits

0xe9c6,	// (0x0002ce4d) list_double_graphic_pane_vc_g1

0xe9d6,	// (0x0002ce5d) list_double_graphic_pane_vc_g2_ParamLimits

0xe9d6,	// (0x0002ce5d) list_double_graphic_pane_vc_g2

0xe9e5,	// (0x0002ce6c) list_double_graphic_pane_vc_g3_ParamLimits

0xe9e5,	// (0x0002ce6c) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0002df09) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0002df09) list_double_graphic_pane_vc_g

0xe9f1,	// (0x0002ce78) list_double_graphic_pane_vc_t1_ParamLimits

0xe9f1,	// (0x0002ce78) list_double_graphic_pane_vc_t1

0xe922,	// (0x0002cda9) list_double_graphic_pane_vc_t2_ParamLimits

0xe922,	// (0x0002cda9) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0002df10) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0002df10) list_double_graphic_pane_vc_t

0x8634,	// (0x00026abb) aid_size_cell_fastswap

0x863c,	// (0x00026ac3) aid_size_cell_touch_ParamLimits

0x863c,	// (0x00026ac3) aid_size_cell_touch

0x88a1,	// (0x00026d28) popup_fast_swap_wide_window_ParamLimits

0x88a1,	// (0x00026d28) popup_fast_swap_wide_window

0x8997,	// (0x00026e1e) touch_pane_ParamLimits

0x8997,	// (0x00026e1e) touch_pane

0x48a9,	// (0x00022d30) button_value_adjust_pane_cp2

0xe327,	// (0x0002c7ae) button_value_adjust_pane_cp4

0xe347,	// (0x0002c7ce) form_field_data_pane_cp2

0xe366,	// (0x0002c7ed) form_field_data_wide_pane_cp2

0x4c0c,	// (0x00023093) bg_scroll_pane_ParamLimits

0x8fda,	// (0x00027461) scroll_handle_pane_ParamLimits

0x8fee,	// (0x00027475) scroll_sc2_down_pane_ParamLimits

0x8fee,	// (0x00027475) scroll_sc2_down_pane

0x4c3d,	// (0x000230c4) scroll_sc2_up_pane_ParamLimits

0x4c3d,	// (0x000230c4) scroll_sc2_up_pane

0xa898,	// (0x00028d1f) grid_wheel_folder_pane_g1_ParamLimits

0xa898,	// (0x00028d1f) grid_wheel_folder_pane_g1

0x9264,	// (0x000276eb) clock_nsta_pane_cp2_ParamLimits

0x9264,	// (0x000276eb) clock_nsta_pane_cp2

0x92ea,	// (0x00027771) listscroll_midp_pane_ParamLimits

0x92f6,	// (0x0002777d) midp_canvas_pane

0x5506,	// (0x0002398d) nsta_clock_indic_pane

0x553e,	// (0x000239c5) listscroll_form_pane_vc

0x5546,	// (0x000239cd) listscroll_set_pane_vc_ParamLimits

0x5546,	// (0x000239cd) listscroll_set_pane_vc

0x9b2d,	// (0x00027fb4) clock_nsta_pane

0x9b3a,	// (0x00027fc1) indicator_nsta_pane

0x578a,	// (0x00023c11) bg_popup_sub_pane_cp2_ParamLimits

0x579e,	// (0x00023c25) find_pane_cp2_ParamLimits

0x579e,	// (0x00023c25) find_pane_cp2

0x57b4,	// (0x00023c3b) grid_toobar_pane_ParamLimits

0x5910,	// (0x00023d97) list_form_gen_pane_vc_ParamLimits

0x5910,	// (0x00023d97) list_form_gen_pane_vc

0x5926,	// (0x00023dad) scroll_pane_cp8_vc_ParamLimits

0x5926,	// (0x00023dad) scroll_pane_cp8_vc

0x5976,	// (0x00023dfd) data_form_wide_pane_vc_ParamLimits

0x5976,	// (0x00023dfd) data_form_wide_pane_vc

0x5982,	// (0x00023e09) form_field_data_wide_pane_vc_g1

0x598a,	// (0x00023e11) form_field_data_wide_pane_vc_t1_ParamLimits

0x598a,	// (0x00023e11) form_field_data_wide_pane_vc_t1

0x48bd,	// (0x00022d44) input_focus_pane_cp6_vc_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_cp6_vc

0x9fe9,	// (0x00028470) list_midp_pane_ParamLimits

0x9ff5,	// (0x0002847c) scroll_pane_cp16_ParamLimits

0x9ff5,	// (0x0002847c) scroll_pane_cp16

0x5bf9,	// (0x00024080) button_value_adjust_pane_ParamLimits

0x5bf9,	// (0x00024080) button_value_adjust_pane

0xa407,	// (0x0002888e) button_value_adjust_pane_cp6_ParamLimits

0xa407,	// (0x0002888e) button_value_adjust_pane_cp6

0xa529,	// (0x000289b0) settings_code_pane_cp_ParamLimits

0xa529,	// (0x000289b0) settings_code_pane_cp

0x4210,	// (0x00022697) cell_touch_pane_g1

0x4210,	// (0x00022697) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0002dba1) cell_touch_pane_g

0xa711,	// (0x00028b98) cell_touch_pane_cp_ParamLimits

0xa711,	// (0x00028b98) cell_touch_pane_cp

0xa721,	// (0x00028ba8) cell_touch_pane_ParamLimits

0xa721,	// (0x00028ba8) cell_touch_pane

0x4210,	// (0x00022697) scroll_sc2_down_pane_g1

0x4210,	// (0x00022697) scroll_sc2_up_pane_g1

0x421a,	// (0x000226a1) bg_set_opt_pane_cp4_vc

0x6e0a,	// (0x00025291) list_set_graphic_pane_vc_g1_ParamLimits

0x6e0a,	// (0x00025291) list_set_graphic_pane_vc_g1

0x6e16,	// (0x0002529d) list_set_graphic_pane_vc_g2_ParamLimits

0x6e16,	// (0x0002529d) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0002de86) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002de86) list_set_graphic_pane_vc_g

0x6e22,	// (0x000252a9) text_primary_small_cp13_vc_ParamLimits

0x6e22,	// (0x000252a9) text_primary_small_cp13_vc

0x6e3a,	// (0x000252c1) list_set_graphic_pane_vc_ParamLimits

0x6e3a,	// (0x000252c1) list_set_graphic_pane_vc

0x421a,	// (0x000226a1) input_focus_pane_cp2_vc

0x4210,	// (0x00022697) setting_code_pane_vc_g1

0x6e4e,	// (0x000252d5) setting_code_pane_vc_t1

0x6e5c,	// (0x000252e3) set_text_pane_vc_t1_ParamLimits

0x6e5c,	// (0x000252e3) set_text_pane_vc_t1

0x421a,	// (0x000226a1) input_focus_pane_cp1_vc

0x6e7b,	// (0x00025302) list_set_text_pane_vc

0x4210,	// (0x00022697) setting_text_pane_vc_g1

0x421a,	// (0x000226a1) bg_set_opt_pane_cp2_vc

0x6e85,	// (0x0002530c) setting_slider_graphic_pane_vc_g1

0x6e8d,	// (0x00025314) setting_slider_graphic_pane_vc_t1

0x6e9b,	// (0x00025322) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0002de8b) setting_slider_graphic_pane_vc_t

0x6ea9,	// (0x00025330) slider_set_pane_cp_vc

0x6eb1,	// (0x00025338) slider_set_pane_vc_g1

0x6eba,	// (0x00025341) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0002de90) slider_set_pane_vc_g

0x4924,	// (0x00022dab) set_opt_bg_pane_g1_copy1

0x492c,	// (0x00022db3) set_opt_bg_pane_g2_copy1

0x6ee6,	// (0x0002536d) set_opt_bg_pane_g3_copy1

0x493c,	// (0x00022dc3) set_opt_bg_pane_g4_copy1

0x4944,	// (0x00022dcb) set_opt_bg_pane_g5_copy1

0x494c,	// (0x00022dd3) set_opt_bg_pane_g6_copy1

0x6eee,	// (0x00025375) set_opt_bg_pane_g7_copy1

0x6ef8,	// (0x0002537f) set_opt_bg_pane_g8_copy1

0x6f00,	// (0x00025387) set_opt_bg_pane_g9_copy1

0x421a,	// (0x000226a1) bg_set_opt_pane_cp_vc

0x6f08,	// (0x0002538f) setting_slider_pane_vc_t1

0x6e8d,	// (0x00025314) setting_slider_pane_vc_t2

0x6e9b,	// (0x00025322) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0002de9f) setting_slider_pane_vc_t

0x6ea9,	// (0x00025330) slider_set_pane_vc

0xa03b,	// (0x000284c2) volume_set_pane_vc_g1

0xa733,	// (0x00028bba) volume_set_pane_vc_g2

0xa73c,	// (0x00028bc3) volume_set_pane_vc_g3

0xa745,	// (0x00028bcc) volume_set_pane_vc_g4

0xa74e,	// (0x00028bd5) volume_set_pane_vc_g5

0xa757,	// (0x00028bde) volume_set_pane_vc_g6

0xa760,	// (0x00028be7) volume_set_pane_vc_g7

0xa769,	// (0x00028bf0) volume_set_pane_vc_g8

0xa772,	// (0x00028bf9) volume_set_pane_vc_g9

0xa77b,	// (0x00028c02) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0002dea6) volume_set_pane_vc_g

0x6f17,	// (0x0002539e) volume_set_pane_vc

0x6f1f,	// (0x000253a6) button_value_adjust_pane_cp1_vc

0x6f29,	// (0x000253b0) list_highlight_pane_cp2_vc

0x6f32,	// (0x000253b9) list_set_pane_vc_ParamLimits

0x6f32,	// (0x000253b9) list_set_pane_vc

0x6f84,	// (0x0002540b) main_pane_set_vc_t1_ParamLimits

0x6f84,	// (0x0002540b) main_pane_set_vc_t1

0x6f99,	// (0x00025420) main_pane_set_vc_t2_ParamLimits

0x6f99,	// (0x00025420) main_pane_set_vc_t2

0x6fab,	// (0x00025432) main_pane_set_vc_t3_ParamLimits

0x6fab,	// (0x00025432) main_pane_set_vc_t3

0x6fbd,	// (0x00025444) main_pane_set_vc_t4_ParamLimits

0x6fbd,	// (0x00025444) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0002debb) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0002debb) main_pane_set_vc_t

0x6fcf,	// (0x00025456) setting_code_pane_vc_ParamLimits

0x6fcf,	// (0x00025456) setting_code_pane_vc

0x6fde,	// (0x00025465) setting_slider_graphic_pane_vc

0x6fde,	// (0x00025465) setting_slider_pane_vc

0x6fde,	// (0x00025465) setting_text_pane_vc

0x6fde,	// (0x00025465) setting_volume_pane_vc

0x6fe6,	// (0x0002546d) scroll_pane_cp121_vc

0x4897,	// (0x00022d1e) set_content_pane_vc

0x7024,	// (0x000254ab) button_value_adjust_pane_g1

0x702d,	// (0x000254b4) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0002df15) button_value_adjust_pane_g

0x7036,	// (0x000254bd) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7036,	// (0x000254bd) form_field_slider_wide_pane_vc_t1

0x704a,	// (0x000254d1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x704a,	// (0x000254d1) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0002df1a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0002df1a) form_field_slider_wide_pane_vc_t

0x4268,	// (0x000226ef) input_focus_pane_cp10_vc_ParamLimits

0x4268,	// (0x000226ef) input_focus_pane_cp10_vc

0x705c,	// (0x000254e3) slider_cont_pane_cp1_vc_ParamLimits

0x705c,	// (0x000254e3) slider_cont_pane_cp1_vc

0x6eb1,	// (0x00025338) slider_form_pane_g1_cp2

0x6eba,	// (0x00025341) slider_form_pane_g2_cp2

0x7075,	// (0x000254fc) form_field_slider_pane_vc_t3

0x7083,	// (0x0002550a) form_field_slider_pane_vc_t4

0x7091,	// (0x00025518) slider_form_pane_vc_ParamLimits

0x7091,	// (0x00025518) slider_form_pane_vc

0x709e,	// (0x00025525) form_field_slider_pane_vc_t1_ParamLimits

0x709e,	// (0x00025525) form_field_slider_pane_vc_t1

0x704a,	// (0x000254d1) form_field_slider_pane_vc_t2_ParamLimits

0x704a,	// (0x000254d1) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002df2a) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002df2a) form_field_slider_pane_vc_t

0x4268,	// (0x000226ef) input_focus_pane_cp9_vc_ParamLimits

0x4268,	// (0x000226ef) input_focus_pane_cp9_vc

0x70ba,	// (0x00025541) slider_cont_pane_vc_ParamLimits

0x70ba,	// (0x00025541) slider_cont_pane_vc

0x70cc,	// (0x00025553) list_form_graphic_pane_cp_vc_ParamLimits

0x70cc,	// (0x00025553) list_form_graphic_pane_cp_vc

0x5982,	// (0x00023e09) form_field_popup_wide_pane_vc_g1

0x70e1,	// (0x00025568) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70e1,	// (0x00025568) form_field_popup_wide_pane_vc_t1

0x48bd,	// (0x00022d44) input_focus_pane_cp8_vc_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_cp8_vc

0x70f8,	// (0x0002557f) list_form_wide_pane_vc_ParamLimits

0x70f8,	// (0x0002557f) list_form_wide_pane_vc

0x7104,	// (0x0002558b) list_form_graphic_pane_vc_g1

0x710c,	// (0x00025593) list_form_graphic_pane_vc_t1_ParamLimits

0x710c,	// (0x00025593) list_form_graphic_pane_vc_t1

0x4276,	// (0x000226fd) list_highlight_pane_cp5_vc_ParamLimits

0x4276,	// (0x000226fd) list_highlight_pane_cp5_vc

0x7128,	// (0x000255af) list_form_graphic_pane_vc_ParamLimits

0x7128,	// (0x000255af) list_form_graphic_pane_vc

0x5982,	// (0x00023e09) form_field_popup_pane_vc_g1

0x713e,	// (0x000255c5) form_field_popup_pane_vc_t1_ParamLimits

0x713e,	// (0x000255c5) form_field_popup_pane_vc_t1

0x48bd,	// (0x00022d44) input_focus_pane_cp7_vc_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_cp7_vc

0x7155,	// (0x000255dc) list_form_pane_vc_ParamLimits

0x7155,	// (0x000255dc) list_form_pane_vc

0x7161,	// (0x000255e8) data_form_pane_vc_t1_ParamLimits

0x7161,	// (0x000255e8) data_form_pane_vc_t1

0x4924,	// (0x00022dab) input_focus_pane_vc_g1

0x492c,	// (0x00022db3) input_focus_pane_vc_g2

0x4934,	// (0x00022dbb) input_focus_pane_vc_g3

0x493c,	// (0x00022dc3) input_focus_pane_vc_g4

0x4944,	// (0x00022dcb) input_focus_pane_vc_g5

0x494c,	// (0x00022dd3) input_focus_pane_vc_g6

0x4954,	// (0x00022ddb) input_focus_pane_vc_g7

0x495c,	// (0x00022de3) input_focus_pane_vc_g8

0x4964,	// (0x00022deb) input_focus_pane_vc_g9

0x4210,	// (0x00022697) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0002db2a) input_focus_pane_vc_g

0x5976,	// (0x00023dfd) data_form_pane_vc_ParamLimits

0x5976,	// (0x00023dfd) data_form_pane_vc

0x5982,	// (0x00023e09) form_field_data_pane_vc_g1

0x717c,	// (0x00025603) form_field_data_pane_vc_t1_ParamLimits

0x717c,	// (0x00025603) form_field_data_pane_vc_t1

0x48bd,	// (0x00022d44) input_focus_pane_vc_ParamLimits

0x48bd,	// (0x00022d44) input_focus_pane_vc

0x7196,	// (0x0002561d) button_value_adjust_pane_cp3_vc

0x719e,	// (0x00025625) button_value_adjust_pane_cp5_vc

0x71a6,	// (0x0002562d) form_field_data_pane_vc_ParamLimits

0x71a6,	// (0x0002562d) form_field_data_pane_vc

0x71bd,	// (0x00025644) form_field_data_pane_vc_cp2

0x71c5,	// (0x0002564c) form_field_data_wide_pane_vc_ParamLimits

0x71c5,	// (0x0002564c) form_field_data_wide_pane_vc

0x71db,	// (0x00025662) form_field_data_wide_pane_vc_cp2

0x71e3,	// (0x0002566a) form_field_popup_pane_vc_ParamLimits

0x71e3,	// (0x0002566a) form_field_popup_pane_vc

0x71fa,	// (0x00025681) form_field_popup_wide_pane_vc_ParamLimits

0x71fa,	// (0x00025681) form_field_popup_wide_pane_vc

0x7210,	// (0x00025697) form_field_slider_pane_vc_ParamLimits

0x7210,	// (0x00025697) form_field_slider_pane_vc

0x7223,	// (0x000256aa) form_field_slider_wide_pane_vc_ParamLimits

0x7223,	// (0x000256aa) form_field_slider_wide_pane_vc

0xa784,	// (0x00028c0b) grid_touch_1_pane_ParamLimits

0xa784,	// (0x00028c0b) grid_touch_1_pane

0xa790,	// (0x00028c17) grid_touch_2_pane_ParamLimits

0xa790,	// (0x00028c17) grid_touch_2_pane

0x54f8,	// (0x0002397f) touch_pane_g1_ParamLimits

0x54f8,	// (0x0002397f) touch_pane_g1

0x7244,	// (0x000256cb) cell_app_pane_cp_wide_ParamLimits

0x7244,	// (0x000256cb) cell_app_pane_cp_wide

0x7255,	// (0x000256dc) grid_popup_fast_wide_pane_ParamLimits

0x7255,	// (0x000256dc) grid_popup_fast_wide_pane

0x7269,	// (0x000256f0) scroll_pane_cp19_ParamLimits

0x7269,	// (0x000256f0) scroll_pane_cp19

0x421a,	// (0x000226a1) bg_popup_window_pane_cp20

0x727d,	// (0x00025704) listscroll_popup_fast_wide_pane

0x4276,	// (0x000226fd) grid_indicator_nsta_pane

0x7285,	// (0x0002570c) clock_nsta_pane_g1

0x728e,	// (0x00025715) clock_nsta_pane_t1

0xa7a8,	// (0x00028c2f) cell_indicator_nsta_pane_ParamLimits

0xa7a8,	// (0x00028c2f) cell_indicator_nsta_pane

0x7236,	// (0x000256bd) cell_indicator_nsta_pane_g1

0xa7e0,	// (0x00028c67) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0002df34) cell_indicator_nsta_pane_g

0x72aa,	// (0x00025731) clock_nsta_pane_cp

0x72b2,	// (0x00025739) indicator_nsta_pane_cp

0x72bb,	// (0x00025742) nsta_clock_indic_pane_g1

0x42b2,	// (0x00022739) grid_indicator_pane

0x4d2f,	// (0x000231b6) scroll_pane_cp29

0x91b3,	// (0x0002763a) indicator_nsta_pane_cp2_ParamLimits

0x91b3,	// (0x0002763a) indicator_nsta_pane_cp2

0x4276,	// (0x000226fd) main_apps_wheel_pane

0x5a9e,	// (0x00023f25) form_midp_field_text_pane_ParamLimits

0x5bcb,	// (0x00024052) scroll_bar_cp050_ParamLimits

0x7324,	// (0x000257ab) cell_indicator_pane_ParamLimits

0x7324,	// (0x000257ab) cell_indicator_pane

0x7341,	// (0x000257c8) cell_indicator_pane_g1

0xa7f6,	// (0x00028c7d) grid_wheel_folder_pane_ParamLimits

0xa7f6,	// (0x00028c7d) grid_wheel_folder_pane

0xa80c,	// (0x00028c93) list_wheel_apps_pane_ParamLimits

0xa80c,	// (0x00028c93) list_wheel_apps_pane

0xa81d,	// (0x00028ca4) main_apps_wheel_pane_g1_ParamLimits

0xa81d,	// (0x00028ca4) main_apps_wheel_pane_g1

0xa831,	// (0x00028cb8) main_apps_wheel_pane_g2_ParamLimits

0xa831,	// (0x00028cb8) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0002df50) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0002df50) main_apps_wheel_pane_g

0xa849,	// (0x00028cd0) main_apps_wheel_pane_t1_ParamLimits

0xa849,	// (0x00028cd0) main_apps_wheel_pane_t1

0xa86c,	// (0x00028cf3) list_wheel_apps_pane_g1

0xa874,	// (0x00028cfb) list_wheel_apps_pane_g2

0xa87c,	// (0x00028d03) list_wheel_apps_pane_g3

0xa884,	// (0x00028d0b) list_wheel_apps_pane_g4

0xa88e,	// (0x00028d15) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0002df55) list_wheel_apps_pane_g

0x5182,	// (0x00023609) navi_icon_text_pane

0x9a71,	// (0x00027ef8) aid_fill_nsta

0xa8b1,	// (0x00028d38) navi_icon_text_pane_g1

0xa8c0,	// (0x00028d47) navi_icon_text_pane_t1

0x501e,	// (0x000234a5) list_set_graphic_pane_t1_ParamLimits

0x501e,	// (0x000234a5) list_set_graphic_pane_t1

0x62e5,	// (0x0002476c) popup_midp_note_alarm_window_t6_ParamLimits

0x62e5,	// (0x0002476c) popup_midp_note_alarm_window_t6

0x62f7,	// (0x0002477e) popup_midp_note_alarm_window_t7_ParamLimits

0x62f7,	// (0x0002477e) popup_midp_note_alarm_window_t7

0x6309,	// (0x00024790) popup_midp_note_alarm_window_t8_ParamLimits

0x6309,	// (0x00024790) popup_midp_note_alarm_window_t8

0x631b,	// (0x000247a2) popup_midp_note_alarm_window_t9_ParamLimits

0x631b,	// (0x000247a2) popup_midp_note_alarm_window_t9

0x632d,	// (0x000247b4) popup_midp_note_alarm_window_t10_ParamLimits

0x632d,	// (0x000247b4) popup_midp_note_alarm_window_t10

0x633f,	// (0x000247c6) popup_midp_note_alarm_window_t11_ParamLimits

0x633f,	// (0x000247c6) popup_midp_note_alarm_window_t11

0x6351,	// (0x000247d8) scroll_pane_cp17_ParamLimits

0x6351,	// (0x000247d8) scroll_pane_cp17

0xa03b,	// (0x000284c2) volume_small_pane_cp_g1

0xa8d5,	// (0x00028d5c) volume_small_pane_cp_g2

0xa8de,	// (0x00028d65) volume_small_pane_cp_g3

0xa8e7,	// (0x00028d6e) volume_small_pane_cp_g4

0xa8f0,	// (0x00028d77) volume_small_pane_cp_g5

0xa8f9,	// (0x00028d80) volume_small_pane_cp_g6

0xa902,	// (0x00028d89) volume_small_pane_cp_g7

0xa90b,	// (0x00028d92) volume_small_pane_cp_g8

0xa914,	// (0x00028d9b) volume_small_pane_cp_g9

0xa91d,	// (0x00028da4) volume_small_pane_cp_g10

0x532e,	// (0x000237b5) midp_ticker_pane_g1_ParamLimits

0x533a,	// (0x000237c1) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0002dbf2) midp_ticker_pane_g_ParamLimits

0x939f,	// (0x00027826) midp_ticker_pane_t1_ParamLimits

0x9a87,	// (0x00027f0e) aid_fill_nsta_2

0x5bb7,	// (0x0002403e) list_form2_midp_pane

0x69c6,	// (0x00024e4d) midp_editing_number_pane_ParamLimits

0x69d5,	// (0x00024e5c) midp_ticker_pane_ParamLimits

0x734b,	// (0x000257d2) form2_midp_field_pane

0x7353,	// (0x000257da) scroll_pane_cp51

0x7373,	// (0x000257fa) form2_midp_button_pane_ParamLimits

0x7373,	// (0x000257fa) form2_midp_button_pane

0x7385,	// (0x0002580c) form2_midp_content_pane_ParamLimits

0x7385,	// (0x0002580c) form2_midp_content_pane

0x739f,	// (0x00025826) form2_midp_field_choice_group_pane

0x73a7,	// (0x0002582e) form2_midp_field_pane_g1

0x73af,	// (0x00025836) form2_midp_field_pane_g2

0x73b7,	// (0x0002583e) form2_midp_field_pane_g3

0x73bf,	// (0x00025846) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0002df7a) form2_midp_field_pane_g

0x73c7,	// (0x0002584e) form2_midp_gauge_slider_pane

0x73cf,	// (0x00025856) form2_midp_gauge_wait_pane

0x73d7,	// (0x0002585e) form2_midp_image_pane_ParamLimits

0x73d7,	// (0x0002585e) form2_midp_image_pane

0x73f2,	// (0x00025879) form2_midp_label_pane_ParamLimits

0x73f2,	// (0x00025879) form2_midp_label_pane

0xa942,	// (0x00028dc9) form2_midp_label_pane_cp_ParamLimits

0xa942,	// (0x00028dc9) form2_midp_label_pane_cp

0x740b,	// (0x00025892) form2_midp_string_pane_ParamLimits

0x740b,	// (0x00025892) form2_midp_string_pane

0xea03,	// (0x0002ce8a) form2_midp_text_pane_ParamLimits

0xea03,	// (0x0002ce8a) form2_midp_text_pane

0x741d,	// (0x000258a4) form2_midp_time_pane

0x742d,	// (0x000258b4) input_focus_pane_cp51_ParamLimits

0x742d,	// (0x000258b4) input_focus_pane_cp51

0x7445,	// (0x000258cc) form2_midp_label_pane_t1_ParamLimits

0x7445,	// (0x000258cc) form2_midp_label_pane_t1

0xea1c,	// (0x0002cea3) form2_mdip_text_pane_t1_ParamLimits

0xea1c,	// (0x0002cea3) form2_mdip_text_pane_t1

0xea39,	// (0x0002cec0) form2_midp_time_pane_t1

0x748d,	// (0x00025914) form2_midp_gauge_slider_pane_t1

0xa963,	// (0x00028dea) form2_midp_gauge_slider_pane_t2

0xa975,	// (0x00028dfc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0002df83) form2_midp_gauge_slider_pane_t

0x749f,	// (0x00025926) form2_midp_slider_pane

0x74ab,	// (0x00025932) form2_midp_gauge_wait_pane_t1

0x74b9,	// (0x00025940) form2_midp_wait_pane_ParamLimits

0x74b9,	// (0x00025940) form2_midp_wait_pane

0xa987,	// (0x00028e0e) list_single_2graphic_pane_cp4_ParamLimits

0xa987,	// (0x00028e0e) list_single_2graphic_pane_cp4

0x9f24,	// (0x000283ab) list_single_midp_graphic_pane_cp_ParamLimits

0x9f24,	// (0x000283ab) list_single_midp_graphic_pane_cp

0x421a,	// (0x000226a1) list_highlight_pane_cp20

0x74e4,	// (0x0002596b) list_single_2graphic_pane_g1_cp4

0x6d0f,	// (0x00025196) list_single_2graphic_pane_g2_cp4

0x74ec,	// (0x00025973) list_single_2graphic_pane_t1_cp4

0x4276,	// (0x000226fd) list_highlight_pane_cp21

0x74fb,	// (0x00025982) list_single_midp_graphic_pane_g4_cp

0x750a,	// (0x00025991) list_single_midp_graphic_pane_t1_cp

0xa9b6,	// (0x00028e3d) form2_mdip_string_pane_t1_ParamLimits

0xa9b6,	// (0x00028e3d) form2_mdip_string_pane_t1

0x421a,	// (0x000226a1) bg_wml_button_pane_cp2

0x4210,	// (0x00022697) form2_midp_image_pane_g1

0xe128,	// (0x0002c5af) list_double_large_graphic_pane_g5_ParamLimits

0xe128,	// (0x0002c5af) list_double_large_graphic_pane_g5

0x92ea,	// (0x00027771) midp_form_pane_ParamLimits

0x4276,	// (0x000226fd) main_apps_wheel_pane_ParamLimits

0x98df,	// (0x00027d66) popup_preview_window_ParamLimits

0x98df,	// (0x00027d66) popup_preview_window

0x562b,	// (0x00023ab2) popup_touch_info_window_ParamLimits

0x562b,	// (0x00023ab2) popup_touch_info_window

0x5649,	// (0x00023ad0) popup_touch_menu_window_ParamLimits

0x5649,	// (0x00023ad0) popup_touch_menu_window

0x4206,	// (0x0002268d) bg_popup_sub_pane_cp6

0x751f,	// (0x000259a6) list_touch_menu_pane

0x7527,	// (0x000259ae) list_single_touch_menu_pane_ParamLimits

0x7527,	// (0x000259ae) list_single_touch_menu_pane

0x753c,	// (0x000259c3) list_single_touch_menu_pane_t1

0x4276,	// (0x000226fd) bg_popup_sub_pane_cp7_ParamLimits

0x4276,	// (0x000226fd) bg_popup_sub_pane_cp7

0x754a,	// (0x000259d1) heading_sub_pane

0x7552,	// (0x000259d9) list_touch_info_pane_ParamLimits

0x7552,	// (0x000259d9) list_touch_info_pane

0x7561,	// (0x000259e8) list_single_touch_info_pane_ParamLimits

0x7561,	// (0x000259e8) list_single_touch_info_pane

0x7573,	// (0x000259fa) list_single_touch_info_pane_t1

0x7581,	// (0x00025a08) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0002df91) list_single_touch_info_pane_t

0x5304,	// (0x0002378b) bg_popup_heading_pane_cp

0x758f,	// (0x00025a16) heading_sub_pane_t1

0x593c,	// (0x00023dc3) bg_popup_preview_window_pane_cp_ParamLimits

0x593c,	// (0x00023dc3) bg_popup_preview_window_pane_cp

0x754a,	// (0x000259d1) heading_preview_pane

0x7552,	// (0x000259d9) list_preview_pane_ParamLimits

0x7552,	// (0x000259d9) list_preview_pane

0x759d,	// (0x00025a24) popup_preview_window_g1

0x7561,	// (0x000259e8) list_single_preview_pane_ParamLimits

0x7561,	// (0x000259e8) list_single_preview_pane

0x75a5,	// (0x00025a2c) list_single_preview_pane_g1

0x75ad,	// (0x00025a34) list_single_preview_pane_t1

0x7573,	// (0x000259fa) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0002df96) list_single_preview_pane_t

0x75bb,	// (0x00025a42) bg_popup_heading_pane_cp2_ParamLimits

0x75bb,	// (0x00025a42) bg_popup_heading_pane_cp2

0x75d1,	// (0x00025a58) heading_preview_pane_g1

0x75d9,	// (0x00025a60) heading_preview_pane_t1_ParamLimits

0x75d9,	// (0x00025a60) heading_preview_pane_t1

0x42c9,	// (0x00022750) soft_indicator_pane_t1_ParamLimits

0x4830,	// (0x00022cb7) scroll_pane_ParamLimits

0x4c34,	// (0x000230bb) scroll_sc2_left_pane

0x4c2b,	// (0x000230b2) scroll_sc2_right_pane

0x4c53,	// (0x000230da) scroll_bg_pane_g1_ParamLimits

0x4c68,	// (0x000230ef) scroll_bg_pane_g2_ParamLimits

0x4c80,	// (0x00023107) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0002db81) scroll_bg_pane_g_ParamLimits

0x4c53,	// (0x000230da) scroll_handle_pane_g1_ParamLimits

0x4ca2,	// (0x00023129) scroll_handle_pane_g2_ParamLimits

0x4c80,	// (0x00023107) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0002db88) scroll_handle_pane_g_ParamLimits

0x5566,	// (0x000239ed) popup_choice_list_window_ParamLimits

0x5566,	// (0x000239ed) popup_choice_list_window

0x5796,	// (0x00023c1d) choice_list_pane

0x5818,	// (0x00023c9f) cell_toolbar_pane_t1

0x5840,	// (0x00023cc7) toolbar_button_pane_ParamLimits

0x672f,	// (0x00024bb6) ai_gene_pane_1_t2_ParamLimits

0x672f,	// (0x00024bb6) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0002dda0) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0002dda0) ai_gene_pane_1_t

0x75f6,	// (0x00025a7d) scroll_sc2_left_pane_g1

0x75f6,	// (0x00025a7d) scroll_sc2_right_pane_g1

0x4a14,	// (0x00022e9b) bg_popup_sub_pane_cp10

0x7600,	// (0x00025a87) list_choice_list_pane

0x7617,	// (0x00025a9e) list_single_choice_list_pane_ParamLimits

0x7617,	// (0x00025a9e) list_single_choice_list_pane

0x762b,	// (0x00025ab2) list_single_choice_list_pane_g1

0x7633,	// (0x00025aba) list_single_choice_list_pane_t1_ParamLimits

0x7633,	// (0x00025aba) list_single_choice_list_pane_t1

0x7648,	// (0x00025acf) choice_list_pane_g1

0x7650,	// (0x00025ad7) choice_list_pane_t1

0x4206,	// (0x0002268d) input_focus_pane_cp11

0x4b89,	// (0x00023010) title_pane_stacon_g2_ParamLimits

0x4b89,	// (0x00023010) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0002db67) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002db67) title_pane_stacon_g

0x5304,	// (0x0002378b) cursor_press_pane

0x9684,	// (0x00027b0b) popup_fep_hwr_window_ParamLimits

0x9684,	// (0x00027b0b) popup_fep_hwr_window

0x55ba,	// (0x00023a41) popup_fep_vkb_window_ParamLimits

0x55ba,	// (0x00023a41) popup_fep_vkb_window

0x765e,	// (0x00025ae5) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0002dfbf) fep_vkb_side_pane_g_ParamLimits

0xab29,	// (0x00028fb0) fep_hwr_candidate_pane_ParamLimits

0xab29,	// (0x00028fb0) fep_hwr_candidate_pane

0xab53,	// (0x00028fda) fep_hwr_side_pane_ParamLimits

0xab53,	// (0x00028fda) fep_hwr_side_pane

0xab73,	// (0x00028ffa) fep_hwr_top_pane_ParamLimits

0xab73,	// (0x00028ffa) fep_hwr_top_pane

0xab8b,	// (0x00029012) fep_hwr_write_pane_ParamLimits

0xab8b,	// (0x00029012) fep_hwr_write_pane

0xfb38,	// (0x0002dfbf) fep_vkb_side_pane_g

0x7678,	// (0x00025aff) fep_hwr_top_pane_g1

0x7666,	// (0x00025aed) fep_hwr_top_pane_g2

0xabc5,	// (0x0002904c) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0002df9b) fep_hwr_top_pane_g

0xabda,	// (0x00029061) fep_hwr_top_text_pane

0x4df5,	// (0x0002327c) fep_hwr_top_text_pane_g1

0x76ae,	// (0x00025b35) fep_hwr_top_text_pane_t1

0xacd0,	// (0x00029157) fep_hwr_candidate_pane_g1

0x78bb,	// (0x00025d42) fep_vkb_keypad_pane_g3_ParamLimits

0x78bb,	// (0x00025d42) fep_vkb_keypad_pane_g3

0x78e3,	// (0x00025d6a) fep_vkb_keypad_pane_g4_ParamLimits

0x78e3,	// (0x00025d6a) fep_vkb_keypad_pane_g4

0x7952,	// (0x00025dd9) fep_vkb_bottom_pane_g2_ParamLimits

0x7952,	// (0x00025dd9) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0002dfc6) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0002dfc6) fep_vkb_bottom_pane_g

0x75f6,	// (0x00025a7d) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0002dfd0) cell_vkb_side_pane_g

0x7996,	// (0x00025e1d) cell_vkb_side_pane_t1

0x79a4,	// (0x00025e2b) cell_vkb_side_pane_t1_copy1

0x75f6,	// (0x00025a7d) bg_fep_vkb_candidate_pane_g2

0x7a8e,	// (0x00025f15) cell_vkb_candidate_pane_ParamLimits

0x76bc,	// (0x00025b43) aid_size_cell_vkb_ParamLimits

0x76bc,	// (0x00025b43) aid_size_cell_vkb

0x7a8e,	// (0x00025f15) cell_vkb_candidate_pane

0xade1,	// (0x00029268) bg_popup_fep_shadow_pane_g1

0x7738,	// (0x00025bbf) fep_vkb_bottom_pane_ParamLimits

0x7738,	// (0x00025bbf) fep_vkb_bottom_pane

0x7775,	// (0x00025bfc) fep_vkb_candidate_pane_ParamLimits

0x7775,	// (0x00025bfc) fep_vkb_candidate_pane

0x7791,	// (0x00025c18) fep_vkb_keypad_pane_ParamLimits

0x7791,	// (0x00025c18) fep_vkb_keypad_pane

0x77d7,	// (0x00025c5e) fep_vkb_side_pane_ParamLimits

0x77d7,	// (0x00025c5e) fep_vkb_side_pane

0x7813,	// (0x00025c9a) fep_vkb_top_pane_ParamLimits

0x7813,	// (0x00025c9a) fep_vkb_top_pane

0x784f,	// (0x00025cd6) fep_vkb_top_pane_g1_ParamLimits

0x784f,	// (0x00025cd6) fep_vkb_top_pane_g1

0x785e,	// (0x00025ce5) fep_vkb_top_pane_g2_ParamLimits

0x785e,	// (0x00025ce5) fep_vkb_top_pane_g2

0x786d,	// (0x00025cf4) fep_vkb_top_pane_g3_ParamLimits

0x786d,	// (0x00025cf4) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0002dfb6) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0002dfb6) fep_vkb_top_pane_g

0x788b,	// (0x00025d12) fep_vkb_top_text_pane_ParamLimits

0x788b,	// (0x00025d12) fep_vkb_top_text_pane

0xad09,	// (0x00029190) fep_vkb_side_pane_g1_ParamLimits

0xad09,	// (0x00029190) fep_vkb_side_pane_g1

0x78aa,	// (0x00025d31) grid_vkb_side_pane_ParamLimits

0x78aa,	// (0x00025d31) grid_vkb_side_pane

0xade9,	// (0x00029270) bg_popup_fep_shadow_pane_g2

0xadf2,	// (0x00029279) bg_popup_fep_shadow_pane_g3

0xadfa,	// (0x00029281) bg_popup_fep_shadow_pane_g4

0xae03,	// (0x0002928a) bg_popup_fep_shadow_pane_g5

0xae0d,	// (0x00029294) bg_popup_fep_shadow_pane_g6

0xae15,	// (0x0002929c) bg_popup_fep_shadow_pane_g7

0x493c,	// (0x00022dc3) bg_popup_fep_shadow_pane_g8

0x7901,	// (0x00025d88) grid_vkb_keypad_number_pane_ParamLimits

0x7901,	// (0x00025d88) grid_vkb_keypad_number_pane

0x7911,	// (0x00025d98) grid_vkb_keypad_pane_ParamLimits

0x7911,	// (0x00025d98) grid_vkb_keypad_pane

0x7937,	// (0x00025dbe) fep_vkb_bottom_pane_g1_ParamLimits

0x7937,	// (0x00025dbe) fep_vkb_bottom_pane_g1

0x7960,	// (0x00025de7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7960,	// (0x00025de7) grid_vkb_keypad_bottom_left_pane

0x7975,	// (0x00025dfc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7975,	// (0x00025dfc) grid_vkb_keypad_bottom_right_pane

0x798a,	// (0x00025e11) fep_vkb_top_text_pane_g1

0xad53,	// (0x000291da) fep_vkb_top_text_pane_t1

0xad68,	// (0x000291ef) cell_vkb_side_pane_ParamLimits

0xad68,	// (0x000291ef) cell_vkb_side_pane

0x75f6,	// (0x00025a7d) cell_vkb_side_pane_g1

0x79b2,	// (0x00025e39) cell_vkb_keypad_pane_ParamLimits

0x79b2,	// (0x00025e39) cell_vkb_keypad_pane

0x7a3b,	// (0x00025ec2) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0002dfe3) bg_popup_fep_shadow_pane_g

0xae27,	// (0x000292ae) cell_hwr_side_pane_g1

0xae27,	// (0x000292ae) cell_hwr_side_pane_g2

0x7a45,	// (0x00025ecc) cell_vkb_keypad_pane_t1

0xad8b,	// (0x00029212) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xad8b,	// (0x00029212) cell_vkb_keypad_bottom_left_pane

0xada8,	// (0x0002922f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xada8,	// (0x0002922f) cell_vkb_keypad_bottom_right_pane

0x75f6,	// (0x00025a7d) cell_vkb_keypad_bottom_left_pane_g1

0x75f6,	// (0x00025a7d) cell_vkb_keypad_bottom_right_pane_g1

0x7a53,	// (0x00025eda) cell_vkb_keypad_number_pane_ParamLimits

0x7a53,	// (0x00025eda) cell_vkb_keypad_number_pane

0x7a72,	// (0x00025ef9) cell_vkb_keypad_number_pane_g1

0x7a7c,	// (0x00025f03) cell_vkb_keypad_number_pane_g2

0x7a85,	// (0x00025f0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0002dfd5) cell_vkb_keypad_number_pane_g

0x7a45,	// (0x00025ecc) cell_vkb_keypad_number_pane_t1

0x7aab,	// (0x00025f32) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0002dff6) cell_hwr_side_pane_g

0x7ac4,	// (0x00025f4b) cell_hwr_side_pane_t1

0xae31,	// (0x000292b8) cell_hwr_side_pane_t1_copy1

0xae3f,	// (0x000292c6) cell_hwr_candidate_pane_g1

0xae6e,	// (0x000292f5) cell_hwr_candidate_pane_t1

0x75f6,	// (0x00025a7d) cell_vkb_candidate_pane_g2

0x7b4a,	// (0x00025fd1) cell_vkb_candidate_pane_t1

0xaaf0,	// (0x00028f77) bg_popup_fep_shadow_pane_ParamLimits

0xaaf0,	// (0x00028f77) bg_popup_fep_shadow_pane

0xaba5,	// (0x0002902c) bg_fep_hwr_top_pane_g4

0x768a,	// (0x00025b11) bg_hwr_side_pane_g1_ParamLimits

0x768a,	// (0x00025b11) bg_hwr_side_pane_g1

0xac16,	// (0x0002909d) cell_hwr_side_pane_ParamLimits

0xac16,	// (0x0002909d) cell_hwr_side_pane

0xac51,	// (0x000290d8) fep_hwr_write_pane_g1_ParamLimits

0xac51,	// (0x000290d8) fep_hwr_write_pane_g1

0xac5e,	// (0x000290e5) fep_hwr_write_pane_g2_ParamLimits

0xac5e,	// (0x000290e5) fep_hwr_write_pane_g2

0xac6b,	// (0x000290f2) fep_hwr_write_pane_g3_ParamLimits

0xac6b,	// (0x000290f2) fep_hwr_write_pane_g3

0xac79,	// (0x00029100) fep_hwr_write_pane_g4_ParamLimits

0xac79,	// (0x00029100) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0002dfa2) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0002dfa2) fep_hwr_write_pane_g

0xaba5,	// (0x0002902c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xaba5,	// (0x0002902c) bg_fep_hwr_candidate_pane_g2

0xac8e,	// (0x00029115) cell_hwr_candidate_pane_ParamLimits

0xac8e,	// (0x00029115) cell_hwr_candidate_pane

0xacd0,	// (0x00029157) fep_hwr_candidate_pane_g1_ParamLimits

0x76ea,	// (0x00025b71) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76ea,	// (0x00025b71) bg_popup_fep_shadow_pane_cp2

0x787d,	// (0x00025d04) fep_vkb_top_pane_g4_ParamLimits

0x787d,	// (0x00025d04) fep_vkb_top_pane_g4

0x789c,	// (0x00025d23) fep_vkb_side_pane_g2_ParamLimits

0x789c,	// (0x00025d23) fep_vkb_side_pane_g2

0xe25c,	// (0x0002c6e3) list_setting_pane_t4_ParamLimits

0xe25c,	// (0x0002c6e3) list_setting_pane_t4

0xe2ee,	// (0x0002c775) list_setting_number_pane_t5_ParamLimits

0xe2ee,	// (0x0002c775) list_setting_number_pane_t5

0x9022,	// (0x000274a9) list_double_heading_pane_cp2_ParamLimits

0x9022,	// (0x000274a9) list_double_heading_pane_cp2

0x48d7,	// (0x00022d5e) list_double_heading_pane_g1_cp2_ParamLimits

0x48d7,	// (0x00022d5e) list_double_heading_pane_g1_cp2

0x48e3,	// (0x00022d6a) list_double_heading_pane_g2_cp2_ParamLimits

0x48e3,	// (0x00022d6a) list_double_heading_pane_g2_cp2

0x7b58,	// (0x00025fdf) list_double_heading_pane_t1_cp2_ParamLimits

0x7b58,	// (0x00025fdf) list_double_heading_pane_t1_cp2

0x7b6e,	// (0x00025ff5) list_double_heading_pane_t2_cp2_ParamLimits

0x7b6e,	// (0x00025ff5) list_double_heading_pane_t2_cp2

0x41fe,	// (0x00022685) aid_value_unit2

0x88ed,	// (0x00026d74) popup_preview_fixed_window

0x43a9,	// (0x00022830) bg_popup_preview_window_pane_cp02

0x7b80,	// (0x00026007) list_preview_fixed_pane

0x7bc6,	// (0x0002604d) list_empty_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_empty_pane_fp

0x7bc6,	// (0x0002604d) list_single_cale_day_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_cale_day_pane_fp

0x7bc6,	// (0x0002604d) list_single_graphic_heading_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_graphic_heading_pane_fp

0x7bc6,	// (0x0002604d) list_single_graphic_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_graphic_pane_fp

0x7bc6,	// (0x0002604d) list_single_heading_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_heading_pane_fp

0x7bc6,	// (0x0002604d) list_single_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_pane_fp

0x7bdd,	// (0x00026064) list_single_pane_fp_g1_ParamLimits

0x7bdd,	// (0x00026064) list_single_pane_fp_g1

0xe0c0,	// (0x0002c547) list_single_pane_fp_g2_ParamLimits

0xe0c0,	// (0x0002c547) list_single_pane_fp_g2

0xea4c,	// (0x0002ced3) list_single_pane_fp_g3_ParamLimits

0xea4c,	// (0x0002ced3) list_single_pane_fp_g3

0x7be9,	// (0x00026070) list_single_pane_fp_g4_ParamLimits

0x7be9,	// (0x00026070) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0002e009) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0002e009) list_single_pane_fp_g

0xea60,	// (0x0002cee7) list_single_pane_fp_t1_ParamLimits

0xea60,	// (0x0002cee7) list_single_pane_fp_t1

0xea77,	// (0x0002cefe) list_single_graphic_pane_fp_g1_ParamLimits

0xea77,	// (0x0002cefe) list_single_graphic_pane_fp_g1

0x7bdd,	// (0x00026064) list_single_graphic_pane_fp_g2_ParamLimits

0x7bdd,	// (0x00026064) list_single_graphic_pane_fp_g2

0xe0c0,	// (0x0002c547) list_single_graphic_pane_fp_g3_ParamLimits

0xe0c0,	// (0x0002c547) list_single_graphic_pane_fp_g3

0xea4c,	// (0x0002ced3) list_single_graphic_pane_fp_g4_ParamLimits

0xea4c,	// (0x0002ced3) list_single_graphic_pane_fp_g4

0x7be9,	// (0x00026070) list_single_graphic_pane_fp_g5_ParamLimits

0x7be9,	// (0x00026070) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e012) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e012) list_single_graphic_pane_fp_g

0xea83,	// (0x0002cf0a) list_single_graphic_pane_fp_t1_ParamLimits

0xea83,	// (0x0002cf0a) list_single_graphic_pane_fp_t1

0xea77,	// (0x0002cefe) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xea77,	// (0x0002cefe) list_single_graphic_heading_pane_fp_g1

0x7bdd,	// (0x00026064) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7bdd,	// (0x00026064) list_single_graphic_heading_pane_fp_g2

0xe0c0,	// (0x0002c547) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe0c0,	// (0x0002c547) list_single_graphic_heading_pane_fp_g3

0xea4c,	// (0x0002ced3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xea4c,	// (0x0002ced3) list_single_graphic_heading_pane_fp_g4

0x7be9,	// (0x00026070) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7be9,	// (0x00026070) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e012) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e012) list_single_graphic_heading_pane_fp_g

0xea99,	// (0x0002cf20) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xea99,	// (0x0002cf20) list_single_graphic_heading_pane_fp_t1

0xeaaf,	// (0x0002cf36) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeaaf,	// (0x0002cf36) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0002e01d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0002e01d) list_single_graphic_heading_pane_fp_t

0xeac1,	// (0x0002cf48) list_single_cale_day_pane_fp_g1_ParamLimits

0xeac1,	// (0x0002cf48) list_single_cale_day_pane_fp_g1

0x7bf5,	// (0x0002607c) list_single_cale_day_pane_fp_g2_ParamLimits

0x7bf5,	// (0x0002607c) list_single_cale_day_pane_fp_g2

0xeaf9,	// (0x0002cf80) list_single_cale_day_pane_fp_g3_ParamLimits

0xeaf9,	// (0x0002cf80) list_single_cale_day_pane_fp_g3

0xeb21,	// (0x0002cfa8) list_single_cale_day_pane_fp_g4_ParamLimits

0xeb21,	// (0x0002cfa8) list_single_cale_day_pane_fp_g4

0xeb45,	// (0x0002cfcc) list_single_cale_day_pane_fp_g5_ParamLimits

0xeb45,	// (0x0002cfcc) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0002e022) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002e022) list_single_cale_day_pane_fp_g

0xeb69,	// (0x0002cff0) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb69,	// (0x0002cff0) list_single_cale_day_pane_fp_t1

0xeb8f,	// (0x0002d016) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb8f,	// (0x0002d016) list_single_cale_day_pane_fp_t2

0xeba8,	// (0x0002d02f) list_single_cale_day_pane_fp_t3_ParamLimits

0xeba8,	// (0x0002d02f) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0002e02d) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0002e02d) list_single_cale_day_pane_fp_t

0x7bdd,	// (0x00026064) list_empty_pane_fp_g1_ParamLimits

0x7bdd,	// (0x00026064) list_empty_pane_fp_g1

0xebc1,	// (0x0002d048) list_empty_pane_fp_t1

0xebcf,	// (0x0002d056) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0002e034) list_empty_pane_fp_t

0x7bdd,	// (0x00026064) list_single_heading_pane_fp_g1_ParamLimits

0x7bdd,	// (0x00026064) list_single_heading_pane_fp_g1

0xe0c0,	// (0x0002c547) list_single_heading_pane_fp_g2_ParamLimits

0xe0c0,	// (0x0002c547) list_single_heading_pane_fp_g2

0xea4c,	// (0x0002ced3) list_single_heading_pane_fp_g3_ParamLimits

0xea4c,	// (0x0002ced3) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0002e039) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0002e039) list_single_heading_pane_fp_g

0xebdd,	// (0x0002d064) list_single_heading_pane_fp_t1_ParamLimits

0xebdd,	// (0x0002d064) list_single_heading_pane_fp_t1

0xebef,	// (0x0002d076) list_single_heading_pane_fp_t2_ParamLimits

0xebef,	// (0x0002d076) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0002e040) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0002e040) list_single_heading_pane_fp_t

0x4a20,	// (0x00022ea7) aid_size_cell_fast

0x438c,	// (0x00022813) soft_indicator_pane_cp1_t1

0x4a5d,	// (0x00022ee4) cell_app_pane_cp2_ParamLimits

0x4a5d,	// (0x00022ee4) cell_app_pane_cp2

0xab12,	// (0x00028f99) fep_hwr_candidate_drop_down_list_pane

0xacea,	// (0x00029171) fep_hwr_candidate_pane_g3_ParamLimits

0xacea,	// (0x00029171) fep_hwr_candidate_pane_g3

0x3c07,	// (0x0002208e) fep_hwr_candidate_pane_g4_ParamLimits

0x3c07,	// (0x0002208e) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0002dfaf) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0002dfaf) fep_hwr_candidate_pane_g

0x7764,	// (0x00025beb) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7764,	// (0x00025beb) fep_vkb_candidate_drop_down_list_pane

0x7ab3,	// (0x00025f3a) fep_vkb_candidate_pane_g3

0x7abb,	// (0x00025f42) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0002dfdc) fep_vkb_candidate_pane_g

0xae3f,	// (0x000292c6) cell_hwr_candidate_pane_g1_ParamLimits

0xae4d,	// (0x000292d4) cell_hwr_candidate_pane_g3_ParamLimits

0xae4d,	// (0x000292d4) cell_hwr_candidate_pane_g3

0xc307,	// (0x0002a78e) cell_hwr_candidate_pane_g4_ParamLimits

0xc307,	// (0x0002a78e) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0002dffb) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0002dffb) cell_hwr_candidate_pane_g

0x7b14,	// (0x00025f9b) cell_vkb_candidate_pane_g3_ParamLimits

0x7b14,	// (0x00025f9b) cell_vkb_candidate_pane_g3

0x7b2f,	// (0x00025fb6) cell_vkb_candidate_pane_g4_ParamLimits

0x7b2f,	// (0x00025fb6) cell_vkb_candidate_pane_g4

0xae8c,	// (0x00029313) cell_app_pane_cp2_g1_ParamLimits

0xae8c,	// (0x00029313) cell_app_pane_cp2_g1

0xaeaa,	// (0x00029331) cell_app_pane_cp2_g2_ParamLimits

0xaeaa,	// (0x00029331) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002e045) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002e045) cell_app_pane_cp2_g

0xaeb6,	// (0x0002933d) cell_app_pane_cp2_t1_ParamLimits

0xaeb6,	// (0x0002933d) cell_app_pane_cp2_t1

0x48bd,	// (0x00022d44) grid_highlight_pane_cp1_ParamLimits

0x48bd,	// (0x00022d44) grid_highlight_pane_cp1

0xaec8,	// (0x0002934f) cell_hwr_candidate_pane_cp1_ParamLimits

0xaec8,	// (0x0002934f) cell_hwr_candidate_pane_cp1

0xae3f,	// (0x000292c6) fep_hwr_candidate_drop_down_list_pane_g1

0xaee7,	// (0x0002936e) fep_hwr_candidate_drop_down_list_pane_g2

0xaef4,	// (0x0002937b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002e04a) fep_hwr_candidate_drop_down_list_pane_g

0xaf01,	// (0x00029388) fep_hwr_candidate_drop_down_list_scroll_pane

0xaf0a,	// (0x00029391) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xaf0a,	// (0x00029391) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xaf17,	// (0x0002939e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xaf17,	// (0x0002939e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xaf24,	// (0x000293ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xaf24,	// (0x000293ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xaf31,	// (0x000293b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xaf31,	// (0x000293b8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xaf4c,	// (0x000293d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xaf4c,	// (0x000293d3) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xaf67,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xaf67,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xaf82,	// (0x00029409) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xaf82,	// (0x00029409) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xaf9d,	// (0x00029424) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xaf9d,	// (0x00029424) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0002e051) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0002e051) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xafb8,	// (0x0002943f) cell_vkb_candidate_pane_cp1_ParamLimits

0xafb8,	// (0x0002943f) cell_vkb_candidate_pane_cp1

0x787d,	// (0x00025d04) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x787d,	// (0x00025d04) fep_vkb_candidate_drop_down_list_pane_g1

0xafd8,	// (0x0002945f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xafd8,	// (0x0002945f) fep_vkb_candidate_drop_down_list_pane_g2

0xafe5,	// (0x0002946c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xafe5,	// (0x0002946c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0002e062) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0002e062) fep_vkb_candidate_drop_down_list_pane_g

0xaff2,	// (0x00029479) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xaff2,	// (0x00029479) fep_vkb_candidate_drop_down_list_scroll_pane

0xafff,	// (0x00029486) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xafff,	// (0x00029486) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb00c,	// (0x00029493) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb00c,	// (0x00029493) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb018,	// (0x0002949f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb018,	// (0x0002949f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7ad2,	// (0x00025f59) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ad2,	// (0x00025f59) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7af3,	// (0x00025f7a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7af3,	// (0x00025f7a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb024,	// (0x000294ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb024,	// (0x000294ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb045,	// (0x000294cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb045,	// (0x000294cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb066,	// (0x000294ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb066,	// (0x000294ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0002e069) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0002e069) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x89f7,	// (0x00026e7e) title_pane_g1_ParamLimits

0x8a04,	// (0x00026e8b) title_pane_g2_ParamLimits

0xf56a,	// (0x0002d9f1) title_pane_g_ParamLimits

0x4ded,	// (0x00023274) aid_call2_pane

0x4de5,	// (0x0002326c) aid_call_pane

0x4df5,	// (0x0002327c) popup_clock_analogue_window_g1

0x4df5,	// (0x0002327c) popup_clock_analogue_window_g2

0x9003,	// (0x0002748a) popup_clock_analogue_window_g3

0x900c,	// (0x00027493) popup_clock_analogue_window_g4

0x4210,	// (0x00022697) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0002db96) popup_clock_analogue_window_g

0x9014,	// (0x0002749b) popup_clock_analogue_window_t1

0x904b,	// (0x000274d2) clock_digital_number_pane_ParamLimits

0x904b,	// (0x000274d2) clock_digital_number_pane

0x9057,	// (0x000274de) clock_digital_number_pane_cp02_ParamLimits

0x9057,	// (0x000274de) clock_digital_number_pane_cp02

0x9063,	// (0x000274ea) clock_digital_number_pane_cp03_ParamLimits

0x9063,	// (0x000274ea) clock_digital_number_pane_cp03

0x906f,	// (0x000274f6) clock_digital_number_pane_cp04_ParamLimits

0x906f,	// (0x000274f6) clock_digital_number_pane_cp04

0x907b,	// (0x00027502) clock_digital_separator_pane_ParamLimits

0x907b,	// (0x00027502) clock_digital_separator_pane

0x9087,	// (0x0002750e) popup_clock_digital_window_t1_ParamLimits

0x9087,	// (0x0002750e) popup_clock_digital_window_t1

0x4210,	// (0x00022697) clock_digital_number_pane_g1

0x4210,	// (0x00022697) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0002dba1) clock_digital_number_pane_g

0x4210,	// (0x00022697) clock_digital_separator_pane_g1

0x4210,	// (0x00022697) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0002dba1) clock_digital_separator_pane_g

0x9a71,	// (0x00027ef8) aid_fill_nsta_ParamLimits

0x9b3a,	// (0x00027fc1) indicator_nsta_pane_ParamLimits

0x573f,	// (0x00023bc6) popup_clock_analogue_window

0x573f,	// (0x00023bc6) popup_clock_digital_window

0x4276,	// (0x000226fd) grid_indicator_nsta_pane_ParamLimits

0x729c,	// (0x00025723) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0002df2f) clock_nsta_pane_t

0x8fc7,	// (0x0002744e) aid_size_max_handle

0x8fd1,	// (0x00027458) aid_size_min_handle

0x5304,	// (0x0002378b) editor_scroll_pane

0xb081,	// (0x00029508) ex_editor_pane

0x49dc,	// (0x00022e63) scroll_pane_cp13

0x485c,	// (0x00022ce3) scroll_pane_cp14

0x4e1f,	// (0x000232a6) scroll_pane_cp36

0x9034,	// (0x000274bb) list_single_graphic_hl_pane_cp2_ParamLimits

0x9034,	// (0x000274bb) list_single_graphic_hl_pane_cp2

0xa561,	// (0x000289e8) list_single_graphic_hl_pane_ParamLimits

0xa561,	// (0x000289e8) list_single_graphic_hl_pane

0xec05,	// (0x0002d08c) aid_size_min_hl_cp1

0xb089,	// (0x00029510) list_highlight_pane_cp34_ParamLimits

0xb089,	// (0x00029510) list_highlight_pane_cp34

0xb09a,	// (0x00029521) list_single_graphic_hl_pane_g1_ParamLimits

0xb09a,	// (0x00029521) list_single_graphic_hl_pane_g1

0xec0e,	// (0x0002d095) list_single_graphic_hl_pane_g2_ParamLimits

0xec0e,	// (0x0002d095) list_single_graphic_hl_pane_g2

0xec0e,	// (0x0002d095) list_single_graphic_hl_pane_g3_ParamLimits

0xec0e,	// (0x0002d095) list_single_graphic_hl_pane_g3

0xec1a,	// (0x0002d0a1) list_single_graphic_hl_pane_g4_ParamLimits

0xec1a,	// (0x0002d0a1) list_single_graphic_hl_pane_g4

0xec26,	// (0x0002d0ad) list_single_graphic_hl_pane_g5_ParamLimits

0xec26,	// (0x0002d0ad) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0002e07a) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0002e07a) list_single_graphic_hl_pane_g

0xec3a,	// (0x0002d0c1) list_single_graphic_hl_pane_t1_ParamLimits

0xec3a,	// (0x0002d0c1) list_single_graphic_hl_pane_t1

0xb0a7,	// (0x0002952e) aid_size_min_hl_cp2

0xb0b0,	// (0x00029537) list_highlight_pane_cp34_cp2_ParamLimits

0xb0b0,	// (0x00029537) list_highlight_pane_cp34_cp2

0xb09a,	// (0x00029521) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb09a,	// (0x00029521) list_single_graphic_hl_pane_g1_cp2

0xb0bd,	// (0x00029544) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb0bd,	// (0x00029544) list_single_graphic_hl_pane_g2_cp2

0xb0c9,	// (0x00029550) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb0c9,	// (0x00029550) list_single_graphic_hl_pane_g3_cp2

0x523b,	// (0x000236c2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x523b,	// (0x000236c2) list_single_graphic_hl_pane_g4_cp2

0xb0d7,	// (0x0002955e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb0d7,	// (0x0002955e) list_single_graphic_hl_pane_g5_cp2

0x94b0,	// (0x00027937) control_pane_g4_ParamLimits

0x94b0,	// (0x00027937) control_pane_g4

0x4a14,	// (0x00022e9b) bg_popup_sub_pane_cp10_ParamLimits

0x7600,	// (0x00025a87) list_choice_list_pane_ParamLimits

0x760f,	// (0x00025a96) scroll_pane_cp23

0x43a9,	// (0x00022830) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b80,	// (0x00026007) list_preview_fixed_pane_ParamLimits

0x7b96,	// (0x0002601d) list_preview_fixed_pane_cp_ParamLimits

0x7b96,	// (0x0002601d) list_preview_fixed_pane_cp

0x7ba2,	// (0x00026029) popup_preview_fixed_window_g1_ParamLimits

0x7ba2,	// (0x00026029) popup_preview_fixed_window_g1

0x7bae,	// (0x00026035) popup_preview_fixed_window_g2_ParamLimits

0x7bae,	// (0x00026035) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0002e002) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0002e002) popup_preview_fixed_window_g

0x8eb6,	// (0x0002733d) aid_navi_side_left_pane_ParamLimits

0x8ecb,	// (0x00027352) aid_navi_side_right_pane_ParamLimits

0x8ee3,	// (0x0002736a) navi_icon_pane_stacon_ParamLimits

0x8ef7,	// (0x0002737e) navi_navi_pane_stacon_ParamLimits

0x8ee3,	// (0x0002736a) navi_text_pane_stacon_ParamLimits

0x4206,	// (0x0002268d) main_text_info_pane

0xb101,	// (0x00029588) listscroll_text_info_pane

0xb109,	// (0x00029590) list_text_info_pane_ParamLimits

0xb109,	// (0x00029590) list_text_info_pane

0xb118,	// (0x0002959f) scroll_pane_cp24_ParamLimits

0xb118,	// (0x0002959f) scroll_pane_cp24

0xb136,	// (0x000295bd) list_text_info_pane_t1_ParamLimits

0xb136,	// (0x000295bd) list_text_info_pane_t1

0x9602,	// (0x00027a89) popup_fast_swap2_window_ParamLimits

0x9602,	// (0x00027a89) popup_fast_swap2_window

0xb16f,	// (0x000295f6) aid_size_cell_fast2

0x4206,	// (0x0002268d) bg_popup_window_pane_cp17

0x5be3,	// (0x0002406a) heading_pane_cp2

0x458f,	// (0x00022a16) listscroll_fast2_pane

0xb179,	// (0x00029600) grid_fast2_pane

0xb183,	// (0x0002960a) listscroll_fast2_pane_g1

0xb18b,	// (0x00029612) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0002e085) listscroll_fast2_pane_g

0x49dc,	// (0x00022e63) scroll_pane_cp26

0xb195,	// (0x0002961c) cell_fast2_pane_ParamLimits

0xb195,	// (0x0002961c) cell_fast2_pane

0xb1aa,	// (0x00029631) cell_fast2_pane_g1

0xb1b3,	// (0x0002963a) cell_fast2_pane_g2

0xb1bc,	// (0x00029643) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0002e08a) cell_fast2_pane_g

0x4623,	// (0x00022aaa) grid_highlight_pane_cp9

0x4638,	// (0x00022abf) main_eswt_pane_ParamLimits

0x4638,	// (0x00022abf) main_eswt_pane

0xb12d,	// (0x000295b4) list_single_text_info_pane

0xb1c4,	// (0x0002964b) eswt_ctrl_button_pane

0xb1c4,	// (0x0002964b) eswt_ctrl_canvas_pane

0xb1cc,	// (0x00029653) eswt_ctrl_combo_pane

0xb1c4,	// (0x0002964b) eswt_ctrl_default_pane

0xb1c4,	// (0x0002964b) eswt_ctrl_label_pane

0xb1d4,	// (0x0002965b) eswt_ctrl_wait_pane

0xb1dc,	// (0x00029663) eswt_shell_pane

0x4206,	// (0x0002268d) listscroll_eswt_app_pane

0xb1fc,	// (0x00029683) popup_eswt_tasktip_window_ParamLimits

0xb1fc,	// (0x00029683) popup_eswt_tasktip_window

0x593c,	// (0x00023dc3) bg_popup_window_pane_cp18

0xb20d,	// (0x00029694) eswt_control_pane_g1_ParamLimits

0xb20d,	// (0x00029694) eswt_control_pane_g1

0xb21a,	// (0x000296a1) eswt_control_pane_g2_ParamLimits

0xb21a,	// (0x000296a1) eswt_control_pane_g2

0xb227,	// (0x000296ae) eswt_control_pane_g3_ParamLimits

0xb227,	// (0x000296ae) eswt_control_pane_g3

0xb234,	// (0x000296bb) eswt_control_pane_g4_ParamLimits

0xb234,	// (0x000296bb) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0002e091) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0002e091) eswt_control_pane_g

0x48bd,	// (0x00022d44) bg_button_pane_ParamLimits

0x48bd,	// (0x00022d44) bg_button_pane

0x4638,	// (0x00022abf) common_borders_pane_copy2_ParamLimits

0x4638,	// (0x00022abf) common_borders_pane_copy2

0xb241,	// (0x000296c8) control_button_pane_g1_ParamLimits

0xb241,	// (0x000296c8) control_button_pane_g1

0xb24d,	// (0x000296d4) control_button_pane_g2_ParamLimits

0xb24d,	// (0x000296d4) control_button_pane_g2

0xb259,	// (0x000296e0) control_button_pane_g3_ParamLimits

0xb259,	// (0x000296e0) control_button_pane_g3

0x0002,

0xfc13,	// (0x0002e09a) control_button_pane_g_ParamLimits

0xfc13,	// (0x0002e09a) control_button_pane_g

0xb26d,	// (0x000296f4) control_button_pane_t1

0xb27b,	// (0x00029702) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0002e0a1) control_button_pane_t

0x584c,	// (0x00023cd3) bg_button_pane_g1

0x5854,	// (0x00023cdb) bg_button_pane_g2

0x585c,	// (0x00023ce3) bg_button_pane_g3

0x5864,	// (0x00023ceb) bg_button_pane_g4

0x586c,	// (0x00023cf3) bg_button_pane_g5

0x5874,	// (0x00023cfb) bg_button_pane_g6

0x587c,	// (0x00023d03) bg_button_pane_g7

0x5884,	// (0x00023d0b) bg_button_pane_g8

0x588c,	// (0x00023d13) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0002dcf4) bg_button_pane_g

0x75bb,	// (0x00025a42) common_borders_pane_ParamLimits

0x75bb,	// (0x00025a42) common_borders_pane

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy1_ParamLimits

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy1

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy1_ParamLimits

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy1

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy1_ParamLimits

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy1

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy1_ParamLimits

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy1

0x75f6,	// (0x00025a7d) bg_eswt_ctrl_canvas_pane_g1

0x75bb,	// (0x00025a42) common_borders_pane_cp2_ParamLimits

0x75bb,	// (0x00025a42) common_borders_pane_cp2

0x75bb,	// (0x00025a42) common_borders_pane_cp3_ParamLimits

0x75bb,	// (0x00025a42) common_borders_pane_cp3

0xb289,	// (0x00029710) separator_horizontal_pane

0xb291,	// (0x00029718) separator_vertical_pane

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy2_ParamLimits

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy2

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy2_ParamLimits

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy2

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy2_ParamLimits

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy2

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy2_ParamLimits

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy2

0x4206,	// (0x0002268d) common_borders_pane_cp4

0xb29a,	// (0x00029721) separator_horizontal_pane_g1

0xb2a3,	// (0x0002972a) separator_horizontal_pane_g2

0xb2ac,	// (0x00029733) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0002e0a6) separator_horizontal_pane_g

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy3_ParamLimits

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy3

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy3_ParamLimits

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy3

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy3_ParamLimits

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy3

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy3_ParamLimits

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy3

0x4206,	// (0x0002268d) common_borders_pane_cp5

0xb2b5,	// (0x0002973c) separator_vertical_pane_g1

0xb2be,	// (0x00029745) separator_vertical_pane_g2

0xb2c7,	// (0x0002974e) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0002e0ad) separator_vertical_pane_g

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy4_ParamLimits

0xb20d,	// (0x00029694) eswt_control_pane_g1_copy4

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy4_ParamLimits

0xb21a,	// (0x000296a1) eswt_control_pane_g2_copy4

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy4_ParamLimits

0xb227,	// (0x000296ae) eswt_control_pane_g3_copy4

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy4_ParamLimits

0xb234,	// (0x000296bb) eswt_control_pane_g4_copy4

0xb2d0,	// (0x00029757) eswt_ctrl_combo_button_pane

0xb2d8,	// (0x0002975f) eswt_ctrl_input_pane

0xb2e0,	// (0x00029767) popup_choice_list_window_cp70

0xb2e8,	// (0x0002976f) eswt_ctrl_input_pane_t1

0x4206,	// (0x0002268d) input_focus_pane_cp70

0x75bb,	// (0x00025a42) bg_button_pane_cp70_ParamLimits

0x75bb,	// (0x00025a42) bg_button_pane_cp70

0xb2f6,	// (0x0002977d) eswt_ctrl_combo_button_pane_g1

0xb2fe,	// (0x00029785) wait_bar_pane_cp70

0x593c,	// (0x00023dc3) bg_popup_window_pane_cp70_ParamLimits

0x593c,	// (0x00023dc3) bg_popup_window_pane_cp70

0xb306,	// (0x0002978d) popup_eswt_tasktip_window_t1

0xb31c,	// (0x000297a3) wait_bar_pane_cp71_ParamLimits

0xb31c,	// (0x000297a3) wait_bar_pane_cp71

0xb328,	// (0x000297af) grid_eswt_app_pane

0x4c34,	// (0x000230bb) scroll_pane_cp70

0xb331,	// (0x000297b8) cell_eswt_app_pane_ParamLimits

0xb331,	// (0x000297b8) cell_eswt_app_pane

0xb365,	// (0x000297ec) cell_eswt_app_pane_g1_ParamLimits

0xb365,	// (0x000297ec) cell_eswt_app_pane_g1

0xb394,	// (0x0002981b) cell_eswt_app_pane_g2_ParamLimits

0xb394,	// (0x0002981b) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0002e0b4) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0002e0b4) cell_eswt_app_pane_g

0xb3bd,	// (0x00029844) cell_eswt_app_pane_t1_ParamLimits

0xb3bd,	// (0x00029844) cell_eswt_app_pane_t1

0xb3ef,	// (0x00029876) grid_highlight_pane_cp70_ParamLimits

0xb3ef,	// (0x00029876) grid_highlight_pane_cp70

0x51d7,	// (0x0002365e) set_content_pane_g1

0x54db,	// (0x00023962) status_small_volume_pane

0xb3fb,	// (0x00029882) status_small_volume_pane_g1

0xb403,	// (0x0002988a) volume_small2_pane

0xb40c,	// (0x00029893) volume_small2_pane_g1

0xb415,	// (0x0002989c) volume_small2_pane_g2

0xb41e,	// (0x000298a5) volume_small2_pane_g3

0xb427,	// (0x000298ae) volume_small2_pane_g4

0xb430,	// (0x000298b7) volume_small2_pane_g5

0xb439,	// (0x000298c0) volume_small2_pane_g6

0xb442,	// (0x000298c9) volume_small2_pane_g7

0xb44b,	// (0x000298d2) volume_small2_pane_g8

0xb454,	// (0x000298db) volume_small2_pane_g9

0xb45d,	// (0x000298e4) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0002e0b9) volume_small2_pane_g

0x798a,	// (0x00025e11) fep_vkb_top_text_pane_g1_ParamLimits

0xad53,	// (0x000291da) fep_vkb_top_text_pane_t1_ParamLimits

0x7bba,	// (0x00026041) popup_preview_fixed_window_g3_ParamLimits

0x7bba,	// (0x00026041) popup_preview_fixed_window_g3

0x9a04,	// (0x00027e8b) popup_toolbar_trans_pane

0xa3f6,	// (0x0002887d) aid_height_set_list_ParamLimits

0x62a4,	// (0x0002472b) aid_size_parent_ParamLimits

0x4a14,	// (0x00022e9b) list_highlight_pane_cp2_ParamLimits

0x51d7,	// (0x0002365e) set_content_pane_g1_ParamLimits

0xe7b4,	// (0x0002cc3b) list_single_image_pane_ParamLimits

0xe7b4,	// (0x0002cc3b) list_single_image_pane

0xb466,	// (0x000298ed) aid_size_cell_image_ParamLimits

0xb466,	// (0x000298ed) aid_size_cell_image

0xb473,	// (0x000298fa) grid_single_image_pane_ParamLimits

0xb473,	// (0x000298fa) grid_single_image_pane

0x48d7,	// (0x00022d5e) list_single_image_pane_g1_ParamLimits

0x48d7,	// (0x00022d5e) list_single_image_pane_g1

0x48e3,	// (0x00022d6a) list_single_image_pane_g2_ParamLimits

0x48e3,	// (0x00022d6a) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0002e0ce) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0002e0ce) list_single_image_pane_g

0xb47f,	// (0x00029906) list_single_image_pane_t1_ParamLimits

0xb47f,	// (0x00029906) list_single_image_pane_t1

0xb495,	// (0x0002991c) cell_image_list_pane_ParamLimits

0xb495,	// (0x0002991c) cell_image_list_pane

0xb4a9,	// (0x00029930) cell_image_list_pane_g1

0xb4b2,	// (0x00029939) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0002e0d3) cell_image_list_pane_g

0xb4bb,	// (0x00029942) aid_size_cell_tb_trans_pane

0x48bd,	// (0x00022d44) bg_tb_trans_pane

0xb4cd,	// (0x00029954) grid_tb_trans_pane

0x584c,	// (0x00023cd3) bg_tb_trans_pane_g1

0x5854,	// (0x00023cdb) bg_tb_trans_pane_g2

0x585c,	// (0x00023ce3) bg_tb_trans_pane_g3

0x5864,	// (0x00023ceb) bg_tb_trans_pane_g4

0x586c,	// (0x00023cf3) bg_tb_trans_pane_g5

0x5884,	// (0x00023d0b) bg_tb_trans_pane_g6

0x588c,	// (0x00023d13) bg_tb_trans_pane_g7

0x5874,	// (0x00023cfb) bg_tb_trans_pane_g8

0x587c,	// (0x00023d03) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0002e0d8) bg_tb_trans_pane_g

0xb4e1,	// (0x00029968) cell_toolbar_trans_pane_ParamLimits

0xb4e1,	// (0x00029968) cell_toolbar_trans_pane

0x75f6,	// (0x00025a7d) cell_toolbar_trans_pane_g1

0xa926,	// (0x00028dad) list_form2_midp_pane_t1

0xa934,	// (0x00028dbb) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0002df75) list_form2_midp_pane_t

0x7353,	// (0x000257da) scroll_pane_cp51_ParamLimits

0x74c9,	// (0x00025950) form2_midp_wait_pane_g1

0x74d2,	// (0x00025959) form2_midp_wait_pane_g2

0x74db,	// (0x00025962) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0002df8a) form2_midp_wait_pane_g

0x4276,	// (0x000226fd) list_highlight_pane_cp21_ParamLimits

0x74fb,	// (0x00025982) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x750a,	// (0x00025991) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe740,	// (0x0002cbc7) list_single_2graphic_im_pane_ParamLimits

0xe740,	// (0x0002cbc7) list_single_2graphic_im_pane

0xb507,	// (0x0002998e) list_single_2graphic_im_pane_g1_ParamLimits

0xb507,	// (0x0002998e) list_single_2graphic_im_pane_g1

0xb518,	// (0x0002999f) list_single_2graphic_im_pane_g2_ParamLimits

0xb518,	// (0x0002999f) list_single_2graphic_im_pane_g2

0xb524,	// (0x000299ab) list_single_2graphic_im_pane_g3_ParamLimits

0xb524,	// (0x000299ab) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0002e0eb) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0002e0eb) list_single_2graphic_im_pane_g

0xb544,	// (0x000299cb) list_single_2graphic_im_pane_t1_ParamLimits

0xb544,	// (0x000299cb) list_single_2graphic_im_pane_t1

0x7bc6,	// (0x0002604d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7bc6,	// (0x0002604d) list_single_graphic_2heading_pane_fp

0xea77,	// (0x0002cefe) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xea77,	// (0x0002cefe) list_single_graphic_2heading_pane_fp_g1

0x7bdd,	// (0x00026064) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7bdd,	// (0x00026064) list_single_graphic_2heading_pane_fp_g2

0xe0c0,	// (0x0002c547) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe0c0,	// (0x0002c547) list_single_graphic_2heading_pane_fp_g3

0xea4c,	// (0x0002ced3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xea4c,	// (0x0002ced3) list_single_graphic_2heading_pane_fp_g4

0x7be9,	// (0x00026070) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7be9,	// (0x00026070) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002e012) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002e012) list_single_graphic_2heading_pane_fp_g

0xec50,	// (0x0002d0d7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xec50,	// (0x0002d0d7) list_single_graphic_2heading_pane_fp_t1

0xeaaf,	// (0x0002cf36) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeaaf,	// (0x0002cf36) list_single_graphic_2heading_pane_fp_t2

0xec66,	// (0x0002d0ed) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec66,	// (0x0002d0ed) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0002e0f4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0002e0f4) list_single_graphic_2heading_pane_fp_t

0x7696,	// (0x00025b1d) fep_hwr_write_pane_g5_ParamLimits

0x7696,	// (0x00025b1d) fep_hwr_write_pane_g5

0x76a2,	// (0x00025b29) fep_hwr_write_pane_g6_ParamLimits

0x76a2,	// (0x00025b29) fep_hwr_write_pane_g6

0xb1dc,	// (0x00029663) eswt_shell_pane_ParamLimits

0x593c,	// (0x00023dc3) bg_popup_window_pane_cp18_ParamLimits

0x6928,	// (0x00024daf) heading_pane_cp70

0xb306,	// (0x0002978d) popup_eswt_tasktip_window_t1_ParamLimits

0x9ab1,	// (0x00027f38) aid_touch_tab_arrow_left

0x9ac0,	// (0x00027f47) aid_touch_tab_arrow_right

0x8a15,	// (0x00026e9c) title_pane_g3_ParamLimits

0x8a15,	// (0x00026e9c) title_pane_g3

0x487c,	// (0x00022d03) set_value_pane_g1

0x9a04,	// (0x00027e8b) popup_toolbar_trans_pane_ParamLimits

0xb4bb,	// (0x00029942) aid_size_cell_tb_trans_pane_ParamLimits

0x48bd,	// (0x00022d44) bg_tb_trans_pane_ParamLimits

0xb4cd,	// (0x00029954) grid_tb_trans_pane_ParamLimits

0x43a9,	// (0x00022830) cont_note_pane_ParamLimits

0x43a9,	// (0x00022830) cont_note_pane

0x4638,	// (0x00022abf) cont_snote2_single_text_pane_ParamLimits

0x4638,	// (0x00022abf) cont_snote2_single_text_pane

0x4638,	// (0x00022abf) cont_snote2_single_graphic_pane_ParamLimits

0x4638,	// (0x00022abf) cont_snote2_single_graphic_pane

0x5df9,	// (0x00024280) cont_note_wait_pane_ParamLimits

0x5df9,	// (0x00024280) cont_note_wait_pane

0x5df9,	// (0x00024280) cont_note_image_pane_ParamLimits

0x5df9,	// (0x00024280) cont_note_image_pane

0xb575,	// (0x000299fc) popup_note2_window_g1_ParamLimits

0xb575,	// (0x000299fc) popup_note2_window_g1

0xb5a6,	// (0x00029a2d) popup_note2_window_t1_ParamLimits

0xb5a6,	// (0x00029a2d) popup_note2_window_t1

0xb5eb,	// (0x00029a72) popup_note2_window_t2_ParamLimits

0xb5eb,	// (0x00029a72) popup_note2_window_t2

0xb630,	// (0x00029ab7) popup_note2_window_t3_ParamLimits

0xb630,	// (0x00029ab7) popup_note2_window_t3

0xb675,	// (0x00029afc) popup_note2_window_t4_ParamLimits

0xb675,	// (0x00029afc) popup_note2_window_t4

0x4421,	// (0x000228a8) popup_note2_window_t5_ParamLimits

0x4421,	// (0x000228a8) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0002e100) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0002e100) popup_note2_window_t

0xb6a4,	// (0x00029b2b) popup_note2_image_window_g1_ParamLimits

0xb6a4,	// (0x00029b2b) popup_note2_image_window_g1

0xb6b0,	// (0x00029b37) popup_note2_image_window_g2_ParamLimits

0xb6b0,	// (0x00029b37) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0002e10b) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0002e10b) popup_note2_image_window_g

0xb6c2,	// (0x00029b49) popup_note2_image_window_t1_ParamLimits

0xb6c2,	// (0x00029b49) popup_note2_image_window_t1

0xb6da,	// (0x00029b61) popup_note2_image_window_t2_ParamLimits

0xb6da,	// (0x00029b61) popup_note2_image_window_t2

0xb6f2,	// (0x00029b79) popup_note2_image_window_t3_ParamLimits

0xb6f2,	// (0x00029b79) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0002e110) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0002e110) popup_note2_image_window_t

0x5e07,	// (0x0002428e) popup_note2_wait_window_g1_ParamLimits

0x5e07,	// (0x0002428e) popup_note2_wait_window_g1

0x5e13,	// (0x0002429a) popup_note2_wait_window_g2_ParamLimits

0x5e13,	// (0x0002429a) popup_note2_wait_window_g2

0x5e1f,	// (0x000242a6) popup_note2_wait_window_g3_ParamLimits

0x5e1f,	// (0x000242a6) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0002dcd6) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0002dcd6) popup_note2_wait_window_g

0xb70e,	// (0x00029b95) popup_note2_wait_window_t1_ParamLimits

0xb70e,	// (0x00029b95) popup_note2_wait_window_t1

0xb72c,	// (0x00029bb3) popup_note2_wait_window_t2_ParamLimits

0xb72c,	// (0x00029bb3) popup_note2_wait_window_t2

0xb74a,	// (0x00029bd1) popup_note2_wait_window_t3_ParamLimits

0xb74a,	// (0x00029bd1) popup_note2_wait_window_t3

0xb75c,	// (0x00029be3) popup_note2_wait_window_t4_ParamLimits

0xb75c,	// (0x00029be3) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x0002e117) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x0002e117) popup_note2_wait_window_t

0xb76e,	// (0x00029bf5) wait_bar2_pane_ParamLimits

0xb76e,	// (0x00029bf5) wait_bar2_pane

0xb786,	// (0x00029c0d) popup_snote2_single_text_window_g1_ParamLimits

0xb786,	// (0x00029c0d) popup_snote2_single_text_window_g1

0xb7ae,	// (0x00029c35) popup_snote2_single_text_window_t1_ParamLimits

0xb7ae,	// (0x00029c35) popup_snote2_single_text_window_t1

0xb7fa,	// (0x00029c81) popup_snote2_single_text_window_t2_ParamLimits

0xb7fa,	// (0x00029c81) popup_snote2_single_text_window_t2

0xb846,	// (0x00029ccd) popup_snote2_single_text_window_t3_ParamLimits

0xb846,	// (0x00029ccd) popup_snote2_single_text_window_t3

0xb887,	// (0x00029d0e) popup_snote2_single_text_window_t4_ParamLimits

0xb887,	// (0x00029d0e) popup_snote2_single_text_window_t4

0xb8bd,	// (0x00029d44) popup_snote2_single_text_window_t5_ParamLimits

0xb8bd,	// (0x00029d44) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x0002e120) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x0002e120) popup_snote2_single_text_window_t

0xb8e8,	// (0x00029d6f) popup_snote2_single_graphic_window_g1_ParamLimits

0xb8e8,	// (0x00029d6f) popup_snote2_single_graphic_window_g1

0xb910,	// (0x00029d97) popup_snote2_single_graphic_window_g2_ParamLimits

0xb910,	// (0x00029d97) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x0002e12b) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x0002e12b) popup_snote2_single_graphic_window_g

0xc328,	// (0x0002a7af) popup_snote2_single_graphic_window_t1_ParamLimits

0xc328,	// (0x0002a7af) popup_snote2_single_graphic_window_t1

0xc374,	// (0x0002a7fb) popup_snote2_single_graphic_window_t2_ParamLimits

0xc374,	// (0x0002a7fb) popup_snote2_single_graphic_window_t2

0xb846,	// (0x00029ccd) popup_snote2_single_graphic_window_t3_ParamLimits

0xb846,	// (0x00029ccd) popup_snote2_single_graphic_window_t3

0xb887,	// (0x00029d0e) popup_snote2_single_graphic_window_t4_ParamLimits

0xb887,	// (0x00029d0e) popup_snote2_single_graphic_window_t4

0xb8bd,	// (0x00029d44) popup_snote2_single_graphic_window_t5_ParamLimits

0xb8bd,	// (0x00029d44) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x0002e130) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x0002e130) popup_snote2_single_graphic_window_t

0x7303,	// (0x0002578a) clock_nsta_pane_cp2_t1

0x7303,	// (0x0002578a) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0002df4b) clock_nsta_pane_cp2_t

0xe3f3,	// (0x0002c87a) form_field_data_wide_pane_g1_ParamLimits

0x48d7,	// (0x00022d5e) form_field_data_wide_pane_g2_ParamLimits

0x48d7,	// (0x00022d5e) form_field_data_wide_pane_g2

0x48e3,	// (0x00022d6a) form_field_data_wide_pane_g3_ParamLimits

0x48e3,	// (0x00022d6a) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0002db19) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0002db19) form_field_data_wide_pane_g

0xa79c,	// (0x00028c23) grid_touch_3_pane_ParamLimits

0xa79c,	// (0x00028c23) grid_touch_3_pane

0xc3c0,	// (0x0002a847) cell_touch_3_pane_ParamLimits

0xc3c0,	// (0x0002a847) cell_touch_3_pane

0x75f6,	// (0x00025a7d) cell_touch_3_pane_g1

0x75f6,	// (0x00025a7d) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0002dfd0) cell_touch_3_pane_g

0x4453,	// (0x000228da) cont_query_data_pane

0x445b,	// (0x000228e2) cont_query_data_pane_cp1

0xc3ef,	// (0x0002a876) button_value_adjust_pane_cp7

0xc3f7,	// (0x0002a87e) query_popup_pane_cp3

0x4e51,	// (0x000232d8) bg_popup_sub_pane_cp22_ParamLimits

0x90e2,	// (0x00027569) navi_navi_volume_pane_cp2

0x90fd,	// (0x00027584) popup_side_volume_key_window_g2

0x910c,	// (0x00027593) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0002dbab) popup_side_volume_key_window_g

0x9129,	// (0x000275b0) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0002dbb2) popup_side_volume_key_window_t

0x50a1,	// (0x00023528) popup_side_volume_key_window_ParamLimits

0xe08c,	// (0x0002c513) list_double_graphic_pane_g4_ParamLimits

0xe08c,	// (0x0002c513) list_double_graphic_pane_g4

0xe78d,	// (0x0002cc14) list_single_2heading_msg_pane_ParamLimits

0xe78d,	// (0x0002cc14) list_single_2heading_msg_pane

0xec86,	// (0x0002d10d) list_single_2heading_msg_pane_g1_ParamLimits

0xec86,	// (0x0002d10d) list_single_2heading_msg_pane_g1

0xc210,	// (0x0002a697) list_single_2heading_msg_pane_g2_ParamLimits

0xc210,	// (0x0002a697) list_single_2heading_msg_pane_g2

0xe873,	// (0x0002ccfa) list_single_2heading_msg_pane_g3_ParamLimits

0xe873,	// (0x0002ccfa) list_single_2heading_msg_pane_g3

0xec92,	// (0x0002d119) list_single_2heading_msg_pane_g4_ParamLimits

0xec92,	// (0x0002d119) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x0002e13b) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x0002e13b) list_single_2heading_msg_pane_g

0xecaa,	// (0x0002d131) list_single_2heading_msg_pane_t1_ParamLimits

0xecaa,	// (0x0002d131) list_single_2heading_msg_pane_t1

0xecd2,	// (0x0002d159) list_single_2heading_msg_pane_t2_ParamLimits

0xecd2,	// (0x0002d159) list_single_2heading_msg_pane_t2

0xed06,	// (0x0002d18d) list_single_2heading_msg_pane_t3_ParamLimits

0xed06,	// (0x0002d18d) list_single_2heading_msg_pane_t3

0xed3f,	// (0x0002d1c6) list_single_2heading_msg_pane_t4_ParamLimits

0xed3f,	// (0x0002d1c6) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002e144) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002e144) list_single_2heading_msg_pane_t

0x4224,	// (0x000226ab) title_pane_g4_ParamLimits

0x4224,	// (0x000226ab) title_pane_g4

0x8e06,	// (0x0002728d) title_pane_stacon_g3_ParamLimits

0x8e06,	// (0x0002728d) title_pane_stacon_g3

0xb538,	// (0x000299bf) list_single_2graphic_im_pane_g4_ParamLimits

0xb538,	// (0x000299bf) list_single_2graphic_im_pane_g4

0x674c,	// (0x00024bd3) popup_side_volume_key_window_cp

0x6c24,	// (0x000250ab) main_idle_act2_pane_t1

0x9dba,	// (0x00028241) toolbar_button_pane_g10

0x8d0a,	// (0x00027191) popup_toolbar_window_cp1

0x72f4,	// (0x0002577b) clock_nsta_pane_cp_t1

0x72f4,	// (0x0002577b) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0002df46) clock_nsta_pane_cp_t

0x90e2,	// (0x00027569) navi_navi_volume_pane_cp2_ParamLimits

0x90f1,	// (0x00027578) popup_side_volume_key_window_g1_ParamLimits

0x90fd,	// (0x00027584) popup_side_volume_key_window_g2_ParamLimits

0x910c,	// (0x00027593) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0002dbab) popup_side_volume_key_window_g_ParamLimits

0xaafe,	// (0x00028f85) fep_hwr_aid_pane

0xaba5,	// (0x0002902c) bg_fep_hwr_top_pane_g4_ParamLimits

0x7678,	// (0x00025aff) fep_hwr_top_pane_g1_ParamLimits

0x7666,	// (0x00025aed) fep_hwr_top_pane_g2_ParamLimits

0xabc5,	// (0x0002904c) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0002df9b) fep_hwr_top_pane_g_ParamLimits

0xabda,	// (0x00029061) fep_hwr_top_text_pane_ParamLimits

0x654a,	// (0x000249d1) aid_touch_tab_arrow_arrow_2

0x6541,	// (0x000249c8) aid_touch_tab_arrow_left_2

0xab12,	// (0x00028f99) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xab49,	// (0x00028fd0) fep_hwr_prediction_pane

0x77cd,	// (0x00025c54) fep_vkb_prediction_pane

0xad30,	// (0x000291b7) fep_vkb_side_pane_g3_ParamLimits

0xad30,	// (0x000291b7) fep_vkb_side_pane_g3

0xae3f,	// (0x000292c6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xaee7,	// (0x0002936e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xaef4,	// (0x0002937b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0002e04a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb938,	// (0x00029dbf) fep_hwr_prediction_pane_g1

0xb942,	// (0x00029dc9) fep_hwr_prediction_pane_g2

0x765e,	// (0x00025ae5) fep_hwr_prediction_pane_g3

0xb94a,	// (0x00029dd1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002e14d) fep_hwr_prediction_pane_g

0xc41c,	// (0x0002a8a3) fep_vkb_prediction_pane_g1

0xc426,	// (0x0002a8ad) fep_vkb_prediction_pane_g2

0xc42e,	// (0x0002a8b5) fep_vkb_prediction_pane_g3

0xc436,	// (0x0002a8bd) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002e156) fep_vkb_prediction_pane_g

0xa39e,	// (0x00028825) slider_set_pane_g3

0xa3b2,	// (0x00028839) slider_set_pane_g4

0xa3ca,	// (0x00028851) slider_set_pane_g5

0xa39e,	// (0x00028825) slider_set_pane_g6

0xa3e0,	// (0x00028867) slider_set_pane_g7

0x69ad,	// (0x00024e34) slider_form_pane_g3

0x69b6,	// (0x00024e3d) slider_form_pane_g4

0x69be,	// (0x00024e45) slider_form_pane_g5

0x69ad,	// (0x00024e34) slider_form_pane_g6

0xa549,	// (0x000289d0) slider_form_pane_g7

0x6ec2,	// (0x00025349) slider_set_pane_vc_g3

0x6ecb,	// (0x00025352) slider_set_pane_vc_g4

0x6ed4,	// (0x0002535b) slider_set_pane_vc_g5

0x6ec2,	// (0x00025349) slider_set_pane_vc_g6

0x6edd,	// (0x00025364) slider_set_pane_vc_g7

0x6ec2,	// (0x00025349) slider_form_pane_vc_g1

0x6ecb,	// (0x00025352) slider_form_pane_vc_g2

0x6ed4,	// (0x0002535b) slider_form_pane_vc_g3

0x6ec2,	// (0x00025349) slider_form_pane_vc_g4

0x706c,	// (0x000254f3) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0002df1f) slider_form_pane_vc_g

0x4206,	// (0x0002268d) main_idle_act3_pane

0xc43e,	// (0x0002a8c5) ai3_links_pane

0xc447,	// (0x0002a8ce) popup_ai3_data_window_ParamLimits

0xc447,	// (0x0002a8ce) popup_ai3_data_window

0x4206,	// (0x0002268d) grid_ai3_links_pane

0xc45f,	// (0x0002a8e6) cell_ai3_links_pane_ParamLimits

0xc45f,	// (0x0002a8e6) cell_ai3_links_pane

0xc477,	// (0x0002a8fe) bg_popup_sub_pane_cp11

0xc484,	// (0x0002a90b) cell_ai3_links_pane_g1

0x4206,	// (0x0002268d) bg_popup_sub_pane_cp12

0xc4a9,	// (0x0002a930) heading_ai3_data_pane

0xc4b1,	// (0x0002a938) list_ai3_gene_pane

0xc4bd,	// (0x0002a944) popup_ai3_data_window_g1

0xc4c5,	// (0x0002a94c) heading_ai3_data_pane_g1

0xc4cd,	// (0x0002a954) heading_ai3_data_pane_t1

0xc4db,	// (0x0002a962) list_double_ai3_gene_pane_ParamLimits

0xc4db,	// (0x0002a962) list_double_ai3_gene_pane

0xc4e8,	// (0x0002a96f) list_single_ai3_gene_pane_ParamLimits

0xc4e8,	// (0x0002a96f) list_single_ai3_gene_pane

0x75bb,	// (0x00025a42) list_highlight_pane_cp7_ParamLimits

0x75bb,	// (0x00025a42) list_highlight_pane_cp7

0xc4f5,	// (0x0002a97c) list_single_a13_gene_pane_t1_ParamLimits

0xc4f5,	// (0x0002a97c) list_single_a13_gene_pane_t1

0xc50c,	// (0x0002a993) list_single_ai3_gene_pane_g1

0xc515,	// (0x0002a99c) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x0002e15f) list_single_ai3_gene_pane_g

0xc51d,	// (0x0002a9a4) list_double_ai3_gene_pane_g1_ParamLimits

0xc51d,	// (0x0002a9a4) list_double_ai3_gene_pane_g1

0xc529,	// (0x0002a9b0) list_double_ai3_gene_pane_t1_ParamLimits

0xc529,	// (0x0002a9b0) list_double_ai3_gene_pane_t1

0xc545,	// (0x0002a9cc) list_double_ai3_gene_pane_t2_ParamLimits

0xc545,	// (0x0002a9cc) list_double_ai3_gene_pane_t2

0xc55a,	// (0x0002a9e1) list_double_ai3_gene_pane_t3_ParamLimits

0xc55a,	// (0x0002a9e1) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002e164) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002e164) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec7c,	// (0x0002d103) aid_size_min_col_2

0xc408,	// (0x0002a88f) aid_size_min_msg_ParamLimits

0xc408,	// (0x0002a88f) aid_size_min_msg

0xad44,	// (0x000291cb) fep_vkb_top_text_pane_g2_ParamLimits

0xad44,	// (0x000291cb) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0002dfcb) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0002dfcb) fep_vkb_top_text_pane_g

0x4206,	// (0x0002268d) main_hc_apps_shell_pane

0xc577,	// (0x0002a9fe) grid_hc_apps_pane_ParamLimits

0xc577,	// (0x0002a9fe) grid_hc_apps_pane

0xc586,	// (0x0002aa0d) list_hc_apps_pane

0xc58e,	// (0x0002aa15) scroll_pane_cp37_ParamLimits

0xc58e,	// (0x0002aa15) scroll_pane_cp37

0xc59a,	// (0x0002aa21) cell_hc_apps_pane_ParamLimits

0xc59a,	// (0x0002aa21) cell_hc_apps_pane

0xc64a,	// (0x0002aad1) cell_hc_apps_pane_g1_ParamLimits

0xc64a,	// (0x0002aad1) cell_hc_apps_pane_g1

0xc67b,	// (0x0002ab02) cell_hc_apps_pane_g2_ParamLimits

0xc67b,	// (0x0002ab02) cell_hc_apps_pane_g2

0xc697,	// (0x0002ab1e) cell_hc_apps_pane_g3_ParamLimits

0xc697,	// (0x0002ab1e) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x0002e16b) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x0002e16b) cell_hc_apps_pane_g

0xc6b9,	// (0x0002ab40) cell_hc_apps_pane_t1_ParamLimits

0xc6b9,	// (0x0002ab40) cell_hc_apps_pane_t1

0x43a9,	// (0x00022830) grid_highlight_pane_cp10_ParamLimits

0x43a9,	// (0x00022830) grid_highlight_pane_cp10

0xc6f9,	// (0x0002ab80) list_single_hc_apps_pane_ParamLimits

0xc6f9,	// (0x0002ab80) list_single_hc_apps_pane

0xc76c,	// (0x0002abf3) list_single_hc_apps_pane_g1

0xed64,	// (0x0002d1eb) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x0002e172) list_single_hc_apps_pane_g

0xed7d,	// (0x0002d204) list_single_hc_apps_pane_g2_copy1

0xed99,	// (0x0002d220) list_single_hc_apps_pane_t1

0x4276,	// (0x000226fd) bg_set_opt_pane_cp_ParamLimits

0x8ac5,	// (0x00026f4c) setting_slider_pane_t1_ParamLimits

0x8ade,	// (0x00026f65) setting_slider_pane_t2_ParamLimits

0x8af7,	// (0x00026f7e) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002da01) setting_slider_pane_t_ParamLimits

0x8b0e,	// (0x00026f95) slider_set_pane_ParamLimits

0x94c5,	// (0x0002794c) control_pane_g5_ParamLimits

0x94c5,	// (0x0002794c) control_pane_g5

0x696f,	// (0x00024df6) slider_set_pane_g1_ParamLimits

0xa392,	// (0x00028819) slider_set_pane_g2_ParamLimits

0xa39e,	// (0x00028825) slider_set_pane_g3_ParamLimits

0xa3b2,	// (0x00028839) slider_set_pane_g4_ParamLimits

0xa3ca,	// (0x00028851) slider_set_pane_g5_ParamLimits

0xa39e,	// (0x00028825) slider_set_pane_g6_ParamLimits

0xa3e0,	// (0x00028867) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0002ddf2) slider_set_pane_g_ParamLimits

0x5182,	// (0x00023609) navi_icon_text_pane_ParamLimits

0x9a87,	// (0x00027f0e) aid_fill_nsta_2_ParamLimits

0x9ab1,	// (0x00027f38) aid_touch_tab_arrow_left_ParamLimits

0x9ac0,	// (0x00027f47) aid_touch_tab_arrow_right_ParamLimits

0x9b2d,	// (0x00027fb4) clock_nsta_pane_ParamLimits

0xa233,	// (0x000286ba) navi_icon_pane_g1_ParamLimits

0xa242,	// (0x000286c9) navi_text_pane_t1_ParamLimits

0xa8b1,	// (0x00028d38) navi_icon_text_pane_g1_ParamLimits

0xa8c0,	// (0x00028d47) navi_icon_text_pane_t1_ParamLimits

0xc76c,	// (0x0002abf3) list_single_hc_apps_pane_g1_ParamLimits

0xed64,	// (0x0002d1eb) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x0002e172) list_single_hc_apps_pane_g_ParamLimits

0xed7d,	// (0x0002d204) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xed99,	// (0x0002d220) list_single_hc_apps_pane_t1_ParamLimits

0x8919,	// (0x00026da0) popup_toolbar2_fixed_window_ParamLimits

0x8919,	// (0x00026da0) popup_toolbar2_fixed_window

0x99fa,	// (0x00027e81) popup_toolbar2_float_window

0x4206,	// (0x0002268d) bg_popup_sub_pane_cp27

0xc785,	// (0x0002ac0c) grid_toolbar2_float_pane

0x4206,	// (0x0002268d) bg_popup_sub_pane_cp26

0xc785,	// (0x0002ac0c) grid_toolbar2_fixed_pane

0xc78d,	// (0x0002ac14) cell_toolbar2_fixed_pane_ParamLimits

0xc78d,	// (0x0002ac14) cell_toolbar2_fixed_pane

0xc79e,	// (0x0002ac25) cell_toolbar2_fixed_pane_g1

0xc7a7,	// (0x0002ac2e) toolbar2_fixed_button_pane

0x584c,	// (0x00023cd3) toolbar2_fixed_button_pane_g1

0x5854,	// (0x00023cdb) toolbar2_fixed_button_pane_g2

0x585c,	// (0x00023ce3) toolbar2_fixed_button_pane_g3

0x5864,	// (0x00023ceb) toolbar2_fixed_button_pane_g4

0x586c,	// (0x00023cf3) toolbar2_fixed_button_pane_g5

0x5874,	// (0x00023cfb) toolbar2_fixed_button_pane_g6

0x587c,	// (0x00023d03) toolbar2_fixed_button_pane_g7

0x5884,	// (0x00023d0b) toolbar2_fixed_button_pane_g8

0x588c,	// (0x00023d13) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0002dcf4) toolbar2_fixed_button_pane_g

0xc7af,	// (0x0002ac36) cell_toolbar2_float_pane_ParamLimits

0xc7af,	// (0x0002ac36) cell_toolbar2_float_pane

0xc7c0,	// (0x0002ac47) cell_toolbar2_float_pane_g1

0xc7a7,	// (0x0002ac2e) toolbar2_fixed_button_pane_cp

0xacf7,	// (0x0002917e) fep_vkb_accented_list_pane_ParamLimits

0xacf7,	// (0x0002917e) fep_vkb_accented_list_pane

0xae1f,	// (0x000292a6) bg_popup_fep_shadow_pane_g9

0x5304,	// (0x0002378b) bg_popup_fep_shadow_pane_cp3

0x49c3,	// (0x00022e4a) list_accented_list_pane

0xc7c9,	// (0x0002ac50) list_single_accented_list_pane_ParamLimits

0xc7c9,	// (0x0002ac50) list_single_accented_list_pane

0x5304,	// (0x0002378b) list_highlight_pane_cp10

0xc7da,	// (0x0002ac61) list_single_accented_list_pane_t1

0x9952,	// (0x00027dd9) popup_slider_window_ParamLimits

0x9952,	// (0x00027dd9) popup_slider_window

0xc3ff,	// (0x0002a886) aid_indentation_list_msg

0xc894,	// (0x0002ad1b) bg_popup_window_pane_cp19

0xc8fe,	// (0x0002ad85) popup_slider_window_g1

0xc91a,	// (0x0002ada1) popup_slider_window_g2

0xc936,	// (0x0002adbd) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002e177) popup_slider_window_g

0xc992,	// (0x0002ae19) popup_slider_window_t1

0xca06,	// (0x0002ae8d) small_volume_slider_vertical_pane

0x75f6,	// (0x00025a7d) small_volume_slider_vertical_pane_g1

0x75f6,	// (0x00025a7d) small_volume_slider_vertical_pane_g2

0xca22,	// (0x0002aea9) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x0002e189) small_volume_slider_vertical_pane_g

0x86df,	// (0x00026b66) area_side_right_pane_ParamLimits

0x86df,	// (0x00026b66) area_side_right_pane

0xb952,	// (0x00029dd9) aid_size_side_button_ParamLimits

0xb952,	// (0x00029dd9) aid_size_side_button

0xb966,	// (0x00029ded) grid_sctrl_middle_pane_ParamLimits

0xb966,	// (0x00029ded) grid_sctrl_middle_pane

0xb986,	// (0x00029e0d) sctrl_sk_bottom_pane

0xb997,	// (0x00029e1e) sctrl_sk_top_pane

0xb9a9,	// (0x00029e30) aid_touch_sctrl_top

0xb9b6,	// (0x00029e3d) bg_sctrl_sk_pane_ParamLimits

0xb9b6,	// (0x00029e3d) bg_sctrl_sk_pane

0xb9c4,	// (0x00029e4b) sctrl_sk_top_pane_g1

0xb9d1,	// (0x00029e58) sctrl_sk_top_pane_t1

0xb9a9,	// (0x00029e30) aid_touch_sctrl_bottom

0xb9b6,	// (0x00029e3d) bg_sctrl_sk_pane_cp_ParamLimits

0xb9b6,	// (0x00029e3d) bg_sctrl_sk_pane_cp

0xb9ec,	// (0x00029e73) sctrl_sk_bottom_pane_g1

0xb9d1,	// (0x00029e58) sctrl_sk_bottom_pane_t1

0xb9f5,	// (0x00029e7c) cell_sctrl_middle_pane_ParamLimits

0xb9f5,	// (0x00029e7c) cell_sctrl_middle_pane

0xba10,	// (0x00029e97) aid_touch_sctrl_middle_ParamLimits

0xba10,	// (0x00029e97) aid_touch_sctrl_middle

0xba22,	// (0x00029ea9) bg_sctrl_middle_pane_ParamLimits

0xba22,	// (0x00029ea9) bg_sctrl_middle_pane

0xae3f,	// (0x000292c6) cell_sctrl_middle_pane_g1_ParamLimits

0xae3f,	// (0x000292c6) cell_sctrl_middle_pane_g1

0xba30,	// (0x00029eb7) cell_sctrl_middle_pane_g2_ParamLimits

0xba30,	// (0x00029eb7) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002e195) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002e195) cell_sctrl_middle_pane_g

0x584c,	// (0x00023cd3) bg_sctrl_middle_pane_g1

0x585c,	// (0x00023ce3) bg_sctrl_middle_pane_g2

0x5854,	// (0x00023cdb) bg_sctrl_middle_pane_g3

0x586c,	// (0x00023cf3) bg_sctrl_middle_pane_g4

0x5864,	// (0x00023ceb) bg_sctrl_middle_pane_g5

0x5874,	// (0x00023cfb) bg_sctrl_middle_pane_g6

0x587c,	// (0x00023d03) bg_sctrl_middle_pane_g7

0x588c,	// (0x00023d13) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x0002e19a) bg_sctrl_middle_pane_g

0x5884,	// (0x00023d0b) bg_sctrl_middle_pane_g8_copy1

0x584c,	// (0x00023cd3) bg_sctrl_sk_pane_g1

0x5854,	// (0x00023cdb) bg_sctrl_sk_pane_g2

0x585c,	// (0x00023ce3) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0002dcf4) bg_sctrl_sk_pane_g

0x47f6,	// (0x00022c7d) aid_size_touch_scroll_bar

0x5864,	// (0x00023ceb) bg_sctrl_sk_pane_g4

0x586c,	// (0x00023cf3) bg_sctrl_sk_pane_g5

0x5874,	// (0x00023cfb) bg_sctrl_sk_pane_g6

0x587c,	// (0x00023d03) bg_sctrl_sk_pane_g7

0x5884,	// (0x00023d0b) bg_sctrl_sk_pane_g8

0x588c,	// (0x00023d13) bg_sctrl_sk_pane_g9

0x5580,	// (0x00023a07) popup_fep_china_hwr2_fs_candidate_window

0x9660,	// (0x00027ae7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9660,	// (0x00027ae7) popup_fep_china_hwr2_fs_control_window

0xae3f,	// (0x000292c6) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x0002e190) sctrl_sk_top_pane_g

0xca2b,	// (0x0002aeb2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xca2b,	// (0x0002aeb2) aid_fep_china_hwr2_fs_cell

0xca3d,	// (0x0002aec4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xca3d,	// (0x0002aec4) bg_popup_fep_shadow_pane_cp4

0xca54,	// (0x0002aedb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xca54,	// (0x0002aedb) bg_popup_fep_shadow_pane_cp5

0xca66,	// (0x0002aeed) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca66,	// (0x0002aeed) popup_fep_china_hwr2_fs_control_bar_grid

0xca76,	// (0x0002aefd) popup_fep_china_hwr2_fs_control_funtion_grid

0xca7e,	// (0x0002af05) aid_fep_china_hwr2_fs_candi_cell

0x4206,	// (0x0002268d) bg_popup_fep_shadow_pane_cp6

0xca88,	// (0x0002af0f) popup_fep_china_hwr2_fs_candidate_grid

0xca92,	// (0x0002af19) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xca92,	// (0x0002af19) cell_fep_china_hwr2_fs_funtion_grid

0x75f6,	// (0x00025a7d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcaaa,	// (0x0002af31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcaaa,	// (0x0002af31) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcab8,	// (0x0002af3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcab8,	// (0x0002af3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x0002e1ab) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x0002e1ab) cell_fep_china_hwr2_fs_funtion_grid_g

0xcace,	// (0x0002af55) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcace,	// (0x0002af55) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcae3,	// (0x0002af6a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcae3,	// (0x0002af6a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd29,	// (0x0002e1b0) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd29,	// (0x0002e1b0) cell_fep_china_hwr2_fs_funtion_grid_t

0xcaff,	// (0x0002af86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcb07,	// (0x0002af8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcb0f,	// (0x0002af96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2e,	// (0x0002e1b5) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcb17,	// (0x0002af9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcb17,	// (0x0002af9e) cell_fep_china_hwr2_fs_candidate_grid

0xcb30,	// (0x0002afb7) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcb38,	// (0x0002afbf) popup_fep_china_hwr2_fs_candidate_grid_g21

0x75f6,	// (0x00025a7d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x75f6,	// (0x00025a7d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0002dfd0) cell_fep_china_hwr2_fs_candidate_grid_g

0xcb40,	// (0x0002afc7) cell_fep_china_hwr2_fs_candidate_grid_t1

0x569b,	// (0x00023b22) clock_nsta_pane_cp_24_ParamLimits

0x569b,	// (0x00023b22) clock_nsta_pane_cp_24

0x5703,	// (0x00023b8a) indicator_nsta_pane_cp_24_ParamLimits

0x5703,	// (0x00023b8a) indicator_nsta_pane_cp_24

0x644b,	// (0x000248d2) heading_pane_g1

0x0001,

0xf8d2,	// (0x0002dd59) heading_pane_g

0x6aaf,	// (0x00024f36) grid_sct_catagory_button_pane

0x6a6b,	// (0x00024ef2) scroll_pane_cp5_ParamLimits

0x735f,	// (0x000257e6) button_value_adjust_pane_cp5_ParamLimits

0x735f,	// (0x000257e6) button_value_adjust_pane_cp5

0x741d,	// (0x000258a4) form2_midp_time_pane_ParamLimits

0xcb4e,	// (0x0002afd5) cell_sct_catagory_button_pane_ParamLimits

0xcb4e,	// (0x0002afd5) cell_sct_catagory_button_pane

0x75bb,	// (0x00025a42) bg_button_pane_cp01_ParamLimits

0x75bb,	// (0x00025a42) bg_button_pane_cp01

0x75f6,	// (0x00025a7d) cell_sct_catagory_button_pane_g1

0x9989,	// (0x00027e10) popup_tb_extension_window

0xcb60,	// (0x0002afe7) aid_size_cell_ext_ParamLimits

0xcb60,	// (0x0002afe7) aid_size_cell_ext

0x43a9,	// (0x00022830) bg_tb_trans_pane_cp1_ParamLimits

0x43a9,	// (0x00022830) bg_tb_trans_pane_cp1

0xcb80,	// (0x0002b007) grid_tb_ext_pane_ParamLimits

0xcb80,	// (0x0002b007) grid_tb_ext_pane

0xcbb2,	// (0x0002b039) cell_tb_ext_pane_ParamLimits

0xcbb2,	// (0x0002b039) cell_tb_ext_pane

0xcbc9,	// (0x0002b050) cell_tb_ext_pane_g1_ParamLimits

0xcbc9,	// (0x0002b050) cell_tb_ext_pane_g1

0xcbe6,	// (0x0002b06d) cell_tb_ext_pane_t1

0x43a9,	// (0x00022830) list_highlight_pane_cp11_ParamLimits

0x43a9,	// (0x00022830) list_highlight_pane_cp11

0x8938,	// (0x00026dbf) popup_uni_indicator_window_ParamLimits

0x8938,	// (0x00026dbf) popup_uni_indicator_window

0x48bd,	// (0x00022d44) bg_popup_sub_pane_cp14

0xcc01,	// (0x0002b088) list_uniindi_pane

0xcc0d,	// (0x0002b094) uniindi_top_pane

0x43a9,	// (0x00022830) bg_uniindi_top_pane

0xcc2c,	// (0x0002b0b3) uniindi_top_pane_g1

0xcc42,	// (0x0002b0c9) uniindi_top_pane_g2

0x0003,

0xfd35,	// (0x0002e1bc) uniindi_top_pane_g

0xcc6c,	// (0x0002b0f3) uniindi_top_pane_t1

0xcc96,	// (0x0002b11d) list_single_uniindi_pane_ParamLimits

0xcc96,	// (0x0002b11d) list_single_uniindi_pane

0x75f6,	// (0x00025a7d) bg_uniindi_top_pane_g1

0xcca8,	// (0x0002b12f) list_single_uniindi_pane_g1

0xccbb,	// (0x0002b142) list_single_uniindi_pane_t1

0x87bc,	// (0x00026c43) control_bg_pane

0xcce0,	// (0x0002b167) bg_sctrl_sk_pane_cp1

0xcce9,	// (0x0002b170) bg_sctrl_sk_pane_cp2

0xccf2,	// (0x0002b179) control_bg_pane_g1

0xccfb,	// (0x0002b182) control_bg_pane_g2

0x0001,

0xfd3e,	// (0x0002e1c5) control_bg_pane_g

0x7236,	// (0x000256bd) cell_indicator_nsta_pane_g1_ParamLimits

0xa7e0,	// (0x00028c67) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0002df34) cell_indicator_nsta_pane_g_ParamLimits

0xea39,	// (0x0002cec0) form2_midp_time_pane_t1_ParamLimits

0x4638,	// (0x00022abf) main_idle_act4_pane_ParamLimits

0x4638,	// (0x00022abf) main_idle_act4_pane

0x9989,	// (0x00027e10) popup_tb_extension_window_ParamLimits

0xcba2,	// (0x0002b029) tb_ext_find_pane_ParamLimits

0xcba2,	// (0x0002b029) tb_ext_find_pane

0xcd04,	// (0x0002b18b) ai_gene_pane_1_cp1

0x5386,	// (0x0002380d) ai_gene_pane_2_cp1

0xcd0c,	// (0x0002b193) list_single_idle_plugin_calendar_pane

0xcd15,	// (0x0002b19c) list_single_idle_plugin_notification_pane

0xcd1e,	// (0x0002b1a5) list_single_idle_plugin_player_pane

0xcd27,	// (0x0002b1ae) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcd27,	// (0x0002b1ae) list_single_idle_plugin_shortcut_pane

0xcd49,	// (0x0002b1d0) main_idle_act4_pane_t1

0xcd5b,	// (0x0002b1e2) main_idle_act4_pane_t2

0x0001,

0xfd43,	// (0x0002e1ca) main_idle_act4_pane_t

0xcd6d,	// (0x0002b1f4) middle_sk_idle_act4_pane_ParamLimits

0xcd6d,	// (0x0002b1f4) middle_sk_idle_act4_pane

0xcd83,	// (0x0002b20a) popup_clock_digital_analogue_window_cp2

0xcd9d,	// (0x0002b224) shortcut_wheel_idle_act4_pane_ParamLimits

0xcd9d,	// (0x0002b224) shortcut_wheel_idle_act4_pane

0x75f6,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g1

0x75f6,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g2

0x75f6,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g3

0x75f6,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g4

0x75f6,	// (0x00025a7d) shortcut_wheel_idle_act4_pane_g5

0xcdb1,	// (0x0002b238) shortcut_wheel_idle_act4_pane_g6

0xcdb9,	// (0x0002b240) shortcut_wheel_idle_act4_pane_g7

0xcdc1,	// (0x0002b248) shortcut_wheel_idle_act4_pane_g8

0xcdc9,	// (0x0002b250) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd48,	// (0x0002e1cf) shortcut_wheel_idle_act4_pane_g

0x787d,	// (0x00025d04) middle_sk_idle_act4_pane_g1_ParamLimits

0x787d,	// (0x00025d04) middle_sk_idle_act4_pane_g1

0xce2d,	// (0x0002b2b4) middle_sk_idle_act4_pane_g2_ParamLimits

0xce2d,	// (0x0002b2b4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6b,	// (0x0002e1f2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6b,	// (0x0002e1f2) middle_sk_idle_act4_pane_g

0xce39,	// (0x0002b2c0) middle_sk_idle_act4_pane_t1_ParamLimits

0xce39,	// (0x0002b2c0) middle_sk_idle_act4_pane_t1

0xce56,	// (0x0002b2dd) grid_ai_shortcut_pane_ParamLimits

0xce56,	// (0x0002b2dd) grid_ai_shortcut_pane

0xce6f,	// (0x0002b2f6) list_highlight_pane_cp16_ParamLimits

0xce6f,	// (0x0002b2f6) list_highlight_pane_cp16

0xce7c,	// (0x0002b303) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xce7c,	// (0x0002b303) list_single_idle_plugin_shortcut_pane_g1

0xce88,	// (0x0002b30f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xce88,	// (0x0002b30f) list_single_idle_plugin_shortcut_pane_g2

0xcea0,	// (0x0002b327) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcea0,	// (0x0002b327) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd70,	// (0x0002e1f7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd70,	// (0x0002e1f7) list_single_idle_plugin_shortcut_pane_g

0xceb3,	// (0x0002b33a) cell_ai_shortcut_pane_ParamLimits

0xceb3,	// (0x0002b33a) cell_ai_shortcut_pane

0xced4,	// (0x0002b35b) cell_ai_shortcut_pane_g1_ParamLimits

0xced4,	// (0x0002b35b) cell_ai_shortcut_pane_g1

0xcd04,	// (0x0002b18b) ai_gene_pane_1_cp2

0xcef6,	// (0x0002b37d) ai_gene_pane_2_cp2

0xcefe,	// (0x0002b385) list_highlight_pane_cp15

0xcf07,	// (0x0002b38e) list_single_idle_plugin_calendar_pane_g1

0xcefe,	// (0x0002b385) list_highlight_pane_cp17

0xcf0f,	// (0x0002b396) list_single_idle_plugin_calendar_pane_g1_copy1

0xcf17,	// (0x0002b39e) list_single_idle_plugin_player_pane_g1

0x6cc4,	// (0x0002514b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd77,	// (0x0002e1fe) list_single_idle_plugin_player_pane_g

0xcf1f,	// (0x0002b3a6) list_single_idle_plugin_player_pane_t1

0xcf2d,	// (0x0002b3b4) list_single_idle_plugin_player_pane_t2

0xcf3b,	// (0x0002b3c2) list_single_idle_plugin_player_pane_t3

0xcf49,	// (0x0002b3d0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7c,	// (0x0002e203) list_single_idle_plugin_player_pane_t

0xcf57,	// (0x0002b3de) wait_bar_pane_cp15

0xcf5f,	// (0x0002b3e6) grid_ai_notification_pane

0x6cc4,	// (0x0002514b) list_single_idle_plugin_notification_pane_g1

0xcf68,	// (0x0002b3ef) cell_ai_notification_pane_ParamLimits

0xcf68,	// (0x0002b3ef) cell_ai_notification_pane

0xcf75,	// (0x0002b3fc) cell_ai_notification_pane_g1

0xcf7d,	// (0x0002b404) cell_ai_notification_pane_t1

0xcf8b,	// (0x0002b412) tb_ext_find_button_pane

0xcf93,	// (0x0002b41a) tb_ext_find_pane_g1

0xcf9b,	// (0x0002b422) tb_ext_find_pane_t1

0x4df5,	// (0x0002327c) tb_ext_find_button_pane_g1

0xcfa9,	// (0x0002b430) tb_ext_find_button_pane_g2

0x0001,

0xfd85,	// (0x0002e20c) tb_ext_find_button_pane_g

0xcd49,	// (0x0002b1d0) main_idle_act4_pane_t1_ParamLimits

0xcd5b,	// (0x0002b1e2) main_idle_act4_pane_t2_ParamLimits

0xfd43,	// (0x0002e1ca) main_idle_act4_pane_t_ParamLimits

0xcd83,	// (0x0002b20a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcd91,	// (0x0002b218) sat_plugin_idle_act4_pane_ParamLimits

0xcd91,	// (0x0002b218) sat_plugin_idle_act4_pane

0xcfb2,	// (0x0002b439) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcfb2,	// (0x0002b439) sat_plugin_idle_act4_pane_t1

0xcfc5,	// (0x0002b44c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcfc5,	// (0x0002b44c) sat_plugin_idle_act4_pane_t2

0xcfd8,	// (0x0002b45f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcfd8,	// (0x0002b45f) sat_plugin_idle_act4_pane_t3

0xcfeb,	// (0x0002b472) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcfeb,	// (0x0002b472) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8a,	// (0x0002e211) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8a,	// (0x0002e211) sat_plugin_idle_act4_pane_t

0x8881,	// (0x00026d08) popup_battery_window_ParamLimits

0x8881,	// (0x00026d08) popup_battery_window

0x43a9,	// (0x00022830) bg_popup_sub_pane_cp25_ParamLimits

0x43a9,	// (0x00022830) bg_popup_sub_pane_cp25

0xcffe,	// (0x0002b485) popup_battery_window_g1_ParamLimits

0xcffe,	// (0x0002b485) popup_battery_window_g1

0xd00a,	// (0x0002b491) popup_battery_window_t1_ParamLimits

0xd00a,	// (0x0002b491) popup_battery_window_t1

0xd01c,	// (0x0002b4a3) popup_battery_window_t2_ParamLimits

0xd01c,	// (0x0002b4a3) popup_battery_window_t2

0x0001,

0xfd93,	// (0x0002e21a) popup_battery_window_t_ParamLimits

0xfd93,	// (0x0002e21a) popup_battery_window_t

0x92f6,	// (0x0002777d) midp_canvas_pane_ParamLimits

0x935a,	// (0x000277e1) midp_keypad_pane_ParamLimits

0x935a,	// (0x000277e1) midp_keypad_pane

0x4a14,	// (0x00022e9b) main_midp_pane_ParamLimits

0x7312,	// (0x00025799) signal_pane_g2_cp_ParamLimits

0xd039,	// (0x0002b4c0) aid_size_cell_midp_keypad_ParamLimits

0xd039,	// (0x0002b4c0) aid_size_cell_midp_keypad

0xd053,	// (0x0002b4da) midp_keyp_game_grid_pane_ParamLimits

0xd053,	// (0x0002b4da) midp_keyp_game_grid_pane

0xd073,	// (0x0002b4fa) midp_keyp_rocker_pane_ParamLimits

0xd073,	// (0x0002b4fa) midp_keyp_rocker_pane

0xd0ac,	// (0x0002b533) midp_keyp_sk_left_pane_ParamLimits

0xd0ac,	// (0x0002b533) midp_keyp_sk_left_pane

0xd106,	// (0x0002b58d) midp_keyp_sk_right_pane_ParamLimits

0xd106,	// (0x0002b58d) midp_keyp_sk_right_pane

0x4206,	// (0x0002268d) bg_button_pane_cp03

0xd160,	// (0x0002b5e7) midp_keyp_sk_left_pane_g1

0x4206,	// (0x0002268d) bg_button_pane_cp04

0xd160,	// (0x0002b5e7) midp_keyp_sk_right_pane_g1

0x75f6,	// (0x00025a7d) midp_keyp_rocker_pane_g1

0xd169,	// (0x0002b5f0) keyp_game_cell_pane_ParamLimits

0xd169,	// (0x0002b5f0) keyp_game_cell_pane

0x4206,	// (0x0002268d) bg_button_pane_cp02

0xd17c,	// (0x0002b603) keyp_game_cell_pane_g1

0x88b7,	// (0x00026d3e) popup_fep_vkb2_window_ParamLimits

0x88b7,	// (0x00026d3e) popup_fep_vkb2_window

0xba52,	// (0x00029ed9) aid_size_cell_vkb2_ParamLimits

0xba52,	// (0x00029ed9) aid_size_cell_vkb2

0xbaa6,	// (0x00029f2d) popup_fep_vkb2_window_g1_ParamLimits

0xbaa6,	// (0x00029f2d) popup_fep_vkb2_window_g1

0xbae6,	// (0x00029f6d) vkb2_area_bottom_pane_ParamLimits

0xbae6,	// (0x00029f6d) vkb2_area_bottom_pane

0xbb32,	// (0x00029fb9) vkb2_area_keypad_pane_ParamLimits

0xbb32,	// (0x00029fb9) vkb2_area_keypad_pane

0xbb74,	// (0x00029ffb) vkb2_area_top_pane_ParamLimits

0xbb74,	// (0x00029ffb) vkb2_area_top_pane

0xbbee,	// (0x0002a075) vkb2_top_entry_pane_ParamLimits

0xbbee,	// (0x0002a075) vkb2_top_entry_pane

0xbc18,	// (0x0002a09f) vkb2_top_grid_left_pane_ParamLimits

0xbc18,	// (0x0002a09f) vkb2_top_grid_left_pane

0xbc36,	// (0x0002a0bd) vkb2_top_grid_right_pane_ParamLimits

0xbc36,	// (0x0002a0bd) vkb2_top_grid_right_pane

0xbc54,	// (0x0002a0db) vkb2_cell_keypad_pane_ParamLimits

0xbc54,	// (0x0002a0db) vkb2_cell_keypad_pane

0xbd25,	// (0x0002a1ac) vkb2_area_bottom_grid_pane_ParamLimits

0xbd25,	// (0x0002a1ac) vkb2_area_bottom_grid_pane

0xbd4b,	// (0x0002a1d2) vkb2_area_bottom_pane_g1_ParamLimits

0xbd4b,	// (0x0002a1d2) vkb2_area_bottom_pane_g1

0xbd6f,	// (0x0002a1f6) vkb2_area_bottom_pane_g2_ParamLimits

0xbd6f,	// (0x0002a1f6) vkb2_area_bottom_pane_g2

0xbd9d,	// (0x0002a224) vkb2_area_bottom_pane_g3_ParamLimits

0xbd9d,	// (0x0002a224) vkb2_area_bottom_pane_g3

0x0002,

0xfd98,	// (0x0002e21f) vkb2_area_bottom_pane_g_ParamLimits

0xfd98,	// (0x0002e21f) vkb2_area_bottom_pane_g

0xbdfe,	// (0x0002a285) vkb2_top_cell_left_pane_ParamLimits

0xbdfe,	// (0x0002a285) vkb2_top_cell_left_pane

0xd18d,	// (0x0002b614) vkb2_top_entry_pane_g1_ParamLimits

0xd18d,	// (0x0002b614) vkb2_top_entry_pane_g1

0xd19b,	// (0x0002b622) vkb2_top_entry_pane_t1_ParamLimits

0xd19b,	// (0x0002b622) vkb2_top_entry_pane_t1

0xd1cd,	// (0x0002b654) vkb2_top_entry_pane_t2_ParamLimits

0xd1cd,	// (0x0002b654) vkb2_top_entry_pane_t2

0xd1ff,	// (0x0002b686) vkb2_top_entry_pane_t3_ParamLimits

0xd1ff,	// (0x0002b686) vkb2_top_entry_pane_t3

0x0002,

0xfd9f,	// (0x0002e226) vkb2_top_entry_pane_t_ParamLimits

0xfd9f,	// (0x0002e226) vkb2_top_entry_pane_t

0xbe4b,	// (0x0002a2d2) vkb2_top_grid_right_pane_g1_ParamLimits

0xbe4b,	// (0x0002a2d2) vkb2_top_grid_right_pane_g1

0xbe61,	// (0x0002a2e8) vkb2_top_grid_right_pane_g2_ParamLimits

0xbe61,	// (0x0002a2e8) vkb2_top_grid_right_pane_g2

0xbe79,	// (0x0002a300) vkb2_top_grid_right_pane_g3_ParamLimits

0xbe79,	// (0x0002a300) vkb2_top_grid_right_pane_g3

0xbe91,	// (0x0002a318) vkb2_top_grid_right_pane_g4_ParamLimits

0xbe91,	// (0x0002a318) vkb2_top_grid_right_pane_g4

0x0003,

0xfda6,	// (0x0002e22d) vkb2_top_grid_right_pane_g_ParamLimits

0xfda6,	// (0x0002e22d) vkb2_top_grid_right_pane_g

0xbea7,	// (0x0002a32e) vkb2_top_cell_left_pane_g1

0xbebe,	// (0x0002a345) vkb2_cell_keypad_pane_g1_ParamLimits

0xbebe,	// (0x0002a345) vkb2_cell_keypad_pane_g1

0xd223,	// (0x0002b6aa) vkb2_cell_keypad_pane_t1_ParamLimits

0xd223,	// (0x0002b6aa) vkb2_cell_keypad_pane_t1

0xbecc,	// (0x0002a353) vkb2_cell_bottom_grid_pane_ParamLimits

0xbecc,	// (0x0002a353) vkb2_cell_bottom_grid_pane

0xbf05,	// (0x0002a38c) vkb2_cell_bottom_grid_pane_g1

0xcdd1,	// (0x0002b258) aid_call2_pane_cp02

0xcdd9,	// (0x0002b260) aid_call_pane_cp02

0xcde1,	// (0x0002b268) clock_digital_number_pane_cp10

0xcde9,	// (0x0002b270) clock_digital_number_pane_cp11

0xcdf1,	// (0x0002b278) clock_digital_number_pane_cp12

0xcdf9,	// (0x0002b280) clock_digital_number_pane_cp13

0xce01,	// (0x0002b288) clock_digital_separator_pane_cp10

0x4df5,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g1

0x4df5,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g2

0xce09,	// (0x0002b290) popup_clock_digital_analogue_window_cp2_g3

0x4df5,	// (0x0002327c) popup_clock_digital_analogue_window_cp2_g4

0xce09,	// (0x0002b290) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5b,	// (0x0002e1e2) popup_clock_digital_analogue_window_cp2_g

0xce11,	// (0x0002b298) popup_clock_digital_analogue_window_cp2_t1

0xce1f,	// (0x0002b2a6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd66,	// (0x0002e1ed) popup_clock_digital_analogue_window_cp2_t

0x75f6,	// (0x00025a7d) clock_digital_number_pane_cp10_g1

0x75f6,	// (0x00025a7d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002dfd0) clock_digital_number_pane_cp10_g

0x75f6,	// (0x00025a7d) clock_digital_separator_pane_cp10_g1

0x75f6,	// (0x00025a7d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0002dfd0) clock_digital_separator_pane_cp10_g

0xcc4e,	// (0x0002b0d5) uniindi_top_pane_g3

0xcc5f,	// (0x0002b0e6) uniindi_top_pane_g4

0xbcdf,	// (0x0002a166) vkb2_row_keypad_pane_ParamLimits

0xbcdf,	// (0x0002a166) vkb2_row_keypad_pane

0xbf25,	// (0x0002a3ac) vkb2_cell_t_keypad_pane_ParamLimits

0xbf25,	// (0x0002a3ac) vkb2_cell_t_keypad_pane

0xbf35,	// (0x0002a3bc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xbf35,	// (0x0002a3bc) vkb2_cell_t_keypad_pane_cp08

0xbf48,	// (0x0002a3cf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xbf48,	// (0x0002a3cf) vkb2_cell_t_keypad_pane_cp09

0xbf5c,	// (0x0002a3e3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xbf5c,	// (0x0002a3e3) vkb2_cell_t_keypad_pane_cp01

0xbf6d,	// (0x0002a3f4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xbf6d,	// (0x0002a3f4) vkb2_cell_t_keypad_pane_cp02

0xbf7e,	// (0x0002a405) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xbf7e,	// (0x0002a405) vkb2_cell_t_keypad_pane_cp03

0xbf8f,	// (0x0002a416) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xbf8f,	// (0x0002a416) vkb2_cell_t_keypad_pane_cp04

0xbfa0,	// (0x0002a427) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xbfa0,	// (0x0002a427) vkb2_cell_t_keypad_pane_cp05

0xbfb1,	// (0x0002a438) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xbfb1,	// (0x0002a438) vkb2_cell_t_keypad_pane_cp06

0xbfc2,	// (0x0002a449) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xbfc2,	// (0x0002a449) vkb2_cell_t_keypad_pane_cp07

0xbfd3,	// (0x0002a45a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xbfd3,	// (0x0002a45a) vkb2_cell_t_keypad_pane_cp10

0xae3f,	// (0x000292c6) vkb2_cell_t_keypad_pane_g1

0xd23a,	// (0x0002b6c1) vkb2_cell_t_keypad_pane_t1

0x87bc,	// (0x00026c43) popup_grid_graphic2_window

0xede5,	// (0x0002d26c) aid_size_cell_graphic2_ParamLimits

0xede5,	// (0x0002d26c) aid_size_cell_graphic2

0x7a2d,	// (0x00025eb4) bg_popup_window_pane_cp21_ParamLimits

0x7a2d,	// (0x00025eb4) bg_popup_window_pane_cp21

0xee11,	// (0x0002d298) graphic2_pages_pane_ParamLimits

0xee11,	// (0x0002d298) graphic2_pages_pane

0xee57,	// (0x0002d2de) grid_graphic2_control_pane_ParamLimits

0xee57,	// (0x0002d2de) grid_graphic2_control_pane

0xee85,	// (0x0002d30c) grid_graphic2_pane_ParamLimits

0xee85,	// (0x0002d30c) grid_graphic2_pane

0xeee5,	// (0x0002d36c) cell_graphic2_pane

0x4206,	// (0x0002268d) main_comp_mode_pane

0xc4b1,	// (0x0002a938) list_ai3_gene_pane_ParamLimits

0xc894,	// (0x0002ad1b) bg_popup_window_pane_cp19_ParamLimits

0xc8a0,	// (0x0002ad27) bg_touch_area_indi_pane_ParamLimits

0xc8a0,	// (0x0002ad27) bg_touch_area_indi_pane

0xc8b6,	// (0x0002ad3d) bg_touch_area_indi_pane_cp01_ParamLimits

0xc8b6,	// (0x0002ad3d) bg_touch_area_indi_pane_cp01

0xc8cc,	// (0x0002ad53) bg_touch_area_indi_pane_cp02_ParamLimits

0xc8cc,	// (0x0002ad53) bg_touch_area_indi_pane_cp02

0xc8e4,	// (0x0002ad6b) bg_touch_area_indi_pane_cp03_ParamLimits

0xc8e4,	// (0x0002ad6b) bg_touch_area_indi_pane_cp03

0xc8fe,	// (0x0002ad85) popup_slider_window_g1_ParamLimits

0xc91a,	// (0x0002ada1) popup_slider_window_g2_ParamLimits

0xc936,	// (0x0002adbd) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002e177) popup_slider_window_g_ParamLimits

0xc992,	// (0x0002ae19) popup_slider_window_t1_ParamLimits

0xca06,	// (0x0002ae8d) small_volume_slider_vertical_pane_ParamLimits

0xeee5,	// (0x0002d36c) cell_graphic2_pane_ParamLimits

0xef34,	// (0x0002d3bb) bg_button_pane_cp10_ParamLimits

0xef34,	// (0x0002d3bb) bg_button_pane_cp10

0xef47,	// (0x0002d3ce) bg_button_pane_cp11_ParamLimits

0xef47,	// (0x0002d3ce) bg_button_pane_cp11

0xef5a,	// (0x0002d3e1) graphic2_pages_pane_g1_ParamLimits

0xef5a,	// (0x0002d3e1) graphic2_pages_pane_g1

0xef75,	// (0x0002d3fc) graphic2_pages_pane_g2_ParamLimits

0xef75,	// (0x0002d3fc) graphic2_pages_pane_g2

0x0001,

0xfdb4,	// (0x0002e23b) graphic2_pages_pane_g_ParamLimits

0xfdb4,	// (0x0002e23b) graphic2_pages_pane_g

0xef8d,	// (0x0002d414) graphic2_pages_pane_t1_ParamLimits

0xef8d,	// (0x0002d414) graphic2_pages_pane_t1

0xefa3,	// (0x0002d42a) cell_graphic2_control_pane_ParamLimits

0xefa3,	// (0x0002d42a) cell_graphic2_control_pane

0xefbd,	// (0x0002d444) cell_graphic2_pane_g1_ParamLimits

0xefbd,	// (0x0002d444) cell_graphic2_pane_g1

0xefca,	// (0x0002d451) cell_graphic2_pane_g2_ParamLimits

0xefca,	// (0x0002d451) cell_graphic2_pane_g2

0xefd7,	// (0x0002d45e) cell_graphic2_pane_g3_ParamLimits

0xefd7,	// (0x0002d45e) cell_graphic2_pane_g3

0xefe4,	// (0x0002d46b) cell_graphic2_pane_g4_ParamLimits

0xefe4,	// (0x0002d46b) cell_graphic2_pane_g4

0xeff1,	// (0x0002d478) cell_graphic2_pane_g5_ParamLimits

0xeff1,	// (0x0002d478) cell_graphic2_pane_g5

0x0004,

0xfdb9,	// (0x0002e240) cell_graphic2_pane_g_ParamLimits

0xfdb9,	// (0x0002e240) cell_graphic2_pane_g

0xf00c,	// (0x0002d493) cell_graphic2_pane_t1_ParamLimits

0xf00c,	// (0x0002d493) cell_graphic2_pane_t1

0x593c,	// (0x00023dc3) grid_highlight_pane_cp11_ParamLimits

0x593c,	// (0x00023dc3) grid_highlight_pane_cp11

0x48bd,	// (0x00022d44) bg_button_pane_cp05

0xf035,	// (0x0002d4bc) cell_graphic2_control_pane_g1

0x75f6,	// (0x00025a7d) bg_touch_area_indi_pane_g1

0xd24c,	// (0x0002b6d3) aid_cmod_rocker_key_size

0xd256,	// (0x0002b6dd) aid_cmode_itu_key_size

0xd260,	// (0x0002b6e7) main_cmode_video_pane

0xd26a,	// (0x0002b6f1) main_comp_mode_itu_pane

0xd276,	// (0x0002b6fd) main_comp_mode_rocker_pane

0xd282,	// (0x0002b709) cell_cmode_rocker_pane_ParamLimits

0xd282,	// (0x0002b709) cell_cmode_rocker_pane

0xd294,	// (0x0002b71b) cell_cmode_itu_pane_ParamLimits

0xd294,	// (0x0002b71b) cell_cmode_itu_pane

0x48bd,	// (0x00022d44) bg_button_pane_cp06_ParamLimits

0x48bd,	// (0x00022d44) bg_button_pane_cp06

0x787d,	// (0x00025d04) cell_cmode_rocker_pane_g1_ParamLimits

0x787d,	// (0x00025d04) cell_cmode_rocker_pane_g1

0xcaaa,	// (0x0002af31) cell_cmode_rocker_pane_g2_ParamLimits

0xcaaa,	// (0x0002af31) cell_cmode_rocker_pane_g2

0x0001,

0xfdc9,	// (0x0002e250) cell_cmode_rocker_pane_g_ParamLimits

0xfdc9,	// (0x0002e250) cell_cmode_rocker_pane_g

0x4206,	// (0x0002268d) bg_button_pane_cp07

0xd2a9,	// (0x0002b730) cell_cmode_itu_pane_g1

0xd2b2,	// (0x0002b739) cell_cmode_itu_pane_t1

0xd2c0,	// (0x0002b747) cell_cmode_itu_pane_t2

0x0001,

0xfdce,	// (0x0002e255) cell_cmode_itu_pane_t

0xccd0,	// (0x0002b157) aid_touch_ctrl_left

0xccd8,	// (0x0002b15f) aid_touch_ctrl_right

0x4206,	// (0x0002268d) compa_mode_pane

0xf042,	// (0x0002d4c9) aid_cmod_rocker_key_size_cp

0xf04c,	// (0x0002d4d3) aid_cmode_itu_key_size_cp

0xd2ce,	// (0x0002b755) compa_mode_pane_g1

0xd2d6,	// (0x0002b75d) compa_mode_pane_g2

0xd2de,	// (0x0002b765) compa_mode_pane_g3

0x0002,

0xfdd3,	// (0x0002e25a) compa_mode_pane_g

0xf056,	// (0x0002d4dd) main_comp_mode_itu_pane_cp

0xf05e,	// (0x0002d4e5) main_comp_mode_rocker_pane_cp

0xf066,	// (0x0002d4ed) cell_cmode_itu_pane_cp_ParamLimits

0xf066,	// (0x0002d4ed) cell_cmode_itu_pane_cp

0xf07b,	// (0x0002d502) cell_cmode_rocker_pane_cp_ParamLimits

0xf07b,	// (0x0002d502) cell_cmode_rocker_pane_cp

0x48bd,	// (0x00022d44) bg_button_pane_cp06_cp_ParamLimits

0x48bd,	// (0x00022d44) bg_button_pane_cp06_cp

0x787d,	// (0x00025d04) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x787d,	// (0x00025d04) cell_cmode_rocker_pane_g1_cp

0x75f6,	// (0x00025a7d) cell_cmode_rocker_pane_g2_cp

0x4206,	// (0x0002268d) bg_button_pane_cp07_cp

0xf08d,	// (0x0002d514) cell_cmode_itu_pane_g1_cp

0xf096,	// (0x0002d51d) cell_cmode_itu_pane_t1_cp

0xf096,	// (0x0002d51d) cell_cmode_itu_pane_t2_cp

0xa53f,	// (0x000289c6) settings_code_pane_cp2

0x4276,	// (0x000226fd) bg_popup_window_pane_cp3_ParamLimits

0x4577,	// (0x000229fe) heading_pane_cp3_ParamLimits

0x4583,	// (0x00022a0a) listscroll_popup_graphic_pane_ParamLimits

0xaafe,	// (0x00028f85) fep_hwr_aid_pane_ParamLimits

0xb9a9,	// (0x00029e30) aid_touch_sctrl_top_ParamLimits

0xb9c4,	// (0x00029e4b) sctrl_sk_top_pane_g1_ParamLimits

0xae3f,	// (0x000292c6) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x0002e190) sctrl_sk_top_pane_g_ParamLimits

0xb9d1,	// (0x00029e58) sctrl_sk_top_pane_t1_ParamLimits

0xb9a9,	// (0x00029e30) aid_touch_sctrl_bottom_ParamLimits

0xb9d1,	// (0x00029e58) sctrl_sk_bottom_pane_t1_ParamLimits

0xcc1a,	// (0x0002b0a1) aid_area_touch_clock

0xbbb6,	// (0x0002a03d) aid_vkb2_area_top_pane_cell_ParamLimits

0xbbb6,	// (0x0002a03d) aid_vkb2_area_top_pane_cell

0xbd01,	// (0x0002a188) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbd01,	// (0x0002a188) aid_vkb2_area_bottom_pane_cell

0xd185,	// (0x0002b60c) popup_char_count_window

0xd2e6,	// (0x0002b76d) popup_char_count_window_g1

0xd2ef,	// (0x0002b776) popup_char_count_window_g2

0xd2f8,	// (0x0002b77f) popup_char_count_window_g3

0x0002,

0xfdda,	// (0x0002e261) popup_char_count_window_g

0xd301,	// (0x0002b788) popup_char_count_window_t1

0xba84,	// (0x00029f0b) popup_fep_char_preview_window_ParamLimits

0xba84,	// (0x00029f0b) popup_fep_char_preview_window

0xbbd4,	// (0x0002a05b) vkb2_top_candi_pane_ParamLimits

0xbbd4,	// (0x0002a05b) vkb2_top_candi_pane

0xf0a4,	// (0x0002d52b) cell_vkb2_top_candi_pane_ParamLimits

0xf0a4,	// (0x0002d52b) cell_vkb2_top_candi_pane

0xbfe8,	// (0x0002a46f) bg_popup_fep_char_preview_window_ParamLimits

0xbfe8,	// (0x0002a46f) bg_popup_fep_char_preview_window

0xbff6,	// (0x0002a47d) popup_fep_char_preview_window_t1_ParamLimits

0xbff6,	// (0x0002a47d) popup_fep_char_preview_window_t1

0xd30f,	// (0x0002b796) bg_popup_fep_char_preview_window_g1

0xd317,	// (0x0002b79e) bg_popup_fep_char_preview_window_g2

0xd31f,	// (0x0002b7a6) bg_popup_fep_char_preview_window_g3

0xd327,	// (0x0002b7ae) bg_popup_fep_char_preview_window_g4

0xd32f,	// (0x0002b7b6) bg_popup_fep_char_preview_window_g5

0xc030,	// (0x0002a4b7) bg_popup_fep_char_preview_window_g6

0xd337,	// (0x0002b7be) bg_popup_fep_char_preview_window_g7

0xd33f,	// (0x0002b7c6) bg_popup_fep_char_preview_window_g8

0xd347,	// (0x0002b7ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde1,	// (0x0002e268) bg_popup_fep_char_preview_window_g

0xae3f,	// (0x000292c6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xae3f,	// (0x000292c6) cell_vkb2_top_candi_pane_g1

0xae4d,	// (0x000292d4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xae4d,	// (0x000292d4) cell_vkb2_top_candi_pane_g2

0xc307,	// (0x0002a78e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc307,	// (0x0002a78e) cell_vkb2_top_candi_pane_g3

0xc038,	// (0x0002a4bf) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc038,	// (0x0002a4bf) cell_vkb2_top_candi_pane_g4

0x7af3,	// (0x00025f7a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7af3,	// (0x00025f7a) cell_vkb2_top_candi_pane_g5

0xc059,	// (0x0002a4e0) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc059,	// (0x0002a4e0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf4,	// (0x0002e27b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf4,	// (0x0002e27b) cell_vkb2_top_candi_pane_g

0xc067,	// (0x0002a4ee) cell_vkb2_top_candi_pane_t1

0xa37e,	// (0x00028805) aid_size_touch_slider_mark_ParamLimits

0xa37e,	// (0x00028805) aid_size_touch_slider_mark

0xee47,	// (0x0002d2ce) grid_graphic2_catg_pane_ParamLimits

0xee47,	// (0x0002d2ce) grid_graphic2_catg_pane

0xeec1,	// (0x0002d348) popup_grid_graphic2_window_t1_ParamLimits

0xeec1,	// (0x0002d348) popup_grid_graphic2_window_t1

0xeed3,	// (0x0002d35a) popup_grid_graphic2_window_t2_ParamLimits

0xeed3,	// (0x0002d35a) popup_grid_graphic2_window_t2

0x0001,

0xfdaf,	// (0x0002e236) popup_grid_graphic2_window_t_ParamLimits

0xfdaf,	// (0x0002e236) popup_grid_graphic2_window_t

0x48bd,	// (0x00022d44) bg_button_pane_cp05_ParamLimits

0xf035,	// (0x0002d4bc) cell_graphic2_control_pane_g1_ParamLimits

0xf0f1,	// (0x0002d578) cell_graphic2_catg_pane_ParamLimits

0xf0f1,	// (0x0002d578) cell_graphic2_catg_pane

0x4206,	// (0x0002268d) bg_button_pane_cp12

0xf103,	// (0x0002d58a) cell_graphic2_catg_pane_g1

0xcbe6,	// (0x0002b06d) cell_tb_ext_pane_t1_ParamLimits

0xbe1e,	// (0x0002a2a5) vkb2_top_cell_right_narrow_pane_ParamLimits

0xbe1e,	// (0x0002a2a5) vkb2_top_cell_right_narrow_pane

0xbe36,	// (0x0002a2bd) vkb2_top_cell_right_wide_pane_ParamLimits

0xbe36,	// (0x0002a2bd) vkb2_top_cell_right_wide_pane

0xaaf0,	// (0x00028f77) bg_vkb2_func_pane_ParamLimits

0xaaf0,	// (0x00028f77) bg_vkb2_func_pane

0xbea7,	// (0x0002a32e) vkb2_top_cell_left_pane_g1_ParamLimits

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp03_ParamLimits

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp03

0xbf05,	// (0x0002a38c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x585c,	// (0x00023ce3) bg_vkb2_func_pane_g1

0x5854,	// (0x00023cdb) bg_vkb2_func_pane_g2

0x5864,	// (0x00023ceb) bg_vkb2_func_pane_g3

0x586c,	// (0x00023cf3) bg_vkb2_func_pane_g4

0x5874,	// (0x00023cfb) bg_vkb2_func_pane_g5

0x587c,	// (0x00023d03) bg_vkb2_func_pane_g6

0x588c,	// (0x00023d13) bg_vkb2_func_pane_g7

0x5884,	// (0x00023d0b) bg_vkb2_func_pane_g8

0x584c,	// (0x00023cd3) bg_vkb2_func_pane_g9

0x0008,

0xfe01,	// (0x0002e288) bg_vkb2_func_pane_g

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp01_ParamLimits

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp01

0xbea7,	// (0x0002a32e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xbea7,	// (0x0002a32e) vkb2_top_cell_right_wide_pane_g1

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp02_ParamLimits

0xaaf0,	// (0x00028f77) bg_vkb2_fuc_pane_cp02

0xbf05,	// (0x0002a38c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xbf05,	// (0x0002a38c) vkb2_top_cell_right_narrow_pane_g1

0xc812,	// (0x0002ac99) aid_touch_area_decrease_ParamLimits

0xc812,	// (0x0002ac99) aid_touch_area_decrease

0xc836,	// (0x0002acbd) aid_touch_area_increase_ParamLimits

0xc836,	// (0x0002acbd) aid_touch_area_increase

0xc842,	// (0x0002acc9) aid_touch_area_mute_ParamLimits

0xc842,	// (0x0002acc9) aid_touch_area_mute

0xc866,	// (0x0002aced) aid_touch_area_slider_ParamLimits

0xc866,	// (0x0002aced) aid_touch_area_slider

0xc952,	// (0x0002add9) popup_slider_window_g4_ParamLimits

0xc952,	// (0x0002add9) popup_slider_window_g4

0xc95e,	// (0x0002ade5) popup_slider_window_g5_ParamLimits

0xc95e,	// (0x0002ade5) popup_slider_window_g5

0xc980,	// (0x0002ae07) popup_slider_window_g6_ParamLimits

0xc980,	// (0x0002ae07) popup_slider_window_g6

0xc9c0,	// (0x0002ae47) popup_slider_window_t2_ParamLimits

0xc9c0,	// (0x0002ae47) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002e184) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002e184) popup_slider_window_t

0xc9d8,	// (0x0002ae5f) slider_pane_ParamLimits

0xc9d8,	// (0x0002ae5f) slider_pane

0xd34f,	// (0x0002b7d6) slider_pane_g1_ParamLimits

0xd34f,	// (0x0002b7d6) slider_pane_g1

0xd363,	// (0x0002b7ea) slider_pane_g2_ParamLimits

0xd363,	// (0x0002b7ea) slider_pane_g2

0xd379,	// (0x0002b800) slider_pane_g3_ParamLimits

0xd379,	// (0x0002b800) slider_pane_g3

0x0003,

0xfe14,	// (0x0002e29b) slider_pane_g_ParamLimits

0xfe14,	// (0x0002e29b) slider_pane_g

0x99e5,	// (0x00027e6c) popup_tb_float_extension_window_ParamLimits

0x99e5,	// (0x00027e6c) popup_tb_float_extension_window

0xd3a5,	// (0x0002b82c) aid_size_cell_tb_float_ext

0x4206,	// (0x0002268d) bg_popup_sub_window_cp28

0xd3b1,	// (0x0002b838) grid_tb_float_ext_pane

0xd3bb,	// (0x0002b842) cell_tb_float_ext_pane_ParamLimits

0xd3bb,	// (0x0002b842) cell_tb_float_ext_pane

0xd3d5,	// (0x0002b85c) cell_tb_float_ext_pane_g1

0xd3de,	// (0x0002b865) grid_highlight_pane_cp12

0xac3f,	// (0x000290c6) cell_last_hwr_side_pane_ParamLimits

0xac3f,	// (0x000290c6) cell_last_hwr_side_pane

0x75f6,	// (0x00025a7d) cell_last_hwr_side_pane_g1

0xd3e7,	// (0x0002b86e) cell_last_hwr_side_pane_g2

0x0001,

0xfe1d,	// (0x0002e2a4) cell_last_hwr_side_pane_g

0xbdcd,	// (0x0002a254) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbdcd,	// (0x0002a254) vkb2_area_bottom_space_btn_pane

0xae3f,	// (0x000292c6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd23a,	// (0x0002b6c1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc067,	// (0x0002a4ee) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc086,	// (0x0002a50d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc086,	// (0x0002a50d) vkb2_area_bottom_space_btn_pane_g1

0xc0c0,	// (0x0002a547) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc0c0,	// (0x0002a547) vkb2_area_bottom_space_btn_pane_g2

0xc0f6,	// (0x0002a57d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc0f6,	// (0x0002a57d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe22,	// (0x0002e2a9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe22,	// (0x0002e2a9) vkb2_area_bottom_space_btn_pane_g

0xabb3,	// (0x0002903a) cel_fep_hwr_func_pane_ParamLimits

0xabb3,	// (0x0002903a) cel_fep_hwr_func_pane

0xabef,	// (0x00029076) cell_hwr_side_button_pane_ParamLimits

0xabef,	// (0x00029076) cell_hwr_side_button_pane

0xcc1a,	// (0x0002b0a1) aid_area_touch_clock_ParamLimits

0x43a9,	// (0x00022830) bg_uniindi_top_pane_ParamLimits

0xcc2c,	// (0x0002b0b3) uniindi_top_pane_g1_ParamLimits

0xcc42,	// (0x0002b0c9) uniindi_top_pane_g2_ParamLimits

0xcc4e,	// (0x0002b0d5) uniindi_top_pane_g3_ParamLimits

0xcc5f,	// (0x0002b0e6) uniindi_top_pane_g4_ParamLimits

0xfd35,	// (0x0002e1bc) uniindi_top_pane_g_ParamLimits

0xcc6c,	// (0x0002b0f3) uniindi_top_pane_t1_ParamLimits

0x43a9,	// (0x00022830) bg_vkb2_func_pane_cp01_ParamLimits

0x43a9,	// (0x00022830) bg_vkb2_func_pane_cp01

0xd3f0,	// (0x0002b877) cel_fep_hwr_func_pane_g1_ParamLimits

0xd3f0,	// (0x0002b877) cel_fep_hwr_func_pane_g1

0x43a9,	// (0x00022830) bg_vkb2_func_pane_cp02_ParamLimits

0x43a9,	// (0x00022830) bg_vkb2_func_pane_cp02

0xd3f0,	// (0x0002b877) cell_hwr_side_button_pane_g1_ParamLimits

0xd3f0,	// (0x0002b877) cell_hwr_side_button_pane_g1

0x5764,	// (0x00023beb) status_pane_g4_ParamLimits

0x5764,	// (0x00023beb) status_pane_g4

0x577c,	// (0x00023c03) status_pane_t1

0x7485,	// (0x0002590c) form2_midp_gauge_slider_cont_pane

0x748d,	// (0x00025914) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa963,	// (0x00028dea) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa975,	// (0x00028dfc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0002df83) form2_midp_gauge_slider_pane_t_ParamLimits

0x749f,	// (0x00025926) form2_midp_slider_pane_ParamLimits

0xba44,	// (0x00029ecb) aid_size_cell_func_vkb2_ParamLimits

0xba44,	// (0x00029ecb) aid_size_cell_func_vkb2

0xd391,	// (0x0002b818) slider_pane_g4_ParamLimits

0xd391,	// (0x0002b818) slider_pane_g4

0xc140,	// (0x0002a5c7) form2_midp_gauge_slider_pane_t2_cp01

0xc14e,	// (0x0002a5d5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc14e,	// (0x0002a5d5) form2_midp_gauge_slider_pane_t3_cp01

0xc16b,	// (0x0002a5f2) form2_midp_slider_pane_cp01

0x4206,	// (0x0002268d) navi_smil_pane

0xd420,	// (0x0002b8a7) navi_smil_pane_g1

0xd428,	// (0x0002b8af) navi_smil_pane_t1

0xd3fe,	// (0x0002b885) form2_midp_slider_pane_g1

0xd407,	// (0x0002b88e) form2_midp_slider_pane_g2

0xd40f,	// (0x0002b896) form2_midp_slider_pane_g3

0xd3fe,	// (0x0002b885) form2_midp_slider_pane_g4

0xf10c,	// (0x0002d593) form2_midp_slider_pane_g5

0x0004,

0xfe2b,	// (0x0002e2b2) form2_midp_slider_pane_g

0xc130,	// (0x0002a5b7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc130,	// (0x0002a5b7) vkb2_area_bottom_space_btn_pane_g4

0x9b50,	// (0x00027fd7) lc0_navi_pane_ParamLimits

0x9b50,	// (0x00027fd7) lc0_navi_pane

0x9bc6,	// (0x0002804d) lc0_stat_indi_pane_ParamLimits

0x9bc6,	// (0x0002804d) lc0_stat_indi_pane

0x9bdd,	// (0x00028064) ls0_title_pane_ParamLimits

0x9bdd,	// (0x00028064) ls0_title_pane

0x48bd,	// (0x00022d44) bg_popup_sub_pane_cp14_ParamLimits

0xcc01,	// (0x0002b088) list_uniindi_pane_ParamLimits

0xcc0d,	// (0x0002b094) uniindi_top_pane_ParamLimits

0xcca8,	// (0x0002b12f) list_single_uniindi_pane_g1_ParamLimits

0xccbb,	// (0x0002b142) list_single_uniindi_pane_t1_ParamLimits

0xc174,	// (0x0002a5fb) lc0_stat_clock_pane_ParamLimits

0xc174,	// (0x0002a5fb) lc0_stat_clock_pane

0xf115,	// (0x0002d59c) lc0_stat_indi_pane_g1_ParamLimits

0xf115,	// (0x0002d59c) lc0_stat_indi_pane_g1

0xf122,	// (0x0002d5a9) lc0_stat_indi_pane_g2_ParamLimits

0xf122,	// (0x0002d5a9) lc0_stat_indi_pane_g2

0x0001,

0xfe36,	// (0x0002e2bd) lc0_stat_indi_pane_g_ParamLimits

0xfe36,	// (0x0002e2bd) lc0_stat_indi_pane_g

0xc181,	// (0x0002a608) lc0_uni_indicator_pane_ParamLimits

0xc181,	// (0x0002a608) lc0_uni_indicator_pane

0xf12f,	// (0x0002d5b6) ls0_title_pane_g1_ParamLimits

0xf12f,	// (0x0002d5b6) ls0_title_pane_g1

0xf143,	// (0x0002d5ca) ls0_title_pane_t1_ParamLimits

0xf143,	// (0x0002d5ca) ls0_title_pane_t1

0xc18e,	// (0x0002a615) lc0_uni_indicator_pane_g1_ParamLimits

0xc18e,	// (0x0002a615) lc0_uni_indicator_pane_g1

0xd436,	// (0x0002b8bd) lc0_stat_clock_pane_t1

0x4206,	// (0x0002268d) main_ai5_pane

0xd444,	// (0x0002b8cb) ai5_sk_pane_ParamLimits

0xd444,	// (0x0002b8cb) ai5_sk_pane

0xf179,	// (0x0002d600) cell_ai5_widget_pane_ParamLimits

0xf179,	// (0x0002d600) cell_ai5_widget_pane

0xd451,	// (0x0002b8d8) aid_size_cell_widget_grid

0xd465,	// (0x0002b8ec) bg_ai5_widget_pane_ParamLimits

0xd465,	// (0x0002b8ec) bg_ai5_widget_pane

0xf223,	// (0x0002d6aa) cell_ai5_widget_pane_g2

0xf233,	// (0x0002d6ba) cell_ai5_widget_pane_g3

0xf252,	// (0x0002d6d9) cell_ai5_widget_pane_g4

0xf25e,	// (0x0002d6e5) cell_ai5_widget_pane_g5

0xf26a,	// (0x0002d6f1) cell_ai5_widget_pane_g6

0xf276,	// (0x0002d6fd) cell_ai5_widget_pane_g7

0xf2be,	// (0x0002d745) cell_ai5_widget_pane_t1_ParamLimits

0xf2be,	// (0x0002d745) cell_ai5_widget_pane_t1

0xf2db,	// (0x0002d762) cell_ai5_widget_pane_t2_ParamLimits

0xf2db,	// (0x0002d762) cell_ai5_widget_pane_t2

0xf2f3,	// (0x0002d77a) cell_ai5_widget_pane_t3_ParamLimits

0xf2f3,	// (0x0002d77a) cell_ai5_widget_pane_t3

0xf30b,	// (0x0002d792) cell_ai5_widget_pane_t4_ParamLimits

0xf30b,	// (0x0002d792) cell_ai5_widget_pane_t4

0xf325,	// (0x0002d7ac) cell_ai5_widget_pane_t5_ParamLimits

0xf325,	// (0x0002d7ac) cell_ai5_widget_pane_t5

0xd471,	// (0x0002b8f8) cell_ai5_widget_pane_t6_ParamLimits

0xd471,	// (0x0002b8f8) cell_ai5_widget_pane_t6

0xd483,	// (0x0002b90a) cell_ai5_widget_pane_t7_ParamLimits

0xd483,	// (0x0002b90a) cell_ai5_widget_pane_t7

0xf344,	// (0x0002d7cb) cell_ai5_widget_pane_t8_ParamLimits

0xf344,	// (0x0002d7cb) cell_ai5_widget_pane_t8

0x0009,

0xfe50,	// (0x0002e2d7) cell_ai5_widget_pane_t_ParamLimits

0xfe50,	// (0x0002e2d7) cell_ai5_widget_pane_t

0xf390,	// (0x0002d817) grid_ai5_widget_pane

0x48bd,	// (0x00022d44) highlight_cell_ai5_widget_pane_ParamLimits

0x48bd,	// (0x00022d44) highlight_cell_ai5_widget_pane

0xf3a6,	// (0x0002d82d) ai5_sk_left_pane

0xf3b0,	// (0x0002d837) ai5_sk_middle_pane

0xf3ba,	// (0x0002d841) ai5_sk_right_pane

0xd49c,	// (0x0002b923) bg_ai5_widget_pane_g1_ParamLimits

0xd49c,	// (0x0002b923) bg_ai5_widget_pane_g1

0xd4a8,	// (0x0002b92f) bg_ai5_widget_pane_g2_ParamLimits

0xd4a8,	// (0x0002b92f) bg_ai5_widget_pane_g2

0xd4b4,	// (0x0002b93b) bg_ai5_widget_pane_g3_ParamLimits

0xd4b4,	// (0x0002b93b) bg_ai5_widget_pane_g3

0xd4c0,	// (0x0002b947) bg_ai5_widget_pane_g4_ParamLimits

0xd4c0,	// (0x0002b947) bg_ai5_widget_pane_g4

0xd4cc,	// (0x0002b953) bg_ai5_widget_pane_g5_ParamLimits

0xd4cc,	// (0x0002b953) bg_ai5_widget_pane_g5

0xd4d8,	// (0x0002b95f) bg_ai5_widget_pane_g6_ParamLimits

0xd4d8,	// (0x0002b95f) bg_ai5_widget_pane_g6

0xd4e4,	// (0x0002b96b) bg_ai5_widget_pane_g7_ParamLimits

0xd4e4,	// (0x0002b96b) bg_ai5_widget_pane_g7

0xd4f0,	// (0x0002b977) bg_ai5_widget_pane_g8_ParamLimits

0xd4f0,	// (0x0002b977) bg_ai5_widget_pane_g8

0xd4fc,	// (0x0002b983) bg_ai5_widget_pane_g9_ParamLimits

0xd4fc,	// (0x0002b983) bg_ai5_widget_pane_g9

0x0008,

0xfe65,	// (0x0002e2ec) bg_ai5_widget_pane_g_ParamLimits

0xfe65,	// (0x0002e2ec) bg_ai5_widget_pane_g

0xd52f,	// (0x0002b9b6) cell_shortcut_ai5_widget_pane_ParamLimits

0xd52f,	// (0x0002b9b6) cell_shortcut_ai5_widget_pane

0x42b2,	// (0x00022739) bg_cell_shortcut_ai5_widget_pane

0xd540,	// (0x0002b9c7) cell_grid_ai5_widget_pane_g1

0xd549,	// (0x0002b9d0) highlight_cell_shortcut_ai5_widget_pane

0x585c,	// (0x00023ce3) ai5_sk_left_pane_g1

0xd551,	// (0x0002b9d8) ai5_sk_left_pane_g2

0xd559,	// (0x0002b9e0) ai5_sk_left_pane_g3

0xd561,	// (0x0002b9e8) ai5_sk_left_pane_g4

0x0003,

0xfe78,	// (0x0002e2ff) ai5_sk_left_pane_g

0xd569,	// (0x0002b9f0) ai5_sk_left_pane_t1

0x5854,	// (0x00023cdb) ai5_sk_right_pane_g1

0xd577,	// (0x0002b9fe) ai5_sk_right_pane_g2

0xd57f,	// (0x0002ba06) ai5_sk_right_pane_g3

0xd587,	// (0x0002ba0e) ai5_sk_right_pane_g4

0x0003,

0xfe81,	// (0x0002e308) ai5_sk_right_pane_g

0xd58f,	// (0x0002ba16) ai5_sk_right_pane_t1

0x5854,	// (0x00023cdb) ai5_sk_middle_pane_g1

0x585c,	// (0x00023ce3) ai5_sk_middle_pane_g2

0x5874,	// (0x00023cfb) ai5_sk_middle_pane_g3

0xd57f,	// (0x0002ba06) ai5_sk_middle_pane_g4

0xd559,	// (0x0002b9e0) ai5_sk_middle_pane_g5

0xd59d,	// (0x0002ba24) ai5_sk_middle_pane_g6

0xf3c4,	// (0x0002d84b) ai5_sk_middle_pane_g7

0x0006,

0xfe8a,	// (0x0002e311) ai5_sk_middle_pane_g

0x9a95,	// (0x00027f1c) aid_touch_area_size_lc0_ParamLimits

0x9a95,	// (0x00027f1c) aid_touch_area_size_lc0

0xae6e,	// (0x000292f5) cell_hwr_candidate_pane_t1_ParamLimits

0x5686,	// (0x00023b0d) aid_touch_navi_pane

0x9cb3,	// (0x0002813a) status_dt_navi_pane_ParamLimits

0x9cb3,	// (0x0002813a) status_dt_navi_pane

0x9cc0,	// (0x00028147) status_dt_sta_pane_ParamLimits

0x9cc0,	// (0x00028147) status_dt_sta_pane

0xf3cc,	// (0x0002d853) dt_sta_controll_pane

0xf3d9,	// (0x0002d860) dt_sta_indi_pane

0xf3ea,	// (0x0002d871) dt_sta_title_pane

0x43a9,	// (0x00022830) bg_dt_sta_indi_pane_ParamLimits

0x43a9,	// (0x00022830) bg_dt_sta_indi_pane

0xf3fd,	// (0x0002d884) dt_sta_battery_pane

0xf405,	// (0x0002d88c) dt_sta_indi_pane_g1

0xd5a5,	// (0x0002ba2c) dt_sta_indi_pane_g2

0xd5ae,	// (0x0002ba35) dt_sta_indi_pane_g3

0x0002,

0xfe99,	// (0x0002e320) dt_sta_indi_pane_g

0xd5b7,	// (0x0002ba3e) dt_sta_signal_pane

0x48bd,	// (0x00022d44) bg_dt_sta_title_pane_ParamLimits

0x48bd,	// (0x00022d44) bg_dt_sta_title_pane

0x6511,	// (0x00024998) dt_sta_title_pane_g1

0xf40e,	// (0x0002d895) dt_sta_title_pane_t1_ParamLimits

0xf40e,	// (0x0002d895) dt_sta_title_pane_t1

0x4206,	// (0x0002268d) bg_dt_sta_control_pane

0xf423,	// (0x0002d8aa) dt_sta_controll_pane_g1

0xd5c0,	// (0x0002ba47) bg_dt_sta_title_pane_g1

0xd5c9,	// (0x0002ba50) bg_dt_sta_title_pane_g2

0xd5d2,	// (0x0002ba59) bg_dt_sta_title_pane_g3

0x0002,

0xfea0,	// (0x0002e327) bg_dt_sta_title_pane_g

0x75f6,	// (0x00025a7d) bg_dt_sta_indi_pane_g1

0xd5db,	// (0x0002ba62) dt_sta_signal_pane_g1

0xd5e3,	// (0x0002ba6a) dt_sta_signal_pane_g2

0x0001,

0xfea7,	// (0x0002e32e) dt_sta_signal_pane_g

0xd5eb,	// (0x0002ba72) dt_sta_battery_pane_g1

0xd5f4,	// (0x0002ba7b) dt_sta_battery_pane_t1

0x75f6,	// (0x00025a7d) bg_dt_sta_control_pane_g1

0x4e73,	// (0x000232fa) fep_china_uni_eep_pane

0x4e7b,	// (0x00023302) fep_china_uni_entry_pane_ParamLimits

0x4e8b,	// (0x00023312) popup_fep_china_uni_window_g1_ParamLimits

0x4e9b,	// (0x00023322) popup_fep_china_uni_window_g2_ParamLimits

0x4e9b,	// (0x00023322) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0002dbb7) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0002dbb7) popup_fep_china_uni_window_g

0xd603,	// (0x0002ba8a) fep_china_uni_eep_pane_g1

0xd60b,	// (0x0002ba92) fep_china_uni_eep_pane_t1

0xd417,	// (0x0002b89e) aid_touch_area_size_smil_player

0x5737,	// (0x00023bbe) lc0_clock_pane

0x5770,	// (0x00023bf7) status_pane_g5_ParamLimits

0x5770,	// (0x00023bf7) status_pane_g5

0x96f7,	// (0x00027b7e) popup_keymap_window

0x5750,	// (0x00023bd7) status_icon_pane

0xf233,	// (0x0002d6ba) cell_ai5_widget_pane_g3_ParamLimits

0xf252,	// (0x0002d6d9) cell_ai5_widget_pane_g4_ParamLimits

0xf25e,	// (0x0002d6e5) cell_ai5_widget_pane_g5_ParamLimits

0xf282,	// (0x0002d709) cell_ai5_widget_pane_g8_ParamLimits

0xf282,	// (0x0002d709) cell_ai5_widget_pane_g8

0xf296,	// (0x0002d71d) cell_ai5_widget_pane_g9_ParamLimits

0xf296,	// (0x0002d71d) cell_ai5_widget_pane_g9

0xf2aa,	// (0x0002d731) cell_ai5_widget_pane_g10_ParamLimits

0xf2aa,	// (0x0002d731) cell_ai5_widget_pane_g10

0xd61a,	// (0x0002baa1) status_icon_pane_g1

0x4206,	// (0x0002268d) bg_popup_sub_pane_cp13

0xd622,	// (0x0002baa9) popup_keymap_window_t1

0x94d2,	// (0x00027959) control_pane_g6_ParamLimits

0x94d2,	// (0x00027959) control_pane_g6

0x94df,	// (0x00027966) control_pane_g7_ParamLimits

0x94df,	// (0x00027966) control_pane_g7

0x94ec,	// (0x00027973) control_pane_g8_ParamLimits

0x94ec,	// (0x00027973) control_pane_g8

0xf3cc,	// (0x0002d853) dt_sta_controll_pane_ParamLimits

0xf3d9,	// (0x0002d860) dt_sta_indi_pane_ParamLimits

0xf3ea,	// (0x0002d871) dt_sta_title_pane_ParamLimits

0x47ff,	// (0x00022c86) aid_size_touch_scroll_bar_cale

0x8895,	// (0x00026d1c) popup_discreet_window_ParamLimits

0x8895,	// (0x00026d1c) popup_discreet_window

0x890f,	// (0x00026d96) popup_sk_window

0x5df9,	// (0x00024280) bg_popup_sub_pane_cp28_ParamLimits

0x5df9,	// (0x00024280) bg_popup_sub_pane_cp28

0xd630,	// (0x0002bab7) popup_discreet_window_g1_ParamLimits

0xd630,	// (0x0002bab7) popup_discreet_window_g1

0xd650,	// (0x0002bad7) popup_discreet_window_t1_ParamLimits

0xd650,	// (0x0002bad7) popup_discreet_window_t1

0xd66e,	// (0x0002baf5) popup_discreet_window_t2_ParamLimits

0xd66e,	// (0x0002baf5) popup_discreet_window_t2

0x0002,

0xfeac,	// (0x0002e333) popup_discreet_window_t_ParamLimits

0xfeac,	// (0x0002e333) popup_discreet_window_t

0xc1a4,	// (0x0002a62b) popup_sk_window_g1

0xc1ae,	// (0x0002a635) popup_sk_window_g2

0x0001,

0xfeb3,	// (0x0002e33a) popup_sk_window_g

0xd6c0,	// (0x0002bb47) popup_sk_window_t1

0xd6ce,	// (0x0002bb55) popup_sk_window_t1_copy1

0xf223,	// (0x0002d6aa) cell_ai5_widget_pane_g2_ParamLimits

0xf356,	// (0x0002d7dd) cell_ai5_widget_pane_t9_ParamLimits

0xf356,	// (0x0002d7dd) cell_ai5_widget_pane_t9

0x4206,	// (0x0002268d) main_fep_fshwr2_pane

0xf42c,	// (0x0002d8b3) aid_fshwr2_btn_pane

0xf434,	// (0x0002d8bb) aid_fshwr2_syb_pane

0xf43c,	// (0x0002d8c3) aid_fshwr2_txt_pane

0xf444,	// (0x0002d8cb) fshwr2_func_candi_pane

0xf450,	// (0x0002d8d7) fshwr2_hwr_syb_pane

0xf45c,	// (0x0002d8e3) fshwr2_icf_pane

0x4206,	// (0x0002268d) fshwr2_icf_bg_pane

0xf466,	// (0x0002d8ed) fshwr2_icf_pane_t1_ParamLimits

0xf466,	// (0x0002d8ed) fshwr2_icf_pane_t1

0x75f6,	// (0x00025a7d) fshwr2_func_candi_pane_g1

0xd6f0,	// (0x0002bb77) fshwr2_func_candi_row_pane_ParamLimits

0xd6f0,	// (0x0002bb77) fshwr2_func_candi_row_pane

0xf47d,	// (0x0002d904) cell_fshwr2_syb_pane_ParamLimits

0xf47d,	// (0x0002d904) cell_fshwr2_syb_pane

0x787d,	// (0x00025d04) fshwr2_hwr_syb_pane_g1_ParamLimits

0x787d,	// (0x00025d04) fshwr2_hwr_syb_pane_g1

0x4206,	// (0x0002268d) bg_popup_call_pane_cp01

0xd701,	// (0x0002bb88) fshwr2_func_candi_cell_pane_ParamLimits

0xd701,	// (0x0002bb88) fshwr2_func_candi_cell_pane

0xd732,	// (0x0002bbb9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd732,	// (0x0002bbb9) fshwr2_func_candi_cell_bg_pane

0xd74c,	// (0x0002bbd3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd74c,	// (0x0002bbd3) fshwr2_func_candi_cell_pane_g1

0xd76c,	// (0x0002bbf3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd76c,	// (0x0002bbf3) fshwr2_func_candi_cell_pane_t1

0x4206,	// (0x0002268d) bg_button_pane_cp08

0x5304,	// (0x0002378b) cell_fshwr2_syb_bg_pane

0xf499,	// (0x0002d920) cell_fshwr2_syb_bg_pane_g1

0xd77f,	// (0x0002bc06) cell_fshwr2_syb_bg_pane_t1

0x48bd,	// (0x00022d44) main_tmo_pane

0xa2b2,	// (0x00028739) uni_indicator_pane_g1_ParamLimits

0xa2c7,	// (0x0002874e) uni_indicator_pane_g2_ParamLimits

0xa2dd,	// (0x00028764) uni_indicator_pane_g3_ParamLimits

0x67d5,	// (0x00024c5c) uni_indicator_pane_g4_ParamLimits

0x67d5,	// (0x00024c5c) uni_indicator_pane_g4

0x67e9,	// (0x00024c70) uni_indicator_pane_g5_ParamLimits

0x67e9,	// (0x00024c70) uni_indicator_pane_g5

0x67fd,	// (0x00024c84) uni_indicator_pane_g6_ParamLimits

0x67fd,	// (0x00024c84) uni_indicator_pane_g6

0xf928,	// (0x0002ddaf) uni_indicator_pane_g_ParamLimits

0xc7f4,	// (0x0002ac7b) popup_tmo_note_window_ParamLimits

0xc7f4,	// (0x0002ac7b) popup_tmo_note_window

0x4206,	// (0x0002268d) fshwr2_bg_pane

0xd75d,	// (0x0002bbe4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd75d,	// (0x0002bbe4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb8,	// (0x0002e33f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb8,	// (0x0002e33f) fshwr2_func_candi_cell_pane_g

0x75f6,	// (0x00025a7d) bg_popup_window_pane_cp01

0xd78e,	// (0x0002bc15) bg_popup_window_pane_g1_cp01

0xd797,	// (0x0002bc1e) bg_popup_window_pane_cp22_ParamLimits

0xd797,	// (0x0002bc1e) bg_popup_window_pane_cp22

0xd7a5,	// (0x0002bc2c) listscroll_tmo_link_pane_ParamLimits

0xd7a5,	// (0x0002bc2c) listscroll_tmo_link_pane

0xd7e5,	// (0x0002bc6c) popup_tmo_note_window_g1_ParamLimits

0xd7e5,	// (0x0002bc6c) popup_tmo_note_window_g1

0xd7f2,	// (0x0002bc79) tmo_note_info_pane_ParamLimits

0xd7f2,	// (0x0002bc79) tmo_note_info_pane

0xf4a1,	// (0x0002d928) list_tmo_note_info_pane_g1_ParamLimits

0xf4a1,	// (0x0002d928) list_tmo_note_info_pane_g1

0xd80c,	// (0x0002bc93) list_tmo_note_info_pane_g2_ParamLimits

0xd80c,	// (0x0002bc93) list_tmo_note_info_pane_g2

0x0001,

0xfebd,	// (0x0002e344) list_tmo_note_info_pane_g_ParamLimits

0xfebd,	// (0x0002e344) list_tmo_note_info_pane_g

0xd828,	// (0x0002bcaf) list_tmo_note_info_text_pane_ParamLimits

0xd828,	// (0x0002bcaf) list_tmo_note_info_text_pane

0xd86a,	// (0x0002bcf1) list_tmo_link_pane

0xd877,	// (0x0002bcfe) scroll_pane_cp20

0xd884,	// (0x0002bd0b) list_single_tmo_link_pane_ParamLimits

0xd884,	// (0x0002bd0b) list_single_tmo_link_pane

0xd894,	// (0x0002bd1b) list_single_tmo_link_pane_t1

0xd8a2,	// (0x0002bd29) list_tmo_note_info_text_pane_t1_ParamLimits

0xd8a2,	// (0x0002bd29) list_tmo_note_info_text_pane_t1

0x8d14,	// (0x0002719b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8d14,	// (0x0002719b) aid_size_touch_scroll_bar_cp01

0xe458,	// (0x0002c8df) aid_size_touch_slider_marker

0x88f7,	// (0x00026d7e) popup_settings_window_ParamLimits

0x88f7,	// (0x00026d7e) popup_settings_window

0xe620,	// (0x0002caa7) popup_candi_list_indi_window

0x5686,	// (0x00023b0d) aid_touch_navi_pane_ParamLimits

0xb97d,	// (0x00029e04) rs_clock_indi_pane

0xb986,	// (0x00029e0d) sctrl_sk_bottom_pane_ParamLimits

0xb997,	// (0x00029e1e) sctrl_sk_top_pane_ParamLimits

0xba9e,	// (0x00029f25) popup_fep_tooltip_window

0xd451,	// (0x0002b8d8) aid_size_cell_widget_grid_ParamLimits

0xf217,	// (0x0002d69e) cell_ai5_widget_pane_g1_ParamLimits

0xf217,	// (0x0002d69e) cell_ai5_widget_pane_g1

0xf26a,	// (0x0002d6f1) cell_ai5_widget_pane_g6_ParamLimits

0xf276,	// (0x0002d6fd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3b,	// (0x0002e2c2) cell_ai5_widget_pane_g_ParamLimits

0xfe3b,	// (0x0002e2c2) cell_ai5_widget_pane_g

0xf37a,	// (0x0002d801) cell_ai5_widget_pane_t10_ParamLimits

0xf37a,	// (0x0002d801) cell_ai5_widget_pane_t10

0xf390,	// (0x0002d817) grid_ai5_widget_pane_ParamLimits

0xd508,	// (0x0002b98f) cell_contacts_ai5_widget_pane_ParamLimits

0xd508,	// (0x0002b98f) cell_contacts_ai5_widget_pane

0xd683,	// (0x0002bb0a) popup_discreet_window_t3_ParamLimits

0xd683,	// (0x0002bb0a) popup_discreet_window_t3

0xd6dc,	// (0x0002bb63) popup_fshwr2_char_preview_window_ParamLimits

0xd6dc,	// (0x0002bb63) popup_fshwr2_char_preview_window

0xf4b8,	// (0x0002d93f) tmo_note_info_pane_t1

0xf4cd,	// (0x0002d954) tmo_note_info_pane_t2

0xf4e6,	// (0x0002d96d) tmo_note_info_pane_t3

0xd846,	// (0x0002bccd) tmo_note_info_pane_t4

0xd858,	// (0x0002bcdf) tmo_note_info_pane_t5

0x0004,

0xfec2,	// (0x0002e349) tmo_note_info_pane_t

0xd86a,	// (0x0002bcf1) list_tmo_link_pane_ParamLimits

0xd877,	// (0x0002bcfe) scroll_pane_cp20_ParamLimits

0x4206,	// (0x0002268d) bg_popup_fep_char_preview_window_cp01

0xd8bb,	// (0x0002bd42) popup_fshwr2_char_preview_window_t1

0xd8c9,	// (0x0002bd50) popup_candi_list_indi_window_g1

0xd8d2,	// (0x0002bd59) bg_cell_contacts_ai5_widget_pane

0xd8de,	// (0x0002bd65) cell_contacts_ai5_widget_pane_g1

0xd8f2,	// (0x0002bd79) cell_contacts_ai5_widget_pane_g2

0xd901,	// (0x0002bd88) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecd,	// (0x0002e354) cell_contacts_ai5_widget_pane_g

0xd914,	// (0x0002bd9b) cell_contacts_ai5_widget_pane_t1

0x48bd,	// (0x00022d44) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd98e,	// (0x0002be15) settings_container_pane

0x5304,	// (0x0002378b) listscroll_set_pane_copy1

0x6fe6,	// (0x0002546d) scroll_pane_cp121_copy1

0xd99a,	// (0x0002be21) set_content_pane_copy1

0xd9a2,	// (0x0002be29) aid_height_set_list_copy1_ParamLimits

0xd9a2,	// (0x0002be29) aid_height_set_list_copy1

0x62a4,	// (0x0002472b) aid_size_parent_copy1_ParamLimits

0x62a4,	// (0x0002472b) aid_size_parent_copy1

0xd9ae,	// (0x0002be35) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd9ae,	// (0x0002be35) button_value_adjust_pane_cp6_copy1

0x4a14,	// (0x00022e9b) list_highlight_pane_cp2_copy1_ParamLimits

0x4a14,	// (0x00022e9b) list_highlight_pane_cp2_copy1

0xd9c2,	// (0x0002be49) list_set_pane_copy1_ParamLimits

0xd9c2,	// (0x0002be49) list_set_pane_copy1

0xd929,	// (0x0002bdb0) main_pane_set_t1_copy1_ParamLimits

0xd929,	// (0x0002bdb0) main_pane_set_t1_copy1

0xd963,	// (0x0002bdea) main_pane_set_t2_copy1_ParamLimits

0xd963,	// (0x0002bdea) main_pane_set_t2_copy1

0xda6f,	// (0x0002bef6) main_pane_set_t3_copy1

0xda7d,	// (0x0002bf04) main_pane_set_t4_copy1

0xd982,	// (0x0002be09) set_content_pane_g1_copy1_ParamLimits

0xd982,	// (0x0002be09) set_content_pane_g1_copy1

0xda8b,	// (0x0002bf12) setting_code_pane_copy1

0xda95,	// (0x0002bf1c) setting_slider_graphic_pane_copy1

0xda95,	// (0x0002bf1c) setting_slider_pane_copy1

0xda95,	// (0x0002bf1c) setting_text_pane_copy1

0xda9f,	// (0x0002bf26) setting_volume_pane_copy1

0xdaa8,	// (0x0002bf2f) settings_code_pane_cp2_copy1

0xdab0,	// (0x0002bf37) settings_code_pane_cp_copy1_ParamLimits

0xdab0,	// (0x0002bf37) settings_code_pane_cp_copy1

0xdac4,	// (0x0002bf4b) volume_set_pane_copy1

0xdacc,	// (0x0002bf53) volume_set_pane_g10_copy1

0xdad4,	// (0x0002bf5b) volume_set_pane_g1_copy1

0xdadc,	// (0x0002bf63) volume_set_pane_g2_copy1

0xdae4,	// (0x0002bf6b) volume_set_pane_g3_copy1

0xdaec,	// (0x0002bf73) volume_set_pane_g4_copy1

0xdaf4,	// (0x0002bf7b) volume_set_pane_g5_copy1

0xdafc,	// (0x0002bf83) volume_set_pane_g6_copy1

0xdb04,	// (0x0002bf8b) volume_set_pane_g7_copy1

0xdb0c,	// (0x0002bf93) volume_set_pane_g8_copy1

0xdb14,	// (0x0002bf9b) volume_set_pane_g9_copy1

0x4276,	// (0x000226fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x4276,	// (0x000226fd) bg_set_opt_pane_cp_copy1

0xdb1c,	// (0x0002bfa3) setting_slider_pane_t1_copy1_ParamLimits

0xdb1c,	// (0x0002bfa3) setting_slider_pane_t1_copy1

0xdb3a,	// (0x0002bfc1) setting_slider_pane_t2_copy1_ParamLimits

0xdb3a,	// (0x0002bfc1) setting_slider_pane_t2_copy1

0xdb54,	// (0x0002bfdb) setting_slider_pane_t3_copy1_ParamLimits

0xdb54,	// (0x0002bfdb) setting_slider_pane_t3_copy1

0xdb6c,	// (0x0002bff3) slider_set_pane_copy1_ParamLimits

0xdb6c,	// (0x0002bff3) slider_set_pane_copy1

0x4924,	// (0x00022dab) set_opt_bg_pane_g1_copy2

0x492c,	// (0x00022db3) set_opt_bg_pane_g2_copy2

0xdb82,	// (0x0002c009) set_opt_bg_pane_g3_copy2

0x493c,	// (0x00022dc3) set_opt_bg_pane_g4_copy2

0x4944,	// (0x00022dcb) set_opt_bg_pane_g5_copy2

0x494c,	// (0x00022dd3) set_opt_bg_pane_g6_copy2

0xdb8c,	// (0x0002c013) set_opt_bg_pane_g7_copy2

0xdb94,	// (0x0002c01b) set_opt_bg_pane_g8_copy2

0xdb9e,	// (0x0002c025) set_opt_bg_pane_g9_copy2

0xc1b8,	// (0x0002a63f) aid_size_touch_slider_mark_copy1_ParamLimits

0xc1b8,	// (0x0002a63f) aid_size_touch_slider_mark_copy1

0xdba8,	// (0x0002c02f) slider_set_pane_g1_copy1

0xc1cc,	// (0x0002a653) slider_set_pane_g2_copy1

0xa39e,	// (0x00028825) slider_set_pane_g3_copy1_ParamLimits

0xa39e,	// (0x00028825) slider_set_pane_g3_copy1

0xa3b2,	// (0x00028839) slider_set_pane_g4_copy1_ParamLimits

0xa3b2,	// (0x00028839) slider_set_pane_g4_copy1

0xa3ca,	// (0x00028851) slider_set_pane_g5_copy1_ParamLimits

0xa3ca,	// (0x00028851) slider_set_pane_g5_copy1

0xa39e,	// (0x00028825) slider_set_pane_g6_copy1_ParamLimits

0xa39e,	// (0x00028825) slider_set_pane_g6_copy1

0xc1d4,	// (0x0002a65b) slider_set_pane_g7_copy1_ParamLimits

0xc1d4,	// (0x0002a65b) slider_set_pane_g7_copy1

0x421a,	// (0x000226a1) bg_set_opt_pane_cp2_copy1

0xdbb1,	// (0x0002c038) setting_slider_graphic_pane_g1_copy1

0xdbba,	// (0x0002c041) setting_slider_graphic_pane_t1_copy1

0xdbca,	// (0x0002c051) setting_slider_graphic_pane_t2_copy1

0xdbda,	// (0x0002c061) slider_set_pane_cp_copy1

0xdbea,	// (0x0002c071) input_focus_pane_cp1_copy1

0xdbf3,	// (0x0002c07a) list_set_text_pane_copy1

0xdbfb,	// (0x0002c082) setting_text_pane_g1_copy1

0xedc7,	// (0x0002d24e) set_text_pane_t1_copy1

0xdbea,	// (0x0002c071) input_focus_pane_cp2_copy1

0xdbfb,	// (0x0002c082) setting_code_pane_g1_copy1

0xdc04,	// (0x0002c08b) setting_code_pane_t1_copy1

0xdc12,	// (0x0002c099) list_set_graphic_pane_copy1

0x421a,	// (0x000226a1) bg_set_opt_pane_cp4_copy1

0x5006,	// (0x0002348d) list_set_graphic_pane_g1_copy1_ParamLimits

0x5006,	// (0x0002348d) list_set_graphic_pane_g1_copy1

0xdc26,	// (0x0002c0ad) list_set_graphic_pane_g2_copy1

0x501e,	// (0x000234a5) list_set_graphic_pane_t1_copy1_ParamLimits

0x501e,	// (0x000234a5) list_set_graphic_pane_t1_copy1

0x75f6,	// (0x00025a7d) rs_clock_indi_pane_g1

0xdc2e,	// (0x0002c0b5) rs_clock_indi_pane_t1

0xdc3c,	// (0x0002c0c3) rs_indi_pane

0xdc44,	// (0x0002c0cb) rs_indi_pane_g1

0xdc4d,	// (0x0002c0d4) rs_indi_pane_g2

0xdc56,	// (0x0002c0dd) rs_indi_pane_g3

0x0002,

0xfed4,	// (0x0002e35b) rs_indi_pane_g

0x5304,	// (0x0002378b) bg_popup_preview_window_pane_cp03

0xdc5f,	// (0x0002c0e6) popup_fep_tooltip_window_t1

0xb599,	// (0x00029a20) popup_note2_window_g2_ParamLimits

0xb599,	// (0x00029a20) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0002e0fb) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0002e0fb) popup_note2_window_g

0xc477,	// (0x0002a8fe) bg_popup_sub_pane_cp11_ParamLimits

0xc484,	// (0x0002a90b) cell_ai3_links_pane_g1_ParamLimits

0xc49b,	// (0x0002a922) cell_ai3_links_pane_t1

0xedc7,	// (0x0002d24e) set_text_pane_t1_copy1_ParamLimits

0x5213,	// (0x0002369a) cell_graphic_popup_pane_cp2_ParamLimits

0x5213,	// (0x0002369a) cell_graphic_popup_pane_cp2

0xdc6d,	// (0x0002c0f4) cell_graphic_popup_pane_g1_cp2

0x4612,	// (0x00022a99) cell_graphic_popup_pane_g2_cp2

0xdc75,	// (0x0002c0fc) cell_graphic_popup_pane_g3_cp2

0xdc7d,	// (0x0002c104) cell_graphic_popup_pane_t2_cp2

0x4623,	// (0x00022aaa) grid_highlight_pane_cp3_cp2

0x4bbe,	// (0x00023045) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x48bd,	// (0x00022d44) main_tmo_pane_ParamLimits

0xc7e8,	// (0x0002ac6f) popup_tmo_big_image_note_window

0xf207,	// (0x0002d68e) cell_ai5_widget_list_pane

0xf20f,	// (0x0002d696) cell_ai5_widget_lrg_icon_pane

0xf4b8,	// (0x0002d93f) tmo_note_info_pane_t1_ParamLimits

0xf4cd,	// (0x0002d954) tmo_note_info_pane_t2_ParamLimits

0xf4e6,	// (0x0002d96d) tmo_note_info_pane_t3_ParamLimits

0xd846,	// (0x0002bccd) tmo_note_info_pane_t4_ParamLimits

0xd858,	// (0x0002bcdf) tmo_note_info_pane_t5_ParamLimits

0xfec2,	// (0x0002e349) tmo_note_info_pane_t_ParamLimits

0xd98e,	// (0x0002be15) settings_container_pane_ParamLimits

0xdbe2,	// (0x0002c069) indicator_popup_pane_cp5

0xdbe2,	// (0x0002c069) indicator_popup_pane_cp6

0xdc12,	// (0x0002c099) list_set_graphic_pane_copy1_ParamLimits

0x4206,	// (0x0002268d) bg_popup_window_pane_cp23

0xdc8b,	// (0x0002c112) popup_tmo_big_image_note_window_g1

0xdc96,	// (0x0002c11d) popup_tmo_big_image_note_window_t1

0xdca6,	// (0x0002c12d) popup_tmo_big_image_note_window_t2

0xdcb6,	// (0x0002c13d) popup_tmo_big_image_note_window_t3

0x0002,

0xfedb,	// (0x0002e362) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0002d982) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0002d98a) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0002d998) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0002d998) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0002d9b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0002d9b1) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0002d9be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0002d9be) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0002d9d6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0002d9d6) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0688,	// (0x0001eb0f) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0688,	// (0x0001eb0f) cell_ai5_widget_list_row_pane_t

0x87bc,	// (0x00026c43) main_fep_vtchi_ss_pane

0xdcc6,	// (0x0002c14d) popup_fep_char_pre_window

0xdcce,	// (0x0002c155) popup_fep_ituss_window

0xdcef,	// (0x0002c176) popup_fep_vkbss_window

0xdd0e,	// (0x0002c195) grid_vkbss_keypad_pane_ParamLimits

0xdd0e,	// (0x0002c195) grid_vkbss_keypad_pane

0xdd1e,	// (0x0002c1a5) ituss_keypad_pane

0xdd36,	// (0x0002c1bd) aid_vkbss_key_offset_ParamLimits

0xdd36,	// (0x0002c1bd) aid_vkbss_key_offset

0xdd42,	// (0x0002c1c9) cell_vkbss_key_pane_ParamLimits

0xdd42,	// (0x0002c1c9) cell_vkbss_key_pane

0xdd58,	// (0x0002c1df) bg_cell_vkbss_key_g1_ParamLimits

0xdd58,	// (0x0002c1df) bg_cell_vkbss_key_g1

0xdd64,	// (0x0002c1eb) cell_vkbss_key_3p_pane_ParamLimits

0xdd64,	// (0x0002c1eb) cell_vkbss_key_3p_pane

0xdd7e,	// (0x0002c205) cell_vkbss_key_g1_ParamLimits

0xdd7e,	// (0x0002c205) cell_vkbss_key_g1

0xdd98,	// (0x0002c21f) cell_vkbss_key_t1_ParamLimits

0xdd98,	// (0x0002c21f) cell_vkbss_key_t1

0xddc3,	// (0x0002c24a) cell_ituss_key_pane_ParamLimits

0xddc3,	// (0x0002c24a) cell_ituss_key_pane

0xddd3,	// (0x0002c25a) bg_cell_ituss_key_g1_ParamLimits

0xddd3,	// (0x0002c25a) bg_cell_ituss_key_g1

0xdddf,	// (0x0002c266) cell_ituss_key_pane_g1_ParamLimits

0xdddf,	// (0x0002c266) cell_ituss_key_pane_g1

0xddeb,	// (0x0002c272) cell_ituss_key_pane_g2_ParamLimits

0xddeb,	// (0x0002c272) cell_ituss_key_pane_g2

0x0001,

0xfee2,	// (0x0002e369) cell_ituss_key_pane_g_ParamLimits

0xfee2,	// (0x0002e369) cell_ituss_key_pane_g

0xde04,	// (0x0002c28b) cell_ituss_key_t1_ParamLimits

0xde04,	// (0x0002c28b) cell_ituss_key_t1

0xde32,	// (0x0002c2b9) cell_ituss_key_t2_ParamLimits

0xde32,	// (0x0002c2b9) cell_ituss_key_t2

0xde63,	// (0x0002c2ea) cell_ituss_key_t3_ParamLimits

0xde63,	// (0x0002c2ea) cell_ituss_key_t3

0xde94,	// (0x0002c31b) cell_ituss_key_t4_ParamLimits

0xde94,	// (0x0002c31b) cell_ituss_key_t4

0x0003,

0xfee7,	// (0x0002e36e) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x0002e36e) cell_ituss_key_t

0xdec5,	// (0x0002c34c) cell_vkbss_key_3p_pane_g1

0xdecd,	// (0x0002c354) cell_vkbss_key_3p_pane_g2

0xded5,	// (0x0002c35c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x0002e377) cell_vkbss_key_3p_pane_g

0x4206,	// (0x0002268d) bg_popup_fep_char_preview_window_cp02

0xdedd,	// (0x0002c364) popup_fep_char_pre_window_t1

0xf1fd,	// (0x0002d684) main_ai5_sk_pane

0xd8d2,	// (0x0002bd59) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd8de,	// (0x0002bd65) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd8f2,	// (0x0002bd79) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd901,	// (0x0002bd88) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecd,	// (0x0002e354) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd914,	// (0x0002bd9b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x48bd,	// (0x00022d44) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0002d9e8) main_ai5_sk_pane_g1

0x5c37,	// (0x000240be) popup_query_code_window_g1

0xdce4,	// (0x0002c16b) popup_fep_vkb_icf_pane

0xdcf8,	// (0x0002c17f) popup_fep_vtchi_icf_pane

0x48bd,	// (0x00022d44) bg_icf_pane

0xdefb,	// (0x0002c382) list_vkb_icf_pane

0x48bd,	// (0x00022d44) bg_icf_pane_cp01

0xc7a7,	// (0x0002ac2e) vtchi_icf_list_pane

0xdf1b,	// (0x0002c3a2) list_vkb_icf_pane_t1_ParamLimits

0xdf1b,	// (0x0002c3a2) list_vkb_icf_pane_t1

0xdf35,	// (0x0002c3bc) vtchi_icf_list_pane_t1_ParamLimits

0xdf35,	// (0x0002c3bc) vtchi_icf_list_pane_t1

0xdcce,	// (0x0002c155) popup_fep_ituss_window_ParamLimits

0xdcf8,	// (0x0002c17f) popup_fep_vtchi_icf_pane_ParamLimits

0xdd1e,	// (0x0002c1a5) ituss_keypad_pane_ParamLimits

0xdd2d,	// (0x0002c1b4) ituss_sks_pane

0x48bd,	// (0x00022d44) bg_icf_pane_ParamLimits

0xdeec,	// (0x0002c373) icf_edit_indi_pane_ParamLimits

0xdeec,	// (0x0002c373) icf_edit_indi_pane

0xdefb,	// (0x0002c382) list_vkb_icf_pane_ParamLimits

0x48bd,	// (0x00022d44) bg_icf_pane_cp01_ParamLimits

0xdf07,	// (0x0002c38e) icf_edit_indi_pane_cp01_ParamLimits

0xdf07,	// (0x0002c38e) icf_edit_indi_pane_cp01

0xdf13,	// (0x0002c39a) vtchi_query_pane

0x787d,	// (0x00025d04) icf_edit_indi_pane_g1_ParamLimits

0x787d,	// (0x00025d04) icf_edit_indi_pane_g1

0xdf5a,	// (0x0002c3e1) icf_edit_indi_pane_g2_ParamLimits

0xdf5a,	// (0x0002c3e1) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x0002e37e) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x0002e37e) icf_edit_indi_pane_g

0xdf66,	// (0x0002c3ed) icf_edit_indi_pane_t1

0xdf74,	// (0x0002c3fb) bg_input_focus_pane_cp042

0x47f6,	// (0x00022c7d) vtchi_button_pane

0xdf7d,	// (0x0002c404) vtchi_query_pane_t1

0xdf8b,	// (0x0002c412) vtchi_query_pane_t2

0xdf99,	// (0x0002c420) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x0002e383) vtchi_query_pane_t

0x4206,	// (0x0002268d) bg_button_pane_cp13

0xdfa7,	// (0x0002c42e) vtchi_button_pane_g1

0xccf2,	// (0x0002b179) ituss_sks_pane_g1

0xdfaf,	// (0x0002c436) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x0002e38a) ituss_sks_pane_g

0xdfb8,	// (0x0002c43f) ituss_sks_pane_t1

0xdfc6,	// (0x0002c44d) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x0002e38f) ituss_sks_pane_t

0x72c3,	// (0x0002574a) indicator_nsta_pane_cp_g1

0x72cc,	// (0x00025753) indicator_nsta_pane_cp_g2

0x72d4,	// (0x0002575b) indicator_nsta_pane_cp_g3

0x72dc,	// (0x00025763) indicator_nsta_pane_cp_g4

0x72e4,	// (0x0002576b) indicator_nsta_pane_cp_g5

0x72ec,	// (0x00025773) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0002df39) indicator_nsta_pane_cp_g

0xf022,	// (0x0002d4a9) cell_graphic2_pane_t2_ParamLimits

0xf022,	// (0x0002d4a9) cell_graphic2_pane_t2

0x0001,

0xfdc4,	// (0x0002e24b) cell_graphic2_pane_t_ParamLimits

0xfdc4,	// (0x0002e24b) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

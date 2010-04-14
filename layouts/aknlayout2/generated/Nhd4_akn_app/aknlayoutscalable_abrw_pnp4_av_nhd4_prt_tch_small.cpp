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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002a6ee };

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
0x76f1,	// (0x00031ddf) Screen

0x7705,	// (0x00031df3) application_window_ParamLimits

0x7705,	// (0x00031df3) application_window

0x771f,	// (0x00031e0d) screen_g1

0x49c5,	// (0x0002f0b3) area_bottom_pane_ParamLimits

0x49c5,	// (0x0002f0b3) area_bottom_pane

0x4a85,	// (0x0002f173) area_top_pane_ParamLimits

0x4a85,	// (0x0002f173) area_top_pane

0x4b23,	// (0x0002f211) main_pane_ParamLimits

0x4b23,	// (0x0002f211) main_pane

0x7729,	// (0x00031e17) misc_graphics

0x9908,	// (0x00033ff6) battery_pane_ParamLimits

0x9908,	// (0x00033ff6) battery_pane

0xa5db,	// (0x00034cc9) bg_status_flat_pane_g8

0xa5e3,	// (0x00034cd1) bg_status_flat_pane_g9

0x99ca,	// (0x000340b8) context_pane_ParamLimits

0x99ca,	// (0x000340b8) context_pane

0x9ae0,	// (0x000341ce) navi_pane_ParamLimits

0x9ae0,	// (0x000341ce) navi_pane

0x9b64,	// (0x00034252) signal_pane_ParamLimits

0x9b64,	// (0x00034252) signal_pane

0x0008,

0xf879,	// (0x00039f67) bg_status_flat_pane_g

0x9bd1,	// (0x000342bf) status_pane_g1_ParamLimits

0x9bd1,	// (0x000342bf) status_pane_g1

0x9bdd,	// (0x000342cb) status_pane_g2_ParamLimits

0x9bdd,	// (0x000342cb) status_pane_g2

0x9be9,	// (0x000342d7) status_pane_g3_ParamLimits

0x9be9,	// (0x000342d7) status_pane_g3

0x0004,

0xf7a0,	// (0x00039e8e) status_pane_g_ParamLimits

0xf7a0,	// (0x00039e8e) status_pane_g

0x9c1d,	// (0x0003430b) title_pane_ParamLimits

0x9c1d,	// (0x0003430b) title_pane

0x9c5a,	// (0x00034348) uni_indicator_pane_ParamLimits

0x9c5a,	// (0x00034348) uni_indicator_pane

0x9830,	// (0x00033f1e) bg_list_pane_ParamLimits

0x9830,	// (0x00033f1e) bg_list_pane

0x5b50,	// (0x0003023e) find_pane

0x9850,	// (0x00033f3e) listscroll_app_pane_ParamLimits

0x9850,	// (0x00033f3e) listscroll_app_pane

0x985c,	// (0x00033f4a) listscroll_form_pane

0x48fb,	// (0x0002efe9) listscroll_gen_pane_ParamLimits

0x48fb,	// (0x0002efe9) listscroll_gen_pane

0x5b58,	// (0x00030246) listscroll_set_pane

0x8ab6,	// (0x000331a4) main_idle_act_pane

0x953c,	// (0x00033c2a) main_idle_trad_pane

0x953c,	// (0x00033c2a) main_list_empty_pane

0x9876,	// (0x00033f64) main_midp_pane

0x9882,	// (0x00033f70) main_pane_g1_ParamLimits

0x9882,	// (0x00033f70) main_pane_g1

0x5b6e,	// (0x0003025c) popup_ai_message_window_ParamLimits

0x5b6e,	// (0x0003025c) popup_ai_message_window

0x5c1a,	// (0x00030308) popup_fep_china_uni_window_ParamLimits

0x5c1a,	// (0x00030308) popup_fep_china_uni_window

0x5c74,	// (0x00030362) popup_fep_japan_candidate_window_ParamLimits

0x5c74,	// (0x00030362) popup_fep_japan_candidate_window

0x5c92,	// (0x00030380) popup_fep_japan_predictive_window_ParamLimits

0x5c92,	// (0x00030380) popup_fep_japan_predictive_window

0x5cc2,	// (0x000303b0) popup_find_window

0x5ccf,	// (0x000303bd) popup_grid_graphic_window_ParamLimits

0x5ccf,	// (0x000303bd) popup_grid_graphic_window

0x5cf7,	// (0x000303e5) popup_large_graphic_colour_window

0x5d1d,	// (0x0003040b) popup_menu_window_ParamLimits

0x5d1d,	// (0x0003040b) popup_menu_window

0x5ed7,	// (0x000305c5) popup_note_image_window

0x5ec3,	// (0x000305b1) popup_note_wait_window_ParamLimits

0x5ec3,	// (0x000305b1) popup_note_wait_window

0x5ec3,	// (0x000305b1) popup_note_window_ParamLimits

0x5ec3,	// (0x000305b1) popup_note_window

0x5f2d,	// (0x0003061b) popup_query_code_window_ParamLimits

0x5f2d,	// (0x0003061b) popup_query_code_window

0x5f41,	// (0x0003062f) popup_query_data_code_window_ParamLimits

0x5f41,	// (0x0003062f) popup_query_data_code_window

0x5f5c,	// (0x0003064a) popup_query_data_window_ParamLimits

0x5f5c,	// (0x0003064a) popup_query_data_window

0x5f76,	// (0x00030664) popup_query_sat_info_window_ParamLimits

0x5f76,	// (0x00030664) popup_query_sat_info_window

0x5faf,	// (0x0003069d) popup_snote_single_graphic_window_ParamLimits

0x5faf,	// (0x0003069d) popup_snote_single_graphic_window

0x5faf,	// (0x0003069d) popup_snote_single_text_window_ParamLimits

0x5faf,	// (0x0003069d) popup_snote_single_text_window

0x5fc4,	// (0x000306b2) popup_sub_window_general

0x60f2,	// (0x000307e0) popup_window_general_ParamLimits

0x60f2,	// (0x000307e0) popup_window_general

0x9890,	// (0x00033f7e) power_save_pane

0x59ee,	// (0x000300dc) control_pane_g1_ParamLimits

0x59ee,	// (0x000300dc) control_pane_g1

0x5a15,	// (0x00030103) control_pane_g2_ParamLimits

0x5a15,	// (0x00030103) control_pane_g2

0x97f3,	// (0x00033ee1) control_pane_g3_ParamLimits

0x97f3,	// (0x00033ee1) control_pane_g3

0x0007,

0xf788,	// (0x00039e76) control_pane_g_ParamLimits

0xf788,	// (0x00039e76) control_pane_g

0x5a5d,	// (0x0003014b) control_pane_t1_ParamLimits

0x5a5d,	// (0x0003014b) control_pane_t1

0x5aa9,	// (0x00030197) control_pane_t2_ParamLimits

0x5aa9,	// (0x00030197) control_pane_t2

0x0002,

0xf799,	// (0x00039e87) control_pane_t_ParamLimits

0xf799,	// (0x00039e87) control_pane_t

0x9718,	// (0x00033e06) navi_navi_volume_pane_cp1

0x9720,	// (0x00033e0e) status_small_icon_pane

0x9728,	// (0x00033e16) status_small_pane_g1_ParamLimits

0x9728,	// (0x00033e16) status_small_pane_g1

0x975c,	// (0x00033e4a) status_small_pane_g2_ParamLimits

0x975c,	// (0x00033e4a) status_small_pane_g2

0x9768,	// (0x00033e56) status_small_pane_g3_ParamLimits

0x9768,	// (0x00033e56) status_small_pane_g3

0x9774,	// (0x00033e62) status_small_pane_g4_ParamLimits

0x9774,	// (0x00033e62) status_small_pane_g4

0x9780,	// (0x00033e6e) status_small_pane_g5_ParamLimits

0x9780,	// (0x00033e6e) status_small_pane_g5

0x978e,	// (0x00033e7c) status_small_pane_g6_ParamLimits

0x978e,	// (0x00033e7c) status_small_pane_g6

0x0007,

0xf777,	// (0x00039e65) status_small_pane_g_ParamLimits

0xf777,	// (0x00039e65) status_small_pane_g

0x97bd,	// (0x00033eab) status_small_pane_t1

0x97df,	// (0x00033ecd) status_small_wait_pane_ParamLimits

0x97df,	// (0x00033ecd) status_small_wait_pane

0x8fa6,	// (0x00033694) aid_levels_signal_ParamLimits

0x8fa6,	// (0x00033694) aid_levels_signal

0x8fb8,	// (0x000336a6) signal_pane_g1_ParamLimits

0x8fb8,	// (0x000336a6) signal_pane_g1

0x8fcd,	// (0x000336bb) signal_pane_g2_ParamLimits

0x8fcd,	// (0x000336bb) signal_pane_g2

0x0003,

0xf708,	// (0x00039df6) signal_pane_g_ParamLimits

0xf708,	// (0x00039df6) signal_pane_g

0x9007,	// (0x000336f5) context_pane_g1

0x7733,	// (0x00031e21) title_pane_g1

0x7769,	// (0x00031e57) title_pane_t1

0x77d1,	// (0x00031ebf) title_pane_t2

0x77f7,	// (0x00031ee5) title_pane_t3

0x0002,

0xf557,	// (0x00039c45) title_pane_t

0x9c72,	// (0x00034360) aid_levels_battery_ParamLimits

0x9c72,	// (0x00034360) aid_levels_battery

0x9c86,	// (0x00034374) battery_pane_g1_ParamLimits

0x9c86,	// (0x00034374) battery_pane_g1

0x9c9c,	// (0x0003438a) battery_pane_g2_ParamLimits

0x9c9c,	// (0x0003438a) battery_pane_g2

0x0001,

0xf7ab,	// (0x00039e99) battery_pane_g_ParamLimits

0xf7ab,	// (0x00039e99) battery_pane_g

0xaf0f,	// (0x000355fd) uni_indicator_pane_g1

0xaf25,	// (0x00035613) uni_indicator_pane_g2

0xaf3b,	// (0x00035629) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a00f) uni_indicator_pane_g

0x93ba,	// (0x00033aa8) navi_icon_pane_ParamLimits

0x93ba,	// (0x00033aa8) navi_icon_pane

0x92e0,	// (0x000339ce) navi_midp_pane

0x93d6,	// (0x00033ac4) navi_navi_pane

0x93e0,	// (0x00033ace) navi_text_pane_ParamLimits

0x93e0,	// (0x00033ace) navi_text_pane

0x771f,	// (0x00031e0d) status_small_wait_pane_g1

0x848b,	// (0x00032b79) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a00a) status_small_wait_pane_g

0xac36,	// (0x00035324) navi_navi_icon_text_pane

0xac3e,	// (0x0003532c) navi_navi_pane_g1_ParamLimits

0xac3e,	// (0x0003532c) navi_navi_pane_g1

0xac50,	// (0x0003533e) navi_navi_pane_g2_ParamLimits

0xac50,	// (0x0003533e) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00039fd8) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00039fd8) navi_navi_pane_g

0xac62,	// (0x00035350) navi_navi_tabs_pane

0xac6b,	// (0x00035359) navi_navi_text_pane

0xac36,	// (0x00035324) navi_navi_volume_pane

0xac12,	// (0x00035300) navi_text_pane_t1

0xac06,	// (0x000352f4) navi_icon_pane_g1

0xab59,	// (0x00035247) navi_navi_text_pane_t1

0x64a3,	// (0x00030b91) navi_navi_volume_pane_g1

0x64ab,	// (0x00030b99) volume_small_pane

0xaabf,	// (0x000351ad) navi_navi_icon_text_pane_g1

0xaac7,	// (0x000351b5) navi_navi_icon_text_pane_t1

0x93d6,	// (0x00033ac4) navi_tabs_2_long_pane

0x93d6,	// (0x00033ac4) navi_tabs_2_pane

0x93d6,	// (0x00033ac4) navi_tabs_3_long_pane

0x93d6,	// (0x00033ac4) navi_tabs_3_pane

0x93d6,	// (0x00033ac4) navi_tabs_4_pane

0x6483,	// (0x00030b71) tabs_2_active_pane_ParamLimits

0x6483,	// (0x00030b71) tabs_2_active_pane

0x6493,	// (0x00030b81) tabs_2_passive_pane_ParamLimits

0x6493,	// (0x00030b81) tabs_2_passive_pane

0x6451,	// (0x00030b3f) tabs_3_active_pane_ParamLimits

0x6451,	// (0x00030b3f) tabs_3_active_pane

0x6461,	// (0x00030b4f) tabs_3_passive_pane_ParamLimits

0x6461,	// (0x00030b4f) tabs_3_passive_pane

0x6472,	// (0x00030b60) tabs_3_passive_pane_cp_ParamLimits

0x6472,	// (0x00030b60) tabs_3_passive_pane_cp

0x640d,	// (0x00030afb) tabs_4_active_pane_ParamLimits

0x640d,	// (0x00030afb) tabs_4_active_pane

0x641e,	// (0x00030b0c) tabs_4_passive_pane_ParamLimits

0x641e,	// (0x00030b0c) tabs_4_passive_pane

0x642f,	// (0x00030b1d) tabs_4_passive_pane_cp_ParamLimits

0x642f,	// (0x00030b1d) tabs_4_passive_pane_cp

0x6440,	// (0x00030b2e) tabs_4_passive_pane_cp2_ParamLimits

0x6440,	// (0x00030b2e) tabs_4_passive_pane_cp2

0x63e9,	// (0x00030ad7) tabs_2_long_active_pane_ParamLimits

0x63e9,	// (0x00030ad7) tabs_2_long_active_pane

0x63fb,	// (0x00030ae9) tabs_2_long_passive_pane_ParamLimits

0x63fb,	// (0x00030ae9) tabs_2_long_passive_pane

0x63b0,	// (0x00030a9e) tabs_3_long_active_pane_ParamLimits

0x63b0,	// (0x00030a9e) tabs_3_long_active_pane

0x63c3,	// (0x00030ab1) tabs_3_long_passive_pane_ParamLimits

0x63c3,	// (0x00030ab1) tabs_3_long_passive_pane

0x63d6,	// (0x00030ac4) tabs_3_long_passive_pane_cp_ParamLimits

0x63d6,	// (0x00030ac4) tabs_3_long_passive_pane_cp

0x6356,	// (0x00030a44) volume_small_pane_g1

0x635f,	// (0x00030a4d) volume_small_pane_g2

0x6368,	// (0x00030a56) volume_small_pane_g3

0x6371,	// (0x00030a5f) volume_small_pane_g4

0x637a,	// (0x00030a68) volume_small_pane_g5

0x6383,	// (0x00030a71) volume_small_pane_g6

0x638c,	// (0x00030a7a) volume_small_pane_g7

0x6395,	// (0x00030a83) volume_small_pane_g8

0x639e,	// (0x00030a8c) volume_small_pane_g9

0x63a7,	// (0x00030a95) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00039fa4) volume_small_pane_g

0x807a,	// (0x00032768) bg_active_tab_pane_cp2_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp2

0x8088,	// (0x00032776) tabs_3_active_pane_g1

0x8090,	// (0x0003277e) tabs_3_active_pane_t1

0x807a,	// (0x00032768) bg_passive_tab_pane_cp2_ParamLimits

0x807a,	// (0x00032768) bg_passive_tab_pane_cp2

0x8088,	// (0x00032776) tabs_3_passive_pane_g1

0x8090,	// (0x0003277e) tabs_3_passive_pane_t1

0x807a,	// (0x00032768) bg_active_tab_pane_cp3_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp3

0x80a2,	// (0x00032790) tabs_4_active_pane_g1

0x80aa,	// (0x00032798) tabs_4_active_pane_t1

0x807a,	// (0x00032768) bg_passive_tab_pane_cp3_ParamLimits

0x807a,	// (0x00032768) bg_passive_tab_pane_cp3

0x80a2,	// (0x00032790) tabs_4_1_passive_pane_g1

0x80aa,	// (0x00032798) tabs_4_1_passive_pane_t1

0x9876,	// (0x00033f64) list_highlight_pane_cp2

0xb17f,	// (0x0003586d) list_set_pane_ParamLimits

0xb17f,	// (0x0003586d) list_set_pane

0xb221,	// (0x0003590f) main_pane_set_t1_ParamLimits

0xb221,	// (0x0003590f) main_pane_set_t1

0xb241,	// (0x0003592f) main_pane_set_t2_ParamLimits

0xb241,	// (0x0003592f) main_pane_set_t2

0xb255,	// (0x00035943) main_pane_set_t3_ParamLimits

0xb255,	// (0x00035943) main_pane_set_t3

0xb267,	// (0x00035955) main_pane_set_t4_ParamLimits

0xb267,	// (0x00035955) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a074) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a074) main_pane_set_t

0xb279,	// (0x00035967) setting_code_pane

0xb283,	// (0x00035971) setting_slider_graphic_pane

0xb283,	// (0x00035971) setting_slider_pane

0xb283,	// (0x00035971) setting_text_pane

0xb283,	// (0x00035971) setting_volume_pane

0x4d64,	// (0x0002f452) volume_set_pane

0x807a,	// (0x00032768) bg_set_opt_pane_cp

0x4d6c,	// (0x0002f45a) setting_slider_pane_t1

0x4d85,	// (0x0002f473) setting_slider_pane_t2

0x4d9f,	// (0x0002f48d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00039c4c) setting_slider_pane_t

0x4db7,	// (0x0002f4a5) slider_set_pane

0x7729,	// (0x00031e17) bg_set_opt_pane_cp2

0x80bc,	// (0x000327aa) setting_slider_graphic_pane_g1

0x4dcd,	// (0x0002f4bb) setting_slider_graphic_pane_t1

0x4ddd,	// (0x0002f4cb) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00039c53) setting_slider_graphic_pane_t

0x4ded,	// (0x0002f4db) slider_set_pane_cp

0x7729,	// (0x00031e17) input_focus_pane_cp1

0xb13e,	// (0x0003582c) list_set_text_pane

0x771f,	// (0x00031e0d) setting_text_pane_g1

0x7729,	// (0x00031e17) input_focus_pane_cp2

0x771f,	// (0x00031e0d) setting_code_pane_g1

0x80c5,	// (0x000327b3) setting_code_pane_t1

0x4df5,	// (0x0002f4e3) set_text_pane_t1_ParamLimits

0x4df5,	// (0x0002f4e3) set_text_pane_t1

0x892f,	// (0x0003301d) set_opt_bg_pane_g1

0x8937,	// (0x00033025) set_opt_bg_pane_g2

0xb11e,	// (0x0003580c) set_opt_bg_pane_g3

0x8947,	// (0x00033035) set_opt_bg_pane_g4

0x894f,	// (0x0003303d) set_opt_bg_pane_g5

0x8957,	// (0x00033045) set_opt_bg_pane_g6

0xb126,	// (0x00035814) set_opt_bg_pane_g7

0xb12e,	// (0x0003581c) set_opt_bg_pane_g8

0xb136,	// (0x00035824) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a061) set_opt_bg_pane_g

0xb111,	// (0x000357ff) slider_set_pane_g1

0x6518,	// (0x00030c06) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a052) slider_set_pane_g

0x64b4,	// (0x00030ba2) volume_set_pane_g1

0x64bc,	// (0x00030baa) volume_set_pane_g2

0x64c4,	// (0x00030bb2) volume_set_pane_g3

0x64cc,	// (0x00030bba) volume_set_pane_g4

0x64d4,	// (0x00030bc2) volume_set_pane_g5

0x64dc,	// (0x00030bca) volume_set_pane_g6

0x64e4,	// (0x00030bd2) volume_set_pane_g7

0x64ec,	// (0x00030bda) volume_set_pane_g8

0x64f4,	// (0x00030be2) volume_set_pane_g9

0x64fc,	// (0x00030bea) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a02a) volume_set_pane_g

0x80d3,	// (0x000327c1) indicator_pane_ParamLimits

0x80d3,	// (0x000327c1) indicator_pane

0x80df,	// (0x000327cd) main_idle_pane_g2_ParamLimits

0x80df,	// (0x000327cd) main_idle_pane_g2

0x8107,	// (0x000327f5) main_pane_idle_g1_ParamLimits

0x8107,	// (0x000327f5) main_pane_idle_g1

0x8114,	// (0x00032802) popup_clock_digital_analogue_window_ParamLimits

0x8114,	// (0x00032802) popup_clock_digital_analogue_window

0x812b,	// (0x00032819) soft_indicator_pane_ParamLimits

0x812b,	// (0x00032819) soft_indicator_pane

0x8137,	// (0x00032825) wallpaper_pane_ParamLimits

0x8137,	// (0x00032825) wallpaper_pane

0x771f,	// (0x00031e0d) wallpaper_pane_g1

0x814b,	// (0x00032839) indicator_pane_g1_ParamLimits

0x814b,	// (0x00032839) indicator_pane_g1

0xb4da,	// (0x00035bc8) navi_navi_icon_text_pane_srt_g1

0x8166,	// (0x00032854) soft_indicator_pane_t1

0x8180,	// (0x0003286e) aid_ps_area_pane

0x8191,	// (0x0003287f) aid_ps_clock_pane

0x819f,	// (0x0003288d) aid_ps_indicator_pane

0x81ab,	// (0x00032899) indicator_ps_pane_ParamLimits

0x81ab,	// (0x00032899) indicator_ps_pane

0x81ba,	// (0x000328a8) power_save_pane_g1_ParamLimits

0x81ba,	// (0x000328a8) power_save_pane_g1

0x81c6,	// (0x000328b4) power_save_pane_g2_ParamLimits

0x81c6,	// (0x000328b4) power_save_pane_g2

0x4979,	// (0x0002f067) aid_navinavi_width_pane

0x8180,	// (0x0003286e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00039c58) power_save_pane_g_ParamLimits

0xf56a,	// (0x00039c58) power_save_pane_g

0x81d4,	// (0x000328c2) power_save_pane_t1_ParamLimits

0x81d4,	// (0x000328c2) power_save_pane_t1

0x8191,	// (0x0003287f) aid_ps_clock_pane_ParamLimits

0x819f,	// (0x0003288d) aid_ps_indicator_pane_ParamLimits

0x81e6,	// (0x000328d4) power_save_pane_t4_ParamLimits

0x81e6,	// (0x000328d4) power_save_pane_t4

0x0001,

0xf56f,	// (0x00039c5d) power_save_pane_t_ParamLimits

0xf56f,	// (0x00039c5d) power_save_pane_t

0x8210,	// (0x000328fe) power_save_t3_ParamLimits

0x8210,	// (0x000328fe) power_save_t3

0x81fb,	// (0x000328e9) power_save_t2_ParamLimits

0x81fb,	// (0x000328e9) power_save_t2

0x8225,	// (0x00032913) indicator_ps_pane_g1

0x822e,	// (0x0003291c) ai_gene_pane_ParamLimits

0x822e,	// (0x0003291c) ai_gene_pane

0x823a,	// (0x00032928) ai_links_pane_ParamLimits

0x823a,	// (0x00032928) ai_links_pane

0x8246,	// (0x00032934) indicator_pane_cp1_ParamLimits

0x8246,	// (0x00032934) indicator_pane_cp1

0x8252,	// (0x00032940) main_pane_idle_g1_cp_ParamLimits

0x8252,	// (0x00032940) main_pane_idle_g1_cp

0x825e,	// (0x0003294c) popup_ai_links_title_window

0x8267,	// (0x00032955) soft_indicator_pane_cp1_ParamLimits

0x8267,	// (0x00032955) soft_indicator_pane_cp1

0xaefd,	// (0x000355eb) ai_links_pane_g1

0xaf06,	// (0x000355f4) grid_ai_links_pane

0xaee0,	// (0x000355ce) ai_gene_pane_1

0xaeeb,	// (0x000355d9) ai_gene_pane_2

0xaef4,	// (0x000355e2) list_highlight_pane_cp4

0xaec4,	// (0x000355b2) cell_ai_link_pane_ParamLimits

0xaec4,	// (0x000355b2) cell_ai_link_pane

0xaebc,	// (0x000355aa) cell_ai_link_pane_g1

0x848b,	// (0x00032b79) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a005) cell_ai_link_pane_g

0x7729,	// (0x00031e17) grid_highlight_cp2

0x7729,	// (0x00031e17) bg_popup_sub_pane_cp1

0x8281,	// (0x0003296f) popup_ai_links_title_window_t1

0xae0c,	// (0x000354fa) ai_gene_pane_1_g1_ParamLimits

0xae0c,	// (0x000354fa) ai_gene_pane_1_g1

0xae18,	// (0x00035506) ai_gene_pane_1_g2_ParamLimits

0xae18,	// (0x00035506) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00039ffb) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00039ffb) ai_gene_pane_1_g

0xae25,	// (0x00035513) ai_gene_pane_1_t1_ParamLimits

0xae25,	// (0x00035513) ai_gene_pane_1_t1

0xae59,	// (0x00035547) grid_ai_soft_ind_pane

0xadf7,	// (0x000354e5) ai_gene_pane_2_t1_ParamLimits

0xadf7,	// (0x000354e5) ai_gene_pane_2_t1

0x8290,	// (0x0003297e) main_pane_empty_t1_ParamLimits

0x8290,	// (0x0003297e) main_pane_empty_t1

0x82a8,	// (0x00032996) main_pane_empty_t2_ParamLimits

0x82a8,	// (0x00032996) main_pane_empty_t2

0x82bd,	// (0x000329ab) main_pane_empty_t3_ParamLimits

0x82bd,	// (0x000329ab) main_pane_empty_t3

0x82cf,	// (0x000329bd) main_pane_empty_t4_ParamLimits

0x82cf,	// (0x000329bd) main_pane_empty_t4

0x82e1,	// (0x000329cf) main_pane_empty_t5_ParamLimits

0x82e1,	// (0x000329cf) main_pane_empty_t5

0x0004,

0xf574,	// (0x00039c62) main_pane_empty_t_ParamLimits

0xf574,	// (0x00039c62) main_pane_empty_t

0x8980,	// (0x0003306e) bg_popup_window_pane_ParamLimits

0x8980,	// (0x0003306e) bg_popup_window_pane

0xab67,	// (0x00035255) find_popup_pane_cp2_ParamLimits

0xab67,	// (0x00035255) find_popup_pane_cp2

0xab73,	// (0x00035261) heading_pane_ParamLimits

0xab73,	// (0x00035261) heading_pane

0x7729,	// (0x00031e17) bg_popup_sub_pane

0xaae1,	// (0x000351cf) bg_popup_window_pane_g1_ParamLimits

0xaae1,	// (0x000351cf) bg_popup_window_pane_g1

0xaaed,	// (0x000351db) bg_popup_window_pane_g2_ParamLimits

0xaaed,	// (0x000351db) bg_popup_window_pane_g2

0xaaf9,	// (0x000351e7) bg_popup_window_pane_g3_ParamLimits

0xaaf9,	// (0x000351e7) bg_popup_window_pane_g3

0xab05,	// (0x000351f3) bg_popup_window_pane_g4_ParamLimits

0xab05,	// (0x000351f3) bg_popup_window_pane_g4

0xab11,	// (0x000351ff) bg_popup_window_pane_g5_ParamLimits

0xab11,	// (0x000351ff) bg_popup_window_pane_g5

0xab1d,	// (0x0003520b) bg_popup_window_pane_g6_ParamLimits

0xab1d,	// (0x0003520b) bg_popup_window_pane_g6

0xab29,	// (0x00035217) bg_popup_window_pane_g7_ParamLimits

0xab29,	// (0x00035217) bg_popup_window_pane_g7

0xab35,	// (0x00035223) bg_popup_window_pane_g8_ParamLimits

0xab35,	// (0x00035223) bg_popup_window_pane_g8

0xab41,	// (0x0003522f) bg_popup_window_pane_g9_ParamLimits

0xab41,	// (0x0003522f) bg_popup_window_pane_g9

0xab4d,	// (0x0003523b) bg_popup_window_pane_g10_ParamLimits

0xab4d,	// (0x0003523b) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00039fc3) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00039fc3) bg_popup_window_pane_g

0xaa76,	// (0x00035164) bg_popup_heading_pane_ParamLimits

0xaa76,	// (0x00035164) bg_popup_heading_pane

0x65a0,	// (0x00030c8e) tabs_4_passive_pane_cp_srt_ParamLimits

0x65a0,	// (0x00030c8e) tabs_4_passive_pane_cp_srt

0x65b2,	// (0x00030ca0) tabs_4_passive_pane_srt_ParamLimits

0xaa8a,	// (0x00035178) heading_pane_g2

0x65b2,	// (0x00030ca0) tabs_4_passive_pane_srt

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp3_srt

0xaa92,	// (0x00035180) heading_pane_t1_ParamLimits

0xaa92,	// (0x00035180) heading_pane_t1

0xaaa9,	// (0x00035197) heading_pane_t2_ParamLimits

0xaaa9,	// (0x00035197) heading_pane_t2

0x0001,

0xf8d0,	// (0x00039fbe) heading_pane_t_ParamLimits

0xf8d0,	// (0x00039fbe) heading_pane_t

0xa5a3,	// (0x00034c91) bg_popup_heading_pane_g1

0xa652,	// (0x00034d40) bg_popup_heading_pane_g2

0xa65c,	// (0x00034d4a) bg_popup_heading_pane_g3

0xa666,	// (0x00034d54) bg_popup_heading_pane_g4

0xa670,	// (0x00034d5e) bg_popup_heading_pane_g5

0xa67a,	// (0x00034d68) bg_popup_heading_pane_g6

0xa682,	// (0x00034d70) bg_popup_heading_pane_g7

0xa68a,	// (0x00034d78) bg_popup_heading_pane_g8

0xa694,	// (0x00034d82) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00039f7a) bg_popup_heading_pane_g

0x9d74,	// (0x00034462) bg_popup_sub_pane_g1

0x9d84,	// (0x00034472) bg_popup_sub_pane_g2

0x9d7c,	// (0x0003446a) bg_popup_sub_pane_g3

0x9d94,	// (0x00034482) bg_popup_sub_pane_g4

0x9d8c,	// (0x0003447a) bg_popup_sub_pane_g5

0x9d9c,	// (0x0003448a) bg_popup_sub_pane_g6

0x9da4,	// (0x00034492) bg_popup_sub_pane_g7

0x9db4,	// (0x000344a2) bg_popup_sub_pane_g8

0x9dac,	// (0x0003449a) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00039f54) bg_popup_sub_pane_g

0x82f5,	// (0x000329e3) bg_popup_window_pane_cp5_ParamLimits

0x82f5,	// (0x000329e3) bg_popup_window_pane_cp5

0x8311,	// (0x000329ff) popup_note_window_g1_ParamLimits

0x8311,	// (0x000329ff) popup_note_window_g1

0x831d,	// (0x00032a0b) popup_note_window_t1_ParamLimits

0x831d,	// (0x00032a0b) popup_note_window_t1

0x832f,	// (0x00032a1d) popup_note_window_t2_ParamLimits

0x832f,	// (0x00032a1d) popup_note_window_t2

0x8341,	// (0x00032a2f) popup_note_window_t3_ParamLimits

0x8341,	// (0x00032a2f) popup_note_window_t3

0x8353,	// (0x00032a41) popup_note_window_t4_ParamLimits

0x8353,	// (0x00032a41) popup_note_window_t4

0x837b,	// (0x00032a69) popup_note_window_t5_ParamLimits

0x837b,	// (0x00032a69) popup_note_window_t5

0x0004,

0xf57f,	// (0x00039c6d) popup_note_window_t_ParamLimits

0xf57f,	// (0x00039c6d) popup_note_window_t

0x839f,	// (0x00032a8d) bg_popup_window_pane_cp6_ParamLimits

0x839f,	// (0x00032a8d) bg_popup_window_pane_cp6

0xa517,	// (0x00034c05) popup_note_image_window_g1_ParamLimits

0xa517,	// (0x00034c05) popup_note_image_window_g1

0xa523,	// (0x00034c11) popup_note_image_window_g2_ParamLimits

0xa523,	// (0x00034c11) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00039f48) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00039f48) popup_note_image_window_g

0xa53c,	// (0x00034c2a) popup_note_image_window_t1_ParamLimits

0xa53c,	// (0x00034c2a) popup_note_image_window_t1

0xa555,	// (0x00034c43) popup_note_image_window_t2_ParamLimits

0xa555,	// (0x00034c43) popup_note_image_window_t2

0xa56e,	// (0x00034c5c) popup_note_image_window_t3_ParamLimits

0xa56e,	// (0x00034c5c) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00039f4d) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00039f4d) popup_note_image_window_t

0xa3d8,	// (0x00034ac6) bg_popup_window_pane_cp7_ParamLimits

0xa3d8,	// (0x00034ac6) bg_popup_window_pane_cp7

0xa408,	// (0x00034af6) popup_note_wait_window_g1_ParamLimits

0xa408,	// (0x00034af6) popup_note_wait_window_g1

0xa414,	// (0x00034b02) popup_note_wait_window_g2_ParamLimits

0xa414,	// (0x00034b02) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00039f36) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00039f36) popup_note_wait_window_g

0xa42c,	// (0x00034b1a) popup_note_wait_window_t1_ParamLimits

0xa42c,	// (0x00034b1a) popup_note_wait_window_t1

0xa453,	// (0x00034b41) popup_note_wait_window_t2_ParamLimits

0xa453,	// (0x00034b41) popup_note_wait_window_t2

0xa470,	// (0x00034b5e) popup_note_wait_window_t3_ParamLimits

0xa470,	// (0x00034b5e) popup_note_wait_window_t3

0xa483,	// (0x00034b71) popup_note_wait_window_t4_ParamLimits

0xa483,	// (0x00034b71) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00039f3d) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00039f3d) popup_note_wait_window_t

0xa4a8,	// (0x00034b96) wait_bar_pane_ParamLimits

0xa4a8,	// (0x00034b96) wait_bar_pane

0x7729,	// (0x00031e17) wait_anim_pane

0x7729,	// (0x00031e17) wait_border_pane

0x771f,	// (0x00031e0d) wait_anim_pane_g1

0x771f,	// (0x00031e0d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00039df1) wait_anim_pane_g

0xa37c,	// (0x00034a6a) wait_border_pane_g1

0xa387,	// (0x00034a75) wait_border_pane_g2

0xa390,	// (0x00034a7e) wait_border_pane_g3

0x0002,

0xf841,	// (0x00039f2f) wait_border_pane_g

0xa1ec,	// (0x000348da) bg_popup_window_pane_cp16_ParamLimits

0xa1ec,	// (0x000348da) bg_popup_window_pane_cp16

0xa2ec,	// (0x000349da) indicator_popup_pane_cp4_ParamLimits

0xa2ec,	// (0x000349da) indicator_popup_pane_cp4

0xa300,	// (0x000349ee) popup_query_data_window_t1_ParamLimits

0xa300,	// (0x000349ee) popup_query_data_window_t1

0xa312,	// (0x00034a00) popup_query_data_window_t2_ParamLimits

0xa312,	// (0x00034a00) popup_query_data_window_t2

0xa32b,	// (0x00034a19) popup_query_data_window_t3_ParamLimits

0xa32b,	// (0x00034a19) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00039f28) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00039f28) popup_query_data_window_t

0xa345,	// (0x00034a33) query_popup_data_pane_ParamLimits

0xa345,	// (0x00034a33) query_popup_data_pane

0xa359,	// (0x00034a47) query_popup_data_pane_cp1_ParamLimits

0xa359,	// (0x00034a47) query_popup_data_pane_cp1

0xa1ec,	// (0x000348da) bg_popup_window_pane_cp10_ParamLimits

0xa1ec,	// (0x000348da) bg_popup_window_pane_cp10

0xa21e,	// (0x0003490c) indicator_popup_pane_ParamLimits

0xa21e,	// (0x0003490c) indicator_popup_pane

0xa240,	// (0x0003492e) popup_query_code_window_t1_ParamLimits

0xa240,	// (0x0003492e) popup_query_code_window_t1

0xa25a,	// (0x00034948) popup_query_code_window_t2_ParamLimits

0xa25a,	// (0x00034948) popup_query_code_window_t2

0xa2a3,	// (0x00034991) popup_query_code_window_t3_ParamLimits

0xa2a3,	// (0x00034991) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00039f21) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00039f21) popup_query_code_window_t

0xa2d2,	// (0x000349c0) query_popup_pane_ParamLimits

0xa2d2,	// (0x000349c0) query_popup_pane

0x839f,	// (0x00032a8d) bg_popup_window_pane_cp15_ParamLimits

0x839f,	// (0x00032a8d) bg_popup_window_pane_cp15

0x83bd,	// (0x00032aab) indicator_popup_pane_cp1_ParamLimits

0x83bd,	// (0x00032aab) indicator_popup_pane_cp1

0x83d0,	// (0x00032abe) indicator_popup_pane_cp2_ParamLimits

0x83d0,	// (0x00032abe) indicator_popup_pane_cp2

0x83e3,	// (0x00032ad1) popup_query_data_code_window_g1_ParamLimits

0x83e3,	// (0x00032ad1) popup_query_data_code_window_g1

0x83f6,	// (0x00032ae4) popup_query_data_code_window_t1_ParamLimits

0x83f6,	// (0x00032ae4) popup_query_data_code_window_t1

0x8408,	// (0x00032af6) popup_query_data_code_window_t2_ParamLimits

0x8408,	// (0x00032af6) popup_query_data_code_window_t2

0x841a,	// (0x00032b08) popup_query_data_code_window_t3_ParamLimits

0x841a,	// (0x00032b08) popup_query_data_code_window_t3

0x8430,	// (0x00032b1e) popup_query_data_code_window_t4_ParamLimits

0x8430,	// (0x00032b1e) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00039c78) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00039c78) popup_query_data_code_window_t

0x617e,	// (0x0003086c) list_single_midp_graphic_pane_g3

0x8448,	// (0x00032b36) query_popup_data_pane_cp2_ParamLimits

0x845b,	// (0x00032b49) query_popup_pane_cp2_ParamLimits

0x845b,	// (0x00032b49) query_popup_pane_cp2

0x7729,	// (0x00031e17) bg_popup_window_pane_cp11

0xa1e4,	// (0x000348d2) heading_pane_cp5

0x8546,	// (0x00032c34) listscroll_popup_info_pane

0x7729,	// (0x00031e17) input_focus_pane_cp3

0x846e,	// (0x00032b5c) query_popup_pane_t1

0x847c,	// (0x00032b6a) list_popup_info_pane_ParamLimits

0x847c,	// (0x00032b6a) list_popup_info_pane

0x848b,	// (0x00032b79) listscroll_popup_info_pane_g1

0x8493,	// (0x00032b81) scroll_pane_cp7

0x849d,	// (0x00032b8b) popup_info_list_pane_t1_ParamLimits

0x849d,	// (0x00032b8b) popup_info_list_pane_t1

0x84b7,	// (0x00032ba5) popup_info_list_pane_t2_ParamLimits

0x84b7,	// (0x00032ba5) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00039c81) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00039c81) popup_info_list_pane_t

0x7729,	// (0x00031e17) bg_popup_window_pane_cp12

0xb4f4,	// (0x00035be2) find_popup_pane

0x807a,	// (0x00032768) bg_popup_window_pane_cp3

0x84d1,	// (0x00032bbf) heading_pane_cp3

0x84dd,	// (0x00032bcb) listscroll_popup_graphic_pane

0x7729,	// (0x00031e17) bg_popup_window_pane_cp4

0x853c,	// (0x00032c2a) heading_pane_cp4

0x8546,	// (0x00032c34) listscroll_popup_colour_pane

0x854e,	// (0x00032c3c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x854e,	// (0x00032c3c) cell_large_graphic_colour_none_popup_pane

0x8562,	// (0x00032c50) grid_large_graphic_colour_popup_pane_ParamLimits

0x8562,	// (0x00032c50) grid_large_graphic_colour_popup_pane

0x858a,	// (0x00032c78) listscroll_popup_colour_pane_g1_ParamLimits

0x858a,	// (0x00032c78) listscroll_popup_colour_pane_g1

0x85a1,	// (0x00032c8f) listscroll_popup_colour_pane_g2_ParamLimits

0x85a1,	// (0x00032c8f) listscroll_popup_colour_pane_g2

0x85b8,	// (0x00032ca6) listscroll_popup_colour_pane_g3_ParamLimits

0x85b8,	// (0x00032ca6) listscroll_popup_colour_pane_g3

0x85c8,	// (0x00032cb6) listscroll_popup_colour_pane_g4_ParamLimits

0x85c8,	// (0x00032cb6) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00039c86) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00039c86) listscroll_popup_colour_pane_g

0x85d7,	// (0x00032cc5) scroll_pane_cp6_ParamLimits

0x85d7,	// (0x00032cc5) scroll_pane_cp6

0x85e9,	// (0x00032cd7) cell_large_graphic_colour_popup_pane_ParamLimits

0x85e9,	// (0x00032cd7) cell_large_graphic_colour_popup_pane

0x8608,	// (0x00032cf6) cell_large_graphic_colour_none_popup_pane_t1

0x7729,	// (0x00031e17) grid_highlight_pane_cp5

0x8617,	// (0x00032d05) cell_large_graphic_colour_popup_pane_g1

0x861f,	// (0x00032d0d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00039c8f) cell_large_graphic_colour_popup_pane_g

0x8627,	// (0x00032d15) cell_large_graphic_colour_popup_pane_g2_copy1

0x8630,	// (0x00032d1e) grid_highlight_pane_cp4

0x8638,	// (0x00032d26) bg_popup_window_pane_cp8_ParamLimits

0x8638,	// (0x00032d26) bg_popup_window_pane_cp8

0x8653,	// (0x00032d41) popup_snote_single_text_window_g1_ParamLimits

0x8653,	// (0x00032d41) popup_snote_single_text_window_g1

0x8665,	// (0x00032d53) popup_snote_single_text_window_t1_ParamLimits

0x8665,	// (0x00032d53) popup_snote_single_text_window_t1

0x8678,	// (0x00032d66) popup_snote_single_text_window_t2_ParamLimits

0x8678,	// (0x00032d66) popup_snote_single_text_window_t2

0x868b,	// (0x00032d79) popup_snote_single_text_window_t3_ParamLimits

0x868b,	// (0x00032d79) popup_snote_single_text_window_t3

0x86c4,	// (0x00032db2) popup_snote_single_text_window_t4_ParamLimits

0x86c4,	// (0x00032db2) popup_snote_single_text_window_t4

0x86f8,	// (0x00032de6) popup_snote_single_text_window_t5_ParamLimits

0x86f8,	// (0x00032de6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00039c94) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00039c94) popup_snote_single_text_window_t

0x8727,	// (0x00032e15) bg_popup_window_pane_cp9_ParamLimits

0x8727,	// (0x00032e15) bg_popup_window_pane_cp9

0x8653,	// (0x00032d41) popup_snote_single_graphic_window_g1_ParamLimits

0x8653,	// (0x00032d41) popup_snote_single_graphic_window_g1

0x8735,	// (0x00032e23) popup_snote_single_graphic_window_g2_ParamLimits

0x8735,	// (0x00032e23) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00039c9f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00039c9f) popup_snote_single_graphic_window_g

0x8741,	// (0x00032e2f) popup_snote_single_graphic_window_t1_ParamLimits

0x8741,	// (0x00032e2f) popup_snote_single_graphic_window_t1

0x8754,	// (0x00032e42) popup_snote_single_graphic_window_t2_ParamLimits

0x8754,	// (0x00032e42) popup_snote_single_graphic_window_t2

0x8767,	// (0x00032e55) popup_snote_single_graphic_window_t3_ParamLimits

0x8767,	// (0x00032e55) popup_snote_single_graphic_window_t3

0x87a0,	// (0x00032e8e) popup_snote_single_graphic_window_t4_ParamLimits

0x87a0,	// (0x00032e8e) popup_snote_single_graphic_window_t4

0x87d4,	// (0x00032ec2) popup_snote_single_graphic_window_t5_ParamLimits

0x87d4,	// (0x00032ec2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00039ca4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00039ca4) popup_snote_single_graphic_window_t

0xb437,	// (0x00035b25) grid_graphic_popup_pane_ParamLimits

0xb437,	// (0x00035b25) grid_graphic_popup_pane

0xb460,	// (0x00035b4e) listscroll_popup_graphic_pane_g1_ParamLimits

0xb460,	// (0x00035b4e) listscroll_popup_graphic_pane_g1

0xb474,	// (0x00035b62) listscroll_popup_graphic_pane_g2_ParamLimits

0xb474,	// (0x00035b62) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a09e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a09e) listscroll_popup_graphic_pane_g

0xb488,	// (0x00035b76) scroll_pane_cp5

0xb3d7,	// (0x00035ac5) cell_graphic_popup_pane_ParamLimits

0xb3d7,	// (0x00035ac5) cell_graphic_popup_pane

0xb3b8,	// (0x00035aa6) cell_graphic_popup_pane_g1

0xb3c0,	// (0x00035aae) cell_graphic_popup_pane_g2

0x8627,	// (0x00032d15) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a097) cell_graphic_popup_pane_g

0xb3c9,	// (0x00035ab7) cell_graphic_popup_pane_t2

0x8630,	// (0x00032d1e) grid_highlight_pane_cp3

0x8815,	// (0x00032f03) list_gen_pane_ParamLimits

0x8815,	// (0x00032f03) list_gen_pane

0x8847,	// (0x00032f35) scroll_pane

0xb31a,	// (0x00035a08) bg_list_pane_g1_ParamLimits

0xb31a,	// (0x00035a08) bg_list_pane_g1

0xb335,	// (0x00035a23) bg_list_pane_g2_ParamLimits

0xb335,	// (0x00035a23) bg_list_pane_g2

0xb348,	// (0x00035a36) bg_list_pane_g3_ParamLimits

0xb348,	// (0x00035a36) bg_list_pane_g3

0xb35a,	// (0x00035a48) bg_list_pane_g4_ParamLimits

0xb35a,	// (0x00035a48) bg_list_pane_g4

0xb36c,	// (0x00035a5a) bg_list_pane_g5_ParamLimits

0xb36c,	// (0x00035a5a) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a08c) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a08c) bg_list_pane_g

0x7875,	// (0x00031f63) list_double2_graphic_large_graphic_pane_ParamLimits

0x7875,	// (0x00031f63) list_double2_graphic_large_graphic_pane

0x7875,	// (0x00031f63) list_double2_graphic_pane_ParamLimits

0x7875,	// (0x00031f63) list_double2_graphic_pane

0x7875,	// (0x00031f63) list_double2_large_graphic_pane_ParamLimits

0x7875,	// (0x00031f63) list_double2_large_graphic_pane

0x7875,	// (0x00031f63) list_double2_pane_ParamLimits

0x7875,	// (0x00031f63) list_double2_pane

0x7875,	// (0x00031f63) list_double_graphic_heading_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_graphic_heading_pane

0x7875,	// (0x00031f63) list_double_graphic_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_graphic_pane

0x7875,	// (0x00031f63) list_double_heading_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_heading_pane

0x7875,	// (0x00031f63) list_double_large_graphic_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_large_graphic_pane

0x7875,	// (0x00031f63) list_double_number_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_number_pane

0x7875,	// (0x00031f63) list_double_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_pane

0x7875,	// (0x00031f63) list_double_time_pane_ParamLimits

0x7875,	// (0x00031f63) list_double_time_pane

0x7875,	// (0x00031f63) list_setting_number_pane_ParamLimits

0x7875,	// (0x00031f63) list_setting_number_pane

0x7875,	// (0x00031f63) list_setting_pane_ParamLimits

0x7875,	// (0x00031f63) list_setting_pane

0x78d7,	// (0x00031fc5) list_single_2graphic_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_2graphic_pane

0x78d7,	// (0x00031fc5) list_single_graphic_heading_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_graphic_heading_pane

0x78d7,	// (0x00031fc5) list_single_graphic_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_graphic_pane

0x78d7,	// (0x00031fc5) list_single_heading_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_heading_pane

0x7960,	// (0x0003204e) list_single_large_graphic_pane_ParamLimits

0x7960,	// (0x0003204e) list_single_large_graphic_pane

0x78d7,	// (0x00031fc5) list_single_number_heading_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_number_heading_pane

0x78d7,	// (0x00031fc5) list_single_number_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_number_pane

0x78d7,	// (0x00031fc5) list_single_pane_ParamLimits

0x78d7,	// (0x00031fc5) list_single_pane

0x7729,	// (0x00031e17) list_highlight_pane_cp1

0x4e1b,	// (0x0002f509) list_single_pane_g1_ParamLimits

0x4e1b,	// (0x0002f509) list_single_pane_g1

0x4e27,	// (0x0002f515) list_single_pane_g2_ParamLimits

0x4e27,	// (0x0002f515) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00039cb6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00039cb6) list_single_pane_g

0x785f,	// (0x00031f4d) list_single_pane_t1_ParamLimits

0x785f,	// (0x00031f4d) list_single_pane_t1

0x4e1b,	// (0x0002f509) list_single_number_pane_g1_ParamLimits

0x4e1b,	// (0x0002f509) list_single_number_pane_g1

0x4e27,	// (0x0002f515) list_single_number_pane_g2_ParamLimits

0x4e27,	// (0x0002f515) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00039cb6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00039cb6) list_single_number_pane_g

0x7809,	// (0x00031ef7) list_single_number_pane_t1_ParamLimits

0x7809,	// (0x00031ef7) list_single_number_pane_t1

0x781f,	// (0x00031f0d) list_single_number_pane_t2_ParamLimits

0x781f,	// (0x00031f0d) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a04d) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a04d) list_single_number_pane_t

0x4e0f,	// (0x0002f4fd) list_single_graphic_pane_g1_ParamLimits

0x4e0f,	// (0x0002f4fd) list_single_graphic_pane_g1

0x4e1b,	// (0x0002f509) list_single_graphic_pane_g2_ParamLimits

0x4e1b,	// (0x0002f509) list_single_graphic_pane_g2

0x4e27,	// (0x0002f515) list_single_graphic_pane_g3_ParamLimits

0x4e27,	// (0x0002f515) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00039caf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00039caf) list_single_graphic_pane_g

0x4e33,	// (0x0002f521) list_single_graphic_pane_t1_ParamLimits

0x4e33,	// (0x0002f521) list_single_graphic_pane_t1

0x4e1b,	// (0x0002f509) list_single_heading_pane_g1_ParamLimits

0x4e1b,	// (0x0002f509) list_single_heading_pane_g1

0x4e27,	// (0x0002f515) list_single_heading_pane_g2_ParamLimits

0x4e27,	// (0x0002f515) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039cb6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039cb6) list_single_heading_pane_g

0x4e49,	// (0x0002f537) list_single_heading_pane_t1_ParamLimits

0x4e49,	// (0x0002f537) list_single_heading_pane_t1

0x4e5f,	// (0x0002f54d) list_single_heading_pane_t2_ParamLimits

0x4e5f,	// (0x0002f54d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00039cbb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00039cbb) list_single_heading_pane_t

0x4e1b,	// (0x0002f509) list_single_number_heading_pane_g1_ParamLimits

0x4e1b,	// (0x0002f509) list_single_number_heading_pane_g1

0x4e27,	// (0x0002f515) list_single_number_heading_pane_g2_ParamLimits

0x4e27,	// (0x0002f515) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039cb6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039cb6) list_single_number_heading_pane_g

0x4e49,	// (0x0002f537) list_single_number_heading_pane_t1_ParamLimits

0x4e49,	// (0x0002f537) list_single_number_heading_pane_t1

0x4e71,	// (0x0002f55f) list_single_number_heading_pane_t2_ParamLimits

0x4e71,	// (0x0002f55f) list_single_number_heading_pane_t2

0x4e83,	// (0x0002f571) list_single_number_heading_pane_t3_ParamLimits

0x4e83,	// (0x0002f571) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00039cc0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00039cc0) list_single_number_heading_pane_t

0x4e95,	// (0x0002f583) list_single_graphic_heading_pane_g1_ParamLimits

0x4e95,	// (0x0002f583) list_single_graphic_heading_pane_g1

0x4ea1,	// (0x0002f58f) list_single_graphic_heading_pane_g4_ParamLimits

0x4ea1,	// (0x0002f58f) list_single_graphic_heading_pane_g4

0x4e27,	// (0x0002f515) list_single_graphic_heading_pane_g5_ParamLimits

0x4e27,	// (0x0002f515) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00039cc7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00039cc7) list_single_graphic_heading_pane_g

0x4e49,	// (0x0002f537) list_single_graphic_heading_pane_t1_ParamLimits

0x4e49,	// (0x0002f537) list_single_graphic_heading_pane_t1

0x4eb2,	// (0x0002f5a0) list_single_graphic_heading_pane_t2_ParamLimits

0x4eb2,	// (0x0002f5a0) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00039cce) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00039cce) list_single_graphic_heading_pane_t

0x4ec4,	// (0x0002f5b2) list_single_large_graphic_pane_g1_ParamLimits

0x4ec4,	// (0x0002f5b2) list_single_large_graphic_pane_g1

0x4ed0,	// (0x0002f5be) list_single_large_graphic_pane_g2_ParamLimits

0x4ed0,	// (0x0002f5be) list_single_large_graphic_pane_g2

0x4edc,	// (0x0002f5ca) list_single_large_graphic_pane_g3_ParamLimits

0x4edc,	// (0x0002f5ca) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00039cd3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00039cd3) list_single_large_graphic_pane_g

0xa387,	// (0x00034a75) wait_border_pane_g2_copy1

0x4ee8,	// (0x0002f5d6) list_single_large_graphic_pane_g4_cp2

0x4ef0,	// (0x0002f5de) list_single_large_graphic_pane_t1_ParamLimits

0x4ef0,	// (0x0002f5de) list_single_large_graphic_pane_t1

0x4f06,	// (0x0002f5f4) list_double_pane_g1_ParamLimits

0x4f06,	// (0x0002f5f4) list_double_pane_g1

0x4f12,	// (0x0002f600) list_double_pane_g2_ParamLimits

0x4f12,	// (0x0002f600) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00039cda) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00039cda) list_double_pane_g

0x4f1e,	// (0x0002f60c) list_double_pane_t1_ParamLimits

0x4f1e,	// (0x0002f60c) list_double_pane_t1

0x4f34,	// (0x0002f622) list_double_pane_t2_ParamLimits

0x4f34,	// (0x0002f622) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00039cdf) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00039cdf) list_double_pane_t

0x4f46,	// (0x0002f634) list_double2_pane_g1_ParamLimits

0x4f46,	// (0x0002f634) list_double2_pane_g1

0x4f57,	// (0x0002f645) list_double2_pane_g2_ParamLimits

0x4f57,	// (0x0002f645) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00039ce4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00039ce4) list_double2_pane_g

0x4f63,	// (0x0002f651) list_double2_pane_t1_ParamLimits

0x4f63,	// (0x0002f651) list_double2_pane_t1

0x4f79,	// (0x0002f667) list_double2_pane_t2_ParamLimits

0x4f79,	// (0x0002f667) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00039ce9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00039ce9) list_double2_pane_t

0x4f06,	// (0x0002f5f4) list_double_number_pane_g1_ParamLimits

0x4f06,	// (0x0002f5f4) list_double_number_pane_g1

0x4f12,	// (0x0002f600) list_double_number_pane_g2_ParamLimits

0x4f12,	// (0x0002f600) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00039cda) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00039cda) list_double_number_pane_g

0x4f8b,	// (0x0002f679) list_double_number_pane_t1_ParamLimits

0x4f8b,	// (0x0002f679) list_double_number_pane_t1

0x4f9d,	// (0x0002f68b) list_double_number_pane_t2_ParamLimits

0x4f9d,	// (0x0002f68b) list_double_number_pane_t2

0x4fb3,	// (0x0002f6a1) list_double_number_pane_t3_ParamLimits

0x4fb3,	// (0x0002f6a1) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00039cee) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00039cee) list_double_number_pane_t

0x4fc5,	// (0x0002f6b3) list_double_graphic_pane_g1_ParamLimits

0x4fc5,	// (0x0002f6b3) list_double_graphic_pane_g1

0x4fd1,	// (0x0002f6bf) list_double_graphic_pane_g2_ParamLimits

0x4fd1,	// (0x0002f6bf) list_double_graphic_pane_g2

0x4fe0,	// (0x0002f6ce) list_double_graphic_pane_g3_ParamLimits

0x4fe0,	// (0x0002f6ce) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00039cf5) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00039cf5) list_double_graphic_pane_g

0x4ff8,	// (0x0002f6e6) list_double_graphic_pane_t1_ParamLimits

0x4ff8,	// (0x0002f6e6) list_double_graphic_pane_t1

0x500e,	// (0x0002f6fc) list_double_graphic_pane_t2_ParamLimits

0x500e,	// (0x0002f6fc) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00039cfe) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00039cfe) list_double_graphic_pane_t

0x5020,	// (0x0002f70e) list_double2_graphic_pane_g1_ParamLimits

0x5020,	// (0x0002f70e) list_double2_graphic_pane_g1

0x4f06,	// (0x0002f5f4) list_double2_graphic_pane_g2_ParamLimits

0x4f06,	// (0x0002f5f4) list_double2_graphic_pane_g2

0x4f12,	// (0x0002f600) list_double2_graphic_pane_g3_ParamLimits

0x4f12,	// (0x0002f600) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00039d03) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00039d03) list_double2_graphic_pane_g

0x502c,	// (0x0002f71a) list_double2_graphic_pane_t1_ParamLimits

0x502c,	// (0x0002f71a) list_double2_graphic_pane_t1

0x5042,	// (0x0002f730) list_double2_graphic_pane_t2_ParamLimits

0x5042,	// (0x0002f730) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00039d0a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00039d0a) list_double2_graphic_pane_t

0x5054,	// (0x0002f742) list_double_large_graphic_pane_g1_ParamLimits

0x5054,	// (0x0002f742) list_double_large_graphic_pane_g1

0x5073,	// (0x0002f761) list_double_large_graphic_pane_g2_ParamLimits

0x5073,	// (0x0002f761) list_double_large_graphic_pane_g2

0x4f12,	// (0x0002f600) list_double_large_graphic_pane_g3_ParamLimits

0x4f12,	// (0x0002f600) list_double_large_graphic_pane_g3

0x5084,	// (0x0002f772) list_double_large_graphic_pane_g4_ParamLimits

0x5084,	// (0x0002f772) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00039d0f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00039d0f) list_double_large_graphic_pane_g

0x50ac,	// (0x0002f79a) list_double_large_graphic_pane_t1_ParamLimits

0x50ac,	// (0x0002f79a) list_double_large_graphic_pane_t1

0x50c5,	// (0x0002f7b3) list_double_large_graphic_pane_t2_ParamLimits

0x50c5,	// (0x0002f7b3) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039d1a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039d1a) list_double_large_graphic_pane_t

0x50d7,	// (0x0002f7c5) list_double2_large_graphic_pane_g1_ParamLimits

0x50d7,	// (0x0002f7c5) list_double2_large_graphic_pane_g1

0x4f46,	// (0x0002f634) list_double2_large_graphic_pane_g2_ParamLimits

0x4f46,	// (0x0002f634) list_double2_large_graphic_pane_g2

0x4f57,	// (0x0002f645) list_double2_large_graphic_pane_g3_ParamLimits

0x4f57,	// (0x0002f645) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00039d1f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00039d1f) list_double2_large_graphic_pane_g

0x50e3,	// (0x0002f7d1) list_double2_large_graphic_pane_t1_ParamLimits

0x50e3,	// (0x0002f7d1) list_double2_large_graphic_pane_t1

0x50f9,	// (0x0002f7e7) list_double2_large_graphic_pane_t2_ParamLimits

0x50f9,	// (0x0002f7e7) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00039d26) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00039d26) list_double2_large_graphic_pane_t

0x510b,	// (0x0002f7f9) list_double_heading_pane_g1_ParamLimits

0x510b,	// (0x0002f7f9) list_double_heading_pane_g1

0x511c,	// (0x0002f80a) list_double_heading_pane_g2_ParamLimits

0x511c,	// (0x0002f80a) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00039d2b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00039d2b) list_double_heading_pane_g

0x5128,	// (0x0002f816) list_double_heading_pane_t1_ParamLimits

0x5128,	// (0x0002f816) list_double_heading_pane_t1

0x4f79,	// (0x0002f667) list_double_heading_pane_t2_ParamLimits

0x4f79,	// (0x0002f667) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00039d30) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00039d30) list_double_heading_pane_t

0x5020,	// (0x0002f70e) list_double_graphic_heading_pane_g1_ParamLimits

0x5020,	// (0x0002f70e) list_double_graphic_heading_pane_g1

0x510b,	// (0x0002f7f9) list_double_graphic_heading_pane_g2_ParamLimits

0x510b,	// (0x0002f7f9) list_double_graphic_heading_pane_g2

0x511c,	// (0x0002f80a) list_double_graphic_heading_pane_g3_ParamLimits

0x511c,	// (0x0002f80a) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00039d35) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00039d35) list_double_graphic_heading_pane_g

0x513e,	// (0x0002f82c) list_double_graphic_heading_pane_t1_ParamLimits

0x513e,	// (0x0002f82c) list_double_graphic_heading_pane_t1

0x5042,	// (0x0002f730) list_double_graphic_heading_pane_t2_ParamLimits

0x5042,	// (0x0002f730) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00039d3c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00039d3c) list_double_graphic_heading_pane_t

0x5073,	// (0x0002f761) list_double_time_pane_g1_ParamLimits

0x5073,	// (0x0002f761) list_double_time_pane_g1

0x4f12,	// (0x0002f600) list_double_time_pane_g2_ParamLimits

0x4f12,	// (0x0002f600) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00039d41) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00039d41) list_double_time_pane_g

0x5154,	// (0x0002f842) list_double_time_pane_t1_ParamLimits

0x5154,	// (0x0002f842) list_double_time_pane_t1

0x516a,	// (0x0002f858) list_double_time_pane_t2_ParamLimits

0x516a,	// (0x0002f858) list_double_time_pane_t2

0x517c,	// (0x0002f86a) list_double_time_pane_t3_ParamLimits

0x517c,	// (0x0002f86a) list_double_time_pane_t3

0x518e,	// (0x0002f87c) list_double_time_pane_t4_ParamLimits

0x518e,	// (0x0002f87c) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00039d46) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00039d46) list_double_time_pane_t

0x51a0,	// (0x0002f88e) list_setting_pane_g1_ParamLimits

0x51a0,	// (0x0002f88e) list_setting_pane_g1

0x511c,	// (0x0002f80a) list_setting_pane_g2_ParamLimits

0x511c,	// (0x0002f80a) list_setting_pane_g2

0x0001,

0xf661,	// (0x00039d4f) list_setting_pane_g_ParamLimits

0xf661,	// (0x00039d4f) list_setting_pane_g

0x51ac,	// (0x0002f89a) list_setting_pane_t1_ParamLimits

0x51ac,	// (0x0002f89a) list_setting_pane_t1

0x51c3,	// (0x0002f8b1) list_setting_pane_t2_ParamLimits

0x51c3,	// (0x0002f8b1) list_setting_pane_t2

0x0002,

0xf666,	// (0x00039d54) list_setting_pane_t_ParamLimits

0xf666,	// (0x00039d54) list_setting_pane_t

0x5200,	// (0x0002f8ee) set_value_pane_cp_ParamLimits

0x5200,	// (0x0002f8ee) set_value_pane_cp

0x520c,	// (0x0002f8fa) list_setting_number_pane_g1_ParamLimits

0x520c,	// (0x0002f8fa) list_setting_number_pane_g1

0x5218,	// (0x0002f906) list_setting_number_pane_g2_ParamLimits

0x5218,	// (0x0002f906) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00039d5b) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00039d5b) list_setting_number_pane_g

0x5224,	// (0x0002f912) list_setting_number_pane_t1_ParamLimits

0x5224,	// (0x0002f912) list_setting_number_pane_t1

0x5238,	// (0x0002f926) list_setting_number_pane_t2_ParamLimits

0x5238,	// (0x0002f926) list_setting_number_pane_t2

0x524f,	// (0x0002f93d) list_setting_number_pane_t3_ParamLimits

0x524f,	// (0x0002f93d) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00039d60) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00039d60) list_setting_number_pane_t

0x5200,	// (0x0002f8ee) set_value_pane_ParamLimits

0x5200,	// (0x0002f8ee) set_value_pane

0x887b,	// (0x00032f69) bg_set_opt_pane_ParamLimits

0x887b,	// (0x00032f69) bg_set_opt_pane

0x5292,	// (0x0002f980) set_value_pane_t1

0x889c,	// (0x00032f8a) slider_set_pane_cp3

0x88a5,	// (0x00032f93) volume_small_pane_cp

0x88ae,	// (0x00032f9c) list_form_gen_pane

0x88b7,	// (0x00032fa5) scroll_pane_cp8

0x52a8,	// (0x0002f996) form_field_data_pane_ParamLimits

0x52a8,	// (0x0002f996) form_field_data_pane

0x52c8,	// (0x0002f9b6) form_field_data_wide_pane_ParamLimits

0x52c8,	// (0x0002f9b6) form_field_data_wide_pane

0x52e9,	// (0x0002f9d7) form_field_popup_pane_ParamLimits

0x52e9,	// (0x0002f9d7) form_field_popup_pane

0x5307,	// (0x0002f9f5) form_field_popup_wide_pane_ParamLimits

0x5307,	// (0x0002f9f5) form_field_popup_wide_pane

0x5324,	// (0x0002fa12) form_field_slider_pane_ParamLimits

0x5324,	// (0x0002fa12) form_field_slider_pane

0x5337,	// (0x0002fa25) form_field_slider_wide_pane_ParamLimits

0x5337,	// (0x0002fa25) form_field_slider_wide_pane

0x88c8,	// (0x00032fb6) data_form_pane

0x5354,	// (0x0002fa42) form_field_data_pane_t1

0x88d4,	// (0x00032fc2) input_focus_pane

0x536e,	// (0x0002fa5c) data_form_wide_pane

0x538b,	// (0x0002fa79) form_field_data_wide_pane_t1

0x8645,	// (0x00032d33) input_focus_pane_cp6

0x53ad,	// (0x0002fa9b) form_field_popup_pane_t1

0x88d4,	// (0x00032fc2) input_focus_pane_cp7

0x8902,	// (0x00032ff0) list_form_pane

0x53cf,	// (0x0002fabd) form_field_popup_wide_pane_t1

0x88d4,	// (0x00032fc2) input_focus_pane_cp8

0x890e,	// (0x00032ffc) list_form_wide_pane

0x53ec,	// (0x0002fada) form_field_slider_pane_t1_ParamLimits

0x53ec,	// (0x0002fada) form_field_slider_pane_t1

0x5400,	// (0x0002faee) form_field_slider_pane_t2_ParamLimits

0x5400,	// (0x0002faee) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00039d70) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00039d70) form_field_slider_pane_t

0x82f5,	// (0x000329e3) input_focus_pane_cp9_ParamLimits

0x82f5,	// (0x000329e3) input_focus_pane_cp9

0x5412,	// (0x0002fb00) slider_cont_pane_ParamLimits

0x5412,	// (0x0002fb00) slider_cont_pane

0x891d,	// (0x0003300b) form_field_slider_wide_pane_t1_ParamLimits

0x891d,	// (0x0003300b) form_field_slider_wide_pane_t1

0x5426,	// (0x0002fb14) form_field_slider_wide_pane_t2_ParamLimits

0x5426,	// (0x0002fb14) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00039d75) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00039d75) form_field_slider_wide_pane_t

0x82f5,	// (0x000329e3) input_focus_pane_cp10_ParamLimits

0x82f5,	// (0x000329e3) input_focus_pane_cp10

0x5438,	// (0x0002fb26) slider_cont_pane_cp1_ParamLimits

0x5438,	// (0x0002fb26) slider_cont_pane_cp1

0x544c,	// (0x0002fb3a) slider_form_pane_cp

0x892f,	// (0x0003301d) input_focus_pane_g1

0x8937,	// (0x00033025) input_focus_pane_g2

0x893f,	// (0x0003302d) input_focus_pane_g3

0x8947,	// (0x00033035) input_focus_pane_g4

0x894f,	// (0x0003303d) input_focus_pane_g5

0x8957,	// (0x00033045) input_focus_pane_g6

0x895f,	// (0x0003304d) input_focus_pane_g7

0x8967,	// (0x00033055) input_focus_pane_g8

0x896f,	// (0x0003305d) input_focus_pane_g9

0x771f,	// (0x00031e0d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00039d7a) input_focus_pane_g

0xa390,	// (0x00034a7e) wait_border_pane_g3_copy1

0x5454,	// (0x0002fb42) data_form_pane_t1

0x771f,	// (0x00031e0d) wait_anim_pane_g1_copy1

0x7831,	// (0x00031f1f) data_form_wide_pane_t1

0x546f,	// (0x0002fb5d) list_form_graphic_pane_cp_ParamLimits

0x546f,	// (0x0002fb5d) list_form_graphic_pane_cp

0xb2ab,	// (0x00035999) slider_form_pane_g1

0xb2b4,	// (0x000359a2) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a07d) slider_form_pane_g

0x546f,	// (0x0002fb5d) list_form_graphic_pane_ParamLimits

0x546f,	// (0x0002fb5d) list_form_graphic_pane

0x5486,	// (0x0002fb74) list_form_graphic_pane_g1

0x548e,	// (0x0002fb7c) list_form_graphic_pane_t1_ParamLimits

0x548e,	// (0x0002fb7c) list_form_graphic_pane_t1

0x807a,	// (0x00032768) list_highlight_pane_cp5_ParamLimits

0x807a,	// (0x00032768) list_highlight_pane_cp5

0x54a3,	// (0x0002fb91) find_pane_g1

0x8977,	// (0x00033065) input_find_pane

0x54ac,	// (0x0002fb9a) input_find_pane_g1_ParamLimits

0x54ac,	// (0x0002fb9a) input_find_pane_g1

0x54b8,	// (0x0002fba6) input_find_pane_t1_ParamLimits

0x54b8,	// (0x0002fba6) input_find_pane_t1

0x54cd,	// (0x0002fbbb) input_find_pane_t2_ParamLimits

0x54cd,	// (0x0002fbbb) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00039d8f) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00039d8f) input_find_pane_t

0x8980,	// (0x0003306e) input_focus_pane_cp5_ParamLimits

0x8980,	// (0x0003306e) input_focus_pane_cp5

0x899a,	// (0x00033088) bg_popup_window_pane_cp2_ParamLimits

0x899a,	// (0x00033088) bg_popup_window_pane_cp2

0x89a7,	// (0x00033095) listscroll_menu_pane_ParamLimits

0x89a7,	// (0x00033095) listscroll_menu_pane

0x89b3,	// (0x000330a1) popup_submenu_window_ParamLimits

0x89b3,	// (0x000330a1) popup_submenu_window

0x89db,	// (0x000330c9) find_popup_pane_g1

0x89e3,	// (0x000330d1) input_popup_find_pane_cp

0x8980,	// (0x0003306e) input_focus_pane_cp4_ParamLimits

0x8980,	// (0x0003306e) input_focus_pane_cp4

0x89fb,	// (0x000330e9) input_popup_find_pane_t1_ParamLimits

0x89fb,	// (0x000330e9) input_popup_find_pane_t1

0x7729,	// (0x00031e17) bg_popup_sub_pane_cp

0x8a29,	// (0x00033117) listscroll_popup_sub_pane

0x8a31,	// (0x0003311f) list_submenu_pane_ParamLimits

0x8a31,	// (0x0003311f) list_submenu_pane

0x8a42,	// (0x00033130) scroll_pane_cp4

0x8a4a,	// (0x00033138) list_single_popup_submenu_pane_ParamLimits

0x8a4a,	// (0x00033138) list_single_popup_submenu_pane

0x8a5e,	// (0x0003314c) list_single_popup_submenu_pane_g1

0x8a66,	// (0x00033154) list_single_popup_submenu_pane_t1_ParamLimits

0x8a66,	// (0x00033154) list_single_popup_submenu_pane_t1

0x807a,	// (0x00032768) bg_active_tab_pane_cp1_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp1

0x8a7b,	// (0x00033169) tabs_2_active_pane_g1

0x8a83,	// (0x00033171) tabs_2_active_pane_t1

0x807a,	// (0x00032768) bg_passive_tab_pane_cp1_ParamLimits

0x807a,	// (0x00032768) bg_passive_tab_pane_cp1

0x8a7b,	// (0x00033169) tabs_2_passive_pane_g1

0x8a83,	// (0x00033171) tabs_2_passive_pane_t1

0x8a95,	// (0x00033183) bg_active_tab_pane_cp4

0x8aa3,	// (0x00033191) tabs_2_long_active_pane_t1

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp4

0x6186,	// (0x00030874) list_single_midp_graphic_pane_g4_ParamLimits

0x8a95,	// (0x00033183) bg_active_tab_pane_cp5

0x8ac2,	// (0x000331b0) tabs_3_long_active_pane_t1

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp5

0x6186,	// (0x00030874) list_single_midp_graphic_pane_g4

0x807a,	// (0x00032768) bg_popup_window_pane_cp13_ParamLimits

0x807a,	// (0x00032768) bg_popup_window_pane_cp13

0x8add,	// (0x000331cb) listscroll_popup_fast_pane_ParamLimits

0x8add,	// (0x000331cb) listscroll_popup_fast_pane

0x8ae9,	// (0x000331d7) grid_popup_fast_pane_ParamLimits

0x8ae9,	// (0x000331d7) grid_popup_fast_pane

0x8afb,	// (0x000331e9) scroll_pane_cp9_ParamLimits

0x8afb,	// (0x000331e9) scroll_pane_cp9

0xcb52,	// (0x00037240) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb52,	// (0x00037240) list_single_graphic_hl_pane_t1_cp2

0x8b1f,	// (0x0003320d) input_focus_pane_cp20_ParamLimits

0x8b1f,	// (0x0003320d) input_focus_pane_cp20

0x8b2d,	// (0x0003321b) query_popup_data_pane_t1_ParamLimits

0x8b2d,	// (0x0003321b) query_popup_data_pane_t1

0x8b40,	// (0x0003322e) query_popup_data_pane_t2_ParamLimits

0x8b40,	// (0x0003322e) query_popup_data_pane_t2

0x8b86,	// (0x00033274) query_popup_data_pane_t3_ParamLimits

0x8b86,	// (0x00033274) query_popup_data_pane_t3

0x8bc7,	// (0x000332b5) query_popup_data_pane_t4_ParamLimits

0x8bc7,	// (0x000332b5) query_popup_data_pane_t4

0x8c03,	// (0x000332f1) query_popup_data_pane_t5_ParamLimits

0x8c03,	// (0x000332f1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00039d94) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00039d94) query_popup_data_pane_t

0x892f,	// (0x0003301d) bg_set_opt_pane_g1

0x8937,	// (0x00033025) bg_set_opt_pane_g2

0x893f,	// (0x0003302d) bg_set_opt_pane_g3

0x8947,	// (0x00033035) bg_set_opt_pane_g4

0x894f,	// (0x0003303d) bg_set_opt_pane_g5

0x8957,	// (0x00033045) bg_set_opt_pane_g6

0x895f,	// (0x0003304d) bg_set_opt_pane_g7

0x8967,	// (0x00033055) bg_set_opt_pane_g8

0x896f,	// (0x0003305d) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00039d9f) bg_set_opt_pane_g

0x5804,	// (0x0002fef2) control_top_pane_stacon_ParamLimits

0x5804,	// (0x0002fef2) control_top_pane_stacon

0x5857,	// (0x0002ff45) signal_pane_stacon_ParamLimits

0x5857,	// (0x0002ff45) signal_pane_stacon

0x91c1,	// (0x000338af) stacon_top_pane_g1_ParamLimits

0x91c1,	// (0x000338af) stacon_top_pane_g1

0x587c,	// (0x0002ff6a) title_pane_stacon_ParamLimits

0x587c,	// (0x0002ff6a) title_pane_stacon

0x58a6,	// (0x0002ff94) uni_indicator_pane_stacon_ParamLimits

0x58a6,	// (0x0002ff94) uni_indicator_pane_stacon

0x58bb,	// (0x0002ffa9) battery_pane_stacon_ParamLimits

0x58bb,	// (0x0002ffa9) battery_pane_stacon

0x58ff,	// (0x0002ffed) control_bottom_pane_stacon_ParamLimits

0x58ff,	// (0x0002ffed) control_bottom_pane_stacon

0x5922,	// (0x00030010) navi_pane_stacon_ParamLimits

0x5922,	// (0x00030010) navi_pane_stacon

0x91e3,	// (0x000338d1) stacon_bottom_pane_g1_ParamLimits

0x91e3,	// (0x000338d1) stacon_bottom_pane_g1

0x54e2,	// (0x0002fbd0) aid_levels_signal_lsc_ParamLimits

0x54e2,	// (0x0002fbd0) aid_levels_signal_lsc

0x54f9,	// (0x0002fbe7) signal_pane_stacon_g1_ParamLimits

0x54f9,	// (0x0002fbe7) signal_pane_stacon_g1

0x550d,	// (0x0002fbfb) signal_pane_stacon_g2_ParamLimits

0x550d,	// (0x0002fbfb) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00039db2) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00039db2) signal_pane_stacon_g

0x5542,	// (0x0002fc30) title_pane_stacon_t1_ParamLimits

0x5542,	// (0x0002fc30) title_pane_stacon_t1

0x8c47,	// (0x00033335) uni_indicator_pane_stacon_g1

0x8c51,	// (0x0003333f) uni_indicator_pane_stacon_g2

0x8c5b,	// (0x00033349) uni_indicator_pane_stacon_g3

0x8c65,	// (0x00033353) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00039dbe) uni_indicator_pane_stacon_g

0x5567,	// (0x0002fc55) control_top_pane_stacon_g1

0x556f,	// (0x0002fc5d) control_top_pane_stacon_t1_ParamLimits

0x556f,	// (0x0002fc5d) control_top_pane_stacon_t1

0x55a6,	// (0x0002fc94) aid_levels_battery_lsc_ParamLimits

0x55a6,	// (0x0002fc94) aid_levels_battery_lsc

0x55be,	// (0x0002fcac) battery_pane_stacon_g1_ParamLimits

0x55be,	// (0x0002fcac) battery_pane_stacon_g1

0x55d1,	// (0x0002fcbf) battery_pane_stacon_g2_ParamLimits

0x55d1,	// (0x0002fcbf) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00039dc7) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00039dc7) battery_pane_stacon_g

0x560f,	// (0x0002fcfd) navi_icon_pane_stacon

0x5623,	// (0x0002fd11) navi_navi_pane_stacon

0x560f,	// (0x0002fcfd) navi_text_pane_stacon

0x5567,	// (0x0002fc55) control_bottom_pane_stacon_g1

0x5637,	// (0x0002fd25) control_bottom_pane_stacon_t1_ParamLimits

0x5637,	// (0x0002fd25) control_bottom_pane_stacon_t1

0x8c89,	// (0x00033377) grid_app_pane_ParamLimits

0x8c89,	// (0x00033377) grid_app_pane

0x8cab,	// (0x00033399) scroll_pane_cp15_ParamLimits

0x8cab,	// (0x00033399) scroll_pane_cp15

0x8cbe,	// (0x000333ac) cell_app_pane_ParamLimits

0x8cbe,	// (0x000333ac) cell_app_pane

0x8ce4,	// (0x000333d2) cell_app_pane_g1_ParamLimits

0x8ce4,	// (0x000333d2) cell_app_pane_g1

0x8d04,	// (0x000333f2) cell_app_pane_g2_ParamLimits

0x8d04,	// (0x000333f2) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00039dcc) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00039dcc) cell_app_pane_g

0x8d10,	// (0x000333fe) cell_app_pane_t1_ParamLimits

0x8d10,	// (0x000333fe) cell_app_pane_t1

0x8d27,	// (0x00033415) grid_highlight_pane_ParamLimits

0x8d27,	// (0x00033415) grid_highlight_pane

0x892f,	// (0x0003301d) cell_highlight_pane_g1

0x8937,	// (0x00033025) cell_highlight_pane_g2

0x893f,	// (0x0003302d) cell_highlight_pane_g3

0x8947,	// (0x00033035) cell_highlight_pane_g4

0x894f,	// (0x0003303d) cell_highlight_pane_g5

0x8957,	// (0x00033045) cell_highlight_pane_g6

0x895f,	// (0x0003304d) cell_highlight_pane_g7

0x8967,	// (0x00033055) cell_highlight_pane_g8

0x896f,	// (0x0003305d) cell_highlight_pane_g9

0x771f,	// (0x00031e0d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00039d7a) cell_highlight_pane_g

0x8d38,	// (0x00033426) bg_scroll_pane

0x5681,	// (0x0002fd6f) scroll_handle_pane

0x8d7f,	// (0x0003346d) scroll_bg_pane_g1

0x8d94,	// (0x00033482) scroll_bg_pane_g2

0x8dac,	// (0x0003349a) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00039dd1) scroll_bg_pane_g

0x8dc1,	// (0x000334af) scroll_handle_focus_pane_ParamLimits

0x8dc1,	// (0x000334af) scroll_handle_focus_pane

0x8d7f,	// (0x0003346d) scroll_handle_pane_g1

0x8dce,	// (0x000334bc) scroll_handle_pane_g2

0x8dac,	// (0x0003349a) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00039dd8) scroll_handle_pane_g

0x8980,	// (0x0003306e) bg_popup_sub_pane_cp21_ParamLimits

0x8980,	// (0x0003306e) bg_popup_sub_pane_cp21

0x8de2,	// (0x000334d0) popup_fep_japan_predictive_window_t1_ParamLimits

0x8de2,	// (0x000334d0) popup_fep_japan_predictive_window_t1

0x8dfc,	// (0x000334ea) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dfc,	// (0x000334ea) popup_fep_japan_predictive_window_t2

0x8e2f,	// (0x0003351d) popup_fep_japan_predictive_window_t3_ParamLimits

0x8e2f,	// (0x0003351d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00039ddf) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00039ddf) popup_fep_japan_predictive_window_t

0x7729,	// (0x00031e17) bg_popup_sub_pane_cp23

0x8e66,	// (0x00033554) listscroll_japin_cand_pane

0x8e6e,	// (0x0003355c) popup_fep_japan_candidate_window_t1

0x8e7c,	// (0x0003356a) candidate_pane_ParamLimits

0x8e7c,	// (0x0003356a) candidate_pane

0x8e8e,	// (0x0003357c) scroll_pane_cp30

0x8e96,	// (0x00033584) list_single_popup_jap_candidate_pane_ParamLimits

0x8e96,	// (0x00033584) list_single_popup_jap_candidate_pane

0x7729,	// (0x00031e17) list_highlight_pane_cp30

0x8eaa,	// (0x00033598) list_single_popup_jap_candidate_pane_t1

0x8eb9,	// (0x000335a7) level_1_signal

0x8ec6,	// (0x000335b4) level_2_signal

0x8ed3,	// (0x000335c1) level_3_signal

0x8ee0,	// (0x000335ce) level_4_signal

0x8eed,	// (0x000335db) level_5_signal

0x8efa,	// (0x000335e8) level_6_signal

0x8f07,	// (0x000335f5) level_7_signal

0x8eb9,	// (0x000335a7) level_1_battery

0x8ec6,	// (0x000335b4) level_2_battery

0x8ed3,	// (0x000335c1) level_3_battery

0x8ee0,	// (0x000335ce) level_4_battery

0x8eed,	// (0x000335db) level_5_battery

0x8efa,	// (0x000335e8) level_6_battery

0x8f07,	// (0x000335f5) level_7_battery

0x8f2c,	// (0x0003361a) list_menu_pane_ParamLimits

0x8f2c,	// (0x0003361a) list_menu_pane

0x8f42,	// (0x00033630) scroll_pane_cp25_ParamLimits

0x8f42,	// (0x00033630) scroll_pane_cp25

0x8f5b,	// (0x00033649) list_double2_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double2_graphic_pane_cp2

0x8f5b,	// (0x00033649) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double2_large_graphic_pane_cp2

0x8f5b,	// (0x00033649) list_double2_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double2_pane_cp2

0x8f5b,	// (0x00033649) list_double_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double_graphic_pane_cp2

0x8f5b,	// (0x00033649) list_double_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double_large_graphic_pane_cp2

0x8f5b,	// (0x00033649) list_double_number_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double_number_pane_cp2

0x8f5b,	// (0x00033649) list_double_pane_cp2_ParamLimits

0x8f5b,	// (0x00033649) list_double_pane_cp2

0x8f7f,	// (0x0003366d) list_single_2graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_2graphic_pane_cp2

0x8f7f,	// (0x0003366d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_graphic_heading_pane_cp2

0x8f7f,	// (0x0003366d) list_single_graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_graphic_pane_cp2

0x8f7f,	// (0x0003366d) list_single_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_heading_pane_cp2

0x8f95,	// (0x00033683) list_single_large_graphic_pane_cp2_ParamLimits

0x8f95,	// (0x00033683) list_single_large_graphic_pane_cp2

0x8f7f,	// (0x0003366d) list_single_number_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_number_heading_pane_cp2

0x8f7f,	// (0x0003366d) list_single_number_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_number_pane_cp2

0x8f7f,	// (0x0003366d) list_single_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_pane_cp2

0x9010,	// (0x000336fe) bg_popup_sub_pane_cp22

0x5730,	// (0x0002fe1e) popup_side_volume_key_window_g1

0x5754,	// (0x0002fe42) popup_side_volume_key_window_t1

0x5770,	// (0x0002fe5e) volume_small_pane_cp1

0x82f5,	// (0x000329e3) bg_popup_sub_pane_cp24_ParamLimits

0x82f5,	// (0x000329e3) bg_popup_sub_pane_cp24

0x9026,	// (0x00033714) fep_china_uni_candidate_pane_ParamLimits

0x9026,	// (0x00033714) fep_china_uni_candidate_pane

0x903a,	// (0x00033728) fep_china_uni_entry_pane

0x904a,	// (0x00033738) popup_fep_china_uni_window_g1

0x9066,	// (0x00033754) fep_china_uni_entry_pane_g1

0x906e,	// (0x0003375c) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00039e10) fep_china_uni_entry_pane_g

0x9076,	// (0x00033764) fep_entry_item_pane

0x9080,	// (0x0003376e) fep_candidate_item_pane

0x9088,	// (0x00033776) fep_china_uni_candidate_pane_g1

0x9090,	// (0x0003377e) fep_china_uni_candidate_pane_g2

0x9098,	// (0x00033786) fep_china_uni_candidate_pane_g3

0x90a0,	// (0x0003378e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00039e15) fep_china_uni_candidate_pane_g

0x771f,	// (0x00031e0d) fep_entry_item_pane_g1

0x90a8,	// (0x00033796) fep_entry_item_pane_t1_ParamLimits

0x90a8,	// (0x00033796) fep_entry_item_pane_t1

0x90be,	// (0x000337ac) fep_candidate_item_pane_t1_ParamLimits

0x90be,	// (0x000337ac) fep_candidate_item_pane_t1

0x90d3,	// (0x000337c1) fep_candidate_item_pane_t2_ParamLimits

0x90d3,	// (0x000337c1) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00039e1e) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00039e1e) fep_candidate_item_pane_t

0x807a,	// (0x00032768) list_highlight_pane_cp31_ParamLimits

0x807a,	// (0x00032768) list_highlight_pane_cp31

0x90e5,	// (0x000337d3) level_1_signal_lsc

0x90ee,	// (0x000337dc) level_2_signal_lsc

0x90f7,	// (0x000337e5) level_3_signal_lsc

0x9100,	// (0x000337ee) level_4_signal_lsc

0x9109,	// (0x000337f7) level_5_signal_lsc

0x9112,	// (0x00033800) level_6_signal_lsc

0x911b,	// (0x00033809) level_7_signal_lsc

0x911b,	// (0x00033809) level_1_battery_lsc

0x9124,	// (0x00033812) level_2_battery_lsc

0x912d,	// (0x0003381b) level_3_battery_lsc

0x9136,	// (0x00033824) level_4_battery_lsc

0x913f,	// (0x0003382d) level_5_battery_lsc

0x9148,	// (0x00033836) level_6_battery_lsc

0x90e5,	// (0x000337d3) level_7_battery_lsc

0x9151,	// (0x0003383f) scroll_handle_focus_pane_g1

0x915a,	// (0x00033848) scroll_handle_focus_pane_g2

0x9163,	// (0x00033851) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00039e23) scroll_handle_focus_pane_g

0x5778,	// (0x0002fe66) list_single_2graphic_pane_g1_ParamLimits

0x5778,	// (0x0002fe66) list_single_2graphic_pane_g1

0x4ea1,	// (0x0002f58f) list_single_2graphic_pane_g2_ParamLimits

0x4ea1,	// (0x0002f58f) list_single_2graphic_pane_g2

0x4e27,	// (0x0002f515) list_single_2graphic_pane_g3_ParamLimits

0x4e27,	// (0x0002f515) list_single_2graphic_pane_g3

0x5784,	// (0x0002fe72) list_single_2graphic_pane_g4_ParamLimits

0x5784,	// (0x0002fe72) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00039e2a) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00039e2a) list_single_2graphic_pane_g

0x5790,	// (0x0002fe7e) list_single_2graphic_pane_t1_ParamLimits

0x5790,	// (0x0002fe7e) list_single_2graphic_pane_t1

0x57be,	// (0x0002feac) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x57be,	// (0x0002feac) list_double2_graphic_large_graphic_pane_g1

0x4f46,	// (0x0002f634) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f46,	// (0x0002f634) list_double2_graphic_large_graphic_pane_g2

0x4f57,	// (0x0002f645) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4f57,	// (0x0002f645) list_double2_graphic_large_graphic_pane_g3

0x57d0,	// (0x0002febe) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x57d0,	// (0x0002febe) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00039e33) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00039e33) list_double2_graphic_large_graphic_pane_g

0x57dc,	// (0x0002feca) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57dc,	// (0x0002feca) list_double2_graphic_large_graphic_pane_t1

0x57f2,	// (0x0002fee0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x57f2,	// (0x0002fee0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00039e3c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00039e3c) list_double2_graphic_large_graphic_pane_t

0x92aa,	// (0x00033998) popup_fast_swap_window_ParamLimits

0x92aa,	// (0x00033998) popup_fast_swap_window

0x92c6,	// (0x000339b4) popup_side_volume_key_window

0x92e0,	// (0x000339ce) stacon_top_pane

0x92ea,	// (0x000339d8) status_pane_ParamLimits

0x92ea,	// (0x000339d8) status_pane

0x92f8,	// (0x000339e6) status_small_pane

0x7729,	// (0x00031e17) control_pane

0x7729,	// (0x00031e17) stacon_bottom_pane

0x88b7,	// (0x00032fa5) scroll_pane_cp121

0x88ae,	// (0x00032f9c) set_content_pane

0x916c,	// (0x0003385a) bg_active_tab_pane_g1_cp1

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp1

0x917e,	// (0x0003386c) bg_active_tab_pane_g3_cp1

0x916c,	// (0x0003385a) bg_passive_tab_pane_g1_cp1

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp1

0x917e,	// (0x0003386c) bg_passive_tab_pane_g3_cp1

0x9187,	// (0x00033875) bg_active_tab_pane_g1_cp2

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp2

0x9190,	// (0x0003387e) bg_active_tab_pane_g3_cp2

0x9187,	// (0x00033875) bg_passive_tab_pane_g1_cp2

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp2

0x9190,	// (0x0003387e) bg_passive_tab_pane_g3_cp2

0x9199,	// (0x00033887) bg_active_tab_pane_g1_cp3

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp3

0x91a2,	// (0x00033890) bg_active_tab_pane_g3_cp3

0x9199,	// (0x00033887) bg_passive_tab_pane_g1_cp3

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp3

0x91a2,	// (0x00033890) bg_passive_tab_pane_g3_cp3

0x91ab,	// (0x00033899) bg_active_tab_pane_g1_cp4

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp4

0x91b6,	// (0x000338a4) bg_active_tab_pane_g3_cp4

0x91ab,	// (0x00033899) bg_passive_tab_pane_g1_cp4

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp4

0x91b6,	// (0x000338a4) bg_passive_tab_pane_g3_cp4

0x91ff,	// (0x000338ed) bg_active_tab_pane_g1_cp5

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp5

0x9208,	// (0x000338f6) bg_active_tab_pane_g3_cp5

0x91ff,	// (0x000338ed) bg_passive_tab_pane_g1_cp5

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp5

0x9208,	// (0x000338f6) bg_passive_tab_pane_g3_cp5

0x9211,	// (0x000338ff) list_set_graphic_pane_ParamLimits

0x9211,	// (0x000338ff) list_set_graphic_pane

0x7729,	// (0x00031e17) bg_set_opt_pane_cp4

0x922f,	// (0x0003391d) list_set_graphic_pane_g1_ParamLimits

0x922f,	// (0x0003391d) list_set_graphic_pane_g1

0x923b,	// (0x00033929) list_set_graphic_pane_g2_ParamLimits

0x923b,	// (0x00033929) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00039e41) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00039e41) list_set_graphic_pane_g

0x0009,

0xfae4,	// (0x0003a1d2) volume_small_pane_cp_g

0x925d,	// (0x0003394b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x925d,	// (0x0003394b) list_double2_large_graphic_pane_g1_cp2

0x9269,	// (0x00033957) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9269,	// (0x00033957) list_double2_large_graphic_pane_g2_cp2

0x927a,	// (0x00033968) list_double2_large_graphic_pane_g3_cp2

0x9282,	// (0x00033970) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9282,	// (0x00033970) list_double2_large_graphic_pane_t1_cp2

0x9298,	// (0x00033986) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9298,	// (0x00033986) list_double2_large_graphic_pane_t2_cp2

0xae69,	// (0x00035557) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae69,	// (0x00035557) list_double_large_graphic_pane_g1_cp2

0xae7a,	// (0x00035568) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae7a,	// (0x00035568) list_double_large_graphic_pane_g2_cp2

0x9429,	// (0x00033b17) list_double_large_graphic_pane_g3_cp2

0xae8b,	// (0x00035579) list_double_large_graphic_pane_g4_cp

0xae93,	// (0x00035581) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae93,	// (0x00035581) list_double_large_graphic_pane_t1_cp2

0xaeaa,	// (0x00035598) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaeaa,	// (0x00035598) list_double_large_graphic_pane_t2_cp2

0x9303,	// (0x000339f1) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9303,	// (0x000339f1) list_double2_graphic_pane_g1_cp2

0x9311,	// (0x000339ff) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9311,	// (0x000339ff) list_double2_graphic_pane_g2_cp2

0x9322,	// (0x00033a10) list_double2_graphic_pane_g3_cp2

0x932c,	// (0x00033a1a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x932c,	// (0x00033a1a) list_double2_graphic_pane_t1_cp2

0x9342,	// (0x00033a30) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9342,	// (0x00033a30) list_double2_graphic_pane_t2_cp2

0x9354,	// (0x00033a42) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x00033a42) list_single_number_heading_pane_g1_cp2

0x9360,	// (0x00033a4e) list_single_number_heading_pane_g2_cp2

0x9380,	// (0x00033a6e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9380,	// (0x00033a6e) list_single_number_heading_pane_t1_cp2

0x9396,	// (0x00033a84) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9396,	// (0x00033a84) list_single_number_heading_pane_t2_cp2

0x93a8,	// (0x00033a96) list_single_number_heading_pane_t3_cp2_ParamLimits

0x93a8,	// (0x00033a96) list_single_number_heading_pane_t3_cp2

0x9354,	// (0x00033a42) list_single_heading_pane_g1_cp2_ParamLimits

0x9354,	// (0x00033a42) list_single_heading_pane_g1_cp2

0x9360,	// (0x00033a4e) list_single_heading_pane_g2_cp2

0x9380,	// (0x00033a6e) list_single_heading_pane_t1_cp2_ParamLimits

0x9380,	// (0x00033a6e) list_single_heading_pane_t1_cp2

0xac73,	// (0x00035361) list_single_heading_pane_t2_cp2_ParamLimits

0xac73,	// (0x00035361) list_single_heading_pane_t2_cp2

0xabbb,	// (0x000352a9) list_double_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x000352a9) list_double_graphic_pane_g1_cp2

0xabc7,	// (0x000352b5) list_double_graphic_pane_g2_cp2_ParamLimits

0xabc7,	// (0x000352b5) list_double_graphic_pane_g2_cp2

0xabd6,	// (0x000352c4) list_double_graphic_pane_g3_cp2

0xabde,	// (0x000352cc) list_double_graphic_pane_t1_cp2_ParamLimits

0xabde,	// (0x000352cc) list_double_graphic_pane_t1_cp2

0xabf4,	// (0x000352e2) list_double_graphic_pane_t2_cp2_ParamLimits

0xabf4,	// (0x000352e2) list_double_graphic_pane_t2_cp2

0x941d,	// (0x00033b0b) list_double_number_pane_g1_cp2_ParamLimits

0x941d,	// (0x00033b0b) list_double_number_pane_g1_cp2

0x9429,	// (0x00033b17) list_double_number_pane_g2_cp2

0xab7f,	// (0x0003526d) list_double_number_pane_t1_cp2_ParamLimits

0xab7f,	// (0x0003526d) list_double_number_pane_t1_cp2

0xab93,	// (0x00035281) list_double_number_pane_t2_cp2_ParamLimits

0xab93,	// (0x00035281) list_double_number_pane_t2_cp2

0xaba9,	// (0x00035297) list_double_number_pane_t3_cp2_ParamLimits

0xaba9,	// (0x00035297) list_double_number_pane_t3_cp2

0xaa68,	// (0x00035156) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa68,	// (0x00035156) list_single_graphic_pane_g1_cp2

0x9368,	// (0x00033a56) list_single_graphic_pane_g2_cp2_ParamLimits

0x9368,	// (0x00033a56) list_single_graphic_pane_g2_cp2

0x9481,	// (0x00033b6f) list_single_graphic_pane_g3_cp2

0xaa3e,	// (0x0003512c) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x0003512c) list_single_graphic_pane_t1_cp2

0x9368,	// (0x00033a56) list_single_number_pane_g1_cp2_ParamLimits

0x9368,	// (0x00033a56) list_single_number_pane_g1_cp2

0x9481,	// (0x00033b6f) list_single_number_pane_g2_cp2

0xaa3e,	// (0x0003512c) list_single_number_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x0003512c) list_single_number_pane_t1_cp2

0xaa54,	// (0x00035142) list_single_number_pane_t2_cp2_ParamLimits

0xaa54,	// (0x00035142) list_single_number_pane_t2_cp2

0x9269,	// (0x00033957) list_double2_pane_g1_cp2_ParamLimits

0x9269,	// (0x00033957) list_double2_pane_g1_cp2

0x927a,	// (0x00033968) list_double2_pane_g2_cp2

0x93f5,	// (0x00033ae3) list_double2_pane_t1_cp2_ParamLimits

0x93f5,	// (0x00033ae3) list_double2_pane_t1_cp2

0x940b,	// (0x00033af9) list_double2_pane_t2_cp2_ParamLimits

0x940b,	// (0x00033af9) list_double2_pane_t2_cp2

0x941d,	// (0x00033b0b) list_double_pane_g1_cp2_ParamLimits

0x941d,	// (0x00033b0b) list_double_pane_g1_cp2

0x9429,	// (0x00033b17) list_double_pane_g2_cp2

0x9431,	// (0x00033b1f) list_double_pane_t1_cp2_ParamLimits

0x9431,	// (0x00033b1f) list_double_pane_t1_cp2

0x9447,	// (0x00033b35) list_double_pane_t2_cp2_ParamLimits

0x9447,	// (0x00033b35) list_double_pane_t2_cp2

0x9471,	// (0x00033b5f) list_single_pane_cp2_g3

0x9368,	// (0x00033a56) list_single_pane_g1_cp2_ParamLimits

0x9368,	// (0x00033a56) list_single_pane_g1_cp2

0x9481,	// (0x00033b6f) list_single_pane_g2_cp2

0x9489,	// (0x00033b77) list_single_pane_t1_cp2_ParamLimits

0x9489,	// (0x00033b77) list_single_pane_t1_cp2

0x94a1,	// (0x00033b8f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x94a1,	// (0x00033b8f) list_single_large_graphic_pane_g1_cp2

0x94ad,	// (0x00033b9b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x94ad,	// (0x00033b9b) list_single_large_graphic_pane_g2_cp2

0x94b9,	// (0x00033ba7) list_single_large_graphic_pane_g3_cp2

0x94c1,	// (0x00033baf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94c1,	// (0x00033baf) list_single_large_graphic_pane_g4_cp1

0x94db,	// (0x00033bc9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94db,	// (0x00033bc9) list_single_large_graphic_pane_t1_cp2

0xaa0a,	// (0x000350f8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xaa0a,	// (0x000350f8) list_single_graphic_heading_pane_g1_cp2

0xa9d7,	// (0x000350c5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9d7,	// (0x000350c5) list_single_graphic_heading_pane_g4_cp2

0x9481,	// (0x00033b6f) list_single_graphic_heading_pane_g5_cp2

0xaa16,	// (0x00035104) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaa16,	// (0x00035104) list_single_graphic_heading_pane_t1_cp2

0xaa2c,	// (0x0003511a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa2c,	// (0x0003511a) list_single_graphic_heading_pane_t2_cp2

0xa9cb,	// (0x000350b9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9cb,	// (0x000350b9) list_single_2graphic_pane_g1_cp2

0xa9d7,	// (0x000350c5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9d7,	// (0x000350c5) list_single_2graphic_pane_g2_cp2

0x9481,	// (0x00033b6f) list_single_2graphic_pane_g3_cp2

0xa9e8,	// (0x000350d6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9e8,	// (0x000350d6) list_single_2graphic_pane_g4_cp2

0xa9f4,	// (0x000350e2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9f4,	// (0x000350e2) list_single_2graphic_pane_t1_cp2

0x771f,	// (0x00031e0d) list_highlight_pane_g10_cp1

0xa5a3,	// (0x00034c91) list_highlight_pane_g1_cp1

0xa5ab,	// (0x00034c99) list_highlight_pane_g2_cp1

0xa5b3,	// (0x00034ca1) list_highlight_pane_g3_cp1

0xa5bb,	// (0x00034ca9) list_highlight_pane_g4_cp1

0xa5c3,	// (0x00034cb1) list_highlight_pane_g5_cp1

0xa5cb,	// (0x00034cb9) list_highlight_pane_g6_cp1

0xa5d3,	// (0x00034cc1) list_highlight_pane_g7_cp1

0xa5db,	// (0x00034cc9) list_highlight_pane_g8_cp1

0xa5e3,	// (0x00034cd1) list_highlight_pane_g9_cp1

0xa4bb,	// (0x00034ba9) form_field_slider_pane_t3

0xa4c9,	// (0x00034bb7) form_field_slider_pane_t4

0xa4d7,	// (0x00034bc5) slider_form_pane_ParamLimits

0xa4d7,	// (0x00034bc5) slider_form_pane

0x7729,	// (0x00031e17) control_abbreviations

0x7729,	// (0x00031e17) control_conventions

0x7729,	// (0x00031e17) control_definitions

0x7729,	// (0x00031e17) format_table_attribute

0xacbd,	// (0x000353ab) bg_popup_preview_window_pane_g9

0x7729,	// (0x00031e17) format_table_data2

0x7729,	// (0x00031e17) format_table_data3

0x7729,	// (0x00031e17) format_table_data_example

0x0008,

0x7729,	// (0x00031e17) intro_purpose

0xf8ef,	// (0x00039fdd) bg_popup_preview_window_pane_g

0x7729,	// (0x00031e17) texts_category

0x7729,	// (0x00031e17) texts_graphics

0x94f1,	// (0x00033bdf) text_digital

0x9500,	// (0x00033bee) text_primary

0x950f,	// (0x00033bfd) text_primary_small

0x951e,	// (0x00033c0c) text_secondary

0x952d,	// (0x00033c1b) text_title

0xb38c,	// (0x00035a7a) bg_passive_tab_pane_g1_cp3_srt

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp3_srt

0xb395,	// (0x00035a83) bg_passive_tab_pane_g3_cp3_srt

0x807a,	// (0x00032768) bg_active_tab_pane_cp3_srt_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp3_srt

0xb39e,	// (0x00035a8c) tabs_4_active_pane_srt_g1

0xb3a6,	// (0x00035a94) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a6,	// (0x00035a94) tabs_4_active_pane_srt_t1

0xb38c,	// (0x00035a7a) bg_active_tab_pane_g1_cp3_copy1

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp3_copy1

0xb395,	// (0x00035a83) bg_active_tab_pane_g3_cp3_copy1

0x807a,	// (0x00032768) tabs_2_long_active_pane_srt_ParamLimits

0x807a,	// (0x00032768) tabs_2_long_active_pane_srt

0x807a,	// (0x00032768) tabs_2_long_passive_pane_srt_ParamLimits

0x807a,	// (0x00032768) tabs_2_long_passive_pane_srt

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp4_srt

0xb0ec,	// (0x000357da) bg_passive_tab_pane_g1_cp4_srt

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp4_srt

0xb0f5,	// (0x000357e3) bg_passive_tab_pane_g3_cp4_srt

0x8a95,	// (0x00033183) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a95,	// (0x00033183) bg_active_tab_pane_cp4_srt

0xb0fe,	// (0x000357ec) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0fe,	// (0x000357ec) tabs_2_long_active_pane_srt_t1

0xb0ec,	// (0x000357da) bg_active_tab_pane_g1_cp4_srt

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp4_srt

0xb0f5,	// (0x000357e3) bg_active_tab_pane_g3_cp4_srt

0x82f5,	// (0x000329e3) tabs_3_long_active_pane_srt_ParamLimits

0x82f5,	// (0x000329e3) tabs_3_long_active_pane_srt

0x82f5,	// (0x000329e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x82f5,	// (0x000329e3) tabs_3_long_passive_pane_cp_srt

0x82f5,	// (0x000329e3) tabs_3_long_passive_pane_srt_ParamLimits

0x82f5,	// (0x000329e3) tabs_3_long_passive_pane_srt

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp5_srt

0x91ff,	// (0x000338ed) bg_passive_tab_pane_g1_cp5_srt

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp5_srt

0x9208,	// (0x000338f6) bg_passive_tab_pane_g3_cp5_srt

0x8a95,	// (0x00033183) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a95,	// (0x00033183) bg_active_tab_pane_cp5_srt

0xb0da,	// (0x000357c8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0da,	// (0x000357c8) tabs_3_long_active_pane_srt_t1

0x91ff,	// (0x000338ed) bg_active_tab_pane_g1_cp5_srt

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp5_srt

0x9208,	// (0x000338f6) bg_active_tab_pane_g3_cp5_srt

0xb0cc,	// (0x000357ba) navi_text_pane_srt_t1

0xb0c4,	// (0x000357b2) navi_icon_pane_srt_g1

0x96f2,	// (0x00033de0) midp_editing_number_pane_srt

0x953c,	// (0x00033c2a) midp_ticker_pane_srt

0x96fa,	// (0x00033de8) midp_ticker_pane_srt_g1

0x9702,	// (0x00033df0) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00039e60) midp_ticker_pane_srt_g

0x970a,	// (0x00033df8) midp_ticker_pane_srt_t1

0xb0b5,	// (0x000357a3) midp_editing_number_pane_t1_copy1

0x8ab6,	// (0x000331a4) listscroll_midp_pane

0x8ab6,	// (0x000331a4) midp_form_pane

0x95aa,	// (0x00033c98) midp_info_popup_window_ParamLimits

0x95aa,	// (0x00033c98) midp_info_popup_window

0x8980,	// (0x0003306e) bg_popup_sub_pane_cp50_ParamLimits

0x8980,	// (0x0003306e) bg_popup_sub_pane_cp50

0xa1d8,	// (0x000348c6) listscroll_midp_info_pane_ParamLimits

0xa1d8,	// (0x000348c6) listscroll_midp_info_pane

0xa1c0,	// (0x000348ae) listscroll_form_midp_pane_ParamLimits

0xa1c0,	// (0x000348ae) listscroll_form_midp_pane

0xa1cc,	// (0x000348ba) scroll_bar_cp050

0xa1a0,	// (0x0003488e) list_midp_pane

0xbdc1,	// (0x000364af) signal_pane_g2_cp

0xa0da,	// (0x000347c8) listscroll_midp_info_pane_t1_ParamLimits

0xa0da,	// (0x000347c8) listscroll_midp_info_pane_t1

0xa0f2,	// (0x000347e0) listscroll_midp_info_pane_t2_ParamLimits

0xa0f2,	// (0x000347e0) listscroll_midp_info_pane_t2

0xa130,	// (0x0003481e) listscroll_midp_info_pane_t3_ParamLimits

0xa130,	// (0x0003481e) listscroll_midp_info_pane_t3

0xa16a,	// (0x00034858) listscroll_midp_info_pane_t4_ParamLimits

0xa16a,	// (0x00034858) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00039f18) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00039f18) listscroll_midp_info_pane_t

0x8a42,	// (0x00033130) scroll_pane_cp21

0xa07c,	// (0x0003476a) form_midp_field_choice_group_pane

0xa085,	// (0x00034773) form_midp_field_text_pane

0xa0c0,	// (0x000347ae) form_midp_field_time_pane

0xa0c8,	// (0x000347b6) form_midp_gauge_slider_pane

0xa0d1,	// (0x000347bf) form_midp_gauge_wait_pane

0x7729,	// (0x00031e17) form_midp_image_pane

0x631c,	// (0x00030a0a) list_single_midp_pane_ParamLimits

0x631c,	// (0x00030a0a) list_single_midp_pane

0xa030,	// (0x0003471e) form_midp_field_text_pane_t1

0x9de8,	// (0x000344d6) input_focus_pane_cp050

0xa06b,	// (0x00034759) list_midp_form_text_pane

0x9fff,	// (0x000346ed) form_midp_field_choice_group_pane_t1

0xa00d,	// (0x000346fb) input_focus_pane_cp051

0xa021,	// (0x0003470f) list_midp_choice_pane

0x7729,	// (0x00031e17) status_idle_pane

0x9fe3,	// (0x000346d1) form_midp_field_time_pane_t1

0x771f,	// (0x00031e0d) wait_anim_pane_g2_copy1

0x9ff1,	// (0x000346df) form_midp_field_time_pane_t2

0x0001,

0x965a,	// (0x00033d48) aid_navinavi_width_2_pane

0xf825,	// (0x00039f13) form_midp_field_time_pane_t

0x7729,	// (0x00031e17) input_focus_pane_cp052

0x7729,	// (0x00031e17) bg_input_focus_pane_cp040

0x9fa3,	// (0x00034691) form_midp_gauge_slider_pane_t1

0x9fb1,	// (0x0003469f) form_midp_gauge_slider_pane_t2

0x9fbf,	// (0x000346ad) form_midp_gauge_slider_pane_t3

0x9fcd,	// (0x000346bb) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00039f0a) form_midp_gauge_slider_pane_t

0x9fdb,	// (0x000346c9) form_midp_slider_pane

0x807a,	// (0x00032768) bg_input_focus_pane_cp041_ParamLimits

0x807a,	// (0x00032768) bg_input_focus_pane_cp041

0x9f70,	// (0x0003465e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f70,	// (0x0003465e) form_midp_gauge_wait_pane_t1

0x9f82,	// (0x00034670) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f82,	// (0x00034670) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00039f05) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00039f05) form_midp_gauge_wait_pane_t

0x9f94,	// (0x00034682) form_midp_wait_pane_ParamLimits

0x9f94,	// (0x00034682) form_midp_wait_pane

0x9f3a,	// (0x00034628) form_midp_image_pane_g1

0x9f43,	// (0x00034631) form_midp_image_pane_t1

0x9f52,	// (0x00034640) form_midp_image_pane_t2

0x9f61,	// (0x0003464f) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00039efe) form_midp_image_pane_t

0x9f31,	// (0x0003461f) list_single_midp_pane_g1

0x630d,	// (0x000309fb) list_single_midp_pane_t1

0x9f02,	// (0x000345f0) list_midp_form_item_pane_ParamLimits

0x9f02,	// (0x000345f0) list_midp_form_item_pane

0x9602,	// (0x00033cf0) list_midp_form_item_pane_t1

0x9611,	// (0x00033cff) midp_ticker_pane_g1

0x961d,	// (0x00033d0b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00039e46) midp_ticker_pane_g

0x9629,	// (0x00033d17) midp_ticker_pane_t1

0xb2f8,	// (0x000359e6) midp_editing_number_pane_t1

0xb2d6,	// (0x000359c4) midp_editing_number_pane

0xb2e5,	// (0x000359d3) midp_ticker_pane

0xb0a5,	// (0x00035793) ai_message_heading_pane

0x7729,	// (0x00031e17) bg_popup_window_pane_cp14

0xb0ad,	// (0x0003579b) listscroll_ai_message_pane

0xb02f,	// (0x0003571d) ai_message_heading_pane_g1_ParamLimits

0xb02f,	// (0x0003571d) ai_message_heading_pane_g1

0xb03b,	// (0x00035729) ai_message_heading_pane_g2_ParamLimits

0xb03b,	// (0x00035729) ai_message_heading_pane_g2

0xb047,	// (0x00035735) ai_message_heading_pane_g3_ParamLimits

0xb047,	// (0x00035735) ai_message_heading_pane_g3

0xb053,	// (0x00035741) ai_message_heading_pane_g4_ParamLimits

0xb053,	// (0x00035741) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a03f) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a03f) ai_message_heading_pane_g

0xb05f,	// (0x0003574d) ai_message_heading_pane_t1_ParamLimits

0xb05f,	// (0x0003574d) ai_message_heading_pane_t1

0xb079,	// (0x00035767) ai_message_heading_pane_t2_ParamLimits

0xb079,	// (0x00035767) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a048) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a048) ai_message_heading_pane_t

0xb08b,	// (0x00035779) bg_popup_heading_pane_cp1_ParamLimits

0xb08b,	// (0x00035779) bg_popup_heading_pane_cp1

0xb01d,	// (0x0003570b) list_ai_message_pane_ParamLimits

0xb01d,	// (0x0003570b) list_ai_message_pane

0x8a42,	// (0x00033130) scroll_pane_cp10

0xafb9,	// (0x000356a7) list_ai_message_pane_g1

0xafc1,	// (0x000356af) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a01c) list_ai_message_pane_g

0xafc9,	// (0x000356b7) list_ai_message_pane_t1_ParamLimits

0xafc9,	// (0x000356b7) list_ai_message_pane_t1

0xafde,	// (0x000356cc) list_ai_message_pane_t2_ParamLimits

0xafde,	// (0x000356cc) list_ai_message_pane_t2

0xaff3,	// (0x000356e1) list_ai_message_pane_t3_ParamLimits

0xaff3,	// (0x000356e1) list_ai_message_pane_t3

0xb008,	// (0x000356f6) list_ai_message_pane_t4_ParamLimits

0xb008,	// (0x000356f6) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a021) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a021) list_ai_message_pane_t

0xafa3,	// (0x00035691) cell_ai_soft_ind_pane_ParamLimits

0xafa3,	// (0x00035691) cell_ai_soft_ind_pane

0x963b,	// (0x00033d29) cell_ai_soft_ind_pane_g1_ParamLimits

0x963b,	// (0x00033d29) cell_ai_soft_ind_pane_g1

0x7729,	// (0x00031e17) grid_highlight_cp1

0x9648,	// (0x00033d36) text_secondary_cp56_ParamLimits

0x9648,	// (0x00033d36) text_secondary_cp56

0xaf78,	// (0x00035666) example_general_pane_ParamLimits

0xaf78,	// (0x00035666) example_general_pane

0xaf84,	// (0x00035672) example_parent_pane_g1_ParamLimits

0xaf84,	// (0x00035672) example_parent_pane_g1

0xaf90,	// (0x0003567e) example_parent_pane_t1_ParamLimits

0xaf90,	// (0x0003567e) example_parent_pane_t1

0x5ee5,	// (0x000305d3) popup_preview_text_window_ParamLimits

0x5ee5,	// (0x000305d3) popup_preview_text_window

0x9479,	// (0x00033b67) list_single_pane_cp2_g4

0x839f,	// (0x00032a8d) bg_popup_preview_window_pane_ParamLimits

0x839f,	// (0x00032a8d) bg_popup_preview_window_pane

0xacc5,	// (0x000353b3) popup_preview_text_window_t1_ParamLimits

0xacc5,	// (0x000353b3) popup_preview_text_window_t1

0xace3,	// (0x000353d1) popup_preview_text_window_t2_ParamLimits

0xace3,	// (0x000353d1) popup_preview_text_window_t2

0xad2c,	// (0x0003541a) popup_preview_text_window_t3_ParamLimits

0xad2c,	// (0x0003541a) popup_preview_text_window_t3

0xad71,	// (0x0003545f) popup_preview_text_window_t4_ParamLimits

0xad71,	// (0x0003545f) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00039ff0) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00039ff0) popup_preview_text_window_t

0xadef,	// (0x000354dd) scroll_pane_cp11

0x9d74,	// (0x00034462) bg_popup_preview_window_pane_g1

0xac85,	// (0x00035373) bg_popup_preview_window_pane_g2

0xac8d,	// (0x0003537b) bg_popup_preview_window_pane_g3

0xac95,	// (0x00035383) bg_popup_preview_window_pane_g4

0xac9d,	// (0x0003538b) bg_popup_preview_window_pane_g5

0xaca5,	// (0x00035393) bg_popup_preview_window_pane_g6

0xacad,	// (0x0003539b) bg_popup_preview_window_pane_g7

0xacb5,	// (0x000353a3) bg_popup_preview_window_pane_g8

0x4985,	// (0x0002f073) aid_popup_width_pane

0x5ec3,	// (0x000305b1) popup_midp_note_alarm_window_ParamLimits

0x5ec3,	// (0x000305b1) popup_midp_note_alarm_window

0x88c8,	// (0x00032fb6) data_form_pane_ParamLimits

0x534a,	// (0x0002fa38) form_field_data_pane_g1

0x5354,	// (0x0002fa42) form_field_data_pane_t1_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_ParamLimits

0x536e,	// (0x0002fa5c) data_form_wide_pane_ParamLimits

0x537f,	// (0x0002fa6d) form_field_data_wide_pane_g1

0x538b,	// (0x0002fa79) form_field_data_wide_pane_t1_ParamLimits

0x8645,	// (0x00032d33) input_focus_pane_cp6_ParamLimits

0x89ed,	// (0x000330db) input_popup_find_pane_g1_ParamLimits

0x89ed,	// (0x000330db) input_popup_find_pane_g1

0x55e2,	// (0x0002fcd0) aid_navi_side_left_pane

0x55f7,	// (0x0002fce5) aid_navi_side_right_pane

0xa69e,	// (0x00034d8c) bg_popup_window_pane_cp30_ParamLimits

0xa69e,	// (0x00034d8c) bg_popup_window_pane_cp30

0xa718,	// (0x00034e06) popup_midp_note_alarm_window_g1_ParamLimits

0xa718,	// (0x00034e06) popup_midp_note_alarm_window_g1

0xa748,	// (0x00034e36) popup_midp_note_alarm_window_t1_ParamLimits

0xa748,	// (0x00034e36) popup_midp_note_alarm_window_t1

0xa7e9,	// (0x00034ed7) popup_midp_note_alarm_window_t2_ParamLimits

0xa7e9,	// (0x00034ed7) popup_midp_note_alarm_window_t2

0xa897,	// (0x00034f85) popup_midp_note_alarm_window_t3_ParamLimits

0xa897,	// (0x00034f85) popup_midp_note_alarm_window_t3

0xa8c9,	// (0x00034fb7) popup_midp_note_alarm_window_t4_ParamLimits

0xa8c9,	// (0x00034fb7) popup_midp_note_alarm_window_t4

0xa8ef,	// (0x00034fdd) popup_midp_note_alarm_window_t5_ParamLimits

0xa8ef,	// (0x00034fdd) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00039f8d) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00039f8d) popup_midp_note_alarm_window_t

0xa99b,	// (0x00035089) wait_bar_pane_cp1_ParamLimits

0xa99b,	// (0x00035089) wait_bar_pane_cp1

0x7729,	// (0x00031e17) wait_anim_pane_copy1

0x7729,	// (0x00031e17) wait_border_pane_copy1

0xa37c,	// (0x00034a6a) wait_border_pane_g1_copy1

0x53a5,	// (0x0002fa93) form_field_popup_pane_g1

0x53ad,	// (0x0002fa9b) form_field_popup_pane_t1_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_cp7_ParamLimits

0x8902,	// (0x00032ff0) list_form_pane_ParamLimits

0x53c7,	// (0x0002fab5) form_field_popup_wide_pane_g1

0x53cf,	// (0x0002fabd) form_field_popup_wide_pane_t1_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_cp8_ParamLimits

0x890e,	// (0x00032ffc) list_form_wide_pane_ParamLimits

0xb421,	// (0x00035b0f) aid_size_cell_graphic_pane

0x5454,	// (0x0002fb42) data_form_pane_t1_ParamLimits

0x7831,	// (0x00031f1f) data_form_wide_pane_t1_ParamLimits

0x9949,	// (0x00034037) bg_status_flat_pane

0x7769,	// (0x00031e57) title_pane_t1_ParamLimits

0x77d1,	// (0x00031ebf) title_pane_t2_ParamLimits

0x77f7,	// (0x00031ee5) title_pane_t3_ParamLimits

0xf557,	// (0x00039c45) title_pane_t_ParamLimits

0x8eb9,	// (0x000335a7) level_1_signal_ParamLimits

0x8ec6,	// (0x000335b4) level_2_signal_ParamLimits

0x8ed3,	// (0x000335c1) level_3_signal_ParamLimits

0x8ee0,	// (0x000335ce) level_4_signal_ParamLimits

0x8eed,	// (0x000335db) level_5_signal_ParamLimits

0x8efa,	// (0x000335e8) level_6_signal_ParamLimits

0x8f07,	// (0x000335f5) level_7_signal_ParamLimits

0x8eb9,	// (0x000335a7) level_1_battery_ParamLimits

0x8ec6,	// (0x000335b4) level_2_battery_ParamLimits

0x8ed3,	// (0x000335c1) level_3_battery_ParamLimits

0x8ee0,	// (0x000335ce) level_4_battery_ParamLimits

0x8eed,	// (0x000335db) level_5_battery_ParamLimits

0x8efa,	// (0x000335e8) level_6_battery_ParamLimits

0x8f07,	// (0x000335f5) level_7_battery_ParamLimits

0xa5a3,	// (0x00034c91) bg_status_flat_pane_g1

0xa5ab,	// (0x00034c99) bg_status_flat_pane_g2

0xa5b3,	// (0x00034ca1) bg_status_flat_pane_g3

0xa5bb,	// (0x00034ca9) bg_status_flat_pane_g4

0xa5c3,	// (0x00034cb1) bg_status_flat_pane_g5

0xa5cb,	// (0x00034cb9) bg_status_flat_pane_g6

0xa5d3,	// (0x00034cc1) bg_status_flat_pane_g7

0x8090,	// (0x0003277e) tabs_3_active_pane_t1_ParamLimits

0x8090,	// (0x0003277e) tabs_3_passive_pane_t1_ParamLimits

0x80aa,	// (0x00032798) tabs_4_active_pane_t1_ParamLimits

0x80aa,	// (0x00032798) tabs_4_1_passive_pane_t1_ParamLimits

0x8a83,	// (0x00033171) tabs_2_active_pane_t1_ParamLimits

0x8a83,	// (0x00033171) tabs_2_passive_pane_t1_ParamLimits

0x8a95,	// (0x00033183) bg_active_tab_pane_cp4_ParamLimits

0x8aa3,	// (0x00033191) tabs_2_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp4_ParamLimits

0x61ea,	// (0x000308d8) list_single_midp_graphic_pane_t1_ParamLimits

0x8a95,	// (0x00033183) bg_active_tab_pane_cp5_ParamLimits

0x8ac2,	// (0x000331b0) tabs_3_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x000331a4) bg_passive_tab_pane_cp5_ParamLimits

0x61ea,	// (0x000308d8) list_single_midp_graphic_pane_t1

0x9949,	// (0x00034037) bg_status_flat_pane_ParamLimits

0x9a0c,	// (0x000340fa) indicator_pane_cp2_ParamLimits

0x9a0c,	// (0x000340fa) indicator_pane_cp2

0x9b37,	// (0x00034225) navi_pane_srt_ParamLimits

0x9b37,	// (0x00034225) navi_pane_srt

0x9b5b,	// (0x00034249) popup_clock_digital_analogue_window_cp1

0x8157,	// (0x00032845) indicator_pane_t1

0x953c,	// (0x00033c2a) copy_highlight_pane

0x953c,	// (0x00033c2a) cursor_graphics_pane

0x953c,	// (0x00033c2a) graphic_within_text_pane

0x953c,	// (0x00033c2a) link_highlight_pane

0xadb2,	// (0x000354a0) popup_preview_text_window_t5_ParamLimits

0xadb2,	// (0x000354a0) popup_preview_text_window_t5

0x9662,	// (0x00033d50) cursor_digital_pane

0x9662,	// (0x00033d50) cursor_primary_pane

0x9673,	// (0x00033d61) cursor_primary_small_pane

0x967b,	// (0x00033d69) cursor_secondary_pane

0x9683,	// (0x00033d71) cursor_title_pane

0x9662,	// (0x00033d50) link_highlight_digital_pane

0x966a,	// (0x00033d58) link_highlight_primary_pane

0x9673,	// (0x00033d61) link_highlight_primary_small_pane

0x967b,	// (0x00033d69) link_highlight_secondary_pane

0x9683,	// (0x00033d71) link_highlight_title_pane

0x9662,	// (0x00033d50) copy_highlight_digital_pane

0x9662,	// (0x00033d50) copy_highlight_primary_pane

0x9673,	// (0x00033d61) copy_highlight_primary_small_pane

0x967b,	// (0x00033d69) copy_highlight_secondary_pane

0x9683,	// (0x00033d71) copy_highlight_title_pane

0x967b,	// (0x00033d69) graphic_text_digital_pane

0xa641,	// (0x00034d2f) graphic_text_primary_pane

0xa64a,	// (0x00034d38) graphic_text_primary_small_pane

0x9673,	// (0x00033d61) graphic_text_secondary_pane

0x9662,	// (0x00033d50) graphic_text_title_pane

0x968b,	// (0x00033d79) cursor_primary_pane_g1

0xa633,	// (0x00034d21) cursor_text_primary_t1

0xa61b,	// (0x00034d09) cursor_primary_small_pane_g1

0xa625,	// (0x00034d13) cursor_text_primary_small_t1

0xa603,	// (0x00034cf1) cursor_primary_small_pane_g1_copy1

0xa60d,	// (0x00034cfb) cursor_text_primary_small_t1_copy1

0xa5eb,	// (0x00034cd9) cursor_text_title_t1

0xa5f9,	// (0x00034ce7) cursor_title_pane_g1

0x968b,	// (0x00033d79) cursor_digital_pane_g1

0x9695,	// (0x00033d83) cursor_text_digital_t1

0xa58c,	// (0x00034c7a) link_highlight_primary_pane_g1

0xa594,	// (0x00034c82) link_highlight_primary_pane_t1

0x96a3,	// (0x00033d91) link_highlight_primary_small_pane_g1

0x96ab,	// (0x00033d99) link_highlight_primary_small_pane_t1

0x96a3,	// (0x00033d91) link_highlight_secondary_pane_g1

0x96ba,	// (0x00033da8) link_highlight_secondary_pane_t1

0xa500,	// (0x00034bee) link_highlight_title_pane_g1

0xa508,	// (0x00034bf6) link_highlight_title_pane_t1

0xa4e9,	// (0x00034bd7) link_highlight_digital_pane_g1

0xa4f1,	// (0x00034bdf) link_highlight_digital_pane_t1

0xa3c1,	// (0x00034aaf) copy_highlight_primary_pane_g1

0xa3c9,	// (0x00034ab7) copy_highlight_primary_pane_t1

0xa39b,	// (0x00034a89) copy_highlight_primary_small_pane_g1

0xa3b2,	// (0x00034aa0) copy_highlight_primary_small_pane_t1

0x96c9,	// (0x00033db7) copy_highlight_secondary_pane_g1

0x96d1,	// (0x00033dbf) copy_highlight_secondary_pane_t1

0xa39b,	// (0x00034a89) copy_highlight_title_pane_g1

0xa3a3,	// (0x00034a91) copy_highlight_title_pane_t1

0xa3c1,	// (0x00034aaf) copy_highlight_digital_pane_g1

0xb5ec,	// (0x00035cda) copy_highlight_digital_pane_t1

0xb540,	// (0x00035c2e) graphic_text_primary_pane_g1

0xb5d0,	// (0x00035cbe) graphic_text_primary_pane_t1

0xb5de,	// (0x00035ccc) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a0bc) graphic_text_primary_pane_t

0xb5ac,	// (0x00035c9a) graphic_text_primary_small_pane_g1

0xb5b4,	// (0x00035ca2) graphic_text_primary_small_pane_t1

0xb5c2,	// (0x00035cb0) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a0b7) graphic_text_primary_small_pane_t

0xb588,	// (0x00035c76) graphic_text_secondary_pane_g1

0xb590,	// (0x00035c7e) graphic_text_secondary_pane_t1

0xb59e,	// (0x00035c8c) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a0b2) graphic_text_secondary_pane_t

0xb564,	// (0x00035c52) graphic_text_title_pane_g1

0xb56c,	// (0x00035c5a) graphic_text_title_pane_t1

0xb57a,	// (0x00035c68) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a0ad) graphic_text_title_pane_t

0xb540,	// (0x00035c2e) graphic_text_digital_pane_g1

0xb548,	// (0x00035c36) graphic_text_digital_pane_t1

0xb556,	// (0x00035c44) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a0a8) graphic_text_digital_pane_t

0x807a,	// (0x00032768) navi_icon_pane_srt_ParamLimits

0x807a,	// (0x00032768) navi_icon_pane_srt

0x7729,	// (0x00031e17) navi_midp_pane_srt

0x7729,	// (0x00031e17) navi_navi_pane_srt

0x807a,	// (0x00032768) navi_text_pane_srt_ParamLimits

0x807a,	// (0x00032768) navi_text_pane_srt

0xb50b,	// (0x00035bf9) navi_navi_icon_text_pane_srt

0xb513,	// (0x00035c01) navi_navi_pane_srt_g1_ParamLimits

0xb513,	// (0x00035c01) navi_navi_pane_srt_g1

0xb525,	// (0x00035c13) navi_navi_pane_srt_g2_ParamLimits

0xb525,	// (0x00035c13) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a0a3) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a0a3) navi_navi_pane_srt_g

0xb537,	// (0x00035c25) navi_navi_tabs_pane_srt

0xb50b,	// (0x00035bf9) navi_navi_text_pane_srt

0xb50b,	// (0x00035bf9) navi_navi_volume_pane_srt

0xb4fc,	// (0x00035bea) navi_navi_text_pane_srt_t1

0x6617,	// (0x00030d05) navi_navi_volume_pane_srt_g1

0x661f,	// (0x00030d0d) volume_small_pane_srt_ParamLimits

0x661f,	// (0x00030d0d) volume_small_pane_srt

0x5945,	// (0x00030033) volume_small_pane_srt_g1_ParamLimits

0x5945,	// (0x00030033) volume_small_pane_srt_g1

0x5955,	// (0x00030043) volume_small_pane_srt_g2_ParamLimits

0x5955,	// (0x00030043) volume_small_pane_srt_g2

0x5966,	// (0x00030054) volume_small_pane_srt_g3_ParamLimits

0x5966,	// (0x00030054) volume_small_pane_srt_g3

0x5977,	// (0x00030065) volume_small_pane_srt_g4_ParamLimits

0x5977,	// (0x00030065) volume_small_pane_srt_g4

0x5988,	// (0x00030076) volume_small_pane_srt_g5_ParamLimits

0x5988,	// (0x00030076) volume_small_pane_srt_g5

0x5999,	// (0x00030087) volume_small_pane_srt_g6_ParamLimits

0x5999,	// (0x00030087) volume_small_pane_srt_g6

0x59aa,	// (0x00030098) volume_small_pane_srt_g7_ParamLimits

0x59aa,	// (0x00030098) volume_small_pane_srt_g7

0x59bb,	// (0x000300a9) volume_small_pane_srt_g8_ParamLimits

0x59bb,	// (0x000300a9) volume_small_pane_srt_g8

0x59cc,	// (0x000300ba) volume_small_pane_srt_g9_ParamLimits

0x59cc,	// (0x000300ba) volume_small_pane_srt_g9

0x59dd,	// (0x000300cb) volume_small_pane_srt_g10_ParamLimits

0x59dd,	// (0x000300cb) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00039e4b) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00039e4b) volume_small_pane_srt_g

0x8448,	// (0x00032b36) query_popup_data_pane_cp2

0xb4e2,	// (0x00035bd0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e2,	// (0x00035bd0) navi_navi_icon_text_pane_srt_t1

0xa641,	// (0x00034d2f) navi_tabs_2_long_pane_srt

0xa641,	// (0x00034d2f) navi_tabs_2_pane_srt

0xa641,	// (0x00034d2f) navi_tabs_3_long_pane_srt

0xa641,	// (0x00034d2f) navi_tabs_3_pane_srt

0xa641,	// (0x00034d2f) navi_tabs_4_pane_srt

0x65f7,	// (0x00030ce5) tabs_2_active_pane_srt_ParamLimits

0x65f7,	// (0x00030ce5) tabs_2_active_pane_srt

0x6607,	// (0x00030cf5) tabs_2_passive_pane_srt_ParamLimits

0x6607,	// (0x00030cf5) tabs_2_passive_pane_srt

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp1_srt

0xb4ae,	// (0x00035b9c) bg_passive_tab_pane_g1_cp1_srt

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00035ba5) bg_passive_tab_pane_g3_cp1_srt

0x807a,	// (0x00032768) bg_active_tab_pane_cp1_srt_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp1_srt

0xb4c0,	// (0x00035bae) tabs_2_active_pane_srt_g1

0xb4c8,	// (0x00035bb6) tabs_2_active_pane_srt_t1_ParamLimits

0xb4c8,	// (0x00035bb6) tabs_2_active_pane_srt_t1

0xb4ae,	// (0x00035b9c) bg_active_tab_pane_g1_cp1_srt

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00035ba5) bg_active_tab_pane_g3_cp1_srt

0x65c4,	// (0x00030cb2) tabs_3_active_pane_srt_ParamLimits

0x65c4,	// (0x00030cb2) tabs_3_active_pane_srt

0x65d5,	// (0x00030cc3) tabs_3_passive_pane_cp_srt_ParamLimits

0x65d5,	// (0x00030cc3) tabs_3_passive_pane_cp_srt

0x65e6,	// (0x00030cd4) tabs_3_passive_pane_srt_ParamLimits

0x65e6,	// (0x00030cd4) tabs_3_passive_pane_srt

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9876,	// (0x00033f64) bg_passive_tab_pane_cp2_srt

0x96e0,	// (0x00033dce) bg_passive_tab_pane_g1_cp2_srt

0x9175,	// (0x00033863) bg_passive_tab_pane_g2_cp2_srt

0x96e9,	// (0x00033dd7) bg_passive_tab_pane_g3_cp2_srt

0x807a,	// (0x00032768) bg_active_tab_pane_cp2_srt_ParamLimits

0x807a,	// (0x00032768) bg_active_tab_pane_cp2_srt

0xb494,	// (0x00035b82) tabs_3_active_pane_srt_g1

0xb49c,	// (0x00035b8a) tabs_3_active_pane_srt_t1_ParamLimits

0xb49c,	// (0x00035b8a) tabs_3_active_pane_srt_t1

0x96e0,	// (0x00033dce) bg_active_tab_pane_g1_cp2_srt

0x9175,	// (0x00033863) bg_active_tab_pane_g2_cp2_srt

0x96e9,	// (0x00033dd7) bg_active_tab_pane_g3_cp2_srt

0x657c,	// (0x00030c6a) tabs_4_active_pane_srt_ParamLimits

0x657c,	// (0x00030c6a) tabs_4_active_pane_srt

0x658e,	// (0x00030c7c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x658e,	// (0x00030c7c) tabs_4_passive_pane_cp2_srt

0x5b40,	// (0x0003022e) aid_size_cell_toolbar

0x8ab6,	// (0x000331a4) main_idle_act_pane_ParamLimits

0x5cf7,	// (0x000303e5) popup_large_graphic_colour_window_ParamLimits

0x605c,	// (0x0003074a) popup_toolbar_window_ParamLimits

0x605c,	// (0x0003074a) popup_toolbar_window

0xb307,	// (0x000359f5) list_single_graphic_2heading_pane_ParamLimits

0xb307,	// (0x000359f5) list_single_graphic_2heading_pane

0x8c6f,	// (0x0003335d) aid_size_cell_apps_grid_lsc_pane

0x8c81,	// (0x0003336f) aid_size_cell_apps_grid_prt_pane

0x9876,	// (0x00033f64) bg_wml_button_pane_cp1_ParamLimits

0x9876,	// (0x00033f64) bg_wml_button_pane_cp1

0xa030,	// (0x0003471e) form_midp_field_text_pane_t1_ParamLimits

0x9de8,	// (0x000344d6) input_focus_pane_cp050_ParamLimits

0xa06b,	// (0x00034759) list_midp_form_text_pane_ParamLimits

0xa00d,	// (0x000346fb) input_focus_pane_cp051_ParamLimits

0xa021,	// (0x0003470f) list_midp_choice_pane_ParamLimits

0x9e9e,	// (0x0003458c) list_single_2graphic_pane_cp3_ParamLimits

0x9e9e,	// (0x0003458c) list_single_2graphic_pane_cp3

0x9ec9,	// (0x000345b7) list_single_midp_graphic_pane_ParamLimits

0x9ec9,	// (0x000345b7) list_single_midp_graphic_pane

0x490f,	// (0x0002effd) list_single_graphic_2heading_pane_g1_ParamLimits

0x490f,	// (0x0002effd) list_single_graphic_2heading_pane_g1

0x491b,	// (0x0002f009) list_single_graphic_2heading_pane_g4_ParamLimits

0x491b,	// (0x0002f009) list_single_graphic_2heading_pane_g4

0x4927,	// (0x0002f015) list_single_graphic_2heading_pane_g5_ParamLimits

0x4927,	// (0x0002f015) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00039e9e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00039e9e) list_single_graphic_2heading_pane_g

0x4933,	// (0x0002f021) list_single_graphic_2heading_pane_t1_ParamLimits

0x4933,	// (0x0002f021) list_single_graphic_2heading_pane_t1

0x4947,	// (0x0002f035) list_single_graphic_2heading_pane_t2_ParamLimits

0x4947,	// (0x0002f035) list_single_graphic_2heading_pane_t2

0x4961,	// (0x0002f04f) list_single_graphic_2heading_pane_t3_ParamLimits

0x4961,	// (0x0002f04f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00039ea5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00039ea5) list_single_graphic_2heading_pane_t

0x9cb2,	// (0x000343a0) bg_popup_sub_pane_cp2

0x9cdc,	// (0x000343ca) grid_toobar_pane

0x6107,	// (0x000307f5) cell_toolbar_pane_ParamLimits

0x6107,	// (0x000307f5) cell_toolbar_pane

0x9d18,	// (0x00034406) cell_toolbar_pane_g1_ParamLimits

0x9d18,	// (0x00034406) cell_toolbar_pane_g1

0x9d2c,	// (0x0003441a) cell_toolbar_pane_g2_ParamLimits

0x9d2c,	// (0x0003441a) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00039eb3) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00039eb3) cell_toolbar_pane_g

0x9d4e,	// (0x0003443c) grid_highlight_pane_cp2_ParamLimits

0x9d4e,	// (0x0003443c) grid_highlight_pane_cp2

0x9d68,	// (0x00034456) toolbar_button_pane

0x9d74,	// (0x00034462) toolbar_button_pane_g1

0x9d7c,	// (0x0003446a) toolbar_button_pane_g2

0x9d84,	// (0x00034472) toolbar_button_pane_g3

0x9d8c,	// (0x0003447a) toolbar_button_pane_g4

0x9d94,	// (0x00034482) toolbar_button_pane_g5

0x9d9c,	// (0x0003448a) toolbar_button_pane_g6

0x9da4,	// (0x00034492) toolbar_button_pane_g7

0x9dac,	// (0x0003449a) toolbar_button_pane_g8

0x9db4,	// (0x000344a2) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00039eb8) toolbar_button_pane_g

0x6161,	// (0x0003084f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6161,	// (0x0003084f) list_single_2graphic_pane_g1_cp3

0x616d,	// (0x0003085b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x616d,	// (0x0003085b) list_single_2graphic_pane_g2_cp3

0x617e,	// (0x0003086c) list_single_2graphic_pane_g3_cp3

0x6186,	// (0x00030874) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6186,	// (0x00030874) list_single_2graphic_pane_g4_cp3

0x6192,	// (0x00030880) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6192,	// (0x00030880) list_single_2graphic_pane_t1_cp3

0x61de,	// (0x000308cc) list_single_midp_graphic_pane_g2_ParamLimits

0x61de,	// (0x000308cc) list_single_midp_graphic_pane_g2

0x5b48,	// (0x00030236) aid_zoom_text_primary

0x48f3,	// (0x0002efe1) aid_zoom_text_secondary

0x979a,	// (0x00033e88) status_small_pane_g7_ParamLimits

0x979a,	// (0x00033e88) status_small_pane_g7

0x97bd,	// (0x00033eab) status_small_pane_t1_ParamLimits

0x7740,	// (0x00031e2e) title_pane_g2

0x0003,

0xf54e,	// (0x00039c3c) title_pane_g

0x84ec,	// (0x00032bda) aid_size_cell_colour_1_pane_ParamLimits

0x84ec,	// (0x00032bda) aid_size_cell_colour_1_pane

0x8500,	// (0x00032bee) aid_size_cell_colour_2_pane_ParamLimits

0x8500,	// (0x00032bee) aid_size_cell_colour_2_pane

0x8514,	// (0x00032c02) aid_size_cell_colour_3_pane_ParamLimits

0x8514,	// (0x00032c02) aid_size_cell_colour_3_pane

0x8528,	// (0x00032c16) aid_size_cell_colour_4_pane_ParamLimits

0x8528,	// (0x00032c16) aid_size_cell_colour_4_pane

0x551e,	// (0x0002fc0c) title_pane_stacon_g1_ParamLimits

0x551e,	// (0x0002fc0c) title_pane_stacon_g1

0xa420,	// (0x00034b0e) popup_note_wait_window_g3_ParamLimits

0xa420,	// (0x00034b0e) popup_note_wait_window_g3

0xa496,	// (0x00034b84) popup_note_wait_window_t5_ParamLimits

0xa496,	// (0x00034b84) popup_note_wait_window_t5

0x7729,	// (0x00031e17) main_feb_china_hwr_fs_writing_pane

0x5be0,	// (0x000302ce) popup_feb_china_hwr_fs_window_ParamLimits

0x5be0,	// (0x000302ce) popup_feb_china_hwr_fs_window

0x6270,	// (0x0003095e) aid_size_cell_hwr_fs_ParamLimits

0x6270,	// (0x0003095e) aid_size_cell_hwr_fs

0x9de8,	// (0x000344d6) bg_popup_sub_pane_cp3_ParamLimits

0x9de8,	// (0x000344d6) bg_popup_sub_pane_cp3

0x6285,	// (0x00030973) grid_hwr_fs_pane_ParamLimits

0x6285,	// (0x00030973) grid_hwr_fs_pane

0x629d,	// (0x0003098b) linegrid_hwr_fs_pane_ParamLimits

0x629d,	// (0x0003098b) linegrid_hwr_fs_pane

0x62ad,	// (0x0003099b) cell_hwr_fs_pane_ParamLimits

0x62ad,	// (0x0003099b) cell_hwr_fs_pane

0x9df4,	// (0x000344e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x9df4,	// (0x000344e2) linegrid_hwr_fs_pane_g1

0x9e00,	// (0x000344ee) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e00,	// (0x000344ee) linegrid_hwr_fs_pane_g2

0x9e12,	// (0x00034500) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e12,	// (0x00034500) linegrid_hwr_fs_pane_g3

0x62cf,	// (0x000309bd) linegrid_hwr_fs_pane_g4_ParamLimits

0x62cf,	// (0x000309bd) linegrid_hwr_fs_pane_g4

0x62e9,	// (0x000309d7) linegrid_hwr_fs_pane_g5_ParamLimits

0x62e9,	// (0x000309d7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00039ee3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00039ee3) linegrid_hwr_fs_pane_g

0x9e1e,	// (0x0003450c) cell_hwr_fs_pane_g1_ParamLimits

0x9e1e,	// (0x0003450c) cell_hwr_fs_pane_g1

0x9be9,	// (0x000342d7) cell_hwr_fs_pane_g2_ParamLimits

0x9be9,	// (0x000342d7) cell_hwr_fs_pane_g2

0x9e34,	// (0x00034522) cell_hwr_fs_pane_g3_ParamLimits

0x9e34,	// (0x00034522) cell_hwr_fs_pane_g3

0x9e41,	// (0x0003452f) cell_hwr_fs_pane_g4_ParamLimits

0x9e41,	// (0x0003452f) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00039eee) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00039eee) cell_hwr_fs_pane_g

0x62ff,	// (0x000309ed) cell_hwr_fs_pane_t1

0x7729,	// (0x00031e17) grid_highlight_pane_cp6

0x7729,	// (0x00031e17) main_idle_act2_pane

0x8a29,	// (0x00033117) aid_inside_area_popup_secondary

0xaad5,	// (0x000351c3) aid_inside_area_window_primary_ParamLimits

0xaad5,	// (0x000351c3) aid_inside_area_window_primary

0xb5fb,	// (0x00035ce9) ai2_news_ticker_pane

0xb603,	// (0x00035cf1) aid_size_cell_ai1_link_ParamLimits

0xb603,	// (0x00035cf1) aid_size_cell_ai1_link

0xb61d,	// (0x00035d0b) popup_ai2_data_window_ParamLimits

0xb61d,	// (0x00035d0b) popup_ai2_data_window

0xb631,	// (0x00035d1f) popup_ai2_link_window_ParamLimits

0xb631,	// (0x00035d1f) popup_ai2_link_window

0x9de8,	// (0x000344d6) bg_popup_sub_pane_cp4_ParamLimits

0x9de8,	// (0x000344d6) bg_popup_sub_pane_cp4

0xb645,	// (0x00035d33) grid_ai2_link_pane_ParamLimits

0xb645,	// (0x00035d33) grid_ai2_link_pane

0xb65c,	// (0x00035d4a) popup_ai2_link_window_g1_ParamLimits

0xb65c,	// (0x00035d4a) popup_ai2_link_window_g1

0xb668,	// (0x00035d56) popup_ai2_link_window_g2_ParamLimits

0xb668,	// (0x00035d56) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a0c1) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a0c1) popup_ai2_link_window_g

0xb677,	// (0x00035d65) ai2_mp_button_pane

0xb67f,	// (0x00035d6d) ai2_mp_volume_pane

0xa00d,	// (0x000346fb) bg_popup_sub_pane_cp5_ParamLimits

0xa00d,	// (0x000346fb) bg_popup_sub_pane_cp5

0xb687,	// (0x00035d75) heading_ai2_gene_pane_ParamLimits

0xb687,	// (0x00035d75) heading_ai2_gene_pane

0xb693,	// (0x00035d81) list_ai2_gene_pane_ParamLimits

0xb693,	// (0x00035d81) list_ai2_gene_pane

0xb6db,	// (0x00035dc9) cell_ai2_link_pane_ParamLimits

0xb6db,	// (0x00035dc9) cell_ai2_link_pane

0xb6f1,	// (0x00035ddf) cell_ai2_link_pane_g1

0x7729,	// (0x00031e17) grid_highlight_pane_cp7

0x6634,	// (0x00030d22) ai2_mp_volume_pane_g1

0xb7c2,	// (0x00035eb0) ai2_mp_volume_pane_g2

0xb737,	// (0x00035e25) list_ai2_gene_pane_t1

0xb7ca,	// (0x00035eb8) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a0da) ai2_mp_volume_pane_g

0x663c,	// (0x00030d2a) volume_small_pane_cp3

0xb7d2,	// (0x00035ec0) aid_size_cell_ai2_button

0xb7da,	// (0x00035ec8) grid_ai2_button_pane

0xb7e3,	// (0x00035ed1) cell_ai2_button_pane_ParamLimits

0xb7e3,	// (0x00035ed1) cell_ai2_button_pane

0x771f,	// (0x00031e0d) cell_ai2_button_pane_g1

0x7729,	// (0x00031e17) grid_highlight_pane_cp8

0xb782,	// (0x00035e70) ai2_gene_pane_t1_ParamLimits

0xb782,	// (0x00035e70) ai2_gene_pane_t1

0x5b36,	// (0x00030224) aid_height_parent_landscape

0xb146,	// (0x00035834) aid_height_set_list

0xb157,	// (0x00035845) aid_size_parent

0xb421,	// (0x00035b0f) aid_size_cell_graphic_pane_ParamLimits

0xb6a3,	// (0x00035d91) popup_ai2_data_window_g1_ParamLimits

0xb6a3,	// (0x00035d91) popup_ai2_data_window_g1

0xb6af,	// (0x00035d9d) ai2_news_ticker_pane_g1

0xb6b7,	// (0x00035da5) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a0c6) ai2_news_ticker_pane_g

0xb6bf,	// (0x00035dad) ai2_news_ticker_pane_t1

0xb6cd,	// (0x00035dbb) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a0cb) ai2_news_ticker_pane_t

0xb6fa,	// (0x00035de8) heading_ai2_gene_pane_g1

0xb702,	// (0x00035df0) heading_ai2_gene_pane_t1_ParamLimits

0xb702,	// (0x00035df0) heading_ai2_gene_pane_t1

0xb717,	// (0x00035e05) list_highlight_pane_cp6

0xb71f,	// (0x00035e0d) ai2_gene_pane_ParamLimits

0xb71f,	// (0x00035e0d) ai2_gene_pane

0xb745,	// (0x00035e33) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a0d0) list_ai2_gene_pane_t

0xb753,	// (0x00035e41) list_highlight_pane_cp8_ParamLimits

0xb753,	// (0x00035e41) list_highlight_pane_cp8

0xb764,	// (0x00035e52) ai2_gene_pane_g1_ParamLimits

0xb764,	// (0x00035e52) ai2_gene_pane_g1

0xb776,	// (0x00035e64) ai2_gene_pane_g2_ParamLimits

0xb776,	// (0x00035e64) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a0d5) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a0d5) ai2_gene_pane_g

0x886a,	// (0x00032f58) scroll_pane_cp12

0x5af5,	// (0x000301e3) control_pane_t3_ParamLimits

0x5af5,	// (0x000301e3) control_pane_t3

0x97ae,	// (0x00033e9c) status_small_pane_g8_ParamLimits

0x97ae,	// (0x00033e9c) status_small_pane_g8

0x5cc2,	// (0x000303b0) popup_find_window_ParamLimits

0x5ed7,	// (0x000305c5) popup_note_image_window_ParamLimits

0x6137,	// (0x00030825) list_double2_graphic_pane_vc_g1_ParamLimits

0x6137,	// (0x00030825) list_double2_graphic_pane_vc_g1

0x4ed0,	// (0x0002f5be) list_double2_graphic_pane_vc_g2_ParamLimits

0x4ed0,	// (0x0002f5be) list_double2_graphic_pane_vc_g2

0x4edc,	// (0x0002f5ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x4edc,	// (0x0002f5ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00039eac) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00039eac) list_double2_graphic_pane_vc_g

0x6143,	// (0x00030831) list_double2_graphic_pane_vc_t1_ParamLimits

0x6143,	// (0x00030831) list_double2_graphic_pane_vc_t1

0x4ed0,	// (0x0002f5be) list_single_heading_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_single_heading_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_single_heading_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_single_heading_pane_vc_g

0x61ac,	// (0x0003089a) list_single_heading_pane_vc_t1_ParamLimits

0x61ac,	// (0x0003089a) list_single_heading_pane_vc_t1

0x61c2,	// (0x000308b0) list_single_heading_pane_vc_t2_ParamLimits

0x61c2,	// (0x000308b0) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00039ed2) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00039ed2) list_single_heading_pane_vc_t

0x6200,	// (0x000308ee) list_setting_number_pane_vc_g1_ParamLimits

0x6200,	// (0x000308ee) list_setting_number_pane_vc_g1

0x620c,	// (0x000308fa) list_setting_number_pane_vc_g2_ParamLimits

0x620c,	// (0x000308fa) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039ed7) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039ed7) list_setting_number_pane_vc_g

0x6218,	// (0x00030906) list_setting_number_pane_vc_t1_ParamLimits

0x6218,	// (0x00030906) list_setting_number_pane_vc_t1

0x622c,	// (0x0003091a) list_setting_number_pane_vc_t2_ParamLimits

0x622c,	// (0x0003091a) list_setting_number_pane_vc_t2

0x6246,	// (0x00030934) list_setting_number_pane_vc_t3_ParamLimits

0x6246,	// (0x00030934) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00039edc) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00039edc) list_setting_number_pane_vc_t

0x6260,	// (0x0003094e) set_value_pane_vc_ParamLimits

0x6260,	// (0x0003094e) set_value_pane_vc

0xb307,	// (0x000359f5) list_double2_graphic_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double2_graphic_pane_vc

0xb307,	// (0x000359f5) list_double2_large_graphic_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double2_large_graphic_pane_vc

0xb307,	// (0x000359f5) list_double2_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double2_pane_vc

0xb307,	// (0x000359f5) list_double_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_graphic_heading_pane_vc

0xb307,	// (0x000359f5) list_double_graphic_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_graphic_pane_vc

0xb307,	// (0x000359f5) list_double_heading_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_heading_pane_vc

0x7894,	// (0x00031f82) list_double_large_graphic_pane_vc_ParamLimits

0x7894,	// (0x00031f82) list_double_large_graphic_pane_vc

0xb307,	// (0x000359f5) list_double_number_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_number_pane_vc

0xb307,	// (0x000359f5) list_double_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_pane_vc

0xb307,	// (0x000359f5) list_double_time_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_double_time_pane_vc

0xb307,	// (0x000359f5) list_setting_number_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_setting_number_pane_vc

0xb307,	// (0x000359f5) list_setting_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_setting_pane_vc

0xb307,	// (0x000359f5) list_single_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_single_graphic_heading_pane_vc

0xb307,	// (0x000359f5) list_single_heading_pane_vc_ParamLimits

0xb307,	// (0x000359f5) list_single_heading_pane_vc

0x78b4,	// (0x00031fa2) list_single_number_heading_pane_vc_ParamLimits

0x78b4,	// (0x00031fa2) list_single_number_heading_pane_vc

0x7986,	// (0x00032074) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7986,	// (0x00032074) list_double_graphic_heading_pane_vc_g1

0x4ed0,	// (0x0002f5be) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4ed0,	// (0x0002f5be) list_double_graphic_heading_pane_vc_g2

0x4edc,	// (0x0002f5ca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4edc,	// (0x0002f5ca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0003a0e1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003a0e1) list_double_graphic_heading_pane_vc_g

0x7992,	// (0x00032080) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7992,	// (0x00032080) list_double_graphic_heading_pane_vc_t1

0x79ae,	// (0x0003209c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x79ae,	// (0x0003209c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0003a0e8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0003a0e8) list_double_graphic_heading_pane_vc_t

0x6200,	// (0x000308ee) list_setting_pane_vc_g1_ParamLimits

0x6200,	// (0x000308ee) list_setting_pane_vc_g1

0x620c,	// (0x000308fa) list_setting_pane_vc_g2_ParamLimits

0x620c,	// (0x000308fa) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039ed7) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039ed7) list_setting_pane_vc_g

0x79c6,	// (0x000320b4) list_setting_pane_vc_t1_ParamLimits

0x79c6,	// (0x000320b4) list_setting_pane_vc_t1

0x79e0,	// (0x000320ce) list_setting_pane_vc_t2_ParamLimits

0x79e0,	// (0x000320ce) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003a12b) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003a12b) list_setting_pane_vc_t

0x6260,	// (0x0003094e) set_value_pane_cp_vc_ParamLimits

0x6260,	// (0x0003094e) set_value_pane_cp_vc

0x4ed0,	// (0x0002f5be) list_single_number_heading_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_single_number_heading_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_single_number_heading_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_single_number_heading_pane_vc_g

0x61ac,	// (0x0003089a) list_single_number_heading_pane_vc_t1_ParamLimits

0x61ac,	// (0x0003089a) list_single_number_heading_pane_vc_t1

0x79f8,	// (0x000320e6) list_single_number_heading_pane_vc_t2_ParamLimits

0x79f8,	// (0x000320e6) list_single_number_heading_pane_vc_t2

0x7a0c,	// (0x000320fa) list_single_number_heading_pane_vc_t3_ParamLimits

0x7a0c,	// (0x000320fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0003a130) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0003a130) list_single_number_heading_pane_vc_t

0x6137,	// (0x00030825) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6137,	// (0x00030825) list_single_graphic_heading_pane_vc_g1

0x4ed0,	// (0x0002f5be) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4ed0,	// (0x0002f5be) list_single_graphic_heading_pane_vc_g4

0x4edc,	// (0x0002f5ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4edc,	// (0x0002f5ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x00039eac) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039eac) list_single_graphic_heading_pane_vc_g

0x61ac,	// (0x0003089a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x61ac,	// (0x0003089a) list_single_graphic_heading_pane_vc_t1

0x7a1e,	// (0x0003210c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7a1e,	// (0x0003210c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0003a137) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0003a137) list_single_graphic_heading_pane_vc_t

0x4ed0,	// (0x0002f5be) list_double2_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_double2_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_double2_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_double2_pane_vc_g

0x7a32,	// (0x00032120) list_double2_pane_vc_t1_ParamLimits

0x7a32,	// (0x00032120) list_double2_pane_vc_t1

0x7a48,	// (0x00032136) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7a48,	// (0x00032136) list_double2_large_graphic_pane_vc_g1

0x4ed0,	// (0x0002f5be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4ed0,	// (0x0002f5be) list_double2_large_graphic_pane_vc_g2

0x4edc,	// (0x0002f5ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4edc,	// (0x0002f5ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4e,	// (0x0003a13c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x0003a13c) list_double2_large_graphic_pane_vc_g

0x7a54,	// (0x00032142) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7a54,	// (0x00032142) list_double2_large_graphic_pane_vc_t1

0x7a6a,	// (0x00032158) list_double_time_pane_vc_g1_ParamLimits

0x7a6a,	// (0x00032158) list_double_time_pane_vc_g1

0x7a76,	// (0x00032164) list_double_time_pane_vc_g2_ParamLimits

0x7a76,	// (0x00032164) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0003a143) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0003a143) list_double_time_pane_vc_g

0x7a82,	// (0x00032170) list_double_time_pane_vc_t1_ParamLimits

0x7a82,	// (0x00032170) list_double_time_pane_vc_t1

0x7aa0,	// (0x0003218e) list_double_time_pane_vc_t2_ParamLimits

0x7aa0,	// (0x0003218e) list_double_time_pane_vc_t2

0x7aea,	// (0x000321d8) list_double_time_pane_vc_t3_ParamLimits

0x7aea,	// (0x000321d8) list_double_time_pane_vc_t3

0x7afc,	// (0x000321ea) list_double_time_pane_vc_t4_ParamLimits

0x7afc,	// (0x000321ea) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0003a148) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0003a148) list_double_time_pane_vc_t

0x4ed0,	// (0x0002f5be) list_double_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_double_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_double_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_double_pane_vc_g

0x7b10,	// (0x000321fe) list_double_pane_vc_t1_ParamLimits

0x7b10,	// (0x000321fe) list_double_pane_vc_t1

0x7b22,	// (0x00032210) list_double_pane_vc_t2_ParamLimits

0x7b22,	// (0x00032210) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0003a151) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0003a151) list_double_pane_vc_t

0x4ed0,	// (0x0002f5be) list_double_number_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_double_number_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_double_number_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_double_number_pane_vc_g

0x7b3a,	// (0x00032228) list_double_number_pane_vc_t1_ParamLimits

0x7b3a,	// (0x00032228) list_double_number_pane_vc_t1

0x7b4c,	// (0x0003223a) list_double_number_pane_vc_t2_ParamLimits

0x7b4c,	// (0x0003223a) list_double_number_pane_vc_t2

0x7b5e,	// (0x0003224c) list_double_number_pane_vc_t3_ParamLimits

0x7b5e,	// (0x0003224c) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0003a156) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0003a156) list_double_number_pane_vc_t

0x7b76,	// (0x00032264) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7b76,	// (0x00032264) list_double_large_graphic_pane_vc_g1

0x7b92,	// (0x00032280) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7b92,	// (0x00032280) list_double_large_graphic_pane_vc_g2

0x7ba6,	// (0x00032294) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7ba6,	// (0x00032294) list_double_large_graphic_pane_vc_g3

0x7bb5,	// (0x000322a3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7bb5,	// (0x000322a3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0003a15d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0003a15d) list_double_large_graphic_pane_vc_g

0x7bc4,	// (0x000322b2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7bc4,	// (0x000322b2) list_double_large_graphic_pane_vc_t1

0x7bde,	// (0x000322cc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7bde,	// (0x000322cc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0003a166) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0003a166) list_double_large_graphic_pane_vc_t

0x4ed0,	// (0x0002f5be) list_double_heading_pane_vc_g1_ParamLimits

0x4ed0,	// (0x0002f5be) list_double_heading_pane_vc_g1

0x4edc,	// (0x0002f5ca) list_double_heading_pane_vc_g2_ParamLimits

0x4edc,	// (0x0002f5ca) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039ecd) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039ecd) list_double_heading_pane_vc_g

0x7c00,	// (0x000322ee) list_double_heading_pane_vc_t1_ParamLimits

0x7c00,	// (0x000322ee) list_double_heading_pane_vc_t1

0x61ac,	// (0x0003089a) list_double_heading_pane_vc_t2_ParamLimits

0x61ac,	// (0x0003089a) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0003a16b) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0003a16b) list_double_heading_pane_vc_t

0x7c14,	// (0x00032302) list_double_graphic_pane_vc_g1_ParamLimits

0x7c14,	// (0x00032302) list_double_graphic_pane_vc_g1

0x7c27,	// (0x00032315) list_double_graphic_pane_vc_g2_ParamLimits

0x7c27,	// (0x00032315) list_double_graphic_pane_vc_g2

0x4ed0,	// (0x0002f5be) list_double_graphic_pane_vc_g3_ParamLimits

0x4ed0,	// (0x0002f5be) list_double_graphic_pane_vc_g3

0x0003,

0xfa82,	// (0x0003a170) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0003a170) list_double_graphic_pane_vc_g

0x7c44,	// (0x00032332) list_double_graphic_pane_vc_t1_ParamLimits

0x7c44,	// (0x00032332) list_double_graphic_pane_vc_t1

0x7c62,	// (0x00032350) list_double_graphic_pane_vc_t2_ParamLimits

0x7c62,	// (0x00032350) list_double_graphic_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a179) list_double_graphic_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a179) list_double_graphic_pane_vc_t

0x4991,	// (0x0002f07f) aid_size_cell_fastswap

0x4999,	// (0x0002f087) aid_size_cell_touch_ParamLimits

0x4999,	// (0x0002f087) aid_size_cell_touch

0x4bfe,	// (0x0002f2ec) popup_fast_swap_wide_window_ParamLimits

0x4bfe,	// (0x0002f2ec) popup_fast_swap_wide_window

0x4d04,	// (0x0002f3f2) touch_pane_ParamLimits

0x4d04,	// (0x0002f3f2) touch_pane

0x88c0,	// (0x00032fae) button_value_adjust_pane_cp2

0x52a0,	// (0x0002f98e) button_value_adjust_pane_cp4

0x52c0,	// (0x0002f9ae) form_field_data_pane_cp2

0x52df,	// (0x0002f9cd) form_field_data_wide_pane_cp2

0x8d38,	// (0x00033426) bg_scroll_pane_ParamLimits

0x5681,	// (0x0002fd6f) scroll_handle_pane_ParamLimits

0x5695,	// (0x0002fd83) scroll_sc2_down_pane_ParamLimits

0x5695,	// (0x0002fd83) scroll_sc2_down_pane

0x8d69,	// (0x00033457) scroll_sc2_up_pane_ParamLimits

0x8d69,	// (0x00033457) scroll_sc2_up_pane

0xbe9c,	// (0x0003658a) grid_wheel_folder_pane_g1_ParamLimits

0xbe9c,	// (0x0003658a) grid_wheel_folder_pane_g1

0x58dd,	// (0x0002ffcb) clock_nsta_pane_cp2_ParamLimits

0x58dd,	// (0x0002ffcb) clock_nsta_pane_cp2

0x8ab6,	// (0x000331a4) listscroll_midp_pane_ParamLimits

0x9544,	// (0x00033c32) midp_canvas_pane

0x9828,	// (0x00033f16) nsta_clock_indic_pane

0x985c,	// (0x00033f4a) listscroll_form_pane_vc

0x9864,	// (0x00033f52) listscroll_set_pane_vc_ParamLimits

0x9864,	// (0x00033f52) listscroll_set_pane_vc

0x9965,	// (0x00034053) clock_nsta_pane

0x99da,	// (0x000340c8) indicator_nsta_pane

0x9cb2,	// (0x000343a0) bg_popup_sub_pane_cp2_ParamLimits

0x9cc6,	// (0x000343b4) find_pane_cp2_ParamLimits

0x9cc6,	// (0x000343b4) find_pane_cp2

0x9cdc,	// (0x000343ca) grid_toobar_pane_ParamLimits

0x9dbc,	// (0x000344aa) list_form_gen_pane_vc_ParamLimits

0x9dbc,	// (0x000344aa) list_form_gen_pane_vc

0x9dd2,	// (0x000344c0) scroll_pane_cp8_vc_ParamLimits

0x9dd2,	// (0x000344c0) scroll_pane_cp8_vc

0x9e4e,	// (0x0003453c) data_form_wide_pane_vc_ParamLimits

0x9e4e,	// (0x0003453c) data_form_wide_pane_vc

0x9e5a,	// (0x00034548) form_field_data_wide_pane_vc_g1

0x9e62,	// (0x00034550) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e62,	// (0x00034550) form_field_data_wide_pane_vc_t1

0x88d4,	// (0x00032fc2) input_focus_pane_cp6_vc_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_cp6_vc

0xa1a0,	// (0x0003488e) list_midp_pane_ParamLimits

0xa1ac,	// (0x0003489a) scroll_pane_cp16_ParamLimits

0xa1ac,	// (0x0003489a) scroll_pane_cp16

0xa1fa,	// (0x000348e8) button_value_adjust_pane_ParamLimits

0xa1fa,	// (0x000348e8) button_value_adjust_pane

0xb169,	// (0x00035857) button_value_adjust_pane_cp6_ParamLimits

0xb169,	// (0x00035857) button_value_adjust_pane_cp6

0xb28b,	// (0x00035979) settings_code_pane_cp_ParamLimits

0xb28b,	// (0x00035979) settings_code_pane_cp

0x771f,	// (0x00031e0d) cell_touch_pane_g1

0x771f,	// (0x00031e0d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00039df1) cell_touch_pane_g

0xb7f5,	// (0x00035ee3) cell_touch_pane_cp_ParamLimits

0xb7f5,	// (0x00035ee3) cell_touch_pane_cp

0xb805,	// (0x00035ef3) cell_touch_pane_ParamLimits

0xb805,	// (0x00035ef3) cell_touch_pane

0x771f,	// (0x00031e0d) scroll_sc2_down_pane_g1

0x771f,	// (0x00031e0d) scroll_sc2_up_pane_g1

0x7729,	// (0x00031e17) bg_set_opt_pane_cp4_vc

0xb816,	// (0x00035f04) list_set_graphic_pane_vc_g1_ParamLimits

0xb816,	// (0x00035f04) list_set_graphic_pane_vc_g1

0x9374,	// (0x00033a62) list_set_graphic_pane_vc_g2_ParamLimits

0x9374,	// (0x00033a62) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0003a0ed) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0003a0ed) list_set_graphic_pane_vc_g

0xb822,	// (0x00035f10) text_primary_small_cp13_vc_ParamLimits

0xb822,	// (0x00035f10) text_primary_small_cp13_vc

0xb83a,	// (0x00035f28) list_set_graphic_pane_vc_ParamLimits

0xb83a,	// (0x00035f28) list_set_graphic_pane_vc

0x7729,	// (0x00031e17) input_focus_pane_cp2_vc

0x771f,	// (0x00031e0d) setting_code_pane_vc_g1

0x80c5,	// (0x000327b3) setting_code_pane_vc_t1

0xb84e,	// (0x00035f3c) set_text_pane_vc_t1_ParamLimits

0xb84e,	// (0x00035f3c) set_text_pane_vc_t1

0x7729,	// (0x00031e17) input_focus_pane_cp1_vc

0xb86b,	// (0x00035f59) list_set_text_pane_vc

0x771f,	// (0x00031e0d) setting_text_pane_vc_g1

0x7729,	// (0x00031e17) bg_set_opt_pane_cp2_vc

0x80bc,	// (0x000327aa) setting_slider_graphic_pane_vc_g1

0xb875,	// (0x00035f63) setting_slider_graphic_pane_vc_t1

0xb885,	// (0x00035f73) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0003a0f2) setting_slider_graphic_pane_vc_t

0xb895,	// (0x00035f83) slider_set_pane_cp_vc

0xb89d,	// (0x00035f8b) slider_set_pane_vc_g1

0xb8a6,	// (0x00035f94) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0003a0f7) slider_set_pane_vc_g

0x892f,	// (0x0003301d) set_opt_bg_pane_g1_copy1

0x8937,	// (0x00033025) set_opt_bg_pane_g2_copy1

0xb8d2,	// (0x00035fc0) set_opt_bg_pane_g3_copy1

0x8947,	// (0x00033035) set_opt_bg_pane_g4_copy1

0x894f,	// (0x0003303d) set_opt_bg_pane_g5_copy1

0x8957,	// (0x00033045) set_opt_bg_pane_g6_copy1

0xb8da,	// (0x00035fc8) set_opt_bg_pane_g7_copy1

0xb8e4,	// (0x00035fd2) set_opt_bg_pane_g8_copy1

0xb8ec,	// (0x00035fda) set_opt_bg_pane_g9_copy1

0x7729,	// (0x00031e17) bg_set_opt_pane_cp_vc

0xb8f4,	// (0x00035fe2) setting_slider_pane_vc_t1

0xb903,	// (0x00035ff1) setting_slider_pane_vc_t2

0xb913,	// (0x00036001) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0003a106) setting_slider_pane_vc_t

0xb923,	// (0x00036011) slider_set_pane_vc

0x6356,	// (0x00030a44) volume_set_pane_vc_g1

0x6645,	// (0x00030d33) volume_set_pane_vc_g2

0x664e,	// (0x00030d3c) volume_set_pane_vc_g3

0x6657,	// (0x00030d45) volume_set_pane_vc_g4

0x6660,	// (0x00030d4e) volume_set_pane_vc_g5

0x6669,	// (0x00030d57) volume_set_pane_vc_g6

0x6383,	// (0x00030a71) volume_set_pane_vc_g7

0x6672,	// (0x00030d60) volume_set_pane_vc_g8

0x667b,	// (0x00030d69) volume_set_pane_vc_g9

0x6684,	// (0x00030d72) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0003a10d) volume_set_pane_vc_g

0xb92b,	// (0x00036019) volume_set_pane_vc

0xb933,	// (0x00036021) button_value_adjust_pane_cp1_vc

0xb93d,	// (0x0003602b) list_highlight_pane_cp2_vc

0xb946,	// (0x00036034) list_set_pane_vc_ParamLimits

0xb946,	// (0x00036034) list_set_pane_vc

0xb9a4,	// (0x00036092) main_pane_set_vc_t1_ParamLimits

0xb9a4,	// (0x00036092) main_pane_set_vc_t1

0xb9b9,	// (0x000360a7) main_pane_set_vc_t2_ParamLimits

0xb9b9,	// (0x000360a7) main_pane_set_vc_t2

0xb9cb,	// (0x000360b9) main_pane_set_vc_t3_ParamLimits

0xb9cb,	// (0x000360b9) main_pane_set_vc_t3

0xb9dd,	// (0x000360cb) main_pane_set_vc_t4_ParamLimits

0xb9dd,	// (0x000360cb) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0003a122) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0003a122) main_pane_set_vc_t

0xb9ef,	// (0x000360dd) setting_code_pane_vc_ParamLimits

0xb9ef,	// (0x000360dd) setting_code_pane_vc

0xb9fe,	// (0x000360ec) setting_slider_graphic_pane_vc

0xb9fe,	// (0x000360ec) setting_slider_pane_vc

0xb9fe,	// (0x000360ec) setting_text_pane_vc

0xb9fe,	// (0x000360ec) setting_volume_pane_vc

0xba06,	// (0x000360f4) scroll_pane_cp121_vc

0x88ae,	// (0x00032f9c) set_content_pane_vc

0xba0e,	// (0x000360fc) button_value_adjust_pane_g1

0xba17,	// (0x00036105) button_value_adjust_pane_g2

0x0001,

0xfa90,	// (0x0003a17e) button_value_adjust_pane_g

0xba20,	// (0x0003610e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba20,	// (0x0003610e) form_field_slider_wide_pane_vc_t1

0xba34,	// (0x00036122) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba34,	// (0x00036122) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa95,	// (0x0003a183) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0003a183) form_field_slider_wide_pane_vc_t

0x82f5,	// (0x000329e3) input_focus_pane_cp10_vc_ParamLimits

0x82f5,	// (0x000329e3) input_focus_pane_cp10_vc

0xba60,	// (0x0003614e) slider_cont_pane_cp1_vc_ParamLimits

0xba60,	// (0x0003614e) slider_cont_pane_cp1_vc

0xba70,	// (0x0003615e) slider_form_pane_g1_cp2

0xb8a6,	// (0x00035f94) slider_form_pane_g2_cp2

0xba9d,	// (0x0003618b) form_field_slider_pane_vc_t3

0xbaab,	// (0x00036199) form_field_slider_pane_vc_t4

0xbab9,	// (0x000361a7) slider_form_pane_vc_ParamLimits

0xbab9,	// (0x000361a7) slider_form_pane_vc

0xbac6,	// (0x000361b4) form_field_slider_pane_vc_t1_ParamLimits

0xbac6,	// (0x000361b4) form_field_slider_pane_vc_t1

0xba34,	// (0x00036122) form_field_slider_pane_vc_t2_ParamLimits

0xba34,	// (0x00036122) form_field_slider_pane_vc_t2

0x0001,

0xfaa7,	// (0x0003a195) form_field_slider_pane_vc_t_ParamLimits

0xfaa7,	// (0x0003a195) form_field_slider_pane_vc_t

0x82f5,	// (0x000329e3) input_focus_pane_cp9_vc_ParamLimits

0x82f5,	// (0x000329e3) input_focus_pane_cp9_vc

0xbae2,	// (0x000361d0) slider_cont_pane_vc_ParamLimits

0xbae2,	// (0x000361d0) slider_cont_pane_vc

0xbaf4,	// (0x000361e2) list_form_graphic_pane_cp_vc_ParamLimits

0xbaf4,	// (0x000361e2) list_form_graphic_pane_cp_vc

0x9e5a,	// (0x00034548) form_field_popup_wide_pane_vc_g1

0xbb09,	// (0x000361f7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb09,	// (0x000361f7) form_field_popup_wide_pane_vc_t1

0x88d4,	// (0x00032fc2) input_focus_pane_cp8_vc_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_cp8_vc

0xbb4e,	// (0x0003623c) list_form_wide_pane_vc_ParamLimits

0xbb4e,	// (0x0003623c) list_form_wide_pane_vc

0xbb5a,	// (0x00036248) list_form_graphic_pane_vc_g1

0xbb62,	// (0x00036250) list_form_graphic_pane_vc_t1_ParamLimits

0xbb62,	// (0x00036250) list_form_graphic_pane_vc_t1

0x807a,	// (0x00032768) list_highlight_pane_cp5_vc_ParamLimits

0x807a,	// (0x00032768) list_highlight_pane_cp5_vc

0xbb7e,	// (0x0003626c) list_form_graphic_pane_vc_ParamLimits

0xbb7e,	// (0x0003626c) list_form_graphic_pane_vc

0x9e5a,	// (0x00034548) form_field_popup_pane_vc_g1

0xbb94,	// (0x00036282) form_field_popup_pane_vc_t1_ParamLimits

0xbb94,	// (0x00036282) form_field_popup_pane_vc_t1

0x88d4,	// (0x00032fc2) input_focus_pane_cp7_vc_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_cp7_vc

0xbbab,	// (0x00036299) list_form_pane_vc_ParamLimits

0xbbab,	// (0x00036299) list_form_pane_vc

0xbbb7,	// (0x000362a5) data_form_pane_vc_t1_ParamLimits

0xbbb7,	// (0x000362a5) data_form_pane_vc_t1

0x892f,	// (0x0003301d) input_focus_pane_vc_g1

0x8937,	// (0x00033025) input_focus_pane_vc_g2

0x893f,	// (0x0003302d) input_focus_pane_vc_g3

0x8947,	// (0x00033035) input_focus_pane_vc_g4

0x894f,	// (0x0003303d) input_focus_pane_vc_g5

0x8957,	// (0x00033045) input_focus_pane_vc_g6

0x895f,	// (0x0003304d) input_focus_pane_vc_g7

0x8967,	// (0x00033055) input_focus_pane_vc_g8

0x896f,	// (0x0003305d) input_focus_pane_vc_g9

0x771f,	// (0x00031e0d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00039d7a) input_focus_pane_vc_g

0x9e4e,	// (0x0003453c) data_form_pane_vc_ParamLimits

0x9e4e,	// (0x0003453c) data_form_pane_vc

0x9e5a,	// (0x00034548) form_field_data_pane_vc_g1

0xbbd2,	// (0x000362c0) form_field_data_pane_vc_t1_ParamLimits

0xbbd2,	// (0x000362c0) form_field_data_pane_vc_t1

0x88d4,	// (0x00032fc2) input_focus_pane_vc_ParamLimits

0x88d4,	// (0x00032fc2) input_focus_pane_vc

0xbbec,	// (0x000362da) button_value_adjust_pane_cp3_vc

0xbbf4,	// (0x000362e2) button_value_adjust_pane_cp5_vc

0xbbfc,	// (0x000362ea) form_field_data_pane_vc_ParamLimits

0xbbfc,	// (0x000362ea) form_field_data_pane_vc

0xbc13,	// (0x00036301) form_field_data_pane_vc_cp2

0xbc1b,	// (0x00036309) form_field_data_wide_pane_vc_ParamLimits

0xbc1b,	// (0x00036309) form_field_data_wide_pane_vc

0xbc31,	// (0x0003631f) form_field_data_wide_pane_vc_cp2

0xbc39,	// (0x00036327) form_field_popup_pane_vc_ParamLimits

0xbc39,	// (0x00036327) form_field_popup_pane_vc

0xbc50,	// (0x0003633e) form_field_popup_wide_pane_vc_ParamLimits

0xbc50,	// (0x0003633e) form_field_popup_wide_pane_vc

0xbc66,	// (0x00036354) form_field_slider_pane_vc_ParamLimits

0xbc66,	// (0x00036354) form_field_slider_pane_vc

0xbc79,	// (0x00036367) form_field_slider_wide_pane_vc_ParamLimits

0xbc79,	// (0x00036367) form_field_slider_wide_pane_vc

0xbc8c,	// (0x0003637a) grid_touch_1_pane_ParamLimits

0xbc8c,	// (0x0003637a) grid_touch_1_pane

0xbc98,	// (0x00036386) grid_touch_2_pane_ParamLimits

0xbc98,	// (0x00036386) grid_touch_2_pane

0x97f3,	// (0x00033ee1) touch_pane_g1_ParamLimits

0x97f3,	// (0x00033ee1) touch_pane_g1

0xbcb0,	// (0x0003639e) cell_app_pane_cp_wide_ParamLimits

0xbcb0,	// (0x0003639e) cell_app_pane_cp_wide

0xbcc1,	// (0x000363af) grid_popup_fast_wide_pane_ParamLimits

0xbcc1,	// (0x000363af) grid_popup_fast_wide_pane

0xbcd5,	// (0x000363c3) scroll_pane_cp19_ParamLimits

0xbcd5,	// (0x000363c3) scroll_pane_cp19

0x7729,	// (0x00031e17) bg_popup_window_pane_cp20

0xbce9,	// (0x000363d7) listscroll_popup_fast_wide_pane

0x807a,	// (0x00032768) grid_indicator_nsta_pane

0xbcf1,	// (0x000363df) clock_nsta_pane_g1

0xbcfa,	// (0x000363e8) clock_nsta_pane_t1

0xbd16,	// (0x00036404) cell_indicator_nsta_pane_ParamLimits

0xbd16,	// (0x00036404) cell_indicator_nsta_pane

0xbd47,	// (0x00036435) cell_indicator_nsta_pane_g1

0xbd55,	// (0x00036443) cell_indicator_nsta_pane_g2

0x0001,

0xfab8,	// (0x0003a1a6) cell_indicator_nsta_pane_g

0xbd62,	// (0x00036450) clock_nsta_pane_cp

0xbd6a,	// (0x00036458) indicator_nsta_pane_cp

0xbd72,	// (0x00036460) nsta_clock_indic_pane_g1

0x8143,	// (0x00032831) grid_indicator_pane

0x8e5e,	// (0x0003354c) scroll_pane_cp29

0x582c,	// (0x0002ff1a) indicator_nsta_pane_cp2_ParamLimits

0x582c,	// (0x0002ff1a) indicator_nsta_pane_cp2

0x807a,	// (0x00032768) main_apps_wheel_pane

0xa085,	// (0x00034773) form_midp_field_text_pane_ParamLimits

0xa1cc,	// (0x000348ba) scroll_bar_cp050_ParamLimits

0xbdd3,	// (0x000364c1) cell_indicator_pane_ParamLimits

0xbdd3,	// (0x000364c1) cell_indicator_pane

0xbdee,	// (0x000364dc) cell_indicator_pane_g1

0xbdf8,	// (0x000364e6) grid_wheel_folder_pane_ParamLimits

0xbdf8,	// (0x000364e6) grid_wheel_folder_pane

0xbe0e,	// (0x000364fc) list_wheel_apps_pane_ParamLimits

0xbe0e,	// (0x000364fc) list_wheel_apps_pane

0xbe1f,	// (0x0003650d) main_apps_wheel_pane_g1_ParamLimits

0xbe1f,	// (0x0003650d) main_apps_wheel_pane_g1

0xbe33,	// (0x00036521) main_apps_wheel_pane_g2_ParamLimits

0xbe33,	// (0x00036521) main_apps_wheel_pane_g2

0x0001,

0xfad4,	// (0x0003a1c2) main_apps_wheel_pane_g_ParamLimits

0xfad4,	// (0x0003a1c2) main_apps_wheel_pane_g

0xbe4b,	// (0x00036539) main_apps_wheel_pane_t1_ParamLimits

0xbe4b,	// (0x00036539) main_apps_wheel_pane_t1

0xbe6e,	// (0x0003655c) list_wheel_apps_pane_g1

0xbe76,	// (0x00036564) list_wheel_apps_pane_g2

0xbe7e,	// (0x0003656c) list_wheel_apps_pane_g3

0xbe88,	// (0x00036576) list_wheel_apps_pane_g4

0xbe92,	// (0x00036580) list_wheel_apps_pane_g5

0x0004,

0xfad9,	// (0x0003a1c7) list_wheel_apps_pane_g

0x93c8,	// (0x00033ab6) navi_icon_text_pane

0x9898,	// (0x00033f86) aid_fill_nsta

0xbeb5,	// (0x000365a3) navi_icon_text_pane_g1

0xbec1,	// (0x000365af) navi_icon_text_pane_t1

0x9247,	// (0x00033935) list_set_graphic_pane_t1_ParamLimits

0x9247,	// (0x00033935) list_set_graphic_pane_t1

0xa91e,	// (0x0003500c) popup_midp_note_alarm_window_t6_ParamLimits

0xa91e,	// (0x0003500c) popup_midp_note_alarm_window_t6

0xa930,	// (0x0003501e) popup_midp_note_alarm_window_t7_ParamLimits

0xa930,	// (0x0003501e) popup_midp_note_alarm_window_t7

0xa942,	// (0x00035030) popup_midp_note_alarm_window_t8_ParamLimits

0xa942,	// (0x00035030) popup_midp_note_alarm_window_t8

0xa954,	// (0x00035042) popup_midp_note_alarm_window_t9_ParamLimits

0xa954,	// (0x00035042) popup_midp_note_alarm_window_t9

0xa966,	// (0x00035054) popup_midp_note_alarm_window_t10_ParamLimits

0xa966,	// (0x00035054) popup_midp_note_alarm_window_t10

0xa978,	// (0x00035066) popup_midp_note_alarm_window_t11_ParamLimits

0xa978,	// (0x00035066) popup_midp_note_alarm_window_t11

0xa98a,	// (0x00035078) scroll_pane_cp17_ParamLimits

0xa98a,	// (0x00035078) scroll_pane_cp17

0x6356,	// (0x00030a44) volume_small_pane_cp_g1

0x668d,	// (0x00030d7b) volume_small_pane_cp_g2

0x6696,	// (0x00030d84) volume_small_pane_cp_g3

0x6368,	// (0x00030a56) volume_small_pane_cp_g4

0x669f,	// (0x00030d8d) volume_small_pane_cp_g5

0x6660,	// (0x00030d4e) volume_small_pane_cp_g6

0x637a,	// (0x00030a68) volume_small_pane_cp_g7

0x66a8,	// (0x00030d96) volume_small_pane_cp_g8

0x66b1,	// (0x00030d9f) volume_small_pane_cp_g9

0x638c,	// (0x00030a7a) volume_small_pane_cp_g10

0x9611,	// (0x00033cff) midp_ticker_pane_g1_ParamLimits

0x961d,	// (0x00033d0b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00039e46) midp_ticker_pane_g_ParamLimits

0x9629,	// (0x00033d17) midp_ticker_pane_t1_ParamLimits

0x98ae,	// (0x00033f9c) aid_fill_nsta_2

0xa1b8,	// (0x000348a6) list_form2_midp_pane

0xb2d6,	// (0x000359c4) midp_editing_number_pane_ParamLimits

0xb2e5,	// (0x000359d3) midp_ticker_pane_ParamLimits

0xbed3,	// (0x000365c1) form2_midp_field_pane

0xbef7,	// (0x000365e5) scroll_pane_cp51

0xbf17,	// (0x00036605) form2_midp_button_pane_ParamLimits

0xbf17,	// (0x00036605) form2_midp_button_pane

0xbf29,	// (0x00036617) form2_midp_content_pane_ParamLimits

0xbf29,	// (0x00036617) form2_midp_content_pane

0xbf43,	// (0x00036631) form2_midp_field_choice_group_pane

0xbf4b,	// (0x00036639) form2_midp_field_pane_g1

0xbf53,	// (0x00036641) form2_midp_field_pane_g2

0xbf5b,	// (0x00036649) form2_midp_field_pane_g3

0xbf63,	// (0x00036651) form2_midp_field_pane_g4

0x0003,

0xfafe,	// (0x0003a1ec) form2_midp_field_pane_g

0xbf6b,	// (0x00036659) form2_midp_gauge_slider_pane

0xbf73,	// (0x00036661) form2_midp_gauge_wait_pane

0xbf7b,	// (0x00036669) form2_midp_image_pane_ParamLimits

0xbf7b,	// (0x00036669) form2_midp_image_pane

0xbf96,	// (0x00036684) form2_midp_label_pane_ParamLimits

0xbf96,	// (0x00036684) form2_midp_label_pane

0xbfaf,	// (0x0003669d) form2_midp_label_pane_cp_ParamLimits

0xbfaf,	// (0x0003669d) form2_midp_label_pane_cp

0xbfd0,	// (0x000366be) form2_midp_string_pane_ParamLimits

0xbfd0,	// (0x000366be) form2_midp_string_pane

0x7c8c,	// (0x0003237a) form2_midp_text_pane_ParamLimits

0x7c8c,	// (0x0003237a) form2_midp_text_pane

0xbfe2,	// (0x000366d0) form2_midp_time_pane

0xbff2,	// (0x000366e0) input_focus_pane_cp51_ParamLimits

0xbff2,	// (0x000366e0) input_focus_pane_cp51

0xc00a,	// (0x000366f8) form2_midp_label_pane_t1_ParamLimits

0xc00a,	// (0x000366f8) form2_midp_label_pane_t1

0x7ca5,	// (0x00032393) form2_mdip_text_pane_t1_ParamLimits

0x7ca5,	// (0x00032393) form2_mdip_text_pane_t1

0x7cc3,	// (0x000323b1) form2_midp_time_pane_t1

0xc052,	// (0x00036740) form2_midp_gauge_slider_pane_t1

0xc064,	// (0x00036752) form2_midp_gauge_slider_pane_t2

0xc076,	// (0x00036764) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb07,	// (0x0003a1f5) form2_midp_gauge_slider_pane_t

0xc088,	// (0x00036776) form2_midp_slider_pane

0xc094,	// (0x00036782) form2_midp_gauge_wait_pane_t1

0xc0a2,	// (0x00036790) form2_midp_wait_pane_ParamLimits

0xc0a2,	// (0x00036790) form2_midp_wait_pane

0xc0ce,	// (0x000367bc) list_single_2graphic_pane_cp4_ParamLimits

0xc0ce,	// (0x000367bc) list_single_2graphic_pane_cp4

0x9ec9,	// (0x000345b7) list_single_midp_graphic_pane_cp_ParamLimits

0x9ec9,	// (0x000345b7) list_single_midp_graphic_pane_cp

0x7729,	// (0x00031e17) list_highlight_pane_cp20

0xc0fc,	// (0x000367ea) list_single_2graphic_pane_g1_cp4

0xb6fa,	// (0x00035de8) list_single_2graphic_pane_g2_cp4

0xc104,	// (0x000367f2) list_single_2graphic_pane_t1_cp4

0x807a,	// (0x00032768) list_highlight_pane_cp21

0xc113,	// (0x00036801) list_single_midp_graphic_pane_g4_cp

0xc122,	// (0x00036810) list_single_midp_graphic_pane_t1_cp

0xc137,	// (0x00036825) form2_mdip_string_pane_t1_ParamLimits

0xc137,	// (0x00036825) form2_mdip_string_pane_t1

0x7729,	// (0x00031e17) bg_wml_button_pane_cp2

0x771f,	// (0x00031e0d) form2_midp_image_pane_g1

0x5097,	// (0x0002f785) list_double_large_graphic_pane_g5_ParamLimits

0x5097,	// (0x0002f785) list_double_large_graphic_pane_g5

0x8ab6,	// (0x000331a4) midp_form_pane_ParamLimits

0x807a,	// (0x00032768) main_apps_wheel_pane_ParamLimits

0x5efd,	// (0x000305eb) popup_preview_window_ParamLimits

0x5efd,	// (0x000305eb) popup_preview_window

0x60b4,	// (0x000307a2) popup_touch_info_window_ParamLimits

0x60b4,	// (0x000307a2) popup_touch_info_window

0x60d2,	// (0x000307c0) popup_touch_menu_window_ParamLimits

0x60d2,	// (0x000307c0) popup_touch_menu_window

0x7715,	// (0x00031e03) bg_popup_sub_pane_cp6

0xc25a,	// (0x00036948) list_touch_menu_pane

0xc262,	// (0x00036950) list_single_touch_menu_pane_ParamLimits

0xc262,	// (0x00036950) list_single_touch_menu_pane

0xc276,	// (0x00036964) list_single_touch_menu_pane_t1

0x807a,	// (0x00032768) bg_popup_sub_pane_cp7_ParamLimits

0x807a,	// (0x00032768) bg_popup_sub_pane_cp7

0xc284,	// (0x00036972) heading_sub_pane

0xc28c,	// (0x0003697a) list_touch_info_pane_ParamLimits

0xc28c,	// (0x0003697a) list_touch_info_pane

0xc29b,	// (0x00036989) list_single_touch_info_pane_ParamLimits

0xc29b,	// (0x00036989) list_single_touch_info_pane

0xc2ad,	// (0x0003699b) list_single_touch_info_pane_t1

0xc2bb,	// (0x000369a9) list_single_touch_info_pane_t2

0x0001,

0xfb15,	// (0x0003a203) list_single_touch_info_pane_t

0x953c,	// (0x00033c2a) bg_popup_heading_pane_cp

0xc2c9,	// (0x000369b7) heading_sub_pane_t1

0x9de8,	// (0x000344d6) bg_popup_preview_window_pane_cp_ParamLimits

0x9de8,	// (0x000344d6) bg_popup_preview_window_pane_cp

0xc284,	// (0x00036972) heading_preview_pane

0xc28c,	// (0x0003697a) list_preview_pane_ParamLimits

0xc28c,	// (0x0003697a) list_preview_pane

0xc2d7,	// (0x000369c5) popup_preview_window_g1

0xc29b,	// (0x00036989) list_single_preview_pane_ParamLimits

0xc29b,	// (0x00036989) list_single_preview_pane

0xc2df,	// (0x000369cd) list_single_preview_pane_g1

0xc2e7,	// (0x000369d5) list_single_preview_pane_t1

0xc2ad,	// (0x0003699b) list_single_preview_pane_t2

0x0001,

0xfb1a,	// (0x0003a208) list_single_preview_pane_t

0xc2f5,	// (0x000369e3) bg_popup_heading_pane_cp2_ParamLimits

0xc2f5,	// (0x000369e3) bg_popup_heading_pane_cp2

0xc30b,	// (0x000369f9) heading_preview_pane_g1

0xc313,	// (0x00036a01) heading_preview_pane_t1_ParamLimits

0xc313,	// (0x00036a01) heading_preview_pane_t1

0x8166,	// (0x00032854) soft_indicator_pane_t1_ParamLimits

0x8847,	// (0x00032f35) scroll_pane_ParamLimits

0x8d57,	// (0x00033445) scroll_sc2_left_pane

0x8d60,	// (0x0003344e) scroll_sc2_right_pane

0x8d7f,	// (0x0003346d) scroll_bg_pane_g1_ParamLimits

0x8d94,	// (0x00033482) scroll_bg_pane_g2_ParamLimits

0x8dac,	// (0x0003349a) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00039dd1) scroll_bg_pane_g_ParamLimits

0x8d7f,	// (0x0003346d) scroll_handle_pane_g1_ParamLimits

0x8dce,	// (0x000334bc) scroll_handle_pane_g2_ParamLimits

0x8dac,	// (0x0003349a) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00039dd8) scroll_handle_pane_g_ParamLimits

0x5b84,	// (0x00030272) popup_choice_list_window_ParamLimits

0x5b84,	// (0x00030272) popup_choice_list_window

0x9cbe,	// (0x000343ac) choice_list_pane

0x9d40,	// (0x0003442e) cell_toolbar_pane_t1

0x9d68,	// (0x00034456) toolbar_button_pane_ParamLimits

0xae44,	// (0x00035532) ai_gene_pane_1_t2_ParamLimits

0xae44,	// (0x00035532) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a000) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a000) ai_gene_pane_1_t

0xc330,	// (0x00036a1e) scroll_sc2_left_pane_g1

0xc330,	// (0x00036a1e) scroll_sc2_right_pane_g1

0x9876,	// (0x00033f64) bg_popup_sub_pane_cp10

0xc33a,	// (0x00036a28) list_choice_list_pane

0xc353,	// (0x00036a41) list_single_choice_list_pane_ParamLimits

0xc353,	// (0x00036a41) list_single_choice_list_pane

0xc366,	// (0x00036a54) list_single_choice_list_pane_g1

0x8a66,	// (0x00033154) list_single_choice_list_pane_t1_ParamLimits

0x8a66,	// (0x00033154) list_single_choice_list_pane_t1

0xc36e,	// (0x00036a5c) choice_list_pane_g1

0xc376,	// (0x00036a64) choice_list_pane_t1

0x7715,	// (0x00031e03) input_focus_pane_cp11

0x8c3a,	// (0x00033328) title_pane_stacon_g2_ParamLimits

0x8c3a,	// (0x00033328) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00039db7) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00039db7) title_pane_stacon_g

0x953c,	// (0x00033c2a) cursor_press_pane

0x5c2c,	// (0x0003031a) popup_fep_hwr_window_ParamLimits

0x5c2c,	// (0x0003031a) popup_fep_hwr_window

0x5ca4,	// (0x00030392) popup_fep_vkb_window_ParamLimits

0x5ca4,	// (0x00030392) popup_fep_vkb_window

0xc384,	// (0x00036a72) cursor_press_pane_g1

0x0002,

0xfb43,	// (0x0003a231) fep_vkb_side_pane_g_ParamLimits

0x66f3,	// (0x00030de1) fep_hwr_candidate_pane_ParamLimits

0x66f3,	// (0x00030de1) fep_hwr_candidate_pane

0x671d,	// (0x00030e0b) fep_hwr_side_pane_ParamLimits

0x671d,	// (0x00030e0b) fep_hwr_side_pane

0x673d,	// (0x00030e2b) fep_hwr_top_pane_ParamLimits

0x673d,	// (0x00030e2b) fep_hwr_top_pane

0x6755,	// (0x00030e43) fep_hwr_write_pane_ParamLimits

0x6755,	// (0x00030e43) fep_hwr_write_pane

0xfb43,	// (0x0003a231) fep_vkb_side_pane_g

0xc38c,	// (0x00036a7a) fep_hwr_top_pane_g1

0xc39e,	// (0x00036a8c) fep_hwr_top_pane_g2

0x678f,	// (0x00030e7d) fep_hwr_top_pane_g3

0x0002,

0xfb1f,	// (0x0003a20d) fep_hwr_top_pane_g

0x67a4,	// (0x00030e92) fep_hwr_top_text_pane

0x8f24,	// (0x00033612) fep_hwr_top_text_pane_g1

0xc3d4,	// (0x00036ac2) fep_hwr_top_text_pane_t1

0x689a,	// (0x00030f88) fep_hwr_candidate_pane_g1

0xc617,	// (0x00036d05) fep_vkb_keypad_pane_g3_ParamLimits

0xc617,	// (0x00036d05) fep_vkb_keypad_pane_g3

0xc63f,	// (0x00036d2d) fep_vkb_keypad_pane_g4_ParamLimits

0xc63f,	// (0x00036d2d) fep_vkb_keypad_pane_g4

0xc6ae,	// (0x00036d9c) fep_vkb_bottom_pane_g2_ParamLimits

0xc6ae,	// (0x00036d9c) fep_vkb_bottom_pane_g2

0x0001,

0xfb4a,	// (0x0003a238) fep_vkb_bottom_pane_g_ParamLimits

0xfb4a,	// (0x0003a238) fep_vkb_bottom_pane_g

0xc330,	// (0x00036a1e) cell_vkb_side_pane_g2

0x0001,

0xfb54,	// (0x0003a242) cell_vkb_side_pane_g

0xc739,	// (0x00036e27) cell_vkb_side_pane_t1

0xc747,	// (0x00036e35) cell_vkb_side_pane_t1_copy1

0xc330,	// (0x00036a1e) bg_fep_vkb_candidate_pane_g2

0xc873,	// (0x00036f61) cell_vkb_candidate_pane_ParamLimits

0xc3e2,	// (0x00036ad0) aid_size_cell_vkb_ParamLimits

0xc3e2,	// (0x00036ad0) aid_size_cell_vkb

0xc873,	// (0x00036f61) cell_vkb_candidate_pane

0x68c1,	// (0x00030faf) bg_popup_fep_shadow_pane_g1

0xc46e,	// (0x00036b5c) fep_vkb_bottom_pane_ParamLimits

0xc46e,	// (0x00036b5c) fep_vkb_bottom_pane

0xc4a4,	// (0x00036b92) fep_vkb_candidate_pane_ParamLimits

0xc4a4,	// (0x00036b92) fep_vkb_candidate_pane

0xc4c0,	// (0x00036bae) fep_vkb_keypad_pane_ParamLimits

0xc4c0,	// (0x00036bae) fep_vkb_keypad_pane

0xc4ff,	// (0x00036bed) fep_vkb_side_pane_ParamLimits

0xc4ff,	// (0x00036bed) fep_vkb_side_pane

0xc53b,	// (0x00036c29) fep_vkb_top_pane_ParamLimits

0xc53b,	// (0x00036c29) fep_vkb_top_pane

0xc570,	// (0x00036c5e) fep_vkb_top_pane_g1_ParamLimits

0xc570,	// (0x00036c5e) fep_vkb_top_pane_g1

0xc57f,	// (0x00036c6d) fep_vkb_top_pane_g2_ParamLimits

0xc57f,	// (0x00036c6d) fep_vkb_top_pane_g2

0xc58e,	// (0x00036c7c) fep_vkb_top_pane_g3_ParamLimits

0xc58e,	// (0x00036c7c) fep_vkb_top_pane_g3

0x0003,

0xfb3a,	// (0x0003a228) fep_vkb_top_pane_g_ParamLimits

0xfb3a,	// (0x0003a228) fep_vkb_top_pane_g

0xc5ac,	// (0x00036c9a) fep_vkb_top_text_pane_ParamLimits

0xc5ac,	// (0x00036c9a) fep_vkb_top_text_pane

0xc5bd,	// (0x00036cab) fep_vkb_side_pane_g1_ParamLimits

0xc5bd,	// (0x00036cab) fep_vkb_side_pane_g1

0xc606,	// (0x00036cf4) grid_vkb_side_pane_ParamLimits

0xc606,	// (0x00036cf4) grid_vkb_side_pane

0x68c9,	// (0x00030fb7) bg_popup_fep_shadow_pane_g2

0x68d2,	// (0x00030fc0) bg_popup_fep_shadow_pane_g3

0x68da,	// (0x00030fc8) bg_popup_fep_shadow_pane_g4

0x68e3,	// (0x00030fd1) bg_popup_fep_shadow_pane_g5

0x68ed,	// (0x00030fdb) bg_popup_fep_shadow_pane_g6

0x68f5,	// (0x00030fe3) bg_popup_fep_shadow_pane_g7

0x8947,	// (0x00033035) bg_popup_fep_shadow_pane_g8

0xc65d,	// (0x00036d4b) grid_vkb_keypad_number_pane_ParamLimits

0xc65d,	// (0x00036d4b) grid_vkb_keypad_number_pane

0xc66d,	// (0x00036d5b) grid_vkb_keypad_pane_ParamLimits

0xc66d,	// (0x00036d5b) grid_vkb_keypad_pane

0xc693,	// (0x00036d81) fep_vkb_bottom_pane_g1_ParamLimits

0xc693,	// (0x00036d81) fep_vkb_bottom_pane_g1

0xc6bc,	// (0x00036daa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6bc,	// (0x00036daa) grid_vkb_keypad_bottom_left_pane

0xc6d1,	// (0x00036dbf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6d1,	// (0x00036dbf) grid_vkb_keypad_bottom_right_pane

0xc6e6,	// (0x00036dd4) fep_vkb_top_text_pane_g1

0xc701,	// (0x00036def) fep_vkb_top_text_pane_t1

0xc716,	// (0x00036e04) cell_vkb_side_pane_ParamLimits

0xc716,	// (0x00036e04) cell_vkb_side_pane

0xc330,	// (0x00036a1e) cell_vkb_side_pane_g1

0xc755,	// (0x00036e43) cell_vkb_keypad_pane_ParamLimits

0xc755,	// (0x00036e43) cell_vkb_keypad_pane

0xc7ca,	// (0x00036eb8) cell_vkb_keypad_pane_g1

0x0008,

0xfb67,	// (0x0003a255) bg_popup_fep_shadow_pane_g

0x6907,	// (0x00030ff5) cell_hwr_side_pane_g1

0x6907,	// (0x00030ff5) cell_hwr_side_pane_g2

0xc7d4,	// (0x00036ec2) cell_vkb_keypad_pane_t1

0xc7e2,	// (0x00036ed0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7e2,	// (0x00036ed0) cell_vkb_keypad_bottom_left_pane

0xc7ff,	// (0x00036eed) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ff,	// (0x00036eed) cell_vkb_keypad_bottom_right_pane

0xc330,	// (0x00036a1e) cell_vkb_keypad_bottom_left_pane_g1

0xc330,	// (0x00036a1e) cell_vkb_keypad_bottom_right_pane_g1

0xc838,	// (0x00036f26) cell_vkb_keypad_number_pane_ParamLimits

0xc838,	// (0x00036f26) cell_vkb_keypad_number_pane

0xc857,	// (0x00036f45) cell_vkb_keypad_number_pane_g1

0xc861,	// (0x00036f4f) cell_vkb_keypad_number_pane_g2

0xc86a,	// (0x00036f58) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb59,	// (0x0003a247) cell_vkb_keypad_number_pane_g

0xc7d4,	// (0x00036ec2) cell_vkb_keypad_number_pane_t1

0xc88e,	// (0x00036f7c) fep_vkb_candidate_pane_g1

0x0001,

0xfb7a,	// (0x0003a268) cell_hwr_side_pane_g

0xc8a7,	// (0x00036f95) cell_hwr_side_pane_t1

0x6911,	// (0x00030fff) cell_hwr_side_pane_t1_copy1

0x691f,	// (0x0003100d) cell_hwr_candidate_pane_g1

0x694e,	// (0x0003103c) cell_hwr_candidate_pane_t1

0xc330,	// (0x00036a1e) cell_vkb_candidate_pane_g2

0xc8eb,	// (0x00036fd9) cell_vkb_candidate_pane_t1

0x66ba,	// (0x00030da8) bg_popup_fep_shadow_pane_ParamLimits

0x66ba,	// (0x00030da8) bg_popup_fep_shadow_pane

0x676f,	// (0x00030e5d) bg_fep_hwr_top_pane_g4

0xc3b0,	// (0x00036a9e) bg_hwr_side_pane_g1_ParamLimits

0xc3b0,	// (0x00036a9e) bg_hwr_side_pane_g1

0x67e0,	// (0x00030ece) cell_hwr_side_pane_ParamLimits

0x67e0,	// (0x00030ece) cell_hwr_side_pane

0x681b,	// (0x00030f09) fep_hwr_write_pane_g1_ParamLimits

0x681b,	// (0x00030f09) fep_hwr_write_pane_g1

0x6828,	// (0x00030f16) fep_hwr_write_pane_g2_ParamLimits

0x6828,	// (0x00030f16) fep_hwr_write_pane_g2

0x6835,	// (0x00030f23) fep_hwr_write_pane_g3_ParamLimits

0x6835,	// (0x00030f23) fep_hwr_write_pane_g3

0x6843,	// (0x00030f31) fep_hwr_write_pane_g4_ParamLimits

0x6843,	// (0x00030f31) fep_hwr_write_pane_g4

0x0005,

0xfb26,	// (0x0003a214) fep_hwr_write_pane_g_ParamLimits

0xfb26,	// (0x0003a214) fep_hwr_write_pane_g

0x676f,	// (0x00030e5d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x676f,	// (0x00030e5d) bg_fep_hwr_candidate_pane_g2

0x6858,	// (0x00030f46) cell_hwr_candidate_pane_ParamLimits

0x6858,	// (0x00030f46) cell_hwr_candidate_pane

0x689a,	// (0x00030f88) fep_hwr_candidate_pane_g1_ParamLimits

0xc410,	// (0x00036afe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc410,	// (0x00036afe) bg_popup_fep_shadow_pane_cp2

0xc59e,	// (0x00036c8c) fep_vkb_top_pane_g4_ParamLimits

0xc59e,	// (0x00036c8c) fep_vkb_top_pane_g4

0xc5e4,	// (0x00036cd2) fep_vkb_side_pane_g2_ParamLimits

0xc5e4,	// (0x00036cd2) fep_vkb_side_pane_g2

0x51d5,	// (0x0002f8c3) list_setting_pane_t4_ParamLimits

0x51d5,	// (0x0002f8c3) list_setting_pane_t4

0x5267,	// (0x0002f955) list_setting_number_pane_t5_ParamLimits

0x5267,	// (0x0002f955) list_setting_number_pane_t5

0x8f6b,	// (0x00033659) list_double_heading_pane_cp2_ParamLimits

0x8f6b,	// (0x00033659) list_double_heading_pane_cp2

0x88e2,	// (0x00032fd0) list_double_heading_pane_g1_cp2_ParamLimits

0x88e2,	// (0x00032fd0) list_double_heading_pane_g1_cp2

0x88ee,	// (0x00032fdc) list_double_heading_pane_g2_cp2_ParamLimits

0x88ee,	// (0x00032fdc) list_double_heading_pane_g2_cp2

0xc8f9,	// (0x00036fe7) list_double_heading_pane_t1_cp2_ParamLimits

0xc8f9,	// (0x00036fe7) list_double_heading_pane_t1_cp2

0xc90f,	// (0x00036ffd) list_double_heading_pane_t2_cp2_ParamLimits

0xc90f,	// (0x00036ffd) list_double_heading_pane_t2_cp2

0x76fd,	// (0x00031deb) aid_value_unit2

0x4c4a,	// (0x0002f338) popup_preview_fixed_window

0x8303,	// (0x000329f1) bg_popup_preview_window_pane_cp02

0xc921,	// (0x0003700f) list_preview_fixed_pane

0xc967,	// (0x00037055) list_empty_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_empty_pane_fp

0xc967,	// (0x00037055) list_single_cale_day_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_cale_day_pane_fp

0xc967,	// (0x00037055) list_single_graphic_heading_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_graphic_heading_pane_fp

0xc967,	// (0x00037055) list_single_graphic_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_graphic_pane_fp

0xc967,	// (0x00037055) list_single_heading_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_heading_pane_fp

0xc967,	// (0x00037055) list_single_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_pane_fp

0xc97d,	// (0x0003706b) list_single_pane_fp_g1_ParamLimits

0xc97d,	// (0x0003706b) list_single_pane_fp_g1

0x4f06,	// (0x0002f5f4) list_single_pane_fp_g2_ParamLimits

0x4f06,	// (0x0002f5f4) list_single_pane_fp_g2

0x7cd6,	// (0x000323c4) list_single_pane_fp_g3_ParamLimits

0x7cd6,	// (0x000323c4) list_single_pane_fp_g3

0xc989,	// (0x00037077) list_single_pane_fp_g4_ParamLimits

0xc989,	// (0x00037077) list_single_pane_fp_g4

0x0003,

0xfb8d,	// (0x0003a27b) list_single_pane_fp_g_ParamLimits

0xfb8d,	// (0x0003a27b) list_single_pane_fp_g

0x7cea,	// (0x000323d8) list_single_pane_fp_t1_ParamLimits

0x7cea,	// (0x000323d8) list_single_pane_fp_t1

0x7d01,	// (0x000323ef) list_single_graphic_pane_fp_g1_ParamLimits

0x7d01,	// (0x000323ef) list_single_graphic_pane_fp_g1

0xc97d,	// (0x0003706b) list_single_graphic_pane_fp_g2_ParamLimits

0xc97d,	// (0x0003706b) list_single_graphic_pane_fp_g2

0x4f06,	// (0x0002f5f4) list_single_graphic_pane_fp_g3_ParamLimits

0x4f06,	// (0x0002f5f4) list_single_graphic_pane_fp_g3

0x7cd6,	// (0x000323c4) list_single_graphic_pane_fp_g4_ParamLimits

0x7cd6,	// (0x000323c4) list_single_graphic_pane_fp_g4

0xc989,	// (0x00037077) list_single_graphic_pane_fp_g5_ParamLimits

0xc989,	// (0x00037077) list_single_graphic_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a284) list_single_graphic_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a284) list_single_graphic_pane_fp_g

0x7d0d,	// (0x000323fb) list_single_graphic_pane_fp_t1_ParamLimits

0x7d0d,	// (0x000323fb) list_single_graphic_pane_fp_t1

0x7d01,	// (0x000323ef) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7d01,	// (0x000323ef) list_single_graphic_heading_pane_fp_g1

0xc97d,	// (0x0003706b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc97d,	// (0x0003706b) list_single_graphic_heading_pane_fp_g2

0x4f06,	// (0x0002f5f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4f06,	// (0x0002f5f4) list_single_graphic_heading_pane_fp_g3

0x7cd6,	// (0x000323c4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7cd6,	// (0x000323c4) list_single_graphic_heading_pane_fp_g4

0xc989,	// (0x00037077) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc989,	// (0x00037077) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a284) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a284) list_single_graphic_heading_pane_fp_g

0x7d23,	// (0x00032411) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7d23,	// (0x00032411) list_single_graphic_heading_pane_fp_t1

0x7d39,	// (0x00032427) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7d39,	// (0x00032427) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0003a28f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0003a28f) list_single_graphic_heading_pane_fp_t

0x7d4b,	// (0x00032439) list_single_cale_day_pane_fp_g1_ParamLimits

0x7d4b,	// (0x00032439) list_single_cale_day_pane_fp_g1

0xc995,	// (0x00037083) list_single_cale_day_pane_fp_g2_ParamLimits

0xc995,	// (0x00037083) list_single_cale_day_pane_fp_g2

0x7d83,	// (0x00032471) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d83,	// (0x00032471) list_single_cale_day_pane_fp_g3

0x7dab,	// (0x00032499) list_single_cale_day_pane_fp_g4_ParamLimits

0x7dab,	// (0x00032499) list_single_cale_day_pane_fp_g4

0x7dcf,	// (0x000324bd) list_single_cale_day_pane_fp_g5_ParamLimits

0x7dcf,	// (0x000324bd) list_single_cale_day_pane_fp_g5

0x0004,

0xfba6,	// (0x0003a294) list_single_cale_day_pane_fp_g_ParamLimits

0xfba6,	// (0x0003a294) list_single_cale_day_pane_fp_g

0x7df3,	// (0x000324e1) list_single_cale_day_pane_fp_t1_ParamLimits

0x7df3,	// (0x000324e1) list_single_cale_day_pane_fp_t1

0x7e19,	// (0x00032507) list_single_cale_day_pane_fp_t2_ParamLimits

0x7e19,	// (0x00032507) list_single_cale_day_pane_fp_t2

0x7e32,	// (0x00032520) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e32,	// (0x00032520) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb1,	// (0x0003a29f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb1,	// (0x0003a29f) list_single_cale_day_pane_fp_t

0xc97d,	// (0x0003706b) list_empty_pane_fp_g1_ParamLimits

0xc97d,	// (0x0003706b) list_empty_pane_fp_g1

0x7e4b,	// (0x00032539) list_empty_pane_fp_t1

0x7e59,	// (0x00032547) list_empty_pane_fp_t2

0x0001,

0xfbb8,	// (0x0003a2a6) list_empty_pane_fp_t

0xc97d,	// (0x0003706b) list_single_heading_pane_fp_g1_ParamLimits

0xc97d,	// (0x0003706b) list_single_heading_pane_fp_g1

0x4f06,	// (0x0002f5f4) list_single_heading_pane_fp_g2_ParamLimits

0x4f06,	// (0x0002f5f4) list_single_heading_pane_fp_g2

0x7cd6,	// (0x000323c4) list_single_heading_pane_fp_g3_ParamLimits

0x7cd6,	// (0x000323c4) list_single_heading_pane_fp_g3

0x0002,

0xfbbd,	// (0x0003a2ab) list_single_heading_pane_fp_g_ParamLimits

0xfbbd,	// (0x0003a2ab) list_single_heading_pane_fp_g

0x7e67,	// (0x00032555) list_single_heading_pane_fp_t1_ParamLimits

0x7e67,	// (0x00032555) list_single_heading_pane_fp_t1

0x7e79,	// (0x00032567) list_single_heading_pane_fp_t2_ParamLimits

0x7e79,	// (0x00032567) list_single_heading_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003a2b2) list_single_heading_pane_fp_t_ParamLimits

0xfbc4,	// (0x0003a2b2) list_single_heading_pane_fp_t

0x8ad4,	// (0x000331c2) aid_size_cell_fast

0x8273,	// (0x00032961) soft_indicator_pane_cp1_t1

0x8b0e,	// (0x000331fc) cell_app_pane_cp2_ParamLimits

0x8b0e,	// (0x000331fc) cell_app_pane_cp2

0x66dc,	// (0x00030dca) fep_hwr_candidate_drop_down_list_pane

0x68b4,	// (0x00030fa2) fep_hwr_candidate_pane_g3_ParamLimits

0x68b4,	// (0x00030fa2) fep_hwr_candidate_pane_g3

0x3a70,	// (0x0002e15e) fep_hwr_candidate_pane_g4_ParamLimits

0x3a70,	// (0x0002e15e) fep_hwr_candidate_pane_g4

0x0002,

0xfb33,	// (0x0003a221) fep_hwr_candidate_pane_g_ParamLimits

0xfb33,	// (0x0003a221) fep_hwr_candidate_pane_g

0xc493,	// (0x00036b81) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc493,	// (0x00036b81) fep_vkb_candidate_drop_down_list_pane

0xc896,	// (0x00036f84) fep_vkb_candidate_pane_g3

0xc89e,	// (0x00036f8c) fep_vkb_candidate_pane_g4

0x0002,

0xfb60,	// (0x0003a24e) fep_vkb_candidate_pane_g

0x691f,	// (0x0003100d) cell_hwr_candidate_pane_g1_ParamLimits

0x692d,	// (0x0003101b) cell_hwr_candidate_pane_g3_ParamLimits

0x692d,	// (0x0003101b) cell_hwr_candidate_pane_g3

0xdff8,	// (0x000386e6) cell_hwr_candidate_pane_g4_ParamLimits

0xdff8,	// (0x000386e6) cell_hwr_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0003a26d) cell_hwr_candidate_pane_g_ParamLimits

0xfb7f,	// (0x0003a26d) cell_hwr_candidate_pane_g

0xc8b5,	// (0x00036fa3) cell_vkb_candidate_pane_g3_ParamLimits

0xc8b5,	// (0x00036fa3) cell_vkb_candidate_pane_g3

0xc8d0,	// (0x00036fbe) cell_vkb_candidate_pane_g4_ParamLimits

0xc8d0,	// (0x00036fbe) cell_vkb_candidate_pane_g4

0xc9a1,	// (0x0003708f) cell_app_pane_cp2_g1_ParamLimits

0xc9a1,	// (0x0003708f) cell_app_pane_cp2_g1

0xc9bf,	// (0x000370ad) cell_app_pane_cp2_g2_ParamLimits

0xc9bf,	// (0x000370ad) cell_app_pane_cp2_g2

0x0001,

0xfbc9,	// (0x0003a2b7) cell_app_pane_cp2_g_ParamLimits

0xfbc9,	// (0x0003a2b7) cell_app_pane_cp2_g

0xc9cb,	// (0x000370b9) cell_app_pane_cp2_t1_ParamLimits

0xc9cb,	// (0x000370b9) cell_app_pane_cp2_t1

0x88d4,	// (0x00032fc2) grid_highlight_pane_cp1_ParamLimits

0x88d4,	// (0x00032fc2) grid_highlight_pane_cp1

0x696c,	// (0x0003105a) cell_hwr_candidate_pane_cp1_ParamLimits

0x696c,	// (0x0003105a) cell_hwr_candidate_pane_cp1

0x691f,	// (0x0003100d) fep_hwr_candidate_drop_down_list_pane_g1

0x698b,	// (0x00031079) fep_hwr_candidate_drop_down_list_pane_g2

0x6998,	// (0x00031086) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0003a2bc) fep_hwr_candidate_drop_down_list_pane_g

0x69a5,	// (0x00031093) fep_hwr_candidate_drop_down_list_scroll_pane

0x69ae,	// (0x0003109c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69ae,	// (0x0003109c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69bb,	// (0x000310a9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69bb,	// (0x000310a9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69c8,	// (0x000310b6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69c8,	// (0x000310b6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69d5,	// (0x000310c3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69d5,	// (0x000310c3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69f0,	// (0x000310de) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69f0,	// (0x000310de) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6a0b,	// (0x000310f9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a0b,	// (0x000310f9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a26,	// (0x00031114) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a26,	// (0x00031114) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a41,	// (0x0003112f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a41,	// (0x0003112f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0003a2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0003a2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9dd,	// (0x000370cb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9dd,	// (0x000370cb) cell_vkb_candidate_pane_cp1

0xc59e,	// (0x00036c8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc59e,	// (0x00036c8c) fep_vkb_candidate_drop_down_list_pane_g1

0xc9fd,	// (0x000370eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9fd,	// (0x000370eb) fep_vkb_candidate_drop_down_list_pane_g2

0xca0a,	// (0x000370f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca0a,	// (0x000370f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe6,	// (0x0003a2d4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe6,	// (0x0003a2d4) fep_vkb_candidate_drop_down_list_pane_g

0xca17,	// (0x00037105) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca17,	// (0x00037105) fep_vkb_candidate_drop_down_list_scroll_pane

0xca24,	// (0x00037112) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca24,	// (0x00037112) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca31,	// (0x0003711f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca31,	// (0x0003711f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca3d,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca3d,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca49,	// (0x00037137) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca49,	// (0x00037137) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca6a,	// (0x00037158) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca6a,	// (0x00037158) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca8b,	// (0x00037179) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca8b,	// (0x00037179) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaac,	// (0x0003719a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaac,	// (0x0003719a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcacd,	// (0x000371bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcacd,	// (0x000371bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0003a2db) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0003a2db) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7733,	// (0x00031e21) title_pane_g1_ParamLimits

0x7740,	// (0x00031e2e) title_pane_g2_ParamLimits

0xf54e,	// (0x00039c3c) title_pane_g_ParamLimits

0x8f14,	// (0x00033602) aid_call2_pane

0x8f1c,	// (0x0003360a) aid_call_pane

0x8f24,	// (0x00033612) popup_clock_analogue_window_g1

0x8f24,	// (0x00033612) popup_clock_analogue_window_g2

0x56aa,	// (0x0002fd98) popup_clock_analogue_window_g3

0x56b3,	// (0x0002fda1) popup_clock_analogue_window_g4

0x771f,	// (0x00031e0d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00039de6) popup_clock_analogue_window_g

0x56bb,	// (0x0002fda9) popup_clock_analogue_window_t1

0x56c9,	// (0x0002fdb7) clock_digital_number_pane_ParamLimits

0x56c9,	// (0x0002fdb7) clock_digital_number_pane

0x56d5,	// (0x0002fdc3) clock_digital_number_pane_cp02_ParamLimits

0x56d5,	// (0x0002fdc3) clock_digital_number_pane_cp02

0x56e1,	// (0x0002fdcf) clock_digital_number_pane_cp03_ParamLimits

0x56e1,	// (0x0002fdcf) clock_digital_number_pane_cp03

0x56ed,	// (0x0002fddb) clock_digital_number_pane_cp04_ParamLimits

0x56ed,	// (0x0002fddb) clock_digital_number_pane_cp04

0x56f9,	// (0x0002fde7) clock_digital_separator_pane_ParamLimits

0x56f9,	// (0x0002fde7) clock_digital_separator_pane

0x5705,	// (0x0002fdf3) popup_clock_digital_window_t1_ParamLimits

0x5705,	// (0x0002fdf3) popup_clock_digital_window_t1

0x771f,	// (0x00031e0d) clock_digital_number_pane_g1

0x771f,	// (0x00031e0d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00039df1) clock_digital_number_pane_g

0x771f,	// (0x00031e0d) clock_digital_separator_pane_g1

0x771f,	// (0x00031e0d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00039df1) clock_digital_separator_pane_g

0x9898,	// (0x00033f86) aid_fill_nsta_ParamLimits

0x99da,	// (0x000340c8) indicator_nsta_pane_ParamLimits

0x9b53,	// (0x00034241) popup_clock_analogue_window

0x9b53,	// (0x00034241) popup_clock_digital_window

0x807a,	// (0x00032768) grid_indicator_nsta_pane_ParamLimits

0xbd08,	// (0x000363f6) clock_nsta_pane_t2

0x0001,

0xfab3,	// (0x0003a1a1) clock_nsta_pane_t

0x566e,	// (0x0002fd5c) aid_size_max_handle

0x5678,	// (0x0002fd66) aid_size_min_handle

0x953c,	// (0x00033c2a) editor_scroll_pane

0xcae8,	// (0x000371d6) ex_editor_pane

0x8a42,	// (0x00033130) scroll_pane_cp13

0x8873,	// (0x00032f61) scroll_pane_cp14

0x8f53,	// (0x00033641) scroll_pane_cp36

0x8f7f,	// (0x0003366d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f7f,	// (0x0003366d) list_single_graphic_hl_pane_cp2

0x791f,	// (0x0003200d) list_single_graphic_hl_pane_ParamLimits

0x791f,	// (0x0003200d) list_single_graphic_hl_pane

0x7e8f,	// (0x0003257d) aid_size_min_hl_cp1

0xcaf0,	// (0x000371de) list_highlight_pane_cp34_ParamLimits

0xcaf0,	// (0x000371de) list_highlight_pane_cp34

0xcb01,	// (0x000371ef) list_single_graphic_hl_pane_g1_ParamLimits

0xcb01,	// (0x000371ef) list_single_graphic_hl_pane_g1

0x7e98,	// (0x00032586) list_single_graphic_hl_pane_g2_ParamLimits

0x7e98,	// (0x00032586) list_single_graphic_hl_pane_g2

0x7e98,	// (0x00032586) list_single_graphic_hl_pane_g3_ParamLimits

0x7e98,	// (0x00032586) list_single_graphic_hl_pane_g3

0x7ea4,	// (0x00032592) list_single_graphic_hl_pane_g4_ParamLimits

0x7ea4,	// (0x00032592) list_single_graphic_hl_pane_g4

0x7eb0,	// (0x0003259e) list_single_graphic_hl_pane_g5_ParamLimits

0x7eb0,	// (0x0003259e) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0003a2ec) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0003a2ec) list_single_graphic_hl_pane_g

0x7ec4,	// (0x000325b2) list_single_graphic_hl_pane_t1_ParamLimits

0x7ec4,	// (0x000325b2) list_single_graphic_hl_pane_t1

0xcb0e,	// (0x000371fc) aid_size_min_hl_cp2

0xcb17,	// (0x00037205) list_highlight_pane_cp34_cp2_ParamLimits

0xcb17,	// (0x00037205) list_highlight_pane_cp34_cp2

0xcb01,	// (0x000371ef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb01,	// (0x000371ef) list_single_graphic_hl_pane_g1_cp2

0xcb24,	// (0x00037212) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb24,	// (0x00037212) list_single_graphic_hl_pane_g2_cp2

0xcb30,	// (0x0003721e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb30,	// (0x0003721e) list_single_graphic_hl_pane_g3_cp2

0x9368,	// (0x00033a56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9368,	// (0x00033a56) list_single_graphic_hl_pane_g4_cp2

0xcb3e,	// (0x0003722c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb3e,	// (0x0003722c) list_single_graphic_hl_pane_g5_cp2

0x5a3c,	// (0x0003012a) control_pane_g4_ParamLimits

0x5a3c,	// (0x0003012a) control_pane_g4

0x9876,	// (0x00033f64) bg_popup_sub_pane_cp10_ParamLimits

0xc33a,	// (0x00036a28) list_choice_list_pane_ParamLimits

0xc349,	// (0x00036a37) scroll_pane_cp23

0x8303,	// (0x000329f1) bg_popup_preview_window_pane_cp02_ParamLimits

0xc921,	// (0x0003700f) list_preview_fixed_pane_ParamLimits

0xc937,	// (0x00037025) list_preview_fixed_pane_cp_ParamLimits

0xc937,	// (0x00037025) list_preview_fixed_pane_cp

0xc943,	// (0x00037031) popup_preview_fixed_window_g1_ParamLimits

0xc943,	// (0x00037031) popup_preview_fixed_window_g1

0xc94f,	// (0x0003703d) popup_preview_fixed_window_g2_ParamLimits

0xc94f,	// (0x0003703d) popup_preview_fixed_window_g2

0x0002,

0xfb86,	// (0x0003a274) popup_preview_fixed_window_g_ParamLimits

0xfb86,	// (0x0003a274) popup_preview_fixed_window_g

0x55e2,	// (0x0002fcd0) aid_navi_side_left_pane_ParamLimits

0x55f7,	// (0x0002fce5) aid_navi_side_right_pane_ParamLimits

0x560f,	// (0x0002fcfd) navi_icon_pane_stacon_ParamLimits

0x5623,	// (0x0002fd11) navi_navi_pane_stacon_ParamLimits

0x560f,	// (0x0002fcfd) navi_text_pane_stacon_ParamLimits

0x4b19,	// (0x0002f207) main_text_info_pane

0xcb68,	// (0x00037256) listscroll_text_info_pane

0xcb70,	// (0x0003725e) list_text_info_pane_ParamLimits

0xcb70,	// (0x0003725e) list_text_info_pane

0xcb7f,	// (0x0003726d) scroll_pane_cp24_ParamLimits

0xcb7f,	// (0x0003726d) scroll_pane_cp24

0xcb9d,	// (0x0003728b) list_text_info_pane_t1_ParamLimits

0xcb9d,	// (0x0003728b) list_text_info_pane_t1

0x5ba0,	// (0x0003028e) popup_fast_swap2_window_ParamLimits

0x5ba0,	// (0x0003028e) popup_fast_swap2_window

0xcbd2,	// (0x000372c0) aid_size_cell_fast2

0x7715,	// (0x00031e03) bg_popup_window_pane_cp17

0xa1e4,	// (0x000348d2) heading_pane_cp2

0x8546,	// (0x00032c34) listscroll_fast2_pane

0xcbdc,	// (0x000372ca) grid_fast2_pane

0xcbe6,	// (0x000372d4) listscroll_fast2_pane_g1

0xcbee,	// (0x000372dc) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0003a2f7) listscroll_fast2_pane_g

0x8a42,	// (0x00033130) scroll_pane_cp26

0xcbf8,	// (0x000372e6) cell_fast2_pane_ParamLimits

0xcbf8,	// (0x000372e6) cell_fast2_pane

0xcc0d,	// (0x000372fb) cell_fast2_pane_g1

0xcc16,	// (0x00037304) cell_fast2_pane_g2

0xcc1f,	// (0x0003730d) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0003a2fc) cell_fast2_pane_g

0x8630,	// (0x00032d1e) grid_highlight_pane_cp9

0x5b60,	// (0x0003024e) main_eswt_pane_ParamLimits

0x5b60,	// (0x0003024e) main_eswt_pane

0xcb94,	// (0x00037282) list_single_text_info_pane

0xcc27,	// (0x00037315) eswt_ctrl_button_pane

0xcc27,	// (0x00037315) eswt_ctrl_canvas_pane

0xcc2f,	// (0x0003731d) eswt_ctrl_combo_pane

0xcc27,	// (0x00037315) eswt_ctrl_default_pane

0xcc27,	// (0x00037315) eswt_ctrl_label_pane

0xcc37,	// (0x00037325) eswt_ctrl_wait_pane

0xcc3f,	// (0x0003732d) eswt_shell_pane

0x7715,	// (0x00031e03) listscroll_eswt_app_pane

0xcc5f,	// (0x0003734d) popup_eswt_tasktip_window_ParamLimits

0xcc5f,	// (0x0003734d) popup_eswt_tasktip_window

0x9de8,	// (0x000344d6) bg_popup_window_pane_cp18

0xcc70,	// (0x0003735e) eswt_control_pane_g1_ParamLimits

0xcc70,	// (0x0003735e) eswt_control_pane_g1

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_ParamLimits

0xcc7d,	// (0x0003736b) eswt_control_pane_g2

0xcc8a,	// (0x00037378) eswt_control_pane_g3_ParamLimits

0xcc8a,	// (0x00037378) eswt_control_pane_g3

0xcc97,	// (0x00037385) eswt_control_pane_g4_ParamLimits

0xcc97,	// (0x00037385) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0003a303) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0003a303) eswt_control_pane_g

0x88d4,	// (0x00032fc2) bg_button_pane_ParamLimits

0x88d4,	// (0x00032fc2) bg_button_pane

0x8645,	// (0x00032d33) common_borders_pane_copy2_ParamLimits

0x8645,	// (0x00032d33) common_borders_pane_copy2

0xcca4,	// (0x00037392) control_button_pane_g1_ParamLimits

0xcca4,	// (0x00037392) control_button_pane_g1

0xccb0,	// (0x0003739e) control_button_pane_g2_ParamLimits

0xccb0,	// (0x0003739e) control_button_pane_g2

0xccbc,	// (0x000373aa) control_button_pane_g3_ParamLimits

0xccbc,	// (0x000373aa) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0003a30c) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0003a30c) control_button_pane_g

0xccd0,	// (0x000373be) control_button_pane_t1

0xccde,	// (0x000373cc) control_button_pane_t2

0x0001,

0xfc25,	// (0x0003a313) control_button_pane_t

0x9d74,	// (0x00034462) bg_button_pane_g1

0x9d84,	// (0x00034472) bg_button_pane_g2

0x9d7c,	// (0x0003446a) bg_button_pane_g3

0x9d94,	// (0x00034482) bg_button_pane_g4

0x9d8c,	// (0x0003447a) bg_button_pane_g5

0x9d9c,	// (0x0003448a) bg_button_pane_g6

0x9da4,	// (0x00034492) bg_button_pane_g7

0x9db4,	// (0x000344a2) bg_button_pane_g8

0x9dac,	// (0x0003449a) bg_button_pane_g9

0x0008,

0xf866,	// (0x00039f54) bg_button_pane_g

0xc2f5,	// (0x000369e3) common_borders_pane_ParamLimits

0xc2f5,	// (0x000369e3) common_borders_pane

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy1_ParamLimits

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy1

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy1_ParamLimits

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy1

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy1_ParamLimits

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy1

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy1_ParamLimits

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy1

0xc330,	// (0x00036a1e) bg_eswt_ctrl_canvas_pane_g1

0xc2f5,	// (0x000369e3) common_borders_pane_cp2_ParamLimits

0xc2f5,	// (0x000369e3) common_borders_pane_cp2

0xc2f5,	// (0x000369e3) common_borders_pane_cp3_ParamLimits

0xc2f5,	// (0x000369e3) common_borders_pane_cp3

0xccec,	// (0x000373da) separator_horizontal_pane

0xccf4,	// (0x000373e2) separator_vertical_pane

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy2_ParamLimits

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy2

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy2_ParamLimits

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy2

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy2_ParamLimits

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy2

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy2_ParamLimits

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy2

0x7715,	// (0x00031e03) common_borders_pane_cp4

0xccfd,	// (0x000373eb) separator_horizontal_pane_g1

0xcd06,	// (0x000373f4) separator_horizontal_pane_g2

0xcd0f,	// (0x000373fd) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0003a318) separator_horizontal_pane_g

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy3_ParamLimits

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy3

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy3_ParamLimits

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy3

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy3_ParamLimits

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy3

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy3_ParamLimits

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy3

0x7715,	// (0x00031e03) common_borders_pane_cp5

0xcd18,	// (0x00037406) separator_vertical_pane_g1

0xcd21,	// (0x0003740f) separator_vertical_pane_g2

0xcd2a,	// (0x00037418) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0003a31f) separator_vertical_pane_g

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy4_ParamLimits

0xcc70,	// (0x0003735e) eswt_control_pane_g1_copy4

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy4_ParamLimits

0xcc7d,	// (0x0003736b) eswt_control_pane_g2_copy4

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy4_ParamLimits

0xcc8a,	// (0x00037378) eswt_control_pane_g3_copy4

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy4_ParamLimits

0xcc97,	// (0x00037385) eswt_control_pane_g4_copy4

0xcd33,	// (0x00037421) eswt_ctrl_combo_button_pane

0xcd3b,	// (0x00037429) eswt_ctrl_input_pane

0xcd43,	// (0x00037431) popup_choice_list_window_cp70

0xcd4b,	// (0x00037439) eswt_ctrl_input_pane_t1

0x7715,	// (0x00031e03) input_focus_pane_cp70

0xc2f5,	// (0x000369e3) bg_button_pane_cp70_ParamLimits

0xc2f5,	// (0x000369e3) bg_button_pane_cp70

0xcd59,	// (0x00037447) eswt_ctrl_combo_button_pane_g1

0xcd61,	// (0x0003744f) wait_bar_pane_cp70

0x9de8,	// (0x000344d6) bg_popup_window_pane_cp70_ParamLimits

0x9de8,	// (0x000344d6) bg_popup_window_pane_cp70

0xcd69,	// (0x00037457) popup_eswt_tasktip_window_t1

0xcd7f,	// (0x0003746d) wait_bar_pane_cp71_ParamLimits

0xcd7f,	// (0x0003746d) wait_bar_pane_cp71

0xcd8b,	// (0x00037479) grid_eswt_app_pane

0x8d57,	// (0x00033445) scroll_pane_cp70

0xcd94,	// (0x00037482) cell_eswt_app_pane_ParamLimits

0xcd94,	// (0x00037482) cell_eswt_app_pane

0xcdc8,	// (0x000374b6) cell_eswt_app_pane_g1_ParamLimits

0xcdc8,	// (0x000374b6) cell_eswt_app_pane_g1

0xcdf7,	// (0x000374e5) cell_eswt_app_pane_g2_ParamLimits

0xcdf7,	// (0x000374e5) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0003a326) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0003a326) cell_eswt_app_pane_g

0xce1b,	// (0x00037509) cell_eswt_app_pane_t1_ParamLimits

0xce1b,	// (0x00037509) cell_eswt_app_pane_t1

0xce4d,	// (0x0003753b) grid_highlight_pane_cp70_ParamLimits

0xce4d,	// (0x0003753b) grid_highlight_pane_cp70

0x941d,	// (0x00033b0b) set_content_pane_g1

0x97d7,	// (0x00033ec5) status_small_volume_pane

0x6a5c,	// (0x0003114a) status_small_volume_pane_g1

0x6a64,	// (0x00031152) volume_small2_pane

0x6a6d,	// (0x0003115b) volume_small2_pane_g1

0x6a76,	// (0x00031164) volume_small2_pane_g2

0x6a7f,	// (0x0003116d) volume_small2_pane_g3

0x6a88,	// (0x00031176) volume_small2_pane_g4

0x6a91,	// (0x0003117f) volume_small2_pane_g5

0x6a9a,	// (0x00031188) volume_small2_pane_g6

0x6aa3,	// (0x00031191) volume_small2_pane_g7

0x6aac,	// (0x0003119a) volume_small2_pane_g8

0x6ab5,	// (0x000311a3) volume_small2_pane_g9

0x6abe,	// (0x000311ac) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0003a32b) volume_small2_pane_g

0xc6e6,	// (0x00036dd4) fep_vkb_top_text_pane_g1_ParamLimits

0xc701,	// (0x00036def) fep_vkb_top_text_pane_t1_ParamLimits

0xc95b,	// (0x00037049) popup_preview_fixed_window_g3_ParamLimits

0xc95b,	// (0x00037049) popup_preview_fixed_window_g3

0x6047,	// (0x00030735) popup_toolbar_trans_pane

0xb146,	// (0x00035834) aid_height_set_list_ParamLimits

0xb157,	// (0x00035845) aid_size_parent_ParamLimits

0x9876,	// (0x00033f64) list_highlight_pane_cp2_ParamLimits

0x941d,	// (0x00033b0b) set_content_pane_g1_ParamLimits

0x7941,	// (0x0003202f) list_single_image_pane_ParamLimits

0x7941,	// (0x0003202f) list_single_image_pane

0xce59,	// (0x00037547) aid_size_cell_image_ParamLimits

0xce59,	// (0x00037547) aid_size_cell_image

0xce66,	// (0x00037554) grid_single_image_pane_ParamLimits

0xce66,	// (0x00037554) grid_single_image_pane

0xce72,	// (0x00037560) list_single_image_pane_g1_ParamLimits

0xce72,	// (0x00037560) list_single_image_pane_g1

0xce7e,	// (0x0003756c) list_single_image_pane_g2_ParamLimits

0xce7e,	// (0x0003756c) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0003a340) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0003a340) list_single_image_pane_g

0xce92,	// (0x00037580) list_single_image_pane_t1_ParamLimits

0xce92,	// (0x00037580) list_single_image_pane_t1

0xcea8,	// (0x00037596) cell_image_list_pane_ParamLimits

0xcea8,	// (0x00037596) cell_image_list_pane

0xcebc,	// (0x000375aa) cell_image_list_pane_g1

0xcec5,	// (0x000375b3) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0003a345) cell_image_list_pane_g

0xcece,	// (0x000375bc) aid_size_cell_tb_trans_pane

0x88d4,	// (0x00032fc2) bg_tb_trans_pane

0xcee0,	// (0x000375ce) grid_tb_trans_pane

0x9d74,	// (0x00034462) bg_tb_trans_pane_g1

0x9d84,	// (0x00034472) bg_tb_trans_pane_g2

0x9d7c,	// (0x0003446a) bg_tb_trans_pane_g3

0x9d94,	// (0x00034482) bg_tb_trans_pane_g4

0x9d8c,	// (0x0003447a) bg_tb_trans_pane_g5

0x9db4,	// (0x000344a2) bg_tb_trans_pane_g6

0x9dac,	// (0x0003449a) bg_tb_trans_pane_g7

0x9d9c,	// (0x0003448a) bg_tb_trans_pane_g8

0x9da4,	// (0x00034492) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0003a34a) bg_tb_trans_pane_g

0xcef4,	// (0x000375e2) cell_toolbar_trans_pane_ParamLimits

0xcef4,	// (0x000375e2) cell_toolbar_trans_pane

0xc330,	// (0x00036a1e) cell_toolbar_trans_pane_g1

0xbedb,	// (0x000365c9) list_form2_midp_pane_t1

0xbee9,	// (0x000365d7) list_form2_midp_pane_t2

0x0001,

0xfaf9,	// (0x0003a1e7) list_form2_midp_pane_t

0xbef7,	// (0x000365e5) scroll_pane_cp51_ParamLimits

0xc0b3,	// (0x000367a1) form2_midp_wait_pane_g1

0xc0bc,	// (0x000367aa) form2_midp_wait_pane_g2

0xc0c5,	// (0x000367b3) form2_midp_wait_pane_g3

0x0002,

0xfb0e,	// (0x0003a1fc) form2_midp_wait_pane_g

0x807a,	// (0x00032768) list_highlight_pane_cp21_ParamLimits

0xc113,	// (0x00036801) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc122,	// (0x00036810) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x78b4,	// (0x00031fa2) list_single_2graphic_im_pane_ParamLimits

0x78b4,	// (0x00031fa2) list_single_2graphic_im_pane

0xcf1a,	// (0x00037608) list_single_2graphic_im_pane_g1_ParamLimits

0xcf1a,	// (0x00037608) list_single_2graphic_im_pane_g1

0xcf2b,	// (0x00037619) list_single_2graphic_im_pane_g2_ParamLimits

0xcf2b,	// (0x00037619) list_single_2graphic_im_pane_g2

0xcf37,	// (0x00037625) list_single_2graphic_im_pane_g3_ParamLimits

0xcf37,	// (0x00037625) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0003a35d) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0003a35d) list_single_2graphic_im_pane_g

0xcf57,	// (0x00037645) list_single_2graphic_im_pane_t1_ParamLimits

0xcf57,	// (0x00037645) list_single_2graphic_im_pane_t1

0xc967,	// (0x00037055) list_single_graphic_2heading_pane_fp_ParamLimits

0xc967,	// (0x00037055) list_single_graphic_2heading_pane_fp

0x7d01,	// (0x000323ef) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7d01,	// (0x000323ef) list_single_graphic_2heading_pane_fp_g1

0xc97d,	// (0x0003706b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc97d,	// (0x0003706b) list_single_graphic_2heading_pane_fp_g2

0x4f06,	// (0x0002f5f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4f06,	// (0x0002f5f4) list_single_graphic_2heading_pane_fp_g3

0x7cd6,	// (0x000323c4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7cd6,	// (0x000323c4) list_single_graphic_2heading_pane_fp_g4

0xc989,	// (0x00037077) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc989,	// (0x00037077) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb96,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb96,	// (0x0003a284) list_single_graphic_2heading_pane_fp_g

0x7eda,	// (0x000325c8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7eda,	// (0x000325c8) list_single_graphic_2heading_pane_fp_t1

0x7d39,	// (0x00032427) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7d39,	// (0x00032427) list_single_graphic_2heading_pane_fp_t2

0x7ef0,	// (0x000325de) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ef0,	// (0x000325de) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0003a366) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0003a366) list_single_graphic_2heading_pane_fp_t

0xc3bc,	// (0x00036aaa) fep_hwr_write_pane_g5_ParamLimits

0xc3bc,	// (0x00036aaa) fep_hwr_write_pane_g5

0xc3c8,	// (0x00036ab6) fep_hwr_write_pane_g6_ParamLimits

0xc3c8,	// (0x00036ab6) fep_hwr_write_pane_g6

0xcc3f,	// (0x0003732d) eswt_shell_pane_ParamLimits

0x9de8,	// (0x000344d6) bg_popup_window_pane_cp18_ParamLimits

0xb0a5,	// (0x00035793) heading_pane_cp70

0xcd69,	// (0x00037457) popup_eswt_tasktip_window_t1_ParamLimits

0x98ed,	// (0x00033fdb) aid_touch_tab_arrow_left

0x98f9,	// (0x00033fe7) aid_touch_tab_arrow_right

0x7751,	// (0x00031e3f) title_pane_g3_ParamLimits

0x7751,	// (0x00031e3f) title_pane_g3

0x8893,	// (0x00032f81) set_value_pane_g1

0x6047,	// (0x00030735) popup_toolbar_trans_pane_ParamLimits

0xcece,	// (0x000375bc) aid_size_cell_tb_trans_pane_ParamLimits

0x88d4,	// (0x00032fc2) bg_tb_trans_pane_ParamLimits

0xcee0,	// (0x000375ce) grid_tb_trans_pane_ParamLimits

0x8303,	// (0x000329f1) cont_note_pane_ParamLimits

0x8303,	// (0x000329f1) cont_note_pane

0x8645,	// (0x00032d33) cont_snote2_single_text_pane_ParamLimits

0x8645,	// (0x00032d33) cont_snote2_single_text_pane

0x8645,	// (0x00032d33) cont_snote2_single_graphic_pane_ParamLimits

0x8645,	// (0x00032d33) cont_snote2_single_graphic_pane

0xa3fa,	// (0x00034ae8) cont_note_wait_pane_ParamLimits

0xa3fa,	// (0x00034ae8) cont_note_wait_pane

0xa3fa,	// (0x00034ae8) cont_note_image_pane_ParamLimits

0xa3fa,	// (0x00034ae8) cont_note_image_pane

0xcf88,	// (0x00037676) popup_note2_window_g1_ParamLimits

0xcf88,	// (0x00037676) popup_note2_window_g1

0xcfb9,	// (0x000376a7) popup_note2_window_t1_ParamLimits

0xcfb9,	// (0x000376a7) popup_note2_window_t1

0xcffe,	// (0x000376ec) popup_note2_window_t2_ParamLimits

0xcffe,	// (0x000376ec) popup_note2_window_t2

0xd043,	// (0x00037731) popup_note2_window_t3_ParamLimits

0xd043,	// (0x00037731) popup_note2_window_t3

0xd088,	// (0x00037776) popup_note2_window_t4_ParamLimits

0xd088,	// (0x00037776) popup_note2_window_t4

0x837b,	// (0x00032a69) popup_note2_window_t5_ParamLimits

0x837b,	// (0x00032a69) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0003a372) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0003a372) popup_note2_window_t

0xd0b7,	// (0x000377a5) popup_note2_image_window_g1_ParamLimits

0xd0b7,	// (0x000377a5) popup_note2_image_window_g1

0xd0c3,	// (0x000377b1) popup_note2_image_window_g2_ParamLimits

0xd0c3,	// (0x000377b1) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0003a37d) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0003a37d) popup_note2_image_window_g

0xd0d5,	// (0x000377c3) popup_note2_image_window_t1_ParamLimits

0xd0d5,	// (0x000377c3) popup_note2_image_window_t1

0xd0ed,	// (0x000377db) popup_note2_image_window_t2_ParamLimits

0xd0ed,	// (0x000377db) popup_note2_image_window_t2

0xd105,	// (0x000377f3) popup_note2_image_window_t3_ParamLimits

0xd105,	// (0x000377f3) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0003a382) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0003a382) popup_note2_image_window_t

0xa408,	// (0x00034af6) popup_note2_wait_window_g1_ParamLimits

0xa408,	// (0x00034af6) popup_note2_wait_window_g1

0xd121,	// (0x0003780f) popup_note2_wait_window_g2_ParamLimits

0xd121,	// (0x0003780f) popup_note2_wait_window_g2

0xa420,	// (0x00034b0e) popup_note2_wait_window_g3_ParamLimits

0xa420,	// (0x00034b0e) popup_note2_wait_window_g3

0x0002,

0xfc9b,	// (0x0003a389) popup_note2_wait_window_g_ParamLimits

0xfc9b,	// (0x0003a389) popup_note2_wait_window_g

0xd12d,	// (0x0003781b) popup_note2_wait_window_t1_ParamLimits

0xd12d,	// (0x0003781b) popup_note2_wait_window_t1

0xd14b,	// (0x00037839) popup_note2_wait_window_t2_ParamLimits

0xd14b,	// (0x00037839) popup_note2_wait_window_t2

0xd169,	// (0x00037857) popup_note2_wait_window_t3_ParamLimits

0xd169,	// (0x00037857) popup_note2_wait_window_t3

0xd17b,	// (0x00037869) popup_note2_wait_window_t4_ParamLimits

0xd17b,	// (0x00037869) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0003a390) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0003a390) popup_note2_wait_window_t

0xd18d,	// (0x0003787b) wait_bar2_pane_ParamLimits

0xd18d,	// (0x0003787b) wait_bar2_pane

0xd1a5,	// (0x00037893) popup_snote2_single_text_window_g1_ParamLimits

0xd1a5,	// (0x00037893) popup_snote2_single_text_window_g1

0xd1cd,	// (0x000378bb) popup_snote2_single_text_window_t1_ParamLimits

0xd1cd,	// (0x000378bb) popup_snote2_single_text_window_t1

0xd219,	// (0x00037907) popup_snote2_single_text_window_t2_ParamLimits

0xd219,	// (0x00037907) popup_snote2_single_text_window_t2

0xd265,	// (0x00037953) popup_snote2_single_text_window_t3_ParamLimits

0xd265,	// (0x00037953) popup_snote2_single_text_window_t3

0xd2a6,	// (0x00037994) popup_snote2_single_text_window_t4_ParamLimits

0xd2a6,	// (0x00037994) popup_snote2_single_text_window_t4

0xd2dc,	// (0x000379ca) popup_snote2_single_text_window_t5_ParamLimits

0xd2dc,	// (0x000379ca) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0003a399) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0003a399) popup_snote2_single_text_window_t

0xd307,	// (0x000379f5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd307,	// (0x000379f5) popup_snote2_single_graphic_window_g1

0xd32f,	// (0x00037a1d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd32f,	// (0x00037a1d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0003a3a4) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0003a3a4) popup_snote2_single_graphic_window_g

0xd357,	// (0x00037a45) popup_snote2_single_graphic_window_t1_ParamLimits

0xd357,	// (0x00037a45) popup_snote2_single_graphic_window_t1

0xd3a3,	// (0x00037a91) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3a3,	// (0x00037a91) popup_snote2_single_graphic_window_t2

0xd265,	// (0x00037953) popup_snote2_single_graphic_window_t3_ParamLimits

0xd265,	// (0x00037953) popup_snote2_single_graphic_window_t3

0xd2a6,	// (0x00037994) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2a6,	// (0x00037994) popup_snote2_single_graphic_window_t4

0xd2dc,	// (0x000379ca) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2dc,	// (0x000379ca) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0003a3a9) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0003a3a9) popup_snote2_single_graphic_window_t

0xbdb2,	// (0x000364a0) clock_nsta_pane_cp2_t1

0xbdb2,	// (0x000364a0) clock_nsta_pane_cp2_t2

0x0001,

0xfacf,	// (0x0003a1bd) clock_nsta_pane_cp2_t

0x537f,	// (0x0002fa6d) form_field_data_wide_pane_g1_ParamLimits

0x88e2,	// (0x00032fd0) form_field_data_wide_pane_g2_ParamLimits

0x88e2,	// (0x00032fd0) form_field_data_wide_pane_g2

0x88ee,	// (0x00032fdc) form_field_data_wide_pane_g3_ParamLimits

0x88ee,	// (0x00032fdc) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00039d69) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00039d69) form_field_data_wide_pane_g

0xbca4,	// (0x00036392) grid_touch_3_pane_ParamLimits

0xbca4,	// (0x00036392) grid_touch_3_pane

0xd3ef,	// (0x00037add) cell_touch_3_pane_ParamLimits

0xd3ef,	// (0x00037add) cell_touch_3_pane

0xc330,	// (0x00036a1e) cell_touch_3_pane_g1

0xc330,	// (0x00036a1e) cell_touch_3_pane_g2

0x0001,

0xfb54,	// (0x0003a242) cell_touch_3_pane_g

0x83ad,	// (0x00032a9b) cont_query_data_pane

0x83b5,	// (0x00032aa3) cont_query_data_pane_cp1

0xd420,	// (0x00037b0e) button_value_adjust_pane_cp7

0xd428,	// (0x00037b16) query_popup_pane_cp3

0x9010,	// (0x000336fe) bg_popup_sub_pane_cp22_ParamLimits

0x5724,	// (0x0002fe12) navi_navi_volume_pane_cp2

0x573c,	// (0x0002fe2a) popup_side_volume_key_window_g2

0x5748,	// (0x0002fe36) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00039dff) popup_side_volume_key_window_g

0x5762,	// (0x0002fe50) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00039e06) popup_side_volume_key_window_t

0x92c6,	// (0x000339b4) popup_side_volume_key_window_ParamLimits

0x4fec,	// (0x0002f6da) list_double_graphic_pane_g4_ParamLimits

0x4fec,	// (0x0002f6da) list_double_graphic_pane_g4

0x78fb,	// (0x00031fe9) list_single_2heading_msg_pane_ParamLimits

0x78fb,	// (0x00031fe9) list_single_2heading_msg_pane

0x7f10,	// (0x000325fe) list_single_2heading_msg_pane_g1_ParamLimits

0x7f10,	// (0x000325fe) list_single_2heading_msg_pane_g1

0x4e1b,	// (0x0002f509) list_single_2heading_msg_pane_g2_ParamLimits

0x4e1b,	// (0x0002f509) list_single_2heading_msg_pane_g2

0x7f1c,	// (0x0003260a) list_single_2heading_msg_pane_g3_ParamLimits

0x7f1c,	// (0x0003260a) list_single_2heading_msg_pane_g3

0x7f28,	// (0x00032616) list_single_2heading_msg_pane_g4_ParamLimits

0x7f28,	// (0x00032616) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0003a3b4) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0003a3b4) list_single_2heading_msg_pane_g

0x7f40,	// (0x0003262e) list_single_2heading_msg_pane_t1_ParamLimits

0x7f40,	// (0x0003262e) list_single_2heading_msg_pane_t1

0x7f68,	// (0x00032656) list_single_2heading_msg_pane_t2_ParamLimits

0x7f68,	// (0x00032656) list_single_2heading_msg_pane_t2

0x7f9c,	// (0x0003268a) list_single_2heading_msg_pane_t3_ParamLimits

0x7f9c,	// (0x0003268a) list_single_2heading_msg_pane_t3

0x7fd5,	// (0x000326c3) list_single_2heading_msg_pane_t4_ParamLimits

0x7fd5,	// (0x000326c3) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0003a3bd) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0003a3bd) list_single_2heading_msg_pane_t

0x775d,	// (0x00031e4b) title_pane_g4_ParamLimits

0x775d,	// (0x00031e4b) title_pane_g4

0x5532,	// (0x0002fc20) title_pane_stacon_g3_ParamLimits

0x5532,	// (0x0002fc20) title_pane_stacon_g3

0xcf4b,	// (0x00037639) list_single_2graphic_im_pane_g4_ParamLimits

0xcf4b,	// (0x00037639) list_single_2graphic_im_pane_g4

0xae61,	// (0x0003554f) popup_side_volume_key_window_cp

0xb60f,	// (0x00035cfd) main_idle_act2_pane_t1

0x6159,	// (0x00030847) toolbar_button_pane_g10

0x883d,	// (0x00032f2b) popup_toolbar_window_cp1

0xbda3,	// (0x00036491) clock_nsta_pane_cp_t1

0xbda3,	// (0x00036491) clock_nsta_pane_cp_t2

0x0001,

0xfaca,	// (0x0003a1b8) clock_nsta_pane_cp_t

0x5724,	// (0x0002fe12) navi_navi_volume_pane_cp2_ParamLimits

0x5730,	// (0x0002fe1e) popup_side_volume_key_window_g1_ParamLimits

0x573c,	// (0x0002fe2a) popup_side_volume_key_window_g2_ParamLimits

0x5748,	// (0x0002fe36) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00039dff) popup_side_volume_key_window_g_ParamLimits

0x66c8,	// (0x00030db6) fep_hwr_aid_pane

0x676f,	// (0x00030e5d) bg_fep_hwr_top_pane_g4_ParamLimits

0xc38c,	// (0x00036a7a) fep_hwr_top_pane_g1_ParamLimits

0xc39e,	// (0x00036a8c) fep_hwr_top_pane_g2_ParamLimits

0x678f,	// (0x00030e7d) fep_hwr_top_pane_g3_ParamLimits

0xfb1f,	// (0x0003a20d) fep_hwr_top_pane_g_ParamLimits

0x67a4,	// (0x00030e92) fep_hwr_top_text_pane_ParamLimits

0xac24,	// (0x00035312) aid_touch_tab_arrow_arrow_2

0xac2d,	// (0x0003531b) aid_touch_tab_arrow_left_2

0x66dc,	// (0x00030dca) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6713,	// (0x00030e01) fep_hwr_prediction_pane

0xc4f5,	// (0x00036be3) fep_vkb_prediction_pane

0xc5f2,	// (0x00036ce0) fep_vkb_side_pane_g3_ParamLimits

0xc5f2,	// (0x00036ce0) fep_vkb_side_pane_g3

0x691f,	// (0x0003100d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x698b,	// (0x00031079) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6998,	// (0x00031086) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbce,	// (0x0003a2bc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6ac7,	// (0x000311b5) fep_hwr_prediction_pane_g1

0x6ad1,	// (0x000311bf) fep_hwr_prediction_pane_g2

0x6ad9,	// (0x000311c7) fep_hwr_prediction_pane_g3

0x6ae1,	// (0x000311cf) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0003a3c6) fep_hwr_prediction_pane_g

0xd44d,	// (0x00037b3b) fep_vkb_prediction_pane_g1

0xd457,	// (0x00037b45) fep_vkb_prediction_pane_g2

0xd45f,	// (0x00037b4d) fep_vkb_prediction_pane_g3

0xd467,	// (0x00037b55) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0003a3cf) fep_vkb_prediction_pane_g

0x6524,	// (0x00030c12) slider_set_pane_g3

0x6538,	// (0x00030c26) slider_set_pane_g4

0x6550,	// (0x00030c3e) slider_set_pane_g5

0x6524,	// (0x00030c12) slider_set_pane_g6

0x6566,	// (0x00030c54) slider_set_pane_g7

0xb2b4,	// (0x000359a2) slider_form_pane_g3

0xb2bd,	// (0x000359ab) slider_form_pane_g4

0xb2c5,	// (0x000359b3) slider_form_pane_g5

0xb2b4,	// (0x000359a2) slider_form_pane_g6

0xb2cd,	// (0x000359bb) slider_form_pane_g7

0xb8ae,	// (0x00035f9c) slider_set_pane_vc_g3

0xb8b7,	// (0x00035fa5) slider_set_pane_vc_g4

0xb8c0,	// (0x00035fae) slider_set_pane_vc_g5

0xb8ae,	// (0x00035f9c) slider_set_pane_vc_g6

0xb8c9,	// (0x00035fb7) slider_set_pane_vc_g7

0xba79,	// (0x00036167) slider_form_pane_vc_g1

0xba82,	// (0x00036170) slider_form_pane_vc_g2

0xba8b,	// (0x00036179) slider_form_pane_vc_g3

0xba79,	// (0x00036167) slider_form_pane_vc_g4

0xba94,	// (0x00036182) slider_form_pane_vc_g5

0x0004,

0xfa9c,	// (0x0003a18a) slider_form_pane_vc_g

0x4b19,	// (0x0002f207) main_idle_act3_pane

0xd46f,	// (0x00037b5d) ai3_links_pane

0xd478,	// (0x00037b66) popup_ai3_data_window_ParamLimits

0xd478,	// (0x00037b66) popup_ai3_data_window

0x7715,	// (0x00031e03) grid_ai3_links_pane

0xd490,	// (0x00037b7e) cell_ai3_links_pane_ParamLimits

0xd490,	// (0x00037b7e) cell_ai3_links_pane

0xd4a8,	// (0x00037b96) bg_popup_sub_pane_cp11

0xd4b5,	// (0x00037ba3) cell_ai3_links_pane_g1

0x7715,	// (0x00031e03) bg_popup_sub_pane_cp12

0xd4da,	// (0x00037bc8) heading_ai3_data_pane

0xd4e2,	// (0x00037bd0) list_ai3_gene_pane

0xd4ee,	// (0x00037bdc) popup_ai3_data_window_g1

0xd4f6,	// (0x00037be4) heading_ai3_data_pane_g1

0xd4fe,	// (0x00037bec) heading_ai3_data_pane_t1

0xd50c,	// (0x00037bfa) list_double_ai3_gene_pane_ParamLimits

0xd50c,	// (0x00037bfa) list_double_ai3_gene_pane

0xd519,	// (0x00037c07) list_single_ai3_gene_pane_ParamLimits

0xd519,	// (0x00037c07) list_single_ai3_gene_pane

0xc2f5,	// (0x000369e3) list_highlight_pane_cp7_ParamLimits

0xc2f5,	// (0x000369e3) list_highlight_pane_cp7

0xd526,	// (0x00037c14) list_single_a13_gene_pane_t1_ParamLimits

0xd526,	// (0x00037c14) list_single_a13_gene_pane_t1

0xd53d,	// (0x00037c2b) list_single_ai3_gene_pane_g1

0xd546,	// (0x00037c34) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0003a3d8) list_single_ai3_gene_pane_g

0xd54e,	// (0x00037c3c) list_double_ai3_gene_pane_g1_ParamLimits

0xd54e,	// (0x00037c3c) list_double_ai3_gene_pane_g1

0xd55a,	// (0x00037c48) list_double_ai3_gene_pane_t1_ParamLimits

0xd55a,	// (0x00037c48) list_double_ai3_gene_pane_t1

0xd576,	// (0x00037c64) list_double_ai3_gene_pane_t2_ParamLimits

0xd576,	// (0x00037c64) list_double_ai3_gene_pane_t2

0xd58b,	// (0x00037c79) list_double_ai3_gene_pane_t3_ParamLimits

0xd58b,	// (0x00037c79) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0003a3dd) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0003a3dd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7f06,	// (0x000325f4) aid_size_min_col_2

0xd439,	// (0x00037b27) aid_size_min_msg_ParamLimits

0xd439,	// (0x00037b27) aid_size_min_msg

0xc6f2,	// (0x00036de0) fep_vkb_top_text_pane_g2_ParamLimits

0xc6f2,	// (0x00036de0) fep_vkb_top_text_pane_g2

0x0001,

0xfb4f,	// (0x0003a23d) fep_vkb_top_text_pane_g_ParamLimits

0xfb4f,	// (0x0003a23d) fep_vkb_top_text_pane_g

0x4b19,	// (0x0002f207) main_hc_apps_shell_pane

0xd5a8,	// (0x00037c96) grid_hc_apps_pane_ParamLimits

0xd5a8,	// (0x00037c96) grid_hc_apps_pane

0xd5b7,	// (0x00037ca5) list_hc_apps_pane

0xd5bf,	// (0x00037cad) scroll_pane_cp37_ParamLimits

0xd5bf,	// (0x00037cad) scroll_pane_cp37

0xd5cb,	// (0x00037cb9) cell_hc_apps_pane_ParamLimits

0xd5cb,	// (0x00037cb9) cell_hc_apps_pane

0xd679,	// (0x00037d67) cell_hc_apps_pane_g1_ParamLimits

0xd679,	// (0x00037d67) cell_hc_apps_pane_g1

0xd6aa,	// (0x00037d98) cell_hc_apps_pane_g2_ParamLimits

0xd6aa,	// (0x00037d98) cell_hc_apps_pane_g2

0xd6c6,	// (0x00037db4) cell_hc_apps_pane_g3_ParamLimits

0xd6c6,	// (0x00037db4) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0003a3e4) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0003a3e4) cell_hc_apps_pane_g

0xd6e8,	// (0x00037dd6) cell_hc_apps_pane_t1_ParamLimits

0xd6e8,	// (0x00037dd6) cell_hc_apps_pane_t1

0x8303,	// (0x000329f1) grid_highlight_pane_cp10_ParamLimits

0x8303,	// (0x000329f1) grid_highlight_pane_cp10

0xd728,	// (0x00037e16) list_single_hc_apps_pane_ParamLimits

0xd728,	// (0x00037e16) list_single_hc_apps_pane

0xd790,	// (0x00037e7e) list_single_hc_apps_pane_g1

0x7ffa,	// (0x000326e8) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0003a3eb) list_single_hc_apps_pane_g

0x8013,	// (0x00032701) list_single_hc_apps_pane_g2_copy1

0x802f,	// (0x0003271d) list_single_hc_apps_pane_t1

0x807a,	// (0x00032768) bg_set_opt_pane_cp_ParamLimits

0x4d6c,	// (0x0002f45a) setting_slider_pane_t1_ParamLimits

0x4d85,	// (0x0002f473) setting_slider_pane_t2_ParamLimits

0x4d9f,	// (0x0002f48d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00039c4c) setting_slider_pane_t_ParamLimits

0x4db7,	// (0x0002f4a5) slider_set_pane_ParamLimits

0x5a50,	// (0x0003013e) control_pane_g5_ParamLimits

0x5a50,	// (0x0003013e) control_pane_g5

0xb111,	// (0x000357ff) slider_set_pane_g1_ParamLimits

0x6518,	// (0x00030c06) slider_set_pane_g2_ParamLimits

0x6524,	// (0x00030c12) slider_set_pane_g3_ParamLimits

0x6538,	// (0x00030c26) slider_set_pane_g4_ParamLimits

0x6550,	// (0x00030c3e) slider_set_pane_g5_ParamLimits

0x6524,	// (0x00030c12) slider_set_pane_g6_ParamLimits

0x6566,	// (0x00030c54) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a052) slider_set_pane_g_ParamLimits

0x93c8,	// (0x00033ab6) navi_icon_text_pane_ParamLimits

0x98ae,	// (0x00033f9c) aid_fill_nsta_2_ParamLimits

0x98ed,	// (0x00033fdb) aid_touch_tab_arrow_left_ParamLimits

0x98f9,	// (0x00033fe7) aid_touch_tab_arrow_right_ParamLimits

0x9965,	// (0x00034053) clock_nsta_pane_ParamLimits

0xac06,	// (0x000352f4) navi_icon_pane_g1_ParamLimits

0xac12,	// (0x00035300) navi_text_pane_t1_ParamLimits

0xbeb5,	// (0x000365a3) navi_icon_text_pane_g1_ParamLimits

0xbec1,	// (0x000365af) navi_icon_text_pane_t1_ParamLimits

0xd790,	// (0x00037e7e) list_single_hc_apps_pane_g1_ParamLimits

0x7ffa,	// (0x000326e8) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0003a3eb) list_single_hc_apps_pane_g_ParamLimits

0x8013,	// (0x00032701) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x802f,	// (0x0003271d) list_single_hc_apps_pane_t1_ParamLimits

0x4c76,	// (0x0002f364) popup_toolbar2_fixed_window_ParamLimits

0x4c76,	// (0x0002f364) popup_toolbar2_fixed_window

0x603d,	// (0x0003072b) popup_toolbar2_float_window

0x7715,	// (0x00031e03) bg_popup_sub_pane_cp27

0xd7a9,	// (0x00037e97) grid_toolbar2_float_pane

0x7715,	// (0x00031e03) bg_popup_sub_pane_cp26

0xd7a9,	// (0x00037e97) grid_toolbar2_fixed_pane

0xd7b1,	// (0x00037e9f) cell_toolbar2_fixed_pane_ParamLimits

0xd7b1,	// (0x00037e9f) cell_toolbar2_fixed_pane

0xd7c2,	// (0x00037eb0) cell_toolbar2_fixed_pane_g1

0x5f13,	// (0x00030601) toolbar2_fixed_button_pane

0x9d74,	// (0x00034462) toolbar2_fixed_button_pane_g1

0x9d84,	// (0x00034472) toolbar2_fixed_button_pane_g2

0x9d7c,	// (0x0003446a) toolbar2_fixed_button_pane_g3

0x9d94,	// (0x00034482) toolbar2_fixed_button_pane_g4

0x9d8c,	// (0x0003447a) toolbar2_fixed_button_pane_g5

0x9d9c,	// (0x0003448a) toolbar2_fixed_button_pane_g6

0x9da4,	// (0x00034492) toolbar2_fixed_button_pane_g7

0x9db4,	// (0x000344a2) toolbar2_fixed_button_pane_g8

0x9dac,	// (0x0003449a) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00039f54) toolbar2_fixed_button_pane_g

0xd7cb,	// (0x00037eb9) cell_toolbar2_float_pane_ParamLimits

0xd7cb,	// (0x00037eb9) cell_toolbar2_float_pane

0xd7df,	// (0x00037ecd) cell_toolbar2_float_pane_g1

0x5f13,	// (0x00030601) toolbar2_fixed_button_pane_cp

0xc45c,	// (0x00036b4a) fep_vkb_accented_list_pane_ParamLimits

0xc45c,	// (0x00036b4a) fep_vkb_accented_list_pane

0x68ff,	// (0x00030fed) bg_popup_fep_shadow_pane_g9

0x953c,	// (0x00033c2a) bg_popup_fep_shadow_pane_cp3

0x8a29,	// (0x00033117) list_accented_list_pane

0xd7e8,	// (0x00037ed6) list_single_accented_list_pane_ParamLimits

0xd7e8,	// (0x00037ed6) list_single_accented_list_pane

0x953c,	// (0x00033c2a) list_highlight_pane_cp10

0xd7f9,	// (0x00037ee7) list_single_accented_list_pane_t1

0x5f8d,	// (0x0003067b) popup_slider_window_ParamLimits

0x5f8d,	// (0x0003067b) popup_slider_window

0xd430,	// (0x00037b1e) aid_indentation_list_msg

0xd8b3,	// (0x00037fa1) bg_popup_window_pane_cp19

0xd91d,	// (0x0003800b) popup_slider_window_g1

0xd939,	// (0x00038027) popup_slider_window_g2

0xd955,	// (0x00038043) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0003a3f0) popup_slider_window_g

0xd9b1,	// (0x0003809f) popup_slider_window_t1

0xda25,	// (0x00038113) small_volume_slider_vertical_pane

0xc330,	// (0x00036a1e) small_volume_slider_vertical_pane_g1

0xc330,	// (0x00036a1e) small_volume_slider_vertical_pane_g2

0xda41,	// (0x0003812f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0003a402) small_volume_slider_vertical_pane_g

0x4a3c,	// (0x0002f12a) area_side_right_pane_ParamLimits

0x4a3c,	// (0x0002f12a) area_side_right_pane

0x6ae9,	// (0x000311d7) aid_size_side_button_ParamLimits

0x6ae9,	// (0x000311d7) aid_size_side_button

0x6afd,	// (0x000311eb) grid_sctrl_middle_pane_ParamLimits

0x6afd,	// (0x000311eb) grid_sctrl_middle_pane

0x6b1c,	// (0x0003120a) sctrl_sk_bottom_pane

0x6b2d,	// (0x0003121b) sctrl_sk_top_pane

0x6b3f,	// (0x0003122d) aid_touch_sctrl_top

0x6b4c,	// (0x0003123a) bg_sctrl_sk_pane_ParamLimits

0x6b4c,	// (0x0003123a) bg_sctrl_sk_pane

0x6b5a,	// (0x00031248) sctrl_sk_top_pane_g1

0x6b67,	// (0x00031255) sctrl_sk_top_pane_t1

0x6b3f,	// (0x0003122d) aid_touch_sctrl_bottom

0x6b4c,	// (0x0003123a) bg_sctrl_sk_pane_cp_ParamLimits

0x6b4c,	// (0x0003123a) bg_sctrl_sk_pane_cp

0x6b82,	// (0x00031270) sctrl_sk_bottom_pane_g1

0x6b67,	// (0x00031255) sctrl_sk_bottom_pane_t1

0x6b8b,	// (0x00031279) cell_sctrl_middle_pane_ParamLimits

0x6b8b,	// (0x00031279) cell_sctrl_middle_pane

0x6ba6,	// (0x00031294) aid_touch_sctrl_middle_ParamLimits

0x6ba6,	// (0x00031294) aid_touch_sctrl_middle

0x6bb8,	// (0x000312a6) bg_sctrl_middle_pane_ParamLimits

0x6bb8,	// (0x000312a6) bg_sctrl_middle_pane

0x691f,	// (0x0003100d) cell_sctrl_middle_pane_g1_ParamLimits

0x691f,	// (0x0003100d) cell_sctrl_middle_pane_g1

0x6bc6,	// (0x000312b4) cell_sctrl_middle_pane_g2_ParamLimits

0x6bc6,	// (0x000312b4) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0003a40e) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0003a40e) cell_sctrl_middle_pane_g

0x9d74,	// (0x00034462) bg_sctrl_middle_pane_g1

0x9d7c,	// (0x0003446a) bg_sctrl_middle_pane_g2

0x9d84,	// (0x00034472) bg_sctrl_middle_pane_g3

0x9d8c,	// (0x0003447a) bg_sctrl_middle_pane_g4

0x9d94,	// (0x00034482) bg_sctrl_middle_pane_g5

0x9d9c,	// (0x0003448a) bg_sctrl_middle_pane_g6

0x9da4,	// (0x00034492) bg_sctrl_middle_pane_g7

0x9dac,	// (0x0003449a) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0003a413) bg_sctrl_middle_pane_g

0x9db4,	// (0x000344a2) bg_sctrl_middle_pane_g8_copy1

0x9d74,	// (0x00034462) bg_sctrl_sk_pane_g1

0x9d84,	// (0x00034472) bg_sctrl_sk_pane_g2

0x9d7c,	// (0x0003446a) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00039f54) bg_sctrl_sk_pane_g

0x8803,	// (0x00032ef1) aid_size_touch_scroll_bar

0x9d94,	// (0x00034482) bg_sctrl_sk_pane_g4

0x9d8c,	// (0x0003447a) bg_sctrl_sk_pane_g5

0x9d9c,	// (0x0003448a) bg_sctrl_sk_pane_g6

0x9da4,	// (0x00034492) bg_sctrl_sk_pane_g7

0x9db4,	// (0x000344a2) bg_sctrl_sk_pane_g8

0x9dac,	// (0x0003449a) bg_sctrl_sk_pane_g9

0x5bfe,	// (0x000302ec) popup_fep_china_hwr2_fs_candidate_window

0x5c08,	// (0x000302f6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c08,	// (0x000302f6) popup_fep_china_hwr2_fs_control_window

0x691f,	// (0x0003100d) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0003a409) sctrl_sk_top_pane_g

0xda4a,	// (0x00038138) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4a,	// (0x00038138) aid_fep_china_hwr2_fs_cell

0xda5c,	// (0x0003814a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5c,	// (0x0003814a) bg_popup_fep_shadow_pane_cp4

0xda73,	// (0x00038161) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda73,	// (0x00038161) bg_popup_fep_shadow_pane_cp5

0xda85,	// (0x00038173) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda85,	// (0x00038173) popup_fep_china_hwr2_fs_control_bar_grid

0xda95,	// (0x00038183) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9d,	// (0x0003818b) aid_fep_china_hwr2_fs_candi_cell

0x7715,	// (0x00031e03) bg_popup_fep_shadow_pane_cp6

0xdaa7,	// (0x00038195) popup_fep_china_hwr2_fs_candidate_grid

0xdab1,	// (0x0003819f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab1,	// (0x0003819f) cell_fep_china_hwr2_fs_funtion_grid

0xc330,	// (0x00036a1e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdac9,	// (0x000381b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdac9,	// (0x000381b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad7,	// (0x000381c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad7,	// (0x000381c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0003a424) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0003a424) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaed,	// (0x000381db) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaed,	// (0x000381db) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb02,	// (0x000381f0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb02,	// (0x000381f0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0003a429) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0003a429) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1e,	// (0x0003820c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb26,	// (0x00038214) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2e,	// (0x0003821c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0003a42e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb36,	// (0x00038224) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb36,	// (0x00038224) cell_fep_china_hwr2_fs_candidate_grid

0xdb4f,	// (0x0003823d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb57,	// (0x00038245) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc330,	// (0x00036a1e) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc330,	// (0x00036a1e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb54,	// (0x0003a242) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb5f,	// (0x0003824d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9972,	// (0x00034060) clock_nsta_pane_cp_24_ParamLimits

0x9972,	// (0x00034060) clock_nsta_pane_cp_24

0x99f0,	// (0x000340de) indicator_nsta_pane_cp_24_ParamLimits

0x99f0,	// (0x000340de) indicator_nsta_pane_cp_24

0xaa82,	// (0x00035170) heading_pane_g1

0x0001,

0xf8cb,	// (0x00039fb9) heading_pane_g

0xb458,	// (0x00035b46) grid_sct_catagory_button_pane

0xb488,	// (0x00035b76) scroll_pane_cp5_ParamLimits

0xbf03,	// (0x000365f1) button_value_adjust_pane_cp5_ParamLimits

0xbf03,	// (0x000365f1) button_value_adjust_pane_cp5

0xbfe2,	// (0x000366d0) form2_midp_time_pane_ParamLimits

0xdb6d,	// (0x0003825b) cell_sct_catagory_button_pane_ParamLimits

0xdb6d,	// (0x0003825b) cell_sct_catagory_button_pane

0xc2f5,	// (0x000369e3) bg_button_pane_cp01_ParamLimits

0xc2f5,	// (0x000369e3) bg_button_pane_cp01

0xc330,	// (0x00036a1e) cell_sct_catagory_button_pane_g1

0x5fcc,	// (0x000306ba) popup_tb_extension_window

0xdb7f,	// (0x0003826d) aid_size_cell_ext_ParamLimits

0xdb7f,	// (0x0003826d) aid_size_cell_ext

0x8303,	// (0x000329f1) bg_tb_trans_pane_cp1_ParamLimits

0x8303,	// (0x000329f1) bg_tb_trans_pane_cp1

0xdb9f,	// (0x0003828d) grid_tb_ext_pane_ParamLimits

0xdb9f,	// (0x0003828d) grid_tb_ext_pane

0xdbd1,	// (0x000382bf) cell_tb_ext_pane_ParamLimits

0xdbd1,	// (0x000382bf) cell_tb_ext_pane

0xdbe8,	// (0x000382d6) cell_tb_ext_pane_g1_ParamLimits

0xdbe8,	// (0x000382d6) cell_tb_ext_pane_g1

0xdc05,	// (0x000382f3) cell_tb_ext_pane_t1

0x8303,	// (0x000329f1) list_highlight_pane_cp11_ParamLimits

0x8303,	// (0x000329f1) list_highlight_pane_cp11

0x4c95,	// (0x0002f383) popup_uni_indicator_window_ParamLimits

0x4c95,	// (0x0002f383) popup_uni_indicator_window

0x88d4,	// (0x00032fc2) bg_popup_sub_pane_cp14

0xdc20,	// (0x0003830e) list_uniindi_pane

0xdc2c,	// (0x0003831a) uniindi_top_pane

0x8303,	// (0x000329f1) bg_uniindi_top_pane

0xdc4b,	// (0x00038339) uniindi_top_pane_g1

0xdc61,	// (0x0003834f) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0003a435) uniindi_top_pane_g

0xdc8b,	// (0x00038379) uniindi_top_pane_t1

0xdcb5,	// (0x000383a3) list_single_uniindi_pane_ParamLimits

0xdcb5,	// (0x000383a3) list_single_uniindi_pane

0xc330,	// (0x00036a1e) bg_uniindi_top_pane_g1

0xdcc8,	// (0x000383b6) list_single_uniindi_pane_g1

0xdcdb,	// (0x000383c9) list_single_uniindi_pane_t1

0x4b19,	// (0x0002f207) control_bg_pane

0xdd00,	// (0x000383ee) bg_sctrl_sk_pane_cp1

0xdd09,	// (0x000383f7) bg_sctrl_sk_pane_cp2

0xdd12,	// (0x00038400) control_bg_pane_g1

0xdd1b,	// (0x00038409) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0003a43e) control_bg_pane_g

0xbd47,	// (0x00036435) cell_indicator_nsta_pane_g1_ParamLimits

0xbd55,	// (0x00036443) cell_indicator_nsta_pane_g2_ParamLimits

0xfab8,	// (0x0003a1a6) cell_indicator_nsta_pane_g_ParamLimits

0x7cc3,	// (0x000323b1) form2_midp_time_pane_t1_ParamLimits

0x5b60,	// (0x0003024e) main_idle_act4_pane_ParamLimits

0x5b60,	// (0x0003024e) main_idle_act4_pane

0x5fcc,	// (0x000306ba) popup_tb_extension_window_ParamLimits

0xdbc1,	// (0x000382af) tb_ext_find_pane_ParamLimits

0xdbc1,	// (0x000382af) tb_ext_find_pane

0xdd24,	// (0x00038412) ai_gene_pane_1_cp1

0x967b,	// (0x00033d69) ai_gene_pane_2_cp1

0xdd2c,	// (0x0003841a) list_single_idle_plugin_calendar_pane

0xdd35,	// (0x00038423) list_single_idle_plugin_notification_pane

0xdd3e,	// (0x0003842c) list_single_idle_plugin_player_pane

0xdd47,	// (0x00038435) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd47,	// (0x00038435) list_single_idle_plugin_shortcut_pane

0xdd69,	// (0x00038457) main_idle_act4_pane_t1

0xdd7b,	// (0x00038469) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0003a443) main_idle_act4_pane_t

0xdd8d,	// (0x0003847b) middle_sk_idle_act4_pane_ParamLimits

0xdd8d,	// (0x0003847b) middle_sk_idle_act4_pane

0xdda3,	// (0x00038491) popup_clock_digital_analogue_window_cp2

0xddbd,	// (0x000384ab) shortcut_wheel_idle_act4_pane_ParamLimits

0xddbd,	// (0x000384ab) shortcut_wheel_idle_act4_pane

0xc330,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g1

0xc330,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g2

0xc330,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g3

0xc330,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g4

0xc330,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g5

0xddd1,	// (0x000384bf) shortcut_wheel_idle_act4_pane_g6

0xddd9,	// (0x000384c7) shortcut_wheel_idle_act4_pane_g7

0xdde1,	// (0x000384cf) shortcut_wheel_idle_act4_pane_g8

0xdde9,	// (0x000384d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0003a448) shortcut_wheel_idle_act4_pane_g

0xc59e,	// (0x00036c8c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc59e,	// (0x00036c8c) middle_sk_idle_act4_pane_g1

0xde4d,	// (0x0003853b) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4d,	// (0x0003853b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0003a46b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0003a46b) middle_sk_idle_act4_pane_g

0xde59,	// (0x00038547) middle_sk_idle_act4_pane_t1_ParamLimits

0xde59,	// (0x00038547) middle_sk_idle_act4_pane_t1

0xde76,	// (0x00038564) grid_ai_shortcut_pane_ParamLimits

0xde76,	// (0x00038564) grid_ai_shortcut_pane

0xde8f,	// (0x0003857d) list_highlight_pane_cp16_ParamLimits

0xde8f,	// (0x0003857d) list_highlight_pane_cp16

0xde9c,	// (0x0003858a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde9c,	// (0x0003858a) list_single_idle_plugin_shortcut_pane_g1

0xdea8,	// (0x00038596) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea8,	// (0x00038596) list_single_idle_plugin_shortcut_pane_g2

0xdec0,	// (0x000385ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdec0,	// (0x000385ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0003a470) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0003a470) list_single_idle_plugin_shortcut_pane_g

0xded3,	// (0x000385c1) cell_ai_shortcut_pane_ParamLimits

0xded3,	// (0x000385c1) cell_ai_shortcut_pane

0xdef4,	// (0x000385e2) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x000385e2) cell_ai_shortcut_pane_g1

0xdd24,	// (0x00038412) ai_gene_pane_1_cp2

0xdf16,	// (0x00038604) ai_gene_pane_2_cp2

0xdf1e,	// (0x0003860c) list_highlight_pane_cp15

0xdf27,	// (0x00038615) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x0003860c) list_highlight_pane_cp17

0xdf2f,	// (0x0003861d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00038625) list_single_idle_plugin_player_pane_g1

0xb6af,	// (0x00035d9d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0003a477) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x0003862d) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x0003863b) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x00038649) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x00038657) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0003a47c) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x00038665) wait_bar_pane_cp15

0xdf7f,	// (0x0003866d) grid_ai_notification_pane

0xb6af,	// (0x00035d9d) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x00038676) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x00038676) cell_ai_notification_pane

0xdf95,	// (0x00038683) cell_ai_notification_pane_g1

0xdf9d,	// (0x0003868b) cell_ai_notification_pane_t1

0xdfab,	// (0x00038699) tb_ext_find_button_pane

0xdfb3,	// (0x000386a1) tb_ext_find_pane_g1

0xdfbb,	// (0x000386a9) tb_ext_find_pane_t1

0x8f24,	// (0x00033612) tb_ext_find_button_pane_g1

0xdfc9,	// (0x000386b7) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0003a485) tb_ext_find_button_pane_g

0xdd69,	// (0x00038457) main_idle_act4_pane_t1_ParamLimits

0xdd7b,	// (0x00038469) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0003a443) main_idle_act4_pane_t_ParamLimits

0xdda3,	// (0x00038491) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddb1,	// (0x0003849f) sat_plugin_idle_act4_pane_ParamLimits

0xddb1,	// (0x0003849f) sat_plugin_idle_act4_pane

0xdfd2,	// (0x000386c0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x000386c0) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x000386d3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x000386d3) sat_plugin_idle_act4_pane_t2

0xe019,	// (0x00038707) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe019,	// (0x00038707) sat_plugin_idle_act4_pane_t3

0xe02c,	// (0x0003871a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe02c,	// (0x0003871a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0003a48a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0003a48a) sat_plugin_idle_act4_pane_t

0x4bde,	// (0x0002f2cc) popup_battery_window_ParamLimits

0x4bde,	// (0x0002f2cc) popup_battery_window

0x8303,	// (0x000329f1) bg_popup_sub_pane_cp25_ParamLimits

0x8303,	// (0x000329f1) bg_popup_sub_pane_cp25

0xe03f,	// (0x0003872d) popup_battery_window_g1_ParamLimits

0xe03f,	// (0x0003872d) popup_battery_window_g1

0xe04b,	// (0x00038739) popup_battery_window_t1_ParamLimits

0xe04b,	// (0x00038739) popup_battery_window_t1

0xe05d,	// (0x0003874b) popup_battery_window_t2_ParamLimits

0xe05d,	// (0x0003874b) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0003a493) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0003a493) popup_battery_window_t

0x9544,	// (0x00033c32) midp_canvas_pane_ParamLimits

0x95bd,	// (0x00033cab) midp_keypad_pane_ParamLimits

0x95bd,	// (0x00033cab) midp_keypad_pane

0x9876,	// (0x00033f64) main_midp_pane_ParamLimits

0xbdc1,	// (0x000364af) signal_pane_g2_cp_ParamLimits

0xe07a,	// (0x00038768) aid_size_cell_midp_keypad_ParamLimits

0xe07a,	// (0x00038768) aid_size_cell_midp_keypad

0xe094,	// (0x00038782) midp_keyp_game_grid_pane_ParamLimits

0xe094,	// (0x00038782) midp_keyp_game_grid_pane

0xe0b4,	// (0x000387a2) midp_keyp_rocker_pane_ParamLimits

0xe0b4,	// (0x000387a2) midp_keyp_rocker_pane

0xe0ed,	// (0x000387db) midp_keyp_sk_left_pane_ParamLimits

0xe0ed,	// (0x000387db) midp_keyp_sk_left_pane

0xe147,	// (0x00038835) midp_keyp_sk_right_pane_ParamLimits

0xe147,	// (0x00038835) midp_keyp_sk_right_pane

0x7715,	// (0x00031e03) bg_button_pane_cp03

0xe1a1,	// (0x0003888f) midp_keyp_sk_left_pane_g1

0x7715,	// (0x00031e03) bg_button_pane_cp04

0xe1a1,	// (0x0003888f) midp_keyp_sk_right_pane_g1

0xc330,	// (0x00036a1e) midp_keyp_rocker_pane_g1

0xe1aa,	// (0x00038898) keyp_game_cell_pane_ParamLimits

0xe1aa,	// (0x00038898) keyp_game_cell_pane

0x7715,	// (0x00031e03) bg_button_pane_cp02

0xe1bd,	// (0x000388ab) keyp_game_cell_pane_g1

0x4c14,	// (0x0002f302) popup_fep_vkb2_window_ParamLimits

0x4c14,	// (0x0002f302) popup_fep_vkb2_window

0x6be4,	// (0x000312d2) aid_size_cell_vkb2_ParamLimits

0x6be4,	// (0x000312d2) aid_size_cell_vkb2

0x6c38,	// (0x00031326) popup_fep_vkb2_window_g1_ParamLimits

0x6c38,	// (0x00031326) popup_fep_vkb2_window_g1

0x6c80,	// (0x0003136e) vkb2_area_bottom_pane_ParamLimits

0x6c80,	// (0x0003136e) vkb2_area_bottom_pane

0x6ccc,	// (0x000313ba) vkb2_area_keypad_pane_ParamLimits

0x6ccc,	// (0x000313ba) vkb2_area_keypad_pane

0x6d0e,	// (0x000313fc) vkb2_area_top_pane_ParamLimits

0x6d0e,	// (0x000313fc) vkb2_area_top_pane

0x6d88,	// (0x00031476) vkb2_top_entry_pane_ParamLimits

0x6d88,	// (0x00031476) vkb2_top_entry_pane

0x6db2,	// (0x000314a0) vkb2_top_grid_left_pane_ParamLimits

0x6db2,	// (0x000314a0) vkb2_top_grid_left_pane

0x6dd0,	// (0x000314be) vkb2_top_grid_right_pane_ParamLimits

0x6dd0,	// (0x000314be) vkb2_top_grid_right_pane

0x6dee,	// (0x000314dc) vkb2_cell_keypad_pane_ParamLimits

0x6dee,	// (0x000314dc) vkb2_cell_keypad_pane

0x6ebf,	// (0x000315ad) vkb2_area_bottom_grid_pane_ParamLimits

0x6ebf,	// (0x000315ad) vkb2_area_bottom_grid_pane

0x6ee5,	// (0x000315d3) vkb2_area_bottom_pane_g1_ParamLimits

0x6ee5,	// (0x000315d3) vkb2_area_bottom_pane_g1

0x6f09,	// (0x000315f7) vkb2_area_bottom_pane_g2_ParamLimits

0x6f09,	// (0x000315f7) vkb2_area_bottom_pane_g2

0x6f37,	// (0x00031625) vkb2_area_bottom_pane_g3_ParamLimits

0x6f37,	// (0x00031625) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0003a498) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0003a498) vkb2_area_bottom_pane_g

0x6f98,	// (0x00031686) vkb2_top_cell_left_pane_ParamLimits

0x6f98,	// (0x00031686) vkb2_top_cell_left_pane

0xe1ce,	// (0x000388bc) vkb2_top_entry_pane_g1_ParamLimits

0xe1ce,	// (0x000388bc) vkb2_top_entry_pane_g1

0xe1dc,	// (0x000388ca) vkb2_top_entry_pane_t1_ParamLimits

0xe1dc,	// (0x000388ca) vkb2_top_entry_pane_t1

0xe20e,	// (0x000388fc) vkb2_top_entry_pane_t2_ParamLimits

0xe20e,	// (0x000388fc) vkb2_top_entry_pane_t2

0xe240,	// (0x0003892e) vkb2_top_entry_pane_t3_ParamLimits

0xe240,	// (0x0003892e) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0003a49f) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0003a49f) vkb2_top_entry_pane_t

0x6fe5,	// (0x000316d3) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fe5,	// (0x000316d3) vkb2_top_grid_right_pane_g1

0x6ffb,	// (0x000316e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ffb,	// (0x000316e9) vkb2_top_grid_right_pane_g2

0x7013,	// (0x00031701) vkb2_top_grid_right_pane_g3_ParamLimits

0x7013,	// (0x00031701) vkb2_top_grid_right_pane_g3

0x702b,	// (0x00031719) vkb2_top_grid_right_pane_g4_ParamLimits

0x702b,	// (0x00031719) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0003a4a6) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0003a4a6) vkb2_top_grid_right_pane_g

0x7041,	// (0x0003172f) vkb2_top_cell_left_pane_g1

0x7058,	// (0x00031746) vkb2_cell_keypad_pane_g1_ParamLimits

0x7058,	// (0x00031746) vkb2_cell_keypad_pane_g1

0xe264,	// (0x00038952) vkb2_cell_keypad_pane_t1_ParamLimits

0xe264,	// (0x00038952) vkb2_cell_keypad_pane_t1

0x7066,	// (0x00031754) vkb2_cell_bottom_grid_pane_ParamLimits

0x7066,	// (0x00031754) vkb2_cell_bottom_grid_pane

0x709f,	// (0x0003178d) vkb2_cell_bottom_grid_pane_g1

0xddf1,	// (0x000384df) aid_call2_pane_cp02

0xddf9,	// (0x000384e7) aid_call_pane_cp02

0xde01,	// (0x000384ef) clock_digital_number_pane_cp10

0xde09,	// (0x000384f7) clock_digital_number_pane_cp11

0xde11,	// (0x000384ff) clock_digital_number_pane_cp12

0xde19,	// (0x00038507) clock_digital_number_pane_cp13

0xde21,	// (0x0003850f) clock_digital_separator_pane_cp10

0x8f24,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g1

0x8f24,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g2

0xde29,	// (0x00038517) popup_clock_digital_analogue_window_cp2_g3

0x8f24,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g4

0xde29,	// (0x00038517) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0003a45b) popup_clock_digital_analogue_window_cp2_g

0xde31,	// (0x0003851f) popup_clock_digital_analogue_window_cp2_t1

0xde3f,	// (0x0003852d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0003a466) popup_clock_digital_analogue_window_cp2_t

0xc330,	// (0x00036a1e) clock_digital_number_pane_cp10_g1

0xc330,	// (0x00036a1e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb54,	// (0x0003a242) clock_digital_number_pane_cp10_g

0xc330,	// (0x00036a1e) clock_digital_separator_pane_cp10_g1

0xc330,	// (0x00036a1e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb54,	// (0x0003a242) clock_digital_separator_pane_cp10_g

0xdc6d,	// (0x0003835b) uniindi_top_pane_g3

0xdc7e,	// (0x0003836c) uniindi_top_pane_g4

0x6e79,	// (0x00031567) vkb2_row_keypad_pane_ParamLimits

0x6e79,	// (0x00031567) vkb2_row_keypad_pane

0x70bf,	// (0x000317ad) vkb2_cell_t_keypad_pane_ParamLimits

0x70bf,	// (0x000317ad) vkb2_cell_t_keypad_pane

0x70cf,	// (0x000317bd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70cf,	// (0x000317bd) vkb2_cell_t_keypad_pane_cp08

0x70e2,	// (0x000317d0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70e2,	// (0x000317d0) vkb2_cell_t_keypad_pane_cp09

0x70f6,	// (0x000317e4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70f6,	// (0x000317e4) vkb2_cell_t_keypad_pane_cp01

0x7107,	// (0x000317f5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7107,	// (0x000317f5) vkb2_cell_t_keypad_pane_cp02

0x7118,	// (0x00031806) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7118,	// (0x00031806) vkb2_cell_t_keypad_pane_cp03

0x7129,	// (0x00031817) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7129,	// (0x00031817) vkb2_cell_t_keypad_pane_cp04

0x713a,	// (0x00031828) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x713a,	// (0x00031828) vkb2_cell_t_keypad_pane_cp05

0x714b,	// (0x00031839) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x714b,	// (0x00031839) vkb2_cell_t_keypad_pane_cp06

0x715c,	// (0x0003184a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x715c,	// (0x0003184a) vkb2_cell_t_keypad_pane_cp07

0x716d,	// (0x0003185b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x716d,	// (0x0003185b) vkb2_cell_t_keypad_pane_cp10

0x691f,	// (0x0003100d) vkb2_cell_t_keypad_pane_g1

0xe27b,	// (0x00038969) vkb2_cell_t_keypad_pane_t1

0x4b19,	// (0x0002f207) popup_grid_graphic2_window

0xe28d,	// (0x0003897b) aid_size_cell_graphic2_ParamLimits

0xe28d,	// (0x0003897b) aid_size_cell_graphic2

0xe2c5,	// (0x000389b3) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x000389b3) bg_popup_window_pane_cp21

0xe2d3,	// (0x000389c1) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x000389c1) graphic2_pages_pane

0xe319,	// (0x00038a07) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x00038a07) grid_graphic2_control_pane

0xe357,	// (0x00038a45) grid_graphic2_pane_ParamLimits

0xe357,	// (0x00038a45) grid_graphic2_pane

0xe3cb,	// (0x00038ab9) cell_graphic2_pane

0x4b19,	// (0x0002f207) main_comp_mode_pane

0xd4e2,	// (0x00037bd0) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x00037fa1) bg_popup_window_pane_cp19_ParamLimits

0xd8bf,	// (0x00037fad) bg_touch_area_indi_pane_ParamLimits

0xd8bf,	// (0x00037fad) bg_touch_area_indi_pane

0xd8d5,	// (0x00037fc3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d5,	// (0x00037fc3) bg_touch_area_indi_pane_cp01

0xd8eb,	// (0x00037fd9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8eb,	// (0x00037fd9) bg_touch_area_indi_pane_cp02

0xd903,	// (0x00037ff1) bg_touch_area_indi_pane_cp03_ParamLimits

0xd903,	// (0x00037ff1) bg_touch_area_indi_pane_cp03

0xd91d,	// (0x0003800b) popup_slider_window_g1_ParamLimits

0xd939,	// (0x00038027) popup_slider_window_g2_ParamLimits

0xd955,	// (0x00038043) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0003a3f0) popup_slider_window_g_ParamLimits

0xd9b1,	// (0x0003809f) popup_slider_window_t1_ParamLimits

0xda25,	// (0x00038113) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x00038ab9) cell_graphic2_pane_ParamLimits

0xe419,	// (0x00038b07) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x00038b07) bg_button_pane_cp10

0xe42c,	// (0x00038b1a) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x00038b1a) bg_button_pane_cp11

0xe43f,	// (0x00038b2d) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x00038b2d) graphic2_pages_pane_g1

0xe45a,	// (0x00038b48) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x00038b48) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0003a4b4) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0003a4b4) graphic2_pages_pane_g

0xe472,	// (0x00038b60) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x00038b60) graphic2_pages_pane_t1

0xe488,	// (0x00038b76) cell_graphic2_control_pane_ParamLimits

0xe488,	// (0x00038b76) cell_graphic2_control_pane

0xe4a9,	// (0x00038b97) cell_graphic2_pane_g1_ParamLimits

0xe4a9,	// (0x00038b97) cell_graphic2_pane_g1

0xe4b6,	// (0x00038ba4) cell_graphic2_pane_g2_ParamLimits

0xe4b6,	// (0x00038ba4) cell_graphic2_pane_g2

0xe4c3,	// (0x00038bb1) cell_graphic2_pane_g3_ParamLimits

0xe4c3,	// (0x00038bb1) cell_graphic2_pane_g3

0xe4d0,	// (0x00038bbe) cell_graphic2_pane_g4_ParamLimits

0xe4d0,	// (0x00038bbe) cell_graphic2_pane_g4

0xe4dd,	// (0x00038bcb) cell_graphic2_pane_g5_ParamLimits

0xe4dd,	// (0x00038bcb) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0003a4b9) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0003a4b9) cell_graphic2_pane_g

0xe4f8,	// (0x00038be6) cell_graphic2_pane_t1_ParamLimits

0xe4f8,	// (0x00038be6) cell_graphic2_pane_t1

0x9de8,	// (0x000344d6) grid_highlight_pane_cp11_ParamLimits

0x9de8,	// (0x000344d6) grid_highlight_pane_cp11

0x8303,	// (0x000329f1) bg_button_pane_cp05

0xe521,	// (0x00038c0f) cell_graphic2_control_pane_g1

0xc330,	// (0x00036a1e) bg_touch_area_indi_pane_g1

0xe549,	// (0x00038c37) aid_cmod_rocker_key_size

0xe553,	// (0x00038c41) aid_cmode_itu_key_size

0xe55d,	// (0x00038c4b) main_cmode_video_pane

0xe567,	// (0x00038c55) main_comp_mode_itu_pane

0xe573,	// (0x00038c61) main_comp_mode_rocker_pane

0xe57f,	// (0x00038c6d) cell_cmode_rocker_pane_ParamLimits

0xe57f,	// (0x00038c6d) cell_cmode_rocker_pane

0xe591,	// (0x00038c7f) cell_cmode_itu_pane_ParamLimits

0xe591,	// (0x00038c7f) cell_cmode_itu_pane

0x88d4,	// (0x00032fc2) bg_button_pane_cp06_ParamLimits

0x88d4,	// (0x00032fc2) bg_button_pane_cp06

0xc59e,	// (0x00036c8c) cell_cmode_rocker_pane_g1_ParamLimits

0xc59e,	// (0x00036c8c) cell_cmode_rocker_pane_g1

0xdac9,	// (0x000381b7) cell_cmode_rocker_pane_g2_ParamLimits

0xdac9,	// (0x000381b7) cell_cmode_rocker_pane_g2

0x0001,

0xfddb,	// (0x0003a4c9) cell_cmode_rocker_pane_g_ParamLimits

0xfddb,	// (0x0003a4c9) cell_cmode_rocker_pane_g

0x7715,	// (0x00031e03) bg_button_pane_cp07

0xe5a6,	// (0x00038c94) cell_cmode_itu_pane_g1

0xe5af,	// (0x00038c9d) cell_cmode_itu_pane_t1

0xe5bd,	// (0x00038cab) cell_cmode_itu_pane_t2

0x0001,

0xfde0,	// (0x0003a4ce) cell_cmode_itu_pane_t

0xdcf0,	// (0x000383de) aid_touch_ctrl_left

0xdcf8,	// (0x000383e6) aid_touch_ctrl_right

0x7715,	// (0x00031e03) compa_mode_pane

0xe5cb,	// (0x00038cb9) aid_cmod_rocker_key_size_cp

0xe5d5,	// (0x00038cc3) aid_cmode_itu_key_size_cp

0xe5df,	// (0x00038ccd) compa_mode_pane_g1

0xe5e7,	// (0x00038cd5) compa_mode_pane_g2

0xe5ef,	// (0x00038cdd) compa_mode_pane_g3

0x0002,

0xfde5,	// (0x0003a4d3) compa_mode_pane_g

0xe5f7,	// (0x00038ce5) main_comp_mode_itu_pane_cp

0xe5ff,	// (0x00038ced) main_comp_mode_rocker_pane_cp

0xe607,	// (0x00038cf5) cell_cmode_itu_pane_cp_ParamLimits

0xe607,	// (0x00038cf5) cell_cmode_itu_pane_cp

0xe61c,	// (0x00038d0a) cell_cmode_rocker_pane_cp_ParamLimits

0xe61c,	// (0x00038d0a) cell_cmode_rocker_pane_cp

0x88d4,	// (0x00032fc2) bg_button_pane_cp06_cp_ParamLimits

0x88d4,	// (0x00032fc2) bg_button_pane_cp06_cp

0xc59e,	// (0x00036c8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc59e,	// (0x00036c8c) cell_cmode_rocker_pane_g1_cp

0xc330,	// (0x00036a1e) cell_cmode_rocker_pane_g2_cp

0x7715,	// (0x00031e03) bg_button_pane_cp07_cp

0xe62e,	// (0x00038d1c) cell_cmode_itu_pane_g1_cp

0xe637,	// (0x00038d25) cell_cmode_itu_pane_t1_cp

0xe637,	// (0x00038d25) cell_cmode_itu_pane_t2_cp

0xb2a1,	// (0x0003598f) settings_code_pane_cp2

0x807a,	// (0x00032768) bg_popup_window_pane_cp3_ParamLimits

0x84d1,	// (0x00032bbf) heading_pane_cp3_ParamLimits

0x84dd,	// (0x00032bcb) listscroll_popup_graphic_pane_ParamLimits

0x66c8,	// (0x00030db6) fep_hwr_aid_pane_ParamLimits

0x6b3f,	// (0x0003122d) aid_touch_sctrl_top_ParamLimits

0x6b5a,	// (0x00031248) sctrl_sk_top_pane_g1_ParamLimits

0x691f,	// (0x0003100d) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0003a409) sctrl_sk_top_pane_g_ParamLimits

0x6b67,	// (0x00031255) sctrl_sk_top_pane_t1_ParamLimits

0x6b3f,	// (0x0003122d) aid_touch_sctrl_bottom_ParamLimits

0x6b67,	// (0x00031255) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc39,	// (0x00038327) aid_area_touch_clock

0x6d50,	// (0x0003143e) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d50,	// (0x0003143e) aid_vkb2_area_top_pane_cell

0x6e9b,	// (0x00031589) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e9b,	// (0x00031589) aid_vkb2_area_bottom_pane_cell

0xe1c6,	// (0x000388b4) popup_char_count_window

0xe645,	// (0x00038d33) popup_char_count_window_g1

0xe64e,	// (0x00038d3c) popup_char_count_window_g2

0xe657,	// (0x00038d45) popup_char_count_window_g3

0x0002,

0xfdec,	// (0x0003a4da) popup_char_count_window_g

0xe660,	// (0x00038d4e) popup_char_count_window_t1

0x6c16,	// (0x00031304) popup_fep_char_preview_window_ParamLimits

0x6c16,	// (0x00031304) popup_fep_char_preview_window

0x6d6e,	// (0x0003145c) vkb2_top_candi_pane_ParamLimits

0x6d6e,	// (0x0003145c) vkb2_top_candi_pane

0xe66e,	// (0x00038d5c) cell_vkb2_top_candi_pane_ParamLimits

0xe66e,	// (0x00038d5c) cell_vkb2_top_candi_pane

0x7182,	// (0x00031870) bg_popup_fep_char_preview_window_ParamLimits

0x7182,	// (0x00031870) bg_popup_fep_char_preview_window

0x7190,	// (0x0003187e) popup_fep_char_preview_window_t1_ParamLimits

0x7190,	// (0x0003187e) popup_fep_char_preview_window_t1

0xe6bb,	// (0x00038da9) bg_popup_fep_char_preview_window_g1

0xe6c3,	// (0x00038db1) bg_popup_fep_char_preview_window_g2

0xe6cb,	// (0x00038db9) bg_popup_fep_char_preview_window_g3

0xe6d3,	// (0x00038dc1) bg_popup_fep_char_preview_window_g4

0xe6db,	// (0x00038dc9) bg_popup_fep_char_preview_window_g5

0x71ca,	// (0x000318b8) bg_popup_fep_char_preview_window_g6

0xe6e3,	// (0x00038dd1) bg_popup_fep_char_preview_window_g7

0xe6eb,	// (0x00038dd9) bg_popup_fep_char_preview_window_g8

0xe6f3,	// (0x00038de1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf3,	// (0x0003a4e1) bg_popup_fep_char_preview_window_g

0x691f,	// (0x0003100d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x691f,	// (0x0003100d) cell_vkb2_top_candi_pane_g1

0x692d,	// (0x0003101b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x692d,	// (0x0003101b) cell_vkb2_top_candi_pane_g2

0xdff8,	// (0x000386e6) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdff8,	// (0x000386e6) cell_vkb2_top_candi_pane_g3

0x71d2,	// (0x000318c0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71d2,	// (0x000318c0) cell_vkb2_top_candi_pane_g4

0xca6a,	// (0x00037158) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca6a,	// (0x00037158) cell_vkb2_top_candi_pane_g5

0x71f3,	// (0x000318e1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71f3,	// (0x000318e1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe06,	// (0x0003a4f4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe06,	// (0x0003a4f4) cell_vkb2_top_candi_pane_g

0x7201,	// (0x000318ef) cell_vkb2_top_candi_pane_t1

0x6504,	// (0x00030bf2) aid_size_touch_slider_mark_ParamLimits

0x6504,	// (0x00030bf2) aid_size_touch_slider_mark

0xe309,	// (0x000389f7) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x000389f7) grid_graphic2_catg_pane

0xe3a7,	// (0x00038a95) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x00038a95) popup_grid_graphic2_window_t1

0xe3b9,	// (0x00038aa7) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x00038aa7) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0003a4af) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0003a4af) popup_grid_graphic2_window_t

0x8303,	// (0x000329f1) bg_button_pane_cp05_ParamLimits

0xe521,	// (0x00038c0f) cell_graphic2_control_pane_g1_ParamLimits

0xe6fb,	// (0x00038de9) cell_graphic2_catg_pane_ParamLimits

0xe6fb,	// (0x00038de9) cell_graphic2_catg_pane

0x7715,	// (0x00031e03) bg_button_pane_cp12

0xe70d,	// (0x00038dfb) cell_graphic2_catg_pane_g1

0xdc05,	// (0x000382f3) cell_tb_ext_pane_t1_ParamLimits

0x6fb8,	// (0x000316a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6fb8,	// (0x000316a6) vkb2_top_cell_right_narrow_pane

0x6fd0,	// (0x000316be) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fd0,	// (0x000316be) vkb2_top_cell_right_wide_pane

0x66ba,	// (0x00030da8) bg_vkb2_func_pane_ParamLimits

0x66ba,	// (0x00030da8) bg_vkb2_func_pane

0x7041,	// (0x0003172f) vkb2_top_cell_left_pane_g1_ParamLimits

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp03

0x709f,	// (0x0003178d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d7c,	// (0x0003446a) bg_vkb2_func_pane_g1

0x9d84,	// (0x00034472) bg_vkb2_func_pane_g2

0x9d94,	// (0x00034482) bg_vkb2_func_pane_g3

0x9d8c,	// (0x0003447a) bg_vkb2_func_pane_g4

0x9d9c,	// (0x0003448a) bg_vkb2_func_pane_g5

0x9da4,	// (0x00034492) bg_vkb2_func_pane_g6

0x9dac,	// (0x0003449a) bg_vkb2_func_pane_g7

0x9db4,	// (0x000344a2) bg_vkb2_func_pane_g8

0x9d74,	// (0x00034462) bg_vkb2_func_pane_g9

0x0008,

0xfe13,	// (0x0003a501) bg_vkb2_func_pane_g

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp01

0x7041,	// (0x0003172f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7041,	// (0x0003172f) vkb2_top_cell_right_wide_pane_g1

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66ba,	// (0x00030da8) bg_vkb2_fuc_pane_cp02

0x709f,	// (0x0003178d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x709f,	// (0x0003178d) vkb2_top_cell_right_narrow_pane_g1

0xd831,	// (0x00037f1f) aid_touch_area_decrease_ParamLimits

0xd831,	// (0x00037f1f) aid_touch_area_decrease

0xd855,	// (0x00037f43) aid_touch_area_increase_ParamLimits

0xd855,	// (0x00037f43) aid_touch_area_increase

0xd861,	// (0x00037f4f) aid_touch_area_mute_ParamLimits

0xd861,	// (0x00037f4f) aid_touch_area_mute

0xd885,	// (0x00037f73) aid_touch_area_slider_ParamLimits

0xd885,	// (0x00037f73) aid_touch_area_slider

0xd971,	// (0x0003805f) popup_slider_window_g4_ParamLimits

0xd971,	// (0x0003805f) popup_slider_window_g4

0xd97d,	// (0x0003806b) popup_slider_window_g5_ParamLimits

0xd97d,	// (0x0003806b) popup_slider_window_g5

0xd99f,	// (0x0003808d) popup_slider_window_g6_ParamLimits

0xd99f,	// (0x0003808d) popup_slider_window_g6

0xd9df,	// (0x000380cd) popup_slider_window_t2_ParamLimits

0xd9df,	// (0x000380cd) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0003a3fd) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0003a3fd) popup_slider_window_t

0xd9f7,	// (0x000380e5) slider_pane_ParamLimits

0xd9f7,	// (0x000380e5) slider_pane

0xe716,	// (0x00038e04) slider_pane_g1_ParamLimits

0xe716,	// (0x00038e04) slider_pane_g1

0xe72a,	// (0x00038e18) slider_pane_g2_ParamLimits

0xe72a,	// (0x00038e18) slider_pane_g2

0xe740,	// (0x00038e2e) slider_pane_g3_ParamLimits

0xe740,	// (0x00038e2e) slider_pane_g3

0x0003,

0xfe26,	// (0x0003a514) slider_pane_g_ParamLimits

0xfe26,	// (0x0003a514) slider_pane_g

0x6028,	// (0x00030716) popup_tb_float_extension_window_ParamLimits

0x6028,	// (0x00030716) popup_tb_float_extension_window

0xe76c,	// (0x00038e5a) aid_size_cell_tb_float_ext

0x7715,	// (0x00031e03) bg_popup_sub_window_cp28

0xe778,	// (0x00038e66) grid_tb_float_ext_pane

0xe782,	// (0x00038e70) cell_tb_float_ext_pane_ParamLimits

0xe782,	// (0x00038e70) cell_tb_float_ext_pane

0xe79c,	// (0x00038e8a) cell_tb_float_ext_pane_g1

0xe7a5,	// (0x00038e93) grid_highlight_pane_cp12

0x6809,	// (0x00030ef7) cell_last_hwr_side_pane_ParamLimits

0x6809,	// (0x00030ef7) cell_last_hwr_side_pane

0xc330,	// (0x00036a1e) cell_last_hwr_side_pane_g1

0xe7ae,	// (0x00038e9c) cell_last_hwr_side_pane_g2

0x0001,

0xfe2f,	// (0x0003a51d) cell_last_hwr_side_pane_g

0x6f67,	// (0x00031655) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f67,	// (0x00031655) vkb2_area_bottom_space_btn_pane

0x691f,	// (0x0003100d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe27b,	// (0x00038969) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7201,	// (0x000318ef) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7220,	// (0x0003190e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7220,	// (0x0003190e) vkb2_area_bottom_space_btn_pane_g1

0x725a,	// (0x00031948) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x725a,	// (0x00031948) vkb2_area_bottom_space_btn_pane_g2

0x7290,	// (0x0003197e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7290,	// (0x0003197e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe34,	// (0x0003a522) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe34,	// (0x0003a522) vkb2_area_bottom_space_btn_pane_g

0x677d,	// (0x00030e6b) cel_fep_hwr_func_pane_ParamLimits

0x677d,	// (0x00030e6b) cel_fep_hwr_func_pane

0x67b9,	// (0x00030ea7) cell_hwr_side_button_pane_ParamLimits

0x67b9,	// (0x00030ea7) cell_hwr_side_button_pane

0xdc39,	// (0x00038327) aid_area_touch_clock_ParamLimits

0x8303,	// (0x000329f1) bg_uniindi_top_pane_ParamLimits

0xdc4b,	// (0x00038339) uniindi_top_pane_g1_ParamLimits

0xdc61,	// (0x0003834f) uniindi_top_pane_g2_ParamLimits

0xdc6d,	// (0x0003835b) uniindi_top_pane_g3_ParamLimits

0xdc7e,	// (0x0003836c) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0003a435) uniindi_top_pane_g_ParamLimits

0xdc8b,	// (0x00038379) uniindi_top_pane_t1_ParamLimits

0x8303,	// (0x000329f1) bg_vkb2_func_pane_cp01_ParamLimits

0x8303,	// (0x000329f1) bg_vkb2_func_pane_cp01

0xe7b7,	// (0x00038ea5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b7,	// (0x00038ea5) cel_fep_hwr_func_pane_g1

0x8303,	// (0x000329f1) bg_vkb2_func_pane_cp02_ParamLimits

0x8303,	// (0x000329f1) bg_vkb2_func_pane_cp02

0xe7b7,	// (0x00038ea5) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b7,	// (0x00038ea5) cell_hwr_side_button_pane_g1

0x9bf5,	// (0x000342e3) status_pane_g4_ParamLimits

0x9bf5,	// (0x000342e3) status_pane_g4

0x9c0f,	// (0x000342fd) status_pane_t1

0xc04a,	// (0x00036738) form2_midp_gauge_slider_cont_pane

0xc052,	// (0x00036740) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc064,	// (0x00036752) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc076,	// (0x00036764) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb07,	// (0x0003a1f5) form2_midp_gauge_slider_pane_t_ParamLimits

0xc088,	// (0x00036776) form2_midp_slider_pane_ParamLimits

0x6bd6,	// (0x000312c4) aid_size_cell_func_vkb2_ParamLimits

0x6bd6,	// (0x000312c4) aid_size_cell_func_vkb2

0xe758,	// (0x00038e46) slider_pane_g4_ParamLimits

0xe758,	// (0x00038e46) slider_pane_g4

0x72da,	// (0x000319c8) form2_midp_gauge_slider_pane_t2_cp01

0x72e8,	// (0x000319d6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72e8,	// (0x000319d6) form2_midp_gauge_slider_pane_t3_cp01

0x7305,	// (0x000319f3) form2_midp_slider_pane_cp01

0x7715,	// (0x00031e03) navi_smil_pane

0xe7f0,	// (0x00038ede) navi_smil_pane_g1

0xe7f8,	// (0x00038ee6) navi_smil_pane_t1

0xe7c5,	// (0x00038eb3) form2_midp_slider_pane_g1

0xe7ce,	// (0x00038ebc) form2_midp_slider_pane_g2

0xe7d6,	// (0x00038ec4) form2_midp_slider_pane_g3

0xe7c5,	// (0x00038eb3) form2_midp_slider_pane_g4

0xe7de,	// (0x00038ecc) form2_midp_slider_pane_g5

0x0004,

0xfe3d,	// (0x0003a52b) form2_midp_slider_pane_g

0x72ca,	// (0x000319b8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72ca,	// (0x000319b8) vkb2_area_bottom_space_btn_pane_g4

0x9a2c,	// (0x0003411a) lc0_navi_pane_ParamLimits

0x9a2c,	// (0x0003411a) lc0_navi_pane

0x9aa2,	// (0x00034190) lc0_stat_indi_pane_ParamLimits

0x9aa2,	// (0x00034190) lc0_stat_indi_pane

0x9ab9,	// (0x000341a7) ls0_title_pane_ParamLimits

0x9ab9,	// (0x000341a7) ls0_title_pane

0x88d4,	// (0x00032fc2) bg_popup_sub_pane_cp14_ParamLimits

0xdc20,	// (0x0003830e) list_uniindi_pane_ParamLimits

0xdc2c,	// (0x0003831a) uniindi_top_pane_ParamLimits

0xdcc8,	// (0x000383b6) list_single_uniindi_pane_g1_ParamLimits

0xdcdb,	// (0x000383c9) list_single_uniindi_pane_t1_ParamLimits

0x730e,	// (0x000319fc) lc0_stat_clock_pane_ParamLimits

0x730e,	// (0x000319fc) lc0_stat_clock_pane

0xe806,	// (0x00038ef4) lc0_stat_indi_pane_g1_ParamLimits

0xe806,	// (0x00038ef4) lc0_stat_indi_pane_g1

0xe813,	// (0x00038f01) lc0_stat_indi_pane_g2_ParamLimits

0xe813,	// (0x00038f01) lc0_stat_indi_pane_g2

0x0001,

0xfe48,	// (0x0003a536) lc0_stat_indi_pane_g_ParamLimits

0xfe48,	// (0x0003a536) lc0_stat_indi_pane_g

0x731b,	// (0x00031a09) lc0_uni_indicator_pane_ParamLimits

0x731b,	// (0x00031a09) lc0_uni_indicator_pane

0xe820,	// (0x00038f0e) ls0_title_pane_g1_ParamLimits

0xe820,	// (0x00038f0e) ls0_title_pane_g1

0xe834,	// (0x00038f22) ls0_title_pane_t1_ParamLimits

0xe834,	// (0x00038f22) ls0_title_pane_t1

0x7328,	// (0x00031a16) lc0_uni_indicator_pane_g1_ParamLimits

0x7328,	// (0x00031a16) lc0_uni_indicator_pane_g1

0xe86a,	// (0x00038f58) lc0_stat_clock_pane_t1

0x4b19,	// (0x0002f207) main_ai5_pane

0xe878,	// (0x00038f66) ai5_sk_pane_ParamLimits

0xe878,	// (0x00038f66) ai5_sk_pane

0xe885,	// (0x00038f73) cell_ai5_widget_pane_ParamLimits

0xe885,	// (0x00038f73) cell_ai5_widget_pane

0xe94f,	// (0x0003903d) aid_size_cell_widget_grid

0xe965,	// (0x00039053) bg_ai5_widget_pane_ParamLimits

0xe965,	// (0x00039053) bg_ai5_widget_pane

0xe9d9,	// (0x000390c7) cell_ai5_widget_pane_g2

0xe9e9,	// (0x000390d7) cell_ai5_widget_pane_g3

0xea00,	// (0x000390ee) cell_ai5_widget_pane_g4

0xea0c,	// (0x000390fa) cell_ai5_widget_pane_g5

0xea18,	// (0x00039106) cell_ai5_widget_pane_g6

0xea24,	// (0x00039112) cell_ai5_widget_pane_g7

0xea6c,	// (0x0003915a) cell_ai5_widget_pane_t1_ParamLimits

0xea6c,	// (0x0003915a) cell_ai5_widget_pane_t1

0xea89,	// (0x00039177) cell_ai5_widget_pane_t2_ParamLimits

0xea89,	// (0x00039177) cell_ai5_widget_pane_t2

0xeaa1,	// (0x0003918f) cell_ai5_widget_pane_t3_ParamLimits

0xeaa1,	// (0x0003918f) cell_ai5_widget_pane_t3

0xeab9,	// (0x000391a7) cell_ai5_widget_pane_t4_ParamLimits

0xeab9,	// (0x000391a7) cell_ai5_widget_pane_t4

0xead6,	// (0x000391c4) cell_ai5_widget_pane_t5_ParamLimits

0xead6,	// (0x000391c4) cell_ai5_widget_pane_t5

0xeaf5,	// (0x000391e3) cell_ai5_widget_pane_t6_ParamLimits

0xeaf5,	// (0x000391e3) cell_ai5_widget_pane_t6

0xeb07,	// (0x000391f5) cell_ai5_widget_pane_t7_ParamLimits

0xeb07,	// (0x000391f5) cell_ai5_widget_pane_t7

0xeb20,	// (0x0003920e) cell_ai5_widget_pane_t8_ParamLimits

0xeb20,	// (0x0003920e) cell_ai5_widget_pane_t8

0x0009,

0xfe62,	// (0x0003a550) cell_ai5_widget_pane_t_ParamLimits

0xfe62,	// (0x0003a550) cell_ai5_widget_pane_t

0xeb74,	// (0x00039262) grid_ai5_widget_pane

0x88d4,	// (0x00032fc2) highlight_cell_ai5_widget_pane_ParamLimits

0x88d4,	// (0x00032fc2) highlight_cell_ai5_widget_pane

0xeb8c,	// (0x0003927a) ai5_sk_left_pane

0xeb96,	// (0x00039284) ai5_sk_middle_pane

0xeba0,	// (0x0003928e) ai5_sk_right_pane

0xebaa,	// (0x00039298) bg_ai5_widget_pane_g1_ParamLimits

0xebaa,	// (0x00039298) bg_ai5_widget_pane_g1

0xebb6,	// (0x000392a4) bg_ai5_widget_pane_g2_ParamLimits

0xebb6,	// (0x000392a4) bg_ai5_widget_pane_g2

0xebc2,	// (0x000392b0) bg_ai5_widget_pane_g3_ParamLimits

0xebc2,	// (0x000392b0) bg_ai5_widget_pane_g3

0xebce,	// (0x000392bc) bg_ai5_widget_pane_g4_ParamLimits

0xebce,	// (0x000392bc) bg_ai5_widget_pane_g4

0xebda,	// (0x000392c8) bg_ai5_widget_pane_g5_ParamLimits

0xebda,	// (0x000392c8) bg_ai5_widget_pane_g5

0xebe6,	// (0x000392d4) bg_ai5_widget_pane_g6_ParamLimits

0xebe6,	// (0x000392d4) bg_ai5_widget_pane_g6

0xebf2,	// (0x000392e0) bg_ai5_widget_pane_g7_ParamLimits

0xebf2,	// (0x000392e0) bg_ai5_widget_pane_g7

0xebfe,	// (0x000392ec) bg_ai5_widget_pane_g8_ParamLimits

0xebfe,	// (0x000392ec) bg_ai5_widget_pane_g8

0xec0a,	// (0x000392f8) bg_ai5_widget_pane_g9_ParamLimits

0xec0a,	// (0x000392f8) bg_ai5_widget_pane_g9

0x0008,

0xfe77,	// (0x0003a565) bg_ai5_widget_pane_g_ParamLimits

0xfe77,	// (0x0003a565) bg_ai5_widget_pane_g

0xec3c,	// (0x0003932a) cell_shortcut_ai5_widget_pane_ParamLimits

0xec3c,	// (0x0003932a) cell_shortcut_ai5_widget_pane

0x953c,	// (0x00033c2a) bg_cell_shortcut_ai5_widget_pane

0xec4d,	// (0x0003933b) cell_grid_ai5_widget_pane_g1

0x953c,	// (0x00033c2a) highlight_cell_shortcut_ai5_widget_pane

0x9d7c,	// (0x0003446a) ai5_sk_left_pane_g1

0xec56,	// (0x00039344) ai5_sk_left_pane_g2

0xec5e,	// (0x0003934c) ai5_sk_left_pane_g3

0xec66,	// (0x00039354) ai5_sk_left_pane_g4

0x0003,

0xfe8a,	// (0x0003a578) ai5_sk_left_pane_g

0xec6e,	// (0x0003935c) ai5_sk_left_pane_t1

0x9d84,	// (0x00034472) ai5_sk_right_pane_g1

0xec7c,	// (0x0003936a) ai5_sk_right_pane_g2

0xec84,	// (0x00039372) ai5_sk_right_pane_g3

0xec8c,	// (0x0003937a) ai5_sk_right_pane_g4

0x0003,

0xfe93,	// (0x0003a581) ai5_sk_right_pane_g

0xec94,	// (0x00039382) ai5_sk_right_pane_t1

0x9d84,	// (0x00034472) ai5_sk_middle_pane_g1

0x9d7c,	// (0x0003446a) ai5_sk_middle_pane_g2

0x9d9c,	// (0x0003448a) ai5_sk_middle_pane_g3

0xec84,	// (0x00039372) ai5_sk_middle_pane_g4

0xec5e,	// (0x0003934c) ai5_sk_middle_pane_g5

0xeca2,	// (0x00039390) ai5_sk_middle_pane_g6

0xecaa,	// (0x00039398) ai5_sk_middle_pane_g7

0x0006,

0xfe9c,	// (0x0003a58a) ai5_sk_middle_pane_g

0x98bc,	// (0x00033faa) aid_touch_area_size_lc0_ParamLimits

0x98bc,	// (0x00033faa) aid_touch_area_size_lc0

0x694e,	// (0x0003103c) cell_hwr_candidate_pane_t1_ParamLimits

0x98d8,	// (0x00033fc6) aid_touch_navi_pane

0x9ba7,	// (0x00034295) status_dt_navi_pane_ParamLimits

0x9ba7,	// (0x00034295) status_dt_navi_pane

0x9bb4,	// (0x000342a2) status_dt_sta_pane_ParamLimits

0x9bb4,	// (0x000342a2) status_dt_sta_pane

0xecb2,	// (0x000393a0) dt_sta_controll_pane

0xecbf,	// (0x000393ad) dt_sta_indi_pane

0xecd0,	// (0x000393be) dt_sta_title_pane

0x8303,	// (0x000329f1) bg_dt_sta_indi_pane_ParamLimits

0x8303,	// (0x000329f1) bg_dt_sta_indi_pane

0xece3,	// (0x000393d1) dt_sta_battery_pane

0xeceb,	// (0x000393d9) dt_sta_indi_pane_g1

0xecf4,	// (0x000393e2) dt_sta_indi_pane_g2

0xecfd,	// (0x000393eb) dt_sta_indi_pane_g3

0x0002,

0xfeab,	// (0x0003a599) dt_sta_indi_pane_g

0xed06,	// (0x000393f4) dt_sta_signal_pane

0x88d4,	// (0x00032fc2) bg_dt_sta_title_pane_ParamLimits

0x88d4,	// (0x00032fc2) bg_dt_sta_title_pane

0xed0f,	// (0x000393fd) dt_sta_title_pane_g1

0xed17,	// (0x00039405) dt_sta_title_pane_t1_ParamLimits

0xed17,	// (0x00039405) dt_sta_title_pane_t1

0x7715,	// (0x00031e03) bg_dt_sta_control_pane

0xed2c,	// (0x0003941a) dt_sta_controll_pane_g1

0xed35,	// (0x00039423) bg_dt_sta_title_pane_g1

0xed3e,	// (0x0003942c) bg_dt_sta_title_pane_g2

0xed47,	// (0x00039435) bg_dt_sta_title_pane_g3

0x0002,

0xfeb2,	// (0x0003a5a0) bg_dt_sta_title_pane_g

0xc330,	// (0x00036a1e) bg_dt_sta_indi_pane_g1

0xed50,	// (0x0003943e) dt_sta_signal_pane_g1

0xed58,	// (0x00039446) dt_sta_signal_pane_g2

0x0001,

0xfeb9,	// (0x0003a5a7) dt_sta_signal_pane_g

0xed60,	// (0x0003944e) dt_sta_battery_pane_g1

0xed69,	// (0x00039457) dt_sta_battery_pane_t1

0xc330,	// (0x00036a1e) bg_dt_sta_control_pane_g1

0x9032,	// (0x00033720) fep_china_uni_eep_pane

0x903a,	// (0x00033728) fep_china_uni_entry_pane_ParamLimits

0x904a,	// (0x00033738) popup_fep_china_uni_window_g1_ParamLimits

0x905a,	// (0x00033748) popup_fep_china_uni_window_g2_ParamLimits

0x905a,	// (0x00033748) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00039e0b) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00039e0b) popup_fep_china_uni_window_g

0xed78,	// (0x00039466) fep_china_uni_eep_pane_g1

0xed80,	// (0x0003946e) fep_china_uni_eep_pane_t1

0xe7e7,	// (0x00038ed5) aid_touch_area_size_smil_player

0x9a24,	// (0x00034112) lc0_clock_pane

0x9c03,	// (0x000342f1) status_pane_g5_ParamLimits

0x9c03,	// (0x000342f1) status_pane_g5

0x5cef,	// (0x000303dd) popup_keymap_window

0x9bc9,	// (0x000342b7) status_icon_pane

0xe9e9,	// (0x000390d7) cell_ai5_widget_pane_g3_ParamLimits

0xea00,	// (0x000390ee) cell_ai5_widget_pane_g4_ParamLimits

0xea0c,	// (0x000390fa) cell_ai5_widget_pane_g5_ParamLimits

0xea30,	// (0x0003911e) cell_ai5_widget_pane_g8_ParamLimits

0xea30,	// (0x0003911e) cell_ai5_widget_pane_g8

0xea44,	// (0x00039132) cell_ai5_widget_pane_g9_ParamLimits

0xea44,	// (0x00039132) cell_ai5_widget_pane_g9

0xea58,	// (0x00039146) cell_ai5_widget_pane_g10_ParamLimits

0xea58,	// (0x00039146) cell_ai5_widget_pane_g10

0xed8f,	// (0x0003947d) status_icon_pane_g1

0x7715,	// (0x00031e03) bg_popup_sub_pane_cp13

0xed97,	// (0x00039485) popup_keymap_window_t1

0x9801,	// (0x00033eef) control_pane_g6_ParamLimits

0x9801,	// (0x00033eef) control_pane_g6

0x980e,	// (0x00033efc) control_pane_g7_ParamLimits

0x980e,	// (0x00033efc) control_pane_g7

0x981b,	// (0x00033f09) control_pane_g8_ParamLimits

0x981b,	// (0x00033f09) control_pane_g8

0xecb2,	// (0x000393a0) dt_sta_controll_pane_ParamLimits

0xecbf,	// (0x000393ad) dt_sta_indi_pane_ParamLimits

0xecd0,	// (0x000393be) dt_sta_title_pane_ParamLimits

0x880c,	// (0x00032efa) aid_size_touch_scroll_bar_cale

0x4bf2,	// (0x0002f2e0) popup_discreet_window_ParamLimits

0x4bf2,	// (0x0002f2e0) popup_discreet_window

0x4c6c,	// (0x0002f35a) popup_sk_window

0xa3fa,	// (0x00034ae8) bg_popup_sub_pane_cp28_ParamLimits

0xa3fa,	// (0x00034ae8) bg_popup_sub_pane_cp28

0xeda5,	// (0x00039493) popup_discreet_window_g1_ParamLimits

0xeda5,	// (0x00039493) popup_discreet_window_g1

0xedc5,	// (0x000394b3) popup_discreet_window_t1_ParamLimits

0xedc5,	// (0x000394b3) popup_discreet_window_t1

0xede3,	// (0x000394d1) popup_discreet_window_t2_ParamLimits

0xede3,	// (0x000394d1) popup_discreet_window_t2

0x0002,

0xfebe,	// (0x0003a5ac) popup_discreet_window_t_ParamLimits

0xfebe,	// (0x0003a5ac) popup_discreet_window_t

0x733d,	// (0x00031a2b) popup_sk_window_g1

0x7347,	// (0x00031a35) popup_sk_window_g2

0x0001,

0xfec5,	// (0x0003a5b3) popup_sk_window_g

0x7351,	// (0x00031a3f) popup_sk_window_t1

0x735f,	// (0x00031a4d) popup_sk_window_t1_copy1

0xe9d9,	// (0x000390c7) cell_ai5_widget_pane_g2_ParamLimits

0xeb32,	// (0x00039220) cell_ai5_widget_pane_t9_ParamLimits

0xeb32,	// (0x00039220) cell_ai5_widget_pane_t9

0x7715,	// (0x00031e03) main_fep_fshwr2_pane

0x736d,	// (0x00031a5b) aid_fshwr2_btn_pane

0x7379,	// (0x00031a67) aid_fshwr2_syb_pane

0x7385,	// (0x00031a73) aid_fshwr2_txt_pane

0x7391,	// (0x00031a7f) fshwr2_func_candi_pane

0x73a6,	// (0x00031a94) fshwr2_hwr_syb_pane

0x73b6,	// (0x00031aa4) fshwr2_icf_pane

0x4b19,	// (0x0002f207) fshwr2_icf_bg_pane

0x73df,	// (0x00031acd) fshwr2_icf_pane_t1_ParamLimits

0x73df,	// (0x00031acd) fshwr2_icf_pane_t1

0x8f24,	// (0x00033612) fshwr2_func_candi_pane_g1

0xee35,	// (0x00039523) fshwr2_func_candi_row_pane_ParamLimits

0xee35,	// (0x00039523) fshwr2_func_candi_row_pane

0x73f7,	// (0x00031ae5) cell_fshwr2_syb_pane_ParamLimits

0x73f7,	// (0x00031ae5) cell_fshwr2_syb_pane

0x691f,	// (0x0003100d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x691f,	// (0x0003100d) fshwr2_hwr_syb_pane_g1

0x4b19,	// (0x0002f207) bg_popup_call_pane_cp01

0x740d,	// (0x00031afb) fshwr2_func_candi_cell_pane_ParamLimits

0x740d,	// (0x00031afb) fshwr2_func_candi_cell_pane

0xaa76,	// (0x00035164) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa76,	// (0x00035164) fshwr2_func_candi_cell_bg_pane

0x7442,	// (0x00031b30) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7442,	// (0x00031b30) fshwr2_func_candi_cell_pane_g1

0x7462,	// (0x00031b50) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7462,	// (0x00031b50) fshwr2_func_candi_cell_pane_t1

0x4b19,	// (0x0002f207) bg_button_pane_cp08

0xb717,	// (0x00035e05) cell_fshwr2_syb_bg_pane

0x7475,	// (0x00031b63) cell_fshwr2_syb_bg_pane_g1

0x747d,	// (0x00031b6b) cell_fshwr2_syb_bg_pane_t1

0x88d4,	// (0x00032fc2) main_tmo_pane

0xaf0f,	// (0x000355fd) uni_indicator_pane_g1_ParamLimits

0xaf25,	// (0x00035613) uni_indicator_pane_g2_ParamLimits

0xaf3b,	// (0x00035629) uni_indicator_pane_g3_ParamLimits

0xaf50,	// (0x0003563e) uni_indicator_pane_g4_ParamLimits

0xaf50,	// (0x0003563e) uni_indicator_pane_g4

0xaf64,	// (0x00035652) uni_indicator_pane_g5_ParamLimits

0xaf64,	// (0x00035652) uni_indicator_pane_g5

0xaf64,	// (0x00035652) uni_indicator_pane_g6_ParamLimits

0xaf64,	// (0x00035652) uni_indicator_pane_g6

0xf921,	// (0x0003a00f) uni_indicator_pane_g_ParamLimits

0xd813,	// (0x00037f01) popup_tmo_note_window_ParamLimits

0xd813,	// (0x00037f01) popup_tmo_note_window

0x6bb8,	// (0x000312a6) fshwr2_bg_pane

0x7453,	// (0x00031b41) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7453,	// (0x00031b41) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeca,	// (0x0003a5b8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeca,	// (0x0003a5b8) fshwr2_func_candi_cell_pane_g

0x6907,	// (0x00030ff5) bg_popup_window_pane_cp01

0x748c,	// (0x00031b7a) bg_popup_window_pane_g1_cp01

0xee45,	// (0x00039533) bg_popup_window_pane_cp22_ParamLimits

0xee45,	// (0x00039533) bg_popup_window_pane_cp22

0xee53,	// (0x00039541) listscroll_tmo_link_pane_ParamLimits

0xee53,	// (0x00039541) listscroll_tmo_link_pane

0xee93,	// (0x00039581) popup_tmo_note_window_g1_ParamLimits

0xee93,	// (0x00039581) popup_tmo_note_window_g1

0xeea0,	// (0x0003958e) tmo_note_info_pane_ParamLimits

0xeea0,	// (0x0003958e) tmo_note_info_pane

0xeeba,	// (0x000395a8) list_tmo_note_info_pane_g1_ParamLimits

0xeeba,	// (0x000395a8) list_tmo_note_info_pane_g1

0xeed1,	// (0x000395bf) list_tmo_note_info_pane_g2_ParamLimits

0xeed1,	// (0x000395bf) list_tmo_note_info_pane_g2

0x0001,

0xfecf,	// (0x0003a5bd) list_tmo_note_info_pane_g_ParamLimits

0xfecf,	// (0x0003a5bd) list_tmo_note_info_pane_g

0xeeed,	// (0x000395db) list_tmo_note_info_text_pane_ParamLimits

0xeeed,	// (0x000395db) list_tmo_note_info_text_pane

0xef70,	// (0x0003965e) list_tmo_link_pane

0xef7d,	// (0x0003966b) scroll_pane_cp20

0xef8a,	// (0x00039678) list_single_tmo_link_pane_ParamLimits

0xef8a,	// (0x00039678) list_single_tmo_link_pane

0xef9a,	// (0x00039688) list_single_tmo_link_pane_t1

0xefa8,	// (0x00039696) list_tmo_note_info_text_pane_t1_ParamLimits

0xefa8,	// (0x00039696) list_tmo_note_info_text_pane_t1

0x898e,	// (0x0003307c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x898e,	// (0x0003307c) aid_size_touch_scroll_bar_cp01

0x53e4,	// (0x0002fad2) aid_size_touch_slider_marker

0x4c54,	// (0x0002f342) popup_settings_window_ParamLimits

0x4c54,	// (0x0002f342) popup_settings_window

0x5b7c,	// (0x0003026a) popup_candi_list_indi_window

0x98d8,	// (0x00033fc6) aid_touch_navi_pane_ParamLimits

0x6b13,	// (0x00031201) rs_clock_indi_pane

0x6b1c,	// (0x0003120a) sctrl_sk_bottom_pane_ParamLimits

0x6b2d,	// (0x0003121b) sctrl_sk_top_pane_ParamLimits

0x6c30,	// (0x0003131e) popup_fep_tooltip_window

0xe94f,	// (0x0003903d) aid_size_cell_widget_grid_ParamLimits

0xe9c4,	// (0x000390b2) cell_ai5_widget_pane_g1_ParamLimits

0xe9c4,	// (0x000390b2) cell_ai5_widget_pane_g1

0xea18,	// (0x00039106) cell_ai5_widget_pane_g6_ParamLimits

0xea24,	// (0x00039112) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4d,	// (0x0003a53b) cell_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x0003a53b) cell_ai5_widget_pane_g

0xeb56,	// (0x00039244) cell_ai5_widget_pane_t10_ParamLimits

0xeb56,	// (0x00039244) cell_ai5_widget_pane_t10

0xeb74,	// (0x00039262) grid_ai5_widget_pane_ParamLimits

0xec16,	// (0x00039304) cell_contacts_ai5_widget_pane_ParamLimits

0xec16,	// (0x00039304) cell_contacts_ai5_widget_pane

0xedf8,	// (0x000394e6) popup_discreet_window_t3_ParamLimits

0xedf8,	// (0x000394e6) popup_discreet_window_t3

0x73cb,	// (0x00031ab9) popup_fshwr2_char_preview_window_ParamLimits

0x73cb,	// (0x00031ab9) popup_fshwr2_char_preview_window

0xef0b,	// (0x000395f9) tmo_note_info_pane_t1

0xef20,	// (0x0003960e) tmo_note_info_pane_t2

0xef37,	// (0x00039625) tmo_note_info_pane_t3

0xef4c,	// (0x0003963a) tmo_note_info_pane_t4

0xef5e,	// (0x0003964c) tmo_note_info_pane_t5

0x0004,

0xfed4,	// (0x0003a5c2) tmo_note_info_pane_t

0xef70,	// (0x0003965e) list_tmo_link_pane_ParamLimits

0xef7d,	// (0x0003966b) scroll_pane_cp20_ParamLimits

0x4b19,	// (0x0002f207) bg_popup_fep_char_preview_window_cp01

0xefc1,	// (0x000396af) popup_fshwr2_char_preview_window_t1

0xefcf,	// (0x000396bd) popup_candi_list_indi_window_g1

0xefd8,	// (0x000396c6) bg_cell_contacts_ai5_widget_pane

0xefe4,	// (0x000396d2) cell_contacts_ai5_widget_pane_g1

0xeff9,	// (0x000396e7) cell_contacts_ai5_widget_pane_g2

0xf005,	// (0x000396f3) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0000,	// (0x0002a6ee) cell_contacts_ai5_widget_pane_g

0xf011,	// (0x000396ff) cell_contacts_ai5_widget_pane_t1

0x88d4,	// (0x00032fc2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf088,	// (0x00039776) settings_container_pane

0x953c,	// (0x00033c2a) listscroll_set_pane_copy1

0xba06,	// (0x000360f4) scroll_pane_cp121_copy1

0xf094,	// (0x00039782) set_content_pane_copy1

0xf09c,	// (0x0003978a) aid_height_set_list_copy1_ParamLimits

0xf09c,	// (0x0003978a) aid_height_set_list_copy1

0xb157,	// (0x00035845) aid_size_parent_copy1_ParamLimits

0xb157,	// (0x00035845) aid_size_parent_copy1

0xf0a8,	// (0x00039796) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0a8,	// (0x00039796) button_value_adjust_pane_cp6_copy1

0x9876,	// (0x00033f64) list_highlight_pane_cp2_copy1_ParamLimits

0x9876,	// (0x00033f64) list_highlight_pane_cp2_copy1

0xf0bc,	// (0x000397aa) list_set_pane_copy1_ParamLimits

0xf0bc,	// (0x000397aa) list_set_pane_copy1

0xf023,	// (0x00039711) main_pane_set_t1_copy1_ParamLimits

0xf023,	// (0x00039711) main_pane_set_t1_copy1

0xf05d,	// (0x0003974b) main_pane_set_t2_copy1_ParamLimits

0xf05d,	// (0x0003974b) main_pane_set_t2_copy1

0xf169,	// (0x00039857) main_pane_set_t3_copy1

0xf177,	// (0x00039865) main_pane_set_t4_copy1

0xf07c,	// (0x0003976a) set_content_pane_g1_copy1_ParamLimits

0xf07c,	// (0x0003976a) set_content_pane_g1_copy1

0xf185,	// (0x00039873) setting_code_pane_copy1

0xf18d,	// (0x0003987b) setting_slider_graphic_pane_copy1

0xf18d,	// (0x0003987b) setting_slider_pane_copy1

0xf18d,	// (0x0003987b) setting_text_pane_copy1

0xf18d,	// (0x0003987b) setting_volume_pane_copy1

0xf185,	// (0x00039873) settings_code_pane_cp2_copy1

0xf195,	// (0x00039883) settings_code_pane_cp_copy1_ParamLimits

0xf195,	// (0x00039883) settings_code_pane_cp_copy1

0x7495,	// (0x00031b83) volume_set_pane_copy1

0xf1a9,	// (0x00039897) volume_set_pane_g10_copy1

0xf1b1,	// (0x0003989f) volume_set_pane_g1_copy1

0xf1b9,	// (0x000398a7) volume_set_pane_g2_copy1

0xf1c1,	// (0x000398af) volume_set_pane_g3_copy1

0xf1c9,	// (0x000398b7) volume_set_pane_g4_copy1

0xf1d1,	// (0x000398bf) volume_set_pane_g5_copy1

0xf1d9,	// (0x000398c7) volume_set_pane_g6_copy1

0xf1e1,	// (0x000398cf) volume_set_pane_g7_copy1

0xf1e9,	// (0x000398d7) volume_set_pane_g8_copy1

0xf1f1,	// (0x000398df) volume_set_pane_g9_copy1

0x807a,	// (0x00032768) bg_set_opt_pane_cp_copy1_ParamLimits

0x807a,	// (0x00032768) bg_set_opt_pane_cp_copy1

0x749d,	// (0x00031b8b) setting_slider_pane_t1_copy1_ParamLimits

0x749d,	// (0x00031b8b) setting_slider_pane_t1_copy1

0x74bb,	// (0x00031ba9) setting_slider_pane_t2_copy1_ParamLimits

0x74bb,	// (0x00031ba9) setting_slider_pane_t2_copy1

0x74d5,	// (0x00031bc3) setting_slider_pane_t3_copy1_ParamLimits

0x74d5,	// (0x00031bc3) setting_slider_pane_t3_copy1

0x74ed,	// (0x00031bdb) slider_set_pane_copy1_ParamLimits

0x74ed,	// (0x00031bdb) slider_set_pane_copy1

0x892f,	// (0x0003301d) set_opt_bg_pane_g1_copy2

0x8937,	// (0x00033025) set_opt_bg_pane_g2_copy2

0xf1f9,	// (0x000398e7) set_opt_bg_pane_g3_copy2

0x8947,	// (0x00033035) set_opt_bg_pane_g4_copy2

0x894f,	// (0x0003303d) set_opt_bg_pane_g5_copy2

0x8957,	// (0x00033045) set_opt_bg_pane_g6_copy2

0xf203,	// (0x000398f1) set_opt_bg_pane_g7_copy2

0xf20b,	// (0x000398f9) set_opt_bg_pane_g8_copy2

0xf215,	// (0x00039903) set_opt_bg_pane_g9_copy2

0x7503,	// (0x00031bf1) aid_size_touch_slider_mark_copy1_ParamLimits

0x7503,	// (0x00031bf1) aid_size_touch_slider_mark_copy1

0xf21f,	// (0x0003990d) slider_set_pane_g1_copy1

0x7517,	// (0x00031c05) slider_set_pane_g2_copy1

0x6524,	// (0x00030c12) slider_set_pane_g3_copy1_ParamLimits

0x6524,	// (0x00030c12) slider_set_pane_g3_copy1

0x6538,	// (0x00030c26) slider_set_pane_g4_copy1_ParamLimits

0x6538,	// (0x00030c26) slider_set_pane_g4_copy1

0x6550,	// (0x00030c3e) slider_set_pane_g5_copy1_ParamLimits

0x6550,	// (0x00030c3e) slider_set_pane_g5_copy1

0x6524,	// (0x00030c12) slider_set_pane_g6_copy1_ParamLimits

0x6524,	// (0x00030c12) slider_set_pane_g6_copy1

0x751f,	// (0x00031c0d) slider_set_pane_g7_copy1_ParamLimits

0x751f,	// (0x00031c0d) slider_set_pane_g7_copy1

0x7729,	// (0x00031e17) bg_set_opt_pane_cp2_copy1

0xf228,	// (0x00039916) setting_slider_graphic_pane_g1_copy1

0xf231,	// (0x0003991f) setting_slider_graphic_pane_t1_copy1

0xf241,	// (0x0003992f) setting_slider_graphic_pane_t2_copy1

0xf251,	// (0x0003993f) slider_set_pane_cp_copy1

0xf261,	// (0x0003994f) input_focus_pane_cp1_copy1

0xf26a,	// (0x00039958) list_set_text_pane_copy1

0xf272,	// (0x00039960) setting_text_pane_g1_copy1

0x805d,	// (0x0003274b) set_text_pane_t1_copy1

0xf261,	// (0x0003994f) input_focus_pane_cp2_copy1

0xf272,	// (0x00039960) setting_code_pane_g1_copy1

0xf27b,	// (0x00039969) setting_code_pane_t1_copy1

0xf289,	// (0x00039977) list_set_graphic_pane_copy1

0x7729,	// (0x00031e17) bg_set_opt_pane_cp4_copy1

0x922f,	// (0x0003391d) list_set_graphic_pane_g1_copy1_ParamLimits

0x922f,	// (0x0003391d) list_set_graphic_pane_g1_copy1

0xf29d,	// (0x0003998b) list_set_graphic_pane_g2_copy1

0x9247,	// (0x00033935) list_set_graphic_pane_t1_copy1_ParamLimits

0x9247,	// (0x00033935) list_set_graphic_pane_t1_copy1

0xc330,	// (0x00036a1e) rs_clock_indi_pane_g1

0xf2a5,	// (0x00039993) rs_clock_indi_pane_t1

0xf2b3,	// (0x000399a1) rs_indi_pane

0xf2bb,	// (0x000399a9) rs_indi_pane_g1

0xf2c4,	// (0x000399b2) rs_indi_pane_g2

0xf2cd,	// (0x000399bb) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x0003a5cd) rs_indi_pane_g

0x953c,	// (0x00033c2a) bg_popup_preview_window_pane_cp03

0xf2d6,	// (0x000399c4) popup_fep_tooltip_window_t1

0xcfac,	// (0x0003769a) popup_note2_window_g2_ParamLimits

0xcfac,	// (0x0003769a) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0003a36d) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0003a36d) popup_note2_window_g

0xd4a8,	// (0x00037b96) bg_popup_sub_pane_cp11_ParamLimits

0xd4b5,	// (0x00037ba3) cell_ai3_links_pane_g1_ParamLimits

0xd4cc,	// (0x00037bba) cell_ai3_links_pane_t1

0x805d,	// (0x0003274b) set_text_pane_t1_copy1_ParamLimits

0x9459,	// (0x00033b47) cell_graphic_popup_pane_cp2_ParamLimits

0x9459,	// (0x00033b47) cell_graphic_popup_pane_cp2

0xf2e4,	// (0x000399d2) cell_graphic_popup_pane_g1_cp2

0x861f,	// (0x00032d0d) cell_graphic_popup_pane_g2_cp2

0xf2ec,	// (0x000399da) cell_graphic_popup_pane_g3_cp2

0xf2f4,	// (0x000399e2) cell_graphic_popup_pane_t2_cp2

0x8630,	// (0x00032d1e) grid_highlight_pane_cp3_cp2

0x8c6f,	// (0x0003335d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x88d4,	// (0x00032fc2) main_tmo_pane_ParamLimits

0xd807,	// (0x00037ef5) popup_tmo_big_image_note_window

0xe9b3,	// (0x000390a1) cell_ai5_widget_list_pane

0xe9bb,	// (0x000390a9) cell_ai5_widget_lrg_icon_pane

0xef0b,	// (0x000395f9) tmo_note_info_pane_t1_ParamLimits

0xef20,	// (0x0003960e) tmo_note_info_pane_t2_ParamLimits

0xef37,	// (0x00039625) tmo_note_info_pane_t3_ParamLimits

0xef4c,	// (0x0003963a) tmo_note_info_pane_t4_ParamLimits

0xef5e,	// (0x0003964c) tmo_note_info_pane_t5_ParamLimits

0xfed4,	// (0x0003a5c2) tmo_note_info_pane_t_ParamLimits

0xf088,	// (0x00039776) settings_container_pane_ParamLimits

0xf259,	// (0x00039947) indicator_popup_pane_cp5

0xf259,	// (0x00039947) indicator_popup_pane_cp6

0xf289,	// (0x00039977) list_set_graphic_pane_copy1_ParamLimits

0x7715,	// (0x00031e03) bg_popup_window_pane_cp23

0xf302,	// (0x000399f0) popup_tmo_big_image_note_window_g1

0xf30b,	// (0x000399f9) popup_tmo_big_image_note_window_t1

0xf31b,	// (0x00039a09) popup_tmo_big_image_note_window_t2

0xf32b,	// (0x00039a19) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x0003a5d4) popup_tmo_big_image_note_window_t

0xc330,	// (0x00036a1e) cell_ai5_widget_lrg_icon_pane_g1

0xf33b,	// (0x00039a29) cell_ai5_widget_lrg_icon_pane_t1

0xf349,	// (0x00039a37) cell_ai5_widget_list_row_pane_ParamLimits

0xf349,	// (0x00039a37) cell_ai5_widget_list_row_pane

0xf360,	// (0x00039a4e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf360,	// (0x00039a4e) cell_ai5_widget_list_row_pane_g1

0xf36d,	// (0x00039a5b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf36d,	// (0x00039a5b) cell_ai5_widget_list_row_pane_t1

0xf39b,	// (0x00039a89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39b,	// (0x00039a89) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x0003a5db) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x0003a5db) cell_ai5_widget_list_row_pane_t

0x4b19,	// (0x0002f207) main_fep_vtchi_ss_pane

0x7551,	// (0x00031c3f) popup_fep_char_pre_window

0x7559,	// (0x00031c47) popup_fep_ituss_window

0x757a,	// (0x00031c68) popup_fep_vkbss_window

0xf3c3,	// (0x00039ab1) grid_vkbss_keypad_pane_ParamLimits

0xf3c3,	// (0x00039ab1) grid_vkbss_keypad_pane

0xf3d3,	// (0x00039ac1) ituss_keypad_pane

0x75a5,	// (0x00031c93) aid_vkbss_key_offset_ParamLimits

0x75a5,	// (0x00031c93) aid_vkbss_key_offset

0x75b1,	// (0x00031c9f) cell_vkbss_key_pane_ParamLimits

0x75b1,	// (0x00031c9f) cell_vkbss_key_pane

0x9bdd,	// (0x000342cb) bg_cell_vkbss_key_g1_ParamLimits

0x9bdd,	// (0x000342cb) bg_cell_vkbss_key_g1

0xf3e2,	// (0x00039ad0) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x00039ad0) cell_vkbss_key_3p_pane

0xf3fc,	// (0x00039aea) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x00039aea) cell_vkbss_key_g1

0xf416,	// (0x00039b04) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x00039b04) cell_vkbss_key_t1

0x75c7,	// (0x00031cb5) cell_ituss_key_pane_ParamLimits

0x75c7,	// (0x00031cb5) cell_ituss_key_pane

0xf441,	// (0x00039b2f) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x00039b2f) bg_cell_ituss_key_g1

0xf44d,	// (0x00039b3b) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x00039b3b) cell_ituss_key_pane_g1

0x75d8,	// (0x00031cc6) cell_ituss_key_pane_g2_ParamLimits

0x75d8,	// (0x00031cc6) cell_ituss_key_pane_g2

0x0002,

0xfef4,	// (0x0003a5e2) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0003a5e2) cell_ituss_key_pane_g

0x7604,	// (0x00031cf2) cell_ituss_key_t1_ParamLimits

0x7604,	// (0x00031cf2) cell_ituss_key_t1

0x763e,	// (0x00031d2c) cell_ituss_key_t2_ParamLimits

0x763e,	// (0x00031d2c) cell_ituss_key_t2

0x766f,	// (0x00031d5d) cell_ituss_key_t3_ParamLimits

0x766f,	// (0x00031d5d) cell_ituss_key_t3

0x763e,	// (0x00031d2c) cell_ituss_key_t4_ParamLimits

0x763e,	// (0x00031d2c) cell_ituss_key_t4

0x0004,

0xfefb,	// (0x0003a5e9) cell_ituss_key_t_ParamLimits

0xfefb,	// (0x0003a5e9) cell_ituss_key_t

0xf473,	// (0x00039b61) cell_vkbss_key_3p_pane_g1

0xf47b,	// (0x00039b69) cell_vkbss_key_3p_pane_g2

0xf483,	// (0x00039b71) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0003a5f4) cell_vkbss_key_3p_pane_g

0x4b19,	// (0x0002f207) bg_popup_fep_char_preview_window_cp02

0x76b2,	// (0x00031da0) popup_fep_char_pre_window_t1

0xe945,	// (0x00039033) main_ai5_sk_pane

0xefd8,	// (0x000396c6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefe4,	// (0x000396d2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeff9,	// (0x000396e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf005,	// (0x000396f3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0000,	// (0x0002a6ee) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf011,	// (0x000396ff) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x88d4,	// (0x00032fc2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x00039b79) main_ai5_sk_pane_g1

0xa238,	// (0x00034926) popup_query_code_window_g1

0x756f,	// (0x00031c5d) popup_fep_vkb_icf_pane

0x7583,	// (0x00031c71) popup_fep_vtchi_icf_pane

0xf494,	// (0x00039b82) bg_icf_pane

0xf4a0,	// (0x00039b8e) list_vkb_icf_pane

0x9876,	// (0x00033f64) bg_icf_pane_cp01

0xf4ac,	// (0x00039b9a) vtchi_icf_list_pane

0xf4bd,	// (0x00039bab) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00039bab) list_vkb_icf_pane_t1

0xf4d5,	// (0x00039bc3) vtchi_icf_list_pane_t1_ParamLimits

0xf4d5,	// (0x00039bc3) vtchi_icf_list_pane_t1

0x7559,	// (0x00031c47) popup_fep_ituss_window_ParamLimits

0x7583,	// (0x00031c71) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d3,	// (0x00039ac1) ituss_keypad_pane_ParamLimits

0x7599,	// (0x00031c87) ituss_sks_pane

0xf494,	// (0x00039b82) bg_icf_pane_ParamLimits

0x7535,	// (0x00031c23) icf_edit_indi_pane_ParamLimits

0x7535,	// (0x00031c23) icf_edit_indi_pane

0xf4a0,	// (0x00039b8e) list_vkb_icf_pane_ParamLimits

0x9876,	// (0x00033f64) bg_icf_pane_cp01_ParamLimits

0x7544,	// (0x00031c32) icf_edit_indi_pane_cp01_ParamLimits

0x7544,	// (0x00031c32) icf_edit_indi_pane_cp01

0xf4b4,	// (0x00039ba2) vtchi_query_pane

0x691f,	// (0x0003100d) icf_edit_indi_pane_g1_ParamLimits

0x691f,	// (0x0003100d) icf_edit_indi_pane_g1

0x76d4,	// (0x00031dc2) icf_edit_indi_pane_g2_ParamLimits

0x76d4,	// (0x00031dc2) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x0003a60c) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x0003a60c) icf_edit_indi_pane_g

0x76e3,	// (0x00031dd1) icf_edit_indi_pane_t1

0xf4f7,	// (0x00039be5) bg_input_focus_pane_cp042

0x8803,	// (0x00032ef1) vtchi_button_pane

0xf500,	// (0x00039bee) vtchi_query_pane_t1

0xf50e,	// (0x00039bfc) vtchi_query_pane_t2

0xf51c,	// (0x00039c0a) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x0003a5fb) vtchi_query_pane_t

0x4b19,	// (0x0002f207) bg_button_pane_cp13

0xf52a,	// (0x00039c18) vtchi_button_pane_g1

0x76c1,	// (0x00031daf) ituss_sks_pane_g1

0x76cc,	// (0x00031dba) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x0003a602) ituss_sks_pane_g

0xf532,	// (0x00039c20) ituss_sks_pane_t1

0xf540,	// (0x00039c2e) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x0003a607) ituss_sks_pane_t

0xbd7a,	// (0x00036468) indicator_nsta_pane_cp_g1

0xbd83,	// (0x00036471) indicator_nsta_pane_cp_g2

0xbd8b,	// (0x00036479) indicator_nsta_pane_cp_g3

0xbd93,	// (0x00036481) indicator_nsta_pane_cp_g4

0xbd9b,	// (0x00036489) indicator_nsta_pane_cp_g5

0xbd9b,	// (0x00036489) indicator_nsta_pane_cp_g6

0x0005,

0xfabd,	// (0x0003a1ab) indicator_nsta_pane_cp_g

0xe50e,	// (0x00038bfc) cell_graphic2_pane_t2_ParamLimits

0xe50e,	// (0x00038bfc) cell_graphic2_pane_t2

0x0001,

0xfdd6,	// (0x0003a4c4) cell_graphic2_pane_t_ParamLimits

0xfdd6,	// (0x0003a4c4) cell_graphic2_pane_t

0xe53b,	// (0x00038c29) cell_graphic2_control_pane_t1

0x8fe2,	// (0x000336d0) signal_pane_g3_ParamLimits

0x8fe2,	// (0x000336d0) signal_pane_g3

0x8ff4,	// (0x000336e2) signal_pane_g4_ParamLimits

0x8ff4,	// (0x000336e2) signal_pane_g4

0xf3ad,	// (0x00039a9b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3ad,	// (0x00039a9b) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x00039b4f) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x00039b4f) cell_ituss_key_pane_t1

0x9e76,	// (0x00034564) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e76,	// (0x00034564) form_field_data_wide_pane_vc_t2

0x9e8a,	// (0x00034578) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e8a,	// (0x00034578) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00039ef7) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00039ef7) form_field_data_wide_pane_vc_t

0xba46,	// (0x00036134) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba46,	// (0x00036134) form_field_slider_wide_pane_vc_t3

0xbb20,	// (0x0003620e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb20,	// (0x0003620e) form_field_popup_wide_pane_vc_t2

0xbb37,	// (0x00036225) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb37,	// (0x00036225) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaac,	// (0x0003a19a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaac,	// (0x0003a19a) form_field_popup_wide_pane_vc_t

0x736d,	// (0x00031a5b) aid_fshwr2_btn_pane_ParamLimits

0x7379,	// (0x00031a67) aid_fshwr2_syb_pane_ParamLimits

0x7385,	// (0x00031a73) aid_fshwr2_txt_pane_ParamLimits

0x6bb8,	// (0x000312a6) fshwr2_bg_pane_ParamLimits

0x7391,	// (0x00031a7f) fshwr2_func_candi_pane_ParamLimits

0x73a6,	// (0x00031a94) fshwr2_hwr_syb_pane_ParamLimits

0x73b6,	// (0x00031aa4) fshwr2_icf_pane_ParamLimits

0x7c38,	// (0x00032326) list_double_graphic_pane_vc_g4_ParamLimits

0x7c38,	// (0x00032326) list_double_graphic_pane_vc_g4

0x75f8,	// (0x00031ce6) cell_ituss_key_pane_g3_ParamLimits

0x75f8,	// (0x00031ce6) cell_ituss_key_pane_g3

0x76a0,	// (0x00031d8e) cell_ituss_key_t5_ParamLimits

0x76a0,	// (0x00031d8e) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

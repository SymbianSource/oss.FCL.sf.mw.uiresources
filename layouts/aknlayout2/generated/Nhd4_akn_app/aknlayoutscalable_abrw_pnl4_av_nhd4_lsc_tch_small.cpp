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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002efef };

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
0xcfdd,	// (0x0003bfcc) Screen

0xcfe9,	// (0x0003bfd8) application_window_ParamLimits

0xcfe9,	// (0x0003bfd8) application_window

0x2e1e,	// (0x00031e0d) screen_g1

0xb64a,	// (0x0003a639) area_bottom_pane_ParamLimits

0xb64a,	// (0x0003a639) area_bottom_pane

0x0184,	// (0x0002f173) area_top_pane_ParamLimits

0x0184,	// (0x0002f173) area_top_pane

0x0222,	// (0x0002f211) main_pane_ParamLimits

0x0222,	// (0x0002f211) main_pane

0x2e28,	// (0x00031e17) misc_graphics

0xd795,	// (0x0003c784) battery_pane_ParamLimits

0xd795,	// (0x0003c784) battery_pane

0x5cda,	// (0x00034cc9) bg_status_flat_pane_g8

0x5ce2,	// (0x00034cd1) bg_status_flat_pane_g9

0x50c9,	// (0x000340b8) context_pane_ParamLimits

0x50c9,	// (0x000340b8) context_pane

0xd900,	// (0x0003c8ef) navi_pane_ParamLimits

0xd900,	// (0x0003c8ef) navi_pane

0xd97e,	// (0x0003c96d) signal_pane_ParamLimits

0xd97e,	// (0x0003c96d) signal_pane

0x0008,

0xf874,	// (0x0003e863) bg_status_flat_pane_g

0xda0e,	// (0x0003c9fd) status_pane_g1_ParamLimits

0xda0e,	// (0x0003c9fd) status_pane_g1

0xda24,	// (0x0003ca13) status_pane_g2_ParamLimits

0xda24,	// (0x0003ca13) status_pane_g2

0x52e8,	// (0x000342d7) status_pane_g3_ParamLimits

0x52e8,	// (0x000342d7) status_pane_g3

0x0004,

0xf7a0,	// (0x0003e78f) status_pane_g_ParamLimits

0xf7a0,	// (0x0003e78f) status_pane_g

0xda30,	// (0x0003ca1f) title_pane_ParamLimits

0xda30,	// (0x0003ca1f) title_pane

0xda93,	// (0x0003ca82) uni_indicator_pane_ParamLimits

0xda93,	// (0x0003ca82) uni_indicator_pane

0x4f2f,	// (0x00033f1e) bg_list_pane_ParamLimits

0x4f2f,	// (0x00033f1e) bg_list_pane

0xd708,	// (0x0003c6f7) find_pane

0xbf47,	// (0x0003af36) listscroll_app_pane_ParamLimits

0xbf47,	// (0x0003af36) listscroll_app_pane

0x4f5b,	// (0x00033f4a) listscroll_form_pane

0xbf57,	// (0x0003af46) listscroll_gen_pane_ParamLimits

0xbf57,	// (0x0003af46) listscroll_gen_pane

0x1257,	// (0x00030246) listscroll_set_pane

0x6856,	// (0x00035845) main_idle_act_pane

0x4c3b,	// (0x00033c2a) main_idle_trad_pane

0x4c3b,	// (0x00033c2a) main_list_empty_pane

0x4f75,	// (0x00033f64) main_midp_pane

0x4f81,	// (0x00033f70) main_pane_g1_ParamLimits

0x4f81,	// (0x00033f70) main_pane_g1

0xbf6b,	// (0x0003af5a) popup_ai_message_window_ParamLimits

0xbf6b,	// (0x0003af5a) popup_ai_message_window

0xbffc,	// (0x0003afeb) popup_fep_china_uni_window_ParamLimits

0xbffc,	// (0x0003afeb) popup_fep_china_uni_window

0x1373,	// (0x00030362) popup_fep_japan_candidate_window_ParamLimits

0x1373,	// (0x00030362) popup_fep_japan_candidate_window

0x1391,	// (0x00030380) popup_fep_japan_predictive_window_ParamLimits

0x1391,	// (0x00030380) popup_fep_japan_predictive_window

0xc056,	// (0x0003b045) popup_find_window

0xc073,	// (0x0003b062) popup_grid_graphic_window_ParamLimits

0xc073,	// (0x0003b062) popup_grid_graphic_window

0x13f6,	// (0x000303e5) popup_large_graphic_colour_window

0xc10b,	// (0x0003b0fa) popup_menu_window_ParamLimits

0xc10b,	// (0x0003b0fa) popup_menu_window

0xc2d7,	// (0x0003b2c6) popup_note_image_window

0xc29d,	// (0x0003b28c) popup_note_wait_window_ParamLimits

0xc29d,	// (0x0003b28c) popup_note_wait_window

0xc2ef,	// (0x0003b2de) popup_note_window_ParamLimits

0xc2ef,	// (0x0003b2de) popup_note_window

0xc395,	// (0x0003b384) popup_query_code_window_ParamLimits

0xc395,	// (0x0003b384) popup_query_code_window

0x1640,	// (0x0003062f) popup_query_data_code_window_ParamLimits

0x1640,	// (0x0003062f) popup_query_data_code_window

0xc3cf,	// (0x0003b3be) popup_query_data_window_ParamLimits

0xc3cf,	// (0x0003b3be) popup_query_data_window

0xc44b,	// (0x0003b43a) popup_query_sat_info_window_ParamLimits

0xc44b,	// (0x0003b43a) popup_query_sat_info_window

0xc4e2,	// (0x0003b4d1) popup_snote_single_graphic_window_ParamLimits

0xc4e2,	// (0x0003b4d1) popup_snote_single_graphic_window

0xc4e2,	// (0x0003b4d1) popup_snote_single_text_window_ParamLimits

0xc4e2,	// (0x0003b4d1) popup_snote_single_text_window

0x16c3,	// (0x000306b2) popup_sub_window_general

0x17f1,	// (0x000307e0) popup_window_general_ParamLimits

0x17f1,	// (0x000307e0) popup_window_general

0x4f8f,	// (0x00033f7e) power_save_pane

0xbdd6,	// (0x0003adc5) control_pane_g1_ParamLimits

0xbdd6,	// (0x0003adc5) control_pane_g1

0xbdff,	// (0x0003adee) control_pane_g2_ParamLimits

0xbdff,	// (0x0003adee) control_pane_g2

0x4ef2,	// (0x00033ee1) control_pane_g3_ParamLimits

0x4ef2,	// (0x00033ee1) control_pane_g3

0x0007,

0xf788,	// (0x0003e777) control_pane_g_ParamLimits

0xf788,	// (0x0003e777) control_pane_g

0xbe40,	// (0x0003ae2f) control_pane_t1_ParamLimits

0xbe40,	// (0x0003ae2f) control_pane_t1

0xbe9e,	// (0x0003ae8d) control_pane_t2_ParamLimits

0xbe9e,	// (0x0003ae8d) control_pane_t2

0x0002,

0xf799,	// (0x0003e788) control_pane_t_ParamLimits

0xf799,	// (0x0003e788) control_pane_t

0xd63a,	// (0x0003c629) navi_navi_volume_pane_cp1

0xd642,	// (0x0003c631) status_small_icon_pane

0x4e27,	// (0x00033e16) status_small_pane_g1_ParamLimits

0x4e27,	// (0x00033e16) status_small_pane_g1

0xd64a,	// (0x0003c639) status_small_pane_g2_ParamLimits

0xd64a,	// (0x0003c639) status_small_pane_g2

0xd656,	// (0x0003c645) status_small_pane_g3_ParamLimits

0xd656,	// (0x0003c645) status_small_pane_g3

0xd662,	// (0x0003c651) status_small_pane_g4_ParamLimits

0xd662,	// (0x0003c651) status_small_pane_g4

0xd66e,	// (0x0003c65d) status_small_pane_g5_ParamLimits

0xd66e,	// (0x0003c65d) status_small_pane_g5

0xd67c,	// (0x0003c66b) status_small_pane_g6_ParamLimits

0xd67c,	// (0x0003c66b) status_small_pane_g6

0x0007,

0xf777,	// (0x0003e766) status_small_pane_g_ParamLimits

0xf777,	// (0x0003e766) status_small_pane_g

0xd6ab,	// (0x0003c69a) status_small_pane_t1

0xd6cd,	// (0x0003c6bc) status_small_wait_pane_ParamLimits

0xd6cd,	// (0x0003c6bc) status_small_wait_pane

0xd4a5,	// (0x0003c494) aid_levels_signal_ParamLimits

0xd4a5,	// (0x0003c494) aid_levels_signal

0xd4bd,	// (0x0003c4ac) signal_pane_g1_ParamLimits

0xd4bd,	// (0x0003c4ac) signal_pane_g1

0xd4d8,	// (0x0003c4c7) signal_pane_g2_ParamLimits

0xd4d8,	// (0x0003c4c7) signal_pane_g2

0x0003,

0xf708,	// (0x0003e6f7) signal_pane_g_ParamLimits

0xf708,	// (0x0003e6f7) signal_pane_g

0x4706,	// (0x000336f5) context_pane_g1

0xcff9,	// (0x0003bfe8) title_pane_g1

0xd030,	// (0x0003c01f) title_pane_t1

0x2ed0,	// (0x00031ebf) title_pane_t2

0x2ef6,	// (0x00031ee5) title_pane_t3

0x0002,

0xf557,	// (0x0003e546) title_pane_t

0xdabb,	// (0x0003caaa) aid_levels_battery_ParamLimits

0xdabb,	// (0x0003caaa) aid_levels_battery

0xdad7,	// (0x0003cac6) battery_pane_g1_ParamLimits

0xdad7,	// (0x0003cac6) battery_pane_g1

0xdaf4,	// (0x0003cae3) battery_pane_g2_ParamLimits

0xdaf4,	// (0x0003cae3) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003e79a) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003e79a) battery_pane_g

0xdcd9,	// (0x0003ccc8) uni_indicator_pane_g1

0xdcef,	// (0x0003ccde) uni_indicator_pane_g2

0xdd05,	// (0x0003ccf4) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003e90b) uni_indicator_pane_g

0x4ab9,	// (0x00033aa8) navi_icon_pane_ParamLimits

0x4ab9,	// (0x00033aa8) navi_icon_pane

0x49df,	// (0x000339ce) navi_midp_pane

0x4ad5,	// (0x00033ac4) navi_navi_pane

0x4adf,	// (0x00033ace) navi_text_pane_ParamLimits

0x4adf,	// (0x00033ace) navi_text_pane

0x2e1e,	// (0x00031e0d) status_small_wait_pane_g1

0x3b8a,	// (0x00032b79) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003e906) status_small_wait_pane_g

0x6335,	// (0x00035324) navi_navi_icon_text_pane

0x633d,	// (0x0003532c) navi_navi_pane_g1_ParamLimits

0x633d,	// (0x0003532c) navi_navi_pane_g1

0x634f,	// (0x0003533e) navi_navi_pane_g2_ParamLimits

0x634f,	// (0x0003533e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003e8d4) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003e8d4) navi_navi_pane_g

0x6361,	// (0x00035350) navi_navi_tabs_pane

0x636a,	// (0x00035359) navi_navi_text_pane

0x6335,	// (0x00035324) navi_navi_volume_pane

0x6311,	// (0x00035300) navi_text_pane_t1

0x6305,	// (0x000352f4) navi_icon_pane_g1

0x6258,	// (0x00035247) navi_navi_text_pane_t1

0x1ba2,	// (0x00030b91) navi_navi_volume_pane_g1

0xc774,	// (0x0003b763) volume_small_pane

0xdc16,	// (0x0003cc05) navi_navi_icon_text_pane_g1

0x61c6,	// (0x000351b5) navi_navi_icon_text_pane_t1

0x4ad5,	// (0x00033ac4) navi_tabs_2_long_pane

0x4ad5,	// (0x00033ac4) navi_tabs_2_pane

0x4ad5,	// (0x00033ac4) navi_tabs_3_long_pane

0x4ad5,	// (0x00033ac4) navi_tabs_3_pane

0x4ad5,	// (0x00033ac4) navi_tabs_4_pane

0xc754,	// (0x0003b743) tabs_2_active_pane_ParamLimits

0xc754,	// (0x0003b743) tabs_2_active_pane

0xc764,	// (0x0003b753) tabs_2_passive_pane_ParamLimits

0xc764,	// (0x0003b753) tabs_2_passive_pane

0xc722,	// (0x0003b711) tabs_3_active_pane_ParamLimits

0xc722,	// (0x0003b711) tabs_3_active_pane

0xc732,	// (0x0003b721) tabs_3_passive_pane_ParamLimits

0xc732,	// (0x0003b721) tabs_3_passive_pane

0xc743,	// (0x0003b732) tabs_3_passive_pane_cp_ParamLimits

0xc743,	// (0x0003b732) tabs_3_passive_pane_cp

0xc6ef,	// (0x0003b6de) tabs_4_active_pane_ParamLimits

0xc6ef,	// (0x0003b6de) tabs_4_active_pane

0xc700,	// (0x0003b6ef) tabs_4_passive_pane_ParamLimits

0xc700,	// (0x0003b6ef) tabs_4_passive_pane

0x1b2e,	// (0x00030b1d) tabs_4_passive_pane_cp_ParamLimits

0x1b2e,	// (0x00030b1d) tabs_4_passive_pane_cp

0xc711,	// (0x0003b700) tabs_4_passive_pane_cp2_ParamLimits

0xc711,	// (0x0003b700) tabs_4_passive_pane_cp2

0xc6cb,	// (0x0003b6ba) tabs_2_long_active_pane_ParamLimits

0xc6cb,	// (0x0003b6ba) tabs_2_long_active_pane

0xc6dd,	// (0x0003b6cc) tabs_2_long_passive_pane_ParamLimits

0xc6dd,	// (0x0003b6cc) tabs_2_long_passive_pane

0xc68c,	// (0x0003b67b) tabs_3_long_active_pane_ParamLimits

0xc68c,	// (0x0003b67b) tabs_3_long_active_pane

0xc69f,	// (0x0003b68e) tabs_3_long_passive_pane_ParamLimits

0xc69f,	// (0x0003b68e) tabs_3_long_passive_pane

0xc6b8,	// (0x0003b6a7) tabs_3_long_passive_pane_cp_ParamLimits

0xc6b8,	// (0x0003b6a7) tabs_3_long_passive_pane_cp

0x1a55,	// (0x00030a44) volume_small_pane_g1

0x1a5e,	// (0x00030a4d) volume_small_pane_g2

0x1a67,	// (0x00030a56) volume_small_pane_g3

0x1a70,	// (0x00030a5f) volume_small_pane_g4

0x1a79,	// (0x00030a68) volume_small_pane_g5

0x1a82,	// (0x00030a71) volume_small_pane_g6

0x1a8b,	// (0x00030a7a) volume_small_pane_g7

0x1a94,	// (0x00030a83) volume_small_pane_g8

0x1a9d,	// (0x00030a8c) volume_small_pane_g9

0x1aa6,	// (0x00030a95) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003e8a0) volume_small_pane_g

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp2_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp2

0x3787,	// (0x00032776) tabs_3_active_pane_g1

0xd0bc,	// (0x0003c0ab) tabs_3_active_pane_t1

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp2_ParamLimits

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp2

0x3787,	// (0x00032776) tabs_3_passive_pane_g1

0xd0bc,	// (0x0003c0ab) tabs_3_passive_pane_t1

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp3_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp3

0x37a1,	// (0x00032790) tabs_4_active_pane_g1

0xd0ce,	// (0x0003c0bd) tabs_4_active_pane_t1

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp3_ParamLimits

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp3

0x37a1,	// (0x00032790) tabs_4_1_passive_pane_g1

0xd0ce,	// (0x0003c0bd) tabs_4_1_passive_pane_t1

0x4f75,	// (0x00033f64) list_highlight_pane_cp2

0xdd8e,	// (0x0003cd7d) list_set_pane_ParamLimits

0xdd8e,	// (0x0003cd7d) list_set_pane

0xde28,	// (0x0003ce17) main_pane_set_t1_ParamLimits

0xde28,	// (0x0003ce17) main_pane_set_t1

0xde48,	// (0x0003ce37) main_pane_set_t2_ParamLimits

0xde48,	// (0x0003ce37) main_pane_set_t2

0xde5c,	// (0x0003ce4b) main_pane_set_t3_ParamLimits

0xde5c,	// (0x0003ce4b) main_pane_set_t3

0xde6e,	// (0x0003ce5d) main_pane_set_t4_ParamLimits

0xde6e,	// (0x0003ce5d) main_pane_set_t4

0x0003,

0xf981,	// (0x0003e970) main_pane_set_t_ParamLimits

0xf981,	// (0x0003e970) main_pane_set_t

0xde80,	// (0x0003ce6f) setting_code_pane

0xde88,	// (0x0003ce77) setting_slider_graphic_pane

0xde88,	// (0x0003ce77) setting_slider_pane

0xde88,	// (0x0003ce77) setting_text_pane

0xde88,	// (0x0003ce77) setting_volume_pane

0x0463,	// (0x0002f452) volume_set_pane

0x3779,	// (0x00032768) bg_set_opt_pane_cp

0x046b,	// (0x0002f45a) setting_slider_pane_t1

0x0484,	// (0x0002f473) setting_slider_pane_t2

0x049e,	// (0x0002f48d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e54d) setting_slider_pane_t

0x04b6,	// (0x0002f4a5) slider_set_pane

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp2

0x37bb,	// (0x000327aa) setting_slider_graphic_pane_g1

0x04cc,	// (0x0002f4bb) setting_slider_graphic_pane_t1

0x04dc,	// (0x0002f4cb) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e554) setting_slider_graphic_pane_t

0x04ec,	// (0x0002f4db) slider_set_pane_cp

0x2e28,	// (0x00031e17) input_focus_pane_cp1

0x683d,	// (0x0003582c) list_set_text_pane

0x2e1e,	// (0x00031e0d) setting_text_pane_g1

0x2e28,	// (0x00031e17) input_focus_pane_cp2

0x2e1e,	// (0x00031e0d) setting_code_pane_g1

0x37c4,	// (0x000327b3) setting_code_pane_t1

0x04f4,	// (0x0002f4e3) set_text_pane_t1_ParamLimits

0x04f4,	// (0x0002f4e3) set_text_pane_t1

0x402e,	// (0x0003301d) set_opt_bg_pane_g1

0x4036,	// (0x00033025) set_opt_bg_pane_g2

0x681d,	// (0x0003580c) set_opt_bg_pane_g3

0x4046,	// (0x00033035) set_opt_bg_pane_g4

0x404e,	// (0x0003303d) set_opt_bg_pane_g5

0x4056,	// (0x00033045) set_opt_bg_pane_g6

0x6825,	// (0x00035814) set_opt_bg_pane_g7

0x682d,	// (0x0003581c) set_opt_bg_pane_g8

0x6835,	// (0x00035824) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003e95d) set_opt_bg_pane_g

0x6810,	// (0x000357ff) slider_set_pane_g1

0x1c17,	// (0x00030c06) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003e94e) slider_set_pane_g

0x1bb3,	// (0x00030ba2) volume_set_pane_g1

0x1bbb,	// (0x00030baa) volume_set_pane_g2

0x1bc3,	// (0x00030bb2) volume_set_pane_g3

0x1bcb,	// (0x00030bba) volume_set_pane_g4

0x1bd3,	// (0x00030bc2) volume_set_pane_g5

0x1bdb,	// (0x00030bca) volume_set_pane_g6

0x1be3,	// (0x00030bd2) volume_set_pane_g7

0x1beb,	// (0x00030bda) volume_set_pane_g8

0x1bf3,	// (0x00030be2) volume_set_pane_g9

0x1bfb,	// (0x00030bea) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003e926) volume_set_pane_g

0xd0e0,	// (0x0003c0cf) indicator_pane_ParamLimits

0xd0e0,	// (0x0003c0cf) indicator_pane

0xd108,	// (0x0003c0f7) main_idle_pane_g2_ParamLimits

0xd108,	// (0x0003c0f7) main_idle_pane_g2

0xd140,	// (0x0003c12f) main_pane_idle_g1_ParamLimits

0xd140,	// (0x0003c12f) main_pane_idle_g1

0x3813,	// (0x00032802) popup_clock_digital_analogue_window_ParamLimits

0x3813,	// (0x00032802) popup_clock_digital_analogue_window

0xd167,	// (0x0003c156) soft_indicator_pane_ParamLimits

0xd167,	// (0x0003c156) soft_indicator_pane

0xd181,	// (0x0003c170) wallpaper_pane_ParamLimits

0xd181,	// (0x0003c170) wallpaper_pane

0x2e1e,	// (0x00031e0d) wallpaper_pane_g1

0xd193,	// (0x0003c182) indicator_pane_g1_ParamLimits

0xd193,	// (0x0003c182) indicator_pane_g1

0x6bd9,	// (0x00035bc8) navi_navi_icon_text_pane_srt_g1

0x3865,	// (0x00032854) soft_indicator_pane_t1

0x387f,	// (0x0003286e) aid_ps_area_pane

0xd1a9,	// (0x0003c198) aid_ps_clock_pane

0x389e,	// (0x0003288d) aid_ps_indicator_pane

0x38aa,	// (0x00032899) indicator_ps_pane_ParamLimits

0x38aa,	// (0x00032899) indicator_ps_pane

0x38b9,	// (0x000328a8) power_save_pane_g1_ParamLimits

0x38b9,	// (0x000328a8) power_save_pane_g1

0x38c5,	// (0x000328b4) power_save_pane_g2_ParamLimits

0x38c5,	// (0x000328b4) power_save_pane_g2

0x0078,	// (0x0002f067) aid_navinavi_width_pane

0x387f,	// (0x0003286e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e559) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e559) power_save_pane_g

0x38d3,	// (0x000328c2) power_save_pane_t1_ParamLimits

0x38d3,	// (0x000328c2) power_save_pane_t1

0xd1a9,	// (0x0003c198) aid_ps_clock_pane_ParamLimits

0x389e,	// (0x0003288d) aid_ps_indicator_pane_ParamLimits

0x38e5,	// (0x000328d4) power_save_pane_t4_ParamLimits

0x38e5,	// (0x000328d4) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e55e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e55e) power_save_pane_t

0x390f,	// (0x000328fe) power_save_t3_ParamLimits

0x390f,	// (0x000328fe) power_save_t3

0x38fa,	// (0x000328e9) power_save_t2_ParamLimits

0x38fa,	// (0x000328e9) power_save_t2

0x3924,	// (0x00032913) indicator_ps_pane_g1

0xd1b7,	// (0x0003c1a6) ai_gene_pane_ParamLimits

0xd1b7,	// (0x0003c1a6) ai_gene_pane

0xd1ce,	// (0x0003c1bd) ai_links_pane_ParamLimits

0xd1ce,	// (0x0003c1bd) ai_links_pane

0xd1e6,	// (0x0003c1d5) indicator_pane_cp1_ParamLimits

0xd1e6,	// (0x0003c1d5) indicator_pane_cp1

0xd1f5,	// (0x0003c1e4) main_pane_idle_g1_cp_ParamLimits

0xd1f5,	// (0x0003c1e4) main_pane_idle_g1_cp

0x395d,	// (0x0003294c) popup_ai_links_title_window

0xd20d,	// (0x0003c1fc) soft_indicator_pane_cp1_ParamLimits

0xd20d,	// (0x0003c1fc) soft_indicator_pane_cp1

0x65fc,	// (0x000355eb) ai_links_pane_g1

0x6605,	// (0x000355f4) grid_ai_links_pane

0xdcd0,	// (0x0003ccbf) ai_gene_pane_1

0x65ea,	// (0x000355d9) ai_gene_pane_2

0x65f3,	// (0x000355e2) list_highlight_pane_cp4

0xdcac,	// (0x0003cc9b) cell_ai_link_pane_ParamLimits

0xdcac,	// (0x0003cc9b) cell_ai_link_pane

0x65bb,	// (0x000355aa) cell_ai_link_pane_g1

0x3b8a,	// (0x00032b79) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003e901) cell_ai_link_pane_g

0x2e28,	// (0x00031e17) grid_highlight_cp2

0x2e28,	// (0x00031e17) bg_popup_sub_pane_cp1

0x3980,	// (0x0003296f) popup_ai_links_title_window_t1

0x650b,	// (0x000354fa) ai_gene_pane_1_g1_ParamLimits

0x650b,	// (0x000354fa) ai_gene_pane_1_g1

0x6517,	// (0x00035506) ai_gene_pane_1_g2_ParamLimits

0x6517,	// (0x00035506) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003e8f7) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003e8f7) ai_gene_pane_1_g

0x6524,	// (0x00035513) ai_gene_pane_1_t1_ParamLimits

0x6524,	// (0x00035513) ai_gene_pane_1_t1

0x6558,	// (0x00035547) grid_ai_soft_ind_pane

0x64f6,	// (0x000354e5) ai_gene_pane_2_t1_ParamLimits

0x64f6,	// (0x000354e5) ai_gene_pane_2_t1

0xd221,	// (0x0003c210) main_pane_empty_t1_ParamLimits

0xd221,	// (0x0003c210) main_pane_empty_t1

0xd239,	// (0x0003c228) main_pane_empty_t2_ParamLimits

0xd239,	// (0x0003c228) main_pane_empty_t2

0xd24e,	// (0x0003c23d) main_pane_empty_t3_ParamLimits

0xd24e,	// (0x0003c23d) main_pane_empty_t3

0xd260,	// (0x0003c24f) main_pane_empty_t4_ParamLimits

0xd260,	// (0x0003c24f) main_pane_empty_t4

0xd272,	// (0x0003c261) main_pane_empty_t5_ParamLimits

0xd272,	// (0x0003c261) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e563) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e563) main_pane_empty_t

0x407f,	// (0x0003306e) bg_popup_window_pane_ParamLimits

0x407f,	// (0x0003306e) bg_popup_window_pane

0x6266,	// (0x00035255) find_popup_pane_cp2_ParamLimits

0x6266,	// (0x00035255) find_popup_pane_cp2

0x6272,	// (0x00035261) heading_pane_ParamLimits

0x6272,	// (0x00035261) heading_pane

0x2e28,	// (0x00031e17) bg_popup_sub_pane

0xdc2d,	// (0x0003cc1c) bg_popup_window_pane_g1_ParamLimits

0xdc2d,	// (0x0003cc1c) bg_popup_window_pane_g1

0xdc3c,	// (0x0003cc2b) bg_popup_window_pane_g2_ParamLimits

0xdc3c,	// (0x0003cc2b) bg_popup_window_pane_g2

0xdc48,	// (0x0003cc37) bg_popup_window_pane_g3_ParamLimits

0xdc48,	// (0x0003cc37) bg_popup_window_pane_g3

0xdc54,	// (0x0003cc43) bg_popup_window_pane_g4_ParamLimits

0xdc54,	// (0x0003cc43) bg_popup_window_pane_g4

0xdc63,	// (0x0003cc52) bg_popup_window_pane_g5_ParamLimits

0xdc63,	// (0x0003cc52) bg_popup_window_pane_g5

0xdc73,	// (0x0003cc62) bg_popup_window_pane_g6_ParamLimits

0xdc73,	// (0x0003cc62) bg_popup_window_pane_g6

0xdc7f,	// (0x0003cc6e) bg_popup_window_pane_g7_ParamLimits

0xdc7f,	// (0x0003cc6e) bg_popup_window_pane_g7

0xdc8e,	// (0x0003cc7d) bg_popup_window_pane_g8_ParamLimits

0xdc8e,	// (0x0003cc7d) bg_popup_window_pane_g8

0xdc9d,	// (0x0003cc8c) bg_popup_window_pane_g9_ParamLimits

0xdc9d,	// (0x0003cc8c) bg_popup_window_pane_g9

0x624c,	// (0x0003523b) bg_popup_window_pane_g10_ParamLimits

0x624c,	// (0x0003523b) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003e8bf) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003e8bf) bg_popup_window_pane_g

0x6175,	// (0x00035164) bg_popup_heading_pane_ParamLimits

0x6175,	// (0x00035164) bg_popup_heading_pane

0x1c9f,	// (0x00030c8e) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c9f,	// (0x00030c8e) tabs_4_passive_pane_cp_srt

0x1cb1,	// (0x00030ca0) tabs_4_passive_pane_srt_ParamLimits

0x6189,	// (0x00035178) heading_pane_g2

0x1cb1,	// (0x00030ca0) tabs_4_passive_pane_srt

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp3_srt

0x6191,	// (0x00035180) heading_pane_t1_ParamLimits

0x6191,	// (0x00035180) heading_pane_t1

0x61a8,	// (0x00035197) heading_pane_t2_ParamLimits

0x61a8,	// (0x00035197) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003e8ba) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003e8ba) heading_pane_t

0x5ca2,	// (0x00034c91) bg_popup_heading_pane_g1

0x5d51,	// (0x00034d40) bg_popup_heading_pane_g2

0x5d5b,	// (0x00034d4a) bg_popup_heading_pane_g3

0x5d65,	// (0x00034d54) bg_popup_heading_pane_g4

0x5d6f,	// (0x00034d5e) bg_popup_heading_pane_g5

0x5d79,	// (0x00034d68) bg_popup_heading_pane_g6

0x5d81,	// (0x00034d70) bg_popup_heading_pane_g7

0x5d89,	// (0x00034d78) bg_popup_heading_pane_g8

0x5d93,	// (0x00034d82) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003e876) bg_popup_heading_pane_g

0x5473,	// (0x00034462) bg_popup_sub_pane_g1

0x5483,	// (0x00034472) bg_popup_sub_pane_g2

0x547b,	// (0x0003446a) bg_popup_sub_pane_g3

0x5493,	// (0x00034482) bg_popup_sub_pane_g4

0x548b,	// (0x0003447a) bg_popup_sub_pane_g5

0x549b,	// (0x0003448a) bg_popup_sub_pane_g6

0x54a3,	// (0x00034492) bg_popup_sub_pane_g7

0x54b3,	// (0x000344a2) bg_popup_sub_pane_g8

0x54ab,	// (0x0003449a) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003e850) bg_popup_sub_pane_g

0x39f4,	// (0x000329e3) bg_popup_window_pane_cp5_ParamLimits

0x39f4,	// (0x000329e3) bg_popup_window_pane_cp5

0x3a10,	// (0x000329ff) popup_note_window_g1_ParamLimits

0x3a10,	// (0x000329ff) popup_note_window_g1

0x3a1c,	// (0x00032a0b) popup_note_window_t1_ParamLimits

0x3a1c,	// (0x00032a0b) popup_note_window_t1

0x3a2e,	// (0x00032a1d) popup_note_window_t2_ParamLimits

0x3a2e,	// (0x00032a1d) popup_note_window_t2

0x3a40,	// (0x00032a2f) popup_note_window_t3_ParamLimits

0x3a40,	// (0x00032a2f) popup_note_window_t3

0x3a52,	// (0x00032a41) popup_note_window_t4_ParamLimits

0x3a52,	// (0x00032a41) popup_note_window_t4

0x3a7a,	// (0x00032a69) popup_note_window_t5_ParamLimits

0x3a7a,	// (0x00032a69) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e56e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e56e) popup_note_window_t

0x3a9e,	// (0x00032a8d) bg_popup_window_pane_cp6_ParamLimits

0x3a9e,	// (0x00032a8d) bg_popup_window_pane_cp6

0x5c16,	// (0x00034c05) popup_note_image_window_g1_ParamLimits

0x5c16,	// (0x00034c05) popup_note_image_window_g1

0x5c22,	// (0x00034c11) popup_note_image_window_g2_ParamLimits

0x5c22,	// (0x00034c11) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003e844) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003e844) popup_note_image_window_g

0x5c3b,	// (0x00034c2a) popup_note_image_window_t1_ParamLimits

0x5c3b,	// (0x00034c2a) popup_note_image_window_t1

0x5c54,	// (0x00034c43) popup_note_image_window_t2_ParamLimits

0x5c54,	// (0x00034c43) popup_note_image_window_t2

0x5c6d,	// (0x00034c5c) popup_note_image_window_t3_ParamLimits

0x5c6d,	// (0x00034c5c) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003e849) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003e849) popup_note_image_window_t

0x5ad7,	// (0x00034ac6) bg_popup_window_pane_cp7_ParamLimits

0x5ad7,	// (0x00034ac6) bg_popup_window_pane_cp7

0x5b07,	// (0x00034af6) popup_note_wait_window_g1_ParamLimits

0x5b07,	// (0x00034af6) popup_note_wait_window_g1

0x5b13,	// (0x00034b02) popup_note_wait_window_g2_ParamLimits

0x5b13,	// (0x00034b02) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003e832) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003e832) popup_note_wait_window_g

0x5b2b,	// (0x00034b1a) popup_note_wait_window_t1_ParamLimits

0x5b2b,	// (0x00034b1a) popup_note_wait_window_t1

0x5b52,	// (0x00034b41) popup_note_wait_window_t2_ParamLimits

0x5b52,	// (0x00034b41) popup_note_wait_window_t2

0x5b6f,	// (0x00034b5e) popup_note_wait_window_t3_ParamLimits

0x5b6f,	// (0x00034b5e) popup_note_wait_window_t3

0x5b82,	// (0x00034b71) popup_note_wait_window_t4_ParamLimits

0x5b82,	// (0x00034b71) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003e839) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003e839) popup_note_wait_window_t

0x5ba7,	// (0x00034b96) wait_bar_pane_ParamLimits

0x5ba7,	// (0x00034b96) wait_bar_pane

0x2e28,	// (0x00031e17) wait_anim_pane

0x2e28,	// (0x00031e17) wait_border_pane

0x2e1e,	// (0x00031e0d) wait_anim_pane_g1

0x2e1e,	// (0x00031e0d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003e6f2) wait_anim_pane_g

0x5a7b,	// (0x00034a6a) wait_border_pane_g1

0x5a86,	// (0x00034a75) wait_border_pane_g2

0x5a8f,	// (0x00034a7e) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003e82b) wait_border_pane_g

0x58eb,	// (0x000348da) bg_popup_window_pane_cp16_ParamLimits

0x58eb,	// (0x000348da) bg_popup_window_pane_cp16

0x59eb,	// (0x000349da) indicator_popup_pane_cp4_ParamLimits

0x59eb,	// (0x000349da) indicator_popup_pane_cp4

0x59ff,	// (0x000349ee) popup_query_data_window_t1_ParamLimits

0x59ff,	// (0x000349ee) popup_query_data_window_t1

0x5a11,	// (0x00034a00) popup_query_data_window_t2_ParamLimits

0x5a11,	// (0x00034a00) popup_query_data_window_t2

0x5a2a,	// (0x00034a19) popup_query_data_window_t3_ParamLimits

0x5a2a,	// (0x00034a19) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003e824) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003e824) popup_query_data_window_t

0x5a44,	// (0x00034a33) query_popup_data_pane_ParamLimits

0x5a44,	// (0x00034a33) query_popup_data_pane

0x5a58,	// (0x00034a47) query_popup_data_pane_cp1_ParamLimits

0x5a58,	// (0x00034a47) query_popup_data_pane_cp1

0x58eb,	// (0x000348da) bg_popup_window_pane_cp10_ParamLimits

0x58eb,	// (0x000348da) bg_popup_window_pane_cp10

0x591d,	// (0x0003490c) indicator_popup_pane_ParamLimits

0x591d,	// (0x0003490c) indicator_popup_pane

0x593f,	// (0x0003492e) popup_query_code_window_t1_ParamLimits

0x593f,	// (0x0003492e) popup_query_code_window_t1

0x5959,	// (0x00034948) popup_query_code_window_t2_ParamLimits

0x5959,	// (0x00034948) popup_query_code_window_t2

0x59a2,	// (0x00034991) popup_query_code_window_t3_ParamLimits

0x59a2,	// (0x00034991) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003e81d) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003e81d) popup_query_code_window_t

0x59d1,	// (0x000349c0) query_popup_pane_ParamLimits

0x59d1,	// (0x000349c0) query_popup_pane

0x3a9e,	// (0x00032a8d) bg_popup_window_pane_cp15_ParamLimits

0x3a9e,	// (0x00032a8d) bg_popup_window_pane_cp15

0x3abc,	// (0x00032aab) indicator_popup_pane_cp1_ParamLimits

0x3abc,	// (0x00032aab) indicator_popup_pane_cp1

0x3acf,	// (0x00032abe) indicator_popup_pane_cp2_ParamLimits

0x3acf,	// (0x00032abe) indicator_popup_pane_cp2

0x3ae2,	// (0x00032ad1) popup_query_data_code_window_g1_ParamLimits

0x3ae2,	// (0x00032ad1) popup_query_data_code_window_g1

0x3af5,	// (0x00032ae4) popup_query_data_code_window_t1_ParamLimits

0x3af5,	// (0x00032ae4) popup_query_data_code_window_t1

0x3b07,	// (0x00032af6) popup_query_data_code_window_t2_ParamLimits

0x3b07,	// (0x00032af6) popup_query_data_code_window_t2

0x3b19,	// (0x00032b08) popup_query_data_code_window_t3_ParamLimits

0x3b19,	// (0x00032b08) popup_query_data_code_window_t3

0x3b2f,	// (0x00032b1e) popup_query_data_code_window_t4_ParamLimits

0x3b2f,	// (0x00032b1e) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e579) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e579) popup_query_data_code_window_t

0x187d,	// (0x0003086c) list_single_midp_graphic_pane_g3

0x3b47,	// (0x00032b36) query_popup_data_pane_cp2_ParamLimits

0x3b5a,	// (0x00032b49) query_popup_pane_cp2_ParamLimits

0x3b5a,	// (0x00032b49) query_popup_pane_cp2

0x2e28,	// (0x00031e17) bg_popup_window_pane_cp11

0x58e3,	// (0x000348d2) heading_pane_cp5

0x3c45,	// (0x00032c34) listscroll_popup_info_pane

0x2e28,	// (0x00031e17) input_focus_pane_cp3

0x3b6d,	// (0x00032b5c) query_popup_pane_t1

0x3b7b,	// (0x00032b6a) list_popup_info_pane_ParamLimits

0x3b7b,	// (0x00032b6a) list_popup_info_pane

0x3b8a,	// (0x00032b79) listscroll_popup_info_pane_g1

0x3b92,	// (0x00032b81) scroll_pane_cp7

0x3b9c,	// (0x00032b8b) popup_info_list_pane_t1_ParamLimits

0x3b9c,	// (0x00032b8b) popup_info_list_pane_t1

0x3bb6,	// (0x00032ba5) popup_info_list_pane_t2_ParamLimits

0x3bb6,	// (0x00032ba5) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e582) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e582) popup_info_list_pane_t

0x2e28,	// (0x00031e17) bg_popup_window_pane_cp12

0x6bf3,	// (0x00035be2) find_popup_pane

0x3779,	// (0x00032768) bg_popup_window_pane_cp3

0x3bd0,	// (0x00032bbf) heading_pane_cp3

0x3bdc,	// (0x00032bcb) listscroll_popup_graphic_pane

0x2e28,	// (0x00031e17) bg_popup_window_pane_cp4

0xd2d4,	// (0x0003c2c3) heading_pane_cp4

0x3c45,	// (0x00032c34) listscroll_popup_colour_pane

0x3c4d,	// (0x00032c3c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c4d,	// (0x00032c3c) cell_large_graphic_colour_none_popup_pane

0xd2dc,	// (0x0003c2cb) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2dc,	// (0x0003c2cb) grid_large_graphic_colour_popup_pane

0x3c89,	// (0x00032c78) listscroll_popup_colour_pane_g1_ParamLimits

0x3c89,	// (0x00032c78) listscroll_popup_colour_pane_g1

0x3ca0,	// (0x00032c8f) listscroll_popup_colour_pane_g2_ParamLimits

0x3ca0,	// (0x00032c8f) listscroll_popup_colour_pane_g2

0x3cb7,	// (0x00032ca6) listscroll_popup_colour_pane_g3_ParamLimits

0x3cb7,	// (0x00032ca6) listscroll_popup_colour_pane_g3

0xd300,	// (0x0003c2ef) listscroll_popup_colour_pane_g4_ParamLimits

0xd300,	// (0x0003c2ef) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e587) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e587) listscroll_popup_colour_pane_g

0x3cd6,	// (0x00032cc5) scroll_pane_cp6_ParamLimits

0x3cd6,	// (0x00032cc5) scroll_pane_cp6

0xd30f,	// (0x0003c2fe) cell_large_graphic_colour_popup_pane_ParamLimits

0xd30f,	// (0x0003c2fe) cell_large_graphic_colour_popup_pane

0x3d07,	// (0x00032cf6) cell_large_graphic_colour_none_popup_pane_t1

0x2e28,	// (0x00031e17) grid_highlight_pane_cp5

0x3d16,	// (0x00032d05) cell_large_graphic_colour_popup_pane_g1

0x3d1e,	// (0x00032d0d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e590) cell_large_graphic_colour_popup_pane_g

0x3d26,	// (0x00032d15) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d2f,	// (0x00032d1e) grid_highlight_pane_cp4

0x3d37,	// (0x00032d26) bg_popup_window_pane_cp8_ParamLimits

0x3d37,	// (0x00032d26) bg_popup_window_pane_cp8

0x3d52,	// (0x00032d41) popup_snote_single_text_window_g1_ParamLimits

0x3d52,	// (0x00032d41) popup_snote_single_text_window_g1

0x3d64,	// (0x00032d53) popup_snote_single_text_window_t1_ParamLimits

0x3d64,	// (0x00032d53) popup_snote_single_text_window_t1

0x3d77,	// (0x00032d66) popup_snote_single_text_window_t2_ParamLimits

0x3d77,	// (0x00032d66) popup_snote_single_text_window_t2

0x3d8a,	// (0x00032d79) popup_snote_single_text_window_t3_ParamLimits

0x3d8a,	// (0x00032d79) popup_snote_single_text_window_t3

0x3dc3,	// (0x00032db2) popup_snote_single_text_window_t4_ParamLimits

0x3dc3,	// (0x00032db2) popup_snote_single_text_window_t4

0x3df7,	// (0x00032de6) popup_snote_single_text_window_t5_ParamLimits

0x3df7,	// (0x00032de6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e595) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e595) popup_snote_single_text_window_t

0x3e26,	// (0x00032e15) bg_popup_window_pane_cp9_ParamLimits

0x3e26,	// (0x00032e15) bg_popup_window_pane_cp9

0x3d52,	// (0x00032d41) popup_snote_single_graphic_window_g1_ParamLimits

0x3d52,	// (0x00032d41) popup_snote_single_graphic_window_g1

0x3e34,	// (0x00032e23) popup_snote_single_graphic_window_g2_ParamLimits

0x3e34,	// (0x00032e23) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e5a0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e5a0) popup_snote_single_graphic_window_g

0x3e40,	// (0x00032e2f) popup_snote_single_graphic_window_t1_ParamLimits

0x3e40,	// (0x00032e2f) popup_snote_single_graphic_window_t1

0x3e53,	// (0x00032e42) popup_snote_single_graphic_window_t2_ParamLimits

0x3e53,	// (0x00032e42) popup_snote_single_graphic_window_t2

0x3e66,	// (0x00032e55) popup_snote_single_graphic_window_t3_ParamLimits

0x3e66,	// (0x00032e55) popup_snote_single_graphic_window_t3

0x3e9f,	// (0x00032e8e) popup_snote_single_graphic_window_t4_ParamLimits

0x3e9f,	// (0x00032e8e) popup_snote_single_graphic_window_t4

0x3ed3,	// (0x00032ec2) popup_snote_single_graphic_window_t5_ParamLimits

0x3ed3,	// (0x00032ec2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e5a5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e5a5) popup_snote_single_graphic_window_t

0xdf80,	// (0x0003cf6f) grid_graphic_popup_pane_ParamLimits

0xdf80,	// (0x0003cf6f) grid_graphic_popup_pane

0x6b5f,	// (0x00035b4e) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b5f,	// (0x00035b4e) listscroll_popup_graphic_pane_g1

0xdf9f,	// (0x0003cf8e) listscroll_popup_graphic_pane_g2_ParamLimits

0xdf9f,	// (0x0003cf8e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003e99a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003e99a) listscroll_popup_graphic_pane_g

0x6b87,	// (0x00035b76) scroll_pane_cp5

0xdf3b,	// (0x0003cf2a) cell_graphic_popup_pane_ParamLimits

0xdf3b,	// (0x0003cf2a) cell_graphic_popup_pane

0x6ab7,	// (0x00035aa6) cell_graphic_popup_pane_g1

0x6abf,	// (0x00035aae) cell_graphic_popup_pane_g2

0x3d26,	// (0x00032d15) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003e993) cell_graphic_popup_pane_g

0x6ac8,	// (0x00035ab7) cell_graphic_popup_pane_t2

0x3d2f,	// (0x00032d1e) grid_highlight_pane_cp3

0x3f14,	// (0x00032f03) list_gen_pane_ParamLimits

0x3f14,	// (0x00032f03) list_gen_pane

0x3f46,	// (0x00032f35) scroll_pane

0xdef6,	// (0x0003cee5) bg_list_pane_g1_ParamLimits

0xdef6,	// (0x0003cee5) bg_list_pane_g1

0x6a34,	// (0x00035a23) bg_list_pane_g2_ParamLimits

0x6a34,	// (0x00035a23) bg_list_pane_g2

0x6a47,	// (0x00035a36) bg_list_pane_g3_ParamLimits

0x6a47,	// (0x00035a36) bg_list_pane_g3

0x6a59,	// (0x00035a48) bg_list_pane_g4_ParamLimits

0x6a59,	// (0x00035a48) bg_list_pane_g4

0xdf11,	// (0x0003cf00) bg_list_pane_g5_ParamLimits

0xdf11,	// (0x0003cf00) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003e988) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003e988) bg_list_pane_g

0xdebb,	// (0x0003ceaa) list_double2_graphic_large_graphic_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double2_graphic_large_graphic_pane

0xdebb,	// (0x0003ceaa) list_double2_graphic_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double2_graphic_pane

0xdebb,	// (0x0003ceaa) list_double2_large_graphic_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double2_large_graphic_pane

0xdebb,	// (0x0003ceaa) list_double2_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double2_pane

0xdebb,	// (0x0003ceaa) list_double_graphic_heading_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_graphic_heading_pane

0xdebb,	// (0x0003ceaa) list_double_graphic_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_graphic_pane

0xdebb,	// (0x0003ceaa) list_double_heading_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_heading_pane

0xdebb,	// (0x0003ceaa) list_double_large_graphic_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_large_graphic_pane

0xdebb,	// (0x0003ceaa) list_double_number_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_number_pane

0xdebb,	// (0x0003ceaa) list_double_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_pane

0xdebb,	// (0x0003ceaa) list_double_time_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_double_time_pane

0xdebb,	// (0x0003ceaa) list_setting_number_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_setting_number_pane

0xdebb,	// (0x0003ceaa) list_setting_pane_ParamLimits

0xdebb,	// (0x0003ceaa) list_setting_pane

0xdece,	// (0x0003cebd) list_single_2graphic_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_2graphic_pane

0xdece,	// (0x0003cebd) list_single_graphic_heading_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_graphic_heading_pane

0xdece,	// (0x0003cebd) list_single_graphic_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_graphic_pane

0xdece,	// (0x0003cebd) list_single_heading_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_heading_pane

0xdece,	// (0x0003cebd) list_single_large_graphic_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_large_graphic_pane

0xdece,	// (0x0003cebd) list_single_number_heading_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_number_heading_pane

0xdece,	// (0x0003cebd) list_single_number_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_number_pane

0xdece,	// (0x0003cebd) list_single_pane_ParamLimits

0xdece,	// (0x0003cebd) list_single_pane

0x2e28,	// (0x00031e17) list_highlight_pane_cp1

0x05cf,	// (0x0002f5be) list_single_pane_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_pane_g1

0x05db,	// (0x0002f5ca) list_single_pane_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_pane_g

0x3131,	// (0x00032120) list_single_pane_t1_ParamLimits

0x3131,	// (0x00032120) list_single_pane_t1

0x05cf,	// (0x0002f5be) list_single_number_pane_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_number_pane_g1

0x05db,	// (0x0002f5ca) list_single_number_pane_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_number_pane_g

0x1842,	// (0x00030831) list_single_number_pane_t1_ParamLimits

0x1842,	// (0x00030831) list_single_number_pane_t1

0xc77d,	// (0x0003b76c) list_single_number_pane_t2_ParamLimits

0xc77d,	// (0x0003b76c) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003e949) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003e949) list_single_number_pane_t

0xb828,	// (0x0003a817) list_single_graphic_pane_g1_ParamLimits

0xb828,	// (0x0003a817) list_single_graphic_pane_g1

0x05cf,	// (0x0002f5be) list_single_graphic_pane_g2_ParamLimits

0x05cf,	// (0x0002f5be) list_single_graphic_pane_g2

0x05db,	// (0x0002f5ca) list_single_graphic_pane_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e5b0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e5b0) list_single_graphic_pane_g

0xb834,	// (0x0003a823) list_single_graphic_pane_t1_ParamLimits

0xb834,	// (0x0003a823) list_single_graphic_pane_t1

0x05cf,	// (0x0002f5be) list_single_heading_pane_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_heading_pane_g1

0x05db,	// (0x0002f5ca) list_single_heading_pane_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_heading_pane_g

0xb84a,	// (0x0003a839) list_single_heading_pane_t1_ParamLimits

0xb84a,	// (0x0003a839) list_single_heading_pane_t1

0xb860,	// (0x0003a84f) list_single_heading_pane_t2_ParamLimits

0xb860,	// (0x0003a84f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e5bc) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e5bc) list_single_heading_pane_t

0x05cf,	// (0x0002f5be) list_single_number_heading_pane_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_number_heading_pane_g1

0x05db,	// (0x0002f5ca) list_single_number_heading_pane_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_number_heading_pane_g

0xb84a,	// (0x0003a839) list_single_number_heading_pane_t1_ParamLimits

0xb84a,	// (0x0003a839) list_single_number_heading_pane_t1

0xb872,	// (0x0003a861) list_single_number_heading_pane_t2_ParamLimits

0xb872,	// (0x0003a861) list_single_number_heading_pane_t2

0x310b,	// (0x000320fa) list_single_number_heading_pane_t3_ParamLimits

0x310b,	// (0x000320fa) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003e5c1) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003e5c1) list_single_number_heading_pane_t

0x1836,	// (0x00030825) list_single_graphic_heading_pane_g1_ParamLimits

0x1836,	// (0x00030825) list_single_graphic_heading_pane_g1

0xb884,	// (0x0003a873) list_single_graphic_heading_pane_g4_ParamLimits

0xb884,	// (0x0003a873) list_single_graphic_heading_pane_g4

0x05db,	// (0x0002f5ca) list_single_graphic_heading_pane_g5_ParamLimits

0x05db,	// (0x0002f5ca) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003e5c8) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003e5c8) list_single_graphic_heading_pane_g

0xb84a,	// (0x0003a839) list_single_graphic_heading_pane_t1_ParamLimits

0xb84a,	// (0x0003a839) list_single_graphic_heading_pane_t1

0xb895,	// (0x0003a884) list_single_graphic_heading_pane_t2_ParamLimits

0xb895,	// (0x0003a884) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003e5cf) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003e5cf) list_single_graphic_heading_pane_t

0x3147,	// (0x00032136) list_single_large_graphic_pane_g1_ParamLimits

0x3147,	// (0x00032136) list_single_large_graphic_pane_g1

0x05cf,	// (0x0002f5be) list_single_large_graphic_pane_g2_ParamLimits

0x05cf,	// (0x0002f5be) list_single_large_graphic_pane_g2

0x05db,	// (0x0002f5ca) list_single_large_graphic_pane_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003e5d4) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003e5d4) list_single_large_graphic_pane_g

0x5a86,	// (0x00034a75) wait_border_pane_g2_copy1

0xb8a7,	// (0x0003a896) list_single_large_graphic_pane_g4_cp2

0x3153,	// (0x00032142) list_single_large_graphic_pane_t1_ParamLimits

0x3153,	// (0x00032142) list_single_large_graphic_pane_t1

0xb8af,	// (0x0003a89e) list_double_pane_g1_ParamLimits

0xb8af,	// (0x0003a89e) list_double_pane_g1

0x0656,	// (0x0002f645) list_double_pane_g2_ParamLimits

0x0656,	// (0x0002f645) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003e5db) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003e5db) list_double_pane_g

0x0662,	// (0x0002f651) list_double_pane_t1_ParamLimits

0x0662,	// (0x0002f651) list_double_pane_t1

0xb8bb,	// (0x0003a8aa) list_double_pane_t2_ParamLimits

0xb8bb,	// (0x0003a8aa) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003e5e0) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003e5e0) list_double_pane_t

0xb8cd,	// (0x0003a8bc) list_double2_pane_g1_ParamLimits

0xb8cd,	// (0x0003a8bc) list_double2_pane_g1

0x081b,	// (0x0002f80a) list_double2_pane_g2_ParamLimits

0x081b,	// (0x0002f80a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003e5e5) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003e5e5) list_double2_pane_g

0xb8de,	// (0x0003a8cd) list_double2_pane_t1_ParamLimits

0xb8de,	// (0x0003a8cd) list_double2_pane_t1

0xb8f4,	// (0x0003a8e3) list_double2_pane_t2_ParamLimits

0xb8f4,	// (0x0003a8e3) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003e5ea) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003e5ea) list_double2_pane_t

0xb8af,	// (0x0003a89e) list_double_number_pane_g1_ParamLimits

0xb8af,	// (0x0003a89e) list_double_number_pane_g1

0x0656,	// (0x0002f645) list_double_number_pane_g2_ParamLimits

0x0656,	// (0x0002f645) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003e5db) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003e5db) list_double_number_pane_g

0xb906,	// (0x0003a8f5) list_double_number_pane_t1_ParamLimits

0xb906,	// (0x0003a8f5) list_double_number_pane_t1

0x072b,	// (0x0002f71a) list_double_number_pane_t2_ParamLimits

0x072b,	// (0x0002f71a) list_double_number_pane_t2

0xb918,	// (0x0003a907) list_double_number_pane_t3_ParamLimits

0xb918,	// (0x0003a907) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003e5ef) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003e5ef) list_double_number_pane_t

0x071f,	// (0x0002f70e) list_double_graphic_pane_g1_ParamLimits

0x071f,	// (0x0002f70e) list_double_graphic_pane_g1

0xb92a,	// (0x0003a919) list_double_graphic_pane_g2_ParamLimits

0xb92a,	// (0x0003a919) list_double_graphic_pane_g2

0xb939,	// (0x0003a928) list_double_graphic_pane_g3_ParamLimits

0xb939,	// (0x0003a928) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003e5f6) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003e5f6) list_double_graphic_pane_g

0xb951,	// (0x0003a940) list_double_graphic_pane_t1_ParamLimits

0xb951,	// (0x0003a940) list_double_graphic_pane_t1

0xb967,	// (0x0003a956) list_double_graphic_pane_t2_ParamLimits

0xb967,	// (0x0003a956) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003e5ff) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003e5ff) list_double_graphic_pane_t

0xb979,	// (0x0003a968) list_double2_graphic_pane_g1_ParamLimits

0xb979,	// (0x0003a968) list_double2_graphic_pane_g1

0xb8af,	// (0x0003a89e) list_double2_graphic_pane_g2_ParamLimits

0xb8af,	// (0x0003a89e) list_double2_graphic_pane_g2

0x0656,	// (0x0002f645) list_double2_graphic_pane_g3_ParamLimits

0x0656,	// (0x0002f645) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003e604) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003e604) list_double2_graphic_pane_g

0xb985,	// (0x0003a974) list_double2_graphic_pane_t1_ParamLimits

0xb985,	// (0x0003a974) list_double2_graphic_pane_t1

0xb99b,	// (0x0003a98a) list_double2_graphic_pane_t2_ParamLimits

0xb99b,	// (0x0003a98a) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003e60b) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003e60b) list_double2_graphic_pane_t

0xb9ad,	// (0x0003a99c) list_double_large_graphic_pane_g1_ParamLimits

0xb9ad,	// (0x0003a99c) list_double_large_graphic_pane_g1

0xb9cc,	// (0x0003a9bb) list_double_large_graphic_pane_g2_ParamLimits

0xb9cc,	// (0x0003a9bb) list_double_large_graphic_pane_g2

0x0656,	// (0x0002f645) list_double_large_graphic_pane_g3_ParamLimits

0x0656,	// (0x0002f645) list_double_large_graphic_pane_g3

0xb9dd,	// (0x0003a9cc) list_double_large_graphic_pane_g4_ParamLimits

0xb9dd,	// (0x0003a9cc) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003e610) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003e610) list_double_large_graphic_pane_g

0xb9f0,	// (0x0003a9df) list_double_large_graphic_pane_t1_ParamLimits

0xb9f0,	// (0x0003a9df) list_double_large_graphic_pane_t1

0xba09,	// (0x0003a9f8) list_double_large_graphic_pane_t2_ParamLimits

0xba09,	// (0x0003a9f8) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e61b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e61b) list_double_large_graphic_pane_t

0xba1b,	// (0x0003aa0a) list_double2_large_graphic_pane_g1_ParamLimits

0xba1b,	// (0x0003aa0a) list_double2_large_graphic_pane_g1

0xb8cd,	// (0x0003a8bc) list_double2_large_graphic_pane_g2_ParamLimits

0xb8cd,	// (0x0003a8bc) list_double2_large_graphic_pane_g2

0x081b,	// (0x0002f80a) list_double2_large_graphic_pane_g3_ParamLimits

0x081b,	// (0x0002f80a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e620) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e620) list_double2_large_graphic_pane_g

0xba27,	// (0x0003aa16) list_double2_large_graphic_pane_t1_ParamLimits

0xba27,	// (0x0003aa16) list_double2_large_graphic_pane_t1

0xba3d,	// (0x0003aa2c) list_double2_large_graphic_pane_t2_ParamLimits

0xba3d,	// (0x0003aa2c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e627) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e627) list_double2_large_graphic_pane_t

0xba4f,	// (0x0003aa3e) list_double_heading_pane_g1_ParamLimits

0xba4f,	// (0x0003aa3e) list_double_heading_pane_g1

0xba60,	// (0x0003aa4f) list_double_heading_pane_g2_ParamLimits

0xba60,	// (0x0003aa4f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003e62c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003e62c) list_double_heading_pane_g

0xba6c,	// (0x0003aa5b) list_double_heading_pane_t1_ParamLimits

0xba6c,	// (0x0003aa5b) list_double_heading_pane_t1

0xb8f4,	// (0x0003a8e3) list_double_heading_pane_t2_ParamLimits

0xb8f4,	// (0x0003a8e3) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003e631) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003e631) list_double_heading_pane_t

0x071f,	// (0x0002f70e) list_double_graphic_heading_pane_g1_ParamLimits

0x071f,	// (0x0002f70e) list_double_graphic_heading_pane_g1

0xba4f,	// (0x0003aa3e) list_double_graphic_heading_pane_g2_ParamLimits

0xba4f,	// (0x0003aa3e) list_double_graphic_heading_pane_g2

0xba60,	// (0x0003aa4f) list_double_graphic_heading_pane_g3_ParamLimits

0xba60,	// (0x0003aa4f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003e636) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003e636) list_double_graphic_heading_pane_g

0xba82,	// (0x0003aa71) list_double_graphic_heading_pane_t1_ParamLimits

0xba82,	// (0x0003aa71) list_double_graphic_heading_pane_t1

0xb99b,	// (0x0003a98a) list_double_graphic_heading_pane_t2_ParamLimits

0xb99b,	// (0x0003a98a) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003e63d) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003e63d) list_double_graphic_heading_pane_t

0xb9cc,	// (0x0003a9bb) list_double_time_pane_g1_ParamLimits

0xb9cc,	// (0x0003a9bb) list_double_time_pane_g1

0x0656,	// (0x0002f645) list_double_time_pane_g2_ParamLimits

0x0656,	// (0x0002f645) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003e642) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003e642) list_double_time_pane_g

0xba98,	// (0x0003aa87) list_double_time_pane_t1_ParamLimits

0xba98,	// (0x0003aa87) list_double_time_pane_t1

0xbaae,	// (0x0003aa9d) list_double_time_pane_t2_ParamLimits

0xbaae,	// (0x0003aa9d) list_double_time_pane_t2

0xbac0,	// (0x0003aaaf) list_double_time_pane_t3_ParamLimits

0xbac0,	// (0x0003aaaf) list_double_time_pane_t3

0xbad2,	// (0x0003aac1) list_double_time_pane_t4_ParamLimits

0xbad2,	// (0x0003aac1) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003e647) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003e647) list_double_time_pane_t

0x089f,	// (0x0002f88e) list_setting_pane_g1_ParamLimits

0x089f,	// (0x0002f88e) list_setting_pane_g1

0x081b,	// (0x0002f80a) list_setting_pane_g2_ParamLimits

0x081b,	// (0x0002f80a) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003e650) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003e650) list_setting_pane_g

0xbae4,	// (0x0003aad3) list_setting_pane_t1_ParamLimits

0xbae4,	// (0x0003aad3) list_setting_pane_t1

0xbafe,	// (0x0003aaed) list_setting_pane_t2_ParamLimits

0xbafe,	// (0x0003aaed) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003e655) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003e655) list_setting_pane_t

0xbb3b,	// (0x0003ab2a) set_value_pane_cp_ParamLimits

0xbb3b,	// (0x0003ab2a) set_value_pane_cp

0x090b,	// (0x0002f8fa) list_setting_number_pane_g1_ParamLimits

0x090b,	// (0x0002f8fa) list_setting_number_pane_g1

0x0917,	// (0x0002f906) list_setting_number_pane_g2_ParamLimits

0x0917,	// (0x0002f906) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003e65c) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003e65c) list_setting_number_pane_g

0xbb47,	// (0x0003ab36) list_setting_number_pane_t1_ParamLimits

0xbb47,	// (0x0003ab36) list_setting_number_pane_t1

0xbb60,	// (0x0003ab4f) list_setting_number_pane_t2_ParamLimits

0xbb60,	// (0x0003ab4f) list_setting_number_pane_t2

0xbb7a,	// (0x0003ab69) list_setting_number_pane_t3_ParamLimits

0xbb7a,	// (0x0003ab69) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003e661) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003e661) list_setting_number_pane_t

0xbb3b,	// (0x0003ab2a) set_value_pane_ParamLimits

0xbb3b,	// (0x0003ab2a) set_value_pane

0x3f7a,	// (0x00032f69) bg_set_opt_pane_ParamLimits

0x3f7a,	// (0x00032f69) bg_set_opt_pane

0x0991,	// (0x0002f980) set_value_pane_t1

0x3f9b,	// (0x00032f8a) slider_set_pane_cp3

0x3fa4,	// (0x00032f93) volume_small_pane_cp

0x3fad,	// (0x00032f9c) list_form_gen_pane

0x3fb6,	// (0x00032fa5) scroll_pane_cp8

0xbbbd,	// (0x0003abac) form_field_data_pane_ParamLimits

0xbbbd,	// (0x0003abac) form_field_data_pane

0xbbd4,	// (0x0003abc3) form_field_data_wide_pane_ParamLimits

0xbbd4,	// (0x0003abc3) form_field_data_wide_pane

0xbbf4,	// (0x0003abe3) form_field_popup_pane_ParamLimits

0xbbf4,	// (0x0003abe3) form_field_popup_pane

0xbc0c,	// (0x0003abfb) form_field_popup_wide_pane_ParamLimits

0xbc0c,	// (0x0003abfb) form_field_popup_wide_pane

0x0a23,	// (0x0002fa12) form_field_slider_pane_ParamLimits

0x0a23,	// (0x0002fa12) form_field_slider_pane

0x0a36,	// (0x0002fa25) form_field_slider_wide_pane_ParamLimits

0x0a36,	// (0x0002fa25) form_field_slider_wide_pane

0x3fc7,	// (0x00032fb6) data_form_pane

0xbc33,	// (0x0003ac22) form_field_data_pane_t1

0x3fd3,	// (0x00032fc2) input_focus_pane

0x0a6d,	// (0x0002fa5c) data_form_wide_pane

0x0a8a,	// (0x0002fa79) form_field_data_wide_pane_t1

0x3d44,	// (0x00032d33) input_focus_pane_cp6

0xbc4d,	// (0x0003ac3c) form_field_popup_pane_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_cp7

0x4001,	// (0x00032ff0) list_form_pane

0x0ace,	// (0x0002fabd) form_field_popup_wide_pane_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_cp8

0x400d,	// (0x00032ffc) list_form_wide_pane

0xbc6f,	// (0x0003ac5e) form_field_slider_pane_t1_ParamLimits

0xbc6f,	// (0x0003ac5e) form_field_slider_pane_t1

0xbc87,	// (0x0003ac76) form_field_slider_pane_t2_ParamLimits

0xbc87,	// (0x0003ac76) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003e671) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003e671) form_field_slider_pane_t

0x39f4,	// (0x000329e3) input_focus_pane_cp9_ParamLimits

0x39f4,	// (0x000329e3) input_focus_pane_cp9

0xbc9c,	// (0x0003ac8b) slider_cont_pane_ParamLimits

0xbc9c,	// (0x0003ac8b) slider_cont_pane

0x401c,	// (0x0003300b) form_field_slider_wide_pane_t1_ParamLimits

0x401c,	// (0x0003300b) form_field_slider_wide_pane_t1

0x0b25,	// (0x0002fb14) form_field_slider_wide_pane_t2_ParamLimits

0x0b25,	// (0x0002fb14) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003e676) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003e676) form_field_slider_wide_pane_t

0x39f4,	// (0x000329e3) input_focus_pane_cp10_ParamLimits

0x39f4,	// (0x000329e3) input_focus_pane_cp10

0xbcb0,	// (0x0003ac9f) slider_cont_pane_cp1_ParamLimits

0xbcb0,	// (0x0003ac9f) slider_cont_pane_cp1

0xbcc4,	// (0x0003acb3) slider_form_pane_cp

0x402e,	// (0x0003301d) input_focus_pane_g1

0x4036,	// (0x00033025) input_focus_pane_g2

0x403e,	// (0x0003302d) input_focus_pane_g3

0x4046,	// (0x00033035) input_focus_pane_g4

0x404e,	// (0x0003303d) input_focus_pane_g5

0x4056,	// (0x00033045) input_focus_pane_g6

0x405e,	// (0x0003304d) input_focus_pane_g7

0x4066,	// (0x00033055) input_focus_pane_g8

0x406e,	// (0x0003305d) input_focus_pane_g9

0x2e1e,	// (0x00031e0d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003e67b) input_focus_pane_g

0x5a8f,	// (0x00034a7e) wait_border_pane_g3_copy1

0xbccc,	// (0x0003acbb) data_form_pane_t1

0x2e1e,	// (0x00031e0d) wait_anim_pane_g1_copy1

0xc78f,	// (0x0003b77e) data_form_wide_pane_t1

0xbce6,	// (0x0003acd5) list_form_graphic_pane_cp_ParamLimits

0xbce6,	// (0x0003acd5) list_form_graphic_pane_cp

0x69aa,	// (0x00035999) slider_form_pane_g1

0x69b3,	// (0x000359a2) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003e979) slider_form_pane_g

0xbcf9,	// (0x0003ace8) list_form_graphic_pane_ParamLimits

0xbcf9,	// (0x0003ace8) list_form_graphic_pane

0x0b85,	// (0x0002fb74) list_form_graphic_pane_g1

0x0b8d,	// (0x0002fb7c) list_form_graphic_pane_t1_ParamLimits

0x0b8d,	// (0x0002fb7c) list_form_graphic_pane_t1

0x3779,	// (0x00032768) list_highlight_pane_cp5_ParamLimits

0x3779,	// (0x00032768) list_highlight_pane_cp5

0xbd0b,	// (0x0003acfa) find_pane_g1

0x4076,	// (0x00033065) input_find_pane

0xbd14,	// (0x0003ad03) input_find_pane_g1_ParamLimits

0xbd14,	// (0x0003ad03) input_find_pane_g1

0xbd20,	// (0x0003ad0f) input_find_pane_t1_ParamLimits

0xbd20,	// (0x0003ad0f) input_find_pane_t1

0xbd35,	// (0x0003ad24) input_find_pane_t2_ParamLimits

0xbd35,	// (0x0003ad24) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003e690) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003e690) input_find_pane_t

0x407f,	// (0x0003306e) input_focus_pane_cp5_ParamLimits

0x407f,	// (0x0003306e) input_focus_pane_cp5

0x4099,	// (0x00033088) bg_popup_window_pane_cp2_ParamLimits

0x4099,	// (0x00033088) bg_popup_window_pane_cp2

0x40a6,	// (0x00033095) listscroll_menu_pane_ParamLimits

0x40a6,	// (0x00033095) listscroll_menu_pane

0xd344,	// (0x0003c333) popup_submenu_window_ParamLimits

0xd344,	// (0x0003c333) popup_submenu_window

0x40da,	// (0x000330c9) find_popup_pane_g1

0x40e2,	// (0x000330d1) input_popup_find_pane_cp

0x407f,	// (0x0003306e) input_focus_pane_cp4_ParamLimits

0x407f,	// (0x0003306e) input_focus_pane_cp4

0x40fa,	// (0x000330e9) input_popup_find_pane_t1_ParamLimits

0x40fa,	// (0x000330e9) input_popup_find_pane_t1

0x2e28,	// (0x00031e17) bg_popup_sub_pane_cp

0x4128,	// (0x00033117) listscroll_popup_sub_pane

0x4130,	// (0x0003311f) list_submenu_pane_ParamLimits

0x4130,	// (0x0003311f) list_submenu_pane

0x4141,	// (0x00033130) scroll_pane_cp4

0x4149,	// (0x00033138) list_single_popup_submenu_pane_ParamLimits

0x4149,	// (0x00033138) list_single_popup_submenu_pane

0x415d,	// (0x0003314c) list_single_popup_submenu_pane_g1

0x4165,	// (0x00033154) list_single_popup_submenu_pane_t1_ParamLimits

0x4165,	// (0x00033154) list_single_popup_submenu_pane_t1

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp1_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp1

0xd37a,	// (0x0003c369) tabs_2_active_pane_g1

0xd382,	// (0x0003c371) tabs_2_active_pane_t1

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp1_ParamLimits

0x39f4,	// (0x000329e3) bg_passive_tab_pane_cp1

0xd37a,	// (0x0003c369) tabs_2_passive_pane_g1

0xd382,	// (0x0003c371) tabs_2_passive_pane_t1

0x3779,	// (0x00032768) bg_active_tab_pane_cp4

0xd394,	// (0x0003c383) tabs_2_long_active_pane_t1

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp4

0x1885,	// (0x00030874) list_single_midp_graphic_pane_g4_ParamLimits

0x3779,	// (0x00032768) bg_active_tab_pane_cp5

0xd3a7,	// (0x0003c396) tabs_3_long_active_pane_t1

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp5

0x1885,	// (0x00030874) list_single_midp_graphic_pane_g4

0x3779,	// (0x00032768) bg_popup_window_pane_cp13_ParamLimits

0x3779,	// (0x00032768) bg_popup_window_pane_cp13

0x41dc,	// (0x000331cb) listscroll_popup_fast_pane_ParamLimits

0x41dc,	// (0x000331cb) listscroll_popup_fast_pane

0x41e8,	// (0x000331d7) grid_popup_fast_pane_ParamLimits

0x41e8,	// (0x000331d7) grid_popup_fast_pane

0x41fa,	// (0x000331e9) scroll_pane_cp9_ParamLimits

0x41fa,	// (0x000331e9) scroll_pane_cp9

0x8251,	// (0x00037240) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8251,	// (0x00037240) list_single_graphic_hl_pane_t1_cp2

0x421e,	// (0x0003320d) input_focus_pane_cp20_ParamLimits

0x421e,	// (0x0003320d) input_focus_pane_cp20

0x422c,	// (0x0003321b) query_popup_data_pane_t1_ParamLimits

0x422c,	// (0x0003321b) query_popup_data_pane_t1

0x423f,	// (0x0003322e) query_popup_data_pane_t2_ParamLimits

0x423f,	// (0x0003322e) query_popup_data_pane_t2

0x4285,	// (0x00033274) query_popup_data_pane_t3_ParamLimits

0x4285,	// (0x00033274) query_popup_data_pane_t3

0x42c6,	// (0x000332b5) query_popup_data_pane_t4_ParamLimits

0x42c6,	// (0x000332b5) query_popup_data_pane_t4

0x4302,	// (0x000332f1) query_popup_data_pane_t5_ParamLimits

0x4302,	// (0x000332f1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003e695) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003e695) query_popup_data_pane_t

0x402e,	// (0x0003301d) bg_set_opt_pane_g1

0x4036,	// (0x00033025) bg_set_opt_pane_g2

0x403e,	// (0x0003302d) bg_set_opt_pane_g3

0x4046,	// (0x00033035) bg_set_opt_pane_g4

0x404e,	// (0x0003303d) bg_set_opt_pane_g5

0x4056,	// (0x00033045) bg_set_opt_pane_g6

0x405e,	// (0x0003304d) bg_set_opt_pane_g7

0x4066,	// (0x00033055) bg_set_opt_pane_g8

0x406e,	// (0x0003305d) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003e6a0) bg_set_opt_pane_g

0x0f03,	// (0x0002fef2) control_top_pane_stacon_ParamLimits

0x0f03,	// (0x0002fef2) control_top_pane_stacon

0x0f56,	// (0x0002ff45) signal_pane_stacon_ParamLimits

0x0f56,	// (0x0002ff45) signal_pane_stacon

0x48c0,	// (0x000338af) stacon_top_pane_g1_ParamLimits

0x48c0,	// (0x000338af) stacon_top_pane_g1

0x0f7b,	// (0x0002ff6a) title_pane_stacon_ParamLimits

0x0f7b,	// (0x0002ff6a) title_pane_stacon

0x0fa5,	// (0x0002ff94) uni_indicator_pane_stacon_ParamLimits

0x0fa5,	// (0x0002ff94) uni_indicator_pane_stacon

0x0fba,	// (0x0002ffa9) battery_pane_stacon_ParamLimits

0x0fba,	// (0x0002ffa9) battery_pane_stacon

0x0ffe,	// (0x0002ffed) control_bottom_pane_stacon_ParamLimits

0x0ffe,	// (0x0002ffed) control_bottom_pane_stacon

0x1021,	// (0x00030010) navi_pane_stacon_ParamLimits

0x1021,	// (0x00030010) navi_pane_stacon

0x48e2,	// (0x000338d1) stacon_bottom_pane_g1_ParamLimits

0x48e2,	// (0x000338d1) stacon_bottom_pane_g1

0x0be1,	// (0x0002fbd0) aid_levels_signal_lsc_ParamLimits

0x0be1,	// (0x0002fbd0) aid_levels_signal_lsc

0x0bf8,	// (0x0002fbe7) signal_pane_stacon_g1_ParamLimits

0x0bf8,	// (0x0002fbe7) signal_pane_stacon_g1

0x0c0c,	// (0x0002fbfb) signal_pane_stacon_g2_ParamLimits

0x0c0c,	// (0x0002fbfb) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003e6b3) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003e6b3) signal_pane_stacon_g

0x0c41,	// (0x0002fc30) title_pane_stacon_t1_ParamLimits

0x0c41,	// (0x0002fc30) title_pane_stacon_t1

0x4346,	// (0x00033335) uni_indicator_pane_stacon_g1

0x4350,	// (0x0003333f) uni_indicator_pane_stacon_g2

0x435a,	// (0x00033349) uni_indicator_pane_stacon_g3

0x4364,	// (0x00033353) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003e6bf) uni_indicator_pane_stacon_g

0x0c66,	// (0x0002fc55) control_top_pane_stacon_g1

0x0c6e,	// (0x0002fc5d) control_top_pane_stacon_t1_ParamLimits

0x0c6e,	// (0x0002fc5d) control_top_pane_stacon_t1

0x0ca5,	// (0x0002fc94) aid_levels_battery_lsc_ParamLimits

0x0ca5,	// (0x0002fc94) aid_levels_battery_lsc

0x0cbd,	// (0x0002fcac) battery_pane_stacon_g1_ParamLimits

0x0cbd,	// (0x0002fcac) battery_pane_stacon_g1

0x0cd0,	// (0x0002fcbf) battery_pane_stacon_g2_ParamLimits

0x0cd0,	// (0x0002fcbf) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003e6c8) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003e6c8) battery_pane_stacon_g

0x0d0e,	// (0x0002fcfd) navi_icon_pane_stacon

0x0d22,	// (0x0002fd11) navi_navi_pane_stacon

0x0d0e,	// (0x0002fcfd) navi_text_pane_stacon

0x0c66,	// (0x0002fc55) control_bottom_pane_stacon_g1

0x0d36,	// (0x0002fd25) control_bottom_pane_stacon_t1_ParamLimits

0x0d36,	// (0x0002fd25) control_bottom_pane_stacon_t1

0xd3b9,	// (0x0003c3a8) grid_app_pane_ParamLimits

0xd3b9,	// (0x0003c3a8) grid_app_pane

0xd3ef,	// (0x0003c3de) scroll_pane_cp15_ParamLimits

0xd3ef,	// (0x0003c3de) scroll_pane_cp15

0xd404,	// (0x0003c3f3) cell_app_pane_ParamLimits

0xd404,	// (0x0003c3f3) cell_app_pane

0xd44b,	// (0x0003c43a) cell_app_pane_g1_ParamLimits

0xd44b,	// (0x0003c43a) cell_app_pane_g1

0x4403,	// (0x000333f2) cell_app_pane_g2_ParamLimits

0x4403,	// (0x000333f2) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003e6cd) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003e6cd) cell_app_pane_g

0xd46b,	// (0x0003c45a) cell_app_pane_t1_ParamLimits

0xd46b,	// (0x0003c45a) cell_app_pane_t1

0x4426,	// (0x00033415) grid_highlight_pane_ParamLimits

0x4426,	// (0x00033415) grid_highlight_pane

0x402e,	// (0x0003301d) cell_highlight_pane_g1

0x4036,	// (0x00033025) cell_highlight_pane_g2

0x403e,	// (0x0003302d) cell_highlight_pane_g3

0x4046,	// (0x00033035) cell_highlight_pane_g4

0x404e,	// (0x0003303d) cell_highlight_pane_g5

0x4056,	// (0x00033045) cell_highlight_pane_g6

0x405e,	// (0x0003304d) cell_highlight_pane_g7

0x4066,	// (0x00033055) cell_highlight_pane_g8

0x406e,	// (0x0003305d) cell_highlight_pane_g9

0x2e1e,	// (0x00031e0d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003e67b) cell_highlight_pane_g

0x4437,	// (0x00033426) bg_scroll_pane

0x0d80,	// (0x0002fd6f) scroll_handle_pane

0x447e,	// (0x0003346d) scroll_bg_pane_g1

0x4493,	// (0x00033482) scroll_bg_pane_g2

0x44ab,	// (0x0003349a) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003e6d2) scroll_bg_pane_g

0x44c0,	// (0x000334af) scroll_handle_focus_pane_ParamLimits

0x44c0,	// (0x000334af) scroll_handle_focus_pane

0x447e,	// (0x0003346d) scroll_handle_pane_g1

0x44cd,	// (0x000334bc) scroll_handle_pane_g2

0x44ab,	// (0x0003349a) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003e6d9) scroll_handle_pane_g

0x407f,	// (0x0003306e) bg_popup_sub_pane_cp21_ParamLimits

0x407f,	// (0x0003306e) bg_popup_sub_pane_cp21

0x44e1,	// (0x000334d0) popup_fep_japan_predictive_window_t1_ParamLimits

0x44e1,	// (0x000334d0) popup_fep_japan_predictive_window_t1

0x44fb,	// (0x000334ea) popup_fep_japan_predictive_window_t2_ParamLimits

0x44fb,	// (0x000334ea) popup_fep_japan_predictive_window_t2

0x452e,	// (0x0003351d) popup_fep_japan_predictive_window_t3_ParamLimits

0x452e,	// (0x0003351d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003e6e0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003e6e0) popup_fep_japan_predictive_window_t

0x2e28,	// (0x00031e17) bg_popup_sub_pane_cp23

0x4565,	// (0x00033554) listscroll_japin_cand_pane

0x456d,	// (0x0003355c) popup_fep_japan_candidate_window_t1

0x457b,	// (0x0003356a) candidate_pane_ParamLimits

0x457b,	// (0x0003356a) candidate_pane

0x458d,	// (0x0003357c) scroll_pane_cp30

0x4595,	// (0x00033584) list_single_popup_jap_candidate_pane_ParamLimits

0x4595,	// (0x00033584) list_single_popup_jap_candidate_pane

0x2e28,	// (0x00031e17) list_highlight_pane_cp30

0x45a9,	// (0x00033598) list_single_popup_jap_candidate_pane_t1

0x45b8,	// (0x000335a7) level_1_signal

0x45c5,	// (0x000335b4) level_2_signal

0x45d2,	// (0x000335c1) level_3_signal

0x45df,	// (0x000335ce) level_4_signal

0x45ec,	// (0x000335db) level_5_signal

0x45f9,	// (0x000335e8) level_6_signal

0x4606,	// (0x000335f5) level_7_signal

0x45b8,	// (0x000335a7) level_1_battery

0x45c5,	// (0x000335b4) level_2_battery

0x45d2,	// (0x000335c1) level_3_battery

0x45df,	// (0x000335ce) level_4_battery

0x45ec,	// (0x000335db) level_5_battery

0x45f9,	// (0x000335e8) level_6_battery

0x4606,	// (0x000335f5) level_7_battery

0x462b,	// (0x0003361a) list_menu_pane_ParamLimits

0x462b,	// (0x0003361a) list_menu_pane

0x4641,	// (0x00033630) scroll_pane_cp25_ParamLimits

0x4641,	// (0x00033630) scroll_pane_cp25

0x465a,	// (0x00033649) list_double2_graphic_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double2_graphic_pane_cp2

0x465a,	// (0x00033649) list_double2_large_graphic_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double2_large_graphic_pane_cp2

0x465a,	// (0x00033649) list_double2_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double2_pane_cp2

0x465a,	// (0x00033649) list_double_graphic_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double_graphic_pane_cp2

0x465a,	// (0x00033649) list_double_large_graphic_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double_large_graphic_pane_cp2

0x465a,	// (0x00033649) list_double_number_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double_number_pane_cp2

0x465a,	// (0x00033649) list_double_pane_cp2_ParamLimits

0x465a,	// (0x00033649) list_double_pane_cp2

0xd493,	// (0x0003c482) list_single_2graphic_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_2graphic_pane_cp2

0xd493,	// (0x0003c482) list_single_graphic_heading_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_graphic_heading_pane_cp2

0xd493,	// (0x0003c482) list_single_graphic_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_graphic_pane_cp2

0xd493,	// (0x0003c482) list_single_heading_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_heading_pane_cp2

0x4694,	// (0x00033683) list_single_large_graphic_pane_cp2_ParamLimits

0x4694,	// (0x00033683) list_single_large_graphic_pane_cp2

0xd493,	// (0x0003c482) list_single_number_heading_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_number_heading_pane_cp2

0xd493,	// (0x0003c482) list_single_number_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_number_pane_cp2

0xd493,	// (0x0003c482) list_single_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_pane_cp2

0x470f,	// (0x000336fe) bg_popup_sub_pane_cp22

0x0e2f,	// (0x0002fe1e) popup_side_volume_key_window_g1

0x0e53,	// (0x0002fe42) popup_side_volume_key_window_t1

0x0e6f,	// (0x0002fe5e) volume_small_pane_cp1

0x39f4,	// (0x000329e3) bg_popup_sub_pane_cp24_ParamLimits

0x39f4,	// (0x000329e3) bg_popup_sub_pane_cp24

0x4725,	// (0x00033714) fep_china_uni_candidate_pane_ParamLimits

0x4725,	// (0x00033714) fep_china_uni_candidate_pane

0x4739,	// (0x00033728) fep_china_uni_entry_pane

0x4749,	// (0x00033738) popup_fep_china_uni_window_g1

0x4765,	// (0x00033754) fep_china_uni_entry_pane_g1

0x476d,	// (0x0003375c) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003e711) fep_china_uni_entry_pane_g

0x4775,	// (0x00033764) fep_entry_item_pane

0x477f,	// (0x0003376e) fep_candidate_item_pane

0x4787,	// (0x00033776) fep_china_uni_candidate_pane_g1

0x478f,	// (0x0003377e) fep_china_uni_candidate_pane_g2

0x4797,	// (0x00033786) fep_china_uni_candidate_pane_g3

0x479f,	// (0x0003378e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003e716) fep_china_uni_candidate_pane_g

0x2e1e,	// (0x00031e0d) fep_entry_item_pane_g1

0x47a7,	// (0x00033796) fep_entry_item_pane_t1_ParamLimits

0x47a7,	// (0x00033796) fep_entry_item_pane_t1

0x47bd,	// (0x000337ac) fep_candidate_item_pane_t1_ParamLimits

0x47bd,	// (0x000337ac) fep_candidate_item_pane_t1

0x47d2,	// (0x000337c1) fep_candidate_item_pane_t2_ParamLimits

0x47d2,	// (0x000337c1) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003e71f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003e71f) fep_candidate_item_pane_t

0x3779,	// (0x00032768) list_highlight_pane_cp31_ParamLimits

0x3779,	// (0x00032768) list_highlight_pane_cp31

0x47e4,	// (0x000337d3) level_1_signal_lsc

0x47ed,	// (0x000337dc) level_2_signal_lsc

0x47f6,	// (0x000337e5) level_3_signal_lsc

0x47ff,	// (0x000337ee) level_4_signal_lsc

0x4808,	// (0x000337f7) level_5_signal_lsc

0x4811,	// (0x00033800) level_6_signal_lsc

0x481a,	// (0x00033809) level_7_signal_lsc

0x481a,	// (0x00033809) level_1_battery_lsc

0x4823,	// (0x00033812) level_2_battery_lsc

0x482c,	// (0x0003381b) level_3_battery_lsc

0x4835,	// (0x00033824) level_4_battery_lsc

0x483e,	// (0x0003382d) level_5_battery_lsc

0x4847,	// (0x00033836) level_6_battery_lsc

0x47e4,	// (0x000337d3) level_7_battery_lsc

0x4850,	// (0x0003383f) scroll_handle_focus_pane_g1

0x4859,	// (0x00033848) scroll_handle_focus_pane_g2

0x4862,	// (0x00033851) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003e724) scroll_handle_focus_pane_g

0xbd4a,	// (0x0003ad39) list_single_2graphic_pane_g1_ParamLimits

0xbd4a,	// (0x0003ad39) list_single_2graphic_pane_g1

0xb884,	// (0x0003a873) list_single_2graphic_pane_g2_ParamLimits

0xb884,	// (0x0003a873) list_single_2graphic_pane_g2

0x05db,	// (0x0002f5ca) list_single_2graphic_pane_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_single_2graphic_pane_g3

0xbd56,	// (0x0003ad45) list_single_2graphic_pane_g4_ParamLimits

0xbd56,	// (0x0003ad45) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003e72b) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003e72b) list_single_2graphic_pane_g

0xbd62,	// (0x0003ad51) list_single_2graphic_pane_t1_ParamLimits

0xbd62,	// (0x0003ad51) list_single_2graphic_pane_t1

0xbd90,	// (0x0003ad7f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd90,	// (0x0003ad7f) list_double2_graphic_large_graphic_pane_g1

0xb8cd,	// (0x0003a8bc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8cd,	// (0x0003a8bc) list_double2_graphic_large_graphic_pane_g2

0x081b,	// (0x0002f80a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x081b,	// (0x0002f80a) list_double2_graphic_large_graphic_pane_g3

0xbda2,	// (0x0003ad91) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbda2,	// (0x0003ad91) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003e734) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003e734) list_double2_graphic_large_graphic_pane_g

0xbdae,	// (0x0003ad9d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbdae,	// (0x0003ad9d) list_double2_graphic_large_graphic_pane_t1

0xbdc4,	// (0x0003adb3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbdc4,	// (0x0003adb3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003e73d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003e73d) list_double2_graphic_large_graphic_pane_t

0x49a9,	// (0x00033998) popup_fast_swap_window_ParamLimits

0x49a9,	// (0x00033998) popup_fast_swap_window

0x49c5,	// (0x000339b4) popup_side_volume_key_window

0x49df,	// (0x000339ce) stacon_top_pane

0x49e9,	// (0x000339d8) status_pane_ParamLimits

0x49e9,	// (0x000339d8) status_pane

0xd588,	// (0x0003c577) status_small_pane

0x2e28,	// (0x00031e17) control_pane

0x2e28,	// (0x00031e17) stacon_bottom_pane

0x3fb6,	// (0x00032fa5) scroll_pane_cp121

0x3fad,	// (0x00032f9c) set_content_pane

0xd520,	// (0x0003c50f) bg_active_tab_pane_g1_cp1

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp1

0xd529,	// (0x0003c518) bg_active_tab_pane_g3_cp1

0xd520,	// (0x0003c50f) bg_passive_tab_pane_g1_cp1

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp1

0xd529,	// (0x0003c518) bg_passive_tab_pane_g3_cp1

0xd532,	// (0x0003c521) bg_active_tab_pane_g1_cp2

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp2

0xd53b,	// (0x0003c52a) bg_active_tab_pane_g3_cp2

0xd532,	// (0x0003c521) bg_passive_tab_pane_g1_cp2

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp2

0xd53b,	// (0x0003c52a) bg_passive_tab_pane_g3_cp2

0x4898,	// (0x00033887) bg_active_tab_pane_g1_cp3

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp3

0x48a1,	// (0x00033890) bg_active_tab_pane_g3_cp3

0x4898,	// (0x00033887) bg_passive_tab_pane_g1_cp3

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp3

0x48a1,	// (0x00033890) bg_passive_tab_pane_g3_cp3

0xd544,	// (0x0003c533) bg_active_tab_pane_g1_cp4

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp4

0xd54f,	// (0x0003c53e) bg_active_tab_pane_g3_cp4

0xd544,	// (0x0003c533) bg_passive_tab_pane_g1_cp4

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp4

0xd54f,	// (0x0003c53e) bg_passive_tab_pane_g3_cp4

0x48fe,	// (0x000338ed) bg_active_tab_pane_g1_cp5

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp5

0x4907,	// (0x000338f6) bg_active_tab_pane_g3_cp5

0x48fe,	// (0x000338ed) bg_passive_tab_pane_g1_cp5

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp5

0x4907,	// (0x000338f6) bg_passive_tab_pane_g3_cp5

0x6f39,	// (0x00035f28) list_set_graphic_pane_ParamLimits

0x6f39,	// (0x00035f28) list_set_graphic_pane

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp4

0xd55a,	// (0x0003c549) list_set_graphic_pane_g1_ParamLimits

0xd55a,	// (0x0003c549) list_set_graphic_pane_g1

0xd566,	// (0x0003c555) list_set_graphic_pane_g2_ParamLimits

0xd566,	// (0x0003c555) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003e742) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003e742) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0003eac7) volume_small_pane_cp_g

0x495c,	// (0x0003394b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x495c,	// (0x0003394b) list_double2_large_graphic_pane_g1_cp2

0x4968,	// (0x00033957) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4968,	// (0x00033957) list_double2_large_graphic_pane_g2_cp2

0x4979,	// (0x00033968) list_double2_large_graphic_pane_g3_cp2

0x4981,	// (0x00033970) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4981,	// (0x00033970) list_double2_large_graphic_pane_t1_cp2

0x4997,	// (0x00033986) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4997,	// (0x00033986) list_double2_large_graphic_pane_t2_cp2

0x6568,	// (0x00035557) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6568,	// (0x00035557) list_double_large_graphic_pane_g1_cp2

0x6579,	// (0x00035568) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6579,	// (0x00035568) list_double_large_graphic_pane_g2_cp2

0x4b28,	// (0x00033b17) list_double_large_graphic_pane_g3_cp2

0x658a,	// (0x00035579) list_double_large_graphic_pane_g4_cp

0x6592,	// (0x00035581) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6592,	// (0x00035581) list_double_large_graphic_pane_t1_cp2

0x65a9,	// (0x00035598) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x65a9,	// (0x00035598) list_double_large_graphic_pane_t2_cp2

0x4a02,	// (0x000339f1) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a02,	// (0x000339f1) list_double2_graphic_pane_g1_cp2

0x4a10,	// (0x000339ff) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a10,	// (0x000339ff) list_double2_graphic_pane_g2_cp2

0x4a21,	// (0x00033a10) list_double2_graphic_pane_g3_cp2

0x4a2b,	// (0x00033a1a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a2b,	// (0x00033a1a) list_double2_graphic_pane_t1_cp2

0x4a41,	// (0x00033a30) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a41,	// (0x00033a30) list_double2_graphic_pane_t2_cp2

0x4a53,	// (0x00033a42) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4a53,	// (0x00033a42) list_single_number_heading_pane_g1_cp2

0x4a5f,	// (0x00033a4e) list_single_number_heading_pane_g2_cp2

0x4a7f,	// (0x00033a6e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a7f,	// (0x00033a6e) list_single_number_heading_pane_t1_cp2

0x4a95,	// (0x00033a84) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a95,	// (0x00033a84) list_single_number_heading_pane_t2_cp2

0x4aa7,	// (0x00033a96) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4aa7,	// (0x00033a96) list_single_number_heading_pane_t3_cp2

0x4a53,	// (0x00033a42) list_single_heading_pane_g1_cp2_ParamLimits

0x4a53,	// (0x00033a42) list_single_heading_pane_g1_cp2

0x4a5f,	// (0x00033a4e) list_single_heading_pane_g2_cp2

0x4a7f,	// (0x00033a6e) list_single_heading_pane_t1_cp2_ParamLimits

0x4a7f,	// (0x00033a6e) list_single_heading_pane_t1_cp2

0x6372,	// (0x00035361) list_single_heading_pane_t2_cp2_ParamLimits

0x6372,	// (0x00035361) list_single_heading_pane_t2_cp2

0x62ba,	// (0x000352a9) list_double_graphic_pane_g1_cp2_ParamLimits

0x62ba,	// (0x000352a9) list_double_graphic_pane_g1_cp2

0x62c6,	// (0x000352b5) list_double_graphic_pane_g2_cp2_ParamLimits

0x62c6,	// (0x000352b5) list_double_graphic_pane_g2_cp2

0x62d5,	// (0x000352c4) list_double_graphic_pane_g3_cp2

0x62dd,	// (0x000352cc) list_double_graphic_pane_t1_cp2_ParamLimits

0x62dd,	// (0x000352cc) list_double_graphic_pane_t1_cp2

0x62f3,	// (0x000352e2) list_double_graphic_pane_t2_cp2_ParamLimits

0x62f3,	// (0x000352e2) list_double_graphic_pane_t2_cp2

0x4b1c,	// (0x00033b0b) list_double_number_pane_g1_cp2_ParamLimits

0x4b1c,	// (0x00033b0b) list_double_number_pane_g1_cp2

0x4b28,	// (0x00033b17) list_double_number_pane_g2_cp2

0x627e,	// (0x0003526d) list_double_number_pane_t1_cp2_ParamLimits

0x627e,	// (0x0003526d) list_double_number_pane_t1_cp2

0x6292,	// (0x00035281) list_double_number_pane_t2_cp2_ParamLimits

0x6292,	// (0x00035281) list_double_number_pane_t2_cp2

0x62a8,	// (0x00035297) list_double_number_pane_t3_cp2_ParamLimits

0x62a8,	// (0x00035297) list_double_number_pane_t3_cp2

0x6167,	// (0x00035156) list_single_graphic_pane_g1_cp2_ParamLimits

0x6167,	// (0x00035156) list_single_graphic_pane_g1_cp2

0x4a67,	// (0x00033a56) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a67,	// (0x00033a56) list_single_graphic_pane_g2_cp2

0x4b80,	// (0x00033b6f) list_single_graphic_pane_g3_cp2

0x613d,	// (0x0003512c) list_single_graphic_pane_t1_cp2_ParamLimits

0x613d,	// (0x0003512c) list_single_graphic_pane_t1_cp2

0x4a67,	// (0x00033a56) list_single_number_pane_g1_cp2_ParamLimits

0x4a67,	// (0x00033a56) list_single_number_pane_g1_cp2

0x4b80,	// (0x00033b6f) list_single_number_pane_g2_cp2

0x613d,	// (0x0003512c) list_single_number_pane_t1_cp2_ParamLimits

0x613d,	// (0x0003512c) list_single_number_pane_t1_cp2

0x6153,	// (0x00035142) list_single_number_pane_t2_cp2_ParamLimits

0x6153,	// (0x00035142) list_single_number_pane_t2_cp2

0x4968,	// (0x00033957) list_double2_pane_g1_cp2_ParamLimits

0x4968,	// (0x00033957) list_double2_pane_g1_cp2

0x4979,	// (0x00033968) list_double2_pane_g2_cp2

0x4af4,	// (0x00033ae3) list_double2_pane_t1_cp2_ParamLimits

0x4af4,	// (0x00033ae3) list_double2_pane_t1_cp2

0x4b0a,	// (0x00033af9) list_double2_pane_t2_cp2_ParamLimits

0x4b0a,	// (0x00033af9) list_double2_pane_t2_cp2

0x4b1c,	// (0x00033b0b) list_double_pane_g1_cp2_ParamLimits

0x4b1c,	// (0x00033b0b) list_double_pane_g1_cp2

0x4b28,	// (0x00033b17) list_double_pane_g2_cp2

0x4b30,	// (0x00033b1f) list_double_pane_t1_cp2_ParamLimits

0x4b30,	// (0x00033b1f) list_double_pane_t1_cp2

0x4b46,	// (0x00033b35) list_double_pane_t2_cp2_ParamLimits

0x4b46,	// (0x00033b35) list_double_pane_t2_cp2

0x4b70,	// (0x00033b5f) list_single_pane_cp2_g3

0x4a67,	// (0x00033a56) list_single_pane_g1_cp2_ParamLimits

0x4a67,	// (0x00033a56) list_single_pane_g1_cp2

0x4b80,	// (0x00033b6f) list_single_pane_g2_cp2

0x4b88,	// (0x00033b77) list_single_pane_t1_cp2_ParamLimits

0x4b88,	// (0x00033b77) list_single_pane_t1_cp2

0x4ba0,	// (0x00033b8f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4ba0,	// (0x00033b8f) list_single_large_graphic_pane_g1_cp2

0x4bac,	// (0x00033b9b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4bac,	// (0x00033b9b) list_single_large_graphic_pane_g2_cp2

0x4bb8,	// (0x00033ba7) list_single_large_graphic_pane_g3_cp2

0x4bc0,	// (0x00033baf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4bc0,	// (0x00033baf) list_single_large_graphic_pane_g4_cp1

0x4bda,	// (0x00033bc9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4bda,	// (0x00033bc9) list_single_large_graphic_pane_t1_cp2

0x6109,	// (0x000350f8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6109,	// (0x000350f8) list_single_graphic_heading_pane_g1_cp2

0x60d6,	// (0x000350c5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x60d6,	// (0x000350c5) list_single_graphic_heading_pane_g4_cp2

0x4b80,	// (0x00033b6f) list_single_graphic_heading_pane_g5_cp2

0x6115,	// (0x00035104) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6115,	// (0x00035104) list_single_graphic_heading_pane_t1_cp2

0x612b,	// (0x0003511a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x612b,	// (0x0003511a) list_single_graphic_heading_pane_t2_cp2

0x60ca,	// (0x000350b9) list_single_2graphic_pane_g1_cp2_ParamLimits

0x60ca,	// (0x000350b9) list_single_2graphic_pane_g1_cp2

0x60d6,	// (0x000350c5) list_single_2graphic_pane_g2_cp2_ParamLimits

0x60d6,	// (0x000350c5) list_single_2graphic_pane_g2_cp2

0x4b80,	// (0x00033b6f) list_single_2graphic_pane_g3_cp2

0x60e7,	// (0x000350d6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x60e7,	// (0x000350d6) list_single_2graphic_pane_g4_cp2

0x60f3,	// (0x000350e2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x60f3,	// (0x000350e2) list_single_2graphic_pane_t1_cp2

0x2e1e,	// (0x00031e0d) list_highlight_pane_g10_cp1

0x5ca2,	// (0x00034c91) list_highlight_pane_g1_cp1

0x5caa,	// (0x00034c99) list_highlight_pane_g2_cp1

0x5cb2,	// (0x00034ca1) list_highlight_pane_g3_cp1

0x5cba,	// (0x00034ca9) list_highlight_pane_g4_cp1

0x5cc2,	// (0x00034cb1) list_highlight_pane_g5_cp1

0x5cca,	// (0x00034cb9) list_highlight_pane_g6_cp1

0x5cd2,	// (0x00034cc1) list_highlight_pane_g7_cp1

0x5cda,	// (0x00034cc9) list_highlight_pane_g8_cp1

0x5ce2,	// (0x00034cd1) list_highlight_pane_g9_cp1

0xdbd8,	// (0x0003cbc7) form_field_slider_pane_t3

0xdbe8,	// (0x0003cbd7) form_field_slider_pane_t4

0x5bd6,	// (0x00034bc5) slider_form_pane_ParamLimits

0x5bd6,	// (0x00034bc5) slider_form_pane

0x2e28,	// (0x00031e17) control_abbreviations

0x2e28,	// (0x00031e17) control_conventions

0x2e28,	// (0x00031e17) control_definitions

0x2e28,	// (0x00031e17) format_table_attribute

0x63bc,	// (0x000353ab) bg_popup_preview_window_pane_g9

0x2e28,	// (0x00031e17) format_table_data2

0x2e28,	// (0x00031e17) format_table_data3

0x2e28,	// (0x00031e17) format_table_data_example

0x0008,

0x2e28,	// (0x00031e17) intro_purpose

0xf8ea,	// (0x0003e8d9) bg_popup_preview_window_pane_g

0x2e28,	// (0x00031e17) texts_category

0x2e28,	// (0x00031e17) texts_graphics

0x4bf0,	// (0x00033bdf) text_digital

0x4bff,	// (0x00033bee) text_primary

0x4c0e,	// (0x00033bfd) text_primary_small

0x4c1d,	// (0x00033c0c) text_secondary

0x4c2c,	// (0x00033c1b) text_title

0x6a8b,	// (0x00035a7a) bg_passive_tab_pane_g1_cp3_srt

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp3_srt

0x6a94,	// (0x00035a83) bg_passive_tab_pane_g3_cp3_srt

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp3_srt_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp3_srt

0x6a9d,	// (0x00035a8c) tabs_4_active_pane_srt_g1

0xdf25,	// (0x0003cf14) tabs_4_active_pane_srt_t1_ParamLimits

0xdf25,	// (0x0003cf14) tabs_4_active_pane_srt_t1

0x6a8b,	// (0x00035a7a) bg_active_tab_pane_g1_cp3_copy1

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp3_copy1

0x6a94,	// (0x00035a83) bg_active_tab_pane_g3_cp3_copy1

0x3779,	// (0x00032768) tabs_2_long_active_pane_srt_ParamLimits

0x3779,	// (0x00032768) tabs_2_long_active_pane_srt

0x3779,	// (0x00032768) tabs_2_long_passive_pane_srt_ParamLimits

0x3779,	// (0x00032768) tabs_2_long_passive_pane_srt

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp4_srt

0x67eb,	// (0x000357da) bg_passive_tab_pane_g1_cp4_srt

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp4_srt

0x67f4,	// (0x000357e3) bg_passive_tab_pane_g3_cp4_srt

0x3779,	// (0x00032768) bg_active_tab_pane_cp4_srt_ParamLimits

0x3779,	// (0x00032768) bg_active_tab_pane_cp4_srt

0xdd52,	// (0x0003cd41) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd52,	// (0x0003cd41) tabs_2_long_active_pane_srt_t1

0x67eb,	// (0x000357da) bg_active_tab_pane_g1_cp4_srt

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp4_srt

0x67f4,	// (0x000357e3) bg_active_tab_pane_g3_cp4_srt

0x39f4,	// (0x000329e3) tabs_3_long_active_pane_srt_ParamLimits

0x39f4,	// (0x000329e3) tabs_3_long_active_pane_srt

0x39f4,	// (0x000329e3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x39f4,	// (0x000329e3) tabs_3_long_passive_pane_cp_srt

0x39f4,	// (0x000329e3) tabs_3_long_passive_pane_srt_ParamLimits

0x39f4,	// (0x000329e3) tabs_3_long_passive_pane_srt

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp5_srt

0x48fe,	// (0x000338ed) bg_passive_tab_pane_g1_cp5_srt

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp5_srt

0x4907,	// (0x000338f6) bg_passive_tab_pane_g3_cp5_srt

0x3779,	// (0x00032768) bg_active_tab_pane_cp5_srt_ParamLimits

0x3779,	// (0x00032768) bg_active_tab_pane_cp5_srt

0xdd3c,	// (0x0003cd2b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd3c,	// (0x0003cd2b) tabs_3_long_active_pane_srt_t1

0x48fe,	// (0x000338ed) bg_active_tab_pane_g1_cp5_srt

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp5_srt

0x4907,	// (0x000338f6) bg_active_tab_pane_g3_cp5_srt

0x67cb,	// (0x000357ba) navi_text_pane_srt_t1

0x67c3,	// (0x000357b2) navi_icon_pane_srt_g1

0x4df1,	// (0x00033de0) midp_editing_number_pane_srt

0x4c3b,	// (0x00033c2a) midp_ticker_pane_srt

0x4df9,	// (0x00033de8) midp_ticker_pane_srt_g1

0x4e01,	// (0x00033df0) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003e761) midp_ticker_pane_srt_g

0x4e09,	// (0x00033df8) midp_ticker_pane_srt_t1

0x67b4,	// (0x000357a3) midp_editing_number_pane_t1_copy1

0x4f75,	// (0x00033f64) listscroll_midp_pane

0x4f75,	// (0x00033f64) midp_form_pane

0x4ca9,	// (0x00033c98) midp_info_popup_window_ParamLimits

0x4ca9,	// (0x00033c98) midp_info_popup_window

0x407f,	// (0x0003306e) bg_popup_sub_pane_cp50_ParamLimits

0x407f,	// (0x0003306e) bg_popup_sub_pane_cp50

0x58d7,	// (0x000348c6) listscroll_midp_info_pane_ParamLimits

0x58d7,	// (0x000348c6) listscroll_midp_info_pane

0x58bf,	// (0x000348ae) listscroll_form_midp_pane_ParamLimits

0x58bf,	// (0x000348ae) listscroll_form_midp_pane

0x58cb,	// (0x000348ba) scroll_bar_cp050

0xdbcc,	// (0x0003cbbb) list_midp_pane

0x74c0,	// (0x000364af) signal_pane_g2_cp

0x57d9,	// (0x000347c8) listscroll_midp_info_pane_t1_ParamLimits

0x57d9,	// (0x000347c8) listscroll_midp_info_pane_t1

0x57f1,	// (0x000347e0) listscroll_midp_info_pane_t2_ParamLimits

0x57f1,	// (0x000347e0) listscroll_midp_info_pane_t2

0x582f,	// (0x0003481e) listscroll_midp_info_pane_t3_ParamLimits

0x582f,	// (0x0003481e) listscroll_midp_info_pane_t3

0x5869,	// (0x00034858) listscroll_midp_info_pane_t4_ParamLimits

0x5869,	// (0x00034858) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003e814) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003e814) listscroll_midp_info_pane_t

0x4141,	// (0x00033130) scroll_pane_cp21

0x577b,	// (0x0003476a) form_midp_field_choice_group_pane

0x5784,	// (0x00034773) form_midp_field_text_pane

0x57bf,	// (0x000347ae) form_midp_field_time_pane

0x57c7,	// (0x000347b6) form_midp_gauge_slider_pane

0x57d0,	// (0x000347bf) form_midp_gauge_wait_pane

0x2e28,	// (0x00031e17) form_midp_image_pane

0xc671,	// (0x0003b660) list_single_midp_pane_ParamLimits

0xc671,	// (0x0003b660) list_single_midp_pane

0xdba9,	// (0x0003cb98) form_midp_field_text_pane_t1

0x54e7,	// (0x000344d6) input_focus_pane_cp050

0x576a,	// (0x00034759) list_midp_form_text_pane

0x56fe,	// (0x000346ed) form_midp_field_choice_group_pane_t1

0x570c,	// (0x000346fb) input_focus_pane_cp051

0x5720,	// (0x0003470f) list_midp_choice_pane

0x2e28,	// (0x00031e17) status_idle_pane

0x56e2,	// (0x000346d1) form_midp_field_time_pane_t1

0x2e1e,	// (0x00031e0d) wait_anim_pane_g2_copy1

0x56f0,	// (0x000346df) form_midp_field_time_pane_t2

0x0001,

0x4d59,	// (0x00033d48) aid_navinavi_width_2_pane

0xf820,	// (0x0003e80f) form_midp_field_time_pane_t

0x2e28,	// (0x00031e17) input_focus_pane_cp052

0x2e28,	// (0x00031e17) bg_input_focus_pane_cp040

0x56a2,	// (0x00034691) form_midp_gauge_slider_pane_t1

0x56b0,	// (0x0003469f) form_midp_gauge_slider_pane_t2

0xdb89,	// (0x0003cb78) form_midp_gauge_slider_pane_t3

0xdb99,	// (0x0003cb88) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003e806) form_midp_gauge_slider_pane_t

0x56da,	// (0x000346c9) form_midp_slider_pane

0x3779,	// (0x00032768) bg_input_focus_pane_cp041_ParamLimits

0x3779,	// (0x00032768) bg_input_focus_pane_cp041

0x566f,	// (0x0003465e) form_midp_gauge_wait_pane_t1_ParamLimits

0x566f,	// (0x0003465e) form_midp_gauge_wait_pane_t1

0x5681,	// (0x00034670) form_midp_gauge_wait_pane_t2_ParamLimits

0x5681,	// (0x00034670) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003e801) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003e801) form_midp_gauge_wait_pane_t

0x5693,	// (0x00034682) form_midp_wait_pane_ParamLimits

0x5693,	// (0x00034682) form_midp_wait_pane

0x5639,	// (0x00034628) form_midp_image_pane_g1

0x5642,	// (0x00034631) form_midp_image_pane_t1

0x5651,	// (0x00034640) form_midp_image_pane_t2

0x5660,	// (0x0003464f) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003e7fa) form_midp_image_pane_t

0x5630,	// (0x0003461f) list_single_midp_pane_g1

0x1a0c,	// (0x000309fb) list_single_midp_pane_t1

0xdb73,	// (0x0003cb62) list_midp_form_item_pane_ParamLimits

0xdb73,	// (0x0003cb62) list_midp_form_item_pane

0x4d01,	// (0x00033cf0) list_midp_form_item_pane_t1

0x4d10,	// (0x00033cff) midp_ticker_pane_g1

0x4d1c,	// (0x00033d0b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003e747) midp_ticker_pane_g

0x4d28,	// (0x00033d17) midp_ticker_pane_t1

0x69f7,	// (0x000359e6) midp_editing_number_pane_t1

0x69d5,	// (0x000359c4) midp_editing_number_pane

0x69e4,	// (0x000359d3) midp_ticker_pane

0x67a4,	// (0x00035793) ai_message_heading_pane

0x2e28,	// (0x00031e17) bg_popup_window_pane_cp14

0x67ac,	// (0x0003579b) listscroll_ai_message_pane

0x672e,	// (0x0003571d) ai_message_heading_pane_g1_ParamLimits

0x672e,	// (0x0003571d) ai_message_heading_pane_g1

0x673a,	// (0x00035729) ai_message_heading_pane_g2_ParamLimits

0x673a,	// (0x00035729) ai_message_heading_pane_g2

0x6746,	// (0x00035735) ai_message_heading_pane_g3_ParamLimits

0x6746,	// (0x00035735) ai_message_heading_pane_g3

0x6752,	// (0x00035741) ai_message_heading_pane_g4_ParamLimits

0x6752,	// (0x00035741) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003e93b) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003e93b) ai_message_heading_pane_g

0x675e,	// (0x0003574d) ai_message_heading_pane_t1_ParamLimits

0x675e,	// (0x0003574d) ai_message_heading_pane_t1

0x6778,	// (0x00035767) ai_message_heading_pane_t2_ParamLimits

0x6778,	// (0x00035767) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003e944) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003e944) ai_message_heading_pane_t

0x678a,	// (0x00035779) bg_popup_heading_pane_cp1_ParamLimits

0x678a,	// (0x00035779) bg_popup_heading_pane_cp1

0x671c,	// (0x0003570b) list_ai_message_pane_ParamLimits

0x671c,	// (0x0003570b) list_ai_message_pane

0x4141,	// (0x00033130) scroll_pane_cp10

0x66b8,	// (0x000356a7) list_ai_message_pane_g1

0x66c0,	// (0x000356af) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003e918) list_ai_message_pane_g

0x66c8,	// (0x000356b7) list_ai_message_pane_t1_ParamLimits

0x66c8,	// (0x000356b7) list_ai_message_pane_t1

0x66dd,	// (0x000356cc) list_ai_message_pane_t2_ParamLimits

0x66dd,	// (0x000356cc) list_ai_message_pane_t2

0x66f2,	// (0x000356e1) list_ai_message_pane_t3_ParamLimits

0x66f2,	// (0x000356e1) list_ai_message_pane_t3

0x6707,	// (0x000356f6) list_ai_message_pane_t4_ParamLimits

0x6707,	// (0x000356f6) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003e91d) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003e91d) list_ai_message_pane_t

0xdd1a,	// (0x0003cd09) cell_ai_soft_ind_pane_ParamLimits

0xdd1a,	// (0x0003cd09) cell_ai_soft_ind_pane

0x4d3a,	// (0x00033d29) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d3a,	// (0x00033d29) cell_ai_soft_ind_pane_g1

0x2e28,	// (0x00031e17) grid_highlight_cp1

0x4d47,	// (0x00033d36) text_secondary_cp56_ParamLimits

0x4d47,	// (0x00033d36) text_secondary_cp56

0x6677,	// (0x00035666) example_general_pane_ParamLimits

0x6677,	// (0x00035666) example_general_pane

0x6683,	// (0x00035672) example_parent_pane_g1_ParamLimits

0x6683,	// (0x00035672) example_parent_pane_g1

0x668f,	// (0x0003567e) example_parent_pane_t1_ParamLimits

0x668f,	// (0x0003567e) example_parent_pane_t1

0xc321,	// (0x0003b310) popup_preview_text_window_ParamLimits

0xc321,	// (0x0003b310) popup_preview_text_window

0x4b78,	// (0x00033b67) list_single_pane_cp2_g4

0x3a9e,	// (0x00032a8d) bg_popup_preview_window_pane_ParamLimits

0x3a9e,	// (0x00032a8d) bg_popup_preview_window_pane

0x63c4,	// (0x000353b3) popup_preview_text_window_t1_ParamLimits

0x63c4,	// (0x000353b3) popup_preview_text_window_t1

0x63e2,	// (0x000353d1) popup_preview_text_window_t2_ParamLimits

0x63e2,	// (0x000353d1) popup_preview_text_window_t2

0x642b,	// (0x0003541a) popup_preview_text_window_t3_ParamLimits

0x642b,	// (0x0003541a) popup_preview_text_window_t3

0x6470,	// (0x0003545f) popup_preview_text_window_t4_ParamLimits

0x6470,	// (0x0003545f) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003e8ec) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003e8ec) popup_preview_text_window_t

0x64ee,	// (0x000354dd) scroll_pane_cp11

0x5473,	// (0x00034462) bg_popup_preview_window_pane_g1

0x6384,	// (0x00035373) bg_popup_preview_window_pane_g2

0x638c,	// (0x0003537b) bg_popup_preview_window_pane_g3

0x6394,	// (0x00035383) bg_popup_preview_window_pane_g4

0x639c,	// (0x0003538b) bg_popup_preview_window_pane_g5

0x63a4,	// (0x00035393) bg_popup_preview_window_pane_g6

0x63ac,	// (0x0003539b) bg_popup_preview_window_pane_g7

0x63b4,	// (0x000353a3) bg_popup_preview_window_pane_g8

0x0084,	// (0x0002f073) aid_popup_width_pane

0xc29d,	// (0x0003b28c) popup_midp_note_alarm_window_ParamLimits

0xc29d,	// (0x0003b28c) popup_midp_note_alarm_window

0x3fc7,	// (0x00032fb6) data_form_pane_ParamLimits

0xbc29,	// (0x0003ac18) form_field_data_pane_g1

0xbc33,	// (0x0003ac22) form_field_data_pane_t1_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_ParamLimits

0x0a6d,	// (0x0002fa5c) data_form_wide_pane_ParamLimits

0x0a7e,	// (0x0002fa6d) form_field_data_wide_pane_g1

0x0a8a,	// (0x0002fa79) form_field_data_wide_pane_t1_ParamLimits

0x3d44,	// (0x00032d33) input_focus_pane_cp6_ParamLimits

0xd36c,	// (0x0003c35b) input_popup_find_pane_g1_ParamLimits

0xd36c,	// (0x0003c35b) input_popup_find_pane_g1

0x0ce1,	// (0x0002fcd0) aid_navi_side_left_pane

0x0cf6,	// (0x0002fce5) aid_navi_side_right_pane

0x5d9d,	// (0x00034d8c) bg_popup_window_pane_cp30_ParamLimits

0x5d9d,	// (0x00034d8c) bg_popup_window_pane_cp30

0x5e17,	// (0x00034e06) popup_midp_note_alarm_window_g1_ParamLimits

0x5e17,	// (0x00034e06) popup_midp_note_alarm_window_g1

0x5e47,	// (0x00034e36) popup_midp_note_alarm_window_t1_ParamLimits

0x5e47,	// (0x00034e36) popup_midp_note_alarm_window_t1

0x5ee8,	// (0x00034ed7) popup_midp_note_alarm_window_t2_ParamLimits

0x5ee8,	// (0x00034ed7) popup_midp_note_alarm_window_t2

0x5f96,	// (0x00034f85) popup_midp_note_alarm_window_t3_ParamLimits

0x5f96,	// (0x00034f85) popup_midp_note_alarm_window_t3

0x5fc8,	// (0x00034fb7) popup_midp_note_alarm_window_t4_ParamLimits

0x5fc8,	// (0x00034fb7) popup_midp_note_alarm_window_t4

0x5fee,	// (0x00034fdd) popup_midp_note_alarm_window_t5_ParamLimits

0x5fee,	// (0x00034fdd) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003e889) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003e889) popup_midp_note_alarm_window_t

0x609a,	// (0x00035089) wait_bar_pane_cp1_ParamLimits

0x609a,	// (0x00035089) wait_bar_pane_cp1

0x2e28,	// (0x00031e17) wait_anim_pane_copy1

0x2e28,	// (0x00031e17) wait_border_pane_copy1

0x5a7b,	// (0x00034a6a) wait_border_pane_g1_copy1

0x0aa4,	// (0x0002fa93) form_field_popup_pane_g1

0xbc4d,	// (0x0003ac3c) form_field_popup_pane_t1_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_cp7_ParamLimits

0x4001,	// (0x00032ff0) list_form_pane_ParamLimits

0x0ac6,	// (0x0002fab5) form_field_popup_wide_pane_g1

0x0ace,	// (0x0002fabd) form_field_popup_wide_pane_t1_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_cp8_ParamLimits

0x400d,	// (0x00032ffc) list_form_wide_pane_ParamLimits

0x6b20,	// (0x00035b0f) aid_size_cell_graphic_pane

0xbccc,	// (0x0003acbb) data_form_pane_t1_ParamLimits

0xc78f,	// (0x0003b77e) data_form_wide_pane_t1_ParamLimits

0xd7f4,	// (0x0003c7e3) bg_status_flat_pane

0xd030,	// (0x0003c01f) title_pane_t1_ParamLimits

0x2ed0,	// (0x00031ebf) title_pane_t2_ParamLimits

0x2ef6,	// (0x00031ee5) title_pane_t3_ParamLimits

0xf557,	// (0x0003e546) title_pane_t_ParamLimits

0x45b8,	// (0x000335a7) level_1_signal_ParamLimits

0x45c5,	// (0x000335b4) level_2_signal_ParamLimits

0x45d2,	// (0x000335c1) level_3_signal_ParamLimits

0x45df,	// (0x000335ce) level_4_signal_ParamLimits

0x45ec,	// (0x000335db) level_5_signal_ParamLimits

0x45f9,	// (0x000335e8) level_6_signal_ParamLimits

0x4606,	// (0x000335f5) level_7_signal_ParamLimits

0x45b8,	// (0x000335a7) level_1_battery_ParamLimits

0x45c5,	// (0x000335b4) level_2_battery_ParamLimits

0x45d2,	// (0x000335c1) level_3_battery_ParamLimits

0x45df,	// (0x000335ce) level_4_battery_ParamLimits

0x45ec,	// (0x000335db) level_5_battery_ParamLimits

0x45f9,	// (0x000335e8) level_6_battery_ParamLimits

0x4606,	// (0x000335f5) level_7_battery_ParamLimits

0x5ca2,	// (0x00034c91) bg_status_flat_pane_g1

0x5caa,	// (0x00034c99) bg_status_flat_pane_g2

0x5cb2,	// (0x00034ca1) bg_status_flat_pane_g3

0x5cba,	// (0x00034ca9) bg_status_flat_pane_g4

0x5cc2,	// (0x00034cb1) bg_status_flat_pane_g5

0x5cca,	// (0x00034cb9) bg_status_flat_pane_g6

0x5cd2,	// (0x00034cc1) bg_status_flat_pane_g7

0xd0bc,	// (0x0003c0ab) tabs_3_active_pane_t1_ParamLimits

0xd0bc,	// (0x0003c0ab) tabs_3_passive_pane_t1_ParamLimits

0xd0ce,	// (0x0003c0bd) tabs_4_active_pane_t1_ParamLimits

0xd0ce,	// (0x0003c0bd) tabs_4_1_passive_pane_t1_ParamLimits

0xd382,	// (0x0003c371) tabs_2_active_pane_t1_ParamLimits

0xd382,	// (0x0003c371) tabs_2_passive_pane_t1_ParamLimits

0x3779,	// (0x00032768) bg_active_tab_pane_cp4_ParamLimits

0xd394,	// (0x0003c383) tabs_2_long_active_pane_t1_ParamLimits

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp4_ParamLimits

0x18e9,	// (0x000308d8) list_single_midp_graphic_pane_t1_ParamLimits

0x3779,	// (0x00032768) bg_active_tab_pane_cp5_ParamLimits

0xd3a7,	// (0x0003c396) tabs_3_long_active_pane_t1_ParamLimits

0x4f75,	// (0x00033f64) bg_passive_tab_pane_cp5_ParamLimits

0x18e9,	// (0x000308d8) list_single_midp_graphic_pane_t1

0xd7f4,	// (0x0003c7e3) bg_status_flat_pane_ParamLimits

0x510b,	// (0x000340fa) indicator_pane_cp2_ParamLimits

0x510b,	// (0x000340fa) indicator_pane_cp2

0xd972,	// (0x0003c961) navi_pane_srt_ParamLimits

0xd972,	// (0x0003c961) navi_pane_srt

0x525a,	// (0x00034249) popup_clock_digital_analogue_window_cp1

0x3856,	// (0x00032845) indicator_pane_t1

0x4c3b,	// (0x00033c2a) copy_highlight_pane

0x4c3b,	// (0x00033c2a) cursor_graphics_pane

0x4c3b,	// (0x00033c2a) graphic_within_text_pane

0x4c3b,	// (0x00033c2a) link_highlight_pane

0x64b1,	// (0x000354a0) popup_preview_text_window_t5_ParamLimits

0x64b1,	// (0x000354a0) popup_preview_text_window_t5

0x4d61,	// (0x00033d50) cursor_digital_pane

0x4d61,	// (0x00033d50) cursor_primary_pane

0x4d72,	// (0x00033d61) cursor_primary_small_pane

0x4d7a,	// (0x00033d69) cursor_secondary_pane

0x4d82,	// (0x00033d71) cursor_title_pane

0x4d61,	// (0x00033d50) link_highlight_digital_pane

0x4d69,	// (0x00033d58) link_highlight_primary_pane

0x4d72,	// (0x00033d61) link_highlight_primary_small_pane

0x4d7a,	// (0x00033d69) link_highlight_secondary_pane

0x4d82,	// (0x00033d71) link_highlight_title_pane

0x4d61,	// (0x00033d50) copy_highlight_digital_pane

0x4d61,	// (0x00033d50) copy_highlight_primary_pane

0x4d72,	// (0x00033d61) copy_highlight_primary_small_pane

0x4d7a,	// (0x00033d69) copy_highlight_secondary_pane

0x4d82,	// (0x00033d71) copy_highlight_title_pane

0x4d7a,	// (0x00033d69) graphic_text_digital_pane

0x5d40,	// (0x00034d2f) graphic_text_primary_pane

0x5d49,	// (0x00034d38) graphic_text_primary_small_pane

0x4d72,	// (0x00033d61) graphic_text_secondary_pane

0x4d61,	// (0x00033d50) graphic_text_title_pane

0xd630,	// (0x0003c61f) cursor_primary_pane_g1

0x5d32,	// (0x00034d21) cursor_text_primary_t1

0xdc0c,	// (0x0003cbfb) cursor_primary_small_pane_g1

0x5d24,	// (0x00034d13) cursor_text_primary_small_t1

0xdc02,	// (0x0003cbf1) cursor_primary_small_pane_g1_copy1

0x5d0c,	// (0x00034cfb) cursor_text_primary_small_t1_copy1

0x5cea,	// (0x00034cd9) cursor_text_title_t1

0xdbf8,	// (0x0003cbe7) cursor_title_pane_g1

0xd630,	// (0x0003c61f) cursor_digital_pane_g1

0x4d94,	// (0x00033d83) cursor_text_digital_t1

0x5c8b,	// (0x00034c7a) link_highlight_primary_pane_g1

0x5c93,	// (0x00034c82) link_highlight_primary_pane_t1

0x4da2,	// (0x00033d91) link_highlight_primary_small_pane_g1

0x4daa,	// (0x00033d99) link_highlight_primary_small_pane_t1

0x4da2,	// (0x00033d91) link_highlight_secondary_pane_g1

0x4db9,	// (0x00033da8) link_highlight_secondary_pane_t1

0x5bff,	// (0x00034bee) link_highlight_title_pane_g1

0x5c07,	// (0x00034bf6) link_highlight_title_pane_t1

0x5be8,	// (0x00034bd7) link_highlight_digital_pane_g1

0x5bf0,	// (0x00034bdf) link_highlight_digital_pane_t1

0x5ac0,	// (0x00034aaf) copy_highlight_primary_pane_g1

0x5ac8,	// (0x00034ab7) copy_highlight_primary_pane_t1

0x5a9a,	// (0x00034a89) copy_highlight_primary_small_pane_g1

0x5ab1,	// (0x00034aa0) copy_highlight_primary_small_pane_t1

0x4dc8,	// (0x00033db7) copy_highlight_secondary_pane_g1

0x4dd0,	// (0x00033dbf) copy_highlight_secondary_pane_t1

0x5a9a,	// (0x00034a89) copy_highlight_title_pane_g1

0x5aa2,	// (0x00034a91) copy_highlight_title_pane_t1

0x5ac0,	// (0x00034aaf) copy_highlight_digital_pane_g1

0x6ceb,	// (0x00035cda) copy_highlight_digital_pane_t1

0x6c3f,	// (0x00035c2e) graphic_text_primary_pane_g1

0x6ccf,	// (0x00035cbe) graphic_text_primary_pane_t1

0x6cdd,	// (0x00035ccc) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003e9b8) graphic_text_primary_pane_t

0x6cab,	// (0x00035c9a) graphic_text_primary_small_pane_g1

0x6cb3,	// (0x00035ca2) graphic_text_primary_small_pane_t1

0x6cc1,	// (0x00035cb0) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003e9b3) graphic_text_primary_small_pane_t

0x6c87,	// (0x00035c76) graphic_text_secondary_pane_g1

0x6c8f,	// (0x00035c7e) graphic_text_secondary_pane_t1

0x6c9d,	// (0x00035c8c) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003e9ae) graphic_text_secondary_pane_t

0x6c63,	// (0x00035c52) graphic_text_title_pane_g1

0x6c6b,	// (0x00035c5a) graphic_text_title_pane_t1

0x6c79,	// (0x00035c68) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003e9a9) graphic_text_title_pane_t

0x6c3f,	// (0x00035c2e) graphic_text_digital_pane_g1

0x6c47,	// (0x00035c36) graphic_text_digital_pane_t1

0x6c55,	// (0x00035c44) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003e9a4) graphic_text_digital_pane_t

0x3779,	// (0x00032768) navi_icon_pane_srt_ParamLimits

0x3779,	// (0x00032768) navi_icon_pane_srt

0x2e28,	// (0x00031e17) navi_midp_pane_srt

0x2e28,	// (0x00031e17) navi_navi_pane_srt

0x3779,	// (0x00032768) navi_text_pane_srt_ParamLimits

0x3779,	// (0x00032768) navi_text_pane_srt

0x6c0a,	// (0x00035bf9) navi_navi_icon_text_pane_srt

0x6c12,	// (0x00035c01) navi_navi_pane_srt_g1_ParamLimits

0x6c12,	// (0x00035c01) navi_navi_pane_srt_g1

0x6c24,	// (0x00035c13) navi_navi_pane_srt_g2_ParamLimits

0x6c24,	// (0x00035c13) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003e99f) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003e99f) navi_navi_pane_srt_g

0x6c36,	// (0x00035c25) navi_navi_tabs_pane_srt

0x6c0a,	// (0x00035bf9) navi_navi_text_pane_srt

0x6c0a,	// (0x00035bf9) navi_navi_volume_pane_srt

0x6bfb,	// (0x00035bea) navi_navi_text_pane_srt_t1

0x1d16,	// (0x00030d05) navi_navi_volume_pane_srt_g1

0x1d1e,	// (0x00030d0d) volume_small_pane_srt_ParamLimits

0x1d1e,	// (0x00030d0d) volume_small_pane_srt

0x1044,	// (0x00030033) volume_small_pane_srt_g1_ParamLimits

0x1044,	// (0x00030033) volume_small_pane_srt_g1

0x1054,	// (0x00030043) volume_small_pane_srt_g2_ParamLimits

0x1054,	// (0x00030043) volume_small_pane_srt_g2

0x1065,	// (0x00030054) volume_small_pane_srt_g3_ParamLimits

0x1065,	// (0x00030054) volume_small_pane_srt_g3

0x1076,	// (0x00030065) volume_small_pane_srt_g4_ParamLimits

0x1076,	// (0x00030065) volume_small_pane_srt_g4

0x1087,	// (0x00030076) volume_small_pane_srt_g5_ParamLimits

0x1087,	// (0x00030076) volume_small_pane_srt_g5

0x1098,	// (0x00030087) volume_small_pane_srt_g6_ParamLimits

0x1098,	// (0x00030087) volume_small_pane_srt_g6

0x10a9,	// (0x00030098) volume_small_pane_srt_g7_ParamLimits

0x10a9,	// (0x00030098) volume_small_pane_srt_g7

0x10ba,	// (0x000300a9) volume_small_pane_srt_g8_ParamLimits

0x10ba,	// (0x000300a9) volume_small_pane_srt_g8

0x10cb,	// (0x000300ba) volume_small_pane_srt_g9_ParamLimits

0x10cb,	// (0x000300ba) volume_small_pane_srt_g9

0x10dc,	// (0x000300cb) volume_small_pane_srt_g10_ParamLimits

0x10dc,	// (0x000300cb) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003e74c) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003e74c) volume_small_pane_srt_g

0x3b47,	// (0x00032b36) query_popup_data_pane_cp2

0x6be1,	// (0x00035bd0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6be1,	// (0x00035bd0) navi_navi_icon_text_pane_srt_t1

0x5d40,	// (0x00034d2f) navi_tabs_2_long_pane_srt

0x5d40,	// (0x00034d2f) navi_tabs_2_pane_srt

0x5d40,	// (0x00034d2f) navi_tabs_3_long_pane_srt

0x5d40,	// (0x00034d2f) navi_tabs_3_pane_srt

0x5d40,	// (0x00034d2f) navi_tabs_4_pane_srt

0x1cf6,	// (0x00030ce5) tabs_2_active_pane_srt_ParamLimits

0x1cf6,	// (0x00030ce5) tabs_2_active_pane_srt

0x1d06,	// (0x00030cf5) tabs_2_passive_pane_srt_ParamLimits

0x1d06,	// (0x00030cf5) tabs_2_passive_pane_srt

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp1_srt

0x6bad,	// (0x00035b9c) bg_passive_tab_pane_g1_cp1_srt

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp1_srt

0x6bb6,	// (0x00035ba5) bg_passive_tab_pane_g3_cp1_srt

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp1_srt_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp1_srt

0x6bbf,	// (0x00035bae) tabs_2_active_pane_srt_g1

0xdfc9,	// (0x0003cfb8) tabs_2_active_pane_srt_t1_ParamLimits

0xdfc9,	// (0x0003cfb8) tabs_2_active_pane_srt_t1

0x6bad,	// (0x00035b9c) bg_active_tab_pane_g1_cp1_srt

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp1_srt

0x6bb6,	// (0x00035ba5) bg_active_tab_pane_g3_cp1_srt

0x1cc3,	// (0x00030cb2) tabs_3_active_pane_srt_ParamLimits

0x1cc3,	// (0x00030cb2) tabs_3_active_pane_srt

0x1cd4,	// (0x00030cc3) tabs_3_passive_pane_cp_srt_ParamLimits

0x1cd4,	// (0x00030cc3) tabs_3_passive_pane_cp_srt

0x1ce5,	// (0x00030cd4) tabs_3_passive_pane_srt_ParamLimits

0x1ce5,	// (0x00030cd4) tabs_3_passive_pane_srt

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x54e7,	// (0x000344d6) bg_passive_tab_pane_cp2_srt

0x4ddf,	// (0x00033dce) bg_passive_tab_pane_g1_cp2_srt

0x4874,	// (0x00033863) bg_passive_tab_pane_g2_cp2_srt

0x4de8,	// (0x00033dd7) bg_passive_tab_pane_g3_cp2_srt

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp2_srt_ParamLimits

0x39f4,	// (0x000329e3) bg_active_tab_pane_cp2_srt

0x6b93,	// (0x00035b82) tabs_3_active_pane_srt_g1

0xdfb3,	// (0x0003cfa2) tabs_3_active_pane_srt_t1_ParamLimits

0xdfb3,	// (0x0003cfa2) tabs_3_active_pane_srt_t1

0x4ddf,	// (0x00033dce) bg_active_tab_pane_g1_cp2_srt

0x4874,	// (0x00033863) bg_active_tab_pane_g2_cp2_srt

0x4de8,	// (0x00033dd7) bg_active_tab_pane_g3_cp2_srt

0x1c7b,	// (0x00030c6a) tabs_4_active_pane_srt_ParamLimits

0x1c7b,	// (0x00030c6a) tabs_4_active_pane_srt

0x1c8d,	// (0x00030c7c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c8d,	// (0x00030c7c) tabs_4_passive_pane_cp2_srt

0x123f,	// (0x0003022e) aid_size_cell_toolbar

0x6856,	// (0x00035845) main_idle_act_pane_ParamLimits

0x13f6,	// (0x000303e5) popup_large_graphic_colour_window_ParamLimits

0xc5a7,	// (0x0003b596) popup_toolbar_window_ParamLimits

0xc5a7,	// (0x0003b596) popup_toolbar_window

0x6a06,	// (0x000359f5) list_single_graphic_2heading_pane_ParamLimits

0x6a06,	// (0x000359f5) list_single_graphic_2heading_pane

0x436e,	// (0x0003335d) aid_size_cell_apps_grid_lsc_pane

0x4380,	// (0x0003336f) aid_size_cell_apps_grid_prt_pane

0x4f75,	// (0x00033f64) bg_wml_button_pane_cp1_ParamLimits

0x4f75,	// (0x00033f64) bg_wml_button_pane_cp1

0xdba9,	// (0x0003cb98) form_midp_field_text_pane_t1_ParamLimits

0x54e7,	// (0x000344d6) input_focus_pane_cp050_ParamLimits

0x576a,	// (0x00034759) list_midp_form_text_pane_ParamLimits

0x570c,	// (0x000346fb) input_focus_pane_cp051_ParamLimits

0x5720,	// (0x0003470f) list_midp_choice_pane_ParamLimits

0xdb3d,	// (0x0003cb2c) list_single_2graphic_pane_cp3_ParamLimits

0xdb3d,	// (0x0003cb2c) list_single_2graphic_pane_cp3

0xdb52,	// (0x0003cb41) list_single_midp_graphic_pane_ParamLimits

0xdb52,	// (0x0003cb41) list_single_midp_graphic_pane

0x000e,	// (0x0002effd) list_single_graphic_2heading_pane_g1_ParamLimits

0x000e,	// (0x0002effd) list_single_graphic_2heading_pane_g1

0x001a,	// (0x0002f009) list_single_graphic_2heading_pane_g4_ParamLimits

0x001a,	// (0x0002f009) list_single_graphic_2heading_pane_g4

0x0026,	// (0x0002f015) list_single_graphic_2heading_pane_g5_ParamLimits

0x0026,	// (0x0002f015) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003e79f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003e79f) list_single_graphic_2heading_pane_g

0x0032,	// (0x0002f021) list_single_graphic_2heading_pane_t1_ParamLimits

0x0032,	// (0x0002f021) list_single_graphic_2heading_pane_t1

0x0046,	// (0x0002f035) list_single_graphic_2heading_pane_t2_ParamLimits

0x0046,	// (0x0002f035) list_single_graphic_2heading_pane_t2

0x0060,	// (0x0002f04f) list_single_graphic_2heading_pane_t3_ParamLimits

0x0060,	// (0x0002f04f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003e7a6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003e7a6) list_single_graphic_2heading_pane_t

0x53b1,	// (0x000343a0) bg_popup_sub_pane_cp2

0x53db,	// (0x000343ca) grid_toobar_pane

0x1806,	// (0x000307f5) cell_toolbar_pane_ParamLimits

0x1806,	// (0x000307f5) cell_toolbar_pane

0x5417,	// (0x00034406) cell_toolbar_pane_g1_ParamLimits

0x5417,	// (0x00034406) cell_toolbar_pane_g1

0x542b,	// (0x0003441a) cell_toolbar_pane_g2_ParamLimits

0x542b,	// (0x0003441a) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003e7b4) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003e7b4) cell_toolbar_pane_g

0x544d,	// (0x0003443c) grid_highlight_pane_cp2_ParamLimits

0x544d,	// (0x0003443c) grid_highlight_pane_cp2

0x5467,	// (0x00034456) toolbar_button_pane

0x5473,	// (0x00034462) toolbar_button_pane_g1

0x547b,	// (0x0003446a) toolbar_button_pane_g2

0x5483,	// (0x00034472) toolbar_button_pane_g3

0x548b,	// (0x0003447a) toolbar_button_pane_g4

0x5493,	// (0x00034482) toolbar_button_pane_g5

0x549b,	// (0x0003448a) toolbar_button_pane_g6

0x54a3,	// (0x00034492) toolbar_button_pane_g7

0x54ab,	// (0x0003449a) toolbar_button_pane_g8

0x54b3,	// (0x000344a2) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003e7b9) toolbar_button_pane_g

0x1860,	// (0x0003084f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1860,	// (0x0003084f) list_single_2graphic_pane_g1_cp3

0xc5ff,	// (0x0003b5ee) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc5ff,	// (0x0003b5ee) list_single_2graphic_pane_g2_cp3

0x187d,	// (0x0003086c) list_single_2graphic_pane_g3_cp3

0x1885,	// (0x00030874) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1885,	// (0x00030874) list_single_2graphic_pane_g4_cp3

0x1891,	// (0x00030880) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1891,	// (0x00030880) list_single_2graphic_pane_t1_cp3

0x18dd,	// (0x000308cc) list_single_midp_graphic_pane_g2_ParamLimits

0x18dd,	// (0x000308cc) list_single_midp_graphic_pane_g2

0x1247,	// (0x00030236) aid_zoom_text_primary

0xf546,	// (0x0003e535) aid_zoom_text_secondary

0xd688,	// (0x0003c677) status_small_pane_g7_ParamLimits

0xd688,	// (0x0003c677) status_small_pane_g7

0xd6ab,	// (0x0003c69a) status_small_pane_t1_ParamLimits

0xd00c,	// (0x0003bffb) title_pane_g2

0x0003,

0xf54e,	// (0x0003e53d) title_pane_g

0xd284,	// (0x0003c273) aid_size_cell_colour_1_pane_ParamLimits

0xd284,	// (0x0003c273) aid_size_cell_colour_1_pane

0xd298,	// (0x0003c287) aid_size_cell_colour_2_pane_ParamLimits

0xd298,	// (0x0003c287) aid_size_cell_colour_2_pane

0xd2ac,	// (0x0003c29b) aid_size_cell_colour_3_pane_ParamLimits

0xd2ac,	// (0x0003c29b) aid_size_cell_colour_3_pane

0xd2c0,	// (0x0003c2af) aid_size_cell_colour_4_pane_ParamLimits

0xd2c0,	// (0x0003c2af) aid_size_cell_colour_4_pane

0x0c1d,	// (0x0002fc0c) title_pane_stacon_g1_ParamLimits

0x0c1d,	// (0x0002fc0c) title_pane_stacon_g1

0x5b1f,	// (0x00034b0e) popup_note_wait_window_g3_ParamLimits

0x5b1f,	// (0x00034b0e) popup_note_wait_window_g3

0x5b95,	// (0x00034b84) popup_note_wait_window_t5_ParamLimits

0x5b95,	// (0x00034b84) popup_note_wait_window_t5

0x2e28,	// (0x00031e17) main_feb_china_hwr_fs_writing_pane

0xbfc3,	// (0x0003afb2) popup_feb_china_hwr_fs_window_ParamLimits

0xbfc3,	// (0x0003afb2) popup_feb_china_hwr_fs_window

0xc610,	// (0x0003b5ff) aid_size_cell_hwr_fs_ParamLimits

0xc610,	// (0x0003b5ff) aid_size_cell_hwr_fs

0x54e7,	// (0x000344d6) bg_popup_sub_pane_cp3_ParamLimits

0x54e7,	// (0x000344d6) bg_popup_sub_pane_cp3

0xc625,	// (0x0003b614) grid_hwr_fs_pane_ParamLimits

0xc625,	// (0x0003b614) grid_hwr_fs_pane

0x199c,	// (0x0003098b) linegrid_hwr_fs_pane_ParamLimits

0x199c,	// (0x0003098b) linegrid_hwr_fs_pane

0xc63d,	// (0x0003b62c) cell_hwr_fs_pane_ParamLimits

0xc63d,	// (0x0003b62c) cell_hwr_fs_pane

0x54f3,	// (0x000344e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x54f3,	// (0x000344e2) linegrid_hwr_fs_pane_g1

0xdb11,	// (0x0003cb00) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb11,	// (0x0003cb00) linegrid_hwr_fs_pane_g2

0x5511,	// (0x00034500) linegrid_hwr_fs_pane_g3_ParamLimits

0x5511,	// (0x00034500) linegrid_hwr_fs_pane_g3

0x19ce,	// (0x000309bd) linegrid_hwr_fs_pane_g4_ParamLimits

0x19ce,	// (0x000309bd) linegrid_hwr_fs_pane_g4

0x19e8,	// (0x000309d7) linegrid_hwr_fs_pane_g5_ParamLimits

0x19e8,	// (0x000309d7) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003e7df) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003e7df) linegrid_hwr_fs_pane_g

0x551d,	// (0x0003450c) cell_hwr_fs_pane_g1_ParamLimits

0x551d,	// (0x0003450c) cell_hwr_fs_pane_g1

0x52e8,	// (0x000342d7) cell_hwr_fs_pane_g2_ParamLimits

0x52e8,	// (0x000342d7) cell_hwr_fs_pane_g2

0xdb23,	// (0x0003cb12) cell_hwr_fs_pane_g3_ParamLimits

0xdb23,	// (0x0003cb12) cell_hwr_fs_pane_g3

0xdb30,	// (0x0003cb1f) cell_hwr_fs_pane_g4_ParamLimits

0xdb30,	// (0x0003cb1f) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003e7ea) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003e7ea) cell_hwr_fs_pane_g

0xc663,	// (0x0003b652) cell_hwr_fs_pane_t1

0x2e28,	// (0x00031e17) grid_highlight_pane_cp6

0x2e28,	// (0x00031e17) main_idle_act2_pane

0x4128,	// (0x00033117) aid_inside_area_popup_secondary

0xdc1e,	// (0x0003cc0d) aid_inside_area_window_primary_ParamLimits

0xdc1e,	// (0x0003cc0d) aid_inside_area_window_primary

0x6cfa,	// (0x00035ce9) ai2_news_ticker_pane

0x6d02,	// (0x00035cf1) aid_size_cell_ai1_link_ParamLimits

0x6d02,	// (0x00035cf1) aid_size_cell_ai1_link

0x6d1c,	// (0x00035d0b) popup_ai2_data_window_ParamLimits

0x6d1c,	// (0x00035d0b) popup_ai2_data_window

0x6d30,	// (0x00035d1f) popup_ai2_link_window_ParamLimits

0x6d30,	// (0x00035d1f) popup_ai2_link_window

0x54e7,	// (0x000344d6) bg_popup_sub_pane_cp4_ParamLimits

0x54e7,	// (0x000344d6) bg_popup_sub_pane_cp4

0x6d44,	// (0x00035d33) grid_ai2_link_pane_ParamLimits

0x6d44,	// (0x00035d33) grid_ai2_link_pane

0x6d5b,	// (0x00035d4a) popup_ai2_link_window_g1_ParamLimits

0x6d5b,	// (0x00035d4a) popup_ai2_link_window_g1

0x6d67,	// (0x00035d56) popup_ai2_link_window_g2_ParamLimits

0x6d67,	// (0x00035d56) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003e9bd) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003e9bd) popup_ai2_link_window_g

0x6d76,	// (0x00035d65) ai2_mp_button_pane

0x6d7e,	// (0x00035d6d) ai2_mp_volume_pane

0x570c,	// (0x000346fb) bg_popup_sub_pane_cp5_ParamLimits

0x570c,	// (0x000346fb) bg_popup_sub_pane_cp5

0x6d86,	// (0x00035d75) heading_ai2_gene_pane_ParamLimits

0x6d86,	// (0x00035d75) heading_ai2_gene_pane

0x6d92,	// (0x00035d81) list_ai2_gene_pane_ParamLimits

0x6d92,	// (0x00035d81) list_ai2_gene_pane

0x6dda,	// (0x00035dc9) cell_ai2_link_pane_ParamLimits

0x6dda,	// (0x00035dc9) cell_ai2_link_pane

0x6df0,	// (0x00035ddf) cell_ai2_link_pane_g1

0x2e28,	// (0x00031e17) grid_highlight_pane_cp7

0x1d33,	// (0x00030d22) ai2_mp_volume_pane_g1

0x6ec1,	// (0x00035eb0) ai2_mp_volume_pane_g2

0x6e36,	// (0x00035e25) list_ai2_gene_pane_t1

0x6ec9,	// (0x00035eb8) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003e9d6) ai2_mp_volume_pane_g

0x1d3b,	// (0x00030d2a) volume_small_pane_cp3

0x6ed1,	// (0x00035ec0) aid_size_cell_ai2_button

0x6ed9,	// (0x00035ec8) grid_ai2_button_pane

0x6ee2,	// (0x00035ed1) cell_ai2_button_pane_ParamLimits

0x6ee2,	// (0x00035ed1) cell_ai2_button_pane

0x2e1e,	// (0x00031e0d) cell_ai2_button_pane_g1

0x2e28,	// (0x00031e17) grid_highlight_pane_cp8

0x6e81,	// (0x00035e70) ai2_gene_pane_t1_ParamLimits

0x6e81,	// (0x00035e70) ai2_gene_pane_t1

0xbf3d,	// (0x0003af2c) aid_height_parent_landscape

0xdd69,	// (0x0003cd58) aid_height_set_list

0x6856,	// (0x00035845) aid_size_parent

0x6b20,	// (0x00035b0f) aid_size_cell_graphic_pane_ParamLimits

0x6da2,	// (0x00035d91) popup_ai2_data_window_g1_ParamLimits

0x6da2,	// (0x00035d91) popup_ai2_data_window_g1

0x6dae,	// (0x00035d9d) ai2_news_ticker_pane_g1

0x6db6,	// (0x00035da5) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003e9c2) ai2_news_ticker_pane_g

0x6dbe,	// (0x00035dad) ai2_news_ticker_pane_t1

0x6dcc,	// (0x00035dbb) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003e9c7) ai2_news_ticker_pane_t

0x6df9,	// (0x00035de8) heading_ai2_gene_pane_g1

0x6e01,	// (0x00035df0) heading_ai2_gene_pane_t1_ParamLimits

0x6e01,	// (0x00035df0) heading_ai2_gene_pane_t1

0x6e16,	// (0x00035e05) list_highlight_pane_cp6

0x6e1e,	// (0x00035e0d) ai2_gene_pane_ParamLimits

0x6e1e,	// (0x00035e0d) ai2_gene_pane

0x6e44,	// (0x00035e33) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003e9cc) list_ai2_gene_pane_t

0x6e52,	// (0x00035e41) list_highlight_pane_cp8_ParamLimits

0x6e52,	// (0x00035e41) list_highlight_pane_cp8

0x6e63,	// (0x00035e52) ai2_gene_pane_g1_ParamLimits

0x6e63,	// (0x00035e52) ai2_gene_pane_g1

0x6e75,	// (0x00035e64) ai2_gene_pane_g2_ParamLimits

0x6e75,	// (0x00035e64) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003e9d1) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003e9d1) ai2_gene_pane_g

0x3f69,	// (0x00032f58) scroll_pane_cp12

0xbefc,	// (0x0003aeeb) control_pane_t3_ParamLimits

0xbefc,	// (0x0003aeeb) control_pane_t3

0xd69c,	// (0x0003c68b) status_small_pane_g8_ParamLimits

0xd69c,	// (0x0003c68b) status_small_pane_g8

0xc056,	// (0x0003b045) popup_find_window_ParamLimits

0xc2d7,	// (0x0003b2c6) popup_note_image_window_ParamLimits

0x1836,	// (0x00030825) list_double2_graphic_pane_vc_g1_ParamLimits

0x1836,	// (0x00030825) list_double2_graphic_pane_vc_g1

0x05cf,	// (0x0002f5be) list_double2_graphic_pane_vc_g2_ParamLimits

0x05cf,	// (0x0002f5be) list_double2_graphic_pane_vc_g2

0x05db,	// (0x0002f5ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e7ad) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e7ad) list_double2_graphic_pane_vc_g

0x1842,	// (0x00030831) list_double2_graphic_pane_vc_t1_ParamLimits

0x1842,	// (0x00030831) list_double2_graphic_pane_vc_t1

0x05cf,	// (0x0002f5be) list_single_heading_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_heading_pane_vc_g1

0x05db,	// (0x0002f5ca) list_single_heading_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_heading_pane_vc_g

0x18ab,	// (0x0003089a) list_single_heading_pane_vc_t1_ParamLimits

0x18ab,	// (0x0003089a) list_single_heading_pane_vc_t1

0x18c1,	// (0x000308b0) list_single_heading_pane_vc_t2_ParamLimits

0x18c1,	// (0x000308b0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003e7ce) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003e7ce) list_single_heading_pane_vc_t

0x18ff,	// (0x000308ee) list_setting_number_pane_vc_g1_ParamLimits

0x18ff,	// (0x000308ee) list_setting_number_pane_vc_g1

0x190b,	// (0x000308fa) list_setting_number_pane_vc_g2_ParamLimits

0x190b,	// (0x000308fa) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e7d3) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e7d3) list_setting_number_pane_vc_g

0x1917,	// (0x00030906) list_setting_number_pane_vc_t1_ParamLimits

0x1917,	// (0x00030906) list_setting_number_pane_vc_t1

0x192b,	// (0x0003091a) list_setting_number_pane_vc_t2_ParamLimits

0x192b,	// (0x0003091a) list_setting_number_pane_vc_t2

0x1945,	// (0x00030934) list_setting_number_pane_vc_t3_ParamLimits

0x1945,	// (0x00030934) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003e7d8) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003e7d8) list_setting_number_pane_vc_t

0x195f,	// (0x0003094e) set_value_pane_vc_ParamLimits

0x195f,	// (0x0003094e) set_value_pane_vc

0x6a06,	// (0x000359f5) list_double2_graphic_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double2_graphic_pane_vc

0x6a06,	// (0x000359f5) list_double2_large_graphic_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double2_large_graphic_pane_vc

0x6a06,	// (0x000359f5) list_double2_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double2_pane_vc

0x6a06,	// (0x000359f5) list_double_graphic_heading_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_graphic_heading_pane_vc

0x6a06,	// (0x000359f5) list_double_graphic_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_graphic_pane_vc

0x6a06,	// (0x000359f5) list_double_heading_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_heading_pane_vc

0x2f93,	// (0x00031f82) list_double_large_graphic_pane_vc_ParamLimits

0x2f93,	// (0x00031f82) list_double_large_graphic_pane_vc

0x6a06,	// (0x000359f5) list_double_number_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_number_pane_vc

0x6a06,	// (0x000359f5) list_double_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_pane_vc

0x6a06,	// (0x000359f5) list_double_time_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_double_time_pane_vc

0x6a06,	// (0x000359f5) list_setting_number_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_setting_number_pane_vc

0x6a06,	// (0x000359f5) list_setting_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_setting_pane_vc

0x6a06,	// (0x000359f5) list_single_graphic_heading_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_single_graphic_heading_pane_vc

0x6a06,	// (0x000359f5) list_single_heading_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_single_heading_pane_vc

0x6a06,	// (0x000359f5) list_single_number_heading_pane_vc_ParamLimits

0x6a06,	// (0x000359f5) list_single_number_heading_pane_vc

0x3085,	// (0x00032074) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3085,	// (0x00032074) list_double_graphic_heading_pane_vc_g1

0x05cf,	// (0x0002f5be) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x05cf,	// (0x0002f5be) list_double_graphic_heading_pane_vc_g2

0x05db,	// (0x0002f5ca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0003e9dd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0003e9dd) list_double_graphic_heading_pane_vc_g

0x3091,	// (0x00032080) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3091,	// (0x00032080) list_double_graphic_heading_pane_vc_t1

0x30ad,	// (0x0003209c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x30ad,	// (0x0003209c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0003e9e4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0003e9e4) list_double_graphic_heading_pane_vc_t

0x18ff,	// (0x000308ee) list_setting_pane_vc_g1_ParamLimits

0x18ff,	// (0x000308ee) list_setting_pane_vc_g1

0x190b,	// (0x000308fa) list_setting_pane_vc_g2_ParamLimits

0x190b,	// (0x000308fa) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e7d3) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e7d3) list_setting_pane_vc_g

0x30c5,	// (0x000320b4) list_setting_pane_vc_t1_ParamLimits

0x30c5,	// (0x000320b4) list_setting_pane_vc_t1

0x30df,	// (0x000320ce) list_setting_pane_vc_t2_ParamLimits

0x30df,	// (0x000320ce) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0003ea27) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0003ea27) list_setting_pane_vc_t

0x195f,	// (0x0003094e) set_value_pane_cp_vc_ParamLimits

0x195f,	// (0x0003094e) set_value_pane_cp_vc

0x05cf,	// (0x0002f5be) list_single_number_heading_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_single_number_heading_pane_vc_g1

0x05db,	// (0x0002f5ca) list_single_number_heading_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_single_number_heading_pane_vc_g

0x18ab,	// (0x0003089a) list_single_number_heading_pane_vc_t1_ParamLimits

0x18ab,	// (0x0003089a) list_single_number_heading_pane_vc_t1

0x30f7,	// (0x000320e6) list_single_number_heading_pane_vc_t2_ParamLimits

0x30f7,	// (0x000320e6) list_single_number_heading_pane_vc_t2

0x310b,	// (0x000320fa) list_single_number_heading_pane_vc_t3_ParamLimits

0x310b,	// (0x000320fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0003ea2c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003ea2c) list_single_number_heading_pane_vc_t

0x1836,	// (0x00030825) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1836,	// (0x00030825) list_single_graphic_heading_pane_vc_g1

0x05cf,	// (0x0002f5be) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x05cf,	// (0x0002f5be) list_single_graphic_heading_pane_vc_g4

0x05db,	// (0x0002f5ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x05db,	// (0x0002f5ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003e7ad) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e7ad) list_single_graphic_heading_pane_vc_g

0x18ab,	// (0x0003089a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x18ab,	// (0x0003089a) list_single_graphic_heading_pane_vc_t1

0x311d,	// (0x0003210c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x311d,	// (0x0003210c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x0003ea33) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x0003ea33) list_single_graphic_heading_pane_vc_t

0x05cf,	// (0x0002f5be) list_double2_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_double2_pane_vc_g1

0x05db,	// (0x0002f5ca) list_double2_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_double2_pane_vc_g

0x3131,	// (0x00032120) list_double2_pane_vc_t1_ParamLimits

0x3131,	// (0x00032120) list_double2_pane_vc_t1

0x3147,	// (0x00032136) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3147,	// (0x00032136) list_double2_large_graphic_pane_vc_g1

0x05cf,	// (0x0002f5be) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x05cf,	// (0x0002f5be) list_double2_large_graphic_pane_vc_g2

0x05db,	// (0x0002f5ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x05db,	// (0x0002f5ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003e5d4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003e5d4) list_double2_large_graphic_pane_vc_g

0x3153,	// (0x00032142) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3153,	// (0x00032142) list_double2_large_graphic_pane_vc_t1

0x3169,	// (0x00032158) list_double_time_pane_vc_g1_ParamLimits

0x3169,	// (0x00032158) list_double_time_pane_vc_g1

0x3175,	// (0x00032164) list_double_time_pane_vc_g2_ParamLimits

0x3175,	// (0x00032164) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0003ea38) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0003ea38) list_double_time_pane_vc_g

0x3181,	// (0x00032170) list_double_time_pane_vc_t1_ParamLimits

0x3181,	// (0x00032170) list_double_time_pane_vc_t1

0x319f,	// (0x0003218e) list_double_time_pane_vc_t2_ParamLimits

0x319f,	// (0x0003218e) list_double_time_pane_vc_t2

0x31e9,	// (0x000321d8) list_double_time_pane_vc_t3_ParamLimits

0x31e9,	// (0x000321d8) list_double_time_pane_vc_t3

0x31fb,	// (0x000321ea) list_double_time_pane_vc_t4_ParamLimits

0x31fb,	// (0x000321ea) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x0003ea3d) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003ea3d) list_double_time_pane_vc_t

0x05cf,	// (0x0002f5be) list_double_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_double_pane_vc_g1

0x05db,	// (0x0002f5ca) list_double_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_double_pane_vc_g

0x320f,	// (0x000321fe) list_double_pane_vc_t1_ParamLimits

0x320f,	// (0x000321fe) list_double_pane_vc_t1

0x3221,	// (0x00032210) list_double_pane_vc_t2_ParamLimits

0x3221,	// (0x00032210) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x0003ea46) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x0003ea46) list_double_pane_vc_t

0x05cf,	// (0x0002f5be) list_double_number_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_double_number_pane_vc_g1

0x05db,	// (0x0002f5ca) list_double_number_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_double_number_pane_vc_g

0x3239,	// (0x00032228) list_double_number_pane_vc_t1_ParamLimits

0x3239,	// (0x00032228) list_double_number_pane_vc_t1

0x324b,	// (0x0003223a) list_double_number_pane_vc_t2_ParamLimits

0x324b,	// (0x0003223a) list_double_number_pane_vc_t2

0x325d,	// (0x0003224c) list_double_number_pane_vc_t3_ParamLimits

0x325d,	// (0x0003224c) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0003ea4b) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003ea4b) list_double_number_pane_vc_t

0x3275,	// (0x00032264) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3275,	// (0x00032264) list_double_large_graphic_pane_vc_g1

0x3291,	// (0x00032280) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3291,	// (0x00032280) list_double_large_graphic_pane_vc_g2

0x32a5,	// (0x00032294) list_double_large_graphic_pane_vc_g3_ParamLimits

0x32a5,	// (0x00032294) list_double_large_graphic_pane_vc_g3

0x32b4,	// (0x000322a3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x32b4,	// (0x000322a3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x0003ea52) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x0003ea52) list_double_large_graphic_pane_vc_g

0x32c3,	// (0x000322b2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x32c3,	// (0x000322b2) list_double_large_graphic_pane_vc_t1

0x32dd,	// (0x000322cc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32dd,	// (0x000322cc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003ea5b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003ea5b) list_double_large_graphic_pane_vc_t

0x05cf,	// (0x0002f5be) list_double_heading_pane_vc_g1_ParamLimits

0x05cf,	// (0x0002f5be) list_double_heading_pane_vc_g1

0x05db,	// (0x0002f5ca) list_double_heading_pane_vc_g2_ParamLimits

0x05db,	// (0x0002f5ca) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e5b7) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e5b7) list_double_heading_pane_vc_g

0x32ff,	// (0x000322ee) list_double_heading_pane_vc_t1_ParamLimits

0x32ff,	// (0x000322ee) list_double_heading_pane_vc_t1

0x18ab,	// (0x0003089a) list_double_heading_pane_vc_t2_ParamLimits

0x18ab,	// (0x0003089a) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0003ea60) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0003ea60) list_double_heading_pane_vc_t

0x3313,	// (0x00032302) list_double_graphic_pane_vc_g1_ParamLimits

0x3313,	// (0x00032302) list_double_graphic_pane_vc_g1

0x3326,	// (0x00032315) list_double_graphic_pane_vc_g2_ParamLimits

0x3326,	// (0x00032315) list_double_graphic_pane_vc_g2

0x05cf,	// (0x0002f5be) list_double_graphic_pane_vc_g3_ParamLimits

0x05cf,	// (0x0002f5be) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0003ea65) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0003ea65) list_double_graphic_pane_vc_g

0x3343,	// (0x00032332) list_double_graphic_pane_vc_t1_ParamLimits

0x3343,	// (0x00032332) list_double_graphic_pane_vc_t1

0x3361,	// (0x00032350) list_double_graphic_pane_vc_t2_ParamLimits

0x3361,	// (0x00032350) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003ea6e) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003ea6e) list_double_graphic_pane_vc_t

0x0090,	// (0x0002f07f) aid_size_cell_fastswap

0xb622,	// (0x0003a611) aid_size_cell_touch_ParamLimits

0xb622,	// (0x0003a611) aid_size_cell_touch

0x02fd,	// (0x0002f2ec) popup_fast_swap_wide_window_ParamLimits

0x02fd,	// (0x0002f2ec) popup_fast_swap_wide_window

0xb7d2,	// (0x0003a7c1) touch_pane_ParamLimits

0xb7d2,	// (0x0003a7c1) touch_pane

0x3fbf,	// (0x00032fae) button_value_adjust_pane_cp2

0x099f,	// (0x0002f98e) button_value_adjust_pane_cp4

0x09bf,	// (0x0002f9ae) form_field_data_pane_cp2

0xbbea,	// (0x0003abd9) form_field_data_wide_pane_cp2

0x4437,	// (0x00033426) bg_scroll_pane_ParamLimits

0x0d80,	// (0x0002fd6f) scroll_handle_pane_ParamLimits

0x0d94,	// (0x0002fd83) scroll_sc2_down_pane_ParamLimits

0x0d94,	// (0x0002fd83) scroll_sc2_down_pane

0x4468,	// (0x00033457) scroll_sc2_up_pane_ParamLimits

0x4468,	// (0x00033457) scroll_sc2_up_pane

0xe0f1,	// (0x0003d0e0) grid_wheel_folder_pane_g1_ParamLimits

0xe0f1,	// (0x0003d0e0) grid_wheel_folder_pane_g1

0x0fdc,	// (0x0002ffcb) clock_nsta_pane_cp2_ParamLimits

0x0fdc,	// (0x0002ffcb) clock_nsta_pane_cp2

0x4f75,	// (0x00033f64) listscroll_midp_pane_ParamLimits

0xd593,	// (0x0003c582) midp_canvas_pane

0x4f27,	// (0x00033f16) nsta_clock_indic_pane

0x4f5b,	// (0x00033f4a) listscroll_form_pane_vc

0x4f63,	// (0x00033f52) listscroll_set_pane_vc_ParamLimits

0x4f63,	// (0x00033f52) listscroll_set_pane_vc

0xd81c,	// (0x0003c80b) clock_nsta_pane

0xd846,	// (0x0003c835) indicator_nsta_pane

0x53b1,	// (0x000343a0) bg_popup_sub_pane_cp2_ParamLimits

0x53c5,	// (0x000343b4) find_pane_cp2_ParamLimits

0x53c5,	// (0x000343b4) find_pane_cp2

0x53db,	// (0x000343ca) grid_toobar_pane_ParamLimits

0x54bb,	// (0x000344aa) list_form_gen_pane_vc_ParamLimits

0x54bb,	// (0x000344aa) list_form_gen_pane_vc

0x54d1,	// (0x000344c0) scroll_pane_cp8_vc_ParamLimits

0x54d1,	// (0x000344c0) scroll_pane_cp8_vc

0x554d,	// (0x0003453c) data_form_wide_pane_vc_ParamLimits

0x554d,	// (0x0003453c) data_form_wide_pane_vc

0x5559,	// (0x00034548) form_field_data_wide_pane_vc_g1

0x5561,	// (0x00034550) form_field_data_wide_pane_vc_t1_ParamLimits

0x5561,	// (0x00034550) form_field_data_wide_pane_vc_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_cp6_vc_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_cp6_vc

0xdbcc,	// (0x0003cbbb) list_midp_pane_ParamLimits

0x6b87,	// (0x00035b76) scroll_pane_cp16_ParamLimits

0x6b87,	// (0x00035b76) scroll_pane_cp16

0x58f9,	// (0x000348e8) button_value_adjust_pane_ParamLimits

0x58f9,	// (0x000348e8) button_value_adjust_pane

0xdd7a,	// (0x0003cd69) button_value_adjust_pane_cp6_ParamLimits

0xdd7a,	// (0x0003cd69) button_value_adjust_pane_cp6

0xde90,	// (0x0003ce7f) settings_code_pane_cp_ParamLimits

0xde90,	// (0x0003ce7f) settings_code_pane_cp

0x2e1e,	// (0x00031e0d) cell_touch_pane_g1

0x2e1e,	// (0x00031e0d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003e6f2) cell_touch_pane_g

0xdfdf,	// (0x0003cfce) cell_touch_pane_cp_ParamLimits

0xdfdf,	// (0x0003cfce) cell_touch_pane_cp

0xdffb,	// (0x0003cfea) cell_touch_pane_ParamLimits

0xdffb,	// (0x0003cfea) cell_touch_pane

0x2e1e,	// (0x00031e0d) scroll_sc2_down_pane_g1

0x2e1e,	// (0x00031e0d) scroll_sc2_up_pane_g1

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp4_vc

0x6f15,	// (0x00035f04) list_set_graphic_pane_vc_g1_ParamLimits

0x6f15,	// (0x00035f04) list_set_graphic_pane_vc_g1

0x4a73,	// (0x00033a62) list_set_graphic_pane_vc_g2_ParamLimits

0x4a73,	// (0x00033a62) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0003e9e9) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0003e9e9) list_set_graphic_pane_vc_g

0x6f21,	// (0x00035f10) text_primary_small_cp13_vc_ParamLimits

0x6f21,	// (0x00035f10) text_primary_small_cp13_vc

0x6f39,	// (0x00035f28) list_set_graphic_pane_vc_ParamLimits

0x6f39,	// (0x00035f28) list_set_graphic_pane_vc

0x2e28,	// (0x00031e17) input_focus_pane_cp2_vc

0x2e1e,	// (0x00031e0d) setting_code_pane_vc_g1

0x37c4,	// (0x000327b3) setting_code_pane_vc_t1

0x6f4d,	// (0x00035f3c) set_text_pane_vc_t1_ParamLimits

0x6f4d,	// (0x00035f3c) set_text_pane_vc_t1

0x2e28,	// (0x00031e17) input_focus_pane_cp1_vc

0x6f6a,	// (0x00035f59) list_set_text_pane_vc

0x2e1e,	// (0x00031e0d) setting_text_pane_vc_g1

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp2_vc

0x37bb,	// (0x000327aa) setting_slider_graphic_pane_vc_g1

0x6f74,	// (0x00035f63) setting_slider_graphic_pane_vc_t1

0x6f84,	// (0x00035f73) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0003e9ee) setting_slider_graphic_pane_vc_t

0x6f94,	// (0x00035f83) slider_set_pane_cp_vc

0x6f9c,	// (0x00035f8b) slider_set_pane_vc_g1

0x6fa5,	// (0x00035f94) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0003e9f3) slider_set_pane_vc_g

0x402e,	// (0x0003301d) set_opt_bg_pane_g1_copy1

0x4036,	// (0x00033025) set_opt_bg_pane_g2_copy1

0x6fd1,	// (0x00035fc0) set_opt_bg_pane_g3_copy1

0x4046,	// (0x00033035) set_opt_bg_pane_g4_copy1

0x404e,	// (0x0003303d) set_opt_bg_pane_g5_copy1

0x4056,	// (0x00033045) set_opt_bg_pane_g6_copy1

0x6fd9,	// (0x00035fc8) set_opt_bg_pane_g7_copy1

0x6fe3,	// (0x00035fd2) set_opt_bg_pane_g8_copy1

0x6feb,	// (0x00035fda) set_opt_bg_pane_g9_copy1

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp_vc

0x6ff3,	// (0x00035fe2) setting_slider_pane_vc_t1

0x7002,	// (0x00035ff1) setting_slider_pane_vc_t2

0x7012,	// (0x00036001) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0003ea02) setting_slider_pane_vc_t

0x7022,	// (0x00036011) slider_set_pane_vc

0x1a55,	// (0x00030a44) volume_set_pane_vc_g1

0x1d44,	// (0x00030d33) volume_set_pane_vc_g2

0x1d4d,	// (0x00030d3c) volume_set_pane_vc_g3

0x1d56,	// (0x00030d45) volume_set_pane_vc_g4

0x1d5f,	// (0x00030d4e) volume_set_pane_vc_g5

0x1d68,	// (0x00030d57) volume_set_pane_vc_g6

0x1a82,	// (0x00030a71) volume_set_pane_vc_g7

0x1d71,	// (0x00030d60) volume_set_pane_vc_g8

0x1d7a,	// (0x00030d69) volume_set_pane_vc_g9

0x1d83,	// (0x00030d72) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0003ea09) volume_set_pane_vc_g

0x702a,	// (0x00036019) volume_set_pane_vc

0x7032,	// (0x00036021) button_value_adjust_pane_cp1_vc

0x703c,	// (0x0003602b) list_highlight_pane_cp2_vc

0x7045,	// (0x00036034) list_set_pane_vc_ParamLimits

0x7045,	// (0x00036034) list_set_pane_vc

0x70a3,	// (0x00036092) main_pane_set_vc_t1_ParamLimits

0x70a3,	// (0x00036092) main_pane_set_vc_t1

0x70b8,	// (0x000360a7) main_pane_set_vc_t2_ParamLimits

0x70b8,	// (0x000360a7) main_pane_set_vc_t2

0x70ca,	// (0x000360b9) main_pane_set_vc_t3_ParamLimits

0x70ca,	// (0x000360b9) main_pane_set_vc_t3

0x70dc,	// (0x000360cb) main_pane_set_vc_t4_ParamLimits

0x70dc,	// (0x000360cb) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0003ea1e) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0003ea1e) main_pane_set_vc_t

0x70ee,	// (0x000360dd) setting_code_pane_vc_ParamLimits

0x70ee,	// (0x000360dd) setting_code_pane_vc

0x70fd,	// (0x000360ec) setting_slider_graphic_pane_vc

0x70fd,	// (0x000360ec) setting_slider_pane_vc

0x70fd,	// (0x000360ec) setting_text_pane_vc

0x70fd,	// (0x000360ec) setting_volume_pane_vc

0x7105,	// (0x000360f4) scroll_pane_cp121_vc

0x3fad,	// (0x00032f9c) set_content_pane_vc

0x710d,	// (0x000360fc) button_value_adjust_pane_g1

0x7116,	// (0x00036105) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0003ea73) button_value_adjust_pane_g

0x711f,	// (0x0003610e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x711f,	// (0x0003610e) form_field_slider_wide_pane_vc_t1

0x7133,	// (0x00036122) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7133,	// (0x00036122) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0003ea78) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0003ea78) form_field_slider_wide_pane_vc_t

0x39f4,	// (0x000329e3) input_focus_pane_cp10_vc_ParamLimits

0x39f4,	// (0x000329e3) input_focus_pane_cp10_vc

0x715f,	// (0x0003614e) slider_cont_pane_cp1_vc_ParamLimits

0x715f,	// (0x0003614e) slider_cont_pane_cp1_vc

0x716f,	// (0x0003615e) slider_form_pane_g1_cp2

0x6fa5,	// (0x00035f94) slider_form_pane_g2_cp2

0x719c,	// (0x0003618b) form_field_slider_pane_vc_t3

0x71aa,	// (0x00036199) form_field_slider_pane_vc_t4

0x71b8,	// (0x000361a7) slider_form_pane_vc_ParamLimits

0x71b8,	// (0x000361a7) slider_form_pane_vc

0x71c5,	// (0x000361b4) form_field_slider_pane_vc_t1_ParamLimits

0x71c5,	// (0x000361b4) form_field_slider_pane_vc_t1

0x7133,	// (0x00036122) form_field_slider_pane_vc_t2_ParamLimits

0x7133,	// (0x00036122) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0003ea8a) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0003ea8a) form_field_slider_pane_vc_t

0x39f4,	// (0x000329e3) input_focus_pane_cp9_vc_ParamLimits

0x39f4,	// (0x000329e3) input_focus_pane_cp9_vc

0x71e1,	// (0x000361d0) slider_cont_pane_vc_ParamLimits

0x71e1,	// (0x000361d0) slider_cont_pane_vc

0x71f3,	// (0x000361e2) list_form_graphic_pane_cp_vc_ParamLimits

0x71f3,	// (0x000361e2) list_form_graphic_pane_cp_vc

0x5559,	// (0x00034548) form_field_popup_wide_pane_vc_g1

0x7208,	// (0x000361f7) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7208,	// (0x000361f7) form_field_popup_wide_pane_vc_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_cp8_vc_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_cp8_vc

0x724d,	// (0x0003623c) list_form_wide_pane_vc_ParamLimits

0x724d,	// (0x0003623c) list_form_wide_pane_vc

0x7259,	// (0x00036248) list_form_graphic_pane_vc_g1

0x7261,	// (0x00036250) list_form_graphic_pane_vc_t1_ParamLimits

0x7261,	// (0x00036250) list_form_graphic_pane_vc_t1

0x3779,	// (0x00032768) list_highlight_pane_cp5_vc_ParamLimits

0x3779,	// (0x00032768) list_highlight_pane_cp5_vc

0x727d,	// (0x0003626c) list_form_graphic_pane_vc_ParamLimits

0x727d,	// (0x0003626c) list_form_graphic_pane_vc

0x5559,	// (0x00034548) form_field_popup_pane_vc_g1

0x7293,	// (0x00036282) form_field_popup_pane_vc_t1_ParamLimits

0x7293,	// (0x00036282) form_field_popup_pane_vc_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_cp7_vc_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_cp7_vc

0x72aa,	// (0x00036299) list_form_pane_vc_ParamLimits

0x72aa,	// (0x00036299) list_form_pane_vc

0x72b6,	// (0x000362a5) data_form_pane_vc_t1_ParamLimits

0x72b6,	// (0x000362a5) data_form_pane_vc_t1

0x402e,	// (0x0003301d) input_focus_pane_vc_g1

0x4036,	// (0x00033025) input_focus_pane_vc_g2

0x403e,	// (0x0003302d) input_focus_pane_vc_g3

0x4046,	// (0x00033035) input_focus_pane_vc_g4

0x404e,	// (0x0003303d) input_focus_pane_vc_g5

0x4056,	// (0x00033045) input_focus_pane_vc_g6

0x405e,	// (0x0003304d) input_focus_pane_vc_g7

0x4066,	// (0x00033055) input_focus_pane_vc_g8

0x406e,	// (0x0003305d) input_focus_pane_vc_g9

0x2e1e,	// (0x00031e0d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003e67b) input_focus_pane_vc_g

0x554d,	// (0x0003453c) data_form_pane_vc_ParamLimits

0x554d,	// (0x0003453c) data_form_pane_vc

0x5559,	// (0x00034548) form_field_data_pane_vc_g1

0x72d1,	// (0x000362c0) form_field_data_pane_vc_t1_ParamLimits

0x72d1,	// (0x000362c0) form_field_data_pane_vc_t1

0x3fd3,	// (0x00032fc2) input_focus_pane_vc_ParamLimits

0x3fd3,	// (0x00032fc2) input_focus_pane_vc

0x72eb,	// (0x000362da) button_value_adjust_pane_cp3_vc

0x72f3,	// (0x000362e2) button_value_adjust_pane_cp5_vc

0x72fb,	// (0x000362ea) form_field_data_pane_vc_ParamLimits

0x72fb,	// (0x000362ea) form_field_data_pane_vc

0x7312,	// (0x00036301) form_field_data_pane_vc_cp2

0x731a,	// (0x00036309) form_field_data_wide_pane_vc_ParamLimits

0x731a,	// (0x00036309) form_field_data_wide_pane_vc

0x7330,	// (0x0003631f) form_field_data_wide_pane_vc_cp2

0x7338,	// (0x00036327) form_field_popup_pane_vc_ParamLimits

0x7338,	// (0x00036327) form_field_popup_pane_vc

0x734f,	// (0x0003633e) form_field_popup_wide_pane_vc_ParamLimits

0x734f,	// (0x0003633e) form_field_popup_wide_pane_vc

0x7365,	// (0x00036354) form_field_slider_pane_vc_ParamLimits

0x7365,	// (0x00036354) form_field_slider_pane_vc

0x7378,	// (0x00036367) form_field_slider_wide_pane_vc_ParamLimits

0x7378,	// (0x00036367) form_field_slider_wide_pane_vc

0xe019,	// (0x0003d008) grid_touch_1_pane_ParamLimits

0xe019,	// (0x0003d008) grid_touch_1_pane

0xe02d,	// (0x0003d01c) grid_touch_2_pane_ParamLimits

0xe02d,	// (0x0003d01c) grid_touch_2_pane

0x7446,	// (0x00036435) touch_pane_g1_ParamLimits

0x7446,	// (0x00036435) touch_pane_g1

0x73af,	// (0x0003639e) cell_app_pane_cp_wide_ParamLimits

0x73af,	// (0x0003639e) cell_app_pane_cp_wide

0x73c0,	// (0x000363af) grid_popup_fast_wide_pane_ParamLimits

0x73c0,	// (0x000363af) grid_popup_fast_wide_pane

0x73d4,	// (0x000363c3) scroll_pane_cp19_ParamLimits

0x73d4,	// (0x000363c3) scroll_pane_cp19

0x2e28,	// (0x00031e17) bg_popup_window_pane_cp20

0x73e8,	// (0x000363d7) listscroll_popup_fast_wide_pane

0x4194,	// (0x00033183) grid_indicator_nsta_pane

0x73f0,	// (0x000363df) clock_nsta_pane_g1

0x73f9,	// (0x000363e8) clock_nsta_pane_t1

0xe057,	// (0x0003d046) cell_indicator_nsta_pane_ParamLimits

0xe057,	// (0x0003d046) cell_indicator_nsta_pane

0x7446,	// (0x00036435) cell_indicator_nsta_pane_g1

0xe06e,	// (0x0003d05d) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0003ea9b) cell_indicator_nsta_pane_g

0x7461,	// (0x00036450) clock_nsta_pane_cp

0x7469,	// (0x00036458) indicator_nsta_pane_cp

0x7471,	// (0x00036460) nsta_clock_indic_pane_g1

0x3842,	// (0x00032831) grid_indicator_pane

0x455d,	// (0x0003354c) scroll_pane_cp29

0x0f2b,	// (0x0002ff1a) indicator_nsta_pane_cp2_ParamLimits

0x0f2b,	// (0x0002ff1a) indicator_nsta_pane_cp2

0x3779,	// (0x00032768) main_apps_wheel_pane

0x5784,	// (0x00034773) form_midp_field_text_pane_ParamLimits

0x58cb,	// (0x000348ba) scroll_bar_cp050_ParamLimits

0x74d2,	// (0x000364c1) cell_indicator_pane_ParamLimits

0x74d2,	// (0x000364c1) cell_indicator_pane

0x74ed,	// (0x000364dc) cell_indicator_pane_g1

0xe07b,	// (0x0003d06a) grid_wheel_folder_pane_ParamLimits

0xe07b,	// (0x0003d06a) grid_wheel_folder_pane

0xe089,	// (0x0003d078) list_wheel_apps_pane_ParamLimits

0xe089,	// (0x0003d078) list_wheel_apps_pane

0xe097,	// (0x0003d086) main_apps_wheel_pane_g1_ParamLimits

0xe097,	// (0x0003d086) main_apps_wheel_pane_g1

0xe0a3,	// (0x0003d092) main_apps_wheel_pane_g2_ParamLimits

0xe0a3,	// (0x0003d092) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0003eab7) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0003eab7) main_apps_wheel_pane_g

0xe0b1,	// (0x0003d0a0) main_apps_wheel_pane_t1_ParamLimits

0xe0b1,	// (0x0003d0a0) main_apps_wheel_pane_t1

0xe0c5,	// (0x0003d0b4) list_wheel_apps_pane_g1

0xe0cd,	// (0x0003d0bc) list_wheel_apps_pane_g2

0xe0d5,	// (0x0003d0c4) list_wheel_apps_pane_g3

0xe0dd,	// (0x0003d0cc) list_wheel_apps_pane_g4

0xe0e7,	// (0x0003d0d6) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0003eabc) list_wheel_apps_pane_g

0x4ac7,	// (0x00033ab6) navi_icon_text_pane

0xd710,	// (0x0003c6ff) aid_fill_nsta

0x75b4,	// (0x000365a3) navi_icon_text_pane_g1

0x75c0,	// (0x000365af) navi_icon_text_pane_t1

0xd572,	// (0x0003c561) list_set_graphic_pane_t1_ParamLimits

0xd572,	// (0x0003c561) list_set_graphic_pane_t1

0x601d,	// (0x0003500c) popup_midp_note_alarm_window_t6_ParamLimits

0x601d,	// (0x0003500c) popup_midp_note_alarm_window_t6

0x602f,	// (0x0003501e) popup_midp_note_alarm_window_t7_ParamLimits

0x602f,	// (0x0003501e) popup_midp_note_alarm_window_t7

0x6041,	// (0x00035030) popup_midp_note_alarm_window_t8_ParamLimits

0x6041,	// (0x00035030) popup_midp_note_alarm_window_t8

0x6053,	// (0x00035042) popup_midp_note_alarm_window_t9_ParamLimits

0x6053,	// (0x00035042) popup_midp_note_alarm_window_t9

0x6065,	// (0x00035054) popup_midp_note_alarm_window_t10_ParamLimits

0x6065,	// (0x00035054) popup_midp_note_alarm_window_t10

0x6077,	// (0x00035066) popup_midp_note_alarm_window_t11_ParamLimits

0x6077,	// (0x00035066) popup_midp_note_alarm_window_t11

0x6089,	// (0x00035078) scroll_pane_cp17_ParamLimits

0x6089,	// (0x00035078) scroll_pane_cp17

0x1a55,	// (0x00030a44) volume_small_pane_cp_g1

0x1d8c,	// (0x00030d7b) volume_small_pane_cp_g2

0x1d95,	// (0x00030d84) volume_small_pane_cp_g3

0x1a67,	// (0x00030a56) volume_small_pane_cp_g4

0x1d9e,	// (0x00030d8d) volume_small_pane_cp_g5

0x1d5f,	// (0x00030d4e) volume_small_pane_cp_g6

0x1a79,	// (0x00030a68) volume_small_pane_cp_g7

0x1da7,	// (0x00030d96) volume_small_pane_cp_g8

0x1db0,	// (0x00030d9f) volume_small_pane_cp_g9

0x1a8b,	// (0x00030a7a) volume_small_pane_cp_g10

0x4d10,	// (0x00033cff) midp_ticker_pane_g1_ParamLimits

0x4d1c,	// (0x00033d0b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003e747) midp_ticker_pane_g_ParamLimits

0x4d28,	// (0x00033d17) midp_ticker_pane_t1_ParamLimits

0xd734,	// (0x0003c723) aid_fill_nsta_2

0x58b7,	// (0x000348a6) list_form2_midp_pane

0x69d5,	// (0x000359c4) midp_editing_number_pane_ParamLimits

0x69e4,	// (0x000359d3) midp_ticker_pane_ParamLimits

0x75d2,	// (0x000365c1) form2_midp_field_pane

0x75f6,	// (0x000365e5) scroll_pane_cp51

0x7616,	// (0x00036605) form2_midp_button_pane_ParamLimits

0x7616,	// (0x00036605) form2_midp_button_pane

0x7628,	// (0x00036617) form2_midp_content_pane_ParamLimits

0x7628,	// (0x00036617) form2_midp_content_pane

0x7642,	// (0x00036631) form2_midp_field_choice_group_pane

0x764a,	// (0x00036639) form2_midp_field_pane_g1

0x7652,	// (0x00036641) form2_midp_field_pane_g2

0x765a,	// (0x00036649) form2_midp_field_pane_g3

0x7662,	// (0x00036651) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0003eae1) form2_midp_field_pane_g

0x766a,	// (0x00036659) form2_midp_gauge_slider_pane

0x7672,	// (0x00036661) form2_midp_gauge_wait_pane

0x767a,	// (0x00036669) form2_midp_image_pane_ParamLimits

0x767a,	// (0x00036669) form2_midp_image_pane

0x7695,	// (0x00036684) form2_midp_label_pane_ParamLimits

0x7695,	// (0x00036684) form2_midp_label_pane

0xe11a,	// (0x0003d109) form2_midp_label_pane_cp_ParamLimits

0xe11a,	// (0x0003d109) form2_midp_label_pane_cp

0x76cf,	// (0x000366be) form2_midp_string_pane_ParamLimits

0x76cf,	// (0x000366be) form2_midp_string_pane

0x338b,	// (0x0003237a) form2_midp_text_pane_ParamLimits

0x338b,	// (0x0003237a) form2_midp_text_pane

0x76e1,	// (0x000366d0) form2_midp_time_pane

0x76f1,	// (0x000366e0) input_focus_pane_cp51_ParamLimits

0x76f1,	// (0x000366e0) input_focus_pane_cp51

0x7709,	// (0x000366f8) form2_midp_label_pane_t1_ParamLimits

0x7709,	// (0x000366f8) form2_midp_label_pane_t1

0x33a4,	// (0x00032393) form2_mdip_text_pane_t1_ParamLimits

0x33a4,	// (0x00032393) form2_mdip_text_pane_t1

0x33c2,	// (0x000323b1) form2_midp_time_pane_t1

0x7751,	// (0x00036740) form2_midp_gauge_slider_pane_t1

0xe13b,	// (0x0003d12a) form2_midp_gauge_slider_pane_t2

0xe14f,	// (0x0003d13e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0003eaea) form2_midp_gauge_slider_pane_t

0x7787,	// (0x00036776) form2_midp_slider_pane

0x7793,	// (0x00036782) form2_midp_gauge_wait_pane_t1

0x77a1,	// (0x00036790) form2_midp_wait_pane_ParamLimits

0x77a1,	// (0x00036790) form2_midp_wait_pane

0xe163,	// (0x0003d152) list_single_2graphic_pane_cp4_ParamLimits

0xe163,	// (0x0003d152) list_single_2graphic_pane_cp4

0xdb52,	// (0x0003cb41) list_single_midp_graphic_pane_cp_ParamLimits

0xdb52,	// (0x0003cb41) list_single_midp_graphic_pane_cp

0x2e28,	// (0x00031e17) list_highlight_pane_cp20

0x77fb,	// (0x000367ea) list_single_2graphic_pane_g1_cp4

0x6df9,	// (0x00035de8) list_single_2graphic_pane_g2_cp4

0x7803,	// (0x000367f2) list_single_2graphic_pane_t1_cp4

0x3779,	// (0x00032768) list_highlight_pane_cp21

0x7812,	// (0x00036801) list_single_midp_graphic_pane_g4_cp

0x7821,	// (0x00036810) list_single_midp_graphic_pane_t1_cp

0xe179,	// (0x0003d168) form2_mdip_string_pane_t1_ParamLimits

0xe179,	// (0x0003d168) form2_mdip_string_pane_t1

0x2e28,	// (0x00031e17) bg_wml_button_pane_cp2

0x2e1e,	// (0x00031e0d) form2_midp_image_pane_g1

0x0796,	// (0x0002f785) list_double_large_graphic_pane_g5_ParamLimits

0x0796,	// (0x0002f785) list_double_large_graphic_pane_g5

0x4f75,	// (0x00033f64) midp_form_pane_ParamLimits

0x3779,	// (0x00032768) main_apps_wheel_pane_ParamLimits

0xc355,	// (0x0003b344) popup_preview_window_ParamLimits

0xc355,	// (0x0003b344) popup_preview_window

0x17b3,	// (0x000307a2) popup_touch_info_window_ParamLimits

0x17b3,	// (0x000307a2) popup_touch_info_window

0x17d1,	// (0x000307c0) popup_touch_menu_window_ParamLimits

0x17d1,	// (0x000307c0) popup_touch_menu_window

0x2e14,	// (0x00031e03) bg_popup_sub_pane_cp6

0x7959,	// (0x00036948) list_touch_menu_pane

0x7961,	// (0x00036950) list_single_touch_menu_pane_ParamLimits

0x7961,	// (0x00036950) list_single_touch_menu_pane

0x7975,	// (0x00036964) list_single_touch_menu_pane_t1

0x3779,	// (0x00032768) bg_popup_sub_pane_cp7_ParamLimits

0x3779,	// (0x00032768) bg_popup_sub_pane_cp7

0x7983,	// (0x00036972) heading_sub_pane

0x798b,	// (0x0003697a) list_touch_info_pane_ParamLimits

0x798b,	// (0x0003697a) list_touch_info_pane

0x799a,	// (0x00036989) list_single_touch_info_pane_ParamLimits

0x799a,	// (0x00036989) list_single_touch_info_pane

0x79ac,	// (0x0003699b) list_single_touch_info_pane_t1

0x79ba,	// (0x000369a9) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0003eaf8) list_single_touch_info_pane_t

0x4c3b,	// (0x00033c2a) bg_popup_heading_pane_cp

0x79c8,	// (0x000369b7) heading_sub_pane_t1

0x54e7,	// (0x000344d6) bg_popup_preview_window_pane_cp_ParamLimits

0x54e7,	// (0x000344d6) bg_popup_preview_window_pane_cp

0x7983,	// (0x00036972) heading_preview_pane

0x798b,	// (0x0003697a) list_preview_pane_ParamLimits

0x798b,	// (0x0003697a) list_preview_pane

0x79d6,	// (0x000369c5) popup_preview_window_g1

0x799a,	// (0x00036989) list_single_preview_pane_ParamLimits

0x799a,	// (0x00036989) list_single_preview_pane

0x79de,	// (0x000369cd) list_single_preview_pane_g1

0x79e6,	// (0x000369d5) list_single_preview_pane_t1

0x79ac,	// (0x0003699b) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0003eafd) list_single_preview_pane_t

0x79f4,	// (0x000369e3) bg_popup_heading_pane_cp2_ParamLimits

0x79f4,	// (0x000369e3) bg_popup_heading_pane_cp2

0x7a0a,	// (0x000369f9) heading_preview_pane_g1

0x7a12,	// (0x00036a01) heading_preview_pane_t1_ParamLimits

0x7a12,	// (0x00036a01) heading_preview_pane_t1

0x3865,	// (0x00032854) soft_indicator_pane_t1_ParamLimits

0x3f46,	// (0x00032f35) scroll_pane_ParamLimits

0x4456,	// (0x00033445) scroll_sc2_left_pane

0x445f,	// (0x0003344e) scroll_sc2_right_pane

0x447e,	// (0x0003346d) scroll_bg_pane_g1_ParamLimits

0x4493,	// (0x00033482) scroll_bg_pane_g2_ParamLimits

0x44ab,	// (0x0003349a) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003e6d2) scroll_bg_pane_g_ParamLimits

0x447e,	// (0x0003346d) scroll_handle_pane_g1_ParamLimits

0x44cd,	// (0x000334bc) scroll_handle_pane_g2_ParamLimits

0x44ab,	// (0x0003349a) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003e6d9) scroll_handle_pane_g_ParamLimits

0x1283,	// (0x00030272) popup_choice_list_window_ParamLimits

0x1283,	// (0x00030272) popup_choice_list_window

0x53bd,	// (0x000343ac) choice_list_pane

0x543f,	// (0x0003442e) cell_toolbar_pane_t1

0x5467,	// (0x00034456) toolbar_button_pane_ParamLimits

0x6543,	// (0x00035532) ai_gene_pane_1_t2_ParamLimits

0x6543,	// (0x00035532) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003e8fc) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003e8fc) ai_gene_pane_1_t

0x7a2f,	// (0x00036a1e) scroll_sc2_left_pane_g1

0x7a2f,	// (0x00036a1e) scroll_sc2_right_pane_g1

0x4f75,	// (0x00033f64) bg_popup_sub_pane_cp10

0x7a39,	// (0x00036a28) list_choice_list_pane

0x7a52,	// (0x00036a41) list_single_choice_list_pane_ParamLimits

0x7a52,	// (0x00036a41) list_single_choice_list_pane

0x7a65,	// (0x00036a54) list_single_choice_list_pane_g1

0x4165,	// (0x00033154) list_single_choice_list_pane_t1_ParamLimits

0x4165,	// (0x00033154) list_single_choice_list_pane_t1

0x7a6d,	// (0x00036a5c) choice_list_pane_g1

0x7a75,	// (0x00036a64) choice_list_pane_t1

0x2e14,	// (0x00031e03) input_focus_pane_cp11

0x4339,	// (0x00033328) title_pane_stacon_g2_ParamLimits

0x4339,	// (0x00033328) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003e6b8) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e6b8) title_pane_stacon_g

0x4c3b,	// (0x00033c2a) cursor_press_pane

0xc00e,	// (0x0003affd) popup_fep_hwr_window_ParamLimits

0xc00e,	// (0x0003affd) popup_fep_hwr_window

0x13a3,	// (0x00030392) popup_fep_vkb_window_ParamLimits

0x13a3,	// (0x00030392) popup_fep_vkb_window

0x7a83,	// (0x00036a72) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0003eb26) fep_vkb_side_pane_g_ParamLimits

0x1df2,	// (0x00030de1) fep_hwr_candidate_pane_ParamLimits

0x1df2,	// (0x00030de1) fep_hwr_candidate_pane

0x1e1c,	// (0x00030e0b) fep_hwr_side_pane_ParamLimits

0x1e1c,	// (0x00030e0b) fep_hwr_side_pane

0x1e3c,	// (0x00030e2b) fep_hwr_top_pane_ParamLimits

0x1e3c,	// (0x00030e2b) fep_hwr_top_pane

0x1e54,	// (0x00030e43) fep_hwr_write_pane_ParamLimits

0x1e54,	// (0x00030e43) fep_hwr_write_pane

0xfb37,	// (0x0003eb26) fep_vkb_side_pane_g

0x7a8b,	// (0x00036a7a) fep_hwr_top_pane_g1

0x7a9d,	// (0x00036a8c) fep_hwr_top_pane_g2

0x1e8e,	// (0x00030e7d) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0003eb02) fep_hwr_top_pane_g

0x1ea3,	// (0x00030e92) fep_hwr_top_text_pane

0x4623,	// (0x00033612) fep_hwr_top_text_pane_g1

0x7ad3,	// (0x00036ac2) fep_hwr_top_text_pane_t1

0x1f99,	// (0x00030f88) fep_hwr_candidate_pane_g1

0x7d16,	// (0x00036d05) fep_vkb_keypad_pane_g3_ParamLimits

0x7d16,	// (0x00036d05) fep_vkb_keypad_pane_g3

0x7d3e,	// (0x00036d2d) fep_vkb_keypad_pane_g4_ParamLimits

0x7d3e,	// (0x00036d2d) fep_vkb_keypad_pane_g4

0x7dad,	// (0x00036d9c) fep_vkb_bottom_pane_g2_ParamLimits

0x7dad,	// (0x00036d9c) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0003eb2d) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0003eb2d) fep_vkb_bottom_pane_g

0x7a2f,	// (0x00036a1e) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0003eb37) cell_vkb_side_pane_g

0x7e38,	// (0x00036e27) cell_vkb_side_pane_t1

0x7e46,	// (0x00036e35) cell_vkb_side_pane_t1_copy1

0x7a2f,	// (0x00036a1e) bg_fep_vkb_candidate_pane_g2

0x7f72,	// (0x00036f61) cell_vkb_candidate_pane_ParamLimits

0x7ae1,	// (0x00036ad0) aid_size_cell_vkb_ParamLimits

0x7ae1,	// (0x00036ad0) aid_size_cell_vkb

0x7f72,	// (0x00036f61) cell_vkb_candidate_pane

0x1fc0,	// (0x00030faf) bg_popup_fep_shadow_pane_g1

0xe209,	// (0x0003d1f8) fep_vkb_bottom_pane_ParamLimits

0xe209,	// (0x0003d1f8) fep_vkb_bottom_pane

0x7ba3,	// (0x00036b92) fep_vkb_candidate_pane_ParamLimits

0x7ba3,	// (0x00036b92) fep_vkb_candidate_pane

0xe22e,	// (0x0003d21d) fep_vkb_keypad_pane_ParamLimits

0xe22e,	// (0x0003d21d) fep_vkb_keypad_pane

0xe263,	// (0x0003d252) fep_vkb_side_pane_ParamLimits

0xe263,	// (0x0003d252) fep_vkb_side_pane

0xe29f,	// (0x0003d28e) fep_vkb_top_pane_ParamLimits

0xe29f,	// (0x0003d28e) fep_vkb_top_pane

0x7c6f,	// (0x00036c5e) fep_vkb_top_pane_g1_ParamLimits

0x7c6f,	// (0x00036c5e) fep_vkb_top_pane_g1

0x7c7e,	// (0x00036c6d) fep_vkb_top_pane_g2_ParamLimits

0x7c7e,	// (0x00036c6d) fep_vkb_top_pane_g2

0x7c8d,	// (0x00036c7c) fep_vkb_top_pane_g3_ParamLimits

0x7c8d,	// (0x00036c7c) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0003eb1d) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0003eb1d) fep_vkb_top_pane_g

0x7cab,	// (0x00036c9a) fep_vkb_top_text_pane_ParamLimits

0x7cab,	// (0x00036c9a) fep_vkb_top_text_pane

0xe2d4,	// (0x0003d2c3) fep_vkb_side_pane_g1_ParamLimits

0xe2d4,	// (0x0003d2c3) fep_vkb_side_pane_g1

0x7d05,	// (0x00036cf4) grid_vkb_side_pane_ParamLimits

0x7d05,	// (0x00036cf4) grid_vkb_side_pane

0x1fc8,	// (0x00030fb7) bg_popup_fep_shadow_pane_g2

0x1fd1,	// (0x00030fc0) bg_popup_fep_shadow_pane_g3

0x1fd9,	// (0x00030fc8) bg_popup_fep_shadow_pane_g4

0x1fe2,	// (0x00030fd1) bg_popup_fep_shadow_pane_g5

0x1fec,	// (0x00030fdb) bg_popup_fep_shadow_pane_g6

0x1ff4,	// (0x00030fe3) bg_popup_fep_shadow_pane_g7

0x4046,	// (0x00033035) bg_popup_fep_shadow_pane_g8

0x7d5c,	// (0x00036d4b) grid_vkb_keypad_number_pane_ParamLimits

0x7d5c,	// (0x00036d4b) grid_vkb_keypad_number_pane

0x7d6c,	// (0x00036d5b) grid_vkb_keypad_pane_ParamLimits

0x7d6c,	// (0x00036d5b) grid_vkb_keypad_pane

0x7d92,	// (0x00036d81) fep_vkb_bottom_pane_g1_ParamLimits

0x7d92,	// (0x00036d81) fep_vkb_bottom_pane_g1

0x7dbb,	// (0x00036daa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7dbb,	// (0x00036daa) grid_vkb_keypad_bottom_left_pane

0x7dd0,	// (0x00036dbf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7dd0,	// (0x00036dbf) grid_vkb_keypad_bottom_right_pane

0x7de5,	// (0x00036dd4) fep_vkb_top_text_pane_g1

0xe31b,	// (0x0003d30a) fep_vkb_top_text_pane_t1

0xe32d,	// (0x0003d31c) cell_vkb_side_pane_ParamLimits

0xe32d,	// (0x0003d31c) cell_vkb_side_pane

0x7a2f,	// (0x00036a1e) cell_vkb_side_pane_g1

0x7e54,	// (0x00036e43) cell_vkb_keypad_pane_ParamLimits

0x7e54,	// (0x00036e43) cell_vkb_keypad_pane

0x7ec9,	// (0x00036eb8) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0003eb4a) bg_popup_fep_shadow_pane_g

0x2006,	// (0x00030ff5) cell_hwr_side_pane_g1

0x2006,	// (0x00030ff5) cell_hwr_side_pane_g2

0x7ed3,	// (0x00036ec2) cell_vkb_keypad_pane_t1

0xe343,	// (0x0003d332) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe343,	// (0x0003d332) cell_vkb_keypad_bottom_left_pane

0xe358,	// (0x0003d347) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe358,	// (0x0003d347) cell_vkb_keypad_bottom_right_pane

0x7a2f,	// (0x00036a1e) cell_vkb_keypad_bottom_left_pane_g1

0x7a2f,	// (0x00036a1e) cell_vkb_keypad_bottom_right_pane_g1

0x7f37,	// (0x00036f26) cell_vkb_keypad_number_pane_ParamLimits

0x7f37,	// (0x00036f26) cell_vkb_keypad_number_pane

0x7f56,	// (0x00036f45) cell_vkb_keypad_number_pane_g1

0x7f60,	// (0x00036f4f) cell_vkb_keypad_number_pane_g2

0x7f69,	// (0x00036f58) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0003eb3c) cell_vkb_keypad_number_pane_g

0x7ed3,	// (0x00036ec2) cell_vkb_keypad_number_pane_t1

0x7f8d,	// (0x00036f7c) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0003eb5d) cell_hwr_side_pane_g

0x7fa6,	// (0x00036f95) cell_hwr_side_pane_t1

0x2010,	// (0x00030fff) cell_hwr_side_pane_t1_copy1

0x201e,	// (0x0003100d) cell_hwr_candidate_pane_g1

0x204d,	// (0x0003103c) cell_hwr_candidate_pane_t1

0x7a2f,	// (0x00036a1e) cell_vkb_candidate_pane_g2

0x7fea,	// (0x00036fd9) cell_vkb_candidate_pane_t1

0x1db9,	// (0x00030da8) bg_popup_fep_shadow_pane_ParamLimits

0x1db9,	// (0x00030da8) bg_popup_fep_shadow_pane

0x1e6e,	// (0x00030e5d) bg_fep_hwr_top_pane_g4

0x7aaf,	// (0x00036a9e) bg_hwr_side_pane_g1_ParamLimits

0x7aaf,	// (0x00036a9e) bg_hwr_side_pane_g1

0xc7f9,	// (0x0003b7e8) cell_hwr_side_pane_ParamLimits

0xc7f9,	// (0x0003b7e8) cell_hwr_side_pane

0x1f1a,	// (0x00030f09) fep_hwr_write_pane_g1_ParamLimits

0x1f1a,	// (0x00030f09) fep_hwr_write_pane_g1

0x1f27,	// (0x00030f16) fep_hwr_write_pane_g2_ParamLimits

0x1f27,	// (0x00030f16) fep_hwr_write_pane_g2

0x1f34,	// (0x00030f23) fep_hwr_write_pane_g3_ParamLimits

0x1f34,	// (0x00030f23) fep_hwr_write_pane_g3

0xc819,	// (0x0003b808) fep_hwr_write_pane_g4_ParamLimits

0xc819,	// (0x0003b808) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0003eb09) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0003eb09) fep_hwr_write_pane_g

0x1e6e,	// (0x00030e5d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e6e,	// (0x00030e5d) bg_fep_hwr_candidate_pane_g2

0x1f57,	// (0x00030f46) cell_hwr_candidate_pane_ParamLimits

0x1f57,	// (0x00030f46) cell_hwr_candidate_pane

0x1f99,	// (0x00030f88) fep_hwr_candidate_pane_g1_ParamLimits

0x7b0f,	// (0x00036afe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b0f,	// (0x00036afe) bg_popup_fep_shadow_pane_cp2

0x7c9d,	// (0x00036c8c) fep_vkb_top_pane_g4_ParamLimits

0x7c9d,	// (0x00036c8c) fep_vkb_top_pane_g4

0x7ce3,	// (0x00036cd2) fep_vkb_side_pane_g2_ParamLimits

0x7ce3,	// (0x00036cd2) fep_vkb_side_pane_g2

0xbb10,	// (0x0003aaff) list_setting_pane_t4_ParamLimits

0xbb10,	// (0x0003aaff) list_setting_pane_t4

0xbb92,	// (0x0003ab81) list_setting_number_pane_t5_ParamLimits

0xbb92,	// (0x0003ab81) list_setting_number_pane_t5

0xd482,	// (0x0003c471) list_double_heading_pane_cp2_ParamLimits

0xd482,	// (0x0003c471) list_double_heading_pane_cp2

0x3fe1,	// (0x00032fd0) list_double_heading_pane_g1_cp2_ParamLimits

0x3fe1,	// (0x00032fd0) list_double_heading_pane_g1_cp2

0x3fed,	// (0x00032fdc) list_double_heading_pane_g2_cp2_ParamLimits

0x3fed,	// (0x00032fdc) list_double_heading_pane_g2_cp2

0x7ff8,	// (0x00036fe7) list_double_heading_pane_t1_cp2_ParamLimits

0x7ff8,	// (0x00036fe7) list_double_heading_pane_t1_cp2

0x800e,	// (0x00036ffd) list_double_heading_pane_t2_cp2_ParamLimits

0x800e,	// (0x00036ffd) list_double_heading_pane_t2_cp2

0x2dfc,	// (0x00031deb) aid_value_unit2

0x0349,	// (0x0002f338) popup_preview_fixed_window

0x3a02,	// (0x000329f1) bg_popup_preview_window_pane_cp02

0x8020,	// (0x0003700f) list_preview_fixed_pane

0x8066,	// (0x00037055) list_empty_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_empty_pane_fp

0x8066,	// (0x00037055) list_single_cale_day_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_cale_day_pane_fp

0x8066,	// (0x00037055) list_single_graphic_heading_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_graphic_heading_pane_fp

0x8066,	// (0x00037055) list_single_graphic_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_graphic_pane_fp

0x8066,	// (0x00037055) list_single_heading_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_heading_pane_fp

0x8066,	// (0x00037055) list_single_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_pane_fp

0x807c,	// (0x0003706b) list_single_pane_fp_g1_ParamLimits

0x807c,	// (0x0003706b) list_single_pane_fp_g1

0x0605,	// (0x0002f5f4) list_single_pane_fp_g2_ParamLimits

0x0605,	// (0x0002f5f4) list_single_pane_fp_g2

0x33d5,	// (0x000323c4) list_single_pane_fp_g3_ParamLimits

0x33d5,	// (0x000323c4) list_single_pane_fp_g3

0x8088,	// (0x00037077) list_single_pane_fp_g4_ParamLimits

0x8088,	// (0x00037077) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0003eb70) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0003eb70) list_single_pane_fp_g

0x33e9,	// (0x000323d8) list_single_pane_fp_t1_ParamLimits

0x33e9,	// (0x000323d8) list_single_pane_fp_t1

0x3400,	// (0x000323ef) list_single_graphic_pane_fp_g1_ParamLimits

0x3400,	// (0x000323ef) list_single_graphic_pane_fp_g1

0x807c,	// (0x0003706b) list_single_graphic_pane_fp_g2_ParamLimits

0x807c,	// (0x0003706b) list_single_graphic_pane_fp_g2

0x0605,	// (0x0002f5f4) list_single_graphic_pane_fp_g3_ParamLimits

0x0605,	// (0x0002f5f4) list_single_graphic_pane_fp_g3

0x33d5,	// (0x000323c4) list_single_graphic_pane_fp_g4_ParamLimits

0x33d5,	// (0x000323c4) list_single_graphic_pane_fp_g4

0x8088,	// (0x00037077) list_single_graphic_pane_fp_g5_ParamLimits

0x8088,	// (0x00037077) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb79) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb79) list_single_graphic_pane_fp_g

0x340c,	// (0x000323fb) list_single_graphic_pane_fp_t1_ParamLimits

0x340c,	// (0x000323fb) list_single_graphic_pane_fp_t1

0x3400,	// (0x000323ef) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3400,	// (0x000323ef) list_single_graphic_heading_pane_fp_g1

0x807c,	// (0x0003706b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x807c,	// (0x0003706b) list_single_graphic_heading_pane_fp_g2

0x0605,	// (0x0002f5f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0605,	// (0x0002f5f4) list_single_graphic_heading_pane_fp_g3

0x33d5,	// (0x000323c4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x33d5,	// (0x000323c4) list_single_graphic_heading_pane_fp_g4

0x8088,	// (0x00037077) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8088,	// (0x00037077) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb79) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb79) list_single_graphic_heading_pane_fp_g

0x3422,	// (0x00032411) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3422,	// (0x00032411) list_single_graphic_heading_pane_fp_t1

0x3438,	// (0x00032427) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3438,	// (0x00032427) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0003eb84) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0003eb84) list_single_graphic_heading_pane_fp_t

0x344a,	// (0x00032439) list_single_cale_day_pane_fp_g1_ParamLimits

0x344a,	// (0x00032439) list_single_cale_day_pane_fp_g1

0x8094,	// (0x00037083) list_single_cale_day_pane_fp_g2_ParamLimits

0x8094,	// (0x00037083) list_single_cale_day_pane_fp_g2

0x3482,	// (0x00032471) list_single_cale_day_pane_fp_g3_ParamLimits

0x3482,	// (0x00032471) list_single_cale_day_pane_fp_g3

0x34aa,	// (0x00032499) list_single_cale_day_pane_fp_g4_ParamLimits

0x34aa,	// (0x00032499) list_single_cale_day_pane_fp_g4

0x34ce,	// (0x000324bd) list_single_cale_day_pane_fp_g5_ParamLimits

0x34ce,	// (0x000324bd) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0003eb89) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0003eb89) list_single_cale_day_pane_fp_g

0x34f2,	// (0x000324e1) list_single_cale_day_pane_fp_t1_ParamLimits

0x34f2,	// (0x000324e1) list_single_cale_day_pane_fp_t1

0x3518,	// (0x00032507) list_single_cale_day_pane_fp_t2_ParamLimits

0x3518,	// (0x00032507) list_single_cale_day_pane_fp_t2

0x3531,	// (0x00032520) list_single_cale_day_pane_fp_t3_ParamLimits

0x3531,	// (0x00032520) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0003eb94) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0003eb94) list_single_cale_day_pane_fp_t

0x807c,	// (0x0003706b) list_empty_pane_fp_g1_ParamLimits

0x807c,	// (0x0003706b) list_empty_pane_fp_g1

0x354a,	// (0x00032539) list_empty_pane_fp_t1

0x3558,	// (0x00032547) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0003eb9b) list_empty_pane_fp_t

0x807c,	// (0x0003706b) list_single_heading_pane_fp_g1_ParamLimits

0x807c,	// (0x0003706b) list_single_heading_pane_fp_g1

0x0605,	// (0x0002f5f4) list_single_heading_pane_fp_g2_ParamLimits

0x0605,	// (0x0002f5f4) list_single_heading_pane_fp_g2

0x33d5,	// (0x000323c4) list_single_heading_pane_fp_g3_ParamLimits

0x33d5,	// (0x000323c4) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0003eba0) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0003eba0) list_single_heading_pane_fp_g

0x3566,	// (0x00032555) list_single_heading_pane_fp_t1_ParamLimits

0x3566,	// (0x00032555) list_single_heading_pane_fp_t1

0x3578,	// (0x00032567) list_single_heading_pane_fp_t2_ParamLimits

0x3578,	// (0x00032567) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0003eba7) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0003eba7) list_single_heading_pane_fp_t

0x41d3,	// (0x000331c2) aid_size_cell_fast

0x3972,	// (0x00032961) soft_indicator_pane_cp1_t1

0x420d,	// (0x000331fc) cell_app_pane_cp2_ParamLimits

0x420d,	// (0x000331fc) cell_app_pane_cp2

0x1ddb,	// (0x00030dca) fep_hwr_candidate_drop_down_list_pane

0x1fb3,	// (0x00030fa2) fep_hwr_candidate_pane_g3_ParamLimits

0x1fb3,	// (0x00030fa2) fep_hwr_candidate_pane_g3

0xed74,	// (0x0003dd63) fep_hwr_candidate_pane_g4_ParamLimits

0xed74,	// (0x0003dd63) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0003eb16) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0003eb16) fep_hwr_candidate_pane_g

0x7b92,	// (0x00036b81) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b92,	// (0x00036b81) fep_vkb_candidate_drop_down_list_pane

0x7f95,	// (0x00036f84) fep_vkb_candidate_pane_g3

0x7f9d,	// (0x00036f8c) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0003eb43) fep_vkb_candidate_pane_g

0x201e,	// (0x0003100d) cell_hwr_candidate_pane_g1_ParamLimits

0x202c,	// (0x0003101b) cell_hwr_candidate_pane_g3_ParamLimits

0x202c,	// (0x0003101b) cell_hwr_candidate_pane_g3

0x96f7,	// (0x000386e6) cell_hwr_candidate_pane_g4_ParamLimits

0x96f7,	// (0x000386e6) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0003eb62) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0003eb62) cell_hwr_candidate_pane_g

0x7fb4,	// (0x00036fa3) cell_vkb_candidate_pane_g3_ParamLimits

0x7fb4,	// (0x00036fa3) cell_vkb_candidate_pane_g3

0x7fcf,	// (0x00036fbe) cell_vkb_candidate_pane_g4_ParamLimits

0x7fcf,	// (0x00036fbe) cell_vkb_candidate_pane_g4

0x80a0,	// (0x0003708f) cell_app_pane_cp2_g1_ParamLimits

0x80a0,	// (0x0003708f) cell_app_pane_cp2_g1

0x80be,	// (0x000370ad) cell_app_pane_cp2_g2_ParamLimits

0x80be,	// (0x000370ad) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0003ebac) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0003ebac) cell_app_pane_cp2_g

0x80ca,	// (0x000370b9) cell_app_pane_cp2_t1_ParamLimits

0x80ca,	// (0x000370b9) cell_app_pane_cp2_t1

0x3fd3,	// (0x00032fc2) grid_highlight_pane_cp1_ParamLimits

0x3fd3,	// (0x00032fc2) grid_highlight_pane_cp1

0x206b,	// (0x0003105a) cell_hwr_candidate_pane_cp1_ParamLimits

0x206b,	// (0x0003105a) cell_hwr_candidate_pane_cp1

0x201e,	// (0x0003100d) fep_hwr_candidate_drop_down_list_pane_g1

0x208a,	// (0x00031079) fep_hwr_candidate_drop_down_list_pane_g2

0x2097,	// (0x00031086) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0003ebb1) fep_hwr_candidate_drop_down_list_pane_g

0x20a4,	// (0x00031093) fep_hwr_candidate_drop_down_list_scroll_pane

0x20ad,	// (0x0003109c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x20ad,	// (0x0003109c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x20ba,	// (0x000310a9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x20ba,	// (0x000310a9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x20c7,	// (0x000310b6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x20c7,	// (0x000310b6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x20d4,	// (0x000310c3) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x20d4,	// (0x000310c3) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x20ef,	// (0x000310de) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x20ef,	// (0x000310de) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x210a,	// (0x000310f9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x210a,	// (0x000310f9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2125,	// (0x00031114) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2125,	// (0x00031114) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2140,	// (0x0003112f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2140,	// (0x0003112f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0003ebb8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0003ebb8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80dc,	// (0x000370cb) cell_vkb_candidate_pane_cp1_ParamLimits

0x80dc,	// (0x000370cb) cell_vkb_candidate_pane_cp1

0x7c9d,	// (0x00036c8c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c9d,	// (0x00036c8c) fep_vkb_candidate_drop_down_list_pane_g1

0x80fc,	// (0x000370eb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80fc,	// (0x000370eb) fep_vkb_candidate_drop_down_list_pane_g2

0x8109,	// (0x000370f8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8109,	// (0x000370f8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003ebc9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0003ebc9) fep_vkb_candidate_drop_down_list_pane_g

0x8116,	// (0x00037105) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8116,	// (0x00037105) fep_vkb_candidate_drop_down_list_scroll_pane

0x8123,	// (0x00037112) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8123,	// (0x00037112) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8130,	// (0x0003711f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8130,	// (0x0003711f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x813c,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x813c,	// (0x0003712b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8148,	// (0x00037137) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8148,	// (0x00037137) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8169,	// (0x00037158) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8169,	// (0x00037158) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x818a,	// (0x00037179) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x818a,	// (0x00037179) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81ab,	// (0x0003719a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81ab,	// (0x0003719a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81cc,	// (0x000371bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81cc,	// (0x000371bb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003ebd0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003ebd0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcff9,	// (0x0003bfe8) title_pane_g1_ParamLimits

0xd00c,	// (0x0003bffb) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e53d) title_pane_g_ParamLimits

0x4613,	// (0x00033602) aid_call2_pane

0x461b,	// (0x0003360a) aid_call_pane

0x4623,	// (0x00033612) popup_clock_analogue_window_g1

0x4623,	// (0x00033612) popup_clock_analogue_window_g2

0x0da9,	// (0x0002fd98) popup_clock_analogue_window_g3

0x0db2,	// (0x0002fda1) popup_clock_analogue_window_g4

0x2e1e,	// (0x00031e0d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003e6e7) popup_clock_analogue_window_g

0x0dba,	// (0x0002fda9) popup_clock_analogue_window_t1

0x0dc8,	// (0x0002fdb7) clock_digital_number_pane_ParamLimits

0x0dc8,	// (0x0002fdb7) clock_digital_number_pane

0x0dd4,	// (0x0002fdc3) clock_digital_number_pane_cp02_ParamLimits

0x0dd4,	// (0x0002fdc3) clock_digital_number_pane_cp02

0x0de0,	// (0x0002fdcf) clock_digital_number_pane_cp03_ParamLimits

0x0de0,	// (0x0002fdcf) clock_digital_number_pane_cp03

0x0dec,	// (0x0002fddb) clock_digital_number_pane_cp04_ParamLimits

0x0dec,	// (0x0002fddb) clock_digital_number_pane_cp04

0x0df8,	// (0x0002fde7) clock_digital_separator_pane_ParamLimits

0x0df8,	// (0x0002fde7) clock_digital_separator_pane

0x0e04,	// (0x0002fdf3) popup_clock_digital_window_t1_ParamLimits

0x0e04,	// (0x0002fdf3) popup_clock_digital_window_t1

0x2e1e,	// (0x00031e0d) clock_digital_number_pane_g1

0x2e1e,	// (0x00031e0d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003e6f2) clock_digital_number_pane_g

0x2e1e,	// (0x00031e0d) clock_digital_separator_pane_g1

0x2e1e,	// (0x00031e0d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003e6f2) clock_digital_separator_pane_g

0xd710,	// (0x0003c6ff) aid_fill_nsta_ParamLimits

0xd846,	// (0x0003c835) indicator_nsta_pane_ParamLimits

0x5252,	// (0x00034241) popup_clock_analogue_window

0x5252,	// (0x00034241) popup_clock_digital_window

0x4194,	// (0x00033183) grid_indicator_nsta_pane_ParamLimits

0x7407,	// (0x000363f6) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0003ea96) clock_nsta_pane_t

0x0d6d,	// (0x0002fd5c) aid_size_max_handle

0x0d77,	// (0x0002fd66) aid_size_min_handle

0x4c3b,	// (0x00033c2a) editor_scroll_pane

0x81e7,	// (0x000371d6) ex_editor_pane

0x4141,	// (0x00033130) scroll_pane_cp13

0x3f72,	// (0x00032f61) scroll_pane_cp14

0x4652,	// (0x00033641) scroll_pane_cp36

0xd493,	// (0x0003c482) list_single_graphic_hl_pane_cp2_ParamLimits

0xd493,	// (0x0003c482) list_single_graphic_hl_pane_cp2

0xc7bb,	// (0x0003b7aa) list_single_graphic_hl_pane_ParamLimits

0xc7bb,	// (0x0003b7aa) list_single_graphic_hl_pane

0x358e,	// (0x0003257d) aid_size_min_hl_cp1

0x81ef,	// (0x000371de) list_highlight_pane_cp34_ParamLimits

0x81ef,	// (0x000371de) list_highlight_pane_cp34

0x8200,	// (0x000371ef) list_single_graphic_hl_pane_g1_ParamLimits

0x8200,	// (0x000371ef) list_single_graphic_hl_pane_g1

0xc82e,	// (0x0003b81d) list_single_graphic_hl_pane_g2_ParamLimits

0xc82e,	// (0x0003b81d) list_single_graphic_hl_pane_g2

0xc82e,	// (0x0003b81d) list_single_graphic_hl_pane_g3_ParamLimits

0xc82e,	// (0x0003b81d) list_single_graphic_hl_pane_g3

0x051a,	// (0x0002f509) list_single_graphic_hl_pane_g4_ParamLimits

0x051a,	// (0x0002f509) list_single_graphic_hl_pane_g4

0xc83a,	// (0x0003b829) list_single_graphic_hl_pane_g5_ParamLimits

0xc83a,	// (0x0003b829) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0003ebe1) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0003ebe1) list_single_graphic_hl_pane_g

0xc84e,	// (0x0003b83d) list_single_graphic_hl_pane_t1_ParamLimits

0xc84e,	// (0x0003b83d) list_single_graphic_hl_pane_t1

0x820d,	// (0x000371fc) aid_size_min_hl_cp2

0x8216,	// (0x00037205) list_highlight_pane_cp34_cp2_ParamLimits

0x8216,	// (0x00037205) list_highlight_pane_cp34_cp2

0x8200,	// (0x000371ef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8200,	// (0x000371ef) list_single_graphic_hl_pane_g1_cp2

0x8223,	// (0x00037212) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8223,	// (0x00037212) list_single_graphic_hl_pane_g2_cp2

0x822f,	// (0x0003721e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x822f,	// (0x0003721e) list_single_graphic_hl_pane_g3_cp2

0x4a67,	// (0x00033a56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4a67,	// (0x00033a56) list_single_graphic_hl_pane_g4_cp2

0x823d,	// (0x0003722c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x823d,	// (0x0003722c) list_single_graphic_hl_pane_g5_cp2

0xbe28,	// (0x0003ae17) control_pane_g4_ParamLimits

0xbe28,	// (0x0003ae17) control_pane_g4

0x4f75,	// (0x00033f64) bg_popup_sub_pane_cp10_ParamLimits

0x7a39,	// (0x00036a28) list_choice_list_pane_ParamLimits

0x7a48,	// (0x00036a37) scroll_pane_cp23

0x3a02,	// (0x000329f1) bg_popup_preview_window_pane_cp02_ParamLimits

0x8020,	// (0x0003700f) list_preview_fixed_pane_ParamLimits

0x8036,	// (0x00037025) list_preview_fixed_pane_cp_ParamLimits

0x8036,	// (0x00037025) list_preview_fixed_pane_cp

0x8042,	// (0x00037031) popup_preview_fixed_window_g1_ParamLimits

0x8042,	// (0x00037031) popup_preview_fixed_window_g1

0x804e,	// (0x0003703d) popup_preview_fixed_window_g2_ParamLimits

0x804e,	// (0x0003703d) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0003eb69) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0003eb69) popup_preview_fixed_window_g

0x0ce1,	// (0x0002fcd0) aid_navi_side_left_pane_ParamLimits

0x0cf6,	// (0x0002fce5) aid_navi_side_right_pane_ParamLimits

0x0d0e,	// (0x0002fcfd) navi_icon_pane_stacon_ParamLimits

0x0d22,	// (0x0002fd11) navi_navi_pane_stacon_ParamLimits

0x0d0e,	// (0x0002fcfd) navi_text_pane_stacon_ParamLimits

0x0218,	// (0x0002f207) main_text_info_pane

0x8267,	// (0x00037256) listscroll_text_info_pane

0x826f,	// (0x0003725e) list_text_info_pane_ParamLimits

0x826f,	// (0x0003725e) list_text_info_pane

0x827e,	// (0x0003726d) scroll_pane_cp24_ParamLimits

0x827e,	// (0x0003726d) scroll_pane_cp24

0xe39b,	// (0x0003d38a) list_text_info_pane_t1_ParamLimits

0xe39b,	// (0x0003d38a) list_text_info_pane_t1

0xbf83,	// (0x0003af72) popup_fast_swap2_window_ParamLimits

0xbf83,	// (0x0003af72) popup_fast_swap2_window

0x82d1,	// (0x000372c0) aid_size_cell_fast2

0x2e14,	// (0x00031e03) bg_popup_window_pane_cp17

0x58e3,	// (0x000348d2) heading_pane_cp2

0x3c45,	// (0x00032c34) listscroll_fast2_pane

0x82db,	// (0x000372ca) grid_fast2_pane

0x82e5,	// (0x000372d4) listscroll_fast2_pane_g1

0x82ed,	// (0x000372dc) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0003ebec) listscroll_fast2_pane_g

0x4141,	// (0x00033130) scroll_pane_cp26

0x82f7,	// (0x000372e6) cell_fast2_pane_ParamLimits

0x82f7,	// (0x000372e6) cell_fast2_pane

0x830c,	// (0x000372fb) cell_fast2_pane_g1

0x8315,	// (0x00037304) cell_fast2_pane_g2

0x831e,	// (0x0003730d) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0003ebf1) cell_fast2_pane_g

0x3d2f,	// (0x00032d1e) grid_highlight_pane_cp9

0x125f,	// (0x0003024e) main_eswt_pane_ParamLimits

0x125f,	// (0x0003024e) main_eswt_pane

0x8293,	// (0x00037282) list_single_text_info_pane

0x8326,	// (0x00037315) eswt_ctrl_button_pane

0x8326,	// (0x00037315) eswt_ctrl_canvas_pane

0x832e,	// (0x0003731d) eswt_ctrl_combo_pane

0x8326,	// (0x00037315) eswt_ctrl_default_pane

0x8326,	// (0x00037315) eswt_ctrl_label_pane

0x8336,	// (0x00037325) eswt_ctrl_wait_pane

0x833e,	// (0x0003732d) eswt_shell_pane

0x2e14,	// (0x00031e03) listscroll_eswt_app_pane

0x835e,	// (0x0003734d) popup_eswt_tasktip_window_ParamLimits

0x835e,	// (0x0003734d) popup_eswt_tasktip_window

0x54e7,	// (0x000344d6) bg_popup_window_pane_cp18

0x836f,	// (0x0003735e) eswt_control_pane_g1_ParamLimits

0x836f,	// (0x0003735e) eswt_control_pane_g1

0x837c,	// (0x0003736b) eswt_control_pane_g2_ParamLimits

0x837c,	// (0x0003736b) eswt_control_pane_g2

0x8389,	// (0x00037378) eswt_control_pane_g3_ParamLimits

0x8389,	// (0x00037378) eswt_control_pane_g3

0x8396,	// (0x00037385) eswt_control_pane_g4_ParamLimits

0x8396,	// (0x00037385) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0003ebf8) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0003ebf8) eswt_control_pane_g

0x3fd3,	// (0x00032fc2) bg_button_pane_ParamLimits

0x3fd3,	// (0x00032fc2) bg_button_pane

0x3d44,	// (0x00032d33) common_borders_pane_copy2_ParamLimits

0x3d44,	// (0x00032d33) common_borders_pane_copy2

0x83a3,	// (0x00037392) control_button_pane_g1_ParamLimits

0x83a3,	// (0x00037392) control_button_pane_g1

0x83af,	// (0x0003739e) control_button_pane_g2_ParamLimits

0x83af,	// (0x0003739e) control_button_pane_g2

0x83bb,	// (0x000373aa) control_button_pane_g3_ParamLimits

0x83bb,	// (0x000373aa) control_button_pane_g3

0x0002,

0xfc12,	// (0x0003ec01) control_button_pane_g_ParamLimits

0xfc12,	// (0x0003ec01) control_button_pane_g

0x83cf,	// (0x000373be) control_button_pane_t1

0x83dd,	// (0x000373cc) control_button_pane_t2

0x0001,

0xfc19,	// (0x0003ec08) control_button_pane_t

0x5473,	// (0x00034462) bg_button_pane_g1

0x5483,	// (0x00034472) bg_button_pane_g2

0x547b,	// (0x0003446a) bg_button_pane_g3

0x5493,	// (0x00034482) bg_button_pane_g4

0x548b,	// (0x0003447a) bg_button_pane_g5

0x549b,	// (0x0003448a) bg_button_pane_g6

0x54a3,	// (0x00034492) bg_button_pane_g7

0x54b3,	// (0x000344a2) bg_button_pane_g8

0x54ab,	// (0x0003449a) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003e850) bg_button_pane_g

0x79f4,	// (0x000369e3) common_borders_pane_ParamLimits

0x79f4,	// (0x000369e3) common_borders_pane

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy1_ParamLimits

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy1

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy1_ParamLimits

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy1

0x8389,	// (0x00037378) eswt_control_pane_g3_copy1_ParamLimits

0x8389,	// (0x00037378) eswt_control_pane_g3_copy1

0x8396,	// (0x00037385) eswt_control_pane_g4_copy1_ParamLimits

0x8396,	// (0x00037385) eswt_control_pane_g4_copy1

0x7a2f,	// (0x00036a1e) bg_eswt_ctrl_canvas_pane_g1

0x79f4,	// (0x000369e3) common_borders_pane_cp2_ParamLimits

0x79f4,	// (0x000369e3) common_borders_pane_cp2

0x79f4,	// (0x000369e3) common_borders_pane_cp3_ParamLimits

0x79f4,	// (0x000369e3) common_borders_pane_cp3

0x83eb,	// (0x000373da) separator_horizontal_pane

0x83f3,	// (0x000373e2) separator_vertical_pane

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy2_ParamLimits

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy2

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy2_ParamLimits

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy2

0x8389,	// (0x00037378) eswt_control_pane_g3_copy2_ParamLimits

0x8389,	// (0x00037378) eswt_control_pane_g3_copy2

0x8396,	// (0x00037385) eswt_control_pane_g4_copy2_ParamLimits

0x8396,	// (0x00037385) eswt_control_pane_g4_copy2

0x2e14,	// (0x00031e03) common_borders_pane_cp4

0x83fc,	// (0x000373eb) separator_horizontal_pane_g1

0x8405,	// (0x000373f4) separator_horizontal_pane_g2

0x840e,	// (0x000373fd) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0003ec0d) separator_horizontal_pane_g

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy3_ParamLimits

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy3

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy3_ParamLimits

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy3

0x8389,	// (0x00037378) eswt_control_pane_g3_copy3_ParamLimits

0x8389,	// (0x00037378) eswt_control_pane_g3_copy3

0x8396,	// (0x00037385) eswt_control_pane_g4_copy3_ParamLimits

0x8396,	// (0x00037385) eswt_control_pane_g4_copy3

0x2e14,	// (0x00031e03) common_borders_pane_cp5

0x8417,	// (0x00037406) separator_vertical_pane_g1

0x8420,	// (0x0003740f) separator_vertical_pane_g2

0x8429,	// (0x00037418) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0003ec14) separator_vertical_pane_g

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy4_ParamLimits

0x836f,	// (0x0003735e) eswt_control_pane_g1_copy4

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy4_ParamLimits

0x837c,	// (0x0003736b) eswt_control_pane_g2_copy4

0x8389,	// (0x00037378) eswt_control_pane_g3_copy4_ParamLimits

0x8389,	// (0x00037378) eswt_control_pane_g3_copy4

0x8396,	// (0x00037385) eswt_control_pane_g4_copy4_ParamLimits

0x8396,	// (0x00037385) eswt_control_pane_g4_copy4

0x8432,	// (0x00037421) eswt_ctrl_combo_button_pane

0x843a,	// (0x00037429) eswt_ctrl_input_pane

0x8442,	// (0x00037431) popup_choice_list_window_cp70

0x844a,	// (0x00037439) eswt_ctrl_input_pane_t1

0x2e14,	// (0x00031e03) input_focus_pane_cp70

0x79f4,	// (0x000369e3) bg_button_pane_cp70_ParamLimits

0x79f4,	// (0x000369e3) bg_button_pane_cp70

0x8458,	// (0x00037447) eswt_ctrl_combo_button_pane_g1

0x8460,	// (0x0003744f) wait_bar_pane_cp70

0x54e7,	// (0x000344d6) bg_popup_window_pane_cp70_ParamLimits

0x54e7,	// (0x000344d6) bg_popup_window_pane_cp70

0x8468,	// (0x00037457) popup_eswt_tasktip_window_t1

0x847e,	// (0x0003746d) wait_bar_pane_cp71_ParamLimits

0x847e,	// (0x0003746d) wait_bar_pane_cp71

0x848a,	// (0x00037479) grid_eswt_app_pane

0x4456,	// (0x00033445) scroll_pane_cp70

0xe3b8,	// (0x0003d3a7) cell_eswt_app_pane_ParamLimits

0xe3b8,	// (0x0003d3a7) cell_eswt_app_pane

0xe3e2,	// (0x0003d3d1) cell_eswt_app_pane_g1_ParamLimits

0xe3e2,	// (0x0003d3d1) cell_eswt_app_pane_g1

0xe411,	// (0x0003d400) cell_eswt_app_pane_g2_ParamLimits

0xe411,	// (0x0003d400) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0003ec1b) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0003ec1b) cell_eswt_app_pane_g

0xe435,	// (0x0003d424) cell_eswt_app_pane_t1_ParamLimits

0xe435,	// (0x0003d424) cell_eswt_app_pane_t1

0x854c,	// (0x0003753b) grid_highlight_pane_cp70_ParamLimits

0x854c,	// (0x0003753b) grid_highlight_pane_cp70

0x4b1c,	// (0x00033b0b) set_content_pane_g1

0xd6c5,	// (0x0003c6b4) status_small_volume_pane

0x215b,	// (0x0003114a) status_small_volume_pane_g1

0x2163,	// (0x00031152) volume_small2_pane

0x216c,	// (0x0003115b) volume_small2_pane_g1

0x2175,	// (0x00031164) volume_small2_pane_g2

0x217e,	// (0x0003116d) volume_small2_pane_g3

0x2187,	// (0x00031176) volume_small2_pane_g4

0x2190,	// (0x0003117f) volume_small2_pane_g5

0x2199,	// (0x00031188) volume_small2_pane_g6

0x21a2,	// (0x00031191) volume_small2_pane_g7

0x21ab,	// (0x0003119a) volume_small2_pane_g8

0x21b4,	// (0x000311a3) volume_small2_pane_g9

0x21bd,	// (0x000311ac) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0003ec20) volume_small2_pane_g

0x7de5,	// (0x00036dd4) fep_vkb_top_text_pane_g1_ParamLimits

0xe31b,	// (0x0003d30a) fep_vkb_top_text_pane_t1_ParamLimits

0x805a,	// (0x00037049) popup_preview_fixed_window_g3_ParamLimits

0x805a,	// (0x00037049) popup_preview_fixed_window_g3

0xc592,	// (0x0003b581) popup_toolbar_trans_pane

0xdd69,	// (0x0003cd58) aid_height_set_list_ParamLimits

0x6856,	// (0x00035845) aid_size_parent_ParamLimits

0x4f75,	// (0x00033f64) list_highlight_pane_cp2_ParamLimits

0x4b1c,	// (0x00033b0b) set_content_pane_g1_ParamLimits

0xc7ce,	// (0x0003b7bd) list_single_image_pane_ParamLimits

0xc7ce,	// (0x0003b7bd) list_single_image_pane

0xe467,	// (0x0003d456) aid_size_cell_image_ParamLimits

0xe467,	// (0x0003d456) aid_size_cell_image

0xe474,	// (0x0003d463) grid_single_image_pane_ParamLimits

0xe474,	// (0x0003d463) grid_single_image_pane

0x8571,	// (0x00037560) list_single_image_pane_g1_ParamLimits

0x8571,	// (0x00037560) list_single_image_pane_g1

0x857d,	// (0x0003756c) list_single_image_pane_g2_ParamLimits

0x857d,	// (0x0003756c) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0003ec35) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0003ec35) list_single_image_pane_g

0x8591,	// (0x00037580) list_single_image_pane_t1_ParamLimits

0x8591,	// (0x00037580) list_single_image_pane_t1

0xe480,	// (0x0003d46f) cell_image_list_pane_ParamLimits

0xe480,	// (0x0003d46f) cell_image_list_pane

0xe494,	// (0x0003d483) cell_image_list_pane_g1

0xe49d,	// (0x0003d48c) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0003ec3a) cell_image_list_pane_g

0x85cd,	// (0x000375bc) aid_size_cell_tb_trans_pane

0x3fd3,	// (0x00032fc2) bg_tb_trans_pane

0x85df,	// (0x000375ce) grid_tb_trans_pane

0x5473,	// (0x00034462) bg_tb_trans_pane_g1

0x5483,	// (0x00034472) bg_tb_trans_pane_g2

0x547b,	// (0x0003446a) bg_tb_trans_pane_g3

0x5493,	// (0x00034482) bg_tb_trans_pane_g4

0x548b,	// (0x0003447a) bg_tb_trans_pane_g5

0x54b3,	// (0x000344a2) bg_tb_trans_pane_g6

0x54ab,	// (0x0003449a) bg_tb_trans_pane_g7

0x549b,	// (0x0003448a) bg_tb_trans_pane_g8

0x54a3,	// (0x00034492) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0003ec3f) bg_tb_trans_pane_g

0x85f3,	// (0x000375e2) cell_toolbar_trans_pane_ParamLimits

0x85f3,	// (0x000375e2) cell_toolbar_trans_pane

0x7a2f,	// (0x00036a1e) cell_toolbar_trans_pane_g1

0xe0fe,	// (0x0003d0ed) list_form2_midp_pane_t1

0xe10c,	// (0x0003d0fb) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0003eadc) list_form2_midp_pane_t

0x75f6,	// (0x000365e5) scroll_pane_cp51_ParamLimits

0x77b2,	// (0x000367a1) form2_midp_wait_pane_g1

0x77bb,	// (0x000367aa) form2_midp_wait_pane_g2

0x77c4,	// (0x000367b3) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0003eaf1) form2_midp_wait_pane_g

0x3779,	// (0x00032768) list_highlight_pane_cp21_ParamLimits

0x7812,	// (0x00036801) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7821,	// (0x00036810) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a06,	// (0x000359f5) list_single_2graphic_im_pane_ParamLimits

0x6a06,	// (0x000359f5) list_single_2graphic_im_pane

0x8619,	// (0x00037608) list_single_2graphic_im_pane_g1_ParamLimits

0x8619,	// (0x00037608) list_single_2graphic_im_pane_g1

0x862a,	// (0x00037619) list_single_2graphic_im_pane_g2_ParamLimits

0x862a,	// (0x00037619) list_single_2graphic_im_pane_g2

0x8636,	// (0x00037625) list_single_2graphic_im_pane_g3_ParamLimits

0x8636,	// (0x00037625) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0003ec52) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0003ec52) list_single_2graphic_im_pane_g

0x8656,	// (0x00037645) list_single_2graphic_im_pane_t1_ParamLimits

0x8656,	// (0x00037645) list_single_2graphic_im_pane_t1

0x8066,	// (0x00037055) list_single_graphic_2heading_pane_fp_ParamLimits

0x8066,	// (0x00037055) list_single_graphic_2heading_pane_fp

0x3400,	// (0x000323ef) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3400,	// (0x000323ef) list_single_graphic_2heading_pane_fp_g1

0x807c,	// (0x0003706b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x807c,	// (0x0003706b) list_single_graphic_2heading_pane_fp_g2

0x0605,	// (0x0002f5f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0605,	// (0x0002f5f4) list_single_graphic_2heading_pane_fp_g3

0x33d5,	// (0x000323c4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x33d5,	// (0x000323c4) list_single_graphic_2heading_pane_fp_g4

0x8088,	// (0x00037077) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8088,	// (0x00037077) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003eb79) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003eb79) list_single_graphic_2heading_pane_fp_g

0x35d9,	// (0x000325c8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x35d9,	// (0x000325c8) list_single_graphic_2heading_pane_fp_t1

0x3438,	// (0x00032427) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3438,	// (0x00032427) list_single_graphic_2heading_pane_fp_t2

0x35ef,	// (0x000325de) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x35ef,	// (0x000325de) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0003ec5b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0003ec5b) list_single_graphic_2heading_pane_fp_t

0x7abb,	// (0x00036aaa) fep_hwr_write_pane_g5_ParamLimits

0x7abb,	// (0x00036aaa) fep_hwr_write_pane_g5

0x7ac7,	// (0x00036ab6) fep_hwr_write_pane_g6_ParamLimits

0x7ac7,	// (0x00036ab6) fep_hwr_write_pane_g6

0x833e,	// (0x0003732d) eswt_shell_pane_ParamLimits

0x54e7,	// (0x000344d6) bg_popup_window_pane_cp18_ParamLimits

0x67a4,	// (0x00035793) heading_pane_cp70

0x8468,	// (0x00037457) popup_eswt_tasktip_window_t1_ParamLimits

0xd76b,	// (0x0003c75a) aid_touch_tab_arrow_left

0xd781,	// (0x0003c770) aid_touch_tab_arrow_right

0xd024,	// (0x0003c013) title_pane_g3_ParamLimits

0xd024,	// (0x0003c013) title_pane_g3

0x3f92,	// (0x00032f81) set_value_pane_g1

0xc592,	// (0x0003b581) popup_toolbar_trans_pane_ParamLimits

0x85cd,	// (0x000375bc) aid_size_cell_tb_trans_pane_ParamLimits

0x3fd3,	// (0x00032fc2) bg_tb_trans_pane_ParamLimits

0x85df,	// (0x000375ce) grid_tb_trans_pane_ParamLimits

0x3a02,	// (0x000329f1) cont_note_pane_ParamLimits

0x3a02,	// (0x000329f1) cont_note_pane

0x3d44,	// (0x00032d33) cont_snote2_single_text_pane_ParamLimits

0x3d44,	// (0x00032d33) cont_snote2_single_text_pane

0x3d44,	// (0x00032d33) cont_snote2_single_graphic_pane_ParamLimits

0x3d44,	// (0x00032d33) cont_snote2_single_graphic_pane

0x5af9,	// (0x00034ae8) cont_note_wait_pane_ParamLimits

0x5af9,	// (0x00034ae8) cont_note_wait_pane

0x5af9,	// (0x00034ae8) cont_note_image_pane_ParamLimits

0x5af9,	// (0x00034ae8) cont_note_image_pane

0x8687,	// (0x00037676) popup_note2_window_g1_ParamLimits

0x8687,	// (0x00037676) popup_note2_window_g1

0x86b8,	// (0x000376a7) popup_note2_window_t1_ParamLimits

0x86b8,	// (0x000376a7) popup_note2_window_t1

0x86fd,	// (0x000376ec) popup_note2_window_t2_ParamLimits

0x86fd,	// (0x000376ec) popup_note2_window_t2

0x8742,	// (0x00037731) popup_note2_window_t3_ParamLimits

0x8742,	// (0x00037731) popup_note2_window_t3

0x8787,	// (0x00037776) popup_note2_window_t4_ParamLimits

0x8787,	// (0x00037776) popup_note2_window_t4

0x3a7a,	// (0x00032a69) popup_note2_window_t5_ParamLimits

0x3a7a,	// (0x00032a69) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0003ec67) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0003ec67) popup_note2_window_t

0x87b6,	// (0x000377a5) popup_note2_image_window_g1_ParamLimits

0x87b6,	// (0x000377a5) popup_note2_image_window_g1

0x87c2,	// (0x000377b1) popup_note2_image_window_g2_ParamLimits

0x87c2,	// (0x000377b1) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0003ec72) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0003ec72) popup_note2_image_window_g

0x87d4,	// (0x000377c3) popup_note2_image_window_t1_ParamLimits

0x87d4,	// (0x000377c3) popup_note2_image_window_t1

0x87ec,	// (0x000377db) popup_note2_image_window_t2_ParamLimits

0x87ec,	// (0x000377db) popup_note2_image_window_t2

0x8804,	// (0x000377f3) popup_note2_image_window_t3_ParamLimits

0x8804,	// (0x000377f3) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0003ec77) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0003ec77) popup_note2_image_window_t

0x5b07,	// (0x00034af6) popup_note2_wait_window_g1_ParamLimits

0x5b07,	// (0x00034af6) popup_note2_wait_window_g1

0x8820,	// (0x0003780f) popup_note2_wait_window_g2_ParamLimits

0x8820,	// (0x0003780f) popup_note2_wait_window_g2

0x5b1f,	// (0x00034b0e) popup_note2_wait_window_g3_ParamLimits

0x5b1f,	// (0x00034b0e) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0003ec7e) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0003ec7e) popup_note2_wait_window_g

0x882c,	// (0x0003781b) popup_note2_wait_window_t1_ParamLimits

0x882c,	// (0x0003781b) popup_note2_wait_window_t1

0x884a,	// (0x00037839) popup_note2_wait_window_t2_ParamLimits

0x884a,	// (0x00037839) popup_note2_wait_window_t2

0x8868,	// (0x00037857) popup_note2_wait_window_t3_ParamLimits

0x8868,	// (0x00037857) popup_note2_wait_window_t3

0x887a,	// (0x00037869) popup_note2_wait_window_t4_ParamLimits

0x887a,	// (0x00037869) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x0003ec85) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x0003ec85) popup_note2_wait_window_t

0x888c,	// (0x0003787b) wait_bar2_pane_ParamLimits

0x888c,	// (0x0003787b) wait_bar2_pane

0x88a4,	// (0x00037893) popup_snote2_single_text_window_g1_ParamLimits

0x88a4,	// (0x00037893) popup_snote2_single_text_window_g1

0x88cc,	// (0x000378bb) popup_snote2_single_text_window_t1_ParamLimits

0x88cc,	// (0x000378bb) popup_snote2_single_text_window_t1

0x8918,	// (0x00037907) popup_snote2_single_text_window_t2_ParamLimits

0x8918,	// (0x00037907) popup_snote2_single_text_window_t2

0x8964,	// (0x00037953) popup_snote2_single_text_window_t3_ParamLimits

0x8964,	// (0x00037953) popup_snote2_single_text_window_t3

0x89a5,	// (0x00037994) popup_snote2_single_text_window_t4_ParamLimits

0x89a5,	// (0x00037994) popup_snote2_single_text_window_t4

0x89db,	// (0x000379ca) popup_snote2_single_text_window_t5_ParamLimits

0x89db,	// (0x000379ca) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x0003ec8e) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x0003ec8e) popup_snote2_single_text_window_t

0x8a06,	// (0x000379f5) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a06,	// (0x000379f5) popup_snote2_single_graphic_window_g1

0x8a2e,	// (0x00037a1d) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a2e,	// (0x00037a1d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x0003ec99) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x0003ec99) popup_snote2_single_graphic_window_g

0x8a56,	// (0x00037a45) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a56,	// (0x00037a45) popup_snote2_single_graphic_window_t1

0x8aa2,	// (0x00037a91) popup_snote2_single_graphic_window_t2_ParamLimits

0x8aa2,	// (0x00037a91) popup_snote2_single_graphic_window_t2

0x8964,	// (0x00037953) popup_snote2_single_graphic_window_t3_ParamLimits

0x8964,	// (0x00037953) popup_snote2_single_graphic_window_t3

0x89a5,	// (0x00037994) popup_snote2_single_graphic_window_t4_ParamLimits

0x89a5,	// (0x00037994) popup_snote2_single_graphic_window_t4

0x89db,	// (0x000379ca) popup_snote2_single_graphic_window_t5_ParamLimits

0x89db,	// (0x000379ca) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x0003ec9e) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x0003ec9e) popup_snote2_single_graphic_window_t

0x74b1,	// (0x000364a0) clock_nsta_pane_cp2_t1

0x74b1,	// (0x000364a0) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0003eab2) clock_nsta_pane_cp2_t

0x0a7e,	// (0x0002fa6d) form_field_data_wide_pane_g1_ParamLimits

0x3fe1,	// (0x00032fd0) form_field_data_wide_pane_g2_ParamLimits

0x3fe1,	// (0x00032fd0) form_field_data_wide_pane_g2

0x3fed,	// (0x00032fdc) form_field_data_wide_pane_g3_ParamLimits

0x3fed,	// (0x00032fdc) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003e66a) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003e66a) form_field_data_wide_pane_g

0xe041,	// (0x0003d030) grid_touch_3_pane_ParamLimits

0xe041,	// (0x0003d030) grid_touch_3_pane

0xe4a6,	// (0x0003d495) cell_touch_3_pane_ParamLimits

0xe4a6,	// (0x0003d495) cell_touch_3_pane

0x7a2f,	// (0x00036a1e) cell_touch_3_pane_g1

0x7a2f,	// (0x00036a1e) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0003eb37) cell_touch_3_pane_g

0x3aac,	// (0x00032a9b) cont_query_data_pane

0x3ab4,	// (0x00032aa3) cont_query_data_pane_cp1

0x8b1f,	// (0x00037b0e) button_value_adjust_pane_cp7

0x8b27,	// (0x00037b16) query_popup_pane_cp3

0x470f,	// (0x000336fe) bg_popup_sub_pane_cp22_ParamLimits

0x0e23,	// (0x0002fe12) navi_navi_volume_pane_cp2

0x0e3b,	// (0x0002fe2a) popup_side_volume_key_window_g2

0x0e47,	// (0x0002fe36) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003e700) popup_side_volume_key_window_g

0x0e61,	// (0x0002fe50) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003e707) popup_side_volume_key_window_t

0x49c5,	// (0x000339b4) popup_side_volume_key_window_ParamLimits

0xb945,	// (0x0003a934) list_double_graphic_pane_g4_ParamLimits

0xb945,	// (0x0003a934) list_double_graphic_pane_g4

0xdee2,	// (0x0003ced1) list_single_2heading_msg_pane_ParamLimits

0xdee2,	// (0x0003ced1) list_single_2heading_msg_pane

0xc864,	// (0x0003b853) list_single_2heading_msg_pane_g1_ParamLimits

0xc864,	// (0x0003b853) list_single_2heading_msg_pane_g1

0xc870,	// (0x0003b85f) list_single_2heading_msg_pane_g2_ParamLimits

0xc870,	// (0x0003b85f) list_single_2heading_msg_pane_g2

0xc883,	// (0x0003b872) list_single_2heading_msg_pane_g3_ParamLimits

0xc883,	// (0x0003b872) list_single_2heading_msg_pane_g3

0xc88f,	// (0x0003b87e) list_single_2heading_msg_pane_g4_ParamLimits

0xc88f,	// (0x0003b87e) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x0003eca9) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x0003eca9) list_single_2heading_msg_pane_g

0xc8a7,	// (0x0003b896) list_single_2heading_msg_pane_t1_ParamLimits

0xc8a7,	// (0x0003b896) list_single_2heading_msg_pane_t1

0xc8cf,	// (0x0003b8be) list_single_2heading_msg_pane_t2_ParamLimits

0xc8cf,	// (0x0003b8be) list_single_2heading_msg_pane_t2

0xc93a,	// (0x0003b929) list_single_2heading_msg_pane_t3_ParamLimits

0xc93a,	// (0x0003b929) list_single_2heading_msg_pane_t3

0x36d4,	// (0x000326c3) list_single_2heading_msg_pane_t4_ParamLimits

0x36d4,	// (0x000326c3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0003ecb2) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0003ecb2) list_single_2heading_msg_pane_t

0x2e5c,	// (0x00031e4b) title_pane_g4_ParamLimits

0x2e5c,	// (0x00031e4b) title_pane_g4

0x0c31,	// (0x0002fc20) title_pane_stacon_g3_ParamLimits

0x0c31,	// (0x0002fc20) title_pane_stacon_g3

0x864a,	// (0x00037639) list_single_2graphic_im_pane_g4_ParamLimits

0x864a,	// (0x00037639) list_single_2graphic_im_pane_g4

0x6560,	// (0x0003554f) popup_side_volume_key_window_cp

0x6d0e,	// (0x00035cfd) main_idle_act2_pane_t1

0x1858,	// (0x00030847) toolbar_button_pane_g10

0xd32e,	// (0x0003c31d) popup_toolbar_window_cp1

0x74a2,	// (0x00036491) clock_nsta_pane_cp_t1

0x74a2,	// (0x00036491) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0003eaad) clock_nsta_pane_cp_t

0x0e23,	// (0x0002fe12) navi_navi_volume_pane_cp2_ParamLimits

0x0e2f,	// (0x0002fe1e) popup_side_volume_key_window_g1_ParamLimits

0x0e3b,	// (0x0002fe2a) popup_side_volume_key_window_g2_ParamLimits

0x0e47,	// (0x0002fe36) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003e700) popup_side_volume_key_window_g_ParamLimits

0x1dc7,	// (0x00030db6) fep_hwr_aid_pane

0x1e6e,	// (0x00030e5d) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a8b,	// (0x00036a7a) fep_hwr_top_pane_g1_ParamLimits

0x7a9d,	// (0x00036a8c) fep_hwr_top_pane_g2_ParamLimits

0x1e8e,	// (0x00030e7d) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0003eb02) fep_hwr_top_pane_g_ParamLimits

0x1ea3,	// (0x00030e92) fep_hwr_top_text_pane_ParamLimits

0x6323,	// (0x00035312) aid_touch_tab_arrow_arrow_2

0x632c,	// (0x0003531b) aid_touch_tab_arrow_left_2

0x1ddb,	// (0x00030dca) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1e12,	// (0x00030e01) fep_hwr_prediction_pane

0x7bf4,	// (0x00036be3) fep_vkb_prediction_pane

0xe2fb,	// (0x0003d2ea) fep_vkb_side_pane_g3_ParamLimits

0xe2fb,	// (0x0003d2ea) fep_vkb_side_pane_g3

0x201e,	// (0x0003100d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x208a,	// (0x00031079) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2097,	// (0x00031086) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0003ebb1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x21c6,	// (0x000311b5) fep_hwr_prediction_pane_g1

0x21d0,	// (0x000311bf) fep_hwr_prediction_pane_g2

0x21d8,	// (0x000311c7) fep_hwr_prediction_pane_g3

0x21e0,	// (0x000311cf) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x0003ecbb) fep_hwr_prediction_pane_g

0x8b4c,	// (0x00037b3b) fep_vkb_prediction_pane_g1

0x8b56,	// (0x00037b45) fep_vkb_prediction_pane_g2

0x8b5e,	// (0x00037b4d) fep_vkb_prediction_pane_g3

0x8b66,	// (0x00037b55) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0003ecc4) fep_vkb_prediction_pane_g

0x1c23,	// (0x00030c12) slider_set_pane_g3

0x1c37,	// (0x00030c26) slider_set_pane_g4

0x1c4f,	// (0x00030c3e) slider_set_pane_g5

0x1c23,	// (0x00030c12) slider_set_pane_g6

0x1c65,	// (0x00030c54) slider_set_pane_g7

0x69b3,	// (0x000359a2) slider_form_pane_g3

0x69bc,	// (0x000359ab) slider_form_pane_g4

0x69c4,	// (0x000359b3) slider_form_pane_g5

0x69b3,	// (0x000359a2) slider_form_pane_g6

0xdeb0,	// (0x0003ce9f) slider_form_pane_g7

0x6fad,	// (0x00035f9c) slider_set_pane_vc_g3

0x6fb6,	// (0x00035fa5) slider_set_pane_vc_g4

0x6fbf,	// (0x00035fae) slider_set_pane_vc_g5

0x6fad,	// (0x00035f9c) slider_set_pane_vc_g6

0x6fc8,	// (0x00035fb7) slider_set_pane_vc_g7

0x7178,	// (0x00036167) slider_form_pane_vc_g1

0x7181,	// (0x00036170) slider_form_pane_vc_g2

0x718a,	// (0x00036179) slider_form_pane_vc_g3

0x7178,	// (0x00036167) slider_form_pane_vc_g4

0x7193,	// (0x00036182) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0003ea7f) slider_form_pane_vc_g

0x0218,	// (0x0002f207) main_idle_act3_pane

0x8b6e,	// (0x00037b5d) ai3_links_pane

0xe4ef,	// (0x0003d4de) popup_ai3_data_window_ParamLimits

0xe4ef,	// (0x0003d4de) popup_ai3_data_window

0x2e14,	// (0x00031e03) grid_ai3_links_pane

0xe507,	// (0x0003d4f6) cell_ai3_links_pane_ParamLimits

0xe507,	// (0x0003d4f6) cell_ai3_links_pane

0x8ba7,	// (0x00037b96) bg_popup_sub_pane_cp11

0x8bb4,	// (0x00037ba3) cell_ai3_links_pane_g1

0x2e14,	// (0x00031e03) bg_popup_sub_pane_cp12

0x8bd9,	// (0x00037bc8) heading_ai3_data_pane

0x8be1,	// (0x00037bd0) list_ai3_gene_pane

0x8bed,	// (0x00037bdc) popup_ai3_data_window_g1

0x8bf5,	// (0x00037be4) heading_ai3_data_pane_g1

0x8bfd,	// (0x00037bec) heading_ai3_data_pane_t1

0x8c0b,	// (0x00037bfa) list_double_ai3_gene_pane_ParamLimits

0x8c0b,	// (0x00037bfa) list_double_ai3_gene_pane

0x8c18,	// (0x00037c07) list_single_ai3_gene_pane_ParamLimits

0x8c18,	// (0x00037c07) list_single_ai3_gene_pane

0x79f4,	// (0x000369e3) list_highlight_pane_cp7_ParamLimits

0x79f4,	// (0x000369e3) list_highlight_pane_cp7

0x8c25,	// (0x00037c14) list_single_a13_gene_pane_t1_ParamLimits

0x8c25,	// (0x00037c14) list_single_a13_gene_pane_t1

0x8c3c,	// (0x00037c2b) list_single_ai3_gene_pane_g1

0x8c45,	// (0x00037c34) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x0003eccd) list_single_ai3_gene_pane_g

0x8c4d,	// (0x00037c3c) list_double_ai3_gene_pane_g1_ParamLimits

0x8c4d,	// (0x00037c3c) list_double_ai3_gene_pane_g1

0x8c59,	// (0x00037c48) list_double_ai3_gene_pane_t1_ParamLimits

0x8c59,	// (0x00037c48) list_double_ai3_gene_pane_t1

0x8c75,	// (0x00037c64) list_double_ai3_gene_pane_t2_ParamLimits

0x8c75,	// (0x00037c64) list_double_ai3_gene_pane_t2

0x8c8a,	// (0x00037c79) list_double_ai3_gene_pane_t3_ParamLimits

0x8c8a,	// (0x00037c79) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0003ecd2) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0003ecd2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3605,	// (0x000325f4) aid_size_min_col_2

0xe4d9,	// (0x0003d4c8) aid_size_min_msg_ParamLimits

0xe4d9,	// (0x0003d4c8) aid_size_min_msg

0xe30f,	// (0x0003d2fe) fep_vkb_top_text_pane_g2_ParamLimits

0xe30f,	// (0x0003d2fe) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0003eb32) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0003eb32) fep_vkb_top_text_pane_g

0x0218,	// (0x0002f207) main_hc_apps_shell_pane

0x8ca7,	// (0x00037c96) grid_hc_apps_pane_ParamLimits

0x8ca7,	// (0x00037c96) grid_hc_apps_pane

0x8cb6,	// (0x00037ca5) list_hc_apps_pane

0x8cbe,	// (0x00037cad) scroll_pane_cp37_ParamLimits

0x8cbe,	// (0x00037cad) scroll_pane_cp37

0xe521,	// (0x0003d510) cell_hc_apps_pane_ParamLimits

0xe521,	// (0x0003d510) cell_hc_apps_pane

0xe5df,	// (0x0003d5ce) cell_hc_apps_pane_g1_ParamLimits

0xe5df,	// (0x0003d5ce) cell_hc_apps_pane_g1

0x8da9,	// (0x00037d98) cell_hc_apps_pane_g2_ParamLimits

0x8da9,	// (0x00037d98) cell_hc_apps_pane_g2

0x8dc5,	// (0x00037db4) cell_hc_apps_pane_g3_ParamLimits

0x8dc5,	// (0x00037db4) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x0003ecd9) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x0003ecd9) cell_hc_apps_pane_g

0xe60c,	// (0x0003d5fb) cell_hc_apps_pane_t1_ParamLimits

0xe60c,	// (0x0003d5fb) cell_hc_apps_pane_t1

0x3a02,	// (0x000329f1) grid_highlight_pane_cp10_ParamLimits

0x3a02,	// (0x000329f1) grid_highlight_pane_cp10

0xe64a,	// (0x0003d639) list_single_hc_apps_pane_ParamLimits

0xe64a,	// (0x0003d639) list_single_hc_apps_pane

0xe67b,	// (0x0003d66a) list_single_hc_apps_pane_g1

0xc9a8,	// (0x0003b997) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0003ece0) list_single_hc_apps_pane_g

0xc9c1,	// (0x0003b9b0) list_single_hc_apps_pane_g2_copy1

0xc9dd,	// (0x0003b9cc) list_single_hc_apps_pane_t1

0x3779,	// (0x00032768) bg_set_opt_pane_cp_ParamLimits

0x046b,	// (0x0002f45a) setting_slider_pane_t1_ParamLimits

0x0484,	// (0x0002f473) setting_slider_pane_t2_ParamLimits

0x049e,	// (0x0002f48d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e54d) setting_slider_pane_t_ParamLimits

0x04b6,	// (0x0002f4a5) slider_set_pane_ParamLimits

0x114f,	// (0x0003013e) control_pane_g5_ParamLimits

0x114f,	// (0x0003013e) control_pane_g5

0x6810,	// (0x000357ff) slider_set_pane_g1_ParamLimits

0x1c17,	// (0x00030c06) slider_set_pane_g2_ParamLimits

0x1c23,	// (0x00030c12) slider_set_pane_g3_ParamLimits

0x1c37,	// (0x00030c26) slider_set_pane_g4_ParamLimits

0x1c4f,	// (0x00030c3e) slider_set_pane_g5_ParamLimits

0x1c23,	// (0x00030c12) slider_set_pane_g6_ParamLimits

0x1c65,	// (0x00030c54) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003e94e) slider_set_pane_g_ParamLimits

0x4ac7,	// (0x00033ab6) navi_icon_text_pane_ParamLimits

0xd734,	// (0x0003c723) aid_fill_nsta_2_ParamLimits

0xd76b,	// (0x0003c75a) aid_touch_tab_arrow_left_ParamLimits

0xd781,	// (0x0003c770) aid_touch_tab_arrow_right_ParamLimits

0xd81c,	// (0x0003c80b) clock_nsta_pane_ParamLimits

0x6305,	// (0x000352f4) navi_icon_pane_g1_ParamLimits

0x6311,	// (0x00035300) navi_text_pane_t1_ParamLimits

0x75b4,	// (0x000365a3) navi_icon_text_pane_g1_ParamLimits

0x75c0,	// (0x000365af) navi_icon_text_pane_t1_ParamLimits

0xe67b,	// (0x0003d66a) list_single_hc_apps_pane_g1_ParamLimits

0xc9a8,	// (0x0003b997) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0003ece0) list_single_hc_apps_pane_g_ParamLimits

0xc9c1,	// (0x0003b9b0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc9dd,	// (0x0003b9cc) list_single_hc_apps_pane_t1_ParamLimits

0xb758,	// (0x0003a747) popup_toolbar2_fixed_window_ParamLimits

0xb758,	// (0x0003a747) popup_toolbar2_fixed_window

0xc588,	// (0x0003b577) popup_toolbar2_float_window

0x2e14,	// (0x00031e03) bg_popup_sub_pane_cp27

0x8ea8,	// (0x00037e97) grid_toolbar2_float_pane

0x2e14,	// (0x00031e03) bg_popup_sub_pane_cp26

0x8ea8,	// (0x00037e97) grid_toolbar2_fixed_pane

0xe694,	// (0x0003d683) cell_toolbar2_fixed_pane_ParamLimits

0xe694,	// (0x0003d683) cell_toolbar2_fixed_pane

0xe6af,	// (0x0003d69e) cell_toolbar2_fixed_pane_g1

0x1612,	// (0x00030601) toolbar2_fixed_button_pane

0x5473,	// (0x00034462) toolbar2_fixed_button_pane_g1

0x5483,	// (0x00034472) toolbar2_fixed_button_pane_g2

0x547b,	// (0x0003446a) toolbar2_fixed_button_pane_g3

0x5493,	// (0x00034482) toolbar2_fixed_button_pane_g4

0x548b,	// (0x0003447a) toolbar2_fixed_button_pane_g5

0x549b,	// (0x0003448a) toolbar2_fixed_button_pane_g6

0x54a3,	// (0x00034492) toolbar2_fixed_button_pane_g7

0x54b3,	// (0x000344a2) toolbar2_fixed_button_pane_g8

0x54ab,	// (0x0003449a) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003e850) toolbar2_fixed_button_pane_g

0x8eca,	// (0x00037eb9) cell_toolbar2_float_pane_ParamLimits

0x8eca,	// (0x00037eb9) cell_toolbar2_float_pane

0x8ede,	// (0x00037ecd) cell_toolbar2_float_pane_g1

0x1612,	// (0x00030601) toolbar2_fixed_button_pane_cp

0xe1f7,	// (0x0003d1e6) fep_vkb_accented_list_pane_ParamLimits

0xe1f7,	// (0x0003d1e6) fep_vkb_accented_list_pane

0x1ffe,	// (0x00030fed) bg_popup_fep_shadow_pane_g9

0x4c3b,	// (0x00033c2a) bg_popup_fep_shadow_pane_cp3

0x4128,	// (0x00033117) list_accented_list_pane

0x8ee7,	// (0x00037ed6) list_single_accented_list_pane_ParamLimits

0x8ee7,	// (0x00037ed6) list_single_accented_list_pane

0x4c3b,	// (0x00033c2a) list_highlight_pane_cp10

0x8ef8,	// (0x00037ee7) list_single_accented_list_pane_t1

0xc4b2,	// (0x0003b4a1) popup_slider_window_ParamLimits

0xc4b2,	// (0x0003b4a1) popup_slider_window

0x8b2f,	// (0x00037b1e) aid_indentation_list_msg

0xe7a8,	// (0x0003d797) bg_popup_window_pane_cp19

0x901c,	// (0x0003800b) popup_slider_window_g1

0x9038,	// (0x00038027) popup_slider_window_g2

0x9054,	// (0x00038043) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0003ece5) popup_slider_window_g

0x90b0,	// (0x0003809f) popup_slider_window_t1

0x9124,	// (0x00038113) small_volume_slider_vertical_pane

0x7a2f,	// (0x00036a1e) small_volume_slider_vertical_pane_g1

0x7a2f,	// (0x00036a1e) small_volume_slider_vertical_pane_g2

0x9140,	// (0x0003812f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x0003ecf7) small_volume_slider_vertical_pane_g

0xb6c6,	// (0x0003a6b5) area_side_right_pane_ParamLimits

0xb6c6,	// (0x0003a6b5) area_side_right_pane

0xca0b,	// (0x0003b9fa) aid_size_side_button_ParamLimits

0xca0b,	// (0x0003b9fa) aid_size_side_button

0xca24,	// (0x0003ba13) grid_sctrl_middle_pane_ParamLimits

0xca24,	// (0x0003ba13) grid_sctrl_middle_pane

0x221b,	// (0x0003120a) sctrl_sk_bottom_pane

0x222c,	// (0x0003121b) sctrl_sk_top_pane

0x223e,	// (0x0003122d) aid_touch_sctrl_top

0x224b,	// (0x0003123a) bg_sctrl_sk_pane_ParamLimits

0x224b,	// (0x0003123a) bg_sctrl_sk_pane

0x2259,	// (0x00031248) sctrl_sk_top_pane_g1

0x2266,	// (0x00031255) sctrl_sk_top_pane_t1

0x223e,	// (0x0003122d) aid_touch_sctrl_bottom

0x224b,	// (0x0003123a) bg_sctrl_sk_pane_cp_ParamLimits

0x224b,	// (0x0003123a) bg_sctrl_sk_pane_cp

0x2281,	// (0x00031270) sctrl_sk_bottom_pane_g1

0x2266,	// (0x00031255) sctrl_sk_bottom_pane_t1

0xca3e,	// (0x0003ba2d) cell_sctrl_middle_pane_ParamLimits

0xca3e,	// (0x0003ba2d) cell_sctrl_middle_pane

0xca4f,	// (0x0003ba3e) aid_touch_sctrl_middle_ParamLimits

0xca4f,	// (0x0003ba3e) aid_touch_sctrl_middle

0xca5c,	// (0x0003ba4b) bg_sctrl_middle_pane_ParamLimits

0xca5c,	// (0x0003ba4b) bg_sctrl_middle_pane

0x28f2,	// (0x000318e1) cell_sctrl_middle_pane_g1_ParamLimits

0x28f2,	// (0x000318e1) cell_sctrl_middle_pane_g1

0xca6a,	// (0x0003ba59) cell_sctrl_middle_pane_g2_ParamLimits

0xca6a,	// (0x0003ba59) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x0003ed03) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x0003ed03) cell_sctrl_middle_pane_g

0x5473,	// (0x00034462) bg_sctrl_middle_pane_g1

0x547b,	// (0x0003446a) bg_sctrl_middle_pane_g2

0x5483,	// (0x00034472) bg_sctrl_middle_pane_g3

0x548b,	// (0x0003447a) bg_sctrl_middle_pane_g4

0x5493,	// (0x00034482) bg_sctrl_middle_pane_g5

0x549b,	// (0x0003448a) bg_sctrl_middle_pane_g6

0x54a3,	// (0x00034492) bg_sctrl_middle_pane_g7

0x54ab,	// (0x0003449a) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x0003ed08) bg_sctrl_middle_pane_g

0x54b3,	// (0x000344a2) bg_sctrl_middle_pane_g8_copy1

0x5473,	// (0x00034462) bg_sctrl_sk_pane_g1

0x5483,	// (0x00034472) bg_sctrl_sk_pane_g2

0x547b,	// (0x0003446a) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003e850) bg_sctrl_sk_pane_g

0x3f02,	// (0x00032ef1) aid_size_touch_scroll_bar

0x5493,	// (0x00034482) bg_sctrl_sk_pane_g4

0x548b,	// (0x0003447a) bg_sctrl_sk_pane_g5

0x549b,	// (0x0003448a) bg_sctrl_sk_pane_g6

0x54a3,	// (0x00034492) bg_sctrl_sk_pane_g7

0x54b3,	// (0x000344a2) bg_sctrl_sk_pane_g8

0x54ab,	// (0x0003449a) bg_sctrl_sk_pane_g9

0x12fd,	// (0x000302ec) popup_fep_china_hwr2_fs_candidate_window

0xbfe0,	// (0x0003afcf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbfe0,	// (0x0003afcf) popup_fep_china_hwr2_fs_control_window

0x201e,	// (0x0003100d) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x0003ecfe) sctrl_sk_top_pane_g

0xe860,	// (0x0003d84f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe860,	// (0x0003d84f) aid_fep_china_hwr2_fs_cell

0xe874,	// (0x0003d863) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe874,	// (0x0003d863) bg_popup_fep_shadow_pane_cp4

0xe88b,	// (0x0003d87a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe88b,	// (0x0003d87a) bg_popup_fep_shadow_pane_cp5

0xe89d,	// (0x0003d88c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe89d,	// (0x0003d88c) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b1,	// (0x0003d8a0) popup_fep_china_hwr2_fs_control_funtion_grid

0x919c,	// (0x0003818b) aid_fep_china_hwr2_fs_candi_cell

0x2e14,	// (0x00031e03) bg_popup_fep_shadow_pane_cp6

0x91a6,	// (0x00038195) popup_fep_china_hwr2_fs_candidate_grid

0xe8b9,	// (0x0003d8a8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8b9,	// (0x0003d8a8) cell_fep_china_hwr2_fs_funtion_grid

0x7a2f,	// (0x00036a1e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x91c8,	// (0x000381b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x91c8,	// (0x000381b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x91d6,	// (0x000381c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x91d6,	// (0x000381c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x0003ed19) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x0003ed19) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d1,	// (0x0003d8c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d1,	// (0x0003d8c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8e6,	// (0x0003d8d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8e6,	// (0x0003d8d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x0003ed1e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x0003ed1e) cell_fep_china_hwr2_fs_funtion_grid_t

0x921d,	// (0x0003820c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9225,	// (0x00038214) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x922d,	// (0x0003821c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x0003ed23) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9235,	// (0x00038224) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9235,	// (0x00038224) cell_fep_china_hwr2_fs_candidate_grid

0x924e,	// (0x0003823d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9256,	// (0x00038245) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a2f,	// (0x00036a1e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a2f,	// (0x00036a1e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0003eb37) cell_fep_china_hwr2_fs_candidate_grid_g

0x925e,	// (0x0003824d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5071,	// (0x00034060) clock_nsta_pane_cp_24_ParamLimits

0x5071,	// (0x00034060) clock_nsta_pane_cp_24

0x50ef,	// (0x000340de) indicator_nsta_pane_cp_24_ParamLimits

0x50ef,	// (0x000340de) indicator_nsta_pane_cp_24

0x6181,	// (0x00035170) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003e8b5) heading_pane_g

0x6b57,	// (0x00035b46) grid_sct_catagory_button_pane

0x6b87,	// (0x00035b76) scroll_pane_cp5_ParamLimits

0x7602,	// (0x000365f1) button_value_adjust_pane_cp5_ParamLimits

0x7602,	// (0x000365f1) button_value_adjust_pane_cp5

0x76e1,	// (0x000366d0) form2_midp_time_pane_ParamLimits

0x926c,	// (0x0003825b) cell_sct_catagory_button_pane_ParamLimits

0x926c,	// (0x0003825b) cell_sct_catagory_button_pane

0x79f4,	// (0x000369e3) bg_button_pane_cp01_ParamLimits

0x79f4,	// (0x000369e3) bg_button_pane_cp01

0x7a2f,	// (0x00036a1e) cell_sct_catagory_button_pane_g1

0xc52b,	// (0x0003b51a) popup_tb_extension_window

0xe902,	// (0x0003d8f1) aid_size_cell_ext_ParamLimits

0xe902,	// (0x0003d8f1) aid_size_cell_ext

0x3d44,	// (0x00032d33) bg_tb_trans_pane_cp1_ParamLimits

0x3d44,	// (0x00032d33) bg_tb_trans_pane_cp1

0xe928,	// (0x0003d917) grid_tb_ext_pane_ParamLimits

0xe928,	// (0x0003d917) grid_tb_ext_pane

0xe96a,	// (0x0003d959) cell_tb_ext_pane_ParamLimits

0xe96a,	// (0x0003d959) cell_tb_ext_pane

0xe992,	// (0x0003d981) cell_tb_ext_pane_g1_ParamLimits

0xe992,	// (0x0003d981) cell_tb_ext_pane_g1

0x9304,	// (0x000382f3) cell_tb_ext_pane_t1

0x3a02,	// (0x000329f1) list_highlight_pane_cp11_ParamLimits

0x3a02,	// (0x000329f1) list_highlight_pane_cp11

0xb76d,	// (0x0003a75c) popup_uni_indicator_window_ParamLimits

0xb76d,	// (0x0003a75c) popup_uni_indicator_window

0x3fd3,	// (0x00032fc2) bg_popup_sub_pane_cp14

0x931f,	// (0x0003830e) list_uniindi_pane

0x932b,	// (0x0003831a) uniindi_top_pane

0x3a02,	// (0x000329f1) bg_uniindi_top_pane

0x934a,	// (0x00038339) uniindi_top_pane_g1

0x9360,	// (0x0003834f) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x0003ed2a) uniindi_top_pane_g

0x938a,	// (0x00038379) uniindi_top_pane_t1

0x93b4,	// (0x000383a3) list_single_uniindi_pane_ParamLimits

0x93b4,	// (0x000383a3) list_single_uniindi_pane

0x7a2f,	// (0x00036a1e) bg_uniindi_top_pane_g1

0x93c7,	// (0x000383b6) list_single_uniindi_pane_g1

0x93da,	// (0x000383c9) list_single_uniindi_pane_t1

0x0218,	// (0x0002f207) control_bg_pane

0x93ff,	// (0x000383ee) bg_sctrl_sk_pane_cp1

0x9408,	// (0x000383f7) bg_sctrl_sk_pane_cp2

0x9411,	// (0x00038400) control_bg_pane_g1

0x941a,	// (0x00038409) control_bg_pane_g2

0x0001,

0xfd44,	// (0x0003ed33) control_bg_pane_g

0x7446,	// (0x00036435) cell_indicator_nsta_pane_g1_ParamLimits

0xe06e,	// (0x0003d05d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0003ea9b) cell_indicator_nsta_pane_g_ParamLimits

0x33c2,	// (0x000323b1) form2_midp_time_pane_t1_ParamLimits

0x1db9,	// (0x00030da8) main_idle_act4_pane_ParamLimits

0x1db9,	// (0x00030da8) main_idle_act4_pane

0xc52b,	// (0x0003b51a) popup_tb_extension_window_ParamLimits

0xe950,	// (0x0003d93f) tb_ext_find_pane_ParamLimits

0xe950,	// (0x0003d93f) tb_ext_find_pane

0x9423,	// (0x00038412) ai_gene_pane_1_cp1

0x4d7a,	// (0x00033d69) ai_gene_pane_2_cp1

0x942b,	// (0x0003841a) list_single_idle_plugin_calendar_pane

0x9434,	// (0x00038423) list_single_idle_plugin_notification_pane

0x943d,	// (0x0003842c) list_single_idle_plugin_player_pane

0xe9af,	// (0x0003d99e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9af,	// (0x0003d99e) list_single_idle_plugin_shortcut_pane

0xe9d7,	// (0x0003d9c6) main_idle_act4_pane_t1

0xe9ed,	// (0x0003d9dc) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x0003ed38) main_idle_act4_pane_t

0xea05,	// (0x0003d9f4) middle_sk_idle_act4_pane_ParamLimits

0xea05,	// (0x0003d9f4) middle_sk_idle_act4_pane

0xea21,	// (0x0003da10) popup_clock_digital_analogue_window_cp2

0xea48,	// (0x0003da37) shortcut_wheel_idle_act4_pane_ParamLimits

0xea48,	// (0x0003da37) shortcut_wheel_idle_act4_pane

0x7a2f,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g1

0x7a2f,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g2

0x7a2f,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g3

0x7a2f,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g4

0x7a2f,	// (0x00036a1e) shortcut_wheel_idle_act4_pane_g5

0x94d0,	// (0x000384bf) shortcut_wheel_idle_act4_pane_g6

0x94d8,	// (0x000384c7) shortcut_wheel_idle_act4_pane_g7

0x94e0,	// (0x000384cf) shortcut_wheel_idle_act4_pane_g8

0x94e8,	// (0x000384d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x0003ed3d) shortcut_wheel_idle_act4_pane_g

0xe373,	// (0x0003d362) middle_sk_idle_act4_pane_g1_ParamLimits

0xe373,	// (0x0003d362) middle_sk_idle_act4_pane_g1

0xeac5,	// (0x0003dab4) middle_sk_idle_act4_pane_g2_ParamLimits

0xeac5,	// (0x0003dab4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0003ed60) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0003ed60) middle_sk_idle_act4_pane_g

0xeadd,	// (0x0003dacc) middle_sk_idle_act4_pane_t1_ParamLimits

0xeadd,	// (0x0003dacc) middle_sk_idle_act4_pane_t1

0xeb0c,	// (0x0003dafb) grid_ai_shortcut_pane_ParamLimits

0xeb0c,	// (0x0003dafb) grid_ai_shortcut_pane

0xeb29,	// (0x0003db18) list_highlight_pane_cp16_ParamLimits

0xeb29,	// (0x0003db18) list_highlight_pane_cp16

0xeb36,	// (0x0003db25) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb36,	// (0x0003db25) list_single_idle_plugin_shortcut_pane_g1

0xeb42,	// (0x0003db31) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb42,	// (0x0003db31) list_single_idle_plugin_shortcut_pane_g2

0xeb5e,	// (0x0003db4d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb5e,	// (0x0003db4d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0003ed65) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0003ed65) list_single_idle_plugin_shortcut_pane_g

0xeb73,	// (0x0003db62) cell_ai_shortcut_pane_ParamLimits

0xeb73,	// (0x0003db62) cell_ai_shortcut_pane

0xeb89,	// (0x0003db78) cell_ai_shortcut_pane_g1_ParamLimits

0xeb89,	// (0x0003db78) cell_ai_shortcut_pane_g1

0x9423,	// (0x00038412) ai_gene_pane_1_cp2

0x9615,	// (0x00038604) ai_gene_pane_2_cp2

0x961d,	// (0x0003860c) list_highlight_pane_cp15

0x9626,	// (0x00038615) list_single_idle_plugin_calendar_pane_g1

0x961d,	// (0x0003860c) list_highlight_pane_cp17

0x962e,	// (0x0003861d) list_single_idle_plugin_calendar_pane_g1_copy1

0x9636,	// (0x00038625) list_single_idle_plugin_player_pane_g1

0x6dae,	// (0x00035d9d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x0003ed6c) list_single_idle_plugin_player_pane_g

0x963e,	// (0x0003862d) list_single_idle_plugin_player_pane_t1

0x964c,	// (0x0003863b) list_single_idle_plugin_player_pane_t2

0x965a,	// (0x00038649) list_single_idle_plugin_player_pane_t3

0x9668,	// (0x00038657) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0003ed71) list_single_idle_plugin_player_pane_t

0x9676,	// (0x00038665) wait_bar_pane_cp15

0x967e,	// (0x0003866d) grid_ai_notification_pane

0x6dae,	// (0x00035d9d) list_single_idle_plugin_notification_pane_g1

0xebab,	// (0x0003db9a) cell_ai_notification_pane_ParamLimits

0xebab,	// (0x0003db9a) cell_ai_notification_pane

0x9694,	// (0x00038683) cell_ai_notification_pane_g1

0x969c,	// (0x0003868b) cell_ai_notification_pane_t1

0xebb8,	// (0x0003dba7) tb_ext_find_button_pane

0xebc0,	// (0x0003dbaf) tb_ext_find_pane_g1

0xebc8,	// (0x0003dbb7) tb_ext_find_pane_t1

0x4623,	// (0x00033612) tb_ext_find_button_pane_g1

0x96c8,	// (0x000386b7) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x0003ed7a) tb_ext_find_button_pane_g

0xe9d7,	// (0x0003d9c6) main_idle_act4_pane_t1_ParamLimits

0xe9ed,	// (0x0003d9dc) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x0003ed38) main_idle_act4_pane_t_ParamLimits

0xea21,	// (0x0003da10) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea38,	// (0x0003da27) sat_plugin_idle_act4_pane_ParamLimits

0xea38,	// (0x0003da27) sat_plugin_idle_act4_pane

0xebd6,	// (0x0003dbc5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebd6,	// (0x0003dbc5) sat_plugin_idle_act4_pane_t1

0xebee,	// (0x0003dbdd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebee,	// (0x0003dbdd) sat_plugin_idle_act4_pane_t2

0xec06,	// (0x0003dbf5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec06,	// (0x0003dbf5) sat_plugin_idle_act4_pane_t3

0xec1e,	// (0x0003dc0d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec1e,	// (0x0003dc0d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0003ed7f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0003ed7f) sat_plugin_idle_act4_pane_t

0x02dd,	// (0x0002f2cc) popup_battery_window_ParamLimits

0x02dd,	// (0x0002f2cc) popup_battery_window

0x3a02,	// (0x000329f1) bg_popup_sub_pane_cp25_ParamLimits

0x3a02,	// (0x000329f1) bg_popup_sub_pane_cp25

0x973e,	// (0x0003872d) popup_battery_window_g1_ParamLimits

0x973e,	// (0x0003872d) popup_battery_window_g1

0x974a,	// (0x00038739) popup_battery_window_t1_ParamLimits

0x974a,	// (0x00038739) popup_battery_window_t1

0x975c,	// (0x0003874b) popup_battery_window_t2_ParamLimits

0x975c,	// (0x0003874b) popup_battery_window_t2

0x0001,

0xfd99,	// (0x0003ed88) popup_battery_window_t_ParamLimits

0xfd99,	// (0x0003ed88) popup_battery_window_t

0xd593,	// (0x0003c582) midp_canvas_pane_ParamLimits

0xd5f2,	// (0x0003c5e1) midp_keypad_pane_ParamLimits

0xd5f2,	// (0x0003c5e1) midp_keypad_pane

0x4f75,	// (0x00033f64) main_midp_pane_ParamLimits

0x74c0,	// (0x000364af) signal_pane_g2_cp_ParamLimits

0xec36,	// (0x0003dc25) aid_size_cell_midp_keypad_ParamLimits

0xec36,	// (0x0003dc25) aid_size_cell_midp_keypad

0xec54,	// (0x0003dc43) midp_keyp_game_grid_pane_ParamLimits

0xec54,	// (0x0003dc43) midp_keyp_game_grid_pane

0xec7b,	// (0x0003dc6a) midp_keyp_rocker_pane_ParamLimits

0xec7b,	// (0x0003dc6a) midp_keyp_rocker_pane

0xeccc,	// (0x0003dcbb) midp_keyp_sk_left_pane_ParamLimits

0xeccc,	// (0x0003dcbb) midp_keyp_sk_left_pane

0xed20,	// (0x0003dd0f) midp_keyp_sk_right_pane_ParamLimits

0xed20,	// (0x0003dd0f) midp_keyp_sk_right_pane

0x2e14,	// (0x00031e03) bg_button_pane_cp03

0xed81,	// (0x0003dd70) midp_keyp_sk_left_pane_g1

0x2e14,	// (0x00031e03) bg_button_pane_cp04

0xed81,	// (0x0003dd70) midp_keyp_sk_right_pane_g1

0x7a2f,	// (0x00036a1e) midp_keyp_rocker_pane_g1

0xed8a,	// (0x0003dd79) keyp_game_cell_pane_ParamLimits

0xed8a,	// (0x0003dd79) keyp_game_cell_pane

0x2e14,	// (0x00031e03) bg_button_pane_cp02

0xedae,	// (0x0003dd9d) keyp_game_cell_pane_g1

0xb708,	// (0x0003a6f7) popup_fep_vkb2_window_ParamLimits

0xb708,	// (0x0003a6f7) popup_fep_vkb2_window

0xca76,	// (0x0003ba65) aid_size_cell_vkb2_ParamLimits

0xca76,	// (0x0003ba65) aid_size_cell_vkb2

0xcaac,	// (0x0003ba9b) popup_fep_vkb2_window_g1_ParamLimits

0xcaac,	// (0x0003ba9b) popup_fep_vkb2_window_g1

0xcafc,	// (0x0003baeb) vkb2_area_bottom_pane_ParamLimits

0xcafc,	// (0x0003baeb) vkb2_area_bottom_pane

0xcb50,	// (0x0003bb3f) vkb2_area_keypad_pane_ParamLimits

0xcb50,	// (0x0003bb3f) vkb2_area_keypad_pane

0xcb98,	// (0x0003bb87) vkb2_area_top_pane_ParamLimits

0xcb98,	// (0x0003bb87) vkb2_area_top_pane

0xcc1e,	// (0x0003bc0d) vkb2_top_entry_pane_ParamLimits

0xcc1e,	// (0x0003bc0d) vkb2_top_entry_pane

0xcc4b,	// (0x0003bc3a) vkb2_top_grid_left_pane_ParamLimits

0xcc4b,	// (0x0003bc3a) vkb2_top_grid_left_pane

0xcc6b,	// (0x0003bc5a) vkb2_top_grid_right_pane_ParamLimits

0xcc6b,	// (0x0003bc5a) vkb2_top_grid_right_pane

0x24ed,	// (0x000314dc) vkb2_cell_keypad_pane_ParamLimits

0x24ed,	// (0x000314dc) vkb2_cell_keypad_pane

0xccb1,	// (0x0003bca0) vkb2_area_bottom_grid_pane_ParamLimits

0xccb1,	// (0x0003bca0) vkb2_area_bottom_grid_pane

0xccdb,	// (0x0003bcca) vkb2_area_bottom_pane_g1_ParamLimits

0xccdb,	// (0x0003bcca) vkb2_area_bottom_pane_g1

0xcd01,	// (0x0003bcf0) vkb2_area_bottom_pane_g2_ParamLimits

0xcd01,	// (0x0003bcf0) vkb2_area_bottom_pane_g2

0xcd32,	// (0x0003bd21) vkb2_area_bottom_pane_g3_ParamLimits

0xcd32,	// (0x0003bd21) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x0003ed8d) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x0003ed8d) vkb2_area_bottom_pane_g

0x2697,	// (0x00031686) vkb2_top_cell_left_pane_ParamLimits

0x2697,	// (0x00031686) vkb2_top_cell_left_pane

0xedb7,	// (0x0003dda6) vkb2_top_entry_pane_g1_ParamLimits

0xedb7,	// (0x0003dda6) vkb2_top_entry_pane_g1

0xedc5,	// (0x0003ddb4) vkb2_top_entry_pane_t1_ParamLimits

0xedc5,	// (0x0003ddb4) vkb2_top_entry_pane_t1

0x990d,	// (0x000388fc) vkb2_top_entry_pane_t2_ParamLimits

0x990d,	// (0x000388fc) vkb2_top_entry_pane_t2

0x993f,	// (0x0003892e) vkb2_top_entry_pane_t3_ParamLimits

0x993f,	// (0x0003892e) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0003ed94) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0003ed94) vkb2_top_entry_pane_t

0xcd9c,	// (0x0003bd8b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd9c,	// (0x0003bd8b) vkb2_top_grid_right_pane_g1

0x26fa,	// (0x000316e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x26fa,	// (0x000316e9) vkb2_top_grid_right_pane_g2

0x2712,	// (0x00031701) vkb2_top_grid_right_pane_g3_ParamLimits

0x2712,	// (0x00031701) vkb2_top_grid_right_pane_g3

0xcdb2,	// (0x0003bda1) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdb2,	// (0x0003bda1) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x0003ed9b) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x0003ed9b) vkb2_top_grid_right_pane_g

0x2740,	// (0x0003172f) vkb2_top_cell_left_pane_g1

0x2757,	// (0x00031746) vkb2_cell_keypad_pane_g1_ParamLimits

0x2757,	// (0x00031746) vkb2_cell_keypad_pane_g1

0x9963,	// (0x00038952) vkb2_cell_keypad_pane_t1_ParamLimits

0x9963,	// (0x00038952) vkb2_cell_keypad_pane_t1

0x2765,	// (0x00031754) vkb2_cell_bottom_grid_pane_ParamLimits

0x2765,	// (0x00031754) vkb2_cell_bottom_grid_pane

0x279e,	// (0x0003178d) vkb2_cell_bottom_grid_pane_g1

0xea69,	// (0x0003da58) aid_call2_pane_cp02

0xea71,	// (0x0003da60) aid_call_pane_cp02

0xea79,	// (0x0003da68) clock_digital_number_pane_cp10

0xea81,	// (0x0003da70) clock_digital_number_pane_cp11

0xea89,	// (0x0003da78) clock_digital_number_pane_cp12

0xea91,	// (0x0003da80) clock_digital_number_pane_cp13

0xea99,	// (0x0003da88) clock_digital_separator_pane_cp10

0x4623,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g1

0x4623,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g2

0xeaa1,	// (0x0003da90) popup_clock_digital_analogue_window_cp2_g3

0x4623,	// (0x00033612) popup_clock_digital_analogue_window_cp2_g4

0xeaa1,	// (0x0003da90) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0003ed50) popup_clock_digital_analogue_window_cp2_g

0xeaa9,	// (0x0003da98) popup_clock_digital_analogue_window_cp2_t1

0xeab7,	// (0x0003daa6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x0003ed5b) popup_clock_digital_analogue_window_cp2_t

0x7a2f,	// (0x00036a1e) clock_digital_number_pane_cp10_g1

0x7a2f,	// (0x00036a1e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003eb37) clock_digital_number_pane_cp10_g

0x7a2f,	// (0x00036a1e) clock_digital_separator_pane_cp10_g1

0x7a2f,	// (0x00036a1e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003eb37) clock_digital_separator_pane_cp10_g

0x936c,	// (0x0003835b) uniindi_top_pane_g3

0x937d,	// (0x0003836c) uniindi_top_pane_g4

0x2578,	// (0x00031567) vkb2_row_keypad_pane_ParamLimits

0x2578,	// (0x00031567) vkb2_row_keypad_pane

0x27be,	// (0x000317ad) vkb2_cell_t_keypad_pane_ParamLimits

0x27be,	// (0x000317ad) vkb2_cell_t_keypad_pane

0x27ce,	// (0x000317bd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x27ce,	// (0x000317bd) vkb2_cell_t_keypad_pane_cp08

0x27e1,	// (0x000317d0) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x27e1,	// (0x000317d0) vkb2_cell_t_keypad_pane_cp09

0x27f5,	// (0x000317e4) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x27f5,	// (0x000317e4) vkb2_cell_t_keypad_pane_cp01

0x2806,	// (0x000317f5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2806,	// (0x000317f5) vkb2_cell_t_keypad_pane_cp02

0x2817,	// (0x00031806) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2817,	// (0x00031806) vkb2_cell_t_keypad_pane_cp03

0x2828,	// (0x00031817) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2828,	// (0x00031817) vkb2_cell_t_keypad_pane_cp04

0x2839,	// (0x00031828) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2839,	// (0x00031828) vkb2_cell_t_keypad_pane_cp05

0x284a,	// (0x00031839) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x284a,	// (0x00031839) vkb2_cell_t_keypad_pane_cp06

0x285b,	// (0x0003184a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x285b,	// (0x0003184a) vkb2_cell_t_keypad_pane_cp07

0x286c,	// (0x0003185b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x286c,	// (0x0003185b) vkb2_cell_t_keypad_pane_cp10

0x201e,	// (0x0003100d) vkb2_cell_t_keypad_pane_g1

0x997a,	// (0x00038969) vkb2_cell_t_keypad_pane_t1

0x0218,	// (0x0002f207) popup_grid_graphic2_window

0xedfe,	// (0x0003dded) aid_size_cell_graphic2_ParamLimits

0xedfe,	// (0x0003dded) aid_size_cell_graphic2

0xee3c,	// (0x0003de2b) bg_popup_window_pane_cp21_ParamLimits

0xee3c,	// (0x0003de2b) bg_popup_window_pane_cp21

0xee4a,	// (0x0003de39) graphic2_pages_pane_ParamLimits

0xee4a,	// (0x0003de39) graphic2_pages_pane

0xeea0,	// (0x0003de8f) grid_graphic2_control_pane_ParamLimits

0xeea0,	// (0x0003de8f) grid_graphic2_control_pane

0xeee8,	// (0x0003ded7) grid_graphic2_pane_ParamLimits

0xeee8,	// (0x0003ded7) grid_graphic2_pane

0xef6f,	// (0x0003df5e) cell_graphic2_pane

0x0218,	// (0x0002f207) main_comp_mode_pane

0x8be1,	// (0x00037bd0) list_ai3_gene_pane_ParamLimits

0xe7a8,	// (0x0003d797) bg_popup_window_pane_cp19_ParamLimits

0x8fbe,	// (0x00037fad) bg_touch_area_indi_pane_ParamLimits

0x8fbe,	// (0x00037fad) bg_touch_area_indi_pane

0x8fd4,	// (0x00037fc3) bg_touch_area_indi_pane_cp01_ParamLimits

0x8fd4,	// (0x00037fc3) bg_touch_area_indi_pane_cp01

0x8fea,	// (0x00037fd9) bg_touch_area_indi_pane_cp02_ParamLimits

0x8fea,	// (0x00037fd9) bg_touch_area_indi_pane_cp02

0x9002,	// (0x00037ff1) bg_touch_area_indi_pane_cp03_ParamLimits

0x9002,	// (0x00037ff1) bg_touch_area_indi_pane_cp03

0x901c,	// (0x0003800b) popup_slider_window_g1_ParamLimits

0x9038,	// (0x00038027) popup_slider_window_g2_ParamLimits

0x9054,	// (0x00038043) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0003ece5) popup_slider_window_g_ParamLimits

0x90b0,	// (0x0003809f) popup_slider_window_t1_ParamLimits

0x9124,	// (0x00038113) small_volume_slider_vertical_pane_ParamLimits

0xef6f,	// (0x0003df5e) cell_graphic2_pane_ParamLimits

0xefcc,	// (0x0003dfbb) bg_button_pane_cp10_ParamLimits

0xefcc,	// (0x0003dfbb) bg_button_pane_cp10

0xefdf,	// (0x0003dfce) bg_button_pane_cp11_ParamLimits

0xefdf,	// (0x0003dfce) bg_button_pane_cp11

0xeff2,	// (0x0003dfe1) graphic2_pages_pane_g1_ParamLimits

0xeff2,	// (0x0003dfe1) graphic2_pages_pane_g1

0xf00d,	// (0x0003dffc) graphic2_pages_pane_g2_ParamLimits

0xf00d,	// (0x0003dffc) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x0003eda9) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x0003eda9) graphic2_pages_pane_g

0xf025,	// (0x0003e014) graphic2_pages_pane_t1_ParamLimits

0xf025,	// (0x0003e014) graphic2_pages_pane_t1

0xf03d,	// (0x0003e02c) cell_graphic2_control_pane_ParamLimits

0xf03d,	// (0x0003e02c) cell_graphic2_control_pane

0xf06f,	// (0x0003e05e) cell_graphic2_pane_g1_ParamLimits

0xf06f,	// (0x0003e05e) cell_graphic2_pane_g1

0xe381,	// (0x0003d370) cell_graphic2_pane_g2_ParamLimits

0xe381,	// (0x0003d370) cell_graphic2_pane_g2

0xed74,	// (0x0003dd63) cell_graphic2_pane_g3_ParamLimits

0xed74,	// (0x0003dd63) cell_graphic2_pane_g3

0xe38e,	// (0x0003d37d) cell_graphic2_pane_g4_ParamLimits

0xe38e,	// (0x0003d37d) cell_graphic2_pane_g4

0xf07c,	// (0x0003e06b) cell_graphic2_pane_g5_ParamLimits

0xf07c,	// (0x0003e06b) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x0003edae) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x0003edae) cell_graphic2_pane_g

0xf09c,	// (0x0003e08b) cell_graphic2_pane_t1_ParamLimits

0xf09c,	// (0x0003e08b) cell_graphic2_pane_t1

0x6175,	// (0x00035164) grid_highlight_pane_cp11_ParamLimits

0x6175,	// (0x00035164) grid_highlight_pane_cp11

0x3a02,	// (0x000329f1) bg_button_pane_cp05

0xf0d0,	// (0x0003e0bf) cell_graphic2_control_pane_g1

0x7a2f,	// (0x00036a1e) bg_touch_area_indi_pane_g1

0x9c48,	// (0x00038c37) aid_cmod_rocker_key_size

0x9c52,	// (0x00038c41) aid_cmode_itu_key_size

0x9c5c,	// (0x00038c4b) main_cmode_video_pane

0x9c66,	// (0x00038c55) main_comp_mode_itu_pane

0x9c72,	// (0x00038c61) main_comp_mode_rocker_pane

0x9c7e,	// (0x00038c6d) cell_cmode_rocker_pane_ParamLimits

0x9c7e,	// (0x00038c6d) cell_cmode_rocker_pane

0x9c90,	// (0x00038c7f) cell_cmode_itu_pane_ParamLimits

0x9c90,	// (0x00038c7f) cell_cmode_itu_pane

0x3fd3,	// (0x00032fc2) bg_button_pane_cp06_ParamLimits

0x3fd3,	// (0x00032fc2) bg_button_pane_cp06

0x7c9d,	// (0x00036c8c) cell_cmode_rocker_pane_g1_ParamLimits

0x7c9d,	// (0x00036c8c) cell_cmode_rocker_pane_g1

0x91c8,	// (0x000381b7) cell_cmode_rocker_pane_g2_ParamLimits

0x91c8,	// (0x000381b7) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x0003edbe) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x0003edbe) cell_cmode_rocker_pane_g

0x2e14,	// (0x00031e03) bg_button_pane_cp07

0x9ca5,	// (0x00038c94) cell_cmode_itu_pane_g1

0x9cae,	// (0x00038c9d) cell_cmode_itu_pane_t1

0x9cbc,	// (0x00038cab) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0003edc3) cell_cmode_itu_pane_t

0x93ef,	// (0x000383de) aid_touch_ctrl_left

0x93f7,	// (0x000383e6) aid_touch_ctrl_right

0x2e14,	// (0x00031e03) compa_mode_pane

0xf0f4,	// (0x0003e0e3) aid_cmod_rocker_key_size_cp

0xf0fe,	// (0x0003e0ed) aid_cmode_itu_key_size_cp

0x9cde,	// (0x00038ccd) compa_mode_pane_g1

0x9ce6,	// (0x00038cd5) compa_mode_pane_g2

0x9cee,	// (0x00038cdd) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x0003edc8) compa_mode_pane_g

0xf108,	// (0x0003e0f7) main_comp_mode_itu_pane_cp

0xf110,	// (0x0003e0ff) main_comp_mode_rocker_pane_cp

0xf118,	// (0x0003e107) cell_cmode_itu_pane_cp_ParamLimits

0xf118,	// (0x0003e107) cell_cmode_itu_pane_cp

0xf12d,	// (0x0003e11c) cell_cmode_rocker_pane_cp_ParamLimits

0xf12d,	// (0x0003e11c) cell_cmode_rocker_pane_cp

0x3fd3,	// (0x00032fc2) bg_button_pane_cp06_cp_ParamLimits

0x3fd3,	// (0x00032fc2) bg_button_pane_cp06_cp

0x7c9d,	// (0x00036c8c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c9d,	// (0x00036c8c) cell_cmode_rocker_pane_g1_cp

0x7a2f,	// (0x00036a1e) cell_cmode_rocker_pane_g2_cp

0x2e14,	// (0x00031e03) bg_button_pane_cp07_cp

0xf13f,	// (0x0003e12e) cell_cmode_itu_pane_g1_cp

0xf148,	// (0x0003e137) cell_cmode_itu_pane_t1_cp

0xf148,	// (0x0003e137) cell_cmode_itu_pane_t2_cp

0xdea6,	// (0x0003ce95) settings_code_pane_cp2

0x3779,	// (0x00032768) bg_popup_window_pane_cp3_ParamLimits

0x3bd0,	// (0x00032bbf) heading_pane_cp3_ParamLimits

0x3bdc,	// (0x00032bcb) listscroll_popup_graphic_pane_ParamLimits

0x1dc7,	// (0x00030db6) fep_hwr_aid_pane_ParamLimits

0x223e,	// (0x0003122d) aid_touch_sctrl_top_ParamLimits

0x2259,	// (0x00031248) sctrl_sk_top_pane_g1_ParamLimits

0x201e,	// (0x0003100d) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x0003ecfe) sctrl_sk_top_pane_g_ParamLimits

0x2266,	// (0x00031255) sctrl_sk_top_pane_t1_ParamLimits

0x223e,	// (0x0003122d) aid_touch_sctrl_bottom_ParamLimits

0x2266,	// (0x00031255) sctrl_sk_bottom_pane_t1_ParamLimits

0x9338,	// (0x00038327) aid_area_touch_clock

0xcbe0,	// (0x0003bbcf) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbe0,	// (0x0003bbcf) aid_vkb2_area_top_pane_cell

0xcc8b,	// (0x0003bc7a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc8b,	// (0x0003bc7a) aid_vkb2_area_bottom_pane_cell

0x98c5,	// (0x000388b4) popup_char_count_window

0x9d44,	// (0x00038d33) popup_char_count_window_g1

0x9d4d,	// (0x00038d3c) popup_char_count_window_g2

0x9d56,	// (0x00038d45) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0003edcf) popup_char_count_window_g

0x9d5f,	// (0x00038d4e) popup_char_count_window_t1

0x2315,	// (0x00031304) popup_fep_char_preview_window_ParamLimits

0x2315,	// (0x00031304) popup_fep_char_preview_window

0xcc00,	// (0x0003bbef) vkb2_top_candi_pane_ParamLimits

0xcc00,	// (0x0003bbef) vkb2_top_candi_pane

0xf156,	// (0x0003e145) cell_vkb2_top_candi_pane_ParamLimits

0xf156,	// (0x0003e145) cell_vkb2_top_candi_pane

0x2881,	// (0x00031870) bg_popup_fep_char_preview_window_ParamLimits

0x2881,	// (0x00031870) bg_popup_fep_char_preview_window

0x288f,	// (0x0003187e) popup_fep_char_preview_window_t1_ParamLimits

0x288f,	// (0x0003187e) popup_fep_char_preview_window_t1

0x9dba,	// (0x00038da9) bg_popup_fep_char_preview_window_g1

0x9dc2,	// (0x00038db1) bg_popup_fep_char_preview_window_g2

0x9dca,	// (0x00038db9) bg_popup_fep_char_preview_window_g3

0x9dd2,	// (0x00038dc1) bg_popup_fep_char_preview_window_g4

0x9dda,	// (0x00038dc9) bg_popup_fep_char_preview_window_g5

0x28c9,	// (0x000318b8) bg_popup_fep_char_preview_window_g6

0x9de2,	// (0x00038dd1) bg_popup_fep_char_preview_window_g7

0x9dea,	// (0x00038dd9) bg_popup_fep_char_preview_window_g8

0x9df2,	// (0x00038de1) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x0003edd6) bg_popup_fep_char_preview_window_g

0x201e,	// (0x0003100d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x201e,	// (0x0003100d) cell_vkb2_top_candi_pane_g1

0x202c,	// (0x0003101b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x202c,	// (0x0003101b) cell_vkb2_top_candi_pane_g2

0x96f7,	// (0x000386e6) cell_vkb2_top_candi_pane_g3_ParamLimits

0x96f7,	// (0x000386e6) cell_vkb2_top_candi_pane_g3

0x28d1,	// (0x000318c0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x28d1,	// (0x000318c0) cell_vkb2_top_candi_pane_g4

0x8169,	// (0x00037158) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8169,	// (0x00037158) cell_vkb2_top_candi_pane_g5

0x28f2,	// (0x000318e1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x28f2,	// (0x000318e1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x0003ede9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x0003ede9) cell_vkb2_top_candi_pane_g

0x2900,	// (0x000318ef) cell_vkb2_top_candi_pane_t1

0x1c03,	// (0x00030bf2) aid_size_touch_slider_mark_ParamLimits

0x1c03,	// (0x00030bf2) aid_size_touch_slider_mark

0xee86,	// (0x0003de75) grid_graphic2_catg_pane_ParamLimits

0xee86,	// (0x0003de75) grid_graphic2_catg_pane

0xef42,	// (0x0003df31) popup_grid_graphic2_window_t1_ParamLimits

0xef42,	// (0x0003df31) popup_grid_graphic2_window_t1

0xef58,	// (0x0003df47) popup_grid_graphic2_window_t2_ParamLimits

0xef58,	// (0x0003df47) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0003eda4) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0003eda4) popup_grid_graphic2_window_t

0x3a02,	// (0x000329f1) bg_button_pane_cp05_ParamLimits

0xf0d0,	// (0x0003e0bf) cell_graphic2_control_pane_g1_ParamLimits

0xf1bc,	// (0x0003e1ab) cell_graphic2_catg_pane_ParamLimits

0xf1bc,	// (0x0003e1ab) cell_graphic2_catg_pane

0x2e14,	// (0x00031e03) bg_button_pane_cp12

0xf1ce,	// (0x0003e1bd) cell_graphic2_catg_pane_g1

0x9304,	// (0x000382f3) cell_tb_ext_pane_t1_ParamLimits

0x26b7,	// (0x000316a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x26b7,	// (0x000316a6) vkb2_top_cell_right_narrow_pane

0x26cf,	// (0x000316be) vkb2_top_cell_right_wide_pane_ParamLimits

0x26cf,	// (0x000316be) vkb2_top_cell_right_wide_pane

0x1db9,	// (0x00030da8) bg_vkb2_func_pane_ParamLimits

0x1db9,	// (0x00030da8) bg_vkb2_func_pane

0x2740,	// (0x0003172f) vkb2_top_cell_left_pane_g1_ParamLimits

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp03

0x279e,	// (0x0003178d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x547b,	// (0x0003446a) bg_vkb2_func_pane_g1

0x5483,	// (0x00034472) bg_vkb2_func_pane_g2

0x5493,	// (0x00034482) bg_vkb2_func_pane_g3

0x548b,	// (0x0003447a) bg_vkb2_func_pane_g4

0x549b,	// (0x0003448a) bg_vkb2_func_pane_g5

0x54a3,	// (0x00034492) bg_vkb2_func_pane_g6

0x54ab,	// (0x0003449a) bg_vkb2_func_pane_g7

0x54b3,	// (0x000344a2) bg_vkb2_func_pane_g8

0x5473,	// (0x00034462) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x0003edf6) bg_vkb2_func_pane_g

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp01

0x2740,	// (0x0003172f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2740,	// (0x0003172f) vkb2_top_cell_right_wide_pane_g1

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1db9,	// (0x00030da8) bg_vkb2_fuc_pane_cp02

0x279e,	// (0x0003178d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x279e,	// (0x0003178d) vkb2_top_cell_right_narrow_pane_g1

0xe6e2,	// (0x0003d6d1) aid_touch_area_decrease_ParamLimits

0xe6e2,	// (0x0003d6d1) aid_touch_area_decrease

0xe71c,	// (0x0003d70b) aid_touch_area_increase_ParamLimits

0xe71c,	// (0x0003d70b) aid_touch_area_increase

0xe744,	// (0x0003d733) aid_touch_area_mute_ParamLimits

0xe744,	// (0x0003d733) aid_touch_area_mute

0xe774,	// (0x0003d763) aid_touch_area_slider_ParamLimits

0xe774,	// (0x0003d763) aid_touch_area_slider

0xe7b4,	// (0x0003d7a3) popup_slider_window_g4_ParamLimits

0xe7b4,	// (0x0003d7a3) popup_slider_window_g4

0xe7dc,	// (0x0003d7cb) popup_slider_window_g5_ParamLimits

0xe7dc,	// (0x0003d7cb) popup_slider_window_g5

0xe810,	// (0x0003d7ff) popup_slider_window_g6_ParamLimits

0xe810,	// (0x0003d7ff) popup_slider_window_g6

0x90de,	// (0x000380cd) popup_slider_window_t2_ParamLimits

0x90de,	// (0x000380cd) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0003ecf2) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0003ecf2) popup_slider_window_t

0xe82c,	// (0x0003d81b) slider_pane_ParamLimits

0xe82c,	// (0x0003d81b) slider_pane

0x9e15,	// (0x00038e04) slider_pane_g1_ParamLimits

0x9e15,	// (0x00038e04) slider_pane_g1

0x9e29,	// (0x00038e18) slider_pane_g2_ParamLimits

0x9e29,	// (0x00038e18) slider_pane_g2

0x9e3f,	// (0x00038e2e) slider_pane_g3_ParamLimits

0x9e3f,	// (0x00038e2e) slider_pane_g3

0x0003,

0xfe1a,	// (0x0003ee09) slider_pane_g_ParamLimits

0xfe1a,	// (0x0003ee09) slider_pane_g

0xc573,	// (0x0003b562) popup_tb_float_extension_window_ParamLimits

0xc573,	// (0x0003b562) popup_tb_float_extension_window

0x9e6b,	// (0x00038e5a) aid_size_cell_tb_float_ext

0x2e14,	// (0x00031e03) bg_popup_sub_window_cp28

0x9e77,	// (0x00038e66) grid_tb_float_ext_pane

0x9e81,	// (0x00038e70) cell_tb_float_ext_pane_ParamLimits

0x9e81,	// (0x00038e70) cell_tb_float_ext_pane

0x9e9b,	// (0x00038e8a) cell_tb_float_ext_pane_g1

0x9ea4,	// (0x00038e93) grid_highlight_pane_cp12

0xc80c,	// (0x0003b7fb) cell_last_hwr_side_pane_ParamLimits

0xc80c,	// (0x0003b7fb) cell_last_hwr_side_pane

0x7a2f,	// (0x00036a1e) cell_last_hwr_side_pane_g1

0x9ead,	// (0x00038e9c) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0003ee12) cell_last_hwr_side_pane_g

0xcd67,	// (0x0003bd56) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd67,	// (0x0003bd56) vkb2_area_bottom_space_btn_pane

0x201e,	// (0x0003100d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x997a,	// (0x00038969) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2900,	// (0x000318ef) cell_vkb2_top_candi_pane_t1_ParamLimits

0x291f,	// (0x0003190e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x291f,	// (0x0003190e) vkb2_area_bottom_space_btn_pane_g1

0x2959,	// (0x00031948) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2959,	// (0x00031948) vkb2_area_bottom_space_btn_pane_g2

0x298f,	// (0x0003197e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x298f,	// (0x0003197e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x0003ee17) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x0003ee17) vkb2_area_bottom_space_btn_pane_g

0x1e7c,	// (0x00030e6b) cel_fep_hwr_func_pane_ParamLimits

0x1e7c,	// (0x00030e6b) cel_fep_hwr_func_pane

0xc7e1,	// (0x0003b7d0) cell_hwr_side_button_pane_ParamLimits

0xc7e1,	// (0x0003b7d0) cell_hwr_side_button_pane

0x9338,	// (0x00038327) aid_area_touch_clock_ParamLimits

0x3a02,	// (0x000329f1) bg_uniindi_top_pane_ParamLimits

0x934a,	// (0x00038339) uniindi_top_pane_g1_ParamLimits

0x9360,	// (0x0003834f) uniindi_top_pane_g2_ParamLimits

0x936c,	// (0x0003835b) uniindi_top_pane_g3_ParamLimits

0x937d,	// (0x0003836c) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x0003ed2a) uniindi_top_pane_g_ParamLimits

0x938a,	// (0x00038379) uniindi_top_pane_t1_ParamLimits

0x3a02,	// (0x000329f1) bg_vkb2_func_pane_cp01_ParamLimits

0x3a02,	// (0x000329f1) bg_vkb2_func_pane_cp01

0x9eb6,	// (0x00038ea5) cel_fep_hwr_func_pane_g1_ParamLimits

0x9eb6,	// (0x00038ea5) cel_fep_hwr_func_pane_g1

0x3a02,	// (0x000329f1) bg_vkb2_func_pane_cp02_ParamLimits

0x3a02,	// (0x000329f1) bg_vkb2_func_pane_cp02

0x9eb6,	// (0x00038ea5) cell_hwr_side_button_pane_g1_ParamLimits

0x9eb6,	// (0x00038ea5) cell_hwr_side_button_pane_g1

0x52f4,	// (0x000342e3) status_pane_g4_ParamLimits

0x52f4,	// (0x000342e3) status_pane_g4

0x530e,	// (0x000342fd) status_pane_t1

0x7749,	// (0x00036738) form2_midp_gauge_slider_cont_pane

0x7751,	// (0x00036740) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe13b,	// (0x0003d12a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe14f,	// (0x0003d13e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0003eaea) form2_midp_gauge_slider_pane_t_ParamLimits

0x7787,	// (0x00036776) form2_midp_slider_pane_ParamLimits

0x22d5,	// (0x000312c4) aid_size_cell_func_vkb2_ParamLimits

0x22d5,	// (0x000312c4) aid_size_cell_func_vkb2

0x9e57,	// (0x00038e46) slider_pane_g4_ParamLimits

0x9e57,	// (0x00038e46) slider_pane_g4

0xcdc8,	// (0x0003bdb7) form2_midp_gauge_slider_pane_t2_cp01

0xcdd8,	// (0x0003bdc7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdd8,	// (0x0003bdc7) form2_midp_gauge_slider_pane_t3_cp01

0x2a04,	// (0x000319f3) form2_midp_slider_pane_cp01

0x2e14,	// (0x00031e03) navi_smil_pane

0x9eef,	// (0x00038ede) navi_smil_pane_g1

0x9ef7,	// (0x00038ee6) navi_smil_pane_t1

0x9ec4,	// (0x00038eb3) form2_midp_slider_pane_g1

0x9ecd,	// (0x00038ebc) form2_midp_slider_pane_g2

0x9ed5,	// (0x00038ec4) form2_midp_slider_pane_g3

0x9ec4,	// (0x00038eb3) form2_midp_slider_pane_g4

0xf1d7,	// (0x0003e1c6) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0003ee20) form2_midp_slider_pane_g

0x29c9,	// (0x000319b8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x29c9,	// (0x000319b8) vkb2_area_bottom_space_btn_pane_g4

0xd867,	// (0x0003c856) lc0_navi_pane_ParamLimits

0xd867,	// (0x0003c856) lc0_navi_pane

0xd8d1,	// (0x0003c8c0) lc0_stat_indi_pane_ParamLimits

0xd8d1,	// (0x0003c8c0) lc0_stat_indi_pane

0xd8e6,	// (0x0003c8d5) ls0_title_pane_ParamLimits

0xd8e6,	// (0x0003c8d5) ls0_title_pane

0x3fd3,	// (0x00032fc2) bg_popup_sub_pane_cp14_ParamLimits

0x931f,	// (0x0003830e) list_uniindi_pane_ParamLimits

0x932b,	// (0x0003831a) uniindi_top_pane_ParamLimits

0x93c7,	// (0x000383b6) list_single_uniindi_pane_g1_ParamLimits

0x93da,	// (0x000383c9) list_single_uniindi_pane_t1_ParamLimits

0xcdf7,	// (0x0003bde6) lc0_stat_clock_pane_ParamLimits

0xcdf7,	// (0x0003bde6) lc0_stat_clock_pane

0xf1e2,	// (0x0003e1d1) lc0_stat_indi_pane_g1_ParamLimits

0xf1e2,	// (0x0003e1d1) lc0_stat_indi_pane_g1

0xf1ef,	// (0x0003e1de) lc0_stat_indi_pane_g2_ParamLimits

0xf1ef,	// (0x0003e1de) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x0003ee2b) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x0003ee2b) lc0_stat_indi_pane_g

0xce04,	// (0x0003bdf3) lc0_uni_indicator_pane_ParamLimits

0xce04,	// (0x0003bdf3) lc0_uni_indicator_pane

0xf1fc,	// (0x0003e1eb) ls0_title_pane_g1_ParamLimits

0xf1fc,	// (0x0003e1eb) ls0_title_pane_g1

0xf210,	// (0x0003e1ff) ls0_title_pane_t1_ParamLimits

0xf210,	// (0x0003e1ff) ls0_title_pane_t1

0xce11,	// (0x0003be00) lc0_uni_indicator_pane_g1_ParamLimits

0xce11,	// (0x0003be00) lc0_uni_indicator_pane_g1

0x9f69,	// (0x00038f58) lc0_stat_clock_pane_t1

0x0218,	// (0x0002f207) main_ai5_pane

0x9f77,	// (0x00038f66) ai5_sk_pane_ParamLimits

0x9f77,	// (0x00038f66) ai5_sk_pane

0xf23e,	// (0x0003e22d) cell_ai5_widget_pane_ParamLimits

0xf23e,	// (0x0003e22d) cell_ai5_widget_pane

0xa04e,	// (0x0003903d) aid_size_cell_widget_grid

0xa064,	// (0x00039053) bg_ai5_widget_pane_ParamLimits

0xa064,	// (0x00039053) bg_ai5_widget_pane

0xa0d8,	// (0x000390c7) cell_ai5_widget_pane_g2

0xa0e8,	// (0x000390d7) cell_ai5_widget_pane_g3

0xa0ff,	// (0x000390ee) cell_ai5_widget_pane_g4

0xa10b,	// (0x000390fa) cell_ai5_widget_pane_g5

0xa117,	// (0x00039106) cell_ai5_widget_pane_g6

0xa123,	// (0x00039112) cell_ai5_widget_pane_g7

0xa16b,	// (0x0003915a) cell_ai5_widget_pane_t1_ParamLimits

0xa16b,	// (0x0003915a) cell_ai5_widget_pane_t1

0xa188,	// (0x00039177) cell_ai5_widget_pane_t2_ParamLimits

0xa188,	// (0x00039177) cell_ai5_widget_pane_t2

0xa1a0,	// (0x0003918f) cell_ai5_widget_pane_t3_ParamLimits

0xa1a0,	// (0x0003918f) cell_ai5_widget_pane_t3

0xa1b8,	// (0x000391a7) cell_ai5_widget_pane_t4_ParamLimits

0xa1b8,	// (0x000391a7) cell_ai5_widget_pane_t4

0xa1d5,	// (0x000391c4) cell_ai5_widget_pane_t5_ParamLimits

0xa1d5,	// (0x000391c4) cell_ai5_widget_pane_t5

0xa1f4,	// (0x000391e3) cell_ai5_widget_pane_t6_ParamLimits

0xa1f4,	// (0x000391e3) cell_ai5_widget_pane_t6

0xa206,	// (0x000391f5) cell_ai5_widget_pane_t7_ParamLimits

0xa206,	// (0x000391f5) cell_ai5_widget_pane_t7

0xa21f,	// (0x0003920e) cell_ai5_widget_pane_t8_ParamLimits

0xa21f,	// (0x0003920e) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x0003ee45) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x0003ee45) cell_ai5_widget_pane_t

0xa273,	// (0x00039262) grid_ai5_widget_pane

0x3fd3,	// (0x00032fc2) highlight_cell_ai5_widget_pane_ParamLimits

0x3fd3,	// (0x00032fc2) highlight_cell_ai5_widget_pane

0xf2a8,	// (0x0003e297) ai5_sk_left_pane

0xf2b2,	// (0x0003e2a1) ai5_sk_middle_pane

0xf2bc,	// (0x0003e2ab) ai5_sk_right_pane

0xa2a9,	// (0x00039298) bg_ai5_widget_pane_g1_ParamLimits

0xa2a9,	// (0x00039298) bg_ai5_widget_pane_g1

0xa2b5,	// (0x000392a4) bg_ai5_widget_pane_g2_ParamLimits

0xa2b5,	// (0x000392a4) bg_ai5_widget_pane_g2

0xa2c1,	// (0x000392b0) bg_ai5_widget_pane_g3_ParamLimits

0xa2c1,	// (0x000392b0) bg_ai5_widget_pane_g3

0xa2cd,	// (0x000392bc) bg_ai5_widget_pane_g4_ParamLimits

0xa2cd,	// (0x000392bc) bg_ai5_widget_pane_g4

0xa2d9,	// (0x000392c8) bg_ai5_widget_pane_g5_ParamLimits

0xa2d9,	// (0x000392c8) bg_ai5_widget_pane_g5

0xa2e5,	// (0x000392d4) bg_ai5_widget_pane_g6_ParamLimits

0xa2e5,	// (0x000392d4) bg_ai5_widget_pane_g6

0xa2f1,	// (0x000392e0) bg_ai5_widget_pane_g7_ParamLimits

0xa2f1,	// (0x000392e0) bg_ai5_widget_pane_g7

0xa2fd,	// (0x000392ec) bg_ai5_widget_pane_g8_ParamLimits

0xa2fd,	// (0x000392ec) bg_ai5_widget_pane_g8

0xa309,	// (0x000392f8) bg_ai5_widget_pane_g9_ParamLimits

0xa309,	// (0x000392f8) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x0003ee5a) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x0003ee5a) bg_ai5_widget_pane_g

0xa33b,	// (0x0003932a) cell_shortcut_ai5_widget_pane_ParamLimits

0xa33b,	// (0x0003932a) cell_shortcut_ai5_widget_pane

0x4c3b,	// (0x00033c2a) bg_cell_shortcut_ai5_widget_pane

0xa34c,	// (0x0003933b) cell_grid_ai5_widget_pane_g1

0x4c3b,	// (0x00033c2a) highlight_cell_shortcut_ai5_widget_pane

0x547b,	// (0x0003446a) ai5_sk_left_pane_g1

0xa355,	// (0x00039344) ai5_sk_left_pane_g2

0xa35d,	// (0x0003934c) ai5_sk_left_pane_g3

0xa365,	// (0x00039354) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x0003ee6d) ai5_sk_left_pane_g

0xa36d,	// (0x0003935c) ai5_sk_left_pane_t1

0x5483,	// (0x00034472) ai5_sk_right_pane_g1

0xa37b,	// (0x0003936a) ai5_sk_right_pane_g2

0xa383,	// (0x00039372) ai5_sk_right_pane_g3

0xa38b,	// (0x0003937a) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x0003ee76) ai5_sk_right_pane_g

0xa393,	// (0x00039382) ai5_sk_right_pane_t1

0x5483,	// (0x00034472) ai5_sk_middle_pane_g1

0x547b,	// (0x0003446a) ai5_sk_middle_pane_g2

0x549b,	// (0x0003448a) ai5_sk_middle_pane_g3

0xa383,	// (0x00039372) ai5_sk_middle_pane_g4

0xa35d,	// (0x0003934c) ai5_sk_middle_pane_g5

0xa3a1,	// (0x00039390) ai5_sk_middle_pane_g6

0xf2c6,	// (0x0003e2b5) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0003ee7f) ai5_sk_middle_pane_g

0xd753,	// (0x0003c742) aid_touch_area_size_lc0_ParamLimits

0xd753,	// (0x0003c742) aid_touch_area_size_lc0

0x204d,	// (0x0003103c) cell_hwr_candidate_pane_t1_ParamLimits

0x4fd7,	// (0x00033fc6) aid_touch_navi_pane

0xd9df,	// (0x0003c9ce) status_dt_navi_pane_ParamLimits

0xd9df,	// (0x0003c9ce) status_dt_navi_pane

0xd9f7,	// (0x0003c9e6) status_dt_sta_pane_ParamLimits

0xd9f7,	// (0x0003c9e6) status_dt_sta_pane

0xf2ce,	// (0x0003e2bd) dt_sta_controll_pane

0xf2db,	// (0x0003e2ca) dt_sta_indi_pane

0xf2e8,	// (0x0003e2d7) dt_sta_title_pane

0x3a02,	// (0x000329f1) bg_dt_sta_indi_pane_ParamLimits

0x3a02,	// (0x000329f1) bg_dt_sta_indi_pane

0xa3e2,	// (0x000393d1) dt_sta_battery_pane

0xf2fa,	// (0x0003e2e9) dt_sta_indi_pane_g1

0xf303,	// (0x0003e2f2) dt_sta_indi_pane_g2

0xf30c,	// (0x0003e2fb) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x0003ee8e) dt_sta_indi_pane_g

0xf315,	// (0x0003e304) dt_sta_signal_pane

0x3fd3,	// (0x00032fc2) bg_dt_sta_title_pane_ParamLimits

0x3fd3,	// (0x00032fc2) bg_dt_sta_title_pane

0xa40e,	// (0x000393fd) dt_sta_title_pane_g1

0xf31e,	// (0x0003e30d) dt_sta_title_pane_t1_ParamLimits

0xf31e,	// (0x0003e30d) dt_sta_title_pane_t1

0x2e14,	// (0x00031e03) bg_dt_sta_control_pane

0xf333,	// (0x0003e322) dt_sta_controll_pane_g1

0xa434,	// (0x00039423) bg_dt_sta_title_pane_g1

0xa43d,	// (0x0003942c) bg_dt_sta_title_pane_g2

0xa446,	// (0x00039435) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x0003ee95) bg_dt_sta_title_pane_g

0x7a2f,	// (0x00036a1e) bg_dt_sta_indi_pane_g1

0xa44f,	// (0x0003943e) dt_sta_signal_pane_g1

0xa457,	// (0x00039446) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x0003ee9c) dt_sta_signal_pane_g

0xa45f,	// (0x0003944e) dt_sta_battery_pane_g1

0xa468,	// (0x00039457) dt_sta_battery_pane_t1

0x7a2f,	// (0x00036a1e) bg_dt_sta_control_pane_g1

0x4731,	// (0x00033720) fep_china_uni_eep_pane

0x4739,	// (0x00033728) fep_china_uni_entry_pane_ParamLimits

0x4749,	// (0x00033738) popup_fep_china_uni_window_g1_ParamLimits

0x4759,	// (0x00033748) popup_fep_china_uni_window_g2_ParamLimits

0x4759,	// (0x00033748) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003e70c) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003e70c) popup_fep_china_uni_window_g

0xa477,	// (0x00039466) fep_china_uni_eep_pane_g1

0xa47f,	// (0x0003946e) fep_china_uni_eep_pane_t1

0x9ee6,	// (0x00038ed5) aid_touch_area_size_smil_player

0x5123,	// (0x00034112) lc0_clock_pane

0x5302,	// (0x000342f1) status_pane_g5_ParamLimits

0x5302,	// (0x000342f1) status_pane_g5

0xc101,	// (0x0003b0f0) popup_keymap_window

0x52c8,	// (0x000342b7) status_icon_pane

0xa0e8,	// (0x000390d7) cell_ai5_widget_pane_g3_ParamLimits

0xa0ff,	// (0x000390ee) cell_ai5_widget_pane_g4_ParamLimits

0xa10b,	// (0x000390fa) cell_ai5_widget_pane_g5_ParamLimits

0xa12f,	// (0x0003911e) cell_ai5_widget_pane_g8_ParamLimits

0xa12f,	// (0x0003911e) cell_ai5_widget_pane_g8

0xa143,	// (0x00039132) cell_ai5_widget_pane_g9_ParamLimits

0xa143,	// (0x00039132) cell_ai5_widget_pane_g9

0xa157,	// (0x00039146) cell_ai5_widget_pane_g10_ParamLimits

0xa157,	// (0x00039146) cell_ai5_widget_pane_g10

0xa48e,	// (0x0003947d) status_icon_pane_g1

0x2e14,	// (0x00031e03) bg_popup_sub_pane_cp13

0xa496,	// (0x00039485) popup_keymap_window_t1

0xd6e1,	// (0x0003c6d0) control_pane_g6_ParamLimits

0xd6e1,	// (0x0003c6d0) control_pane_g6

0xd6ee,	// (0x0003c6dd) control_pane_g7_ParamLimits

0xd6ee,	// (0x0003c6dd) control_pane_g7

0xd6fb,	// (0x0003c6ea) control_pane_g8_ParamLimits

0xd6fb,	// (0x0003c6ea) control_pane_g8

0xf2ce,	// (0x0003e2bd) dt_sta_controll_pane_ParamLimits

0xf2db,	// (0x0003e2ca) dt_sta_indi_pane_ParamLimits

0xf2e8,	// (0x0003e2d7) dt_sta_title_pane_ParamLimits

0x3f0b,	// (0x00032efa) aid_size_touch_scroll_bar_cale

0x02f1,	// (0x0002f2e0) popup_discreet_window_ParamLimits

0x02f1,	// (0x0002f2e0) popup_discreet_window

0xb74e,	// (0x0003a73d) popup_sk_window

0x5af9,	// (0x00034ae8) bg_popup_sub_pane_cp28_ParamLimits

0x5af9,	// (0x00034ae8) bg_popup_sub_pane_cp28

0xa4a4,	// (0x00039493) popup_discreet_window_g1_ParamLimits

0xa4a4,	// (0x00039493) popup_discreet_window_g1

0xa4c4,	// (0x000394b3) popup_discreet_window_t1_ParamLimits

0xa4c4,	// (0x000394b3) popup_discreet_window_t1

0xa4e2,	// (0x000394d1) popup_discreet_window_t2_ParamLimits

0xa4e2,	// (0x000394d1) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0003eea1) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0003eea1) popup_discreet_window_t

0x2a3c,	// (0x00031a2b) popup_sk_window_g1

0x2a46,	// (0x00031a35) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x0003eea8) popup_sk_window_g

0x2a50,	// (0x00031a3f) popup_sk_window_t1

0x2a5e,	// (0x00031a4d) popup_sk_window_t1_copy1

0xa0d8,	// (0x000390c7) cell_ai5_widget_pane_g2_ParamLimits

0xa231,	// (0x00039220) cell_ai5_widget_pane_t9_ParamLimits

0xa231,	// (0x00039220) cell_ai5_widget_pane_t9

0x2e14,	// (0x00031e03) main_fep_fshwr2_pane

0xce3f,	// (0x0003be2e) aid_fshwr2_btn_pane

0xce50,	// (0x0003be3f) aid_fshwr2_syb_pane

0xce61,	// (0x0003be50) aid_fshwr2_txt_pane

0xce6d,	// (0x0003be5c) fshwr2_func_candi_pane

0xce8c,	// (0x0003be7b) fshwr2_hwr_syb_pane

0xcea7,	// (0x0003be96) fshwr2_icf_pane

0x0218,	// (0x0002f207) fshwr2_icf_bg_pane

0xced0,	// (0x0003bebf) fshwr2_icf_pane_t1_ParamLimits

0xced0,	// (0x0003bebf) fshwr2_icf_pane_t1

0x4623,	// (0x00033612) fshwr2_func_candi_pane_g1

0xf33c,	// (0x0003e32b) fshwr2_func_candi_row_pane_ParamLimits

0xf33c,	// (0x0003e32b) fshwr2_func_candi_row_pane

0xcee9,	// (0x0003bed8) cell_fshwr2_syb_pane_ParamLimits

0xcee9,	// (0x0003bed8) cell_fshwr2_syb_pane

0x201e,	// (0x0003100d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x201e,	// (0x0003100d) fshwr2_hwr_syb_pane_g1

0x0218,	// (0x0002f207) bg_popup_call_pane_cp01

0xceff,	// (0x0003beee) fshwr2_func_candi_cell_pane_ParamLimits

0xceff,	// (0x0003beee) fshwr2_func_candi_cell_pane

0xf34c,	// (0x0003e33b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf34c,	// (0x0003e33b) fshwr2_func_candi_cell_bg_pane

0xcf34,	// (0x0003bf23) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf34,	// (0x0003bf23) fshwr2_func_candi_cell_pane_g1

0xcf63,	// (0x0003bf52) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf63,	// (0x0003bf52) fshwr2_func_candi_cell_pane_t1

0x0218,	// (0x0002f207) bg_button_pane_cp08

0x6e16,	// (0x00035e05) cell_fshwr2_syb_bg_pane

0xcf76,	// (0x0003bf65) cell_fshwr2_syb_bg_pane_g1

0xcf7e,	// (0x0003bf6d) cell_fshwr2_syb_bg_pane_t1

0x3fd3,	// (0x00032fc2) main_tmo_pane

0xdcd9,	// (0x0003ccc8) uni_indicator_pane_g1_ParamLimits

0xdcef,	// (0x0003ccde) uni_indicator_pane_g2_ParamLimits

0xdd05,	// (0x0003ccf4) uni_indicator_pane_g3_ParamLimits

0x664f,	// (0x0003563e) uni_indicator_pane_g4_ParamLimits

0x664f,	// (0x0003563e) uni_indicator_pane_g4

0x6663,	// (0x00035652) uni_indicator_pane_g5_ParamLimits

0x6663,	// (0x00035652) uni_indicator_pane_g5

0x6663,	// (0x00035652) uni_indicator_pane_g6_ParamLimits

0x6663,	// (0x00035652) uni_indicator_pane_g6

0xf91c,	// (0x0003e90b) uni_indicator_pane_g_ParamLimits

0xe6c4,	// (0x0003d6b3) popup_tmo_note_window_ParamLimits

0xe6c4,	// (0x0003d6b3) popup_tmo_note_window

0x22b7,	// (0x000312a6) fshwr2_bg_pane

0xcf54,	// (0x0003bf43) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf54,	// (0x0003bf43) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x0003eead) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x0003eead) fshwr2_func_candi_cell_pane_g

0x2006,	// (0x00030ff5) bg_popup_window_pane_cp01

0x2b8b,	// (0x00031b7a) bg_popup_window_pane_g1_cp01

0xa544,	// (0x00039533) bg_popup_window_pane_cp22_ParamLimits

0xa544,	// (0x00039533) bg_popup_window_pane_cp22

0xa552,	// (0x00039541) listscroll_tmo_link_pane_ParamLimits

0xa552,	// (0x00039541) listscroll_tmo_link_pane

0xa592,	// (0x00039581) popup_tmo_note_window_g1_ParamLimits

0xa592,	// (0x00039581) popup_tmo_note_window_g1

0xa59f,	// (0x0003958e) tmo_note_info_pane_ParamLimits

0xa59f,	// (0x0003958e) tmo_note_info_pane

0xf358,	// (0x0003e347) list_tmo_note_info_pane_g1_ParamLimits

0xf358,	// (0x0003e347) list_tmo_note_info_pane_g1

0xa5d0,	// (0x000395bf) list_tmo_note_info_pane_g2_ParamLimits

0xa5d0,	// (0x000395bf) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0003eeb2) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0003eeb2) list_tmo_note_info_pane_g

0xa5ec,	// (0x000395db) list_tmo_note_info_text_pane_ParamLimits

0xa5ec,	// (0x000395db) list_tmo_note_info_text_pane

0xa66f,	// (0x0003965e) list_tmo_link_pane

0xa67c,	// (0x0003966b) scroll_pane_cp20

0xa689,	// (0x00039678) list_single_tmo_link_pane_ParamLimits

0xa689,	// (0x00039678) list_single_tmo_link_pane

0xa699,	// (0x00039688) list_single_tmo_link_pane_t1

0xa6a7,	// (0x00039696) list_tmo_note_info_text_pane_t1_ParamLimits

0xa6a7,	// (0x00039696) list_tmo_note_info_text_pane_t1

0xd338,	// (0x0003c327) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd338,	// (0x0003c327) aid_size_touch_scroll_bar_cp01

0xbc67,	// (0x0003ac56) aid_size_touch_slider_marker

0xb73e,	// (0x0003a72d) popup_settings_window_ParamLimits

0xb73e,	// (0x0003a72d) popup_settings_window

0x127b,	// (0x0003026a) popup_candi_list_indi_window

0x4fd7,	// (0x00033fc6) aid_touch_navi_pane_ParamLimits

0x2212,	// (0x00031201) rs_clock_indi_pane

0x221b,	// (0x0003120a) sctrl_sk_bottom_pane_ParamLimits

0x222c,	// (0x0003121b) sctrl_sk_top_pane_ParamLimits

0x232f,	// (0x0003131e) popup_fep_tooltip_window

0xa04e,	// (0x0003903d) aid_size_cell_widget_grid_ParamLimits

0xa0c3,	// (0x000390b2) cell_ai5_widget_pane_g1_ParamLimits

0xa0c3,	// (0x000390b2) cell_ai5_widget_pane_g1

0xa117,	// (0x00039106) cell_ai5_widget_pane_g6_ParamLimits

0xa123,	// (0x00039112) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x0003ee30) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0003ee30) cell_ai5_widget_pane_g

0xa255,	// (0x00039244) cell_ai5_widget_pane_t10_ParamLimits

0xa255,	// (0x00039244) cell_ai5_widget_pane_t10

0xa273,	// (0x00039262) grid_ai5_widget_pane_ParamLimits

0xa315,	// (0x00039304) cell_contacts_ai5_widget_pane_ParamLimits

0xa315,	// (0x00039304) cell_contacts_ai5_widget_pane

0xa4f7,	// (0x000394e6) popup_discreet_window_t3_ParamLimits

0xa4f7,	// (0x000394e6) popup_discreet_window_t3

0xcebc,	// (0x0003beab) popup_fshwr2_char_preview_window_ParamLimits

0xcebc,	// (0x0003beab) popup_fshwr2_char_preview_window

0xf36f,	// (0x0003e35e) tmo_note_info_pane_t1

0xf384,	// (0x0003e373) tmo_note_info_pane_t2

0xf39d,	// (0x0003e38c) tmo_note_info_pane_t3

0xa64b,	// (0x0003963a) tmo_note_info_pane_t4

0xa65d,	// (0x0003964c) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x0003eeb7) tmo_note_info_pane_t

0xa66f,	// (0x0003965e) list_tmo_link_pane_ParamLimits

0xa67c,	// (0x0003966b) scroll_pane_cp20_ParamLimits

0x0218,	// (0x0002f207) bg_popup_fep_char_preview_window_cp01

0xa6c0,	// (0x000396af) popup_fshwr2_char_preview_window_t1

0xa6ce,	// (0x000396bd) popup_candi_list_indi_window_g1

0xa6d7,	// (0x000396c6) bg_cell_contacts_ai5_widget_pane

0xa6e3,	// (0x000396d2) cell_contacts_ai5_widget_pane_g1

0xa6f8,	// (0x000396e7) cell_contacts_ai5_widget_pane_g2

0xa704,	// (0x000396f3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0003eec2) cell_contacts_ai5_widget_pane_g

0xa710,	// (0x000396ff) cell_contacts_ai5_widget_pane_t1

0x3fd3,	// (0x00032fc2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3b2,	// (0x0003e3a1) settings_container_pane

0x4c3b,	// (0x00033c2a) listscroll_set_pane_copy1

0x7105,	// (0x000360f4) scroll_pane_cp121_copy1

0xa793,	// (0x00039782) set_content_pane_copy1

0xf3be,	// (0x0003e3ad) aid_height_set_list_copy1_ParamLimits

0xf3be,	// (0x0003e3ad) aid_height_set_list_copy1

0x6856,	// (0x00035845) aid_size_parent_copy1_ParamLimits

0x6856,	// (0x00035845) aid_size_parent_copy1

0xf3ca,	// (0x0003e3b9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3ca,	// (0x0003e3b9) button_value_adjust_pane_cp6_copy1

0x4f75,	// (0x00033f64) list_highlight_pane_cp2_copy1_ParamLimits

0x4f75,	// (0x00033f64) list_highlight_pane_cp2_copy1

0xf3de,	// (0x0003e3cd) list_set_pane_copy1_ParamLimits

0xf3de,	// (0x0003e3cd) list_set_pane_copy1

0xa722,	// (0x00039711) main_pane_set_t1_copy1_ParamLimits

0xa722,	// (0x00039711) main_pane_set_t1_copy1

0xa75c,	// (0x0003974b) main_pane_set_t2_copy1_ParamLimits

0xa75c,	// (0x0003974b) main_pane_set_t2_copy1

0xa868,	// (0x00039857) main_pane_set_t3_copy1

0xa876,	// (0x00039865) main_pane_set_t4_copy1

0xa77b,	// (0x0003976a) set_content_pane_g1_copy1_ParamLimits

0xa77b,	// (0x0003976a) set_content_pane_g1_copy1

0xf48b,	// (0x0003e47a) setting_code_pane_copy1

0xa88c,	// (0x0003987b) setting_slider_graphic_pane_copy1

0xa88c,	// (0x0003987b) setting_slider_pane_copy1

0xa88c,	// (0x0003987b) setting_text_pane_copy1

0xa88c,	// (0x0003987b) setting_volume_pane_copy1

0xf48b,	// (0x0003e47a) settings_code_pane_cp2_copy1

0xf493,	// (0x0003e482) settings_code_pane_cp_copy1_ParamLimits

0xf493,	// (0x0003e482) settings_code_pane_cp_copy1

0xcf8d,	// (0x0003bf7c) volume_set_pane_copy1

0xf4a7,	// (0x0003e496) volume_set_pane_g10_copy1

0xf4af,	// (0x0003e49e) volume_set_pane_g1_copy1

0xf4b7,	// (0x0003e4a6) volume_set_pane_g2_copy1

0xf4bf,	// (0x0003e4ae) volume_set_pane_g3_copy1

0xf4c7,	// (0x0003e4b6) volume_set_pane_g4_copy1

0xf4cf,	// (0x0003e4be) volume_set_pane_g5_copy1

0xf4d7,	// (0x0003e4c6) volume_set_pane_g6_copy1

0xf4df,	// (0x0003e4ce) volume_set_pane_g7_copy1

0xf4e7,	// (0x0003e4d6) volume_set_pane_g8_copy1

0xf4ef,	// (0x0003e4de) volume_set_pane_g9_copy1

0x3779,	// (0x00032768) bg_set_opt_pane_cp_copy1_ParamLimits

0x3779,	// (0x00032768) bg_set_opt_pane_cp_copy1

0x2b9c,	// (0x00031b8b) setting_slider_pane_t1_copy1_ParamLimits

0x2b9c,	// (0x00031b8b) setting_slider_pane_t1_copy1

0xcf95,	// (0x0003bf84) setting_slider_pane_t2_copy1_ParamLimits

0xcf95,	// (0x0003bf84) setting_slider_pane_t2_copy1

0xcfaf,	// (0x0003bf9e) setting_slider_pane_t3_copy1_ParamLimits

0xcfaf,	// (0x0003bf9e) setting_slider_pane_t3_copy1

0xcfc7,	// (0x0003bfb6) slider_set_pane_copy1_ParamLimits

0xcfc7,	// (0x0003bfb6) slider_set_pane_copy1

0x402e,	// (0x0003301d) set_opt_bg_pane_g1_copy2

0x4036,	// (0x00033025) set_opt_bg_pane_g2_copy2

0xa8f8,	// (0x000398e7) set_opt_bg_pane_g3_copy2

0x4046,	// (0x00033035) set_opt_bg_pane_g4_copy2

0x404e,	// (0x0003303d) set_opt_bg_pane_g5_copy2

0x4056,	// (0x00033045) set_opt_bg_pane_g6_copy2

0xf4f7,	// (0x0003e4e6) set_opt_bg_pane_g7_copy2

0xa90a,	// (0x000398f9) set_opt_bg_pane_g8_copy2

0xa914,	// (0x00039903) set_opt_bg_pane_g9_copy2

0x2c02,	// (0x00031bf1) aid_size_touch_slider_mark_copy1_ParamLimits

0x2c02,	// (0x00031bf1) aid_size_touch_slider_mark_copy1

0xa91e,	// (0x0003990d) slider_set_pane_g1_copy1

0x2c16,	// (0x00031c05) slider_set_pane_g2_copy1

0x1c23,	// (0x00030c12) slider_set_pane_g3_copy1_ParamLimits

0x1c23,	// (0x00030c12) slider_set_pane_g3_copy1

0x1c37,	// (0x00030c26) slider_set_pane_g4_copy1_ParamLimits

0x1c37,	// (0x00030c26) slider_set_pane_g4_copy1

0x1c4f,	// (0x00030c3e) slider_set_pane_g5_copy1_ParamLimits

0x1c4f,	// (0x00030c3e) slider_set_pane_g5_copy1

0x1c23,	// (0x00030c12) slider_set_pane_g6_copy1_ParamLimits

0x1c23,	// (0x00030c12) slider_set_pane_g6_copy1

0x2c1e,	// (0x00031c0d) slider_set_pane_g7_copy1_ParamLimits

0x2c1e,	// (0x00031c0d) slider_set_pane_g7_copy1

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp2_copy1

0xa927,	// (0x00039916) setting_slider_graphic_pane_g1_copy1

0xf4ff,	// (0x0003e4ee) setting_slider_graphic_pane_t1_copy1

0xf50f,	// (0x0003e4fe) setting_slider_graphic_pane_t2_copy1

0xf51f,	// (0x0003e50e) slider_set_pane_cp_copy1

0xa960,	// (0x0003994f) input_focus_pane_cp1_copy1

0xa969,	// (0x00039958) list_set_text_pane_copy1

0xa971,	// (0x00039960) setting_text_pane_g1_copy1

0x375c,	// (0x0003274b) set_text_pane_t1_copy1

0xa960,	// (0x0003994f) input_focus_pane_cp2_copy1

0xa971,	// (0x00039960) setting_code_pane_g1_copy1

0xf527,	// (0x0003e516) setting_code_pane_t1_copy1

0x6f39,	// (0x00035f28) list_set_graphic_pane_copy1

0x2e28,	// (0x00031e17) bg_set_opt_pane_cp4_copy1

0xd55a,	// (0x0003c549) list_set_graphic_pane_g1_copy1_ParamLimits

0xd55a,	// (0x0003c549) list_set_graphic_pane_g1_copy1

0xf535,	// (0x0003e524) list_set_graphic_pane_g2_copy1

0xd572,	// (0x0003c561) list_set_graphic_pane_t1_copy1_ParamLimits

0xd572,	// (0x0003c561) list_set_graphic_pane_t1_copy1

0x7a2f,	// (0x00036a1e) rs_clock_indi_pane_g1

0xa9a4,	// (0x00039993) rs_clock_indi_pane_t1

0xa9b2,	// (0x000399a1) rs_indi_pane

0xa9ba,	// (0x000399a9) rs_indi_pane_g1

0xa9c3,	// (0x000399b2) rs_indi_pane_g2

0xa9cc,	// (0x000399bb) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x0003eec9) rs_indi_pane_g

0x4c3b,	// (0x00033c2a) bg_popup_preview_window_pane_cp03

0xa9d5,	// (0x000399c4) popup_fep_tooltip_window_t1

0x86ab,	// (0x0003769a) popup_note2_window_g2_ParamLimits

0x86ab,	// (0x0003769a) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0003ec62) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0003ec62) popup_note2_window_g

0x8ba7,	// (0x00037b96) bg_popup_sub_pane_cp11_ParamLimits

0x8bb4,	// (0x00037ba3) cell_ai3_links_pane_g1_ParamLimits

0x8bcb,	// (0x00037bba) cell_ai3_links_pane_t1

0x375c,	// (0x0003274b) set_text_pane_t1_copy1_ParamLimits

0x4b58,	// (0x00033b47) cell_graphic_popup_pane_cp2_ParamLimits

0x4b58,	// (0x00033b47) cell_graphic_popup_pane_cp2

0xa9e3,	// (0x000399d2) cell_graphic_popup_pane_g1_cp2

0x3d1e,	// (0x00032d0d) cell_graphic_popup_pane_g2_cp2

0xa9eb,	// (0x000399da) cell_graphic_popup_pane_g3_cp2

0xa9f3,	// (0x000399e2) cell_graphic_popup_pane_t2_cp2

0x3d2f,	// (0x00032d1e) grid_highlight_pane_cp3_cp2

0x436e,	// (0x0003335d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3fd3,	// (0x00032fc2) main_tmo_pane_ParamLimits

0xe6b8,	// (0x0003d6a7) popup_tmo_big_image_note_window

0xa0b2,	// (0x000390a1) cell_ai5_widget_list_pane

0xa0ba,	// (0x000390a9) cell_ai5_widget_lrg_icon_pane

0xf36f,	// (0x0003e35e) tmo_note_info_pane_t1_ParamLimits

0xf384,	// (0x0003e373) tmo_note_info_pane_t2_ParamLimits

0xf39d,	// (0x0003e38c) tmo_note_info_pane_t3_ParamLimits

0xa64b,	// (0x0003963a) tmo_note_info_pane_t4_ParamLimits

0xa65d,	// (0x0003964c) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x0003eeb7) tmo_note_info_pane_t_ParamLimits

0xf3b2,	// (0x0003e3a1) settings_container_pane_ParamLimits

0xa958,	// (0x00039947) indicator_popup_pane_cp5

0xa958,	// (0x00039947) indicator_popup_pane_cp6

0x6f39,	// (0x00035f28) list_set_graphic_pane_copy1_ParamLimits

0x2e14,	// (0x00031e03) bg_popup_window_pane_cp23

0xaa01,	// (0x000399f0) popup_tmo_big_image_note_window_g1

0xaa0a,	// (0x000399f9) popup_tmo_big_image_note_window_t1

0xaa1a,	// (0x00039a09) popup_tmo_big_image_note_window_t2

0xaa2a,	// (0x00039a19) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0003eed0) popup_tmo_big_image_note_window_t

0x7a2f,	// (0x00036a1e) cell_ai5_widget_lrg_icon_pane_g1

0xaa3a,	// (0x00039a29) cell_ai5_widget_lrg_icon_pane_t1

0xaa48,	// (0x00039a37) cell_ai5_widget_list_row_pane_ParamLimits

0xaa48,	// (0x00039a37) cell_ai5_widget_list_row_pane

0xaa5f,	// (0x00039a4e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa5f,	// (0x00039a4e) cell_ai5_widget_list_row_pane_g1

0xaa6c,	// (0x00039a5b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa6c,	// (0x00039a5b) cell_ai5_widget_list_row_pane_t1

0xaa9a,	// (0x00039a89) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa9a,	// (0x00039a89) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x0003eed7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x0003eed7) cell_ai5_widget_list_row_pane_t

0x0218,	// (0x0002f207) main_fep_vtchi_ss_pane

0x2c50,	// (0x00031c3f) popup_fep_char_pre_window

0x2c58,	// (0x00031c47) popup_fep_ituss_window

0x2c79,	// (0x00031c68) popup_fep_vkbss_window

0xaac2,	// (0x00039ab1) grid_vkbss_keypad_pane_ParamLimits

0xaac2,	// (0x00039ab1) grid_vkbss_keypad_pane

0xaad2,	// (0x00039ac1) ituss_keypad_pane

0x2ca4,	// (0x00031c93) aid_vkbss_key_offset_ParamLimits

0x2ca4,	// (0x00031c93) aid_vkbss_key_offset

0x2cb0,	// (0x00031c9f) cell_vkbss_key_pane_ParamLimits

0x2cb0,	// (0x00031c9f) cell_vkbss_key_pane

0x52dc,	// (0x000342cb) bg_cell_vkbss_key_g1_ParamLimits

0x52dc,	// (0x000342cb) bg_cell_vkbss_key_g1

0xaae1,	// (0x00039ad0) cell_vkbss_key_3p_pane_ParamLimits

0xaae1,	// (0x00039ad0) cell_vkbss_key_3p_pane

0xaafb,	// (0x00039aea) cell_vkbss_key_g1_ParamLimits

0xaafb,	// (0x00039aea) cell_vkbss_key_g1

0xab15,	// (0x00039b04) cell_vkbss_key_t1_ParamLimits

0xab15,	// (0x00039b04) cell_vkbss_key_t1

0x2cc6,	// (0x00031cb5) cell_ituss_key_pane_ParamLimits

0x2cc6,	// (0x00031cb5) cell_ituss_key_pane

0xab40,	// (0x00039b2f) bg_cell_ituss_key_g1_ParamLimits

0xab40,	// (0x00039b2f) bg_cell_ituss_key_g1

0xab4c,	// (0x00039b3b) cell_ituss_key_pane_g1_ParamLimits

0xab4c,	// (0x00039b3b) cell_ituss_key_pane_g1

0x2cd7,	// (0x00031cc6) cell_ituss_key_pane_g2_ParamLimits

0x2cd7,	// (0x00031cc6) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x0003eede) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0003eede) cell_ituss_key_pane_g

0x2d03,	// (0x00031cf2) cell_ituss_key_t1_ParamLimits

0x2d03,	// (0x00031cf2) cell_ituss_key_t1

0x2d3d,	// (0x00031d2c) cell_ituss_key_t2_ParamLimits

0x2d3d,	// (0x00031d2c) cell_ituss_key_t2

0x2d6e,	// (0x00031d5d) cell_ituss_key_t3_ParamLimits

0x2d6e,	// (0x00031d5d) cell_ituss_key_t3

0x2d3d,	// (0x00031d2c) cell_ituss_key_t4_ParamLimits

0x2d3d,	// (0x00031d2c) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0003eee5) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0003eee5) cell_ituss_key_t

0xab72,	// (0x00039b61) cell_vkbss_key_3p_pane_g1

0xab7a,	// (0x00039b69) cell_vkbss_key_3p_pane_g2

0xab82,	// (0x00039b71) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0003eef0) cell_vkbss_key_3p_pane_g

0x0218,	// (0x0002f207) bg_popup_fep_char_preview_window_cp02

0x2db1,	// (0x00031da0) popup_fep_char_pre_window_t1

0xf29e,	// (0x0003e28d) main_ai5_sk_pane

0xa6d7,	// (0x000396c6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6e3,	// (0x000396d2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa6f8,	// (0x000396e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa704,	// (0x000396f3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0003eec2) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa710,	// (0x000396ff) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3fd3,	// (0x00032fc2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf53d,	// (0x0003e52c) main_ai5_sk_pane_g1

0x5937,	// (0x00034926) popup_query_code_window_g1

0x2c6e,	// (0x00031c5d) popup_fep_vkb_icf_pane

0x2c82,	// (0x00031c71) popup_fep_vtchi_icf_pane

0xab93,	// (0x00039b82) bg_icf_pane

0xab9f,	// (0x00039b8e) list_vkb_icf_pane

0x4f75,	// (0x00033f64) bg_icf_pane_cp01

0xabab,	// (0x00039b9a) vtchi_icf_list_pane

0xabbc,	// (0x00039bab) list_vkb_icf_pane_t1_ParamLimits

0xabbc,	// (0x00039bab) list_vkb_icf_pane_t1

0xabd4,	// (0x00039bc3) vtchi_icf_list_pane_t1_ParamLimits

0xabd4,	// (0x00039bc3) vtchi_icf_list_pane_t1

0x2c58,	// (0x00031c47) popup_fep_ituss_window_ParamLimits

0x2c82,	// (0x00031c71) popup_fep_vtchi_icf_pane_ParamLimits

0xaad2,	// (0x00039ac1) ituss_keypad_pane_ParamLimits

0x2c98,	// (0x00031c87) ituss_sks_pane

0xab93,	// (0x00039b82) bg_icf_pane_ParamLimits

0x2c34,	// (0x00031c23) icf_edit_indi_pane_ParamLimits

0x2c34,	// (0x00031c23) icf_edit_indi_pane

0xab9f,	// (0x00039b8e) list_vkb_icf_pane_ParamLimits

0x4f75,	// (0x00033f64) bg_icf_pane_cp01_ParamLimits

0x2c43,	// (0x00031c32) icf_edit_indi_pane_cp01_ParamLimits

0x2c43,	// (0x00031c32) icf_edit_indi_pane_cp01

0xabb3,	// (0x00039ba2) vtchi_query_pane

0x201e,	// (0x0003100d) icf_edit_indi_pane_g1_ParamLimits

0x201e,	// (0x0003100d) icf_edit_indi_pane_g1

0x2dd3,	// (0x00031dc2) icf_edit_indi_pane_g2_ParamLimits

0x2dd3,	// (0x00031dc2) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0003ef08) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0003ef08) icf_edit_indi_pane_g

0x2de2,	// (0x00031dd1) icf_edit_indi_pane_t1

0xabf6,	// (0x00039be5) bg_input_focus_pane_cp042

0x3f02,	// (0x00032ef1) vtchi_button_pane

0xabff,	// (0x00039bee) vtchi_query_pane_t1

0xac0d,	// (0x00039bfc) vtchi_query_pane_t2

0xac1b,	// (0x00039c0a) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0003eef7) vtchi_query_pane_t

0x0218,	// (0x0002f207) bg_button_pane_cp13

0xac29,	// (0x00039c18) vtchi_button_pane_g1

0x2dc0,	// (0x00031daf) ituss_sks_pane_g1

0x2dcb,	// (0x00031dba) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0003eefe) ituss_sks_pane_g

0xac31,	// (0x00039c20) ituss_sks_pane_t1

0xac3f,	// (0x00039c2e) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0003ef03) ituss_sks_pane_t

0x7479,	// (0x00036468) indicator_nsta_pane_cp_g1

0x7482,	// (0x00036471) indicator_nsta_pane_cp_g2

0x748a,	// (0x00036479) indicator_nsta_pane_cp_g3

0x7492,	// (0x00036481) indicator_nsta_pane_cp_g4

0x749a,	// (0x00036489) indicator_nsta_pane_cp_g5

0x749a,	// (0x00036489) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0003eaa0) indicator_nsta_pane_cp_g

0xf0b3,	// (0x0003e0a2) cell_graphic2_pane_t2_ParamLimits

0xf0b3,	// (0x0003e0a2) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x0003edb9) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x0003edb9) cell_graphic2_pane_t

0xf0e6,	// (0x0003e0d5) cell_graphic2_control_pane_t1

0xd4f4,	// (0x0003c4e3) signal_pane_g3_ParamLimits

0xd4f4,	// (0x0003c4e3) signal_pane_g3

0xd508,	// (0x0003c4f7) signal_pane_g4_ParamLimits

0xd508,	// (0x0003c4f7) signal_pane_g4

0xaaac,	// (0x00039a9b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaaac,	// (0x00039a9b) cell_ai5_widget_list_row_pane_t3

0xab60,	// (0x00039b4f) cell_ituss_key_pane_t1_ParamLimits

0xab60,	// (0x00039b4f) cell_ituss_key_pane_t1

0x5575,	// (0x00034564) form_field_data_wide_pane_vc_t2_ParamLimits

0x5575,	// (0x00034564) form_field_data_wide_pane_vc_t2

0x5589,	// (0x00034578) form_field_data_wide_pane_vc_t3_ParamLimits

0x5589,	// (0x00034578) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003e7f3) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003e7f3) form_field_data_wide_pane_vc_t

0x7145,	// (0x00036134) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7145,	// (0x00036134) form_field_slider_wide_pane_vc_t3

0x721f,	// (0x0003620e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x721f,	// (0x0003620e) form_field_popup_wide_pane_vc_t2

0x7236,	// (0x00036225) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7236,	// (0x00036225) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0003ea8f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0003ea8f) form_field_popup_wide_pane_vc_t

0xce3f,	// (0x0003be2e) aid_fshwr2_btn_pane_ParamLimits

0xce50,	// (0x0003be3f) aid_fshwr2_syb_pane_ParamLimits

0xce61,	// (0x0003be50) aid_fshwr2_txt_pane_ParamLimits

0x22b7,	// (0x000312a6) fshwr2_bg_pane_ParamLimits

0xce6d,	// (0x0003be5c) fshwr2_func_candi_pane_ParamLimits

0xce8c,	// (0x0003be7b) fshwr2_hwr_syb_pane_ParamLimits

0xcea7,	// (0x0003be96) fshwr2_icf_pane_ParamLimits

0x3337,	// (0x00032326) list_double_graphic_pane_vc_g4_ParamLimits

0x3337,	// (0x00032326) list_double_graphic_pane_vc_g4

0x2cf7,	// (0x00031ce6) cell_ituss_key_pane_g3_ParamLimits

0x2cf7,	// (0x00031ce6) cell_ituss_key_pane_g3

0x2d9f,	// (0x00031d8e) cell_ituss_key_t5_ParamLimits

0x2d9f,	// (0x00031d8e) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

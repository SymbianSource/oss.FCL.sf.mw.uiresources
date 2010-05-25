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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002ed0f };

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
0xd0d1,	// (0x0003bde0) Screen

0xd0dd,	// (0x0003bdec) application_window_ParamLimits

0xd0dd,	// (0x0003bdec) application_window

0x3767,	// (0x00032476) screen_g1

0xb7c2,	// (0x0003a4d1) area_bottom_pane_ParamLimits

0xb7c2,	// (0x0003a4d1) area_bottom_pane

0x02aa,	// (0x0002efb9) area_top_pane_ParamLimits

0x02aa,	// (0x0002efb9) area_top_pane

0x0348,	// (0x0002f057) main_pane_ParamLimits

0x0348,	// (0x0002f057) main_pane

0x3771,	// (0x00032480) misc_graphics

0xd819,	// (0x0003c528) battery_pane_ParamLimits

0xd819,	// (0x0003c528) battery_pane

0x5e01,	// (0x00034b10) bg_status_flat_pane_g8

0x5e09,	// (0x00034b18) bg_status_flat_pane_g9

0x51f5,	// (0x00033f04) context_pane_ParamLimits

0x51f5,	// (0x00033f04) context_pane

0xd984,	// (0x0003c693) navi_pane_ParamLimits

0xd984,	// (0x0003c693) navi_pane

0xda02,	// (0x0003c711) signal_pane_ParamLimits

0xda02,	// (0x0003c711) signal_pane

0x0008,

0xf874,	// (0x0003e583) bg_status_flat_pane_g

0xda92,	// (0x0003c7a1) status_pane_g1_ParamLimits

0xda92,	// (0x0003c7a1) status_pane_g1

0xdaa8,	// (0x0003c7b7) status_pane_g2_ParamLimits

0xdaa8,	// (0x0003c7b7) status_pane_g2

0x541c,	// (0x0003412b) status_pane_g3_ParamLimits

0x541c,	// (0x0003412b) status_pane_g3

0x0004,

0xf7a0,	// (0x0003e4af) status_pane_g_ParamLimits

0xf7a0,	// (0x0003e4af) status_pane_g

0xdab4,	// (0x0003c7c3) title_pane_ParamLimits

0xdab4,	// (0x0003c7c3) title_pane

0xdb17,	// (0x0003c826) uni_indicator_pane_ParamLimits

0xdb17,	// (0x0003c826) uni_indicator_pane

0x5057,	// (0x00033d66) bg_list_pane_ParamLimits

0x5057,	// (0x00033d66) bg_list_pane

0xd78c,	// (0x0003c49b) find_pane

0xc111,	// (0x0003ae20) listscroll_app_pane_ParamLimits

0xc111,	// (0x0003ae20) listscroll_app_pane

0x5083,	// (0x00033d92) listscroll_form_pane

0xc121,	// (0x0003ae30) listscroll_gen_pane_ParamLimits

0xc121,	// (0x0003ae30) listscroll_gen_pane

0x12f9,	// (0x00030008) listscroll_set_pane

0x6982,	// (0x00035691) main_idle_act_pane

0x4d53,	// (0x00033a62) main_idle_trad_pane

0x4d53,	// (0x00033a62) main_list_empty_pane

0x509d,	// (0x00033dac) main_midp_pane

0x50a9,	// (0x00033db8) main_pane_g1_ParamLimits

0x50a9,	// (0x00033db8) main_pane_g1

0xc135,	// (0x0003ae44) popup_ai_message_window_ParamLimits

0xc135,	// (0x0003ae44) popup_ai_message_window

0xc1c6,	// (0x0003aed5) popup_fep_china_uni_window_ParamLimits

0xc1c6,	// (0x0003aed5) popup_fep_china_uni_window

0x1411,	// (0x00030120) popup_fep_japan_candidate_window_ParamLimits

0x1411,	// (0x00030120) popup_fep_japan_candidate_window

0x1431,	// (0x00030140) popup_fep_japan_predictive_window_ParamLimits

0x1431,	// (0x00030140) popup_fep_japan_predictive_window

0xc222,	// (0x0003af31) popup_find_window

0xc23f,	// (0x0003af4e) popup_grid_graphic_window_ParamLimits

0xc23f,	// (0x0003af4e) popup_grid_graphic_window

0x1498,	// (0x000301a7) popup_large_graphic_colour_window

0xc2dd,	// (0x0003afec) popup_menu_window_ParamLimits

0xc2dd,	// (0x0003afec) popup_menu_window

0xc4af,	// (0x0003b1be) popup_note_image_window

0xc475,	// (0x0003b184) popup_note_wait_window_ParamLimits

0xc475,	// (0x0003b184) popup_note_wait_window

0xc4c7,	// (0x0003b1d6) popup_note_window_ParamLimits

0xc4c7,	// (0x0003b1d6) popup_note_window

0xc56d,	// (0x0003b27c) popup_query_code_window_ParamLimits

0xc56d,	// (0x0003b27c) popup_query_code_window

0x16e0,	// (0x000303ef) popup_query_data_code_window_ParamLimits

0x16e0,	// (0x000303ef) popup_query_data_code_window

0xc5a7,	// (0x0003b2b6) popup_query_data_window_ParamLimits

0xc5a7,	// (0x0003b2b6) popup_query_data_window

0xc629,	// (0x0003b338) popup_query_sat_info_window_ParamLimits

0xc629,	// (0x0003b338) popup_query_sat_info_window

0xc6c0,	// (0x0003b3cf) popup_snote_single_graphic_window_ParamLimits

0xc6c0,	// (0x0003b3cf) popup_snote_single_graphic_window

0xc6c0,	// (0x0003b3cf) popup_snote_single_text_window_ParamLimits

0xc6c0,	// (0x0003b3cf) popup_snote_single_text_window

0x1767,	// (0x00030476) popup_sub_window_general

0x1897,	// (0x000305a6) popup_window_general_ParamLimits

0x1897,	// (0x000305a6) popup_window_general

0x50b7,	// (0x00033dc6) power_save_pane

0xbf96,	// (0x0003aca5) control_pane_g1_ParamLimits

0xbf96,	// (0x0003aca5) control_pane_g1

0xbfbf,	// (0x0003acce) control_pane_g2_ParamLimits

0xbfbf,	// (0x0003acce) control_pane_g2

0x501a,	// (0x00033d29) control_pane_g3_ParamLimits

0x501a,	// (0x00033d29) control_pane_g3

0x0007,

0xf788,	// (0x0003e497) control_pane_g_ParamLimits

0xf788,	// (0x0003e497) control_pane_g

0xc000,	// (0x0003ad0f) control_pane_t1_ParamLimits

0xc000,	// (0x0003ad0f) control_pane_t1

0xc066,	// (0x0003ad75) control_pane_t2_ParamLimits

0xc066,	// (0x0003ad75) control_pane_t2

0x0002,

0xf799,	// (0x0003e4a8) control_pane_t_ParamLimits

0xf799,	// (0x0003e4a8) control_pane_t

0xd6be,	// (0x0003c3cd) navi_navi_volume_pane_cp1

0xd6c6,	// (0x0003c3d5) status_small_icon_pane

0x4f4f,	// (0x00033c5e) status_small_pane_g1_ParamLimits

0x4f4f,	// (0x00033c5e) status_small_pane_g1

0xd6ce,	// (0x0003c3dd) status_small_pane_g2_ParamLimits

0xd6ce,	// (0x0003c3dd) status_small_pane_g2

0xd6da,	// (0x0003c3e9) status_small_pane_g3_ParamLimits

0xd6da,	// (0x0003c3e9) status_small_pane_g3

0xd6e6,	// (0x0003c3f5) status_small_pane_g4_ParamLimits

0xd6e6,	// (0x0003c3f5) status_small_pane_g4

0xd6f2,	// (0x0003c401) status_small_pane_g5_ParamLimits

0xd6f2,	// (0x0003c401) status_small_pane_g5

0xd700,	// (0x0003c40f) status_small_pane_g6_ParamLimits

0xd700,	// (0x0003c40f) status_small_pane_g6

0x0007,

0xf777,	// (0x0003e486) status_small_pane_g_ParamLimits

0xf777,	// (0x0003e486) status_small_pane_g

0xd72f,	// (0x0003c43e) status_small_pane_t1

0xd751,	// (0x0003c460) status_small_wait_pane_ParamLimits

0xd751,	// (0x0003c460) status_small_wait_pane

0xd589,	// (0x0003c298) aid_levels_signal_ParamLimits

0xd589,	// (0x0003c298) aid_levels_signal

0xd5a1,	// (0x0003c2b0) signal_pane_g1_ParamLimits

0xd5a1,	// (0x0003c2b0) signal_pane_g1

0xd5bc,	// (0x0003c2cb) signal_pane_g2_ParamLimits

0xd5bc,	// (0x0003c2cb) signal_pane_g2

0x0003,

0xf708,	// (0x0003e417) signal_pane_g_ParamLimits

0xf708,	// (0x0003e417) signal_pane_g

0x4827,	// (0x00033536) context_pane_g1

0xd0ed,	// (0x0003bdfc) title_pane_g1

0xd124,	// (0x0003be33) title_pane_t1

0x3819,	// (0x00032528) title_pane_t2

0x383f,	// (0x0003254e) title_pane_t3

0x0002,

0xf557,	// (0x0003e266) title_pane_t

0xdb3f,	// (0x0003c84e) aid_levels_battery_ParamLimits

0xdb3f,	// (0x0003c84e) aid_levels_battery

0xdb5b,	// (0x0003c86a) battery_pane_g1_ParamLimits

0xdb5b,	// (0x0003c86a) battery_pane_g1

0xdb78,	// (0x0003c887) battery_pane_g2_ParamLimits

0xdb78,	// (0x0003c887) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003e4ba) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003e4ba) battery_pane_g

0xdd39,	// (0x0003ca48) uni_indicator_pane_g1

0xdd4f,	// (0x0003ca5e) uni_indicator_pane_g2

0xdd65,	// (0x0003ca74) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003e62b) uni_indicator_pane_g

0x4bc5,	// (0x000338d4) navi_icon_pane_ParamLimits

0x4bc5,	// (0x000338d4) navi_icon_pane

0x4b03,	// (0x00033812) navi_midp_pane

0x4be1,	// (0x000338f0) navi_navi_pane

0x4beb,	// (0x000338fa) navi_text_pane_ParamLimits

0x4beb,	// (0x000338fa) navi_text_pane

0x3767,	// (0x00032476) status_small_wait_pane_g1

0x3c6e,	// (0x0003297d) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0003e626) status_small_wait_pane_g

0x645c,	// (0x0003516b) navi_navi_icon_text_pane

0x6464,	// (0x00035173) navi_navi_pane_g1_ParamLimits

0x6464,	// (0x00035173) navi_navi_pane_g1

0x6476,	// (0x00035185) navi_navi_pane_g2_ParamLimits

0x6476,	// (0x00035185) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0003e5f4) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0003e5f4) navi_navi_pane_g

0x6488,	// (0x00035197) navi_navi_tabs_pane

0x6491,	// (0x000351a0) navi_navi_text_pane

0x645c,	// (0x0003516b) navi_navi_volume_pane

0x6438,	// (0x00035147) navi_text_pane_t1

0x642c,	// (0x0003513b) navi_icon_pane_g1

0x637f,	// (0x0003508e) navi_navi_text_pane_t1

0x1b43,	// (0x00030852) navi_navi_volume_pane_g1

0x1b4b,	// (0x0003085a) volume_small_pane

0x62e5,	// (0x00034ff4) navi_navi_icon_text_pane_g1

0x62ed,	// (0x00034ffc) navi_navi_icon_text_pane_t1

0x4be1,	// (0x000338f0) navi_tabs_2_long_pane

0x4be1,	// (0x000338f0) navi_tabs_2_pane

0x4be1,	// (0x000338f0) navi_tabs_3_long_pane

0x4be1,	// (0x000338f0) navi_tabs_3_pane

0x4be1,	// (0x000338f0) navi_tabs_4_pane

0x1b23,	// (0x00030832) tabs_2_active_pane_ParamLimits

0x1b23,	// (0x00030832) tabs_2_active_pane

0x1b33,	// (0x00030842) tabs_2_passive_pane_ParamLimits

0x1b33,	// (0x00030842) tabs_2_passive_pane

0x1af1,	// (0x00030800) tabs_3_active_pane_ParamLimits

0x1af1,	// (0x00030800) tabs_3_active_pane

0x1b01,	// (0x00030810) tabs_3_passive_pane_ParamLimits

0x1b01,	// (0x00030810) tabs_3_passive_pane

0x1b12,	// (0x00030821) tabs_3_passive_pane_cp_ParamLimits

0x1b12,	// (0x00030821) tabs_3_passive_pane_cp

0x1aad,	// (0x000307bc) tabs_4_active_pane_ParamLimits

0x1aad,	// (0x000307bc) tabs_4_active_pane

0x1abe,	// (0x000307cd) tabs_4_passive_pane_ParamLimits

0x1abe,	// (0x000307cd) tabs_4_passive_pane

0x1acf,	// (0x000307de) tabs_4_passive_pane_cp_ParamLimits

0x1acf,	// (0x000307de) tabs_4_passive_pane_cp

0x1ae0,	// (0x000307ef) tabs_4_passive_pane_cp2_ParamLimits

0x1ae0,	// (0x000307ef) tabs_4_passive_pane_cp2

0x1a89,	// (0x00030798) tabs_2_long_active_pane_ParamLimits

0x1a89,	// (0x00030798) tabs_2_long_active_pane

0x1a9b,	// (0x000307aa) tabs_2_long_passive_pane_ParamLimits

0x1a9b,	// (0x000307aa) tabs_2_long_passive_pane

0x1a4a,	// (0x00030759) tabs_3_long_active_pane_ParamLimits

0x1a4a,	// (0x00030759) tabs_3_long_active_pane

0x1a5d,	// (0x0003076c) tabs_3_long_passive_pane_ParamLimits

0x1a5d,	// (0x0003076c) tabs_3_long_passive_pane

0x1a76,	// (0x00030785) tabs_3_long_passive_pane_cp_ParamLimits

0x1a76,	// (0x00030785) tabs_3_long_passive_pane_cp

0x19f0,	// (0x000306ff) volume_small_pane_g1

0x19f9,	// (0x00030708) volume_small_pane_g2

0x1a02,	// (0x00030711) volume_small_pane_g3

0x1a0b,	// (0x0003071a) volume_small_pane_g4

0x1a14,	// (0x00030723) volume_small_pane_g5

0x1a1d,	// (0x0003072c) volume_small_pane_g6

0x1a26,	// (0x00030735) volume_small_pane_g7

0x1a2f,	// (0x0003073e) volume_small_pane_g8

0x1a38,	// (0x00030747) volume_small_pane_g9

0x1a41,	// (0x00030750) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0003e5c0) volume_small_pane_g

0x3acc,	// (0x000327db) bg_active_tab_pane_cp2_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp2

0x385f,	// (0x0003256e) tabs_3_active_pane_g1

0xd1b0,	// (0x0003bebf) tabs_3_active_pane_t1

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp2_ParamLimits

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp2

0x385f,	// (0x0003256e) tabs_3_passive_pane_g1

0xd1b0,	// (0x0003bebf) tabs_3_passive_pane_t1

0x3acc,	// (0x000327db) bg_active_tab_pane_cp3_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp3

0x3879,	// (0x00032588) tabs_4_active_pane_g1

0xd1c2,	// (0x0003bed1) tabs_4_active_pane_t1

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp3_ParamLimits

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp3

0x3879,	// (0x00032588) tabs_4_1_passive_pane_g1

0xd1c2,	// (0x0003bed1) tabs_4_1_passive_pane_t1

0x509d,	// (0x00033dac) list_highlight_pane_cp2

0xddeb,	// (0x0003cafa) list_set_pane_ParamLimits

0xddeb,	// (0x0003cafa) list_set_pane

0xde85,	// (0x0003cb94) main_pane_set_t1_ParamLimits

0xde85,	// (0x0003cb94) main_pane_set_t1

0xdea5,	// (0x0003cbb4) main_pane_set_t2_ParamLimits

0xdea5,	// (0x0003cbb4) main_pane_set_t2

0xdeb9,	// (0x0003cbc8) main_pane_set_t3_ParamLimits

0xdeb9,	// (0x0003cbc8) main_pane_set_t3

0xdecb,	// (0x0003cbda) main_pane_set_t4_ParamLimits

0xdecb,	// (0x0003cbda) main_pane_set_t4

0x0003,

0xf981,	// (0x0003e690) main_pane_set_t_ParamLimits

0xf981,	// (0x0003e690) main_pane_set_t

0xdedd,	// (0x0003cbec) setting_code_pane

0xdee7,	// (0x0003cbf6) setting_slider_graphic_pane

0xdee7,	// (0x0003cbf6) setting_slider_pane

0xdee7,	// (0x0003cbf6) setting_text_pane

0xdee7,	// (0x0003cbf6) setting_volume_pane

0x0597,	// (0x0002f2a6) volume_set_pane

0x3851,	// (0x00032560) bg_set_opt_pane_cp

0x059f,	// (0x0002f2ae) setting_slider_pane_t1

0x05b8,	// (0x0002f2c7) setting_slider_pane_t2

0x05d2,	// (0x0002f2e1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003e26d) setting_slider_pane_t

0x05ea,	// (0x0002f2f9) slider_set_pane

0x3771,	// (0x00032480) bg_set_opt_pane_cp2

0x3893,	// (0x000325a2) setting_slider_graphic_pane_g1

0x0600,	// (0x0002f30f) setting_slider_graphic_pane_t1

0x0610,	// (0x0002f31f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003e274) setting_slider_graphic_pane_t

0x0620,	// (0x0002f32f) slider_set_pane_cp

0x3771,	// (0x00032480) input_focus_pane_cp1

0x6969,	// (0x00035678) list_set_text_pane

0x3767,	// (0x00032476) setting_text_pane_g1

0x3771,	// (0x00032480) input_focus_pane_cp2

0x3767,	// (0x00032476) setting_code_pane_g1

0x389c,	// (0x000325ab) setting_code_pane_t1

0x0628,	// (0x0002f337) set_text_pane_t1_ParamLimits

0x0628,	// (0x0002f337) set_text_pane_t1

0x4118,	// (0x00032e27) set_opt_bg_pane_g1

0x4120,	// (0x00032e2f) set_opt_bg_pane_g2

0x6943,	// (0x00035652) set_opt_bg_pane_g3

0x4130,	// (0x00032e3f) set_opt_bg_pane_g4

0x4138,	// (0x00032e47) set_opt_bg_pane_g5

0x4140,	// (0x00032e4f) set_opt_bg_pane_g6

0x694d,	// (0x0003565c) set_opt_bg_pane_g7

0x6955,	// (0x00035664) set_opt_bg_pane_g8

0x695f,	// (0x0003566e) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0003e67d) set_opt_bg_pane_g

0x6936,	// (0x00035645) slider_set_pane_g1

0x1bb8,	// (0x000308c7) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0003e66e) slider_set_pane_g

0x1b54,	// (0x00030863) volume_set_pane_g1

0x1b5c,	// (0x0003086b) volume_set_pane_g2

0x1b64,	// (0x00030873) volume_set_pane_g3

0x1b6c,	// (0x0003087b) volume_set_pane_g4

0x1b74,	// (0x00030883) volume_set_pane_g5

0x1b7c,	// (0x0003088b) volume_set_pane_g6

0x1b84,	// (0x00030893) volume_set_pane_g7

0x1b8c,	// (0x0003089b) volume_set_pane_g8

0x1b94,	// (0x000308a3) volume_set_pane_g9

0x1b9c,	// (0x000308ab) volume_set_pane_g10

0x0009,

0xf937,	// (0x0003e646) volume_set_pane_g

0xd1d4,	// (0x0003bee3) indicator_pane_ParamLimits

0xd1d4,	// (0x0003bee3) indicator_pane

0xd1fc,	// (0x0003bf0b) main_idle_pane_g2_ParamLimits

0xd1fc,	// (0x0003bf0b) main_idle_pane_g2

0xd234,	// (0x0003bf43) main_pane_idle_g1_ParamLimits

0xd234,	// (0x0003bf43) main_pane_idle_g1

0x38eb,	// (0x000325fa) popup_clock_digital_analogue_window_ParamLimits

0x38eb,	// (0x000325fa) popup_clock_digital_analogue_window

0xd25b,	// (0x0003bf6a) soft_indicator_pane_ParamLimits

0xd25b,	// (0x0003bf6a) soft_indicator_pane

0xd275,	// (0x0003bf84) wallpaper_pane_ParamLimits

0xd275,	// (0x0003bf84) wallpaper_pane

0x3767,	// (0x00032476) wallpaper_pane_g1

0xd287,	// (0x0003bf96) indicator_pane_g1_ParamLimits

0xd287,	// (0x0003bf96) indicator_pane_g1

0x6d6d,	// (0x00035a7c) navi_navi_icon_text_pane_srt_g1

0x393d,	// (0x0003264c) soft_indicator_pane_t1

0x3957,	// (0x00032666) aid_ps_area_pane

0xd29d,	// (0x0003bfac) aid_ps_clock_pane

0x3976,	// (0x00032685) aid_ps_indicator_pane

0x3982,	// (0x00032691) indicator_ps_pane_ParamLimits

0x3982,	// (0x00032691) indicator_ps_pane

0x3991,	// (0x000326a0) power_save_pane_g1_ParamLimits

0x3991,	// (0x000326a0) power_save_pane_g1

0x399d,	// (0x000326ac) power_save_pane_g2_ParamLimits

0x399d,	// (0x000326ac) power_save_pane_g2

0x019e,	// (0x0002eead) aid_navinavi_width_pane

0x3957,	// (0x00032666) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003e279) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003e279) power_save_pane_g

0x39ab,	// (0x000326ba) power_save_pane_t1_ParamLimits

0x39ab,	// (0x000326ba) power_save_pane_t1

0xd29d,	// (0x0003bfac) aid_ps_clock_pane_ParamLimits

0x3976,	// (0x00032685) aid_ps_indicator_pane_ParamLimits

0x39bd,	// (0x000326cc) power_save_pane_t4_ParamLimits

0x39bd,	// (0x000326cc) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003e27e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003e27e) power_save_pane_t

0x39e7,	// (0x000326f6) power_save_t3_ParamLimits

0x39e7,	// (0x000326f6) power_save_t3

0x39d2,	// (0x000326e1) power_save_t2_ParamLimits

0x39d2,	// (0x000326e1) power_save_t2

0x39fc,	// (0x0003270b) indicator_ps_pane_g1

0xd2ab,	// (0x0003bfba) ai_gene_pane_ParamLimits

0xd2ab,	// (0x0003bfba) ai_gene_pane

0xd2c2,	// (0x0003bfd1) ai_links_pane_ParamLimits

0xd2c2,	// (0x0003bfd1) ai_links_pane

0xd2da,	// (0x0003bfe9) indicator_pane_cp1_ParamLimits

0xd2da,	// (0x0003bfe9) indicator_pane_cp1

0xd2e9,	// (0x0003bff8) main_pane_idle_g1_cp_ParamLimits

0xd2e9,	// (0x0003bff8) main_pane_idle_g1_cp

0x3a35,	// (0x00032744) popup_ai_links_title_window

0xd301,	// (0x0003c010) soft_indicator_pane_cp1_ParamLimits

0xd301,	// (0x0003c010) soft_indicator_pane_cp1

0x6725,	// (0x00035434) ai_links_pane_g1

0x672e,	// (0x0003543d) grid_ai_links_pane

0xdd30,	// (0x0003ca3f) ai_gene_pane_1

0x6713,	// (0x00035422) ai_gene_pane_2

0x671c,	// (0x0003542b) list_highlight_pane_cp4

0xdd0c,	// (0x0003ca1b) cell_ai_link_pane_ParamLimits

0xdd0c,	// (0x0003ca1b) cell_ai_link_pane

0x66e4,	// (0x000353f3) cell_ai_link_pane_g1

0x3c6e,	// (0x0003297d) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0003e621) cell_ai_link_pane_g

0x3771,	// (0x00032480) grid_highlight_cp2

0x3771,	// (0x00032480) bg_popup_sub_pane_cp1

0x3a58,	// (0x00032767) popup_ai_links_title_window_t1

0x6632,	// (0x00035341) ai_gene_pane_1_g1_ParamLimits

0x6632,	// (0x00035341) ai_gene_pane_1_g1

0x663e,	// (0x0003534d) ai_gene_pane_1_g2_ParamLimits

0x663e,	// (0x0003534d) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0003e617) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0003e617) ai_gene_pane_1_g

0x664b,	// (0x0003535a) ai_gene_pane_1_t1_ParamLimits

0x664b,	// (0x0003535a) ai_gene_pane_1_t1

0x667f,	// (0x0003538e) grid_ai_soft_ind_pane

0x661d,	// (0x0003532c) ai_gene_pane_2_t1_ParamLimits

0x661d,	// (0x0003532c) ai_gene_pane_2_t1

0xd315,	// (0x0003c024) main_pane_empty_t1_ParamLimits

0xd315,	// (0x0003c024) main_pane_empty_t1

0xd32d,	// (0x0003c03c) main_pane_empty_t2_ParamLimits

0xd32d,	// (0x0003c03c) main_pane_empty_t2

0xd342,	// (0x0003c051) main_pane_empty_t3_ParamLimits

0xd342,	// (0x0003c051) main_pane_empty_t3

0xd354,	// (0x0003c063) main_pane_empty_t4_ParamLimits

0xd354,	// (0x0003c063) main_pane_empty_t4

0xd366,	// (0x0003c075) main_pane_empty_t5_ParamLimits

0xd366,	// (0x0003c075) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003e283) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003e283) main_pane_empty_t

0x4169,	// (0x00032e78) bg_popup_window_pane_ParamLimits

0x4169,	// (0x00032e78) bg_popup_window_pane

0x638d,	// (0x0003509c) find_popup_pane_cp2_ParamLimits

0x638d,	// (0x0003509c) find_popup_pane_cp2

0x6399,	// (0x000350a8) heading_pane_ParamLimits

0x6399,	// (0x000350a8) heading_pane

0x3771,	// (0x00032480) bg_popup_sub_pane

0xdc8d,	// (0x0003c99c) bg_popup_window_pane_g1_ParamLimits

0xdc8d,	// (0x0003c99c) bg_popup_window_pane_g1

0xdc9c,	// (0x0003c9ab) bg_popup_window_pane_g2_ParamLimits

0xdc9c,	// (0x0003c9ab) bg_popup_window_pane_g2

0xdca8,	// (0x0003c9b7) bg_popup_window_pane_g3_ParamLimits

0xdca8,	// (0x0003c9b7) bg_popup_window_pane_g3

0xdcb4,	// (0x0003c9c3) bg_popup_window_pane_g4_ParamLimits

0xdcb4,	// (0x0003c9c3) bg_popup_window_pane_g4

0xdcc3,	// (0x0003c9d2) bg_popup_window_pane_g5_ParamLimits

0xdcc3,	// (0x0003c9d2) bg_popup_window_pane_g5

0xdcd3,	// (0x0003c9e2) bg_popup_window_pane_g6_ParamLimits

0xdcd3,	// (0x0003c9e2) bg_popup_window_pane_g6

0xdcdf,	// (0x0003c9ee) bg_popup_window_pane_g7_ParamLimits

0xdcdf,	// (0x0003c9ee) bg_popup_window_pane_g7

0xdcee,	// (0x0003c9fd) bg_popup_window_pane_g8_ParamLimits

0xdcee,	// (0x0003c9fd) bg_popup_window_pane_g8

0xdcfd,	// (0x0003ca0c) bg_popup_window_pane_g9_ParamLimits

0xdcfd,	// (0x0003ca0c) bg_popup_window_pane_g9

0x6373,	// (0x00035082) bg_popup_window_pane_g10_ParamLimits

0x6373,	// (0x00035082) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0003e5df) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0003e5df) bg_popup_window_pane_g

0x629c,	// (0x00034fab) bg_popup_heading_pane_ParamLimits

0x629c,	// (0x00034fab) bg_popup_heading_pane

0x1c40,	// (0x0003094f) tabs_4_passive_pane_cp_srt_ParamLimits

0x1c40,	// (0x0003094f) tabs_4_passive_pane_cp_srt

0x1c52,	// (0x00030961) tabs_4_passive_pane_srt_ParamLimits

0x62b0,	// (0x00034fbf) heading_pane_g2

0x1c52,	// (0x00030961) tabs_4_passive_pane_srt

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp3_srt

0x62b8,	// (0x00034fc7) heading_pane_t1_ParamLimits

0x62b8,	// (0x00034fc7) heading_pane_t1

0x62cf,	// (0x00034fde) heading_pane_t2_ParamLimits

0x62cf,	// (0x00034fde) heading_pane_t2

0x0001,

0xf8cb,	// (0x0003e5da) heading_pane_t_ParamLimits

0xf8cb,	// (0x0003e5da) heading_pane_t

0x5dc9,	// (0x00034ad8) bg_popup_heading_pane_g1

0x5e78,	// (0x00034b87) bg_popup_heading_pane_g2

0x5e82,	// (0x00034b91) bg_popup_heading_pane_g3

0x5e8c,	// (0x00034b9b) bg_popup_heading_pane_g4

0x5e96,	// (0x00034ba5) bg_popup_heading_pane_g5

0x5ea0,	// (0x00034baf) bg_popup_heading_pane_g6

0x5ea8,	// (0x00034bb7) bg_popup_heading_pane_g7

0x5eb0,	// (0x00034bbf) bg_popup_heading_pane_g8

0x5eba,	// (0x00034bc9) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0003e596) bg_popup_heading_pane_g

0x55a7,	// (0x000342b6) bg_popup_sub_pane_g1

0x55af,	// (0x000342be) bg_popup_sub_pane_g2

0x55b7,	// (0x000342c6) bg_popup_sub_pane_g3

0x55c7,	// (0x000342d6) bg_popup_sub_pane_g4

0x55bf,	// (0x000342ce) bg_popup_sub_pane_g5

0x55cf,	// (0x000342de) bg_popup_sub_pane_g6

0x55d7,	// (0x000342e6) bg_popup_sub_pane_g7

0x55e7,	// (0x000342f6) bg_popup_sub_pane_g8

0x55df,	// (0x000342ee) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0003e570) bg_popup_sub_pane_g

0x3acc,	// (0x000327db) bg_popup_window_pane_cp5_ParamLimits

0x3acc,	// (0x000327db) bg_popup_window_pane_cp5

0x3ae8,	// (0x000327f7) popup_note_window_g1_ParamLimits

0x3ae8,	// (0x000327f7) popup_note_window_g1

0x3af4,	// (0x00032803) popup_note_window_t1_ParamLimits

0x3af4,	// (0x00032803) popup_note_window_t1

0x3b0a,	// (0x00032819) popup_note_window_t2_ParamLimits

0x3b0a,	// (0x00032819) popup_note_window_t2

0x3b20,	// (0x0003282f) popup_note_window_t3_ParamLimits

0x3b20,	// (0x0003282f) popup_note_window_t3

0x3b36,	// (0x00032845) popup_note_window_t4_ParamLimits

0x3b36,	// (0x00032845) popup_note_window_t4

0x3b5e,	// (0x0003286d) popup_note_window_t5_ParamLimits

0x3b5e,	// (0x0003286d) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003e28e) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003e28e) popup_note_window_t

0x3b82,	// (0x00032891) bg_popup_window_pane_cp6_ParamLimits

0x3b82,	// (0x00032891) bg_popup_window_pane_cp6

0x5d39,	// (0x00034a48) popup_note_image_window_g1_ParamLimits

0x5d39,	// (0x00034a48) popup_note_image_window_g1

0x5d51,	// (0x00034a60) popup_note_image_window_g2_ParamLimits

0x5d51,	// (0x00034a60) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0003e564) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0003e564) popup_note_image_window_g

0x5d6a,	// (0x00034a79) popup_note_image_window_t1_ParamLimits

0x5d6a,	// (0x00034a79) popup_note_image_window_t1

0x5d83,	// (0x00034a92) popup_note_image_window_t2_ParamLimits

0x5d83,	// (0x00034a92) popup_note_image_window_t2

0x5d9c,	// (0x00034aab) popup_note_image_window_t3_ParamLimits

0x5d9c,	// (0x00034aab) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0003e569) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0003e569) popup_note_image_window_t

0x5bfa,	// (0x00034909) bg_popup_window_pane_cp7_ParamLimits

0x5bfa,	// (0x00034909) bg_popup_window_pane_cp7

0x5c2a,	// (0x00034939) popup_note_wait_window_g1_ParamLimits

0x5c2a,	// (0x00034939) popup_note_wait_window_g1

0x5c36,	// (0x00034945) popup_note_wait_window_g2_ParamLimits

0x5c36,	// (0x00034945) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0003e552) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0003e552) popup_note_wait_window_g

0x5c4e,	// (0x0003495d) popup_note_wait_window_t1_ParamLimits

0x5c4e,	// (0x0003495d) popup_note_wait_window_t1

0x5c75,	// (0x00034984) popup_note_wait_window_t2_ParamLimits

0x5c75,	// (0x00034984) popup_note_wait_window_t2

0x5c92,	// (0x000349a1) popup_note_wait_window_t3_ParamLimits

0x5c92,	// (0x000349a1) popup_note_wait_window_t3

0x5ca5,	// (0x000349b4) popup_note_wait_window_t4_ParamLimits

0x5ca5,	// (0x000349b4) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0003e559) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0003e559) popup_note_wait_window_t

0x5cca,	// (0x000349d9) wait_bar_pane_ParamLimits

0x5cca,	// (0x000349d9) wait_bar_pane

0x3771,	// (0x00032480) wait_anim_pane

0x3771,	// (0x00032480) wait_border_pane

0x3767,	// (0x00032476) wait_anim_pane_g1

0x3767,	// (0x00032476) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003e412) wait_anim_pane_g

0x5b9e,	// (0x000348ad) wait_border_pane_g1

0x5ba9,	// (0x000348b8) wait_border_pane_g2

0x5bb2,	// (0x000348c1) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0003e54b) wait_border_pane_g

0x5a09,	// (0x00034718) bg_popup_window_pane_cp16_ParamLimits

0x5a09,	// (0x00034718) bg_popup_window_pane_cp16

0x5b09,	// (0x00034818) indicator_popup_pane_cp4_ParamLimits

0x5b09,	// (0x00034818) indicator_popup_pane_cp4

0x5b1d,	// (0x0003482c) popup_query_data_window_t1_ParamLimits

0x5b1d,	// (0x0003482c) popup_query_data_window_t1

0x5b2f,	// (0x0003483e) popup_query_data_window_t2_ParamLimits

0x5b2f,	// (0x0003483e) popup_query_data_window_t2

0x5b48,	// (0x00034857) popup_query_data_window_t3_ParamLimits

0x5b48,	// (0x00034857) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0003e544) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0003e544) popup_query_data_window_t

0x5b62,	// (0x00034871) query_popup_data_pane_ParamLimits

0x5b62,	// (0x00034871) query_popup_data_pane

0x5b76,	// (0x00034885) query_popup_data_pane_cp1_ParamLimits

0x5b76,	// (0x00034885) query_popup_data_pane_cp1

0x5a09,	// (0x00034718) bg_popup_window_pane_cp10_ParamLimits

0x5a09,	// (0x00034718) bg_popup_window_pane_cp10

0x5a3b,	// (0x0003474a) indicator_popup_pane_ParamLimits

0x5a3b,	// (0x0003474a) indicator_popup_pane

0x5a5d,	// (0x0003476c) popup_query_code_window_t1_ParamLimits

0x5a5d,	// (0x0003476c) popup_query_code_window_t1

0x5a77,	// (0x00034786) popup_query_code_window_t2_ParamLimits

0x5a77,	// (0x00034786) popup_query_code_window_t2

0x5ac0,	// (0x000347cf) popup_query_code_window_t3_ParamLimits

0x5ac0,	// (0x000347cf) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0003e53d) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0003e53d) popup_query_code_window_t

0x5aef,	// (0x000347fe) query_popup_pane_ParamLimits

0x5aef,	// (0x000347fe) query_popup_pane

0x3b82,	// (0x00032891) bg_popup_window_pane_cp15_ParamLimits

0x3b82,	// (0x00032891) bg_popup_window_pane_cp15

0x3ba0,	// (0x000328af) indicator_popup_pane_cp1_ParamLimits

0x3ba0,	// (0x000328af) indicator_popup_pane_cp1

0x3bb3,	// (0x000328c2) indicator_popup_pane_cp2_ParamLimits

0x3bb3,	// (0x000328c2) indicator_popup_pane_cp2

0x3bc6,	// (0x000328d5) popup_query_data_code_window_g1_ParamLimits

0x3bc6,	// (0x000328d5) popup_query_data_code_window_g1

0x3bd9,	// (0x000328e8) popup_query_data_code_window_t1_ParamLimits

0x3bd9,	// (0x000328e8) popup_query_data_code_window_t1

0x3beb,	// (0x000328fa) popup_query_data_code_window_t2_ParamLimits

0x3beb,	// (0x000328fa) popup_query_data_code_window_t2

0x3bfd,	// (0x0003290c) popup_query_data_code_window_t3_ParamLimits

0x3bfd,	// (0x0003290c) popup_query_data_code_window_t3

0x3c13,	// (0x00032922) popup_query_data_code_window_t4_ParamLimits

0x3c13,	// (0x00032922) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003e299) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003e299) popup_query_data_code_window_t

0x1901,	// (0x00030610) list_single_midp_graphic_pane_g3

0x3c2b,	// (0x0003293a) query_popup_data_pane_cp2_ParamLimits

0x3c3e,	// (0x0003294d) query_popup_pane_cp2_ParamLimits

0x3c3e,	// (0x0003294d) query_popup_pane_cp2

0x3771,	// (0x00032480) bg_popup_window_pane_cp11

0x5a01,	// (0x00034710) heading_pane_cp5

0x3d29,	// (0x00032a38) listscroll_popup_info_pane

0x3771,	// (0x00032480) input_focus_pane_cp3

0x3c51,	// (0x00032960) query_popup_pane_t1

0x3c5f,	// (0x0003296e) list_popup_info_pane_ParamLimits

0x3c5f,	// (0x0003296e) list_popup_info_pane

0x3c6e,	// (0x0003297d) listscroll_popup_info_pane_g1

0x3c76,	// (0x00032985) scroll_pane_cp7

0x3c80,	// (0x0003298f) popup_info_list_pane_t1_ParamLimits

0x3c80,	// (0x0003298f) popup_info_list_pane_t1

0x3c9a,	// (0x000329a9) popup_info_list_pane_t2_ParamLimits

0x3c9a,	// (0x000329a9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003e2a2) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003e2a2) popup_info_list_pane_t

0x3771,	// (0x00032480) bg_popup_window_pane_cp12

0x6d87,	// (0x00035a96) find_popup_pane

0x3851,	// (0x00032560) bg_popup_window_pane_cp3

0x3cb4,	// (0x000329c3) heading_pane_cp3

0x3cc0,	// (0x000329cf) listscroll_popup_graphic_pane

0x3771,	// (0x00032480) bg_popup_window_pane_cp4

0xd3c8,	// (0x0003c0d7) heading_pane_cp4

0x3d29,	// (0x00032a38) listscroll_popup_colour_pane

0x3d31,	// (0x00032a40) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3d31,	// (0x00032a40) cell_large_graphic_colour_none_popup_pane

0xd3d0,	// (0x0003c0df) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3d0,	// (0x0003c0df) grid_large_graphic_colour_popup_pane

0x3d71,	// (0x00032a80) listscroll_popup_colour_pane_g1_ParamLimits

0x3d71,	// (0x00032a80) listscroll_popup_colour_pane_g1

0x3d88,	// (0x00032a97) listscroll_popup_colour_pane_g2_ParamLimits

0x3d88,	// (0x00032a97) listscroll_popup_colour_pane_g2

0x3d9f,	// (0x00032aae) listscroll_popup_colour_pane_g3_ParamLimits

0x3d9f,	// (0x00032aae) listscroll_popup_colour_pane_g3

0xd3f4,	// (0x0003c103) listscroll_popup_colour_pane_g4_ParamLimits

0xd3f4,	// (0x0003c103) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003e2a7) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003e2a7) listscroll_popup_colour_pane_g

0x3dc3,	// (0x00032ad2) scroll_pane_cp6_ParamLimits

0x3dc3,	// (0x00032ad2) scroll_pane_cp6

0xd404,	// (0x0003c113) cell_large_graphic_colour_popup_pane_ParamLimits

0xd404,	// (0x0003c113) cell_large_graphic_colour_popup_pane

0x3df4,	// (0x00032b03) cell_large_graphic_colour_none_popup_pane_t1

0x3771,	// (0x00032480) grid_highlight_pane_cp5

0x3e03,	// (0x00032b12) cell_large_graphic_colour_popup_pane_g1

0x3e0b,	// (0x00032b1a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003e2b0) cell_large_graphic_colour_popup_pane_g

0x3e13,	// (0x00032b22) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e1c,	// (0x00032b2b) grid_highlight_pane_cp4

0x3e24,	// (0x00032b33) bg_popup_window_pane_cp8_ParamLimits

0x3e24,	// (0x00032b33) bg_popup_window_pane_cp8

0x3e3f,	// (0x00032b4e) popup_snote_single_text_window_g1_ParamLimits

0x3e3f,	// (0x00032b4e) popup_snote_single_text_window_g1

0x3e51,	// (0x00032b60) popup_snote_single_text_window_t1_ParamLimits

0x3e51,	// (0x00032b60) popup_snote_single_text_window_t1

0x3e64,	// (0x00032b73) popup_snote_single_text_window_t2_ParamLimits

0x3e64,	// (0x00032b73) popup_snote_single_text_window_t2

0x3e77,	// (0x00032b86) popup_snote_single_text_window_t3_ParamLimits

0x3e77,	// (0x00032b86) popup_snote_single_text_window_t3

0x3eb0,	// (0x00032bbf) popup_snote_single_text_window_t4_ParamLimits

0x3eb0,	// (0x00032bbf) popup_snote_single_text_window_t4

0x3ee4,	// (0x00032bf3) popup_snote_single_text_window_t5_ParamLimits

0x3ee4,	// (0x00032bf3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003e2b5) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003e2b5) popup_snote_single_text_window_t

0x3f13,	// (0x00032c22) bg_popup_window_pane_cp9_ParamLimits

0x3f13,	// (0x00032c22) bg_popup_window_pane_cp9

0x3e3f,	// (0x00032b4e) popup_snote_single_graphic_window_g1_ParamLimits

0x3e3f,	// (0x00032b4e) popup_snote_single_graphic_window_g1

0x3f21,	// (0x00032c30) popup_snote_single_graphic_window_g2_ParamLimits

0x3f21,	// (0x00032c30) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003e2c0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003e2c0) popup_snote_single_graphic_window_g

0x3f2d,	// (0x00032c3c) popup_snote_single_graphic_window_t1_ParamLimits

0x3f2d,	// (0x00032c3c) popup_snote_single_graphic_window_t1

0x3f40,	// (0x00032c4f) popup_snote_single_graphic_window_t2_ParamLimits

0x3f40,	// (0x00032c4f) popup_snote_single_graphic_window_t2

0x3f53,	// (0x00032c62) popup_snote_single_graphic_window_t3_ParamLimits

0x3f53,	// (0x00032c62) popup_snote_single_graphic_window_t3

0x3f8c,	// (0x00032c9b) popup_snote_single_graphic_window_t4_ParamLimits

0x3f8c,	// (0x00032c9b) popup_snote_single_graphic_window_t4

0x3fc0,	// (0x00032ccf) popup_snote_single_graphic_window_t5_ParamLimits

0x3fc0,	// (0x00032ccf) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003e2c5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003e2c5) popup_snote_single_graphic_window_t

0x6cc9,	// (0x000359d8) grid_graphic_popup_pane_ParamLimits

0x6cc9,	// (0x000359d8) grid_graphic_popup_pane

0x6cf3,	// (0x00035a02) listscroll_popup_graphic_pane_g1_ParamLimits

0x6cf3,	// (0x00035a02) listscroll_popup_graphic_pane_g1

0xdff6,	// (0x0003cd05) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff6,	// (0x0003cd05) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003e6ba) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003e6ba) listscroll_popup_graphic_pane_g

0x6d1b,	// (0x00035a2a) scroll_pane_cp5

0xdf9b,	// (0x0003ccaa) cell_graphic_popup_pane_ParamLimits

0xdf9b,	// (0x0003ccaa) cell_graphic_popup_pane

0x6c49,	// (0x00035958) cell_graphic_popup_pane_g1

0x6c51,	// (0x00035960) cell_graphic_popup_pane_g2

0x3e13,	// (0x00032b22) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0003e6b3) cell_graphic_popup_pane_g

0x6c5a,	// (0x00035969) cell_graphic_popup_pane_t2

0x3e1c,	// (0x00032b2b) grid_highlight_pane_cp3

0x4001,	// (0x00032d10) list_gen_pane_ParamLimits

0x4001,	// (0x00032d10) list_gen_pane

0x4033,	// (0x00032d42) scroll_pane

0xdf52,	// (0x0003cc61) bg_list_pane_g1_ParamLimits

0xdf52,	// (0x0003cc61) bg_list_pane_g1

0x6bbe,	// (0x000358cd) bg_list_pane_g2_ParamLimits

0x6bbe,	// (0x000358cd) bg_list_pane_g2

0x6bd3,	// (0x000358e2) bg_list_pane_g3_ParamLimits

0x6bd3,	// (0x000358e2) bg_list_pane_g3

0x6be7,	// (0x000358f6) bg_list_pane_g4_ParamLimits

0x6be7,	// (0x000358f6) bg_list_pane_g4

0xdf6f,	// (0x0003cc7e) bg_list_pane_g5_ParamLimits

0xdf6f,	// (0x0003cc7e) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003e6a8) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003e6a8) bg_list_pane_g

0xdf1a,	// (0x0003cc29) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double2_graphic_large_graphic_pane

0xdf1a,	// (0x0003cc29) list_double2_graphic_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double2_graphic_pane

0xdf1a,	// (0x0003cc29) list_double2_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double2_large_graphic_pane

0xdf1a,	// (0x0003cc29) list_double2_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double2_pane

0xdf1a,	// (0x0003cc29) list_double_graphic_heading_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_graphic_heading_pane

0xdf1a,	// (0x0003cc29) list_double_graphic_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_graphic_pane

0xdf1a,	// (0x0003cc29) list_double_heading_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_heading_pane

0xdf1a,	// (0x0003cc29) list_double_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_large_graphic_pane

0xdf1a,	// (0x0003cc29) list_double_number_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_number_pane

0xdf1a,	// (0x0003cc29) list_double_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_pane

0xdf1a,	// (0x0003cc29) list_double_time_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_double_time_pane

0xdf1a,	// (0x0003cc29) list_setting_number_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_setting_number_pane

0xdf1a,	// (0x0003cc29) list_setting_pane_ParamLimits

0xdf1a,	// (0x0003cc29) list_setting_pane

0xdf2c,	// (0x0003cc3b) list_single_2graphic_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_2graphic_pane

0xdf2c,	// (0x0003cc3b) list_single_graphic_heading_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_graphic_heading_pane

0xdf2c,	// (0x0003cc3b) list_single_graphic_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_graphic_pane

0xdf2c,	// (0x0003cc3b) list_single_heading_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_heading_pane

0xdf2c,	// (0x0003cc3b) list_single_large_graphic_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_large_graphic_pane

0xdf2c,	// (0x0003cc3b) list_single_number_heading_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_number_heading_pane

0xdf2c,	// (0x0003cc3b) list_single_number_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_number_pane

0xdf2c,	// (0x0003cc3b) list_single_pane_ParamLimits

0xdf2c,	// (0x0003cc3b) list_single_pane

0x3771,	// (0x00032480) list_highlight_pane_cp1

0x2de8,	// (0x00031af7) list_single_pane_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_pane_g1

0x2df4,	// (0x00031b03) list_single_pane_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_pane_g

0x30cf,	// (0x00031dde) list_single_pane_t1_ParamLimits

0x30cf,	// (0x00031dde) list_single_pane_t1

0x2de8,	// (0x00031af7) list_single_number_pane_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_number_pane_g1

0x2df4,	// (0x00031b03) list_single_number_pane_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_number_pane_g

0x2e00,	// (0x00031b0f) list_single_number_pane_t1_ParamLimits

0x2e00,	// (0x00031b0f) list_single_number_pane_t1

0xc866,	// (0x0003b575) list_single_number_pane_t2_ParamLimits

0xc866,	// (0x0003b575) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003e669) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003e669) list_single_number_pane_t

0xb9a0,	// (0x0003a6af) list_single_graphic_pane_g1_ParamLimits

0xb9a0,	// (0x0003a6af) list_single_graphic_pane_g1

0x2de8,	// (0x00031af7) list_single_graphic_pane_g2_ParamLimits

0x2de8,	// (0x00031af7) list_single_graphic_pane_g2

0x2df4,	// (0x00031b03) list_single_graphic_pane_g3_ParamLimits

0x2df4,	// (0x00031b03) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003e2d0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003e2d0) list_single_graphic_pane_g

0xb9ac,	// (0x0003a6bb) list_single_graphic_pane_t1_ParamLimits

0xb9ac,	// (0x0003a6bb) list_single_graphic_pane_t1

0x2de8,	// (0x00031af7) list_single_heading_pane_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_heading_pane_g1

0x2df4,	// (0x00031b03) list_single_heading_pane_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_heading_pane_g

0xb9c2,	// (0x0003a6d1) list_single_heading_pane_t1_ParamLimits

0xb9c2,	// (0x0003a6d1) list_single_heading_pane_t1

0xb9d8,	// (0x0003a6e7) list_single_heading_pane_t2_ParamLimits

0xb9d8,	// (0x0003a6e7) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003e2dc) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003e2dc) list_single_heading_pane_t

0x2de8,	// (0x00031af7) list_single_number_heading_pane_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_number_heading_pane_g1

0x2df4,	// (0x00031b03) list_single_number_heading_pane_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_number_heading_pane_g

0xb9c2,	// (0x0003a6d1) list_single_number_heading_pane_t1_ParamLimits

0xb9c2,	// (0x0003a6d1) list_single_number_heading_pane_t1

0x3083,	// (0x00031d92) list_single_number_heading_pane_t2_ParamLimits

0x3083,	// (0x00031d92) list_single_number_heading_pane_t2

0x3095,	// (0x00031da4) list_single_number_heading_pane_t3_ParamLimits

0x3095,	// (0x00031da4) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003e2e1) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003e2e1) list_single_number_heading_pane_t

0x2ddc,	// (0x00031aeb) list_single_graphic_heading_pane_g1_ParamLimits

0x2ddc,	// (0x00031aeb) list_single_graphic_heading_pane_g1

0xb9ea,	// (0x0003a6f9) list_single_graphic_heading_pane_g4_ParamLimits

0xb9ea,	// (0x0003a6f9) list_single_graphic_heading_pane_g4

0x2df4,	// (0x00031b03) list_single_graphic_heading_pane_g5_ParamLimits

0x2df4,	// (0x00031b03) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003e2e8) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003e2e8) list_single_graphic_heading_pane_g

0xb9c2,	// (0x0003a6d1) list_single_graphic_heading_pane_t1_ParamLimits

0xb9c2,	// (0x0003a6d1) list_single_graphic_heading_pane_t1

0xb9fb,	// (0x0003a70a) list_single_graphic_heading_pane_t2_ParamLimits

0xb9fb,	// (0x0003a70a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003e2ef) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003e2ef) list_single_graphic_heading_pane_t

0x30e5,	// (0x00031df4) list_single_large_graphic_pane_g1_ParamLimits

0x30e5,	// (0x00031df4) list_single_large_graphic_pane_g1

0x2de8,	// (0x00031af7) list_single_large_graphic_pane_g2_ParamLimits

0x2de8,	// (0x00031af7) list_single_large_graphic_pane_g2

0x2df4,	// (0x00031b03) list_single_large_graphic_pane_g3_ParamLimits

0x2df4,	// (0x00031b03) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003e2f4) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003e2f4) list_single_large_graphic_pane_g

0x5ba9,	// (0x000348b8) wait_border_pane_g2_copy1

0xba0d,	// (0x0003a71c) list_single_large_graphic_pane_g4_cp2

0x30f1,	// (0x00031e00) list_single_large_graphic_pane_t1_ParamLimits

0x30f1,	// (0x00031e00) list_single_large_graphic_pane_t1

0xba15,	// (0x0003a724) list_double_pane_g1_ParamLimits

0xba15,	// (0x0003a724) list_double_pane_g1

0xba21,	// (0x0003a730) list_double_pane_g2_ParamLimits

0xba21,	// (0x0003a730) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003e2fb) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003e2fb) list_double_pane_g

0xba2d,	// (0x0003a73c) list_double_pane_t1_ParamLimits

0xba2d,	// (0x0003a73c) list_double_pane_t1

0xba43,	// (0x0003a752) list_double_pane_t2_ParamLimits

0xba43,	// (0x0003a752) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003e300) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003e300) list_double_pane_t

0xba55,	// (0x0003a764) list_double2_pane_g1_ParamLimits

0xba55,	// (0x0003a764) list_double2_pane_g1

0xba66,	// (0x0003a775) list_double2_pane_g2_ParamLimits

0xba66,	// (0x0003a775) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003e305) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003e305) list_double2_pane_g

0xba72,	// (0x0003a781) list_double2_pane_t1_ParamLimits

0xba72,	// (0x0003a781) list_double2_pane_t1

0xba88,	// (0x0003a797) list_double2_pane_t2_ParamLimits

0xba88,	// (0x0003a797) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003e30a) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003e30a) list_double2_pane_t

0xba15,	// (0x0003a724) list_double_number_pane_g1_ParamLimits

0xba15,	// (0x0003a724) list_double_number_pane_g1

0xba21,	// (0x0003a730) list_double_number_pane_g2_ParamLimits

0xba21,	// (0x0003a730) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003e2fb) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003e2fb) list_double_number_pane_g

0xba9a,	// (0x0003a7a9) list_double_number_pane_t1_ParamLimits

0xba9a,	// (0x0003a7a9) list_double_number_pane_t1

0xbaac,	// (0x0003a7bb) list_double_number_pane_t2_ParamLimits

0xbaac,	// (0x0003a7bb) list_double_number_pane_t2

0xbac2,	// (0x0003a7d1) list_double_number_pane_t3_ParamLimits

0xbac2,	// (0x0003a7d1) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003e30f) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003e30f) list_double_number_pane_t

0xbad4,	// (0x0003a7e3) list_double_graphic_pane_g1_ParamLimits

0xbad4,	// (0x0003a7e3) list_double_graphic_pane_g1

0xbae0,	// (0x0003a7ef) list_double_graphic_pane_g2_ParamLimits

0xbae0,	// (0x0003a7ef) list_double_graphic_pane_g2

0xbaef,	// (0x0003a7fe) list_double_graphic_pane_g3_ParamLimits

0xbaef,	// (0x0003a7fe) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003e316) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003e316) list_double_graphic_pane_g

0xbb07,	// (0x0003a816) list_double_graphic_pane_t1_ParamLimits

0xbb07,	// (0x0003a816) list_double_graphic_pane_t1

0xbb1d,	// (0x0003a82c) list_double_graphic_pane_t2_ParamLimits

0xbb1d,	// (0x0003a82c) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003e31f) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003e31f) list_double_graphic_pane_t

0x0971,	// (0x0002f680) list_double2_graphic_pane_g1_ParamLimits

0x0971,	// (0x0002f680) list_double2_graphic_pane_g1

0x33a6,	// (0x000320b5) list_double2_graphic_pane_g2_ParamLimits

0x33a6,	// (0x000320b5) list_double2_graphic_pane_g2

0xba66,	// (0x0003a775) list_double2_graphic_pane_g3_ParamLimits

0xba66,	// (0x0003a775) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003e324) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003e324) list_double2_graphic_pane_g

0xbb2f,	// (0x0003a83e) list_double2_graphic_pane_t1_ParamLimits

0xbb2f,	// (0x0003a83e) list_double2_graphic_pane_t1

0xbb45,	// (0x0003a854) list_double2_graphic_pane_t2_ParamLimits

0xbb45,	// (0x0003a854) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003e32b) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003e32b) list_double2_graphic_pane_t

0xbb57,	// (0x0003a866) list_double_large_graphic_pane_g1_ParamLimits

0xbb57,	// (0x0003a866) list_double_large_graphic_pane_g1

0xbb76,	// (0x0003a885) list_double_large_graphic_pane_g2_ParamLimits

0xbb76,	// (0x0003a885) list_double_large_graphic_pane_g2

0xba21,	// (0x0003a730) list_double_large_graphic_pane_g3_ParamLimits

0xba21,	// (0x0003a730) list_double_large_graphic_pane_g3

0xbb87,	// (0x0003a896) list_double_large_graphic_pane_g4_ParamLimits

0xbb87,	// (0x0003a896) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003e330) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003e330) list_double_large_graphic_pane_g

0xbb9a,	// (0x0003a8a9) list_double_large_graphic_pane_t1_ParamLimits

0xbb9a,	// (0x0003a8a9) list_double_large_graphic_pane_t1

0xbbb3,	// (0x0003a8c2) list_double_large_graphic_pane_t2_ParamLimits

0xbbb3,	// (0x0003a8c2) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003e33b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003e33b) list_double_large_graphic_pane_t

0xbbc5,	// (0x0003a8d4) list_double2_large_graphic_pane_g1_ParamLimits

0xbbc5,	// (0x0003a8d4) list_double2_large_graphic_pane_g1

0xba55,	// (0x0003a764) list_double2_large_graphic_pane_g2_ParamLimits

0xba55,	// (0x0003a764) list_double2_large_graphic_pane_g2

0xba66,	// (0x0003a775) list_double2_large_graphic_pane_g3_ParamLimits

0xba66,	// (0x0003a775) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003e340) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003e340) list_double2_large_graphic_pane_g

0xbbd1,	// (0x0003a8e0) list_double2_large_graphic_pane_t1_ParamLimits

0xbbd1,	// (0x0003a8e0) list_double2_large_graphic_pane_t1

0xbbe7,	// (0x0003a8f6) list_double2_large_graphic_pane_t2_ParamLimits

0xbbe7,	// (0x0003a8f6) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003e347) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003e347) list_double2_large_graphic_pane_t

0xbbf9,	// (0x0003a908) list_double_heading_pane_g1_ParamLimits

0xbbf9,	// (0x0003a908) list_double_heading_pane_g1

0x0746,	// (0x0002f455) list_double_heading_pane_g2_ParamLimits

0x0746,	// (0x0002f455) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003e34c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003e34c) list_double_heading_pane_g

0xbc0a,	// (0x0003a919) list_double_heading_pane_t1_ParamLimits

0xbc0a,	// (0x0003a919) list_double_heading_pane_t1

0xba88,	// (0x0003a797) list_double_heading_pane_t2_ParamLimits

0xba88,	// (0x0003a797) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003e351) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003e351) list_double_heading_pane_t

0x0971,	// (0x0002f680) list_double_graphic_heading_pane_g1_ParamLimits

0x0971,	// (0x0002f680) list_double_graphic_heading_pane_g1

0xbbf9,	// (0x0003a908) list_double_graphic_heading_pane_g2_ParamLimits

0xbbf9,	// (0x0003a908) list_double_graphic_heading_pane_g2

0x0746,	// (0x0002f455) list_double_graphic_heading_pane_g3_ParamLimits

0x0746,	// (0x0002f455) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003e356) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003e356) list_double_graphic_heading_pane_g

0xbc20,	// (0x0003a92f) list_double_graphic_heading_pane_t1_ParamLimits

0xbc20,	// (0x0003a92f) list_double_graphic_heading_pane_t1

0xbb45,	// (0x0003a854) list_double_graphic_heading_pane_t2_ParamLimits

0xbb45,	// (0x0003a854) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003e35d) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003e35d) list_double_graphic_heading_pane_t

0xbb76,	// (0x0003a885) list_double_time_pane_g1_ParamLimits

0xbb76,	// (0x0003a885) list_double_time_pane_g1

0xba21,	// (0x0003a730) list_double_time_pane_g2_ParamLimits

0xba21,	// (0x0003a730) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003e362) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003e362) list_double_time_pane_g

0xbc36,	// (0x0003a945) list_double_time_pane_t1_ParamLimits

0xbc36,	// (0x0003a945) list_double_time_pane_t1

0xbc4c,	// (0x0003a95b) list_double_time_pane_t2_ParamLimits

0xbc4c,	// (0x0003a95b) list_double_time_pane_t2

0xbc5e,	// (0x0003a96d) list_double_time_pane_t3_ParamLimits

0xbc5e,	// (0x0003a96d) list_double_time_pane_t3

0xbc70,	// (0x0003a97f) list_double_time_pane_t4_ParamLimits

0xbc70,	// (0x0003a97f) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003e367) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003e367) list_double_time_pane_t

0xbc82,	// (0x0003a991) list_setting_pane_g1_ParamLimits

0xbc82,	// (0x0003a991) list_setting_pane_g1

0xbc8e,	// (0x0003a99d) list_setting_pane_g2_ParamLimits

0xbc8e,	// (0x0003a99d) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003e370) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003e370) list_setting_pane_g

0xbc9a,	// (0x0003a9a9) list_setting_pane_t1_ParamLimits

0xbc9a,	// (0x0003a9a9) list_setting_pane_t1

0xbcb4,	// (0x0003a9c3) list_setting_pane_t2_ParamLimits

0xbcb4,	// (0x0003a9c3) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003e375) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003e375) list_setting_pane_t

0xbcf3,	// (0x0003aa02) set_value_pane_cp_ParamLimits

0xbcf3,	// (0x0003aa02) set_value_pane_cp

0xbcff,	// (0x0003aa0e) list_setting_number_pane_g1_ParamLimits

0xbcff,	// (0x0003aa0e) list_setting_number_pane_g1

0xbd0b,	// (0x0003aa1a) list_setting_number_pane_g2_ParamLimits

0xbd0b,	// (0x0003aa1a) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003e37c) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003e37c) list_setting_number_pane_g

0xbd17,	// (0x0003aa26) list_setting_number_pane_t1_ParamLimits

0xbd17,	// (0x0003aa26) list_setting_number_pane_t1

0xbd30,	// (0x0003aa3f) list_setting_number_pane_t2_ParamLimits

0xbd30,	// (0x0003aa3f) list_setting_number_pane_t2

0xbd4a,	// (0x0003aa59) list_setting_number_pane_t3_ParamLimits

0xbd4a,	// (0x0003aa59) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003e381) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003e381) list_setting_number_pane_t

0xbcf3,	// (0x0003aa02) set_value_pane_ParamLimits

0xbcf3,	// (0x0003aa02) set_value_pane

0x4067,	// (0x00032d76) bg_set_opt_pane_ParamLimits

0x4067,	// (0x00032d76) bg_set_opt_pane

0x0ad2,	// (0x0002f7e1) set_value_pane_t1

0x4088,	// (0x00032d97) slider_set_pane_cp3

0x4091,	// (0x00032da0) volume_small_pane_cp

0x409a,	// (0x00032da9) list_form_gen_pane

0x40a3,	// (0x00032db2) scroll_pane_cp8

0xbd8d,	// (0x0003aa9c) form_field_data_pane_ParamLimits

0xbd8d,	// (0x0003aa9c) form_field_data_pane

0xbda4,	// (0x0003aab3) form_field_data_wide_pane_ParamLimits

0xbda4,	// (0x0003aab3) form_field_data_wide_pane

0xbdc4,	// (0x0003aad3) form_field_popup_pane_ParamLimits

0xbdc4,	// (0x0003aad3) form_field_popup_pane

0xbddc,	// (0x0003aaeb) form_field_popup_wide_pane_ParamLimits

0xbddc,	// (0x0003aaeb) form_field_popup_wide_pane

0x0b66,	// (0x0002f875) form_field_slider_pane_ParamLimits

0x0b66,	// (0x0002f875) form_field_slider_pane

0x0b79,	// (0x0002f888) form_field_slider_wide_pane_ParamLimits

0x0b79,	// (0x0002f888) form_field_slider_wide_pane

0x40b4,	// (0x00032dc3) data_form_pane

0xbdfd,	// (0x0003ab0c) form_field_data_pane_t1

0x40c0,	// (0x00032dcf) input_focus_pane

0x0bae,	// (0x0002f8bd) data_form_wide_pane

0x0bcb,	// (0x0002f8da) form_field_data_wide_pane_t1

0x3e31,	// (0x00032b40) input_focus_pane_cp6

0xbe17,	// (0x0003ab26) form_field_popup_pane_t1

0x40c0,	// (0x00032dcf) input_focus_pane_cp7

0x40ee,	// (0x00032dfd) list_form_pane

0x0c0d,	// (0x0002f91c) form_field_popup_wide_pane_t1

0x40c0,	// (0x00032dcf) input_focus_pane_cp8

0x40fa,	// (0x00032e09) list_form_wide_pane

0xbe39,	// (0x0003ab48) form_field_slider_pane_t1_ParamLimits

0xbe39,	// (0x0003ab48) form_field_slider_pane_t1

0xbe51,	// (0x0003ab60) form_field_slider_pane_t2_ParamLimits

0xbe51,	// (0x0003ab60) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003e391) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003e391) form_field_slider_pane_t

0x3acc,	// (0x000327db) input_focus_pane_cp9_ParamLimits

0x3acc,	// (0x000327db) input_focus_pane_cp9

0xbe66,	// (0x0003ab75) slider_cont_pane_ParamLimits

0xbe66,	// (0x0003ab75) slider_cont_pane

0x4106,	// (0x00032e15) form_field_slider_wide_pane_t1_ParamLimits

0x4106,	// (0x00032e15) form_field_slider_wide_pane_t1

0x0c69,	// (0x0002f978) form_field_slider_wide_pane_t2_ParamLimits

0x0c69,	// (0x0002f978) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003e396) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003e396) form_field_slider_wide_pane_t

0x3acc,	// (0x000327db) input_focus_pane_cp10_ParamLimits

0x3acc,	// (0x000327db) input_focus_pane_cp10

0xbe7a,	// (0x0003ab89) slider_cont_pane_cp1_ParamLimits

0xbe7a,	// (0x0003ab89) slider_cont_pane_cp1

0xbe8e,	// (0x0003ab9d) slider_form_pane_cp

0x4118,	// (0x00032e27) input_focus_pane_g1

0x4120,	// (0x00032e2f) input_focus_pane_g2

0x4128,	// (0x00032e37) input_focus_pane_g3

0x4130,	// (0x00032e3f) input_focus_pane_g4

0x4138,	// (0x00032e47) input_focus_pane_g5

0x4140,	// (0x00032e4f) input_focus_pane_g6

0x4148,	// (0x00032e57) input_focus_pane_g7

0x4150,	// (0x00032e5f) input_focus_pane_g8

0x4158,	// (0x00032e67) input_focus_pane_g9

0x3767,	// (0x00032476) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003e39b) input_focus_pane_g

0x5bb2,	// (0x000348c1) wait_border_pane_g3_copy1

0xbe96,	// (0x0003aba5) data_form_pane_t1

0x3767,	// (0x00032476) wait_anim_pane_g1_copy1

0xc878,	// (0x0003b587) data_form_wide_pane_t1

0xbeb0,	// (0x0003abbf) list_form_graphic_pane_cp_ParamLimits

0xbeb0,	// (0x0003abbf) list_form_graphic_pane_cp

0x6ade,	// (0x000357ed) slider_form_pane_g1

0x6ae7,	// (0x000357f6) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003e699) slider_form_pane_g

0xbeb0,	// (0x0003abbf) list_form_graphic_pane_ParamLimits

0xbeb0,	// (0x0003abbf) list_form_graphic_pane

0x0ce7,	// (0x0002f9f6) list_form_graphic_pane_g1

0x0cef,	// (0x0002f9fe) list_form_graphic_pane_t1_ParamLimits

0x0cef,	// (0x0002f9fe) list_form_graphic_pane_t1

0x3851,	// (0x00032560) list_highlight_pane_cp5_ParamLimits

0x3851,	// (0x00032560) list_highlight_pane_cp5

0xbec2,	// (0x0003abd1) find_pane_g1

0x4160,	// (0x00032e6f) input_find_pane

0xbecb,	// (0x0003abda) input_find_pane_g1_ParamLimits

0xbecb,	// (0x0003abda) input_find_pane_g1

0xbed7,	// (0x0003abe6) input_find_pane_t1_ParamLimits

0xbed7,	// (0x0003abe6) input_find_pane_t1

0xbeec,	// (0x0003abfb) input_find_pane_t2_ParamLimits

0xbeec,	// (0x0003abfb) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003e3b0) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003e3b0) input_find_pane_t

0x4169,	// (0x00032e78) input_focus_pane_cp5_ParamLimits

0x4169,	// (0x00032e78) input_focus_pane_cp5

0x4183,	// (0x00032e92) bg_popup_window_pane_cp2_ParamLimits

0x4183,	// (0x00032e92) bg_popup_window_pane_cp2

0x4190,	// (0x00032e9f) listscroll_menu_pane_ParamLimits

0x4190,	// (0x00032e9f) listscroll_menu_pane

0xd439,	// (0x0003c148) popup_submenu_window_ParamLimits

0xd439,	// (0x0003c148) popup_submenu_window

0x41c8,	// (0x00032ed7) find_popup_pane_g1

0x41d0,	// (0x00032edf) input_popup_find_pane_cp

0x4169,	// (0x00032e78) input_focus_pane_cp4_ParamLimits

0x4169,	// (0x00032e78) input_focus_pane_cp4

0x41e6,	// (0x00032ef5) input_popup_find_pane_t1_ParamLimits

0x41e6,	// (0x00032ef5) input_popup_find_pane_t1

0x3771,	// (0x00032480) bg_popup_sub_pane_cp

0x4214,	// (0x00032f23) listscroll_popup_sub_pane

0x421c,	// (0x00032f2b) list_submenu_pane_ParamLimits

0x421c,	// (0x00032f2b) list_submenu_pane

0x422d,	// (0x00032f3c) scroll_pane_cp4

0x4235,	// (0x00032f44) list_single_popup_submenu_pane_ParamLimits

0x4235,	// (0x00032f44) list_single_popup_submenu_pane

0x4249,	// (0x00032f58) list_single_popup_submenu_pane_g1

0x4251,	// (0x00032f60) list_single_popup_submenu_pane_t1_ParamLimits

0x4251,	// (0x00032f60) list_single_popup_submenu_pane_t1

0x3acc,	// (0x000327db) bg_active_tab_pane_cp1_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp1

0x4266,	// (0x00032f75) tabs_2_active_pane_g1

0xd473,	// (0x0003c182) tabs_2_active_pane_t1

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp1_ParamLimits

0x3acc,	// (0x000327db) bg_passive_tab_pane_cp1

0x4266,	// (0x00032f75) tabs_2_passive_pane_g1

0xd473,	// (0x0003c182) tabs_2_passive_pane_t1

0x3851,	// (0x00032560) bg_active_tab_pane_cp4

0xd485,	// (0x0003c194) tabs_2_long_active_pane_t1

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp4

0x1909,	// (0x00030618) list_single_midp_graphic_pane_g4_ParamLimits

0x3851,	// (0x00032560) bg_active_tab_pane_cp5

0xd498,	// (0x0003c1a7) tabs_3_long_active_pane_t1

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp5

0x1909,	// (0x00030618) list_single_midp_graphic_pane_g4

0x3851,	// (0x00032560) bg_popup_window_pane_cp13_ParamLimits

0x3851,	// (0x00032560) bg_popup_window_pane_cp13

0x42c8,	// (0x00032fd7) listscroll_popup_fast_pane_ParamLimits

0x42c8,	// (0x00032fd7) listscroll_popup_fast_pane

0x42d7,	// (0x00032fe6) grid_popup_fast_pane_ParamLimits

0x42d7,	// (0x00032fe6) grid_popup_fast_pane

0x42e9,	// (0x00032ff8) scroll_pane_cp9_ParamLimits

0x42e9,	// (0x00032ff8) scroll_pane_cp9

0x83cd,	// (0x000370dc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x83cd,	// (0x000370dc) list_single_graphic_hl_pane_t1_cp2

0x430d,	// (0x0003301c) input_focus_pane_cp20_ParamLimits

0x430d,	// (0x0003301c) input_focus_pane_cp20

0x431b,	// (0x0003302a) query_popup_data_pane_t1_ParamLimits

0x431b,	// (0x0003302a) query_popup_data_pane_t1

0x432e,	// (0x0003303d) query_popup_data_pane_t2_ParamLimits

0x432e,	// (0x0003303d) query_popup_data_pane_t2

0x4374,	// (0x00033083) query_popup_data_pane_t3_ParamLimits

0x4374,	// (0x00033083) query_popup_data_pane_t3

0x43b5,	// (0x000330c4) query_popup_data_pane_t4_ParamLimits

0x43b5,	// (0x000330c4) query_popup_data_pane_t4

0x43f1,	// (0x00033100) query_popup_data_pane_t5_ParamLimits

0x43f1,	// (0x00033100) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003e3b5) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003e3b5) query_popup_data_pane_t

0x4118,	// (0x00032e27) bg_set_opt_pane_g1

0x4120,	// (0x00032e2f) bg_set_opt_pane_g2

0x4128,	// (0x00032e37) bg_set_opt_pane_g3

0x4130,	// (0x00032e3f) bg_set_opt_pane_g4

0x4138,	// (0x00032e47) bg_set_opt_pane_g5

0x4140,	// (0x00032e4f) bg_set_opt_pane_g6

0x4148,	// (0x00032e57) bg_set_opt_pane_g7

0x4150,	// (0x00032e5f) bg_set_opt_pane_g8

0x4158,	// (0x00032e67) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003e3c0) bg_set_opt_pane_g

0x0fa1,	// (0x0002fcb0) control_top_pane_stacon_ParamLimits

0x0fa1,	// (0x0002fcb0) control_top_pane_stacon

0x0ff4,	// (0x0002fd03) signal_pane_stacon_ParamLimits

0x0ff4,	// (0x0002fd03) signal_pane_stacon

0x49e1,	// (0x000336f0) stacon_top_pane_g1_ParamLimits

0x49e1,	// (0x000336f0) stacon_top_pane_g1

0x1019,	// (0x0002fd28) title_pane_stacon_ParamLimits

0x1019,	// (0x0002fd28) title_pane_stacon

0x1043,	// (0x0002fd52) uni_indicator_pane_stacon_ParamLimits

0x1043,	// (0x0002fd52) uni_indicator_pane_stacon

0x1058,	// (0x0002fd67) battery_pane_stacon_ParamLimits

0x1058,	// (0x0002fd67) battery_pane_stacon

0x109c,	// (0x0002fdab) control_bottom_pane_stacon_ParamLimits

0x109c,	// (0x0002fdab) control_bottom_pane_stacon

0x10bf,	// (0x0002fdce) navi_pane_stacon_ParamLimits

0x10bf,	// (0x0002fdce) navi_pane_stacon

0x4a03,	// (0x00033712) stacon_bottom_pane_g1_ParamLimits

0x4a03,	// (0x00033712) stacon_bottom_pane_g1

0x0d04,	// (0x0002fa13) aid_levels_signal_lsc_ParamLimits

0x0d04,	// (0x0002fa13) aid_levels_signal_lsc

0x0d1a,	// (0x0002fa29) signal_pane_stacon_g1_ParamLimits

0x0d1a,	// (0x0002fa29) signal_pane_stacon_g1

0x0d2e,	// (0x0002fa3d) signal_pane_stacon_g2_ParamLimits

0x0d2e,	// (0x0002fa3d) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003e3d3) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003e3d3) signal_pane_stacon_g

0x0d63,	// (0x0002fa72) title_pane_stacon_t1_ParamLimits

0x0d63,	// (0x0002fa72) title_pane_stacon_t1

0x4435,	// (0x00033144) uni_indicator_pane_stacon_g1

0x443f,	// (0x0003314e) uni_indicator_pane_stacon_g2

0x4449,	// (0x00033158) uni_indicator_pane_stacon_g3

0x4453,	// (0x00033162) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003e3df) uni_indicator_pane_stacon_g

0x0d88,	// (0x0002fa97) control_top_pane_stacon_g1

0x0d90,	// (0x0002fa9f) control_top_pane_stacon_t1_ParamLimits

0x0d90,	// (0x0002fa9f) control_top_pane_stacon_t1

0x0dc7,	// (0x0002fad6) aid_levels_battery_lsc_ParamLimits

0x0dc7,	// (0x0002fad6) aid_levels_battery_lsc

0x0dde,	// (0x0002faed) battery_pane_stacon_g1_ParamLimits

0x0dde,	// (0x0002faed) battery_pane_stacon_g1

0x0df1,	// (0x0002fb00) battery_pane_stacon_g2_ParamLimits

0x0df1,	// (0x0002fb00) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003e3e8) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003e3e8) battery_pane_stacon_g

0x0e2f,	// (0x0002fb3e) navi_icon_pane_stacon

0x0e43,	// (0x0002fb52) navi_navi_pane_stacon

0x0e2f,	// (0x0002fb3e) navi_text_pane_stacon

0x0d88,	// (0x0002fa97) control_bottom_pane_stacon_g1

0x0e57,	// (0x0002fb66) control_bottom_pane_stacon_t1_ParamLimits

0x0e57,	// (0x0002fb66) control_bottom_pane_stacon_t1

0xd4aa,	// (0x0003c1b9) grid_app_pane_ParamLimits

0xd4aa,	// (0x0003c1b9) grid_app_pane

0xd4e2,	// (0x0003c1f1) scroll_pane_cp15_ParamLimits

0xd4e2,	// (0x0003c1f1) scroll_pane_cp15

0xd4f7,	// (0x0003c206) cell_app_pane_ParamLimits

0xd4f7,	// (0x0003c206) cell_app_pane

0xd53c,	// (0x0003c24b) cell_app_pane_g1_ParamLimits

0xd53c,	// (0x0003c24b) cell_app_pane_g1

0x44f6,	// (0x00033205) cell_app_pane_g2_ParamLimits

0x44f6,	// (0x00033205) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003e3ed) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003e3ed) cell_app_pane_g

0xd560,	// (0x0003c26f) cell_app_pane_t1_ParamLimits

0xd560,	// (0x0003c26f) cell_app_pane_t1

0x4519,	// (0x00033228) grid_highlight_pane_ParamLimits

0x4519,	// (0x00033228) grid_highlight_pane

0x4118,	// (0x00032e27) cell_highlight_pane_g1

0x4120,	// (0x00032e2f) cell_highlight_pane_g2

0x4128,	// (0x00032e37) cell_highlight_pane_g3

0x4130,	// (0x00032e3f) cell_highlight_pane_g4

0x4138,	// (0x00032e47) cell_highlight_pane_g5

0x4140,	// (0x00032e4f) cell_highlight_pane_g6

0x4148,	// (0x00032e57) cell_highlight_pane_g7

0x4150,	// (0x00032e5f) cell_highlight_pane_g8

0x4158,	// (0x00032e67) cell_highlight_pane_g9

0x3767,	// (0x00032476) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003e39b) cell_highlight_pane_g

0x452a,	// (0x00033239) bg_scroll_pane

0x0ea1,	// (0x0002fbb0) scroll_handle_pane

0x4571,	// (0x00033280) scroll_bg_pane_g1

0x4586,	// (0x00033295) scroll_bg_pane_g2

0x459e,	// (0x000332ad) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003e3f2) scroll_bg_pane_g

0x45b3,	// (0x000332c2) scroll_handle_focus_pane_ParamLimits

0x45b3,	// (0x000332c2) scroll_handle_focus_pane

0x4571,	// (0x00033280) scroll_handle_pane_g1

0x45c0,	// (0x000332cf) scroll_handle_pane_g2

0x459e,	// (0x000332ad) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003e3f9) scroll_handle_pane_g

0x4169,	// (0x00032e78) bg_popup_sub_pane_cp21_ParamLimits

0x4169,	// (0x00032e78) bg_popup_sub_pane_cp21

0x45d4,	// (0x000332e3) popup_fep_japan_predictive_window_t1_ParamLimits

0x45d4,	// (0x000332e3) popup_fep_japan_predictive_window_t1

0x45ee,	// (0x000332fd) popup_fep_japan_predictive_window_t2_ParamLimits

0x45ee,	// (0x000332fd) popup_fep_japan_predictive_window_t2

0x4621,	// (0x00033330) popup_fep_japan_predictive_window_t3_ParamLimits

0x4621,	// (0x00033330) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003e400) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003e400) popup_fep_japan_predictive_window_t

0x3771,	// (0x00032480) bg_popup_sub_pane_cp23

0x4658,	// (0x00033367) listscroll_japin_cand_pane

0x4660,	// (0x0003336f) popup_fep_japan_candidate_window_t1

0x466e,	// (0x0003337d) candidate_pane_ParamLimits

0x466e,	// (0x0003337d) candidate_pane

0x4680,	// (0x0003338f) scroll_pane_cp30

0x4688,	// (0x00033397) list_single_popup_jap_candidate_pane_ParamLimits

0x4688,	// (0x00033397) list_single_popup_jap_candidate_pane

0x3771,	// (0x00032480) list_highlight_pane_cp30

0x469d,	// (0x000333ac) list_single_popup_jap_candidate_pane_t1

0x46ac,	// (0x000333bb) level_1_signal

0x46be,	// (0x000333cd) level_2_signal

0x46d1,	// (0x000333e0) level_3_signal

0x46e4,	// (0x000333f3) level_4_signal

0x46f7,	// (0x00033406) level_5_signal

0x470a,	// (0x00033419) level_6_signal

0x471d,	// (0x0003342c) level_7_signal

0x46ac,	// (0x000333bb) level_1_battery

0x46be,	// (0x000333cd) level_2_battery

0x46d1,	// (0x000333e0) level_3_battery

0x46e4,	// (0x000333f3) level_4_battery

0x46f7,	// (0x00033406) level_5_battery

0x470a,	// (0x00033419) level_6_battery

0x471d,	// (0x0003342c) level_7_battery

0x4748,	// (0x00033457) list_menu_pane_ParamLimits

0x4748,	// (0x00033457) list_menu_pane

0x475e,	// (0x0003346d) scroll_pane_cp25_ParamLimits

0x475e,	// (0x0003346d) scroll_pane_cp25

0x4777,	// (0x00033486) list_double2_graphic_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double2_graphic_pane_cp2

0x4777,	// (0x00033486) list_double2_large_graphic_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double2_large_graphic_pane_cp2

0x4777,	// (0x00033486) list_double2_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double2_pane_cp2

0x4777,	// (0x00033486) list_double_graphic_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double_graphic_pane_cp2

0x4777,	// (0x00033486) list_double_large_graphic_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double_large_graphic_pane_cp2

0x4777,	// (0x00033486) list_double_number_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double_number_pane_cp2

0x4777,	// (0x00033486) list_double_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double_pane_cp2

0xd577,	// (0x0003c286) list_single_2graphic_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_2graphic_pane_cp2

0xd577,	// (0x0003c286) list_single_graphic_heading_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_graphic_heading_pane_cp2

0xd577,	// (0x0003c286) list_single_graphic_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_graphic_pane_cp2

0xd577,	// (0x0003c286) list_single_heading_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_heading_pane_cp2

0x47b4,	// (0x000334c3) list_single_large_graphic_pane_cp2_ParamLimits

0x47b4,	// (0x000334c3) list_single_large_graphic_pane_cp2

0xd577,	// (0x0003c286) list_single_number_heading_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_number_heading_pane_cp2

0xd577,	// (0x0003c286) list_single_number_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_number_pane_cp2

0xd577,	// (0x0003c286) list_single_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_pane_cp2

0x4830,	// (0x0003353f) bg_popup_sub_pane_cp22

0x0f53,	// (0x0002fc62) popup_side_volume_key_window_g1

0x0f7d,	// (0x0002fc8c) popup_side_volume_key_window_t1

0x0f99,	// (0x0002fca8) volume_small_pane_cp1

0x3acc,	// (0x000327db) bg_popup_sub_pane_cp24_ParamLimits

0x3acc,	// (0x000327db) bg_popup_sub_pane_cp24

0x4846,	// (0x00033555) fep_china_uni_candidate_pane_ParamLimits

0x4846,	// (0x00033555) fep_china_uni_candidate_pane

0x485a,	// (0x00033569) fep_china_uni_entry_pane

0x486a,	// (0x00033579) popup_fep_china_uni_window_g1

0x4886,	// (0x00033595) fep_china_uni_entry_pane_g1

0x488e,	// (0x0003359d) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003e431) fep_china_uni_entry_pane_g

0x4896,	// (0x000335a5) fep_entry_item_pane

0x48a0,	// (0x000335af) fep_candidate_item_pane

0x48a8,	// (0x000335b7) fep_china_uni_candidate_pane_g1

0x48b0,	// (0x000335bf) fep_china_uni_candidate_pane_g2

0x48b8,	// (0x000335c7) fep_china_uni_candidate_pane_g3

0x48c0,	// (0x000335cf) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003e436) fep_china_uni_candidate_pane_g

0x3767,	// (0x00032476) fep_entry_item_pane_g1

0x48c8,	// (0x000335d7) fep_entry_item_pane_t1_ParamLimits

0x48c8,	// (0x000335d7) fep_entry_item_pane_t1

0x48de,	// (0x000335ed) fep_candidate_item_pane_t1_ParamLimits

0x48de,	// (0x000335ed) fep_candidate_item_pane_t1

0x48f3,	// (0x00033602) fep_candidate_item_pane_t2_ParamLimits

0x48f3,	// (0x00033602) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003e43f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003e43f) fep_candidate_item_pane_t

0x3851,	// (0x00032560) list_highlight_pane_cp31_ParamLimits

0x3851,	// (0x00032560) list_highlight_pane_cp31

0x4905,	// (0x00033614) level_1_signal_lsc

0x490e,	// (0x0003361d) level_2_signal_lsc

0x4917,	// (0x00033626) level_3_signal_lsc

0x4920,	// (0x0003362f) level_4_signal_lsc

0x4929,	// (0x00033638) level_5_signal_lsc

0x4932,	// (0x00033641) level_6_signal_lsc

0x493b,	// (0x0003364a) level_7_signal_lsc

0x493b,	// (0x0003364a) level_1_battery_lsc

0x4944,	// (0x00033653) level_2_battery_lsc

0x494d,	// (0x0003365c) level_3_battery_lsc

0x4956,	// (0x00033665) level_4_battery_lsc

0x495f,	// (0x0003366e) level_5_battery_lsc

0x4968,	// (0x00033677) level_6_battery_lsc

0x4905,	// (0x00033614) level_7_battery_lsc

0x4971,	// (0x00033680) scroll_handle_focus_pane_g1

0x497a,	// (0x00033689) scroll_handle_focus_pane_g2

0x4983,	// (0x00033692) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003e444) scroll_handle_focus_pane_g

0xbf0a,	// (0x0003ac19) list_single_2graphic_pane_g1_ParamLimits

0xbf0a,	// (0x0003ac19) list_single_2graphic_pane_g1

0xb9ea,	// (0x0003a6f9) list_single_2graphic_pane_g2_ParamLimits

0xb9ea,	// (0x0003a6f9) list_single_2graphic_pane_g2

0x2df4,	// (0x00031b03) list_single_2graphic_pane_g3_ParamLimits

0x2df4,	// (0x00031b03) list_single_2graphic_pane_g3

0xbf16,	// (0x0003ac25) list_single_2graphic_pane_g4_ParamLimits

0xbf16,	// (0x0003ac25) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003e44b) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003e44b) list_single_2graphic_pane_g

0xbf22,	// (0x0003ac31) list_single_2graphic_pane_t1_ParamLimits

0xbf22,	// (0x0003ac31) list_single_2graphic_pane_t1

0xbf50,	// (0x0003ac5f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf50,	// (0x0003ac5f) list_double2_graphic_large_graphic_pane_g1

0xba55,	// (0x0003a764) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba55,	// (0x0003a764) list_double2_graphic_large_graphic_pane_g2

0xba66,	// (0x0003a775) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba66,	// (0x0003a775) list_double2_graphic_large_graphic_pane_g3

0xbf62,	// (0x0003ac71) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf62,	// (0x0003ac71) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003e454) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003e454) list_double2_graphic_large_graphic_pane_g

0xbf6e,	// (0x0003ac7d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf6e,	// (0x0003ac7d) list_double2_graphic_large_graphic_pane_t1

0xbf84,	// (0x0003ac93) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf84,	// (0x0003ac93) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003e45d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003e45d) list_double2_graphic_large_graphic_pane_t

0x4acb,	// (0x000337da) popup_fast_swap_window_ParamLimits

0x4acb,	// (0x000337da) popup_fast_swap_window

0x4ae7,	// (0x000337f6) popup_side_volume_key_window

0x4b03,	// (0x00033812) stacon_top_pane

0x4b0d,	// (0x0003381c) status_pane_ParamLimits

0x4b0d,	// (0x0003381c) status_pane

0xd604,	// (0x0003c313) status_small_pane

0x3771,	// (0x00032480) control_pane

0x3771,	// (0x00032480) stacon_bottom_pane

0x40a3,	// (0x00032db2) scroll_pane_cp121

0x409a,	// (0x00032da9) set_content_pane

0x498c,	// (0x0003369b) bg_active_tab_pane_g1_cp1

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp1

0x499e,	// (0x000336ad) bg_active_tab_pane_g3_cp1

0x498c,	// (0x0003369b) bg_passive_tab_pane_g1_cp1

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp1

0x499e,	// (0x000336ad) bg_passive_tab_pane_g3_cp1

0x49a7,	// (0x000336b6) bg_active_tab_pane_g1_cp2

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp2

0x49b0,	// (0x000336bf) bg_active_tab_pane_g3_cp2

0x49a7,	// (0x000336b6) bg_passive_tab_pane_g1_cp2

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp2

0x49b0,	// (0x000336bf) bg_passive_tab_pane_g3_cp2

0x49b9,	// (0x000336c8) bg_active_tab_pane_g1_cp3

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp3

0x49c2,	// (0x000336d1) bg_active_tab_pane_g3_cp3

0x49b9,	// (0x000336c8) bg_passive_tab_pane_g1_cp3

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp3

0x49c2,	// (0x000336d1) bg_passive_tab_pane_g3_cp3

0x49cb,	// (0x000336da) bg_active_tab_pane_g1_cp4

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp4

0x49d6,	// (0x000336e5) bg_active_tab_pane_g3_cp4

0x49cb,	// (0x000336da) bg_passive_tab_pane_g1_cp4

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp4

0x49d6,	// (0x000336e5) bg_passive_tab_pane_g3_cp4

0x4a1f,	// (0x0003372e) bg_active_tab_pane_g1_cp5

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp5

0x4a28,	// (0x00033737) bg_active_tab_pane_g3_cp5

0x4a1f,	// (0x0003372e) bg_passive_tab_pane_g1_cp5

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp5

0x4a28,	// (0x00033737) bg_passive_tab_pane_g3_cp5

0x70db,	// (0x00035dea) list_set_graphic_pane_ParamLimits

0x70db,	// (0x00035dea) list_set_graphic_pane

0x3771,	// (0x00032480) bg_set_opt_pane_cp4

0x4a4e,	// (0x0003375d) list_set_graphic_pane_g1_ParamLimits

0x4a4e,	// (0x0003375d) list_set_graphic_pane_g1

0x4a5a,	// (0x00033769) list_set_graphic_pane_g2_ParamLimits

0x4a5a,	// (0x00033769) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003e462) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003e462) list_set_graphic_pane_g

0x0009,

0xfabc,	// (0x0003e7cb) volume_small_pane_cp_g

0x4a7e,	// (0x0003378d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a7e,	// (0x0003378d) list_double2_large_graphic_pane_g1_cp2

0x4a8a,	// (0x00033799) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a8a,	// (0x00033799) list_double2_large_graphic_pane_g2_cp2

0x4a9b,	// (0x000337aa) list_double2_large_graphic_pane_g3_cp2

0x4aa3,	// (0x000337b2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4aa3,	// (0x000337b2) list_double2_large_graphic_pane_t1_cp2

0x4ab9,	// (0x000337c8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4ab9,	// (0x000337c8) list_double2_large_graphic_pane_t2_cp2

0x6691,	// (0x000353a0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6691,	// (0x000353a0) list_double_large_graphic_pane_g1_cp2

0x66a2,	// (0x000353b1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x66a2,	// (0x000353b1) list_double_large_graphic_pane_g2_cp2

0x4c34,	// (0x00033943) list_double_large_graphic_pane_g3_cp2

0x66b3,	// (0x000353c2) list_double_large_graphic_pane_g4_cp

0x66bb,	// (0x000353ca) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x66bb,	// (0x000353ca) list_double_large_graphic_pane_t1_cp2

0x66d2,	// (0x000353e1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x66d2,	// (0x000353e1) list_double_large_graphic_pane_t2_cp2

0x4b26,	// (0x00033835) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4b26,	// (0x00033835) list_double2_graphic_pane_g1_cp2

0x4b34,	// (0x00033843) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4b34,	// (0x00033843) list_double2_graphic_pane_g2_cp2

0x4b45,	// (0x00033854) list_double2_graphic_pane_g3_cp2

0x4b4f,	// (0x0003385e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4b4f,	// (0x0003385e) list_double2_graphic_pane_t1_cp2

0x4b65,	// (0x00033874) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b65,	// (0x00033874) list_double2_graphic_pane_t2_cp2

0x4b77,	// (0x00033886) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b77,	// (0x00033886) list_single_number_heading_pane_g1_cp2

0x4b83,	// (0x00033892) list_single_number_heading_pane_g2_cp2

0x4b8b,	// (0x0003389a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b8b,	// (0x0003389a) list_single_number_heading_pane_t1_cp2

0x4ba1,	// (0x000338b0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4ba1,	// (0x000338b0) list_single_number_heading_pane_t2_cp2

0x4bb3,	// (0x000338c2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4bb3,	// (0x000338c2) list_single_number_heading_pane_t3_cp2

0x4b77,	// (0x00033886) list_single_heading_pane_g1_cp2_ParamLimits

0x4b77,	// (0x00033886) list_single_heading_pane_g1_cp2

0x4b83,	// (0x00033892) list_single_heading_pane_g2_cp2

0x4b8b,	// (0x0003389a) list_single_heading_pane_t1_cp2_ParamLimits

0x4b8b,	// (0x0003389a) list_single_heading_pane_t1_cp2

0x6499,	// (0x000351a8) list_single_heading_pane_t2_cp2_ParamLimits

0x6499,	// (0x000351a8) list_single_heading_pane_t2_cp2

0x63e1,	// (0x000350f0) list_double_graphic_pane_g1_cp2_ParamLimits

0x63e1,	// (0x000350f0) list_double_graphic_pane_g1_cp2

0x63ed,	// (0x000350fc) list_double_graphic_pane_g2_cp2_ParamLimits

0x63ed,	// (0x000350fc) list_double_graphic_pane_g2_cp2

0x63fc,	// (0x0003510b) list_double_graphic_pane_g3_cp2

0x6404,	// (0x00035113) list_double_graphic_pane_t1_cp2_ParamLimits

0x6404,	// (0x00035113) list_double_graphic_pane_t1_cp2

0x641a,	// (0x00035129) list_double_graphic_pane_t2_cp2_ParamLimits

0x641a,	// (0x00035129) list_double_graphic_pane_t2_cp2

0x4c28,	// (0x00033937) list_double_number_pane_g1_cp2_ParamLimits

0x4c28,	// (0x00033937) list_double_number_pane_g1_cp2

0x4c34,	// (0x00033943) list_double_number_pane_g2_cp2

0x63a5,	// (0x000350b4) list_double_number_pane_t1_cp2_ParamLimits

0x63a5,	// (0x000350b4) list_double_number_pane_t1_cp2

0x63b9,	// (0x000350c8) list_double_number_pane_t2_cp2_ParamLimits

0x63b9,	// (0x000350c8) list_double_number_pane_t2_cp2

0x63cf,	// (0x000350de) list_double_number_pane_t3_cp2_ParamLimits

0x63cf,	// (0x000350de) list_double_number_pane_t3_cp2

0x628e,	// (0x00034f9d) list_single_graphic_pane_g1_cp2_ParamLimits

0x628e,	// (0x00034f9d) list_single_graphic_pane_g1_cp2

0x4c8c,	// (0x0003399b) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c8c,	// (0x0003399b) list_single_graphic_pane_g2_cp2

0x4c98,	// (0x000339a7) list_single_graphic_pane_g3_cp2

0x6264,	// (0x00034f73) list_single_graphic_pane_t1_cp2_ParamLimits

0x6264,	// (0x00034f73) list_single_graphic_pane_t1_cp2

0x4c8c,	// (0x0003399b) list_single_number_pane_g1_cp2_ParamLimits

0x4c8c,	// (0x0003399b) list_single_number_pane_g1_cp2

0x4c98,	// (0x000339a7) list_single_number_pane_g2_cp2

0x6264,	// (0x00034f73) list_single_number_pane_t1_cp2_ParamLimits

0x6264,	// (0x00034f73) list_single_number_pane_t1_cp2

0x627a,	// (0x00034f89) list_single_number_pane_t2_cp2_ParamLimits

0x627a,	// (0x00034f89) list_single_number_pane_t2_cp2

0x4a8a,	// (0x00033799) list_double2_pane_g1_cp2_ParamLimits

0x4a8a,	// (0x00033799) list_double2_pane_g1_cp2

0x4a9b,	// (0x000337aa) list_double2_pane_g2_cp2

0x4c00,	// (0x0003390f) list_double2_pane_t1_cp2_ParamLimits

0x4c00,	// (0x0003390f) list_double2_pane_t1_cp2

0x4c16,	// (0x00033925) list_double2_pane_t2_cp2_ParamLimits

0x4c16,	// (0x00033925) list_double2_pane_t2_cp2

0x4c28,	// (0x00033937) list_double_pane_g1_cp2_ParamLimits

0x4c28,	// (0x00033937) list_double_pane_g1_cp2

0x4c34,	// (0x00033943) list_double_pane_g2_cp2

0x4c3c,	// (0x0003394b) list_double_pane_t1_cp2_ParamLimits

0x4c3c,	// (0x0003394b) list_double_pane_t1_cp2

0x4c52,	// (0x00033961) list_double_pane_t2_cp2_ParamLimits

0x4c52,	// (0x00033961) list_double_pane_t2_cp2

0x4c7c,	// (0x0003398b) list_single_pane_cp2_g3

0x4c8c,	// (0x0003399b) list_single_pane_g1_cp2_ParamLimits

0x4c8c,	// (0x0003399b) list_single_pane_g1_cp2

0x4c98,	// (0x000339a7) list_single_pane_g2_cp2

0x4ca0,	// (0x000339af) list_single_pane_t1_cp2_ParamLimits

0x4ca0,	// (0x000339af) list_single_pane_t1_cp2

0x4cb8,	// (0x000339c7) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4cb8,	// (0x000339c7) list_single_large_graphic_pane_g1_cp2

0x4cc4,	// (0x000339d3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4cc4,	// (0x000339d3) list_single_large_graphic_pane_g2_cp2

0x4cd0,	// (0x000339df) list_single_large_graphic_pane_g3_cp2

0x4cd8,	// (0x000339e7) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4cd8,	// (0x000339e7) list_single_large_graphic_pane_g4_cp1

0x4cf2,	// (0x00033a01) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4cf2,	// (0x00033a01) list_single_large_graphic_pane_t1_cp2

0x6230,	// (0x00034f3f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6230,	// (0x00034f3f) list_single_graphic_heading_pane_g1_cp2

0x61fd,	// (0x00034f0c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61fd,	// (0x00034f0c) list_single_graphic_heading_pane_g4_cp2

0x4c98,	// (0x000339a7) list_single_graphic_heading_pane_g5_cp2

0x623c,	// (0x00034f4b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x623c,	// (0x00034f4b) list_single_graphic_heading_pane_t1_cp2

0x6252,	// (0x00034f61) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6252,	// (0x00034f61) list_single_graphic_heading_pane_t2_cp2

0x61f1,	// (0x00034f00) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61f1,	// (0x00034f00) list_single_2graphic_pane_g1_cp2

0x61fd,	// (0x00034f0c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61fd,	// (0x00034f0c) list_single_2graphic_pane_g2_cp2

0x4c98,	// (0x000339a7) list_single_2graphic_pane_g3_cp2

0x620e,	// (0x00034f1d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x620e,	// (0x00034f1d) list_single_2graphic_pane_g4_cp2

0x621a,	// (0x00034f29) list_single_2graphic_pane_t1_cp2_ParamLimits

0x621a,	// (0x00034f29) list_single_2graphic_pane_t1_cp2

0x3767,	// (0x00032476) list_highlight_pane_g10_cp1

0x5dc9,	// (0x00034ad8) list_highlight_pane_g1_cp1

0x5dd1,	// (0x00034ae0) list_highlight_pane_g2_cp1

0x5dd9,	// (0x00034ae8) list_highlight_pane_g3_cp1

0x5de1,	// (0x00034af0) list_highlight_pane_g4_cp1

0x5de9,	// (0x00034af8) list_highlight_pane_g5_cp1

0x5df1,	// (0x00034b00) list_highlight_pane_g6_cp1

0x5df9,	// (0x00034b08) list_highlight_pane_g7_cp1

0x5e01,	// (0x00034b10) list_highlight_pane_g8_cp1

0x5e09,	// (0x00034b18) list_highlight_pane_g9_cp1

0xdc44,	// (0x0003c953) form_field_slider_pane_t3

0xdc52,	// (0x0003c961) form_field_slider_pane_t4

0x5cf9,	// (0x00034a08) slider_form_pane_ParamLimits

0x5cf9,	// (0x00034a08) slider_form_pane

0x3771,	// (0x00032480) control_abbreviations

0x3771,	// (0x00032480) control_conventions

0x3771,	// (0x00032480) control_definitions

0x3771,	// (0x00032480) format_table_attribute

0x64e3,	// (0x000351f2) bg_popup_preview_window_pane_g9

0x3771,	// (0x00032480) format_table_data2

0x3771,	// (0x00032480) format_table_data3

0x3771,	// (0x00032480) format_table_data_example

0x0008,

0x3771,	// (0x00032480) intro_purpose

0xf8ea,	// (0x0003e5f9) bg_popup_preview_window_pane_g

0x3771,	// (0x00032480) texts_category

0x3771,	// (0x00032480) texts_graphics

0x4d08,	// (0x00033a17) text_digital

0x4d17,	// (0x00033a26) text_primary

0x4d26,	// (0x00033a35) text_primary_small

0x4d35,	// (0x00033a44) text_secondary

0x4d44,	// (0x00033a53) text_title

0x6c1d,	// (0x0003592c) bg_passive_tab_pane_g1_cp3_srt

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp3_srt

0x6c26,	// (0x00035935) bg_passive_tab_pane_g3_cp3_srt

0x3acc,	// (0x000327db) bg_active_tab_pane_cp3_srt_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp3_srt

0x6c2f,	// (0x0003593e) tabs_4_active_pane_srt_g1

0xdf85,	// (0x0003cc94) tabs_4_active_pane_srt_t1_ParamLimits

0xdf85,	// (0x0003cc94) tabs_4_active_pane_srt_t1

0x6c1d,	// (0x0003592c) bg_active_tab_pane_g1_cp3_copy1

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp3_copy1

0x6c26,	// (0x00035935) bg_active_tab_pane_g3_cp3_copy1

0x3851,	// (0x00032560) tabs_2_long_active_pane_srt_ParamLimits

0x3851,	// (0x00032560) tabs_2_long_active_pane_srt

0x3851,	// (0x00032560) tabs_2_long_passive_pane_srt_ParamLimits

0x3851,	// (0x00032560) tabs_2_long_passive_pane_srt

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp4_srt_ParamLimits

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp4_srt

0x6911,	// (0x00035620) bg_passive_tab_pane_g1_cp4_srt

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp4_srt

0x691a,	// (0x00035629) bg_passive_tab_pane_g3_cp4_srt

0x3851,	// (0x00032560) bg_active_tab_pane_cp4_srt_ParamLimits

0x3851,	// (0x00032560) bg_active_tab_pane_cp4_srt

0xddaf,	// (0x0003cabe) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddaf,	// (0x0003cabe) tabs_2_long_active_pane_srt_t1

0x6911,	// (0x00035620) bg_active_tab_pane_g1_cp4_srt

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp4_srt

0x691a,	// (0x00035629) bg_active_tab_pane_g3_cp4_srt

0x3acc,	// (0x000327db) tabs_3_long_active_pane_srt_ParamLimits

0x3acc,	// (0x000327db) tabs_3_long_active_pane_srt

0x3acc,	// (0x000327db) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3acc,	// (0x000327db) tabs_3_long_passive_pane_cp_srt

0x3acc,	// (0x000327db) tabs_3_long_passive_pane_srt_ParamLimits

0x3acc,	// (0x000327db) tabs_3_long_passive_pane_srt

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp5_srt_ParamLimits

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp5_srt

0x4a1f,	// (0x0003372e) bg_passive_tab_pane_g1_cp5_srt

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp5_srt

0x4a28,	// (0x00033737) bg_passive_tab_pane_g3_cp5_srt

0x3851,	// (0x00032560) bg_active_tab_pane_cp5_srt_ParamLimits

0x3851,	// (0x00032560) bg_active_tab_pane_cp5_srt

0xdd99,	// (0x0003caa8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd99,	// (0x0003caa8) tabs_3_long_active_pane_srt_t1

0x4a1f,	// (0x0003372e) bg_active_tab_pane_g1_cp5_srt

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp5_srt

0x4a28,	// (0x00033737) bg_active_tab_pane_g3_cp5_srt

0x68f1,	// (0x00035600) navi_text_pane_srt_t1

0x68e9,	// (0x000355f8) navi_icon_pane_srt_g1

0x4f19,	// (0x00033c28) midp_editing_number_pane_srt

0x4d53,	// (0x00033a62) midp_ticker_pane_srt

0x4f21,	// (0x00033c30) midp_ticker_pane_srt_g1

0x4f29,	// (0x00033c38) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003e481) midp_ticker_pane_srt_g

0x4f31,	// (0x00033c40) midp_ticker_pane_srt_t1

0x68da,	// (0x000355e9) midp_editing_number_pane_t1_copy1

0xd60f,	// (0x0003c31e) listscroll_midp_pane

0xd60f,	// (0x0003c31e) midp_form_pane

0x4dcb,	// (0x00033ada) midp_info_popup_window_ParamLimits

0x4dcb,	// (0x00033ada) midp_info_popup_window

0x4169,	// (0x00032e78) bg_popup_sub_pane_cp50_ParamLimits

0x4169,	// (0x00032e78) bg_popup_sub_pane_cp50

0x59f5,	// (0x00034704) listscroll_midp_info_pane_ParamLimits

0x59f5,	// (0x00034704) listscroll_midp_info_pane

0x59d5,	// (0x000346e4) listscroll_form_midp_pane_ParamLimits

0x59d5,	// (0x000346e4) listscroll_form_midp_pane

0x59e1,	// (0x000346f0) scroll_bar_cp050

0x59d5,	// (0x000346e4) list_midp_pane

0x766c,	// (0x0003637b) signal_pane_g2_cp

0x58ef,	// (0x000345fe) listscroll_midp_info_pane_t1_ParamLimits

0x58ef,	// (0x000345fe) listscroll_midp_info_pane_t1

0x5907,	// (0x00034616) listscroll_midp_info_pane_t2_ParamLimits

0x5907,	// (0x00034616) listscroll_midp_info_pane_t2

0x5945,	// (0x00034654) listscroll_midp_info_pane_t3_ParamLimits

0x5945,	// (0x00034654) listscroll_midp_info_pane_t3

0x597f,	// (0x0003468e) listscroll_midp_info_pane_t4_ParamLimits

0x597f,	// (0x0003468e) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0003e534) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0003e534) listscroll_midp_info_pane_t

0x422d,	// (0x00032f3c) scroll_pane_cp21

0x588d,	// (0x0003459c) form_midp_field_choice_group_pane

0x5896,	// (0x000345a5) form_midp_field_text_pane

0x58d5,	// (0x000345e4) form_midp_field_time_pane

0x58dd,	// (0x000345ec) form_midp_gauge_slider_pane

0x58e6,	// (0x000345f5) form_midp_gauge_wait_pane

0x3771,	// (0x00032480) form_midp_image_pane

0xc84f,	// (0x0003b55e) list_single_midp_pane_ParamLimits

0xc84f,	// (0x0003b55e) list_single_midp_pane

0xdc23,	// (0x0003c932) form_midp_field_text_pane_t1

0x561b,	// (0x0003432a) input_focus_pane_cp050

0x587c,	// (0x0003458b) list_midp_form_text_pane

0x5817,	// (0x00034526) form_midp_field_choice_group_pane_t1

0x5825,	// (0x00034534) input_focus_pane_cp051

0x5839,	// (0x00034548) list_midp_choice_pane

0x3771,	// (0x00032480) status_idle_pane

0x57fb,	// (0x0003450a) form_midp_field_time_pane_t1

0x3767,	// (0x00032476) wait_anim_pane_g2_copy1

0x5809,	// (0x00034518) form_midp_field_time_pane_t2

0x0001,

0x4e79,	// (0x00033b88) aid_navinavi_width_2_pane

0xf820,	// (0x0003e52f) form_midp_field_time_pane_t

0x3771,	// (0x00032480) input_focus_pane_cp052

0x3771,	// (0x00032480) bg_input_focus_pane_cp040

0x57bb,	// (0x000344ca) form_midp_gauge_slider_pane_t1

0x57c9,	// (0x000344d8) form_midp_gauge_slider_pane_t2

0xdc07,	// (0x0003c916) form_midp_gauge_slider_pane_t3

0xdc15,	// (0x0003c924) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0003e526) form_midp_gauge_slider_pane_t

0x57f3,	// (0x00034502) form_midp_slider_pane

0x3851,	// (0x00032560) bg_input_focus_pane_cp041_ParamLimits

0x3851,	// (0x00032560) bg_input_focus_pane_cp041

0x5788,	// (0x00034497) form_midp_gauge_wait_pane_t1_ParamLimits

0x5788,	// (0x00034497) form_midp_gauge_wait_pane_t1

0x579a,	// (0x000344a9) form_midp_gauge_wait_pane_t2_ParamLimits

0x579a,	// (0x000344a9) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0003e521) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0003e521) form_midp_gauge_wait_pane_t

0x57ac,	// (0x000344bb) form_midp_wait_pane_ParamLimits

0x57ac,	// (0x000344bb) form_midp_wait_pane

0x5752,	// (0x00034461) form_midp_image_pane_g1

0x575b,	// (0x0003446a) form_midp_image_pane_t1

0x576a,	// (0x00034479) form_midp_image_pane_t2

0x5779,	// (0x00034488) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0003e51a) form_midp_image_pane_t

0x5749,	// (0x00034458) list_single_midp_pane_g1

0x2eb4,	// (0x00031bc3) list_single_midp_pane_t1

0xdbf3,	// (0x0003c902) list_midp_form_item_pane_ParamLimits

0xdbf3,	// (0x0003c902) list_midp_form_item_pane

0x4e21,	// (0x00033b30) list_midp_form_item_pane_t1

0x4e30,	// (0x00033b3f) midp_ticker_pane_g1

0x4e3c,	// (0x00033b4b) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003e467) midp_ticker_pane_g

0x4e48,	// (0x00033b57) midp_ticker_pane_t1

0x6b2b,	// (0x0003583a) midp_editing_number_pane_t1

0x6b09,	// (0x00035818) midp_editing_number_pane

0x6b18,	// (0x00035827) midp_ticker_pane

0x68ca,	// (0x000355d9) ai_message_heading_pane

0x3771,	// (0x00032480) bg_popup_window_pane_cp14

0x68d2,	// (0x000355e1) listscroll_ai_message_pane

0x6854,	// (0x00035563) ai_message_heading_pane_g1_ParamLimits

0x6854,	// (0x00035563) ai_message_heading_pane_g1

0x6860,	// (0x0003556f) ai_message_heading_pane_g2_ParamLimits

0x6860,	// (0x0003556f) ai_message_heading_pane_g2

0x686c,	// (0x0003557b) ai_message_heading_pane_g3_ParamLimits

0x686c,	// (0x0003557b) ai_message_heading_pane_g3

0x6878,	// (0x00035587) ai_message_heading_pane_g4_ParamLimits

0x6878,	// (0x00035587) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003e65b) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003e65b) ai_message_heading_pane_g

0x6884,	// (0x00035593) ai_message_heading_pane_t1_ParamLimits

0x6884,	// (0x00035593) ai_message_heading_pane_t1

0x689e,	// (0x000355ad) ai_message_heading_pane_t2_ParamLimits

0x689e,	// (0x000355ad) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0003e664) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0003e664) ai_message_heading_pane_t

0x68b0,	// (0x000355bf) bg_popup_heading_pane_cp1_ParamLimits

0x68b0,	// (0x000355bf) bg_popup_heading_pane_cp1

0x6842,	// (0x00035551) list_ai_message_pane_ParamLimits

0x6842,	// (0x00035551) list_ai_message_pane

0x422d,	// (0x00032f3c) scroll_pane_cp10

0x67de,	// (0x000354ed) list_ai_message_pane_g1

0x67e6,	// (0x000354f5) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003e638) list_ai_message_pane_g

0x67ee,	// (0x000354fd) list_ai_message_pane_t1_ParamLimits

0x67ee,	// (0x000354fd) list_ai_message_pane_t1

0x6803,	// (0x00035512) list_ai_message_pane_t2_ParamLimits

0x6803,	// (0x00035512) list_ai_message_pane_t2

0x6818,	// (0x00035527) list_ai_message_pane_t3_ParamLimits

0x6818,	// (0x00035527) list_ai_message_pane_t3

0x682d,	// (0x0003553c) list_ai_message_pane_t4_ParamLimits

0x682d,	// (0x0003553c) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0003e63d) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0003e63d) list_ai_message_pane_t

0xdd78,	// (0x0003ca87) cell_ai_soft_ind_pane_ParamLimits

0xdd78,	// (0x0003ca87) cell_ai_soft_ind_pane

0x4e5a,	// (0x00033b69) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e5a,	// (0x00033b69) cell_ai_soft_ind_pane_g1

0x3771,	// (0x00032480) grid_highlight_cp1

0x4e67,	// (0x00033b76) text_secondary_cp56_ParamLimits

0x4e67,	// (0x00033b76) text_secondary_cp56

0x679e,	// (0x000354ad) example_general_pane_ParamLimits

0x679e,	// (0x000354ad) example_general_pane

0x67aa,	// (0x000354b9) example_parent_pane_g1_ParamLimits

0x67aa,	// (0x000354b9) example_parent_pane_g1

0x67b6,	// (0x000354c5) example_parent_pane_t1_ParamLimits

0x67b6,	// (0x000354c5) example_parent_pane_t1

0xc4f9,	// (0x0003b208) popup_preview_text_window_ParamLimits

0xc4f9,	// (0x0003b208) popup_preview_text_window

0x4c84,	// (0x00033993) list_single_pane_cp2_g4

0x3b82,	// (0x00032891) bg_popup_preview_window_pane_ParamLimits

0x3b82,	// (0x00032891) bg_popup_preview_window_pane

0x64eb,	// (0x000351fa) popup_preview_text_window_t1_ParamLimits

0x64eb,	// (0x000351fa) popup_preview_text_window_t1

0x6509,	// (0x00035218) popup_preview_text_window_t2_ParamLimits

0x6509,	// (0x00035218) popup_preview_text_window_t2

0x6552,	// (0x00035261) popup_preview_text_window_t3_ParamLimits

0x6552,	// (0x00035261) popup_preview_text_window_t3

0x6597,	// (0x000352a6) popup_preview_text_window_t4_ParamLimits

0x6597,	// (0x000352a6) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0003e60c) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0003e60c) popup_preview_text_window_t

0x6615,	// (0x00035324) scroll_pane_cp11

0x55a7,	// (0x000342b6) bg_popup_preview_window_pane_g1

0x64ab,	// (0x000351ba) bg_popup_preview_window_pane_g2

0x64b3,	// (0x000351c2) bg_popup_preview_window_pane_g3

0x64bb,	// (0x000351ca) bg_popup_preview_window_pane_g4

0x64c3,	// (0x000351d2) bg_popup_preview_window_pane_g5

0x64cb,	// (0x000351da) bg_popup_preview_window_pane_g6

0x64d3,	// (0x000351e2) bg_popup_preview_window_pane_g7

0x64db,	// (0x000351ea) bg_popup_preview_window_pane_g8

0x01aa,	// (0x0002eeb9) aid_popup_width_pane

0xc475,	// (0x0003b184) popup_midp_note_alarm_window_ParamLimits

0xc475,	// (0x0003b184) popup_midp_note_alarm_window

0x40b4,	// (0x00032dc3) data_form_pane_ParamLimits

0xbdf3,	// (0x0003ab02) form_field_data_pane_g1

0xbdfd,	// (0x0003ab0c) form_field_data_pane_t1_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_ParamLimits

0x0bae,	// (0x0002f8bd) data_form_wide_pane_ParamLimits

0x0bbf,	// (0x0002f8ce) form_field_data_wide_pane_g1

0x0bcb,	// (0x0002f8da) form_field_data_wide_pane_t1_ParamLimits

0x3e31,	// (0x00032b40) input_focus_pane_cp6_ParamLimits

0xd465,	// (0x0003c174) input_popup_find_pane_g1_ParamLimits

0xd465,	// (0x0003c174) input_popup_find_pane_g1

0x0e02,	// (0x0002fb11) aid_navi_side_left_pane

0x0e17,	// (0x0002fb26) aid_navi_side_right_pane

0x5ec4,	// (0x00034bd3) bg_popup_window_pane_cp30_ParamLimits

0x5ec4,	// (0x00034bd3) bg_popup_window_pane_cp30

0x5f3e,	// (0x00034c4d) popup_midp_note_alarm_window_g1_ParamLimits

0x5f3e,	// (0x00034c4d) popup_midp_note_alarm_window_g1

0x5f6e,	// (0x00034c7d) popup_midp_note_alarm_window_t1_ParamLimits

0x5f6e,	// (0x00034c7d) popup_midp_note_alarm_window_t1

0x600f,	// (0x00034d1e) popup_midp_note_alarm_window_t2_ParamLimits

0x600f,	// (0x00034d1e) popup_midp_note_alarm_window_t2

0x60bd,	// (0x00034dcc) popup_midp_note_alarm_window_t3_ParamLimits

0x60bd,	// (0x00034dcc) popup_midp_note_alarm_window_t3

0x60ef,	// (0x00034dfe) popup_midp_note_alarm_window_t4_ParamLimits

0x60ef,	// (0x00034dfe) popup_midp_note_alarm_window_t4

0x6115,	// (0x00034e24) popup_midp_note_alarm_window_t5_ParamLimits

0x6115,	// (0x00034e24) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0003e5a9) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0003e5a9) popup_midp_note_alarm_window_t

0x61c1,	// (0x00034ed0) wait_bar_pane_cp1_ParamLimits

0x61c1,	// (0x00034ed0) wait_bar_pane_cp1

0x3771,	// (0x00032480) wait_anim_pane_copy1

0x3771,	// (0x00032480) wait_border_pane_copy1

0x5b9e,	// (0x000348ad) wait_border_pane_g1_copy1

0x0be5,	// (0x0002f8f4) form_field_popup_pane_g1

0xbe17,	// (0x0003ab26) form_field_popup_pane_t1_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_cp7_ParamLimits

0x40ee,	// (0x00032dfd) list_form_pane_ParamLimits

0x0c05,	// (0x0002f914) form_field_popup_wide_pane_g1

0x0c0d,	// (0x0002f91c) form_field_popup_wide_pane_t1_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_cp8_ParamLimits

0x40fa,	// (0x00032e09) list_form_wide_pane_ParamLimits

0xdfde,	// (0x0003cced) aid_size_cell_graphic_pane

0xbe96,	// (0x0003aba5) data_form_pane_t1_ParamLimits

0xc878,	// (0x0003b587) data_form_wide_pane_t1_ParamLimits

0xd878,	// (0x0003c587) bg_status_flat_pane

0xd124,	// (0x0003be33) title_pane_t1_ParamLimits

0x3819,	// (0x00032528) title_pane_t2_ParamLimits

0x383f,	// (0x0003254e) title_pane_t3_ParamLimits

0xf557,	// (0x0003e266) title_pane_t_ParamLimits

0x46ac,	// (0x000333bb) level_1_signal_ParamLimits

0x46be,	// (0x000333cd) level_2_signal_ParamLimits

0x46d1,	// (0x000333e0) level_3_signal_ParamLimits

0x46e4,	// (0x000333f3) level_4_signal_ParamLimits

0x46f7,	// (0x00033406) level_5_signal_ParamLimits

0x470a,	// (0x00033419) level_6_signal_ParamLimits

0x471d,	// (0x0003342c) level_7_signal_ParamLimits

0x46ac,	// (0x000333bb) level_1_battery_ParamLimits

0x46be,	// (0x000333cd) level_2_battery_ParamLimits

0x46d1,	// (0x000333e0) level_3_battery_ParamLimits

0x46e4,	// (0x000333f3) level_4_battery_ParamLimits

0x46f7,	// (0x00033406) level_5_battery_ParamLimits

0x470a,	// (0x00033419) level_6_battery_ParamLimits

0x471d,	// (0x0003342c) level_7_battery_ParamLimits

0x5dc9,	// (0x00034ad8) bg_status_flat_pane_g1

0x5dd1,	// (0x00034ae0) bg_status_flat_pane_g2

0x5dd9,	// (0x00034ae8) bg_status_flat_pane_g3

0x5de1,	// (0x00034af0) bg_status_flat_pane_g4

0x5de9,	// (0x00034af8) bg_status_flat_pane_g5

0x5df1,	// (0x00034b00) bg_status_flat_pane_g6

0x5df9,	// (0x00034b08) bg_status_flat_pane_g7

0xd1b0,	// (0x0003bebf) tabs_3_active_pane_t1_ParamLimits

0xd1b0,	// (0x0003bebf) tabs_3_passive_pane_t1_ParamLimits

0xd1c2,	// (0x0003bed1) tabs_4_active_pane_t1_ParamLimits

0xd1c2,	// (0x0003bed1) tabs_4_1_passive_pane_t1_ParamLimits

0xd473,	// (0x0003c182) tabs_2_active_pane_t1_ParamLimits

0xd473,	// (0x0003c182) tabs_2_passive_pane_t1_ParamLimits

0x3851,	// (0x00032560) bg_active_tab_pane_cp4_ParamLimits

0xd485,	// (0x0003c194) tabs_2_long_active_pane_t1_ParamLimits

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp4_ParamLimits

0x193d,	// (0x0003064c) list_single_midp_graphic_pane_t1_ParamLimits

0x3851,	// (0x00032560) bg_active_tab_pane_cp5_ParamLimits

0xd498,	// (0x0003c1a7) tabs_3_long_active_pane_t1_ParamLimits

0x509d,	// (0x00033dac) bg_passive_tab_pane_cp5_ParamLimits

0x193d,	// (0x0003064c) list_single_midp_graphic_pane_t1

0xd878,	// (0x0003c587) bg_status_flat_pane_ParamLimits

0x5237,	// (0x00033f46) indicator_pane_cp2_ParamLimits

0x5237,	// (0x00033f46) indicator_pane_cp2

0xd9f6,	// (0x0003c705) navi_pane_srt_ParamLimits

0xd9f6,	// (0x0003c705) navi_pane_srt

0x5386,	// (0x00034095) popup_clock_digital_analogue_window_cp1

0x392e,	// (0x0003263d) indicator_pane_t1

0x4d53,	// (0x00033a62) copy_highlight_pane

0x4d53,	// (0x00033a62) cursor_graphics_pane

0x4d53,	// (0x00033a62) graphic_within_text_pane

0x4d53,	// (0x00033a62) link_highlight_pane

0x65d8,	// (0x000352e7) popup_preview_text_window_t5_ParamLimits

0x65d8,	// (0x000352e7) popup_preview_text_window_t5

0x4e81,	// (0x00033b90) cursor_digital_pane

0x4e81,	// (0x00033b90) cursor_primary_pane

0x4e92,	// (0x00033ba1) cursor_primary_small_pane

0x4e9a,	// (0x00033ba9) cursor_secondary_pane

0x4ea2,	// (0x00033bb1) cursor_title_pane

0x4e81,	// (0x00033b90) link_highlight_digital_pane

0x4e89,	// (0x00033b98) link_highlight_primary_pane

0x4e92,	// (0x00033ba1) link_highlight_primary_small_pane

0x4e9a,	// (0x00033ba9) link_highlight_secondary_pane

0x4ea2,	// (0x00033bb1) link_highlight_title_pane

0x4e81,	// (0x00033b90) copy_highlight_digital_pane

0x4e81,	// (0x00033b90) copy_highlight_primary_pane

0x4e92,	// (0x00033ba1) copy_highlight_primary_small_pane

0x4e9a,	// (0x00033ba9) copy_highlight_secondary_pane

0x4ea2,	// (0x00033bb1) copy_highlight_title_pane

0x4e9a,	// (0x00033ba9) graphic_text_digital_pane

0x5e67,	// (0x00034b76) graphic_text_primary_pane

0x5e70,	// (0x00034b7f) graphic_text_primary_small_pane

0x4e92,	// (0x00033ba1) graphic_text_secondary_pane

0x4e81,	// (0x00033b90) graphic_text_title_pane

0xd6b4,	// (0x0003c3c3) cursor_primary_pane_g1

0x5e59,	// (0x00034b68) cursor_text_primary_t1

0xdc74,	// (0x0003c983) cursor_primary_small_pane_g1

0x5e4b,	// (0x00034b5a) cursor_text_primary_small_t1

0xdc6a,	// (0x0003c979) cursor_primary_small_pane_g1_copy1

0x5e33,	// (0x00034b42) cursor_text_primary_small_t1_copy1

0x5e11,	// (0x00034b20) cursor_text_title_t1

0xdc60,	// (0x0003c96f) cursor_title_pane_g1

0xd6b4,	// (0x0003c3c3) cursor_digital_pane_g1

0x4eb4,	// (0x00033bc3) cursor_text_digital_t1

0x4ed9,	// (0x00033be8) link_highlight_primary_pane_g1

0x5dba,	// (0x00034ac9) link_highlight_primary_pane_t1

0x4ec2,	// (0x00033bd1) link_highlight_primary_small_pane_g1

0x4eca,	// (0x00033bd9) link_highlight_primary_small_pane_t1

0x4ed9,	// (0x00033be8) link_highlight_secondary_pane_g1

0x4ee1,	// (0x00033bf0) link_highlight_secondary_pane_t1

0x5d22,	// (0x00034a31) link_highlight_title_pane_g1

0x5d2a,	// (0x00034a39) link_highlight_title_pane_t1

0x5d0b,	// (0x00034a1a) link_highlight_digital_pane_g1

0x5d13,	// (0x00034a22) link_highlight_digital_pane_t1

0x5be3,	// (0x000348f2) copy_highlight_primary_pane_g1

0x5beb,	// (0x000348fa) copy_highlight_primary_pane_t1

0x5bbd,	// (0x000348cc) copy_highlight_primary_small_pane_g1

0x5bd4,	// (0x000348e3) copy_highlight_primary_small_pane_t1

0x4ef0,	// (0x00033bff) copy_highlight_secondary_pane_g1

0x4ef8,	// (0x00033c07) copy_highlight_secondary_pane_t1

0x5bbd,	// (0x000348cc) copy_highlight_title_pane_g1

0x5bc5,	// (0x000348d4) copy_highlight_title_pane_t1

0x5be3,	// (0x000348f2) copy_highlight_digital_pane_g1

0x6e7f,	// (0x00035b8e) copy_highlight_digital_pane_t1

0x6dd3,	// (0x00035ae2) graphic_text_primary_pane_g1

0x6e63,	// (0x00035b72) graphic_text_primary_pane_t1

0x6e71,	// (0x00035b80) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0003e6d8) graphic_text_primary_pane_t

0x6e3f,	// (0x00035b4e) graphic_text_primary_small_pane_g1

0x6e47,	// (0x00035b56) graphic_text_primary_small_pane_t1

0x6e55,	// (0x00035b64) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0003e6d3) graphic_text_primary_small_pane_t

0x6e1b,	// (0x00035b2a) graphic_text_secondary_pane_g1

0x6e23,	// (0x00035b32) graphic_text_secondary_pane_t1

0x6e31,	// (0x00035b40) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0003e6ce) graphic_text_secondary_pane_t

0x6df7,	// (0x00035b06) graphic_text_title_pane_g1

0x6dff,	// (0x00035b0e) graphic_text_title_pane_t1

0x6e0d,	// (0x00035b1c) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0003e6c9) graphic_text_title_pane_t

0x6dd3,	// (0x00035ae2) graphic_text_digital_pane_g1

0x6ddb,	// (0x00035aea) graphic_text_digital_pane_t1

0x6de9,	// (0x00035af8) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0003e6c4) graphic_text_digital_pane_t

0x3851,	// (0x00032560) navi_icon_pane_srt_ParamLimits

0x3851,	// (0x00032560) navi_icon_pane_srt

0x3771,	// (0x00032480) navi_midp_pane_srt

0x3771,	// (0x00032480) navi_navi_pane_srt

0x3851,	// (0x00032560) navi_text_pane_srt_ParamLimits

0x3851,	// (0x00032560) navi_text_pane_srt

0x6d9e,	// (0x00035aad) navi_navi_icon_text_pane_srt

0x6da6,	// (0x00035ab5) navi_navi_pane_srt_g1_ParamLimits

0x6da6,	// (0x00035ab5) navi_navi_pane_srt_g1

0x6db8,	// (0x00035ac7) navi_navi_pane_srt_g2_ParamLimits

0x6db8,	// (0x00035ac7) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0003e6bf) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0003e6bf) navi_navi_pane_srt_g

0x6dca,	// (0x00035ad9) navi_navi_tabs_pane_srt

0x6d9e,	// (0x00035aad) navi_navi_text_pane_srt

0x6d9e,	// (0x00035aad) navi_navi_volume_pane_srt

0x6d8f,	// (0x00035a9e) navi_navi_text_pane_srt_t1

0x1cb7,	// (0x000309c6) navi_navi_volume_pane_srt_g1

0x1cbf,	// (0x000309ce) volume_small_pane_srt_ParamLimits

0x1cbf,	// (0x000309ce) volume_small_pane_srt

0x10e2,	// (0x0002fdf1) volume_small_pane_srt_g1_ParamLimits

0x10e2,	// (0x0002fdf1) volume_small_pane_srt_g1

0x10f2,	// (0x0002fe01) volume_small_pane_srt_g2_ParamLimits

0x10f2,	// (0x0002fe01) volume_small_pane_srt_g2

0x1103,	// (0x0002fe12) volume_small_pane_srt_g3_ParamLimits

0x1103,	// (0x0002fe12) volume_small_pane_srt_g3

0x1114,	// (0x0002fe23) volume_small_pane_srt_g4_ParamLimits

0x1114,	// (0x0002fe23) volume_small_pane_srt_g4

0x1125,	// (0x0002fe34) volume_small_pane_srt_g5_ParamLimits

0x1125,	// (0x0002fe34) volume_small_pane_srt_g5

0x1136,	// (0x0002fe45) volume_small_pane_srt_g6_ParamLimits

0x1136,	// (0x0002fe45) volume_small_pane_srt_g6

0x1147,	// (0x0002fe56) volume_small_pane_srt_g7_ParamLimits

0x1147,	// (0x0002fe56) volume_small_pane_srt_g7

0x1158,	// (0x0002fe67) volume_small_pane_srt_g8_ParamLimits

0x1158,	// (0x0002fe67) volume_small_pane_srt_g8

0x1169,	// (0x0002fe78) volume_small_pane_srt_g9_ParamLimits

0x1169,	// (0x0002fe78) volume_small_pane_srt_g9

0x117a,	// (0x0002fe89) volume_small_pane_srt_g10_ParamLimits

0x117a,	// (0x0002fe89) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003e46c) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003e46c) volume_small_pane_srt_g

0x3c2b,	// (0x0003293a) query_popup_data_pane_cp2

0x6d75,	// (0x00035a84) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d75,	// (0x00035a84) navi_navi_icon_text_pane_srt_t1

0x5e67,	// (0x00034b76) navi_tabs_2_long_pane_srt

0x5e67,	// (0x00034b76) navi_tabs_2_pane_srt

0x5e67,	// (0x00034b76) navi_tabs_3_long_pane_srt

0x5e67,	// (0x00034b76) navi_tabs_3_pane_srt

0x5e67,	// (0x00034b76) navi_tabs_4_pane_srt

0x1c97,	// (0x000309a6) tabs_2_active_pane_srt_ParamLimits

0x1c97,	// (0x000309a6) tabs_2_active_pane_srt

0x1ca7,	// (0x000309b6) tabs_2_passive_pane_srt_ParamLimits

0x1ca7,	// (0x000309b6) tabs_2_passive_pane_srt

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp1_srt

0x6d41,	// (0x00035a50) bg_passive_tab_pane_g1_cp1_srt

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp1_srt

0x6d4a,	// (0x00035a59) bg_passive_tab_pane_g3_cp1_srt

0x3acc,	// (0x000327db) bg_active_tab_pane_cp1_srt_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp1_srt

0x6d53,	// (0x00035a62) tabs_2_active_pane_srt_g1

0xe020,	// (0x0003cd2f) tabs_2_active_pane_srt_t1_ParamLimits

0xe020,	// (0x0003cd2f) tabs_2_active_pane_srt_t1

0x6d41,	// (0x00035a50) bg_active_tab_pane_g1_cp1_srt

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp1_srt

0x6d4a,	// (0x00035a59) bg_active_tab_pane_g3_cp1_srt

0x1c64,	// (0x00030973) tabs_3_active_pane_srt_ParamLimits

0x1c64,	// (0x00030973) tabs_3_active_pane_srt

0x1c75,	// (0x00030984) tabs_3_passive_pane_cp_srt_ParamLimits

0x1c75,	// (0x00030984) tabs_3_passive_pane_cp_srt

0x1c86,	// (0x00030995) tabs_3_passive_pane_srt_ParamLimits

0x1c86,	// (0x00030995) tabs_3_passive_pane_srt

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x561b,	// (0x0003432a) bg_passive_tab_pane_cp2_srt

0x4f07,	// (0x00033c16) bg_passive_tab_pane_g1_cp2_srt

0x4995,	// (0x000336a4) bg_passive_tab_pane_g2_cp2_srt

0x4f10,	// (0x00033c1f) bg_passive_tab_pane_g3_cp2_srt

0x3acc,	// (0x000327db) bg_active_tab_pane_cp2_srt_ParamLimits

0x3acc,	// (0x000327db) bg_active_tab_pane_cp2_srt

0x6d27,	// (0x00035a36) tabs_3_active_pane_srt_g1

0xe00a,	// (0x0003cd19) tabs_3_active_pane_srt_t1_ParamLimits

0xe00a,	// (0x0003cd19) tabs_3_active_pane_srt_t1

0x4f07,	// (0x00033c16) bg_active_tab_pane_g1_cp2_srt

0x4995,	// (0x000336a4) bg_active_tab_pane_g2_cp2_srt

0x4f10,	// (0x00033c1f) bg_active_tab_pane_g3_cp2_srt

0x1c1c,	// (0x0003092b) tabs_4_active_pane_srt_ParamLimits

0x1c1c,	// (0x0003092b) tabs_4_active_pane_srt

0x1c2e,	// (0x0003093d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1c2e,	// (0x0003093d) tabs_4_passive_pane_cp2_srt

0x12e9,	// (0x0002fff8) aid_size_cell_toolbar

0x6982,	// (0x00035691) main_idle_act_pane_ParamLimits

0x1498,	// (0x000301a7) popup_large_graphic_colour_window_ParamLimits

0xc785,	// (0x0003b494) popup_toolbar_window_ParamLimits

0xc785,	// (0x0003b494) popup_toolbar_window

0x6b3a,	// (0x00035849) list_single_graphic_2heading_pane_ParamLimits

0x6b3a,	// (0x00035849) list_single_graphic_2heading_pane

0x445d,	// (0x0003316c) aid_size_cell_apps_grid_lsc_pane

0x446f,	// (0x0003317e) aid_size_cell_apps_grid_prt_pane

0x509d,	// (0x00033dac) bg_wml_button_pane_cp1_ParamLimits

0x509d,	// (0x00033dac) bg_wml_button_pane_cp1

0xdc23,	// (0x0003c932) form_midp_field_text_pane_t1_ParamLimits

0x561b,	// (0x0003432a) input_focus_pane_cp050_ParamLimits

0x587c,	// (0x0003458b) list_midp_form_text_pane_ParamLimits

0x5825,	// (0x00034534) input_focus_pane_cp051_ParamLimits

0x5839,	// (0x00034548) list_midp_choice_pane_ParamLimits

0xdbc1,	// (0x0003c8d0) list_single_2graphic_pane_cp3_ParamLimits

0xdbc1,	// (0x0003c8d0) list_single_2graphic_pane_cp3

0xdbd4,	// (0x0003c8e3) list_single_midp_graphic_pane_ParamLimits

0xdbd4,	// (0x0003c8e3) list_single_midp_graphic_pane

0x0134,	// (0x0002ee43) list_single_graphic_2heading_pane_g1_ParamLimits

0x0134,	// (0x0002ee43) list_single_graphic_2heading_pane_g1

0x0140,	// (0x0002ee4f) list_single_graphic_2heading_pane_g4_ParamLimits

0x0140,	// (0x0002ee4f) list_single_graphic_2heading_pane_g4

0x014c,	// (0x0002ee5b) list_single_graphic_2heading_pane_g5_ParamLimits

0x014c,	// (0x0002ee5b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003e4bf) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003e4bf) list_single_graphic_2heading_pane_g

0x0158,	// (0x0002ee67) list_single_graphic_2heading_pane_t1_ParamLimits

0x0158,	// (0x0002ee67) list_single_graphic_2heading_pane_t1

0x016c,	// (0x0002ee7b) list_single_graphic_2heading_pane_t2_ParamLimits

0x016c,	// (0x0002ee7b) list_single_graphic_2heading_pane_t2

0x0186,	// (0x0002ee95) list_single_graphic_2heading_pane_t3_ParamLimits

0x0186,	// (0x0002ee95) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003e4c6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003e4c6) list_single_graphic_2heading_pane_t

0x54e5,	// (0x000341f4) bg_popup_sub_pane_cp2

0x550f,	// (0x0003421e) grid_toobar_pane

0x18ac,	// (0x000305bb) cell_toolbar_pane_ParamLimits

0x18ac,	// (0x000305bb) cell_toolbar_pane

0x554b,	// (0x0003425a) cell_toolbar_pane_g1_ParamLimits

0x554b,	// (0x0003425a) cell_toolbar_pane_g1

0x555f,	// (0x0003426e) cell_toolbar_pane_g2_ParamLimits

0x555f,	// (0x0003426e) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003e4d4) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003e4d4) cell_toolbar_pane_g

0x5581,	// (0x00034290) grid_highlight_pane_cp2_ParamLimits

0x5581,	// (0x00034290) grid_highlight_pane_cp2

0x559b,	// (0x000342aa) toolbar_button_pane

0x55a7,	// (0x000342b6) toolbar_button_pane_g1

0x55b7,	// (0x000342c6) toolbar_button_pane_g2

0x55af,	// (0x000342be) toolbar_button_pane_g3

0x55bf,	// (0x000342ce) toolbar_button_pane_g4

0x55c7,	// (0x000342d6) toolbar_button_pane_g5

0x55cf,	// (0x000342de) toolbar_button_pane_g6

0x55d7,	// (0x000342e6) toolbar_button_pane_g7

0x55df,	// (0x000342ee) toolbar_button_pane_g8

0x55e7,	// (0x000342f6) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003e4d9) toolbar_button_pane_g

0x18e4,	// (0x000305f3) list_single_2graphic_pane_g1_cp3_ParamLimits

0x18e4,	// (0x000305f3) list_single_2graphic_pane_g1_cp3

0xc7dd,	// (0x0003b4ec) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7dd,	// (0x0003b4ec) list_single_2graphic_pane_g2_cp3

0x1901,	// (0x00030610) list_single_2graphic_pane_g3_cp3

0x1909,	// (0x00030618) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1909,	// (0x00030618) list_single_2graphic_pane_g4_cp3

0x1915,	// (0x00030624) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1915,	// (0x00030624) list_single_2graphic_pane_t1_cp3

0x1931,	// (0x00030640) list_single_midp_graphic_pane_g2_ParamLimits

0x1931,	// (0x00030640) list_single_midp_graphic_pane_g2

0x12f1,	// (0x00030000) aid_zoom_text_primary

0x0118,	// (0x0002ee27) aid_zoom_text_secondary

0xd70c,	// (0x0003c41b) status_small_pane_g7_ParamLimits

0xd70c,	// (0x0003c41b) status_small_pane_g7

0xd72f,	// (0x0003c43e) status_small_pane_t1_ParamLimits

0xd100,	// (0x0003be0f) title_pane_g2

0x0003,

0xf54e,	// (0x0003e25d) title_pane_g

0xd378,	// (0x0003c087) aid_size_cell_colour_1_pane_ParamLimits

0xd378,	// (0x0003c087) aid_size_cell_colour_1_pane

0xd38c,	// (0x0003c09b) aid_size_cell_colour_2_pane_ParamLimits

0xd38c,	// (0x0003c09b) aid_size_cell_colour_2_pane

0xd3a0,	// (0x0003c0af) aid_size_cell_colour_3_pane_ParamLimits

0xd3a0,	// (0x0003c0af) aid_size_cell_colour_3_pane

0xd3b4,	// (0x0003c0c3) aid_size_cell_colour_4_pane_ParamLimits

0xd3b4,	// (0x0003c0c3) aid_size_cell_colour_4_pane

0x0d3f,	// (0x0002fa4e) title_pane_stacon_g1_ParamLimits

0x0d3f,	// (0x0002fa4e) title_pane_stacon_g1

0x5c42,	// (0x00034951) popup_note_wait_window_g3_ParamLimits

0x5c42,	// (0x00034951) popup_note_wait_window_g3

0x5cb8,	// (0x000349c7) popup_note_wait_window_t5_ParamLimits

0x5cb8,	// (0x000349c7) popup_note_wait_window_t5

0x3771,	// (0x00032480) main_feb_china_hwr_fs_writing_pane

0xc18d,	// (0x0003ae9c) popup_feb_china_hwr_fs_window_ParamLimits

0xc18d,	// (0x0003ae9c) popup_feb_china_hwr_fs_window

0xc7ee,	// (0x0003b4fd) aid_size_cell_hwr_fs_ParamLimits

0xc7ee,	// (0x0003b4fd) aid_size_cell_hwr_fs

0x561b,	// (0x0003432a) bg_popup_sub_pane_cp3_ParamLimits

0x561b,	// (0x0003432a) bg_popup_sub_pane_cp3

0xc803,	// (0x0003b512) grid_hwr_fs_pane_ParamLimits

0xc803,	// (0x0003b512) grid_hwr_fs_pane

0x1980,	// (0x0003068f) linegrid_hwr_fs_pane_ParamLimits

0x1980,	// (0x0003068f) linegrid_hwr_fs_pane

0xc81b,	// (0x0003b52a) cell_hwr_fs_pane_ParamLimits

0xc81b,	// (0x0003b52a) cell_hwr_fs_pane

0x5627,	// (0x00034336) linegrid_hwr_fs_pane_g1_ParamLimits

0x5627,	// (0x00034336) linegrid_hwr_fs_pane_g1

0xdb95,	// (0x0003c8a4) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb95,	// (0x0003c8a4) linegrid_hwr_fs_pane_g2

0x5645,	// (0x00034354) linegrid_hwr_fs_pane_g3_ParamLimits

0x5645,	// (0x00034354) linegrid_hwr_fs_pane_g3

0x19b2,	// (0x000306c1) linegrid_hwr_fs_pane_g4_ParamLimits

0x19b2,	// (0x000306c1) linegrid_hwr_fs_pane_g4

0x19cc,	// (0x000306db) linegrid_hwr_fs_pane_g5_ParamLimits

0x19cc,	// (0x000306db) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0003e4ff) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0003e4ff) linegrid_hwr_fs_pane_g

0x5651,	// (0x00034360) cell_hwr_fs_pane_g1_ParamLimits

0x5651,	// (0x00034360) cell_hwr_fs_pane_g1

0x541c,	// (0x0003412b) cell_hwr_fs_pane_g2_ParamLimits

0x541c,	// (0x0003412b) cell_hwr_fs_pane_g2

0xdba7,	// (0x0003c8b6) cell_hwr_fs_pane_g3_ParamLimits

0xdba7,	// (0x0003c8b6) cell_hwr_fs_pane_g3

0xdbb4,	// (0x0003c8c3) cell_hwr_fs_pane_g4_ParamLimits

0xdbb4,	// (0x0003c8c3) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0003e50a) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003e50a) cell_hwr_fs_pane_g

0xc841,	// (0x0003b550) cell_hwr_fs_pane_t1

0x3771,	// (0x00032480) grid_highlight_pane_cp6

0x3771,	// (0x00032480) main_idle_act2_pane

0x4214,	// (0x00032f23) aid_inside_area_popup_secondary

0xdc7e,	// (0x0003c98d) aid_inside_area_window_primary_ParamLimits

0xdc7e,	// (0x0003c98d) aid_inside_area_window_primary

0x6e8e,	// (0x00035b9d) ai2_news_ticker_pane

0x6e96,	// (0x00035ba5) aid_size_cell_ai1_link_ParamLimits

0x6e96,	// (0x00035ba5) aid_size_cell_ai1_link

0xe036,	// (0x0003cd45) popup_ai2_data_window_ParamLimits

0xe036,	// (0x0003cd45) popup_ai2_data_window

0x6ec6,	// (0x00035bd5) popup_ai2_link_window_ParamLimits

0x6ec6,	// (0x00035bd5) popup_ai2_link_window

0x561b,	// (0x0003432a) bg_popup_sub_pane_cp4_ParamLimits

0x561b,	// (0x0003432a) bg_popup_sub_pane_cp4

0x6eda,	// (0x00035be9) grid_ai2_link_pane_ParamLimits

0x6eda,	// (0x00035be9) grid_ai2_link_pane

0x6ef1,	// (0x00035c00) popup_ai2_link_window_g1_ParamLimits

0x6ef1,	// (0x00035c00) popup_ai2_link_window_g1

0x6efd,	// (0x00035c0c) popup_ai2_link_window_g2_ParamLimits

0x6efd,	// (0x00035c0c) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0003e6dd) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0003e6dd) popup_ai2_link_window_g

0x6f0c,	// (0x00035c1b) ai2_mp_button_pane

0x6f14,	// (0x00035c23) ai2_mp_volume_pane

0x5825,	// (0x00034534) bg_popup_sub_pane_cp5_ParamLimits

0x5825,	// (0x00034534) bg_popup_sub_pane_cp5

0x6f1c,	// (0x00035c2b) heading_ai2_gene_pane_ParamLimits

0x6f1c,	// (0x00035c2b) heading_ai2_gene_pane

0x6f28,	// (0x00035c37) list_ai2_gene_pane_ParamLimits

0x6f28,	// (0x00035c37) list_ai2_gene_pane

0x6f70,	// (0x00035c7f) cell_ai2_link_pane_ParamLimits

0x6f70,	// (0x00035c7f) cell_ai2_link_pane

0x6f86,	// (0x00035c95) cell_ai2_link_pane_g1

0x3771,	// (0x00032480) grid_highlight_pane_cp7

0x1cd4,	// (0x000309e3) ai2_mp_volume_pane_g1

0x7056,	// (0x00035d65) ai2_mp_volume_pane_g2

0xe060,	// (0x0003cd6f) list_ai2_gene_pane_t1

0x705e,	// (0x00035d6d) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0003e6f6) ai2_mp_volume_pane_g

0x1cdc,	// (0x000309eb) volume_small_pane_cp3

0x7066,	// (0x00035d75) aid_size_cell_ai2_button

0x706e,	// (0x00035d7d) grid_ai2_button_pane

0x7077,	// (0x00035d86) cell_ai2_button_pane_ParamLimits

0x7077,	// (0x00035d86) cell_ai2_button_pane

0x3767,	// (0x00032476) cell_ai2_button_pane_g1

0x3771,	// (0x00032480) grid_highlight_pane_cp8

0x7016,	// (0x00035d25) ai2_gene_pane_t1_ParamLimits

0x7016,	// (0x00035d25) ai2_gene_pane_t1

0xc107,	// (0x0003ae16) aid_height_parent_landscape

0xddc6,	// (0x0003cad5) aid_height_set_list

0x6982,	// (0x00035691) aid_size_parent

0xdfde,	// (0x0003cced) aid_size_cell_graphic_pane_ParamLimits

0x6f38,	// (0x00035c47) popup_ai2_data_window_g1_ParamLimits

0x6f38,	// (0x00035c47) popup_ai2_data_window_g1

0x6f44,	// (0x00035c53) ai2_news_ticker_pane_g1

0x6f4c,	// (0x00035c5b) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0003e6e2) ai2_news_ticker_pane_g

0x6f54,	// (0x00035c63) ai2_news_ticker_pane_t1

0x6f62,	// (0x00035c71) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0003e6e7) ai2_news_ticker_pane_t

0x6f8f,	// (0x00035c9e) heading_ai2_gene_pane_g1

0x6f97,	// (0x00035ca6) heading_ai2_gene_pane_t1_ParamLimits

0x6f97,	// (0x00035ca6) heading_ai2_gene_pane_t1

0x6fac,	// (0x00035cbb) list_highlight_pane_cp6

0xe04a,	// (0x0003cd59) ai2_gene_pane_ParamLimits

0xe04a,	// (0x0003cd59) ai2_gene_pane

0xe06e,	// (0x0003cd7d) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0003e6ec) list_ai2_gene_pane_t

0x6fe7,	// (0x00035cf6) list_highlight_pane_cp8_ParamLimits

0x6fe7,	// (0x00035cf6) list_highlight_pane_cp8

0x6ff8,	// (0x00035d07) ai2_gene_pane_g1_ParamLimits

0x6ff8,	// (0x00035d07) ai2_gene_pane_g1

0x700a,	// (0x00035d19) ai2_gene_pane_g2_ParamLimits

0x700a,	// (0x00035d19) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0003e6f1) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0003e6f1) ai2_gene_pane_g

0x4056,	// (0x00032d65) scroll_pane_cp12

0xc0c4,	// (0x0003add3) control_pane_t3_ParamLimits

0xc0c4,	// (0x0003add3) control_pane_t3

0xd720,	// (0x0003c42f) status_small_pane_g8_ParamLimits

0xd720,	// (0x0003c42f) status_small_pane_g8

0xc222,	// (0x0003af31) popup_find_window_ParamLimits

0xc4af,	// (0x0003b1be) popup_note_image_window_ParamLimits

0x2ddc,	// (0x00031aeb) list_double2_graphic_pane_vc_g1_ParamLimits

0x2ddc,	// (0x00031aeb) list_double2_graphic_pane_vc_g1

0x2de8,	// (0x00031af7) list_double2_graphic_pane_vc_g2_ParamLimits

0x2de8,	// (0x00031af7) list_double2_graphic_pane_vc_g2

0x2df4,	// (0x00031b03) list_double2_graphic_pane_vc_g3_ParamLimits

0x2df4,	// (0x00031b03) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e4cd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e4cd) list_double2_graphic_pane_vc_g

0x2e00,	// (0x00031b0f) list_double2_graphic_pane_vc_t1_ParamLimits

0x2e00,	// (0x00031b0f) list_double2_graphic_pane_vc_t1

0x2de8,	// (0x00031af7) list_single_heading_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_heading_pane_vc_g1

0x2df4,	// (0x00031b03) list_single_heading_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_heading_pane_vc_g

0x2e16,	// (0x00031b25) list_single_heading_pane_vc_t1_ParamLimits

0x2e16,	// (0x00031b25) list_single_heading_pane_vc_t1

0x2e2c,	// (0x00031b3b) list_single_heading_pane_vc_t2_ParamLimits

0x2e2c,	// (0x00031b3b) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0003e4ee) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0003e4ee) list_single_heading_pane_vc_t

0x2e3e,	// (0x00031b4d) list_setting_number_pane_vc_g1_ParamLimits

0x2e3e,	// (0x00031b4d) list_setting_number_pane_vc_g1

0x2e4a,	// (0x00031b59) list_setting_number_pane_vc_g2_ParamLimits

0x2e4a,	// (0x00031b59) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e4f3) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e4f3) list_setting_number_pane_vc_g

0x2e56,	// (0x00031b65) list_setting_number_pane_vc_t1_ParamLimits

0x2e56,	// (0x00031b65) list_setting_number_pane_vc_t1

0x2e6a,	// (0x00031b79) list_setting_number_pane_vc_t2_ParamLimits

0x2e6a,	// (0x00031b79) list_setting_number_pane_vc_t2

0x2e86,	// (0x00031b95) list_setting_number_pane_vc_t3_ParamLimits

0x2e86,	// (0x00031b95) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0003e4f8) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0003e4f8) list_setting_number_pane_vc_t

0x2ea4,	// (0x00031bb3) set_value_pane_vc_ParamLimits

0x2ea4,	// (0x00031bb3) set_value_pane_vc

0x6b3a,	// (0x00035849) list_double2_graphic_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double2_graphic_pane_vc

0x6b3a,	// (0x00035849) list_double2_large_graphic_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double2_large_graphic_pane_vc

0x6b3a,	// (0x00035849) list_double2_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double2_pane_vc

0x6b3a,	// (0x00035849) list_double_graphic_heading_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_graphic_heading_pane_vc

0x6b3a,	// (0x00035849) list_double_graphic_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_graphic_pane_vc

0x6b3a,	// (0x00035849) list_double_heading_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_heading_pane_vc

0x6b4c,	// (0x0003585b) list_double_large_graphic_pane_vc_ParamLimits

0x6b4c,	// (0x0003585b) list_double_large_graphic_pane_vc

0x6b3a,	// (0x00035849) list_double_number_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_number_pane_vc

0x6b3a,	// (0x00035849) list_double_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_pane_vc

0x6b3a,	// (0x00035849) list_double_time_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_double_time_pane_vc

0x6b3a,	// (0x00035849) list_setting_number_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_setting_number_pane_vc

0x6b3a,	// (0x00035849) list_setting_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_setting_pane_vc

0x6b3a,	// (0x00035849) list_single_graphic_heading_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_single_graphic_heading_pane_vc

0x6b3a,	// (0x00035849) list_single_heading_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_single_heading_pane_vc

0x6b3a,	// (0x00035849) list_single_number_heading_pane_vc_ParamLimits

0x6b3a,	// (0x00035849) list_single_number_heading_pane_vc

0x2ddc,	// (0x00031aeb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2ddc,	// (0x00031aeb) list_double_graphic_heading_pane_vc_g1

0x2de8,	// (0x00031af7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2de8,	// (0x00031af7) list_double_graphic_heading_pane_vc_g2

0x2df4,	// (0x00031b03) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2df4,	// (0x00031b03) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003e4cd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e4cd) list_double_graphic_heading_pane_vc_g

0x2ffb,	// (0x00031d0a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ffb,	// (0x00031d0a) list_double_graphic_heading_pane_vc_t1

0x3017,	// (0x00031d26) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3017,	// (0x00031d26) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0003e6fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0003e6fd) list_double_graphic_heading_pane_vc_t

0x2e3e,	// (0x00031b4d) list_setting_pane_vc_g1_ParamLimits

0x2e3e,	// (0x00031b4d) list_setting_pane_vc_g1

0x2e4a,	// (0x00031b59) list_setting_pane_vc_g2_ParamLimits

0x2e4a,	// (0x00031b59) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0003e4f3) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0003e4f3) list_setting_pane_vc_g

0x3035,	// (0x00031d44) list_setting_pane_vc_t1_ParamLimits

0x3035,	// (0x00031d44) list_setting_pane_vc_t1

0x3051,	// (0x00031d60) list_setting_pane_vc_t2_ParamLimits

0x3051,	// (0x00031d60) list_setting_pane_vc_t2

0x0001,

0xfa1c,	// (0x0003e72b) list_setting_pane_vc_t_ParamLimits

0xfa1c,	// (0x0003e72b) list_setting_pane_vc_t

0x2ea4,	// (0x00031bb3) set_value_pane_cp_vc_ParamLimits

0x2ea4,	// (0x00031bb3) set_value_pane_cp_vc

0x2de8,	// (0x00031af7) list_single_number_heading_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_single_number_heading_pane_vc_g1

0x2df4,	// (0x00031b03) list_single_number_heading_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_single_number_heading_pane_vc_g

0x306d,	// (0x00031d7c) list_single_number_heading_pane_vc_t1_ParamLimits

0x306d,	// (0x00031d7c) list_single_number_heading_pane_vc_t1

0x3083,	// (0x00031d92) list_single_number_heading_pane_vc_t2_ParamLimits

0x3083,	// (0x00031d92) list_single_number_heading_pane_vc_t2

0x3095,	// (0x00031da4) list_single_number_heading_pane_vc_t3_ParamLimits

0x3095,	// (0x00031da4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa21,	// (0x0003e730) list_single_number_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0003e730) list_single_number_heading_pane_vc_t

0x2ddc,	// (0x00031aeb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2ddc,	// (0x00031aeb) list_single_graphic_heading_pane_vc_g1

0x2de8,	// (0x00031af7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2de8,	// (0x00031af7) list_single_graphic_heading_pane_vc_g4

0x2df4,	// (0x00031b03) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2df4,	// (0x00031b03) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003e4cd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003e4cd) list_single_graphic_heading_pane_vc_g

0x30a7,	// (0x00031db6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x30a7,	// (0x00031db6) list_single_graphic_heading_pane_vc_t1

0x30bd,	// (0x00031dcc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x30bd,	// (0x00031dcc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x0003e737) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0003e737) list_single_graphic_heading_pane_vc_t

0x2de8,	// (0x00031af7) list_double2_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_double2_pane_vc_g1

0x2df4,	// (0x00031b03) list_double2_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_double2_pane_vc_g

0x30cf,	// (0x00031dde) list_double2_pane_vc_t1_ParamLimits

0x30cf,	// (0x00031dde) list_double2_pane_vc_t1

0x30e5,	// (0x00031df4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x30e5,	// (0x00031df4) list_double2_large_graphic_pane_vc_g1

0x2de8,	// (0x00031af7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2de8,	// (0x00031af7) list_double2_large_graphic_pane_vc_g2

0x2df4,	// (0x00031b03) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2df4,	// (0x00031b03) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0003e2f4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0003e2f4) list_double2_large_graphic_pane_vc_g

0x30f1,	// (0x00031e00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x30f1,	// (0x00031e00) list_double2_large_graphic_pane_vc_t1

0x3107,	// (0x00031e16) list_double_time_pane_vc_g1_ParamLimits

0x3107,	// (0x00031e16) list_double_time_pane_vc_g1

0x3113,	// (0x00031e22) list_double_time_pane_vc_g2_ParamLimits

0x3113,	// (0x00031e22) list_double_time_pane_vc_g2

0x0001,

0xfa2d,	// (0x0003e73c) list_double_time_pane_vc_g_ParamLimits

0xfa2d,	// (0x0003e73c) list_double_time_pane_vc_g

0x311f,	// (0x00031e2e) list_double_time_pane_vc_t1_ParamLimits

0x311f,	// (0x00031e2e) list_double_time_pane_vc_t1

0x3143,	// (0x00031e52) list_double_time_pane_vc_t2_ParamLimits

0x3143,	// (0x00031e52) list_double_time_pane_vc_t2

0x3192,	// (0x00031ea1) list_double_time_pane_vc_t3_ParamLimits

0x3192,	// (0x00031ea1) list_double_time_pane_vc_t3

0x31a4,	// (0x00031eb3) list_double_time_pane_vc_t4_ParamLimits

0x31a4,	// (0x00031eb3) list_double_time_pane_vc_t4

0x0003,

0xfa32,	// (0x0003e741) list_double_time_pane_vc_t_ParamLimits

0xfa32,	// (0x0003e741) list_double_time_pane_vc_t

0x2de8,	// (0x00031af7) list_double_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_double_pane_vc_g1

0x2df4,	// (0x00031b03) list_double_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_double_pane_vc_g

0x31b8,	// (0x00031ec7) list_double_pane_vc_t1_ParamLimits

0x31b8,	// (0x00031ec7) list_double_pane_vc_t1

0x31cc,	// (0x00031edb) list_double_pane_vc_t2_ParamLimits

0x31cc,	// (0x00031edb) list_double_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003e74a) list_double_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003e74a) list_double_pane_vc_t

0x2de8,	// (0x00031af7) list_double_number_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_double_number_pane_vc_g1

0x2df4,	// (0x00031b03) list_double_number_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_double_number_pane_vc_g

0x31e4,	// (0x00031ef3) list_double_number_pane_vc_t1_ParamLimits

0x31e4,	// (0x00031ef3) list_double_number_pane_vc_t1

0x31f6,	// (0x00031f05) list_double_number_pane_vc_t2_ParamLimits

0x31f6,	// (0x00031f05) list_double_number_pane_vc_t2

0x320a,	// (0x00031f19) list_double_number_pane_vc_t3_ParamLimits

0x320a,	// (0x00031f19) list_double_number_pane_vc_t3

0x0002,

0xfa40,	// (0x0003e74f) list_double_number_pane_vc_t_ParamLimits

0xfa40,	// (0x0003e74f) list_double_number_pane_vc_t

0x3222,	// (0x00031f31) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3222,	// (0x00031f31) list_double_large_graphic_pane_vc_g1

0x3244,	// (0x00031f53) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3244,	// (0x00031f53) list_double_large_graphic_pane_vc_g2

0x3258,	// (0x00031f67) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3258,	// (0x00031f67) list_double_large_graphic_pane_vc_g3

0x3267,	// (0x00031f76) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3267,	// (0x00031f76) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa47,	// (0x0003e756) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0003e756) list_double_large_graphic_pane_vc_g

0x3273,	// (0x00031f82) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3273,	// (0x00031f82) list_double_large_graphic_pane_vc_t1

0x328f,	// (0x00031f9e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x328f,	// (0x00031f9e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0003e75f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0003e75f) list_double_large_graphic_pane_vc_t

0x2de8,	// (0x00031af7) list_double_heading_pane_vc_g1_ParamLimits

0x2de8,	// (0x00031af7) list_double_heading_pane_vc_g1

0x2df4,	// (0x00031b03) list_double_heading_pane_vc_g2_ParamLimits

0x2df4,	// (0x00031b03) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0003e2d7) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0003e2d7) list_double_heading_pane_vc_g

0x32b1,	// (0x00031fc0) list_double_heading_pane_vc_t1_ParamLimits

0x32b1,	// (0x00031fc0) list_double_heading_pane_vc_t1

0x32c5,	// (0x00031fd4) list_double_heading_pane_vc_t2_ParamLimits

0x32c5,	// (0x00031fd4) list_double_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0003e764) list_double_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0003e764) list_double_heading_pane_vc_t

0x32dd,	// (0x00031fec) list_double_graphic_pane_vc_g1_ParamLimits

0x32dd,	// (0x00031fec) list_double_graphic_pane_vc_g1

0x32e9,	// (0x00031ff8) list_double_graphic_pane_vc_g2_ParamLimits

0x32e9,	// (0x00031ff8) list_double_graphic_pane_vc_g2

0x2de8,	// (0x00031af7) list_double_graphic_pane_vc_g3_ParamLimits

0x2de8,	// (0x00031af7) list_double_graphic_pane_vc_g3

0x0003,

0xfa5a,	// (0x0003e769) list_double_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003e769) list_double_graphic_pane_vc_g

0x3306,	// (0x00032015) list_double_graphic_pane_vc_t1_ParamLimits

0x3306,	// (0x00032015) list_double_graphic_pane_vc_t1

0x3330,	// (0x0003203f) list_double_graphic_pane_vc_t2_ParamLimits

0x3330,	// (0x0003203f) list_double_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003e772) list_double_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003e772) list_double_graphic_pane_vc_t

0x01b6,	// (0x0002eec5) aid_size_cell_fastswap

0xb79a,	// (0x0003a4a9) aid_size_cell_touch_ParamLimits

0xb79a,	// (0x0003a4a9) aid_size_cell_touch

0x0423,	// (0x0002f132) popup_fast_swap_wide_window_ParamLimits

0x0423,	// (0x0002f132) popup_fast_swap_wide_window

0xb94a,	// (0x0003a659) touch_pane_ParamLimits

0xb94a,	// (0x0003a659) touch_pane

0x40ac,	// (0x00032dbb) button_value_adjust_pane_cp2

0x0ae0,	// (0x0002f7ef) button_value_adjust_pane_cp4

0x0b00,	// (0x0002f80f) form_field_data_pane_cp2

0xbdba,	// (0x0003aac9) form_field_data_wide_pane_cp2

0x452a,	// (0x00033239) bg_scroll_pane_ParamLimits

0x0ea1,	// (0x0002fbb0) scroll_handle_pane_ParamLimits

0x0eb5,	// (0x0002fbc4) scroll_sc2_down_pane_ParamLimits

0x0eb5,	// (0x0002fbc4) scroll_sc2_down_pane

0x455b,	// (0x0003326a) scroll_sc2_up_pane_ParamLimits

0x455b,	// (0x0003326a) scroll_sc2_up_pane

0xe1b6,	// (0x0003cec5) grid_wheel_folder_pane_g1_ParamLimits

0xe1b6,	// (0x0003cec5) grid_wheel_folder_pane_g1

0x107a,	// (0x0002fd89) clock_nsta_pane_cp2_ParamLimits

0x107a,	// (0x0002fd89) clock_nsta_pane_cp2

0xd60f,	// (0x0003c31e) listscroll_midp_pane_ParamLimits

0xd61b,	// (0x0003c32a) midp_canvas_pane

0x504f,	// (0x00033d5e) nsta_clock_indic_pane

0x5083,	// (0x00033d92) listscroll_form_pane_vc

0x508b,	// (0x00033d9a) listscroll_set_pane_vc_ParamLimits

0x508b,	// (0x00033d9a) listscroll_set_pane_vc

0xd8a0,	// (0x0003c5af) clock_nsta_pane

0xd8ca,	// (0x0003c5d9) indicator_nsta_pane

0x54e5,	// (0x000341f4) bg_popup_sub_pane_cp2_ParamLimits

0x54f9,	// (0x00034208) find_pane_cp2_ParamLimits

0x54f9,	// (0x00034208) find_pane_cp2

0x550f,	// (0x0003421e) grid_toobar_pane_ParamLimits

0x55ef,	// (0x000342fe) list_form_gen_pane_vc_ParamLimits

0x55ef,	// (0x000342fe) list_form_gen_pane_vc

0x5605,	// (0x00034314) scroll_pane_cp8_vc_ParamLimits

0x5605,	// (0x00034314) scroll_pane_cp8_vc

0x5681,	// (0x00034390) data_form_wide_pane_vc_ParamLimits

0x5681,	// (0x00034390) data_form_wide_pane_vc

0x568d,	// (0x0003439c) form_field_data_wide_pane_vc_g1

0x5695,	// (0x000343a4) form_field_data_wide_pane_vc_t1_ParamLimits

0x5695,	// (0x000343a4) form_field_data_wide_pane_vc_t1

0x40c0,	// (0x00032dcf) input_focus_pane_cp6_vc_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_cp6_vc

0x59d5,	// (0x000346e4) list_midp_pane_ParamLimits

0x6d1b,	// (0x00035a2a) scroll_pane_cp16_ParamLimits

0x6d1b,	// (0x00035a2a) scroll_pane_cp16

0x5a17,	// (0x00034726) button_value_adjust_pane_ParamLimits

0x5a17,	// (0x00034726) button_value_adjust_pane

0xddd7,	// (0x0003cae6) button_value_adjust_pane_cp6_ParamLimits

0xddd7,	// (0x0003cae6) button_value_adjust_pane_cp6

0xdef1,	// (0x0003cc00) settings_code_pane_cp_ParamLimits

0xdef1,	// (0x0003cc00) settings_code_pane_cp

0x3767,	// (0x00032476) cell_touch_pane_g1

0x3767,	// (0x00032476) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003e412) cell_touch_pane_g

0xe07c,	// (0x0003cd8b) cell_touch_pane_cp_ParamLimits

0xe07c,	// (0x0003cd8b) cell_touch_pane_cp

0xe098,	// (0x0003cda7) cell_touch_pane_ParamLimits

0xe098,	// (0x0003cda7) cell_touch_pane

0x3767,	// (0x00032476) scroll_sc2_down_pane_g1

0x3767,	// (0x00032476) scroll_sc2_up_pane_g1

0x3771,	// (0x00032480) bg_set_opt_pane_cp4_vc

0x70ab,	// (0x00035dba) list_set_graphic_pane_vc_g1_ParamLimits

0x70ab,	// (0x00035dba) list_set_graphic_pane_vc_g1

0x70b7,	// (0x00035dc6) list_set_graphic_pane_vc_g2_ParamLimits

0x70b7,	// (0x00035dc6) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0003e702) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0003e702) list_set_graphic_pane_vc_g

0x70c3,	// (0x00035dd2) text_primary_small_cp13_vc_ParamLimits

0x70c3,	// (0x00035dd2) text_primary_small_cp13_vc

0x70db,	// (0x00035dea) list_set_graphic_pane_vc_ParamLimits

0x70db,	// (0x00035dea) list_set_graphic_pane_vc

0x3771,	// (0x00032480) input_focus_pane_cp2_vc

0x3767,	// (0x00032476) setting_code_pane_vc_g1

0x389c,	// (0x000325ab) setting_code_pane_vc_t1

0x70ed,	// (0x00035dfc) set_text_pane_vc_t1_ParamLimits

0x70ed,	// (0x00035dfc) set_text_pane_vc_t1

0x3771,	// (0x00032480) input_focus_pane_cp1_vc

0x7109,	// (0x00035e18) list_set_text_pane_vc

0x3767,	// (0x00032476) setting_text_pane_vc_g1

0x3771,	// (0x00032480) bg_set_opt_pane_cp2_vc

0x3893,	// (0x000325a2) setting_slider_graphic_pane_vc_g1

0x7113,	// (0x00035e22) setting_slider_graphic_pane_vc_t1

0x7123,	// (0x00035e32) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003e707) setting_slider_graphic_pane_vc_t

0x7133,	// (0x00035e42) slider_set_pane_cp_vc

0x713b,	// (0x00035e4a) slider_set_pane_vc_g1

0x7144,	// (0x00035e53) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0003e70c) slider_set_pane_vc_g

0x4118,	// (0x00032e27) set_opt_bg_pane_g1_copy1

0x4120,	// (0x00032e2f) set_opt_bg_pane_g2_copy1

0x7170,	// (0x00035e7f) set_opt_bg_pane_g3_copy1

0x4130,	// (0x00032e3f) set_opt_bg_pane_g4_copy1

0x4138,	// (0x00032e47) set_opt_bg_pane_g5_copy1

0x4140,	// (0x00032e4f) set_opt_bg_pane_g6_copy1

0x717a,	// (0x00035e89) set_opt_bg_pane_g7_copy1

0x7182,	// (0x00035e91) set_opt_bg_pane_g8_copy1

0x718c,	// (0x00035e9b) set_opt_bg_pane_g9_copy1

0x3771,	// (0x00032480) bg_set_opt_pane_cp_vc

0x7196,	// (0x00035ea5) setting_slider_pane_vc_t1

0x71a5,	// (0x00035eb4) setting_slider_pane_vc_t2

0x71b5,	// (0x00035ec4) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0003e71b) setting_slider_pane_vc_t

0x71c5,	// (0x00035ed4) slider_set_pane_vc

0x19f0,	// (0x000306ff) volume_set_pane_vc_g1

0x19f9,	// (0x00030708) volume_set_pane_vc_g2

0x1a02,	// (0x00030711) volume_set_pane_vc_g3

0x1a0b,	// (0x0003071a) volume_set_pane_vc_g4

0x1a14,	// (0x00030723) volume_set_pane_vc_g5

0x1a1d,	// (0x0003072c) volume_set_pane_vc_g6

0x1a26,	// (0x00030735) volume_set_pane_vc_g7

0x1a2f,	// (0x0003073e) volume_set_pane_vc_g8

0x1a38,	// (0x00030747) volume_set_pane_vc_g9

0x1a41,	// (0x00030750) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0003e5c0) volume_set_pane_vc_g

0x71cd,	// (0x00035edc) volume_set_pane_vc

0x71d5,	// (0x00035ee4) button_value_adjust_pane_cp1_vc

0x71df,	// (0x00035eee) list_highlight_pane_cp2_vc

0x71e8,	// (0x00035ef7) list_set_pane_vc_ParamLimits

0x71e8,	// (0x00035ef7) list_set_pane_vc

0x7246,	// (0x00035f55) main_pane_set_vc_t1_ParamLimits

0x7246,	// (0x00035f55) main_pane_set_vc_t1

0x725b,	// (0x00035f6a) main_pane_set_vc_t2_ParamLimits

0x725b,	// (0x00035f6a) main_pane_set_vc_t2

0x726d,	// (0x00035f7c) main_pane_set_vc_t3_ParamLimits

0x726d,	// (0x00035f7c) main_pane_set_vc_t3

0x7281,	// (0x00035f90) main_pane_set_vc_t4_ParamLimits

0x7281,	// (0x00035f90) main_pane_set_vc_t4

0x0003,

0xfa13,	// (0x0003e722) main_pane_set_vc_t_ParamLimits

0xfa13,	// (0x0003e722) main_pane_set_vc_t

0x7295,	// (0x00035fa4) setting_code_pane_vc_ParamLimits

0x7295,	// (0x00035fa4) setting_code_pane_vc

0x72a6,	// (0x00035fb5) setting_slider_graphic_pane_vc

0x72a6,	// (0x00035fb5) setting_slider_pane_vc

0x72a6,	// (0x00035fb5) setting_text_pane_vc

0x72a6,	// (0x00035fb5) setting_volume_pane_vc

0x72b0,	// (0x00035fbf) scroll_pane_cp121_vc

0x409a,	// (0x00032da9) set_content_pane_vc

0x72b8,	// (0x00035fc7) button_value_adjust_pane_g1

0x72c1,	// (0x00035fd0) button_value_adjust_pane_g2

0x0001,

0xfa68,	// (0x0003e777) button_value_adjust_pane_g

0x72ca,	// (0x00035fd9) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72ca,	// (0x00035fd9) form_field_slider_wide_pane_vc_t1

0x72de,	// (0x00035fed) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72de,	// (0x00035fed) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6d,	// (0x0003e77c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003e77c) form_field_slider_wide_pane_vc_t

0x3acc,	// (0x000327db) input_focus_pane_cp10_vc_ParamLimits

0x3acc,	// (0x000327db) input_focus_pane_cp10_vc

0x730c,	// (0x0003601b) slider_cont_pane_cp1_vc_ParamLimits

0x730c,	// (0x0003601b) slider_cont_pane_cp1_vc

0x731e,	// (0x0003602d) slider_form_pane_g1_cp2

0x7144,	// (0x00035e53) slider_form_pane_g2_cp2

0x734b,	// (0x0003605a) form_field_slider_pane_vc_t3

0x7359,	// (0x00036068) form_field_slider_pane_vc_t4

0x7367,	// (0x00036076) slider_form_pane_vc_ParamLimits

0x7367,	// (0x00036076) slider_form_pane_vc

0x7374,	// (0x00036083) form_field_slider_pane_vc_t1_ParamLimits

0x7374,	// (0x00036083) form_field_slider_pane_vc_t1

0x72de,	// (0x00035fed) form_field_slider_pane_vc_t2_ParamLimits

0x72de,	// (0x00035fed) form_field_slider_pane_vc_t2

0x0001,

0xfa7f,	// (0x0003e78e) form_field_slider_pane_vc_t_ParamLimits

0xfa7f,	// (0x0003e78e) form_field_slider_pane_vc_t

0x3acc,	// (0x000327db) input_focus_pane_cp9_vc_ParamLimits

0x3acc,	// (0x000327db) input_focus_pane_cp9_vc

0x7390,	// (0x0003609f) slider_cont_pane_vc_ParamLimits

0x7390,	// (0x0003609f) slider_cont_pane_vc

0x73a4,	// (0x000360b3) list_form_graphic_pane_cp_vc_ParamLimits

0x73a4,	// (0x000360b3) list_form_graphic_pane_cp_vc

0x568d,	// (0x0003439c) form_field_popup_wide_pane_vc_g1

0x73b9,	// (0x000360c8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x73b9,	// (0x000360c8) form_field_popup_wide_pane_vc_t1

0x40c0,	// (0x00032dcf) input_focus_pane_cp8_vc_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_cp8_vc

0x73fe,	// (0x0003610d) list_form_wide_pane_vc_ParamLimits

0x73fe,	// (0x0003610d) list_form_wide_pane_vc

0x740a,	// (0x00036119) list_form_graphic_pane_vc_g1

0x7412,	// (0x00036121) list_form_graphic_pane_vc_t1_ParamLimits

0x7412,	// (0x00036121) list_form_graphic_pane_vc_t1

0x3851,	// (0x00032560) list_highlight_pane_cp5_vc_ParamLimits

0x3851,	// (0x00032560) list_highlight_pane_cp5_vc

0x742e,	// (0x0003613d) list_form_graphic_pane_vc_ParamLimits

0x742e,	// (0x0003613d) list_form_graphic_pane_vc

0x568d,	// (0x0003439c) form_field_popup_pane_vc_g1

0x7450,	// (0x0003615f) form_field_popup_pane_vc_t1_ParamLimits

0x7450,	// (0x0003615f) form_field_popup_pane_vc_t1

0x40c0,	// (0x00032dcf) input_focus_pane_cp7_vc_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_cp7_vc

0x7467,	// (0x00036176) list_form_pane_vc_ParamLimits

0x7467,	// (0x00036176) list_form_pane_vc

0x7473,	// (0x00036182) data_form_pane_vc_t1_ParamLimits

0x7473,	// (0x00036182) data_form_pane_vc_t1

0x4118,	// (0x00032e27) input_focus_pane_vc_g1

0x4120,	// (0x00032e2f) input_focus_pane_vc_g2

0x4128,	// (0x00032e37) input_focus_pane_vc_g3

0x4130,	// (0x00032e3f) input_focus_pane_vc_g4

0x4138,	// (0x00032e47) input_focus_pane_vc_g5

0x4140,	// (0x00032e4f) input_focus_pane_vc_g6

0x4148,	// (0x00032e57) input_focus_pane_vc_g7

0x4150,	// (0x00032e5f) input_focus_pane_vc_g8

0x4158,	// (0x00032e67) input_focus_pane_vc_g9

0x3767,	// (0x00032476) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003e39b) input_focus_pane_vc_g

0x5681,	// (0x00034390) data_form_pane_vc_ParamLimits

0x5681,	// (0x00034390) data_form_pane_vc

0x568d,	// (0x0003439c) form_field_data_pane_vc_g1

0x748e,	// (0x0003619d) form_field_data_pane_vc_t1_ParamLimits

0x748e,	// (0x0003619d) form_field_data_pane_vc_t1

0x40c0,	// (0x00032dcf) input_focus_pane_vc_ParamLimits

0x40c0,	// (0x00032dcf) input_focus_pane_vc

0x74a8,	// (0x000361b7) button_value_adjust_pane_cp3_vc

0x74b0,	// (0x000361bf) button_value_adjust_pane_cp5_vc

0x74b8,	// (0x000361c7) form_field_data_pane_vc_ParamLimits

0x74b8,	// (0x000361c7) form_field_data_pane_vc

0x74cf,	// (0x000361de) form_field_data_pane_vc_cp2

0x74d7,	// (0x000361e6) form_field_data_wide_pane_vc_ParamLimits

0x74d7,	// (0x000361e6) form_field_data_wide_pane_vc

0x74ed,	// (0x000361fc) form_field_data_wide_pane_vc_cp2

0x74f5,	// (0x00036204) form_field_popup_pane_vc_ParamLimits

0x74f5,	// (0x00036204) form_field_popup_pane_vc

0x750c,	// (0x0003621b) form_field_popup_wide_pane_vc_ParamLimits

0x750c,	// (0x0003621b) form_field_popup_wide_pane_vc

0x7522,	// (0x00036231) form_field_slider_pane_vc_ParamLimits

0x7522,	// (0x00036231) form_field_slider_pane_vc

0x7535,	// (0x00036244) form_field_slider_wide_pane_vc_ParamLimits

0x7535,	// (0x00036244) form_field_slider_wide_pane_vc

0xe0b6,	// (0x0003cdc5) grid_touch_1_pane_ParamLimits

0xe0b6,	// (0x0003cdc5) grid_touch_1_pane

0xe0ca,	// (0x0003cdd9) grid_touch_2_pane_ParamLimits

0xe0ca,	// (0x0003cdd9) grid_touch_2_pane

0x7603,	// (0x00036312) touch_pane_g1_ParamLimits

0x7603,	// (0x00036312) touch_pane_g1

0x756c,	// (0x0003627b) cell_app_pane_cp_wide_ParamLimits

0x756c,	// (0x0003627b) cell_app_pane_cp_wide

0x757d,	// (0x0003628c) grid_popup_fast_wide_pane_ParamLimits

0x757d,	// (0x0003628c) grid_popup_fast_wide_pane

0x7591,	// (0x000362a0) scroll_pane_cp19_ParamLimits

0x7591,	// (0x000362a0) scroll_pane_cp19

0x3771,	// (0x00032480) bg_popup_window_pane_cp20

0x75a5,	// (0x000362b4) listscroll_popup_fast_wide_pane

0x4280,	// (0x00032f8f) grid_indicator_nsta_pane

0x75ad,	// (0x000362bc) clock_nsta_pane_g1

0x75b6,	// (0x000362c5) clock_nsta_pane_t1

0xe0f4,	// (0x0003ce03) cell_indicator_nsta_pane_ParamLimits

0xe0f4,	// (0x0003ce03) cell_indicator_nsta_pane

0x7603,	// (0x00036312) cell_indicator_nsta_pane_g1

0xe10b,	// (0x0003ce1a) cell_indicator_nsta_pane_g2

0x0001,

0xfa90,	// (0x0003e79f) cell_indicator_nsta_pane_g

0x761e,	// (0x0003632d) clock_nsta_pane_cp

0x7626,	// (0x00036335) indicator_nsta_pane_cp

0x762e,	// (0x0003633d) nsta_clock_indic_pane_g1

0x391a,	// (0x00032629) grid_indicator_pane

0x4650,	// (0x0003335f) scroll_pane_cp29

0x0fc9,	// (0x0002fcd8) indicator_nsta_pane_cp2_ParamLimits

0x0fc9,	// (0x0002fcd8) indicator_nsta_pane_cp2

0x3851,	// (0x00032560) main_apps_wheel_pane

0x5896,	// (0x000345a5) form_midp_field_text_pane_ParamLimits

0x59e1,	// (0x000346f0) scroll_bar_cp050_ParamLimits

0x767e,	// (0x0003638d) cell_indicator_pane_ParamLimits

0x767e,	// (0x0003638d) cell_indicator_pane

0x7695,	// (0x000363a4) cell_indicator_pane_g1

0xe118,	// (0x0003ce27) grid_wheel_folder_pane_ParamLimits

0xe118,	// (0x0003ce27) grid_wheel_folder_pane

0xe126,	// (0x0003ce35) list_wheel_apps_pane_ParamLimits

0xe126,	// (0x0003ce35) list_wheel_apps_pane

0xe134,	// (0x0003ce43) main_apps_wheel_pane_g1_ParamLimits

0xe134,	// (0x0003ce43) main_apps_wheel_pane_g1

0xe140,	// (0x0003ce4f) main_apps_wheel_pane_g2_ParamLimits

0xe140,	// (0x0003ce4f) main_apps_wheel_pane_g2

0x0001,

0xfaac,	// (0x0003e7bb) main_apps_wheel_pane_g_ParamLimits

0xfaac,	// (0x0003e7bb) main_apps_wheel_pane_g

0xe14e,	// (0x0003ce5d) main_apps_wheel_pane_t1_ParamLimits

0xe14e,	// (0x0003ce5d) main_apps_wheel_pane_t1

0xe162,	// (0x0003ce71) list_wheel_apps_pane_g1

0xe16a,	// (0x0003ce79) list_wheel_apps_pane_g2

0xe172,	// (0x0003ce81) list_wheel_apps_pane_g3

0xe17a,	// (0x0003ce89) list_wheel_apps_pane_g4

0xe1ac,	// (0x0003cebb) list_wheel_apps_pane_g5

0x0004,

0xfab1,	// (0x0003e7c0) list_wheel_apps_pane_g

0x4bd3,	// (0x000338e2) navi_icon_text_pane

0xd794,	// (0x0003c4a3) aid_fill_nsta

0x775a,	// (0x00036469) navi_icon_text_pane_g1

0x7766,	// (0x00036475) navi_icon_text_pane_t1

0x4a66,	// (0x00033775) list_set_graphic_pane_t1_ParamLimits

0x4a66,	// (0x00033775) list_set_graphic_pane_t1

0x6144,	// (0x00034e53) popup_midp_note_alarm_window_t6_ParamLimits

0x6144,	// (0x00034e53) popup_midp_note_alarm_window_t6

0x6156,	// (0x00034e65) popup_midp_note_alarm_window_t7_ParamLimits

0x6156,	// (0x00034e65) popup_midp_note_alarm_window_t7

0x6168,	// (0x00034e77) popup_midp_note_alarm_window_t8_ParamLimits

0x6168,	// (0x00034e77) popup_midp_note_alarm_window_t8

0x617a,	// (0x00034e89) popup_midp_note_alarm_window_t9_ParamLimits

0x617a,	// (0x00034e89) popup_midp_note_alarm_window_t9

0x618c,	// (0x00034e9b) popup_midp_note_alarm_window_t10_ParamLimits

0x618c,	// (0x00034e9b) popup_midp_note_alarm_window_t10

0x619e,	// (0x00034ead) popup_midp_note_alarm_window_t11_ParamLimits

0x619e,	// (0x00034ead) popup_midp_note_alarm_window_t11

0x61b0,	// (0x00034ebf) scroll_pane_cp17_ParamLimits

0x61b0,	// (0x00034ebf) scroll_pane_cp17

0x19f0,	// (0x000306ff) volume_small_pane_cp_g1

0x1ce5,	// (0x000309f4) volume_small_pane_cp_g2

0x1cee,	// (0x000309fd) volume_small_pane_cp_g3

0x1cf7,	// (0x00030a06) volume_small_pane_cp_g4

0x1d00,	// (0x00030a0f) volume_small_pane_cp_g5

0x1d09,	// (0x00030a18) volume_small_pane_cp_g6

0x1d12,	// (0x00030a21) volume_small_pane_cp_g7

0x1d1b,	// (0x00030a2a) volume_small_pane_cp_g8

0x1d24,	// (0x00030a33) volume_small_pane_cp_g9

0x1d2d,	// (0x00030a3c) volume_small_pane_cp_g10

0x4e30,	// (0x00033b3f) midp_ticker_pane_g1_ParamLimits

0x4e3c,	// (0x00033b4b) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003e467) midp_ticker_pane_g_ParamLimits

0x4e48,	// (0x00033b57) midp_ticker_pane_t1_ParamLimits

0xd7b8,	// (0x0003c4c7) aid_fill_nsta_2

0x59cd,	// (0x000346dc) list_form2_midp_pane

0x6b09,	// (0x00035818) midp_editing_number_pane_ParamLimits

0x6b18,	// (0x00035827) midp_ticker_pane_ParamLimits

0x7778,	// (0x00036487) form2_midp_field_pane

0x779c,	// (0x000364ab) scroll_pane_cp51

0x77bc,	// (0x000364cb) form2_midp_button_pane_ParamLimits

0x77bc,	// (0x000364cb) form2_midp_button_pane

0x77ce,	// (0x000364dd) form2_midp_content_pane_ParamLimits

0x77ce,	// (0x000364dd) form2_midp_content_pane

0x77e8,	// (0x000364f7) form2_midp_field_choice_group_pane

0x77f0,	// (0x000364ff) form2_midp_field_pane_g1

0x77f8,	// (0x00036507) form2_midp_field_pane_g2

0x7800,	// (0x0003650f) form2_midp_field_pane_g3

0x7808,	// (0x00036517) form2_midp_field_pane_g4

0x0003,

0xfad6,	// (0x0003e7e5) form2_midp_field_pane_g

0x7810,	// (0x0003651f) form2_midp_gauge_slider_pane

0x7818,	// (0x00036527) form2_midp_gauge_wait_pane

0x7820,	// (0x0003652f) form2_midp_image_pane_ParamLimits

0x7820,	// (0x0003652f) form2_midp_image_pane

0x783b,	// (0x0003654a) form2_midp_label_pane_ParamLimits

0x783b,	// (0x0003654a) form2_midp_label_pane

0xe1df,	// (0x0003ceee) form2_midp_label_pane_cp_ParamLimits

0xe1df,	// (0x0003ceee) form2_midp_label_pane_cp

0x7875,	// (0x00036584) form2_midp_string_pane_ParamLimits

0x7875,	// (0x00036584) form2_midp_string_pane

0xc8c8,	// (0x0003b5d7) form2_midp_text_pane_ParamLimits

0xc8c8,	// (0x0003b5d7) form2_midp_text_pane

0x7887,	// (0x00036596) form2_midp_time_pane

0x7897,	// (0x000365a6) input_focus_pane_cp51_ParamLimits

0x7897,	// (0x000365a6) input_focus_pane_cp51

0x78af,	// (0x000365be) form2_midp_label_pane_t1_ParamLimits

0x78af,	// (0x000365be) form2_midp_label_pane_t1

0xc8e1,	// (0x0003b5f0) form2_mdip_text_pane_t1_ParamLimits

0xc8e1,	// (0x0003b5f0) form2_mdip_text_pane_t1

0x3393,	// (0x000320a2) form2_midp_time_pane_t1

0x78f8,	// (0x00036607) form2_midp_gauge_slider_pane_t1

0xe1fe,	// (0x0003cf0d) form2_midp_gauge_slider_pane_t2

0xe210,	// (0x0003cf1f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadf,	// (0x0003e7ee) form2_midp_gauge_slider_pane_t

0x792e,	// (0x0003663d) form2_midp_slider_pane

0x793a,	// (0x00036649) form2_midp_gauge_wait_pane_t1

0x7948,	// (0x00036657) form2_midp_wait_pane_ParamLimits

0x7948,	// (0x00036657) form2_midp_wait_pane

0xe222,	// (0x0003cf31) list_single_2graphic_pane_cp4_ParamLimits

0xe222,	// (0x0003cf31) list_single_2graphic_pane_cp4

0xdbd4,	// (0x0003c8e3) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd4,	// (0x0003c8e3) list_single_midp_graphic_pane_cp

0x3771,	// (0x00032480) list_highlight_pane_cp20

0x7997,	// (0x000366a6) list_single_2graphic_pane_g1_cp4

0x799f,	// (0x000366ae) list_single_2graphic_pane_g2_cp4

0x79a7,	// (0x000366b6) list_single_2graphic_pane_t1_cp4

0x3851,	// (0x00032560) list_highlight_pane_cp21

0x79b6,	// (0x000366c5) list_single_midp_graphic_pane_g4_cp

0x79c5,	// (0x000366d4) list_single_midp_graphic_pane_t1_cp

0xe236,	// (0x0003cf45) form2_mdip_string_pane_t1_ParamLimits

0xe236,	// (0x0003cf45) form2_mdip_string_pane_t1

0x3771,	// (0x00032480) bg_wml_button_pane_cp2

0x3767,	// (0x00032476) form2_midp_image_pane_g1

0x08ca,	// (0x0002f5d9) list_double_large_graphic_pane_g5_ParamLimits

0x08ca,	// (0x0002f5d9) list_double_large_graphic_pane_g5

0xd60f,	// (0x0003c31e) midp_form_pane_ParamLimits

0x3851,	// (0x00032560) main_apps_wheel_pane_ParamLimits

0xc52d,	// (0x0003b23c) popup_preview_window_ParamLimits

0xc52d,	// (0x0003b23c) popup_preview_window

0x1857,	// (0x00030566) popup_touch_info_window_ParamLimits

0x1857,	// (0x00030566) popup_touch_info_window

0x1875,	// (0x00030584) popup_touch_menu_window_ParamLimits

0x1875,	// (0x00030584) popup_touch_menu_window

0x375d,	// (0x0003246c) bg_popup_sub_pane_cp6

0x7ac4,	// (0x000367d3) list_touch_menu_pane

0x7acc,	// (0x000367db) list_single_touch_menu_pane_ParamLimits

0x7acc,	// (0x000367db) list_single_touch_menu_pane

0x7ae2,	// (0x000367f1) list_single_touch_menu_pane_t1

0x3851,	// (0x00032560) bg_popup_sub_pane_cp7_ParamLimits

0x3851,	// (0x00032560) bg_popup_sub_pane_cp7

0x7af0,	// (0x000367ff) heading_sub_pane

0x7af8,	// (0x00036807) list_touch_info_pane_ParamLimits

0x7af8,	// (0x00036807) list_touch_info_pane

0x7b07,	// (0x00036816) list_single_touch_info_pane_ParamLimits

0x7b07,	// (0x00036816) list_single_touch_info_pane

0x7b19,	// (0x00036828) list_single_touch_info_pane_t1

0x7b27,	// (0x00036836) list_single_touch_info_pane_t2

0x0001,

0xfaed,	// (0x0003e7fc) list_single_touch_info_pane_t

0x4d53,	// (0x00033a62) bg_popup_heading_pane_cp

0x7b35,	// (0x00036844) heading_sub_pane_t1

0x561b,	// (0x0003432a) bg_popup_preview_window_pane_cp_ParamLimits

0x561b,	// (0x0003432a) bg_popup_preview_window_pane_cp

0x7af0,	// (0x000367ff) heading_preview_pane

0x7af8,	// (0x00036807) list_preview_pane_ParamLimits

0x7af8,	// (0x00036807) list_preview_pane

0x7b43,	// (0x00036852) popup_preview_window_g1

0x7b07,	// (0x00036816) list_single_preview_pane_ParamLimits

0x7b07,	// (0x00036816) list_single_preview_pane

0x7b4b,	// (0x0003685a) list_single_preview_pane_g1

0x7b53,	// (0x00036862) list_single_preview_pane_t1

0x7b19,	// (0x00036828) list_single_preview_pane_t2

0x0001,

0xfaf2,	// (0x0003e801) list_single_preview_pane_t

0x7b61,	// (0x00036870) bg_popup_heading_pane_cp2_ParamLimits

0x7b61,	// (0x00036870) bg_popup_heading_pane_cp2

0x7b77,	// (0x00036886) heading_preview_pane_g1

0x7b7f,	// (0x0003688e) heading_preview_pane_t1_ParamLimits

0x7b7f,	// (0x0003688e) heading_preview_pane_t1

0x393d,	// (0x0003264c) soft_indicator_pane_t1_ParamLimits

0x4033,	// (0x00032d42) scroll_pane_ParamLimits

0x4549,	// (0x00033258) scroll_sc2_left_pane

0x4552,	// (0x00033261) scroll_sc2_right_pane

0x4571,	// (0x00033280) scroll_bg_pane_g1_ParamLimits

0x4586,	// (0x00033295) scroll_bg_pane_g2_ParamLimits

0x459e,	// (0x000332ad) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003e3f2) scroll_bg_pane_g_ParamLimits

0x4571,	// (0x00033280) scroll_handle_pane_g1_ParamLimits

0x45c0,	// (0x000332cf) scroll_handle_pane_g2_ParamLimits

0x459e,	// (0x000332ad) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003e3f9) scroll_handle_pane_g_ParamLimits

0x131d,	// (0x0003002c) popup_choice_list_window_ParamLimits

0x131d,	// (0x0003002c) popup_choice_list_window

0x54f1,	// (0x00034200) choice_list_pane

0x5573,	// (0x00034282) cell_toolbar_pane_t1

0x559b,	// (0x000342aa) toolbar_button_pane_ParamLimits

0x666a,	// (0x00035379) ai_gene_pane_1_t2_ParamLimits

0x666a,	// (0x00035379) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0003e61c) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0003e61c) ai_gene_pane_1_t

0x7b9c,	// (0x000368ab) scroll_sc2_left_pane_g1

0x7b9c,	// (0x000368ab) scroll_sc2_right_pane_g1

0x509d,	// (0x00033dac) bg_popup_sub_pane_cp10

0x7ba6,	// (0x000368b5) list_choice_list_pane

0x7bbf,	// (0x000368ce) list_single_choice_list_pane_ParamLimits

0x7bbf,	// (0x000368ce) list_single_choice_list_pane

0x7bd2,	// (0x000368e1) list_single_choice_list_pane_g1

0x4251,	// (0x00032f60) list_single_choice_list_pane_t1_ParamLimits

0x4251,	// (0x00032f60) list_single_choice_list_pane_t1

0x7bda,	// (0x000368e9) choice_list_pane_g1

0x7be2,	// (0x000368f1) choice_list_pane_t1

0x375d,	// (0x0003246c) input_focus_pane_cp11

0x4428,	// (0x00033137) title_pane_stacon_g2_ParamLimits

0x4428,	// (0x00033137) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003e3d8) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003e3d8) title_pane_stacon_g

0x4d53,	// (0x00033a62) cursor_press_pane

0xc1da,	// (0x0003aee9) popup_fep_hwr_window_ParamLimits

0xc1da,	// (0x0003aee9) popup_fep_hwr_window

0x1443,	// (0x00030152) popup_fep_vkb_window_ParamLimits

0x1443,	// (0x00030152) popup_fep_vkb_window

0x7bf0,	// (0x000368ff) cursor_press_pane_g1

0x0002,

0xfb1b,	// (0x0003e82a) fep_vkb_side_pane_g_ParamLimits

0x1d6f,	// (0x00030a7e) fep_hwr_candidate_pane_ParamLimits

0x1d6f,	// (0x00030a7e) fep_hwr_candidate_pane

0x1d99,	// (0x00030aa8) fep_hwr_side_pane_ParamLimits

0x1d99,	// (0x00030aa8) fep_hwr_side_pane

0x1db9,	// (0x00030ac8) fep_hwr_top_pane_ParamLimits

0x1db9,	// (0x00030ac8) fep_hwr_top_pane

0x1dd1,	// (0x00030ae0) fep_hwr_write_pane_ParamLimits

0x1dd1,	// (0x00030ae0) fep_hwr_write_pane

0xfb1b,	// (0x0003e82a) fep_vkb_side_pane_g

0x7bf8,	// (0x00036907) fep_hwr_top_pane_g1

0x7c0a,	// (0x00036919) fep_hwr_top_pane_g2

0x1e0b,	// (0x00030b1a) fep_hwr_top_pane_g3

0x0002,

0xfaf7,	// (0x0003e806) fep_hwr_top_pane_g

0x1e20,	// (0x00030b2f) fep_hwr_top_text_pane

0x4740,	// (0x0003344f) fep_hwr_top_text_pane_g1

0x7c40,	// (0x0003694f) fep_hwr_top_text_pane_t1

0x1f16,	// (0x00030c25) fep_hwr_candidate_pane_g1

0x7e93,	// (0x00036ba2) fep_vkb_keypad_pane_g3_ParamLimits

0x7e93,	// (0x00036ba2) fep_vkb_keypad_pane_g3

0x7ebb,	// (0x00036bca) fep_vkb_keypad_pane_g4_ParamLimits

0x7ebb,	// (0x00036bca) fep_vkb_keypad_pane_g4

0x7f2a,	// (0x00036c39) fep_vkb_bottom_pane_g2_ParamLimits

0x7f2a,	// (0x00036c39) fep_vkb_bottom_pane_g2

0x0001,

0xfb22,	// (0x0003e831) fep_vkb_bottom_pane_g_ParamLimits

0xfb22,	// (0x0003e831) fep_vkb_bottom_pane_g

0x7b9c,	// (0x000368ab) cell_vkb_side_pane_g2

0x0001,

0xfb2c,	// (0x0003e83b) cell_vkb_side_pane_g

0x7fb5,	// (0x00036cc4) cell_vkb_side_pane_t1

0x7fc3,	// (0x00036cd2) cell_vkb_side_pane_t1_copy1

0x7b9c,	// (0x000368ab) bg_fep_vkb_candidate_pane_g2

0x80ef,	// (0x00036dfe) cell_vkb_candidate_pane_ParamLimits

0x7c4e,	// (0x0003695d) aid_size_cell_vkb_ParamLimits

0x7c4e,	// (0x0003695d) aid_size_cell_vkb

0x80ef,	// (0x00036dfe) cell_vkb_candidate_pane

0x1f3d,	// (0x00030c4c) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0003cfc6) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0003cfc6) fep_vkb_bottom_pane

0x7d12,	// (0x00036a21) fep_vkb_candidate_pane_ParamLimits

0x7d12,	// (0x00036a21) fep_vkb_candidate_pane

0xe2dc,	// (0x0003cfeb) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0003cfeb) fep_vkb_keypad_pane

0xe318,	// (0x0003d027) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0003d027) fep_vkb_side_pane

0xe354,	// (0x0003d063) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0003d063) fep_vkb_top_pane

0x7dec,	// (0x00036afb) fep_vkb_top_pane_g1_ParamLimits

0x7dec,	// (0x00036afb) fep_vkb_top_pane_g1

0x7dfb,	// (0x00036b0a) fep_vkb_top_pane_g2_ParamLimits

0x7dfb,	// (0x00036b0a) fep_vkb_top_pane_g2

0x7e0a,	// (0x00036b19) fep_vkb_top_pane_g3_ParamLimits

0x7e0a,	// (0x00036b19) fep_vkb_top_pane_g3

0x0003,

0xfb12,	// (0x0003e821) fep_vkb_top_pane_g_ParamLimits

0xfb12,	// (0x0003e821) fep_vkb_top_pane_g

0x7e28,	// (0x00036b37) fep_vkb_top_text_pane_ParamLimits

0x7e28,	// (0x00036b37) fep_vkb_top_text_pane

0xe390,	// (0x0003d09f) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0003d09f) fep_vkb_side_pane_g1

0x7e82,	// (0x00036b91) grid_vkb_side_pane_ParamLimits

0x7e82,	// (0x00036b91) grid_vkb_side_pane

0x1f45,	// (0x00030c54) bg_popup_fep_shadow_pane_g2

0x1f4e,	// (0x00030c5d) bg_popup_fep_shadow_pane_g3

0x1f56,	// (0x00030c65) bg_popup_fep_shadow_pane_g4

0x1f5f,	// (0x00030c6e) bg_popup_fep_shadow_pane_g5

0x1f69,	// (0x00030c78) bg_popup_fep_shadow_pane_g6

0x1f71,	// (0x00030c80) bg_popup_fep_shadow_pane_g7

0x4130,	// (0x00032e3f) bg_popup_fep_shadow_pane_g8

0x7ed9,	// (0x00036be8) grid_vkb_keypad_number_pane_ParamLimits

0x7ed9,	// (0x00036be8) grid_vkb_keypad_number_pane

0x7ee9,	// (0x00036bf8) grid_vkb_keypad_pane_ParamLimits

0x7ee9,	// (0x00036bf8) grid_vkb_keypad_pane

0x7f0f,	// (0x00036c1e) fep_vkb_bottom_pane_g1_ParamLimits

0x7f0f,	// (0x00036c1e) fep_vkb_bottom_pane_g1

0x7f38,	// (0x00036c47) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7f38,	// (0x00036c47) grid_vkb_keypad_bottom_left_pane

0x7f4d,	// (0x00036c5c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7f4d,	// (0x00036c5c) grid_vkb_keypad_bottom_right_pane

0x7f62,	// (0x00036c71) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0003d0e6) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0003d0f8) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0003d0f8) cell_vkb_side_pane

0x7b9c,	// (0x000368ab) cell_vkb_side_pane_g1

0x7fd1,	// (0x00036ce0) cell_vkb_keypad_pane_ParamLimits

0x7fd1,	// (0x00036ce0) cell_vkb_keypad_pane

0x8046,	// (0x00036d55) cell_vkb_keypad_pane_g1

0x0008,

0xfb3f,	// (0x0003e84e) bg_popup_fep_shadow_pane_g

0x1f83,	// (0x00030c92) cell_hwr_side_pane_g1

0x1f83,	// (0x00030c92) cell_hwr_side_pane_g2

0x8050,	// (0x00036d5f) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0003d10e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0003d10e) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0003d123) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0003d123) cell_vkb_keypad_bottom_right_pane

0x7b9c,	// (0x000368ab) cell_vkb_keypad_bottom_left_pane_g1

0x7b9c,	// (0x000368ab) cell_vkb_keypad_bottom_right_pane_g1

0x80b4,	// (0x00036dc3) cell_vkb_keypad_number_pane_ParamLimits

0x80b4,	// (0x00036dc3) cell_vkb_keypad_number_pane

0x80d3,	// (0x00036de2) cell_vkb_keypad_number_pane_g1

0x80dd,	// (0x00036dec) cell_vkb_keypad_number_pane_g2

0x80e6,	// (0x00036df5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb31,	// (0x0003e840) cell_vkb_keypad_number_pane_g

0x8050,	// (0x00036d5f) cell_vkb_keypad_number_pane_t1

0x810a,	// (0x00036e19) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0003e861) cell_hwr_side_pane_g

0x8123,	// (0x00036e32) cell_hwr_side_pane_t1

0x1f8d,	// (0x00030c9c) cell_hwr_side_pane_t1_copy1

0x1f9b,	// (0x00030caa) cell_hwr_candidate_pane_g1

0x1fca,	// (0x00030cd9) cell_hwr_candidate_pane_t1

0x7b9c,	// (0x000368ab) cell_vkb_candidate_pane_g2

0x8167,	// (0x00036e76) cell_vkb_candidate_pane_t1

0x1d36,	// (0x00030a45) bg_popup_fep_shadow_pane_ParamLimits

0x1d36,	// (0x00030a45) bg_popup_fep_shadow_pane

0x1deb,	// (0x00030afa) bg_fep_hwr_top_pane_g4

0x7c1c,	// (0x0003692b) bg_hwr_side_pane_g1_ParamLimits

0x7c1c,	// (0x0003692b) bg_hwr_side_pane_g1

0xc916,	// (0x0003b625) cell_hwr_side_pane_ParamLimits

0xc916,	// (0x0003b625) cell_hwr_side_pane

0x1e97,	// (0x00030ba6) fep_hwr_write_pane_g1_ParamLimits

0x1e97,	// (0x00030ba6) fep_hwr_write_pane_g1

0x1ea4,	// (0x00030bb3) fep_hwr_write_pane_g2_ParamLimits

0x1ea4,	// (0x00030bb3) fep_hwr_write_pane_g2

0x1eb1,	// (0x00030bc0) fep_hwr_write_pane_g3_ParamLimits

0x1eb1,	// (0x00030bc0) fep_hwr_write_pane_g3

0xc936,	// (0x0003b645) fep_hwr_write_pane_g4_ParamLimits

0xc936,	// (0x0003b645) fep_hwr_write_pane_g4

0x0005,

0xfafe,	// (0x0003e80d) fep_hwr_write_pane_g_ParamLimits

0xfafe,	// (0x0003e80d) fep_hwr_write_pane_g

0x1deb,	// (0x00030afa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1deb,	// (0x00030afa) bg_fep_hwr_candidate_pane_g2

0x1ed4,	// (0x00030be3) cell_hwr_candidate_pane_ParamLimits

0x1ed4,	// (0x00030be3) cell_hwr_candidate_pane

0x1f16,	// (0x00030c25) fep_hwr_candidate_pane_g1_ParamLimits

0x7c7c,	// (0x0003698b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7c7c,	// (0x0003698b) bg_popup_fep_shadow_pane_cp2

0x7e1a,	// (0x00036b29) fep_vkb_top_pane_g4_ParamLimits

0x7e1a,	// (0x00036b29) fep_vkb_top_pane_g4

0x7e60,	// (0x00036b6f) fep_vkb_side_pane_g2_ParamLimits

0x7e60,	// (0x00036b6f) fep_vkb_side_pane_g2

0xbcc8,	// (0x0003a9d7) list_setting_pane_t4_ParamLimits

0xbcc8,	// (0x0003a9d7) list_setting_pane_t4

0xbd62,	// (0x0003aa71) list_setting_number_pane_t5_ParamLimits

0xbd62,	// (0x0003aa71) list_setting_number_pane_t5

0x4777,	// (0x00033486) list_double_heading_pane_cp2_ParamLimits

0x4777,	// (0x00033486) list_double_heading_pane_cp2

0x40ce,	// (0x00032ddd) list_double_heading_pane_g1_cp2_ParamLimits

0x40ce,	// (0x00032ddd) list_double_heading_pane_g1_cp2

0x40da,	// (0x00032de9) list_double_heading_pane_g2_cp2_ParamLimits

0x40da,	// (0x00032de9) list_double_heading_pane_g2_cp2

0x8175,	// (0x00036e84) list_double_heading_pane_t1_cp2_ParamLimits

0x8175,	// (0x00036e84) list_double_heading_pane_t1_cp2

0x818b,	// (0x00036e9a) list_double_heading_pane_t2_cp2_ParamLimits

0x818b,	// (0x00036e9a) list_double_heading_pane_t2_cp2

0x3745,	// (0x00032454) aid_value_unit2

0x047d,	// (0x0002f18c) popup_preview_fixed_window

0x3ada,	// (0x000327e9) bg_popup_preview_window_pane_cp02

0x819d,	// (0x00036eac) list_preview_fixed_pane

0x81e3,	// (0x00036ef2) list_empty_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_empty_pane_fp

0x81e3,	// (0x00036ef2) list_single_cale_day_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_cale_day_pane_fp

0x81e3,	// (0x00036ef2) list_single_graphic_heading_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_graphic_heading_pane_fp

0x81e3,	// (0x00036ef2) list_single_graphic_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_graphic_pane_fp

0x81e3,	// (0x00036ef2) list_single_heading_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_heading_pane_fp

0x81e3,	// (0x00036ef2) list_single_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_pane_fp

0x81f8,	// (0x00036f07) list_single_pane_fp_g1_ParamLimits

0x81f8,	// (0x00036f07) list_single_pane_fp_g1

0x33a6,	// (0x000320b5) list_single_pane_fp_g2_ParamLimits

0x33a6,	// (0x000320b5) list_single_pane_fp_g2

0x33b2,	// (0x000320c1) list_single_pane_fp_g3_ParamLimits

0x33b2,	// (0x000320c1) list_single_pane_fp_g3

0x8204,	// (0x00036f13) list_single_pane_fp_g4_ParamLimits

0x8204,	// (0x00036f13) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0003e874) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0003e874) list_single_pane_fp_g

0x33c6,	// (0x000320d5) list_single_pane_fp_t1_ParamLimits

0x33c6,	// (0x000320d5) list_single_pane_fp_t1

0x33dd,	// (0x000320ec) list_single_graphic_pane_fp_g1_ParamLimits

0x33dd,	// (0x000320ec) list_single_graphic_pane_fp_g1

0x81f8,	// (0x00036f07) list_single_graphic_pane_fp_g2_ParamLimits

0x81f8,	// (0x00036f07) list_single_graphic_pane_fp_g2

0x33a6,	// (0x000320b5) list_single_graphic_pane_fp_g3_ParamLimits

0x33a6,	// (0x000320b5) list_single_graphic_pane_fp_g3

0x33b2,	// (0x000320c1) list_single_graphic_pane_fp_g4_ParamLimits

0x33b2,	// (0x000320c1) list_single_graphic_pane_fp_g4

0x8204,	// (0x00036f13) list_single_graphic_pane_fp_g5_ParamLimits

0x8204,	// (0x00036f13) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e87d) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e87d) list_single_graphic_pane_fp_g

0x33e9,	// (0x000320f8) list_single_graphic_pane_fp_t1_ParamLimits

0x33e9,	// (0x000320f8) list_single_graphic_pane_fp_t1

0x33dd,	// (0x000320ec) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x33dd,	// (0x000320ec) list_single_graphic_heading_pane_fp_g1

0x81f8,	// (0x00036f07) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x81f8,	// (0x00036f07) list_single_graphic_heading_pane_fp_g2

0x33a6,	// (0x000320b5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x33a6,	// (0x000320b5) list_single_graphic_heading_pane_fp_g3

0x33b2,	// (0x000320c1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x33b2,	// (0x000320c1) list_single_graphic_heading_pane_fp_g4

0x8204,	// (0x00036f13) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8204,	// (0x00036f13) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e87d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e87d) list_single_graphic_heading_pane_fp_g

0x33ff,	// (0x0003210e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x33ff,	// (0x0003210e) list_single_graphic_heading_pane_fp_t1

0x3415,	// (0x00032124) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3415,	// (0x00032124) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0003e888) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0003e888) list_single_graphic_heading_pane_fp_t

0x3427,	// (0x00032136) list_single_cale_day_pane_fp_g1_ParamLimits

0x3427,	// (0x00032136) list_single_cale_day_pane_fp_g1

0x8210,	// (0x00036f1f) list_single_cale_day_pane_fp_g2_ParamLimits

0x8210,	// (0x00036f1f) list_single_cale_day_pane_fp_g2

0x345f,	// (0x0003216e) list_single_cale_day_pane_fp_g3_ParamLimits

0x345f,	// (0x0003216e) list_single_cale_day_pane_fp_g3

0x3487,	// (0x00032196) list_single_cale_day_pane_fp_g4_ParamLimits

0x3487,	// (0x00032196) list_single_cale_day_pane_fp_g4

0x34ab,	// (0x000321ba) list_single_cale_day_pane_fp_g5_ParamLimits

0x34ab,	// (0x000321ba) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003e88d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003e88d) list_single_cale_day_pane_fp_g

0x34cf,	// (0x000321de) list_single_cale_day_pane_fp_t1_ParamLimits

0x34cf,	// (0x000321de) list_single_cale_day_pane_fp_t1

0x34f5,	// (0x00032204) list_single_cale_day_pane_fp_t2_ParamLimits

0x34f5,	// (0x00032204) list_single_cale_day_pane_fp_t2

0x350e,	// (0x0003221d) list_single_cale_day_pane_fp_t3_ParamLimits

0x350e,	// (0x0003221d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0003e898) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0003e898) list_single_cale_day_pane_fp_t

0x81f8,	// (0x00036f07) list_empty_pane_fp_g1_ParamLimits

0x81f8,	// (0x00036f07) list_empty_pane_fp_g1

0x3527,	// (0x00032236) list_empty_pane_fp_t1

0x3535,	// (0x00032244) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0003e89f) list_empty_pane_fp_t

0x81f8,	// (0x00036f07) list_single_heading_pane_fp_g1_ParamLimits

0x81f8,	// (0x00036f07) list_single_heading_pane_fp_g1

0x33a6,	// (0x000320b5) list_single_heading_pane_fp_g2_ParamLimits

0x33a6,	// (0x000320b5) list_single_heading_pane_fp_g2

0x33b2,	// (0x000320c1) list_single_heading_pane_fp_g3_ParamLimits

0x33b2,	// (0x000320c1) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0003e8a4) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003e8a4) list_single_heading_pane_fp_g

0x3543,	// (0x00032252) list_single_heading_pane_fp_t1_ParamLimits

0x3543,	// (0x00032252) list_single_heading_pane_fp_t1

0x3555,	// (0x00032264) list_single_heading_pane_fp_t2_ParamLimits

0x3555,	// (0x00032264) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003e8ab) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0003e8ab) list_single_heading_pane_fp_t

0x42bf,	// (0x00032fce) aid_size_cell_fast

0x3a4a,	// (0x00032759) soft_indicator_pane_cp1_t1

0x42fc,	// (0x0003300b) cell_app_pane_cp2_ParamLimits

0x42fc,	// (0x0003300b) cell_app_pane_cp2

0x1d58,	// (0x00030a67) fep_hwr_candidate_drop_down_list_pane

0x1f30,	// (0x00030c3f) fep_hwr_candidate_pane_g3_ParamLimits

0x1f30,	// (0x00030c3f) fep_hwr_candidate_pane_g3

0xea0d,	// (0x0003d71c) fep_hwr_candidate_pane_g4_ParamLimits

0xea0d,	// (0x0003d71c) fep_hwr_candidate_pane_g4

0x0002,

0xfb0b,	// (0x0003e81a) fep_hwr_candidate_pane_g_ParamLimits

0xfb0b,	// (0x0003e81a) fep_hwr_candidate_pane_g

0x7d01,	// (0x00036a10) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7d01,	// (0x00036a10) fep_vkb_candidate_drop_down_list_pane

0x8112,	// (0x00036e21) fep_vkb_candidate_pane_g3

0x811a,	// (0x00036e29) fep_vkb_candidate_pane_g4

0x0002,

0xfb38,	// (0x0003e847) fep_vkb_candidate_pane_g

0x1f9b,	// (0x00030caa) cell_hwr_candidate_pane_g1_ParamLimits

0x1fa9,	// (0x00030cb8) cell_hwr_candidate_pane_g3_ParamLimits

0x1fa9,	// (0x00030cb8) cell_hwr_candidate_pane_g3

0x9a50,	// (0x0003875f) cell_hwr_candidate_pane_g4_ParamLimits

0x9a50,	// (0x0003875f) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0003e866) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0003e866) cell_hwr_candidate_pane_g

0x8131,	// (0x00036e40) cell_vkb_candidate_pane_g3_ParamLimits

0x8131,	// (0x00036e40) cell_vkb_candidate_pane_g3

0x814c,	// (0x00036e5b) cell_vkb_candidate_pane_g4_ParamLimits

0x814c,	// (0x00036e5b) cell_vkb_candidate_pane_g4

0x821c,	// (0x00036f2b) cell_app_pane_cp2_g1_ParamLimits

0x821c,	// (0x00036f2b) cell_app_pane_cp2_g1

0x823a,	// (0x00036f49) cell_app_pane_cp2_g2_ParamLimits

0x823a,	// (0x00036f49) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0003e8b0) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0003e8b0) cell_app_pane_cp2_g

0x8246,	// (0x00036f55) cell_app_pane_cp2_t1_ParamLimits

0x8246,	// (0x00036f55) cell_app_pane_cp2_t1

0x40c0,	// (0x00032dcf) grid_highlight_pane_cp1_ParamLimits

0x40c0,	// (0x00032dcf) grid_highlight_pane_cp1

0x1fe8,	// (0x00030cf7) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fe8,	// (0x00030cf7) cell_hwr_candidate_pane_cp1

0x1f9b,	// (0x00030caa) fep_hwr_candidate_drop_down_list_pane_g1

0x2007,	// (0x00030d16) fep_hwr_candidate_drop_down_list_pane_g2

0x2014,	// (0x00030d23) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0003e8b5) fep_hwr_candidate_drop_down_list_pane_g

0x2021,	// (0x00030d30) fep_hwr_candidate_drop_down_list_scroll_pane

0x202a,	// (0x00030d39) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x202a,	// (0x00030d39) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2037,	// (0x00030d46) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2037,	// (0x00030d46) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2044,	// (0x00030d53) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2044,	// (0x00030d53) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2051,	// (0x00030d60) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2051,	// (0x00030d60) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x206c,	// (0x00030d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x206c,	// (0x00030d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2087,	// (0x00030d96) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2087,	// (0x00030d96) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x20a2,	// (0x00030db1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x20a2,	// (0x00030db1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x20bd,	// (0x00030dcc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x20bd,	// (0x00030dcc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0003e8bc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0003e8bc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8258,	// (0x00036f67) cell_vkb_candidate_pane_cp1_ParamLimits

0x8258,	// (0x00036f67) cell_vkb_candidate_pane_cp1

0x7e1a,	// (0x00036b29) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7e1a,	// (0x00036b29) fep_vkb_candidate_drop_down_list_pane_g1

0x8278,	// (0x00036f87) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8278,	// (0x00036f87) fep_vkb_candidate_drop_down_list_pane_g2

0x8285,	// (0x00036f94) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8285,	// (0x00036f94) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x0003e8cd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x0003e8cd) fep_vkb_candidate_drop_down_list_pane_g

0x8292,	// (0x00036fa1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8292,	// (0x00036fa1) fep_vkb_candidate_drop_down_list_scroll_pane

0x829f,	// (0x00036fae) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x829f,	// (0x00036fae) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x82ac,	// (0x00036fbb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x82ac,	// (0x00036fbb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x82b8,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x82b8,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x82c4,	// (0x00036fd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x82c4,	// (0x00036fd3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x82e5,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x82e5,	// (0x00036ff4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8306,	// (0x00037015) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8306,	// (0x00037015) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8327,	// (0x00037036) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8327,	// (0x00037036) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8348,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8348,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x0003e8d4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x0003e8d4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0ed,	// (0x0003bdfc) title_pane_g1_ParamLimits

0xd100,	// (0x0003be0f) title_pane_g2_ParamLimits

0xf54e,	// (0x0003e25d) title_pane_g_ParamLimits

0x4730,	// (0x0003343f) aid_call2_pane

0x4738,	// (0x00033447) aid_call_pane

0x4740,	// (0x0003344f) popup_clock_analogue_window_g1

0x4740,	// (0x0003344f) popup_clock_analogue_window_g2

0x0eca,	// (0x0002fbd9) popup_clock_analogue_window_g3

0x0ed3,	// (0x0002fbe2) popup_clock_analogue_window_g4

0x3767,	// (0x00032476) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003e407) popup_clock_analogue_window_g

0x0edb,	// (0x0002fbea) popup_clock_analogue_window_t1

0x0ee9,	// (0x0002fbf8) clock_digital_number_pane_ParamLimits

0x0ee9,	// (0x0002fbf8) clock_digital_number_pane

0x0ef5,	// (0x0002fc04) clock_digital_number_pane_cp02_ParamLimits

0x0ef5,	// (0x0002fc04) clock_digital_number_pane_cp02

0x0f01,	// (0x0002fc10) clock_digital_number_pane_cp03_ParamLimits

0x0f01,	// (0x0002fc10) clock_digital_number_pane_cp03

0x0f0d,	// (0x0002fc1c) clock_digital_number_pane_cp04_ParamLimits

0x0f0d,	// (0x0002fc1c) clock_digital_number_pane_cp04

0x0f19,	// (0x0002fc28) clock_digital_separator_pane_ParamLimits

0x0f19,	// (0x0002fc28) clock_digital_separator_pane

0x0f25,	// (0x0002fc34) popup_clock_digital_window_t1_ParamLimits

0x0f25,	// (0x0002fc34) popup_clock_digital_window_t1

0x3767,	// (0x00032476) clock_digital_number_pane_g1

0x3767,	// (0x00032476) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003e412) clock_digital_number_pane_g

0x3767,	// (0x00032476) clock_digital_separator_pane_g1

0x3767,	// (0x00032476) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003e412) clock_digital_separator_pane_g

0xd794,	// (0x0003c4a3) aid_fill_nsta_ParamLimits

0xd8ca,	// (0x0003c5d9) indicator_nsta_pane_ParamLimits

0x537e,	// (0x0003408d) popup_clock_analogue_window

0x537e,	// (0x0003408d) popup_clock_digital_window

0x4280,	// (0x00032f8f) grid_indicator_nsta_pane_ParamLimits

0x75c4,	// (0x000362d3) clock_nsta_pane_t2

0x0001,

0xfa8b,	// (0x0003e79a) clock_nsta_pane_t

0x0e8e,	// (0x0002fb9d) aid_size_max_handle

0xbf01,	// (0x0003ac10) aid_size_min_handle

0x4d53,	// (0x00033a62) editor_scroll_pane

0x8363,	// (0x00037072) ex_editor_pane

0x422d,	// (0x00032f3c) scroll_pane_cp13

0x405f,	// (0x00032d6e) scroll_pane_cp14

0x476f,	// (0x0003347e) scroll_pane_cp36

0xd577,	// (0x0003c286) list_single_graphic_hl_pane_cp2_ParamLimits

0xd577,	// (0x0003c286) list_single_graphic_hl_pane_cp2

0xc8a4,	// (0x0003b5b3) list_single_graphic_hl_pane_ParamLimits

0xc8a4,	// (0x0003b5b3) list_single_graphic_hl_pane

0x356b,	// (0x0003227a) aid_size_min_hl_cp1

0x836b,	// (0x0003707a) list_highlight_pane_cp34_ParamLimits

0x836b,	// (0x0003707a) list_highlight_pane_cp34

0x837c,	// (0x0003708b) list_single_graphic_hl_pane_g1_ParamLimits

0x837c,	// (0x0003708b) list_single_graphic_hl_pane_g1

0xc94b,	// (0x0003b65a) list_single_graphic_hl_pane_g2_ParamLimits

0xc94b,	// (0x0003b65a) list_single_graphic_hl_pane_g2

0xc94b,	// (0x0003b65a) list_single_graphic_hl_pane_g3_ParamLimits

0xc94b,	// (0x0003b65a) list_single_graphic_hl_pane_g3

0xc957,	// (0x0003b666) list_single_graphic_hl_pane_g4_ParamLimits

0xc957,	// (0x0003b666) list_single_graphic_hl_pane_g4

0xc963,	// (0x0003b672) list_single_graphic_hl_pane_g5_ParamLimits

0xc963,	// (0x0003b672) list_single_graphic_hl_pane_g5

0x0004,

0xfbd6,	// (0x0003e8e5) list_single_graphic_hl_pane_g_ParamLimits

0xfbd6,	// (0x0003e8e5) list_single_graphic_hl_pane_g

0xc977,	// (0x0003b686) list_single_graphic_hl_pane_t1_ParamLimits

0xc977,	// (0x0003b686) list_single_graphic_hl_pane_t1

0x8389,	// (0x00037098) aid_size_min_hl_cp2

0x8392,	// (0x000370a1) list_highlight_pane_cp34_cp2_ParamLimits

0x8392,	// (0x000370a1) list_highlight_pane_cp34_cp2

0x837c,	// (0x0003708b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x837c,	// (0x0003708b) list_single_graphic_hl_pane_g1_cp2

0x839f,	// (0x000370ae) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x839f,	// (0x000370ae) list_single_graphic_hl_pane_g2_cp2

0x83ab,	// (0x000370ba) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x83ab,	// (0x000370ba) list_single_graphic_hl_pane_g3_cp2

0x7444,	// (0x00036153) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7444,	// (0x00036153) list_single_graphic_hl_pane_g4_cp2

0x83b9,	// (0x000370c8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x83b9,	// (0x000370c8) list_single_graphic_hl_pane_g5_cp2

0xbfe8,	// (0x0003acf7) control_pane_g4_ParamLimits

0xbfe8,	// (0x0003acf7) control_pane_g4

0x509d,	// (0x00033dac) bg_popup_sub_pane_cp10_ParamLimits

0x7ba6,	// (0x000368b5) list_choice_list_pane_ParamLimits

0x7bb5,	// (0x000368c4) scroll_pane_cp23

0x3ada,	// (0x000327e9) bg_popup_preview_window_pane_cp02_ParamLimits

0x819d,	// (0x00036eac) list_preview_fixed_pane_ParamLimits

0x81b3,	// (0x00036ec2) list_preview_fixed_pane_cp_ParamLimits

0x81b3,	// (0x00036ec2) list_preview_fixed_pane_cp

0x81bf,	// (0x00036ece) popup_preview_fixed_window_g1_ParamLimits

0x81bf,	// (0x00036ece) popup_preview_fixed_window_g1

0x81cb,	// (0x00036eda) popup_preview_fixed_window_g2_ParamLimits

0x81cb,	// (0x00036eda) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0003e86d) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0003e86d) popup_preview_fixed_window_g

0x0e02,	// (0x0002fb11) aid_navi_side_left_pane_ParamLimits

0x0e17,	// (0x0002fb26) aid_navi_side_right_pane_ParamLimits

0x0e2f,	// (0x0002fb3e) navi_icon_pane_stacon_ParamLimits

0x0e43,	// (0x0002fb52) navi_navi_pane_stacon_ParamLimits

0x0e2f,	// (0x0002fb3e) navi_text_pane_stacon_ParamLimits

0x033e,	// (0x0002f04d) main_text_info_pane

0x83e3,	// (0x000370f2) listscroll_text_info_pane

0x83eb,	// (0x000370fa) list_text_info_pane_ParamLimits

0x83eb,	// (0x000370fa) list_text_info_pane

0x83fa,	// (0x00037109) scroll_pane_cp24_ParamLimits

0x83fa,	// (0x00037109) scroll_pane_cp24

0xe42f,	// (0x0003d13e) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0003d13e) list_text_info_pane_t1

0xc14d,	// (0x0003ae5c) popup_fast_swap2_window_ParamLimits

0xc14d,	// (0x0003ae5c) popup_fast_swap2_window

0x8449,	// (0x00037158) aid_size_cell_fast2

0x375d,	// (0x0003246c) bg_popup_window_pane_cp17

0x5a01,	// (0x00034710) heading_pane_cp2

0x3d29,	// (0x00032a38) listscroll_fast2_pane

0x8453,	// (0x00037162) grid_fast2_pane

0x845d,	// (0x0003716c) listscroll_fast2_pane_g1

0x8465,	// (0x00037174) listscroll_fast2_pane_g2

0x0001,

0xfbe1,	// (0x0003e8f0) listscroll_fast2_pane_g

0x422d,	// (0x00032f3c) scroll_pane_cp26

0x846f,	// (0x0003717e) cell_fast2_pane_ParamLimits

0x846f,	// (0x0003717e) cell_fast2_pane

0x8484,	// (0x00037193) cell_fast2_pane_g1

0x848d,	// (0x0003719c) cell_fast2_pane_g2

0x8496,	// (0x000371a5) cell_fast2_pane_g3

0x0002,

0xfbe6,	// (0x0003e8f5) cell_fast2_pane_g

0x3e1c,	// (0x00032b2b) grid_highlight_pane_cp9

0x1301,	// (0x00030010) main_eswt_pane_ParamLimits

0x1301,	// (0x00030010) main_eswt_pane

0x840f,	// (0x0003711e) list_single_text_info_pane

0x849e,	// (0x000371ad) eswt_ctrl_button_pane

0x849e,	// (0x000371ad) eswt_ctrl_canvas_pane

0x84a6,	// (0x000371b5) eswt_ctrl_combo_pane

0x849e,	// (0x000371ad) eswt_ctrl_default_pane

0x849e,	// (0x000371ad) eswt_ctrl_label_pane

0x84ae,	// (0x000371bd) eswt_ctrl_wait_pane

0x84b6,	// (0x000371c5) eswt_shell_pane

0x375d,	// (0x0003246c) listscroll_eswt_app_pane

0x84d6,	// (0x000371e5) popup_eswt_tasktip_window_ParamLimits

0x84d6,	// (0x000371e5) popup_eswt_tasktip_window

0x561b,	// (0x0003432a) bg_popup_window_pane_cp18

0x84e7,	// (0x000371f6) eswt_control_pane_g1_ParamLimits

0x84e7,	// (0x000371f6) eswt_control_pane_g1

0x84f4,	// (0x00037203) eswt_control_pane_g2_ParamLimits

0x84f4,	// (0x00037203) eswt_control_pane_g2

0x8501,	// (0x00037210) eswt_control_pane_g3_ParamLimits

0x8501,	// (0x00037210) eswt_control_pane_g3

0x850e,	// (0x0003721d) eswt_control_pane_g4_ParamLimits

0x850e,	// (0x0003721d) eswt_control_pane_g4

0x0003,

0xfbed,	// (0x0003e8fc) eswt_control_pane_g_ParamLimits

0xfbed,	// (0x0003e8fc) eswt_control_pane_g

0x40c0,	// (0x00032dcf) bg_button_pane_ParamLimits

0x40c0,	// (0x00032dcf) bg_button_pane

0x3e31,	// (0x00032b40) common_borders_pane_copy2_ParamLimits

0x3e31,	// (0x00032b40) common_borders_pane_copy2

0x851b,	// (0x0003722a) control_button_pane_g1_ParamLimits

0x851b,	// (0x0003722a) control_button_pane_g1

0x8527,	// (0x00037236) control_button_pane_g2_ParamLimits

0x8527,	// (0x00037236) control_button_pane_g2

0x8533,	// (0x00037242) control_button_pane_g3_ParamLimits

0x8533,	// (0x00037242) control_button_pane_g3

0x0002,

0xfbf6,	// (0x0003e905) control_button_pane_g_ParamLimits

0xfbf6,	// (0x0003e905) control_button_pane_g

0x8547,	// (0x00037256) control_button_pane_t1

0x8555,	// (0x00037264) control_button_pane_t2

0x0001,

0xfbfd,	// (0x0003e90c) control_button_pane_t

0x55a7,	// (0x000342b6) bg_button_pane_g1

0x55af,	// (0x000342be) bg_button_pane_g2

0x55b7,	// (0x000342c6) bg_button_pane_g3

0x55c7,	// (0x000342d6) bg_button_pane_g4

0x55bf,	// (0x000342ce) bg_button_pane_g5

0x55cf,	// (0x000342de) bg_button_pane_g6

0x55d7,	// (0x000342e6) bg_button_pane_g7

0x55e7,	// (0x000342f6) bg_button_pane_g8

0x55df,	// (0x000342ee) bg_button_pane_g9

0x0008,

0xf861,	// (0x0003e570) bg_button_pane_g

0x7b61,	// (0x00036870) common_borders_pane_ParamLimits

0x7b61,	// (0x00036870) common_borders_pane

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy1_ParamLimits

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy1

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy1_ParamLimits

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy1

0x8501,	// (0x00037210) eswt_control_pane_g3_copy1_ParamLimits

0x8501,	// (0x00037210) eswt_control_pane_g3_copy1

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy1_ParamLimits

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy1

0x7b9c,	// (0x000368ab) bg_eswt_ctrl_canvas_pane_g1

0x7b61,	// (0x00036870) common_borders_pane_cp2_ParamLimits

0x7b61,	// (0x00036870) common_borders_pane_cp2

0x7b61,	// (0x00036870) common_borders_pane_cp3_ParamLimits

0x7b61,	// (0x00036870) common_borders_pane_cp3

0x8563,	// (0x00037272) separator_horizontal_pane

0x856b,	// (0x0003727a) separator_vertical_pane

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy2_ParamLimits

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy2

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy2_ParamLimits

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy2

0x8501,	// (0x00037210) eswt_control_pane_g3_copy2_ParamLimits

0x8501,	// (0x00037210) eswt_control_pane_g3_copy2

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy2_ParamLimits

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy2

0x375d,	// (0x0003246c) common_borders_pane_cp4

0x8574,	// (0x00037283) separator_horizontal_pane_g1

0x857d,	// (0x0003728c) separator_horizontal_pane_g2

0x8586,	// (0x00037295) separator_horizontal_pane_g3

0x0002,

0xfc02,	// (0x0003e911) separator_horizontal_pane_g

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy3_ParamLimits

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy3

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy3_ParamLimits

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy3

0x8501,	// (0x00037210) eswt_control_pane_g3_copy3_ParamLimits

0x8501,	// (0x00037210) eswt_control_pane_g3_copy3

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy3_ParamLimits

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy3

0x375d,	// (0x0003246c) common_borders_pane_cp5

0x858f,	// (0x0003729e) separator_vertical_pane_g1

0x8598,	// (0x000372a7) separator_vertical_pane_g2

0x85a1,	// (0x000372b0) separator_vertical_pane_g3

0x0002,

0xfc09,	// (0x0003e918) separator_vertical_pane_g

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy4_ParamLimits

0x84e7,	// (0x000371f6) eswt_control_pane_g1_copy4

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy4_ParamLimits

0x84f4,	// (0x00037203) eswt_control_pane_g2_copy4

0x8501,	// (0x00037210) eswt_control_pane_g3_copy4_ParamLimits

0x8501,	// (0x00037210) eswt_control_pane_g3_copy4

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy4_ParamLimits

0x850e,	// (0x0003721d) eswt_control_pane_g4_copy4

0xe44a,	// (0x0003d159) eswt_ctrl_combo_button_pane

0xe452,	// (0x0003d161) eswt_ctrl_input_pane

0xe45a,	// (0x0003d169) popup_choice_list_window_cp70

0xe462,	// (0x0003d171) eswt_ctrl_input_pane_t1

0x375d,	// (0x0003246c) input_focus_pane_cp70

0x7b61,	// (0x00036870) bg_button_pane_cp70_ParamLimits

0x7b61,	// (0x00036870) bg_button_pane_cp70

0xe470,	// (0x0003d17f) eswt_ctrl_combo_button_pane_g1

0x85d8,	// (0x000372e7) wait_bar_pane_cp70

0x561b,	// (0x0003432a) bg_popup_window_pane_cp70_ParamLimits

0x561b,	// (0x0003432a) bg_popup_window_pane_cp70

0x85e0,	// (0x000372ef) popup_eswt_tasktip_window_t1

0x85f6,	// (0x00037305) wait_bar_pane_cp71_ParamLimits

0x85f6,	// (0x00037305) wait_bar_pane_cp71

0x8602,	// (0x00037311) grid_eswt_app_pane

0x4549,	// (0x00033258) scroll_pane_cp70

0xe478,	// (0x0003d187) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0003d187) cell_eswt_app_pane

0xe4a2,	// (0x0003d1b1) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0003d1b1) cell_eswt_app_pane_g1

0xe4d1,	// (0x0003d1e0) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0003d1e0) cell_eswt_app_pane_g2

0x0001,

0xfc10,	// (0x0003e91f) cell_eswt_app_pane_g_ParamLimits

0xfc10,	// (0x0003e91f) cell_eswt_app_pane_g

0xe4fa,	// (0x0003d209) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0003d209) cell_eswt_app_pane_t1

0x86c5,	// (0x000373d4) grid_highlight_pane_cp70_ParamLimits

0x86c5,	// (0x000373d4) grid_highlight_pane_cp70

0x4c28,	// (0x00033937) set_content_pane_g1

0xd749,	// (0x0003c458) status_small_volume_pane

0x20d8,	// (0x00030de7) status_small_volume_pane_g1

0x20e0,	// (0x00030def) volume_small2_pane

0x20e9,	// (0x00030df8) volume_small2_pane_g1

0x20f2,	// (0x00030e01) volume_small2_pane_g2

0x20fb,	// (0x00030e0a) volume_small2_pane_g3

0x2104,	// (0x00030e13) volume_small2_pane_g4

0x210d,	// (0x00030e1c) volume_small2_pane_g5

0x2116,	// (0x00030e25) volume_small2_pane_g6

0x211f,	// (0x00030e2e) volume_small2_pane_g7

0x2128,	// (0x00030e37) volume_small2_pane_g8

0x2131,	// (0x00030e40) volume_small2_pane_g9

0x213a,	// (0x00030e49) volume_small2_pane_g10

0x0009,

0xfc15,	// (0x0003e924) volume_small2_pane_g

0x7f62,	// (0x00036c71) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0003d0e6) fep_vkb_top_text_pane_t1_ParamLimits

0x81d7,	// (0x00036ee6) popup_preview_fixed_window_g3_ParamLimits

0x81d7,	// (0x00036ee6) popup_preview_fixed_window_g3

0xc770,	// (0x0003b47f) popup_toolbar_trans_pane

0xddc6,	// (0x0003cad5) aid_height_set_list_ParamLimits

0x6982,	// (0x00035691) aid_size_parent_ParamLimits

0x509d,	// (0x00033dac) list_highlight_pane_cp2_ParamLimits

0x4c28,	// (0x00033937) set_content_pane_g1_ParamLimits

0xc8b6,	// (0x0003b5c5) list_single_image_pane_ParamLimits

0xc8b6,	// (0x0003b5c5) list_single_image_pane

0xe52c,	// (0x0003d23b) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0003d23b) aid_size_cell_image

0xe539,	// (0x0003d248) grid_single_image_pane_ParamLimits

0xe539,	// (0x0003d248) grid_single_image_pane

0x5d45,	// (0x00034a54) list_single_image_pane_g1_ParamLimits

0x5d45,	// (0x00034a54) list_single_image_pane_g1

0x86ea,	// (0x000373f9) list_single_image_pane_g2_ParamLimits

0x86ea,	// (0x000373f9) list_single_image_pane_g2

0x0001,

0xfc2a,	// (0x0003e939) list_single_image_pane_g_ParamLimits

0xfc2a,	// (0x0003e939) list_single_image_pane_g

0x86fe,	// (0x0003740d) list_single_image_pane_t1_ParamLimits

0x86fe,	// (0x0003740d) list_single_image_pane_t1

0xe547,	// (0x0003d256) cell_image_list_pane_ParamLimits

0xe547,	// (0x0003d256) cell_image_list_pane

0xe55d,	// (0x0003d26c) cell_image_list_pane_g1

0xe566,	// (0x0003d275) cell_image_list_pane_g2

0x0001,

0xfc2f,	// (0x0003e93e) cell_image_list_pane_g

0x873a,	// (0x00037449) aid_size_cell_tb_trans_pane

0x40c0,	// (0x00032dcf) bg_tb_trans_pane

0x874c,	// (0x0003745b) grid_tb_trans_pane

0x55a7,	// (0x000342b6) bg_tb_trans_pane_g1

0x55af,	// (0x000342be) bg_tb_trans_pane_g2

0x55b7,	// (0x000342c6) bg_tb_trans_pane_g3

0x55c7,	// (0x000342d6) bg_tb_trans_pane_g4

0x55bf,	// (0x000342ce) bg_tb_trans_pane_g5

0x55e7,	// (0x000342f6) bg_tb_trans_pane_g6

0x55df,	// (0x000342ee) bg_tb_trans_pane_g7

0x55cf,	// (0x000342de) bg_tb_trans_pane_g8

0x55d7,	// (0x000342e6) bg_tb_trans_pane_g9

0x0008,

0xfc34,	// (0x0003e943) bg_tb_trans_pane_g

0x8760,	// (0x0003746f) cell_toolbar_trans_pane_ParamLimits

0x8760,	// (0x0003746f) cell_toolbar_trans_pane

0x7b9c,	// (0x000368ab) cell_toolbar_trans_pane_g1

0xe1c3,	// (0x0003ced2) list_form2_midp_pane_t1

0xe1d1,	// (0x0003cee0) list_form2_midp_pane_t2

0x0001,

0xfad1,	// (0x0003e7e0) list_form2_midp_pane_t

0x779c,	// (0x000364ab) scroll_pane_cp51_ParamLimits

0x7958,	// (0x00036667) form2_midp_wait_pane_g1

0x7961,	// (0x00036670) form2_midp_wait_pane_g2

0x796a,	// (0x00036679) form2_midp_wait_pane_g3

0x0002,

0xfae6,	// (0x0003e7f5) form2_midp_wait_pane_g

0x3851,	// (0x00032560) list_highlight_pane_cp21_ParamLimits

0x79b6,	// (0x000366c5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x79c5,	// (0x000366d4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6b3a,	// (0x00035849) list_single_2graphic_im_pane_ParamLimits

0x6b3a,	// (0x00035849) list_single_2graphic_im_pane

0xe56f,	// (0x0003d27e) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0003d27e) list_single_2graphic_im_pane_g1

0xe580,	// (0x0003d28f) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0003d28f) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0003d29b) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0003d29b) list_single_2graphic_im_pane_g3

0x0003,

0xfc47,	// (0x0003e956) list_single_2graphic_im_pane_g_ParamLimits

0xfc47,	// (0x0003e956) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0003d2af) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0003d2af) list_single_2graphic_im_pane_t1

0x81e3,	// (0x00036ef2) list_single_graphic_2heading_pane_fp_ParamLimits

0x81e3,	// (0x00036ef2) list_single_graphic_2heading_pane_fp

0x33dd,	// (0x000320ec) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x33dd,	// (0x000320ec) list_single_graphic_2heading_pane_fp_g1

0x81f8,	// (0x00036f07) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x81f8,	// (0x00036f07) list_single_graphic_2heading_pane_fp_g2

0x33a6,	// (0x000320b5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x33a6,	// (0x000320b5) list_single_graphic_2heading_pane_fp_g3

0x33b2,	// (0x000320c1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x33b2,	// (0x000320c1) list_single_graphic_2heading_pane_fp_g4

0x8204,	// (0x00036f13) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8204,	// (0x00036f13) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0003e87d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0003e87d) list_single_graphic_2heading_pane_fp_g

0x35b6,	// (0x000322c5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x35b6,	// (0x000322c5) list_single_graphic_2heading_pane_fp_t1

0x3415,	// (0x00032124) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3415,	// (0x00032124) list_single_graphic_2heading_pane_fp_t2

0x35cc,	// (0x000322db) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x35cc,	// (0x000322db) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc50,	// (0x0003e95f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc50,	// (0x0003e95f) list_single_graphic_2heading_pane_fp_t

0x7c28,	// (0x00036937) fep_hwr_write_pane_g5_ParamLimits

0x7c28,	// (0x00036937) fep_hwr_write_pane_g5

0x7c34,	// (0x00036943) fep_hwr_write_pane_g6_ParamLimits

0x7c34,	// (0x00036943) fep_hwr_write_pane_g6

0x84b6,	// (0x000371c5) eswt_shell_pane_ParamLimits

0x561b,	// (0x0003432a) bg_popup_window_pane_cp18_ParamLimits

0x68ca,	// (0x000355d9) heading_pane_cp70

0x85e0,	// (0x000372ef) popup_eswt_tasktip_window_t1_ParamLimits

0xd7ef,	// (0x0003c4fe) aid_touch_tab_arrow_left

0xd805,	// (0x0003c514) aid_touch_tab_arrow_right

0xd118,	// (0x0003be27) title_pane_g3_ParamLimits

0xd118,	// (0x0003be27) title_pane_g3

0x407f,	// (0x00032d8e) set_value_pane_g1

0xc770,	// (0x0003b47f) popup_toolbar_trans_pane_ParamLimits

0x873a,	// (0x00037449) aid_size_cell_tb_trans_pane_ParamLimits

0x40c0,	// (0x00032dcf) bg_tb_trans_pane_ParamLimits

0x874c,	// (0x0003745b) grid_tb_trans_pane_ParamLimits

0x3ada,	// (0x000327e9) cont_note_pane_ParamLimits

0x3ada,	// (0x000327e9) cont_note_pane

0x3e31,	// (0x00032b40) cont_snote2_single_text_pane_ParamLimits

0x3e31,	// (0x00032b40) cont_snote2_single_text_pane

0x3e31,	// (0x00032b40) cont_snote2_single_graphic_pane_ParamLimits

0x3e31,	// (0x00032b40) cont_snote2_single_graphic_pane

0x5c1c,	// (0x0003492b) cont_note_wait_pane_ParamLimits

0x5c1c,	// (0x0003492b) cont_note_wait_pane

0x5c1c,	// (0x0003492b) cont_note_image_pane_ParamLimits

0x5c1c,	// (0x0003492b) cont_note_image_pane

0x87f4,	// (0x00037503) popup_note2_window_g1_ParamLimits

0x87f4,	// (0x00037503) popup_note2_window_g1

0x8825,	// (0x00037534) popup_note2_window_t1_ParamLimits

0x8825,	// (0x00037534) popup_note2_window_t1

0x886a,	// (0x00037579) popup_note2_window_t2_ParamLimits

0x886a,	// (0x00037579) popup_note2_window_t2

0x88af,	// (0x000375be) popup_note2_window_t3_ParamLimits

0x88af,	// (0x000375be) popup_note2_window_t3

0x88f4,	// (0x00037603) popup_note2_window_t4_ParamLimits

0x88f4,	// (0x00037603) popup_note2_window_t4

0x3b5e,	// (0x0003286d) popup_note2_window_t5_ParamLimits

0x3b5e,	// (0x0003286d) popup_note2_window_t5

0x0004,

0xfc5c,	// (0x0003e96b) popup_note2_window_t_ParamLimits

0xfc5c,	// (0x0003e96b) popup_note2_window_t

0x8923,	// (0x00037632) popup_note2_image_window_g1_ParamLimits

0x8923,	// (0x00037632) popup_note2_image_window_g1

0x892f,	// (0x0003763e) popup_note2_image_window_g2_ParamLimits

0x892f,	// (0x0003763e) popup_note2_image_window_g2

0x0001,

0xfc67,	// (0x0003e976) popup_note2_image_window_g_ParamLimits

0xfc67,	// (0x0003e976) popup_note2_image_window_g

0x8941,	// (0x00037650) popup_note2_image_window_t1_ParamLimits

0x8941,	// (0x00037650) popup_note2_image_window_t1

0x8959,	// (0x00037668) popup_note2_image_window_t2_ParamLimits

0x8959,	// (0x00037668) popup_note2_image_window_t2

0x8971,	// (0x00037680) popup_note2_image_window_t3_ParamLimits

0x8971,	// (0x00037680) popup_note2_image_window_t3

0x0002,

0xfc6c,	// (0x0003e97b) popup_note2_image_window_t_ParamLimits

0xfc6c,	// (0x0003e97b) popup_note2_image_window_t

0x5c2a,	// (0x00034939) popup_note2_wait_window_g1_ParamLimits

0x5c2a,	// (0x00034939) popup_note2_wait_window_g1

0x898d,	// (0x0003769c) popup_note2_wait_window_g2_ParamLimits

0x898d,	// (0x0003769c) popup_note2_wait_window_g2

0x5c42,	// (0x00034951) popup_note2_wait_window_g3_ParamLimits

0x5c42,	// (0x00034951) popup_note2_wait_window_g3

0x0002,

0xfc73,	// (0x0003e982) popup_note2_wait_window_g_ParamLimits

0xfc73,	// (0x0003e982) popup_note2_wait_window_g

0x8999,	// (0x000376a8) popup_note2_wait_window_t1_ParamLimits

0x8999,	// (0x000376a8) popup_note2_wait_window_t1

0x89b7,	// (0x000376c6) popup_note2_wait_window_t2_ParamLimits

0x89b7,	// (0x000376c6) popup_note2_wait_window_t2

0x89d5,	// (0x000376e4) popup_note2_wait_window_t3_ParamLimits

0x89d5,	// (0x000376e4) popup_note2_wait_window_t3

0x89e7,	// (0x000376f6) popup_note2_wait_window_t4_ParamLimits

0x89e7,	// (0x000376f6) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003e989) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003e989) popup_note2_wait_window_t

0x89f9,	// (0x00037708) wait_bar2_pane_ParamLimits

0x89f9,	// (0x00037708) wait_bar2_pane

0x8a11,	// (0x00037720) popup_snote2_single_text_window_g1_ParamLimits

0x8a11,	// (0x00037720) popup_snote2_single_text_window_g1

0x8a39,	// (0x00037748) popup_snote2_single_text_window_t1_ParamLimits

0x8a39,	// (0x00037748) popup_snote2_single_text_window_t1

0x8a85,	// (0x00037794) popup_snote2_single_text_window_t2_ParamLimits

0x8a85,	// (0x00037794) popup_snote2_single_text_window_t2

0x8ad1,	// (0x000377e0) popup_snote2_single_text_window_t3_ParamLimits

0x8ad1,	// (0x000377e0) popup_snote2_single_text_window_t3

0x8b12,	// (0x00037821) popup_snote2_single_text_window_t4_ParamLimits

0x8b12,	// (0x00037821) popup_snote2_single_text_window_t4

0x8b48,	// (0x00037857) popup_snote2_single_text_window_t5_ParamLimits

0x8b48,	// (0x00037857) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003e992) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003e992) popup_snote2_single_text_window_t

0x8b73,	// (0x00037882) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b73,	// (0x00037882) popup_snote2_single_graphic_window_g1

0x8b9b,	// (0x000378aa) popup_snote2_single_graphic_window_g2_ParamLimits

0x8b9b,	// (0x000378aa) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003e99d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003e99d) popup_snote2_single_graphic_window_g

0x8bc3,	// (0x000378d2) popup_snote2_single_graphic_window_t1_ParamLimits

0x8bc3,	// (0x000378d2) popup_snote2_single_graphic_window_t1

0x8c0f,	// (0x0003791e) popup_snote2_single_graphic_window_t2_ParamLimits

0x8c0f,	// (0x0003791e) popup_snote2_single_graphic_window_t2

0x8ad1,	// (0x000377e0) popup_snote2_single_graphic_window_t3_ParamLimits

0x8ad1,	// (0x000377e0) popup_snote2_single_graphic_window_t3

0x8b12,	// (0x00037821) popup_snote2_single_graphic_window_t4_ParamLimits

0x8b12,	// (0x00037821) popup_snote2_single_graphic_window_t4

0x8b48,	// (0x00037857) popup_snote2_single_graphic_window_t5_ParamLimits

0x8b48,	// (0x00037857) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003e9a2) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003e9a2) popup_snote2_single_graphic_window_t

0x765d,	// (0x0003636c) clock_nsta_pane_cp2_t1

0x765d,	// (0x0003636c) clock_nsta_pane_cp2_t2

0x0001,

0xfaa7,	// (0x0003e7b6) clock_nsta_pane_cp2_t

0x0bbf,	// (0x0002f8ce) form_field_data_wide_pane_g1_ParamLimits

0x40ce,	// (0x00032ddd) form_field_data_wide_pane_g2_ParamLimits

0x40ce,	// (0x00032ddd) form_field_data_wide_pane_g2

0x40da,	// (0x00032de9) form_field_data_wide_pane_g3_ParamLimits

0x40da,	// (0x00032de9) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003e38a) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003e38a) form_field_data_wide_pane_g

0xe0de,	// (0x0003cded) grid_touch_3_pane_ParamLimits

0xe0de,	// (0x0003cded) grid_touch_3_pane

0xe5d1,	// (0x0003d2e0) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0003d2e0) cell_touch_3_pane

0x7b9c,	// (0x000368ab) cell_touch_3_pane_g1

0x7b9c,	// (0x000368ab) cell_touch_3_pane_g2

0x0001,

0xfb2c,	// (0x0003e83b) cell_touch_3_pane_g

0x3b90,	// (0x0003289f) cont_query_data_pane

0x3b98,	// (0x000328a7) cont_query_data_pane_cp1

0x8c89,	// (0x00037998) button_value_adjust_pane_cp7

0x8c91,	// (0x000379a0) query_popup_pane_cp3

0x4830,	// (0x0003353f) bg_popup_sub_pane_cp22_ParamLimits

0x0f44,	// (0x0002fc53) navi_navi_volume_pane_cp2

0x0f5f,	// (0x0002fc6e) popup_side_volume_key_window_g2

0x0f6e,	// (0x0002fc7d) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003e420) popup_side_volume_key_window_g

0x0f8b,	// (0x0002fc9a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003e427) popup_side_volume_key_window_t

0x4ae7,	// (0x000337f6) popup_side_volume_key_window_ParamLimits

0xbafb,	// (0x0003a80a) list_double_graphic_pane_g4_ParamLimits

0xbafb,	// (0x0003a80a) list_double_graphic_pane_g4

0xdf3f,	// (0x0003cc4e) list_single_2heading_msg_pane_ParamLimits

0xdf3f,	// (0x0003cc4e) list_single_2heading_msg_pane

0xc98d,	// (0x0003b69c) list_single_2heading_msg_pane_g1_ParamLimits

0xc98d,	// (0x0003b69c) list_single_2heading_msg_pane_g1

0xc999,	// (0x0003b6a8) list_single_2heading_msg_pane_g2_ParamLimits

0xc999,	// (0x0003b6a8) list_single_2heading_msg_pane_g2

0xc9ac,	// (0x0003b6bb) list_single_2heading_msg_pane_g3_ParamLimits

0xc9ac,	// (0x0003b6bb) list_single_2heading_msg_pane_g3

0xc9b8,	// (0x0003b6c7) list_single_2heading_msg_pane_g4_ParamLimits

0xc9b8,	// (0x0003b6c7) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003e9ad) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003e9ad) list_single_2heading_msg_pane_g

0xc9d0,	// (0x0003b6df) list_single_2heading_msg_pane_t1_ParamLimits

0xc9d0,	// (0x0003b6df) list_single_2heading_msg_pane_t1

0xc9f8,	// (0x0003b707) list_single_2heading_msg_pane_t2_ParamLimits

0xc9f8,	// (0x0003b707) list_single_2heading_msg_pane_t2

0xca63,	// (0x0003b772) list_single_2heading_msg_pane_t3_ParamLimits

0xca63,	// (0x0003b772) list_single_2heading_msg_pane_t3

0x36b1,	// (0x000323c0) list_single_2heading_msg_pane_t4_ParamLimits

0x36b1,	// (0x000323c0) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003e9b6) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003e9b6) list_single_2heading_msg_pane_t

0x37a5,	// (0x000324b4) title_pane_g4_ParamLimits

0x37a5,	// (0x000324b4) title_pane_g4

0x0d53,	// (0x0002fa62) title_pane_stacon_g3_ParamLimits

0x0d53,	// (0x0002fa62) title_pane_stacon_g3

0x87b7,	// (0x000374c6) list_single_2graphic_im_pane_g4_ParamLimits

0x87b7,	// (0x000374c6) list_single_2graphic_im_pane_g4

0x6687,	// (0x00035396) popup_side_volume_key_window_cp

0x6ea2,	// (0x00035bb1) main_idle_act2_pane_t1

0x18dc,	// (0x000305eb) toolbar_button_pane_g10

0xd423,	// (0x0003c132) popup_toolbar_window_cp1

0x764e,	// (0x0003635d) clock_nsta_pane_cp_t1

0x764e,	// (0x0003635d) clock_nsta_pane_cp_t2

0x0001,

0xfaa2,	// (0x0003e7b1) clock_nsta_pane_cp_t

0x0f44,	// (0x0002fc53) navi_navi_volume_pane_cp2_ParamLimits

0x0f53,	// (0x0002fc62) popup_side_volume_key_window_g1_ParamLimits

0x0f5f,	// (0x0002fc6e) popup_side_volume_key_window_g2_ParamLimits

0x0f6e,	// (0x0002fc7d) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003e420) popup_side_volume_key_window_g_ParamLimits

0x1d44,	// (0x00030a53) fep_hwr_aid_pane

0x1deb,	// (0x00030afa) bg_fep_hwr_top_pane_g4_ParamLimits

0x7bf8,	// (0x00036907) fep_hwr_top_pane_g1_ParamLimits

0x7c0a,	// (0x00036919) fep_hwr_top_pane_g2_ParamLimits

0x1e0b,	// (0x00030b1a) fep_hwr_top_pane_g3_ParamLimits

0xfaf7,	// (0x0003e806) fep_hwr_top_pane_g_ParamLimits

0x1e20,	// (0x00030b2f) fep_hwr_top_text_pane_ParamLimits

0x644a,	// (0x00035159) aid_touch_tab_arrow_arrow_2

0x6453,	// (0x00035162) aid_touch_tab_arrow_left_2

0x1d58,	// (0x00030a67) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d8f,	// (0x00030a9e) fep_hwr_prediction_pane

0x7d6a,	// (0x00036a79) fep_vkb_prediction_pane

0xe3b7,	// (0x0003d0c6) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0003d0c6) fep_vkb_side_pane_g3

0x1f9b,	// (0x00030caa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2007,	// (0x00030d16) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2014,	// (0x00030d23) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0003e8b5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2143,	// (0x00030e52) fep_hwr_prediction_pane_g1

0x214d,	// (0x00030e5c) fep_hwr_prediction_pane_g2

0x2155,	// (0x00030e64) fep_hwr_prediction_pane_g3

0x215d,	// (0x00030e6c) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003e9bf) fep_hwr_prediction_pane_g

0x8cb6,	// (0x000379c5) fep_vkb_prediction_pane_g1

0x8cc0,	// (0x000379cf) fep_vkb_prediction_pane_g2

0x8cc8,	// (0x000379d7) fep_vkb_prediction_pane_g3

0x8cd0,	// (0x000379df) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003e9c8) fep_vkb_prediction_pane_g

0x1bc4,	// (0x000308d3) slider_set_pane_g3

0x1bd8,	// (0x000308e7) slider_set_pane_g4

0x1bf0,	// (0x000308ff) slider_set_pane_g5

0x1bc4,	// (0x000308d3) slider_set_pane_g6

0x1c06,	// (0x00030915) slider_set_pane_g7

0x6ae7,	// (0x000357f6) slider_form_pane_g3

0x6af0,	// (0x000357ff) slider_form_pane_g4

0x6af8,	// (0x00035807) slider_form_pane_g5

0x6ae7,	// (0x000357f6) slider_form_pane_g6

0xdf11,	// (0x0003cc20) slider_form_pane_g7

0x714c,	// (0x00035e5b) slider_set_pane_vc_g3

0x7155,	// (0x00035e64) slider_set_pane_vc_g4

0x715e,	// (0x00035e6d) slider_set_pane_vc_g5

0x714c,	// (0x00035e5b) slider_set_pane_vc_g6

0x7167,	// (0x00035e76) slider_set_pane_vc_g7

0x7327,	// (0x00036036) slider_form_pane_vc_g1

0x7330,	// (0x0003603f) slider_form_pane_vc_g2

0x7339,	// (0x00036048) slider_form_pane_vc_g3

0x7327,	// (0x00036036) slider_form_pane_vc_g4

0x7342,	// (0x00036051) slider_form_pane_vc_g5

0x0004,

0xfa74,	// (0x0003e783) slider_form_pane_vc_g

0x033e,	// (0x0002f04d) main_idle_act3_pane

0x8cd8,	// (0x000379e7) ai3_links_pane

0xe619,	// (0x0003d328) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0003d328) popup_ai3_data_window

0x375d,	// (0x0003246c) grid_ai3_links_pane

0xe633,	// (0x0003d342) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0003d342) cell_ai3_links_pane

0x8d13,	// (0x00037a22) bg_popup_sub_pane_cp11

0x8d20,	// (0x00037a2f) cell_ai3_links_pane_g1

0x375d,	// (0x0003246c) bg_popup_sub_pane_cp12

0x8d45,	// (0x00037a54) heading_ai3_data_pane

0x8d4d,	// (0x00037a5c) list_ai3_gene_pane

0x8d59,	// (0x00037a68) popup_ai3_data_window_g1

0x8d61,	// (0x00037a70) heading_ai3_data_pane_g1

0x8d69,	// (0x00037a78) heading_ai3_data_pane_t1

0x8d77,	// (0x00037a86) list_double_ai3_gene_pane_ParamLimits

0x8d77,	// (0x00037a86) list_double_ai3_gene_pane

0x8d84,	// (0x00037a93) list_single_ai3_gene_pane_ParamLimits

0x8d84,	// (0x00037a93) list_single_ai3_gene_pane

0x7b61,	// (0x00036870) list_highlight_pane_cp7_ParamLimits

0x7b61,	// (0x00036870) list_highlight_pane_cp7

0x8d91,	// (0x00037aa0) list_single_a13_gene_pane_t1_ParamLimits

0x8d91,	// (0x00037aa0) list_single_a13_gene_pane_t1

0x8da8,	// (0x00037ab7) list_single_ai3_gene_pane_g1

0x8db1,	// (0x00037ac0) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003e9d1) list_single_ai3_gene_pane_g

0x8db9,	// (0x00037ac8) list_double_ai3_gene_pane_g1_ParamLimits

0x8db9,	// (0x00037ac8) list_double_ai3_gene_pane_g1

0x8dc5,	// (0x00037ad4) list_double_ai3_gene_pane_t1_ParamLimits

0x8dc5,	// (0x00037ad4) list_double_ai3_gene_pane_t1

0x8de1,	// (0x00037af0) list_double_ai3_gene_pane_t2_ParamLimits

0x8de1,	// (0x00037af0) list_double_ai3_gene_pane_t2

0x8df7,	// (0x00037b06) list_double_ai3_gene_pane_t3_ParamLimits

0x8df7,	// (0x00037b06) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003e9d6) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003e9d6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x35e2,	// (0x000322f1) aid_size_min_col_2

0xe603,	// (0x0003d312) aid_size_min_msg_ParamLimits

0xe603,	// (0x0003d312) aid_size_min_msg

0xe3cb,	// (0x0003d0da) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0003d0da) fep_vkb_top_text_pane_g2

0x0001,

0xfb27,	// (0x0003e836) fep_vkb_top_text_pane_g_ParamLimits

0xfb27,	// (0x0003e836) fep_vkb_top_text_pane_g

0x033e,	// (0x0002f04d) main_hc_apps_shell_pane

0x8e14,	// (0x00037b23) grid_hc_apps_pane_ParamLimits

0x8e14,	// (0x00037b23) grid_hc_apps_pane

0x8e23,	// (0x00037b32) list_hc_apps_pane

0x8e2b,	// (0x00037b3a) scroll_pane_cp37_ParamLimits

0x8e2b,	// (0x00037b3a) scroll_pane_cp37

0xe64d,	// (0x0003d35c) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0003d35c) cell_hc_apps_pane

0xe70b,	// (0x0003d41a) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0003d41a) cell_hc_apps_pane_g1

0x8f16,	// (0x00037c25) cell_hc_apps_pane_g2_ParamLimits

0x8f16,	// (0x00037c25) cell_hc_apps_pane_g2

0x8f32,	// (0x00037c41) cell_hc_apps_pane_g3_ParamLimits

0x8f32,	// (0x00037c41) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003e9dd) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003e9dd) cell_hc_apps_pane_g

0xe738,	// (0x0003d447) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0003d447) cell_hc_apps_pane_t1

0x3ada,	// (0x000327e9) grid_highlight_pane_cp10_ParamLimits

0x3ada,	// (0x000327e9) grid_highlight_pane_cp10

0xe776,	// (0x0003d485) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0003d485) list_single_hc_apps_pane

0xe7a3,	// (0x0003d4b2) list_single_hc_apps_pane_g1

0xcad1,	// (0x0003b7e0) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003e9e4) list_single_hc_apps_pane_g

0xcaea,	// (0x0003b7f9) list_single_hc_apps_pane_g2_copy1

0xcb06,	// (0x0003b815) list_single_hc_apps_pane_t1

0x3851,	// (0x00032560) bg_set_opt_pane_cp_ParamLimits

0x059f,	// (0x0002f2ae) setting_slider_pane_t1_ParamLimits

0x05b8,	// (0x0002f2c7) setting_slider_pane_t2_ParamLimits

0x05d2,	// (0x0002f2e1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003e26d) setting_slider_pane_t_ParamLimits

0x05ea,	// (0x0002f2f9) slider_set_pane_ParamLimits

0x11ed,	// (0x0002fefc) control_pane_g5_ParamLimits

0x11ed,	// (0x0002fefc) control_pane_g5

0x6936,	// (0x00035645) slider_set_pane_g1_ParamLimits

0x1bb8,	// (0x000308c7) slider_set_pane_g2_ParamLimits

0x1bc4,	// (0x000308d3) slider_set_pane_g3_ParamLimits

0x1bd8,	// (0x000308e7) slider_set_pane_g4_ParamLimits

0x1bf0,	// (0x000308ff) slider_set_pane_g5_ParamLimits

0x1bc4,	// (0x000308d3) slider_set_pane_g6_ParamLimits

0x1c06,	// (0x00030915) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0003e66e) slider_set_pane_g_ParamLimits

0x4bd3,	// (0x000338e2) navi_icon_text_pane_ParamLimits

0xd7b8,	// (0x0003c4c7) aid_fill_nsta_2_ParamLimits

0xd7ef,	// (0x0003c4fe) aid_touch_tab_arrow_left_ParamLimits

0xd805,	// (0x0003c514) aid_touch_tab_arrow_right_ParamLimits

0xd8a0,	// (0x0003c5af) clock_nsta_pane_ParamLimits

0x642c,	// (0x0003513b) navi_icon_pane_g1_ParamLimits

0x6438,	// (0x00035147) navi_text_pane_t1_ParamLimits

0x775a,	// (0x00036469) navi_icon_text_pane_g1_ParamLimits

0x7766,	// (0x00036475) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0003d4b2) list_single_hc_apps_pane_g1_ParamLimits

0xcad1,	// (0x0003b7e0) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003e9e4) list_single_hc_apps_pane_g_ParamLimits

0xcaea,	// (0x0003b7f9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcb06,	// (0x0003b815) list_single_hc_apps_pane_t1_ParamLimits

0xb8d0,	// (0x0003a5df) popup_toolbar2_fixed_window_ParamLimits

0xb8d0,	// (0x0003a5df) popup_toolbar2_fixed_window

0xc766,	// (0x0003b475) popup_toolbar2_float_window

0x375d,	// (0x0003246c) bg_popup_sub_pane_cp27

0x9009,	// (0x00037d18) grid_toolbar2_float_pane

0x375d,	// (0x0003246c) bg_popup_sub_pane_cp26

0x9009,	// (0x00037d18) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0003d4cb) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0003d4cb) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0003d4e5) cell_toolbar2_fixed_pane_g1

0x902a,	// (0x00037d39) toolbar2_fixed_button_pane

0x55a7,	// (0x000342b6) toolbar2_fixed_button_pane_g1

0x55af,	// (0x000342be) toolbar2_fixed_button_pane_g2

0x55b7,	// (0x000342c6) toolbar2_fixed_button_pane_g3

0x55c7,	// (0x000342d6) toolbar2_fixed_button_pane_g4

0x55bf,	// (0x000342ce) toolbar2_fixed_button_pane_g5

0x55cf,	// (0x000342de) toolbar2_fixed_button_pane_g6

0x55d7,	// (0x000342e6) toolbar2_fixed_button_pane_g7

0x55e7,	// (0x000342f6) toolbar2_fixed_button_pane_g8

0x55df,	// (0x000342ee) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0003e570) toolbar2_fixed_button_pane_g

0x9032,	// (0x00037d41) cell_toolbar2_float_pane_ParamLimits

0x9032,	// (0x00037d41) cell_toolbar2_float_pane

0x9043,	// (0x00037d52) cell_toolbar2_float_pane_g1

0x902a,	// (0x00037d39) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0003cfb4) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0003cfb4) fep_vkb_accented_list_pane

0x1f7b,	// (0x00030c8a) bg_popup_fep_shadow_pane_g9

0x4d53,	// (0x00033a62) bg_popup_fep_shadow_pane_cp3

0x4214,	// (0x00032f23) list_accented_list_pane

0x904c,	// (0x00037d5b) list_single_accented_list_pane_ParamLimits

0x904c,	// (0x00037d5b) list_single_accented_list_pane

0x4d53,	// (0x00033a62) list_highlight_pane_cp10

0x905d,	// (0x00037d6c) list_single_accented_list_pane_t1

0xc690,	// (0x0003b39f) popup_slider_window_ParamLimits

0xc690,	// (0x0003b39f) popup_slider_window

0x8c99,	// (0x000379a8) aid_indentation_list_msg

0xe8cf,	// (0x0003d5de) bg_popup_window_pane_cp19

0x9181,	// (0x00037e90) popup_slider_window_g1

0x919d,	// (0x00037eac) popup_slider_window_g2

0x91b9,	// (0x00037ec8) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003e9e9) popup_slider_window_g

0x9215,	// (0x00037f24) popup_slider_window_t1

0x9289,	// (0x00037f98) small_volume_slider_vertical_pane

0x7b9c,	// (0x000368ab) small_volume_slider_vertical_pane_g1

0x7b9c,	// (0x000368ab) small_volume_slider_vertical_pane_g2

0x92a5,	// (0x00037fb4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003e9fb) small_volume_slider_vertical_pane_g

0xb83e,	// (0x0003a54d) area_side_right_pane_ParamLimits

0xb83e,	// (0x0003a54d) area_side_right_pane

0xcb34,	// (0x0003b843) aid_size_side_button_ParamLimits

0xcb34,	// (0x0003b843) aid_size_side_button

0xcb4d,	// (0x0003b85c) grid_sctrl_middle_pane_ParamLimits

0xcb4d,	// (0x0003b85c) grid_sctrl_middle_pane

0x2198,	// (0x00030ea7) sctrl_sk_bottom_pane

0x21a9,	// (0x00030eb8) sctrl_sk_top_pane

0x21bb,	// (0x00030eca) aid_touch_sctrl_top

0x21c8,	// (0x00030ed7) bg_sctrl_sk_pane_ParamLimits

0x21c8,	// (0x00030ed7) bg_sctrl_sk_pane

0x21d6,	// (0x00030ee5) sctrl_sk_top_pane_g1

0x21e3,	// (0x00030ef2) sctrl_sk_top_pane_t1

0x21bb,	// (0x00030eca) aid_touch_sctrl_bottom

0x21c8,	// (0x00030ed7) bg_sctrl_sk_pane_cp_ParamLimits

0x21c8,	// (0x00030ed7) bg_sctrl_sk_pane_cp

0x21fe,	// (0x00030f0d) sctrl_sk_bottom_pane_g1

0x21e3,	// (0x00030ef2) sctrl_sk_bottom_pane_t1

0xcb67,	// (0x0003b876) cell_sctrl_middle_pane_ParamLimits

0xcb67,	// (0x0003b876) cell_sctrl_middle_pane

0xcb78,	// (0x0003b887) aid_touch_sctrl_middle_ParamLimits

0xcb78,	// (0x0003b887) aid_touch_sctrl_middle

0xcb85,	// (0x0003b894) bg_sctrl_middle_pane_ParamLimits

0xcb85,	// (0x0003b894) bg_sctrl_middle_pane

0x286b,	// (0x0003157a) cell_sctrl_middle_pane_g1_ParamLimits

0x286b,	// (0x0003157a) cell_sctrl_middle_pane_g1

0xcb93,	// (0x0003b8a2) cell_sctrl_middle_pane_g2_ParamLimits

0xcb93,	// (0x0003b8a2) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003ea07) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003ea07) cell_sctrl_middle_pane_g

0x55a7,	// (0x000342b6) bg_sctrl_middle_pane_g1

0x55b7,	// (0x000342c6) bg_sctrl_middle_pane_g2

0x55af,	// (0x000342be) bg_sctrl_middle_pane_g3

0x55bf,	// (0x000342ce) bg_sctrl_middle_pane_g4

0x55c7,	// (0x000342d6) bg_sctrl_middle_pane_g5

0x55cf,	// (0x000342de) bg_sctrl_middle_pane_g6

0x55d7,	// (0x000342e6) bg_sctrl_middle_pane_g7

0x55df,	// (0x000342ee) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003ea0c) bg_sctrl_middle_pane_g

0x55e7,	// (0x000342f6) bg_sctrl_middle_pane_g8_copy1

0x55a7,	// (0x000342b6) bg_sctrl_sk_pane_g1

0x55af,	// (0x000342be) bg_sctrl_sk_pane_g2

0x55b7,	// (0x000342c6) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0003e570) bg_sctrl_sk_pane_g

0x3fef,	// (0x00032cfe) aid_size_touch_scroll_bar

0x55c7,	// (0x000342d6) bg_sctrl_sk_pane_g4

0x55bf,	// (0x000342ce) bg_sctrl_sk_pane_g5

0x55cf,	// (0x000342de) bg_sctrl_sk_pane_g6

0x55d7,	// (0x000342e6) bg_sctrl_sk_pane_g7

0x55e7,	// (0x000342f6) bg_sctrl_sk_pane_g8

0x55df,	// (0x000342ee) bg_sctrl_sk_pane_g9

0x1399,	// (0x000300a8) popup_fep_china_hwr2_fs_candidate_window

0xc1aa,	// (0x0003aeb9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1aa,	// (0x0003aeb9) popup_fep_china_hwr2_fs_control_window

0x1f9b,	// (0x00030caa) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003ea02) sctrl_sk_top_pane_g

0xe987,	// (0x0003d696) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0003d696) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0003d6aa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0003d6aa) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0003d6c1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0003d6c1) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0003d6d3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0003d6d3) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0003d6e7) popup_fep_china_hwr2_fs_control_funtion_grid

0x9301,	// (0x00038010) aid_fep_china_hwr2_fs_candi_cell

0x375d,	// (0x0003246c) bg_popup_fep_shadow_pane_cp6

0x930b,	// (0x0003801a) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0003d6ef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0003d6ef) cell_fep_china_hwr2_fs_funtion_grid

0x7b9c,	// (0x000368ab) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x932d,	// (0x0003803c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x932d,	// (0x0003803c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x933b,	// (0x0003804a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x933b,	// (0x0003804a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003ea1d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003ea1d) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0003d707) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0003d707) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea1a,	// (0x0003d729) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea1a,	// (0x0003d729) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003ea22) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003ea22) cell_fep_china_hwr2_fs_funtion_grid_t

0x9382,	// (0x00038091) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x938a,	// (0x00038099) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9392,	// (0x000380a1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003ea27) popup_fep_china_hwr2_fs_control_bar_grid_g

0x939a,	// (0x000380a9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x939a,	// (0x000380a9) cell_fep_china_hwr2_fs_candidate_grid

0x93b3,	// (0x000380c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93bb,	// (0x000380ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7b9c,	// (0x000368ab) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7b9c,	// (0x000368ab) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2c,	// (0x0003e83b) cell_fep_china_hwr2_fs_candidate_grid_g

0x93c3,	// (0x000380d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x519d,	// (0x00033eac) clock_nsta_pane_cp_24_ParamLimits

0x519d,	// (0x00033eac) clock_nsta_pane_cp_24

0x521b,	// (0x00033f2a) indicator_nsta_pane_cp_24_ParamLimits

0x521b,	// (0x00033f2a) indicator_nsta_pane_cp_24

0x62a8,	// (0x00034fb7) heading_pane_g1

0x0001,

0xf8c6,	// (0x0003e5d5) heading_pane_g

0x6ceb,	// (0x000359fa) grid_sct_catagory_button_pane

0x6d1b,	// (0x00035a2a) scroll_pane_cp5_ParamLimits

0x77a8,	// (0x000364b7) button_value_adjust_pane_cp5_ParamLimits

0x77a8,	// (0x000364b7) button_value_adjust_pane_cp5

0x7887,	// (0x00036596) form2_midp_time_pane_ParamLimits

0x93d1,	// (0x000380e0) cell_sct_catagory_button_pane_ParamLimits

0x93d1,	// (0x000380e0) cell_sct_catagory_button_pane

0x7b61,	// (0x00036870) bg_button_pane_cp01_ParamLimits

0x7b61,	// (0x00036870) bg_button_pane_cp01

0x7b9c,	// (0x000368ab) cell_sct_catagory_button_pane_g1

0xc709,	// (0x0003b418) popup_tb_extension_window

0xea36,	// (0x0003d745) aid_size_cell_ext_ParamLimits

0xea36,	// (0x0003d745) aid_size_cell_ext

0x3e31,	// (0x00032b40) bg_tb_trans_pane_cp1_ParamLimits

0x3e31,	// (0x00032b40) bg_tb_trans_pane_cp1

0xea5c,	// (0x0003d76b) grid_tb_ext_pane_ParamLimits

0xea5c,	// (0x0003d76b) grid_tb_ext_pane

0xea97,	// (0x0003d7a6) cell_tb_ext_pane_ParamLimits

0xea97,	// (0x0003d7a6) cell_tb_ext_pane

0xeabf,	// (0x0003d7ce) cell_tb_ext_pane_g1_ParamLimits

0xeabf,	// (0x0003d7ce) cell_tb_ext_pane_g1

0x9465,	// (0x00038174) cell_tb_ext_pane_t1

0x3ada,	// (0x000327e9) list_highlight_pane_cp11_ParamLimits

0x3ada,	// (0x000327e9) list_highlight_pane_cp11

0xb8e5,	// (0x0003a5f4) popup_uni_indicator_window_ParamLimits

0xb8e5,	// (0x0003a5f4) popup_uni_indicator_window

0x40c0,	// (0x00032dcf) bg_popup_sub_pane_cp14

0x9480,	// (0x0003818f) list_uniindi_pane

0x948c,	// (0x0003819b) uniindi_top_pane

0x3ada,	// (0x000327e9) bg_uniindi_top_pane

0x94ab,	// (0x000381ba) uniindi_top_pane_g1

0x94c1,	// (0x000381d0) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003ea2e) uniindi_top_pane_g

0x94eb,	// (0x000381fa) uniindi_top_pane_t1

0x9515,	// (0x00038224) list_single_uniindi_pane_ParamLimits

0x9515,	// (0x00038224) list_single_uniindi_pane

0x7b9c,	// (0x000368ab) bg_uniindi_top_pane_g1

0x9528,	// (0x00038237) list_single_uniindi_pane_g1

0x953b,	// (0x0003824a) list_single_uniindi_pane_t1

0x033e,	// (0x0002f04d) control_bg_pane

0x9560,	// (0x0003826f) bg_sctrl_sk_pane_cp1

0x9569,	// (0x00038278) bg_sctrl_sk_pane_cp2

0x9572,	// (0x00038281) control_bg_pane_g1

0x957b,	// (0x0003828a) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003ea37) control_bg_pane_g

0x7603,	// (0x00036312) cell_indicator_nsta_pane_g1_ParamLimits

0xe10b,	// (0x0003ce1a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa90,	// (0x0003e79f) cell_indicator_nsta_pane_g_ParamLimits

0x3393,	// (0x000320a2) form2_midp_time_pane_t1_ParamLimits

0x1d36,	// (0x00030a45) main_idle_act4_pane_ParamLimits

0x1d36,	// (0x00030a45) main_idle_act4_pane

0xc709,	// (0x0003b418) popup_tb_extension_window_ParamLimits

0xea7e,	// (0x0003d78d) tb_ext_find_pane_ParamLimits

0xea7e,	// (0x0003d78d) tb_ext_find_pane

0x9584,	// (0x00038293) ai_gene_pane_1_cp1

0x4e9a,	// (0x00033ba9) ai_gene_pane_2_cp1

0x958c,	// (0x0003829b) list_single_idle_plugin_calendar_pane

0x9595,	// (0x000382a4) list_single_idle_plugin_notification_pane

0x959e,	// (0x000382ad) list_single_idle_plugin_player_pane

0xeadc,	// (0x0003d7eb) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeadc,	// (0x0003d7eb) list_single_idle_plugin_shortcut_pane

0xeb04,	// (0x0003d813) main_idle_act4_pane_t1

0xeb1a,	// (0x0003d829) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003ea3c) main_idle_act4_pane_t

0xeb30,	// (0x0003d83f) middle_sk_idle_act4_pane_ParamLimits

0xeb30,	// (0x0003d83f) middle_sk_idle_act4_pane

0xeb4c,	// (0x0003d85b) popup_clock_digital_analogue_window_cp2

0xeb74,	// (0x0003d883) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb74,	// (0x0003d883) shortcut_wheel_idle_act4_pane

0x7b9c,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g1

0x7b9c,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g2

0x7b9c,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g3

0x7b9c,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g4

0x7b9c,	// (0x000368ab) shortcut_wheel_idle_act4_pane_g5

0x9631,	// (0x00038340) shortcut_wheel_idle_act4_pane_g6

0x9639,	// (0x00038348) shortcut_wheel_idle_act4_pane_g7

0x9641,	// (0x00038350) shortcut_wheel_idle_act4_pane_g8

0x9649,	// (0x00038358) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003ea41) shortcut_wheel_idle_act4_pane_g

0xe184,	// (0x0003ce93) middle_sk_idle_act4_pane_g1_ParamLimits

0xe184,	// (0x0003ce93) middle_sk_idle_act4_pane_g1

0xebf1,	// (0x0003d900) middle_sk_idle_act4_pane_g2_ParamLimits

0xebf1,	// (0x0003d900) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003ea64) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003ea64) middle_sk_idle_act4_pane_g

0xec09,	// (0x0003d918) middle_sk_idle_act4_pane_t1_ParamLimits

0xec09,	// (0x0003d918) middle_sk_idle_act4_pane_t1

0xec38,	// (0x0003d947) grid_ai_shortcut_pane_ParamLimits

0xec38,	// (0x0003d947) grid_ai_shortcut_pane

0xec55,	// (0x0003d964) list_highlight_pane_cp16_ParamLimits

0xec55,	// (0x0003d964) list_highlight_pane_cp16

0xec62,	// (0x0003d971) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec62,	// (0x0003d971) list_single_idle_plugin_shortcut_pane_g1

0xec6e,	// (0x0003d97d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec6e,	// (0x0003d97d) list_single_idle_plugin_shortcut_pane_g2

0xec8a,	// (0x0003d999) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec8a,	// (0x0003d999) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003ea69) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003ea69) list_single_idle_plugin_shortcut_pane_g

0xec9f,	// (0x0003d9ae) cell_ai_shortcut_pane_ParamLimits

0xec9f,	// (0x0003d9ae) cell_ai_shortcut_pane

0xecb5,	// (0x0003d9c4) cell_ai_shortcut_pane_g1_ParamLimits

0xecb5,	// (0x0003d9c4) cell_ai_shortcut_pane_g1

0x9584,	// (0x00038293) ai_gene_pane_1_cp2

0x9779,	// (0x00038488) ai_gene_pane_2_cp2

0x9781,	// (0x00038490) list_highlight_pane_cp15

0x978a,	// (0x00038499) list_single_idle_plugin_calendar_pane_g1

0x9781,	// (0x00038490) list_highlight_pane_cp17

0x9792,	// (0x000384a1) list_single_idle_plugin_calendar_pane_g1_copy1

0x979a,	// (0x000384a9) list_single_idle_plugin_player_pane_g1

0x6f44,	// (0x00035c53) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003ea70) list_single_idle_plugin_player_pane_g

0x97a2,	// (0x000384b1) list_single_idle_plugin_player_pane_t1

0x97b0,	// (0x000384bf) list_single_idle_plugin_player_pane_t2

0x97be,	// (0x000384cd) list_single_idle_plugin_player_pane_t3

0x97cc,	// (0x000384db) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003ea75) list_single_idle_plugin_player_pane_t

0x97da,	// (0x000384e9) wait_bar_pane_cp15

0x97e2,	// (0x000384f1) grid_ai_notification_pane

0x6f44,	// (0x00035c53) list_single_idle_plugin_notification_pane_g1

0xecd7,	// (0x0003d9e6) cell_ai_notification_pane_ParamLimits

0xecd7,	// (0x0003d9e6) cell_ai_notification_pane

0x97f8,	// (0x00038507) cell_ai_notification_pane_g1

0x9800,	// (0x0003850f) cell_ai_notification_pane_t1

0xece4,	// (0x0003d9f3) tb_ext_find_button_pane

0xecec,	// (0x0003d9fb) tb_ext_find_pane_g1

0xecf4,	// (0x0003da03) tb_ext_find_pane_t1

0x4740,	// (0x0003344f) tb_ext_find_button_pane_g1

0x982c,	// (0x0003853b) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003ea7e) tb_ext_find_button_pane_g

0xeb04,	// (0x0003d813) main_idle_act4_pane_t1_ParamLimits

0xeb1a,	// (0x0003d829) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003ea3c) main_idle_act4_pane_t_ParamLimits

0xeb4c,	// (0x0003d85b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb64,	// (0x0003d873) sat_plugin_idle_act4_pane_ParamLimits

0xeb64,	// (0x0003d873) sat_plugin_idle_act4_pane

0xed02,	// (0x0003da11) sat_plugin_idle_act4_pane_t1_ParamLimits

0xed02,	// (0x0003da11) sat_plugin_idle_act4_pane_t1

0xed1a,	// (0x0003da29) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed1a,	// (0x0003da29) sat_plugin_idle_act4_pane_t2

0xed32,	// (0x0003da41) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed32,	// (0x0003da41) sat_plugin_idle_act4_pane_t3

0xed4a,	// (0x0003da59) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed4a,	// (0x0003da59) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003ea83) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003ea83) sat_plugin_idle_act4_pane_t

0x0403,	// (0x0002f112) popup_battery_window_ParamLimits

0x0403,	// (0x0002f112) popup_battery_window

0x3ada,	// (0x000327e9) bg_popup_sub_pane_cp25_ParamLimits

0x3ada,	// (0x000327e9) bg_popup_sub_pane_cp25

0x9881,	// (0x00038590) popup_battery_window_g1_ParamLimits

0x9881,	// (0x00038590) popup_battery_window_g1

0x988d,	// (0x0003859c) popup_battery_window_t1_ParamLimits

0x988d,	// (0x0003859c) popup_battery_window_t1

0x989f,	// (0x000385ae) popup_battery_window_t2_ParamLimits

0x989f,	// (0x000385ae) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003ea8c) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003ea8c) popup_battery_window_t

0xd61b,	// (0x0003c32a) midp_canvas_pane_ParamLimits

0xd678,	// (0x0003c387) midp_keypad_pane_ParamLimits

0xd678,	// (0x0003c387) midp_keypad_pane

0x509d,	// (0x00033dac) main_midp_pane_ParamLimits

0x766c,	// (0x0003637b) signal_pane_g2_cp_ParamLimits

0xed62,	// (0x0003da71) aid_size_cell_midp_keypad_ParamLimits

0xed62,	// (0x0003da71) aid_size_cell_midp_keypad

0xed80,	// (0x0003da8f) midp_keyp_game_grid_pane_ParamLimits

0xed80,	// (0x0003da8f) midp_keyp_game_grid_pane

0xeda7,	// (0x0003dab6) midp_keyp_rocker_pane_ParamLimits

0xeda7,	// (0x0003dab6) midp_keyp_rocker_pane

0xedf8,	// (0x0003db07) midp_keyp_sk_left_pane_ParamLimits

0xedf8,	// (0x0003db07) midp_keyp_sk_left_pane

0xee4c,	// (0x0003db5b) midp_keyp_sk_right_pane_ParamLimits

0xee4c,	// (0x0003db5b) midp_keyp_sk_right_pane

0x375d,	// (0x0003246c) bg_button_pane_cp03

0xeea0,	// (0x0003dbaf) midp_keyp_sk_left_pane_g1

0x375d,	// (0x0003246c) bg_button_pane_cp04

0xeea0,	// (0x0003dbaf) midp_keyp_sk_right_pane_g1

0x7b9c,	// (0x000368ab) midp_keyp_rocker_pane_g1

0xeea9,	// (0x0003dbb8) keyp_game_cell_pane_ParamLimits

0xeea9,	// (0x0003dbb8) keyp_game_cell_pane

0x375d,	// (0x0003246c) bg_button_pane_cp02

0xeecd,	// (0x0003dbdc) keyp_game_cell_pane_g1

0xb880,	// (0x0003a58f) popup_fep_vkb2_window_ParamLimits

0xb880,	// (0x0003a58f) popup_fep_vkb2_window

0xcb9f,	// (0x0003b8ae) aid_size_cell_vkb2_ParamLimits

0xcb9f,	// (0x0003b8ae) aid_size_cell_vkb2

0xcbd5,	// (0x0003b8e4) popup_fep_vkb2_window_g1_ParamLimits

0xcbd5,	// (0x0003b8e4) popup_fep_vkb2_window_g1

0xcc25,	// (0x0003b934) vkb2_area_bottom_pane_ParamLimits

0xcc25,	// (0x0003b934) vkb2_area_bottom_pane

0xcc79,	// (0x0003b988) vkb2_area_keypad_pane_ParamLimits

0xcc79,	// (0x0003b988) vkb2_area_keypad_pane

0xccc1,	// (0x0003b9d0) vkb2_area_top_pane_ParamLimits

0xccc1,	// (0x0003b9d0) vkb2_area_top_pane

0xcd47,	// (0x0003ba56) vkb2_top_entry_pane_ParamLimits

0xcd47,	// (0x0003ba56) vkb2_top_entry_pane

0xcd74,	// (0x0003ba83) vkb2_top_grid_left_pane_ParamLimits

0xcd74,	// (0x0003ba83) vkb2_top_grid_left_pane

0xcd94,	// (0x0003baa3) vkb2_top_grid_right_pane_ParamLimits

0xcd94,	// (0x0003baa3) vkb2_top_grid_right_pane

0x246a,	// (0x00031179) vkb2_cell_keypad_pane_ParamLimits

0x246a,	// (0x00031179) vkb2_cell_keypad_pane

0xcdda,	// (0x0003bae9) vkb2_area_bottom_grid_pane_ParamLimits

0xcdda,	// (0x0003bae9) vkb2_area_bottom_grid_pane

0xce04,	// (0x0003bb13) vkb2_area_bottom_pane_g1_ParamLimits

0xce04,	// (0x0003bb13) vkb2_area_bottom_pane_g1

0xce2a,	// (0x0003bb39) vkb2_area_bottom_pane_g2_ParamLimits

0xce2a,	// (0x0003bb39) vkb2_area_bottom_pane_g2

0xce5b,	// (0x0003bb6a) vkb2_area_bottom_pane_g3_ParamLimits

0xce5b,	// (0x0003bb6a) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003ea91) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003ea91) vkb2_area_bottom_pane_g

0x2614,	// (0x00031323) vkb2_top_cell_left_pane_ParamLimits

0x2614,	// (0x00031323) vkb2_top_cell_left_pane

0xeed6,	// (0x0003dbe5) vkb2_top_entry_pane_g1_ParamLimits

0xeed6,	// (0x0003dbe5) vkb2_top_entry_pane_g1

0xeee4,	// (0x0003dbf3) vkb2_top_entry_pane_t1_ParamLimits

0xeee4,	// (0x0003dbf3) vkb2_top_entry_pane_t1

0x9a71,	// (0x00038780) vkb2_top_entry_pane_t2_ParamLimits

0x9a71,	// (0x00038780) vkb2_top_entry_pane_t2

0x9aa3,	// (0x000387b2) vkb2_top_entry_pane_t3_ParamLimits

0x9aa3,	// (0x000387b2) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003ea98) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003ea98) vkb2_top_entry_pane_t

0xcec5,	// (0x0003bbd4) vkb2_top_grid_right_pane_g1_ParamLimits

0xcec5,	// (0x0003bbd4) vkb2_top_grid_right_pane_g1

0x2677,	// (0x00031386) vkb2_top_grid_right_pane_g2_ParamLimits

0x2677,	// (0x00031386) vkb2_top_grid_right_pane_g2

0x268f,	// (0x0003139e) vkb2_top_grid_right_pane_g3_ParamLimits

0x268f,	// (0x0003139e) vkb2_top_grid_right_pane_g3

0xcedb,	// (0x0003bbea) vkb2_top_grid_right_pane_g4_ParamLimits

0xcedb,	// (0x0003bbea) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003ea9f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003ea9f) vkb2_top_grid_right_pane_g

0x26bd,	// (0x000313cc) vkb2_top_cell_left_pane_g1

0x26d4,	// (0x000313e3) vkb2_cell_keypad_pane_g1_ParamLimits

0x26d4,	// (0x000313e3) vkb2_cell_keypad_pane_g1

0x9ac7,	// (0x000387d6) vkb2_cell_keypad_pane_t1_ParamLimits

0x9ac7,	// (0x000387d6) vkb2_cell_keypad_pane_t1

0x26e2,	// (0x000313f1) vkb2_cell_bottom_grid_pane_ParamLimits

0x26e2,	// (0x000313f1) vkb2_cell_bottom_grid_pane

0x271b,	// (0x0003142a) vkb2_cell_bottom_grid_pane_g1

0xeb95,	// (0x0003d8a4) aid_call2_pane_cp02

0xeb9d,	// (0x0003d8ac) aid_call_pane_cp02

0xeba5,	// (0x0003d8b4) clock_digital_number_pane_cp10

0xebad,	// (0x0003d8bc) clock_digital_number_pane_cp11

0xebb5,	// (0x0003d8c4) clock_digital_number_pane_cp12

0xebbd,	// (0x0003d8cc) clock_digital_number_pane_cp13

0xebc5,	// (0x0003d8d4) clock_digital_separator_pane_cp10

0x4740,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g1

0x4740,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g2

0xebcd,	// (0x0003d8dc) popup_clock_digital_analogue_window_cp2_g3

0x4740,	// (0x0003344f) popup_clock_digital_analogue_window_cp2_g4

0xebcd,	// (0x0003d8dc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003ea54) popup_clock_digital_analogue_window_cp2_g

0xebd5,	// (0x0003d8e4) popup_clock_digital_analogue_window_cp2_t1

0xebe3,	// (0x0003d8f2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003ea5f) popup_clock_digital_analogue_window_cp2_t

0x7b9c,	// (0x000368ab) clock_digital_number_pane_cp10_g1

0x7b9c,	// (0x000368ab) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003e83b) clock_digital_number_pane_cp10_g

0x7b9c,	// (0x000368ab) clock_digital_separator_pane_cp10_g1

0x7b9c,	// (0x000368ab) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2c,	// (0x0003e83b) clock_digital_separator_pane_cp10_g

0x94cd,	// (0x000381dc) uniindi_top_pane_g3

0x94de,	// (0x000381ed) uniindi_top_pane_g4

0x24f5,	// (0x00031204) vkb2_row_keypad_pane_ParamLimits

0x24f5,	// (0x00031204) vkb2_row_keypad_pane

0x2737,	// (0x00031446) vkb2_cell_t_keypad_pane_ParamLimits

0x2737,	// (0x00031446) vkb2_cell_t_keypad_pane

0x2747,	// (0x00031456) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2747,	// (0x00031456) vkb2_cell_t_keypad_pane_cp08

0x275a,	// (0x00031469) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x275a,	// (0x00031469) vkb2_cell_t_keypad_pane_cp09

0x276e,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x276e,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp01

0x277f,	// (0x0003148e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x277f,	// (0x0003148e) vkb2_cell_t_keypad_pane_cp02

0x2790,	// (0x0003149f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2790,	// (0x0003149f) vkb2_cell_t_keypad_pane_cp03

0x27a1,	// (0x000314b0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x27a1,	// (0x000314b0) vkb2_cell_t_keypad_pane_cp04

0x27b2,	// (0x000314c1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x27b2,	// (0x000314c1) vkb2_cell_t_keypad_pane_cp05

0x27c3,	// (0x000314d2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x27c3,	// (0x000314d2) vkb2_cell_t_keypad_pane_cp06

0x27d4,	// (0x000314e3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x27d4,	// (0x000314e3) vkb2_cell_t_keypad_pane_cp07

0x27e5,	// (0x000314f4) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27e5,	// (0x000314f4) vkb2_cell_t_keypad_pane_cp10

0x1f9b,	// (0x00030caa) vkb2_cell_t_keypad_pane_g1

0x9ade,	// (0x000387ed) vkb2_cell_t_keypad_pane_t1

0x033e,	// (0x0002f04d) popup_grid_graphic2_window

0xef1d,	// (0x0003dc2c) aid_size_cell_graphic2_ParamLimits

0xef1d,	// (0x0003dc2c) aid_size_cell_graphic2

0xef5b,	// (0x0003dc6a) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0003dc6a) bg_popup_window_pane_cp21

0xef69,	// (0x0003dc78) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0003dc78) graphic2_pages_pane

0xefbf,	// (0x0003dcce) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0003dcce) grid_graphic2_control_pane

0xf007,	// (0x0003dd16) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0003dd16) grid_graphic2_pane

0xf08e,	// (0x0003dd9d) cell_graphic2_pane

0x033e,	// (0x0002f04d) main_comp_mode_pane

0x8d4d,	// (0x00037a5c) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0003d5de) bg_popup_window_pane_cp19_ParamLimits

0x9123,	// (0x00037e32) bg_touch_area_indi_pane_ParamLimits

0x9123,	// (0x00037e32) bg_touch_area_indi_pane

0x9139,	// (0x00037e48) bg_touch_area_indi_pane_cp01_ParamLimits

0x9139,	// (0x00037e48) bg_touch_area_indi_pane_cp01

0x914f,	// (0x00037e5e) bg_touch_area_indi_pane_cp02_ParamLimits

0x914f,	// (0x00037e5e) bg_touch_area_indi_pane_cp02

0x9167,	// (0x00037e76) bg_touch_area_indi_pane_cp03_ParamLimits

0x9167,	// (0x00037e76) bg_touch_area_indi_pane_cp03

0x9181,	// (0x00037e90) popup_slider_window_g1_ParamLimits

0x919d,	// (0x00037eac) popup_slider_window_g2_ParamLimits

0x91b9,	// (0x00037ec8) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003e9e9) popup_slider_window_g_ParamLimits

0x9215,	// (0x00037f24) popup_slider_window_t1_ParamLimits

0x9289,	// (0x00037f98) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0003dd9d) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0003ddf8) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0003ddf8) bg_button_pane_cp10

0xf0fc,	// (0x0003de0b) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0003de0b) bg_button_pane_cp11

0xf10f,	// (0x0003de1e) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0003de1e) graphic2_pages_pane_g1

0xf12a,	// (0x0003de39) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0003de39) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003eaad) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003eaad) graphic2_pages_pane_g

0xf142,	// (0x0003de51) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0003de51) graphic2_pages_pane_t1

0xf15a,	// (0x0003de69) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0003de69) cell_graphic2_control_pane

0xf18c,	// (0x0003de9b) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0003de9b) cell_graphic2_pane_g1

0xe192,	// (0x0003cea1) cell_graphic2_pane_g2_ParamLimits

0xe192,	// (0x0003cea1) cell_graphic2_pane_g2

0xea0d,	// (0x0003d71c) cell_graphic2_pane_g3_ParamLimits

0xea0d,	// (0x0003d71c) cell_graphic2_pane_g3

0xe19f,	// (0x0003ceae) cell_graphic2_pane_g4_ParamLimits

0xe19f,	// (0x0003ceae) cell_graphic2_pane_g4

0xf199,	// (0x0003dea8) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0003dea8) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003eab2) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003eab2) cell_graphic2_pane_g

0xf1b9,	// (0x0003dec8) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0003dec8) cell_graphic2_pane_t1

0x629c,	// (0x00034fab) grid_highlight_pane_cp11_ParamLimits

0x629c,	// (0x00034fab) grid_highlight_pane_cp11

0x3ada,	// (0x000327e9) bg_button_pane_cp05

0xf202,	// (0x0003df11) cell_graphic2_control_pane_g1

0x7b9c,	// (0x000368ab) bg_touch_area_indi_pane_g1

0x9dba,	// (0x00038ac9) aid_cmod_rocker_key_size

0x9dc4,	// (0x00038ad3) aid_cmode_itu_key_size

0x9dce,	// (0x00038add) main_cmode_video_pane

0x9dd8,	// (0x00038ae7) main_comp_mode_itu_pane

0x9de4,	// (0x00038af3) main_comp_mode_rocker_pane

0x9df0,	// (0x00038aff) cell_cmode_rocker_pane_ParamLimits

0x9df0,	// (0x00038aff) cell_cmode_rocker_pane

0x9e02,	// (0x00038b11) cell_cmode_itu_pane_ParamLimits

0x9e02,	// (0x00038b11) cell_cmode_itu_pane

0x40c0,	// (0x00032dcf) bg_button_pane_cp06_ParamLimits

0x40c0,	// (0x00032dcf) bg_button_pane_cp06

0x7e1a,	// (0x00036b29) cell_cmode_rocker_pane_g1_ParamLimits

0x7e1a,	// (0x00036b29) cell_cmode_rocker_pane_g1

0x932d,	// (0x0003803c) cell_cmode_rocker_pane_g2_ParamLimits

0x932d,	// (0x0003803c) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003eac2) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003eac2) cell_cmode_rocker_pane_g

0x375d,	// (0x0003246c) bg_button_pane_cp07

0x9e17,	// (0x00038b26) cell_cmode_itu_pane_g1

0x9e20,	// (0x00038b2f) cell_cmode_itu_pane_t1

0x9e2e,	// (0x00038b3d) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003eac7) cell_cmode_itu_pane_t

0x9550,	// (0x0003825f) aid_touch_ctrl_left

0x9558,	// (0x00038267) aid_touch_ctrl_right

0x375d,	// (0x0003246c) compa_mode_pane

0xf226,	// (0x0003df35) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0003df3f) aid_cmode_itu_key_size_cp

0x9e50,	// (0x00038b5f) compa_mode_pane_g1

0x9e58,	// (0x00038b67) compa_mode_pane_g2

0x9e60,	// (0x00038b6f) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003eacc) compa_mode_pane_g

0xf23a,	// (0x0003df49) main_comp_mode_itu_pane_cp

0xf242,	// (0x0003df51) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0003df59) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0003df59) cell_cmode_itu_pane_cp

0xf25f,	// (0x0003df6e) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0003df6e) cell_cmode_rocker_pane_cp

0x40c0,	// (0x00032dcf) bg_button_pane_cp06_cp_ParamLimits

0x40c0,	// (0x00032dcf) bg_button_pane_cp06_cp

0x7e1a,	// (0x00036b29) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7e1a,	// (0x00036b29) cell_cmode_rocker_pane_g1_cp

0x7b9c,	// (0x000368ab) cell_cmode_rocker_pane_g2_cp

0x375d,	// (0x0003246c) bg_button_pane_cp07_cp

0xf271,	// (0x0003df80) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0003df89) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0003df89) cell_cmode_itu_pane_t2_cp

0xdf07,	// (0x0003cc16) settings_code_pane_cp2

0x3851,	// (0x00032560) bg_popup_window_pane_cp3_ParamLimits

0x3cb4,	// (0x000329c3) heading_pane_cp3_ParamLimits

0x3cc0,	// (0x000329cf) listscroll_popup_graphic_pane_ParamLimits

0x1d44,	// (0x00030a53) fep_hwr_aid_pane_ParamLimits

0x21bb,	// (0x00030eca) aid_touch_sctrl_top_ParamLimits

0x21d6,	// (0x00030ee5) sctrl_sk_top_pane_g1_ParamLimits

0x1f9b,	// (0x00030caa) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003ea02) sctrl_sk_top_pane_g_ParamLimits

0x21e3,	// (0x00030ef2) sctrl_sk_top_pane_t1_ParamLimits

0x21bb,	// (0x00030eca) aid_touch_sctrl_bottom_ParamLimits

0x21e3,	// (0x00030ef2) sctrl_sk_bottom_pane_t1_ParamLimits

0x9499,	// (0x000381a8) aid_area_touch_clock

0xcd09,	// (0x0003ba18) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd09,	// (0x0003ba18) aid_vkb2_area_top_pane_cell

0xcdb4,	// (0x0003bac3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcdb4,	// (0x0003bac3) aid_vkb2_area_bottom_pane_cell

0x9a08,	// (0x00038717) popup_char_count_window

0x9ead,	// (0x00038bbc) popup_char_count_window_g1

0x9eb6,	// (0x00038bc5) popup_char_count_window_g2

0x9ebf,	// (0x00038bce) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003ead3) popup_char_count_window_g

0x9ec8,	// (0x00038bd7) popup_char_count_window_t1

0x2292,	// (0x00030fa1) popup_fep_char_preview_window_ParamLimits

0x2292,	// (0x00030fa1) popup_fep_char_preview_window

0xcd29,	// (0x0003ba38) vkb2_top_candi_pane_ParamLimits

0xcd29,	// (0x0003ba38) vkb2_top_candi_pane

0xf288,	// (0x0003df97) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0003df97) cell_vkb2_top_candi_pane

0x27fa,	// (0x00031509) bg_popup_fep_char_preview_window_ParamLimits

0x27fa,	// (0x00031509) bg_popup_fep_char_preview_window

0x2808,	// (0x00031517) popup_fep_char_preview_window_t1_ParamLimits

0x2808,	// (0x00031517) popup_fep_char_preview_window_t1

0x9f23,	// (0x00038c32) bg_popup_fep_char_preview_window_g1

0x9f2b,	// (0x00038c3a) bg_popup_fep_char_preview_window_g2

0x9f33,	// (0x00038c42) bg_popup_fep_char_preview_window_g3

0x9f3b,	// (0x00038c4a) bg_popup_fep_char_preview_window_g4

0x9f43,	// (0x00038c52) bg_popup_fep_char_preview_window_g5

0x2842,	// (0x00031551) bg_popup_fep_char_preview_window_g6

0x9f4b,	// (0x00038c5a) bg_popup_fep_char_preview_window_g7

0x9f53,	// (0x00038c62) bg_popup_fep_char_preview_window_g8

0x9f5b,	// (0x00038c6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003eada) bg_popup_fep_char_preview_window_g

0x1f9b,	// (0x00030caa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f9b,	// (0x00030caa) cell_vkb2_top_candi_pane_g1

0x1fa9,	// (0x00030cb8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1fa9,	// (0x00030cb8) cell_vkb2_top_candi_pane_g2

0x9a50,	// (0x0003875f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a50,	// (0x0003875f) cell_vkb2_top_candi_pane_g3

0x284a,	// (0x00031559) cell_vkb2_top_candi_pane_g4_ParamLimits

0x284a,	// (0x00031559) cell_vkb2_top_candi_pane_g4

0x82e5,	// (0x00036ff4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x82e5,	// (0x00036ff4) cell_vkb2_top_candi_pane_g5

0x286b,	// (0x0003157a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x286b,	// (0x0003157a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003eaed) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003eaed) cell_vkb2_top_candi_pane_g

0x2879,	// (0x00031588) cell_vkb2_top_candi_pane_t1

0x1ba4,	// (0x000308b3) aid_size_touch_slider_mark_ParamLimits

0x1ba4,	// (0x000308b3) aid_size_touch_slider_mark

0xefa5,	// (0x0003dcb4) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0003dcb4) grid_graphic2_catg_pane

0xf061,	// (0x0003dd70) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0003dd70) popup_grid_graphic2_window_t1

0xf077,	// (0x0003dd86) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0003dd86) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003eaa8) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003eaa8) popup_grid_graphic2_window_t

0x3ada,	// (0x000327e9) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0003df11) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0003dffd) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0003dffd) cell_graphic2_catg_pane

0x375d,	// (0x0003246c) bg_button_pane_cp12

0xf300,	// (0x0003e00f) cell_graphic2_catg_pane_g1

0x9465,	// (0x00038174) cell_tb_ext_pane_t1_ParamLimits

0x2634,	// (0x00031343) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2634,	// (0x00031343) vkb2_top_cell_right_narrow_pane

0x264c,	// (0x0003135b) vkb2_top_cell_right_wide_pane_ParamLimits

0x264c,	// (0x0003135b) vkb2_top_cell_right_wide_pane

0x1d36,	// (0x00030a45) bg_vkb2_func_pane_ParamLimits

0x1d36,	// (0x00030a45) bg_vkb2_func_pane

0x26bd,	// (0x000313cc) vkb2_top_cell_left_pane_g1_ParamLimits

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp03

0x271b,	// (0x0003142a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x55b7,	// (0x000342c6) bg_vkb2_func_pane_g1

0x55af,	// (0x000342be) bg_vkb2_func_pane_g2

0x55c7,	// (0x000342d6) bg_vkb2_func_pane_g3

0x55bf,	// (0x000342ce) bg_vkb2_func_pane_g4

0x55cf,	// (0x000342de) bg_vkb2_func_pane_g5

0x55d7,	// (0x000342e6) bg_vkb2_func_pane_g6

0x55df,	// (0x000342ee) bg_vkb2_func_pane_g7

0x55e7,	// (0x000342f6) bg_vkb2_func_pane_g8

0x55a7,	// (0x000342b6) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003eafa) bg_vkb2_func_pane_g

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp01

0x26bd,	// (0x000313cc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x26bd,	// (0x000313cc) vkb2_top_cell_right_wide_pane_g1

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1d36,	// (0x00030a45) bg_vkb2_fuc_pane_cp02

0x271b,	// (0x0003142a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x271b,	// (0x0003142a) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0003d51e) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0003d51e) aid_touch_area_decrease

0xe843,	// (0x0003d552) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0003d552) aid_touch_area_increase

0xe86b,	// (0x0003d57a) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0003d57a) aid_touch_area_mute

0xe89b,	// (0x0003d5aa) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0003d5aa) aid_touch_area_slider

0xe8db,	// (0x0003d5ea) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0003d5ea) popup_slider_window_g4

0xe903,	// (0x0003d612) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0003d612) popup_slider_window_g5

0xe937,	// (0x0003d646) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0003d646) popup_slider_window_g6

0x9243,	// (0x00037f52) popup_slider_window_t2_ParamLimits

0x9243,	// (0x00037f52) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003e9f6) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003e9f6) popup_slider_window_t

0xe953,	// (0x0003d662) slider_pane_ParamLimits

0xe953,	// (0x0003d662) slider_pane

0x9f7e,	// (0x00038c8d) slider_pane_g1_ParamLimits

0x9f7e,	// (0x00038c8d) slider_pane_g1

0x9f92,	// (0x00038ca1) slider_pane_g2_ParamLimits

0x9f92,	// (0x00038ca1) slider_pane_g2

0x9fa8,	// (0x00038cb7) slider_pane_g3_ParamLimits

0x9fa8,	// (0x00038cb7) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003eb0d) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003eb0d) slider_pane_g

0xc751,	// (0x0003b460) popup_tb_float_extension_window_ParamLimits

0xc751,	// (0x0003b460) popup_tb_float_extension_window

0x9fd4,	// (0x00038ce3) aid_size_cell_tb_float_ext

0x375d,	// (0x0003246c) bg_popup_sub_window_cp28

0x9fe0,	// (0x00038cef) grid_tb_float_ext_pane

0x9fea,	// (0x00038cf9) cell_tb_float_ext_pane_ParamLimits

0x9fea,	// (0x00038cf9) cell_tb_float_ext_pane

0xa004,	// (0x00038d13) cell_tb_float_ext_pane_g1

0xa00d,	// (0x00038d1c) grid_highlight_pane_cp12

0xc929,	// (0x0003b638) cell_last_hwr_side_pane_ParamLimits

0xc929,	// (0x0003b638) cell_last_hwr_side_pane

0x7b9c,	// (0x000368ab) cell_last_hwr_side_pane_g1

0xa016,	// (0x00038d25) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003eb16) cell_last_hwr_side_pane_g

0xce90,	// (0x0003bb9f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce90,	// (0x0003bb9f) vkb2_area_bottom_space_btn_pane

0x1f9b,	// (0x00030caa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9ade,	// (0x000387ed) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2879,	// (0x00031588) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2898,	// (0x000315a7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2898,	// (0x000315a7) vkb2_area_bottom_space_btn_pane_g1

0x28d2,	// (0x000315e1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x28d2,	// (0x000315e1) vkb2_area_bottom_space_btn_pane_g2

0x2908,	// (0x00031617) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2908,	// (0x00031617) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003eb1b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003eb1b) vkb2_area_bottom_space_btn_pane_g

0x1df9,	// (0x00030b08) cel_fep_hwr_func_pane_ParamLimits

0x1df9,	// (0x00030b08) cel_fep_hwr_func_pane

0xc8fe,	// (0x0003b60d) cell_hwr_side_button_pane_ParamLimits

0xc8fe,	// (0x0003b60d) cell_hwr_side_button_pane

0x9499,	// (0x000381a8) aid_area_touch_clock_ParamLimits

0x3ada,	// (0x000327e9) bg_uniindi_top_pane_ParamLimits

0x94ab,	// (0x000381ba) uniindi_top_pane_g1_ParamLimits

0x94c1,	// (0x000381d0) uniindi_top_pane_g2_ParamLimits

0x94cd,	// (0x000381dc) uniindi_top_pane_g3_ParamLimits

0x94de,	// (0x000381ed) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003ea2e) uniindi_top_pane_g_ParamLimits

0x94eb,	// (0x000381fa) uniindi_top_pane_t1_ParamLimits

0x3ada,	// (0x000327e9) bg_vkb2_func_pane_cp01_ParamLimits

0x3ada,	// (0x000327e9) bg_vkb2_func_pane_cp01

0xa01f,	// (0x00038d2e) cel_fep_hwr_func_pane_g1_ParamLimits

0xa01f,	// (0x00038d2e) cel_fep_hwr_func_pane_g1

0x3ada,	// (0x000327e9) bg_vkb2_func_pane_cp02_ParamLimits

0x3ada,	// (0x000327e9) bg_vkb2_func_pane_cp02

0xa01f,	// (0x00038d2e) cell_hwr_side_button_pane_g1_ParamLimits

0xa01f,	// (0x00038d2e) cell_hwr_side_button_pane_g1

0x5428,	// (0x00034137) status_pane_g4_ParamLimits

0x5428,	// (0x00034137) status_pane_g4

0x5442,	// (0x00034151) status_pane_t1

0x78f0,	// (0x000365ff) form2_midp_gauge_slider_cont_pane

0x78f8,	// (0x00036607) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1fe,	// (0x0003cf0d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe210,	// (0x0003cf1f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadf,	// (0x0003e7ee) form2_midp_gauge_slider_pane_t_ParamLimits

0x792e,	// (0x0003663d) form2_midp_slider_pane_ParamLimits

0x2252,	// (0x00030f61) aid_size_cell_func_vkb2_ParamLimits

0x2252,	// (0x00030f61) aid_size_cell_func_vkb2

0x9fc0,	// (0x00038ccf) slider_pane_g4_ParamLimits

0x9fc0,	// (0x00038ccf) slider_pane_g4

0xcef1,	// (0x0003bc00) form2_midp_gauge_slider_pane_t2_cp01

0xceff,	// (0x0003bc0e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xceff,	// (0x0003bc0e) form2_midp_gauge_slider_pane_t3_cp01

0x297d,	// (0x0003168c) form2_midp_slider_pane_cp01

0x375d,	// (0x0003246c) navi_smil_pane

0xa058,	// (0x00038d67) navi_smil_pane_g1

0xa060,	// (0x00038d6f) navi_smil_pane_t1

0xa02d,	// (0x00038d3c) form2_midp_slider_pane_g1

0xa036,	// (0x00038d45) form2_midp_slider_pane_g2

0xa03e,	// (0x00038d4d) form2_midp_slider_pane_g3

0xa02d,	// (0x00038d3c) form2_midp_slider_pane_g4

0xf309,	// (0x0003e018) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003eb24) form2_midp_slider_pane_g

0x2942,	// (0x00031651) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2942,	// (0x00031651) vkb2_area_bottom_space_btn_pane_g4

0xd8eb,	// (0x0003c5fa) lc0_navi_pane_ParamLimits

0xd8eb,	// (0x0003c5fa) lc0_navi_pane

0xd955,	// (0x0003c664) lc0_stat_indi_pane_ParamLimits

0xd955,	// (0x0003c664) lc0_stat_indi_pane

0xd96a,	// (0x0003c679) ls0_title_pane_ParamLimits

0xd96a,	// (0x0003c679) ls0_title_pane

0x40c0,	// (0x00032dcf) bg_popup_sub_pane_cp14_ParamLimits

0x9480,	// (0x0003818f) list_uniindi_pane_ParamLimits

0x948c,	// (0x0003819b) uniindi_top_pane_ParamLimits

0x9528,	// (0x00038237) list_single_uniindi_pane_g1_ParamLimits

0x953b,	// (0x0003824a) list_single_uniindi_pane_t1_ParamLimits

0xcf1c,	// (0x0003bc2b) lc0_stat_clock_pane_ParamLimits

0xcf1c,	// (0x0003bc2b) lc0_stat_clock_pane

0xf314,	// (0x0003e023) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0003e023) lc0_stat_indi_pane_g1

0xf321,	// (0x0003e030) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0003e030) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003eb2f) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003eb2f) lc0_stat_indi_pane_g

0xcf29,	// (0x0003bc38) lc0_uni_indicator_pane_ParamLimits

0xcf29,	// (0x0003bc38) lc0_uni_indicator_pane

0xf32e,	// (0x0003e03d) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0003e03d) ls0_title_pane_g1

0xf342,	// (0x0003e051) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0003e051) ls0_title_pane_t1

0xcf36,	// (0x0003bc45) lc0_uni_indicator_pane_g1_ParamLimits

0xcf36,	// (0x0003bc45) lc0_uni_indicator_pane_g1

0xa0d2,	// (0x00038de1) lc0_stat_clock_pane_t1

0x033e,	// (0x0002f04d) main_ai5_pane

0xa0e0,	// (0x00038def) ai5_sk_pane_ParamLimits

0xa0e0,	// (0x00038def) ai5_sk_pane

0xf370,	// (0x0003e07f) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0003e07f) cell_ai5_widget_pane

0xa19f,	// (0x00038eae) aid_size_cell_widget_grid

0xa1b5,	// (0x00038ec4) bg_ai5_widget_pane_ParamLimits

0xa1b5,	// (0x00038ec4) bg_ai5_widget_pane

0xa229,	// (0x00038f38) cell_ai5_widget_pane_g2

0xa239,	// (0x00038f48) cell_ai5_widget_pane_g3

0xa250,	// (0x00038f5f) cell_ai5_widget_pane_g4

0xa25c,	// (0x00038f6b) cell_ai5_widget_pane_g5

0xa268,	// (0x00038f77) cell_ai5_widget_pane_g6

0xa274,	// (0x00038f83) cell_ai5_widget_pane_g7

0xa2bc,	// (0x00038fcb) cell_ai5_widget_pane_t1_ParamLimits

0xa2bc,	// (0x00038fcb) cell_ai5_widget_pane_t1

0xa2d9,	// (0x00038fe8) cell_ai5_widget_pane_t2_ParamLimits

0xa2d9,	// (0x00038fe8) cell_ai5_widget_pane_t2

0xa2f1,	// (0x00039000) cell_ai5_widget_pane_t3_ParamLimits

0xa2f1,	// (0x00039000) cell_ai5_widget_pane_t3

0xa309,	// (0x00039018) cell_ai5_widget_pane_t4_ParamLimits

0xa309,	// (0x00039018) cell_ai5_widget_pane_t4

0xa326,	// (0x00039035) cell_ai5_widget_pane_t5_ParamLimits

0xa326,	// (0x00039035) cell_ai5_widget_pane_t5

0xa345,	// (0x00039054) cell_ai5_widget_pane_t6_ParamLimits

0xa345,	// (0x00039054) cell_ai5_widget_pane_t6

0xa357,	// (0x00039066) cell_ai5_widget_pane_t7_ParamLimits

0xa357,	// (0x00039066) cell_ai5_widget_pane_t7

0xa370,	// (0x0003907f) cell_ai5_widget_pane_t8_ParamLimits

0xa370,	// (0x0003907f) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003eb49) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003eb49) cell_ai5_widget_pane_t

0xa3c4,	// (0x000390d3) grid_ai5_widget_pane

0x40c0,	// (0x00032dcf) highlight_cell_ai5_widget_pane_ParamLimits

0x40c0,	// (0x00032dcf) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0003e0e5) ai5_sk_left_pane

0xf3e0,	// (0x0003e0ef) ai5_sk_middle_pane

0xf3ea,	// (0x0003e0f9) ai5_sk_right_pane

0xa3f9,	// (0x00039108) bg_ai5_widget_pane_g1_ParamLimits

0xa3f9,	// (0x00039108) bg_ai5_widget_pane_g1

0xa405,	// (0x00039114) bg_ai5_widget_pane_g2_ParamLimits

0xa405,	// (0x00039114) bg_ai5_widget_pane_g2

0xa411,	// (0x00039120) bg_ai5_widget_pane_g3_ParamLimits

0xa411,	// (0x00039120) bg_ai5_widget_pane_g3

0xa41d,	// (0x0003912c) bg_ai5_widget_pane_g4_ParamLimits

0xa41d,	// (0x0003912c) bg_ai5_widget_pane_g4

0xa429,	// (0x00039138) bg_ai5_widget_pane_g5_ParamLimits

0xa429,	// (0x00039138) bg_ai5_widget_pane_g5

0xa435,	// (0x00039144) bg_ai5_widget_pane_g6_ParamLimits

0xa435,	// (0x00039144) bg_ai5_widget_pane_g6

0xa441,	// (0x00039150) bg_ai5_widget_pane_g7_ParamLimits

0xa441,	// (0x00039150) bg_ai5_widget_pane_g7

0xa44d,	// (0x0003915c) bg_ai5_widget_pane_g8_ParamLimits

0xa44d,	// (0x0003915c) bg_ai5_widget_pane_g8

0xa459,	// (0x00039168) bg_ai5_widget_pane_g9_ParamLimits

0xa459,	// (0x00039168) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003eb5e) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003eb5e) bg_ai5_widget_pane_g

0xa48b,	// (0x0003919a) cell_shortcut_ai5_widget_pane_ParamLimits

0xa48b,	// (0x0003919a) cell_shortcut_ai5_widget_pane

0x4d53,	// (0x00033a62) bg_cell_shortcut_ai5_widget_pane

0xa49c,	// (0x000391ab) cell_grid_ai5_widget_pane_g1

0x4d53,	// (0x00033a62) highlight_cell_shortcut_ai5_widget_pane

0x55b7,	// (0x000342c6) ai5_sk_left_pane_g1

0xa4a5,	// (0x000391b4) ai5_sk_left_pane_g2

0xa4ad,	// (0x000391bc) ai5_sk_left_pane_g3

0xa4b5,	// (0x000391c4) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003eb71) ai5_sk_left_pane_g

0xa4bd,	// (0x000391cc) ai5_sk_left_pane_t1

0x55af,	// (0x000342be) ai5_sk_right_pane_g1

0xa4cb,	// (0x000391da) ai5_sk_right_pane_g2

0xa4d3,	// (0x000391e2) ai5_sk_right_pane_g3

0xa4db,	// (0x000391ea) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003eb7a) ai5_sk_right_pane_g

0xa4e3,	// (0x000391f2) ai5_sk_right_pane_t1

0x55af,	// (0x000342be) ai5_sk_middle_pane_g1

0x55b7,	// (0x000342c6) ai5_sk_middle_pane_g2

0x55cf,	// (0x000342de) ai5_sk_middle_pane_g3

0xa4d3,	// (0x000391e2) ai5_sk_middle_pane_g4

0xa4ad,	// (0x000391bc) ai5_sk_middle_pane_g5

0xa4f1,	// (0x00039200) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0003e103) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003eb83) ai5_sk_middle_pane_g

0xd7d7,	// (0x0003c4e6) aid_touch_area_size_lc0_ParamLimits

0xd7d7,	// (0x0003c4e6) aid_touch_area_size_lc0

0x1fca,	// (0x00030cd9) cell_hwr_candidate_pane_t1_ParamLimits

0x50ff,	// (0x00033e0e) aid_touch_navi_pane

0xda63,	// (0x0003c772) status_dt_navi_pane_ParamLimits

0xda63,	// (0x0003c772) status_dt_navi_pane

0xda7b,	// (0x0003c78a) status_dt_sta_pane_ParamLimits

0xda7b,	// (0x0003c78a) status_dt_sta_pane

0xf3fc,	// (0x0003e10b) dt_sta_controll_pane

0xf409,	// (0x0003e118) dt_sta_indi_pane

0xf416,	// (0x0003e125) dt_sta_title_pane

0x3ada,	// (0x000327e9) bg_dt_sta_indi_pane_ParamLimits

0x3ada,	// (0x000327e9) bg_dt_sta_indi_pane

0xf428,	// (0x0003e137) dt_sta_battery_pane

0xf430,	// (0x0003e13f) dt_sta_indi_pane_g1

0xa543,	// (0x00039252) dt_sta_indi_pane_g2

0xa54c,	// (0x0003925b) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003eb92) dt_sta_indi_pane_g

0xa555,	// (0x00039264) dt_sta_signal_pane

0x40c0,	// (0x00032dcf) bg_dt_sta_title_pane_ParamLimits

0x40c0,	// (0x00032dcf) bg_dt_sta_title_pane

0xa55e,	// (0x0003926d) dt_sta_title_pane_g1

0xa566,	// (0x00039275) dt_sta_title_pane_t1_ParamLimits

0xa566,	// (0x00039275) dt_sta_title_pane_t1

0x375d,	// (0x0003246c) bg_dt_sta_control_pane

0xf439,	// (0x0003e148) dt_sta_controll_pane_g1

0xa584,	// (0x00039293) bg_dt_sta_title_pane_g1

0xa58d,	// (0x0003929c) bg_dt_sta_title_pane_g2

0xa596,	// (0x000392a5) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003eb99) bg_dt_sta_title_pane_g

0x7b9c,	// (0x000368ab) bg_dt_sta_indi_pane_g1

0xa59f,	// (0x000392ae) dt_sta_signal_pane_g1

0xa5a7,	// (0x000392b6) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003eba0) dt_sta_signal_pane_g

0xa5af,	// (0x000392be) dt_sta_battery_pane_g1

0xa5b8,	// (0x000392c7) dt_sta_battery_pane_t1

0x7b9c,	// (0x000368ab) bg_dt_sta_control_pane_g1

0x4852,	// (0x00033561) fep_china_uni_eep_pane

0x485a,	// (0x00033569) fep_china_uni_entry_pane_ParamLimits

0x486a,	// (0x00033579) popup_fep_china_uni_window_g1_ParamLimits

0x487a,	// (0x00033589) popup_fep_china_uni_window_g2_ParamLimits

0x487a,	// (0x00033589) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003e42c) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003e42c) popup_fep_china_uni_window_g

0xa5c7,	// (0x000392d6) fep_china_uni_eep_pane_g1

0xa5cf,	// (0x000392de) fep_china_uni_eep_pane_t1

0xa04f,	// (0x00038d5e) aid_touch_area_size_smil_player

0x524f,	// (0x00033f5e) lc0_clock_pane

0x5436,	// (0x00034145) status_pane_g5_ParamLimits

0x5436,	// (0x00034145) status_pane_g5

0xc2d3,	// (0x0003afe2) popup_keymap_window

0x53f4,	// (0x00034103) status_icon_pane

0xa239,	// (0x00038f48) cell_ai5_widget_pane_g3_ParamLimits

0xa250,	// (0x00038f5f) cell_ai5_widget_pane_g4_ParamLimits

0xa25c,	// (0x00038f6b) cell_ai5_widget_pane_g5_ParamLimits

0xa280,	// (0x00038f8f) cell_ai5_widget_pane_g8_ParamLimits

0xa280,	// (0x00038f8f) cell_ai5_widget_pane_g8

0xa294,	// (0x00038fa3) cell_ai5_widget_pane_g9_ParamLimits

0xa294,	// (0x00038fa3) cell_ai5_widget_pane_g9

0xa2a8,	// (0x00038fb7) cell_ai5_widget_pane_g10_ParamLimits

0xa2a8,	// (0x00038fb7) cell_ai5_widget_pane_g10

0xa5de,	// (0x000392ed) status_icon_pane_g1

0x375d,	// (0x0003246c) bg_popup_sub_pane_cp13

0xa5e6,	// (0x000392f5) popup_keymap_window_t1

0xd765,	// (0x0003c474) control_pane_g6_ParamLimits

0xd765,	// (0x0003c474) control_pane_g6

0xd772,	// (0x0003c481) control_pane_g7_ParamLimits

0xd772,	// (0x0003c481) control_pane_g7

0xd77f,	// (0x0003c48e) control_pane_g8_ParamLimits

0xd77f,	// (0x0003c48e) control_pane_g8

0xf3fc,	// (0x0003e10b) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0003e118) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0003e125) dt_sta_title_pane_ParamLimits

0x3ff8,	// (0x00032d07) aid_size_touch_scroll_bar_cale

0x0417,	// (0x0002f126) popup_discreet_window_ParamLimits

0x0417,	// (0x0002f126) popup_discreet_window

0xb8c6,	// (0x0003a5d5) popup_sk_window

0x5c1c,	// (0x0003492b) bg_popup_sub_pane_cp28_ParamLimits

0x5c1c,	// (0x0003492b) bg_popup_sub_pane_cp28

0xa5f4,	// (0x00039303) popup_discreet_window_g1_ParamLimits

0xa5f4,	// (0x00039303) popup_discreet_window_g1

0xa614,	// (0x00039323) popup_discreet_window_t1_ParamLimits

0xa614,	// (0x00039323) popup_discreet_window_t1

0xa632,	// (0x00039341) popup_discreet_window_t2_ParamLimits

0xa632,	// (0x00039341) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003eba5) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003eba5) popup_discreet_window_t

0x29b4,	// (0x000316c3) popup_sk_window_g1

0x29be,	// (0x000316cd) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003ebac) popup_sk_window_g

0x29c6,	// (0x000316d5) popup_sk_window_t1

0x29d4,	// (0x000316e3) popup_sk_window_t1_copy1

0xa229,	// (0x00038f38) cell_ai5_widget_pane_g2_ParamLimits

0xa382,	// (0x00039091) cell_ai5_widget_pane_t9_ParamLimits

0xa382,	// (0x00039091) cell_ai5_widget_pane_t9

0x375d,	// (0x0003246c) main_fep_fshwr2_pane

0xcf5d,	// (0x0003bc6c) aid_fshwr2_btn_pane

0xcf6e,	// (0x0003bc7d) aid_fshwr2_syb_pane

0xcf7f,	// (0x0003bc8e) aid_fshwr2_txt_pane

0xcf8b,	// (0x0003bc9a) fshwr2_func_candi_pane

0xcfaa,	// (0x0003bcb9) fshwr2_hwr_syb_pane

0xcfc5,	// (0x0003bcd4) fshwr2_icf_pane

0x033e,	// (0x0002f04d) fshwr2_icf_bg_pane

0x2a54,	// (0x00031763) fshwr2_icf_pane_t1_ParamLimits

0x2a54,	// (0x00031763) fshwr2_icf_pane_t1

0x4740,	// (0x0003344f) fshwr2_func_candi_pane_g1

0xf442,	// (0x0003e151) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0003e151) fshwr2_func_candi_row_pane

0xcff1,	// (0x0003bd00) cell_fshwr2_syb_pane_ParamLimits

0xcff1,	// (0x0003bd00) cell_fshwr2_syb_pane

0x1f9b,	// (0x00030caa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f9b,	// (0x00030caa) fshwr2_hwr_syb_pane_g1

0x033e,	// (0x0002f04d) bg_popup_call_pane_cp01

0xd007,	// (0x0003bd16) fshwr2_func_candi_cell_pane_ParamLimits

0xd007,	// (0x0003bd16) fshwr2_func_candi_cell_pane

0xf465,	// (0x0003e174) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0003e174) fshwr2_func_candi_cell_bg_pane

0xd052,	// (0x0003bd61) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd052,	// (0x0003bd61) fshwr2_func_candi_cell_pane_g1

0xd089,	// (0x0003bd98) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd089,	// (0x0003bd98) fshwr2_func_candi_cell_pane_t1

0x033e,	// (0x0002f04d) bg_button_pane_cp08

0xa6a0,	// (0x000393af) cell_fshwr2_syb_bg_pane

0xd0a4,	// (0x0003bdb3) cell_fshwr2_syb_bg_pane_g1

0xd0ac,	// (0x0003bdbb) cell_fshwr2_syb_bg_pane_t1

0x40c0,	// (0x00032dcf) main_tmo_pane

0xdd39,	// (0x0003ca48) uni_indicator_pane_g1_ParamLimits

0xdd4f,	// (0x0003ca5e) uni_indicator_pane_g2_ParamLimits

0xdd65,	// (0x0003ca74) uni_indicator_pane_g3_ParamLimits

0x6776,	// (0x00035485) uni_indicator_pane_g4_ParamLimits

0x6776,	// (0x00035485) uni_indicator_pane_g4

0x678a,	// (0x00035499) uni_indicator_pane_g5_ParamLimits

0x678a,	// (0x00035499) uni_indicator_pane_g5

0x678a,	// (0x00035499) uni_indicator_pane_g6_ParamLimits

0x678a,	// (0x00035499) uni_indicator_pane_g6

0xf91c,	// (0x0003e62b) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0003d4fa) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0003d4fa) popup_tmo_note_window

0x2234,	// (0x00030f43) fshwr2_bg_pane

0xd07a,	// (0x0003bd89) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd07a,	// (0x0003bd89) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003ebb1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003ebb1) fshwr2_func_candi_cell_pane_g

0x1f83,	// (0x00030c92) bg_popup_window_pane_cp01

0x2b1f,	// (0x0003182e) bg_popup_window_pane_g1_cp01

0xa6a8,	// (0x000393b7) bg_popup_window_pane_cp22_ParamLimits

0xa6a8,	// (0x000393b7) bg_popup_window_pane_cp22

0xa6b6,	// (0x000393c5) listscroll_tmo_link_pane_ParamLimits

0xa6b6,	// (0x000393c5) listscroll_tmo_link_pane

0xa6f6,	// (0x00039405) popup_tmo_note_window_g1_ParamLimits

0xa6f6,	// (0x00039405) popup_tmo_note_window_g1

0xa703,	// (0x00039412) tmo_note_info_pane_ParamLimits

0xa703,	// (0x00039412) tmo_note_info_pane

0xf471,	// (0x0003e180) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0003e180) list_tmo_note_info_pane_g1

0xa734,	// (0x00039443) list_tmo_note_info_pane_g2_ParamLimits

0xa734,	// (0x00039443) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003ebb6) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003ebb6) list_tmo_note_info_pane_g

0xa750,	// (0x0003945f) list_tmo_note_info_text_pane_ParamLimits

0xa750,	// (0x0003945f) list_tmo_note_info_text_pane

0xa7d1,	// (0x000394e0) list_tmo_link_pane

0xa7de,	// (0x000394ed) scroll_pane_cp20

0xa7eb,	// (0x000394fa) list_single_tmo_link_pane_ParamLimits

0xa7eb,	// (0x000394fa) list_single_tmo_link_pane

0xa7fb,	// (0x0003950a) list_single_tmo_link_pane_t1

0xa809,	// (0x00039518) list_tmo_note_info_text_pane_t1_ParamLimits

0xa809,	// (0x00039518) list_tmo_note_info_text_pane_t1

0xd42d,	// (0x0003c13c) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd42d,	// (0x0003c13c) aid_size_touch_scroll_bar_cp01

0xbe31,	// (0x0003ab40) aid_size_touch_slider_marker

0xb8b6,	// (0x0003a5c5) popup_settings_window_ParamLimits

0xb8b6,	// (0x0003a5c5) popup_settings_window

0x2dd4,	// (0x00031ae3) popup_candi_list_indi_window

0x50ff,	// (0x00033e0e) aid_touch_navi_pane_ParamLimits

0x218f,	// (0x00030e9e) rs_clock_indi_pane

0x2198,	// (0x00030ea7) sctrl_sk_bottom_pane_ParamLimits

0x21a9,	// (0x00030eb8) sctrl_sk_top_pane_ParamLimits

0x22ac,	// (0x00030fbb) popup_fep_tooltip_window

0xa19f,	// (0x00038eae) aid_size_cell_widget_grid_ParamLimits

0xa214,	// (0x00038f23) cell_ai5_widget_pane_g1_ParamLimits

0xa214,	// (0x00038f23) cell_ai5_widget_pane_g1

0xa268,	// (0x00038f77) cell_ai5_widget_pane_g6_ParamLimits

0xa274,	// (0x00038f83) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003eb34) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003eb34) cell_ai5_widget_pane_g

0xa3a6,	// (0x000390b5) cell_ai5_widget_pane_t10_ParamLimits

0xa3a6,	// (0x000390b5) cell_ai5_widget_pane_t10

0xa3c4,	// (0x000390d3) grid_ai5_widget_pane_ParamLimits

0xa465,	// (0x00039174) cell_contacts_ai5_widget_pane_ParamLimits

0xa465,	// (0x00039174) cell_contacts_ai5_widget_pane

0xa647,	// (0x00039356) popup_discreet_window_t3_ParamLimits

0xa647,	// (0x00039356) popup_discreet_window_t3

0xcfdd,	// (0x0003bcec) popup_fshwr2_char_preview_window_ParamLimits

0xcfdd,	// (0x0003bcec) popup_fshwr2_char_preview_window

0xf488,	// (0x0003e197) tmo_note_info_pane_t1

0xf49d,	// (0x0003e1ac) tmo_note_info_pane_t2

0xf4b4,	// (0x0003e1c3) tmo_note_info_pane_t3

0xa7ad,	// (0x000394bc) tmo_note_info_pane_t4

0xa7bf,	// (0x000394ce) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003ebbb) tmo_note_info_pane_t

0xa7d1,	// (0x000394e0) list_tmo_link_pane_ParamLimits

0xa7de,	// (0x000394ed) scroll_pane_cp20_ParamLimits

0x033e,	// (0x0002f04d) bg_popup_fep_char_preview_window_cp01

0xa822,	// (0x00039531) popup_fshwr2_char_preview_window_t1

0xa830,	// (0x0003953f) popup_candi_list_indi_window_g1

0xa839,	// (0x00039548) bg_cell_contacts_ai5_widget_pane

0xa845,	// (0x00039554) cell_contacts_ai5_widget_pane_g1

0x823a,	// (0x00036f49) cell_contacts_ai5_widget_pane_g2

0xa85a,	// (0x00039569) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003ebc6) cell_contacts_ai5_widget_pane_g

0xa866,	// (0x00039575) cell_contacts_ai5_widget_pane_t1

0x40c0,	// (0x00032dcf) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8dd,	// (0x000395ec) settings_container_pane

0x4d53,	// (0x00033a62) listscroll_set_pane_copy1

0x72b0,	// (0x00035fbf) scroll_pane_cp121_copy1

0x59cd,	// (0x000346dc) set_content_pane_copy1

0xa8e9,	// (0x000395f8) aid_height_set_list_copy1_ParamLimits

0xa8e9,	// (0x000395f8) aid_height_set_list_copy1

0x6982,	// (0x00035691) aid_size_parent_copy1_ParamLimits

0x6982,	// (0x00035691) aid_size_parent_copy1

0xa8f5,	// (0x00039604) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8f5,	// (0x00039604) button_value_adjust_pane_cp6_copy1

0x509d,	// (0x00033dac) list_highlight_pane_cp2_copy1_ParamLimits

0x509d,	// (0x00033dac) list_highlight_pane_cp2_copy1

0xa909,	// (0x00039618) list_set_pane_copy1_ParamLimits

0xa909,	// (0x00039618) list_set_pane_copy1

0xa878,	// (0x00039587) main_pane_set_t1_copy1_ParamLimits

0xa878,	// (0x00039587) main_pane_set_t1_copy1

0xa8b2,	// (0x000395c1) main_pane_set_t2_copy1_ParamLimits

0xa8b2,	// (0x000395c1) main_pane_set_t2_copy1

0xa9b6,	// (0x000396c5) main_pane_set_t3_copy1

0xa9c4,	// (0x000396d3) main_pane_set_t4_copy1

0xa8d1,	// (0x000395e0) set_content_pane_g1_copy1_ParamLimits

0xa8d1,	// (0x000395e0) set_content_pane_g1_copy1

0xa9d2,	// (0x000396e1) setting_code_pane_copy1

0xa9da,	// (0x000396e9) setting_slider_graphic_pane_copy1

0xa9da,	// (0x000396e9) setting_slider_pane_copy1

0xa9da,	// (0x000396e9) setting_text_pane_copy1

0xa9da,	// (0x000396e9) setting_volume_pane_copy1

0xa9d2,	// (0x000396e1) settings_code_pane_cp2_copy1

0xa9e2,	// (0x000396f1) settings_code_pane_cp_copy1_ParamLimits

0xa9e2,	// (0x000396f1) settings_code_pane_cp_copy1

0x2b28,	// (0x00031837) volume_set_pane_copy1

0xa9f6,	// (0x00039705) volume_set_pane_g10_copy1

0xa9fe,	// (0x0003970d) volume_set_pane_g1_copy1

0xaa06,	// (0x00039715) volume_set_pane_g2_copy1

0xaa0e,	// (0x0003971d) volume_set_pane_g3_copy1

0xaa16,	// (0x00039725) volume_set_pane_g4_copy1

0xaa1e,	// (0x0003972d) volume_set_pane_g5_copy1

0xaa26,	// (0x00039735) volume_set_pane_g6_copy1

0xaa2e,	// (0x0003973d) volume_set_pane_g7_copy1

0xaa36,	// (0x00039745) volume_set_pane_g8_copy1

0xaa3e,	// (0x0003974d) volume_set_pane_g9_copy1

0x3851,	// (0x00032560) bg_set_opt_pane_cp_copy1_ParamLimits

0x3851,	// (0x00032560) bg_set_opt_pane_cp_copy1

0x2b30,	// (0x0003183f) setting_slider_pane_t1_copy1_ParamLimits

0x2b30,	// (0x0003183f) setting_slider_pane_t1_copy1

0x2b4e,	// (0x0003185d) setting_slider_pane_t2_copy1_ParamLimits

0x2b4e,	// (0x0003185d) setting_slider_pane_t2_copy1

0x2b68,	// (0x00031877) setting_slider_pane_t3_copy1_ParamLimits

0x2b68,	// (0x00031877) setting_slider_pane_t3_copy1

0x2b80,	// (0x0003188f) slider_set_pane_copy1_ParamLimits

0x2b80,	// (0x0003188f) slider_set_pane_copy1

0x4118,	// (0x00032e27) set_opt_bg_pane_g1_copy2

0x4120,	// (0x00032e2f) set_opt_bg_pane_g2_copy2

0xaa46,	// (0x00039755) set_opt_bg_pane_g3_copy2

0x4130,	// (0x00032e3f) set_opt_bg_pane_g4_copy2

0x4138,	// (0x00032e47) set_opt_bg_pane_g5_copy2

0x4140,	// (0x00032e4f) set_opt_bg_pane_g6_copy2

0xaa50,	// (0x0003975f) set_opt_bg_pane_g7_copy2

0xaa58,	// (0x00039767) set_opt_bg_pane_g8_copy2

0xaa62,	// (0x00039771) set_opt_bg_pane_g9_copy2

0x2b96,	// (0x000318a5) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b96,	// (0x000318a5) aid_size_touch_slider_mark_copy1

0xaa6c,	// (0x0003977b) slider_set_pane_g1_copy1

0x2baa,	// (0x000318b9) slider_set_pane_g2_copy1

0x1bc4,	// (0x000308d3) slider_set_pane_g3_copy1_ParamLimits

0x1bc4,	// (0x000308d3) slider_set_pane_g3_copy1

0x1bd8,	// (0x000308e7) slider_set_pane_g4_copy1_ParamLimits

0x1bd8,	// (0x000308e7) slider_set_pane_g4_copy1

0x1bf0,	// (0x000308ff) slider_set_pane_g5_copy1_ParamLimits

0x1bf0,	// (0x000308ff) slider_set_pane_g5_copy1

0x1bc4,	// (0x000308d3) slider_set_pane_g6_copy1_ParamLimits

0x1bc4,	// (0x000308d3) slider_set_pane_g6_copy1

0x2bb2,	// (0x000318c1) slider_set_pane_g7_copy1_ParamLimits

0x2bb2,	// (0x000318c1) slider_set_pane_g7_copy1

0x3771,	// (0x00032480) bg_set_opt_pane_cp2_copy1

0xaa75,	// (0x00039784) setting_slider_graphic_pane_g1_copy1

0xaa7e,	// (0x0003978d) setting_slider_graphic_pane_t1_copy1

0xaa8e,	// (0x0003979d) setting_slider_graphic_pane_t2_copy1

0xaa9e,	// (0x000397ad) slider_set_pane_cp_copy1

0xaaae,	// (0x000397bd) input_focus_pane_cp1_copy1

0xaab7,	// (0x000397c6) list_set_text_pane_copy1

0xaabf,	// (0x000397ce) setting_text_pane_g1_copy1

0x0628,	// (0x0002f337) set_text_pane_t1_copy1

0xaaae,	// (0x000397bd) input_focus_pane_cp2_copy1

0xaabf,	// (0x000397ce) setting_code_pane_g1_copy1

0xaac8,	// (0x000397d7) setting_code_pane_t1_copy1

0xaad6,	// (0x000397e5) list_set_graphic_pane_copy1

0x3771,	// (0x00032480) bg_set_opt_pane_cp4_copy1

0x4a4e,	// (0x0003375d) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a4e,	// (0x0003375d) list_set_graphic_pane_g1_copy1

0xaae9,	// (0x000397f8) list_set_graphic_pane_g2_copy1

0x4a66,	// (0x00033775) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a66,	// (0x00033775) list_set_graphic_pane_t1_copy1

0x7b9c,	// (0x000368ab) rs_clock_indi_pane_g1

0xaaf1,	// (0x00039800) rs_clock_indi_pane_t1

0xaaff,	// (0x0003980e) rs_indi_pane

0xab07,	// (0x00039816) rs_indi_pane_g1

0xab10,	// (0x0003981f) rs_indi_pane_g2

0xab19,	// (0x00039828) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003ebcd) rs_indi_pane_g

0x4d53,	// (0x00033a62) bg_popup_preview_window_pane_cp03

0xab22,	// (0x00039831) popup_fep_tooltip_window_t1

0x8818,	// (0x00037527) popup_note2_window_g2_ParamLimits

0x8818,	// (0x00037527) popup_note2_window_g2

0x0001,

0xfc57,	// (0x0003e966) popup_note2_window_g_ParamLimits

0xfc57,	// (0x0003e966) popup_note2_window_g

0x8d13,	// (0x00037a22) bg_popup_sub_pane_cp11_ParamLimits

0x8d20,	// (0x00037a2f) cell_ai3_links_pane_g1_ParamLimits

0x8d37,	// (0x00037a46) cell_ai3_links_pane_t1

0x0628,	// (0x0002f337) set_text_pane_t1_copy1_ParamLimits

0x4c64,	// (0x00033973) cell_graphic_popup_pane_cp2_ParamLimits

0x4c64,	// (0x00033973) cell_graphic_popup_pane_cp2

0xab30,	// (0x0003983f) cell_graphic_popup_pane_g1_cp2

0x3e0b,	// (0x00032b1a) cell_graphic_popup_pane_g2_cp2

0xab38,	// (0x00039847) cell_graphic_popup_pane_g3_cp2

0xab40,	// (0x0003984f) cell_graphic_popup_pane_t2_cp2

0x3e1c,	// (0x00032b2b) grid_highlight_pane_cp3_cp2

0x445d,	// (0x0003316c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x40c0,	// (0x00032dcf) main_tmo_pane_ParamLimits

0xe7df,	// (0x0003d4ee) popup_tmo_big_image_note_window

0xa203,	// (0x00038f12) cell_ai5_widget_list_pane

0xa20b,	// (0x00038f1a) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0003e197) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0003e1ac) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0003e1c3) tmo_note_info_pane_t3_ParamLimits

0xa7ad,	// (0x000394bc) tmo_note_info_pane_t4_ParamLimits

0xa7bf,	// (0x000394ce) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003ebbb) tmo_note_info_pane_t_ParamLimits

0xa8dd,	// (0x000395ec) settings_container_pane_ParamLimits

0xaaa6,	// (0x000397b5) indicator_popup_pane_cp5

0xaaa6,	// (0x000397b5) indicator_popup_pane_cp6

0xaad6,	// (0x000397e5) list_set_graphic_pane_copy1_ParamLimits

0x375d,	// (0x0003246c) bg_popup_window_pane_cp23

0xab4e,	// (0x0003985d) popup_tmo_big_image_note_window_g1

0xab58,	// (0x00039867) popup_tmo_big_image_note_window_t1

0xab68,	// (0x00039877) popup_tmo_big_image_note_window_t2

0xab78,	// (0x00039887) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003ebd4) popup_tmo_big_image_note_window_t

0x7b9c,	// (0x000368ab) cell_ai5_widget_lrg_icon_pane_g1

0xab88,	// (0x00039897) cell_ai5_widget_lrg_icon_pane_t1

0xab96,	// (0x000398a5) cell_ai5_widget_list_row_pane_ParamLimits

0xab96,	// (0x000398a5) cell_ai5_widget_list_row_pane

0xabad,	// (0x000398bc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabad,	// (0x000398bc) cell_ai5_widget_list_row_pane_g1

0xabba,	// (0x000398c9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabba,	// (0x000398c9) cell_ai5_widget_list_row_pane_t1

0xabeb,	// (0x000398fa) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabeb,	// (0x000398fa) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003ebdb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003ebdb) cell_ai5_widget_list_row_pane_t

0x033e,	// (0x0002f04d) main_fep_vtchi_ss_pane

0xac2f,	// (0x0003993e) popup_fep_char_pre_window

0xac37,	// (0x00039946) popup_fep_ituss_window

0xf4c9,	// (0x0003e1d8) popup_fep_vkbss_window

0xf4d6,	// (0x0003e1e5) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0003e1e5) grid_vkbss_keypad_pane

0xac8e,	// (0x0003999d) ituss_keypad_pane

0x2bd4,	// (0x000318e3) aid_vkbss_key_offset_ParamLimits

0x2bd4,	// (0x000318e3) aid_vkbss_key_offset

0xd0bb,	// (0x0003bdca) cell_vkbss_key_pane_ParamLimits

0xd0bb,	// (0x0003bdca) cell_vkbss_key_pane

0xac9d,	// (0x000399ac) bg_cell_vkbss_key_g1_ParamLimits

0xac9d,	// (0x000399ac) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0003e1f5) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0003e1f5) cell_vkbss_key_3p_pane

0xf500,	// (0x0003e20f) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0003e20f) cell_vkbss_key_g1

0xf51a,	// (0x0003e229) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0003e229) cell_vkbss_key_t1

0x2bf6,	// (0x00031905) cell_ituss_key_pane_ParamLimits

0x2bf6,	// (0x00031905) cell_ituss_key_pane

0xacfc,	// (0x00039a0b) bg_cell_ituss_key_g1_ParamLimits

0xacfc,	// (0x00039a0b) bg_cell_ituss_key_g1

0xad08,	// (0x00039a17) cell_ituss_key_pane_g1_ParamLimits

0xad08,	// (0x00039a17) cell_ituss_key_pane_g1

0x2c07,	// (0x00031916) cell_ituss_key_pane_g2_ParamLimits

0x2c07,	// (0x00031916) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003ebe2) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003ebe2) cell_ituss_key_pane_g

0x2c33,	// (0x00031942) cell_ituss_key_t1_ParamLimits

0x2c33,	// (0x00031942) cell_ituss_key_t1

0x2c6d,	// (0x0003197c) cell_ituss_key_t2_ParamLimits

0x2c6d,	// (0x0003197c) cell_ituss_key_t2

0x2c9e,	// (0x000319ad) cell_ituss_key_t3_ParamLimits

0x2c9e,	// (0x000319ad) cell_ituss_key_t3

0x2c6d,	// (0x0003197c) cell_ituss_key_t4_ParamLimits

0x2c6d,	// (0x0003197c) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003ebe9) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003ebe9) cell_ituss_key_t

0xad34,	// (0x00039a43) cell_vkbss_key_3p_pane_g1

0xad3c,	// (0x00039a4b) cell_vkbss_key_3p_pane_g2

0xad44,	// (0x00039a53) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003ebf4) cell_vkbss_key_3p_pane_g

0x033e,	// (0x0002f04d) bg_popup_fep_char_preview_window_cp02

0x2ce1,	// (0x000319f0) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0003e0db) main_ai5_sk_pane

0xa839,	// (0x00039548) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa845,	// (0x00039554) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x823a,	// (0x00036f49) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa85a,	// (0x00039569) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003ebc6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa866,	// (0x00039575) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x40c0,	// (0x00032dcf) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0003e254) main_ai5_sk_pane_g1

0x5a55,	// (0x00034764) popup_query_code_window_g1

0xac4d,	// (0x0003995c) popup_fep_vkb_icf_pane

0xac6c,	// (0x0003997b) popup_fep_vtchi_icf_pane

0xad55,	// (0x00039a64) bg_icf_pane

0xad61,	// (0x00039a70) list_vkb_icf_pane

0xad70,	// (0x00039a7f) bg_icf_pane_cp01

0xad83,	// (0x00039a92) vtchi_icf_list_pane

0xad93,	// (0x00039aa2) list_vkb_icf_pane_t1_ParamLimits

0xad93,	// (0x00039aa2) list_vkb_icf_pane_t1

0xada9,	// (0x00039ab8) vtchi_icf_list_pane_t1_ParamLimits

0xada9,	// (0x00039ab8) vtchi_icf_list_pane_t1

0xac37,	// (0x00039946) popup_fep_ituss_window_ParamLimits

0xac6c,	// (0x0003997b) popup_fep_vtchi_icf_pane_ParamLimits

0xac8e,	// (0x0003999d) ituss_keypad_pane_ParamLimits

0x2bc8,	// (0x000318d7) ituss_sks_pane

0xad55,	// (0x00039a64) bg_icf_pane_ParamLimits

0xac13,	// (0x00039922) icf_edit_indi_pane_ParamLimits

0xac13,	// (0x00039922) icf_edit_indi_pane

0xad61,	// (0x00039a70) list_vkb_icf_pane_ParamLimits

0xad70,	// (0x00039a7f) bg_icf_pane_cp01_ParamLimits

0xac22,	// (0x00039931) icf_edit_indi_pane_cp01_ParamLimits

0xac22,	// (0x00039931) icf_edit_indi_pane_cp01

0xad8b,	// (0x00039a9a) vtchi_query_pane

0x7e1a,	// (0x00036b29) icf_edit_indi_pane_g1_ParamLimits

0x7e1a,	// (0x00036b29) icf_edit_indi_pane_g1

0xae1a,	// (0x00039b29) icf_edit_indi_pane_g2_ParamLimits

0xae1a,	// (0x00039b29) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003ec0c) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003ec0c) icf_edit_indi_pane_g

0xae29,	// (0x00039b38) icf_edit_indi_pane_t1

0xadc3,	// (0x00039ad2) bg_input_focus_pane_cp042

0x3fef,	// (0x00032cfe) vtchi_button_pane

0xadcc,	// (0x00039adb) vtchi_query_pane_t1

0xadda,	// (0x00039ae9) vtchi_query_pane_t2

0xade8,	// (0x00039af7) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003ebfb) vtchi_query_pane_t

0x033e,	// (0x0002f04d) bg_button_pane_cp13

0xadf6,	// (0x00039b05) vtchi_button_pane_g1

0x2cf0,	// (0x000319ff) ituss_sks_pane_g1

0x2cfb,	// (0x00031a0a) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003ec02) ituss_sks_pane_g

0xadfe,	// (0x00039b0d) ituss_sks_pane_t1

0xae0c,	// (0x00039b1b) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003ec07) ituss_sks_pane_t

0x7636,	// (0x00036345) indicator_nsta_pane_cp_g1

0x763e,	// (0x0003634d) indicator_nsta_pane_cp_g2

0x7646,	// (0x00036355) indicator_nsta_pane_cp_g3

0x7636,	// (0x00036345) indicator_nsta_pane_cp_g4

0x763e,	// (0x0003634d) indicator_nsta_pane_cp_g5

0x7646,	// (0x00036355) indicator_nsta_pane_cp_g6

0x0005,

0xfa95,	// (0x0003e7a4) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0003def3) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0003def3) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003eabd) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003eabd) cell_graphic2_pane_t

0xf218,	// (0x0003df27) cell_graphic2_control_pane_t1

0xd5d8,	// (0x0003c2e7) signal_pane_g3_ParamLimits

0xd5d8,	// (0x0003c2e7) signal_pane_g3

0xd5ec,	// (0x0003c2fb) signal_pane_g4_ParamLimits

0xd5ec,	// (0x0003c2fb) signal_pane_g4

0xabfd,	// (0x0003990c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabfd,	// (0x0003990c) cell_ai5_widget_list_row_pane_t3

0xad22,	// (0x00039a31) cell_ituss_key_pane_t1_ParamLimits

0xad22,	// (0x00039a31) cell_ituss_key_pane_t1

0x56ac,	// (0x000343bb) form_field_data_wide_pane_vc_t2_ParamLimits

0x56ac,	// (0x000343bb) form_field_data_wide_pane_vc_t2

0x56c0,	// (0x000343cf) form_field_data_wide_pane_vc_t3_ParamLimits

0x56c0,	// (0x000343cf) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0003e513) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0003e513) form_field_data_wide_pane_vc_t

0x72f2,	// (0x00036001) form_field_slider_wide_pane_vc_t3_ParamLimits

0x72f2,	// (0x00036001) form_field_slider_wide_pane_vc_t3

0x73d0,	// (0x000360df) form_field_popup_wide_pane_vc_t2_ParamLimits

0x73d0,	// (0x000360df) form_field_popup_wide_pane_vc_t2

0x73e7,	// (0x000360f6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x73e7,	// (0x000360f6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa84,	// (0x0003e793) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0003e793) form_field_popup_wide_pane_vc_t

0xcf5d,	// (0x0003bc6c) aid_fshwr2_btn_pane_ParamLimits

0xcf6e,	// (0x0003bc7d) aid_fshwr2_syb_pane_ParamLimits

0xcf7f,	// (0x0003bc8e) aid_fshwr2_txt_pane_ParamLimits

0x2234,	// (0x00030f43) fshwr2_bg_pane_ParamLimits

0xcf8b,	// (0x0003bc9a) fshwr2_func_candi_pane_ParamLimits

0xcfaa,	// (0x0003bcb9) fshwr2_hwr_syb_pane_ParamLimits

0xcfc5,	// (0x0003bcd4) fshwr2_icf_pane_ParamLimits

0x32fa,	// (0x00032009) list_double_graphic_pane_vc_g4_ParamLimits

0x32fa,	// (0x00032009) list_double_graphic_pane_vc_g4

0x2c27,	// (0x00031936) cell_ituss_key_pane_g3_ParamLimits

0x2c27,	// (0x00031936) cell_ituss_key_pane_g3

0x2ccf,	// (0x000319de) cell_ituss_key_t5_ParamLimits

0x2ccf,	// (0x000319de) cell_ituss_key_t5

0xf4c9,	// (0x0003e1d8) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

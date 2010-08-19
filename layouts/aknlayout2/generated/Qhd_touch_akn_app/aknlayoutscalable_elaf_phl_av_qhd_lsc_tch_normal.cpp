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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x000000c2 };

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
0xb7d2,	// (0x0000b894) Screen

0xb7de,	// (0x0000b8a0) application_window_ParamLimits

0xb7de,	// (0x0000b8a0) application_window

0xf4ff,	// (0x0000f5c1) screen_g1

0xb816,	// (0x0000b8d8) area_bottom_pane_ParamLimits

0xb816,	// (0x0000b8d8) area_bottom_pane

0x0082,	// (0x00000144) area_top_pane_ParamLimits

0x0082,	// (0x00000144) area_top_pane

0x0116,	// (0x000001d8) main_pane_ParamLimits

0x0116,	// (0x000001d8) main_pane

0x01d1,	// (0x00000293) misc_graphics

0xce51,	// (0x0000cf13) battery_pane_ParamLimits

0xce51,	// (0x0000cf13) battery_pane

0x4090,	// (0x00004152) bg_status_flat_pane_g8

0x4098,	// (0x0000415a) bg_status_flat_pane_g9

0x31e9,	// (0x000032ab) context_pane_ParamLimits

0x31e9,	// (0x000032ab) context_pane

0xcfbc,	// (0x0000d07e) navi_pane_ParamLimits

0xcfbc,	// (0x0000d07e) navi_pane

0xd03a,	// (0x0000d0fc) signal_pane_ParamLimits

0xd03a,	// (0x0000d0fc) signal_pane

0x0008,

0xf843,	// (0x0000f905) bg_status_flat_pane_g

0xd0ca,	// (0x0000d18c) status_pane_g1_ParamLimits

0xd0ca,	// (0x0000d18c) status_pane_g1

0xd0e0,	// (0x0000d1a2) status_pane_g2_ParamLimits

0xd0e0,	// (0x0000d1a2) status_pane_g2

0x3410,	// (0x000034d2) status_pane_g3_ParamLimits

0x3410,	// (0x000034d2) status_pane_g3

0x0004,

0xf776,	// (0x0000f838) status_pane_g_ParamLimits

0xf776,	// (0x0000f838) status_pane_g

0xd0ec,	// (0x0000d1ae) title_pane_ParamLimits

0xd0ec,	// (0x0000d1ae) title_pane

0xd14f,	// (0x0000d211) uni_indicator_pane_ParamLimits

0xd14f,	// (0x0000d211) uni_indicator_pane

0x2a86,	// (0x00002b48) bg_list_pane_ParamLimits

0x2a86,	// (0x00002b48) bg_list_pane

0x2aa6,	// (0x00002b68) find_pane

0x37d7,	// (0x00003899) listscroll_app_pane_ParamLimits

0x37d7,	// (0x00003899) listscroll_app_pane

0x2aba,	// (0x00002b7c) listscroll_form_pane

0x2ac2,	// (0x00002b84) listscroll_gen_pane_ParamLimits

0x2ac2,	// (0x00002b84) listscroll_gen_pane

0x2ad6,	// (0x00002b98) listscroll_set_pane

0x4e4f,	// (0x00004f11) main_idle_act_pane

0x2563,	// (0x00002625) main_idle_trad_pane

0x2563,	// (0x00002625) main_list_empty_pane

0x2aae,	// (0x00002b70) main_midp_pane

0x2af0,	// (0x00002bb2) main_pane_g1_ParamLimits

0x2af0,	// (0x00002bb2) main_pane_g1

0xc71e,	// (0x0000c7e0) popup_ai_message_window_ParamLimits

0xc71e,	// (0x0000c7e0) popup_ai_message_window

0xc7af,	// (0x0000c871) popup_fep_china_uni_window_ParamLimits

0xc7af,	// (0x0000c871) popup_fep_china_uni_window

0x2c08,	// (0x00002cca) popup_fep_japan_candidate_window_ParamLimits

0x2c08,	// (0x00002cca) popup_fep_japan_candidate_window

0x2c28,	// (0x00002cea) popup_fep_japan_predictive_window_ParamLimits

0x2c28,	// (0x00002cea) popup_fep_japan_predictive_window

0xc80b,	// (0x0000c8cd) popup_find_window

0xc828,	// (0x0000c8ea) popup_grid_graphic_window_ParamLimits

0xc828,	// (0x0000c8ea) popup_grid_graphic_window

0x2c91,	// (0x00002d53) popup_large_graphic_colour_window

0xc8cc,	// (0x0000c98e) popup_menu_window_ParamLimits

0xc8cc,	// (0x0000c98e) popup_menu_window

0xca9e,	// (0x0000cb60) popup_note_image_window

0xca64,	// (0x0000cb26) popup_note_wait_window_ParamLimits

0xca64,	// (0x0000cb26) popup_note_wait_window

0xcab6,	// (0x0000cb78) popup_note_window_ParamLimits

0xcab6,	// (0x0000cb78) popup_note_window

0xcb5c,	// (0x0000cc1e) popup_query_code_window_ParamLimits

0xcb5c,	// (0x0000cc1e) popup_query_code_window

0x2ed9,	// (0x00002f9b) popup_query_data_code_window_ParamLimits

0x2ed9,	// (0x00002f9b) popup_query_data_code_window

0xcb96,	// (0x0000cc58) popup_query_data_window_ParamLimits

0xcb96,	// (0x0000cc58) popup_query_data_window

0xcc18,	// (0x0000ccda) popup_query_sat_info_window_ParamLimits

0xcc18,	// (0x0000ccda) popup_query_sat_info_window

0xccaf,	// (0x0000cd71) popup_snote_single_graphic_window_ParamLimits

0xccaf,	// (0x0000cd71) popup_snote_single_graphic_window

0xccaf,	// (0x0000cd71) popup_snote_single_text_window_ParamLimits

0xccaf,	// (0x0000cd71) popup_snote_single_text_window

0x2f60,	// (0x00003022) popup_sub_window_general

0x3090,	// (0x00003152) popup_window_general_ParamLimits

0x3090,	// (0x00003152) popup_window_general

0x30a5,	// (0x00003167) power_save_pane

0xc57c,	// (0x0000c63e) control_pane_g1_ParamLimits

0xc57c,	// (0x0000c63e) control_pane_g1

0xc5a5,	// (0x0000c667) control_pane_g2_ParamLimits

0xc5a5,	// (0x0000c667) control_pane_g2

0x2921,	// (0x000029e3) control_pane_g3_ParamLimits

0x2921,	// (0x000029e3) control_pane_g3

0x0007,

0xf75e,	// (0x0000f820) control_pane_g_ParamLimits

0xf75e,	// (0x0000f820) control_pane_g

0xc60d,	// (0x0000c6cf) control_pane_t1_ParamLimits

0xc60d,	// (0x0000c6cf) control_pane_t1

0xc673,	// (0x0000c735) control_pane_t2_ParamLimits

0xc673,	// (0x0000c735) control_pane_t2

0x0002,

0xf76f,	// (0x0000f831) control_pane_t_ParamLimits

0xf76f,	// (0x0000f831) control_pane_t

0xc4d5,	// (0x0000c597) navi_navi_volume_pane_cp1

0xc4dd,	// (0x0000c59f) status_small_icon_pane

0x2808,	// (0x000028ca) status_small_pane_g1_ParamLimits

0x2808,	// (0x000028ca) status_small_pane_g1

0xc4e5,	// (0x0000c5a7) status_small_pane_g2_ParamLimits

0xc4e5,	// (0x0000c5a7) status_small_pane_g2

0xc4f1,	// (0x0000c5b3) status_small_pane_g3_ParamLimits

0xc4f1,	// (0x0000c5b3) status_small_pane_g3

0xc4fd,	// (0x0000c5bf) status_small_pane_g4_ParamLimits

0xc4fd,	// (0x0000c5bf) status_small_pane_g4

0xc509,	// (0x0000c5cb) status_small_pane_g5_ParamLimits

0xc509,	// (0x0000c5cb) status_small_pane_g5

0xc517,	// (0x0000c5d9) status_small_pane_g6_ParamLimits

0xc517,	// (0x0000c5d9) status_small_pane_g6

0x0007,

0xf74d,	// (0x0000f80f) status_small_pane_g_ParamLimits

0xf74d,	// (0x0000f80f) status_small_pane_g

0xc546,	// (0x0000c608) status_small_pane_t1

0xc568,	// (0x0000c62a) status_small_wait_pane_ParamLimits

0xc568,	// (0x0000c62a) status_small_wait_pane

0xc337,	// (0x0000c3f9) aid_levels_signal_ParamLimits

0xc337,	// (0x0000c3f9) aid_levels_signal

0xc34f,	// (0x0000c411) signal_pane_g1_ParamLimits

0xc34f,	// (0x0000c411) signal_pane_g1

0xc36a,	// (0x0000c42c) signal_pane_g2_ParamLimits

0xc36a,	// (0x0000c42c) signal_pane_g2

0x0003,

0xf6de,	// (0x0000f7a0) signal_pane_g_ParamLimits

0xf6de,	// (0x0000f7a0) signal_pane_g

0x1e13,	// (0x00001ed5) context_pane_g1

0xb9f4,	// (0x0000bab6) title_pane_g1

0xba2b,	// (0x0000baed) title_pane_t1

0x040d,	// (0x000004cf) title_pane_t2

0x0433,	// (0x000004f5) title_pane_t3

0x0002,

0xf532,	// (0x0000f5f4) title_pane_t

0xd177,	// (0x0000d239) aid_levels_battery_ParamLimits

0xd177,	// (0x0000d239) aid_levels_battery

0xd193,	// (0x0000d255) battery_pane_g1_ParamLimits

0xd193,	// (0x0000d255) battery_pane_g1

0xd1b0,	// (0x0000d272) battery_pane_g2_ParamLimits

0xd1b0,	// (0x0000d272) battery_pane_g2

0x0001,

0xf781,	// (0x0000f843) battery_pane_g_ParamLimits

0xf781,	// (0x0000f843) battery_pane_g

0xd3f9,	// (0x0000d4bb) uni_indicator_pane_g1

0xd40f,	// (0x0000d4d1) uni_indicator_pane_g2

0xd425,	// (0x0000d4e7) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x0000f9ad) uni_indicator_pane_g

0x23e1,	// (0x000024a3) navi_icon_pane_ParamLimits

0x23e1,	// (0x000024a3) navi_icon_pane

0x231f,	// (0x000023e1) navi_midp_pane

0x23fd,	// (0x000024bf) navi_navi_pane

0x2407,	// (0x000024c9) navi_text_pane_ParamLimits

0x2407,	// (0x000024c9) navi_text_pane

0xf4ff,	// (0x0000f5c1) status_small_wait_pane_g1

0x0933,	// (0x000009f5) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0000f9a8) status_small_wait_pane_g

0x484f,	// (0x00004911) navi_navi_icon_text_pane

0x4857,	// (0x00004919) navi_navi_pane_g1_ParamLimits

0x4857,	// (0x00004919) navi_navi_pane_g1

0x4869,	// (0x0000492b) navi_navi_pane_g2_ParamLimits

0x4869,	// (0x0000492b) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0000f976) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0000f976) navi_navi_pane_g

0x487b,	// (0x0000493d) navi_navi_tabs_pane

0x4884,	// (0x00004946) navi_navi_text_pane

0x484f,	// (0x00004911) navi_navi_volume_pane

0x482b,	// (0x000048ed) navi_text_pane_t1

0x481f,	// (0x000048e1) navi_icon_pane_g1

0x4772,	// (0x00004834) navi_navi_text_pane_t1

0x4761,	// (0x00004823) navi_navi_volume_pane_g1

0x4769,	// (0x0000482b) volume_small_pane

0x46c7,	// (0x00004789) navi_navi_icon_text_pane_g1

0x46cf,	// (0x00004791) navi_navi_icon_text_pane_t1

0x23fd,	// (0x000024bf) navi_tabs_2_long_pane

0x23fd,	// (0x000024bf) navi_tabs_2_pane

0x23fd,	// (0x000024bf) navi_tabs_3_long_pane

0x23fd,	// (0x000024bf) navi_tabs_3_pane

0x23fd,	// (0x000024bf) navi_tabs_4_pane

0x4626,	// (0x000046e8) tabs_2_active_pane_ParamLimits

0x4626,	// (0x000046e8) tabs_2_active_pane

0x4636,	// (0x000046f8) tabs_2_passive_pane_ParamLimits

0x4636,	// (0x000046f8) tabs_2_passive_pane

0x45f4,	// (0x000046b6) tabs_3_active_pane_ParamLimits

0x45f4,	// (0x000046b6) tabs_3_active_pane

0x4604,	// (0x000046c6) tabs_3_passive_pane_ParamLimits

0x4604,	// (0x000046c6) tabs_3_passive_pane

0x4615,	// (0x000046d7) tabs_3_passive_pane_cp_ParamLimits

0x4615,	// (0x000046d7) tabs_3_passive_pane_cp

0x45b0,	// (0x00004672) tabs_4_active_pane_ParamLimits

0x45b0,	// (0x00004672) tabs_4_active_pane

0x45c1,	// (0x00004683) tabs_4_passive_pane_ParamLimits

0x45c1,	// (0x00004683) tabs_4_passive_pane

0x45d2,	// (0x00004694) tabs_4_passive_pane_cp_ParamLimits

0x45d2,	// (0x00004694) tabs_4_passive_pane_cp

0x45e3,	// (0x000046a5) tabs_4_passive_pane_cp2_ParamLimits

0x45e3,	// (0x000046a5) tabs_4_passive_pane_cp2

0x458c,	// (0x0000464e) tabs_2_long_active_pane_ParamLimits

0x458c,	// (0x0000464e) tabs_2_long_active_pane

0x459e,	// (0x00004660) tabs_2_long_passive_pane_ParamLimits

0x459e,	// (0x00004660) tabs_2_long_passive_pane

0x454d,	// (0x0000460f) tabs_3_long_active_pane_ParamLimits

0x454d,	// (0x0000460f) tabs_3_long_active_pane

0x4560,	// (0x00004622) tabs_3_long_passive_pane_ParamLimits

0x4560,	// (0x00004622) tabs_3_long_passive_pane

0x4579,	// (0x0000463b) tabs_3_long_passive_pane_cp_ParamLimits

0x4579,	// (0x0000463b) tabs_3_long_passive_pane_cp

0x44f3,	// (0x000045b5) volume_small_pane_g1

0x44fc,	// (0x000045be) volume_small_pane_g2

0x4505,	// (0x000045c7) volume_small_pane_g3

0x450e,	// (0x000045d0) volume_small_pane_g4

0x4517,	// (0x000045d9) volume_small_pane_g5

0x4520,	// (0x000045e2) volume_small_pane_g6

0x4529,	// (0x000045eb) volume_small_pane_g7

0x4532,	// (0x000045f4) volume_small_pane_g8

0x453b,	// (0x000045fd) volume_small_pane_g9

0x4544,	// (0x00004606) volume_small_pane_g10

0x0009,

0xf880,	// (0x0000f942) volume_small_pane_g

0x076b,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp2

0x0453,	// (0x00000515) tabs_3_active_pane_g1

0xbab7,	// (0x0000bb79) tabs_3_active_pane_t1

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0453,	// (0x00000515) tabs_3_passive_pane_g1

0xbab7,	// (0x0000bb79) tabs_3_passive_pane_t1

0x076b,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp3

0x046d,	// (0x0000052f) tabs_4_active_pane_g1

0xbac9,	// (0x0000bb8b) tabs_4_active_pane_t1

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp3

0x046d,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xbac9,	// (0x0000bb8b) tabs_4_1_passive_pane_t1

0x2aae,	// (0x00002b70) list_highlight_pane_cp2

0xd4ab,	// (0x0000d56d) list_set_pane_ParamLimits

0xd4ab,	// (0x0000d56d) list_set_pane

0xd545,	// (0x0000d607) main_pane_set_t1_ParamLimits

0xd545,	// (0x0000d607) main_pane_set_t1

0xd565,	// (0x0000d627) main_pane_set_t2_ParamLimits

0xd565,	// (0x0000d627) main_pane_set_t2

0xd579,	// (0x0000d63b) main_pane_set_t3_ParamLimits

0xd579,	// (0x0000d63b) main_pane_set_t3

0xd58b,	// (0x0000d64d) main_pane_set_t4_ParamLimits

0xd58b,	// (0x0000d64d) main_pane_set_t4

0x0003,

0xf950,	// (0x0000fa12) main_pane_set_t_ParamLimits

0xf950,	// (0x0000fa12) main_pane_set_t

0xd59d,	// (0x0000d65f) setting_code_pane

0xd5a7,	// (0x0000d669) setting_slider_graphic_pane

0xd5a7,	// (0x0000d669) setting_slider_pane

0xd5a7,	// (0x0000d669) setting_text_pane

0xd5a7,	// (0x0000d669) setting_volume_pane

0x0487,	// (0x00000549) volume_set_pane

0x0445,	// (0x00000507) bg_set_opt_pane_cp

0x048f,	// (0x00000551) setting_slider_pane_t1

0x04a8,	// (0x0000056a) setting_slider_pane_t2

0x04c2,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0000f5fb) setting_slider_pane_t

0x04da,	// (0x0000059c) slider_set_pane

0x01d1,	// (0x00000293) bg_set_opt_pane_cp2

0x04f0,	// (0x000005b2) setting_slider_graphic_pane_g1

0x04f9,	// (0x000005bb) setting_slider_graphic_pane_t1

0x0509,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0000f602) setting_slider_graphic_pane_t

0x0519,	// (0x000005db) slider_set_pane_cp

0x01d1,	// (0x00000293) input_focus_pane_cp1

0x4e36,	// (0x00004ef8) list_set_text_pane

0xf4ff,	// (0x0000f5c1) setting_text_pane_g1

0x01d1,	// (0x00000293) input_focus_pane_cp2

0xf4ff,	// (0x0000f5c1) setting_code_pane_g1

0x0521,	// (0x000005e3) setting_code_pane_t1

0x052f,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x052f,	// (0x000005f1) set_text_pane_t1

0x1403,	// (0x000014c5) set_opt_bg_pane_g1

0x140b,	// (0x000014cd) set_opt_bg_pane_g2

0x4e10,	// (0x00004ed2) set_opt_bg_pane_g3

0x141b,	// (0x000014dd) set_opt_bg_pane_g4

0x1423,	// (0x000014e5) set_opt_bg_pane_g5

0x142b,	// (0x000014ed) set_opt_bg_pane_g6

0x4e1a,	// (0x00004edc) set_opt_bg_pane_g7

0x4e22,	// (0x00004ee4) set_opt_bg_pane_g8

0x4e2c,	// (0x00004eee) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0000f9ff) set_opt_bg_pane_g

0x4d9f,	// (0x00004e61) slider_set_pane_g1

0x4dac,	// (0x00004e6e) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0000f9f0) slider_set_pane_g

0x4c35,	// (0x00004cf7) volume_set_pane_g1

0x4c3d,	// (0x00004cff) volume_set_pane_g2

0x4c45,	// (0x00004d07) volume_set_pane_g3

0x4c4d,	// (0x00004d0f) volume_set_pane_g4

0x4c55,	// (0x00004d17) volume_set_pane_g5

0x4c5d,	// (0x00004d1f) volume_set_pane_g6

0x4c65,	// (0x00004d27) volume_set_pane_g7

0x4c6d,	// (0x00004d2f) volume_set_pane_g8

0x4c75,	// (0x00004d37) volume_set_pane_g9

0x4c7d,	// (0x00004d3f) volume_set_pane_g10

0x0009,

0xf906,	// (0x0000f9c8) volume_set_pane_g

0xbadb,	// (0x0000bb9d) indicator_pane_ParamLimits

0xbadb,	// (0x0000bb9d) indicator_pane

0xbb03,	// (0x0000bbc5) main_idle_pane_g2_ParamLimits

0xbb03,	// (0x0000bbc5) main_idle_pane_g2

0xbb3b,	// (0x0000bbfd) main_pane_idle_g1_ParamLimits

0xbb3b,	// (0x0000bbfd) main_pane_idle_g1

0x058a,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x058a,	// (0x0000064c) popup_clock_digital_analogue_window

0xbb62,	// (0x0000bc24) soft_indicator_pane_ParamLimits

0xbb62,	// (0x0000bc24) soft_indicator_pane

0xbb7c,	// (0x0000bc3e) wallpaper_pane_ParamLimits

0xbb7c,	// (0x0000bc3e) wallpaper_pane

0xf4ff,	// (0x0000f5c1) wallpaper_pane_g1

0xbb8e,	// (0x0000bc50) indicator_pane_g1_ParamLimits

0xbb8e,	// (0x0000bc50) indicator_pane_g1

0x53b1,	// (0x00005473) navi_navi_icon_text_pane_srt_g1

0x05dc,	// (0x0000069e) soft_indicator_pane_t1

0x05f6,	// (0x000006b8) aid_ps_area_pane

0xbba4,	// (0x0000bc66) aid_ps_clock_pane

0x0615,	// (0x000006d7) aid_ps_indicator_pane

0x0621,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x0621,	// (0x000006e3) indicator_ps_pane

0x0630,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x0630,	// (0x000006f2) power_save_pane_g1

0x063c,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x063c,	// (0x000006fe) power_save_pane_g2

0xf509,	// (0x0000f5cb) aid_navinavi_width_pane

0x05f6,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0000f607) power_save_pane_g_ParamLimits

0xf545,	// (0x0000f607) power_save_pane_g

0x064a,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x064a,	// (0x0000070c) power_save_pane_t1

0xbba4,	// (0x0000bc66) aid_ps_clock_pane_ParamLimits

0x0615,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x065c,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x065c,	// (0x0000071e) power_save_pane_t4

0x0001,

0xf54a,	// (0x0000f60c) power_save_pane_t_ParamLimits

0xf54a,	// (0x0000f60c) power_save_pane_t

0x0686,	// (0x00000748) power_save_t3_ParamLimits

0x0686,	// (0x00000748) power_save_t3

0x0671,	// (0x00000733) power_save_t2_ParamLimits

0x0671,	// (0x00000733) power_save_t2

0x069b,	// (0x0000075d) indicator_ps_pane_g1

0xbbb2,	// (0x0000bc74) ai_gene_pane_ParamLimits

0xbbb2,	// (0x0000bc74) ai_gene_pane

0xbbc9,	// (0x0000bc8b) ai_links_pane_ParamLimits

0xbbc9,	// (0x0000bc8b) ai_links_pane

0xbbe1,	// (0x0000bca3) indicator_pane_cp1_ParamLimits

0xbbe1,	// (0x0000bca3) indicator_pane_cp1

0xbbf0,	// (0x0000bcb2) main_pane_idle_g1_cp_ParamLimits

0xbbf0,	// (0x0000bcb2) main_pane_idle_g1_cp

0x06d4,	// (0x00000796) popup_ai_links_title_window

0xbc08,	// (0x0000bcca) soft_indicator_pane_cp1_ParamLimits

0xbc08,	// (0x0000bcca) soft_indicator_pane_cp1

0x4b18,	// (0x00004bda) ai_links_pane_g1

0x4b21,	// (0x00004be3) grid_ai_links_pane

0xd3f0,	// (0x0000d4b2) ai_gene_pane_1

0x4b06,	// (0x00004bc8) ai_gene_pane_2

0x4b0f,	// (0x00004bd1) list_highlight_pane_cp4

0xd3cc,	// (0x0000d48e) cell_ai_link_pane_ParamLimits

0xd3cc,	// (0x0000d48e) cell_ai_link_pane

0x4ad7,	// (0x00004b99) cell_ai_link_pane_g1

0x0933,	// (0x000009f5) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0000f9a3) cell_ai_link_pane_g

0x01d1,	// (0x00000293) grid_highlight_cp2

0x01d1,	// (0x00000293) bg_popup_sub_pane_cp1

0x06f7,	// (0x000007b9) popup_ai_links_title_window_t1

0x4a25,	// (0x00004ae7) ai_gene_pane_1_g1_ParamLimits

0x4a25,	// (0x00004ae7) ai_gene_pane_1_g1

0x4a31,	// (0x00004af3) ai_gene_pane_1_g2_ParamLimits

0x4a31,	// (0x00004af3) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x0000f999) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x0000f999) ai_gene_pane_1_g

0x4a3e,	// (0x00004b00) ai_gene_pane_1_t1_ParamLimits

0x4a3e,	// (0x00004b00) ai_gene_pane_1_t1

0x4a72,	// (0x00004b34) grid_ai_soft_ind_pane

0x4a10,	// (0x00004ad2) ai_gene_pane_2_t1_ParamLimits

0x4a10,	// (0x00004ad2) ai_gene_pane_2_t1

0xbc1c,	// (0x0000bcde) main_pane_empty_t1_ParamLimits

0xbc1c,	// (0x0000bcde) main_pane_empty_t1

0xbc34,	// (0x0000bcf6) main_pane_empty_t2_ParamLimits

0xbc34,	// (0x0000bcf6) main_pane_empty_t2

0xbc49,	// (0x0000bd0b) main_pane_empty_t3_ParamLimits

0xbc49,	// (0x0000bd0b) main_pane_empty_t3

0xbc5b,	// (0x0000bd1d) main_pane_empty_t4_ParamLimits

0xbc5b,	// (0x0000bd1d) main_pane_empty_t4

0xbc6d,	// (0x0000bd2f) main_pane_empty_t5_ParamLimits

0xbc6d,	// (0x0000bd2f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0000f611) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0000f611) main_pane_empty_t

0x1576,	// (0x00001638) bg_popup_window_pane_ParamLimits

0x1576,	// (0x00001638) bg_popup_window_pane

0x4780,	// (0x00004842) find_popup_pane_cp2_ParamLimits

0x4780,	// (0x00004842) find_popup_pane_cp2

0x478c,	// (0x0000484e) heading_pane_ParamLimits

0x478c,	// (0x0000484e) heading_pane

0x01d1,	// (0x00000293) bg_popup_sub_pane

0xd34d,	// (0x0000d40f) bg_popup_window_pane_g1_ParamLimits

0xd34d,	// (0x0000d40f) bg_popup_window_pane_g1

0xd35c,	// (0x0000d41e) bg_popup_window_pane_g2_ParamLimits

0xd35c,	// (0x0000d41e) bg_popup_window_pane_g2

0xd368,	// (0x0000d42a) bg_popup_window_pane_g3_ParamLimits

0xd368,	// (0x0000d42a) bg_popup_window_pane_g3

0xd374,	// (0x0000d436) bg_popup_window_pane_g4_ParamLimits

0xd374,	// (0x0000d436) bg_popup_window_pane_g4

0xd383,	// (0x0000d445) bg_popup_window_pane_g5_ParamLimits

0xd383,	// (0x0000d445) bg_popup_window_pane_g5

0xd393,	// (0x0000d455) bg_popup_window_pane_g6_ParamLimits

0xd393,	// (0x0000d455) bg_popup_window_pane_g6

0xd39f,	// (0x0000d461) bg_popup_window_pane_g7_ParamLimits

0xd39f,	// (0x0000d461) bg_popup_window_pane_g7

0xd3ae,	// (0x0000d470) bg_popup_window_pane_g8_ParamLimits

0xd3ae,	// (0x0000d470) bg_popup_window_pane_g8

0xd3bd,	// (0x0000d47f) bg_popup_window_pane_g9_ParamLimits

0xd3bd,	// (0x0000d47f) bg_popup_window_pane_g9

0x4755,	// (0x00004817) bg_popup_window_pane_g10_ParamLimits

0x4755,	// (0x00004817) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0000f961) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0000f961) bg_popup_window_pane_g

0x467e,	// (0x00004740) bg_popup_heading_pane_ParamLimits

0x467e,	// (0x00004740) bg_popup_heading_pane

0x52f4,	// (0x000053b6) tabs_4_passive_pane_cp_srt_ParamLimits

0x52f4,	// (0x000053b6) tabs_4_passive_pane_cp_srt

0x5306,	// (0x000053c8) tabs_4_passive_pane_srt_ParamLimits

0x4692,	// (0x00004754) heading_pane_g2

0x5306,	// (0x000053c8) tabs_4_passive_pane_srt

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp3_srt

0x469a,	// (0x0000475c) heading_pane_t1_ParamLimits

0x469a,	// (0x0000475c) heading_pane_t1

0x46b1,	// (0x00004773) heading_pane_t2_ParamLimits

0x46b1,	// (0x00004773) heading_pane_t2

0x0001,

0xf89a,	// (0x0000f95c) heading_pane_t_ParamLimits

0xf89a,	// (0x0000f95c) heading_pane_t

0x4058,	// (0x0000411a) bg_popup_heading_pane_g1

0x4107,	// (0x000041c9) bg_popup_heading_pane_g2

0x4111,	// (0x000041d3) bg_popup_heading_pane_g3

0x411b,	// (0x000041dd) bg_popup_heading_pane_g4

0x4125,	// (0x000041e7) bg_popup_heading_pane_g5

0x412f,	// (0x000041f1) bg_popup_heading_pane_g6

0x4137,	// (0x000041f9) bg_popup_heading_pane_g7

0x413f,	// (0x00004201) bg_popup_heading_pane_g8

0x4149,	// (0x0000420b) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x0000f918) bg_popup_heading_pane_g

0x3629,	// (0x000036eb) bg_popup_sub_pane_g1

0x3631,	// (0x000036f3) bg_popup_sub_pane_g2

0x3639,	// (0x000036fb) bg_popup_sub_pane_g3

0x3641,	// (0x00003703) bg_popup_sub_pane_g4

0x3649,	// (0x0000370b) bg_popup_sub_pane_g5

0x3651,	// (0x00003713) bg_popup_sub_pane_g6

0x3659,	// (0x0000371b) bg_popup_sub_pane_g7

0x3661,	// (0x00003723) bg_popup_sub_pane_g8

0x3669,	// (0x0000372b) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0000f8f2) bg_popup_sub_pane_g

0x076b,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x076b,	// (0x0000082d) bg_popup_window_pane_cp5

0x0787,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0787,	// (0x00000849) popup_note_window_g1

0x0793,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0793,	// (0x00000855) popup_note_window_t1

0x07a9,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x07a9,	// (0x0000086b) popup_note_window_t2

0x07bf,	// (0x00000881) popup_note_window_t3_ParamLimits

0x07bf,	// (0x00000881) popup_note_window_t3

0x07d5,	// (0x00000897) popup_note_window_t4_ParamLimits

0x07d5,	// (0x00000897) popup_note_window_t4

0x07fd,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x07fd,	// (0x000008bf) popup_note_window_t5

0x0004,

0xf55a,	// (0x0000f61c) popup_note_window_t_ParamLimits

0xf55a,	// (0x0000f61c) popup_note_window_t

0x0847,	// (0x00000909) bg_popup_window_pane_cp6_ParamLimits

0x0847,	// (0x00000909) bg_popup_window_pane_cp6

0x3fd4,	// (0x00004096) popup_note_image_window_g1_ParamLimits

0x3fd4,	// (0x00004096) popup_note_image_window_g1

0x3fe0,	// (0x000040a2) popup_note_image_window_g2_ParamLimits

0x3fe0,	// (0x000040a2) popup_note_image_window_g2

0x0001,

0xf824,	// (0x0000f8e6) popup_note_image_window_g_ParamLimits

0xf824,	// (0x0000f8e6) popup_note_image_window_g

0x3ff9,	// (0x000040bb) popup_note_image_window_t1_ParamLimits

0x3ff9,	// (0x000040bb) popup_note_image_window_t1

0x4012,	// (0x000040d4) popup_note_image_window_t2_ParamLimits

0x4012,	// (0x000040d4) popup_note_image_window_t2

0x402b,	// (0x000040ed) popup_note_image_window_t3_ParamLimits

0x402b,	// (0x000040ed) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0000f8eb) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0000f8eb) popup_note_image_window_t

0x3e95,	// (0x00003f57) bg_popup_window_pane_cp7_ParamLimits

0x3e95,	// (0x00003f57) bg_popup_window_pane_cp7

0x3ec5,	// (0x00003f87) popup_note_wait_window_g1_ParamLimits

0x3ec5,	// (0x00003f87) popup_note_wait_window_g1

0x3ed1,	// (0x00003f93) popup_note_wait_window_g2_ParamLimits

0x3ed1,	// (0x00003f93) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x0000f8d4) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x0000f8d4) popup_note_wait_window_g

0x3ee9,	// (0x00003fab) popup_note_wait_window_t1_ParamLimits

0x3ee9,	// (0x00003fab) popup_note_wait_window_t1

0x3f10,	// (0x00003fd2) popup_note_wait_window_t2_ParamLimits

0x3f10,	// (0x00003fd2) popup_note_wait_window_t2

0x3f2d,	// (0x00003fef) popup_note_wait_window_t3_ParamLimits

0x3f2d,	// (0x00003fef) popup_note_wait_window_t3

0x3f40,	// (0x00004002) popup_note_wait_window_t4_ParamLimits

0x3f40,	// (0x00004002) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x0000f8db) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x0000f8db) popup_note_wait_window_t

0x3f65,	// (0x00004027) wait_bar_pane_ParamLimits

0x3f65,	// (0x00004027) wait_bar_pane

0x01d1,	// (0x00000293) wait_anim_pane

0x01d1,	// (0x00000293) wait_border_pane

0xf4ff,	// (0x0000f5c1) wait_anim_pane_g1

0xf4ff,	// (0x0000f5c1) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0000f79b) wait_anim_pane_g

0x3e39,	// (0x00003efb) wait_border_pane_g1

0x3e44,	// (0x00003f06) wait_border_pane_g2

0x3e4d,	// (0x00003f0f) wait_border_pane_g3

0x0002,

0xf80b,	// (0x0000f8cd) wait_border_pane_g

0x3ca4,	// (0x00003d66) bg_popup_window_pane_cp16_ParamLimits

0x3ca4,	// (0x00003d66) bg_popup_window_pane_cp16

0x3da4,	// (0x00003e66) indicator_popup_pane_cp4_ParamLimits

0x3da4,	// (0x00003e66) indicator_popup_pane_cp4

0x3db8,	// (0x00003e7a) popup_query_data_window_t1_ParamLimits

0x3db8,	// (0x00003e7a) popup_query_data_window_t1

0x3dca,	// (0x00003e8c) popup_query_data_window_t2_ParamLimits

0x3dca,	// (0x00003e8c) popup_query_data_window_t2

0x3de3,	// (0x00003ea5) popup_query_data_window_t3_ParamLimits

0x3de3,	// (0x00003ea5) popup_query_data_window_t3

0x0002,

0xf804,	// (0x0000f8c6) popup_query_data_window_t_ParamLimits

0xf804,	// (0x0000f8c6) popup_query_data_window_t

0x3dfd,	// (0x00003ebf) query_popup_data_pane_ParamLimits

0x3dfd,	// (0x00003ebf) query_popup_data_pane

0x3e11,	// (0x00003ed3) query_popup_data_pane_cp1_ParamLimits

0x3e11,	// (0x00003ed3) query_popup_data_pane_cp1

0x3ca4,	// (0x00003d66) bg_popup_window_pane_cp10_ParamLimits

0x3ca4,	// (0x00003d66) bg_popup_window_pane_cp10

0x3cd6,	// (0x00003d98) indicator_popup_pane_ParamLimits

0x3cd6,	// (0x00003d98) indicator_popup_pane

0x3cf8,	// (0x00003dba) popup_query_code_window_t1_ParamLimits

0x3cf8,	// (0x00003dba) popup_query_code_window_t1

0x3d12,	// (0x00003dd4) popup_query_code_window_t2_ParamLimits

0x3d12,	// (0x00003dd4) popup_query_code_window_t2

0x3d5b,	// (0x00003e1d) popup_query_code_window_t3_ParamLimits

0x3d5b,	// (0x00003e1d) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x0000f8bf) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x0000f8bf) popup_query_code_window_t

0x3d8a,	// (0x00003e4c) query_popup_pane_ParamLimits

0x3d8a,	// (0x00003e4c) query_popup_pane

0x0847,	// (0x00000909) bg_popup_window_pane_cp15_ParamLimits

0x0847,	// (0x00000909) bg_popup_window_pane_cp15

0x0865,	// (0x00000927) indicator_popup_pane_cp1_ParamLimits

0x0865,	// (0x00000927) indicator_popup_pane_cp1

0x0878,	// (0x0000093a) indicator_popup_pane_cp2_ParamLimits

0x0878,	// (0x0000093a) indicator_popup_pane_cp2

0x088b,	// (0x0000094d) popup_query_data_code_window_g1_ParamLimits

0x088b,	// (0x0000094d) popup_query_data_code_window_g1

0x089e,	// (0x00000960) popup_query_data_code_window_t1_ParamLimits

0x089e,	// (0x00000960) popup_query_data_code_window_t1

0x08b0,	// (0x00000972) popup_query_data_code_window_t2_ParamLimits

0x08b0,	// (0x00000972) popup_query_data_code_window_t2

0x08c2,	// (0x00000984) popup_query_data_code_window_t3_ParamLimits

0x08c2,	// (0x00000984) popup_query_data_code_window_t3

0x08d8,	// (0x0000099a) popup_query_data_code_window_t4_ParamLimits

0x08d8,	// (0x0000099a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0000f627) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0000f627) popup_query_data_code_window_t

0x3696,	// (0x00003758) list_single_midp_graphic_pane_g3

0x08f0,	// (0x000009b2) query_popup_data_pane_cp2_ParamLimits

0x0903,	// (0x000009c5) query_popup_pane_cp2_ParamLimits

0x0903,	// (0x000009c5) query_popup_pane_cp2

0x01d1,	// (0x00000293) bg_popup_window_pane_cp11

0x3c88,	// (0x00003d4a) heading_pane_cp5

0x3c90,	// (0x00003d52) listscroll_popup_info_pane

0x01d1,	// (0x00000293) input_focus_pane_cp3

0x0916,	// (0x000009d8) query_popup_pane_t1

0x0924,	// (0x000009e6) list_popup_info_pane_ParamLimits

0x0924,	// (0x000009e6) list_popup_info_pane

0x0933,	// (0x000009f5) listscroll_popup_info_pane_g1

0x093b,	// (0x000009fd) scroll_pane_cp7

0x0945,	// (0x00000a07) popup_info_list_pane_t1_ParamLimits

0x0945,	// (0x00000a07) popup_info_list_pane_t1

0x095f,	// (0x00000a21) popup_info_list_pane_t2_ParamLimits

0x095f,	// (0x00000a21) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0000f630) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0000f630) popup_info_list_pane_t

0x01d1,	// (0x00000293) bg_popup_window_pane_cp12

0x53e8,	// (0x000054aa) find_popup_pane

0x0445,	// (0x00000507) bg_popup_window_pane_cp3

0x0979,	// (0x00000a3b) heading_pane_cp3

0x0988,	// (0x00000a4a) listscroll_popup_graphic_pane

0x01d1,	// (0x00000293) bg_popup_window_pane_cp4

0xbccf,	// (0x0000bd91) heading_pane_cp4

0x09f2,	// (0x00000ab4) listscroll_popup_colour_pane

0xbcd9,	// (0x0000bd9b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbcd9,	// (0x0000bd9b) cell_large_graphic_colour_none_popup_pane

0xbced,	// (0x0000bdaf) grid_large_graphic_colour_popup_pane_ParamLimits

0xbced,	// (0x0000bdaf) grid_large_graphic_colour_popup_pane

0xbd11,	// (0x0000bdd3) listscroll_popup_colour_pane_g1_ParamLimits

0xbd11,	// (0x0000bdd3) listscroll_popup_colour_pane_g1

0xbd28,	// (0x0000bdea) listscroll_popup_colour_pane_g2_ParamLimits

0xbd28,	// (0x0000bdea) listscroll_popup_colour_pane_g2

0xbd3f,	// (0x0000be01) listscroll_popup_colour_pane_g3_ParamLimits

0xbd3f,	// (0x0000be01) listscroll_popup_colour_pane_g3

0xbd4f,	// (0x0000be11) listscroll_popup_colour_pane_g4_ParamLimits

0xbd4f,	// (0x0000be11) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0000f635) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0000f635) listscroll_popup_colour_pane_g

0x0a80,	// (0x00000b42) scroll_pane_cp6_ParamLimits

0x0a80,	// (0x00000b42) scroll_pane_cp6

0xbd5f,	// (0x0000be21) cell_large_graphic_colour_popup_pane_ParamLimits

0xbd5f,	// (0x0000be21) cell_large_graphic_colour_popup_pane

0x0ab1,	// (0x00000b73) cell_large_graphic_colour_none_popup_pane_t1

0x01d1,	// (0x00000293) grid_highlight_pane_cp5

0x0ac0,	// (0x00000b82) cell_large_graphic_colour_popup_pane_g1

0x0ac8,	// (0x00000b8a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0000f63e) cell_large_graphic_colour_popup_pane_g

0x0ad0,	// (0x00000b92) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ad9,	// (0x00000b9b) grid_highlight_pane_cp4

0x0ae1,	// (0x00000ba3) bg_popup_window_pane_cp8_ParamLimits

0x0ae1,	// (0x00000ba3) bg_popup_window_pane_cp8

0x0afc,	// (0x00000bbe) popup_snote_single_text_window_g1_ParamLimits

0x0afc,	// (0x00000bbe) popup_snote_single_text_window_g1

0x0b0e,	// (0x00000bd0) popup_snote_single_text_window_t1_ParamLimits

0x0b0e,	// (0x00000bd0) popup_snote_single_text_window_t1

0x0b21,	// (0x00000be3) popup_snote_single_text_window_t2_ParamLimits

0x0b21,	// (0x00000be3) popup_snote_single_text_window_t2

0x0b34,	// (0x00000bf6) popup_snote_single_text_window_t3_ParamLimits

0x0b34,	// (0x00000bf6) popup_snote_single_text_window_t3

0x0b6d,	// (0x00000c2f) popup_snote_single_text_window_t4_ParamLimits

0x0b6d,	// (0x00000c2f) popup_snote_single_text_window_t4

0x0ba1,	// (0x00000c63) popup_snote_single_text_window_t5_ParamLimits

0x0ba1,	// (0x00000c63) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0000f643) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0000f643) popup_snote_single_text_window_t

0x0bd0,	// (0x00000c92) bg_popup_window_pane_cp9_ParamLimits

0x0bd0,	// (0x00000c92) bg_popup_window_pane_cp9

0x0afc,	// (0x00000bbe) popup_snote_single_graphic_window_g1_ParamLimits

0x0afc,	// (0x00000bbe) popup_snote_single_graphic_window_g1

0x0bde,	// (0x00000ca0) popup_snote_single_graphic_window_g2_ParamLimits

0x0bde,	// (0x00000ca0) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0000f64e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0000f64e) popup_snote_single_graphic_window_g

0x0bea,	// (0x00000cac) popup_snote_single_graphic_window_t1_ParamLimits

0x0bea,	// (0x00000cac) popup_snote_single_graphic_window_t1

0x0bfd,	// (0x00000cbf) popup_snote_single_graphic_window_t2_ParamLimits

0x0bfd,	// (0x00000cbf) popup_snote_single_graphic_window_t2

0x0c10,	// (0x00000cd2) popup_snote_single_graphic_window_t3_ParamLimits

0x0c10,	// (0x00000cd2) popup_snote_single_graphic_window_t3

0x0c49,	// (0x00000d0b) popup_snote_single_graphic_window_t4_ParamLimits

0x0c49,	// (0x00000d0b) popup_snote_single_graphic_window_t4

0x0c7d,	// (0x00000d3f) popup_snote_single_graphic_window_t5_ParamLimits

0x0c7d,	// (0x00000d3f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0000f653) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0000f653) popup_snote_single_graphic_window_t

0x5272,	// (0x00005334) grid_graphic_popup_pane_ParamLimits

0x5272,	// (0x00005334) grid_graphic_popup_pane

0x529c,	// (0x0000535e) listscroll_popup_graphic_pane_g1_ParamLimits

0x529c,	// (0x0000535e) listscroll_popup_graphic_pane_g1

0xd6ec,	// (0x0000d7ae) listscroll_popup_graphic_pane_g2_ParamLimits

0xd6ec,	// (0x0000d7ae) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0000fa3c) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0000fa3c) listscroll_popup_graphic_pane_g

0x52c4,	// (0x00005386) scroll_pane_cp5

0xd6a9,	// (0x0000d76b) cell_graphic_popup_pane_ParamLimits

0xd6a9,	// (0x0000d76b) cell_graphic_popup_pane

0x51e4,	// (0x000052a6) cell_graphic_popup_pane_g1

0x51ec,	// (0x000052ae) cell_graphic_popup_pane_g2

0x0ad0,	// (0x00000b92) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x0000fa35) cell_graphic_popup_pane_g

0xd69b,	// (0x0000d75d) cell_graphic_popup_pane_t2

0x0ad9,	// (0x00000b9b) grid_highlight_pane_cp3

0x0cbe,	// (0x00000d80) list_gen_pane_ParamLimits

0x0cbe,	// (0x00000d80) list_gen_pane

0x0cf0,	// (0x00000db2) scroll_pane

0xd652,	// (0x0000d714) bg_list_pane_g1_ParamLimits

0xd652,	// (0x0000d714) bg_list_pane_g1

0x5159,	// (0x0000521b) bg_list_pane_g2_ParamLimits

0x5159,	// (0x0000521b) bg_list_pane_g2

0x516e,	// (0x00005230) bg_list_pane_g3_ParamLimits

0x516e,	// (0x00005230) bg_list_pane_g3

0x5182,	// (0x00005244) bg_list_pane_g4_ParamLimits

0x5182,	// (0x00005244) bg_list_pane_g4

0xd66f,	// (0x0000d731) bg_list_pane_g5_ParamLimits

0xd66f,	// (0x0000d731) bg_list_pane_g5

0x0004,

0xf968,	// (0x0000fa2a) bg_list_pane_g_ParamLimits

0xf968,	// (0x0000fa2a) bg_list_pane_g

0xd5f6,	// (0x0000d6b8) list_double2_graphic_large_graphic_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double2_graphic_large_graphic_pane

0xd5f6,	// (0x0000d6b8) list_double2_graphic_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double2_graphic_pane

0xd5f6,	// (0x0000d6b8) list_double2_large_graphic_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double2_large_graphic_pane

0xd5f6,	// (0x0000d6b8) list_double2_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double2_pane

0xd5f6,	// (0x0000d6b8) list_double_graphic_heading_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_graphic_heading_pane

0xd5f6,	// (0x0000d6b8) list_double_graphic_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_graphic_pane

0xd5f6,	// (0x0000d6b8) list_double_heading_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_heading_pane

0xd5f6,	// (0x0000d6b8) list_double_large_graphic_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_large_graphic_pane

0xd5f6,	// (0x0000d6b8) list_double_number_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_number_pane

0xd5f6,	// (0x0000d6b8) list_double_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_pane

0xd5f6,	// (0x0000d6b8) list_double_time_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_double_time_pane

0xd5f6,	// (0x0000d6b8) list_setting_number_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_setting_number_pane

0xd5f6,	// (0x0000d6b8) list_setting_pane_ParamLimits

0xd5f6,	// (0x0000d6b8) list_setting_pane

0xd608,	// (0x0000d6ca) list_single_2graphic_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_2graphic_pane

0xd608,	// (0x0000d6ca) list_single_graphic_heading_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_graphic_heading_pane

0xd608,	// (0x0000d6ca) list_single_graphic_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_graphic_pane

0xd608,	// (0x0000d6ca) list_single_heading_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_heading_pane

0xd608,	// (0x0000d6ca) list_single_large_graphic_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_large_graphic_pane

0xd608,	// (0x0000d6ca) list_single_number_heading_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_number_heading_pane

0xd608,	// (0x0000d6ca) list_single_number_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_number_pane

0xd608,	// (0x0000d6ca) list_single_pane_ParamLimits

0xd608,	// (0x0000d6ca) list_single_pane

0x01d1,	// (0x00000293) list_highlight_pane_cp1

0x0d30,	// (0x00000df2) list_single_pane_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_pane_g1

0x0d3c,	// (0x00000dfe) list_single_pane_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_pane_g

0x4ff3,	// (0x000050b5) list_single_pane_t1_ParamLimits

0x4ff3,	// (0x000050b5) list_single_pane_t1

0x0d30,	// (0x00000df2) list_single_number_pane_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_number_pane_g1

0x0d3c,	// (0x00000dfe) list_single_number_pane_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_number_pane_g

0x35b7,	// (0x00003679) list_single_number_pane_t1_ParamLimits

0x35b7,	// (0x00003679) list_single_number_pane_t1

0x4d1d,	// (0x00004ddf) list_single_number_pane_t2_ParamLimits

0x4d1d,	// (0x00004ddf) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0000f9eb) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0000f9eb) list_single_number_pane_t

0x0d24,	// (0x00000de6) list_single_graphic_pane_g1_ParamLimits

0x0d24,	// (0x00000de6) list_single_graphic_pane_g1

0x0d30,	// (0x00000df2) list_single_graphic_pane_g2_ParamLimits

0x0d30,	// (0x00000df2) list_single_graphic_pane_g2

0x0d3c,	// (0x00000dfe) list_single_graphic_pane_g3_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0000f65e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0000f65e) list_single_graphic_pane_g

0x0d48,	// (0x00000e0a) list_single_graphic_pane_t1_ParamLimits

0x0d48,	// (0x00000e0a) list_single_graphic_pane_t1

0x0d30,	// (0x00000df2) list_single_heading_pane_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_heading_pane_g1

0x0d3c,	// (0x00000dfe) list_single_heading_pane_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_heading_pane_g

0x0d5e,	// (0x00000e20) list_single_heading_pane_t1_ParamLimits

0x0d5e,	// (0x00000e20) list_single_heading_pane_t1

0x0d74,	// (0x00000e36) list_single_heading_pane_t2_ParamLimits

0x0d74,	// (0x00000e36) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0000f66a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0000f66a) list_single_heading_pane_t

0x0d30,	// (0x00000df2) list_single_number_heading_pane_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_number_heading_pane_g1

0x0d3c,	// (0x00000dfe) list_single_number_heading_pane_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_number_heading_pane_g

0x0d5e,	// (0x00000e20) list_single_number_heading_pane_t1_ParamLimits

0x0d5e,	// (0x00000e20) list_single_number_heading_pane_t1

0x0d86,	// (0x00000e48) list_single_number_heading_pane_t2_ParamLimits

0x0d86,	// (0x00000e48) list_single_number_heading_pane_t2

0x0d98,	// (0x00000e5a) list_single_number_heading_pane_t3_ParamLimits

0x0d98,	// (0x00000e5a) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0000f66f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0000f66f) list_single_number_heading_pane_t

0x0daa,	// (0x00000e6c) list_single_graphic_heading_pane_g1_ParamLimits

0x0daa,	// (0x00000e6c) list_single_graphic_heading_pane_g1

0xbd88,	// (0x0000be4a) list_single_graphic_heading_pane_g4_ParamLimits

0xbd88,	// (0x0000be4a) list_single_graphic_heading_pane_g4

0x0d3c,	// (0x00000dfe) list_single_graphic_heading_pane_g5_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0000f676) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0000f676) list_single_graphic_heading_pane_g

0x0d5e,	// (0x00000e20) list_single_graphic_heading_pane_t1_ParamLimits

0x0d5e,	// (0x00000e20) list_single_graphic_heading_pane_t1

0x0dc7,	// (0x00000e89) list_single_graphic_heading_pane_t2_ParamLimits

0x0dc7,	// (0x00000e89) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0000f67d) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0000f67d) list_single_graphic_heading_pane_t

0x59f5,	// (0x00005ab7) list_single_large_graphic_pane_g1_ParamLimits

0x59f5,	// (0x00005ab7) list_single_large_graphic_pane_g1

0x0d30,	// (0x00000df2) list_single_large_graphic_pane_g2_ParamLimits

0x0d30,	// (0x00000df2) list_single_large_graphic_pane_g2

0x0d3c,	// (0x00000dfe) list_single_large_graphic_pane_g3_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0000f682) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0000f682) list_single_large_graphic_pane_g

0x3e44,	// (0x00003f06) wait_border_pane_g2_copy1

0xbd99,	// (0x0000be5b) list_single_large_graphic_pane_g4_cp2

0x5a01,	// (0x00005ac3) list_single_large_graphic_pane_t1_ParamLimits

0x5a01,	// (0x00005ac3) list_single_large_graphic_pane_t1

0x0f29,	// (0x00000feb) list_double_pane_g1_ParamLimits

0x0f29,	// (0x00000feb) list_double_pane_g1

0x0e54,	// (0x00000f16) list_double_pane_g2_ParamLimits

0x0e54,	// (0x00000f16) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0000f689) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0000f689) list_double_pane_g

0x0e60,	// (0x00000f22) list_double_pane_t1_ParamLimits

0x0e60,	// (0x00000f22) list_double_pane_t1

0xbda1,	// (0x0000be63) list_double_pane_t2_ParamLimits

0xbda1,	// (0x0000be63) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0000f68e) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0000f68e) list_double_pane_t

0xbdb3,	// (0x0000be75) list_double2_pane_g1_ParamLimits

0xbdb3,	// (0x0000be75) list_double2_pane_g1

0xbdc4,	// (0x0000be86) list_double2_pane_g2_ParamLimits

0xbdc4,	// (0x0000be86) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0000f693) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0000f693) list_double2_pane_g

0xbdd0,	// (0x0000be92) list_double2_pane_t1_ParamLimits

0xbdd0,	// (0x0000be92) list_double2_pane_t1

0x1045,	// (0x00001107) list_double2_pane_t2_ParamLimits

0x1045,	// (0x00001107) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0000f698) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0000f698) list_double2_pane_t

0x0f29,	// (0x00000feb) list_double_number_pane_g1_ParamLimits

0x0f29,	// (0x00000feb) list_double_number_pane_g1

0x0e54,	// (0x00000f16) list_double_number_pane_g2_ParamLimits

0x0e54,	// (0x00000f16) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0000f689) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0000f689) list_double_number_pane_g

0xbde6,	// (0x0000bea8) list_double_number_pane_t1_ParamLimits

0xbde6,	// (0x0000bea8) list_double_number_pane_t1

0x0f35,	// (0x00000ff7) list_double_number_pane_t2_ParamLimits

0x0f35,	// (0x00000ff7) list_double_number_pane_t2

0xbdf8,	// (0x0000beba) list_double_number_pane_t3_ParamLimits

0xbdf8,	// (0x0000beba) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0000f69d) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0000f69d) list_double_number_pane_t

0x0f1d,	// (0x00000fdf) list_double_graphic_pane_g1_ParamLimits

0x0f1d,	// (0x00000fdf) list_double_graphic_pane_g1

0xbe0a,	// (0x0000becc) list_double_graphic_pane_g2_ParamLimits

0xbe0a,	// (0x0000becc) list_double_graphic_pane_g2

0xbe19,	// (0x0000bedb) list_double_graphic_pane_g3_ParamLimits

0xbe19,	// (0x0000bedb) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0000f6a4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0000f6a4) list_double_graphic_pane_g

0xbe31,	// (0x0000bef3) list_double_graphic_pane_t1_ParamLimits

0xbe31,	// (0x0000bef3) list_double_graphic_pane_t1

0xbe47,	// (0x0000bf09) list_double_graphic_pane_t2_ParamLimits

0xbe47,	// (0x0000bf09) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0000f6ad) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0000f6ad) list_double_graphic_pane_t

0xbe59,	// (0x0000bf1b) list_double2_graphic_pane_g1_ParamLimits

0xbe59,	// (0x0000bf1b) list_double2_graphic_pane_g1

0x12fa,	// (0x000013bc) list_double2_graphic_pane_g2_ParamLimits

0x12fa,	// (0x000013bc) list_double2_graphic_pane_g2

0xbdc4,	// (0x0000be86) list_double2_graphic_pane_g3_ParamLimits

0xbdc4,	// (0x0000be86) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0000f6b2) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0000f6b2) list_double2_graphic_pane_g

0xbe65,	// (0x0000bf27) list_double2_graphic_pane_t1_ParamLimits

0xbe65,	// (0x0000bf27) list_double2_graphic_pane_t1

0x106d,	// (0x0000112f) list_double2_graphic_pane_t2_ParamLimits

0x106d,	// (0x0000112f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0000f6b9) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0000f6b9) list_double2_graphic_pane_t

0xbe7b,	// (0x0000bf3d) list_double_large_graphic_pane_g1_ParamLimits

0xbe7b,	// (0x0000bf3d) list_double_large_graphic_pane_g1

0xbe9a,	// (0x0000bf5c) list_double_large_graphic_pane_g2_ParamLimits

0xbe9a,	// (0x0000bf5c) list_double_large_graphic_pane_g2

0x0e54,	// (0x00000f16) list_double_large_graphic_pane_g3_ParamLimits

0x0e54,	// (0x00000f16) list_double_large_graphic_pane_g3

0xbeab,	// (0x0000bf6d) list_double_large_graphic_pane_g4_ParamLimits

0xbeab,	// (0x0000bf6d) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0000f6be) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0000f6be) list_double_large_graphic_pane_g

0xbebe,	// (0x0000bf80) list_double_large_graphic_pane_t1_ParamLimits

0xbebe,	// (0x0000bf80) list_double_large_graphic_pane_t1

0xbed7,	// (0x0000bf99) list_double_large_graphic_pane_t2_ParamLimits

0xbed7,	// (0x0000bf99) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0000f6c9) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0000f6c9) list_double_large_graphic_pane_t

0xbee9,	// (0x0000bfab) list_double2_large_graphic_pane_g1_ParamLimits

0xbee9,	// (0x0000bfab) list_double2_large_graphic_pane_g1

0xbdb3,	// (0x0000be75) list_double2_large_graphic_pane_g2_ParamLimits

0xbdb3,	// (0x0000be75) list_double2_large_graphic_pane_g2

0xbdc4,	// (0x0000be86) list_double2_large_graphic_pane_g3_ParamLimits

0xbdc4,	// (0x0000be86) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0000f6ce) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0000f6ce) list_double2_large_graphic_pane_g

0xbef5,	// (0x0000bfb7) list_double2_large_graphic_pane_t1_ParamLimits

0xbef5,	// (0x0000bfb7) list_double2_large_graphic_pane_t1

0xbf0b,	// (0x0000bfcd) list_double2_large_graphic_pane_t2_ParamLimits

0xbf0b,	// (0x0000bfcd) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0000f6d5) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0000f6d5) list_double2_large_graphic_pane_t

0xbf1d,	// (0x0000bfdf) list_double_heading_pane_g1_ParamLimits

0xbf1d,	// (0x0000bfdf) list_double_heading_pane_g1

0xbf2e,	// (0x0000bff0) list_double_heading_pane_g2_ParamLimits

0xbf2e,	// (0x0000bff0) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0000f6da) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0000f6da) list_double_heading_pane_g

0xbf3a,	// (0x0000bffc) list_double_heading_pane_t1_ParamLimits

0xbf3a,	// (0x0000bffc) list_double_heading_pane_t1

0xbf50,	// (0x0000c012) list_double_heading_pane_t2_ParamLimits

0xbf50,	// (0x0000c012) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0000f6df) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0000f6df) list_double_heading_pane_t

0x0ec2,	// (0x00000f84) list_double_graphic_heading_pane_g1_ParamLimits

0x0ec2,	// (0x00000f84) list_double_graphic_heading_pane_g1

0xbf1d,	// (0x0000bfdf) list_double_graphic_heading_pane_g2_ParamLimits

0xbf1d,	// (0x0000bfdf) list_double_graphic_heading_pane_g2

0xbf2e,	// (0x0000bff0) list_double_graphic_heading_pane_g3_ParamLimits

0xbf2e,	// (0x0000bff0) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0000f6e4) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0000f6e4) list_double_graphic_heading_pane_g

0xbf62,	// (0x0000c024) list_double_graphic_heading_pane_t1_ParamLimits

0xbf62,	// (0x0000c024) list_double_graphic_heading_pane_t1

0xbf78,	// (0x0000c03a) list_double_graphic_heading_pane_t2_ParamLimits

0xbf78,	// (0x0000c03a) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0000f6eb) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0000f6eb) list_double_graphic_heading_pane_t

0xbe9a,	// (0x0000bf5c) list_double_time_pane_g1_ParamLimits

0xbe9a,	// (0x0000bf5c) list_double_time_pane_g1

0x0e54,	// (0x00000f16) list_double_time_pane_g2_ParamLimits

0x0e54,	// (0x00000f16) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0000f6f0) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0000f6f0) list_double_time_pane_g

0xbf8a,	// (0x0000c04c) list_double_time_pane_t1_ParamLimits

0xbf8a,	// (0x0000c04c) list_double_time_pane_t1

0xbfa0,	// (0x0000c062) list_double_time_pane_t2_ParamLimits

0xbfa0,	// (0x0000c062) list_double_time_pane_t2

0xbfb2,	// (0x0000c074) list_double_time_pane_t3_ParamLimits

0xbfb2,	// (0x0000c074) list_double_time_pane_t3

0xbfc4,	// (0x0000c086) list_double_time_pane_t4_ParamLimits

0xbfc4,	// (0x0000c086) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0000f6f5) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0000f6f5) list_double_time_pane_t

0x12fa,	// (0x000013bc) list_setting_pane_g1_ParamLimits

0x12fa,	// (0x000013bc) list_setting_pane_g1

0xbdc4,	// (0x0000be86) list_setting_pane_g2_ParamLimits

0xbdc4,	// (0x0000be86) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0000f6fe) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0000f6fe) list_setting_pane_g

0xbfd6,	// (0x0000c098) list_setting_pane_t1_ParamLimits

0xbfd6,	// (0x0000c098) list_setting_pane_t1

0xbfed,	// (0x0000c0af) list_setting_pane_t2_ParamLimits

0xbfed,	// (0x0000c0af) list_setting_pane_t2

0x0002,

0xf641,	// (0x0000f703) list_setting_pane_t_ParamLimits

0xf641,	// (0x0000f703) list_setting_pane_t

0xc02c,	// (0x0000c0ee) set_value_pane_cp_ParamLimits

0xc02c,	// (0x0000c0ee) set_value_pane_cp

0x12fa,	// (0x000013bc) list_setting_number_pane_g1_ParamLimits

0x12fa,	// (0x000013bc) list_setting_number_pane_g1

0xbdc4,	// (0x0000be86) list_setting_number_pane_g2_ParamLimits

0xbdc4,	// (0x0000be86) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0000f6fe) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0000f6fe) list_setting_number_pane_g

0xc038,	// (0x0000c0fa) list_setting_number_pane_t1_ParamLimits

0xc038,	// (0x0000c0fa) list_setting_number_pane_t1

0xc04c,	// (0x0000c10e) list_setting_number_pane_t2_ParamLimits

0xc04c,	// (0x0000c10e) list_setting_number_pane_t2

0xc063,	// (0x0000c125) list_setting_number_pane_t3_ParamLimits

0xc063,	// (0x0000c125) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0000f70a) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0000f70a) list_setting_number_pane_t

0xc02c,	// (0x0000c0ee) set_value_pane_ParamLimits

0xc02c,	// (0x0000c0ee) set_value_pane

0x119b,	// (0x0000125d) bg_set_opt_pane_ParamLimits

0x119b,	// (0x0000125d) bg_set_opt_pane

0x11bc,	// (0x0000127e) set_value_pane_t1

0x11ca,	// (0x0000128c) slider_set_pane_cp3

0x11d3,	// (0x00001295) volume_small_pane_cp

0x11dc,	// (0x0000129e) list_form_gen_pane

0x11e5,	// (0x000012a7) scroll_pane_cp8

0xc0a6,	// (0x0000c168) form_field_data_pane_ParamLimits

0xc0a6,	// (0x0000c168) form_field_data_pane

0xc0bd,	// (0x0000c17f) form_field_data_wide_pane_ParamLimits

0xc0bd,	// (0x0000c17f) form_field_data_wide_pane

0xc0dd,	// (0x0000c19f) form_field_popup_pane_ParamLimits

0xc0dd,	// (0x0000c19f) form_field_popup_pane

0xc0f5,	// (0x0000c1b7) form_field_popup_wide_pane_ParamLimits

0xc0f5,	// (0x0000c1b7) form_field_popup_wide_pane

0x1280,	// (0x00001342) form_field_slider_pane_ParamLimits

0x1280,	// (0x00001342) form_field_slider_pane

0x1293,	// (0x00001355) form_field_slider_wide_pane_ParamLimits

0x1293,	// (0x00001355) form_field_slider_wide_pane

0x12a6,	// (0x00001368) data_form_pane

0xc116,	// (0x0000c1d8) form_field_data_pane_t1

0x12d4,	// (0x00001396) input_focus_pane

0x12e2,	// (0x000013a4) data_form_wide_pane

0x131a,	// (0x000013dc) form_field_data_wide_pane_t1

0x0aee,	// (0x00000bb0) input_focus_pane_cp6

0xc130,	// (0x0000c1f2) form_field_popup_pane_t1

0x12d4,	// (0x00001396) input_focus_pane_cp7

0x1351,	// (0x00001413) list_form_pane

0x1365,	// (0x00001427) form_field_popup_wide_pane_t1

0x12d4,	// (0x00001396) input_focus_pane_cp8

0x1377,	// (0x00001439) list_form_wide_pane

0xc152,	// (0x0000c214) form_field_slider_pane_t1_ParamLimits

0xc152,	// (0x0000c214) form_field_slider_pane_t1

0xc16a,	// (0x0000c22c) form_field_slider_pane_t2_ParamLimits

0xc16a,	// (0x0000c22c) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0000f71a) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0000f71a) form_field_slider_pane_t

0x076b,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x076b,	// (0x0000082d) input_focus_pane_cp9

0xc17f,	// (0x0000c241) slider_cont_pane_ParamLimits

0xc17f,	// (0x0000c241) slider_cont_pane

0x13c3,	// (0x00001485) form_field_slider_wide_pane_t1_ParamLimits

0x13c3,	// (0x00001485) form_field_slider_wide_pane_t1

0x13d5,	// (0x00001497) form_field_slider_wide_pane_t2_ParamLimits

0x13d5,	// (0x00001497) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0000f71f) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0000f71f) form_field_slider_wide_pane_t

0x076b,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x076b,	// (0x0000082d) input_focus_pane_cp10

0xc193,	// (0x0000c255) slider_cont_pane_cp1_ParamLimits

0xc193,	// (0x0000c255) slider_cont_pane_cp1

0xc1a7,	// (0x0000c269) slider_form_pane_cp

0x1403,	// (0x000014c5) input_focus_pane_g1

0x140b,	// (0x000014cd) input_focus_pane_g2

0x1413,	// (0x000014d5) input_focus_pane_g3

0x141b,	// (0x000014dd) input_focus_pane_g4

0x1423,	// (0x000014e5) input_focus_pane_g5

0x142b,	// (0x000014ed) input_focus_pane_g6

0x1433,	// (0x000014f5) input_focus_pane_g7

0x143b,	// (0x000014fd) input_focus_pane_g8

0x1443,	// (0x00001505) input_focus_pane_g9

0xf4ff,	// (0x0000f5c1) input_focus_pane_g10

0x0009,

0xf662,	// (0x0000f724) input_focus_pane_g

0x3e4d,	// (0x00003f0f) wait_border_pane_g3_copy1

0xc1af,	// (0x0000c271) data_form_pane_t1

0xf4ff,	// (0x0000f5c1) wait_anim_pane_g1_copy1

0xd5da,	// (0x0000d69c) data_form_wide_pane_t1

0xc1c9,	// (0x0000c28b) list_form_graphic_pane_cp_ParamLimits

0xc1c9,	// (0x0000c28b) list_form_graphic_pane_cp

0x4fab,	// (0x0000506d) slider_form_pane_g1

0x4fb4,	// (0x00005076) slider_form_pane_g2

0x0006,

0xf959,	// (0x0000fa1b) slider_form_pane_g

0xc1c9,	// (0x0000c28b) list_form_graphic_pane_ParamLimits

0xc1c9,	// (0x0000c28b) list_form_graphic_pane

0x149b,	// (0x0000155d) list_form_graphic_pane_g1

0x14a3,	// (0x00001565) list_form_graphic_pane_t1_ParamLimits

0x14a3,	// (0x00001565) list_form_graphic_pane_t1

0x0445,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0445,	// (0x00000507) list_highlight_pane_cp5

0x14b8,	// (0x0000157a) find_pane_g1

0x14c1,	// (0x00001583) input_find_pane

0x14ca,	// (0x0000158c) input_find_pane_g1_ParamLimits

0x14ca,	// (0x0000158c) input_find_pane_g1

0x14d6,	// (0x00001598) input_find_pane_t1_ParamLimits

0x14d6,	// (0x00001598) input_find_pane_t1

0x14eb,	// (0x000015ad) input_find_pane_t2_ParamLimits

0x14eb,	// (0x000015ad) input_find_pane_t2

0x0001,

0xf677,	// (0x0000f739) input_find_pane_t_ParamLimits

0xf677,	// (0x0000f739) input_find_pane_t

0x1500,	// (0x000015c2) input_focus_pane_cp5_ParamLimits

0x1500,	// (0x000015c2) input_focus_pane_cp5

0x151f,	// (0x000015e1) bg_popup_window_pane_cp2_ParamLimits

0x151f,	// (0x000015e1) bg_popup_window_pane_cp2

0x152c,	// (0x000015ee) listscroll_menu_pane_ParamLimits

0x152c,	// (0x000015ee) listscroll_menu_pane

0xc1e7,	// (0x0000c2a9) popup_submenu_window_ParamLimits

0xc1e7,	// (0x0000c2a9) popup_submenu_window

0x1564,	// (0x00001626) find_popup_pane_g1

0x156c,	// (0x0000162e) input_popup_find_pane_cp

0x1576,	// (0x00001638) input_focus_pane_cp4_ParamLimits

0x1576,	// (0x00001638) input_focus_pane_cp4

0x1590,	// (0x00001652) input_popup_find_pane_t1_ParamLimits

0x1590,	// (0x00001652) input_popup_find_pane_t1

0x01d1,	// (0x00000293) bg_popup_sub_pane_cp

0x15be,	// (0x00001680) listscroll_popup_sub_pane

0x15c6,	// (0x00001688) list_submenu_pane_ParamLimits

0x15c6,	// (0x00001688) list_submenu_pane

0x15d7,	// (0x00001699) scroll_pane_cp4

0x15df,	// (0x000016a1) list_single_popup_submenu_pane_ParamLimits

0x15df,	// (0x000016a1) list_single_popup_submenu_pane

0x15f3,	// (0x000016b5) list_single_popup_submenu_pane_g1

0x15fb,	// (0x000016bd) list_single_popup_submenu_pane_t1_ParamLimits

0x15fb,	// (0x000016bd) list_single_popup_submenu_pane_t1

0x076b,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp1

0x1610,	// (0x000016d2) tabs_2_active_pane_g1

0xc221,	// (0x0000c2e3) tabs_2_active_pane_t1

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x076b,	// (0x0000082d) bg_passive_tab_pane_cp1

0x1610,	// (0x000016d2) tabs_2_passive_pane_g1

0xc221,	// (0x0000c2e3) tabs_2_passive_pane_t1

0x0445,	// (0x00000507) bg_active_tab_pane_cp4

0xc233,	// (0x0000c2f5) tabs_2_long_active_pane_t1

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp4

0x369e,	// (0x00003760) list_single_midp_graphic_pane_g4_ParamLimits

0x0445,	// (0x00000507) bg_active_tab_pane_cp5

0xc246,	// (0x0000c308) tabs_3_long_active_pane_t1

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp5

0x369e,	// (0x00003760) list_single_midp_graphic_pane_g4

0x0445,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0445,	// (0x00000507) bg_popup_window_pane_cp13

0x1672,	// (0x00001734) listscroll_popup_fast_pane_ParamLimits

0x1672,	// (0x00001734) listscroll_popup_fast_pane

0x1681,	// (0x00001743) grid_popup_fast_pane_ParamLimits

0x1681,	// (0x00001743) grid_popup_fast_pane

0x1693,	// (0x00001755) scroll_pane_cp9_ParamLimits

0x1693,	// (0x00001755) scroll_pane_cp9

0x7326,	// (0x000073e8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7326,	// (0x000073e8) list_single_graphic_hl_pane_t1_cp2

0x16b7,	// (0x00001779) input_focus_pane_cp20_ParamLimits

0x16b7,	// (0x00001779) input_focus_pane_cp20

0x16c5,	// (0x00001787) query_popup_data_pane_t1_ParamLimits

0x16c5,	// (0x00001787) query_popup_data_pane_t1

0x16d8,	// (0x0000179a) query_popup_data_pane_t2_ParamLimits

0x16d8,	// (0x0000179a) query_popup_data_pane_t2

0x171e,	// (0x000017e0) query_popup_data_pane_t3_ParamLimits

0x171e,	// (0x000017e0) query_popup_data_pane_t3

0x175f,	// (0x00001821) query_popup_data_pane_t4_ParamLimits

0x175f,	// (0x00001821) query_popup_data_pane_t4

0x179b,	// (0x0000185d) query_popup_data_pane_t5_ParamLimits

0x179b,	// (0x0000185d) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0000f73e) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0000f73e) query_popup_data_pane_t

0x1403,	// (0x000014c5) bg_set_opt_pane_g1

0x140b,	// (0x000014cd) bg_set_opt_pane_g2

0x1413,	// (0x000014d5) bg_set_opt_pane_g3

0x141b,	// (0x000014dd) bg_set_opt_pane_g4

0x1423,	// (0x000014e5) bg_set_opt_pane_g5

0x142b,	// (0x000014ed) bg_set_opt_pane_g6

0x1433,	// (0x000014f5) bg_set_opt_pane_g7

0x143b,	// (0x000014fd) bg_set_opt_pane_g8

0x1443,	// (0x00001505) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0000f749) bg_set_opt_pane_g

0x20b9,	// (0x0000217b) control_top_pane_stacon_ParamLimits

0x20b9,	// (0x0000217b) control_top_pane_stacon

0x210c,	// (0x000021ce) signal_pane_stacon_ParamLimits

0x210c,	// (0x000021ce) signal_pane_stacon

0x2131,	// (0x000021f3) stacon_top_pane_g1_ParamLimits

0x2131,	// (0x000021f3) stacon_top_pane_g1

0x2153,	// (0x00002215) title_pane_stacon_ParamLimits

0x2153,	// (0x00002215) title_pane_stacon

0x217d,	// (0x0000223f) uni_indicator_pane_stacon_ParamLimits

0x217d,	// (0x0000223f) uni_indicator_pane_stacon

0x2192,	// (0x00002254) battery_pane_stacon_ParamLimits

0x2192,	// (0x00002254) battery_pane_stacon

0x21d6,	// (0x00002298) control_bottom_pane_stacon_ParamLimits

0x21d6,	// (0x00002298) control_bottom_pane_stacon

0x21f9,	// (0x000022bb) navi_pane_stacon_ParamLimits

0x21f9,	// (0x000022bb) navi_pane_stacon

0x221c,	// (0x000022de) stacon_bottom_pane_g1_ParamLimits

0x221c,	// (0x000022de) stacon_bottom_pane_g1

0x17d2,	// (0x00001894) aid_levels_signal_lsc_ParamLimits

0x17d2,	// (0x00001894) aid_levels_signal_lsc

0x17e8,	// (0x000018aa) signal_pane_stacon_g1_ParamLimits

0x17e8,	// (0x000018aa) signal_pane_stacon_g1

0x17fc,	// (0x000018be) signal_pane_stacon_g2_ParamLimits

0x17fc,	// (0x000018be) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0000f75c) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0000f75c) signal_pane_stacon_g

0x183e,	// (0x00001900) title_pane_stacon_t1_ParamLimits

0x183e,	// (0x00001900) title_pane_stacon_t1

0x1863,	// (0x00001925) uni_indicator_pane_stacon_g1

0x186d,	// (0x0000192f) uni_indicator_pane_stacon_g2

0x1877,	// (0x00001939) uni_indicator_pane_stacon_g3

0x1881,	// (0x00001943) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0000f768) uni_indicator_pane_stacon_g

0x188b,	// (0x0000194d) control_top_pane_stacon_g1

0x1893,	// (0x00001955) control_top_pane_stacon_t1_ParamLimits

0x1893,	// (0x00001955) control_top_pane_stacon_t1

0x18ca,	// (0x0000198c) aid_levels_battery_lsc_ParamLimits

0x18ca,	// (0x0000198c) aid_levels_battery_lsc

0x18e1,	// (0x000019a3) battery_pane_stacon_g1_ParamLimits

0x18e1,	// (0x000019a3) battery_pane_stacon_g1

0x18f4,	// (0x000019b6) battery_pane_stacon_g2_ParamLimits

0x18f4,	// (0x000019b6) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0000f771) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0000f771) battery_pane_stacon_g

0x1932,	// (0x000019f4) navi_icon_pane_stacon

0x1946,	// (0x00001a08) navi_navi_pane_stacon

0x1932,	// (0x000019f4) navi_text_pane_stacon

0x188b,	// (0x0000194d) control_bottom_pane_stacon_g1

0x195a,	// (0x00001a1c) control_bottom_pane_stacon_t1_ParamLimits

0x195a,	// (0x00001a1c) control_bottom_pane_stacon_t1

0xc258,	// (0x0000c31a) grid_app_pane_ParamLimits

0xc258,	// (0x0000c31a) grid_app_pane

0xc290,	// (0x0000c352) scroll_pane_cp15_ParamLimits

0xc290,	// (0x0000c352) scroll_pane_cp15

0xc2a5,	// (0x0000c367) cell_app_pane_ParamLimits

0xc2a5,	// (0x0000c367) cell_app_pane

0xc2ea,	// (0x0000c3ac) cell_app_pane_g1_ParamLimits

0xc2ea,	// (0x0000c3ac) cell_app_pane_g1

0x1a2c,	// (0x00001aee) cell_app_pane_g2_ParamLimits

0x1a2c,	// (0x00001aee) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0000f776) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0000f776) cell_app_pane_g

0xc30e,	// (0x0000c3d0) cell_app_pane_t1_ParamLimits

0xc30e,	// (0x0000c3d0) cell_app_pane_t1

0x1a4f,	// (0x00001b11) grid_highlight_pane_ParamLimits

0x1a4f,	// (0x00001b11) grid_highlight_pane

0x1403,	// (0x000014c5) cell_highlight_pane_g1

0x140b,	// (0x000014cd) cell_highlight_pane_g2

0x1413,	// (0x000014d5) cell_highlight_pane_g3

0x141b,	// (0x000014dd) cell_highlight_pane_g4

0x1423,	// (0x000014e5) cell_highlight_pane_g5

0x142b,	// (0x000014ed) cell_highlight_pane_g6

0x1433,	// (0x000014f5) cell_highlight_pane_g7

0x143b,	// (0x000014fd) cell_highlight_pane_g8

0x1443,	// (0x00001505) cell_highlight_pane_g9

0xf4ff,	// (0x0000f5c1) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0000f724) cell_highlight_pane_g

0x1a73,	// (0x00001b35) bg_scroll_pane

0x1a92,	// (0x00001b54) scroll_handle_pane

0x1ae3,	// (0x00001ba5) scroll_bg_pane_g1

0x1af8,	// (0x00001bba) scroll_bg_pane_g2

0x1b10,	// (0x00001bd2) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0000f77b) scroll_bg_pane_g

0x1b25,	// (0x00001be7) scroll_handle_focus_pane_ParamLimits

0x1b25,	// (0x00001be7) scroll_handle_focus_pane

0x1ae3,	// (0x00001ba5) scroll_handle_pane_g1

0x1b32,	// (0x00001bf4) scroll_handle_pane_g2

0x1b10,	// (0x00001bd2) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0000f782) scroll_handle_pane_g

0x1576,	// (0x00001638) bg_popup_sub_pane_cp21_ParamLimits

0x1576,	// (0x00001638) bg_popup_sub_pane_cp21

0x1b46,	// (0x00001c08) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b46,	// (0x00001c08) popup_fep_japan_predictive_window_t1

0x1b60,	// (0x00001c22) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b60,	// (0x00001c22) popup_fep_japan_predictive_window_t2

0x1b93,	// (0x00001c55) popup_fep_japan_predictive_window_t3_ParamLimits

0x1b93,	// (0x00001c55) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0000f789) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0000f789) popup_fep_japan_predictive_window_t

0x01d1,	// (0x00000293) bg_popup_sub_pane_cp23

0x1bca,	// (0x00001c8c) listscroll_japin_cand_pane

0x1bd2,	// (0x00001c94) popup_fep_japan_candidate_window_t1

0x1be0,	// (0x00001ca2) candidate_pane_ParamLimits

0x1be0,	// (0x00001ca2) candidate_pane

0x1bf2,	// (0x00001cb4) scroll_pane_cp30

0x1bfa,	// (0x00001cbc) list_single_popup_jap_candidate_pane_ParamLimits

0x1bfa,	// (0x00001cbc) list_single_popup_jap_candidate_pane

0x01d1,	// (0x00000293) list_highlight_pane_cp30

0x1c0f,	// (0x00001cd1) list_single_popup_jap_candidate_pane_t1

0x1c1e,	// (0x00001ce0) level_1_signal

0x1c30,	// (0x00001cf2) level_2_signal

0x1c43,	// (0x00001d05) level_3_signal

0x1c56,	// (0x00001d18) level_4_signal

0x1c69,	// (0x00001d2b) level_5_signal

0x1c7c,	// (0x00001d3e) level_6_signal

0x1c8f,	// (0x00001d51) level_7_signal

0x1c1e,	// (0x00001ce0) level_1_battery

0x1c30,	// (0x00001cf2) level_2_battery

0x1c43,	// (0x00001d05) level_3_battery

0x1c56,	// (0x00001d18) level_4_battery

0x1c69,	// (0x00001d2b) level_5_battery

0x1c7c,	// (0x00001d3e) level_6_battery

0x1c8f,	// (0x00001d51) level_7_battery

0x1cd9,	// (0x00001d9b) list_menu_pane_ParamLimits

0x1cd9,	// (0x00001d9b) list_menu_pane

0x1cef,	// (0x00001db1) scroll_pane_cp25_ParamLimits

0x1cef,	// (0x00001db1) scroll_pane_cp25

0x1d08,	// (0x00001dca) list_double2_graphic_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double2_graphic_pane_cp2

0x1d08,	// (0x00001dca) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double2_large_graphic_pane_cp2

0x1d08,	// (0x00001dca) list_double2_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double2_pane_cp2

0x1d08,	// (0x00001dca) list_double_graphic_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double_graphic_pane_cp2

0x1d08,	// (0x00001dca) list_double_large_graphic_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double_large_graphic_pane_cp2

0x1d08,	// (0x00001dca) list_double_number_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double_number_pane_cp2

0x1d08,	// (0x00001dca) list_double_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double_pane_cp2

0xc325,	// (0x0000c3e7) list_single_2graphic_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_2graphic_pane_cp2

0xc325,	// (0x0000c3e7) list_single_graphic_heading_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_graphic_heading_pane_cp2

0xc325,	// (0x0000c3e7) list_single_graphic_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_graphic_pane_cp2

0xc325,	// (0x0000c3e7) list_single_heading_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_heading_pane_cp2

0x1d45,	// (0x00001e07) list_single_large_graphic_pane_cp2_ParamLimits

0x1d45,	// (0x00001e07) list_single_large_graphic_pane_cp2

0xc325,	// (0x0000c3e7) list_single_number_heading_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_number_heading_pane_cp2

0xc325,	// (0x0000c3e7) list_single_number_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_number_pane_cp2

0xc325,	// (0x0000c3e7) list_single_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_pane_cp2

0x1e1c,	// (0x00001ede) bg_popup_sub_pane_cp22

0x1e41,	// (0x00001f03) popup_side_volume_key_window_g1

0x1e6b,	// (0x00001f2d) popup_side_volume_key_window_t1

0x1e87,	// (0x00001f49) volume_small_pane_cp1

0x076b,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x076b,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1e8f,	// (0x00001f51) fep_china_uni_candidate_pane_ParamLimits

0x1e8f,	// (0x00001f51) fep_china_uni_candidate_pane

0x1ea3,	// (0x00001f65) fep_china_uni_entry_pane

0x1eb3,	// (0x00001f75) popup_fep_china_uni_window_g1

0x1ecf,	// (0x00001f91) fep_china_uni_entry_pane_g1

0x1ed7,	// (0x00001f99) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0000f7ba) fep_china_uni_entry_pane_g

0x1edf,	// (0x00001fa1) fep_entry_item_pane

0x1ee9,	// (0x00001fab) fep_candidate_item_pane

0x1ef1,	// (0x00001fb3) fep_china_uni_candidate_pane_g1

0x1ef9,	// (0x00001fbb) fep_china_uni_candidate_pane_g2

0x1f01,	// (0x00001fc3) fep_china_uni_candidate_pane_g3

0x1f09,	// (0x00001fcb) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0000f7bf) fep_china_uni_candidate_pane_g

0xf4ff,	// (0x0000f5c1) fep_entry_item_pane_g1

0x1f11,	// (0x00001fd3) fep_entry_item_pane_t1_ParamLimits

0x1f11,	// (0x00001fd3) fep_entry_item_pane_t1

0x1f27,	// (0x00001fe9) fep_candidate_item_pane_t1_ParamLimits

0x1f27,	// (0x00001fe9) fep_candidate_item_pane_t1

0x1f3c,	// (0x00001ffe) fep_candidate_item_pane_t2_ParamLimits

0x1f3c,	// (0x00001ffe) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0000f7c8) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0000f7c8) fep_candidate_item_pane_t

0x0445,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0445,	// (0x00000507) list_highlight_pane_cp31

0x1f4e,	// (0x00002010) level_1_signal_lsc

0x1f57,	// (0x00002019) level_2_signal_lsc

0x1f60,	// (0x00002022) level_3_signal_lsc

0x1f69,	// (0x0000202b) level_4_signal_lsc

0x1f72,	// (0x00002034) level_5_signal_lsc

0x1f7b,	// (0x0000203d) level_6_signal_lsc

0x1f84,	// (0x00002046) level_7_signal_lsc

0x1f84,	// (0x00002046) level_1_battery_lsc

0x1f8d,	// (0x0000204f) level_2_battery_lsc

0x1f96,	// (0x00002058) level_3_battery_lsc

0x1f9f,	// (0x00002061) level_4_battery_lsc

0x1fa8,	// (0x0000206a) level_5_battery_lsc

0x1fb1,	// (0x00002073) level_6_battery_lsc

0x1f4e,	// (0x00002010) level_7_battery_lsc

0x1fba,	// (0x0000207c) scroll_handle_focus_pane_g1

0x1fc3,	// (0x00002085) scroll_handle_focus_pane_g2

0x1fcc,	// (0x0000208e) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0000f7cd) scroll_handle_focus_pane_g

0x1fd5,	// (0x00002097) list_single_2graphic_pane_g1_ParamLimits

0x1fd5,	// (0x00002097) list_single_2graphic_pane_g1

0xbd88,	// (0x0000be4a) list_single_2graphic_pane_g2_ParamLimits

0xbd88,	// (0x0000be4a) list_single_2graphic_pane_g2

0x0d3c,	// (0x00000dfe) list_single_2graphic_pane_g3_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_2graphic_pane_g3

0x1fe1,	// (0x000020a3) list_single_2graphic_pane_g4_ParamLimits

0x1fe1,	// (0x000020a3) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0000f7d4) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0000f7d4) list_single_2graphic_pane_g

0x1ff2,	// (0x000020b4) list_single_2graphic_pane_t1_ParamLimits

0x1ff2,	// (0x000020b4) list_single_2graphic_pane_t1

0xc3b2,	// (0x0000c474) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc3b2,	// (0x0000c474) list_double2_graphic_large_graphic_pane_g1

0xbdb3,	// (0x0000be75) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbdb3,	// (0x0000be75) list_double2_graphic_large_graphic_pane_g2

0xbdc4,	// (0x0000be86) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbdc4,	// (0x0000be86) list_double2_graphic_large_graphic_pane_g3

0xc3c4,	// (0x0000c486) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc3c4,	// (0x0000c486) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0000f7dd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0000f7dd) list_double2_graphic_large_graphic_pane_g

0xc3d0,	// (0x0000c492) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc3d0,	// (0x0000c492) list_double2_graphic_large_graphic_pane_t1

0xc3e6,	// (0x0000c4a8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc3e6,	// (0x0000c4a8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0000f7e6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0000f7e6) list_double2_graphic_large_graphic_pane_t

0x22e7,	// (0x000023a9) popup_fast_swap_window_ParamLimits

0x22e7,	// (0x000023a9) popup_fast_swap_window

0x2303,	// (0x000023c5) popup_side_volume_key_window

0x231f,	// (0x000023e1) stacon_top_pane

0x2329,	// (0x000023eb) status_pane_ParamLimits

0x2329,	// (0x000023eb) status_pane

0xc3f8,	// (0x0000c4ba) status_small_pane

0x01d1,	// (0x00000293) control_pane

0x01d1,	// (0x00000293) stacon_bottom_pane

0x11e5,	// (0x000012a7) scroll_pane_cp121

0x11dc,	// (0x0000129e) set_content_pane

0x2064,	// (0x00002126) bg_active_tab_pane_g1_cp1

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp1

0x2076,	// (0x00002138) bg_active_tab_pane_g3_cp1

0x2064,	// (0x00002126) bg_passive_tab_pane_g1_cp1

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp1

0x2076,	// (0x00002138) bg_passive_tab_pane_g3_cp1

0x207f,	// (0x00002141) bg_active_tab_pane_g1_cp2

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp2

0x2088,	// (0x0000214a) bg_active_tab_pane_g3_cp2

0x207f,	// (0x00002141) bg_passive_tab_pane_g1_cp2

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp2

0x2088,	// (0x0000214a) bg_passive_tab_pane_g3_cp2

0x2091,	// (0x00002153) bg_active_tab_pane_g1_cp3

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp3

0x209a,	// (0x0000215c) bg_active_tab_pane_g3_cp3

0x2091,	// (0x00002153) bg_passive_tab_pane_g1_cp3

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp3

0x209a,	// (0x0000215c) bg_passive_tab_pane_g3_cp3

0x20a3,	// (0x00002165) bg_active_tab_pane_g1_cp4

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp4

0x20ae,	// (0x00002170) bg_active_tab_pane_g3_cp4

0x20a3,	// (0x00002165) bg_passive_tab_pane_g1_cp4

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp4

0x20ae,	// (0x00002170) bg_passive_tab_pane_g3_cp4

0x2238,	// (0x000022fa) bg_active_tab_pane_g1_cp5

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp5

0x2241,	// (0x00002303) bg_active_tab_pane_g3_cp5

0x2238,	// (0x000022fa) bg_passive_tab_pane_g1_cp5

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp5

0x2241,	// (0x00002303) bg_passive_tab_pane_g3_cp5

0x579f,	// (0x00005861) list_set_graphic_pane_ParamLimits

0x579f,	// (0x00005861) list_set_graphic_pane

0x01d1,	// (0x00000293) bg_set_opt_pane_cp4

0x226a,	// (0x0000232c) list_set_graphic_pane_g1_ParamLimits

0x226a,	// (0x0000232c) list_set_graphic_pane_g1

0x2276,	// (0x00002338) list_set_graphic_pane_g2_ParamLimits

0x2276,	// (0x00002338) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0000f7eb) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0000f7eb) list_set_graphic_pane_g

0x0009,

0xfa97,	// (0x0000fb59) volume_small_pane_cp_g

0x229a,	// (0x0000235c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x229a,	// (0x0000235c) list_double2_large_graphic_pane_g1_cp2

0x22a6,	// (0x00002368) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22a6,	// (0x00002368) list_double2_large_graphic_pane_g2_cp2

0x22b7,	// (0x00002379) list_double2_large_graphic_pane_g3_cp2

0x22bf,	// (0x00002381) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22bf,	// (0x00002381) list_double2_large_graphic_pane_t1_cp2

0x22d5,	// (0x00002397) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22d5,	// (0x00002397) list_double2_large_graphic_pane_t2_cp2

0x4a84,	// (0x00004b46) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a84,	// (0x00004b46) list_double_large_graphic_pane_g1_cp2

0x4a95,	// (0x00004b57) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a95,	// (0x00004b57) list_double_large_graphic_pane_g2_cp2

0x2450,	// (0x00002512) list_double_large_graphic_pane_g3_cp2

0x4aa6,	// (0x00004b68) list_double_large_graphic_pane_g4_cp

0x4aae,	// (0x00004b70) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4aae,	// (0x00004b70) list_double_large_graphic_pane_t1_cp2

0x4ac5,	// (0x00004b87) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ac5,	// (0x00004b87) list_double_large_graphic_pane_t2_cp2

0x2342,	// (0x00002404) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2342,	// (0x00002404) list_double2_graphic_pane_g1_cp2

0x2350,	// (0x00002412) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2350,	// (0x00002412) list_double2_graphic_pane_g2_cp2

0x2361,	// (0x00002423) list_double2_graphic_pane_g3_cp2

0x236b,	// (0x0000242d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x236b,	// (0x0000242d) list_double2_graphic_pane_t1_cp2

0x2381,	// (0x00002443) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2381,	// (0x00002443) list_double2_graphic_pane_t2_cp2

0x2393,	// (0x00002455) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2393,	// (0x00002455) list_single_number_heading_pane_g1_cp2

0x239f,	// (0x00002461) list_single_number_heading_pane_g2_cp2

0x23a7,	// (0x00002469) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23a7,	// (0x00002469) list_single_number_heading_pane_t1_cp2

0x23bd,	// (0x0000247f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23bd,	// (0x0000247f) list_single_number_heading_pane_t2_cp2

0x23cf,	// (0x00002491) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23cf,	// (0x00002491) list_single_number_heading_pane_t3_cp2

0x2393,	// (0x00002455) list_single_heading_pane_g1_cp2_ParamLimits

0x2393,	// (0x00002455) list_single_heading_pane_g1_cp2

0x239f,	// (0x00002461) list_single_heading_pane_g2_cp2

0x23a7,	// (0x00002469) list_single_heading_pane_t1_cp2_ParamLimits

0x23a7,	// (0x00002469) list_single_heading_pane_t1_cp2

0x488c,	// (0x0000494e) list_single_heading_pane_t2_cp2_ParamLimits

0x488c,	// (0x0000494e) list_single_heading_pane_t2_cp2

0x47d4,	// (0x00004896) list_double_graphic_pane_g1_cp2_ParamLimits

0x47d4,	// (0x00004896) list_double_graphic_pane_g1_cp2

0x47e0,	// (0x000048a2) list_double_graphic_pane_g2_cp2_ParamLimits

0x47e0,	// (0x000048a2) list_double_graphic_pane_g2_cp2

0x47ef,	// (0x000048b1) list_double_graphic_pane_g3_cp2

0x47f7,	// (0x000048b9) list_double_graphic_pane_t1_cp2_ParamLimits

0x47f7,	// (0x000048b9) list_double_graphic_pane_t1_cp2

0x480d,	// (0x000048cf) list_double_graphic_pane_t2_cp2_ParamLimits

0x480d,	// (0x000048cf) list_double_graphic_pane_t2_cp2

0x2444,	// (0x00002506) list_double_number_pane_g1_cp2_ParamLimits

0x2444,	// (0x00002506) list_double_number_pane_g1_cp2

0x2450,	// (0x00002512) list_double_number_pane_g2_cp2

0x4798,	// (0x0000485a) list_double_number_pane_t1_cp2_ParamLimits

0x4798,	// (0x0000485a) list_double_number_pane_t1_cp2

0x47ac,	// (0x0000486e) list_double_number_pane_t2_cp2_ParamLimits

0x47ac,	// (0x0000486e) list_double_number_pane_t2_cp2

0x47c2,	// (0x00004884) list_double_number_pane_t3_cp2_ParamLimits

0x47c2,	// (0x00004884) list_double_number_pane_t3_cp2

0x4670,	// (0x00004732) list_single_graphic_pane_g1_cp2_ParamLimits

0x4670,	// (0x00004732) list_single_graphic_pane_g1_cp2

0x24a8,	// (0x0000256a) list_single_graphic_pane_g2_cp2_ParamLimits

0x24a8,	// (0x0000256a) list_single_graphic_pane_g2_cp2

0x24b4,	// (0x00002576) list_single_graphic_pane_g3_cp2

0x4646,	// (0x00004708) list_single_graphic_pane_t1_cp2_ParamLimits

0x4646,	// (0x00004708) list_single_graphic_pane_t1_cp2

0x24a8,	// (0x0000256a) list_single_number_pane_g1_cp2_ParamLimits

0x24a8,	// (0x0000256a) list_single_number_pane_g1_cp2

0x24b4,	// (0x00002576) list_single_number_pane_g2_cp2

0x4646,	// (0x00004708) list_single_number_pane_t1_cp2_ParamLimits

0x4646,	// (0x00004708) list_single_number_pane_t1_cp2

0x465c,	// (0x0000471e) list_single_number_pane_t2_cp2_ParamLimits

0x465c,	// (0x0000471e) list_single_number_pane_t2_cp2

0x22a6,	// (0x00002368) list_double2_pane_g1_cp2_ParamLimits

0x22a6,	// (0x00002368) list_double2_pane_g1_cp2

0x22b7,	// (0x00002379) list_double2_pane_g2_cp2

0x241c,	// (0x000024de) list_double2_pane_t1_cp2_ParamLimits

0x241c,	// (0x000024de) list_double2_pane_t1_cp2

0x2432,	// (0x000024f4) list_double2_pane_t2_cp2_ParamLimits

0x2432,	// (0x000024f4) list_double2_pane_t2_cp2

0x2444,	// (0x00002506) list_double_pane_g1_cp2_ParamLimits

0x2444,	// (0x00002506) list_double_pane_g1_cp2

0x2450,	// (0x00002512) list_double_pane_g2_cp2

0x2458,	// (0x0000251a) list_double_pane_t1_cp2_ParamLimits

0x2458,	// (0x0000251a) list_double_pane_t1_cp2

0x246e,	// (0x00002530) list_double_pane_t2_cp2_ParamLimits

0x246e,	// (0x00002530) list_double_pane_t2_cp2

0x2498,	// (0x0000255a) list_single_pane_cp2_g3

0x24a8,	// (0x0000256a) list_single_pane_g1_cp2_ParamLimits

0x24a8,	// (0x0000256a) list_single_pane_g1_cp2

0x24b4,	// (0x00002576) list_single_pane_g2_cp2

0x24bc,	// (0x0000257e) list_single_pane_t1_cp2_ParamLimits

0x24bc,	// (0x0000257e) list_single_pane_t1_cp2

0x24d4,	// (0x00002596) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24d4,	// (0x00002596) list_single_large_graphic_pane_g1_cp2

0x0d30,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0d30,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2

0x24e0,	// (0x000025a2) list_single_large_graphic_pane_g3_cp2

0x24e8,	// (0x000025aa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24e8,	// (0x000025aa) list_single_large_graphic_pane_g4_cp1

0x2502,	// (0x000025c4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2502,	// (0x000025c4) list_single_large_graphic_pane_t1_cp2

0x44bf,	// (0x00004581) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44bf,	// (0x00004581) list_single_graphic_heading_pane_g1_cp2

0x448c,	// (0x0000454e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x448c,	// (0x0000454e) list_single_graphic_heading_pane_g4_cp2

0x24b4,	// (0x00002576) list_single_graphic_heading_pane_g5_cp2

0x44cb,	// (0x0000458d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44cb,	// (0x0000458d) list_single_graphic_heading_pane_t1_cp2

0x44e1,	// (0x000045a3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44e1,	// (0x000045a3) list_single_graphic_heading_pane_t2_cp2

0x4480,	// (0x00004542) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4480,	// (0x00004542) list_single_2graphic_pane_g1_cp2

0x448c,	// (0x0000454e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x448c,	// (0x0000454e) list_single_2graphic_pane_g2_cp2

0x24b4,	// (0x00002576) list_single_2graphic_pane_g3_cp2

0x449d,	// (0x0000455f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x449d,	// (0x0000455f) list_single_2graphic_pane_g4_cp2

0x44a9,	// (0x0000456b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x44a9,	// (0x0000456b) list_single_2graphic_pane_t1_cp2

0xf4ff,	// (0x0000f5c1) list_highlight_pane_g10_cp1

0x4058,	// (0x0000411a) list_highlight_pane_g1_cp1

0x4060,	// (0x00004122) list_highlight_pane_g2_cp1

0x4068,	// (0x0000412a) list_highlight_pane_g3_cp1

0x4070,	// (0x00004132) list_highlight_pane_g4_cp1

0x4078,	// (0x0000413a) list_highlight_pane_g5_cp1

0x4080,	// (0x00004142) list_highlight_pane_g6_cp1

0x4088,	// (0x0000414a) list_highlight_pane_g7_cp1

0x4090,	// (0x00004152) list_highlight_pane_g8_cp1

0x4098,	// (0x0000415a) list_highlight_pane_g9_cp1

0xd304,	// (0x0000d3c6) form_field_slider_pane_t3

0xd312,	// (0x0000d3d4) form_field_slider_pane_t4

0x3f94,	// (0x00004056) slider_form_pane_ParamLimits

0x3f94,	// (0x00004056) slider_form_pane

0x01d1,	// (0x00000293) control_abbreviations

0x01d1,	// (0x00000293) control_conventions

0x01d1,	// (0x00000293) control_definitions

0x01d1,	// (0x00000293) format_table_attribute

0x48d6,	// (0x00004998) bg_popup_preview_window_pane_g9

0x01d1,	// (0x00000293) format_table_data2

0x01d1,	// (0x00000293) format_table_data3

0x01d1,	// (0x00000293) format_table_data_example

0x0008,

0x01d1,	// (0x00000293) intro_purpose

0xf8b9,	// (0x0000f97b) bg_popup_preview_window_pane_g

0x01d1,	// (0x00000293) texts_category

0x01d1,	// (0x00000293) texts_graphics

0x2518,	// (0x000025da) text_digital

0x2527,	// (0x000025e9) text_primary

0x2536,	// (0x000025f8) text_primary_small

0x2545,	// (0x00002607) text_secondary

0x2554,	// (0x00002616) text_title

0x51b8,	// (0x0000527a) bg_passive_tab_pane_g1_cp3_srt

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp3_srt

0x51c1,	// (0x00005283) bg_passive_tab_pane_g3_cp3_srt

0x076b,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x51ca,	// (0x0000528c) tabs_4_active_pane_srt_g1

0xd685,	// (0x0000d747) tabs_4_active_pane_srt_t1_ParamLimits

0xd685,	// (0x0000d747) tabs_4_active_pane_srt_t1

0x51b8,	// (0x0000527a) bg_active_tab_pane_g1_cp3_copy1

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp3_copy1

0x51c1,	// (0x00005283) bg_active_tab_pane_g3_cp3_copy1

0x0445,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0445,	// (0x00000507) tabs_2_long_active_pane_srt

0x0445,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0445,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp4_srt

0x4d66,	// (0x00004e28) bg_passive_tab_pane_g1_cp4_srt

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp4_srt

0x4d6f,	// (0x00004e31) bg_passive_tab_pane_g3_cp4_srt

0x0445,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0445,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd46f,	// (0x0000d531) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd46f,	// (0x0000d531) tabs_2_long_active_pane_srt_t1

0x4d66,	// (0x00004e28) bg_active_tab_pane_g1_cp4_srt

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp4_srt

0x4d6f,	// (0x00004e31) bg_active_tab_pane_g3_cp4_srt

0x076b,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x076b,	// (0x0000082d) tabs_3_long_active_pane_srt

0x076b,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x076b,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x076b,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x076b,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp5_srt

0x2238,	// (0x000022fa) bg_passive_tab_pane_g1_cp5_srt

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp5_srt

0x2241,	// (0x00002303) bg_passive_tab_pane_g3_cp5_srt

0x0445,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0445,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd459,	// (0x0000d51b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd459,	// (0x0000d51b) tabs_3_long_active_pane_srt_t1

0x2238,	// (0x000022fa) bg_active_tab_pane_g1_cp5_srt

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp5_srt

0x2241,	// (0x00002303) bg_active_tab_pane_g3_cp5_srt

0x4d46,	// (0x00004e08) navi_text_pane_srt_t1

0x4d3e,	// (0x00004e00) navi_icon_pane_srt_g1

0x27d2,	// (0x00002894) midp_editing_number_pane_srt

0x2563,	// (0x00002625) midp_ticker_pane_srt

0x27da,	// (0x0000289c) midp_ticker_pane_srt_g1

0x27e2,	// (0x000028a4) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0000f80a) midp_ticker_pane_srt_g

0x27ea,	// (0x000028ac) midp_ticker_pane_srt_t1

0x4d2f,	// (0x00004df1) midp_editing_number_pane_t1_copy1

0xc426,	// (0x0000c4e8) listscroll_midp_pane

0xc426,	// (0x0000c4e8) midp_form_pane

0x25db,	// (0x0000269d) midp_info_popup_window_ParamLimits

0x25db,	// (0x0000269d) midp_info_popup_window

0x1576,	// (0x00001638) bg_popup_sub_pane_cp50_ParamLimits

0x1576,	// (0x00001638) bg_popup_sub_pane_cp50

0x3c7c,	// (0x00003d3e) listscroll_midp_info_pane_ParamLimits

0x3c7c,	// (0x00003d3e) listscroll_midp_info_pane

0x3c5c,	// (0x00003d1e) listscroll_form_midp_pane_ParamLimits

0x3c5c,	// (0x00003d1e) listscroll_form_midp_pane

0x3c68,	// (0x00003d2a) scroll_bar_cp050

0x3c5c,	// (0x00003d1e) list_midp_pane

0x6016,	// (0x000060d8) signal_pane_g2_cp

0x3b76,	// (0x00003c38) listscroll_midp_info_pane_t1_ParamLimits

0x3b76,	// (0x00003c38) listscroll_midp_info_pane_t1

0x3b8e,	// (0x00003c50) listscroll_midp_info_pane_t2_ParamLimits

0x3b8e,	// (0x00003c50) listscroll_midp_info_pane_t2

0x3bcc,	// (0x00003c8e) listscroll_midp_info_pane_t3_ParamLimits

0x3bcc,	// (0x00003c8e) listscroll_midp_info_pane_t3

0x3c06,	// (0x00003cc8) listscroll_midp_info_pane_t4_ParamLimits

0x3c06,	// (0x00003cc8) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x0000f8b6) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x0000f8b6) listscroll_midp_info_pane_t

0x15d7,	// (0x00001699) scroll_pane_cp21

0x3b14,	// (0x00003bd6) form_midp_field_choice_group_pane

0x3b1d,	// (0x00003bdf) form_midp_field_text_pane

0x3b5c,	// (0x00003c1e) form_midp_field_time_pane

0x3b64,	// (0x00003c26) form_midp_gauge_slider_pane

0x3b6d,	// (0x00003c2f) form_midp_gauge_wait_pane

0x01d1,	// (0x00000293) form_midp_image_pane

0xd2ee,	// (0x0000d3b0) list_single_midp_pane_ParamLimits

0xd2ee,	// (0x0000d3b0) list_single_midp_pane

0xd2cd,	// (0x0000d38f) form_midp_field_text_pane_t1

0x37d7,	// (0x00003899) input_focus_pane_cp050

0x3ad5,	// (0x00003b97) list_midp_form_text_pane

0x3a6d,	// (0x00003b2f) form_midp_field_choice_group_pane_t1

0x3a7b,	// (0x00003b3d) input_focus_pane_cp051

0x3a8f,	// (0x00003b51) list_midp_choice_pane

0x01d1,	// (0x00000293) status_idle_pane

0x3a51,	// (0x00003b13) form_midp_field_time_pane_t1

0xf4ff,	// (0x0000f5c1) wait_anim_pane_g2_copy1

0x3a5f,	// (0x00003b21) form_midp_field_time_pane_t2

0x0001,

0x2689,	// (0x0000274b) aid_navinavi_width_2_pane

0xf7ef,	// (0x0000f8b1) form_midp_field_time_pane_t

0x01d1,	// (0x00000293) input_focus_pane_cp052

0x01d1,	// (0x00000293) bg_input_focus_pane_cp040

0x3a11,	// (0x00003ad3) form_midp_gauge_slider_pane_t1

0x3a1f,	// (0x00003ae1) form_midp_gauge_slider_pane_t2

0xd2b1,	// (0x0000d373) form_midp_gauge_slider_pane_t3

0xd2bf,	// (0x0000d381) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x0000f8a8) form_midp_gauge_slider_pane_t

0x3a49,	// (0x00003b0b) form_midp_slider_pane

0x0445,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0445,	// (0x00000507) bg_input_focus_pane_cp041

0x39de,	// (0x00003aa0) form_midp_gauge_wait_pane_t1_ParamLimits

0x39de,	// (0x00003aa0) form_midp_gauge_wait_pane_t1

0x39f0,	// (0x00003ab2) form_midp_gauge_wait_pane_t2_ParamLimits

0x39f0,	// (0x00003ab2) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x0000f8a3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x0000f8a3) form_midp_gauge_wait_pane_t

0x3a02,	// (0x00003ac4) form_midp_wait_pane_ParamLimits

0x3a02,	// (0x00003ac4) form_midp_wait_pane

0x39a8,	// (0x00003a6a) form_midp_image_pane_g1

0x39b1,	// (0x00003a73) form_midp_image_pane_t1

0x39c0,	// (0x00003a82) form_midp_image_pane_t2

0x39cf,	// (0x00003a91) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x0000f89c) form_midp_image_pane_t

0x3990,	// (0x00003a52) list_single_midp_pane_g1

0x3999,	// (0x00003a5b) list_single_midp_pane_t1

0xd29d,	// (0x0000d35f) list_midp_form_item_pane_ParamLimits

0xd29d,	// (0x0000d35f) list_midp_form_item_pane

0x2631,	// (0x000026f3) list_midp_form_item_pane_t1

0x2640,	// (0x00002702) midp_ticker_pane_g1

0x264c,	// (0x0000270e) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0000f7f0) midp_ticker_pane_g

0x2658,	// (0x0000271a) midp_ticker_pane_t1

0x502b,	// (0x000050ed) midp_editing_number_pane_t1

0x5009,	// (0x000050cb) midp_editing_number_pane

0x5018,	// (0x000050da) midp_ticker_pane

0x4d0d,	// (0x00004dcf) ai_message_heading_pane

0x01d1,	// (0x00000293) bg_popup_window_pane_cp14

0x4d15,	// (0x00004dd7) listscroll_ai_message_pane

0x4c97,	// (0x00004d59) ai_message_heading_pane_g1_ParamLimits

0x4c97,	// (0x00004d59) ai_message_heading_pane_g1

0x4ca3,	// (0x00004d65) ai_message_heading_pane_g2_ParamLimits

0x4ca3,	// (0x00004d65) ai_message_heading_pane_g2

0x4caf,	// (0x00004d71) ai_message_heading_pane_g3_ParamLimits

0x4caf,	// (0x00004d71) ai_message_heading_pane_g3

0x4cbb,	// (0x00004d7d) ai_message_heading_pane_g4_ParamLimits

0x4cbb,	// (0x00004d7d) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x0000f9dd) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x0000f9dd) ai_message_heading_pane_g

0x4cc7,	// (0x00004d89) ai_message_heading_pane_t1_ParamLimits

0x4cc7,	// (0x00004d89) ai_message_heading_pane_t1

0x4ce1,	// (0x00004da3) ai_message_heading_pane_t2_ParamLimits

0x4ce1,	// (0x00004da3) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0000f9e6) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0000f9e6) ai_message_heading_pane_t

0x4cf3,	// (0x00004db5) bg_popup_heading_pane_cp1_ParamLimits

0x4cf3,	// (0x00004db5) bg_popup_heading_pane_cp1

0x4c85,	// (0x00004d47) list_ai_message_pane_ParamLimits

0x4c85,	// (0x00004d47) list_ai_message_pane

0x15d7,	// (0x00001699) scroll_pane_cp10

0x4bd1,	// (0x00004c93) list_ai_message_pane_g1

0x4bd9,	// (0x00004c9b) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x0000f9ba) list_ai_message_pane_g

0x4be1,	// (0x00004ca3) list_ai_message_pane_t1_ParamLimits

0x4be1,	// (0x00004ca3) list_ai_message_pane_t1

0x4bf6,	// (0x00004cb8) list_ai_message_pane_t2_ParamLimits

0x4bf6,	// (0x00004cb8) list_ai_message_pane_t2

0x4c0b,	// (0x00004ccd) list_ai_message_pane_t3_ParamLimits

0x4c0b,	// (0x00004ccd) list_ai_message_pane_t3

0x4c20,	// (0x00004ce2) list_ai_message_pane_t4_ParamLimits

0x4c20,	// (0x00004ce2) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x0000f9bf) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x0000f9bf) list_ai_message_pane_t

0xd438,	// (0x0000d4fa) cell_ai_soft_ind_pane_ParamLimits

0xd438,	// (0x0000d4fa) cell_ai_soft_ind_pane

0x266a,	// (0x0000272c) cell_ai_soft_ind_pane_g1_ParamLimits

0x266a,	// (0x0000272c) cell_ai_soft_ind_pane_g1

0x01d1,	// (0x00000293) grid_highlight_cp1

0x2677,	// (0x00002739) text_secondary_cp56_ParamLimits

0x2677,	// (0x00002739) text_secondary_cp56

0x4b91,	// (0x00004c53) example_general_pane_ParamLimits

0x4b91,	// (0x00004c53) example_general_pane

0x4b9d,	// (0x00004c5f) example_parent_pane_g1_ParamLimits

0x4b9d,	// (0x00004c5f) example_parent_pane_g1

0x4ba9,	// (0x00004c6b) example_parent_pane_t1_ParamLimits

0x4ba9,	// (0x00004c6b) example_parent_pane_t1

0xcae8,	// (0x0000cbaa) popup_preview_text_window_ParamLimits

0xcae8,	// (0x0000cbaa) popup_preview_text_window

0x24a0,	// (0x00002562) list_single_pane_cp2_g4

0x0847,	// (0x00000909) bg_popup_preview_window_pane_ParamLimits

0x0847,	// (0x00000909) bg_popup_preview_window_pane

0x48de,	// (0x000049a0) popup_preview_text_window_t1_ParamLimits

0x48de,	// (0x000049a0) popup_preview_text_window_t1

0x48fc,	// (0x000049be) popup_preview_text_window_t2_ParamLimits

0x48fc,	// (0x000049be) popup_preview_text_window_t2

0x4945,	// (0x00004a07) popup_preview_text_window_t3_ParamLimits

0x4945,	// (0x00004a07) popup_preview_text_window_t3

0x498a,	// (0x00004a4c) popup_preview_text_window_t4_ParamLimits

0x498a,	// (0x00004a4c) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x0000f98e) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x0000f98e) popup_preview_text_window_t

0x4a08,	// (0x00004aca) scroll_pane_cp11

0x3629,	// (0x000036eb) bg_popup_preview_window_pane_g1

0x489e,	// (0x00004960) bg_popup_preview_window_pane_g2

0x48a6,	// (0x00004968) bg_popup_preview_window_pane_g3

0x48ae,	// (0x00004970) bg_popup_preview_window_pane_g4

0x48b6,	// (0x00004978) bg_popup_preview_window_pane_g5

0x48be,	// (0x00004980) bg_popup_preview_window_pane_g6

0x48c6,	// (0x00004988) bg_popup_preview_window_pane_g7

0x48ce,	// (0x00004990) bg_popup_preview_window_pane_g8

0xf515,	// (0x0000f5d7) aid_popup_width_pane

0xca64,	// (0x0000cb26) popup_midp_note_alarm_window_ParamLimits

0xca64,	// (0x0000cb26) popup_midp_note_alarm_window

0x12a6,	// (0x00001368) data_form_pane_ParamLimits

0xc10c,	// (0x0000c1ce) form_field_data_pane_g1

0xc116,	// (0x0000c1d8) form_field_data_pane_t1_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_ParamLimits

0x12e2,	// (0x000013a4) data_form_wide_pane_ParamLimits

0x12ee,	// (0x000013b0) form_field_data_wide_pane_g1

0x131a,	// (0x000013dc) form_field_data_wide_pane_t1_ParamLimits

0x0aee,	// (0x00000bb0) input_focus_pane_cp6_ParamLimits

0xc213,	// (0x0000c2d5) input_popup_find_pane_g1_ParamLimits

0xc213,	// (0x0000c2d5) input_popup_find_pane_g1

0x1905,	// (0x000019c7) aid_navi_side_left_pane

0x191a,	// (0x000019dc) aid_navi_side_right_pane

0x4153,	// (0x00004215) bg_popup_window_pane_cp30_ParamLimits

0x4153,	// (0x00004215) bg_popup_window_pane_cp30

0x41cd,	// (0x0000428f) popup_midp_note_alarm_window_g1_ParamLimits

0x41cd,	// (0x0000428f) popup_midp_note_alarm_window_g1

0x41fd,	// (0x000042bf) popup_midp_note_alarm_window_t1_ParamLimits

0x41fd,	// (0x000042bf) popup_midp_note_alarm_window_t1

0x429e,	// (0x00004360) popup_midp_note_alarm_window_t2_ParamLimits

0x429e,	// (0x00004360) popup_midp_note_alarm_window_t2

0x434c,	// (0x0000440e) popup_midp_note_alarm_window_t3_ParamLimits

0x434c,	// (0x0000440e) popup_midp_note_alarm_window_t3

0x437e,	// (0x00004440) popup_midp_note_alarm_window_t4_ParamLimits

0x437e,	// (0x00004440) popup_midp_note_alarm_window_t4

0x43a4,	// (0x00004466) popup_midp_note_alarm_window_t5_ParamLimits

0x43a4,	// (0x00004466) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0000f92b) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0000f92b) popup_midp_note_alarm_window_t

0x4450,	// (0x00004512) wait_bar_pane_cp1_ParamLimits

0x4450,	// (0x00004512) wait_bar_pane_cp1

0x01d1,	// (0x00000293) wait_anim_pane_copy1

0x01d1,	// (0x00000293) wait_border_pane_copy1

0x3e39,	// (0x00003efb) wait_border_pane_g1_copy1

0x1331,	// (0x000013f3) form_field_popup_pane_g1

0xc130,	// (0x0000c1f2) form_field_popup_pane_t1_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_cp7_ParamLimits

0x1351,	// (0x00001413) list_form_pane_ParamLimits

0x135d,	// (0x0000141f) form_field_popup_wide_pane_g1

0x1365,	// (0x00001427) form_field_popup_wide_pane_t1_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_cp8_ParamLimits

0x1377,	// (0x00001439) list_form_wide_pane_ParamLimits

0x525a,	// (0x0000531c) aid_size_cell_graphic_pane

0xc1af,	// (0x0000c271) data_form_pane_t1_ParamLimits

0xd5da,	// (0x0000d69c) data_form_wide_pane_t1_ParamLimits

0xceb0,	// (0x0000cf72) bg_status_flat_pane

0xba2b,	// (0x0000baed) title_pane_t1_ParamLimits

0x040d,	// (0x000004cf) title_pane_t2_ParamLimits

0x0433,	// (0x000004f5) title_pane_t3_ParamLimits

0xf532,	// (0x0000f5f4) title_pane_t_ParamLimits

0x1c1e,	// (0x00001ce0) level_1_signal_ParamLimits

0x1c30,	// (0x00001cf2) level_2_signal_ParamLimits

0x1c43,	// (0x00001d05) level_3_signal_ParamLimits

0x1c56,	// (0x00001d18) level_4_signal_ParamLimits

0x1c69,	// (0x00001d2b) level_5_signal_ParamLimits

0x1c7c,	// (0x00001d3e) level_6_signal_ParamLimits

0x1c8f,	// (0x00001d51) level_7_signal_ParamLimits

0x1c1e,	// (0x00001ce0) level_1_battery_ParamLimits

0x1c30,	// (0x00001cf2) level_2_battery_ParamLimits

0x1c43,	// (0x00001d05) level_3_battery_ParamLimits

0x1c56,	// (0x00001d18) level_4_battery_ParamLimits

0x1c69,	// (0x00001d2b) level_5_battery_ParamLimits

0x1c7c,	// (0x00001d3e) level_6_battery_ParamLimits

0x1c8f,	// (0x00001d51) level_7_battery_ParamLimits

0x4058,	// (0x0000411a) bg_status_flat_pane_g1

0x4060,	// (0x00004122) bg_status_flat_pane_g2

0x4068,	// (0x0000412a) bg_status_flat_pane_g3

0x4070,	// (0x00004132) bg_status_flat_pane_g4

0x4078,	// (0x0000413a) bg_status_flat_pane_g5

0x4080,	// (0x00004142) bg_status_flat_pane_g6

0x4088,	// (0x0000414a) bg_status_flat_pane_g7

0xbab7,	// (0x0000bb79) tabs_3_active_pane_t1_ParamLimits

0xbab7,	// (0x0000bb79) tabs_3_passive_pane_t1_ParamLimits

0xbac9,	// (0x0000bb8b) tabs_4_active_pane_t1_ParamLimits

0xbac9,	// (0x0000bb8b) tabs_4_1_passive_pane_t1_ParamLimits

0xc221,	// (0x0000c2e3) tabs_2_active_pane_t1_ParamLimits

0xc221,	// (0x0000c2e3) tabs_2_passive_pane_t1_ParamLimits

0x0445,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc233,	// (0x0000c2f5) tabs_2_long_active_pane_t1_ParamLimits

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp4_ParamLimits

0x36fa,	// (0x000037bc) list_single_midp_graphic_pane_t1_ParamLimits

0x0445,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc246,	// (0x0000c308) tabs_3_long_active_pane_t1_ParamLimits

0x2aae,	// (0x00002b70) bg_passive_tab_pane_cp5_ParamLimits

0x36fa,	// (0x000037bc) list_single_midp_graphic_pane_t1

0xceb0,	// (0x0000cf72) bg_status_flat_pane_ParamLimits

0x322b,	// (0x000032ed) indicator_pane_cp2_ParamLimits

0x322b,	// (0x000032ed) indicator_pane_cp2

0xd02e,	// (0x0000d0f0) navi_pane_srt_ParamLimits

0xd02e,	// (0x0000d0f0) navi_pane_srt

0x337a,	// (0x0000343c) popup_clock_digital_analogue_window_cp1

0x05cd,	// (0x0000068f) indicator_pane_t1

0x2563,	// (0x00002625) copy_highlight_pane

0x2563,	// (0x00002625) cursor_graphics_pane

0x2563,	// (0x00002625) graphic_within_text_pane

0x2563,	// (0x00002625) link_highlight_pane

0x49cb,	// (0x00004a8d) popup_preview_text_window_t5_ParamLimits

0x49cb,	// (0x00004a8d) popup_preview_text_window_t5

0x2691,	// (0x00002753) cursor_digital_pane

0x2691,	// (0x00002753) cursor_primary_pane

0x26a2,	// (0x00002764) cursor_primary_small_pane

0x26aa,	// (0x0000276c) cursor_secondary_pane

0x26b2,	// (0x00002774) cursor_title_pane

0x2691,	// (0x00002753) link_highlight_digital_pane

0x2699,	// (0x0000275b) link_highlight_primary_pane

0x26a2,	// (0x00002764) link_highlight_primary_small_pane

0x26aa,	// (0x0000276c) link_highlight_secondary_pane

0x26b2,	// (0x00002774) link_highlight_title_pane

0x2691,	// (0x00002753) copy_highlight_digital_pane

0x2691,	// (0x00002753) copy_highlight_primary_pane

0x26a2,	// (0x00002764) copy_highlight_primary_small_pane

0x26aa,	// (0x0000276c) copy_highlight_secondary_pane

0x26b2,	// (0x00002774) copy_highlight_title_pane

0x26aa,	// (0x0000276c) graphic_text_digital_pane

0x40f6,	// (0x000041b8) graphic_text_primary_pane

0x40ff,	// (0x000041c1) graphic_text_primary_small_pane

0x26a2,	// (0x00002764) graphic_text_secondary_pane

0x2691,	// (0x00002753) graphic_text_title_pane

0xc4cb,	// (0x0000c58d) cursor_primary_pane_g1

0x40e8,	// (0x000041aa) cursor_text_primary_t1

0xd334,	// (0x0000d3f6) cursor_primary_small_pane_g1

0x40da,	// (0x0000419c) cursor_text_primary_small_t1

0xd32a,	// (0x0000d3ec) cursor_primary_small_pane_g1_copy1

0x40c2,	// (0x00004184) cursor_text_primary_small_t1_copy1

0x40a0,	// (0x00004162) cursor_text_title_t1

0xd320,	// (0x0000d3e2) cursor_title_pane_g1

0xc4cb,	// (0x0000c58d) cursor_digital_pane_g1

0x26c4,	// (0x00002786) cursor_text_digital_t1

0x26e9,	// (0x000027ab) link_highlight_primary_pane_g1

0x4049,	// (0x0000410b) link_highlight_primary_pane_t1

0x26d2,	// (0x00002794) link_highlight_primary_small_pane_g1

0x26da,	// (0x0000279c) link_highlight_primary_small_pane_t1

0x26e9,	// (0x000027ab) link_highlight_secondary_pane_g1

0x26f1,	// (0x000027b3) link_highlight_secondary_pane_t1

0x3fbd,	// (0x0000407f) link_highlight_title_pane_g1

0x3fc5,	// (0x00004087) link_highlight_title_pane_t1

0x3fa6,	// (0x00004068) link_highlight_digital_pane_g1

0x3fae,	// (0x00004070) link_highlight_digital_pane_t1

0x3e7e,	// (0x00003f40) copy_highlight_primary_pane_g1

0x3e86,	// (0x00003f48) copy_highlight_primary_pane_t1

0x3e58,	// (0x00003f1a) copy_highlight_primary_small_pane_g1

0x3e6f,	// (0x00003f31) copy_highlight_primary_small_pane_t1

0x2700,	// (0x000027c2) copy_highlight_secondary_pane_g1

0x2708,	// (0x000027ca) copy_highlight_secondary_pane_t1

0x3e58,	// (0x00003f1a) copy_highlight_title_pane_g1

0x3e60,	// (0x00003f22) copy_highlight_title_pane_t1

0x3e7e,	// (0x00003f40) copy_highlight_digital_pane_g1

0x54e0,	// (0x000055a2) copy_highlight_digital_pane_t1

0x5434,	// (0x000054f6) graphic_text_primary_pane_g1

0x54c4,	// (0x00005586) graphic_text_primary_pane_t1

0x54d2,	// (0x00005594) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0000fa5a) graphic_text_primary_pane_t

0x54a0,	// (0x00005562) graphic_text_primary_small_pane_g1

0x54a8,	// (0x0000556a) graphic_text_primary_small_pane_t1

0x54b6,	// (0x00005578) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x0000fa55) graphic_text_primary_small_pane_t

0x547c,	// (0x0000553e) graphic_text_secondary_pane_g1

0x5484,	// (0x00005546) graphic_text_secondary_pane_t1

0x5492,	// (0x00005554) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0000fa50) graphic_text_secondary_pane_t

0x5458,	// (0x0000551a) graphic_text_title_pane_g1

0x5460,	// (0x00005522) graphic_text_title_pane_t1

0x546e,	// (0x00005530) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0000fa4b) graphic_text_title_pane_t

0x5434,	// (0x000054f6) graphic_text_digital_pane_g1

0x543c,	// (0x000054fe) graphic_text_digital_pane_t1

0x544a,	// (0x0000550c) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x0000fa46) graphic_text_digital_pane_t

0x0445,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0445,	// (0x00000507) navi_icon_pane_srt

0x01d1,	// (0x00000293) navi_midp_pane_srt

0x01d1,	// (0x00000293) navi_navi_pane_srt

0x0445,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0445,	// (0x00000507) navi_text_pane_srt

0x53ff,	// (0x000054c1) navi_navi_icon_text_pane_srt

0x5407,	// (0x000054c9) navi_navi_pane_srt_g1_ParamLimits

0x5407,	// (0x000054c9) navi_navi_pane_srt_g1

0x5419,	// (0x000054db) navi_navi_pane_srt_g2_ParamLimits

0x5419,	// (0x000054db) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0000fa41) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0000fa41) navi_navi_pane_srt_g

0x542b,	// (0x000054ed) navi_navi_tabs_pane_srt

0x53ff,	// (0x000054c1) navi_navi_text_pane_srt

0x53ff,	// (0x000054c1) navi_navi_volume_pane_srt

0x53f0,	// (0x000054b2) navi_navi_text_pane_srt_t1

0x53cb,	// (0x0000548d) navi_navi_volume_pane_srt_g1

0x53d3,	// (0x00005495) volume_small_pane_srt_ParamLimits

0x53d3,	// (0x00005495) volume_small_pane_srt

0x2717,	// (0x000027d9) volume_small_pane_srt_g1_ParamLimits

0x2717,	// (0x000027d9) volume_small_pane_srt_g1

0x2727,	// (0x000027e9) volume_small_pane_srt_g2_ParamLimits

0x2727,	// (0x000027e9) volume_small_pane_srt_g2

0x2738,	// (0x000027fa) volume_small_pane_srt_g3_ParamLimits

0x2738,	// (0x000027fa) volume_small_pane_srt_g3

0x2749,	// (0x0000280b) volume_small_pane_srt_g4_ParamLimits

0x2749,	// (0x0000280b) volume_small_pane_srt_g4

0x275a,	// (0x0000281c) volume_small_pane_srt_g5_ParamLimits

0x275a,	// (0x0000281c) volume_small_pane_srt_g5

0x276b,	// (0x0000282d) volume_small_pane_srt_g6_ParamLimits

0x276b,	// (0x0000282d) volume_small_pane_srt_g6

0x277c,	// (0x0000283e) volume_small_pane_srt_g7_ParamLimits

0x277c,	// (0x0000283e) volume_small_pane_srt_g7

0x278d,	// (0x0000284f) volume_small_pane_srt_g8_ParamLimits

0x278d,	// (0x0000284f) volume_small_pane_srt_g8

0x279e,	// (0x00002860) volume_small_pane_srt_g9_ParamLimits

0x279e,	// (0x00002860) volume_small_pane_srt_g9

0x27af,	// (0x00002871) volume_small_pane_srt_g10_ParamLimits

0x27af,	// (0x00002871) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0000f7f5) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0000f7f5) volume_small_pane_srt_g

0x08f0,	// (0x000009b2) query_popup_data_pane_cp2

0x53b9,	// (0x0000547b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53b9,	// (0x0000547b) navi_navi_icon_text_pane_srt_t1

0x40f6,	// (0x000041b8) navi_tabs_2_long_pane_srt

0x40f6,	// (0x000041b8) navi_tabs_2_pane_srt

0x40f6,	// (0x000041b8) navi_tabs_3_long_pane_srt

0x40f6,	// (0x000041b8) navi_tabs_3_pane_srt

0x40f6,	// (0x000041b8) navi_tabs_4_pane_srt

0x5391,	// (0x00005453) tabs_2_active_pane_srt_ParamLimits

0x5391,	// (0x00005453) tabs_2_active_pane_srt

0x53a1,	// (0x00005463) tabs_2_passive_pane_srt_ParamLimits

0x53a1,	// (0x00005463) tabs_2_passive_pane_srt

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp1_srt

0x5365,	// (0x00005427) bg_passive_tab_pane_g1_cp1_srt

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp1_srt

0x536e,	// (0x00005430) bg_passive_tab_pane_g3_cp1_srt

0x076b,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x5377,	// (0x00005439) tabs_2_active_pane_srt_g1

0xd716,	// (0x0000d7d8) tabs_2_active_pane_srt_t1_ParamLimits

0xd716,	// (0x0000d7d8) tabs_2_active_pane_srt_t1

0x5365,	// (0x00005427) bg_active_tab_pane_g1_cp1_srt

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp1_srt

0x536e,	// (0x00005430) bg_active_tab_pane_g3_cp1_srt

0x5332,	// (0x000053f4) tabs_3_active_pane_srt_ParamLimits

0x5332,	// (0x000053f4) tabs_3_active_pane_srt

0x5343,	// (0x00005405) tabs_3_passive_pane_cp_srt_ParamLimits

0x5343,	// (0x00005405) tabs_3_passive_pane_cp_srt

0x5354,	// (0x00005416) tabs_3_passive_pane_srt_ParamLimits

0x5354,	// (0x00005416) tabs_3_passive_pane_srt

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37d7,	// (0x00003899) bg_passive_tab_pane_cp2_srt

0x27c0,	// (0x00002882) bg_passive_tab_pane_g1_cp2_srt

0x206d,	// (0x0000212f) bg_passive_tab_pane_g2_cp2_srt

0x27c9,	// (0x0000288b) bg_passive_tab_pane_g3_cp2_srt

0x076b,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x076b,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x5318,	// (0x000053da) tabs_3_active_pane_srt_g1

0xd700,	// (0x0000d7c2) tabs_3_active_pane_srt_t1_ParamLimits

0xd700,	// (0x0000d7c2) tabs_3_active_pane_srt_t1

0x27c0,	// (0x00002882) bg_active_tab_pane_g1_cp2_srt

0x206d,	// (0x0000212f) bg_active_tab_pane_g2_cp2_srt

0x27c9,	// (0x0000288b) bg_active_tab_pane_g3_cp2_srt

0x52d0,	// (0x00005392) tabs_4_active_pane_srt_ParamLimits

0x52d0,	// (0x00005392) tabs_4_active_pane_srt

0x52e2,	// (0x000053a4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52e2,	// (0x000053a4) tabs_4_passive_pane_cp2_srt

0x2a6e,	// (0x00002b30) aid_size_cell_toolbar

0x4e4f,	// (0x00004f11) main_idle_act_pane_ParamLimits

0x2c91,	// (0x00002d53) popup_large_graphic_colour_window_ParamLimits

0xcd74,	// (0x0000ce36) popup_toolbar_window_ParamLimits

0xcd74,	// (0x0000ce36) popup_toolbar_window

0x5055,	// (0x00005117) list_single_graphic_2heading_pane_ParamLimits

0x5055,	// (0x00005117) list_single_graphic_2heading_pane

0x1991,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane

0x19a3,	// (0x00001a65) aid_size_cell_apps_grid_prt_pane

0x2aae,	// (0x00002b70) bg_wml_button_pane_cp1_ParamLimits

0x2aae,	// (0x00002b70) bg_wml_button_pane_cp1

0xd2cd,	// (0x0000d38f) form_midp_field_text_pane_t1_ParamLimits

0x37d7,	// (0x00003899) input_focus_pane_cp050_ParamLimits

0x3ad5,	// (0x00003b97) list_midp_form_text_pane_ParamLimits

0x3a7b,	// (0x00003b3d) input_focus_pane_cp051_ParamLimits

0x3a8f,	// (0x00003b51) list_midp_choice_pane_ParamLimits

0xd26b,	// (0x0000d32d) list_single_2graphic_pane_cp3_ParamLimits

0xd26b,	// (0x0000d32d) list_single_2graphic_pane_cp3

0xd27e,	// (0x0000d340) list_single_midp_graphic_pane_ParamLimits

0xd27e,	// (0x0000d340) list_single_midp_graphic_pane

0x0daa,	// (0x00000e6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0daa,	// (0x00000e6c) list_single_graphic_2heading_pane_g1

0x0d30,	// (0x00000df2) list_single_graphic_2heading_pane_g4_ParamLimits

0x0d30,	// (0x00000df2) list_single_graphic_2heading_pane_g4

0x0d3c,	// (0x00000dfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0000f848) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0000f848) list_single_graphic_2heading_pane_g

0x34d9,	// (0x0000359b) list_single_graphic_2heading_pane_t1_ParamLimits

0x34d9,	// (0x0000359b) list_single_graphic_2heading_pane_t1

0x34ed,	// (0x000035af) list_single_graphic_2heading_pane_t2_ParamLimits

0x34ed,	// (0x000035af) list_single_graphic_2heading_pane_t2

0x3509,	// (0x000035cb) list_single_graphic_2heading_pane_t3_ParamLimits

0x3509,	// (0x000035cb) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0000f84f) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0000f84f) list_single_graphic_2heading_pane_t

0x3521,	// (0x000035e3) bg_popup_sub_pane_cp2

0x354b,	// (0x0000360d) grid_toobar_pane

0x3587,	// (0x00003649) cell_toolbar_pane_ParamLimits

0x3587,	// (0x00003649) cell_toolbar_pane

0x35cd,	// (0x0000368f) cell_toolbar_pane_g1_ParamLimits

0x35cd,	// (0x0000368f) cell_toolbar_pane_g1

0x35e1,	// (0x000036a3) cell_toolbar_pane_g2_ParamLimits

0x35e1,	// (0x000036a3) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x0000f856) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x0000f856) cell_toolbar_pane_g

0x3603,	// (0x000036c5) grid_highlight_pane_cp2_ParamLimits

0x3603,	// (0x000036c5) grid_highlight_pane_cp2

0x361d,	// (0x000036df) toolbar_button_pane

0x3629,	// (0x000036eb) toolbar_button_pane_g1

0x3631,	// (0x000036f3) toolbar_button_pane_g2

0x3639,	// (0x000036fb) toolbar_button_pane_g3

0x3641,	// (0x00003703) toolbar_button_pane_g4

0x3649,	// (0x0000370b) toolbar_button_pane_g5

0x3651,	// (0x00003713) toolbar_button_pane_g6

0x3659,	// (0x0000371b) toolbar_button_pane_g7

0x3661,	// (0x00003723) toolbar_button_pane_g8

0x3669,	// (0x0000372b) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0000f85b) toolbar_button_pane_g

0x3679,	// (0x0000373b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3679,	// (0x0000373b) list_single_2graphic_pane_g1_cp3

0xd1cd,	// (0x0000d28f) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd1cd,	// (0x0000d28f) list_single_2graphic_pane_g2_cp3

0x3696,	// (0x00003758) list_single_2graphic_pane_g3_cp3

0x369e,	// (0x00003760) list_single_2graphic_pane_g4_cp3_ParamLimits

0x369e,	// (0x00003760) list_single_2graphic_pane_g4_cp3

0x36aa,	// (0x0000376c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36aa,	// (0x0000376c) list_single_2graphic_pane_t1_cp3

0x36ee,	// (0x000037b0) list_single_midp_graphic_pane_g2_ParamLimits

0x36ee,	// (0x000037b0) list_single_midp_graphic_pane_g2

0x2a76,	// (0x00002b38) aid_zoom_text_primary

0x2a7e,	// (0x00002b40) aid_zoom_text_secondary

0xc523,	// (0x0000c5e5) status_small_pane_g7_ParamLimits

0xc523,	// (0x0000c5e5) status_small_pane_g7

0xc546,	// (0x0000c608) status_small_pane_t1_ParamLimits

0xba07,	// (0x0000bac9) title_pane_g2

0x0003,

0xf529,	// (0x0000f5eb) title_pane_g

0xbc7f,	// (0x0000bd41) aid_size_cell_colour_1_pane_ParamLimits

0xbc7f,	// (0x0000bd41) aid_size_cell_colour_1_pane

0xbc93,	// (0x0000bd55) aid_size_cell_colour_2_pane_ParamLimits

0xbc93,	// (0x0000bd55) aid_size_cell_colour_2_pane

0xbca7,	// (0x0000bd69) aid_size_cell_colour_3_pane_ParamLimits

0xbca7,	// (0x0000bd69) aid_size_cell_colour_3_pane

0xbcbb,	// (0x0000bd7d) aid_size_cell_colour_4_pane_ParamLimits

0xbcbb,	// (0x0000bd7d) aid_size_cell_colour_4_pane

0x180d,	// (0x000018cf) title_pane_stacon_g1_ParamLimits

0x180d,	// (0x000018cf) title_pane_stacon_g1

0x3edd,	// (0x00003f9f) popup_note_wait_window_g3_ParamLimits

0x3edd,	// (0x00003f9f) popup_note_wait_window_g3

0x3f53,	// (0x00004015) popup_note_wait_window_t5_ParamLimits

0x3f53,	// (0x00004015) popup_note_wait_window_t5

0x01d1,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc776,	// (0x0000c838) popup_feb_china_hwr_fs_window_ParamLimits

0xc776,	// (0x0000c838) popup_feb_china_hwr_fs_window

0xd1de,	// (0x0000d2a0) aid_size_cell_hwr_fs_ParamLimits

0xd1de,	// (0x0000d2a0) aid_size_cell_hwr_fs

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp3_ParamLimits

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp3

0xd1f3,	// (0x0000d2b5) grid_hwr_fs_pane_ParamLimits

0xd1f3,	// (0x0000d2b5) grid_hwr_fs_pane

0x37fb,	// (0x000038bd) linegrid_hwr_fs_pane_ParamLimits

0x37fb,	// (0x000038bd) linegrid_hwr_fs_pane

0xd20b,	// (0x0000d2cd) cell_hwr_fs_pane_ParamLimits

0xd20b,	// (0x0000d2cd) cell_hwr_fs_pane

0x382d,	// (0x000038ef) linegrid_hwr_fs_pane_g1_ParamLimits

0x382d,	// (0x000038ef) linegrid_hwr_fs_pane_g1

0xd231,	// (0x0000d2f3) linegrid_hwr_fs_pane_g2_ParamLimits

0xd231,	// (0x0000d2f3) linegrid_hwr_fs_pane_g2

0x384b,	// (0x0000390d) linegrid_hwr_fs_pane_g3_ParamLimits

0x384b,	// (0x0000390d) linegrid_hwr_fs_pane_g3

0x3857,	// (0x00003919) linegrid_hwr_fs_pane_g4_ParamLimits

0x3857,	// (0x00003919) linegrid_hwr_fs_pane_g4

0x3871,	// (0x00003933) linegrid_hwr_fs_pane_g5_ParamLimits

0x3871,	// (0x00003933) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0000f881) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0000f881) linegrid_hwr_fs_pane_g

0x3887,	// (0x00003949) cell_hwr_fs_pane_g1_ParamLimits

0x3887,	// (0x00003949) cell_hwr_fs_pane_g1

0x3410,	// (0x000034d2) cell_hwr_fs_pane_g2_ParamLimits

0x3410,	// (0x000034d2) cell_hwr_fs_pane_g2

0xd243,	// (0x0000d305) cell_hwr_fs_pane_g3_ParamLimits

0xd243,	// (0x0000d305) cell_hwr_fs_pane_g3

0xd250,	// (0x0000d312) cell_hwr_fs_pane_g4_ParamLimits

0xd250,	// (0x0000d312) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x0000f88c) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x0000f88c) cell_hwr_fs_pane_g

0xd25d,	// (0x0000d31f) cell_hwr_fs_pane_t1

0x01d1,	// (0x00000293) grid_highlight_pane_cp6

0x01d1,	// (0x00000293) main_idle_act2_pane

0x15be,	// (0x00001680) aid_inside_area_popup_secondary

0xd33e,	// (0x0000d400) aid_inside_area_window_primary_ParamLimits

0xd33e,	// (0x0000d400) aid_inside_area_window_primary

0x54ef,	// (0x000055b1) ai2_news_ticker_pane

0x54f7,	// (0x000055b9) aid_size_cell_ai1_link_ParamLimits

0x54f7,	// (0x000055b9) aid_size_cell_ai1_link

0xd72c,	// (0x0000d7ee) popup_ai2_data_window_ParamLimits

0xd72c,	// (0x0000d7ee) popup_ai2_data_window

0x5527,	// (0x000055e9) popup_ai2_link_window_ParamLimits

0x5527,	// (0x000055e9) popup_ai2_link_window

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp4_ParamLimits

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp4

0x553b,	// (0x000055fd) grid_ai2_link_pane_ParamLimits

0x553b,	// (0x000055fd) grid_ai2_link_pane

0x5552,	// (0x00005614) popup_ai2_link_window_g1_ParamLimits

0x5552,	// (0x00005614) popup_ai2_link_window_g1

0x555e,	// (0x00005620) popup_ai2_link_window_g2_ParamLimits

0x555e,	// (0x00005620) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0000fa5f) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0000fa5f) popup_ai2_link_window_g

0x556d,	// (0x0000562f) ai2_mp_button_pane

0x5575,	// (0x00005637) ai2_mp_volume_pane

0x3a7b,	// (0x00003b3d) bg_popup_sub_pane_cp5_ParamLimits

0x3a7b,	// (0x00003b3d) bg_popup_sub_pane_cp5

0x557d,	// (0x0000563f) heading_ai2_gene_pane_ParamLimits

0x557d,	// (0x0000563f) heading_ai2_gene_pane

0x5589,	// (0x0000564b) list_ai2_gene_pane_ParamLimits

0x5589,	// (0x0000564b) list_ai2_gene_pane

0x55d1,	// (0x00005693) cell_ai2_link_pane_ParamLimits

0x55d1,	// (0x00005693) cell_ai2_link_pane

0x55e7,	// (0x000056a9) cell_ai2_link_pane_g1

0x01d1,	// (0x00000293) grid_highlight_pane_cp7

0x56b7,	// (0x00005779) ai2_mp_volume_pane_g1

0x56bf,	// (0x00005781) ai2_mp_volume_pane_g2

0xd756,	// (0x0000d818) list_ai2_gene_pane_t1

0x56c7,	// (0x00005789) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0000fa78) ai2_mp_volume_pane_g

0x56cf,	// (0x00005791) volume_small_pane_cp3

0x56d8,	// (0x0000579a) aid_size_cell_ai2_button

0x56e0,	// (0x000057a2) grid_ai2_button_pane

0x56e9,	// (0x000057ab) cell_ai2_button_pane_ParamLimits

0x56e9,	// (0x000057ab) cell_ai2_button_pane

0xf4ff,	// (0x0000f5c1) cell_ai2_button_pane_g1

0x01d1,	// (0x00000293) grid_highlight_pane_cp8

0x5677,	// (0x00005739) ai2_gene_pane_t1_ParamLimits

0x5677,	// (0x00005739) ai2_gene_pane_t1

0xc714,	// (0x0000c7d6) aid_height_parent_landscape

0xd486,	// (0x0000d548) aid_height_set_list

0x4e4f,	// (0x00004f11) aid_size_parent

0x525a,	// (0x0000531c) aid_size_cell_graphic_pane_ParamLimits

0x5599,	// (0x0000565b) popup_ai2_data_window_g1_ParamLimits

0x5599,	// (0x0000565b) popup_ai2_data_window_g1

0x55a5,	// (0x00005667) ai2_news_ticker_pane_g1

0x55ad,	// (0x0000566f) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0000fa64) ai2_news_ticker_pane_g

0x55b5,	// (0x00005677) ai2_news_ticker_pane_t1

0x55c3,	// (0x00005685) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x0000fa69) ai2_news_ticker_pane_t

0x55f0,	// (0x000056b2) heading_ai2_gene_pane_g1

0x55f8,	// (0x000056ba) heading_ai2_gene_pane_t1_ParamLimits

0x55f8,	// (0x000056ba) heading_ai2_gene_pane_t1

0x560d,	// (0x000056cf) list_highlight_pane_cp6

0xd740,	// (0x0000d802) ai2_gene_pane_ParamLimits

0xd740,	// (0x0000d802) ai2_gene_pane

0xd764,	// (0x0000d826) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0000fa6e) list_ai2_gene_pane_t

0x5648,	// (0x0000570a) list_highlight_pane_cp8_ParamLimits

0x5648,	// (0x0000570a) list_highlight_pane_cp8

0x5659,	// (0x0000571b) ai2_gene_pane_g1_ParamLimits

0x5659,	// (0x0000571b) ai2_gene_pane_g1

0x566b,	// (0x0000572d) ai2_gene_pane_g2_ParamLimits

0x566b,	// (0x0000572d) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0000fa73) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0000fa73) ai2_gene_pane_g

0x0d13,	// (0x00000dd5) scroll_pane_cp12

0xc6d1,	// (0x0000c793) control_pane_t3_ParamLimits

0xc6d1,	// (0x0000c793) control_pane_t3

0xc537,	// (0x0000c5f9) status_small_pane_g8_ParamLimits

0xc537,	// (0x0000c5f9) status_small_pane_g8

0xc80b,	// (0x0000c8cd) popup_find_window_ParamLimits

0xca9e,	// (0x0000cb60) popup_note_image_window_ParamLimits

0x0daa,	// (0x00000e6c) list_double2_graphic_pane_vc_g1_ParamLimits

0x0daa,	// (0x00000e6c) list_double2_graphic_pane_vc_g1

0x0d30,	// (0x00000df2) list_double2_graphic_pane_vc_g2_ParamLimits

0x0d30,	// (0x00000df2) list_double2_graphic_pane_vc_g2

0x0d3c,	// (0x00000dfe) list_double2_graphic_pane_vc_g3_ParamLimits

0x0d3c,	// (0x00000dfe) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x0000f848) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x0000f848) list_double2_graphic_pane_vc_g

0x35b7,	// (0x00003679) list_double2_graphic_pane_vc_t1_ParamLimits

0x35b7,	// (0x00003679) list_double2_graphic_pane_vc_t1

0x0d30,	// (0x00000df2) list_single_heading_pane_vc_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_heading_pane_vc_g1

0x0d3c,	// (0x00000dfe) list_single_heading_pane_vc_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_heading_pane_vc_g

0x36c6,	// (0x00003788) list_single_heading_pane_vc_t1_ParamLimits

0x36c6,	// (0x00003788) list_single_heading_pane_vc_t1

0x36dc,	// (0x0000379e) list_single_heading_pane_vc_t2_ParamLimits

0x36dc,	// (0x0000379e) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0000f870) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0000f870) list_single_heading_pane_vc_t

0x3710,	// (0x000037d2) list_setting_number_pane_vc_g1_ParamLimits

0x3710,	// (0x000037d2) list_setting_number_pane_vc_g1

0x371c,	// (0x000037de) list_setting_number_pane_vc_g2_ParamLimits

0x371c,	// (0x000037de) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f875) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f875) list_setting_number_pane_vc_g

0x3728,	// (0x000037ea) list_setting_number_pane_vc_t1_ParamLimits

0x3728,	// (0x000037ea) list_setting_number_pane_vc_t1

0x373c,	// (0x000037fe) list_setting_number_pane_vc_t2_ParamLimits

0x373c,	// (0x000037fe) list_setting_number_pane_vc_t2

0x3758,	// (0x0000381a) list_setting_number_pane_vc_t3_ParamLimits

0x3758,	// (0x0000381a) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0000f87a) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0000f87a) list_setting_number_pane_vc_t

0x3786,	// (0x00003848) set_value_pane_vc_ParamLimits

0x3786,	// (0x00003848) set_value_pane_vc

0x5055,	// (0x00005117) list_double2_graphic_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double2_graphic_pane_vc

0x5055,	// (0x00005117) list_double2_large_graphic_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double2_large_graphic_pane_vc

0x5055,	// (0x00005117) list_double2_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double2_pane_vc

0x5055,	// (0x00005117) list_double_graphic_heading_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_graphic_heading_pane_vc

0x5055,	// (0x00005117) list_double_graphic_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_graphic_pane_vc

0x5055,	// (0x00005117) list_double_heading_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_heading_pane_vc

0x5067,	// (0x00005129) list_double_large_graphic_pane_vc_ParamLimits

0x5067,	// (0x00005129) list_double_large_graphic_pane_vc

0x5055,	// (0x00005117) list_double_number_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_number_pane_vc

0x5055,	// (0x00005117) list_double_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_pane_vc

0x5055,	// (0x00005117) list_double_time_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_double_time_pane_vc

0x5055,	// (0x00005117) list_setting_number_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_setting_number_pane_vc

0x5055,	// (0x00005117) list_setting_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_setting_pane_vc

0x5055,	// (0x00005117) list_single_graphic_heading_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_single_graphic_heading_pane_vc

0x5055,	// (0x00005117) list_single_heading_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_single_heading_pane_vc

0x5055,	// (0x00005117) list_single_number_heading_pane_vc_ParamLimits

0x5055,	// (0x00005117) list_single_number_heading_pane_vc

0x0daa,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0daa,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1

0x571d,	// (0x000057df) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x571d,	// (0x000057df) list_double_graphic_heading_pane_vc_g2

0x5729,	// (0x000057eb) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5729,	// (0x000057eb) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x0000fa7f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x0000fa7f) list_double_graphic_heading_pane_vc_g

0x5735,	// (0x000057f7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5735,	// (0x000057f7) list_double_graphic_heading_pane_vc_t1

0x5751,	// (0x00005813) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5751,	// (0x00005813) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0000fa86) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0000fa86) list_double_graphic_heading_pane_vc_t

0x3710,	// (0x000037d2) list_setting_pane_vc_g1_ParamLimits

0x3710,	// (0x000037d2) list_setting_pane_vc_g1

0x371c,	// (0x000037de) list_setting_pane_vc_g2_ParamLimits

0x371c,	// (0x000037de) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f875) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f875) list_setting_pane_vc_g

0x597f,	// (0x00005a41) list_setting_pane_vc_t1_ParamLimits

0x597f,	// (0x00005a41) list_setting_pane_vc_t1

0x599b,	// (0x00005a5d) list_setting_pane_vc_t2_ParamLimits

0x599b,	// (0x00005a5d) list_setting_pane_vc_t2

0x0001,

0xf9f2,	// (0x0000fab4) list_setting_pane_vc_t_ParamLimits

0xf9f2,	// (0x0000fab4) list_setting_pane_vc_t

0x3786,	// (0x00003848) set_value_pane_cp_vc_ParamLimits

0x3786,	// (0x00003848) set_value_pane_cp_vc

0x0d30,	// (0x00000df2) list_single_number_heading_pane_vc_g1_ParamLimits

0x0d30,	// (0x00000df2) list_single_number_heading_pane_vc_g1

0x0d3c,	// (0x00000dfe) list_single_number_heading_pane_vc_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f665) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f665) list_single_number_heading_pane_vc_g

0x59b7,	// (0x00005a79) list_single_number_heading_pane_vc_t1_ParamLimits

0x59b7,	// (0x00005a79) list_single_number_heading_pane_vc_t1

0x0d86,	// (0x00000e48) list_single_number_heading_pane_vc_t2_ParamLimits

0x0d86,	// (0x00000e48) list_single_number_heading_pane_vc_t2

0x0d98,	// (0x00000e5a) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d98,	// (0x00000e5a) list_single_number_heading_pane_vc_t3

0x0002,

0xf9f7,	// (0x0000fab9) list_single_number_heading_pane_vc_t_ParamLimits

0xf9f7,	// (0x0000fab9) list_single_number_heading_pane_vc_t

0x0daa,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0daa,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1

0x0d30,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0d30,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4

0x0d3c,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0d3c,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x0000f848) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x0000f848) list_single_graphic_heading_pane_vc_g

0x59cd,	// (0x00005a8f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x59cd,	// (0x00005a8f) list_single_graphic_heading_pane_vc_t1

0x59e3,	// (0x00005aa5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59e3,	// (0x00005aa5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0000fac0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0000fac0) list_single_graphic_heading_pane_vc_t

0x0d30,	// (0x00000df2) list_double2_pane_vc_g1_ParamLimits

0x0d30,	// (0x00000df2) list_double2_pane_vc_g1

0x0d3c,	// (0x00000dfe) list_double2_pane_vc_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f665) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f665) list_double2_pane_vc_g

0x4ff3,	// (0x000050b5) list_double2_pane_vc_t1_ParamLimits

0x4ff3,	// (0x000050b5) list_double2_pane_vc_t1

0x59f5,	// (0x00005ab7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59f5,	// (0x00005ab7) list_double2_large_graphic_pane_vc_g1

0x0d30,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0d30,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2

0x0d3c,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0d3c,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0000f682) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0000f682) list_double2_large_graphic_pane_vc_g

0x5a01,	// (0x00005ac3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a01,	// (0x00005ac3) list_double2_large_graphic_pane_vc_t1

0x5a17,	// (0x00005ad9) list_double_time_pane_vc_g1_ParamLimits

0x5a17,	// (0x00005ad9) list_double_time_pane_vc_g1

0x5a23,	// (0x00005ae5) list_double_time_pane_vc_g2_ParamLimits

0x5a23,	// (0x00005ae5) list_double_time_pane_vc_g2

0x0001,

0xfa03,	// (0x0000fac5) list_double_time_pane_vc_g_ParamLimits

0xfa03,	// (0x0000fac5) list_double_time_pane_vc_g

0x5a2f,	// (0x00005af1) list_double_time_pane_vc_t1_ParamLimits

0x5a2f,	// (0x00005af1) list_double_time_pane_vc_t1

0x5a53,	// (0x00005b15) list_double_time_pane_vc_t2_ParamLimits

0x5a53,	// (0x00005b15) list_double_time_pane_vc_t2

0x5a82,	// (0x00005b44) list_double_time_pane_vc_t3_ParamLimits

0x5a82,	// (0x00005b44) list_double_time_pane_vc_t3

0x5a94,	// (0x00005b56) list_double_time_pane_vc_t4_ParamLimits

0x5a94,	// (0x00005b56) list_double_time_pane_vc_t4

0x0003,

0xfa08,	// (0x0000faca) list_double_time_pane_vc_t_ParamLimits

0xfa08,	// (0x0000faca) list_double_time_pane_vc_t

0x0d30,	// (0x00000df2) list_double_pane_vc_g1_ParamLimits

0x0d30,	// (0x00000df2) list_double_pane_vc_g1

0x0d3c,	// (0x00000dfe) list_double_pane_vc_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f665) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f665) list_double_pane_vc_g

0x5aa8,	// (0x00005b6a) list_double_pane_vc_t1_ParamLimits

0x5aa8,	// (0x00005b6a) list_double_pane_vc_t1

0x5abc,	// (0x00005b7e) list_double_pane_vc_t2_ParamLimits

0x5abc,	// (0x00005b7e) list_double_pane_vc_t2

0x0001,

0xfa11,	// (0x0000fad3) list_double_pane_vc_t_ParamLimits

0xfa11,	// (0x0000fad3) list_double_pane_vc_t

0x0d30,	// (0x00000df2) list_double_number_pane_vc_g1_ParamLimits

0x0d30,	// (0x00000df2) list_double_number_pane_vc_g1

0x0d3c,	// (0x00000dfe) list_double_number_pane_vc_g2_ParamLimits

0x0d3c,	// (0x00000dfe) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f665) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f665) list_double_number_pane_vc_g

0x5ad4,	// (0x00005b96) list_double_number_pane_vc_t1_ParamLimits

0x5ad4,	// (0x00005b96) list_double_number_pane_vc_t1

0x5ae6,	// (0x00005ba8) list_double_number_pane_vc_t2_ParamLimits

0x5ae6,	// (0x00005ba8) list_double_number_pane_vc_t2

0x5afa,	// (0x00005bbc) list_double_number_pane_vc_t3_ParamLimits

0x5afa,	// (0x00005bbc) list_double_number_pane_vc_t3

0x0002,

0xfa16,	// (0x0000fad8) list_double_number_pane_vc_t_ParamLimits

0xfa16,	// (0x0000fad8) list_double_number_pane_vc_t

0x5b12,	// (0x00005bd4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b12,	// (0x00005bd4) list_double_large_graphic_pane_vc_g1

0x5b2e,	// (0x00005bf0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b2e,	// (0x00005bf0) list_double_large_graphic_pane_vc_g2

0x5b42,	// (0x00005c04) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5b42,	// (0x00005c04) list_double_large_graphic_pane_vc_g3

0x5b51,	// (0x00005c13) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b51,	// (0x00005c13) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa1d,	// (0x0000fadf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa1d,	// (0x0000fadf) list_double_large_graphic_pane_vc_g

0x5b60,	// (0x00005c22) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b60,	// (0x00005c22) list_double_large_graphic_pane_vc_t1

0x5b7c,	// (0x00005c3e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b7c,	// (0x00005c3e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa26,	// (0x0000fae8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa26,	// (0x0000fae8) list_double_large_graphic_pane_vc_t

0x571d,	// (0x000057df) list_double_heading_pane_vc_g1_ParamLimits

0x571d,	// (0x000057df) list_double_heading_pane_vc_g1

0x5729,	// (0x000057eb) list_double_heading_pane_vc_g2_ParamLimits

0x5729,	// (0x000057eb) list_double_heading_pane_vc_g2

0x0001,

0xfa2b,	// (0x0000faed) list_double_heading_pane_vc_g_ParamLimits

0xfa2b,	// (0x0000faed) list_double_heading_pane_vc_g

0x5b9e,	// (0x00005c60) list_double_heading_pane_vc_t1_ParamLimits

0x5b9e,	// (0x00005c60) list_double_heading_pane_vc_t1

0x5bb2,	// (0x00005c74) list_double_heading_pane_vc_t2_ParamLimits

0x5bb2,	// (0x00005c74) list_double_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x0000faf2) list_double_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x0000faf2) list_double_heading_pane_vc_t

0x5bca,	// (0x00005c8c) list_double_graphic_pane_vc_g1_ParamLimits

0x5bca,	// (0x00005c8c) list_double_graphic_pane_vc_g1

0x5bd6,	// (0x00005c98) list_double_graphic_pane_vc_g2_ParamLimits

0x5bd6,	// (0x00005c98) list_double_graphic_pane_vc_g2

0x0d30,	// (0x00000df2) list_double_graphic_pane_vc_g3_ParamLimits

0x0d30,	// (0x00000df2) list_double_graphic_pane_vc_g3

0x0003,

0xfa35,	// (0x0000faf7) list_double_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0000faf7) list_double_graphic_pane_vc_g

0x5bf3,	// (0x00005cb5) list_double_graphic_pane_vc_t1_ParamLimits

0x5bf3,	// (0x00005cb5) list_double_graphic_pane_vc_t1

0x5c1d,	// (0x00005cdf) list_double_graphic_pane_vc_t2_ParamLimits

0x5c1d,	// (0x00005cdf) list_double_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0000fb00) list_double_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0000fb00) list_double_graphic_pane_vc_t

0xf521,	// (0x0000f5e3) aid_size_cell_fastswap

0xb7ee,	// (0x0000b8b0) aid_size_cell_touch_ParamLimits

0xb7ee,	// (0x0000b8b0) aid_size_cell_touch

0x01fb,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x01fb,	// (0x000002bd) popup_fast_swap_wide_window

0xb99e,	// (0x0000ba60) touch_pane_ParamLimits

0xb99e,	// (0x0000ba60) touch_pane

0x11ee,	// (0x000012b0) button_value_adjust_pane_cp2

0x11f6,	// (0x000012b8) button_value_adjust_pane_cp4

0x1218,	// (0x000012da) form_field_data_pane_cp2

0xc0d3,	// (0x0000c195) form_field_data_wide_pane_cp2

0x1a73,	// (0x00001b35) bg_scroll_pane_ParamLimits

0x1a92,	// (0x00001b54) scroll_handle_pane_ParamLimits

0x1aa6,	// (0x00001b68) scroll_sc2_down_pane_ParamLimits

0x1aa6,	// (0x00001b68) scroll_sc2_down_pane

0x1acd,	// (0x00001b8f) scroll_sc2_up_pane_ParamLimits

0x1acd,	// (0x00001b8f) scroll_sc2_up_pane

0xd894,	// (0x0000d956) grid_wheel_folder_pane_g1_ParamLimits

0xd894,	// (0x0000d956) grid_wheel_folder_pane_g1

0x21b4,	// (0x00002276) clock_nsta_pane_cp2_ParamLimits

0x21b4,	// (0x00002276) clock_nsta_pane_cp2

0xc426,	// (0x0000c4e8) listscroll_midp_pane_ParamLimits

0xc432,	// (0x0000c4f4) midp_canvas_pane

0x2a5c,	// (0x00002b1e) nsta_clock_indic_pane

0x2aba,	// (0x00002b7c) listscroll_form_pane_vc

0x2ade,	// (0x00002ba0) listscroll_set_pane_vc_ParamLimits

0x2ade,	// (0x00002ba0) listscroll_set_pane_vc

0xced8,	// (0x0000cf9a) clock_nsta_pane

0xcf02,	// (0x0000cfc4) indicator_nsta_pane

0x3521,	// (0x000035e3) bg_popup_sub_pane_cp2_ParamLimits

0x3535,	// (0x000035f7) find_pane_cp2_ParamLimits

0x3535,	// (0x000035f7) find_pane_cp2

0x354b,	// (0x0000360d) grid_toobar_pane_ParamLimits

0x3796,	// (0x00003858) list_form_gen_pane_vc_ParamLimits

0x3796,	// (0x00003858) list_form_gen_pane_vc

0x37ac,	// (0x0000386e) scroll_pane_cp8_vc_ParamLimits

0x37ac,	// (0x0000386e) scroll_pane_cp8_vc

0x38c5,	// (0x00003987) data_form_wide_pane_vc_ParamLimits

0x38c5,	// (0x00003987) data_form_wide_pane_vc

0x38d1,	// (0x00003993) form_field_data_wide_pane_vc_g1

0x38d9,	// (0x0000399b) form_field_data_wide_pane_vc_t1_ParamLimits

0x38d9,	// (0x0000399b) form_field_data_wide_pane_vc_t1

0x12d4,	// (0x00001396) input_focus_pane_cp6_vc_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_cp6_vc

0x3c5c,	// (0x00003d1e) list_midp_pane_ParamLimits

0x52c4,	// (0x00005386) scroll_pane_cp16_ParamLimits

0x52c4,	// (0x00005386) scroll_pane_cp16

0x3cb2,	// (0x00003d74) button_value_adjust_pane_ParamLimits

0x3cb2,	// (0x00003d74) button_value_adjust_pane

0xd497,	// (0x0000d559) button_value_adjust_pane_cp6_ParamLimits

0xd497,	// (0x0000d559) button_value_adjust_pane_cp6

0xd5b1,	// (0x0000d673) settings_code_pane_cp_ParamLimits

0xd5b1,	// (0x0000d673) settings_code_pane_cp

0xf4ff,	// (0x0000f5c1) cell_touch_pane_g1

0xf4ff,	// (0x0000f5c1) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0000f79b) cell_touch_pane_g

0xd772,	// (0x0000d834) cell_touch_pane_cp_ParamLimits

0xd772,	// (0x0000d834) cell_touch_pane_cp

0xd78e,	// (0x0000d850) cell_touch_pane_ParamLimits

0xd78e,	// (0x0000d850) cell_touch_pane

0xf4ff,	// (0x0000f5c1) scroll_sc2_down_pane_g1

0xf4ff,	// (0x0000f5c1) scroll_sc2_up_pane_g1

0x01d1,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x576f,	// (0x00005831) list_set_graphic_pane_vc_g1_ParamLimits

0x576f,	// (0x00005831) list_set_graphic_pane_vc_g1

0x577b,	// (0x0000583d) list_set_graphic_pane_vc_g2_ParamLimits

0x577b,	// (0x0000583d) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x0000fa8b) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x0000fa8b) list_set_graphic_pane_vc_g

0x5787,	// (0x00005849) text_primary_small_cp13_vc_ParamLimits

0x5787,	// (0x00005849) text_primary_small_cp13_vc

0x579f,	// (0x00005861) list_set_graphic_pane_vc_ParamLimits

0x579f,	// (0x00005861) list_set_graphic_pane_vc

0x01d1,	// (0x00000293) input_focus_pane_cp2_vc

0xf4ff,	// (0x0000f5c1) setting_code_pane_vc_g1

0x0521,	// (0x000005e3) setting_code_pane_vc_t1

0x57b2,	// (0x00005874) set_text_pane_vc_t1_ParamLimits

0x57b2,	// (0x00005874) set_text_pane_vc_t1

0x01d1,	// (0x00000293) input_focus_pane_cp1_vc

0x57ce,	// (0x00005890) list_set_text_pane_vc

0xf4ff,	// (0x0000f5c1) setting_text_pane_vc_g1

0x01d1,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x04f0,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x57d8,	// (0x0000589a) setting_slider_graphic_pane_vc_t1

0x57e8,	// (0x000058aa) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0000fa90) setting_slider_graphic_pane_vc_t

0x57f8,	// (0x000058ba) slider_set_pane_cp_vc

0x5800,	// (0x000058c2) slider_set_pane_vc_g1

0x5809,	// (0x000058cb) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0000fa95) slider_set_pane_vc_g

0x1403,	// (0x000014c5) set_opt_bg_pane_g1_copy1

0x140b,	// (0x000014cd) set_opt_bg_pane_g2_copy1

0x5835,	// (0x000058f7) set_opt_bg_pane_g3_copy1

0x141b,	// (0x000014dd) set_opt_bg_pane_g4_copy1

0x1423,	// (0x000014e5) set_opt_bg_pane_g5_copy1

0x142b,	// (0x000014ed) set_opt_bg_pane_g6_copy1

0x583f,	// (0x00005901) set_opt_bg_pane_g7_copy1

0x5849,	// (0x0000590b) set_opt_bg_pane_g8_copy1

0x5853,	// (0x00005915) set_opt_bg_pane_g9_copy1

0x01d1,	// (0x00000293) bg_set_opt_pane_cp_vc

0x585d,	// (0x0000591f) setting_slider_pane_vc_t1

0x586c,	// (0x0000592e) setting_slider_pane_vc_t2

0x587c,	// (0x0000593e) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0000faa4) setting_slider_pane_vc_t

0x588c,	// (0x0000594e) slider_set_pane_vc

0x44f3,	// (0x000045b5) volume_set_pane_vc_g1

0x44fc,	// (0x000045be) volume_set_pane_vc_g2

0x4505,	// (0x000045c7) volume_set_pane_vc_g3

0x450e,	// (0x000045d0) volume_set_pane_vc_g4

0x4517,	// (0x000045d9) volume_set_pane_vc_g5

0x4520,	// (0x000045e2) volume_set_pane_vc_g6

0x4529,	// (0x000045eb) volume_set_pane_vc_g7

0x4532,	// (0x000045f4) volume_set_pane_vc_g8

0x453b,	// (0x000045fd) volume_set_pane_vc_g9

0x4544,	// (0x00004606) volume_set_pane_vc_g10

0x0009,

0xf880,	// (0x0000f942) volume_set_pane_vc_g

0x5894,	// (0x00005956) volume_set_pane_vc

0x589c,	// (0x0000595e) button_value_adjust_pane_cp1_vc

0x58a6,	// (0x00005968) list_highlight_pane_cp2_vc

0x58af,	// (0x00005971) list_set_pane_vc_ParamLimits

0x58af,	// (0x00005971) list_set_pane_vc

0x590d,	// (0x000059cf) main_pane_set_vc_t1_ParamLimits

0x590d,	// (0x000059cf) main_pane_set_vc_t1

0x5922,	// (0x000059e4) main_pane_set_vc_t2_ParamLimits

0x5922,	// (0x000059e4) main_pane_set_vc_t2

0x5934,	// (0x000059f6) main_pane_set_vc_t3_ParamLimits

0x5934,	// (0x000059f6) main_pane_set_vc_t3

0x5948,	// (0x00005a0a) main_pane_set_vc_t4_ParamLimits

0x5948,	// (0x00005a0a) main_pane_set_vc_t4

0x0003,

0xf9e9,	// (0x0000faab) main_pane_set_vc_t_ParamLimits

0xf9e9,	// (0x0000faab) main_pane_set_vc_t

0x595c,	// (0x00005a1e) setting_code_pane_vc_ParamLimits

0x595c,	// (0x00005a1e) setting_code_pane_vc

0x596d,	// (0x00005a2f) setting_slider_graphic_pane_vc

0x596d,	// (0x00005a2f) setting_slider_pane_vc

0x596d,	// (0x00005a2f) setting_text_pane_vc

0x596d,	// (0x00005a2f) setting_volume_pane_vc

0x5977,	// (0x00005a39) scroll_pane_cp121_vc

0x11dc,	// (0x0000129e) set_content_pane_vc

0x5c47,	// (0x00005d09) button_value_adjust_pane_g1

0x5c50,	// (0x00005d12) button_value_adjust_pane_g2

0x0001,

0xfa43,	// (0x0000fb05) button_value_adjust_pane_g

0x5c59,	// (0x00005d1b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c59,	// (0x00005d1b) form_field_slider_wide_pane_vc_t1

0x5c6d,	// (0x00005d2f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c6d,	// (0x00005d2f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa48,	// (0x0000fb0a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa48,	// (0x0000fb0a) form_field_slider_wide_pane_vc_t

0x076b,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x076b,	// (0x0000082d) input_focus_pane_cp10_vc

0x5c9b,	// (0x00005d5d) slider_cont_pane_cp1_vc_ParamLimits

0x5c9b,	// (0x00005d5d) slider_cont_pane_cp1_vc

0x5cad,	// (0x00005d6f) slider_form_pane_g1_cp2

0x5809,	// (0x000058cb) slider_form_pane_g2_cp2

0x5cda,	// (0x00005d9c) form_field_slider_pane_vc_t3

0x5ce8,	// (0x00005daa) form_field_slider_pane_vc_t4

0x5cf6,	// (0x00005db8) slider_form_pane_vc_ParamLimits

0x5cf6,	// (0x00005db8) slider_form_pane_vc

0x5d03,	// (0x00005dc5) form_field_slider_pane_vc_t1_ParamLimits

0x5d03,	// (0x00005dc5) form_field_slider_pane_vc_t1

0x5c6d,	// (0x00005d2f) form_field_slider_pane_vc_t2_ParamLimits

0x5c6d,	// (0x00005d2f) form_field_slider_pane_vc_t2

0x0001,

0xfa5a,	// (0x0000fb1c) form_field_slider_pane_vc_t_ParamLimits

0xfa5a,	// (0x0000fb1c) form_field_slider_pane_vc_t

0x076b,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x076b,	// (0x0000082d) input_focus_pane_cp9_vc

0x5d1f,	// (0x00005de1) slider_cont_pane_vc_ParamLimits

0x5d1f,	// (0x00005de1) slider_cont_pane_vc

0x5d33,	// (0x00005df5) list_form_graphic_pane_cp_vc_ParamLimits

0x5d33,	// (0x00005df5) list_form_graphic_pane_cp_vc

0x38d1,	// (0x00003993) form_field_popup_wide_pane_vc_g1

0x5d48,	// (0x00005e0a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d48,	// (0x00005e0a) form_field_popup_wide_pane_vc_t1

0x12d4,	// (0x00001396) input_focus_pane_cp8_vc_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_cp8_vc

0x5d8d,	// (0x00005e4f) list_form_wide_pane_vc_ParamLimits

0x5d8d,	// (0x00005e4f) list_form_wide_pane_vc

0x5d99,	// (0x00005e5b) list_form_graphic_pane_vc_g1

0x5da1,	// (0x00005e63) list_form_graphic_pane_vc_t1_ParamLimits

0x5da1,	// (0x00005e63) list_form_graphic_pane_vc_t1

0x0445,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0445,	// (0x00000507) list_highlight_pane_cp5_vc

0x5dbd,	// (0x00005e7f) list_form_graphic_pane_vc_ParamLimits

0x5dbd,	// (0x00005e7f) list_form_graphic_pane_vc

0x38d1,	// (0x00003993) form_field_popup_pane_vc_g1

0x5dd3,	// (0x00005e95) form_field_popup_pane_vc_t1_ParamLimits

0x5dd3,	// (0x00005e95) form_field_popup_pane_vc_t1

0x12d4,	// (0x00001396) input_focus_pane_cp7_vc_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_cp7_vc

0x5dea,	// (0x00005eac) list_form_pane_vc_ParamLimits

0x5dea,	// (0x00005eac) list_form_pane_vc

0x5df6,	// (0x00005eb8) data_form_pane_vc_t1_ParamLimits

0x5df6,	// (0x00005eb8) data_form_pane_vc_t1

0x1403,	// (0x000014c5) input_focus_pane_vc_g1

0x140b,	// (0x000014cd) input_focus_pane_vc_g2

0x1413,	// (0x000014d5) input_focus_pane_vc_g3

0x141b,	// (0x000014dd) input_focus_pane_vc_g4

0x1423,	// (0x000014e5) input_focus_pane_vc_g5

0x142b,	// (0x000014ed) input_focus_pane_vc_g6

0x1433,	// (0x000014f5) input_focus_pane_vc_g7

0x143b,	// (0x000014fd) input_focus_pane_vc_g8

0x1443,	// (0x00001505) input_focus_pane_vc_g9

0xf4ff,	// (0x0000f5c1) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0000f724) input_focus_pane_vc_g

0x38c5,	// (0x00003987) data_form_pane_vc_ParamLimits

0x38c5,	// (0x00003987) data_form_pane_vc

0x38d1,	// (0x00003993) form_field_data_pane_vc_g1

0x5e11,	// (0x00005ed3) form_field_data_pane_vc_t1_ParamLimits

0x5e11,	// (0x00005ed3) form_field_data_pane_vc_t1

0x12d4,	// (0x00001396) input_focus_pane_vc_ParamLimits

0x12d4,	// (0x00001396) input_focus_pane_vc

0x5e2b,	// (0x00005eed) button_value_adjust_pane_cp3_vc

0x5e33,	// (0x00005ef5) button_value_adjust_pane_cp5_vc

0x5e3b,	// (0x00005efd) form_field_data_pane_vc_ParamLimits

0x5e3b,	// (0x00005efd) form_field_data_pane_vc

0x5e52,	// (0x00005f14) form_field_data_pane_vc_cp2

0x5e5a,	// (0x00005f1c) form_field_data_wide_pane_vc_ParamLimits

0x5e5a,	// (0x00005f1c) form_field_data_wide_pane_vc

0x5e70,	// (0x00005f32) form_field_data_wide_pane_vc_cp2

0x5e78,	// (0x00005f3a) form_field_popup_pane_vc_ParamLimits

0x5e78,	// (0x00005f3a) form_field_popup_pane_vc

0x5e8f,	// (0x00005f51) form_field_popup_wide_pane_vc_ParamLimits

0x5e8f,	// (0x00005f51) form_field_popup_wide_pane_vc

0x5ea5,	// (0x00005f67) form_field_slider_pane_vc_ParamLimits

0x5ea5,	// (0x00005f67) form_field_slider_pane_vc

0x5eb8,	// (0x00005f7a) form_field_slider_wide_pane_vc_ParamLimits

0x5eb8,	// (0x00005f7a) form_field_slider_wide_pane_vc

0xd7ac,	// (0x0000d86e) grid_touch_1_pane_ParamLimits

0xd7ac,	// (0x0000d86e) grid_touch_1_pane

0xd7c0,	// (0x0000d882) grid_touch_2_pane_ParamLimits

0xd7c0,	// (0x0000d882) grid_touch_2_pane

0x5f9c,	// (0x0000605e) touch_pane_g1_ParamLimits

0x5f9c,	// (0x0000605e) touch_pane_g1

0x5eef,	// (0x00005fb1) cell_app_pane_cp_wide_ParamLimits

0x5eef,	// (0x00005fb1) cell_app_pane_cp_wide

0x5f00,	// (0x00005fc2) grid_popup_fast_wide_pane_ParamLimits

0x5f00,	// (0x00005fc2) grid_popup_fast_wide_pane

0x5f14,	// (0x00005fd6) scroll_pane_cp19_ParamLimits

0x5f14,	// (0x00005fd6) scroll_pane_cp19

0x01d1,	// (0x00000293) bg_popup_window_pane_cp20

0x5f28,	// (0x00005fea) listscroll_popup_fast_wide_pane

0xd7ea,	// (0x0000d8ac) grid_indicator_nsta_pane

0x5f42,	// (0x00006004) clock_nsta_pane_g1

0x5f4b,	// (0x0000600d) clock_nsta_pane_t1

0xd7f6,	// (0x0000d8b8) cell_indicator_nsta_pane_ParamLimits

0xd7f6,	// (0x0000d8b8) cell_indicator_nsta_pane

0x5f9c,	// (0x0000605e) cell_indicator_nsta_pane_g1

0xd811,	// (0x0000d8d3) cell_indicator_nsta_pane_g2

0x0001,

0xfa6b,	// (0x0000fb2d) cell_indicator_nsta_pane_g

0x5fbc,	// (0x0000607e) clock_nsta_pane_cp

0x5fc5,	// (0x00006087) indicator_nsta_pane_cp

0x5fcf,	// (0x00006091) nsta_clock_indic_pane_g1

0x05b9,	// (0x0000067b) grid_indicator_pane

0x1bc2,	// (0x00001c84) scroll_pane_cp29

0x20e1,	// (0x000021a3) indicator_nsta_pane_cp2_ParamLimits

0x20e1,	// (0x000021a3) indicator_nsta_pane_cp2

0x0445,	// (0x00000507) main_apps_wheel_pane

0x3b1d,	// (0x00003bdf) form_midp_field_text_pane_ParamLimits

0x3c68,	// (0x00003d2a) scroll_bar_cp050_ParamLimits

0x6028,	// (0x000060ea) cell_indicator_pane_ParamLimits

0x6028,	// (0x000060ea) cell_indicator_pane

0x603f,	// (0x00006101) cell_indicator_pane_g1

0xd81e,	// (0x0000d8e0) grid_wheel_folder_pane_ParamLimits

0xd81e,	// (0x0000d8e0) grid_wheel_folder_pane

0xd82c,	// (0x0000d8ee) list_wheel_apps_pane_ParamLimits

0xd82c,	// (0x0000d8ee) list_wheel_apps_pane

0xd83a,	// (0x0000d8fc) main_apps_wheel_pane_g1_ParamLimits

0xd83a,	// (0x0000d8fc) main_apps_wheel_pane_g1

0xd846,	// (0x0000d908) main_apps_wheel_pane_g2_ParamLimits

0xd846,	// (0x0000d908) main_apps_wheel_pane_g2

0x0001,

0xfa87,	// (0x0000fb49) main_apps_wheel_pane_g_ParamLimits

0xfa87,	// (0x0000fb49) main_apps_wheel_pane_g

0xd854,	// (0x0000d916) main_apps_wheel_pane_t1_ParamLimits

0xd854,	// (0x0000d916) main_apps_wheel_pane_t1

0xd868,	// (0x0000d92a) list_wheel_apps_pane_g1

0xd870,	// (0x0000d932) list_wheel_apps_pane_g2

0xd878,	// (0x0000d93a) list_wheel_apps_pane_g3

0xd880,	// (0x0000d942) list_wheel_apps_pane_g4

0xd88a,	// (0x0000d94c) list_wheel_apps_pane_g5

0x0004,

0xfa8c,	// (0x0000fb4e) list_wheel_apps_pane_g

0x23ef,	// (0x000024b1) navi_icon_text_pane

0xcdcc,	// (0x0000ce8e) aid_fill_nsta

0x6104,	// (0x000061c6) navi_icon_text_pane_g1

0x6110,	// (0x000061d2) navi_icon_text_pane_t1

0x2282,	// (0x00002344) list_set_graphic_pane_t1_ParamLimits

0x2282,	// (0x00002344) list_set_graphic_pane_t1

0x43d3,	// (0x00004495) popup_midp_note_alarm_window_t6_ParamLimits

0x43d3,	// (0x00004495) popup_midp_note_alarm_window_t6

0x43e5,	// (0x000044a7) popup_midp_note_alarm_window_t7_ParamLimits

0x43e5,	// (0x000044a7) popup_midp_note_alarm_window_t7

0x43f7,	// (0x000044b9) popup_midp_note_alarm_window_t8_ParamLimits

0x43f7,	// (0x000044b9) popup_midp_note_alarm_window_t8

0x4409,	// (0x000044cb) popup_midp_note_alarm_window_t9_ParamLimits

0x4409,	// (0x000044cb) popup_midp_note_alarm_window_t9

0x441b,	// (0x000044dd) popup_midp_note_alarm_window_t10_ParamLimits

0x441b,	// (0x000044dd) popup_midp_note_alarm_window_t10

0x442d,	// (0x000044ef) popup_midp_note_alarm_window_t11_ParamLimits

0x442d,	// (0x000044ef) popup_midp_note_alarm_window_t11

0x443f,	// (0x00004501) scroll_pane_cp17_ParamLimits

0x443f,	// (0x00004501) scroll_pane_cp17

0x44f3,	// (0x000045b5) volume_small_pane_cp_g1

0x6122,	// (0x000061e4) volume_small_pane_cp_g2

0x612b,	// (0x000061ed) volume_small_pane_cp_g3

0x6134,	// (0x000061f6) volume_small_pane_cp_g4

0x613d,	// (0x000061ff) volume_small_pane_cp_g5

0x6146,	// (0x00006208) volume_small_pane_cp_g6

0x614f,	// (0x00006211) volume_small_pane_cp_g7

0x6158,	// (0x0000621a) volume_small_pane_cp_g8

0x6161,	// (0x00006223) volume_small_pane_cp_g9

0x616a,	// (0x0000622c) volume_small_pane_cp_g10

0x2640,	// (0x00002702) midp_ticker_pane_g1_ParamLimits

0x264c,	// (0x0000270e) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0000f7f0) midp_ticker_pane_g_ParamLimits

0x2658,	// (0x0000271a) midp_ticker_pane_t1_ParamLimits

0xcdf0,	// (0x0000ceb2) aid_fill_nsta_2

0x3c54,	// (0x00003d16) list_form2_midp_pane

0x5009,	// (0x000050cb) midp_editing_number_pane_ParamLimits

0x5018,	// (0x000050da) midp_ticker_pane_ParamLimits

0x6173,	// (0x00006235) form2_midp_field_pane

0x6197,	// (0x00006259) scroll_pane_cp51

0x61b7,	// (0x00006279) form2_midp_button_pane_ParamLimits

0x61b7,	// (0x00006279) form2_midp_button_pane

0x61c9,	// (0x0000628b) form2_midp_content_pane_ParamLimits

0x61c9,	// (0x0000628b) form2_midp_content_pane

0x61e3,	// (0x000062a5) form2_midp_field_choice_group_pane

0x61eb,	// (0x000062ad) form2_midp_field_pane_g1

0x61f3,	// (0x000062b5) form2_midp_field_pane_g2

0x61fb,	// (0x000062bd) form2_midp_field_pane_g3

0x6203,	// (0x000062c5) form2_midp_field_pane_g4

0x0003,

0xfab1,	// (0x0000fb73) form2_midp_field_pane_g

0x620b,	// (0x000062cd) form2_midp_gauge_slider_pane

0x6213,	// (0x000062d5) form2_midp_gauge_wait_pane

0x621b,	// (0x000062dd) form2_midp_image_pane_ParamLimits

0x621b,	// (0x000062dd) form2_midp_image_pane

0x6236,	// (0x000062f8) form2_midp_label_pane_ParamLimits

0x6236,	// (0x000062f8) form2_midp_label_pane

0xd8bd,	// (0x0000d97f) form2_midp_label_pane_cp_ParamLimits

0xd8bd,	// (0x0000d97f) form2_midp_label_pane_cp

0x6270,	// (0x00006332) form2_midp_string_pane_ParamLimits

0x6270,	// (0x00006332) form2_midp_string_pane

0xd8dc,	// (0x0000d99e) form2_midp_text_pane_ParamLimits

0xd8dc,	// (0x0000d99e) form2_midp_text_pane

0x629f,	// (0x00006361) form2_midp_time_pane

0x62af,	// (0x00006371) input_focus_pane_cp51_ParamLimits

0x62af,	// (0x00006371) input_focus_pane_cp51

0x62c7,	// (0x00006389) form2_midp_label_pane_t1_ParamLimits

0x62c7,	// (0x00006389) form2_midp_label_pane_t1

0xd8f5,	// (0x0000d9b7) form2_mdip_text_pane_t1_ParamLimits

0xd8f5,	// (0x0000d9b7) form2_mdip_text_pane_t1

0x6327,	// (0x000063e9) form2_midp_time_pane_t1

0x6342,	// (0x00006404) form2_midp_gauge_slider_pane_t1

0xd910,	// (0x0000d9d2) form2_midp_gauge_slider_pane_t2

0xd922,	// (0x0000d9e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaba,	// (0x0000fb7c) form2_midp_gauge_slider_pane_t

0x6378,	// (0x0000643a) form2_midp_slider_pane

0x6384,	// (0x00006446) form2_midp_gauge_wait_pane_t1

0x6392,	// (0x00006454) form2_midp_wait_pane_ParamLimits

0x6392,	// (0x00006454) form2_midp_wait_pane

0xd934,	// (0x0000d9f6) list_single_2graphic_pane_cp4_ParamLimits

0xd934,	// (0x0000d9f6) list_single_2graphic_pane_cp4

0xd27e,	// (0x0000d340) list_single_midp_graphic_pane_cp_ParamLimits

0xd27e,	// (0x0000d340) list_single_midp_graphic_pane_cp

0x01d1,	// (0x00000293) list_highlight_pane_cp20

0x63e1,	// (0x000064a3) list_single_2graphic_pane_g1_cp4

0x63e9,	// (0x000064ab) list_single_2graphic_pane_g2_cp4

0x63f1,	// (0x000064b3) list_single_2graphic_pane_t1_cp4

0x0445,	// (0x00000507) list_highlight_pane_cp21

0x6400,	// (0x000064c2) list_single_midp_graphic_pane_g4_cp

0x640f,	// (0x000064d1) list_single_midp_graphic_pane_t1_cp

0xd948,	// (0x0000da0a) form2_mdip_string_pane_t1_ParamLimits

0xd948,	// (0x0000da0a) form2_mdip_string_pane_t1

0x01d1,	// (0x00000293) bg_wml_button_pane_cp2

0xf4ff,	// (0x0000f5c1) form2_midp_image_pane_g1

0x0f9e,	// (0x00001060) list_double_large_graphic_pane_g5_ParamLimits

0x0f9e,	// (0x00001060) list_double_large_graphic_pane_g5

0xc426,	// (0x0000c4e8) midp_form_pane_ParamLimits

0x0445,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xcb1c,	// (0x0000cbde) popup_preview_window_ParamLimits

0xcb1c,	// (0x0000cbde) popup_preview_window

0x3050,	// (0x00003112) popup_touch_info_window_ParamLimits

0x3050,	// (0x00003112) popup_touch_info_window

0x306e,	// (0x00003130) popup_touch_menu_window_ParamLimits

0x306e,	// (0x00003130) popup_touch_menu_window

0xf4f5,	// (0x0000f5b7) bg_popup_sub_pane_cp6

0x651d,	// (0x000065df) list_touch_menu_pane

0x6525,	// (0x000065e7) list_single_touch_menu_pane_ParamLimits

0x6525,	// (0x000065e7) list_single_touch_menu_pane

0x653b,	// (0x000065fd) list_single_touch_menu_pane_t1

0x0445,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0445,	// (0x00000507) bg_popup_sub_pane_cp7

0x6549,	// (0x0000660b) heading_sub_pane

0x6551,	// (0x00006613) list_touch_info_pane_ParamLimits

0x6551,	// (0x00006613) list_touch_info_pane

0x6560,	// (0x00006622) list_single_touch_info_pane_ParamLimits

0x6560,	// (0x00006622) list_single_touch_info_pane

0x6572,	// (0x00006634) list_single_touch_info_pane_t1

0x6580,	// (0x00006642) list_single_touch_info_pane_t2

0x0001,

0xfac8,	// (0x0000fb8a) list_single_touch_info_pane_t

0x2563,	// (0x00002625) bg_popup_heading_pane_cp

0x658e,	// (0x00006650) heading_sub_pane_t1

0x37d7,	// (0x00003899) bg_popup_preview_window_pane_cp_ParamLimits

0x37d7,	// (0x00003899) bg_popup_preview_window_pane_cp

0x6549,	// (0x0000660b) heading_preview_pane

0x6551,	// (0x00006613) list_preview_pane_ParamLimits

0x6551,	// (0x00006613) list_preview_pane

0x659c,	// (0x0000665e) popup_preview_window_g1

0x6560,	// (0x00006622) list_single_preview_pane_ParamLimits

0x6560,	// (0x00006622) list_single_preview_pane

0x65a4,	// (0x00006666) list_single_preview_pane_g1

0x65ac,	// (0x0000666e) list_single_preview_pane_t1

0x6572,	// (0x00006634) list_single_preview_pane_t2

0x0001,

0xfacd,	// (0x0000fb8f) list_single_preview_pane_t

0x65ba,	// (0x0000667c) bg_popup_heading_pane_cp2_ParamLimits

0x65ba,	// (0x0000667c) bg_popup_heading_pane_cp2

0x65d0,	// (0x00006692) heading_preview_pane_g1

0x65d8,	// (0x0000669a) heading_preview_pane_t1_ParamLimits

0x65d8,	// (0x0000669a) heading_preview_pane_t1

0x05dc,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0cf0,	// (0x00000db2) scroll_pane_ParamLimits

0x1abb,	// (0x00001b7d) scroll_sc2_left_pane

0x1ac4,	// (0x00001b86) scroll_sc2_right_pane

0x1ae3,	// (0x00001ba5) scroll_bg_pane_g1_ParamLimits

0x1af8,	// (0x00001bba) scroll_bg_pane_g2_ParamLimits

0x1b10,	// (0x00001bd2) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0000f77b) scroll_bg_pane_g_ParamLimits

0x1ae3,	// (0x00001ba5) scroll_handle_pane_g1_ParamLimits

0x1b32,	// (0x00001bf4) scroll_handle_pane_g2_ParamLimits

0x1b10,	// (0x00001bd2) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0000f782) scroll_handle_pane_g_ParamLimits

0x2b14,	// (0x00002bd6) popup_choice_list_window_ParamLimits

0x2b14,	// (0x00002bd6) popup_choice_list_window

0x352d,	// (0x000035ef) choice_list_pane

0x35f5,	// (0x000036b7) cell_toolbar_pane_t1

0x361d,	// (0x000036df) toolbar_button_pane_ParamLimits

0x4a5d,	// (0x00004b1f) ai_gene_pane_1_t2_ParamLimits

0x4a5d,	// (0x00004b1f) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x0000f99e) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x0000f99e) ai_gene_pane_1_t

0x65f5,	// (0x000066b7) scroll_sc2_left_pane_g1

0x65f5,	// (0x000066b7) scroll_sc2_right_pane_g1

0x2aae,	// (0x00002b70) bg_popup_sub_pane_cp10

0x65ff,	// (0x000066c1) list_choice_list_pane

0x6618,	// (0x000066da) list_single_choice_list_pane_ParamLimits

0x6618,	// (0x000066da) list_single_choice_list_pane

0x662b,	// (0x000066ed) list_single_choice_list_pane_g1

0x15fb,	// (0x000016bd) list_single_choice_list_pane_t1_ParamLimits

0x15fb,	// (0x000016bd) list_single_choice_list_pane_t1

0x6633,	// (0x000066f5) choice_list_pane_g1

0x663b,	// (0x000066fd) choice_list_pane_t1

0xf4f5,	// (0x0000f5b7) input_focus_pane_cp11

0x1821,	// (0x000018e3) title_pane_stacon_g2_ParamLimits

0x1821,	// (0x000018e3) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0000f761) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0000f761) title_pane_stacon_g

0x2563,	// (0x00002625) cursor_press_pane

0xc7c3,	// (0x0000c885) popup_fep_hwr_window_ParamLimits

0xc7c3,	// (0x0000c885) popup_fep_hwr_window

0x2c3a,	// (0x00002cfc) popup_fep_vkb_window_ParamLimits

0x2c3a,	// (0x00002cfc) popup_fep_vkb_window

0x6649,	// (0x0000670b) cursor_press_pane_g1

0x0002,

0xfaf6,	// (0x0000fbb8) fep_vkb_side_pane_g_ParamLimits

0x668a,	// (0x0000674c) fep_hwr_candidate_pane_ParamLimits

0x668a,	// (0x0000674c) fep_hwr_candidate_pane

0x66b4,	// (0x00006776) fep_hwr_side_pane_ParamLimits

0x66b4,	// (0x00006776) fep_hwr_side_pane

0x66d4,	// (0x00006796) fep_hwr_top_pane_ParamLimits

0x66d4,	// (0x00006796) fep_hwr_top_pane

0x66ec,	// (0x000067ae) fep_hwr_write_pane_ParamLimits

0x66ec,	// (0x000067ae) fep_hwr_write_pane

0xfaf6,	// (0x0000fbb8) fep_vkb_side_pane_g

0x6726,	// (0x000067e8) fep_hwr_top_pane_g1

0x6738,	// (0x000067fa) fep_hwr_top_pane_g2

0x674a,	// (0x0000680c) fep_hwr_top_pane_g3

0x0002,

0xfad2,	// (0x0000fb94) fep_hwr_top_pane_g

0x675f,	// (0x00006821) fep_hwr_top_text_pane

0x1cb2,	// (0x00001d74) fep_hwr_top_text_pane_g1

0x6837,	// (0x000068f9) fep_hwr_top_text_pane_t1

0x6887,	// (0x00006949) fep_hwr_candidate_pane_g1

0x6b00,	// (0x00006bc2) fep_vkb_keypad_pane_g3_ParamLimits

0x6b00,	// (0x00006bc2) fep_vkb_keypad_pane_g3

0x6b28,	// (0x00006bea) fep_vkb_keypad_pane_g4_ParamLimits

0x6b28,	// (0x00006bea) fep_vkb_keypad_pane_g4

0x6b97,	// (0x00006c59) fep_vkb_bottom_pane_g2_ParamLimits

0x6b97,	// (0x00006c59) fep_vkb_bottom_pane_g2

0x0001,

0xfafd,	// (0x0000fbbf) fep_vkb_bottom_pane_g_ParamLimits

0xfafd,	// (0x0000fbbf) fep_vkb_bottom_pane_g

0x65f5,	// (0x000066b7) cell_vkb_side_pane_g2

0x0001,

0xfb07,	// (0x0000fbc9) cell_vkb_side_pane_g

0x6c22,	// (0x00006ce4) cell_vkb_side_pane_t1

0x6c30,	// (0x00006cf2) cell_vkb_side_pane_t1_copy1

0x65f5,	// (0x000066b7) bg_fep_vkb_candidate_pane_g2

0x6d5c,	// (0x00006e1e) cell_vkb_candidate_pane_ParamLimits

0x68bb,	// (0x0000697d) aid_size_cell_vkb_ParamLimits

0x68bb,	// (0x0000697d) aid_size_cell_vkb

0x6d5c,	// (0x00006e1e) cell_vkb_candidate_pane

0x6d90,	// (0x00006e52) bg_popup_fep_shadow_pane_g1

0xda17,	// (0x0000dad9) fep_vkb_bottom_pane_ParamLimits

0xda17,	// (0x0000dad9) fep_vkb_bottom_pane

0x697f,	// (0x00006a41) fep_vkb_candidate_pane_ParamLimits

0x697f,	// (0x00006a41) fep_vkb_candidate_pane

0xda3c,	// (0x0000dafe) fep_vkb_keypad_pane_ParamLimits

0xda3c,	// (0x0000dafe) fep_vkb_keypad_pane

0xda78,	// (0x0000db3a) fep_vkb_side_pane_ParamLimits

0xda78,	// (0x0000db3a) fep_vkb_side_pane

0xdab4,	// (0x0000db76) fep_vkb_top_pane_ParamLimits

0xdab4,	// (0x0000db76) fep_vkb_top_pane

0x6a59,	// (0x00006b1b) fep_vkb_top_pane_g1_ParamLimits

0x6a59,	// (0x00006b1b) fep_vkb_top_pane_g1

0x6a68,	// (0x00006b2a) fep_vkb_top_pane_g2_ParamLimits

0x6a68,	// (0x00006b2a) fep_vkb_top_pane_g2

0x6a77,	// (0x00006b39) fep_vkb_top_pane_g3_ParamLimits

0x6a77,	// (0x00006b39) fep_vkb_top_pane_g3

0x0003,

0xfaed,	// (0x0000fbaf) fep_vkb_top_pane_g_ParamLimits

0xfaed,	// (0x0000fbaf) fep_vkb_top_pane_g

0x6a95,	// (0x00006b57) fep_vkb_top_text_pane_ParamLimits

0x6a95,	// (0x00006b57) fep_vkb_top_text_pane

0xdaf0,	// (0x0000dbb2) fep_vkb_side_pane_g1_ParamLimits

0xdaf0,	// (0x0000dbb2) fep_vkb_side_pane_g1

0x6aef,	// (0x00006bb1) grid_vkb_side_pane_ParamLimits

0x6aef,	// (0x00006bb1) grid_vkb_side_pane

0x6d98,	// (0x00006e5a) bg_popup_fep_shadow_pane_g2

0x6da1,	// (0x00006e63) bg_popup_fep_shadow_pane_g3

0x6da9,	// (0x00006e6b) bg_popup_fep_shadow_pane_g4

0x6db2,	// (0x00006e74) bg_popup_fep_shadow_pane_g5

0x6dbc,	// (0x00006e7e) bg_popup_fep_shadow_pane_g6

0x6dc4,	// (0x00006e86) bg_popup_fep_shadow_pane_g7

0x1423,	// (0x000014e5) bg_popup_fep_shadow_pane_g8

0x6b46,	// (0x00006c08) grid_vkb_keypad_number_pane_ParamLimits

0x6b46,	// (0x00006c08) grid_vkb_keypad_number_pane

0x6b56,	// (0x00006c18) grid_vkb_keypad_pane_ParamLimits

0x6b56,	// (0x00006c18) grid_vkb_keypad_pane

0x6b7c,	// (0x00006c3e) fep_vkb_bottom_pane_g1_ParamLimits

0x6b7c,	// (0x00006c3e) fep_vkb_bottom_pane_g1

0x6ba5,	// (0x00006c67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6ba5,	// (0x00006c67) grid_vkb_keypad_bottom_left_pane

0x6bba,	// (0x00006c7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6bba,	// (0x00006c7c) grid_vkb_keypad_bottom_right_pane

0x6bcf,	// (0x00006c91) fep_vkb_top_text_pane_g1

0xdb37,	// (0x0000dbf9) fep_vkb_top_text_pane_t1

0xdb49,	// (0x0000dc0b) cell_vkb_side_pane_ParamLimits

0xdb49,	// (0x0000dc0b) cell_vkb_side_pane

0x65f5,	// (0x000066b7) cell_vkb_side_pane_g1

0x6c3e,	// (0x00006d00) cell_vkb_keypad_pane_ParamLimits

0x6c3e,	// (0x00006d00) cell_vkb_keypad_pane

0x6cb3,	// (0x00006d75) cell_vkb_keypad_pane_g1

0x0008,

0xfb1a,	// (0x0000fbdc) bg_popup_fep_shadow_pane_g

0x65f5,	// (0x000066b7) cell_hwr_side_pane_g1

0x65f5,	// (0x000066b7) cell_hwr_side_pane_g2

0x6cbd,	// (0x00006d7f) cell_vkb_keypad_pane_t1

0xdb5f,	// (0x0000dc21) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb5f,	// (0x0000dc21) cell_vkb_keypad_bottom_left_pane

0xdb74,	// (0x0000dc36) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb74,	// (0x0000dc36) cell_vkb_keypad_bottom_right_pane

0x65f5,	// (0x000066b7) cell_vkb_keypad_bottom_left_pane_g1

0x65f5,	// (0x000066b7) cell_vkb_keypad_bottom_right_pane_g1

0x6d21,	// (0x00006de3) cell_vkb_keypad_number_pane_ParamLimits

0x6d21,	// (0x00006de3) cell_vkb_keypad_number_pane

0x6d40,	// (0x00006e02) cell_vkb_keypad_number_pane_g1

0x6d4a,	// (0x00006e0c) cell_vkb_keypad_number_pane_g2

0x6d53,	// (0x00006e15) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb0c,	// (0x0000fbce) cell_vkb_keypad_number_pane_g

0x6cbd,	// (0x00006d7f) cell_vkb_keypad_number_pane_t1

0x6d77,	// (0x00006e39) fep_vkb_candidate_pane_g1

0x0001,

0xfb07,	// (0x0000fbc9) cell_hwr_side_pane_g

0x6dd6,	// (0x00006e98) cell_hwr_side_pane_t1

0x6de4,	// (0x00006ea6) cell_hwr_side_pane_t1_copy1

0x6a87,	// (0x00006b49) cell_hwr_candidate_pane_g1

0x6e34,	// (0x00006ef6) cell_hwr_candidate_pane_t1

0x65f5,	// (0x000066b7) cell_vkb_candidate_pane_g2

0x6e88,	// (0x00006f4a) cell_vkb_candidate_pane_t1

0x6651,	// (0x00006713) bg_popup_fep_shadow_pane_ParamLimits

0x6651,	// (0x00006713) bg_popup_fep_shadow_pane

0x6706,	// (0x000067c8) bg_fep_hwr_top_pane_g4

0x6774,	// (0x00006836) bg_hwr_side_pane_g1_ParamLimits

0x6774,	// (0x00006836) bg_hwr_side_pane_g1

0xd9d0,	// (0x0000da92) cell_hwr_side_pane_ParamLimits

0xd9d0,	// (0x0000da92) cell_hwr_side_pane

0x67e2,	// (0x000068a4) fep_hwr_write_pane_g1_ParamLimits

0x67e2,	// (0x000068a4) fep_hwr_write_pane_g1

0x67ef,	// (0x000068b1) fep_hwr_write_pane_g2_ParamLimits

0x67ef,	// (0x000068b1) fep_hwr_write_pane_g2

0x67fc,	// (0x000068be) fep_hwr_write_pane_g3_ParamLimits

0x67fc,	// (0x000068be) fep_hwr_write_pane_g3

0xd9f0,	// (0x0000dab2) fep_hwr_write_pane_g4_ParamLimits

0xd9f0,	// (0x0000dab2) fep_hwr_write_pane_g4

0x0005,

0xfad9,	// (0x0000fb9b) fep_hwr_write_pane_g_ParamLimits

0xfad9,	// (0x0000fb9b) fep_hwr_write_pane_g

0x6706,	// (0x000067c8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6706,	// (0x000067c8) bg_fep_hwr_candidate_pane_g2

0x6845,	// (0x00006907) cell_hwr_candidate_pane_ParamLimits

0x6845,	// (0x00006907) cell_hwr_candidate_pane

0x6887,	// (0x00006949) fep_hwr_candidate_pane_g1_ParamLimits

0x68e9,	// (0x000069ab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x68e9,	// (0x000069ab) bg_popup_fep_shadow_pane_cp2

0x6a87,	// (0x00006b49) fep_vkb_top_pane_g4_ParamLimits

0x6a87,	// (0x00006b49) fep_vkb_top_pane_g4

0x6acd,	// (0x00006b8f) fep_vkb_side_pane_g2_ParamLimits

0x6acd,	// (0x00006b8f) fep_vkb_side_pane_g2

0xc001,	// (0x0000c0c3) list_setting_pane_t4_ParamLimits

0xc001,	// (0x0000c0c3) list_setting_pane_t4

0xc07b,	// (0x0000c13d) list_setting_number_pane_t5_ParamLimits

0xc07b,	// (0x0000c13d) list_setting_number_pane_t5

0x1d08,	// (0x00001dca) list_double_heading_pane_cp2_ParamLimits

0x1d08,	// (0x00001dca) list_double_heading_pane_cp2

0x12fa,	// (0x000013bc) list_double_heading_pane_g1_cp2_ParamLimits

0x12fa,	// (0x000013bc) list_double_heading_pane_g1_cp2

0x1306,	// (0x000013c8) list_double_heading_pane_g2_cp2_ParamLimits

0x1306,	// (0x000013c8) list_double_heading_pane_g2_cp2

0x6e96,	// (0x00006f58) list_double_heading_pane_t1_cp2_ParamLimits

0x6e96,	// (0x00006f58) list_double_heading_pane_t1_cp2

0x6eac,	// (0x00006f6e) list_double_heading_pane_t2_cp2_ParamLimits

0x6eac,	// (0x00006f6e) list_double_heading_pane_t2_cp2

0xf4ed,	// (0x0000f5af) aid_value_unit2

0x0255,	// (0x00000317) popup_preview_fixed_window

0x0779,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6ebe,	// (0x00006f80) list_preview_fixed_pane

0x6f04,	// (0x00006fc6) list_empty_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_empty_pane_fp

0x6f04,	// (0x00006fc6) list_single_cale_day_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_cale_day_pane_fp

0x6f04,	// (0x00006fc6) list_single_graphic_heading_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_graphic_heading_pane_fp

0x6f04,	// (0x00006fc6) list_single_graphic_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_graphic_pane_fp

0x6f04,	// (0x00006fc6) list_single_heading_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_heading_pane_fp

0x6f04,	// (0x00006fc6) list_single_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_pane_fp

0x6f19,	// (0x00006fdb) list_single_pane_fp_g1_ParamLimits

0x6f19,	// (0x00006fdb) list_single_pane_fp_g1

0x12fa,	// (0x000013bc) list_single_pane_fp_g2_ParamLimits

0x12fa,	// (0x000013bc) list_single_pane_fp_g2

0x1306,	// (0x000013c8) list_single_pane_fp_g3_ParamLimits

0x1306,	// (0x000013c8) list_single_pane_fp_g3

0x6f25,	// (0x00006fe7) list_single_pane_fp_g4_ParamLimits

0x6f25,	// (0x00006fe7) list_single_pane_fp_g4

0x0003,

0xfb3b,	// (0x0000fbfd) list_single_pane_fp_g_ParamLimits

0xfb3b,	// (0x0000fbfd) list_single_pane_fp_g

0x6f31,	// (0x00006ff3) list_single_pane_fp_t1_ParamLimits

0x6f31,	// (0x00006ff3) list_single_pane_fp_t1

0x6f48,	// (0x0000700a) list_single_graphic_pane_fp_g1_ParamLimits

0x6f48,	// (0x0000700a) list_single_graphic_pane_fp_g1

0x6f19,	// (0x00006fdb) list_single_graphic_pane_fp_g2_ParamLimits

0x6f19,	// (0x00006fdb) list_single_graphic_pane_fp_g2

0x12fa,	// (0x000013bc) list_single_graphic_pane_fp_g3_ParamLimits

0x12fa,	// (0x000013bc) list_single_graphic_pane_fp_g3

0x1306,	// (0x000013c8) list_single_graphic_pane_fp_g4_ParamLimits

0x1306,	// (0x000013c8) list_single_graphic_pane_fp_g4

0x6f25,	// (0x00006fe7) list_single_graphic_pane_fp_g5_ParamLimits

0x6f25,	// (0x00006fe7) list_single_graphic_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc06) list_single_graphic_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc06) list_single_graphic_pane_fp_g

0x6f54,	// (0x00007016) list_single_graphic_pane_fp_t1_ParamLimits

0x6f54,	// (0x00007016) list_single_graphic_pane_fp_t1

0x6f48,	// (0x0000700a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6f48,	// (0x0000700a) list_single_graphic_heading_pane_fp_g1

0x6f19,	// (0x00006fdb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6f19,	// (0x00006fdb) list_single_graphic_heading_pane_fp_g2

0x12fa,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x12fa,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3

0x1306,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1306,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4

0x6f25,	// (0x00006fe7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6f25,	// (0x00006fe7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc06) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc06) list_single_graphic_heading_pane_fp_g

0x6f6a,	// (0x0000702c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f6a,	// (0x0000702c) list_single_graphic_heading_pane_fp_t1

0x6f80,	// (0x00007042) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f80,	// (0x00007042) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb4f,	// (0x0000fc11) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb4f,	// (0x0000fc11) list_single_graphic_heading_pane_fp_t

0x6f92,	// (0x00007054) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f92,	// (0x00007054) list_single_cale_day_pane_fp_g1

0x6fca,	// (0x0000708c) list_single_cale_day_pane_fp_g2_ParamLimits

0x6fca,	// (0x0000708c) list_single_cale_day_pane_fp_g2

0x6fd6,	// (0x00007098) list_single_cale_day_pane_fp_g3_ParamLimits

0x6fd6,	// (0x00007098) list_single_cale_day_pane_fp_g3

0x6ffe,	// (0x000070c0) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ffe,	// (0x000070c0) list_single_cale_day_pane_fp_g4

0x7022,	// (0x000070e4) list_single_cale_day_pane_fp_g5_ParamLimits

0x7022,	// (0x000070e4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb54,	// (0x0000fc16) list_single_cale_day_pane_fp_g_ParamLimits

0xfb54,	// (0x0000fc16) list_single_cale_day_pane_fp_g

0x7046,	// (0x00007108) list_single_cale_day_pane_fp_t1_ParamLimits

0x7046,	// (0x00007108) list_single_cale_day_pane_fp_t1

0x706c,	// (0x0000712e) list_single_cale_day_pane_fp_t2_ParamLimits

0x706c,	// (0x0000712e) list_single_cale_day_pane_fp_t2

0x7085,	// (0x00007147) list_single_cale_day_pane_fp_t3_ParamLimits

0x7085,	// (0x00007147) list_single_cale_day_pane_fp_t3

0x0002,

0xfb5f,	// (0x0000fc21) list_single_cale_day_pane_fp_t_ParamLimits

0xfb5f,	// (0x0000fc21) list_single_cale_day_pane_fp_t

0x6f19,	// (0x00006fdb) list_empty_pane_fp_g1_ParamLimits

0x6f19,	// (0x00006fdb) list_empty_pane_fp_g1

0x709e,	// (0x00007160) list_empty_pane_fp_t1

0x70ac,	// (0x0000716e) list_empty_pane_fp_t2

0x0001,

0xfb66,	// (0x0000fc28) list_empty_pane_fp_t

0x6f19,	// (0x00006fdb) list_single_heading_pane_fp_g1_ParamLimits

0x6f19,	// (0x00006fdb) list_single_heading_pane_fp_g1

0x12fa,	// (0x000013bc) list_single_heading_pane_fp_g2_ParamLimits

0x12fa,	// (0x000013bc) list_single_heading_pane_fp_g2

0x1306,	// (0x000013c8) list_single_heading_pane_fp_g3_ParamLimits

0x1306,	// (0x000013c8) list_single_heading_pane_fp_g3

0x0002,

0xfb6b,	// (0x0000fc2d) list_single_heading_pane_fp_g_ParamLimits

0xfb6b,	// (0x0000fc2d) list_single_heading_pane_fp_g

0x70ba,	// (0x0000717c) list_single_heading_pane_fp_t1_ParamLimits

0x70ba,	// (0x0000717c) list_single_heading_pane_fp_t1

0x70cc,	// (0x0000718e) list_single_heading_pane_fp_t2_ParamLimits

0x70cc,	// (0x0000718e) list_single_heading_pane_fp_t2

0x0001,

0xfb72,	// (0x0000fc34) list_single_heading_pane_fp_t_ParamLimits

0xfb72,	// (0x0000fc34) list_single_heading_pane_fp_t

0x1669,	// (0x0000172b) aid_size_cell_fast

0x06e9,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x16a6,	// (0x00001768) cell_app_pane_cp2_ParamLimits

0x16a6,	// (0x00001768) cell_app_pane_cp2

0x6673,	// (0x00006735) fep_hwr_candidate_drop_down_list_pane

0x68a1,	// (0x00006963) fep_hwr_candidate_pane_g3_ParamLimits

0x68a1,	// (0x00006963) fep_hwr_candidate_pane_g3

0x68ae,	// (0x00006970) fep_hwr_candidate_pane_g4_ParamLimits

0x68ae,	// (0x00006970) fep_hwr_candidate_pane_g4

0x0002,

0xfae6,	// (0x0000fba8) fep_hwr_candidate_pane_g_ParamLimits

0xfae6,	// (0x0000fba8) fep_hwr_candidate_pane_g

0x696e,	// (0x00006a30) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x696e,	// (0x00006a30) fep_vkb_candidate_drop_down_list_pane

0x6d7f,	// (0x00006e41) fep_vkb_candidate_pane_g3

0x6d87,	// (0x00006e49) fep_vkb_candidate_pane_g4

0x0002,

0xfb13,	// (0x0000fbd5) fep_vkb_candidate_pane_g

0x6a87,	// (0x00006b49) cell_hwr_candidate_pane_g1_ParamLimits

0x6df2,	// (0x00006eb4) cell_hwr_candidate_pane_g3_ParamLimits

0x6df2,	// (0x00006eb4) cell_hwr_candidate_pane_g3

0x6e13,	// (0x00006ed5) cell_hwr_candidate_pane_g4_ParamLimits

0x6e13,	// (0x00006ed5) cell_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0000fbef) cell_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0000fbef) cell_hwr_candidate_pane_g

0x6e52,	// (0x00006f14) cell_vkb_candidate_pane_g3_ParamLimits

0x6e52,	// (0x00006f14) cell_vkb_candidate_pane_g3

0x6e6d,	// (0x00006f2f) cell_vkb_candidate_pane_g4_ParamLimits

0x6e6d,	// (0x00006f2f) cell_vkb_candidate_pane_g4

0x70e2,	// (0x000071a4) cell_app_pane_cp2_g1_ParamLimits

0x70e2,	// (0x000071a4) cell_app_pane_cp2_g1

0x7100,	// (0x000071c2) cell_app_pane_cp2_g2_ParamLimits

0x7100,	// (0x000071c2) cell_app_pane_cp2_g2

0x0001,

0xfb77,	// (0x0000fc39) cell_app_pane_cp2_g_ParamLimits

0xfb77,	// (0x0000fc39) cell_app_pane_cp2_g

0x710c,	// (0x000071ce) cell_app_pane_cp2_t1_ParamLimits

0x710c,	// (0x000071ce) cell_app_pane_cp2_t1

0x12d4,	// (0x00001396) grid_highlight_pane_cp1_ParamLimits

0x12d4,	// (0x00001396) grid_highlight_pane_cp1

0x711e,	// (0x000071e0) cell_hwr_candidate_pane_cp1_ParamLimits

0x711e,	// (0x000071e0) cell_hwr_candidate_pane_cp1

0x6a87,	// (0x00006b49) fep_hwr_candidate_drop_down_list_pane_g1

0x713d,	// (0x000071ff) fep_hwr_candidate_drop_down_list_pane_g2

0x714a,	// (0x0000720c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fc3e) fep_hwr_candidate_drop_down_list_pane_g

0x7157,	// (0x00007219) fep_hwr_candidate_drop_down_list_scroll_pane

0x7160,	// (0x00007222) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7160,	// (0x00007222) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x716d,	// (0x0000722f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x716d,	// (0x0000722f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x717a,	// (0x0000723c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x717a,	// (0x0000723c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e52,	// (0x00006f14) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e52,	// (0x00006f14) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e6d,	// (0x00006f2f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e6d,	// (0x00006f2f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7187,	// (0x00007249) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7187,	// (0x00007249) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x71a2,	// (0x00007264) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71a2,	// (0x00007264) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x71bd,	// (0x0000727f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71bd,	// (0x0000727f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb83,	// (0x0000fc45) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb83,	// (0x0000fc45) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x71d8,	// (0x0000729a) cell_vkb_candidate_pane_cp1_ParamLimits

0x71d8,	// (0x0000729a) cell_vkb_candidate_pane_cp1

0x6a87,	// (0x00006b49) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a87,	// (0x00006b49) fep_vkb_candidate_drop_down_list_pane_g1

0x713d,	// (0x000071ff) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x713d,	// (0x000071ff) fep_vkb_candidate_drop_down_list_pane_g2

0x714a,	// (0x0000720c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x714a,	// (0x0000720c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fc3e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb7c,	// (0x0000fc3e) fep_vkb_candidate_drop_down_list_pane_g

0x71f8,	// (0x000072ba) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71f8,	// (0x000072ba) fep_vkb_candidate_drop_down_list_scroll_pane

0x7205,	// (0x000072c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7205,	// (0x000072c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7212,	// (0x000072d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7212,	// (0x000072d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x721e,	// (0x000072e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x721e,	// (0x000072e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6df2,	// (0x00006eb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6df2,	// (0x00006eb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6e13,	// (0x00006ed5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e13,	// (0x00006ed5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x722a,	// (0x000072ec) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x722a,	// (0x000072ec) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x724b,	// (0x0000730d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x724b,	// (0x0000730d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x726c,	// (0x0000732e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x726c,	// (0x0000732e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0000fc56) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0000fc56) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb9f4,	// (0x0000bab6) title_pane_g1_ParamLimits

0xba07,	// (0x0000bac9) title_pane_g2_ParamLimits

0xf529,	// (0x0000f5eb) title_pane_g_ParamLimits

0x1ca2,	// (0x00001d64) aid_call2_pane

0x1caa,	// (0x00001d6c) aid_call_pane

0x1cb2,	// (0x00001d74) popup_clock_analogue_window_g1

0x1cb2,	// (0x00001d74) popup_clock_analogue_window_g2

0x1cba,	// (0x00001d7c) popup_clock_analogue_window_g3

0x1cc3,	// (0x00001d85) popup_clock_analogue_window_g4

0xf4ff,	// (0x0000f5c1) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0000f790) popup_clock_analogue_window_g

0x1ccb,	// (0x00001d8d) popup_clock_analogue_window_t1

0x1d56,	// (0x00001e18) clock_digital_number_pane_ParamLimits

0x1d56,	// (0x00001e18) clock_digital_number_pane

0x1d62,	// (0x00001e24) clock_digital_number_pane_cp02_ParamLimits

0x1d62,	// (0x00001e24) clock_digital_number_pane_cp02

0x1d6e,	// (0x00001e30) clock_digital_number_pane_cp03_ParamLimits

0x1d6e,	// (0x00001e30) clock_digital_number_pane_cp03

0x1d7a,	// (0x00001e3c) clock_digital_number_pane_cp04_ParamLimits

0x1d7a,	// (0x00001e3c) clock_digital_number_pane_cp04

0x1d86,	// (0x00001e48) clock_digital_separator_pane_ParamLimits

0x1d86,	// (0x00001e48) clock_digital_separator_pane

0x1d92,	// (0x00001e54) popup_clock_digital_window_t1_ParamLimits

0x1d92,	// (0x00001e54) popup_clock_digital_window_t1

0xf4ff,	// (0x0000f5c1) clock_digital_number_pane_g1

0xf4ff,	// (0x0000f5c1) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0000f79b) clock_digital_number_pane_g

0xf4ff,	// (0x0000f5c1) clock_digital_separator_pane_g1

0xf4ff,	// (0x0000f5c1) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0000f79b) clock_digital_separator_pane_g

0xcdcc,	// (0x0000ce8e) aid_fill_nsta_ParamLimits

0xcf02,	// (0x0000cfc4) indicator_nsta_pane_ParamLimits

0x3372,	// (0x00003434) popup_clock_analogue_window

0x3372,	// (0x00003434) popup_clock_digital_window

0xd7ea,	// (0x0000d8ac) grid_indicator_nsta_pane_ParamLimits

0x5f59,	// (0x0000601b) clock_nsta_pane_t2

0x0001,

0xfa66,	// (0x0000fb28) clock_nsta_pane_t

0x1a60,	// (0x00001b22) aid_size_max_handle

0x1a6a,	// (0x00001b2c) aid_size_min_handle

0x2563,	// (0x00002625) editor_scroll_pane

0x7287,	// (0x00007349) ex_editor_pane

0x15d7,	// (0x00001699) scroll_pane_cp13

0x0d1c,	// (0x00000dde) scroll_pane_cp14

0x1d00,	// (0x00001dc2) scroll_pane_cp36

0xc325,	// (0x0000c3e7) list_single_graphic_hl_pane_cp2_ParamLimits

0xc325,	// (0x0000c3e7) list_single_graphic_hl_pane_cp2

0xd62e,	// (0x0000d6f0) list_single_graphic_hl_pane_ParamLimits

0xd62e,	// (0x0000d6f0) list_single_graphic_hl_pane

0x728f,	// (0x00007351) aid_size_min_hl_cp1

0x7298,	// (0x0000735a) list_highlight_pane_cp34_ParamLimits

0x7298,	// (0x0000735a) list_highlight_pane_cp34

0x72a9,	// (0x0000736b) list_single_graphic_hl_pane_g1_ParamLimits

0x72a9,	// (0x0000736b) list_single_graphic_hl_pane_g1

0xdb8f,	// (0x0000dc51) list_single_graphic_hl_pane_g2_ParamLimits

0xdb8f,	// (0x0000dc51) list_single_graphic_hl_pane_g2

0xdb8f,	// (0x0000dc51) list_single_graphic_hl_pane_g3_ParamLimits

0xdb8f,	// (0x0000dc51) list_single_graphic_hl_pane_g3

0x2444,	// (0x00002506) list_single_graphic_hl_pane_g4_ParamLimits

0x2444,	// (0x00002506) list_single_graphic_hl_pane_g4

0xdb9b,	// (0x0000dc5d) list_single_graphic_hl_pane_g5_ParamLimits

0xdb9b,	// (0x0000dc5d) list_single_graphic_hl_pane_g5

0x0004,

0xfba5,	// (0x0000fc67) list_single_graphic_hl_pane_g_ParamLimits

0xfba5,	// (0x0000fc67) list_single_graphic_hl_pane_g

0xdbaf,	// (0x0000dc71) list_single_graphic_hl_pane_t1_ParamLimits

0xdbaf,	// (0x0000dc71) list_single_graphic_hl_pane_t1

0x72d6,	// (0x00007398) aid_size_min_hl_cp2

0x72df,	// (0x000073a1) list_highlight_pane_cp34_cp2_ParamLimits

0x72df,	// (0x000073a1) list_highlight_pane_cp34_cp2

0x72a9,	// (0x0000736b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x72a9,	// (0x0000736b) list_single_graphic_hl_pane_g1_cp2

0x72ec,	// (0x000073ae) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x72ec,	// (0x000073ae) list_single_graphic_hl_pane_g2_cp2

0x72f8,	// (0x000073ba) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x72f8,	// (0x000073ba) list_single_graphic_hl_pane_g3_cp2

0x7306,	// (0x000073c8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7306,	// (0x000073c8) list_single_graphic_hl_pane_g4_cp2

0x7312,	// (0x000073d4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7312,	// (0x000073d4) list_single_graphic_hl_pane_g5_cp2

0xc5ce,	// (0x0000c690) control_pane_g4_ParamLimits

0xc5ce,	// (0x0000c690) control_pane_g4

0x2aae,	// (0x00002b70) bg_popup_sub_pane_cp10_ParamLimits

0x65ff,	// (0x000066c1) list_choice_list_pane_ParamLimits

0x660e,	// (0x000066d0) scroll_pane_cp23

0x0779,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6ebe,	// (0x00006f80) list_preview_fixed_pane_ParamLimits

0x6ed4,	// (0x00006f96) list_preview_fixed_pane_cp_ParamLimits

0x6ed4,	// (0x00006f96) list_preview_fixed_pane_cp

0x6ee0,	// (0x00006fa2) popup_preview_fixed_window_g1_ParamLimits

0x6ee0,	// (0x00006fa2) popup_preview_fixed_window_g1

0x6eec,	// (0x00006fae) popup_preview_fixed_window_g2_ParamLimits

0x6eec,	// (0x00006fae) popup_preview_fixed_window_g2

0x0002,

0xfb34,	// (0x0000fbf6) popup_preview_fixed_window_g_ParamLimits

0xfb34,	// (0x0000fbf6) popup_preview_fixed_window_g

0x1905,	// (0x000019c7) aid_navi_side_left_pane_ParamLimits

0x191a,	// (0x000019dc) aid_navi_side_right_pane_ParamLimits

0x1932,	// (0x000019f4) navi_icon_pane_stacon_ParamLimits

0x1946,	// (0x00001a08) navi_navi_pane_stacon_ParamLimits

0x1932,	// (0x000019f4) navi_text_pane_stacon_ParamLimits

0xf4f5,	// (0x0000f5b7) main_text_info_pane

0x733c,	// (0x000073fe) listscroll_text_info_pane

0x7344,	// (0x00007406) list_text_info_pane_ParamLimits

0x7344,	// (0x00007406) list_text_info_pane

0x7353,	// (0x00007415) scroll_pane_cp24_ParamLimits

0x7353,	// (0x00007415) scroll_pane_cp24

0xdbc5,	// (0x0000dc87) list_text_info_pane_t1_ParamLimits

0xdbc5,	// (0x0000dc87) list_text_info_pane_t1

0xc736,	// (0x0000c7f8) popup_fast_swap2_window_ParamLimits

0xc736,	// (0x0000c7f8) popup_fast_swap2_window

0x73a2,	// (0x00007464) aid_size_cell_fast2

0xf4f5,	// (0x0000f5b7) bg_popup_window_pane_cp17

0x3c88,	// (0x00003d4a) heading_pane_cp2

0x3c90,	// (0x00003d52) listscroll_fast2_pane

0x73ac,	// (0x0000746e) grid_fast2_pane

0x73b6,	// (0x00007478) listscroll_fast2_pane_g1

0x73be,	// (0x00007480) listscroll_fast2_pane_g2

0x0001,

0xfbb0,	// (0x0000fc72) listscroll_fast2_pane_g

0x15d7,	// (0x00001699) scroll_pane_cp26

0x73c8,	// (0x0000748a) cell_fast2_pane_ParamLimits

0x73c8,	// (0x0000748a) cell_fast2_pane

0x73dd,	// (0x0000749f) cell_fast2_pane_g1

0x73e6,	// (0x000074a8) cell_fast2_pane_g2

0x73ef,	// (0x000074b1) cell_fast2_pane_g3

0x0002,

0xfbb5,	// (0x0000fc77) cell_fast2_pane_g

0x0ad9,	// (0x00000b9b) grid_highlight_pane_cp9

0x0aee,	// (0x00000bb0) main_eswt_pane_ParamLimits

0x0aee,	// (0x00000bb0) main_eswt_pane

0x7368,	// (0x0000742a) list_single_text_info_pane

0x73f7,	// (0x000074b9) eswt_ctrl_button_pane

0x73f7,	// (0x000074b9) eswt_ctrl_canvas_pane

0x73ff,	// (0x000074c1) eswt_ctrl_combo_pane

0x73f7,	// (0x000074b9) eswt_ctrl_default_pane

0x73f7,	// (0x000074b9) eswt_ctrl_label_pane

0x7407,	// (0x000074c9) eswt_ctrl_wait_pane

0x740f,	// (0x000074d1) eswt_shell_pane

0xf4f5,	// (0x0000f5b7) listscroll_eswt_app_pane

0x742f,	// (0x000074f1) popup_eswt_tasktip_window_ParamLimits

0x742f,	// (0x000074f1) popup_eswt_tasktip_window

0x37d7,	// (0x00003899) bg_popup_window_pane_cp18

0x7440,	// (0x00007502) eswt_control_pane_g1_ParamLimits

0x7440,	// (0x00007502) eswt_control_pane_g1

0x744d,	// (0x0000750f) eswt_control_pane_g2_ParamLimits

0x744d,	// (0x0000750f) eswt_control_pane_g2

0x745a,	// (0x0000751c) eswt_control_pane_g3_ParamLimits

0x745a,	// (0x0000751c) eswt_control_pane_g3

0x7467,	// (0x00007529) eswt_control_pane_g4_ParamLimits

0x7467,	// (0x00007529) eswt_control_pane_g4

0x0003,

0xfbbc,	// (0x0000fc7e) eswt_control_pane_g_ParamLimits

0xfbbc,	// (0x0000fc7e) eswt_control_pane_g

0x12d4,	// (0x00001396) bg_button_pane_ParamLimits

0x12d4,	// (0x00001396) bg_button_pane

0x0aee,	// (0x00000bb0) common_borders_pane_copy2_ParamLimits

0x0aee,	// (0x00000bb0) common_borders_pane_copy2

0x7474,	// (0x00007536) control_button_pane_g1_ParamLimits

0x7474,	// (0x00007536) control_button_pane_g1

0x7480,	// (0x00007542) control_button_pane_g2_ParamLimits

0x7480,	// (0x00007542) control_button_pane_g2

0x748c,	// (0x0000754e) control_button_pane_g3_ParamLimits

0x748c,	// (0x0000754e) control_button_pane_g3

0x0002,

0xfbc5,	// (0x0000fc87) control_button_pane_g_ParamLimits

0xfbc5,	// (0x0000fc87) control_button_pane_g

0x74a0,	// (0x00007562) control_button_pane_t1

0x74ae,	// (0x00007570) control_button_pane_t2

0x0001,

0xfbcc,	// (0x0000fc8e) control_button_pane_t

0x3629,	// (0x000036eb) bg_button_pane_g1

0x3631,	// (0x000036f3) bg_button_pane_g2

0x3639,	// (0x000036fb) bg_button_pane_g3

0x3641,	// (0x00003703) bg_button_pane_g4

0x3649,	// (0x0000370b) bg_button_pane_g5

0x3651,	// (0x00003713) bg_button_pane_g6

0x3659,	// (0x0000371b) bg_button_pane_g7

0x3661,	// (0x00003723) bg_button_pane_g8

0x3669,	// (0x0000372b) bg_button_pane_g9

0x0008,

0xf830,	// (0x0000f8f2) bg_button_pane_g

0x65ba,	// (0x0000667c) common_borders_pane_ParamLimits

0x65ba,	// (0x0000667c) common_borders_pane

0x7440,	// (0x00007502) eswt_control_pane_g1_copy1_ParamLimits

0x7440,	// (0x00007502) eswt_control_pane_g1_copy1

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy1_ParamLimits

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy1

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy1_ParamLimits

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy1

0x7467,	// (0x00007529) eswt_control_pane_g4_copy1_ParamLimits

0x7467,	// (0x00007529) eswt_control_pane_g4_copy1

0x65f5,	// (0x000066b7) bg_eswt_ctrl_canvas_pane_g1

0x65ba,	// (0x0000667c) common_borders_pane_cp2_ParamLimits

0x65ba,	// (0x0000667c) common_borders_pane_cp2

0x65ba,	// (0x0000667c) common_borders_pane_cp3_ParamLimits

0x65ba,	// (0x0000667c) common_borders_pane_cp3

0x74bc,	// (0x0000757e) separator_horizontal_pane

0x74c4,	// (0x00007586) separator_vertical_pane

0x7440,	// (0x00007502) eswt_control_pane_g1_copy2_ParamLimits

0x7440,	// (0x00007502) eswt_control_pane_g1_copy2

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy2_ParamLimits

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy2

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy2_ParamLimits

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy2

0x7467,	// (0x00007529) eswt_control_pane_g4_copy2_ParamLimits

0x7467,	// (0x00007529) eswt_control_pane_g4_copy2

0xf4f5,	// (0x0000f5b7) common_borders_pane_cp4

0x74cd,	// (0x0000758f) separator_horizontal_pane_g1

0x74d6,	// (0x00007598) separator_horizontal_pane_g2

0x74df,	// (0x000075a1) separator_horizontal_pane_g3

0x0002,

0xfbd1,	// (0x0000fc93) separator_horizontal_pane_g

0x7440,	// (0x00007502) eswt_control_pane_g1_copy3_ParamLimits

0x7440,	// (0x00007502) eswt_control_pane_g1_copy3

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy3_ParamLimits

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy3

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy3_ParamLimits

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy3

0x7467,	// (0x00007529) eswt_control_pane_g4_copy3_ParamLimits

0x7467,	// (0x00007529) eswt_control_pane_g4_copy3

0xf4f5,	// (0x0000f5b7) common_borders_pane_cp5

0x74e8,	// (0x000075aa) separator_vertical_pane_g1

0x74f1,	// (0x000075b3) separator_vertical_pane_g2

0x74fa,	// (0x000075bc) separator_vertical_pane_g3

0x0002,

0xfbd8,	// (0x0000fc9a) separator_vertical_pane_g

0x7440,	// (0x00007502) eswt_control_pane_g1_copy4_ParamLimits

0x7440,	// (0x00007502) eswt_control_pane_g1_copy4

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy4_ParamLimits

0x744d,	// (0x0000750f) eswt_control_pane_g2_copy4

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy4_ParamLimits

0x745a,	// (0x0000751c) eswt_control_pane_g3_copy4

0x7467,	// (0x00007529) eswt_control_pane_g4_copy4_ParamLimits

0x7467,	// (0x00007529) eswt_control_pane_g4_copy4

0x7503,	// (0x000075c5) eswt_ctrl_combo_button_pane

0x750b,	// (0x000075cd) eswt_ctrl_input_pane

0x7513,	// (0x000075d5) popup_choice_list_window_cp70

0x751b,	// (0x000075dd) eswt_ctrl_input_pane_t1

0xf4f5,	// (0x0000f5b7) input_focus_pane_cp70

0x65ba,	// (0x0000667c) bg_button_pane_cp70_ParamLimits

0x65ba,	// (0x0000667c) bg_button_pane_cp70

0x7529,	// (0x000075eb) eswt_ctrl_combo_button_pane_g1

0x7531,	// (0x000075f3) wait_bar_pane_cp70

0x37d7,	// (0x00003899) bg_popup_window_pane_cp70_ParamLimits

0x37d7,	// (0x00003899) bg_popup_window_pane_cp70

0x7539,	// (0x000075fb) popup_eswt_tasktip_window_t1

0x754f,	// (0x00007611) wait_bar_pane_cp71_ParamLimits

0x754f,	// (0x00007611) wait_bar_pane_cp71

0x755b,	// (0x0000761d) grid_eswt_app_pane

0x1ac4,	// (0x00001b86) scroll_pane_cp70

0xdbe0,	// (0x0000dca2) cell_eswt_app_pane_ParamLimits

0xdbe0,	// (0x0000dca2) cell_eswt_app_pane

0xdc0a,	// (0x0000dccc) cell_eswt_app_pane_g1_ParamLimits

0xdc0a,	// (0x0000dccc) cell_eswt_app_pane_g1

0xdc39,	// (0x0000dcfb) cell_eswt_app_pane_g2_ParamLimits

0xdc39,	// (0x0000dcfb) cell_eswt_app_pane_g2

0x0001,

0xfbdf,	// (0x0000fca1) cell_eswt_app_pane_g_ParamLimits

0xfbdf,	// (0x0000fca1) cell_eswt_app_pane_g

0xdc62,	// (0x0000dd24) cell_eswt_app_pane_t1_ParamLimits

0xdc62,	// (0x0000dd24) cell_eswt_app_pane_t1

0x761e,	// (0x000076e0) grid_highlight_pane_cp70_ParamLimits

0x761e,	// (0x000076e0) grid_highlight_pane_cp70

0x2444,	// (0x00002506) set_content_pane_g1

0xc560,	// (0x0000c622) status_small_volume_pane

0x762a,	// (0x000076ec) status_small_volume_pane_g1

0x7632,	// (0x000076f4) volume_small2_pane

0x763b,	// (0x000076fd) volume_small2_pane_g1

0x7644,	// (0x00007706) volume_small2_pane_g2

0x764d,	// (0x0000770f) volume_small2_pane_g3

0x7656,	// (0x00007718) volume_small2_pane_g4

0x765f,	// (0x00007721) volume_small2_pane_g5

0x7668,	// (0x0000772a) volume_small2_pane_g6

0x7671,	// (0x00007733) volume_small2_pane_g7

0x767a,	// (0x0000773c) volume_small2_pane_g8

0x7683,	// (0x00007745) volume_small2_pane_g9

0x768c,	// (0x0000774e) volume_small2_pane_g10

0x0009,

0xfbe4,	// (0x0000fca6) volume_small2_pane_g

0x6bcf,	// (0x00006c91) fep_vkb_top_text_pane_g1_ParamLimits

0xdb37,	// (0x0000dbf9) fep_vkb_top_text_pane_t1_ParamLimits

0x6ef8,	// (0x00006fba) popup_preview_fixed_window_g3_ParamLimits

0x6ef8,	// (0x00006fba) popup_preview_fixed_window_g3

0xcd5f,	// (0x0000ce21) popup_toolbar_trans_pane

0xd486,	// (0x0000d548) aid_height_set_list_ParamLimits

0x4e4f,	// (0x00004f11) aid_size_parent_ParamLimits

0x2aae,	// (0x00002b70) list_highlight_pane_cp2_ParamLimits

0x2444,	// (0x00002506) set_content_pane_g1_ParamLimits

0xd640,	// (0x0000d702) list_single_image_pane_ParamLimits

0xd640,	// (0x0000d702) list_single_image_pane

0xdc94,	// (0x0000dd56) aid_size_cell_image_ParamLimits

0xdc94,	// (0x0000dd56) aid_size_cell_image

0xdca1,	// (0x0000dd63) grid_single_image_pane_ParamLimits

0xdca1,	// (0x0000dd63) grid_single_image_pane

0x36ee,	// (0x000037b0) list_single_image_pane_g1_ParamLimits

0x36ee,	// (0x000037b0) list_single_image_pane_g1

0x76ae,	// (0x00007770) list_single_image_pane_g2_ParamLimits

0x76ae,	// (0x00007770) list_single_image_pane_g2

0x0001,

0xfbf9,	// (0x0000fcbb) list_single_image_pane_g_ParamLimits

0xfbf9,	// (0x0000fcbb) list_single_image_pane_g

0x76c2,	// (0x00007784) list_single_image_pane_t1_ParamLimits

0x76c2,	// (0x00007784) list_single_image_pane_t1

0xdcad,	// (0x0000dd6f) cell_image_list_pane_ParamLimits

0xdcad,	// (0x0000dd6f) cell_image_list_pane

0xdcc1,	// (0x0000dd83) cell_image_list_pane_g1

0xdcca,	// (0x0000dd8c) cell_image_list_pane_g2

0x0001,

0xfbfe,	// (0x0000fcc0) cell_image_list_pane_g

0x76fe,	// (0x000077c0) aid_size_cell_tb_trans_pane

0x12d4,	// (0x00001396) bg_tb_trans_pane

0x7710,	// (0x000077d2) grid_tb_trans_pane

0x3629,	// (0x000036eb) bg_tb_trans_pane_g1

0x3631,	// (0x000036f3) bg_tb_trans_pane_g2

0x3639,	// (0x000036fb) bg_tb_trans_pane_g3

0x3641,	// (0x00003703) bg_tb_trans_pane_g4

0x3649,	// (0x0000370b) bg_tb_trans_pane_g5

0x3661,	// (0x00003723) bg_tb_trans_pane_g6

0x3669,	// (0x0000372b) bg_tb_trans_pane_g7

0x3651,	// (0x00003713) bg_tb_trans_pane_g8

0x3659,	// (0x0000371b) bg_tb_trans_pane_g9

0x0008,

0xfc03,	// (0x0000fcc5) bg_tb_trans_pane_g

0x7724,	// (0x000077e6) cell_toolbar_trans_pane_ParamLimits

0x7724,	// (0x000077e6) cell_toolbar_trans_pane

0x65f5,	// (0x000066b7) cell_toolbar_trans_pane_g1

0xd8a1,	// (0x0000d963) list_form2_midp_pane_t1

0xd8af,	// (0x0000d971) list_form2_midp_pane_t2

0x0001,

0xfaac,	// (0x0000fb6e) list_form2_midp_pane_t

0x6197,	// (0x00006259) scroll_pane_cp51_ParamLimits

0x63a2,	// (0x00006464) form2_midp_wait_pane_g1

0x63ab,	// (0x0000646d) form2_midp_wait_pane_g2

0x63b4,	// (0x00006476) form2_midp_wait_pane_g3

0x0002,

0xfac1,	// (0x0000fb83) form2_midp_wait_pane_g

0x0445,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x6400,	// (0x000064c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x640f,	// (0x000064d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5055,	// (0x00005117) list_single_2graphic_im_pane_ParamLimits

0x5055,	// (0x00005117) list_single_2graphic_im_pane

0x774a,	// (0x0000780c) list_single_2graphic_im_pane_g1_ParamLimits

0x774a,	// (0x0000780c) list_single_2graphic_im_pane_g1

0x775b,	// (0x0000781d) list_single_2graphic_im_pane_g2_ParamLimits

0x775b,	// (0x0000781d) list_single_2graphic_im_pane_g2

0x7767,	// (0x00007829) list_single_2graphic_im_pane_g3_ParamLimits

0x7767,	// (0x00007829) list_single_2graphic_im_pane_g3

0x0003,

0xfc16,	// (0x0000fcd8) list_single_2graphic_im_pane_g_ParamLimits

0xfc16,	// (0x0000fcd8) list_single_2graphic_im_pane_g

0x7787,	// (0x00007849) list_single_2graphic_im_pane_t1_ParamLimits

0x7787,	// (0x00007849) list_single_2graphic_im_pane_t1

0x6f04,	// (0x00006fc6) list_single_graphic_2heading_pane_fp_ParamLimits

0x6f04,	// (0x00006fc6) list_single_graphic_2heading_pane_fp

0x6f48,	// (0x0000700a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6f48,	// (0x0000700a) list_single_graphic_2heading_pane_fp_g1

0x6f19,	// (0x00006fdb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6f19,	// (0x00006fdb) list_single_graphic_2heading_pane_fp_g2

0x12fa,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x12fa,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3

0x1306,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1306,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4

0x6f25,	// (0x00006fe7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6f25,	// (0x00006fe7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc06) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc06) list_single_graphic_2heading_pane_fp_g

0x77b8,	// (0x0000787a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x77b8,	// (0x0000787a) list_single_graphic_2heading_pane_fp_t1

0x6f80,	// (0x00007042) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f80,	// (0x00007042) list_single_graphic_2heading_pane_fp_t2

0x77ce,	// (0x00007890) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x77ce,	// (0x00007890) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc1f,	// (0x0000fce1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc1f,	// (0x0000fce1) list_single_graphic_2heading_pane_fp_t

0x681f,	// (0x000068e1) fep_hwr_write_pane_g5_ParamLimits

0x681f,	// (0x000068e1) fep_hwr_write_pane_g5

0x682b,	// (0x000068ed) fep_hwr_write_pane_g6_ParamLimits

0x682b,	// (0x000068ed) fep_hwr_write_pane_g6

0x740f,	// (0x000074d1) eswt_shell_pane_ParamLimits

0x37d7,	// (0x00003899) bg_popup_window_pane_cp18_ParamLimits

0x4d0d,	// (0x00004dcf) heading_pane_cp70

0x7539,	// (0x000075fb) popup_eswt_tasktip_window_t1_ParamLimits

0xce27,	// (0x0000cee9) aid_touch_tab_arrow_left

0xce3d,	// (0x0000ceff) aid_touch_tab_arrow_right

0xba1f,	// (0x0000bae1) title_pane_g3_ParamLimits

0xba1f,	// (0x0000bae1) title_pane_g3

0x11b3,	// (0x00001275) set_value_pane_g1

0xcd5f,	// (0x0000ce21) popup_toolbar_trans_pane_ParamLimits

0x76fe,	// (0x000077c0) aid_size_cell_tb_trans_pane_ParamLimits

0x12d4,	// (0x00001396) bg_tb_trans_pane_ParamLimits

0x7710,	// (0x000077d2) grid_tb_trans_pane_ParamLimits

0x0779,	// (0x0000083b) cont_note_pane_ParamLimits

0x0779,	// (0x0000083b) cont_note_pane

0x0aee,	// (0x00000bb0) cont_snote2_single_text_pane_ParamLimits

0x0aee,	// (0x00000bb0) cont_snote2_single_text_pane

0x0aee,	// (0x00000bb0) cont_snote2_single_graphic_pane_ParamLimits

0x0aee,	// (0x00000bb0) cont_snote2_single_graphic_pane

0x3eb7,	// (0x00003f79) cont_note_wait_pane_ParamLimits

0x3eb7,	// (0x00003f79) cont_note_wait_pane

0x3eb7,	// (0x00003f79) cont_note_image_pane_ParamLimits

0x3eb7,	// (0x00003f79) cont_note_image_pane

0x77e4,	// (0x000078a6) popup_note2_window_g1_ParamLimits

0x77e4,	// (0x000078a6) popup_note2_window_g1

0x7815,	// (0x000078d7) popup_note2_window_t1_ParamLimits

0x7815,	// (0x000078d7) popup_note2_window_t1

0x785a,	// (0x0000791c) popup_note2_window_t2_ParamLimits

0x785a,	// (0x0000791c) popup_note2_window_t2

0x789f,	// (0x00007961) popup_note2_window_t3_ParamLimits

0x789f,	// (0x00007961) popup_note2_window_t3

0x78e4,	// (0x000079a6) popup_note2_window_t4_ParamLimits

0x78e4,	// (0x000079a6) popup_note2_window_t4

0x07fd,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x07fd,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xfc2b,	// (0x0000fced) popup_note2_window_t_ParamLimits

0xfc2b,	// (0x0000fced) popup_note2_window_t

0x7913,	// (0x000079d5) popup_note2_image_window_g1_ParamLimits

0x7913,	// (0x000079d5) popup_note2_image_window_g1

0x791f,	// (0x000079e1) popup_note2_image_window_g2_ParamLimits

0x791f,	// (0x000079e1) popup_note2_image_window_g2

0x0001,

0xfc36,	// (0x0000fcf8) popup_note2_image_window_g_ParamLimits

0xfc36,	// (0x0000fcf8) popup_note2_image_window_g

0x7931,	// (0x000079f3) popup_note2_image_window_t1_ParamLimits

0x7931,	// (0x000079f3) popup_note2_image_window_t1

0x7949,	// (0x00007a0b) popup_note2_image_window_t2_ParamLimits

0x7949,	// (0x00007a0b) popup_note2_image_window_t2

0x7961,	// (0x00007a23) popup_note2_image_window_t3_ParamLimits

0x7961,	// (0x00007a23) popup_note2_image_window_t3

0x0002,

0xfc3b,	// (0x0000fcfd) popup_note2_image_window_t_ParamLimits

0xfc3b,	// (0x0000fcfd) popup_note2_image_window_t

0x3ec5,	// (0x00003f87) popup_note2_wait_window_g1_ParamLimits

0x3ec5,	// (0x00003f87) popup_note2_wait_window_g1

0x797d,	// (0x00007a3f) popup_note2_wait_window_g2_ParamLimits

0x797d,	// (0x00007a3f) popup_note2_wait_window_g2

0x3edd,	// (0x00003f9f) popup_note2_wait_window_g3_ParamLimits

0x3edd,	// (0x00003f9f) popup_note2_wait_window_g3

0x0002,

0xfc42,	// (0x0000fd04) popup_note2_wait_window_g_ParamLimits

0xfc42,	// (0x0000fd04) popup_note2_wait_window_g

0x7989,	// (0x00007a4b) popup_note2_wait_window_t1_ParamLimits

0x7989,	// (0x00007a4b) popup_note2_wait_window_t1

0x79a7,	// (0x00007a69) popup_note2_wait_window_t2_ParamLimits

0x79a7,	// (0x00007a69) popup_note2_wait_window_t2

0x79c5,	// (0x00007a87) popup_note2_wait_window_t3_ParamLimits

0x79c5,	// (0x00007a87) popup_note2_wait_window_t3

0x79d7,	// (0x00007a99) popup_note2_wait_window_t4_ParamLimits

0x79d7,	// (0x00007a99) popup_note2_wait_window_t4

0x0003,

0xfc49,	// (0x0000fd0b) popup_note2_wait_window_t_ParamLimits

0xfc49,	// (0x0000fd0b) popup_note2_wait_window_t

0x79e9,	// (0x00007aab) wait_bar2_pane_ParamLimits

0x79e9,	// (0x00007aab) wait_bar2_pane

0x7a01,	// (0x00007ac3) popup_snote2_single_text_window_g1_ParamLimits

0x7a01,	// (0x00007ac3) popup_snote2_single_text_window_g1

0x7a29,	// (0x00007aeb) popup_snote2_single_text_window_t1_ParamLimits

0x7a29,	// (0x00007aeb) popup_snote2_single_text_window_t1

0x7a75,	// (0x00007b37) popup_snote2_single_text_window_t2_ParamLimits

0x7a75,	// (0x00007b37) popup_snote2_single_text_window_t2

0x7ac1,	// (0x00007b83) popup_snote2_single_text_window_t3_ParamLimits

0x7ac1,	// (0x00007b83) popup_snote2_single_text_window_t3

0x7b02,	// (0x00007bc4) popup_snote2_single_text_window_t4_ParamLimits

0x7b02,	// (0x00007bc4) popup_snote2_single_text_window_t4

0x7b38,	// (0x00007bfa) popup_snote2_single_text_window_t5_ParamLimits

0x7b38,	// (0x00007bfa) popup_snote2_single_text_window_t5

0x0004,

0xfc52,	// (0x0000fd14) popup_snote2_single_text_window_t_ParamLimits

0xfc52,	// (0x0000fd14) popup_snote2_single_text_window_t

0x7b63,	// (0x00007c25) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b63,	// (0x00007c25) popup_snote2_single_graphic_window_g1

0x7b8b,	// (0x00007c4d) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b8b,	// (0x00007c4d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5d,	// (0x0000fd1f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5d,	// (0x0000fd1f) popup_snote2_single_graphic_window_g

0x7bb3,	// (0x00007c75) popup_snote2_single_graphic_window_t1_ParamLimits

0x7bb3,	// (0x00007c75) popup_snote2_single_graphic_window_t1

0x7bff,	// (0x00007cc1) popup_snote2_single_graphic_window_t2_ParamLimits

0x7bff,	// (0x00007cc1) popup_snote2_single_graphic_window_t2

0x7ac1,	// (0x00007b83) popup_snote2_single_graphic_window_t3_ParamLimits

0x7ac1,	// (0x00007b83) popup_snote2_single_graphic_window_t3

0x7b02,	// (0x00007bc4) popup_snote2_single_graphic_window_t4_ParamLimits

0x7b02,	// (0x00007bc4) popup_snote2_single_graphic_window_t4

0x7b38,	// (0x00007bfa) popup_snote2_single_graphic_window_t5_ParamLimits

0x7b38,	// (0x00007bfa) popup_snote2_single_graphic_window_t5

0x0004,

0xfc62,	// (0x0000fd24) popup_snote2_single_graphic_window_t_ParamLimits

0xfc62,	// (0x0000fd24) popup_snote2_single_graphic_window_t

0x6007,	// (0x000060c9) clock_nsta_pane_cp2_t1

0x6007,	// (0x000060c9) clock_nsta_pane_cp2_t2

0x0001,

0xfa82,	// (0x0000fb44) clock_nsta_pane_cp2_t

0x12ee,	// (0x000013b0) form_field_data_wide_pane_g1_ParamLimits

0x12fa,	// (0x000013bc) form_field_data_wide_pane_g2_ParamLimits

0x12fa,	// (0x000013bc) form_field_data_wide_pane_g2

0x1306,	// (0x000013c8) form_field_data_wide_pane_g3_ParamLimits

0x1306,	// (0x000013c8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0000f713) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0000f713) form_field_data_wide_pane_g

0xd7d4,	// (0x0000d896) grid_touch_3_pane_ParamLimits

0xd7d4,	// (0x0000d896) grid_touch_3_pane

0xdcd3,	// (0x0000dd95) cell_touch_3_pane_ParamLimits

0xdcd3,	// (0x0000dd95) cell_touch_3_pane

0x65f5,	// (0x000066b7) cell_touch_3_pane_g1

0x65f5,	// (0x000066b7) cell_touch_3_pane_g2

0x0001,

0xfb07,	// (0x0000fbc9) cell_touch_3_pane_g

0x0855,	// (0x00000917) cont_query_data_pane

0x085d,	// (0x0000091f) cont_query_data_pane_cp1

0x7c79,	// (0x00007d3b) button_value_adjust_pane_cp7

0x7c81,	// (0x00007d43) query_popup_pane_cp3

0x1e1c,	// (0x00001ede) bg_popup_sub_pane_cp22_ParamLimits

0x1e32,	// (0x00001ef4) navi_navi_volume_pane_cp2

0x1e4d,	// (0x00001f0f) popup_side_volume_key_window_g2

0x1e5c,	// (0x00001f1e) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0000f7a9) popup_side_volume_key_window_g

0x1e79,	// (0x00001f3b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0000f7b0) popup_side_volume_key_window_t

0x2303,	// (0x000023c5) popup_side_volume_key_window_ParamLimits

0xbe25,	// (0x0000bee7) list_double_graphic_pane_g4_ParamLimits

0xbe25,	// (0x0000bee7) list_double_graphic_pane_g4

0xd61b,	// (0x0000d6dd) list_single_2heading_msg_pane_ParamLimits

0xd61b,	// (0x0000d6dd) list_single_2heading_msg_pane

0xdd1b,	// (0x0000dddd) list_single_2heading_msg_pane_g1_ParamLimits

0xdd1b,	// (0x0000dddd) list_single_2heading_msg_pane_g1

0xdd27,	// (0x0000dde9) list_single_2heading_msg_pane_g2_ParamLimits

0xdd27,	// (0x0000dde9) list_single_2heading_msg_pane_g2

0xdd3a,	// (0x0000ddfc) list_single_2heading_msg_pane_g3_ParamLimits

0xdd3a,	// (0x0000ddfc) list_single_2heading_msg_pane_g3

0x7cc8,	// (0x00007d8a) list_single_2heading_msg_pane_g4_ParamLimits

0x7cc8,	// (0x00007d8a) list_single_2heading_msg_pane_g4

0x0003,

0xfc6d,	// (0x0000fd2f) list_single_2heading_msg_pane_g_ParamLimits

0xfc6d,	// (0x0000fd2f) list_single_2heading_msg_pane_g

0x7ce0,	// (0x00007da2) list_single_2heading_msg_pane_t1_ParamLimits

0x7ce0,	// (0x00007da2) list_single_2heading_msg_pane_t1

0xdd46,	// (0x0000de08) list_single_2heading_msg_pane_t2_ParamLimits

0xdd46,	// (0x0000de08) list_single_2heading_msg_pane_t2

0xddb1,	// (0x0000de73) list_single_2heading_msg_pane_t3_ParamLimits

0xddb1,	// (0x0000de73) list_single_2heading_msg_pane_t3

0x7d70,	// (0x00007e32) list_single_2heading_msg_pane_t4_ParamLimits

0x7d70,	// (0x00007e32) list_single_2heading_msg_pane_t4

0x0003,

0xfc76,	// (0x0000fd38) list_single_2heading_msg_pane_t_ParamLimits

0xfc76,	// (0x0000fd38) list_single_2heading_msg_pane_t

0x0399,	// (0x0000045b) title_pane_g4_ParamLimits

0x0399,	// (0x0000045b) title_pane_g4

0x182e,	// (0x000018f0) title_pane_stacon_g3_ParamLimits

0x182e,	// (0x000018f0) title_pane_stacon_g3

0x777b,	// (0x0000783d) list_single_2graphic_im_pane_g4_ParamLimits

0x777b,	// (0x0000783d) list_single_2graphic_im_pane_g4

0x4a7a,	// (0x00004b3c) popup_side_volume_key_window_cp

0x5503,	// (0x000055c5) main_idle_act2_pane_t1

0x3671,	// (0x00003733) toolbar_button_pane_g10

0xbd7e,	// (0x0000be40) popup_toolbar_window_cp1

0x5ff8,	// (0x000060ba) clock_nsta_pane_cp_t1

0x5ff8,	// (0x000060ba) clock_nsta_pane_cp_t2

0x0001,

0xfa7d,	// (0x0000fb3f) clock_nsta_pane_cp_t

0x1e32,	// (0x00001ef4) navi_navi_volume_pane_cp2_ParamLimits

0x1e41,	// (0x00001f03) popup_side_volume_key_window_g1_ParamLimits

0x1e4d,	// (0x00001f0f) popup_side_volume_key_window_g2_ParamLimits

0x1e5c,	// (0x00001f1e) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0000f7a9) popup_side_volume_key_window_g_ParamLimits

0x665f,	// (0x00006721) fep_hwr_aid_pane

0x6706,	// (0x000067c8) bg_fep_hwr_top_pane_g4_ParamLimits

0x6726,	// (0x000067e8) fep_hwr_top_pane_g1_ParamLimits

0x6738,	// (0x000067fa) fep_hwr_top_pane_g2_ParamLimits

0x674a,	// (0x0000680c) fep_hwr_top_pane_g3_ParamLimits

0xfad2,	// (0x0000fb94) fep_hwr_top_pane_g_ParamLimits

0x675f,	// (0x00006821) fep_hwr_top_text_pane_ParamLimits

0x483d,	// (0x000048ff) aid_touch_tab_arrow_arrow_2

0x4846,	// (0x00004908) aid_touch_tab_arrow_left_2

0x6673,	// (0x00006735) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66aa,	// (0x0000676c) fep_hwr_prediction_pane

0x69d7,	// (0x00006a99) fep_vkb_prediction_pane

0xdb17,	// (0x0000dbd9) fep_vkb_side_pane_g3_ParamLimits

0xdb17,	// (0x0000dbd9) fep_vkb_side_pane_g3

0x6a87,	// (0x00006b49) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x713d,	// (0x000071ff) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x714a,	// (0x0000720c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb7c,	// (0x0000fc3e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d95,	// (0x00007e57) fep_hwr_prediction_pane_g1

0x7d9f,	// (0x00007e61) fep_hwr_prediction_pane_g2

0x7da7,	// (0x00007e69) fep_hwr_prediction_pane_g3

0x7daf,	// (0x00007e71) fep_hwr_prediction_pane_g4

0x0003,

0xfc7f,	// (0x0000fd41) fep_hwr_prediction_pane_g

0x7d95,	// (0x00007e57) fep_vkb_prediction_pane_g1

0x7db7,	// (0x00007e79) fep_vkb_prediction_pane_g2

0x7dbf,	// (0x00007e81) fep_vkb_prediction_pane_g3

0x7dc7,	// (0x00007e89) fep_vkb_prediction_pane_g4

0x0003,

0xfc88,	// (0x0000fd4a) fep_vkb_prediction_pane_g

0x4db8,	// (0x00004e7a) slider_set_pane_g3

0x4dcc,	// (0x00004e8e) slider_set_pane_g4

0x4de4,	// (0x00004ea6) slider_set_pane_g5

0x4db8,	// (0x00004e7a) slider_set_pane_g6

0x4dfa,	// (0x00004ebc) slider_set_pane_g7

0x4fb4,	// (0x00005076) slider_form_pane_g3

0x4fbd,	// (0x0000507f) slider_form_pane_g4

0x4fc5,	// (0x00005087) slider_form_pane_g5

0x4fb4,	// (0x00005076) slider_form_pane_g6

0xd5d1,	// (0x0000d693) slider_form_pane_g7

0x5811,	// (0x000058d3) slider_set_pane_vc_g3

0x581a,	// (0x000058dc) slider_set_pane_vc_g4

0x5823,	// (0x000058e5) slider_set_pane_vc_g5

0x5811,	// (0x000058d3) slider_set_pane_vc_g6

0x582c,	// (0x000058ee) slider_set_pane_vc_g7

0x5cb6,	// (0x00005d78) slider_form_pane_vc_g1

0x5cbf,	// (0x00005d81) slider_form_pane_vc_g2

0x5cc8,	// (0x00005d8a) slider_form_pane_vc_g3

0x5cb6,	// (0x00005d78) slider_form_pane_vc_g4

0x5cd1,	// (0x00005d93) slider_form_pane_vc_g5

0x0004,

0xfa4f,	// (0x0000fb11) slider_form_pane_vc_g

0xf4f5,	// (0x0000f5b7) main_idle_act3_pane

0x7dcf,	// (0x00007e91) ai3_links_pane

0xde1f,	// (0x0000dee1) popup_ai3_data_window_ParamLimits

0xde1f,	// (0x0000dee1) popup_ai3_data_window

0xf4f5,	// (0x0000f5b7) grid_ai3_links_pane

0xde39,	// (0x0000defb) cell_ai3_links_pane_ParamLimits

0xde39,	// (0x0000defb) cell_ai3_links_pane

0x7e0a,	// (0x00007ecc) bg_popup_sub_pane_cp11

0x7e17,	// (0x00007ed9) cell_ai3_links_pane_g1

0xf4f5,	// (0x0000f5b7) bg_popup_sub_pane_cp12

0x7e3c,	// (0x00007efe) heading_ai3_data_pane

0x7e44,	// (0x00007f06) list_ai3_gene_pane

0x7e50,	// (0x00007f12) popup_ai3_data_window_g1

0x7e58,	// (0x00007f1a) heading_ai3_data_pane_g1

0x7e60,	// (0x00007f22) heading_ai3_data_pane_t1

0x7e6e,	// (0x00007f30) list_double_ai3_gene_pane_ParamLimits

0x7e6e,	// (0x00007f30) list_double_ai3_gene_pane

0x7e7b,	// (0x00007f3d) list_single_ai3_gene_pane_ParamLimits

0x7e7b,	// (0x00007f3d) list_single_ai3_gene_pane

0x65ba,	// (0x0000667c) list_highlight_pane_cp7_ParamLimits

0x65ba,	// (0x0000667c) list_highlight_pane_cp7

0x7e88,	// (0x00007f4a) list_single_a13_gene_pane_t1_ParamLimits

0x7e88,	// (0x00007f4a) list_single_a13_gene_pane_t1

0x7e9f,	// (0x00007f61) list_single_ai3_gene_pane_g1

0x7ea8,	// (0x00007f6a) list_single_ai3_gene_pane_g2

0x0001,

0xfc91,	// (0x0000fd53) list_single_ai3_gene_pane_g

0x7eb0,	// (0x00007f72) list_double_ai3_gene_pane_g1_ParamLimits

0x7eb0,	// (0x00007f72) list_double_ai3_gene_pane_g1

0x7ebc,	// (0x00007f7e) list_double_ai3_gene_pane_t1_ParamLimits

0x7ebc,	// (0x00007f7e) list_double_ai3_gene_pane_t1

0x7ed8,	// (0x00007f9a) list_double_ai3_gene_pane_t2_ParamLimits

0x7ed8,	// (0x00007f9a) list_double_ai3_gene_pane_t2

0x7eee,	// (0x00007fb0) list_double_ai3_gene_pane_t3_ParamLimits

0x7eee,	// (0x00007fb0) list_double_ai3_gene_pane_t3

0x0002,

0xfc96,	// (0x0000fd58) list_double_ai3_gene_pane_t_ParamLimits

0xfc96,	// (0x0000fd58) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c92,	// (0x00007d54) aid_size_min_col_2

0xdd05,	// (0x0000ddc7) aid_size_min_msg_ParamLimits

0xdd05,	// (0x0000ddc7) aid_size_min_msg

0xdb2b,	// (0x0000dbed) fep_vkb_top_text_pane_g2_ParamLimits

0xdb2b,	// (0x0000dbed) fep_vkb_top_text_pane_g2

0x0001,

0xfb02,	// (0x0000fbc4) fep_vkb_top_text_pane_g_ParamLimits

0xfb02,	// (0x0000fbc4) fep_vkb_top_text_pane_g

0xf4f5,	// (0x0000f5b7) main_hc_apps_shell_pane

0x7f0b,	// (0x00007fcd) grid_hc_apps_pane_ParamLimits

0x7f0b,	// (0x00007fcd) grid_hc_apps_pane

0x7f1d,	// (0x00007fdf) list_hc_apps_pane

0x7f25,	// (0x00007fe7) scroll_pane_cp37_ParamLimits

0x7f25,	// (0x00007fe7) scroll_pane_cp37

0xde53,	// (0x0000df15) cell_hc_apps_pane_ParamLimits

0xde53,	// (0x0000df15) cell_hc_apps_pane

0xdf11,	// (0x0000dfd3) cell_hc_apps_pane_g1_ParamLimits

0xdf11,	// (0x0000dfd3) cell_hc_apps_pane_g1

0x800f,	// (0x000080d1) cell_hc_apps_pane_g2_ParamLimits

0x800f,	// (0x000080d1) cell_hc_apps_pane_g2

0x802b,	// (0x000080ed) cell_hc_apps_pane_g3_ParamLimits

0x802b,	// (0x000080ed) cell_hc_apps_pane_g3

0x0002,

0xfc9d,	// (0x0000fd5f) cell_hc_apps_pane_g_ParamLimits

0xfc9d,	// (0x0000fd5f) cell_hc_apps_pane_g

0xdf3d,	// (0x0000dfff) cell_hc_apps_pane_t1_ParamLimits

0xdf3d,	// (0x0000dfff) cell_hc_apps_pane_t1

0x0779,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x0779,	// (0x0000083b) grid_highlight_pane_cp10

0xdf7b,	// (0x0000e03d) list_single_hc_apps_pane_ParamLimits

0xdf7b,	// (0x0000e03d) list_single_hc_apps_pane

0xdfa8,	// (0x0000e06a) list_single_hc_apps_pane_g1

0xdfc1,	// (0x0000e083) list_single_hc_apps_pane_g2

0x0001,

0xfca4,	// (0x0000fd66) list_single_hc_apps_pane_g

0xdfda,	// (0x0000e09c) list_single_hc_apps_pane_g2_copy1

0x8137,	// (0x000081f9) list_single_hc_apps_pane_t1

0x0445,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x048f,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x04a8,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x04c2,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0000f5fb) setting_slider_pane_t_ParamLimits

0x04da,	// (0x0000059c) slider_set_pane_ParamLimits

0x2943,	// (0x00002a05) control_pane_g5_ParamLimits

0x2943,	// (0x00002a05) control_pane_g5

0x4d9f,	// (0x00004e61) slider_set_pane_g1_ParamLimits

0x4dac,	// (0x00004e6e) slider_set_pane_g2_ParamLimits

0x4db8,	// (0x00004e7a) slider_set_pane_g3_ParamLimits

0x4dcc,	// (0x00004e8e) slider_set_pane_g4_ParamLimits

0x4de4,	// (0x00004ea6) slider_set_pane_g5_ParamLimits

0x4db8,	// (0x00004e7a) slider_set_pane_g6_ParamLimits

0x4dfa,	// (0x00004ebc) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0000f9f0) slider_set_pane_g_ParamLimits

0x23ef,	// (0x000024b1) navi_icon_text_pane_ParamLimits

0xcdf0,	// (0x0000ceb2) aid_fill_nsta_2_ParamLimits

0xce27,	// (0x0000cee9) aid_touch_tab_arrow_left_ParamLimits

0xce3d,	// (0x0000ceff) aid_touch_tab_arrow_right_ParamLimits

0xced8,	// (0x0000cf9a) clock_nsta_pane_ParamLimits

0x481f,	// (0x000048e1) navi_icon_pane_g1_ParamLimits

0x482b,	// (0x000048ed) navi_text_pane_t1_ParamLimits

0x6104,	// (0x000061c6) navi_icon_text_pane_g1_ParamLimits

0x6110,	// (0x000061d2) navi_icon_text_pane_t1_ParamLimits

0xdfa8,	// (0x0000e06a) list_single_hc_apps_pane_g1_ParamLimits

0xdfc1,	// (0x0000e083) list_single_hc_apps_pane_g2_ParamLimits

0xfca4,	// (0x0000fd66) list_single_hc_apps_pane_g_ParamLimits

0xdfda,	// (0x0000e09c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8137,	// (0x000081f9) list_single_hc_apps_pane_t1_ParamLimits

0xb924,	// (0x0000b9e6) popup_toolbar2_fixed_window_ParamLimits

0xb924,	// (0x0000b9e6) popup_toolbar2_fixed_window

0xcd55,	// (0x0000ce17) popup_toolbar2_float_window

0xf4f5,	// (0x0000f5b7) bg_popup_sub_pane_cp27

0x8165,	// (0x00008227) grid_toolbar2_float_pane

0xf4f5,	// (0x0000f5b7) bg_popup_sub_pane_cp26

0x8165,	// (0x00008227) grid_toolbar2_fixed_pane

0xdff6,	// (0x0000e0b8) cell_toolbar2_fixed_pane_ParamLimits

0xdff6,	// (0x0000e0b8) cell_toolbar2_fixed_pane

0xe010,	// (0x0000e0d2) cell_toolbar2_fixed_pane_g1

0x8186,	// (0x00008248) toolbar2_fixed_button_pane

0x3629,	// (0x000036eb) toolbar2_fixed_button_pane_g1

0x3631,	// (0x000036f3) toolbar2_fixed_button_pane_g2

0x3639,	// (0x000036fb) toolbar2_fixed_button_pane_g3

0x3641,	// (0x00003703) toolbar2_fixed_button_pane_g4

0x3649,	// (0x0000370b) toolbar2_fixed_button_pane_g5

0x3651,	// (0x00003713) toolbar2_fixed_button_pane_g6

0x3659,	// (0x0000371b) toolbar2_fixed_button_pane_g7

0x3661,	// (0x00003723) toolbar2_fixed_button_pane_g8

0x3669,	// (0x0000372b) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0000f8f2) toolbar2_fixed_button_pane_g

0x818e,	// (0x00008250) cell_toolbar2_float_pane_ParamLimits

0x818e,	// (0x00008250) cell_toolbar2_float_pane

0x819f,	// (0x00008261) cell_toolbar2_float_pane_g1

0x8186,	// (0x00008248) toolbar2_fixed_button_pane_cp

0xda05,	// (0x0000dac7) fep_vkb_accented_list_pane_ParamLimits

0xda05,	// (0x0000dac7) fep_vkb_accented_list_pane

0x6dce,	// (0x00006e90) bg_popup_fep_shadow_pane_g9

0x2563,	// (0x00002625) bg_popup_fep_shadow_pane_cp3

0x15be,	// (0x00001680) list_accented_list_pane

0x81a8,	// (0x0000826a) list_single_accented_list_pane_ParamLimits

0x81a8,	// (0x0000826a) list_single_accented_list_pane

0x2563,	// (0x00002625) list_highlight_pane_cp10

0x81b9,	// (0x0000827b) list_single_accented_list_pane_t1

0xcc7f,	// (0x0000cd41) popup_slider_window_ParamLimits

0xcc7f,	// (0x0000cd41) popup_slider_window

0x7c89,	// (0x00007d4b) aid_indentation_list_msg

0xe107,	// (0x0000e1c9) bg_popup_window_pane_cp19

0x82e5,	// (0x000083a7) popup_slider_window_g1

0x8301,	// (0x000083c3) popup_slider_window_g2

0x831d,	// (0x000083df) popup_slider_window_g3

0x0005,

0xfca9,	// (0x0000fd6b) popup_slider_window_g

0x8383,	// (0x00008445) popup_slider_window_t1

0x83f7,	// (0x000084b9) small_volume_slider_vertical_pane

0x65f5,	// (0x000066b7) small_volume_slider_vertical_pane_g1

0x65f5,	// (0x000066b7) small_volume_slider_vertical_pane_g2

0x8413,	// (0x000084d5) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbb,	// (0x0000fd7d) small_volume_slider_vertical_pane_g

0xb892,	// (0x0000b954) area_side_right_pane_ParamLimits

0xb892,	// (0x0000b954) area_side_right_pane

0xe1bf,	// (0x0000e281) aid_size_side_button_ParamLimits

0xe1bf,	// (0x0000e281) aid_size_side_button

0xe1d8,	// (0x0000e29a) grid_sctrl_middle_pane_ParamLimits

0xe1d8,	// (0x0000e29a) grid_sctrl_middle_pane

0x844f,	// (0x00008511) sctrl_sk_bottom_pane

0x8460,	// (0x00008522) sctrl_sk_top_pane

0x8472,	// (0x00008534) aid_touch_sctrl_top

0x0779,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x0779,	// (0x0000083b) bg_sctrl_sk_pane

0x847f,	// (0x00008541) sctrl_sk_top_pane_g1

0x848c,	// (0x0000854e) sctrl_sk_top_pane_t1

0x8472,	// (0x00008534) aid_touch_sctrl_bottom

0x0779,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x0779,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x84a7,	// (0x00008569) sctrl_sk_bottom_pane_g1

0x848c,	// (0x0000854e) sctrl_sk_bottom_pane_t1

0xe1f2,	// (0x0000e2b4) cell_sctrl_middle_pane_ParamLimits

0xe1f2,	// (0x0000e2b4) cell_sctrl_middle_pane

0xe203,	// (0x0000e2c5) aid_touch_sctrl_middle_ParamLimits

0xe203,	// (0x0000e2c5) aid_touch_sctrl_middle

0xe210,	// (0x0000e2d2) bg_sctrl_middle_pane_ParamLimits

0xe210,	// (0x0000e2d2) bg_sctrl_middle_pane

0x856c,	// (0x0000862e) cell_sctrl_middle_pane_g1_ParamLimits

0x856c,	// (0x0000862e) cell_sctrl_middle_pane_g1

0xe21e,	// (0x0000e2e0) cell_sctrl_middle_pane_g2_ParamLimits

0xe21e,	// (0x0000e2e0) cell_sctrl_middle_pane_g2

0x0001,

0xfcc7,	// (0x0000fd89) cell_sctrl_middle_pane_g_ParamLimits

0xfcc7,	// (0x0000fd89) cell_sctrl_middle_pane_g

0x3629,	// (0x000036eb) bg_sctrl_middle_pane_g1

0x3631,	// (0x000036f3) bg_sctrl_middle_pane_g2

0x3639,	// (0x000036fb) bg_sctrl_middle_pane_g3

0x3641,	// (0x00003703) bg_sctrl_middle_pane_g4

0x3649,	// (0x0000370b) bg_sctrl_middle_pane_g5

0x3651,	// (0x00003713) bg_sctrl_middle_pane_g6

0x3659,	// (0x0000371b) bg_sctrl_middle_pane_g7

0x3661,	// (0x00003723) bg_sctrl_middle_pane_g8

0x0007,

0xfccc,	// (0x0000fd8e) bg_sctrl_middle_pane_g

0x3669,	// (0x0000372b) bg_sctrl_middle_pane_g8_copy1

0x3629,	// (0x000036eb) bg_sctrl_sk_pane_g1

0x3631,	// (0x000036f3) bg_sctrl_sk_pane_g2

0x3639,	// (0x000036fb) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0000f8f2) bg_sctrl_sk_pane_g

0x0cac,	// (0x00000d6e) aid_size_touch_scroll_bar

0x3641,	// (0x00003703) bg_sctrl_sk_pane_g4

0x3649,	// (0x0000370b) bg_sctrl_sk_pane_g5

0x3651,	// (0x00003713) bg_sctrl_sk_pane_g6

0x3659,	// (0x0000371b) bg_sctrl_sk_pane_g7

0x3661,	// (0x00003723) bg_sctrl_sk_pane_g8

0x3669,	// (0x0000372b) bg_sctrl_sk_pane_g9

0x2b90,	// (0x00002c52) popup_fep_china_hwr2_fs_candidate_window

0xc793,	// (0x0000c855) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc793,	// (0x0000c855) popup_fep_china_hwr2_fs_control_window

0x6a87,	// (0x00006b49) sctrl_sk_top_pane_g2

0x0001,

0xfcc2,	// (0x0000fd84) sctrl_sk_top_pane_g

0xe22a,	// (0x0000e2ec) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe22a,	// (0x0000e2ec) aid_fep_china_hwr2_fs_cell

0xe23e,	// (0x0000e300) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe23e,	// (0x0000e300) bg_popup_fep_shadow_pane_cp4

0xe255,	// (0x0000e317) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe255,	// (0x0000e317) bg_popup_fep_shadow_pane_cp5

0xe267,	// (0x0000e329) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe267,	// (0x0000e329) popup_fep_china_hwr2_fs_control_bar_grid

0xe27b,	// (0x0000e33d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8540,	// (0x00008602) aid_fep_china_hwr2_fs_candi_cell

0xf4f5,	// (0x0000f5b7) bg_popup_fep_shadow_pane_cp6

0x854a,	// (0x0000860c) popup_fep_china_hwr2_fs_candidate_grid

0xe283,	// (0x0000e345) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe283,	// (0x0000e345) cell_fep_china_hwr2_fs_funtion_grid

0x65f5,	// (0x000066b7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x856c,	// (0x0000862e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x856c,	// (0x0000862e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x857a,	// (0x0000863c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x857a,	// (0x0000863c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcdd,	// (0x0000fd9f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcdd,	// (0x0000fd9f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe29b,	// (0x0000e35d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe29b,	// (0x0000e35d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe2b0,	// (0x0000e372) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe2b0,	// (0x0000e372) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce2,	// (0x0000fda4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce2,	// (0x0000fda4) cell_fep_china_hwr2_fs_funtion_grid_t

0x85c1,	// (0x00008683) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x85c9,	// (0x0000868b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x85d1,	// (0x00008693) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce7,	// (0x0000fda9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x85d9,	// (0x0000869b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x85d9,	// (0x0000869b) cell_fep_china_hwr2_fs_candidate_grid

0x85f2,	// (0x000086b4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85fa,	// (0x000086bc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x65f5,	// (0x000066b7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x65f5,	// (0x000066b7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb07,	// (0x0000fbc9) cell_fep_china_hwr2_fs_candidate_grid_g

0x8602,	// (0x000086c4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3191,	// (0x00003253) clock_nsta_pane_cp_24_ParamLimits

0x3191,	// (0x00003253) clock_nsta_pane_cp_24

0x320f,	// (0x000032d1) indicator_nsta_pane_cp_24_ParamLimits

0x320f,	// (0x000032d1) indicator_nsta_pane_cp_24

0x468a,	// (0x0000474c) heading_pane_g1

0x0001,

0xf895,	// (0x0000f957) heading_pane_g

0x5294,	// (0x00005356) grid_sct_catagory_button_pane

0x52c4,	// (0x00005386) scroll_pane_cp5_ParamLimits

0x61a3,	// (0x00006265) button_value_adjust_pane_cp5_ParamLimits

0x61a3,	// (0x00006265) button_value_adjust_pane_cp5

0x629f,	// (0x00006361) form2_midp_time_pane_ParamLimits

0x8610,	// (0x000086d2) cell_sct_catagory_button_pane_ParamLimits

0x8610,	// (0x000086d2) cell_sct_catagory_button_pane

0x65ba,	// (0x0000667c) bg_button_pane_cp01_ParamLimits

0x65ba,	// (0x0000667c) bg_button_pane_cp01

0x65f5,	// (0x000066b7) cell_sct_catagory_button_pane_g1

0xccf8,	// (0x0000cdba) popup_tb_extension_window

0xe2cc,	// (0x0000e38e) aid_size_cell_ext_ParamLimits

0xe2cc,	// (0x0000e38e) aid_size_cell_ext

0x0aee,	// (0x00000bb0) bg_tb_trans_pane_cp1_ParamLimits

0x0aee,	// (0x00000bb0) bg_tb_trans_pane_cp1

0xe2f2,	// (0x0000e3b4) grid_tb_ext_pane_ParamLimits

0xe2f2,	// (0x0000e3b4) grid_tb_ext_pane

0xe32d,	// (0x0000e3ef) cell_tb_ext_pane_ParamLimits

0xe32d,	// (0x0000e3ef) cell_tb_ext_pane

0xe355,	// (0x0000e417) cell_tb_ext_pane_g1_ParamLimits

0xe355,	// (0x0000e417) cell_tb_ext_pane_g1

0x86a4,	// (0x00008766) cell_tb_ext_pane_t1

0x0779,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x0779,	// (0x0000083b) list_highlight_pane_cp11

0xb939,	// (0x0000b9fb) popup_uni_indicator_window_ParamLimits

0xb939,	// (0x0000b9fb) popup_uni_indicator_window

0x12d4,	// (0x00001396) bg_popup_sub_pane_cp14

0x86bf,	// (0x00008781) list_uniindi_pane

0x86cb,	// (0x0000878d) uniindi_top_pane

0x0779,	// (0x0000083b) bg_uniindi_top_pane

0x86ea,	// (0x000087ac) uniindi_top_pane_g1

0x8700,	// (0x000087c2) uniindi_top_pane_g2

0x0003,

0xfcee,	// (0x0000fdb0) uniindi_top_pane_g

0x872a,	// (0x000087ec) uniindi_top_pane_t1

0x8754,	// (0x00008816) list_single_uniindi_pane_ParamLimits

0x8754,	// (0x00008816) list_single_uniindi_pane

0x65f5,	// (0x000066b7) bg_uniindi_top_pane_g1

0x8767,	// (0x00008829) list_single_uniindi_pane_g1

0x877a,	// (0x0000883c) list_single_uniindi_pane_t1

0xf4f5,	// (0x0000f5b7) control_bg_pane

0x879f,	// (0x00008861) bg_sctrl_sk_pane_cp1

0x87a8,	// (0x0000886a) bg_sctrl_sk_pane_cp2

0x87b1,	// (0x00008873) control_bg_pane_g1

0x87ba,	// (0x0000887c) control_bg_pane_g2

0x0001,

0xfcf7,	// (0x0000fdb9) control_bg_pane_g

0x5f9c,	// (0x0000605e) cell_indicator_nsta_pane_g1_ParamLimits

0xd811,	// (0x0000d8d3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa6b,	// (0x0000fb2d) cell_indicator_nsta_pane_g_ParamLimits

0x6327,	// (0x000063e9) form2_midp_time_pane_t1_ParamLimits

0x6651,	// (0x00006713) main_idle_act4_pane_ParamLimits

0x6651,	// (0x00006713) main_idle_act4_pane

0xccf8,	// (0x0000cdba) popup_tb_extension_window_ParamLimits

0xe314,	// (0x0000e3d6) tb_ext_find_pane_ParamLimits

0xe314,	// (0x0000e3d6) tb_ext_find_pane

0x87c3,	// (0x00008885) ai_gene_pane_1_cp1

0x26aa,	// (0x0000276c) ai_gene_pane_2_cp1

0x87cb,	// (0x0000888d) list_single_idle_plugin_calendar_pane

0x87d4,	// (0x00008896) list_single_idle_plugin_notification_pane

0x87dd,	// (0x0000889f) list_single_idle_plugin_player_pane

0xe372,	// (0x0000e434) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe372,	// (0x0000e434) list_single_idle_plugin_shortcut_pane

0xe39a,	// (0x0000e45c) main_idle_act4_pane_t1

0xe3b0,	// (0x0000e472) main_idle_act4_pane_t2

0x0001,

0xfcfc,	// (0x0000fdbe) main_idle_act4_pane_t

0xe3c6,	// (0x0000e488) middle_sk_idle_act4_pane_ParamLimits

0xe3c6,	// (0x0000e488) middle_sk_idle_act4_pane

0xe3e2,	// (0x0000e4a4) popup_clock_digital_analogue_window_cp2

0xe40a,	// (0x0000e4cc) shortcut_wheel_idle_act4_pane_ParamLimits

0xe40a,	// (0x0000e4cc) shortcut_wheel_idle_act4_pane

0x65f5,	// (0x000066b7) shortcut_wheel_idle_act4_pane_g1

0x65f5,	// (0x000066b7) shortcut_wheel_idle_act4_pane_g2

0x65f5,	// (0x000066b7) shortcut_wheel_idle_act4_pane_g3

0x65f5,	// (0x000066b7) shortcut_wheel_idle_act4_pane_g4

0x65f5,	// (0x000066b7) shortcut_wheel_idle_act4_pane_g5

0x8870,	// (0x00008932) shortcut_wheel_idle_act4_pane_g6

0x8878,	// (0x0000893a) shortcut_wheel_idle_act4_pane_g7

0x8880,	// (0x00008942) shortcut_wheel_idle_act4_pane_g8

0x8888,	// (0x0000894a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd01,	// (0x0000fdc3) shortcut_wheel_idle_act4_pane_g

0x6706,	// (0x000067c8) middle_sk_idle_act4_pane_g1_ParamLimits

0x6706,	// (0x000067c8) middle_sk_idle_act4_pane_g1

0xe487,	// (0x0000e549) middle_sk_idle_act4_pane_g2_ParamLimits

0xe487,	// (0x0000e549) middle_sk_idle_act4_pane_g2

0x0001,

0xfd24,	// (0x0000fde6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd24,	// (0x0000fde6) middle_sk_idle_act4_pane_g

0xe49f,	// (0x0000e561) middle_sk_idle_act4_pane_t1_ParamLimits

0xe49f,	// (0x0000e561) middle_sk_idle_act4_pane_t1

0xe4ce,	// (0x0000e590) grid_ai_shortcut_pane_ParamLimits

0xe4ce,	// (0x0000e590) grid_ai_shortcut_pane

0xe4eb,	// (0x0000e5ad) list_highlight_pane_cp16_ParamLimits

0xe4eb,	// (0x0000e5ad) list_highlight_pane_cp16

0xe4f8,	// (0x0000e5ba) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe4f8,	// (0x0000e5ba) list_single_idle_plugin_shortcut_pane_g1

0xe504,	// (0x0000e5c6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe504,	// (0x0000e5c6) list_single_idle_plugin_shortcut_pane_g2

0xe520,	// (0x0000e5e2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe520,	// (0x0000e5e2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd29,	// (0x0000fdeb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd29,	// (0x0000fdeb) list_single_idle_plugin_shortcut_pane_g

0xe535,	// (0x0000e5f7) cell_ai_shortcut_pane_ParamLimits

0xe535,	// (0x0000e5f7) cell_ai_shortcut_pane

0xe54b,	// (0x0000e60d) cell_ai_shortcut_pane_g1_ParamLimits

0xe54b,	// (0x0000e60d) cell_ai_shortcut_pane_g1

0x87c3,	// (0x00008885) ai_gene_pane_1_cp2

0x89b8,	// (0x00008a7a) ai_gene_pane_2_cp2

0x89c0,	// (0x00008a82) list_highlight_pane_cp15

0x89c9,	// (0x00008a8b) list_single_idle_plugin_calendar_pane_g1

0x89c0,	// (0x00008a82) list_highlight_pane_cp17

0x89d1,	// (0x00008a93) list_single_idle_plugin_calendar_pane_g1_copy1

0x89d9,	// (0x00008a9b) list_single_idle_plugin_player_pane_g1

0x55a5,	// (0x00005667) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd30,	// (0x0000fdf2) list_single_idle_plugin_player_pane_g

0x89e1,	// (0x00008aa3) list_single_idle_plugin_player_pane_t1

0x89ef,	// (0x00008ab1) list_single_idle_plugin_player_pane_t2

0x89fd,	// (0x00008abf) list_single_idle_plugin_player_pane_t3

0x8a0b,	// (0x00008acd) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd35,	// (0x0000fdf7) list_single_idle_plugin_player_pane_t

0x8a19,	// (0x00008adb) wait_bar_pane_cp15

0x8a21,	// (0x00008ae3) grid_ai_notification_pane

0x55a5,	// (0x00005667) list_single_idle_plugin_notification_pane_g1

0xe56d,	// (0x0000e62f) cell_ai_notification_pane_ParamLimits

0xe56d,	// (0x0000e62f) cell_ai_notification_pane

0x8a37,	// (0x00008af9) cell_ai_notification_pane_g1

0x8a3f,	// (0x00008b01) cell_ai_notification_pane_t1

0xe57a,	// (0x0000e63c) tb_ext_find_button_pane

0xe582,	// (0x0000e644) tb_ext_find_pane_g1

0xe58a,	// (0x0000e64c) tb_ext_find_pane_t1

0x1cb2,	// (0x00001d74) tb_ext_find_button_pane_g1

0x8a6b,	// (0x00008b2d) tb_ext_find_button_pane_g2

0x0001,

0xfd3e,	// (0x0000fe00) tb_ext_find_button_pane_g

0xe39a,	// (0x0000e45c) main_idle_act4_pane_t1_ParamLimits

0xe3b0,	// (0x0000e472) main_idle_act4_pane_t2_ParamLimits

0xfcfc,	// (0x0000fdbe) main_idle_act4_pane_t_ParamLimits

0xe3e2,	// (0x0000e4a4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3fa,	// (0x0000e4bc) sat_plugin_idle_act4_pane_ParamLimits

0xe3fa,	// (0x0000e4bc) sat_plugin_idle_act4_pane

0xe598,	// (0x0000e65a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe598,	// (0x0000e65a) sat_plugin_idle_act4_pane_t1

0xe5b0,	// (0x0000e672) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5b0,	// (0x0000e672) sat_plugin_idle_act4_pane_t2

0xe5c8,	// (0x0000e68a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5c8,	// (0x0000e68a) sat_plugin_idle_act4_pane_t3

0xe5e0,	// (0x0000e6a2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5e0,	// (0x0000e6a2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd43,	// (0x0000fe05) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd43,	// (0x0000fe05) sat_plugin_idle_act4_pane_t

0x01db,	// (0x0000029d) popup_battery_window_ParamLimits

0x01db,	// (0x0000029d) popup_battery_window

0x0779,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x0779,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8ac0,	// (0x00008b82) popup_battery_window_g1_ParamLimits

0x8ac0,	// (0x00008b82) popup_battery_window_g1

0x8acc,	// (0x00008b8e) popup_battery_window_t1_ParamLimits

0x8acc,	// (0x00008b8e) popup_battery_window_t1

0x8ade,	// (0x00008ba0) popup_battery_window_t2_ParamLimits

0x8ade,	// (0x00008ba0) popup_battery_window_t2

0x0001,

0xfd4c,	// (0x0000fe0e) popup_battery_window_t_ParamLimits

0xfd4c,	// (0x0000fe0e) popup_battery_window_t

0xc432,	// (0x0000c4f4) midp_canvas_pane_ParamLimits

0xc48f,	// (0x0000c551) midp_keypad_pane_ParamLimits

0xc48f,	// (0x0000c551) midp_keypad_pane

0x2aae,	// (0x00002b70) main_midp_pane_ParamLimits

0x6016,	// (0x000060d8) signal_pane_g2_cp_ParamLimits

0xe5f8,	// (0x0000e6ba) aid_size_cell_midp_keypad_ParamLimits

0xe5f8,	// (0x0000e6ba) aid_size_cell_midp_keypad

0xe616,	// (0x0000e6d8) midp_keyp_game_grid_pane_ParamLimits

0xe616,	// (0x0000e6d8) midp_keyp_game_grid_pane

0xe63d,	// (0x0000e6ff) midp_keyp_rocker_pane_ParamLimits

0xe63d,	// (0x0000e6ff) midp_keyp_rocker_pane

0xe68e,	// (0x0000e750) midp_keyp_sk_left_pane_ParamLimits

0xe68e,	// (0x0000e750) midp_keyp_sk_left_pane

0xe6e2,	// (0x0000e7a4) midp_keyp_sk_right_pane_ParamLimits

0xe6e2,	// (0x0000e7a4) midp_keyp_sk_right_pane

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp03

0xe736,	// (0x0000e7f8) midp_keyp_sk_left_pane_g1

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp04

0xe736,	// (0x0000e7f8) midp_keyp_sk_right_pane_g1

0x65f5,	// (0x000066b7) midp_keyp_rocker_pane_g1

0xe73f,	// (0x0000e801) keyp_game_cell_pane_ParamLimits

0xe73f,	// (0x0000e801) keyp_game_cell_pane

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp02

0xe763,	// (0x0000e825) keyp_game_cell_pane_g1

0xb8d4,	// (0x0000b996) popup_fep_vkb2_window_ParamLimits

0xb8d4,	// (0x0000b996) popup_fep_vkb2_window

0xe76c,	// (0x0000e82e) aid_size_cell_vkb2_ParamLimits

0xe76c,	// (0x0000e82e) aid_size_cell_vkb2

0xe7a2,	// (0x0000e864) popup_fep_vkb2_window_g1_ParamLimits

0xe7a2,	// (0x0000e864) popup_fep_vkb2_window_g1

0xe7f2,	// (0x0000e8b4) vkb2_area_bottom_pane_ParamLimits

0xe7f2,	// (0x0000e8b4) vkb2_area_bottom_pane

0xe846,	// (0x0000e908) vkb2_area_keypad_pane_ParamLimits

0xe846,	// (0x0000e908) vkb2_area_keypad_pane

0xe88e,	// (0x0000e950) vkb2_area_top_pane_ParamLimits

0xe88e,	// (0x0000e950) vkb2_area_top_pane

0xe914,	// (0x0000e9d6) vkb2_top_entry_pane_ParamLimits

0xe914,	// (0x0000e9d6) vkb2_top_entry_pane

0xe941,	// (0x0000ea03) vkb2_top_grid_left_pane_ParamLimits

0xe941,	// (0x0000ea03) vkb2_top_grid_left_pane

0xe961,	// (0x0000ea23) vkb2_top_grid_right_pane_ParamLimits

0xe961,	// (0x0000ea23) vkb2_top_grid_right_pane

0x8e5f,	// (0x00008f21) vkb2_cell_keypad_pane_ParamLimits

0x8e5f,	// (0x00008f21) vkb2_cell_keypad_pane

0xe9a7,	// (0x0000ea69) vkb2_area_bottom_grid_pane_ParamLimits

0xe9a7,	// (0x0000ea69) vkb2_area_bottom_grid_pane

0xe9d1,	// (0x0000ea93) vkb2_area_bottom_pane_g1_ParamLimits

0xe9d1,	// (0x0000ea93) vkb2_area_bottom_pane_g1

0xe9f7,	// (0x0000eab9) vkb2_area_bottom_pane_g2_ParamLimits

0xe9f7,	// (0x0000eab9) vkb2_area_bottom_pane_g2

0xea28,	// (0x0000eaea) vkb2_area_bottom_pane_g3_ParamLimits

0xea28,	// (0x0000eaea) vkb2_area_bottom_pane_g3

0x0002,

0xfd51,	// (0x0000fe13) vkb2_area_bottom_pane_g_ParamLimits

0xfd51,	// (0x0000fe13) vkb2_area_bottom_pane_g

0x9009,	// (0x000090cb) vkb2_top_cell_left_pane_ParamLimits

0x9009,	// (0x000090cb) vkb2_top_cell_left_pane

0xea92,	// (0x0000eb54) vkb2_top_entry_pane_g1_ParamLimits

0xea92,	// (0x0000eb54) vkb2_top_entry_pane_g1

0xeaa0,	// (0x0000eb62) vkb2_top_entry_pane_t1_ParamLimits

0xeaa0,	// (0x0000eb62) vkb2_top_entry_pane_t1

0x9071,	// (0x00009133) vkb2_top_entry_pane_t2_ParamLimits

0x9071,	// (0x00009133) vkb2_top_entry_pane_t2

0x90a3,	// (0x00009165) vkb2_top_entry_pane_t3_ParamLimits

0x90a3,	// (0x00009165) vkb2_top_entry_pane_t3

0x0002,

0xfd58,	// (0x0000fe1a) vkb2_top_entry_pane_t_ParamLimits

0xfd58,	// (0x0000fe1a) vkb2_top_entry_pane_t

0xead9,	// (0x0000eb9b) vkb2_top_grid_right_pane_g1_ParamLimits

0xead9,	// (0x0000eb9b) vkb2_top_grid_right_pane_g1

0x910a,	// (0x000091cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x910a,	// (0x000091cc) vkb2_top_grid_right_pane_g2

0x9122,	// (0x000091e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x9122,	// (0x000091e4) vkb2_top_grid_right_pane_g3

0xeaef,	// (0x0000ebb1) vkb2_top_grid_right_pane_g4_ParamLimits

0xeaef,	// (0x0000ebb1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5f,	// (0x0000fe21) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5f,	// (0x0000fe21) vkb2_top_grid_right_pane_g

0x9150,	// (0x00009212) vkb2_top_cell_left_pane_g1

0x9167,	// (0x00009229) vkb2_cell_keypad_pane_g1_ParamLimits

0x9167,	// (0x00009229) vkb2_cell_keypad_pane_g1

0x9175,	// (0x00009237) vkb2_cell_keypad_pane_t1_ParamLimits

0x9175,	// (0x00009237) vkb2_cell_keypad_pane_t1

0x918c,	// (0x0000924e) vkb2_cell_bottom_grid_pane_ParamLimits

0x918c,	// (0x0000924e) vkb2_cell_bottom_grid_pane

0x91c5,	// (0x00009287) vkb2_cell_bottom_grid_pane_g1

0xe42b,	// (0x0000e4ed) aid_call2_pane_cp02

0xe433,	// (0x0000e4f5) aid_call_pane_cp02

0xe43b,	// (0x0000e4fd) clock_digital_number_pane_cp10

0xe443,	// (0x0000e505) clock_digital_number_pane_cp11

0xe44b,	// (0x0000e50d) clock_digital_number_pane_cp12

0xe453,	// (0x0000e515) clock_digital_number_pane_cp13

0xe45b,	// (0x0000e51d) clock_digital_separator_pane_cp10

0x1cb2,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g1

0x1cb2,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g2

0xe463,	// (0x0000e525) popup_clock_digital_analogue_window_cp2_g3

0x1cb2,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g4

0xe463,	// (0x0000e525) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd14,	// (0x0000fdd6) popup_clock_digital_analogue_window_cp2_g

0xe46b,	// (0x0000e52d) popup_clock_digital_analogue_window_cp2_t1

0xe479,	// (0x0000e53b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd1f,	// (0x0000fde1) popup_clock_digital_analogue_window_cp2_t

0x65f5,	// (0x000066b7) clock_digital_number_pane_cp10_g1

0x65f5,	// (0x000066b7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fbc9) clock_digital_number_pane_cp10_g

0x65f5,	// (0x000066b7) clock_digital_separator_pane_cp10_g1

0x65f5,	// (0x000066b7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fbc9) clock_digital_separator_pane_cp10_g

0x870c,	// (0x000087ce) uniindi_top_pane_g3

0x871d,	// (0x000087df) uniindi_top_pane_g4

0x8eea,	// (0x00008fac) vkb2_row_keypad_pane_ParamLimits

0x8eea,	// (0x00008fac) vkb2_row_keypad_pane

0x91e1,	// (0x000092a3) vkb2_cell_t_keypad_pane_ParamLimits

0x91e1,	// (0x000092a3) vkb2_cell_t_keypad_pane

0x91f1,	// (0x000092b3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91f1,	// (0x000092b3) vkb2_cell_t_keypad_pane_cp08

0x9204,	// (0x000092c6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9204,	// (0x000092c6) vkb2_cell_t_keypad_pane_cp09

0x9218,	// (0x000092da) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9218,	// (0x000092da) vkb2_cell_t_keypad_pane_cp01

0x9229,	// (0x000092eb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9229,	// (0x000092eb) vkb2_cell_t_keypad_pane_cp02

0x923a,	// (0x000092fc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x923a,	// (0x000092fc) vkb2_cell_t_keypad_pane_cp03

0x924b,	// (0x0000930d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x924b,	// (0x0000930d) vkb2_cell_t_keypad_pane_cp04

0x925c,	// (0x0000931e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x925c,	// (0x0000931e) vkb2_cell_t_keypad_pane_cp05

0x926d,	// (0x0000932f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x926d,	// (0x0000932f) vkb2_cell_t_keypad_pane_cp06

0x927e,	// (0x00009340) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x927e,	// (0x00009340) vkb2_cell_t_keypad_pane_cp07

0x928f,	// (0x00009351) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x928f,	// (0x00009351) vkb2_cell_t_keypad_pane_cp10

0x6a87,	// (0x00006b49) vkb2_cell_t_keypad_pane_g1

0x92a4,	// (0x00009366) vkb2_cell_t_keypad_pane_t1

0xf4f5,	// (0x0000f5b7) popup_grid_graphic2_window

0xeb05,	// (0x0000ebc7) aid_size_cell_graphic2_ParamLimits

0xeb05,	// (0x0000ebc7) aid_size_cell_graphic2

0xeb43,	// (0x0000ec05) bg_popup_window_pane_cp21_ParamLimits

0xeb43,	// (0x0000ec05) bg_popup_window_pane_cp21

0xeb51,	// (0x0000ec13) graphic2_pages_pane_ParamLimits

0xeb51,	// (0x0000ec13) graphic2_pages_pane

0xeba7,	// (0x0000ec69) grid_graphic2_control_pane_ParamLimits

0xeba7,	// (0x0000ec69) grid_graphic2_control_pane

0xebef,	// (0x0000ecb1) grid_graphic2_pane_ParamLimits

0xebef,	// (0x0000ecb1) grid_graphic2_pane

0xec76,	// (0x0000ed38) cell_graphic2_pane

0xf4f5,	// (0x0000f5b7) main_comp_mode_pane

0x7e44,	// (0x00007f06) list_ai3_gene_pane_ParamLimits

0xe107,	// (0x0000e1c9) bg_popup_window_pane_cp19_ParamLimits

0x8289,	// (0x0000834b) bg_touch_area_indi_pane_ParamLimits

0x8289,	// (0x0000834b) bg_touch_area_indi_pane

0x829f,	// (0x00008361) bg_touch_area_indi_pane_cp01_ParamLimits

0x829f,	// (0x00008361) bg_touch_area_indi_pane_cp01

0x82b5,	// (0x00008377) bg_touch_area_indi_pane_cp02_ParamLimits

0x82b5,	// (0x00008377) bg_touch_area_indi_pane_cp02

0x82cb,	// (0x0000838d) bg_touch_area_indi_pane_cp03_ParamLimits

0x82cb,	// (0x0000838d) bg_touch_area_indi_pane_cp03

0x82e5,	// (0x000083a7) popup_slider_window_g1_ParamLimits

0x8301,	// (0x000083c3) popup_slider_window_g2_ParamLimits

0x831d,	// (0x000083df) popup_slider_window_g3_ParamLimits

0xfca9,	// (0x0000fd6b) popup_slider_window_g_ParamLimits

0x8383,	// (0x00008445) popup_slider_window_t1_ParamLimits

0x83f7,	// (0x000084b9) small_volume_slider_vertical_pane_ParamLimits

0xec76,	// (0x0000ed38) cell_graphic2_pane_ParamLimits

0xecd1,	// (0x0000ed93) bg_button_pane_cp10_ParamLimits

0xecd1,	// (0x0000ed93) bg_button_pane_cp10

0xece4,	// (0x0000eda6) bg_button_pane_cp11_ParamLimits

0xece4,	// (0x0000eda6) bg_button_pane_cp11

0xecf7,	// (0x0000edb9) graphic2_pages_pane_g1_ParamLimits

0xecf7,	// (0x0000edb9) graphic2_pages_pane_g1

0xed12,	// (0x0000edd4) graphic2_pages_pane_g2_ParamLimits

0xed12,	// (0x0000edd4) graphic2_pages_pane_g2

0x0001,

0xfd6d,	// (0x0000fe2f) graphic2_pages_pane_g_ParamLimits

0xfd6d,	// (0x0000fe2f) graphic2_pages_pane_g

0xed2a,	// (0x0000edec) graphic2_pages_pane_t1_ParamLimits

0xed2a,	// (0x0000edec) graphic2_pages_pane_t1

0xed42,	// (0x0000ee04) cell_graphic2_control_pane_ParamLimits

0xed42,	// (0x0000ee04) cell_graphic2_control_pane

0xed74,	// (0x0000ee36) cell_graphic2_pane_g1_ParamLimits

0xed74,	// (0x0000ee36) cell_graphic2_pane_g1

0x68a1,	// (0x00006963) cell_graphic2_pane_g2_ParamLimits

0x68a1,	// (0x00006963) cell_graphic2_pane_g2

0xed81,	// (0x0000ee43) cell_graphic2_pane_g3_ParamLimits

0xed81,	// (0x0000ee43) cell_graphic2_pane_g3

0x68ae,	// (0x00006970) cell_graphic2_pane_g4_ParamLimits

0x68ae,	// (0x00006970) cell_graphic2_pane_g4

0xed8e,	// (0x0000ee50) cell_graphic2_pane_g5_ParamLimits

0xed8e,	// (0x0000ee50) cell_graphic2_pane_g5

0x0004,

0xfd72,	// (0x0000fe34) cell_graphic2_pane_g_ParamLimits

0xfd72,	// (0x0000fe34) cell_graphic2_pane_g

0xedab,	// (0x0000ee6d) cell_graphic2_pane_t1_ParamLimits

0xedab,	// (0x0000ee6d) cell_graphic2_pane_t1

0x467e,	// (0x00004740) grid_highlight_pane_cp11_ParamLimits

0x467e,	// (0x00004740) grid_highlight_pane_cp11

0x0779,	// (0x0000083b) bg_button_pane_cp05

0xedf5,	// (0x0000eeb7) cell_graphic2_control_pane_g1

0x65f5,	// (0x000066b7) bg_touch_area_indi_pane_g1

0x957d,	// (0x0000963f) aid_cmod_rocker_key_size

0x9587,	// (0x00009649) aid_cmode_itu_key_size

0x9591,	// (0x00009653) main_cmode_video_pane

0x959b,	// (0x0000965d) main_comp_mode_itu_pane

0x95a7,	// (0x00009669) main_comp_mode_rocker_pane

0x95b3,	// (0x00009675) cell_cmode_rocker_pane_ParamLimits

0x95b3,	// (0x00009675) cell_cmode_rocker_pane

0x95c5,	// (0x00009687) cell_cmode_itu_pane_ParamLimits

0x95c5,	// (0x00009687) cell_cmode_itu_pane

0x12d4,	// (0x00001396) bg_button_pane_cp06_ParamLimits

0x12d4,	// (0x00001396) bg_button_pane_cp06

0x6a87,	// (0x00006b49) cell_cmode_rocker_pane_g1_ParamLimits

0x6a87,	// (0x00006b49) cell_cmode_rocker_pane_g1

0x856c,	// (0x0000862e) cell_cmode_rocker_pane_g2_ParamLimits

0x856c,	// (0x0000862e) cell_cmode_rocker_pane_g2

0x0001,

0xfd82,	// (0x0000fe44) cell_cmode_rocker_pane_g_ParamLimits

0xfd82,	// (0x0000fe44) cell_cmode_rocker_pane_g

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp07

0x95da,	// (0x0000969c) cell_cmode_itu_pane_g1

0x95e3,	// (0x000096a5) cell_cmode_itu_pane_t1

0x95f1,	// (0x000096b3) cell_cmode_itu_pane_t2

0x0001,

0xfd87,	// (0x0000fe49) cell_cmode_itu_pane_t

0x878f,	// (0x00008851) aid_touch_ctrl_left

0x8797,	// (0x00008859) aid_touch_ctrl_right

0xf4f5,	// (0x0000f5b7) compa_mode_pane

0xee19,	// (0x0000eedb) aid_cmod_rocker_key_size_cp

0xee23,	// (0x0000eee5) aid_cmode_itu_key_size_cp

0x9613,	// (0x000096d5) compa_mode_pane_g1

0x961b,	// (0x000096dd) compa_mode_pane_g2

0x9623,	// (0x000096e5) compa_mode_pane_g3

0x0002,

0xfd8c,	// (0x0000fe4e) compa_mode_pane_g

0xee2d,	// (0x0000eeef) main_comp_mode_itu_pane_cp

0xee35,	// (0x0000eef7) main_comp_mode_rocker_pane_cp

0xee3d,	// (0x0000eeff) cell_cmode_itu_pane_cp_ParamLimits

0xee3d,	// (0x0000eeff) cell_cmode_itu_pane_cp

0xee52,	// (0x0000ef14) cell_cmode_rocker_pane_cp_ParamLimits

0xee52,	// (0x0000ef14) cell_cmode_rocker_pane_cp

0x12d4,	// (0x00001396) bg_button_pane_cp06_cp_ParamLimits

0x12d4,	// (0x00001396) bg_button_pane_cp06_cp

0x6a87,	// (0x00006b49) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a87,	// (0x00006b49) cell_cmode_rocker_pane_g1_cp

0x65f5,	// (0x000066b7) cell_cmode_rocker_pane_g2_cp

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp07_cp

0xee64,	// (0x0000ef26) cell_cmode_itu_pane_g1_cp

0xee6d,	// (0x0000ef2f) cell_cmode_itu_pane_t1_cp

0xee6d,	// (0x0000ef2f) cell_cmode_itu_pane_t2_cp

0xd5c7,	// (0x0000d689) settings_code_pane_cp2

0x0445,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0979,	// (0x00000a3b) heading_pane_cp3_ParamLimits

0x0988,	// (0x00000a4a) listscroll_popup_graphic_pane_ParamLimits

0x665f,	// (0x00006721) fep_hwr_aid_pane_ParamLimits

0x8472,	// (0x00008534) aid_touch_sctrl_top_ParamLimits

0x847f,	// (0x00008541) sctrl_sk_top_pane_g1_ParamLimits

0x6a87,	// (0x00006b49) sctrl_sk_top_pane_g2_ParamLimits

0xfcc2,	// (0x0000fd84) sctrl_sk_top_pane_g_ParamLimits

0x848c,	// (0x0000854e) sctrl_sk_top_pane_t1_ParamLimits

0x8472,	// (0x00008534) aid_touch_sctrl_bottom_ParamLimits

0x848c,	// (0x0000854e) sctrl_sk_bottom_pane_t1_ParamLimits

0x86d8,	// (0x0000879a) aid_area_touch_clock

0xe8d6,	// (0x0000e998) aid_vkb2_area_top_pane_cell_ParamLimits

0xe8d6,	// (0x0000e998) aid_vkb2_area_top_pane_cell

0xe981,	// (0x0000ea43) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe981,	// (0x0000ea43) aid_vkb2_area_bottom_pane_cell

0x9029,	// (0x000090eb) popup_char_count_window

0x9670,	// (0x00009732) popup_char_count_window_g1

0x9679,	// (0x0000973b) popup_char_count_window_g2

0x9682,	// (0x00009744) popup_char_count_window_g3

0x0002,

0xfd93,	// (0x0000fe55) popup_char_count_window_g

0x968b,	// (0x0000974d) popup_char_count_window_t1

0x8c87,	// (0x00008d49) popup_fep_char_preview_window_ParamLimits

0x8c87,	// (0x00008d49) popup_fep_char_preview_window

0xe8f6,	// (0x0000e9b8) vkb2_top_candi_pane_ParamLimits

0xe8f6,	// (0x0000e9b8) vkb2_top_candi_pane

0xee7b,	// (0x0000ef3d) cell_vkb2_top_candi_pane_ParamLimits

0xee7b,	// (0x0000ef3d) cell_vkb2_top_candi_pane

0x3eb7,	// (0x00003f79) bg_popup_fep_char_preview_window_ParamLimits

0x3eb7,	// (0x00003f79) bg_popup_fep_char_preview_window

0x96e6,	// (0x000097a8) popup_fep_char_preview_window_t1_ParamLimits

0x96e6,	// (0x000097a8) popup_fep_char_preview_window_t1

0x9720,	// (0x000097e2) bg_popup_fep_char_preview_window_g1

0x9728,	// (0x000097ea) bg_popup_fep_char_preview_window_g2

0x9730,	// (0x000097f2) bg_popup_fep_char_preview_window_g3

0x9738,	// (0x000097fa) bg_popup_fep_char_preview_window_g4

0x9740,	// (0x00009802) bg_popup_fep_char_preview_window_g5

0x9748,	// (0x0000980a) bg_popup_fep_char_preview_window_g6

0x9750,	// (0x00009812) bg_popup_fep_char_preview_window_g7

0x9758,	// (0x0000981a) bg_popup_fep_char_preview_window_g8

0x9760,	// (0x00009822) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9a,	// (0x0000fe5c) bg_popup_fep_char_preview_window_g

0x6a87,	// (0x00006b49) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a87,	// (0x00006b49) cell_vkb2_top_candi_pane_g1

0x6df2,	// (0x00006eb4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6df2,	// (0x00006eb4) cell_vkb2_top_candi_pane_g2

0x6e13,	// (0x00006ed5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6e13,	// (0x00006ed5) cell_vkb2_top_candi_pane_g3

0x9770,	// (0x00009832) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9770,	// (0x00009832) cell_vkb2_top_candi_pane_g4

0x9791,	// (0x00009853) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9791,	// (0x00009853) cell_vkb2_top_candi_pane_g5

0x856c,	// (0x0000862e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x856c,	// (0x0000862e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdaf,	// (0x0000fe71) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdaf,	// (0x0000fe71) cell_vkb2_top_candi_pane_g

0x97b2,	// (0x00009874) cell_vkb2_top_candi_pane_t1

0x4d8b,	// (0x00004e4d) aid_size_touch_slider_mark_ParamLimits

0x4d8b,	// (0x00004e4d) aid_size_touch_slider_mark

0xeb8d,	// (0x0000ec4f) grid_graphic2_catg_pane_ParamLimits

0xeb8d,	// (0x0000ec4f) grid_graphic2_catg_pane

0xec49,	// (0x0000ed0b) popup_grid_graphic2_window_t1_ParamLimits

0xec49,	// (0x0000ed0b) popup_grid_graphic2_window_t1

0xec5f,	// (0x0000ed21) popup_grid_graphic2_window_t2_ParamLimits

0xec5f,	// (0x0000ed21) popup_grid_graphic2_window_t2

0x0001,

0xfd68,	// (0x0000fe2a) popup_grid_graphic2_window_t_ParamLimits

0xfd68,	// (0x0000fe2a) popup_grid_graphic2_window_t

0x0779,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xedf5,	// (0x0000eeb7) cell_graphic2_control_pane_g1_ParamLimits

0xeee9,	// (0x0000efab) cell_graphic2_catg_pane_ParamLimits

0xeee9,	// (0x0000efab) cell_graphic2_catg_pane

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp12

0xeefb,	// (0x0000efbd) cell_graphic2_catg_pane_g1

0x86a4,	// (0x00008766) cell_tb_ext_pane_t1_ParamLimits

0x90c7,	// (0x00009189) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90c7,	// (0x00009189) vkb2_top_cell_right_narrow_pane

0x90df,	// (0x000091a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x90df,	// (0x000091a1) vkb2_top_cell_right_wide_pane

0x6651,	// (0x00006713) bg_vkb2_func_pane_ParamLimits

0x6651,	// (0x00006713) bg_vkb2_func_pane

0x9150,	// (0x00009212) vkb2_top_cell_left_pane_g1_ParamLimits

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp03

0x91c5,	// (0x00009287) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3631,	// (0x000036f3) bg_vkb2_func_pane_g1

0x3639,	// (0x000036fb) bg_vkb2_func_pane_g2

0x3649,	// (0x0000370b) bg_vkb2_func_pane_g3

0x3641,	// (0x00003703) bg_vkb2_func_pane_g4

0x3651,	// (0x00003713) bg_vkb2_func_pane_g5

0x3659,	// (0x0000371b) bg_vkb2_func_pane_g6

0x3661,	// (0x00003723) bg_vkb2_func_pane_g7

0x3669,	// (0x0000372b) bg_vkb2_func_pane_g8

0x3629,	// (0x000036eb) bg_vkb2_func_pane_g9

0x0008,

0xfdbc,	// (0x0000fe7e) bg_vkb2_func_pane_g

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp01

0x9150,	// (0x00009212) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9150,	// (0x00009212) vkb2_top_cell_right_wide_pane_g1

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6651,	// (0x00006713) bg_vkb2_fuc_pane_cp02

0x91c5,	// (0x00009287) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x91c5,	// (0x00009287) vkb2_top_cell_right_narrow_pane_g1

0xe049,	// (0x0000e10b) aid_touch_area_decrease_ParamLimits

0xe049,	// (0x0000e10b) aid_touch_area_decrease

0xe083,	// (0x0000e145) aid_touch_area_increase_ParamLimits

0xe083,	// (0x0000e145) aid_touch_area_increase

0xe0ab,	// (0x0000e16d) aid_touch_area_mute_ParamLimits

0xe0ab,	// (0x0000e16d) aid_touch_area_mute

0xe0d3,	// (0x0000e195) aid_touch_area_slider_ParamLimits

0xe0d3,	// (0x0000e195) aid_touch_area_slider

0xe113,	// (0x0000e1d5) popup_slider_window_g4_ParamLimits

0xe113,	// (0x0000e1d5) popup_slider_window_g4

0xe13b,	// (0x0000e1fd) popup_slider_window_g5_ParamLimits

0xe13b,	// (0x0000e1fd) popup_slider_window_g5

0xe16f,	// (0x0000e231) popup_slider_window_g6_ParamLimits

0xe16f,	// (0x0000e231) popup_slider_window_g6

0x83b1,	// (0x00008473) popup_slider_window_t2_ParamLimits

0x83b1,	// (0x00008473) popup_slider_window_t2

0x0001,

0xfcb6,	// (0x0000fd78) popup_slider_window_t_ParamLimits

0xfcb6,	// (0x0000fd78) popup_slider_window_t

0xe18b,	// (0x0000e24d) slider_pane_ParamLimits

0xe18b,	// (0x0000e24d) slider_pane

0x97ec,	// (0x000098ae) slider_pane_g1_ParamLimits

0x97ec,	// (0x000098ae) slider_pane_g1

0x9800,	// (0x000098c2) slider_pane_g2_ParamLimits

0x9800,	// (0x000098c2) slider_pane_g2

0x9816,	// (0x000098d8) slider_pane_g3_ParamLimits

0x9816,	// (0x000098d8) slider_pane_g3

0x0003,

0xfdcf,	// (0x0000fe91) slider_pane_g_ParamLimits

0xfdcf,	// (0x0000fe91) slider_pane_g

0xcd40,	// (0x0000ce02) popup_tb_float_extension_window_ParamLimits

0xcd40,	// (0x0000ce02) popup_tb_float_extension_window

0x9842,	// (0x00009904) aid_size_cell_tb_float_ext

0xf4f5,	// (0x0000f5b7) bg_popup_sub_window_cp28

0x984e,	// (0x00009910) grid_tb_float_ext_pane

0x9858,	// (0x0000991a) cell_tb_float_ext_pane_ParamLimits

0x9858,	// (0x0000991a) cell_tb_float_ext_pane

0x9872,	// (0x00009934) cell_tb_float_ext_pane_g1

0x987b,	// (0x0000993d) grid_highlight_pane_cp12

0xd9e3,	// (0x0000daa5) cell_last_hwr_side_pane_ParamLimits

0xd9e3,	// (0x0000daa5) cell_last_hwr_side_pane

0x65f5,	// (0x000066b7) cell_last_hwr_side_pane_g1

0x9884,	// (0x00009946) cell_last_hwr_side_pane_g2

0x0001,

0xfdd8,	// (0x0000fe9a) cell_last_hwr_side_pane_g

0xea5d,	// (0x0000eb1f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea5d,	// (0x0000eb1f) vkb2_area_bottom_space_btn_pane

0x6a87,	// (0x00006b49) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x92a4,	// (0x00009366) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x97b2,	// (0x00009874) cell_vkb2_top_candi_pane_t1_ParamLimits

0x988d,	// (0x0000994f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x988d,	// (0x0000994f) vkb2_area_bottom_space_btn_pane_g1

0x98c7,	// (0x00009989) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x98c7,	// (0x00009989) vkb2_area_bottom_space_btn_pane_g2

0x98fd,	// (0x000099bf) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98fd,	// (0x000099bf) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfddd,	// (0x0000fe9f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfddd,	// (0x0000fe9f) vkb2_area_bottom_space_btn_pane_g

0x6714,	// (0x000067d6) cel_fep_hwr_func_pane_ParamLimits

0x6714,	// (0x000067d6) cel_fep_hwr_func_pane

0xd9b8,	// (0x0000da7a) cell_hwr_side_button_pane_ParamLimits

0xd9b8,	// (0x0000da7a) cell_hwr_side_button_pane

0x86d8,	// (0x0000879a) aid_area_touch_clock_ParamLimits

0x0779,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x86ea,	// (0x000087ac) uniindi_top_pane_g1_ParamLimits

0x8700,	// (0x000087c2) uniindi_top_pane_g2_ParamLimits

0x870c,	// (0x000087ce) uniindi_top_pane_g3_ParamLimits

0x871d,	// (0x000087df) uniindi_top_pane_g4_ParamLimits

0xfcee,	// (0x0000fdb0) uniindi_top_pane_g_ParamLimits

0x872a,	// (0x000087ec) uniindi_top_pane_t1_ParamLimits

0x0779,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x0779,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x9947,	// (0x00009a09) cel_fep_hwr_func_pane_g1_ParamLimits

0x9947,	// (0x00009a09) cel_fep_hwr_func_pane_g1

0x0779,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x0779,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x9947,	// (0x00009a09) cell_hwr_side_button_pane_g1_ParamLimits

0x9947,	// (0x00009a09) cell_hwr_side_button_pane_g1

0x341c,	// (0x000034de) status_pane_g4_ParamLimits

0x341c,	// (0x000034de) status_pane_g4

0x3436,	// (0x000034f8) status_pane_t1

0x633a,	// (0x000063fc) form2_midp_gauge_slider_cont_pane

0x6342,	// (0x00006404) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd910,	// (0x0000d9d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd922,	// (0x0000d9e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaba,	// (0x0000fb7c) form2_midp_gauge_slider_pane_t_ParamLimits

0x6378,	// (0x0000643a) form2_midp_slider_pane_ParamLimits

0x8c47,	// (0x00008d09) aid_size_cell_func_vkb2_ParamLimits

0x8c47,	// (0x00008d09) aid_size_cell_func_vkb2

0x982e,	// (0x000098f0) slider_pane_g4_ParamLimits

0x982e,	// (0x000098f0) slider_pane_g4

0xef04,	// (0x0000efc6) form2_midp_gauge_slider_pane_t2_cp01

0xef12,	// (0x0000efd4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef12,	// (0x0000efd4) form2_midp_gauge_slider_pane_t3_cp01

0x9980,	// (0x00009a42) form2_midp_slider_pane_cp01

0xf4f5,	// (0x0000f5b7) navi_smil_pane

0x99b4,	// (0x00009a76) navi_smil_pane_g1

0x99bc,	// (0x00009a7e) navi_smil_pane_t1

0x9989,	// (0x00009a4b) form2_midp_slider_pane_g1

0x9992,	// (0x00009a54) form2_midp_slider_pane_g2

0x999a,	// (0x00009a5c) form2_midp_slider_pane_g3

0x9989,	// (0x00009a4b) form2_midp_slider_pane_g4

0xef2f,	// (0x0000eff1) form2_midp_slider_pane_g5

0x0004,

0xfde6,	// (0x0000fea8) form2_midp_slider_pane_g

0x9937,	// (0x000099f9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9937,	// (0x000099f9) vkb2_area_bottom_space_btn_pane_g4

0xcf23,	// (0x0000cfe5) lc0_navi_pane_ParamLimits

0xcf23,	// (0x0000cfe5) lc0_navi_pane

0xcf8d,	// (0x0000d04f) lc0_stat_indi_pane_ParamLimits

0xcf8d,	// (0x0000d04f) lc0_stat_indi_pane

0xcfa2,	// (0x0000d064) ls0_title_pane_ParamLimits

0xcfa2,	// (0x0000d064) ls0_title_pane

0x12d4,	// (0x00001396) bg_popup_sub_pane_cp14_ParamLimits

0x86bf,	// (0x00008781) list_uniindi_pane_ParamLimits

0x86cb,	// (0x0000878d) uniindi_top_pane_ParamLimits

0x8767,	// (0x00008829) list_single_uniindi_pane_g1_ParamLimits

0x877a,	// (0x0000883c) list_single_uniindi_pane_t1_ParamLimits

0xef3a,	// (0x0000effc) lc0_stat_clock_pane_ParamLimits

0xef3a,	// (0x0000effc) lc0_stat_clock_pane

0xef47,	// (0x0000f009) lc0_stat_indi_pane_g1_ParamLimits

0xef47,	// (0x0000f009) lc0_stat_indi_pane_g1

0xef54,	// (0x0000f016) lc0_stat_indi_pane_g2_ParamLimits

0xef54,	// (0x0000f016) lc0_stat_indi_pane_g2

0x0001,

0xfdf1,	// (0x0000feb3) lc0_stat_indi_pane_g_ParamLimits

0xfdf1,	// (0x0000feb3) lc0_stat_indi_pane_g

0xef61,	// (0x0000f023) lc0_uni_indicator_pane_ParamLimits

0xef61,	// (0x0000f023) lc0_uni_indicator_pane

0xef6e,	// (0x0000f030) ls0_title_pane_g1_ParamLimits

0xef6e,	// (0x0000f030) ls0_title_pane_g1

0xef82,	// (0x0000f044) ls0_title_pane_t1_ParamLimits

0xef82,	// (0x0000f044) ls0_title_pane_t1

0xefb0,	// (0x0000f072) lc0_uni_indicator_pane_g1_ParamLimits

0xefb0,	// (0x0000f072) lc0_uni_indicator_pane_g1

0x9a5c,	// (0x00009b1e) lc0_stat_clock_pane_t1

0xf4f5,	// (0x0000f5b7) main_ai5_pane

0x9a6a,	// (0x00009b2c) ai5_sk_pane_ParamLimits

0x9a6a,	// (0x00009b2c) ai5_sk_pane

0xefd7,	// (0x0000f099) cell_ai5_widget_pane_ParamLimits

0xefd7,	// (0x0000f099) cell_ai5_widget_pane

0x9b40,	// (0x00009c02) aid_size_cell_widget_grid

0x9b56,	// (0x00009c18) bg_ai5_widget_pane_ParamLimits

0x9b56,	// (0x00009c18) bg_ai5_widget_pane

0x9bd2,	// (0x00009c94) cell_ai5_widget_pane_g2

0x9be6,	// (0x00009ca8) cell_ai5_widget_pane_g3

0x9c00,	// (0x00009cc2) cell_ai5_widget_pane_g4

0x9c10,	// (0x00009cd2) cell_ai5_widget_pane_g5

0x9c20,	// (0x00009ce2) cell_ai5_widget_pane_g6

0x9c2c,	// (0x00009cee) cell_ai5_widget_pane_g7

0x9c98,	// (0x00009d5a) cell_ai5_widget_pane_t1_ParamLimits

0x9c98,	// (0x00009d5a) cell_ai5_widget_pane_t1

0x9cb5,	// (0x00009d77) cell_ai5_widget_pane_t2_ParamLimits

0x9cb5,	// (0x00009d77) cell_ai5_widget_pane_t2

0x9ccd,	// (0x00009d8f) cell_ai5_widget_pane_t3_ParamLimits

0x9ccd,	// (0x00009d8f) cell_ai5_widget_pane_t3

0x9ce5,	// (0x00009da7) cell_ai5_widget_pane_t4_ParamLimits

0x9ce5,	// (0x00009da7) cell_ai5_widget_pane_t4

0x9d0b,	// (0x00009dcd) cell_ai5_widget_pane_t5_ParamLimits

0x9d0b,	// (0x00009dcd) cell_ai5_widget_pane_t5

0x9d2a,	// (0x00009dec) cell_ai5_widget_pane_t6_ParamLimits

0x9d2a,	// (0x00009dec) cell_ai5_widget_pane_t6

0x9d3c,	// (0x00009dfe) cell_ai5_widget_pane_t7_ParamLimits

0x9d3c,	// (0x00009dfe) cell_ai5_widget_pane_t7

0x9d5b,	// (0x00009e1d) cell_ai5_widget_pane_t8_ParamLimits

0x9d5b,	// (0x00009e1d) cell_ai5_widget_pane_t8

0x000b,

0xfe11,	// (0x0000fed3) cell_ai5_widget_pane_t_ParamLimits

0xfe11,	// (0x0000fed3) cell_ai5_widget_pane_t

0x9ddf,	// (0x00009ea1) grid_ai5_widget_pane

0x12d4,	// (0x00001396) highlight_cell_ai5_widget_pane_ParamLimits

0x12d4,	// (0x00001396) highlight_cell_ai5_widget_pane

0xf043,	// (0x0000f105) ai5_sk_left_pane

0xf04d,	// (0x0000f10f) ai5_sk_middle_pane

0xf057,	// (0x0000f119) ai5_sk_right_pane

0x9e14,	// (0x00009ed6) bg_ai5_widget_pane_g1_ParamLimits

0x9e14,	// (0x00009ed6) bg_ai5_widget_pane_g1

0x9e20,	// (0x00009ee2) bg_ai5_widget_pane_g2_ParamLimits

0x9e20,	// (0x00009ee2) bg_ai5_widget_pane_g2

0x9e2c,	// (0x00009eee) bg_ai5_widget_pane_g3_ParamLimits

0x9e2c,	// (0x00009eee) bg_ai5_widget_pane_g3

0x9e38,	// (0x00009efa) bg_ai5_widget_pane_g4_ParamLimits

0x9e38,	// (0x00009efa) bg_ai5_widget_pane_g4

0x9e44,	// (0x00009f06) bg_ai5_widget_pane_g5_ParamLimits

0x9e44,	// (0x00009f06) bg_ai5_widget_pane_g5

0x9e50,	// (0x00009f12) bg_ai5_widget_pane_g6_ParamLimits

0x9e50,	// (0x00009f12) bg_ai5_widget_pane_g6

0x9e5c,	// (0x00009f1e) bg_ai5_widget_pane_g7_ParamLimits

0x9e5c,	// (0x00009f1e) bg_ai5_widget_pane_g7

0x9e68,	// (0x00009f2a) bg_ai5_widget_pane_g8_ParamLimits

0x9e68,	// (0x00009f2a) bg_ai5_widget_pane_g8

0x9e74,	// (0x00009f36) bg_ai5_widget_pane_g9_ParamLimits

0x9e74,	// (0x00009f36) bg_ai5_widget_pane_g9

0x0008,

0xfe2a,	// (0x0000feec) bg_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0000feec) bg_ai5_widget_pane_g

0x9ea6,	// (0x00009f68) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ea6,	// (0x00009f68) cell_shortcut_ai5_widget_pane

0x2563,	// (0x00002625) bg_cell_shortcut_ai5_widget_pane

0x9eb7,	// (0x00009f79) cell_grid_ai5_widget_pane_g1

0x2563,	// (0x00002625) highlight_cell_shortcut_ai5_widget_pane

0x3639,	// (0x000036fb) ai5_sk_left_pane_g1

0x9ec0,	// (0x00009f82) ai5_sk_left_pane_g2

0x9ec8,	// (0x00009f8a) ai5_sk_left_pane_g3

0x9ed0,	// (0x00009f92) ai5_sk_left_pane_g4

0x0003,

0xfe3d,	// (0x0000feff) ai5_sk_left_pane_g

0x9ed8,	// (0x00009f9a) ai5_sk_left_pane_t1

0x3631,	// (0x000036f3) ai5_sk_right_pane_g1

0x9ee6,	// (0x00009fa8) ai5_sk_right_pane_g2

0x9eee,	// (0x00009fb0) ai5_sk_right_pane_g3

0x9ef6,	// (0x00009fb8) ai5_sk_right_pane_g4

0x0003,

0xfe46,	// (0x0000ff08) ai5_sk_right_pane_g

0x9efe,	// (0x00009fc0) ai5_sk_right_pane_t1

0x3631,	// (0x000036f3) ai5_sk_middle_pane_g1

0x3639,	// (0x000036fb) ai5_sk_middle_pane_g2

0x3651,	// (0x00003713) ai5_sk_middle_pane_g3

0x9eee,	// (0x00009fb0) ai5_sk_middle_pane_g4

0x9ec8,	// (0x00009f8a) ai5_sk_middle_pane_g5

0x9f0c,	// (0x00009fce) ai5_sk_middle_pane_g6

0xf061,	// (0x0000f123) ai5_sk_middle_pane_g7

0x0006,

0xfe4f,	// (0x0000ff11) ai5_sk_middle_pane_g

0xce0f,	// (0x0000ced1) aid_touch_area_size_lc0_ParamLimits

0xce0f,	// (0x0000ced1) aid_touch_area_size_lc0

0x6e34,	// (0x00006ef6) cell_hwr_candidate_pane_t1_ParamLimits

0x30ed,	// (0x000031af) aid_touch_navi_pane

0xd09b,	// (0x0000d15d) status_dt_navi_pane_ParamLimits

0xd09b,	// (0x0000d15d) status_dt_navi_pane

0xd0b3,	// (0x0000d175) status_dt_sta_pane_ParamLimits

0xd0b3,	// (0x0000d175) status_dt_sta_pane

0xf069,	// (0x0000f12b) dt_sta_controll_pane

0xf076,	// (0x0000f138) dt_sta_indi_pane

0xf083,	// (0x0000f145) dt_sta_title_pane

0x0779,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x0779,	// (0x0000083b) bg_dt_sta_indi_pane

0xf095,	// (0x0000f157) dt_sta_battery_pane

0xf09d,	// (0x0000f15f) dt_sta_indi_pane_g1

0x9f5e,	// (0x0000a020) dt_sta_indi_pane_g2

0x9f67,	// (0x0000a029) dt_sta_indi_pane_g3

0x0002,

0xfe5e,	// (0x0000ff20) dt_sta_indi_pane_g

0x9f70,	// (0x0000a032) dt_sta_signal_pane

0x12d4,	// (0x00001396) bg_dt_sta_title_pane_ParamLimits

0x12d4,	// (0x00001396) bg_dt_sta_title_pane

0x9f79,	// (0x0000a03b) dt_sta_title_pane_g1

0x9f81,	// (0x0000a043) dt_sta_title_pane_t1_ParamLimits

0x9f81,	// (0x0000a043) dt_sta_title_pane_t1

0xf4f5,	// (0x0000f5b7) bg_dt_sta_control_pane

0xf0a6,	// (0x0000f168) dt_sta_controll_pane_g1

0x9f9f,	// (0x0000a061) bg_dt_sta_title_pane_g1

0x9fa8,	// (0x0000a06a) bg_dt_sta_title_pane_g2

0x9fb1,	// (0x0000a073) bg_dt_sta_title_pane_g3

0x0002,

0xfe65,	// (0x0000ff27) bg_dt_sta_title_pane_g

0x65f5,	// (0x000066b7) bg_dt_sta_indi_pane_g1

0x9fba,	// (0x0000a07c) dt_sta_signal_pane_g1

0x9fc2,	// (0x0000a084) dt_sta_signal_pane_g2

0x0001,

0xfe6c,	// (0x0000ff2e) dt_sta_signal_pane_g

0x9fca,	// (0x0000a08c) dt_sta_battery_pane_g1

0x9fd3,	// (0x0000a095) dt_sta_battery_pane_t1

0x65f5,	// (0x000066b7) bg_dt_sta_control_pane_g1

0x1e9b,	// (0x00001f5d) fep_china_uni_eep_pane

0x1ea3,	// (0x00001f65) fep_china_uni_entry_pane_ParamLimits

0x1eb3,	// (0x00001f75) popup_fep_china_uni_window_g1_ParamLimits

0x1ec3,	// (0x00001f85) popup_fep_china_uni_window_g2_ParamLimits

0x1ec3,	// (0x00001f85) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0000f7b5) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0000f7b5) popup_fep_china_uni_window_g

0x9fe2,	// (0x0000a0a4) fep_china_uni_eep_pane_g1

0x9fea,	// (0x0000a0ac) fep_china_uni_eep_pane_t1

0x99ab,	// (0x00009a6d) aid_touch_area_size_smil_player

0x3243,	// (0x00003305) lc0_clock_pane

0x342a,	// (0x000034ec) status_pane_g5_ParamLimits

0x342a,	// (0x000034ec) status_pane_g5

0xc8c2,	// (0x0000c984) popup_keymap_window

0x33e8,	// (0x000034aa) status_icon_pane

0x9be6,	// (0x00009ca8) cell_ai5_widget_pane_g3_ParamLimits

0x9c00,	// (0x00009cc2) cell_ai5_widget_pane_g4_ParamLimits

0x9c10,	// (0x00009cd2) cell_ai5_widget_pane_g5_ParamLimits

0x9c38,	// (0x00009cfa) cell_ai5_widget_pane_g8_ParamLimits

0x9c38,	// (0x00009cfa) cell_ai5_widget_pane_g8

0x9c4c,	// (0x00009d0e) cell_ai5_widget_pane_g9_ParamLimits

0x9c4c,	// (0x00009d0e) cell_ai5_widget_pane_g9

0x9c60,	// (0x00009d22) cell_ai5_widget_pane_g10_ParamLimits

0x9c60,	// (0x00009d22) cell_ai5_widget_pane_g10

0x9ff9,	// (0x0000a0bb) status_icon_pane_g1

0xf4f5,	// (0x0000f5b7) bg_popup_sub_pane_cp13

0xa001,	// (0x0000a0c3) popup_keymap_window_t1

0xc5e6,	// (0x0000c6a8) control_pane_g6_ParamLimits

0xc5e6,	// (0x0000c6a8) control_pane_g6

0xc5f3,	// (0x0000c6b5) control_pane_g7_ParamLimits

0xc5f3,	// (0x0000c6b5) control_pane_g7

0xc600,	// (0x0000c6c2) control_pane_g8_ParamLimits

0xc600,	// (0x0000c6c2) control_pane_g8

0xf069,	// (0x0000f12b) dt_sta_controll_pane_ParamLimits

0xf076,	// (0x0000f138) dt_sta_indi_pane_ParamLimits

0xf083,	// (0x0000f145) dt_sta_title_pane_ParamLimits

0x0cb5,	// (0x00000d77) aid_size_touch_scroll_bar_cale

0x01ef,	// (0x000002b1) popup_discreet_window_ParamLimits

0x01ef,	// (0x000002b1) popup_discreet_window

0xb91a,	// (0x0000b9dc) popup_sk_window

0x3eb7,	// (0x00003f79) bg_popup_sub_pane_cp28_ParamLimits

0x3eb7,	// (0x00003f79) bg_popup_sub_pane_cp28

0xa00f,	// (0x0000a0d1) popup_discreet_window_g1_ParamLimits

0xa00f,	// (0x0000a0d1) popup_discreet_window_g1

0xa02f,	// (0x0000a0f1) popup_discreet_window_t1_ParamLimits

0xa02f,	// (0x0000a0f1) popup_discreet_window_t1

0xa04d,	// (0x0000a10f) popup_discreet_window_t2_ParamLimits

0xa04d,	// (0x0000a10f) popup_discreet_window_t2

0x0002,

0xfe71,	// (0x0000ff33) popup_discreet_window_t_ParamLimits

0xfe71,	// (0x0000ff33) popup_discreet_window_t

0xa09f,	// (0x0000a161) popup_sk_window_g1

0xa0a9,	// (0x0000a16b) popup_sk_window_g2

0x0001,

0xfe78,	// (0x0000ff3a) popup_sk_window_g

0xa0b1,	// (0x0000a173) popup_sk_window_t1

0xa0bf,	// (0x0000a181) popup_sk_window_t1_copy1

0x9bd2,	// (0x00009c94) cell_ai5_widget_pane_g2_ParamLimits

0x9d6d,	// (0x00009e2f) cell_ai5_widget_pane_t9_ParamLimits

0x9d6d,	// (0x00009e2f) cell_ai5_widget_pane_t9

0xf4f5,	// (0x0000f5b7) main_fep_fshwr2_pane

0xf0af,	// (0x0000f171) aid_fshwr2_btn_pane

0xf0c3,	// (0x0000f185) aid_fshwr2_syb_pane

0xf0d7,	// (0x0000f199) aid_fshwr2_txt_pane

0xf0e7,	// (0x0000f1a9) fshwr2_func_candi_pane

0xf107,	// (0x0000f1c9) fshwr2_hwr_syb_pane

0xf129,	// (0x0000f1eb) fshwr2_icf_pane

0xf4f5,	// (0x0000f5b7) fshwr2_icf_bg_pane

0xf159,	// (0x0000f21b) fshwr2_icf_pane_t1_ParamLimits

0xf159,	// (0x0000f21b) fshwr2_icf_pane_t1

0x1cb2,	// (0x00001d74) fshwr2_func_candi_pane_g1

0xf172,	// (0x0000f234) fshwr2_func_candi_row_pane_ParamLimits

0xf172,	// (0x0000f234) fshwr2_func_candi_row_pane

0xf195,	// (0x0000f257) cell_fshwr2_syb_pane_ParamLimits

0xf195,	// (0x0000f257) cell_fshwr2_syb_pane

0x9947,	// (0x00009a09) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9947,	// (0x00009a09) fshwr2_hwr_syb_pane_g1

0xf4f5,	// (0x0000f5b7) bg_popup_call_pane_cp01

0xf1bb,	// (0x0000f27d) fshwr2_func_candi_cell_pane_ParamLimits

0xf1bb,	// (0x0000f27d) fshwr2_func_candi_cell_pane

0x3c98,	// (0x00003d5a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3c98,	// (0x00003d5a) fshwr2_func_candi_cell_bg_pane

0xf206,	// (0x0000f2c8) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf206,	// (0x0000f2c8) fshwr2_func_candi_cell_pane_g1

0xf23d,	// (0x0000f2ff) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf23d,	// (0x0000f2ff) fshwr2_func_candi_cell_pane_t1

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp08

0x2aae,	// (0x00002b70) cell_fshwr2_syb_bg_pane

0xf258,	// (0x0000f31a) cell_fshwr2_syb_bg_pane_g1

0xf26b,	// (0x0000f32d) cell_fshwr2_syb_bg_pane_t1

0x12d4,	// (0x00001396) main_tmo_pane

0xd3f9,	// (0x0000d4bb) uni_indicator_pane_g1_ParamLimits

0xd40f,	// (0x0000d4d1) uni_indicator_pane_g2_ParamLimits

0xd425,	// (0x0000d4e7) uni_indicator_pane_g3_ParamLimits

0x4b69,	// (0x00004c2b) uni_indicator_pane_g4_ParamLimits

0x4b69,	// (0x00004c2b) uni_indicator_pane_g4

0x4b7d,	// (0x00004c3f) uni_indicator_pane_g5_ParamLimits

0x4b7d,	// (0x00004c3f) uni_indicator_pane_g5

0x4b7d,	// (0x00004c3f) uni_indicator_pane_g6_ParamLimits

0x4b7d,	// (0x00004c3f) uni_indicator_pane_g6

0xf8eb,	// (0x0000f9ad) uni_indicator_pane_g_ParamLimits

0xe025,	// (0x0000e0e7) popup_tmo_note_window_ParamLimits

0xe025,	// (0x0000e0e7) popup_tmo_note_window

0x12d4,	// (0x00001396) fshwr2_bg_pane

0xf22e,	// (0x0000f2f0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf22e,	// (0x0000f2f0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7d,	// (0x0000ff3f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7d,	// (0x0000ff3f) fshwr2_func_candi_cell_pane_g

0x65f5,	// (0x000066b7) bg_popup_window_pane_cp01

0xa265,	// (0x0000a327) bg_popup_window_pane_g1_cp01

0xa26e,	// (0x0000a330) bg_popup_window_pane_cp22_ParamLimits

0xa26e,	// (0x0000a330) bg_popup_window_pane_cp22

0xa27c,	// (0x0000a33e) listscroll_tmo_link_pane_ParamLimits

0xa27c,	// (0x0000a33e) listscroll_tmo_link_pane

0xa2bc,	// (0x0000a37e) popup_tmo_note_window_g1_ParamLimits

0xa2bc,	// (0x0000a37e) popup_tmo_note_window_g1

0xa2c9,	// (0x0000a38b) tmo_note_info_pane_ParamLimits

0xa2c9,	// (0x0000a38b) tmo_note_info_pane

0xf281,	// (0x0000f343) list_tmo_note_info_pane_g1_ParamLimits

0xf281,	// (0x0000f343) list_tmo_note_info_pane_g1

0xa2fa,	// (0x0000a3bc) list_tmo_note_info_pane_g2_ParamLimits

0xa2fa,	// (0x0000a3bc) list_tmo_note_info_pane_g2

0x0001,

0xfe82,	// (0x0000ff44) list_tmo_note_info_pane_g_ParamLimits

0xfe82,	// (0x0000ff44) list_tmo_note_info_pane_g

0xa316,	// (0x0000a3d8) list_tmo_note_info_text_pane_ParamLimits

0xa316,	// (0x0000a3d8) list_tmo_note_info_text_pane

0xa397,	// (0x0000a459) list_tmo_link_pane

0xa3a4,	// (0x0000a466) scroll_pane_cp20

0xa3b1,	// (0x0000a473) list_single_tmo_link_pane_ParamLimits

0xa3b1,	// (0x0000a473) list_single_tmo_link_pane

0xa3c1,	// (0x0000a483) list_single_tmo_link_pane_t1

0xa3cf,	// (0x0000a491) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3cf,	// (0x0000a491) list_tmo_note_info_text_pane_t1

0xc1db,	// (0x0000c29d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc1db,	// (0x0000c29d) aid_size_touch_scroll_bar_cp01

0xc14a,	// (0x0000c20c) aid_size_touch_slider_marker

0xb90a,	// (0x0000b9cc) popup_settings_window_ParamLimits

0xb90a,	// (0x0000b9cc) popup_settings_window

0x2b0c,	// (0x00002bce) popup_candi_list_indi_window

0x30ed,	// (0x000031af) aid_touch_navi_pane_ParamLimits

0x8446,	// (0x00008508) rs_clock_indi_pane

0x844f,	// (0x00008511) sctrl_sk_bottom_pane_ParamLimits

0x8460,	// (0x00008522) sctrl_sk_top_pane_ParamLimits

0x8ca1,	// (0x00008d63) popup_fep_tooltip_window

0x9b40,	// (0x00009c02) aid_size_cell_widget_grid_ParamLimits

0x9bbd,	// (0x00009c7f) cell_ai5_widget_pane_g1_ParamLimits

0x9bbd,	// (0x00009c7f) cell_ai5_widget_pane_g1

0x9c20,	// (0x00009ce2) cell_ai5_widget_pane_g6_ParamLimits

0x9c2c,	// (0x00009cee) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf6,	// (0x0000feb8) cell_ai5_widget_pane_g_ParamLimits

0xfdf6,	// (0x0000feb8) cell_ai5_widget_pane_g

0x9d9c,	// (0x00009e5e) cell_ai5_widget_pane_t10_ParamLimits

0x9d9c,	// (0x00009e5e) cell_ai5_widget_pane_t10

0x9ddf,	// (0x00009ea1) grid_ai5_widget_pane_ParamLimits

0x9e80,	// (0x00009f42) cell_contacts_ai5_widget_pane_ParamLimits

0x9e80,	// (0x00009f42) cell_contacts_ai5_widget_pane

0xa062,	// (0x0000a124) popup_discreet_window_t3_ParamLimits

0xa062,	// (0x0000a124) popup_discreet_window_t3

0xf145,	// (0x0000f207) popup_fshwr2_char_preview_window_ParamLimits

0xf145,	// (0x0000f207) popup_fshwr2_char_preview_window

0xf298,	// (0x0000f35a) tmo_note_info_pane_t1

0xf2ad,	// (0x0000f36f) tmo_note_info_pane_t2

0xf2c4,	// (0x0000f386) tmo_note_info_pane_t3

0xa373,	// (0x0000a435) tmo_note_info_pane_t4

0xa385,	// (0x0000a447) tmo_note_info_pane_t5

0x0004,

0xfe87,	// (0x0000ff49) tmo_note_info_pane_t

0xa397,	// (0x0000a459) list_tmo_link_pane_ParamLimits

0xa3a4,	// (0x0000a466) scroll_pane_cp20_ParamLimits

0xf4f5,	// (0x0000f5b7) bg_popup_fep_char_preview_window_cp01

0xa3e8,	// (0x0000a4aa) popup_fshwr2_char_preview_window_t1

0xa3f6,	// (0x0000a4b8) popup_candi_list_indi_window_g1

0xa3ff,	// (0x0000a4c1) bg_cell_contacts_ai5_widget_pane

0xa40b,	// (0x0000a4cd) cell_contacts_ai5_widget_pane_g1

0x7100,	// (0x000071c2) cell_contacts_ai5_widget_pane_g2

0xa420,	// (0x0000a4e2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe92,	// (0x0000ff54) cell_contacts_ai5_widget_pane_g

0xa42c,	// (0x0000a4ee) cell_contacts_ai5_widget_pane_t1

0x12d4,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa4a3,	// (0x0000a565) settings_container_pane

0x2563,	// (0x00002625) listscroll_set_pane_copy1

0x5977,	// (0x00005a39) scroll_pane_cp121_copy1

0x3c54,	// (0x00003d16) set_content_pane_copy1

0xa4af,	// (0x0000a571) aid_height_set_list_copy1_ParamLimits

0xa4af,	// (0x0000a571) aid_height_set_list_copy1

0x4e4f,	// (0x00004f11) aid_size_parent_copy1_ParamLimits

0x4e4f,	// (0x00004f11) aid_size_parent_copy1

0xa4bb,	// (0x0000a57d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa4bb,	// (0x0000a57d) button_value_adjust_pane_cp6_copy1

0x2aae,	// (0x00002b70) list_highlight_pane_cp2_copy1_ParamLimits

0x2aae,	// (0x00002b70) list_highlight_pane_cp2_copy1

0xa4cf,	// (0x0000a591) list_set_pane_copy1_ParamLimits

0xa4cf,	// (0x0000a591) list_set_pane_copy1

0xa43e,	// (0x0000a500) main_pane_set_t1_copy1_ParamLimits

0xa43e,	// (0x0000a500) main_pane_set_t1_copy1

0xa478,	// (0x0000a53a) main_pane_set_t2_copy1_ParamLimits

0xa478,	// (0x0000a53a) main_pane_set_t2_copy1

0xa57c,	// (0x0000a63e) main_pane_set_t3_copy1

0xa58a,	// (0x0000a64c) main_pane_set_t4_copy1

0xa497,	// (0x0000a559) set_content_pane_g1_copy1_ParamLimits

0xa497,	// (0x0000a559) set_content_pane_g1_copy1

0xa598,	// (0x0000a65a) setting_code_pane_copy1

0xa5a0,	// (0x0000a662) setting_slider_graphic_pane_copy1

0xa5a0,	// (0x0000a662) setting_slider_pane_copy1

0xa5a8,	// (0x0000a66a) setting_text_pane_copy1

0xa5a8,	// (0x0000a66a) setting_volume_pane_copy1

0xa598,	// (0x0000a65a) settings_code_pane_cp2_copy1

0xa5b0,	// (0x0000a672) settings_code_pane_cp_copy1_ParamLimits

0xa5b0,	// (0x0000a672) settings_code_pane_cp_copy1

0xa5c4,	// (0x0000a686) volume_set_pane_copy1

0xa5cc,	// (0x0000a68e) volume_set_pane_g10_copy1

0xa5d4,	// (0x0000a696) volume_set_pane_g1_copy1

0xa5dc,	// (0x0000a69e) volume_set_pane_g2_copy1

0xa5e4,	// (0x0000a6a6) volume_set_pane_g3_copy1

0xa5ec,	// (0x0000a6ae) volume_set_pane_g4_copy1

0xa5f4,	// (0x0000a6b6) volume_set_pane_g5_copy1

0xa5fc,	// (0x0000a6be) volume_set_pane_g6_copy1

0xa604,	// (0x0000a6c6) volume_set_pane_g7_copy1

0xa60c,	// (0x0000a6ce) volume_set_pane_g8_copy1

0xa614,	// (0x0000a6d6) volume_set_pane_g9_copy1

0x0445,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0445,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa61c,	// (0x0000a6de) setting_slider_pane_t1_copy1_ParamLimits

0xa61c,	// (0x0000a6de) setting_slider_pane_t1_copy1

0xa63b,	// (0x0000a6fd) setting_slider_pane_t2_copy1_ParamLimits

0xa63b,	// (0x0000a6fd) setting_slider_pane_t2_copy1

0xa655,	// (0x0000a717) setting_slider_pane_t3_copy1_ParamLimits

0xa655,	// (0x0000a717) setting_slider_pane_t3_copy1

0xa66d,	// (0x0000a72f) slider_set_pane_copy1_ParamLimits

0xa66d,	// (0x0000a72f) slider_set_pane_copy1

0x1403,	// (0x000014c5) set_opt_bg_pane_g1_copy2

0x140b,	// (0x000014cd) set_opt_bg_pane_g2_copy2

0xa683,	// (0x0000a745) set_opt_bg_pane_g3_copy2

0x141b,	// (0x000014dd) set_opt_bg_pane_g4_copy2

0x1423,	// (0x000014e5) set_opt_bg_pane_g5_copy2

0x142b,	// (0x000014ed) set_opt_bg_pane_g6_copy2

0xa68d,	// (0x0000a74f) set_opt_bg_pane_g7_copy2

0xa695,	// (0x0000a757) set_opt_bg_pane_g8_copy2

0xa69f,	// (0x0000a761) set_opt_bg_pane_g9_copy2

0xa6a9,	// (0x0000a76b) aid_size_touch_slider_mark_copy1_ParamLimits

0xa6a9,	// (0x0000a76b) aid_size_touch_slider_mark_copy1

0xa6bd,	// (0x0000a77f) slider_set_pane_g1_copy1

0xa6c6,	// (0x0000a788) slider_set_pane_g2_copy1

0x4db8,	// (0x00004e7a) slider_set_pane_g3_copy1_ParamLimits

0x4db8,	// (0x00004e7a) slider_set_pane_g3_copy1

0x4dcc,	// (0x00004e8e) slider_set_pane_g4_copy1_ParamLimits

0x4dcc,	// (0x00004e8e) slider_set_pane_g4_copy1

0x4de4,	// (0x00004ea6) slider_set_pane_g5_copy1_ParamLimits

0x4de4,	// (0x00004ea6) slider_set_pane_g5_copy1

0x4db8,	// (0x00004e7a) slider_set_pane_g6_copy1_ParamLimits

0x4db8,	// (0x00004e7a) slider_set_pane_g6_copy1

0xa6ce,	// (0x0000a790) slider_set_pane_g7_copy1_ParamLimits

0xa6ce,	// (0x0000a790) slider_set_pane_g7_copy1

0x01d1,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa6e4,	// (0x0000a7a6) setting_slider_graphic_pane_g1_copy1

0xa6ed,	// (0x0000a7af) setting_slider_graphic_pane_t1_copy1

0xa6fd,	// (0x0000a7bf) setting_slider_graphic_pane_t2_copy1

0xa70d,	// (0x0000a7cf) slider_set_pane_cp_copy1

0xa71d,	// (0x0000a7df) input_focus_pane_cp1_copy1

0xa726,	// (0x0000a7e8) list_set_text_pane_copy1

0xa72e,	// (0x0000a7f0) setting_text_pane_g1_copy1

0x052f,	// (0x000005f1) set_text_pane_t1_copy1

0xa71d,	// (0x0000a7df) input_focus_pane_cp2_copy1

0xa72e,	// (0x0000a7f0) setting_code_pane_g1_copy1

0xa737,	// (0x0000a7f9) setting_code_pane_t1_copy1

0x579f,	// (0x00005861) list_set_graphic_pane_copy1

0x01d1,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x226a,	// (0x0000232c) list_set_graphic_pane_g1_copy1_ParamLimits

0x226a,	// (0x0000232c) list_set_graphic_pane_g1_copy1

0xa745,	// (0x0000a807) list_set_graphic_pane_g2_copy1

0x2282,	// (0x00002344) list_set_graphic_pane_t1_copy1_ParamLimits

0x2282,	// (0x00002344) list_set_graphic_pane_t1_copy1

0x65f5,	// (0x000066b7) rs_clock_indi_pane_g1

0xa74d,	// (0x0000a80f) rs_clock_indi_pane_t1

0xa75b,	// (0x0000a81d) rs_indi_pane

0xa763,	// (0x0000a825) rs_indi_pane_g1

0xa76c,	// (0x0000a82e) rs_indi_pane_g2

0xa775,	// (0x0000a837) rs_indi_pane_g3

0x0002,

0xfe99,	// (0x0000ff5b) rs_indi_pane_g

0x2563,	// (0x00002625) bg_popup_preview_window_pane_cp03

0xa77e,	// (0x0000a840) popup_fep_tooltip_window_t1

0x7808,	// (0x000078ca) popup_note2_window_g2_ParamLimits

0x7808,	// (0x000078ca) popup_note2_window_g2

0x0001,

0xfc26,	// (0x0000fce8) popup_note2_window_g_ParamLimits

0xfc26,	// (0x0000fce8) popup_note2_window_g

0x7e0a,	// (0x00007ecc) bg_popup_sub_pane_cp11_ParamLimits

0x7e17,	// (0x00007ed9) cell_ai3_links_pane_g1_ParamLimits

0x7e2e,	// (0x00007ef0) cell_ai3_links_pane_t1

0x052f,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0xc403,	// (0x0000c4c5) cell_graphic_popup_pane_cp2_ParamLimits

0xc403,	// (0x0000c4c5) cell_graphic_popup_pane_cp2

0xa78c,	// (0x0000a84e) cell_graphic_popup_pane_g1_cp2

0x0ac8,	// (0x00000b8a) cell_graphic_popup_pane_g2_cp2

0xa794,	// (0x0000a856) cell_graphic_popup_pane_g3_cp2

0xa79c,	// (0x0000a85e) cell_graphic_popup_pane_t2_cp2

0x0ad9,	// (0x00000b9b) grid_highlight_pane_cp3_cp2

0x1991,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x12d4,	// (0x00001396) main_tmo_pane_ParamLimits

0xe019,	// (0x0000e0db) popup_tmo_big_image_note_window

0x9bac,	// (0x00009c6e) cell_ai5_widget_list_pane

0x9bb4,	// (0x00009c76) cell_ai5_widget_lrg_icon_pane

0xf298,	// (0x0000f35a) tmo_note_info_pane_t1_ParamLimits

0xf2ad,	// (0x0000f36f) tmo_note_info_pane_t2_ParamLimits

0xf2c4,	// (0x0000f386) tmo_note_info_pane_t3_ParamLimits

0xa373,	// (0x0000a435) tmo_note_info_pane_t4_ParamLimits

0xa385,	// (0x0000a447) tmo_note_info_pane_t5_ParamLimits

0xfe87,	// (0x0000ff49) tmo_note_info_pane_t_ParamLimits

0xa4a3,	// (0x0000a565) settings_container_pane_ParamLimits

0xa715,	// (0x0000a7d7) indicator_popup_pane_cp5

0xa715,	// (0x0000a7d7) indicator_popup_pane_cp6

0x579f,	// (0x00005861) list_set_graphic_pane_copy1_ParamLimits

0xf4f5,	// (0x0000f5b7) bg_popup_window_pane_cp23

0xa7aa,	// (0x0000a86c) popup_tmo_big_image_note_window_g1

0xa7b4,	// (0x0000a876) popup_tmo_big_image_note_window_t1

0xa7c4,	// (0x0000a886) popup_tmo_big_image_note_window_t2

0xa7d4,	// (0x0000a896) popup_tmo_big_image_note_window_t3

0x0002,

0xfea0,	// (0x0000ff62) popup_tmo_big_image_note_window_t

0x65f5,	// (0x000066b7) cell_ai5_widget_lrg_icon_pane_g1

0xa7e4,	// (0x0000a8a6) cell_ai5_widget_lrg_icon_pane_t1

0xa7f2,	// (0x0000a8b4) cell_ai5_widget_list_row_pane_ParamLimits

0xa7f2,	// (0x0000a8b4) cell_ai5_widget_list_row_pane

0xa809,	// (0x0000a8cb) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa809,	// (0x0000a8cb) cell_ai5_widget_list_row_pane_g1

0xa816,	// (0x0000a8d8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa816,	// (0x0000a8d8) cell_ai5_widget_list_row_pane_t1

0xa847,	// (0x0000a909) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa847,	// (0x0000a909) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea7,	// (0x0000ff69) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea7,	// (0x0000ff69) cell_ai5_widget_list_row_pane_t

0xf4f5,	// (0x0000f5b7) main_fep_vtchi_ss_pane

0xa897,	// (0x0000a959) popup_fep_char_pre_window

0xa89f,	// (0x0000a961) popup_fep_ituss_window

0xf303,	// (0x0000f3c5) popup_fep_vkbss_window

0x2aae,	// (0x00002b70) grid_vkbss_keypad_pane_ParamLimits

0x2aae,	// (0x00002b70) grid_vkbss_keypad_pane

0x2aae,	// (0x00002b70) ituss_keypad_pane

0xa917,	// (0x0000a9d9) aid_vkbss_key_offset_ParamLimits

0xa917,	// (0x0000a9d9) aid_vkbss_key_offset

0xf310,	// (0x0000f3d2) cell_vkbss_key_pane_ParamLimits

0xf310,	// (0x0000f3d2) cell_vkbss_key_pane

0xa97b,	// (0x0000aa3d) bg_cell_vkbss_key_g1_ParamLimits

0xa97b,	// (0x0000aa3d) bg_cell_vkbss_key_g1

0xf374,	// (0x0000f436) cell_vkbss_key_3p_pane_ParamLimits

0xf374,	// (0x0000f436) cell_vkbss_key_3p_pane

0xf3aa,	// (0x0000f46c) cell_vkbss_key_g1_ParamLimits

0xf3aa,	// (0x0000f46c) cell_vkbss_key_g1

0xf3e0,	// (0x0000f4a2) cell_vkbss_key_t1_ParamLimits

0xf3e0,	// (0x0000f4a2) cell_vkbss_key_t1

0xaa4f,	// (0x0000ab11) cell_ituss_key_pane_ParamLimits

0xaa4f,	// (0x0000ab11) cell_ituss_key_pane

0xaa60,	// (0x0000ab22) bg_cell_ituss_key_g1_ParamLimits

0xaa60,	// (0x0000ab22) bg_cell_ituss_key_g1

0xaa6c,	// (0x0000ab2e) cell_ituss_key_pane_g1_ParamLimits

0xaa6c,	// (0x0000ab2e) cell_ituss_key_pane_g1

0xaa80,	// (0x0000ab42) cell_ituss_key_pane_g2_ParamLimits

0xaa80,	// (0x0000ab42) cell_ituss_key_pane_g2

0x0005,

0xfeae,	// (0x0000ff70) cell_ituss_key_pane_g_ParamLimits

0xfeae,	// (0x0000ff70) cell_ituss_key_pane_g

0xab16,	// (0x0000abd8) cell_ituss_key_t1_ParamLimits

0xab16,	// (0x0000abd8) cell_ituss_key_t1

0xab50,	// (0x0000ac12) cell_ituss_key_t2_ParamLimits

0xab50,	// (0x0000ac12) cell_ituss_key_t2

0xab81,	// (0x0000ac43) cell_ituss_key_t3_ParamLimits

0xab81,	// (0x0000ac43) cell_ituss_key_t3

0xab50,	// (0x0000ac12) cell_ituss_key_t4_ParamLimits

0xab50,	// (0x0000ac12) cell_ituss_key_t4

0x0004,

0xfebb,	// (0x0000ff7d) cell_ituss_key_t_ParamLimits

0xfebb,	// (0x0000ff7d) cell_ituss_key_t

0xf43c,	// (0x0000f4fe) cell_vkbss_key_3p_pane_g1

0xf444,	// (0x0000f506) cell_vkbss_key_3p_pane_g2

0xf44c,	// (0x0000f50e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec6,	// (0x0000ff88) cell_vkbss_key_3p_pane_g

0x2563,	// (0x00002625) bg_popup_fep_char_preview_window_cp02

0xabdc,	// (0x0000ac9e) popup_fep_char_pre_window_t1

0xf039,	// (0x0000f0fb) main_ai5_sk_pane

0xa3ff,	// (0x0000a4c1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa40b,	// (0x0000a4cd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7100,	// (0x000071c2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa420,	// (0x0000a4e2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe92,	// (0x0000ff54) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa42c,	// (0x0000a4ee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x12d4,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf454,	// (0x0000f516) main_ai5_sk_pane_g1

0x3cf0,	// (0x00003db2) popup_query_code_window_g1

0xf2f4,	// (0x0000f3b6) popup_fep_vkb_icf_pane

0xa8e2,	// (0x0000a9a4) popup_fep_vtchi_icf_pane

0x2aae,	// (0x00002b70) bg_icf_pane

0x2aae,	// (0x00002b70) list_vkb_icf_pane

0xabf3,	// (0x0000acb5) bg_icf_pane_cp01

0x2563,	// (0x00002625) vtchi_icf_list_pane

0xf4a9,	// (0x0000f56b) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0000f56b) list_vkb_icf_pane_t1

0xac87,	// (0x0000ad49) vtchi_icf_list_pane_t1_ParamLimits

0xac87,	// (0x0000ad49) vtchi_icf_list_pane_t1

0xa89f,	// (0x0000a961) popup_fep_ituss_window_ParamLimits

0xa8e2,	// (0x0000a9a4) popup_fep_vtchi_icf_pane_ParamLimits

0x2aae,	// (0x00002b70) ituss_keypad_pane_ParamLimits

0xa90b,	// (0x0000a9cd) ituss_sks_pane

0x2aae,	// (0x00002b70) bg_icf_pane_ParamLimits

0xf2d9,	// (0x0000f39b) icf_edit_indi_pane_ParamLimits

0xf2d9,	// (0x0000f39b) icf_edit_indi_pane

0x2aae,	// (0x00002b70) list_vkb_icf_pane_ParamLimits

0xabf3,	// (0x0000acb5) bg_icf_pane_cp01_ParamLimits

0xa88a,	// (0x0000a94c) icf_edit_indi_pane_cp01_ParamLimits

0xa88a,	// (0x0000a94c) icf_edit_indi_pane_cp01

0xac06,	// (0x0000acc8) vtchi_query_pane

0x9947,	// (0x00009a09) icf_edit_indi_pane_g1_ParamLimits

0x9947,	// (0x00009a09) icf_edit_indi_pane_g1

0xf4c0,	// (0x0000f582) icf_edit_indi_pane_g2_ParamLimits

0xf4c0,	// (0x0000f582) icf_edit_indi_pane_g2

0x0001,

0xfef1,	// (0x0000ffb3) icf_edit_indi_pane_g_ParamLimits

0xfef1,	// (0x0000ffb3) icf_edit_indi_pane_g

0xf4d4,	// (0x0000f596) icf_edit_indi_pane_t1

0xaca5,	// (0x0000ad67) bg_input_focus_pane_cp042

0x0cac,	// (0x00000d6e) vtchi_button_pane

0xacae,	// (0x0000ad70) vtchi_query_pane_t1

0xacbc,	// (0x0000ad7e) vtchi_query_pane_t2

0xacca,	// (0x0000ad8c) vtchi_query_pane_t3

0x0002,

0xfee0,	// (0x0000ffa2) vtchi_query_pane_t

0xf4f5,	// (0x0000f5b7) bg_button_pane_cp13

0xacd8,	// (0x0000ad9a) vtchi_button_pane_g1

0xace0,	// (0x0000ada2) ituss_sks_pane_g1

0xaceb,	// (0x0000adad) ituss_sks_pane_g2

0x0001,

0xfee7,	// (0x0000ffa9) ituss_sks_pane_g

0xacf3,	// (0x0000adb5) ituss_sks_pane_t1

0xad01,	// (0x0000adc3) ituss_sks_pane_t2

0x0001,

0xfeec,	// (0x0000ffae) ituss_sks_pane_t

0x5fd7,	// (0x00006099) indicator_nsta_pane_cp_g1

0x5fe0,	// (0x000060a2) indicator_nsta_pane_cp_g2

0x5fe8,	// (0x000060aa) indicator_nsta_pane_cp_g3

0x5ff0,	// (0x000060b2) indicator_nsta_pane_cp_g4

0x5fe0,	// (0x000060a2) indicator_nsta_pane_cp_g5

0x5fe8,	// (0x000060aa) indicator_nsta_pane_cp_g6

0x0005,

0xfa70,	// (0x0000fb32) indicator_nsta_pane_cp_g

0xedd6,	// (0x0000ee98) cell_graphic2_pane_t2_ParamLimits

0xedd6,	// (0x0000ee98) cell_graphic2_pane_t2

0x0001,

0xfd7d,	// (0x0000fe3f) cell_graphic2_pane_t_ParamLimits

0xfd7d,	// (0x0000fe3f) cell_graphic2_pane_t

0xee0b,	// (0x0000eecd) cell_graphic2_control_pane_t1

0xc386,	// (0x0000c448) signal_pane_g3_ParamLimits

0xc386,	// (0x0000c448) signal_pane_g3

0xc39a,	// (0x0000c45c) signal_pane_g4_ParamLimits

0xc39a,	// (0x0000c45c) signal_pane_g4

0xa859,	// (0x0000a91b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa859,	// (0x0000a91b) cell_ai5_widget_list_row_pane_t3

0xab04,	// (0x0000abc6) cell_ituss_key_pane_t1_ParamLimits

0xab04,	// (0x0000abc6) cell_ituss_key_pane_t1

0x38f0,	// (0x000039b2) form_field_data_wide_pane_vc_t2_ParamLimits

0x38f0,	// (0x000039b2) form_field_data_wide_pane_vc_t2

0x3904,	// (0x000039c6) form_field_data_wide_pane_vc_t3_ParamLimits

0x3904,	// (0x000039c6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x0000f895) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x0000f895) form_field_data_wide_pane_vc_t

0x5c81,	// (0x00005d43) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c81,	// (0x00005d43) form_field_slider_wide_pane_vc_t3

0x5d5f,	// (0x00005e21) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d5f,	// (0x00005e21) form_field_popup_wide_pane_vc_t2

0x5d76,	// (0x00005e38) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d76,	// (0x00005e38) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa5f,	// (0x0000fb21) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0000fb21) form_field_popup_wide_pane_vc_t

0xf0af,	// (0x0000f171) aid_fshwr2_btn_pane_ParamLimits

0xf0c3,	// (0x0000f185) aid_fshwr2_syb_pane_ParamLimits

0xf0d7,	// (0x0000f199) aid_fshwr2_txt_pane_ParamLimits

0x12d4,	// (0x00001396) fshwr2_bg_pane_ParamLimits

0xf0e7,	// (0x0000f1a9) fshwr2_func_candi_pane_ParamLimits

0xf107,	// (0x0000f1c9) fshwr2_hwr_syb_pane_ParamLimits

0xf129,	// (0x0000f1eb) fshwr2_icf_pane_ParamLimits

0x5be7,	// (0x00005ca9) list_double_graphic_pane_vc_g4_ParamLimits

0x5be7,	// (0x00005ca9) list_double_graphic_pane_vc_g4

0xaaa0,	// (0x0000ab62) cell_ituss_key_pane_g3_ParamLimits

0xaaa0,	// (0x0000ab62) cell_ituss_key_pane_g3

0xabb2,	// (0x0000ac74) cell_ituss_key_t5_ParamLimits

0xabb2,	// (0x0000ac74) cell_ituss_key_t5

0xf303,	// (0x0000f3c5) popup_fep_vkbss_window_ParamLimits

0x9b37,	// (0x00009bf9) aid_cell_ai5_quarter

0xf4d4,	// (0x0000f596) icf_edit_indi_pane_t1_ParamLimits

0x0821,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0821,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2

0x0834,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0834,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2

0x3c98,	// (0x00003d5a) aid_tch_query_popup_pane_ParamLimits

0x3c98,	// (0x00003d5a) aid_tch_query_popup_pane

0x3c98,	// (0x00003d5a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3c98,	// (0x00003d5a) aid_tch_query_popup_data_pane_cp1

0x2aae,	// (0x00002b70) cell_fshwr2_syb_bg_pane_ParamLimits

0xf258,	// (0x0000f31a) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf26b,	// (0x0000f32d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2f4,	// (0x0000f3b6) popup_fep_vkb_icf_pane_ParamLimits

0xeee1,	// (0x0000efa3) bg_popup_fep_char_preview_window_g10

0x9c74,	// (0x00009d36) cell_ai5_widget_pane_g11_ParamLimits

0x9c74,	// (0x00009d36) cell_ai5_widget_pane_g11

0x9c80,	// (0x00009d42) cell_ai5_widget_pane_g12_ParamLimits

0x9c80,	// (0x00009d42) cell_ai5_widget_pane_g12

0x9c8c,	// (0x00009d4e) cell_ai5_widget_pane_g13_ParamLimits

0x9c8c,	// (0x00009d4e) cell_ai5_widget_pane_g13

0x9dbb,	// (0x00009e7d) cell_ai5_widget_pane_t11_ParamLimits

0x9dbb,	// (0x00009e7d) cell_ai5_widget_pane_t11

0x9dcd,	// (0x00009e8f) cell_ai5_widget_pane_t12_ParamLimits

0x9dcd,	// (0x00009e8f) cell_ai5_widget_pane_t12

0xaaac,	// (0x0000ab6e) cell_ituss_key_pane_g4_ParamLimits

0xaaac,	// (0x0000ab6e) cell_ituss_key_pane_g4

0xaac8,	// (0x0000ab8a) cell_ituss_key_pane_g5_ParamLimits

0xaac8,	// (0x0000ab8a) cell_ituss_key_pane_g5

0xaae4,	// (0x0000aba6) cell_ituss_key_pane_g6_ParamLimits

0xaae4,	// (0x0000aba6) cell_ituss_key_pane_g6

0x3629,	// (0x000036eb) bg_icf_pane_g1

0xf45d,	// (0x0000f51f) bg_icf_pane_g2

0xf467,	// (0x0000f529) bg_icf_pane_g3

0xf46f,	// (0x0000f531) bg_icf_pane_g4

0xf479,	// (0x0000f53b) bg_icf_pane_g5

0xf483,	// (0x0000f545) bg_icf_pane_g6

0xf48d,	// (0x0000f54f) bg_icf_pane_g7

0xf495,	// (0x0000f557) bg_icf_pane_g8

0xf49f,	// (0x0000f561) bg_icf_pane_g9

0x0008,

0xfecd,	// (0x0000ff8f) bg_icf_pane_g

0xa8f8,	// (0x0000a9ba) popup_hyb_candi_window_ParamLimits

0xa8f8,	// (0x0000a9ba) popup_hyb_candi_window

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp01_ParamLimits

0x37d7,	// (0x00003899) bg_popup_sub_pane_cp01

0xad3c,	// (0x0000adfe) entry_hyb_candi_pane_ParamLimits

0xad3c,	// (0x0000adfe) entry_hyb_candi_pane

0xad4b,	// (0x0000ae0d) grid_hyb_candi_pane_ParamLimits

0xad4b,	// (0x0000ae0d) grid_hyb_candi_pane

0xad60,	// (0x0000ae22) grid_hyb_phrase_pane_ParamLimits

0xad60,	// (0x0000ae22) grid_hyb_phrase_pane

0xad6f,	// (0x0000ae31) cell_hyb_candi_pane_ParamLimits

0xad6f,	// (0x0000ae31) cell_hyb_candi_pane

0xad92,	// (0x0000ae54) cell_hyb_candi_scroll_pane

0x1cb2,	// (0x00001d74) cell_hyb_candi_pane_g1

0xad9b,	// (0x0000ae5d) cell_hyb_candi_pane_t1

0xada9,	// (0x0000ae6b) cell_hyb_phrase_pane

0x1cb2,	// (0x00001d74) cell_hyb_phrase_pane_g1

0xadb2,	// (0x0000ae74) cell_hyb_phrase_pane_t1

0xadc0,	// (0x0000ae82) entry_hyb_candi_pane_t1

0x2563,	// (0x00002625) input_focus_pane_cp06

0xadce,	// (0x0000ae90) cell_hyb_candi_scroll_pane_g1

0xadd6,	// (0x0000ae98) cell_hyb_candi_scroll_pane_g1_aid

0xadde,	// (0x0000aea0) cell_hyb_candi_scroll_pane_g2

0xade6,	// (0x0000aea8) cell_hyb_candi_scroll_pane_g2_aid

0xadee,	// (0x0000aeb0) cell_hyb_candi_scroll_pane_g3

0xadf6,	// (0x0000aeb8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

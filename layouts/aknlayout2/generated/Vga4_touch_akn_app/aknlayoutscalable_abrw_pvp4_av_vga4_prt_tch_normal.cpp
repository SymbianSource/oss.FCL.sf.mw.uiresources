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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cdf3 };

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
0x74ae,	// (0x000142a1) Screen

0x74ba,	// (0x000142ad) application_window_ParamLimits

0x74ba,	// (0x000142ad) application_window

0x3454,	// (0x00010247) screen_g1

0x4f10,	// (0x00011d03) area_bottom_pane_ParamLimits

0x4f10,	// (0x00011d03) area_bottom_pane

0x4fd0,	// (0x00011dc3) area_top_pane_ParamLimits

0x4fd0,	// (0x00011dc3) area_top_pane

0x506e,	// (0x00011e61) main_pane_ParamLimits

0x506e,	// (0x00011e61) main_pane

0x35cd,	// (0x000103c0) misc_graphics

0x89df,	// (0x000157d2) battery_pane_ParamLimits

0x89df,	// (0x000157d2) battery_pane

0x97a6,	// (0x00016599) bg_status_flat_pane_g8

0x97ae,	// (0x000165a1) bg_status_flat_pane_g9

0x8aa1,	// (0x00015894) context_pane_ParamLimits

0x8aa1,	// (0x00015894) context_pane

0x8bc5,	// (0x000159b8) navi_pane_ParamLimits

0x8bc5,	// (0x000159b8) navi_pane

0x8c55,	// (0x00015a48) signal_pane_ParamLimits

0x8c55,	// (0x00015a48) signal_pane

0x0008,

0xf874,	// (0x0001c667) bg_status_flat_pane_g

0x8cc2,	// (0x00015ab5) status_pane_g1_ParamLimits

0x8cc2,	// (0x00015ab5) status_pane_g1

0x8cce,	// (0x00015ac1) status_pane_g2_ParamLimits

0x8cce,	// (0x00015ac1) status_pane_g2

0x8cda,	// (0x00015acd) status_pane_g3_ParamLimits

0x8cda,	// (0x00015acd) status_pane_g3

0x0004,

0xf79b,	// (0x0001c58e) status_pane_g_ParamLimits

0xf79b,	// (0x0001c58e) status_pane_g

0x8d0e,	// (0x00015b01) title_pane_ParamLimits

0x8d0e,	// (0x00015b01) title_pane

0x8d4d,	// (0x00015b40) uni_indicator_pane_ParamLimits

0x8d4d,	// (0x00015b40) uni_indicator_pane

0x8901,	// (0x000156f4) bg_list_pane_ParamLimits

0x8901,	// (0x000156f4) bg_list_pane

0x8921,	// (0x00015714) find_pane

0x8929,	// (0x0001571c) listscroll_app_pane_ParamLimits

0x8929,	// (0x0001571c) listscroll_app_pane

0x8935,	// (0x00015728) listscroll_form_pane

0x5973,	// (0x00012766) listscroll_gen_pane_ParamLimits

0x5973,	// (0x00012766) listscroll_gen_pane

0x5987,	// (0x0001277a) listscroll_set_pane

0x7e3b,	// (0x00014c2e) main_idle_act_pane

0x85fa,	// (0x000153ed) main_idle_trad_pane

0x85fa,	// (0x000153ed) main_list_empty_pane

0x8929,	// (0x0001571c) main_midp_pane

0x894f,	// (0x00015742) main_pane_g1_ParamLimits

0x894f,	// (0x00015742) main_pane_g1

0x599d,	// (0x00012790) popup_ai_message_window_ParamLimits

0x599d,	// (0x00012790) popup_ai_message_window

0x5a51,	// (0x00012844) popup_fep_china_uni_window_ParamLimits

0x5a51,	// (0x00012844) popup_fep_china_uni_window

0x5ab1,	// (0x000128a4) popup_fep_japan_candidate_window_ParamLimits

0x5ab1,	// (0x000128a4) popup_fep_japan_candidate_window

0x5adb,	// (0x000128ce) popup_fep_japan_predictive_window_ParamLimits

0x5adb,	// (0x000128ce) popup_fep_japan_predictive_window

0x5b11,	// (0x00012904) popup_find_window

0x5b1e,	// (0x00012911) popup_grid_graphic_window_ParamLimits

0x5b1e,	// (0x00012911) popup_grid_graphic_window

0x5b4c,	// (0x0001293f) popup_large_graphic_colour_window

0x5b72,	// (0x00012965) popup_menu_window_ParamLimits

0x5b72,	// (0x00012965) popup_menu_window

0x5d3c,	// (0x00012b2f) popup_note_image_window

0x5d26,	// (0x00012b19) popup_note_wait_window_ParamLimits

0x5d26,	// (0x00012b19) popup_note_wait_window

0x5d26,	// (0x00012b19) popup_note_window_ParamLimits

0x5d26,	// (0x00012b19) popup_note_window

0x5da2,	// (0x00012b95) popup_query_code_window_ParamLimits

0x5da2,	// (0x00012b95) popup_query_code_window

0x5db8,	// (0x00012bab) popup_query_data_code_window_ParamLimits

0x5db8,	// (0x00012bab) popup_query_data_code_window

0x5ddb,	// (0x00012bce) popup_query_data_window_ParamLimits

0x5ddb,	// (0x00012bce) popup_query_data_window

0x5dfd,	// (0x00012bf0) popup_query_sat_info_window_ParamLimits

0x5dfd,	// (0x00012bf0) popup_query_sat_info_window

0x5e3c,	// (0x00012c2f) popup_snote_single_graphic_window_ParamLimits

0x5e3c,	// (0x00012c2f) popup_snote_single_graphic_window

0x5e3c,	// (0x00012c2f) popup_snote_single_text_window_ParamLimits

0x5e3c,	// (0x00012c2f) popup_snote_single_text_window

0x5e53,	// (0x00012c46) popup_sub_window_general

0x5f99,	// (0x00012d8c) popup_window_general_ParamLimits

0x5f99,	// (0x00012d8c) popup_window_general

0x8965,	// (0x00015758) power_save_pane

0x57ed,	// (0x000125e0) control_pane_g1_ParamLimits

0x57ed,	// (0x000125e0) control_pane_g1

0x5816,	// (0x00012609) control_pane_g2_ParamLimits

0x5816,	// (0x00012609) control_pane_g2

0x88c4,	// (0x000156b7) control_pane_g3_ParamLimits

0x88c4,	// (0x000156b7) control_pane_g3

0x0007,

0xf783,	// (0x0001c576) control_pane_g_ParamLimits

0xf783,	// (0x0001c576) control_pane_g

0x5862,	// (0x00012655) control_pane_t1_ParamLimits

0x5862,	// (0x00012655) control_pane_t1

0x58bc,	// (0x000126af) control_pane_t2_ParamLimits

0x58bc,	// (0x000126af) control_pane_t2

0x0002,

0xf794,	// (0x0001c587) control_pane_t_ParamLimits

0xf794,	// (0x0001c587) control_pane_t

0x87e9,	// (0x000155dc) navi_navi_volume_pane_cp1

0x87f1,	// (0x000155e4) status_small_icon_pane

0x87f9,	// (0x000155ec) status_small_pane_g1_ParamLimits

0x87f9,	// (0x000155ec) status_small_pane_g1

0x882d,	// (0x00015620) status_small_pane_g2_ParamLimits

0x882d,	// (0x00015620) status_small_pane_g2

0x8839,	// (0x0001562c) status_small_pane_g3_ParamLimits

0x8839,	// (0x0001562c) status_small_pane_g3

0x8845,	// (0x00015638) status_small_pane_g4_ParamLimits

0x8845,	// (0x00015638) status_small_pane_g4

0x8851,	// (0x00015644) status_small_pane_g5_ParamLimits

0x8851,	// (0x00015644) status_small_pane_g5

0x885f,	// (0x00015652) status_small_pane_g6_ParamLimits

0x885f,	// (0x00015652) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c565) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c565) status_small_pane_g

0x888e,	// (0x00015681) status_small_pane_t1

0x88b0,	// (0x000156a3) status_small_wait_pane_ParamLimits

0x88b0,	// (0x000156a3) status_small_wait_pane

0x7fea,	// (0x00014ddd) aid_levels_signal_ParamLimits

0x7fea,	// (0x00014ddd) aid_levels_signal

0x7ff9,	// (0x00014dec) signal_pane_g1_ParamLimits

0x7ff9,	// (0x00014dec) signal_pane_g1

0x800e,	// (0x00014e01) signal_pane_g2_ParamLimits

0x800e,	// (0x00014e01) signal_pane_g2

0x0003,

0xf703,	// (0x0001c4f6) signal_pane_g_ParamLimits

0xf703,	// (0x0001c4f6) signal_pane_g

0x803f,	// (0x00014e32) context_pane_g1

0x74ca,	// (0x000142bd) title_pane_g1

0x74fc,	// (0x000142ef) title_pane_t1

0x3637,	// (0x0001042a) title_pane_t2

0x365d,	// (0x00010450) title_pane_t3

0x0002,

0xf557,	// (0x0001c34a) title_pane_t

0x8d65,	// (0x00015b58) aid_levels_battery_ParamLimits

0x8d65,	// (0x00015b58) aid_levels_battery

0x8d76,	// (0x00015b69) battery_pane_g1_ParamLimits

0x8d76,	// (0x00015b69) battery_pane_g1

0x8d8c,	// (0x00015b7f) battery_pane_g2_ParamLimits

0x8d8c,	// (0x00015b7f) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c599) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c599) battery_pane_g

0xa0f0,	// (0x00016ee3) uni_indicator_pane_g1

0xa103,	// (0x00016ef6) uni_indicator_pane_g2

0xa115,	// (0x00016f08) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001c70f) uni_indicator_pane_g

0x8474,	// (0x00015267) navi_icon_pane_ParamLimits

0x8474,	// (0x00015267) navi_icon_pane

0x83b0,	// (0x000151a3) navi_midp_pane

0x8490,	// (0x00015283) navi_navi_pane

0x849a,	// (0x0001528d) navi_text_pane_ParamLimits

0x849a,	// (0x0001528d) navi_text_pane

0x3454,	// (0x00010247) status_small_wait_pane_g1

0x3a2b,	// (0x0001081e) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001c70a) status_small_wait_pane_g

0x9e03,	// (0x00016bf6) navi_navi_icon_text_pane

0x9e0b,	// (0x00016bfe) navi_navi_pane_g1_ParamLimits

0x9e0b,	// (0x00016bfe) navi_navi_pane_g1

0x9e1d,	// (0x00016c10) navi_navi_pane_g2_ParamLimits

0x9e1d,	// (0x00016c10) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001c6d8) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001c6d8) navi_navi_pane_g

0x9e2f,	// (0x00016c22) navi_navi_tabs_pane

0x9e38,	// (0x00016c2b) navi_navi_text_pane

0x9e03,	// (0x00016bf6) navi_navi_volume_pane

0x9ddf,	// (0x00016bd2) navi_text_pane_t1

0x9dd3,	// (0x00016bc6) navi_icon_pane_g1

0x9d26,	// (0x00016b19) navi_navi_text_pane_t1

0x62c2,	// (0x000130b5) navi_navi_volume_pane_g1

0x62ca,	// (0x000130bd) volume_small_pane

0x9c8c,	// (0x00016a7f) navi_navi_icon_text_pane_g1

0x9c94,	// (0x00016a87) navi_navi_icon_text_pane_t1

0x8490,	// (0x00015283) navi_tabs_2_long_pane

0x8490,	// (0x00015283) navi_tabs_2_pane

0x8490,	// (0x00015283) navi_tabs_3_long_pane

0x8490,	// (0x00015283) navi_tabs_3_pane

0x8490,	// (0x00015283) navi_tabs_4_pane

0x62a2,	// (0x00013095) tabs_2_active_pane_ParamLimits

0x62a2,	// (0x00013095) tabs_2_active_pane

0x62b2,	// (0x000130a5) tabs_2_passive_pane_ParamLimits

0x62b2,	// (0x000130a5) tabs_2_passive_pane

0x6270,	// (0x00013063) tabs_3_active_pane_ParamLimits

0x6270,	// (0x00013063) tabs_3_active_pane

0x6280,	// (0x00013073) tabs_3_passive_pane_ParamLimits

0x6280,	// (0x00013073) tabs_3_passive_pane

0x6291,	// (0x00013084) tabs_3_passive_pane_cp_ParamLimits

0x6291,	// (0x00013084) tabs_3_passive_pane_cp

0x6224,	// (0x00013017) tabs_4_active_pane_ParamLimits

0x6224,	// (0x00013017) tabs_4_active_pane

0x6237,	// (0x0001302a) tabs_4_passive_pane_ParamLimits

0x6237,	// (0x0001302a) tabs_4_passive_pane

0x6248,	// (0x0001303b) tabs_4_passive_pane_cp_ParamLimits

0x6248,	// (0x0001303b) tabs_4_passive_pane_cp

0x6259,	// (0x0001304c) tabs_4_passive_pane_cp2_ParamLimits

0x6259,	// (0x0001304c) tabs_4_passive_pane_cp2

0x6200,	// (0x00012ff3) tabs_2_long_active_pane_ParamLimits

0x6200,	// (0x00012ff3) tabs_2_long_active_pane

0x6212,	// (0x00013005) tabs_2_long_passive_pane_ParamLimits

0x6212,	// (0x00013005) tabs_2_long_passive_pane

0x61c1,	// (0x00012fb4) tabs_3_long_active_pane_ParamLimits

0x61c1,	// (0x00012fb4) tabs_3_long_active_pane

0x61d4,	// (0x00012fc7) tabs_3_long_passive_pane_ParamLimits

0x61d4,	// (0x00012fc7) tabs_3_long_passive_pane

0x61ed,	// (0x00012fe0) tabs_3_long_passive_pane_cp_ParamLimits

0x61ed,	// (0x00012fe0) tabs_3_long_passive_pane_cp

0x6167,	// (0x00012f5a) volume_small_pane_g1

0x6170,	// (0x00012f63) volume_small_pane_g2

0x6179,	// (0x00012f6c) volume_small_pane_g3

0x6182,	// (0x00012f75) volume_small_pane_g4

0x618b,	// (0x00012f7e) volume_small_pane_g5

0x6194,	// (0x00012f87) volume_small_pane_g6

0x619d,	// (0x00012f90) volume_small_pane_g7

0x61a6,	// (0x00012f99) volume_small_pane_g8

0x61af,	// (0x00012fa2) volume_small_pane_g9

0x61b8,	// (0x00012fab) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001c6a4) volume_small_pane_g

0x3687,	// (0x0001047a) bg_active_tab_pane_cp2_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp2

0x7564,	// (0x00014357) tabs_3_active_pane_g1

0x756c,	// (0x0001435f) tabs_3_active_pane_t1

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp2_ParamLimits

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp2

0x7564,	// (0x00014357) tabs_3_passive_pane_g1

0x756c,	// (0x0001435f) tabs_3_passive_pane_t1

0x3687,	// (0x0001047a) bg_active_tab_pane_cp3_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp3

0x757e,	// (0x00014371) tabs_4_active_pane_g1

0x7586,	// (0x00014379) tabs_4_active_pane_t1

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp3_ParamLimits

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp3

0x757e,	// (0x00014371) tabs_4_1_passive_pane_g1

0x7586,	// (0x00014379) tabs_4_1_passive_pane_t1

0x8929,	// (0x0001571c) list_highlight_pane_cp2

0xa386,	// (0x00017179) list_set_pane_ParamLimits

0xa386,	// (0x00017179) list_set_pane

0xa448,	// (0x0001723b) main_pane_set_t1_ParamLimits

0xa448,	// (0x0001723b) main_pane_set_t1

0xa468,	// (0x0001725b) main_pane_set_t2_ParamLimits

0xa468,	// (0x0001725b) main_pane_set_t2

0xa47c,	// (0x0001726f) main_pane_set_t3_ParamLimits

0xa47c,	// (0x0001726f) main_pane_set_t3

0xa490,	// (0x00017283) main_pane_set_t4_ParamLimits

0xa490,	// (0x00017283) main_pane_set_t4

0x0003,

0xf981,	// (0x0001c774) main_pane_set_t_ParamLimits

0xf981,	// (0x0001c774) main_pane_set_t

0xa4a4,	// (0x00017297) setting_code_pane

0xa4ae,	// (0x000172a1) setting_slider_graphic_pane

0xa4ae,	// (0x000172a1) setting_slider_pane

0xa4ae,	// (0x000172a1) setting_text_pane

0xa4ae,	// (0x000172a1) setting_volume_pane

0x52cd,	// (0x000120c0) volume_set_pane

0x3687,	// (0x0001047a) bg_set_opt_pane_cp

0x52d7,	// (0x000120ca) setting_slider_pane_t1

0x52f0,	// (0x000120e3) setting_slider_pane_t2

0x530a,	// (0x000120fd) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c351) setting_slider_pane_t

0x5322,	// (0x00012115) slider_set_pane

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp2

0x36f6,	// (0x000104e9) setting_slider_graphic_pane_g1

0x5338,	// (0x0001212b) setting_slider_graphic_pane_t1

0x5348,	// (0x0001213b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c358) setting_slider_graphic_pane_t

0x5358,	// (0x0001214b) slider_set_pane_cp

0x35cd,	// (0x000103c0) input_focus_pane_cp1

0xa347,	// (0x0001713a) list_set_text_pane

0x3454,	// (0x00010247) setting_text_pane_g1

0x35cd,	// (0x000103c0) input_focus_pane_cp2

0x3454,	// (0x00010247) setting_code_pane_g1

0x3727,	// (0x0001051a) setting_code_pane_t1

0x3735,	// (0x00010528) set_text_pane_t1_ParamLimits

0x3735,	// (0x00010528) set_text_pane_t1

0x3ea9,	// (0x00010c9c) set_opt_bg_pane_g1

0x3eb1,	// (0x00010ca4) set_opt_bg_pane_g2

0xa31f,	// (0x00017112) set_opt_bg_pane_g3

0x3ec1,	// (0x00010cb4) set_opt_bg_pane_g4

0x3ec9,	// (0x00010cbc) set_opt_bg_pane_g5

0x3ed1,	// (0x00010cc4) set_opt_bg_pane_g6

0xa329,	// (0x0001711c) set_opt_bg_pane_g7

0xa333,	// (0x00017126) set_opt_bg_pane_g8

0xa33d,	// (0x00017130) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001c761) set_opt_bg_pane_g

0xa312,	// (0x00017105) slider_set_pane_g1

0x634b,	// (0x0001313e) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001c752) slider_set_pane_g

0x62d3,	// (0x000130c6) volume_set_pane_g1

0x62dd,	// (0x000130d0) volume_set_pane_g2

0x62e7,	// (0x000130da) volume_set_pane_g3

0x62f1,	// (0x000130e4) volume_set_pane_g4

0x62fb,	// (0x000130ee) volume_set_pane_g5

0x6305,	// (0x000130f8) volume_set_pane_g6

0x630f,	// (0x00013102) volume_set_pane_g7

0x6319,	// (0x0001310c) volume_set_pane_g8

0x6323,	// (0x00013116) volume_set_pane_g9

0x632d,	// (0x00013120) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001c72a) volume_set_pane_g

0x7598,	// (0x0001438b) indicator_pane_ParamLimits

0x7598,	// (0x0001438b) indicator_pane

0x75a4,	// (0x00014397) main_idle_pane_g2_ParamLimits

0x75a4,	// (0x00014397) main_idle_pane_g2

0x75cc,	// (0x000143bf) main_pane_idle_g1_ParamLimits

0x75cc,	// (0x000143bf) main_pane_idle_g1

0x374f,	// (0x00010542) popup_clock_digital_analogue_window_ParamLimits

0x374f,	// (0x00010542) popup_clock_digital_analogue_window

0x75da,	// (0x000143cd) soft_indicator_pane_ParamLimits

0x75da,	// (0x000143cd) soft_indicator_pane

0x75e8,	// (0x000143db) wallpaper_pane_ParamLimits

0x75e8,	// (0x000143db) wallpaper_pane

0x3454,	// (0x00010247) wallpaper_pane_g1

0x75f4,	// (0x000143e7) indicator_pane_g1_ParamLimits

0x75f4,	// (0x000143e7) indicator_pane_g1

0xa813,	// (0x00017606) navi_navi_icon_text_pane_srt_g1

0x377d,	// (0x00010570) soft_indicator_pane_t1

0x3797,	// (0x0001058a) aid_ps_area_pane

0x7600,	// (0x000143f3) aid_ps_clock_pane

0x37a8,	// (0x0001059b) aid_ps_indicator_pane

0x37b4,	// (0x000105a7) indicator_ps_pane_ParamLimits

0x37b4,	// (0x000105a7) indicator_ps_pane

0x37c3,	// (0x000105b6) power_save_pane_g1_ParamLimits

0x37c3,	// (0x000105b6) power_save_pane_g1

0x37cf,	// (0x000105c2) power_save_pane_g2_ParamLimits

0x37cf,	// (0x000105c2) power_save_pane_g2

0x4ec4,	// (0x00011cb7) aid_navinavi_width_pane

0x3797,	// (0x0001058a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c35d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c35d) power_save_pane_g

0x37dd,	// (0x000105d0) power_save_pane_t1_ParamLimits

0x37dd,	// (0x000105d0) power_save_pane_t1

0x7600,	// (0x000143f3) aid_ps_clock_pane_ParamLimits

0x37a8,	// (0x0001059b) aid_ps_indicator_pane_ParamLimits

0x37ef,	// (0x000105e2) power_save_pane_t4_ParamLimits

0x37ef,	// (0x000105e2) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c362) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c362) power_save_pane_t

0x3819,	// (0x0001060c) power_save_t3_ParamLimits

0x3819,	// (0x0001060c) power_save_t3

0x3804,	// (0x000105f7) power_save_t2_ParamLimits

0x3804,	// (0x000105f7) power_save_t2

0x382e,	// (0x00010621) indicator_ps_pane_g1

0x760e,	// (0x00014401) ai_gene_pane_ParamLimits

0x760e,	// (0x00014401) ai_gene_pane

0x761a,	// (0x0001440d) ai_links_pane_ParamLimits

0x761a,	// (0x0001440d) ai_links_pane

0x7626,	// (0x00014419) indicator_pane_cp1_ParamLimits

0x7626,	// (0x00014419) indicator_pane_cp1

0x7632,	// (0x00014425) main_pane_idle_g1_cp_ParamLimits

0x7632,	// (0x00014425) main_pane_idle_g1_cp

0x3837,	// (0x0001062a) popup_ai_links_title_window

0x763e,	// (0x00014431) soft_indicator_pane_cp1_ParamLimits

0x763e,	// (0x00014431) soft_indicator_pane_cp1

0xa0de,	// (0x00016ed1) ai_links_pane_g1

0xa0e7,	// (0x00016eda) grid_ai_links_pane

0xa0c3,	// (0x00016eb6) ai_gene_pane_1

0xa0cc,	// (0x00016ebf) ai_gene_pane_2

0xa0d5,	// (0x00016ec8) list_highlight_pane_cp4

0xa0a3,	// (0x00016e96) cell_ai_link_pane_ParamLimits

0xa0a3,	// (0x00016e96) cell_ai_link_pane

0xa09b,	// (0x00016e8e) cell_ai_link_pane_g1

0x3a2b,	// (0x0001081e) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001c705) cell_ai_link_pane_g

0x35cd,	// (0x000103c0) grid_highlight_cp2

0x35cd,	// (0x000103c0) bg_popup_sub_pane_cp1

0x384e,	// (0x00010641) popup_ai_links_title_window_t1

0x9fe7,	// (0x00016dda) ai_gene_pane_1_g1_ParamLimits

0x9fe7,	// (0x00016dda) ai_gene_pane_1_g1

0x9ff3,	// (0x00016de6) ai_gene_pane_1_g2_ParamLimits

0x9ff3,	// (0x00016de6) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001c6fb) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001c6fb) ai_gene_pane_1_g

0xa000,	// (0x00016df3) ai_gene_pane_1_t1_ParamLimits

0xa000,	// (0x00016df3) ai_gene_pane_1_t1

0xa034,	// (0x00016e27) grid_ai_soft_ind_pane

0x9fd2,	// (0x00016dc5) ai_gene_pane_2_t1_ParamLimits

0x9fd2,	// (0x00016dc5) ai_gene_pane_2_t1

0x764a,	// (0x0001443d) main_pane_empty_t1_ParamLimits

0x764a,	// (0x0001443d) main_pane_empty_t1

0x7662,	// (0x00014455) main_pane_empty_t2_ParamLimits

0x7662,	// (0x00014455) main_pane_empty_t2

0x7677,	// (0x0001446a) main_pane_empty_t3_ParamLimits

0x7677,	// (0x0001446a) main_pane_empty_t3

0x7689,	// (0x0001447c) main_pane_empty_t4_ParamLimits

0x7689,	// (0x0001447c) main_pane_empty_t4

0x769b,	// (0x0001448e) main_pane_empty_t5_ParamLimits

0x769b,	// (0x0001448e) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c367) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c367) main_pane_empty_t

0x3f29,	// (0x00010d1c) bg_popup_window_pane_ParamLimits

0x3f29,	// (0x00010d1c) bg_popup_window_pane

0x9d34,	// (0x00016b27) find_popup_pane_cp2_ParamLimits

0x9d34,	// (0x00016b27) find_popup_pane_cp2

0x9d40,	// (0x00016b33) heading_pane_ParamLimits

0x9d40,	// (0x00016b33) heading_pane

0x35cd,	// (0x000103c0) bg_popup_sub_pane

0x9cae,	// (0x00016aa1) bg_popup_window_pane_g1_ParamLimits

0x9cae,	// (0x00016aa1) bg_popup_window_pane_g1

0x9cba,	// (0x00016aad) bg_popup_window_pane_g2_ParamLimits

0x9cba,	// (0x00016aad) bg_popup_window_pane_g2

0x9cc6,	// (0x00016ab9) bg_popup_window_pane_g3_ParamLimits

0x9cc6,	// (0x00016ab9) bg_popup_window_pane_g3

0x9cd2,	// (0x00016ac5) bg_popup_window_pane_g4_ParamLimits

0x9cd2,	// (0x00016ac5) bg_popup_window_pane_g4

0x9cde,	// (0x00016ad1) bg_popup_window_pane_g5_ParamLimits

0x9cde,	// (0x00016ad1) bg_popup_window_pane_g5

0x9cea,	// (0x00016add) bg_popup_window_pane_g6_ParamLimits

0x9cea,	// (0x00016add) bg_popup_window_pane_g6

0x9cf6,	// (0x00016ae9) bg_popup_window_pane_g7_ParamLimits

0x9cf6,	// (0x00016ae9) bg_popup_window_pane_g7

0x9d02,	// (0x00016af5) bg_popup_window_pane_g8_ParamLimits

0x9d02,	// (0x00016af5) bg_popup_window_pane_g8

0x9d0e,	// (0x00016b01) bg_popup_window_pane_g9_ParamLimits

0x9d0e,	// (0x00016b01) bg_popup_window_pane_g9

0x9d1a,	// (0x00016b0d) bg_popup_window_pane_g10_ParamLimits

0x9d1a,	// (0x00016b0d) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001c6c3) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001c6c3) bg_popup_window_pane_g

0x9c43,	// (0x00016a36) bg_popup_heading_pane_ParamLimits

0x9c43,	// (0x00016a36) bg_popup_heading_pane

0x63d3,	// (0x000131c6) tabs_4_passive_pane_cp_srt_ParamLimits

0x63d3,	// (0x000131c6) tabs_4_passive_pane_cp_srt

0x63e5,	// (0x000131d8) tabs_4_passive_pane_srt_ParamLimits

0x9c57,	// (0x00016a4a) heading_pane_g2

0x63e5,	// (0x000131d8) tabs_4_passive_pane_srt

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp3_srt

0x9c5f,	// (0x00016a52) heading_pane_t1_ParamLimits

0x9c5f,	// (0x00016a52) heading_pane_t1

0x9c76,	// (0x00016a69) heading_pane_t2_ParamLimits

0x9c76,	// (0x00016a69) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001c6be) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001c6be) heading_pane_t

0x976e,	// (0x00016561) bg_popup_heading_pane_g1

0x981d,	// (0x00016610) bg_popup_heading_pane_g2

0x9827,	// (0x0001661a) bg_popup_heading_pane_g3

0x9831,	// (0x00016624) bg_popup_heading_pane_g4

0x983b,	// (0x0001662e) bg_popup_heading_pane_g5

0x9845,	// (0x00016638) bg_popup_heading_pane_g6

0x984d,	// (0x00016640) bg_popup_heading_pane_g7

0x9855,	// (0x00016648) bg_popup_heading_pane_g8

0x985f,	// (0x00016652) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001c67a) bg_popup_heading_pane_g

0x8e8f,	// (0x00015c82) bg_popup_sub_pane_g1

0x8e9f,	// (0x00015c92) bg_popup_sub_pane_g2

0x8e97,	// (0x00015c8a) bg_popup_sub_pane_g3

0x8eaf,	// (0x00015ca2) bg_popup_sub_pane_g4

0x8ea7,	// (0x00015c9a) bg_popup_sub_pane_g5

0x8eb7,	// (0x00015caa) bg_popup_sub_pane_g6

0x8ebf,	// (0x00015cb2) bg_popup_sub_pane_g7

0x8ecf,	// (0x00015cc2) bg_popup_sub_pane_g8

0x8ec7,	// (0x00015cba) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001c654) bg_popup_sub_pane_g

0x366f,	// (0x00010462) bg_popup_window_pane_cp5_ParamLimits

0x366f,	// (0x00010462) bg_popup_window_pane_cp5

0x386b,	// (0x0001065e) popup_note_window_g1_ParamLimits

0x386b,	// (0x0001065e) popup_note_window_g1

0x3877,	// (0x0001066a) popup_note_window_t1_ParamLimits

0x3877,	// (0x0001066a) popup_note_window_t1

0x388d,	// (0x00010680) popup_note_window_t2_ParamLimits

0x388d,	// (0x00010680) popup_note_window_t2

0x38a3,	// (0x00010696) popup_note_window_t3_ParamLimits

0x38a3,	// (0x00010696) popup_note_window_t3

0x38b9,	// (0x000106ac) popup_note_window_t4_ParamLimits

0x38b9,	// (0x000106ac) popup_note_window_t4

0x38e1,	// (0x000106d4) popup_note_window_t5_ParamLimits

0x38e1,	// (0x000106d4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c372) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c372) popup_note_window_t

0x392b,	// (0x0001071e) bg_popup_window_pane_cp6_ParamLimits

0x392b,	// (0x0001071e) bg_popup_window_pane_cp6

0x96ea,	// (0x000164dd) popup_note_image_window_g1_ParamLimits

0x96ea,	// (0x000164dd) popup_note_image_window_g1

0x96f6,	// (0x000164e9) popup_note_image_window_g2_ParamLimits

0x96f6,	// (0x000164e9) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001c648) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001c648) popup_note_image_window_g

0x970f,	// (0x00016502) popup_note_image_window_t1_ParamLimits

0x970f,	// (0x00016502) popup_note_image_window_t1

0x9728,	// (0x0001651b) popup_note_image_window_t2_ParamLimits

0x9728,	// (0x0001651b) popup_note_image_window_t2

0x9741,	// (0x00016534) popup_note_image_window_t3_ParamLimits

0x9741,	// (0x00016534) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001c64d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001c64d) popup_note_image_window_t

0x95aa,	// (0x0001639d) bg_popup_window_pane_cp7_ParamLimits

0x95aa,	// (0x0001639d) bg_popup_window_pane_cp7

0x95da,	// (0x000163cd) popup_note_wait_window_g1_ParamLimits

0x95da,	// (0x000163cd) popup_note_wait_window_g1

0x95e6,	// (0x000163d9) popup_note_wait_window_g2_ParamLimits

0x95e6,	// (0x000163d9) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001c636) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001c636) popup_note_wait_window_g

0x95fe,	// (0x000163f1) popup_note_wait_window_t1_ParamLimits

0x95fe,	// (0x000163f1) popup_note_wait_window_t1

0x9625,	// (0x00016418) popup_note_wait_window_t2_ParamLimits

0x9625,	// (0x00016418) popup_note_wait_window_t2

0x9643,	// (0x00016436) popup_note_wait_window_t3_ParamLimits

0x9643,	// (0x00016436) popup_note_wait_window_t3

0x9656,	// (0x00016449) popup_note_wait_window_t4_ParamLimits

0x9656,	// (0x00016449) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001c63d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001c63d) popup_note_wait_window_t

0x967b,	// (0x0001646e) wait_bar_pane_ParamLimits

0x967b,	// (0x0001646e) wait_bar_pane

0x35cd,	// (0x000103c0) wait_anim_pane

0x35cd,	// (0x000103c0) wait_border_pane

0x3454,	// (0x00010247) wait_anim_pane_g1

0x3454,	// (0x00010247) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c4f1) wait_anim_pane_g

0x954e,	// (0x00016341) wait_border_pane_g1

0x9559,	// (0x0001634c) wait_border_pane_g2

0x9562,	// (0x00016355) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001c62f) wait_border_pane_g

0x93b8,	// (0x000161ab) bg_popup_window_pane_cp16_ParamLimits

0x93b8,	// (0x000161ab) bg_popup_window_pane_cp16

0x94b8,	// (0x000162ab) indicator_popup_pane_cp4_ParamLimits

0x94b8,	// (0x000162ab) indicator_popup_pane_cp4

0x94cc,	// (0x000162bf) popup_query_data_window_t1_ParamLimits

0x94cc,	// (0x000162bf) popup_query_data_window_t1

0x94de,	// (0x000162d1) popup_query_data_window_t2_ParamLimits

0x94de,	// (0x000162d1) popup_query_data_window_t2

0x94f7,	// (0x000162ea) popup_query_data_window_t3_ParamLimits

0x94f7,	// (0x000162ea) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001c628) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001c628) popup_query_data_window_t

0x9511,	// (0x00016304) query_popup_data_pane_ParamLimits

0x9511,	// (0x00016304) query_popup_data_pane

0x9525,	// (0x00016318) query_popup_data_pane_cp1_ParamLimits

0x9525,	// (0x00016318) query_popup_data_pane_cp1

0x93b8,	// (0x000161ab) bg_popup_window_pane_cp10_ParamLimits

0x93b8,	// (0x000161ab) bg_popup_window_pane_cp10

0x93ea,	// (0x000161dd) indicator_popup_pane_ParamLimits

0x93ea,	// (0x000161dd) indicator_popup_pane

0x940c,	// (0x000161ff) popup_query_code_window_t1_ParamLimits

0x940c,	// (0x000161ff) popup_query_code_window_t1

0x9426,	// (0x00016219) popup_query_code_window_t2_ParamLimits

0x9426,	// (0x00016219) popup_query_code_window_t2

0x946f,	// (0x00016262) popup_query_code_window_t3_ParamLimits

0x946f,	// (0x00016262) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001c621) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001c621) popup_query_code_window_t

0x949e,	// (0x00016291) query_popup_pane_ParamLimits

0x949e,	// (0x00016291) query_popup_pane

0x392b,	// (0x0001071e) bg_popup_window_pane_cp15_ParamLimits

0x392b,	// (0x0001071e) bg_popup_window_pane_cp15

0x394b,	// (0x0001073e) indicator_popup_pane_cp1_ParamLimits

0x394b,	// (0x0001073e) indicator_popup_pane_cp1

0x395e,	// (0x00010751) indicator_popup_pane_cp2_ParamLimits

0x395e,	// (0x00010751) indicator_popup_pane_cp2

0x3979,	// (0x0001076c) popup_query_data_code_window_g1_ParamLimits

0x3979,	// (0x0001076c) popup_query_data_code_window_g1

0x398c,	// (0x0001077f) popup_query_data_code_window_t1_ParamLimits

0x398c,	// (0x0001077f) popup_query_data_code_window_t1

0x399e,	// (0x00010791) popup_query_data_code_window_t2_ParamLimits

0x399e,	// (0x00010791) popup_query_data_code_window_t2

0x39b0,	// (0x000107a3) popup_query_data_code_window_t3_ParamLimits

0x39b0,	// (0x000107a3) popup_query_data_code_window_t3

0x39c6,	// (0x000107b9) popup_query_data_code_window_t4_ParamLimits

0x39c6,	// (0x000107b9) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c37d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c37d) popup_query_data_code_window_t

0x6073,	// (0x00012e66) list_single_midp_graphic_pane_g3

0x39e0,	// (0x000107d3) query_popup_data_pane_cp2_ParamLimits

0x39f3,	// (0x000107e6) query_popup_pane_cp2_ParamLimits

0x39f3,	// (0x000107e6) query_popup_pane_cp2

0x35cd,	// (0x000103c0) bg_popup_window_pane_cp11

0x93a4,	// (0x00016197) heading_pane_cp5

0x3a8c,	// (0x0001087f) listscroll_popup_info_pane

0x35cd,	// (0x000103c0) input_focus_pane_cp3

0x3a0e,	// (0x00010801) query_popup_pane_t1

0x3a1c,	// (0x0001080f) list_popup_info_pane_ParamLimits

0x3a1c,	// (0x0001080f) list_popup_info_pane

0x3a2b,	// (0x0001081e) listscroll_popup_info_pane_g1

0x3a33,	// (0x00010826) scroll_pane_cp7

0x3a3d,	// (0x00010830) popup_info_list_pane_t1_ParamLimits

0x3a3d,	// (0x00010830) popup_info_list_pane_t1

0x3a57,	// (0x0001084a) popup_info_list_pane_t2_ParamLimits

0x3a57,	// (0x0001084a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c386) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c386) popup_info_list_pane_t

0x35cd,	// (0x000103c0) bg_popup_window_pane_cp12

0xa82d,	// (0x00017620) find_popup_pane

0x3687,	// (0x0001047a) bg_popup_window_pane_cp3

0x3a71,	// (0x00010864) heading_pane_cp3

0x3a7d,	// (0x00010870) listscroll_popup_graphic_pane

0x35cd,	// (0x000103c0) bg_popup_window_pane_cp4

0x76fd,	// (0x000144f0) heading_pane_cp4

0x3a8c,	// (0x0001087f) listscroll_popup_colour_pane

0x7707,	// (0x000144fa) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7707,	// (0x000144fa) cell_large_graphic_colour_none_popup_pane

0x771b,	// (0x0001450e) grid_large_graphic_colour_popup_pane_ParamLimits

0x771b,	// (0x0001450e) grid_large_graphic_colour_popup_pane

0x7747,	// (0x0001453a) listscroll_popup_colour_pane_g1_ParamLimits

0x7747,	// (0x0001453a) listscroll_popup_colour_pane_g1

0x775e,	// (0x00014551) listscroll_popup_colour_pane_g2_ParamLimits

0x775e,	// (0x00014551) listscroll_popup_colour_pane_g2

0x7775,	// (0x00014568) listscroll_popup_colour_pane_g3_ParamLimits

0x7775,	// (0x00014568) listscroll_popup_colour_pane_g3

0x7785,	// (0x00014578) listscroll_popup_colour_pane_g4_ParamLimits

0x7785,	// (0x00014578) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c38b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c38b) listscroll_popup_colour_pane_g

0x3a94,	// (0x00010887) scroll_pane_cp6_ParamLimits

0x3a94,	// (0x00010887) scroll_pane_cp6

0x7799,	// (0x0001458c) cell_large_graphic_colour_popup_pane_ParamLimits

0x7799,	// (0x0001458c) cell_large_graphic_colour_popup_pane

0x3aa6,	// (0x00010899) cell_large_graphic_colour_none_popup_pane_t1

0x35cd,	// (0x000103c0) grid_highlight_pane_cp5

0x3ab5,	// (0x000108a8) cell_large_graphic_colour_popup_pane_g1

0x3abd,	// (0x000108b0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c394) cell_large_graphic_colour_popup_pane_g

0x3ac5,	// (0x000108b8) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ace,	// (0x000108c1) grid_highlight_pane_cp4

0x3ad6,	// (0x000108c9) bg_popup_window_pane_cp8_ParamLimits

0x3ad6,	// (0x000108c9) bg_popup_window_pane_cp8

0x3af1,	// (0x000108e4) popup_snote_single_text_window_g1_ParamLimits

0x3af1,	// (0x000108e4) popup_snote_single_text_window_g1

0x3b03,	// (0x000108f6) popup_snote_single_text_window_t1_ParamLimits

0x3b03,	// (0x000108f6) popup_snote_single_text_window_t1

0x3b16,	// (0x00010909) popup_snote_single_text_window_t2_ParamLimits

0x3b16,	// (0x00010909) popup_snote_single_text_window_t2

0x3b29,	// (0x0001091c) popup_snote_single_text_window_t3_ParamLimits

0x3b29,	// (0x0001091c) popup_snote_single_text_window_t3

0x3b62,	// (0x00010955) popup_snote_single_text_window_t4_ParamLimits

0x3b62,	// (0x00010955) popup_snote_single_text_window_t4

0x3b96,	// (0x00010989) popup_snote_single_text_window_t5_ParamLimits

0x3b96,	// (0x00010989) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c399) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c399) popup_snote_single_text_window_t

0x3bc5,	// (0x000109b8) bg_popup_window_pane_cp9_ParamLimits

0x3bc5,	// (0x000109b8) bg_popup_window_pane_cp9

0x3af1,	// (0x000108e4) popup_snote_single_graphic_window_g1_ParamLimits

0x3af1,	// (0x000108e4) popup_snote_single_graphic_window_g1

0x3bd3,	// (0x000109c6) popup_snote_single_graphic_window_g2_ParamLimits

0x3bd3,	// (0x000109c6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c3a4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c3a4) popup_snote_single_graphic_window_g

0x3bdf,	// (0x000109d2) popup_snote_single_graphic_window_t1_ParamLimits

0x3bdf,	// (0x000109d2) popup_snote_single_graphic_window_t1

0x3bf2,	// (0x000109e5) popup_snote_single_graphic_window_t2_ParamLimits

0x3bf2,	// (0x000109e5) popup_snote_single_graphic_window_t2

0x3c05,	// (0x000109f8) popup_snote_single_graphic_window_t3_ParamLimits

0x3c05,	// (0x000109f8) popup_snote_single_graphic_window_t3

0x3c3e,	// (0x00010a31) popup_snote_single_graphic_window_t4_ParamLimits

0x3c3e,	// (0x00010a31) popup_snote_single_graphic_window_t4

0x3c72,	// (0x00010a65) popup_snote_single_graphic_window_t5_ParamLimits

0x3c72,	// (0x00010a65) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c3a9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c3a9) popup_snote_single_graphic_window_t

0xa76b,	// (0x0001755e) grid_graphic_popup_pane_ParamLimits

0xa76b,	// (0x0001755e) grid_graphic_popup_pane

0xa799,	// (0x0001758c) listscroll_popup_graphic_pane_g1_ParamLimits

0xa799,	// (0x0001758c) listscroll_popup_graphic_pane_g1

0xa7ad,	// (0x000175a0) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7ad,	// (0x000175a0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001c79e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001c79e) listscroll_popup_graphic_pane_g

0xa7c1,	// (0x000175b4) scroll_pane_cp5

0xa700,	// (0x000174f3) cell_graphic_popup_pane_ParamLimits

0xa700,	// (0x000174f3) cell_graphic_popup_pane

0xa6e1,	// (0x000174d4) cell_graphic_popup_pane_g1

0xa6e9,	// (0x000174dc) cell_graphic_popup_pane_g2

0x3ac5,	// (0x000108b8) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001c797) cell_graphic_popup_pane_g

0xa6f2,	// (0x000174e5) cell_graphic_popup_pane_t2

0x3ace,	// (0x000108c1) grid_highlight_pane_cp3

0x3cb3,	// (0x00010aa6) list_gen_pane_ParamLimits

0x3cb3,	// (0x00010aa6) list_gen_pane

0x3cdb,	// (0x00010ace) scroll_pane

0xa639,	// (0x0001742c) bg_list_pane_g1_ParamLimits

0xa639,	// (0x0001742c) bg_list_pane_g1

0xa656,	// (0x00017449) bg_list_pane_g2_ParamLimits

0xa656,	// (0x00017449) bg_list_pane_g2

0xa66b,	// (0x0001745e) bg_list_pane_g3_ParamLimits

0xa66b,	// (0x0001745e) bg_list_pane_g3

0xa67f,	// (0x00017472) bg_list_pane_g4_ParamLimits

0xa67f,	// (0x00017472) bg_list_pane_g4

0xa693,	// (0x00017486) bg_list_pane_g5_ParamLimits

0xa693,	// (0x00017486) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001c78c) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001c78c) bg_list_pane_g

0xa567,	// (0x0001735a) list_double2_graphic_large_graphic_pane_ParamLimits

0xa567,	// (0x0001735a) list_double2_graphic_large_graphic_pane

0xa567,	// (0x0001735a) list_double2_graphic_pane_ParamLimits

0xa567,	// (0x0001735a) list_double2_graphic_pane

0xa567,	// (0x0001735a) list_double2_large_graphic_pane_ParamLimits

0xa567,	// (0x0001735a) list_double2_large_graphic_pane

0xa590,	// (0x00017383) list_double2_pane_ParamLimits

0xa590,	// (0x00017383) list_double2_pane

0xa567,	// (0x0001735a) list_double_graphic_heading_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_graphic_heading_pane

0xa567,	// (0x0001735a) list_double_graphic_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_graphic_pane

0xa567,	// (0x0001735a) list_double_heading_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_heading_pane

0xa567,	// (0x0001735a) list_double_large_graphic_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_large_graphic_pane

0xa567,	// (0x0001735a) list_double_number_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_number_pane

0xa567,	// (0x0001735a) list_double_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_pane

0xa567,	// (0x0001735a) list_double_time_pane_ParamLimits

0xa567,	// (0x0001735a) list_double_time_pane

0xa567,	// (0x0001735a) list_setting_number_pane_ParamLimits

0xa567,	// (0x0001735a) list_setting_number_pane

0xa567,	// (0x0001735a) list_setting_pane_ParamLimits

0xa567,	// (0x0001735a) list_setting_pane

0xa5dd,	// (0x000173d0) list_single_2graphic_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_2graphic_pane

0xa5dd,	// (0x000173d0) list_single_graphic_heading_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_graphic_heading_pane

0xa5dd,	// (0x000173d0) list_single_graphic_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_graphic_pane

0xa5dd,	// (0x000173d0) list_single_heading_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_heading_pane

0xa621,	// (0x00017414) list_single_large_graphic_pane_ParamLimits

0xa621,	// (0x00017414) list_single_large_graphic_pane

0xa5dd,	// (0x000173d0) list_single_number_heading_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_number_heading_pane

0xa5dd,	// (0x000173d0) list_single_number_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_number_pane

0xa5dd,	// (0x000173d0) list_single_pane_ParamLimits

0xa5dd,	// (0x000173d0) list_single_pane

0x35cd,	// (0x000103c0) list_highlight_pane_cp1

0x3e3f,	// (0x00010c32) list_single_pane_g1_ParamLimits

0x3e3f,	// (0x00010c32) list_single_pane_g1

0x77d4,	// (0x000145c7) list_single_pane_g2_ParamLimits

0x77d4,	// (0x000145c7) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c3bb) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c3bb) list_single_pane_g

0xa520,	// (0x00017313) list_single_pane_t1_ParamLimits

0xa520,	// (0x00017313) list_single_pane_t1

0x3e3f,	// (0x00010c32) list_single_number_pane_g1_ParamLimits

0x3e3f,	// (0x00010c32) list_single_number_pane_g1

0x77d4,	// (0x000145c7) list_single_number_pane_g2_ParamLimits

0x77d4,	// (0x000145c7) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c3bb) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c3bb) list_single_number_pane_g

0xa28e,	// (0x00017081) list_single_number_pane_t1_ParamLimits

0xa28e,	// (0x00017081) list_single_number_pane_t1

0xa2a4,	// (0x00017097) list_single_number_pane_t2_ParamLimits

0xa2a4,	// (0x00017097) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001c74d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001c74d) list_single_number_pane_t

0x77c8,	// (0x000145bb) list_single_graphic_pane_g1_ParamLimits

0x77c8,	// (0x000145bb) list_single_graphic_pane_g1

0x3e3f,	// (0x00010c32) list_single_graphic_pane_g2_ParamLimits

0x3e3f,	// (0x00010c32) list_single_graphic_pane_g2

0x77d4,	// (0x000145c7) list_single_graphic_pane_g3_ParamLimits

0x77d4,	// (0x000145c7) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c3b4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c3b4) list_single_graphic_pane_g

0x77e0,	// (0x000145d3) list_single_graphic_pane_t1_ParamLimits

0x77e0,	// (0x000145d3) list_single_graphic_pane_t1

0x3e3f,	// (0x00010c32) list_single_heading_pane_g1_ParamLimits

0x3e3f,	// (0x00010c32) list_single_heading_pane_g1

0x77d4,	// (0x000145c7) list_single_heading_pane_g2_ParamLimits

0x77d4,	// (0x000145c7) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c3bb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c3bb) list_single_heading_pane_g

0x77f6,	// (0x000145e9) list_single_heading_pane_t1_ParamLimits

0x77f6,	// (0x000145e9) list_single_heading_pane_t1

0x780c,	// (0x000145ff) list_single_heading_pane_t2_ParamLimits

0x780c,	// (0x000145ff) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c3c0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c3c0) list_single_heading_pane_t

0x3e3f,	// (0x00010c32) list_single_number_heading_pane_g1_ParamLimits

0x3e3f,	// (0x00010c32) list_single_number_heading_pane_g1

0x77d4,	// (0x000145c7) list_single_number_heading_pane_g2_ParamLimits

0x77d4,	// (0x000145c7) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c3bb) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c3bb) list_single_number_heading_pane_g

0x77f6,	// (0x000145e9) list_single_number_heading_pane_t1_ParamLimits

0x77f6,	// (0x000145e9) list_single_number_heading_pane_t1

0x781e,	// (0x00014611) list_single_number_heading_pane_t2_ParamLimits

0x781e,	// (0x00014611) list_single_number_heading_pane_t2

0x7830,	// (0x00014623) list_single_number_heading_pane_t3_ParamLimits

0x7830,	// (0x00014623) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c3c5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c3c5) list_single_number_heading_pane_t

0x7842,	// (0x00014635) list_single_graphic_heading_pane_g1_ParamLimits

0x7842,	// (0x00014635) list_single_graphic_heading_pane_g1

0x784e,	// (0x00014641) list_single_graphic_heading_pane_g4_ParamLimits

0x784e,	// (0x00014641) list_single_graphic_heading_pane_g4

0x77d4,	// (0x000145c7) list_single_graphic_heading_pane_g5_ParamLimits

0x77d4,	// (0x000145c7) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c3cc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c3cc) list_single_graphic_heading_pane_g

0x77f6,	// (0x000145e9) list_single_graphic_heading_pane_t1_ParamLimits

0x77f6,	// (0x000145e9) list_single_graphic_heading_pane_t1

0x785f,	// (0x00014652) list_single_graphic_heading_pane_t2_ParamLimits

0x785f,	// (0x00014652) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c3d3) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c3d3) list_single_graphic_heading_pane_t

0x7871,	// (0x00014664) list_single_large_graphic_pane_g1_ParamLimits

0x7871,	// (0x00014664) list_single_large_graphic_pane_g1

0x787d,	// (0x00014670) list_single_large_graphic_pane_g2_ParamLimits

0x787d,	// (0x00014670) list_single_large_graphic_pane_g2

0x7889,	// (0x0001467c) list_single_large_graphic_pane_g3_ParamLimits

0x7889,	// (0x0001467c) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c3d8) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c3d8) list_single_large_graphic_pane_g

0x9559,	// (0x0001634c) wait_border_pane_g2_copy1

0x7895,	// (0x00014688) list_single_large_graphic_pane_g4_cp2

0x789d,	// (0x00014690) list_single_large_graphic_pane_t1_ParamLimits

0x789d,	// (0x00014690) list_single_large_graphic_pane_t1

0x78b3,	// (0x000146a6) list_double_pane_g1_ParamLimits

0x78b3,	// (0x000146a6) list_double_pane_g1

0x78bf,	// (0x000146b2) list_double_pane_g2_ParamLimits

0x78bf,	// (0x000146b2) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c3df) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c3df) list_double_pane_g

0x78cb,	// (0x000146be) list_double_pane_t1_ParamLimits

0x78cb,	// (0x000146be) list_double_pane_t1

0x78e1,	// (0x000146d4) list_double_pane_t2_ParamLimits

0x78e1,	// (0x000146d4) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c3e4) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c3e4) list_double_pane_t

0x78f3,	// (0x000146e6) list_double2_pane_g1_ParamLimits

0x78f3,	// (0x000146e6) list_double2_pane_g1

0x7904,	// (0x000146f7) list_double2_pane_g2_ParamLimits

0x7904,	// (0x000146f7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c3e9) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c3e9) list_double2_pane_g

0x7910,	// (0x00014703) list_double2_pane_t1_ParamLimits

0x7910,	// (0x00014703) list_double2_pane_t1

0x7926,	// (0x00014719) list_double2_pane_t2_ParamLimits

0x7926,	// (0x00014719) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c3ee) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c3ee) list_double2_pane_t

0x78b3,	// (0x000146a6) list_double_number_pane_g1_ParamLimits

0x78b3,	// (0x000146a6) list_double_number_pane_g1

0x78bf,	// (0x000146b2) list_double_number_pane_g2_ParamLimits

0x78bf,	// (0x000146b2) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c3df) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c3df) list_double_number_pane_g

0x7938,	// (0x0001472b) list_double_number_pane_t1_ParamLimits

0x7938,	// (0x0001472b) list_double_number_pane_t1

0x794a,	// (0x0001473d) list_double_number_pane_t2_ParamLimits

0x794a,	// (0x0001473d) list_double_number_pane_t2

0x7960,	// (0x00014753) list_double_number_pane_t3_ParamLimits

0x7960,	// (0x00014753) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c3f3) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c3f3) list_double_number_pane_t

0x7972,	// (0x00014765) list_double_graphic_pane_g1_ParamLimits

0x7972,	// (0x00014765) list_double_graphic_pane_g1

0x797e,	// (0x00014771) list_double_graphic_pane_g2_ParamLimits

0x797e,	// (0x00014771) list_double_graphic_pane_g2

0x798d,	// (0x00014780) list_double_graphic_pane_g3_ParamLimits

0x798d,	// (0x00014780) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c3fa) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c3fa) list_double_graphic_pane_g

0x79a5,	// (0x00014798) list_double_graphic_pane_t1_ParamLimits

0x79a5,	// (0x00014798) list_double_graphic_pane_t1

0x79bb,	// (0x000147ae) list_double_graphic_pane_t2_ParamLimits

0x79bb,	// (0x000147ae) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c403) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c403) list_double_graphic_pane_t

0x79cd,	// (0x000147c0) list_double2_graphic_pane_g1_ParamLimits

0x79cd,	// (0x000147c0) list_double2_graphic_pane_g1

0x79d9,	// (0x000147cc) list_double2_graphic_pane_g2_ParamLimits

0x79d9,	// (0x000147cc) list_double2_graphic_pane_g2

0x79e5,	// (0x000147d8) list_double2_graphic_pane_g3_ParamLimits

0x79e5,	// (0x000147d8) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c408) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c408) list_double2_graphic_pane_g

0x79f1,	// (0x000147e4) list_double2_graphic_pane_t1_ParamLimits

0x79f1,	// (0x000147e4) list_double2_graphic_pane_t1

0x7a07,	// (0x000147fa) list_double2_graphic_pane_t2_ParamLimits

0x7a07,	// (0x000147fa) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c40f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c40f) list_double2_graphic_pane_t

0x7a19,	// (0x0001480c) list_double_large_graphic_pane_g1_ParamLimits

0x7a19,	// (0x0001480c) list_double_large_graphic_pane_g1

0x7a38,	// (0x0001482b) list_double_large_graphic_pane_g2_ParamLimits

0x7a38,	// (0x0001482b) list_double_large_graphic_pane_g2

0x78bf,	// (0x000146b2) list_double_large_graphic_pane_g3_ParamLimits

0x78bf,	// (0x000146b2) list_double_large_graphic_pane_g3

0x7a49,	// (0x0001483c) list_double_large_graphic_pane_g4_ParamLimits

0x7a49,	// (0x0001483c) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c414) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c414) list_double_large_graphic_pane_g

0x7a5c,	// (0x0001484f) list_double_large_graphic_pane_t1_ParamLimits

0x7a5c,	// (0x0001484f) list_double_large_graphic_pane_t1

0x7a75,	// (0x00014868) list_double_large_graphic_pane_t2_ParamLimits

0x7a75,	// (0x00014868) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c41f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c41f) list_double_large_graphic_pane_t

0x7a87,	// (0x0001487a) list_double2_large_graphic_pane_g1_ParamLimits

0x7a87,	// (0x0001487a) list_double2_large_graphic_pane_g1

0x7a93,	// (0x00014886) list_double2_large_graphic_pane_g2_ParamLimits

0x7a93,	// (0x00014886) list_double2_large_graphic_pane_g2

0x79e5,	// (0x000147d8) list_double2_large_graphic_pane_g3_ParamLimits

0x79e5,	// (0x000147d8) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c424) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c424) list_double2_large_graphic_pane_g

0x7aa4,	// (0x00014897) list_double2_large_graphic_pane_t1_ParamLimits

0x7aa4,	// (0x00014897) list_double2_large_graphic_pane_t1

0x7aba,	// (0x000148ad) list_double2_large_graphic_pane_t2_ParamLimits

0x7aba,	// (0x000148ad) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c42b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c42b) list_double2_large_graphic_pane_t

0x7acc,	// (0x000148bf) list_double_heading_pane_g1_ParamLimits

0x7acc,	// (0x000148bf) list_double_heading_pane_g1

0x7add,	// (0x000148d0) list_double_heading_pane_g2_ParamLimits

0x7add,	// (0x000148d0) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c430) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c430) list_double_heading_pane_g

0x7ae9,	// (0x000148dc) list_double_heading_pane_t1_ParamLimits

0x7ae9,	// (0x000148dc) list_double_heading_pane_t1

0x7aff,	// (0x000148f2) list_double_heading_pane_t2_ParamLimits

0x7aff,	// (0x000148f2) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c435) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c435) list_double_heading_pane_t

0x7b11,	// (0x00014904) list_double_graphic_heading_pane_g1_ParamLimits

0x7b11,	// (0x00014904) list_double_graphic_heading_pane_g1

0x7acc,	// (0x000148bf) list_double_graphic_heading_pane_g2_ParamLimits

0x7acc,	// (0x000148bf) list_double_graphic_heading_pane_g2

0x7add,	// (0x000148d0) list_double_graphic_heading_pane_g3_ParamLimits

0x7add,	// (0x000148d0) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c43a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c43a) list_double_graphic_heading_pane_g

0x7b1d,	// (0x00014910) list_double_graphic_heading_pane_t1_ParamLimits

0x7b1d,	// (0x00014910) list_double_graphic_heading_pane_t1

0x7b33,	// (0x00014926) list_double_graphic_heading_pane_t2_ParamLimits

0x7b33,	// (0x00014926) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c441) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c441) list_double_graphic_heading_pane_t

0x7a38,	// (0x0001482b) list_double_time_pane_g1_ParamLimits

0x7a38,	// (0x0001482b) list_double_time_pane_g1

0x78bf,	// (0x000146b2) list_double_time_pane_g2_ParamLimits

0x78bf,	// (0x000146b2) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c446) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c446) list_double_time_pane_g

0x7b45,	// (0x00014938) list_double_time_pane_t1_ParamLimits

0x7b45,	// (0x00014938) list_double_time_pane_t1

0x7b5b,	// (0x0001494e) list_double_time_pane_t2_ParamLimits

0x7b5b,	// (0x0001494e) list_double_time_pane_t2

0x7b6d,	// (0x00014960) list_double_time_pane_t3_ParamLimits

0x7b6d,	// (0x00014960) list_double_time_pane_t3

0x7b7f,	// (0x00014972) list_double_time_pane_t4_ParamLimits

0x7b7f,	// (0x00014972) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c44b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c44b) list_double_time_pane_t

0x79d9,	// (0x000147cc) list_setting_pane_g1_ParamLimits

0x79d9,	// (0x000147cc) list_setting_pane_g1

0x79e5,	// (0x000147d8) list_setting_pane_g2_ParamLimits

0x79e5,	// (0x000147d8) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c454) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c454) list_setting_pane_g

0x7b91,	// (0x00014984) list_setting_pane_t1_ParamLimits

0x7b91,	// (0x00014984) list_setting_pane_t1

0x7ba8,	// (0x0001499b) list_setting_pane_t2_ParamLimits

0x7ba8,	// (0x0001499b) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c459) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c459) list_setting_pane_t

0x7be7,	// (0x000149da) set_value_pane_cp_ParamLimits

0x7be7,	// (0x000149da) set_value_pane_cp

0x79d9,	// (0x000147cc) list_setting_number_pane_g1_ParamLimits

0x79d9,	// (0x000147cc) list_setting_number_pane_g1

0x79e5,	// (0x000147d8) list_setting_number_pane_g2_ParamLimits

0x79e5,	// (0x000147d8) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c454) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c454) list_setting_number_pane_g

0x7bf5,	// (0x000149e8) list_setting_number_pane_t1_ParamLimits

0x7bf5,	// (0x000149e8) list_setting_number_pane_t1

0x7c09,	// (0x000149fc) list_setting_number_pane_t2_ParamLimits

0x7c09,	// (0x000149fc) list_setting_number_pane_t2

0x7c20,	// (0x00014a13) list_setting_number_pane_t3_ParamLimits

0x7c20,	// (0x00014a13) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c460) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c460) list_setting_number_pane_t

0x7be7,	// (0x000149da) set_value_pane_ParamLimits

0x7be7,	// (0x000149da) set_value_pane

0x3d24,	// (0x00010b17) bg_set_opt_pane_ParamLimits

0x3d24,	// (0x00010b17) bg_set_opt_pane

0x3d45,	// (0x00010b38) set_value_pane_t1

0x3d53,	// (0x00010b46) slider_set_pane_cp3

0x3d5c,	// (0x00010b4f) volume_small_pane_cp

0x3d65,	// (0x00010b58) list_form_gen_pane

0x3d6e,	// (0x00010b61) scroll_pane_cp8

0x7c63,	// (0x00014a56) form_field_data_pane_ParamLimits

0x7c63,	// (0x00014a56) form_field_data_pane

0x7c81,	// (0x00014a74) form_field_data_wide_pane_ParamLimits

0x7c81,	// (0x00014a74) form_field_data_wide_pane

0x7ca8,	// (0x00014a9b) form_field_popup_pane_ParamLimits

0x7ca8,	// (0x00014a9b) form_field_popup_pane

0x3d8f,	// (0x00010b82) form_field_popup_wide_pane_ParamLimits

0x3d8f,	// (0x00010b82) form_field_popup_wide_pane

0x3db0,	// (0x00010ba3) form_field_slider_pane_ParamLimits

0x3db0,	// (0x00010ba3) form_field_slider_pane

0x3dc3,	// (0x00010bb6) form_field_slider_wide_pane_ParamLimits

0x3dc3,	// (0x00010bb6) form_field_slider_wide_pane

0x3dd6,	// (0x00010bc9) data_form_pane

0x7cd4,	// (0x00014ac7) form_field_data_pane_t1

0x3de2,	// (0x00010bd5) input_focus_pane

0x3df0,	// (0x00010be3) data_form_wide_pane

0x3e28,	// (0x00010c1b) form_field_data_wide_pane_t1

0x3ae3,	// (0x000108d6) input_focus_pane_cp6

0x7cee,	// (0x00014ae1) form_field_popup_pane_t1

0x3de2,	// (0x00010bd5) input_focus_pane_cp7

0x3e53,	// (0x00010c46) list_form_pane

0x3e67,	// (0x00010c5a) form_field_popup_wide_pane_t1

0x3de2,	// (0x00010bd5) input_focus_pane_cp8

0x3e79,	// (0x00010c6c) list_form_wide_pane

0x7d10,	// (0x00014b03) form_field_slider_pane_t1_ParamLimits

0x7d10,	// (0x00014b03) form_field_slider_pane_t1

0x7d24,	// (0x00014b17) form_field_slider_pane_t2_ParamLimits

0x7d24,	// (0x00014b17) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c470) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c470) form_field_slider_pane_t

0x366f,	// (0x00010462) input_focus_pane_cp9_ParamLimits

0x366f,	// (0x00010462) input_focus_pane_cp9

0x7d36,	// (0x00014b29) slider_cont_pane_ParamLimits

0x7d36,	// (0x00014b29) slider_cont_pane

0x3e85,	// (0x00010c78) form_field_slider_wide_pane_t1_ParamLimits

0x3e85,	// (0x00010c78) form_field_slider_wide_pane_t1

0x3e97,	// (0x00010c8a) form_field_slider_wide_pane_t2_ParamLimits

0x3e97,	// (0x00010c8a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c475) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c475) form_field_slider_wide_pane_t

0x366f,	// (0x00010462) input_focus_pane_cp10_ParamLimits

0x366f,	// (0x00010462) input_focus_pane_cp10

0x7d4a,	// (0x00014b3d) slider_cont_pane_cp1_ParamLimits

0x7d4a,	// (0x00014b3d) slider_cont_pane_cp1

0x7d5e,	// (0x00014b51) slider_form_pane_cp

0x3ea9,	// (0x00010c9c) input_focus_pane_g1

0x3eb1,	// (0x00010ca4) input_focus_pane_g2

0x3eb9,	// (0x00010cac) input_focus_pane_g3

0x3ec1,	// (0x00010cb4) input_focus_pane_g4

0x3ec9,	// (0x00010cbc) input_focus_pane_g5

0x3ed1,	// (0x00010cc4) input_focus_pane_g6

0x3ed9,	// (0x00010ccc) input_focus_pane_g7

0x3ee1,	// (0x00010cd4) input_focus_pane_g8

0x3ee9,	// (0x00010cdc) input_focus_pane_g9

0x3454,	// (0x00010247) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c47a) input_focus_pane_g

0x9562,	// (0x00016355) wait_border_pane_g3_copy1

0x7d66,	// (0x00014b59) data_form_pane_t1

0x3454,	// (0x00010247) wait_anim_pane_g1_copy1

0xa501,	// (0x000172f4) data_form_wide_pane_t1

0x3ef1,	// (0x00010ce4) list_form_graphic_pane_cp_ParamLimits

0x3ef1,	// (0x00010ce4) list_form_graphic_pane_cp

0xa4d6,	// (0x000172c9) slider_form_pane_g1

0xa4df,	// (0x000172d2) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001c77d) slider_form_pane_g

0x3ef1,	// (0x00010ce4) list_form_graphic_pane_ParamLimits

0x3ef1,	// (0x00010ce4) list_form_graphic_pane

0x3f03,	// (0x00010cf6) list_form_graphic_pane_g1

0x3f0b,	// (0x00010cfe) list_form_graphic_pane_t1_ParamLimits

0x3f0b,	// (0x00010cfe) list_form_graphic_pane_t1

0x3687,	// (0x0001047a) list_highlight_pane_cp5_ParamLimits

0x3687,	// (0x0001047a) list_highlight_pane_cp5

0x7d85,	// (0x00014b78) find_pane_g1

0x3f20,	// (0x00010d13) input_find_pane

0x7d8e,	// (0x00014b81) input_find_pane_g1_ParamLimits

0x7d8e,	// (0x00014b81) input_find_pane_g1

0x7d9a,	// (0x00014b8d) input_find_pane_t1_ParamLimits

0x7d9a,	// (0x00014b8d) input_find_pane_t1

0x7daf,	// (0x00014ba2) input_find_pane_t2_ParamLimits

0x7daf,	// (0x00014ba2) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c48f) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c48f) input_find_pane_t

0x3f29,	// (0x00010d1c) input_focus_pane_cp5_ParamLimits

0x3f29,	// (0x00010d1c) input_focus_pane_cp5

0x3f37,	// (0x00010d2a) bg_popup_window_pane_cp2_ParamLimits

0x3f37,	// (0x00010d2a) bg_popup_window_pane_cp2

0x3f44,	// (0x00010d37) listscroll_menu_pane_ParamLimits

0x3f44,	// (0x00010d37) listscroll_menu_pane

0x7dd0,	// (0x00014bc3) popup_submenu_window_ParamLimits

0x7dd0,	// (0x00014bc3) popup_submenu_window

0x3f50,	// (0x00010d43) find_popup_pane_g1

0x3f58,	// (0x00010d4b) input_popup_find_pane_cp

0x3f29,	// (0x00010d1c) input_focus_pane_cp4_ParamLimits

0x3f29,	// (0x00010d1c) input_focus_pane_cp4

0x3f62,	// (0x00010d55) input_popup_find_pane_t1_ParamLimits

0x3f62,	// (0x00010d55) input_popup_find_pane_t1

0x35cd,	// (0x000103c0) bg_popup_sub_pane_cp

0x3f90,	// (0x00010d83) listscroll_popup_sub_pane

0x3f98,	// (0x00010d8b) list_submenu_pane_ParamLimits

0x3f98,	// (0x00010d8b) list_submenu_pane

0x3fa9,	// (0x00010d9c) scroll_pane_cp4

0x3fb1,	// (0x00010da4) list_single_popup_submenu_pane_ParamLimits

0x3fb1,	// (0x00010da4) list_single_popup_submenu_pane

0x3fc6,	// (0x00010db9) list_single_popup_submenu_pane_g1

0x3fce,	// (0x00010dc1) list_single_popup_submenu_pane_t1_ParamLimits

0x3fce,	// (0x00010dc1) list_single_popup_submenu_pane_t1

0x3687,	// (0x0001047a) bg_active_tab_pane_cp1_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp1

0x7e0e,	// (0x00014c01) tabs_2_active_pane_g1

0x7e16,	// (0x00014c09) tabs_2_active_pane_t1

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp1_ParamLimits

0x3687,	// (0x0001047a) bg_passive_tab_pane_cp1

0x7e0e,	// (0x00014c01) tabs_2_passive_pane_g1

0x7e16,	// (0x00014c09) tabs_2_passive_pane_t1

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp4

0x7e28,	// (0x00014c1b) tabs_2_long_active_pane_t1

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp4

0x607b,	// (0x00012e6e) list_single_midp_graphic_pane_g4_ParamLimits

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp5

0x7e47,	// (0x00014c3a) tabs_3_long_active_pane_t1

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp5

0x607b,	// (0x00012e6e) list_single_midp_graphic_pane_g4

0x3687,	// (0x0001047a) bg_popup_window_pane_cp13_ParamLimits

0x3687,	// (0x0001047a) bg_popup_window_pane_cp13

0x3fec,	// (0x00010ddf) listscroll_popup_fast_pane_ParamLimits

0x3fec,	// (0x00010ddf) listscroll_popup_fast_pane

0x3ffb,	// (0x00010dee) grid_popup_fast_pane_ParamLimits

0x3ffb,	// (0x00010dee) grid_popup_fast_pane

0x400d,	// (0x00010e00) scroll_pane_cp9_ParamLimits

0x400d,	// (0x00010e00) scroll_pane_cp9

0xc3e1,	// (0x000191d4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc3e1,	// (0x000191d4) list_single_graphic_hl_pane_t1_cp2

0x4031,	// (0x00010e24) input_focus_pane_cp20_ParamLimits

0x4031,	// (0x00010e24) input_focus_pane_cp20

0x403f,	// (0x00010e32) query_popup_data_pane_t1_ParamLimits

0x403f,	// (0x00010e32) query_popup_data_pane_t1

0x4052,	// (0x00010e45) query_popup_data_pane_t2_ParamLimits

0x4052,	// (0x00010e45) query_popup_data_pane_t2

0x40a6,	// (0x00010e99) query_popup_data_pane_t3_ParamLimits

0x40a6,	// (0x00010e99) query_popup_data_pane_t3

0x40e7,	// (0x00010eda) query_popup_data_pane_t4_ParamLimits

0x40e7,	// (0x00010eda) query_popup_data_pane_t4

0x4123,	// (0x00010f16) query_popup_data_pane_t5_ParamLimits

0x4123,	// (0x00010f16) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c494) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c494) query_popup_data_pane_t

0x3ea9,	// (0x00010c9c) bg_set_opt_pane_g1

0x3eb1,	// (0x00010ca4) bg_set_opt_pane_g2

0x3eb9,	// (0x00010cac) bg_set_opt_pane_g3

0x3ec1,	// (0x00010cb4) bg_set_opt_pane_g4

0x3ec9,	// (0x00010cbc) bg_set_opt_pane_g5

0x3ed1,	// (0x00010cc4) bg_set_opt_pane_g6

0x3ed9,	// (0x00010ccc) bg_set_opt_pane_g7

0x3ee1,	// (0x00010cd4) bg_set_opt_pane_g8

0x3ee9,	// (0x00010cdc) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c49f) bg_set_opt_pane_g

0x5603,	// (0x000123f6) control_top_pane_stacon_ParamLimits

0x5603,	// (0x000123f6) control_top_pane_stacon

0x5656,	// (0x00012449) signal_pane_stacon_ParamLimits

0x5656,	// (0x00012449) signal_pane_stacon

0x8292,	// (0x00015085) stacon_top_pane_g1_ParamLimits

0x8292,	// (0x00015085) stacon_top_pane_g1

0x567b,	// (0x0001246e) title_pane_stacon_ParamLimits

0x567b,	// (0x0001246e) title_pane_stacon

0x56a5,	// (0x00012498) uni_indicator_pane_stacon_ParamLimits

0x56a5,	// (0x00012498) uni_indicator_pane_stacon

0x56ba,	// (0x000124ad) battery_pane_stacon_ParamLimits

0x56ba,	// (0x000124ad) battery_pane_stacon

0x56fe,	// (0x000124f1) control_bottom_pane_stacon_ParamLimits

0x56fe,	// (0x000124f1) control_bottom_pane_stacon

0x5721,	// (0x00012514) navi_pane_stacon_ParamLimits

0x5721,	// (0x00012514) navi_pane_stacon

0x82b4,	// (0x000150a7) stacon_bottom_pane_g1_ParamLimits

0x82b4,	// (0x000150a7) stacon_bottom_pane_g1

0x5360,	// (0x00012153) aid_levels_signal_lsc_ParamLimits

0x5360,	// (0x00012153) aid_levels_signal_lsc

0x5377,	// (0x0001216a) signal_pane_stacon_g1_ParamLimits

0x5377,	// (0x0001216a) signal_pane_stacon_g1

0x538b,	// (0x0001217e) signal_pane_stacon_g2_ParamLimits

0x538b,	// (0x0001217e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c4b2) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c4b2) signal_pane_stacon_g

0x53c0,	// (0x000121b3) title_pane_stacon_t1_ParamLimits

0x53c0,	// (0x000121b3) title_pane_stacon_t1

0x4200,	// (0x00010ff3) uni_indicator_pane_stacon_g1

0x420a,	// (0x00010ffd) uni_indicator_pane_stacon_g2

0x41ec,	// (0x00010fdf) uni_indicator_pane_stacon_g3

0x41f6,	// (0x00010fe9) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c4be) uni_indicator_pane_stacon_g

0x53e5,	// (0x000121d8) control_top_pane_stacon_g1

0x53ed,	// (0x000121e0) control_top_pane_stacon_t1_ParamLimits

0x53ed,	// (0x000121e0) control_top_pane_stacon_t1

0x5424,	// (0x00012217) aid_levels_battery_lsc_ParamLimits

0x5424,	// (0x00012217) aid_levels_battery_lsc

0x543c,	// (0x0001222f) battery_pane_stacon_g1_ParamLimits

0x543c,	// (0x0001222f) battery_pane_stacon_g1

0x544f,	// (0x00012242) battery_pane_stacon_g2_ParamLimits

0x544f,	// (0x00012242) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c4c7) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c4c7) battery_pane_stacon_g

0x548d,	// (0x00012280) navi_icon_pane_stacon

0x54a1,	// (0x00012294) navi_navi_pane_stacon

0x548d,	// (0x00012280) navi_text_pane_stacon

0x53e5,	// (0x000121d8) control_bottom_pane_stacon_g1

0x54b7,	// (0x000122aa) control_bottom_pane_stacon_t1_ParamLimits

0x54b7,	// (0x000122aa) control_bottom_pane_stacon_t1

0x7e59,	// (0x00014c4c) grid_app_pane_ParamLimits

0x7e59,	// (0x00014c4c) grid_app_pane

0x7e7b,	// (0x00014c6e) scroll_pane_cp15_ParamLimits

0x7e7b,	// (0x00014c6e) scroll_pane_cp15

0x7e8e,	// (0x00014c81) cell_app_pane_ParamLimits

0x7e8e,	// (0x00014c81) cell_app_pane

0x7eba,	// (0x00014cad) cell_app_pane_g1_ParamLimits

0x7eba,	// (0x00014cad) cell_app_pane_g1

0x4337,	// (0x0001112a) cell_app_pane_g2_ParamLimits

0x4337,	// (0x0001112a) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c4cc) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c4cc) cell_app_pane_g

0x7ede,	// (0x00014cd1) cell_app_pane_t1_ParamLimits

0x7ede,	// (0x00014cd1) cell_app_pane_t1

0x4343,	// (0x00011136) grid_highlight_pane_ParamLimits

0x4343,	// (0x00011136) grid_highlight_pane

0x3ea9,	// (0x00010c9c) cell_highlight_pane_g1

0x3eb1,	// (0x00010ca4) cell_highlight_pane_g2

0x3eb9,	// (0x00010cac) cell_highlight_pane_g3

0x3ec1,	// (0x00010cb4) cell_highlight_pane_g4

0x3ec9,	// (0x00010cbc) cell_highlight_pane_g5

0x3ed1,	// (0x00010cc4) cell_highlight_pane_g6

0x3ed9,	// (0x00010ccc) cell_highlight_pane_g7

0x3ee1,	// (0x00010cd4) cell_highlight_pane_g8

0x3ee9,	// (0x00010cdc) cell_highlight_pane_g9

0x3454,	// (0x00010247) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c47a) cell_highlight_pane_g

0x435e,	// (0x00011151) bg_scroll_pane

0x5501,	// (0x000122f4) scroll_handle_pane

0x43ce,	// (0x000111c1) scroll_bg_pane_g1

0x43e3,	// (0x000111d6) scroll_bg_pane_g2

0x43fb,	// (0x000111ee) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c4d1) scroll_bg_pane_g

0x4410,	// (0x00011203) scroll_handle_focus_pane_ParamLimits

0x4410,	// (0x00011203) scroll_handle_focus_pane

0x43ce,	// (0x000111c1) scroll_handle_pane_g1

0x441d,	// (0x00011210) scroll_handle_pane_g2

0x43fb,	// (0x000111ee) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c4d8) scroll_handle_pane_g

0x3f29,	// (0x00010d1c) bg_popup_sub_pane_cp21_ParamLimits

0x3f29,	// (0x00010d1c) bg_popup_sub_pane_cp21

0x4431,	// (0x00011224) popup_fep_japan_predictive_window_t1_ParamLimits

0x4431,	// (0x00011224) popup_fep_japan_predictive_window_t1

0x4448,	// (0x0001123b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4448,	// (0x0001123b) popup_fep_japan_predictive_window_t2

0x447b,	// (0x0001126e) popup_fep_japan_predictive_window_t3_ParamLimits

0x447b,	// (0x0001126e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c4df) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c4df) popup_fep_japan_predictive_window_t

0x35cd,	// (0x000103c0) bg_popup_sub_pane_cp23

0x44b2,	// (0x000112a5) listscroll_japin_cand_pane

0x44ba,	// (0x000112ad) popup_fep_japan_candidate_window_t1

0x44c8,	// (0x000112bb) candidate_pane_ParamLimits

0x44c8,	// (0x000112bb) candidate_pane

0x44da,	// (0x000112cd) scroll_pane_cp30

0x44e4,	// (0x000112d7) list_single_popup_jap_candidate_pane_ParamLimits

0x44e4,	// (0x000112d7) list_single_popup_jap_candidate_pane

0x35cd,	// (0x000103c0) list_highlight_pane_cp30

0x44f8,	// (0x000112eb) list_single_popup_jap_candidate_pane_t1

0x7ef5,	// (0x00014ce8) level_1_signal

0x7f02,	// (0x00014cf5) level_2_signal

0x7f0f,	// (0x00014d02) level_3_signal

0x7f1c,	// (0x00014d0f) level_4_signal

0x7f29,	// (0x00014d1c) level_5_signal

0x7f36,	// (0x00014d29) level_6_signal

0x7f43,	// (0x00014d36) level_7_signal

0x7ef5,	// (0x00014ce8) level_1_battery

0x7f02,	// (0x00014cf5) level_2_battery

0x7f0f,	// (0x00014d02) level_3_battery

0x7f1c,	// (0x00014d0f) level_4_battery

0x7f29,	// (0x00014d1c) level_5_battery

0x7f36,	// (0x00014d29) level_6_battery

0x7f43,	// (0x00014d36) level_7_battery

0x7f68,	// (0x00014d5b) list_menu_pane_ParamLimits

0x7f68,	// (0x00014d5b) list_menu_pane

0x7f7e,	// (0x00014d71) scroll_pane_cp25_ParamLimits

0x7f7e,	// (0x00014d71) scroll_pane_cp25

0x7f97,	// (0x00014d8a) list_double2_graphic_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double2_graphic_pane_cp2

0x7f97,	// (0x00014d8a) list_double2_large_graphic_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double2_large_graphic_pane_cp2

0x7f97,	// (0x00014d8a) list_double2_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double2_pane_cp2

0x7f97,	// (0x00014d8a) list_double_graphic_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double_graphic_pane_cp2

0x7f97,	// (0x00014d8a) list_double_large_graphic_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double_large_graphic_pane_cp2

0x7f97,	// (0x00014d8a) list_double_number_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double_number_pane_cp2

0x7f97,	// (0x00014d8a) list_double_pane_cp2_ParamLimits

0x7f97,	// (0x00014d8a) list_double_pane_cp2

0x7fbd,	// (0x00014db0) list_single_2graphic_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_2graphic_pane_cp2

0x7fbd,	// (0x00014db0) list_single_graphic_heading_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_graphic_heading_pane_cp2

0x7fbd,	// (0x00014db0) list_single_graphic_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_graphic_pane_cp2

0x7fbd,	// (0x00014db0) list_single_heading_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_heading_pane_cp2

0x7fda,	// (0x00014dcd) list_single_large_graphic_pane_cp2_ParamLimits

0x7fda,	// (0x00014dcd) list_single_large_graphic_pane_cp2

0x7fbd,	// (0x00014db0) list_single_number_heading_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_number_heading_pane_cp2

0x7fbd,	// (0x00014db0) list_single_number_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_number_pane_cp2

0x7fbd,	// (0x00014db0) list_single_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_pane_cp2

0x8048,	// (0x00014e3b) bg_popup_sub_pane_cp22

0x55b3,	// (0x000123a6) popup_side_volume_key_window_g1

0x55dd,	// (0x000123d0) popup_side_volume_key_window_t1

0x55fb,	// (0x000123ee) volume_small_pane_cp1

0x366f,	// (0x00010462) bg_popup_sub_pane_cp24_ParamLimits

0x366f,	// (0x00010462) bg_popup_sub_pane_cp24

0x805e,	// (0x00014e51) fep_china_uni_candidate_pane_ParamLimits

0x805e,	// (0x00014e51) fep_china_uni_candidate_pane

0x8072,	// (0x00014e65) fep_china_uni_entry_pane

0x8082,	// (0x00014e75) popup_fep_china_uni_window_g1

0x809e,	// (0x00014e91) fep_china_uni_entry_pane_g1

0x80a8,	// (0x00014e9b) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c510) fep_china_uni_entry_pane_g

0x80b2,	// (0x00014ea5) fep_entry_item_pane

0x80bc,	// (0x00014eaf) fep_candidate_item_pane

0x80c4,	// (0x00014eb7) fep_china_uni_candidate_pane_g1

0x80ce,	// (0x00014ec1) fep_china_uni_candidate_pane_g2

0x80d6,	// (0x00014ec9) fep_china_uni_candidate_pane_g3

0x80de,	// (0x00014ed1) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c515) fep_china_uni_candidate_pane_g

0x3454,	// (0x00010247) fep_entry_item_pane_g1

0x80e8,	// (0x00014edb) fep_entry_item_pane_t1_ParamLimits

0x80e8,	// (0x00014edb) fep_entry_item_pane_t1

0x80fe,	// (0x00014ef1) fep_candidate_item_pane_t1_ParamLimits

0x80fe,	// (0x00014ef1) fep_candidate_item_pane_t1

0x8113,	// (0x00014f06) fep_candidate_item_pane_t2_ParamLimits

0x8113,	// (0x00014f06) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c51e) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c51e) fep_candidate_item_pane_t

0x3687,	// (0x0001047a) list_highlight_pane_cp31_ParamLimits

0x3687,	// (0x0001047a) list_highlight_pane_cp31

0x8125,	// (0x00014f18) level_1_signal_lsc

0x812e,	// (0x00014f21) level_2_signal_lsc

0x8137,	// (0x00014f2a) level_3_signal_lsc

0x8140,	// (0x00014f33) level_4_signal_lsc

0x8149,	// (0x00014f3c) level_5_signal_lsc

0x8152,	// (0x00014f45) level_6_signal_lsc

0x815b,	// (0x00014f4e) level_7_signal_lsc

0x815b,	// (0x00014f4e) level_1_battery_lsc

0x8164,	// (0x00014f57) level_2_battery_lsc

0x816d,	// (0x00014f60) level_3_battery_lsc

0x8176,	// (0x00014f69) level_4_battery_lsc

0x817f,	// (0x00014f72) level_5_battery_lsc

0x8188,	// (0x00014f7b) level_6_battery_lsc

0x8125,	// (0x00014f18) level_7_battery_lsc

0x8191,	// (0x00014f84) scroll_handle_focus_pane_g1

0x819a,	// (0x00014f8d) scroll_handle_focus_pane_g2

0x81a3,	// (0x00014f96) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c523) scroll_handle_focus_pane_g

0x81ac,	// (0x00014f9f) list_single_2graphic_pane_g1_ParamLimits

0x81ac,	// (0x00014f9f) list_single_2graphic_pane_g1

0x784e,	// (0x00014641) list_single_2graphic_pane_g2_ParamLimits

0x784e,	// (0x00014641) list_single_2graphic_pane_g2

0x77d4,	// (0x000145c7) list_single_2graphic_pane_g3_ParamLimits

0x77d4,	// (0x000145c7) list_single_2graphic_pane_g3

0x81b8,	// (0x00014fab) list_single_2graphic_pane_g4_ParamLimits

0x81b8,	// (0x00014fab) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c52a) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c52a) list_single_2graphic_pane_g

0x81c9,	// (0x00014fbc) list_single_2graphic_pane_t1_ParamLimits

0x81c9,	// (0x00014fbc) list_single_2graphic_pane_t1

0x81f7,	// (0x00014fea) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x81f7,	// (0x00014fea) list_double2_graphic_large_graphic_pane_g1

0x7a93,	// (0x00014886) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7a93,	// (0x00014886) list_double2_graphic_large_graphic_pane_g2

0x79e5,	// (0x000147d8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x79e5,	// (0x000147d8) list_double2_graphic_large_graphic_pane_g3

0x8209,	// (0x00014ffc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8209,	// (0x00014ffc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c533) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c533) list_double2_graphic_large_graphic_pane_g

0x8215,	// (0x00015008) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8215,	// (0x00015008) list_double2_graphic_large_graphic_pane_t1

0x822b,	// (0x0001501e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x822b,	// (0x0001501e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c53c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c53c) list_double2_graphic_large_graphic_pane_t

0x8374,	// (0x00015167) popup_fast_swap_window_ParamLimits

0x8374,	// (0x00015167) popup_fast_swap_window

0x8392,	// (0x00015185) popup_side_volume_key_window

0x83b0,	// (0x000151a3) stacon_top_pane

0x83ba,	// (0x000151ad) status_pane_ParamLimits

0x83ba,	// (0x000151ad) status_pane

0x83c8,	// (0x000151bb) status_small_pane

0x35cd,	// (0x000103c0) control_pane

0x35cd,	// (0x000103c0) stacon_bottom_pane

0x3d6e,	// (0x00010b61) scroll_pane_cp121

0x3d65,	// (0x00010b58) set_content_pane

0x823d,	// (0x00015030) bg_active_tab_pane_g1_cp1

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp1

0x824f,	// (0x00015042) bg_active_tab_pane_g3_cp1

0x823d,	// (0x00015030) bg_passive_tab_pane_g1_cp1

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp1

0x824f,	// (0x00015042) bg_passive_tab_pane_g3_cp1

0x8258,	// (0x0001504b) bg_active_tab_pane_g1_cp2

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp2

0x8261,	// (0x00015054) bg_active_tab_pane_g3_cp2

0x8258,	// (0x0001504b) bg_passive_tab_pane_g1_cp2

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp2

0x8261,	// (0x00015054) bg_passive_tab_pane_g3_cp2

0x826a,	// (0x0001505d) bg_active_tab_pane_g1_cp3

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp3

0x8273,	// (0x00015066) bg_active_tab_pane_g3_cp3

0x826a,	// (0x0001505d) bg_passive_tab_pane_g1_cp3

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp3

0x8273,	// (0x00015066) bg_passive_tab_pane_g3_cp3

0x827c,	// (0x0001506f) bg_active_tab_pane_g1_cp4

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp4

0x8287,	// (0x0001507a) bg_active_tab_pane_g3_cp4

0x827c,	// (0x0001506f) bg_passive_tab_pane_g1_cp4

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp4

0x8287,	// (0x0001507a) bg_passive_tab_pane_g3_cp4

0x82d0,	// (0x000150c3) bg_active_tab_pane_g1_cp5

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp5

0x82d9,	// (0x000150cc) bg_active_tab_pane_g3_cp5

0x82d0,	// (0x000150c3) bg_passive_tab_pane_g1_cp5

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp5

0x82d9,	// (0x000150cc) bg_passive_tab_pane_g3_cp5

0x82e2,	// (0x000150d5) list_set_graphic_pane_ParamLimits

0x82e2,	// (0x000150d5) list_set_graphic_pane

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp4

0x82f5,	// (0x000150e8) list_set_graphic_pane_g1_ParamLimits

0x82f5,	// (0x000150e8) list_set_graphic_pane_g1

0x8301,	// (0x000150f4) list_set_graphic_pane_g2_ParamLimits

0x8301,	// (0x000150f4) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c541) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c541) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001c8c2) volume_small_pane_cp_g

0x8325,	// (0x00015118) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8325,	// (0x00015118) list_double2_large_graphic_pane_g1_cp2

0x8333,	// (0x00015126) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8333,	// (0x00015126) list_double2_large_graphic_pane_g2_cp2

0x8344,	// (0x00015137) list_double2_large_graphic_pane_g3_cp2

0x834c,	// (0x0001513f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x834c,	// (0x0001513f) list_double2_large_graphic_pane_t1_cp2

0x8362,	// (0x00015155) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8362,	// (0x00015155) list_double2_large_graphic_pane_t2_cp2

0xa046,	// (0x00016e39) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa046,	// (0x00016e39) list_double_large_graphic_pane_g1_cp2

0xa059,	// (0x00016e4c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa059,	// (0x00016e4c) list_double_large_graphic_pane_g2_cp2

0x84e3,	// (0x000152d6) list_double_large_graphic_pane_g3_cp2

0xa06a,	// (0x00016e5d) list_double_large_graphic_pane_g4_cp

0xa072,	// (0x00016e65) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa072,	// (0x00016e65) list_double_large_graphic_pane_t1_cp2

0xa089,	// (0x00016e7c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa089,	// (0x00016e7c) list_double_large_graphic_pane_t2_cp2

0x83d3,	// (0x000151c6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x83d3,	// (0x000151c6) list_double2_graphic_pane_g1_cp2

0x83e1,	// (0x000151d4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x83e1,	// (0x000151d4) list_double2_graphic_pane_g2_cp2

0x83f2,	// (0x000151e5) list_double2_graphic_pane_g3_cp2

0x83fc,	// (0x000151ef) list_double2_graphic_pane_t1_cp2_ParamLimits

0x83fc,	// (0x000151ef) list_double2_graphic_pane_t1_cp2

0x8412,	// (0x00015205) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8412,	// (0x00015205) list_double2_graphic_pane_t2_cp2

0x8424,	// (0x00015217) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8424,	// (0x00015217) list_single_number_heading_pane_g1_cp2

0x8430,	// (0x00015223) list_single_number_heading_pane_g2_cp2

0x8438,	// (0x0001522b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8438,	// (0x0001522b) list_single_number_heading_pane_t1_cp2

0x844e,	// (0x00015241) list_single_number_heading_pane_t2_cp2_ParamLimits

0x844e,	// (0x00015241) list_single_number_heading_pane_t2_cp2

0x8462,	// (0x00015255) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8462,	// (0x00015255) list_single_number_heading_pane_t3_cp2

0x8424,	// (0x00015217) list_single_heading_pane_g1_cp2_ParamLimits

0x8424,	// (0x00015217) list_single_heading_pane_g1_cp2

0x8430,	// (0x00015223) list_single_heading_pane_g2_cp2

0x8438,	// (0x0001522b) list_single_heading_pane_t1_cp2_ParamLimits

0x8438,	// (0x0001522b) list_single_heading_pane_t1_cp2

0x9e40,	// (0x00016c33) list_single_heading_pane_t2_cp2_ParamLimits

0x9e40,	// (0x00016c33) list_single_heading_pane_t2_cp2

0x9d88,	// (0x00016b7b) list_double_graphic_pane_g1_cp2_ParamLimits

0x9d88,	// (0x00016b7b) list_double_graphic_pane_g1_cp2

0x9d94,	// (0x00016b87) list_double_graphic_pane_g2_cp2_ParamLimits

0x9d94,	// (0x00016b87) list_double_graphic_pane_g2_cp2

0x9da3,	// (0x00016b96) list_double_graphic_pane_g3_cp2

0x9dab,	// (0x00016b9e) list_double_graphic_pane_t1_cp2_ParamLimits

0x9dab,	// (0x00016b9e) list_double_graphic_pane_t1_cp2

0x9dc1,	// (0x00016bb4) list_double_graphic_pane_t2_cp2_ParamLimits

0x9dc1,	// (0x00016bb4) list_double_graphic_pane_t2_cp2

0x84d7,	// (0x000152ca) list_double_number_pane_g1_cp2_ParamLimits

0x84d7,	// (0x000152ca) list_double_number_pane_g1_cp2

0x84e3,	// (0x000152d6) list_double_number_pane_g2_cp2

0x9d4c,	// (0x00016b3f) list_double_number_pane_t1_cp2_ParamLimits

0x9d4c,	// (0x00016b3f) list_double_number_pane_t1_cp2

0x9d60,	// (0x00016b53) list_double_number_pane_t2_cp2_ParamLimits

0x9d60,	// (0x00016b53) list_double_number_pane_t2_cp2

0x9d76,	// (0x00016b69) list_double_number_pane_t3_cp2_ParamLimits

0x9d76,	// (0x00016b69) list_double_number_pane_t3_cp2

0x9c35,	// (0x00016a28) list_single_graphic_pane_g1_cp2_ParamLimits

0x9c35,	// (0x00016a28) list_single_graphic_pane_g1_cp2

0x3e3f,	// (0x00010c32) list_single_graphic_pane_g2_cp2_ParamLimits

0x3e3f,	// (0x00010c32) list_single_graphic_pane_g2_cp2

0x853d,	// (0x00015330) list_single_graphic_pane_g3_cp2

0x9c0b,	// (0x000169fe) list_single_graphic_pane_t1_cp2_ParamLimits

0x9c0b,	// (0x000169fe) list_single_graphic_pane_t1_cp2

0x3e3f,	// (0x00010c32) list_single_number_pane_g1_cp2_ParamLimits

0x3e3f,	// (0x00010c32) list_single_number_pane_g1_cp2

0x853d,	// (0x00015330) list_single_number_pane_g2_cp2

0x9c0b,	// (0x000169fe) list_single_number_pane_t1_cp2_ParamLimits

0x9c0b,	// (0x000169fe) list_single_number_pane_t1_cp2

0x9c21,	// (0x00016a14) list_single_number_pane_t2_cp2_ParamLimits

0x9c21,	// (0x00016a14) list_single_number_pane_t2_cp2

0x8333,	// (0x00015126) list_double2_pane_g1_cp2_ParamLimits

0x8333,	// (0x00015126) list_double2_pane_g1_cp2

0x8344,	// (0x00015137) list_double2_pane_g2_cp2

0x84af,	// (0x000152a2) list_double2_pane_t1_cp2_ParamLimits

0x84af,	// (0x000152a2) list_double2_pane_t1_cp2

0x84c5,	// (0x000152b8) list_double2_pane_t2_cp2_ParamLimits

0x84c5,	// (0x000152b8) list_double2_pane_t2_cp2

0x84d7,	// (0x000152ca) list_double_pane_g1_cp2_ParamLimits

0x84d7,	// (0x000152ca) list_double_pane_g1_cp2

0x84e3,	// (0x000152d6) list_double_pane_g2_cp2

0x84eb,	// (0x000152de) list_double_pane_t1_cp2_ParamLimits

0x84eb,	// (0x000152de) list_double_pane_t1_cp2

0x8501,	// (0x000152f4) list_double_pane_t2_cp2_ParamLimits

0x8501,	// (0x000152f4) list_double_pane_t2_cp2

0x852d,	// (0x00015320) list_single_pane_cp2_g3

0x3e3f,	// (0x00010c32) list_single_pane_g1_cp2_ParamLimits

0x3e3f,	// (0x00010c32) list_single_pane_g1_cp2

0x853d,	// (0x00015330) list_single_pane_g2_cp2

0x8545,	// (0x00015338) list_single_pane_t1_cp2_ParamLimits

0x8545,	// (0x00015338) list_single_pane_t1_cp2

0x855d,	// (0x00015350) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x855d,	// (0x00015350) list_single_large_graphic_pane_g1_cp2

0x856b,	// (0x0001535e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x856b,	// (0x0001535e) list_single_large_graphic_pane_g2_cp2

0x8577,	// (0x0001536a) list_single_large_graphic_pane_g3_cp2

0x857f,	// (0x00015372) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x857f,	// (0x00015372) list_single_large_graphic_pane_g4_cp1

0x8599,	// (0x0001538c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8599,	// (0x0001538c) list_single_large_graphic_pane_t1_cp2

0x9bd5,	// (0x000169c8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9bd5,	// (0x000169c8) list_single_graphic_heading_pane_g1_cp2

0x9ba2,	// (0x00016995) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ba2,	// (0x00016995) list_single_graphic_heading_pane_g4_cp2

0x853d,	// (0x00015330) list_single_graphic_heading_pane_g5_cp2

0x9be1,	// (0x000169d4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9be1,	// (0x000169d4) list_single_graphic_heading_pane_t1_cp2

0x9bf7,	// (0x000169ea) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9bf7,	// (0x000169ea) list_single_graphic_heading_pane_t2_cp2

0x9b96,	// (0x00016989) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9b96,	// (0x00016989) list_single_2graphic_pane_g1_cp2

0x9ba2,	// (0x00016995) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ba2,	// (0x00016995) list_single_2graphic_pane_g2_cp2

0x853d,	// (0x00015330) list_single_2graphic_pane_g3_cp2

0x9bb3,	// (0x000169a6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9bb3,	// (0x000169a6) list_single_2graphic_pane_g4_cp2

0x9bbf,	// (0x000169b2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9bbf,	// (0x000169b2) list_single_2graphic_pane_t1_cp2

0x3454,	// (0x00010247) list_highlight_pane_g10_cp1

0x976e,	// (0x00016561) list_highlight_pane_g1_cp1

0x9776,	// (0x00016569) list_highlight_pane_g2_cp1

0x977e,	// (0x00016571) list_highlight_pane_g3_cp1

0x9786,	// (0x00016579) list_highlight_pane_g4_cp1

0x978e,	// (0x00016581) list_highlight_pane_g5_cp1

0x9796,	// (0x00016589) list_highlight_pane_g6_cp1

0x979e,	// (0x00016591) list_highlight_pane_g7_cp1

0x97a6,	// (0x00016599) list_highlight_pane_g8_cp1

0x97ae,	// (0x000165a1) list_highlight_pane_g9_cp1

0x968e,	// (0x00016481) form_field_slider_pane_t3

0x969c,	// (0x0001648f) form_field_slider_pane_t4

0x96aa,	// (0x0001649d) slider_form_pane_ParamLimits

0x96aa,	// (0x0001649d) slider_form_pane

0x35cd,	// (0x000103c0) control_abbreviations

0x35cd,	// (0x000103c0) control_conventions

0x35cd,	// (0x000103c0) control_definitions

0x35cd,	// (0x000103c0) format_table_attribute

0x9e96,	// (0x00016c89) bg_popup_preview_window_pane_g9

0x35cd,	// (0x000103c0) format_table_data2

0x35cd,	// (0x000103c0) format_table_data3

0x35cd,	// (0x000103c0) format_table_data_example

0x0008,

0x35cd,	// (0x000103c0) intro_purpose

0xf8ea,	// (0x0001c6dd) bg_popup_preview_window_pane_g

0x35cd,	// (0x000103c0) texts_category

0x35cd,	// (0x000103c0) texts_graphics

0x85af,	// (0x000153a2) text_digital

0x85be,	// (0x000153b1) text_primary

0x85cd,	// (0x000153c0) text_primary_small

0x85dc,	// (0x000153cf) text_secondary

0x85eb,	// (0x000153de) text_title

0xa6b5,	// (0x000174a8) bg_passive_tab_pane_g1_cp3_srt

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp3_srt

0xa6be,	// (0x000174b1) bg_passive_tab_pane_g3_cp3_srt

0x3687,	// (0x0001047a) bg_active_tab_pane_cp3_srt_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp3_srt

0xa6c7,	// (0x000174ba) tabs_4_active_pane_srt_g1

0xa6cf,	// (0x000174c2) tabs_4_active_pane_srt_t1_ParamLimits

0xa6cf,	// (0x000174c2) tabs_4_active_pane_srt_t1

0xa6b5,	// (0x000174a8) bg_active_tab_pane_g1_cp3_copy1

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp3_copy1

0xa6be,	// (0x000174b1) bg_active_tab_pane_g3_cp3_copy1

0x3687,	// (0x0001047a) tabs_2_long_active_pane_srt_ParamLimits

0x3687,	// (0x0001047a) tabs_2_long_active_pane_srt

0x3687,	// (0x0001047a) tabs_2_long_passive_pane_srt_ParamLimits

0x3687,	// (0x0001047a) tabs_2_long_passive_pane_srt

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp4_srt

0xa2ed,	// (0x000170e0) bg_passive_tab_pane_g1_cp4_srt

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp4_srt

0xa2f6,	// (0x000170e9) bg_passive_tab_pane_g3_cp4_srt

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp4_srt_ParamLimits

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp4_srt

0xa2ff,	// (0x000170f2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa2ff,	// (0x000170f2) tabs_2_long_active_pane_srt_t1

0xa2ed,	// (0x000170e0) bg_active_tab_pane_g1_cp4_srt

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp4_srt

0xa2f6,	// (0x000170e9) bg_active_tab_pane_g3_cp4_srt

0x366f,	// (0x00010462) tabs_3_long_active_pane_srt_ParamLimits

0x366f,	// (0x00010462) tabs_3_long_active_pane_srt

0x366f,	// (0x00010462) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x366f,	// (0x00010462) tabs_3_long_passive_pane_cp_srt

0x366f,	// (0x00010462) tabs_3_long_passive_pane_srt_ParamLimits

0x366f,	// (0x00010462) tabs_3_long_passive_pane_srt

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp5_srt

0x82d0,	// (0x000150c3) bg_passive_tab_pane_g1_cp5_srt

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp5_srt

0x82d9,	// (0x000150cc) bg_passive_tab_pane_g3_cp5_srt

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp5_srt_ParamLimits

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp5_srt

0xa2db,	// (0x000170ce) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa2db,	// (0x000170ce) tabs_3_long_active_pane_srt_t1

0x82d0,	// (0x000150c3) bg_active_tab_pane_g1_cp5_srt

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp5_srt

0x82d9,	// (0x000150cc) bg_active_tab_pane_g3_cp5_srt

0xa2cd,	// (0x000170c0) navi_text_pane_srt_t1

0xa2c5,	// (0x000170b8) navi_icon_pane_srt_g1

0x87c3,	// (0x000155b6) midp_editing_number_pane_srt

0x85fa,	// (0x000153ed) midp_ticker_pane_srt

0x87cb,	// (0x000155be) midp_ticker_pane_srt_g1

0x87d3,	// (0x000155c6) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c560) midp_ticker_pane_srt_g

0x87db,	// (0x000155ce) midp_ticker_pane_srt_t1

0xa2b6,	// (0x000170a9) midp_editing_number_pane_t1_copy1

0x8602,	// (0x000153f5) listscroll_midp_pane

0x8602,	// (0x000153f5) midp_form_pane

0x8671,	// (0x00015464) midp_info_popup_window_ParamLimits

0x8671,	// (0x00015464) midp_info_popup_window

0x3f29,	// (0x00010d1c) bg_popup_sub_pane_cp50_ParamLimits

0x3f29,	// (0x00010d1c) bg_popup_sub_pane_cp50

0x9398,	// (0x0001618b) listscroll_midp_info_pane_ParamLimits

0x9398,	// (0x0001618b) listscroll_midp_info_pane

0x9378,	// (0x0001616b) listscroll_form_midp_pane_ParamLimits

0x9378,	// (0x0001616b) listscroll_form_midp_pane

0x9384,	// (0x00016177) scroll_bar_cp050

0x9358,	// (0x0001614b) list_midp_pane

0xb447,	// (0x0001823a) signal_pane_g2_cp

0x9292,	// (0x00016085) listscroll_midp_info_pane_t1_ParamLimits

0x9292,	// (0x00016085) listscroll_midp_info_pane_t1

0x92aa,	// (0x0001609d) listscroll_midp_info_pane_t2_ParamLimits

0x92aa,	// (0x0001609d) listscroll_midp_info_pane_t2

0x92e8,	// (0x000160db) listscroll_midp_info_pane_t3_ParamLimits

0x92e8,	// (0x000160db) listscroll_midp_info_pane_t3

0x9322,	// (0x00016115) listscroll_midp_info_pane_t4_ParamLimits

0x9322,	// (0x00016115) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001c618) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001c618) listscroll_midp_info_pane_t

0x3fa9,	// (0x00010d9c) scroll_pane_cp21

0x922c,	// (0x0001601f) form_midp_field_choice_group_pane

0x9235,	// (0x00016028) form_midp_field_text_pane

0x9278,	// (0x0001606b) form_midp_field_time_pane

0x9280,	// (0x00016073) form_midp_gauge_slider_pane

0x9289,	// (0x0001607c) form_midp_gauge_wait_pane

0x35cd,	// (0x000103c0) form_midp_image_pane

0x920c,	// (0x00015fff) list_single_midp_pane_ParamLimits

0x920c,	// (0x00015fff) list_single_midp_pane

0x91d0,	// (0x00015fc3) form_midp_field_text_pane_t1

0x8fb3,	// (0x00015da6) input_focus_pane_cp050

0x91fb,	// (0x00015fee) list_midp_form_text_pane

0x919f,	// (0x00015f92) form_midp_field_choice_group_pane_t1

0x91ad,	// (0x00015fa0) input_focus_pane_cp051

0x91c1,	// (0x00015fb4) list_midp_choice_pane

0x35cd,	// (0x000103c0) status_idle_pane

0x9183,	// (0x00015f76) form_midp_field_time_pane_t1

0x3454,	// (0x00010247) wait_anim_pane_g2_copy1

0x9191,	// (0x00015f84) form_midp_field_time_pane_t2

0x0001,

0x8721,	// (0x00015514) aid_navinavi_width_2_pane

0xf820,	// (0x0001c613) form_midp_field_time_pane_t

0x35cd,	// (0x000103c0) input_focus_pane_cp052

0x35cd,	// (0x000103c0) bg_input_focus_pane_cp040

0x9143,	// (0x00015f36) form_midp_gauge_slider_pane_t1

0x9151,	// (0x00015f44) form_midp_gauge_slider_pane_t2

0x915f,	// (0x00015f52) form_midp_gauge_slider_pane_t3

0x916d,	// (0x00015f60) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001c60a) form_midp_gauge_slider_pane_t

0x917b,	// (0x00015f6e) form_midp_slider_pane

0x3687,	// (0x0001047a) bg_input_focus_pane_cp041_ParamLimits

0x3687,	// (0x0001047a) bg_input_focus_pane_cp041

0x9110,	// (0x00015f03) form_midp_gauge_wait_pane_t1_ParamLimits

0x9110,	// (0x00015f03) form_midp_gauge_wait_pane_t1

0x9122,	// (0x00015f15) form_midp_gauge_wait_pane_t2_ParamLimits

0x9122,	// (0x00015f15) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001c605) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001c605) form_midp_gauge_wait_pane_t

0x9134,	// (0x00015f27) form_midp_wait_pane_ParamLimits

0x9134,	// (0x00015f27) form_midp_wait_pane

0x90d8,	// (0x00015ecb) form_midp_image_pane_g1

0x90e1,	// (0x00015ed4) form_midp_image_pane_t1

0x90f0,	// (0x00015ee3) form_midp_image_pane_t2

0x90ff,	// (0x00015ef2) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001c5fe) form_midp_image_pane_t

0x90c0,	// (0x00015eb3) list_single_midp_pane_g1

0x90c9,	// (0x00015ebc) list_single_midp_pane_t1

0x90a6,	// (0x00015e99) list_midp_form_item_pane_ParamLimits

0x90a6,	// (0x00015e99) list_midp_form_item_pane

0x86c9,	// (0x000154bc) list_midp_form_item_pane_t1

0x86d8,	// (0x000154cb) midp_ticker_pane_g1

0x86e4,	// (0x000154d7) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c546) midp_ticker_pane_g

0x86f0,	// (0x000154e3) midp_ticker_pane_t1

0xa558,	// (0x0001734b) midp_editing_number_pane_t1

0xa536,	// (0x00017329) midp_editing_number_pane

0xa545,	// (0x00017338) midp_ticker_pane

0xa27e,	// (0x00017071) ai_message_heading_pane

0x35cd,	// (0x000103c0) bg_popup_window_pane_cp14

0xa286,	// (0x00017079) listscroll_ai_message_pane

0xa204,	// (0x00016ff7) ai_message_heading_pane_g1_ParamLimits

0xa204,	// (0x00016ff7) ai_message_heading_pane_g1

0xa210,	// (0x00017003) ai_message_heading_pane_g2_ParamLimits

0xa210,	// (0x00017003) ai_message_heading_pane_g2

0xa21e,	// (0x00017011) ai_message_heading_pane_g3_ParamLimits

0xa21e,	// (0x00017011) ai_message_heading_pane_g3

0xa22a,	// (0x0001701d) ai_message_heading_pane_g4_ParamLimits

0xa22a,	// (0x0001701d) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001c73f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001c73f) ai_message_heading_pane_g

0xa236,	// (0x00017029) ai_message_heading_pane_t1_ParamLimits

0xa236,	// (0x00017029) ai_message_heading_pane_t1

0xa250,	// (0x00017043) ai_message_heading_pane_t2_ParamLimits

0xa250,	// (0x00017043) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001c748) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001c748) ai_message_heading_pane_t

0xa264,	// (0x00017057) bg_popup_heading_pane_cp1_ParamLimits

0xa264,	// (0x00017057) bg_popup_heading_pane_cp1

0xa1f2,	// (0x00016fe5) list_ai_message_pane_ParamLimits

0xa1f2,	// (0x00016fe5) list_ai_message_pane

0x3fa9,	// (0x00010d9c) scroll_pane_cp10

0xa18e,	// (0x00016f81) list_ai_message_pane_g1

0xa196,	// (0x00016f89) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001c71c) list_ai_message_pane_g

0xa19e,	// (0x00016f91) list_ai_message_pane_t1_ParamLimits

0xa19e,	// (0x00016f91) list_ai_message_pane_t1

0xa1b3,	// (0x00016fa6) list_ai_message_pane_t2_ParamLimits

0xa1b3,	// (0x00016fa6) list_ai_message_pane_t2

0xa1c8,	// (0x00016fbb) list_ai_message_pane_t3_ParamLimits

0xa1c8,	// (0x00016fbb) list_ai_message_pane_t3

0xa1dd,	// (0x00016fd0) list_ai_message_pane_t4_ParamLimits

0xa1dd,	// (0x00016fd0) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001c721) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001c721) list_ai_message_pane_t

0xa177,	// (0x00016f6a) cell_ai_soft_ind_pane_ParamLimits

0xa177,	// (0x00016f6a) cell_ai_soft_ind_pane

0x8702,	// (0x000154f5) cell_ai_soft_ind_pane_g1_ParamLimits

0x8702,	// (0x000154f5) cell_ai_soft_ind_pane_g1

0x35cd,	// (0x000103c0) grid_highlight_cp1

0x870f,	// (0x00015502) text_secondary_cp56_ParamLimits

0x870f,	// (0x00015502) text_secondary_cp56

0xa14c,	// (0x00016f3f) example_general_pane_ParamLimits

0xa14c,	// (0x00016f3f) example_general_pane

0xa158,	// (0x00016f4b) example_parent_pane_g1_ParamLimits

0xa158,	// (0x00016f4b) example_parent_pane_g1

0xa164,	// (0x00016f57) example_parent_pane_t1_ParamLimits

0xa164,	// (0x00016f57) example_parent_pane_t1

0x5d4a,	// (0x00012b3d) popup_preview_text_window_ParamLimits

0x5d4a,	// (0x00012b3d) popup_preview_text_window

0x8535,	// (0x00015328) list_single_pane_cp2_g4

0x392b,	// (0x0001071e) bg_popup_preview_window_pane_ParamLimits

0x392b,	// (0x0001071e) bg_popup_preview_window_pane

0x9ea0,	// (0x00016c93) popup_preview_text_window_t1_ParamLimits

0x9ea0,	// (0x00016c93) popup_preview_text_window_t1

0x9ebe,	// (0x00016cb1) popup_preview_text_window_t2_ParamLimits

0x9ebe,	// (0x00016cb1) popup_preview_text_window_t2

0x9f07,	// (0x00016cfa) popup_preview_text_window_t3_ParamLimits

0x9f07,	// (0x00016cfa) popup_preview_text_window_t3

0x9f4c,	// (0x00016d3f) popup_preview_text_window_t4_ParamLimits

0x9f4c,	// (0x00016d3f) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001c6f0) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001c6f0) popup_preview_text_window_t

0x9fca,	// (0x00016dbd) scroll_pane_cp11

0x8e8f,	// (0x00015c82) bg_popup_preview_window_pane_g1

0x9e54,	// (0x00016c47) bg_popup_preview_window_pane_g2

0x9e5e,	// (0x00016c51) bg_popup_preview_window_pane_g3

0x9e68,	// (0x00016c5b) bg_popup_preview_window_pane_g4

0x9e72,	// (0x00016c65) bg_popup_preview_window_pane_g5

0x9e7c,	// (0x00016c6f) bg_popup_preview_window_pane_g6

0x9e84,	// (0x00016c77) bg_popup_preview_window_pane_g7

0x9e8c,	// (0x00016c7f) bg_popup_preview_window_pane_g8

0x4ed0,	// (0x00011cc3) aid_popup_width_pane

0x5d26,	// (0x00012b19) popup_midp_note_alarm_window_ParamLimits

0x5d26,	// (0x00012b19) popup_midp_note_alarm_window

0x3dd6,	// (0x00010bc9) data_form_pane_ParamLimits

0x7cca,	// (0x00014abd) form_field_data_pane_g1

0x7cd4,	// (0x00014ac7) form_field_data_pane_t1_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_ParamLimits

0x3df0,	// (0x00010be3) data_form_wide_pane_ParamLimits

0x3dfc,	// (0x00010bef) form_field_data_wide_pane_g1

0x3e28,	// (0x00010c1b) form_field_data_wide_pane_t1_ParamLimits

0x3ae3,	// (0x000108d6) input_focus_pane_cp6_ParamLimits

0x7e00,	// (0x00014bf3) input_popup_find_pane_g1_ParamLimits

0x7e00,	// (0x00014bf3) input_popup_find_pane_g1

0x5460,	// (0x00012253) aid_navi_side_left_pane

0x5475,	// (0x00012268) aid_navi_side_right_pane

0x9869,	// (0x0001665c) bg_popup_window_pane_cp30_ParamLimits

0x9869,	// (0x0001665c) bg_popup_window_pane_cp30

0x98e3,	// (0x000166d6) popup_midp_note_alarm_window_g1_ParamLimits

0x98e3,	// (0x000166d6) popup_midp_note_alarm_window_g1

0x9913,	// (0x00016706) popup_midp_note_alarm_window_t1_ParamLimits

0x9913,	// (0x00016706) popup_midp_note_alarm_window_t1

0x99b4,	// (0x000167a7) popup_midp_note_alarm_window_t2_ParamLimits

0x99b4,	// (0x000167a7) popup_midp_note_alarm_window_t2

0x9a62,	// (0x00016855) popup_midp_note_alarm_window_t3_ParamLimits

0x9a62,	// (0x00016855) popup_midp_note_alarm_window_t3

0x9a94,	// (0x00016887) popup_midp_note_alarm_window_t4_ParamLimits

0x9a94,	// (0x00016887) popup_midp_note_alarm_window_t4

0x9aba,	// (0x000168ad) popup_midp_note_alarm_window_t5_ParamLimits

0x9aba,	// (0x000168ad) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001c68d) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001c68d) popup_midp_note_alarm_window_t

0x9b66,	// (0x00016959) wait_bar_pane_cp1_ParamLimits

0x9b66,	// (0x00016959) wait_bar_pane_cp1

0x35cd,	// (0x000103c0) wait_anim_pane_copy1

0x35cd,	// (0x000103c0) wait_border_pane_copy1

0x954e,	// (0x00016341) wait_border_pane_g1_copy1

0x3e4b,	// (0x00010c3e) form_field_popup_pane_g1

0x7cee,	// (0x00014ae1) form_field_popup_pane_t1_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_cp7_ParamLimits

0x3e53,	// (0x00010c46) list_form_pane_ParamLimits

0x3e5f,	// (0x00010c52) form_field_popup_wide_pane_g1

0x3e67,	// (0x00010c5a) form_field_popup_wide_pane_t1_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_cp8_ParamLimits

0x3e79,	// (0x00010c6c) list_form_wide_pane_ParamLimits

0xa753,	// (0x00017546) aid_size_cell_graphic_pane

0x7d66,	// (0x00014b59) data_form_pane_t1_ParamLimits

0xa501,	// (0x000172f4) data_form_wide_pane_t1_ParamLimits

0x8a20,	// (0x00015813) bg_status_flat_pane

0x74fc,	// (0x000142ef) title_pane_t1_ParamLimits

0x3637,	// (0x0001042a) title_pane_t2_ParamLimits

0x365d,	// (0x00010450) title_pane_t3_ParamLimits

0xf557,	// (0x0001c34a) title_pane_t_ParamLimits

0x7ef5,	// (0x00014ce8) level_1_signal_ParamLimits

0x7f02,	// (0x00014cf5) level_2_signal_ParamLimits

0x7f0f,	// (0x00014d02) level_3_signal_ParamLimits

0x7f1c,	// (0x00014d0f) level_4_signal_ParamLimits

0x7f29,	// (0x00014d1c) level_5_signal_ParamLimits

0x7f36,	// (0x00014d29) level_6_signal_ParamLimits

0x7f43,	// (0x00014d36) level_7_signal_ParamLimits

0x7ef5,	// (0x00014ce8) level_1_battery_ParamLimits

0x7f02,	// (0x00014cf5) level_2_battery_ParamLimits

0x7f0f,	// (0x00014d02) level_3_battery_ParamLimits

0x7f1c,	// (0x00014d0f) level_4_battery_ParamLimits

0x7f29,	// (0x00014d1c) level_5_battery_ParamLimits

0x7f36,	// (0x00014d29) level_6_battery_ParamLimits

0x7f43,	// (0x00014d36) level_7_battery_ParamLimits

0x976e,	// (0x00016561) bg_status_flat_pane_g1

0x9776,	// (0x00016569) bg_status_flat_pane_g2

0x977e,	// (0x00016571) bg_status_flat_pane_g3

0x9786,	// (0x00016579) bg_status_flat_pane_g4

0x978e,	// (0x00016581) bg_status_flat_pane_g5

0x9796,	// (0x00016589) bg_status_flat_pane_g6

0x979e,	// (0x00016591) bg_status_flat_pane_g7

0x756c,	// (0x0001435f) tabs_3_active_pane_t1_ParamLimits

0x756c,	// (0x0001435f) tabs_3_passive_pane_t1_ParamLimits

0x7586,	// (0x00014379) tabs_4_active_pane_t1_ParamLimits

0x7586,	// (0x00014379) tabs_4_1_passive_pane_t1_ParamLimits

0x7e16,	// (0x00014c09) tabs_2_active_pane_t1_ParamLimits

0x7e16,	// (0x00014c09) tabs_2_passive_pane_t1_ParamLimits

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp4_ParamLimits

0x7e28,	// (0x00014c1b) tabs_2_long_active_pane_t1_ParamLimits

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp4_ParamLimits

0x60ae,	// (0x00012ea1) list_single_midp_graphic_pane_t1_ParamLimits

0x4098,	// (0x00010e8b) bg_active_tab_pane_cp5_ParamLimits

0x7e47,	// (0x00014c3a) tabs_3_long_active_pane_t1_ParamLimits

0x7e3b,	// (0x00014c2e) bg_passive_tab_pane_cp5_ParamLimits

0x60ae,	// (0x00012ea1) list_single_midp_graphic_pane_t1

0x8a20,	// (0x00015813) bg_status_flat_pane_ParamLimits

0x8ae5,	// (0x000158d8) indicator_pane_cp2_ParamLimits

0x8ae5,	// (0x000158d8) indicator_pane_cp2

0x8c28,	// (0x00015a1b) navi_pane_srt_ParamLimits

0x8c28,	// (0x00015a1b) navi_pane_srt

0x8c4c,	// (0x00015a3f) popup_clock_digital_analogue_window_cp1

0x376e,	// (0x00010561) indicator_pane_t1

0x85fa,	// (0x000153ed) copy_highlight_pane

0x85fa,	// (0x000153ed) cursor_graphics_pane

0x85fa,	// (0x000153ed) graphic_within_text_pane

0x85fa,	// (0x000153ed) link_highlight_pane

0x9f8d,	// (0x00016d80) popup_preview_text_window_t5_ParamLimits

0x9f8d,	// (0x00016d80) popup_preview_text_window_t5

0x872b,	// (0x0001551e) cursor_digital_pane

0x872b,	// (0x0001551e) cursor_primary_pane

0x873c,	// (0x0001552f) cursor_primary_small_pane

0x8744,	// (0x00015537) cursor_secondary_pane

0x874c,	// (0x0001553f) cursor_title_pane

0x872b,	// (0x0001551e) link_highlight_digital_pane

0x8733,	// (0x00015526) link_highlight_primary_pane

0x873c,	// (0x0001552f) link_highlight_primary_small_pane

0x8744,	// (0x00015537) link_highlight_secondary_pane

0x874c,	// (0x0001553f) link_highlight_title_pane

0x872b,	// (0x0001551e) copy_highlight_digital_pane

0x872b,	// (0x0001551e) copy_highlight_primary_pane

0x873c,	// (0x0001552f) copy_highlight_primary_small_pane

0x8744,	// (0x00015537) copy_highlight_secondary_pane

0x874c,	// (0x0001553f) copy_highlight_title_pane

0x8744,	// (0x00015537) graphic_text_digital_pane

0x980c,	// (0x000165ff) graphic_text_primary_pane

0x9815,	// (0x00016608) graphic_text_primary_small_pane

0x873c,	// (0x0001552f) graphic_text_secondary_pane

0x872b,	// (0x0001551e) graphic_text_title_pane

0x8754,	// (0x00015547) cursor_primary_pane_g1

0x97fe,	// (0x000165f1) cursor_text_primary_t1

0x97e6,	// (0x000165d9) cursor_primary_small_pane_g1

0x97f0,	// (0x000165e3) cursor_text_primary_small_t1

0x97ce,	// (0x000165c1) cursor_primary_small_pane_g1_copy1

0x97d8,	// (0x000165cb) cursor_text_primary_small_t1_copy1

0x97b6,	// (0x000165a9) cursor_text_title_t1

0x97c4,	// (0x000165b7) cursor_title_pane_g1

0x8754,	// (0x00015547) cursor_digital_pane_g1

0x875e,	// (0x00015551) cursor_text_digital_t1

0x876c,	// (0x0001555f) link_highlight_primary_pane_g1

0x975f,	// (0x00016552) link_highlight_primary_pane_t1

0x876c,	// (0x0001555f) link_highlight_primary_small_pane_g1

0x8774,	// (0x00015567) link_highlight_primary_small_pane_t1

0x8783,	// (0x00015576) link_highlight_secondary_pane_g1

0x878b,	// (0x0001557e) link_highlight_secondary_pane_t1

0x96d3,	// (0x000164c6) link_highlight_title_pane_g1

0x96db,	// (0x000164ce) link_highlight_title_pane_t1

0x96bc,	// (0x000164af) link_highlight_digital_pane_g1

0x96c4,	// (0x000164b7) link_highlight_digital_pane_t1

0x9584,	// (0x00016377) copy_highlight_primary_pane_g1

0x959b,	// (0x0001638e) copy_highlight_primary_pane_t1

0x9584,	// (0x00016377) copy_highlight_primary_small_pane_g1

0x958c,	// (0x0001637f) copy_highlight_primary_small_pane_t1

0x879a,	// (0x0001558d) copy_highlight_secondary_pane_g1

0x87a2,	// (0x00015595) copy_highlight_secondary_pane_t1

0x956d,	// (0x00016360) copy_highlight_title_pane_g1

0x9575,	// (0x00016368) copy_highlight_title_pane_t1

0x9584,	// (0x00016377) copy_highlight_digital_pane_g1

0xa925,	// (0x00017718) copy_highlight_digital_pane_t1

0xa879,	// (0x0001766c) graphic_text_primary_pane_g1

0xa909,	// (0x000176fc) graphic_text_primary_pane_t1

0xa917,	// (0x0001770a) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001c7bc) graphic_text_primary_pane_t

0xa8e5,	// (0x000176d8) graphic_text_primary_small_pane_g1

0xa8ed,	// (0x000176e0) graphic_text_primary_small_pane_t1

0xa8fb,	// (0x000176ee) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001c7b7) graphic_text_primary_small_pane_t

0xa8c1,	// (0x000176b4) graphic_text_secondary_pane_g1

0xa8c9,	// (0x000176bc) graphic_text_secondary_pane_t1

0xa8d7,	// (0x000176ca) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001c7b2) graphic_text_secondary_pane_t

0xa89d,	// (0x00017690) graphic_text_title_pane_g1

0xa8a5,	// (0x00017698) graphic_text_title_pane_t1

0xa8b3,	// (0x000176a6) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001c7ad) graphic_text_title_pane_t

0xa879,	// (0x0001766c) graphic_text_digital_pane_g1

0xa881,	// (0x00017674) graphic_text_digital_pane_t1

0xa88f,	// (0x00017682) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001c7a8) graphic_text_digital_pane_t

0x3687,	// (0x0001047a) navi_icon_pane_srt_ParamLimits

0x3687,	// (0x0001047a) navi_icon_pane_srt

0x35cd,	// (0x000103c0) navi_midp_pane_srt

0x35cd,	// (0x000103c0) navi_navi_pane_srt

0x3687,	// (0x0001047a) navi_text_pane_srt_ParamLimits

0x3687,	// (0x0001047a) navi_text_pane_srt

0xa844,	// (0x00017637) navi_navi_icon_text_pane_srt

0xa84c,	// (0x0001763f) navi_navi_pane_srt_g1_ParamLimits

0xa84c,	// (0x0001763f) navi_navi_pane_srt_g1

0xa85e,	// (0x00017651) navi_navi_pane_srt_g2_ParamLimits

0xa85e,	// (0x00017651) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001c7a3) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001c7a3) navi_navi_pane_srt_g

0xa870,	// (0x00017663) navi_navi_tabs_pane_srt

0xa844,	// (0x00017637) navi_navi_text_pane_srt

0xa844,	// (0x00017637) navi_navi_volume_pane_srt

0xa835,	// (0x00017628) navi_navi_text_pane_srt_t1

0x644a,	// (0x0001323d) navi_navi_volume_pane_srt_g1

0x6452,	// (0x00013245) volume_small_pane_srt_ParamLimits

0x6452,	// (0x00013245) volume_small_pane_srt

0x5744,	// (0x00012537) volume_small_pane_srt_g1_ParamLimits

0x5744,	// (0x00012537) volume_small_pane_srt_g1

0x5754,	// (0x00012547) volume_small_pane_srt_g2_ParamLimits

0x5754,	// (0x00012547) volume_small_pane_srt_g2

0x5765,	// (0x00012558) volume_small_pane_srt_g3_ParamLimits

0x5765,	// (0x00012558) volume_small_pane_srt_g3

0x5776,	// (0x00012569) volume_small_pane_srt_g4_ParamLimits

0x5776,	// (0x00012569) volume_small_pane_srt_g4

0x5787,	// (0x0001257a) volume_small_pane_srt_g5_ParamLimits

0x5787,	// (0x0001257a) volume_small_pane_srt_g5

0x5798,	// (0x0001258b) volume_small_pane_srt_g6_ParamLimits

0x5798,	// (0x0001258b) volume_small_pane_srt_g6

0x57a9,	// (0x0001259c) volume_small_pane_srt_g7_ParamLimits

0x57a9,	// (0x0001259c) volume_small_pane_srt_g7

0x57ba,	// (0x000125ad) volume_small_pane_srt_g8_ParamLimits

0x57ba,	// (0x000125ad) volume_small_pane_srt_g8

0x57cb,	// (0x000125be) volume_small_pane_srt_g9_ParamLimits

0x57cb,	// (0x000125be) volume_small_pane_srt_g9

0x57dc,	// (0x000125cf) volume_small_pane_srt_g10_ParamLimits

0x57dc,	// (0x000125cf) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c54b) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c54b) volume_small_pane_srt_g

0x39e0,	// (0x000107d3) query_popup_data_pane_cp2

0xa81b,	// (0x0001760e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa81b,	// (0x0001760e) navi_navi_icon_text_pane_srt_t1

0x980c,	// (0x000165ff) navi_tabs_2_long_pane_srt

0x980c,	// (0x000165ff) navi_tabs_2_pane_srt

0x980c,	// (0x000165ff) navi_tabs_3_long_pane_srt

0x980c,	// (0x000165ff) navi_tabs_3_pane_srt

0x980c,	// (0x000165ff) navi_tabs_4_pane_srt

0x642a,	// (0x0001321d) tabs_2_active_pane_srt_ParamLimits

0x642a,	// (0x0001321d) tabs_2_active_pane_srt

0x643a,	// (0x0001322d) tabs_2_passive_pane_srt_ParamLimits

0x643a,	// (0x0001322d) tabs_2_passive_pane_srt

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp1_srt

0xa7e7,	// (0x000175da) bg_passive_tab_pane_g1_cp1_srt

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp1_srt

0xa7f0,	// (0x000175e3) bg_passive_tab_pane_g3_cp1_srt

0x3687,	// (0x0001047a) bg_active_tab_pane_cp1_srt_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp1_srt

0xa7f9,	// (0x000175ec) tabs_2_active_pane_srt_g1

0xa801,	// (0x000175f4) tabs_2_active_pane_srt_t1_ParamLimits

0xa801,	// (0x000175f4) tabs_2_active_pane_srt_t1

0xa7e7,	// (0x000175da) bg_active_tab_pane_g1_cp1_srt

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp1_srt

0xa7f0,	// (0x000175e3) bg_active_tab_pane_g3_cp1_srt

0x63f7,	// (0x000131ea) tabs_3_active_pane_srt_ParamLimits

0x63f7,	// (0x000131ea) tabs_3_active_pane_srt

0x6408,	// (0x000131fb) tabs_3_passive_pane_cp_srt_ParamLimits

0x6408,	// (0x000131fb) tabs_3_passive_pane_cp_srt

0x6419,	// (0x0001320c) tabs_3_passive_pane_srt_ParamLimits

0x6419,	// (0x0001320c) tabs_3_passive_pane_srt

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8929,	// (0x0001571c) bg_passive_tab_pane_cp2_srt

0x87b1,	// (0x000155a4) bg_passive_tab_pane_g1_cp2_srt

0x8246,	// (0x00015039) bg_passive_tab_pane_g2_cp2_srt

0x87ba,	// (0x000155ad) bg_passive_tab_pane_g3_cp2_srt

0x3687,	// (0x0001047a) bg_active_tab_pane_cp2_srt_ParamLimits

0x3687,	// (0x0001047a) bg_active_tab_pane_cp2_srt

0xa7cd,	// (0x000175c0) tabs_3_active_pane_srt_g1

0xa7d5,	// (0x000175c8) tabs_3_active_pane_srt_t1_ParamLimits

0xa7d5,	// (0x000175c8) tabs_3_active_pane_srt_t1

0x87b1,	// (0x000155a4) bg_active_tab_pane_g1_cp2_srt

0x8246,	// (0x00015039) bg_active_tab_pane_g2_cp2_srt

0x87ba,	// (0x000155ad) bg_active_tab_pane_g3_cp2_srt

0x63af,	// (0x000131a2) tabs_4_active_pane_srt_ParamLimits

0x63af,	// (0x000131a2) tabs_4_active_pane_srt

0x63c1,	// (0x000131b4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63c1,	// (0x000131b4) tabs_4_passive_pane_cp2_srt

0x595b,	// (0x0001274e) aid_size_cell_toolbar

0x7e3b,	// (0x00014c2e) main_idle_act_pane_ParamLimits

0x5b4c,	// (0x0001293f) popup_large_graphic_colour_window_ParamLimits

0x5ef3,	// (0x00012ce6) popup_toolbar_window_ParamLimits

0x5ef3,	// (0x00012ce6) popup_toolbar_window

0xa57c,	// (0x0001736f) list_single_graphic_2heading_pane_ParamLimits

0xa57c,	// (0x0001736f) list_single_graphic_2heading_pane

0x431d,	// (0x00011110) aid_size_cell_apps_grid_lsc_pane

0x432f,	// (0x00011122) aid_size_cell_apps_grid_prt_pane

0x8929,	// (0x0001571c) bg_wml_button_pane_cp1_ParamLimits

0x8929,	// (0x0001571c) bg_wml_button_pane_cp1

0x91d0,	// (0x00015fc3) form_midp_field_text_pane_t1_ParamLimits

0x8fb3,	// (0x00015da6) input_focus_pane_cp050_ParamLimits

0x91fb,	// (0x00015fee) list_midp_form_text_pane_ParamLimits

0x91ad,	// (0x00015fa0) input_focus_pane_cp051_ParamLimits

0x91c1,	// (0x00015fb4) list_midp_choice_pane_ParamLimits

0x906c,	// (0x00015e5f) list_single_2graphic_pane_cp3_ParamLimits

0x906c,	// (0x00015e5f) list_single_2graphic_pane_cp3

0x9082,	// (0x00015e75) list_single_midp_graphic_pane_ParamLimits

0x9082,	// (0x00015e75) list_single_midp_graphic_pane

0x5fb2,	// (0x00012da5) list_single_graphic_2heading_pane_g1_ParamLimits

0x5fb2,	// (0x00012da5) list_single_graphic_2heading_pane_g1

0x5fbe,	// (0x00012db1) list_single_graphic_2heading_pane_g4_ParamLimits

0x5fbe,	// (0x00012db1) list_single_graphic_2heading_pane_g4

0x5fca,	// (0x00012dbd) list_single_graphic_2heading_pane_g5_ParamLimits

0x5fca,	// (0x00012dbd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c59e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c59e) list_single_graphic_2heading_pane_g

0x5fd6,	// (0x00012dc9) list_single_graphic_2heading_pane_t1_ParamLimits

0x5fd6,	// (0x00012dc9) list_single_graphic_2heading_pane_t1

0x5fea,	// (0x00012ddd) list_single_graphic_2heading_pane_t2_ParamLimits

0x5fea,	// (0x00012ddd) list_single_graphic_2heading_pane_t2

0x6006,	// (0x00012df9) list_single_graphic_2heading_pane_t3_ParamLimits

0x6006,	// (0x00012df9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c5a5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c5a5) list_single_graphic_2heading_pane_t

0x8d9f,	// (0x00015b92) bg_popup_sub_pane_cp2

0x8dc9,	// (0x00015bbc) grid_toobar_pane

0x601e,	// (0x00012e11) cell_toolbar_pane_ParamLimits

0x601e,	// (0x00012e11) cell_toolbar_pane

0x8e33,	// (0x00015c26) cell_toolbar_pane_g1_ParamLimits

0x8e33,	// (0x00015c26) cell_toolbar_pane_g1

0x8e47,	// (0x00015c3a) cell_toolbar_pane_g2_ParamLimits

0x8e47,	// (0x00015c3a) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c5b3) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c5b3) cell_toolbar_pane_g

0x8e69,	// (0x00015c5c) grid_highlight_pane_cp2_ParamLimits

0x8e69,	// (0x00015c5c) grid_highlight_pane_cp2

0x8e83,	// (0x00015c76) toolbar_button_pane

0x8e8f,	// (0x00015c82) toolbar_button_pane_g1

0x8e97,	// (0x00015c8a) toolbar_button_pane_g2

0x8e9f,	// (0x00015c92) toolbar_button_pane_g3

0x8ea7,	// (0x00015c9a) toolbar_button_pane_g4

0x8eaf,	// (0x00015ca2) toolbar_button_pane_g5

0x8eb7,	// (0x00015caa) toolbar_button_pane_g6

0x8ebf,	// (0x00015cb2) toolbar_button_pane_g7

0x8ec7,	// (0x00015cba) toolbar_button_pane_g8

0x8ecf,	// (0x00015cc2) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c5b8) toolbar_button_pane_g

0x6056,	// (0x00012e49) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6056,	// (0x00012e49) list_single_2graphic_pane_g1_cp3

0x6062,	// (0x00012e55) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6062,	// (0x00012e55) list_single_2graphic_pane_g2_cp3

0x6073,	// (0x00012e66) list_single_2graphic_pane_g3_cp3

0x607b,	// (0x00012e6e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x607b,	// (0x00012e6e) list_single_2graphic_pane_g4_cp3

0x6087,	// (0x00012e7a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6087,	// (0x00012e7a) list_single_2graphic_pane_t1_cp3

0x60a2,	// (0x00012e95) list_single_midp_graphic_pane_g2_ParamLimits

0x60a2,	// (0x00012e95) list_single_midp_graphic_pane_g2

0x5963,	// (0x00012756) aid_zoom_text_primary

0x596b,	// (0x0001275e) aid_zoom_text_secondary

0x886b,	// (0x0001565e) status_small_pane_g7_ParamLimits

0x886b,	// (0x0001565e) status_small_pane_g7

0x888e,	// (0x00015681) status_small_pane_t1_ParamLimits

0x74d7,	// (0x000142ca) title_pane_g2

0x0003,

0xf54e,	// (0x0001c341) title_pane_g

0x76ad,	// (0x000144a0) aid_size_cell_colour_1_pane_ParamLimits

0x76ad,	// (0x000144a0) aid_size_cell_colour_1_pane

0x76c1,	// (0x000144b4) aid_size_cell_colour_2_pane_ParamLimits

0x76c1,	// (0x000144b4) aid_size_cell_colour_2_pane

0x76d5,	// (0x000144c8) aid_size_cell_colour_3_pane_ParamLimits

0x76d5,	// (0x000144c8) aid_size_cell_colour_3_pane

0x76e9,	// (0x000144dc) aid_size_cell_colour_4_pane_ParamLimits

0x76e9,	// (0x000144dc) aid_size_cell_colour_4_pane

0x539c,	// (0x0001218f) title_pane_stacon_g1_ParamLimits

0x539c,	// (0x0001218f) title_pane_stacon_g1

0x95f2,	// (0x000163e5) popup_note_wait_window_g3_ParamLimits

0x95f2,	// (0x000163e5) popup_note_wait_window_g3

0x9669,	// (0x0001645c) popup_note_wait_window_t5_ParamLimits

0x9669,	// (0x0001645c) popup_note_wait_window_t5

0x35cd,	// (0x000103c0) main_feb_china_hwr_fs_writing_pane

0x5a13,	// (0x00012806) popup_feb_china_hwr_fs_window_ParamLimits

0x5a13,	// (0x00012806) popup_feb_china_hwr_fs_window

0x60c4,	// (0x00012eb7) aid_size_cell_hwr_fs_ParamLimits

0x60c4,	// (0x00012eb7) aid_size_cell_hwr_fs

0x8fb3,	// (0x00015da6) bg_popup_sub_pane_cp3_ParamLimits

0x8fb3,	// (0x00015da6) bg_popup_sub_pane_cp3

0x60d9,	// (0x00012ecc) grid_hwr_fs_pane_ParamLimits

0x60d9,	// (0x00012ecc) grid_hwr_fs_pane

0x60f1,	// (0x00012ee4) linegrid_hwr_fs_pane_ParamLimits

0x60f1,	// (0x00012ee4) linegrid_hwr_fs_pane

0x6101,	// (0x00012ef4) cell_hwr_fs_pane_ParamLimits

0x6101,	// (0x00012ef4) cell_hwr_fs_pane

0x8fbf,	// (0x00015db2) linegrid_hwr_fs_pane_g1_ParamLimits

0x8fbf,	// (0x00015db2) linegrid_hwr_fs_pane_g1

0x8fcb,	// (0x00015dbe) linegrid_hwr_fs_pane_g2_ParamLimits

0x8fcb,	// (0x00015dbe) linegrid_hwr_fs_pane_g2

0x8fdd,	// (0x00015dd0) linegrid_hwr_fs_pane_g3_ParamLimits

0x8fdd,	// (0x00015dd0) linegrid_hwr_fs_pane_g3

0x6125,	// (0x00012f18) linegrid_hwr_fs_pane_g4_ParamLimits

0x6125,	// (0x00012f18) linegrid_hwr_fs_pane_g4

0x6143,	// (0x00012f36) linegrid_hwr_fs_pane_g5_ParamLimits

0x6143,	// (0x00012f36) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001c5e3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001c5e3) linegrid_hwr_fs_pane_g

0x8fe9,	// (0x00015ddc) cell_hwr_fs_pane_g1_ParamLimits

0x8fe9,	// (0x00015ddc) cell_hwr_fs_pane_g1

0x8cda,	// (0x00015acd) cell_hwr_fs_pane_g2_ParamLimits

0x8cda,	// (0x00015acd) cell_hwr_fs_pane_g2

0x8fff,	// (0x00015df2) cell_hwr_fs_pane_g3_ParamLimits

0x8fff,	// (0x00015df2) cell_hwr_fs_pane_g3

0x900c,	// (0x00015dff) cell_hwr_fs_pane_g4_ParamLimits

0x900c,	// (0x00015dff) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001c5ee) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001c5ee) cell_hwr_fs_pane_g

0x6159,	// (0x00012f4c) cell_hwr_fs_pane_t1

0x35cd,	// (0x000103c0) grid_highlight_pane_cp6

0x35cd,	// (0x000103c0) main_idle_act2_pane

0x3f90,	// (0x00010d83) aid_inside_area_popup_secondary

0x9ca2,	// (0x00016a95) aid_inside_area_window_primary_ParamLimits

0x9ca2,	// (0x00016a95) aid_inside_area_window_primary

0xa934,	// (0x00017727) ai2_news_ticker_pane

0xa93c,	// (0x0001772f) aid_size_cell_ai1_link_ParamLimits

0xa93c,	// (0x0001772f) aid_size_cell_ai1_link

0xa956,	// (0x00017749) popup_ai2_data_window_ParamLimits

0xa956,	// (0x00017749) popup_ai2_data_window

0xa974,	// (0x00017767) popup_ai2_link_window_ParamLimits

0xa974,	// (0x00017767) popup_ai2_link_window

0x8fb3,	// (0x00015da6) bg_popup_sub_pane_cp4_ParamLimits

0x8fb3,	// (0x00015da6) bg_popup_sub_pane_cp4

0xa98a,	// (0x0001777d) grid_ai2_link_pane_ParamLimits

0xa98a,	// (0x0001777d) grid_ai2_link_pane

0xa9a1,	// (0x00017794) popup_ai2_link_window_g1_ParamLimits

0xa9a1,	// (0x00017794) popup_ai2_link_window_g1

0xa9ad,	// (0x000177a0) popup_ai2_link_window_g2_ParamLimits

0xa9ad,	// (0x000177a0) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001c7c1) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001c7c1) popup_ai2_link_window_g

0xa9be,	// (0x000177b1) ai2_mp_button_pane

0xa9c6,	// (0x000177b9) ai2_mp_volume_pane

0x91ad,	// (0x00015fa0) bg_popup_sub_pane_cp5_ParamLimits

0x91ad,	// (0x00015fa0) bg_popup_sub_pane_cp5

0xa9ce,	// (0x000177c1) heading_ai2_gene_pane_ParamLimits

0xa9ce,	// (0x000177c1) heading_ai2_gene_pane

0xa9da,	// (0x000177cd) list_ai2_gene_pane_ParamLimits

0xa9da,	// (0x000177cd) list_ai2_gene_pane

0xaa22,	// (0x00017815) cell_ai2_link_pane_ParamLimits

0xaa22,	// (0x00017815) cell_ai2_link_pane

0xaa38,	// (0x0001782b) cell_ai2_link_pane_g1

0x35cd,	// (0x000103c0) grid_highlight_pane_cp7

0x6467,	// (0x0001325a) ai2_mp_volume_pane_g1

0xab0b,	// (0x000178fe) ai2_mp_volume_pane_g2

0xaa80,	// (0x00017873) list_ai2_gene_pane_t1

0xab13,	// (0x00017906) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001c7da) ai2_mp_volume_pane_g

0x646f,	// (0x00013262) volume_small_pane_cp3

0xab1b,	// (0x0001790e) aid_size_cell_ai2_button

0xab23,	// (0x00017916) grid_ai2_button_pane

0xab2c,	// (0x0001791f) cell_ai2_button_pane_ParamLimits

0xab2c,	// (0x0001791f) cell_ai2_button_pane

0x3454,	// (0x00010247) cell_ai2_button_pane_g1

0x35cd,	// (0x000103c0) grid_highlight_pane_cp8

0xaacb,	// (0x000178be) ai2_gene_pane_t1_ParamLimits

0xaacb,	// (0x000178be) ai2_gene_pane_t1

0x5951,	// (0x00012744) aid_height_parent_landscape

0xa34f,	// (0x00017142) aid_height_set_list

0xa360,	// (0x00017153) aid_size_parent

0xa753,	// (0x00017546) aid_size_cell_graphic_pane_ParamLimits

0xa9ea,	// (0x000177dd) popup_ai2_data_window_g1_ParamLimits

0xa9ea,	// (0x000177dd) popup_ai2_data_window_g1

0xa9f6,	// (0x000177e9) ai2_news_ticker_pane_g1

0xa9fe,	// (0x000177f1) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001c7c6) ai2_news_ticker_pane_g

0xaa06,	// (0x000177f9) ai2_news_ticker_pane_t1

0xaa14,	// (0x00017807) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001c7cb) ai2_news_ticker_pane_t

0xaa41,	// (0x00017834) heading_ai2_gene_pane_g1

0xaa49,	// (0x0001783c) heading_ai2_gene_pane_t1_ParamLimits

0xaa49,	// (0x0001783c) heading_ai2_gene_pane_t1

0xaa5e,	// (0x00017851) list_highlight_pane_cp6

0xaa66,	// (0x00017859) ai2_gene_pane_ParamLimits

0xaa66,	// (0x00017859) ai2_gene_pane

0xaa8e,	// (0x00017881) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001c7d0) list_ai2_gene_pane_t

0xaa9c,	// (0x0001788f) list_highlight_pane_cp8_ParamLimits

0xaa9c,	// (0x0001788f) list_highlight_pane_cp8

0xaaad,	// (0x000178a0) ai2_gene_pane_g1_ParamLimits

0xaaad,	// (0x000178a0) ai2_gene_pane_g1

0xaabf,	// (0x000178b2) ai2_gene_pane_g2_ParamLimits

0xaabf,	// (0x000178b2) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001c7d5) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001c7d5) ai2_gene_pane_g

0x3cfe,	// (0x00010af1) scroll_pane_cp12

0x590e,	// (0x00012701) control_pane_t3_ParamLimits

0x590e,	// (0x00012701) control_pane_t3

0x887f,	// (0x00015672) status_small_pane_g8_ParamLimits

0x887f,	// (0x00015672) status_small_pane_g8

0x5b11,	// (0x00012904) popup_find_window_ParamLimits

0x5d3c,	// (0x00012b2f) popup_note_image_window_ParamLimits

0x8e05,	// (0x00015bf8) list_double2_graphic_pane_vc_g1_ParamLimits

0x8e05,	// (0x00015bf8) list_double2_graphic_pane_vc_g1

0x856b,	// (0x0001535e) list_double2_graphic_pane_vc_g2_ParamLimits

0x856b,	// (0x0001535e) list_double2_graphic_pane_vc_g2

0x8e11,	// (0x00015c04) list_double2_graphic_pane_vc_g3_ParamLimits

0x8e11,	// (0x00015c04) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c5ac) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c5ac) list_double2_graphic_pane_vc_g

0x8e1d,	// (0x00015c10) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e1d,	// (0x00015c10) list_double2_graphic_pane_vc_t1

0x856b,	// (0x0001535e) list_single_heading_pane_vc_g1_ParamLimits

0x856b,	// (0x0001535e) list_single_heading_pane_vc_g1

0x8e11,	// (0x00015c04) list_single_heading_pane_vc_g2_ParamLimits

0x8e11,	// (0x00015c04) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c5cd) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c5cd) list_single_heading_pane_vc_g

0x8ed7,	// (0x00015cca) list_single_heading_pane_vc_t1_ParamLimits

0x8ed7,	// (0x00015cca) list_single_heading_pane_vc_t1

0x8eed,	// (0x00015ce0) list_single_heading_pane_vc_t2_ParamLimits

0x8eed,	// (0x00015ce0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c5d2) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c5d2) list_single_heading_pane_vc_t

0x8eff,	// (0x00015cf2) list_setting_number_pane_vc_g1_ParamLimits

0x8eff,	// (0x00015cf2) list_setting_number_pane_vc_g1

0x8f0b,	// (0x00015cfe) list_setting_number_pane_vc_g2_ParamLimits

0x8f0b,	// (0x00015cfe) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c5d7) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c5d7) list_setting_number_pane_vc_g

0x8f17,	// (0x00015d0a) list_setting_number_pane_vc_t1_ParamLimits

0x8f17,	// (0x00015d0a) list_setting_number_pane_vc_t1

0x8f2b,	// (0x00015d1e) list_setting_number_pane_vc_t2_ParamLimits

0x8f2b,	// (0x00015d1e) list_setting_number_pane_vc_t2

0x8f47,	// (0x00015d3a) list_setting_number_pane_vc_t3_ParamLimits

0x8f47,	// (0x00015d3a) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001c5dc) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001c5dc) list_setting_number_pane_vc_t

0x8f75,	// (0x00015d68) set_value_pane_vc_ParamLimits

0x8f75,	// (0x00015d68) set_value_pane_vc

0xa57c,	// (0x0001736f) list_double2_graphic_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double2_graphic_pane_vc

0xa57c,	// (0x0001736f) list_double2_large_graphic_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double2_large_graphic_pane_vc

0xa57c,	// (0x0001736f) list_double2_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double2_pane_vc

0xa57c,	// (0x0001736f) list_double_graphic_heading_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_graphic_heading_pane_vc

0xa57c,	// (0x0001736f) list_double_graphic_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_graphic_pane_vc

0xa57c,	// (0x0001736f) list_double_heading_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_heading_pane_vc

0xa5a4,	// (0x00017397) list_double_large_graphic_pane_vc_ParamLimits

0xa5a4,	// (0x00017397) list_double_large_graphic_pane_vc

0xa57c,	// (0x0001736f) list_double_number_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_number_pane_vc

0xa57c,	// (0x0001736f) list_double_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_pane_vc

0xa57c,	// (0x0001736f) list_double_time_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_double_time_pane_vc

0xa57c,	// (0x0001736f) list_setting_number_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_setting_number_pane_vc

0xa57c,	// (0x0001736f) list_setting_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_setting_pane_vc

0xa57c,	// (0x0001736f) list_single_graphic_heading_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_single_graphic_heading_pane_vc

0xa57c,	// (0x0001736f) list_single_heading_pane_vc_ParamLimits

0xa57c,	// (0x0001736f) list_single_heading_pane_vc

0xa5c6,	// (0x000173b9) list_single_number_heading_pane_vc_ParamLimits

0xa5c6,	// (0x000173b9) list_single_number_heading_pane_vc

0x8e05,	// (0x00015bf8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8e05,	// (0x00015bf8) list_double_graphic_heading_pane_vc_g1

0xab5f,	// (0x00017952) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xab5f,	// (0x00017952) list_double_graphic_heading_pane_vc_g2

0xab6b,	// (0x0001795e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xab6b,	// (0x0001795e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001c7e1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001c7e1) list_double_graphic_heading_pane_vc_g

0xab77,	// (0x0001796a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xab77,	// (0x0001796a) list_double_graphic_heading_pane_vc_t1

0xab8d,	// (0x00017980) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xab8d,	// (0x00017980) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c7e8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001c7e8) list_double_graphic_heading_pane_vc_t

0x8eff,	// (0x00015cf2) list_setting_pane_vc_g1_ParamLimits

0x8eff,	// (0x00015cf2) list_setting_pane_vc_g1

0x8f0b,	// (0x00015cfe) list_setting_pane_vc_g2_ParamLimits

0x8f0b,	// (0x00015cfe) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c5d7) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c5d7) list_setting_pane_vc_g

0xadc6,	// (0x00017bb9) list_setting_pane_vc_t1_ParamLimits

0xadc6,	// (0x00017bb9) list_setting_pane_vc_t1

0xade2,	// (0x00017bd5) list_setting_pane_vc_t2_ParamLimits

0xade2,	// (0x00017bd5) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001c816) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001c816) list_setting_pane_vc_t

0x8f75,	// (0x00015d68) set_value_pane_cp_vc_ParamLimits

0x8f75,	// (0x00015d68) set_value_pane_cp_vc

0x856b,	// (0x0001535e) list_single_number_heading_pane_vc_g1_ParamLimits

0x856b,	// (0x0001535e) list_single_number_heading_pane_vc_g1

0x8e11,	// (0x00015c04) list_single_number_heading_pane_vc_g2_ParamLimits

0x8e11,	// (0x00015c04) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c5cd) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c5cd) list_single_number_heading_pane_vc_g

0xadfe,	// (0x00017bf1) list_single_number_heading_pane_vc_t1_ParamLimits

0xadfe,	// (0x00017bf1) list_single_number_heading_pane_vc_t1

0xae14,	// (0x00017c07) list_single_number_heading_pane_vc_t2_ParamLimits

0xae14,	// (0x00017c07) list_single_number_heading_pane_vc_t2

0xae26,	// (0x00017c19) list_single_number_heading_pane_vc_t3_ParamLimits

0xae26,	// (0x00017c19) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001c81b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001c81b) list_single_number_heading_pane_vc_t

0x8e05,	// (0x00015bf8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8e05,	// (0x00015bf8) list_single_graphic_heading_pane_vc_g1

0x856b,	// (0x0001535e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x856b,	// (0x0001535e) list_single_graphic_heading_pane_vc_g4

0x8e11,	// (0x00015c04) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8e11,	// (0x00015c04) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c5ac) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c5ac) list_single_graphic_heading_pane_vc_g

0xadfe,	// (0x00017bf1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xadfe,	// (0x00017bf1) list_single_graphic_heading_pane_vc_t1

0xae38,	// (0x00017c2b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xae38,	// (0x00017c2b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001c822) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001c822) list_single_graphic_heading_pane_vc_t

0x856b,	// (0x0001535e) list_double2_pane_vc_g1_ParamLimits

0x856b,	// (0x0001535e) list_double2_pane_vc_g1

0x8e11,	// (0x00015c04) list_double2_pane_vc_g2_ParamLimits

0x8e11,	// (0x00015c04) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c5cd) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c5cd) list_double2_pane_vc_g

0xae4a,	// (0x00017c3d) list_double2_pane_vc_t1_ParamLimits

0xae4a,	// (0x00017c3d) list_double2_pane_vc_t1

0xae60,	// (0x00017c53) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae60,	// (0x00017c53) list_double2_large_graphic_pane_vc_g1

0x856b,	// (0x0001535e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x856b,	// (0x0001535e) list_double2_large_graphic_pane_vc_g2

0x8e11,	// (0x00015c04) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8e11,	// (0x00015c04) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001c827) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001c827) list_double2_large_graphic_pane_vc_g

0xae6c,	// (0x00017c5f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xae6c,	// (0x00017c5f) list_double2_large_graphic_pane_vc_t1

0xae82,	// (0x00017c75) list_double_time_pane_vc_g1_ParamLimits

0xae82,	// (0x00017c75) list_double_time_pane_vc_g1

0xae8e,	// (0x00017c81) list_double_time_pane_vc_g2_ParamLimits

0xae8e,	// (0x00017c81) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001c82e) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001c82e) list_double_time_pane_vc_g

0xae9a,	// (0x00017c8d) list_double_time_pane_vc_t1_ParamLimits

0xae9a,	// (0x00017c8d) list_double_time_pane_vc_t1

0xaeca,	// (0x00017cbd) list_double_time_pane_vc_t2_ParamLimits

0xaeca,	// (0x00017cbd) list_double_time_pane_vc_t2

0xaef3,	// (0x00017ce6) list_double_time_pane_vc_t3_ParamLimits

0xaef3,	// (0x00017ce6) list_double_time_pane_vc_t3

0xaf05,	// (0x00017cf8) list_double_time_pane_vc_t4_ParamLimits

0xaf05,	// (0x00017cf8) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001c833) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001c833) list_double_time_pane_vc_t

0x856b,	// (0x0001535e) list_double_pane_vc_g1_ParamLimits

0x856b,	// (0x0001535e) list_double_pane_vc_g1

0x8e11,	// (0x00015c04) list_double_pane_vc_g2_ParamLimits

0x8e11,	// (0x00015c04) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c5cd) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c5cd) list_double_pane_vc_g

0xaf19,	// (0x00017d0c) list_double_pane_vc_t1_ParamLimits

0xaf19,	// (0x00017d0c) list_double_pane_vc_t1

0xaf2d,	// (0x00017d20) list_double_pane_vc_t2_ParamLimits

0xaf2d,	// (0x00017d20) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001c83c) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001c83c) list_double_pane_vc_t

0x856b,	// (0x0001535e) list_double_number_pane_vc_g1_ParamLimits

0x856b,	// (0x0001535e) list_double_number_pane_vc_g1

0x8e11,	// (0x00015c04) list_double_number_pane_vc_g2_ParamLimits

0x8e11,	// (0x00015c04) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c5cd) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c5cd) list_double_number_pane_vc_g

0xaf43,	// (0x00017d36) list_double_number_pane_vc_t1_ParamLimits

0xaf43,	// (0x00017d36) list_double_number_pane_vc_t1

0xaf55,	// (0x00017d48) list_double_number_pane_vc_t2_ParamLimits

0xaf55,	// (0x00017d48) list_double_number_pane_vc_t2

0xaf2d,	// (0x00017d20) list_double_number_pane_vc_t3_ParamLimits

0xaf2d,	// (0x00017d20) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001c841) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001c841) list_double_number_pane_vc_t

0xaf69,	// (0x00017d5c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaf69,	// (0x00017d5c) list_double_large_graphic_pane_vc_g1

0xaf8b,	// (0x00017d7e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaf8b,	// (0x00017d7e) list_double_large_graphic_pane_vc_g2

0xaf9f,	// (0x00017d92) list_double_large_graphic_pane_vc_g3_ParamLimits

0xaf9f,	// (0x00017d92) list_double_large_graphic_pane_vc_g3

0xafae,	// (0x00017da1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xafae,	// (0x00017da1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001c848) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001c848) list_double_large_graphic_pane_vc_g

0xafbd,	// (0x00017db0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xafbd,	// (0x00017db0) list_double_large_graphic_pane_vc_t1

0xafd9,	// (0x00017dcc) list_double_large_graphic_pane_vc_t2_ParamLimits

0xafd9,	// (0x00017dcc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001c851) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001c851) list_double_large_graphic_pane_vc_t

0xab5f,	// (0x00017952) list_double_heading_pane_vc_g1_ParamLimits

0xab5f,	// (0x00017952) list_double_heading_pane_vc_g1

0xab6b,	// (0x0001795e) list_double_heading_pane_vc_g2_ParamLimits

0xab6b,	// (0x0001795e) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001c856) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001c856) list_double_heading_pane_vc_g

0xaff9,	// (0x00017dec) list_double_heading_pane_vc_t1_ParamLimits

0xaff9,	// (0x00017dec) list_double_heading_pane_vc_t1

0xb00b,	// (0x00017dfe) list_double_heading_pane_vc_t2_ParamLimits

0xb00b,	// (0x00017dfe) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001c85b) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001c85b) list_double_heading_pane_vc_t

0xb023,	// (0x00017e16) list_double_graphic_pane_vc_g1_ParamLimits

0xb023,	// (0x00017e16) list_double_graphic_pane_vc_g1

0xb02f,	// (0x00017e22) list_double_graphic_pane_vc_g2_ParamLimits

0xb02f,	// (0x00017e22) list_double_graphic_pane_vc_g2

0x856b,	// (0x0001535e) list_double_graphic_pane_vc_g3_ParamLimits

0x856b,	// (0x0001535e) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001c860) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001c860) list_double_graphic_pane_vc_g

0xb04c,	// (0x00017e3f) list_double_graphic_pane_vc_t1_ParamLimits

0xb04c,	// (0x00017e3f) list_double_graphic_pane_vc_t1

0xb076,	// (0x00017e69) list_double_graphic_pane_vc_t2_ParamLimits

0xb076,	// (0x00017e69) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001c869) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001c869) list_double_graphic_pane_vc_t

0x4edc,	// (0x00011ccf) aid_size_cell_fastswap

0x4ee4,	// (0x00011cd7) aid_size_cell_touch_ParamLimits

0x4ee4,	// (0x00011cd7) aid_size_cell_touch

0x514f,	// (0x00011f42) popup_fast_swap_wide_window_ParamLimits

0x514f,	// (0x00011f42) popup_fast_swap_wide_window

0x526d,	// (0x00012060) touch_pane_ParamLimits

0x526d,	// (0x00012060) touch_pane

0x3d77,	// (0x00010b6a) button_value_adjust_pane_cp2

0x3d7f,	// (0x00010b72) button_value_adjust_pane_cp4

0x3d87,	// (0x00010b7a) form_field_data_pane_cp2

0x7c9e,	// (0x00014a91) form_field_data_wide_pane_cp2

0x435e,	// (0x00011151) bg_scroll_pane_ParamLimits

0x5501,	// (0x000122f4) scroll_handle_pane_ParamLimits

0x5515,	// (0x00012308) scroll_sc2_down_pane_ParamLimits

0x5515,	// (0x00012308) scroll_sc2_down_pane

0x43b8,	// (0x000111ab) scroll_sc2_up_pane_ParamLimits

0x43b8,	// (0x000111ab) scroll_sc2_up_pane

0xb52f,	// (0x00018322) grid_wheel_folder_pane_g1_ParamLimits

0xb52f,	// (0x00018322) grid_wheel_folder_pane_g1

0x56dc,	// (0x000124cf) clock_nsta_pane_cp2_ParamLimits

0x56dc,	// (0x000124cf) clock_nsta_pane_cp2

0x8602,	// (0x000153f5) listscroll_midp_pane_ParamLimits

0x860e,	// (0x00015401) midp_canvas_pane

0x88f9,	// (0x000156ec) nsta_clock_indic_pane

0x8935,	// (0x00015728) listscroll_form_pane_vc

0x893d,	// (0x00015730) listscroll_set_pane_vc_ParamLimits

0x893d,	// (0x00015730) listscroll_set_pane_vc

0x8a3c,	// (0x0001582f) clock_nsta_pane

0x8ab3,	// (0x000158a6) indicator_nsta_pane

0x8d9f,	// (0x00015b92) bg_popup_sub_pane_cp2_ParamLimits

0x8db3,	// (0x00015ba6) find_pane_cp2_ParamLimits

0x8db3,	// (0x00015ba6) find_pane_cp2

0x8dc9,	// (0x00015bbc) grid_toobar_pane_ParamLimits

0x8f87,	// (0x00015d7a) list_form_gen_pane_vc_ParamLimits

0x8f87,	// (0x00015d7a) list_form_gen_pane_vc

0x8f9d,	// (0x00015d90) scroll_pane_cp8_vc_ParamLimits

0x8f9d,	// (0x00015d90) scroll_pane_cp8_vc

0x9019,	// (0x00015e0c) data_form_wide_pane_vc_ParamLimits

0x9019,	// (0x00015e0c) data_form_wide_pane_vc

0x9025,	// (0x00015e18) form_field_data_wide_pane_vc_g1

0x902d,	// (0x00015e20) form_field_data_wide_pane_vc_t1_ParamLimits

0x902d,	// (0x00015e20) form_field_data_wide_pane_vc_t1

0x3de2,	// (0x00010bd5) input_focus_pane_cp6_vc_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_cp6_vc

0x9358,	// (0x0001614b) list_midp_pane_ParamLimits

0x9364,	// (0x00016157) scroll_pane_cp16_ParamLimits

0x9364,	// (0x00016157) scroll_pane_cp16

0x93c6,	// (0x000161b9) button_value_adjust_pane_ParamLimits

0x93c6,	// (0x000161b9) button_value_adjust_pane

0xa372,	// (0x00017165) button_value_adjust_pane_cp6_ParamLimits

0xa372,	// (0x00017165) button_value_adjust_pane_cp6

0xa4ba,	// (0x000172ad) settings_code_pane_cp_ParamLimits

0xa4ba,	// (0x000172ad) settings_code_pane_cp

0x3454,	// (0x00010247) cell_touch_pane_g1

0x3454,	// (0x00010247) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c4f1) cell_touch_pane_g

0xab3e,	// (0x00017931) cell_touch_pane_cp_ParamLimits

0xab3e,	// (0x00017931) cell_touch_pane_cp

0xab4e,	// (0x00017941) cell_touch_pane_ParamLimits

0xab4e,	// (0x00017941) cell_touch_pane

0x3454,	// (0x00010247) scroll_sc2_down_pane_g1

0x3454,	// (0x00010247) scroll_sc2_up_pane_g1

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp4_vc

0xabab,	// (0x0001799e) list_set_graphic_pane_vc_g1_ParamLimits

0xabab,	// (0x0001799e) list_set_graphic_pane_vc_g1

0xabb7,	// (0x000179aa) list_set_graphic_pane_vc_g2_ParamLimits

0xabb7,	// (0x000179aa) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001c7ed) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001c7ed) list_set_graphic_pane_vc_g

0xabc3,	// (0x000179b6) text_primary_small_cp13_vc_ParamLimits

0xabc3,	// (0x000179b6) text_primary_small_cp13_vc

0x82e2,	// (0x000150d5) list_set_graphic_pane_vc_ParamLimits

0x82e2,	// (0x000150d5) list_set_graphic_pane_vc

0x35cd,	// (0x000103c0) input_focus_pane_cp2_vc

0x3454,	// (0x00010247) setting_code_pane_vc_g1

0x3727,	// (0x0001051a) setting_code_pane_vc_t1

0xabdb,	// (0x000179ce) set_text_pane_vc_t1_ParamLimits

0xabdb,	// (0x000179ce) set_text_pane_vc_t1

0x35cd,	// (0x000103c0) input_focus_pane_cp1_vc

0xabf9,	// (0x000179ec) list_set_text_pane_vc

0x3454,	// (0x00010247) setting_text_pane_vc_g1

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp2_vc

0x36f6,	// (0x000104e9) setting_slider_graphic_pane_vc_g1

0xac03,	// (0x000179f6) setting_slider_graphic_pane_vc_t1

0xac15,	// (0x00017a08) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001c7f2) setting_slider_graphic_pane_vc_t

0xac27,	// (0x00017a1a) slider_set_pane_cp_vc

0xac31,	// (0x00017a24) slider_set_pane_vc_g1

0xac3a,	// (0x00017a2d) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001c7f7) slider_set_pane_vc_g

0x3ea9,	// (0x00010c9c) set_opt_bg_pane_g1_copy1

0x3eb1,	// (0x00010ca4) set_opt_bg_pane_g2_copy1

0xac66,	// (0x00017a59) set_opt_bg_pane_g3_copy1

0x3ec1,	// (0x00010cb4) set_opt_bg_pane_g4_copy1

0x3ec9,	// (0x00010cbc) set_opt_bg_pane_g5_copy1

0x3ed1,	// (0x00010cc4) set_opt_bg_pane_g6_copy1

0xac70,	// (0x00017a63) set_opt_bg_pane_g7_copy1

0xac7a,	// (0x00017a6d) set_opt_bg_pane_g8_copy1

0xac84,	// (0x00017a77) set_opt_bg_pane_g9_copy1

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp_vc

0xac8e,	// (0x00017a81) setting_slider_pane_vc_t1

0xac9d,	// (0x00017a90) setting_slider_pane_vc_t2

0xacaf,	// (0x00017aa2) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001c806) setting_slider_pane_vc_t

0xacc1,	// (0x00017ab4) slider_set_pane_vc

0x6167,	// (0x00012f5a) volume_set_pane_vc_g1

0x6170,	// (0x00012f63) volume_set_pane_vc_g2

0x6179,	// (0x00012f6c) volume_set_pane_vc_g3

0x6182,	// (0x00012f75) volume_set_pane_vc_g4

0x618b,	// (0x00012f7e) volume_set_pane_vc_g5

0x6194,	// (0x00012f87) volume_set_pane_vc_g6

0x619d,	// (0x00012f90) volume_set_pane_vc_g7

0x61a6,	// (0x00012f99) volume_set_pane_vc_g8

0x61af,	// (0x00012fa2) volume_set_pane_vc_g9

0x61b8,	// (0x00012fab) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001c6a4) volume_set_pane_vc_g

0xacc9,	// (0x00017abc) volume_set_pane_vc

0xacd3,	// (0x00017ac6) button_value_adjust_pane_cp1_vc

0xacdd,	// (0x00017ad0) list_highlight_pane_cp2_vc

0xace6,	// (0x00017ad9) list_set_pane_vc_ParamLimits

0xace6,	// (0x00017ad9) list_set_pane_vc

0xad54,	// (0x00017b47) main_pane_set_vc_t1_ParamLimits

0xad54,	// (0x00017b47) main_pane_set_vc_t1

0xad69,	// (0x00017b5c) main_pane_set_vc_t2_ParamLimits

0xad69,	// (0x00017b5c) main_pane_set_vc_t2

0xad7b,	// (0x00017b6e) main_pane_set_vc_t3_ParamLimits

0xad7b,	// (0x00017b6e) main_pane_set_vc_t3

0xad8f,	// (0x00017b82) main_pane_set_vc_t4_ParamLimits

0xad8f,	// (0x00017b82) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001c80d) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001c80d) main_pane_set_vc_t

0xada3,	// (0x00017b96) setting_code_pane_vc_ParamLimits

0xada3,	// (0x00017b96) setting_code_pane_vc

0xadb4,	// (0x00017ba7) setting_slider_graphic_pane_vc

0xadb4,	// (0x00017ba7) setting_slider_pane_vc

0xadb4,	// (0x00017ba7) setting_text_pane_vc

0xadb4,	// (0x00017ba7) setting_volume_pane_vc

0xadbe,	// (0x00017bb1) scroll_pane_cp121_vc

0x3d65,	// (0x00010b58) set_content_pane_vc

0xb094,	// (0x00017e87) button_value_adjust_pane_g1

0xb09d,	// (0x00017e90) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001c86e) button_value_adjust_pane_g

0xb0a6,	// (0x00017e99) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb0a6,	// (0x00017e99) form_field_slider_wide_pane_vc_t1

0xb0b8,	// (0x00017eab) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb0b8,	// (0x00017eab) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001c873) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001c873) form_field_slider_wide_pane_vc_t

0x366f,	// (0x00010462) input_focus_pane_cp10_vc_ParamLimits

0x366f,	// (0x00010462) input_focus_pane_cp10_vc

0xb0e4,	// (0x00017ed7) slider_cont_pane_cp1_vc_ParamLimits

0xb0e4,	// (0x00017ed7) slider_cont_pane_cp1_vc

0xb0f6,	// (0x00017ee9) slider_form_pane_g1_cp2

0xac3a,	// (0x00017a2d) slider_form_pane_g2_cp2

0xb123,	// (0x00017f16) form_field_slider_pane_vc_t3

0xb131,	// (0x00017f24) form_field_slider_pane_vc_t4

0xb13f,	// (0x00017f32) slider_form_pane_vc_ParamLimits

0xb13f,	// (0x00017f32) slider_form_pane_vc

0xb14c,	// (0x00017f3f) form_field_slider_pane_vc_t1_ParamLimits

0xb14c,	// (0x00017f3f) form_field_slider_pane_vc_t1

0xb0b8,	// (0x00017eab) form_field_slider_pane_vc_t2_ParamLimits

0xb0b8,	// (0x00017eab) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001c885) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001c885) form_field_slider_pane_vc_t

0x366f,	// (0x00010462) input_focus_pane_cp9_vc_ParamLimits

0x366f,	// (0x00010462) input_focus_pane_cp9_vc

0xb162,	// (0x00017f55) slider_cont_pane_vc_ParamLimits

0xb162,	// (0x00017f55) slider_cont_pane_vc

0xb176,	// (0x00017f69) list_form_graphic_pane_cp_vc_ParamLimits

0xb176,	// (0x00017f69) list_form_graphic_pane_cp_vc

0x9025,	// (0x00015e18) form_field_popup_wide_pane_vc_g1

0xb18b,	// (0x00017f7e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb18b,	// (0x00017f7e) form_field_popup_wide_pane_vc_t1

0x3de2,	// (0x00010bd5) input_focus_pane_cp8_vc_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_cp8_vc

0xb1d0,	// (0x00017fc3) list_form_wide_pane_vc_ParamLimits

0xb1d0,	// (0x00017fc3) list_form_wide_pane_vc

0xb1dc,	// (0x00017fcf) list_form_graphic_pane_vc_g1

0xb1e4,	// (0x00017fd7) list_form_graphic_pane_vc_t1_ParamLimits

0xb1e4,	// (0x00017fd7) list_form_graphic_pane_vc_t1

0x3687,	// (0x0001047a) list_highlight_pane_cp5_vc_ParamLimits

0x3687,	// (0x0001047a) list_highlight_pane_cp5_vc

0xb200,	// (0x00017ff3) list_form_graphic_pane_vc_ParamLimits

0xb200,	// (0x00017ff3) list_form_graphic_pane_vc

0x9025,	// (0x00015e18) form_field_popup_pane_vc_g1

0xb216,	// (0x00018009) form_field_popup_pane_vc_t1_ParamLimits

0xb216,	// (0x00018009) form_field_popup_pane_vc_t1

0x3de2,	// (0x00010bd5) input_focus_pane_cp7_vc_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_cp7_vc

0xb22d,	// (0x00018020) list_form_pane_vc_ParamLimits

0xb22d,	// (0x00018020) list_form_pane_vc

0xb239,	// (0x0001802c) data_form_pane_vc_t1_ParamLimits

0xb239,	// (0x0001802c) data_form_pane_vc_t1

0x3ea9,	// (0x00010c9c) input_focus_pane_vc_g1

0x3eb1,	// (0x00010ca4) input_focus_pane_vc_g2

0x3eb9,	// (0x00010cac) input_focus_pane_vc_g3

0x3ec1,	// (0x00010cb4) input_focus_pane_vc_g4

0x3ec9,	// (0x00010cbc) input_focus_pane_vc_g5

0x3ed1,	// (0x00010cc4) input_focus_pane_vc_g6

0x3ed9,	// (0x00010ccc) input_focus_pane_vc_g7

0x3ee1,	// (0x00010cd4) input_focus_pane_vc_g8

0x3ee9,	// (0x00010cdc) input_focus_pane_vc_g9

0x3454,	// (0x00010247) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c47a) input_focus_pane_vc_g

0x9019,	// (0x00015e0c) data_form_pane_vc_ParamLimits

0x9019,	// (0x00015e0c) data_form_pane_vc

0x9025,	// (0x00015e18) form_field_data_pane_vc_g1

0xb256,	// (0x00018049) form_field_data_pane_vc_t1_ParamLimits

0xb256,	// (0x00018049) form_field_data_pane_vc_t1

0x3de2,	// (0x00010bd5) input_focus_pane_vc_ParamLimits

0x3de2,	// (0x00010bd5) input_focus_pane_vc

0xb270,	// (0x00018063) button_value_adjust_pane_cp3_vc

0xb278,	// (0x0001806b) button_value_adjust_pane_cp5_vc

0xb280,	// (0x00018073) form_field_data_pane_vc_ParamLimits

0xb280,	// (0x00018073) form_field_data_pane_vc

0xb29b,	// (0x0001808e) form_field_data_pane_vc_cp2

0xb2a3,	// (0x00018096) form_field_data_wide_pane_vc_ParamLimits

0xb2a3,	// (0x00018096) form_field_data_wide_pane_vc

0xb2bd,	// (0x000180b0) form_field_data_wide_pane_vc_cp2

0xb2c5,	// (0x000180b8) form_field_popup_pane_vc_ParamLimits

0xb2c5,	// (0x000180b8) form_field_popup_pane_vc

0xb2e0,	// (0x000180d3) form_field_popup_wide_pane_vc_ParamLimits

0xb2e0,	// (0x000180d3) form_field_popup_wide_pane_vc

0xb2fa,	// (0x000180ed) form_field_slider_pane_vc_ParamLimits

0xb2fa,	// (0x000180ed) form_field_slider_pane_vc

0xb30d,	// (0x00018100) form_field_slider_wide_pane_vc_ParamLimits

0xb30d,	// (0x00018100) form_field_slider_wide_pane_vc

0xb320,	// (0x00018113) grid_touch_1_pane_ParamLimits

0xb320,	// (0x00018113) grid_touch_1_pane

0xb32c,	// (0x0001811f) grid_touch_2_pane_ParamLimits

0xb32c,	// (0x0001811f) grid_touch_2_pane

0x88c4,	// (0x000156b7) touch_pane_g1_ParamLimits

0x88c4,	// (0x000156b7) touch_pane_g1

0xb346,	// (0x00018139) cell_app_pane_cp_wide_ParamLimits

0xb346,	// (0x00018139) cell_app_pane_cp_wide

0xb357,	// (0x0001814a) grid_popup_fast_wide_pane_ParamLimits

0xb357,	// (0x0001814a) grid_popup_fast_wide_pane

0xb36b,	// (0x0001815e) scroll_pane_cp19_ParamLimits

0xb36b,	// (0x0001815e) scroll_pane_cp19

0x35cd,	// (0x000103c0) bg_popup_window_pane_cp20

0xb37f,	// (0x00018172) listscroll_popup_fast_wide_pane

0x3687,	// (0x0001047a) grid_indicator_nsta_pane

0xb387,	// (0x0001817a) clock_nsta_pane_g1

0xb390,	// (0x00018183) clock_nsta_pane_t1

0xb3ac,	// (0x0001819f) cell_indicator_nsta_pane_ParamLimits

0xb3ac,	// (0x0001819f) cell_indicator_nsta_pane

0xb3dd,	// (0x000181d0) cell_indicator_nsta_pane_g1

0xb3eb,	// (0x000181de) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001c896) cell_indicator_nsta_pane_g

0xb3f8,	// (0x000181eb) clock_nsta_pane_cp

0xb401,	// (0x000181f4) indicator_nsta_pane_cp

0xb409,	// (0x000181fc) nsta_clock_indic_pane_g1

0x3766,	// (0x00010559) grid_indicator_pane

0x44aa,	// (0x0001129d) scroll_pane_cp29

0x562b,	// (0x0001241e) indicator_nsta_pane_cp2_ParamLimits

0x562b,	// (0x0001241e) indicator_nsta_pane_cp2

0x3687,	// (0x0001047a) main_apps_wheel_pane

0x9235,	// (0x00016028) form_midp_field_text_pane_ParamLimits

0x9384,	// (0x00016177) scroll_bar_cp050_ParamLimits

0xb459,	// (0x0001824c) cell_indicator_pane_ParamLimits

0xb459,	// (0x0001824c) cell_indicator_pane

0xb471,	// (0x00018264) cell_indicator_pane_g1

0xb47b,	// (0x0001826e) grid_wheel_folder_pane_ParamLimits

0xb47b,	// (0x0001826e) grid_wheel_folder_pane

0xb48f,	// (0x00018282) list_wheel_apps_pane_ParamLimits

0xb48f,	// (0x00018282) list_wheel_apps_pane

0xb4a2,	// (0x00018295) main_apps_wheel_pane_g1_ParamLimits

0xb4a2,	// (0x00018295) main_apps_wheel_pane_g1

0xb4be,	// (0x000182b1) main_apps_wheel_pane_g2_ParamLimits

0xb4be,	// (0x000182b1) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001c8b2) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001c8b2) main_apps_wheel_pane_g

0xb4da,	// (0x000182cd) main_apps_wheel_pane_t1_ParamLimits

0xb4da,	// (0x000182cd) main_apps_wheel_pane_t1

0xb503,	// (0x000182f6) list_wheel_apps_pane_g1

0xb50b,	// (0x000182fe) list_wheel_apps_pane_g2

0xb513,	// (0x00018306) list_wheel_apps_pane_g3

0xb51b,	// (0x0001830e) list_wheel_apps_pane_g4

0xb525,	// (0x00018318) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001c8b7) list_wheel_apps_pane_g

0x8482,	// (0x00015275) navi_icon_text_pane

0x896d,	// (0x00015760) aid_fill_nsta

0xb546,	// (0x00018339) navi_icon_text_pane_g1

0xb552,	// (0x00018345) navi_icon_text_pane_t1

0x830d,	// (0x00015100) list_set_graphic_pane_t1_ParamLimits

0x830d,	// (0x00015100) list_set_graphic_pane_t1

0x9ae9,	// (0x000168dc) popup_midp_note_alarm_window_t6_ParamLimits

0x9ae9,	// (0x000168dc) popup_midp_note_alarm_window_t6

0x9afb,	// (0x000168ee) popup_midp_note_alarm_window_t7_ParamLimits

0x9afb,	// (0x000168ee) popup_midp_note_alarm_window_t7

0x9b0d,	// (0x00016900) popup_midp_note_alarm_window_t8_ParamLimits

0x9b0d,	// (0x00016900) popup_midp_note_alarm_window_t8

0x9b1f,	// (0x00016912) popup_midp_note_alarm_window_t9_ParamLimits

0x9b1f,	// (0x00016912) popup_midp_note_alarm_window_t9

0x9b31,	// (0x00016924) popup_midp_note_alarm_window_t10_ParamLimits

0x9b31,	// (0x00016924) popup_midp_note_alarm_window_t10

0x9b43,	// (0x00016936) popup_midp_note_alarm_window_t11_ParamLimits

0x9b43,	// (0x00016936) popup_midp_note_alarm_window_t11

0x9b55,	// (0x00016948) scroll_pane_cp17_ParamLimits

0x9b55,	// (0x00016948) scroll_pane_cp17

0x6167,	// (0x00012f5a) volume_small_pane_cp_g1

0x6478,	// (0x0001326b) volume_small_pane_cp_g2

0x6481,	// (0x00013274) volume_small_pane_cp_g3

0x648a,	// (0x0001327d) volume_small_pane_cp_g4

0x6493,	// (0x00013286) volume_small_pane_cp_g5

0x649c,	// (0x0001328f) volume_small_pane_cp_g6

0x64a5,	// (0x00013298) volume_small_pane_cp_g7

0x64ae,	// (0x000132a1) volume_small_pane_cp_g8

0x64b7,	// (0x000132aa) volume_small_pane_cp_g9

0x64c0,	// (0x000132b3) volume_small_pane_cp_g10

0x86d8,	// (0x000154cb) midp_ticker_pane_g1_ParamLimits

0x86e4,	// (0x000154d7) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c546) midp_ticker_pane_g_ParamLimits

0x86f0,	// (0x000154e3) midp_ticker_pane_t1_ParamLimits

0x8983,	// (0x00015776) aid_fill_nsta_2

0x9370,	// (0x00016163) list_form2_midp_pane

0xa536,	// (0x00017329) midp_editing_number_pane_ParamLimits

0xa545,	// (0x00017338) midp_ticker_pane_ParamLimits

0xb564,	// (0x00018357) form2_midp_field_pane

0xb588,	// (0x0001837b) scroll_pane_cp51

0xb5a8,	// (0x0001839b) form2_midp_button_pane_ParamLimits

0xb5a8,	// (0x0001839b) form2_midp_button_pane

0xb5ba,	// (0x000183ad) form2_midp_content_pane_ParamLimits

0xb5ba,	// (0x000183ad) form2_midp_content_pane

0xb5d4,	// (0x000183c7) form2_midp_field_choice_group_pane

0xb5dc,	// (0x000183cf) form2_midp_field_pane_g1

0xb5e4,	// (0x000183d7) form2_midp_field_pane_g2

0xb5ec,	// (0x000183df) form2_midp_field_pane_g3

0xb5f4,	// (0x000183e7) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001c8dc) form2_midp_field_pane_g

0xb5fc,	// (0x000183ef) form2_midp_gauge_slider_pane

0xb604,	// (0x000183f7) form2_midp_gauge_wait_pane

0xb60c,	// (0x000183ff) form2_midp_image_pane_ParamLimits

0xb60c,	// (0x000183ff) form2_midp_image_pane

0xb627,	// (0x0001841a) form2_midp_label_pane_ParamLimits

0xb627,	// (0x0001841a) form2_midp_label_pane

0xb646,	// (0x00018439) form2_midp_label_pane_cp_ParamLimits

0xb646,	// (0x00018439) form2_midp_label_pane_cp

0xb667,	// (0x0001845a) form2_midp_string_pane_ParamLimits

0xb667,	// (0x0001845a) form2_midp_string_pane

0xb679,	// (0x0001846c) form2_midp_text_pane_ParamLimits

0xb679,	// (0x0001846c) form2_midp_text_pane

0xb69a,	// (0x0001848d) form2_midp_time_pane

0xb6aa,	// (0x0001849d) input_focus_pane_cp51_ParamLimits

0xb6aa,	// (0x0001849d) input_focus_pane_cp51

0xb6c2,	// (0x000184b5) form2_midp_label_pane_t1_ParamLimits

0xb6c2,	// (0x000184b5) form2_midp_label_pane_t1

0xb708,	// (0x000184fb) form2_mdip_text_pane_t1_ParamLimits

0xb708,	// (0x000184fb) form2_mdip_text_pane_t1

0xb727,	// (0x0001851a) form2_midp_time_pane_t1

0xb742,	// (0x00018535) form2_midp_gauge_slider_pane_t1

0xb754,	// (0x00018547) form2_midp_gauge_slider_pane_t2

0xb766,	// (0x00018559) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001c8e5) form2_midp_gauge_slider_pane_t

0xb778,	// (0x0001856b) form2_midp_slider_pane

0xb784,	// (0x00018577) form2_midp_gauge_wait_pane_t1

0xb792,	// (0x00018585) form2_midp_wait_pane_ParamLimits

0xb792,	// (0x00018585) form2_midp_wait_pane

0xb7bd,	// (0x000185b0) list_single_2graphic_pane_cp4_ParamLimits

0xb7bd,	// (0x000185b0) list_single_2graphic_pane_cp4

0x9082,	// (0x00015e75) list_single_midp_graphic_pane_cp_ParamLimits

0x9082,	// (0x00015e75) list_single_midp_graphic_pane_cp

0x35cd,	// (0x000103c0) list_highlight_pane_cp20

0xb7d6,	// (0x000185c9) list_single_2graphic_pane_g1_cp4

0xaa41,	// (0x00017834) list_single_2graphic_pane_g2_cp4

0xb7de,	// (0x000185d1) list_single_2graphic_pane_t1_cp4

0x3687,	// (0x0001047a) list_highlight_pane_cp21

0xb7ed,	// (0x000185e0) list_single_midp_graphic_pane_g4_cp

0xb7fc,	// (0x000185ef) list_single_midp_graphic_pane_t1_cp

0xb811,	// (0x00018604) form2_mdip_string_pane_t1_ParamLimits

0xb811,	// (0x00018604) form2_mdip_string_pane_t1

0x35cd,	// (0x000103c0) bg_wml_button_pane_cp2

0x3454,	// (0x00010247) form2_midp_image_pane_g1

0x3d0f,	// (0x00010b02) list_double_large_graphic_pane_g5_ParamLimits

0x3d0f,	// (0x00010b02) list_double_large_graphic_pane_g5

0x8602,	// (0x000153f5) midp_form_pane_ParamLimits

0x3687,	// (0x0001047a) main_apps_wheel_pane_ParamLimits

0x5d64,	// (0x00012b57) popup_preview_window_ParamLimits

0x5d64,	// (0x00012b57) popup_preview_window

0x5f4b,	// (0x00012d3e) popup_touch_info_window_ParamLimits

0x5f4b,	// (0x00012d3e) popup_touch_info_window

0x5f6d,	// (0x00012d60) popup_touch_menu_window_ParamLimits

0x5f6d,	// (0x00012d60) popup_touch_menu_window

0x344a,	// (0x0001023d) bg_popup_sub_pane_cp6

0xb8ad,	// (0x000186a0) list_touch_menu_pane

0xb8b5,	// (0x000186a8) list_single_touch_menu_pane_ParamLimits

0xb8b5,	// (0x000186a8) list_single_touch_menu_pane

0xb8cd,	// (0x000186c0) list_single_touch_menu_pane_t1

0x3687,	// (0x0001047a) bg_popup_sub_pane_cp7_ParamLimits

0x3687,	// (0x0001047a) bg_popup_sub_pane_cp7

0xb8db,	// (0x000186ce) heading_sub_pane

0xb8e3,	// (0x000186d6) list_touch_info_pane_ParamLimits

0xb8e3,	// (0x000186d6) list_touch_info_pane

0xb8f2,	// (0x000186e5) list_single_touch_info_pane_ParamLimits

0xb8f2,	// (0x000186e5) list_single_touch_info_pane

0xb904,	// (0x000186f7) list_single_touch_info_pane_t1

0xb912,	// (0x00018705) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001c8f3) list_single_touch_info_pane_t

0x85fa,	// (0x000153ed) bg_popup_heading_pane_cp

0xb920,	// (0x00018713) heading_sub_pane_t1

0x8fb3,	// (0x00015da6) bg_popup_preview_window_pane_cp_ParamLimits

0x8fb3,	// (0x00015da6) bg_popup_preview_window_pane_cp

0xb8db,	// (0x000186ce) heading_preview_pane

0xb8e3,	// (0x000186d6) list_preview_pane_ParamLimits

0xb8e3,	// (0x000186d6) list_preview_pane

0xb92e,	// (0x00018721) popup_preview_window_g1

0xb8f2,	// (0x000186e5) list_single_preview_pane_ParamLimits

0xb8f2,	// (0x000186e5) list_single_preview_pane

0xb936,	// (0x00018729) list_single_preview_pane_g1

0xb93e,	// (0x00018731) list_single_preview_pane_t1

0xb904,	// (0x000186f7) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001c8f8) list_single_preview_pane_t

0xb94c,	// (0x0001873f) bg_popup_heading_pane_cp2_ParamLimits

0xb94c,	// (0x0001873f) bg_popup_heading_pane_cp2

0xb962,	// (0x00018755) heading_preview_pane_g1

0xb96a,	// (0x0001875d) heading_preview_pane_t1_ParamLimits

0xb96a,	// (0x0001875d) heading_preview_pane_t1

0x377d,	// (0x00010570) soft_indicator_pane_t1_ParamLimits

0x3cdb,	// (0x00010ace) scroll_pane_ParamLimits

0x43af,	// (0x000111a2) scroll_sc2_left_pane

0x43a6,	// (0x00011199) scroll_sc2_right_pane

0x43ce,	// (0x000111c1) scroll_bg_pane_g1_ParamLimits

0x43e3,	// (0x000111d6) scroll_bg_pane_g2_ParamLimits

0x43fb,	// (0x000111ee) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c4d1) scroll_bg_pane_g_ParamLimits

0x43ce,	// (0x000111c1) scroll_handle_pane_g1_ParamLimits

0x441d,	// (0x00011210) scroll_handle_pane_g2_ParamLimits

0x43fb,	// (0x000111ee) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c4d8) scroll_handle_pane_g_ParamLimits

0x59ab,	// (0x0001279e) popup_choice_list_window_ParamLimits

0x59ab,	// (0x0001279e) popup_choice_list_window

0x8dab,	// (0x00015b9e) choice_list_pane

0x8e5b,	// (0x00015c4e) cell_toolbar_pane_t1

0x8e83,	// (0x00015c76) toolbar_button_pane_ParamLimits

0xa01f,	// (0x00016e12) ai_gene_pane_1_t2_ParamLimits

0xa01f,	// (0x00016e12) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001c700) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001c700) ai_gene_pane_1_t

0xb987,	// (0x0001877a) scroll_sc2_left_pane_g1

0xb987,	// (0x0001877a) scroll_sc2_right_pane_g1

0x8929,	// (0x0001571c) bg_popup_sub_pane_cp10

0xb991,	// (0x00018784) list_choice_list_pane

0xa5f5,	// (0x000173e8) list_single_choice_list_pane_ParamLimits

0xa5f5,	// (0x000173e8) list_single_choice_list_pane

0xb9aa,	// (0x0001879d) list_single_choice_list_pane_g1

0x3fce,	// (0x00010dc1) list_single_choice_list_pane_t1_ParamLimits

0x3fce,	// (0x00010dc1) list_single_choice_list_pane_t1

0xb9b2,	// (0x000187a5) choice_list_pane_g1

0xb9ba,	// (0x000187ad) choice_list_pane_t1

0x344a,	// (0x0001023d) input_focus_pane_cp11

0x41aa,	// (0x00010f9d) title_pane_stacon_g2_ParamLimits

0x41aa,	// (0x00010f9d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c4b7) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c4b7) title_pane_stacon_g

0x85fa,	// (0x000153ed) cursor_press_pane

0x5a65,	// (0x00012858) popup_fep_hwr_window_ParamLimits

0x5a65,	// (0x00012858) popup_fep_hwr_window

0x5aef,	// (0x000128e2) popup_fep_vkb_window_ParamLimits

0x5aef,	// (0x000128e2) popup_fep_vkb_window

0xb9c8,	// (0x000187bb) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001c921) fep_vkb_side_pane_g_ParamLimits

0x6502,	// (0x000132f5) fep_hwr_candidate_pane_ParamLimits

0x6502,	// (0x000132f5) fep_hwr_candidate_pane

0x652c,	// (0x0001331f) fep_hwr_side_pane_ParamLimits

0x652c,	// (0x0001331f) fep_hwr_side_pane

0x654e,	// (0x00013341) fep_hwr_top_pane_ParamLimits

0x654e,	// (0x00013341) fep_hwr_top_pane

0x6566,	// (0x00013359) fep_hwr_write_pane_ParamLimits

0x6566,	// (0x00013359) fep_hwr_write_pane

0xfb2e,	// (0x0001c921) fep_vkb_side_pane_g

0xb9d0,	// (0x000187c3) fep_hwr_top_pane_g1

0xb9e2,	// (0x000187d5) fep_hwr_top_pane_g2

0x65a0,	// (0x00013393) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001c8fd) fep_hwr_top_pane_g

0x65b5,	// (0x000133a8) fep_hwr_top_text_pane

0x7f60,	// (0x00014d53) fep_hwr_top_text_pane_g1

0xba18,	// (0x0001880b) fep_hwr_top_text_pane_t1

0x66bf,	// (0x000134b2) fep_hwr_candidate_pane_g1

0xbc63,	// (0x00018a56) fep_vkb_keypad_pane_g3_ParamLimits

0xbc63,	// (0x00018a56) fep_vkb_keypad_pane_g3

0xbc8f,	// (0x00018a82) fep_vkb_keypad_pane_g4_ParamLimits

0xbc8f,	// (0x00018a82) fep_vkb_keypad_pane_g4

0xbd06,	// (0x00018af9) fep_vkb_bottom_pane_g2_ParamLimits

0xbd06,	// (0x00018af9) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001c928) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001c928) fep_vkb_bottom_pane_g

0xb987,	// (0x0001877a) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001c932) cell_vkb_side_pane_g

0xbd91,	// (0x00018b84) cell_vkb_side_pane_t1

0xbd9f,	// (0x00018b92) cell_vkb_side_pane_t1_copy1

0xb987,	// (0x0001877a) bg_fep_vkb_candidate_pane_g2

0xbee3,	// (0x00018cd6) cell_vkb_candidate_pane_ParamLimits

0xba26,	// (0x00018819) aid_size_cell_vkb_ParamLimits

0xba26,	// (0x00018819) aid_size_cell_vkb

0xbee3,	// (0x00018cd6) cell_vkb_candidate_pane

0x66e6,	// (0x000134d9) bg_popup_fep_shadow_pane_g1

0xbab8,	// (0x000188ab) fep_vkb_bottom_pane_ParamLimits

0xbab8,	// (0x000188ab) fep_vkb_bottom_pane

0xbaf5,	// (0x000188e8) fep_vkb_candidate_pane_ParamLimits

0xbaf5,	// (0x000188e8) fep_vkb_candidate_pane

0xbb11,	// (0x00018904) fep_vkb_keypad_pane_ParamLimits

0xbb11,	// (0x00018904) fep_vkb_keypad_pane

0xbb44,	// (0x00018937) fep_vkb_side_pane_ParamLimits

0xbb44,	// (0x00018937) fep_vkb_side_pane

0xbb80,	// (0x00018973) fep_vkb_top_pane_ParamLimits

0xbb80,	// (0x00018973) fep_vkb_top_pane

0xbbbc,	// (0x000189af) fep_vkb_top_pane_g1_ParamLimits

0xbbbc,	// (0x000189af) fep_vkb_top_pane_g1

0xbbcb,	// (0x000189be) fep_vkb_top_pane_g2_ParamLimits

0xbbcb,	// (0x000189be) fep_vkb_top_pane_g2

0xbbda,	// (0x000189cd) fep_vkb_top_pane_g3_ParamLimits

0xbbda,	// (0x000189cd) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001c918) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001c918) fep_vkb_top_pane_g

0xbbf8,	// (0x000189eb) fep_vkb_top_text_pane_ParamLimits

0xbbf8,	// (0x000189eb) fep_vkb_top_text_pane

0xbc09,	// (0x000189fc) fep_vkb_side_pane_g1_ParamLimits

0xbc09,	// (0x000189fc) fep_vkb_side_pane_g1

0xbc52,	// (0x00018a45) grid_vkb_side_pane_ParamLimits

0xbc52,	// (0x00018a45) grid_vkb_side_pane

0x66ee,	// (0x000134e1) bg_popup_fep_shadow_pane_g2

0x66f7,	// (0x000134ea) bg_popup_fep_shadow_pane_g3

0x66ff,	// (0x000134f2) bg_popup_fep_shadow_pane_g4

0x6708,	// (0x000134fb) bg_popup_fep_shadow_pane_g5

0x6712,	// (0x00013505) bg_popup_fep_shadow_pane_g6

0x671a,	// (0x0001350d) bg_popup_fep_shadow_pane_g7

0x3ec1,	// (0x00010cb4) bg_popup_fep_shadow_pane_g8

0xbcb1,	// (0x00018aa4) grid_vkb_keypad_number_pane_ParamLimits

0xbcb1,	// (0x00018aa4) grid_vkb_keypad_number_pane

0xbcc5,	// (0x00018ab8) grid_vkb_keypad_pane_ParamLimits

0xbcc5,	// (0x00018ab8) grid_vkb_keypad_pane

0xbceb,	// (0x00018ade) fep_vkb_bottom_pane_g1_ParamLimits

0xbceb,	// (0x00018ade) fep_vkb_bottom_pane_g1

0xbd14,	// (0x00018b07) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbd14,	// (0x00018b07) grid_vkb_keypad_bottom_left_pane

0xbd29,	// (0x00018b1c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbd29,	// (0x00018b1c) grid_vkb_keypad_bottom_right_pane

0xbd3e,	// (0x00018b31) fep_vkb_top_text_pane_g1

0xbd59,	// (0x00018b4c) fep_vkb_top_text_pane_t1

0xbd6e,	// (0x00018b61) cell_vkb_side_pane_ParamLimits

0xbd6e,	// (0x00018b61) cell_vkb_side_pane

0xb987,	// (0x0001877a) cell_vkb_side_pane_g1

0xbdad,	// (0x00018ba0) cell_vkb_keypad_pane_ParamLimits

0xbdad,	// (0x00018ba0) cell_vkb_keypad_pane

0xbe3a,	// (0x00018c2d) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001c945) bg_popup_fep_shadow_pane_g

0x672c,	// (0x0001351f) cell_hwr_side_pane_g1

0x672c,	// (0x0001351f) cell_hwr_side_pane_g2

0xbe44,	// (0x00018c37) cell_vkb_keypad_pane_t1

0xbe52,	// (0x00018c45) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe52,	// (0x00018c45) cell_vkb_keypad_bottom_left_pane

0xbe6f,	// (0x00018c62) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe6f,	// (0x00018c62) cell_vkb_keypad_bottom_right_pane

0xb987,	// (0x0001877a) cell_vkb_keypad_bottom_left_pane_g1

0xb987,	// (0x0001877a) cell_vkb_keypad_bottom_right_pane_g1

0xbea8,	// (0x00018c9b) cell_vkb_keypad_number_pane_ParamLimits

0xbea8,	// (0x00018c9b) cell_vkb_keypad_number_pane

0xbec7,	// (0x00018cba) cell_vkb_keypad_number_pane_g1

0xbed1,	// (0x00018cc4) cell_vkb_keypad_number_pane_g2

0xbeda,	// (0x00018ccd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001c937) cell_vkb_keypad_number_pane_g

0xbe44,	// (0x00018c37) cell_vkb_keypad_number_pane_t1

0xbf04,	// (0x00018cf7) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001c958) cell_hwr_side_pane_g

0xbf1d,	// (0x00018d10) cell_hwr_side_pane_t1

0x6736,	// (0x00013529) cell_hwr_side_pane_t1_copy1

0x6744,	// (0x00013537) cell_hwr_candidate_pane_g1

0x6773,	// (0x00013566) cell_hwr_candidate_pane_t1

0xb987,	// (0x0001877a) cell_vkb_candidate_pane_g2

0xbf61,	// (0x00018d54) cell_vkb_candidate_pane_t1

0x64c9,	// (0x000132bc) bg_popup_fep_shadow_pane_ParamLimits

0x64c9,	// (0x000132bc) bg_popup_fep_shadow_pane

0x6580,	// (0x00013373) bg_fep_hwr_top_pane_g4

0xb9f4,	// (0x000187e7) bg_hwr_side_pane_g1_ParamLimits

0xb9f4,	// (0x000187e7) bg_hwr_side_pane_g1

0x65f3,	// (0x000133e6) cell_hwr_side_pane_ParamLimits

0x65f3,	// (0x000133e6) cell_hwr_side_pane

0x6630,	// (0x00013423) fep_hwr_write_pane_g1_ParamLimits

0x6630,	// (0x00013423) fep_hwr_write_pane_g1

0x663d,	// (0x00013430) fep_hwr_write_pane_g2_ParamLimits

0x663d,	// (0x00013430) fep_hwr_write_pane_g2

0x664a,	// (0x0001343d) fep_hwr_write_pane_g3_ParamLimits

0x664a,	// (0x0001343d) fep_hwr_write_pane_g3

0x6658,	// (0x0001344b) fep_hwr_write_pane_g4_ParamLimits

0x6658,	// (0x0001344b) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001c904) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001c904) fep_hwr_write_pane_g

0x6580,	// (0x00013373) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6580,	// (0x00013373) bg_fep_hwr_candidate_pane_g2

0x666d,	// (0x00013460) cell_hwr_candidate_pane_ParamLimits

0x666d,	// (0x00013460) cell_hwr_candidate_pane

0x66bf,	// (0x000134b2) fep_hwr_candidate_pane_g1_ParamLimits

0xba54,	// (0x00018847) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xba54,	// (0x00018847) bg_popup_fep_shadow_pane_cp2

0xbbea,	// (0x000189dd) fep_vkb_top_pane_g4_ParamLimits

0xbbea,	// (0x000189dd) fep_vkb_top_pane_g4

0xbc30,	// (0x00018a23) fep_vkb_side_pane_g2_ParamLimits

0xbc30,	// (0x00018a23) fep_vkb_side_pane_g2

0x7bbc,	// (0x000149af) list_setting_pane_t4_ParamLimits

0x7bbc,	// (0x000149af) list_setting_pane_t4

0x7c38,	// (0x00014a2b) list_setting_number_pane_t5_ParamLimits

0x7c38,	// (0x00014a2b) list_setting_number_pane_t5

0x7fa7,	// (0x00014d9a) list_double_heading_pane_cp2_ParamLimits

0x7fa7,	// (0x00014d9a) list_double_heading_pane_cp2

0xbf6f,	// (0x00018d62) list_double_heading_pane_g1_cp2_ParamLimits

0xbf6f,	// (0x00018d62) list_double_heading_pane_g1_cp2

0xbf7b,	// (0x00018d6e) list_double_heading_pane_g2_cp2_ParamLimits

0xbf7b,	// (0x00018d6e) list_double_heading_pane_g2_cp2

0xbf8f,	// (0x00018d82) list_double_heading_pane_t1_cp2_ParamLimits

0xbf8f,	// (0x00018d82) list_double_heading_pane_t1_cp2

0xbfa5,	// (0x00018d98) list_double_heading_pane_t2_cp2_ParamLimits

0xbfa5,	// (0x00018d98) list_double_heading_pane_t2_cp2

0x3442,	// (0x00010235) aid_value_unit2

0x51ad,	// (0x00011fa0) popup_preview_fixed_window

0x385d,	// (0x00010650) bg_popup_preview_window_pane_cp02

0xbfb7,	// (0x00018daa) list_preview_fixed_pane

0xbffd,	// (0x00018df0) list_empty_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_empty_pane_fp

0xbffd,	// (0x00018df0) list_single_cale_day_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_cale_day_pane_fp

0xbffd,	// (0x00018df0) list_single_graphic_heading_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_graphic_heading_pane_fp

0xbffd,	// (0x00018df0) list_single_graphic_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_graphic_pane_fp

0xbffd,	// (0x00018df0) list_single_heading_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_heading_pane_fp

0xbffd,	// (0x00018df0) list_single_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_pane_fp

0xc016,	// (0x00018e09) list_single_pane_fp_g1_ParamLimits

0xc016,	// (0x00018e09) list_single_pane_fp_g1

0xbf6f,	// (0x00018d62) list_single_pane_fp_g2_ParamLimits

0xbf6f,	// (0x00018d62) list_single_pane_fp_g2

0xbf7b,	// (0x00018d6e) list_single_pane_fp_g3_ParamLimits

0xbf7b,	// (0x00018d6e) list_single_pane_fp_g3

0xc022,	// (0x00018e15) list_single_pane_fp_g4_ParamLimits

0xc022,	// (0x00018e15) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001c96b) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001c96b) list_single_pane_fp_g

0xc02e,	// (0x00018e21) list_single_pane_fp_t1_ParamLimits

0xc02e,	// (0x00018e21) list_single_pane_fp_t1

0xc045,	// (0x00018e38) list_single_graphic_pane_fp_g1_ParamLimits

0xc045,	// (0x00018e38) list_single_graphic_pane_fp_g1

0xc016,	// (0x00018e09) list_single_graphic_pane_fp_g2_ParamLimits

0xc016,	// (0x00018e09) list_single_graphic_pane_fp_g2

0xbf6f,	// (0x00018d62) list_single_graphic_pane_fp_g3_ParamLimits

0xbf6f,	// (0x00018d62) list_single_graphic_pane_fp_g3

0xbf7b,	// (0x00018d6e) list_single_graphic_pane_fp_g4_ParamLimits

0xbf7b,	// (0x00018d6e) list_single_graphic_pane_fp_g4

0xc022,	// (0x00018e15) list_single_graphic_pane_fp_g5_ParamLimits

0xc022,	// (0x00018e15) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001c974) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001c974) list_single_graphic_pane_fp_g

0xc051,	// (0x00018e44) list_single_graphic_pane_fp_t1_ParamLimits

0xc051,	// (0x00018e44) list_single_graphic_pane_fp_t1

0xc045,	// (0x00018e38) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc045,	// (0x00018e38) list_single_graphic_heading_pane_fp_g1

0xc016,	// (0x00018e09) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc016,	// (0x00018e09) list_single_graphic_heading_pane_fp_g2

0xbf6f,	// (0x00018d62) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbf6f,	// (0x00018d62) list_single_graphic_heading_pane_fp_g3

0xbf7b,	// (0x00018d6e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbf7b,	// (0x00018d6e) list_single_graphic_heading_pane_fp_g4

0xc022,	// (0x00018e15) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc022,	// (0x00018e15) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001c974) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001c974) list_single_graphic_heading_pane_fp_g

0xc067,	// (0x00018e5a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc067,	// (0x00018e5a) list_single_graphic_heading_pane_fp_t1

0xc07d,	// (0x00018e70) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc07d,	// (0x00018e70) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001c97f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001c97f) list_single_graphic_heading_pane_fp_t

0xc08f,	// (0x00018e82) list_single_cale_day_pane_fp_g1_ParamLimits

0xc08f,	// (0x00018e82) list_single_cale_day_pane_fp_g1

0xc0c7,	// (0x00018eba) list_single_cale_day_pane_fp_g2_ParamLimits

0xc0c7,	// (0x00018eba) list_single_cale_day_pane_fp_g2

0xc0d3,	// (0x00018ec6) list_single_cale_day_pane_fp_g3_ParamLimits

0xc0d3,	// (0x00018ec6) list_single_cale_day_pane_fp_g3

0xc0fb,	// (0x00018eee) list_single_cale_day_pane_fp_g4_ParamLimits

0xc0fb,	// (0x00018eee) list_single_cale_day_pane_fp_g4

0xc11f,	// (0x00018f12) list_single_cale_day_pane_fp_g5_ParamLimits

0xc11f,	// (0x00018f12) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001c984) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001c984) list_single_cale_day_pane_fp_g

0xc143,	// (0x00018f36) list_single_cale_day_pane_fp_t1_ParamLimits

0xc143,	// (0x00018f36) list_single_cale_day_pane_fp_t1

0xc169,	// (0x00018f5c) list_single_cale_day_pane_fp_t2_ParamLimits

0xc169,	// (0x00018f5c) list_single_cale_day_pane_fp_t2

0xc182,	// (0x00018f75) list_single_cale_day_pane_fp_t3_ParamLimits

0xc182,	// (0x00018f75) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001c98f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001c98f) list_single_cale_day_pane_fp_t

0xc016,	// (0x00018e09) list_empty_pane_fp_g1_ParamLimits

0xc016,	// (0x00018e09) list_empty_pane_fp_g1

0xc19b,	// (0x00018f8e) list_empty_pane_fp_t1

0xc1a9,	// (0x00018f9c) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001c996) list_empty_pane_fp_t

0xc016,	// (0x00018e09) list_single_heading_pane_fp_g1_ParamLimits

0xc016,	// (0x00018e09) list_single_heading_pane_fp_g1

0xbf6f,	// (0x00018d62) list_single_heading_pane_fp_g2_ParamLimits

0xbf6f,	// (0x00018d62) list_single_heading_pane_fp_g2

0xbf7b,	// (0x00018d6e) list_single_heading_pane_fp_g3_ParamLimits

0xbf7b,	// (0x00018d6e) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001c99b) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001c99b) list_single_heading_pane_fp_g

0xc1b7,	// (0x00018faa) list_single_heading_pane_fp_t1_ParamLimits

0xc1b7,	// (0x00018faa) list_single_heading_pane_fp_t1

0xc1c9,	// (0x00018fbc) list_single_heading_pane_fp_t2_ParamLimits

0xc1c9,	// (0x00018fbc) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001c9a2) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001c9a2) list_single_heading_pane_fp_t

0x3fe3,	// (0x00010dd6) aid_size_cell_fast

0x3840,	// (0x00010633) soft_indicator_pane_cp1_t1

0x4020,	// (0x00010e13) cell_app_pane_cp2_ParamLimits

0x4020,	// (0x00010e13) cell_app_pane_cp2

0x64eb,	// (0x000132de) fep_hwr_candidate_drop_down_list_pane

0x66d9,	// (0x000134cc) fep_hwr_candidate_pane_g3_ParamLimits

0x66d9,	// (0x000134cc) fep_hwr_candidate_pane_g3

0x290b,	// (0x0000f6fe) fep_hwr_candidate_pane_g4_ParamLimits

0x290b,	// (0x0000f6fe) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001c911) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001c911) fep_hwr_candidate_pane_g

0xbae4,	// (0x000188d7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbae4,	// (0x000188d7) fep_vkb_candidate_drop_down_list_pane

0xbf0c,	// (0x00018cff) fep_vkb_candidate_pane_g3

0xbf14,	// (0x00018d07) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001c93e) fep_vkb_candidate_pane_g

0x6744,	// (0x00013537) cell_hwr_candidate_pane_g1_ParamLimits

0x6752,	// (0x00013545) cell_hwr_candidate_pane_g3_ParamLimits

0x6752,	// (0x00013545) cell_hwr_candidate_pane_g3

0xc91e,	// (0x00019711) cell_hwr_candidate_pane_g4_ParamLimits

0xc91e,	// (0x00019711) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001c95d) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001c95d) cell_hwr_candidate_pane_g

0xbf2b,	// (0x00018d1e) cell_vkb_candidate_pane_g3_ParamLimits

0xbf2b,	// (0x00018d1e) cell_vkb_candidate_pane_g3

0xbf46,	// (0x00018d39) cell_vkb_candidate_pane_g4_ParamLimits

0xbf46,	// (0x00018d39) cell_vkb_candidate_pane_g4

0xc1df,	// (0x00018fd2) cell_app_pane_cp2_g1_ParamLimits

0xc1df,	// (0x00018fd2) cell_app_pane_cp2_g1

0xc1fd,	// (0x00018ff0) cell_app_pane_cp2_g2_ParamLimits

0xc1fd,	// (0x00018ff0) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001c9a7) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001c9a7) cell_app_pane_cp2_g

0xc209,	// (0x00018ffc) cell_app_pane_cp2_t1_ParamLimits

0xc209,	// (0x00018ffc) cell_app_pane_cp2_t1

0x3de2,	// (0x00010bd5) grid_highlight_pane_cp1_ParamLimits

0x3de2,	// (0x00010bd5) grid_highlight_pane_cp1

0x6791,	// (0x00013584) cell_hwr_candidate_pane_cp1_ParamLimits

0x6791,	// (0x00013584) cell_hwr_candidate_pane_cp1

0x6744,	// (0x00013537) fep_hwr_candidate_drop_down_list_pane_g1

0x67b5,	// (0x000135a8) fep_hwr_candidate_drop_down_list_pane_g2

0x67c2,	// (0x000135b5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001c9ac) fep_hwr_candidate_drop_down_list_pane_g

0x67cf,	// (0x000135c2) fep_hwr_candidate_drop_down_list_scroll_pane

0x67d8,	// (0x000135cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67d8,	// (0x000135cb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67e5,	// (0x000135d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67e5,	// (0x000135d8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67f2,	// (0x000135e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67f2,	// (0x000135e5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67ff,	// (0x000135f2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67ff,	// (0x000135f2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x681a,	// (0x0001360d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x681a,	// (0x0001360d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6835,	// (0x00013628) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6835,	// (0x00013628) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6850,	// (0x00013643) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6850,	// (0x00013643) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x686b,	// (0x0001365e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x686b,	// (0x0001365e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001c9b3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001c9b3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc21b,	// (0x0001900e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc21b,	// (0x0001900e) cell_vkb_candidate_pane_cp1

0xbbea,	// (0x000189dd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbbea,	// (0x000189dd) fep_vkb_candidate_drop_down_list_pane_g1

0xc241,	// (0x00019034) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc241,	// (0x00019034) fep_vkb_candidate_drop_down_list_pane_g2

0xc24e,	// (0x00019041) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc24e,	// (0x00019041) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001c9c4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001c9c4) fep_vkb_candidate_drop_down_list_pane_g

0xc25b,	// (0x0001904e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc25b,	// (0x0001904e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc268,	// (0x0001905b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc268,	// (0x0001905b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc275,	// (0x00019068) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc275,	// (0x00019068) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc281,	// (0x00019074) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc281,	// (0x00019074) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc28d,	// (0x00019080) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc28d,	// (0x00019080) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc2ae,	// (0x000190a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2ae,	// (0x000190a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc2cf,	// (0x000190c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc2cf,	// (0x000190c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc2f0,	// (0x000190e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2f0,	// (0x000190e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc311,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc311,	// (0x00019104) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001c9cb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001c9cb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x74ca,	// (0x000142bd) title_pane_g1_ParamLimits

0x74d7,	// (0x000142ca) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c341) title_pane_g_ParamLimits

0x7f50,	// (0x00014d43) aid_call2_pane

0x7f58,	// (0x00014d4b) aid_call_pane

0x7f60,	// (0x00014d53) popup_clock_analogue_window_g1

0x7f60,	// (0x00014d53) popup_clock_analogue_window_g2

0x552a,	// (0x0001231d) popup_clock_analogue_window_g3

0x5533,	// (0x00012326) popup_clock_analogue_window_g4

0x3454,	// (0x00010247) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c4e6) popup_clock_analogue_window_g

0x553b,	// (0x0001232e) popup_clock_analogue_window_t1

0x5549,	// (0x0001233c) clock_digital_number_pane_ParamLimits

0x5549,	// (0x0001233c) clock_digital_number_pane

0x5555,	// (0x00012348) clock_digital_number_pane_cp02_ParamLimits

0x5555,	// (0x00012348) clock_digital_number_pane_cp02

0x5561,	// (0x00012354) clock_digital_number_pane_cp03_ParamLimits

0x5561,	// (0x00012354) clock_digital_number_pane_cp03

0x556d,	// (0x00012360) clock_digital_number_pane_cp04_ParamLimits

0x556d,	// (0x00012360) clock_digital_number_pane_cp04

0x5579,	// (0x0001236c) clock_digital_separator_pane_ParamLimits

0x5579,	// (0x0001236c) clock_digital_separator_pane

0x5585,	// (0x00012378) popup_clock_digital_window_t1_ParamLimits

0x5585,	// (0x00012378) popup_clock_digital_window_t1

0x3454,	// (0x00010247) clock_digital_number_pane_g1

0x3454,	// (0x00010247) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c4f1) clock_digital_number_pane_g

0x3454,	// (0x00010247) clock_digital_separator_pane_g1

0x3454,	// (0x00010247) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c4f1) clock_digital_separator_pane_g

0x896d,	// (0x00015760) aid_fill_nsta_ParamLimits

0x8ab3,	// (0x000158a6) indicator_nsta_pane_ParamLimits

0x8c44,	// (0x00015a37) popup_clock_analogue_window

0x8c44,	// (0x00015a37) popup_clock_digital_window

0x3687,	// (0x0001047a) grid_indicator_nsta_pane_ParamLimits

0xb39e,	// (0x00018191) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001c891) clock_nsta_pane_t

0x54ee,	// (0x000122e1) aid_size_max_handle

0x54f8,	// (0x000122eb) aid_size_min_handle

0x85fa,	// (0x000153ed) editor_scroll_pane

0xc32c,	// (0x0001911f) ex_editor_pane

0x3fa9,	// (0x00010d9c) scroll_pane_cp13

0x3d07,	// (0x00010afa) scroll_pane_cp14

0x7f8f,	// (0x00014d82) scroll_pane_cp36

0x7fbd,	// (0x00014db0) list_single_graphic_hl_pane_cp2_ParamLimits

0x7fbd,	// (0x00014db0) list_single_graphic_hl_pane_cp2

0xa57c,	// (0x0001736f) list_single_graphic_hl_pane_ParamLimits

0xa57c,	// (0x0001736f) list_single_graphic_hl_pane

0xc334,	// (0x00019127) aid_size_min_hl_cp1

0xc33d,	// (0x00019130) list_highlight_pane_cp34_ParamLimits

0xc33d,	// (0x00019130) list_highlight_pane_cp34

0xc34e,	// (0x00019141) list_single_graphic_hl_pane_g1_ParamLimits

0xc34e,	// (0x00019141) list_single_graphic_hl_pane_g1

0xc35b,	// (0x0001914e) list_single_graphic_hl_pane_g2_ParamLimits

0xc35b,	// (0x0001914e) list_single_graphic_hl_pane_g2

0xc35b,	// (0x0001914e) list_single_graphic_hl_pane_g3_ParamLimits

0xc35b,	// (0x0001914e) list_single_graphic_hl_pane_g3

0xab5f,	// (0x00017952) list_single_graphic_hl_pane_g4_ParamLimits

0xab5f,	// (0x00017952) list_single_graphic_hl_pane_g4

0xc367,	// (0x0001915a) list_single_graphic_hl_pane_g5_ParamLimits

0xc367,	// (0x0001915a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001c9dc) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001c9dc) list_single_graphic_hl_pane_g

0xc37b,	// (0x0001916e) list_single_graphic_hl_pane_t1_ParamLimits

0xc37b,	// (0x0001916e) list_single_graphic_hl_pane_t1

0xc391,	// (0x00019184) aid_size_min_hl_cp2

0xc39a,	// (0x0001918d) list_highlight_pane_cp34_cp2_ParamLimits

0xc39a,	// (0x0001918d) list_highlight_pane_cp34_cp2

0xc34e,	// (0x00019141) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc34e,	// (0x00019141) list_single_graphic_hl_pane_g1_cp2

0xc3a7,	// (0x0001919a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc3a7,	// (0x0001919a) list_single_graphic_hl_pane_g2_cp2

0xc3b3,	// (0x000191a6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc3b3,	// (0x000191a6) list_single_graphic_hl_pane_g3_cp2

0xc3c1,	// (0x000191b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc3c1,	// (0x000191b4) list_single_graphic_hl_pane_g4_cp2

0xc3cd,	// (0x000191c0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc3cd,	// (0x000191c0) list_single_graphic_hl_pane_g5_cp2

0x583f,	// (0x00012632) control_pane_g4_ParamLimits

0x583f,	// (0x00012632) control_pane_g4

0x8929,	// (0x0001571c) bg_popup_sub_pane_cp10_ParamLimits

0xb991,	// (0x00018784) list_choice_list_pane_ParamLimits

0xb9a0,	// (0x00018793) scroll_pane_cp23

0x385d,	// (0x00010650) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfb7,	// (0x00018daa) list_preview_fixed_pane_ParamLimits

0xbfcd,	// (0x00018dc0) list_preview_fixed_pane_cp_ParamLimits

0xbfcd,	// (0x00018dc0) list_preview_fixed_pane_cp

0xbfd9,	// (0x00018dcc) popup_preview_fixed_window_g1_ParamLimits

0xbfd9,	// (0x00018dcc) popup_preview_fixed_window_g1

0xbfe5,	// (0x00018dd8) popup_preview_fixed_window_g2_ParamLimits

0xbfe5,	// (0x00018dd8) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001c964) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001c964) popup_preview_fixed_window_g

0x5460,	// (0x00012253) aid_navi_side_left_pane_ParamLimits

0x5475,	// (0x00012268) aid_navi_side_right_pane_ParamLimits

0x548d,	// (0x00012280) navi_icon_pane_stacon_ParamLimits

0x54a1,	// (0x00012294) navi_navi_pane_stacon_ParamLimits

0x548d,	// (0x00012280) navi_text_pane_stacon_ParamLimits

0x5064,	// (0x00011e57) main_text_info_pane

0xc3f7,	// (0x000191ea) listscroll_text_info_pane

0xc3ff,	// (0x000191f2) list_text_info_pane_ParamLimits

0xc3ff,	// (0x000191f2) list_text_info_pane

0xc40e,	// (0x00019201) scroll_pane_cp24_ParamLimits

0xc40e,	// (0x00019201) scroll_pane_cp24

0xc42c,	// (0x0001921f) list_text_info_pane_t1_ParamLimits

0xc42c,	// (0x0001921f) list_text_info_pane_t1

0x59cd,	// (0x000127c0) popup_fast_swap2_window_ParamLimits

0x59cd,	// (0x000127c0) popup_fast_swap2_window

0xc451,	// (0x00019244) aid_size_cell_fast2

0x344a,	// (0x0001023d) bg_popup_window_pane_cp17

0x93a4,	// (0x00016197) heading_pane_cp2

0x3a8c,	// (0x0001087f) listscroll_fast2_pane

0xc45b,	// (0x0001924e) grid_fast2_pane

0xc465,	// (0x00019258) listscroll_fast2_pane_g1

0xc46f,	// (0x00019262) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001c9e7) listscroll_fast2_pane_g

0x3fa9,	// (0x00010d9c) scroll_pane_cp26

0xc479,	// (0x0001926c) cell_fast2_pane_ParamLimits

0xc479,	// (0x0001926c) cell_fast2_pane

0xc490,	// (0x00019283) cell_fast2_pane_g1

0xc499,	// (0x0001928c) cell_fast2_pane_g2

0xc4a2,	// (0x00019295) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001c9ec) cell_fast2_pane_g

0x3ace,	// (0x000108c1) grid_highlight_pane_cp9

0x598f,	// (0x00012782) main_eswt_pane_ParamLimits

0x598f,	// (0x00012782) main_eswt_pane

0xc423,	// (0x00019216) list_single_text_info_pane

0xc4aa,	// (0x0001929d) eswt_ctrl_button_pane

0xc4aa,	// (0x0001929d) eswt_ctrl_canvas_pane

0xc4b2,	// (0x000192a5) eswt_ctrl_combo_pane

0xc4aa,	// (0x0001929d) eswt_ctrl_default_pane

0xc4aa,	// (0x0001929d) eswt_ctrl_label_pane

0xc4ba,	// (0x000192ad) eswt_ctrl_wait_pane

0xc4c2,	// (0x000192b5) eswt_shell_pane

0x344a,	// (0x0001023d) listscroll_eswt_app_pane

0xc4e2,	// (0x000192d5) popup_eswt_tasktip_window_ParamLimits

0xc4e2,	// (0x000192d5) popup_eswt_tasktip_window

0x8fb3,	// (0x00015da6) bg_popup_window_pane_cp18

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_ParamLimits

0xc4f3,	// (0x000192e6) eswt_control_pane_g1

0xc500,	// (0x000192f3) eswt_control_pane_g2_ParamLimits

0xc500,	// (0x000192f3) eswt_control_pane_g2

0xc50d,	// (0x00019300) eswt_control_pane_g3_ParamLimits

0xc50d,	// (0x00019300) eswt_control_pane_g3

0xc51a,	// (0x0001930d) eswt_control_pane_g4_ParamLimits

0xc51a,	// (0x0001930d) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001c9f3) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001c9f3) eswt_control_pane_g

0x3de2,	// (0x00010bd5) bg_button_pane_ParamLimits

0x3de2,	// (0x00010bd5) bg_button_pane

0x3ae3,	// (0x000108d6) common_borders_pane_copy2_ParamLimits

0x3ae3,	// (0x000108d6) common_borders_pane_copy2

0xc527,	// (0x0001931a) control_button_pane_g1_ParamLimits

0xc527,	// (0x0001931a) control_button_pane_g1

0xc533,	// (0x00019326) control_button_pane_g2_ParamLimits

0xc533,	// (0x00019326) control_button_pane_g2

0xc53f,	// (0x00019332) control_button_pane_g3_ParamLimits

0xc53f,	// (0x00019332) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001c9fc) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001c9fc) control_button_pane_g

0xc553,	// (0x00019346) control_button_pane_t1

0xc561,	// (0x00019354) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001ca03) control_button_pane_t

0x8e8f,	// (0x00015c82) bg_button_pane_g1

0x8e9f,	// (0x00015c92) bg_button_pane_g2

0x8e97,	// (0x00015c8a) bg_button_pane_g3

0x8eaf,	// (0x00015ca2) bg_button_pane_g4

0x8ea7,	// (0x00015c9a) bg_button_pane_g5

0x8eb7,	// (0x00015caa) bg_button_pane_g6

0x8ebf,	// (0x00015cb2) bg_button_pane_g7

0x8ecf,	// (0x00015cc2) bg_button_pane_g8

0x8ec7,	// (0x00015cba) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001c654) bg_button_pane_g

0xb94c,	// (0x0001873f) common_borders_pane_ParamLimits

0xb94c,	// (0x0001873f) common_borders_pane

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy1_ParamLimits

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy1

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy1_ParamLimits

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy1

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy1_ParamLimits

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy1

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy1_ParamLimits

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy1

0xb987,	// (0x0001877a) bg_eswt_ctrl_canvas_pane_g1

0xb94c,	// (0x0001873f) common_borders_pane_cp2_ParamLimits

0xb94c,	// (0x0001873f) common_borders_pane_cp2

0xb94c,	// (0x0001873f) common_borders_pane_cp3_ParamLimits

0xb94c,	// (0x0001873f) common_borders_pane_cp3

0xc56f,	// (0x00019362) separator_horizontal_pane

0xc577,	// (0x0001936a) separator_vertical_pane

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy2_ParamLimits

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy2

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy2_ParamLimits

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy2

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy2_ParamLimits

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy2

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy2_ParamLimits

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy2

0x344a,	// (0x0001023d) common_borders_pane_cp4

0xc580,	// (0x00019373) separator_horizontal_pane_g1

0xc589,	// (0x0001937c) separator_horizontal_pane_g2

0xc592,	// (0x00019385) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001ca08) separator_horizontal_pane_g

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy3_ParamLimits

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy3

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy3_ParamLimits

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy3

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy3_ParamLimits

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy3

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy3_ParamLimits

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy3

0x344a,	// (0x0001023d) common_borders_pane_cp5

0xc59b,	// (0x0001938e) separator_vertical_pane_g1

0xc5a4,	// (0x00019397) separator_vertical_pane_g2

0xc5ad,	// (0x000193a0) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001ca0f) separator_vertical_pane_g

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy4_ParamLimits

0xc4f3,	// (0x000192e6) eswt_control_pane_g1_copy4

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy4_ParamLimits

0xc500,	// (0x000192f3) eswt_control_pane_g2_copy4

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy4_ParamLimits

0xc50d,	// (0x00019300) eswt_control_pane_g3_copy4

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy4_ParamLimits

0xc51a,	// (0x0001930d) eswt_control_pane_g4_copy4

0xc5b6,	// (0x000193a9) eswt_ctrl_combo_button_pane

0xc5be,	// (0x000193b1) eswt_ctrl_input_pane

0xc5c6,	// (0x000193b9) popup_choice_list_window_cp70

0xc5ce,	// (0x000193c1) eswt_ctrl_input_pane_t1

0x344a,	// (0x0001023d) input_focus_pane_cp70

0xb94c,	// (0x0001873f) bg_button_pane_cp70_ParamLimits

0xb94c,	// (0x0001873f) bg_button_pane_cp70

0xc5dc,	// (0x000193cf) eswt_ctrl_combo_button_pane_g1

0xc5e4,	// (0x000193d7) wait_bar_pane_cp70

0x8fb3,	// (0x00015da6) bg_popup_window_pane_cp70_ParamLimits

0x8fb3,	// (0x00015da6) bg_popup_window_pane_cp70

0xc5ec,	// (0x000193df) popup_eswt_tasktip_window_t1

0xc602,	// (0x000193f5) wait_bar_pane_cp71_ParamLimits

0xc602,	// (0x000193f5) wait_bar_pane_cp71

0xc60e,	// (0x00019401) grid_eswt_app_pane

0x43af,	// (0x000111a2) scroll_pane_cp70

0xc617,	// (0x0001940a) cell_eswt_app_pane_ParamLimits

0xc617,	// (0x0001940a) cell_eswt_app_pane

0xc649,	// (0x0001943c) cell_eswt_app_pane_g1_ParamLimits

0xc649,	// (0x0001943c) cell_eswt_app_pane_g1

0xc678,	// (0x0001946b) cell_eswt_app_pane_g2_ParamLimits

0xc678,	// (0x0001946b) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001ca16) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001ca16) cell_eswt_app_pane_g

0xc6a1,	// (0x00019494) cell_eswt_app_pane_t1_ParamLimits

0xc6a1,	// (0x00019494) cell_eswt_app_pane_t1

0xc6d3,	// (0x000194c6) grid_highlight_pane_cp70_ParamLimits

0xc6d3,	// (0x000194c6) grid_highlight_pane_cp70

0x84d7,	// (0x000152ca) set_content_pane_g1

0x88a8,	// (0x0001569b) status_small_volume_pane

0x6886,	// (0x00013679) status_small_volume_pane_g1

0x688e,	// (0x00013681) volume_small2_pane

0x6897,	// (0x0001368a) volume_small2_pane_g1

0x68a0,	// (0x00013693) volume_small2_pane_g2

0x68a9,	// (0x0001369c) volume_small2_pane_g3

0x68b2,	// (0x000136a5) volume_small2_pane_g4

0x68bb,	// (0x000136ae) volume_small2_pane_g5

0x68c4,	// (0x000136b7) volume_small2_pane_g6

0x68cd,	// (0x000136c0) volume_small2_pane_g7

0x68d6,	// (0x000136c9) volume_small2_pane_g8

0x68df,	// (0x000136d2) volume_small2_pane_g9

0x68e8,	// (0x000136db) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001ca1b) volume_small2_pane_g

0xbd3e,	// (0x00018b31) fep_vkb_top_text_pane_g1_ParamLimits

0xbd59,	// (0x00018b4c) fep_vkb_top_text_pane_t1_ParamLimits

0xbff1,	// (0x00018de4) popup_preview_fixed_window_g3_ParamLimits

0xbff1,	// (0x00018de4) popup_preview_fixed_window_g3

0x5ede,	// (0x00012cd1) popup_toolbar_trans_pane

0xa34f,	// (0x00017142) aid_height_set_list_ParamLimits

0xa360,	// (0x00017153) aid_size_parent_ParamLimits

0x8929,	// (0x0001571c) list_highlight_pane_cp2_ParamLimits

0x84d7,	// (0x000152ca) set_content_pane_g1_ParamLimits

0xa60d,	// (0x00017400) list_single_image_pane_ParamLimits

0xa60d,	// (0x00017400) list_single_image_pane

0xc6df,	// (0x000194d2) aid_size_cell_image_ParamLimits

0xc6df,	// (0x000194d2) aid_size_cell_image

0xc6ec,	// (0x000194df) grid_single_image_pane_ParamLimits

0xc6ec,	// (0x000194df) grid_single_image_pane

0x3e08,	// (0x00010bfb) list_single_image_pane_g1_ParamLimits

0x3e08,	// (0x00010bfb) list_single_image_pane_g1

0x3e14,	// (0x00010c07) list_single_image_pane_g2_ParamLimits

0x3e14,	// (0x00010c07) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001ca30) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001ca30) list_single_image_pane_g

0xc6fa,	// (0x000194ed) list_single_image_pane_t1_ParamLimits

0xc6fa,	// (0x000194ed) list_single_image_pane_t1

0xc710,	// (0x00019503) cell_image_list_pane_ParamLimits

0xc710,	// (0x00019503) cell_image_list_pane

0xc726,	// (0x00019519) cell_image_list_pane_g1

0xc72f,	// (0x00019522) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001ca35) cell_image_list_pane_g

0xc738,	// (0x0001952b) aid_size_cell_tb_trans_pane

0x3de2,	// (0x00010bd5) bg_tb_trans_pane

0xc74a,	// (0x0001953d) grid_tb_trans_pane

0x8e8f,	// (0x00015c82) bg_tb_trans_pane_g1

0x8e9f,	// (0x00015c92) bg_tb_trans_pane_g2

0x8e97,	// (0x00015c8a) bg_tb_trans_pane_g3

0x8eaf,	// (0x00015ca2) bg_tb_trans_pane_g4

0x8ea7,	// (0x00015c9a) bg_tb_trans_pane_g5

0x8ecf,	// (0x00015cc2) bg_tb_trans_pane_g6

0x8ec7,	// (0x00015cba) bg_tb_trans_pane_g7

0x8eb7,	// (0x00015caa) bg_tb_trans_pane_g8

0x8ebf,	// (0x00015cb2) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001ca3a) bg_tb_trans_pane_g

0xc75e,	// (0x00019551) cell_toolbar_trans_pane_ParamLimits

0xc75e,	// (0x00019551) cell_toolbar_trans_pane

0xb987,	// (0x0001877a) cell_toolbar_trans_pane_g1

0xb56c,	// (0x0001835f) list_form2_midp_pane_t1

0xb57a,	// (0x0001836d) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001c8d7) list_form2_midp_pane_t

0xb588,	// (0x0001837b) scroll_pane_cp51_ParamLimits

0xb7a2,	// (0x00018595) form2_midp_wait_pane_g1

0xb7ab,	// (0x0001859e) form2_midp_wait_pane_g2

0xb7b4,	// (0x000185a7) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001c8ec) form2_midp_wait_pane_g

0x3687,	// (0x0001047a) list_highlight_pane_cp21_ParamLimits

0xb7ed,	// (0x000185e0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb7fc,	// (0x000185ef) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa5c6,	// (0x000173b9) list_single_2graphic_im_pane_ParamLimits

0xa5c6,	// (0x000173b9) list_single_2graphic_im_pane

0xc784,	// (0x00019577) list_single_2graphic_im_pane_g1_ParamLimits

0xc784,	// (0x00019577) list_single_2graphic_im_pane_g1

0xc795,	// (0x00019588) list_single_2graphic_im_pane_g2_ParamLimits

0xc795,	// (0x00019588) list_single_2graphic_im_pane_g2

0xc7a1,	// (0x00019594) list_single_2graphic_im_pane_g3_ParamLimits

0xc7a1,	// (0x00019594) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001ca4d) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001ca4d) list_single_2graphic_im_pane_g

0xc7c1,	// (0x000195b4) list_single_2graphic_im_pane_t1_ParamLimits

0xc7c1,	// (0x000195b4) list_single_2graphic_im_pane_t1

0xbffd,	// (0x00018df0) list_single_graphic_2heading_pane_fp_ParamLimits

0xbffd,	// (0x00018df0) list_single_graphic_2heading_pane_fp

0xc045,	// (0x00018e38) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc045,	// (0x00018e38) list_single_graphic_2heading_pane_fp_g1

0xc016,	// (0x00018e09) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc016,	// (0x00018e09) list_single_graphic_2heading_pane_fp_g2

0xbf6f,	// (0x00018d62) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbf6f,	// (0x00018d62) list_single_graphic_2heading_pane_fp_g3

0xbf7b,	// (0x00018d6e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbf7b,	// (0x00018d6e) list_single_graphic_2heading_pane_fp_g4

0xc022,	// (0x00018e15) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc022,	// (0x00018e15) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001c974) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001c974) list_single_graphic_2heading_pane_fp_g

0xc7f2,	// (0x000195e5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc7f2,	// (0x000195e5) list_single_graphic_2heading_pane_fp_t1

0xc07d,	// (0x00018e70) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc07d,	// (0x00018e70) list_single_graphic_2heading_pane_fp_t2

0xc808,	// (0x000195fb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc808,	// (0x000195fb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001ca56) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001ca56) list_single_graphic_2heading_pane_fp_t

0xba00,	// (0x000187f3) fep_hwr_write_pane_g5_ParamLimits

0xba00,	// (0x000187f3) fep_hwr_write_pane_g5

0xba0c,	// (0x000187ff) fep_hwr_write_pane_g6_ParamLimits

0xba0c,	// (0x000187ff) fep_hwr_write_pane_g6

0xc4c2,	// (0x000192b5) eswt_shell_pane_ParamLimits

0x8fb3,	// (0x00015da6) bg_popup_window_pane_cp18_ParamLimits

0xa27e,	// (0x00017071) heading_pane_cp70

0xc5ec,	// (0x000193df) popup_eswt_tasktip_window_t1_ParamLimits

0x89c4,	// (0x000157b7) aid_touch_tab_arrow_left

0x89d0,	// (0x000157c3) aid_touch_tab_arrow_right

0x74f0,	// (0x000142e3) title_pane_g3_ParamLimits

0x74f0,	// (0x000142e3) title_pane_g3

0x3d3c,	// (0x00010b2f) set_value_pane_g1

0x5ede,	// (0x00012cd1) popup_toolbar_trans_pane_ParamLimits

0xc738,	// (0x0001952b) aid_size_cell_tb_trans_pane_ParamLimits

0x3de2,	// (0x00010bd5) bg_tb_trans_pane_ParamLimits

0xc74a,	// (0x0001953d) grid_tb_trans_pane_ParamLimits

0x385d,	// (0x00010650) cont_note_pane_ParamLimits

0x385d,	// (0x00010650) cont_note_pane

0x3ae3,	// (0x000108d6) cont_snote2_single_text_pane_ParamLimits

0x3ae3,	// (0x000108d6) cont_snote2_single_text_pane

0x3ae3,	// (0x000108d6) cont_snote2_single_graphic_pane_ParamLimits

0x3ae3,	// (0x000108d6) cont_snote2_single_graphic_pane

0x95cc,	// (0x000163bf) cont_note_wait_pane_ParamLimits

0x95cc,	// (0x000163bf) cont_note_wait_pane

0x95cc,	// (0x000163bf) cont_note_image_pane_ParamLimits

0x95cc,	// (0x000163bf) cont_note_image_pane

0xc81e,	// (0x00019611) popup_note2_window_g1_ParamLimits

0xc81e,	// (0x00019611) popup_note2_window_g1

0xc84f,	// (0x00019642) popup_note2_window_t1_ParamLimits

0xc84f,	// (0x00019642) popup_note2_window_t1

0xc894,	// (0x00019687) popup_note2_window_t2_ParamLimits

0xc894,	// (0x00019687) popup_note2_window_t2

0xc8d9,	// (0x000196cc) popup_note2_window_t3_ParamLimits

0xc8d9,	// (0x000196cc) popup_note2_window_t3

0xc93f,	// (0x00019732) popup_note2_window_t4_ParamLimits

0xc93f,	// (0x00019732) popup_note2_window_t4

0x38e1,	// (0x000106d4) popup_note2_window_t5_ParamLimits

0x38e1,	// (0x000106d4) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001ca62) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001ca62) popup_note2_window_t

0xc96e,	// (0x00019761) popup_note2_image_window_g1_ParamLimits

0xc96e,	// (0x00019761) popup_note2_image_window_g1

0xc97a,	// (0x0001976d) popup_note2_image_window_g2_ParamLimits

0xc97a,	// (0x0001976d) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001ca6d) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001ca6d) popup_note2_image_window_g

0xc98c,	// (0x0001977f) popup_note2_image_window_t1_ParamLimits

0xc98c,	// (0x0001977f) popup_note2_image_window_t1

0xc9a4,	// (0x00019797) popup_note2_image_window_t2_ParamLimits

0xc9a4,	// (0x00019797) popup_note2_image_window_t2

0xc9bc,	// (0x000197af) popup_note2_image_window_t3_ParamLimits

0xc9bc,	// (0x000197af) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001ca72) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001ca72) popup_note2_image_window_t

0x95da,	// (0x000163cd) popup_note2_wait_window_g1_ParamLimits

0x95da,	// (0x000163cd) popup_note2_wait_window_g1

0xc9d8,	// (0x000197cb) popup_note2_wait_window_g2_ParamLimits

0xc9d8,	// (0x000197cb) popup_note2_wait_window_g2

0x95f2,	// (0x000163e5) popup_note2_wait_window_g3_ParamLimits

0x95f2,	// (0x000163e5) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001ca79) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001ca79) popup_note2_wait_window_g

0xc9e4,	// (0x000197d7) popup_note2_wait_window_t1_ParamLimits

0xc9e4,	// (0x000197d7) popup_note2_wait_window_t1

0xca02,	// (0x000197f5) popup_note2_wait_window_t2_ParamLimits

0xca02,	// (0x000197f5) popup_note2_wait_window_t2

0xca20,	// (0x00019813) popup_note2_wait_window_t3_ParamLimits

0xca20,	// (0x00019813) popup_note2_wait_window_t3

0xca32,	// (0x00019825) popup_note2_wait_window_t4_ParamLimits

0xca32,	// (0x00019825) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001ca80) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001ca80) popup_note2_wait_window_t

0xca44,	// (0x00019837) wait_bar2_pane_ParamLimits

0xca44,	// (0x00019837) wait_bar2_pane

0xca5c,	// (0x0001984f) popup_snote2_single_text_window_g1_ParamLimits

0xca5c,	// (0x0001984f) popup_snote2_single_text_window_g1

0xca84,	// (0x00019877) popup_snote2_single_text_window_t1_ParamLimits

0xca84,	// (0x00019877) popup_snote2_single_text_window_t1

0xcad0,	// (0x000198c3) popup_snote2_single_text_window_t2_ParamLimits

0xcad0,	// (0x000198c3) popup_snote2_single_text_window_t2

0xcb1c,	// (0x0001990f) popup_snote2_single_text_window_t3_ParamLimits

0xcb1c,	// (0x0001990f) popup_snote2_single_text_window_t3

0xcb5d,	// (0x00019950) popup_snote2_single_text_window_t4_ParamLimits

0xcb5d,	// (0x00019950) popup_snote2_single_text_window_t4

0xcb93,	// (0x00019986) popup_snote2_single_text_window_t5_ParamLimits

0xcb93,	// (0x00019986) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001ca89) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001ca89) popup_snote2_single_text_window_t

0xcbbe,	// (0x000199b1) popup_snote2_single_graphic_window_g1_ParamLimits

0xcbbe,	// (0x000199b1) popup_snote2_single_graphic_window_g1

0xcbe6,	// (0x000199d9) popup_snote2_single_graphic_window_g2_ParamLimits

0xcbe6,	// (0x000199d9) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001ca94) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001ca94) popup_snote2_single_graphic_window_g

0xcc0e,	// (0x00019a01) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc0e,	// (0x00019a01) popup_snote2_single_graphic_window_t1

0xcc5a,	// (0x00019a4d) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc5a,	// (0x00019a4d) popup_snote2_single_graphic_window_t2

0xcb1c,	// (0x0001990f) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb1c,	// (0x0001990f) popup_snote2_single_graphic_window_t3

0xcb5d,	// (0x00019950) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb5d,	// (0x00019950) popup_snote2_single_graphic_window_t4

0xcb93,	// (0x00019986) popup_snote2_single_graphic_window_t5_ParamLimits

0xcb93,	// (0x00019986) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001ca99) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001ca99) popup_snote2_single_graphic_window_t

0xb438,	// (0x0001822b) clock_nsta_pane_cp2_t1

0xb438,	// (0x0001822b) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001c8ad) clock_nsta_pane_cp2_t

0x3dfc,	// (0x00010bef) form_field_data_wide_pane_g1_ParamLimits

0x3e08,	// (0x00010bfb) form_field_data_wide_pane_g2_ParamLimits

0x3e08,	// (0x00010bfb) form_field_data_wide_pane_g2

0x3e14,	// (0x00010c07) form_field_data_wide_pane_g3_ParamLimits

0x3e14,	// (0x00010c07) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c469) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c469) form_field_data_wide_pane_g

0xb33a,	// (0x0001812d) grid_touch_3_pane_ParamLimits

0xb33a,	// (0x0001812d) grid_touch_3_pane

0xcca6,	// (0x00019a99) cell_touch_3_pane_ParamLimits

0xcca6,	// (0x00019a99) cell_touch_3_pane

0xb987,	// (0x0001877a) cell_touch_3_pane_g1

0xb987,	// (0x0001877a) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001c932) cell_touch_3_pane_g

0x3939,	// (0x0001072c) cont_query_data_pane

0x3941,	// (0x00010734) cont_query_data_pane_cp1

0xccd9,	// (0x00019acc) button_value_adjust_pane_cp7

0xcce1,	// (0x00019ad4) query_popup_pane_cp3

0x8048,	// (0x00014e3b) bg_popup_sub_pane_cp22_ParamLimits

0x55a4,	// (0x00012397) navi_navi_volume_pane_cp2

0x55bf,	// (0x000123b2) popup_side_volume_key_window_g2

0x55ce,	// (0x000123c1) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c4ff) popup_side_volume_key_window_g

0x55eb,	// (0x000123de) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c506) popup_side_volume_key_window_t

0x8392,	// (0x00015185) popup_side_volume_key_window_ParamLimits

0x7999,	// (0x0001478c) list_double_graphic_pane_g4_ParamLimits

0x7999,	// (0x0001478c) list_double_graphic_pane_g4

0xa5f5,	// (0x000173e8) list_single_2heading_msg_pane_ParamLimits

0xa5f5,	// (0x000173e8) list_single_2heading_msg_pane

0xcd12,	// (0x00019b05) list_single_2heading_msg_pane_g1_ParamLimits

0xcd12,	// (0x00019b05) list_single_2heading_msg_pane_g1

0xc3c1,	// (0x000191b4) list_single_2heading_msg_pane_g2_ParamLimits

0xc3c1,	// (0x000191b4) list_single_2heading_msg_pane_g2

0xcd1e,	// (0x00019b11) list_single_2heading_msg_pane_g3_ParamLimits

0xcd1e,	// (0x00019b11) list_single_2heading_msg_pane_g3

0xcd2a,	// (0x00019b1d) list_single_2heading_msg_pane_g4_ParamLimits

0xcd2a,	// (0x00019b1d) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001caa4) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001caa4) list_single_2heading_msg_pane_g

0xcd42,	// (0x00019b35) list_single_2heading_msg_pane_t1_ParamLimits

0xcd42,	// (0x00019b35) list_single_2heading_msg_pane_t1

0xcd6a,	// (0x00019b5d) list_single_2heading_msg_pane_t2_ParamLimits

0xcd6a,	// (0x00019b5d) list_single_2heading_msg_pane_t2

0xcd99,	// (0x00019b8c) list_single_2heading_msg_pane_t3_ParamLimits

0xcd99,	// (0x00019b8c) list_single_2heading_msg_pane_t3

0xcdd2,	// (0x00019bc5) list_single_2heading_msg_pane_t4_ParamLimits

0xcdd2,	// (0x00019bc5) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001caad) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001caad) list_single_2heading_msg_pane_t

0x362b,	// (0x0001041e) title_pane_g4_ParamLimits

0x362b,	// (0x0001041e) title_pane_g4

0x53b0,	// (0x000121a3) title_pane_stacon_g3_ParamLimits

0x53b0,	// (0x000121a3) title_pane_stacon_g3

0xc7b5,	// (0x000195a8) list_single_2graphic_im_pane_g4_ParamLimits

0xc7b5,	// (0x000195a8) list_single_2graphic_im_pane_g4

0xa03c,	// (0x00016e2f) popup_side_volume_key_window_cp

0xa948,	// (0x0001773b) main_idle_act2_pane_t1

0x604e,	// (0x00012e41) toolbar_button_pane_g10

0x77be,	// (0x000145b1) popup_toolbar_window_cp1

0xb429,	// (0x0001821c) clock_nsta_pane_cp_t1

0xb429,	// (0x0001821c) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001c8a8) clock_nsta_pane_cp_t

0x55a4,	// (0x00012397) navi_navi_volume_pane_cp2_ParamLimits

0x55b3,	// (0x000123a6) popup_side_volume_key_window_g1_ParamLimits

0x55bf,	// (0x000123b2) popup_side_volume_key_window_g2_ParamLimits

0x55ce,	// (0x000123c1) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c4ff) popup_side_volume_key_window_g_ParamLimits

0x64d7,	// (0x000132ca) fep_hwr_aid_pane

0x6580,	// (0x00013373) bg_fep_hwr_top_pane_g4_ParamLimits

0xb9d0,	// (0x000187c3) fep_hwr_top_pane_g1_ParamLimits

0xb9e2,	// (0x000187d5) fep_hwr_top_pane_g2_ParamLimits

0x65a0,	// (0x00013393) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001c8fd) fep_hwr_top_pane_g_ParamLimits

0x65b5,	// (0x000133a8) fep_hwr_top_text_pane_ParamLimits

0x9df1,	// (0x00016be4) aid_touch_tab_arrow_arrow_2

0x9dfa,	// (0x00016bed) aid_touch_tab_arrow_left_2

0x64eb,	// (0x000132de) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6522,	// (0x00013315) fep_hwr_prediction_pane

0xbb38,	// (0x0001892b) fep_vkb_prediction_pane

0xbc3e,	// (0x00018a31) fep_vkb_side_pane_g3_ParamLimits

0xbc3e,	// (0x00018a31) fep_vkb_side_pane_g3

0x6744,	// (0x00013537) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67b5,	// (0x000135a8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67c2,	// (0x000135b5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001c9ac) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x68f1,	// (0x000136e4) fep_hwr_prediction_pane_g1

0x68fb,	// (0x000136ee) fep_hwr_prediction_pane_g2

0x6903,	// (0x000136f6) fep_hwr_prediction_pane_g3

0x690b,	// (0x000136fe) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001cab6) fep_hwr_prediction_pane_g

0xcdf7,	// (0x00019bea) fep_vkb_prediction_pane_g1

0xce01,	// (0x00019bf4) fep_vkb_prediction_pane_g2

0xce09,	// (0x00019bfc) fep_vkb_prediction_pane_g3

0xce11,	// (0x00019c04) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001cabf) fep_vkb_prediction_pane_g

0x6357,	// (0x0001314a) slider_set_pane_g3

0x636b,	// (0x0001315e) slider_set_pane_g4

0x6383,	// (0x00013176) slider_set_pane_g5

0x6357,	// (0x0001314a) slider_set_pane_g6

0x6399,	// (0x0001318c) slider_set_pane_g7

0xa4df,	// (0x000172d2) slider_form_pane_g3

0xa4e8,	// (0x000172db) slider_form_pane_g4

0xa4f0,	// (0x000172e3) slider_form_pane_g5

0xa4df,	// (0x000172d2) slider_form_pane_g6

0xa4f8,	// (0x000172eb) slider_form_pane_g7

0xac42,	// (0x00017a35) slider_set_pane_vc_g3

0xac4b,	// (0x00017a3e) slider_set_pane_vc_g4

0xac54,	// (0x00017a47) slider_set_pane_vc_g5

0xac42,	// (0x00017a35) slider_set_pane_vc_g6

0xac5d,	// (0x00017a50) slider_set_pane_vc_g7

0xb0ff,	// (0x00017ef2) slider_form_pane_vc_g1

0xb108,	// (0x00017efb) slider_form_pane_vc_g2

0xb111,	// (0x00017f04) slider_form_pane_vc_g3

0xb0ff,	// (0x00017ef2) slider_form_pane_vc_g4

0xb11a,	// (0x00017f0d) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001c87a) slider_form_pane_vc_g

0x5064,	// (0x00011e57) main_idle_act3_pane

0xce19,	// (0x00019c0c) ai3_links_pane

0xce22,	// (0x00019c15) popup_ai3_data_window_ParamLimits

0xce22,	// (0x00019c15) popup_ai3_data_window

0x344a,	// (0x0001023d) grid_ai3_links_pane

0xce40,	// (0x00019c33) cell_ai3_links_pane_ParamLimits

0xce40,	// (0x00019c33) cell_ai3_links_pane

0xce5a,	// (0x00019c4d) bg_popup_sub_pane_cp11

0xce67,	// (0x00019c5a) cell_ai3_links_pane_g1

0x344a,	// (0x0001023d) bg_popup_sub_pane_cp12

0xce8c,	// (0x00019c7f) heading_ai3_data_pane

0xce94,	// (0x00019c87) list_ai3_gene_pane

0xcea0,	// (0x00019c93) popup_ai3_data_window_g1

0xcea8,	// (0x00019c9b) heading_ai3_data_pane_g1

0xceb0,	// (0x00019ca3) heading_ai3_data_pane_t1

0xcebe,	// (0x00019cb1) list_double_ai3_gene_pane_ParamLimits

0xcebe,	// (0x00019cb1) list_double_ai3_gene_pane

0xcecb,	// (0x00019cbe) list_single_ai3_gene_pane_ParamLimits

0xcecb,	// (0x00019cbe) list_single_ai3_gene_pane

0xb94c,	// (0x0001873f) list_highlight_pane_cp7_ParamLimits

0xb94c,	// (0x0001873f) list_highlight_pane_cp7

0xced8,	// (0x00019ccb) list_single_a13_gene_pane_t1_ParamLimits

0xced8,	// (0x00019ccb) list_single_a13_gene_pane_t1

0xceef,	// (0x00019ce2) list_single_ai3_gene_pane_g1

0xcef8,	// (0x00019ceb) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001cac8) list_single_ai3_gene_pane_g

0xcf00,	// (0x00019cf3) list_double_ai3_gene_pane_g1_ParamLimits

0xcf00,	// (0x00019cf3) list_double_ai3_gene_pane_g1

0xcf0c,	// (0x00019cff) list_double_ai3_gene_pane_t1_ParamLimits

0xcf0c,	// (0x00019cff) list_double_ai3_gene_pane_t1

0xcf28,	// (0x00019d1b) list_double_ai3_gene_pane_t2_ParamLimits

0xcf28,	// (0x00019d1b) list_double_ai3_gene_pane_t2

0xcf3d,	// (0x00019d30) list_double_ai3_gene_pane_t3_ParamLimits

0xcf3d,	// (0x00019d30) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001cacd) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001cacd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xccf2,	// (0x00019ae5) aid_size_min_col_2

0xccfc,	// (0x00019aef) aid_size_min_msg_ParamLimits

0xccfc,	// (0x00019aef) aid_size_min_msg

0xbd4a,	// (0x00018b3d) fep_vkb_top_text_pane_g2_ParamLimits

0xbd4a,	// (0x00018b3d) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001c92d) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001c92d) fep_vkb_top_text_pane_g

0x5064,	// (0x00011e57) main_hc_apps_shell_pane

0xcf5a,	// (0x00019d4d) grid_hc_apps_pane_ParamLimits

0xcf5a,	// (0x00019d4d) grid_hc_apps_pane

0xcf69,	// (0x00019d5c) list_hc_apps_pane

0xcf71,	// (0x00019d64) scroll_pane_cp37_ParamLimits

0xcf71,	// (0x00019d64) scroll_pane_cp37

0xcf7d,	// (0x00019d70) cell_hc_apps_pane_ParamLimits

0xcf7d,	// (0x00019d70) cell_hc_apps_pane

0xd035,	// (0x00019e28) cell_hc_apps_pane_g1_ParamLimits

0xd035,	// (0x00019e28) cell_hc_apps_pane_g1

0xd066,	// (0x00019e59) cell_hc_apps_pane_g2_ParamLimits

0xd066,	// (0x00019e59) cell_hc_apps_pane_g2

0xd082,	// (0x00019e75) cell_hc_apps_pane_g3_ParamLimits

0xd082,	// (0x00019e75) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001cad4) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001cad4) cell_hc_apps_pane_g

0xd0a4,	// (0x00019e97) cell_hc_apps_pane_t1_ParamLimits

0xd0a4,	// (0x00019e97) cell_hc_apps_pane_t1

0x385d,	// (0x00010650) grid_highlight_pane_cp10_ParamLimits

0x385d,	// (0x00010650) grid_highlight_pane_cp10

0xd0e4,	// (0x00019ed7) list_single_hc_apps_pane_ParamLimits

0xd0e4,	// (0x00019ed7) list_single_hc_apps_pane

0xd123,	// (0x00019f16) list_single_hc_apps_pane_g1

0xd13c,	// (0x00019f2f) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001cadb) list_single_hc_apps_pane_g

0xd155,	// (0x00019f48) list_single_hc_apps_pane_g2_copy1

0xd171,	// (0x00019f64) list_single_hc_apps_pane_t1

0x3687,	// (0x0001047a) bg_set_opt_pane_cp_ParamLimits

0x52d7,	// (0x000120ca) setting_slider_pane_t1_ParamLimits

0x52f0,	// (0x000120e3) setting_slider_pane_t2_ParamLimits

0x530a,	// (0x000120fd) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c351) setting_slider_pane_t_ParamLimits

0x5322,	// (0x00012115) slider_set_pane_ParamLimits

0x5853,	// (0x00012646) control_pane_g5_ParamLimits

0x5853,	// (0x00012646) control_pane_g5

0xa312,	// (0x00017105) slider_set_pane_g1_ParamLimits

0x634b,	// (0x0001313e) slider_set_pane_g2_ParamLimits

0x6357,	// (0x0001314a) slider_set_pane_g3_ParamLimits

0x636b,	// (0x0001315e) slider_set_pane_g4_ParamLimits

0x6383,	// (0x00013176) slider_set_pane_g5_ParamLimits

0x6357,	// (0x0001314a) slider_set_pane_g6_ParamLimits

0x6399,	// (0x0001318c) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001c752) slider_set_pane_g_ParamLimits

0x8482,	// (0x00015275) navi_icon_text_pane_ParamLimits

0x8983,	// (0x00015776) aid_fill_nsta_2_ParamLimits

0x89c4,	// (0x000157b7) aid_touch_tab_arrow_left_ParamLimits

0x89d0,	// (0x000157c3) aid_touch_tab_arrow_right_ParamLimits

0x8a3c,	// (0x0001582f) clock_nsta_pane_ParamLimits

0x9dd3,	// (0x00016bc6) navi_icon_pane_g1_ParamLimits

0x9ddf,	// (0x00016bd2) navi_text_pane_t1_ParamLimits

0xb546,	// (0x00018339) navi_icon_text_pane_g1_ParamLimits

0xb552,	// (0x00018345) navi_icon_text_pane_t1_ParamLimits

0xd123,	// (0x00019f16) list_single_hc_apps_pane_g1_ParamLimits

0xd13c,	// (0x00019f2f) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001cadb) list_single_hc_apps_pane_g_ParamLimits

0xd155,	// (0x00019f48) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd171,	// (0x00019f64) list_single_hc_apps_pane_t1_ParamLimits

0x51d9,	// (0x00011fcc) popup_toolbar2_fixed_window_ParamLimits

0x51d9,	// (0x00011fcc) popup_toolbar2_fixed_window

0x5ed4,	// (0x00012cc7) popup_toolbar2_float_window

0x344a,	// (0x0001023d) bg_popup_sub_pane_cp27

0xd19f,	// (0x00019f92) grid_toolbar2_float_pane

0x344a,	// (0x0001023d) bg_popup_sub_pane_cp26

0xd19f,	// (0x00019f92) grid_toolbar2_fixed_pane

0xd1a7,	// (0x00019f9a) cell_toolbar2_fixed_pane_ParamLimits

0xd1a7,	// (0x00019f9a) cell_toolbar2_fixed_pane

0xd1b7,	// (0x00019faa) cell_toolbar2_fixed_pane_g1

0xd1c0,	// (0x00019fb3) toolbar2_fixed_button_pane

0x8e8f,	// (0x00015c82) toolbar2_fixed_button_pane_g1

0x8e9f,	// (0x00015c92) toolbar2_fixed_button_pane_g2

0x8e97,	// (0x00015c8a) toolbar2_fixed_button_pane_g3

0x8eaf,	// (0x00015ca2) toolbar2_fixed_button_pane_g4

0x8ea7,	// (0x00015c9a) toolbar2_fixed_button_pane_g5

0x8eb7,	// (0x00015caa) toolbar2_fixed_button_pane_g6

0x8ebf,	// (0x00015cb2) toolbar2_fixed_button_pane_g7

0x8ecf,	// (0x00015cc2) toolbar2_fixed_button_pane_g8

0x8ec7,	// (0x00015cba) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001c654) toolbar2_fixed_button_pane_g

0xd1c8,	// (0x00019fbb) cell_toolbar2_float_pane_ParamLimits

0xd1c8,	// (0x00019fbb) cell_toolbar2_float_pane

0xd1d9,	// (0x00019fcc) cell_toolbar2_float_pane_g1

0xd1c0,	// (0x00019fb3) toolbar2_fixed_button_pane_cp

0xbaa6,	// (0x00018899) fep_vkb_accented_list_pane_ParamLimits

0xbaa6,	// (0x00018899) fep_vkb_accented_list_pane

0x6724,	// (0x00013517) bg_popup_fep_shadow_pane_g9

0x85fa,	// (0x000153ed) bg_popup_fep_shadow_pane_cp3

0x3f90,	// (0x00010d83) list_accented_list_pane

0xd1e2,	// (0x00019fd5) list_single_accented_list_pane_ParamLimits

0xd1e2,	// (0x00019fd5) list_single_accented_list_pane

0x85fa,	// (0x000153ed) list_highlight_pane_cp10

0xd1f3,	// (0x00019fe6) list_single_accented_list_pane_t1

0x5e1a,	// (0x00012c0d) popup_slider_window_ParamLimits

0x5e1a,	// (0x00012c0d) popup_slider_window

0xcce9,	// (0x00019adc) aid_indentation_list_msg

0xd2c3,	// (0x0001a0b6) bg_popup_window_pane_cp19

0xd32f,	// (0x0001a122) popup_slider_window_g1

0xd34b,	// (0x0001a13e) popup_slider_window_g2

0xd367,	// (0x0001a15a) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001cae0) popup_slider_window_g

0xd3cd,	// (0x0001a1c0) popup_slider_window_t1

0xd441,	// (0x0001a234) small_volume_slider_vertical_pane

0xb987,	// (0x0001877a) small_volume_slider_vertical_pane_g1

0xb987,	// (0x0001877a) small_volume_slider_vertical_pane_g2

0xd45d,	// (0x0001a250) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001caf2) small_volume_slider_vertical_pane_g

0x4f87,	// (0x00011d7a) area_side_right_pane_ParamLimits

0x4f87,	// (0x00011d7a) area_side_right_pane

0x6913,	// (0x00013706) aid_size_side_button_ParamLimits

0x6913,	// (0x00013706) aid_size_side_button

0x6927,	// (0x0001371a) grid_sctrl_middle_pane_ParamLimits

0x6927,	// (0x0001371a) grid_sctrl_middle_pane

0x6946,	// (0x00013739) sctrl_sk_bottom_pane

0x6957,	// (0x0001374a) sctrl_sk_top_pane

0x6969,	// (0x0001375c) aid_touch_sctrl_top

0x6976,	// (0x00013769) bg_sctrl_sk_pane_ParamLimits

0x6976,	// (0x00013769) bg_sctrl_sk_pane

0x6984,	// (0x00013777) sctrl_sk_top_pane_g1

0x6991,	// (0x00013784) sctrl_sk_top_pane_t1

0x6969,	// (0x0001375c) aid_touch_sctrl_bottom

0x6976,	// (0x00013769) bg_sctrl_sk_pane_cp_ParamLimits

0x6976,	// (0x00013769) bg_sctrl_sk_pane_cp

0x69ac,	// (0x0001379f) sctrl_sk_bottom_pane_g1

0x6991,	// (0x00013784) sctrl_sk_bottom_pane_t1

0x69b5,	// (0x000137a8) cell_sctrl_middle_pane_ParamLimits

0x69b5,	// (0x000137a8) cell_sctrl_middle_pane

0x69d2,	// (0x000137c5) aid_touch_sctrl_middle_ParamLimits

0x69d2,	// (0x000137c5) aid_touch_sctrl_middle

0x69e4,	// (0x000137d7) bg_sctrl_middle_pane_ParamLimits

0x69e4,	// (0x000137d7) bg_sctrl_middle_pane

0x6744,	// (0x00013537) cell_sctrl_middle_pane_g1_ParamLimits

0x6744,	// (0x00013537) cell_sctrl_middle_pane_g1

0x69f2,	// (0x000137e5) cell_sctrl_middle_pane_g2_ParamLimits

0x69f2,	// (0x000137e5) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001cafe) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001cafe) cell_sctrl_middle_pane_g

0x8e8f,	// (0x00015c82) bg_sctrl_middle_pane_g1

0x8e97,	// (0x00015c8a) bg_sctrl_middle_pane_g2

0x8e9f,	// (0x00015c92) bg_sctrl_middle_pane_g3

0x8ea7,	// (0x00015c9a) bg_sctrl_middle_pane_g4

0x8eaf,	// (0x00015ca2) bg_sctrl_middle_pane_g5

0x8eb7,	// (0x00015caa) bg_sctrl_middle_pane_g6

0x8ebf,	// (0x00015cb2) bg_sctrl_middle_pane_g7

0x8ec7,	// (0x00015cba) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001cb03) bg_sctrl_middle_pane_g

0x8ecf,	// (0x00015cc2) bg_sctrl_middle_pane_g8_copy1

0x8e8f,	// (0x00015c82) bg_sctrl_sk_pane_g1

0x8e9f,	// (0x00015c92) bg_sctrl_sk_pane_g2

0x8e97,	// (0x00015c8a) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001c654) bg_sctrl_sk_pane_g

0x3ca1,	// (0x00010a94) aid_size_touch_scroll_bar

0x8eaf,	// (0x00015ca2) bg_sctrl_sk_pane_g4

0x8ea7,	// (0x00015c9a) bg_sctrl_sk_pane_g5

0x8eb7,	// (0x00015caa) bg_sctrl_sk_pane_g6

0x8ebf,	// (0x00015cb2) bg_sctrl_sk_pane_g7

0x8ecf,	// (0x00015cc2) bg_sctrl_sk_pane_g8

0x8ec7,	// (0x00015cba) bg_sctrl_sk_pane_g9

0x5a31,	// (0x00012824) popup_fep_china_hwr2_fs_candidate_window

0x5a3b,	// (0x0001282e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5a3b,	// (0x0001282e) popup_fep_china_hwr2_fs_control_window

0x6744,	// (0x00013537) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001caf9) sctrl_sk_top_pane_g

0xd466,	// (0x0001a259) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd466,	// (0x0001a259) aid_fep_china_hwr2_fs_cell

0xd479,	// (0x0001a26c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd479,	// (0x0001a26c) bg_popup_fep_shadow_pane_cp4

0xd492,	// (0x0001a285) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd492,	// (0x0001a285) bg_popup_fep_shadow_pane_cp5

0xd4a4,	// (0x0001a297) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4a4,	// (0x0001a297) popup_fep_china_hwr2_fs_control_bar_grid

0xd4b4,	// (0x0001a2a7) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4bc,	// (0x0001a2af) aid_fep_china_hwr2_fs_candi_cell

0x344a,	// (0x0001023d) bg_popup_fep_shadow_pane_cp6

0xd4c6,	// (0x0001a2b9) popup_fep_china_hwr2_fs_candidate_grid

0xd4d0,	// (0x0001a2c3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4d0,	// (0x0001a2c3) cell_fep_china_hwr2_fs_funtion_grid

0xb987,	// (0x0001877a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4e8,	// (0x0001a2db) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4e8,	// (0x0001a2db) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4f6,	// (0x0001a2e9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4f6,	// (0x0001a2e9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001cb14) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001cb14) cell_fep_china_hwr2_fs_funtion_grid_g

0xd50c,	// (0x0001a2ff) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd50c,	// (0x0001a2ff) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd521,	// (0x0001a314) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd521,	// (0x0001a314) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001cb19) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001cb19) cell_fep_china_hwr2_fs_funtion_grid_t

0xd53d,	// (0x0001a330) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd545,	// (0x0001a338) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd54d,	// (0x0001a340) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001cb1e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd555,	// (0x0001a348) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd555,	// (0x0001a348) cell_fep_china_hwr2_fs_candidate_grid

0xd574,	// (0x0001a367) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd57c,	// (0x0001a36f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb987,	// (0x0001877a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb987,	// (0x0001877a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001c932) cell_fep_china_hwr2_fs_candidate_grid_g

0xd584,	// (0x0001a377) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a49,	// (0x0001583c) clock_nsta_pane_cp_24_ParamLimits

0x8a49,	// (0x0001583c) clock_nsta_pane_cp_24

0x8ac9,	// (0x000158bc) indicator_nsta_pane_cp_24_ParamLimits

0x8ac9,	// (0x000158bc) indicator_nsta_pane_cp_24

0x9c4f,	// (0x00016a42) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001c6b9) heading_pane_g

0xa78f,	// (0x00017582) grid_sct_catagory_button_pane

0xa7c1,	// (0x000175b4) scroll_pane_cp5_ParamLimits

0xb594,	// (0x00018387) button_value_adjust_pane_cp5_ParamLimits

0xb594,	// (0x00018387) button_value_adjust_pane_cp5

0xb69a,	// (0x0001848d) form2_midp_time_pane_ParamLimits

0xd592,	// (0x0001a385) cell_sct_catagory_button_pane_ParamLimits

0xd592,	// (0x0001a385) cell_sct_catagory_button_pane

0xb94c,	// (0x0001873f) bg_button_pane_cp01_ParamLimits

0xb94c,	// (0x0001873f) bg_button_pane_cp01

0xb987,	// (0x0001877a) cell_sct_catagory_button_pane_g1

0x5e5b,	// (0x00012c4e) popup_tb_extension_window

0xd5a4,	// (0x0001a397) aid_size_cell_ext_ParamLimits

0xd5a4,	// (0x0001a397) aid_size_cell_ext

0x385d,	// (0x00010650) bg_tb_trans_pane_cp1_ParamLimits

0x385d,	// (0x00010650) bg_tb_trans_pane_cp1

0xd5c4,	// (0x0001a3b7) grid_tb_ext_pane_ParamLimits

0xd5c4,	// (0x0001a3b7) grid_tb_ext_pane

0xd5f2,	// (0x0001a3e5) cell_tb_ext_pane_ParamLimits

0xd5f2,	// (0x0001a3e5) cell_tb_ext_pane

0xd609,	// (0x0001a3fc) cell_tb_ext_pane_g1_ParamLimits

0xd609,	// (0x0001a3fc) cell_tb_ext_pane_g1

0xd626,	// (0x0001a419) cell_tb_ext_pane_t1

0x385d,	// (0x00010650) list_highlight_pane_cp11_ParamLimits

0x385d,	// (0x00010650) list_highlight_pane_cp11

0x51f8,	// (0x00011feb) popup_uni_indicator_window_ParamLimits

0x51f8,	// (0x00011feb) popup_uni_indicator_window

0x3de2,	// (0x00010bd5) bg_popup_sub_pane_cp14

0xd641,	// (0x0001a434) list_uniindi_pane

0xd64d,	// (0x0001a440) uniindi_top_pane

0x385d,	// (0x00010650) bg_uniindi_top_pane

0xd66e,	// (0x0001a461) uniindi_top_pane_g1

0xd684,	// (0x0001a477) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001cb25) uniindi_top_pane_g

0xd6ae,	// (0x0001a4a1) uniindi_top_pane_t1

0xd6da,	// (0x0001a4cd) list_single_uniindi_pane_ParamLimits

0xd6da,	// (0x0001a4cd) list_single_uniindi_pane

0xb987,	// (0x0001877a) bg_uniindi_top_pane_g1

0xd6ec,	// (0x0001a4df) list_single_uniindi_pane_g1

0xd6ff,	// (0x0001a4f2) list_single_uniindi_pane_t1

0x5064,	// (0x00011e57) control_bg_pane

0xd724,	// (0x0001a517) bg_sctrl_sk_pane_cp1

0xd72d,	// (0x0001a520) bg_sctrl_sk_pane_cp2

0xd736,	// (0x0001a529) control_bg_pane_g1

0xd73f,	// (0x0001a532) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001cb2e) control_bg_pane_g

0xb3dd,	// (0x000181d0) cell_indicator_nsta_pane_g1_ParamLimits

0xb3eb,	// (0x000181de) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001c896) cell_indicator_nsta_pane_g_ParamLimits

0xb727,	// (0x0001851a) form2_midp_time_pane_t1_ParamLimits

0x598f,	// (0x00012782) main_idle_act4_pane_ParamLimits

0x598f,	// (0x00012782) main_idle_act4_pane

0x5e5b,	// (0x00012c4e) popup_tb_extension_window_ParamLimits

0xd5e4,	// (0x0001a3d7) tb_ext_find_pane_ParamLimits

0xd5e4,	// (0x0001a3d7) tb_ext_find_pane

0xd748,	// (0x0001a53b) ai_gene_pane_1_cp1

0x8744,	// (0x00015537) ai_gene_pane_2_cp1

0xd750,	// (0x0001a543) list_single_idle_plugin_calendar_pane

0xd759,	// (0x0001a54c) list_single_idle_plugin_notification_pane

0xd762,	// (0x0001a555) list_single_idle_plugin_player_pane

0xd76b,	// (0x0001a55e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd76b,	// (0x0001a55e) list_single_idle_plugin_shortcut_pane

0xd78d,	// (0x0001a580) main_idle_act4_pane_t1

0xd79f,	// (0x0001a592) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001cb33) main_idle_act4_pane_t

0xd7b1,	// (0x0001a5a4) middle_sk_idle_act4_pane_ParamLimits

0xd7b1,	// (0x0001a5a4) middle_sk_idle_act4_pane

0xd7c7,	// (0x0001a5ba) popup_clock_digital_analogue_window_cp2

0xd7e1,	// (0x0001a5d4) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7e1,	// (0x0001a5d4) shortcut_wheel_idle_act4_pane

0xb987,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g1

0xb987,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g2

0xb987,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g3

0xb987,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g4

0xb987,	// (0x0001877a) shortcut_wheel_idle_act4_pane_g5

0xd7f5,	// (0x0001a5e8) shortcut_wheel_idle_act4_pane_g6

0xd7fd,	// (0x0001a5f0) shortcut_wheel_idle_act4_pane_g7

0xd805,	// (0x0001a5f8) shortcut_wheel_idle_act4_pane_g8

0xd80d,	// (0x0001a600) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001cb38) shortcut_wheel_idle_act4_pane_g

0xbbea,	// (0x000189dd) middle_sk_idle_act4_pane_g1_ParamLimits

0xbbea,	// (0x000189dd) middle_sk_idle_act4_pane_g1

0xd871,	// (0x0001a664) middle_sk_idle_act4_pane_g2_ParamLimits

0xd871,	// (0x0001a664) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001cb5b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001cb5b) middle_sk_idle_act4_pane_g

0xd87d,	// (0x0001a670) middle_sk_idle_act4_pane_t1_ParamLimits

0xd87d,	// (0x0001a670) middle_sk_idle_act4_pane_t1

0xd89a,	// (0x0001a68d) grid_ai_shortcut_pane_ParamLimits

0xd89a,	// (0x0001a68d) grid_ai_shortcut_pane

0xd8b3,	// (0x0001a6a6) list_highlight_pane_cp16_ParamLimits

0xd8b3,	// (0x0001a6a6) list_highlight_pane_cp16

0xd8c0,	// (0x0001a6b3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8c0,	// (0x0001a6b3) list_single_idle_plugin_shortcut_pane_g1

0xd8cc,	// (0x0001a6bf) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8cc,	// (0x0001a6bf) list_single_idle_plugin_shortcut_pane_g2

0xd8e6,	// (0x0001a6d9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8e6,	// (0x0001a6d9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001cb60) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001cb60) list_single_idle_plugin_shortcut_pane_g

0xd8f9,	// (0x0001a6ec) cell_ai_shortcut_pane_ParamLimits

0xd8f9,	// (0x0001a6ec) cell_ai_shortcut_pane

0xd91c,	// (0x0001a70f) cell_ai_shortcut_pane_g1_ParamLimits

0xd91c,	// (0x0001a70f) cell_ai_shortcut_pane_g1

0xd748,	// (0x0001a53b) ai_gene_pane_1_cp2

0xd93e,	// (0x0001a731) ai_gene_pane_2_cp2

0xd946,	// (0x0001a739) list_highlight_pane_cp15

0xd94f,	// (0x0001a742) list_single_idle_plugin_calendar_pane_g1

0xd946,	// (0x0001a739) list_highlight_pane_cp17

0xd957,	// (0x0001a74a) list_single_idle_plugin_calendar_pane_g1_copy1

0xd95f,	// (0x0001a752) list_single_idle_plugin_player_pane_g1

0xa9f6,	// (0x000177e9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001cb67) list_single_idle_plugin_player_pane_g

0xd967,	// (0x0001a75a) list_single_idle_plugin_player_pane_t1

0xd975,	// (0x0001a768) list_single_idle_plugin_player_pane_t2

0xd983,	// (0x0001a776) list_single_idle_plugin_player_pane_t3

0xd991,	// (0x0001a784) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001cb6c) list_single_idle_plugin_player_pane_t

0xd99f,	// (0x0001a792) wait_bar_pane_cp15

0xd9a7,	// (0x0001a79a) grid_ai_notification_pane

0xa9f6,	// (0x000177e9) list_single_idle_plugin_notification_pane_g1

0xd9b0,	// (0x0001a7a3) cell_ai_notification_pane_ParamLimits

0xd9b0,	// (0x0001a7a3) cell_ai_notification_pane

0xd9bd,	// (0x0001a7b0) cell_ai_notification_pane_g1

0xd9c5,	// (0x0001a7b8) cell_ai_notification_pane_t1

0xd9d3,	// (0x0001a7c6) tb_ext_find_button_pane

0xd9db,	// (0x0001a7ce) tb_ext_find_pane_g1

0xd9e3,	// (0x0001a7d6) tb_ext_find_pane_t1

0x7f60,	// (0x00014d53) tb_ext_find_button_pane_g1

0xd9f1,	// (0x0001a7e4) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001cb75) tb_ext_find_button_pane_g

0xd78d,	// (0x0001a580) main_idle_act4_pane_t1_ParamLimits

0xd79f,	// (0x0001a592) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001cb33) main_idle_act4_pane_t_ParamLimits

0xd7c7,	// (0x0001a5ba) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7d5,	// (0x0001a5c8) sat_plugin_idle_act4_pane_ParamLimits

0xd7d5,	// (0x0001a5c8) sat_plugin_idle_act4_pane

0xd9fa,	// (0x0001a7ed) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9fa,	// (0x0001a7ed) sat_plugin_idle_act4_pane_t1

0xda0d,	// (0x0001a800) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda0d,	// (0x0001a800) sat_plugin_idle_act4_pane_t2

0xda20,	// (0x0001a813) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda20,	// (0x0001a813) sat_plugin_idle_act4_pane_t3

0xda33,	// (0x0001a826) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda33,	// (0x0001a826) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001cb7a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001cb7a) sat_plugin_idle_act4_pane_t

0x5129,	// (0x00011f1c) popup_battery_window_ParamLimits

0x5129,	// (0x00011f1c) popup_battery_window

0x385d,	// (0x00010650) bg_popup_sub_pane_cp25_ParamLimits

0x385d,	// (0x00010650) bg_popup_sub_pane_cp25

0xda46,	// (0x0001a839) popup_battery_window_g1_ParamLimits

0xda46,	// (0x0001a839) popup_battery_window_g1

0xda52,	// (0x0001a845) popup_battery_window_t1_ParamLimits

0xda52,	// (0x0001a845) popup_battery_window_t1

0xda64,	// (0x0001a857) popup_battery_window_t2_ParamLimits

0xda64,	// (0x0001a857) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001cb83) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001cb83) popup_battery_window_t

0x860e,	// (0x00015401) midp_canvas_pane_ParamLimits

0x8686,	// (0x00015479) midp_keypad_pane_ParamLimits

0x8686,	// (0x00015479) midp_keypad_pane

0x8929,	// (0x0001571c) main_midp_pane_ParamLimits

0xb447,	// (0x0001823a) signal_pane_g2_cp_ParamLimits

0xda81,	// (0x0001a874) aid_size_cell_midp_keypad_ParamLimits

0xda81,	// (0x0001a874) aid_size_cell_midp_keypad

0xda9b,	// (0x0001a88e) midp_keyp_game_grid_pane_ParamLimits

0xda9b,	// (0x0001a88e) midp_keyp_game_grid_pane

0xdabb,	// (0x0001a8ae) midp_keyp_rocker_pane_ParamLimits

0xdabb,	// (0x0001a8ae) midp_keyp_rocker_pane

0xdaea,	// (0x0001a8dd) midp_keyp_sk_left_pane_ParamLimits

0xdaea,	// (0x0001a8dd) midp_keyp_sk_left_pane

0xdb46,	// (0x0001a939) midp_keyp_sk_right_pane_ParamLimits

0xdb46,	// (0x0001a939) midp_keyp_sk_right_pane

0x344a,	// (0x0001023d) bg_button_pane_cp03

0xdba2,	// (0x0001a995) midp_keyp_sk_left_pane_g1

0x344a,	// (0x0001023d) bg_button_pane_cp04

0xdba2,	// (0x0001a995) midp_keyp_sk_right_pane_g1

0xb987,	// (0x0001877a) midp_keyp_rocker_pane_g1

0xdbaa,	// (0x0001a99d) keyp_game_cell_pane_ParamLimits

0xdbaa,	// (0x0001a99d) keyp_game_cell_pane

0x344a,	// (0x0001023d) bg_button_pane_cp02

0xdbbd,	// (0x0001a9b0) keyp_game_cell_pane_g1

0x5173,	// (0x00011f66) popup_fep_vkb2_window_ParamLimits

0x5173,	// (0x00011f66) popup_fep_vkb2_window

0x6a10,	// (0x00013803) aid_size_cell_vkb2_ParamLimits

0x6a10,	// (0x00013803) aid_size_cell_vkb2

0x6a64,	// (0x00013857) popup_fep_vkb2_window_g1_ParamLimits

0x6a64,	// (0x00013857) popup_fep_vkb2_window_g1

0x6aac,	// (0x0001389f) vkb2_area_bottom_pane_ParamLimits

0x6aac,	// (0x0001389f) vkb2_area_bottom_pane

0x6b00,	// (0x000138f3) vkb2_area_keypad_pane_ParamLimits

0x6b00,	// (0x000138f3) vkb2_area_keypad_pane

0x6b46,	// (0x00013939) vkb2_area_top_pane_ParamLimits

0x6b46,	// (0x00013939) vkb2_area_top_pane

0x6bc0,	// (0x000139b3) vkb2_top_entry_pane_ParamLimits

0x6bc0,	// (0x000139b3) vkb2_top_entry_pane

0x6bea,	// (0x000139dd) vkb2_top_grid_left_pane_ParamLimits

0x6bea,	// (0x000139dd) vkb2_top_grid_left_pane

0x6c08,	// (0x000139fb) vkb2_top_grid_right_pane_ParamLimits

0x6c08,	// (0x000139fb) vkb2_top_grid_right_pane

0x6c26,	// (0x00013a19) vkb2_cell_keypad_pane_ParamLimits

0x6c26,	// (0x00013a19) vkb2_cell_keypad_pane

0x6cf7,	// (0x00013aea) vkb2_area_bottom_grid_pane_ParamLimits

0x6cf7,	// (0x00013aea) vkb2_area_bottom_grid_pane

0x6d1d,	// (0x00013b10) vkb2_area_bottom_pane_g1_ParamLimits

0x6d1d,	// (0x00013b10) vkb2_area_bottom_pane_g1

0x6d41,	// (0x00013b34) vkb2_area_bottom_pane_g2_ParamLimits

0x6d41,	// (0x00013b34) vkb2_area_bottom_pane_g2

0x6d6f,	// (0x00013b62) vkb2_area_bottom_pane_g3_ParamLimits

0x6d6f,	// (0x00013b62) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001cb88) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001cb88) vkb2_area_bottom_pane_g

0x6dd0,	// (0x00013bc3) vkb2_top_cell_left_pane_ParamLimits

0x6dd0,	// (0x00013bc3) vkb2_top_cell_left_pane

0xdbce,	// (0x0001a9c1) vkb2_top_entry_pane_g1_ParamLimits

0xdbce,	// (0x0001a9c1) vkb2_top_entry_pane_g1

0xdbdc,	// (0x0001a9cf) vkb2_top_entry_pane_t1_ParamLimits

0xdbdc,	// (0x0001a9cf) vkb2_top_entry_pane_t1

0xdc0e,	// (0x0001aa01) vkb2_top_entry_pane_t2_ParamLimits

0xdc0e,	// (0x0001aa01) vkb2_top_entry_pane_t2

0xdc40,	// (0x0001aa33) vkb2_top_entry_pane_t3_ParamLimits

0xdc40,	// (0x0001aa33) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001cb8f) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001cb8f) vkb2_top_entry_pane_t

0x6e1d,	// (0x00013c10) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e1d,	// (0x00013c10) vkb2_top_grid_right_pane_g1

0x6e33,	// (0x00013c26) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e33,	// (0x00013c26) vkb2_top_grid_right_pane_g2

0x6e4b,	// (0x00013c3e) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e4b,	// (0x00013c3e) vkb2_top_grid_right_pane_g3

0x6e63,	// (0x00013c56) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e63,	// (0x00013c56) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001cb96) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001cb96) vkb2_top_grid_right_pane_g

0x6e79,	// (0x00013c6c) vkb2_top_cell_left_pane_g1

0x6e90,	// (0x00013c83) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e90,	// (0x00013c83) vkb2_cell_keypad_pane_g1

0xdc64,	// (0x0001aa57) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc64,	// (0x0001aa57) vkb2_cell_keypad_pane_t1

0x6e9e,	// (0x00013c91) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e9e,	// (0x00013c91) vkb2_cell_bottom_grid_pane

0x6ed7,	// (0x00013cca) vkb2_cell_bottom_grid_pane_g1

0xd815,	// (0x0001a608) aid_call2_pane_cp02

0xd81d,	// (0x0001a610) aid_call_pane_cp02

0xd825,	// (0x0001a618) clock_digital_number_pane_cp10

0xd82d,	// (0x0001a620) clock_digital_number_pane_cp11

0xd835,	// (0x0001a628) clock_digital_number_pane_cp12

0xd83d,	// (0x0001a630) clock_digital_number_pane_cp13

0xd845,	// (0x0001a638) clock_digital_separator_pane_cp10

0x7f60,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g1

0x7f60,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g2

0xd84d,	// (0x0001a640) popup_clock_digital_analogue_window_cp2_g3

0x7f60,	// (0x00014d53) popup_clock_digital_analogue_window_cp2_g4

0xd84d,	// (0x0001a640) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001cb4b) popup_clock_digital_analogue_window_cp2_g

0xd855,	// (0x0001a648) popup_clock_digital_analogue_window_cp2_t1

0xd863,	// (0x0001a656) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001cb56) popup_clock_digital_analogue_window_cp2_t

0xb987,	// (0x0001877a) clock_digital_number_pane_cp10_g1

0xb987,	// (0x0001877a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001c932) clock_digital_number_pane_cp10_g

0xb987,	// (0x0001877a) clock_digital_separator_pane_cp10_g1

0xb987,	// (0x0001877a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001c932) clock_digital_separator_pane_cp10_g

0xd690,	// (0x0001a483) uniindi_top_pane_g3

0xd6a1,	// (0x0001a494) uniindi_top_pane_g4

0x6cb1,	// (0x00013aa4) vkb2_row_keypad_pane_ParamLimits

0x6cb1,	// (0x00013aa4) vkb2_row_keypad_pane

0x6ef3,	// (0x00013ce6) vkb2_cell_t_keypad_pane_ParamLimits

0x6ef3,	// (0x00013ce6) vkb2_cell_t_keypad_pane

0x6f03,	// (0x00013cf6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f03,	// (0x00013cf6) vkb2_cell_t_keypad_pane_cp08

0x6f18,	// (0x00013d0b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f18,	// (0x00013d0b) vkb2_cell_t_keypad_pane_cp09

0x6f2c,	// (0x00013d1f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f2c,	// (0x00013d1f) vkb2_cell_t_keypad_pane_cp01

0x6f3d,	// (0x00013d30) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f3d,	// (0x00013d30) vkb2_cell_t_keypad_pane_cp02

0x6f4e,	// (0x00013d41) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f4e,	// (0x00013d41) vkb2_cell_t_keypad_pane_cp03

0x6f5f,	// (0x00013d52) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f5f,	// (0x00013d52) vkb2_cell_t_keypad_pane_cp04

0x6f70,	// (0x00013d63) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f70,	// (0x00013d63) vkb2_cell_t_keypad_pane_cp05

0x6f81,	// (0x00013d74) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f81,	// (0x00013d74) vkb2_cell_t_keypad_pane_cp06

0x6f94,	// (0x00013d87) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f94,	// (0x00013d87) vkb2_cell_t_keypad_pane_cp07

0x6fa9,	// (0x00013d9c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fa9,	// (0x00013d9c) vkb2_cell_t_keypad_pane_cp10

0x6744,	// (0x00013537) vkb2_cell_t_keypad_pane_g1

0xdc7b,	// (0x0001aa6e) vkb2_cell_t_keypad_pane_t1

0x5064,	// (0x00011e57) popup_grid_graphic2_window

0xdc8d,	// (0x0001aa80) aid_size_cell_graphic2_ParamLimits

0xdc8d,	// (0x0001aa80) aid_size_cell_graphic2

0xdcc5,	// (0x0001aab8) bg_popup_window_pane_cp21_ParamLimits

0xdcc5,	// (0x0001aab8) bg_popup_window_pane_cp21

0xdcd3,	// (0x0001aac6) graphic2_pages_pane_ParamLimits

0xdcd3,	// (0x0001aac6) graphic2_pages_pane

0xdd19,	// (0x0001ab0c) grid_graphic2_control_pane_ParamLimits

0xdd19,	// (0x0001ab0c) grid_graphic2_control_pane

0xdd57,	// (0x0001ab4a) grid_graphic2_pane_ParamLimits

0xdd57,	// (0x0001ab4a) grid_graphic2_pane

0xddcd,	// (0x0001abc0) cell_graphic2_pane

0x5064,	// (0x00011e57) main_comp_mode_pane

0xce94,	// (0x00019c87) list_ai3_gene_pane_ParamLimits

0xd2c3,	// (0x0001a0b6) bg_popup_window_pane_cp19_ParamLimits

0xd2cf,	// (0x0001a0c2) bg_touch_area_indi_pane_ParamLimits

0xd2cf,	// (0x0001a0c2) bg_touch_area_indi_pane

0xd2e5,	// (0x0001a0d8) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2e5,	// (0x0001a0d8) bg_touch_area_indi_pane_cp01

0xd2fb,	// (0x0001a0ee) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2fb,	// (0x0001a0ee) bg_touch_area_indi_pane_cp02

0xd315,	// (0x0001a108) bg_touch_area_indi_pane_cp03_ParamLimits

0xd315,	// (0x0001a108) bg_touch_area_indi_pane_cp03

0xd32f,	// (0x0001a122) popup_slider_window_g1_ParamLimits

0xd34b,	// (0x0001a13e) popup_slider_window_g2_ParamLimits

0xd367,	// (0x0001a15a) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001cae0) popup_slider_window_g_ParamLimits

0xd3cd,	// (0x0001a1c0) popup_slider_window_t1_ParamLimits

0xd441,	// (0x0001a234) small_volume_slider_vertical_pane_ParamLimits

0xddcd,	// (0x0001abc0) cell_graphic2_pane_ParamLimits

0xde22,	// (0x0001ac15) bg_button_pane_cp10_ParamLimits

0xde22,	// (0x0001ac15) bg_button_pane_cp10

0xde37,	// (0x0001ac2a) bg_button_pane_cp11_ParamLimits

0xde37,	// (0x0001ac2a) bg_button_pane_cp11

0xde4c,	// (0x0001ac3f) graphic2_pages_pane_g1_ParamLimits

0xde4c,	// (0x0001ac3f) graphic2_pages_pane_g1

0xde67,	// (0x0001ac5a) graphic2_pages_pane_g2_ParamLimits

0xde67,	// (0x0001ac5a) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001cba4) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001cba4) graphic2_pages_pane_g

0xde7f,	// (0x0001ac72) graphic2_pages_pane_t1_ParamLimits

0xde7f,	// (0x0001ac72) graphic2_pages_pane_t1

0xde95,	// (0x0001ac88) cell_graphic2_control_pane_ParamLimits

0xde95,	// (0x0001ac88) cell_graphic2_control_pane

0xdeb5,	// (0x0001aca8) cell_graphic2_pane_g1_ParamLimits

0xdeb5,	// (0x0001aca8) cell_graphic2_pane_g1

0xdec2,	// (0x0001acb5) cell_graphic2_pane_g2_ParamLimits

0xdec2,	// (0x0001acb5) cell_graphic2_pane_g2

0xdecf,	// (0x0001acc2) cell_graphic2_pane_g3_ParamLimits

0xdecf,	// (0x0001acc2) cell_graphic2_pane_g3

0xdedc,	// (0x0001accf) cell_graphic2_pane_g4_ParamLimits

0xdedc,	// (0x0001accf) cell_graphic2_pane_g4

0xdee9,	// (0x0001acdc) cell_graphic2_pane_g5_ParamLimits

0xdee9,	// (0x0001acdc) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001cba9) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001cba9) cell_graphic2_pane_g

0xdf04,	// (0x0001acf7) cell_graphic2_pane_t1_ParamLimits

0xdf04,	// (0x0001acf7) cell_graphic2_pane_t1

0x8fb3,	// (0x00015da6) grid_highlight_pane_cp11_ParamLimits

0x8fb3,	// (0x00015da6) grid_highlight_pane_cp11

0x385d,	// (0x00010650) bg_button_pane_cp05

0xdf3b,	// (0x0001ad2e) cell_graphic2_control_pane_g1

0xb987,	// (0x0001877a) bg_touch_area_indi_pane_g1

0xdf63,	// (0x0001ad56) aid_cmod_rocker_key_size

0xdf6d,	// (0x0001ad60) aid_cmode_itu_key_size

0xdf77,	// (0x0001ad6a) main_cmode_video_pane

0xdf81,	// (0x0001ad74) main_comp_mode_itu_pane

0xdf8d,	// (0x0001ad80) main_comp_mode_rocker_pane

0xdf99,	// (0x0001ad8c) cell_cmode_rocker_pane_ParamLimits

0xdf99,	// (0x0001ad8c) cell_cmode_rocker_pane

0xdfad,	// (0x0001ada0) cell_cmode_itu_pane_ParamLimits

0xdfad,	// (0x0001ada0) cell_cmode_itu_pane

0x3de2,	// (0x00010bd5) bg_button_pane_cp06_ParamLimits

0x3de2,	// (0x00010bd5) bg_button_pane_cp06

0xbbea,	// (0x000189dd) cell_cmode_rocker_pane_g1_ParamLimits

0xbbea,	// (0x000189dd) cell_cmode_rocker_pane_g1

0xd4e8,	// (0x0001a2db) cell_cmode_rocker_pane_g2_ParamLimits

0xd4e8,	// (0x0001a2db) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001cbb9) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001cbb9) cell_cmode_rocker_pane_g

0x344a,	// (0x0001023d) bg_button_pane_cp07

0xdfc4,	// (0x0001adb7) cell_cmode_itu_pane_g1

0xdfcd,	// (0x0001adc0) cell_cmode_itu_pane_t1

0xdfdb,	// (0x0001adce) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001cbbe) cell_cmode_itu_pane_t

0xd714,	// (0x0001a507) aid_touch_ctrl_left

0xd71c,	// (0x0001a50f) aid_touch_ctrl_right

0x344a,	// (0x0001023d) compa_mode_pane

0xdfe9,	// (0x0001addc) aid_cmod_rocker_key_size_cp

0xdff3,	// (0x0001ade6) aid_cmode_itu_key_size_cp

0xdffd,	// (0x0001adf0) compa_mode_pane_g1

0xe005,	// (0x0001adf8) compa_mode_pane_g2

0xe00d,	// (0x0001ae00) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001cbc3) compa_mode_pane_g

0xe015,	// (0x0001ae08) main_comp_mode_itu_pane_cp

0xe01d,	// (0x0001ae10) main_comp_mode_rocker_pane_cp

0xe025,	// (0x0001ae18) cell_cmode_itu_pane_cp_ParamLimits

0xe025,	// (0x0001ae18) cell_cmode_itu_pane_cp

0xe03a,	// (0x0001ae2d) cell_cmode_rocker_pane_cp_ParamLimits

0xe03a,	// (0x0001ae2d) cell_cmode_rocker_pane_cp

0x3de2,	// (0x00010bd5) bg_button_pane_cp06_cp_ParamLimits

0x3de2,	// (0x00010bd5) bg_button_pane_cp06_cp

0xbbea,	// (0x000189dd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbbea,	// (0x000189dd) cell_cmode_rocker_pane_g1_cp

0xb987,	// (0x0001877a) cell_cmode_rocker_pane_g2_cp

0x344a,	// (0x0001023d) bg_button_pane_cp07_cp

0xe04c,	// (0x0001ae3f) cell_cmode_itu_pane_g1_cp

0xe055,	// (0x0001ae48) cell_cmode_itu_pane_t1_cp

0xe055,	// (0x0001ae48) cell_cmode_itu_pane_t2_cp

0xa4ce,	// (0x000172c1) settings_code_pane_cp2

0x3687,	// (0x0001047a) bg_popup_window_pane_cp3_ParamLimits

0x3a71,	// (0x00010864) heading_pane_cp3_ParamLimits

0x3a7d,	// (0x00010870) listscroll_popup_graphic_pane_ParamLimits

0x64d7,	// (0x000132ca) fep_hwr_aid_pane_ParamLimits

0x6969,	// (0x0001375c) aid_touch_sctrl_top_ParamLimits

0x6984,	// (0x00013777) sctrl_sk_top_pane_g1_ParamLimits

0x6744,	// (0x00013537) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001caf9) sctrl_sk_top_pane_g_ParamLimits

0x6991,	// (0x00013784) sctrl_sk_top_pane_t1_ParamLimits

0x6969,	// (0x0001375c) aid_touch_sctrl_bottom_ParamLimits

0x6991,	// (0x00013784) sctrl_sk_bottom_pane_t1_ParamLimits

0xd65a,	// (0x0001a44d) aid_area_touch_clock

0x6b88,	// (0x0001397b) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b88,	// (0x0001397b) aid_vkb2_area_top_pane_cell

0x6cd3,	// (0x00013ac6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6cd3,	// (0x00013ac6) aid_vkb2_area_bottom_pane_cell

0xdbc6,	// (0x0001a9b9) popup_char_count_window

0xe063,	// (0x0001ae56) popup_char_count_window_g1

0xe06c,	// (0x0001ae5f) popup_char_count_window_g2

0xe075,	// (0x0001ae68) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001cbca) popup_char_count_window_g

0xe07e,	// (0x0001ae71) popup_char_count_window_t1

0x6a42,	// (0x00013835) popup_fep_char_preview_window_ParamLimits

0x6a42,	// (0x00013835) popup_fep_char_preview_window

0x6ba6,	// (0x00013999) vkb2_top_candi_pane_ParamLimits

0x6ba6,	// (0x00013999) vkb2_top_candi_pane

0xe08c,	// (0x0001ae7f) cell_vkb2_top_candi_pane_ParamLimits

0xe08c,	// (0x0001ae7f) cell_vkb2_top_candi_pane

0x6fbe,	// (0x00013db1) bg_popup_fep_char_preview_window_ParamLimits

0x6fbe,	// (0x00013db1) bg_popup_fep_char_preview_window

0x6fcc,	// (0x00013dbf) popup_fep_char_preview_window_t1_ParamLimits

0x6fcc,	// (0x00013dbf) popup_fep_char_preview_window_t1

0xe0dd,	// (0x0001aed0) bg_popup_fep_char_preview_window_g1

0xe0e5,	// (0x0001aed8) bg_popup_fep_char_preview_window_g2

0xe0ed,	// (0x0001aee0) bg_popup_fep_char_preview_window_g3

0xe0f5,	// (0x0001aee8) bg_popup_fep_char_preview_window_g4

0xe0fd,	// (0x0001aef0) bg_popup_fep_char_preview_window_g5

0x7006,	// (0x00013df9) bg_popup_fep_char_preview_window_g6

0xe105,	// (0x0001aef8) bg_popup_fep_char_preview_window_g7

0xe10d,	// (0x0001af00) bg_popup_fep_char_preview_window_g8

0xe115,	// (0x0001af08) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001cbd1) bg_popup_fep_char_preview_window_g

0x6744,	// (0x00013537) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6744,	// (0x00013537) cell_vkb2_top_candi_pane_g1

0x6752,	// (0x00013545) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6752,	// (0x00013545) cell_vkb2_top_candi_pane_g2

0xc91e,	// (0x00019711) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc91e,	// (0x00019711) cell_vkb2_top_candi_pane_g3

0x700e,	// (0x00013e01) cell_vkb2_top_candi_pane_g4_ParamLimits

0x700e,	// (0x00013e01) cell_vkb2_top_candi_pane_g4

0xc2ae,	// (0x000190a1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc2ae,	// (0x000190a1) cell_vkb2_top_candi_pane_g5

0x702f,	// (0x00013e22) cell_vkb2_top_candi_pane_g6_ParamLimits

0x702f,	// (0x00013e22) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001cbe4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001cbe4) cell_vkb2_top_candi_pane_g

0x703d,	// (0x00013e30) cell_vkb2_top_candi_pane_t1

0x6337,	// (0x0001312a) aid_size_touch_slider_mark_ParamLimits

0x6337,	// (0x0001312a) aid_size_touch_slider_mark

0xdd09,	// (0x0001aafc) grid_graphic2_catg_pane_ParamLimits

0xdd09,	// (0x0001aafc) grid_graphic2_catg_pane

0xdda7,	// (0x0001ab9a) popup_grid_graphic2_window_t1_ParamLimits

0xdda7,	// (0x0001ab9a) popup_grid_graphic2_window_t1

0xddb9,	// (0x0001abac) popup_grid_graphic2_window_t2_ParamLimits

0xddb9,	// (0x0001abac) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001cb9f) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001cb9f) popup_grid_graphic2_window_t

0x385d,	// (0x00010650) bg_button_pane_cp05_ParamLimits

0xdf3b,	// (0x0001ad2e) cell_graphic2_control_pane_g1_ParamLimits

0xe11d,	// (0x0001af10) cell_graphic2_catg_pane_ParamLimits

0xe11d,	// (0x0001af10) cell_graphic2_catg_pane

0x344a,	// (0x0001023d) bg_button_pane_cp12

0xe12f,	// (0x0001af22) cell_graphic2_catg_pane_g1

0xd626,	// (0x0001a419) cell_tb_ext_pane_t1_ParamLimits

0x6df0,	// (0x00013be3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6df0,	// (0x00013be3) vkb2_top_cell_right_narrow_pane

0x6e08,	// (0x00013bfb) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e08,	// (0x00013bfb) vkb2_top_cell_right_wide_pane

0x64c9,	// (0x000132bc) bg_vkb2_func_pane_ParamLimits

0x64c9,	// (0x000132bc) bg_vkb2_func_pane

0x6e79,	// (0x00013c6c) vkb2_top_cell_left_pane_g1_ParamLimits

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp03

0x6ed7,	// (0x00013cca) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e97,	// (0x00015c8a) bg_vkb2_func_pane_g1

0x8e9f,	// (0x00015c92) bg_vkb2_func_pane_g2

0x8eaf,	// (0x00015ca2) bg_vkb2_func_pane_g3

0x8ea7,	// (0x00015c9a) bg_vkb2_func_pane_g4

0x8eb7,	// (0x00015caa) bg_vkb2_func_pane_g5

0x8ebf,	// (0x00015cb2) bg_vkb2_func_pane_g6

0x8ec7,	// (0x00015cba) bg_vkb2_func_pane_g7

0x8ecf,	// (0x00015cc2) bg_vkb2_func_pane_g8

0x8e8f,	// (0x00015c82) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001cbf1) bg_vkb2_func_pane_g

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp01

0x6e79,	// (0x00013c6c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e79,	// (0x00013c6c) vkb2_top_cell_right_wide_pane_g1

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64c9,	// (0x000132bc) bg_vkb2_fuc_pane_cp02

0x6ed7,	// (0x00013cca) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ed7,	// (0x00013cca) vkb2_top_cell_right_narrow_pane_g1

0xd23d,	// (0x0001a030) aid_touch_area_decrease_ParamLimits

0xd23d,	// (0x0001a030) aid_touch_area_decrease

0xd261,	// (0x0001a054) aid_touch_area_increase_ParamLimits

0xd261,	// (0x0001a054) aid_touch_area_increase

0xd279,	// (0x0001a06c) aid_touch_area_mute_ParamLimits

0xd279,	// (0x0001a06c) aid_touch_area_mute

0xd295,	// (0x0001a088) aid_touch_area_slider_ParamLimits

0xd295,	// (0x0001a088) aid_touch_area_slider

0xd383,	// (0x0001a176) popup_slider_window_g4_ParamLimits

0xd383,	// (0x0001a176) popup_slider_window_g4

0xd39b,	// (0x0001a18e) popup_slider_window_g5_ParamLimits

0xd39b,	// (0x0001a18e) popup_slider_window_g5

0xd3bd,	// (0x0001a1b0) popup_slider_window_g6_ParamLimits

0xd3bd,	// (0x0001a1b0) popup_slider_window_g6

0xd3fb,	// (0x0001a1ee) popup_slider_window_t2_ParamLimits

0xd3fb,	// (0x0001a1ee) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001caed) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001caed) popup_slider_window_t

0xd413,	// (0x0001a206) slider_pane_ParamLimits

0xd413,	// (0x0001a206) slider_pane

0xe138,	// (0x0001af2b) slider_pane_g1_ParamLimits

0xe138,	// (0x0001af2b) slider_pane_g1

0xe14c,	// (0x0001af3f) slider_pane_g2_ParamLimits

0xe14c,	// (0x0001af3f) slider_pane_g2

0xe162,	// (0x0001af55) slider_pane_g3_ParamLimits

0xe162,	// (0x0001af55) slider_pane_g3

0x0003,

0xfe11,	// (0x0001cc04) slider_pane_g_ParamLimits

0xfe11,	// (0x0001cc04) slider_pane_g

0x5ebd,	// (0x00012cb0) popup_tb_float_extension_window_ParamLimits

0x5ebd,	// (0x00012cb0) popup_tb_float_extension_window

0xe18e,	// (0x0001af81) aid_size_cell_tb_float_ext

0x344a,	// (0x0001023d) bg_popup_sub_window_cp28

0xe19a,	// (0x0001af8d) grid_tb_float_ext_pane

0xe1a6,	// (0x0001af99) cell_tb_float_ext_pane_ParamLimits

0xe1a6,	// (0x0001af99) cell_tb_float_ext_pane

0xe1c2,	// (0x0001afb5) cell_tb_float_ext_pane_g1

0xe1cb,	// (0x0001afbe) grid_highlight_pane_cp12

0x661e,	// (0x00013411) cell_last_hwr_side_pane_ParamLimits

0x661e,	// (0x00013411) cell_last_hwr_side_pane

0xb987,	// (0x0001877a) cell_last_hwr_side_pane_g1

0xe1d4,	// (0x0001afc7) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001cc0d) cell_last_hwr_side_pane_g

0x6d9f,	// (0x00013b92) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d9f,	// (0x00013b92) vkb2_area_bottom_space_btn_pane

0x6744,	// (0x00013537) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc7b,	// (0x0001aa6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x703d,	// (0x00013e30) cell_vkb2_top_candi_pane_t1_ParamLimits

0x705b,	// (0x00013e4e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x705b,	// (0x00013e4e) vkb2_area_bottom_space_btn_pane_g1

0x7095,	// (0x00013e88) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7095,	// (0x00013e88) vkb2_area_bottom_space_btn_pane_g2

0x70cb,	// (0x00013ebe) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70cb,	// (0x00013ebe) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001cc12) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001cc12) vkb2_area_bottom_space_btn_pane_g

0x658e,	// (0x00013381) cel_fep_hwr_func_pane_ParamLimits

0x658e,	// (0x00013381) cel_fep_hwr_func_pane

0x65ca,	// (0x000133bd) cell_hwr_side_button_pane_ParamLimits

0x65ca,	// (0x000133bd) cell_hwr_side_button_pane

0xd65a,	// (0x0001a44d) aid_area_touch_clock_ParamLimits

0x385d,	// (0x00010650) bg_uniindi_top_pane_ParamLimits

0xd66e,	// (0x0001a461) uniindi_top_pane_g1_ParamLimits

0xd684,	// (0x0001a477) uniindi_top_pane_g2_ParamLimits

0xd690,	// (0x0001a483) uniindi_top_pane_g3_ParamLimits

0xd6a1,	// (0x0001a494) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001cb25) uniindi_top_pane_g_ParamLimits

0xd6ae,	// (0x0001a4a1) uniindi_top_pane_t1_ParamLimits

0x385d,	// (0x00010650) bg_vkb2_func_pane_cp01_ParamLimits

0x385d,	// (0x00010650) bg_vkb2_func_pane_cp01

0xe1dd,	// (0x0001afd0) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1dd,	// (0x0001afd0) cel_fep_hwr_func_pane_g1

0x385d,	// (0x00010650) bg_vkb2_func_pane_cp02_ParamLimits

0x385d,	// (0x00010650) bg_vkb2_func_pane_cp02

0xe1dd,	// (0x0001afd0) cell_hwr_side_button_pane_g1_ParamLimits

0xe1dd,	// (0x0001afd0) cell_hwr_side_button_pane_g1

0x8ce6,	// (0x00015ad9) status_pane_g4_ParamLimits

0x8ce6,	// (0x00015ad9) status_pane_g4

0x8d00,	// (0x00015af3) status_pane_t1

0xb73a,	// (0x0001852d) form2_midp_gauge_slider_cont_pane

0xb742,	// (0x00018535) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb754,	// (0x00018547) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb766,	// (0x00018559) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001c8e5) form2_midp_gauge_slider_pane_t_ParamLimits

0xb778,	// (0x0001856b) form2_midp_slider_pane_ParamLimits

0x6a02,	// (0x000137f5) aid_size_cell_func_vkb2_ParamLimits

0x6a02,	// (0x000137f5) aid_size_cell_func_vkb2

0xe17a,	// (0x0001af6d) slider_pane_g4_ParamLimits

0xe17a,	// (0x0001af6d) slider_pane_g4

0x7115,	// (0x00013f08) form2_midp_gauge_slider_pane_t2_cp01

0x7123,	// (0x00013f16) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7123,	// (0x00013f16) form2_midp_gauge_slider_pane_t3_cp01

0x7140,	// (0x00013f33) form2_midp_slider_pane_cp01

0x344a,	// (0x0001023d) navi_smil_pane

0xe216,	// (0x0001b009) navi_smil_pane_g1

0xe21e,	// (0x0001b011) navi_smil_pane_t1

0xe1eb,	// (0x0001afde) form2_midp_slider_pane_g1

0xe1f4,	// (0x0001afe7) form2_midp_slider_pane_g2

0xe1fc,	// (0x0001afef) form2_midp_slider_pane_g3

0xe1eb,	// (0x0001afde) form2_midp_slider_pane_g4

0xe204,	// (0x0001aff7) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001cc1b) form2_midp_slider_pane_g

0x7105,	// (0x00013ef8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7105,	// (0x00013ef8) vkb2_area_bottom_space_btn_pane_g4

0x8b05,	// (0x000158f8) lc0_navi_pane_ParamLimits

0x8b05,	// (0x000158f8) lc0_navi_pane

0x8b81,	// (0x00015974) lc0_stat_indi_pane_ParamLimits

0x8b81,	// (0x00015974) lc0_stat_indi_pane

0x8b98,	// (0x0001598b) ls0_title_pane_ParamLimits

0x8b98,	// (0x0001598b) ls0_title_pane

0x3de2,	// (0x00010bd5) bg_popup_sub_pane_cp14_ParamLimits

0xd641,	// (0x0001a434) list_uniindi_pane_ParamLimits

0xd64d,	// (0x0001a440) uniindi_top_pane_ParamLimits

0xd6ec,	// (0x0001a4df) list_single_uniindi_pane_g1_ParamLimits

0xd6ff,	// (0x0001a4f2) list_single_uniindi_pane_t1_ParamLimits

0x7149,	// (0x00013f3c) lc0_stat_clock_pane_ParamLimits

0x7149,	// (0x00013f3c) lc0_stat_clock_pane

0xe22c,	// (0x0001b01f) lc0_stat_indi_pane_g1_ParamLimits

0xe22c,	// (0x0001b01f) lc0_stat_indi_pane_g1

0xe239,	// (0x0001b02c) lc0_stat_indi_pane_g2_ParamLimits

0xe239,	// (0x0001b02c) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001cc26) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001cc26) lc0_stat_indi_pane_g

0x7156,	// (0x00013f49) lc0_uni_indicator_pane_ParamLimits

0x7156,	// (0x00013f49) lc0_uni_indicator_pane

0xe246,	// (0x0001b039) ls0_title_pane_g1_ParamLimits

0xe246,	// (0x0001b039) ls0_title_pane_g1

0xe25a,	// (0x0001b04d) ls0_title_pane_t1_ParamLimits

0xe25a,	// (0x0001b04d) ls0_title_pane_t1

0x7163,	// (0x00013f56) lc0_uni_indicator_pane_g1_ParamLimits

0x7163,	// (0x00013f56) lc0_uni_indicator_pane_g1

0xe290,	// (0x0001b083) lc0_stat_clock_pane_t1

0x5064,	// (0x00011e57) main_ai5_pane

0xe29e,	// (0x0001b091) ai5_sk_pane_ParamLimits

0xe29e,	// (0x0001b091) ai5_sk_pane

0xe2ab,	// (0x0001b09e) cell_ai5_widget_pane_ParamLimits

0xe2ab,	// (0x0001b09e) cell_ai5_widget_pane

0xe84d,	// (0x0001b640) aid_size_cell_widget_grid

0xe85b,	// (0x0001b64e) bg_ai5_widget_pane_ParamLimits

0xe85b,	// (0x0001b64e) bg_ai5_widget_pane

0xe8d3,	// (0x0001b6c6) cell_ai5_widget_pane_g2

0xe8e7,	// (0x0001b6da) cell_ai5_widget_pane_g3

0xe901,	// (0x0001b6f4) cell_ai5_widget_pane_g4

0xe911,	// (0x0001b704) cell_ai5_widget_pane_g5

0xe921,	// (0x0001b714) cell_ai5_widget_pane_g6

0xe92d,	// (0x0001b720) cell_ai5_widget_pane_g7

0xe975,	// (0x0001b768) cell_ai5_widget_pane_t1_ParamLimits

0xe975,	// (0x0001b768) cell_ai5_widget_pane_t1

0xe992,	// (0x0001b785) cell_ai5_widget_pane_t2_ParamLimits

0xe992,	// (0x0001b785) cell_ai5_widget_pane_t2

0xe9aa,	// (0x0001b79d) cell_ai5_widget_pane_t3_ParamLimits

0xe9aa,	// (0x0001b79d) cell_ai5_widget_pane_t3

0xe9c2,	// (0x0001b7b5) cell_ai5_widget_pane_t4_ParamLimits

0xe9c2,	// (0x0001b7b5) cell_ai5_widget_pane_t4

0xe9e8,	// (0x0001b7db) cell_ai5_widget_pane_t5_ParamLimits

0xe9e8,	// (0x0001b7db) cell_ai5_widget_pane_t5

0xea08,	// (0x0001b7fb) cell_ai5_widget_pane_t6_ParamLimits

0xea08,	// (0x0001b7fb) cell_ai5_widget_pane_t6

0xea1a,	// (0x0001b80d) cell_ai5_widget_pane_t7_ParamLimits

0xea1a,	// (0x0001b80d) cell_ai5_widget_pane_t7

0xea33,	// (0x0001b826) cell_ai5_widget_pane_t8_ParamLimits

0xea33,	// (0x0001b826) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001cc40) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001cc40) cell_ai5_widget_pane_t

0xea92,	// (0x0001b885) grid_ai5_widget_pane

0x3de2,	// (0x00010bd5) highlight_cell_ai5_widget_pane_ParamLimits

0x3de2,	// (0x00010bd5) highlight_cell_ai5_widget_pane

0xeaa0,	// (0x0001b893) ai5_sk_left_pane

0xeaaa,	// (0x0001b89d) ai5_sk_middle_pane

0xeab4,	// (0x0001b8a7) ai5_sk_right_pane

0xeabe,	// (0x0001b8b1) bg_ai5_widget_pane_g1_ParamLimits

0xeabe,	// (0x0001b8b1) bg_ai5_widget_pane_g1

0xeaca,	// (0x0001b8bd) bg_ai5_widget_pane_g2_ParamLimits

0xeaca,	// (0x0001b8bd) bg_ai5_widget_pane_g2

0xead6,	// (0x0001b8c9) bg_ai5_widget_pane_g3_ParamLimits

0xead6,	// (0x0001b8c9) bg_ai5_widget_pane_g3

0xeae2,	// (0x0001b8d5) bg_ai5_widget_pane_g4_ParamLimits

0xeae2,	// (0x0001b8d5) bg_ai5_widget_pane_g4

0xeaee,	// (0x0001b8e1) bg_ai5_widget_pane_g5_ParamLimits

0xeaee,	// (0x0001b8e1) bg_ai5_widget_pane_g5

0xeafa,	// (0x0001b8ed) bg_ai5_widget_pane_g6_ParamLimits

0xeafa,	// (0x0001b8ed) bg_ai5_widget_pane_g6

0xeb06,	// (0x0001b8f9) bg_ai5_widget_pane_g7_ParamLimits

0xeb06,	// (0x0001b8f9) bg_ai5_widget_pane_g7

0xeb12,	// (0x0001b905) bg_ai5_widget_pane_g8_ParamLimits

0xeb12,	// (0x0001b905) bg_ai5_widget_pane_g8

0xeb1e,	// (0x0001b911) bg_ai5_widget_pane_g9_ParamLimits

0xeb1e,	// (0x0001b911) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001cc55) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001cc55) bg_ai5_widget_pane_g

0xeb56,	// (0x0001b949) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb56,	// (0x0001b949) cell_shortcut_ai5_widget_pane

0x85fa,	// (0x000153ed) bg_cell_shortcut_ai5_widget_pane

0xeb69,	// (0x0001b95c) cell_grid_ai5_widget_pane_g1

0x85fa,	// (0x000153ed) highlight_cell_shortcut_ai5_widget_pane

0x8e97,	// (0x00015c8a) ai5_sk_left_pane_g1

0xeb72,	// (0x0001b965) ai5_sk_left_pane_g2

0xeb7a,	// (0x0001b96d) ai5_sk_left_pane_g3

0xeb82,	// (0x0001b975) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001cc68) ai5_sk_left_pane_g

0xeb8a,	// (0x0001b97d) ai5_sk_left_pane_t1

0x8e9f,	// (0x00015c92) ai5_sk_right_pane_g1

0xeb98,	// (0x0001b98b) ai5_sk_right_pane_g2

0xeba0,	// (0x0001b993) ai5_sk_right_pane_g3

0xeba8,	// (0x0001b99b) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001cc71) ai5_sk_right_pane_g

0xebb0,	// (0x0001b9a3) ai5_sk_right_pane_t1

0x8e9f,	// (0x00015c92) ai5_sk_middle_pane_g1

0x8e97,	// (0x00015c8a) ai5_sk_middle_pane_g2

0x8eb7,	// (0x00015caa) ai5_sk_middle_pane_g3

0xeba0,	// (0x0001b993) ai5_sk_middle_pane_g4

0xeb7a,	// (0x0001b96d) ai5_sk_middle_pane_g5

0xebbe,	// (0x0001b9b1) ai5_sk_middle_pane_g6

0xebc6,	// (0x0001b9b9) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001cc7a) ai5_sk_middle_pane_g

0x8991,	// (0x00015784) aid_touch_area_size_lc0_ParamLimits

0x8991,	// (0x00015784) aid_touch_area_size_lc0

0x6773,	// (0x00013566) cell_hwr_candidate_pane_t1_ParamLimits

0x89af,	// (0x000157a2) aid_touch_navi_pane

0x8c98,	// (0x00015a8b) status_dt_navi_pane_ParamLimits

0x8c98,	// (0x00015a8b) status_dt_navi_pane

0x8ca5,	// (0x00015a98) status_dt_sta_pane_ParamLimits

0x8ca5,	// (0x00015a98) status_dt_sta_pane

0xebce,	// (0x0001b9c1) dt_sta_controll_pane

0xebdb,	// (0x0001b9ce) dt_sta_indi_pane

0xebec,	// (0x0001b9df) dt_sta_title_pane

0x385d,	// (0x00010650) bg_dt_sta_indi_pane_ParamLimits

0x385d,	// (0x00010650) bg_dt_sta_indi_pane

0xebff,	// (0x0001b9f2) dt_sta_battery_pane

0xec07,	// (0x0001b9fa) dt_sta_indi_pane_g1

0xec10,	// (0x0001ba03) dt_sta_indi_pane_g2

0xec19,	// (0x0001ba0c) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001cc89) dt_sta_indi_pane_g

0xec22,	// (0x0001ba15) dt_sta_signal_pane

0x3de2,	// (0x00010bd5) bg_dt_sta_title_pane_ParamLimits

0x3de2,	// (0x00010bd5) bg_dt_sta_title_pane

0xec2b,	// (0x0001ba1e) dt_sta_title_pane_g1

0xec33,	// (0x0001ba26) dt_sta_title_pane_t1_ParamLimits

0xec33,	// (0x0001ba26) dt_sta_title_pane_t1

0x344a,	// (0x0001023d) bg_dt_sta_control_pane

0xec48,	// (0x0001ba3b) dt_sta_controll_pane_g1

0xec51,	// (0x0001ba44) bg_dt_sta_title_pane_g1

0xec5a,	// (0x0001ba4d) bg_dt_sta_title_pane_g2

0xec63,	// (0x0001ba56) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001cc90) bg_dt_sta_title_pane_g

0xb987,	// (0x0001877a) bg_dt_sta_indi_pane_g1

0xec6c,	// (0x0001ba5f) dt_sta_signal_pane_g1

0xec74,	// (0x0001ba67) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001cc97) dt_sta_signal_pane_g

0xec7c,	// (0x0001ba6f) dt_sta_battery_pane_g1

0xec85,	// (0x0001ba78) dt_sta_battery_pane_t1

0xb987,	// (0x0001877a) bg_dt_sta_control_pane_g1

0x806a,	// (0x00014e5d) fep_china_uni_eep_pane

0x8072,	// (0x00014e65) fep_china_uni_entry_pane_ParamLimits

0x8082,	// (0x00014e75) popup_fep_china_uni_window_g1_ParamLimits

0x8092,	// (0x00014e85) popup_fep_china_uni_window_g2_ParamLimits

0x8092,	// (0x00014e85) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c50b) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c50b) popup_fep_china_uni_window_g

0xec94,	// (0x0001ba87) fep_china_uni_eep_pane_g1

0xec9c,	// (0x0001ba8f) fep_china_uni_eep_pane_t1

0xe20d,	// (0x0001b000) aid_touch_area_size_smil_player

0x8afd,	// (0x000158f0) lc0_clock_pane

0x8cf4,	// (0x00015ae7) status_pane_g5_ParamLimits

0x8cf4,	// (0x00015ae7) status_pane_g5

0x5b42,	// (0x00012935) popup_keymap_window

0x8cba,	// (0x00015aad) status_icon_pane

0xe8e7,	// (0x0001b6da) cell_ai5_widget_pane_g3_ParamLimits

0xe901,	// (0x0001b6f4) cell_ai5_widget_pane_g4_ParamLimits

0xe911,	// (0x0001b704) cell_ai5_widget_pane_g5_ParamLimits

0xe939,	// (0x0001b72c) cell_ai5_widget_pane_g8_ParamLimits

0xe939,	// (0x0001b72c) cell_ai5_widget_pane_g8

0xe94d,	// (0x0001b740) cell_ai5_widget_pane_g9_ParamLimits

0xe94d,	// (0x0001b740) cell_ai5_widget_pane_g9

0xe961,	// (0x0001b754) cell_ai5_widget_pane_g10_ParamLimits

0xe961,	// (0x0001b754) cell_ai5_widget_pane_g10

0xecab,	// (0x0001ba9e) status_icon_pane_g1

0x344a,	// (0x0001023d) bg_popup_sub_pane_cp13

0xecb3,	// (0x0001baa6) popup_keymap_window_t1

0x88d2,	// (0x000156c5) control_pane_g6_ParamLimits

0x88d2,	// (0x000156c5) control_pane_g6

0x88df,	// (0x000156d2) control_pane_g7_ParamLimits

0x88df,	// (0x000156d2) control_pane_g7

0x88ec,	// (0x000156df) control_pane_g8_ParamLimits

0x88ec,	// (0x000156df) control_pane_g8

0xebce,	// (0x0001b9c1) dt_sta_controll_pane_ParamLimits

0xebdb,	// (0x0001b9ce) dt_sta_indi_pane_ParamLimits

0xebec,	// (0x0001b9df) dt_sta_title_pane_ParamLimits

0x3caa,	// (0x00010a9d) aid_size_touch_scroll_bar_cale

0x5141,	// (0x00011f34) popup_discreet_window_ParamLimits

0x5141,	// (0x00011f34) popup_discreet_window

0x51cf,	// (0x00011fc2) popup_sk_window

0x95cc,	// (0x000163bf) bg_popup_sub_pane_cp28_ParamLimits

0x95cc,	// (0x000163bf) bg_popup_sub_pane_cp28

0xecc1,	// (0x0001bab4) popup_discreet_window_g1_ParamLimits

0xecc1,	// (0x0001bab4) popup_discreet_window_g1

0xece1,	// (0x0001bad4) popup_discreet_window_t1_ParamLimits

0xece1,	// (0x0001bad4) popup_discreet_window_t1

0xecff,	// (0x0001baf2) popup_discreet_window_t2_ParamLimits

0xecff,	// (0x0001baf2) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001cc9c) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001cc9c) popup_discreet_window_t

0x7176,	// (0x00013f69) popup_sk_window_g1

0x7180,	// (0x00013f73) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001cca3) popup_sk_window_g

0x7188,	// (0x00013f7b) popup_sk_window_t1

0x7196,	// (0x00013f89) popup_sk_window_t1_copy1

0xe8d3,	// (0x0001b6c6) cell_ai5_widget_pane_g2_ParamLimits

0xea45,	// (0x0001b838) cell_ai5_widget_pane_t9_ParamLimits

0xea45,	// (0x0001b838) cell_ai5_widget_pane_t9

0x344a,	// (0x0001023d) main_fep_fshwr2_pane

0x71a4,	// (0x00013f97) aid_fshwr2_btn_pane

0x71b0,	// (0x00013fa3) aid_fshwr2_syb_pane

0x71b0,	// (0x00013fa3) aid_fshwr2_txt_pane

0x71bc,	// (0x00013faf) fshwr2_func_candi_pane

0x71cf,	// (0x00013fc2) fshwr2_hwr_syb_pane

0x71dd,	// (0x00013fd0) fshwr2_icf_pane

0x5064,	// (0x00011e57) fshwr2_icf_bg_pane

0x720c,	// (0x00013fff) fshwr2_icf_pane_t1_ParamLimits

0x720c,	// (0x00013fff) fshwr2_icf_pane_t1

0x7f60,	// (0x00014d53) fshwr2_func_candi_pane_g1

0xed51,	// (0x0001bb44) fshwr2_func_candi_row_pane_ParamLimits

0xed51,	// (0x0001bb44) fshwr2_func_candi_row_pane

0x7224,	// (0x00014017) cell_fshwr2_syb_pane_ParamLimits

0x7224,	// (0x00014017) cell_fshwr2_syb_pane

0x6744,	// (0x00013537) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6744,	// (0x00013537) fshwr2_hwr_syb_pane_g1

0x5064,	// (0x00011e57) bg_popup_call_pane_cp01

0x723a,	// (0x0001402d) fshwr2_func_candi_cell_pane_ParamLimits

0x723a,	// (0x0001402d) fshwr2_func_candi_cell_pane

0xed61,	// (0x0001bb54) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed61,	// (0x0001bb54) fshwr2_func_candi_cell_bg_pane

0x728b,	// (0x0001407e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x728b,	// (0x0001407e) fshwr2_func_candi_cell_pane_g1

0x72ab,	// (0x0001409e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x72ab,	// (0x0001409e) fshwr2_func_candi_cell_pane_t1

0x5064,	// (0x00011e57) bg_button_pane_cp08

0xed6d,	// (0x0001bb60) cell_fshwr2_syb_bg_pane

0x72be,	// (0x000140b1) cell_fshwr2_syb_bg_pane_g1

0x72c6,	// (0x000140b9) cell_fshwr2_syb_bg_pane_t1

0x3de2,	// (0x00010bd5) main_tmo_pane

0xa0f0,	// (0x00016ee3) uni_indicator_pane_g1_ParamLimits

0xa103,	// (0x00016ef6) uni_indicator_pane_g2_ParamLimits

0xa115,	// (0x00016f08) uni_indicator_pane_g3_ParamLimits

0xa124,	// (0x00016f17) uni_indicator_pane_g4_ParamLimits

0xa124,	// (0x00016f17) uni_indicator_pane_g4

0xa138,	// (0x00016f2b) uni_indicator_pane_g5_ParamLimits

0xa138,	// (0x00016f2b) uni_indicator_pane_g5

0xa138,	// (0x00016f2b) uni_indicator_pane_g6_ParamLimits

0xa138,	// (0x00016f2b) uni_indicator_pane_g6

0xf91c,	// (0x0001c70f) uni_indicator_pane_g_ParamLimits

0xd20d,	// (0x0001a000) popup_tmo_note_window_ParamLimits

0xd20d,	// (0x0001a000) popup_tmo_note_window

0x69e4,	// (0x000137d7) fshwr2_bg_pane

0x729c,	// (0x0001408f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x729c,	// (0x0001408f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001cca8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001cca8) fshwr2_func_candi_cell_pane_g

0x672c,	// (0x0001351f) bg_popup_window_pane_cp01

0x72d5,	// (0x000140c8) bg_popup_window_pane_g1_cp01

0xed75,	// (0x0001bb68) bg_popup_window_pane_cp22_ParamLimits

0xed75,	// (0x0001bb68) bg_popup_window_pane_cp22

0xed83,	// (0x0001bb76) listscroll_tmo_link_pane_ParamLimits

0xed83,	// (0x0001bb76) listscroll_tmo_link_pane

0xedc3,	// (0x0001bbb6) popup_tmo_note_window_g1_ParamLimits

0xedc3,	// (0x0001bbb6) popup_tmo_note_window_g1

0xedd0,	// (0x0001bbc3) tmo_note_info_pane_ParamLimits

0xedd0,	// (0x0001bbc3) tmo_note_info_pane

0xedea,	// (0x0001bbdd) list_tmo_note_info_pane_g1_ParamLimits

0xedea,	// (0x0001bbdd) list_tmo_note_info_pane_g1

0xee01,	// (0x0001bbf4) list_tmo_note_info_pane_g2_ParamLimits

0xee01,	// (0x0001bbf4) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ccad) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ccad) list_tmo_note_info_pane_g

0xee1d,	// (0x0001bc10) list_tmo_note_info_text_pane_ParamLimits

0xee1d,	// (0x0001bc10) list_tmo_note_info_text_pane

0xeea2,	// (0x0001bc95) list_tmo_link_pane

0xeeaf,	// (0x0001bca2) scroll_pane_cp20

0xeebc,	// (0x0001bcaf) list_single_tmo_link_pane_ParamLimits

0xeebc,	// (0x0001bcaf) list_single_tmo_link_pane

0xeecc,	// (0x0001bcbf) list_single_tmo_link_pane_t1

0xeeda,	// (0x0001bccd) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeda,	// (0x0001bccd) list_tmo_note_info_text_pane_t1

0x7dc4,	// (0x00014bb7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7dc4,	// (0x00014bb7) aid_size_touch_scroll_bar_cp01

0x7d08,	// (0x00014afb) aid_size_touch_slider_marker

0x51b7,	// (0x00011faa) popup_settings_window_ParamLimits

0x51b7,	// (0x00011faa) popup_settings_window

0x895d,	// (0x00015750) popup_candi_list_indi_window

0x89af,	// (0x000157a2) aid_touch_navi_pane_ParamLimits

0x693d,	// (0x00013730) rs_clock_indi_pane

0x6946,	// (0x00013739) sctrl_sk_bottom_pane_ParamLimits

0x6957,	// (0x0001374a) sctrl_sk_top_pane_ParamLimits

0x6a5c,	// (0x0001384f) popup_fep_tooltip_window

0xe84d,	// (0x0001b640) aid_size_cell_widget_grid_ParamLimits

0xe8be,	// (0x0001b6b1) cell_ai5_widget_pane_g1_ParamLimits

0xe8be,	// (0x0001b6b1) cell_ai5_widget_pane_g1

0xe921,	// (0x0001b714) cell_ai5_widget_pane_g6_ParamLimits

0xe92d,	// (0x0001b720) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001cc2b) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001cc2b) cell_ai5_widget_pane_g

0xea74,	// (0x0001b867) cell_ai5_widget_pane_t10_ParamLimits

0xea74,	// (0x0001b867) cell_ai5_widget_pane_t10

0xea92,	// (0x0001b885) grid_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0001b91d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0001b91d) cell_contacts_ai5_widget_pane

0xed14,	// (0x0001bb07) popup_discreet_window_t3_ParamLimits

0xed14,	// (0x0001bb07) popup_discreet_window_t3

0x71f4,	// (0x00013fe7) popup_fshwr2_char_preview_window_ParamLimits

0x71f4,	// (0x00013fe7) popup_fshwr2_char_preview_window

0xee3b,	// (0x0001bc2e) tmo_note_info_pane_t1

0xee50,	// (0x0001bc43) tmo_note_info_pane_t2

0xee69,	// (0x0001bc5c) tmo_note_info_pane_t3

0xee7e,	// (0x0001bc71) tmo_note_info_pane_t4

0xee90,	// (0x0001bc83) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ccb2) tmo_note_info_pane_t

0xeea2,	// (0x0001bc95) list_tmo_link_pane_ParamLimits

0xeeaf,	// (0x0001bca2) scroll_pane_cp20_ParamLimits

0x5064,	// (0x00011e57) bg_popup_fep_char_preview_window_cp01

0xeef3,	// (0x0001bce6) popup_fshwr2_char_preview_window_t1

0xef01,	// (0x0001bcf4) popup_candi_list_indi_window_g1

0xef0a,	// (0x0001bcfd) bg_cell_contacts_ai5_widget_pane

0xef16,	// (0x0001bd09) cell_contacts_ai5_widget_pane_g1

0xef2b,	// (0x0001bd1e) cell_contacts_ai5_widget_pane_g2

0xef37,	// (0x0001bd2a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ccbd) cell_contacts_ai5_widget_pane_g

0xef43,	// (0x0001bd36) cell_contacts_ai5_widget_pane_t1

0x3de2,	// (0x00010bd5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefba,	// (0x0001bdad) settings_container_pane

0x85fa,	// (0x000153ed) listscroll_set_pane_copy1

0xadbe,	// (0x00017bb1) scroll_pane_cp121_copy1

0xefc6,	// (0x0001bdb9) set_content_pane_copy1

0xefce,	// (0x0001bdc1) aid_height_set_list_copy1_ParamLimits

0xefce,	// (0x0001bdc1) aid_height_set_list_copy1

0xa360,	// (0x00017153) aid_size_parent_copy1_ParamLimits

0xa360,	// (0x00017153) aid_size_parent_copy1

0xefda,	// (0x0001bdcd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefda,	// (0x0001bdcd) button_value_adjust_pane_cp6_copy1

0x8929,	// (0x0001571c) list_highlight_pane_cp2_copy1_ParamLimits

0x8929,	// (0x0001571c) list_highlight_pane_cp2_copy1

0xefee,	// (0x0001bde1) list_set_pane_copy1_ParamLimits

0xefee,	// (0x0001bde1) list_set_pane_copy1

0xef55,	// (0x0001bd48) main_pane_set_t1_copy1_ParamLimits

0xef55,	// (0x0001bd48) main_pane_set_t1_copy1

0xef8f,	// (0x0001bd82) main_pane_set_t2_copy1_ParamLimits

0xef8f,	// (0x0001bd82) main_pane_set_t2_copy1

0xf0af,	// (0x0001bea2) main_pane_set_t3_copy1

0xf0bd,	// (0x0001beb0) main_pane_set_t4_copy1

0xefae,	// (0x0001bda1) set_content_pane_g1_copy1_ParamLimits

0xefae,	// (0x0001bda1) set_content_pane_g1_copy1

0xf0cb,	// (0x0001bebe) setting_code_pane_copy1

0xf0d3,	// (0x0001bec6) setting_slider_graphic_pane_copy1

0xf0d3,	// (0x0001bec6) setting_slider_pane_copy1

0xf0d3,	// (0x0001bec6) setting_text_pane_copy1

0xf0d3,	// (0x0001bec6) setting_volume_pane_copy1

0xf0cb,	// (0x0001bebe) settings_code_pane_cp2_copy1

0xf0db,	// (0x0001bece) settings_code_pane_cp_copy1_ParamLimits

0xf0db,	// (0x0001bece) settings_code_pane_cp_copy1

0x72de,	// (0x000140d1) volume_set_pane_copy1

0xf0ef,	// (0x0001bee2) volume_set_pane_g10_copy1

0xf0fb,	// (0x0001beee) volume_set_pane_g1_copy1

0xf105,	// (0x0001bef8) volume_set_pane_g2_copy1

0xf10f,	// (0x0001bf02) volume_set_pane_g3_copy1

0xf119,	// (0x0001bf0c) volume_set_pane_g4_copy1

0xf123,	// (0x0001bf16) volume_set_pane_g5_copy1

0xf12d,	// (0x0001bf20) volume_set_pane_g6_copy1

0xf137,	// (0x0001bf2a) volume_set_pane_g7_copy1

0xf141,	// (0x0001bf34) volume_set_pane_g8_copy1

0xf14b,	// (0x0001bf3e) volume_set_pane_g9_copy1

0x3687,	// (0x0001047a) bg_set_opt_pane_cp_copy1_ParamLimits

0x3687,	// (0x0001047a) bg_set_opt_pane_cp_copy1

0x72ea,	// (0x000140dd) setting_slider_pane_t1_copy1_ParamLimits

0x72ea,	// (0x000140dd) setting_slider_pane_t1_copy1

0x7308,	// (0x000140fb) setting_slider_pane_t2_copy1_ParamLimits

0x7308,	// (0x000140fb) setting_slider_pane_t2_copy1

0x7322,	// (0x00014115) setting_slider_pane_t3_copy1_ParamLimits

0x7322,	// (0x00014115) setting_slider_pane_t3_copy1

0x733a,	// (0x0001412d) slider_set_pane_copy1_ParamLimits

0x733a,	// (0x0001412d) slider_set_pane_copy1

0x3ea9,	// (0x00010c9c) set_opt_bg_pane_g1_copy2

0x3eb1,	// (0x00010ca4) set_opt_bg_pane_g2_copy2

0xf155,	// (0x0001bf48) set_opt_bg_pane_g3_copy2

0x3ec1,	// (0x00010cb4) set_opt_bg_pane_g4_copy2

0x3ec9,	// (0x00010cbc) set_opt_bg_pane_g5_copy2

0x3ed1,	// (0x00010cc4) set_opt_bg_pane_g6_copy2

0xf15f,	// (0x0001bf52) set_opt_bg_pane_g7_copy2

0xf169,	// (0x0001bf5c) set_opt_bg_pane_g8_copy2

0xf173,	// (0x0001bf66) set_opt_bg_pane_g9_copy2

0x7350,	// (0x00014143) aid_size_touch_slider_mark_copy1_ParamLimits

0x7350,	// (0x00014143) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x0001bf70) slider_set_pane_g1_copy1

0x7364,	// (0x00014157) slider_set_pane_g2_copy1

0x6357,	// (0x0001314a) slider_set_pane_g3_copy1_ParamLimits

0x6357,	// (0x0001314a) slider_set_pane_g3_copy1

0x636b,	// (0x0001315e) slider_set_pane_g4_copy1_ParamLimits

0x636b,	// (0x0001315e) slider_set_pane_g4_copy1

0x6383,	// (0x00013176) slider_set_pane_g5_copy1_ParamLimits

0x6383,	// (0x00013176) slider_set_pane_g5_copy1

0x6357,	// (0x0001314a) slider_set_pane_g6_copy1_ParamLimits

0x6357,	// (0x0001314a) slider_set_pane_g6_copy1

0x736c,	// (0x0001415f) slider_set_pane_g7_copy1_ParamLimits

0x736c,	// (0x0001415f) slider_set_pane_g7_copy1

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x0001bf79) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x0001bf82) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x0001bf92) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x0001bfa2) slider_set_pane_cp_copy1

0xf1bf,	// (0x0001bfb2) input_focus_pane_cp1_copy1

0xf1c8,	// (0x0001bfbb) list_set_text_pane_copy1

0xf1d0,	// (0x0001bfc3) setting_text_pane_g1_copy1

0x3735,	// (0x00010528) set_text_pane_t1_copy1

0xf1bf,	// (0x0001bfb2) input_focus_pane_cp2_copy1

0xf1d0,	// (0x0001bfc3) setting_code_pane_g1_copy1

0xf1d9,	// (0x0001bfcc) setting_code_pane_t1_copy1

0x82e2,	// (0x000150d5) list_set_graphic_pane_copy1

0x35cd,	// (0x000103c0) bg_set_opt_pane_cp4_copy1

0x82f5,	// (0x000150e8) list_set_graphic_pane_g1_copy1_ParamLimits

0x82f5,	// (0x000150e8) list_set_graphic_pane_g1_copy1

0xf1e7,	// (0x0001bfda) list_set_graphic_pane_g2_copy1

0x830d,	// (0x00015100) list_set_graphic_pane_t1_copy1_ParamLimits

0x830d,	// (0x00015100) list_set_graphic_pane_t1_copy1

0xb987,	// (0x0001877a) rs_clock_indi_pane_g1

0xf1ef,	// (0x0001bfe2) rs_clock_indi_pane_t1

0xf1fd,	// (0x0001bff0) rs_indi_pane

0xf205,	// (0x0001bff8) rs_indi_pane_g1

0xf20e,	// (0x0001c001) rs_indi_pane_g2

0xf217,	// (0x0001c00a) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001ccc4) rs_indi_pane_g

0x85fa,	// (0x000153ed) bg_popup_preview_window_pane_cp03

0xf220,	// (0x0001c013) popup_fep_tooltip_window_t1

0xc842,	// (0x00019635) popup_note2_window_g2_ParamLimits

0xc842,	// (0x00019635) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001ca5d) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001ca5d) popup_note2_window_g

0xce5a,	// (0x00019c4d) bg_popup_sub_pane_cp11_ParamLimits

0xce67,	// (0x00019c5a) cell_ai3_links_pane_g1_ParamLimits

0xce7e,	// (0x00019c71) cell_ai3_links_pane_t1

0x3735,	// (0x00010528) set_text_pane_t1_copy1_ParamLimits

0x8513,	// (0x00015306) cell_graphic_popup_pane_cp2_ParamLimits

0x8513,	// (0x00015306) cell_graphic_popup_pane_cp2

0xf22e,	// (0x0001c021) cell_graphic_popup_pane_g1_cp2

0x3abd,	// (0x000108b0) cell_graphic_popup_pane_g2_cp2

0xf236,	// (0x0001c029) cell_graphic_popup_pane_g3_cp2

0xf23e,	// (0x0001c031) cell_graphic_popup_pane_t2_cp2

0x3ace,	// (0x000108c1) grid_highlight_pane_cp3_cp2

0x431d,	// (0x00011110) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3de2,	// (0x00010bd5) main_tmo_pane_ParamLimits

0xd201,	// (0x00019ff4) popup_tmo_big_image_note_window

0xe8ad,	// (0x0001b6a0) cell_ai5_widget_list_pane

0xe8b5,	// (0x0001b6a8) cell_ai5_widget_lrg_icon_pane

0xee3b,	// (0x0001bc2e) tmo_note_info_pane_t1_ParamLimits

0xee50,	// (0x0001bc43) tmo_note_info_pane_t2_ParamLimits

0xee69,	// (0x0001bc5c) tmo_note_info_pane_t3_ParamLimits

0xee7e,	// (0x0001bc71) tmo_note_info_pane_t4_ParamLimits

0xee90,	// (0x0001bc83) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ccb2) tmo_note_info_pane_t_ParamLimits

0xefba,	// (0x0001bdad) settings_container_pane_ParamLimits

0xf1b7,	// (0x0001bfaa) indicator_popup_pane_cp5

0xf1b7,	// (0x0001bfaa) indicator_popup_pane_cp6

0x82e2,	// (0x000150d5) list_set_graphic_pane_copy1_ParamLimits

0x344a,	// (0x0001023d) bg_popup_window_pane_cp23

0xf24c,	// (0x0001c03f) popup_tmo_big_image_note_window_g1

0xf258,	// (0x0001c04b) popup_tmo_big_image_note_window_t1

0xf268,	// (0x0001c05b) popup_tmo_big_image_note_window_t2

0xf278,	// (0x0001c06b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001cccb) popup_tmo_big_image_note_window_t

0xb987,	// (0x0001877a) cell_ai5_widget_lrg_icon_pane_g1

0xf288,	// (0x0001c07b) cell_ai5_widget_lrg_icon_pane_t1

0xf296,	// (0x0001c089) cell_ai5_widget_list_row_pane_ParamLimits

0xf296,	// (0x0001c089) cell_ai5_widget_list_row_pane

0xf2ae,	// (0x0001c0a1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2ae,	// (0x0001c0a1) cell_ai5_widget_list_row_pane_g1

0xf2bb,	// (0x0001c0ae) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2bb,	// (0x0001c0ae) cell_ai5_widget_list_row_pane_t1

0xf2e6,	// (0x0001c0d9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e6,	// (0x0001c0d9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ccd2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ccd2) cell_ai5_widget_list_row_pane_t

0x5064,	// (0x00011e57) main_fep_vtchi_ss_pane

0xf32e,	// (0x0001c121) popup_fep_char_pre_window

0xf336,	// (0x0001c129) popup_fep_ituss_window

0xf357,	// (0x0001c14a) popup_fep_vkbss_window

0xf383,	// (0x0001c176) grid_vkbss_keypad_pane_ParamLimits

0xf383,	// (0x0001c176) grid_vkbss_keypad_pane

0xf393,	// (0x0001c186) ituss_keypad_pane

0x738e,	// (0x00014181) aid_vkbss_key_offset_ParamLimits

0x738e,	// (0x00014181) aid_vkbss_key_offset

0x739a,	// (0x0001418d) cell_vkbss_key_pane_ParamLimits

0x739a,	// (0x0001418d) cell_vkbss_key_pane

0xf3a2,	// (0x0001c195) bg_cell_vkbss_key_g1_ParamLimits

0xf3a2,	// (0x0001c195) bg_cell_vkbss_key_g1

0xf3ae,	// (0x0001c1a1) cell_vkbss_key_3p_pane_ParamLimits

0xf3ae,	// (0x0001c1a1) cell_vkbss_key_3p_pane

0xf3c2,	// (0x0001c1b5) cell_vkbss_key_g1_ParamLimits

0xf3c2,	// (0x0001c1b5) cell_vkbss_key_g1

0xf3d6,	// (0x0001c1c9) cell_vkbss_key_t1_ParamLimits

0xf3d6,	// (0x0001c1c9) cell_vkbss_key_t1

0x73b0,	// (0x000141a3) cell_ituss_key_pane_ParamLimits

0x73b0,	// (0x000141a3) cell_ituss_key_pane

0xf401,	// (0x0001c1f4) bg_cell_ituss_key_g1_ParamLimits

0xf401,	// (0x0001c1f4) bg_cell_ituss_key_g1

0xf40d,	// (0x0001c200) cell_ituss_key_pane_g1_ParamLimits

0xf40d,	// (0x0001c200) cell_ituss_key_pane_g1

0x73c1,	// (0x000141b4) cell_ituss_key_pane_g2_ParamLimits

0x73c1,	// (0x000141b4) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ccd9) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ccd9) cell_ituss_key_pane_g

0x73ed,	// (0x000141e0) cell_ituss_key_t1_ParamLimits

0x73ed,	// (0x000141e0) cell_ituss_key_t1

0x7427,	// (0x0001421a) cell_ituss_key_t2_ParamLimits

0x7427,	// (0x0001421a) cell_ituss_key_t2

0x7458,	// (0x0001424b) cell_ituss_key_t3_ParamLimits

0x7458,	// (0x0001424b) cell_ituss_key_t3

0x7427,	// (0x0001421a) cell_ituss_key_t4_ParamLimits

0x7427,	// (0x0001421a) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001cce0) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001cce0) cell_ituss_key_t

0xf433,	// (0x0001c226) cell_vkbss_key_3p_pane_g1

0xf43b,	// (0x0001c22e) cell_vkbss_key_3p_pane_g2

0xf443,	// (0x0001c236) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001cceb) cell_vkbss_key_3p_pane_g

0x85fa,	// (0x000153ed) bg_popup_fep_char_preview_window_cp02

0xf44b,	// (0x0001c23e) popup_fep_char_pre_window_t1

0xe83a,	// (0x0001b62d) main_ai5_sk_pane

0xef0a,	// (0x0001bcfd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef16,	// (0x0001bd09) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef2b,	// (0x0001bd1e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef37,	// (0x0001bd2a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ccbd) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef43,	// (0x0001bd36) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3de2,	// (0x00010bd5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x0001c24c) main_ai5_sk_pane_g1

0x9404,	// (0x000161f7) popup_query_code_window_g1

0xf34c,	// (0x0001c13f) popup_fep_vkb_icf_pane

0xf36d,	// (0x0001c160) popup_fep_vtchi_icf_pane

0xf462,	// (0x0001c255) bg_icf_pane

0xf46e,	// (0x0001c261) list_vkb_icf_pane

0xf47d,	// (0x0001c270) bg_icf_pane_cp01

0xf490,	// (0x0001c283) vtchi_icf_list_pane

0xf4a0,	// (0x0001c293) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x0001c293) list_vkb_icf_pane_t1

0xf4b6,	// (0x0001c2a9) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x0001c2a9) vtchi_icf_list_pane_t1

0xf336,	// (0x0001c129) popup_fep_ituss_window_ParamLimits

0xf36d,	// (0x0001c160) popup_fep_vtchi_icf_pane_ParamLimits

0xf393,	// (0x0001c186) ituss_keypad_pane_ParamLimits

0x7382,	// (0x00014175) ituss_sks_pane

0xf462,	// (0x0001c255) bg_icf_pane_ParamLimits

0xf30e,	// (0x0001c101) icf_edit_indi_pane_ParamLimits

0xf30e,	// (0x0001c101) icf_edit_indi_pane

0xf46e,	// (0x0001c261) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x0001c270) bg_icf_pane_cp01_ParamLimits

0xf321,	// (0x0001c114) icf_edit_indi_pane_cp01_ParamLimits

0xf321,	// (0x0001c114) icf_edit_indi_pane_cp01

0xf498,	// (0x0001c28b) vtchi_query_pane

0xe1dd,	// (0x0001afd0) icf_edit_indi_pane_g1_ParamLimits

0xe1dd,	// (0x0001afd0) icf_edit_indi_pane_g1

0xf525,	// (0x0001c318) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001c318) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cd03) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cd03) icf_edit_indi_pane_g

0xf537,	// (0x0001c32a) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001c2c1) bg_input_focus_pane_cp042

0x3ca1,	// (0x00010a94) vtchi_button_pane

0xf4d7,	// (0x0001c2ca) vtchi_query_pane_t1

0xf4e5,	// (0x0001c2d8) vtchi_query_pane_t2

0xf4f3,	// (0x0001c2e6) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ccf2) vtchi_query_pane_t

0x5064,	// (0x00011e57) bg_button_pane_cp13

0xf501,	// (0x0001c2f4) vtchi_button_pane_g1

0x749b,	// (0x0001428e) ituss_sks_pane_g1

0x74a6,	// (0x00014299) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ccf9) ituss_sks_pane_g

0xf509,	// (0x0001c2fc) ituss_sks_pane_t1

0xf517,	// (0x0001c30a) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ccfe) ituss_sks_pane_t

0xb411,	// (0x00018204) indicator_nsta_pane_cp_g1

0xb419,	// (0x0001820c) indicator_nsta_pane_cp_g2

0xb421,	// (0x00018214) indicator_nsta_pane_cp_g3

0xb411,	// (0x00018204) indicator_nsta_pane_cp_g4

0xb419,	// (0x0001820c) indicator_nsta_pane_cp_g5

0xb421,	// (0x00018214) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001c89b) indicator_nsta_pane_cp_g

0xdf28,	// (0x0001ad1b) cell_graphic2_pane_t2_ParamLimits

0xdf28,	// (0x0001ad1b) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001cbb4) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001cbb4) cell_graphic2_pane_t

0xdf55,	// (0x0001ad48) cell_graphic2_control_pane_t1

0x8020,	// (0x00014e13) signal_pane_g3_ParamLimits

0x8020,	// (0x00014e13) signal_pane_g3

0x802f,	// (0x00014e22) signal_pane_g4_ParamLimits

0x802f,	// (0x00014e22) signal_pane_g4

0xf2f8,	// (0x0001c0eb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f8,	// (0x0001c0eb) cell_ai5_widget_list_row_pane_t3

0xf421,	// (0x0001c214) cell_ituss_key_pane_t1_ParamLimits

0xf421,	// (0x0001c214) cell_ituss_key_pane_t1

0x9044,	// (0x00015e37) form_field_data_wide_pane_vc_t2_ParamLimits

0x9044,	// (0x00015e37) form_field_data_wide_pane_vc_t2

0x9058,	// (0x00015e4b) form_field_data_wide_pane_vc_t3_ParamLimits

0x9058,	// (0x00015e4b) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001c5f7) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001c5f7) form_field_data_wide_pane_vc_t

0xb0cc,	// (0x00017ebf) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb0cc,	// (0x00017ebf) form_field_slider_wide_pane_vc_t3

0xb1a2,	// (0x00017f95) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb1a2,	// (0x00017f95) form_field_popup_wide_pane_vc_t2

0xb1b9,	// (0x00017fac) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb1b9,	// (0x00017fac) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001c88a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001c88a) form_field_popup_wide_pane_vc_t

0x71a4,	// (0x00013f97) aid_fshwr2_btn_pane_ParamLimits

0x71b0,	// (0x00013fa3) aid_fshwr2_syb_pane_ParamLimits

0x71b0,	// (0x00013fa3) aid_fshwr2_txt_pane_ParamLimits

0x69e4,	// (0x000137d7) fshwr2_bg_pane_ParamLimits

0x71bc,	// (0x00013faf) fshwr2_func_candi_pane_ParamLimits

0x71cf,	// (0x00013fc2) fshwr2_hwr_syb_pane_ParamLimits

0x71dd,	// (0x00013fd0) fshwr2_icf_pane_ParamLimits

0xb040,	// (0x00017e33) list_double_graphic_pane_vc_g4_ParamLimits

0xb040,	// (0x00017e33) list_double_graphic_pane_vc_g4

0x73e1,	// (0x000141d4) cell_ituss_key_pane_g3_ParamLimits

0x73e1,	// (0x000141d4) cell_ituss_key_pane_g3

0x7489,	// (0x0001427c) cell_ituss_key_t5_ParamLimits

0x7489,	// (0x0001427c) cell_ituss_key_t5

0xf357,	// (0x0001c14a) popup_fep_vkbss_window_ParamLimits

0xe844,	// (0x0001b637) aid_cell_ai5_quarter

0xf537,	// (0x0001c32a) icf_edit_indi_pane_t1_ParamLimits

0x3905,	// (0x000106f8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3905,	// (0x000106f8) aid_tch_indicator_popup_pane_cp2

0x3918,	// (0x0001070b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3918,	// (0x0001070b) aid_tch_query_popup_data_pane_cp2

0x93ac,	// (0x0001619f) aid_tch_query_popup_pane_ParamLimits

0x93ac,	// (0x0001619f) aid_tch_query_popup_pane

0x93ac,	// (0x0001619f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x93ac,	// (0x0001619f) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000362ab };

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
0x8bfd,	// (0x0003eea8) Screen

0x8c09,	// (0x0003eeb4) application_window_ParamLimits

0x8c09,	// (0x0003eeb4) application_window

0xb40d,	// (0x000416b8) screen_g1

0x81be,	// (0x0003e469) area_bottom_pane_ParamLimits

0x81be,	// (0x0003e469) area_bottom_pane

0x13dd,	// (0x00037688) area_top_pane_ParamLimits

0x13dd,	// (0x00037688) area_top_pane

0x1471,	// (0x0003771c) main_pane_ParamLimits

0x1471,	// (0x0003771c) main_pane

0xb417,	// (0x000416c2) misc_graphics

0x99a7,	// (0x0003fc52) battery_pane_ParamLimits

0x99a7,	// (0x0003fc52) battery_pane

0xd5db,	// (0x00043886) bg_status_flat_pane_g8

0xd5e3,	// (0x0004388e) bg_status_flat_pane_g9

0xcd02,	// (0x00042fad) context_pane_ParamLimits

0xcd02,	// (0x00042fad) context_pane

0x9b12,	// (0x0003fdbd) navi_pane_ParamLimits

0x9b12,	// (0x0003fdbd) navi_pane

0x9b89,	// (0x0003fe34) signal_pane_ParamLimits

0x9b89,	// (0x0003fe34) signal_pane

0x0008,

0xf88a,	// (0x00045b35) bg_status_flat_pane_g

0x9c19,	// (0x0003fec4) status_pane_g1_ParamLimits

0x9c19,	// (0x0003fec4) status_pane_g1

0x9c2f,	// (0x0003feda) status_pane_g2_ParamLimits

0x9c2f,	// (0x0003feda) status_pane_g2

0xcd67,	// (0x00043012) status_pane_g3_ParamLimits

0xcd67,	// (0x00043012) status_pane_g3

0x0004,

0xf7bd,	// (0x00045a68) status_pane_g_ParamLimits

0xf7bd,	// (0x00045a68) status_pane_g

0x9c3b,	// (0x0003fee6) title_pane_ParamLimits

0x9c3b,	// (0x0003fee6) title_pane

0x9c9c,	// (0x0003ff47) uni_indicator_pane_ParamLimits

0x9c9c,	// (0x0003ff47) uni_indicator_pane

0xcb3b,	// (0x00042de6) bg_list_pane_ParamLimits

0xcb3b,	// (0x00042de6) bg_list_pane

0x8534,	// (0x0003e7df) find_pane

0x9295,	// (0x0003f540) listscroll_app_pane_ParamLimits

0x9295,	// (0x0003f540) listscroll_app_pane

0xcb5b,	// (0x00042e06) listscroll_form_pane

0x853c,	// (0x0003e7e7) listscroll_gen_pane_ParamLimits

0x853c,	// (0x0003e7e7) listscroll_gen_pane

0xcb5b,	// (0x00042e06) listscroll_set_pane

0xd94a,	// (0x00043bf5) main_idle_act_pane

0xc929,	// (0x00042bd4) main_idle_trad_pane

0xc929,	// (0x00042bd4) main_list_empty_pane

0xc039,	// (0x000422e4) main_midp_pane

0xcb75,	// (0x00042e20) main_pane_g1_ParamLimits

0xcb75,	// (0x00042e20) main_pane_g1

0x92a1,	// (0x0003f54c) popup_ai_message_window_ParamLimits

0x92a1,	// (0x0003f54c) popup_ai_message_window

0x9332,	// (0x0003f5dd) popup_fep_china_uni_window_ParamLimits

0x9332,	// (0x0003f5dd) popup_fep_china_uni_window

0xcba7,	// (0x00042e52) popup_fep_japan_candidate_window_ParamLimits

0xcba7,	// (0x00042e52) popup_fep_japan_candidate_window

0xcbc5,	// (0x00042e70) popup_fep_japan_predictive_window_ParamLimits

0xcbc5,	// (0x00042e70) popup_fep_japan_predictive_window

0x938c,	// (0x0003f637) popup_find_window

0x93a9,	// (0x0003f654) popup_grid_graphic_window_ParamLimits

0x93a9,	// (0x0003f654) popup_grid_graphic_window

0xcbf5,	// (0x00042ea0) popup_large_graphic_colour_window

0x943b,	// (0x0003f6e6) popup_menu_window_ParamLimits

0x943b,	// (0x0003f6e6) popup_menu_window

0x9607,	// (0x0003f8b2) popup_note_image_window

0x95cd,	// (0x0003f878) popup_note_wait_window_ParamLimits

0x95cd,	// (0x0003f878) popup_note_wait_window

0x961f,	// (0x0003f8ca) popup_note_window_ParamLimits

0x961f,	// (0x0003f8ca) popup_note_window

0x96c5,	// (0x0003f970) popup_query_code_window_ParamLimits

0x96c5,	// (0x0003f970) popup_query_code_window

0xcc1b,	// (0x00042ec6) popup_query_data_code_window_ParamLimits

0xcc1b,	// (0x00042ec6) popup_query_data_code_window

0x96ff,	// (0x0003f9aa) popup_query_data_window_ParamLimits

0x96ff,	// (0x0003f9aa) popup_query_data_window

0x9775,	// (0x0003fa20) popup_query_sat_info_window_ParamLimits

0x9775,	// (0x0003fa20) popup_query_sat_info_window

0x980c,	// (0x0003fab7) popup_snote_single_graphic_window_ParamLimits

0x980c,	// (0x0003fab7) popup_snote_single_graphic_window

0x980c,	// (0x0003fab7) popup_snote_single_text_window_ParamLimits

0x980c,	// (0x0003fab7) popup_snote_single_text_window

0xcc32,	// (0x00042edd) popup_sub_window_general

0xcc78,	// (0x00042f23) popup_window_general_ParamLimits

0xcc78,	// (0x00042f23) popup_window_general

0xcc8d,	// (0x00042f38) power_save_pane

0x83d3,	// (0x0003e67e) control_pane_g1_ParamLimits

0x83d3,	// (0x0003e67e) control_pane_g1

0x83fc,	// (0x0003e6a7) control_pane_g2_ParamLimits

0x83fc,	// (0x0003e6a7) control_pane_g2

0xcb1d,	// (0x00042dc8) control_pane_g3_ParamLimits

0xcb1d,	// (0x00042dc8) control_pane_g3

0x0007,

0xf7a5,	// (0x00045a50) control_pane_g_ParamLimits

0xf7a5,	// (0x00045a50) control_pane_g

0x8437,	// (0x0003e6e2) control_pane_t1_ParamLimits

0x8437,	// (0x0003e6e2) control_pane_t1

0x8495,	// (0x0003e740) control_pane_t2_ParamLimits

0x8495,	// (0x0003e740) control_pane_t2

0x0002,

0xf7b6,	// (0x00045a61) control_pane_t_ParamLimits

0xf7b6,	// (0x00045a61) control_pane_t

0xca3e,	// (0x00042ce9) navi_navi_volume_pane_cp1

0xca47,	// (0x00042cf2) status_small_icon_pane

0xca4f,	// (0x00042cfa) status_small_pane_g1_ParamLimits

0xca4f,	// (0x00042cfa) status_small_pane_g1

0xca83,	// (0x00042d2e) status_small_pane_g2_ParamLimits

0xca83,	// (0x00042d2e) status_small_pane_g2

0xca8f,	// (0x00042d3a) status_small_pane_g3_ParamLimits

0xca8f,	// (0x00042d3a) status_small_pane_g3

0xca9b,	// (0x00042d46) status_small_pane_g4_ParamLimits

0xca9b,	// (0x00042d46) status_small_pane_g4

0xcaa7,	// (0x00042d52) status_small_pane_g5_ParamLimits

0xcaa7,	// (0x00042d52) status_small_pane_g5

0xcab6,	// (0x00042d61) status_small_pane_g6_ParamLimits

0xcab6,	// (0x00042d61) status_small_pane_g6

0x0007,

0xf794,	// (0x00045a3f) status_small_pane_g_ParamLimits

0xf794,	// (0x00045a3f) status_small_pane_g

0xcae6,	// (0x00042d91) status_small_pane_t1

0xcb09,	// (0x00042db4) status_small_wait_pane_ParamLimits

0xcb09,	// (0x00042db4) status_small_wait_pane

0x90dd,	// (0x0003f388) aid_levels_signal_ParamLimits

0x90dd,	// (0x0003f388) aid_levels_signal

0x90f5,	// (0x0003f3a0) signal_pane_g1_ParamLimits

0x90f5,	// (0x0003f3a0) signal_pane_g1

0x9110,	// (0x0003f3bb) signal_pane_g2_ParamLimits

0x9110,	// (0x0003f3bb) signal_pane_g2

0x0001,

0xf729,	// (0x000459d4) signal_pane_g_ParamLimits

0xf729,	// (0x000459d4) signal_pane_g

0xc46d,	// (0x00042718) context_pane_g1

0x8c19,	// (0x0003eec4) title_pane_g1

0x8c4e,	// (0x0003eef9) title_pane_t1

0xb42d,	// (0x000416d8) title_pane_t2

0xb453,	// (0x000416fe) title_pane_t3

0x0002,

0xf573,	// (0x0004581e) title_pane_t

0x9cc4,	// (0x0003ff6f) aid_levels_battery_ParamLimits

0x9cc4,	// (0x0003ff6f) aid_levels_battery

0x9ce0,	// (0x0003ff8b) battery_pane_g1_ParamLimits

0x9ce0,	// (0x0003ff8b) battery_pane_g1

0x9cfd,	// (0x0003ffa8) battery_pane_g2_ParamLimits

0x9cfd,	// (0x0003ffa8) battery_pane_g2

0x0001,

0xf7c8,	// (0x00045a73) battery_pane_g_ParamLimits

0xf7c8,	// (0x00045a73) battery_pane_g

0x9f42,	// (0x000401ed) uni_indicator_pane_g1

0x9f57,	// (0x00040202) uni_indicator_pane_g2

0x9f6c,	// (0x00040217) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00045bd3) uni_indicator_pane_g

0xc799,	// (0x00042a44) navi_icon_pane_ParamLimits

0xc799,	// (0x00042a44) navi_icon_pane

0xc6e0,	// (0x0004298b) navi_midp_pane

0xc7b5,	// (0x00042a60) navi_navi_pane

0xc7bf,	// (0x00042a6a) navi_text_pane_ParamLimits

0xc7bf,	// (0x00042a6a) navi_text_pane

0xb40d,	// (0x000416b8) status_small_wait_pane_g1

0xb934,	// (0x00041bdf) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00045bce) status_small_wait_pane_g

0x9ee1,	// (0x0004018c) navi_navi_icon_text_pane

0x9ee9,	// (0x00040194) navi_navi_pane_g1_ParamLimits

0x9ee9,	// (0x00040194) navi_navi_pane_g1

0x9efb,	// (0x000401a6) navi_navi_pane_g2_ParamLimits

0x9efb,	// (0x000401a6) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00045ba6) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00045ba6) navi_navi_pane_g

0xdb7c,	// (0x00043e27) navi_navi_tabs_pane

0x9f0d,	// (0x000401b8) navi_navi_text_pane

0x9ee1,	// (0x0004018c) navi_navi_volume_pane

0x9ecf,	// (0x0004017a) navi_text_pane_t1

0x9ec3,	// (0x0004016e) navi_icon_pane_g1

0xdabd,	// (0x00043d68) navi_navi_text_pane_t1

0x870c,	// (0x0003e9b7) navi_navi_volume_pane_g1

0x8714,	// (0x0003e9bf) volume_small_pane

0x9e1f,	// (0x000400ca) navi_navi_icon_text_pane_g1

0x9e27,	// (0x000400d2) navi_navi_icon_text_pane_t1

0xc7b5,	// (0x00042a60) navi_tabs_2_long_pane

0xc7b5,	// (0x00042a60) navi_tabs_2_pane

0xc7b5,	// (0x00042a60) navi_tabs_3_long_pane

0xc7b5,	// (0x00042a60) navi_tabs_3_pane

0xc7b5,	// (0x00042a60) navi_tabs_4_pane

0x86ec,	// (0x0003e997) tabs_2_active_pane_ParamLimits

0x86ec,	// (0x0003e997) tabs_2_active_pane

0x86fc,	// (0x0003e9a7) tabs_2_passive_pane_ParamLimits

0x86fc,	// (0x0003e9a7) tabs_2_passive_pane

0x86ba,	// (0x0003e965) tabs_3_active_pane_ParamLimits

0x86ba,	// (0x0003e965) tabs_3_active_pane

0x86ca,	// (0x0003e975) tabs_3_passive_pane_ParamLimits

0x86ca,	// (0x0003e975) tabs_3_passive_pane

0x86db,	// (0x0003e986) tabs_3_passive_pane_cp_ParamLimits

0x86db,	// (0x0003e986) tabs_3_passive_pane_cp

0x8676,	// (0x0003e921) tabs_4_active_pane_ParamLimits

0x8676,	// (0x0003e921) tabs_4_active_pane

0x8687,	// (0x0003e932) tabs_4_passive_pane_ParamLimits

0x8687,	// (0x0003e932) tabs_4_passive_pane

0x8698,	// (0x0003e943) tabs_4_passive_pane_cp_ParamLimits

0x8698,	// (0x0003e943) tabs_4_passive_pane_cp

0x86a9,	// (0x0003e954) tabs_4_passive_pane_cp2_ParamLimits

0x86a9,	// (0x0003e954) tabs_4_passive_pane_cp2

0x8656,	// (0x0003e901) tabs_2_long_active_pane_ParamLimits

0x8656,	// (0x0003e901) tabs_2_long_active_pane

0x8666,	// (0x0003e911) tabs_2_long_passive_pane_ParamLimits

0x8666,	// (0x0003e911) tabs_2_long_passive_pane

0x8621,	// (0x0003e8cc) tabs_3_long_active_pane_ParamLimits

0x8621,	// (0x0003e8cc) tabs_3_long_active_pane

0x8632,	// (0x0003e8dd) tabs_3_long_passive_pane_ParamLimits

0x8632,	// (0x0003e8dd) tabs_3_long_passive_pane

0x8645,	// (0x0003e8f0) tabs_3_long_passive_pane_cp_ParamLimits

0x8645,	// (0x0003e8f0) tabs_3_long_passive_pane_cp

0x253b,	// (0x000387e6) volume_small_pane_g1

0x85d0,	// (0x0003e87b) volume_small_pane_g2

0x85d9,	// (0x0003e884) volume_small_pane_g3

0x85e2,	// (0x0003e88d) volume_small_pane_g4

0x85eb,	// (0x0003e896) volume_small_pane_g5

0x85f4,	// (0x0003e89f) volume_small_pane_g6

0x85fd,	// (0x0003e8a8) volume_small_pane_g7

0x8606,	// (0x0003e8b1) volume_small_pane_g8

0x860f,	// (0x0003e8ba) volume_small_pane_g9

0x8618,	// (0x0003e8c3) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00045b72) volume_small_pane_g

0xb465,	// (0x00041710) bg_active_tab_pane_cp2_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp2

0x8cda,	// (0x0003ef85) tabs_3_active_pane_g1

0x8ce2,	// (0x0003ef8d) tabs_3_active_pane_t1

0xb465,	// (0x00041710) bg_passive_tab_pane_cp2_ParamLimits

0xb465,	// (0x00041710) bg_passive_tab_pane_cp2

0x8cda,	// (0x0003ef85) tabs_3_passive_pane_g1

0x8ce2,	// (0x0003ef8d) tabs_3_passive_pane_t1

0xb465,	// (0x00041710) bg_active_tab_pane_cp3_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp3

0x8cf4,	// (0x0003ef9f) tabs_4_active_pane_g1

0x8cfc,	// (0x0003efa7) tabs_4_active_pane_t1

0xb465,	// (0x00041710) bg_passive_tab_pane_cp3_ParamLimits

0xb465,	// (0x00041710) bg_passive_tab_pane_cp3

0x8cf4,	// (0x0003ef9f) tabs_4_1_passive_pane_g1

0x8cfc,	// (0x0003efa7) tabs_4_1_passive_pane_t1

0xc039,	// (0x000422e4) list_highlight_pane_cp2

0x9ff9,	// (0x000402a4) list_set_pane_ParamLimits

0x9ff9,	// (0x000402a4) list_set_pane

0xa093,	// (0x0004033e) main_pane_set_t1_ParamLimits

0xa093,	// (0x0004033e) main_pane_set_t1

0xa0b3,	// (0x0004035e) main_pane_set_t2_ParamLimits

0xa0b3,	// (0x0004035e) main_pane_set_t2

0xa0c7,	// (0x00040372) main_pane_set_t3_ParamLimits

0xa0c7,	// (0x00040372) main_pane_set_t3

0xa0d9,	// (0x00040384) main_pane_set_t4_ParamLimits

0xa0d9,	// (0x00040384) main_pane_set_t4

0x0003,

0xf98d,	// (0x00045c38) main_pane_set_t_ParamLimits

0xf98d,	// (0x00045c38) main_pane_set_t

0xa0eb,	// (0x00040396) setting_code_pane

0xa0f3,	// (0x0004039e) setting_slider_graphic_pane

0xa0f3,	// (0x0004039e) setting_slider_pane

0xa0f3,	// (0x0004039e) setting_text_pane

0xa0f3,	// (0x0004039e) setting_volume_pane

0x1768,	// (0x00037a13) volume_set_pane

0xb473,	// (0x0004171e) bg_set_opt_pane_cp

0x1770,	// (0x00037a1b) setting_slider_pane_t1

0x1789,	// (0x00037a34) setting_slider_pane_t2

0x17a2,	// (0x00037a4d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00045825) setting_slider_pane_t

0x17b9,	// (0x00037a64) slider_set_pane

0xb417,	// (0x000416c2) bg_set_opt_pane_cp2

0xb481,	// (0x0004172c) setting_slider_graphic_pane_g1

0x17cf,	// (0x00037a7a) setting_slider_graphic_pane_t1

0x17de,	// (0x00037a89) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004582c) setting_slider_graphic_pane_t

0x17ed,	// (0x00037a98) slider_set_pane_cp

0xb417,	// (0x000416c2) input_focus_pane_cp1

0xdfc5,	// (0x00044270) list_set_text_pane

0xb40d,	// (0x000416b8) setting_text_pane_g1

0xb417,	// (0x000416c2) input_focus_pane_cp2

0xb40d,	// (0x000416b8) setting_code_pane_g1

0xb48a,	// (0x00041735) setting_code_pane_t1

0x0491,	// (0x0003673c) set_text_pane_t1_ParamLimits

0x0491,	// (0x0003673c) set_text_pane_t1

0xbf49,	// (0x000421f4) set_opt_bg_pane_g1

0xbf51,	// (0x000421fc) set_opt_bg_pane_g2

0xdfa5,	// (0x00044250) set_opt_bg_pane_g3

0xbf61,	// (0x0004220c) set_opt_bg_pane_g4

0xbf69,	// (0x00042214) set_opt_bg_pane_g5

0xbf71,	// (0x0004221c) set_opt_bg_pane_g6

0xdfad,	// (0x00044258) set_opt_bg_pane_g7

0xdfb5,	// (0x00044260) set_opt_bg_pane_g8

0xdfbd,	// (0x00044268) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x00045c25) set_opt_bg_pane_g

0xdf98,	// (0x00044243) slider_set_pane_g1

0x2709,	// (0x000389b4) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00045c16) slider_set_pane_g

0x26a5,	// (0x00038950) volume_set_pane_g1

0x26ad,	// (0x00038958) volume_set_pane_g2

0x26b5,	// (0x00038960) volume_set_pane_g3

0x26bd,	// (0x00038968) volume_set_pane_g4

0x26c5,	// (0x00038970) volume_set_pane_g5

0x26cd,	// (0x00038978) volume_set_pane_g6

0x26d5,	// (0x00038980) volume_set_pane_g7

0x26dd,	// (0x00038988) volume_set_pane_g8

0x26e5,	// (0x00038990) volume_set_pane_g9

0x26ed,	// (0x00038998) volume_set_pane_g10

0x0009,

0xf943,	// (0x00045bee) volume_set_pane_g

0x8d0e,	// (0x0003efb9) indicator_pane_ParamLimits

0x8d0e,	// (0x0003efb9) indicator_pane

0x8d36,	// (0x0003efe1) main_idle_pane_g2_ParamLimits

0x8d36,	// (0x0003efe1) main_idle_pane_g2

0x8d6e,	// (0x0003f019) main_pane_idle_g1_ParamLimits

0x8d6e,	// (0x0003f019) main_pane_idle_g1

0xb498,	// (0x00041743) popup_clock_digital_analogue_window_ParamLimits

0xb498,	// (0x00041743) popup_clock_digital_analogue_window

0x8d95,	// (0x0003f040) soft_indicator_pane_ParamLimits

0x8d95,	// (0x0003f040) soft_indicator_pane

0x8daf,	// (0x0003f05a) wallpaper_pane_ParamLimits

0x8daf,	// (0x0003f05a) wallpaper_pane

0xb40d,	// (0x000416b8) wallpaper_pane_g1

0x8dc1,	// (0x0003f06c) indicator_pane_g1_ParamLimits

0x8dc1,	// (0x0003f06c) indicator_pane_g1

0xe118,	// (0x000443c3) navi_navi_icon_text_pane_srt_g1

0xb4c6,	// (0x00041771) soft_indicator_pane_t1

0xb4e0,	// (0x0004178b) aid_ps_area_pane

0x8dda,	// (0x0003f085) aid_ps_clock_pane

0xb4f1,	// (0x0004179c) aid_ps_indicator_pane

0xb4fd,	// (0x000417a8) indicator_ps_pane_ParamLimits

0xb4fd,	// (0x000417a8) indicator_ps_pane

0xb50c,	// (0x000417b7) power_save_pane_g1_ParamLimits

0xb50c,	// (0x000417b7) power_save_pane_g1

0xb518,	// (0x000417c3) power_save_pane_g2_ParamLimits

0xb518,	// (0x000417c3) power_save_pane_g2

0x12d1,	// (0x0003757c) aid_navinavi_width_pane

0xb4e0,	// (0x0004178b) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00045831) power_save_pane_g_ParamLimits

0xf586,	// (0x00045831) power_save_pane_g

0xb526,	// (0x000417d1) power_save_pane_t1_ParamLimits

0xb526,	// (0x000417d1) power_save_pane_t1

0x8dda,	// (0x0003f085) aid_ps_clock_pane_ParamLimits

0xb4f1,	// (0x0004179c) aid_ps_indicator_pane_ParamLimits

0xb538,	// (0x000417e3) power_save_pane_t4_ParamLimits

0xb538,	// (0x000417e3) power_save_pane_t4

0x0001,

0xf58b,	// (0x00045836) power_save_pane_t_ParamLimits

0xf58b,	// (0x00045836) power_save_pane_t

0xb562,	// (0x0004180d) power_save_t3_ParamLimits

0xb562,	// (0x0004180d) power_save_t3

0xb54d,	// (0x000417f8) power_save_t2_ParamLimits

0xb54d,	// (0x000417f8) power_save_t2

0xb577,	// (0x00041822) indicator_ps_pane_g1

0x8de8,	// (0x0003f093) ai_gene_pane_ParamLimits

0x8de8,	// (0x0003f093) ai_gene_pane

0x8dff,	// (0x0003f0aa) ai_links_pane_ParamLimits

0x8dff,	// (0x0003f0aa) ai_links_pane

0x8e17,	// (0x0003f0c2) indicator_pane_cp1_ParamLimits

0x8e17,	// (0x0003f0c2) indicator_pane_cp1

0x8e26,	// (0x0003f0d1) main_pane_idle_g1_cp_ParamLimits

0x8e26,	// (0x0003f0d1) main_pane_idle_g1_cp

0xb580,	// (0x0004182b) popup_ai_links_title_window

0x8e3e,	// (0x0003f0e9) soft_indicator_pane_cp1_ParamLimits

0x8e3e,	// (0x0003f0e9) soft_indicator_pane_cp1

0xddec,	// (0x00044097) ai_links_pane_g1

0xddf5,	// (0x000440a0) grid_ai_links_pane

0x9f39,	// (0x000401e4) ai_gene_pane_1

0xddda,	// (0x00044085) ai_gene_pane_2

0xdde3,	// (0x0004408e) list_highlight_pane_cp4

0x9f15,	// (0x000401c0) cell_ai_link_pane_ParamLimits

0x9f15,	// (0x000401c0) cell_ai_link_pane

0xddd2,	// (0x0004407d) cell_ai_link_pane_g1

0xb934,	// (0x00041bdf) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00045bc9) cell_ai_link_pane_g

0xb417,	// (0x000416c2) grid_highlight_cp2

0xb417,	// (0x000416c2) bg_popup_sub_pane_cp1

0xb597,	// (0x00041842) popup_ai_links_title_window_t1

0xdd20,	// (0x00043fcb) ai_gene_pane_1_g1_ParamLimits

0xdd20,	// (0x00043fcb) ai_gene_pane_1_g1

0xdd2c,	// (0x00043fd7) ai_gene_pane_1_g2_ParamLimits

0xdd2c,	// (0x00043fd7) ai_gene_pane_1_g2

0x0001,

0x0003,	// (0x000362ae) ai_gene_pane_1_g_ParamLimits

0x0003,	// (0x000362ae) ai_gene_pane_1_g

0xdd39,	// (0x00043fe4) ai_gene_pane_1_t1_ParamLimits

0xdd39,	// (0x00043fe4) ai_gene_pane_1_t1

0xdd6d,	// (0x00044018) grid_ai_soft_ind_pane

0xdd0b,	// (0x00043fb6) ai_gene_pane_2_t1_ParamLimits

0xdd0b,	// (0x00043fb6) ai_gene_pane_2_t1

0x8e52,	// (0x0003f0fd) main_pane_empty_t1_ParamLimits

0x8e52,	// (0x0003f0fd) main_pane_empty_t1

0x8e6a,	// (0x0003f115) main_pane_empty_t2_ParamLimits

0x8e6a,	// (0x0003f115) main_pane_empty_t2

0x8e7f,	// (0x0003f12a) main_pane_empty_t3_ParamLimits

0x8e7f,	// (0x0003f12a) main_pane_empty_t3

0x8e91,	// (0x0003f13c) main_pane_empty_t4_ParamLimits

0x8e91,	// (0x0003f13c) main_pane_empty_t4

0x8ea3,	// (0x0003f14e) main_pane_empty_t5_ParamLimits

0x8ea3,	// (0x0003f14e) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004583b) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004583b) main_pane_empty_t

0xbf9a,	// (0x00042245) bg_popup_window_pane_ParamLimits

0xbf9a,	// (0x00042245) bg_popup_window_pane

0xdacb,	// (0x00043d76) find_popup_pane_cp2_ParamLimits

0xdacb,	// (0x00043d76) find_popup_pane_cp2

0xdad7,	// (0x00043d82) heading_pane_ParamLimits

0xdad7,	// (0x00043d82) heading_pane

0xb417,	// (0x000416c2) bg_popup_sub_pane

0x9e44,	// (0x000400ef) bg_popup_window_pane_g1_ParamLimits

0x9e44,	// (0x000400ef) bg_popup_window_pane_g1

0x9e53,	// (0x000400fe) bg_popup_window_pane_g2_ParamLimits

0x9e53,	// (0x000400fe) bg_popup_window_pane_g2

0x9e5f,	// (0x0004010a) bg_popup_window_pane_g3_ParamLimits

0x9e5f,	// (0x0004010a) bg_popup_window_pane_g3

0x9e6b,	// (0x00040116) bg_popup_window_pane_g4_ParamLimits

0x9e6b,	// (0x00040116) bg_popup_window_pane_g4

0x9e7a,	// (0x00040125) bg_popup_window_pane_g5_ParamLimits

0x9e7a,	// (0x00040125) bg_popup_window_pane_g5

0x9e8a,	// (0x00040135) bg_popup_window_pane_g6_ParamLimits

0x9e8a,	// (0x00040135) bg_popup_window_pane_g6

0x9e96,	// (0x00040141) bg_popup_window_pane_g7_ParamLimits

0x9e96,	// (0x00040141) bg_popup_window_pane_g7

0x9ea5,	// (0x00040150) bg_popup_window_pane_g8_ParamLimits

0x9ea5,	// (0x00040150) bg_popup_window_pane_g8

0x9eb4,	// (0x0004015f) bg_popup_window_pane_g9_ParamLimits

0x9eb4,	// (0x0004015f) bg_popup_window_pane_g9

0xdab1,	// (0x00043d5c) bg_popup_window_pane_g10_ParamLimits

0xdab1,	// (0x00043d5c) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00045b91) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00045b91) bg_popup_window_pane_g

0xda68,	// (0x00043d13) bg_popup_heading_pane_ParamLimits

0xda68,	// (0x00043d13) bg_popup_heading_pane

0x2847,	// (0x00038af2) tabs_4_passive_pane_cp_srt_ParamLimits

0x2847,	// (0x00038af2) tabs_4_passive_pane_cp_srt

0x2859,	// (0x00038b04) tabs_4_passive_pane_srt_ParamLimits

0xda7c,	// (0x00043d27) heading_pane_g2

0x2859,	// (0x00038b04) tabs_4_passive_pane_srt

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp3_srt

0xda84,	// (0x00043d2f) heading_pane_t1_ParamLimits

0xda84,	// (0x00043d2f) heading_pane_t1

0xda9b,	// (0x00043d46) heading_pane_t2_ParamLimits

0xda9b,	// (0x00043d46) heading_pane_t2

0x0001,

0xf8e1,	// (0x00045b8c) heading_pane_t_ParamLimits

0xf8e1,	// (0x00045b8c) heading_pane_t

0xd5a3,	// (0x0004384e) bg_popup_heading_pane_g1

0xd634,	// (0x000438df) bg_popup_heading_pane_g2

0xd63e,	// (0x000438e9) bg_popup_heading_pane_g3

0xd648,	// (0x000438f3) bg_popup_heading_pane_g4

0xd652,	// (0x000438fd) bg_popup_heading_pane_g5

0xd65c,	// (0x00043907) bg_popup_heading_pane_g6

0xd664,	// (0x0004390f) bg_popup_heading_pane_g7

0xd66c,	// (0x00043917) bg_popup_heading_pane_g8

0xd676,	// (0x00043921) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00045b48) bg_popup_heading_pane_g

0xce69,	// (0x00043114) bg_popup_sub_pane_g1

0xce71,	// (0x0004311c) bg_popup_sub_pane_g2

0xce79,	// (0x00043124) bg_popup_sub_pane_g3

0xce81,	// (0x0004312c) bg_popup_sub_pane_g4

0xce89,	// (0x00043134) bg_popup_sub_pane_g5

0xce91,	// (0x0004313c) bg_popup_sub_pane_g6

0xce99,	// (0x00043144) bg_popup_sub_pane_g7

0xcea1,	// (0x0004314c) bg_popup_sub_pane_g8

0xcea9,	// (0x00043154) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00045b22) bg_popup_sub_pane_g

0xb465,	// (0x00041710) bg_popup_window_pane_cp5_ParamLimits

0xb465,	// (0x00041710) bg_popup_window_pane_cp5

0xb7ba,	// (0x00041a65) popup_note_window_g1_ParamLimits

0xb7ba,	// (0x00041a65) popup_note_window_g1

0xb7c6,	// (0x00041a71) popup_note_window_t1_ParamLimits

0xb7c6,	// (0x00041a71) popup_note_window_t1

0xb7d8,	// (0x00041a83) popup_note_window_t2_ParamLimits

0xb7d8,	// (0x00041a83) popup_note_window_t2

0xb7ea,	// (0x00041a95) popup_note_window_t3_ParamLimits

0xb7ea,	// (0x00041a95) popup_note_window_t3

0xb7fc,	// (0x00041aa7) popup_note_window_t4_ParamLimits

0xb7fc,	// (0x00041aa7) popup_note_window_t4

0xb824,	// (0x00041acf) popup_note_window_t5_ParamLimits

0xb824,	// (0x00041acf) popup_note_window_t5

0x0004,

0xf59b,	// (0x00045846) popup_note_window_t_ParamLimits

0xf59b,	// (0x00045846) popup_note_window_t

0xb848,	// (0x00041af3) bg_popup_window_pane_cp6_ParamLimits

0xb848,	// (0x00041af3) bg_popup_window_pane_cp6

0xd517,	// (0x000437c2) popup_note_image_window_g1_ParamLimits

0xd517,	// (0x000437c2) popup_note_image_window_g1

0xd523,	// (0x000437ce) popup_note_image_window_g2_ParamLimits

0xd523,	// (0x000437ce) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00045b16) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00045b16) popup_note_image_window_g

0xd53c,	// (0x000437e7) popup_note_image_window_t1_ParamLimits

0xd53c,	// (0x000437e7) popup_note_image_window_t1

0xd555,	// (0x00043800) popup_note_image_window_t2_ParamLimits

0xd555,	// (0x00043800) popup_note_image_window_t2

0xd56e,	// (0x00043819) popup_note_image_window_t3_ParamLimits

0xd56e,	// (0x00043819) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00045b1b) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00045b1b) popup_note_image_window_t

0xd3f4,	// (0x0004369f) bg_popup_window_pane_cp7_ParamLimits

0xd3f4,	// (0x0004369f) bg_popup_window_pane_cp7

0xd424,	// (0x000436cf) popup_note_wait_window_g1_ParamLimits

0xd424,	// (0x000436cf) popup_note_wait_window_g1

0xd430,	// (0x000436db) popup_note_wait_window_g2_ParamLimits

0xd430,	// (0x000436db) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00045b04) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00045b04) popup_note_wait_window_g

0xd448,	// (0x000436f3) popup_note_wait_window_t1_ParamLimits

0xd448,	// (0x000436f3) popup_note_wait_window_t1

0xd46f,	// (0x0004371a) popup_note_wait_window_t2_ParamLimits

0xd46f,	// (0x0004371a) popup_note_wait_window_t2

0xd48c,	// (0x00043737) popup_note_wait_window_t3_ParamLimits

0xd48c,	// (0x00043737) popup_note_wait_window_t3

0xd49f,	// (0x0004374a) popup_note_wait_window_t4_ParamLimits

0xd49f,	// (0x0004374a) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00045b0b) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00045b0b) popup_note_wait_window_t

0xd4c4,	// (0x0004376f) wait_bar_pane_ParamLimits

0xd4c4,	// (0x0004376f) wait_bar_pane

0xb417,	// (0x000416c2) wait_anim_pane

0xb417,	// (0x000416c2) wait_border_pane

0xb40d,	// (0x000416b8) wait_anim_pane_g1

0xb40d,	// (0x000416b8) wait_anim_pane_g2

0x0001,

0xf724,	// (0x000459cf) wait_anim_pane_g

0xd398,	// (0x00043643) wait_border_pane_g1

0xd3a3,	// (0x0004364e) wait_border_pane_g2

0xd3ac,	// (0x00043657) wait_border_pane_g3

0x0002,

0xf852,	// (0x00045afd) wait_border_pane_g

0xd208,	// (0x000434b3) bg_popup_window_pane_cp16_ParamLimits

0xd208,	// (0x000434b3) bg_popup_window_pane_cp16

0xd308,	// (0x000435b3) indicator_popup_pane_cp4_ParamLimits

0xd308,	// (0x000435b3) indicator_popup_pane_cp4

0xd31c,	// (0x000435c7) popup_query_data_window_t1_ParamLimits

0xd31c,	// (0x000435c7) popup_query_data_window_t1

0xd32e,	// (0x000435d9) popup_query_data_window_t2_ParamLimits

0xd32e,	// (0x000435d9) popup_query_data_window_t2

0xd347,	// (0x000435f2) popup_query_data_window_t3_ParamLimits

0xd347,	// (0x000435f2) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00045af6) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00045af6) popup_query_data_window_t

0xd361,	// (0x0004360c) query_popup_data_pane_ParamLimits

0xd361,	// (0x0004360c) query_popup_data_pane

0xd375,	// (0x00043620) query_popup_data_pane_cp1_ParamLimits

0xd375,	// (0x00043620) query_popup_data_pane_cp1

0xd208,	// (0x000434b3) bg_popup_window_pane_cp10_ParamLimits

0xd208,	// (0x000434b3) bg_popup_window_pane_cp10

0xd23a,	// (0x000434e5) indicator_popup_pane_ParamLimits

0xd23a,	// (0x000434e5) indicator_popup_pane

0xd25c,	// (0x00043507) popup_query_code_window_t1_ParamLimits

0xd25c,	// (0x00043507) popup_query_code_window_t1

0xd276,	// (0x00043521) popup_query_code_window_t2_ParamLimits

0xd276,	// (0x00043521) popup_query_code_window_t2

0xd2bf,	// (0x0004356a) popup_query_code_window_t3_ParamLimits

0xd2bf,	// (0x0004356a) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00045aef) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00045aef) popup_query_code_window_t

0xd2ee,	// (0x00043599) query_popup_pane_ParamLimits

0xd2ee,	// (0x00043599) query_popup_pane

0xb848,	// (0x00041af3) bg_popup_window_pane_cp15_ParamLimits

0xb848,	// (0x00041af3) bg_popup_window_pane_cp15

0xb866,	// (0x00041b11) indicator_popup_pane_cp1_ParamLimits

0xb866,	// (0x00041b11) indicator_popup_pane_cp1

0xb879,	// (0x00041b24) indicator_popup_pane_cp2_ParamLimits

0xb879,	// (0x00041b24) indicator_popup_pane_cp2

0xb88c,	// (0x00041b37) popup_query_data_code_window_g1_ParamLimits

0xb88c,	// (0x00041b37) popup_query_data_code_window_g1

0xb89f,	// (0x00041b4a) popup_query_data_code_window_t1_ParamLimits

0xb89f,	// (0x00041b4a) popup_query_data_code_window_t1

0xb8b1,	// (0x00041b5c) popup_query_data_code_window_t2_ParamLimits

0xb8b1,	// (0x00041b5c) popup_query_data_code_window_t2

0xb8c3,	// (0x00041b6e) popup_query_data_code_window_t3_ParamLimits

0xb8c3,	// (0x00041b6e) popup_query_data_code_window_t3

0xb8d9,	// (0x00041b84) popup_query_data_code_window_t4_ParamLimits

0xb8d9,	// (0x00041b84) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00045851) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00045851) popup_query_data_code_window_t

0xc755,	// (0x00042a00) list_single_midp_graphic_pane_g3

0xb8f1,	// (0x00041b9c) query_popup_data_pane_cp2_ParamLimits

0xb904,	// (0x00041baf) query_popup_pane_cp2_ParamLimits

0xb904,	// (0x00041baf) query_popup_pane_cp2

0xb417,	// (0x000416c2) bg_popup_window_pane_cp11

0xd200,	// (0x000434ab) heading_pane_cp5

0xbbb4,	// (0x00041e5f) listscroll_popup_info_pane

0xb417,	// (0x000416c2) input_focus_pane_cp3

0xb917,	// (0x00041bc2) query_popup_pane_t1

0xb925,	// (0x00041bd0) list_popup_info_pane_ParamLimits

0xb925,	// (0x00041bd0) list_popup_info_pane

0xb934,	// (0x00041bdf) listscroll_popup_info_pane_g1

0xb93c,	// (0x00041be7) scroll_pane_cp7

0xb946,	// (0x00041bf1) popup_info_list_pane_t1_ParamLimits

0xb946,	// (0x00041bf1) popup_info_list_pane_t1

0xbb82,	// (0x00041e2d) popup_info_list_pane_t2_ParamLimits

0xbb82,	// (0x00041e2d) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004585a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004585a) popup_info_list_pane_t

0xb417,	// (0x000416c2) bg_popup_window_pane_cp12

0xe132,	// (0x000443dd) find_popup_pane

0xb473,	// (0x0004171e) bg_popup_window_pane_cp3

0xbb9c,	// (0x00041e47) heading_pane_cp3

0xbba8,	// (0x00041e53) listscroll_popup_graphic_pane

0xb417,	// (0x000416c2) bg_popup_window_pane_cp4

0x8f05,	// (0x0003f1b0) heading_pane_cp4

0xbbb4,	// (0x00041e5f) listscroll_popup_colour_pane

0xbbbc,	// (0x00041e67) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbbbc,	// (0x00041e67) cell_large_graphic_colour_none_popup_pane

0x8f0d,	// (0x0003f1b8) grid_large_graphic_colour_popup_pane_ParamLimits

0x8f0d,	// (0x0003f1b8) grid_large_graphic_colour_popup_pane

0xbbd0,	// (0x00041e7b) listscroll_popup_colour_pane_g1_ParamLimits

0xbbd0,	// (0x00041e7b) listscroll_popup_colour_pane_g1

0xbbe7,	// (0x00041e92) listscroll_popup_colour_pane_g2_ParamLimits

0xbbe7,	// (0x00041e92) listscroll_popup_colour_pane_g2

0xbbfe,	// (0x00041ea9) listscroll_popup_colour_pane_g3_ParamLimits

0xbbfe,	// (0x00041ea9) listscroll_popup_colour_pane_g3

0x8f31,	// (0x0003f1dc) listscroll_popup_colour_pane_g4_ParamLimits

0x8f31,	// (0x0003f1dc) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004585f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004585f) listscroll_popup_colour_pane_g

0xbc0e,	// (0x00041eb9) scroll_pane_cp6_ParamLimits

0xbc0e,	// (0x00041eb9) scroll_pane_cp6

0x8f40,	// (0x0003f1eb) cell_large_graphic_colour_popup_pane_ParamLimits

0x8f40,	// (0x0003f1eb) cell_large_graphic_colour_popup_pane

0xbc20,	// (0x00041ecb) cell_large_graphic_colour_none_popup_pane_t1

0xb417,	// (0x000416c2) grid_highlight_pane_cp5

0xbc2f,	// (0x00041eda) cell_large_graphic_colour_popup_pane_g1

0xbc37,	// (0x00041ee2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00045868) cell_large_graphic_colour_popup_pane_g

0xbc3f,	// (0x00041eea) cell_large_graphic_colour_popup_pane_g2_copy1

0xbc48,	// (0x00041ef3) grid_highlight_pane_cp4

0xbc50,	// (0x00041efb) bg_popup_window_pane_cp8_ParamLimits

0xbc50,	// (0x00041efb) bg_popup_window_pane_cp8

0xbc6b,	// (0x00041f16) popup_snote_single_text_window_g1_ParamLimits

0xbc6b,	// (0x00041f16) popup_snote_single_text_window_g1

0xbc7d,	// (0x00041f28) popup_snote_single_text_window_t1_ParamLimits

0xbc7d,	// (0x00041f28) popup_snote_single_text_window_t1

0xbc90,	// (0x00041f3b) popup_snote_single_text_window_t2_ParamLimits

0xbc90,	// (0x00041f3b) popup_snote_single_text_window_t2

0xbca3,	// (0x00041f4e) popup_snote_single_text_window_t3_ParamLimits

0xbca3,	// (0x00041f4e) popup_snote_single_text_window_t3

0xbcdc,	// (0x00041f87) popup_snote_single_text_window_t4_ParamLimits

0xbcdc,	// (0x00041f87) popup_snote_single_text_window_t4

0xbd10,	// (0x00041fbb) popup_snote_single_text_window_t5_ParamLimits

0xbd10,	// (0x00041fbb) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004586d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004586d) popup_snote_single_text_window_t

0xbd3f,	// (0x00041fea) bg_popup_window_pane_cp9_ParamLimits

0xbd3f,	// (0x00041fea) bg_popup_window_pane_cp9

0xbc6b,	// (0x00041f16) popup_snote_single_graphic_window_g1_ParamLimits

0xbc6b,	// (0x00041f16) popup_snote_single_graphic_window_g1

0xbd4d,	// (0x00041ff8) popup_snote_single_graphic_window_g2_ParamLimits

0xbd4d,	// (0x00041ff8) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00045878) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00045878) popup_snote_single_graphic_window_g

0xbd59,	// (0x00042004) popup_snote_single_graphic_window_t1_ParamLimits

0xbd59,	// (0x00042004) popup_snote_single_graphic_window_t1

0xbd6c,	// (0x00042017) popup_snote_single_graphic_window_t2_ParamLimits

0xbd6c,	// (0x00042017) popup_snote_single_graphic_window_t2

0xbd7f,	// (0x0004202a) popup_snote_single_graphic_window_t3_ParamLimits

0xbd7f,	// (0x0004202a) popup_snote_single_graphic_window_t3

0xbdb8,	// (0x00042063) popup_snote_single_graphic_window_t4_ParamLimits

0xbdb8,	// (0x00042063) popup_snote_single_graphic_window_t4

0xbdec,	// (0x00042097) popup_snote_single_graphic_window_t5_ParamLimits

0xbdec,	// (0x00042097) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004587d) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004587d) popup_snote_single_graphic_window_t

0xe0b6,	// (0x00044361) grid_graphic_popup_pane_ParamLimits

0xe0b6,	// (0x00044361) grid_graphic_popup_pane

0xe0e2,	// (0x0004438d) listscroll_popup_graphic_pane_g1_ParamLimits

0xe0e2,	// (0x0004438d) listscroll_popup_graphic_pane_g1

0xa1f1,	// (0x0004049c) listscroll_popup_graphic_pane_g2_ParamLimits

0xa1f1,	// (0x0004049c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00045c62) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00045c62) listscroll_popup_graphic_pane_g

0xd95c,	// (0x00043c07) scroll_pane_cp5

0xa1b4,	// (0x0004045f) cell_graphic_popup_pane_ParamLimits

0xa1b4,	// (0x0004045f) cell_graphic_popup_pane

0xe075,	// (0x00044320) cell_graphic_popup_pane_g1

0xe07d,	// (0x00044328) cell_graphic_popup_pane_g2

0xbc3f,	// (0x00041eea) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00045c5b) cell_graphic_popup_pane_g

0xe086,	// (0x00044331) cell_graphic_popup_pane_t2

0xbc48,	// (0x00041ef3) grid_highlight_pane_cp3

0xbe2d,	// (0x000420d8) list_gen_pane_ParamLimits

0xbe2d,	// (0x000420d8) list_gen_pane

0xbe55,	// (0x00042100) scroll_pane

0xa16f,	// (0x0004041a) bg_list_pane_g1_ParamLimits

0xa16f,	// (0x0004041a) bg_list_pane_g1

0xe024,	// (0x000442cf) bg_list_pane_g2_ParamLimits

0xe024,	// (0x000442cf) bg_list_pane_g2

0xe037,	// (0x000442e2) bg_list_pane_g3_ParamLimits

0xe037,	// (0x000442e2) bg_list_pane_g3

0xe049,	// (0x000442f4) bg_list_pane_g4_ParamLimits

0xe049,	// (0x000442f4) bg_list_pane_g4

0xa18a,	// (0x00040435) bg_list_pane_g5_ParamLimits

0xa18a,	// (0x00040435) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00045c50) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00045c50) bg_list_pane_g

0xa135,	// (0x000403e0) list_double2_graphic_large_graphic_pane_ParamLimits

0xa135,	// (0x000403e0) list_double2_graphic_large_graphic_pane

0xa135,	// (0x000403e0) list_double2_graphic_pane_ParamLimits

0xa135,	// (0x000403e0) list_double2_graphic_pane

0xa135,	// (0x000403e0) list_double2_large_graphic_pane_ParamLimits

0xa135,	// (0x000403e0) list_double2_large_graphic_pane

0xa135,	// (0x000403e0) list_double2_pane_ParamLimits

0xa135,	// (0x000403e0) list_double2_pane

0xa135,	// (0x000403e0) list_double_graphic_heading_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_graphic_heading_pane

0xa135,	// (0x000403e0) list_double_graphic_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_graphic_pane

0xa135,	// (0x000403e0) list_double_heading_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_heading_pane

0xa135,	// (0x000403e0) list_double_large_graphic_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_large_graphic_pane

0xa135,	// (0x000403e0) list_double_number_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_number_pane

0xa135,	// (0x000403e0) list_double_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_pane

0xa135,	// (0x000403e0) list_double_time_pane_ParamLimits

0xa135,	// (0x000403e0) list_double_time_pane

0xa135,	// (0x000403e0) list_setting_number_pane_ParamLimits

0xa135,	// (0x000403e0) list_setting_number_pane

0xa135,	// (0x000403e0) list_setting_pane_ParamLimits

0xa135,	// (0x000403e0) list_setting_pane

0xa148,	// (0x000403f3) list_single_2graphic_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_2graphic_pane

0xa148,	// (0x000403f3) list_single_graphic_heading_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_graphic_heading_pane

0xa148,	// (0x000403f3) list_single_graphic_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_graphic_pane

0xa148,	// (0x000403f3) list_single_heading_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_heading_pane

0xa148,	// (0x000403f3) list_single_large_graphic_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_large_graphic_pane

0xa148,	// (0x000403f3) list_single_number_heading_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_number_heading_pane

0xa148,	// (0x000403f3) list_single_number_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_number_pane

0xa148,	// (0x000403f3) list_single_pane_ParamLimits

0xa148,	// (0x000403f3) list_single_pane

0xb417,	// (0x000416c2) list_highlight_pane_cp1

0x19dd,	// (0x00037c88) list_single_pane_g1_ParamLimits

0x19dd,	// (0x00037c88) list_single_pane_g1

0x19e9,	// (0x00037c94) list_single_pane_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00045899) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00045899) list_single_pane_g

0x0df1,	// (0x0003709c) list_single_pane_t1_ParamLimits

0x0df1,	// (0x0003709c) list_single_pane_t1

0x19dd,	// (0x00037c88) list_single_number_pane_g1_ParamLimits

0x19dd,	// (0x00037c88) list_single_number_pane_g1

0x19e9,	// (0x00037c94) list_single_number_pane_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00045899) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00045899) list_single_number_pane_g

0x0c70,	// (0x00036f1b) list_single_number_pane_t1_ParamLimits

0x0c70,	// (0x00036f1b) list_single_number_pane_t1

0x8023,	// (0x0003e2ce) list_single_number_pane_t2_ParamLimits

0x8023,	// (0x0003e2ce) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00045c11) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00045c11) list_single_number_pane_t

0x7a95,	// (0x0003dd40) list_single_graphic_pane_g1_ParamLimits

0x7a95,	// (0x0003dd40) list_single_graphic_pane_g1

0x19dd,	// (0x00037c88) list_single_graphic_pane_g2_ParamLimits

0x19dd,	// (0x00037c88) list_single_graphic_pane_g2

0x19e9,	// (0x00037c94) list_single_graphic_pane_g3_ParamLimits

0x19e9,	// (0x00037c94) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00045888) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00045888) list_single_graphic_pane_g

0x7aa1,	// (0x0003dd4c) list_single_graphic_pane_t1_ParamLimits

0x7aa1,	// (0x0003dd4c) list_single_graphic_pane_t1

0x7ab7,	// (0x0003dd62) list_single_heading_pane_g1_ParamLimits

0x7ab7,	// (0x0003dd62) list_single_heading_pane_g1

0x19e9,	// (0x00037c94) list_single_heading_pane_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004588f) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004588f) list_single_heading_pane_g

0x7aca,	// (0x0003dd75) list_single_heading_pane_t1_ParamLimits

0x7aca,	// (0x0003dd75) list_single_heading_pane_t1

0x7ae0,	// (0x0003dd8b) list_single_heading_pane_t2_ParamLimits

0x7ae0,	// (0x0003dd8b) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00045894) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00045894) list_single_heading_pane_t

0x19dd,	// (0x00037c88) list_single_number_heading_pane_g1_ParamLimits

0x19dd,	// (0x00037c88) list_single_number_heading_pane_g1

0x19e9,	// (0x00037c94) list_single_number_heading_pane_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00045899) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00045899) list_single_number_heading_pane_g

0x0e07,	// (0x000370b2) list_single_number_heading_pane_t1_ParamLimits

0x0e07,	// (0x000370b2) list_single_number_heading_pane_t1

0x7af2,	// (0x0003dd9d) list_single_number_heading_pane_t2_ParamLimits

0x7af2,	// (0x0003dd9d) list_single_number_heading_pane_t2

0x0dcb,	// (0x00037076) list_single_number_heading_pane_t3_ParamLimits

0x0dcb,	// (0x00037076) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004589e) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004589e) list_single_number_heading_pane_t

0x7b04,	// (0x0003ddaf) list_single_graphic_heading_pane_g1_ParamLimits

0x7b04,	// (0x0003ddaf) list_single_graphic_heading_pane_g1

0x8337,	// (0x0003e5e2) list_single_graphic_heading_pane_g4_ParamLimits

0x8337,	// (0x0003e5e2) list_single_graphic_heading_pane_g4

0x19e9,	// (0x00037c94) list_single_graphic_heading_pane_g5_ParamLimits

0x19e9,	// (0x00037c94) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x000458a5) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x000458a5) list_single_graphic_heading_pane_g

0x0e07,	// (0x000370b2) list_single_graphic_heading_pane_t1_ParamLimits

0x0e07,	// (0x000370b2) list_single_graphic_heading_pane_t1

0x7b18,	// (0x0003ddc3) list_single_graphic_heading_pane_t2_ParamLimits

0x7b18,	// (0x0003ddc3) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x000458ac) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x000458ac) list_single_graphic_heading_pane_t

0x293d,	// (0x00038be8) list_single_large_graphic_pane_g1_ParamLimits

0x293d,	// (0x00038be8) list_single_large_graphic_pane_g1

0x19dd,	// (0x00037c88) list_single_large_graphic_pane_g2_ParamLimits

0x19dd,	// (0x00037c88) list_single_large_graphic_pane_g2

0x19e9,	// (0x00037c94) list_single_large_graphic_pane_g3_ParamLimits

0x19e9,	// (0x00037c94) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x000458b1) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x000458b1) list_single_large_graphic_pane_g

0xd3a3,	// (0x0004364e) wait_border_pane_g2_copy1

0x8348,	// (0x0003e5f3) list_single_large_graphic_pane_g4_cp2

0x0e07,	// (0x000370b2) list_single_large_graphic_pane_t1_ParamLimits

0x0e07,	// (0x000370b2) list_single_large_graphic_pane_t1

0x1a30,	// (0x00037cdb) list_double_pane_g1_ParamLimits

0x1a30,	// (0x00037cdb) list_double_pane_g1

0x1a3c,	// (0x00037ce7) list_double_pane_g2_ParamLimits

0x1a3c,	// (0x00037ce7) list_double_pane_g2

0x0001,

0xf60d,	// (0x000458b8) list_double_pane_g_ParamLimits

0xf60d,	// (0x000458b8) list_double_pane_g

0x7b30,	// (0x0003dddb) list_double_pane_t1_ParamLimits

0x7b30,	// (0x0003dddb) list_double_pane_t1

0x7b46,	// (0x0003ddf1) list_double_pane_t2_ParamLimits

0x7b46,	// (0x0003ddf1) list_double_pane_t2

0x0001,

0xf612,	// (0x000458bd) list_double_pane_t_ParamLimits

0xf612,	// (0x000458bd) list_double_pane_t

0x7b58,	// (0x0003de03) list_double2_pane_g1_ParamLimits

0x7b58,	// (0x0003de03) list_double2_pane_g1

0x0810,	// (0x00036abb) list_double2_pane_g2_ParamLimits

0x0810,	// (0x00036abb) list_double2_pane_g2

0x0001,

0xf617,	// (0x000458c2) list_double2_pane_g_ParamLimits

0xf617,	// (0x000458c2) list_double2_pane_g

0x7b69,	// (0x0003de14) list_double2_pane_t1_ParamLimits

0x7b69,	// (0x0003de14) list_double2_pane_t1

0x7b7f,	// (0x0003de2a) list_double2_pane_t2_ParamLimits

0x7b7f,	// (0x0003de2a) list_double2_pane_t2

0x0001,

0xf61c,	// (0x000458c7) list_double2_pane_t_ParamLimits

0xf61c,	// (0x000458c7) list_double2_pane_t

0x1a30,	// (0x00037cdb) list_double_number_pane_g1_ParamLimits

0x1a30,	// (0x00037cdb) list_double_number_pane_g1

0x1a3c,	// (0x00037ce7) list_double_number_pane_g2_ParamLimits

0x1a3c,	// (0x00037ce7) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x000458b8) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x000458b8) list_double_number_pane_g

0x7b91,	// (0x0003de3c) list_double_number_pane_t1_ParamLimits

0x7b91,	// (0x0003de3c) list_double_number_pane_t1

0x0683,	// (0x0003692e) list_double_number_pane_t2_ParamLimits

0x0683,	// (0x0003692e) list_double_number_pane_t2

0x7ba3,	// (0x0003de4e) list_double_number_pane_t3_ParamLimits

0x7ba3,	// (0x0003de4e) list_double_number_pane_t3

0x0002,

0xf621,	// (0x000458cc) list_double_number_pane_t_ParamLimits

0xf621,	// (0x000458cc) list_double_number_pane_t

0x0677,	// (0x00036922) list_double_graphic_pane_g1_ParamLimits

0x0677,	// (0x00036922) list_double_graphic_pane_g1

0x8350,	// (0x0003e5fb) list_double_graphic_pane_g2_ParamLimits

0x8350,	// (0x0003e5fb) list_double_graphic_pane_g2

0x835f,	// (0x0003e60a) list_double_graphic_pane_g3_ParamLimits

0x835f,	// (0x0003e60a) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x000458d3) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x000458d3) list_double_graphic_pane_g

0x7bb5,	// (0x0003de60) list_double_graphic_pane_t1_ParamLimits

0x7bb5,	// (0x0003de60) list_double_graphic_pane_t1

0x7bcb,	// (0x0003de76) list_double_graphic_pane_t2_ParamLimits

0x7bcb,	// (0x0003de76) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x000458dc) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x000458dc) list_double_graphic_pane_t

0x7bdd,	// (0x0003de88) list_double2_graphic_pane_g1_ParamLimits

0x7bdd,	// (0x0003de88) list_double2_graphic_pane_g1

0xbe89,	// (0x00042134) list_double2_graphic_pane_g2_ParamLimits

0xbe89,	// (0x00042134) list_double2_graphic_pane_g2

0x8377,	// (0x0003e622) list_double2_graphic_pane_g3_ParamLimits

0x8377,	// (0x0003e622) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x000458e1) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x000458e1) list_double2_graphic_pane_g

0x7be9,	// (0x0003de94) list_double2_graphic_pane_t1_ParamLimits

0x7be9,	// (0x0003de94) list_double2_graphic_pane_t1

0x7bff,	// (0x0003deaa) list_double2_graphic_pane_t2_ParamLimits

0x7bff,	// (0x0003deaa) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x000458e8) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x000458e8) list_double2_graphic_pane_t

0x7c11,	// (0x0003debc) list_double_large_graphic_pane_g1_ParamLimits

0x7c11,	// (0x0003debc) list_double_large_graphic_pane_g1

0x7c30,	// (0x0003dedb) list_double_large_graphic_pane_g2_ParamLimits

0x7c30,	// (0x0003dedb) list_double_large_graphic_pane_g2

0x1a3c,	// (0x00037ce7) list_double_large_graphic_pane_g3_ParamLimits

0x1a3c,	// (0x00037ce7) list_double_large_graphic_pane_g3

0x7c46,	// (0x0003def1) list_double_large_graphic_pane_g4_ParamLimits

0x7c46,	// (0x0003def1) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x000458ed) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x000458ed) list_double_large_graphic_pane_g

0x7c59,	// (0x0003df04) list_double_large_graphic_pane_t1_ParamLimits

0x7c59,	// (0x0003df04) list_double_large_graphic_pane_t1

0x7c72,	// (0x0003df1d) list_double_large_graphic_pane_t2_ParamLimits

0x7c72,	// (0x0003df1d) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x000458f8) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x000458f8) list_double_large_graphic_pane_t

0x8383,	// (0x0003e62e) list_double2_large_graphic_pane_g1_ParamLimits

0x8383,	// (0x0003e62e) list_double2_large_graphic_pane_g1

0x838f,	// (0x0003e63a) list_double2_large_graphic_pane_g2_ParamLimits

0x838f,	// (0x0003e63a) list_double2_large_graphic_pane_g2

0x8377,	// (0x0003e622) list_double2_large_graphic_pane_g3_ParamLimits

0x8377,	// (0x0003e622) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x000458fd) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x000458fd) list_double2_large_graphic_pane_g

0x7c84,	// (0x0003df2f) list_double2_large_graphic_pane_t1_ParamLimits

0x7c84,	// (0x0003df2f) list_double2_large_graphic_pane_t1

0x7c9a,	// (0x0003df45) list_double2_large_graphic_pane_t2_ParamLimits

0x7c9a,	// (0x0003df45) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00045904) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00045904) list_double2_large_graphic_pane_t

0x7cac,	// (0x0003df57) list_double_heading_pane_g1_ParamLimits

0x7cac,	// (0x0003df57) list_double_heading_pane_g1

0x7cbd,	// (0x0003df68) list_double_heading_pane_g2_ParamLimits

0x7cbd,	// (0x0003df68) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00045909) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00045909) list_double_heading_pane_g

0x7cc9,	// (0x0003df74) list_double_heading_pane_t1_ParamLimits

0x7cc9,	// (0x0003df74) list_double_heading_pane_t1

0x7b7f,	// (0x0003de2a) list_double_heading_pane_t2_ParamLimits

0x7b7f,	// (0x0003de2a) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004590e) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004590e) list_double_heading_pane_t

0x0637,	// (0x000368e2) list_double_graphic_heading_pane_g1_ParamLimits

0x0637,	// (0x000368e2) list_double_graphic_heading_pane_g1

0x7cac,	// (0x0003df57) list_double_graphic_heading_pane_g2_ParamLimits

0x7cac,	// (0x0003df57) list_double_graphic_heading_pane_g2

0x7cbd,	// (0x0003df68) list_double_graphic_heading_pane_g3_ParamLimits

0x7cbd,	// (0x0003df68) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00045913) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00045913) list_double_graphic_heading_pane_g

0x7cdf,	// (0x0003df8a) list_double_graphic_heading_pane_t1_ParamLimits

0x7cdf,	// (0x0003df8a) list_double_graphic_heading_pane_t1

0x7bff,	// (0x0003deaa) list_double_graphic_heading_pane_t2_ParamLimits

0x7bff,	// (0x0003deaa) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004591a) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004591a) list_double_graphic_heading_pane_t

0x7cf5,	// (0x0003dfa0) list_double_time_pane_g1_ParamLimits

0x7cf5,	// (0x0003dfa0) list_double_time_pane_g1

0x05c9,	// (0x00036874) list_double_time_pane_g2_ParamLimits

0x05c9,	// (0x00036874) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0004591f) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0004591f) list_double_time_pane_g

0x7d06,	// (0x0003dfb1) list_double_time_pane_t1_ParamLimits

0x7d06,	// (0x0003dfb1) list_double_time_pane_t1

0x7d1c,	// (0x0003dfc7) list_double_time_pane_t2_ParamLimits

0x7d1c,	// (0x0003dfc7) list_double_time_pane_t2

0x7d2e,	// (0x0003dfd9) list_double_time_pane_t3_ParamLimits

0x7d2e,	// (0x0003dfd9) list_double_time_pane_t3

0x7d40,	// (0x0003dfeb) list_double_time_pane_t4_ParamLimits

0x7d40,	// (0x0003dfeb) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00045924) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00045924) list_double_time_pane_t

0x0804,	// (0x00036aaf) list_setting_pane_g1_ParamLimits

0x0804,	// (0x00036aaf) list_setting_pane_g1

0x0810,	// (0x00036abb) list_setting_pane_g2_ParamLimits

0x0810,	// (0x00036abb) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004592d) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004592d) list_setting_pane_g

0x7d52,	// (0x0003dffd) list_setting_pane_t1_ParamLimits

0x7d52,	// (0x0003dffd) list_setting_pane_t1

0x7d6c,	// (0x0003e017) list_setting_pane_t2_ParamLimits

0x7d6c,	// (0x0003e017) list_setting_pane_t2

0x0002,

0xf687,	// (0x00045932) list_setting_pane_t_ParamLimits

0xf687,	// (0x00045932) list_setting_pane_t

0x7da9,	// (0x0003e054) set_value_pane_cp_ParamLimits

0x7da9,	// (0x0003e054) set_value_pane_cp

0x087f,	// (0x00036b2a) list_setting_number_pane_g1_ParamLimits

0x087f,	// (0x00036b2a) list_setting_number_pane_g1

0x088b,	// (0x00036b36) list_setting_number_pane_g2_ParamLimits

0x088b,	// (0x00036b36) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x00045939) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x00045939) list_setting_number_pane_g

0x7db5,	// (0x0003e060) list_setting_number_pane_t1_ParamLimits

0x7db5,	// (0x0003e060) list_setting_number_pane_t1

0x7dce,	// (0x0003e079) list_setting_number_pane_t2_ParamLimits

0x7dce,	// (0x0003e079) list_setting_number_pane_t2

0x7de8,	// (0x0003e093) list_setting_number_pane_t3_ParamLimits

0x7de8,	// (0x0003e093) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004593e) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004593e) list_setting_number_pane_t

0x7da9,	// (0x0003e054) set_value_pane_ParamLimits

0x7da9,	// (0x0003e054) set_value_pane

0xbe95,	// (0x00042140) bg_set_opt_pane_ParamLimits

0xbe95,	// (0x00042140) bg_set_opt_pane

0x090d,	// (0x00036bb8) set_value_pane_t1

0xbeb6,	// (0x00042161) slider_set_pane_cp3

0xbebf,	// (0x0004216a) volume_small_pane_cp

0xbec8,	// (0x00042173) list_form_gen_pane

0xbed1,	// (0x0004217c) scroll_pane_cp8

0x7e2b,	// (0x0003e0d6) form_field_data_pane_ParamLimits

0x7e2b,	// (0x0003e0d6) form_field_data_pane

0x7e42,	// (0x0003e0ed) form_field_data_wide_pane_ParamLimits

0x7e42,	// (0x0003e0ed) form_field_data_wide_pane

0x7e62,	// (0x0003e10d) form_field_popup_pane_ParamLimits

0x7e62,	// (0x0003e10d) form_field_popup_pane

0x7e7a,	// (0x0003e125) form_field_popup_wide_pane_ParamLimits

0x7e7a,	// (0x0003e125) form_field_popup_wide_pane

0x099f,	// (0x00036c4a) form_field_slider_pane_ParamLimits

0x099f,	// (0x00036c4a) form_field_slider_pane

0x09b2,	// (0x00036c5d) form_field_slider_wide_pane_ParamLimits

0x09b2,	// (0x00036c5d) form_field_slider_wide_pane

0xbee2,	// (0x0004218d) data_form_pane

0x7ea1,	// (0x0003e14c) form_field_data_pane_t1

0xbeee,	// (0x00042199) input_focus_pane

0xbefc,	// (0x000421a7) data_form_wide_pane

0x09f5,	// (0x00036ca0) form_field_data_wide_pane_t1

0xbc5d,	// (0x00041f08) input_focus_pane_cp6

0x7ebb,	// (0x0003e166) form_field_popup_pane_t1

0xbeee,	// (0x00042199) input_focus_pane_cp7

0xbf1c,	// (0x000421c7) list_form_pane

0x0a39,	// (0x00036ce4) form_field_popup_wide_pane_t1

0xbeee,	// (0x00042199) input_focus_pane_cp8

0xbf28,	// (0x000421d3) list_form_wide_pane

0x7edd,	// (0x0003e188) form_field_slider_pane_t1_ParamLimits

0x7edd,	// (0x0003e188) form_field_slider_pane_t1

0x7ef5,	// (0x0003e1a0) form_field_slider_pane_t2_ParamLimits

0x7ef5,	// (0x0003e1a0) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004594e) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004594e) form_field_slider_pane_t

0xb465,	// (0x00041710) input_focus_pane_cp9_ParamLimits

0xb465,	// (0x00041710) input_focus_pane_cp9

0x7f0a,	// (0x0003e1b5) slider_cont_pane_ParamLimits

0x7f0a,	// (0x0003e1b5) slider_cont_pane

0xbf37,	// (0x000421e2) form_field_slider_wide_pane_t1_ParamLimits

0xbf37,	// (0x000421e2) form_field_slider_wide_pane_t1

0x0a97,	// (0x00036d42) form_field_slider_wide_pane_t2_ParamLimits

0x0a97,	// (0x00036d42) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00045953) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00045953) form_field_slider_wide_pane_t

0xb465,	// (0x00041710) input_focus_pane_cp10_ParamLimits

0xb465,	// (0x00041710) input_focus_pane_cp10

0x7f1e,	// (0x0003e1c9) slider_cont_pane_cp1_ParamLimits

0x7f1e,	// (0x0003e1c9) slider_cont_pane_cp1

0x7f32,	// (0x0003e1dd) slider_form_pane_cp

0xbf49,	// (0x000421f4) input_focus_pane_g1

0xbf51,	// (0x000421fc) input_focus_pane_g2

0xbf59,	// (0x00042204) input_focus_pane_g3

0xbf61,	// (0x0004220c) input_focus_pane_g4

0xbf69,	// (0x00042214) input_focus_pane_g5

0xbf71,	// (0x0004221c) input_focus_pane_g6

0xbf79,	// (0x00042224) input_focus_pane_g7

0xbf81,	// (0x0004222c) input_focus_pane_g8

0xbf89,	// (0x00042234) input_focus_pane_g9

0xb40d,	// (0x000416b8) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x00045958) input_focus_pane_g

0xd3ac,	// (0x00043657) wait_border_pane_g3_copy1

0x7f3a,	// (0x0003e1e5) data_form_pane_t1

0xb40d,	// (0x000416b8) wait_anim_pane_g1_copy1

0x8035,	// (0x0003e2e0) data_form_wide_pane_t1

0x7f54,	// (0x0003e1ff) list_form_graphic_pane_cp_ParamLimits

0x7f54,	// (0x0003e1ff) list_form_graphic_pane_cp

0xdfcd,	// (0x00044278) slider_form_pane_g1

0xdfd6,	// (0x00044281) slider_form_pane_g2

0x0006,

0xf996,	// (0x00045c41) slider_form_pane_g

0x7f54,	// (0x0003e1ff) list_form_graphic_pane_ParamLimits

0x7f54,	// (0x0003e1ff) list_form_graphic_pane

0x0b11,	// (0x00036dbc) list_form_graphic_pane_g1

0x0b19,	// (0x00036dc4) list_form_graphic_pane_t1_ParamLimits

0x0b19,	// (0x00036dc4) list_form_graphic_pane_t1

0xb473,	// (0x0004171e) list_highlight_pane_cp5_ParamLimits

0xb473,	// (0x0004171e) list_highlight_pane_cp5

0x7f67,	// (0x0003e212) find_pane_g1

0xbf91,	// (0x0004223c) input_find_pane

0x7f70,	// (0x0003e21b) input_find_pane_g1_ParamLimits

0x7f70,	// (0x0003e21b) input_find_pane_g1

0x7f7c,	// (0x0003e227) input_find_pane_t1_ParamLimits

0x7f7c,	// (0x0003e227) input_find_pane_t1

0x7f91,	// (0x0003e23c) input_find_pane_t2_ParamLimits

0x7f91,	// (0x0003e23c) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0004596d) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0004596d) input_find_pane_t

0xbf9a,	// (0x00042245) input_focus_pane_cp5_ParamLimits

0xbf9a,	// (0x00042245) input_focus_pane_cp5

0x8f75,	// (0x0003f220) bg_popup_window_pane_cp2_ParamLimits

0x8f75,	// (0x0003f220) bg_popup_window_pane_cp2

0x8f82,	// (0x0003f22d) listscroll_menu_pane_ParamLimits

0x8f82,	// (0x0003f22d) listscroll_menu_pane

0x8f8e,	// (0x0003f239) popup_submenu_window_ParamLimits

0x8f8e,	// (0x0003f239) popup_submenu_window

0xbfa8,	// (0x00042253) find_popup_pane_g1

0xbfb0,	// (0x0004225b) input_popup_find_pane_cp

0xbf9a,	// (0x00042245) input_focus_pane_cp4_ParamLimits

0xbf9a,	// (0x00042245) input_focus_pane_cp4

0xbfba,	// (0x00042265) input_popup_find_pane_t1_ParamLimits

0xbfba,	// (0x00042265) input_popup_find_pane_t1

0xb417,	// (0x000416c2) bg_popup_sub_pane_cp

0xbfe8,	// (0x00042293) listscroll_popup_sub_pane

0xbff0,	// (0x0004229b) list_submenu_pane_ParamLimits

0xbff0,	// (0x0004229b) list_submenu_pane

0xc001,	// (0x000422ac) scroll_pane_cp4

0xc009,	// (0x000422b4) list_single_popup_submenu_pane_ParamLimits

0xc009,	// (0x000422b4) list_single_popup_submenu_pane

0xc01c,	// (0x000422c7) list_single_popup_submenu_pane_g1

0xc024,	// (0x000422cf) list_single_popup_submenu_pane_t1_ParamLimits

0xc024,	// (0x000422cf) list_single_popup_submenu_pane_t1

0xb465,	// (0x00041710) bg_active_tab_pane_cp1_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp1

0x8fc0,	// (0x0003f26b) tabs_2_active_pane_g1

0x8fc8,	// (0x0003f273) tabs_2_active_pane_t1

0xb465,	// (0x00041710) bg_passive_tab_pane_cp1_ParamLimits

0xb465,	// (0x00041710) bg_passive_tab_pane_cp1

0x8fc0,	// (0x0003f26b) tabs_2_passive_pane_g1

0x8fc8,	// (0x0003f273) tabs_2_passive_pane_t1

0xb473,	// (0x0004171e) bg_active_tab_pane_cp4

0x8fda,	// (0x0003f285) tabs_2_long_active_pane_t1

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp4

0x2462,	// (0x0003870d) list_single_midp_graphic_pane_g4_ParamLimits

0xb473,	// (0x0004171e) bg_active_tab_pane_cp5

0x8fed,	// (0x0003f298) tabs_3_long_active_pane_t1

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp5

0x2462,	// (0x0003870d) list_single_midp_graphic_pane_g4

0xb473,	// (0x0004171e) bg_popup_window_pane_cp13_ParamLimits

0xb473,	// (0x0004171e) bg_popup_window_pane_cp13

0xc04e,	// (0x000422f9) listscroll_popup_fast_pane_ParamLimits

0xc04e,	// (0x000422f9) listscroll_popup_fast_pane

0xc05d,	// (0x00042308) grid_popup_fast_pane_ParamLimits

0xc05d,	// (0x00042308) grid_popup_fast_pane

0xc06f,	// (0x0004231a) scroll_pane_cp9_ParamLimits

0xc06f,	// (0x0004231a) scroll_pane_cp9

0xf38b,	// (0x00045636) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf38b,	// (0x00045636) list_single_graphic_hl_pane_t1_cp2

0xc093,	// (0x0004233e) input_focus_pane_cp20_ParamLimits

0xc093,	// (0x0004233e) input_focus_pane_cp20

0xc0a1,	// (0x0004234c) query_popup_data_pane_t1_ParamLimits

0xc0a1,	// (0x0004234c) query_popup_data_pane_t1

0xc0b4,	// (0x0004235f) query_popup_data_pane_t2_ParamLimits

0xc0b4,	// (0x0004235f) query_popup_data_pane_t2

0xc0fa,	// (0x000423a5) query_popup_data_pane_t3_ParamLimits

0xc0fa,	// (0x000423a5) query_popup_data_pane_t3

0xc13b,	// (0x000423e6) query_popup_data_pane_t4_ParamLimits

0xc13b,	// (0x000423e6) query_popup_data_pane_t4

0xc177,	// (0x00042422) query_popup_data_pane_t5_ParamLimits

0xc177,	// (0x00042422) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00045972) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00045972) query_popup_data_pane_t

0xbf49,	// (0x000421f4) bg_set_opt_pane_g1

0xbf51,	// (0x000421fc) bg_set_opt_pane_g2

0xbf59,	// (0x00042204) bg_set_opt_pane_g3

0xbf61,	// (0x0004220c) bg_set_opt_pane_g4

0xbf69,	// (0x00042214) bg_set_opt_pane_g5

0xbf71,	// (0x0004221c) bg_set_opt_pane_g6

0xbf79,	// (0x00042224) bg_set_opt_pane_g7

0xbf81,	// (0x0004222c) bg_set_opt_pane_g8

0xbf89,	// (0x00042234) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0004597d) bg_set_opt_pane_g

0x1f19,	// (0x000381c4) control_top_pane_stacon_ParamLimits

0x1f19,	// (0x000381c4) control_top_pane_stacon

0x1f6c,	// (0x00038217) signal_pane_stacon_ParamLimits

0x1f6c,	// (0x00038217) signal_pane_stacon

0xc5db,	// (0x00042886) stacon_top_pane_g1_ParamLimits

0xc5db,	// (0x00042886) stacon_top_pane_g1

0x1f91,	// (0x0003823c) title_pane_stacon_ParamLimits

0x1f91,	// (0x0003823c) title_pane_stacon

0x1fbb,	// (0x00038266) uni_indicator_pane_stacon_ParamLimits

0x1fbb,	// (0x00038266) uni_indicator_pane_stacon

0x1fd0,	// (0x0003827b) battery_pane_stacon_ParamLimits

0x1fd0,	// (0x0003827b) battery_pane_stacon

0x2014,	// (0x000382bf) control_bottom_pane_stacon_ParamLimits

0x2014,	// (0x000382bf) control_bottom_pane_stacon

0x2037,	// (0x000382e2) navi_pane_stacon_ParamLimits

0x2037,	// (0x000382e2) navi_pane_stacon

0xc5fd,	// (0x000428a8) stacon_bottom_pane_g1_ParamLimits

0xc5fd,	// (0x000428a8) stacon_bottom_pane_g1

0x1b28,	// (0x00037dd3) aid_levels_signal_lsc_ParamLimits

0x1b28,	// (0x00037dd3) aid_levels_signal_lsc

0x1b3f,	// (0x00037dea) signal_pane_stacon_g1_ParamLimits

0x1b3f,	// (0x00037dea) signal_pane_stacon_g1

0x1b53,	// (0x00037dfe) signal_pane_stacon_g2_ParamLimits

0x1b53,	// (0x00037dfe) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x00045990) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00045990) signal_pane_stacon_g

0x1b88,	// (0x00037e33) title_pane_stacon_t1_ParamLimits

0x1b88,	// (0x00037e33) title_pane_stacon_t1

0xc1bb,	// (0x00042466) uni_indicator_pane_stacon_g1

0xc1c5,	// (0x00042470) uni_indicator_pane_stacon_g2

0xc1cf,	// (0x0004247a) uni_indicator_pane_stacon_g3

0xc1d9,	// (0x00042484) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0004599c) uni_indicator_pane_stacon_g

0x1bad,	// (0x00037e58) control_top_pane_stacon_g1

0x1bb5,	// (0x00037e60) control_top_pane_stacon_t1_ParamLimits

0x1bb5,	// (0x00037e60) control_top_pane_stacon_t1

0x1bec,	// (0x00037e97) aid_levels_battery_lsc_ParamLimits

0x1bec,	// (0x00037e97) aid_levels_battery_lsc

0x1c04,	// (0x00037eaf) battery_pane_stacon_g1_ParamLimits

0x1c04,	// (0x00037eaf) battery_pane_stacon_g1

0x1c17,	// (0x00037ec2) battery_pane_stacon_g2_ParamLimits

0x1c17,	// (0x00037ec2) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x000459a5) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x000459a5) battery_pane_stacon_g

0x1c55,	// (0x00037f00) navi_icon_pane_stacon

0x1c69,	// (0x00037f14) navi_navi_pane_stacon

0x1c55,	// (0x00037f00) navi_text_pane_stacon

0x1bad,	// (0x00037e58) control_bottom_pane_stacon_g1

0x1c7d,	// (0x00037f28) control_bottom_pane_stacon_t1_ParamLimits

0x1c7d,	// (0x00037f28) control_bottom_pane_stacon_t1

0x8fff,	// (0x0003f2aa) grid_app_pane_ParamLimits

0x8fff,	// (0x0003f2aa) grid_app_pane

0x9035,	// (0x0003f2e0) scroll_pane_cp15_ParamLimits

0x9035,	// (0x0003f2e0) scroll_pane_cp15

0x904e,	// (0x0003f2f9) cell_app_pane_ParamLimits

0x904e,	// (0x0003f2f9) cell_app_pane

0x9095,	// (0x0003f340) cell_app_pane_g1_ParamLimits

0x9095,	// (0x0003f340) cell_app_pane_g1

0xc1fd,	// (0x000424a8) cell_app_pane_g2_ParamLimits

0xc1fd,	// (0x000424a8) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x000459aa) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x000459aa) cell_app_pane_g

0xc209,	// (0x000424b4) cell_app_pane_t1_ParamLimits

0xc209,	// (0x000424b4) cell_app_pane_t1

0xc220,	// (0x000424cb) grid_highlight_pane_ParamLimits

0xc220,	// (0x000424cb) grid_highlight_pane

0xbf49,	// (0x000421f4) cell_highlight_pane_g1

0xbf51,	// (0x000421fc) cell_highlight_pane_g2

0xbf59,	// (0x00042204) cell_highlight_pane_g3

0xbf61,	// (0x0004220c) cell_highlight_pane_g4

0xbf69,	// (0x00042214) cell_highlight_pane_g5

0xbf71,	// (0x0004221c) cell_highlight_pane_g6

0xbf79,	// (0x00042224) cell_highlight_pane_g7

0xbf81,	// (0x0004222c) cell_highlight_pane_g8

0xbf89,	// (0x00042234) cell_highlight_pane_g9

0xb40d,	// (0x000416b8) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x00045958) cell_highlight_pane_g

0xc231,	// (0x000424dc) bg_scroll_pane

0x1d4c,	// (0x00037ff7) scroll_handle_pane

0xc278,	// (0x00042523) scroll_bg_pane_g1

0xc28d,	// (0x00042538) scroll_bg_pane_g2

0xc2a5,	// (0x00042550) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x000459af) scroll_bg_pane_g

0xc2ba,	// (0x00042565) scroll_handle_focus_pane_ParamLimits

0xc2ba,	// (0x00042565) scroll_handle_focus_pane

0xc278,	// (0x00042523) scroll_handle_pane_g1

0xc2c7,	// (0x00042572) scroll_handle_pane_g2

0xc2a5,	// (0x00042550) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x000459b6) scroll_handle_pane_g

0xbf9a,	// (0x00042245) bg_popup_sub_pane_cp21_ParamLimits

0xbf9a,	// (0x00042245) bg_popup_sub_pane_cp21

0xc2db,	// (0x00042586) popup_fep_japan_predictive_window_t1_ParamLimits

0xc2db,	// (0x00042586) popup_fep_japan_predictive_window_t1

0xc2f2,	// (0x0004259d) popup_fep_japan_predictive_window_t2_ParamLimits

0xc2f2,	// (0x0004259d) popup_fep_japan_predictive_window_t2

0xc325,	// (0x000425d0) popup_fep_japan_predictive_window_t3_ParamLimits

0xc325,	// (0x000425d0) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x000459bd) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x000459bd) popup_fep_japan_predictive_window_t

0xb417,	// (0x000416c2) bg_popup_sub_pane_cp23

0xc35c,	// (0x00042607) listscroll_japin_cand_pane

0xc364,	// (0x0004260f) popup_fep_japan_candidate_window_t1

0xc372,	// (0x0004261d) candidate_pane_ParamLimits

0xc372,	// (0x0004261d) candidate_pane

0xc384,	// (0x0004262f) scroll_pane_cp30

0xc38c,	// (0x00042637) list_single_popup_jap_candidate_pane_ParamLimits

0xc38c,	// (0x00042637) list_single_popup_jap_candidate_pane

0xb417,	// (0x000416c2) list_highlight_pane_cp30

0xc3a0,	// (0x0004264b) list_single_popup_jap_candidate_pane_t1

0xc3af,	// (0x0004265a) level_1_signal

0xc3bc,	// (0x00042667) level_2_signal

0xc3c9,	// (0x00042674) level_3_signal

0xc3d6,	// (0x00042681) level_4_signal

0xc3e3,	// (0x0004268e) level_5_signal

0xc3f0,	// (0x0004269b) level_6_signal

0xc3fd,	// (0x000426a8) level_7_signal

0xc3af,	// (0x0004265a) level_1_battery

0xc3bc,	// (0x00042667) level_2_battery

0xc3c9,	// (0x00042674) level_3_battery

0xc3d6,	// (0x00042681) level_4_battery

0xc3e3,	// (0x0004268e) level_5_battery

0xc3f0,	// (0x0004269b) level_6_battery

0xc3fd,	// (0x000426a8) level_7_battery

0xc422,	// (0x000426cd) list_menu_pane_ParamLimits

0xc422,	// (0x000426cd) list_menu_pane

0xc433,	// (0x000426de) scroll_pane_cp25_ParamLimits

0xc433,	// (0x000426de) scroll_pane_cp25

0xc44c,	// (0x000426f7) list_double2_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double2_graphic_pane_cp2

0xc44c,	// (0x000426f7) list_double2_large_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double2_large_graphic_pane_cp2

0xc44c,	// (0x000426f7) list_double2_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double2_pane_cp2

0xc44c,	// (0x000426f7) list_double_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double_graphic_pane_cp2

0xc44c,	// (0x000426f7) list_double_large_graphic_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double_large_graphic_pane_cp2

0xc44c,	// (0x000426f7) list_double_number_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double_number_pane_cp2

0xc44c,	// (0x000426f7) list_double_pane_cp2_ParamLimits

0xc44c,	// (0x000426f7) list_double_pane_cp2

0x90ca,	// (0x0003f375) list_single_2graphic_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_2graphic_pane_cp2

0x90ca,	// (0x0003f375) list_single_graphic_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_graphic_heading_pane_cp2

0x90ca,	// (0x0003f375) list_single_graphic_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_graphic_pane_cp2

0x90ca,	// (0x0003f375) list_single_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_heading_pane_cp2

0xc45c,	// (0x00042707) list_single_large_graphic_pane_cp2_ParamLimits

0xc45c,	// (0x00042707) list_single_large_graphic_pane_cp2

0x90ca,	// (0x0003f375) list_single_number_heading_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_number_heading_pane_cp2

0x90ca,	// (0x0003f375) list_single_number_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_number_pane_cp2

0x90ca,	// (0x0003f375) list_single_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_pane_cp2

0xc476,	// (0x00042721) bg_popup_sub_pane_cp22

0x1e63,	// (0x0003810e) popup_side_volume_key_window_g1

0x1e8d,	// (0x00038138) popup_side_volume_key_window_t1

0x1ea9,	// (0x00038154) volume_small_pane_cp1

0xb465,	// (0x00041710) bg_popup_sub_pane_cp24_ParamLimits

0xb465,	// (0x00041710) bg_popup_sub_pane_cp24

0xc48c,	// (0x00042737) fep_china_uni_candidate_pane_ParamLimits

0xc48c,	// (0x00042737) fep_china_uni_candidate_pane

0xc4a0,	// (0x0004274b) fep_china_uni_entry_pane

0xc4b0,	// (0x0004275b) popup_fep_china_uni_window_g1

0xc4cc,	// (0x00042777) fep_china_uni_entry_pane_g1

0xc4d4,	// (0x0004277f) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x000459ea) fep_china_uni_entry_pane_g

0xc4dc,	// (0x00042787) fep_entry_item_pane

0xc4e6,	// (0x00042791) fep_candidate_item_pane

0xc4ee,	// (0x00042799) fep_china_uni_candidate_pane_g1

0xc4f6,	// (0x000427a1) fep_china_uni_candidate_pane_g2

0xc4fe,	// (0x000427a9) fep_china_uni_candidate_pane_g3

0xc506,	// (0x000427b1) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x000459ef) fep_china_uni_candidate_pane_g

0xb40d,	// (0x000416b8) fep_entry_item_pane_g1

0xc50e,	// (0x000427b9) fep_entry_item_pane_t1_ParamLimits

0xc50e,	// (0x000427b9) fep_entry_item_pane_t1

0xc524,	// (0x000427cf) fep_candidate_item_pane_t1_ParamLimits

0xc524,	// (0x000427cf) fep_candidate_item_pane_t1

0xc539,	// (0x000427e4) fep_candidate_item_pane_t2_ParamLimits

0xc539,	// (0x000427e4) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x000459f8) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x000459f8) fep_candidate_item_pane_t

0xb473,	// (0x0004171e) list_highlight_pane_cp31_ParamLimits

0xb473,	// (0x0004171e) list_highlight_pane_cp31

0xc54b,	// (0x000427f6) level_1_signal_lsc

0xc554,	// (0x000427ff) level_2_signal_lsc

0xc55d,	// (0x00042808) level_3_signal_lsc

0xc566,	// (0x00042811) level_4_signal_lsc

0xc56f,	// (0x0004281a) level_5_signal_lsc

0xc578,	// (0x00042823) level_6_signal_lsc

0xc581,	// (0x0004282c) level_7_signal_lsc

0xc581,	// (0x0004282c) level_1_battery_lsc

0xc58a,	// (0x00042835) level_2_battery_lsc

0xc593,	// (0x0004283e) level_3_battery_lsc

0xc59c,	// (0x00042847) level_4_battery_lsc

0xc5a5,	// (0x00042850) level_5_battery_lsc

0xc5ae,	// (0x00042859) level_6_battery_lsc

0xc54b,	// (0x000427f6) level_7_battery_lsc

0xc5b7,	// (0x00042862) scroll_handle_focus_pane_g1

0xc5c0,	// (0x0004286b) scroll_handle_focus_pane_g2

0xc5c9,	// (0x00042874) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x000459fd) scroll_handle_focus_pane_g

0x7fa6,	// (0x0003e251) list_single_2graphic_pane_g1_ParamLimits

0x7fa6,	// (0x0003e251) list_single_2graphic_pane_g1

0x8337,	// (0x0003e5e2) list_single_2graphic_pane_g2_ParamLimits

0x8337,	// (0x0003e5e2) list_single_2graphic_pane_g2

0x19e9,	// (0x00037c94) list_single_2graphic_pane_g3_ParamLimits

0x19e9,	// (0x00037c94) list_single_2graphic_pane_g3

0x83a9,	// (0x0003e654) list_single_2graphic_pane_g4_ParamLimits

0x83a9,	// (0x0003e654) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00045a04) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00045a04) list_single_2graphic_pane_g

0x7fb2,	// (0x0003e25d) list_single_2graphic_pane_t1_ParamLimits

0x7fb2,	// (0x0003e25d) list_single_2graphic_pane_t1

0x83b5,	// (0x0003e660) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x83b5,	// (0x0003e660) list_double2_graphic_large_graphic_pane_g1

0x838f,	// (0x0003e63a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x838f,	// (0x0003e63a) list_double2_graphic_large_graphic_pane_g2

0x8377,	// (0x0003e622) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8377,	// (0x0003e622) list_double2_graphic_large_graphic_pane_g3

0x83c7,	// (0x0003e672) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x83c7,	// (0x0003e672) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00045a0d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00045a0d) list_double2_graphic_large_graphic_pane_g

0x7fe0,	// (0x0003e28b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7fe0,	// (0x0003e28b) list_double2_graphic_large_graphic_pane_t1

0x7ff6,	// (0x0003e2a1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7ff6,	// (0x0003e2a1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00045a16) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00045a16) list_double2_graphic_large_graphic_pane_t

0xc6aa,	// (0x00042955) popup_fast_swap_window_ParamLimits

0xc6aa,	// (0x00042955) popup_fast_swap_window

0xc6c6,	// (0x00042971) popup_side_volume_key_window

0xc6e0,	// (0x0004298b) stacon_top_pane

0xc6ea,	// (0x00042995) status_pane_ParamLimits

0xc6ea,	// (0x00042995) status_pane

0xc6e0,	// (0x0004298b) status_small_pane

0xb417,	// (0x000416c2) control_pane

0xb417,	// (0x000416c2) stacon_bottom_pane

0xbed1,	// (0x0004217c) scroll_pane_cp121

0xbec8,	// (0x00042173) set_content_pane

0x9154,	// (0x0003f3ff) bg_active_tab_pane_g1_cp1

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp1

0x915d,	// (0x0003f408) bg_active_tab_pane_g3_cp1

0x9154,	// (0x0003f3ff) bg_passive_tab_pane_g1_cp1

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp1

0x915d,	// (0x0003f408) bg_passive_tab_pane_g3_cp1

0x9166,	// (0x0003f411) bg_active_tab_pane_g1_cp2

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp2

0x916f,	// (0x0003f41a) bg_active_tab_pane_g3_cp2

0x9166,	// (0x0003f411) bg_passive_tab_pane_g1_cp2

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp2

0x916f,	// (0x0003f41a) bg_passive_tab_pane_g3_cp2

0x9178,	// (0x0003f423) bg_active_tab_pane_g1_cp3

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp3

0x9181,	// (0x0003f42c) bg_active_tab_pane_g3_cp3

0x9178,	// (0x0003f423) bg_passive_tab_pane_g1_cp3

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp3

0x9181,	// (0x0003f42c) bg_passive_tab_pane_g3_cp3

0x918a,	// (0x0003f435) bg_active_tab_pane_g1_cp4

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp4

0x9193,	// (0x0003f43e) bg_active_tab_pane_g3_cp4

0x918a,	// (0x0003f435) bg_passive_tab_pane_g1_cp4

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp4

0x9193,	// (0x0003f43e) bg_passive_tab_pane_g3_cp4

0xc619,	// (0x000428c4) bg_active_tab_pane_g1_cp5

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp5

0xc622,	// (0x000428cd) bg_active_tab_pane_g3_cp5

0xc619,	// (0x000428c4) bg_passive_tab_pane_g1_cp5

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp5

0xc622,	// (0x000428cd) bg_passive_tab_pane_g3_cp5

0x6575,	// (0x0003c820) list_set_graphic_pane_ParamLimits

0x6575,	// (0x0003c820) list_set_graphic_pane

0xb417,	// (0x000416c2) bg_set_opt_pane_cp4

0xc62b,	// (0x000428d6) list_set_graphic_pane_g1_ParamLimits

0xc62b,	// (0x000428d6) list_set_graphic_pane_g1

0xc637,	// (0x000428e2) list_set_graphic_pane_g2_ParamLimits

0xc637,	// (0x000428e2) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00045a1b) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00045a1b) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x00045d78) volume_small_pane_cp_g

0xc65b,	// (0x00042906) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc65b,	// (0x00042906) list_double2_large_graphic_pane_g1_cp2

0xc669,	// (0x00042914) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc669,	// (0x00042914) list_double2_large_graphic_pane_g2_cp2

0xc67a,	// (0x00042925) list_double2_large_graphic_pane_g3_cp2

0xc682,	// (0x0004292d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc682,	// (0x0004292d) list_double2_large_graphic_pane_t1_cp2

0xc698,	// (0x00042943) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc698,	// (0x00042943) list_double2_large_graphic_pane_t2_cp2

0xdd7d,	// (0x00044028) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd7d,	// (0x00044028) list_double_large_graphic_pane_g1_cp2

0xdd90,	// (0x0004403b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd90,	// (0x0004403b) list_double_large_graphic_pane_g2_cp2

0xc808,	// (0x00042ab3) list_double_large_graphic_pane_g3_cp2

0xdda1,	// (0x0004404c) list_double_large_graphic_pane_g4_cp

0xdda9,	// (0x00044054) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdda9,	// (0x00044054) list_double_large_graphic_pane_t1_cp2

0xddc0,	// (0x0004406b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xddc0,	// (0x0004406b) list_double_large_graphic_pane_t2_cp2

0xc6f8,	// (0x000429a3) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc6f8,	// (0x000429a3) list_double2_graphic_pane_g1_cp2

0xc706,	// (0x000429b1) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc706,	// (0x000429b1) list_double2_graphic_pane_g2_cp2

0xc717,	// (0x000429c2) list_double2_graphic_pane_g3_cp2

0xc721,	// (0x000429cc) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc721,	// (0x000429cc) list_double2_graphic_pane_t1_cp2

0xc737,	// (0x000429e2) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc737,	// (0x000429e2) list_double2_graphic_pane_t2_cp2

0xc749,	// (0x000429f4) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc749,	// (0x000429f4) list_single_number_heading_pane_g1_cp2

0xc755,	// (0x00042a00) list_single_number_heading_pane_g2_cp2

0xc75d,	// (0x00042a08) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc75d,	// (0x00042a08) list_single_number_heading_pane_t1_cp2

0xc773,	// (0x00042a1e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc773,	// (0x00042a1e) list_single_number_heading_pane_t2_cp2

0xc787,	// (0x00042a32) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc787,	// (0x00042a32) list_single_number_heading_pane_t3_cp2

0xc749,	// (0x000429f4) list_single_heading_pane_g1_cp2_ParamLimits

0xc749,	// (0x000429f4) list_single_heading_pane_g1_cp2

0xc755,	// (0x00042a00) list_single_heading_pane_g2_cp2

0xc75d,	// (0x00042a08) list_single_heading_pane_t1_cp2_ParamLimits

0xc75d,	// (0x00042a08) list_single_heading_pane_t1_cp2

0xdb85,	// (0x00043e30) list_single_heading_pane_t2_cp2_ParamLimits

0xdb85,	// (0x00043e30) list_single_heading_pane_t2_cp2

0xdb1f,	// (0x00043dca) list_double_graphic_pane_g1_cp2_ParamLimits

0xdb1f,	// (0x00043dca) list_double_graphic_pane_g1_cp2

0xdb2b,	// (0x00043dd6) list_double_graphic_pane_g2_cp2_ParamLimits

0xdb2b,	// (0x00043dd6) list_double_graphic_pane_g2_cp2

0xdb3a,	// (0x00043de5) list_double_graphic_pane_g3_cp2

0xdb42,	// (0x00043ded) list_double_graphic_pane_t1_cp2_ParamLimits

0xdb42,	// (0x00043ded) list_double_graphic_pane_t1_cp2

0xdb58,	// (0x00043e03) list_double_graphic_pane_t2_cp2_ParamLimits

0xdb58,	// (0x00043e03) list_double_graphic_pane_t2_cp2

0xc7fc,	// (0x00042aa7) list_double_number_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00042aa7) list_double_number_pane_g1_cp2

0xc808,	// (0x00042ab3) list_double_number_pane_g2_cp2

0xdae3,	// (0x00043d8e) list_double_number_pane_t1_cp2_ParamLimits

0xdae3,	// (0x00043d8e) list_double_number_pane_t1_cp2

0xdaf7,	// (0x00043da2) list_double_number_pane_t2_cp2_ParamLimits

0xdaf7,	// (0x00043da2) list_double_number_pane_t2_cp2

0xdb0d,	// (0x00043db8) list_double_number_pane_t3_cp2_ParamLimits

0xdb0d,	// (0x00043db8) list_double_number_pane_t3_cp2

0xda5a,	// (0x00043d05) list_single_graphic_pane_g1_cp2_ParamLimits

0xda5a,	// (0x00043d05) list_single_graphic_pane_g1_cp2

0xc860,	// (0x00042b0b) list_single_graphic_pane_g2_cp2_ParamLimits

0xc860,	// (0x00042b0b) list_single_graphic_pane_g2_cp2

0xc86c,	// (0x00042b17) list_single_graphic_pane_g3_cp2

0xda30,	// (0x00043cdb) list_single_graphic_pane_t1_cp2_ParamLimits

0xda30,	// (0x00043cdb) list_single_graphic_pane_t1_cp2

0xc860,	// (0x00042b0b) list_single_number_pane_g1_cp2_ParamLimits

0xc860,	// (0x00042b0b) list_single_number_pane_g1_cp2

0xc86c,	// (0x00042b17) list_single_number_pane_g2_cp2

0xda30,	// (0x00043cdb) list_single_number_pane_t1_cp2_ParamLimits

0xda30,	// (0x00043cdb) list_single_number_pane_t1_cp2

0xda46,	// (0x00043cf1) list_single_number_pane_t2_cp2_ParamLimits

0xda46,	// (0x00043cf1) list_single_number_pane_t2_cp2

0xc669,	// (0x00042914) list_double2_pane_g1_cp2_ParamLimits

0xc669,	// (0x00042914) list_double2_pane_g1_cp2

0xc67a,	// (0x00042925) list_double2_pane_g2_cp2

0xc7d4,	// (0x00042a7f) list_double2_pane_t1_cp2_ParamLimits

0xc7d4,	// (0x00042a7f) list_double2_pane_t1_cp2

0xc7ea,	// (0x00042a95) list_double2_pane_t2_cp2_ParamLimits

0xc7ea,	// (0x00042a95) list_double2_pane_t2_cp2

0xc7fc,	// (0x00042aa7) list_double_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00042aa7) list_double_pane_g1_cp2

0xc808,	// (0x00042ab3) list_double_pane_g2_cp2

0xc810,	// (0x00042abb) list_double_pane_t1_cp2_ParamLimits

0xc810,	// (0x00042abb) list_double_pane_t1_cp2

0xc826,	// (0x00042ad1) list_double_pane_t2_cp2_ParamLimits

0xc826,	// (0x00042ad1) list_double_pane_t2_cp2

0xc850,	// (0x00042afb) list_single_pane_cp2_g3

0xc860,	// (0x00042b0b) list_single_pane_g1_cp2_ParamLimits

0xc860,	// (0x00042b0b) list_single_pane_g1_cp2

0xc86c,	// (0x00042b17) list_single_pane_g2_cp2

0xc874,	// (0x00042b1f) list_single_pane_t1_cp2_ParamLimits

0xc874,	// (0x00042b1f) list_single_pane_t1_cp2

0xc88c,	// (0x00042b37) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc88c,	// (0x00042b37) list_single_large_graphic_pane_g1_cp2

0xc89a,	// (0x00042b45) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc89a,	// (0x00042b45) list_single_large_graphic_pane_g2_cp2

0xc8a6,	// (0x00042b51) list_single_large_graphic_pane_g3_cp2

0xc8ae,	// (0x00042b59) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc8ae,	// (0x00042b59) list_single_large_graphic_pane_g4_cp1

0xc8c8,	// (0x00042b73) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc8c8,	// (0x00042b73) list_single_large_graphic_pane_t1_cp2

0xd9fa,	// (0x00043ca5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd9fa,	// (0x00043ca5) list_single_graphic_heading_pane_g1_cp2

0xd9c7,	// (0x00043c72) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9c7,	// (0x00043c72) list_single_graphic_heading_pane_g4_cp2

0xc86c,	// (0x00042b17) list_single_graphic_heading_pane_g5_cp2

0xda06,	// (0x00043cb1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda06,	// (0x00043cb1) list_single_graphic_heading_pane_t1_cp2

0xda1c,	// (0x00043cc7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda1c,	// (0x00043cc7) list_single_graphic_heading_pane_t2_cp2

0xd9bb,	// (0x00043c66) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd9bb,	// (0x00043c66) list_single_2graphic_pane_g1_cp2

0xd9c7,	// (0x00043c72) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9c7,	// (0x00043c72) list_single_2graphic_pane_g2_cp2

0xc86c,	// (0x00042b17) list_single_2graphic_pane_g3_cp2

0xd9d8,	// (0x00043c83) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd9d8,	// (0x00043c83) list_single_2graphic_pane_g4_cp2

0xd9e4,	// (0x00043c8f) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd9e4,	// (0x00043c8f) list_single_2graphic_pane_t1_cp2

0xb40d,	// (0x000416b8) list_highlight_pane_g10_cp1

0xd5a3,	// (0x0004384e) list_highlight_pane_g1_cp1

0xd5ab,	// (0x00043856) list_highlight_pane_g2_cp1

0xd5b3,	// (0x0004385e) list_highlight_pane_g3_cp1

0xd5bb,	// (0x00043866) list_highlight_pane_g4_cp1

0xd5c3,	// (0x0004386e) list_highlight_pane_g5_cp1

0xd5cb,	// (0x00043876) list_highlight_pane_g6_cp1

0xd5d3,	// (0x0004387e) list_highlight_pane_g7_cp1

0xd5db,	// (0x00043886) list_highlight_pane_g8_cp1

0xd5e3,	// (0x0004388e) list_highlight_pane_g9_cp1

0x9de1,	// (0x0004008c) form_field_slider_pane_t3

0x9df1,	// (0x0004009c) form_field_slider_pane_t4

0xd4d7,	// (0x00043782) slider_form_pane_ParamLimits

0xd4d7,	// (0x00043782) slider_form_pane

0xb417,	// (0x000416c2) control_abbreviations

0xb417,	// (0x000416c2) control_conventions

0xb417,	// (0x000416c2) control_definitions

0xb417,	// (0x000416c2) format_table_attribute

0xdbd1,	// (0x00043e7c) bg_popup_preview_window_pane_g9

0xb417,	// (0x000416c2) format_table_data2

0xb417,	// (0x000416c2) format_table_data3

0xb417,	// (0x000416c2) format_table_data_example

0x0008,

0xb417,	// (0x000416c2) intro_purpose

0xf900,	// (0x00045bab) bg_popup_preview_window_pane_g

0xb417,	// (0x000416c2) texts_category

0xb417,	// (0x000416c2) texts_graphics

0xc8de,	// (0x00042b89) text_digital

0xc8ed,	// (0x00042b98) text_primary

0xc8fc,	// (0x00042ba7) text_primary_small

0xc90b,	// (0x00042bb6) text_secondary

0xc91a,	// (0x00042bc5) text_title

0xe05b,	// (0x00044306) bg_passive_tab_pane_g1_cp3_srt

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp3_srt

0xe064,	// (0x0004430f) bg_passive_tab_pane_g3_cp3_srt

0xb465,	// (0x00041710) bg_active_tab_pane_cp3_srt_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp3_srt

0xe06d,	// (0x00044318) tabs_4_active_pane_srt_g1

0xa19e,	// (0x00040449) tabs_4_active_pane_srt_t1_ParamLimits

0xa19e,	// (0x00040449) tabs_4_active_pane_srt_t1

0xe05b,	// (0x00044306) bg_active_tab_pane_g1_cp3_copy1

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp3_copy1

0xe064,	// (0x0004430f) bg_active_tab_pane_g3_cp3_copy1

0xb473,	// (0x0004171e) tabs_2_long_active_pane_srt_ParamLimits

0xb473,	// (0x0004171e) tabs_2_long_active_pane_srt

0xb473,	// (0x0004171e) tabs_2_long_passive_pane_srt_ParamLimits

0xb473,	// (0x0004171e) tabs_2_long_passive_pane_srt

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp4_srt

0xdf86,	// (0x00044231) bg_passive_tab_pane_g1_cp4_srt

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp4_srt

0xdf8f,	// (0x0004423a) bg_passive_tab_pane_g3_cp4_srt

0xb473,	// (0x0004171e) bg_active_tab_pane_cp4_srt_ParamLimits

0xb473,	// (0x0004171e) bg_active_tab_pane_cp4_srt

0x9fbd,	// (0x00040268) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9fbd,	// (0x00040268) tabs_2_long_active_pane_srt_t1

0xdf86,	// (0x00044231) bg_active_tab_pane_g1_cp4_srt

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp4_srt

0xdf8f,	// (0x0004423a) bg_active_tab_pane_g3_cp4_srt

0xb465,	// (0x00041710) tabs_3_long_active_pane_srt_ParamLimits

0xb465,	// (0x00041710) tabs_3_long_active_pane_srt

0xb465,	// (0x00041710) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb465,	// (0x00041710) tabs_3_long_passive_pane_cp_srt

0xb465,	// (0x00041710) tabs_3_long_passive_pane_srt_ParamLimits

0xb465,	// (0x00041710) tabs_3_long_passive_pane_srt

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp5_srt

0xc619,	// (0x000428c4) bg_passive_tab_pane_g1_cp5_srt

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp5_srt

0xc622,	// (0x000428cd) bg_passive_tab_pane_g3_cp5_srt

0xb473,	// (0x0004171e) bg_active_tab_pane_cp5_srt_ParamLimits

0xb473,	// (0x0004171e) bg_active_tab_pane_cp5_srt

0x9fa7,	// (0x00040252) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9fa7,	// (0x00040252) tabs_3_long_active_pane_srt_t1

0xc619,	// (0x000428c4) bg_active_tab_pane_g1_cp5_srt

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp5_srt

0xc622,	// (0x000428cd) bg_active_tab_pane_g3_cp5_srt

0xdf78,	// (0x00044223) navi_text_pane_srt_t1

0xdf70,	// (0x0004421b) navi_icon_pane_srt_g1

0xca18,	// (0x00042cc3) midp_editing_number_pane_srt

0xc929,	// (0x00042bd4) midp_ticker_pane_srt

0xca20,	// (0x00042ccb) midp_ticker_pane_srt_g1

0xca28,	// (0x00042cd3) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00045a3a) midp_ticker_pane_srt_g

0xca30,	// (0x00042cdb) midp_ticker_pane_srt_t1

0xdf61,	// (0x0004420c) midp_editing_number_pane_t1_copy1

0x919c,	// (0x0003f447) listscroll_midp_pane

0x919c,	// (0x0003f447) midp_form_pane

0xc931,	// (0x00042bdc) midp_info_popup_window_ParamLimits

0xc931,	// (0x00042bdc) midp_info_popup_window

0xbf9a,	// (0x00042245) bg_popup_sub_pane_cp50_ParamLimits

0xbf9a,	// (0x00042245) bg_popup_sub_pane_cp50

0xd1f4,	// (0x0004349f) listscroll_midp_info_pane_ParamLimits

0xd1f4,	// (0x0004349f) listscroll_midp_info_pane

0xd1dc,	// (0x00043487) listscroll_form_midp_pane_ParamLimits

0xd1dc,	// (0x00043487) listscroll_form_midp_pane

0xd1e8,	// (0x00043493) scroll_bar_cp050

0x9dd5,	// (0x00040080) list_midp_pane

0xe93b,	// (0x00044be6) signal_pane_g2_cp

0xd10e,	// (0x000433b9) listscroll_midp_info_pane_t1_ParamLimits

0xd10e,	// (0x000433b9) listscroll_midp_info_pane_t1

0xd126,	// (0x000433d1) listscroll_midp_info_pane_t2_ParamLimits

0xd126,	// (0x000433d1) listscroll_midp_info_pane_t2

0xd164,	// (0x0004340f) listscroll_midp_info_pane_t3_ParamLimits

0xd164,	// (0x0004340f) listscroll_midp_info_pane_t3

0xd19e,	// (0x00043449) listscroll_midp_info_pane_t4_ParamLimits

0xd19e,	// (0x00043449) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00045ae6) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00045ae6) listscroll_midp_info_pane_t

0xc001,	// (0x000422ac) scroll_pane_cp21

0xd0b2,	// (0x0004335d) form_midp_field_choice_group_pane

0xd0bb,	// (0x00043366) form_midp_field_text_pane

0xd0f4,	// (0x0004339f) form_midp_field_time_pane

0xd0fc,	// (0x000433a7) form_midp_gauge_slider_pane

0xd105,	// (0x000433b0) form_midp_gauge_wait_pane

0xb417,	// (0x000416c2) form_midp_image_pane

0x8008,	// (0x0003e2b3) list_single_midp_pane_ParamLimits

0x8008,	// (0x0003e2b3) list_single_midp_pane

0x9db1,	// (0x0004005c) form_midp_field_text_pane_t1

0xcf59,	// (0x00043204) input_focus_pane_cp050

0xd0a1,	// (0x0004334c) list_midp_form_text_pane

0xd070,	// (0x0004331b) form_midp_field_choice_group_pane_t1

0xd07e,	// (0x00043329) input_focus_pane_cp051

0xd092,	// (0x0004333d) list_midp_choice_pane

0xb417,	// (0x000416c2) status_idle_pane

0xd054,	// (0x000432ff) form_midp_field_time_pane_t1

0xb40d,	// (0x000416b8) wait_anim_pane_g2_copy1

0xd062,	// (0x0004330d) form_midp_field_time_pane_t2

0x0001,

0xc98a,	// (0x00042c35) aid_navinavi_width_2_pane

0xf836,	// (0x00045ae1) form_midp_field_time_pane_t

0xb417,	// (0x000416c2) input_focus_pane_cp052

0xb417,	// (0x000416c2) bg_input_focus_pane_cp040

0xd030,	// (0x000432db) form_midp_gauge_slider_pane_t1

0xd03e,	// (0x000432e9) form_midp_gauge_slider_pane_t2

0x9d95,	// (0x00040040) form_midp_gauge_slider_pane_t3

0x9da3,	// (0x0004004e) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00045ad8) form_midp_gauge_slider_pane_t

0xd04c,	// (0x000432f7) form_midp_slider_pane

0xb473,	// (0x0004171e) bg_input_focus_pane_cp041_ParamLimits

0xb473,	// (0x0004171e) bg_input_focus_pane_cp041

0xcffd,	// (0x000432a8) form_midp_gauge_wait_pane_t1_ParamLimits

0xcffd,	// (0x000432a8) form_midp_gauge_wait_pane_t1

0xd00f,	// (0x000432ba) form_midp_gauge_wait_pane_t2_ParamLimits

0xd00f,	// (0x000432ba) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00045ad3) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00045ad3) form_midp_gauge_wait_pane_t

0xd021,	// (0x000432cc) form_midp_wait_pane_ParamLimits

0xd021,	// (0x000432cc) form_midp_wait_pane

0xcfc7,	// (0x00043272) form_midp_image_pane_g1

0xcfd0,	// (0x0004327b) form_midp_image_pane_t1

0xcfdf,	// (0x0004328a) form_midp_image_pane_t2

0xcfee,	// (0x00043299) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00045acc) form_midp_image_pane_t

0xcfbe,	// (0x00043269) list_single_midp_pane_g1

0x0cb0,	// (0x00036f5b) list_single_midp_pane_t1

0x9d7e,	// (0x00040029) list_midp_form_item_pane_ParamLimits

0x9d7e,	// (0x00040029) list_midp_form_item_pane

0xc944,	// (0x00042bef) list_midp_form_item_pane_t1

0xc953,	// (0x00042bfe) midp_ticker_pane_g1

0xc95f,	// (0x00042c0a) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00045a20) midp_ticker_pane_g

0x9248,	// (0x0003f4f3) midp_ticker_pane_t1

0xa126,	// (0x000403d1) midp_editing_number_pane_t1

0xdfef,	// (0x0004429a) midp_editing_number_pane

0xdffe,	// (0x000442a9) midp_ticker_pane

0xdf51,	// (0x000441fc) ai_message_heading_pane

0xb417,	// (0x000416c2) bg_popup_window_pane_cp14

0xdf59,	// (0x00044204) listscroll_ai_message_pane

0xdedb,	// (0x00044186) ai_message_heading_pane_g1_ParamLimits

0xdedb,	// (0x00044186) ai_message_heading_pane_g1

0xdee7,	// (0x00044192) ai_message_heading_pane_g2_ParamLimits

0xdee7,	// (0x00044192) ai_message_heading_pane_g2

0xdef3,	// (0x0004419e) ai_message_heading_pane_g3_ParamLimits

0xdef3,	// (0x0004419e) ai_message_heading_pane_g3

0xdeff,	// (0x000441aa) ai_message_heading_pane_g4_ParamLimits

0xdeff,	// (0x000441aa) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00045c03) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00045c03) ai_message_heading_pane_g

0xdf0b,	// (0x000441b6) ai_message_heading_pane_t1_ParamLimits

0xdf0b,	// (0x000441b6) ai_message_heading_pane_t1

0xdf25,	// (0x000441d0) ai_message_heading_pane_t2_ParamLimits

0xdf25,	// (0x000441d0) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00045c0c) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00045c0c) ai_message_heading_pane_t

0xdf37,	// (0x000441e2) bg_popup_heading_pane_cp1_ParamLimits

0xdf37,	// (0x000441e2) bg_popup_heading_pane_cp1

0xdec9,	// (0x00044174) list_ai_message_pane_ParamLimits

0xdec9,	// (0x00044174) list_ai_message_pane

0xc001,	// (0x000422ac) scroll_pane_cp10

0xde65,	// (0x00044110) list_ai_message_pane_g1

0xde6d,	// (0x00044118) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00045be0) list_ai_message_pane_g

0xde75,	// (0x00044120) list_ai_message_pane_t1_ParamLimits

0xde75,	// (0x00044120) list_ai_message_pane_t1

0xde8a,	// (0x00044135) list_ai_message_pane_t2_ParamLimits

0xde8a,	// (0x00044135) list_ai_message_pane_t2

0xde9f,	// (0x0004414a) list_ai_message_pane_t3_ParamLimits

0xde9f,	// (0x0004414a) list_ai_message_pane_t3

0xdeb4,	// (0x0004415f) list_ai_message_pane_t4_ParamLimits

0xdeb4,	// (0x0004415f) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x00045be5) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x00045be5) list_ai_message_pane_t

0x9f82,	// (0x0004022d) cell_ai_soft_ind_pane_ParamLimits

0x9f82,	// (0x0004022d) cell_ai_soft_ind_pane

0xc96b,	// (0x00042c16) cell_ai_soft_ind_pane_g1_ParamLimits

0xc96b,	// (0x00042c16) cell_ai_soft_ind_pane_g1

0xb417,	// (0x000416c2) grid_highlight_cp1

0xc978,	// (0x00042c23) text_secondary_cp56_ParamLimits

0xc978,	// (0x00042c23) text_secondary_cp56

0xde3a,	// (0x000440e5) example_general_pane_ParamLimits

0xde3a,	// (0x000440e5) example_general_pane

0xde46,	// (0x000440f1) example_parent_pane_g1_ParamLimits

0xde46,	// (0x000440f1) example_parent_pane_g1

0xde52,	// (0x000440fd) example_parent_pane_t1_ParamLimits

0xde52,	// (0x000440fd) example_parent_pane_t1

0x9651,	// (0x0003f8fc) popup_preview_text_window_ParamLimits

0x9651,	// (0x0003f8fc) popup_preview_text_window

0xc858,	// (0x00042b03) list_single_pane_cp2_g4

0xb848,	// (0x00041af3) bg_popup_preview_window_pane_ParamLimits

0xb848,	// (0x00041af3) bg_popup_preview_window_pane

0xdbd9,	// (0x00043e84) popup_preview_text_window_t1_ParamLimits

0xdbd9,	// (0x00043e84) popup_preview_text_window_t1

0xdbf7,	// (0x00043ea2) popup_preview_text_window_t2_ParamLimits

0xdbf7,	// (0x00043ea2) popup_preview_text_window_t2

0xdc40,	// (0x00043eeb) popup_preview_text_window_t3_ParamLimits

0xdc40,	// (0x00043eeb) popup_preview_text_window_t3

0xdc85,	// (0x00043f30) popup_preview_text_window_t4_ParamLimits

0xdc85,	// (0x00043f30) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00045bbe) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00045bbe) popup_preview_text_window_t

0xdd03,	// (0x00043fae) scroll_pane_cp11

0xce69,	// (0x00043114) bg_popup_preview_window_pane_g1

0xdb99,	// (0x00043e44) bg_popup_preview_window_pane_g2

0xdba1,	// (0x00043e4c) bg_popup_preview_window_pane_g3

0xdba9,	// (0x00043e54) bg_popup_preview_window_pane_g4

0xdbb1,	// (0x00043e5c) bg_popup_preview_window_pane_g5

0xdbb9,	// (0x00043e64) bg_popup_preview_window_pane_g6

0xdbc1,	// (0x00043e6c) bg_popup_preview_window_pane_g7

0xdbc9,	// (0x00043e74) bg_popup_preview_window_pane_g8

0x12dd,	// (0x00037588) aid_popup_width_pane

0x95cd,	// (0x0003f878) popup_midp_note_alarm_window_ParamLimits

0x95cd,	// (0x0003f878) popup_midp_note_alarm_window

0xbee2,	// (0x0004218d) data_form_pane_ParamLimits

0x7e97,	// (0x0003e142) form_field_data_pane_g1

0x7ea1,	// (0x0003e14c) form_field_data_pane_t1_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_ParamLimits

0xbefc,	// (0x000421a7) data_form_wide_pane_ParamLimits

0x09e9,	// (0x00036c94) form_field_data_wide_pane_g1

0x09f5,	// (0x00036ca0) form_field_data_wide_pane_t1_ParamLimits

0xbc5d,	// (0x00041f08) input_focus_pane_cp6_ParamLimits

0x8fb2,	// (0x0003f25d) input_popup_find_pane_g1_ParamLimits

0x8fb2,	// (0x0003f25d) input_popup_find_pane_g1

0x1c28,	// (0x00037ed3) aid_navi_side_left_pane

0x1c3d,	// (0x00037ee8) aid_navi_side_right_pane

0xd680,	// (0x0004392b) bg_popup_window_pane_cp30_ParamLimits

0xd680,	// (0x0004392b) bg_popup_window_pane_cp30

0xd6fa,	// (0x000439a5) popup_midp_note_alarm_window_g1_ParamLimits

0xd6fa,	// (0x000439a5) popup_midp_note_alarm_window_g1

0xd72a,	// (0x000439d5) popup_midp_note_alarm_window_t1_ParamLimits

0xd72a,	// (0x000439d5) popup_midp_note_alarm_window_t1

0xd7cb,	// (0x00043a76) popup_midp_note_alarm_window_t2_ParamLimits

0xd7cb,	// (0x00043a76) popup_midp_note_alarm_window_t2

0xd879,	// (0x00043b24) popup_midp_note_alarm_window_t3_ParamLimits

0xd879,	// (0x00043b24) popup_midp_note_alarm_window_t3

0xd8a1,	// (0x00043b4c) popup_midp_note_alarm_window_t4_ParamLimits

0xd8a1,	// (0x00043b4c) popup_midp_note_alarm_window_t4

0xd8c1,	// (0x00043b6c) popup_midp_note_alarm_window_t5_ParamLimits

0xd8c1,	// (0x00043b6c) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00045b5b) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00045b5b) popup_midp_note_alarm_window_t

0xd98b,	// (0x00043c36) wait_bar_pane_cp1_ParamLimits

0xd98b,	// (0x00043c36) wait_bar_pane_cp1

0xb417,	// (0x000416c2) wait_anim_pane_copy1

0xb417,	// (0x000416c2) wait_border_pane_copy1

0xd398,	// (0x00043643) wait_border_pane_g1_copy1

0x0a0f,	// (0x00036cba) form_field_popup_pane_g1

0x7ebb,	// (0x0003e166) form_field_popup_pane_t1_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_cp7_ParamLimits

0xbf1c,	// (0x000421c7) list_form_pane_ParamLimits

0x0a31,	// (0x00036cdc) form_field_popup_wide_pane_g1

0x0a39,	// (0x00036ce4) form_field_popup_wide_pane_t1_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_cp8_ParamLimits

0xbf28,	// (0x000421d3) list_form_wide_pane_ParamLimits

0xe094,	// (0x0004433f) aid_size_cell_graphic_pane

0x7f3a,	// (0x0003e1e5) data_form_pane_t1_ParamLimits

0x8035,	// (0x0003e2e0) data_form_wide_pane_t1_ParamLimits

0x9a06,	// (0x0003fcb1) bg_status_flat_pane

0x8c4e,	// (0x0003eef9) title_pane_t1_ParamLimits

0xb42d,	// (0x000416d8) title_pane_t2_ParamLimits

0xb453,	// (0x000416fe) title_pane_t3_ParamLimits

0xf573,	// (0x0004581e) title_pane_t_ParamLimits

0xc3af,	// (0x0004265a) level_1_signal_ParamLimits

0xc3bc,	// (0x00042667) level_2_signal_ParamLimits

0xc3c9,	// (0x00042674) level_3_signal_ParamLimits

0xc3d6,	// (0x00042681) level_4_signal_ParamLimits

0xc3e3,	// (0x0004268e) level_5_signal_ParamLimits

0xc3f0,	// (0x0004269b) level_6_signal_ParamLimits

0xc3fd,	// (0x000426a8) level_7_signal_ParamLimits

0xc3af,	// (0x0004265a) level_1_battery_ParamLimits

0xc3bc,	// (0x00042667) level_2_battery_ParamLimits

0xc3c9,	// (0x00042674) level_3_battery_ParamLimits

0xc3d6,	// (0x00042681) level_4_battery_ParamLimits

0xc3e3,	// (0x0004268e) level_5_battery_ParamLimits

0xc3f0,	// (0x0004269b) level_6_battery_ParamLimits

0xc3fd,	// (0x000426a8) level_7_battery_ParamLimits

0xd5a3,	// (0x0004384e) bg_status_flat_pane_g1

0xd5ab,	// (0x00043856) bg_status_flat_pane_g2

0xd5b3,	// (0x0004385e) bg_status_flat_pane_g3

0xd5bb,	// (0x00043866) bg_status_flat_pane_g4

0xd5c3,	// (0x0004386e) bg_status_flat_pane_g5

0xd5cb,	// (0x00043876) bg_status_flat_pane_g6

0xd5d3,	// (0x0004387e) bg_status_flat_pane_g7

0x8ce2,	// (0x0003ef8d) tabs_3_active_pane_t1_ParamLimits

0x8ce2,	// (0x0003ef8d) tabs_3_passive_pane_t1_ParamLimits

0x8cfc,	// (0x0003efa7) tabs_4_active_pane_t1_ParamLimits

0x8cfc,	// (0x0003efa7) tabs_4_1_passive_pane_t1_ParamLimits

0x8fc8,	// (0x0003f273) tabs_2_active_pane_t1_ParamLimits

0x8fc8,	// (0x0003f273) tabs_2_passive_pane_t1_ParamLimits

0xb473,	// (0x0004171e) bg_active_tab_pane_cp4_ParamLimits

0x8fda,	// (0x0003f285) tabs_2_long_active_pane_t1_ParamLimits

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp4_ParamLimits

0x2488,	// (0x00038733) list_single_midp_graphic_pane_t1_ParamLimits

0xb473,	// (0x0004171e) bg_active_tab_pane_cp5_ParamLimits

0x8fed,	// (0x0003f298) tabs_3_long_active_pane_t1_ParamLimits

0xc039,	// (0x000422e4) bg_passive_tab_pane_cp5_ParamLimits

0x2488,	// (0x00038733) list_single_midp_graphic_pane_t1

0x9a06,	// (0x0003fcb1) bg_status_flat_pane_ParamLimits

0xcd2e,	// (0x00042fd9) indicator_pane_cp2_ParamLimits

0xcd2e,	// (0x00042fd9) indicator_pane_cp2

0x9b7d,	// (0x0003fe28) navi_pane_srt_ParamLimits

0x9b7d,	// (0x0003fe28) navi_pane_srt

0xcd56,	// (0x00043001) popup_clock_digital_analogue_window_cp1

0xb4b7,	// (0x00041762) indicator_pane_t1

0xc929,	// (0x00042bd4) copy_highlight_pane

0xc929,	// (0x00042bd4) cursor_graphics_pane

0xc929,	// (0x00042bd4) graphic_within_text_pane

0xc929,	// (0x00042bd4) link_highlight_pane

0xdcc6,	// (0x00043f71) popup_preview_text_window_t5_ParamLimits

0xdcc6,	// (0x00043f71) popup_preview_text_window_t5

0xc992,	// (0x00042c3d) cursor_digital_pane

0xc992,	// (0x00042c3d) cursor_primary_pane

0xc9a3,	// (0x00042c4e) cursor_primary_small_pane

0xc9ab,	// (0x00042c56) cursor_secondary_pane

0xc9b3,	// (0x00042c5e) cursor_title_pane

0xc992,	// (0x00042c3d) link_highlight_digital_pane

0xc99a,	// (0x00042c45) link_highlight_primary_pane

0xc9a3,	// (0x00042c4e) link_highlight_primary_small_pane

0xc9ab,	// (0x00042c56) link_highlight_secondary_pane

0xc9b3,	// (0x00042c5e) link_highlight_title_pane

0xc992,	// (0x00042c3d) copy_highlight_digital_pane

0xc992,	// (0x00042c3d) copy_highlight_primary_pane

0xc9a3,	// (0x00042c4e) copy_highlight_primary_small_pane

0xc9ab,	// (0x00042c56) copy_highlight_secondary_pane

0xc9b3,	// (0x00042c5e) copy_highlight_title_pane

0xc9ab,	// (0x00042c56) graphic_text_digital_pane

0xd623,	// (0x000438ce) graphic_text_primary_pane

0xd62c,	// (0x000438d7) graphic_text_primary_small_pane

0xc9a3,	// (0x00042c4e) graphic_text_secondary_pane

0xc992,	// (0x00042c3d) graphic_text_title_pane

0x925a,	// (0x0003f505) cursor_primary_pane_g1

0xd615,	// (0x000438c0) cursor_text_primary_t1

0x9e15,	// (0x000400c0) cursor_primary_small_pane_g1

0xd607,	// (0x000438b2) cursor_text_primary_small_t1

0x9e0b,	// (0x000400b6) cursor_primary_small_pane_g1_copy1

0xd5f9,	// (0x000438a4) cursor_text_primary_small_t1_copy1

0xd5eb,	// (0x00043896) cursor_text_title_t1

0x9e01,	// (0x000400ac) cursor_title_pane_g1

0x925a,	// (0x0003f505) cursor_digital_pane_g1

0xc9bb,	// (0x00042c66) cursor_text_digital_t1

0xd58c,	// (0x00043837) link_highlight_primary_pane_g1

0xd594,	// (0x0004383f) link_highlight_primary_pane_t1

0xc9c9,	// (0x00042c74) link_highlight_primary_small_pane_g1

0xc9d1,	// (0x00042c7c) link_highlight_primary_small_pane_t1

0xc9c9,	// (0x00042c74) link_highlight_secondary_pane_g1

0xc9e0,	// (0x00042c8b) link_highlight_secondary_pane_t1

0xd500,	// (0x000437ab) link_highlight_title_pane_g1

0xd508,	// (0x000437b3) link_highlight_title_pane_t1

0xd4e9,	// (0x00043794) link_highlight_digital_pane_g1

0xd4f1,	// (0x0004379c) link_highlight_digital_pane_t1

0xd3dd,	// (0x00043688) copy_highlight_primary_pane_g1

0xd3e5,	// (0x00043690) copy_highlight_primary_pane_t1

0xd3b7,	// (0x00043662) copy_highlight_primary_small_pane_g1

0xd3ce,	// (0x00043679) copy_highlight_primary_small_pane_t1

0xc9ef,	// (0x00042c9a) copy_highlight_secondary_pane_g1

0xc9f7,	// (0x00042ca2) copy_highlight_secondary_pane_t1

0xd3b7,	// (0x00043662) copy_highlight_title_pane_g1

0xd3bf,	// (0x0004366a) copy_highlight_title_pane_t1

0xd3dd,	// (0x00043688) copy_highlight_digital_pane_g1

0xe22a,	// (0x000444d5) copy_highlight_digital_pane_t1

0xe17e,	// (0x00044429) graphic_text_primary_pane_g1

0xe20e,	// (0x000444b9) graphic_text_primary_pane_t1

0xe21c,	// (0x000444c7) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00045c80) graphic_text_primary_pane_t

0xe1ea,	// (0x00044495) graphic_text_primary_small_pane_g1

0xe1f2,	// (0x0004449d) graphic_text_primary_small_pane_t1

0xe200,	// (0x000444ab) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00045c7b) graphic_text_primary_small_pane_t

0xe1c6,	// (0x00044471) graphic_text_secondary_pane_g1

0xe1ce,	// (0x00044479) graphic_text_secondary_pane_t1

0xe1dc,	// (0x00044487) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00045c76) graphic_text_secondary_pane_t

0xe1a2,	// (0x0004444d) graphic_text_title_pane_g1

0xe1aa,	// (0x00044455) graphic_text_title_pane_t1

0xe1b8,	// (0x00044463) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00045c71) graphic_text_title_pane_t

0xe17e,	// (0x00044429) graphic_text_digital_pane_g1

0xe186,	// (0x00044431) graphic_text_digital_pane_t1

0xe194,	// (0x0004443f) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00045c6c) graphic_text_digital_pane_t

0xb473,	// (0x0004171e) navi_icon_pane_srt_ParamLimits

0xb473,	// (0x0004171e) navi_icon_pane_srt

0xb417,	// (0x000416c2) navi_midp_pane_srt

0xb417,	// (0x000416c2) navi_navi_pane_srt

0xb473,	// (0x0004171e) navi_text_pane_srt_ParamLimits

0xb473,	// (0x0004171e) navi_text_pane_srt

0xe149,	// (0x000443f4) navi_navi_icon_text_pane_srt

0xe151,	// (0x000443fc) navi_navi_pane_srt_g1_ParamLimits

0xe151,	// (0x000443fc) navi_navi_pane_srt_g1

0xe163,	// (0x0004440e) navi_navi_pane_srt_g2_ParamLimits

0xe163,	// (0x0004440e) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00045c67) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00045c67) navi_navi_pane_srt_g

0xe175,	// (0x00044420) navi_navi_tabs_pane_srt

0xe149,	// (0x000443f4) navi_navi_text_pane_srt

0xe149,	// (0x000443f4) navi_navi_volume_pane_srt

0xe13a,	// (0x000443e5) navi_navi_text_pane_srt_t1

0x28be,	// (0x00038b69) navi_navi_volume_pane_srt_g1

0x28c6,	// (0x00038b71) volume_small_pane_srt_ParamLimits

0x28c6,	// (0x00038b71) volume_small_pane_srt

0x2149,	// (0x000383f4) volume_small_pane_srt_g1_ParamLimits

0x2149,	// (0x000383f4) volume_small_pane_srt_g1

0x2159,	// (0x00038404) volume_small_pane_srt_g2_ParamLimits

0x2159,	// (0x00038404) volume_small_pane_srt_g2

0x216a,	// (0x00038415) volume_small_pane_srt_g3_ParamLimits

0x216a,	// (0x00038415) volume_small_pane_srt_g3

0x217b,	// (0x00038426) volume_small_pane_srt_g4_ParamLimits

0x217b,	// (0x00038426) volume_small_pane_srt_g4

0x218c,	// (0x00038437) volume_small_pane_srt_g5_ParamLimits

0x218c,	// (0x00038437) volume_small_pane_srt_g5

0x219d,	// (0x00038448) volume_small_pane_srt_g6_ParamLimits

0x219d,	// (0x00038448) volume_small_pane_srt_g6

0x21ae,	// (0x00038459) volume_small_pane_srt_g7_ParamLimits

0x21ae,	// (0x00038459) volume_small_pane_srt_g7

0x21bf,	// (0x0003846a) volume_small_pane_srt_g8_ParamLimits

0x21bf,	// (0x0003846a) volume_small_pane_srt_g8

0x21d0,	// (0x0003847b) volume_small_pane_srt_g9_ParamLimits

0x21d0,	// (0x0003847b) volume_small_pane_srt_g9

0x21e1,	// (0x0003848c) volume_small_pane_srt_g10_ParamLimits

0x21e1,	// (0x0003848c) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00045a25) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00045a25) volume_small_pane_srt_g

0xb8f1,	// (0x00041b9c) query_popup_data_pane_cp2

0xe120,	// (0x000443cb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe120,	// (0x000443cb) navi_navi_icon_text_pane_srt_t1

0xd623,	// (0x000438ce) navi_tabs_2_long_pane_srt

0xd623,	// (0x000438ce) navi_tabs_2_pane_srt

0xd623,	// (0x000438ce) navi_tabs_3_long_pane_srt

0xd623,	// (0x000438ce) navi_tabs_3_pane_srt

0xd623,	// (0x000438ce) navi_tabs_4_pane_srt

0x289e,	// (0x00038b49) tabs_2_active_pane_srt_ParamLimits

0x289e,	// (0x00038b49) tabs_2_active_pane_srt

0x28ae,	// (0x00038b59) tabs_2_passive_pane_srt_ParamLimits

0x28ae,	// (0x00038b59) tabs_2_passive_pane_srt

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp1_srt

0xe0fe,	// (0x000443a9) bg_passive_tab_pane_g1_cp1_srt

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp1_srt

0xe107,	// (0x000443b2) bg_passive_tab_pane_g3_cp1_srt

0xb465,	// (0x00041710) bg_active_tab_pane_cp1_srt_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp1_srt

0xe110,	// (0x000443bb) tabs_2_active_pane_srt_g1

0xa21b,	// (0x000404c6) tabs_2_active_pane_srt_t1_ParamLimits

0xa21b,	// (0x000404c6) tabs_2_active_pane_srt_t1

0xe0fe,	// (0x000443a9) bg_active_tab_pane_g1_cp1_srt

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp1_srt

0xe107,	// (0x000443b2) bg_active_tab_pane_g3_cp1_srt

0x286b,	// (0x00038b16) tabs_3_active_pane_srt_ParamLimits

0x286b,	// (0x00038b16) tabs_3_active_pane_srt

0x287c,	// (0x00038b27) tabs_3_passive_pane_cp_srt_ParamLimits

0x287c,	// (0x00038b27) tabs_3_passive_pane_cp_srt

0x288d,	// (0x00038b38) tabs_3_passive_pane_srt_ParamLimits

0x288d,	// (0x00038b38) tabs_3_passive_pane_srt

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcf59,	// (0x00043204) bg_passive_tab_pane_cp2_srt

0xca06,	// (0x00042cb1) bg_passive_tab_pane_g1_cp2_srt

0xc5d2,	// (0x0004287d) bg_passive_tab_pane_g2_cp2_srt

0xca0f,	// (0x00042cba) bg_passive_tab_pane_g3_cp2_srt

0xb465,	// (0x00041710) bg_active_tab_pane_cp2_srt_ParamLimits

0xb465,	// (0x00041710) bg_active_tab_pane_cp2_srt

0xe0f6,	// (0x000443a1) tabs_3_active_pane_srt_g1

0xa205,	// (0x000404b0) tabs_3_active_pane_srt_t1_ParamLimits

0xa205,	// (0x000404b0) tabs_3_active_pane_srt_t1

0xca06,	// (0x00042cb1) bg_active_tab_pane_g1_cp2_srt

0xc5d2,	// (0x0004287d) bg_active_tab_pane_g2_cp2_srt

0xca0f,	// (0x00042cba) bg_active_tab_pane_g3_cp2_srt

0x2823,	// (0x00038ace) tabs_4_active_pane_srt_ParamLimits

0x2823,	// (0x00038ace) tabs_4_active_pane_srt

0x2835,	// (0x00038ae0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2835,	// (0x00038ae0) tabs_4_passive_pane_cp2_srt

0xcb33,	// (0x00042dde) aid_size_cell_toolbar

0xd94a,	// (0x00043bf5) main_idle_act_pane_ParamLimits

0xcbf5,	// (0x00042ea0) popup_large_graphic_colour_window_ParamLimits

0x98d1,	// (0x0003fb7c) popup_toolbar_window_ParamLimits

0x98d1,	// (0x0003fb7c) popup_toolbar_window

0xe011,	// (0x000442bc) list_single_graphic_2heading_pane_ParamLimits

0xe011,	// (0x000442bc) list_single_graphic_2heading_pane

0xc1e3,	// (0x0004248e) aid_size_cell_apps_grid_lsc_pane

0xc1f5,	// (0x000424a0) aid_size_cell_apps_grid_prt_pane

0xc039,	// (0x000422e4) bg_wml_button_pane_cp1_ParamLimits

0xc039,	// (0x000422e4) bg_wml_button_pane_cp1

0x9db1,	// (0x0004005c) form_midp_field_text_pane_t1_ParamLimits

0xcf59,	// (0x00043204) input_focus_pane_cp050_ParamLimits

0xd0a1,	// (0x0004334c) list_midp_form_text_pane_ParamLimits

0xd07e,	// (0x00043329) input_focus_pane_cp051_ParamLimits

0xd092,	// (0x0004333d) list_midp_choice_pane_ParamLimits

0x9d46,	// (0x0003fff1) list_single_2graphic_pane_cp3_ParamLimits

0x9d46,	// (0x0003fff1) list_single_2graphic_pane_cp3

0x9d5c,	// (0x00040007) list_single_midp_graphic_pane_ParamLimits

0x9d5c,	// (0x00040007) list_single_midp_graphic_pane

0x0bf8,	// (0x00036ea3) list_single_graphic_2heading_pane_g1_ParamLimits

0x0bf8,	// (0x00036ea3) list_single_graphic_2heading_pane_g1

0x0c04,	// (0x00036eaf) list_single_graphic_2heading_pane_g4_ParamLimits

0x0c04,	// (0x00036eaf) list_single_graphic_2heading_pane_g4

0x0c10,	// (0x00036ebb) list_single_graphic_2heading_pane_g5_ParamLimits

0x0c10,	// (0x00036ebb) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00045a78) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00045a78) list_single_graphic_2heading_pane_g

0x0c1c,	// (0x00036ec7) list_single_graphic_2heading_pane_t1_ParamLimits

0x0c1c,	// (0x00036ec7) list_single_graphic_2heading_pane_t1

0x0c30,	// (0x00036edb) list_single_graphic_2heading_pane_t2_ParamLimits

0x0c30,	// (0x00036edb) list_single_graphic_2heading_pane_t2

0x0c4c,	// (0x00036ef7) list_single_graphic_2heading_pane_t3_ParamLimits

0x0c4c,	// (0x00036ef7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00045a7f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00045a7f) list_single_graphic_2heading_pane_t

0xcd99,	// (0x00043044) bg_popup_sub_pane_cp2

0xcdc3,	// (0x0004306e) grid_toobar_pane

0x240d,	// (0x000386b8) cell_toolbar_pane_ParamLimits

0x240d,	// (0x000386b8) cell_toolbar_pane

0xcdff,	// (0x000430aa) cell_toolbar_pane_g1_ParamLimits

0xcdff,	// (0x000430aa) cell_toolbar_pane_g1

0xce13,	// (0x000430be) cell_toolbar_pane_g2_ParamLimits

0xce13,	// (0x000430be) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00045a8d) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00045a8d) cell_toolbar_pane_g

0xce43,	// (0x000430ee) grid_highlight_pane_cp2_ParamLimits

0xce43,	// (0x000430ee) grid_highlight_pane_cp2

0xce5d,	// (0x00043108) toolbar_button_pane

0xce69,	// (0x00043114) toolbar_button_pane_g1

0xce71,	// (0x0004311c) toolbar_button_pane_g2

0xce79,	// (0x00043124) toolbar_button_pane_g3

0xce81,	// (0x0004312c) toolbar_button_pane_g4

0xce89,	// (0x00043134) toolbar_button_pane_g5

0xce91,	// (0x0004313c) toolbar_button_pane_g6

0xce99,	// (0x00043144) toolbar_button_pane_g7

0xcea1,	// (0x0004314c) toolbar_button_pane_g8

0xcea9,	// (0x00043154) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00045a92) toolbar_button_pane_g

0x2445,	// (0x000386f0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2445,	// (0x000386f0) list_single_2graphic_pane_g1_cp3

0x855e,	// (0x0003e809) list_single_2graphic_pane_g2_cp3_ParamLimits

0x855e,	// (0x0003e809) list_single_2graphic_pane_g2_cp3

0xc755,	// (0x00042a00) list_single_2graphic_pane_g3_cp3

0x2462,	// (0x0003870d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2462,	// (0x0003870d) list_single_2graphic_pane_g4_cp3

0x246e,	// (0x00038719) list_single_2graphic_pane_t1_cp3_ParamLimits

0x246e,	// (0x00038719) list_single_2graphic_pane_t1_cp3

0xc749,	// (0x000429f4) list_single_midp_graphic_pane_g2_ParamLimits

0xc749,	// (0x000429f4) list_single_midp_graphic_pane_g2

0x0be0,	// (0x00036e8b) aid_zoom_text_primary

0x0be8,	// (0x00036e93) aid_zoom_text_secondary

0xcac3,	// (0x00042d6e) status_small_pane_g7_ParamLimits

0xcac3,	// (0x00042d6e) status_small_pane_g7

0xcae6,	// (0x00042d91) status_small_pane_t1_ParamLimits

0x8c2a,	// (0x0003eed5) title_pane_g2

0x0003,

0xf56a,	// (0x00045815) title_pane_g

0x8eb5,	// (0x0003f160) aid_size_cell_colour_1_pane_ParamLimits

0x8eb5,	// (0x0003f160) aid_size_cell_colour_1_pane

0x8ec9,	// (0x0003f174) aid_size_cell_colour_2_pane_ParamLimits

0x8ec9,	// (0x0003f174) aid_size_cell_colour_2_pane

0x8edd,	// (0x0003f188) aid_size_cell_colour_3_pane_ParamLimits

0x8edd,	// (0x0003f188) aid_size_cell_colour_3_pane

0x8ef1,	// (0x0003f19c) aid_size_cell_colour_4_pane_ParamLimits

0x8ef1,	// (0x0003f19c) aid_size_cell_colour_4_pane

0x1b64,	// (0x00037e0f) title_pane_stacon_g1_ParamLimits

0x1b64,	// (0x00037e0f) title_pane_stacon_g1

0xd43c,	// (0x000436e7) popup_note_wait_window_g3_ParamLimits

0xd43c,	// (0x000436e7) popup_note_wait_window_g3

0xd4b2,	// (0x0004375d) popup_note_wait_window_t5_ParamLimits

0xd4b2,	// (0x0004375d) popup_note_wait_window_t5

0xb417,	// (0x000416c2) main_feb_china_hwr_fs_writing_pane

0x92f9,	// (0x0003f5a4) popup_feb_china_hwr_fs_window_ParamLimits

0x92f9,	// (0x0003f5a4) popup_feb_china_hwr_fs_window

0x856f,	// (0x0003e81a) aid_size_cell_hwr_fs_ParamLimits

0x856f,	// (0x0003e81a) aid_size_cell_hwr_fs

0xcf59,	// (0x00043204) bg_popup_sub_pane_cp3_ParamLimits

0xcf59,	// (0x00043204) bg_popup_sub_pane_cp3

0x8584,	// (0x0003e82f) grid_hwr_fs_pane_ParamLimits

0x8584,	// (0x0003e82f) grid_hwr_fs_pane

0x24cb,	// (0x00038776) linegrid_hwr_fs_pane_ParamLimits

0x24cb,	// (0x00038776) linegrid_hwr_fs_pane

0x859c,	// (0x0003e847) cell_hwr_fs_pane_ParamLimits

0x859c,	// (0x0003e847) cell_hwr_fs_pane

0xcf65,	// (0x00043210) linegrid_hwr_fs_pane_g1_ParamLimits

0xcf65,	// (0x00043210) linegrid_hwr_fs_pane_g1

0x9d1a,	// (0x0003ffc5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d1a,	// (0x0003ffc5) linegrid_hwr_fs_pane_g2

0xcf71,	// (0x0004321c) linegrid_hwr_fs_pane_g3_ParamLimits

0xcf71,	// (0x0004321c) linegrid_hwr_fs_pane_g3

0x24fd,	// (0x000387a8) linegrid_hwr_fs_pane_g4_ParamLimits

0x24fd,	// (0x000387a8) linegrid_hwr_fs_pane_g4

0x2517,	// (0x000387c2) linegrid_hwr_fs_pane_g5_ParamLimits

0x2517,	// (0x000387c2) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00045ab8) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00045ab8) linegrid_hwr_fs_pane_g

0xcf7d,	// (0x00043228) cell_hwr_fs_pane_g1_ParamLimits

0xcf7d,	// (0x00043228) cell_hwr_fs_pane_g1

0xcd67,	// (0x00043012) cell_hwr_fs_pane_g2_ParamLimits

0xcd67,	// (0x00043012) cell_hwr_fs_pane_g2

0x9d2c,	// (0x0003ffd7) cell_hwr_fs_pane_g3_ParamLimits

0x9d2c,	// (0x0003ffd7) cell_hwr_fs_pane_g3

0x9d39,	// (0x0003ffe4) cell_hwr_fs_pane_g4_ParamLimits

0x9d39,	// (0x0003ffe4) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00045ac3) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00045ac3) cell_hwr_fs_pane_g

0x85c2,	// (0x0003e86d) cell_hwr_fs_pane_t1

0xb417,	// (0x000416c2) grid_highlight_pane_cp6

0xb417,	// (0x000416c2) main_idle_act2_pane

0xbfe8,	// (0x00042293) aid_inside_area_popup_secondary

0x9e35,	// (0x000400e0) aid_inside_area_window_primary_ParamLimits

0x9e35,	// (0x000400e0) aid_inside_area_window_primary

0xe239,	// (0x000444e4) ai2_news_ticker_pane

0xe241,	// (0x000444ec) aid_size_cell_ai1_link_ParamLimits

0xe241,	// (0x000444ec) aid_size_cell_ai1_link

0xe25b,	// (0x00044506) popup_ai2_data_window_ParamLimits

0xe25b,	// (0x00044506) popup_ai2_data_window

0xe26f,	// (0x0004451a) popup_ai2_link_window_ParamLimits

0xe26f,	// (0x0004451a) popup_ai2_link_window

0xcf59,	// (0x00043204) bg_popup_sub_pane_cp4_ParamLimits

0xcf59,	// (0x00043204) bg_popup_sub_pane_cp4

0xe283,	// (0x0004452e) grid_ai2_link_pane_ParamLimits

0xe283,	// (0x0004452e) grid_ai2_link_pane

0xe29a,	// (0x00044545) popup_ai2_link_window_g1_ParamLimits

0xe29a,	// (0x00044545) popup_ai2_link_window_g1

0xe2a6,	// (0x00044551) popup_ai2_link_window_g2_ParamLimits

0xe2a6,	// (0x00044551) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00045c85) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00045c85) popup_ai2_link_window_g

0xe2b5,	// (0x00044560) ai2_mp_button_pane

0xe2bd,	// (0x00044568) ai2_mp_volume_pane

0xd07e,	// (0x00043329) bg_popup_sub_pane_cp5_ParamLimits

0xd07e,	// (0x00043329) bg_popup_sub_pane_cp5

0xe2c5,	// (0x00044570) heading_ai2_gene_pane_ParamLimits

0xe2c5,	// (0x00044570) heading_ai2_gene_pane

0xe2d1,	// (0x0004457c) list_ai2_gene_pane_ParamLimits

0xe2d1,	// (0x0004457c) list_ai2_gene_pane

0xe319,	// (0x000445c4) cell_ai2_link_pane_ParamLimits

0xe319,	// (0x000445c4) cell_ai2_link_pane

0xe32f,	// (0x000445da) cell_ai2_link_pane_g1

0xb417,	// (0x000416c2) grid_highlight_pane_cp7

0x28db,	// (0x00038b86) ai2_mp_volume_pane_g1

0xe400,	// (0x000446ab) ai2_mp_volume_pane_g2

0xe375,	// (0x00044620) list_ai2_gene_pane_t1

0xe408,	// (0x000446b3) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00045c9e) ai2_mp_volume_pane_g

0x28e3,	// (0x00038b8e) volume_small_pane_cp3

0xe410,	// (0x000446bb) aid_size_cell_ai2_button

0xe418,	// (0x000446c3) grid_ai2_button_pane

0xe421,	// (0x000446cc) cell_ai2_button_pane_ParamLimits

0xe421,	// (0x000446cc) cell_ai2_button_pane

0xb40d,	// (0x000416b8) cell_ai2_button_pane_g1

0xb417,	// (0x000416c2) grid_highlight_pane_cp8

0xe3c0,	// (0x0004466b) ai2_gene_pane_t1_ParamLimits

0xe3c0,	// (0x0004466b) ai2_gene_pane_t1

0x928b,	// (0x0003f536) aid_height_parent_landscape

0x9fd4,	// (0x0004027f) aid_height_set_list

0xd94a,	// (0x00043bf5) aid_size_parent

0xe094,	// (0x0004433f) aid_size_cell_graphic_pane_ParamLimits

0xe2e1,	// (0x0004458c) popup_ai2_data_window_g1_ParamLimits

0xe2e1,	// (0x0004458c) popup_ai2_data_window_g1

0xe2ed,	// (0x00044598) ai2_news_ticker_pane_g1

0xe2f5,	// (0x000445a0) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00045c8a) ai2_news_ticker_pane_g

0xe2fd,	// (0x000445a8) ai2_news_ticker_pane_t1

0xe30b,	// (0x000445b6) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x00045c8f) ai2_news_ticker_pane_t

0xe338,	// (0x000445e3) heading_ai2_gene_pane_g1

0xe340,	// (0x000445eb) heading_ai2_gene_pane_t1_ParamLimits

0xe340,	// (0x000445eb) heading_ai2_gene_pane_t1

0xe355,	// (0x00044600) list_highlight_pane_cp6

0xe35d,	// (0x00044608) ai2_gene_pane_ParamLimits

0xe35d,	// (0x00044608) ai2_gene_pane

0xe383,	// (0x0004462e) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x00045c94) list_ai2_gene_pane_t

0xe391,	// (0x0004463c) list_highlight_pane_cp8_ParamLimits

0xe391,	// (0x0004463c) list_highlight_pane_cp8

0xe3a2,	// (0x0004464d) ai2_gene_pane_g1_ParamLimits

0xe3a2,	// (0x0004464d) ai2_gene_pane_g1

0xe3b4,	// (0x0004465f) ai2_gene_pane_g2_ParamLimits

0xe3b4,	// (0x0004465f) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00045c99) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00045c99) ai2_gene_pane_g

0xbe78,	// (0x00042123) scroll_pane_cp12

0x84f3,	// (0x0003e79e) control_pane_t3_ParamLimits

0x84f3,	// (0x0003e79e) control_pane_t3

0xcad7,	// (0x00042d82) status_small_pane_g8_ParamLimits

0xcad7,	// (0x00042d82) status_small_pane_g8

0x938c,	// (0x0003f637) popup_find_window_ParamLimits

0x9607,	// (0x0003f8b2) popup_note_image_window_ParamLimits

0x0c64,	// (0x00036f0f) list_double2_graphic_pane_vc_g1_ParamLimits

0x0c64,	// (0x00036f0f) list_double2_graphic_pane_vc_g1

0x19dd,	// (0x00037c88) list_double2_graphic_pane_vc_g2_ParamLimits

0x19dd,	// (0x00037c88) list_double2_graphic_pane_vc_g2

0x19e9,	// (0x00037c94) list_double2_graphic_pane_vc_g3_ParamLimits

0x19e9,	// (0x00037c94) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00045a86) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00045a86) list_double2_graphic_pane_vc_g

0x0c70,	// (0x00036f1b) list_double2_graphic_pane_vc_t1_ParamLimits

0x0c70,	// (0x00036f1b) list_double2_graphic_pane_vc_t1

0x19dd,	// (0x00037c88) list_single_heading_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_single_heading_pane_vc_g1

0x19e9,	// (0x00037c94) list_single_heading_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_single_heading_pane_vc_g

0x0c86,	// (0x00036f31) list_single_heading_pane_vc_t1_ParamLimits

0x0c86,	// (0x00036f31) list_single_heading_pane_vc_t1

0x0c9c,	// (0x00036f47) list_single_heading_pane_vc_t2_ParamLimits

0x0c9c,	// (0x00036f47) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00045aa7) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00045aa7) list_single_heading_pane_vc_t

0xceb1,	// (0x0004315c) list_setting_number_pane_vc_g1_ParamLimits

0xceb1,	// (0x0004315c) list_setting_number_pane_vc_g1

0xcebd,	// (0x00043168) list_setting_number_pane_vc_g2_ParamLimits

0xcebd,	// (0x00043168) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00045aac) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00045aac) list_setting_number_pane_vc_g

0xcec9,	// (0x00043174) list_setting_number_pane_vc_t1_ParamLimits

0xcec9,	// (0x00043174) list_setting_number_pane_vc_t1

0xcedd,	// (0x00043188) list_setting_number_pane_vc_t2_ParamLimits

0xcedd,	// (0x00043188) list_setting_number_pane_vc_t2

0xcef9,	// (0x000431a4) list_setting_number_pane_vc_t3_ParamLimits

0xcef9,	// (0x000431a4) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00045ab1) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00045ab1) list_setting_number_pane_vc_t

0xcf21,	// (0x000431cc) set_value_pane_vc_ParamLimits

0xcf21,	// (0x000431cc) set_value_pane_vc

0xe011,	// (0x000442bc) list_double2_graphic_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double2_graphic_pane_vc

0xe011,	// (0x000442bc) list_double2_large_graphic_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double2_large_graphic_pane_vc

0xe011,	// (0x000442bc) list_double2_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double2_pane_vc

0xe011,	// (0x000442bc) list_double_graphic_heading_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_graphic_heading_pane_vc

0xe011,	// (0x000442bc) list_double_graphic_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_graphic_pane_vc

0xe011,	// (0x000442bc) list_double_heading_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_heading_pane_vc

0xe011,	// (0x000442bc) list_double_large_graphic_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_large_graphic_pane_vc

0xe011,	// (0x000442bc) list_double_number_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_number_pane_vc

0xe011,	// (0x000442bc) list_double_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_pane_vc

0xe011,	// (0x000442bc) list_double_time_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_double_time_pane_vc

0xe011,	// (0x000442bc) list_setting_number_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_setting_number_pane_vc

0xe011,	// (0x000442bc) list_setting_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_setting_pane_vc

0xe011,	// (0x000442bc) list_single_graphic_heading_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_single_graphic_heading_pane_vc

0xe011,	// (0x000442bc) list_single_heading_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_single_heading_pane_vc

0xe011,	// (0x000442bc) list_single_number_heading_pane_vc_ParamLimits

0xe011,	// (0x000442bc) list_single_number_heading_pane_vc

0x0c64,	// (0x00036f0f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0c64,	// (0x00036f0f) list_double_graphic_heading_pane_vc_g1

0x19dd,	// (0x00037c88) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x19dd,	// (0x00037c88) list_double_graphic_heading_pane_vc_g2

0x19e9,	// (0x00037c94) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x19e9,	// (0x00037c94) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x00045a86) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00045a86) list_double_graphic_heading_pane_vc_g

0x0da3,	// (0x0003704e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0da3,	// (0x0003704e) list_double_graphic_heading_pane_vc_t1

0x0c86,	// (0x00036f31) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c86,	// (0x00036f31) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x00045ca5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x00045ca5) list_double_graphic_heading_pane_vc_t

0xceb1,	// (0x0004315c) list_setting_pane_vc_g1_ParamLimits

0xceb1,	// (0x0004315c) list_setting_pane_vc_g1

0xcebd,	// (0x00043168) list_setting_pane_vc_g2_ParamLimits

0xcebd,	// (0x00043168) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00045aac) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00045aac) list_setting_pane_vc_g

0xe617,	// (0x000448c2) list_setting_pane_vc_t1_ParamLimits

0xe617,	// (0x000448c2) list_setting_pane_vc_t1

0xe62b,	// (0x000448d6) list_setting_pane_vc_t2_ParamLimits

0xe62b,	// (0x000448d6) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x00045ce8) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x00045ce8) list_setting_pane_vc_t

0xcf21,	// (0x000431cc) set_value_pane_cp_vc_ParamLimits

0xcf21,	// (0x000431cc) set_value_pane_cp_vc

0x19dd,	// (0x00037c88) list_single_number_heading_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_single_number_heading_pane_vc_g1

0x19e9,	// (0x00037c94) list_single_number_heading_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_single_number_heading_pane_vc_g

0x0c86,	// (0x00036f31) list_single_number_heading_pane_vc_t1_ParamLimits

0x0c86,	// (0x00036f31) list_single_number_heading_pane_vc_t1

0x0db7,	// (0x00037062) list_single_number_heading_pane_vc_t2_ParamLimits

0x0db7,	// (0x00037062) list_single_number_heading_pane_vc_t2

0x0dcb,	// (0x00037076) list_single_number_heading_pane_vc_t3_ParamLimits

0x0dcb,	// (0x00037076) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x00045ced) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00045ced) list_single_number_heading_pane_vc_t

0x0c64,	// (0x00036f0f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0c64,	// (0x00036f0f) list_single_graphic_heading_pane_vc_g1

0x19dd,	// (0x00037c88) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x19dd,	// (0x00037c88) list_single_graphic_heading_pane_vc_g4

0x19e9,	// (0x00037c94) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x19e9,	// (0x00037c94) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00045a86) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00045a86) list_single_graphic_heading_pane_vc_g

0x0c86,	// (0x00036f31) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c86,	// (0x00036f31) list_single_graphic_heading_pane_vc_t1

0x0ddd,	// (0x00037088) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0ddd,	// (0x00037088) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00045cf4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00045cf4) list_single_graphic_heading_pane_vc_t

0x19dd,	// (0x00037c88) list_double2_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_double2_pane_vc_g1

0x19e9,	// (0x00037c94) list_double2_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_double2_pane_vc_g

0x0df1,	// (0x0003709c) list_double2_pane_vc_t1_ParamLimits

0x0df1,	// (0x0003709c) list_double2_pane_vc_t1

0x293d,	// (0x00038be8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x293d,	// (0x00038be8) list_double2_large_graphic_pane_vc_g1

0x19dd,	// (0x00037c88) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x19dd,	// (0x00037c88) list_double2_large_graphic_pane_vc_g2

0x19e9,	// (0x00037c94) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x19e9,	// (0x00037c94) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x000458b1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x000458b1) list_double2_large_graphic_pane_vc_g

0x0e07,	// (0x000370b2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0e07,	// (0x000370b2) list_double2_large_graphic_pane_vc_t1

0x2949,	// (0x00038bf4) list_double_time_pane_vc_g1_ParamLimits

0x2949,	// (0x00038bf4) list_double_time_pane_vc_g1

0x2955,	// (0x00038c00) list_double_time_pane_vc_g2_ParamLimits

0x2955,	// (0x00038c00) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00045cf9) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00045cf9) list_double_time_pane_vc_g

0x0e1d,	// (0x000370c8) list_double_time_pane_vc_t1_ParamLimits

0x0e1d,	// (0x000370c8) list_double_time_pane_vc_t1

0x0e36,	// (0x000370e1) list_double_time_pane_vc_t2_ParamLimits

0x0e36,	// (0x000370e1) list_double_time_pane_vc_t2

0x0e76,	// (0x00037121) list_double_time_pane_vc_t3_ParamLimits

0x0e76,	// (0x00037121) list_double_time_pane_vc_t3

0x0e8e,	// (0x00037139) list_double_time_pane_vc_t4_ParamLimits

0x0e8e,	// (0x00037139) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00045cfe) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00045cfe) list_double_time_pane_vc_t

0x19dd,	// (0x00037c88) list_double_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_double_pane_vc_g1

0x19e9,	// (0x00037c94) list_double_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_double_pane_vc_g

0x0ea2,	// (0x0003714d) list_double_pane_vc_t1_ParamLimits

0x0ea2,	// (0x0003714d) list_double_pane_vc_t1

0x0eb4,	// (0x0003715f) list_double_pane_vc_t2_ParamLimits

0x0eb4,	// (0x0003715f) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00045d07) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00045d07) list_double_pane_vc_t

0x19dd,	// (0x00037c88) list_double_number_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_double_number_pane_vc_g1

0x19e9,	// (0x00037c94) list_double_number_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_double_number_pane_vc_g

0x0ecc,	// (0x00037177) list_double_number_pane_vc_t1_ParamLimits

0x0ecc,	// (0x00037177) list_double_number_pane_vc_t1

0x0ee0,	// (0x0003718b) list_double_number_pane_vc_t2_ParamLimits

0x0ee0,	// (0x0003718b) list_double_number_pane_vc_t2

0x0eb4,	// (0x0003715f) list_double_number_pane_vc_t3_ParamLimits

0x0eb4,	// (0x0003715f) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00045d0c) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00045d0c) list_double_number_pane_vc_t

0x2961,	// (0x00038c0c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2961,	// (0x00038c0c) list_double_large_graphic_pane_vc_g1

0x296d,	// (0x00038c18) list_double_large_graphic_pane_vc_g2_ParamLimits

0x296d,	// (0x00038c18) list_double_large_graphic_pane_vc_g2

0x19e9,	// (0x00037c94) list_double_large_graphic_pane_vc_g3_ParamLimits

0x19e9,	// (0x00037c94) list_double_large_graphic_pane_vc_g3

0x0ef2,	// (0x0003719d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0ef2,	// (0x0003719d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00045d13) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00045d13) list_double_large_graphic_pane_vc_g

0x0efe,	// (0x000371a9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0efe,	// (0x000371a9) list_double_large_graphic_pane_vc_t1

0x0f10,	// (0x000371bb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0f10,	// (0x000371bb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00045d1c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00045d1c) list_double_large_graphic_pane_vc_t

0x19dd,	// (0x00037c88) list_double_heading_pane_vc_g1_ParamLimits

0x19dd,	// (0x00037c88) list_double_heading_pane_vc_g1

0x19e9,	// (0x00037c94) list_double_heading_pane_vc_g2_ParamLimits

0x19e9,	// (0x00037c94) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00045899) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00045899) list_double_heading_pane_vc_g

0x0f29,	// (0x000371d4) list_double_heading_pane_vc_t1_ParamLimits

0x0f29,	// (0x000371d4) list_double_heading_pane_vc_t1

0x0c86,	// (0x00036f31) list_double_heading_pane_vc_t2_ParamLimits

0x0c86,	// (0x00036f31) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x00045d21) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x00045d21) list_double_heading_pane_vc_t

0x0c64,	// (0x00036f0f) list_double_graphic_pane_vc_g1_ParamLimits

0x0c64,	// (0x00036f0f) list_double_graphic_pane_vc_g1

0x297c,	// (0x00038c27) list_double_graphic_pane_vc_g2_ParamLimits

0x297c,	// (0x00038c27) list_double_graphic_pane_vc_g2

0x298b,	// (0x00038c36) list_double_graphic_pane_vc_g3_ParamLimits

0x298b,	// (0x00038c36) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x00045d26) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x00045d26) list_double_graphic_pane_vc_g

0x0f3d,	// (0x000371e8) list_double_graphic_pane_vc_t1_ParamLimits

0x0f3d,	// (0x000371e8) list_double_graphic_pane_vc_t1

0x0eb4,	// (0x0003715f) list_double_graphic_pane_vc_t2_ParamLimits

0x0eb4,	// (0x0003715f) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x00045d2d) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x00045d2d) list_double_graphic_pane_vc_t

0x12e9,	// (0x00037594) aid_size_cell_fastswap

0x8196,	// (0x0003e441) aid_size_cell_touch_ParamLimits

0x8196,	// (0x0003e441) aid_size_cell_touch

0x154c,	// (0x000377f7) popup_fast_swap_wide_window_ParamLimits

0x154c,	// (0x000377f7) popup_fast_swap_wide_window

0x82e1,	// (0x0003e58c) touch_pane_ParamLimits

0x82e1,	// (0x0003e58c) touch_pane

0xbeda,	// (0x00042185) button_value_adjust_pane_cp2

0x091b,	// (0x00036bc6) button_value_adjust_pane_cp4

0x093b,	// (0x00036be6) form_field_data_pane_cp2

0x7e58,	// (0x0003e103) form_field_data_wide_pane_cp2

0xc231,	// (0x000424dc) bg_scroll_pane_ParamLimits

0x1d4c,	// (0x00037ff7) scroll_handle_pane_ParamLimits

0x1d60,	// (0x0003800b) scroll_sc2_down_pane_ParamLimits

0x1d60,	// (0x0003800b) scroll_sc2_down_pane

0xc262,	// (0x0004250d) scroll_sc2_up_pane_ParamLimits

0xc262,	// (0x0004250d) scroll_sc2_up_pane

0xa352,	// (0x000405fd) grid_wheel_folder_pane_g1_ParamLimits

0xa352,	// (0x000405fd) grid_wheel_folder_pane_g1

0x1ff2,	// (0x0003829d) clock_nsta_pane_cp2_ParamLimits

0x1ff2,	// (0x0003829d) clock_nsta_pane_cp2

0x919c,	// (0x0003f447) listscroll_midp_pane_ParamLimits

0x91ad,	// (0x0003f458) midp_canvas_pane

0xcb2b,	// (0x00042dd6) nsta_clock_indic_pane

0xcb5b,	// (0x00042e06) listscroll_form_pane_vc

0xcb63,	// (0x00042e0e) listscroll_set_pane_vc_ParamLimits

0xcb63,	// (0x00042e0e) listscroll_set_pane_vc

0x9a2e,	// (0x0003fcd9) clock_nsta_pane

0x9a58,	// (0x0003fd03) indicator_nsta_pane

0xcd99,	// (0x00043044) bg_popup_sub_pane_cp2_ParamLimits

0xcdad,	// (0x00043058) find_pane_cp2_ParamLimits

0xcdad,	// (0x00043058) find_pane_cp2

0xcdc3,	// (0x0004306e) grid_toobar_pane_ParamLimits

0xcf2d,	// (0x000431d8) list_form_gen_pane_vc_ParamLimits

0xcf2d,	// (0x000431d8) list_form_gen_pane_vc

0xcf43,	// (0x000431ee) scroll_pane_cp8_vc_ParamLimits

0xcf43,	// (0x000431ee) scroll_pane_cp8_vc

0xcf93,	// (0x0004323e) data_form_wide_pane_vc_ParamLimits

0xcf93,	// (0x0004323e) data_form_wide_pane_vc

0xcf9f,	// (0x0004324a) form_field_data_wide_pane_vc_g1

0xcfa7,	// (0x00043252) form_field_data_wide_pane_vc_t1_ParamLimits

0xcfa7,	// (0x00043252) form_field_data_wide_pane_vc_t1

0xbeee,	// (0x00042199) input_focus_pane_cp6_vc_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_cp6_vc

0x9dd5,	// (0x00040080) list_midp_pane_ParamLimits

0xd95c,	// (0x00043c07) scroll_pane_cp16_ParamLimits

0xd95c,	// (0x00043c07) scroll_pane_cp16

0xd216,	// (0x000434c1) button_value_adjust_pane_ParamLimits

0xd216,	// (0x000434c1) button_value_adjust_pane

0x9fe5,	// (0x00040290) button_value_adjust_pane_cp6_ParamLimits

0x9fe5,	// (0x00040290) button_value_adjust_pane_cp6

0xa0fb,	// (0x000403a6) settings_code_pane_cp_ParamLimits

0xa0fb,	// (0x000403a6) settings_code_pane_cp

0xb40d,	// (0x000416b8) cell_touch_pane_g1

0xb40d,	// (0x000416b8) cell_touch_pane_g2

0x0001,

0xf724,	// (0x000459cf) cell_touch_pane_g

0xa231,	// (0x000404dc) cell_touch_pane_cp_ParamLimits

0xa231,	// (0x000404dc) cell_touch_pane_cp

0xa24d,	// (0x000404f8) cell_touch_pane_ParamLimits

0xa24d,	// (0x000404f8) cell_touch_pane

0xb40d,	// (0x000416b8) scroll_sc2_down_pane_g1

0xb40d,	// (0x000416b8) scroll_sc2_up_pane_g1

0xb417,	// (0x000416c2) bg_set_opt_pane_cp4_vc

0xe433,	// (0x000446de) list_set_graphic_pane_vc_g1_ParamLimits

0xe433,	// (0x000446de) list_set_graphic_pane_vc_g1

0xe43f,	// (0x000446ea) list_set_graphic_pane_vc_g2_ParamLimits

0xe43f,	// (0x000446ea) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x00045caa) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x00045caa) list_set_graphic_pane_vc_g

0xe44b,	// (0x000446f6) text_primary_small_cp13_vc_ParamLimits

0xe44b,	// (0x000446f6) text_primary_small_cp13_vc

0xe463,	// (0x0004470e) list_set_graphic_pane_vc_ParamLimits

0xe463,	// (0x0004470e) list_set_graphic_pane_vc

0xb417,	// (0x000416c2) input_focus_pane_cp2_vc

0xb40d,	// (0x000416b8) setting_code_pane_vc_g1

0xe477,	// (0x00044722) setting_code_pane_vc_t1

0xe485,	// (0x00044730) set_text_pane_vc_t1_ParamLimits

0xe485,	// (0x00044730) set_text_pane_vc_t1

0xb417,	// (0x000416c2) input_focus_pane_cp1_vc

0xe4a4,	// (0x0004474f) list_set_text_pane_vc

0xb40d,	// (0x000416b8) setting_text_pane_vc_g1

0xb417,	// (0x000416c2) bg_set_opt_pane_cp2_vc

0xe4ae,	// (0x00044759) setting_slider_graphic_pane_vc_g1

0xe4b6,	// (0x00044761) setting_slider_graphic_pane_vc_t1

0xe4c4,	// (0x0004476f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x00045caf) setting_slider_graphic_pane_vc_t

0xe4d2,	// (0x0004477d) slider_set_pane_cp_vc

0xe4da,	// (0x00044785) slider_set_pane_vc_g1

0xe4e3,	// (0x0004478e) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x00045cb4) slider_set_pane_vc_g

0xbf49,	// (0x000421f4) set_opt_bg_pane_g1_copy1

0xbf51,	// (0x000421fc) set_opt_bg_pane_g2_copy1

0xe50f,	// (0x000447ba) set_opt_bg_pane_g3_copy1

0xbf61,	// (0x0004220c) set_opt_bg_pane_g4_copy1

0xbf69,	// (0x00042214) set_opt_bg_pane_g5_copy1

0xbf71,	// (0x0004221c) set_opt_bg_pane_g6_copy1

0xe517,	// (0x000447c2) set_opt_bg_pane_g7_copy1

0xe521,	// (0x000447cc) set_opt_bg_pane_g8_copy1

0xe529,	// (0x000447d4) set_opt_bg_pane_g9_copy1

0xb417,	// (0x000416c2) bg_set_opt_pane_cp_vc

0xe531,	// (0x000447dc) setting_slider_pane_vc_t1

0xe4b6,	// (0x00044761) setting_slider_pane_vc_t2

0xe4c4,	// (0x0004476f) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x00045cc3) setting_slider_pane_vc_t

0xe4d2,	// (0x0004477d) slider_set_pane_vc

0x253b,	// (0x000387e6) volume_set_pane_vc_g1

0x28ec,	// (0x00038b97) volume_set_pane_vc_g2

0x28f5,	// (0x00038ba0) volume_set_pane_vc_g3

0x28fe,	// (0x00038ba9) volume_set_pane_vc_g4

0x2907,	// (0x00038bb2) volume_set_pane_vc_g5

0x2910,	// (0x00038bbb) volume_set_pane_vc_g6

0x2919,	// (0x00038bc4) volume_set_pane_vc_g7

0x2922,	// (0x00038bcd) volume_set_pane_vc_g8

0x292b,	// (0x00038bd6) volume_set_pane_vc_g9

0x2934,	// (0x00038bdf) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x00045cca) volume_set_pane_vc_g

0xe540,	// (0x000447eb) volume_set_pane_vc

0xe548,	// (0x000447f3) button_value_adjust_pane_cp1_vc

0xe552,	// (0x000447fd) list_highlight_pane_cp2_vc

0xe55b,	// (0x00044806) list_set_pane_vc_ParamLimits

0xe55b,	// (0x00044806) list_set_pane_vc

0xe5ad,	// (0x00044858) main_pane_set_vc_t1_ParamLimits

0xe5ad,	// (0x00044858) main_pane_set_vc_t1

0xe5c2,	// (0x0004486d) main_pane_set_vc_t2_ParamLimits

0xe5c2,	// (0x0004486d) main_pane_set_vc_t2

0xe5d4,	// (0x0004487f) main_pane_set_vc_t3_ParamLimits

0xe5d4,	// (0x0004487f) main_pane_set_vc_t3

0xe5e6,	// (0x00044891) main_pane_set_vc_t4_ParamLimits

0xe5e6,	// (0x00044891) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x00045cdf) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x00045cdf) main_pane_set_vc_t

0xe5f8,	// (0x000448a3) setting_code_pane_vc_ParamLimits

0xe5f8,	// (0x000448a3) setting_code_pane_vc

0xe607,	// (0x000448b2) setting_slider_graphic_pane_vc

0xe607,	// (0x000448b2) setting_slider_pane_vc

0xe607,	// (0x000448b2) setting_text_pane_vc

0xe607,	// (0x000448b2) setting_volume_pane_vc

0xe60f,	// (0x000448ba) scroll_pane_cp121_vc

0xbec8,	// (0x00042173) set_content_pane_vc

0xe64d,	// (0x000448f8) button_value_adjust_pane_g1

0xe656,	// (0x00044901) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x00045d32) button_value_adjust_pane_g

0xe65f,	// (0x0004490a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe65f,	// (0x0004490a) form_field_slider_wide_pane_vc_t1

0xe673,	// (0x0004491e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe673,	// (0x0004491e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x00045d37) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x00045d37) form_field_slider_wide_pane_vc_t

0xb465,	// (0x00041710) input_focus_pane_cp10_vc_ParamLimits

0xb465,	// (0x00041710) input_focus_pane_cp10_vc

0xe685,	// (0x00044930) slider_cont_pane_cp1_vc_ParamLimits

0xe685,	// (0x00044930) slider_cont_pane_cp1_vc

0xe4da,	// (0x00044785) slider_form_pane_g1_cp2

0xe4e3,	// (0x0004478e) slider_form_pane_g2_cp2

0xe69e,	// (0x00044949) form_field_slider_pane_vc_t3

0xe6ac,	// (0x00044957) form_field_slider_pane_vc_t4

0xe6ba,	// (0x00044965) slider_form_pane_vc_ParamLimits

0xe6ba,	// (0x00044965) slider_form_pane_vc

0xe6c7,	// (0x00044972) form_field_slider_pane_vc_t1_ParamLimits

0xe6c7,	// (0x00044972) form_field_slider_pane_vc_t1

0xe673,	// (0x0004491e) form_field_slider_pane_vc_t2_ParamLimits

0xe673,	// (0x0004491e) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00045d47) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00045d47) form_field_slider_pane_vc_t

0xb465,	// (0x00041710) input_focus_pane_cp9_vc_ParamLimits

0xb465,	// (0x00041710) input_focus_pane_cp9_vc

0xe6e3,	// (0x0004498e) slider_cont_pane_vc_ParamLimits

0xe6e3,	// (0x0004498e) slider_cont_pane_vc

0xe6f5,	// (0x000449a0) list_form_graphic_pane_cp_vc_ParamLimits

0xe6f5,	// (0x000449a0) list_form_graphic_pane_cp_vc

0xcf9f,	// (0x0004324a) form_field_popup_wide_pane_vc_g1

0xe70a,	// (0x000449b5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe70a,	// (0x000449b5) form_field_popup_wide_pane_vc_t1

0xbeee,	// (0x00042199) input_focus_pane_cp8_vc_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_cp8_vc

0xe721,	// (0x000449cc) list_form_wide_pane_vc_ParamLimits

0xe721,	// (0x000449cc) list_form_wide_pane_vc

0xe72d,	// (0x000449d8) list_form_graphic_pane_vc_g1

0xe735,	// (0x000449e0) list_form_graphic_pane_vc_t1_ParamLimits

0xe735,	// (0x000449e0) list_form_graphic_pane_vc_t1

0xb473,	// (0x0004171e) list_highlight_pane_cp5_vc_ParamLimits

0xb473,	// (0x0004171e) list_highlight_pane_cp5_vc

0xe751,	// (0x000449fc) list_form_graphic_pane_vc_ParamLimits

0xe751,	// (0x000449fc) list_form_graphic_pane_vc

0xcf9f,	// (0x0004324a) form_field_popup_pane_vc_g1

0xe767,	// (0x00044a12) form_field_popup_pane_vc_t1_ParamLimits

0xe767,	// (0x00044a12) form_field_popup_pane_vc_t1

0xbeee,	// (0x00042199) input_focus_pane_cp7_vc_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_cp7_vc

0xe77e,	// (0x00044a29) list_form_pane_vc_ParamLimits

0xe77e,	// (0x00044a29) list_form_pane_vc

0xe78a,	// (0x00044a35) data_form_pane_vc_t1_ParamLimits

0xe78a,	// (0x00044a35) data_form_pane_vc_t1

0xbf49,	// (0x000421f4) input_focus_pane_vc_g1

0xbf51,	// (0x000421fc) input_focus_pane_vc_g2

0xbf59,	// (0x00042204) input_focus_pane_vc_g3

0xbf61,	// (0x0004220c) input_focus_pane_vc_g4

0xbf69,	// (0x00042214) input_focus_pane_vc_g5

0xbf71,	// (0x0004221c) input_focus_pane_vc_g6

0xbf79,	// (0x00042224) input_focus_pane_vc_g7

0xbf81,	// (0x0004222c) input_focus_pane_vc_g8

0xbf89,	// (0x00042234) input_focus_pane_vc_g9

0xb40d,	// (0x000416b8) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x00045958) input_focus_pane_vc_g

0xcf93,	// (0x0004323e) data_form_pane_vc_ParamLimits

0xcf93,	// (0x0004323e) data_form_pane_vc

0xcf9f,	// (0x0004324a) form_field_data_pane_vc_g1

0xe7a5,	// (0x00044a50) form_field_data_pane_vc_t1_ParamLimits

0xe7a5,	// (0x00044a50) form_field_data_pane_vc_t1

0xbeee,	// (0x00042199) input_focus_pane_vc_ParamLimits

0xbeee,	// (0x00042199) input_focus_pane_vc

0xe7bf,	// (0x00044a6a) button_value_adjust_pane_cp3_vc

0xe7c7,	// (0x00044a72) button_value_adjust_pane_cp5_vc

0xe7cf,	// (0x00044a7a) form_field_data_pane_vc_ParamLimits

0xe7cf,	// (0x00044a7a) form_field_data_pane_vc

0xe7e6,	// (0x00044a91) form_field_data_pane_vc_cp2

0xe7ee,	// (0x00044a99) form_field_data_wide_pane_vc_ParamLimits

0xe7ee,	// (0x00044a99) form_field_data_wide_pane_vc

0xe804,	// (0x00044aaf) form_field_data_wide_pane_vc_cp2

0xe80c,	// (0x00044ab7) form_field_popup_pane_vc_ParamLimits

0xe80c,	// (0x00044ab7) form_field_popup_pane_vc

0xe823,	// (0x00044ace) form_field_popup_wide_pane_vc_ParamLimits

0xe823,	// (0x00044ace) form_field_popup_wide_pane_vc

0xe839,	// (0x00044ae4) form_field_slider_pane_vc_ParamLimits

0xe839,	// (0x00044ae4) form_field_slider_pane_vc

0xe84c,	// (0x00044af7) form_field_slider_wide_pane_vc_ParamLimits

0xe84c,	// (0x00044af7) form_field_slider_wide_pane_vc

0xa26b,	// (0x00040516) grid_touch_1_pane_ParamLimits

0xa26b,	// (0x00040516) grid_touch_1_pane

0xa27f,	// (0x0004052a) grid_touch_2_pane_ParamLimits

0xa27f,	// (0x0004052a) grid_touch_2_pane

0xe85f,	// (0x00044b0a) touch_pane_g1_ParamLimits

0xe85f,	// (0x00044b0a) touch_pane_g1

0xe86d,	// (0x00044b18) cell_app_pane_cp_wide_ParamLimits

0xe86d,	// (0x00044b18) cell_app_pane_cp_wide

0xe87e,	// (0x00044b29) grid_popup_fast_wide_pane_ParamLimits

0xe87e,	// (0x00044b29) grid_popup_fast_wide_pane

0xe892,	// (0x00044b3d) scroll_pane_cp19_ParamLimits

0xe892,	// (0x00044b3d) scroll_pane_cp19

0xb417,	// (0x000416c2) bg_popup_window_pane_cp20

0xe8a6,	// (0x00044b51) listscroll_popup_fast_wide_pane

0xce27,	// (0x000430d2) grid_indicator_nsta_pane

0xe8ae,	// (0x00044b59) clock_nsta_pane_g1

0xe8b7,	// (0x00044b62) clock_nsta_pane_t1

0xa2a9,	// (0x00040554) cell_indicator_nsta_pane_ParamLimits

0xa2a9,	// (0x00040554) cell_indicator_nsta_pane

0xe85f,	// (0x00044b0a) cell_indicator_nsta_pane_g1

0xa2c6,	// (0x00040571) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x00045d4c) cell_indicator_nsta_pane_g

0xe8d3,	// (0x00044b7e) clock_nsta_pane_cp

0xe8db,	// (0x00044b86) indicator_nsta_pane_cp

0xe8e4,	// (0x00044b8f) nsta_clock_indic_pane_g1

0xb4af,	// (0x0004175a) grid_indicator_pane

0xc354,	// (0x000425ff) scroll_pane_cp29

0x1f41,	// (0x000381ec) indicator_nsta_pane_cp2_ParamLimits

0x1f41,	// (0x000381ec) indicator_nsta_pane_cp2

0xb473,	// (0x0004171e) main_apps_wheel_pane

0xd0bb,	// (0x00043366) form_midp_field_text_pane_ParamLimits

0xd1e8,	// (0x00043493) scroll_bar_cp050_ParamLimits

0xe94d,	// (0x00044bf8) cell_indicator_pane_ParamLimits

0xe94d,	// (0x00044bf8) cell_indicator_pane

0xe96a,	// (0x00044c15) cell_indicator_pane_g1

0xa2dc,	// (0x00040587) grid_wheel_folder_pane_ParamLimits

0xa2dc,	// (0x00040587) grid_wheel_folder_pane

0xa2ea,	// (0x00040595) list_wheel_apps_pane_ParamLimits

0xa2ea,	// (0x00040595) list_wheel_apps_pane

0xa2f8,	// (0x000405a3) main_apps_wheel_pane_g1_ParamLimits

0xa2f8,	// (0x000405a3) main_apps_wheel_pane_g1

0xa304,	// (0x000405af) main_apps_wheel_pane_g2_ParamLimits

0xa304,	// (0x000405af) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x00045d68) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x00045d68) main_apps_wheel_pane_g

0xa312,	// (0x000405bd) main_apps_wheel_pane_t1_ParamLimits

0xa312,	// (0x000405bd) main_apps_wheel_pane_t1

0xa326,	// (0x000405d1) list_wheel_apps_pane_g1

0xa32e,	// (0x000405d9) list_wheel_apps_pane_g2

0xa336,	// (0x000405e1) list_wheel_apps_pane_g3

0xa33e,	// (0x000405e9) list_wheel_apps_pane_g4

0xa348,	// (0x000405f3) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x00045d6d) list_wheel_apps_pane_g

0xc7a7,	// (0x00042a52) navi_icon_text_pane

0x9929,	// (0x0003fbd4) aid_fill_nsta

0xa35f,	// (0x0004060a) navi_icon_text_pane_g1

0xa36b,	// (0x00040616) navi_icon_text_pane_t1

0xc643,	// (0x000428ee) list_set_graphic_pane_t1_ParamLimits

0xc643,	// (0x000428ee) list_set_graphic_pane_t1

0xd8f0,	// (0x00043b9b) popup_midp_note_alarm_window_t6_ParamLimits

0xd8f0,	// (0x00043b9b) popup_midp_note_alarm_window_t6

0xd902,	// (0x00043bad) popup_midp_note_alarm_window_t7_ParamLimits

0xd902,	// (0x00043bad) popup_midp_note_alarm_window_t7

0xd914,	// (0x00043bbf) popup_midp_note_alarm_window_t8_ParamLimits

0xd914,	// (0x00043bbf) popup_midp_note_alarm_window_t8

0xd926,	// (0x00043bd1) popup_midp_note_alarm_window_t9_ParamLimits

0xd926,	// (0x00043bd1) popup_midp_note_alarm_window_t9

0xd938,	// (0x00043be3) popup_midp_note_alarm_window_t10_ParamLimits

0xd938,	// (0x00043be3) popup_midp_note_alarm_window_t10

0xd968,	// (0x00043c13) popup_midp_note_alarm_window_t11_ParamLimits

0xd968,	// (0x00043c13) popup_midp_note_alarm_window_t11

0xd97a,	// (0x00043c25) scroll_pane_cp17_ParamLimits

0xd97a,	// (0x00043c25) scroll_pane_cp17

0x253b,	// (0x000387e6) volume_small_pane_cp_g1

0x2997,	// (0x00038c42) volume_small_pane_cp_g2

0x29a0,	// (0x00038c4b) volume_small_pane_cp_g3

0x29a9,	// (0x00038c54) volume_small_pane_cp_g4

0x29b2,	// (0x00038c5d) volume_small_pane_cp_g5

0x29bb,	// (0x00038c66) volume_small_pane_cp_g6

0x29c4,	// (0x00038c6f) volume_small_pane_cp_g7

0x29cd,	// (0x00038c78) volume_small_pane_cp_g8

0x29d6,	// (0x00038c81) volume_small_pane_cp_g9

0x29df,	// (0x00038c8a) volume_small_pane_cp_g10

0xc953,	// (0x00042bfe) midp_ticker_pane_g1_ParamLimits

0xc95f,	// (0x00042c0a) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00045a20) midp_ticker_pane_g_ParamLimits

0x9248,	// (0x0003f4f3) midp_ticker_pane_t1_ParamLimits

0x9949,	// (0x0003fbf4) aid_fill_nsta_2

0xd1d4,	// (0x0004347f) list_form2_midp_pane

0xdfef,	// (0x0004429a) midp_editing_number_pane_ParamLimits

0xdffe,	// (0x000442a9) midp_ticker_pane_ParamLimits

0xe974,	// (0x00044c1f) form2_midp_field_pane

0xe97c,	// (0x00044c27) scroll_pane_cp51

0xe99c,	// (0x00044c47) form2_midp_button_pane_ParamLimits

0xe99c,	// (0x00044c47) form2_midp_button_pane

0xe9ae,	// (0x00044c59) form2_midp_content_pane_ParamLimits

0xe9ae,	// (0x00044c59) form2_midp_content_pane

0xe9c8,	// (0x00044c73) form2_midp_field_choice_group_pane

0xe9d0,	// (0x00044c7b) form2_midp_field_pane_g1

0xe9d8,	// (0x00044c83) form2_midp_field_pane_g2

0xe9e0,	// (0x00044c8b) form2_midp_field_pane_g3

0xe9e8,	// (0x00044c93) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x00045d92) form2_midp_field_pane_g

0xe9f0,	// (0x00044c9b) form2_midp_gauge_slider_pane

0xe9f8,	// (0x00044ca3) form2_midp_gauge_wait_pane

0xea00,	// (0x00044cab) form2_midp_image_pane_ParamLimits

0xea00,	// (0x00044cab) form2_midp_image_pane

0xea1b,	// (0x00044cc6) form2_midp_label_pane_ParamLimits

0xea1b,	// (0x00044cc6) form2_midp_label_pane

0xa399,	// (0x00040644) form2_midp_label_pane_cp_ParamLimits

0xa399,	// (0x00040644) form2_midp_label_pane_cp

0xea34,	// (0x00044cdf) form2_midp_string_pane_ParamLimits

0xea34,	// (0x00044cdf) form2_midp_string_pane

0x0f4f,	// (0x000371fa) form2_midp_text_pane_ParamLimits

0x0f4f,	// (0x000371fa) form2_midp_text_pane

0xea46,	// (0x00044cf1) form2_midp_time_pane

0xea56,	// (0x00044d01) input_focus_pane_cp51_ParamLimits

0xea56,	// (0x00044d01) input_focus_pane_cp51

0xea6e,	// (0x00044d19) form2_midp_label_pane_t1_ParamLimits

0xea6e,	// (0x00044d19) form2_midp_label_pane_t1

0x0f6a,	// (0x00037215) form2_mdip_text_pane_t1_ParamLimits

0x0f6a,	// (0x00037215) form2_mdip_text_pane_t1

0x0f86,	// (0x00037231) form2_midp_time_pane_t1

0xeab6,	// (0x00044d61) form2_midp_gauge_slider_pane_t1

0xa3ba,	// (0x00040665) form2_midp_gauge_slider_pane_t2

0xa3cc,	// (0x00040677) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x00045d9b) form2_midp_gauge_slider_pane_t

0xeac8,	// (0x00044d73) form2_midp_slider_pane

0xead4,	// (0x00044d7f) form2_midp_gauge_wait_pane_t1

0xeae2,	// (0x00044d8d) form2_midp_wait_pane_ParamLimits

0xeae2,	// (0x00044d8d) form2_midp_wait_pane

0xa3de,	// (0x00040689) list_single_2graphic_pane_cp4_ParamLimits

0xa3de,	// (0x00040689) list_single_2graphic_pane_cp4

0x9d5c,	// (0x00040007) list_single_midp_graphic_pane_cp_ParamLimits

0x9d5c,	// (0x00040007) list_single_midp_graphic_pane_cp

0xb417,	// (0x000416c2) list_highlight_pane_cp20

0xeb0d,	// (0x00044db8) list_single_2graphic_pane_g1_cp4

0xe338,	// (0x000445e3) list_single_2graphic_pane_g2_cp4

0xeb15,	// (0x00044dc0) list_single_2graphic_pane_t1_cp4

0xb473,	// (0x0004171e) list_highlight_pane_cp21

0xeb24,	// (0x00044dcf) list_single_midp_graphic_pane_g4_cp

0xeb33,	// (0x00044dde) list_single_midp_graphic_pane_t1_cp

0xa3f5,	// (0x000406a0) form2_mdip_string_pane_t1_ParamLimits

0xa3f5,	// (0x000406a0) form2_mdip_string_pane_t1

0xb417,	// (0x000416c2) bg_wml_button_pane_cp2

0xb40d,	// (0x000416b8) form2_midp_image_pane_g1

0x1a48,	// (0x00037cf3) list_double_large_graphic_pane_g5_ParamLimits

0x1a48,	// (0x00037cf3) list_double_large_graphic_pane_g5

0x919c,	// (0x0003f447) midp_form_pane_ParamLimits

0xb473,	// (0x0004171e) main_apps_wheel_pane_ParamLimits

0x9685,	// (0x0003f930) popup_preview_window_ParamLimits

0x9685,	// (0x0003f930) popup_preview_window

0xcc3a,	// (0x00042ee5) popup_touch_info_window_ParamLimits

0xcc3a,	// (0x00042ee5) popup_touch_info_window

0xcc58,	// (0x00042f03) popup_touch_menu_window_ParamLimits

0xcc58,	// (0x00042f03) popup_touch_menu_window

0xb403,	// (0x000416ae) bg_popup_sub_pane_cp6

0xeb48,	// (0x00044df3) list_touch_menu_pane

0xeb50,	// (0x00044dfb) list_single_touch_menu_pane_ParamLimits

0xeb50,	// (0x00044dfb) list_single_touch_menu_pane

0xeb65,	// (0x00044e10) list_single_touch_menu_pane_t1

0xb473,	// (0x0004171e) bg_popup_sub_pane_cp7_ParamLimits

0xb473,	// (0x0004171e) bg_popup_sub_pane_cp7

0xeb73,	// (0x00044e1e) heading_sub_pane

0xeb7b,	// (0x00044e26) list_touch_info_pane_ParamLimits

0xeb7b,	// (0x00044e26) list_touch_info_pane

0xeb8a,	// (0x00044e35) list_single_touch_info_pane_ParamLimits

0xeb8a,	// (0x00044e35) list_single_touch_info_pane

0xeb9c,	// (0x00044e47) list_single_touch_info_pane_t1

0xebaa,	// (0x00044e55) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x00045da9) list_single_touch_info_pane_t

0xc929,	// (0x00042bd4) bg_popup_heading_pane_cp

0xebb8,	// (0x00044e63) heading_sub_pane_t1

0xcf59,	// (0x00043204) bg_popup_preview_window_pane_cp_ParamLimits

0xcf59,	// (0x00043204) bg_popup_preview_window_pane_cp

0xeb73,	// (0x00044e1e) heading_preview_pane

0xeb7b,	// (0x00044e26) list_preview_pane_ParamLimits

0xeb7b,	// (0x00044e26) list_preview_pane

0xebc6,	// (0x00044e71) popup_preview_window_g1

0xeb8a,	// (0x00044e35) list_single_preview_pane_ParamLimits

0xeb8a,	// (0x00044e35) list_single_preview_pane

0xebce,	// (0x00044e79) list_single_preview_pane_g1

0xebd6,	// (0x00044e81) list_single_preview_pane_t1

0xeb9c,	// (0x00044e47) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x00045dae) list_single_preview_pane_t

0xebe4,	// (0x00044e8f) bg_popup_heading_pane_cp2_ParamLimits

0xebe4,	// (0x00044e8f) bg_popup_heading_pane_cp2

0xebfa,	// (0x00044ea5) heading_preview_pane_g1

0xec02,	// (0x00044ead) heading_preview_pane_t1_ParamLimits

0xec02,	// (0x00044ead) heading_preview_pane_t1

0xb4c6,	// (0x00041771) soft_indicator_pane_t1_ParamLimits

0xbe55,	// (0x00042100) scroll_pane_ParamLimits

0xc250,	// (0x000424fb) scroll_sc2_left_pane

0xc259,	// (0x00042504) scroll_sc2_right_pane

0xc278,	// (0x00042523) scroll_bg_pane_g1_ParamLimits

0xc28d,	// (0x00042538) scroll_bg_pane_g2_ParamLimits

0xc2a5,	// (0x00042550) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x000459af) scroll_bg_pane_g_ParamLimits

0xc278,	// (0x00042523) scroll_handle_pane_g1_ParamLimits

0xc2c7,	// (0x00042572) scroll_handle_pane_g2_ParamLimits

0xc2a5,	// (0x00042550) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x000459b6) scroll_handle_pane_g_ParamLimits

0xcb83,	// (0x00042e2e) popup_choice_list_window_ParamLimits

0xcb83,	// (0x00042e2e) popup_choice_list_window

0xcda5,	// (0x00043050) choice_list_pane

0xce35,	// (0x000430e0) cell_toolbar_pane_t1

0xce5d,	// (0x00043108) toolbar_button_pane_ParamLimits

0xdd58,	// (0x00044003) ai_gene_pane_1_t2_ParamLimits

0xdd58,	// (0x00044003) ai_gene_pane_1_t2

0x0001,

0x0008,	// (0x000362b3) ai_gene_pane_1_t_ParamLimits

0x0008,	// (0x000362b3) ai_gene_pane_1_t

0xec1f,	// (0x00044eca) scroll_sc2_left_pane_g1

0xec1f,	// (0x00044eca) scroll_sc2_right_pane_g1

0xc039,	// (0x000422e4) bg_popup_sub_pane_cp10

0xec29,	// (0x00044ed4) list_choice_list_pane

0xec40,	// (0x00044eeb) list_single_choice_list_pane_ParamLimits

0xec40,	// (0x00044eeb) list_single_choice_list_pane

0xec54,	// (0x00044eff) list_single_choice_list_pane_g1

0xec5c,	// (0x00044f07) list_single_choice_list_pane_t1_ParamLimits

0xec5c,	// (0x00044f07) list_single_choice_list_pane_t1

0xec71,	// (0x00044f1c) choice_list_pane_g1

0xec79,	// (0x00044f24) choice_list_pane_t1

0xb403,	// (0x000416ae) input_focus_pane_cp11

0xc1ae,	// (0x00042459) title_pane_stacon_g2_ParamLimits

0xc1ae,	// (0x00042459) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00045995) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00045995) title_pane_stacon_g

0xc929,	// (0x00042bd4) cursor_press_pane

0x9344,	// (0x0003f5ef) popup_fep_hwr_window_ParamLimits

0x9344,	// (0x0003f5ef) popup_fep_hwr_window

0xcbd7,	// (0x00042e82) popup_fep_vkb_window_ParamLimits

0xcbd7,	// (0x00042e82) popup_fep_vkb_window

0xec87,	// (0x00044f32) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x00045dd7) fep_vkb_side_pane_g_ParamLimits

0x2a13,	// (0x00038cbe) fep_hwr_candidate_pane_ParamLimits

0x2a13,	// (0x00038cbe) fep_hwr_candidate_pane

0x2a3d,	// (0x00038ce8) fep_hwr_side_pane_ParamLimits

0x2a3d,	// (0x00038ce8) fep_hwr_side_pane

0x2a5d,	// (0x00038d08) fep_hwr_top_pane_ParamLimits

0x2a5d,	// (0x00038d08) fep_hwr_top_pane

0x2a75,	// (0x00038d20) fep_hwr_write_pane_ParamLimits

0x2a75,	// (0x00038d20) fep_hwr_write_pane

0xfb2c,	// (0x00045dd7) fep_vkb_side_pane_g

0xec8f,	// (0x00044f3a) fep_hwr_top_pane_g1

0xeca1,	// (0x00044f4c) fep_hwr_top_pane_g2

0x2aa1,	// (0x00038d4c) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x00045db3) fep_hwr_top_pane_g

0x2ab6,	// (0x00038d61) fep_hwr_top_text_pane

0xc41a,	// (0x000426c5) fep_hwr_top_text_pane_g1

0xecd7,	// (0x00044f82) fep_hwr_top_text_pane_t1

0x2bac,	// (0x00038e57) fep_hwr_candidate_pane_g1

0xeee4,	// (0x0004518f) fep_vkb_keypad_pane_g3_ParamLimits

0xeee4,	// (0x0004518f) fep_vkb_keypad_pane_g3

0xef0c,	// (0x000451b7) fep_vkb_keypad_pane_g4_ParamLimits

0xef0c,	// (0x000451b7) fep_vkb_keypad_pane_g4

0xef7b,	// (0x00045226) fep_vkb_bottom_pane_g2_ParamLimits

0xef7b,	// (0x00045226) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x00045dde) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x00045dde) fep_vkb_bottom_pane_g

0xec1f,	// (0x00044eca) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x00045de8) cell_vkb_side_pane_g

0xefbf,	// (0x0004526a) cell_vkb_side_pane_t1

0xefcd,	// (0x00045278) cell_vkb_side_pane_t1_copy1

0xec1f,	// (0x00044eca) bg_fep_vkb_candidate_pane_g2

0xf0a9,	// (0x00045354) cell_vkb_candidate_pane_ParamLimits

0xece5,	// (0x00044f90) aid_size_cell_vkb_ParamLimits

0xece5,	// (0x00044f90) aid_size_cell_vkb

0xf0a9,	// (0x00045354) cell_vkb_candidate_pane

0x2bc6,	// (0x00038e71) bg_popup_fep_shadow_pane_g1

0xed61,	// (0x0004500c) fep_vkb_bottom_pane_ParamLimits

0xed61,	// (0x0004500c) fep_vkb_bottom_pane

0xed9e,	// (0x00045049) fep_vkb_candidate_pane_ParamLimits

0xed9e,	// (0x00045049) fep_vkb_candidate_pane

0xedba,	// (0x00045065) fep_vkb_keypad_pane_ParamLimits

0xedba,	// (0x00045065) fep_vkb_keypad_pane

0xee00,	// (0x000450ab) fep_vkb_side_pane_ParamLimits

0xee00,	// (0x000450ab) fep_vkb_side_pane

0xee3c,	// (0x000450e7) fep_vkb_top_pane_ParamLimits

0xee3c,	// (0x000450e7) fep_vkb_top_pane

0xee78,	// (0x00045123) fep_vkb_top_pane_g1_ParamLimits

0xee78,	// (0x00045123) fep_vkb_top_pane_g1

0xee87,	// (0x00045132) fep_vkb_top_pane_g2_ParamLimits

0xee87,	// (0x00045132) fep_vkb_top_pane_g2

0xee96,	// (0x00045141) fep_vkb_top_pane_g3_ParamLimits

0xee96,	// (0x00045141) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x00045dce) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x00045dce) fep_vkb_top_pane_g

0xeeb4,	// (0x0004515f) fep_vkb_top_text_pane_ParamLimits

0xeeb4,	// (0x0004515f) fep_vkb_top_text_pane

0xa48d,	// (0x00040738) fep_vkb_side_pane_g1_ParamLimits

0xa48d,	// (0x00040738) fep_vkb_side_pane_g1

0xeed3,	// (0x0004517e) grid_vkb_side_pane_ParamLimits

0xeed3,	// (0x0004517e) grid_vkb_side_pane

0x2bce,	// (0x00038e79) bg_popup_fep_shadow_pane_g2

0x2bd7,	// (0x00038e82) bg_popup_fep_shadow_pane_g3

0x2bdf,	// (0x00038e8a) bg_popup_fep_shadow_pane_g4

0x2be8,	// (0x00038e93) bg_popup_fep_shadow_pane_g5

0x2bf2,	// (0x00038e9d) bg_popup_fep_shadow_pane_g6

0x2bfa,	// (0x00038ea5) bg_popup_fep_shadow_pane_g7

0xbf69,	// (0x00042214) bg_popup_fep_shadow_pane_g8

0xef2a,	// (0x000451d5) grid_vkb_keypad_number_pane_ParamLimits

0xef2a,	// (0x000451d5) grid_vkb_keypad_number_pane

0xef3a,	// (0x000451e5) grid_vkb_keypad_pane_ParamLimits

0xef3a,	// (0x000451e5) grid_vkb_keypad_pane

0xef60,	// (0x0004520b) fep_vkb_bottom_pane_g1_ParamLimits

0xef60,	// (0x0004520b) fep_vkb_bottom_pane_g1

0xef89,	// (0x00045234) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef89,	// (0x00045234) grid_vkb_keypad_bottom_left_pane

0xef9e,	// (0x00045249) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef9e,	// (0x00045249) grid_vkb_keypad_bottom_right_pane

0xefb3,	// (0x0004525e) fep_vkb_top_text_pane_g1

0xa4d4,	// (0x0004077f) fep_vkb_top_text_pane_t1

0xa4e6,	// (0x00040791) cell_vkb_side_pane_ParamLimits

0xa4e6,	// (0x00040791) cell_vkb_side_pane

0xec1f,	// (0x00044eca) cell_vkb_side_pane_g1

0xefdb,	// (0x00045286) cell_vkb_keypad_pane_ParamLimits

0xefdb,	// (0x00045286) cell_vkb_keypad_pane

0xf056,	// (0x00045301) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x00045dfb) bg_popup_fep_shadow_pane_g

0xec1f,	// (0x00044eca) cell_hwr_side_pane_g1

0xec1f,	// (0x00044eca) cell_hwr_side_pane_g2

0xf060,	// (0x0004530b) cell_vkb_keypad_pane_t1

0xa4fc,	// (0x000407a7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa4fc,	// (0x000407a7) cell_vkb_keypad_bottom_left_pane

0xa511,	// (0x000407bc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa511,	// (0x000407bc) cell_vkb_keypad_bottom_right_pane

0xec1f,	// (0x00044eca) cell_vkb_keypad_bottom_left_pane_g1

0xec1f,	// (0x00044eca) cell_vkb_keypad_bottom_right_pane_g1

0xf06e,	// (0x00045319) cell_vkb_keypad_number_pane_ParamLimits

0xf06e,	// (0x00045319) cell_vkb_keypad_number_pane

0xf08d,	// (0x00045338) cell_vkb_keypad_number_pane_g1

0xf097,	// (0x00045342) cell_vkb_keypad_number_pane_g2

0xf0a0,	// (0x0004534b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x00045ded) cell_vkb_keypad_number_pane_g

0xf060,	// (0x0004530b) cell_vkb_keypad_number_pane_t1

0xf0c6,	// (0x00045371) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x00045de8) cell_hwr_side_pane_g

0xf0df,	// (0x0004538a) cell_hwr_side_pane_t1

0x2c0c,	// (0x00038eb7) cell_hwr_side_pane_t1_copy1

0xeea6,	// (0x00045151) cell_hwr_candidate_pane_g1

0x2c1a,	// (0x00038ec5) cell_hwr_candidate_pane_t1

0xec1f,	// (0x00044eca) cell_vkb_candidate_pane_g2

0xf165,	// (0x00045410) cell_vkb_candidate_pane_t1

0x8550,	// (0x0003e7fb) bg_popup_fep_shadow_pane_ParamLimits

0x8550,	// (0x0003e7fb) bg_popup_fep_shadow_pane

0x912c,	// (0x0003f3d7) bg_fep_hwr_top_pane_g4

0xecb3,	// (0x00044f5e) bg_hwr_side_pane_g1_ParamLimits

0xecb3,	// (0x00044f5e) bg_hwr_side_pane_g1

0x8749,	// (0x0003e9f4) cell_hwr_side_pane_ParamLimits

0x8749,	// (0x0003e9f4) cell_hwr_side_pane

0x2b2d,	// (0x00038dd8) fep_hwr_write_pane_g1_ParamLimits

0x2b2d,	// (0x00038dd8) fep_hwr_write_pane_g1

0x2b3a,	// (0x00038de5) fep_hwr_write_pane_g2_ParamLimits

0x2b3a,	// (0x00038de5) fep_hwr_write_pane_g2

0x2b47,	// (0x00038df2) fep_hwr_write_pane_g3_ParamLimits

0x2b47,	// (0x00038df2) fep_hwr_write_pane_g3

0x8769,	// (0x0003ea14) fep_hwr_write_pane_g4_ParamLimits

0x8769,	// (0x0003ea14) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x00045dba) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x00045dba) fep_hwr_write_pane_g

0x912c,	// (0x0003f3d7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x912c,	// (0x0003f3d7) bg_fep_hwr_candidate_pane_g2

0x2b6a,	// (0x00038e15) cell_hwr_candidate_pane_ParamLimits

0x2b6a,	// (0x00038e15) cell_hwr_candidate_pane

0x2bac,	// (0x00038e57) fep_hwr_candidate_pane_g1_ParamLimits

0xed13,	// (0x00044fbe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed13,	// (0x00044fbe) bg_popup_fep_shadow_pane_cp2

0xeea6,	// (0x00045151) fep_vkb_top_pane_g4_ParamLimits

0xeea6,	// (0x00045151) fep_vkb_top_pane_g4

0xeec5,	// (0x00045170) fep_vkb_side_pane_g2_ParamLimits

0xeec5,	// (0x00045170) fep_vkb_side_pane_g2

0x7d7e,	// (0x0003e029) list_setting_pane_t4_ParamLimits

0x7d7e,	// (0x0003e029) list_setting_pane_t4

0x7e00,	// (0x0003e0ab) list_setting_number_pane_t5_ParamLimits

0x7e00,	// (0x0003e0ab) list_setting_number_pane_t5

0x90b9,	// (0x0003f364) list_double_heading_pane_cp2_ParamLimits

0x90b9,	// (0x0003f364) list_double_heading_pane_cp2

0xbe89,	// (0x00042134) list_double_heading_pane_g1_cp2_ParamLimits

0xbe89,	// (0x00042134) list_double_heading_pane_g1_cp2

0xbf08,	// (0x000421b3) list_double_heading_pane_g2_cp2_ParamLimits

0xbf08,	// (0x000421b3) list_double_heading_pane_g2_cp2

0xf173,	// (0x0004541e) list_double_heading_pane_t1_cp2_ParamLimits

0xf173,	// (0x0004541e) list_double_heading_pane_t1_cp2

0xf189,	// (0x00045434) list_double_heading_pane_t2_cp2_ParamLimits

0xf189,	// (0x00045434) list_double_heading_pane_t2_cp2

0xb3fb,	// (0x000416a6) aid_value_unit2

0x1598,	// (0x00037843) popup_preview_fixed_window

0xb5a6,	// (0x00041851) bg_popup_preview_window_pane_cp02

0xf19b,	// (0x00045446) list_preview_fixed_pane

0xf1e1,	// (0x0004548c) list_empty_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_empty_pane_fp

0xf1e1,	// (0x0004548c) list_single_cale_day_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_cale_day_pane_fp

0xf1e1,	// (0x0004548c) list_single_graphic_heading_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_graphic_heading_pane_fp

0xf1e1,	// (0x0004548c) list_single_graphic_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_graphic_pane_fp

0xf1e1,	// (0x0004548c) list_single_heading_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_heading_pane_fp

0xf1e1,	// (0x0004548c) list_single_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_pane_fp

0xf1f8,	// (0x000454a3) list_single_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000454a3) list_single_pane_fp_g1

0x1a30,	// (0x00037cdb) list_single_pane_fp_g2_ParamLimits

0x1a30,	// (0x00037cdb) list_single_pane_fp_g2

0x0f99,	// (0x00037244) list_single_pane_fp_g3_ParamLimits

0x0f99,	// (0x00037244) list_single_pane_fp_g3

0xf204,	// (0x000454af) list_single_pane_fp_g4_ParamLimits

0xf204,	// (0x000454af) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x00045e1c) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x00045e1c) list_single_pane_fp_g

0x0fad,	// (0x00037258) list_single_pane_fp_t1_ParamLimits

0x0fad,	// (0x00037258) list_single_pane_fp_t1

0x0fc4,	// (0x0003726f) list_single_graphic_pane_fp_g1_ParamLimits

0x0fc4,	// (0x0003726f) list_single_graphic_pane_fp_g1

0xf1f8,	// (0x000454a3) list_single_graphic_pane_fp_g2_ParamLimits

0xf1f8,	// (0x000454a3) list_single_graphic_pane_fp_g2

0x1a30,	// (0x00037cdb) list_single_graphic_pane_fp_g3_ParamLimits

0x1a30,	// (0x00037cdb) list_single_graphic_pane_fp_g3

0x0f99,	// (0x00037244) list_single_graphic_pane_fp_g4_ParamLimits

0x0f99,	// (0x00037244) list_single_graphic_pane_fp_g4

0xf204,	// (0x000454af) list_single_graphic_pane_fp_g5_ParamLimits

0xf204,	// (0x000454af) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x00045e25) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x00045e25) list_single_graphic_pane_fp_g

0x0fd0,	// (0x0003727b) list_single_graphic_pane_fp_t1_ParamLimits

0x0fd0,	// (0x0003727b) list_single_graphic_pane_fp_t1

0x0fc4,	// (0x0003726f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0fc4,	// (0x0003726f) list_single_graphic_heading_pane_fp_g1

0xf1f8,	// (0x000454a3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf1f8,	// (0x000454a3) list_single_graphic_heading_pane_fp_g2

0x1a30,	// (0x00037cdb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1a30,	// (0x00037cdb) list_single_graphic_heading_pane_fp_g3

0x0f99,	// (0x00037244) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0f99,	// (0x00037244) list_single_graphic_heading_pane_fp_g4

0xf204,	// (0x000454af) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf204,	// (0x000454af) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00045e25) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00045e25) list_single_graphic_heading_pane_fp_g

0x0fe6,	// (0x00037291) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0fe6,	// (0x00037291) list_single_graphic_heading_pane_fp_t1

0x0ffc,	// (0x000372a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0ffc,	// (0x000372a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00045e30) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00045e30) list_single_graphic_heading_pane_fp_t

0x100e,	// (0x000372b9) list_single_cale_day_pane_fp_g1_ParamLimits

0x100e,	// (0x000372b9) list_single_cale_day_pane_fp_g1

0xf210,	// (0x000454bb) list_single_cale_day_pane_fp_g2_ParamLimits

0xf210,	// (0x000454bb) list_single_cale_day_pane_fp_g2

0x1046,	// (0x000372f1) list_single_cale_day_pane_fp_g3_ParamLimits

0x1046,	// (0x000372f1) list_single_cale_day_pane_fp_g3

0x106e,	// (0x00037319) list_single_cale_day_pane_fp_g4_ParamLimits

0x106e,	// (0x00037319) list_single_cale_day_pane_fp_g4

0x1092,	// (0x0003733d) list_single_cale_day_pane_fp_g5_ParamLimits

0x1092,	// (0x0003733d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x00045e35) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x00045e35) list_single_cale_day_pane_fp_g

0x10b6,	// (0x00037361) list_single_cale_day_pane_fp_t1_ParamLimits

0x10b6,	// (0x00037361) list_single_cale_day_pane_fp_t1

0x10dc,	// (0x00037387) list_single_cale_day_pane_fp_t2_ParamLimits

0x10dc,	// (0x00037387) list_single_cale_day_pane_fp_t2

0x10f5,	// (0x000373a0) list_single_cale_day_pane_fp_t3_ParamLimits

0x10f5,	// (0x000373a0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x00045e40) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x00045e40) list_single_cale_day_pane_fp_t

0xf1f8,	// (0x000454a3) list_empty_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000454a3) list_empty_pane_fp_g1

0x110e,	// (0x000373b9) list_empty_pane_fp_t1

0x111c,	// (0x000373c7) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x00045e47) list_empty_pane_fp_t

0xf1f8,	// (0x000454a3) list_single_heading_pane_fp_g1_ParamLimits

0xf1f8,	// (0x000454a3) list_single_heading_pane_fp_g1

0x1a30,	// (0x00037cdb) list_single_heading_pane_fp_g2_ParamLimits

0x1a30,	// (0x00037cdb) list_single_heading_pane_fp_g2

0x0f99,	// (0x00037244) list_single_heading_pane_fp_g3_ParamLimits

0x0f99,	// (0x00037244) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x00045e4c) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x00045e4c) list_single_heading_pane_fp_g

0x112a,	// (0x000373d5) list_single_heading_pane_fp_t1_ParamLimits

0x112a,	// (0x000373d5) list_single_heading_pane_fp_t1

0x113c,	// (0x000373e7) list_single_heading_pane_fp_t2_ParamLimits

0x113c,	// (0x000373e7) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x00045e53) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x00045e53) list_single_heading_pane_fp_t

0xc045,	// (0x000422f0) aid_size_cell_fast

0xb589,	// (0x00041834) soft_indicator_pane_cp1_t1

0xc082,	// (0x0004232d) cell_app_pane_cp2_ParamLimits

0xc082,	// (0x0004232d) cell_app_pane_cp2

0x29fc,	// (0x00038ca7) fep_hwr_candidate_drop_down_list_pane

0x913a,	// (0x0003f3e5) fep_hwr_candidate_pane_g3_ParamLimits

0x913a,	// (0x0003f3e5) fep_hwr_candidate_pane_g3

0x9147,	// (0x0003f3f2) fep_hwr_candidate_pane_g4_ParamLimits

0x9147,	// (0x0003f3f2) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x00045dc7) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x00045dc7) fep_hwr_candidate_pane_g

0xed8d,	// (0x00045038) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed8d,	// (0x00045038) fep_vkb_candidate_drop_down_list_pane

0xf0ce,	// (0x00045379) fep_vkb_candidate_pane_g3

0xf0d6,	// (0x00045381) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x00045df4) fep_vkb_candidate_pane_g

0xeea6,	// (0x00045151) cell_hwr_candidate_pane_g1_ParamLimits

0xf0ed,	// (0x00045398) cell_hwr_candidate_pane_g3_ParamLimits

0xf0ed,	// (0x00045398) cell_hwr_candidate_pane_g3

0xf10e,	// (0x000453b9) cell_hwr_candidate_pane_g4_ParamLimits

0xf10e,	// (0x000453b9) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x00045e0e) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x00045e0e) cell_hwr_candidate_pane_g

0xf12f,	// (0x000453da) cell_vkb_candidate_pane_g3_ParamLimits

0xf12f,	// (0x000453da) cell_vkb_candidate_pane_g3

0xf14a,	// (0x000453f5) cell_vkb_candidate_pane_g4_ParamLimits

0xf14a,	// (0x000453f5) cell_vkb_candidate_pane_g4

0xf21c,	// (0x000454c7) cell_app_pane_cp2_g1_ParamLimits

0xf21c,	// (0x000454c7) cell_app_pane_cp2_g1

0xf23a,	// (0x000454e5) cell_app_pane_cp2_g2_ParamLimits

0xf23a,	// (0x000454e5) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x00045e58) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x00045e58) cell_app_pane_cp2_g

0xf246,	// (0x000454f1) cell_app_pane_cp2_t1_ParamLimits

0xf246,	// (0x000454f1) cell_app_pane_cp2_t1

0xbeee,	// (0x00042199) grid_highlight_pane_cp1_ParamLimits

0xbeee,	// (0x00042199) grid_highlight_pane_cp1

0x2c38,	// (0x00038ee3) cell_hwr_candidate_pane_cp1_ParamLimits

0x2c38,	// (0x00038ee3) cell_hwr_candidate_pane_cp1

0xeea6,	// (0x00045151) fep_hwr_candidate_drop_down_list_pane_g1

0xf258,	// (0x00045503) fep_hwr_candidate_drop_down_list_pane_g2

0xf265,	// (0x00045510) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00045e5d) fep_hwr_candidate_drop_down_list_pane_g

0x2c57,	// (0x00038f02) fep_hwr_candidate_drop_down_list_scroll_pane

0x2c60,	// (0x00038f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2c60,	// (0x00038f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2c6d,	// (0x00038f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2c6d,	// (0x00038f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2c7a,	// (0x00038f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2c7a,	// (0x00038f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf12f,	// (0x000453da) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf12f,	// (0x000453da) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf14a,	// (0x000453f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf14a,	// (0x000453f5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2c87,	// (0x00038f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2c87,	// (0x00038f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2ca2,	// (0x00038f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2ca2,	// (0x00038f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf272,	// (0x0004551d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf272,	// (0x0004551d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00045e64) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00045e64) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf28d,	// (0x00045538) cell_vkb_candidate_pane_cp1_ParamLimits

0xf28d,	// (0x00045538) cell_vkb_candidate_pane_cp1

0xeea6,	// (0x00045151) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xeea6,	// (0x00045151) fep_vkb_candidate_drop_down_list_pane_g1

0xf258,	// (0x00045503) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf258,	// (0x00045503) fep_vkb_candidate_drop_down_list_pane_g2

0xf265,	// (0x00045510) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf265,	// (0x00045510) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00045e5d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00045e5d) fep_vkb_candidate_drop_down_list_pane_g

0xf2ad,	// (0x00045558) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf2ad,	// (0x00045558) fep_vkb_candidate_drop_down_list_scroll_pane

0xf2ba,	// (0x00045565) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf2ba,	// (0x00045565) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf2c7,	// (0x00045572) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf2c7,	// (0x00045572) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf2d3,	// (0x0004557e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf2d3,	// (0x0004557e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf0ed,	// (0x00045398) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf0ed,	// (0x00045398) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf10e,	// (0x000453b9) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf10e,	// (0x000453b9) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf2df,	// (0x0004558a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf2df,	// (0x0004558a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf300,	// (0x000455ab) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf300,	// (0x000455ab) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf272,	// (0x0004551d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf272,	// (0x0004551d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00045e75) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00045e75) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8c19,	// (0x0003eec4) title_pane_g1_ParamLimits

0x8c2a,	// (0x0003eed5) title_pane_g2_ParamLimits

0xf56a,	// (0x00045815) title_pane_g_ParamLimits

0xc40a,	// (0x000426b5) aid_call2_pane

0xc412,	// (0x000426bd) aid_call_pane

0xc41a,	// (0x000426c5) popup_clock_analogue_window_g1

0xc41a,	// (0x000426c5) popup_clock_analogue_window_g2

0x1d75,	// (0x00038020) popup_clock_analogue_window_g3

0x1d7e,	// (0x00038029) popup_clock_analogue_window_g4

0xb40d,	// (0x000416b8) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x000459c4) popup_clock_analogue_window_g

0x1d86,	// (0x00038031) popup_clock_analogue_window_t1

0x1dbd,	// (0x00038068) clock_digital_number_pane_ParamLimits

0x1dbd,	// (0x00038068) clock_digital_number_pane

0x1dc9,	// (0x00038074) clock_digital_number_pane_cp02_ParamLimits

0x1dc9,	// (0x00038074) clock_digital_number_pane_cp02

0x1dd5,	// (0x00038080) clock_digital_number_pane_cp03_ParamLimits

0x1dd5,	// (0x00038080) clock_digital_number_pane_cp03

0x1de1,	// (0x0003808c) clock_digital_number_pane_cp04_ParamLimits

0x1de1,	// (0x0003808c) clock_digital_number_pane_cp04

0x1ded,	// (0x00038098) clock_digital_separator_pane_ParamLimits

0x1ded,	// (0x00038098) clock_digital_separator_pane

0x1df9,	// (0x000380a4) popup_clock_digital_window_t1_ParamLimits

0x1df9,	// (0x000380a4) popup_clock_digital_window_t1

0xb40d,	// (0x000416b8) clock_digital_number_pane_g1

0xb40d,	// (0x000416b8) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x000459cf) clock_digital_number_pane_g

0xb40d,	// (0x000416b8) clock_digital_separator_pane_g1

0xb40d,	// (0x000416b8) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x000459cf) clock_digital_separator_pane_g

0x9929,	// (0x0003fbd4) aid_fill_nsta_ParamLimits

0x9a58,	// (0x0003fd03) indicator_nsta_pane_ParamLimits

0xcd4e,	// (0x00042ff9) popup_clock_analogue_window

0xcd4e,	// (0x00042ff9) popup_clock_digital_window

0xce27,	// (0x000430d2) grid_indicator_nsta_pane_ParamLimits

0xe8c5,	// (0x00044b70) clock_nsta_pane_t2

0x0001,

0x00f2,	// (0x0003639d) clock_nsta_pane_t

0x1d39,	// (0x00037fe4) aid_size_max_handle

0x83a0,	// (0x0003e64b) aid_size_min_handle

0xc929,	// (0x00042bd4) editor_scroll_pane

0xf321,	// (0x000455cc) ex_editor_pane

0xc001,	// (0x000422ac) scroll_pane_cp13

0xbe81,	// (0x0004212c) scroll_pane_cp14

0xc444,	// (0x000426ef) scroll_pane_cp36

0x90ca,	// (0x0003f375) list_single_graphic_hl_pane_cp2_ParamLimits

0x90ca,	// (0x0003f375) list_single_graphic_hl_pane_cp2

0xa15c,	// (0x00040407) list_single_graphic_hl_pane_ParamLimits

0xa15c,	// (0x00040407) list_single_graphic_hl_pane

0x1152,	// (0x000373fd) aid_size_min_hl_cp1

0xf329,	// (0x000455d4) list_highlight_pane_cp34_ParamLimits

0xf329,	// (0x000455d4) list_highlight_pane_cp34

0xf33a,	// (0x000455e5) list_single_graphic_hl_pane_g1_ParamLimits

0xf33a,	// (0x000455e5) list_single_graphic_hl_pane_g1

0x8073,	// (0x0003e31e) list_single_graphic_hl_pane_g2_ParamLimits

0x8073,	// (0x0003e31e) list_single_graphic_hl_pane_g2

0x8073,	// (0x0003e31e) list_single_graphic_hl_pane_g3_ParamLimits

0x8073,	// (0x0003e31e) list_single_graphic_hl_pane_g3

0x2d34,	// (0x00038fdf) list_single_graphic_hl_pane_g4_ParamLimits

0x2d34,	// (0x00038fdf) list_single_graphic_hl_pane_g4

0x877e,	// (0x0003ea29) list_single_graphic_hl_pane_g5_ParamLimits

0x877e,	// (0x0003ea29) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x00045e86) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x00045e86) list_single_graphic_hl_pane_g

0x807f,	// (0x0003e32a) list_single_graphic_hl_pane_t1_ParamLimits

0x807f,	// (0x0003e32a) list_single_graphic_hl_pane_t1

0xf347,	// (0x000455f2) aid_size_min_hl_cp2

0xf350,	// (0x000455fb) list_highlight_pane_cp34_cp2_ParamLimits

0xf350,	// (0x000455fb) list_highlight_pane_cp34_cp2

0xf33a,	// (0x000455e5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf33a,	// (0x000455e5) list_single_graphic_hl_pane_g1_cp2

0xf35d,	// (0x00045608) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf35d,	// (0x00045608) list_single_graphic_hl_pane_g2_cp2

0xf369,	// (0x00045614) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf369,	// (0x00045614) list_single_graphic_hl_pane_g3_cp2

0xc860,	// (0x00042b0b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc860,	// (0x00042b0b) list_single_graphic_hl_pane_g4_cp2

0xf377,	// (0x00045622) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf377,	// (0x00045622) list_single_graphic_hl_pane_g5_cp2

0x8421,	// (0x0003e6cc) control_pane_g4_ParamLimits

0x8421,	// (0x0003e6cc) control_pane_g4

0xc039,	// (0x000422e4) bg_popup_sub_pane_cp10_ParamLimits

0xec29,	// (0x00044ed4) list_choice_list_pane_ParamLimits

0xec38,	// (0x00044ee3) scroll_pane_cp23

0xb5a6,	// (0x00041851) bg_popup_preview_window_pane_cp02_ParamLimits

0xf19b,	// (0x00045446) list_preview_fixed_pane_ParamLimits

0xf1b1,	// (0x0004545c) list_preview_fixed_pane_cp_ParamLimits

0xf1b1,	// (0x0004545c) list_preview_fixed_pane_cp

0xf1bd,	// (0x00045468) popup_preview_fixed_window_g1_ParamLimits

0xf1bd,	// (0x00045468) popup_preview_fixed_window_g1

0xf1c9,	// (0x00045474) popup_preview_fixed_window_g2_ParamLimits

0xf1c9,	// (0x00045474) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x00045e15) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x00045e15) popup_preview_fixed_window_g

0x1c28,	// (0x00037ed3) aid_navi_side_left_pane_ParamLimits

0x1c3d,	// (0x00037ee8) aid_navi_side_right_pane_ParamLimits

0x1c55,	// (0x00037f00) navi_icon_pane_stacon_ParamLimits

0x1c69,	// (0x00037f14) navi_navi_pane_stacon_ParamLimits

0x1c55,	// (0x00037f00) navi_text_pane_stacon_ParamLimits

0xb403,	// (0x000416ae) main_text_info_pane

0xf3a1,	// (0x0004564c) listscroll_text_info_pane

0xf3a9,	// (0x00045654) list_text_info_pane_ParamLimits

0xf3a9,	// (0x00045654) list_text_info_pane

0xf3b8,	// (0x00045663) scroll_pane_cp24_ParamLimits

0xf3b8,	// (0x00045663) scroll_pane_cp24

0xa52c,	// (0x000407d7) list_text_info_pane_t1_ParamLimits

0xa52c,	// (0x000407d7) list_text_info_pane_t1

0x92b9,	// (0x0003f564) popup_fast_swap2_window_ParamLimits

0x92b9,	// (0x0003f564) popup_fast_swap2_window

0xf3d6,	// (0x00045681) aid_size_cell_fast2

0xb403,	// (0x000416ae) bg_popup_window_pane_cp17

0xd200,	// (0x000434ab) heading_pane_cp2

0xbbb4,	// (0x00041e5f) listscroll_fast2_pane

0xf3e0,	// (0x0004568b) grid_fast2_pane

0xf3ea,	// (0x00045695) listscroll_fast2_pane_g1

0xf3f2,	// (0x0004569d) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x00045e91) listscroll_fast2_pane_g

0xc001,	// (0x000422ac) scroll_pane_cp26

0xf3fc,	// (0x000456a7) cell_fast2_pane_ParamLimits

0xf3fc,	// (0x000456a7) cell_fast2_pane

0xf411,	// (0x000456bc) cell_fast2_pane_g1

0xf41a,	// (0x000456c5) cell_fast2_pane_g2

0xf423,	// (0x000456ce) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x00045e96) cell_fast2_pane_g

0xbc48,	// (0x00041ef3) grid_highlight_pane_cp9

0xbc5d,	// (0x00041f08) main_eswt_pane_ParamLimits

0xbc5d,	// (0x00041f08) main_eswt_pane

0xf3cd,	// (0x00045678) list_single_text_info_pane

0xf42b,	// (0x000456d6) eswt_ctrl_button_pane

0xf42b,	// (0x000456d6) eswt_ctrl_canvas_pane

0xf433,	// (0x000456de) eswt_ctrl_combo_pane

0xf42b,	// (0x000456d6) eswt_ctrl_default_pane

0xf42b,	// (0x000456d6) eswt_ctrl_label_pane

0xf43b,	// (0x000456e6) eswt_ctrl_wait_pane

0xf443,	// (0x000456ee) eswt_shell_pane

0xb403,	// (0x000416ae) listscroll_eswt_app_pane

0xf463,	// (0x0004570e) popup_eswt_tasktip_window_ParamLimits

0xf463,	// (0x0004570e) popup_eswt_tasktip_window

0xcf59,	// (0x00043204) bg_popup_window_pane_cp18

0xf474,	// (0x0004571f) eswt_control_pane_g1_ParamLimits

0xf474,	// (0x0004571f) eswt_control_pane_g1

0xf481,	// (0x0004572c) eswt_control_pane_g2_ParamLimits

0xf481,	// (0x0004572c) eswt_control_pane_g2

0xf48e,	// (0x00045739) eswt_control_pane_g3_ParamLimits

0xf48e,	// (0x00045739) eswt_control_pane_g3

0xf49b,	// (0x00045746) eswt_control_pane_g4_ParamLimits

0xf49b,	// (0x00045746) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x00045e9d) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x00045e9d) eswt_control_pane_g

0xbeee,	// (0x00042199) bg_button_pane_ParamLimits

0xbeee,	// (0x00042199) bg_button_pane

0xbc5d,	// (0x00041f08) common_borders_pane_copy2_ParamLimits

0xbc5d,	// (0x00041f08) common_borders_pane_copy2

0xf4a8,	// (0x00045753) control_button_pane_g1_ParamLimits

0xf4a8,	// (0x00045753) control_button_pane_g1

0xf4b4,	// (0x0004575f) control_button_pane_g2_ParamLimits

0xf4b4,	// (0x0004575f) control_button_pane_g2

0xf4c0,	// (0x0004576b) control_button_pane_g3_ParamLimits

0xf4c0,	// (0x0004576b) control_button_pane_g3

0x0002,

0xfbfb,	// (0x00045ea6) control_button_pane_g_ParamLimits

0xfbfb,	// (0x00045ea6) control_button_pane_g

0xf4d4,	// (0x0004577f) control_button_pane_t1

0xf4e2,	// (0x0004578d) control_button_pane_t2

0x0001,

0xfc02,	// (0x00045ead) control_button_pane_t

0xce69,	// (0x00043114) bg_button_pane_g1

0xce71,	// (0x0004311c) bg_button_pane_g2

0xce79,	// (0x00043124) bg_button_pane_g3

0xce81,	// (0x0004312c) bg_button_pane_g4

0xce89,	// (0x00043134) bg_button_pane_g5

0xce91,	// (0x0004313c) bg_button_pane_g6

0xce99,	// (0x00043144) bg_button_pane_g7

0xcea1,	// (0x0004314c) bg_button_pane_g8

0xcea9,	// (0x00043154) bg_button_pane_g9

0x0008,

0xf877,	// (0x00045b22) bg_button_pane_g

0xebe4,	// (0x00044e8f) common_borders_pane_ParamLimits

0xebe4,	// (0x00044e8f) common_borders_pane

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy1_ParamLimits

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy1

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy1_ParamLimits

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy1

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy1_ParamLimits

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy1

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy1_ParamLimits

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy1

0xec1f,	// (0x00044eca) bg_eswt_ctrl_canvas_pane_g1

0xebe4,	// (0x00044e8f) common_borders_pane_cp2_ParamLimits

0xebe4,	// (0x00044e8f) common_borders_pane_cp2

0xebe4,	// (0x00044e8f) common_borders_pane_cp3_ParamLimits

0xebe4,	// (0x00044e8f) common_borders_pane_cp3

0xf4f0,	// (0x0004579b) separator_horizontal_pane

0xf4f8,	// (0x000457a3) separator_vertical_pane

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy2_ParamLimits

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy2

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy2_ParamLimits

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy2

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy2_ParamLimits

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy2

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy2_ParamLimits

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy2

0xb403,	// (0x000416ae) common_borders_pane_cp4

0xf501,	// (0x000457ac) separator_horizontal_pane_g1

0xf50a,	// (0x000457b5) separator_horizontal_pane_g2

0xf513,	// (0x000457be) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x00045eb2) separator_horizontal_pane_g

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy3_ParamLimits

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy3

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy3_ParamLimits

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy3

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy3_ParamLimits

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy3

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy3_ParamLimits

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy3

0xb403,	// (0x000416ae) common_borders_pane_cp5

0xf51c,	// (0x000457c7) separator_vertical_pane_g1

0xf525,	// (0x000457d0) separator_vertical_pane_g2

0xf52e,	// (0x000457d9) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x00045eb9) separator_vertical_pane_g

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy4_ParamLimits

0xf474,	// (0x0004571f) eswt_control_pane_g1_copy4

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy4_ParamLimits

0xf481,	// (0x0004572c) eswt_control_pane_g2_copy4

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy4_ParamLimits

0xf48e,	// (0x00045739) eswt_control_pane_g3_copy4

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy4_ParamLimits

0xf49b,	// (0x00045746) eswt_control_pane_g4_copy4

0xa54a,	// (0x000407f5) eswt_ctrl_combo_button_pane

0xa552,	// (0x000407fd) eswt_ctrl_input_pane

0xa55a,	// (0x00040805) popup_choice_list_window_cp70

0xa562,	// (0x0004080d) eswt_ctrl_input_pane_t1

0xb403,	// (0x000416ae) input_focus_pane_cp70

0xebe4,	// (0x00044e8f) bg_button_pane_cp70_ParamLimits

0xebe4,	// (0x00044e8f) bg_button_pane_cp70

0xa570,	// (0x0004081b) eswt_ctrl_combo_button_pane_g1

0xf537,	// (0x000457e2) wait_bar_pane_cp70

0xcf59,	// (0x00043204) bg_popup_window_pane_cp70_ParamLimits

0xcf59,	// (0x00043204) bg_popup_window_pane_cp70

0xf53f,	// (0x000457ea) popup_eswt_tasktip_window_t1

0xf555,	// (0x00045800) wait_bar_pane_cp71_ParamLimits

0xf555,	// (0x00045800) wait_bar_pane_cp71

0xf561,	// (0x0004580c) grid_eswt_app_pane

0xc259,	// (0x00042504) scroll_pane_cp70

0xa578,	// (0x00040823) cell_eswt_app_pane_ParamLimits

0xa578,	// (0x00040823) cell_eswt_app_pane

0xa5a2,	// (0x0004084d) cell_eswt_app_pane_g1_ParamLimits

0xa5a2,	// (0x0004084d) cell_eswt_app_pane_g1

0xa5d1,	// (0x0004087c) cell_eswt_app_pane_g2_ParamLimits

0xa5d1,	// (0x0004087c) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x00045ec0) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x00045ec0) cell_eswt_app_pane_g

0xa5fa,	// (0x000408a5) cell_eswt_app_pane_t1_ParamLimits

0xa5fa,	// (0x000408a5) cell_eswt_app_pane_t1

0x478c,	// (0x0003aa37) grid_highlight_pane_cp70_ParamLimits

0x478c,	// (0x0003aa37) grid_highlight_pane_cp70

0xc7fc,	// (0x00042aa7) set_content_pane_g1

0xcb00,	// (0x00042dab) status_small_volume_pane

0x2cbd,	// (0x00038f68) status_small_volume_pane_g1

0x2cc5,	// (0x00038f70) volume_small2_pane

0x2cce,	// (0x00038f79) volume_small2_pane_g1

0x2cd7,	// (0x00038f82) volume_small2_pane_g2

0x2ce0,	// (0x00038f8b) volume_small2_pane_g3

0x2ce9,	// (0x00038f94) volume_small2_pane_g4

0x2cf2,	// (0x00038f9d) volume_small2_pane_g5

0x2cfb,	// (0x00038fa6) volume_small2_pane_g6

0x2d04,	// (0x00038faf) volume_small2_pane_g7

0x2d0d,	// (0x00038fb8) volume_small2_pane_g8

0x2d16,	// (0x00038fc1) volume_small2_pane_g9

0x2d1f,	// (0x00038fca) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x00045ec5) volume_small2_pane_g

0xefb3,	// (0x0004525e) fep_vkb_top_text_pane_g1_ParamLimits

0xa4d4,	// (0x0004077f) fep_vkb_top_text_pane_t1_ParamLimits

0xf1d5,	// (0x00045480) popup_preview_fixed_window_g3_ParamLimits

0xf1d5,	// (0x00045480) popup_preview_fixed_window_g3

0x98bc,	// (0x0003fb67) popup_toolbar_trans_pane

0x9fd4,	// (0x0004027f) aid_height_set_list_ParamLimits

0xd94a,	// (0x00043bf5) aid_size_parent_ParamLimits

0xc039,	// (0x000422e4) list_highlight_pane_cp2_ParamLimits

0xc7fc,	// (0x00042aa7) set_content_pane_g1_ParamLimits

0x8061,	// (0x0003e30c) list_single_image_pane_ParamLimits

0x8061,	// (0x0003e30c) list_single_image_pane

0xa62c,	// (0x000408d7) aid_size_cell_image_ParamLimits

0xa62c,	// (0x000408d7) aid_size_cell_image

0xa639,	// (0x000408e4) grid_single_image_pane_ParamLimits

0xa639,	// (0x000408e4) grid_single_image_pane

0xbe89,	// (0x00042134) list_single_image_pane_g1_ParamLimits

0xbe89,	// (0x00042134) list_single_image_pane_g1

0xbf08,	// (0x000421b3) list_single_image_pane_g2_ParamLimits

0xbf08,	// (0x000421b3) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x00045eda) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x00045eda) list_single_image_pane_g

0x47b1,	// (0x0003aa5c) list_single_image_pane_t1_ParamLimits

0x47b1,	// (0x0003aa5c) list_single_image_pane_t1

0xa645,	// (0x000408f0) cell_image_list_pane_ParamLimits

0xa645,	// (0x000408f0) cell_image_list_pane

0xa659,	// (0x00040904) cell_image_list_pane_g1

0xa662,	// (0x0004090d) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00045edf) cell_image_list_pane_g

0x47ed,	// (0x0003aa98) aid_size_cell_tb_trans_pane

0xbeee,	// (0x00042199) bg_tb_trans_pane

0x47ff,	// (0x0003aaaa) grid_tb_trans_pane

0xce69,	// (0x00043114) bg_tb_trans_pane_g1

0xce71,	// (0x0004311c) bg_tb_trans_pane_g2

0xce79,	// (0x00043124) bg_tb_trans_pane_g3

0xce81,	// (0x0004312c) bg_tb_trans_pane_g4

0xce89,	// (0x00043134) bg_tb_trans_pane_g5

0xcea1,	// (0x0004314c) bg_tb_trans_pane_g6

0xcea9,	// (0x00043154) bg_tb_trans_pane_g7

0xce91,	// (0x0004313c) bg_tb_trans_pane_g8

0xce99,	// (0x00043144) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x00045ee4) bg_tb_trans_pane_g

0x4813,	// (0x0003aabe) cell_toolbar_trans_pane_ParamLimits

0x4813,	// (0x0003aabe) cell_toolbar_trans_pane

0xec1f,	// (0x00044eca) cell_toolbar_trans_pane_g1

0xa37d,	// (0x00040628) list_form2_midp_pane_t1

0xa38b,	// (0x00040636) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x00045d8d) list_form2_midp_pane_t

0xe97c,	// (0x00044c27) scroll_pane_cp51_ParamLimits

0xeaf2,	// (0x00044d9d) form2_midp_wait_pane_g1

0xeafb,	// (0x00044da6) form2_midp_wait_pane_g2

0xeb04,	// (0x00044daf) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x00045da2) form2_midp_wait_pane_g

0xb473,	// (0x0004171e) list_highlight_pane_cp21_ParamLimits

0xeb24,	// (0x00044dcf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb33,	// (0x00044dde) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe011,	// (0x000442bc) list_single_2graphic_im_pane_ParamLimits

0xe011,	// (0x000442bc) list_single_2graphic_im_pane

0xa66b,	// (0x00040916) list_single_2graphic_im_pane_g1_ParamLimits

0xa66b,	// (0x00040916) list_single_2graphic_im_pane_g1

0xa67c,	// (0x00040927) list_single_2graphic_im_pane_g2_ParamLimits

0xa67c,	// (0x00040927) list_single_2graphic_im_pane_g2

0xa688,	// (0x00040933) list_single_2graphic_im_pane_g3_ParamLimits

0xa688,	// (0x00040933) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x00045ef7) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x00045ef7) list_single_2graphic_im_pane_g

0xa69c,	// (0x00040947) list_single_2graphic_im_pane_t1_ParamLimits

0xa69c,	// (0x00040947) list_single_2graphic_im_pane_t1

0xf1e1,	// (0x0004548c) list_single_graphic_2heading_pane_fp_ParamLimits

0xf1e1,	// (0x0004548c) list_single_graphic_2heading_pane_fp

0x0fc4,	// (0x0003726f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0fc4,	// (0x0003726f) list_single_graphic_2heading_pane_fp_g1

0xf1f8,	// (0x000454a3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf1f8,	// (0x000454a3) list_single_graphic_2heading_pane_fp_g2

0x1a30,	// (0x00037cdb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1a30,	// (0x00037cdb) list_single_graphic_2heading_pane_fp_g3

0x0f99,	// (0x00037244) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0f99,	// (0x00037244) list_single_graphic_2heading_pane_fp_g4

0xf204,	// (0x000454af) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf204,	// (0x000454af) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00045e25) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00045e25) list_single_graphic_2heading_pane_fp_g

0x117b,	// (0x00037426) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x117b,	// (0x00037426) list_single_graphic_2heading_pane_fp_t1

0x0ffc,	// (0x000372a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0ffc,	// (0x000372a7) list_single_graphic_2heading_pane_fp_t2

0x1191,	// (0x0003743c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1191,	// (0x0003743c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00045f00) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00045f00) list_single_graphic_2heading_pane_fp_t

0xecbf,	// (0x00044f6a) fep_hwr_write_pane_g5_ParamLimits

0xecbf,	// (0x00044f6a) fep_hwr_write_pane_g5

0xeccb,	// (0x00044f76) fep_hwr_write_pane_g6_ParamLimits

0xeccb,	// (0x00044f76) fep_hwr_write_pane_g6

0xf443,	// (0x000456ee) eswt_shell_pane_ParamLimits

0xcf59,	// (0x00043204) bg_popup_window_pane_cp18_ParamLimits

0xdf51,	// (0x000441fc) heading_pane_cp70

0xf53f,	// (0x000457ea) popup_eswt_tasktip_window_t1_ParamLimits

0x997d,	// (0x0003fc28) aid_touch_tab_arrow_left

0x9993,	// (0x0003fc3e) aid_touch_tab_arrow_right

0x8c42,	// (0x0003eeed) title_pane_g3_ParamLimits

0x8c42,	// (0x0003eeed) title_pane_g3

0xbead,	// (0x00042158) set_value_pane_g1

0x98bc,	// (0x0003fb67) popup_toolbar_trans_pane_ParamLimits

0x47ed,	// (0x0003aa98) aid_size_cell_tb_trans_pane_ParamLimits

0xbeee,	// (0x00042199) bg_tb_trans_pane_ParamLimits

0x47ff,	// (0x0003aaaa) grid_tb_trans_pane_ParamLimits

0xb5a6,	// (0x00041851) cont_note_pane_ParamLimits

0xb5a6,	// (0x00041851) cont_note_pane

0xbc5d,	// (0x00041f08) cont_snote2_single_text_pane_ParamLimits

0xbc5d,	// (0x00041f08) cont_snote2_single_text_pane

0xbc5d,	// (0x00041f08) cont_snote2_single_graphic_pane_ParamLimits

0xbc5d,	// (0x00041f08) cont_snote2_single_graphic_pane

0xd416,	// (0x000436c1) cont_note_wait_pane_ParamLimits

0xd416,	// (0x000436c1) cont_note_wait_pane

0xd416,	// (0x000436c1) cont_note_image_pane_ParamLimits

0xd416,	// (0x000436c1) cont_note_image_pane

0x48a7,	// (0x0003ab52) popup_note2_window_g1_ParamLimits

0x48a7,	// (0x0003ab52) popup_note2_window_g1

0x48d8,	// (0x0003ab83) popup_note2_window_t1_ParamLimits

0x48d8,	// (0x0003ab83) popup_note2_window_t1

0x491d,	// (0x0003abc8) popup_note2_window_t2_ParamLimits

0x491d,	// (0x0003abc8) popup_note2_window_t2

0x4962,	// (0x0003ac0d) popup_note2_window_t3_ParamLimits

0x4962,	// (0x0003ac0d) popup_note2_window_t3

0x49a7,	// (0x0003ac52) popup_note2_window_t4_ParamLimits

0x49a7,	// (0x0003ac52) popup_note2_window_t4

0xb824,	// (0x00041acf) popup_note2_window_t5_ParamLimits

0xb824,	// (0x00041acf) popup_note2_window_t5

0x0004,

0xfc61,	// (0x00045f0c) popup_note2_window_t_ParamLimits

0xfc61,	// (0x00045f0c) popup_note2_window_t

0x49d6,	// (0x0003ac81) popup_note2_image_window_g1_ParamLimits

0x49d6,	// (0x0003ac81) popup_note2_image_window_g1

0x49e2,	// (0x0003ac8d) popup_note2_image_window_g2_ParamLimits

0x49e2,	// (0x0003ac8d) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x00045f17) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x00045f17) popup_note2_image_window_g

0x49f4,	// (0x0003ac9f) popup_note2_image_window_t1_ParamLimits

0x49f4,	// (0x0003ac9f) popup_note2_image_window_t1

0x4a0c,	// (0x0003acb7) popup_note2_image_window_t2_ParamLimits

0x4a0c,	// (0x0003acb7) popup_note2_image_window_t2

0x4a24,	// (0x0003accf) popup_note2_image_window_t3_ParamLimits

0x4a24,	// (0x0003accf) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x00045f1c) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x00045f1c) popup_note2_image_window_t

0xd424,	// (0x000436cf) popup_note2_wait_window_g1_ParamLimits

0xd424,	// (0x000436cf) popup_note2_wait_window_g1

0xd430,	// (0x000436db) popup_note2_wait_window_g2_ParamLimits

0xd430,	// (0x000436db) popup_note2_wait_window_g2

0xd43c,	// (0x000436e7) popup_note2_wait_window_g3_ParamLimits

0xd43c,	// (0x000436e7) popup_note2_wait_window_g3

0x0002,

0xf859,	// (0x00045b04) popup_note2_wait_window_g_ParamLimits

0xf859,	// (0x00045b04) popup_note2_wait_window_g

0x4a40,	// (0x0003aceb) popup_note2_wait_window_t1_ParamLimits

0x4a40,	// (0x0003aceb) popup_note2_wait_window_t1

0x4a5e,	// (0x0003ad09) popup_note2_wait_window_t2_ParamLimits

0x4a5e,	// (0x0003ad09) popup_note2_wait_window_t2

0x4a7c,	// (0x0003ad27) popup_note2_wait_window_t3_ParamLimits

0x4a7c,	// (0x0003ad27) popup_note2_wait_window_t3

0x4a8e,	// (0x0003ad39) popup_note2_wait_window_t4_ParamLimits

0x4a8e,	// (0x0003ad39) popup_note2_wait_window_t4

0x0003,

0xfc78,	// (0x00045f23) popup_note2_wait_window_t_ParamLimits

0xfc78,	// (0x00045f23) popup_note2_wait_window_t

0x4aa0,	// (0x0003ad4b) wait_bar2_pane_ParamLimits

0x4aa0,	// (0x0003ad4b) wait_bar2_pane

0x4ab8,	// (0x0003ad63) popup_snote2_single_text_window_g1_ParamLimits

0x4ab8,	// (0x0003ad63) popup_snote2_single_text_window_g1

0x4ae0,	// (0x0003ad8b) popup_snote2_single_text_window_t1_ParamLimits

0x4ae0,	// (0x0003ad8b) popup_snote2_single_text_window_t1

0x4b2c,	// (0x0003add7) popup_snote2_single_text_window_t2_ParamLimits

0x4b2c,	// (0x0003add7) popup_snote2_single_text_window_t2

0x4b78,	// (0x0003ae23) popup_snote2_single_text_window_t3_ParamLimits

0x4b78,	// (0x0003ae23) popup_snote2_single_text_window_t3

0x4bb9,	// (0x0003ae64) popup_snote2_single_text_window_t4_ParamLimits

0x4bb9,	// (0x0003ae64) popup_snote2_single_text_window_t4

0x4bef,	// (0x0003ae9a) popup_snote2_single_text_window_t5_ParamLimits

0x4bef,	// (0x0003ae9a) popup_snote2_single_text_window_t5

0x0004,

0xfc81,	// (0x00045f2c) popup_snote2_single_text_window_t_ParamLimits

0xfc81,	// (0x00045f2c) popup_snote2_single_text_window_t

0x4c1a,	// (0x0003aec5) popup_snote2_single_graphic_window_g1_ParamLimits

0x4c1a,	// (0x0003aec5) popup_snote2_single_graphic_window_g1

0x4c42,	// (0x0003aeed) popup_snote2_single_graphic_window_g2_ParamLimits

0x4c42,	// (0x0003aeed) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8c,	// (0x00045f37) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8c,	// (0x00045f37) popup_snote2_single_graphic_window_g

0x4c6a,	// (0x0003af15) popup_snote2_single_graphic_window_t1_ParamLimits

0x4c6a,	// (0x0003af15) popup_snote2_single_graphic_window_t1

0x4cb6,	// (0x0003af61) popup_snote2_single_graphic_window_t2_ParamLimits

0x4cb6,	// (0x0003af61) popup_snote2_single_graphic_window_t2

0x4b78,	// (0x0003ae23) popup_snote2_single_graphic_window_t3_ParamLimits

0x4b78,	// (0x0003ae23) popup_snote2_single_graphic_window_t3

0x4bb9,	// (0x0003ae64) popup_snote2_single_graphic_window_t4_ParamLimits

0x4bb9,	// (0x0003ae64) popup_snote2_single_graphic_window_t4

0x4bef,	// (0x0003ae9a) popup_snote2_single_graphic_window_t5_ParamLimits

0x4bef,	// (0x0003ae9a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc91,	// (0x00045f3c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc91,	// (0x00045f3c) popup_snote2_single_graphic_window_t

0xe92c,	// (0x00044bd7) clock_nsta_pane_cp2_t1

0xe92c,	// (0x00044bd7) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x00045d63) clock_nsta_pane_cp2_t

0x09e9,	// (0x00036c94) form_field_data_wide_pane_g1_ParamLimits

0xbe89,	// (0x00042134) form_field_data_wide_pane_g2_ParamLimits

0xbe89,	// (0x00042134) form_field_data_wide_pane_g2

0xbf08,	// (0x000421b3) form_field_data_wide_pane_g3_ParamLimits

0xbf08,	// (0x000421b3) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x00045947) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x00045947) form_field_data_wide_pane_g

0xa293,	// (0x0004053e) grid_touch_3_pane_ParamLimits

0xa293,	// (0x0004053e) grid_touch_3_pane

0xa6cd,	// (0x00040978) cell_touch_3_pane_ParamLimits

0xa6cd,	// (0x00040978) cell_touch_3_pane

0xec1f,	// (0x00044eca) cell_touch_3_pane_g1

0xec1f,	// (0x00044eca) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x00045de8) cell_touch_3_pane_g

0xb856,	// (0x00041b01) cont_query_data_pane

0xb85e,	// (0x00041b09) cont_query_data_pane_cp1

0x4d31,	// (0x0003afdc) button_value_adjust_pane_cp7

0x4d39,	// (0x0003afe4) query_popup_pane_cp3

0xc476,	// (0x00042721) bg_popup_sub_pane_cp22_ParamLimits

0x1e54,	// (0x000380ff) navi_navi_volume_pane_cp2

0x1e6f,	// (0x0003811a) popup_side_volume_key_window_g2

0x1e7e,	// (0x00038129) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x000459d9) popup_side_volume_key_window_g

0x1e9b,	// (0x00038146) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x000459e0) popup_side_volume_key_window_t

0xc6c6,	// (0x00042971) popup_side_volume_key_window_ParamLimits

0x836b,	// (0x0003e616) list_double_graphic_pane_g4_ParamLimits

0x836b,	// (0x0003e616) list_double_graphic_pane_g4

0x871d,	// (0x0003e9c8) list_single_2heading_msg_pane_ParamLimits

0x871d,	// (0x0003e9c8) list_single_2heading_msg_pane

0x8792,	// (0x0003ea3d) list_single_2heading_msg_pane_g1_ParamLimits

0x8792,	// (0x0003ea3d) list_single_2heading_msg_pane_g1

0x879e,	// (0x0003ea49) list_single_2heading_msg_pane_g2_ParamLimits

0x879e,	// (0x0003ea49) list_single_2heading_msg_pane_g2

0x87b1,	// (0x0003ea5c) list_single_2heading_msg_pane_g3_ParamLimits

0x87b1,	// (0x0003ea5c) list_single_2heading_msg_pane_g3

0x87bd,	// (0x0003ea68) list_single_2heading_msg_pane_g4_ParamLimits

0x87bd,	// (0x0003ea68) list_single_2heading_msg_pane_g4

0x0003,

0xfc9c,	// (0x00045f47) list_single_2heading_msg_pane_g_ParamLimits

0xfc9c,	// (0x00045f47) list_single_2heading_msg_pane_g

0x8095,	// (0x0003e340) list_single_2heading_msg_pane_t1_ParamLimits

0x8095,	// (0x0003e340) list_single_2heading_msg_pane_t1

0x80bd,	// (0x0003e368) list_single_2heading_msg_pane_t2_ParamLimits

0x80bd,	// (0x0003e368) list_single_2heading_msg_pane_t2

0x8128,	// (0x0003e3d3) list_single_2heading_msg_pane_t3_ParamLimits

0x8128,	// (0x0003e3d3) list_single_2heading_msg_pane_t3

0x1246,	// (0x000374f1) list_single_2heading_msg_pane_t4_ParamLimits

0x1246,	// (0x000374f1) list_single_2heading_msg_pane_t4

0x0003,

0xfca5,	// (0x00045f50) list_single_2heading_msg_pane_t_ParamLimits

0xfca5,	// (0x00045f50) list_single_2heading_msg_pane_t

0xb421,	// (0x000416cc) title_pane_g4_ParamLimits

0xb421,	// (0x000416cc) title_pane_g4

0x1b78,	// (0x00037e23) title_pane_stacon_g3_ParamLimits

0x1b78,	// (0x00037e23) title_pane_stacon_g3

0x486a,	// (0x0003ab15) list_single_2graphic_im_pane_g4_ParamLimits

0x486a,	// (0x0003ab15) list_single_2graphic_im_pane_g4

0xdd75,	// (0x00044020) popup_side_volume_key_window_cp

0xe24d,	// (0x000444f8) main_idle_act2_pane_t1

0x243d,	// (0x000386e8) toolbar_button_pane_g10

0x8f5f,	// (0x0003f20a) popup_toolbar_window_cp1

0xe91d,	// (0x00044bc8) clock_nsta_pane_cp_t1

0xe91d,	// (0x00044bc8) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x00045d5e) clock_nsta_pane_cp_t

0x1e54,	// (0x000380ff) navi_navi_volume_pane_cp2_ParamLimits

0x1e63,	// (0x0003810e) popup_side_volume_key_window_g1_ParamLimits

0x1e6f,	// (0x0003811a) popup_side_volume_key_window_g2_ParamLimits

0x1e7e,	// (0x00038129) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x000459d9) popup_side_volume_key_window_g_ParamLimits

0x29e8,	// (0x00038c93) fep_hwr_aid_pane

0x912c,	// (0x0003f3d7) bg_fep_hwr_top_pane_g4_ParamLimits

0xec8f,	// (0x00044f3a) fep_hwr_top_pane_g1_ParamLimits

0xeca1,	// (0x00044f4c) fep_hwr_top_pane_g2_ParamLimits

0x2aa1,	// (0x00038d4c) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x00045db3) fep_hwr_top_pane_g_ParamLimits

0x2ab6,	// (0x00038d61) fep_hwr_top_text_pane_ParamLimits

0xdb6a,	// (0x00043e15) aid_touch_tab_arrow_arrow_2

0xdb73,	// (0x00043e1e) aid_touch_tab_arrow_left_2

0x29fc,	// (0x00038ca7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2a33,	// (0x00038cde) fep_hwr_prediction_pane

0xedf6,	// (0x000450a1) fep_vkb_prediction_pane

0xa4b4,	// (0x0004075f) fep_vkb_side_pane_g3_ParamLimits

0xa4b4,	// (0x0004075f) fep_vkb_side_pane_g3

0xeea6,	// (0x00045151) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf258,	// (0x00045503) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf265,	// (0x00045510) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x00045e5d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x4d5e,	// (0x0003b009) fep_hwr_prediction_pane_g1

0x2d64,	// (0x0003900f) fep_hwr_prediction_pane_g2

0x2d6c,	// (0x00039017) fep_hwr_prediction_pane_g3

0x2d74,	// (0x0003901f) fep_hwr_prediction_pane_g4

0x0003,

0xfcae,	// (0x00045f59) fep_hwr_prediction_pane_g

0x4d5e,	// (0x0003b009) fep_vkb_prediction_pane_g1

0x4d68,	// (0x0003b013) fep_vkb_prediction_pane_g2

0x4d70,	// (0x0003b01b) fep_vkb_prediction_pane_g3

0x4d78,	// (0x0003b023) fep_vkb_prediction_pane_g4

0x0003,

0xfcb7,	// (0x00045f62) fep_vkb_prediction_pane_g

0x2715,	// (0x000389c0) slider_set_pane_g3

0x2729,	// (0x000389d4) slider_set_pane_g4

0x2741,	// (0x000389ec) slider_set_pane_g5

0x2715,	// (0x000389c0) slider_set_pane_g6

0x2757,	// (0x00038a02) slider_set_pane_g7

0xdfd6,	// (0x00044281) slider_form_pane_g3

0xdfdf,	// (0x0004428a) slider_form_pane_g4

0xdfe7,	// (0x00044292) slider_form_pane_g5

0xdfd6,	// (0x00044281) slider_form_pane_g6

0xa11b,	// (0x000403c6) slider_form_pane_g7

0xe4eb,	// (0x00044796) slider_set_pane_vc_g3

0xe4f4,	// (0x0004479f) slider_set_pane_vc_g4

0xe4fd,	// (0x000447a8) slider_set_pane_vc_g5

0xe4eb,	// (0x00044796) slider_set_pane_vc_g6

0xe506,	// (0x000447b1) slider_set_pane_vc_g7

0xe4eb,	// (0x00044796) slider_form_pane_vc_g1

0xe4f4,	// (0x0004479f) slider_form_pane_vc_g2

0xe4fd,	// (0x000447a8) slider_form_pane_vc_g3

0xe4eb,	// (0x00044796) slider_form_pane_vc_g4

0xe695,	// (0x00044940) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00045d3c) slider_form_pane_vc_g

0xb403,	// (0x000416ae) main_idle_act3_pane

0x4d80,	// (0x0003b02b) ai3_links_pane

0xa716,	// (0x000409c1) popup_ai3_data_window_ParamLimits

0xa716,	// (0x000409c1) popup_ai3_data_window

0xb403,	// (0x000416ae) grid_ai3_links_pane

0xa72e,	// (0x000409d9) cell_ai3_links_pane_ParamLimits

0xa72e,	// (0x000409d9) cell_ai3_links_pane

0x4db9,	// (0x0003b064) bg_popup_sub_pane_cp11

0x4dc6,	// (0x0003b071) cell_ai3_links_pane_g1

0xb403,	// (0x000416ae) bg_popup_sub_pane_cp12

0x4deb,	// (0x0003b096) heading_ai3_data_pane

0x4df3,	// (0x0003b09e) list_ai3_gene_pane

0x4dff,	// (0x0003b0aa) popup_ai3_data_window_g1

0x4e07,	// (0x0003b0b2) heading_ai3_data_pane_g1

0x4e0f,	// (0x0003b0ba) heading_ai3_data_pane_t1

0x4e1d,	// (0x0003b0c8) list_double_ai3_gene_pane_ParamLimits

0x4e1d,	// (0x0003b0c8) list_double_ai3_gene_pane

0x4e2a,	// (0x0003b0d5) list_single_ai3_gene_pane_ParamLimits

0x4e2a,	// (0x0003b0d5) list_single_ai3_gene_pane

0xebe4,	// (0x00044e8f) list_highlight_pane_cp7_ParamLimits

0xebe4,	// (0x00044e8f) list_highlight_pane_cp7

0x4e37,	// (0x0003b0e2) list_single_a13_gene_pane_t1_ParamLimits

0x4e37,	// (0x0003b0e2) list_single_a13_gene_pane_t1

0x4e4e,	// (0x0003b0f9) list_single_ai3_gene_pane_g1

0x4e57,	// (0x0003b102) list_single_ai3_gene_pane_g2

0x0001,

0xfcc0,	// (0x00045f6b) list_single_ai3_gene_pane_g

0x4e5f,	// (0x0003b10a) list_double_ai3_gene_pane_g1_ParamLimits

0x4e5f,	// (0x0003b10a) list_double_ai3_gene_pane_g1

0x4e6b,	// (0x0003b116) list_double_ai3_gene_pane_t1_ParamLimits

0x4e6b,	// (0x0003b116) list_double_ai3_gene_pane_t1

0x4e87,	// (0x0003b132) list_double_ai3_gene_pane_t2_ParamLimits

0x4e87,	// (0x0003b132) list_double_ai3_gene_pane_t2

0x4e9c,	// (0x0003b147) list_double_ai3_gene_pane_t3_ParamLimits

0x4e9c,	// (0x0003b147) list_double_ai3_gene_pane_t3

0x0002,

0xfcc5,	// (0x00045f70) list_double_ai3_gene_pane_t_ParamLimits

0xfcc5,	// (0x00045f70) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11a7,	// (0x00037452) aid_size_min_col_2

0xa700,	// (0x000409ab) aid_size_min_msg_ParamLimits

0xa700,	// (0x000409ab) aid_size_min_msg

0xa4c8,	// (0x00040773) fep_vkb_top_text_pane_g2_ParamLimits

0xa4c8,	// (0x00040773) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x00045de3) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x00045de3) fep_vkb_top_text_pane_g

0xb403,	// (0x000416ae) main_hc_apps_shell_pane

0x4eb9,	// (0x0003b164) grid_hc_apps_pane_ParamLimits

0x4eb9,	// (0x0003b164) grid_hc_apps_pane

0x4ec8,	// (0x0003b173) list_hc_apps_pane

0x4ed0,	// (0x0003b17b) scroll_pane_cp37_ParamLimits

0x4ed0,	// (0x0003b17b) scroll_pane_cp37

0xa748,	// (0x000409f3) cell_hc_apps_pane_ParamLimits

0xa748,	// (0x000409f3) cell_hc_apps_pane

0xa808,	// (0x00040ab3) cell_hc_apps_pane_g1_ParamLimits

0xa808,	// (0x00040ab3) cell_hc_apps_pane_g1

0x4fbd,	// (0x0003b268) cell_hc_apps_pane_g2_ParamLimits

0x4fbd,	// (0x0003b268) cell_hc_apps_pane_g2

0x4fd9,	// (0x0003b284) cell_hc_apps_pane_g3_ParamLimits

0x4fd9,	// (0x0003b284) cell_hc_apps_pane_g3

0x0002,

0xfccc,	// (0x00045f77) cell_hc_apps_pane_g_ParamLimits

0xfccc,	// (0x00045f77) cell_hc_apps_pane_g

0xa835,	// (0x00040ae0) cell_hc_apps_pane_t1_ParamLimits

0xa835,	// (0x00040ae0) cell_hc_apps_pane_t1

0xb5a6,	// (0x00041851) grid_highlight_pane_cp10_ParamLimits

0xb5a6,	// (0x00041851) grid_highlight_pane_cp10

0xa873,	// (0x00040b1e) list_single_hc_apps_pane_ParamLimits

0xa873,	// (0x00040b1e) list_single_hc_apps_pane

0x50ae,	// (0x0003b359) list_single_hc_apps_pane_g1

0x2d7c,	// (0x00039027) list_single_hc_apps_pane_g2

0x0001,

0xfcd3,	// (0x00045f7e) list_single_hc_apps_pane_g

0x2d95,	// (0x00039040) list_single_hc_apps_pane_g2_copy1

0x126b,	// (0x00037516) list_single_hc_apps_pane_t1

0xb473,	// (0x0004171e) bg_set_opt_pane_cp_ParamLimits

0x1770,	// (0x00037a1b) setting_slider_pane_t1_ParamLimits

0x1789,	// (0x00037a34) setting_slider_pane_t2_ParamLimits

0x17a2,	// (0x00037a4d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00045825) setting_slider_pane_t_ParamLimits

0x17b9,	// (0x00037a64) slider_set_pane_ParamLimits

0x2250,	// (0x000384fb) control_pane_g5_ParamLimits

0x2250,	// (0x000384fb) control_pane_g5

0xdf98,	// (0x00044243) slider_set_pane_g1_ParamLimits

0x2709,	// (0x000389b4) slider_set_pane_g2_ParamLimits

0x2715,	// (0x000389c0) slider_set_pane_g3_ParamLimits

0x2729,	// (0x000389d4) slider_set_pane_g4_ParamLimits

0x2741,	// (0x000389ec) slider_set_pane_g5_ParamLimits

0x2715,	// (0x000389c0) slider_set_pane_g6_ParamLimits

0x2757,	// (0x00038a02) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00045c16) slider_set_pane_g_ParamLimits

0xc7a7,	// (0x00042a52) navi_icon_text_pane_ParamLimits

0x9949,	// (0x0003fbf4) aid_fill_nsta_2_ParamLimits

0x997d,	// (0x0003fc28) aid_touch_tab_arrow_left_ParamLimits

0x9993,	// (0x0003fc3e) aid_touch_tab_arrow_right_ParamLimits

0x9a2e,	// (0x0003fcd9) clock_nsta_pane_ParamLimits

0x9ec3,	// (0x0004016e) navi_icon_pane_g1_ParamLimits

0x9ecf,	// (0x0004017a) navi_text_pane_t1_ParamLimits

0xa35f,	// (0x0004060a) navi_icon_text_pane_g1_ParamLimits

0xa36b,	// (0x00040616) navi_icon_text_pane_t1_ParamLimits

0x50ae,	// (0x0003b359) list_single_hc_apps_pane_g1_ParamLimits

0x2d7c,	// (0x00039027) list_single_hc_apps_pane_g2_ParamLimits

0xfcd3,	// (0x00045f7e) list_single_hc_apps_pane_g_ParamLimits

0x2d95,	// (0x00039040) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x126b,	// (0x00037516) list_single_hc_apps_pane_t1_ParamLimits

0x82cc,	// (0x0003e577) popup_toolbar2_fixed_window_ParamLimits

0x82cc,	// (0x0003e577) popup_toolbar2_fixed_window

0x98b2,	// (0x0003fb5d) popup_toolbar2_float_window

0xb403,	// (0x000416ae) bg_popup_sub_pane_cp27

0x50c7,	// (0x0003b372) grid_toolbar2_float_pane

0xb403,	// (0x000416ae) bg_popup_sub_pane_cp26

0x50c7,	// (0x0003b372) grid_toolbar2_fixed_pane

0xa8a6,	// (0x00040b51) cell_toolbar2_fixed_pane_ParamLimits

0xa8a6,	// (0x00040b51) cell_toolbar2_fixed_pane

0xa8c1,	// (0x00040b6c) cell_toolbar2_fixed_pane_g1

0x50e9,	// (0x0003b394) toolbar2_fixed_button_pane

0xce69,	// (0x00043114) toolbar2_fixed_button_pane_g1

0xce71,	// (0x0004311c) toolbar2_fixed_button_pane_g2

0xce79,	// (0x00043124) toolbar2_fixed_button_pane_g3

0xce81,	// (0x0004312c) toolbar2_fixed_button_pane_g4

0xce89,	// (0x00043134) toolbar2_fixed_button_pane_g5

0xce91,	// (0x0004313c) toolbar2_fixed_button_pane_g6

0xce99,	// (0x00043144) toolbar2_fixed_button_pane_g7

0xcea1,	// (0x0004314c) toolbar2_fixed_button_pane_g8

0xcea9,	// (0x00043154) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00045b22) toolbar2_fixed_button_pane_g

0x50f1,	// (0x0003b39c) cell_toolbar2_float_pane_ParamLimits

0x50f1,	// (0x0003b39c) cell_toolbar2_float_pane

0x5102,	// (0x0003b3ad) cell_toolbar2_float_pane_g1

0x50e9,	// (0x0003b394) toolbar2_fixed_button_pane_cp

0xa47b,	// (0x00040726) fep_vkb_accented_list_pane_ParamLimits

0xa47b,	// (0x00040726) fep_vkb_accented_list_pane

0x2c04,	// (0x00038eaf) bg_popup_fep_shadow_pane_g9

0xc929,	// (0x00042bd4) bg_popup_fep_shadow_pane_cp3

0xbfe8,	// (0x00042293) list_accented_list_pane

0x510b,	// (0x0003b3b6) list_single_accented_list_pane_ParamLimits

0x510b,	// (0x0003b3b6) list_single_accented_list_pane

0xc929,	// (0x00042bd4) list_highlight_pane_cp10

0x511c,	// (0x0003b3c7) list_single_accented_list_pane_t1

0x97dc,	// (0x0003fa87) popup_slider_window_ParamLimits

0x97dc,	// (0x0003fa87) popup_slider_window

0x4d41,	// (0x0003afec) aid_indentation_list_msg

0xa9ba,	// (0x00040c65) bg_popup_window_pane_cp19

0x5240,	// (0x0003b4eb) popup_slider_window_g1

0x525c,	// (0x0003b507) popup_slider_window_g2

0x5278,	// (0x0003b523) popup_slider_window_g3

0x0005,

0xfcd8,	// (0x00045f83) popup_slider_window_g

0x52d4,	// (0x0003b57f) popup_slider_window_t1

0x5348,	// (0x0003b5f3) small_volume_slider_vertical_pane

0xec1f,	// (0x00044eca) small_volume_slider_vertical_pane_g1

0xec1f,	// (0x00044eca) small_volume_slider_vertical_pane_g2

0x5364,	// (0x0003b60f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcea,	// (0x00045f95) small_volume_slider_vertical_pane_g

0x823a,	// (0x0003e4e5) area_side_right_pane_ParamLimits

0x823a,	// (0x0003e4e5) area_side_right_pane

0x87d5,	// (0x0003ea80) aid_size_side_button_ParamLimits

0x87d5,	// (0x0003ea80) aid_size_side_button

0x87ee,	// (0x0003ea99) grid_sctrl_middle_pane_ParamLimits

0x87ee,	// (0x0003ea99) grid_sctrl_middle_pane

0x2de5,	// (0x00039090) sctrl_sk_bottom_pane

0x2df6,	// (0x000390a1) sctrl_sk_top_pane

0x2e08,	// (0x000390b3) aid_touch_sctrl_top

0xb5a6,	// (0x00041851) bg_sctrl_sk_pane_ParamLimits

0xb5a6,	// (0x00041851) bg_sctrl_sk_pane

0x2e15,	// (0x000390c0) sctrl_sk_top_pane_g1

0x2e22,	// (0x000390cd) sctrl_sk_top_pane_t1

0x2e08,	// (0x000390b3) aid_touch_sctrl_bottom

0xb5a6,	// (0x00041851) bg_sctrl_sk_pane_cp_ParamLimits

0xb5a6,	// (0x00041851) bg_sctrl_sk_pane_cp

0x2e3d,	// (0x000390e8) sctrl_sk_bottom_pane_g1

0x2e22,	// (0x000390cd) sctrl_sk_bottom_pane_t1

0x8808,	// (0x0003eab3) cell_sctrl_middle_pane_ParamLimits

0x8808,	// (0x0003eab3) cell_sctrl_middle_pane

0x8819,	// (0x0003eac4) aid_touch_sctrl_middle_ParamLimits

0x8819,	// (0x0003eac4) aid_touch_sctrl_middle

0x8826,	// (0x0003ead1) bg_sctrl_middle_pane_ParamLimits

0x8826,	// (0x0003ead1) bg_sctrl_middle_pane

0x53ec,	// (0x0003b697) cell_sctrl_middle_pane_g1_ParamLimits

0x53ec,	// (0x0003b697) cell_sctrl_middle_pane_g1

0x8834,	// (0x0003eadf) cell_sctrl_middle_pane_g2_ParamLimits

0x8834,	// (0x0003eadf) cell_sctrl_middle_pane_g2

0x0001,

0xfcf6,	// (0x00045fa1) cell_sctrl_middle_pane_g_ParamLimits

0xfcf6,	// (0x00045fa1) cell_sctrl_middle_pane_g

0xce69,	// (0x00043114) bg_sctrl_middle_pane_g1

0xce71,	// (0x0004311c) bg_sctrl_middle_pane_g2

0xce79,	// (0x00043124) bg_sctrl_middle_pane_g3

0xce81,	// (0x0004312c) bg_sctrl_middle_pane_g4

0xce89,	// (0x00043134) bg_sctrl_middle_pane_g5

0xce91,	// (0x0004313c) bg_sctrl_middle_pane_g6

0xce99,	// (0x00043144) bg_sctrl_middle_pane_g7

0xcea1,	// (0x0004314c) bg_sctrl_middle_pane_g8

0x0007,

0xfcfb,	// (0x00045fa6) bg_sctrl_middle_pane_g

0xcea9,	// (0x00043154) bg_sctrl_middle_pane_g8_copy1

0xce69,	// (0x00043114) bg_sctrl_sk_pane_g1

0xce71,	// (0x0004311c) bg_sctrl_sk_pane_g2

0xce79,	// (0x00043124) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00045b22) bg_sctrl_sk_pane_g

0xbe1b,	// (0x000420c6) aid_size_touch_scroll_bar

0xce81,	// (0x0004312c) bg_sctrl_sk_pane_g4

0xce89,	// (0x00043134) bg_sctrl_sk_pane_g5

0xce91,	// (0x0004313c) bg_sctrl_sk_pane_g6

0xce99,	// (0x00043144) bg_sctrl_sk_pane_g7

0xcea1,	// (0x0004314c) bg_sctrl_sk_pane_g8

0xcea9,	// (0x00043154) bg_sctrl_sk_pane_g9

0xcb9d,	// (0x00042e48) popup_fep_china_hwr2_fs_candidate_window

0x9316,	// (0x0003f5c1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9316,	// (0x0003f5c1) popup_fep_china_hwr2_fs_control_window

0xeea6,	// (0x00045151) sctrl_sk_top_pane_g2

0x0001,

0xfcf1,	// (0x00045f9c) sctrl_sk_top_pane_g

0xaa72,	// (0x00040d1d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaa72,	// (0x00040d1d) aid_fep_china_hwr2_fs_cell

0xaa86,	// (0x00040d31) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaa86,	// (0x00040d31) bg_popup_fep_shadow_pane_cp4

0xaa9d,	// (0x00040d48) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaa9d,	// (0x00040d48) bg_popup_fep_shadow_pane_cp5

0xaaaf,	// (0x00040d5a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaaaf,	// (0x00040d5a) popup_fep_china_hwr2_fs_control_bar_grid

0xaac3,	// (0x00040d6e) popup_fep_china_hwr2_fs_control_funtion_grid

0x53c0,	// (0x0003b66b) aid_fep_china_hwr2_fs_candi_cell

0xb403,	// (0x000416ae) bg_popup_fep_shadow_pane_cp6

0x53ca,	// (0x0003b675) popup_fep_china_hwr2_fs_candidate_grid

0xaacb,	// (0x00040d76) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaacb,	// (0x00040d76) cell_fep_china_hwr2_fs_funtion_grid

0xec1f,	// (0x00044eca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x53ec,	// (0x0003b697) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x53ec,	// (0x0003b697) cell_fep_china_hwr2_fs_funtion_grid_g1

0x53fa,	// (0x0003b6a5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x53fa,	// (0x0003b6a5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0c,	// (0x00045fb7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0c,	// (0x00045fb7) cell_fep_china_hwr2_fs_funtion_grid_g

0xaae3,	// (0x00040d8e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaae3,	// (0x00040d8e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaaf8,	// (0x00040da3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaaf8,	// (0x00040da3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd11,	// (0x00045fbc) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd11,	// (0x00045fbc) cell_fep_china_hwr2_fs_funtion_grid_t

0x5441,	// (0x0003b6ec) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5449,	// (0x0003b6f4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5451,	// (0x0003b6fc) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd16,	// (0x00045fc1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5459,	// (0x0003b704) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5459,	// (0x0003b704) cell_fep_china_hwr2_fs_candidate_grid

0x5472,	// (0x0003b71d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x547a,	// (0x0003b725) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec1f,	// (0x00044eca) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec1f,	// (0x00044eca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x00045de8) cell_fep_china_hwr2_fs_candidate_grid_g

0x5482,	// (0x0003b72d) cell_fep_china_hwr2_fs_candidate_grid_t1

0xccaa,	// (0x00042f55) clock_nsta_pane_cp_24_ParamLimits

0xccaa,	// (0x00042f55) clock_nsta_pane_cp_24

0xcd12,	// (0x00042fbd) indicator_nsta_pane_cp_24_ParamLimits

0xcd12,	// (0x00042fbd) indicator_nsta_pane_cp_24

0xda74,	// (0x00043d1f) heading_pane_g1

0x0001,

0xf8dc,	// (0x00045b87) heading_pane_g

0xe0d8,	// (0x00044383) grid_sct_catagory_button_pane

0xd95c,	// (0x00043c07) scroll_pane_cp5_ParamLimits

0xe988,	// (0x00044c33) button_value_adjust_pane_cp5_ParamLimits

0xe988,	// (0x00044c33) button_value_adjust_pane_cp5

0xea46,	// (0x00044cf1) form2_midp_time_pane_ParamLimits

0x5490,	// (0x0003b73b) cell_sct_catagory_button_pane_ParamLimits

0x5490,	// (0x0003b73b) cell_sct_catagory_button_pane

0xebe4,	// (0x00044e8f) bg_button_pane_cp01_ParamLimits

0xebe4,	// (0x00044e8f) bg_button_pane_cp01

0xec1f,	// (0x00044eca) cell_sct_catagory_button_pane_g1

0x9855,	// (0x0003fb00) popup_tb_extension_window

0xab14,	// (0x00040dbf) aid_size_cell_ext_ParamLimits

0xab14,	// (0x00040dbf) aid_size_cell_ext

0xbc5d,	// (0x00041f08) bg_tb_trans_pane_cp1_ParamLimits

0xbc5d,	// (0x00041f08) bg_tb_trans_pane_cp1

0xab3a,	// (0x00040de5) grid_tb_ext_pane_ParamLimits

0xab3a,	// (0x00040de5) grid_tb_ext_pane

0xab7a,	// (0x00040e25) cell_tb_ext_pane_ParamLimits

0xab7a,	// (0x00040e25) cell_tb_ext_pane

0xaba2,	// (0x00040e4d) cell_tb_ext_pane_g1_ParamLimits

0xaba2,	// (0x00040e4d) cell_tb_ext_pane_g1

0x5528,	// (0x0003b7d3) cell_tb_ext_pane_t1

0xb5a6,	// (0x00041851) list_highlight_pane_cp11_ParamLimits

0xb5a6,	// (0x00041851) list_highlight_pane_cp11

0x15e3,	// (0x0003788e) popup_uni_indicator_window_ParamLimits

0x15e3,	// (0x0003788e) popup_uni_indicator_window

0xbeee,	// (0x00042199) bg_popup_sub_pane_cp14

0x5543,	// (0x0003b7ee) list_uniindi_pane

0x554f,	// (0x0003b7fa) uniindi_top_pane

0xb5a6,	// (0x00041851) bg_uniindi_top_pane

0x556e,	// (0x0003b819) uniindi_top_pane_g1

0x5584,	// (0x0003b82f) uniindi_top_pane_g2

0x0003,

0xfd1d,	// (0x00045fc8) uniindi_top_pane_g

0x55ae,	// (0x0003b859) uniindi_top_pane_t1

0x55d8,	// (0x0003b883) list_single_uniindi_pane_ParamLimits

0x55d8,	// (0x0003b883) list_single_uniindi_pane

0xec1f,	// (0x00044eca) bg_uniindi_top_pane_g1

0x55ea,	// (0x0003b895) list_single_uniindi_pane_g1

0x55fd,	// (0x0003b8a8) list_single_uniindi_pane_t1

0xb403,	// (0x000416ae) control_bg_pane

0x5622,	// (0x0003b8cd) bg_sctrl_sk_pane_cp1

0x562b,	// (0x0003b8d6) bg_sctrl_sk_pane_cp2

0x5634,	// (0x0003b8df) control_bg_pane_g1

0x563d,	// (0x0003b8e8) control_bg_pane_g2

0x0001,

0xfd26,	// (0x00045fd1) control_bg_pane_g

0xe85f,	// (0x00044b0a) cell_indicator_nsta_pane_g1_ParamLimits

0xa2c6,	// (0x00040571) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x00045d4c) cell_indicator_nsta_pane_g_ParamLimits

0x0f86,	// (0x00037231) form2_midp_time_pane_t1_ParamLimits

0x8550,	// (0x0003e7fb) main_idle_act4_pane_ParamLimits

0x8550,	// (0x0003e7fb) main_idle_act4_pane

0x9855,	// (0x0003fb00) popup_tb_extension_window_ParamLimits

0xab61,	// (0x00040e0c) tb_ext_find_pane_ParamLimits

0xab61,	// (0x00040e0c) tb_ext_find_pane

0x5646,	// (0x0003b8f1) ai_gene_pane_1_cp1

0xc9ab,	// (0x00042c56) ai_gene_pane_2_cp1

0x564e,	// (0x0003b8f9) list_single_idle_plugin_calendar_pane

0x5657,	// (0x0003b902) list_single_idle_plugin_notification_pane

0x5660,	// (0x0003b90b) list_single_idle_plugin_player_pane

0xabbf,	// (0x00040e6a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xabbf,	// (0x00040e6a) list_single_idle_plugin_shortcut_pane

0xabe7,	// (0x00040e92) main_idle_act4_pane_t1

0xabfd,	// (0x00040ea8) main_idle_act4_pane_t2

0x0001,

0xfd2b,	// (0x00045fd6) main_idle_act4_pane_t

0xac15,	// (0x00040ec0) middle_sk_idle_act4_pane_ParamLimits

0xac15,	// (0x00040ec0) middle_sk_idle_act4_pane

0xac31,	// (0x00040edc) popup_clock_digital_analogue_window_cp2

0xac58,	// (0x00040f03) shortcut_wheel_idle_act4_pane_ParamLimits

0xac58,	// (0x00040f03) shortcut_wheel_idle_act4_pane

0xec1f,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g1

0xec1f,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g2

0xec1f,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g3

0xec1f,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g4

0xec1f,	// (0x00044eca) shortcut_wheel_idle_act4_pane_g5

0x56f3,	// (0x0003b99e) shortcut_wheel_idle_act4_pane_g6

0x56fb,	// (0x0003b9a6) shortcut_wheel_idle_act4_pane_g7

0x5703,	// (0x0003b9ae) shortcut_wheel_idle_act4_pane_g8

0x570b,	// (0x0003b9b6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd30,	// (0x00045fdb) shortcut_wheel_idle_act4_pane_g

0x912c,	// (0x0003f3d7) middle_sk_idle_act4_pane_g1_ParamLimits

0x912c,	// (0x0003f3d7) middle_sk_idle_act4_pane_g1

0xacd5,	// (0x00040f80) middle_sk_idle_act4_pane_g2_ParamLimits

0xacd5,	// (0x00040f80) middle_sk_idle_act4_pane_g2

0x0001,

0xfd53,	// (0x00045ffe) middle_sk_idle_act4_pane_g_ParamLimits

0xfd53,	// (0x00045ffe) middle_sk_idle_act4_pane_g

0xaced,	// (0x00040f98) middle_sk_idle_act4_pane_t1_ParamLimits

0xaced,	// (0x00040f98) middle_sk_idle_act4_pane_t1

0xad1c,	// (0x00040fc7) grid_ai_shortcut_pane_ParamLimits

0xad1c,	// (0x00040fc7) grid_ai_shortcut_pane

0xad39,	// (0x00040fe4) list_highlight_pane_cp16_ParamLimits

0xad39,	// (0x00040fe4) list_highlight_pane_cp16

0xad46,	// (0x00040ff1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xad46,	// (0x00040ff1) list_single_idle_plugin_shortcut_pane_g1

0xad52,	// (0x00040ffd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xad52,	// (0x00040ffd) list_single_idle_plugin_shortcut_pane_g2

0xad6e,	// (0x00041019) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xad6e,	// (0x00041019) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd58,	// (0x00046003) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd58,	// (0x00046003) list_single_idle_plugin_shortcut_pane_g

0xad83,	// (0x0004102e) cell_ai_shortcut_pane_ParamLimits

0xad83,	// (0x0004102e) cell_ai_shortcut_pane

0xad99,	// (0x00041044) cell_ai_shortcut_pane_g1_ParamLimits

0xad99,	// (0x00041044) cell_ai_shortcut_pane_g1

0x5646,	// (0x0003b8f1) ai_gene_pane_1_cp2

0x5838,	// (0x0003bae3) ai_gene_pane_2_cp2

0x5840,	// (0x0003baeb) list_highlight_pane_cp15

0x5849,	// (0x0003baf4) list_single_idle_plugin_calendar_pane_g1

0x5840,	// (0x0003baeb) list_highlight_pane_cp17

0x5851,	// (0x0003bafc) list_single_idle_plugin_calendar_pane_g1_copy1

0x5859,	// (0x0003bb04) list_single_idle_plugin_player_pane_g1

0xe2ed,	// (0x00044598) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5f,	// (0x0004600a) list_single_idle_plugin_player_pane_g

0x5861,	// (0x0003bb0c) list_single_idle_plugin_player_pane_t1

0x586f,	// (0x0003bb1a) list_single_idle_plugin_player_pane_t2

0x587d,	// (0x0003bb28) list_single_idle_plugin_player_pane_t3

0x588b,	// (0x0003bb36) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd64,	// (0x0004600f) list_single_idle_plugin_player_pane_t

0x5899,	// (0x0003bb44) wait_bar_pane_cp15

0x58a1,	// (0x0003bb4c) grid_ai_notification_pane

0xe2ed,	// (0x00044598) list_single_idle_plugin_notification_pane_g1

0xadbb,	// (0x00041066) cell_ai_notification_pane_ParamLimits

0xadbb,	// (0x00041066) cell_ai_notification_pane

0x58b7,	// (0x0003bb62) cell_ai_notification_pane_g1

0x58bf,	// (0x0003bb6a) cell_ai_notification_pane_t1

0xadc8,	// (0x00041073) tb_ext_find_button_pane

0xadd0,	// (0x0004107b) tb_ext_find_pane_g1

0xadd8,	// (0x00041083) tb_ext_find_pane_t1

0xc41a,	// (0x000426c5) tb_ext_find_button_pane_g1

0x58eb,	// (0x0003bb96) tb_ext_find_button_pane_g2

0x0001,

0xfd6d,	// (0x00046018) tb_ext_find_button_pane_g

0xabe7,	// (0x00040e92) main_idle_act4_pane_t1_ParamLimits

0xabfd,	// (0x00040ea8) main_idle_act4_pane_t2_ParamLimits

0xfd2b,	// (0x00045fd6) main_idle_act4_pane_t_ParamLimits

0xac31,	// (0x00040edc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xac48,	// (0x00040ef3) sat_plugin_idle_act4_pane_ParamLimits

0xac48,	// (0x00040ef3) sat_plugin_idle_act4_pane

0xade6,	// (0x00041091) sat_plugin_idle_act4_pane_t1_ParamLimits

0xade6,	// (0x00041091) sat_plugin_idle_act4_pane_t1

0xadfe,	// (0x000410a9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xadfe,	// (0x000410a9) sat_plugin_idle_act4_pane_t2

0xae16,	// (0x000410c1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xae16,	// (0x000410c1) sat_plugin_idle_act4_pane_t3

0xae2e,	// (0x000410d9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xae2e,	// (0x000410d9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd72,	// (0x0004601d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd72,	// (0x0004601d) sat_plugin_idle_act4_pane_t

0x152c,	// (0x000377d7) popup_battery_window_ParamLimits

0x152c,	// (0x000377d7) popup_battery_window

0xb5a6,	// (0x00041851) bg_popup_sub_pane_cp25_ParamLimits

0xb5a6,	// (0x00041851) bg_popup_sub_pane_cp25

0x5940,	// (0x0003bbeb) popup_battery_window_g1_ParamLimits

0x5940,	// (0x0003bbeb) popup_battery_window_g1

0x594c,	// (0x0003bbf7) popup_battery_window_t1_ParamLimits

0x594c,	// (0x0003bbf7) popup_battery_window_t1

0x595e,	// (0x0003bc09) popup_battery_window_t2_ParamLimits

0x595e,	// (0x0003bc09) popup_battery_window_t2

0x0001,

0xfd7b,	// (0x00046026) popup_battery_window_t_ParamLimits

0xfd7b,	// (0x00046026) popup_battery_window_t

0x91ad,	// (0x0003f458) midp_canvas_pane_ParamLimits

0x920a,	// (0x0003f4b5) midp_keypad_pane_ParamLimits

0x920a,	// (0x0003f4b5) midp_keypad_pane

0xc039,	// (0x000422e4) main_midp_pane_ParamLimits

0xe93b,	// (0x00044be6) signal_pane_g2_cp_ParamLimits

0xae46,	// (0x000410f1) aid_size_cell_midp_keypad_ParamLimits

0xae46,	// (0x000410f1) aid_size_cell_midp_keypad

0xae64,	// (0x0004110f) midp_keyp_game_grid_pane_ParamLimits

0xae64,	// (0x0004110f) midp_keyp_game_grid_pane

0xae8b,	// (0x00041136) midp_keyp_rocker_pane_ParamLimits

0xae8b,	// (0x00041136) midp_keyp_rocker_pane

0xaee4,	// (0x0004118f) midp_keyp_sk_left_pane_ParamLimits

0xaee4,	// (0x0004118f) midp_keyp_sk_left_pane

0xaf38,	// (0x000411e3) midp_keyp_sk_right_pane_ParamLimits

0xaf38,	// (0x000411e3) midp_keyp_sk_right_pane

0xb403,	// (0x000416ae) bg_button_pane_cp03

0xaf8c,	// (0x00041237) midp_keyp_sk_left_pane_g1

0xb403,	// (0x000416ae) bg_button_pane_cp04

0xaf8c,	// (0x00041237) midp_keyp_sk_right_pane_g1

0xec1f,	// (0x00044eca) midp_keyp_rocker_pane_g1

0xaf95,	// (0x00041240) keyp_game_cell_pane_ParamLimits

0xaf95,	// (0x00041240) keyp_game_cell_pane

0xb403,	// (0x000416ae) bg_button_pane_cp02

0xafb9,	// (0x00041264) keyp_game_cell_pane_g1

0x827c,	// (0x0003e527) popup_fep_vkb2_window_ParamLimits

0x827c,	// (0x0003e527) popup_fep_vkb2_window

0x8840,	// (0x0003eaeb) aid_size_cell_vkb2_ParamLimits

0x8840,	// (0x0003eaeb) aid_size_cell_vkb2

0x8876,	// (0x0003eb21) popup_fep_vkb2_window_g1_ParamLimits

0x8876,	// (0x0003eb21) popup_fep_vkb2_window_g1

0x88bd,	// (0x0003eb68) vkb2_area_bottom_pane_ParamLimits

0x88bd,	// (0x0003eb68) vkb2_area_bottom_pane

0x8911,	// (0x0003ebbc) vkb2_area_keypad_pane_ParamLimits

0x8911,	// (0x0003ebbc) vkb2_area_keypad_pane

0x8959,	// (0x0003ec04) vkb2_area_top_pane_ParamLimits

0x8959,	// (0x0003ec04) vkb2_area_top_pane

0x89df,	// (0x0003ec8a) vkb2_top_entry_pane_ParamLimits

0x89df,	// (0x0003ec8a) vkb2_top_entry_pane

0x8a0c,	// (0x0003ecb7) vkb2_top_grid_left_pane_ParamLimits

0x8a0c,	// (0x0003ecb7) vkb2_top_grid_left_pane

0x8a2c,	// (0x0003ecd7) vkb2_top_grid_right_pane_ParamLimits

0x8a2c,	// (0x0003ecd7) vkb2_top_grid_right_pane

0x3093,	// (0x0003933e) vkb2_cell_keypad_pane_ParamLimits

0x3093,	// (0x0003933e) vkb2_cell_keypad_pane

0x8a72,	// (0x0003ed1d) vkb2_area_bottom_grid_pane_ParamLimits

0x8a72,	// (0x0003ed1d) vkb2_area_bottom_grid_pane

0x8a9c,	// (0x0003ed47) vkb2_area_bottom_pane_g1_ParamLimits

0x8a9c,	// (0x0003ed47) vkb2_area_bottom_pane_g1

0x8ac2,	// (0x0003ed6d) vkb2_area_bottom_pane_g2_ParamLimits

0x8ac2,	// (0x0003ed6d) vkb2_area_bottom_pane_g2

0x8af3,	// (0x0003ed9e) vkb2_area_bottom_pane_g3_ParamLimits

0x8af3,	// (0x0003ed9e) vkb2_area_bottom_pane_g3

0x0002,

0xfd80,	// (0x0004602b) vkb2_area_bottom_pane_g_ParamLimits

0xfd80,	// (0x0004602b) vkb2_area_bottom_pane_g

0x323d,	// (0x000394e8) vkb2_top_cell_left_pane_ParamLimits

0x323d,	// (0x000394e8) vkb2_top_cell_left_pane

0xafc2,	// (0x0004126d) vkb2_top_entry_pane_g1_ParamLimits

0xafc2,	// (0x0004126d) vkb2_top_entry_pane_g1

0xafd0,	// (0x0004127b) vkb2_top_entry_pane_t1_ParamLimits

0xafd0,	// (0x0004127b) vkb2_top_entry_pane_t1

0x5b0f,	// (0x0003bdba) vkb2_top_entry_pane_t2_ParamLimits

0x5b0f,	// (0x0003bdba) vkb2_top_entry_pane_t2

0x5b41,	// (0x0003bdec) vkb2_top_entry_pane_t3_ParamLimits

0x5b41,	// (0x0003bdec) vkb2_top_entry_pane_t3

0x0002,

0xfd87,	// (0x00046032) vkb2_top_entry_pane_t_ParamLimits

0xfd87,	// (0x00046032) vkb2_top_entry_pane_t

0x8b5d,	// (0x0003ee08) vkb2_top_grid_right_pane_g1_ParamLimits

0x8b5d,	// (0x0003ee08) vkb2_top_grid_right_pane_g1

0x32a0,	// (0x0003954b) vkb2_top_grid_right_pane_g2_ParamLimits

0x32a0,	// (0x0003954b) vkb2_top_grid_right_pane_g2

0x32b8,	// (0x00039563) vkb2_top_grid_right_pane_g3_ParamLimits

0x32b8,	// (0x00039563) vkb2_top_grid_right_pane_g3

0x8b73,	// (0x0003ee1e) vkb2_top_grid_right_pane_g4_ParamLimits

0x8b73,	// (0x0003ee1e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8e,	// (0x00046039) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8e,	// (0x00046039) vkb2_top_grid_right_pane_g

0x32e6,	// (0x00039591) vkb2_top_cell_left_pane_g1

0x32fd,	// (0x000395a8) vkb2_cell_keypad_pane_g1_ParamLimits

0x32fd,	// (0x000395a8) vkb2_cell_keypad_pane_g1

0x5b65,	// (0x0003be10) vkb2_cell_keypad_pane_t1_ParamLimits

0x5b65,	// (0x0003be10) vkb2_cell_keypad_pane_t1

0x330b,	// (0x000395b6) vkb2_cell_bottom_grid_pane_ParamLimits

0x330b,	// (0x000395b6) vkb2_cell_bottom_grid_pane

0x3344,	// (0x000395ef) vkb2_cell_bottom_grid_pane_g1

0xac79,	// (0x00040f24) aid_call2_pane_cp02

0xac81,	// (0x00040f2c) aid_call_pane_cp02

0xac89,	// (0x00040f34) clock_digital_number_pane_cp10

0xac91,	// (0x00040f3c) clock_digital_number_pane_cp11

0xac99,	// (0x00040f44) clock_digital_number_pane_cp12

0xaca1,	// (0x00040f4c) clock_digital_number_pane_cp13

0xaca9,	// (0x00040f54) clock_digital_separator_pane_cp10

0xc41a,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g1

0xc41a,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g2

0xacb1,	// (0x00040f5c) popup_clock_digital_analogue_window_cp2_g3

0xc41a,	// (0x000426c5) popup_clock_digital_analogue_window_cp2_g4

0xacb1,	// (0x00040f5c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd43,	// (0x00045fee) popup_clock_digital_analogue_window_cp2_g

0xacb9,	// (0x00040f64) popup_clock_digital_analogue_window_cp2_t1

0xacc7,	// (0x00040f72) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4e,	// (0x00045ff9) popup_clock_digital_analogue_window_cp2_t

0xec1f,	// (0x00044eca) clock_digital_number_pane_cp10_g1

0xec1f,	// (0x00044eca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00045de8) clock_digital_number_pane_cp10_g

0xec1f,	// (0x00044eca) clock_digital_separator_pane_cp10_g1

0xec1f,	// (0x00044eca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00045de8) clock_digital_separator_pane_cp10_g

0x5590,	// (0x0003b83b) uniindi_top_pane_g3

0x55a1,	// (0x0003b84c) uniindi_top_pane_g4

0x311e,	// (0x000393c9) vkb2_row_keypad_pane_ParamLimits

0x311e,	// (0x000393c9) vkb2_row_keypad_pane

0x3364,	// (0x0003960f) vkb2_cell_t_keypad_pane_ParamLimits

0x3364,	// (0x0003960f) vkb2_cell_t_keypad_pane

0x3374,	// (0x0003961f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3374,	// (0x0003961f) vkb2_cell_t_keypad_pane_cp08

0x3387,	// (0x00039632) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3387,	// (0x00039632) vkb2_cell_t_keypad_pane_cp09

0x339b,	// (0x00039646) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x339b,	// (0x00039646) vkb2_cell_t_keypad_pane_cp01

0x33ac,	// (0x00039657) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x33ac,	// (0x00039657) vkb2_cell_t_keypad_pane_cp02

0x33bd,	// (0x00039668) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x33bd,	// (0x00039668) vkb2_cell_t_keypad_pane_cp03

0x33ce,	// (0x00039679) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x33ce,	// (0x00039679) vkb2_cell_t_keypad_pane_cp04

0x33df,	// (0x0003968a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x33df,	// (0x0003968a) vkb2_cell_t_keypad_pane_cp05

0x33f0,	// (0x0003969b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x33f0,	// (0x0003969b) vkb2_cell_t_keypad_pane_cp06

0x3401,	// (0x000396ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3401,	// (0x000396ac) vkb2_cell_t_keypad_pane_cp07

0x3412,	// (0x000396bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3412,	// (0x000396bd) vkb2_cell_t_keypad_pane_cp10

0xeea6,	// (0x00045151) vkb2_cell_t_keypad_pane_g1

0x5b7c,	// (0x0003be27) vkb2_cell_t_keypad_pane_t1

0xb403,	// (0x000416ae) popup_grid_graphic2_window

0xb009,	// (0x000412b4) aid_size_cell_graphic2_ParamLimits

0xb009,	// (0x000412b4) aid_size_cell_graphic2

0xb047,	// (0x000412f2) bg_popup_window_pane_cp21_ParamLimits

0xb047,	// (0x000412f2) bg_popup_window_pane_cp21

0xb055,	// (0x00041300) graphic2_pages_pane_ParamLimits

0xb055,	// (0x00041300) graphic2_pages_pane

0xb0ab,	// (0x00041356) grid_graphic2_control_pane_ParamLimits

0xb0ab,	// (0x00041356) grid_graphic2_control_pane

0xb0f3,	// (0x0004139e) grid_graphic2_pane_ParamLimits

0xb0f3,	// (0x0004139e) grid_graphic2_pane

0xb17a,	// (0x00041425) cell_graphic2_pane

0xb403,	// (0x000416ae) main_comp_mode_pane

0x4df3,	// (0x0003b09e) list_ai3_gene_pane_ParamLimits

0xa9ba,	// (0x00040c65) bg_popup_window_pane_cp19_ParamLimits

0x51e2,	// (0x0003b48d) bg_touch_area_indi_pane_ParamLimits

0x51e2,	// (0x0003b48d) bg_touch_area_indi_pane

0x51f8,	// (0x0003b4a3) bg_touch_area_indi_pane_cp01_ParamLimits

0x51f8,	// (0x0003b4a3) bg_touch_area_indi_pane_cp01

0x520e,	// (0x0003b4b9) bg_touch_area_indi_pane_cp02_ParamLimits

0x520e,	// (0x0003b4b9) bg_touch_area_indi_pane_cp02

0x5226,	// (0x0003b4d1) bg_touch_area_indi_pane_cp03_ParamLimits

0x5226,	// (0x0003b4d1) bg_touch_area_indi_pane_cp03

0x5240,	// (0x0003b4eb) popup_slider_window_g1_ParamLimits

0x525c,	// (0x0003b507) popup_slider_window_g2_ParamLimits

0x5278,	// (0x0003b523) popup_slider_window_g3_ParamLimits

0xfcd8,	// (0x00045f83) popup_slider_window_g_ParamLimits

0x52d4,	// (0x0003b57f) popup_slider_window_t1_ParamLimits

0x5348,	// (0x0003b5f3) small_volume_slider_vertical_pane_ParamLimits

0xb17a,	// (0x00041425) cell_graphic2_pane_ParamLimits

0xb1d7,	// (0x00041482) bg_button_pane_cp10_ParamLimits

0xb1d7,	// (0x00041482) bg_button_pane_cp10

0xb1ea,	// (0x00041495) bg_button_pane_cp11_ParamLimits

0xb1ea,	// (0x00041495) bg_button_pane_cp11

0xb1fd,	// (0x000414a8) graphic2_pages_pane_g1_ParamLimits

0xb1fd,	// (0x000414a8) graphic2_pages_pane_g1

0xb218,	// (0x000414c3) graphic2_pages_pane_g2_ParamLimits

0xb218,	// (0x000414c3) graphic2_pages_pane_g2

0x0001,

0xfd9c,	// (0x00046047) graphic2_pages_pane_g_ParamLimits

0xfd9c,	// (0x00046047) graphic2_pages_pane_g

0xb230,	// (0x000414db) graphic2_pages_pane_t1_ParamLimits

0xb230,	// (0x000414db) graphic2_pages_pane_t1

0xb248,	// (0x000414f3) cell_graphic2_control_pane_ParamLimits

0xb248,	// (0x000414f3) cell_graphic2_control_pane

0xb27a,	// (0x00041525) cell_graphic2_pane_g1_ParamLimits

0xb27a,	// (0x00041525) cell_graphic2_pane_g1

0x913a,	// (0x0003f3e5) cell_graphic2_pane_g2_ParamLimits

0x913a,	// (0x0003f3e5) cell_graphic2_pane_g2

0xb287,	// (0x00041532) cell_graphic2_pane_g3_ParamLimits

0xb287,	// (0x00041532) cell_graphic2_pane_g3

0x9147,	// (0x0003f3f2) cell_graphic2_pane_g4_ParamLimits

0x9147,	// (0x0003f3f2) cell_graphic2_pane_g4

0xb294,	// (0x0004153f) cell_graphic2_pane_g5_ParamLimits

0xb294,	// (0x0004153f) cell_graphic2_pane_g5

0x0004,

0xfda1,	// (0x0004604c) cell_graphic2_pane_g_ParamLimits

0xfda1,	// (0x0004604c) cell_graphic2_pane_g

0xb2b4,	// (0x0004155f) cell_graphic2_pane_t1_ParamLimits

0xb2b4,	// (0x0004155f) cell_graphic2_pane_t1

0xda68,	// (0x00043d13) grid_highlight_pane_cp11_ParamLimits

0xda68,	// (0x00043d13) grid_highlight_pane_cp11

0xb5a6,	// (0x00041851) bg_button_pane_cp05

0xb2e9,	// (0x00041594) cell_graphic2_control_pane_g1

0xec1f,	// (0x00044eca) bg_touch_area_indi_pane_g1

0x5b8e,	// (0x0003be39) aid_cmod_rocker_key_size

0x5b98,	// (0x0003be43) aid_cmode_itu_key_size

0x5ba2,	// (0x0003be4d) main_cmode_video_pane

0x5bac,	// (0x0003be57) main_comp_mode_itu_pane

0x5bb8,	// (0x0003be63) main_comp_mode_rocker_pane

0x5bc4,	// (0x0003be6f) cell_cmode_rocker_pane_ParamLimits

0x5bc4,	// (0x0003be6f) cell_cmode_rocker_pane

0x5bd6,	// (0x0003be81) cell_cmode_itu_pane_ParamLimits

0x5bd6,	// (0x0003be81) cell_cmode_itu_pane

0xbeee,	// (0x00042199) bg_button_pane_cp06_ParamLimits

0xbeee,	// (0x00042199) bg_button_pane_cp06

0xeea6,	// (0x00045151) cell_cmode_rocker_pane_g1_ParamLimits

0xeea6,	// (0x00045151) cell_cmode_rocker_pane_g1

0x53ec,	// (0x0003b697) cell_cmode_rocker_pane_g2_ParamLimits

0x53ec,	// (0x0003b697) cell_cmode_rocker_pane_g2

0x0001,

0xfdb1,	// (0x0004605c) cell_cmode_rocker_pane_g_ParamLimits

0xfdb1,	// (0x0004605c) cell_cmode_rocker_pane_g

0xb403,	// (0x000416ae) bg_button_pane_cp07

0x5beb,	// (0x0003be96) cell_cmode_itu_pane_g1

0x5bf4,	// (0x0003be9f) cell_cmode_itu_pane_t1

0x5c23,	// (0x0003bece) cell_cmode_itu_pane_t2

0x0001,

0xfdb6,	// (0x00046061) cell_cmode_itu_pane_t

0x5612,	// (0x0003b8bd) aid_touch_ctrl_left

0x561a,	// (0x0003b8c5) aid_touch_ctrl_right

0xb403,	// (0x000416ae) compa_mode_pane

0xb30f,	// (0x000415ba) aid_cmod_rocker_key_size_cp

0xb319,	// (0x000415c4) aid_cmode_itu_key_size_cp

0x5c31,	// (0x0003bedc) compa_mode_pane_g1

0x5c39,	// (0x0003bee4) compa_mode_pane_g2

0x5c41,	// (0x0003beec) compa_mode_pane_g3

0x0002,

0xfdbb,	// (0x00046066) compa_mode_pane_g

0xb323,	// (0x000415ce) main_comp_mode_itu_pane_cp

0xb32b,	// (0x000415d6) main_comp_mode_rocker_pane_cp

0xb333,	// (0x000415de) cell_cmode_itu_pane_cp_ParamLimits

0xb333,	// (0x000415de) cell_cmode_itu_pane_cp

0xb348,	// (0x000415f3) cell_cmode_rocker_pane_cp_ParamLimits

0xb348,	// (0x000415f3) cell_cmode_rocker_pane_cp

0xbeee,	// (0x00042199) bg_button_pane_cp06_cp_ParamLimits

0xbeee,	// (0x00042199) bg_button_pane_cp06_cp

0xeea6,	// (0x00045151) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xeea6,	// (0x00045151) cell_cmode_rocker_pane_g1_cp

0xec1f,	// (0x00044eca) cell_cmode_rocker_pane_g2_cp

0xb403,	// (0x000416ae) bg_button_pane_cp07_cp

0xb35a,	// (0x00041605) cell_cmode_itu_pane_g1_cp

0xb363,	// (0x0004160e) cell_cmode_itu_pane_t1_cp

0xb363,	// (0x0004160e) cell_cmode_itu_pane_t2_cp

0xa111,	// (0x000403bc) settings_code_pane_cp2

0xb473,	// (0x0004171e) bg_popup_window_pane_cp3_ParamLimits

0xbb9c,	// (0x00041e47) heading_pane_cp3_ParamLimits

0xbba8,	// (0x00041e53) listscroll_popup_graphic_pane_ParamLimits

0x29e8,	// (0x00038c93) fep_hwr_aid_pane_ParamLimits

0x2e08,	// (0x000390b3) aid_touch_sctrl_top_ParamLimits

0x2e15,	// (0x000390c0) sctrl_sk_top_pane_g1_ParamLimits

0xeea6,	// (0x00045151) sctrl_sk_top_pane_g2_ParamLimits

0xfcf1,	// (0x00045f9c) sctrl_sk_top_pane_g_ParamLimits

0x2e22,	// (0x000390cd) sctrl_sk_top_pane_t1_ParamLimits

0x2e08,	// (0x000390b3) aid_touch_sctrl_bottom_ParamLimits

0x2e22,	// (0x000390cd) sctrl_sk_bottom_pane_t1_ParamLimits

0x555c,	// (0x0003b807) aid_area_touch_clock

0x89a1,	// (0x0003ec4c) aid_vkb2_area_top_pane_cell_ParamLimits

0x89a1,	// (0x0003ec4c) aid_vkb2_area_top_pane_cell

0x8a4c,	// (0x0003ecf7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8a4c,	// (0x0003ecf7) aid_vkb2_area_bottom_pane_cell

0x5ac7,	// (0x0003bd72) popup_char_count_window

0x5c49,	// (0x0003bef4) popup_char_count_window_g1

0x5c52,	// (0x0003befd) popup_char_count_window_g2

0x5c5b,	// (0x0003bf06) popup_char_count_window_g3

0x0002,

0xfdc2,	// (0x0004606d) popup_char_count_window_g

0x5c64,	// (0x0003bf0f) popup_char_count_window_t1

0x2ec3,	// (0x0003916e) popup_fep_char_preview_window_ParamLimits

0x2ec3,	// (0x0003916e) popup_fep_char_preview_window

0x89c1,	// (0x0003ec6c) vkb2_top_candi_pane_ParamLimits

0x89c1,	// (0x0003ec6c) vkb2_top_candi_pane

0xb371,	// (0x0004161c) cell_vkb2_top_candi_pane_ParamLimits

0xb371,	// (0x0004161c) cell_vkb2_top_candi_pane

0xd416,	// (0x000436c1) bg_popup_fep_char_preview_window_ParamLimits

0xd416,	// (0x000436c1) bg_popup_fep_char_preview_window

0x3427,	// (0x000396d2) popup_fep_char_preview_window_t1_ParamLimits

0x3427,	// (0x000396d2) popup_fep_char_preview_window_t1

0x5c72,	// (0x0003bf1d) bg_popup_fep_char_preview_window_g1

0x5c7a,	// (0x0003bf25) bg_popup_fep_char_preview_window_g2

0x5c82,	// (0x0003bf2d) bg_popup_fep_char_preview_window_g3

0x5c8a,	// (0x0003bf35) bg_popup_fep_char_preview_window_g4

0x5c92,	// (0x0003bf3d) bg_popup_fep_char_preview_window_g5

0x3461,	// (0x0003970c) bg_popup_fep_char_preview_window_g6

0x5c9a,	// (0x0003bf45) bg_popup_fep_char_preview_window_g7

0x5ca2,	// (0x0003bf4d) bg_popup_fep_char_preview_window_g8

0x5caa,	// (0x0003bf55) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc9,	// (0x00046074) bg_popup_fep_char_preview_window_g

0xeea6,	// (0x00045151) cell_vkb2_top_candi_pane_g1_ParamLimits

0xeea6,	// (0x00045151) cell_vkb2_top_candi_pane_g1

0xf0ed,	// (0x00045398) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf0ed,	// (0x00045398) cell_vkb2_top_candi_pane_g2

0xf10e,	// (0x000453b9) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf10e,	// (0x000453b9) cell_vkb2_top_candi_pane_g3

0x3469,	// (0x00039714) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3469,	// (0x00039714) cell_vkb2_top_candi_pane_g4

0x5c02,	// (0x0003bead) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5c02,	// (0x0003bead) cell_vkb2_top_candi_pane_g5

0x53ec,	// (0x0003b697) cell_vkb2_top_candi_pane_g6_ParamLimits

0x53ec,	// (0x0003b697) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddc,	// (0x00046087) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddc,	// (0x00046087) cell_vkb2_top_candi_pane_g

0x348a,	// (0x00039735) cell_vkb2_top_candi_pane_t1

0x26f5,	// (0x000389a0) aid_size_touch_slider_mark_ParamLimits

0x26f5,	// (0x000389a0) aid_size_touch_slider_mark

0xb091,	// (0x0004133c) grid_graphic2_catg_pane_ParamLimits

0xb091,	// (0x0004133c) grid_graphic2_catg_pane

0xb14d,	// (0x000413f8) popup_grid_graphic2_window_t1_ParamLimits

0xb14d,	// (0x000413f8) popup_grid_graphic2_window_t1

0xb163,	// (0x0004140e) popup_grid_graphic2_window_t2_ParamLimits

0xb163,	// (0x0004140e) popup_grid_graphic2_window_t2

0x0001,

0xfd97,	// (0x00046042) popup_grid_graphic2_window_t_ParamLimits

0xfd97,	// (0x00046042) popup_grid_graphic2_window_t

0xb5a6,	// (0x00041851) bg_button_pane_cp05_ParamLimits

0xb2e9,	// (0x00041594) cell_graphic2_control_pane_g1_ParamLimits

0xb3d7,	// (0x00041682) cell_graphic2_catg_pane_ParamLimits

0xb3d7,	// (0x00041682) cell_graphic2_catg_pane

0xb403,	// (0x000416ae) bg_button_pane_cp12

0xb3e9,	// (0x00041694) cell_graphic2_catg_pane_g1

0x5528,	// (0x0003b7d3) cell_tb_ext_pane_t1_ParamLimits

0x325d,	// (0x00039508) vkb2_top_cell_right_narrow_pane_ParamLimits

0x325d,	// (0x00039508) vkb2_top_cell_right_narrow_pane

0x3275,	// (0x00039520) vkb2_top_cell_right_wide_pane_ParamLimits

0x3275,	// (0x00039520) vkb2_top_cell_right_wide_pane

0x8550,	// (0x0003e7fb) bg_vkb2_func_pane_ParamLimits

0x8550,	// (0x0003e7fb) bg_vkb2_func_pane

0x32e6,	// (0x00039591) vkb2_top_cell_left_pane_g1_ParamLimits

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp03

0x3344,	// (0x000395ef) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce71,	// (0x0004311c) bg_vkb2_func_pane_g1

0xce79,	// (0x00043124) bg_vkb2_func_pane_g2

0xce89,	// (0x00043134) bg_vkb2_func_pane_g3

0xce81,	// (0x0004312c) bg_vkb2_func_pane_g4

0xce91,	// (0x0004313c) bg_vkb2_func_pane_g5

0xce99,	// (0x00043144) bg_vkb2_func_pane_g6

0xcea1,	// (0x0004314c) bg_vkb2_func_pane_g7

0xcea9,	// (0x00043154) bg_vkb2_func_pane_g8

0xce69,	// (0x00043114) bg_vkb2_func_pane_g9

0x0008,

0xfde9,	// (0x00046094) bg_vkb2_func_pane_g

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp01

0x32e6,	// (0x00039591) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x32e6,	// (0x00039591) vkb2_top_cell_right_wide_pane_g1

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8550,	// (0x0003e7fb) bg_vkb2_fuc_pane_cp02

0x3344,	// (0x000395ef) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3344,	// (0x000395ef) vkb2_top_cell_right_narrow_pane_g1

0xa8f4,	// (0x00040b9f) aid_touch_area_decrease_ParamLimits

0xa8f4,	// (0x00040b9f) aid_touch_area_decrease

0xa92e,	// (0x00040bd9) aid_touch_area_increase_ParamLimits

0xa92e,	// (0x00040bd9) aid_touch_area_increase

0xa956,	// (0x00040c01) aid_touch_area_mute_ParamLimits

0xa956,	// (0x00040c01) aid_touch_area_mute

0xa986,	// (0x00040c31) aid_touch_area_slider_ParamLimits

0xa986,	// (0x00040c31) aid_touch_area_slider

0xa9c6,	// (0x00040c71) popup_slider_window_g4_ParamLimits

0xa9c6,	// (0x00040c71) popup_slider_window_g4

0xa9ee,	// (0x00040c99) popup_slider_window_g5_ParamLimits

0xa9ee,	// (0x00040c99) popup_slider_window_g5

0xaa22,	// (0x00040ccd) popup_slider_window_g6_ParamLimits

0xaa22,	// (0x00040ccd) popup_slider_window_g6

0x5302,	// (0x0003b5ad) popup_slider_window_t2_ParamLimits

0x5302,	// (0x0003b5ad) popup_slider_window_t2

0x0001,

0xfce5,	// (0x00045f90) popup_slider_window_t_ParamLimits

0xfce5,	// (0x00045f90) popup_slider_window_t

0xaa3e,	// (0x00040ce9) slider_pane_ParamLimits

0xaa3e,	// (0x00040ce9) slider_pane

0x5cb2,	// (0x0003bf5d) slider_pane_g1_ParamLimits

0x5cb2,	// (0x0003bf5d) slider_pane_g1

0x5cc6,	// (0x0003bf71) slider_pane_g2_ParamLimits

0x5cc6,	// (0x0003bf71) slider_pane_g2

0x5cdc,	// (0x0003bf87) slider_pane_g3_ParamLimits

0x5cdc,	// (0x0003bf87) slider_pane_g3

0x0003,

0xfdfc,	// (0x000460a7) slider_pane_g_ParamLimits

0xfdfc,	// (0x000460a7) slider_pane_g

0x989d,	// (0x0003fb48) popup_tb_float_extension_window_ParamLimits

0x989d,	// (0x0003fb48) popup_tb_float_extension_window

0x5d08,	// (0x0003bfb3) aid_size_cell_tb_float_ext

0xb403,	// (0x000416ae) bg_popup_sub_window_cp28

0x5d14,	// (0x0003bfbf) grid_tb_float_ext_pane

0x5d1e,	// (0x0003bfc9) cell_tb_float_ext_pane_ParamLimits

0x5d1e,	// (0x0003bfc9) cell_tb_float_ext_pane

0x5d38,	// (0x0003bfe3) cell_tb_float_ext_pane_g1

0x5d41,	// (0x0003bfec) grid_highlight_pane_cp12

0x875c,	// (0x0003ea07) cell_last_hwr_side_pane_ParamLimits

0x875c,	// (0x0003ea07) cell_last_hwr_side_pane

0xec1f,	// (0x00044eca) cell_last_hwr_side_pane_g1

0x5d4a,	// (0x0003bff5) cell_last_hwr_side_pane_g2

0x0001,

0xfe05,	// (0x000460b0) cell_last_hwr_side_pane_g

0x8b28,	// (0x0003edd3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8b28,	// (0x0003edd3) vkb2_area_bottom_space_btn_pane

0xeea6,	// (0x00045151) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5b7c,	// (0x0003be27) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x348a,	// (0x00039735) cell_vkb2_top_candi_pane_t1_ParamLimits

0x34a9,	// (0x00039754) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x34a9,	// (0x00039754) vkb2_area_bottom_space_btn_pane_g1

0x34e3,	// (0x0003978e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x34e3,	// (0x0003978e) vkb2_area_bottom_space_btn_pane_g2

0x3519,	// (0x000397c4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3519,	// (0x000397c4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0a,	// (0x000460b5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0a,	// (0x000460b5) vkb2_area_bottom_space_btn_pane_g

0x2a8f,	// (0x00038d3a) cel_fep_hwr_func_pane_ParamLimits

0x2a8f,	// (0x00038d3a) cel_fep_hwr_func_pane

0x8731,	// (0x0003e9dc) cell_hwr_side_button_pane_ParamLimits

0x8731,	// (0x0003e9dc) cell_hwr_side_button_pane

0x555c,	// (0x0003b807) aid_area_touch_clock_ParamLimits

0xb5a6,	// (0x00041851) bg_uniindi_top_pane_ParamLimits

0x556e,	// (0x0003b819) uniindi_top_pane_g1_ParamLimits

0x5584,	// (0x0003b82f) uniindi_top_pane_g2_ParamLimits

0x5590,	// (0x0003b83b) uniindi_top_pane_g3_ParamLimits

0x55a1,	// (0x0003b84c) uniindi_top_pane_g4_ParamLimits

0xfd1d,	// (0x00045fc8) uniindi_top_pane_g_ParamLimits

0x55ae,	// (0x0003b859) uniindi_top_pane_t1_ParamLimits

0xb5a6,	// (0x00041851) bg_vkb2_func_pane_cp01_ParamLimits

0xb5a6,	// (0x00041851) bg_vkb2_func_pane_cp01

0x5d53,	// (0x0003bffe) cel_fep_hwr_func_pane_g1_ParamLimits

0x5d53,	// (0x0003bffe) cel_fep_hwr_func_pane_g1

0xb5a6,	// (0x00041851) bg_vkb2_func_pane_cp02_ParamLimits

0xb5a6,	// (0x00041851) bg_vkb2_func_pane_cp02

0x5d53,	// (0x0003bffe) cell_hwr_side_button_pane_g1_ParamLimits

0x5d53,	// (0x0003bffe) cell_hwr_side_button_pane_g1

0xcd73,	// (0x0004301e) status_pane_g4_ParamLimits

0xcd73,	// (0x0004301e) status_pane_g4

0xcd8b,	// (0x00043036) status_pane_t1

0xeaae,	// (0x00044d59) form2_midp_gauge_slider_cont_pane

0xeab6,	// (0x00044d61) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa3ba,	// (0x00040665) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa3cc,	// (0x00040677) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x00045d9b) form2_midp_gauge_slider_pane_t_ParamLimits

0xeac8,	// (0x00044d73) form2_midp_slider_pane_ParamLimits

0x2e83,	// (0x0003912e) aid_size_cell_func_vkb2_ParamLimits

0x2e83,	// (0x0003912e) aid_size_cell_func_vkb2

0x5cf4,	// (0x0003bf9f) slider_pane_g4_ParamLimits

0x5cf4,	// (0x0003bf9f) slider_pane_g4

0x8b89,	// (0x0003ee34) form2_midp_gauge_slider_pane_t2_cp01

0x8b97,	// (0x0003ee42) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8b97,	// (0x0003ee42) form2_midp_gauge_slider_pane_t3_cp01

0x358e,	// (0x00039839) form2_midp_slider_pane_cp01

0xb403,	// (0x000416ae) navi_smil_pane

0x5d83,	// (0x0003c02e) navi_smil_pane_g1

0x5d8b,	// (0x0003c036) navi_smil_pane_t1

0x5d61,	// (0x0003c00c) form2_midp_slider_pane_g1

0x5d6a,	// (0x0003c015) form2_midp_slider_pane_g2

0x5d72,	// (0x0003c01d) form2_midp_slider_pane_g3

0x5d61,	// (0x0003c00c) form2_midp_slider_pane_g4

0xb3f2,	// (0x0004169d) form2_midp_slider_pane_g5

0x0004,

0xfe13,	// (0x000460be) form2_midp_slider_pane_g

0x3553,	// (0x000397fe) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3553,	// (0x000397fe) vkb2_area_bottom_space_btn_pane_g4

0x9a79,	// (0x0003fd24) lc0_navi_pane_ParamLimits

0x9a79,	// (0x0003fd24) lc0_navi_pane

0x9ae3,	// (0x0003fd8e) lc0_stat_indi_pane_ParamLimits

0x9ae3,	// (0x0003fd8e) lc0_stat_indi_pane

0x9af8,	// (0x0003fda3) ls0_title_pane_ParamLimits

0x9af8,	// (0x0003fda3) ls0_title_pane

0xbeee,	// (0x00042199) bg_popup_sub_pane_cp14_ParamLimits

0x5543,	// (0x0003b7ee) list_uniindi_pane_ParamLimits

0x554f,	// (0x0003b7fa) uniindi_top_pane_ParamLimits

0x55ea,	// (0x0003b895) list_single_uniindi_pane_g1_ParamLimits

0x55fd,	// (0x0003b8a8) list_single_uniindi_pane_t1_ParamLimits

0x8bb4,	// (0x0003ee5f) lc0_stat_clock_pane_ParamLimits

0x8bb4,	// (0x0003ee5f) lc0_stat_clock_pane

0xb5b4,	// (0x0004185f) lc0_stat_indi_pane_g1_ParamLimits

0xb5b4,	// (0x0004185f) lc0_stat_indi_pane_g1

0xb5c1,	// (0x0004186c) lc0_stat_indi_pane_g2_ParamLimits

0xb5c1,	// (0x0004186c) lc0_stat_indi_pane_g2

0x0001,

0xfe1e,	// (0x000460c9) lc0_stat_indi_pane_g_ParamLimits

0xfe1e,	// (0x000460c9) lc0_stat_indi_pane_g

0x8bc1,	// (0x0003ee6c) lc0_uni_indicator_pane_ParamLimits

0x8bc1,	// (0x0003ee6c) lc0_uni_indicator_pane

0xb5ce,	// (0x00041879) ls0_title_pane_g1_ParamLimits

0xb5ce,	// (0x00041879) ls0_title_pane_g1

0xb5e2,	// (0x0004188d) ls0_title_pane_t1_ParamLimits

0xb5e2,	// (0x0004188d) ls0_title_pane_t1

0x8bce,	// (0x0003ee79) lc0_uni_indicator_pane_g1_ParamLimits

0x8bce,	// (0x0003ee79) lc0_uni_indicator_pane_g1

0x5d99,	// (0x0003c044) lc0_stat_clock_pane_t1

0xb403,	// (0x000416ae) main_ai5_pane

0x5da7,	// (0x0003c052) ai5_sk_pane_ParamLimits

0x5da7,	// (0x0003c052) ai5_sk_pane

0xb610,	// (0x000418bb) cell_ai5_widget_pane_ParamLimits

0xb610,	// (0x000418bb) cell_ai5_widget_pane

0x5db4,	// (0x0003c05f) aid_size_cell_widget_grid

0x5dc8,	// (0x0003c073) bg_ai5_widget_pane_ParamLimits

0x5dc8,	// (0x0003c073) bg_ai5_widget_pane

0xb699,	// (0x00041944) cell_ai5_widget_pane_g2

0xb6a9,	// (0x00041954) cell_ai5_widget_pane_g3

0xb6c8,	// (0x00041973) cell_ai5_widget_pane_g4

0xb6d4,	// (0x0004197f) cell_ai5_widget_pane_g5

0xb6e0,	// (0x0004198b) cell_ai5_widget_pane_g6

0xb6ec,	// (0x00041997) cell_ai5_widget_pane_g7

0xb734,	// (0x000419df) cell_ai5_widget_pane_t1_ParamLimits

0xb734,	// (0x000419df) cell_ai5_widget_pane_t1

0xb751,	// (0x000419fc) cell_ai5_widget_pane_t2_ParamLimits

0xb751,	// (0x000419fc) cell_ai5_widget_pane_t2

0xb769,	// (0x00041a14) cell_ai5_widget_pane_t3_ParamLimits

0xb769,	// (0x00041a14) cell_ai5_widget_pane_t3

0xb781,	// (0x00041a2c) cell_ai5_widget_pane_t4_ParamLimits

0xb781,	// (0x00041a2c) cell_ai5_widget_pane_t4

0xb79b,	// (0x00041a46) cell_ai5_widget_pane_t5_ParamLimits

0xb79b,	// (0x00041a46) cell_ai5_widget_pane_t5

0x5dd4,	// (0x0003c07f) cell_ai5_widget_pane_t6_ParamLimits

0x5dd4,	// (0x0003c07f) cell_ai5_widget_pane_t6

0x5de6,	// (0x0003c091) cell_ai5_widget_pane_t7_ParamLimits

0x5de6,	// (0x0003c091) cell_ai5_widget_pane_t7

0xb960,	// (0x00041c0b) cell_ai5_widget_pane_t8_ParamLimits

0xb960,	// (0x00041c0b) cell_ai5_widget_pane_t8

0x0009,

0xfe38,	// (0x000460e3) cell_ai5_widget_pane_t_ParamLimits

0xfe38,	// (0x000460e3) cell_ai5_widget_pane_t

0xb9ac,	// (0x00041c57) grid_ai5_widget_pane

0xbeee,	// (0x00042199) highlight_cell_ai5_widget_pane_ParamLimits

0xbeee,	// (0x00042199) highlight_cell_ai5_widget_pane

0xb9c2,	// (0x00041c6d) ai5_sk_left_pane

0xb9cc,	// (0x00041c77) ai5_sk_middle_pane

0xb9d6,	// (0x00041c81) ai5_sk_right_pane

0x5dff,	// (0x0003c0aa) bg_ai5_widget_pane_g1_ParamLimits

0x5dff,	// (0x0003c0aa) bg_ai5_widget_pane_g1

0x5e0b,	// (0x0003c0b6) bg_ai5_widget_pane_g2_ParamLimits

0x5e0b,	// (0x0003c0b6) bg_ai5_widget_pane_g2

0x5e17,	// (0x0003c0c2) bg_ai5_widget_pane_g3_ParamLimits

0x5e17,	// (0x0003c0c2) bg_ai5_widget_pane_g3

0x5e23,	// (0x0003c0ce) bg_ai5_widget_pane_g4_ParamLimits

0x5e23,	// (0x0003c0ce) bg_ai5_widget_pane_g4

0x5e2f,	// (0x0003c0da) bg_ai5_widget_pane_g5_ParamLimits

0x5e2f,	// (0x0003c0da) bg_ai5_widget_pane_g5

0x5e3b,	// (0x0003c0e6) bg_ai5_widget_pane_g6_ParamLimits

0x5e3b,	// (0x0003c0e6) bg_ai5_widget_pane_g6

0x5e47,	// (0x0003c0f2) bg_ai5_widget_pane_g7_ParamLimits

0x5e47,	// (0x0003c0f2) bg_ai5_widget_pane_g7

0x5e53,	// (0x0003c0fe) bg_ai5_widget_pane_g8_ParamLimits

0x5e53,	// (0x0003c0fe) bg_ai5_widget_pane_g8

0x5e5f,	// (0x0003c10a) bg_ai5_widget_pane_g9_ParamLimits

0x5e5f,	// (0x0003c10a) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x000460f8) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x000460f8) bg_ai5_widget_pane_g

0x5e92,	// (0x0003c13d) cell_shortcut_ai5_widget_pane_ParamLimits

0x5e92,	// (0x0003c13d) cell_shortcut_ai5_widget_pane

0xb4af,	// (0x0004175a) bg_cell_shortcut_ai5_widget_pane

0x5ea3,	// (0x0003c14e) cell_grid_ai5_widget_pane_g1

0x5eac,	// (0x0003c157) highlight_cell_shortcut_ai5_widget_pane

0xce79,	// (0x00043124) ai5_sk_left_pane_g1

0x5eb4,	// (0x0003c15f) ai5_sk_left_pane_g2

0x5ebc,	// (0x0003c167) ai5_sk_left_pane_g3

0x5ec4,	// (0x0003c16f) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x0004610b) ai5_sk_left_pane_g

0x5ecc,	// (0x0003c177) ai5_sk_left_pane_t1

0xce71,	// (0x0004311c) ai5_sk_right_pane_g1

0x5eda,	// (0x0003c185) ai5_sk_right_pane_g2

0x5ee2,	// (0x0003c18d) ai5_sk_right_pane_g3

0x5eea,	// (0x0003c195) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00046114) ai5_sk_right_pane_g

0x5ef2,	// (0x0003c19d) ai5_sk_right_pane_t1

0xce71,	// (0x0004311c) ai5_sk_middle_pane_g1

0xce79,	// (0x00043124) ai5_sk_middle_pane_g2

0xce91,	// (0x0004313c) ai5_sk_middle_pane_g3

0x5ee2,	// (0x0003c18d) ai5_sk_middle_pane_g4

0x5ebc,	// (0x0003c167) ai5_sk_middle_pane_g5

0x5f00,	// (0x0003c1ab) ai5_sk_middle_pane_g6

0xb9e0,	// (0x00041c8b) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x0004611d) ai5_sk_middle_pane_g

0x9965,	// (0x0003fc10) aid_touch_area_size_lc0_ParamLimits

0x9965,	// (0x0003fc10) aid_touch_area_size_lc0

0x2c1a,	// (0x00038ec5) cell_hwr_candidate_pane_t1_ParamLimits

0xcc95,	// (0x00042f40) aid_touch_navi_pane

0x9bea,	// (0x0003fe95) status_dt_navi_pane_ParamLimits

0x9bea,	// (0x0003fe95) status_dt_navi_pane

0x9c02,	// (0x0003fead) status_dt_sta_pane_ParamLimits

0x9c02,	// (0x0003fead) status_dt_sta_pane

0xb9e8,	// (0x00041c93) dt_sta_controll_pane

0xb9f5,	// (0x00041ca0) dt_sta_indi_pane

0xba02,	// (0x00041cad) dt_sta_title_pane

0xb5a6,	// (0x00041851) bg_dt_sta_indi_pane_ParamLimits

0xb5a6,	// (0x00041851) bg_dt_sta_indi_pane

0xba14,	// (0x00041cbf) dt_sta_battery_pane

0xba1c,	// (0x00041cc7) dt_sta_indi_pane_g1

0x5f08,	// (0x0003c1b3) dt_sta_indi_pane_g2

0x5f11,	// (0x0003c1bc) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x0004612c) dt_sta_indi_pane_g

0x5f1a,	// (0x0003c1c5) dt_sta_signal_pane

0xbeee,	// (0x00042199) bg_dt_sta_title_pane_ParamLimits

0xbeee,	// (0x00042199) bg_dt_sta_title_pane

0xdb3a,	// (0x00043de5) dt_sta_title_pane_g1

0xba25,	// (0x00041cd0) dt_sta_title_pane_t1_ParamLimits

0xba25,	// (0x00041cd0) dt_sta_title_pane_t1

0xb403,	// (0x000416ae) bg_dt_sta_control_pane

0xba3a,	// (0x00041ce5) dt_sta_controll_pane_g1

0x5f23,	// (0x0003c1ce) bg_dt_sta_title_pane_g1

0x5f2c,	// (0x0003c1d7) bg_dt_sta_title_pane_g2

0x5f35,	// (0x0003c1e0) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00046133) bg_dt_sta_title_pane_g

0xec1f,	// (0x00044eca) bg_dt_sta_indi_pane_g1

0x5f3e,	// (0x0003c1e9) dt_sta_signal_pane_g1

0x5f46,	// (0x0003c1f1) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x0004613a) dt_sta_signal_pane_g

0x5f4e,	// (0x0003c1f9) dt_sta_battery_pane_g1

0x5f57,	// (0x0003c202) dt_sta_battery_pane_t1

0xec1f,	// (0x00044eca) bg_dt_sta_control_pane_g1

0xc498,	// (0x00042743) fep_china_uni_eep_pane

0xc4a0,	// (0x0004274b) fep_china_uni_entry_pane_ParamLimits

0xc4b0,	// (0x0004275b) popup_fep_china_uni_window_g1_ParamLimits

0xc4c0,	// (0x0004276b) popup_fep_china_uni_window_g2_ParamLimits

0xc4c0,	// (0x0004276b) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x000459e5) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x000459e5) popup_fep_china_uni_window_g

0x5f66,	// (0x0003c211) fep_china_uni_eep_pane_g1

0x5f6e,	// (0x0003c219) fep_china_uni_eep_pane_t1

0x5d7a,	// (0x0003c025) aid_touch_area_size_smil_player

0xcd46,	// (0x00042ff1) lc0_clock_pane

0xcd7f,	// (0x0004302a) status_pane_g5_ParamLimits

0xcd7f,	// (0x0004302a) status_pane_g5

0x9431,	// (0x0003f6dc) popup_keymap_window

0xcd5f,	// (0x0004300a) status_icon_pane

0xb6a9,	// (0x00041954) cell_ai5_widget_pane_g3_ParamLimits

0xb6c8,	// (0x00041973) cell_ai5_widget_pane_g4_ParamLimits

0xb6d4,	// (0x0004197f) cell_ai5_widget_pane_g5_ParamLimits

0xb6f8,	// (0x000419a3) cell_ai5_widget_pane_g8_ParamLimits

0xb6f8,	// (0x000419a3) cell_ai5_widget_pane_g8

0xb70c,	// (0x000419b7) cell_ai5_widget_pane_g9_ParamLimits

0xb70c,	// (0x000419b7) cell_ai5_widget_pane_g9

0xb720,	// (0x000419cb) cell_ai5_widget_pane_g10_ParamLimits

0xb720,	// (0x000419cb) cell_ai5_widget_pane_g10

0x5f7d,	// (0x0003c228) status_icon_pane_g1

0xb403,	// (0x000416ae) bg_popup_sub_pane_cp13

0x5f85,	// (0x0003c230) popup_keymap_window_t1

0x9264,	// (0x0003f50f) control_pane_g6_ParamLimits

0x9264,	// (0x0003f50f) control_pane_g6

0x9271,	// (0x0003f51c) control_pane_g7_ParamLimits

0x9271,	// (0x0003f51c) control_pane_g7

0x927e,	// (0x0003f529) control_pane_g8_ParamLimits

0x927e,	// (0x0003f529) control_pane_g8

0xb9e8,	// (0x00041c93) dt_sta_controll_pane_ParamLimits

0xb9f5,	// (0x00041ca0) dt_sta_indi_pane_ParamLimits

0xba02,	// (0x00041cad) dt_sta_title_pane_ParamLimits

0xbe24,	// (0x000420cf) aid_size_touch_scroll_bar_cale

0x1540,	// (0x000377eb) popup_discreet_window_ParamLimits

0x1540,	// (0x000377eb) popup_discreet_window

0x82c2,	// (0x0003e56d) popup_sk_window

0xd416,	// (0x000436c1) bg_popup_sub_pane_cp28_ParamLimits

0xd416,	// (0x000436c1) bg_popup_sub_pane_cp28

0x5f93,	// (0x0003c23e) popup_discreet_window_g1_ParamLimits

0x5f93,	// (0x0003c23e) popup_discreet_window_g1

0x5fb3,	// (0x0003c25e) popup_discreet_window_t1_ParamLimits

0x5fb3,	// (0x0003c25e) popup_discreet_window_t1

0x5fd1,	// (0x0003c27c) popup_discreet_window_t2_ParamLimits

0x5fd1,	// (0x0003c27c) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x0004613f) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x0004613f) popup_discreet_window_t

0x35c7,	// (0x00039872) popup_sk_window_g1

0x35d1,	// (0x0003987c) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00046146) popup_sk_window_g

0x6023,	// (0x0003c2ce) popup_sk_window_t1

0x6031,	// (0x0003c2dc) popup_sk_window_t1_copy1

0xb699,	// (0x00041944) cell_ai5_widget_pane_g2_ParamLimits

0xb972,	// (0x00041c1d) cell_ai5_widget_pane_t9_ParamLimits

0xb972,	// (0x00041c1d) cell_ai5_widget_pane_t9

0xb403,	// (0x000416ae) main_fep_fshwr2_pane

0xba43,	// (0x00041cee) aid_fshwr2_btn_pane

0xba4b,	// (0x00041cf6) aid_fshwr2_syb_pane

0xba53,	// (0x00041cfe) aid_fshwr2_txt_pane

0xba5b,	// (0x00041d06) fshwr2_func_candi_pane

0xba65,	// (0x00041d10) fshwr2_hwr_syb_pane

0xba73,	// (0x00041d1e) fshwr2_icf_pane

0xb403,	// (0x000416ae) fshwr2_icf_bg_pane

0xba7d,	// (0x00041d28) fshwr2_icf_pane_t1_ParamLimits

0xba7d,	// (0x00041d28) fshwr2_icf_pane_t1

0xec1f,	// (0x00044eca) fshwr2_func_candi_pane_g1

0x6053,	// (0x0003c2fe) fshwr2_func_candi_row_pane_ParamLimits

0x6053,	// (0x0003c2fe) fshwr2_func_candi_row_pane

0xba97,	// (0x00041d42) cell_fshwr2_syb_pane_ParamLimits

0xba97,	// (0x00041d42) cell_fshwr2_syb_pane

0xeea6,	// (0x00045151) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeea6,	// (0x00045151) fshwr2_hwr_syb_pane_g1

0xb403,	// (0x000416ae) bg_popup_call_pane_cp01

0x6064,	// (0x0003c30f) fshwr2_func_candi_cell_pane_ParamLimits

0x6064,	// (0x0003c30f) fshwr2_func_candi_cell_pane

0x6095,	// (0x0003c340) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6095,	// (0x0003c340) fshwr2_func_candi_cell_bg_pane

0x60af,	// (0x0003c35a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x60af,	// (0x0003c35a) fshwr2_func_candi_cell_pane_g1

0x60cf,	// (0x0003c37a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x60cf,	// (0x0003c37a) fshwr2_func_candi_cell_pane_t1

0xb403,	// (0x000416ae) bg_button_pane_cp08

0xc929,	// (0x00042bd4) cell_fshwr2_syb_bg_pane

0xbab1,	// (0x00041d5c) cell_fshwr2_syb_bg_pane_g1

0x60e2,	// (0x0003c38d) cell_fshwr2_syb_bg_pane_t1

0xbeee,	// (0x00042199) main_tmo_pane

0x9f42,	// (0x000401ed) uni_indicator_pane_g1_ParamLimits

0x9f57,	// (0x00040202) uni_indicator_pane_g2_ParamLimits

0x9f6c,	// (0x00040217) uni_indicator_pane_g3_ParamLimits

0xddfe,	// (0x000440a9) uni_indicator_pane_g4_ParamLimits

0xddfe,	// (0x000440a9) uni_indicator_pane_g4

0xde12,	// (0x000440bd) uni_indicator_pane_g5_ParamLimits

0xde12,	// (0x000440bd) uni_indicator_pane_g5

0xde26,	// (0x000440d1) uni_indicator_pane_g6_ParamLimits

0xde26,	// (0x000440d1) uni_indicator_pane_g6

0xf928,	// (0x00045bd3) uni_indicator_pane_g_ParamLimits

0xa8d6,	// (0x00040b81) popup_tmo_note_window_ParamLimits

0xa8d6,	// (0x00040b81) popup_tmo_note_window

0xb403,	// (0x000416ae) fshwr2_bg_pane

0x60c0,	// (0x0003c36b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x60c0,	// (0x0003c36b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x0004614b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x0004614b) fshwr2_func_candi_cell_pane_g

0xec1f,	// (0x00044eca) bg_popup_window_pane_cp01

0x60f1,	// (0x0003c39c) bg_popup_window_pane_g1_cp01

0x60fa,	// (0x0003c3a5) bg_popup_window_pane_cp22_ParamLimits

0x60fa,	// (0x0003c3a5) bg_popup_window_pane_cp22

0x6108,	// (0x0003c3b3) listscroll_tmo_link_pane_ParamLimits

0x6108,	// (0x0003c3b3) listscroll_tmo_link_pane

0x6148,	// (0x0003c3f3) popup_tmo_note_window_g1_ParamLimits

0x6148,	// (0x0003c3f3) popup_tmo_note_window_g1

0x6155,	// (0x0003c400) tmo_note_info_pane_ParamLimits

0x6155,	// (0x0003c400) tmo_note_info_pane

0xbab9,	// (0x00041d64) list_tmo_note_info_pane_g1_ParamLimits

0xbab9,	// (0x00041d64) list_tmo_note_info_pane_g1

0x616f,	// (0x0003c41a) list_tmo_note_info_pane_g2_ParamLimits

0x616f,	// (0x0003c41a) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00046150) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00046150) list_tmo_note_info_pane_g

0x618b,	// (0x0003c436) list_tmo_note_info_text_pane_ParamLimits

0x618b,	// (0x0003c436) list_tmo_note_info_text_pane

0x61cd,	// (0x0003c478) list_tmo_link_pane

0x61da,	// (0x0003c485) scroll_pane_cp20

0x61e7,	// (0x0003c492) list_single_tmo_link_pane_ParamLimits

0x61e7,	// (0x0003c492) list_single_tmo_link_pane

0x61f7,	// (0x0003c4a2) list_single_tmo_link_pane_t1

0x6205,	// (0x0003c4b0) list_tmo_note_info_text_pane_t1_ParamLimits

0x6205,	// (0x0003c4b0) list_tmo_note_info_text_pane_t1

0x8f69,	// (0x0003f214) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8f69,	// (0x0003f214) aid_size_touch_scroll_bar_cp01

0x7ed5,	// (0x0003e180) aid_size_touch_slider_marker

0x82b2,	// (0x0003e55d) popup_settings_window_ParamLimits

0x82b2,	// (0x0003e55d) popup_settings_window

0x0bf0,	// (0x00036e9b) popup_candi_list_indi_window

0xcc95,	// (0x00042f40) aid_touch_navi_pane_ParamLimits

0x2ddc,	// (0x00039087) rs_clock_indi_pane

0x2de5,	// (0x00039090) sctrl_sk_bottom_pane_ParamLimits

0x2df6,	// (0x000390a1) sctrl_sk_top_pane_ParamLimits

0x2edd,	// (0x00039188) popup_fep_tooltip_window

0x5db4,	// (0x0003c05f) aid_size_cell_widget_grid_ParamLimits

0xb68d,	// (0x00041938) cell_ai5_widget_pane_g1_ParamLimits

0xb68d,	// (0x00041938) cell_ai5_widget_pane_g1

0xb6e0,	// (0x0004198b) cell_ai5_widget_pane_g6_ParamLimits

0xb6ec,	// (0x00041997) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe23,	// (0x000460ce) cell_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x000460ce) cell_ai5_widget_pane_g

0xb996,	// (0x00041c41) cell_ai5_widget_pane_t10_ParamLimits

0xb996,	// (0x00041c41) cell_ai5_widget_pane_t10

0xb9ac,	// (0x00041c57) grid_ai5_widget_pane_ParamLimits

0x5e6b,	// (0x0003c116) cell_contacts_ai5_widget_pane_ParamLimits

0x5e6b,	// (0x0003c116) cell_contacts_ai5_widget_pane

0x5fe6,	// (0x0003c291) popup_discreet_window_t3_ParamLimits

0x5fe6,	// (0x0003c291) popup_discreet_window_t3

0x603f,	// (0x0003c2ea) popup_fshwr2_char_preview_window_ParamLimits

0x603f,	// (0x0003c2ea) popup_fshwr2_char_preview_window

0xbad0,	// (0x00041d7b) tmo_note_info_pane_t1

0xbae5,	// (0x00041d90) tmo_note_info_pane_t2

0xbafe,	// (0x00041da9) tmo_note_info_pane_t3

0x61a9,	// (0x0003c454) tmo_note_info_pane_t4

0x61bb,	// (0x0003c466) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00046155) tmo_note_info_pane_t

0x61cd,	// (0x0003c478) list_tmo_link_pane_ParamLimits

0x61da,	// (0x0003c485) scroll_pane_cp20_ParamLimits

0xb403,	// (0x000416ae) bg_popup_fep_char_preview_window_cp01

0x621e,	// (0x0003c4c9) popup_fshwr2_char_preview_window_t1

0x622c,	// (0x0003c4d7) popup_candi_list_indi_window_g1

0x6235,	// (0x0003c4e0) bg_cell_contacts_ai5_widget_pane

0x6241,	// (0x0003c4ec) cell_contacts_ai5_widget_pane_g1

0x6255,	// (0x0003c500) cell_contacts_ai5_widget_pane_g2

0x6264,	// (0x0003c50f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00046160) cell_contacts_ai5_widget_pane_g

0x6277,	// (0x0003c522) cell_contacts_ai5_widget_pane_t1

0xbeee,	// (0x00042199) highlight_cell_shortcut_ai5_widget_pane_cp01

0x62f1,	// (0x0003c59c) settings_container_pane

0xc929,	// (0x00042bd4) listscroll_set_pane_copy1

0xe60f,	// (0x000448ba) scroll_pane_cp121_copy1

0x62fd,	// (0x0003c5a8) set_content_pane_copy1

0x6305,	// (0x0003c5b0) aid_height_set_list_copy1_ParamLimits

0x6305,	// (0x0003c5b0) aid_height_set_list_copy1

0xd94a,	// (0x00043bf5) aid_size_parent_copy1_ParamLimits

0xd94a,	// (0x00043bf5) aid_size_parent_copy1

0x6311,	// (0x0003c5bc) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6311,	// (0x0003c5bc) button_value_adjust_pane_cp6_copy1

0xc039,	// (0x000422e4) list_highlight_pane_cp2_copy1_ParamLimits

0xc039,	// (0x000422e4) list_highlight_pane_cp2_copy1

0x6325,	// (0x0003c5d0) list_set_pane_copy1_ParamLimits

0x6325,	// (0x0003c5d0) list_set_pane_copy1

0x628c,	// (0x0003c537) main_pane_set_t1_copy1_ParamLimits

0x628c,	// (0x0003c537) main_pane_set_t1_copy1

0x62c6,	// (0x0003c571) main_pane_set_t2_copy1_ParamLimits

0x62c6,	// (0x0003c571) main_pane_set_t2_copy1

0x63d2,	// (0x0003c67d) main_pane_set_t3_copy1

0x63e0,	// (0x0003c68b) main_pane_set_t4_copy1

0x62e5,	// (0x0003c590) set_content_pane_g1_copy1_ParamLimits

0x62e5,	// (0x0003c590) set_content_pane_g1_copy1

0x63ee,	// (0x0003c699) setting_code_pane_copy1

0x63f8,	// (0x0003c6a3) setting_slider_graphic_pane_copy1

0x63f8,	// (0x0003c6a3) setting_slider_pane_copy1

0x63f8,	// (0x0003c6a3) setting_text_pane_copy1

0x6402,	// (0x0003c6ad) setting_volume_pane_copy1

0x640b,	// (0x0003c6b6) settings_code_pane_cp2_copy1

0x6413,	// (0x0003c6be) settings_code_pane_cp_copy1_ParamLimits

0x6413,	// (0x0003c6be) settings_code_pane_cp_copy1

0x6427,	// (0x0003c6d2) volume_set_pane_copy1

0x642f,	// (0x0003c6da) volume_set_pane_g10_copy1

0x6437,	// (0x0003c6e2) volume_set_pane_g1_copy1

0x643f,	// (0x0003c6ea) volume_set_pane_g2_copy1

0x6447,	// (0x0003c6f2) volume_set_pane_g3_copy1

0x644f,	// (0x0003c6fa) volume_set_pane_g4_copy1

0x6457,	// (0x0003c702) volume_set_pane_g5_copy1

0x645f,	// (0x0003c70a) volume_set_pane_g6_copy1

0x6467,	// (0x0003c712) volume_set_pane_g7_copy1

0x646f,	// (0x0003c71a) volume_set_pane_g8_copy1

0x6477,	// (0x0003c722) volume_set_pane_g9_copy1

0xb473,	// (0x0004171e) bg_set_opt_pane_cp_copy1_ParamLimits

0xb473,	// (0x0004171e) bg_set_opt_pane_cp_copy1

0x647f,	// (0x0003c72a) setting_slider_pane_t1_copy1_ParamLimits

0x647f,	// (0x0003c72a) setting_slider_pane_t1_copy1

0x649d,	// (0x0003c748) setting_slider_pane_t2_copy1_ParamLimits

0x649d,	// (0x0003c748) setting_slider_pane_t2_copy1

0x64b7,	// (0x0003c762) setting_slider_pane_t3_copy1_ParamLimits

0x64b7,	// (0x0003c762) setting_slider_pane_t3_copy1

0x64cf,	// (0x0003c77a) slider_set_pane_copy1_ParamLimits

0x64cf,	// (0x0003c77a) slider_set_pane_copy1

0xbf49,	// (0x000421f4) set_opt_bg_pane_g1_copy2

0xbf51,	// (0x000421fc) set_opt_bg_pane_g2_copy2

0x64e5,	// (0x0003c790) set_opt_bg_pane_g3_copy2

0xbf61,	// (0x0004220c) set_opt_bg_pane_g4_copy2

0xbf69,	// (0x00042214) set_opt_bg_pane_g5_copy2

0xbf71,	// (0x0004221c) set_opt_bg_pane_g6_copy2

0x64ef,	// (0x0003c79a) set_opt_bg_pane_g7_copy2

0x64f7,	// (0x0003c7a2) set_opt_bg_pane_g8_copy2

0x6501,	// (0x0003c7ac) set_opt_bg_pane_g9_copy2

0x35db,	// (0x00039886) aid_size_touch_slider_mark_copy1_ParamLimits

0x35db,	// (0x00039886) aid_size_touch_slider_mark_copy1

0x650b,	// (0x0003c7b6) slider_set_pane_g1_copy1

0x35ef,	// (0x0003989a) slider_set_pane_g2_copy1

0x2715,	// (0x000389c0) slider_set_pane_g3_copy1_ParamLimits

0x2715,	// (0x000389c0) slider_set_pane_g3_copy1

0x2729,	// (0x000389d4) slider_set_pane_g4_copy1_ParamLimits

0x2729,	// (0x000389d4) slider_set_pane_g4_copy1

0x2741,	// (0x000389ec) slider_set_pane_g5_copy1_ParamLimits

0x2741,	// (0x000389ec) slider_set_pane_g5_copy1

0x2715,	// (0x000389c0) slider_set_pane_g6_copy1_ParamLimits

0x2715,	// (0x000389c0) slider_set_pane_g6_copy1

0x35f7,	// (0x000398a2) slider_set_pane_g7_copy1_ParamLimits

0x35f7,	// (0x000398a2) slider_set_pane_g7_copy1

0xb417,	// (0x000416c2) bg_set_opt_pane_cp2_copy1

0x6514,	// (0x0003c7bf) setting_slider_graphic_pane_g1_copy1

0x651d,	// (0x0003c7c8) setting_slider_graphic_pane_t1_copy1

0x652d,	// (0x0003c7d8) setting_slider_graphic_pane_t2_copy1

0x653d,	// (0x0003c7e8) slider_set_pane_cp_copy1

0x654d,	// (0x0003c7f8) input_focus_pane_cp1_copy1

0x6556,	// (0x0003c801) list_set_text_pane_copy1

0x655e,	// (0x0003c809) setting_text_pane_g1_copy1

0x1299,	// (0x00037544) set_text_pane_t1_copy1

0x654d,	// (0x0003c7f8) input_focus_pane_cp2_copy1

0x655e,	// (0x0003c809) setting_code_pane_g1_copy1

0x6567,	// (0x0003c812) setting_code_pane_t1_copy1

0x6575,	// (0x0003c820) list_set_graphic_pane_copy1

0xb417,	// (0x000416c2) bg_set_opt_pane_cp4_copy1

0xc62b,	// (0x000428d6) list_set_graphic_pane_g1_copy1_ParamLimits

0xc62b,	// (0x000428d6) list_set_graphic_pane_g1_copy1

0x6589,	// (0x0003c834) list_set_graphic_pane_g2_copy1

0xc643,	// (0x000428ee) list_set_graphic_pane_t1_copy1_ParamLimits

0xc643,	// (0x000428ee) list_set_graphic_pane_t1_copy1

0xec1f,	// (0x00044eca) rs_clock_indi_pane_g1

0x6591,	// (0x0003c83c) rs_clock_indi_pane_t1

0x659f,	// (0x0003c84a) rs_indi_pane

0x65a7,	// (0x0003c852) rs_indi_pane_g1

0x65b0,	// (0x0003c85b) rs_indi_pane_g2

0x65b9,	// (0x0003c864) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x00046167) rs_indi_pane_g

0xc929,	// (0x00042bd4) bg_popup_preview_window_pane_cp03

0x65c2,	// (0x0003c86d) popup_fep_tooltip_window_t1

0x48cb,	// (0x0003ab76) popup_note2_window_g2_ParamLimits

0x48cb,	// (0x0003ab76) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x00045f07) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x00045f07) popup_note2_window_g

0x4db9,	// (0x0003b064) bg_popup_sub_pane_cp11_ParamLimits

0x4dc6,	// (0x0003b071) cell_ai3_links_pane_g1_ParamLimits

0x4ddd,	// (0x0003b088) cell_ai3_links_pane_t1

0x1299,	// (0x00037544) set_text_pane_t1_copy1_ParamLimits

0xc838,	// (0x00042ae3) cell_graphic_popup_pane_cp2_ParamLimits

0xc838,	// (0x00042ae3) cell_graphic_popup_pane_cp2

0x65d0,	// (0x0003c87b) cell_graphic_popup_pane_g1_cp2

0xbc37,	// (0x00041ee2) cell_graphic_popup_pane_g2_cp2

0x65d8,	// (0x0003c883) cell_graphic_popup_pane_g3_cp2

0x65e0,	// (0x0003c88b) cell_graphic_popup_pane_t2_cp2

0xbc48,	// (0x00041ef3) grid_highlight_pane_cp3_cp2

0xc1e3,	// (0x0004248e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbeee,	// (0x00042199) main_tmo_pane_ParamLimits

0xa8ca,	// (0x00040b75) popup_tmo_big_image_note_window

0xb67d,	// (0x00041928) cell_ai5_widget_list_pane

0xb685,	// (0x00041930) cell_ai5_widget_lrg_icon_pane

0xbad0,	// (0x00041d7b) tmo_note_info_pane_t1_ParamLimits

0xbae5,	// (0x00041d90) tmo_note_info_pane_t2_ParamLimits

0xbafe,	// (0x00041da9) tmo_note_info_pane_t3_ParamLimits

0x61a9,	// (0x0003c454) tmo_note_info_pane_t4_ParamLimits

0x61bb,	// (0x0003c466) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00046155) tmo_note_info_pane_t_ParamLimits

0x62f1,	// (0x0003c59c) settings_container_pane_ParamLimits

0x6545,	// (0x0003c7f0) indicator_popup_pane_cp5

0x6545,	// (0x0003c7f0) indicator_popup_pane_cp6

0x6575,	// (0x0003c820) list_set_graphic_pane_copy1_ParamLimits

0xb403,	// (0x000416ae) bg_popup_window_pane_cp23

0x65ee,	// (0x0003c899) popup_tmo_big_image_note_window_g1

0x65f9,	// (0x0003c8a4) popup_tmo_big_image_note_window_t1

0x6609,	// (0x0003c8b4) popup_tmo_big_image_note_window_t2

0x6619,	// (0x0003c8c4) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x0004616e) popup_tmo_big_image_note_window_t

0xbb13,	// (0x00041dbe) cell_ai5_widget_lrg_icon_pane_g1

0xbb1b,	// (0x00041dc6) cell_ai5_widget_lrg_icon_pane_t1

0xbb29,	// (0x00041dd4) cell_ai5_widget_list_row_pane_ParamLimits

0xbb29,	// (0x00041dd4) cell_ai5_widget_list_row_pane

0xbb42,	// (0x00041ded) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbb42,	// (0x00041ded) cell_ai5_widget_list_row_pane_g1

0xbb4f,	// (0x00041dfa) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbb4f,	// (0x00041dfa) cell_ai5_widget_list_row_pane_t1

0xbb67,	// (0x00041e12) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbb67,	// (0x00041e12) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeca,	// (0x00046175) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x00046175) cell_ai5_widget_list_row_pane_t

0xb403,	// (0x000416ae) main_fep_vtchi_ss_pane

0x6629,	// (0x0003c8d4) popup_fep_char_pre_window

0x6631,	// (0x0003c8dc) popup_fep_ituss_window

0x6652,	// (0x0003c8fd) popup_fep_vkbss_window

0x6671,	// (0x0003c91c) grid_vkbss_keypad_pane_ParamLimits

0x6671,	// (0x0003c91c) grid_vkbss_keypad_pane

0x6681,	// (0x0003c92c) ituss_keypad_pane

0x6699,	// (0x0003c944) aid_vkbss_key_offset_ParamLimits

0x6699,	// (0x0003c944) aid_vkbss_key_offset

0x66a5,	// (0x0003c950) cell_vkbss_key_pane_ParamLimits

0x66a5,	// (0x0003c950) cell_vkbss_key_pane

0xe0aa,	// (0x00044355) bg_cell_vkbss_key_g1_ParamLimits

0xe0aa,	// (0x00044355) bg_cell_vkbss_key_g1

0x66bb,	// (0x0003c966) cell_vkbss_key_3p_pane_ParamLimits

0x66bb,	// (0x0003c966) cell_vkbss_key_3p_pane

0x66d5,	// (0x0003c980) cell_vkbss_key_g1_ParamLimits

0x66d5,	// (0x0003c980) cell_vkbss_key_g1

0x66ef,	// (0x0003c99a) cell_vkbss_key_t1_ParamLimits

0x66ef,	// (0x0003c99a) cell_vkbss_key_t1

0x671a,	// (0x0003c9c5) cell_ituss_key_pane_ParamLimits

0x671a,	// (0x0003c9c5) cell_ituss_key_pane

0x672a,	// (0x0003c9d5) bg_cell_ituss_key_g1_ParamLimits

0x672a,	// (0x0003c9d5) bg_cell_ituss_key_g1

0x6736,	// (0x0003c9e1) cell_ituss_key_pane_g1_ParamLimits

0x6736,	// (0x0003c9e1) cell_ituss_key_pane_g1

0x6742,	// (0x0003c9ed) cell_ituss_key_pane_g2_ParamLimits

0x6742,	// (0x0003c9ed) cell_ituss_key_pane_g2

0x0001,

0xfecf,	// (0x0004617a) cell_ituss_key_pane_g_ParamLimits

0xfecf,	// (0x0004617a) cell_ituss_key_pane_g

0x675b,	// (0x0003ca06) cell_ituss_key_t1_ParamLimits

0x675b,	// (0x0003ca06) cell_ituss_key_t1

0x6789,	// (0x0003ca34) cell_ituss_key_t2_ParamLimits

0x6789,	// (0x0003ca34) cell_ituss_key_t2

0x67ba,	// (0x0003ca65) cell_ituss_key_t3_ParamLimits

0x67ba,	// (0x0003ca65) cell_ituss_key_t3

0x67eb,	// (0x0003ca96) cell_ituss_key_t4_ParamLimits

0x67eb,	// (0x0003ca96) cell_ituss_key_t4

0x0003,

0xfed4,	// (0x0004617f) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x0004617f) cell_ituss_key_t

0x681c,	// (0x0003cac7) cell_vkbss_key_3p_pane_g1

0x6824,	// (0x0003cacf) cell_vkbss_key_3p_pane_g2

0x682c,	// (0x0003cad7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x00046188) cell_vkbss_key_3p_pane_g

0xb403,	// (0x000416ae) bg_popup_fep_char_preview_window_cp02

0x6834,	// (0x0003cadf) popup_fep_char_pre_window_t1

0xb673,	// (0x0004191e) main_ai5_sk_pane

0x6235,	// (0x0003c4e0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6241,	// (0x0003c4ec) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6255,	// (0x0003c500) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6264,	// (0x0003c50f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00046160) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6277,	// (0x0003c522) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbeee,	// (0x00042199) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbb79,	// (0x00041e24) main_ai5_sk_pane_g1

0xd254,	// (0x000434ff) popup_query_code_window_g1

0x6647,	// (0x0003c8f2) popup_fep_vkb_icf_pane

0x665b,	// (0x0003c906) popup_fep_vtchi_icf_pane

0xbeee,	// (0x00042199) bg_icf_pane

0x6852,	// (0x0003cafd) list_vkb_icf_pane

0xbeee,	// (0x00042199) bg_icf_pane_cp01

0x6a09,	// (0x0003ccb4) vtchi_icf_list_pane

0x6a19,	// (0x0003ccc4) list_vkb_icf_pane_t1_ParamLimits

0x6a19,	// (0x0003ccc4) list_vkb_icf_pane_t1

0x6a33,	// (0x0003ccde) vtchi_icf_list_pane_t1_ParamLimits

0x6a33,	// (0x0003ccde) vtchi_icf_list_pane_t1

0x6631,	// (0x0003c8dc) popup_fep_ituss_window_ParamLimits

0x665b,	// (0x0003c906) popup_fep_vtchi_icf_pane_ParamLimits

0x6681,	// (0x0003c92c) ituss_keypad_pane_ParamLimits

0x6690,	// (0x0003c93b) ituss_sks_pane

0xbeee,	// (0x00042199) bg_icf_pane_ParamLimits

0x6843,	// (0x0003caee) icf_edit_indi_pane_ParamLimits

0x6843,	// (0x0003caee) icf_edit_indi_pane

0x6852,	// (0x0003cafd) list_vkb_icf_pane_ParamLimits

0xbeee,	// (0x00042199) bg_icf_pane_cp01_ParamLimits

0x685e,	// (0x0003cb09) icf_edit_indi_pane_cp01_ParamLimits

0x685e,	// (0x0003cb09) icf_edit_indi_pane_cp01

0x6a11,	// (0x0003ccbc) vtchi_query_pane

0xeea6,	// (0x00045151) icf_edit_indi_pane_g1_ParamLimits

0xeea6,	// (0x00045151) icf_edit_indi_pane_g1

0x6a5a,	// (0x0003cd05) icf_edit_indi_pane_g2_ParamLimits

0x6a5a,	// (0x0003cd05) icf_edit_indi_pane_g2

0x0001,

0xfee4,	// (0x0004618f) icf_edit_indi_pane_g_ParamLimits

0xfee4,	// (0x0004618f) icf_edit_indi_pane_g

0x6a66,	// (0x0003cd11) icf_edit_indi_pane_t1

0x6a74,	// (0x0003cd1f) bg_input_focus_pane_cp042

0xbe1b,	// (0x000420c6) vtchi_button_pane

0x6a7d,	// (0x0003cd28) vtchi_query_pane_t1

0x6a8b,	// (0x0003cd36) vtchi_query_pane_t2

0x6a99,	// (0x0003cd44) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00046194) vtchi_query_pane_t

0xb403,	// (0x000416ae) bg_button_pane_cp13

0x6aa7,	// (0x0003cd52) vtchi_button_pane_g1

0x5634,	// (0x0003b8df) ituss_sks_pane_g1

0x6aaf,	// (0x0003cd5a) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x0004619b) ituss_sks_pane_g

0x6ab8,	// (0x0003cd63) ituss_sks_pane_t1

0x6ac6,	// (0x0003cd71) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x000461a0) ituss_sks_pane_t

0xe8ec,	// (0x00044b97) indicator_nsta_pane_cp_g1

0xe8f5,	// (0x00044ba0) indicator_nsta_pane_cp_g2

0xe8fd,	// (0x00044ba8) indicator_nsta_pane_cp_g3

0xe905,	// (0x00044bb0) indicator_nsta_pane_cp_g4

0xe90d,	// (0x00044bb8) indicator_nsta_pane_cp_g5

0xe915,	// (0x00044bc0) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x00045d51) indicator_nsta_pane_cp_g

0xb2cb,	// (0x00041576) cell_graphic2_pane_t2_ParamLimits

0xb2cb,	// (0x00041576) cell_graphic2_pane_t2

0x0001,

0xfdac,	// (0x00046057) cell_graphic2_pane_t_ParamLimits

0xfdac,	// (0x00046057) cell_graphic2_pane_t

0xb301,	// (0x000415ac) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

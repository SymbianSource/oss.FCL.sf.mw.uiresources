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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ed78 };

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
0x20ce,	// (0x00010e46) Screen

0x20e2,	// (0x00010e5a) application_window_ParamLimits

0x20e2,	// (0x00010e5a) application_window

0x20fc,	// (0x00010e74) screen_g1

0xd328,	// (0x0001c0a0) area_bottom_pane_ParamLimits

0xd328,	// (0x0001c0a0) area_bottom_pane

0xd3e8,	// (0x0001c160) area_top_pane_ParamLimits

0xd3e8,	// (0x0001c160) area_top_pane

0xd47c,	// (0x0001c1f4) main_pane_ParamLimits

0xd47c,	// (0x0001c1f4) main_pane

0x2106,	// (0x00010e7e) misc_graphics

0x47b5,	// (0x0001352d) battery_pane_ParamLimits

0x47b5,	// (0x0001352d) battery_pane

0x557a,	// (0x000142f2) bg_status_flat_pane_g8

0x5582,	// (0x000142fa) bg_status_flat_pane_g9

0x4877,	// (0x000135ef) context_pane_ParamLimits

0x4877,	// (0x000135ef) context_pane

0x498d,	// (0x00013705) navi_pane_ParamLimits

0x498d,	// (0x00013705) navi_pane

0x4a0a,	// (0x00013782) signal_pane_ParamLimits

0x4a0a,	// (0x00013782) signal_pane

0x0008,

0xf879,	// (0x0001e5f1) bg_status_flat_pane_g

0x4a77,	// (0x000137ef) status_pane_g1_ParamLimits

0x4a77,	// (0x000137ef) status_pane_g1

0x4a8b,	// (0x00013803) status_pane_g2_ParamLimits

0x4a8b,	// (0x00013803) status_pane_g2

0x4a97,	// (0x0001380f) status_pane_g3_ParamLimits

0x4a97,	// (0x0001380f) status_pane_g3

0x0004,

0xf7b3,	// (0x0001e52b) status_pane_g_ParamLimits

0xf7b3,	// (0x0001e52b) status_pane_g

0x4ac9,	// (0x00013841) title_pane_ParamLimits

0x4ac9,	// (0x00013841) title_pane

0x4b06,	// (0x0001387e) uni_indicator_pane_ParamLimits

0x4b06,	// (0x0001387e) uni_indicator_pane

0x412e,	// (0x00012ea6) bg_list_pane_ParamLimits

0x412e,	// (0x00012ea6) bg_list_pane

0xcab3,	// (0x0001b82b) find_pane

0x4156,	// (0x00012ece) listscroll_app_pane_ParamLimits

0x4156,	// (0x00012ece) listscroll_app_pane

0x4162,	// (0x00012eda) listscroll_form_pane

0xcabb,	// (0x0001b833) listscroll_gen_pane_ParamLimits

0xcabb,	// (0x0001b833) listscroll_gen_pane

0x4162,	// (0x00012eda) listscroll_set_pane

0x3325,	// (0x0001209d) main_idle_act_pane

0x3e0a,	// (0x00012b82) main_idle_trad_pane

0x3e0a,	// (0x00012b82) main_list_empty_pane

0x4190,	// (0x00012f08) main_midp_pane

0x419c,	// (0x00012f14) main_pane_g1_ParamLimits

0x419c,	// (0x00012f14) main_pane_g1

0x41aa,	// (0x00012f22) popup_ai_message_window_ParamLimits

0x41aa,	// (0x00012f22) popup_ai_message_window

0x4254,	// (0x00012fcc) popup_fep_china_uni_window_ParamLimits

0x4254,	// (0x00012fcc) popup_fep_china_uni_window

0x42ae,	// (0x00013026) popup_fep_japan_candidate_window_ParamLimits

0x42ae,	// (0x00013026) popup_fep_japan_candidate_window

0x42cc,	// (0x00013044) popup_fep_japan_predictive_window_ParamLimits

0x42cc,	// (0x00013044) popup_fep_japan_predictive_window

0x42fc,	// (0x00013074) popup_find_window

0x4309,	// (0x00013081) popup_grid_graphic_window_ParamLimits

0x4309,	// (0x00013081) popup_grid_graphic_window

0x432f,	// (0x000130a7) popup_large_graphic_colour_window

0x4355,	// (0x000130cd) popup_menu_window_ParamLimits

0x4355,	// (0x000130cd) popup_menu_window

0x450f,	// (0x00013287) popup_note_image_window

0x44fb,	// (0x00013273) popup_note_wait_window_ParamLimits

0x44fb,	// (0x00013273) popup_note_wait_window

0x44fb,	// (0x00013273) popup_note_window_ParamLimits

0x44fb,	// (0x00013273) popup_note_window

0x4565,	// (0x000132dd) popup_query_code_window_ParamLimits

0x4565,	// (0x000132dd) popup_query_code_window

0x4579,	// (0x000132f1) popup_query_data_code_window_ParamLimits

0x4579,	// (0x000132f1) popup_query_data_code_window

0x4590,	// (0x00013308) popup_query_data_window_ParamLimits

0x4590,	// (0x00013308) popup_query_data_window

0x45a8,	// (0x00013320) popup_query_sat_info_window_ParamLimits

0x45a8,	// (0x00013320) popup_query_sat_info_window

0x45e1,	// (0x00013359) popup_snote_single_graphic_window_ParamLimits

0x45e1,	// (0x00013359) popup_snote_single_graphic_window

0x45e1,	// (0x00013359) popup_snote_single_text_window_ParamLimits

0x45e1,	// (0x00013359) popup_snote_single_text_window

0x45f6,	// (0x0001336e) popup_sub_window_general

0x4724,	// (0x0001349c) popup_window_general_ParamLimits

0x4724,	// (0x0001349c) popup_window_general

0x4739,	// (0x000134b1) power_save_pane

0xdbc3,	// (0x0001c93b) control_pane_g1_ParamLimits

0xdbc3,	// (0x0001c93b) control_pane_g1

0xdbea,	// (0x0001c962) control_pane_g2_ParamLimits

0xdbea,	// (0x0001c962) control_pane_g2

0x40cf,	// (0x00012e47) control_pane_g3_ParamLimits

0x40cf,	// (0x00012e47) control_pane_g3

0x0007,

0xf79b,	// (0x0001e513) control_pane_g_ParamLimits

0xf79b,	// (0x0001e513) control_pane_g

0xdc2e,	// (0x0001c9a6) control_pane_t1_ParamLimits

0xdc2e,	// (0x0001c9a6) control_pane_t1

0xdc7a,	// (0x0001c9f2) control_pane_t2_ParamLimits

0xdc7a,	// (0x0001c9f2) control_pane_t2

0x0002,

0xf7ac,	// (0x0001e524) control_pane_t_ParamLimits

0xf7ac,	// (0x0001e524) control_pane_t

0x3ff0,	// (0x00012d68) navi_navi_volume_pane_cp1

0x3ff9,	// (0x00012d71) status_small_icon_pane

0x4001,	// (0x00012d79) status_small_pane_g1_ParamLimits

0x4001,	// (0x00012d79) status_small_pane_g1

0x4035,	// (0x00012dad) status_small_pane_g2_ParamLimits

0x4035,	// (0x00012dad) status_small_pane_g2

0x4041,	// (0x00012db9) status_small_pane_g3_ParamLimits

0x4041,	// (0x00012db9) status_small_pane_g3

0x404d,	// (0x00012dc5) status_small_pane_g4_ParamLimits

0x404d,	// (0x00012dc5) status_small_pane_g4

0x4059,	// (0x00012dd1) status_small_pane_g5_ParamLimits

0x4059,	// (0x00012dd1) status_small_pane_g5

0x4068,	// (0x00012de0) status_small_pane_g6_ParamLimits

0x4068,	// (0x00012de0) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001e502) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001e502) status_small_pane_g

0x4098,	// (0x00012e10) status_small_pane_t1

0x40bb,	// (0x00012e33) status_small_wait_pane_ParamLimits

0x40bb,	// (0x00012e33) status_small_wait_pane

0x3819,	// (0x00012591) aid_levels_signal_ParamLimits

0x3819,	// (0x00012591) aid_levels_signal

0x382b,	// (0x000125a3) signal_pane_g1_ParamLimits

0x382b,	// (0x000125a3) signal_pane_g1

0x3840,	// (0x000125b8) signal_pane_g2_ParamLimits

0x3840,	// (0x000125b8) signal_pane_g2

0x0001,

0xf71f,	// (0x0001e497) signal_pane_g_ParamLimits

0xf71f,	// (0x0001e497) signal_pane_g

0x3855,	// (0x000125cd) context_pane_g1

0x2110,	// (0x00010e88) title_pane_g1

0x2146,	// (0x00010ebe) title_pane_t1

0x21ae,	// (0x00010f26) title_pane_t2

0x21d4,	// (0x00010f4c) title_pane_t3

0x0002,

0xf573,	// (0x0001e2eb) title_pane_t

0x4b1e,	// (0x00013896) aid_levels_battery_ParamLimits

0x4b1e,	// (0x00013896) aid_levels_battery

0x4b32,	// (0x000138aa) battery_pane_g1_ParamLimits

0x4b32,	// (0x000138aa) battery_pane_g1

0x4b48,	// (0x000138c0) battery_pane_g2_ParamLimits

0x4b48,	// (0x000138c0) battery_pane_g2

0x0001,

0xf7be,	// (0x0001e536) battery_pane_g_ParamLimits

0xf7be,	// (0x0001e536) battery_pane_g

0x5eaa,	// (0x00014c22) uni_indicator_pane_g1

0x5ebf,	// (0x00014c37) uni_indicator_pane_g2

0x5ed5,	// (0x00014c4d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0001e699) uni_indicator_pane_g

0x3c7a,	// (0x000129f2) navi_icon_pane_ParamLimits

0x3c7a,	// (0x000129f2) navi_icon_pane

0x3bc1,	// (0x00012939) navi_midp_pane

0x3c96,	// (0x00012a0e) navi_navi_pane

0x3ca0,	// (0x00012a18) navi_text_pane_ParamLimits

0x3ca0,	// (0x00012a18) navi_text_pane

0x20fc,	// (0x00010e74) status_small_wait_pane_g1

0x2611,	// (0x00011389) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0001e694) status_small_wait_pane_g

0x5bcd,	// (0x00014945) navi_navi_icon_text_pane

0x5be7,	// (0x0001495f) navi_navi_pane_g1_ParamLimits

0x5be7,	// (0x0001495f) navi_navi_pane_g1

0x5bd5,	// (0x0001494d) navi_navi_pane_g2_ParamLimits

0x5bd5,	// (0x0001494d) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0001e662) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0001e662) navi_navi_pane_g

0x5bf9,	// (0x00014971) navi_navi_tabs_pane

0x5c02,	// (0x0001497a) navi_navi_text_pane

0x5bcd,	// (0x00014945) navi_navi_volume_pane

0x5ba6,	// (0x0001491e) navi_text_pane_t1

0x5b97,	// (0x0001490f) navi_icon_pane_g1

0x5aea,	// (0x00014862) navi_navi_text_pane_t1

0xdf8e,	// (0x0001cd06) navi_navi_volume_pane_g1

0xdf96,	// (0x0001cd0e) volume_small_pane

0x5a50,	// (0x000147c8) navi_navi_icon_text_pane_g1

0x5a58,	// (0x000147d0) navi_navi_icon_text_pane_t1

0x3c96,	// (0x00012a0e) navi_tabs_2_long_pane

0x3c96,	// (0x00012a0e) navi_tabs_2_pane

0x3c96,	// (0x00012a0e) navi_tabs_3_long_pane

0x3c96,	// (0x00012a0e) navi_tabs_3_pane

0x3c96,	// (0x00012a0e) navi_tabs_4_pane

0xdf6e,	// (0x0001cce6) tabs_2_active_pane_ParamLimits

0xdf6e,	// (0x0001cce6) tabs_2_active_pane

0xdf7e,	// (0x0001ccf6) tabs_2_passive_pane_ParamLimits

0xdf7e,	// (0x0001ccf6) tabs_2_passive_pane

0xdf3c,	// (0x0001ccb4) tabs_3_active_pane_ParamLimits

0xdf3c,	// (0x0001ccb4) tabs_3_active_pane

0xdf4c,	// (0x0001ccc4) tabs_3_passive_pane_ParamLimits

0xdf4c,	// (0x0001ccc4) tabs_3_passive_pane

0xdf5d,	// (0x0001ccd5) tabs_3_passive_pane_cp_ParamLimits

0xdf5d,	// (0x0001ccd5) tabs_3_passive_pane_cp

0xdef8,	// (0x0001cc70) tabs_4_active_pane_ParamLimits

0xdef8,	// (0x0001cc70) tabs_4_active_pane

0xdf09,	// (0x0001cc81) tabs_4_passive_pane_ParamLimits

0xdf09,	// (0x0001cc81) tabs_4_passive_pane

0xdf1a,	// (0x0001cc92) tabs_4_passive_pane_cp_ParamLimits

0xdf1a,	// (0x0001cc92) tabs_4_passive_pane_cp

0xdf2b,	// (0x0001cca3) tabs_4_passive_pane_cp2_ParamLimits

0xdf2b,	// (0x0001cca3) tabs_4_passive_pane_cp2

0xded4,	// (0x0001cc4c) tabs_2_long_active_pane_ParamLimits

0xded4,	// (0x0001cc4c) tabs_2_long_active_pane

0xdee6,	// (0x0001cc5e) tabs_2_long_passive_pane_ParamLimits

0xdee6,	// (0x0001cc5e) tabs_2_long_passive_pane

0xde8f,	// (0x0001cc07) tabs_3_long_active_pane_ParamLimits

0xde8f,	// (0x0001cc07) tabs_3_long_active_pane

0xdea8,	// (0x0001cc20) tabs_3_long_passive_pane_ParamLimits

0xdea8,	// (0x0001cc20) tabs_3_long_passive_pane

0xdebb,	// (0x0001cc33) tabs_3_long_passive_pane_cp_ParamLimits

0xdebb,	// (0x0001cc33) tabs_3_long_passive_pane_cp

0xde35,	// (0x0001cbad) volume_small_pane_g1

0xde3e,	// (0x0001cbb6) volume_small_pane_g2

0xde47,	// (0x0001cbbf) volume_small_pane_g3

0xde50,	// (0x0001cbc8) volume_small_pane_g4

0xde59,	// (0x0001cbd1) volume_small_pane_g5

0xde62,	// (0x0001cbda) volume_small_pane_g6

0xde6b,	// (0x0001cbe3) volume_small_pane_g7

0xde74,	// (0x0001cbec) volume_small_pane_g8

0xde7d,	// (0x0001cbf5) volume_small_pane_g9

0xde86,	// (0x0001cbfe) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0001e62e) volume_small_pane_g

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp2_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp2

0x21f4,	// (0x00010f6c) tabs_3_active_pane_g1

0x21fc,	// (0x00010f74) tabs_3_active_pane_t1

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp2_ParamLimits

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp2

0x21f4,	// (0x00010f6c) tabs_3_passive_pane_g1

0x21fc,	// (0x00010f74) tabs_3_passive_pane_t1

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp3_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp3

0x220e,	// (0x00010f86) tabs_4_active_pane_g1

0x2216,	// (0x00010f8e) tabs_4_active_pane_t1

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp3_ParamLimits

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp3

0x220e,	// (0x00010f86) tabs_4_1_passive_pane_g1

0x2216,	// (0x00010f8e) tabs_4_1_passive_pane_t1

0x4190,	// (0x00012f08) list_highlight_pane_cp2

0x6156,	// (0x00014ece) list_set_pane_ParamLimits

0x6156,	// (0x00014ece) list_set_pane

0x61f8,	// (0x00014f70) main_pane_set_t1_ParamLimits

0x61f8,	// (0x00014f70) main_pane_set_t1

0x6218,	// (0x00014f90) main_pane_set_t2_ParamLimits

0x6218,	// (0x00014f90) main_pane_set_t2

0x622c,	// (0x00014fa4) main_pane_set_t3_ParamLimits

0x622c,	// (0x00014fa4) main_pane_set_t3

0x623e,	// (0x00014fb6) main_pane_set_t4_ParamLimits

0x623e,	// (0x00014fb6) main_pane_set_t4

0x0003,

0xf986,	// (0x0001e6fe) main_pane_set_t_ParamLimits

0xf986,	// (0x0001e6fe) main_pane_set_t

0x6250,	// (0x00014fc8) setting_code_pane

0x625a,	// (0x00014fd2) setting_slider_graphic_pane

0x625a,	// (0x00014fd2) setting_slider_pane

0x625a,	// (0x00014fd2) setting_text_pane

0x625a,	// (0x00014fd2) setting_volume_pane

0xd6ad,	// (0x0001c425) volume_set_pane

0x21e6,	// (0x00010f5e) bg_set_opt_pane_cp

0xd6b5,	// (0x0001c42d) setting_slider_pane_t1

0xd6ce,	// (0x0001c446) setting_slider_pane_t2

0xd6e7,	// (0x0001c45f) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001e2f2) setting_slider_pane_t

0xd6fe,	// (0x0001c476) slider_set_pane

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp2

0x2228,	// (0x00010fa0) setting_slider_graphic_pane_g1

0xd714,	// (0x0001c48c) setting_slider_graphic_pane_t1

0xd723,	// (0x0001c49b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001e2f9) setting_slider_graphic_pane_t

0xd732,	// (0x0001c4aa) slider_set_pane_cp

0x2106,	// (0x00010e7e) input_focus_pane_cp1

0x6115,	// (0x00014e8d) list_set_text_pane

0x20fc,	// (0x00010e74) setting_text_pane_g1

0x2106,	// (0x00010e7e) input_focus_pane_cp2

0x20fc,	// (0x00010e74) setting_code_pane_g1

0x2231,	// (0x00010fa9) setting_code_pane_t1

0xc366,	// (0x0001b0de) set_text_pane_t1_ParamLimits

0xc366,	// (0x0001b0de) set_text_pane_t1

0x30fb,	// (0x00011e73) set_opt_bg_pane_g1

0x3103,	// (0x00011e7b) set_opt_bg_pane_g2

0x60f5,	// (0x00014e6d) set_opt_bg_pane_g3

0x3113,	// (0x00011e8b) set_opt_bg_pane_g4

0x311b,	// (0x00011e93) set_opt_bg_pane_g5

0x3123,	// (0x00011e9b) set_opt_bg_pane_g6

0x60fd,	// (0x00014e75) set_opt_bg_pane_g7

0x6105,	// (0x00014e7d) set_opt_bg_pane_g8

0x610d,	// (0x00014e85) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0001e6eb) set_opt_bg_pane_g

0x60e8,	// (0x00014e60) slider_set_pane_g1

0xe003,	// (0x0001cd7b) slider_set_pane_g2

0x0006,

0xf964,	// (0x0001e6dc) slider_set_pane_g

0xdf9f,	// (0x0001cd17) volume_set_pane_g1

0xdfa7,	// (0x0001cd1f) volume_set_pane_g2

0xdfaf,	// (0x0001cd27) volume_set_pane_g3

0xdfb7,	// (0x0001cd2f) volume_set_pane_g4

0xdfbf,	// (0x0001cd37) volume_set_pane_g5

0xdfc7,	// (0x0001cd3f) volume_set_pane_g6

0xdfcf,	// (0x0001cd47) volume_set_pane_g7

0xdfd7,	// (0x0001cd4f) volume_set_pane_g8

0xdfdf,	// (0x0001cd57) volume_set_pane_g9

0xdfe7,	// (0x0001cd5f) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0001e6b4) volume_set_pane_g

0x2259,	// (0x00010fd1) indicator_pane_ParamLimits

0x2259,	// (0x00010fd1) indicator_pane

0x2265,	// (0x00010fdd) main_idle_pane_g2_ParamLimits

0x2265,	// (0x00010fdd) main_idle_pane_g2

0x228d,	// (0x00011005) main_pane_idle_g1_ParamLimits

0x228d,	// (0x00011005) main_pane_idle_g1

0x229a,	// (0x00011012) popup_clock_digital_analogue_window_ParamLimits

0x229a,	// (0x00011012) popup_clock_digital_analogue_window

0x22b1,	// (0x00011029) soft_indicator_pane_ParamLimits

0x22b1,	// (0x00011029) soft_indicator_pane

0x22bd,	// (0x00011035) wallpaper_pane_ParamLimits

0x22bd,	// (0x00011035) wallpaper_pane

0x20fc,	// (0x00010e74) wallpaper_pane_g1

0x22d1,	// (0x00011049) indicator_pane_g1_ParamLimits

0x22d1,	// (0x00011049) indicator_pane_g1

0x65d4,	// (0x0001534c) navi_navi_icon_text_pane_srt_g1

0x22ec,	// (0x00011064) soft_indicator_pane_t1

0x2306,	// (0x0001107e) aid_ps_area_pane

0x2317,	// (0x0001108f) aid_ps_clock_pane

0x2325,	// (0x0001109d) aid_ps_indicator_pane

0x2331,	// (0x000110a9) indicator_ps_pane_ParamLimits

0x2331,	// (0x000110a9) indicator_ps_pane

0x2340,	// (0x000110b8) power_save_pane_g1_ParamLimits

0x2340,	// (0x000110b8) power_save_pane_g1

0x234c,	// (0x000110c4) power_save_pane_g2_ParamLimits

0x234c,	// (0x000110c4) power_save_pane_g2

0xd2dc,	// (0x0001c054) aid_navinavi_width_pane

0x2306,	// (0x0001107e) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001e2fe) power_save_pane_g_ParamLimits

0xf586,	// (0x0001e2fe) power_save_pane_g

0x235a,	// (0x000110d2) power_save_pane_t1_ParamLimits

0x235a,	// (0x000110d2) power_save_pane_t1

0x2317,	// (0x0001108f) aid_ps_clock_pane_ParamLimits

0x2325,	// (0x0001109d) aid_ps_indicator_pane_ParamLimits

0x236c,	// (0x000110e4) power_save_pane_t4_ParamLimits

0x236c,	// (0x000110e4) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001e303) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001e303) power_save_pane_t

0x2396,	// (0x0001110e) power_save_t3_ParamLimits

0x2396,	// (0x0001110e) power_save_t3

0x2381,	// (0x000110f9) power_save_t2_ParamLimits

0x2381,	// (0x000110f9) power_save_t2

0x23ab,	// (0x00011123) indicator_ps_pane_g1

0x23b4,	// (0x0001112c) ai_gene_pane_ParamLimits

0x23b4,	// (0x0001112c) ai_gene_pane

0x23c0,	// (0x00011138) ai_links_pane_ParamLimits

0x23c0,	// (0x00011138) ai_links_pane

0x23cc,	// (0x00011144) indicator_pane_cp1_ParamLimits

0x23cc,	// (0x00011144) indicator_pane_cp1

0x23d8,	// (0x00011150) main_pane_idle_g1_cp_ParamLimits

0x23d8,	// (0x00011150) main_pane_idle_g1_cp

0x23e4,	// (0x0001115c) popup_ai_links_title_window

0x23ed,	// (0x00011165) soft_indicator_pane_cp1_ParamLimits

0x23ed,	// (0x00011165) soft_indicator_pane_cp1

0x5e98,	// (0x00014c10) ai_links_pane_g1

0x5ea1,	// (0x00014c19) grid_ai_links_pane

0x5e7b,	// (0x00014bf3) ai_gene_pane_1

0x5e86,	// (0x00014bfe) ai_gene_pane_2

0x5e8f,	// (0x00014c07) list_highlight_pane_cp4

0x5e5f,	// (0x00014bd7) cell_ai_link_pane_ParamLimits

0x5e5f,	// (0x00014bd7) cell_ai_link_pane

0x5e57,	// (0x00014bcf) cell_ai_link_pane_g1

0x2611,	// (0x00011389) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0001e68f) cell_ai_link_pane_g

0x2106,	// (0x00010e7e) grid_highlight_cp2

0x2106,	// (0x00010e7e) bg_popup_sub_pane_cp1

0x2407,	// (0x0001117f) popup_ai_links_title_window_t1

0x5da5,	// (0x00014b1d) ai_gene_pane_1_g1_ParamLimits

0x5da5,	// (0x00014b1d) ai_gene_pane_1_g1

0x5db1,	// (0x00014b29) ai_gene_pane_1_g2_ParamLimits

0x5db1,	// (0x00014b29) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0001e685) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0001e685) ai_gene_pane_1_g

0x5dbe,	// (0x00014b36) ai_gene_pane_1_t1_ParamLimits

0x5dbe,	// (0x00014b36) ai_gene_pane_1_t1

0x5df2,	// (0x00014b6a) grid_ai_soft_ind_pane

0x5d90,	// (0x00014b08) ai_gene_pane_2_t1_ParamLimits

0x5d90,	// (0x00014b08) ai_gene_pane_2_t1

0x2416,	// (0x0001118e) main_pane_empty_t1_ParamLimits

0x2416,	// (0x0001118e) main_pane_empty_t1

0x242e,	// (0x000111a6) main_pane_empty_t2_ParamLimits

0x242e,	// (0x000111a6) main_pane_empty_t2

0x2443,	// (0x000111bb) main_pane_empty_t3_ParamLimits

0x2443,	// (0x000111bb) main_pane_empty_t3

0x2455,	// (0x000111cd) main_pane_empty_t4_ParamLimits

0x2455,	// (0x000111cd) main_pane_empty_t4

0x2467,	// (0x000111df) main_pane_empty_t5_ParamLimits

0x2467,	// (0x000111df) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001e308) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001e308) main_pane_empty_t

0x31f4,	// (0x00011f6c) bg_popup_window_pane_ParamLimits

0x31f4,	// (0x00011f6c) bg_popup_window_pane

0x5af8,	// (0x00014870) find_popup_pane_cp2_ParamLimits

0x5af8,	// (0x00014870) find_popup_pane_cp2

0x5b04,	// (0x0001487c) heading_pane_ParamLimits

0x5b04,	// (0x0001487c) heading_pane

0x2106,	// (0x00010e7e) bg_popup_sub_pane

0x5a72,	// (0x000147ea) bg_popup_window_pane_g1_ParamLimits

0x5a72,	// (0x000147ea) bg_popup_window_pane_g1

0x5a7e,	// (0x000147f6) bg_popup_window_pane_g2_ParamLimits

0x5a7e,	// (0x000147f6) bg_popup_window_pane_g2

0x5a8a,	// (0x00014802) bg_popup_window_pane_g3_ParamLimits

0x5a8a,	// (0x00014802) bg_popup_window_pane_g3

0x5a96,	// (0x0001480e) bg_popup_window_pane_g4_ParamLimits

0x5a96,	// (0x0001480e) bg_popup_window_pane_g4

0x5aa2,	// (0x0001481a) bg_popup_window_pane_g5_ParamLimits

0x5aa2,	// (0x0001481a) bg_popup_window_pane_g5

0x5aae,	// (0x00014826) bg_popup_window_pane_g6_ParamLimits

0x5aae,	// (0x00014826) bg_popup_window_pane_g6

0x5aba,	// (0x00014832) bg_popup_window_pane_g7_ParamLimits

0x5aba,	// (0x00014832) bg_popup_window_pane_g7

0x5ac6,	// (0x0001483e) bg_popup_window_pane_g8_ParamLimits

0x5ac6,	// (0x0001483e) bg_popup_window_pane_g8

0x5ad2,	// (0x0001484a) bg_popup_window_pane_g9_ParamLimits

0x5ad2,	// (0x0001484a) bg_popup_window_pane_g9

0x5ade,	// (0x00014856) bg_popup_window_pane_g10_ParamLimits

0x5ade,	// (0x00014856) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0001e64d) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0001e64d) bg_popup_window_pane_g

0x5a07,	// (0x0001477f) bg_popup_heading_pane_ParamLimits

0x5a07,	// (0x0001477f) bg_popup_heading_pane

0xe08b,	// (0x0001ce03) tabs_4_passive_pane_cp_srt_ParamLimits

0xe08b,	// (0x0001ce03) tabs_4_passive_pane_cp_srt

0xe09d,	// (0x0001ce15) tabs_4_passive_pane_srt_ParamLimits

0x5a1b,	// (0x00014793) heading_pane_g2

0xe09d,	// (0x0001ce15) tabs_4_passive_pane_srt

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp3_srt

0x5a23,	// (0x0001479b) heading_pane_t1_ParamLimits

0x5a23,	// (0x0001479b) heading_pane_t1

0x5a3a,	// (0x000147b2) heading_pane_t2_ParamLimits

0x5a3a,	// (0x000147b2) heading_pane_t2

0x0001,

0xf8d0,	// (0x0001e648) heading_pane_t_ParamLimits

0xf8d0,	// (0x0001e648) heading_pane_t

0x5542,	// (0x000142ba) bg_popup_heading_pane_g1

0x55f1,	// (0x00014369) bg_popup_heading_pane_g2

0x55fb,	// (0x00014373) bg_popup_heading_pane_g3

0x5605,	// (0x0001437d) bg_popup_heading_pane_g4

0x560f,	// (0x00014387) bg_popup_heading_pane_g5

0x5619,	// (0x00014391) bg_popup_heading_pane_g6

0x5621,	// (0x00014399) bg_popup_heading_pane_g7

0x5629,	// (0x000143a1) bg_popup_heading_pane_g8

0x5633,	// (0x000143ab) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0001e604) bg_popup_heading_pane_g

0x4c42,	// (0x000139ba) bg_popup_sub_pane_g1

0x4c52,	// (0x000139ca) bg_popup_sub_pane_g2

0x4c4a,	// (0x000139c2) bg_popup_sub_pane_g3

0x4c62,	// (0x000139da) bg_popup_sub_pane_g4

0x4c5a,	// (0x000139d2) bg_popup_sub_pane_g5

0x4c6a,	// (0x000139e2) bg_popup_sub_pane_g6

0x4c72,	// (0x000139ea) bg_popup_sub_pane_g7

0x4c82,	// (0x000139fa) bg_popup_sub_pane_g8

0x4c7a,	// (0x000139f2) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0001e5de) bg_popup_sub_pane_g

0x247b,	// (0x000111f3) bg_popup_window_pane_cp5_ParamLimits

0x247b,	// (0x000111f3) bg_popup_window_pane_cp5

0x2497,	// (0x0001120f) popup_note_window_g1_ParamLimits

0x2497,	// (0x0001120f) popup_note_window_g1

0x24a3,	// (0x0001121b) popup_note_window_t1_ParamLimits

0x24a3,	// (0x0001121b) popup_note_window_t1

0x24b5,	// (0x0001122d) popup_note_window_t2_ParamLimits

0x24b5,	// (0x0001122d) popup_note_window_t2

0x24c7,	// (0x0001123f) popup_note_window_t3_ParamLimits

0x24c7,	// (0x0001123f) popup_note_window_t3

0x24d9,	// (0x00011251) popup_note_window_t4_ParamLimits

0x24d9,	// (0x00011251) popup_note_window_t4

0x2501,	// (0x00011279) popup_note_window_t5_ParamLimits

0x2501,	// (0x00011279) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001e313) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001e313) popup_note_window_t

0x2525,	// (0x0001129d) bg_popup_window_pane_cp6_ParamLimits

0x2525,	// (0x0001129d) bg_popup_window_pane_cp6

0x54b6,	// (0x0001422e) popup_note_image_window_g1_ParamLimits

0x54b6,	// (0x0001422e) popup_note_image_window_g1

0x54c2,	// (0x0001423a) popup_note_image_window_g2_ParamLimits

0x54c2,	// (0x0001423a) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0001e5d2) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0001e5d2) popup_note_image_window_g

0x54db,	// (0x00014253) popup_note_image_window_t1_ParamLimits

0x54db,	// (0x00014253) popup_note_image_window_t1

0x54f4,	// (0x0001426c) popup_note_image_window_t2_ParamLimits

0x54f4,	// (0x0001426c) popup_note_image_window_t2

0x550d,	// (0x00014285) popup_note_image_window_t3_ParamLimits

0x550d,	// (0x00014285) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0001e5d7) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0001e5d7) popup_note_image_window_t

0x5377,	// (0x000140ef) bg_popup_window_pane_cp7_ParamLimits

0x5377,	// (0x000140ef) bg_popup_window_pane_cp7

0x53a7,	// (0x0001411f) popup_note_wait_window_g1_ParamLimits

0x53a7,	// (0x0001411f) popup_note_wait_window_g1

0x53b3,	// (0x0001412b) popup_note_wait_window_g2_ParamLimits

0x53b3,	// (0x0001412b) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0001e5c0) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0001e5c0) popup_note_wait_window_g

0x53cb,	// (0x00014143) popup_note_wait_window_t1_ParamLimits

0x53cb,	// (0x00014143) popup_note_wait_window_t1

0x53f2,	// (0x0001416a) popup_note_wait_window_t2_ParamLimits

0x53f2,	// (0x0001416a) popup_note_wait_window_t2

0x540f,	// (0x00014187) popup_note_wait_window_t3_ParamLimits

0x540f,	// (0x00014187) popup_note_wait_window_t3

0x5422,	// (0x0001419a) popup_note_wait_window_t4_ParamLimits

0x5422,	// (0x0001419a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0001e5c7) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0001e5c7) popup_note_wait_window_t

0x5447,	// (0x000141bf) wait_bar_pane_ParamLimits

0x5447,	// (0x000141bf) wait_bar_pane

0x2106,	// (0x00010e7e) wait_anim_pane

0x2106,	// (0x00010e7e) wait_border_pane

0x20fc,	// (0x00010e74) wait_anim_pane_g1

0x20fc,	// (0x00010e74) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001e492) wait_anim_pane_g

0x531b,	// (0x00014093) wait_border_pane_g1

0x5326,	// (0x0001409e) wait_border_pane_g2

0x532f,	// (0x000140a7) wait_border_pane_g3

0x0002,

0xf841,	// (0x0001e5b9) wait_border_pane_g

0x518b,	// (0x00013f03) bg_popup_window_pane_cp16_ParamLimits

0x518b,	// (0x00013f03) bg_popup_window_pane_cp16

0x528b,	// (0x00014003) indicator_popup_pane_cp4_ParamLimits

0x528b,	// (0x00014003) indicator_popup_pane_cp4

0x529f,	// (0x00014017) popup_query_data_window_t1_ParamLimits

0x529f,	// (0x00014017) popup_query_data_window_t1

0x52b1,	// (0x00014029) popup_query_data_window_t2_ParamLimits

0x52b1,	// (0x00014029) popup_query_data_window_t2

0x52ca,	// (0x00014042) popup_query_data_window_t3_ParamLimits

0x52ca,	// (0x00014042) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0001e5b2) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0001e5b2) popup_query_data_window_t

0x52e4,	// (0x0001405c) query_popup_data_pane_ParamLimits

0x52e4,	// (0x0001405c) query_popup_data_pane

0x52f8,	// (0x00014070) query_popup_data_pane_cp1_ParamLimits

0x52f8,	// (0x00014070) query_popup_data_pane_cp1

0x518b,	// (0x00013f03) bg_popup_window_pane_cp10_ParamLimits

0x518b,	// (0x00013f03) bg_popup_window_pane_cp10

0x51bd,	// (0x00013f35) indicator_popup_pane_ParamLimits

0x51bd,	// (0x00013f35) indicator_popup_pane

0x51df,	// (0x00013f57) popup_query_code_window_t1_ParamLimits

0x51df,	// (0x00013f57) popup_query_code_window_t1

0x51f9,	// (0x00013f71) popup_query_code_window_t2_ParamLimits

0x51f9,	// (0x00013f71) popup_query_code_window_t2

0x5242,	// (0x00013fba) popup_query_code_window_t3_ParamLimits

0x5242,	// (0x00013fba) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0001e5ab) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0001e5ab) popup_query_code_window_t

0x5271,	// (0x00013fe9) query_popup_pane_ParamLimits

0x5271,	// (0x00013fe9) query_popup_pane

0x2525,	// (0x0001129d) bg_popup_window_pane_cp15_ParamLimits

0x2525,	// (0x0001129d) bg_popup_window_pane_cp15

0x2543,	// (0x000112bb) indicator_popup_pane_cp1_ParamLimits

0x2543,	// (0x000112bb) indicator_popup_pane_cp1

0x2556,	// (0x000112ce) indicator_popup_pane_cp2_ParamLimits

0x2556,	// (0x000112ce) indicator_popup_pane_cp2

0x2569,	// (0x000112e1) popup_query_data_code_window_g1_ParamLimits

0x2569,	// (0x000112e1) popup_query_data_code_window_g1

0x257c,	// (0x000112f4) popup_query_data_code_window_t1_ParamLimits

0x257c,	// (0x000112f4) popup_query_data_code_window_t1

0x258e,	// (0x00011306) popup_query_data_code_window_t2_ParamLimits

0x258e,	// (0x00011306) popup_query_data_code_window_t2

0x25a0,	// (0x00011318) popup_query_data_code_window_t3_ParamLimits

0x25a0,	// (0x00011318) popup_query_data_code_window_t3

0x25b6,	// (0x0001132e) popup_query_data_code_window_t4_ParamLimits

0x25b6,	// (0x0001132e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001e31e) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001e31e) popup_query_data_code_window_t

0x3c36,	// (0x000129ae) list_single_midp_graphic_pane_g3

0x25ce,	// (0x00011346) query_popup_data_pane_cp2_ParamLimits

0x25e1,	// (0x00011359) query_popup_pane_cp2_ParamLimits

0x25e1,	// (0x00011359) query_popup_pane_cp2

0x2106,	// (0x00010e7e) bg_popup_window_pane_cp11

0x5183,	// (0x00013efb) heading_pane_cp5

0x26c9,	// (0x00011441) listscroll_popup_info_pane

0x2106,	// (0x00010e7e) input_focus_pane_cp3

0x25f4,	// (0x0001136c) query_popup_pane_t1

0x2602,	// (0x0001137a) list_popup_info_pane_ParamLimits

0x2602,	// (0x0001137a) list_popup_info_pane

0x2611,	// (0x00011389) listscroll_popup_info_pane_g1

0x2619,	// (0x00011391) scroll_pane_cp7

0x2623,	// (0x0001139b) popup_info_list_pane_t1_ParamLimits

0x2623,	// (0x0001139b) popup_info_list_pane_t1

0x263d,	// (0x000113b5) popup_info_list_pane_t2_ParamLimits

0x263d,	// (0x000113b5) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001e327) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001e327) popup_info_list_pane_t

0x2106,	// (0x00010e7e) bg_popup_window_pane_cp12

0x65ee,	// (0x00015366) find_popup_pane

0x21e6,	// (0x00010f5e) bg_popup_window_pane_cp3

0x2657,	// (0x000113cf) heading_pane_cp3

0x2663,	// (0x000113db) listscroll_popup_graphic_pane

0x2106,	// (0x00010e7e) bg_popup_window_pane_cp4

0x26bf,	// (0x00011437) heading_pane_cp4

0x26c9,	// (0x00011441) listscroll_popup_colour_pane

0x26d1,	// (0x00011449) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x26d1,	// (0x00011449) cell_large_graphic_colour_none_popup_pane

0x26e5,	// (0x0001145d) grid_large_graphic_colour_popup_pane_ParamLimits

0x26e5,	// (0x0001145d) grid_large_graphic_colour_popup_pane

0x2709,	// (0x00011481) listscroll_popup_colour_pane_g1_ParamLimits

0x2709,	// (0x00011481) listscroll_popup_colour_pane_g1

0x2720,	// (0x00011498) listscroll_popup_colour_pane_g2_ParamLimits

0x2720,	// (0x00011498) listscroll_popup_colour_pane_g2

0x2737,	// (0x000114af) listscroll_popup_colour_pane_g3_ParamLimits

0x2737,	// (0x000114af) listscroll_popup_colour_pane_g3

0x2747,	// (0x000114bf) listscroll_popup_colour_pane_g4_ParamLimits

0x2747,	// (0x000114bf) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001e32c) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001e32c) listscroll_popup_colour_pane_g

0x2756,	// (0x000114ce) scroll_pane_cp6_ParamLimits

0x2756,	// (0x000114ce) scroll_pane_cp6

0x2768,	// (0x000114e0) cell_large_graphic_colour_popup_pane_ParamLimits

0x2768,	// (0x000114e0) cell_large_graphic_colour_popup_pane

0x2787,	// (0x000114ff) cell_large_graphic_colour_none_popup_pane_t1

0x2106,	// (0x00010e7e) grid_highlight_pane_cp5

0x2796,	// (0x0001150e) cell_large_graphic_colour_popup_pane_g1

0x279e,	// (0x00011516) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001e335) cell_large_graphic_colour_popup_pane_g

0x27a6,	// (0x0001151e) cell_large_graphic_colour_popup_pane_g2_copy1

0x27af,	// (0x00011527) grid_highlight_pane_cp4

0x27b7,	// (0x0001152f) bg_popup_window_pane_cp8_ParamLimits

0x27b7,	// (0x0001152f) bg_popup_window_pane_cp8

0x27d2,	// (0x0001154a) popup_snote_single_text_window_g1_ParamLimits

0x27d2,	// (0x0001154a) popup_snote_single_text_window_g1

0x27e4,	// (0x0001155c) popup_snote_single_text_window_t1_ParamLimits

0x27e4,	// (0x0001155c) popup_snote_single_text_window_t1

0x27f7,	// (0x0001156f) popup_snote_single_text_window_t2_ParamLimits

0x27f7,	// (0x0001156f) popup_snote_single_text_window_t2

0x280a,	// (0x00011582) popup_snote_single_text_window_t3_ParamLimits

0x280a,	// (0x00011582) popup_snote_single_text_window_t3

0x2843,	// (0x000115bb) popup_snote_single_text_window_t4_ParamLimits

0x2843,	// (0x000115bb) popup_snote_single_text_window_t4

0x2877,	// (0x000115ef) popup_snote_single_text_window_t5_ParamLimits

0x2877,	// (0x000115ef) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001e33a) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001e33a) popup_snote_single_text_window_t

0x28a6,	// (0x0001161e) bg_popup_window_pane_cp9_ParamLimits

0x28a6,	// (0x0001161e) bg_popup_window_pane_cp9

0x27d2,	// (0x0001154a) popup_snote_single_graphic_window_g1_ParamLimits

0x27d2,	// (0x0001154a) popup_snote_single_graphic_window_g1

0x28b4,	// (0x0001162c) popup_snote_single_graphic_window_g2_ParamLimits

0x28b4,	// (0x0001162c) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001e345) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001e345) popup_snote_single_graphic_window_g

0x28c0,	// (0x00011638) popup_snote_single_graphic_window_t1_ParamLimits

0x28c0,	// (0x00011638) popup_snote_single_graphic_window_t1

0x28d3,	// (0x0001164b) popup_snote_single_graphic_window_t2_ParamLimits

0x28d3,	// (0x0001164b) popup_snote_single_graphic_window_t2

0x28e6,	// (0x0001165e) popup_snote_single_graphic_window_t3_ParamLimits

0x28e6,	// (0x0001165e) popup_snote_single_graphic_window_t3

0x291f,	// (0x00011697) popup_snote_single_graphic_window_t4_ParamLimits

0x291f,	// (0x00011697) popup_snote_single_graphic_window_t4

0x2953,	// (0x000116cb) popup_snote_single_graphic_window_t5_ParamLimits

0x2953,	// (0x000116cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001e34a) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001e34a) popup_snote_single_graphic_window_t

0x652e,	// (0x000152a6) grid_graphic_popup_pane_ParamLimits

0x652e,	// (0x000152a6) grid_graphic_popup_pane

0x655a,	// (0x000152d2) listscroll_popup_graphic_pane_g1_ParamLimits

0x655a,	// (0x000152d2) listscroll_popup_graphic_pane_g1

0x656e,	// (0x000152e6) listscroll_popup_graphic_pane_g2_ParamLimits

0x656e,	// (0x000152e6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0001e728) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0001e728) listscroll_popup_graphic_pane_g

0x6582,	// (0x000152fa) scroll_pane_cp5

0x64d9,	// (0x00015251) cell_graphic_popup_pane_ParamLimits

0x64d9,	// (0x00015251) cell_graphic_popup_pane

0x64ba,	// (0x00015232) cell_graphic_popup_pane_g1

0x64c2,	// (0x0001523a) cell_graphic_popup_pane_g2

0x27a6,	// (0x0001151e) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0001e721) cell_graphic_popup_pane_g

0x64cb,	// (0x00015243) cell_graphic_popup_pane_t2

0x27af,	// (0x00011527) grid_highlight_pane_cp3

0x2994,	// (0x0001170c) list_gen_pane_ParamLimits

0x2994,	// (0x0001170c) list_gen_pane

0x29c6,	// (0x0001173e) scroll_pane

0x641c,	// (0x00015194) bg_list_pane_g1_ParamLimits

0x641c,	// (0x00015194) bg_list_pane_g1

0x6437,	// (0x000151af) bg_list_pane_g2_ParamLimits

0x6437,	// (0x000151af) bg_list_pane_g2

0x644a,	// (0x000151c2) bg_list_pane_g3_ParamLimits

0x644a,	// (0x000151c2) bg_list_pane_g3

0x645c,	// (0x000151d4) bg_list_pane_g4_ParamLimits

0x645c,	// (0x000151d4) bg_list_pane_g4

0x646e,	// (0x000151e6) bg_list_pane_g5_ParamLimits

0x646e,	// (0x000151e6) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0001e716) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0001e716) bg_list_pane_g

0xcc01,	// (0x0001b979) list_double2_graphic_large_graphic_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double2_graphic_large_graphic_pane

0xcc01,	// (0x0001b979) list_double2_graphic_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double2_graphic_pane

0xcc01,	// (0x0001b979) list_double2_large_graphic_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double2_large_graphic_pane

0xcc01,	// (0x0001b979) list_double2_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double2_pane

0xcc01,	// (0x0001b979) list_double_graphic_heading_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_graphic_heading_pane

0xcc01,	// (0x0001b979) list_double_graphic_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_graphic_pane

0xcc01,	// (0x0001b979) list_double_heading_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_heading_pane

0xcc01,	// (0x0001b979) list_double_large_graphic_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_large_graphic_pane

0xcc01,	// (0x0001b979) list_double_number_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_number_pane

0xcc01,	// (0x0001b979) list_double_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_pane

0xcc01,	// (0x0001b979) list_double_time_pane_ParamLimits

0xcc01,	// (0x0001b979) list_double_time_pane

0xcc01,	// (0x0001b979) list_setting_number_pane_ParamLimits

0xcc01,	// (0x0001b979) list_setting_number_pane

0xcc01,	// (0x0001b979) list_setting_pane_ParamLimits

0xcc01,	// (0x0001b979) list_setting_pane

0xcc5d,	// (0x0001b9d5) list_single_2graphic_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_2graphic_pane

0xcc5d,	// (0x0001b9d5) list_single_graphic_heading_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_graphic_heading_pane

0xcc5d,	// (0x0001b9d5) list_single_graphic_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_graphic_pane

0xcc5d,	// (0x0001b9d5) list_single_heading_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_heading_pane

0xcccb,	// (0x0001ba43) list_single_large_graphic_pane_ParamLimits

0xcccb,	// (0x0001ba43) list_single_large_graphic_pane

0xcc5d,	// (0x0001b9d5) list_single_number_heading_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_number_heading_pane

0xcc5d,	// (0x0001b9d5) list_single_number_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_number_pane

0xcc5d,	// (0x0001b9d5) list_single_pane_ParamLimits

0xcc5d,	// (0x0001b9d5) list_single_pane

0x2106,	// (0x00010e7e) list_highlight_pane_cp1

0xc38c,	// (0x0001b104) list_single_pane_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_pane_g1

0xc398,	// (0x0001b110) list_single_pane_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_pane_g

0xcbeb,	// (0x0001b963) list_single_pane_t1_ParamLimits

0xcbeb,	// (0x0001b963) list_single_pane_t1

0xc38c,	// (0x0001b104) list_single_number_pane_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_number_pane_g1

0xc398,	// (0x0001b110) list_single_number_pane_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_number_pane_g

0xcb1f,	// (0x0001b897) list_single_number_pane_t1_ParamLimits

0xcb1f,	// (0x0001b897) list_single_number_pane_t1

0xcbab,	// (0x0001b923) list_single_number_pane_t2_ParamLimits

0xcbab,	// (0x0001b923) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0001e6d7) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0001e6d7) list_single_number_pane_t

0xc380,	// (0x0001b0f8) list_single_graphic_pane_g1_ParamLimits

0xc380,	// (0x0001b0f8) list_single_graphic_pane_g1

0xc38c,	// (0x0001b104) list_single_graphic_pane_g2_ParamLimits

0xc38c,	// (0x0001b104) list_single_graphic_pane_g2

0xc398,	// (0x0001b110) list_single_graphic_pane_g3_ParamLimits

0xc398,	// (0x0001b110) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001e355) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001e355) list_single_graphic_pane_g

0xc3a4,	// (0x0001b11c) list_single_graphic_pane_t1_ParamLimits

0xc3a4,	// (0x0001b11c) list_single_graphic_pane_t1

0xc38c,	// (0x0001b104) list_single_heading_pane_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_heading_pane_g1

0xc398,	// (0x0001b110) list_single_heading_pane_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_heading_pane_g

0xc3ba,	// (0x0001b132) list_single_heading_pane_t1_ParamLimits

0xc3ba,	// (0x0001b132) list_single_heading_pane_t1

0xc3d0,	// (0x0001b148) list_single_heading_pane_t2_ParamLimits

0xc3d0,	// (0x0001b148) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001e361) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001e361) list_single_heading_pane_t

0xc38c,	// (0x0001b104) list_single_number_heading_pane_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_number_heading_pane_g1

0xc398,	// (0x0001b110) list_single_number_heading_pane_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_number_heading_pane_g

0xc3ba,	// (0x0001b132) list_single_number_heading_pane_t1_ParamLimits

0xc3ba,	// (0x0001b132) list_single_number_heading_pane_t1

0xc3e2,	// (0x0001b15a) list_single_number_heading_pane_t2_ParamLimits

0xc3e2,	// (0x0001b15a) list_single_number_heading_pane_t2

0xc3f4,	// (0x0001b16c) list_single_number_heading_pane_t3_ParamLimits

0xc3f4,	// (0x0001b16c) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001e366) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001e366) list_single_number_heading_pane_t

0xc406,	// (0x0001b17e) list_single_graphic_heading_pane_g1_ParamLimits

0xc406,	// (0x0001b17e) list_single_graphic_heading_pane_g1

0xc412,	// (0x0001b18a) list_single_graphic_heading_pane_g4_ParamLimits

0xc412,	// (0x0001b18a) list_single_graphic_heading_pane_g4

0xc398,	// (0x0001b110) list_single_graphic_heading_pane_g5_ParamLimits

0xc398,	// (0x0001b110) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001e36d) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001e36d) list_single_graphic_heading_pane_g

0xc3ba,	// (0x0001b132) list_single_graphic_heading_pane_t1_ParamLimits

0xc3ba,	// (0x0001b132) list_single_graphic_heading_pane_t1

0xc423,	// (0x0001b19b) list_single_graphic_heading_pane_t2_ParamLimits

0xc423,	// (0x0001b19b) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001e374) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001e374) list_single_graphic_heading_pane_t

0xc435,	// (0x0001b1ad) list_single_large_graphic_pane_g1_ParamLimits

0xc435,	// (0x0001b1ad) list_single_large_graphic_pane_g1

0xc441,	// (0x0001b1b9) list_single_large_graphic_pane_g2_ParamLimits

0xc441,	// (0x0001b1b9) list_single_large_graphic_pane_g2

0xc44d,	// (0x0001b1c5) list_single_large_graphic_pane_g3_ParamLimits

0xc44d,	// (0x0001b1c5) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001e379) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001e379) list_single_large_graphic_pane_g

0x5326,	// (0x0001409e) wait_border_pane_g2_copy1

0xc459,	// (0x0001b1d1) list_single_large_graphic_pane_g4_cp2

0xc461,	// (0x0001b1d9) list_single_large_graphic_pane_t1_ParamLimits

0xc461,	// (0x0001b1d9) list_single_large_graphic_pane_t1

0xc477,	// (0x0001b1ef) list_double_pane_g1_ParamLimits

0xc477,	// (0x0001b1ef) list_double_pane_g1

0xc483,	// (0x0001b1fb) list_double_pane_g2_ParamLimits

0xc483,	// (0x0001b1fb) list_double_pane_g2

0x0001,

0xf608,	// (0x0001e380) list_double_pane_g_ParamLimits

0xf608,	// (0x0001e380) list_double_pane_g

0xc48f,	// (0x0001b207) list_double_pane_t1_ParamLimits

0xc48f,	// (0x0001b207) list_double_pane_t1

0xc4a5,	// (0x0001b21d) list_double_pane_t2_ParamLimits

0xc4a5,	// (0x0001b21d) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001e385) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001e385) list_double_pane_t

0xc4b7,	// (0x0001b22f) list_double2_pane_g1_ParamLimits

0xc4b7,	// (0x0001b22f) list_double2_pane_g1

0xc483,	// (0x0001b1fb) list_double2_pane_g2_ParamLimits

0xc483,	// (0x0001b1fb) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001e38a) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001e38a) list_double2_pane_g

0xc48f,	// (0x0001b207) list_double2_pane_t1_ParamLimits

0xc48f,	// (0x0001b207) list_double2_pane_t1

0xc4c8,	// (0x0001b240) list_double2_pane_t2_ParamLimits

0xc4c8,	// (0x0001b240) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001e38f) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001e38f) list_double2_pane_t

0xc477,	// (0x0001b1ef) list_double_number_pane_g1_ParamLimits

0xc477,	// (0x0001b1ef) list_double_number_pane_g1

0xc483,	// (0x0001b1fb) list_double_number_pane_g2_ParamLimits

0xc483,	// (0x0001b1fb) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001e380) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001e380) list_double_number_pane_g

0xc4da,	// (0x0001b252) list_double_number_pane_t1_ParamLimits

0xc4da,	// (0x0001b252) list_double_number_pane_t1

0xc4ec,	// (0x0001b264) list_double_number_pane_t2_ParamLimits

0xc4ec,	// (0x0001b264) list_double_number_pane_t2

0xc502,	// (0x0001b27a) list_double_number_pane_t3_ParamLimits

0xc502,	// (0x0001b27a) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001e394) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001e394) list_double_number_pane_t

0xc514,	// (0x0001b28c) list_double_graphic_pane_g1_ParamLimits

0xc514,	// (0x0001b28c) list_double_graphic_pane_g1

0xc520,	// (0x0001b298) list_double_graphic_pane_g2_ParamLimits

0xc520,	// (0x0001b298) list_double_graphic_pane_g2

0xc52f,	// (0x0001b2a7) list_double_graphic_pane_g3_ParamLimits

0xc52f,	// (0x0001b2a7) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001e39b) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001e39b) list_double_graphic_pane_g

0xc547,	// (0x0001b2bf) list_double_graphic_pane_t1_ParamLimits

0xc547,	// (0x0001b2bf) list_double_graphic_pane_t1

0xc55d,	// (0x0001b2d5) list_double_graphic_pane_t2_ParamLimits

0xc55d,	// (0x0001b2d5) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e3a4) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e3a4) list_double_graphic_pane_t

0xc514,	// (0x0001b28c) list_double2_graphic_pane_g1_ParamLimits

0xc514,	// (0x0001b28c) list_double2_graphic_pane_g1

0xc56f,	// (0x0001b2e7) list_double2_graphic_pane_g2_ParamLimits

0xc56f,	// (0x0001b2e7) list_double2_graphic_pane_g2

0xc57b,	// (0x0001b2f3) list_double2_graphic_pane_g3_ParamLimits

0xc57b,	// (0x0001b2f3) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e3a9) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e3a9) list_double2_graphic_pane_g

0xc4ec,	// (0x0001b264) list_double2_graphic_pane_t1_ParamLimits

0xc4ec,	// (0x0001b264) list_double2_graphic_pane_t1

0xc587,	// (0x0001b2ff) list_double2_graphic_pane_t2_ParamLimits

0xc587,	// (0x0001b2ff) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e3b0) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e3b0) list_double2_graphic_pane_t

0xc599,	// (0x0001b311) list_double_large_graphic_pane_g1_ParamLimits

0xc599,	// (0x0001b311) list_double_large_graphic_pane_g1

0xc4b7,	// (0x0001b22f) list_double_large_graphic_pane_g2_ParamLimits

0xc4b7,	// (0x0001b22f) list_double_large_graphic_pane_g2

0xc483,	// (0x0001b1fb) list_double_large_graphic_pane_g3_ParamLimits

0xc483,	// (0x0001b1fb) list_double_large_graphic_pane_g3

0xc5c4,	// (0x0001b33c) list_double_large_graphic_pane_g4_ParamLimits

0xc5c4,	// (0x0001b33c) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001e3b5) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001e3b5) list_double_large_graphic_pane_g

0xc5ec,	// (0x0001b364) list_double_large_graphic_pane_t1_ParamLimits

0xc5ec,	// (0x0001b364) list_double_large_graphic_pane_t1

0xc605,	// (0x0001b37d) list_double_large_graphic_pane_t2_ParamLimits

0xc605,	// (0x0001b37d) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001e3c0) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001e3c0) list_double_large_graphic_pane_t

0xc617,	// (0x0001b38f) list_double2_large_graphic_pane_g1_ParamLimits

0xc617,	// (0x0001b38f) list_double2_large_graphic_pane_g1

0xc4b7,	// (0x0001b22f) list_double2_large_graphic_pane_g2_ParamLimits

0xc4b7,	// (0x0001b22f) list_double2_large_graphic_pane_g2

0xc483,	// (0x0001b1fb) list_double2_large_graphic_pane_g3_ParamLimits

0xc483,	// (0x0001b1fb) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001e3c5) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001e3c5) list_double2_large_graphic_pane_g

0xc623,	// (0x0001b39b) list_double2_large_graphic_pane_t1_ParamLimits

0xc623,	// (0x0001b39b) list_double2_large_graphic_pane_t1

0xc639,	// (0x0001b3b1) list_double2_large_graphic_pane_t2_ParamLimits

0xc639,	// (0x0001b3b1) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001e3cc) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001e3cc) list_double2_large_graphic_pane_t

0xc64b,	// (0x0001b3c3) list_double_heading_pane_g1_ParamLimits

0xc64b,	// (0x0001b3c3) list_double_heading_pane_g1

0xc65c,	// (0x0001b3d4) list_double_heading_pane_g2_ParamLimits

0xc65c,	// (0x0001b3d4) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001e3d1) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001e3d1) list_double_heading_pane_g

0xc668,	// (0x0001b3e0) list_double_heading_pane_t1_ParamLimits

0xc668,	// (0x0001b3e0) list_double_heading_pane_t1

0xc4c8,	// (0x0001b240) list_double_heading_pane_t2_ParamLimits

0xc4c8,	// (0x0001b240) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001e3d6) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001e3d6) list_double_heading_pane_t

0xc514,	// (0x0001b28c) list_double_graphic_heading_pane_g1_ParamLimits

0xc514,	// (0x0001b28c) list_double_graphic_heading_pane_g1

0xc64b,	// (0x0001b3c3) list_double_graphic_heading_pane_g2_ParamLimits

0xc64b,	// (0x0001b3c3) list_double_graphic_heading_pane_g2

0xc65c,	// (0x0001b3d4) list_double_graphic_heading_pane_g3_ParamLimits

0xc65c,	// (0x0001b3d4) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001e3db) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001e3db) list_double_graphic_heading_pane_g

0xc67e,	// (0x0001b3f6) list_double_graphic_heading_pane_t1_ParamLimits

0xc67e,	// (0x0001b3f6) list_double_graphic_heading_pane_t1

0xc587,	// (0x0001b2ff) list_double_graphic_heading_pane_t2_ParamLimits

0xc587,	// (0x0001b2ff) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001e3e2) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001e3e2) list_double_graphic_heading_pane_t

0xc4b7,	// (0x0001b22f) list_double_time_pane_g1_ParamLimits

0xc4b7,	// (0x0001b22f) list_double_time_pane_g1

0xc483,	// (0x0001b1fb) list_double_time_pane_g2_ParamLimits

0xc483,	// (0x0001b1fb) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0001e38a) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0001e38a) list_double_time_pane_g

0xc623,	// (0x0001b39b) list_double_time_pane_t1_ParamLimits

0xc623,	// (0x0001b39b) list_double_time_pane_t1

0xc694,	// (0x0001b40c) list_double_time_pane_t2_ParamLimits

0xc694,	// (0x0001b40c) list_double_time_pane_t2

0xc6a6,	// (0x0001b41e) list_double_time_pane_t3_ParamLimits

0xc6a6,	// (0x0001b41e) list_double_time_pane_t3

0xc6b8,	// (0x0001b430) list_double_time_pane_t4_ParamLimits

0xc6b8,	// (0x0001b430) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0001e3e7) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0001e3e7) list_double_time_pane_t

0xc6ca,	// (0x0001b442) list_setting_pane_g1_ParamLimits

0xc6ca,	// (0x0001b442) list_setting_pane_g1

0xc6d6,	// (0x0001b44e) list_setting_pane_g2_ParamLimits

0xc6d6,	// (0x0001b44e) list_setting_pane_g2

0x0001,

0xf678,	// (0x0001e3f0) list_setting_pane_g_ParamLimits

0xf678,	// (0x0001e3f0) list_setting_pane_g

0xc6e2,	// (0x0001b45a) list_setting_pane_t1_ParamLimits

0xc6e2,	// (0x0001b45a) list_setting_pane_t1

0xc6f9,	// (0x0001b471) list_setting_pane_t2_ParamLimits

0xc6f9,	// (0x0001b471) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0001e3f5) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0001e3f5) list_setting_pane_t

0xc736,	// (0x0001b4ae) set_value_pane_cp_ParamLimits

0xc736,	// (0x0001b4ae) set_value_pane_cp

0xc742,	// (0x0001b4ba) list_setting_number_pane_g1_ParamLimits

0xc742,	// (0x0001b4ba) list_setting_number_pane_g1

0xc74e,	// (0x0001b4c6) list_setting_number_pane_g2_ParamLimits

0xc74e,	// (0x0001b4c6) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0001e3fc) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0001e3fc) list_setting_number_pane_g

0xc75a,	// (0x0001b4d2) list_setting_number_pane_t1_ParamLimits

0xc75a,	// (0x0001b4d2) list_setting_number_pane_t1

0xc76e,	// (0x0001b4e6) list_setting_number_pane_t2_ParamLimits

0xc76e,	// (0x0001b4e6) list_setting_number_pane_t2

0xc785,	// (0x0001b4fd) list_setting_number_pane_t3_ParamLimits

0xc785,	// (0x0001b4fd) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001e401) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001e401) list_setting_number_pane_t

0xc736,	// (0x0001b4ae) set_value_pane_ParamLimits

0xc736,	// (0x0001b4ae) set_value_pane

0x2e94,	// (0x00011c0c) bg_set_opt_pane_ParamLimits

0x2e94,	// (0x00011c0c) bg_set_opt_pane

0xc7c8,	// (0x0001b540) set_value_pane_t1

0x2ec3,	// (0x00011c3b) slider_set_pane_cp3

0x2ecc,	// (0x00011c44) volume_small_pane_cp

0x2ed5,	// (0x00011c4d) list_form_gen_pane

0x2ede,	// (0x00011c56) scroll_pane_cp8

0xc7de,	// (0x0001b556) form_field_data_pane_ParamLimits

0xc7de,	// (0x0001b556) form_field_data_pane

0xc7fe,	// (0x0001b576) form_field_data_wide_pane_ParamLimits

0xc7fe,	// (0x0001b576) form_field_data_wide_pane

0xc81f,	// (0x0001b597) form_field_popup_pane_ParamLimits

0xc81f,	// (0x0001b597) form_field_popup_pane

0xc83d,	// (0x0001b5b5) form_field_popup_wide_pane_ParamLimits

0xc83d,	// (0x0001b5b5) form_field_popup_wide_pane

0xc858,	// (0x0001b5d0) form_field_slider_pane_ParamLimits

0xc858,	// (0x0001b5d0) form_field_slider_pane

0xc86b,	// (0x0001b5e3) form_field_slider_wide_pane_ParamLimits

0xc86b,	// (0x0001b5e3) form_field_slider_wide_pane

0x2f8f,	// (0x00011d07) data_form_pane

0xc888,	// (0x0001b600) form_field_data_pane_t1

0x2fbf,	// (0x00011d37) input_focus_pane

0x2fcd,	// (0x00011d45) data_form_wide_pane

0xc8ae,	// (0x0001b626) form_field_data_wide_pane_t1

0x27c4,	// (0x0001153c) input_focus_pane_cp6

0xc8d0,	// (0x0001b648) form_field_popup_pane_t1

0x2fbf,	// (0x00011d37) input_focus_pane_cp7

0x3041,	// (0x00011db9) list_form_pane

0xc8f2,	// (0x0001b66a) form_field_popup_wide_pane_t1

0x2fbf,	// (0x00011d37) input_focus_pane_cp8

0x306a,	// (0x00011de2) list_form_wide_pane

0xc90f,	// (0x0001b687) form_field_slider_pane_t1_ParamLimits

0xc90f,	// (0x0001b687) form_field_slider_pane_t1

0xc923,	// (0x0001b69b) form_field_slider_pane_t2_ParamLimits

0xc923,	// (0x0001b69b) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001e411) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001e411) form_field_slider_pane_t

0x247b,	// (0x000111f3) input_focus_pane_cp9_ParamLimits

0x247b,	// (0x000111f3) input_focus_pane_cp9

0xc935,	// (0x0001b6ad) slider_cont_pane_ParamLimits

0xc935,	// (0x0001b6ad) slider_cont_pane

0x30bb,	// (0x00011e33) form_field_slider_wide_pane_t1_ParamLimits

0x30bb,	// (0x00011e33) form_field_slider_wide_pane_t1

0xc949,	// (0x0001b6c1) form_field_slider_wide_pane_t2_ParamLimits

0xc949,	// (0x0001b6c1) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001e416) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001e416) form_field_slider_wide_pane_t

0x247b,	// (0x000111f3) input_focus_pane_cp10_ParamLimits

0x247b,	// (0x000111f3) input_focus_pane_cp10

0xc95b,	// (0x0001b6d3) slider_cont_pane_cp1_ParamLimits

0xc95b,	// (0x0001b6d3) slider_cont_pane_cp1

0xc96f,	// (0x0001b6e7) slider_form_pane_cp

0x30fb,	// (0x00011e73) input_focus_pane_g1

0x3103,	// (0x00011e7b) input_focus_pane_g2

0x310b,	// (0x00011e83) input_focus_pane_g3

0x3113,	// (0x00011e8b) input_focus_pane_g4

0x311b,	// (0x00011e93) input_focus_pane_g5

0x3123,	// (0x00011e9b) input_focus_pane_g6

0x312b,	// (0x00011ea3) input_focus_pane_g7

0x3133,	// (0x00011eab) input_focus_pane_g8

0x313b,	// (0x00011eb3) input_focus_pane_g9

0x20fc,	// (0x00010e74) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001e41b) input_focus_pane_g

0x532f,	// (0x000140a7) wait_border_pane_g3_copy1

0xc977,	// (0x0001b6ef) data_form_pane_t1

0x20fc,	// (0x00010e74) wait_anim_pane_g1_copy1

0xcbbd,	// (0x0001b935) data_form_wide_pane_t1

0xc992,	// (0x0001b70a) list_form_graphic_pane_cp_ParamLimits

0xc992,	// (0x0001b70a) list_form_graphic_pane_cp

0x6282,	// (0x00014ffa) slider_form_pane_g1

0x628b,	// (0x00015003) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0001e707) slider_form_pane_g

0xc9a9,	// (0x0001b721) list_form_graphic_pane_ParamLimits

0xc9a9,	// (0x0001b721) list_form_graphic_pane

0xc9c3,	// (0x0001b73b) list_form_graphic_pane_g1

0xc9cb,	// (0x0001b743) list_form_graphic_pane_t1_ParamLimits

0xc9cb,	// (0x0001b743) list_form_graphic_pane_t1

0x21e6,	// (0x00010f5e) list_highlight_pane_cp5_ParamLimits

0x21e6,	// (0x00010f5e) list_highlight_pane_cp5

0xc9e0,	// (0x0001b758) find_pane_g1

0x31b5,	// (0x00011f2d) input_find_pane

0xc9e9,	// (0x0001b761) input_find_pane_g1_ParamLimits

0xc9e9,	// (0x0001b761) input_find_pane_g1

0xc9f5,	// (0x0001b76d) input_find_pane_t1_ParamLimits

0xc9f5,	// (0x0001b76d) input_find_pane_t1

0xca0a,	// (0x0001b782) input_find_pane_t2_ParamLimits

0xca0a,	// (0x0001b782) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001e430) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001e430) input_find_pane_t

0x31f4,	// (0x00011f6c) input_focus_pane_cp5_ParamLimits

0x31f4,	// (0x00011f6c) input_focus_pane_cp5

0x320e,	// (0x00011f86) bg_popup_window_pane_cp2_ParamLimits

0x320e,	// (0x00011f86) bg_popup_window_pane_cp2

0x321b,	// (0x00011f93) listscroll_menu_pane_ParamLimits

0x321b,	// (0x00011f93) listscroll_menu_pane

0x3227,	// (0x00011f9f) popup_submenu_window_ParamLimits

0x3227,	// (0x00011f9f) popup_submenu_window

0x324b,	// (0x00011fc3) find_popup_pane_g1

0x3253,	// (0x00011fcb) input_popup_find_pane_cp

0x31f4,	// (0x00011f6c) input_focus_pane_cp4_ParamLimits

0x31f4,	// (0x00011f6c) input_focus_pane_cp4

0x326b,	// (0x00011fe3) input_popup_find_pane_t1_ParamLimits

0x326b,	// (0x00011fe3) input_popup_find_pane_t1

0x2106,	// (0x00010e7e) bg_popup_sub_pane_cp

0x3299,	// (0x00012011) listscroll_popup_sub_pane

0x32a1,	// (0x00012019) list_submenu_pane_ParamLimits

0x32a1,	// (0x00012019) list_submenu_pane

0x32b2,	// (0x0001202a) scroll_pane_cp4

0x32ba,	// (0x00012032) list_single_popup_submenu_pane_ParamLimits

0x32ba,	// (0x00012032) list_single_popup_submenu_pane

0x32cd,	// (0x00012045) list_single_popup_submenu_pane_g1

0x32d5,	// (0x0001204d) list_single_popup_submenu_pane_t1_ParamLimits

0x32d5,	// (0x0001204d) list_single_popup_submenu_pane_t1

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp1_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp1

0x32ea,	// (0x00012062) tabs_2_active_pane_g1

0x32f2,	// (0x0001206a) tabs_2_active_pane_t1

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp1_ParamLimits

0x21e6,	// (0x00010f5e) bg_passive_tab_pane_cp1

0x32ea,	// (0x00012062) tabs_2_passive_pane_g1

0x32f2,	// (0x0001206a) tabs_2_passive_pane_t1

0x3304,	// (0x0001207c) bg_active_tab_pane_cp4

0x3312,	// (0x0001208a) tabs_2_long_active_pane_t1

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp4

0xdd5c,	// (0x0001cad4) list_single_midp_graphic_pane_g4_ParamLimits

0x3304,	// (0x0001207c) bg_active_tab_pane_cp5

0x3331,	// (0x000120a9) tabs_3_long_active_pane_t1

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp5

0xdd5c,	// (0x0001cad4) list_single_midp_graphic_pane_g4

0x21e6,	// (0x00010f5e) bg_popup_window_pane_cp13_ParamLimits

0x21e6,	// (0x00010f5e) bg_popup_window_pane_cp13

0x334c,	// (0x000120c4) listscroll_popup_fast_pane_ParamLimits

0x334c,	// (0x000120c4) listscroll_popup_fast_pane

0x335b,	// (0x000120d3) grid_popup_fast_pane_ParamLimits

0x335b,	// (0x000120d3) grid_popup_fast_pane

0x336d,	// (0x000120e5) scroll_pane_cp9_ParamLimits

0x336d,	// (0x000120e5) scroll_pane_cp9

0x8056,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8056,	// (0x00016dce) list_single_graphic_hl_pane_t1_cp2

0x3391,	// (0x00012109) input_focus_pane_cp20_ParamLimits

0x3391,	// (0x00012109) input_focus_pane_cp20

0x339f,	// (0x00012117) query_popup_data_pane_t1_ParamLimits

0x339f,	// (0x00012117) query_popup_data_pane_t1

0x33b2,	// (0x0001212a) query_popup_data_pane_t2_ParamLimits

0x33b2,	// (0x0001212a) query_popup_data_pane_t2

0x33f8,	// (0x00012170) query_popup_data_pane_t3_ParamLimits

0x33f8,	// (0x00012170) query_popup_data_pane_t3

0x3439,	// (0x000121b1) query_popup_data_pane_t4_ParamLimits

0x3439,	// (0x000121b1) query_popup_data_pane_t4

0x3475,	// (0x000121ed) query_popup_data_pane_t5_ParamLimits

0x3475,	// (0x000121ed) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001e435) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001e435) query_popup_data_pane_t

0x30fb,	// (0x00011e73) bg_set_opt_pane_g1

0x3103,	// (0x00011e7b) bg_set_opt_pane_g2

0x310b,	// (0x00011e83) bg_set_opt_pane_g3

0x3113,	// (0x00011e8b) bg_set_opt_pane_g4

0x311b,	// (0x00011e93) bg_set_opt_pane_g5

0x3123,	// (0x00011e9b) bg_set_opt_pane_g6

0x312b,	// (0x00011ea3) bg_set_opt_pane_g7

0x3133,	// (0x00011eab) bg_set_opt_pane_g8

0x313b,	// (0x00011eb3) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001e440) bg_set_opt_pane_g

0xd9d9,	// (0x0001c751) control_top_pane_stacon_ParamLimits

0xd9d9,	// (0x0001c751) control_top_pane_stacon

0xda2c,	// (0x0001c7a4) signal_pane_stacon_ParamLimits

0xda2c,	// (0x0001c7a4) signal_pane_stacon

0x3a9e,	// (0x00012816) stacon_top_pane_g1_ParamLimits

0x3a9e,	// (0x00012816) stacon_top_pane_g1

0xda51,	// (0x0001c7c9) title_pane_stacon_ParamLimits

0xda51,	// (0x0001c7c9) title_pane_stacon

0xda7b,	// (0x0001c7f3) uni_indicator_pane_stacon_ParamLimits

0xda7b,	// (0x0001c7f3) uni_indicator_pane_stacon

0xda90,	// (0x0001c808) battery_pane_stacon_ParamLimits

0xda90,	// (0x0001c808) battery_pane_stacon

0xdad4,	// (0x0001c84c) control_bottom_pane_stacon_ParamLimits

0xdad4,	// (0x0001c84c) control_bottom_pane_stacon

0xdaf7,	// (0x0001c86f) navi_pane_stacon_ParamLimits

0xdaf7,	// (0x0001c86f) navi_pane_stacon

0x3ac0,	// (0x00012838) stacon_bottom_pane_g1_ParamLimits

0x3ac0,	// (0x00012838) stacon_bottom_pane_g1

0xd73a,	// (0x0001c4b2) aid_levels_signal_lsc_ParamLimits

0xd73a,	// (0x0001c4b2) aid_levels_signal_lsc

0xd751,	// (0x0001c4c9) signal_pane_stacon_g1_ParamLimits

0xd751,	// (0x0001c4c9) signal_pane_stacon_g1

0xd765,	// (0x0001c4dd) signal_pane_stacon_g2_ParamLimits

0xd765,	// (0x0001c4dd) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001e453) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001e453) signal_pane_stacon_g

0xd79a,	// (0x0001c512) title_pane_stacon_t1_ParamLimits

0xd79a,	// (0x0001c512) title_pane_stacon_t1

0x34b9,	// (0x00012231) uni_indicator_pane_stacon_g1

0x34c3,	// (0x0001223b) uni_indicator_pane_stacon_g2

0x34cd,	// (0x00012245) uni_indicator_pane_stacon_g3

0x34d7,	// (0x0001224f) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001e45f) uni_indicator_pane_stacon_g

0xd7bf,	// (0x0001c537) control_top_pane_stacon_g1

0xd7c7,	// (0x0001c53f) control_top_pane_stacon_t1_ParamLimits

0xd7c7,	// (0x0001c53f) control_top_pane_stacon_t1

0xd7fe,	// (0x0001c576) aid_levels_battery_lsc_ParamLimits

0xd7fe,	// (0x0001c576) aid_levels_battery_lsc

0xd816,	// (0x0001c58e) battery_pane_stacon_g1_ParamLimits

0xd816,	// (0x0001c58e) battery_pane_stacon_g1

0xd829,	// (0x0001c5a1) battery_pane_stacon_g2_ParamLimits

0xd829,	// (0x0001c5a1) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001e468) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001e468) battery_pane_stacon_g

0xd867,	// (0x0001c5df) navi_icon_pane_stacon

0xd87b,	// (0x0001c5f3) navi_navi_pane_stacon

0xd867,	// (0x0001c5df) navi_text_pane_stacon

0xd7bf,	// (0x0001c537) control_bottom_pane_stacon_g1

0xd88f,	// (0x0001c607) control_bottom_pane_stacon_t1_ParamLimits

0xd88f,	// (0x0001c607) control_bottom_pane_stacon_t1

0x34fb,	// (0x00012273) grid_app_pane_ParamLimits

0x34fb,	// (0x00012273) grid_app_pane

0x351d,	// (0x00012295) scroll_pane_cp15_ParamLimits

0x351d,	// (0x00012295) scroll_pane_cp15

0x3532,	// (0x000122aa) cell_app_pane_ParamLimits

0x3532,	// (0x000122aa) cell_app_pane

0x355c,	// (0x000122d4) cell_app_pane_g1_ParamLimits

0x355c,	// (0x000122d4) cell_app_pane_g1

0x3580,	// (0x000122f8) cell_app_pane_g2_ParamLimits

0x3580,	// (0x000122f8) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001e46d) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001e46d) cell_app_pane_g

0x358c,	// (0x00012304) cell_app_pane_t1_ParamLimits

0x358c,	// (0x00012304) cell_app_pane_t1

0x35a3,	// (0x0001231b) grid_highlight_pane_ParamLimits

0x35a3,	// (0x0001231b) grid_highlight_pane

0x30fb,	// (0x00011e73) cell_highlight_pane_g1

0x3103,	// (0x00011e7b) cell_highlight_pane_g2

0x310b,	// (0x00011e83) cell_highlight_pane_g3

0x3113,	// (0x00011e8b) cell_highlight_pane_g4

0x311b,	// (0x00011e93) cell_highlight_pane_g5

0x3123,	// (0x00011e9b) cell_highlight_pane_g6

0x312b,	// (0x00011ea3) cell_highlight_pane_g7

0x3133,	// (0x00011eab) cell_highlight_pane_g8

0x313b,	// (0x00011eb3) cell_highlight_pane_g9

0x20fc,	// (0x00010e74) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001e41b) cell_highlight_pane_g

0x35b4,	// (0x0001232c) bg_scroll_pane

0xd8d9,	// (0x0001c651) scroll_handle_pane

0x35fb,	// (0x00012373) scroll_bg_pane_g1

0x3610,	// (0x00012388) scroll_bg_pane_g2

0x3628,	// (0x000123a0) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001e472) scroll_bg_pane_g

0x363d,	// (0x000123b5) scroll_handle_focus_pane_ParamLimits

0x363d,	// (0x000123b5) scroll_handle_focus_pane

0x35fb,	// (0x00012373) scroll_handle_pane_g1

0x364a,	// (0x000123c2) scroll_handle_pane_g2

0x3628,	// (0x000123a0) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001e479) scroll_handle_pane_g

0x31f4,	// (0x00011f6c) bg_popup_sub_pane_cp21_ParamLimits

0x31f4,	// (0x00011f6c) bg_popup_sub_pane_cp21

0x365e,	// (0x000123d6) popup_fep_japan_predictive_window_t1_ParamLimits

0x365e,	// (0x000123d6) popup_fep_japan_predictive_window_t1

0x3675,	// (0x000123ed) popup_fep_japan_predictive_window_t2_ParamLimits

0x3675,	// (0x000123ed) popup_fep_japan_predictive_window_t2

0x36a8,	// (0x00012420) popup_fep_japan_predictive_window_t3_ParamLimits

0x36a8,	// (0x00012420) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001e480) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001e480) popup_fep_japan_predictive_window_t

0x2106,	// (0x00010e7e) bg_popup_sub_pane_cp23

0x36df,	// (0x00012457) listscroll_japin_cand_pane

0x36e7,	// (0x0001245f) popup_fep_japan_candidate_window_t1

0x36f5,	// (0x0001246d) candidate_pane_ParamLimits

0x36f5,	// (0x0001246d) candidate_pane

0x3707,	// (0x0001247f) scroll_pane_cp30

0x370f,	// (0x00012487) list_single_popup_jap_candidate_pane_ParamLimits

0x370f,	// (0x00012487) list_single_popup_jap_candidate_pane

0x2106,	// (0x00010e7e) list_highlight_pane_cp30

0x3723,	// (0x0001249b) list_single_popup_jap_candidate_pane_t1

0x3732,	// (0x000124aa) level_1_signal

0x373f,	// (0x000124b7) level_2_signal

0x374c,	// (0x000124c4) level_3_signal

0x3759,	// (0x000124d1) level_4_signal

0x3766,	// (0x000124de) level_5_signal

0x3773,	// (0x000124eb) level_6_signal

0x3780,	// (0x000124f8) level_7_signal

0x3732,	// (0x000124aa) level_1_battery

0x373f,	// (0x000124b7) level_2_battery

0x374c,	// (0x000124c4) level_3_battery

0x3759,	// (0x000124d1) level_4_battery

0x3766,	// (0x000124de) level_5_battery

0x3773,	// (0x000124eb) level_6_battery

0x3780,	// (0x000124f8) level_7_battery

0x37a5,	// (0x0001251d) list_menu_pane_ParamLimits

0x37a5,	// (0x0001251d) list_menu_pane

0x37b6,	// (0x0001252e) scroll_pane_cp25_ParamLimits

0x37b6,	// (0x0001252e) scroll_pane_cp25

0x37cf,	// (0x00012547) list_double2_graphic_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double2_graphic_pane_cp2

0x37cf,	// (0x00012547) list_double2_large_graphic_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double2_large_graphic_pane_cp2

0x37cf,	// (0x00012547) list_double2_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double2_pane_cp2

0x37cf,	// (0x00012547) list_double_graphic_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double_graphic_pane_cp2

0x37cf,	// (0x00012547) list_double_large_graphic_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double_large_graphic_pane_cp2

0x37cf,	// (0x00012547) list_double_number_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double_number_pane_cp2

0x37cf,	// (0x00012547) list_double_pane_cp2_ParamLimits

0x37cf,	// (0x00012547) list_double_pane_cp2

0x37f1,	// (0x00012569) list_single_2graphic_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_2graphic_pane_cp2

0x37f1,	// (0x00012569) list_single_graphic_heading_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_graphic_heading_pane_cp2

0x37f1,	// (0x00012569) list_single_graphic_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_graphic_pane_cp2

0x37f1,	// (0x00012569) list_single_heading_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_heading_pane_cp2

0x3808,	// (0x00012580) list_single_large_graphic_pane_cp2_ParamLimits

0x3808,	// (0x00012580) list_single_large_graphic_pane_cp2

0x37f1,	// (0x00012569) list_single_number_heading_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_number_heading_pane_cp2

0x37f1,	// (0x00012569) list_single_number_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_number_pane_cp2

0x37f1,	// (0x00012569) list_single_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_pane_cp2

0x385e,	// (0x000125d6) bg_popup_sub_pane_cp22

0xd98b,	// (0x0001c703) popup_side_volume_key_window_g1

0xd9b5,	// (0x0001c72d) popup_side_volume_key_window_t1

0xd9d1,	// (0x0001c749) volume_small_pane_cp1

0x247b,	// (0x000111f3) bg_popup_sub_pane_cp24_ParamLimits

0x247b,	// (0x000111f3) bg_popup_sub_pane_cp24

0x3874,	// (0x000125ec) fep_china_uni_candidate_pane_ParamLimits

0x3874,	// (0x000125ec) fep_china_uni_candidate_pane

0x3888,	// (0x00012600) fep_china_uni_entry_pane

0x3898,	// (0x00012610) popup_fep_china_uni_window_g1

0x38b4,	// (0x0001262c) fep_china_uni_entry_pane_g1

0x38bc,	// (0x00012634) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001e4ad) fep_china_uni_entry_pane_g

0x38c4,	// (0x0001263c) fep_entry_item_pane

0x38ce,	// (0x00012646) fep_candidate_item_pane

0x38d6,	// (0x0001264e) fep_china_uni_candidate_pane_g1

0x38de,	// (0x00012656) fep_china_uni_candidate_pane_g2

0x38e6,	// (0x0001265e) fep_china_uni_candidate_pane_g3

0x38ee,	// (0x00012666) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001e4b2) fep_china_uni_candidate_pane_g

0x20fc,	// (0x00010e74) fep_entry_item_pane_g1

0x38f6,	// (0x0001266e) fep_entry_item_pane_t1_ParamLimits

0x38f6,	// (0x0001266e) fep_entry_item_pane_t1

0x390c,	// (0x00012684) fep_candidate_item_pane_t1_ParamLimits

0x390c,	// (0x00012684) fep_candidate_item_pane_t1

0x3921,	// (0x00012699) fep_candidate_item_pane_t2_ParamLimits

0x3921,	// (0x00012699) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001e4bb) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001e4bb) fep_candidate_item_pane_t

0x21e6,	// (0x00010f5e) list_highlight_pane_cp31_ParamLimits

0x21e6,	// (0x00010f5e) list_highlight_pane_cp31

0x3933,	// (0x000126ab) level_1_signal_lsc

0x393c,	// (0x000126b4) level_2_signal_lsc

0x3945,	// (0x000126bd) level_3_signal_lsc

0x394e,	// (0x000126c6) level_4_signal_lsc

0x3957,	// (0x000126cf) level_5_signal_lsc

0x3960,	// (0x000126d8) level_6_signal_lsc

0x3969,	// (0x000126e1) level_7_signal_lsc

0x3969,	// (0x000126e1) level_1_battery_lsc

0x3972,	// (0x000126ea) level_2_battery_lsc

0x397b,	// (0x000126f3) level_3_battery_lsc

0x3984,	// (0x000126fc) level_4_battery_lsc

0x398d,	// (0x00012705) level_5_battery_lsc

0x3996,	// (0x0001270e) level_6_battery_lsc

0x3933,	// (0x000126ab) level_7_battery_lsc

0x399f,	// (0x00012717) scroll_handle_focus_pane_g1

0x39a8,	// (0x00012720) scroll_handle_focus_pane_g2

0x39b1,	// (0x00012729) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001e4c0) scroll_handle_focus_pane_g

0xca1f,	// (0x0001b797) list_single_2graphic_pane_g1_ParamLimits

0xca1f,	// (0x0001b797) list_single_2graphic_pane_g1

0xc412,	// (0x0001b18a) list_single_2graphic_pane_g2_ParamLimits

0xc412,	// (0x0001b18a) list_single_2graphic_pane_g2

0xc398,	// (0x0001b110) list_single_2graphic_pane_g3_ParamLimits

0xc398,	// (0x0001b110) list_single_2graphic_pane_g3

0xca2b,	// (0x0001b7a3) list_single_2graphic_pane_g4_ParamLimits

0xca2b,	// (0x0001b7a3) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001e4c7) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001e4c7) list_single_2graphic_pane_g

0xca37,	// (0x0001b7af) list_single_2graphic_pane_t1_ParamLimits

0xca37,	// (0x0001b7af) list_single_2graphic_pane_t1

0xca65,	// (0x0001b7dd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xca65,	// (0x0001b7dd) list_double2_graphic_large_graphic_pane_g1

0xc4b7,	// (0x0001b22f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc4b7,	// (0x0001b22f) list_double2_graphic_large_graphic_pane_g2

0xc483,	// (0x0001b1fb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc483,	// (0x0001b1fb) list_double2_graphic_large_graphic_pane_g3

0xca77,	// (0x0001b7ef) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xca77,	// (0x0001b7ef) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001e4d0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001e4d0) list_double2_graphic_large_graphic_pane_g

0xca83,	// (0x0001b7fb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xca83,	// (0x0001b7fb) list_double2_graphic_large_graphic_pane_t1

0xca99,	// (0x0001b811) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xca99,	// (0x0001b811) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001e4d9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001e4d9) list_double2_graphic_large_graphic_pane_t

0x3b8b,	// (0x00012903) popup_fast_swap_window_ParamLimits

0x3b8b,	// (0x00012903) popup_fast_swap_window

0x3ba7,	// (0x0001291f) popup_side_volume_key_window

0x3bc1,	// (0x00012939) stacon_top_pane

0x3bcb,	// (0x00012943) status_pane_ParamLimits

0x3bcb,	// (0x00012943) status_pane

0x3bc1,	// (0x00012939) status_small_pane

0x2106,	// (0x00010e7e) control_pane

0x2106,	// (0x00010e7e) stacon_bottom_pane

0x2ede,	// (0x00011c56) scroll_pane_cp121

0x2ed5,	// (0x00011c4d) set_content_pane

0x3a5b,	// (0x000127d3) bg_active_tab_pane_g1_cp1

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp1

0x3a49,	// (0x000127c1) bg_active_tab_pane_g3_cp1

0x3a5b,	// (0x000127d3) bg_passive_tab_pane_g1_cp1

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp1

0x3a49,	// (0x000127c1) bg_passive_tab_pane_g3_cp1

0x3a6d,	// (0x000127e5) bg_active_tab_pane_g1_cp2

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp2

0x3a64,	// (0x000127dc) bg_active_tab_pane_g3_cp2

0x3a6d,	// (0x000127e5) bg_passive_tab_pane_g1_cp2

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp2

0x3a64,	// (0x000127dc) bg_passive_tab_pane_g3_cp2

0x3a7f,	// (0x000127f7) bg_active_tab_pane_g1_cp3

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp3

0x3a76,	// (0x000127ee) bg_active_tab_pane_g3_cp3

0x3a7f,	// (0x000127f7) bg_passive_tab_pane_g1_cp3

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp3

0x3a76,	// (0x000127ee) bg_passive_tab_pane_g3_cp3

0x3a93,	// (0x0001280b) bg_active_tab_pane_g1_cp4

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp4

0x3a88,	// (0x00012800) bg_active_tab_pane_g3_cp4

0x3a93,	// (0x0001280b) bg_passive_tab_pane_g1_cp4

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp4

0x3a88,	// (0x00012800) bg_passive_tab_pane_g3_cp4

0x3ae5,	// (0x0001285d) bg_active_tab_pane_g1_cp5

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp5

0x3adc,	// (0x00012854) bg_active_tab_pane_g3_cp5

0x3ae5,	// (0x0001285d) bg_passive_tab_pane_g1_cp5

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp5

0x3adc,	// (0x00012854) bg_passive_tab_pane_g3_cp5

0x3aee,	// (0x00012866) list_set_graphic_pane_ParamLimits

0x3aee,	// (0x00012866) list_set_graphic_pane

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp4

0x3b0c,	// (0x00012884) list_set_graphic_pane_g1_ParamLimits

0x3b0c,	// (0x00012884) list_set_graphic_pane_g1

0x3b18,	// (0x00012890) list_set_graphic_pane_g2_ParamLimits

0x3b18,	// (0x00012890) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001e4de) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001e4de) list_set_graphic_pane_g

0x0009,

0xfad2,	// (0x0001e84a) volume_small_pane_cp_g

0x3b3c,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3b3c,	// (0x000128b4) list_double2_large_graphic_pane_g1_cp2

0x3b4a,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3b4a,	// (0x000128c2) list_double2_large_graphic_pane_g2_cp2

0x3b5b,	// (0x000128d3) list_double2_large_graphic_pane_g3_cp2

0x3b63,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3b63,	// (0x000128db) list_double2_large_graphic_pane_t1_cp2

0x3b79,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3b79,	// (0x000128f1) list_double2_large_graphic_pane_t2_cp2

0x5e02,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e02,	// (0x00014b7a) list_double_large_graphic_pane_g1_cp2

0x5e15,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e15,	// (0x00014b8d) list_double_large_graphic_pane_g2_cp2

0x3ce9,	// (0x00012a61) list_double_large_graphic_pane_g3_cp2

0x5e26,	// (0x00014b9e) list_double_large_graphic_pane_g4_cp

0x5e2e,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e2e,	// (0x00014ba6) list_double_large_graphic_pane_t1_cp2

0x5e45,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e45,	// (0x00014bbd) list_double_large_graphic_pane_t2_cp2

0x3bd9,	// (0x00012951) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3bd9,	// (0x00012951) list_double2_graphic_pane_g1_cp2

0x3be7,	// (0x0001295f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3be7,	// (0x0001295f) list_double2_graphic_pane_g2_cp2

0x3bf8,	// (0x00012970) list_double2_graphic_pane_g3_cp2

0x3c02,	// (0x0001297a) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3c02,	// (0x0001297a) list_double2_graphic_pane_t1_cp2

0x3c18,	// (0x00012990) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3c18,	// (0x00012990) list_double2_graphic_pane_t2_cp2

0x3c2a,	// (0x000129a2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3c2a,	// (0x000129a2) list_single_number_heading_pane_g1_cp2

0x3c36,	// (0x000129ae) list_single_number_heading_pane_g2_cp2

0x3c3e,	// (0x000129b6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3c3e,	// (0x000129b6) list_single_number_heading_pane_t1_cp2

0x3c54,	// (0x000129cc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3c54,	// (0x000129cc) list_single_number_heading_pane_t2_cp2

0x3c68,	// (0x000129e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3c68,	// (0x000129e0) list_single_number_heading_pane_t3_cp2

0x3c2a,	// (0x000129a2) list_single_heading_pane_g1_cp2_ParamLimits

0x3c2a,	// (0x000129a2) list_single_heading_pane_g1_cp2

0x3c36,	// (0x000129ae) list_single_heading_pane_g2_cp2

0x3c3e,	// (0x000129b6) list_single_heading_pane_t1_cp2_ParamLimits

0x3c3e,	// (0x000129b6) list_single_heading_pane_t1_cp2

0x5c0a,	// (0x00014982) list_single_heading_pane_t2_cp2_ParamLimits

0x5c0a,	// (0x00014982) list_single_heading_pane_t2_cp2

0x5b4c,	// (0x000148c4) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b4c,	// (0x000148c4) list_double_graphic_pane_g1_cp2

0x5b58,	// (0x000148d0) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b58,	// (0x000148d0) list_double_graphic_pane_g2_cp2

0x5b67,	// (0x000148df) list_double_graphic_pane_g3_cp2

0x5b6f,	// (0x000148e7) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b6f,	// (0x000148e7) list_double_graphic_pane_t1_cp2

0x5b85,	// (0x000148fd) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b85,	// (0x000148fd) list_double_graphic_pane_t2_cp2

0x3cdd,	// (0x00012a55) list_double_number_pane_g1_cp2_ParamLimits

0x3cdd,	// (0x00012a55) list_double_number_pane_g1_cp2

0x3ce9,	// (0x00012a61) list_double_number_pane_g2_cp2

0x5b10,	// (0x00014888) list_double_number_pane_t1_cp2_ParamLimits

0x5b10,	// (0x00014888) list_double_number_pane_t1_cp2

0x5b24,	// (0x0001489c) list_double_number_pane_t2_cp2_ParamLimits

0x5b24,	// (0x0001489c) list_double_number_pane_t2_cp2

0x5b3a,	// (0x000148b2) list_double_number_pane_t3_cp2_ParamLimits

0x5b3a,	// (0x000148b2) list_double_number_pane_t3_cp2

0x59f9,	// (0x00014771) list_single_graphic_pane_g1_cp2_ParamLimits

0x59f9,	// (0x00014771) list_single_graphic_pane_g1_cp2

0x3d41,	// (0x00012ab9) list_single_graphic_pane_g2_cp2_ParamLimits

0x3d41,	// (0x00012ab9) list_single_graphic_pane_g2_cp2

0x3d4d,	// (0x00012ac5) list_single_graphic_pane_g3_cp2

0x59cf,	// (0x00014747) list_single_graphic_pane_t1_cp2_ParamLimits

0x59cf,	// (0x00014747) list_single_graphic_pane_t1_cp2

0x3d41,	// (0x00012ab9) list_single_number_pane_g1_cp2_ParamLimits

0x3d41,	// (0x00012ab9) list_single_number_pane_g1_cp2

0x3d4d,	// (0x00012ac5) list_single_number_pane_g2_cp2

0x59cf,	// (0x00014747) list_single_number_pane_t1_cp2_ParamLimits

0x59cf,	// (0x00014747) list_single_number_pane_t1_cp2

0x59e5,	// (0x0001475d) list_single_number_pane_t2_cp2_ParamLimits

0x59e5,	// (0x0001475d) list_single_number_pane_t2_cp2

0x3b4a,	// (0x000128c2) list_double2_pane_g1_cp2_ParamLimits

0x3b4a,	// (0x000128c2) list_double2_pane_g1_cp2

0x3b5b,	// (0x000128d3) list_double2_pane_g2_cp2

0x3cb5,	// (0x00012a2d) list_double2_pane_t1_cp2_ParamLimits

0x3cb5,	// (0x00012a2d) list_double2_pane_t1_cp2

0x3ccb,	// (0x00012a43) list_double2_pane_t2_cp2_ParamLimits

0x3ccb,	// (0x00012a43) list_double2_pane_t2_cp2

0x3cdd,	// (0x00012a55) list_double_pane_g1_cp2_ParamLimits

0x3cdd,	// (0x00012a55) list_double_pane_g1_cp2

0x3ce9,	// (0x00012a61) list_double_pane_g2_cp2

0x3cf1,	// (0x00012a69) list_double_pane_t1_cp2_ParamLimits

0x3cf1,	// (0x00012a69) list_double_pane_t1_cp2

0x3d07,	// (0x00012a7f) list_double_pane_t2_cp2_ParamLimits

0x3d07,	// (0x00012a7f) list_double_pane_t2_cp2

0x3d31,	// (0x00012aa9) list_single_pane_cp2_g3

0x3d41,	// (0x00012ab9) list_single_pane_g1_cp2_ParamLimits

0x3d41,	// (0x00012ab9) list_single_pane_g1_cp2

0x3d4d,	// (0x00012ac5) list_single_pane_g2_cp2

0x3d55,	// (0x00012acd) list_single_pane_t1_cp2_ParamLimits

0x3d55,	// (0x00012acd) list_single_pane_t1_cp2

0x3d6d,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3d6d,	// (0x00012ae5) list_single_large_graphic_pane_g1_cp2

0x3d7b,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3d7b,	// (0x00012af3) list_single_large_graphic_pane_g2_cp2

0x3d87,	// (0x00012aff) list_single_large_graphic_pane_g3_cp2

0x3d8f,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3d8f,	// (0x00012b07) list_single_large_graphic_pane_g4_cp1

0x3da9,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3da9,	// (0x00012b21) list_single_large_graphic_pane_t1_cp2

0x5999,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5999,	// (0x00014711) list_single_graphic_heading_pane_g1_cp2

0x5966,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5966,	// (0x000146de) list_single_graphic_heading_pane_g4_cp2

0x3d4d,	// (0x00012ac5) list_single_graphic_heading_pane_g5_cp2

0x59a5,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59a5,	// (0x0001471d) list_single_graphic_heading_pane_t1_cp2

0x59bb,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x59bb,	// (0x00014733) list_single_graphic_heading_pane_t2_cp2

0x595a,	// (0x000146d2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x595a,	// (0x000146d2) list_single_2graphic_pane_g1_cp2

0x5966,	// (0x000146de) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5966,	// (0x000146de) list_single_2graphic_pane_g2_cp2

0x3d4d,	// (0x00012ac5) list_single_2graphic_pane_g3_cp2

0x5977,	// (0x000146ef) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5977,	// (0x000146ef) list_single_2graphic_pane_g4_cp2

0x5983,	// (0x000146fb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5983,	// (0x000146fb) list_single_2graphic_pane_t1_cp2

0x20fc,	// (0x00010e74) list_highlight_pane_g10_cp1

0x5542,	// (0x000142ba) list_highlight_pane_g1_cp1

0x554a,	// (0x000142c2) list_highlight_pane_g2_cp1

0x5552,	// (0x000142ca) list_highlight_pane_g3_cp1

0x555a,	// (0x000142d2) list_highlight_pane_g4_cp1

0x5562,	// (0x000142da) list_highlight_pane_g5_cp1

0x556a,	// (0x000142e2) list_highlight_pane_g6_cp1

0x5572,	// (0x000142ea) list_highlight_pane_g7_cp1

0x557a,	// (0x000142f2) list_highlight_pane_g8_cp1

0x5582,	// (0x000142fa) list_highlight_pane_g9_cp1

0x545a,	// (0x000141d2) form_field_slider_pane_t3

0x5468,	// (0x000141e0) form_field_slider_pane_t4

0x5476,	// (0x000141ee) slider_form_pane_ParamLimits

0x5476,	// (0x000141ee) slider_form_pane

0x2106,	// (0x00010e7e) control_abbreviations

0x2106,	// (0x00010e7e) control_conventions

0x2106,	// (0x00010e7e) control_definitions

0x2106,	// (0x00010e7e) format_table_attribute

0x5c56,	// (0x000149ce) bg_popup_preview_window_pane_g9

0x2106,	// (0x00010e7e) format_table_data2

0x2106,	// (0x00010e7e) format_table_data3

0x2106,	// (0x00010e7e) format_table_data_example

0x0008,

0x2106,	// (0x00010e7e) intro_purpose

0xf8ef,	// (0x0001e667) bg_popup_preview_window_pane_g

0x2106,	// (0x00010e7e) texts_category

0x2106,	// (0x00010e7e) texts_graphics

0x3dbf,	// (0x00012b37) text_digital

0x3dce,	// (0x00012b46) text_primary

0x3ddd,	// (0x00012b55) text_primary_small

0x3dec,	// (0x00012b64) text_secondary

0x3dfb,	// (0x00012b73) text_title

0x6497,	// (0x0001520f) bg_passive_tab_pane_g1_cp3_srt

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp3_srt

0x648e,	// (0x00015206) bg_passive_tab_pane_g3_cp3_srt

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp3_srt_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp3_srt

0x64a0,	// (0x00015218) tabs_4_active_pane_srt_g1

0x64a8,	// (0x00015220) tabs_4_active_pane_srt_t1_ParamLimits

0x64a8,	// (0x00015220) tabs_4_active_pane_srt_t1

0x6497,	// (0x0001520f) bg_active_tab_pane_g1_cp3_copy1

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp3_copy1

0x648e,	// (0x00015206) bg_active_tab_pane_g3_cp3_copy1

0x21e6,	// (0x00010f5e) tabs_2_long_active_pane_srt_ParamLimits

0x21e6,	// (0x00010f5e) tabs_2_long_active_pane_srt

0x21e6,	// (0x00010f5e) tabs_2_long_passive_pane_srt_ParamLimits

0x21e6,	// (0x00010f5e) tabs_2_long_passive_pane_srt

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp4_srt

0x60cc,	// (0x00014e44) bg_passive_tab_pane_g1_cp4_srt

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp4_srt

0x60c3,	// (0x00014e3b) bg_passive_tab_pane_g3_cp4_srt

0x3304,	// (0x0001207c) bg_active_tab_pane_cp4_srt_ParamLimits

0x3304,	// (0x0001207c) bg_active_tab_pane_cp4_srt

0x60d5,	// (0x00014e4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0x60d5,	// (0x00014e4d) tabs_2_long_active_pane_srt_t1

0x60cc,	// (0x00014e44) bg_active_tab_pane_g1_cp4_srt

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp4_srt

0x60c3,	// (0x00014e3b) bg_active_tab_pane_g3_cp4_srt

0x247b,	// (0x000111f3) tabs_3_long_active_pane_srt_ParamLimits

0x247b,	// (0x000111f3) tabs_3_long_active_pane_srt

0x247b,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x247b,	// (0x000111f3) tabs_3_long_passive_pane_cp_srt

0x247b,	// (0x000111f3) tabs_3_long_passive_pane_srt_ParamLimits

0x247b,	// (0x000111f3) tabs_3_long_passive_pane_srt

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp5_srt

0x3ae5,	// (0x0001285d) bg_passive_tab_pane_g1_cp5_srt

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp5_srt

0x3adc,	// (0x00012854) bg_passive_tab_pane_g3_cp5_srt

0x3304,	// (0x0001207c) bg_active_tab_pane_cp5_srt_ParamLimits

0x3304,	// (0x0001207c) bg_active_tab_pane_cp5_srt

0x60b1,	// (0x00014e29) tabs_3_long_active_pane_srt_t1_ParamLimits

0x60b1,	// (0x00014e29) tabs_3_long_active_pane_srt_t1

0x3ae5,	// (0x0001285d) bg_active_tab_pane_g1_cp5_srt

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp5_srt

0x3adc,	// (0x00012854) bg_active_tab_pane_g3_cp5_srt

0x60a3,	// (0x00014e1b) navi_text_pane_srt_t1

0x609b,	// (0x00014e13) navi_icon_pane_srt_g1

0x3fca,	// (0x00012d42) midp_editing_number_pane_srt

0x3e0a,	// (0x00012b82) midp_ticker_pane_srt

0x3fd2,	// (0x00012d4a) midp_ticker_pane_srt_g1

0x3fda,	// (0x00012d52) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001e4fd) midp_ticker_pane_srt_g

0x3fe2,	// (0x00012d5a) midp_ticker_pane_srt_t1

0x608c,	// (0x00014e04) midp_editing_number_pane_t1_copy1

0x3e12,	// (0x00012b8a) listscroll_midp_pane

0x3e12,	// (0x00012b8a) midp_form_pane

0x3e82,	// (0x00012bfa) midp_info_popup_window_ParamLimits

0x3e82,	// (0x00012bfa) midp_info_popup_window

0x31f4,	// (0x00011f6c) bg_popup_sub_pane_cp50_ParamLimits

0x31f4,	// (0x00011f6c) bg_popup_sub_pane_cp50

0x5177,	// (0x00013eef) listscroll_midp_info_pane_ParamLimits

0x5177,	// (0x00013eef) listscroll_midp_info_pane

0x515f,	// (0x00013ed7) listscroll_form_midp_pane_ParamLimits

0x515f,	// (0x00013ed7) listscroll_form_midp_pane

0x516b,	// (0x00013ee3) scroll_bar_cp050

0x513f,	// (0x00013eb7) list_midp_pane

0x7071,	// (0x00015de9) signal_pane_g2_cp

0x5079,	// (0x00013df1) listscroll_midp_info_pane_t1_ParamLimits

0x5079,	// (0x00013df1) listscroll_midp_info_pane_t1

0x5091,	// (0x00013e09) listscroll_midp_info_pane_t2_ParamLimits

0x5091,	// (0x00013e09) listscroll_midp_info_pane_t2

0x50cf,	// (0x00013e47) listscroll_midp_info_pane_t3_ParamLimits

0x50cf,	// (0x00013e47) listscroll_midp_info_pane_t3

0x5109,	// (0x00013e81) listscroll_midp_info_pane_t4_ParamLimits

0x5109,	// (0x00013e81) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0001e5a2) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0001e5a2) listscroll_midp_info_pane_t

0x32b2,	// (0x0001202a) scroll_pane_cp21

0x501d,	// (0x00013d95) form_midp_field_choice_group_pane

0x5026,	// (0x00013d9e) form_midp_field_text_pane

0x505f,	// (0x00013dd7) form_midp_field_time_pane

0x5067,	// (0x00013ddf) form_midp_gauge_slider_pane

0x5070,	// (0x00013de8) form_midp_gauge_wait_pane

0x2106,	// (0x00010e7e) form_midp_image_pane

0xcb6e,	// (0x0001b8e6) list_single_midp_pane_ParamLimits

0xcb6e,	// (0x0001b8e6) list_single_midp_pane

0x4f91,	// (0x00013d09) form_midp_field_text_pane_t1

0x4d5c,	// (0x00013ad4) input_focus_pane_cp050

0x4fd0,	// (0x00013d48) list_midp_form_text_pane

0x4f60,	// (0x00013cd8) form_midp_field_choice_group_pane_t1

0x4f6e,	// (0x00013ce6) input_focus_pane_cp051

0x4f82,	// (0x00013cfa) list_midp_choice_pane

0x2106,	// (0x00010e7e) status_idle_pane

0x4f44,	// (0x00013cbc) form_midp_field_time_pane_t1

0x20fc,	// (0x00010e74) wait_anim_pane_g2_copy1

0x4f52,	// (0x00013cca) form_midp_field_time_pane_t2

0x0001,

0x3f32,	// (0x00012caa) aid_navinavi_width_2_pane

0xf825,	// (0x0001e59d) form_midp_field_time_pane_t

0x2106,	// (0x00010e7e) input_focus_pane_cp052

0x2106,	// (0x00010e7e) bg_input_focus_pane_cp040

0x4f04,	// (0x00013c7c) form_midp_gauge_slider_pane_t1

0x4f12,	// (0x00013c8a) form_midp_gauge_slider_pane_t2

0x4f20,	// (0x00013c98) form_midp_gauge_slider_pane_t3

0x4f2e,	// (0x00013ca6) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0001e594) form_midp_gauge_slider_pane_t

0x4f3c,	// (0x00013cb4) form_midp_slider_pane

0x21e6,	// (0x00010f5e) bg_input_focus_pane_cp041_ParamLimits

0x21e6,	// (0x00010f5e) bg_input_focus_pane_cp041

0x4ed1,	// (0x00013c49) form_midp_gauge_wait_pane_t1_ParamLimits

0x4ed1,	// (0x00013c49) form_midp_gauge_wait_pane_t1

0x4ee3,	// (0x00013c5b) form_midp_gauge_wait_pane_t2_ParamLimits

0x4ee3,	// (0x00013c5b) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0001e58f) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0001e58f) form_midp_gauge_wait_pane_t

0x4ef5,	// (0x00013c6d) form_midp_wait_pane_ParamLimits

0x4ef5,	// (0x00013c6d) form_midp_wait_pane

0x4e9b,	// (0x00013c13) form_midp_image_pane_g1

0x4ea4,	// (0x00013c1c) form_midp_image_pane_t1

0x4eb3,	// (0x00013c2b) form_midp_image_pane_t2

0x4ec2,	// (0x00013c3a) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0001e588) form_midp_image_pane_t

0x4e83,	// (0x00013bfb) list_single_midp_pane_g1

0xcb5f,	// (0x0001b8d7) list_single_midp_pane_t1

0x4e53,	// (0x00013bcb) list_midp_form_item_pane_ParamLimits

0x4e53,	// (0x00013bcb) list_midp_form_item_pane

0x3eda,	// (0x00012c52) list_midp_form_item_pane_t1

0x3ee9,	// (0x00012c61) midp_ticker_pane_g1

0x3ef5,	// (0x00012c6d) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001e4e3) midp_ticker_pane_g

0x3f01,	// (0x00012c79) midp_ticker_pane_t1

0x6302,	// (0x0001507a) midp_editing_number_pane_t1

0x62e0,	// (0x00015058) midp_editing_number_pane

0x62ef,	// (0x00015067) midp_ticker_pane

0x6054,	// (0x00014dcc) ai_message_heading_pane

0x2106,	// (0x00010e7e) bg_popup_window_pane_cp14

0x605c,	// (0x00014dd4) listscroll_ai_message_pane

0x5fde,	// (0x00014d56) ai_message_heading_pane_g1_ParamLimits

0x5fde,	// (0x00014d56) ai_message_heading_pane_g1

0x5fea,	// (0x00014d62) ai_message_heading_pane_g2_ParamLimits

0x5fea,	// (0x00014d62) ai_message_heading_pane_g2

0x5ff6,	// (0x00014d6e) ai_message_heading_pane_g3_ParamLimits

0x5ff6,	// (0x00014d6e) ai_message_heading_pane_g3

0x6002,	// (0x00014d7a) ai_message_heading_pane_g4_ParamLimits

0x6002,	// (0x00014d7a) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0001e6c9) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0001e6c9) ai_message_heading_pane_g

0x600e,	// (0x00014d86) ai_message_heading_pane_t1_ParamLimits

0x600e,	// (0x00014d86) ai_message_heading_pane_t1

0x6028,	// (0x00014da0) ai_message_heading_pane_t2_ParamLimits

0x6028,	// (0x00014da0) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0001e6d2) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0001e6d2) ai_message_heading_pane_t

0x603a,	// (0x00014db2) bg_popup_heading_pane_cp1_ParamLimits

0x603a,	// (0x00014db2) bg_popup_heading_pane_cp1

0x5fcc,	// (0x00014d44) list_ai_message_pane_ParamLimits

0x5fcc,	// (0x00014d44) list_ai_message_pane

0x32b2,	// (0x0001202a) scroll_pane_cp10

0x5f68,	// (0x00014ce0) list_ai_message_pane_g1

0x5f70,	// (0x00014ce8) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0001e6a6) list_ai_message_pane_g

0x5f78,	// (0x00014cf0) list_ai_message_pane_t1_ParamLimits

0x5f78,	// (0x00014cf0) list_ai_message_pane_t1

0x5f8d,	// (0x00014d05) list_ai_message_pane_t2_ParamLimits

0x5f8d,	// (0x00014d05) list_ai_message_pane_t2

0x5fa2,	// (0x00014d1a) list_ai_message_pane_t3_ParamLimits

0x5fa2,	// (0x00014d1a) list_ai_message_pane_t3

0x5fb7,	// (0x00014d2f) list_ai_message_pane_t4_ParamLimits

0x5fb7,	// (0x00014d2f) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0001e6ab) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0001e6ab) list_ai_message_pane_t

0x5f52,	// (0x00014cca) cell_ai_soft_ind_pane_ParamLimits

0x5f52,	// (0x00014cca) cell_ai_soft_ind_pane

0x3f13,	// (0x00012c8b) cell_ai_soft_ind_pane_g1_ParamLimits

0x3f13,	// (0x00012c8b) cell_ai_soft_ind_pane_g1

0x2106,	// (0x00010e7e) grid_highlight_cp1

0x3f20,	// (0x00012c98) text_secondary_cp56_ParamLimits

0x3f20,	// (0x00012c98) text_secondary_cp56

0x5f27,	// (0x00014c9f) example_general_pane_ParamLimits

0x5f27,	// (0x00014c9f) example_general_pane

0x5f33,	// (0x00014cab) example_parent_pane_g1_ParamLimits

0x5f33,	// (0x00014cab) example_parent_pane_g1

0x5f3f,	// (0x00014cb7) example_parent_pane_t1_ParamLimits

0x5f3f,	// (0x00014cb7) example_parent_pane_t1

0x451d,	// (0x00013295) popup_preview_text_window_ParamLimits

0x451d,	// (0x00013295) popup_preview_text_window

0x3d39,	// (0x00012ab1) list_single_pane_cp2_g4

0x2525,	// (0x0001129d) bg_popup_preview_window_pane_ParamLimits

0x2525,	// (0x0001129d) bg_popup_preview_window_pane

0x5c5e,	// (0x000149d6) popup_preview_text_window_t1_ParamLimits

0x5c5e,	// (0x000149d6) popup_preview_text_window_t1

0x5c7c,	// (0x000149f4) popup_preview_text_window_t2_ParamLimits

0x5c7c,	// (0x000149f4) popup_preview_text_window_t2

0x5cc5,	// (0x00014a3d) popup_preview_text_window_t3_ParamLimits

0x5cc5,	// (0x00014a3d) popup_preview_text_window_t3

0x5d0a,	// (0x00014a82) popup_preview_text_window_t4_ParamLimits

0x5d0a,	// (0x00014a82) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0001e67a) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0001e67a) popup_preview_text_window_t

0x5d88,	// (0x00014b00) scroll_pane_cp11

0x4c42,	// (0x000139ba) bg_popup_preview_window_pane_g1

0x5c1e,	// (0x00014996) bg_popup_preview_window_pane_g2

0x5c26,	// (0x0001499e) bg_popup_preview_window_pane_g3

0x5c2e,	// (0x000149a6) bg_popup_preview_window_pane_g4

0x5c36,	// (0x000149ae) bg_popup_preview_window_pane_g5

0x5c3e,	// (0x000149b6) bg_popup_preview_window_pane_g6

0x5c46,	// (0x000149be) bg_popup_preview_window_pane_g7

0x5c4e,	// (0x000149c6) bg_popup_preview_window_pane_g8

0xd2e8,	// (0x0001c060) aid_popup_width_pane

0x44fb,	// (0x00013273) popup_midp_note_alarm_window_ParamLimits

0x44fb,	// (0x00013273) popup_midp_note_alarm_window

0x2f8f,	// (0x00011d07) data_form_pane_ParamLimits

0xc87e,	// (0x0001b5f6) form_field_data_pane_g1

0xc888,	// (0x0001b600) form_field_data_pane_t1_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_ParamLimits

0x2fcd,	// (0x00011d45) data_form_wide_pane_ParamLimits

0xc8a2,	// (0x0001b61a) form_field_data_wide_pane_g1

0xc8ae,	// (0x0001b626) form_field_data_wide_pane_t1_ParamLimits

0x27c4,	// (0x0001153c) input_focus_pane_cp6_ParamLimits

0x325d,	// (0x00011fd5) input_popup_find_pane_g1_ParamLimits

0x325d,	// (0x00011fd5) input_popup_find_pane_g1

0xd83a,	// (0x0001c5b2) aid_navi_side_left_pane

0xd84f,	// (0x0001c5c7) aid_navi_side_right_pane

0x563d,	// (0x000143b5) bg_popup_window_pane_cp30_ParamLimits

0x563d,	// (0x000143b5) bg_popup_window_pane_cp30

0x56b7,	// (0x0001442f) popup_midp_note_alarm_window_g1_ParamLimits

0x56b7,	// (0x0001442f) popup_midp_note_alarm_window_g1

0x56e7,	// (0x0001445f) popup_midp_note_alarm_window_t1_ParamLimits

0x56e7,	// (0x0001445f) popup_midp_note_alarm_window_t1

0x5788,	// (0x00014500) popup_midp_note_alarm_window_t2_ParamLimits

0x5788,	// (0x00014500) popup_midp_note_alarm_window_t2

0x5836,	// (0x000145ae) popup_midp_note_alarm_window_t3_ParamLimits

0x5836,	// (0x000145ae) popup_midp_note_alarm_window_t3

0x585e,	// (0x000145d6) popup_midp_note_alarm_window_t4_ParamLimits

0x585e,	// (0x000145d6) popup_midp_note_alarm_window_t4

0x587e,	// (0x000145f6) popup_midp_note_alarm_window_t5_ParamLimits

0x587e,	// (0x000145f6) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0001e617) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0001e617) popup_midp_note_alarm_window_t

0x592a,	// (0x000146a2) wait_bar_pane_cp1_ParamLimits

0x592a,	// (0x000146a2) wait_bar_pane_cp1

0x2106,	// (0x00010e7e) wait_anim_pane_copy1

0x2106,	// (0x00010e7e) wait_border_pane_copy1

0x531b,	// (0x00014093) wait_border_pane_g1_copy1

0xc8c8,	// (0x0001b640) form_field_popup_pane_g1

0xc8d0,	// (0x0001b648) form_field_popup_pane_t1_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_cp7_ParamLimits

0x3041,	// (0x00011db9) list_form_pane_ParamLimits

0xc8ea,	// (0x0001b662) form_field_popup_wide_pane_g1

0xc8f2,	// (0x0001b66a) form_field_popup_wide_pane_t1_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_cp8_ParamLimits

0x306a,	// (0x00011de2) list_form_wide_pane_ParamLimits

0x6518,	// (0x00015290) aid_size_cell_graphic_pane

0xc977,	// (0x0001b6ef) data_form_pane_t1_ParamLimits

0xcbbd,	// (0x0001b935) data_form_wide_pane_t1_ParamLimits

0x47f6,	// (0x0001356e) bg_status_flat_pane

0x2146,	// (0x00010ebe) title_pane_t1_ParamLimits

0x21ae,	// (0x00010f26) title_pane_t2_ParamLimits

0x21d4,	// (0x00010f4c) title_pane_t3_ParamLimits

0xf573,	// (0x0001e2eb) title_pane_t_ParamLimits

0x3732,	// (0x000124aa) level_1_signal_ParamLimits

0x373f,	// (0x000124b7) level_2_signal_ParamLimits

0x374c,	// (0x000124c4) level_3_signal_ParamLimits

0x3759,	// (0x000124d1) level_4_signal_ParamLimits

0x3766,	// (0x000124de) level_5_signal_ParamLimits

0x3773,	// (0x000124eb) level_6_signal_ParamLimits

0x3780,	// (0x000124f8) level_7_signal_ParamLimits

0x3732,	// (0x000124aa) level_1_battery_ParamLimits

0x373f,	// (0x000124b7) level_2_battery_ParamLimits

0x374c,	// (0x000124c4) level_3_battery_ParamLimits

0x3759,	// (0x000124d1) level_4_battery_ParamLimits

0x3766,	// (0x000124de) level_5_battery_ParamLimits

0x3773,	// (0x000124eb) level_6_battery_ParamLimits

0x3780,	// (0x000124f8) level_7_battery_ParamLimits

0x5542,	// (0x000142ba) bg_status_flat_pane_g1

0x554a,	// (0x000142c2) bg_status_flat_pane_g2

0x5552,	// (0x000142ca) bg_status_flat_pane_g3

0x555a,	// (0x000142d2) bg_status_flat_pane_g4

0x5562,	// (0x000142da) bg_status_flat_pane_g5

0x556a,	// (0x000142e2) bg_status_flat_pane_g6

0x5572,	// (0x000142ea) bg_status_flat_pane_g7

0x21fc,	// (0x00010f74) tabs_3_active_pane_t1_ParamLimits

0x21fc,	// (0x00010f74) tabs_3_passive_pane_t1_ParamLimits

0x2216,	// (0x00010f8e) tabs_4_active_pane_t1_ParamLimits

0x2216,	// (0x00010f8e) tabs_4_1_passive_pane_t1_ParamLimits

0x32f2,	// (0x0001206a) tabs_2_active_pane_t1_ParamLimits

0x32f2,	// (0x0001206a) tabs_2_passive_pane_t1_ParamLimits

0x3304,	// (0x0001207c) bg_active_tab_pane_cp4_ParamLimits

0x3312,	// (0x0001208a) tabs_2_long_active_pane_t1_ParamLimits

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp4_ParamLimits

0xdd82,	// (0x0001cafa) list_single_midp_graphic_pane_t1_ParamLimits

0x3304,	// (0x0001207c) bg_active_tab_pane_cp5_ParamLimits

0x3331,	// (0x000120a9) tabs_3_long_active_pane_t1_ParamLimits

0x3325,	// (0x0001209d) bg_passive_tab_pane_cp5_ParamLimits

0xdd82,	// (0x0001cafa) list_single_midp_graphic_pane_t1

0x47f6,	// (0x0001356e) bg_status_flat_pane_ParamLimits

0x48b9,	// (0x00013631) indicator_pane_cp2_ParamLimits

0x48b9,	// (0x00013631) indicator_pane_cp2

0x49dd,	// (0x00013755) navi_pane_srt_ParamLimits

0x49dd,	// (0x00013755) navi_pane_srt

0x4a01,	// (0x00013779) popup_clock_digital_analogue_window_cp1

0x22dd,	// (0x00011055) indicator_pane_t1

0x3e0a,	// (0x00012b82) copy_highlight_pane

0x3e0a,	// (0x00012b82) cursor_graphics_pane

0x3e0a,	// (0x00012b82) graphic_within_text_pane

0x3e0a,	// (0x00012b82) link_highlight_pane

0x5d4b,	// (0x00014ac3) popup_preview_text_window_t5_ParamLimits

0x5d4b,	// (0x00014ac3) popup_preview_text_window_t5

0x3f3a,	// (0x00012cb2) cursor_digital_pane

0x3f3a,	// (0x00012cb2) cursor_primary_pane

0x3f4b,	// (0x00012cc3) cursor_primary_small_pane

0x3f53,	// (0x00012ccb) cursor_secondary_pane

0x3f5b,	// (0x00012cd3) cursor_title_pane

0x3f3a,	// (0x00012cb2) link_highlight_digital_pane

0x3f42,	// (0x00012cba) link_highlight_primary_pane

0x3f4b,	// (0x00012cc3) link_highlight_primary_small_pane

0x3f53,	// (0x00012ccb) link_highlight_secondary_pane

0x3f5b,	// (0x00012cd3) link_highlight_title_pane

0x3f3a,	// (0x00012cb2) copy_highlight_digital_pane

0x3f3a,	// (0x00012cb2) copy_highlight_primary_pane

0x3f4b,	// (0x00012cc3) copy_highlight_primary_small_pane

0x3f53,	// (0x00012ccb) copy_highlight_secondary_pane

0x3f5b,	// (0x00012cd3) copy_highlight_title_pane

0x3f53,	// (0x00012ccb) graphic_text_digital_pane

0x55e0,	// (0x00014358) graphic_text_primary_pane

0x55e9,	// (0x00014361) graphic_text_primary_small_pane

0x3f4b,	// (0x00012cc3) graphic_text_secondary_pane

0x3f3a,	// (0x00012cb2) graphic_text_title_pane

0x3f63,	// (0x00012cdb) cursor_primary_pane_g1

0x55d2,	// (0x0001434a) cursor_text_primary_t1

0x55ba,	// (0x00014332) cursor_primary_small_pane_g1

0x55c4,	// (0x0001433c) cursor_text_primary_small_t1

0x55a2,	// (0x0001431a) cursor_primary_small_pane_g1_copy1

0x55ac,	// (0x00014324) cursor_text_primary_small_t1_copy1

0x558a,	// (0x00014302) cursor_text_title_t1

0x5598,	// (0x00014310) cursor_title_pane_g1

0x3f63,	// (0x00012cdb) cursor_digital_pane_g1

0x3f6d,	// (0x00012ce5) cursor_text_digital_t1

0x552b,	// (0x000142a3) link_highlight_primary_pane_g1

0x5533,	// (0x000142ab) link_highlight_primary_pane_t1

0x3f7b,	// (0x00012cf3) link_highlight_primary_small_pane_g1

0x3f83,	// (0x00012cfb) link_highlight_primary_small_pane_t1

0x3f7b,	// (0x00012cf3) link_highlight_secondary_pane_g1

0x3f92,	// (0x00012d0a) link_highlight_secondary_pane_t1

0x549f,	// (0x00014217) link_highlight_title_pane_g1

0x54a7,	// (0x0001421f) link_highlight_title_pane_t1

0x5488,	// (0x00014200) link_highlight_digital_pane_g1

0x5490,	// (0x00014208) link_highlight_digital_pane_t1

0x5360,	// (0x000140d8) copy_highlight_primary_pane_g1

0x5368,	// (0x000140e0) copy_highlight_primary_pane_t1

0x533a,	// (0x000140b2) copy_highlight_primary_small_pane_g1

0x5351,	// (0x000140c9) copy_highlight_primary_small_pane_t1

0x3fa1,	// (0x00012d19) copy_highlight_secondary_pane_g1

0x3fa9,	// (0x00012d21) copy_highlight_secondary_pane_t1

0x533a,	// (0x000140b2) copy_highlight_title_pane_g1

0x5342,	// (0x000140ba) copy_highlight_title_pane_t1

0x5360,	// (0x000140d8) copy_highlight_digital_pane_g1

0x66e6,	// (0x0001545e) copy_highlight_digital_pane_t1

0x663a,	// (0x000153b2) graphic_text_primary_pane_g1

0x66ca,	// (0x00015442) graphic_text_primary_pane_t1

0x66d8,	// (0x00015450) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0001e746) graphic_text_primary_pane_t

0x66a6,	// (0x0001541e) graphic_text_primary_small_pane_g1

0x66ae,	// (0x00015426) graphic_text_primary_small_pane_t1

0x66bc,	// (0x00015434) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0001e741) graphic_text_primary_small_pane_t

0x6682,	// (0x000153fa) graphic_text_secondary_pane_g1

0x668a,	// (0x00015402) graphic_text_secondary_pane_t1

0x6698,	// (0x00015410) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0001e73c) graphic_text_secondary_pane_t

0x665e,	// (0x000153d6) graphic_text_title_pane_g1

0x6666,	// (0x000153de) graphic_text_title_pane_t1

0x6674,	// (0x000153ec) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0001e737) graphic_text_title_pane_t

0x663a,	// (0x000153b2) graphic_text_digital_pane_g1

0x6642,	// (0x000153ba) graphic_text_digital_pane_t1

0x6650,	// (0x000153c8) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0001e732) graphic_text_digital_pane_t

0x21e6,	// (0x00010f5e) navi_icon_pane_srt_ParamLimits

0x21e6,	// (0x00010f5e) navi_icon_pane_srt

0x2106,	// (0x00010e7e) navi_midp_pane_srt

0x2106,	// (0x00010e7e) navi_navi_pane_srt

0x21e6,	// (0x00010f5e) navi_text_pane_srt_ParamLimits

0x21e6,	// (0x00010f5e) navi_text_pane_srt

0x6605,	// (0x0001537d) navi_navi_icon_text_pane_srt

0x661f,	// (0x00015397) navi_navi_pane_srt_g1_ParamLimits

0x661f,	// (0x00015397) navi_navi_pane_srt_g1

0x660d,	// (0x00015385) navi_navi_pane_srt_g2_ParamLimits

0x660d,	// (0x00015385) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0001e72d) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0001e72d) navi_navi_pane_srt_g

0x6631,	// (0x000153a9) navi_navi_tabs_pane_srt

0x6605,	// (0x0001537d) navi_navi_text_pane_srt

0x6605,	// (0x0001537d) navi_navi_volume_pane_srt

0x65f6,	// (0x0001536e) navi_navi_text_pane_srt_t1

0xe102,	// (0x0001ce7a) navi_navi_volume_pane_srt_g1

0xe10a,	// (0x0001ce82) volume_small_pane_srt_ParamLimits

0xe10a,	// (0x0001ce82) volume_small_pane_srt

0xdb1a,	// (0x0001c892) volume_small_pane_srt_g1_ParamLimits

0xdb1a,	// (0x0001c892) volume_small_pane_srt_g1

0xdb2a,	// (0x0001c8a2) volume_small_pane_srt_g2_ParamLimits

0xdb2a,	// (0x0001c8a2) volume_small_pane_srt_g2

0xdb3b,	// (0x0001c8b3) volume_small_pane_srt_g3_ParamLimits

0xdb3b,	// (0x0001c8b3) volume_small_pane_srt_g3

0xdb4c,	// (0x0001c8c4) volume_small_pane_srt_g4_ParamLimits

0xdb4c,	// (0x0001c8c4) volume_small_pane_srt_g4

0xdb5d,	// (0x0001c8d5) volume_small_pane_srt_g5_ParamLimits

0xdb5d,	// (0x0001c8d5) volume_small_pane_srt_g5

0xdb6e,	// (0x0001c8e6) volume_small_pane_srt_g6_ParamLimits

0xdb6e,	// (0x0001c8e6) volume_small_pane_srt_g6

0xdb7f,	// (0x0001c8f7) volume_small_pane_srt_g7_ParamLimits

0xdb7f,	// (0x0001c8f7) volume_small_pane_srt_g7

0xdb90,	// (0x0001c908) volume_small_pane_srt_g8_ParamLimits

0xdb90,	// (0x0001c908) volume_small_pane_srt_g8

0xdba1,	// (0x0001c919) volume_small_pane_srt_g9_ParamLimits

0xdba1,	// (0x0001c919) volume_small_pane_srt_g9

0xdbb2,	// (0x0001c92a) volume_small_pane_srt_g10_ParamLimits

0xdbb2,	// (0x0001c92a) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001e4e8) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001e4e8) volume_small_pane_srt_g

0x25ce,	// (0x00011346) query_popup_data_pane_cp2

0x65dc,	// (0x00015354) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x65dc,	// (0x00015354) navi_navi_icon_text_pane_srt_t1

0x55e0,	// (0x00014358) navi_tabs_2_long_pane_srt

0x55e0,	// (0x00014358) navi_tabs_2_pane_srt

0x55e0,	// (0x00014358) navi_tabs_3_long_pane_srt

0x55e0,	// (0x00014358) navi_tabs_3_pane_srt

0x55e0,	// (0x00014358) navi_tabs_4_pane_srt

0xe0e2,	// (0x0001ce5a) tabs_2_active_pane_srt_ParamLimits

0xe0e2,	// (0x0001ce5a) tabs_2_active_pane_srt

0xe0f2,	// (0x0001ce6a) tabs_2_passive_pane_srt_ParamLimits

0xe0f2,	// (0x0001ce6a) tabs_2_passive_pane_srt

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp1_srt

0x65b1,	// (0x00015329) bg_passive_tab_pane_g1_cp1_srt

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp1_srt

0x65a8,	// (0x00015320) bg_passive_tab_pane_g3_cp1_srt

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp1_srt_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp1_srt

0x65ba,	// (0x00015332) tabs_2_active_pane_srt_g1

0x65c2,	// (0x0001533a) tabs_2_active_pane_srt_t1_ParamLimits

0x65c2,	// (0x0001533a) tabs_2_active_pane_srt_t1

0x65b1,	// (0x00015329) bg_active_tab_pane_g1_cp1_srt

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp1_srt

0x65a8,	// (0x00015320) bg_active_tab_pane_g3_cp1_srt

0xe0af,	// (0x0001ce27) tabs_3_active_pane_srt_ParamLimits

0xe0af,	// (0x0001ce27) tabs_3_active_pane_srt

0xe0c0,	// (0x0001ce38) tabs_3_passive_pane_cp_srt_ParamLimits

0xe0c0,	// (0x0001ce38) tabs_3_passive_pane_cp_srt

0xe0d1,	// (0x0001ce49) tabs_3_passive_pane_srt_ParamLimits

0xe0d1,	// (0x0001ce49) tabs_3_passive_pane_srt

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4190,	// (0x00012f08) bg_passive_tab_pane_cp2_srt

0x3fc1,	// (0x00012d39) bg_passive_tab_pane_g1_cp2_srt

0x3a52,	// (0x000127ca) bg_passive_tab_pane_g2_cp2_srt

0x3fb8,	// (0x00012d30) bg_passive_tab_pane_g3_cp2_srt

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp2_srt_ParamLimits

0x21e6,	// (0x00010f5e) bg_active_tab_pane_cp2_srt

0x658e,	// (0x00015306) tabs_3_active_pane_srt_g1

0x6596,	// (0x0001530e) tabs_3_active_pane_srt_t1_ParamLimits

0x6596,	// (0x0001530e) tabs_3_active_pane_srt_t1

0x3fc1,	// (0x00012d39) bg_active_tab_pane_g1_cp2_srt

0x3a52,	// (0x000127ca) bg_active_tab_pane_g2_cp2_srt

0x3fb8,	// (0x00012d30) bg_active_tab_pane_g3_cp2_srt

0xe067,	// (0x0001cddf) tabs_4_active_pane_srt_ParamLimits

0xe067,	// (0x0001cddf) tabs_4_active_pane_srt

0xe079,	// (0x0001cdf1) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe079,	// (0x0001cdf1) tabs_4_passive_pane_cp2_srt

0x4116,	// (0x00012e8e) aid_size_cell_toolbar

0x3325,	// (0x0001209d) main_idle_act_pane_ParamLimits

0x432f,	// (0x000130a7) popup_large_graphic_colour_window_ParamLimits

0x468e,	// (0x00013406) popup_toolbar_window_ParamLimits

0x468e,	// (0x00013406) popup_toolbar_window

0xcc23,	// (0x0001b99b) list_single_graphic_2heading_pane_ParamLimits

0xcc23,	// (0x0001b99b) list_single_graphic_2heading_pane

0x34e1,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane

0x34f3,	// (0x0001226b) aid_size_cell_apps_grid_prt_pane

0x4190,	// (0x00012f08) bg_wml_button_pane_cp1_ParamLimits

0x4190,	// (0x00012f08) bg_wml_button_pane_cp1

0x4f91,	// (0x00013d09) form_midp_field_text_pane_t1_ParamLimits

0x4d5c,	// (0x00013ad4) input_focus_pane_cp050_ParamLimits

0x4fd0,	// (0x00013d48) list_midp_form_text_pane_ParamLimits

0x4f6e,	// (0x00013ce6) input_focus_pane_cp051_ParamLimits

0x4f82,	// (0x00013cfa) list_midp_choice_pane_ParamLimits

0x4ded,	// (0x00013b65) list_single_2graphic_pane_cp3_ParamLimits

0x4ded,	// (0x00013b65) list_single_2graphic_pane_cp3

0x4e19,	// (0x00013b91) list_single_midp_graphic_pane_ParamLimits

0x4e19,	// (0x00013b91) list_single_midp_graphic_pane

0xc406,	// (0x0001b17e) list_single_graphic_2heading_pane_g1_ParamLimits

0xc406,	// (0x0001b17e) list_single_graphic_2heading_pane_g1

0xc38c,	// (0x0001b104) list_single_graphic_2heading_pane_g4_ParamLimits

0xc38c,	// (0x0001b104) list_single_graphic_2heading_pane_g4

0xc398,	// (0x0001b110) list_single_graphic_2heading_pane_g5_ParamLimits

0xc398,	// (0x0001b110) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001e53b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001e53b) list_single_graphic_2heading_pane_g

0xcad7,	// (0x0001b84f) list_single_graphic_2heading_pane_t1_ParamLimits

0xcad7,	// (0x0001b84f) list_single_graphic_2heading_pane_t1

0xcaeb,	// (0x0001b863) list_single_graphic_2heading_pane_t2_ParamLimits

0xcaeb,	// (0x0001b863) list_single_graphic_2heading_pane_t2

0xcb07,	// (0x0001b87f) list_single_graphic_2heading_pane_t3_ParamLimits

0xcb07,	// (0x0001b87f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001e542) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001e542) list_single_graphic_2heading_pane_t

0x4b5e,	// (0x000138d6) bg_popup_sub_pane_cp2

0x4b88,	// (0x00013900) grid_toobar_pane

0xdd07,	// (0x0001ca7f) cell_toolbar_pane_ParamLimits

0xdd07,	// (0x0001ca7f) cell_toolbar_pane

0x4be6,	// (0x0001395e) cell_toolbar_pane_g1_ParamLimits

0x4be6,	// (0x0001395e) cell_toolbar_pane_g1

0x4bfa,	// (0x00013972) cell_toolbar_pane_g2_ParamLimits

0x4bfa,	// (0x00013972) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0001e549) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0001e549) cell_toolbar_pane_g

0x4c1c,	// (0x00013994) grid_highlight_pane_cp2_ParamLimits

0x4c1c,	// (0x00013994) grid_highlight_pane_cp2

0x4c36,	// (0x000139ae) toolbar_button_pane

0x4c42,	// (0x000139ba) toolbar_button_pane_g1

0x4c52,	// (0x000139ca) toolbar_button_pane_g2

0x4c4a,	// (0x000139c2) toolbar_button_pane_g3

0x4c62,	// (0x000139da) toolbar_button_pane_g4

0x4c5a,	// (0x000139d2) toolbar_button_pane_g5

0x4c6a,	// (0x000139e2) toolbar_button_pane_g6

0x4c72,	// (0x000139ea) toolbar_button_pane_g7

0x4c82,	// (0x000139fa) toolbar_button_pane_g8

0x4c7a,	// (0x000139f2) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0001e54e) toolbar_button_pane_g

0xdd3f,	// (0x0001cab7) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdd3f,	// (0x0001cab7) list_single_2graphic_pane_g1_cp3

0xdd4b,	// (0x0001cac3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdd4b,	// (0x0001cac3) list_single_2graphic_pane_g2_cp3

0x3c36,	// (0x000129ae) list_single_2graphic_pane_g3_cp3

0xdd5c,	// (0x0001cad4) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdd5c,	// (0x0001cad4) list_single_2graphic_pane_g4_cp3

0xdd68,	// (0x0001cae0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xdd68,	// (0x0001cae0) list_single_2graphic_pane_t1_cp3

0x3c2a,	// (0x000129a2) list_single_midp_graphic_pane_g2_ParamLimits

0x3c2a,	// (0x000129a2) list_single_midp_graphic_pane_g2

0x4126,	// (0x00012e9e) aid_zoom_text_primary

0xcaab,	// (0x0001b823) aid_zoom_text_secondary

0x4075,	// (0x00012ded) status_small_pane_g7_ParamLimits

0x4075,	// (0x00012ded) status_small_pane_g7

0x4098,	// (0x00012e10) status_small_pane_t1_ParamLimits

0x211d,	// (0x00010e95) title_pane_g2

0x0003,

0xf56a,	// (0x0001e2e2) title_pane_g

0x266f,	// (0x000113e7) aid_size_cell_colour_1_pane_ParamLimits

0x266f,	// (0x000113e7) aid_size_cell_colour_1_pane

0x2683,	// (0x000113fb) aid_size_cell_colour_2_pane_ParamLimits

0x2683,	// (0x000113fb) aid_size_cell_colour_2_pane

0x2697,	// (0x0001140f) aid_size_cell_colour_3_pane_ParamLimits

0x2697,	// (0x0001140f) aid_size_cell_colour_3_pane

0x26ab,	// (0x00011423) aid_size_cell_colour_4_pane_ParamLimits

0x26ab,	// (0x00011423) aid_size_cell_colour_4_pane

0xd776,	// (0x0001c4ee) title_pane_stacon_g1_ParamLimits

0xd776,	// (0x0001c4ee) title_pane_stacon_g1

0x53bf,	// (0x00014137) popup_note_wait_window_g3_ParamLimits

0x53bf,	// (0x00014137) popup_note_wait_window_g3

0x5435,	// (0x000141ad) popup_note_wait_window_t5_ParamLimits

0x5435,	// (0x000141ad) popup_note_wait_window_t5

0x2106,	// (0x00010e7e) main_feb_china_hwr_fs_writing_pane

0x421a,	// (0x00012f92) popup_feb_china_hwr_fs_window_ParamLimits

0x421a,	// (0x00012f92) popup_feb_china_hwr_fs_window

0xdd98,	// (0x0001cb10) aid_size_cell_hwr_fs_ParamLimits

0xdd98,	// (0x0001cb10) aid_size_cell_hwr_fs

0x4d5c,	// (0x00013ad4) bg_popup_sub_pane_cp3_ParamLimits

0x4d5c,	// (0x00013ad4) bg_popup_sub_pane_cp3

0xddad,	// (0x0001cb25) grid_hwr_fs_pane_ParamLimits

0xddad,	// (0x0001cb25) grid_hwr_fs_pane

0xddc5,	// (0x0001cb3d) linegrid_hwr_fs_pane_ParamLimits

0xddc5,	// (0x0001cb3d) linegrid_hwr_fs_pane

0xddd5,	// (0x0001cb4d) cell_hwr_fs_pane_ParamLimits

0xddd5,	// (0x0001cb4d) cell_hwr_fs_pane

0x4d68,	// (0x00013ae0) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d68,	// (0x00013ae0) linegrid_hwr_fs_pane_g1

0x4d74,	// (0x00013aec) linegrid_hwr_fs_pane_g2_ParamLimits

0x4d74,	// (0x00013aec) linegrid_hwr_fs_pane_g2

0x4d86,	// (0x00013afe) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d86,	// (0x00013afe) linegrid_hwr_fs_pane_g3

0xddf7,	// (0x0001cb6f) linegrid_hwr_fs_pane_g4_ParamLimits

0xddf7,	// (0x0001cb6f) linegrid_hwr_fs_pane_g4

0xde11,	// (0x0001cb89) linegrid_hwr_fs_pane_g5_ParamLimits

0xde11,	// (0x0001cb89) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0001e574) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001e574) linegrid_hwr_fs_pane_g

0x4d92,	// (0x00013b0a) cell_hwr_fs_pane_g1_ParamLimits

0x4d92,	// (0x00013b0a) cell_hwr_fs_pane_g1

0x4a97,	// (0x0001380f) cell_hwr_fs_pane_g2_ParamLimits

0x4a97,	// (0x0001380f) cell_hwr_fs_pane_g2

0x4da8,	// (0x00013b20) cell_hwr_fs_pane_g3_ParamLimits

0x4da8,	// (0x00013b20) cell_hwr_fs_pane_g3

0x4db5,	// (0x00013b2d) cell_hwr_fs_pane_g4_ParamLimits

0x4db5,	// (0x00013b2d) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0001e57f) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0001e57f) cell_hwr_fs_pane_g

0xde27,	// (0x0001cb9f) cell_hwr_fs_pane_t1

0x2106,	// (0x00010e7e) grid_highlight_pane_cp6

0x2106,	// (0x00010e7e) main_idle_act2_pane

0x3299,	// (0x00012011) aid_inside_area_popup_secondary

0x5a66,	// (0x000147de) aid_inside_area_window_primary_ParamLimits

0x5a66,	// (0x000147de) aid_inside_area_window_primary

0x66f5,	// (0x0001546d) ai2_news_ticker_pane

0x66fd,	// (0x00015475) aid_size_cell_ai1_link_ParamLimits

0x66fd,	// (0x00015475) aid_size_cell_ai1_link

0x6717,	// (0x0001548f) popup_ai2_data_window_ParamLimits

0x6717,	// (0x0001548f) popup_ai2_data_window

0x672b,	// (0x000154a3) popup_ai2_link_window_ParamLimits

0x672b,	// (0x000154a3) popup_ai2_link_window

0x4d5c,	// (0x00013ad4) bg_popup_sub_pane_cp4_ParamLimits

0x4d5c,	// (0x00013ad4) bg_popup_sub_pane_cp4

0x673f,	// (0x000154b7) grid_ai2_link_pane_ParamLimits

0x673f,	// (0x000154b7) grid_ai2_link_pane

0x6756,	// (0x000154ce) popup_ai2_link_window_g1_ParamLimits

0x6756,	// (0x000154ce) popup_ai2_link_window_g1

0x6762,	// (0x000154da) popup_ai2_link_window_g2_ParamLimits

0x6762,	// (0x000154da) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0001e74b) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0001e74b) popup_ai2_link_window_g

0x6771,	// (0x000154e9) ai2_mp_button_pane

0x6779,	// (0x000154f1) ai2_mp_volume_pane

0x4f6e,	// (0x00013ce6) bg_popup_sub_pane_cp5_ParamLimits

0x4f6e,	// (0x00013ce6) bg_popup_sub_pane_cp5

0x6781,	// (0x000154f9) heading_ai2_gene_pane_ParamLimits

0x6781,	// (0x000154f9) heading_ai2_gene_pane

0x678d,	// (0x00015505) list_ai2_gene_pane_ParamLimits

0x678d,	// (0x00015505) list_ai2_gene_pane

0x67d5,	// (0x0001554d) cell_ai2_link_pane_ParamLimits

0x67d5,	// (0x0001554d) cell_ai2_link_pane

0x67eb,	// (0x00015563) cell_ai2_link_pane_g1

0x2106,	// (0x00010e7e) grid_highlight_pane_cp7

0xe11f,	// (0x0001ce97) ai2_mp_volume_pane_g1

0x68c4,	// (0x0001563c) ai2_mp_volume_pane_g2

0x6831,	// (0x000155a9) list_ai2_gene_pane_t1

0x68bc,	// (0x00015634) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0001e764) ai2_mp_volume_pane_g

0xe127,	// (0x0001ce9f) volume_small_pane_cp3

0x68cc,	// (0x00015644) aid_size_cell_ai2_button

0x68d4,	// (0x0001564c) grid_ai2_button_pane

0x68dd,	// (0x00015655) cell_ai2_button_pane_ParamLimits

0x68dd,	// (0x00015655) cell_ai2_button_pane

0x20fc,	// (0x00010e74) cell_ai2_button_pane_g1

0x2106,	// (0x00010e7e) grid_highlight_pane_cp8

0x687c,	// (0x000155f4) ai2_gene_pane_t1_ParamLimits

0x687c,	// (0x000155f4) ai2_gene_pane_t1

0x410c,	// (0x00012e84) aid_height_parent_landscape

0x611d,	// (0x00014e95) aid_height_set_list

0x612e,	// (0x00014ea6) aid_size_parent

0x6518,	// (0x00015290) aid_size_cell_graphic_pane_ParamLimits

0x679d,	// (0x00015515) popup_ai2_data_window_g1_ParamLimits

0x679d,	// (0x00015515) popup_ai2_data_window_g1

0x67a9,	// (0x00015521) ai2_news_ticker_pane_g1

0x67b1,	// (0x00015529) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0001e750) ai2_news_ticker_pane_g

0x67b9,	// (0x00015531) ai2_news_ticker_pane_t1

0x67c7,	// (0x0001553f) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0001e755) ai2_news_ticker_pane_t

0x67f4,	// (0x0001556c) heading_ai2_gene_pane_g1

0x67fc,	// (0x00015574) heading_ai2_gene_pane_t1_ParamLimits

0x67fc,	// (0x00015574) heading_ai2_gene_pane_t1

0x6811,	// (0x00015589) list_highlight_pane_cp6

0x6819,	// (0x00015591) ai2_gene_pane_ParamLimits

0x6819,	// (0x00015591) ai2_gene_pane

0x683f,	// (0x000155b7) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0001e75a) list_ai2_gene_pane_t

0x684d,	// (0x000155c5) list_highlight_pane_cp8_ParamLimits

0x684d,	// (0x000155c5) list_highlight_pane_cp8

0x685e,	// (0x000155d6) ai2_gene_pane_g1_ParamLimits

0x685e,	// (0x000155d6) ai2_gene_pane_g1

0x6870,	// (0x000155e8) ai2_gene_pane_g2_ParamLimits

0x6870,	// (0x000155e8) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0001e75f) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0001e75f) ai2_gene_pane_g

0x29e9,	// (0x00011761) scroll_pane_cp12

0xdcc6,	// (0x0001ca3e) control_pane_t3_ParamLimits

0xdcc6,	// (0x0001ca3e) control_pane_t3

0x4089,	// (0x00012e01) status_small_pane_g8_ParamLimits

0x4089,	// (0x00012e01) status_small_pane_g8

0x42fc,	// (0x00013074) popup_find_window_ParamLimits

0x450f,	// (0x00013287) popup_note_image_window_ParamLimits

0xc406,	// (0x0001b17e) list_double2_graphic_pane_vc_g1_ParamLimits

0xc406,	// (0x0001b17e) list_double2_graphic_pane_vc_g1

0xc38c,	// (0x0001b104) list_double2_graphic_pane_vc_g2_ParamLimits

0xc38c,	// (0x0001b104) list_double2_graphic_pane_vc_g2

0xc398,	// (0x0001b110) list_double2_graphic_pane_vc_g3_ParamLimits

0xc398,	// (0x0001b110) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e53b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e53b) list_double2_graphic_pane_vc_g

0xcb1f,	// (0x0001b897) list_double2_graphic_pane_vc_t1_ParamLimits

0xcb1f,	// (0x0001b897) list_double2_graphic_pane_vc_t1

0xc38c,	// (0x0001b104) list_single_heading_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_heading_pane_vc_g1

0xc398,	// (0x0001b110) list_single_heading_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_heading_pane_vc_g

0xcb35,	// (0x0001b8ad) list_single_heading_pane_vc_t1_ParamLimits

0xcb35,	// (0x0001b8ad) list_single_heading_pane_vc_t1

0xcb4b,	// (0x0001b8c3) list_single_heading_pane_vc_t2_ParamLimits

0xcb4b,	// (0x0001b8c3) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0001e563) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0001e563) list_single_heading_pane_vc_t

0x4cb4,	// (0x00013a2c) list_setting_number_pane_vc_g1_ParamLimits

0x4cb4,	// (0x00013a2c) list_setting_number_pane_vc_g1

0x4cc0,	// (0x00013a38) list_setting_number_pane_vc_g2_ParamLimits

0x4cc0,	// (0x00013a38) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e568) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e568) list_setting_number_pane_vc_g

0x4ccc,	// (0x00013a44) list_setting_number_pane_vc_t1_ParamLimits

0x4ccc,	// (0x00013a44) list_setting_number_pane_vc_t1

0x4ce0,	// (0x00013a58) list_setting_number_pane_vc_t2_ParamLimits

0x4ce0,	// (0x00013a58) list_setting_number_pane_vc_t2

0x4cfc,	// (0x00013a74) list_setting_number_pane_vc_t3_ParamLimits

0x4cfc,	// (0x00013a74) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0001e56d) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0001e56d) list_setting_number_pane_vc_t

0x4d24,	// (0x00013a9c) set_value_pane_vc_ParamLimits

0x4d24,	// (0x00013a9c) set_value_pane_vc

0xcc23,	// (0x0001b99b) list_double2_graphic_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double2_graphic_pane_vc

0x6330,	// (0x000150a8) list_double2_large_graphic_pane_vc_ParamLimits

0x6330,	// (0x000150a8) list_double2_large_graphic_pane_vc

0xcc23,	// (0x0001b99b) list_double2_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double2_pane_vc

0xcc23,	// (0x0001b99b) list_double_graphic_heading_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_graphic_heading_pane_vc

0xcc23,	// (0x0001b99b) list_double_graphic_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_graphic_pane_vc

0xcc23,	// (0x0001b99b) list_double_heading_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_heading_pane_vc

0x6330,	// (0x000150a8) list_double_large_graphic_pane_vc_ParamLimits

0x6330,	// (0x000150a8) list_double_large_graphic_pane_vc

0xcc23,	// (0x0001b99b) list_double_number_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_number_pane_vc

0xcc23,	// (0x0001b99b) list_double_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_pane_vc

0xcc23,	// (0x0001b99b) list_double_time_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_double_time_pane_vc

0xcc23,	// (0x0001b99b) list_setting_number_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_setting_number_pane_vc

0xcc23,	// (0x0001b99b) list_setting_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_setting_pane_vc

0xcc23,	// (0x0001b99b) list_single_graphic_heading_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_single_graphic_heading_pane_vc

0xcc23,	// (0x0001b99b) list_single_heading_pane_vc_ParamLimits

0xcc23,	// (0x0001b99b) list_single_heading_pane_vc

0xcc37,	// (0x0001b9af) list_single_number_heading_pane_vc_ParamLimits

0xcc37,	// (0x0001b9af) list_single_number_heading_pane_vc

0xc406,	// (0x0001b17e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc406,	// (0x0001b17e) list_double_graphic_heading_pane_vc_g1

0xc38c,	// (0x0001b104) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc38c,	// (0x0001b104) list_double_graphic_heading_pane_vc_g2

0xc398,	// (0x0001b110) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc398,	// (0x0001b110) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0001e53b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e53b) list_double_graphic_heading_pane_vc_g

0xccf4,	// (0x0001ba6c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xccf4,	// (0x0001ba6c) list_double_graphic_heading_pane_vc_t1

0xcb35,	// (0x0001b8ad) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xcb35,	// (0x0001b8ad) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e76b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0001e76b) list_double_graphic_heading_pane_vc_t

0x4cb4,	// (0x00013a2c) list_setting_pane_vc_g1_ParamLimits

0x4cb4,	// (0x00013a2c) list_setting_pane_vc_g1

0x4cc0,	// (0x00013a38) list_setting_pane_vc_g2_ParamLimits

0x4cc0,	// (0x00013a38) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0001e568) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0001e568) list_setting_pane_vc_g

0x6b09,	// (0x00015881) list_setting_pane_vc_t1_ParamLimits

0x6b09,	// (0x00015881) list_setting_pane_vc_t1

0x6b1d,	// (0x00015895) list_setting_pane_vc_t2_ParamLimits

0x6b1d,	// (0x00015895) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0001e7ae) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0001e7ae) list_setting_pane_vc_t

0x4d24,	// (0x00013a9c) set_value_pane_cp_vc_ParamLimits

0x4d24,	// (0x00013a9c) set_value_pane_cp_vc

0xc38c,	// (0x0001b104) list_single_number_heading_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_single_number_heading_pane_vc_g1

0xc398,	// (0x0001b110) list_single_number_heading_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_single_number_heading_pane_vc_g

0xcb35,	// (0x0001b8ad) list_single_number_heading_pane_vc_t1_ParamLimits

0xcb35,	// (0x0001b8ad) list_single_number_heading_pane_vc_t1

0xcd08,	// (0x0001ba80) list_single_number_heading_pane_vc_t2_ParamLimits

0xcd08,	// (0x0001ba80) list_single_number_heading_pane_vc_t2

0xc3f4,	// (0x0001b16c) list_single_number_heading_pane_vc_t3_ParamLimits

0xc3f4,	// (0x0001b16c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001e7b3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001e7b3) list_single_number_heading_pane_vc_t

0xc406,	// (0x0001b17e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc406,	// (0x0001b17e) list_single_graphic_heading_pane_vc_g1

0xc38c,	// (0x0001b104) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc38c,	// (0x0001b104) list_single_graphic_heading_pane_vc_g4

0xc398,	// (0x0001b110) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc398,	// (0x0001b110) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0001e53b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0001e53b) list_single_graphic_heading_pane_vc_g

0xcb35,	// (0x0001b8ad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xcb35,	// (0x0001b8ad) list_single_graphic_heading_pane_vc_t1

0xcd1c,	// (0x0001ba94) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcd1c,	// (0x0001ba94) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0001e7ba) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001e7ba) list_single_graphic_heading_pane_vc_t

0xc38c,	// (0x0001b104) list_double2_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_double2_pane_vc_g1

0xc398,	// (0x0001b110) list_double2_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_double2_pane_vc_g

0xcbeb,	// (0x0001b963) list_double2_pane_vc_t1_ParamLimits

0xcbeb,	// (0x0001b963) list_double2_pane_vc_t1

0xcd30,	// (0x0001baa8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcd30,	// (0x0001baa8) list_double2_large_graphic_pane_vc_g1

0xcd3c,	// (0x0001bab4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcd3c,	// (0x0001bab4) list_double2_large_graphic_pane_vc_g2

0xcd48,	// (0x0001bac0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcd48,	// (0x0001bac0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0001e7bf) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0001e7bf) list_double2_large_graphic_pane_vc_g

0xcd54,	// (0x0001bacc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcd54,	// (0x0001bacc) list_double2_large_graphic_pane_vc_t1

0xcd6a,	// (0x0001bae2) list_double_time_pane_vc_g1_ParamLimits

0xcd6a,	// (0x0001bae2) list_double_time_pane_vc_g1

0xcd76,	// (0x0001baee) list_double_time_pane_vc_g2_ParamLimits

0xcd76,	// (0x0001baee) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001e7c6) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001e7c6) list_double_time_pane_vc_g

0xcd82,	// (0x0001bafa) list_double_time_pane_vc_t1_ParamLimits

0xcd82,	// (0x0001bafa) list_double_time_pane_vc_t1

0xcd9b,	// (0x0001bb13) list_double_time_pane_vc_t2_ParamLimits

0xcd9b,	// (0x0001bb13) list_double_time_pane_vc_t2

0xcddb,	// (0x0001bb53) list_double_time_pane_vc_t3_ParamLimits

0xcddb,	// (0x0001bb53) list_double_time_pane_vc_t3

0xcdf3,	// (0x0001bb6b) list_double_time_pane_vc_t4_ParamLimits

0xcdf3,	// (0x0001bb6b) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001e7cb) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001e7cb) list_double_time_pane_vc_t

0xc38c,	// (0x0001b104) list_double_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_double_pane_vc_g1

0xc398,	// (0x0001b110) list_double_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_double_pane_vc_g

0xce07,	// (0x0001bb7f) list_double_pane_vc_t1_ParamLimits

0xce07,	// (0x0001bb7f) list_double_pane_vc_t1

0xce19,	// (0x0001bb91) list_double_pane_vc_t2_ParamLimits

0xce19,	// (0x0001bb91) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001e7d4) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001e7d4) list_double_pane_vc_t

0xc38c,	// (0x0001b104) list_double_number_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_double_number_pane_vc_g1

0xc398,	// (0x0001b110) list_double_number_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_double_number_pane_vc_g

0xce31,	// (0x0001bba9) list_double_number_pane_vc_t1_ParamLimits

0xce31,	// (0x0001bba9) list_double_number_pane_vc_t1

0xce45,	// (0x0001bbbd) list_double_number_pane_vc_t2_ParamLimits

0xce45,	// (0x0001bbbd) list_double_number_pane_vc_t2

0xce19,	// (0x0001bb91) list_double_number_pane_vc_t3_ParamLimits

0xce19,	// (0x0001bb91) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001e7d9) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001e7d9) list_double_number_pane_vc_t

0xce57,	// (0x0001bbcf) list_double_large_graphic_pane_vc_g1_ParamLimits

0xce57,	// (0x0001bbcf) list_double_large_graphic_pane_vc_g1

0xce63,	// (0x0001bbdb) list_double_large_graphic_pane_vc_g2_ParamLimits

0xce63,	// (0x0001bbdb) list_double_large_graphic_pane_vc_g2

0xcd48,	// (0x0001bac0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcd48,	// (0x0001bac0) list_double_large_graphic_pane_vc_g3

0xce72,	// (0x0001bbea) list_double_large_graphic_pane_vc_g4_ParamLimits

0xce72,	// (0x0001bbea) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001e7e0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001e7e0) list_double_large_graphic_pane_vc_g

0xce7e,	// (0x0001bbf6) list_double_large_graphic_pane_vc_t1_ParamLimits

0xce7e,	// (0x0001bbf6) list_double_large_graphic_pane_vc_t1

0xce90,	// (0x0001bc08) list_double_large_graphic_pane_vc_t2_ParamLimits

0xce90,	// (0x0001bc08) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001e7e9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001e7e9) list_double_large_graphic_pane_vc_t

0xc38c,	// (0x0001b104) list_double_heading_pane_vc_g1_ParamLimits

0xc38c,	// (0x0001b104) list_double_heading_pane_vc_g1

0xc398,	// (0x0001b110) list_double_heading_pane_vc_g2_ParamLimits

0xc398,	// (0x0001b110) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001e35c) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001e35c) list_double_heading_pane_vc_g

0xcea9,	// (0x0001bc21) list_double_heading_pane_vc_t1_ParamLimits

0xcea9,	// (0x0001bc21) list_double_heading_pane_vc_t1

0xcb35,	// (0x0001b8ad) list_double_heading_pane_vc_t2_ParamLimits

0xcb35,	// (0x0001b8ad) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001e7ee) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001e7ee) list_double_heading_pane_vc_t

0xcebd,	// (0x0001bc35) list_double_graphic_pane_vc_g1_ParamLimits

0xcebd,	// (0x0001bc35) list_double_graphic_pane_vc_g1

0xcecd,	// (0x0001bc45) list_double_graphic_pane_vc_g2_ParamLimits

0xcecd,	// (0x0001bc45) list_double_graphic_pane_vc_g2

0xcedc,	// (0x0001bc54) list_double_graphic_pane_vc_g3_ParamLimits

0xcedc,	// (0x0001bc54) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001e7f3) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001e7f3) list_double_graphic_pane_vc_g

0xcee8,	// (0x0001bc60) list_double_graphic_pane_vc_t1_ParamLimits

0xcee8,	// (0x0001bc60) list_double_graphic_pane_vc_t1

0xce19,	// (0x0001bb91) list_double_graphic_pane_vc_t2_ParamLimits

0xce19,	// (0x0001bb91) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0001e7fa) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0001e7fa) list_double_graphic_pane_vc_t

0xd2f4,	// (0x0001c06c) aid_size_cell_fastswap

0xd2fc,	// (0x0001c074) aid_size_cell_touch_ParamLimits

0xd2fc,	// (0x0001c074) aid_size_cell_touch

0xd557,	// (0x0001c2cf) popup_fast_swap_wide_window_ParamLimits

0xd557,	// (0x0001c2cf) popup_fast_swap_wide_window

0xd64d,	// (0x0001c3c5) touch_pane_ParamLimits

0xd64d,	// (0x0001c3c5) touch_pane

0x2ee7,	// (0x00011c5f) button_value_adjust_pane_cp2

0xc7d6,	// (0x0001b54e) button_value_adjust_pane_cp4

0xc7f6,	// (0x0001b56e) form_field_data_pane_cp2

0xc815,	// (0x0001b58d) form_field_data_wide_pane_cp2

0x35b4,	// (0x0001232c) bg_scroll_pane_ParamLimits

0xd8d9,	// (0x0001c651) scroll_handle_pane_ParamLimits

0xd8ed,	// (0x0001c665) scroll_sc2_down_pane_ParamLimits

0xd8ed,	// (0x0001c665) scroll_sc2_down_pane

0x35e5,	// (0x0001235d) scroll_sc2_up_pane_ParamLimits

0x35e5,	// (0x0001235d) scroll_sc2_up_pane

0x714c,	// (0x00015ec4) grid_wheel_folder_pane_g1_ParamLimits

0x714c,	// (0x00015ec4) grid_wheel_folder_pane_g1

0xdab2,	// (0x0001c82a) clock_nsta_pane_cp2_ParamLimits

0xdab2,	// (0x0001c82a) clock_nsta_pane_cp2

0x3e12,	// (0x00012b8a) listscroll_midp_pane_ParamLimits

0x3e1e,	// (0x00012b96) midp_canvas_pane

0x4104,	// (0x00012e7c) nsta_clock_indic_pane

0x4162,	// (0x00012eda) listscroll_form_pane_vc

0x417e,	// (0x00012ef6) listscroll_set_pane_vc_ParamLimits

0x417e,	// (0x00012ef6) listscroll_set_pane_vc

0x4812,	// (0x0001358a) clock_nsta_pane

0x4887,	// (0x000135ff) indicator_nsta_pane

0x4b5e,	// (0x000138d6) bg_popup_sub_pane_cp2_ParamLimits

0x4b72,	// (0x000138ea) find_pane_cp2_ParamLimits

0x4b72,	// (0x000138ea) find_pane_cp2

0x4b88,	// (0x00013900) grid_toobar_pane_ParamLimits

0x4d30,	// (0x00013aa8) list_form_gen_pane_vc_ParamLimits

0x4d30,	// (0x00013aa8) list_form_gen_pane_vc

0x4d46,	// (0x00013abe) scroll_pane_cp8_vc_ParamLimits

0x4d46,	// (0x00013abe) scroll_pane_cp8_vc

0x4dc2,	// (0x00013b3a) data_form_wide_pane_vc_ParamLimits

0x4dc2,	// (0x00013b3a) data_form_wide_pane_vc

0x4dce,	// (0x00013b46) form_field_data_wide_pane_vc_g1

0x4dd6,	// (0x00013b4e) form_field_data_wide_pane_vc_t1_ParamLimits

0x4dd6,	// (0x00013b4e) form_field_data_wide_pane_vc_t1

0x2fbf,	// (0x00011d37) input_focus_pane_cp6_vc_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_cp6_vc

0x513f,	// (0x00013eb7) list_midp_pane_ParamLimits

0x514b,	// (0x00013ec3) scroll_pane_cp16_ParamLimits

0x514b,	// (0x00013ec3) scroll_pane_cp16

0x5199,	// (0x00013f11) button_value_adjust_pane_ParamLimits

0x5199,	// (0x00013f11) button_value_adjust_pane

0x6140,	// (0x00014eb8) button_value_adjust_pane_cp6_ParamLimits

0x6140,	// (0x00014eb8) button_value_adjust_pane_cp6

0x6262,	// (0x00014fda) settings_code_pane_cp_ParamLimits

0x6262,	// (0x00014fda) settings_code_pane_cp

0x20fc,	// (0x00010e74) cell_touch_pane_g1

0x20fc,	// (0x00010e74) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001e492) cell_touch_pane_g

0x68ef,	// (0x00015667) cell_touch_pane_cp_ParamLimits

0x68ef,	// (0x00015667) cell_touch_pane_cp

0x68ff,	// (0x00015677) cell_touch_pane_ParamLimits

0x68ff,	// (0x00015677) cell_touch_pane

0x20fc,	// (0x00010e74) scroll_sc2_down_pane_g1

0x20fc,	// (0x00010e74) scroll_sc2_up_pane_g1

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp4_vc

0x6925,	// (0x0001569d) list_set_graphic_pane_vc_g1_ParamLimits

0x6925,	// (0x0001569d) list_set_graphic_pane_vc_g1

0x6931,	// (0x000156a9) list_set_graphic_pane_vc_g2_ParamLimits

0x6931,	// (0x000156a9) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0001e770) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0001e770) list_set_graphic_pane_vc_g

0x693d,	// (0x000156b5) text_primary_small_cp13_vc_ParamLimits

0x693d,	// (0x000156b5) text_primary_small_cp13_vc

0x6955,	// (0x000156cd) list_set_graphic_pane_vc_ParamLimits

0x6955,	// (0x000156cd) list_set_graphic_pane_vc

0x2106,	// (0x00010e7e) input_focus_pane_cp2_vc

0x20fc,	// (0x00010e74) setting_code_pane_vc_g1

0x6969,	// (0x000156e1) setting_code_pane_vc_t1

0x6977,	// (0x000156ef) set_text_pane_vc_t1_ParamLimits

0x6977,	// (0x000156ef) set_text_pane_vc_t1

0x2106,	// (0x00010e7e) input_focus_pane_cp1_vc

0x6996,	// (0x0001570e) list_set_text_pane_vc

0x20fc,	// (0x00010e74) setting_text_pane_vc_g1

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp2_vc

0x69a0,	// (0x00015718) setting_slider_graphic_pane_vc_g1

0x69a8,	// (0x00015720) setting_slider_graphic_pane_vc_t1

0x69b6,	// (0x0001572e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0001e775) setting_slider_graphic_pane_vc_t

0x69c4,	// (0x0001573c) slider_set_pane_cp_vc

0x69cc,	// (0x00015744) slider_set_pane_vc_g1

0x69d5,	// (0x0001574d) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0001e77a) slider_set_pane_vc_g

0x30fb,	// (0x00011e73) set_opt_bg_pane_g1_copy1

0x3103,	// (0x00011e7b) set_opt_bg_pane_g2_copy1

0x6a01,	// (0x00015779) set_opt_bg_pane_g3_copy1

0x3113,	// (0x00011e8b) set_opt_bg_pane_g4_copy1

0x311b,	// (0x00011e93) set_opt_bg_pane_g5_copy1

0x3123,	// (0x00011e9b) set_opt_bg_pane_g6_copy1

0x6a09,	// (0x00015781) set_opt_bg_pane_g7_copy1

0x6a13,	// (0x0001578b) set_opt_bg_pane_g8_copy1

0x6a1b,	// (0x00015793) set_opt_bg_pane_g9_copy1

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp_vc

0x6a23,	// (0x0001579b) setting_slider_pane_vc_t1

0x69a8,	// (0x00015720) setting_slider_pane_vc_t2

0x69b6,	// (0x0001572e) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0001e789) setting_slider_pane_vc_t

0x69c4,	// (0x0001573c) slider_set_pane_vc

0xde35,	// (0x0001cbad) volume_set_pane_vc_g1

0xe130,	// (0x0001cea8) volume_set_pane_vc_g2

0xe139,	// (0x0001ceb1) volume_set_pane_vc_g3

0xe142,	// (0x0001ceba) volume_set_pane_vc_g4

0xe14b,	// (0x0001cec3) volume_set_pane_vc_g5

0xe154,	// (0x0001cecc) volume_set_pane_vc_g6

0xe15d,	// (0x0001ced5) volume_set_pane_vc_g7

0xe166,	// (0x0001cede) volume_set_pane_vc_g8

0xe16f,	// (0x0001cee7) volume_set_pane_vc_g9

0xe178,	// (0x0001cef0) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0001e790) volume_set_pane_vc_g

0x6a32,	// (0x000157aa) volume_set_pane_vc

0x6a3a,	// (0x000157b2) button_value_adjust_pane_cp1_vc

0x6a44,	// (0x000157bc) list_highlight_pane_cp2_vc

0x6a4d,	// (0x000157c5) list_set_pane_vc_ParamLimits

0x6a4d,	// (0x000157c5) list_set_pane_vc

0x6a9f,	// (0x00015817) main_pane_set_vc_t1_ParamLimits

0x6a9f,	// (0x00015817) main_pane_set_vc_t1

0x6ab4,	// (0x0001582c) main_pane_set_vc_t2_ParamLimits

0x6ab4,	// (0x0001582c) main_pane_set_vc_t2

0x6ac6,	// (0x0001583e) main_pane_set_vc_t3_ParamLimits

0x6ac6,	// (0x0001583e) main_pane_set_vc_t3

0x6ad8,	// (0x00015850) main_pane_set_vc_t4_ParamLimits

0x6ad8,	// (0x00015850) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0001e7a5) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0001e7a5) main_pane_set_vc_t

0x6aea,	// (0x00015862) setting_code_pane_vc_ParamLimits

0x6aea,	// (0x00015862) setting_code_pane_vc

0x6af9,	// (0x00015871) setting_slider_graphic_pane_vc

0x6af9,	// (0x00015871) setting_slider_pane_vc

0x6af9,	// (0x00015871) setting_text_pane_vc

0x6af9,	// (0x00015871) setting_volume_pane_vc

0x6b01,	// (0x00015879) scroll_pane_cp121_vc

0x2ed5,	// (0x00011c4d) set_content_pane_vc

0x6d11,	// (0x00015a89) button_value_adjust_pane_g1

0x6d1a,	// (0x00015a92) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x0001e7ff) button_value_adjust_pane_g

0x6d23,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d23,	// (0x00015a9b) form_field_slider_wide_pane_vc_t1

0x6d37,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d37,	// (0x00015aaf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x0001e804) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001e804) form_field_slider_wide_pane_vc_t

0x247b,	// (0x000111f3) input_focus_pane_cp10_vc_ParamLimits

0x247b,	// (0x000111f3) input_focus_pane_cp10_vc

0x6d49,	// (0x00015ac1) slider_cont_pane_cp1_vc_ParamLimits

0x6d49,	// (0x00015ac1) slider_cont_pane_cp1_vc

0x69cc,	// (0x00015744) slider_form_pane_g1_cp2

0x69d5,	// (0x0001574d) slider_form_pane_g2_cp2

0x6d62,	// (0x00015ada) form_field_slider_pane_vc_t3

0x6d70,	// (0x00015ae8) form_field_slider_pane_vc_t4

0x6d7e,	// (0x00015af6) slider_form_pane_vc_ParamLimits

0x6d7e,	// (0x00015af6) slider_form_pane_vc

0x6d8b,	// (0x00015b03) form_field_slider_pane_vc_t1_ParamLimits

0x6d8b,	// (0x00015b03) form_field_slider_pane_vc_t1

0x6d37,	// (0x00015aaf) form_field_slider_pane_vc_t2_ParamLimits

0x6d37,	// (0x00015aaf) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001e814) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001e814) form_field_slider_pane_vc_t

0x247b,	// (0x000111f3) input_focus_pane_cp9_vc_ParamLimits

0x247b,	// (0x000111f3) input_focus_pane_cp9_vc

0x6da7,	// (0x00015b1f) slider_cont_pane_vc_ParamLimits

0x6da7,	// (0x00015b1f) slider_cont_pane_vc

0x6db9,	// (0x00015b31) list_form_graphic_pane_cp_vc_ParamLimits

0x6db9,	// (0x00015b31) list_form_graphic_pane_cp_vc

0x4dce,	// (0x00013b46) form_field_popup_wide_pane_vc_g1

0x6dce,	// (0x00015b46) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6dce,	// (0x00015b46) form_field_popup_wide_pane_vc_t1

0x2fbf,	// (0x00011d37) input_focus_pane_cp8_vc_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_cp8_vc

0x6de5,	// (0x00015b5d) list_form_wide_pane_vc_ParamLimits

0x6de5,	// (0x00015b5d) list_form_wide_pane_vc

0x6df1,	// (0x00015b69) list_form_graphic_pane_vc_g1

0x6df9,	// (0x00015b71) list_form_graphic_pane_vc_t1_ParamLimits

0x6df9,	// (0x00015b71) list_form_graphic_pane_vc_t1

0x21e6,	// (0x00010f5e) list_highlight_pane_cp5_vc_ParamLimits

0x21e6,	// (0x00010f5e) list_highlight_pane_cp5_vc

0x6e15,	// (0x00015b8d) list_form_graphic_pane_vc_ParamLimits

0x6e15,	// (0x00015b8d) list_form_graphic_pane_vc

0x4dce,	// (0x00013b46) form_field_popup_pane_vc_g1

0x6e2b,	// (0x00015ba3) form_field_popup_pane_vc_t1_ParamLimits

0x6e2b,	// (0x00015ba3) form_field_popup_pane_vc_t1

0x2fbf,	// (0x00011d37) input_focus_pane_cp7_vc_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_cp7_vc

0x6e42,	// (0x00015bba) list_form_pane_vc_ParamLimits

0x6e42,	// (0x00015bba) list_form_pane_vc

0x6e4e,	// (0x00015bc6) data_form_pane_vc_t1_ParamLimits

0x6e4e,	// (0x00015bc6) data_form_pane_vc_t1

0x30fb,	// (0x00011e73) input_focus_pane_vc_g1

0x3103,	// (0x00011e7b) input_focus_pane_vc_g2

0x310b,	// (0x00011e83) input_focus_pane_vc_g3

0x3113,	// (0x00011e8b) input_focus_pane_vc_g4

0x311b,	// (0x00011e93) input_focus_pane_vc_g5

0x3123,	// (0x00011e9b) input_focus_pane_vc_g6

0x312b,	// (0x00011ea3) input_focus_pane_vc_g7

0x3133,	// (0x00011eab) input_focus_pane_vc_g8

0x313b,	// (0x00011eb3) input_focus_pane_vc_g9

0x20fc,	// (0x00010e74) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001e41b) input_focus_pane_vc_g

0x4dc2,	// (0x00013b3a) data_form_pane_vc_ParamLimits

0x4dc2,	// (0x00013b3a) data_form_pane_vc

0x4dce,	// (0x00013b46) form_field_data_pane_vc_g1

0x6e69,	// (0x00015be1) form_field_data_pane_vc_t1_ParamLimits

0x6e69,	// (0x00015be1) form_field_data_pane_vc_t1

0x2fbf,	// (0x00011d37) input_focus_pane_vc_ParamLimits

0x2fbf,	// (0x00011d37) input_focus_pane_vc

0x6e83,	// (0x00015bfb) button_value_adjust_pane_cp3_vc

0x6e8b,	// (0x00015c03) button_value_adjust_pane_cp5_vc

0x6e93,	// (0x00015c0b) form_field_data_pane_vc_ParamLimits

0x6e93,	// (0x00015c0b) form_field_data_pane_vc

0x6eaa,	// (0x00015c22) form_field_data_pane_vc_cp2

0x6eb2,	// (0x00015c2a) form_field_data_wide_pane_vc_ParamLimits

0x6eb2,	// (0x00015c2a) form_field_data_wide_pane_vc

0x6ec8,	// (0x00015c40) form_field_data_wide_pane_vc_cp2

0x6ed0,	// (0x00015c48) form_field_popup_pane_vc_ParamLimits

0x6ed0,	// (0x00015c48) form_field_popup_pane_vc

0x6ee7,	// (0x00015c5f) form_field_popup_wide_pane_vc_ParamLimits

0x6ee7,	// (0x00015c5f) form_field_popup_wide_pane_vc

0x6efd,	// (0x00015c75) form_field_slider_pane_vc_ParamLimits

0x6efd,	// (0x00015c75) form_field_slider_pane_vc

0x6f10,	// (0x00015c88) form_field_slider_wide_pane_vc_ParamLimits

0x6f10,	// (0x00015c88) form_field_slider_wide_pane_vc

0x6f23,	// (0x00015c9b) grid_touch_1_pane_ParamLimits

0x6f23,	// (0x00015c9b) grid_touch_1_pane

0x6f2f,	// (0x00015ca7) grid_touch_2_pane_ParamLimits

0x6f2f,	// (0x00015ca7) grid_touch_2_pane

0x40cf,	// (0x00012e47) touch_pane_g1_ParamLimits

0x40cf,	// (0x00012e47) touch_pane_g1

0x6f47,	// (0x00015cbf) cell_app_pane_cp_wide_ParamLimits

0x6f47,	// (0x00015cbf) cell_app_pane_cp_wide

0x6f58,	// (0x00015cd0) grid_popup_fast_wide_pane_ParamLimits

0x6f58,	// (0x00015cd0) grid_popup_fast_wide_pane

0x6f6c,	// (0x00015ce4) scroll_pane_cp19_ParamLimits

0x6f6c,	// (0x00015ce4) scroll_pane_cp19

0x2106,	// (0x00010e7e) bg_popup_window_pane_cp20

0x6f80,	// (0x00015cf8) listscroll_popup_fast_wide_pane

0x21e6,	// (0x00010f5e) grid_indicator_nsta_pane

0x6f88,	// (0x00015d00) clock_nsta_pane_g1

0x6f91,	// (0x00015d09) clock_nsta_pane_t1

0x6fad,	// (0x00015d25) cell_indicator_nsta_pane_ParamLimits

0x6fad,	// (0x00015d25) cell_indicator_nsta_pane

0x6fe5,	// (0x00015d5d) cell_indicator_nsta_pane_g1

0x6ff3,	// (0x00015d6b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa6,	// (0x0001e81e) cell_indicator_nsta_pane_g

0x7009,	// (0x00015d81) clock_nsta_pane_cp

0x7011,	// (0x00015d89) indicator_nsta_pane_cp

0x701a,	// (0x00015d92) nsta_clock_indic_pane_g1

0x22c9,	// (0x00011041) grid_indicator_pane

0x36d7,	// (0x0001244f) scroll_pane_cp29

0xda01,	// (0x0001c779) indicator_nsta_pane_cp2_ParamLimits

0xda01,	// (0x0001c779) indicator_nsta_pane_cp2

0x21e6,	// (0x00010f5e) main_apps_wheel_pane

0x5026,	// (0x00013d9e) form_midp_field_text_pane_ParamLimits

0x516b,	// (0x00013ee3) scroll_bar_cp050_ParamLimits

0x7083,	// (0x00015dfb) cell_indicator_pane_ParamLimits

0x7083,	// (0x00015dfb) cell_indicator_pane

0x70a0,	// (0x00015e18) cell_indicator_pane_g1

0x70aa,	// (0x00015e22) grid_wheel_folder_pane_ParamLimits

0x70aa,	// (0x00015e22) grid_wheel_folder_pane

0x70c0,	// (0x00015e38) list_wheel_apps_pane_ParamLimits

0x70c0,	// (0x00015e38) list_wheel_apps_pane

0x70d1,	// (0x00015e49) main_apps_wheel_pane_g1_ParamLimits

0x70d1,	// (0x00015e49) main_apps_wheel_pane_g1

0x70e5,	// (0x00015e5d) main_apps_wheel_pane_g2_ParamLimits

0x70e5,	// (0x00015e5d) main_apps_wheel_pane_g2

0x0001,

0xfac2,	// (0x0001e83a) main_apps_wheel_pane_g_ParamLimits

0xfac2,	// (0x0001e83a) main_apps_wheel_pane_g

0x70fd,	// (0x00015e75) main_apps_wheel_pane_t1_ParamLimits

0x70fd,	// (0x00015e75) main_apps_wheel_pane_t1

0x7120,	// (0x00015e98) list_wheel_apps_pane_g1

0x7128,	// (0x00015ea0) list_wheel_apps_pane_g2

0x7130,	// (0x00015ea8) list_wheel_apps_pane_g3

0x7138,	// (0x00015eb0) list_wheel_apps_pane_g4

0x7142,	// (0x00015eba) list_wheel_apps_pane_g5

0x0004,

0xfac7,	// (0x0001e83f) list_wheel_apps_pane_g

0x3c88,	// (0x00012a00) navi_icon_text_pane

0x4741,	// (0x000134b9) aid_fill_nsta

0x7165,	// (0x00015edd) navi_icon_text_pane_g1

0x7174,	// (0x00015eec) navi_icon_text_pane_t1

0x3b24,	// (0x0001289c) list_set_graphic_pane_t1_ParamLimits

0x3b24,	// (0x0001289c) list_set_graphic_pane_t1

0x58ad,	// (0x00014625) popup_midp_note_alarm_window_t6_ParamLimits

0x58ad,	// (0x00014625) popup_midp_note_alarm_window_t6

0x58bf,	// (0x00014637) popup_midp_note_alarm_window_t7_ParamLimits

0x58bf,	// (0x00014637) popup_midp_note_alarm_window_t7

0x58d1,	// (0x00014649) popup_midp_note_alarm_window_t8_ParamLimits

0x58d1,	// (0x00014649) popup_midp_note_alarm_window_t8

0x58e3,	// (0x0001465b) popup_midp_note_alarm_window_t9_ParamLimits

0x58e3,	// (0x0001465b) popup_midp_note_alarm_window_t9

0x58f5,	// (0x0001466d) popup_midp_note_alarm_window_t10_ParamLimits

0x58f5,	// (0x0001466d) popup_midp_note_alarm_window_t10

0x5907,	// (0x0001467f) popup_midp_note_alarm_window_t11_ParamLimits

0x5907,	// (0x0001467f) popup_midp_note_alarm_window_t11

0x5919,	// (0x00014691) scroll_pane_cp17_ParamLimits

0x5919,	// (0x00014691) scroll_pane_cp17

0xde35,	// (0x0001cbad) volume_small_pane_cp_g1

0xe181,	// (0x0001cef9) volume_small_pane_cp_g2

0xe18a,	// (0x0001cf02) volume_small_pane_cp_g3

0xe193,	// (0x0001cf0b) volume_small_pane_cp_g4

0xe19c,	// (0x0001cf14) volume_small_pane_cp_g5

0xe1a5,	// (0x0001cf1d) volume_small_pane_cp_g6

0xe1ae,	// (0x0001cf26) volume_small_pane_cp_g7

0xe1b7,	// (0x0001cf2f) volume_small_pane_cp_g8

0xe1c0,	// (0x0001cf38) volume_small_pane_cp_g9

0xe1c9,	// (0x0001cf41) volume_small_pane_cp_g10

0x3ee9,	// (0x00012c61) midp_ticker_pane_g1_ParamLimits

0x3ef5,	// (0x00012c6d) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001e4e3) midp_ticker_pane_g_ParamLimits

0x3f01,	// (0x00012c79) midp_ticker_pane_t1_ParamLimits

0x4757,	// (0x000134cf) aid_fill_nsta_2

0x5157,	// (0x00013ecf) list_form2_midp_pane

0x62e0,	// (0x00015058) midp_editing_number_pane_ParamLimits

0x62ef,	// (0x00015067) midp_ticker_pane_ParamLimits

0x7189,	// (0x00015f01) form2_midp_field_pane

0x71ad,	// (0x00015f25) scroll_pane_cp51

0x71cd,	// (0x00015f45) form2_midp_button_pane_ParamLimits

0x71cd,	// (0x00015f45) form2_midp_button_pane

0x71df,	// (0x00015f57) form2_midp_content_pane_ParamLimits

0x71df,	// (0x00015f57) form2_midp_content_pane

0x71f9,	// (0x00015f71) form2_midp_field_choice_group_pane

0x7201,	// (0x00015f79) form2_midp_field_pane_g1

0x7209,	// (0x00015f81) form2_midp_field_pane_g2

0x7211,	// (0x00015f89) form2_midp_field_pane_g3

0x7219,	// (0x00015f91) form2_midp_field_pane_g4

0x0003,

0xfaec,	// (0x0001e864) form2_midp_field_pane_g

0x7221,	// (0x00015f99) form2_midp_gauge_slider_pane

0x7229,	// (0x00015fa1) form2_midp_gauge_wait_pane

0x7231,	// (0x00015fa9) form2_midp_image_pane_ParamLimits

0x7231,	// (0x00015fa9) form2_midp_image_pane

0x724c,	// (0x00015fc4) form2_midp_label_pane_ParamLimits

0x724c,	// (0x00015fc4) form2_midp_label_pane

0x7265,	// (0x00015fdd) form2_midp_label_pane_cp_ParamLimits

0x7265,	// (0x00015fdd) form2_midp_label_pane_cp

0x7286,	// (0x00015ffe) form2_midp_string_pane_ParamLimits

0x7286,	// (0x00015ffe) form2_midp_string_pane

0xcefa,	// (0x0001bc72) form2_midp_text_pane_ParamLimits

0xcefa,	// (0x0001bc72) form2_midp_text_pane

0x72b1,	// (0x00016029) form2_midp_time_pane

0x72c1,	// (0x00016039) input_focus_pane_cp51_ParamLimits

0x72c1,	// (0x00016039) input_focus_pane_cp51

0x72d9,	// (0x00016051) form2_midp_label_pane_t1_ParamLimits

0x72d9,	// (0x00016051) form2_midp_label_pane_t1

0xcf13,	// (0x0001bc8b) form2_mdip_text_pane_t1_ParamLimits

0xcf13,	// (0x0001bc8b) form2_mdip_text_pane_t1

0xcf30,	// (0x0001bca8) form2_midp_time_pane_t1

0x7350,	// (0x000160c8) form2_midp_gauge_slider_pane_t1

0x7362,	// (0x000160da) form2_midp_gauge_slider_pane_t2

0x7374,	// (0x000160ec) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf5,	// (0x0001e86d) form2_midp_gauge_slider_pane_t

0x7386,	// (0x000160fe) form2_midp_slider_pane

0x7392,	// (0x0001610a) form2_midp_gauge_wait_pane_t1

0x73a0,	// (0x00016118) form2_midp_wait_pane_ParamLimits

0x73a0,	// (0x00016118) form2_midp_wait_pane

0x73cb,	// (0x00016143) list_single_2graphic_pane_cp4_ParamLimits

0x73cb,	// (0x00016143) list_single_2graphic_pane_cp4

0x4e19,	// (0x00013b91) list_single_midp_graphic_pane_cp_ParamLimits

0x4e19,	// (0x00013b91) list_single_midp_graphic_pane_cp

0x2106,	// (0x00010e7e) list_highlight_pane_cp20

0x73fa,	// (0x00016172) list_single_2graphic_pane_g1_cp4

0x67f4,	// (0x0001556c) list_single_2graphic_pane_g2_cp4

0x7402,	// (0x0001617a) list_single_2graphic_pane_t1_cp4

0x21e6,	// (0x00010f5e) list_highlight_pane_cp21

0x7411,	// (0x00016189) list_single_midp_graphic_pane_g4_cp

0x7420,	// (0x00016198) list_single_midp_graphic_pane_t1_cp

0x7435,	// (0x000161ad) form2_mdip_string_pane_t1_ParamLimits

0x7435,	// (0x000161ad) form2_mdip_string_pane_t1

0x2106,	// (0x00010e7e) bg_wml_button_pane_cp2

0x20fc,	// (0x00010e74) form2_midp_image_pane_g1

0xc5d7,	// (0x0001b34f) list_double_large_graphic_pane_g5_ParamLimits

0xc5d7,	// (0x0001b34f) list_double_large_graphic_pane_g5

0x3e12,	// (0x00012b8a) midp_form_pane_ParamLimits

0x21e6,	// (0x00010f5e) main_apps_wheel_pane_ParamLimits

0x4535,	// (0x000132ad) popup_preview_window_ParamLimits

0x4535,	// (0x000132ad) popup_preview_window

0x46e6,	// (0x0001345e) popup_touch_info_window_ParamLimits

0x46e6,	// (0x0001345e) popup_touch_info_window

0x4704,	// (0x0001347c) popup_touch_menu_window_ParamLimits

0x4704,	// (0x0001347c) popup_touch_menu_window

0x20f2,	// (0x00010e6a) bg_popup_sub_pane_cp6

0x756f,	// (0x000162e7) list_touch_menu_pane

0x7577,	// (0x000162ef) list_single_touch_menu_pane_ParamLimits

0x7577,	// (0x000162ef) list_single_touch_menu_pane

0x758c,	// (0x00016304) list_single_touch_menu_pane_t1

0x21e6,	// (0x00010f5e) bg_popup_sub_pane_cp7_ParamLimits

0x21e6,	// (0x00010f5e) bg_popup_sub_pane_cp7

0x759a,	// (0x00016312) heading_sub_pane

0x75a2,	// (0x0001631a) list_touch_info_pane_ParamLimits

0x75a2,	// (0x0001631a) list_touch_info_pane

0x75b1,	// (0x00016329) list_single_touch_info_pane_ParamLimits

0x75b1,	// (0x00016329) list_single_touch_info_pane

0x75c3,	// (0x0001633b) list_single_touch_info_pane_t1

0x75d1,	// (0x00016349) list_single_touch_info_pane_t2

0x0001,

0xfb03,	// (0x0001e87b) list_single_touch_info_pane_t

0x3e0a,	// (0x00012b82) bg_popup_heading_pane_cp

0x75df,	// (0x00016357) heading_sub_pane_t1

0x4d5c,	// (0x00013ad4) bg_popup_preview_window_pane_cp_ParamLimits

0x4d5c,	// (0x00013ad4) bg_popup_preview_window_pane_cp

0x759a,	// (0x00016312) heading_preview_pane

0x75a2,	// (0x0001631a) list_preview_pane_ParamLimits

0x75a2,	// (0x0001631a) list_preview_pane

0x75ed,	// (0x00016365) popup_preview_window_g1

0x75b1,	// (0x00016329) list_single_preview_pane_ParamLimits

0x75b1,	// (0x00016329) list_single_preview_pane

0x75f5,	// (0x0001636d) list_single_preview_pane_g1

0x75fd,	// (0x00016375) list_single_preview_pane_t1

0x75c3,	// (0x0001633b) list_single_preview_pane_t2

0x0001,

0xfb08,	// (0x0001e880) list_single_preview_pane_t

0x760b,	// (0x00016383) bg_popup_heading_pane_cp2_ParamLimits

0x760b,	// (0x00016383) bg_popup_heading_pane_cp2

0x7621,	// (0x00016399) heading_preview_pane_g1

0x7629,	// (0x000163a1) heading_preview_pane_t1_ParamLimits

0x7629,	// (0x000163a1) heading_preview_pane_t1

0x22ec,	// (0x00011064) soft_indicator_pane_t1_ParamLimits

0x29c6,	// (0x0001173e) scroll_pane_ParamLimits

0x35dc,	// (0x00012354) scroll_sc2_left_pane

0x35d3,	// (0x0001234b) scroll_sc2_right_pane

0x35fb,	// (0x00012373) scroll_bg_pane_g1_ParamLimits

0x3610,	// (0x00012388) scroll_bg_pane_g2_ParamLimits

0x3628,	// (0x000123a0) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001e472) scroll_bg_pane_g_ParamLimits

0x35fb,	// (0x00012373) scroll_handle_pane_g1_ParamLimits

0x364a,	// (0x000123c2) scroll_handle_pane_g2_ParamLimits

0x3628,	// (0x000123a0) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001e479) scroll_handle_pane_g_ParamLimits

0x41c0,	// (0x00012f38) popup_choice_list_window_ParamLimits

0x41c0,	// (0x00012f38) popup_choice_list_window

0x4b6a,	// (0x000138e2) choice_list_pane

0x4c0e,	// (0x00013986) cell_toolbar_pane_t1

0x4c36,	// (0x000139ae) toolbar_button_pane_ParamLimits

0x5ddd,	// (0x00014b55) ai_gene_pane_1_t2_ParamLimits

0x5ddd,	// (0x00014b55) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0001e68a) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0001e68a) ai_gene_pane_1_t

0x7646,	// (0x000163be) scroll_sc2_left_pane_g1

0x7646,	// (0x000163be) scroll_sc2_right_pane_g1

0x4190,	// (0x00012f08) bg_popup_sub_pane_cp10

0x7650,	// (0x000163c8) list_choice_list_pane

0x7667,	// (0x000163df) list_single_choice_list_pane_ParamLimits

0x7667,	// (0x000163df) list_single_choice_list_pane

0x767b,	// (0x000163f3) list_single_choice_list_pane_g1

0x7683,	// (0x000163fb) list_single_choice_list_pane_t1_ParamLimits

0x7683,	// (0x000163fb) list_single_choice_list_pane_t1

0x7698,	// (0x00016410) choice_list_pane_g1

0x76a0,	// (0x00016418) choice_list_pane_t1

0x20f2,	// (0x00010e6a) input_focus_pane_cp11

0x34ac,	// (0x00012224) title_pane_stacon_g2_ParamLimits

0x34ac,	// (0x00012224) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001e458) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001e458) title_pane_stacon_g

0x3e0a,	// (0x00012b82) cursor_press_pane

0x4266,	// (0x00012fde) popup_fep_hwr_window_ParamLimits

0x4266,	// (0x00012fde) popup_fep_hwr_window

0x42de,	// (0x00013056) popup_fep_vkb_window_ParamLimits

0x42de,	// (0x00013056) popup_fep_vkb_window

0x76ae,	// (0x00016426) cursor_press_pane_g1

0x0002,

0xfb31,	// (0x0001e8a9) fep_vkb_side_pane_g_ParamLimits

0xe1fd,	// (0x0001cf75) fep_hwr_candidate_pane_ParamLimits

0xe1fd,	// (0x0001cf75) fep_hwr_candidate_pane

0xe227,	// (0x0001cf9f) fep_hwr_side_pane_ParamLimits

0xe227,	// (0x0001cf9f) fep_hwr_side_pane

0xe247,	// (0x0001cfbf) fep_hwr_top_pane_ParamLimits

0xe247,	// (0x0001cfbf) fep_hwr_top_pane

0xe25f,	// (0x0001cfd7) fep_hwr_write_pane_ParamLimits

0xe25f,	// (0x0001cfd7) fep_hwr_write_pane

0xfb31,	// (0x0001e8a9) fep_vkb_side_pane_g

0x76c8,	// (0x00016440) fep_hwr_top_pane_g1

0x76b6,	// (0x0001642e) fep_hwr_top_pane_g2

0xe28b,	// (0x0001d003) fep_hwr_top_pane_g3

0x0002,

0xfb0d,	// (0x0001e885) fep_hwr_top_pane_g

0xe2a0,	// (0x0001d018) fep_hwr_top_text_pane

0x379d,	// (0x00012515) fep_hwr_top_text_pane_g1

0x76fe,	// (0x00016476) fep_hwr_top_text_pane_t1

0xe396,	// (0x0001d10e) fep_hwr_candidate_pane_g1

0x7958,	// (0x000166d0) fep_vkb_keypad_pane_g3_ParamLimits

0x7958,	// (0x000166d0) fep_vkb_keypad_pane_g3

0x7980,	// (0x000166f8) fep_vkb_keypad_pane_g4_ParamLimits

0x7980,	// (0x000166f8) fep_vkb_keypad_pane_g4

0x79ef,	// (0x00016767) fep_vkb_bottom_pane_g2_ParamLimits

0x79ef,	// (0x00016767) fep_vkb_bottom_pane_g2

0x0001,

0xfb38,	// (0x0001e8b0) fep_vkb_bottom_pane_g_ParamLimits

0xfb38,	// (0x0001e8b0) fep_vkb_bottom_pane_g

0x7646,	// (0x000163be) cell_vkb_side_pane_g2

0x0001,

0xfb42,	// (0x0001e8ba) cell_vkb_side_pane_g

0x7a7a,	// (0x000167f2) cell_vkb_side_pane_t1

0x7a88,	// (0x00016800) cell_vkb_side_pane_t1_copy1

0x7646,	// (0x000163be) bg_fep_vkb_candidate_pane_g2

0x7bba,	// (0x00016932) cell_vkb_candidate_pane_ParamLimits

0x770c,	// (0x00016484) aid_size_cell_vkb_ParamLimits

0x770c,	// (0x00016484) aid_size_cell_vkb

0x7bba,	// (0x00016932) cell_vkb_candidate_pane

0xe3b0,	// (0x0001d128) bg_popup_fep_shadow_pane_g1

0x779a,	// (0x00016512) fep_vkb_bottom_pane_ParamLimits

0x779a,	// (0x00016512) fep_vkb_bottom_pane

0x77d7,	// (0x0001654f) fep_vkb_candidate_pane_ParamLimits

0x77d7,	// (0x0001654f) fep_vkb_candidate_pane

0x77f3,	// (0x0001656b) fep_vkb_keypad_pane_ParamLimits

0x77f3,	// (0x0001656b) fep_vkb_keypad_pane

0x7839,	// (0x000165b1) fep_vkb_side_pane_ParamLimits

0x7839,	// (0x000165b1) fep_vkb_side_pane

0x7875,	// (0x000165ed) fep_vkb_top_pane_ParamLimits

0x7875,	// (0x000165ed) fep_vkb_top_pane

0x78b1,	// (0x00016629) fep_vkb_top_pane_g1_ParamLimits

0x78b1,	// (0x00016629) fep_vkb_top_pane_g1

0x78c0,	// (0x00016638) fep_vkb_top_pane_g2_ParamLimits

0x78c0,	// (0x00016638) fep_vkb_top_pane_g2

0x78cf,	// (0x00016647) fep_vkb_top_pane_g3_ParamLimits

0x78cf,	// (0x00016647) fep_vkb_top_pane_g3

0x0003,

0xfb28,	// (0x0001e8a0) fep_vkb_top_pane_g_ParamLimits

0xfb28,	// (0x0001e8a0) fep_vkb_top_pane_g

0x78ed,	// (0x00016665) fep_vkb_top_text_pane_ParamLimits

0x78ed,	// (0x00016665) fep_vkb_top_text_pane

0x78fe,	// (0x00016676) fep_vkb_side_pane_g1_ParamLimits

0x78fe,	// (0x00016676) fep_vkb_side_pane_g1

0x7947,	// (0x000166bf) grid_vkb_side_pane_ParamLimits

0x7947,	// (0x000166bf) grid_vkb_side_pane

0xe3b8,	// (0x0001d130) bg_popup_fep_shadow_pane_g2

0xe3c1,	// (0x0001d139) bg_popup_fep_shadow_pane_g3

0xe3c9,	// (0x0001d141) bg_popup_fep_shadow_pane_g4

0xe3d2,	// (0x0001d14a) bg_popup_fep_shadow_pane_g5

0xe3dc,	// (0x0001d154) bg_popup_fep_shadow_pane_g6

0xe3e4,	// (0x0001d15c) bg_popup_fep_shadow_pane_g7

0x311b,	// (0x00011e93) bg_popup_fep_shadow_pane_g8

0x799e,	// (0x00016716) grid_vkb_keypad_number_pane_ParamLimits

0x799e,	// (0x00016716) grid_vkb_keypad_number_pane

0x79ae,	// (0x00016726) grid_vkb_keypad_pane_ParamLimits

0x79ae,	// (0x00016726) grid_vkb_keypad_pane

0x79d4,	// (0x0001674c) fep_vkb_bottom_pane_g1_ParamLimits

0x79d4,	// (0x0001674c) fep_vkb_bottom_pane_g1

0x79fd,	// (0x00016775) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79fd,	// (0x00016775) grid_vkb_keypad_bottom_left_pane

0x7a12,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a12,	// (0x0001678a) grid_vkb_keypad_bottom_right_pane

0x7a27,	// (0x0001679f) fep_vkb_top_text_pane_g1

0x7a42,	// (0x000167ba) fep_vkb_top_text_pane_t1

0x7a57,	// (0x000167cf) cell_vkb_side_pane_ParamLimits

0x7a57,	// (0x000167cf) cell_vkb_side_pane

0x7646,	// (0x000163be) cell_vkb_side_pane_g1

0x7a96,	// (0x0001680e) cell_vkb_keypad_pane_ParamLimits

0x7a96,	// (0x0001680e) cell_vkb_keypad_pane

0x7b11,	// (0x00016889) cell_vkb_keypad_pane_g1

0x0008,

0xfb55,	// (0x0001e8cd) bg_popup_fep_shadow_pane_g

0x7646,	// (0x000163be) cell_hwr_side_pane_g1

0x7646,	// (0x000163be) cell_hwr_side_pane_g2

0x7b1b,	// (0x00016893) cell_vkb_keypad_pane_t1

0x7b29,	// (0x000168a1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x7b29,	// (0x000168a1) cell_vkb_keypad_bottom_left_pane

0x7b46,	// (0x000168be) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7b46,	// (0x000168be) cell_vkb_keypad_bottom_right_pane

0x7646,	// (0x000163be) cell_vkb_keypad_bottom_left_pane_g1

0x7646,	// (0x000163be) cell_vkb_keypad_bottom_right_pane_g1

0x7b7f,	// (0x000168f7) cell_vkb_keypad_number_pane_ParamLimits

0x7b7f,	// (0x000168f7) cell_vkb_keypad_number_pane

0x7b9e,	// (0x00016916) cell_vkb_keypad_number_pane_g1

0x7ba8,	// (0x00016920) cell_vkb_keypad_number_pane_g2

0x7bb1,	// (0x00016929) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb47,	// (0x0001e8bf) cell_vkb_keypad_number_pane_g

0x7b1b,	// (0x00016893) cell_vkb_keypad_number_pane_t1

0x7bd7,	// (0x0001694f) fep_vkb_candidate_pane_g1

0x0001,

0xfb42,	// (0x0001e8ba) cell_hwr_side_pane_g

0x7bf0,	// (0x00016968) cell_hwr_side_pane_t1

0xe3f6,	// (0x0001d16e) cell_hwr_side_pane_t1_copy1

0x78df,	// (0x00016657) cell_hwr_candidate_pane_g1

0xe404,	// (0x0001d17c) cell_hwr_candidate_pane_t1

0x7646,	// (0x000163be) cell_vkb_candidate_pane_g2

0x7c34,	// (0x000169ac) cell_vkb_candidate_pane_t1

0xabb9,	// (0x00019931) bg_popup_fep_shadow_pane_ParamLimits

0xabb9,	// (0x00019931) bg_popup_fep_shadow_pane

0xabe8,	// (0x00019960) bg_fep_hwr_top_pane_g4

0x76da,	// (0x00016452) bg_hwr_side_pane_g1_ParamLimits

0x76da,	// (0x00016452) bg_hwr_side_pane_g1

0xe2dc,	// (0x0001d054) cell_hwr_side_pane_ParamLimits

0xe2dc,	// (0x0001d054) cell_hwr_side_pane

0xe317,	// (0x0001d08f) fep_hwr_write_pane_g1_ParamLimits

0xe317,	// (0x0001d08f) fep_hwr_write_pane_g1

0xe324,	// (0x0001d09c) fep_hwr_write_pane_g2_ParamLimits

0xe324,	// (0x0001d09c) fep_hwr_write_pane_g2

0xe331,	// (0x0001d0a9) fep_hwr_write_pane_g3_ParamLimits

0xe331,	// (0x0001d0a9) fep_hwr_write_pane_g3

0xe33f,	// (0x0001d0b7) fep_hwr_write_pane_g4_ParamLimits

0xe33f,	// (0x0001d0b7) fep_hwr_write_pane_g4

0x0005,

0xfb14,	// (0x0001e88c) fep_hwr_write_pane_g_ParamLimits

0xfb14,	// (0x0001e88c) fep_hwr_write_pane_g

0xabe8,	// (0x00019960) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xabe8,	// (0x00019960) bg_fep_hwr_candidate_pane_g2

0xe354,	// (0x0001d0cc) cell_hwr_candidate_pane_ParamLimits

0xe354,	// (0x0001d0cc) cell_hwr_candidate_pane

0xe396,	// (0x0001d10e) fep_hwr_candidate_pane_g1_ParamLimits

0x773a,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x773a,	// (0x000164b2) bg_popup_fep_shadow_pane_cp2

0x78df,	// (0x00016657) fep_vkb_top_pane_g4_ParamLimits

0x78df,	// (0x00016657) fep_vkb_top_pane_g4

0x7925,	// (0x0001669d) fep_vkb_side_pane_g2_ParamLimits

0x7925,	// (0x0001669d) fep_vkb_side_pane_g2

0xc70b,	// (0x0001b483) list_setting_pane_t4_ParamLimits

0xc70b,	// (0x0001b483) list_setting_pane_t4

0xc79d,	// (0x0001b515) list_setting_number_pane_t5_ParamLimits

0xc79d,	// (0x0001b515) list_setting_number_pane_t5

0x37df,	// (0x00012557) list_double_heading_pane_cp2_ParamLimits

0x37df,	// (0x00012557) list_double_heading_pane_cp2

0x2fe5,	// (0x00011d5d) list_double_heading_pane_g1_cp2_ParamLimits

0x2fe5,	// (0x00011d5d) list_double_heading_pane_g1_cp2

0x2ff1,	// (0x00011d69) list_double_heading_pane_g2_cp2_ParamLimits

0x2ff1,	// (0x00011d69) list_double_heading_pane_g2_cp2

0x7c42,	// (0x000169ba) list_double_heading_pane_t1_cp2_ParamLimits

0x7c42,	// (0x000169ba) list_double_heading_pane_t1_cp2

0x7c58,	// (0x000169d0) list_double_heading_pane_t2_cp2_ParamLimits

0x7c58,	// (0x000169d0) list_double_heading_pane_t2_cp2

0x20da,	// (0x00010e52) aid_value_unit2

0xd5a3,	// (0x0001c31b) popup_preview_fixed_window

0x2489,	// (0x00011201) bg_popup_preview_window_pane_cp02

0x7c6a,	// (0x000169e2) list_preview_fixed_pane

0x7cb0,	// (0x00016a28) list_empty_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_empty_pane_fp

0x7cb0,	// (0x00016a28) list_single_cale_day_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_cale_day_pane_fp

0x7cb0,	// (0x00016a28) list_single_graphic_heading_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_graphic_heading_pane_fp

0x7cb0,	// (0x00016a28) list_single_graphic_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_graphic_pane_fp

0x7cb0,	// (0x00016a28) list_single_heading_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_heading_pane_fp

0x7cb0,	// (0x00016a28) list_single_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_pane_fp

0x7cc7,	// (0x00016a3f) list_single_pane_fp_g1_ParamLimits

0x7cc7,	// (0x00016a3f) list_single_pane_fp_g1

0xc56f,	// (0x0001b2e7) list_single_pane_fp_g2_ParamLimits

0xc56f,	// (0x0001b2e7) list_single_pane_fp_g2

0xcf43,	// (0x0001bcbb) list_single_pane_fp_g3_ParamLimits

0xcf43,	// (0x0001bcbb) list_single_pane_fp_g3

0x7cd3,	// (0x00016a4b) list_single_pane_fp_g4_ParamLimits

0x7cd3,	// (0x00016a4b) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0001e8ee) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0001e8ee) list_single_pane_fp_g

0xcf57,	// (0x0001bccf) list_single_pane_fp_t1_ParamLimits

0xcf57,	// (0x0001bccf) list_single_pane_fp_t1

0xcf6e,	// (0x0001bce6) list_single_graphic_pane_fp_g1_ParamLimits

0xcf6e,	// (0x0001bce6) list_single_graphic_pane_fp_g1

0x7cc7,	// (0x00016a3f) list_single_graphic_pane_fp_g2_ParamLimits

0x7cc7,	// (0x00016a3f) list_single_graphic_pane_fp_g2

0xc56f,	// (0x0001b2e7) list_single_graphic_pane_fp_g3_ParamLimits

0xc56f,	// (0x0001b2e7) list_single_graphic_pane_fp_g3

0xcf43,	// (0x0001bcbb) list_single_graphic_pane_fp_g4_ParamLimits

0xcf43,	// (0x0001bcbb) list_single_graphic_pane_fp_g4

0x7cd3,	// (0x00016a4b) list_single_graphic_pane_fp_g5_ParamLimits

0x7cd3,	// (0x00016a4b) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e8f7) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e8f7) list_single_graphic_pane_fp_g

0xcf7a,	// (0x0001bcf2) list_single_graphic_pane_fp_t1_ParamLimits

0xcf7a,	// (0x0001bcf2) list_single_graphic_pane_fp_t1

0xcf6e,	// (0x0001bce6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xcf6e,	// (0x0001bce6) list_single_graphic_heading_pane_fp_g1

0x7cc7,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7cc7,	// (0x00016a3f) list_single_graphic_heading_pane_fp_g2

0xc56f,	// (0x0001b2e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc56f,	// (0x0001b2e7) list_single_graphic_heading_pane_fp_g3

0xcf43,	// (0x0001bcbb) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xcf43,	// (0x0001bcbb) list_single_graphic_heading_pane_fp_g4

0x7cd3,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cd3,	// (0x00016a4b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e8f7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e8f7) list_single_graphic_heading_pane_fp_g

0xcf90,	// (0x0001bd08) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xcf90,	// (0x0001bd08) list_single_graphic_heading_pane_fp_t1

0xcfa6,	// (0x0001bd1e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xcfa6,	// (0x0001bd1e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0001e902) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0001e902) list_single_graphic_heading_pane_fp_t

0xcfb8,	// (0x0001bd30) list_single_cale_day_pane_fp_g1_ParamLimits

0xcfb8,	// (0x0001bd30) list_single_cale_day_pane_fp_g1

0x7d78,	// (0x00016af0) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d78,	// (0x00016af0) list_single_cale_day_pane_fp_g2

0xcff0,	// (0x0001bd68) list_single_cale_day_pane_fp_g3_ParamLimits

0xcff0,	// (0x0001bd68) list_single_cale_day_pane_fp_g3

0xd018,	// (0x0001bd90) list_single_cale_day_pane_fp_g4_ParamLimits

0xd018,	// (0x0001bd90) list_single_cale_day_pane_fp_g4

0xd03c,	// (0x0001bdb4) list_single_cale_day_pane_fp_g5_ParamLimits

0xd03c,	// (0x0001bdb4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0001e907) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0001e907) list_single_cale_day_pane_fp_g

0xd060,	// (0x0001bdd8) list_single_cale_day_pane_fp_t1_ParamLimits

0xd060,	// (0x0001bdd8) list_single_cale_day_pane_fp_t1

0xd086,	// (0x0001bdfe) list_single_cale_day_pane_fp_t2_ParamLimits

0xd086,	// (0x0001bdfe) list_single_cale_day_pane_fp_t2

0xd09f,	// (0x0001be17) list_single_cale_day_pane_fp_t3_ParamLimits

0xd09f,	// (0x0001be17) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0001e912) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0001e912) list_single_cale_day_pane_fp_t

0x7cc7,	// (0x00016a3f) list_empty_pane_fp_g1_ParamLimits

0x7cc7,	// (0x00016a3f) list_empty_pane_fp_g1

0xd0b8,	// (0x0001be30) list_empty_pane_fp_t1

0xd0c6,	// (0x0001be3e) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0001e919) list_empty_pane_fp_t

0x7cc7,	// (0x00016a3f) list_single_heading_pane_fp_g1_ParamLimits

0x7cc7,	// (0x00016a3f) list_single_heading_pane_fp_g1

0xc56f,	// (0x0001b2e7) list_single_heading_pane_fp_g2_ParamLimits

0xc56f,	// (0x0001b2e7) list_single_heading_pane_fp_g2

0xcf43,	// (0x0001bcbb) list_single_heading_pane_fp_g3_ParamLimits

0xcf43,	// (0x0001bcbb) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0001e91e) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0001e91e) list_single_heading_pane_fp_g

0xd0d4,	// (0x0001be4c) list_single_heading_pane_fp_t1_ParamLimits

0xd0d4,	// (0x0001be4c) list_single_heading_pane_fp_t1

0xd0e6,	// (0x0001be5e) list_single_heading_pane_fp_t2_ParamLimits

0xd0e6,	// (0x0001be5e) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0001e925) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0001e925) list_single_heading_pane_fp_t

0x3343,	// (0x000120bb) aid_size_cell_fast

0x23f9,	// (0x00011171) soft_indicator_pane_cp1_t1

0x3380,	// (0x000120f8) cell_app_pane_cp2_ParamLimits

0x3380,	// (0x000120f8) cell_app_pane_cp2

0xe1e6,	// (0x0001cf5e) fep_hwr_candidate_drop_down_list_pane

0xac08,	// (0x00019980) fep_hwr_candidate_pane_g3_ParamLimits

0xac08,	// (0x00019980) fep_hwr_candidate_pane_g3

0xac15,	// (0x0001998d) fep_hwr_candidate_pane_g4_ParamLimits

0xac15,	// (0x0001998d) fep_hwr_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001e899) fep_hwr_candidate_pane_g_ParamLimits

0xfb21,	// (0x0001e899) fep_hwr_candidate_pane_g

0x77c6,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77c6,	// (0x0001653e) fep_vkb_candidate_drop_down_list_pane

0x7bdf,	// (0x00016957) fep_vkb_candidate_pane_g3

0x7be7,	// (0x0001695f) fep_vkb_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0001e8c6) fep_vkb_candidate_pane_g

0x78df,	// (0x00016657) cell_hwr_candidate_pane_g1_ParamLimits

0x7f38,	// (0x00016cb0) cell_hwr_candidate_pane_g3_ParamLimits

0x7f38,	// (0x00016cb0) cell_hwr_candidate_pane_g3

0x7f59,	// (0x00016cd1) cell_hwr_candidate_pane_g4_ParamLimits

0x7f59,	// (0x00016cd1) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0001e8e0) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0001e8e0) cell_hwr_candidate_pane_g

0x7bfe,	// (0x00016976) cell_vkb_candidate_pane_g3_ParamLimits

0x7bfe,	// (0x00016976) cell_vkb_candidate_pane_g3

0x7c19,	// (0x00016991) cell_vkb_candidate_pane_g4_ParamLimits

0x7c19,	// (0x00016991) cell_vkb_candidate_pane_g4

0x7e90,	// (0x00016c08) cell_app_pane_cp2_g1_ParamLimits

0x7e90,	// (0x00016c08) cell_app_pane_cp2_g1

0x7eae,	// (0x00016c26) cell_app_pane_cp2_g2_ParamLimits

0x7eae,	// (0x00016c26) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0001e92a) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0001e92a) cell_app_pane_cp2_g

0x7eba,	// (0x00016c32) cell_app_pane_cp2_t1_ParamLimits

0x7eba,	// (0x00016c32) cell_app_pane_cp2_t1

0x2fbf,	// (0x00011d37) grid_highlight_pane_cp1_ParamLimits

0x2fbf,	// (0x00011d37) grid_highlight_pane_cp1

0xe422,	// (0x0001d19a) cell_hwr_candidate_pane_cp1_ParamLimits

0xe422,	// (0x0001d19a) cell_hwr_candidate_pane_cp1

0x78df,	// (0x00016657) fep_hwr_candidate_drop_down_list_pane_g1

0x7eec,	// (0x00016c64) fep_hwr_candidate_drop_down_list_pane_g2

0x7ef9,	// (0x00016c71) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e92f) fep_hwr_candidate_drop_down_list_pane_g

0xe441,	// (0x0001d1b9) fep_hwr_candidate_drop_down_list_scroll_pane

0xe44a,	// (0x0001d1c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe44a,	// (0x0001d1c2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe457,	// (0x0001d1cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe457,	// (0x0001d1cf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe464,	// (0x0001d1dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe464,	// (0x0001d1dc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7bfe,	// (0x00016976) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bfe,	// (0x00016976) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c19,	// (0x00016991) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c19,	// (0x00016991) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe471,	// (0x0001d1e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe471,	// (0x0001d1e9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe48c,	// (0x0001d204) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe48c,	// (0x0001d204) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7fbc,	// (0x00016d34) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fbc,	// (0x00016d34) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0001e936) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0001e936) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ecc,	// (0x00016c44) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ecc,	// (0x00016c44) cell_vkb_candidate_pane_cp1

0x78df,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x78df,	// (0x00016657) fep_vkb_candidate_drop_down_list_pane_g1

0x7eec,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7eec,	// (0x00016c64) fep_vkb_candidate_drop_down_list_pane_g2

0x7ef9,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ef9,	// (0x00016c71) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0001e92f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb7,	// (0x0001e92f) fep_vkb_candidate_drop_down_list_pane_g

0x7f06,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f06,	// (0x00016c7e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f13,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f13,	// (0x00016c8b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f20,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f20,	// (0x00016c98) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f2c,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f2c,	// (0x00016ca4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f38,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f38,	// (0x00016cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f59,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f59,	// (0x00016cd1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f7a,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f7a,	// (0x00016cf2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f9b,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f9b,	// (0x00016d13) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7fbc,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7fbc,	// (0x00016d34) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x0001e947) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x0001e947) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2110,	// (0x00010e88) title_pane_g1_ParamLimits

0x211d,	// (0x00010e95) title_pane_g2_ParamLimits

0xf56a,	// (0x0001e2e2) title_pane_g_ParamLimits

0x3795,	// (0x0001250d) aid_call2_pane

0x378d,	// (0x00012505) aid_call_pane

0x379d,	// (0x00012515) popup_clock_analogue_window_g1

0x379d,	// (0x00012515) popup_clock_analogue_window_g2

0xd902,	// (0x0001c67a) popup_clock_analogue_window_g3

0xd90b,	// (0x0001c683) popup_clock_analogue_window_g4

0x20fc,	// (0x00010e74) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001e487) popup_clock_analogue_window_g

0xd913,	// (0x0001c68b) popup_clock_analogue_window_t1

0xd921,	// (0x0001c699) clock_digital_number_pane_ParamLimits

0xd921,	// (0x0001c699) clock_digital_number_pane

0xd92d,	// (0x0001c6a5) clock_digital_number_pane_cp02_ParamLimits

0xd92d,	// (0x0001c6a5) clock_digital_number_pane_cp02

0xd939,	// (0x0001c6b1) clock_digital_number_pane_cp03_ParamLimits

0xd939,	// (0x0001c6b1) clock_digital_number_pane_cp03

0xd945,	// (0x0001c6bd) clock_digital_number_pane_cp04_ParamLimits

0xd945,	// (0x0001c6bd) clock_digital_number_pane_cp04

0xd951,	// (0x0001c6c9) clock_digital_separator_pane_ParamLimits

0xd951,	// (0x0001c6c9) clock_digital_separator_pane

0xd95d,	// (0x0001c6d5) popup_clock_digital_window_t1_ParamLimits

0xd95d,	// (0x0001c6d5) popup_clock_digital_window_t1

0x20fc,	// (0x00010e74) clock_digital_number_pane_g1

0x20fc,	// (0x00010e74) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001e492) clock_digital_number_pane_g

0x20fc,	// (0x00010e74) clock_digital_separator_pane_g1

0x20fc,	// (0x00010e74) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001e492) clock_digital_separator_pane_g

0x4741,	// (0x000134b9) aid_fill_nsta_ParamLimits

0x4887,	// (0x000135ff) indicator_nsta_pane_ParamLimits

0x49f9,	// (0x00013771) popup_clock_analogue_window

0x49f9,	// (0x00013771) popup_clock_digital_window

0x21e6,	// (0x00010f5e) grid_indicator_nsta_pane_ParamLimits

0x6f9f,	// (0x00015d17) clock_nsta_pane_t2

0x0001,

0xfaa1,	// (0x0001e819) clock_nsta_pane_t

0xd8c6,	// (0x0001c63e) aid_size_max_handle

0xd8d0,	// (0x0001c648) aid_size_min_handle

0x3e0a,	// (0x00012b82) editor_scroll_pane

0x7fd7,	// (0x00016d4f) ex_editor_pane

0x32b2,	// (0x0001202a) scroll_pane_cp13

0x29f2,	// (0x0001176a) scroll_pane_cp14

0x37c7,	// (0x0001253f) scroll_pane_cp36

0x37f1,	// (0x00012569) list_single_graphic_hl_pane_cp2_ParamLimits

0x37f1,	// (0x00012569) list_single_graphic_hl_pane_cp2

0x63b4,	// (0x0001512c) list_single_graphic_hl_pane_ParamLimits

0x63b4,	// (0x0001512c) list_single_graphic_hl_pane

0xd0fc,	// (0x0001be74) aid_size_min_hl_cp1

0x7fe8,	// (0x00016d60) list_highlight_pane_cp34_ParamLimits

0x7fe8,	// (0x00016d60) list_highlight_pane_cp34

0x7ff9,	// (0x00016d71) list_single_graphic_hl_pane_g1_ParamLimits

0x7ff9,	// (0x00016d71) list_single_graphic_hl_pane_g1

0xd105,	// (0x0001be7d) list_single_graphic_hl_pane_g2_ParamLimits

0xd105,	// (0x0001be7d) list_single_graphic_hl_pane_g2

0xd105,	// (0x0001be7d) list_single_graphic_hl_pane_g3_ParamLimits

0xd105,	// (0x0001be7d) list_single_graphic_hl_pane_g3

0xd111,	// (0x0001be89) list_single_graphic_hl_pane_g4_ParamLimits

0xd111,	// (0x0001be89) list_single_graphic_hl_pane_g4

0xd11d,	// (0x0001be95) list_single_graphic_hl_pane_g5_ParamLimits

0xd11d,	// (0x0001be95) list_single_graphic_hl_pane_g5

0x0004,

0xfbe0,	// (0x0001e958) list_single_graphic_hl_pane_g_ParamLimits

0xfbe0,	// (0x0001e958) list_single_graphic_hl_pane_g

0xd131,	// (0x0001bea9) list_single_graphic_hl_pane_t1_ParamLimits

0xd131,	// (0x0001bea9) list_single_graphic_hl_pane_t1

0x8026,	// (0x00016d9e) aid_size_min_hl_cp2

0x802f,	// (0x00016da7) list_highlight_pane_cp34_cp2_ParamLimits

0x802f,	// (0x00016da7) list_highlight_pane_cp34_cp2

0x7ff9,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ff9,	// (0x00016d71) list_single_graphic_hl_pane_g1_cp2

0x803c,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x803c,	// (0x00016db4) list_single_graphic_hl_pane_g2_cp2

0x8048,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8048,	// (0x00016dc0) list_single_graphic_hl_pane_g3_cp2

0x3d41,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3d41,	// (0x00012ab9) list_single_graphic_hl_pane_g4_cp2

0x8012,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8012,	// (0x00016d8a) list_single_graphic_hl_pane_g5_cp2

0xdc0d,	// (0x0001c985) control_pane_g4_ParamLimits

0xdc0d,	// (0x0001c985) control_pane_g4

0x4190,	// (0x00012f08) bg_popup_sub_pane_cp10_ParamLimits

0x7650,	// (0x000163c8) list_choice_list_pane_ParamLimits

0x765f,	// (0x000163d7) scroll_pane_cp23

0x2489,	// (0x00011201) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c6a,	// (0x000169e2) list_preview_fixed_pane_ParamLimits

0x7c80,	// (0x000169f8) list_preview_fixed_pane_cp_ParamLimits

0x7c80,	// (0x000169f8) list_preview_fixed_pane_cp

0x7c8c,	// (0x00016a04) popup_preview_fixed_window_g1_ParamLimits

0x7c8c,	// (0x00016a04) popup_preview_fixed_window_g1

0x7c98,	// (0x00016a10) popup_preview_fixed_window_g2_ParamLimits

0x7c98,	// (0x00016a10) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0001e8e7) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0001e8e7) popup_preview_fixed_window_g

0xd83a,	// (0x0001c5b2) aid_navi_side_left_pane_ParamLimits

0xd84f,	// (0x0001c5c7) aid_navi_side_right_pane_ParamLimits

0xd867,	// (0x0001c5df) navi_icon_pane_stacon_ParamLimits

0xd87b,	// (0x0001c5f3) navi_navi_pane_stacon_ParamLimits

0xd867,	// (0x0001c5df) navi_text_pane_stacon_ParamLimits

0x20f2,	// (0x00010e6a) main_text_info_pane

0x806c,	// (0x00016de4) listscroll_text_info_pane

0x8074,	// (0x00016dec) list_text_info_pane_ParamLimits

0x8074,	// (0x00016dec) list_text_info_pane

0x8083,	// (0x00016dfb) scroll_pane_cp24_ParamLimits

0x8083,	// (0x00016dfb) scroll_pane_cp24

0x80a1,	// (0x00016e19) list_text_info_pane_t1_ParamLimits

0x80a1,	// (0x00016e19) list_text_info_pane_t1

0x41da,	// (0x00012f52) popup_fast_swap2_window_ParamLimits

0x41da,	// (0x00012f52) popup_fast_swap2_window

0x80da,	// (0x00016e52) aid_size_cell_fast2

0x20f2,	// (0x00010e6a) bg_popup_window_pane_cp17

0x5183,	// (0x00013efb) heading_pane_cp2

0x26c9,	// (0x00011441) listscroll_fast2_pane

0x80e4,	// (0x00016e5c) grid_fast2_pane

0x80ee,	// (0x00016e66) listscroll_fast2_pane_g1

0x80f6,	// (0x00016e6e) listscroll_fast2_pane_g2

0x0001,

0xfbeb,	// (0x0001e963) listscroll_fast2_pane_g

0x32b2,	// (0x0001202a) scroll_pane_cp26

0x8100,	// (0x00016e78) cell_fast2_pane_ParamLimits

0x8100,	// (0x00016e78) cell_fast2_pane

0x8115,	// (0x00016e8d) cell_fast2_pane_g1

0x811e,	// (0x00016e96) cell_fast2_pane_g2

0x8127,	// (0x00016e9f) cell_fast2_pane_g3

0x0002,

0xfbf0,	// (0x0001e968) cell_fast2_pane_g

0x27af,	// (0x00011527) grid_highlight_pane_cp9

0x27c4,	// (0x0001153c) main_eswt_pane_ParamLimits

0x27c4,	// (0x0001153c) main_eswt_pane

0x8098,	// (0x00016e10) list_single_text_info_pane

0x812f,	// (0x00016ea7) eswt_ctrl_button_pane

0x812f,	// (0x00016ea7) eswt_ctrl_canvas_pane

0x8137,	// (0x00016eaf) eswt_ctrl_combo_pane

0x812f,	// (0x00016ea7) eswt_ctrl_default_pane

0x812f,	// (0x00016ea7) eswt_ctrl_label_pane

0x813f,	// (0x00016eb7) eswt_ctrl_wait_pane

0x8147,	// (0x00016ebf) eswt_shell_pane

0x20f2,	// (0x00010e6a) listscroll_eswt_app_pane

0x8167,	// (0x00016edf) popup_eswt_tasktip_window_ParamLimits

0x8167,	// (0x00016edf) popup_eswt_tasktip_window

0x4d5c,	// (0x00013ad4) bg_popup_window_pane_cp18

0x8178,	// (0x00016ef0) eswt_control_pane_g1_ParamLimits

0x8178,	// (0x00016ef0) eswt_control_pane_g1

0x8185,	// (0x00016efd) eswt_control_pane_g2_ParamLimits

0x8185,	// (0x00016efd) eswt_control_pane_g2

0x8192,	// (0x00016f0a) eswt_control_pane_g3_ParamLimits

0x8192,	// (0x00016f0a) eswt_control_pane_g3

0x819f,	// (0x00016f17) eswt_control_pane_g4_ParamLimits

0x819f,	// (0x00016f17) eswt_control_pane_g4

0x0003,

0xfbf7,	// (0x0001e96f) eswt_control_pane_g_ParamLimits

0xfbf7,	// (0x0001e96f) eswt_control_pane_g

0x2fbf,	// (0x00011d37) bg_button_pane_ParamLimits

0x2fbf,	// (0x00011d37) bg_button_pane

0x27c4,	// (0x0001153c) common_borders_pane_copy2_ParamLimits

0x27c4,	// (0x0001153c) common_borders_pane_copy2

0x81ac,	// (0x00016f24) control_button_pane_g1_ParamLimits

0x81ac,	// (0x00016f24) control_button_pane_g1

0x81b8,	// (0x00016f30) control_button_pane_g2_ParamLimits

0x81b8,	// (0x00016f30) control_button_pane_g2

0x81c4,	// (0x00016f3c) control_button_pane_g3_ParamLimits

0x81c4,	// (0x00016f3c) control_button_pane_g3

0x0002,

0xfc00,	// (0x0001e978) control_button_pane_g_ParamLimits

0xfc00,	// (0x0001e978) control_button_pane_g

0x81d8,	// (0x00016f50) control_button_pane_t1

0x81e6,	// (0x00016f5e) control_button_pane_t2

0x0001,

0xfc07,	// (0x0001e97f) control_button_pane_t

0x4c42,	// (0x000139ba) bg_button_pane_g1

0x4c52,	// (0x000139ca) bg_button_pane_g2

0x4c4a,	// (0x000139c2) bg_button_pane_g3

0x4c62,	// (0x000139da) bg_button_pane_g4

0x4c5a,	// (0x000139d2) bg_button_pane_g5

0x4c6a,	// (0x000139e2) bg_button_pane_g6

0x4c72,	// (0x000139ea) bg_button_pane_g7

0x4c82,	// (0x000139fa) bg_button_pane_g8

0x4c7a,	// (0x000139f2) bg_button_pane_g9

0x0008,

0xf866,	// (0x0001e5de) bg_button_pane_g

0x760b,	// (0x00016383) common_borders_pane_ParamLimits

0x760b,	// (0x00016383) common_borders_pane

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy1_ParamLimits

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy1

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy1_ParamLimits

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy1

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy1_ParamLimits

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy1

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy1_ParamLimits

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy1

0x7646,	// (0x000163be) bg_eswt_ctrl_canvas_pane_g1

0x760b,	// (0x00016383) common_borders_pane_cp2_ParamLimits

0x760b,	// (0x00016383) common_borders_pane_cp2

0x760b,	// (0x00016383) common_borders_pane_cp3_ParamLimits

0x760b,	// (0x00016383) common_borders_pane_cp3

0x81f4,	// (0x00016f6c) separator_horizontal_pane

0x81fc,	// (0x00016f74) separator_vertical_pane

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy2_ParamLimits

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy2

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy2_ParamLimits

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy2

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy2_ParamLimits

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy2

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy2_ParamLimits

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy2

0x20f2,	// (0x00010e6a) common_borders_pane_cp4

0x8205,	// (0x00016f7d) separator_horizontal_pane_g1

0x820e,	// (0x00016f86) separator_horizontal_pane_g2

0x8217,	// (0x00016f8f) separator_horizontal_pane_g3

0x0002,

0xfc0c,	// (0x0001e984) separator_horizontal_pane_g

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy3_ParamLimits

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy3

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy3_ParamLimits

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy3

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy3_ParamLimits

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy3

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy3_ParamLimits

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy3

0x20f2,	// (0x00010e6a) common_borders_pane_cp5

0x8220,	// (0x00016f98) separator_vertical_pane_g1

0x8229,	// (0x00016fa1) separator_vertical_pane_g2

0x8232,	// (0x00016faa) separator_vertical_pane_g3

0x0002,

0xfc13,	// (0x0001e98b) separator_vertical_pane_g

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy4_ParamLimits

0x8178,	// (0x00016ef0) eswt_control_pane_g1_copy4

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy4_ParamLimits

0x8185,	// (0x00016efd) eswt_control_pane_g2_copy4

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy4_ParamLimits

0x8192,	// (0x00016f0a) eswt_control_pane_g3_copy4

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy4_ParamLimits

0x819f,	// (0x00016f17) eswt_control_pane_g4_copy4

0x823b,	// (0x00016fb3) eswt_ctrl_combo_button_pane

0x8243,	// (0x00016fbb) eswt_ctrl_input_pane

0x824b,	// (0x00016fc3) popup_choice_list_window_cp70

0x8253,	// (0x00016fcb) eswt_ctrl_input_pane_t1

0x20f2,	// (0x00010e6a) input_focus_pane_cp70

0x760b,	// (0x00016383) bg_button_pane_cp70_ParamLimits

0x760b,	// (0x00016383) bg_button_pane_cp70

0x8261,	// (0x00016fd9) eswt_ctrl_combo_button_pane_g1

0x8269,	// (0x00016fe1) wait_bar_pane_cp70

0x4d5c,	// (0x00013ad4) bg_popup_window_pane_cp70_ParamLimits

0x4d5c,	// (0x00013ad4) bg_popup_window_pane_cp70

0x8271,	// (0x00016fe9) popup_eswt_tasktip_window_t1

0x8287,	// (0x00016fff) wait_bar_pane_cp71_ParamLimits

0x8287,	// (0x00016fff) wait_bar_pane_cp71

0x8293,	// (0x0001700b) grid_eswt_app_pane

0x35d3,	// (0x0001234b) scroll_pane_cp70

0x829c,	// (0x00017014) cell_eswt_app_pane_ParamLimits

0x829c,	// (0x00017014) cell_eswt_app_pane

0x82d0,	// (0x00017048) cell_eswt_app_pane_g1_ParamLimits

0x82d0,	// (0x00017048) cell_eswt_app_pane_g1

0x82ff,	// (0x00017077) cell_eswt_app_pane_g2_ParamLimits

0x82ff,	// (0x00017077) cell_eswt_app_pane_g2

0x0001,

0xfc1a,	// (0x0001e992) cell_eswt_app_pane_g_ParamLimits

0xfc1a,	// (0x0001e992) cell_eswt_app_pane_g

0x8328,	// (0x000170a0) cell_eswt_app_pane_t1_ParamLimits

0x8328,	// (0x000170a0) cell_eswt_app_pane_t1

0x835a,	// (0x000170d2) grid_highlight_pane_cp70_ParamLimits

0x835a,	// (0x000170d2) grid_highlight_pane_cp70

0x3cdd,	// (0x00012a55) set_content_pane_g1

0x40b2,	// (0x00012e2a) status_small_volume_pane

0xe4a7,	// (0x0001d21f) status_small_volume_pane_g1

0xe4af,	// (0x0001d227) volume_small2_pane

0xe4b8,	// (0x0001d230) volume_small2_pane_g1

0xe4c1,	// (0x0001d239) volume_small2_pane_g2

0xe4ca,	// (0x0001d242) volume_small2_pane_g3

0xe4d3,	// (0x0001d24b) volume_small2_pane_g4

0xe4dc,	// (0x0001d254) volume_small2_pane_g5

0xe4e5,	// (0x0001d25d) volume_small2_pane_g6

0xe4ee,	// (0x0001d266) volume_small2_pane_g7

0xe4f7,	// (0x0001d26f) volume_small2_pane_g8

0xe500,	// (0x0001d278) volume_small2_pane_g9

0xe509,	// (0x0001d281) volume_small2_pane_g10

0x0009,

0xfc1f,	// (0x0001e997) volume_small2_pane_g

0x7a27,	// (0x0001679f) fep_vkb_top_text_pane_g1_ParamLimits

0x7a42,	// (0x000167ba) fep_vkb_top_text_pane_t1_ParamLimits

0x7ca4,	// (0x00016a1c) popup_preview_fixed_window_g3_ParamLimits

0x7ca4,	// (0x00016a1c) popup_preview_fixed_window_g3

0x4679,	// (0x000133f1) popup_toolbar_trans_pane

0x611d,	// (0x00014e95) aid_height_set_list_ParamLimits

0x612e,	// (0x00014ea6) aid_size_parent_ParamLimits

0x4190,	// (0x00012f08) list_highlight_pane_cp2_ParamLimits

0x3cdd,	// (0x00012a55) set_content_pane_g1_ParamLimits

0xccab,	// (0x0001ba23) list_single_image_pane_ParamLimits

0xccab,	// (0x0001ba23) list_single_image_pane

0x8366,	// (0x000170de) aid_size_cell_image_ParamLimits

0x8366,	// (0x000170de) aid_size_cell_image

0x8373,	// (0x000170eb) grid_single_image_pane_ParamLimits

0x8373,	// (0x000170eb) grid_single_image_pane

0x2fe5,	// (0x00011d5d) list_single_image_pane_g1_ParamLimits

0x2fe5,	// (0x00011d5d) list_single_image_pane_g1

0x2ff1,	// (0x00011d69) list_single_image_pane_g2_ParamLimits

0x2ff1,	// (0x00011d69) list_single_image_pane_g2

0x0001,

0xfc34,	// (0x0001e9ac) list_single_image_pane_g_ParamLimits

0xfc34,	// (0x0001e9ac) list_single_image_pane_g

0x837f,	// (0x000170f7) list_single_image_pane_t1_ParamLimits

0x837f,	// (0x000170f7) list_single_image_pane_t1

0x8395,	// (0x0001710d) cell_image_list_pane_ParamLimits

0x8395,	// (0x0001710d) cell_image_list_pane

0x83a9,	// (0x00017121) cell_image_list_pane_g1

0x83b2,	// (0x0001712a) cell_image_list_pane_g2

0x0001,

0xfc39,	// (0x0001e9b1) cell_image_list_pane_g

0x83bb,	// (0x00017133) aid_size_cell_tb_trans_pane

0x2fbf,	// (0x00011d37) bg_tb_trans_pane

0x83cd,	// (0x00017145) grid_tb_trans_pane

0x4c42,	// (0x000139ba) bg_tb_trans_pane_g1

0x4c52,	// (0x000139ca) bg_tb_trans_pane_g2

0x4c4a,	// (0x000139c2) bg_tb_trans_pane_g3

0x4c62,	// (0x000139da) bg_tb_trans_pane_g4

0x4c5a,	// (0x000139d2) bg_tb_trans_pane_g5

0x4c82,	// (0x000139fa) bg_tb_trans_pane_g6

0x4c7a,	// (0x000139f2) bg_tb_trans_pane_g7

0x4c6a,	// (0x000139e2) bg_tb_trans_pane_g8

0x4c72,	// (0x000139ea) bg_tb_trans_pane_g9

0x0008,

0xfc3e,	// (0x0001e9b6) bg_tb_trans_pane_g

0x83e1,	// (0x00017159) cell_toolbar_trans_pane_ParamLimits

0x83e1,	// (0x00017159) cell_toolbar_trans_pane

0x7646,	// (0x000163be) cell_toolbar_trans_pane_g1

0x7191,	// (0x00015f09) list_form2_midp_pane_t1

0x719f,	// (0x00015f17) list_form2_midp_pane_t2

0x0001,

0xfae7,	// (0x0001e85f) list_form2_midp_pane_t

0x71ad,	// (0x00015f25) scroll_pane_cp51_ParamLimits

0x73b0,	// (0x00016128) form2_midp_wait_pane_g1

0x73b9,	// (0x00016131) form2_midp_wait_pane_g2

0x73c2,	// (0x0001613a) form2_midp_wait_pane_g3

0x0002,

0xfafc,	// (0x0001e874) form2_midp_wait_pane_g

0x21e6,	// (0x00010f5e) list_highlight_pane_cp21_ParamLimits

0x7411,	// (0x00016189) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7420,	// (0x00016198) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xcc37,	// (0x0001b9af) list_single_2graphic_im_pane_ParamLimits

0xcc37,	// (0x0001b9af) list_single_2graphic_im_pane

0x8407,	// (0x0001717f) list_single_2graphic_im_pane_g1_ParamLimits

0x8407,	// (0x0001717f) list_single_2graphic_im_pane_g1

0x8418,	// (0x00017190) list_single_2graphic_im_pane_g2_ParamLimits

0x8418,	// (0x00017190) list_single_2graphic_im_pane_g2

0x8424,	// (0x0001719c) list_single_2graphic_im_pane_g3_ParamLimits

0x8424,	// (0x0001719c) list_single_2graphic_im_pane_g3

0x0003,

0xfc51,	// (0x0001e9c9) list_single_2graphic_im_pane_g_ParamLimits

0xfc51,	// (0x0001e9c9) list_single_2graphic_im_pane_g

0x8444,	// (0x000171bc) list_single_2graphic_im_pane_t1_ParamLimits

0x8444,	// (0x000171bc) list_single_2graphic_im_pane_t1

0x7cb0,	// (0x00016a28) list_single_graphic_2heading_pane_fp_ParamLimits

0x7cb0,	// (0x00016a28) list_single_graphic_2heading_pane_fp

0xcf6e,	// (0x0001bce6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xcf6e,	// (0x0001bce6) list_single_graphic_2heading_pane_fp_g1

0x7cc7,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7cc7,	// (0x00016a3f) list_single_graphic_2heading_pane_fp_g2

0xc56f,	// (0x0001b2e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc56f,	// (0x0001b2e7) list_single_graphic_2heading_pane_fp_g3

0xcf43,	// (0x0001bcbb) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xcf43,	// (0x0001bcbb) list_single_graphic_2heading_pane_fp_g4

0x7cd3,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cd3,	// (0x00016a4b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0001e8f7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0001e8f7) list_single_graphic_2heading_pane_fp_g

0xd147,	// (0x0001bebf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd147,	// (0x0001bebf) list_single_graphic_2heading_pane_fp_t1

0xcfa6,	// (0x0001bd1e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xcfa6,	// (0x0001bd1e) list_single_graphic_2heading_pane_fp_t2

0xd15d,	// (0x0001bed5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xd15d,	// (0x0001bed5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5a,	// (0x0001e9d2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5a,	// (0x0001e9d2) list_single_graphic_2heading_pane_fp_t

0x76e6,	// (0x0001645e) fep_hwr_write_pane_g5_ParamLimits

0x76e6,	// (0x0001645e) fep_hwr_write_pane_g5

0x76f2,	// (0x0001646a) fep_hwr_write_pane_g6_ParamLimits

0x76f2,	// (0x0001646a) fep_hwr_write_pane_g6

0x8147,	// (0x00016ebf) eswt_shell_pane_ParamLimits

0x4d5c,	// (0x00013ad4) bg_popup_window_pane_cp18_ParamLimits

0x6054,	// (0x00014dcc) heading_pane_cp70

0x8271,	// (0x00016fe9) popup_eswt_tasktip_window_t1_ParamLimits

0x4796,	// (0x0001350e) aid_touch_tab_arrow_left

0x47a5,	// (0x0001351d) aid_touch_tab_arrow_right

0x212e,	// (0x00010ea6) title_pane_g3_ParamLimits

0x212e,	// (0x00010ea6) title_pane_g3

0x2eac,	// (0x00011c24) set_value_pane_g1

0x4679,	// (0x000133f1) popup_toolbar_trans_pane_ParamLimits

0x83bb,	// (0x00017133) aid_size_cell_tb_trans_pane_ParamLimits

0x2fbf,	// (0x00011d37) bg_tb_trans_pane_ParamLimits

0x83cd,	// (0x00017145) grid_tb_trans_pane_ParamLimits

0x2489,	// (0x00011201) cont_note_pane_ParamLimits

0x2489,	// (0x00011201) cont_note_pane

0x27c4,	// (0x0001153c) cont_snote2_single_text_pane_ParamLimits

0x27c4,	// (0x0001153c) cont_snote2_single_text_pane

0x27c4,	// (0x0001153c) cont_snote2_single_graphic_pane_ParamLimits

0x27c4,	// (0x0001153c) cont_snote2_single_graphic_pane

0x5399,	// (0x00014111) cont_note_wait_pane_ParamLimits

0x5399,	// (0x00014111) cont_note_wait_pane

0x5399,	// (0x00014111) cont_note_image_pane_ParamLimits

0x5399,	// (0x00014111) cont_note_image_pane

0x84a1,	// (0x00017219) popup_note2_window_g1_ParamLimits

0x84a1,	// (0x00017219) popup_note2_window_g1

0x84d2,	// (0x0001724a) popup_note2_window_t1_ParamLimits

0x84d2,	// (0x0001724a) popup_note2_window_t1

0x8517,	// (0x0001728f) popup_note2_window_t2_ParamLimits

0x8517,	// (0x0001728f) popup_note2_window_t2

0x855c,	// (0x000172d4) popup_note2_window_t3_ParamLimits

0x855c,	// (0x000172d4) popup_note2_window_t3

0x85a1,	// (0x00017319) popup_note2_window_t4_ParamLimits

0x85a1,	// (0x00017319) popup_note2_window_t4

0x2501,	// (0x00011279) popup_note2_window_t5_ParamLimits

0x2501,	// (0x00011279) popup_note2_window_t5

0x0004,

0xfc66,	// (0x0001e9de) popup_note2_window_t_ParamLimits

0xfc66,	// (0x0001e9de) popup_note2_window_t

0x85d0,	// (0x00017348) popup_note2_image_window_g1_ParamLimits

0x85d0,	// (0x00017348) popup_note2_image_window_g1

0x85dc,	// (0x00017354) popup_note2_image_window_g2_ParamLimits

0x85dc,	// (0x00017354) popup_note2_image_window_g2

0x0001,

0xfc71,	// (0x0001e9e9) popup_note2_image_window_g_ParamLimits

0xfc71,	// (0x0001e9e9) popup_note2_image_window_g

0x85ee,	// (0x00017366) popup_note2_image_window_t1_ParamLimits

0x85ee,	// (0x00017366) popup_note2_image_window_t1

0x8606,	// (0x0001737e) popup_note2_image_window_t2_ParamLimits

0x8606,	// (0x0001737e) popup_note2_image_window_t2

0x861e,	// (0x00017396) popup_note2_image_window_t3_ParamLimits

0x861e,	// (0x00017396) popup_note2_image_window_t3

0x0002,

0xfc76,	// (0x0001e9ee) popup_note2_image_window_t_ParamLimits

0xfc76,	// (0x0001e9ee) popup_note2_image_window_t

0x53a7,	// (0x0001411f) popup_note2_wait_window_g1_ParamLimits

0x53a7,	// (0x0001411f) popup_note2_wait_window_g1

0x53b3,	// (0x0001412b) popup_note2_wait_window_g2_ParamLimits

0x53b3,	// (0x0001412b) popup_note2_wait_window_g2

0x53bf,	// (0x00014137) popup_note2_wait_window_g3_ParamLimits

0x53bf,	// (0x00014137) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0001e5c0) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0001e5c0) popup_note2_wait_window_g

0x863a,	// (0x000173b2) popup_note2_wait_window_t1_ParamLimits

0x863a,	// (0x000173b2) popup_note2_wait_window_t1

0x8658,	// (0x000173d0) popup_note2_wait_window_t2_ParamLimits

0x8658,	// (0x000173d0) popup_note2_wait_window_t2

0x8676,	// (0x000173ee) popup_note2_wait_window_t3_ParamLimits

0x8676,	// (0x000173ee) popup_note2_wait_window_t3

0x8688,	// (0x00017400) popup_note2_wait_window_t4_ParamLimits

0x8688,	// (0x00017400) popup_note2_wait_window_t4

0x0003,

0xfc7d,	// (0x0001e9f5) popup_note2_wait_window_t_ParamLimits

0xfc7d,	// (0x0001e9f5) popup_note2_wait_window_t

0x869a,	// (0x00017412) wait_bar2_pane_ParamLimits

0x869a,	// (0x00017412) wait_bar2_pane

0x86b2,	// (0x0001742a) popup_snote2_single_text_window_g1_ParamLimits

0x86b2,	// (0x0001742a) popup_snote2_single_text_window_g1

0x86da,	// (0x00017452) popup_snote2_single_text_window_t1_ParamLimits

0x86da,	// (0x00017452) popup_snote2_single_text_window_t1

0x8726,	// (0x0001749e) popup_snote2_single_text_window_t2_ParamLimits

0x8726,	// (0x0001749e) popup_snote2_single_text_window_t2

0x8772,	// (0x000174ea) popup_snote2_single_text_window_t3_ParamLimits

0x8772,	// (0x000174ea) popup_snote2_single_text_window_t3

0x87b3,	// (0x0001752b) popup_snote2_single_text_window_t4_ParamLimits

0x87b3,	// (0x0001752b) popup_snote2_single_text_window_t4

0x87e9,	// (0x00017561) popup_snote2_single_text_window_t5_ParamLimits

0x87e9,	// (0x00017561) popup_snote2_single_text_window_t5

0x0004,

0xfc86,	// (0x0001e9fe) popup_snote2_single_text_window_t_ParamLimits

0xfc86,	// (0x0001e9fe) popup_snote2_single_text_window_t

0x8814,	// (0x0001758c) popup_snote2_single_graphic_window_g1_ParamLimits

0x8814,	// (0x0001758c) popup_snote2_single_graphic_window_g1

0x883c,	// (0x000175b4) popup_snote2_single_graphic_window_g2_ParamLimits

0x883c,	// (0x000175b4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc91,	// (0x0001ea09) popup_snote2_single_graphic_window_g_ParamLimits

0xfc91,	// (0x0001ea09) popup_snote2_single_graphic_window_g

0x8864,	// (0x000175dc) popup_snote2_single_graphic_window_t1_ParamLimits

0x8864,	// (0x000175dc) popup_snote2_single_graphic_window_t1

0x88b0,	// (0x00017628) popup_snote2_single_graphic_window_t2_ParamLimits

0x88b0,	// (0x00017628) popup_snote2_single_graphic_window_t2

0x8772,	// (0x000174ea) popup_snote2_single_graphic_window_t3_ParamLimits

0x8772,	// (0x000174ea) popup_snote2_single_graphic_window_t3

0x87b3,	// (0x0001752b) popup_snote2_single_graphic_window_t4_ParamLimits

0x87b3,	// (0x0001752b) popup_snote2_single_graphic_window_t4

0x87e9,	// (0x00017561) popup_snote2_single_graphic_window_t5_ParamLimits

0x87e9,	// (0x00017561) popup_snote2_single_graphic_window_t5

0x0004,

0xfc96,	// (0x0001ea0e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc96,	// (0x0001ea0e) popup_snote2_single_graphic_window_t

0x7062,	// (0x00015dda) clock_nsta_pane_cp2_t1

0x7062,	// (0x00015dda) clock_nsta_pane_cp2_t2

0x0001,

0xfabd,	// (0x0001e835) clock_nsta_pane_cp2_t

0xc8a2,	// (0x0001b61a) form_field_data_wide_pane_g1_ParamLimits

0x2fe5,	// (0x00011d5d) form_field_data_wide_pane_g2_ParamLimits

0x2fe5,	// (0x00011d5d) form_field_data_wide_pane_g2

0x2ff1,	// (0x00011d69) form_field_data_wide_pane_g3_ParamLimits

0x2ff1,	// (0x00011d69) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001e40a) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001e40a) form_field_data_wide_pane_g

0x6f3b,	// (0x00015cb3) grid_touch_3_pane_ParamLimits

0x6f3b,	// (0x00015cb3) grid_touch_3_pane

0x88fc,	// (0x00017674) cell_touch_3_pane_ParamLimits

0x88fc,	// (0x00017674) cell_touch_3_pane

0x7646,	// (0x000163be) cell_touch_3_pane_g1

0x7646,	// (0x000163be) cell_touch_3_pane_g2

0x0001,

0xfb42,	// (0x0001e8ba) cell_touch_3_pane_g

0x2533,	// (0x000112ab) cont_query_data_pane

0x253b,	// (0x000112b3) cont_query_data_pane_cp1

0x892b,	// (0x000176a3) button_value_adjust_pane_cp7

0x8933,	// (0x000176ab) query_popup_pane_cp3

0x385e,	// (0x000125d6) bg_popup_sub_pane_cp22_ParamLimits

0xd97c,	// (0x0001c6f4) navi_navi_volume_pane_cp2

0xd997,	// (0x0001c70f) popup_side_volume_key_window_g2

0xd9a6,	// (0x0001c71e) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001e49c) popup_side_volume_key_window_g

0xd9c3,	// (0x0001c73b) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001e4a3) popup_side_volume_key_window_t

0x3ba7,	// (0x0001291f) popup_side_volume_key_window_ParamLimits

0xc53b,	// (0x0001b2b3) list_double_graphic_pane_g4_ParamLimits

0xc53b,	// (0x0001b2b3) list_double_graphic_pane_g4

0xcc84,	// (0x0001b9fc) list_single_2heading_msg_pane_ParamLimits

0xcc84,	// (0x0001b9fc) list_single_2heading_msg_pane

0xd17d,	// (0x0001bef5) list_single_2heading_msg_pane_g1_ParamLimits

0xd17d,	// (0x0001bef5) list_single_2heading_msg_pane_g1

0xc38c,	// (0x0001b104) list_single_2heading_msg_pane_g2_ParamLimits

0xc38c,	// (0x0001b104) list_single_2heading_msg_pane_g2

0xcd6a,	// (0x0001bae2) list_single_2heading_msg_pane_g3_ParamLimits

0xcd6a,	// (0x0001bae2) list_single_2heading_msg_pane_g3

0xd189,	// (0x0001bf01) list_single_2heading_msg_pane_g4_ParamLimits

0xd189,	// (0x0001bf01) list_single_2heading_msg_pane_g4

0x0003,

0xfca1,	// (0x0001ea19) list_single_2heading_msg_pane_g_ParamLimits

0xfca1,	// (0x0001ea19) list_single_2heading_msg_pane_g

0xd1a1,	// (0x0001bf19) list_single_2heading_msg_pane_t1_ParamLimits

0xd1a1,	// (0x0001bf19) list_single_2heading_msg_pane_t1

0xd1c9,	// (0x0001bf41) list_single_2heading_msg_pane_t2_ParamLimits

0xd1c9,	// (0x0001bf41) list_single_2heading_msg_pane_t2

0xd1fd,	// (0x0001bf75) list_single_2heading_msg_pane_t3_ParamLimits

0xd1fd,	// (0x0001bf75) list_single_2heading_msg_pane_t3

0xd236,	// (0x0001bfae) list_single_2heading_msg_pane_t4_ParamLimits

0xd236,	// (0x0001bfae) list_single_2heading_msg_pane_t4

0x0003,

0xfcaa,	// (0x0001ea22) list_single_2heading_msg_pane_t_ParamLimits

0xfcaa,	// (0x0001ea22) list_single_2heading_msg_pane_t

0x213a,	// (0x00010eb2) title_pane_g4_ParamLimits

0x213a,	// (0x00010eb2) title_pane_g4

0xd78a,	// (0x0001c502) title_pane_stacon_g3_ParamLimits

0xd78a,	// (0x0001c502) title_pane_stacon_g3

0x8438,	// (0x000171b0) list_single_2graphic_im_pane_g4_ParamLimits

0x8438,	// (0x000171b0) list_single_2graphic_im_pane_g4

0x5dfa,	// (0x00014b72) popup_side_volume_key_window_cp

0x6709,	// (0x00015481) main_idle_act2_pane_t1

0xdd37,	// (0x0001caaf) toolbar_button_pane_g10

0x29bc,	// (0x00011734) popup_toolbar_window_cp1

0x7053,	// (0x00015dcb) clock_nsta_pane_cp_t1

0x7053,	// (0x00015dcb) clock_nsta_pane_cp_t2

0x0001,

0xfab8,	// (0x0001e830) clock_nsta_pane_cp_t

0xd97c,	// (0x0001c6f4) navi_navi_volume_pane_cp2_ParamLimits

0xd98b,	// (0x0001c703) popup_side_volume_key_window_g1_ParamLimits

0xd997,	// (0x0001c70f) popup_side_volume_key_window_g2_ParamLimits

0xd9a6,	// (0x0001c71e) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001e49c) popup_side_volume_key_window_g_ParamLimits

0xe1d2,	// (0x0001cf4a) fep_hwr_aid_pane

0xabe8,	// (0x00019960) bg_fep_hwr_top_pane_g4_ParamLimits

0x76c8,	// (0x00016440) fep_hwr_top_pane_g1_ParamLimits

0x76b6,	// (0x0001642e) fep_hwr_top_pane_g2_ParamLimits

0xe28b,	// (0x0001d003) fep_hwr_top_pane_g3_ParamLimits

0xfb0d,	// (0x0001e885) fep_hwr_top_pane_g_ParamLimits

0xe2a0,	// (0x0001d018) fep_hwr_top_text_pane_ParamLimits

0x5bc4,	// (0x0001493c) aid_touch_tab_arrow_arrow_2

0x5bbb,	// (0x00014933) aid_touch_tab_arrow_left_2

0xe1e6,	// (0x0001cf5e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe21d,	// (0x0001cf95) fep_hwr_prediction_pane

0x782f,	// (0x000165a7) fep_vkb_prediction_pane

0x7933,	// (0x000166ab) fep_vkb_side_pane_g3_ParamLimits

0x7933,	// (0x000166ab) fep_vkb_side_pane_g3

0x78df,	// (0x00016657) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7eec,	// (0x00016c64) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ef9,	// (0x00016c71) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0001e92f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a4c,	// (0x000177c4) fep_hwr_prediction_pane_g1

0xe512,	// (0x0001d28a) fep_hwr_prediction_pane_g2

0xe51a,	// (0x0001d292) fep_hwr_prediction_pane_g3

0xe522,	// (0x0001d29a) fep_hwr_prediction_pane_g4

0x0003,

0xfcb3,	// (0x0001ea2b) fep_hwr_prediction_pane_g

0x8a4c,	// (0x000177c4) fep_vkb_prediction_pane_g1

0x8a56,	// (0x000177ce) fep_vkb_prediction_pane_g2

0x8a5e,	// (0x000177d6) fep_vkb_prediction_pane_g3

0x8a66,	// (0x000177de) fep_vkb_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0001ea34) fep_vkb_prediction_pane_g

0xe00f,	// (0x0001cd87) slider_set_pane_g3

0xe023,	// (0x0001cd9b) slider_set_pane_g4

0xe03b,	// (0x0001cdb3) slider_set_pane_g5

0xe00f,	// (0x0001cd87) slider_set_pane_g6

0xe051,	// (0x0001cdc9) slider_set_pane_g7

0x628b,	// (0x00015003) slider_form_pane_g3

0x6294,	// (0x0001500c) slider_form_pane_g4

0x629c,	// (0x00015014) slider_form_pane_g5

0x628b,	// (0x00015003) slider_form_pane_g6

0x62a4,	// (0x0001501c) slider_form_pane_g7

0x69dd,	// (0x00015755) slider_set_pane_vc_g3

0x69e6,	// (0x0001575e) slider_set_pane_vc_g4

0x69ef,	// (0x00015767) slider_set_pane_vc_g5

0x69dd,	// (0x00015755) slider_set_pane_vc_g6

0x69f8,	// (0x00015770) slider_set_pane_vc_g7

0x69dd,	// (0x00015755) slider_form_pane_vc_g1

0x69e6,	// (0x0001575e) slider_form_pane_vc_g2

0x69ef,	// (0x00015767) slider_form_pane_vc_g3

0x69dd,	// (0x00015755) slider_form_pane_vc_g4

0x6d59,	// (0x00015ad1) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x0001e809) slider_form_pane_vc_g

0x20f2,	// (0x00010e6a) main_idle_act3_pane

0x8a6e,	// (0x000177e6) ai3_links_pane

0x8a77,	// (0x000177ef) popup_ai3_data_window_ParamLimits

0x8a77,	// (0x000177ef) popup_ai3_data_window

0x20f2,	// (0x00010e6a) grid_ai3_links_pane

0x8a8f,	// (0x00017807) cell_ai3_links_pane_ParamLimits

0x8a8f,	// (0x00017807) cell_ai3_links_pane

0x8aa7,	// (0x0001781f) bg_popup_sub_pane_cp11

0x8ab4,	// (0x0001782c) cell_ai3_links_pane_g1

0x20f2,	// (0x00010e6a) bg_popup_sub_pane_cp12

0x8ad9,	// (0x00017851) heading_ai3_data_pane

0x8ae1,	// (0x00017859) list_ai3_gene_pane

0x8aed,	// (0x00017865) popup_ai3_data_window_g1

0x8af5,	// (0x0001786d) heading_ai3_data_pane_g1

0x8afd,	// (0x00017875) heading_ai3_data_pane_t1

0x8b0b,	// (0x00017883) list_double_ai3_gene_pane_ParamLimits

0x8b0b,	// (0x00017883) list_double_ai3_gene_pane

0x8b18,	// (0x00017890) list_single_ai3_gene_pane_ParamLimits

0x8b18,	// (0x00017890) list_single_ai3_gene_pane

0x760b,	// (0x00016383) list_highlight_pane_cp7_ParamLimits

0x760b,	// (0x00016383) list_highlight_pane_cp7

0x8b25,	// (0x0001789d) list_single_a13_gene_pane_t1_ParamLimits

0x8b25,	// (0x0001789d) list_single_a13_gene_pane_t1

0x8b3c,	// (0x000178b4) list_single_ai3_gene_pane_g1

0x8b45,	// (0x000178bd) list_single_ai3_gene_pane_g2

0x0001,

0xfcc5,	// (0x0001ea3d) list_single_ai3_gene_pane_g

0x8b4d,	// (0x000178c5) list_double_ai3_gene_pane_g1_ParamLimits

0x8b4d,	// (0x000178c5) list_double_ai3_gene_pane_g1

0x8b59,	// (0x000178d1) list_double_ai3_gene_pane_t1_ParamLimits

0x8b59,	// (0x000178d1) list_double_ai3_gene_pane_t1

0x8b75,	// (0x000178ed) list_double_ai3_gene_pane_t2_ParamLimits

0x8b75,	// (0x000178ed) list_double_ai3_gene_pane_t2

0x8b8a,	// (0x00017902) list_double_ai3_gene_pane_t3_ParamLimits

0x8b8a,	// (0x00017902) list_double_ai3_gene_pane_t3

0x0002,

0xfcca,	// (0x0001ea42) list_double_ai3_gene_pane_t_ParamLimits

0xfcca,	// (0x0001ea42) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd173,	// (0x0001beeb) aid_size_min_col_2

0x894e,	// (0x000176c6) aid_size_min_msg_ParamLimits

0x894e,	// (0x000176c6) aid_size_min_msg

0x7a33,	// (0x000167ab) fep_vkb_top_text_pane_g2_ParamLimits

0x7a33,	// (0x000167ab) fep_vkb_top_text_pane_g2

0x0001,

0xfb3d,	// (0x0001e8b5) fep_vkb_top_text_pane_g_ParamLimits

0xfb3d,	// (0x0001e8b5) fep_vkb_top_text_pane_g

0x20f2,	// (0x00010e6a) main_hc_apps_shell_pane

0x8ba7,	// (0x0001791f) grid_hc_apps_pane_ParamLimits

0x8ba7,	// (0x0001791f) grid_hc_apps_pane

0x8bb6,	// (0x0001792e) list_hc_apps_pane

0x8bbe,	// (0x00017936) scroll_pane_cp37_ParamLimits

0x8bbe,	// (0x00017936) scroll_pane_cp37

0x8bca,	// (0x00017942) cell_hc_apps_pane_ParamLimits

0x8bca,	// (0x00017942) cell_hc_apps_pane

0x8c7a,	// (0x000179f2) cell_hc_apps_pane_g1_ParamLimits

0x8c7a,	// (0x000179f2) cell_hc_apps_pane_g1

0x8cab,	// (0x00017a23) cell_hc_apps_pane_g2_ParamLimits

0x8cab,	// (0x00017a23) cell_hc_apps_pane_g2

0x8cc7,	// (0x00017a3f) cell_hc_apps_pane_g3_ParamLimits

0x8cc7,	// (0x00017a3f) cell_hc_apps_pane_g3

0x0002,

0xfcd1,	// (0x0001ea49) cell_hc_apps_pane_g_ParamLimits

0xfcd1,	// (0x0001ea49) cell_hc_apps_pane_g

0x8ce9,	// (0x00017a61) cell_hc_apps_pane_t1_ParamLimits

0x8ce9,	// (0x00017a61) cell_hc_apps_pane_t1

0x2489,	// (0x00011201) grid_highlight_pane_cp10_ParamLimits

0x2489,	// (0x00011201) grid_highlight_pane_cp10

0x8d29,	// (0x00017aa1) list_single_hc_apps_pane_ParamLimits

0x8d29,	// (0x00017aa1) list_single_hc_apps_pane

0x8d9c,	// (0x00017b14) list_single_hc_apps_pane_g1

0xd25b,	// (0x0001bfd3) list_single_hc_apps_pane_g2

0x0001,

0xfcd8,	// (0x0001ea50) list_single_hc_apps_pane_g

0xd274,	// (0x0001bfec) list_single_hc_apps_pane_g2_copy1

0xd290,	// (0x0001c008) list_single_hc_apps_pane_t1

0x21e6,	// (0x00010f5e) bg_set_opt_pane_cp_ParamLimits

0xd6b5,	// (0x0001c42d) setting_slider_pane_t1_ParamLimits

0xd6ce,	// (0x0001c446) setting_slider_pane_t2_ParamLimits

0xd6e7,	// (0x0001c45f) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001e2f2) setting_slider_pane_t_ParamLimits

0xd6fe,	// (0x0001c476) slider_set_pane_ParamLimits

0xdc21,	// (0x0001c999) control_pane_g5_ParamLimits

0xdc21,	// (0x0001c999) control_pane_g5

0x60e8,	// (0x00014e60) slider_set_pane_g1_ParamLimits

0xe003,	// (0x0001cd7b) slider_set_pane_g2_ParamLimits

0xe00f,	// (0x0001cd87) slider_set_pane_g3_ParamLimits

0xe023,	// (0x0001cd9b) slider_set_pane_g4_ParamLimits

0xe03b,	// (0x0001cdb3) slider_set_pane_g5_ParamLimits

0xe00f,	// (0x0001cd87) slider_set_pane_g6_ParamLimits

0xe051,	// (0x0001cdc9) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0001e6dc) slider_set_pane_g_ParamLimits

0x3c88,	// (0x00012a00) navi_icon_text_pane_ParamLimits

0x4757,	// (0x000134cf) aid_fill_nsta_2_ParamLimits

0x4796,	// (0x0001350e) aid_touch_tab_arrow_left_ParamLimits

0x47a5,	// (0x0001351d) aid_touch_tab_arrow_right_ParamLimits

0x4812,	// (0x0001358a) clock_nsta_pane_ParamLimits

0x5b97,	// (0x0001490f) navi_icon_pane_g1_ParamLimits

0x5ba6,	// (0x0001491e) navi_text_pane_t1_ParamLimits

0x7165,	// (0x00015edd) navi_icon_text_pane_g1_ParamLimits

0x7174,	// (0x00015eec) navi_icon_text_pane_t1_ParamLimits

0x8d9c,	// (0x00017b14) list_single_hc_apps_pane_g1_ParamLimits

0xd25b,	// (0x0001bfd3) list_single_hc_apps_pane_g2_ParamLimits

0xfcd8,	// (0x0001ea50) list_single_hc_apps_pane_g_ParamLimits

0xd274,	// (0x0001bfec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd290,	// (0x0001c008) list_single_hc_apps_pane_t1_ParamLimits

0xd5cf,	// (0x0001c347) popup_toolbar2_fixed_window_ParamLimits

0xd5cf,	// (0x0001c347) popup_toolbar2_fixed_window

0x466f,	// (0x000133e7) popup_toolbar2_float_window

0x20f2,	// (0x00010e6a) bg_popup_sub_pane_cp27

0x8e18,	// (0x00017b90) grid_toolbar2_float_pane

0x20f2,	// (0x00010e6a) bg_popup_sub_pane_cp26

0x8e18,	// (0x00017b90) grid_toolbar2_fixed_pane

0x8e20,	// (0x00017b98) cell_toolbar2_fixed_pane_ParamLimits

0x8e20,	// (0x00017b98) cell_toolbar2_fixed_pane

0x8e31,	// (0x00017ba9) cell_toolbar2_fixed_pane_g1

0x8e3a,	// (0x00017bb2) toolbar2_fixed_button_pane

0x4c42,	// (0x000139ba) toolbar2_fixed_button_pane_g1

0x4c52,	// (0x000139ca) toolbar2_fixed_button_pane_g2

0x4c4a,	// (0x000139c2) toolbar2_fixed_button_pane_g3

0x4c62,	// (0x000139da) toolbar2_fixed_button_pane_g4

0x4c5a,	// (0x000139d2) toolbar2_fixed_button_pane_g5

0x4c6a,	// (0x000139e2) toolbar2_fixed_button_pane_g6

0x4c72,	// (0x000139ea) toolbar2_fixed_button_pane_g7

0x4c82,	// (0x000139fa) toolbar2_fixed_button_pane_g8

0x4c7a,	// (0x000139f2) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0001e5de) toolbar2_fixed_button_pane_g

0x8e42,	// (0x00017bba) cell_toolbar2_float_pane_ParamLimits

0x8e42,	// (0x00017bba) cell_toolbar2_float_pane

0x8e53,	// (0x00017bcb) cell_toolbar2_float_pane_g1

0x8e3a,	// (0x00017bb2) toolbar2_fixed_button_pane_cp

0x7788,	// (0x00016500) fep_vkb_accented_list_pane_ParamLimits

0x7788,	// (0x00016500) fep_vkb_accented_list_pane

0xe3ee,	// (0x0001d166) bg_popup_fep_shadow_pane_g9

0x3e0a,	// (0x00012b82) bg_popup_fep_shadow_pane_cp3

0x3299,	// (0x00012011) list_accented_list_pane

0x8e5c,	// (0x00017bd4) list_single_accented_list_pane_ParamLimits

0x8e5c,	// (0x00017bd4) list_single_accented_list_pane

0x3e0a,	// (0x00012b82) list_highlight_pane_cp10

0x8e6d,	// (0x00017be5) list_single_accented_list_pane_t1

0x45bf,	// (0x00013337) popup_slider_window_ParamLimits

0x45bf,	// (0x00013337) popup_slider_window

0x893b,	// (0x000176b3) aid_indentation_list_msg

0x8f27,	// (0x00017c9f) bg_popup_window_pane_cp19

0x8f91,	// (0x00017d09) popup_slider_window_g1

0x8fad,	// (0x00017d25) popup_slider_window_g2

0x8fc9,	// (0x00017d41) popup_slider_window_g3

0x0005,

0xfcdd,	// (0x0001ea55) popup_slider_window_g

0x9025,	// (0x00017d9d) popup_slider_window_t1

0x9099,	// (0x00017e11) small_volume_slider_vertical_pane

0x7646,	// (0x000163be) small_volume_slider_vertical_pane_g1

0x7646,	// (0x000163be) small_volume_slider_vertical_pane_g2

0x90b5,	// (0x00017e2d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcef,	// (0x0001ea67) small_volume_slider_vertical_pane_g

0xd39f,	// (0x0001c117) area_side_right_pane_ParamLimits

0xd39f,	// (0x0001c117) area_side_right_pane

0xe52a,	// (0x0001d2a2) aid_size_side_button_ParamLimits

0xe52a,	// (0x0001d2a2) aid_size_side_button

0xe53e,	// (0x0001d2b6) grid_sctrl_middle_pane_ParamLimits

0xe53e,	// (0x0001d2b6) grid_sctrl_middle_pane

0xe55e,	// (0x0001d2d6) sctrl_sk_bottom_pane

0xe56f,	// (0x0001d2e7) sctrl_sk_top_pane

0xe581,	// (0x0001d2f9) aid_touch_sctrl_top

0x2489,	// (0x00011201) bg_sctrl_sk_pane_ParamLimits

0x2489,	// (0x00011201) bg_sctrl_sk_pane

0xe58e,	// (0x0001d306) sctrl_sk_top_pane_g1

0xe59b,	// (0x0001d313) sctrl_sk_top_pane_t1

0xe581,	// (0x0001d2f9) aid_touch_sctrl_bottom

0x2489,	// (0x00011201) bg_sctrl_sk_pane_cp_ParamLimits

0x2489,	// (0x00011201) bg_sctrl_sk_pane_cp

0xe5b6,	// (0x0001d32e) sctrl_sk_bottom_pane_g1

0xe59b,	// (0x0001d313) sctrl_sk_bottom_pane_t1

0xe5bf,	// (0x0001d337) cell_sctrl_middle_pane_ParamLimits

0xe5bf,	// (0x0001d337) cell_sctrl_middle_pane

0xe5da,	// (0x0001d352) aid_touch_sctrl_middle_ParamLimits

0xe5da,	// (0x0001d352) aid_touch_sctrl_middle

0x2fbf,	// (0x00011d37) bg_sctrl_middle_pane_ParamLimits

0x2fbf,	// (0x00011d37) bg_sctrl_middle_pane

0x78df,	// (0x00016657) cell_sctrl_middle_pane_g1_ParamLimits

0x78df,	// (0x00016657) cell_sctrl_middle_pane_g1

0xe5ec,	// (0x0001d364) cell_sctrl_middle_pane_g2_ParamLimits

0xe5ec,	// (0x0001d364) cell_sctrl_middle_pane_g2

0x0001,

0xfcfb,	// (0x0001ea73) cell_sctrl_middle_pane_g_ParamLimits

0xfcfb,	// (0x0001ea73) cell_sctrl_middle_pane_g

0x4c42,	// (0x000139ba) bg_sctrl_middle_pane_g1

0x4c52,	// (0x000139ca) bg_sctrl_middle_pane_g2

0x4c4a,	// (0x000139c2) bg_sctrl_middle_pane_g3

0x4c62,	// (0x000139da) bg_sctrl_middle_pane_g4

0x4c5a,	// (0x000139d2) bg_sctrl_middle_pane_g5

0x4c6a,	// (0x000139e2) bg_sctrl_middle_pane_g6

0x4c72,	// (0x000139ea) bg_sctrl_middle_pane_g7

0x4c82,	// (0x000139fa) bg_sctrl_middle_pane_g8

0x0007,

0xfd00,	// (0x0001ea78) bg_sctrl_middle_pane_g

0x4c7a,	// (0x000139f2) bg_sctrl_middle_pane_g8_copy1

0x4c42,	// (0x000139ba) bg_sctrl_sk_pane_g1

0x4c52,	// (0x000139ca) bg_sctrl_sk_pane_g2

0x4c4a,	// (0x000139c2) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0001e5de) bg_sctrl_sk_pane_g

0x2982,	// (0x000116fa) aid_size_touch_scroll_bar

0x4c62,	// (0x000139da) bg_sctrl_sk_pane_g4

0x4c5a,	// (0x000139d2) bg_sctrl_sk_pane_g5

0x4c6a,	// (0x000139e2) bg_sctrl_sk_pane_g6

0x4c72,	// (0x000139ea) bg_sctrl_sk_pane_g7

0x4c82,	// (0x000139fa) bg_sctrl_sk_pane_g8

0x4c7a,	// (0x000139f2) bg_sctrl_sk_pane_g9

0x4238,	// (0x00012fb0) popup_fep_china_hwr2_fs_candidate_window

0x4242,	// (0x00012fba) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x4242,	// (0x00012fba) popup_fep_china_hwr2_fs_control_window

0x78df,	// (0x00016657) sctrl_sk_top_pane_g2

0x0001,

0xfcf6,	// (0x0001ea6e) sctrl_sk_top_pane_g

0x90be,	// (0x00017e36) aid_fep_china_hwr2_fs_cell_ParamLimits

0x90be,	// (0x00017e36) aid_fep_china_hwr2_fs_cell

0x90d0,	// (0x00017e48) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x90d0,	// (0x00017e48) bg_popup_fep_shadow_pane_cp4

0x90e7,	// (0x00017e5f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x90e7,	// (0x00017e5f) bg_popup_fep_shadow_pane_cp5

0x90f9,	// (0x00017e71) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x90f9,	// (0x00017e71) popup_fep_china_hwr2_fs_control_bar_grid

0x9109,	// (0x00017e81) popup_fep_china_hwr2_fs_control_funtion_grid

0x9111,	// (0x00017e89) aid_fep_china_hwr2_fs_candi_cell

0x20f2,	// (0x00010e6a) bg_popup_fep_shadow_pane_cp6

0x911b,	// (0x00017e93) popup_fep_china_hwr2_fs_candidate_grid

0x9125,	// (0x00017e9d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9125,	// (0x00017e9d) cell_fep_china_hwr2_fs_funtion_grid

0x7646,	// (0x000163be) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x913d,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x913d,	// (0x00017eb5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x914b,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x914b,	// (0x00017ec3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd11,	// (0x0001ea89) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd11,	// (0x0001ea89) cell_fep_china_hwr2_fs_funtion_grid_g

0x9161,	// (0x00017ed9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9161,	// (0x00017ed9) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9176,	// (0x00017eee) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9176,	// (0x00017eee) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd16,	// (0x0001ea8e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd16,	// (0x0001ea8e) cell_fep_china_hwr2_fs_funtion_grid_t

0x9192,	// (0x00017f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x919a,	// (0x00017f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91a2,	// (0x00017f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1b,	// (0x0001ea93) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91aa,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91aa,	// (0x00017f22) cell_fep_china_hwr2_fs_candidate_grid

0x91c3,	// (0x00017f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x91cb,	// (0x00017f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7646,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7646,	// (0x000163be) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb42,	// (0x0001e8ba) cell_fep_china_hwr2_fs_candidate_grid_g

0x91d3,	// (0x00017f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x481f,	// (0x00013597) clock_nsta_pane_cp_24_ParamLimits

0x481f,	// (0x00013597) clock_nsta_pane_cp_24

0x489d,	// (0x00013615) indicator_nsta_pane_cp_24_ParamLimits

0x489d,	// (0x00013615) indicator_nsta_pane_cp_24

0x5a13,	// (0x0001478b) heading_pane_g1

0x0001,

0xf8cb,	// (0x0001e643) heading_pane_g

0x6550,	// (0x000152c8) grid_sct_catagory_button_pane

0x6582,	// (0x000152fa) scroll_pane_cp5_ParamLimits

0x71b9,	// (0x00015f31) button_value_adjust_pane_cp5_ParamLimits

0x71b9,	// (0x00015f31) button_value_adjust_pane_cp5

0x72b1,	// (0x00016029) form2_midp_time_pane_ParamLimits

0x91e1,	// (0x00017f59) cell_sct_catagory_button_pane_ParamLimits

0x91e1,	// (0x00017f59) cell_sct_catagory_button_pane

0x760b,	// (0x00016383) bg_button_pane_cp01_ParamLimits

0x760b,	// (0x00016383) bg_button_pane_cp01

0x7646,	// (0x000163be) cell_sct_catagory_button_pane_g1

0x45fe,	// (0x00013376) popup_tb_extension_window

0x91f3,	// (0x00017f6b) aid_size_cell_ext_ParamLimits

0x91f3,	// (0x00017f6b) aid_size_cell_ext

0x2489,	// (0x00011201) bg_tb_trans_pane_cp1_ParamLimits

0x2489,	// (0x00011201) bg_tb_trans_pane_cp1

0x9213,	// (0x00017f8b) grid_tb_ext_pane_ParamLimits

0x9213,	// (0x00017f8b) grid_tb_ext_pane

0x9245,	// (0x00017fbd) cell_tb_ext_pane_ParamLimits

0x9245,	// (0x00017fbd) cell_tb_ext_pane

0x925c,	// (0x00017fd4) cell_tb_ext_pane_g1_ParamLimits

0x925c,	// (0x00017fd4) cell_tb_ext_pane_g1

0x9279,	// (0x00017ff1) cell_tb_ext_pane_t1

0x2489,	// (0x00011201) list_highlight_pane_cp11_ParamLimits

0x2489,	// (0x00011201) list_highlight_pane_cp11

0xd5ee,	// (0x0001c366) popup_uni_indicator_window_ParamLimits

0xd5ee,	// (0x0001c366) popup_uni_indicator_window

0x2fbf,	// (0x00011d37) bg_popup_sub_pane_cp14

0x9294,	// (0x0001800c) list_uniindi_pane

0x92a0,	// (0x00018018) uniindi_top_pane

0x2489,	// (0x00011201) bg_uniindi_top_pane

0x92bf,	// (0x00018037) uniindi_top_pane_g1

0x92d5,	// (0x0001804d) uniindi_top_pane_g2

0x0003,

0xfd22,	// (0x0001ea9a) uniindi_top_pane_g

0x92ff,	// (0x00018077) uniindi_top_pane_t1

0x9329,	// (0x000180a1) list_single_uniindi_pane_ParamLimits

0x9329,	// (0x000180a1) list_single_uniindi_pane

0x7646,	// (0x000163be) bg_uniindi_top_pane_g1

0x933b,	// (0x000180b3) list_single_uniindi_pane_g1

0x934e,	// (0x000180c6) list_single_uniindi_pane_t1

0x20f2,	// (0x00010e6a) control_bg_pane

0x9373,	// (0x000180eb) bg_sctrl_sk_pane_cp1

0x937c,	// (0x000180f4) bg_sctrl_sk_pane_cp2

0x9385,	// (0x000180fd) control_bg_pane_g1

0x938e,	// (0x00018106) control_bg_pane_g2

0x0001,

0xfd2b,	// (0x0001eaa3) control_bg_pane_g

0x6fe5,	// (0x00015d5d) cell_indicator_nsta_pane_g1_ParamLimits

0x6ff3,	// (0x00015d6b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa6,	// (0x0001e81e) cell_indicator_nsta_pane_g_ParamLimits

0xcf30,	// (0x0001bca8) form2_midp_time_pane_t1_ParamLimits

0x27c4,	// (0x0001153c) main_idle_act4_pane_ParamLimits

0x27c4,	// (0x0001153c) main_idle_act4_pane

0x45fe,	// (0x00013376) popup_tb_extension_window_ParamLimits

0x9235,	// (0x00017fad) tb_ext_find_pane_ParamLimits

0x9235,	// (0x00017fad) tb_ext_find_pane

0x9397,	// (0x0001810f) ai_gene_pane_1_cp1

0x3f53,	// (0x00012ccb) ai_gene_pane_2_cp1

0x939f,	// (0x00018117) list_single_idle_plugin_calendar_pane

0x93a8,	// (0x00018120) list_single_idle_plugin_notification_pane

0x93b1,	// (0x00018129) list_single_idle_plugin_player_pane

0x93ba,	// (0x00018132) list_single_idle_plugin_shortcut_pane_ParamLimits

0x93ba,	// (0x00018132) list_single_idle_plugin_shortcut_pane

0x93dc,	// (0x00018154) main_idle_act4_pane_t1

0x93ee,	// (0x00018166) main_idle_act4_pane_t2

0x0001,

0xfd30,	// (0x0001eaa8) main_idle_act4_pane_t

0x9400,	// (0x00018178) middle_sk_idle_act4_pane_ParamLimits

0x9400,	// (0x00018178) middle_sk_idle_act4_pane

0x9416,	// (0x0001818e) popup_clock_digital_analogue_window_cp2

0x9430,	// (0x000181a8) shortcut_wheel_idle_act4_pane_ParamLimits

0x9430,	// (0x000181a8) shortcut_wheel_idle_act4_pane

0x7646,	// (0x000163be) shortcut_wheel_idle_act4_pane_g1

0x7646,	// (0x000163be) shortcut_wheel_idle_act4_pane_g2

0x7646,	// (0x000163be) shortcut_wheel_idle_act4_pane_g3

0x7646,	// (0x000163be) shortcut_wheel_idle_act4_pane_g4

0x7646,	// (0x000163be) shortcut_wheel_idle_act4_pane_g5

0x9444,	// (0x000181bc) shortcut_wheel_idle_act4_pane_g6

0x944c,	// (0x000181c4) shortcut_wheel_idle_act4_pane_g7

0x9454,	// (0x000181cc) shortcut_wheel_idle_act4_pane_g8

0x945c,	// (0x000181d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd35,	// (0x0001eaad) shortcut_wheel_idle_act4_pane_g

0x78df,	// (0x00016657) middle_sk_idle_act4_pane_g1_ParamLimits

0x78df,	// (0x00016657) middle_sk_idle_act4_pane_g1

0x94c0,	// (0x00018238) middle_sk_idle_act4_pane_g2_ParamLimits

0x94c0,	// (0x00018238) middle_sk_idle_act4_pane_g2

0x0001,

0xfd58,	// (0x0001ead0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd58,	// (0x0001ead0) middle_sk_idle_act4_pane_g

0x94cc,	// (0x00018244) middle_sk_idle_act4_pane_t1_ParamLimits

0x94cc,	// (0x00018244) middle_sk_idle_act4_pane_t1

0x94e9,	// (0x00018261) grid_ai_shortcut_pane_ParamLimits

0x94e9,	// (0x00018261) grid_ai_shortcut_pane

0x9502,	// (0x0001827a) list_highlight_pane_cp16_ParamLimits

0x9502,	// (0x0001827a) list_highlight_pane_cp16

0x950f,	// (0x00018287) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x950f,	// (0x00018287) list_single_idle_plugin_shortcut_pane_g1

0x951b,	// (0x00018293) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x951b,	// (0x00018293) list_single_idle_plugin_shortcut_pane_g2

0x9533,	// (0x000182ab) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9533,	// (0x000182ab) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5d,	// (0x0001ead5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5d,	// (0x0001ead5) list_single_idle_plugin_shortcut_pane_g

0x9546,	// (0x000182be) cell_ai_shortcut_pane_ParamLimits

0x9546,	// (0x000182be) cell_ai_shortcut_pane

0x9567,	// (0x000182df) cell_ai_shortcut_pane_g1_ParamLimits

0x9567,	// (0x000182df) cell_ai_shortcut_pane_g1

0x9397,	// (0x0001810f) ai_gene_pane_1_cp2

0x9589,	// (0x00018301) ai_gene_pane_2_cp2

0x9591,	// (0x00018309) list_highlight_pane_cp15

0x959a,	// (0x00018312) list_single_idle_plugin_calendar_pane_g1

0x9591,	// (0x00018309) list_highlight_pane_cp17

0x95a2,	// (0x0001831a) list_single_idle_plugin_calendar_pane_g1_copy1

0x95aa,	// (0x00018322) list_single_idle_plugin_player_pane_g1

0x67a9,	// (0x00015521) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd64,	// (0x0001eadc) list_single_idle_plugin_player_pane_g

0x95b2,	// (0x0001832a) list_single_idle_plugin_player_pane_t1

0x95c0,	// (0x00018338) list_single_idle_plugin_player_pane_t2

0x95ce,	// (0x00018346) list_single_idle_plugin_player_pane_t3

0x95dc,	// (0x00018354) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd69,	// (0x0001eae1) list_single_idle_plugin_player_pane_t

0x95ea,	// (0x00018362) wait_bar_pane_cp15

0x95f2,	// (0x0001836a) grid_ai_notification_pane

0x67a9,	// (0x00015521) list_single_idle_plugin_notification_pane_g1

0x95fb,	// (0x00018373) cell_ai_notification_pane_ParamLimits

0x95fb,	// (0x00018373) cell_ai_notification_pane

0x9608,	// (0x00018380) cell_ai_notification_pane_g1

0x9610,	// (0x00018388) cell_ai_notification_pane_t1

0x961e,	// (0x00018396) tb_ext_find_button_pane

0x9626,	// (0x0001839e) tb_ext_find_pane_g1

0x962e,	// (0x000183a6) tb_ext_find_pane_t1

0x379d,	// (0x00012515) tb_ext_find_button_pane_g1

0x963c,	// (0x000183b4) tb_ext_find_button_pane_g2

0x0001,

0xfd72,	// (0x0001eaea) tb_ext_find_button_pane_g

0x93dc,	// (0x00018154) main_idle_act4_pane_t1_ParamLimits

0x93ee,	// (0x00018166) main_idle_act4_pane_t2_ParamLimits

0xfd30,	// (0x0001eaa8) main_idle_act4_pane_t_ParamLimits

0x9416,	// (0x0001818e) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9424,	// (0x0001819c) sat_plugin_idle_act4_pane_ParamLimits

0x9424,	// (0x0001819c) sat_plugin_idle_act4_pane

0x9645,	// (0x000183bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0x9645,	// (0x000183bd) sat_plugin_idle_act4_pane_t1

0x9658,	// (0x000183d0) sat_plugin_idle_act4_pane_t2_ParamLimits

0x9658,	// (0x000183d0) sat_plugin_idle_act4_pane_t2

0x966b,	// (0x000183e3) sat_plugin_idle_act4_pane_t3_ParamLimits

0x966b,	// (0x000183e3) sat_plugin_idle_act4_pane_t3

0x967e,	// (0x000183f6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x967e,	// (0x000183f6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd77,	// (0x0001eaef) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd77,	// (0x0001eaef) sat_plugin_idle_act4_pane_t

0xd537,	// (0x0001c2af) popup_battery_window_ParamLimits

0xd537,	// (0x0001c2af) popup_battery_window

0x2489,	// (0x00011201) bg_popup_sub_pane_cp25_ParamLimits

0x2489,	// (0x00011201) bg_popup_sub_pane_cp25

0x9691,	// (0x00018409) popup_battery_window_g1_ParamLimits

0x9691,	// (0x00018409) popup_battery_window_g1

0x969d,	// (0x00018415) popup_battery_window_t1_ParamLimits

0x969d,	// (0x00018415) popup_battery_window_t1

0x96af,	// (0x00018427) popup_battery_window_t2_ParamLimits

0x96af,	// (0x00018427) popup_battery_window_t2

0x0001,

0xfd80,	// (0x0001eaf8) popup_battery_window_t_ParamLimits

0xfd80,	// (0x0001eaf8) popup_battery_window_t

0x3e1e,	// (0x00012b96) midp_canvas_pane_ParamLimits

0x3e95,	// (0x00012c0d) midp_keypad_pane_ParamLimits

0x3e95,	// (0x00012c0d) midp_keypad_pane

0x4190,	// (0x00012f08) main_midp_pane_ParamLimits

0x7071,	// (0x00015de9) signal_pane_g2_cp_ParamLimits

0x96cc,	// (0x00018444) aid_size_cell_midp_keypad_ParamLimits

0x96cc,	// (0x00018444) aid_size_cell_midp_keypad

0x96e6,	// (0x0001845e) midp_keyp_game_grid_pane_ParamLimits

0x96e6,	// (0x0001845e) midp_keyp_game_grid_pane

0x9706,	// (0x0001847e) midp_keyp_rocker_pane_ParamLimits

0x9706,	// (0x0001847e) midp_keyp_rocker_pane

0x973f,	// (0x000184b7) midp_keyp_sk_left_pane_ParamLimits

0x973f,	// (0x000184b7) midp_keyp_sk_left_pane

0x9799,	// (0x00018511) midp_keyp_sk_right_pane_ParamLimits

0x9799,	// (0x00018511) midp_keyp_sk_right_pane

0x20f2,	// (0x00010e6a) bg_button_pane_cp03

0x97f3,	// (0x0001856b) midp_keyp_sk_left_pane_g1

0x20f2,	// (0x00010e6a) bg_button_pane_cp04

0x97f3,	// (0x0001856b) midp_keyp_sk_right_pane_g1

0x7646,	// (0x000163be) midp_keyp_rocker_pane_g1

0x97fc,	// (0x00018574) keyp_game_cell_pane_ParamLimits

0x97fc,	// (0x00018574) keyp_game_cell_pane

0x20f2,	// (0x00010e6a) bg_button_pane_cp02

0x980f,	// (0x00018587) keyp_game_cell_pane_g1

0xd56d,	// (0x0001c2e5) popup_fep_vkb2_window_ParamLimits

0xd56d,	// (0x0001c2e5) popup_fep_vkb2_window

0xe60a,	// (0x0001d382) aid_size_cell_vkb2_ParamLimits

0xe60a,	// (0x0001d382) aid_size_cell_vkb2

0xe65e,	// (0x0001d3d6) popup_fep_vkb2_window_g1_ParamLimits

0xe65e,	// (0x0001d3d6) popup_fep_vkb2_window_g1

0xe69e,	// (0x0001d416) vkb2_area_bottom_pane_ParamLimits

0xe69e,	// (0x0001d416) vkb2_area_bottom_pane

0xe6ea,	// (0x0001d462) vkb2_area_keypad_pane_ParamLimits

0xe6ea,	// (0x0001d462) vkb2_area_keypad_pane

0xe72c,	// (0x0001d4a4) vkb2_area_top_pane_ParamLimits

0xe72c,	// (0x0001d4a4) vkb2_area_top_pane

0xe7a6,	// (0x0001d51e) vkb2_top_entry_pane_ParamLimits

0xe7a6,	// (0x0001d51e) vkb2_top_entry_pane

0xe7d0,	// (0x0001d548) vkb2_top_grid_left_pane_ParamLimits

0xe7d0,	// (0x0001d548) vkb2_top_grid_left_pane

0xe7ee,	// (0x0001d566) vkb2_top_grid_right_pane_ParamLimits

0xe7ee,	// (0x0001d566) vkb2_top_grid_right_pane

0xe80c,	// (0x0001d584) vkb2_cell_keypad_pane_ParamLimits

0xe80c,	// (0x0001d584) vkb2_cell_keypad_pane

0xe8dd,	// (0x0001d655) vkb2_area_bottom_grid_pane_ParamLimits

0xe8dd,	// (0x0001d655) vkb2_area_bottom_grid_pane

0xe903,	// (0x0001d67b) vkb2_area_bottom_pane_g1_ParamLimits

0xe903,	// (0x0001d67b) vkb2_area_bottom_pane_g1

0xe927,	// (0x0001d69f) vkb2_area_bottom_pane_g2_ParamLimits

0xe927,	// (0x0001d69f) vkb2_area_bottom_pane_g2

0xe955,	// (0x0001d6cd) vkb2_area_bottom_pane_g3_ParamLimits

0xe955,	// (0x0001d6cd) vkb2_area_bottom_pane_g3

0x0002,

0xfd85,	// (0x0001eafd) vkb2_area_bottom_pane_g_ParamLimits

0xfd85,	// (0x0001eafd) vkb2_area_bottom_pane_g

0xe9b6,	// (0x0001d72e) vkb2_top_cell_left_pane_ParamLimits

0xe9b6,	// (0x0001d72e) vkb2_top_cell_left_pane

0x9820,	// (0x00018598) vkb2_top_entry_pane_g1_ParamLimits

0x9820,	// (0x00018598) vkb2_top_entry_pane_g1

0x982e,	// (0x000185a6) vkb2_top_entry_pane_t1_ParamLimits

0x982e,	// (0x000185a6) vkb2_top_entry_pane_t1

0x9860,	// (0x000185d8) vkb2_top_entry_pane_t2_ParamLimits

0x9860,	// (0x000185d8) vkb2_top_entry_pane_t2

0x9892,	// (0x0001860a) vkb2_top_entry_pane_t3_ParamLimits

0x9892,	// (0x0001860a) vkb2_top_entry_pane_t3

0x0002,

0xfd8c,	// (0x0001eb04) vkb2_top_entry_pane_t_ParamLimits

0xfd8c,	// (0x0001eb04) vkb2_top_entry_pane_t

0xea03,	// (0x0001d77b) vkb2_top_grid_right_pane_g1_ParamLimits

0xea03,	// (0x0001d77b) vkb2_top_grid_right_pane_g1

0xea19,	// (0x0001d791) vkb2_top_grid_right_pane_g2_ParamLimits

0xea19,	// (0x0001d791) vkb2_top_grid_right_pane_g2

0xea31,	// (0x0001d7a9) vkb2_top_grid_right_pane_g3_ParamLimits

0xea31,	// (0x0001d7a9) vkb2_top_grid_right_pane_g3

0xea49,	// (0x0001d7c1) vkb2_top_grid_right_pane_g4_ParamLimits

0xea49,	// (0x0001d7c1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd93,	// (0x0001eb0b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd93,	// (0x0001eb0b) vkb2_top_grid_right_pane_g

0xea5f,	// (0x0001d7d7) vkb2_top_cell_left_pane_g1

0xea76,	// (0x0001d7ee) vkb2_cell_keypad_pane_g1_ParamLimits

0xea76,	// (0x0001d7ee) vkb2_cell_keypad_pane_g1

0x98b6,	// (0x0001862e) vkb2_cell_keypad_pane_t1_ParamLimits

0x98b6,	// (0x0001862e) vkb2_cell_keypad_pane_t1

0xea84,	// (0x0001d7fc) vkb2_cell_bottom_grid_pane_ParamLimits

0xea84,	// (0x0001d7fc) vkb2_cell_bottom_grid_pane

0xeabd,	// (0x0001d835) vkb2_cell_bottom_grid_pane_g1

0x9464,	// (0x000181dc) aid_call2_pane_cp02

0x946c,	// (0x000181e4) aid_call_pane_cp02

0x9474,	// (0x000181ec) clock_digital_number_pane_cp10

0x947c,	// (0x000181f4) clock_digital_number_pane_cp11

0x9484,	// (0x000181fc) clock_digital_number_pane_cp12

0x948c,	// (0x00018204) clock_digital_number_pane_cp13

0x9494,	// (0x0001820c) clock_digital_separator_pane_cp10

0x379d,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g1

0x379d,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g2

0x949c,	// (0x00018214) popup_clock_digital_analogue_window_cp2_g3

0x379d,	// (0x00012515) popup_clock_digital_analogue_window_cp2_g4

0x949c,	// (0x00018214) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd48,	// (0x0001eac0) popup_clock_digital_analogue_window_cp2_g

0x94a4,	// (0x0001821c) popup_clock_digital_analogue_window_cp2_t1

0x94b2,	// (0x0001822a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd53,	// (0x0001eacb) popup_clock_digital_analogue_window_cp2_t

0x7646,	// (0x000163be) clock_digital_number_pane_cp10_g1

0x7646,	// (0x000163be) clock_digital_number_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e8ba) clock_digital_number_pane_cp10_g

0x7646,	// (0x000163be) clock_digital_separator_pane_cp10_g1

0x7646,	// (0x000163be) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001e8ba) clock_digital_separator_pane_cp10_g

0x92e1,	// (0x00018059) uniindi_top_pane_g3

0x92f2,	// (0x0001806a) uniindi_top_pane_g4

0xe897,	// (0x0001d60f) vkb2_row_keypad_pane_ParamLimits

0xe897,	// (0x0001d60f) vkb2_row_keypad_pane

0xeadd,	// (0x0001d855) vkb2_cell_t_keypad_pane_ParamLimits

0xeadd,	// (0x0001d855) vkb2_cell_t_keypad_pane

0xeaed,	// (0x0001d865) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeaed,	// (0x0001d865) vkb2_cell_t_keypad_pane_cp08

0xeb00,	// (0x0001d878) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeb00,	// (0x0001d878) vkb2_cell_t_keypad_pane_cp09

0xeb14,	// (0x0001d88c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xeb14,	// (0x0001d88c) vkb2_cell_t_keypad_pane_cp01

0xeb25,	// (0x0001d89d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xeb25,	// (0x0001d89d) vkb2_cell_t_keypad_pane_cp02

0xeb36,	// (0x0001d8ae) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xeb36,	// (0x0001d8ae) vkb2_cell_t_keypad_pane_cp03

0xeb47,	// (0x0001d8bf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xeb47,	// (0x0001d8bf) vkb2_cell_t_keypad_pane_cp04

0xeb58,	// (0x0001d8d0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xeb58,	// (0x0001d8d0) vkb2_cell_t_keypad_pane_cp05

0xeb69,	// (0x0001d8e1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xeb69,	// (0x0001d8e1) vkb2_cell_t_keypad_pane_cp06

0xeb7a,	// (0x0001d8f2) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xeb7a,	// (0x0001d8f2) vkb2_cell_t_keypad_pane_cp07

0xeb8b,	// (0x0001d903) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xeb8b,	// (0x0001d903) vkb2_cell_t_keypad_pane_cp10

0x78df,	// (0x00016657) vkb2_cell_t_keypad_pane_g1

0xabf6,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1

0x20f2,	// (0x00010e6a) popup_grid_graphic2_window

0xeba0,	// (0x0001d918) aid_size_cell_graphic2_ParamLimits

0xeba0,	// (0x0001d918) aid_size_cell_graphic2

0xebd8,	// (0x0001d950) bg_popup_window_pane_cp21_ParamLimits

0xebd8,	// (0x0001d950) bg_popup_window_pane_cp21

0xebe6,	// (0x0001d95e) graphic2_pages_pane_ParamLimits

0xebe6,	// (0x0001d95e) graphic2_pages_pane

0xec2c,	// (0x0001d9a4) grid_graphic2_control_pane_ParamLimits

0xec2c,	// (0x0001d9a4) grid_graphic2_control_pane

0xec6a,	// (0x0001d9e2) grid_graphic2_pane_ParamLimits

0xec6a,	// (0x0001d9e2) grid_graphic2_pane

0xecde,	// (0x0001da56) cell_graphic2_pane

0x20f2,	// (0x00010e6a) main_comp_mode_pane

0x8ae1,	// (0x00017859) list_ai3_gene_pane_ParamLimits

0x8f27,	// (0x00017c9f) bg_popup_window_pane_cp19_ParamLimits

0x8f33,	// (0x00017cab) bg_touch_area_indi_pane_ParamLimits

0x8f33,	// (0x00017cab) bg_touch_area_indi_pane

0x8f49,	// (0x00017cc1) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f49,	// (0x00017cc1) bg_touch_area_indi_pane_cp01

0x8f5f,	// (0x00017cd7) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f5f,	// (0x00017cd7) bg_touch_area_indi_pane_cp02

0x8f77,	// (0x00017cef) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f77,	// (0x00017cef) bg_touch_area_indi_pane_cp03

0x8f91,	// (0x00017d09) popup_slider_window_g1_ParamLimits

0x8fad,	// (0x00017d25) popup_slider_window_g2_ParamLimits

0x8fc9,	// (0x00017d41) popup_slider_window_g3_ParamLimits

0xfcdd,	// (0x0001ea55) popup_slider_window_g_ParamLimits

0x9025,	// (0x00017d9d) popup_slider_window_t1_ParamLimits

0x9099,	// (0x00017e11) small_volume_slider_vertical_pane_ParamLimits

0xecde,	// (0x0001da56) cell_graphic2_pane_ParamLimits

0xed2c,	// (0x0001daa4) bg_button_pane_cp10_ParamLimits

0xed2c,	// (0x0001daa4) bg_button_pane_cp10

0xed3f,	// (0x0001dab7) bg_button_pane_cp11_ParamLimits

0xed3f,	// (0x0001dab7) bg_button_pane_cp11

0xed52,	// (0x0001daca) graphic2_pages_pane_g1_ParamLimits

0xed52,	// (0x0001daca) graphic2_pages_pane_g1

0xed6d,	// (0x0001dae5) graphic2_pages_pane_g2_ParamLimits

0xed6d,	// (0x0001dae5) graphic2_pages_pane_g2

0x0001,

0xfda1,	// (0x0001eb19) graphic2_pages_pane_g_ParamLimits

0xfda1,	// (0x0001eb19) graphic2_pages_pane_g

0xed85,	// (0x0001dafd) graphic2_pages_pane_t1_ParamLimits

0xed85,	// (0x0001dafd) graphic2_pages_pane_t1

0xed9b,	// (0x0001db13) cell_graphic2_control_pane_ParamLimits

0xed9b,	// (0x0001db13) cell_graphic2_control_pane

0xedbc,	// (0x0001db34) cell_graphic2_pane_g1_ParamLimits

0xedbc,	// (0x0001db34) cell_graphic2_pane_g1

0xedc9,	// (0x0001db41) cell_graphic2_pane_g2_ParamLimits

0xedc9,	// (0x0001db41) cell_graphic2_pane_g2

0xedd6,	// (0x0001db4e) cell_graphic2_pane_g3_ParamLimits

0xedd6,	// (0x0001db4e) cell_graphic2_pane_g3

0xede3,	// (0x0001db5b) cell_graphic2_pane_g4_ParamLimits

0xede3,	// (0x0001db5b) cell_graphic2_pane_g4

0xedf0,	// (0x0001db68) cell_graphic2_pane_g5_ParamLimits

0xedf0,	// (0x0001db68) cell_graphic2_pane_g5

0x0004,

0xfda6,	// (0x0001eb1e) cell_graphic2_pane_g_ParamLimits

0xfda6,	// (0x0001eb1e) cell_graphic2_pane_g

0xee0b,	// (0x0001db83) cell_graphic2_pane_t1_ParamLimits

0xee0b,	// (0x0001db83) cell_graphic2_pane_t1

0x4d5c,	// (0x00013ad4) grid_highlight_pane_cp11_ParamLimits

0x4d5c,	// (0x00013ad4) grid_highlight_pane_cp11

0x2489,	// (0x00011201) bg_button_pane_cp05

0xee34,	// (0x0001dbac) cell_graphic2_control_pane_g1

0x7646,	// (0x000163be) bg_touch_area_indi_pane_g1

0xac22,	// (0x0001999a) aid_cmod_rocker_key_size

0xac2c,	// (0x000199a4) aid_cmode_itu_key_size

0xac36,	// (0x000199ae) main_cmode_video_pane

0xac40,	// (0x000199b8) main_comp_mode_itu_pane

0xac4c,	// (0x000199c4) main_comp_mode_rocker_pane

0xac58,	// (0x000199d0) cell_cmode_rocker_pane_ParamLimits

0xac58,	// (0x000199d0) cell_cmode_rocker_pane

0xac6a,	// (0x000199e2) cell_cmode_itu_pane_ParamLimits

0xac6a,	// (0x000199e2) cell_cmode_itu_pane

0x2fbf,	// (0x00011d37) bg_button_pane_cp06_ParamLimits

0x2fbf,	// (0x00011d37) bg_button_pane_cp06

0x78df,	// (0x00016657) cell_cmode_rocker_pane_g1_ParamLimits

0x78df,	// (0x00016657) cell_cmode_rocker_pane_g1

0x913d,	// (0x00017eb5) cell_cmode_rocker_pane_g2_ParamLimits

0x913d,	// (0x00017eb5) cell_cmode_rocker_pane_g2

0x0001,

0xfdb6,	// (0x0001eb2e) cell_cmode_rocker_pane_g_ParamLimits

0xfdb6,	// (0x0001eb2e) cell_cmode_rocker_pane_g

0x20f2,	// (0x00010e6a) bg_button_pane_cp07

0xac7f,	// (0x000199f7) cell_cmode_itu_pane_g1

0xac88,	// (0x00019a00) cell_cmode_itu_pane_t1

0xac96,	// (0x00019a0e) cell_cmode_itu_pane_t2

0x0001,

0xfdbb,	// (0x0001eb33) cell_cmode_itu_pane_t

0x9363,	// (0x000180db) aid_touch_ctrl_left

0x936b,	// (0x000180e3) aid_touch_ctrl_right

0x20f2,	// (0x00010e6a) compa_mode_pane

0xee5c,	// (0x0001dbd4) aid_cmod_rocker_key_size_cp

0xee66,	// (0x0001dbde) aid_cmode_itu_key_size_cp

0xaca4,	// (0x00019a1c) compa_mode_pane_g1

0xacac,	// (0x00019a24) compa_mode_pane_g2

0xacb4,	// (0x00019a2c) compa_mode_pane_g3

0x0002,

0xfdc0,	// (0x0001eb38) compa_mode_pane_g

0xee70,	// (0x0001dbe8) main_comp_mode_itu_pane_cp

0xee78,	// (0x0001dbf0) main_comp_mode_rocker_pane_cp

0xee80,	// (0x0001dbf8) cell_cmode_itu_pane_cp_ParamLimits

0xee80,	// (0x0001dbf8) cell_cmode_itu_pane_cp

0xee95,	// (0x0001dc0d) cell_cmode_rocker_pane_cp_ParamLimits

0xee95,	// (0x0001dc0d) cell_cmode_rocker_pane_cp

0x2fbf,	// (0x00011d37) bg_button_pane_cp06_cp_ParamLimits

0x2fbf,	// (0x00011d37) bg_button_pane_cp06_cp

0x78df,	// (0x00016657) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x78df,	// (0x00016657) cell_cmode_rocker_pane_g1_cp

0x7646,	// (0x000163be) cell_cmode_rocker_pane_g2_cp

0x20f2,	// (0x00010e6a) bg_button_pane_cp07_cp

0xeea7,	// (0x0001dc1f) cell_cmode_itu_pane_g1_cp

0xeeb0,	// (0x0001dc28) cell_cmode_itu_pane_t1_cp

0xeeb0,	// (0x0001dc28) cell_cmode_itu_pane_t2_cp

0x6278,	// (0x00014ff0) settings_code_pane_cp2

0x21e6,	// (0x00010f5e) bg_popup_window_pane_cp3_ParamLimits

0x2657,	// (0x000113cf) heading_pane_cp3_ParamLimits

0x2663,	// (0x000113db) listscroll_popup_graphic_pane_ParamLimits

0xe1d2,	// (0x0001cf4a) fep_hwr_aid_pane_ParamLimits

0xe581,	// (0x0001d2f9) aid_touch_sctrl_top_ParamLimits

0xe58e,	// (0x0001d306) sctrl_sk_top_pane_g1_ParamLimits

0x78df,	// (0x00016657) sctrl_sk_top_pane_g2_ParamLimits

0xfcf6,	// (0x0001ea6e) sctrl_sk_top_pane_g_ParamLimits

0xe59b,	// (0x0001d313) sctrl_sk_top_pane_t1_ParamLimits

0xe581,	// (0x0001d2f9) aid_touch_sctrl_bottom_ParamLimits

0xe59b,	// (0x0001d313) sctrl_sk_bottom_pane_t1_ParamLimits

0x92ad,	// (0x00018025) aid_area_touch_clock

0xe76e,	// (0x0001d4e6) aid_vkb2_area_top_pane_cell_ParamLimits

0xe76e,	// (0x0001d4e6) aid_vkb2_area_top_pane_cell

0xe8b9,	// (0x0001d631) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8b9,	// (0x0001d631) aid_vkb2_area_bottom_pane_cell

0x9818,	// (0x00018590) popup_char_count_window

0xacbc,	// (0x00019a34) popup_char_count_window_g1

0xacc5,	// (0x00019a3d) popup_char_count_window_g2

0xacce,	// (0x00019a46) popup_char_count_window_g3

0x0002,

0xfdc7,	// (0x0001eb3f) popup_char_count_window_g

0xacd7,	// (0x00019a4f) popup_char_count_window_t1

0xe63c,	// (0x0001d3b4) popup_fep_char_preview_window_ParamLimits

0xe63c,	// (0x0001d3b4) popup_fep_char_preview_window

0xe78c,	// (0x0001d504) vkb2_top_candi_pane_ParamLimits

0xe78c,	// (0x0001d504) vkb2_top_candi_pane

0xeebe,	// (0x0001dc36) cell_vkb2_top_candi_pane_ParamLimits

0xeebe,	// (0x0001dc36) cell_vkb2_top_candi_pane

0x5399,	// (0x00014111) bg_popup_fep_char_preview_window_ParamLimits

0x5399,	// (0x00014111) bg_popup_fep_char_preview_window

0xef0b,	// (0x0001dc83) popup_fep_char_preview_window_t1_ParamLimits

0xef0b,	// (0x0001dc83) popup_fep_char_preview_window_t1

0xacf5,	// (0x00019a6d) bg_popup_fep_char_preview_window_g1

0xaced,	// (0x00019a65) bg_popup_fep_char_preview_window_g2

0xace5,	// (0x00019a5d) bg_popup_fep_char_preview_window_g3

0xad15,	// (0x00019a8d) bg_popup_fep_char_preview_window_g4

0xad0d,	// (0x00019a85) bg_popup_fep_char_preview_window_g5

0xef45,	// (0x0001dcbd) bg_popup_fep_char_preview_window_g6

0xad05,	// (0x00019a7d) bg_popup_fep_char_preview_window_g7

0xacfd,	// (0x00019a75) bg_popup_fep_char_preview_window_g8

0xad1d,	// (0x00019a95) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdce,	// (0x0001eb46) bg_popup_fep_char_preview_window_g

0x78df,	// (0x00016657) cell_vkb2_top_candi_pane_g1_ParamLimits

0x78df,	// (0x00016657) cell_vkb2_top_candi_pane_g1

0x7f38,	// (0x00016cb0) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f38,	// (0x00016cb0) cell_vkb2_top_candi_pane_g2

0x7f59,	// (0x00016cd1) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f59,	// (0x00016cd1) cell_vkb2_top_candi_pane_g3

0xef4d,	// (0x0001dcc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef4d,	// (0x0001dcc5) cell_vkb2_top_candi_pane_g4

0xabc7,	// (0x0001993f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xabc7,	// (0x0001993f) cell_vkb2_top_candi_pane_g5

0x913d,	// (0x00017eb5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x913d,	// (0x00017eb5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x0001eb59) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x0001eb59) cell_vkb2_top_candi_pane_g

0xef6e,	// (0x0001dce6) cell_vkb2_top_candi_pane_t1

0xdfef,	// (0x0001cd67) aid_size_touch_slider_mark_ParamLimits

0xdfef,	// (0x0001cd67) aid_size_touch_slider_mark

0xec1c,	// (0x0001d994) grid_graphic2_catg_pane_ParamLimits

0xec1c,	// (0x0001d994) grid_graphic2_catg_pane

0xecba,	// (0x0001da32) popup_grid_graphic2_window_t1_ParamLimits

0xecba,	// (0x0001da32) popup_grid_graphic2_window_t1

0xeccc,	// (0x0001da44) popup_grid_graphic2_window_t2_ParamLimits

0xeccc,	// (0x0001da44) popup_grid_graphic2_window_t2

0x0001,

0xfd9c,	// (0x0001eb14) popup_grid_graphic2_window_t_ParamLimits

0xfd9c,	// (0x0001eb14) popup_grid_graphic2_window_t

0x2489,	// (0x00011201) bg_button_pane_cp05_ParamLimits

0xee34,	// (0x0001dbac) cell_graphic2_control_pane_g1_ParamLimits

0xef8d,	// (0x0001dd05) cell_graphic2_catg_pane_ParamLimits

0xef8d,	// (0x0001dd05) cell_graphic2_catg_pane

0x20f2,	// (0x00010e6a) bg_button_pane_cp12

0xef9f,	// (0x0001dd17) cell_graphic2_catg_pane_g1

0x9279,	// (0x00017ff1) cell_tb_ext_pane_t1_ParamLimits

0xe9d6,	// (0x0001d74e) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe9d6,	// (0x0001d74e) vkb2_top_cell_right_narrow_pane

0xe9ee,	// (0x0001d766) vkb2_top_cell_right_wide_pane_ParamLimits

0xe9ee,	// (0x0001d766) vkb2_top_cell_right_wide_pane

0xabb9,	// (0x00019931) bg_vkb2_func_pane_ParamLimits

0xabb9,	// (0x00019931) bg_vkb2_func_pane

0xea5f,	// (0x0001d7d7) vkb2_top_cell_left_pane_g1_ParamLimits

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp03_ParamLimits

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp03

0xeabd,	// (0x0001d835) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c52,	// (0x000139ca) bg_vkb2_func_pane_g1

0x4c4a,	// (0x000139c2) bg_vkb2_func_pane_g2

0x4c5a,	// (0x000139d2) bg_vkb2_func_pane_g3

0x4c62,	// (0x000139da) bg_vkb2_func_pane_g4

0x4c6a,	// (0x000139e2) bg_vkb2_func_pane_g5

0x4c72,	// (0x000139ea) bg_vkb2_func_pane_g6

0x4c82,	// (0x000139fa) bg_vkb2_func_pane_g7

0x4c7a,	// (0x000139f2) bg_vkb2_func_pane_g8

0x4c42,	// (0x000139ba) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x0001eb66) bg_vkb2_func_pane_g

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp01_ParamLimits

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp01

0xea5f,	// (0x0001d7d7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xea5f,	// (0x0001d7d7) vkb2_top_cell_right_wide_pane_g1

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp02_ParamLimits

0xabb9,	// (0x00019931) bg_vkb2_fuc_pane_cp02

0xeabd,	// (0x0001d835) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeabd,	// (0x0001d835) vkb2_top_cell_right_narrow_pane_g1

0x8ea5,	// (0x00017c1d) aid_touch_area_decrease_ParamLimits

0x8ea5,	// (0x00017c1d) aid_touch_area_decrease

0x8ec9,	// (0x00017c41) aid_touch_area_increase_ParamLimits

0x8ec9,	// (0x00017c41) aid_touch_area_increase

0x8ed5,	// (0x00017c4d) aid_touch_area_mute_ParamLimits

0x8ed5,	// (0x00017c4d) aid_touch_area_mute

0x8ef9,	// (0x00017c71) aid_touch_area_slider_ParamLimits

0x8ef9,	// (0x00017c71) aid_touch_area_slider

0x8fe5,	// (0x00017d5d) popup_slider_window_g4_ParamLimits

0x8fe5,	// (0x00017d5d) popup_slider_window_g4

0x8ff1,	// (0x00017d69) popup_slider_window_g5_ParamLimits

0x8ff1,	// (0x00017d69) popup_slider_window_g5

0x9013,	// (0x00017d8b) popup_slider_window_g6_ParamLimits

0x9013,	// (0x00017d8b) popup_slider_window_g6

0x9053,	// (0x00017dcb) popup_slider_window_t2_ParamLimits

0x9053,	// (0x00017dcb) popup_slider_window_t2

0x0001,

0xfcea,	// (0x0001ea62) popup_slider_window_t_ParamLimits

0xfcea,	// (0x0001ea62) popup_slider_window_t

0x906b,	// (0x00017de3) slider_pane_ParamLimits

0x906b,	// (0x00017de3) slider_pane

0xad25,	// (0x00019a9d) slider_pane_g1_ParamLimits

0xad25,	// (0x00019a9d) slider_pane_g1

0xad39,	// (0x00019ab1) slider_pane_g2_ParamLimits

0xad39,	// (0x00019ab1) slider_pane_g2

0xad4f,	// (0x00019ac7) slider_pane_g3_ParamLimits

0xad4f,	// (0x00019ac7) slider_pane_g3

0x0003,

0xfe01,	// (0x0001eb79) slider_pane_g_ParamLimits

0xfe01,	// (0x0001eb79) slider_pane_g

0x465a,	// (0x000133d2) popup_tb_float_extension_window_ParamLimits

0x465a,	// (0x000133d2) popup_tb_float_extension_window

0xad7b,	// (0x00019af3) aid_size_cell_tb_float_ext

0x20f2,	// (0x00010e6a) bg_popup_sub_window_cp28

0xad87,	// (0x00019aff) grid_tb_float_ext_pane

0xad91,	// (0x00019b09) cell_tb_float_ext_pane_ParamLimits

0xad91,	// (0x00019b09) cell_tb_float_ext_pane

0xadab,	// (0x00019b23) cell_tb_float_ext_pane_g1

0xadb4,	// (0x00019b2c) grid_highlight_pane_cp12

0xe305,	// (0x0001d07d) cell_last_hwr_side_pane_ParamLimits

0xe305,	// (0x0001d07d) cell_last_hwr_side_pane

0x7646,	// (0x000163be) cell_last_hwr_side_pane_g1

0xadbd,	// (0x00019b35) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x0001eb82) cell_last_hwr_side_pane_g

0xe985,	// (0x0001d6fd) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe985,	// (0x0001d6fd) vkb2_area_bottom_space_btn_pane

0x78df,	// (0x00016657) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xabf6,	// (0x0001996e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xef6e,	// (0x0001dce6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefa8,	// (0x0001dd20) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefa8,	// (0x0001dd20) vkb2_area_bottom_space_btn_pane_g1

0xefe2,	// (0x0001dd5a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xefe2,	// (0x0001dd5a) vkb2_area_bottom_space_btn_pane_g2

0xf018,	// (0x0001dd90) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf018,	// (0x0001dd90) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x0001eb87) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x0001eb87) vkb2_area_bottom_space_btn_pane_g

0xe279,	// (0x0001cff1) cel_fep_hwr_func_pane_ParamLimits

0xe279,	// (0x0001cff1) cel_fep_hwr_func_pane

0xe2b5,	// (0x0001d02d) cell_hwr_side_button_pane_ParamLimits

0xe2b5,	// (0x0001d02d) cell_hwr_side_button_pane

0x92ad,	// (0x00018025) aid_area_touch_clock_ParamLimits

0x2489,	// (0x00011201) bg_uniindi_top_pane_ParamLimits

0x92bf,	// (0x00018037) uniindi_top_pane_g1_ParamLimits

0x92d5,	// (0x0001804d) uniindi_top_pane_g2_ParamLimits

0x92e1,	// (0x00018059) uniindi_top_pane_g3_ParamLimits

0x92f2,	// (0x0001806a) uniindi_top_pane_g4_ParamLimits

0xfd22,	// (0x0001ea9a) uniindi_top_pane_g_ParamLimits

0x92ff,	// (0x00018077) uniindi_top_pane_t1_ParamLimits

0x2489,	// (0x00011201) bg_vkb2_func_pane_cp01_ParamLimits

0x2489,	// (0x00011201) bg_vkb2_func_pane_cp01

0xadc6,	// (0x00019b3e) cel_fep_hwr_func_pane_g1_ParamLimits

0xadc6,	// (0x00019b3e) cel_fep_hwr_func_pane_g1

0x2489,	// (0x00011201) bg_vkb2_func_pane_cp02_ParamLimits

0x2489,	// (0x00011201) bg_vkb2_func_pane_cp02

0xadc6,	// (0x00019b3e) cell_hwr_side_button_pane_g1_ParamLimits

0xadc6,	// (0x00019b3e) cell_hwr_side_button_pane_g1

0x4aa3,	// (0x0001381b) status_pane_g4_ParamLimits

0x4aa3,	// (0x0001381b) status_pane_g4

0x4abb,	// (0x00013833) status_pane_t1

0x7348,	// (0x000160c0) form2_midp_gauge_slider_cont_pane

0x7350,	// (0x000160c8) form2_midp_gauge_slider_pane_t1_ParamLimits

0x7362,	// (0x000160da) form2_midp_gauge_slider_pane_t2_ParamLimits

0x7374,	// (0x000160ec) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf5,	// (0x0001e86d) form2_midp_gauge_slider_pane_t_ParamLimits

0x7386,	// (0x000160fe) form2_midp_slider_pane_ParamLimits

0xe5fc,	// (0x0001d374) aid_size_cell_func_vkb2_ParamLimits

0xe5fc,	// (0x0001d374) aid_size_cell_func_vkb2

0xad67,	// (0x00019adf) slider_pane_g4_ParamLimits

0xad67,	// (0x00019adf) slider_pane_g4

0xf062,	// (0x0001ddda) form2_midp_gauge_slider_pane_t2_cp01

0xf070,	// (0x0001dde8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf070,	// (0x0001dde8) form2_midp_gauge_slider_pane_t3_cp01

0xf08d,	// (0x0001de05) form2_midp_slider_pane_cp01

0x20f2,	// (0x00010e6a) navi_smil_pane

0xadf6,	// (0x00019b6e) navi_smil_pane_g1

0xadfe,	// (0x00019b76) navi_smil_pane_t1

0xadd4,	// (0x00019b4c) form2_midp_slider_pane_g1

0xaddd,	// (0x00019b55) form2_midp_slider_pane_g2

0xade5,	// (0x00019b5d) form2_midp_slider_pane_g3

0xadd4,	// (0x00019b4c) form2_midp_slider_pane_g4

0xf096,	// (0x0001de0e) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x0001eb90) form2_midp_slider_pane_g

0xf052,	// (0x0001ddca) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf052,	// (0x0001ddca) vkb2_area_bottom_space_btn_pane_g4

0x48d9,	// (0x00013651) lc0_navi_pane_ParamLimits

0x48d9,	// (0x00013651) lc0_navi_pane

0x494f,	// (0x000136c7) lc0_stat_indi_pane_ParamLimits

0x494f,	// (0x000136c7) lc0_stat_indi_pane

0x4966,	// (0x000136de) ls0_title_pane_ParamLimits

0x4966,	// (0x000136de) ls0_title_pane

0x2fbf,	// (0x00011d37) bg_popup_sub_pane_cp14_ParamLimits

0x9294,	// (0x0001800c) list_uniindi_pane_ParamLimits

0x92a0,	// (0x00018018) uniindi_top_pane_ParamLimits

0x933b,	// (0x000180b3) list_single_uniindi_pane_g1_ParamLimits

0x934e,	// (0x000180c6) list_single_uniindi_pane_t1_ParamLimits

0xf09f,	// (0x0001de17) lc0_stat_clock_pane_ParamLimits

0xf09f,	// (0x0001de17) lc0_stat_clock_pane

0xf0ac,	// (0x0001de24) lc0_stat_indi_pane_g1_ParamLimits

0xf0ac,	// (0x0001de24) lc0_stat_indi_pane_g1

0xf0b9,	// (0x0001de31) lc0_stat_indi_pane_g2_ParamLimits

0xf0b9,	// (0x0001de31) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x0001eb9b) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x0001eb9b) lc0_stat_indi_pane_g

0xf0c6,	// (0x0001de3e) lc0_uni_indicator_pane_ParamLimits

0xf0c6,	// (0x0001de3e) lc0_uni_indicator_pane

0xf0d3,	// (0x0001de4b) ls0_title_pane_g1_ParamLimits

0xf0d3,	// (0x0001de4b) ls0_title_pane_g1

0xf0e7,	// (0x0001de5f) ls0_title_pane_t1_ParamLimits

0xf0e7,	// (0x0001de5f) ls0_title_pane_t1

0xf11d,	// (0x0001de95) lc0_uni_indicator_pane_g1_ParamLimits

0xf11d,	// (0x0001de95) lc0_uni_indicator_pane_g1

0xae0c,	// (0x00019b84) lc0_stat_clock_pane_t1

0x20f2,	// (0x00010e6a) main_ai5_pane

0xae1a,	// (0x00019b92) ai5_sk_pane_ParamLimits

0xae1a,	// (0x00019b92) ai5_sk_pane

0xf133,	// (0x0001deab) cell_ai5_widget_pane_ParamLimits

0xf133,	// (0x0001deab) cell_ai5_widget_pane

0xae27,	// (0x00019b9f) aid_size_cell_widget_grid

0xae3b,	// (0x00019bb3) bg_ai5_widget_pane_ParamLimits

0xae3b,	// (0x00019bb3) bg_ai5_widget_pane

0xf1dd,	// (0x0001df55) cell_ai5_widget_pane_g2

0xf1ed,	// (0x0001df65) cell_ai5_widget_pane_g3

0xf20c,	// (0x0001df84) cell_ai5_widget_pane_g4

0xf218,	// (0x0001df90) cell_ai5_widget_pane_g5

0xf224,	// (0x0001df9c) cell_ai5_widget_pane_g6

0xf230,	// (0x0001dfa8) cell_ai5_widget_pane_g7

0xf278,	// (0x0001dff0) cell_ai5_widget_pane_t1_ParamLimits

0xf278,	// (0x0001dff0) cell_ai5_widget_pane_t1

0xf295,	// (0x0001e00d) cell_ai5_widget_pane_t2_ParamLimits

0xf295,	// (0x0001e00d) cell_ai5_widget_pane_t2

0xf2ad,	// (0x0001e025) cell_ai5_widget_pane_t3_ParamLimits

0xf2ad,	// (0x0001e025) cell_ai5_widget_pane_t3

0xf2c5,	// (0x0001e03d) cell_ai5_widget_pane_t4_ParamLimits

0xf2c5,	// (0x0001e03d) cell_ai5_widget_pane_t4

0xf2df,	// (0x0001e057) cell_ai5_widget_pane_t5_ParamLimits

0xf2df,	// (0x0001e057) cell_ai5_widget_pane_t5

0xae47,	// (0x00019bbf) cell_ai5_widget_pane_t6_ParamLimits

0xae47,	// (0x00019bbf) cell_ai5_widget_pane_t6

0xae59,	// (0x00019bd1) cell_ai5_widget_pane_t7_ParamLimits

0xae59,	// (0x00019bd1) cell_ai5_widget_pane_t7

0xf2fe,	// (0x0001e076) cell_ai5_widget_pane_t8_ParamLimits

0xf2fe,	// (0x0001e076) cell_ai5_widget_pane_t8

0x0009,

0xfe3d,	// (0x0001ebb5) cell_ai5_widget_pane_t_ParamLimits

0xfe3d,	// (0x0001ebb5) cell_ai5_widget_pane_t

0xf34a,	// (0x0001e0c2) grid_ai5_widget_pane

0x2fbf,	// (0x00011d37) highlight_cell_ai5_widget_pane_ParamLimits

0x2fbf,	// (0x00011d37) highlight_cell_ai5_widget_pane

0xf360,	// (0x0001e0d8) ai5_sk_left_pane

0xf36a,	// (0x0001e0e2) ai5_sk_middle_pane

0xf374,	// (0x0001e0ec) ai5_sk_right_pane

0xae72,	// (0x00019bea) bg_ai5_widget_pane_g1_ParamLimits

0xae72,	// (0x00019bea) bg_ai5_widget_pane_g1

0xae7e,	// (0x00019bf6) bg_ai5_widget_pane_g2_ParamLimits

0xae7e,	// (0x00019bf6) bg_ai5_widget_pane_g2

0xae8a,	// (0x00019c02) bg_ai5_widget_pane_g3_ParamLimits

0xae8a,	// (0x00019c02) bg_ai5_widget_pane_g3

0xae96,	// (0x00019c0e) bg_ai5_widget_pane_g4_ParamLimits

0xae96,	// (0x00019c0e) bg_ai5_widget_pane_g4

0xaea2,	// (0x00019c1a) bg_ai5_widget_pane_g5_ParamLimits

0xaea2,	// (0x00019c1a) bg_ai5_widget_pane_g5

0xaeae,	// (0x00019c26) bg_ai5_widget_pane_g6_ParamLimits

0xaeae,	// (0x00019c26) bg_ai5_widget_pane_g6

0xaeba,	// (0x00019c32) bg_ai5_widget_pane_g7_ParamLimits

0xaeba,	// (0x00019c32) bg_ai5_widget_pane_g7

0xaec6,	// (0x00019c3e) bg_ai5_widget_pane_g8_ParamLimits

0xaec6,	// (0x00019c3e) bg_ai5_widget_pane_g8

0xaed2,	// (0x00019c4a) bg_ai5_widget_pane_g9_ParamLimits

0xaed2,	// (0x00019c4a) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x0001ebca) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x0001ebca) bg_ai5_widget_pane_g

0xaf05,	// (0x00019c7d) cell_shortcut_ai5_widget_pane_ParamLimits

0xaf05,	// (0x00019c7d) cell_shortcut_ai5_widget_pane

0x22c9,	// (0x00011041) bg_cell_shortcut_ai5_widget_pane

0xaf16,	// (0x00019c8e) cell_grid_ai5_widget_pane_g1

0xaf1f,	// (0x00019c97) highlight_cell_shortcut_ai5_widget_pane

0x4c4a,	// (0x000139c2) ai5_sk_left_pane_g1

0xaf27,	// (0x00019c9f) ai5_sk_left_pane_g2

0xaf2f,	// (0x00019ca7) ai5_sk_left_pane_g3

0xaf37,	// (0x00019caf) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x0001ebdd) ai5_sk_left_pane_g

0xaf3f,	// (0x00019cb7) ai5_sk_left_pane_t1

0x4c52,	// (0x000139ca) ai5_sk_right_pane_g1

0xaf4d,	// (0x00019cc5) ai5_sk_right_pane_g2

0xaf55,	// (0x00019ccd) ai5_sk_right_pane_g3

0xaf5d,	// (0x00019cd5) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0001ebe6) ai5_sk_right_pane_g

0xaf65,	// (0x00019cdd) ai5_sk_right_pane_t1

0x4c52,	// (0x000139ca) ai5_sk_middle_pane_g1

0x4c4a,	// (0x000139c2) ai5_sk_middle_pane_g2

0x4c6a,	// (0x000139e2) ai5_sk_middle_pane_g3

0xaf55,	// (0x00019ccd) ai5_sk_middle_pane_g4

0xaf2f,	// (0x00019ca7) ai5_sk_middle_pane_g5

0xaf73,	// (0x00019ceb) ai5_sk_middle_pane_g6

0xf37e,	// (0x0001e0f6) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x0001ebef) ai5_sk_middle_pane_g

0x4765,	// (0x000134dd) aid_touch_area_size_lc0_ParamLimits

0x4765,	// (0x000134dd) aid_touch_area_size_lc0

0xe404,	// (0x0001d17c) cell_hwr_candidate_pane_t1_ParamLimits

0x4781,	// (0x000134f9) aid_touch_navi_pane

0x4a4d,	// (0x000137c5) status_dt_navi_pane_ParamLimits

0x4a4d,	// (0x000137c5) status_dt_navi_pane

0x4a5a,	// (0x000137d2) status_dt_sta_pane_ParamLimits

0x4a5a,	// (0x000137d2) status_dt_sta_pane

0xf386,	// (0x0001e0fe) dt_sta_controll_pane

0xf393,	// (0x0001e10b) dt_sta_indi_pane

0xf3a4,	// (0x0001e11c) dt_sta_title_pane

0x2489,	// (0x00011201) bg_dt_sta_indi_pane_ParamLimits

0x2489,	// (0x00011201) bg_dt_sta_indi_pane

0xf3b7,	// (0x0001e12f) dt_sta_battery_pane

0xf3bf,	// (0x0001e137) dt_sta_indi_pane_g1

0xaf7b,	// (0x00019cf3) dt_sta_indi_pane_g2

0xaf84,	// (0x00019cfc) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x0001ebfe) dt_sta_indi_pane_g

0xaf8d,	// (0x00019d05) dt_sta_signal_pane

0x2fbf,	// (0x00011d37) bg_dt_sta_title_pane_ParamLimits

0x2fbf,	// (0x00011d37) bg_dt_sta_title_pane

0x5b67,	// (0x000148df) dt_sta_title_pane_g1

0xf3c8,	// (0x0001e140) dt_sta_title_pane_t1_ParamLimits

0xf3c8,	// (0x0001e140) dt_sta_title_pane_t1

0x20f2,	// (0x00010e6a) bg_dt_sta_control_pane

0xf3dd,	// (0x0001e155) dt_sta_controll_pane_g1

0xaf96,	// (0x00019d0e) bg_dt_sta_title_pane_g1

0xaf9f,	// (0x00019d17) bg_dt_sta_title_pane_g2

0xafa8,	// (0x00019d20) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x0001ec05) bg_dt_sta_title_pane_g

0x7646,	// (0x000163be) bg_dt_sta_indi_pane_g1

0xafb1,	// (0x00019d29) dt_sta_signal_pane_g1

0xafb9,	// (0x00019d31) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0001ec0c) dt_sta_signal_pane_g

0xafc1,	// (0x00019d39) dt_sta_battery_pane_g1

0xafca,	// (0x00019d42) dt_sta_battery_pane_t1

0x7646,	// (0x000163be) bg_dt_sta_control_pane_g1

0x3880,	// (0x000125f8) fep_china_uni_eep_pane

0x3888,	// (0x00012600) fep_china_uni_entry_pane_ParamLimits

0x3898,	// (0x00012610) popup_fep_china_uni_window_g1_ParamLimits

0x38a8,	// (0x00012620) popup_fep_china_uni_window_g2_ParamLimits

0x38a8,	// (0x00012620) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001e4a8) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001e4a8) popup_fep_china_uni_window_g

0xafd9,	// (0x00019d51) fep_china_uni_eep_pane_g1

0xafe1,	// (0x00019d59) fep_china_uni_eep_pane_t1

0xaded,	// (0x00019b65) aid_touch_area_size_smil_player

0x48d1,	// (0x00013649) lc0_clock_pane

0x4aaf,	// (0x00013827) status_pane_g5_ParamLimits

0x4aaf,	// (0x00013827) status_pane_g5

0x4327,	// (0x0001309f) popup_keymap_window

0x4a6f,	// (0x000137e7) status_icon_pane

0xf1ed,	// (0x0001df65) cell_ai5_widget_pane_g3_ParamLimits

0xf20c,	// (0x0001df84) cell_ai5_widget_pane_g4_ParamLimits

0xf218,	// (0x0001df90) cell_ai5_widget_pane_g5_ParamLimits

0xf23c,	// (0x0001dfb4) cell_ai5_widget_pane_g8_ParamLimits

0xf23c,	// (0x0001dfb4) cell_ai5_widget_pane_g8

0xf250,	// (0x0001dfc8) cell_ai5_widget_pane_g9_ParamLimits

0xf250,	// (0x0001dfc8) cell_ai5_widget_pane_g9

0xf264,	// (0x0001dfdc) cell_ai5_widget_pane_g10_ParamLimits

0xf264,	// (0x0001dfdc) cell_ai5_widget_pane_g10

0xaff0,	// (0x00019d68) status_icon_pane_g1

0x20f2,	// (0x00010e6a) bg_popup_sub_pane_cp13

0xaff8,	// (0x00019d70) popup_keymap_window_t1

0x40f7,	// (0x00012e6f) control_pane_g6_ParamLimits

0x40f7,	// (0x00012e6f) control_pane_g6

0x40ea,	// (0x00012e62) control_pane_g7_ParamLimits

0x40ea,	// (0x00012e62) control_pane_g7

0x40dd,	// (0x00012e55) control_pane_g8_ParamLimits

0x40dd,	// (0x00012e55) control_pane_g8

0xf386,	// (0x0001e0fe) dt_sta_controll_pane_ParamLimits

0xf393,	// (0x0001e10b) dt_sta_indi_pane_ParamLimits

0xf3a4,	// (0x0001e11c) dt_sta_title_pane_ParamLimits

0x298b,	// (0x00011703) aid_size_touch_scroll_bar_cale

0xd54b,	// (0x0001c2c3) popup_discreet_window_ParamLimits

0xd54b,	// (0x0001c2c3) popup_discreet_window

0xd5c5,	// (0x0001c33d) popup_sk_window

0x5399,	// (0x00014111) bg_popup_sub_pane_cp28_ParamLimits

0x5399,	// (0x00014111) bg_popup_sub_pane_cp28

0xb006,	// (0x00019d7e) popup_discreet_window_g1_ParamLimits

0xb006,	// (0x00019d7e) popup_discreet_window_g1

0xb026,	// (0x00019d9e) popup_discreet_window_t1_ParamLimits

0xb026,	// (0x00019d9e) popup_discreet_window_t1

0xb044,	// (0x00019dbc) popup_discreet_window_t2_ParamLimits

0xb044,	// (0x00019dbc) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x0001ec11) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x0001ec11) popup_discreet_window_t

0xf3e6,	// (0x0001e15e) popup_sk_window_g1

0xf3f0,	// (0x0001e168) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0001ec18) popup_sk_window_g

0xb0a4,	// (0x00019e1c) popup_sk_window_t1

0xb096,	// (0x00019e0e) popup_sk_window_t1_copy1

0xf1dd,	// (0x0001df55) cell_ai5_widget_pane_g2_ParamLimits

0xf310,	// (0x0001e088) cell_ai5_widget_pane_t9_ParamLimits

0xf310,	// (0x0001e088) cell_ai5_widget_pane_t9

0x20f2,	// (0x00010e6a) main_fep_fshwr2_pane

0xf3fa,	// (0x0001e172) aid_fshwr2_btn_pane

0xf402,	// (0x0001e17a) aid_fshwr2_syb_pane

0xf40a,	// (0x0001e182) aid_fshwr2_txt_pane

0xf412,	// (0x0001e18a) fshwr2_func_candi_pane

0xf41e,	// (0x0001e196) fshwr2_hwr_syb_pane

0xf42a,	// (0x0001e1a2) fshwr2_icf_pane

0x20f2,	// (0x00010e6a) fshwr2_icf_bg_pane

0xf434,	// (0x0001e1ac) fshwr2_icf_pane_t1_ParamLimits

0xf434,	// (0x0001e1ac) fshwr2_icf_pane_t1

0x7646,	// (0x000163be) fshwr2_func_candi_pane_g1

0xb0c6,	// (0x00019e3e) fshwr2_func_candi_row_pane_ParamLimits

0xb0c6,	// (0x00019e3e) fshwr2_func_candi_row_pane

0xf44b,	// (0x0001e1c3) cell_fshwr2_syb_pane_ParamLimits

0xf44b,	// (0x0001e1c3) cell_fshwr2_syb_pane

0x78df,	// (0x00016657) fshwr2_hwr_syb_pane_g1_ParamLimits

0x78df,	// (0x00016657) fshwr2_hwr_syb_pane_g1

0x20f2,	// (0x00010e6a) bg_popup_call_pane_cp01

0xb0d7,	// (0x00019e4f) fshwr2_func_candi_cell_pane_ParamLimits

0xb0d7,	// (0x00019e4f) fshwr2_func_candi_cell_pane

0xb108,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xb108,	// (0x00019e80) fshwr2_func_candi_cell_bg_pane

0xb122,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb122,	// (0x00019e9a) fshwr2_func_candi_cell_pane_g1

0xb142,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb142,	// (0x00019eba) fshwr2_func_candi_cell_pane_t1

0x20f2,	// (0x00010e6a) bg_button_pane_cp08

0x3e0a,	// (0x00012b82) cell_fshwr2_syb_bg_pane

0xf467,	// (0x0001e1df) cell_fshwr2_syb_bg_pane_g1

0xb155,	// (0x00019ecd) cell_fshwr2_syb_bg_pane_t1

0x2fbf,	// (0x00011d37) main_tmo_pane

0x5eaa,	// (0x00014c22) uni_indicator_pane_g1_ParamLimits

0x5ebf,	// (0x00014c37) uni_indicator_pane_g2_ParamLimits

0x5ed5,	// (0x00014c4d) uni_indicator_pane_g3_ParamLimits

0x5eeb,	// (0x00014c63) uni_indicator_pane_g4_ParamLimits

0x5eeb,	// (0x00014c63) uni_indicator_pane_g4

0x5eff,	// (0x00014c77) uni_indicator_pane_g5_ParamLimits

0x5eff,	// (0x00014c77) uni_indicator_pane_g5

0x5f13,	// (0x00014c8b) uni_indicator_pane_g6_ParamLimits

0x5f13,	// (0x00014c8b) uni_indicator_pane_g6

0xf921,	// (0x0001e699) uni_indicator_pane_g_ParamLimits

0x8e87,	// (0x00017bff) popup_tmo_note_window_ParamLimits

0x8e87,	// (0x00017bff) popup_tmo_note_window

0x20f2,	// (0x00010e6a) fshwr2_bg_pane

0xb133,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb133,	// (0x00019eab) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x0001ec1d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x0001ec1d) fshwr2_func_candi_cell_pane_g

0x7646,	// (0x000163be) bg_popup_window_pane_cp01

0xb164,	// (0x00019edc) bg_popup_window_pane_g1_cp01

0xb16d,	// (0x00019ee5) bg_popup_window_pane_cp22_ParamLimits

0xb16d,	// (0x00019ee5) bg_popup_window_pane_cp22

0xb17b,	// (0x00019ef3) listscroll_tmo_link_pane_ParamLimits

0xb17b,	// (0x00019ef3) listscroll_tmo_link_pane

0xb1bb,	// (0x00019f33) popup_tmo_note_window_g1_ParamLimits

0xb1bb,	// (0x00019f33) popup_tmo_note_window_g1

0xb1c8,	// (0x00019f40) tmo_note_info_pane_ParamLimits

0xb1c8,	// (0x00019f40) tmo_note_info_pane

0xf46f,	// (0x0001e1e7) list_tmo_note_info_pane_g1_ParamLimits

0xf46f,	// (0x0001e1e7) list_tmo_note_info_pane_g1

0xb1e2,	// (0x00019f5a) list_tmo_note_info_pane_g2_ParamLimits

0xb1e2,	// (0x00019f5a) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x0001ec22) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x0001ec22) list_tmo_note_info_pane_g

0xb1fe,	// (0x00019f76) list_tmo_note_info_text_pane_ParamLimits

0xb1fe,	// (0x00019f76) list_tmo_note_info_text_pane

0xb240,	// (0x00019fb8) list_tmo_link_pane

0xb24d,	// (0x00019fc5) scroll_pane_cp20

0xb25a,	// (0x00019fd2) list_single_tmo_link_pane_ParamLimits

0xb25a,	// (0x00019fd2) list_single_tmo_link_pane

0xb26a,	// (0x00019fe2) list_single_tmo_link_pane_t1

0xb278,	// (0x00019ff0) list_tmo_note_info_text_pane_t1_ParamLimits

0xb278,	// (0x00019ff0) list_tmo_note_info_text_pane_t1

0x3202,	// (0x00011f7a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x3202,	// (0x00011f7a) aid_size_touch_scroll_bar_cp01

0xc907,	// (0x0001b67f) aid_size_touch_slider_marker

0xd5ad,	// (0x0001c325) popup_settings_window_ParamLimits

0xd5ad,	// (0x0001c325) popup_settings_window

0xcacf,	// (0x0001b847) popup_candi_list_indi_window

0x4781,	// (0x000134f9) aid_touch_navi_pane_ParamLimits

0xe555,	// (0x0001d2cd) rs_clock_indi_pane

0xe55e,	// (0x0001d2d6) sctrl_sk_bottom_pane_ParamLimits

0xe56f,	// (0x0001d2e7) sctrl_sk_top_pane_ParamLimits

0xe656,	// (0x0001d3ce) popup_fep_tooltip_window

0xae27,	// (0x00019b9f) aid_size_cell_widget_grid_ParamLimits

0xf1d1,	// (0x0001df49) cell_ai5_widget_pane_g1_ParamLimits

0xf1d1,	// (0x0001df49) cell_ai5_widget_pane_g1

0xf224,	// (0x0001df9c) cell_ai5_widget_pane_g6_ParamLimits

0xf230,	// (0x0001dfa8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe28,	// (0x0001eba0) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0001eba0) cell_ai5_widget_pane_g

0xf334,	// (0x0001e0ac) cell_ai5_widget_pane_t10_ParamLimits

0xf334,	// (0x0001e0ac) cell_ai5_widget_pane_t10

0xf34a,	// (0x0001e0c2) grid_ai5_widget_pane_ParamLimits

0xaede,	// (0x00019c56) cell_contacts_ai5_widget_pane_ParamLimits

0xaede,	// (0x00019c56) cell_contacts_ai5_widget_pane

0xb059,	// (0x00019dd1) popup_discreet_window_t3_ParamLimits

0xb059,	// (0x00019dd1) popup_discreet_window_t3

0xb0b2,	// (0x00019e2a) popup_fshwr2_char_preview_window_ParamLimits

0xb0b2,	// (0x00019e2a) popup_fshwr2_char_preview_window

0xf486,	// (0x0001e1fe) tmo_note_info_pane_t1

0xf49b,	// (0x0001e213) tmo_note_info_pane_t2

0xf4b4,	// (0x0001e22c) tmo_note_info_pane_t3

0xb21c,	// (0x00019f94) tmo_note_info_pane_t4

0xb22e,	// (0x00019fa6) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0001ec27) tmo_note_info_pane_t

0xb240,	// (0x00019fb8) list_tmo_link_pane_ParamLimits

0xb24d,	// (0x00019fc5) scroll_pane_cp20_ParamLimits

0x20f2,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp01

0xb291,	// (0x0001a009) popup_fshwr2_char_preview_window_t1

0xb29f,	// (0x0001a017) popup_candi_list_indi_window_g1

0xb2a8,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane

0xb2b4,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1

0xb2c8,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2

0xb2d7,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x0001ec32) cell_contacts_ai5_widget_pane_g

0xb2ea,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1

0x2fbf,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb364,	// (0x0001a0dc) settings_container_pane

0x3e0a,	// (0x00012b82) listscroll_set_pane_copy1

0x6b01,	// (0x00015879) scroll_pane_cp121_copy1

0xb370,	// (0x0001a0e8) set_content_pane_copy1

0xb378,	// (0x0001a0f0) aid_height_set_list_copy1_ParamLimits

0xb378,	// (0x0001a0f0) aid_height_set_list_copy1

0x612e,	// (0x00014ea6) aid_size_parent_copy1_ParamLimits

0x612e,	// (0x00014ea6) aid_size_parent_copy1

0xb384,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb384,	// (0x0001a0fc) button_value_adjust_pane_cp6_copy1

0x4190,	// (0x00012f08) list_highlight_pane_cp2_copy1_ParamLimits

0x4190,	// (0x00012f08) list_highlight_pane_cp2_copy1

0xb398,	// (0x0001a110) list_set_pane_copy1_ParamLimits

0xb398,	// (0x0001a110) list_set_pane_copy1

0xb2ff,	// (0x0001a077) main_pane_set_t1_copy1_ParamLimits

0xb2ff,	// (0x0001a077) main_pane_set_t1_copy1

0xb339,	// (0x0001a0b1) main_pane_set_t2_copy1_ParamLimits

0xb339,	// (0x0001a0b1) main_pane_set_t2_copy1

0xb445,	// (0x0001a1bd) main_pane_set_t3_copy1

0xb453,	// (0x0001a1cb) main_pane_set_t4_copy1

0xb358,	// (0x0001a0d0) set_content_pane_g1_copy1_ParamLimits

0xb358,	// (0x0001a0d0) set_content_pane_g1_copy1

0xb461,	// (0x0001a1d9) setting_code_pane_copy1

0xb46b,	// (0x0001a1e3) setting_slider_graphic_pane_copy1

0xb46b,	// (0x0001a1e3) setting_slider_pane_copy1

0xb46b,	// (0x0001a1e3) setting_text_pane_copy1

0xb475,	// (0x0001a1ed) setting_volume_pane_copy1

0xb47e,	// (0x0001a1f6) settings_code_pane_cp2_copy1

0xb486,	// (0x0001a1fe) settings_code_pane_cp_copy1_ParamLimits

0xb486,	// (0x0001a1fe) settings_code_pane_cp_copy1

0xb49a,	// (0x0001a212) volume_set_pane_copy1

0xb4a2,	// (0x0001a21a) volume_set_pane_g10_copy1

0xb4aa,	// (0x0001a222) volume_set_pane_g1_copy1

0xb4b2,	// (0x0001a22a) volume_set_pane_g2_copy1

0xb4ba,	// (0x0001a232) volume_set_pane_g3_copy1

0xb4c2,	// (0x0001a23a) volume_set_pane_g4_copy1

0xb4ca,	// (0x0001a242) volume_set_pane_g5_copy1

0xb4d2,	// (0x0001a24a) volume_set_pane_g6_copy1

0xb4da,	// (0x0001a252) volume_set_pane_g7_copy1

0xb4e2,	// (0x0001a25a) volume_set_pane_g8_copy1

0xb4ea,	// (0x0001a262) volume_set_pane_g9_copy1

0x21e6,	// (0x00010f5e) bg_set_opt_pane_cp_copy1_ParamLimits

0x21e6,	// (0x00010f5e) bg_set_opt_pane_cp_copy1

0xb4f2,	// (0x0001a26a) setting_slider_pane_t1_copy1_ParamLimits

0xb4f2,	// (0x0001a26a) setting_slider_pane_t1_copy1

0xb510,	// (0x0001a288) setting_slider_pane_t2_copy1_ParamLimits

0xb510,	// (0x0001a288) setting_slider_pane_t2_copy1

0xb52a,	// (0x0001a2a2) setting_slider_pane_t3_copy1_ParamLimits

0xb52a,	// (0x0001a2a2) setting_slider_pane_t3_copy1

0xb542,	// (0x0001a2ba) slider_set_pane_copy1_ParamLimits

0xb542,	// (0x0001a2ba) slider_set_pane_copy1

0x30fb,	// (0x00011e73) set_opt_bg_pane_g1_copy2

0x3103,	// (0x00011e7b) set_opt_bg_pane_g2_copy2

0xb56c,	// (0x0001a2e4) set_opt_bg_pane_g3_copy2

0x3113,	// (0x00011e8b) set_opt_bg_pane_g4_copy2

0x311b,	// (0x00011e93) set_opt_bg_pane_g5_copy2

0x3123,	// (0x00011e9b) set_opt_bg_pane_g6_copy2

0xb576,	// (0x0001a2ee) set_opt_bg_pane_g7_copy2

0xb57e,	// (0x0001a2f6) set_opt_bg_pane_g8_copy2

0xb588,	// (0x0001a300) set_opt_bg_pane_g9_copy2

0xf4c9,	// (0x0001e241) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4c9,	// (0x0001e241) aid_size_touch_slider_mark_copy1

0xb592,	// (0x0001a30a) slider_set_pane_g1_copy1

0xf4dd,	// (0x0001e255) slider_set_pane_g2_copy1

0xe00f,	// (0x0001cd87) slider_set_pane_g3_copy1_ParamLimits

0xe00f,	// (0x0001cd87) slider_set_pane_g3_copy1

0xe023,	// (0x0001cd9b) slider_set_pane_g4_copy1_ParamLimits

0xe023,	// (0x0001cd9b) slider_set_pane_g4_copy1

0xe03b,	// (0x0001cdb3) slider_set_pane_g5_copy1_ParamLimits

0xe03b,	// (0x0001cdb3) slider_set_pane_g5_copy1

0xe00f,	// (0x0001cd87) slider_set_pane_g6_copy1_ParamLimits

0xe00f,	// (0x0001cd87) slider_set_pane_g6_copy1

0xf4e5,	// (0x0001e25d) slider_set_pane_g7_copy1_ParamLimits

0xf4e5,	// (0x0001e25d) slider_set_pane_g7_copy1

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp2_copy1

0xb59b,	// (0x0001a313) setting_slider_graphic_pane_g1_copy1

0xb5a4,	// (0x0001a31c) setting_slider_graphic_pane_t1_copy1

0xb5b4,	// (0x0001a32c) setting_slider_graphic_pane_t2_copy1

0xb5c4,	// (0x0001a33c) slider_set_pane_cp_copy1

0xb5d4,	// (0x0001a34c) input_focus_pane_cp1_copy1

0xb5dd,	// (0x0001a355) list_set_text_pane_copy1

0xb5e5,	// (0x0001a35d) setting_text_pane_g1_copy1

0xd2be,	// (0x0001c036) set_text_pane_t1_copy1

0xb5d4,	// (0x0001a34c) input_focus_pane_cp2_copy1

0xb5e5,	// (0x0001a35d) setting_code_pane_g1_copy1

0xb60b,	// (0x0001a383) setting_code_pane_t1_copy1

0xb558,	// (0x0001a2d0) list_set_graphic_pane_copy1

0x2106,	// (0x00010e7e) bg_set_opt_pane_cp4_copy1

0x3b0c,	// (0x00012884) list_set_graphic_pane_g1_copy1_ParamLimits

0x3b0c,	// (0x00012884) list_set_graphic_pane_g1_copy1

0xb619,	// (0x0001a391) list_set_graphic_pane_g2_copy1

0x3b24,	// (0x0001289c) list_set_graphic_pane_t1_copy1_ParamLimits

0x3b24,	// (0x0001289c) list_set_graphic_pane_t1_copy1

0x7646,	// (0x000163be) rs_clock_indi_pane_g1

0xb621,	// (0x0001a399) rs_clock_indi_pane_t1

0xb62f,	// (0x0001a3a7) rs_indi_pane

0xb637,	// (0x0001a3af) rs_indi_pane_g1

0xb640,	// (0x0001a3b8) rs_indi_pane_g2

0xb649,	// (0x0001a3c1) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x0001ec39) rs_indi_pane_g

0x3e0a,	// (0x00012b82) bg_popup_preview_window_pane_cp03

0xb652,	// (0x0001a3ca) popup_fep_tooltip_window_t1

0x84c5,	// (0x0001723d) popup_note2_window_g2_ParamLimits

0x84c5,	// (0x0001723d) popup_note2_window_g2

0x0001,

0xfc61,	// (0x0001e9d9) popup_note2_window_g_ParamLimits

0xfc61,	// (0x0001e9d9) popup_note2_window_g

0x8aa7,	// (0x0001781f) bg_popup_sub_pane_cp11_ParamLimits

0x8ab4,	// (0x0001782c) cell_ai3_links_pane_g1_ParamLimits

0x8acb,	// (0x00017843) cell_ai3_links_pane_t1

0xd2be,	// (0x0001c036) set_text_pane_t1_copy1_ParamLimits

0x3d19,	// (0x00012a91) cell_graphic_popup_pane_cp2_ParamLimits

0x3d19,	// (0x00012a91) cell_graphic_popup_pane_cp2

0xb660,	// (0x0001a3d8) cell_graphic_popup_pane_g1_cp2

0x279e,	// (0x00011516) cell_graphic_popup_pane_g2_cp2

0xb668,	// (0x0001a3e0) cell_graphic_popup_pane_g3_cp2

0xb670,	// (0x0001a3e8) cell_graphic_popup_pane_t2_cp2

0x27af,	// (0x00011527) grid_highlight_pane_cp3_cp2

0x34e1,	// (0x00012259) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fbf,	// (0x00011d37) main_tmo_pane_ParamLimits

0x8e7b,	// (0x00017bf3) popup_tmo_big_image_note_window

0xf1c1,	// (0x0001df39) cell_ai5_widget_list_pane

0xf1c9,	// (0x0001df41) cell_ai5_widget_lrg_icon_pane

0xf486,	// (0x0001e1fe) tmo_note_info_pane_t1_ParamLimits

0xf49b,	// (0x0001e213) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0001e22c) tmo_note_info_pane_t3_ParamLimits

0xb21c,	// (0x00019f94) tmo_note_info_pane_t4_ParamLimits

0xb22e,	// (0x00019fa6) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0001ec27) tmo_note_info_pane_t_ParamLimits

0xb364,	// (0x0001a0dc) settings_container_pane_ParamLimits

0xb5cc,	// (0x0001a344) indicator_popup_pane_cp5

0xb5cc,	// (0x0001a344) indicator_popup_pane_cp6

0xb558,	// (0x0001a2d0) list_set_graphic_pane_copy1_ParamLimits

0x20f2,	// (0x00010e6a) bg_popup_window_pane_cp23

0xb67e,	// (0x0001a3f6) popup_tmo_big_image_note_window_g1

0xb689,	// (0x0001a401) popup_tmo_big_image_note_window_t1

0xb699,	// (0x0001a411) popup_tmo_big_image_note_window_t2

0xb6a9,	// (0x0001a421) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x0001ec40) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0001e273) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0001e27b) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0001e289) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0001e289) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0001e2a2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0001e2a2) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0001e2af) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0001e2af) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0001e2c7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0001e2c7) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfecf,	// (0x0001ec47) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0001ec47) cell_ai5_widget_list_row_pane_t

0x20f2,	// (0x00010e6a) main_fep_vtchi_ss_pane

0xb6b9,	// (0x0001a431) popup_fep_char_pre_window

0xb6c1,	// (0x0001a439) popup_fep_ituss_window

0xb6e2,	// (0x0001a45a) popup_fep_vkbss_window

0xb701,	// (0x0001a479) grid_vkbss_keypad_pane_ParamLimits

0xb701,	// (0x0001a479) grid_vkbss_keypad_pane

0xb711,	// (0x0001a489) ituss_keypad_pane

0xb729,	// (0x0001a4a1) aid_vkbss_key_offset_ParamLimits

0xb729,	// (0x0001a4a1) aid_vkbss_key_offset

0xb735,	// (0x0001a4ad) cell_vkbss_key_pane_ParamLimits

0xb735,	// (0x0001a4ad) cell_vkbss_key_pane

0x4a8b,	// (0x00013803) bg_cell_vkbss_key_g1_ParamLimits

0x4a8b,	// (0x00013803) bg_cell_vkbss_key_g1

0xb74b,	// (0x0001a4c3) cell_vkbss_key_3p_pane_ParamLimits

0xb74b,	// (0x0001a4c3) cell_vkbss_key_3p_pane

0xb765,	// (0x0001a4dd) cell_vkbss_key_g1_ParamLimits

0xb765,	// (0x0001a4dd) cell_vkbss_key_g1

0xb77f,	// (0x0001a4f7) cell_vkbss_key_t1_ParamLimits

0xb77f,	// (0x0001a4f7) cell_vkbss_key_t1

0xb7aa,	// (0x0001a522) cell_ituss_key_pane_ParamLimits

0xb7aa,	// (0x0001a522) cell_ituss_key_pane

0xb7ba,	// (0x0001a532) bg_cell_ituss_key_g1_ParamLimits

0xb7ba,	// (0x0001a532) bg_cell_ituss_key_g1

0xb7c6,	// (0x0001a53e) cell_ituss_key_pane_g1_ParamLimits

0xb7c6,	// (0x0001a53e) cell_ituss_key_pane_g1

0xb7d2,	// (0x0001a54a) cell_ituss_key_pane_g2_ParamLimits

0xb7d2,	// (0x0001a54a) cell_ituss_key_pane_g2

0x0001,

0xfed4,	// (0x0001ec4c) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0001ec4c) cell_ituss_key_pane_g

0xb7eb,	// (0x0001a563) cell_ituss_key_t1_ParamLimits

0xb7eb,	// (0x0001a563) cell_ituss_key_t1

0xb819,	// (0x0001a591) cell_ituss_key_t2_ParamLimits

0xb819,	// (0x0001a591) cell_ituss_key_t2

0xb84a,	// (0x0001a5c2) cell_ituss_key_t3_ParamLimits

0xb84a,	// (0x0001a5c2) cell_ituss_key_t3

0xb87b,	// (0x0001a5f3) cell_ituss_key_t4_ParamLimits

0xb87b,	// (0x0001a5f3) cell_ituss_key_t4

0x0003,

0xfed9,	// (0x0001ec51) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x0001ec51) cell_ituss_key_t

0xb8ac,	// (0x0001a624) cell_vkbss_key_3p_pane_g1

0xb8b4,	// (0x0001a62c) cell_vkbss_key_3p_pane_g2

0xb8bc,	// (0x0001a634) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0001ec5a) cell_vkbss_key_3p_pane_g

0x20f2,	// (0x00010e6a) bg_popup_fep_char_preview_window_cp02

0xb8c4,	// (0x0001a63c) popup_fep_char_pre_window_t1

0xf1b7,	// (0x0001df2f) main_ai5_sk_pane

0xb2a8,	// (0x0001a020) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xb2b4,	// (0x0001a02c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xb2c8,	// (0x0001a040) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xb2d7,	// (0x0001a04f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x0001ec32) cell_contacts_ai5_widget_pane_g_ParamLimits

0xb2ea,	// (0x0001a062) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fbf,	// (0x00011d37) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0001e2d9) main_ai5_sk_pane_g1

0x51d7,	// (0x00013f4f) popup_query_code_window_g1

0xb6d7,	// (0x0001a44f) popup_fep_vkb_icf_pane

0xb6eb,	// (0x0001a463) popup_fep_vtchi_icf_pane

0x2fbf,	// (0x00011d37) bg_icf_pane

0xb8e2,	// (0x0001a65a) list_vkb_icf_pane

0x2fbf,	// (0x00011d37) bg_icf_pane_cp01

0xb8fa,	// (0x0001a672) vtchi_icf_list_pane

0xb90a,	// (0x0001a682) list_vkb_icf_pane_t1_ParamLimits

0xb90a,	// (0x0001a682) list_vkb_icf_pane_t1

0xb924,	// (0x0001a69c) vtchi_icf_list_pane_t1_ParamLimits

0xb924,	// (0x0001a69c) vtchi_icf_list_pane_t1

0xb6c1,	// (0x0001a439) popup_fep_ituss_window_ParamLimits

0xb6eb,	// (0x0001a463) popup_fep_vtchi_icf_pane_ParamLimits

0xb711,	// (0x0001a489) ituss_keypad_pane_ParamLimits

0xb720,	// (0x0001a498) ituss_sks_pane

0x2fbf,	// (0x00011d37) bg_icf_pane_ParamLimits

0xb8d3,	// (0x0001a64b) icf_edit_indi_pane_ParamLimits

0xb8d3,	// (0x0001a64b) icf_edit_indi_pane

0xb8e2,	// (0x0001a65a) list_vkb_icf_pane_ParamLimits

0x2fbf,	// (0x00011d37) bg_icf_pane_cp01_ParamLimits

0xb8ee,	// (0x0001a666) icf_edit_indi_pane_cp01_ParamLimits

0xb8ee,	// (0x0001a666) icf_edit_indi_pane_cp01

0xb902,	// (0x0001a67a) vtchi_query_pane

0x78df,	// (0x00016657) icf_edit_indi_pane_g1_ParamLimits

0x78df,	// (0x00016657) icf_edit_indi_pane_g1

0xb94b,	// (0x0001a6c3) icf_edit_indi_pane_g2_ParamLimits

0xb94b,	// (0x0001a6c3) icf_edit_indi_pane_g2

0x0001,

0xfee9,	// (0x0001ec61) icf_edit_indi_pane_g_ParamLimits

0xfee9,	// (0x0001ec61) icf_edit_indi_pane_g

0xb957,	// (0x0001a6cf) icf_edit_indi_pane_t1

0xb965,	// (0x0001a6dd) bg_input_focus_pane_cp042

0x2982,	// (0x000116fa) vtchi_button_pane

0xb96e,	// (0x0001a6e6) vtchi_query_pane_t1

0xb97c,	// (0x0001a6f4) vtchi_query_pane_t2

0xb98a,	// (0x0001a702) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0001ec66) vtchi_query_pane_t

0x20f2,	// (0x00010e6a) bg_button_pane_cp13

0xb998,	// (0x0001a710) vtchi_button_pane_g1

0x9385,	// (0x000180fd) ituss_sks_pane_g1

0xb9a0,	// (0x0001a718) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0001ec6d) ituss_sks_pane_g

0xb9a9,	// (0x0001a721) ituss_sks_pane_t1

0xb9b7,	// (0x0001a72f) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0001ec72) ituss_sks_pane_t

0x7022,	// (0x00015d9a) indicator_nsta_pane_cp_g1

0x702b,	// (0x00015da3) indicator_nsta_pane_cp_g2

0x7033,	// (0x00015dab) indicator_nsta_pane_cp_g3

0x703b,	// (0x00015db3) indicator_nsta_pane_cp_g4

0x7043,	// (0x00015dbb) indicator_nsta_pane_cp_g5

0x704b,	// (0x00015dc3) indicator_nsta_pane_cp_g6

0x0005,

0xfaab,	// (0x0001e823) indicator_nsta_pane_cp_g

0xee21,	// (0x0001db99) cell_graphic2_pane_t2_ParamLimits

0xee21,	// (0x0001db99) cell_graphic2_pane_t2

0x0001,

0xfdb1,	// (0x0001eb29) cell_graphic2_pane_t_ParamLimits

0xfdb1,	// (0x0001eb29) cell_graphic2_pane_t

0xee4e,	// (0x0001dbc6) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

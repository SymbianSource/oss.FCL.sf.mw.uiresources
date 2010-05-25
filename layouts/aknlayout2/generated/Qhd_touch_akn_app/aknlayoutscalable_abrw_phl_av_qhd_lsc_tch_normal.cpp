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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f382 };

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
0xc8b8,	// (0x0001bc3a) Screen

0xc8c4,	// (0x0001bc46) application_window_ParamLimits

0xc8c4,	// (0x0001bc46) application_window

0x26de,	// (0x00011a60) screen_g1

0xb82e,	// (0x0001abb0) area_bottom_pane_ParamLimits

0xb82e,	// (0x0001abb0) area_bottom_pane

0x02ab,	// (0x0000f62d) area_top_pane_ParamLimits

0x02ab,	// (0x0000f62d) area_top_pane

0x0349,	// (0x0000f6cb) main_pane_ParamLimits

0x0349,	// (0x0000f6cb) main_pane

0x26e8,	// (0x00011a6a) misc_graphics

0xd5f8,	// (0x0001c97a) battery_pane_ParamLimits

0xd5f8,	// (0x0001c97a) battery_pane

0x5630,	// (0x000149b2) bg_status_flat_pane_g8

0x5638,	// (0x000149ba) bg_status_flat_pane_g9

0x4917,	// (0x00013c99) context_pane_ParamLimits

0x4917,	// (0x00013c99) context_pane

0xd763,	// (0x0001cae5) navi_pane_ParamLimits

0xd763,	// (0x0001cae5) navi_pane

0xd7e1,	// (0x0001cb63) signal_pane_ParamLimits

0xd7e1,	// (0x0001cb63) signal_pane

0x0008,

0xf86f,	// (0x0001ebf1) bg_status_flat_pane_g

0xd871,	// (0x0001cbf3) status_pane_g1_ParamLimits

0xd871,	// (0x0001cbf3) status_pane_g1

0xd887,	// (0x0001cc09) status_pane_g2_ParamLimits

0xd887,	// (0x0001cc09) status_pane_g2

0x4b3e,	// (0x00013ec0) status_pane_g3_ParamLimits

0x4b3e,	// (0x00013ec0) status_pane_g3

0x0004,

0xf79b,	// (0x0001eb1d) status_pane_g_ParamLimits

0xf79b,	// (0x0001eb1d) status_pane_g

0xd893,	// (0x0001cc15) title_pane_ParamLimits

0xd893,	// (0x0001cc15) title_pane

0xd8f6,	// (0x0001cc78) uni_indicator_pane_ParamLimits

0xd8f6,	// (0x0001cc78) uni_indicator_pane

0x4769,	// (0x00013aeb) bg_list_pane_ParamLimits

0x4769,	// (0x00013aeb) bg_list_pane

0xd543,	// (0x0001c8c5) find_pane

0xbb90,	// (0x0001af12) listscroll_app_pane_ParamLimits

0xbb90,	// (0x0001af12) listscroll_app_pane

0x479d,	// (0x00013b1f) listscroll_form_pane

0xbba0,	// (0x0001af22) listscroll_gen_pane_ParamLimits

0xbba0,	// (0x0001af22) listscroll_gen_pane

0x0c3a,	// (0x0000ffbc) listscroll_set_pane

0x61e5,	// (0x00015567) main_idle_act_pane

0x4465,	// (0x000137e7) main_idle_trad_pane

0x4465,	// (0x000137e7) main_list_empty_pane

0x47b7,	// (0x00013b39) main_midp_pane

0x47c3,	// (0x00013b45) main_pane_g1_ParamLimits

0x47c3,	// (0x00013b45) main_pane_g1

0xbbb4,	// (0x0001af36) popup_ai_message_window_ParamLimits

0xbbb4,	// (0x0001af36) popup_ai_message_window

0xbc45,	// (0x0001afc7) popup_fep_china_uni_window_ParamLimits

0xbc45,	// (0x0001afc7) popup_fep_china_uni_window

0x0d52,	// (0x000100d4) popup_fep_japan_candidate_window_ParamLimits

0x0d52,	// (0x000100d4) popup_fep_japan_candidate_window

0x0d72,	// (0x000100f4) popup_fep_japan_predictive_window_ParamLimits

0x0d72,	// (0x000100f4) popup_fep_japan_predictive_window

0xbca1,	// (0x0001b023) popup_find_window

0xbcbe,	// (0x0001b040) popup_grid_graphic_window_ParamLimits

0xbcbe,	// (0x0001b040) popup_grid_graphic_window

0x0dd9,	// (0x0001015b) popup_large_graphic_colour_window

0xbd5c,	// (0x0001b0de) popup_menu_window_ParamLimits

0xbd5c,	// (0x0001b0de) popup_menu_window

0xbf2e,	// (0x0001b2b0) popup_note_image_window

0xbef4,	// (0x0001b276) popup_note_wait_window_ParamLimits

0xbef4,	// (0x0001b276) popup_note_wait_window

0xbf46,	// (0x0001b2c8) popup_note_window_ParamLimits

0xbf46,	// (0x0001b2c8) popup_note_window

0xbfec,	// (0x0001b36e) popup_query_code_window_ParamLimits

0xbfec,	// (0x0001b36e) popup_query_code_window

0x1021,	// (0x000103a3) popup_query_data_code_window_ParamLimits

0x1021,	// (0x000103a3) popup_query_data_code_window

0xc026,	// (0x0001b3a8) popup_query_data_window_ParamLimits

0xc026,	// (0x0001b3a8) popup_query_data_window

0xc0a8,	// (0x0001b42a) popup_query_sat_info_window_ParamLimits

0xc0a8,	// (0x0001b42a) popup_query_sat_info_window

0xc13f,	// (0x0001b4c1) popup_snote_single_graphic_window_ParamLimits

0xc13f,	// (0x0001b4c1) popup_snote_single_graphic_window

0xc13f,	// (0x0001b4c1) popup_snote_single_text_window_ParamLimits

0xc13f,	// (0x0001b4c1) popup_snote_single_text_window

0x10a8,	// (0x0001042a) popup_sub_window_general

0x11d8,	// (0x0001055a) popup_window_general_ParamLimits

0x11d8,	// (0x0001055a) popup_window_general

0x47d9,	// (0x00013b5b) power_save_pane

0xba15,	// (0x0001ad97) control_pane_g1_ParamLimits

0xba15,	// (0x0001ad97) control_pane_g1

0xba3e,	// (0x0001adc0) control_pane_g2_ParamLimits

0xba3e,	// (0x0001adc0) control_pane_g2

0x472c,	// (0x00013aae) control_pane_g3_ParamLimits

0x472c,	// (0x00013aae) control_pane_g3

0x0007,

0xf783,	// (0x0001eb05) control_pane_g_ParamLimits

0xf783,	// (0x0001eb05) control_pane_g

0xba7f,	// (0x0001ae01) control_pane_t1_ParamLimits

0xba7f,	// (0x0001ae01) control_pane_t1

0xbae5,	// (0x0001ae67) control_pane_t2_ParamLimits

0xbae5,	// (0x0001ae67) control_pane_t2

0x0002,

0xf794,	// (0x0001eb16) control_pane_t_ParamLimits

0xf794,	// (0x0001eb16) control_pane_t

0xd475,	// (0x0001c7f7) navi_navi_volume_pane_cp1

0xd47d,	// (0x0001c7ff) status_small_icon_pane

0x4661,	// (0x000139e3) status_small_pane_g1_ParamLimits

0x4661,	// (0x000139e3) status_small_pane_g1

0xd485,	// (0x0001c807) status_small_pane_g2_ParamLimits

0xd485,	// (0x0001c807) status_small_pane_g2

0xd491,	// (0x0001c813) status_small_pane_g3_ParamLimits

0xd491,	// (0x0001c813) status_small_pane_g3

0xd49d,	// (0x0001c81f) status_small_pane_g4_ParamLimits

0xd49d,	// (0x0001c81f) status_small_pane_g4

0xd4a9,	// (0x0001c82b) status_small_pane_g5_ParamLimits

0xd4a9,	// (0x0001c82b) status_small_pane_g5

0xd4b7,	// (0x0001c839) status_small_pane_g6_ParamLimits

0xd4b7,	// (0x0001c839) status_small_pane_g6

0x0007,

0xf772,	// (0x0001eaf4) status_small_pane_g_ParamLimits

0xf772,	// (0x0001eaf4) status_small_pane_g

0xd4e6,	// (0x0001c868) status_small_pane_t1

0xd508,	// (0x0001c88a) status_small_wait_pane_ParamLimits

0xd508,	// (0x0001c88a) status_small_wait_pane

0xd2af,	// (0x0001c631) aid_levels_signal_ParamLimits

0xd2af,	// (0x0001c631) aid_levels_signal

0xd2c7,	// (0x0001c649) signal_pane_g1_ParamLimits

0xd2c7,	// (0x0001c649) signal_pane_g1

0xd2e2,	// (0x0001c664) signal_pane_g2_ParamLimits

0xd2e2,	// (0x0001c664) signal_pane_g2

0x0003,

0xf703,	// (0x0001ea85) signal_pane_g_ParamLimits

0xf703,	// (0x0001ea85) signal_pane_g

0x3eaa,	// (0x0001322c) context_pane_g1

0xc8d4,	// (0x0001bc56) title_pane_g1

0xc90b,	// (0x0001bc8d) title_pane_t1

0x2790,	// (0x00011b12) title_pane_t2

0x27b6,	// (0x00011b38) title_pane_t3

0x0002,

0xf557,	// (0x0001e8d9) title_pane_t

0xd91e,	// (0x0001cca0) aid_levels_battery_ParamLimits

0xd91e,	// (0x0001cca0) aid_levels_battery

0xd93a,	// (0x0001ccbc) battery_pane_g1_ParamLimits

0xd93a,	// (0x0001ccbc) battery_pane_g1

0xd957,	// (0x0001ccd9) battery_pane_g2_ParamLimits

0xd957,	// (0x0001ccd9) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001eb28) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001eb28) battery_pane_g

0xdb2e,	// (0x0001ceb0) uni_indicator_pane_g1

0xdb44,	// (0x0001cec6) uni_indicator_pane_g2

0xdb5a,	// (0x0001cedc) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001ec99) uni_indicator_pane_g

0x42d7,	// (0x00013659) navi_icon_pane_ParamLimits

0x42d7,	// (0x00013659) navi_icon_pane

0x4215,	// (0x00013597) navi_midp_pane

0x42f3,	// (0x00013675) navi_navi_pane

0x42fd,	// (0x0001367f) navi_text_pane_ParamLimits

0x42fd,	// (0x0001367f) navi_text_pane

0x26de,	// (0x00011a60) status_small_wait_pane_g1

0x2bff,	// (0x00011f81) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001ec94) status_small_wait_pane_g

0x5c97,	// (0x00015019) navi_navi_icon_text_pane

0x5c9f,	// (0x00015021) navi_navi_pane_g1_ParamLimits

0x5c9f,	// (0x00015021) navi_navi_pane_g1

0x5cb1,	// (0x00015033) navi_navi_pane_g2_ParamLimits

0x5cb1,	// (0x00015033) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001ec62) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001ec62) navi_navi_pane_g

0x5cc3,	// (0x00015045) navi_navi_tabs_pane

0x5ccc,	// (0x0001504e) navi_navi_text_pane

0x5c97,	// (0x00015019) navi_navi_volume_pane

0x5c73,	// (0x00014ff5) navi_text_pane_t1

0x5c67,	// (0x00014fe9) navi_icon_pane_g1

0x5bba,	// (0x00014f3c) navi_navi_text_pane_t1

0x14f0,	// (0x00010872) navi_navi_volume_pane_g1

0x14f8,	// (0x0001087a) volume_small_pane

0x5b20,	// (0x00014ea2) navi_navi_icon_text_pane_g1

0x5b28,	// (0x00014eaa) navi_navi_icon_text_pane_t1

0x42f3,	// (0x00013675) navi_tabs_2_long_pane

0x42f3,	// (0x00013675) navi_tabs_2_pane

0x42f3,	// (0x00013675) navi_tabs_3_long_pane

0x42f3,	// (0x00013675) navi_tabs_3_pane

0x42f3,	// (0x00013675) navi_tabs_4_pane

0x14d0,	// (0x00010852) tabs_2_active_pane_ParamLimits

0x14d0,	// (0x00010852) tabs_2_active_pane

0x14e0,	// (0x00010862) tabs_2_passive_pane_ParamLimits

0x14e0,	// (0x00010862) tabs_2_passive_pane

0x149e,	// (0x00010820) tabs_3_active_pane_ParamLimits

0x149e,	// (0x00010820) tabs_3_active_pane

0x14ae,	// (0x00010830) tabs_3_passive_pane_ParamLimits

0x14ae,	// (0x00010830) tabs_3_passive_pane

0x14bf,	// (0x00010841) tabs_3_passive_pane_cp_ParamLimits

0x14bf,	// (0x00010841) tabs_3_passive_pane_cp

0x145a,	// (0x000107dc) tabs_4_active_pane_ParamLimits

0x145a,	// (0x000107dc) tabs_4_active_pane

0x146b,	// (0x000107ed) tabs_4_passive_pane_ParamLimits

0x146b,	// (0x000107ed) tabs_4_passive_pane

0x147c,	// (0x000107fe) tabs_4_passive_pane_cp_ParamLimits

0x147c,	// (0x000107fe) tabs_4_passive_pane_cp

0x148d,	// (0x0001080f) tabs_4_passive_pane_cp2_ParamLimits

0x148d,	// (0x0001080f) tabs_4_passive_pane_cp2

0x1436,	// (0x000107b8) tabs_2_long_active_pane_ParamLimits

0x1436,	// (0x000107b8) tabs_2_long_active_pane

0x1448,	// (0x000107ca) tabs_2_long_passive_pane_ParamLimits

0x1448,	// (0x000107ca) tabs_2_long_passive_pane

0x13f7,	// (0x00010779) tabs_3_long_active_pane_ParamLimits

0x13f7,	// (0x00010779) tabs_3_long_active_pane

0x140a,	// (0x0001078c) tabs_3_long_passive_pane_ParamLimits

0x140a,	// (0x0001078c) tabs_3_long_passive_pane

0x1423,	// (0x000107a5) tabs_3_long_passive_pane_cp_ParamLimits

0x1423,	// (0x000107a5) tabs_3_long_passive_pane_cp

0x139d,	// (0x0001071f) volume_small_pane_g1

0x13a6,	// (0x00010728) volume_small_pane_g2

0x13af,	// (0x00010731) volume_small_pane_g3

0x13b8,	// (0x0001073a) volume_small_pane_g4

0x13c1,	// (0x00010743) volume_small_pane_g5

0x13ca,	// (0x0001074c) volume_small_pane_g6

0x13d3,	// (0x00010755) volume_small_pane_g7

0x13dc,	// (0x0001075e) volume_small_pane_g8

0x13e5,	// (0x00010767) volume_small_pane_g9

0x13ee,	// (0x00010770) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ec2e) volume_small_pane_g

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp2_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp2

0x27d6,	// (0x00011b58) tabs_3_active_pane_g1

0xc997,	// (0x0001bd19) tabs_3_active_pane_t1

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp2_ParamLimits

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp2

0x27d6,	// (0x00011b58) tabs_3_passive_pane_g1

0xc997,	// (0x0001bd19) tabs_3_passive_pane_t1

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp3_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp3

0x27f0,	// (0x00011b72) tabs_4_active_pane_g1

0xc9a9,	// (0x0001bd2b) tabs_4_active_pane_t1

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp3_ParamLimits

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp3

0x27f0,	// (0x00011b72) tabs_4_1_passive_pane_g1

0xc9a9,	// (0x0001bd2b) tabs_4_1_passive_pane_t1

0x47b7,	// (0x00013b39) list_highlight_pane_cp2

0xdbf2,	// (0x0001cf74) list_set_pane_ParamLimits

0xdbf2,	// (0x0001cf74) list_set_pane

0xdc8c,	// (0x0001d00e) main_pane_set_t1_ParamLimits

0xdc8c,	// (0x0001d00e) main_pane_set_t1

0xdcac,	// (0x0001d02e) main_pane_set_t2_ParamLimits

0xdcac,	// (0x0001d02e) main_pane_set_t2

0xdcc0,	// (0x0001d042) main_pane_set_t3_ParamLimits

0xdcc0,	// (0x0001d042) main_pane_set_t3

0xdcd2,	// (0x0001d054) main_pane_set_t4_ParamLimits

0xdcd2,	// (0x0001d054) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001ecfe) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001ecfe) main_pane_set_t

0xdce4,	// (0x0001d066) setting_code_pane

0xdcee,	// (0x0001d070) setting_slider_graphic_pane

0xdcee,	// (0x0001d070) setting_slider_pane

0xdcee,	// (0x0001d070) setting_text_pane

0xdcee,	// (0x0001d070) setting_volume_pane

0x0598,	// (0x0000f91a) volume_set_pane

0x27c8,	// (0x00011b4a) bg_set_opt_pane_cp

0x05a0,	// (0x0000f922) setting_slider_pane_t1

0x05b9,	// (0x0000f93b) setting_slider_pane_t2

0x05d3,	// (0x0000f955) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001e8e0) setting_slider_pane_t

0x05eb,	// (0x0000f96d) slider_set_pane

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp2

0x280a,	// (0x00011b8c) setting_slider_graphic_pane_g1

0x0601,	// (0x0000f983) setting_slider_graphic_pane_t1

0x0611,	// (0x0000f993) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001e8e7) setting_slider_graphic_pane_t

0x0621,	// (0x0000f9a3) slider_set_pane_cp

0x26e8,	// (0x00011a6a) input_focus_pane_cp1

0x61cc,	// (0x0001554e) list_set_text_pane

0x26de,	// (0x00011a60) setting_text_pane_g1

0x26e8,	// (0x00011a6a) input_focus_pane_cp2

0x26de,	// (0x00011a60) setting_code_pane_g1

0x2813,	// (0x00011b95) setting_code_pane_t1

0x2821,	// (0x00011ba3) set_text_pane_t1_ParamLimits

0x2821,	// (0x00011ba3) set_text_pane_t1

0x36ef,	// (0x00012a71) set_opt_bg_pane_g1

0x36f7,	// (0x00012a79) set_opt_bg_pane_g2

0x61a6,	// (0x00015528) set_opt_bg_pane_g3

0x3707,	// (0x00012a89) set_opt_bg_pane_g4

0x370f,	// (0x00012a91) set_opt_bg_pane_g5

0x3717,	// (0x00012a99) set_opt_bg_pane_g6

0x61b0,	// (0x00015532) set_opt_bg_pane_g7

0x61b8,	// (0x0001553a) set_opt_bg_pane_g8

0x61c2,	// (0x00015544) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001eceb) set_opt_bg_pane_g

0x6199,	// (0x0001551b) slider_set_pane_g1

0x1565,	// (0x000108e7) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001ecdc) slider_set_pane_g

0x1501,	// (0x00010883) volume_set_pane_g1

0x1509,	// (0x0001088b) volume_set_pane_g2

0x1511,	// (0x00010893) volume_set_pane_g3

0x1519,	// (0x0001089b) volume_set_pane_g4

0x1521,	// (0x000108a3) volume_set_pane_g5

0x1529,	// (0x000108ab) volume_set_pane_g6

0x1531,	// (0x000108b3) volume_set_pane_g7

0x1539,	// (0x000108bb) volume_set_pane_g8

0x1541,	// (0x000108c3) volume_set_pane_g9

0x1549,	// (0x000108cb) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001ecb4) volume_set_pane_g

0xc9bb,	// (0x0001bd3d) indicator_pane_ParamLimits

0xc9bb,	// (0x0001bd3d) indicator_pane

0xc9e3,	// (0x0001bd65) main_idle_pane_g2_ParamLimits

0xc9e3,	// (0x0001bd65) main_idle_pane_g2

0xca1b,	// (0x0001bd9d) main_pane_idle_g1_ParamLimits

0xca1b,	// (0x0001bd9d) main_pane_idle_g1

0x287c,	// (0x00011bfe) popup_clock_digital_analogue_window_ParamLimits

0x287c,	// (0x00011bfe) popup_clock_digital_analogue_window

0xca42,	// (0x0001bdc4) soft_indicator_pane_ParamLimits

0xca42,	// (0x0001bdc4) soft_indicator_pane

0xca5c,	// (0x0001bdde) wallpaper_pane_ParamLimits

0xca5c,	// (0x0001bdde) wallpaper_pane

0x26de,	// (0x00011a60) wallpaper_pane_g1

0xca6e,	// (0x0001bdf0) indicator_pane_g1_ParamLimits

0xca6e,	// (0x0001bdf0) indicator_pane_g1

0x6699,	// (0x00015a1b) navi_navi_icon_text_pane_srt_g1

0x28ce,	// (0x00011c50) soft_indicator_pane_t1

0x28e8,	// (0x00011c6a) aid_ps_area_pane

0xca84,	// (0x0001be06) aid_ps_clock_pane

0x2907,	// (0x00011c89) aid_ps_indicator_pane

0x2913,	// (0x00011c95) indicator_ps_pane_ParamLimits

0x2913,	// (0x00011c95) indicator_ps_pane

0x2922,	// (0x00011ca4) power_save_pane_g1_ParamLimits

0x2922,	// (0x00011ca4) power_save_pane_g1

0x292e,	// (0x00011cb0) power_save_pane_g2_ParamLimits

0x292e,	// (0x00011cb0) power_save_pane_g2

0x019f,	// (0x0000f521) aid_navinavi_width_pane

0x28e8,	// (0x00011c6a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001e8ec) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001e8ec) power_save_pane_g

0x293c,	// (0x00011cbe) power_save_pane_t1_ParamLimits

0x293c,	// (0x00011cbe) power_save_pane_t1

0xca84,	// (0x0001be06) aid_ps_clock_pane_ParamLimits

0x2907,	// (0x00011c89) aid_ps_indicator_pane_ParamLimits

0x294e,	// (0x00011cd0) power_save_pane_t4_ParamLimits

0x294e,	// (0x00011cd0) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001e8f1) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001e8f1) power_save_pane_t

0x2978,	// (0x00011cfa) power_save_t3_ParamLimits

0x2978,	// (0x00011cfa) power_save_t3

0x2963,	// (0x00011ce5) power_save_t2_ParamLimits

0x2963,	// (0x00011ce5) power_save_t2

0x298d,	// (0x00011d0f) indicator_ps_pane_g1

0xca92,	// (0x0001be14) ai_gene_pane_ParamLimits

0xca92,	// (0x0001be14) ai_gene_pane

0xcaa9,	// (0x0001be2b) ai_links_pane_ParamLimits

0xcaa9,	// (0x0001be2b) ai_links_pane

0xcac1,	// (0x0001be43) indicator_pane_cp1_ParamLimits

0xcac1,	// (0x0001be43) indicator_pane_cp1

0xcad0,	// (0x0001be52) main_pane_idle_g1_cp_ParamLimits

0xcad0,	// (0x0001be52) main_pane_idle_g1_cp

0x29c6,	// (0x00011d48) popup_ai_links_title_window

0xcae8,	// (0x0001be6a) soft_indicator_pane_cp1_ParamLimits

0xcae8,	// (0x0001be6a) soft_indicator_pane_cp1

0x5f60,	// (0x000152e2) ai_links_pane_g1

0x5f69,	// (0x000152eb) grid_ai_links_pane

0xdb25,	// (0x0001cea7) ai_gene_pane_1

0x5f4e,	// (0x000152d0) ai_gene_pane_2

0x5f57,	// (0x000152d9) list_highlight_pane_cp4

0xdb01,	// (0x0001ce83) cell_ai_link_pane_ParamLimits

0xdb01,	// (0x0001ce83) cell_ai_link_pane

0x5f1f,	// (0x000152a1) cell_ai_link_pane_g1

0x2bff,	// (0x00011f81) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001ec8f) cell_ai_link_pane_g

0x26e8,	// (0x00011a6a) grid_highlight_cp2

0x26e8,	// (0x00011a6a) bg_popup_sub_pane_cp1

0x29e9,	// (0x00011d6b) popup_ai_links_title_window_t1

0x5e6d,	// (0x000151ef) ai_gene_pane_1_g1_ParamLimits

0x5e6d,	// (0x000151ef) ai_gene_pane_1_g1

0x5e79,	// (0x000151fb) ai_gene_pane_1_g2_ParamLimits

0x5e79,	// (0x000151fb) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001ec85) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001ec85) ai_gene_pane_1_g

0x5e86,	// (0x00015208) ai_gene_pane_1_t1_ParamLimits

0x5e86,	// (0x00015208) ai_gene_pane_1_t1

0x5eba,	// (0x0001523c) grid_ai_soft_ind_pane

0x5e58,	// (0x000151da) ai_gene_pane_2_t1_ParamLimits

0x5e58,	// (0x000151da) ai_gene_pane_2_t1

0xcafc,	// (0x0001be7e) main_pane_empty_t1_ParamLimits

0xcafc,	// (0x0001be7e) main_pane_empty_t1

0xcb14,	// (0x0001be96) main_pane_empty_t2_ParamLimits

0xcb14,	// (0x0001be96) main_pane_empty_t2

0xcb29,	// (0x0001beab) main_pane_empty_t3_ParamLimits

0xcb29,	// (0x0001beab) main_pane_empty_t3

0xcb3b,	// (0x0001bebd) main_pane_empty_t4_ParamLimits

0xcb3b,	// (0x0001bebd) main_pane_empty_t4

0xcb4d,	// (0x0001becf) main_pane_empty_t5_ParamLimits

0xcb4d,	// (0x0001becf) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001e8f6) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001e8f6) main_pane_empty_t

0x37ec,	// (0x00012b6e) bg_popup_window_pane_ParamLimits

0x37ec,	// (0x00012b6e) bg_popup_window_pane

0x5bc8,	// (0x00014f4a) find_popup_pane_cp2_ParamLimits

0x5bc8,	// (0x00014f4a) find_popup_pane_cp2

0x5bd4,	// (0x00014f56) heading_pane_ParamLimits

0x5bd4,	// (0x00014f56) heading_pane

0x26e8,	// (0x00011a6a) bg_popup_sub_pane

0xda82,	// (0x0001ce04) bg_popup_window_pane_g1_ParamLimits

0xda82,	// (0x0001ce04) bg_popup_window_pane_g1

0xda91,	// (0x0001ce13) bg_popup_window_pane_g2_ParamLimits

0xda91,	// (0x0001ce13) bg_popup_window_pane_g2

0xda9d,	// (0x0001ce1f) bg_popup_window_pane_g3_ParamLimits

0xda9d,	// (0x0001ce1f) bg_popup_window_pane_g3

0xdaa9,	// (0x0001ce2b) bg_popup_window_pane_g4_ParamLimits

0xdaa9,	// (0x0001ce2b) bg_popup_window_pane_g4

0xdab8,	// (0x0001ce3a) bg_popup_window_pane_g5_ParamLimits

0xdab8,	// (0x0001ce3a) bg_popup_window_pane_g5

0xdac8,	// (0x0001ce4a) bg_popup_window_pane_g6_ParamLimits

0xdac8,	// (0x0001ce4a) bg_popup_window_pane_g6

0xdad4,	// (0x0001ce56) bg_popup_window_pane_g7_ParamLimits

0xdad4,	// (0x0001ce56) bg_popup_window_pane_g7

0xdae3,	// (0x0001ce65) bg_popup_window_pane_g8_ParamLimits

0xdae3,	// (0x0001ce65) bg_popup_window_pane_g8

0xdaf2,	// (0x0001ce74) bg_popup_window_pane_g9_ParamLimits

0xdaf2,	// (0x0001ce74) bg_popup_window_pane_g9

0x5bae,	// (0x00014f30) bg_popup_window_pane_g10_ParamLimits

0x5bae,	// (0x00014f30) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ec4d) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ec4d) bg_popup_window_pane_g

0x5ad7,	// (0x00014e59) bg_popup_heading_pane_ParamLimits

0x5ad7,	// (0x00014e59) bg_popup_heading_pane

0x15ed,	// (0x0001096f) tabs_4_passive_pane_cp_srt_ParamLimits

0x15ed,	// (0x0001096f) tabs_4_passive_pane_cp_srt

0x15ff,	// (0x00010981) tabs_4_passive_pane_srt_ParamLimits

0x5aeb,	// (0x00014e6d) heading_pane_g2

0x15ff,	// (0x00010981) tabs_4_passive_pane_srt

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp3_srt

0x5af3,	// (0x00014e75) heading_pane_t1_ParamLimits

0x5af3,	// (0x00014e75) heading_pane_t1

0x5b0a,	// (0x00014e8c) heading_pane_t2_ParamLimits

0x5b0a,	// (0x00014e8c) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ec48) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ec48) heading_pane_t

0x55f8,	// (0x0001497a) bg_popup_heading_pane_g1

0x56b3,	// (0x00014a35) bg_popup_heading_pane_g2

0x56bd,	// (0x00014a3f) bg_popup_heading_pane_g3

0x56c7,	// (0x00014a49) bg_popup_heading_pane_g4

0x56d1,	// (0x00014a53) bg_popup_heading_pane_g5

0x56db,	// (0x00014a5d) bg_popup_heading_pane_g6

0x56e3,	// (0x00014a65) bg_popup_heading_pane_g7

0x56eb,	// (0x00014a6d) bg_popup_heading_pane_g8

0x56f5,	// (0x00014a77) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ec04) bg_popup_heading_pane_g

0x4cf7,	// (0x00014079) bg_popup_sub_pane_g1

0x4d07,	// (0x00014089) bg_popup_sub_pane_g2

0x4cff,	// (0x00014081) bg_popup_sub_pane_g3

0x4d17,	// (0x00014099) bg_popup_sub_pane_g4

0x4d0f,	// (0x00014091) bg_popup_sub_pane_g5

0x4d1f,	// (0x000140a1) bg_popup_sub_pane_g6

0x4d27,	// (0x000140a9) bg_popup_sub_pane_g7

0x4d37,	// (0x000140b9) bg_popup_sub_pane_g8

0x4d2f,	// (0x000140b1) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001ebde) bg_popup_sub_pane_g

0x2a5d,	// (0x00011ddf) bg_popup_window_pane_cp5_ParamLimits

0x2a5d,	// (0x00011ddf) bg_popup_window_pane_cp5

0x2a79,	// (0x00011dfb) popup_note_window_g1_ParamLimits

0x2a79,	// (0x00011dfb) popup_note_window_g1

0x2a85,	// (0x00011e07) popup_note_window_t1_ParamLimits

0x2a85,	// (0x00011e07) popup_note_window_t1

0x2a9b,	// (0x00011e1d) popup_note_window_t2_ParamLimits

0x2a9b,	// (0x00011e1d) popup_note_window_t2

0x2ab1,	// (0x00011e33) popup_note_window_t3_ParamLimits

0x2ab1,	// (0x00011e33) popup_note_window_t3

0x2ac7,	// (0x00011e49) popup_note_window_t4_ParamLimits

0x2ac7,	// (0x00011e49) popup_note_window_t4

0x2aef,	// (0x00011e71) popup_note_window_t5_ParamLimits

0x2aef,	// (0x00011e71) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001e901) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001e901) popup_note_window_t

0x2b13,	// (0x00011e95) bg_popup_window_pane_cp6_ParamLimits

0x2b13,	// (0x00011e95) bg_popup_window_pane_cp6

0x5574,	// (0x000148f6) popup_note_image_window_g1_ParamLimits

0x5574,	// (0x000148f6) popup_note_image_window_g1

0x5580,	// (0x00014902) popup_note_image_window_g2_ParamLimits

0x5580,	// (0x00014902) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001ebd2) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001ebd2) popup_note_image_window_g

0x5599,	// (0x0001491b) popup_note_image_window_t1_ParamLimits

0x5599,	// (0x0001491b) popup_note_image_window_t1

0x55b2,	// (0x00014934) popup_note_image_window_t2_ParamLimits

0x55b2,	// (0x00014934) popup_note_image_window_t2

0x55cb,	// (0x0001494d) popup_note_image_window_t3_ParamLimits

0x55cb,	// (0x0001494d) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001ebd7) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001ebd7) popup_note_image_window_t

0x5435,	// (0x000147b7) bg_popup_window_pane_cp7_ParamLimits

0x5435,	// (0x000147b7) bg_popup_window_pane_cp7

0x5465,	// (0x000147e7) popup_note_wait_window_g1_ParamLimits

0x5465,	// (0x000147e7) popup_note_wait_window_g1

0x5471,	// (0x000147f3) popup_note_wait_window_g2_ParamLimits

0x5471,	// (0x000147f3) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001ebc0) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001ebc0) popup_note_wait_window_g

0x5489,	// (0x0001480b) popup_note_wait_window_t1_ParamLimits

0x5489,	// (0x0001480b) popup_note_wait_window_t1

0x54b0,	// (0x00014832) popup_note_wait_window_t2_ParamLimits

0x54b0,	// (0x00014832) popup_note_wait_window_t2

0x54cd,	// (0x0001484f) popup_note_wait_window_t3_ParamLimits

0x54cd,	// (0x0001484f) popup_note_wait_window_t3

0x54e0,	// (0x00014862) popup_note_wait_window_t4_ParamLimits

0x54e0,	// (0x00014862) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001ebc7) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001ebc7) popup_note_wait_window_t

0x5505,	// (0x00014887) wait_bar_pane_ParamLimits

0x5505,	// (0x00014887) wait_bar_pane

0x26e8,	// (0x00011a6a) wait_anim_pane

0x26e8,	// (0x00011a6a) wait_border_pane

0x26de,	// (0x00011a60) wait_anim_pane_g1

0x26de,	// (0x00011a60) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ea80) wait_anim_pane_g

0x53d9,	// (0x0001475b) wait_border_pane_g1

0x53e4,	// (0x00014766) wait_border_pane_g2

0x53ed,	// (0x0001476f) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001ebb9) wait_border_pane_g

0x5244,	// (0x000145c6) bg_popup_window_pane_cp16_ParamLimits

0x5244,	// (0x000145c6) bg_popup_window_pane_cp16

0x5344,	// (0x000146c6) indicator_popup_pane_cp4_ParamLimits

0x5344,	// (0x000146c6) indicator_popup_pane_cp4

0x5358,	// (0x000146da) popup_query_data_window_t1_ParamLimits

0x5358,	// (0x000146da) popup_query_data_window_t1

0x536a,	// (0x000146ec) popup_query_data_window_t2_ParamLimits

0x536a,	// (0x000146ec) popup_query_data_window_t2

0x5383,	// (0x00014705) popup_query_data_window_t3_ParamLimits

0x5383,	// (0x00014705) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001ebb2) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001ebb2) popup_query_data_window_t

0x539d,	// (0x0001471f) query_popup_data_pane_ParamLimits

0x539d,	// (0x0001471f) query_popup_data_pane

0x53b1,	// (0x00014733) query_popup_data_pane_cp1_ParamLimits

0x53b1,	// (0x00014733) query_popup_data_pane_cp1

0x5244,	// (0x000145c6) bg_popup_window_pane_cp10_ParamLimits

0x5244,	// (0x000145c6) bg_popup_window_pane_cp10

0x5276,	// (0x000145f8) indicator_popup_pane_ParamLimits

0x5276,	// (0x000145f8) indicator_popup_pane

0x5298,	// (0x0001461a) popup_query_code_window_t1_ParamLimits

0x5298,	// (0x0001461a) popup_query_code_window_t1

0x52b2,	// (0x00014634) popup_query_code_window_t2_ParamLimits

0x52b2,	// (0x00014634) popup_query_code_window_t2

0x52fb,	// (0x0001467d) popup_query_code_window_t3_ParamLimits

0x52fb,	// (0x0001467d) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001ebab) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001ebab) popup_query_code_window_t

0x532a,	// (0x000146ac) query_popup_pane_ParamLimits

0x532a,	// (0x000146ac) query_popup_pane

0x2b13,	// (0x00011e95) bg_popup_window_pane_cp15_ParamLimits

0x2b13,	// (0x00011e95) bg_popup_window_pane_cp15

0x2b31,	// (0x00011eb3) indicator_popup_pane_cp1_ParamLimits

0x2b31,	// (0x00011eb3) indicator_popup_pane_cp1

0x2b44,	// (0x00011ec6) indicator_popup_pane_cp2_ParamLimits

0x2b44,	// (0x00011ec6) indicator_popup_pane_cp2

0x2b57,	// (0x00011ed9) popup_query_data_code_window_g1_ParamLimits

0x2b57,	// (0x00011ed9) popup_query_data_code_window_g1

0x2b6a,	// (0x00011eec) popup_query_data_code_window_t1_ParamLimits

0x2b6a,	// (0x00011eec) popup_query_data_code_window_t1

0x2b7c,	// (0x00011efe) popup_query_data_code_window_t2_ParamLimits

0x2b7c,	// (0x00011efe) popup_query_data_code_window_t2

0x2b8e,	// (0x00011f10) popup_query_data_code_window_t3_ParamLimits

0x2b8e,	// (0x00011f10) popup_query_data_code_window_t3

0x2ba4,	// (0x00011f26) popup_query_data_code_window_t4_ParamLimits

0x2ba4,	// (0x00011f26) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001e90c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001e90c) popup_query_data_code_window_t

0x12ae,	// (0x00010630) list_single_midp_graphic_pane_g3

0x2bbc,	// (0x00011f3e) query_popup_data_pane_cp2_ParamLimits

0x2bcf,	// (0x00011f51) query_popup_pane_cp2_ParamLimits

0x2bcf,	// (0x00011f51) query_popup_pane_cp2

0x26e8,	// (0x00011a6a) bg_popup_window_pane_cp11

0x523c,	// (0x000145be) heading_pane_cp5

0x2cba,	// (0x0001203c) listscroll_popup_info_pane

0x26e8,	// (0x00011a6a) input_focus_pane_cp3

0x2be2,	// (0x00011f64) query_popup_pane_t1

0x2bf0,	// (0x00011f72) list_popup_info_pane_ParamLimits

0x2bf0,	// (0x00011f72) list_popup_info_pane

0x2bff,	// (0x00011f81) listscroll_popup_info_pane_g1

0x2c07,	// (0x00011f89) scroll_pane_cp7

0x2c11,	// (0x00011f93) popup_info_list_pane_t1_ParamLimits

0x2c11,	// (0x00011f93) popup_info_list_pane_t1

0x2c2b,	// (0x00011fad) popup_info_list_pane_t2_ParamLimits

0x2c2b,	// (0x00011fad) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001e915) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001e915) popup_info_list_pane_t

0x26e8,	// (0x00011a6a) bg_popup_window_pane_cp12

0x66b3,	// (0x00015a35) find_popup_pane

0x27c8,	// (0x00011b4a) bg_popup_window_pane_cp3

0x2c45,	// (0x00011fc7) heading_pane_cp3

0x2c51,	// (0x00011fd3) listscroll_popup_graphic_pane

0x26e8,	// (0x00011a6a) bg_popup_window_pane_cp4

0xcbaf,	// (0x0001bf31) heading_pane_cp4

0x2cba,	// (0x0001203c) listscroll_popup_colour_pane

0x2cc2,	// (0x00012044) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2cc2,	// (0x00012044) cell_large_graphic_colour_none_popup_pane

0xcbb7,	// (0x0001bf39) grid_large_graphic_colour_popup_pane_ParamLimits

0xcbb7,	// (0x0001bf39) grid_large_graphic_colour_popup_pane

0x2d02,	// (0x00012084) listscroll_popup_colour_pane_g1_ParamLimits

0x2d02,	// (0x00012084) listscroll_popup_colour_pane_g1

0x2d19,	// (0x0001209b) listscroll_popup_colour_pane_g2_ParamLimits

0x2d19,	// (0x0001209b) listscroll_popup_colour_pane_g2

0x2d30,	// (0x000120b2) listscroll_popup_colour_pane_g3_ParamLimits

0x2d30,	// (0x000120b2) listscroll_popup_colour_pane_g3

0xcbdb,	// (0x0001bf5d) listscroll_popup_colour_pane_g4_ParamLimits

0xcbdb,	// (0x0001bf5d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001e91a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001e91a) listscroll_popup_colour_pane_g

0x2d54,	// (0x000120d6) scroll_pane_cp6_ParamLimits

0x2d54,	// (0x000120d6) scroll_pane_cp6

0xcbeb,	// (0x0001bf6d) cell_large_graphic_colour_popup_pane_ParamLimits

0xcbeb,	// (0x0001bf6d) cell_large_graphic_colour_popup_pane

0x2d85,	// (0x00012107) cell_large_graphic_colour_none_popup_pane_t1

0x26e8,	// (0x00011a6a) grid_highlight_pane_cp5

0x2d94,	// (0x00012116) cell_large_graphic_colour_popup_pane_g1

0x2d9c,	// (0x0001211e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001e923) cell_large_graphic_colour_popup_pane_g

0x2da4,	// (0x00012126) cell_large_graphic_colour_popup_pane_g2_copy1

0x2dad,	// (0x0001212f) grid_highlight_pane_cp4

0x2db5,	// (0x00012137) bg_popup_window_pane_cp8_ParamLimits

0x2db5,	// (0x00012137) bg_popup_window_pane_cp8

0x2dd0,	// (0x00012152) popup_snote_single_text_window_g1_ParamLimits

0x2dd0,	// (0x00012152) popup_snote_single_text_window_g1

0x2de2,	// (0x00012164) popup_snote_single_text_window_t1_ParamLimits

0x2de2,	// (0x00012164) popup_snote_single_text_window_t1

0x2df5,	// (0x00012177) popup_snote_single_text_window_t2_ParamLimits

0x2df5,	// (0x00012177) popup_snote_single_text_window_t2

0x2e08,	// (0x0001218a) popup_snote_single_text_window_t3_ParamLimits

0x2e08,	// (0x0001218a) popup_snote_single_text_window_t3

0x2e41,	// (0x000121c3) popup_snote_single_text_window_t4_ParamLimits

0x2e41,	// (0x000121c3) popup_snote_single_text_window_t4

0x2e75,	// (0x000121f7) popup_snote_single_text_window_t5_ParamLimits

0x2e75,	// (0x000121f7) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001e928) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001e928) popup_snote_single_text_window_t

0x2ea4,	// (0x00012226) bg_popup_window_pane_cp9_ParamLimits

0x2ea4,	// (0x00012226) bg_popup_window_pane_cp9

0x2dd0,	// (0x00012152) popup_snote_single_graphic_window_g1_ParamLimits

0x2dd0,	// (0x00012152) popup_snote_single_graphic_window_g1

0x2eb2,	// (0x00012234) popup_snote_single_graphic_window_g2_ParamLimits

0x2eb2,	// (0x00012234) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001e933) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001e933) popup_snote_single_graphic_window_g

0x2ebe,	// (0x00012240) popup_snote_single_graphic_window_t1_ParamLimits

0x2ebe,	// (0x00012240) popup_snote_single_graphic_window_t1

0x2ed1,	// (0x00012253) popup_snote_single_graphic_window_t2_ParamLimits

0x2ed1,	// (0x00012253) popup_snote_single_graphic_window_t2

0x2ee4,	// (0x00012266) popup_snote_single_graphic_window_t3_ParamLimits

0x2ee4,	// (0x00012266) popup_snote_single_graphic_window_t3

0x2f1d,	// (0x0001229f) popup_snote_single_graphic_window_t4_ParamLimits

0x2f1d,	// (0x0001229f) popup_snote_single_graphic_window_t4

0x2f51,	// (0x000122d3) popup_snote_single_graphic_window_t5_ParamLimits

0x2f51,	// (0x000122d3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001e938) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001e938) popup_snote_single_graphic_window_t

0x65f5,	// (0x00015977) grid_graphic_popup_pane_ParamLimits

0x65f5,	// (0x00015977) grid_graphic_popup_pane

0x661f,	// (0x000159a1) listscroll_popup_graphic_pane_g1_ParamLimits

0x661f,	// (0x000159a1) listscroll_popup_graphic_pane_g1

0xde3b,	// (0x0001d1bd) listscroll_popup_graphic_pane_g2_ParamLimits

0xde3b,	// (0x0001d1bd) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001ed28) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001ed28) listscroll_popup_graphic_pane_g

0x6647,	// (0x000159c9) scroll_pane_cp5

0xdde0,	// (0x0001d162) cell_graphic_popup_pane_ParamLimits

0xdde0,	// (0x0001d162) cell_graphic_popup_pane

0x6575,	// (0x000158f7) cell_graphic_popup_pane_g1

0x657d,	// (0x000158ff) cell_graphic_popup_pane_g2

0x2da4,	// (0x00012126) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001ed21) cell_graphic_popup_pane_g

0x6586,	// (0x00015908) cell_graphic_popup_pane_t2

0x2dad,	// (0x0001212f) grid_highlight_pane_cp3

0x2f92,	// (0x00012314) list_gen_pane_ParamLimits

0x2f92,	// (0x00012314) list_gen_pane

0x2fc4,	// (0x00012346) scroll_pane

0xdd97,	// (0x0001d119) bg_list_pane_g1_ParamLimits

0xdd97,	// (0x0001d119) bg_list_pane_g1

0x64ea,	// (0x0001586c) bg_list_pane_g2_ParamLimits

0x64ea,	// (0x0001586c) bg_list_pane_g2

0x64ff,	// (0x00015881) bg_list_pane_g3_ParamLimits

0x64ff,	// (0x00015881) bg_list_pane_g3

0x6513,	// (0x00015895) bg_list_pane_g4_ParamLimits

0x6513,	// (0x00015895) bg_list_pane_g4

0xddb4,	// (0x0001d136) bg_list_pane_g5_ParamLimits

0xddb4,	// (0x0001d136) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001ed16) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001ed16) bg_list_pane_g

0xdd3d,	// (0x0001d0bf) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double2_graphic_large_graphic_pane

0xdd3d,	// (0x0001d0bf) list_double2_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double2_graphic_pane

0xdd3d,	// (0x0001d0bf) list_double2_large_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double2_large_graphic_pane

0xdd3d,	// (0x0001d0bf) list_double2_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double2_pane

0xdd3d,	// (0x0001d0bf) list_double_graphic_heading_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_graphic_heading_pane

0xdd3d,	// (0x0001d0bf) list_double_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_graphic_pane

0xdd3d,	// (0x0001d0bf) list_double_heading_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_heading_pane

0xdd3d,	// (0x0001d0bf) list_double_large_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_large_graphic_pane

0xdd3d,	// (0x0001d0bf) list_double_number_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_number_pane

0xdd3d,	// (0x0001d0bf) list_double_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_pane

0xdd3d,	// (0x0001d0bf) list_double_time_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_double_time_pane

0xdd3d,	// (0x0001d0bf) list_setting_number_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_setting_number_pane

0xdd3d,	// (0x0001d0bf) list_setting_pane_ParamLimits

0xdd3d,	// (0x0001d0bf) list_setting_pane

0xdd4f,	// (0x0001d0d1) list_single_2graphic_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_2graphic_pane

0xdd4f,	// (0x0001d0d1) list_single_graphic_heading_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_graphic_heading_pane

0xdd4f,	// (0x0001d0d1) list_single_graphic_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_graphic_pane

0xdd4f,	// (0x0001d0d1) list_single_heading_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_heading_pane

0xdd4f,	// (0x0001d0d1) list_single_large_graphic_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_large_graphic_pane

0xdd4f,	// (0x0001d0d1) list_single_number_heading_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_number_heading_pane

0xdd4f,	// (0x0001d0d1) list_single_number_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_number_pane

0xdd4f,	// (0x0001d0d1) list_single_pane_ParamLimits

0xdd4f,	// (0x0001d0d1) list_single_pane

0x26e8,	// (0x00011a6a) list_highlight_pane_cp1

0x439e,	// (0x00013720) list_single_pane_g1_ParamLimits

0x439e,	// (0x00013720) list_single_pane_g1

0x4c79,	// (0x00013ffb) list_single_pane_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_pane_g

0x6cd0,	// (0x00016052) list_single_pane_t1_ParamLimits

0x6cd0,	// (0x00016052) list_single_pane_t1

0x439e,	// (0x00013720) list_single_number_pane_g1_ParamLimits

0x439e,	// (0x00013720) list_single_number_pane_g1

0x4c79,	// (0x00013ffb) list_single_number_pane_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_number_pane_g

0x4c85,	// (0x00014007) list_single_number_pane_t1_ParamLimits

0x4c85,	// (0x00014007) list_single_number_pane_t1

0xdb8e,	// (0x0001cf10) list_single_number_pane_t2_ParamLimits

0xdb8e,	// (0x0001cf10) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001ecd7) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001ecd7) list_single_number_pane_t

0xcc14,	// (0x0001bf96) list_single_graphic_pane_g1_ParamLimits

0xcc14,	// (0x0001bf96) list_single_graphic_pane_g1

0x439e,	// (0x00013720) list_single_graphic_pane_g2_ParamLimits

0x439e,	// (0x00013720) list_single_graphic_pane_g2

0x4c79,	// (0x00013ffb) list_single_graphic_pane_g3_ParamLimits

0x4c79,	// (0x00013ffb) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001e943) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001e943) list_single_graphic_pane_g

0xcc20,	// (0x0001bfa2) list_single_graphic_pane_t1_ParamLimits

0xcc20,	// (0x0001bfa2) list_single_graphic_pane_t1

0x439e,	// (0x00013720) list_single_heading_pane_g1_ParamLimits

0x439e,	// (0x00013720) list_single_heading_pane_g1

0x4c79,	// (0x00013ffb) list_single_heading_pane_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_heading_pane_g

0xcc36,	// (0x0001bfb8) list_single_heading_pane_t1_ParamLimits

0xcc36,	// (0x0001bfb8) list_single_heading_pane_t1

0xcc4c,	// (0x0001bfce) list_single_heading_pane_t2_ParamLimits

0xcc4c,	// (0x0001bfce) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001e94f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001e94f) list_single_heading_pane_t

0x439e,	// (0x00013720) list_single_number_heading_pane_g1_ParamLimits

0x439e,	// (0x00013720) list_single_number_heading_pane_g1

0x4c79,	// (0x00013ffb) list_single_number_heading_pane_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_number_heading_pane_g

0xcc36,	// (0x0001bfb8) list_single_number_heading_pane_t1_ParamLimits

0xcc36,	// (0x0001bfb8) list_single_number_heading_pane_t1

0x6c84,	// (0x00016006) list_single_number_heading_pane_t2_ParamLimits

0x6c84,	// (0x00016006) list_single_number_heading_pane_t2

0x6c96,	// (0x00016018) list_single_number_heading_pane_t3_ParamLimits

0x6c96,	// (0x00016018) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001e954) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001e954) list_single_number_heading_pane_t

0x4c6d,	// (0x00013fef) list_single_graphic_heading_pane_g1_ParamLimits

0x4c6d,	// (0x00013fef) list_single_graphic_heading_pane_g1

0xcc5e,	// (0x0001bfe0) list_single_graphic_heading_pane_g4_ParamLimits

0xcc5e,	// (0x0001bfe0) list_single_graphic_heading_pane_g4

0x4c79,	// (0x00013ffb) list_single_graphic_heading_pane_g5_ParamLimits

0x4c79,	// (0x00013ffb) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001e95b) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001e95b) list_single_graphic_heading_pane_g

0xcc36,	// (0x0001bfb8) list_single_graphic_heading_pane_t1_ParamLimits

0xcc36,	// (0x0001bfb8) list_single_graphic_heading_pane_t1

0xcc6f,	// (0x0001bff1) list_single_graphic_heading_pane_t2_ParamLimits

0xcc6f,	// (0x0001bff1) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001e962) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001e962) list_single_graphic_heading_pane_t

0x6ce6,	// (0x00016068) list_single_large_graphic_pane_g1_ParamLimits

0x6ce6,	// (0x00016068) list_single_large_graphic_pane_g1

0x439e,	// (0x00013720) list_single_large_graphic_pane_g2_ParamLimits

0x439e,	// (0x00013720) list_single_large_graphic_pane_g2

0x4c79,	// (0x00013ffb) list_single_large_graphic_pane_g3_ParamLimits

0x4c79,	// (0x00013ffb) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001e967) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001e967) list_single_large_graphic_pane_g

0x53e4,	// (0x00014766) wait_border_pane_g2_copy1

0xcc81,	// (0x0001c003) list_single_large_graphic_pane_g4_cp2

0x6cf2,	// (0x00016074) list_single_large_graphic_pane_t1_ParamLimits

0x6cf2,	// (0x00016074) list_single_large_graphic_pane_t1

0x5662,	// (0x000149e4) list_double_pane_g1_ParamLimits

0x5662,	// (0x000149e4) list_double_pane_g1

0xcc89,	// (0x0001c00b) list_double_pane_g2_ParamLimits

0xcc89,	// (0x0001c00b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001e96e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001e96e) list_double_pane_g

0x8594,	// (0x00017916) list_double_pane_t1_ParamLimits

0x8594,	// (0x00017916) list_double_pane_t1

0xcc95,	// (0x0001c017) list_double_pane_t2_ParamLimits

0xcc95,	// (0x0001c017) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001e973) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001e973) list_double_pane_t

0xcca7,	// (0x0001c029) list_double2_pane_g1_ParamLimits

0xcca7,	// (0x0001c029) list_double2_pane_g1

0xccb8,	// (0x0001c03a) list_double2_pane_g2_ParamLimits

0xccb8,	// (0x0001c03a) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001e978) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001e978) list_double2_pane_g

0xccc4,	// (0x0001c046) list_double2_pane_t1_ParamLimits

0xccc4,	// (0x0001c046) list_double2_pane_t1

0xccda,	// (0x0001c05c) list_double2_pane_t2_ParamLimits

0xccda,	// (0x0001c05c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001e97d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001e97d) list_double2_pane_t

0x5662,	// (0x000149e4) list_double_number_pane_g1_ParamLimits

0x5662,	// (0x000149e4) list_double_number_pane_g1

0xcc89,	// (0x0001c00b) list_double_number_pane_g2_ParamLimits

0xcc89,	// (0x0001c00b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001e96e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001e96e) list_double_number_pane_g

0xccec,	// (0x0001c06e) list_double_number_pane_t1_ParamLimits

0xccec,	// (0x0001c06e) list_double_number_pane_t1

0xccfe,	// (0x0001c080) list_double_number_pane_t2_ParamLimits

0xccfe,	// (0x0001c080) list_double_number_pane_t2

0xcd14,	// (0x0001c096) list_double_number_pane_t3_ParamLimits

0xcd14,	// (0x0001c096) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001e982) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001e982) list_double_number_pane_t

0xcd26,	// (0x0001c0a8) list_double_graphic_pane_g1_ParamLimits

0xcd26,	// (0x0001c0a8) list_double_graphic_pane_g1

0xcd32,	// (0x0001c0b4) list_double_graphic_pane_g2_ParamLimits

0xcd32,	// (0x0001c0b4) list_double_graphic_pane_g2

0xcd41,	// (0x0001c0c3) list_double_graphic_pane_g3_ParamLimits

0xcd41,	// (0x0001c0c3) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001e989) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001e989) list_double_graphic_pane_g

0xcd59,	// (0x0001c0db) list_double_graphic_pane_t1_ParamLimits

0xcd59,	// (0x0001c0db) list_double_graphic_pane_t1

0xcd6f,	// (0x0001c0f1) list_double_graphic_pane_t2_ParamLimits

0xcd6f,	// (0x0001c0f1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001e992) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001e992) list_double_graphic_pane_t

0xcd81,	// (0x0001c103) list_double2_graphic_pane_g1_ParamLimits

0xcd81,	// (0x0001c103) list_double2_graphic_pane_g1

0x4289,	// (0x0001360b) list_double2_graphic_pane_g2_ParamLimits

0x4289,	// (0x0001360b) list_double2_graphic_pane_g2

0xccb8,	// (0x0001c03a) list_double2_graphic_pane_g3_ParamLimits

0xccb8,	// (0x0001c03a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001e997) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001e997) list_double2_graphic_pane_g

0xcd8d,	// (0x0001c10f) list_double2_graphic_pane_t1_ParamLimits

0xcd8d,	// (0x0001c10f) list_double2_graphic_pane_t1

0xcda3,	// (0x0001c125) list_double2_graphic_pane_t2_ParamLimits

0xcda3,	// (0x0001c125) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001e99e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001e99e) list_double2_graphic_pane_t

0xcdb5,	// (0x0001c137) list_double_large_graphic_pane_g1_ParamLimits

0xcdb5,	// (0x0001c137) list_double_large_graphic_pane_g1

0xcdd4,	// (0x0001c156) list_double_large_graphic_pane_g2_ParamLimits

0xcdd4,	// (0x0001c156) list_double_large_graphic_pane_g2

0xcc89,	// (0x0001c00b) list_double_large_graphic_pane_g3_ParamLimits

0xcc89,	// (0x0001c00b) list_double_large_graphic_pane_g3

0xcde5,	// (0x0001c167) list_double_large_graphic_pane_g4_ParamLimits

0xcde5,	// (0x0001c167) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001e9a3) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001e9a3) list_double_large_graphic_pane_g

0xcdf7,	// (0x0001c179) list_double_large_graphic_pane_t1_ParamLimits

0xcdf7,	// (0x0001c179) list_double_large_graphic_pane_t1

0xce10,	// (0x0001c192) list_double_large_graphic_pane_t2_ParamLimits

0xce10,	// (0x0001c192) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e9ae) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e9ae) list_double_large_graphic_pane_t

0xce22,	// (0x0001c1a4) list_double2_large_graphic_pane_g1_ParamLimits

0xce22,	// (0x0001c1a4) list_double2_large_graphic_pane_g1

0xcca7,	// (0x0001c029) list_double2_large_graphic_pane_g2_ParamLimits

0xcca7,	// (0x0001c029) list_double2_large_graphic_pane_g2

0xccb8,	// (0x0001c03a) list_double2_large_graphic_pane_g3_ParamLimits

0xccb8,	// (0x0001c03a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e9b3) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e9b3) list_double2_large_graphic_pane_g

0xce2e,	// (0x0001c1b0) list_double2_large_graphic_pane_t1_ParamLimits

0xce2e,	// (0x0001c1b0) list_double2_large_graphic_pane_t1

0xce44,	// (0x0001c1c6) list_double2_large_graphic_pane_t2_ParamLimits

0xce44,	// (0x0001c1c6) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e9ba) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e9ba) list_double2_large_graphic_pane_t

0xce56,	// (0x0001c1d8) list_double_heading_pane_g1_ParamLimits

0xce56,	// (0x0001c1d8) list_double_heading_pane_g1

0xce67,	// (0x0001c1e9) list_double_heading_pane_g2_ParamLimits

0xce67,	// (0x0001c1e9) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001e9bf) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001e9bf) list_double_heading_pane_g

0xce73,	// (0x0001c1f5) list_double_heading_pane_t1_ParamLimits

0xce73,	// (0x0001c1f5) list_double_heading_pane_t1

0xce89,	// (0x0001c20b) list_double_heading_pane_t2_ParamLimits

0xce89,	// (0x0001c20b) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001e9c4) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001e9c4) list_double_heading_pane_t

0x31ae,	// (0x00012530) list_double_graphic_heading_pane_g1_ParamLimits

0x31ae,	// (0x00012530) list_double_graphic_heading_pane_g1

0xce56,	// (0x0001c1d8) list_double_graphic_heading_pane_g2_ParamLimits

0xce56,	// (0x0001c1d8) list_double_graphic_heading_pane_g2

0xce67,	// (0x0001c1e9) list_double_graphic_heading_pane_g3_ParamLimits

0xce67,	// (0x0001c1e9) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001e9c9) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001e9c9) list_double_graphic_heading_pane_g

0xce9b,	// (0x0001c21d) list_double_graphic_heading_pane_t1_ParamLimits

0xce9b,	// (0x0001c21d) list_double_graphic_heading_pane_t1

0xceb1,	// (0x0001c233) list_double_graphic_heading_pane_t2_ParamLimits

0xceb1,	// (0x0001c233) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001e9d0) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001e9d0) list_double_graphic_heading_pane_t

0xcdd4,	// (0x0001c156) list_double_time_pane_g1_ParamLimits

0xcdd4,	// (0x0001c156) list_double_time_pane_g1

0xcc89,	// (0x0001c00b) list_double_time_pane_g2_ParamLimits

0xcc89,	// (0x0001c00b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001e9d5) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001e9d5) list_double_time_pane_g

0xcec3,	// (0x0001c245) list_double_time_pane_t1_ParamLimits

0xcec3,	// (0x0001c245) list_double_time_pane_t1

0xced9,	// (0x0001c25b) list_double_time_pane_t2_ParamLimits

0xced9,	// (0x0001c25b) list_double_time_pane_t2

0xceeb,	// (0x0001c26d) list_double_time_pane_t3_ParamLimits

0xceeb,	// (0x0001c26d) list_double_time_pane_t3

0xcefd,	// (0x0001c27f) list_double_time_pane_t4_ParamLimits

0xcefd,	// (0x0001c27f) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001e9da) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001e9da) list_double_time_pane_t

0x4289,	// (0x0001360b) list_setting_pane_g1_ParamLimits

0x4289,	// (0x0001360b) list_setting_pane_g1

0xccb8,	// (0x0001c03a) list_setting_pane_g2_ParamLimits

0xccb8,	// (0x0001c03a) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001e9e3) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001e9e3) list_setting_pane_g

0xcf0f,	// (0x0001c291) list_setting_pane_t1_ParamLimits

0xcf0f,	// (0x0001c291) list_setting_pane_t1

0xcf26,	// (0x0001c2a8) list_setting_pane_t2_ParamLimits

0xcf26,	// (0x0001c2a8) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001e9e8) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001e9e8) list_setting_pane_t

0xcf65,	// (0x0001c2e7) set_value_pane_cp_ParamLimits

0xcf65,	// (0x0001c2e7) set_value_pane_cp

0x4289,	// (0x0001360b) list_setting_number_pane_g1_ParamLimits

0x4289,	// (0x0001360b) list_setting_number_pane_g1

0xccb8,	// (0x0001c03a) list_setting_number_pane_g2_ParamLimits

0xccb8,	// (0x0001c03a) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001e9e3) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001e9e3) list_setting_number_pane_g

0xcf71,	// (0x0001c2f3) list_setting_number_pane_t1_ParamLimits

0xcf71,	// (0x0001c2f3) list_setting_number_pane_t1

0xcf85,	// (0x0001c307) list_setting_number_pane_t2_ParamLimits

0xcf85,	// (0x0001c307) list_setting_number_pane_t2

0xcf9c,	// (0x0001c31e) list_setting_number_pane_t3_ParamLimits

0xcf9c,	// (0x0001c31e) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001e9ef) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001e9ef) list_setting_number_pane_t

0xcf65,	// (0x0001c2e7) set_value_pane_ParamLimits

0xcf65,	// (0x0001c2e7) set_value_pane

0x3493,	// (0x00012815) bg_set_opt_pane_ParamLimits

0x3493,	// (0x00012815) bg_set_opt_pane

0x34b4,	// (0x00012836) set_value_pane_t1

0x34c2,	// (0x00012844) slider_set_pane_cp3

0x34cb,	// (0x0001284d) volume_small_pane_cp

0x34d4,	// (0x00012856) list_form_gen_pane

0x34dd,	// (0x0001285f) scroll_pane_cp8

0xcfdf,	// (0x0001c361) form_field_data_pane_ParamLimits

0xcfdf,	// (0x0001c361) form_field_data_pane

0xcff6,	// (0x0001c378) form_field_data_wide_pane_ParamLimits

0xcff6,	// (0x0001c378) form_field_data_wide_pane

0xd016,	// (0x0001c398) form_field_popup_pane_ParamLimits

0xd016,	// (0x0001c398) form_field_popup_pane

0xd02e,	// (0x0001c3b0) form_field_popup_wide_pane_ParamLimits

0xd02e,	// (0x0001c3b0) form_field_popup_wide_pane

0x3578,	// (0x000128fa) form_field_slider_pane_ParamLimits

0x3578,	// (0x000128fa) form_field_slider_pane

0x358b,	// (0x0001290d) form_field_slider_wide_pane_ParamLimits

0x358b,	// (0x0001290d) form_field_slider_wide_pane

0x359e,	// (0x00012920) data_form_pane

0xd04f,	// (0x0001c3d1) form_field_data_pane_t1

0x35cc,	// (0x0001294e) input_focus_pane

0x35da,	// (0x0001295c) data_form_wide_pane

0x3606,	// (0x00012988) form_field_data_wide_pane_t1

0x2dc2,	// (0x00012144) input_focus_pane_cp6

0xd069,	// (0x0001c3eb) form_field_popup_pane_t1

0x35cc,	// (0x0001294e) input_focus_pane_cp7

0x363d,	// (0x000129bf) list_form_pane

0x3651,	// (0x000129d3) form_field_popup_wide_pane_t1

0x35cc,	// (0x0001294e) input_focus_pane_cp8

0x3663,	// (0x000129e5) list_form_wide_pane

0xd08b,	// (0x0001c40d) form_field_slider_pane_t1_ParamLimits

0xd08b,	// (0x0001c40d) form_field_slider_pane_t1

0xd0a3,	// (0x0001c425) form_field_slider_pane_t2_ParamLimits

0xd0a3,	// (0x0001c425) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001e9ff) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001e9ff) form_field_slider_pane_t

0x2a5d,	// (0x00011ddf) input_focus_pane_cp9_ParamLimits

0x2a5d,	// (0x00011ddf) input_focus_pane_cp9

0xd0b8,	// (0x0001c43a) slider_cont_pane_ParamLimits

0xd0b8,	// (0x0001c43a) slider_cont_pane

0x36af,	// (0x00012a31) form_field_slider_wide_pane_t1_ParamLimits

0x36af,	// (0x00012a31) form_field_slider_wide_pane_t1

0x36c1,	// (0x00012a43) form_field_slider_wide_pane_t2_ParamLimits

0x36c1,	// (0x00012a43) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001ea04) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001ea04) form_field_slider_wide_pane_t

0x2a5d,	// (0x00011ddf) input_focus_pane_cp10_ParamLimits

0x2a5d,	// (0x00011ddf) input_focus_pane_cp10

0xd0cc,	// (0x0001c44e) slider_cont_pane_cp1_ParamLimits

0xd0cc,	// (0x0001c44e) slider_cont_pane_cp1

0xd0e0,	// (0x0001c462) slider_form_pane_cp

0x36ef,	// (0x00012a71) input_focus_pane_g1

0x36f7,	// (0x00012a79) input_focus_pane_g2

0x36ff,	// (0x00012a81) input_focus_pane_g3

0x3707,	// (0x00012a89) input_focus_pane_g4

0x370f,	// (0x00012a91) input_focus_pane_g5

0x3717,	// (0x00012a99) input_focus_pane_g6

0x371f,	// (0x00012aa1) input_focus_pane_g7

0x3727,	// (0x00012aa9) input_focus_pane_g8

0x372f,	// (0x00012ab1) input_focus_pane_g9

0x26de,	// (0x00011a60) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001ea09) input_focus_pane_g

0x53ed,	// (0x0001476f) wait_border_pane_g3_copy1

0xd0e8,	// (0x0001c46a) data_form_pane_t1

0x26de,	// (0x00011a60) wait_anim_pane_g1_copy1

0xdd21,	// (0x0001d0a3) data_form_wide_pane_t1

0xd102,	// (0x0001c484) list_form_graphic_pane_cp_ParamLimits

0xd102,	// (0x0001c484) list_form_graphic_pane_cp

0x6341,	// (0x000156c3) slider_form_pane_g1

0x634a,	// (0x000156cc) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001ed07) slider_form_pane_g

0xd102,	// (0x0001c484) list_form_graphic_pane_ParamLimits

0xd102,	// (0x0001c484) list_form_graphic_pane

0x3787,	// (0x00012b09) list_form_graphic_pane_g1

0x378f,	// (0x00012b11) list_form_graphic_pane_t1_ParamLimits

0x378f,	// (0x00012b11) list_form_graphic_pane_t1

0x27c8,	// (0x00011b4a) list_highlight_pane_cp5_ParamLimits

0x27c8,	// (0x00011b4a) list_highlight_pane_cp5

0xd114,	// (0x0001c496) find_pane_g1

0x37ad,	// (0x00012b2f) input_find_pane

0xd11d,	// (0x0001c49f) input_find_pane_g1_ParamLimits

0xd11d,	// (0x0001c49f) input_find_pane_g1

0xd129,	// (0x0001c4ab) input_find_pane_t1_ParamLimits

0xd129,	// (0x0001c4ab) input_find_pane_t1

0xd13e,	// (0x0001c4c0) input_find_pane_t2_ParamLimits

0xd13e,	// (0x0001c4c0) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001ea1e) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001ea1e) input_find_pane_t

0x37ec,	// (0x00012b6e) input_focus_pane_cp5_ParamLimits

0x37ec,	// (0x00012b6e) input_focus_pane_cp5

0x3806,	// (0x00012b88) bg_popup_window_pane_cp2_ParamLimits

0x3806,	// (0x00012b88) bg_popup_window_pane_cp2

0x3813,	// (0x00012b95) listscroll_menu_pane_ParamLimits

0x3813,	// (0x00012b95) listscroll_menu_pane

0xd15f,	// (0x0001c4e1) popup_submenu_window_ParamLimits

0xd15f,	// (0x0001c4e1) popup_submenu_window

0x384b,	// (0x00012bcd) find_popup_pane_g1

0x3853,	// (0x00012bd5) input_popup_find_pane_cp

0x37ec,	// (0x00012b6e) input_focus_pane_cp4_ParamLimits

0x37ec,	// (0x00012b6e) input_focus_pane_cp4

0x3869,	// (0x00012beb) input_popup_find_pane_t1_ParamLimits

0x3869,	// (0x00012beb) input_popup_find_pane_t1

0x26e8,	// (0x00011a6a) bg_popup_sub_pane_cp

0x3897,	// (0x00012c19) listscroll_popup_sub_pane

0x389f,	// (0x00012c21) list_submenu_pane_ParamLimits

0x389f,	// (0x00012c21) list_submenu_pane

0x38b0,	// (0x00012c32) scroll_pane_cp4

0x38b8,	// (0x00012c3a) list_single_popup_submenu_pane_ParamLimits

0x38b8,	// (0x00012c3a) list_single_popup_submenu_pane

0x38cc,	// (0x00012c4e) list_single_popup_submenu_pane_g1

0x38d4,	// (0x00012c56) list_single_popup_submenu_pane_t1_ParamLimits

0x38d4,	// (0x00012c56) list_single_popup_submenu_pane_t1

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp1_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp1

0x38e9,	// (0x00012c6b) tabs_2_active_pane_g1

0xd199,	// (0x0001c51b) tabs_2_active_pane_t1

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp1_ParamLimits

0x2a5d,	// (0x00011ddf) bg_passive_tab_pane_cp1

0x38e9,	// (0x00012c6b) tabs_2_passive_pane_g1

0xd199,	// (0x0001c51b) tabs_2_passive_pane_t1

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp4

0xd1ab,	// (0x0001c52d) tabs_2_long_active_pane_t1

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp4

0x12b6,	// (0x00010638) list_single_midp_graphic_pane_g4_ParamLimits

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp5

0xd1be,	// (0x0001c540) tabs_3_long_active_pane_t1

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp5

0x12b6,	// (0x00010638) list_single_midp_graphic_pane_g4

0x27c8,	// (0x00011b4a) bg_popup_window_pane_cp13_ParamLimits

0x27c8,	// (0x00011b4a) bg_popup_window_pane_cp13

0x394b,	// (0x00012ccd) listscroll_popup_fast_pane_ParamLimits

0x394b,	// (0x00012ccd) listscroll_popup_fast_pane

0x395a,	// (0x00012cdc) grid_popup_fast_pane_ParamLimits

0x395a,	// (0x00012cdc) grid_popup_fast_pane

0x396c,	// (0x00012cee) scroll_pane_cp9_ParamLimits

0x396c,	// (0x00012cee) scroll_pane_cp9

0x8263,	// (0x000175e5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8263,	// (0x000175e5) list_single_graphic_hl_pane_t1_cp2

0x3990,	// (0x00012d12) input_focus_pane_cp20_ParamLimits

0x3990,	// (0x00012d12) input_focus_pane_cp20

0x399e,	// (0x00012d20) query_popup_data_pane_t1_ParamLimits

0x399e,	// (0x00012d20) query_popup_data_pane_t1

0x39b1,	// (0x00012d33) query_popup_data_pane_t2_ParamLimits

0x39b1,	// (0x00012d33) query_popup_data_pane_t2

0x39f7,	// (0x00012d79) query_popup_data_pane_t3_ParamLimits

0x39f7,	// (0x00012d79) query_popup_data_pane_t3

0x3a38,	// (0x00012dba) query_popup_data_pane_t4_ParamLimits

0x3a38,	// (0x00012dba) query_popup_data_pane_t4

0x3a74,	// (0x00012df6) query_popup_data_pane_t5_ParamLimits

0x3a74,	// (0x00012df6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001ea23) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001ea23) query_popup_data_pane_t

0x36ef,	// (0x00012a71) bg_set_opt_pane_g1

0x36f7,	// (0x00012a79) bg_set_opt_pane_g2

0x36ff,	// (0x00012a81) bg_set_opt_pane_g3

0x3707,	// (0x00012a89) bg_set_opt_pane_g4

0x370f,	// (0x00012a91) bg_set_opt_pane_g5

0x3717,	// (0x00012a99) bg_set_opt_pane_g6

0x371f,	// (0x00012aa1) bg_set_opt_pane_g7

0x3727,	// (0x00012aa9) bg_set_opt_pane_g8

0x372f,	// (0x00012ab1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001ea2e) bg_set_opt_pane_g

0x08c6,	// (0x0000fc48) control_top_pane_stacon_ParamLimits

0x08c6,	// (0x0000fc48) control_top_pane_stacon

0x0919,	// (0x0000fc9b) signal_pane_stacon_ParamLimits

0x0919,	// (0x0000fc9b) signal_pane_stacon

0x40f3,	// (0x00013475) stacon_top_pane_g1_ParamLimits

0x40f3,	// (0x00013475) stacon_top_pane_g1

0x093e,	// (0x0000fcc0) title_pane_stacon_ParamLimits

0x093e,	// (0x0000fcc0) title_pane_stacon

0x0968,	// (0x0000fcea) uni_indicator_pane_stacon_ParamLimits

0x0968,	// (0x0000fcea) uni_indicator_pane_stacon

0x097d,	// (0x0000fcff) battery_pane_stacon_ParamLimits

0x097d,	// (0x0000fcff) battery_pane_stacon

0x09c1,	// (0x0000fd43) control_bottom_pane_stacon_ParamLimits

0x09c1,	// (0x0000fd43) control_bottom_pane_stacon

0x09e4,	// (0x0000fd66) navi_pane_stacon_ParamLimits

0x09e4,	// (0x0000fd66) navi_pane_stacon

0x4115,	// (0x00013497) stacon_bottom_pane_g1_ParamLimits

0x4115,	// (0x00013497) stacon_bottom_pane_g1

0x0629,	// (0x0000f9ab) aid_levels_signal_lsc_ParamLimits

0x0629,	// (0x0000f9ab) aid_levels_signal_lsc

0x063f,	// (0x0000f9c1) signal_pane_stacon_g1_ParamLimits

0x063f,	// (0x0000f9c1) signal_pane_stacon_g1

0x0653,	// (0x0000f9d5) signal_pane_stacon_g2_ParamLimits

0x0653,	// (0x0000f9d5) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001ea41) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001ea41) signal_pane_stacon_g

0x0688,	// (0x0000fa0a) title_pane_stacon_t1_ParamLimits

0x0688,	// (0x0000fa0a) title_pane_stacon_t1

0x3ab8,	// (0x00012e3a) uni_indicator_pane_stacon_g1

0x3ac2,	// (0x00012e44) uni_indicator_pane_stacon_g2

0x3acc,	// (0x00012e4e) uni_indicator_pane_stacon_g3

0x3ad6,	// (0x00012e58) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001ea4d) uni_indicator_pane_stacon_g

0x06ad,	// (0x0000fa2f) control_top_pane_stacon_g1

0x06b5,	// (0x0000fa37) control_top_pane_stacon_t1_ParamLimits

0x06b5,	// (0x0000fa37) control_top_pane_stacon_t1

0x06ec,	// (0x0000fa6e) aid_levels_battery_lsc_ParamLimits

0x06ec,	// (0x0000fa6e) aid_levels_battery_lsc

0x0703,	// (0x0000fa85) battery_pane_stacon_g1_ParamLimits

0x0703,	// (0x0000fa85) battery_pane_stacon_g1

0x0716,	// (0x0000fa98) battery_pane_stacon_g2_ParamLimits

0x0716,	// (0x0000fa98) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001ea56) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001ea56) battery_pane_stacon_g

0x0754,	// (0x0000fad6) navi_icon_pane_stacon

0x0768,	// (0x0000faea) navi_navi_pane_stacon

0x0754,	// (0x0000fad6) navi_text_pane_stacon

0x06ad,	// (0x0000fa2f) control_bottom_pane_stacon_g1

0x077c,	// (0x0000fafe) control_bottom_pane_stacon_t1_ParamLimits

0x077c,	// (0x0000fafe) control_bottom_pane_stacon_t1

0xd1d0,	// (0x0001c552) grid_app_pane_ParamLimits

0xd1d0,	// (0x0001c552) grid_app_pane

0xd208,	// (0x0001c58a) scroll_pane_cp15_ParamLimits

0xd208,	// (0x0001c58a) scroll_pane_cp15

0xd21d,	// (0x0001c59f) cell_app_pane_ParamLimits

0xd21d,	// (0x0001c59f) cell_app_pane

0xd262,	// (0x0001c5e4) cell_app_pane_g1_ParamLimits

0xd262,	// (0x0001c5e4) cell_app_pane_g1

0x3b79,	// (0x00012efb) cell_app_pane_g2_ParamLimits

0x3b79,	// (0x00012efb) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001ea5b) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001ea5b) cell_app_pane_g

0xd286,	// (0x0001c608) cell_app_pane_t1_ParamLimits

0xd286,	// (0x0001c608) cell_app_pane_t1

0x3b9c,	// (0x00012f1e) grid_highlight_pane_ParamLimits

0x3b9c,	// (0x00012f1e) grid_highlight_pane

0x36ef,	// (0x00012a71) cell_highlight_pane_g1

0x36f7,	// (0x00012a79) cell_highlight_pane_g2

0x36ff,	// (0x00012a81) cell_highlight_pane_g3

0x3707,	// (0x00012a89) cell_highlight_pane_g4

0x370f,	// (0x00012a91) cell_highlight_pane_g5

0x3717,	// (0x00012a99) cell_highlight_pane_g6

0x371f,	// (0x00012aa1) cell_highlight_pane_g7

0x3727,	// (0x00012aa9) cell_highlight_pane_g8

0x372f,	// (0x00012ab1) cell_highlight_pane_g9

0x26de,	// (0x00011a60) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001ea09) cell_highlight_pane_g

0x3bad,	// (0x00012f2f) bg_scroll_pane

0x07c6,	// (0x0000fb48) scroll_handle_pane

0x3bf4,	// (0x00012f76) scroll_bg_pane_g1

0x3c09,	// (0x00012f8b) scroll_bg_pane_g2

0x3c21,	// (0x00012fa3) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001ea60) scroll_bg_pane_g

0x3c36,	// (0x00012fb8) scroll_handle_focus_pane_ParamLimits

0x3c36,	// (0x00012fb8) scroll_handle_focus_pane

0x3bf4,	// (0x00012f76) scroll_handle_pane_g1

0x3c43,	// (0x00012fc5) scroll_handle_pane_g2

0x3c21,	// (0x00012fa3) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ea67) scroll_handle_pane_g

0x37ec,	// (0x00012b6e) bg_popup_sub_pane_cp21_ParamLimits

0x37ec,	// (0x00012b6e) bg_popup_sub_pane_cp21

0x3c57,	// (0x00012fd9) popup_fep_japan_predictive_window_t1_ParamLimits

0x3c57,	// (0x00012fd9) popup_fep_japan_predictive_window_t1

0x3c71,	// (0x00012ff3) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c71,	// (0x00012ff3) popup_fep_japan_predictive_window_t2

0x3ca4,	// (0x00013026) popup_fep_japan_predictive_window_t3_ParamLimits

0x3ca4,	// (0x00013026) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ea6e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ea6e) popup_fep_japan_predictive_window_t

0x26e8,	// (0x00011a6a) bg_popup_sub_pane_cp23

0x3cdb,	// (0x0001305d) listscroll_japin_cand_pane

0x3ce3,	// (0x00013065) popup_fep_japan_candidate_window_t1

0x3cf1,	// (0x00013073) candidate_pane_ParamLimits

0x3cf1,	// (0x00013073) candidate_pane

0x3d03,	// (0x00013085) scroll_pane_cp30

0x3d0b,	// (0x0001308d) list_single_popup_jap_candidate_pane_ParamLimits

0x3d0b,	// (0x0001308d) list_single_popup_jap_candidate_pane

0x26e8,	// (0x00011a6a) list_highlight_pane_cp30

0x3d20,	// (0x000130a2) list_single_popup_jap_candidate_pane_t1

0x3d2f,	// (0x000130b1) level_1_signal

0x3d41,	// (0x000130c3) level_2_signal

0x3d54,	// (0x000130d6) level_3_signal

0x3d67,	// (0x000130e9) level_4_signal

0x3d7a,	// (0x000130fc) level_5_signal

0x3d8d,	// (0x0001310f) level_6_signal

0x3da0,	// (0x00013122) level_7_signal

0x3d2f,	// (0x000130b1) level_1_battery

0x3d41,	// (0x000130c3) level_2_battery

0x3d54,	// (0x000130d6) level_3_battery

0x3d67,	// (0x000130e9) level_4_battery

0x3d7a,	// (0x000130fc) level_5_battery

0x3d8d,	// (0x0001310f) level_6_battery

0x3da0,	// (0x00013122) level_7_battery

0x3dcb,	// (0x0001314d) list_menu_pane_ParamLimits

0x3dcb,	// (0x0001314d) list_menu_pane

0x3de1,	// (0x00013163) scroll_pane_cp25_ParamLimits

0x3de1,	// (0x00013163) scroll_pane_cp25

0x3dfa,	// (0x0001317c) list_double2_graphic_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double2_graphic_pane_cp2

0x3dfa,	// (0x0001317c) list_double2_large_graphic_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double2_large_graphic_pane_cp2

0x3dfa,	// (0x0001317c) list_double2_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double2_pane_cp2

0x3dfa,	// (0x0001317c) list_double_graphic_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double_graphic_pane_cp2

0x3dfa,	// (0x0001317c) list_double_large_graphic_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double_large_graphic_pane_cp2

0x3dfa,	// (0x0001317c) list_double_number_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double_number_pane_cp2

0x3dfa,	// (0x0001317c) list_double_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double_pane_cp2

0xd29d,	// (0x0001c61f) list_single_2graphic_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_2graphic_pane_cp2

0xd29d,	// (0x0001c61f) list_single_graphic_heading_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_graphic_heading_pane_cp2

0xd29d,	// (0x0001c61f) list_single_graphic_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_graphic_pane_cp2

0xd29d,	// (0x0001c61f) list_single_heading_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_heading_pane_cp2

0x3e37,	// (0x000131b9) list_single_large_graphic_pane_cp2_ParamLimits

0x3e37,	// (0x000131b9) list_single_large_graphic_pane_cp2

0xd29d,	// (0x0001c61f) list_single_number_heading_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_number_heading_pane_cp2

0xd29d,	// (0x0001c61f) list_single_number_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_number_pane_cp2

0xd29d,	// (0x0001c61f) list_single_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_pane_cp2

0x3eb3,	// (0x00013235) bg_popup_sub_pane_cp22

0x0878,	// (0x0000fbfa) popup_side_volume_key_window_g1

0x08a2,	// (0x0000fc24) popup_side_volume_key_window_t1

0x08be,	// (0x0000fc40) volume_small_pane_cp1

0x2a5d,	// (0x00011ddf) bg_popup_sub_pane_cp24_ParamLimits

0x2a5d,	// (0x00011ddf) bg_popup_sub_pane_cp24

0x3ec9,	// (0x0001324b) fep_china_uni_candidate_pane_ParamLimits

0x3ec9,	// (0x0001324b) fep_china_uni_candidate_pane

0x3edd,	// (0x0001325f) fep_china_uni_entry_pane

0x3eed,	// (0x0001326f) popup_fep_china_uni_window_g1

0x3f09,	// (0x0001328b) fep_china_uni_entry_pane_g1

0x3f11,	// (0x00013293) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ea9f) fep_china_uni_entry_pane_g

0x3f19,	// (0x0001329b) fep_entry_item_pane

0x3f23,	// (0x000132a5) fep_candidate_item_pane

0x3f2b,	// (0x000132ad) fep_china_uni_candidate_pane_g1

0x3f33,	// (0x000132b5) fep_china_uni_candidate_pane_g2

0x3f3b,	// (0x000132bd) fep_china_uni_candidate_pane_g3

0x3f43,	// (0x000132c5) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001eaa4) fep_china_uni_candidate_pane_g

0x26de,	// (0x00011a60) fep_entry_item_pane_g1

0x3f4b,	// (0x000132cd) fep_entry_item_pane_t1_ParamLimits

0x3f4b,	// (0x000132cd) fep_entry_item_pane_t1

0x3f61,	// (0x000132e3) fep_candidate_item_pane_t1_ParamLimits

0x3f61,	// (0x000132e3) fep_candidate_item_pane_t1

0x3f76,	// (0x000132f8) fep_candidate_item_pane_t2_ParamLimits

0x3f76,	// (0x000132f8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001eaad) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001eaad) fep_candidate_item_pane_t

0x27c8,	// (0x00011b4a) list_highlight_pane_cp31_ParamLimits

0x27c8,	// (0x00011b4a) list_highlight_pane_cp31

0x3f88,	// (0x0001330a) level_1_signal_lsc

0x3f91,	// (0x00013313) level_2_signal_lsc

0x3f9a,	// (0x0001331c) level_3_signal_lsc

0x3fa3,	// (0x00013325) level_4_signal_lsc

0x3fac,	// (0x0001332e) level_5_signal_lsc

0x3fb5,	// (0x00013337) level_6_signal_lsc

0x3fbe,	// (0x00013340) level_7_signal_lsc

0x3fbe,	// (0x00013340) level_1_battery_lsc

0x3fc7,	// (0x00013349) level_2_battery_lsc

0x3fd0,	// (0x00013352) level_3_battery_lsc

0x3fd9,	// (0x0001335b) level_4_battery_lsc

0x3fe2,	// (0x00013364) level_5_battery_lsc

0x3feb,	// (0x0001336d) level_6_battery_lsc

0x3f88,	// (0x0001330a) level_7_battery_lsc

0x3ff4,	// (0x00013376) scroll_handle_focus_pane_g1

0x3ffd,	// (0x0001337f) scroll_handle_focus_pane_g2

0x4006,	// (0x00013388) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001eab2) scroll_handle_focus_pane_g

0xd32a,	// (0x0001c6ac) list_single_2graphic_pane_g1_ParamLimits

0xd32a,	// (0x0001c6ac) list_single_2graphic_pane_g1

0xcc5e,	// (0x0001bfe0) list_single_2graphic_pane_g2_ParamLimits

0xcc5e,	// (0x0001bfe0) list_single_2graphic_pane_g2

0x4c79,	// (0x00013ffb) list_single_2graphic_pane_g3_ParamLimits

0x4c79,	// (0x00013ffb) list_single_2graphic_pane_g3

0xd336,	// (0x0001c6b8) list_single_2graphic_pane_g4_ParamLimits

0xd336,	// (0x0001c6b8) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001eab9) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001eab9) list_single_2graphic_pane_g

0xd347,	// (0x0001c6c9) list_single_2graphic_pane_t1_ParamLimits

0xd347,	// (0x0001c6c9) list_single_2graphic_pane_t1

0xd375,	// (0x0001c6f7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd375,	// (0x0001c6f7) list_double2_graphic_large_graphic_pane_g1

0xcca7,	// (0x0001c029) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcca7,	// (0x0001c029) list_double2_graphic_large_graphic_pane_g2

0xccb8,	// (0x0001c03a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xccb8,	// (0x0001c03a) list_double2_graphic_large_graphic_pane_g3

0xd387,	// (0x0001c709) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd387,	// (0x0001c709) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001eac2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001eac2) list_double2_graphic_large_graphic_pane_g

0xd393,	// (0x0001c715) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd393,	// (0x0001c715) list_double2_graphic_large_graphic_pane_t1

0xd3a9,	// (0x0001c72b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd3a9,	// (0x0001c72b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001eacb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001eacb) list_double2_graphic_large_graphic_pane_t

0x41dd,	// (0x0001355f) popup_fast_swap_window_ParamLimits

0x41dd,	// (0x0001355f) popup_fast_swap_window

0x41f9,	// (0x0001357b) popup_side_volume_key_window

0x4215,	// (0x00013597) stacon_top_pane

0x421f,	// (0x000135a1) status_pane_ParamLimits

0x421f,	// (0x000135a1) status_pane

0xd3bb,	// (0x0001c73d) status_small_pane

0x26e8,	// (0x00011a6a) control_pane

0x26e8,	// (0x00011a6a) stacon_bottom_pane

0x34dd,	// (0x0001285f) scroll_pane_cp121

0x34d4,	// (0x00012856) set_content_pane

0x409e,	// (0x00013420) bg_active_tab_pane_g1_cp1

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp1

0x40b0,	// (0x00013432) bg_active_tab_pane_g3_cp1

0x409e,	// (0x00013420) bg_passive_tab_pane_g1_cp1

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp1

0x40b0,	// (0x00013432) bg_passive_tab_pane_g3_cp1

0x40b9,	// (0x0001343b) bg_active_tab_pane_g1_cp2

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp2

0x40c2,	// (0x00013444) bg_active_tab_pane_g3_cp2

0x40b9,	// (0x0001343b) bg_passive_tab_pane_g1_cp2

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp2

0x40c2,	// (0x00013444) bg_passive_tab_pane_g3_cp2

0x40cb,	// (0x0001344d) bg_active_tab_pane_g1_cp3

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp3

0x40d4,	// (0x00013456) bg_active_tab_pane_g3_cp3

0x40cb,	// (0x0001344d) bg_passive_tab_pane_g1_cp3

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp3

0x40d4,	// (0x00013456) bg_passive_tab_pane_g3_cp3

0x40dd,	// (0x0001345f) bg_active_tab_pane_g1_cp4

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp4

0x40e8,	// (0x0001346a) bg_active_tab_pane_g3_cp4

0x40dd,	// (0x0001345f) bg_passive_tab_pane_g1_cp4

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp4

0x40e8,	// (0x0001346a) bg_passive_tab_pane_g3_cp4

0x4131,	// (0x000134b3) bg_active_tab_pane_g1_cp5

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp5

0x413a,	// (0x000134bc) bg_active_tab_pane_g3_cp5

0x4131,	// (0x000134b3) bg_passive_tab_pane_g1_cp5

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp5

0x413a,	// (0x000134bc) bg_passive_tab_pane_g3_cp5

0x6a59,	// (0x00015ddb) list_set_graphic_pane_ParamLimits

0x6a59,	// (0x00015ddb) list_set_graphic_pane

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp4

0x4160,	// (0x000134e2) list_set_graphic_pane_g1_ParamLimits

0x4160,	// (0x000134e2) list_set_graphic_pane_g1

0x416c,	// (0x000134ee) list_set_graphic_pane_g2_ParamLimits

0x416c,	// (0x000134ee) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ead0) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ead0) list_set_graphic_pane_g

0x0009,

0xfac3,	// (0x0001ee45) volume_small_pane_cp_g

0x4190,	// (0x00013512) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4190,	// (0x00013512) list_double2_large_graphic_pane_g1_cp2

0x419c,	// (0x0001351e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x419c,	// (0x0001351e) list_double2_large_graphic_pane_g2_cp2

0x41ad,	// (0x0001352f) list_double2_large_graphic_pane_g3_cp2

0x41b5,	// (0x00013537) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x41b5,	// (0x00013537) list_double2_large_graphic_pane_t1_cp2

0x41cb,	// (0x0001354d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41cb,	// (0x0001354d) list_double2_large_graphic_pane_t2_cp2

0x5ecc,	// (0x0001524e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5ecc,	// (0x0001524e) list_double_large_graphic_pane_g1_cp2

0x5edd,	// (0x0001525f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5edd,	// (0x0001525f) list_double_large_graphic_pane_g2_cp2

0x4346,	// (0x000136c8) list_double_large_graphic_pane_g3_cp2

0x5eee,	// (0x00015270) list_double_large_graphic_pane_g4_cp

0x5ef6,	// (0x00015278) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ef6,	// (0x00015278) list_double_large_graphic_pane_t1_cp2

0x5f0d,	// (0x0001528f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5f0d,	// (0x0001528f) list_double_large_graphic_pane_t2_cp2

0x4238,	// (0x000135ba) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4238,	// (0x000135ba) list_double2_graphic_pane_g1_cp2

0x4246,	// (0x000135c8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4246,	// (0x000135c8) list_double2_graphic_pane_g2_cp2

0x4257,	// (0x000135d9) list_double2_graphic_pane_g3_cp2

0x4261,	// (0x000135e3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4261,	// (0x000135e3) list_double2_graphic_pane_t1_cp2

0x4277,	// (0x000135f9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4277,	// (0x000135f9) list_double2_graphic_pane_t2_cp2

0x4289,	// (0x0001360b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4289,	// (0x0001360b) list_single_number_heading_pane_g1_cp2

0x4295,	// (0x00013617) list_single_number_heading_pane_g2_cp2

0x429d,	// (0x0001361f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x429d,	// (0x0001361f) list_single_number_heading_pane_t1_cp2

0x42b3,	// (0x00013635) list_single_number_heading_pane_t2_cp2_ParamLimits

0x42b3,	// (0x00013635) list_single_number_heading_pane_t2_cp2

0x42c5,	// (0x00013647) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42c5,	// (0x00013647) list_single_number_heading_pane_t3_cp2

0x4289,	// (0x0001360b) list_single_heading_pane_g1_cp2_ParamLimits

0x4289,	// (0x0001360b) list_single_heading_pane_g1_cp2

0x4295,	// (0x00013617) list_single_heading_pane_g2_cp2

0x429d,	// (0x0001361f) list_single_heading_pane_t1_cp2_ParamLimits

0x429d,	// (0x0001361f) list_single_heading_pane_t1_cp2

0x5cd4,	// (0x00015056) list_single_heading_pane_t2_cp2_ParamLimits

0x5cd4,	// (0x00015056) list_single_heading_pane_t2_cp2

0x5c1c,	// (0x00014f9e) list_double_graphic_pane_g1_cp2_ParamLimits

0x5c1c,	// (0x00014f9e) list_double_graphic_pane_g1_cp2

0x5c28,	// (0x00014faa) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c28,	// (0x00014faa) list_double_graphic_pane_g2_cp2

0x5c37,	// (0x00014fb9) list_double_graphic_pane_g3_cp2

0x5c3f,	// (0x00014fc1) list_double_graphic_pane_t1_cp2_ParamLimits

0x5c3f,	// (0x00014fc1) list_double_graphic_pane_t1_cp2

0x5c55,	// (0x00014fd7) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c55,	// (0x00014fd7) list_double_graphic_pane_t2_cp2

0x433a,	// (0x000136bc) list_double_number_pane_g1_cp2_ParamLimits

0x433a,	// (0x000136bc) list_double_number_pane_g1_cp2

0x4346,	// (0x000136c8) list_double_number_pane_g2_cp2

0x5be0,	// (0x00014f62) list_double_number_pane_t1_cp2_ParamLimits

0x5be0,	// (0x00014f62) list_double_number_pane_t1_cp2

0x5bf4,	// (0x00014f76) list_double_number_pane_t2_cp2_ParamLimits

0x5bf4,	// (0x00014f76) list_double_number_pane_t2_cp2

0x5c0a,	// (0x00014f8c) list_double_number_pane_t3_cp2_ParamLimits

0x5c0a,	// (0x00014f8c) list_double_number_pane_t3_cp2

0x5ac9,	// (0x00014e4b) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ac9,	// (0x00014e4b) list_single_graphic_pane_g1_cp2

0x439e,	// (0x00013720) list_single_graphic_pane_g2_cp2_ParamLimits

0x439e,	// (0x00013720) list_single_graphic_pane_g2_cp2

0x43aa,	// (0x0001372c) list_single_graphic_pane_g3_cp2

0x5a9f,	// (0x00014e21) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a9f,	// (0x00014e21) list_single_graphic_pane_t1_cp2

0x439e,	// (0x00013720) list_single_number_pane_g1_cp2_ParamLimits

0x439e,	// (0x00013720) list_single_number_pane_g1_cp2

0x43aa,	// (0x0001372c) list_single_number_pane_g2_cp2

0x5a9f,	// (0x00014e21) list_single_number_pane_t1_cp2_ParamLimits

0x5a9f,	// (0x00014e21) list_single_number_pane_t1_cp2

0x5ab5,	// (0x00014e37) list_single_number_pane_t2_cp2_ParamLimits

0x5ab5,	// (0x00014e37) list_single_number_pane_t2_cp2

0x419c,	// (0x0001351e) list_double2_pane_g1_cp2_ParamLimits

0x419c,	// (0x0001351e) list_double2_pane_g1_cp2

0x41ad,	// (0x0001352f) list_double2_pane_g2_cp2

0x4312,	// (0x00013694) list_double2_pane_t1_cp2_ParamLimits

0x4312,	// (0x00013694) list_double2_pane_t1_cp2

0x4328,	// (0x000136aa) list_double2_pane_t2_cp2_ParamLimits

0x4328,	// (0x000136aa) list_double2_pane_t2_cp2

0x433a,	// (0x000136bc) list_double_pane_g1_cp2_ParamLimits

0x433a,	// (0x000136bc) list_double_pane_g1_cp2

0x4346,	// (0x000136c8) list_double_pane_g2_cp2

0x434e,	// (0x000136d0) list_double_pane_t1_cp2_ParamLimits

0x434e,	// (0x000136d0) list_double_pane_t1_cp2

0x4364,	// (0x000136e6) list_double_pane_t2_cp2_ParamLimits

0x4364,	// (0x000136e6) list_double_pane_t2_cp2

0x438e,	// (0x00013710) list_single_pane_cp2_g3

0x439e,	// (0x00013720) list_single_pane_g1_cp2_ParamLimits

0x439e,	// (0x00013720) list_single_pane_g1_cp2

0x43aa,	// (0x0001372c) list_single_pane_g2_cp2

0x43b2,	// (0x00013734) list_single_pane_t1_cp2_ParamLimits

0x43b2,	// (0x00013734) list_single_pane_t1_cp2

0x43ca,	// (0x0001374c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x43ca,	// (0x0001374c) list_single_large_graphic_pane_g1_cp2

0x43d6,	// (0x00013758) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43d6,	// (0x00013758) list_single_large_graphic_pane_g2_cp2

0x43e2,	// (0x00013764) list_single_large_graphic_pane_g3_cp2

0x43ea,	// (0x0001376c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x43ea,	// (0x0001376c) list_single_large_graphic_pane_g4_cp1

0x4404,	// (0x00013786) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4404,	// (0x00013786) list_single_large_graphic_pane_t1_cp2

0x5a6b,	// (0x00014ded) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5a6b,	// (0x00014ded) list_single_graphic_heading_pane_g1_cp2

0x5a38,	// (0x00014dba) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5a38,	// (0x00014dba) list_single_graphic_heading_pane_g4_cp2

0x43aa,	// (0x0001372c) list_single_graphic_heading_pane_g5_cp2

0x5a77,	// (0x00014df9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5a77,	// (0x00014df9) list_single_graphic_heading_pane_t1_cp2

0x5a8d,	// (0x00014e0f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5a8d,	// (0x00014e0f) list_single_graphic_heading_pane_t2_cp2

0x5a2c,	// (0x00014dae) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5a2c,	// (0x00014dae) list_single_2graphic_pane_g1_cp2

0x5a38,	// (0x00014dba) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5a38,	// (0x00014dba) list_single_2graphic_pane_g2_cp2

0x43aa,	// (0x0001372c) list_single_2graphic_pane_g3_cp2

0x5a49,	// (0x00014dcb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5a49,	// (0x00014dcb) list_single_2graphic_pane_g4_cp2

0x5a55,	// (0x00014dd7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5a55,	// (0x00014dd7) list_single_2graphic_pane_t1_cp2

0x26de,	// (0x00011a60) list_highlight_pane_g10_cp1

0x55f8,	// (0x0001497a) list_highlight_pane_g1_cp1

0x5600,	// (0x00014982) list_highlight_pane_g2_cp1

0x5608,	// (0x0001498a) list_highlight_pane_g3_cp1

0x5610,	// (0x00014992) list_highlight_pane_g4_cp1

0x5618,	// (0x0001499a) list_highlight_pane_g5_cp1

0x5620,	// (0x000149a2) list_highlight_pane_g6_cp1

0x5628,	// (0x000149aa) list_highlight_pane_g7_cp1

0x5630,	// (0x000149b2) list_highlight_pane_g8_cp1

0x5638,	// (0x000149ba) list_highlight_pane_g9_cp1

0xda39,	// (0x0001cdbb) form_field_slider_pane_t3

0xda47,	// (0x0001cdc9) form_field_slider_pane_t4

0x5534,	// (0x000148b6) slider_form_pane_ParamLimits

0x5534,	// (0x000148b6) slider_form_pane

0x26e8,	// (0x00011a6a) control_abbreviations

0x26e8,	// (0x00011a6a) control_conventions

0x26e8,	// (0x00011a6a) control_definitions

0x26e8,	// (0x00011a6a) format_table_attribute

0x5d1e,	// (0x000150a0) bg_popup_preview_window_pane_g9

0x26e8,	// (0x00011a6a) format_table_data2

0x26e8,	// (0x00011a6a) format_table_data3

0x26e8,	// (0x00011a6a) format_table_data_example

0x0008,

0x26e8,	// (0x00011a6a) intro_purpose

0xf8e5,	// (0x0001ec67) bg_popup_preview_window_pane_g

0x26e8,	// (0x00011a6a) texts_category

0x26e8,	// (0x00011a6a) texts_graphics

0x441a,	// (0x0001379c) text_digital

0x4429,	// (0x000137ab) text_primary

0x4438,	// (0x000137ba) text_primary_small

0x4447,	// (0x000137c9) text_secondary

0x4456,	// (0x000137d8) text_title

0x6549,	// (0x000158cb) bg_passive_tab_pane_g1_cp3_srt

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp3_srt

0x6552,	// (0x000158d4) bg_passive_tab_pane_g3_cp3_srt

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp3_srt_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp3_srt

0x655b,	// (0x000158dd) tabs_4_active_pane_srt_g1

0xddca,	// (0x0001d14c) tabs_4_active_pane_srt_t1_ParamLimits

0xddca,	// (0x0001d14c) tabs_4_active_pane_srt_t1

0x6549,	// (0x000158cb) bg_active_tab_pane_g1_cp3_copy1

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp3_copy1

0x6552,	// (0x000158d4) bg_active_tab_pane_g3_cp3_copy1

0x27c8,	// (0x00011b4a) tabs_2_long_active_pane_srt_ParamLimits

0x27c8,	// (0x00011b4a) tabs_2_long_active_pane_srt

0x27c8,	// (0x00011b4a) tabs_2_long_passive_pane_srt_ParamLimits

0x27c8,	// (0x00011b4a) tabs_2_long_passive_pane_srt

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp4_srt_ParamLimits

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp4_srt

0x6174,	// (0x000154f6) bg_passive_tab_pane_g1_cp4_srt

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp4_srt

0x617d,	// (0x000154ff) bg_passive_tab_pane_g3_cp4_srt

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp4_srt_ParamLimits

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp4_srt

0xdbb6,	// (0x0001cf38) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbb6,	// (0x0001cf38) tabs_2_long_active_pane_srt_t1

0x6174,	// (0x000154f6) bg_active_tab_pane_g1_cp4_srt

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp4_srt

0x617d,	// (0x000154ff) bg_active_tab_pane_g3_cp4_srt

0x2a5d,	// (0x00011ddf) tabs_3_long_active_pane_srt_ParamLimits

0x2a5d,	// (0x00011ddf) tabs_3_long_active_pane_srt

0x2a5d,	// (0x00011ddf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2a5d,	// (0x00011ddf) tabs_3_long_passive_pane_cp_srt

0x2a5d,	// (0x00011ddf) tabs_3_long_passive_pane_srt_ParamLimits

0x2a5d,	// (0x00011ddf) tabs_3_long_passive_pane_srt

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp5_srt_ParamLimits

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp5_srt

0x4131,	// (0x000134b3) bg_passive_tab_pane_g1_cp5_srt

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp5_srt

0x413a,	// (0x000134bc) bg_passive_tab_pane_g3_cp5_srt

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp5_srt_ParamLimits

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp5_srt

0xdba0,	// (0x0001cf22) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdba0,	// (0x0001cf22) tabs_3_long_active_pane_srt_t1

0x4131,	// (0x000134b3) bg_active_tab_pane_g1_cp5_srt

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp5_srt

0x413a,	// (0x000134bc) bg_active_tab_pane_g3_cp5_srt

0x6154,	// (0x000154d6) navi_text_pane_srt_t1

0x614c,	// (0x000154ce) navi_icon_pane_srt_g1

0x462b,	// (0x000139ad) midp_editing_number_pane_srt

0x4465,	// (0x000137e7) midp_ticker_pane_srt

0x4633,	// (0x000139b5) midp_ticker_pane_srt_g1

0x463b,	// (0x000139bd) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001eaef) midp_ticker_pane_srt_g

0x4643,	// (0x000139c5) midp_ticker_pane_srt_t1

0x613d,	// (0x000154bf) midp_editing_number_pane_t1_copy1

0xd3c6,	// (0x0001c748) listscroll_midp_pane

0xd3c6,	// (0x0001c748) midp_form_pane

0x44dd,	// (0x0001385f) midp_info_popup_window_ParamLimits

0x44dd,	// (0x0001385f) midp_info_popup_window

0x37ec,	// (0x00012b6e) bg_popup_sub_pane_cp50_ParamLimits

0x37ec,	// (0x00012b6e) bg_popup_sub_pane_cp50

0x5230,	// (0x000145b2) listscroll_midp_info_pane_ParamLimits

0x5230,	// (0x000145b2) listscroll_midp_info_pane

0x5210,	// (0x00014592) listscroll_form_midp_pane_ParamLimits

0x5210,	// (0x00014592) listscroll_form_midp_pane

0x521c,	// (0x0001459e) scroll_bar_cp050

0x5210,	// (0x00014592) list_midp_pane

0x72e3,	// (0x00016665) signal_pane_g2_cp

0x512a,	// (0x000144ac) listscroll_midp_info_pane_t1_ParamLimits

0x512a,	// (0x000144ac) listscroll_midp_info_pane_t1

0x5142,	// (0x000144c4) listscroll_midp_info_pane_t2_ParamLimits

0x5142,	// (0x000144c4) listscroll_midp_info_pane_t2

0x5180,	// (0x00014502) listscroll_midp_info_pane_t3_ParamLimits

0x5180,	// (0x00014502) listscroll_midp_info_pane_t3

0x51ba,	// (0x0001453c) listscroll_midp_info_pane_t4_ParamLimits

0x51ba,	// (0x0001453c) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001eba2) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001eba2) listscroll_midp_info_pane_t

0x38b0,	// (0x00012c32) scroll_pane_cp21

0x50c8,	// (0x0001444a) form_midp_field_choice_group_pane

0x50d1,	// (0x00014453) form_midp_field_text_pane

0x5110,	// (0x00014492) form_midp_field_time_pane

0x5118,	// (0x0001449a) form_midp_gauge_slider_pane

0x5121,	// (0x000144a3) form_midp_gauge_wait_pane

0x26e8,	// (0x00011a6a) form_midp_image_pane

0xda23,	// (0x0001cda5) list_single_midp_pane_ParamLimits

0xda23,	// (0x0001cda5) list_single_midp_pane

0xda02,	// (0x0001cd84) form_midp_field_text_pane_t1

0x4e19,	// (0x0001419b) input_focus_pane_cp050

0x5089,	// (0x0001440b) list_midp_form_text_pane

0x5024,	// (0x000143a6) form_midp_field_choice_group_pane_t1

0x5032,	// (0x000143b4) input_focus_pane_cp051

0x5046,	// (0x000143c8) list_midp_choice_pane

0x26e8,	// (0x00011a6a) status_idle_pane

0x5008,	// (0x0001438a) form_midp_field_time_pane_t1

0x26de,	// (0x00011a60) wait_anim_pane_g2_copy1

0x5016,	// (0x00014398) form_midp_field_time_pane_t2

0x0001,

0x458b,	// (0x0001390d) aid_navinavi_width_2_pane

0xf81b,	// (0x0001eb9d) form_midp_field_time_pane_t

0x26e8,	// (0x00011a6a) input_focus_pane_cp052

0x26e8,	// (0x00011a6a) bg_input_focus_pane_cp040

0x4fc8,	// (0x0001434a) form_midp_gauge_slider_pane_t1

0x4fd6,	// (0x00014358) form_midp_gauge_slider_pane_t2

0xd9e6,	// (0x0001cd68) form_midp_gauge_slider_pane_t3

0xd9f4,	// (0x0001cd76) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001eb94) form_midp_gauge_slider_pane_t

0x5000,	// (0x00014382) form_midp_slider_pane

0x27c8,	// (0x00011b4a) bg_input_focus_pane_cp041_ParamLimits

0x27c8,	// (0x00011b4a) bg_input_focus_pane_cp041

0x4f95,	// (0x00014317) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f95,	// (0x00014317) form_midp_gauge_wait_pane_t1

0x4fa7,	// (0x00014329) form_midp_gauge_wait_pane_t2_ParamLimits

0x4fa7,	// (0x00014329) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001eb8f) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001eb8f) form_midp_gauge_wait_pane_t

0x4fb9,	// (0x0001433b) form_midp_wait_pane_ParamLimits

0x4fb9,	// (0x0001433b) form_midp_wait_pane

0x4f5f,	// (0x000142e1) form_midp_image_pane_g1

0x4f68,	// (0x000142ea) form_midp_image_pane_t1

0x4f77,	// (0x000142f9) form_midp_image_pane_t2

0x4f86,	// (0x00014308) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001eb88) form_midp_image_pane_t

0x4f47,	// (0x000142c9) list_single_midp_pane_g1

0x4f50,	// (0x000142d2) list_single_midp_pane_t1

0xd9d2,	// (0x0001cd54) list_midp_form_item_pane_ParamLimits

0xd9d2,	// (0x0001cd54) list_midp_form_item_pane

0x4533,	// (0x000138b5) list_midp_form_item_pane_t1

0x4542,	// (0x000138c4) midp_ticker_pane_g1

0x454e,	// (0x000138d0) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ead5) midp_ticker_pane_g

0x455a,	// (0x000138dc) midp_ticker_pane_t1

0x63c1,	// (0x00015743) midp_editing_number_pane_t1

0x639f,	// (0x00015721) midp_editing_number_pane

0x63ae,	// (0x00015730) midp_ticker_pane

0x6105,	// (0x00015487) ai_message_heading_pane

0x26e8,	// (0x00011a6a) bg_popup_window_pane_cp14

0x610d,	// (0x0001548f) listscroll_ai_message_pane

0x608f,	// (0x00015411) ai_message_heading_pane_g1_ParamLimits

0x608f,	// (0x00015411) ai_message_heading_pane_g1

0x609b,	// (0x0001541d) ai_message_heading_pane_g2_ParamLimits

0x609b,	// (0x0001541d) ai_message_heading_pane_g2

0x60a7,	// (0x00015429) ai_message_heading_pane_g3_ParamLimits

0x60a7,	// (0x00015429) ai_message_heading_pane_g3

0x60b3,	// (0x00015435) ai_message_heading_pane_g4_ParamLimits

0x60b3,	// (0x00015435) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001ecc9) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001ecc9) ai_message_heading_pane_g

0x60bf,	// (0x00015441) ai_message_heading_pane_t1_ParamLimits

0x60bf,	// (0x00015441) ai_message_heading_pane_t1

0x60d9,	// (0x0001545b) ai_message_heading_pane_t2_ParamLimits

0x60d9,	// (0x0001545b) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001ecd2) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001ecd2) ai_message_heading_pane_t

0x60eb,	// (0x0001546d) bg_popup_heading_pane_cp1_ParamLimits

0x60eb,	// (0x0001546d) bg_popup_heading_pane_cp1

0x607d,	// (0x000153ff) list_ai_message_pane_ParamLimits

0x607d,	// (0x000153ff) list_ai_message_pane

0x38b0,	// (0x00012c32) scroll_pane_cp10

0x6019,	// (0x0001539b) list_ai_message_pane_g1

0x6021,	// (0x000153a3) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001eca6) list_ai_message_pane_g

0x6029,	// (0x000153ab) list_ai_message_pane_t1_ParamLimits

0x6029,	// (0x000153ab) list_ai_message_pane_t1

0x603e,	// (0x000153c0) list_ai_message_pane_t2_ParamLimits

0x603e,	// (0x000153c0) list_ai_message_pane_t2

0x6053,	// (0x000153d5) list_ai_message_pane_t3_ParamLimits

0x6053,	// (0x000153d5) list_ai_message_pane_t3

0x6068,	// (0x000153ea) list_ai_message_pane_t4_ParamLimits

0x6068,	// (0x000153ea) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001ecab) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001ecab) list_ai_message_pane_t

0xdb6d,	// (0x0001ceef) cell_ai_soft_ind_pane_ParamLimits

0xdb6d,	// (0x0001ceef) cell_ai_soft_ind_pane

0x456c,	// (0x000138ee) cell_ai_soft_ind_pane_g1_ParamLimits

0x456c,	// (0x000138ee) cell_ai_soft_ind_pane_g1

0x26e8,	// (0x00011a6a) grid_highlight_cp1

0x4579,	// (0x000138fb) text_secondary_cp56_ParamLimits

0x4579,	// (0x000138fb) text_secondary_cp56

0x5fd9,	// (0x0001535b) example_general_pane_ParamLimits

0x5fd9,	// (0x0001535b) example_general_pane

0x5fe5,	// (0x00015367) example_parent_pane_g1_ParamLimits

0x5fe5,	// (0x00015367) example_parent_pane_g1

0x5ff1,	// (0x00015373) example_parent_pane_t1_ParamLimits

0x5ff1,	// (0x00015373) example_parent_pane_t1

0xbf78,	// (0x0001b2fa) popup_preview_text_window_ParamLimits

0xbf78,	// (0x0001b2fa) popup_preview_text_window

0x4396,	// (0x00013718) list_single_pane_cp2_g4

0x2b13,	// (0x00011e95) bg_popup_preview_window_pane_ParamLimits

0x2b13,	// (0x00011e95) bg_popup_preview_window_pane

0x5d26,	// (0x000150a8) popup_preview_text_window_t1_ParamLimits

0x5d26,	// (0x000150a8) popup_preview_text_window_t1

0x5d44,	// (0x000150c6) popup_preview_text_window_t2_ParamLimits

0x5d44,	// (0x000150c6) popup_preview_text_window_t2

0x5d8d,	// (0x0001510f) popup_preview_text_window_t3_ParamLimits

0x5d8d,	// (0x0001510f) popup_preview_text_window_t3

0x5dd2,	// (0x00015154) popup_preview_text_window_t4_ParamLimits

0x5dd2,	// (0x00015154) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001ec7a) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001ec7a) popup_preview_text_window_t

0x5e50,	// (0x000151d2) scroll_pane_cp11

0x4cf7,	// (0x00014079) bg_popup_preview_window_pane_g1

0x5ce6,	// (0x00015068) bg_popup_preview_window_pane_g2

0x5cee,	// (0x00015070) bg_popup_preview_window_pane_g3

0x5cf6,	// (0x00015078) bg_popup_preview_window_pane_g4

0x5cfe,	// (0x00015080) bg_popup_preview_window_pane_g5

0x5d06,	// (0x00015088) bg_popup_preview_window_pane_g6

0x5d0e,	// (0x00015090) bg_popup_preview_window_pane_g7

0x5d16,	// (0x00015098) bg_popup_preview_window_pane_g8

0x01ab,	// (0x0000f52d) aid_popup_width_pane

0xbef4,	// (0x0001b276) popup_midp_note_alarm_window_ParamLimits

0xbef4,	// (0x0001b276) popup_midp_note_alarm_window

0x359e,	// (0x00012920) data_form_pane_ParamLimits

0xd045,	// (0x0001c3c7) form_field_data_pane_g1

0xd04f,	// (0x0001c3d1) form_field_data_pane_t1_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_ParamLimits

0x35da,	// (0x0001295c) data_form_wide_pane_ParamLimits

0x35e6,	// (0x00012968) form_field_data_wide_pane_g1

0x3606,	// (0x00012988) form_field_data_wide_pane_t1_ParamLimits

0x2dc2,	// (0x00012144) input_focus_pane_cp6_ParamLimits

0xd18b,	// (0x0001c50d) input_popup_find_pane_g1_ParamLimits

0xd18b,	// (0x0001c50d) input_popup_find_pane_g1

0x0727,	// (0x0000faa9) aid_navi_side_left_pane

0x073c,	// (0x0000fabe) aid_navi_side_right_pane

0x56ff,	// (0x00014a81) bg_popup_window_pane_cp30_ParamLimits

0x56ff,	// (0x00014a81) bg_popup_window_pane_cp30

0x5779,	// (0x00014afb) popup_midp_note_alarm_window_g1_ParamLimits

0x5779,	// (0x00014afb) popup_midp_note_alarm_window_g1

0x57a9,	// (0x00014b2b) popup_midp_note_alarm_window_t1_ParamLimits

0x57a9,	// (0x00014b2b) popup_midp_note_alarm_window_t1

0x584a,	// (0x00014bcc) popup_midp_note_alarm_window_t2_ParamLimits

0x584a,	// (0x00014bcc) popup_midp_note_alarm_window_t2

0x58f8,	// (0x00014c7a) popup_midp_note_alarm_window_t3_ParamLimits

0x58f8,	// (0x00014c7a) popup_midp_note_alarm_window_t3

0x592a,	// (0x00014cac) popup_midp_note_alarm_window_t4_ParamLimits

0x592a,	// (0x00014cac) popup_midp_note_alarm_window_t4

0x5950,	// (0x00014cd2) popup_midp_note_alarm_window_t5_ParamLimits

0x5950,	// (0x00014cd2) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ec17) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ec17) popup_midp_note_alarm_window_t

0x59fc,	// (0x00014d7e) wait_bar_pane_cp1_ParamLimits

0x59fc,	// (0x00014d7e) wait_bar_pane_cp1

0x26e8,	// (0x00011a6a) wait_anim_pane_copy1

0x26e8,	// (0x00011a6a) wait_border_pane_copy1

0x53d9,	// (0x0001475b) wait_border_pane_g1_copy1

0x361d,	// (0x0001299f) form_field_popup_pane_g1

0xd069,	// (0x0001c3eb) form_field_popup_pane_t1_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_cp7_ParamLimits

0x363d,	// (0x000129bf) list_form_pane_ParamLimits

0x3649,	// (0x000129cb) form_field_popup_wide_pane_g1

0x3651,	// (0x000129d3) form_field_popup_wide_pane_t1_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_cp8_ParamLimits

0x3663,	// (0x000129e5) list_form_wide_pane_ParamLimits

0xde23,	// (0x0001d1a5) aid_size_cell_graphic_pane

0xd0e8,	// (0x0001c46a) data_form_pane_t1_ParamLimits

0xdd21,	// (0x0001d0a3) data_form_wide_pane_t1_ParamLimits

0xd657,	// (0x0001c9d9) bg_status_flat_pane

0xc90b,	// (0x0001bc8d) title_pane_t1_ParamLimits

0x2790,	// (0x00011b12) title_pane_t2_ParamLimits

0x27b6,	// (0x00011b38) title_pane_t3_ParamLimits

0xf557,	// (0x0001e8d9) title_pane_t_ParamLimits

0x3d2f,	// (0x000130b1) level_1_signal_ParamLimits

0x3d41,	// (0x000130c3) level_2_signal_ParamLimits

0x3d54,	// (0x000130d6) level_3_signal_ParamLimits

0x3d67,	// (0x000130e9) level_4_signal_ParamLimits

0x3d7a,	// (0x000130fc) level_5_signal_ParamLimits

0x3d8d,	// (0x0001310f) level_6_signal_ParamLimits

0x3da0,	// (0x00013122) level_7_signal_ParamLimits

0x3d2f,	// (0x000130b1) level_1_battery_ParamLimits

0x3d41,	// (0x000130c3) level_2_battery_ParamLimits

0x3d54,	// (0x000130d6) level_3_battery_ParamLimits

0x3d67,	// (0x000130e9) level_4_battery_ParamLimits

0x3d7a,	// (0x000130fc) level_5_battery_ParamLimits

0x3d8d,	// (0x0001310f) level_6_battery_ParamLimits

0x3da0,	// (0x00013122) level_7_battery_ParamLimits

0x55f8,	// (0x0001497a) bg_status_flat_pane_g1

0x5600,	// (0x00014982) bg_status_flat_pane_g2

0x5608,	// (0x0001498a) bg_status_flat_pane_g3

0x5610,	// (0x00014992) bg_status_flat_pane_g4

0x5618,	// (0x0001499a) bg_status_flat_pane_g5

0x5620,	// (0x000149a2) bg_status_flat_pane_g6

0x5628,	// (0x000149aa) bg_status_flat_pane_g7

0xc997,	// (0x0001bd19) tabs_3_active_pane_t1_ParamLimits

0xc997,	// (0x0001bd19) tabs_3_passive_pane_t1_ParamLimits

0xc9a9,	// (0x0001bd2b) tabs_4_active_pane_t1_ParamLimits

0xc9a9,	// (0x0001bd2b) tabs_4_1_passive_pane_t1_ParamLimits

0xd199,	// (0x0001c51b) tabs_2_active_pane_t1_ParamLimits

0xd199,	// (0x0001c51b) tabs_2_passive_pane_t1_ParamLimits

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp4_ParamLimits

0xd1ab,	// (0x0001c52d) tabs_2_long_active_pane_t1_ParamLimits

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp4_ParamLimits

0x12ea,	// (0x0001066c) list_single_midp_graphic_pane_t1_ParamLimits

0x27c8,	// (0x00011b4a) bg_active_tab_pane_cp5_ParamLimits

0xd1be,	// (0x0001c540) tabs_3_long_active_pane_t1_ParamLimits

0x47b7,	// (0x00013b39) bg_passive_tab_pane_cp5_ParamLimits

0x12ea,	// (0x0001066c) list_single_midp_graphic_pane_t1

0xd657,	// (0x0001c9d9) bg_status_flat_pane_ParamLimits

0x4959,	// (0x00013cdb) indicator_pane_cp2_ParamLimits

0x4959,	// (0x00013cdb) indicator_pane_cp2

0xd7d5,	// (0x0001cb57) navi_pane_srt_ParamLimits

0xd7d5,	// (0x0001cb57) navi_pane_srt

0x4aa8,	// (0x00013e2a) popup_clock_digital_analogue_window_cp1

0x28bf,	// (0x00011c41) indicator_pane_t1

0x4465,	// (0x000137e7) copy_highlight_pane

0x4465,	// (0x000137e7) cursor_graphics_pane

0x4465,	// (0x000137e7) graphic_within_text_pane

0x4465,	// (0x000137e7) link_highlight_pane

0x5e13,	// (0x00015195) popup_preview_text_window_t5_ParamLimits

0x5e13,	// (0x00015195) popup_preview_text_window_t5

0x4593,	// (0x00013915) cursor_digital_pane

0x4593,	// (0x00013915) cursor_primary_pane

0x45a4,	// (0x00013926) cursor_primary_small_pane

0x45ac,	// (0x0001392e) cursor_secondary_pane

0x45b4,	// (0x00013936) cursor_title_pane

0x4593,	// (0x00013915) link_highlight_digital_pane

0x459b,	// (0x0001391d) link_highlight_primary_pane

0x45a4,	// (0x00013926) link_highlight_primary_small_pane

0x45ac,	// (0x0001392e) link_highlight_secondary_pane

0x45b4,	// (0x00013936) link_highlight_title_pane

0x4593,	// (0x00013915) copy_highlight_digital_pane

0x4593,	// (0x00013915) copy_highlight_primary_pane

0x45a4,	// (0x00013926) copy_highlight_primary_small_pane

0x45ac,	// (0x0001392e) copy_highlight_secondary_pane

0x45b4,	// (0x00013936) copy_highlight_title_pane

0x45ac,	// (0x0001392e) graphic_text_digital_pane

0x56a2,	// (0x00014a24) graphic_text_primary_pane

0x56ab,	// (0x00014a2d) graphic_text_primary_small_pane

0x45a4,	// (0x00013926) graphic_text_secondary_pane

0x4593,	// (0x00013915) graphic_text_title_pane

0xd46b,	// (0x0001c7ed) cursor_primary_pane_g1

0x5694,	// (0x00014a16) cursor_text_primary_t1

0xda69,	// (0x0001cdeb) cursor_primary_small_pane_g1

0x5686,	// (0x00014a08) cursor_text_primary_small_t1

0xda5f,	// (0x0001cde1) cursor_primary_small_pane_g1_copy1

0x566e,	// (0x000149f0) cursor_text_primary_small_t1_copy1

0x5640,	// (0x000149c2) cursor_text_title_t1

0xda55,	// (0x0001cdd7) cursor_title_pane_g1

0xd46b,	// (0x0001c7ed) cursor_digital_pane_g1

0x45c6,	// (0x00013948) cursor_text_digital_t1

0x45eb,	// (0x0001396d) link_highlight_primary_pane_g1

0x55e9,	// (0x0001496b) link_highlight_primary_pane_t1

0x45d4,	// (0x00013956) link_highlight_primary_small_pane_g1

0x45dc,	// (0x0001395e) link_highlight_primary_small_pane_t1

0x45eb,	// (0x0001396d) link_highlight_secondary_pane_g1

0x45f3,	// (0x00013975) link_highlight_secondary_pane_t1

0x555d,	// (0x000148df) link_highlight_title_pane_g1

0x5565,	// (0x000148e7) link_highlight_title_pane_t1

0x5546,	// (0x000148c8) link_highlight_digital_pane_g1

0x554e,	// (0x000148d0) link_highlight_digital_pane_t1

0x541e,	// (0x000147a0) copy_highlight_primary_pane_g1

0x5426,	// (0x000147a8) copy_highlight_primary_pane_t1

0x53f8,	// (0x0001477a) copy_highlight_primary_small_pane_g1

0x540f,	// (0x00014791) copy_highlight_primary_small_pane_t1

0x4602,	// (0x00013984) copy_highlight_secondary_pane_g1

0x460a,	// (0x0001398c) copy_highlight_secondary_pane_t1

0x53f8,	// (0x0001477a) copy_highlight_title_pane_g1

0x5400,	// (0x00014782) copy_highlight_title_pane_t1

0x541e,	// (0x000147a0) copy_highlight_digital_pane_g1

0x67ab,	// (0x00015b2d) copy_highlight_digital_pane_t1

0x66ff,	// (0x00015a81) graphic_text_primary_pane_g1

0x678f,	// (0x00015b11) graphic_text_primary_pane_t1

0x679d,	// (0x00015b1f) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001ed46) graphic_text_primary_pane_t

0x676b,	// (0x00015aed) graphic_text_primary_small_pane_g1

0x6773,	// (0x00015af5) graphic_text_primary_small_pane_t1

0x6781,	// (0x00015b03) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001ed41) graphic_text_primary_small_pane_t

0x6747,	// (0x00015ac9) graphic_text_secondary_pane_g1

0x674f,	// (0x00015ad1) graphic_text_secondary_pane_t1

0x675d,	// (0x00015adf) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001ed3c) graphic_text_secondary_pane_t

0x6723,	// (0x00015aa5) graphic_text_title_pane_g1

0x672b,	// (0x00015aad) graphic_text_title_pane_t1

0x6739,	// (0x00015abb) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001ed37) graphic_text_title_pane_t

0x66ff,	// (0x00015a81) graphic_text_digital_pane_g1

0x6707,	// (0x00015a89) graphic_text_digital_pane_t1

0x6715,	// (0x00015a97) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001ed32) graphic_text_digital_pane_t

0x27c8,	// (0x00011b4a) navi_icon_pane_srt_ParamLimits

0x27c8,	// (0x00011b4a) navi_icon_pane_srt

0x26e8,	// (0x00011a6a) navi_midp_pane_srt

0x26e8,	// (0x00011a6a) navi_navi_pane_srt

0x27c8,	// (0x00011b4a) navi_text_pane_srt_ParamLimits

0x27c8,	// (0x00011b4a) navi_text_pane_srt

0x66ca,	// (0x00015a4c) navi_navi_icon_text_pane_srt

0x66d2,	// (0x00015a54) navi_navi_pane_srt_g1_ParamLimits

0x66d2,	// (0x00015a54) navi_navi_pane_srt_g1

0x66e4,	// (0x00015a66) navi_navi_pane_srt_g2_ParamLimits

0x66e4,	// (0x00015a66) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001ed2d) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001ed2d) navi_navi_pane_srt_g

0x66f6,	// (0x00015a78) navi_navi_tabs_pane_srt

0x66ca,	// (0x00015a4c) navi_navi_text_pane_srt

0x66ca,	// (0x00015a4c) navi_navi_volume_pane_srt

0x66bb,	// (0x00015a3d) navi_navi_text_pane_srt_t1

0x1664,	// (0x000109e6) navi_navi_volume_pane_srt_g1

0x166c,	// (0x000109ee) volume_small_pane_srt_ParamLimits

0x166c,	// (0x000109ee) volume_small_pane_srt

0x0a07,	// (0x0000fd89) volume_small_pane_srt_g1_ParamLimits

0x0a07,	// (0x0000fd89) volume_small_pane_srt_g1

0x0a17,	// (0x0000fd99) volume_small_pane_srt_g2_ParamLimits

0x0a17,	// (0x0000fd99) volume_small_pane_srt_g2

0x0a28,	// (0x0000fdaa) volume_small_pane_srt_g3_ParamLimits

0x0a28,	// (0x0000fdaa) volume_small_pane_srt_g3

0x0a39,	// (0x0000fdbb) volume_small_pane_srt_g4_ParamLimits

0x0a39,	// (0x0000fdbb) volume_small_pane_srt_g4

0x0a4a,	// (0x0000fdcc) volume_small_pane_srt_g5_ParamLimits

0x0a4a,	// (0x0000fdcc) volume_small_pane_srt_g5

0x0a5b,	// (0x0000fddd) volume_small_pane_srt_g6_ParamLimits

0x0a5b,	// (0x0000fddd) volume_small_pane_srt_g6

0x0a6c,	// (0x0000fdee) volume_small_pane_srt_g7_ParamLimits

0x0a6c,	// (0x0000fdee) volume_small_pane_srt_g7

0x0a7d,	// (0x0000fdff) volume_small_pane_srt_g8_ParamLimits

0x0a7d,	// (0x0000fdff) volume_small_pane_srt_g8

0x0a8e,	// (0x0000fe10) volume_small_pane_srt_g9_ParamLimits

0x0a8e,	// (0x0000fe10) volume_small_pane_srt_g9

0x0a9f,	// (0x0000fe21) volume_small_pane_srt_g10_ParamLimits

0x0a9f,	// (0x0000fe21) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001eada) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001eada) volume_small_pane_srt_g

0x2bbc,	// (0x00011f3e) query_popup_data_pane_cp2

0x66a1,	// (0x00015a23) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x66a1,	// (0x00015a23) navi_navi_icon_text_pane_srt_t1

0x56a2,	// (0x00014a24) navi_tabs_2_long_pane_srt

0x56a2,	// (0x00014a24) navi_tabs_2_pane_srt

0x56a2,	// (0x00014a24) navi_tabs_3_long_pane_srt

0x56a2,	// (0x00014a24) navi_tabs_3_pane_srt

0x56a2,	// (0x00014a24) navi_tabs_4_pane_srt

0x1644,	// (0x000109c6) tabs_2_active_pane_srt_ParamLimits

0x1644,	// (0x000109c6) tabs_2_active_pane_srt

0x1654,	// (0x000109d6) tabs_2_passive_pane_srt_ParamLimits

0x1654,	// (0x000109d6) tabs_2_passive_pane_srt

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp1_srt

0x666d,	// (0x000159ef) bg_passive_tab_pane_g1_cp1_srt

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp1_srt

0x6676,	// (0x000159f8) bg_passive_tab_pane_g3_cp1_srt

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp1_srt_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp1_srt

0x667f,	// (0x00015a01) tabs_2_active_pane_srt_g1

0xde65,	// (0x0001d1e7) tabs_2_active_pane_srt_t1_ParamLimits

0xde65,	// (0x0001d1e7) tabs_2_active_pane_srt_t1

0x666d,	// (0x000159ef) bg_active_tab_pane_g1_cp1_srt

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp1_srt

0x6676,	// (0x000159f8) bg_active_tab_pane_g3_cp1_srt

0x1611,	// (0x00010993) tabs_3_active_pane_srt_ParamLimits

0x1611,	// (0x00010993) tabs_3_active_pane_srt

0x1622,	// (0x000109a4) tabs_3_passive_pane_cp_srt_ParamLimits

0x1622,	// (0x000109a4) tabs_3_passive_pane_cp_srt

0x1633,	// (0x000109b5) tabs_3_passive_pane_srt_ParamLimits

0x1633,	// (0x000109b5) tabs_3_passive_pane_srt

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4e19,	// (0x0001419b) bg_passive_tab_pane_cp2_srt

0x4619,	// (0x0001399b) bg_passive_tab_pane_g1_cp2_srt

0x40a7,	// (0x00013429) bg_passive_tab_pane_g2_cp2_srt

0x4622,	// (0x000139a4) bg_passive_tab_pane_g3_cp2_srt

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp2_srt_ParamLimits

0x2a5d,	// (0x00011ddf) bg_active_tab_pane_cp2_srt

0x6653,	// (0x000159d5) tabs_3_active_pane_srt_g1

0xde4f,	// (0x0001d1d1) tabs_3_active_pane_srt_t1_ParamLimits

0xde4f,	// (0x0001d1d1) tabs_3_active_pane_srt_t1

0x4619,	// (0x0001399b) bg_active_tab_pane_g1_cp2_srt

0x40a7,	// (0x00013429) bg_active_tab_pane_g2_cp2_srt

0x4622,	// (0x000139a4) bg_active_tab_pane_g3_cp2_srt

0x15c9,	// (0x0001094b) tabs_4_active_pane_srt_ParamLimits

0x15c9,	// (0x0001094b) tabs_4_active_pane_srt

0x15db,	// (0x0001095d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15db,	// (0x0001095d) tabs_4_passive_pane_cp2_srt

0x0c0e,	// (0x0000ff90) aid_size_cell_toolbar

0x61e5,	// (0x00015567) main_idle_act_pane_ParamLimits

0x0dd9,	// (0x0001015b) popup_large_graphic_colour_window_ParamLimits

0xc204,	// (0x0001b586) popup_toolbar_window_ParamLimits

0xc204,	// (0x0001b586) popup_toolbar_window

0x63eb,	// (0x0001576d) list_single_graphic_2heading_pane_ParamLimits

0x63eb,	// (0x0001576d) list_single_graphic_2heading_pane

0x3ae0,	// (0x00012e62) aid_size_cell_apps_grid_lsc_pane

0x3af2,	// (0x00012e74) aid_size_cell_apps_grid_prt_pane

0x47b7,	// (0x00013b39) bg_wml_button_pane_cp1_ParamLimits

0x47b7,	// (0x00013b39) bg_wml_button_pane_cp1

0xda02,	// (0x0001cd84) form_midp_field_text_pane_t1_ParamLimits

0x4e19,	// (0x0001419b) input_focus_pane_cp050_ParamLimits

0x5089,	// (0x0001440b) list_midp_form_text_pane_ParamLimits

0x5032,	// (0x000143b4) input_focus_pane_cp051_ParamLimits

0x5046,	// (0x000143c8) list_midp_choice_pane_ParamLimits

0xd9a0,	// (0x0001cd22) list_single_2graphic_pane_cp3_ParamLimits

0xd9a0,	// (0x0001cd22) list_single_2graphic_pane_cp3

0xd9b3,	// (0x0001cd35) list_single_midp_graphic_pane_ParamLimits

0xd9b3,	// (0x0001cd35) list_single_midp_graphic_pane

0x11ed,	// (0x0001056f) list_single_graphic_2heading_pane_g1_ParamLimits

0x11ed,	// (0x0001056f) list_single_graphic_2heading_pane_g1

0x11f9,	// (0x0001057b) list_single_graphic_2heading_pane_g4_ParamLimits

0x11f9,	// (0x0001057b) list_single_graphic_2heading_pane_g4

0x1205,	// (0x00010587) list_single_graphic_2heading_pane_g5_ParamLimits

0x1205,	// (0x00010587) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001eb2d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001eb2d) list_single_graphic_2heading_pane_g

0x1211,	// (0x00010593) list_single_graphic_2heading_pane_t1_ParamLimits

0x1211,	// (0x00010593) list_single_graphic_2heading_pane_t1

0x1225,	// (0x000105a7) list_single_graphic_2heading_pane_t2_ParamLimits

0x1225,	// (0x000105a7) list_single_graphic_2heading_pane_t2

0x1241,	// (0x000105c3) list_single_graphic_2heading_pane_t3_ParamLimits

0x1241,	// (0x000105c3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001eb34) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001eb34) list_single_graphic_2heading_pane_t

0x4c07,	// (0x00013f89) bg_popup_sub_pane_cp2

0x4c31,	// (0x00013fb3) grid_toobar_pane

0x1259,	// (0x000105db) cell_toolbar_pane_ParamLimits

0x1259,	// (0x000105db) cell_toolbar_pane

0x4c9b,	// (0x0001401d) cell_toolbar_pane_g1_ParamLimits

0x4c9b,	// (0x0001401d) cell_toolbar_pane_g1

0x4caf,	// (0x00014031) cell_toolbar_pane_g2_ParamLimits

0x4caf,	// (0x00014031) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eb42) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eb42) cell_toolbar_pane_g

0x4cd1,	// (0x00014053) grid_highlight_pane_cp2_ParamLimits

0x4cd1,	// (0x00014053) grid_highlight_pane_cp2

0x4ceb,	// (0x0001406d) toolbar_button_pane

0x4cf7,	// (0x00014079) toolbar_button_pane_g1

0x4cff,	// (0x00014081) toolbar_button_pane_g2

0x4d07,	// (0x00014089) toolbar_button_pane_g3

0x4d0f,	// (0x00014091) toolbar_button_pane_g4

0x4d17,	// (0x00014099) toolbar_button_pane_g5

0x4d1f,	// (0x000140a1) toolbar_button_pane_g6

0x4d27,	// (0x000140a9) toolbar_button_pane_g7

0x4d2f,	// (0x000140b1) toolbar_button_pane_g8

0x4d37,	// (0x000140b9) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eb47) toolbar_button_pane_g

0x1291,	// (0x00010613) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1291,	// (0x00010613) list_single_2graphic_pane_g1_cp3

0xc25c,	// (0x0001b5de) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc25c,	// (0x0001b5de) list_single_2graphic_pane_g2_cp3

0x12ae,	// (0x00010630) list_single_2graphic_pane_g3_cp3

0x12b6,	// (0x00010638) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12b6,	// (0x00010638) list_single_2graphic_pane_g4_cp3

0x12c2,	// (0x00010644) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12c2,	// (0x00010644) list_single_2graphic_pane_t1_cp3

0x12de,	// (0x00010660) list_single_midp_graphic_pane_g2_ParamLimits

0x12de,	// (0x00010660) list_single_midp_graphic_pane_g2

0x0c16,	// (0x0000ff98) aid_zoom_text_primary

0x0c1e,	// (0x0000ffa0) aid_zoom_text_secondary

0xd4c3,	// (0x0001c845) status_small_pane_g7_ParamLimits

0xd4c3,	// (0x0001c845) status_small_pane_g7

0xd4e6,	// (0x0001c868) status_small_pane_t1_ParamLimits

0xc8e7,	// (0x0001bc69) title_pane_g2

0x0003,

0xf54e,	// (0x0001e8d0) title_pane_g

0xcb5f,	// (0x0001bee1) aid_size_cell_colour_1_pane_ParamLimits

0xcb5f,	// (0x0001bee1) aid_size_cell_colour_1_pane

0xcb73,	// (0x0001bef5) aid_size_cell_colour_2_pane_ParamLimits

0xcb73,	// (0x0001bef5) aid_size_cell_colour_2_pane

0xcb87,	// (0x0001bf09) aid_size_cell_colour_3_pane_ParamLimits

0xcb87,	// (0x0001bf09) aid_size_cell_colour_3_pane

0xcb9b,	// (0x0001bf1d) aid_size_cell_colour_4_pane_ParamLimits

0xcb9b,	// (0x0001bf1d) aid_size_cell_colour_4_pane

0x0664,	// (0x0000f9e6) title_pane_stacon_g1_ParamLimits

0x0664,	// (0x0000f9e6) title_pane_stacon_g1

0x547d,	// (0x000147ff) popup_note_wait_window_g3_ParamLimits

0x547d,	// (0x000147ff) popup_note_wait_window_g3

0x54f3,	// (0x00014875) popup_note_wait_window_t5_ParamLimits

0x54f3,	// (0x00014875) popup_note_wait_window_t5

0x26e8,	// (0x00011a6a) main_feb_china_hwr_fs_writing_pane

0xbc0c,	// (0x0001af8e) popup_feb_china_hwr_fs_window_ParamLimits

0xbc0c,	// (0x0001af8e) popup_feb_china_hwr_fs_window

0xc26d,	// (0x0001b5ef) aid_size_cell_hwr_fs_ParamLimits

0xc26d,	// (0x0001b5ef) aid_size_cell_hwr_fs

0x4e19,	// (0x0001419b) bg_popup_sub_pane_cp3_ParamLimits

0x4e19,	// (0x0001419b) bg_popup_sub_pane_cp3

0xc282,	// (0x0001b604) grid_hwr_fs_pane_ParamLimits

0xc282,	// (0x0001b604) grid_hwr_fs_pane

0x132d,	// (0x000106af) linegrid_hwr_fs_pane_ParamLimits

0x132d,	// (0x000106af) linegrid_hwr_fs_pane

0xc29a,	// (0x0001b61c) cell_hwr_fs_pane_ParamLimits

0xc29a,	// (0x0001b61c) cell_hwr_fs_pane

0x4e25,	// (0x000141a7) linegrid_hwr_fs_pane_g1_ParamLimits

0x4e25,	// (0x000141a7) linegrid_hwr_fs_pane_g1

0xd974,	// (0x0001ccf6) linegrid_hwr_fs_pane_g2_ParamLimits

0xd974,	// (0x0001ccf6) linegrid_hwr_fs_pane_g2

0x4e43,	// (0x000141c5) linegrid_hwr_fs_pane_g3_ParamLimits

0x4e43,	// (0x000141c5) linegrid_hwr_fs_pane_g3

0x135f,	// (0x000106e1) linegrid_hwr_fs_pane_g4_ParamLimits

0x135f,	// (0x000106e1) linegrid_hwr_fs_pane_g4

0x1379,	// (0x000106fb) linegrid_hwr_fs_pane_g5_ParamLimits

0x1379,	// (0x000106fb) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001eb6d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001eb6d) linegrid_hwr_fs_pane_g

0x4e4f,	// (0x000141d1) cell_hwr_fs_pane_g1_ParamLimits

0x4e4f,	// (0x000141d1) cell_hwr_fs_pane_g1

0x4b3e,	// (0x00013ec0) cell_hwr_fs_pane_g2_ParamLimits

0x4b3e,	// (0x00013ec0) cell_hwr_fs_pane_g2

0xd986,	// (0x0001cd08) cell_hwr_fs_pane_g3_ParamLimits

0xd986,	// (0x0001cd08) cell_hwr_fs_pane_g3

0xd993,	// (0x0001cd15) cell_hwr_fs_pane_g4_ParamLimits

0xd993,	// (0x0001cd15) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001eb78) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001eb78) cell_hwr_fs_pane_g

0xc2c0,	// (0x0001b642) cell_hwr_fs_pane_t1

0x26e8,	// (0x00011a6a) grid_highlight_pane_cp6

0x26e8,	// (0x00011a6a) main_idle_act2_pane

0x3897,	// (0x00012c19) aid_inside_area_popup_secondary

0xda73,	// (0x0001cdf5) aid_inside_area_window_primary_ParamLimits

0xda73,	// (0x0001cdf5) aid_inside_area_window_primary

0x67ba,	// (0x00015b3c) ai2_news_ticker_pane

0x67c2,	// (0x00015b44) aid_size_cell_ai1_link_ParamLimits

0x67c2,	// (0x00015b44) aid_size_cell_ai1_link

0xde7b,	// (0x0001d1fd) popup_ai2_data_window_ParamLimits

0xde7b,	// (0x0001d1fd) popup_ai2_data_window

0x67f2,	// (0x00015b74) popup_ai2_link_window_ParamLimits

0x67f2,	// (0x00015b74) popup_ai2_link_window

0x4e19,	// (0x0001419b) bg_popup_sub_pane_cp4_ParamLimits

0x4e19,	// (0x0001419b) bg_popup_sub_pane_cp4

0x6806,	// (0x00015b88) grid_ai2_link_pane_ParamLimits

0x6806,	// (0x00015b88) grid_ai2_link_pane

0x681d,	// (0x00015b9f) popup_ai2_link_window_g1_ParamLimits

0x681d,	// (0x00015b9f) popup_ai2_link_window_g1

0x6829,	// (0x00015bab) popup_ai2_link_window_g2_ParamLimits

0x6829,	// (0x00015bab) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001ed4b) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001ed4b) popup_ai2_link_window_g

0x6838,	// (0x00015bba) ai2_mp_button_pane

0x6840,	// (0x00015bc2) ai2_mp_volume_pane

0x5032,	// (0x000143b4) bg_popup_sub_pane_cp5_ParamLimits

0x5032,	// (0x000143b4) bg_popup_sub_pane_cp5

0x6848,	// (0x00015bca) heading_ai2_gene_pane_ParamLimits

0x6848,	// (0x00015bca) heading_ai2_gene_pane

0x6854,	// (0x00015bd6) list_ai2_gene_pane_ParamLimits

0x6854,	// (0x00015bd6) list_ai2_gene_pane

0x689c,	// (0x00015c1e) cell_ai2_link_pane_ParamLimits

0x689c,	// (0x00015c1e) cell_ai2_link_pane

0x68b2,	// (0x00015c34) cell_ai2_link_pane_g1

0x26e8,	// (0x00011a6a) grid_highlight_pane_cp7

0x1681,	// (0x00010a03) ai2_mp_volume_pane_g1

0x6982,	// (0x00015d04) ai2_mp_volume_pane_g2

0xdea5,	// (0x0001d227) list_ai2_gene_pane_t1

0x698a,	// (0x00015d0c) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001ed64) ai2_mp_volume_pane_g

0x1689,	// (0x00010a0b) volume_small_pane_cp3

0x6992,	// (0x00015d14) aid_size_cell_ai2_button

0x699a,	// (0x00015d1c) grid_ai2_button_pane

0x69a3,	// (0x00015d25) cell_ai2_button_pane_ParamLimits

0x69a3,	// (0x00015d25) cell_ai2_button_pane

0x26de,	// (0x00011a60) cell_ai2_button_pane_g1

0x26e8,	// (0x00011a6a) grid_highlight_pane_cp8

0x6942,	// (0x00015cc4) ai2_gene_pane_t1_ParamLimits

0x6942,	// (0x00015cc4) ai2_gene_pane_t1

0xbb86,	// (0x0001af08) aid_height_parent_landscape

0xdbcd,	// (0x0001cf4f) aid_height_set_list

0x61e5,	// (0x00015567) aid_size_parent

0xde23,	// (0x0001d1a5) aid_size_cell_graphic_pane_ParamLimits

0x6864,	// (0x00015be6) popup_ai2_data_window_g1_ParamLimits

0x6864,	// (0x00015be6) popup_ai2_data_window_g1

0x6870,	// (0x00015bf2) ai2_news_ticker_pane_g1

0x6878,	// (0x00015bfa) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001ed50) ai2_news_ticker_pane_g

0x6880,	// (0x00015c02) ai2_news_ticker_pane_t1

0x688e,	// (0x00015c10) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001ed55) ai2_news_ticker_pane_t

0x68bb,	// (0x00015c3d) heading_ai2_gene_pane_g1

0x68c3,	// (0x00015c45) heading_ai2_gene_pane_t1_ParamLimits

0x68c3,	// (0x00015c45) heading_ai2_gene_pane_t1

0x68d8,	// (0x00015c5a) list_highlight_pane_cp6

0xde8f,	// (0x0001d211) ai2_gene_pane_ParamLimits

0xde8f,	// (0x0001d211) ai2_gene_pane

0xdeb3,	// (0x0001d235) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001ed5a) list_ai2_gene_pane_t

0x6913,	// (0x00015c95) list_highlight_pane_cp8_ParamLimits

0x6913,	// (0x00015c95) list_highlight_pane_cp8

0x6924,	// (0x00015ca6) ai2_gene_pane_g1_ParamLimits

0x6924,	// (0x00015ca6) ai2_gene_pane_g1

0x6936,	// (0x00015cb8) ai2_gene_pane_g2_ParamLimits

0x6936,	// (0x00015cb8) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001ed5f) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001ed5f) ai2_gene_pane_g

0x2fe7,	// (0x00012369) scroll_pane_cp12

0xbb43,	// (0x0001aec5) control_pane_t3_ParamLimits

0xbb43,	// (0x0001aec5) control_pane_t3

0xd4d7,	// (0x0001c859) status_small_pane_g8_ParamLimits

0xd4d7,	// (0x0001c859) status_small_pane_g8

0xbca1,	// (0x0001b023) popup_find_window_ParamLimits

0xbf2e,	// (0x0001b2b0) popup_note_image_window_ParamLimits

0x4c6d,	// (0x00013fef) list_double2_graphic_pane_vc_g1_ParamLimits

0x4c6d,	// (0x00013fef) list_double2_graphic_pane_vc_g1

0x439e,	// (0x00013720) list_double2_graphic_pane_vc_g2_ParamLimits

0x439e,	// (0x00013720) list_double2_graphic_pane_vc_g2

0x4c79,	// (0x00013ffb) list_double2_graphic_pane_vc_g3_ParamLimits

0x4c79,	// (0x00013ffb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eb3b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eb3b) list_double2_graphic_pane_vc_g

0x4c85,	// (0x00014007) list_double2_graphic_pane_vc_t1_ParamLimits

0x4c85,	// (0x00014007) list_double2_graphic_pane_vc_t1

0x439e,	// (0x00013720) list_single_heading_pane_vc_g1_ParamLimits

0x439e,	// (0x00013720) list_single_heading_pane_vc_g1

0x4c79,	// (0x00013ffb) list_single_heading_pane_vc_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_heading_pane_vc_g

0x4d3f,	// (0x000140c1) list_single_heading_pane_vc_t1_ParamLimits

0x4d3f,	// (0x000140c1) list_single_heading_pane_vc_t1

0x4d55,	// (0x000140d7) list_single_heading_pane_vc_t2_ParamLimits

0x4d55,	// (0x000140d7) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eb5c) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eb5c) list_single_heading_pane_vc_t

0x4d67,	// (0x000140e9) list_setting_number_pane_vc_g1_ParamLimits

0x4d67,	// (0x000140e9) list_setting_number_pane_vc_g1

0x4d73,	// (0x000140f5) list_setting_number_pane_vc_g2_ParamLimits

0x4d73,	// (0x000140f5) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb61) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb61) list_setting_number_pane_vc_g

0x4d7f,	// (0x00014101) list_setting_number_pane_vc_t1_ParamLimits

0x4d7f,	// (0x00014101) list_setting_number_pane_vc_t1

0x4d93,	// (0x00014115) list_setting_number_pane_vc_t2_ParamLimits

0x4d93,	// (0x00014115) list_setting_number_pane_vc_t2

0x4daf,	// (0x00014131) list_setting_number_pane_vc_t3_ParamLimits

0x4daf,	// (0x00014131) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001eb66) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001eb66) list_setting_number_pane_vc_t

0x4ddd,	// (0x0001415f) set_value_pane_vc_ParamLimits

0x4ddd,	// (0x0001415f) set_value_pane_vc

0x63eb,	// (0x0001576d) list_double2_graphic_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double2_graphic_pane_vc

0x63eb,	// (0x0001576d) list_double2_large_graphic_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double2_large_graphic_pane_vc

0x63eb,	// (0x0001576d) list_double2_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double2_pane_vc

0x63eb,	// (0x0001576d) list_double_graphic_heading_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_graphic_heading_pane_vc

0x63eb,	// (0x0001576d) list_double_graphic_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_graphic_pane_vc

0x63eb,	// (0x0001576d) list_double_heading_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_heading_pane_vc

0x63fd,	// (0x0001577f) list_double_large_graphic_pane_vc_ParamLimits

0x63fd,	// (0x0001577f) list_double_large_graphic_pane_vc

0x63eb,	// (0x0001576d) list_double_number_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_number_pane_vc

0x63eb,	// (0x0001576d) list_double_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_pane_vc

0x63eb,	// (0x0001576d) list_double_time_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_double_time_pane_vc

0x63eb,	// (0x0001576d) list_setting_number_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_setting_number_pane_vc

0x63eb,	// (0x0001576d) list_setting_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_setting_pane_vc

0x63eb,	// (0x0001576d) list_single_graphic_heading_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_single_graphic_heading_pane_vc

0x63eb,	// (0x0001576d) list_single_heading_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_single_heading_pane_vc

0x63eb,	// (0x0001576d) list_single_number_heading_pane_vc_ParamLimits

0x63eb,	// (0x0001576d) list_single_number_heading_pane_vc

0x4c6d,	// (0x00013fef) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4c6d,	// (0x00013fef) list_double_graphic_heading_pane_vc_g1

0x69d7,	// (0x00015d59) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x69d7,	// (0x00015d59) list_double_graphic_heading_pane_vc_g2

0x69e3,	// (0x00015d65) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69e3,	// (0x00015d65) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001ed6b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001ed6b) list_double_graphic_heading_pane_vc_g

0x69ef,	// (0x00015d71) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x69ef,	// (0x00015d71) list_double_graphic_heading_pane_vc_t1

0x6a0b,	// (0x00015d8d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6a0b,	// (0x00015d8d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001ed72) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001ed72) list_double_graphic_heading_pane_vc_t

0x4d67,	// (0x000140e9) list_setting_pane_vc_g1_ParamLimits

0x4d67,	// (0x000140e9) list_setting_pane_vc_g1

0x4d73,	// (0x000140f5) list_setting_pane_vc_g2_ParamLimits

0x4d73,	// (0x000140f5) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb61) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb61) list_setting_pane_vc_g

0x6c36,	// (0x00015fb8) list_setting_pane_vc_t1_ParamLimits

0x6c36,	// (0x00015fb8) list_setting_pane_vc_t1

0x6c52,	// (0x00015fd4) list_setting_pane_vc_t2_ParamLimits

0x6c52,	// (0x00015fd4) list_setting_pane_vc_t2

0x0001,

0xfa1e,	// (0x0001eda0) list_setting_pane_vc_t_ParamLimits

0xfa1e,	// (0x0001eda0) list_setting_pane_vc_t

0x4ddd,	// (0x0001415f) set_value_pane_cp_vc_ParamLimits

0x4ddd,	// (0x0001415f) set_value_pane_cp_vc

0x439e,	// (0x00013720) list_single_number_heading_pane_vc_g1_ParamLimits

0x439e,	// (0x00013720) list_single_number_heading_pane_vc_g1

0x4c79,	// (0x00013ffb) list_single_number_heading_pane_vc_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_single_number_heading_pane_vc_g

0x6c6e,	// (0x00015ff0) list_single_number_heading_pane_vc_t1_ParamLimits

0x6c6e,	// (0x00015ff0) list_single_number_heading_pane_vc_t1

0x6c84,	// (0x00016006) list_single_number_heading_pane_vc_t2_ParamLimits

0x6c84,	// (0x00016006) list_single_number_heading_pane_vc_t2

0x6c96,	// (0x00016018) list_single_number_heading_pane_vc_t3_ParamLimits

0x6c96,	// (0x00016018) list_single_number_heading_pane_vc_t3

0x0002,

0xfa23,	// (0x0001eda5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa23,	// (0x0001eda5) list_single_number_heading_pane_vc_t

0x4c6d,	// (0x00013fef) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4c6d,	// (0x00013fef) list_single_graphic_heading_pane_vc_g1

0x439e,	// (0x00013720) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x439e,	// (0x00013720) list_single_graphic_heading_pane_vc_g4

0x4c79,	// (0x00013ffb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4c79,	// (0x00013ffb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eb3b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eb3b) list_single_graphic_heading_pane_vc_g

0x6ca8,	// (0x0001602a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6ca8,	// (0x0001602a) list_single_graphic_heading_pane_vc_t1

0x6cbe,	// (0x00016040) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6cbe,	// (0x00016040) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2a,	// (0x0001edac) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2a,	// (0x0001edac) list_single_graphic_heading_pane_vc_t

0x439e,	// (0x00013720) list_double2_pane_vc_g1_ParamLimits

0x439e,	// (0x00013720) list_double2_pane_vc_g1

0x4c79,	// (0x00013ffb) list_double2_pane_vc_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_double2_pane_vc_g

0x6cd0,	// (0x00016052) list_double2_pane_vc_t1_ParamLimits

0x6cd0,	// (0x00016052) list_double2_pane_vc_t1

0x6ce6,	// (0x00016068) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6ce6,	// (0x00016068) list_double2_large_graphic_pane_vc_g1

0x439e,	// (0x00013720) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x439e,	// (0x00013720) list_double2_large_graphic_pane_vc_g2

0x4c79,	// (0x00013ffb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4c79,	// (0x00013ffb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001e967) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001e967) list_double2_large_graphic_pane_vc_g

0x6cf2,	// (0x00016074) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6cf2,	// (0x00016074) list_double2_large_graphic_pane_vc_t1

0x6d08,	// (0x0001608a) list_double_time_pane_vc_g1_ParamLimits

0x6d08,	// (0x0001608a) list_double_time_pane_vc_g1

0x6d14,	// (0x00016096) list_double_time_pane_vc_g2_ParamLimits

0x6d14,	// (0x00016096) list_double_time_pane_vc_g2

0x0001,

0xfa2f,	// (0x0001edb1) list_double_time_pane_vc_g_ParamLimits

0xfa2f,	// (0x0001edb1) list_double_time_pane_vc_g

0x6d20,	// (0x000160a2) list_double_time_pane_vc_t1_ParamLimits

0x6d20,	// (0x000160a2) list_double_time_pane_vc_t1

0x6d44,	// (0x000160c6) list_double_time_pane_vc_t2_ParamLimits

0x6d44,	// (0x000160c6) list_double_time_pane_vc_t2

0x6d73,	// (0x000160f5) list_double_time_pane_vc_t3_ParamLimits

0x6d73,	// (0x000160f5) list_double_time_pane_vc_t3

0x6d85,	// (0x00016107) list_double_time_pane_vc_t4_ParamLimits

0x6d85,	// (0x00016107) list_double_time_pane_vc_t4

0x0003,

0xfa34,	// (0x0001edb6) list_double_time_pane_vc_t_ParamLimits

0xfa34,	// (0x0001edb6) list_double_time_pane_vc_t

0x439e,	// (0x00013720) list_double_pane_vc_g1_ParamLimits

0x439e,	// (0x00013720) list_double_pane_vc_g1

0x4c79,	// (0x00013ffb) list_double_pane_vc_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_double_pane_vc_g

0x6d99,	// (0x0001611b) list_double_pane_vc_t1_ParamLimits

0x6d99,	// (0x0001611b) list_double_pane_vc_t1

0x6dad,	// (0x0001612f) list_double_pane_vc_t2_ParamLimits

0x6dad,	// (0x0001612f) list_double_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001edbf) list_double_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001edbf) list_double_pane_vc_t

0x439e,	// (0x00013720) list_double_number_pane_vc_g1_ParamLimits

0x439e,	// (0x00013720) list_double_number_pane_vc_g1

0x4c79,	// (0x00013ffb) list_double_number_pane_vc_g2_ParamLimits

0x4c79,	// (0x00013ffb) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e94a) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e94a) list_double_number_pane_vc_g

0x6dc5,	// (0x00016147) list_double_number_pane_vc_t1_ParamLimits

0x6dc5,	// (0x00016147) list_double_number_pane_vc_t1

0x6dd7,	// (0x00016159) list_double_number_pane_vc_t2_ParamLimits

0x6dd7,	// (0x00016159) list_double_number_pane_vc_t2

0x6deb,	// (0x0001616d) list_double_number_pane_vc_t3_ParamLimits

0x6deb,	// (0x0001616d) list_double_number_pane_vc_t3

0x0002,

0xfa42,	// (0x0001edc4) list_double_number_pane_vc_t_ParamLimits

0xfa42,	// (0x0001edc4) list_double_number_pane_vc_t

0x6e03,	// (0x00016185) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6e03,	// (0x00016185) list_double_large_graphic_pane_vc_g1

0x6e25,	// (0x000161a7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6e25,	// (0x000161a7) list_double_large_graphic_pane_vc_g2

0x6e39,	// (0x000161bb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6e39,	// (0x000161bb) list_double_large_graphic_pane_vc_g3

0x6e48,	// (0x000161ca) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6e48,	// (0x000161ca) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa49,	// (0x0001edcb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa49,	// (0x0001edcb) list_double_large_graphic_pane_vc_g

0x6e54,	// (0x000161d6) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6e54,	// (0x000161d6) list_double_large_graphic_pane_vc_t1

0x6e70,	// (0x000161f2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6e70,	// (0x000161f2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa52,	// (0x0001edd4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa52,	// (0x0001edd4) list_double_large_graphic_pane_vc_t

0x69d7,	// (0x00015d59) list_double_heading_pane_vc_g1_ParamLimits

0x69d7,	// (0x00015d59) list_double_heading_pane_vc_g1

0x69e3,	// (0x00015d65) list_double_heading_pane_vc_g2_ParamLimits

0x69e3,	// (0x00015d65) list_double_heading_pane_vc_g2

0x0001,

0xfa57,	// (0x0001edd9) list_double_heading_pane_vc_g_ParamLimits

0xfa57,	// (0x0001edd9) list_double_heading_pane_vc_g

0x6e92,	// (0x00016214) list_double_heading_pane_vc_t1_ParamLimits

0x6e92,	// (0x00016214) list_double_heading_pane_vc_t1

0x6ea6,	// (0x00016228) list_double_heading_pane_vc_t2_ParamLimits

0x6ea6,	// (0x00016228) list_double_heading_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001edde) list_double_heading_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001edde) list_double_heading_pane_vc_t

0x6ebe,	// (0x00016240) list_double_graphic_pane_vc_g1_ParamLimits

0x6ebe,	// (0x00016240) list_double_graphic_pane_vc_g1

0x6eca,	// (0x0001624c) list_double_graphic_pane_vc_g2_ParamLimits

0x6eca,	// (0x0001624c) list_double_graphic_pane_vc_g2

0x439e,	// (0x00013720) list_double_graphic_pane_vc_g3_ParamLimits

0x439e,	// (0x00013720) list_double_graphic_pane_vc_g3

0x0003,

0xfa61,	// (0x0001ede3) list_double_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0001ede3) list_double_graphic_pane_vc_g

0x6ee7,	// (0x00016269) list_double_graphic_pane_vc_t1_ParamLimits

0x6ee7,	// (0x00016269) list_double_graphic_pane_vc_t1

0x6f11,	// (0x00016293) list_double_graphic_pane_vc_t2_ParamLimits

0x6f11,	// (0x00016293) list_double_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0001edec) list_double_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001edec) list_double_graphic_pane_vc_t

0x01b7,	// (0x0000f539) aid_size_cell_fastswap

0xb806,	// (0x0001ab88) aid_size_cell_touch_ParamLimits

0xb806,	// (0x0001ab88) aid_size_cell_touch

0x0424,	// (0x0000f7a6) popup_fast_swap_wide_window_ParamLimits

0x0424,	// (0x0000f7a6) popup_fast_swap_wide_window

0xb9b6,	// (0x0001ad38) touch_pane_ParamLimits

0xb9b6,	// (0x0001ad38) touch_pane

0x34e6,	// (0x00012868) button_value_adjust_pane_cp2

0x34ee,	// (0x00012870) button_value_adjust_pane_cp4

0x3510,	// (0x00012892) form_field_data_pane_cp2

0xd00c,	// (0x0001c38e) form_field_data_wide_pane_cp2

0x3bad,	// (0x00012f2f) bg_scroll_pane_ParamLimits

0x07c6,	// (0x0000fb48) scroll_handle_pane_ParamLimits

0x07da,	// (0x0000fb5c) scroll_sc2_down_pane_ParamLimits

0x07da,	// (0x0000fb5c) scroll_sc2_down_pane

0x3bde,	// (0x00012f60) scroll_sc2_up_pane_ParamLimits

0x3bde,	// (0x00012f60) scroll_sc2_up_pane

0xdfd3,	// (0x0001d355) grid_wheel_folder_pane_g1_ParamLimits

0xdfd3,	// (0x0001d355) grid_wheel_folder_pane_g1

0x099f,	// (0x0000fd21) clock_nsta_pane_cp2_ParamLimits

0x099f,	// (0x0000fd21) clock_nsta_pane_cp2

0xd3c6,	// (0x0001c748) listscroll_midp_pane_ParamLimits

0xd3d2,	// (0x0001c754) midp_canvas_pane

0x4761,	// (0x00013ae3) nsta_clock_indic_pane

0x479d,	// (0x00013b1f) listscroll_form_pane_vc

0x47a5,	// (0x00013b27) listscroll_set_pane_vc_ParamLimits

0x47a5,	// (0x00013b27) listscroll_set_pane_vc

0xd67f,	// (0x0001ca01) clock_nsta_pane

0xd6a9,	// (0x0001ca2b) indicator_nsta_pane

0x4c07,	// (0x00013f89) bg_popup_sub_pane_cp2_ParamLimits

0x4c1b,	// (0x00013f9d) find_pane_cp2_ParamLimits

0x4c1b,	// (0x00013f9d) find_pane_cp2

0x4c31,	// (0x00013fb3) grid_toobar_pane_ParamLimits

0x4ded,	// (0x0001416f) list_form_gen_pane_vc_ParamLimits

0x4ded,	// (0x0001416f) list_form_gen_pane_vc

0x4e03,	// (0x00014185) scroll_pane_cp8_vc_ParamLimits

0x4e03,	// (0x00014185) scroll_pane_cp8_vc

0x4e7f,	// (0x00014201) data_form_wide_pane_vc_ParamLimits

0x4e7f,	// (0x00014201) data_form_wide_pane_vc

0x4e8b,	// (0x0001420d) form_field_data_wide_pane_vc_g1

0x4e93,	// (0x00014215) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e93,	// (0x00014215) form_field_data_wide_pane_vc_t1

0x35cc,	// (0x0001294e) input_focus_pane_cp6_vc_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_cp6_vc

0x5210,	// (0x00014592) list_midp_pane_ParamLimits

0x6647,	// (0x000159c9) scroll_pane_cp16_ParamLimits

0x6647,	// (0x000159c9) scroll_pane_cp16

0x5252,	// (0x000145d4) button_value_adjust_pane_ParamLimits

0x5252,	// (0x000145d4) button_value_adjust_pane

0xdbde,	// (0x0001cf60) button_value_adjust_pane_cp6_ParamLimits

0xdbde,	// (0x0001cf60) button_value_adjust_pane_cp6

0xdcf8,	// (0x0001d07a) settings_code_pane_cp_ParamLimits

0xdcf8,	// (0x0001d07a) settings_code_pane_cp

0x26de,	// (0x00011a60) cell_touch_pane_g1

0x26de,	// (0x00011a60) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ea80) cell_touch_pane_g

0xdec1,	// (0x0001d243) cell_touch_pane_cp_ParamLimits

0xdec1,	// (0x0001d243) cell_touch_pane_cp

0xdedd,	// (0x0001d25f) cell_touch_pane_ParamLimits

0xdedd,	// (0x0001d25f) cell_touch_pane

0x26de,	// (0x00011a60) scroll_sc2_down_pane_g1

0x26de,	// (0x00011a60) scroll_sc2_up_pane_g1

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp4_vc

0x6a29,	// (0x00015dab) list_set_graphic_pane_vc_g1_ParamLimits

0x6a29,	// (0x00015dab) list_set_graphic_pane_vc_g1

0x6a35,	// (0x00015db7) list_set_graphic_pane_vc_g2_ParamLimits

0x6a35,	// (0x00015db7) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001ed77) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001ed77) list_set_graphic_pane_vc_g

0x6a41,	// (0x00015dc3) text_primary_small_cp13_vc_ParamLimits

0x6a41,	// (0x00015dc3) text_primary_small_cp13_vc

0x6a59,	// (0x00015ddb) list_set_graphic_pane_vc_ParamLimits

0x6a59,	// (0x00015ddb) list_set_graphic_pane_vc

0x26e8,	// (0x00011a6a) input_focus_pane_cp2_vc

0x26de,	// (0x00011a60) setting_code_pane_vc_g1

0x2813,	// (0x00011b95) setting_code_pane_vc_t1

0x6a6b,	// (0x00015ded) set_text_pane_vc_t1_ParamLimits

0x6a6b,	// (0x00015ded) set_text_pane_vc_t1

0x26e8,	// (0x00011a6a) input_focus_pane_cp1_vc

0x6a87,	// (0x00015e09) list_set_text_pane_vc

0x26de,	// (0x00011a60) setting_text_pane_vc_g1

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp2_vc

0x280a,	// (0x00011b8c) setting_slider_graphic_pane_vc_g1

0x6a91,	// (0x00015e13) setting_slider_graphic_pane_vc_t1

0x6aa1,	// (0x00015e23) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001ed7c) setting_slider_graphic_pane_vc_t

0x6ab1,	// (0x00015e33) slider_set_pane_cp_vc

0x6ab9,	// (0x00015e3b) slider_set_pane_vc_g1

0x6ac2,	// (0x00015e44) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001ed81) slider_set_pane_vc_g

0x36ef,	// (0x00012a71) set_opt_bg_pane_g1_copy1

0x36f7,	// (0x00012a79) set_opt_bg_pane_g2_copy1

0x6aee,	// (0x00015e70) set_opt_bg_pane_g3_copy1

0x3707,	// (0x00012a89) set_opt_bg_pane_g4_copy1

0x370f,	// (0x00012a91) set_opt_bg_pane_g5_copy1

0x3717,	// (0x00012a99) set_opt_bg_pane_g6_copy1

0x6af8,	// (0x00015e7a) set_opt_bg_pane_g7_copy1

0x6b00,	// (0x00015e82) set_opt_bg_pane_g8_copy1

0x6b0a,	// (0x00015e8c) set_opt_bg_pane_g9_copy1

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp_vc

0x6b14,	// (0x00015e96) setting_slider_pane_vc_t1

0x6b23,	// (0x00015ea5) setting_slider_pane_vc_t2

0x6b33,	// (0x00015eb5) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001ed90) setting_slider_pane_vc_t

0x6b43,	// (0x00015ec5) slider_set_pane_vc

0x139d,	// (0x0001071f) volume_set_pane_vc_g1

0x13a6,	// (0x00010728) volume_set_pane_vc_g2

0x13af,	// (0x00010731) volume_set_pane_vc_g3

0x13b8,	// (0x0001073a) volume_set_pane_vc_g4

0x13c1,	// (0x00010743) volume_set_pane_vc_g5

0x13ca,	// (0x0001074c) volume_set_pane_vc_g6

0x13d3,	// (0x00010755) volume_set_pane_vc_g7

0x13dc,	// (0x0001075e) volume_set_pane_vc_g8

0x13e5,	// (0x00010767) volume_set_pane_vc_g9

0x13ee,	// (0x00010770) volume_set_pane_vc_g10

0x0009,

0xf8ac,	// (0x0001ec2e) volume_set_pane_vc_g

0x6b4b,	// (0x00015ecd) volume_set_pane_vc

0x6b53,	// (0x00015ed5) button_value_adjust_pane_cp1_vc

0x6b5d,	// (0x00015edf) list_highlight_pane_cp2_vc

0x6b66,	// (0x00015ee8) list_set_pane_vc_ParamLimits

0x6b66,	// (0x00015ee8) list_set_pane_vc

0x6bc4,	// (0x00015f46) main_pane_set_vc_t1_ParamLimits

0x6bc4,	// (0x00015f46) main_pane_set_vc_t1

0x6bd9,	// (0x00015f5b) main_pane_set_vc_t2_ParamLimits

0x6bd9,	// (0x00015f5b) main_pane_set_vc_t2

0x6beb,	// (0x00015f6d) main_pane_set_vc_t3_ParamLimits

0x6beb,	// (0x00015f6d) main_pane_set_vc_t3

0x6bff,	// (0x00015f81) main_pane_set_vc_t4_ParamLimits

0x6bff,	// (0x00015f81) main_pane_set_vc_t4

0x0003,

0xfa15,	// (0x0001ed97) main_pane_set_vc_t_ParamLimits

0xfa15,	// (0x0001ed97) main_pane_set_vc_t

0x6c13,	// (0x00015f95) setting_code_pane_vc_ParamLimits

0x6c13,	// (0x00015f95) setting_code_pane_vc

0x6c24,	// (0x00015fa6) setting_slider_graphic_pane_vc

0x6c24,	// (0x00015fa6) setting_slider_pane_vc

0x6c24,	// (0x00015fa6) setting_text_pane_vc

0x6c24,	// (0x00015fa6) setting_volume_pane_vc

0x6c2e,	// (0x00015fb0) scroll_pane_cp121_vc

0x34d4,	// (0x00012856) set_content_pane_vc

0x6f3b,	// (0x000162bd) button_value_adjust_pane_g1

0x6f44,	// (0x000162c6) button_value_adjust_pane_g2

0x0001,

0xfa6f,	// (0x0001edf1) button_value_adjust_pane_g

0x6f4d,	// (0x000162cf) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6f4d,	// (0x000162cf) form_field_slider_wide_pane_vc_t1

0x6f61,	// (0x000162e3) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f61,	// (0x000162e3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa74,	// (0x0001edf6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0001edf6) form_field_slider_wide_pane_vc_t

0x2a5d,	// (0x00011ddf) input_focus_pane_cp10_vc_ParamLimits

0x2a5d,	// (0x00011ddf) input_focus_pane_cp10_vc

0x6f8f,	// (0x00016311) slider_cont_pane_cp1_vc_ParamLimits

0x6f8f,	// (0x00016311) slider_cont_pane_cp1_vc

0x6fa1,	// (0x00016323) slider_form_pane_g1_cp2

0x6ac2,	// (0x00015e44) slider_form_pane_g2_cp2

0x6fce,	// (0x00016350) form_field_slider_pane_vc_t3

0x6fdc,	// (0x0001635e) form_field_slider_pane_vc_t4

0x6fea,	// (0x0001636c) slider_form_pane_vc_ParamLimits

0x6fea,	// (0x0001636c) slider_form_pane_vc

0x6ff7,	// (0x00016379) form_field_slider_pane_vc_t1_ParamLimits

0x6ff7,	// (0x00016379) form_field_slider_pane_vc_t1

0x6f61,	// (0x000162e3) form_field_slider_pane_vc_t2_ParamLimits

0x6f61,	// (0x000162e3) form_field_slider_pane_vc_t2

0x0001,

0xfa86,	// (0x0001ee08) form_field_slider_pane_vc_t_ParamLimits

0xfa86,	// (0x0001ee08) form_field_slider_pane_vc_t

0x2a5d,	// (0x00011ddf) input_focus_pane_cp9_vc_ParamLimits

0x2a5d,	// (0x00011ddf) input_focus_pane_cp9_vc

0x7013,	// (0x00016395) slider_cont_pane_vc_ParamLimits

0x7013,	// (0x00016395) slider_cont_pane_vc

0x7027,	// (0x000163a9) list_form_graphic_pane_cp_vc_ParamLimits

0x7027,	// (0x000163a9) list_form_graphic_pane_cp_vc

0x4e8b,	// (0x0001420d) form_field_popup_wide_pane_vc_g1

0x703c,	// (0x000163be) form_field_popup_wide_pane_vc_t1_ParamLimits

0x703c,	// (0x000163be) form_field_popup_wide_pane_vc_t1

0x35cc,	// (0x0001294e) input_focus_pane_cp8_vc_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_cp8_vc

0x7081,	// (0x00016403) list_form_wide_pane_vc_ParamLimits

0x7081,	// (0x00016403) list_form_wide_pane_vc

0x708d,	// (0x0001640f) list_form_graphic_pane_vc_g1

0x7095,	// (0x00016417) list_form_graphic_pane_vc_t1_ParamLimits

0x7095,	// (0x00016417) list_form_graphic_pane_vc_t1

0x27c8,	// (0x00011b4a) list_highlight_pane_cp5_vc_ParamLimits

0x27c8,	// (0x00011b4a) list_highlight_pane_cp5_vc

0x70b1,	// (0x00016433) list_form_graphic_pane_vc_ParamLimits

0x70b1,	// (0x00016433) list_form_graphic_pane_vc

0x4e8b,	// (0x0001420d) form_field_popup_pane_vc_g1

0x70c7,	// (0x00016449) form_field_popup_pane_vc_t1_ParamLimits

0x70c7,	// (0x00016449) form_field_popup_pane_vc_t1

0x35cc,	// (0x0001294e) input_focus_pane_cp7_vc_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_cp7_vc

0x70de,	// (0x00016460) list_form_pane_vc_ParamLimits

0x70de,	// (0x00016460) list_form_pane_vc

0x70ea,	// (0x0001646c) data_form_pane_vc_t1_ParamLimits

0x70ea,	// (0x0001646c) data_form_pane_vc_t1

0x36ef,	// (0x00012a71) input_focus_pane_vc_g1

0x36f7,	// (0x00012a79) input_focus_pane_vc_g2

0x36ff,	// (0x00012a81) input_focus_pane_vc_g3

0x3707,	// (0x00012a89) input_focus_pane_vc_g4

0x370f,	// (0x00012a91) input_focus_pane_vc_g5

0x3717,	// (0x00012a99) input_focus_pane_vc_g6

0x371f,	// (0x00012aa1) input_focus_pane_vc_g7

0x3727,	// (0x00012aa9) input_focus_pane_vc_g8

0x372f,	// (0x00012ab1) input_focus_pane_vc_g9

0x26de,	// (0x00011a60) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001ea09) input_focus_pane_vc_g

0x4e7f,	// (0x00014201) data_form_pane_vc_ParamLimits

0x4e7f,	// (0x00014201) data_form_pane_vc

0x4e8b,	// (0x0001420d) form_field_data_pane_vc_g1

0x7105,	// (0x00016487) form_field_data_pane_vc_t1_ParamLimits

0x7105,	// (0x00016487) form_field_data_pane_vc_t1

0x35cc,	// (0x0001294e) input_focus_pane_vc_ParamLimits

0x35cc,	// (0x0001294e) input_focus_pane_vc

0x711f,	// (0x000164a1) button_value_adjust_pane_cp3_vc

0x7127,	// (0x000164a9) button_value_adjust_pane_cp5_vc

0x712f,	// (0x000164b1) form_field_data_pane_vc_ParamLimits

0x712f,	// (0x000164b1) form_field_data_pane_vc

0x7146,	// (0x000164c8) form_field_data_pane_vc_cp2

0x714e,	// (0x000164d0) form_field_data_wide_pane_vc_ParamLimits

0x714e,	// (0x000164d0) form_field_data_wide_pane_vc

0x7164,	// (0x000164e6) form_field_data_wide_pane_vc_cp2

0x716c,	// (0x000164ee) form_field_popup_pane_vc_ParamLimits

0x716c,	// (0x000164ee) form_field_popup_pane_vc

0x7183,	// (0x00016505) form_field_popup_wide_pane_vc_ParamLimits

0x7183,	// (0x00016505) form_field_popup_wide_pane_vc

0x7199,	// (0x0001651b) form_field_slider_pane_vc_ParamLimits

0x7199,	// (0x0001651b) form_field_slider_pane_vc

0x71ac,	// (0x0001652e) form_field_slider_wide_pane_vc_ParamLimits

0x71ac,	// (0x0001652e) form_field_slider_wide_pane_vc

0xdefb,	// (0x0001d27d) grid_touch_1_pane_ParamLimits

0xdefb,	// (0x0001d27d) grid_touch_1_pane

0xdf0f,	// (0x0001d291) grid_touch_2_pane_ParamLimits

0xdf0f,	// (0x0001d291) grid_touch_2_pane

0x727a,	// (0x000165fc) touch_pane_g1_ParamLimits

0x727a,	// (0x000165fc) touch_pane_g1

0x71e3,	// (0x00016565) cell_app_pane_cp_wide_ParamLimits

0x71e3,	// (0x00016565) cell_app_pane_cp_wide

0x71f4,	// (0x00016576) grid_popup_fast_wide_pane_ParamLimits

0x71f4,	// (0x00016576) grid_popup_fast_wide_pane

0x7208,	// (0x0001658a) scroll_pane_cp19_ParamLimits

0x7208,	// (0x0001658a) scroll_pane_cp19

0x26e8,	// (0x00011a6a) bg_popup_window_pane_cp20

0x721c,	// (0x0001659e) listscroll_popup_fast_wide_pane

0x3903,	// (0x00012c85) grid_indicator_nsta_pane

0x7224,	// (0x000165a6) clock_nsta_pane_g1

0x722d,	// (0x000165af) clock_nsta_pane_t1

0xdf39,	// (0x0001d2bb) cell_indicator_nsta_pane_ParamLimits

0xdf39,	// (0x0001d2bb) cell_indicator_nsta_pane

0x727a,	// (0x000165fc) cell_indicator_nsta_pane_g1

0xdf50,	// (0x0001d2d2) cell_indicator_nsta_pane_g2

0x0001,

0xfa97,	// (0x0001ee19) cell_indicator_nsta_pane_g

0x7295,	// (0x00016617) clock_nsta_pane_cp

0x729d,	// (0x0001661f) indicator_nsta_pane_cp

0x72a5,	// (0x00016627) nsta_clock_indic_pane_g1

0x28ab,	// (0x00011c2d) grid_indicator_pane

0x3cd3,	// (0x00013055) scroll_pane_cp29

0x08ee,	// (0x0000fc70) indicator_nsta_pane_cp2_ParamLimits

0x08ee,	// (0x0000fc70) indicator_nsta_pane_cp2

0x27c8,	// (0x00011b4a) main_apps_wheel_pane

0x50d1,	// (0x00014453) form_midp_field_text_pane_ParamLimits

0x521c,	// (0x0001459e) scroll_bar_cp050_ParamLimits

0x72f5,	// (0x00016677) cell_indicator_pane_ParamLimits

0x72f5,	// (0x00016677) cell_indicator_pane

0x730c,	// (0x0001668e) cell_indicator_pane_g1

0xdf5d,	// (0x0001d2df) grid_wheel_folder_pane_ParamLimits

0xdf5d,	// (0x0001d2df) grid_wheel_folder_pane

0xdf6b,	// (0x0001d2ed) list_wheel_apps_pane_ParamLimits

0xdf6b,	// (0x0001d2ed) list_wheel_apps_pane

0xdf79,	// (0x0001d2fb) main_apps_wheel_pane_g1_ParamLimits

0xdf79,	// (0x0001d2fb) main_apps_wheel_pane_g1

0xdf85,	// (0x0001d307) main_apps_wheel_pane_g2_ParamLimits

0xdf85,	// (0x0001d307) main_apps_wheel_pane_g2

0x0001,

0xfab3,	// (0x0001ee35) main_apps_wheel_pane_g_ParamLimits

0xfab3,	// (0x0001ee35) main_apps_wheel_pane_g

0xdf93,	// (0x0001d315) main_apps_wheel_pane_t1_ParamLimits

0xdf93,	// (0x0001d315) main_apps_wheel_pane_t1

0xdfa7,	// (0x0001d329) list_wheel_apps_pane_g1

0xdfaf,	// (0x0001d331) list_wheel_apps_pane_g2

0xdfb7,	// (0x0001d339) list_wheel_apps_pane_g3

0xdfbf,	// (0x0001d341) list_wheel_apps_pane_g4

0xdfc9,	// (0x0001d34b) list_wheel_apps_pane_g5

0x0004,

0xfab8,	// (0x0001ee3a) list_wheel_apps_pane_g

0x42e5,	// (0x00013667) navi_icon_text_pane

0xd573,	// (0x0001c8f5) aid_fill_nsta

0x73d1,	// (0x00016753) navi_icon_text_pane_g1

0x73dd,	// (0x0001675f) navi_icon_text_pane_t1

0x4178,	// (0x000134fa) list_set_graphic_pane_t1_ParamLimits

0x4178,	// (0x000134fa) list_set_graphic_pane_t1

0x597f,	// (0x00014d01) popup_midp_note_alarm_window_t6_ParamLimits

0x597f,	// (0x00014d01) popup_midp_note_alarm_window_t6

0x5991,	// (0x00014d13) popup_midp_note_alarm_window_t7_ParamLimits

0x5991,	// (0x00014d13) popup_midp_note_alarm_window_t7

0x59a3,	// (0x00014d25) popup_midp_note_alarm_window_t8_ParamLimits

0x59a3,	// (0x00014d25) popup_midp_note_alarm_window_t8

0x59b5,	// (0x00014d37) popup_midp_note_alarm_window_t9_ParamLimits

0x59b5,	// (0x00014d37) popup_midp_note_alarm_window_t9

0x59c7,	// (0x00014d49) popup_midp_note_alarm_window_t10_ParamLimits

0x59c7,	// (0x00014d49) popup_midp_note_alarm_window_t10

0x59d9,	// (0x00014d5b) popup_midp_note_alarm_window_t11_ParamLimits

0x59d9,	// (0x00014d5b) popup_midp_note_alarm_window_t11

0x59eb,	// (0x00014d6d) scroll_pane_cp17_ParamLimits

0x59eb,	// (0x00014d6d) scroll_pane_cp17

0x139d,	// (0x0001071f) volume_small_pane_cp_g1

0x1692,	// (0x00010a14) volume_small_pane_cp_g2

0x169b,	// (0x00010a1d) volume_small_pane_cp_g3

0x16a4,	// (0x00010a26) volume_small_pane_cp_g4

0x16ad,	// (0x00010a2f) volume_small_pane_cp_g5

0x16b6,	// (0x00010a38) volume_small_pane_cp_g6

0x16bf,	// (0x00010a41) volume_small_pane_cp_g7

0x16c8,	// (0x00010a4a) volume_small_pane_cp_g8

0x16d1,	// (0x00010a53) volume_small_pane_cp_g9

0x16da,	// (0x00010a5c) volume_small_pane_cp_g10

0x4542,	// (0x000138c4) midp_ticker_pane_g1_ParamLimits

0x454e,	// (0x000138d0) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ead5) midp_ticker_pane_g_ParamLimits

0x455a,	// (0x000138dc) midp_ticker_pane_t1_ParamLimits

0xd597,	// (0x0001c919) aid_fill_nsta_2

0x5208,	// (0x0001458a) list_form2_midp_pane

0x639f,	// (0x00015721) midp_editing_number_pane_ParamLimits

0x63ae,	// (0x00015730) midp_ticker_pane_ParamLimits

0x73ef,	// (0x00016771) form2_midp_field_pane

0x7413,	// (0x00016795) scroll_pane_cp51

0x7433,	// (0x000167b5) form2_midp_button_pane_ParamLimits

0x7433,	// (0x000167b5) form2_midp_button_pane

0x7445,	// (0x000167c7) form2_midp_content_pane_ParamLimits

0x7445,	// (0x000167c7) form2_midp_content_pane

0x745f,	// (0x000167e1) form2_midp_field_choice_group_pane

0x7467,	// (0x000167e9) form2_midp_field_pane_g1

0x746f,	// (0x000167f1) form2_midp_field_pane_g2

0x7477,	// (0x000167f9) form2_midp_field_pane_g3

0x747f,	// (0x00016801) form2_midp_field_pane_g4

0x0003,

0xfadd,	// (0x0001ee5f) form2_midp_field_pane_g

0x7487,	// (0x00016809) form2_midp_gauge_slider_pane

0x748f,	// (0x00016811) form2_midp_gauge_wait_pane

0x7497,	// (0x00016819) form2_midp_image_pane_ParamLimits

0x7497,	// (0x00016819) form2_midp_image_pane

0x74b2,	// (0x00016834) form2_midp_label_pane_ParamLimits

0x74b2,	// (0x00016834) form2_midp_label_pane

0xdffc,	// (0x0001d37e) form2_midp_label_pane_cp_ParamLimits

0xdffc,	// (0x0001d37e) form2_midp_label_pane_cp

0x74ec,	// (0x0001686e) form2_midp_string_pane_ParamLimits

0x74ec,	// (0x0001686e) form2_midp_string_pane

0xe01b,	// (0x0001d39d) form2_midp_text_pane_ParamLimits

0xe01b,	// (0x0001d39d) form2_midp_text_pane

0x751b,	// (0x0001689d) form2_midp_time_pane

0x752b,	// (0x000168ad) input_focus_pane_cp51_ParamLimits

0x752b,	// (0x000168ad) input_focus_pane_cp51

0x7543,	// (0x000168c5) form2_midp_label_pane_t1_ParamLimits

0x7543,	// (0x000168c5) form2_midp_label_pane_t1

0xe034,	// (0x0001d3b6) form2_mdip_text_pane_t1_ParamLimits

0xe034,	// (0x0001d3b6) form2_mdip_text_pane_t1

0x75a3,	// (0x00016925) form2_midp_time_pane_t1

0x75be,	// (0x00016940) form2_midp_gauge_slider_pane_t1

0xe04f,	// (0x0001d3d1) form2_midp_gauge_slider_pane_t2

0xe061,	// (0x0001d3e3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae6,	// (0x0001ee68) form2_midp_gauge_slider_pane_t

0x75f4,	// (0x00016976) form2_midp_slider_pane

0x7600,	// (0x00016982) form2_midp_gauge_wait_pane_t1

0x760e,	// (0x00016990) form2_midp_wait_pane_ParamLimits

0x760e,	// (0x00016990) form2_midp_wait_pane

0xe073,	// (0x0001d3f5) list_single_2graphic_pane_cp4_ParamLimits

0xe073,	// (0x0001d3f5) list_single_2graphic_pane_cp4

0xd9b3,	// (0x0001cd35) list_single_midp_graphic_pane_cp_ParamLimits

0xd9b3,	// (0x0001cd35) list_single_midp_graphic_pane_cp

0x26e8,	// (0x00011a6a) list_highlight_pane_cp20

0x765d,	// (0x000169df) list_single_2graphic_pane_g1_cp4

0x7665,	// (0x000169e7) list_single_2graphic_pane_g2_cp4

0x766d,	// (0x000169ef) list_single_2graphic_pane_t1_cp4

0x27c8,	// (0x00011b4a) list_highlight_pane_cp21

0x767c,	// (0x000169fe) list_single_midp_graphic_pane_g4_cp

0x768b,	// (0x00016a0d) list_single_midp_graphic_pane_t1_cp

0xe087,	// (0x0001d409) form2_mdip_string_pane_t1_ParamLimits

0xe087,	// (0x0001d409) form2_mdip_string_pane_t1

0x26e8,	// (0x00011a6a) bg_wml_button_pane_cp2

0x26de,	// (0x00011a60) form2_midp_image_pane_g1

0x328a,	// (0x0001260c) list_double_large_graphic_pane_g5_ParamLimits

0x328a,	// (0x0001260c) list_double_large_graphic_pane_g5

0xd3c6,	// (0x0001c748) midp_form_pane_ParamLimits

0x27c8,	// (0x00011b4a) main_apps_wheel_pane_ParamLimits

0xbfac,	// (0x0001b32e) popup_preview_window_ParamLimits

0xbfac,	// (0x0001b32e) popup_preview_window

0x1198,	// (0x0001051a) popup_touch_info_window_ParamLimits

0x1198,	// (0x0001051a) popup_touch_info_window

0x11b6,	// (0x00010538) popup_touch_menu_window_ParamLimits

0x11b6,	// (0x00010538) popup_touch_menu_window

0x26d4,	// (0x00011a56) bg_popup_sub_pane_cp6

0x778a,	// (0x00016b0c) list_touch_menu_pane

0x7792,	// (0x00016b14) list_single_touch_menu_pane_ParamLimits

0x7792,	// (0x00016b14) list_single_touch_menu_pane

0x77a8,	// (0x00016b2a) list_single_touch_menu_pane_t1

0x27c8,	// (0x00011b4a) bg_popup_sub_pane_cp7_ParamLimits

0x27c8,	// (0x00011b4a) bg_popup_sub_pane_cp7

0x77b6,	// (0x00016b38) heading_sub_pane

0x77be,	// (0x00016b40) list_touch_info_pane_ParamLimits

0x77be,	// (0x00016b40) list_touch_info_pane

0x77cd,	// (0x00016b4f) list_single_touch_info_pane_ParamLimits

0x77cd,	// (0x00016b4f) list_single_touch_info_pane

0x77df,	// (0x00016b61) list_single_touch_info_pane_t1

0x77ed,	// (0x00016b6f) list_single_touch_info_pane_t2

0x0001,

0xfaf4,	// (0x0001ee76) list_single_touch_info_pane_t

0x4465,	// (0x000137e7) bg_popup_heading_pane_cp

0x77fb,	// (0x00016b7d) heading_sub_pane_t1

0x4e19,	// (0x0001419b) bg_popup_preview_window_pane_cp_ParamLimits

0x4e19,	// (0x0001419b) bg_popup_preview_window_pane_cp

0x77b6,	// (0x00016b38) heading_preview_pane

0x77be,	// (0x00016b40) list_preview_pane_ParamLimits

0x77be,	// (0x00016b40) list_preview_pane

0x7809,	// (0x00016b8b) popup_preview_window_g1

0x77cd,	// (0x00016b4f) list_single_preview_pane_ParamLimits

0x77cd,	// (0x00016b4f) list_single_preview_pane

0x7811,	// (0x00016b93) list_single_preview_pane_g1

0x7819,	// (0x00016b9b) list_single_preview_pane_t1

0x77df,	// (0x00016b61) list_single_preview_pane_t2

0x0001,

0xfaf9,	// (0x0001ee7b) list_single_preview_pane_t

0x7827,	// (0x00016ba9) bg_popup_heading_pane_cp2_ParamLimits

0x7827,	// (0x00016ba9) bg_popup_heading_pane_cp2

0x783d,	// (0x00016bbf) heading_preview_pane_g1

0x7845,	// (0x00016bc7) heading_preview_pane_t1_ParamLimits

0x7845,	// (0x00016bc7) heading_preview_pane_t1

0x28ce,	// (0x00011c50) soft_indicator_pane_t1_ParamLimits

0x2fc4,	// (0x00012346) scroll_pane_ParamLimits

0x3bcc,	// (0x00012f4e) scroll_sc2_left_pane

0x3bd5,	// (0x00012f57) scroll_sc2_right_pane

0x3bf4,	// (0x00012f76) scroll_bg_pane_g1_ParamLimits

0x3c09,	// (0x00012f8b) scroll_bg_pane_g2_ParamLimits

0x3c21,	// (0x00012fa3) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001ea60) scroll_bg_pane_g_ParamLimits

0x3bf4,	// (0x00012f76) scroll_handle_pane_g1_ParamLimits

0x3c43,	// (0x00012fc5) scroll_handle_pane_g2_ParamLimits

0x3c21,	// (0x00012fa3) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ea67) scroll_handle_pane_g_ParamLimits

0x0c5e,	// (0x0000ffe0) popup_choice_list_window_ParamLimits

0x0c5e,	// (0x0000ffe0) popup_choice_list_window

0x4c13,	// (0x00013f95) choice_list_pane

0x4cc3,	// (0x00014045) cell_toolbar_pane_t1

0x4ceb,	// (0x0001406d) toolbar_button_pane_ParamLimits

0x5ea5,	// (0x00015227) ai_gene_pane_1_t2_ParamLimits

0x5ea5,	// (0x00015227) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001ec8a) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001ec8a) ai_gene_pane_1_t

0x7862,	// (0x00016be4) scroll_sc2_left_pane_g1

0x7862,	// (0x00016be4) scroll_sc2_right_pane_g1

0x47b7,	// (0x00013b39) bg_popup_sub_pane_cp10

0x786c,	// (0x00016bee) list_choice_list_pane

0x7885,	// (0x00016c07) list_single_choice_list_pane_ParamLimits

0x7885,	// (0x00016c07) list_single_choice_list_pane

0x7898,	// (0x00016c1a) list_single_choice_list_pane_g1

0x38d4,	// (0x00012c56) list_single_choice_list_pane_t1_ParamLimits

0x38d4,	// (0x00012c56) list_single_choice_list_pane_t1

0x78a0,	// (0x00016c22) choice_list_pane_g1

0x78a8,	// (0x00016c2a) choice_list_pane_t1

0x26d4,	// (0x00011a56) input_focus_pane_cp11

0x3aab,	// (0x00012e2d) title_pane_stacon_g2_ParamLimits

0x3aab,	// (0x00012e2d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001ea46) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001ea46) title_pane_stacon_g

0x4465,	// (0x000137e7) cursor_press_pane

0xbc59,	// (0x0001afdb) popup_fep_hwr_window_ParamLimits

0xbc59,	// (0x0001afdb) popup_fep_hwr_window

0x0d84,	// (0x00010106) popup_fep_vkb_window_ParamLimits

0x0d84,	// (0x00010106) popup_fep_vkb_window

0x78b6,	// (0x00016c38) cursor_press_pane_g1

0x0002,

0xfb22,	// (0x0001eea4) fep_vkb_side_pane_g_ParamLimits

0x171c,	// (0x00010a9e) fep_hwr_candidate_pane_ParamLimits

0x171c,	// (0x00010a9e) fep_hwr_candidate_pane

0x1746,	// (0x00010ac8) fep_hwr_side_pane_ParamLimits

0x1746,	// (0x00010ac8) fep_hwr_side_pane

0x1766,	// (0x00010ae8) fep_hwr_top_pane_ParamLimits

0x1766,	// (0x00010ae8) fep_hwr_top_pane

0x177e,	// (0x00010b00) fep_hwr_write_pane_ParamLimits

0x177e,	// (0x00010b00) fep_hwr_write_pane

0xfb22,	// (0x0001eea4) fep_vkb_side_pane_g

0x78be,	// (0x00016c40) fep_hwr_top_pane_g1

0x78d0,	// (0x00016c52) fep_hwr_top_pane_g2

0x17b8,	// (0x00010b3a) fep_hwr_top_pane_g3

0x0002,

0xfafe,	// (0x0001ee80) fep_hwr_top_pane_g

0x17cd,	// (0x00010b4f) fep_hwr_top_text_pane

0x3dc3,	// (0x00013145) fep_hwr_top_text_pane_g1

0x7906,	// (0x00016c88) fep_hwr_top_text_pane_t1

0x18c3,	// (0x00010c45) fep_hwr_candidate_pane_g1

0x7b59,	// (0x00016edb) fep_vkb_keypad_pane_g3_ParamLimits

0x7b59,	// (0x00016edb) fep_vkb_keypad_pane_g3

0x7b81,	// (0x00016f03) fep_vkb_keypad_pane_g4_ParamLimits

0x7b81,	// (0x00016f03) fep_vkb_keypad_pane_g4

0x7bf0,	// (0x00016f72) fep_vkb_bottom_pane_g2_ParamLimits

0x7bf0,	// (0x00016f72) fep_vkb_bottom_pane_g2

0x0001,

0xfb29,	// (0x0001eeab) fep_vkb_bottom_pane_g_ParamLimits

0xfb29,	// (0x0001eeab) fep_vkb_bottom_pane_g

0x7862,	// (0x00016be4) cell_vkb_side_pane_g2

0x0001,

0xfb33,	// (0x0001eeb5) cell_vkb_side_pane_g

0x7c7b,	// (0x00016ffd) cell_vkb_side_pane_t1

0x7c89,	// (0x0001700b) cell_vkb_side_pane_t1_copy1

0x7862,	// (0x00016be4) bg_fep_vkb_candidate_pane_g2

0x7db5,	// (0x00017137) cell_vkb_candidate_pane_ParamLimits

0x7914,	// (0x00016c96) aid_size_cell_vkb_ParamLimits

0x7914,	// (0x00016c96) aid_size_cell_vkb

0x7db5,	// (0x00017137) cell_vkb_candidate_pane

0x18ea,	// (0x00010c6c) bg_popup_fep_shadow_pane_g1

0xe108,	// (0x0001d48a) fep_vkb_bottom_pane_ParamLimits

0xe108,	// (0x0001d48a) fep_vkb_bottom_pane

0x79d8,	// (0x00016d5a) fep_vkb_candidate_pane_ParamLimits

0x79d8,	// (0x00016d5a) fep_vkb_candidate_pane

0xe12d,	// (0x0001d4af) fep_vkb_keypad_pane_ParamLimits

0xe12d,	// (0x0001d4af) fep_vkb_keypad_pane

0xe169,	// (0x0001d4eb) fep_vkb_side_pane_ParamLimits

0xe169,	// (0x0001d4eb) fep_vkb_side_pane

0xe1a5,	// (0x0001d527) fep_vkb_top_pane_ParamLimits

0xe1a5,	// (0x0001d527) fep_vkb_top_pane

0x7ab2,	// (0x00016e34) fep_vkb_top_pane_g1_ParamLimits

0x7ab2,	// (0x00016e34) fep_vkb_top_pane_g1

0x7ac1,	// (0x00016e43) fep_vkb_top_pane_g2_ParamLimits

0x7ac1,	// (0x00016e43) fep_vkb_top_pane_g2

0x7ad0,	// (0x00016e52) fep_vkb_top_pane_g3_ParamLimits

0x7ad0,	// (0x00016e52) fep_vkb_top_pane_g3

0x0003,

0xfb19,	// (0x0001ee9b) fep_vkb_top_pane_g_ParamLimits

0xfb19,	// (0x0001ee9b) fep_vkb_top_pane_g

0x7aee,	// (0x00016e70) fep_vkb_top_text_pane_ParamLimits

0x7aee,	// (0x00016e70) fep_vkb_top_text_pane

0xe1e1,	// (0x0001d563) fep_vkb_side_pane_g1_ParamLimits

0xe1e1,	// (0x0001d563) fep_vkb_side_pane_g1

0x7b48,	// (0x00016eca) grid_vkb_side_pane_ParamLimits

0x7b48,	// (0x00016eca) grid_vkb_side_pane

0x18f2,	// (0x00010c74) bg_popup_fep_shadow_pane_g2

0x18fb,	// (0x00010c7d) bg_popup_fep_shadow_pane_g3

0x1903,	// (0x00010c85) bg_popup_fep_shadow_pane_g4

0x190c,	// (0x00010c8e) bg_popup_fep_shadow_pane_g5

0x1916,	// (0x00010c98) bg_popup_fep_shadow_pane_g6

0x191e,	// (0x00010ca0) bg_popup_fep_shadow_pane_g7

0x3707,	// (0x00012a89) bg_popup_fep_shadow_pane_g8

0x7b9f,	// (0x00016f21) grid_vkb_keypad_number_pane_ParamLimits

0x7b9f,	// (0x00016f21) grid_vkb_keypad_number_pane

0x7baf,	// (0x00016f31) grid_vkb_keypad_pane_ParamLimits

0x7baf,	// (0x00016f31) grid_vkb_keypad_pane

0x7bd5,	// (0x00016f57) fep_vkb_bottom_pane_g1_ParamLimits

0x7bd5,	// (0x00016f57) fep_vkb_bottom_pane_g1

0x7bfe,	// (0x00016f80) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7bfe,	// (0x00016f80) grid_vkb_keypad_bottom_left_pane

0x7c13,	// (0x00016f95) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7c13,	// (0x00016f95) grid_vkb_keypad_bottom_right_pane

0x7c28,	// (0x00016faa) fep_vkb_top_text_pane_g1

0xe228,	// (0x0001d5aa) fep_vkb_top_text_pane_t1

0xe23a,	// (0x0001d5bc) cell_vkb_side_pane_ParamLimits

0xe23a,	// (0x0001d5bc) cell_vkb_side_pane

0x7862,	// (0x00016be4) cell_vkb_side_pane_g1

0x7c97,	// (0x00017019) cell_vkb_keypad_pane_ParamLimits

0x7c97,	// (0x00017019) cell_vkb_keypad_pane

0x7d0c,	// (0x0001708e) cell_vkb_keypad_pane_g1

0x0008,

0xfb46,	// (0x0001eec8) bg_popup_fep_shadow_pane_g

0x1930,	// (0x00010cb2) cell_hwr_side_pane_g1

0x1930,	// (0x00010cb2) cell_hwr_side_pane_g2

0x7d16,	// (0x00017098) cell_vkb_keypad_pane_t1

0xe250,	// (0x0001d5d2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe250,	// (0x0001d5d2) cell_vkb_keypad_bottom_left_pane

0xe265,	// (0x0001d5e7) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe265,	// (0x0001d5e7) cell_vkb_keypad_bottom_right_pane

0x7862,	// (0x00016be4) cell_vkb_keypad_bottom_left_pane_g1

0x7862,	// (0x00016be4) cell_vkb_keypad_bottom_right_pane_g1

0x7d7a,	// (0x000170fc) cell_vkb_keypad_number_pane_ParamLimits

0x7d7a,	// (0x000170fc) cell_vkb_keypad_number_pane

0x7d99,	// (0x0001711b) cell_vkb_keypad_number_pane_g1

0x7da3,	// (0x00017125) cell_vkb_keypad_number_pane_g2

0x7dac,	// (0x0001712e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb38,	// (0x0001eeba) cell_vkb_keypad_number_pane_g

0x7d16,	// (0x00017098) cell_vkb_keypad_number_pane_t1

0x7dd0,	// (0x00017152) fep_vkb_candidate_pane_g1

0x0001,

0xfb59,	// (0x0001eedb) cell_hwr_side_pane_g

0x7de9,	// (0x0001716b) cell_hwr_side_pane_t1

0x193a,	// (0x00010cbc) cell_hwr_side_pane_t1_copy1

0x1948,	// (0x00010cca) cell_hwr_candidate_pane_g1

0x1977,	// (0x00010cf9) cell_hwr_candidate_pane_t1

0x7862,	// (0x00016be4) cell_vkb_candidate_pane_g2

0x7e2d,	// (0x000171af) cell_vkb_candidate_pane_t1

0x16e3,	// (0x00010a65) bg_popup_fep_shadow_pane_ParamLimits

0x16e3,	// (0x00010a65) bg_popup_fep_shadow_pane

0x1798,	// (0x00010b1a) bg_fep_hwr_top_pane_g4

0x78e2,	// (0x00016c64) bg_hwr_side_pane_g1_ParamLimits

0x78e2,	// (0x00016c64) bg_hwr_side_pane_g1

0xc2e6,	// (0x0001b668) cell_hwr_side_pane_ParamLimits

0xc2e6,	// (0x0001b668) cell_hwr_side_pane

0x1844,	// (0x00010bc6) fep_hwr_write_pane_g1_ParamLimits

0x1844,	// (0x00010bc6) fep_hwr_write_pane_g1

0x1851,	// (0x00010bd3) fep_hwr_write_pane_g2_ParamLimits

0x1851,	// (0x00010bd3) fep_hwr_write_pane_g2

0x185e,	// (0x00010be0) fep_hwr_write_pane_g3_ParamLimits

0x185e,	// (0x00010be0) fep_hwr_write_pane_g3

0xc306,	// (0x0001b688) fep_hwr_write_pane_g4_ParamLimits

0xc306,	// (0x0001b688) fep_hwr_write_pane_g4

0x0005,

0xfb05,	// (0x0001ee87) fep_hwr_write_pane_g_ParamLimits

0xfb05,	// (0x0001ee87) fep_hwr_write_pane_g

0x1798,	// (0x00010b1a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1798,	// (0x00010b1a) bg_fep_hwr_candidate_pane_g2

0x1881,	// (0x00010c03) cell_hwr_candidate_pane_ParamLimits

0x1881,	// (0x00010c03) cell_hwr_candidate_pane

0x18c3,	// (0x00010c45) fep_hwr_candidate_pane_g1_ParamLimits

0x7942,	// (0x00016cc4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7942,	// (0x00016cc4) bg_popup_fep_shadow_pane_cp2

0x7ae0,	// (0x00016e62) fep_vkb_top_pane_g4_ParamLimits

0x7ae0,	// (0x00016e62) fep_vkb_top_pane_g4

0x7b26,	// (0x00016ea8) fep_vkb_side_pane_g2_ParamLimits

0x7b26,	// (0x00016ea8) fep_vkb_side_pane_g2

0xcf3a,	// (0x0001c2bc) list_setting_pane_t4_ParamLimits

0xcf3a,	// (0x0001c2bc) list_setting_pane_t4

0xcfb4,	// (0x0001c336) list_setting_number_pane_t5_ParamLimits

0xcfb4,	// (0x0001c336) list_setting_number_pane_t5

0x3dfa,	// (0x0001317c) list_double_heading_pane_cp2_ParamLimits

0x3dfa,	// (0x0001317c) list_double_heading_pane_cp2

0x3215,	// (0x00012597) list_double_heading_pane_g1_cp2_ParamLimits

0x3215,	// (0x00012597) list_double_heading_pane_g1_cp2

0x35f2,	// (0x00012974) list_double_heading_pane_g2_cp2_ParamLimits

0x35f2,	// (0x00012974) list_double_heading_pane_g2_cp2

0x7e3b,	// (0x000171bd) list_double_heading_pane_t1_cp2_ParamLimits

0x7e3b,	// (0x000171bd) list_double_heading_pane_t1_cp2

0x7e51,	// (0x000171d3) list_double_heading_pane_t2_cp2_ParamLimits

0x7e51,	// (0x000171d3) list_double_heading_pane_t2_cp2

0x26bc,	// (0x00011a3e) aid_value_unit2

0x047e,	// (0x0000f800) popup_preview_fixed_window

0x2a6b,	// (0x00011ded) bg_popup_preview_window_pane_cp02

0x7e63,	// (0x000171e5) list_preview_fixed_pane

0x7ea9,	// (0x0001722b) list_empty_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_empty_pane_fp

0x7ea9,	// (0x0001722b) list_single_cale_day_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_cale_day_pane_fp

0x7ea9,	// (0x0001722b) list_single_graphic_heading_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_graphic_heading_pane_fp

0x7ea9,	// (0x0001722b) list_single_graphic_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_graphic_pane_fp

0x7ea9,	// (0x0001722b) list_single_heading_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_heading_pane_fp

0x7ea9,	// (0x0001722b) list_single_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_pane_fp

0x7ebe,	// (0x00017240) list_single_pane_fp_g1_ParamLimits

0x7ebe,	// (0x00017240) list_single_pane_fp_g1

0x3215,	// (0x00012597) list_single_pane_fp_g2_ParamLimits

0x3215,	// (0x00012597) list_single_pane_fp_g2

0x35f2,	// (0x00012974) list_single_pane_fp_g3_ParamLimits

0x35f2,	// (0x00012974) list_single_pane_fp_g3

0x7eca,	// (0x0001724c) list_single_pane_fp_g4_ParamLimits

0x7eca,	// (0x0001724c) list_single_pane_fp_g4

0x0003,

0xfb6c,	// (0x0001eeee) list_single_pane_fp_g_ParamLimits

0xfb6c,	// (0x0001eeee) list_single_pane_fp_g

0x7ed6,	// (0x00017258) list_single_pane_fp_t1_ParamLimits

0x7ed6,	// (0x00017258) list_single_pane_fp_t1

0x7eed,	// (0x0001726f) list_single_graphic_pane_fp_g1_ParamLimits

0x7eed,	// (0x0001726f) list_single_graphic_pane_fp_g1

0x7ebe,	// (0x00017240) list_single_graphic_pane_fp_g2_ParamLimits

0x7ebe,	// (0x00017240) list_single_graphic_pane_fp_g2

0x3215,	// (0x00012597) list_single_graphic_pane_fp_g3_ParamLimits

0x3215,	// (0x00012597) list_single_graphic_pane_fp_g3

0x35f2,	// (0x00012974) list_single_graphic_pane_fp_g4_ParamLimits

0x35f2,	// (0x00012974) list_single_graphic_pane_fp_g4

0x7eca,	// (0x0001724c) list_single_graphic_pane_fp_g5_ParamLimits

0x7eca,	// (0x0001724c) list_single_graphic_pane_fp_g5

0x0004,

0xfb75,	// (0x0001eef7) list_single_graphic_pane_fp_g_ParamLimits

0xfb75,	// (0x0001eef7) list_single_graphic_pane_fp_g

0x7ef9,	// (0x0001727b) list_single_graphic_pane_fp_t1_ParamLimits

0x7ef9,	// (0x0001727b) list_single_graphic_pane_fp_t1

0x7eed,	// (0x0001726f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7eed,	// (0x0001726f) list_single_graphic_heading_pane_fp_g1

0x7ebe,	// (0x00017240) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7ebe,	// (0x00017240) list_single_graphic_heading_pane_fp_g2

0x3215,	// (0x00012597) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3215,	// (0x00012597) list_single_graphic_heading_pane_fp_g3

0x35f2,	// (0x00012974) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x35f2,	// (0x00012974) list_single_graphic_heading_pane_fp_g4

0x7eca,	// (0x0001724c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7eca,	// (0x0001724c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001eef7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001eef7) list_single_graphic_heading_pane_fp_g

0x7f0f,	// (0x00017291) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7f0f,	// (0x00017291) list_single_graphic_heading_pane_fp_t1

0x7f25,	// (0x000172a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7f25,	// (0x000172a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x0001ef02) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x0001ef02) list_single_graphic_heading_pane_fp_t

0x7f37,	// (0x000172b9) list_single_cale_day_pane_fp_g1_ParamLimits

0x7f37,	// (0x000172b9) list_single_cale_day_pane_fp_g1

0x7f6f,	// (0x000172f1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f6f,	// (0x000172f1) list_single_cale_day_pane_fp_g2

0x7f7b,	// (0x000172fd) list_single_cale_day_pane_fp_g3_ParamLimits

0x7f7b,	// (0x000172fd) list_single_cale_day_pane_fp_g3

0x7fa3,	// (0x00017325) list_single_cale_day_pane_fp_g4_ParamLimits

0x7fa3,	// (0x00017325) list_single_cale_day_pane_fp_g4

0x7fc7,	// (0x00017349) list_single_cale_day_pane_fp_g5_ParamLimits

0x7fc7,	// (0x00017349) list_single_cale_day_pane_fp_g5

0x0004,

0xfb85,	// (0x0001ef07) list_single_cale_day_pane_fp_g_ParamLimits

0xfb85,	// (0x0001ef07) list_single_cale_day_pane_fp_g

0x7feb,	// (0x0001736d) list_single_cale_day_pane_fp_t1_ParamLimits

0x7feb,	// (0x0001736d) list_single_cale_day_pane_fp_t1

0x8011,	// (0x00017393) list_single_cale_day_pane_fp_t2_ParamLimits

0x8011,	// (0x00017393) list_single_cale_day_pane_fp_t2

0x802a,	// (0x000173ac) list_single_cale_day_pane_fp_t3_ParamLimits

0x802a,	// (0x000173ac) list_single_cale_day_pane_fp_t3

0x0002,

0xfb90,	// (0x0001ef12) list_single_cale_day_pane_fp_t_ParamLimits

0xfb90,	// (0x0001ef12) list_single_cale_day_pane_fp_t

0x7ebe,	// (0x00017240) list_empty_pane_fp_g1_ParamLimits

0x7ebe,	// (0x00017240) list_empty_pane_fp_g1

0x8043,	// (0x000173c5) list_empty_pane_fp_t1

0x8051,	// (0x000173d3) list_empty_pane_fp_t2

0x0001,

0xfb97,	// (0x0001ef19) list_empty_pane_fp_t

0x7ebe,	// (0x00017240) list_single_heading_pane_fp_g1_ParamLimits

0x7ebe,	// (0x00017240) list_single_heading_pane_fp_g1

0x3215,	// (0x00012597) list_single_heading_pane_fp_g2_ParamLimits

0x3215,	// (0x00012597) list_single_heading_pane_fp_g2

0x35f2,	// (0x00012974) list_single_heading_pane_fp_g3_ParamLimits

0x35f2,	// (0x00012974) list_single_heading_pane_fp_g3

0x0002,

0xfb9c,	// (0x0001ef1e) list_single_heading_pane_fp_g_ParamLimits

0xfb9c,	// (0x0001ef1e) list_single_heading_pane_fp_g

0x805f,	// (0x000173e1) list_single_heading_pane_fp_t1_ParamLimits

0x805f,	// (0x000173e1) list_single_heading_pane_fp_t1

0x8071,	// (0x000173f3) list_single_heading_pane_fp_t2_ParamLimits

0x8071,	// (0x000173f3) list_single_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0001ef25) list_single_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0001ef25) list_single_heading_pane_fp_t

0x3942,	// (0x00012cc4) aid_size_cell_fast

0x29db,	// (0x00011d5d) soft_indicator_pane_cp1_t1

0x397f,	// (0x00012d01) cell_app_pane_cp2_ParamLimits

0x397f,	// (0x00012d01) cell_app_pane_cp2

0x1705,	// (0x00010a87) fep_hwr_candidate_drop_down_list_pane

0x18dd,	// (0x00010c5f) fep_hwr_candidate_pane_g3_ParamLimits

0x18dd,	// (0x00010c5f) fep_hwr_candidate_pane_g3

0xeec9,	// (0x0001e24b) fep_hwr_candidate_pane_g4_ParamLimits

0xeec9,	// (0x0001e24b) fep_hwr_candidate_pane_g4

0x0002,

0xfb12,	// (0x0001ee94) fep_hwr_candidate_pane_g_ParamLimits

0xfb12,	// (0x0001ee94) fep_hwr_candidate_pane_g

0x79c7,	// (0x00016d49) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x79c7,	// (0x00016d49) fep_vkb_candidate_drop_down_list_pane

0x7dd8,	// (0x0001715a) fep_vkb_candidate_pane_g3

0x7de0,	// (0x00017162) fep_vkb_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0001eec1) fep_vkb_candidate_pane_g

0x1948,	// (0x00010cca) cell_hwr_candidate_pane_g1_ParamLimits

0x1956,	// (0x00010cd8) cell_hwr_candidate_pane_g3_ParamLimits

0x1956,	// (0x00010cd8) cell_hwr_candidate_pane_g3

0x9a10,	// (0x00018d92) cell_hwr_candidate_pane_g4_ParamLimits

0x9a10,	// (0x00018d92) cell_hwr_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0001eee0) cell_hwr_candidate_pane_g_ParamLimits

0xfb5e,	// (0x0001eee0) cell_hwr_candidate_pane_g

0x7df7,	// (0x00017179) cell_vkb_candidate_pane_g3_ParamLimits

0x7df7,	// (0x00017179) cell_vkb_candidate_pane_g3

0x7e12,	// (0x00017194) cell_vkb_candidate_pane_g4_ParamLimits

0x7e12,	// (0x00017194) cell_vkb_candidate_pane_g4

0x8087,	// (0x00017409) cell_app_pane_cp2_g1_ParamLimits

0x8087,	// (0x00017409) cell_app_pane_cp2_g1

0x80a5,	// (0x00017427) cell_app_pane_cp2_g2_ParamLimits

0x80a5,	// (0x00017427) cell_app_pane_cp2_g2

0x0001,

0xfba8,	// (0x0001ef2a) cell_app_pane_cp2_g_ParamLimits

0xfba8,	// (0x0001ef2a) cell_app_pane_cp2_g

0x80b1,	// (0x00017433) cell_app_pane_cp2_t1_ParamLimits

0x80b1,	// (0x00017433) cell_app_pane_cp2_t1

0x35cc,	// (0x0001294e) grid_highlight_pane_cp1_ParamLimits

0x35cc,	// (0x0001294e) grid_highlight_pane_cp1

0x1995,	// (0x00010d17) cell_hwr_candidate_pane_cp1_ParamLimits

0x1995,	// (0x00010d17) cell_hwr_candidate_pane_cp1

0x1948,	// (0x00010cca) fep_hwr_candidate_drop_down_list_pane_g1

0x19b4,	// (0x00010d36) fep_hwr_candidate_drop_down_list_pane_g2

0x19c1,	// (0x00010d43) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbad,	// (0x0001ef2f) fep_hwr_candidate_drop_down_list_pane_g

0x19ce,	// (0x00010d50) fep_hwr_candidate_drop_down_list_scroll_pane

0x19d7,	// (0x00010d59) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x19d7,	// (0x00010d59) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19e4,	// (0x00010d66) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19e4,	// (0x00010d66) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x19f1,	// (0x00010d73) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x19f1,	// (0x00010d73) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x19fe,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x19fe,	// (0x00010d80) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1a19,	// (0x00010d9b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a19,	// (0x00010d9b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a34,	// (0x00010db6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a34,	// (0x00010db6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a4f,	// (0x00010dd1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a4f,	// (0x00010dd1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a6a,	// (0x00010dec) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a6a,	// (0x00010dec) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb4,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb4,	// (0x0001ef36) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80c3,	// (0x00017445) cell_vkb_candidate_pane_cp1_ParamLimits

0x80c3,	// (0x00017445) cell_vkb_candidate_pane_cp1

0x7ae0,	// (0x00016e62) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7ae0,	// (0x00016e62) fep_vkb_candidate_drop_down_list_pane_g1

0x80e3,	// (0x00017465) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80e3,	// (0x00017465) fep_vkb_candidate_drop_down_list_pane_g2

0x80f0,	// (0x00017472) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80f0,	// (0x00017472) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc5,	// (0x0001ef47) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc5,	// (0x0001ef47) fep_vkb_candidate_drop_down_list_pane_g

0x80fd,	// (0x0001747f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80fd,	// (0x0001747f) fep_vkb_candidate_drop_down_list_scroll_pane

0x810a,	// (0x0001748c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x810a,	// (0x0001748c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8117,	// (0x00017499) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8117,	// (0x00017499) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8123,	// (0x000174a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8123,	// (0x000174a5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x812f,	// (0x000174b1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x812f,	// (0x000174b1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8150,	// (0x000174d2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8150,	// (0x000174d2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8171,	// (0x000174f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8171,	// (0x000174f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8192,	// (0x00017514) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8192,	// (0x00017514) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x81b3,	// (0x00017535) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x81b3,	// (0x00017535) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0001ef4e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0001ef4e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc8d4,	// (0x0001bc56) title_pane_g1_ParamLimits

0xc8e7,	// (0x0001bc69) title_pane_g2_ParamLimits

0xf54e,	// (0x0001e8d0) title_pane_g_ParamLimits

0x3db3,	// (0x00013135) aid_call2_pane

0x3dbb,	// (0x0001313d) aid_call_pane

0x3dc3,	// (0x00013145) popup_clock_analogue_window_g1

0x3dc3,	// (0x00013145) popup_clock_analogue_window_g2

0x07ef,	// (0x0000fb71) popup_clock_analogue_window_g3

0x07f8,	// (0x0000fb7a) popup_clock_analogue_window_g4

0x26de,	// (0x00011a60) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ea75) popup_clock_analogue_window_g

0x0800,	// (0x0000fb82) popup_clock_analogue_window_t1

0x080e,	// (0x0000fb90) clock_digital_number_pane_ParamLimits

0x080e,	// (0x0000fb90) clock_digital_number_pane

0x081a,	// (0x0000fb9c) clock_digital_number_pane_cp02_ParamLimits

0x081a,	// (0x0000fb9c) clock_digital_number_pane_cp02

0x0826,	// (0x0000fba8) clock_digital_number_pane_cp03_ParamLimits

0x0826,	// (0x0000fba8) clock_digital_number_pane_cp03

0x0832,	// (0x0000fbb4) clock_digital_number_pane_cp04_ParamLimits

0x0832,	// (0x0000fbb4) clock_digital_number_pane_cp04

0x083e,	// (0x0000fbc0) clock_digital_separator_pane_ParamLimits

0x083e,	// (0x0000fbc0) clock_digital_separator_pane

0x084a,	// (0x0000fbcc) popup_clock_digital_window_t1_ParamLimits

0x084a,	// (0x0000fbcc) popup_clock_digital_window_t1

0x26de,	// (0x00011a60) clock_digital_number_pane_g1

0x26de,	// (0x00011a60) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ea80) clock_digital_number_pane_g

0x26de,	// (0x00011a60) clock_digital_separator_pane_g1

0x26de,	// (0x00011a60) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ea80) clock_digital_separator_pane_g

0xd573,	// (0x0001c8f5) aid_fill_nsta_ParamLimits

0xd6a9,	// (0x0001ca2b) indicator_nsta_pane_ParamLimits

0x4aa0,	// (0x00013e22) popup_clock_analogue_window

0x4aa0,	// (0x00013e22) popup_clock_digital_window

0x3903,	// (0x00012c85) grid_indicator_nsta_pane_ParamLimits

0x723b,	// (0x000165bd) clock_nsta_pane_t2

0x0001,

0xfa92,	// (0x0001ee14) clock_nsta_pane_t

0x07b3,	// (0x0000fb35) aid_size_max_handle

0xba0c,	// (0x0001ad8e) aid_size_min_handle

0x4465,	// (0x000137e7) editor_scroll_pane

0x81ce,	// (0x00017550) ex_editor_pane

0x38b0,	// (0x00012c32) scroll_pane_cp13

0x2ff0,	// (0x00012372) scroll_pane_cp14

0x3df2,	// (0x00013174) scroll_pane_cp36

0xd29d,	// (0x0001c61f) list_single_graphic_hl_pane_cp2_ParamLimits

0xd29d,	// (0x0001c61f) list_single_graphic_hl_pane_cp2

0xdd75,	// (0x0001d0f7) list_single_graphic_hl_pane_ParamLimits

0xdd75,	// (0x0001d0f7) list_single_graphic_hl_pane

0x81d6,	// (0x00017558) aid_size_min_hl_cp1

0x81df,	// (0x00017561) list_highlight_pane_cp34_ParamLimits

0x81df,	// (0x00017561) list_highlight_pane_cp34

0x81f0,	// (0x00017572) list_single_graphic_hl_pane_g1_ParamLimits

0x81f0,	// (0x00017572) list_single_graphic_hl_pane_g1

0xe280,	// (0x0001d602) list_single_graphic_hl_pane_g2_ParamLimits

0xe280,	// (0x0001d602) list_single_graphic_hl_pane_g2

0xe280,	// (0x0001d602) list_single_graphic_hl_pane_g3_ParamLimits

0xe280,	// (0x0001d602) list_single_graphic_hl_pane_g3

0x43d6,	// (0x00013758) list_single_graphic_hl_pane_g4_ParamLimits

0x43d6,	// (0x00013758) list_single_graphic_hl_pane_g4

0xe28c,	// (0x0001d60e) list_single_graphic_hl_pane_g5_ParamLimits

0xe28c,	// (0x0001d60e) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0001ef5f) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0001ef5f) list_single_graphic_hl_pane_g

0xe2a0,	// (0x0001d622) list_single_graphic_hl_pane_t1_ParamLimits

0xe2a0,	// (0x0001d622) list_single_graphic_hl_pane_t1

0x8233,	// (0x000175b5) aid_size_min_hl_cp2

0x823c,	// (0x000175be) list_highlight_pane_cp34_cp2_ParamLimits

0x823c,	// (0x000175be) list_highlight_pane_cp34_cp2

0x81f0,	// (0x00017572) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81f0,	// (0x00017572) list_single_graphic_hl_pane_g1_cp2

0x8249,	// (0x000175cb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8249,	// (0x000175cb) list_single_graphic_hl_pane_g2_cp2

0x8255,	// (0x000175d7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8255,	// (0x000175d7) list_single_graphic_hl_pane_g3_cp2

0x69d7,	// (0x00015d59) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x69d7,	// (0x00015d59) list_single_graphic_hl_pane_g4_cp2

0x8209,	// (0x0001758b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8209,	// (0x0001758b) list_single_graphic_hl_pane_g5_cp2

0xba67,	// (0x0001ade9) control_pane_g4_ParamLimits

0xba67,	// (0x0001ade9) control_pane_g4

0x47b7,	// (0x00013b39) bg_popup_sub_pane_cp10_ParamLimits

0x786c,	// (0x00016bee) list_choice_list_pane_ParamLimits

0x787b,	// (0x00016bfd) scroll_pane_cp23

0x2a6b,	// (0x00011ded) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e63,	// (0x000171e5) list_preview_fixed_pane_ParamLimits

0x7e79,	// (0x000171fb) list_preview_fixed_pane_cp_ParamLimits

0x7e79,	// (0x000171fb) list_preview_fixed_pane_cp

0x7e85,	// (0x00017207) popup_preview_fixed_window_g1_ParamLimits

0x7e85,	// (0x00017207) popup_preview_fixed_window_g1

0x7e91,	// (0x00017213) popup_preview_fixed_window_g2_ParamLimits

0x7e91,	// (0x00017213) popup_preview_fixed_window_g2

0x0002,

0xfb65,	// (0x0001eee7) popup_preview_fixed_window_g_ParamLimits

0xfb65,	// (0x0001eee7) popup_preview_fixed_window_g

0x0727,	// (0x0000faa9) aid_navi_side_left_pane_ParamLimits

0x073c,	// (0x0000fabe) aid_navi_side_right_pane_ParamLimits

0x0754,	// (0x0000fad6) navi_icon_pane_stacon_ParamLimits

0x0768,	// (0x0000faea) navi_navi_pane_stacon_ParamLimits

0x0754,	// (0x0000fad6) navi_text_pane_stacon_ParamLimits

0x033f,	// (0x0000f6c1) main_text_info_pane

0x8279,	// (0x000175fb) listscroll_text_info_pane

0x8281,	// (0x00017603) list_text_info_pane_ParamLimits

0x8281,	// (0x00017603) list_text_info_pane

0x8290,	// (0x00017612) scroll_pane_cp24_ParamLimits

0x8290,	// (0x00017612) scroll_pane_cp24

0xe2b6,	// (0x0001d638) list_text_info_pane_t1_ParamLimits

0xe2b6,	// (0x0001d638) list_text_info_pane_t1

0xbbcc,	// (0x0001af4e) popup_fast_swap2_window_ParamLimits

0xbbcc,	// (0x0001af4e) popup_fast_swap2_window

0x82df,	// (0x00017661) aid_size_cell_fast2

0x26d4,	// (0x00011a56) bg_popup_window_pane_cp17

0x523c,	// (0x000145be) heading_pane_cp2

0x2cba,	// (0x0001203c) listscroll_fast2_pane

0x82e9,	// (0x0001766b) grid_fast2_pane

0x82f3,	// (0x00017675) listscroll_fast2_pane_g1

0x82fb,	// (0x0001767d) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0001ef6a) listscroll_fast2_pane_g

0x38b0,	// (0x00012c32) scroll_pane_cp26

0x8305,	// (0x00017687) cell_fast2_pane_ParamLimits

0x8305,	// (0x00017687) cell_fast2_pane

0x831a,	// (0x0001769c) cell_fast2_pane_g1

0x8323,	// (0x000176a5) cell_fast2_pane_g2

0x832c,	// (0x000176ae) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0001ef6f) cell_fast2_pane_g

0x2dad,	// (0x0001212f) grid_highlight_pane_cp9

0x0c42,	// (0x0000ffc4) main_eswt_pane_ParamLimits

0x0c42,	// (0x0000ffc4) main_eswt_pane

0x82a5,	// (0x00017627) list_single_text_info_pane

0x8334,	// (0x000176b6) eswt_ctrl_button_pane

0x8334,	// (0x000176b6) eswt_ctrl_canvas_pane

0x833c,	// (0x000176be) eswt_ctrl_combo_pane

0x8334,	// (0x000176b6) eswt_ctrl_default_pane

0x8334,	// (0x000176b6) eswt_ctrl_label_pane

0x8344,	// (0x000176c6) eswt_ctrl_wait_pane

0x834c,	// (0x000176ce) eswt_shell_pane

0x26d4,	// (0x00011a56) listscroll_eswt_app_pane

0x836c,	// (0x000176ee) popup_eswt_tasktip_window_ParamLimits

0x836c,	// (0x000176ee) popup_eswt_tasktip_window

0x4e19,	// (0x0001419b) bg_popup_window_pane_cp18

0x837d,	// (0x000176ff) eswt_control_pane_g1_ParamLimits

0x837d,	// (0x000176ff) eswt_control_pane_g1

0x838a,	// (0x0001770c) eswt_control_pane_g2_ParamLimits

0x838a,	// (0x0001770c) eswt_control_pane_g2

0x8397,	// (0x00017719) eswt_control_pane_g3_ParamLimits

0x8397,	// (0x00017719) eswt_control_pane_g3

0x83a4,	// (0x00017726) eswt_control_pane_g4_ParamLimits

0x83a4,	// (0x00017726) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0001ef76) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0001ef76) eswt_control_pane_g

0x35cc,	// (0x0001294e) bg_button_pane_ParamLimits

0x35cc,	// (0x0001294e) bg_button_pane

0x2dc2,	// (0x00012144) common_borders_pane_copy2_ParamLimits

0x2dc2,	// (0x00012144) common_borders_pane_copy2

0x83b1,	// (0x00017733) control_button_pane_g1_ParamLimits

0x83b1,	// (0x00017733) control_button_pane_g1

0x83bd,	// (0x0001773f) control_button_pane_g2_ParamLimits

0x83bd,	// (0x0001773f) control_button_pane_g2

0x83c9,	// (0x0001774b) control_button_pane_g3_ParamLimits

0x83c9,	// (0x0001774b) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0001ef7f) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0001ef7f) control_button_pane_g

0x83dd,	// (0x0001775f) control_button_pane_t1

0x83eb,	// (0x0001776d) control_button_pane_t2

0x0001,

0xfc04,	// (0x0001ef86) control_button_pane_t

0x4cf7,	// (0x00014079) bg_button_pane_g1

0x4d07,	// (0x00014089) bg_button_pane_g2

0x4cff,	// (0x00014081) bg_button_pane_g3

0x4d17,	// (0x00014099) bg_button_pane_g4

0x4d0f,	// (0x00014091) bg_button_pane_g5

0x4d1f,	// (0x000140a1) bg_button_pane_g6

0x4d27,	// (0x000140a9) bg_button_pane_g7

0x4d37,	// (0x000140b9) bg_button_pane_g8

0x4d2f,	// (0x000140b1) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001ebde) bg_button_pane_g

0x7827,	// (0x00016ba9) common_borders_pane_ParamLimits

0x7827,	// (0x00016ba9) common_borders_pane

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy1_ParamLimits

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy1

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy1_ParamLimits

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy1

0x8397,	// (0x00017719) eswt_control_pane_g3_copy1_ParamLimits

0x8397,	// (0x00017719) eswt_control_pane_g3_copy1

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy1_ParamLimits

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy1

0x7862,	// (0x00016be4) bg_eswt_ctrl_canvas_pane_g1

0x7827,	// (0x00016ba9) common_borders_pane_cp2_ParamLimits

0x7827,	// (0x00016ba9) common_borders_pane_cp2

0x7827,	// (0x00016ba9) common_borders_pane_cp3_ParamLimits

0x7827,	// (0x00016ba9) common_borders_pane_cp3

0x83f9,	// (0x0001777b) separator_horizontal_pane

0x8401,	// (0x00017783) separator_vertical_pane

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy2_ParamLimits

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy2

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy2_ParamLimits

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy2

0x8397,	// (0x00017719) eswt_control_pane_g3_copy2_ParamLimits

0x8397,	// (0x00017719) eswt_control_pane_g3_copy2

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy2_ParamLimits

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy2

0x26d4,	// (0x00011a56) common_borders_pane_cp4

0x840a,	// (0x0001778c) separator_horizontal_pane_g1

0x8413,	// (0x00017795) separator_horizontal_pane_g2

0x841c,	// (0x0001779e) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0001ef8b) separator_horizontal_pane_g

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy3_ParamLimits

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy3

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy3_ParamLimits

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy3

0x8397,	// (0x00017719) eswt_control_pane_g3_copy3_ParamLimits

0x8397,	// (0x00017719) eswt_control_pane_g3_copy3

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy3_ParamLimits

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy3

0x26d4,	// (0x00011a56) common_borders_pane_cp5

0x8425,	// (0x000177a7) separator_vertical_pane_g1

0x842e,	// (0x000177b0) separator_vertical_pane_g2

0x8437,	// (0x000177b9) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0001ef92) separator_vertical_pane_g

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy4_ParamLimits

0x837d,	// (0x000176ff) eswt_control_pane_g1_copy4

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy4_ParamLimits

0x838a,	// (0x0001770c) eswt_control_pane_g2_copy4

0x8397,	// (0x00017719) eswt_control_pane_g3_copy4_ParamLimits

0x8397,	// (0x00017719) eswt_control_pane_g3_copy4

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy4_ParamLimits

0x83a4,	// (0x00017726) eswt_control_pane_g4_copy4

0xe2d1,	// (0x0001d653) eswt_ctrl_combo_button_pane

0xe2d9,	// (0x0001d65b) eswt_ctrl_input_pane

0xe2e1,	// (0x0001d663) popup_choice_list_window_cp70

0xe2e9,	// (0x0001d66b) eswt_ctrl_input_pane_t1

0x26d4,	// (0x00011a56) input_focus_pane_cp70

0x7827,	// (0x00016ba9) bg_button_pane_cp70_ParamLimits

0x7827,	// (0x00016ba9) bg_button_pane_cp70

0xe2f7,	// (0x0001d679) eswt_ctrl_combo_button_pane_g1

0x846e,	// (0x000177f0) wait_bar_pane_cp70

0x4e19,	// (0x0001419b) bg_popup_window_pane_cp70_ParamLimits

0x4e19,	// (0x0001419b) bg_popup_window_pane_cp70

0x8476,	// (0x000177f8) popup_eswt_tasktip_window_t1

0x848c,	// (0x0001780e) wait_bar_pane_cp71_ParamLimits

0x848c,	// (0x0001780e) wait_bar_pane_cp71

0x8498,	// (0x0001781a) grid_eswt_app_pane

0x3bcc,	// (0x00012f4e) scroll_pane_cp70

0xe2ff,	// (0x0001d681) cell_eswt_app_pane_ParamLimits

0xe2ff,	// (0x0001d681) cell_eswt_app_pane

0xe329,	// (0x0001d6ab) cell_eswt_app_pane_g1_ParamLimits

0xe329,	// (0x0001d6ab) cell_eswt_app_pane_g1

0xe358,	// (0x0001d6da) cell_eswt_app_pane_g2_ParamLimits

0xe358,	// (0x0001d6da) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0001ef99) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0001ef99) cell_eswt_app_pane_g

0xe381,	// (0x0001d703) cell_eswt_app_pane_t1_ParamLimits

0xe381,	// (0x0001d703) cell_eswt_app_pane_t1

0x855b,	// (0x000178dd) grid_highlight_pane_cp70_ParamLimits

0x855b,	// (0x000178dd) grid_highlight_pane_cp70

0x433a,	// (0x000136bc) set_content_pane_g1

0xd500,	// (0x0001c882) status_small_volume_pane

0x1a85,	// (0x00010e07) status_small_volume_pane_g1

0x1a8d,	// (0x00010e0f) volume_small2_pane

0x1a96,	// (0x00010e18) volume_small2_pane_g1

0x1a9f,	// (0x00010e21) volume_small2_pane_g2

0x1aa8,	// (0x00010e2a) volume_small2_pane_g3

0x1ab1,	// (0x00010e33) volume_small2_pane_g4

0x1aba,	// (0x00010e3c) volume_small2_pane_g5

0x1ac3,	// (0x00010e45) volume_small2_pane_g6

0x1acc,	// (0x00010e4e) volume_small2_pane_g7

0x1ad5,	// (0x00010e57) volume_small2_pane_g8

0x1ade,	// (0x00010e60) volume_small2_pane_g9

0x1ae7,	// (0x00010e69) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0001ef9e) volume_small2_pane_g

0x7c28,	// (0x00016faa) fep_vkb_top_text_pane_g1_ParamLimits

0xe228,	// (0x0001d5aa) fep_vkb_top_text_pane_t1_ParamLimits

0x7e9d,	// (0x0001721f) popup_preview_fixed_window_g3_ParamLimits

0x7e9d,	// (0x0001721f) popup_preview_fixed_window_g3

0xc1ef,	// (0x0001b571) popup_toolbar_trans_pane

0xdbcd,	// (0x0001cf4f) aid_height_set_list_ParamLimits

0x61e5,	// (0x00015567) aid_size_parent_ParamLimits

0x47b7,	// (0x00013b39) list_highlight_pane_cp2_ParamLimits

0x433a,	// (0x000136bc) set_content_pane_g1_ParamLimits

0xdd86,	// (0x0001d108) list_single_image_pane_ParamLimits

0xdd86,	// (0x0001d108) list_single_image_pane

0xe3b3,	// (0x0001d735) aid_size_cell_image_ParamLimits

0xe3b3,	// (0x0001d735) aid_size_cell_image

0xe3c0,	// (0x0001d742) grid_single_image_pane_ParamLimits

0xe3c0,	// (0x0001d742) grid_single_image_pane

0x5662,	// (0x000149e4) list_single_image_pane_g1_ParamLimits

0x5662,	// (0x000149e4) list_single_image_pane_g1

0x8580,	// (0x00017902) list_single_image_pane_g2_ParamLimits

0x8580,	// (0x00017902) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0001efb3) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0001efb3) list_single_image_pane_g

0x8594,	// (0x00017916) list_single_image_pane_t1_ParamLimits

0x8594,	// (0x00017916) list_single_image_pane_t1

0xe3ce,	// (0x0001d750) cell_image_list_pane_ParamLimits

0xe3ce,	// (0x0001d750) cell_image_list_pane

0xe3e4,	// (0x0001d766) cell_image_list_pane_g1

0xe3ed,	// (0x0001d76f) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0001efb8) cell_image_list_pane_g

0x85d0,	// (0x00017952) aid_size_cell_tb_trans_pane

0x35cc,	// (0x0001294e) bg_tb_trans_pane

0x85e2,	// (0x00017964) grid_tb_trans_pane

0x4cf7,	// (0x00014079) bg_tb_trans_pane_g1

0x4d07,	// (0x00014089) bg_tb_trans_pane_g2

0x4cff,	// (0x00014081) bg_tb_trans_pane_g3

0x4d17,	// (0x00014099) bg_tb_trans_pane_g4

0x4d0f,	// (0x00014091) bg_tb_trans_pane_g5

0x4d37,	// (0x000140b9) bg_tb_trans_pane_g6

0x4d2f,	// (0x000140b1) bg_tb_trans_pane_g7

0x4d1f,	// (0x000140a1) bg_tb_trans_pane_g8

0x4d27,	// (0x000140a9) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0001efbd) bg_tb_trans_pane_g

0x85f6,	// (0x00017978) cell_toolbar_trans_pane_ParamLimits

0x85f6,	// (0x00017978) cell_toolbar_trans_pane

0x7862,	// (0x00016be4) cell_toolbar_trans_pane_g1

0xdfe0,	// (0x0001d362) list_form2_midp_pane_t1

0xdfee,	// (0x0001d370) list_form2_midp_pane_t2

0x0001,

0xfad8,	// (0x0001ee5a) list_form2_midp_pane_t

0x7413,	// (0x00016795) scroll_pane_cp51_ParamLimits

0x761e,	// (0x000169a0) form2_midp_wait_pane_g1

0x7627,	// (0x000169a9) form2_midp_wait_pane_g2

0x7630,	// (0x000169b2) form2_midp_wait_pane_g3

0x0002,

0xfaed,	// (0x0001ee6f) form2_midp_wait_pane_g

0x27c8,	// (0x00011b4a) list_highlight_pane_cp21_ParamLimits

0x767c,	// (0x000169fe) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x768b,	// (0x00016a0d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x63eb,	// (0x0001576d) list_single_2graphic_im_pane_ParamLimits

0x63eb,	// (0x0001576d) list_single_2graphic_im_pane

0xe3f6,	// (0x0001d778) list_single_2graphic_im_pane_g1_ParamLimits

0xe3f6,	// (0x0001d778) list_single_2graphic_im_pane_g1

0xe407,	// (0x0001d789) list_single_2graphic_im_pane_g2_ParamLimits

0xe407,	// (0x0001d789) list_single_2graphic_im_pane_g2

0xe413,	// (0x0001d795) list_single_2graphic_im_pane_g3_ParamLimits

0xe413,	// (0x0001d795) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0001efd0) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0001efd0) list_single_2graphic_im_pane_g

0xe427,	// (0x0001d7a9) list_single_2graphic_im_pane_t1_ParamLimits

0xe427,	// (0x0001d7a9) list_single_2graphic_im_pane_t1

0x7ea9,	// (0x0001722b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ea9,	// (0x0001722b) list_single_graphic_2heading_pane_fp

0x7eed,	// (0x0001726f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7eed,	// (0x0001726f) list_single_graphic_2heading_pane_fp_g1

0x7ebe,	// (0x00017240) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7ebe,	// (0x00017240) list_single_graphic_2heading_pane_fp_g2

0x3215,	// (0x00012597) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3215,	// (0x00012597) list_single_graphic_2heading_pane_fp_g3

0x35f2,	// (0x00012974) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x35f2,	// (0x00012974) list_single_graphic_2heading_pane_fp_g4

0x7eca,	// (0x0001724c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7eca,	// (0x0001724c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb75,	// (0x0001eef7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb75,	// (0x0001eef7) list_single_graphic_2heading_pane_fp_g

0x868a,	// (0x00017a0c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x868a,	// (0x00017a0c) list_single_graphic_2heading_pane_fp_t1

0x7f25,	// (0x000172a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7f25,	// (0x000172a7) list_single_graphic_2heading_pane_fp_t2

0x86a0,	// (0x00017a22) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x86a0,	// (0x00017a22) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0001efd9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0001efd9) list_single_graphic_2heading_pane_fp_t

0x78ee,	// (0x00016c70) fep_hwr_write_pane_g5_ParamLimits

0x78ee,	// (0x00016c70) fep_hwr_write_pane_g5

0x78fa,	// (0x00016c7c) fep_hwr_write_pane_g6_ParamLimits

0x78fa,	// (0x00016c7c) fep_hwr_write_pane_g6

0x834c,	// (0x000176ce) eswt_shell_pane_ParamLimits

0x4e19,	// (0x0001419b) bg_popup_window_pane_cp18_ParamLimits

0x6105,	// (0x00015487) heading_pane_cp70

0x8476,	// (0x000177f8) popup_eswt_tasktip_window_t1_ParamLimits

0xd5ce,	// (0x0001c950) aid_touch_tab_arrow_left

0xd5e4,	// (0x0001c966) aid_touch_tab_arrow_right

0xc8ff,	// (0x0001bc81) title_pane_g3_ParamLimits

0xc8ff,	// (0x0001bc81) title_pane_g3

0x34ab,	// (0x0001282d) set_value_pane_g1

0xc1ef,	// (0x0001b571) popup_toolbar_trans_pane_ParamLimits

0x85d0,	// (0x00017952) aid_size_cell_tb_trans_pane_ParamLimits

0x35cc,	// (0x0001294e) bg_tb_trans_pane_ParamLimits

0x85e2,	// (0x00017964) grid_tb_trans_pane_ParamLimits

0x2a6b,	// (0x00011ded) cont_note_pane_ParamLimits

0x2a6b,	// (0x00011ded) cont_note_pane

0x2dc2,	// (0x00012144) cont_snote2_single_text_pane_ParamLimits

0x2dc2,	// (0x00012144) cont_snote2_single_text_pane

0x2dc2,	// (0x00012144) cont_snote2_single_graphic_pane_ParamLimits

0x2dc2,	// (0x00012144) cont_snote2_single_graphic_pane

0x5457,	// (0x000147d9) cont_note_wait_pane_ParamLimits

0x5457,	// (0x000147d9) cont_note_wait_pane

0x5457,	// (0x000147d9) cont_note_image_pane_ParamLimits

0x5457,	// (0x000147d9) cont_note_image_pane

0x86b6,	// (0x00017a38) popup_note2_window_g1_ParamLimits

0x86b6,	// (0x00017a38) popup_note2_window_g1

0x86e7,	// (0x00017a69) popup_note2_window_t1_ParamLimits

0x86e7,	// (0x00017a69) popup_note2_window_t1

0x872c,	// (0x00017aae) popup_note2_window_t2_ParamLimits

0x872c,	// (0x00017aae) popup_note2_window_t2

0x8771,	// (0x00017af3) popup_note2_window_t3_ParamLimits

0x8771,	// (0x00017af3) popup_note2_window_t3

0x87b6,	// (0x00017b38) popup_note2_window_t4_ParamLimits

0x87b6,	// (0x00017b38) popup_note2_window_t4

0x2aef,	// (0x00011e71) popup_note2_window_t5_ParamLimits

0x2aef,	// (0x00011e71) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0001efe5) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0001efe5) popup_note2_window_t

0x87e5,	// (0x00017b67) popup_note2_image_window_g1_ParamLimits

0x87e5,	// (0x00017b67) popup_note2_image_window_g1

0x87f1,	// (0x00017b73) popup_note2_image_window_g2_ParamLimits

0x87f1,	// (0x00017b73) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0001eff0) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0001eff0) popup_note2_image_window_g

0x8803,	// (0x00017b85) popup_note2_image_window_t1_ParamLimits

0x8803,	// (0x00017b85) popup_note2_image_window_t1

0x881b,	// (0x00017b9d) popup_note2_image_window_t2_ParamLimits

0x881b,	// (0x00017b9d) popup_note2_image_window_t2

0x8833,	// (0x00017bb5) popup_note2_image_window_t3_ParamLimits

0x8833,	// (0x00017bb5) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0001eff5) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0001eff5) popup_note2_image_window_t

0x5465,	// (0x000147e7) popup_note2_wait_window_g1_ParamLimits

0x5465,	// (0x000147e7) popup_note2_wait_window_g1

0x884f,	// (0x00017bd1) popup_note2_wait_window_g2_ParamLimits

0x884f,	// (0x00017bd1) popup_note2_wait_window_g2

0x547d,	// (0x000147ff) popup_note2_wait_window_g3_ParamLimits

0x547d,	// (0x000147ff) popup_note2_wait_window_g3

0x0002,

0xfc7a,	// (0x0001effc) popup_note2_wait_window_g_ParamLimits

0xfc7a,	// (0x0001effc) popup_note2_wait_window_g

0x885b,	// (0x00017bdd) popup_note2_wait_window_t1_ParamLimits

0x885b,	// (0x00017bdd) popup_note2_wait_window_t1

0x8879,	// (0x00017bfb) popup_note2_wait_window_t2_ParamLimits

0x8879,	// (0x00017bfb) popup_note2_wait_window_t2

0x8897,	// (0x00017c19) popup_note2_wait_window_t3_ParamLimits

0x8897,	// (0x00017c19) popup_note2_wait_window_t3

0x88a9,	// (0x00017c2b) popup_note2_wait_window_t4_ParamLimits

0x88a9,	// (0x00017c2b) popup_note2_wait_window_t4

0x0003,

0xfc81,	// (0x0001f003) popup_note2_wait_window_t_ParamLimits

0xfc81,	// (0x0001f003) popup_note2_wait_window_t

0x88bb,	// (0x00017c3d) wait_bar2_pane_ParamLimits

0x88bb,	// (0x00017c3d) wait_bar2_pane

0x88d3,	// (0x00017c55) popup_snote2_single_text_window_g1_ParamLimits

0x88d3,	// (0x00017c55) popup_snote2_single_text_window_g1

0x88fb,	// (0x00017c7d) popup_snote2_single_text_window_t1_ParamLimits

0x88fb,	// (0x00017c7d) popup_snote2_single_text_window_t1

0x8947,	// (0x00017cc9) popup_snote2_single_text_window_t2_ParamLimits

0x8947,	// (0x00017cc9) popup_snote2_single_text_window_t2

0x8993,	// (0x00017d15) popup_snote2_single_text_window_t3_ParamLimits

0x8993,	// (0x00017d15) popup_snote2_single_text_window_t3

0x89d4,	// (0x00017d56) popup_snote2_single_text_window_t4_ParamLimits

0x89d4,	// (0x00017d56) popup_snote2_single_text_window_t4

0x8a0a,	// (0x00017d8c) popup_snote2_single_text_window_t5_ParamLimits

0x8a0a,	// (0x00017d8c) popup_snote2_single_text_window_t5

0x0004,

0xfc8a,	// (0x0001f00c) popup_snote2_single_text_window_t_ParamLimits

0xfc8a,	// (0x0001f00c) popup_snote2_single_text_window_t

0x8a35,	// (0x00017db7) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a35,	// (0x00017db7) popup_snote2_single_graphic_window_g1

0x8a5d,	// (0x00017ddf) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a5d,	// (0x00017ddf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc95,	// (0x0001f017) popup_snote2_single_graphic_window_g_ParamLimits

0xfc95,	// (0x0001f017) popup_snote2_single_graphic_window_g

0x8a85,	// (0x00017e07) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a85,	// (0x00017e07) popup_snote2_single_graphic_window_t1

0x8ad1,	// (0x00017e53) popup_snote2_single_graphic_window_t2_ParamLimits

0x8ad1,	// (0x00017e53) popup_snote2_single_graphic_window_t2

0x8993,	// (0x00017d15) popup_snote2_single_graphic_window_t3_ParamLimits

0x8993,	// (0x00017d15) popup_snote2_single_graphic_window_t3

0x89d4,	// (0x00017d56) popup_snote2_single_graphic_window_t4_ParamLimits

0x89d4,	// (0x00017d56) popup_snote2_single_graphic_window_t4

0x8a0a,	// (0x00017d8c) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a0a,	// (0x00017d8c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9a,	// (0x0001f01c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9a,	// (0x0001f01c) popup_snote2_single_graphic_window_t

0x72d4,	// (0x00016656) clock_nsta_pane_cp2_t1

0x72d4,	// (0x00016656) clock_nsta_pane_cp2_t2

0x0001,

0xfaae,	// (0x0001ee30) clock_nsta_pane_cp2_t

0x35e6,	// (0x00012968) form_field_data_wide_pane_g1_ParamLimits

0x3215,	// (0x00012597) form_field_data_wide_pane_g2_ParamLimits

0x3215,	// (0x00012597) form_field_data_wide_pane_g2

0x35f2,	// (0x00012974) form_field_data_wide_pane_g3_ParamLimits

0x35f2,	// (0x00012974) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001e9f8) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001e9f8) form_field_data_wide_pane_g

0xdf23,	// (0x0001d2a5) grid_touch_3_pane_ParamLimits

0xdf23,	// (0x0001d2a5) grid_touch_3_pane

0xe458,	// (0x0001d7da) cell_touch_3_pane_ParamLimits

0xe458,	// (0x0001d7da) cell_touch_3_pane

0x7862,	// (0x00016be4) cell_touch_3_pane_g1

0x7862,	// (0x00016be4) cell_touch_3_pane_g2

0x0001,

0xfb33,	// (0x0001eeb5) cell_touch_3_pane_g

0x2b21,	// (0x00011ea3) cont_query_data_pane

0x2b29,	// (0x00011eab) cont_query_data_pane_cp1

0x8b4b,	// (0x00017ecd) button_value_adjust_pane_cp7

0x8b53,	// (0x00017ed5) query_popup_pane_cp3

0x3eb3,	// (0x00013235) bg_popup_sub_pane_cp22_ParamLimits

0x0869,	// (0x0000fbeb) navi_navi_volume_pane_cp2

0x0884,	// (0x0000fc06) popup_side_volume_key_window_g2

0x0893,	// (0x0000fc15) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ea8e) popup_side_volume_key_window_g

0x08b0,	// (0x0000fc32) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ea95) popup_side_volume_key_window_t

0x41f9,	// (0x0001357b) popup_side_volume_key_window_ParamLimits

0xcd4d,	// (0x0001c0cf) list_double_graphic_pane_g4_ParamLimits

0xcd4d,	// (0x0001c0cf) list_double_graphic_pane_g4

0xdd62,	// (0x0001d0e4) list_single_2heading_msg_pane_ParamLimits

0xdd62,	// (0x0001d0e4) list_single_2heading_msg_pane

0xe4a0,	// (0x0001d822) list_single_2heading_msg_pane_g1_ParamLimits

0xe4a0,	// (0x0001d822) list_single_2heading_msg_pane_g1

0xe4ac,	// (0x0001d82e) list_single_2heading_msg_pane_g2_ParamLimits

0xe4ac,	// (0x0001d82e) list_single_2heading_msg_pane_g2

0xe4bf,	// (0x0001d841) list_single_2heading_msg_pane_g3_ParamLimits

0xe4bf,	// (0x0001d841) list_single_2heading_msg_pane_g3

0xe4cb,	// (0x0001d84d) list_single_2heading_msg_pane_g4_ParamLimits

0xe4cb,	// (0x0001d84d) list_single_2heading_msg_pane_g4

0x0003,

0xfca5,	// (0x0001f027) list_single_2heading_msg_pane_g_ParamLimits

0xfca5,	// (0x0001f027) list_single_2heading_msg_pane_g

0xe4e3,	// (0x0001d865) list_single_2heading_msg_pane_t1_ParamLimits

0xe4e3,	// (0x0001d865) list_single_2heading_msg_pane_t1

0xe50b,	// (0x0001d88d) list_single_2heading_msg_pane_t2_ParamLimits

0xe50b,	// (0x0001d88d) list_single_2heading_msg_pane_t2

0xe576,	// (0x0001d8f8) list_single_2heading_msg_pane_t3_ParamLimits

0xe576,	// (0x0001d8f8) list_single_2heading_msg_pane_t3

0x8c36,	// (0x00017fb8) list_single_2heading_msg_pane_t4_ParamLimits

0x8c36,	// (0x00017fb8) list_single_2heading_msg_pane_t4

0x0003,

0xfcae,	// (0x0001f030) list_single_2heading_msg_pane_t_ParamLimits

0xfcae,	// (0x0001f030) list_single_2heading_msg_pane_t

0x271c,	// (0x00011a9e) title_pane_g4_ParamLimits

0x271c,	// (0x00011a9e) title_pane_g4

0x0678,	// (0x0000f9fa) title_pane_stacon_g3_ParamLimits

0x0678,	// (0x0000f9fa) title_pane_stacon_g3

0x864d,	// (0x000179cf) list_single_2graphic_im_pane_g4_ParamLimits

0x864d,	// (0x000179cf) list_single_2graphic_im_pane_g4

0x5ec2,	// (0x00015244) popup_side_volume_key_window_cp

0x67ce,	// (0x00015b50) main_idle_act2_pane_t1

0x1289,	// (0x0001060b) toolbar_button_pane_g10

0xcc0a,	// (0x0001bf8c) popup_toolbar_window_cp1

0x72c5,	// (0x00016647) clock_nsta_pane_cp_t1

0x72c5,	// (0x00016647) clock_nsta_pane_cp_t2

0x0001,

0xfaa9,	// (0x0001ee2b) clock_nsta_pane_cp_t

0x0869,	// (0x0000fbeb) navi_navi_volume_pane_cp2_ParamLimits

0x0878,	// (0x0000fbfa) popup_side_volume_key_window_g1_ParamLimits

0x0884,	// (0x0000fc06) popup_side_volume_key_window_g2_ParamLimits

0x0893,	// (0x0000fc15) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ea8e) popup_side_volume_key_window_g_ParamLimits

0x16f1,	// (0x00010a73) fep_hwr_aid_pane

0x1798,	// (0x00010b1a) bg_fep_hwr_top_pane_g4_ParamLimits

0x78be,	// (0x00016c40) fep_hwr_top_pane_g1_ParamLimits

0x78d0,	// (0x00016c52) fep_hwr_top_pane_g2_ParamLimits

0x17b8,	// (0x00010b3a) fep_hwr_top_pane_g3_ParamLimits

0xfafe,	// (0x0001ee80) fep_hwr_top_pane_g_ParamLimits

0x17cd,	// (0x00010b4f) fep_hwr_top_text_pane_ParamLimits

0x5c85,	// (0x00015007) aid_touch_tab_arrow_arrow_2

0x5c8e,	// (0x00015010) aid_touch_tab_arrow_left_2

0x1705,	// (0x00010a87) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x173c,	// (0x00010abe) fep_hwr_prediction_pane

0x7a30,	// (0x00016db2) fep_vkb_prediction_pane

0xe208,	// (0x0001d58a) fep_vkb_side_pane_g3_ParamLimits

0xe208,	// (0x0001d58a) fep_vkb_side_pane_g3

0x1948,	// (0x00010cca) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x19b4,	// (0x00010d36) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x19c1,	// (0x00010d43) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbad,	// (0x0001ef2f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1af0,	// (0x00010e72) fep_hwr_prediction_pane_g1

0x1afa,	// (0x00010e7c) fep_hwr_prediction_pane_g2

0x1b02,	// (0x00010e84) fep_hwr_prediction_pane_g3

0x1b0a,	// (0x00010e8c) fep_hwr_prediction_pane_g4

0x0003,

0xfcb7,	// (0x0001f039) fep_hwr_prediction_pane_g

0x8c5b,	// (0x00017fdd) fep_vkb_prediction_pane_g1

0x8c65,	// (0x00017fe7) fep_vkb_prediction_pane_g2

0x8c6d,	// (0x00017fef) fep_vkb_prediction_pane_g3

0x8c75,	// (0x00017ff7) fep_vkb_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0001f042) fep_vkb_prediction_pane_g

0x1571,	// (0x000108f3) slider_set_pane_g3

0x1585,	// (0x00010907) slider_set_pane_g4

0x159d,	// (0x0001091f) slider_set_pane_g5

0x1571,	// (0x000108f3) slider_set_pane_g6

0x15b3,	// (0x00010935) slider_set_pane_g7

0x634a,	// (0x000156cc) slider_form_pane_g3

0x6353,	// (0x000156d5) slider_form_pane_g4

0x635b,	// (0x000156dd) slider_form_pane_g5

0x634a,	// (0x000156cc) slider_form_pane_g6

0xdd18,	// (0x0001d09a) slider_form_pane_g7

0x6aca,	// (0x00015e4c) slider_set_pane_vc_g3

0x6ad3,	// (0x00015e55) slider_set_pane_vc_g4

0x6adc,	// (0x00015e5e) slider_set_pane_vc_g5

0x6aca,	// (0x00015e4c) slider_set_pane_vc_g6

0x6ae5,	// (0x00015e67) slider_set_pane_vc_g7

0x6faa,	// (0x0001632c) slider_form_pane_vc_g1

0x6fb3,	// (0x00016335) slider_form_pane_vc_g2

0x6fbc,	// (0x0001633e) slider_form_pane_vc_g3

0x6faa,	// (0x0001632c) slider_form_pane_vc_g4

0x6fc5,	// (0x00016347) slider_form_pane_vc_g5

0x0004,

0xfa7b,	// (0x0001edfd) slider_form_pane_vc_g

0x033f,	// (0x0000f6c1) main_idle_act3_pane

0x8c7d,	// (0x00017fff) ai3_links_pane

0xe5e4,	// (0x0001d966) popup_ai3_data_window_ParamLimits

0xe5e4,	// (0x0001d966) popup_ai3_data_window

0x26d4,	// (0x00011a56) grid_ai3_links_pane

0xe5fe,	// (0x0001d980) cell_ai3_links_pane_ParamLimits

0xe5fe,	// (0x0001d980) cell_ai3_links_pane

0x8cb8,	// (0x0001803a) bg_popup_sub_pane_cp11

0x8cc5,	// (0x00018047) cell_ai3_links_pane_g1

0x26d4,	// (0x00011a56) bg_popup_sub_pane_cp12

0x8cea,	// (0x0001806c) heading_ai3_data_pane

0x8cf2,	// (0x00018074) list_ai3_gene_pane

0x8cfe,	// (0x00018080) popup_ai3_data_window_g1

0x8d06,	// (0x00018088) heading_ai3_data_pane_g1

0x8d0e,	// (0x00018090) heading_ai3_data_pane_t1

0x8d1c,	// (0x0001809e) list_double_ai3_gene_pane_ParamLimits

0x8d1c,	// (0x0001809e) list_double_ai3_gene_pane

0x8d29,	// (0x000180ab) list_single_ai3_gene_pane_ParamLimits

0x8d29,	// (0x000180ab) list_single_ai3_gene_pane

0x7827,	// (0x00016ba9) list_highlight_pane_cp7_ParamLimits

0x7827,	// (0x00016ba9) list_highlight_pane_cp7

0x8d36,	// (0x000180b8) list_single_a13_gene_pane_t1_ParamLimits

0x8d36,	// (0x000180b8) list_single_a13_gene_pane_t1

0x8d4d,	// (0x000180cf) list_single_ai3_gene_pane_g1

0x8d56,	// (0x000180d8) list_single_ai3_gene_pane_g2

0x0001,

0xfcc9,	// (0x0001f04b) list_single_ai3_gene_pane_g

0x8d5e,	// (0x000180e0) list_double_ai3_gene_pane_g1_ParamLimits

0x8d5e,	// (0x000180e0) list_double_ai3_gene_pane_g1

0x8d6a,	// (0x000180ec) list_double_ai3_gene_pane_t1_ParamLimits

0x8d6a,	// (0x000180ec) list_double_ai3_gene_pane_t1

0x8d86,	// (0x00018108) list_double_ai3_gene_pane_t2_ParamLimits

0x8d86,	// (0x00018108) list_double_ai3_gene_pane_t2

0x8d9c,	// (0x0001811e) list_double_ai3_gene_pane_t3_ParamLimits

0x8d9c,	// (0x0001811e) list_double_ai3_gene_pane_t3

0x0002,

0xfcce,	// (0x0001f050) list_double_ai3_gene_pane_t_ParamLimits

0xfcce,	// (0x0001f050) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8b64,	// (0x00017ee6) aid_size_min_col_2

0xe48a,	// (0x0001d80c) aid_size_min_msg_ParamLimits

0xe48a,	// (0x0001d80c) aid_size_min_msg

0xe21c,	// (0x0001d59e) fep_vkb_top_text_pane_g2_ParamLimits

0xe21c,	// (0x0001d59e) fep_vkb_top_text_pane_g2

0x0001,

0xfb2e,	// (0x0001eeb0) fep_vkb_top_text_pane_g_ParamLimits

0xfb2e,	// (0x0001eeb0) fep_vkb_top_text_pane_g

0x033f,	// (0x0000f6c1) main_hc_apps_shell_pane

0x8db9,	// (0x0001813b) grid_hc_apps_pane_ParamLimits

0x8db9,	// (0x0001813b) grid_hc_apps_pane

0x8dc8,	// (0x0001814a) list_hc_apps_pane

0x8dd0,	// (0x00018152) scroll_pane_cp37_ParamLimits

0x8dd0,	// (0x00018152) scroll_pane_cp37

0xe618,	// (0x0001d99a) cell_hc_apps_pane_ParamLimits

0xe618,	// (0x0001d99a) cell_hc_apps_pane

0xe6d6,	// (0x0001da58) cell_hc_apps_pane_g1_ParamLimits

0xe6d6,	// (0x0001da58) cell_hc_apps_pane_g1

0x8ebb,	// (0x0001823d) cell_hc_apps_pane_g2_ParamLimits

0x8ebb,	// (0x0001823d) cell_hc_apps_pane_g2

0x8ed7,	// (0x00018259) cell_hc_apps_pane_g3_ParamLimits

0x8ed7,	// (0x00018259) cell_hc_apps_pane_g3

0x0002,

0xfcd5,	// (0x0001f057) cell_hc_apps_pane_g_ParamLimits

0xfcd5,	// (0x0001f057) cell_hc_apps_pane_g

0xe703,	// (0x0001da85) cell_hc_apps_pane_t1_ParamLimits

0xe703,	// (0x0001da85) cell_hc_apps_pane_t1

0x2a6b,	// (0x00011ded) grid_highlight_pane_cp10_ParamLimits

0x2a6b,	// (0x00011ded) grid_highlight_pane_cp10

0xe741,	// (0x0001dac3) list_single_hc_apps_pane_ParamLimits

0xe741,	// (0x0001dac3) list_single_hc_apps_pane

0xe76e,	// (0x0001daf0) list_single_hc_apps_pane_g1

0xe787,	// (0x0001db09) list_single_hc_apps_pane_g2

0x0001,

0xfcdc,	// (0x0001f05e) list_single_hc_apps_pane_g

0xe7a0,	// (0x0001db22) list_single_hc_apps_pane_g2_copy1

0x8fe3,	// (0x00018365) list_single_hc_apps_pane_t1

0x27c8,	// (0x00011b4a) bg_set_opt_pane_cp_ParamLimits

0x05a0,	// (0x0000f922) setting_slider_pane_t1_ParamLimits

0x05b9,	// (0x0000f93b) setting_slider_pane_t2_ParamLimits

0x05d3,	// (0x0000f955) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001e8e0) setting_slider_pane_t_ParamLimits

0x05eb,	// (0x0000f96d) slider_set_pane_ParamLimits

0x0b12,	// (0x0000fe94) control_pane_g5_ParamLimits

0x0b12,	// (0x0000fe94) control_pane_g5

0x6199,	// (0x0001551b) slider_set_pane_g1_ParamLimits

0x1565,	// (0x000108e7) slider_set_pane_g2_ParamLimits

0x1571,	// (0x000108f3) slider_set_pane_g3_ParamLimits

0x1585,	// (0x00010907) slider_set_pane_g4_ParamLimits

0x159d,	// (0x0001091f) slider_set_pane_g5_ParamLimits

0x1571,	// (0x000108f3) slider_set_pane_g6_ParamLimits

0x15b3,	// (0x00010935) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001ecdc) slider_set_pane_g_ParamLimits

0x42e5,	// (0x00013667) navi_icon_text_pane_ParamLimits

0xd597,	// (0x0001c919) aid_fill_nsta_2_ParamLimits

0xd5ce,	// (0x0001c950) aid_touch_tab_arrow_left_ParamLimits

0xd5e4,	// (0x0001c966) aid_touch_tab_arrow_right_ParamLimits

0xd67f,	// (0x0001ca01) clock_nsta_pane_ParamLimits

0x5c67,	// (0x00014fe9) navi_icon_pane_g1_ParamLimits

0x5c73,	// (0x00014ff5) navi_text_pane_t1_ParamLimits

0x73d1,	// (0x00016753) navi_icon_text_pane_g1_ParamLimits

0x73dd,	// (0x0001675f) navi_icon_text_pane_t1_ParamLimits

0xe76e,	// (0x0001daf0) list_single_hc_apps_pane_g1_ParamLimits

0xe787,	// (0x0001db09) list_single_hc_apps_pane_g2_ParamLimits

0xfcdc,	// (0x0001f05e) list_single_hc_apps_pane_g_ParamLimits

0xe7a0,	// (0x0001db22) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8fe3,	// (0x00018365) list_single_hc_apps_pane_t1_ParamLimits

0xb93c,	// (0x0001acbe) popup_toolbar2_fixed_window_ParamLimits

0xb93c,	// (0x0001acbe) popup_toolbar2_fixed_window

0xc1e5,	// (0x0001b567) popup_toolbar2_float_window

0x26d4,	// (0x00011a56) bg_popup_sub_pane_cp27

0x9011,	// (0x00018393) grid_toolbar2_float_pane

0x26d4,	// (0x00011a56) bg_popup_sub_pane_cp26

0x9011,	// (0x00018393) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0001db3e) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0001db3e) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0001db58) cell_toolbar2_fixed_pane_g1

0x9032,	// (0x000183b4) toolbar2_fixed_button_pane

0x4cf7,	// (0x00014079) toolbar2_fixed_button_pane_g1

0x4d07,	// (0x00014089) toolbar2_fixed_button_pane_g2

0x4cff,	// (0x00014081) toolbar2_fixed_button_pane_g3

0x4d17,	// (0x00014099) toolbar2_fixed_button_pane_g4

0x4d0f,	// (0x00014091) toolbar2_fixed_button_pane_g5

0x4d1f,	// (0x000140a1) toolbar2_fixed_button_pane_g6

0x4d27,	// (0x000140a9) toolbar2_fixed_button_pane_g7

0x4d37,	// (0x000140b9) toolbar2_fixed_button_pane_g8

0x4d2f,	// (0x000140b1) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001ebde) toolbar2_fixed_button_pane_g

0x903a,	// (0x000183bc) cell_toolbar2_float_pane_ParamLimits

0x903a,	// (0x000183bc) cell_toolbar2_float_pane

0x904b,	// (0x000183cd) cell_toolbar2_float_pane_g1

0x9032,	// (0x000183b4) toolbar2_fixed_button_pane_cp

0xe0f6,	// (0x0001d478) fep_vkb_accented_list_pane_ParamLimits

0xe0f6,	// (0x0001d478) fep_vkb_accented_list_pane

0x1928,	// (0x00010caa) bg_popup_fep_shadow_pane_g9

0x4465,	// (0x000137e7) bg_popup_fep_shadow_pane_cp3

0x3897,	// (0x00012c19) list_accented_list_pane

0x9054,	// (0x000183d6) list_single_accented_list_pane_ParamLimits

0x9054,	// (0x000183d6) list_single_accented_list_pane

0x4465,	// (0x000137e7) list_highlight_pane_cp10

0x9065,	// (0x000183e7) list_single_accented_list_pane_t1

0xc10f,	// (0x0001b491) popup_slider_window_ParamLimits

0xc10f,	// (0x0001b491) popup_slider_window

0x8b5b,	// (0x00017edd) aid_indentation_list_msg

0xe8cf,	// (0x0001dc51) bg_popup_window_pane_cp19

0x9189,	// (0x0001850b) popup_slider_window_g1

0x91a5,	// (0x00018527) popup_slider_window_g2

0x91c1,	// (0x00018543) popup_slider_window_g3

0x0005,

0xfce1,	// (0x0001f063) popup_slider_window_g

0x921d,	// (0x0001859f) popup_slider_window_t1

0x9291,	// (0x00018613) small_volume_slider_vertical_pane

0x7862,	// (0x00016be4) small_volume_slider_vertical_pane_g1

0x7862,	// (0x00016be4) small_volume_slider_vertical_pane_g2

0x92ad,	// (0x0001862f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf3,	// (0x0001f075) small_volume_slider_vertical_pane_g

0xb8aa,	// (0x0001ac2c) area_side_right_pane_ParamLimits

0xb8aa,	// (0x0001ac2c) area_side_right_pane

0xc31b,	// (0x0001b69d) aid_size_side_button_ParamLimits

0xc31b,	// (0x0001b69d) aid_size_side_button

0xc334,	// (0x0001b6b6) grid_sctrl_middle_pane_ParamLimits

0xc334,	// (0x0001b6b6) grid_sctrl_middle_pane

0x1b45,	// (0x00010ec7) sctrl_sk_bottom_pane

0x1b56,	// (0x00010ed8) sctrl_sk_top_pane

0x1b68,	// (0x00010eea) aid_touch_sctrl_top

0x1b75,	// (0x00010ef7) bg_sctrl_sk_pane_ParamLimits

0x1b75,	// (0x00010ef7) bg_sctrl_sk_pane

0x1b83,	// (0x00010f05) sctrl_sk_top_pane_g1

0x1b90,	// (0x00010f12) sctrl_sk_top_pane_t1

0x1b68,	// (0x00010eea) aid_touch_sctrl_bottom

0x1b75,	// (0x00010ef7) bg_sctrl_sk_pane_cp_ParamLimits

0x1b75,	// (0x00010ef7) bg_sctrl_sk_pane_cp

0x1bab,	// (0x00010f2d) sctrl_sk_bottom_pane_g1

0x1b90,	// (0x00010f12) sctrl_sk_bottom_pane_t1

0xc34e,	// (0x0001b6d0) cell_sctrl_middle_pane_ParamLimits

0xc34e,	// (0x0001b6d0) cell_sctrl_middle_pane

0xc35f,	// (0x0001b6e1) aid_touch_sctrl_middle_ParamLimits

0xc35f,	// (0x0001b6e1) aid_touch_sctrl_middle

0xc36c,	// (0x0001b6ee) bg_sctrl_middle_pane_ParamLimits

0xc36c,	// (0x0001b6ee) bg_sctrl_middle_pane

0x2218,	// (0x0001159a) cell_sctrl_middle_pane_g1_ParamLimits

0x2218,	// (0x0001159a) cell_sctrl_middle_pane_g1

0xc37a,	// (0x0001b6fc) cell_sctrl_middle_pane_g2_ParamLimits

0xc37a,	// (0x0001b6fc) cell_sctrl_middle_pane_g2

0x0001,

0xfcff,	// (0x0001f081) cell_sctrl_middle_pane_g_ParamLimits

0xfcff,	// (0x0001f081) cell_sctrl_middle_pane_g

0x4cf7,	// (0x00014079) bg_sctrl_middle_pane_g1

0x4cff,	// (0x00014081) bg_sctrl_middle_pane_g2

0x4d07,	// (0x00014089) bg_sctrl_middle_pane_g3

0x4d0f,	// (0x00014091) bg_sctrl_middle_pane_g4

0x4d17,	// (0x00014099) bg_sctrl_middle_pane_g5

0x4d1f,	// (0x000140a1) bg_sctrl_middle_pane_g6

0x4d27,	// (0x000140a9) bg_sctrl_middle_pane_g7

0x4d2f,	// (0x000140b1) bg_sctrl_middle_pane_g8

0x0007,

0xfd04,	// (0x0001f086) bg_sctrl_middle_pane_g

0x4d37,	// (0x000140b9) bg_sctrl_middle_pane_g8_copy1

0x4cf7,	// (0x00014079) bg_sctrl_sk_pane_g1

0x4d07,	// (0x00014089) bg_sctrl_sk_pane_g2

0x4cff,	// (0x00014081) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001ebde) bg_sctrl_sk_pane_g

0x2f80,	// (0x00012302) aid_size_touch_scroll_bar

0x4d17,	// (0x00014099) bg_sctrl_sk_pane_g4

0x4d0f,	// (0x00014091) bg_sctrl_sk_pane_g5

0x4d1f,	// (0x000140a1) bg_sctrl_sk_pane_g6

0x4d27,	// (0x000140a9) bg_sctrl_sk_pane_g7

0x4d37,	// (0x000140b9) bg_sctrl_sk_pane_g8

0x4d2f,	// (0x000140b1) bg_sctrl_sk_pane_g9

0x0cda,	// (0x0001005c) popup_fep_china_hwr2_fs_candidate_window

0xbc29,	// (0x0001afab) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbc29,	// (0x0001afab) popup_fep_china_hwr2_fs_control_window

0x1948,	// (0x00010cca) sctrl_sk_top_pane_g2

0x0001,

0xfcfa,	// (0x0001f07c) sctrl_sk_top_pane_g

0xe987,	// (0x0001dd09) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0001dd09) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0001dd1d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0001dd1d) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0001dd34) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0001dd34) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0001dd46) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0001dd46) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0001dd5a) popup_fep_china_hwr2_fs_control_funtion_grid

0x9309,	// (0x0001868b) aid_fep_china_hwr2_fs_candi_cell

0x26d4,	// (0x00011a56) bg_popup_fep_shadow_pane_cp6

0x9313,	// (0x00018695) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0001dd62) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0001dd62) cell_fep_china_hwr2_fs_funtion_grid

0x7862,	// (0x00016be4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9335,	// (0x000186b7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9335,	// (0x000186b7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9343,	// (0x000186c5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9343,	// (0x000186c5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd15,	// (0x0001f097) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd15,	// (0x0001f097) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0001dd7a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0001dd7a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0001dd8f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0001dd8f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1a,	// (0x0001f09c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1a,	// (0x0001f09c) cell_fep_china_hwr2_fs_funtion_grid_t

0x938a,	// (0x0001870c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9392,	// (0x00018714) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x939a,	// (0x0001871c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1f,	// (0x0001f0a1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x93a2,	// (0x00018724) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x93a2,	// (0x00018724) cell_fep_china_hwr2_fs_candidate_grid

0x93bb,	// (0x0001873d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93c3,	// (0x00018745) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7862,	// (0x00016be4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7862,	// (0x00016be4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb33,	// (0x0001eeb5) cell_fep_china_hwr2_fs_candidate_grid_g

0x93cb,	// (0x0001874d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48bf,	// (0x00013c41) clock_nsta_pane_cp_24_ParamLimits

0x48bf,	// (0x00013c41) clock_nsta_pane_cp_24

0x493d,	// (0x00013cbf) indicator_nsta_pane_cp_24_ParamLimits

0x493d,	// (0x00013cbf) indicator_nsta_pane_cp_24

0x5ae3,	// (0x00014e65) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ec43) heading_pane_g

0x6617,	// (0x00015999) grid_sct_catagory_button_pane

0x6647,	// (0x000159c9) scroll_pane_cp5_ParamLimits

0x741f,	// (0x000167a1) button_value_adjust_pane_cp5_ParamLimits

0x741f,	// (0x000167a1) button_value_adjust_pane_cp5

0x751b,	// (0x0001689d) form2_midp_time_pane_ParamLimits

0x93d9,	// (0x0001875b) cell_sct_catagory_button_pane_ParamLimits

0x93d9,	// (0x0001875b) cell_sct_catagory_button_pane

0x7827,	// (0x00016ba9) bg_button_pane_cp01_ParamLimits

0x7827,	// (0x00016ba9) bg_button_pane_cp01

0x7862,	// (0x00016be4) cell_sct_catagory_button_pane_g1

0xc188,	// (0x0001b50a) popup_tb_extension_window

0xea29,	// (0x0001ddab) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0001ddab) aid_size_cell_ext

0x2dc2,	// (0x00012144) bg_tb_trans_pane_cp1_ParamLimits

0x2dc2,	// (0x00012144) bg_tb_trans_pane_cp1

0xea4f,	// (0x0001ddd1) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0001ddd1) grid_tb_ext_pane

0xea8a,	// (0x0001de0c) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0001de0c) cell_tb_ext_pane

0xeab2,	// (0x0001de34) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0001de34) cell_tb_ext_pane_g1

0x946d,	// (0x000187ef) cell_tb_ext_pane_t1

0x2a6b,	// (0x00011ded) list_highlight_pane_cp11_ParamLimits

0x2a6b,	// (0x00011ded) list_highlight_pane_cp11

0xb951,	// (0x0001acd3) popup_uni_indicator_window_ParamLimits

0xb951,	// (0x0001acd3) popup_uni_indicator_window

0x35cc,	// (0x0001294e) bg_popup_sub_pane_cp14

0x9488,	// (0x0001880a) list_uniindi_pane

0x9494,	// (0x00018816) uniindi_top_pane

0x2a6b,	// (0x00011ded) bg_uniindi_top_pane

0x94b3,	// (0x00018835) uniindi_top_pane_g1

0x94c9,	// (0x0001884b) uniindi_top_pane_g2

0x0003,

0xfd26,	// (0x0001f0a8) uniindi_top_pane_g

0x94f3,	// (0x00018875) uniindi_top_pane_t1

0x951d,	// (0x0001889f) list_single_uniindi_pane_ParamLimits

0x951d,	// (0x0001889f) list_single_uniindi_pane

0x7862,	// (0x00016be4) bg_uniindi_top_pane_g1

0x9530,	// (0x000188b2) list_single_uniindi_pane_g1

0x9543,	// (0x000188c5) list_single_uniindi_pane_t1

0x033f,	// (0x0000f6c1) control_bg_pane

0x9568,	// (0x000188ea) bg_sctrl_sk_pane_cp1

0x9571,	// (0x000188f3) bg_sctrl_sk_pane_cp2

0x957a,	// (0x000188fc) control_bg_pane_g1

0x9583,	// (0x00018905) control_bg_pane_g2

0x0001,

0xfd2f,	// (0x0001f0b1) control_bg_pane_g

0x727a,	// (0x000165fc) cell_indicator_nsta_pane_g1_ParamLimits

0xdf50,	// (0x0001d2d2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa97,	// (0x0001ee19) cell_indicator_nsta_pane_g_ParamLimits

0x75a3,	// (0x00016925) form2_midp_time_pane_t1_ParamLimits

0x16e3,	// (0x00010a65) main_idle_act4_pane_ParamLimits

0x16e3,	// (0x00010a65) main_idle_act4_pane

0xc188,	// (0x0001b50a) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0001ddf3) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0001ddf3) tb_ext_find_pane

0x958c,	// (0x0001890e) ai_gene_pane_1_cp1

0x45ac,	// (0x0001392e) ai_gene_pane_2_cp1

0x9594,	// (0x00018916) list_single_idle_plugin_calendar_pane

0x959d,	// (0x0001891f) list_single_idle_plugin_notification_pane

0x95a6,	// (0x00018928) list_single_idle_plugin_player_pane

0xeacf,	// (0x0001de51) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0001de51) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0001de79) main_idle_act4_pane_t1

0xeb0d,	// (0x0001de8f) main_idle_act4_pane_t2

0x0001,

0xfd34,	// (0x0001f0b6) main_idle_act4_pane_t

0xeb23,	// (0x0001dea5) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0001dea5) middle_sk_idle_act4_pane

0xeb3f,	// (0x0001dec1) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0001dee9) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0001dee9) shortcut_wheel_idle_act4_pane

0x7862,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g1

0x7862,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g2

0x7862,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g3

0x7862,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g4

0x7862,	// (0x00016be4) shortcut_wheel_idle_act4_pane_g5

0x9639,	// (0x000189bb) shortcut_wheel_idle_act4_pane_g6

0x9641,	// (0x000189c3) shortcut_wheel_idle_act4_pane_g7

0x9649,	// (0x000189cb) shortcut_wheel_idle_act4_pane_g8

0x9651,	// (0x000189d3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd39,	// (0x0001f0bb) shortcut_wheel_idle_act4_pane_g

0xd54b,	// (0x0001c8cd) middle_sk_idle_act4_pane_g1_ParamLimits

0xd54b,	// (0x0001c8cd) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0001df66) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0001df66) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5c,	// (0x0001f0de) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5c,	// (0x0001f0de) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0001df7e) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0001df7e) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0001dfad) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0001dfad) grid_ai_shortcut_pane

0xec48,	// (0x0001dfca) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0001dfca) list_highlight_pane_cp16

0xec55,	// (0x0001dfd7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0001dfd7) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0001dfe3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0001dfe3) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0001dfff) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0001dfff) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd61,	// (0x0001f0e3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd61,	// (0x0001f0e3) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0001e014) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0001e014) cell_ai_shortcut_pane

0xeca8,	// (0x0001e02a) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0001e02a) cell_ai_shortcut_pane_g1

0x958c,	// (0x0001890e) ai_gene_pane_1_cp2

0x9781,	// (0x00018b03) ai_gene_pane_2_cp2

0x9789,	// (0x00018b0b) list_highlight_pane_cp15

0x9792,	// (0x00018b14) list_single_idle_plugin_calendar_pane_g1

0x9789,	// (0x00018b0b) list_highlight_pane_cp17

0x979a,	// (0x00018b1c) list_single_idle_plugin_calendar_pane_g1_copy1

0x97a2,	// (0x00018b24) list_single_idle_plugin_player_pane_g1

0x6870,	// (0x00015bf2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd68,	// (0x0001f0ea) list_single_idle_plugin_player_pane_g

0x97aa,	// (0x00018b2c) list_single_idle_plugin_player_pane_t1

0x97b8,	// (0x00018b3a) list_single_idle_plugin_player_pane_t2

0x97c6,	// (0x00018b48) list_single_idle_plugin_player_pane_t3

0x97d4,	// (0x00018b56) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6d,	// (0x0001f0ef) list_single_idle_plugin_player_pane_t

0x97e2,	// (0x00018b64) wait_bar_pane_cp15

0x97ea,	// (0x00018b6c) grid_ai_notification_pane

0x6870,	// (0x00015bf2) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0001e04c) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0001e04c) cell_ai_notification_pane

0x9800,	// (0x00018b82) cell_ai_notification_pane_g1

0x9808,	// (0x00018b8a) cell_ai_notification_pane_t1

0xecd7,	// (0x0001e059) tb_ext_find_button_pane

0xecdf,	// (0x0001e061) tb_ext_find_pane_g1

0xece7,	// (0x0001e069) tb_ext_find_pane_t1

0x3dc3,	// (0x00013145) tb_ext_find_button_pane_g1

0x9834,	// (0x00018bb6) tb_ext_find_button_pane_g2

0x0001,

0xfd76,	// (0x0001f0f8) tb_ext_find_button_pane_g

0xeaf7,	// (0x0001de79) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0001de8f) main_idle_act4_pane_t2_ParamLimits

0xfd34,	// (0x0001f0b6) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0001dec1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0001ded9) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0001ded9) sat_plugin_idle_act4_pane

0xecf5,	// (0x0001e077) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0001e077) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0001e08f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0001e08f) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0001e0a7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0001e0a7) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0001e0bf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0001e0bf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0001f0fd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0001f0fd) sat_plugin_idle_act4_pane_t

0x0404,	// (0x0000f786) popup_battery_window_ParamLimits

0x0404,	// (0x0000f786) popup_battery_window

0x2a6b,	// (0x00011ded) bg_popup_sub_pane_cp25_ParamLimits

0x2a6b,	// (0x00011ded) bg_popup_sub_pane_cp25

0x9889,	// (0x00018c0b) popup_battery_window_g1_ParamLimits

0x9889,	// (0x00018c0b) popup_battery_window_g1

0x9895,	// (0x00018c17) popup_battery_window_t1_ParamLimits

0x9895,	// (0x00018c17) popup_battery_window_t1

0x98a7,	// (0x00018c29) popup_battery_window_t2_ParamLimits

0x98a7,	// (0x00018c29) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0001f106) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0001f106) popup_battery_window_t

0xd3d2,	// (0x0001c754) midp_canvas_pane_ParamLimits

0xd42f,	// (0x0001c7b1) midp_keypad_pane_ParamLimits

0xd42f,	// (0x0001c7b1) midp_keypad_pane

0x47b7,	// (0x00013b39) main_midp_pane_ParamLimits

0x72e3,	// (0x00016665) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0001e0d7) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0001e0d7) aid_size_cell_midp_keypad

0xed73,	// (0x0001e0f5) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0001e0f5) midp_keyp_game_grid_pane

0xed9a,	// (0x0001e11c) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0001e11c) midp_keyp_rocker_pane

0xedeb,	// (0x0001e16d) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0001e16d) midp_keyp_sk_left_pane

0xee3f,	// (0x0001e1c1) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0001e1c1) midp_keyp_sk_right_pane

0x26d4,	// (0x00011a56) bg_button_pane_cp03

0xee93,	// (0x0001e215) midp_keyp_sk_left_pane_g1

0x26d4,	// (0x00011a56) bg_button_pane_cp04

0xee93,	// (0x0001e215) midp_keyp_sk_right_pane_g1

0x7862,	// (0x00016be4) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0001e21e) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0001e21e) keyp_game_cell_pane

0x26d4,	// (0x00011a56) bg_button_pane_cp02

0xeec0,	// (0x0001e242) keyp_game_cell_pane_g1

0xb8ec,	// (0x0001ac6e) popup_fep_vkb2_window_ParamLimits

0xb8ec,	// (0x0001ac6e) popup_fep_vkb2_window

0xc386,	// (0x0001b708) aid_size_cell_vkb2_ParamLimits

0xc386,	// (0x0001b708) aid_size_cell_vkb2

0xc3bc,	// (0x0001b73e) popup_fep_vkb2_window_g1_ParamLimits

0xc3bc,	// (0x0001b73e) popup_fep_vkb2_window_g1

0xc40c,	// (0x0001b78e) vkb2_area_bottom_pane_ParamLimits

0xc40c,	// (0x0001b78e) vkb2_area_bottom_pane

0xc460,	// (0x0001b7e2) vkb2_area_keypad_pane_ParamLimits

0xc460,	// (0x0001b7e2) vkb2_area_keypad_pane

0xc4a8,	// (0x0001b82a) vkb2_area_top_pane_ParamLimits

0xc4a8,	// (0x0001b82a) vkb2_area_top_pane

0xc52e,	// (0x0001b8b0) vkb2_top_entry_pane_ParamLimits

0xc52e,	// (0x0001b8b0) vkb2_top_entry_pane

0xc55b,	// (0x0001b8dd) vkb2_top_grid_left_pane_ParamLimits

0xc55b,	// (0x0001b8dd) vkb2_top_grid_left_pane

0xc57b,	// (0x0001b8fd) vkb2_top_grid_right_pane_ParamLimits

0xc57b,	// (0x0001b8fd) vkb2_top_grid_right_pane

0x1e17,	// (0x00011199) vkb2_cell_keypad_pane_ParamLimits

0x1e17,	// (0x00011199) vkb2_cell_keypad_pane

0xc5c1,	// (0x0001b943) vkb2_area_bottom_grid_pane_ParamLimits

0xc5c1,	// (0x0001b943) vkb2_area_bottom_grid_pane

0xc5eb,	// (0x0001b96d) vkb2_area_bottom_pane_g1_ParamLimits

0xc5eb,	// (0x0001b96d) vkb2_area_bottom_pane_g1

0xc611,	// (0x0001b993) vkb2_area_bottom_pane_g2_ParamLimits

0xc611,	// (0x0001b993) vkb2_area_bottom_pane_g2

0xc642,	// (0x0001b9c4) vkb2_area_bottom_pane_g3_ParamLimits

0xc642,	// (0x0001b9c4) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0001f10b) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0001f10b) vkb2_area_bottom_pane_g

0x1fc1,	// (0x00011343) vkb2_top_cell_left_pane_ParamLimits

0x1fc1,	// (0x00011343) vkb2_top_cell_left_pane

0xeed6,	// (0x0001e258) vkb2_top_entry_pane_g1_ParamLimits

0xeed6,	// (0x0001e258) vkb2_top_entry_pane_g1

0xeee4,	// (0x0001e266) vkb2_top_entry_pane_t1_ParamLimits

0xeee4,	// (0x0001e266) vkb2_top_entry_pane_t1

0x9a79,	// (0x00018dfb) vkb2_top_entry_pane_t2_ParamLimits

0x9a79,	// (0x00018dfb) vkb2_top_entry_pane_t2

0x9aab,	// (0x00018e2d) vkb2_top_entry_pane_t3_ParamLimits

0x9aab,	// (0x00018e2d) vkb2_top_entry_pane_t3

0x0002,

0xfd90,	// (0x0001f112) vkb2_top_entry_pane_t_ParamLimits

0xfd90,	// (0x0001f112) vkb2_top_entry_pane_t

0xc6ac,	// (0x0001ba2e) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6ac,	// (0x0001ba2e) vkb2_top_grid_right_pane_g1

0x2024,	// (0x000113a6) vkb2_top_grid_right_pane_g2_ParamLimits

0x2024,	// (0x000113a6) vkb2_top_grid_right_pane_g2

0x203c,	// (0x000113be) vkb2_top_grid_right_pane_g3_ParamLimits

0x203c,	// (0x000113be) vkb2_top_grid_right_pane_g3

0xc6c2,	// (0x0001ba44) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6c2,	// (0x0001ba44) vkb2_top_grid_right_pane_g4

0x0003,

0xfd97,	// (0x0001f119) vkb2_top_grid_right_pane_g_ParamLimits

0xfd97,	// (0x0001f119) vkb2_top_grid_right_pane_g

0x206a,	// (0x000113ec) vkb2_top_cell_left_pane_g1

0x2081,	// (0x00011403) vkb2_cell_keypad_pane_g1_ParamLimits

0x2081,	// (0x00011403) vkb2_cell_keypad_pane_g1

0x9acf,	// (0x00018e51) vkb2_cell_keypad_pane_t1_ParamLimits

0x9acf,	// (0x00018e51) vkb2_cell_keypad_pane_t1

0x208f,	// (0x00011411) vkb2_cell_bottom_grid_pane_ParamLimits

0x208f,	// (0x00011411) vkb2_cell_bottom_grid_pane

0x20c8,	// (0x0001144a) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0001df0a) aid_call2_pane_cp02

0xeb90,	// (0x0001df12) aid_call_pane_cp02

0xeb98,	// (0x0001df1a) clock_digital_number_pane_cp10

0xeba0,	// (0x0001df22) clock_digital_number_pane_cp11

0xeba8,	// (0x0001df2a) clock_digital_number_pane_cp12

0xebb0,	// (0x0001df32) clock_digital_number_pane_cp13

0xebb8,	// (0x0001df3a) clock_digital_separator_pane_cp10

0x3dc3,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g1

0x3dc3,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0001df42) popup_clock_digital_analogue_window_cp2_g3

0x3dc3,	// (0x00013145) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0001df42) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4c,	// (0x0001f0ce) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0001df4a) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0001df58) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd57,	// (0x0001f0d9) popup_clock_digital_analogue_window_cp2_t

0x7862,	// (0x00016be4) clock_digital_number_pane_cp10_g1

0x7862,	// (0x00016be4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001eeb5) clock_digital_number_pane_cp10_g

0x7862,	// (0x00016be4) clock_digital_separator_pane_cp10_g1

0x7862,	// (0x00016be4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb33,	// (0x0001eeb5) clock_digital_separator_pane_cp10_g

0x94d5,	// (0x00018857) uniindi_top_pane_g3

0x94e6,	// (0x00018868) uniindi_top_pane_g4

0x1ea2,	// (0x00011224) vkb2_row_keypad_pane_ParamLimits

0x1ea2,	// (0x00011224) vkb2_row_keypad_pane

0x20e4,	// (0x00011466) vkb2_cell_t_keypad_pane_ParamLimits

0x20e4,	// (0x00011466) vkb2_cell_t_keypad_pane

0x20f4,	// (0x00011476) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x20f4,	// (0x00011476) vkb2_cell_t_keypad_pane_cp08

0x2107,	// (0x00011489) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2107,	// (0x00011489) vkb2_cell_t_keypad_pane_cp09

0x211b,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x211b,	// (0x0001149d) vkb2_cell_t_keypad_pane_cp01

0x212c,	// (0x000114ae) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x212c,	// (0x000114ae) vkb2_cell_t_keypad_pane_cp02

0x213d,	// (0x000114bf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x213d,	// (0x000114bf) vkb2_cell_t_keypad_pane_cp03

0x214e,	// (0x000114d0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x214e,	// (0x000114d0) vkb2_cell_t_keypad_pane_cp04

0x215f,	// (0x000114e1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x215f,	// (0x000114e1) vkb2_cell_t_keypad_pane_cp05

0x2170,	// (0x000114f2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2170,	// (0x000114f2) vkb2_cell_t_keypad_pane_cp06

0x2181,	// (0x00011503) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2181,	// (0x00011503) vkb2_cell_t_keypad_pane_cp07

0x2192,	// (0x00011514) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2192,	// (0x00011514) vkb2_cell_t_keypad_pane_cp10

0x1948,	// (0x00010cca) vkb2_cell_t_keypad_pane_g1

0x9ae6,	// (0x00018e68) vkb2_cell_t_keypad_pane_t1

0x033f,	// (0x0000f6c1) popup_grid_graphic2_window

0xef1d,	// (0x0001e29f) aid_size_cell_graphic2_ParamLimits

0xef1d,	// (0x0001e29f) aid_size_cell_graphic2

0xef5b,	// (0x0001e2dd) bg_popup_window_pane_cp21_ParamLimits

0xef5b,	// (0x0001e2dd) bg_popup_window_pane_cp21

0xef69,	// (0x0001e2eb) graphic2_pages_pane_ParamLimits

0xef69,	// (0x0001e2eb) graphic2_pages_pane

0xefbf,	// (0x0001e341) grid_graphic2_control_pane_ParamLimits

0xefbf,	// (0x0001e341) grid_graphic2_control_pane

0xf007,	// (0x0001e389) grid_graphic2_pane_ParamLimits

0xf007,	// (0x0001e389) grid_graphic2_pane

0xf08e,	// (0x0001e410) cell_graphic2_pane

0x033f,	// (0x0000f6c1) main_comp_mode_pane

0x8cf2,	// (0x00018074) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0001dc51) bg_popup_window_pane_cp19_ParamLimits

0x912b,	// (0x000184ad) bg_touch_area_indi_pane_ParamLimits

0x912b,	// (0x000184ad) bg_touch_area_indi_pane

0x9141,	// (0x000184c3) bg_touch_area_indi_pane_cp01_ParamLimits

0x9141,	// (0x000184c3) bg_touch_area_indi_pane_cp01

0x9157,	// (0x000184d9) bg_touch_area_indi_pane_cp02_ParamLimits

0x9157,	// (0x000184d9) bg_touch_area_indi_pane_cp02

0x916f,	// (0x000184f1) bg_touch_area_indi_pane_cp03_ParamLimits

0x916f,	// (0x000184f1) bg_touch_area_indi_pane_cp03

0x9189,	// (0x0001850b) popup_slider_window_g1_ParamLimits

0x91a5,	// (0x00018527) popup_slider_window_g2_ParamLimits

0x91c1,	// (0x00018543) popup_slider_window_g3_ParamLimits

0xfce1,	// (0x0001f063) popup_slider_window_g_ParamLimits

0x921d,	// (0x0001859f) popup_slider_window_t1_ParamLimits

0x9291,	// (0x00018613) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0001e410) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0001e46b) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0001e46b) bg_button_pane_cp10

0xf0fc,	// (0x0001e47e) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0001e47e) bg_button_pane_cp11

0xf10f,	// (0x0001e491) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0001e491) graphic2_pages_pane_g1

0xf12a,	// (0x0001e4ac) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0001e4ac) graphic2_pages_pane_g2

0x0001,

0xfda5,	// (0x0001f127) graphic2_pages_pane_g_ParamLimits

0xfda5,	// (0x0001f127) graphic2_pages_pane_g

0xf142,	// (0x0001e4c4) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0001e4c4) graphic2_pages_pane_t1

0xf15a,	// (0x0001e4dc) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0001e4dc) cell_graphic2_control_pane

0xf18c,	// (0x0001e50e) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0001e50e) cell_graphic2_pane_g1

0xd559,	// (0x0001c8db) cell_graphic2_pane_g2_ParamLimits

0xd559,	// (0x0001c8db) cell_graphic2_pane_g2

0xeec9,	// (0x0001e24b) cell_graphic2_pane_g3_ParamLimits

0xeec9,	// (0x0001e24b) cell_graphic2_pane_g3

0xd566,	// (0x0001c8e8) cell_graphic2_pane_g4_ParamLimits

0xd566,	// (0x0001c8e8) cell_graphic2_pane_g4

0xf199,	// (0x0001e51b) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0001e51b) cell_graphic2_pane_g5

0x0004,

0xfdaa,	// (0x0001f12c) cell_graphic2_pane_g_ParamLimits

0xfdaa,	// (0x0001f12c) cell_graphic2_pane_g

0xf1b9,	// (0x0001e53b) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0001e53b) cell_graphic2_pane_t1

0x5ad7,	// (0x00014e59) grid_highlight_pane_cp11_ParamLimits

0x5ad7,	// (0x00014e59) grid_highlight_pane_cp11

0x2a6b,	// (0x00011ded) bg_button_pane_cp05

0xf202,	// (0x0001e584) cell_graphic2_control_pane_g1

0x7862,	// (0x00016be4) bg_touch_area_indi_pane_g1

0x9dc2,	// (0x00019144) aid_cmod_rocker_key_size

0x9dcc,	// (0x0001914e) aid_cmode_itu_key_size

0x9dd6,	// (0x00019158) main_cmode_video_pane

0x9de0,	// (0x00019162) main_comp_mode_itu_pane

0x9dec,	// (0x0001916e) main_comp_mode_rocker_pane

0x9df8,	// (0x0001917a) cell_cmode_rocker_pane_ParamLimits

0x9df8,	// (0x0001917a) cell_cmode_rocker_pane

0x9e0a,	// (0x0001918c) cell_cmode_itu_pane_ParamLimits

0x9e0a,	// (0x0001918c) cell_cmode_itu_pane

0x35cc,	// (0x0001294e) bg_button_pane_cp06_ParamLimits

0x35cc,	// (0x0001294e) bg_button_pane_cp06

0x7ae0,	// (0x00016e62) cell_cmode_rocker_pane_g1_ParamLimits

0x7ae0,	// (0x00016e62) cell_cmode_rocker_pane_g1

0x9335,	// (0x000186b7) cell_cmode_rocker_pane_g2_ParamLimits

0x9335,	// (0x000186b7) cell_cmode_rocker_pane_g2

0x0001,

0xfdba,	// (0x0001f13c) cell_cmode_rocker_pane_g_ParamLimits

0xfdba,	// (0x0001f13c) cell_cmode_rocker_pane_g

0x26d4,	// (0x00011a56) bg_button_pane_cp07

0x9e1f,	// (0x000191a1) cell_cmode_itu_pane_g1

0x9e28,	// (0x000191aa) cell_cmode_itu_pane_t1

0x9e36,	// (0x000191b8) cell_cmode_itu_pane_t2

0x0001,

0xfdbf,	// (0x0001f141) cell_cmode_itu_pane_t

0x9558,	// (0x000188da) aid_touch_ctrl_left

0x9560,	// (0x000188e2) aid_touch_ctrl_right

0x26d4,	// (0x00011a56) compa_mode_pane

0xf226,	// (0x0001e5a8) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0001e5b2) aid_cmode_itu_key_size_cp

0x9e58,	// (0x000191da) compa_mode_pane_g1

0x9e60,	// (0x000191e2) compa_mode_pane_g2

0x9e68,	// (0x000191ea) compa_mode_pane_g3

0x0002,

0xfdc4,	// (0x0001f146) compa_mode_pane_g

0xf23a,	// (0x0001e5bc) main_comp_mode_itu_pane_cp

0xf242,	// (0x0001e5c4) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0001e5cc) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0001e5cc) cell_cmode_itu_pane_cp

0xf25f,	// (0x0001e5e1) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0001e5e1) cell_cmode_rocker_pane_cp

0x35cc,	// (0x0001294e) bg_button_pane_cp06_cp_ParamLimits

0x35cc,	// (0x0001294e) bg_button_pane_cp06_cp

0x7ae0,	// (0x00016e62) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7ae0,	// (0x00016e62) cell_cmode_rocker_pane_g1_cp

0x7862,	// (0x00016be4) cell_cmode_rocker_pane_g2_cp

0x26d4,	// (0x00011a56) bg_button_pane_cp07_cp

0xf271,	// (0x0001e5f3) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0001e5fc) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0001e5fc) cell_cmode_itu_pane_t2_cp

0xdd0e,	// (0x0001d090) settings_code_pane_cp2

0x27c8,	// (0x00011b4a) bg_popup_window_pane_cp3_ParamLimits

0x2c45,	// (0x00011fc7) heading_pane_cp3_ParamLimits

0x2c51,	// (0x00011fd3) listscroll_popup_graphic_pane_ParamLimits

0x16f1,	// (0x00010a73) fep_hwr_aid_pane_ParamLimits

0x1b68,	// (0x00010eea) aid_touch_sctrl_top_ParamLimits

0x1b83,	// (0x00010f05) sctrl_sk_top_pane_g1_ParamLimits

0x1948,	// (0x00010cca) sctrl_sk_top_pane_g2_ParamLimits

0xfcfa,	// (0x0001f07c) sctrl_sk_top_pane_g_ParamLimits

0x1b90,	// (0x00010f12) sctrl_sk_top_pane_t1_ParamLimits

0x1b68,	// (0x00010eea) aid_touch_sctrl_bottom_ParamLimits

0x1b90,	// (0x00010f12) sctrl_sk_bottom_pane_t1_ParamLimits

0x94a1,	// (0x00018823) aid_area_touch_clock

0xc4f0,	// (0x0001b872) aid_vkb2_area_top_pane_cell_ParamLimits

0xc4f0,	// (0x0001b872) aid_vkb2_area_top_pane_cell

0xc59b,	// (0x0001b91d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc59b,	// (0x0001b91d) aid_vkb2_area_bottom_pane_cell

0x9a31,	// (0x00018db3) popup_char_count_window

0x9eb5,	// (0x00019237) popup_char_count_window_g1

0x9ebe,	// (0x00019240) popup_char_count_window_g2

0x9ec7,	// (0x00019249) popup_char_count_window_g3

0x0002,

0xfdcb,	// (0x0001f14d) popup_char_count_window_g

0x9ed0,	// (0x00019252) popup_char_count_window_t1

0x1c3f,	// (0x00010fc1) popup_fep_char_preview_window_ParamLimits

0x1c3f,	// (0x00010fc1) popup_fep_char_preview_window

0xc510,	// (0x0001b892) vkb2_top_candi_pane_ParamLimits

0xc510,	// (0x0001b892) vkb2_top_candi_pane

0xf288,	// (0x0001e60a) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0001e60a) cell_vkb2_top_candi_pane

0x21a7,	// (0x00011529) bg_popup_fep_char_preview_window_ParamLimits

0x21a7,	// (0x00011529) bg_popup_fep_char_preview_window

0x21b5,	// (0x00011537) popup_fep_char_preview_window_t1_ParamLimits

0x21b5,	// (0x00011537) popup_fep_char_preview_window_t1

0x9f2b,	// (0x000192ad) bg_popup_fep_char_preview_window_g1

0x9f33,	// (0x000192b5) bg_popup_fep_char_preview_window_g2

0x9f3b,	// (0x000192bd) bg_popup_fep_char_preview_window_g3

0x9f43,	// (0x000192c5) bg_popup_fep_char_preview_window_g4

0x9f4b,	// (0x000192cd) bg_popup_fep_char_preview_window_g5

0x21ef,	// (0x00011571) bg_popup_fep_char_preview_window_g6

0x9f53,	// (0x000192d5) bg_popup_fep_char_preview_window_g7

0x9f5b,	// (0x000192dd) bg_popup_fep_char_preview_window_g8

0x9f63,	// (0x000192e5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd2,	// (0x0001f154) bg_popup_fep_char_preview_window_g

0x1948,	// (0x00010cca) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1948,	// (0x00010cca) cell_vkb2_top_candi_pane_g1

0x1956,	// (0x00010cd8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1956,	// (0x00010cd8) cell_vkb2_top_candi_pane_g2

0x9a10,	// (0x00018d92) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a10,	// (0x00018d92) cell_vkb2_top_candi_pane_g3

0x21f7,	// (0x00011579) cell_vkb2_top_candi_pane_g4_ParamLimits

0x21f7,	// (0x00011579) cell_vkb2_top_candi_pane_g4

0x8150,	// (0x000174d2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8150,	// (0x000174d2) cell_vkb2_top_candi_pane_g5

0x2218,	// (0x0001159a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2218,	// (0x0001159a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde5,	// (0x0001f167) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde5,	// (0x0001f167) cell_vkb2_top_candi_pane_g

0x2226,	// (0x000115a8) cell_vkb2_top_candi_pane_t1

0x1551,	// (0x000108d3) aid_size_touch_slider_mark_ParamLimits

0x1551,	// (0x000108d3) aid_size_touch_slider_mark

0xefa5,	// (0x0001e327) grid_graphic2_catg_pane_ParamLimits

0xefa5,	// (0x0001e327) grid_graphic2_catg_pane

0xf061,	// (0x0001e3e3) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0001e3e3) popup_grid_graphic2_window_t1

0xf077,	// (0x0001e3f9) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0001e3f9) popup_grid_graphic2_window_t2

0x0001,

0xfda0,	// (0x0001f122) popup_grid_graphic2_window_t_ParamLimits

0xfda0,	// (0x0001f122) popup_grid_graphic2_window_t

0x2a6b,	// (0x00011ded) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0001e584) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0001e670) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0001e670) cell_graphic2_catg_pane

0x26d4,	// (0x00011a56) bg_button_pane_cp12

0xf300,	// (0x0001e682) cell_graphic2_catg_pane_g1

0x946d,	// (0x000187ef) cell_tb_ext_pane_t1_ParamLimits

0x1fe1,	// (0x00011363) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1fe1,	// (0x00011363) vkb2_top_cell_right_narrow_pane

0x1ff9,	// (0x0001137b) vkb2_top_cell_right_wide_pane_ParamLimits

0x1ff9,	// (0x0001137b) vkb2_top_cell_right_wide_pane

0x16e3,	// (0x00010a65) bg_vkb2_func_pane_ParamLimits

0x16e3,	// (0x00010a65) bg_vkb2_func_pane

0x206a,	// (0x000113ec) vkb2_top_cell_left_pane_g1_ParamLimits

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp03_ParamLimits

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp03

0x20c8,	// (0x0001144a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4cff,	// (0x00014081) bg_vkb2_func_pane_g1

0x4d07,	// (0x00014089) bg_vkb2_func_pane_g2

0x4d17,	// (0x00014099) bg_vkb2_func_pane_g3

0x4d0f,	// (0x00014091) bg_vkb2_func_pane_g4

0x4d1f,	// (0x000140a1) bg_vkb2_func_pane_g5

0x4d27,	// (0x000140a9) bg_vkb2_func_pane_g6

0x4d2f,	// (0x000140b1) bg_vkb2_func_pane_g7

0x4d37,	// (0x000140b9) bg_vkb2_func_pane_g8

0x4cf7,	// (0x00014079) bg_vkb2_func_pane_g9

0x0008,

0xfdf2,	// (0x0001f174) bg_vkb2_func_pane_g

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp01_ParamLimits

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp01

0x206a,	// (0x000113ec) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x206a,	// (0x000113ec) vkb2_top_cell_right_wide_pane_g1

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp02_ParamLimits

0x16e3,	// (0x00010a65) bg_vkb2_fuc_pane_cp02

0x20c8,	// (0x0001144a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20c8,	// (0x0001144a) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0001db91) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0001db91) aid_touch_area_decrease

0xe843,	// (0x0001dbc5) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0001dbc5) aid_touch_area_increase

0xe86b,	// (0x0001dbed) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0001dbed) aid_touch_area_mute

0xe89b,	// (0x0001dc1d) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0001dc1d) aid_touch_area_slider

0xe8db,	// (0x0001dc5d) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0001dc5d) popup_slider_window_g4

0xe903,	// (0x0001dc85) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0001dc85) popup_slider_window_g5

0xe937,	// (0x0001dcb9) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0001dcb9) popup_slider_window_g6

0x924b,	// (0x000185cd) popup_slider_window_t2_ParamLimits

0x924b,	// (0x000185cd) popup_slider_window_t2

0x0001,

0xfcee,	// (0x0001f070) popup_slider_window_t_ParamLimits

0xfcee,	// (0x0001f070) popup_slider_window_t

0xe953,	// (0x0001dcd5) slider_pane_ParamLimits

0xe953,	// (0x0001dcd5) slider_pane

0x9f86,	// (0x00019308) slider_pane_g1_ParamLimits

0x9f86,	// (0x00019308) slider_pane_g1

0x9f9a,	// (0x0001931c) slider_pane_g2_ParamLimits

0x9f9a,	// (0x0001931c) slider_pane_g2

0x9fb0,	// (0x00019332) slider_pane_g3_ParamLimits

0x9fb0,	// (0x00019332) slider_pane_g3

0x0003,

0xfe05,	// (0x0001f187) slider_pane_g_ParamLimits

0xfe05,	// (0x0001f187) slider_pane_g

0xc1d0,	// (0x0001b552) popup_tb_float_extension_window_ParamLimits

0xc1d0,	// (0x0001b552) popup_tb_float_extension_window

0x9fdc,	// (0x0001935e) aid_size_cell_tb_float_ext

0x26d4,	// (0x00011a56) bg_popup_sub_window_cp28

0x9fe8,	// (0x0001936a) grid_tb_float_ext_pane

0x9ff2,	// (0x00019374) cell_tb_float_ext_pane_ParamLimits

0x9ff2,	// (0x00019374) cell_tb_float_ext_pane

0xa00c,	// (0x0001938e) cell_tb_float_ext_pane_g1

0xa015,	// (0x00019397) grid_highlight_pane_cp12

0xc2f9,	// (0x0001b67b) cell_last_hwr_side_pane_ParamLimits

0xc2f9,	// (0x0001b67b) cell_last_hwr_side_pane

0x7862,	// (0x00016be4) cell_last_hwr_side_pane_g1

0xa01e,	// (0x000193a0) cell_last_hwr_side_pane_g2

0x0001,

0xfe0e,	// (0x0001f190) cell_last_hwr_side_pane_g

0xc677,	// (0x0001b9f9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc677,	// (0x0001b9f9) vkb2_area_bottom_space_btn_pane

0x1948,	// (0x00010cca) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9ae6,	// (0x00018e68) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2226,	// (0x000115a8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2245,	// (0x000115c7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2245,	// (0x000115c7) vkb2_area_bottom_space_btn_pane_g1

0x227f,	// (0x00011601) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x227f,	// (0x00011601) vkb2_area_bottom_space_btn_pane_g2

0x22b5,	// (0x00011637) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x22b5,	// (0x00011637) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe13,	// (0x0001f195) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe13,	// (0x0001f195) vkb2_area_bottom_space_btn_pane_g

0x17a6,	// (0x00010b28) cel_fep_hwr_func_pane_ParamLimits

0x17a6,	// (0x00010b28) cel_fep_hwr_func_pane

0xc2ce,	// (0x0001b650) cell_hwr_side_button_pane_ParamLimits

0xc2ce,	// (0x0001b650) cell_hwr_side_button_pane

0x94a1,	// (0x00018823) aid_area_touch_clock_ParamLimits

0x2a6b,	// (0x00011ded) bg_uniindi_top_pane_ParamLimits

0x94b3,	// (0x00018835) uniindi_top_pane_g1_ParamLimits

0x94c9,	// (0x0001884b) uniindi_top_pane_g2_ParamLimits

0x94d5,	// (0x00018857) uniindi_top_pane_g3_ParamLimits

0x94e6,	// (0x00018868) uniindi_top_pane_g4_ParamLimits

0xfd26,	// (0x0001f0a8) uniindi_top_pane_g_ParamLimits

0x94f3,	// (0x00018875) uniindi_top_pane_t1_ParamLimits

0x2a6b,	// (0x00011ded) bg_vkb2_func_pane_cp01_ParamLimits

0x2a6b,	// (0x00011ded) bg_vkb2_func_pane_cp01

0xa027,	// (0x000193a9) cel_fep_hwr_func_pane_g1_ParamLimits

0xa027,	// (0x000193a9) cel_fep_hwr_func_pane_g1

0x2a6b,	// (0x00011ded) bg_vkb2_func_pane_cp02_ParamLimits

0x2a6b,	// (0x00011ded) bg_vkb2_func_pane_cp02

0xa027,	// (0x000193a9) cell_hwr_side_button_pane_g1_ParamLimits

0xa027,	// (0x000193a9) cell_hwr_side_button_pane_g1

0x4b4a,	// (0x00013ecc) status_pane_g4_ParamLimits

0x4b4a,	// (0x00013ecc) status_pane_g4

0x4b64,	// (0x00013ee6) status_pane_t1

0x75b6,	// (0x00016938) form2_midp_gauge_slider_cont_pane

0x75be,	// (0x00016940) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe04f,	// (0x0001d3d1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe061,	// (0x0001d3e3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae6,	// (0x0001ee68) form2_midp_gauge_slider_pane_t_ParamLimits

0x75f4,	// (0x00016976) form2_midp_slider_pane_ParamLimits

0x1bff,	// (0x00010f81) aid_size_cell_func_vkb2_ParamLimits

0x1bff,	// (0x00010f81) aid_size_cell_func_vkb2

0x9fc8,	// (0x0001934a) slider_pane_g4_ParamLimits

0x9fc8,	// (0x0001934a) slider_pane_g4

0xc6d8,	// (0x0001ba5a) form2_midp_gauge_slider_pane_t2_cp01

0xc6e6,	// (0x0001ba68) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc6e6,	// (0x0001ba68) form2_midp_gauge_slider_pane_t3_cp01

0x232a,	// (0x000116ac) form2_midp_slider_pane_cp01

0x26d4,	// (0x00011a56) navi_smil_pane

0xa060,	// (0x000193e2) navi_smil_pane_g1

0xa068,	// (0x000193ea) navi_smil_pane_t1

0xa035,	// (0x000193b7) form2_midp_slider_pane_g1

0xa03e,	// (0x000193c0) form2_midp_slider_pane_g2

0xa046,	// (0x000193c8) form2_midp_slider_pane_g3

0xa035,	// (0x000193b7) form2_midp_slider_pane_g4

0xf309,	// (0x0001e68b) form2_midp_slider_pane_g5

0x0004,

0xfe1c,	// (0x0001f19e) form2_midp_slider_pane_g

0x22ef,	// (0x00011671) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x22ef,	// (0x00011671) vkb2_area_bottom_space_btn_pane_g4

0xd6ca,	// (0x0001ca4c) lc0_navi_pane_ParamLimits

0xd6ca,	// (0x0001ca4c) lc0_navi_pane

0xd734,	// (0x0001cab6) lc0_stat_indi_pane_ParamLimits

0xd734,	// (0x0001cab6) lc0_stat_indi_pane

0xd749,	// (0x0001cacb) ls0_title_pane_ParamLimits

0xd749,	// (0x0001cacb) ls0_title_pane

0x35cc,	// (0x0001294e) bg_popup_sub_pane_cp14_ParamLimits

0x9488,	// (0x0001880a) list_uniindi_pane_ParamLimits

0x9494,	// (0x00018816) uniindi_top_pane_ParamLimits

0x9530,	// (0x000188b2) list_single_uniindi_pane_g1_ParamLimits

0x9543,	// (0x000188c5) list_single_uniindi_pane_t1_ParamLimits

0xc703,	// (0x0001ba85) lc0_stat_clock_pane_ParamLimits

0xc703,	// (0x0001ba85) lc0_stat_clock_pane

0xf314,	// (0x0001e696) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0001e696) lc0_stat_indi_pane_g1

0xf321,	// (0x0001e6a3) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0001e6a3) lc0_stat_indi_pane_g2

0x0001,

0xfe27,	// (0x0001f1a9) lc0_stat_indi_pane_g_ParamLimits

0xfe27,	// (0x0001f1a9) lc0_stat_indi_pane_g

0xc710,	// (0x0001ba92) lc0_uni_indicator_pane_ParamLimits

0xc710,	// (0x0001ba92) lc0_uni_indicator_pane

0xf32e,	// (0x0001e6b0) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0001e6b0) ls0_title_pane_g1

0xf342,	// (0x0001e6c4) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0001e6c4) ls0_title_pane_t1

0xc71d,	// (0x0001ba9f) lc0_uni_indicator_pane_g1_ParamLimits

0xc71d,	// (0x0001ba9f) lc0_uni_indicator_pane_g1

0xa0da,	// (0x0001945c) lc0_stat_clock_pane_t1

0x033f,	// (0x0000f6c1) main_ai5_pane

0xa0e8,	// (0x0001946a) ai5_sk_pane_ParamLimits

0xa0e8,	// (0x0001946a) ai5_sk_pane

0xf370,	// (0x0001e6f2) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0001e6f2) cell_ai5_widget_pane

0xa1a7,	// (0x00019529) aid_size_cell_widget_grid

0xa1bd,	// (0x0001953f) bg_ai5_widget_pane_ParamLimits

0xa1bd,	// (0x0001953f) bg_ai5_widget_pane

0xa231,	// (0x000195b3) cell_ai5_widget_pane_g2

0xa241,	// (0x000195c3) cell_ai5_widget_pane_g3

0xa258,	// (0x000195da) cell_ai5_widget_pane_g4

0xa264,	// (0x000195e6) cell_ai5_widget_pane_g5

0xa270,	// (0x000195f2) cell_ai5_widget_pane_g6

0xa27c,	// (0x000195fe) cell_ai5_widget_pane_g7

0xa2c4,	// (0x00019646) cell_ai5_widget_pane_t1_ParamLimits

0xa2c4,	// (0x00019646) cell_ai5_widget_pane_t1

0xa2e1,	// (0x00019663) cell_ai5_widget_pane_t2_ParamLimits

0xa2e1,	// (0x00019663) cell_ai5_widget_pane_t2

0xa2f9,	// (0x0001967b) cell_ai5_widget_pane_t3_ParamLimits

0xa2f9,	// (0x0001967b) cell_ai5_widget_pane_t3

0xa311,	// (0x00019693) cell_ai5_widget_pane_t4_ParamLimits

0xa311,	// (0x00019693) cell_ai5_widget_pane_t4

0xa32e,	// (0x000196b0) cell_ai5_widget_pane_t5_ParamLimits

0xa32e,	// (0x000196b0) cell_ai5_widget_pane_t5

0xa34d,	// (0x000196cf) cell_ai5_widget_pane_t6_ParamLimits

0xa34d,	// (0x000196cf) cell_ai5_widget_pane_t6

0xa35f,	// (0x000196e1) cell_ai5_widget_pane_t7_ParamLimits

0xa35f,	// (0x000196e1) cell_ai5_widget_pane_t7

0xa378,	// (0x000196fa) cell_ai5_widget_pane_t8_ParamLimits

0xa378,	// (0x000196fa) cell_ai5_widget_pane_t8

0x0009,

0xfe41,	// (0x0001f1c3) cell_ai5_widget_pane_t_ParamLimits

0xfe41,	// (0x0001f1c3) cell_ai5_widget_pane_t

0xa3cc,	// (0x0001974e) grid_ai5_widget_pane

0x35cc,	// (0x0001294e) highlight_cell_ai5_widget_pane_ParamLimits

0x35cc,	// (0x0001294e) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0001e758) ai5_sk_left_pane

0xf3e0,	// (0x0001e762) ai5_sk_middle_pane

0xf3ea,	// (0x0001e76c) ai5_sk_right_pane

0xa401,	// (0x00019783) bg_ai5_widget_pane_g1_ParamLimits

0xa401,	// (0x00019783) bg_ai5_widget_pane_g1

0xa40d,	// (0x0001978f) bg_ai5_widget_pane_g2_ParamLimits

0xa40d,	// (0x0001978f) bg_ai5_widget_pane_g2

0xa419,	// (0x0001979b) bg_ai5_widget_pane_g3_ParamLimits

0xa419,	// (0x0001979b) bg_ai5_widget_pane_g3

0xa425,	// (0x000197a7) bg_ai5_widget_pane_g4_ParamLimits

0xa425,	// (0x000197a7) bg_ai5_widget_pane_g4

0xa431,	// (0x000197b3) bg_ai5_widget_pane_g5_ParamLimits

0xa431,	// (0x000197b3) bg_ai5_widget_pane_g5

0xa43d,	// (0x000197bf) bg_ai5_widget_pane_g6_ParamLimits

0xa43d,	// (0x000197bf) bg_ai5_widget_pane_g6

0xa449,	// (0x000197cb) bg_ai5_widget_pane_g7_ParamLimits

0xa449,	// (0x000197cb) bg_ai5_widget_pane_g7

0xa455,	// (0x000197d7) bg_ai5_widget_pane_g8_ParamLimits

0xa455,	// (0x000197d7) bg_ai5_widget_pane_g8

0xa461,	// (0x000197e3) bg_ai5_widget_pane_g9_ParamLimits

0xa461,	// (0x000197e3) bg_ai5_widget_pane_g9

0x0008,

0xfe56,	// (0x0001f1d8) bg_ai5_widget_pane_g_ParamLimits

0xfe56,	// (0x0001f1d8) bg_ai5_widget_pane_g

0xa493,	// (0x00019815) cell_shortcut_ai5_widget_pane_ParamLimits

0xa493,	// (0x00019815) cell_shortcut_ai5_widget_pane

0x4465,	// (0x000137e7) bg_cell_shortcut_ai5_widget_pane

0xa4a4,	// (0x00019826) cell_grid_ai5_widget_pane_g1

0x4465,	// (0x000137e7) highlight_cell_shortcut_ai5_widget_pane

0x4cff,	// (0x00014081) ai5_sk_left_pane_g1

0xa4ad,	// (0x0001982f) ai5_sk_left_pane_g2

0xa4b5,	// (0x00019837) ai5_sk_left_pane_g3

0xa4bd,	// (0x0001983f) ai5_sk_left_pane_g4

0x0003,

0xfe69,	// (0x0001f1eb) ai5_sk_left_pane_g

0xa4c5,	// (0x00019847) ai5_sk_left_pane_t1

0x4d07,	// (0x00014089) ai5_sk_right_pane_g1

0xa4d3,	// (0x00019855) ai5_sk_right_pane_g2

0xa4db,	// (0x0001985d) ai5_sk_right_pane_g3

0xa4e3,	// (0x00019865) ai5_sk_right_pane_g4

0x0003,

0xfe72,	// (0x0001f1f4) ai5_sk_right_pane_g

0xa4eb,	// (0x0001986d) ai5_sk_right_pane_t1

0x4d07,	// (0x00014089) ai5_sk_middle_pane_g1

0x4cff,	// (0x00014081) ai5_sk_middle_pane_g2

0x4d1f,	// (0x000140a1) ai5_sk_middle_pane_g3

0xa4db,	// (0x0001985d) ai5_sk_middle_pane_g4

0xa4b5,	// (0x00019837) ai5_sk_middle_pane_g5

0xa4f9,	// (0x0001987b) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0001e776) ai5_sk_middle_pane_g7

0x0006,

0xfe7b,	// (0x0001f1fd) ai5_sk_middle_pane_g

0xd5b6,	// (0x0001c938) aid_touch_area_size_lc0_ParamLimits

0xd5b6,	// (0x0001c938) aid_touch_area_size_lc0

0x1977,	// (0x00010cf9) cell_hwr_candidate_pane_t1_ParamLimits

0x4821,	// (0x00013ba3) aid_touch_navi_pane

0xd842,	// (0x0001cbc4) status_dt_navi_pane_ParamLimits

0xd842,	// (0x0001cbc4) status_dt_navi_pane

0xd85a,	// (0x0001cbdc) status_dt_sta_pane_ParamLimits

0xd85a,	// (0x0001cbdc) status_dt_sta_pane

0xf3fc,	// (0x0001e77e) dt_sta_controll_pane

0xf409,	// (0x0001e78b) dt_sta_indi_pane

0xf416,	// (0x0001e798) dt_sta_title_pane

0x2a6b,	// (0x00011ded) bg_dt_sta_indi_pane_ParamLimits

0x2a6b,	// (0x00011ded) bg_dt_sta_indi_pane

0xf428,	// (0x0001e7aa) dt_sta_battery_pane

0xf430,	// (0x0001e7b2) dt_sta_indi_pane_g1

0xa54b,	// (0x000198cd) dt_sta_indi_pane_g2

0xa554,	// (0x000198d6) dt_sta_indi_pane_g3

0x0002,

0xfe8a,	// (0x0001f20c) dt_sta_indi_pane_g

0xa55d,	// (0x000198df) dt_sta_signal_pane

0x35cc,	// (0x0001294e) bg_dt_sta_title_pane_ParamLimits

0x35cc,	// (0x0001294e) bg_dt_sta_title_pane

0xa566,	// (0x000198e8) dt_sta_title_pane_g1

0xa56e,	// (0x000198f0) dt_sta_title_pane_t1_ParamLimits

0xa56e,	// (0x000198f0) dt_sta_title_pane_t1

0x26d4,	// (0x00011a56) bg_dt_sta_control_pane

0xf439,	// (0x0001e7bb) dt_sta_controll_pane_g1

0xa58c,	// (0x0001990e) bg_dt_sta_title_pane_g1

0xa595,	// (0x00019917) bg_dt_sta_title_pane_g2

0xa59e,	// (0x00019920) bg_dt_sta_title_pane_g3

0x0002,

0xfe91,	// (0x0001f213) bg_dt_sta_title_pane_g

0x7862,	// (0x00016be4) bg_dt_sta_indi_pane_g1

0xa5a7,	// (0x00019929) dt_sta_signal_pane_g1

0xa5af,	// (0x00019931) dt_sta_signal_pane_g2

0x0001,

0xfe98,	// (0x0001f21a) dt_sta_signal_pane_g

0xa5b7,	// (0x00019939) dt_sta_battery_pane_g1

0xa5c0,	// (0x00019942) dt_sta_battery_pane_t1

0x7862,	// (0x00016be4) bg_dt_sta_control_pane_g1

0x3ed5,	// (0x00013257) fep_china_uni_eep_pane

0x3edd,	// (0x0001325f) fep_china_uni_entry_pane_ParamLimits

0x3eed,	// (0x0001326f) popup_fep_china_uni_window_g1_ParamLimits

0x3efd,	// (0x0001327f) popup_fep_china_uni_window_g2_ParamLimits

0x3efd,	// (0x0001327f) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ea9a) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ea9a) popup_fep_china_uni_window_g

0xa5cf,	// (0x00019951) fep_china_uni_eep_pane_g1

0xa5d7,	// (0x00019959) fep_china_uni_eep_pane_t1

0xa057,	// (0x000193d9) aid_touch_area_size_smil_player

0x4971,	// (0x00013cf3) lc0_clock_pane

0x4b58,	// (0x00013eda) status_pane_g5_ParamLimits

0x4b58,	// (0x00013eda) status_pane_g5

0xbd52,	// (0x0001b0d4) popup_keymap_window

0x4b16,	// (0x00013e98) status_icon_pane

0xa241,	// (0x000195c3) cell_ai5_widget_pane_g3_ParamLimits

0xa258,	// (0x000195da) cell_ai5_widget_pane_g4_ParamLimits

0xa264,	// (0x000195e6) cell_ai5_widget_pane_g5_ParamLimits

0xa288,	// (0x0001960a) cell_ai5_widget_pane_g8_ParamLimits

0xa288,	// (0x0001960a) cell_ai5_widget_pane_g8

0xa29c,	// (0x0001961e) cell_ai5_widget_pane_g9_ParamLimits

0xa29c,	// (0x0001961e) cell_ai5_widget_pane_g9

0xa2b0,	// (0x00019632) cell_ai5_widget_pane_g10_ParamLimits

0xa2b0,	// (0x00019632) cell_ai5_widget_pane_g10

0xa5e6,	// (0x00019968) status_icon_pane_g1

0x26d4,	// (0x00011a56) bg_popup_sub_pane_cp13

0xa5ee,	// (0x00019970) popup_keymap_window_t1

0xd51c,	// (0x0001c89e) control_pane_g6_ParamLimits

0xd51c,	// (0x0001c89e) control_pane_g6

0xd529,	// (0x0001c8ab) control_pane_g7_ParamLimits

0xd529,	// (0x0001c8ab) control_pane_g7

0xd536,	// (0x0001c8b8) control_pane_g8_ParamLimits

0xd536,	// (0x0001c8b8) control_pane_g8

0xf3fc,	// (0x0001e77e) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0001e78b) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0001e798) dt_sta_title_pane_ParamLimits

0x2f89,	// (0x0001230b) aid_size_touch_scroll_bar_cale

0x0418,	// (0x0000f79a) popup_discreet_window_ParamLimits

0x0418,	// (0x0000f79a) popup_discreet_window

0xb932,	// (0x0001acb4) popup_sk_window

0x5457,	// (0x000147d9) bg_popup_sub_pane_cp28_ParamLimits

0x5457,	// (0x000147d9) bg_popup_sub_pane_cp28

0xa5fc,	// (0x0001997e) popup_discreet_window_g1_ParamLimits

0xa5fc,	// (0x0001997e) popup_discreet_window_g1

0xa61c,	// (0x0001999e) popup_discreet_window_t1_ParamLimits

0xa61c,	// (0x0001999e) popup_discreet_window_t1

0xa63a,	// (0x000199bc) popup_discreet_window_t2_ParamLimits

0xa63a,	// (0x000199bc) popup_discreet_window_t2

0x0002,

0xfe9d,	// (0x0001f21f) popup_discreet_window_t_ParamLimits

0xfe9d,	// (0x0001f21f) popup_discreet_window_t

0x2361,	// (0x000116e3) popup_sk_window_g1

0x236b,	// (0x000116ed) popup_sk_window_g2

0x0001,

0xfea4,	// (0x0001f226) popup_sk_window_g

0x2373,	// (0x000116f5) popup_sk_window_t1

0x2381,	// (0x00011703) popup_sk_window_t1_copy1

0xa231,	// (0x000195b3) cell_ai5_widget_pane_g2_ParamLimits

0xa38a,	// (0x0001970c) cell_ai5_widget_pane_t9_ParamLimits

0xa38a,	// (0x0001970c) cell_ai5_widget_pane_t9

0x26d4,	// (0x00011a56) main_fep_fshwr2_pane

0xc744,	// (0x0001bac6) aid_fshwr2_btn_pane

0xc755,	// (0x0001bad7) aid_fshwr2_syb_pane

0xc766,	// (0x0001bae8) aid_fshwr2_txt_pane

0xc772,	// (0x0001baf4) fshwr2_func_candi_pane

0xc791,	// (0x0001bb13) fshwr2_hwr_syb_pane

0xc7ac,	// (0x0001bb2e) fshwr2_icf_pane

0x033f,	// (0x0000f6c1) fshwr2_icf_bg_pane

0x2401,	// (0x00011783) fshwr2_icf_pane_t1_ParamLimits

0x2401,	// (0x00011783) fshwr2_icf_pane_t1

0x3dc3,	// (0x00013145) fshwr2_func_candi_pane_g1

0xf442,	// (0x0001e7c4) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0001e7c4) fshwr2_func_candi_row_pane

0xc7d8,	// (0x0001bb5a) cell_fshwr2_syb_pane_ParamLimits

0xc7d8,	// (0x0001bb5a) cell_fshwr2_syb_pane

0x1948,	// (0x00010cca) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1948,	// (0x00010cca) fshwr2_hwr_syb_pane_g1

0x033f,	// (0x0000f6c1) bg_popup_call_pane_cp01

0xc7ee,	// (0x0001bb70) fshwr2_func_candi_cell_pane_ParamLimits

0xc7ee,	// (0x0001bb70) fshwr2_func_candi_cell_pane

0xf465,	// (0x0001e7e7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0001e7e7) fshwr2_func_candi_cell_bg_pane

0xc839,	// (0x0001bbbb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc839,	// (0x0001bbbb) fshwr2_func_candi_cell_pane_g1

0xc870,	// (0x0001bbf2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc870,	// (0x0001bbf2) fshwr2_func_candi_cell_pane_t1

0x033f,	// (0x0000f6c1) bg_button_pane_cp08

0xa6a8,	// (0x00019a2a) cell_fshwr2_syb_bg_pane

0xc88b,	// (0x0001bc0d) cell_fshwr2_syb_bg_pane_g1

0xc893,	// (0x0001bc15) cell_fshwr2_syb_bg_pane_t1

0x35cc,	// (0x0001294e) main_tmo_pane

0xdb2e,	// (0x0001ceb0) uni_indicator_pane_g1_ParamLimits

0xdb44,	// (0x0001cec6) uni_indicator_pane_g2_ParamLimits

0xdb5a,	// (0x0001cedc) uni_indicator_pane_g3_ParamLimits

0x5fb1,	// (0x00015333) uni_indicator_pane_g4_ParamLimits

0x5fb1,	// (0x00015333) uni_indicator_pane_g4

0x5fc5,	// (0x00015347) uni_indicator_pane_g5_ParamLimits

0x5fc5,	// (0x00015347) uni_indicator_pane_g5

0x5fc5,	// (0x00015347) uni_indicator_pane_g6_ParamLimits

0x5fc5,	// (0x00015347) uni_indicator_pane_g6

0xf917,	// (0x0001ec99) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0001db6d) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0001db6d) popup_tmo_note_window

0x1be1,	// (0x00010f63) fshwr2_bg_pane

0xc861,	// (0x0001bbe3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc861,	// (0x0001bbe3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea9,	// (0x0001f22b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea9,	// (0x0001f22b) fshwr2_func_candi_cell_pane_g

0x1930,	// (0x00010cb2) bg_popup_window_pane_cp01

0x24cc,	// (0x0001184e) bg_popup_window_pane_g1_cp01

0xa6b0,	// (0x00019a32) bg_popup_window_pane_cp22_ParamLimits

0xa6b0,	// (0x00019a32) bg_popup_window_pane_cp22

0xa6be,	// (0x00019a40) listscroll_tmo_link_pane_ParamLimits

0xa6be,	// (0x00019a40) listscroll_tmo_link_pane

0xa6fe,	// (0x00019a80) popup_tmo_note_window_g1_ParamLimits

0xa6fe,	// (0x00019a80) popup_tmo_note_window_g1

0xa70b,	// (0x00019a8d) tmo_note_info_pane_ParamLimits

0xa70b,	// (0x00019a8d) tmo_note_info_pane

0xf471,	// (0x0001e7f3) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0001e7f3) list_tmo_note_info_pane_g1

0xa73c,	// (0x00019abe) list_tmo_note_info_pane_g2_ParamLimits

0xa73c,	// (0x00019abe) list_tmo_note_info_pane_g2

0x0001,

0xfeae,	// (0x0001f230) list_tmo_note_info_pane_g_ParamLimits

0xfeae,	// (0x0001f230) list_tmo_note_info_pane_g

0xa758,	// (0x00019ada) list_tmo_note_info_text_pane_ParamLimits

0xa758,	// (0x00019ada) list_tmo_note_info_text_pane

0xa7d9,	// (0x00019b5b) list_tmo_link_pane

0xa7e6,	// (0x00019b68) scroll_pane_cp20

0xa7f3,	// (0x00019b75) list_single_tmo_link_pane_ParamLimits

0xa7f3,	// (0x00019b75) list_single_tmo_link_pane

0xa803,	// (0x00019b85) list_single_tmo_link_pane_t1

0xa811,	// (0x00019b93) list_tmo_note_info_text_pane_t1_ParamLimits

0xa811,	// (0x00019b93) list_tmo_note_info_text_pane_t1

0xd153,	// (0x0001c4d5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd153,	// (0x0001c4d5) aid_size_touch_scroll_bar_cp01

0xd083,	// (0x0001c405) aid_size_touch_slider_marker

0xb922,	// (0x0001aca4) popup_settings_window_ParamLimits

0xb922,	// (0x0001aca4) popup_settings_window

0x47d1,	// (0x00013b53) popup_candi_list_indi_window

0x4821,	// (0x00013ba3) aid_touch_navi_pane_ParamLimits

0x1b3c,	// (0x00010ebe) rs_clock_indi_pane

0x1b45,	// (0x00010ec7) sctrl_sk_bottom_pane_ParamLimits

0x1b56,	// (0x00010ed8) sctrl_sk_top_pane_ParamLimits

0x1c59,	// (0x00010fdb) popup_fep_tooltip_window

0xa1a7,	// (0x00019529) aid_size_cell_widget_grid_ParamLimits

0xa21c,	// (0x0001959e) cell_ai5_widget_pane_g1_ParamLimits

0xa21c,	// (0x0001959e) cell_ai5_widget_pane_g1

0xa270,	// (0x000195f2) cell_ai5_widget_pane_g6_ParamLimits

0xa27c,	// (0x000195fe) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2c,	// (0x0001f1ae) cell_ai5_widget_pane_g_ParamLimits

0xfe2c,	// (0x0001f1ae) cell_ai5_widget_pane_g

0xa3ae,	// (0x00019730) cell_ai5_widget_pane_t10_ParamLimits

0xa3ae,	// (0x00019730) cell_ai5_widget_pane_t10

0xa3cc,	// (0x0001974e) grid_ai5_widget_pane_ParamLimits

0xa46d,	// (0x000197ef) cell_contacts_ai5_widget_pane_ParamLimits

0xa46d,	// (0x000197ef) cell_contacts_ai5_widget_pane

0xa64f,	// (0x000199d1) popup_discreet_window_t3_ParamLimits

0xa64f,	// (0x000199d1) popup_discreet_window_t3

0xc7c4,	// (0x0001bb46) popup_fshwr2_char_preview_window_ParamLimits

0xc7c4,	// (0x0001bb46) popup_fshwr2_char_preview_window

0xf488,	// (0x0001e80a) tmo_note_info_pane_t1

0xf49d,	// (0x0001e81f) tmo_note_info_pane_t2

0xf4b4,	// (0x0001e836) tmo_note_info_pane_t3

0xa7b5,	// (0x00019b37) tmo_note_info_pane_t4

0xa7c7,	// (0x00019b49) tmo_note_info_pane_t5

0x0004,

0xfeb3,	// (0x0001f235) tmo_note_info_pane_t

0xa7d9,	// (0x00019b5b) list_tmo_link_pane_ParamLimits

0xa7e6,	// (0x00019b68) scroll_pane_cp20_ParamLimits

0x033f,	// (0x0000f6c1) bg_popup_fep_char_preview_window_cp01

0xa82a,	// (0x00019bac) popup_fshwr2_char_preview_window_t1

0xa838,	// (0x00019bba) popup_candi_list_indi_window_g1

0xa841,	// (0x00019bc3) bg_cell_contacts_ai5_widget_pane

0xa84d,	// (0x00019bcf) cell_contacts_ai5_widget_pane_g1

0x80a5,	// (0x00017427) cell_contacts_ai5_widget_pane_g2

0xa862,	// (0x00019be4) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebe,	// (0x0001f240) cell_contacts_ai5_widget_pane_g

0xa86e,	// (0x00019bf0) cell_contacts_ai5_widget_pane_t1

0x35cc,	// (0x0001294e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa8e5,	// (0x00019c67) settings_container_pane

0x4465,	// (0x000137e7) listscroll_set_pane_copy1

0x6c2e,	// (0x00015fb0) scroll_pane_cp121_copy1

0x5208,	// (0x0001458a) set_content_pane_copy1

0xa8f1,	// (0x00019c73) aid_height_set_list_copy1_ParamLimits

0xa8f1,	// (0x00019c73) aid_height_set_list_copy1

0x61e5,	// (0x00015567) aid_size_parent_copy1_ParamLimits

0x61e5,	// (0x00015567) aid_size_parent_copy1

0xa8fd,	// (0x00019c7f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8fd,	// (0x00019c7f) button_value_adjust_pane_cp6_copy1

0x47b7,	// (0x00013b39) list_highlight_pane_cp2_copy1_ParamLimits

0x47b7,	// (0x00013b39) list_highlight_pane_cp2_copy1

0xa911,	// (0x00019c93) list_set_pane_copy1_ParamLimits

0xa911,	// (0x00019c93) list_set_pane_copy1

0xa880,	// (0x00019c02) main_pane_set_t1_copy1_ParamLimits

0xa880,	// (0x00019c02) main_pane_set_t1_copy1

0xa8ba,	// (0x00019c3c) main_pane_set_t2_copy1_ParamLimits

0xa8ba,	// (0x00019c3c) main_pane_set_t2_copy1

0xa9be,	// (0x00019d40) main_pane_set_t3_copy1

0xa9cc,	// (0x00019d4e) main_pane_set_t4_copy1

0xa8d9,	// (0x00019c5b) set_content_pane_g1_copy1_ParamLimits

0xa8d9,	// (0x00019c5b) set_content_pane_g1_copy1

0xa9da,	// (0x00019d5c) setting_code_pane_copy1

0xa9e2,	// (0x00019d64) setting_slider_graphic_pane_copy1

0xa9e2,	// (0x00019d64) setting_slider_pane_copy1

0xa9e2,	// (0x00019d64) setting_text_pane_copy1

0xa9e2,	// (0x00019d64) setting_volume_pane_copy1

0xa9da,	// (0x00019d5c) settings_code_pane_cp2_copy1

0xa9ea,	// (0x00019d6c) settings_code_pane_cp_copy1_ParamLimits

0xa9ea,	// (0x00019d6c) settings_code_pane_cp_copy1

0x24d5,	// (0x00011857) volume_set_pane_copy1

0xa9fe,	// (0x00019d80) volume_set_pane_g10_copy1

0xaa06,	// (0x00019d88) volume_set_pane_g1_copy1

0xaa0e,	// (0x00019d90) volume_set_pane_g2_copy1

0xaa16,	// (0x00019d98) volume_set_pane_g3_copy1

0xaa1e,	// (0x00019da0) volume_set_pane_g4_copy1

0xaa26,	// (0x00019da8) volume_set_pane_g5_copy1

0xaa2e,	// (0x00019db0) volume_set_pane_g6_copy1

0xaa36,	// (0x00019db8) volume_set_pane_g7_copy1

0xaa3e,	// (0x00019dc0) volume_set_pane_g8_copy1

0xaa46,	// (0x00019dc8) volume_set_pane_g9_copy1

0x27c8,	// (0x00011b4a) bg_set_opt_pane_cp_copy1_ParamLimits

0x27c8,	// (0x00011b4a) bg_set_opt_pane_cp_copy1

0x24dd,	// (0x0001185f) setting_slider_pane_t1_copy1_ParamLimits

0x24dd,	// (0x0001185f) setting_slider_pane_t1_copy1

0x24fb,	// (0x0001187d) setting_slider_pane_t2_copy1_ParamLimits

0x24fb,	// (0x0001187d) setting_slider_pane_t2_copy1

0x2515,	// (0x00011897) setting_slider_pane_t3_copy1_ParamLimits

0x2515,	// (0x00011897) setting_slider_pane_t3_copy1

0x252d,	// (0x000118af) slider_set_pane_copy1_ParamLimits

0x252d,	// (0x000118af) slider_set_pane_copy1

0x36ef,	// (0x00012a71) set_opt_bg_pane_g1_copy2

0x36f7,	// (0x00012a79) set_opt_bg_pane_g2_copy2

0xaa4e,	// (0x00019dd0) set_opt_bg_pane_g3_copy2

0x3707,	// (0x00012a89) set_opt_bg_pane_g4_copy2

0x370f,	// (0x00012a91) set_opt_bg_pane_g5_copy2

0x3717,	// (0x00012a99) set_opt_bg_pane_g6_copy2

0xaa58,	// (0x00019dda) set_opt_bg_pane_g7_copy2

0xaa60,	// (0x00019de2) set_opt_bg_pane_g8_copy2

0xaa6a,	// (0x00019dec) set_opt_bg_pane_g9_copy2

0x2543,	// (0x000118c5) aid_size_touch_slider_mark_copy1_ParamLimits

0x2543,	// (0x000118c5) aid_size_touch_slider_mark_copy1

0xaa74,	// (0x00019df6) slider_set_pane_g1_copy1

0x2557,	// (0x000118d9) slider_set_pane_g2_copy1

0x1571,	// (0x000108f3) slider_set_pane_g3_copy1_ParamLimits

0x1571,	// (0x000108f3) slider_set_pane_g3_copy1

0x1585,	// (0x00010907) slider_set_pane_g4_copy1_ParamLimits

0x1585,	// (0x00010907) slider_set_pane_g4_copy1

0x159d,	// (0x0001091f) slider_set_pane_g5_copy1_ParamLimits

0x159d,	// (0x0001091f) slider_set_pane_g5_copy1

0x1571,	// (0x000108f3) slider_set_pane_g6_copy1_ParamLimits

0x1571,	// (0x000108f3) slider_set_pane_g6_copy1

0x255f,	// (0x000118e1) slider_set_pane_g7_copy1_ParamLimits

0x255f,	// (0x000118e1) slider_set_pane_g7_copy1

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp2_copy1

0xaa7d,	// (0x00019dff) setting_slider_graphic_pane_g1_copy1

0xaa86,	// (0x00019e08) setting_slider_graphic_pane_t1_copy1

0xaa96,	// (0x00019e18) setting_slider_graphic_pane_t2_copy1

0xaaa6,	// (0x00019e28) slider_set_pane_cp_copy1

0xaab6,	// (0x00019e38) input_focus_pane_cp1_copy1

0xaabf,	// (0x00019e41) list_set_text_pane_copy1

0xaac7,	// (0x00019e49) setting_text_pane_g1_copy1

0x2821,	// (0x00011ba3) set_text_pane_t1_copy1

0xaab6,	// (0x00019e38) input_focus_pane_cp2_copy1

0xaac7,	// (0x00019e49) setting_code_pane_g1_copy1

0xaad0,	// (0x00019e52) setting_code_pane_t1_copy1

0xaade,	// (0x00019e60) list_set_graphic_pane_copy1

0x26e8,	// (0x00011a6a) bg_set_opt_pane_cp4_copy1

0x4160,	// (0x000134e2) list_set_graphic_pane_g1_copy1_ParamLimits

0x4160,	// (0x000134e2) list_set_graphic_pane_g1_copy1

0xaaf1,	// (0x00019e73) list_set_graphic_pane_g2_copy1

0x4178,	// (0x000134fa) list_set_graphic_pane_t1_copy1_ParamLimits

0x4178,	// (0x000134fa) list_set_graphic_pane_t1_copy1

0x7862,	// (0x00016be4) rs_clock_indi_pane_g1

0xaaf9,	// (0x00019e7b) rs_clock_indi_pane_t1

0xab07,	// (0x00019e89) rs_indi_pane

0xab0f,	// (0x00019e91) rs_indi_pane_g1

0xab18,	// (0x00019e9a) rs_indi_pane_g2

0xab21,	// (0x00019ea3) rs_indi_pane_g3

0x0002,

0xfec5,	// (0x0001f247) rs_indi_pane_g

0x4465,	// (0x000137e7) bg_popup_preview_window_pane_cp03

0xab2a,	// (0x00019eac) popup_fep_tooltip_window_t1

0x86da,	// (0x00017a5c) popup_note2_window_g2_ParamLimits

0x86da,	// (0x00017a5c) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0001efe0) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0001efe0) popup_note2_window_g

0x8cb8,	// (0x0001803a) bg_popup_sub_pane_cp11_ParamLimits

0x8cc5,	// (0x00018047) cell_ai3_links_pane_g1_ParamLimits

0x8cdc,	// (0x0001805e) cell_ai3_links_pane_t1

0x2821,	// (0x00011ba3) set_text_pane_t1_copy1_ParamLimits

0x4376,	// (0x000136f8) cell_graphic_popup_pane_cp2_ParamLimits

0x4376,	// (0x000136f8) cell_graphic_popup_pane_cp2

0xab38,	// (0x00019eba) cell_graphic_popup_pane_g1_cp2

0x2d9c,	// (0x0001211e) cell_graphic_popup_pane_g2_cp2

0xab40,	// (0x00019ec2) cell_graphic_popup_pane_g3_cp2

0xab48,	// (0x00019eca) cell_graphic_popup_pane_t2_cp2

0x2dad,	// (0x0001212f) grid_highlight_pane_cp3_cp2

0x3ae0,	// (0x00012e62) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35cc,	// (0x0001294e) main_tmo_pane_ParamLimits

0xe7df,	// (0x0001db61) popup_tmo_big_image_note_window

0xa20b,	// (0x0001958d) cell_ai5_widget_list_pane

0xa213,	// (0x00019595) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0001e80a) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0001e81f) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0001e836) tmo_note_info_pane_t3_ParamLimits

0xa7b5,	// (0x00019b37) tmo_note_info_pane_t4_ParamLimits

0xa7c7,	// (0x00019b49) tmo_note_info_pane_t5_ParamLimits

0xfeb3,	// (0x0001f235) tmo_note_info_pane_t_ParamLimits

0xa8e5,	// (0x00019c67) settings_container_pane_ParamLimits

0xaaae,	// (0x00019e30) indicator_popup_pane_cp5

0xaaae,	// (0x00019e30) indicator_popup_pane_cp6

0xaade,	// (0x00019e60) list_set_graphic_pane_copy1_ParamLimits

0x26d4,	// (0x00011a56) bg_popup_window_pane_cp23

0xab56,	// (0x00019ed8) popup_tmo_big_image_note_window_g1

0xab60,	// (0x00019ee2) popup_tmo_big_image_note_window_t1

0xab70,	// (0x00019ef2) popup_tmo_big_image_note_window_t2

0xab80,	// (0x00019f02) popup_tmo_big_image_note_window_t3

0x0002,

0xfecc,	// (0x0001f24e) popup_tmo_big_image_note_window_t

0x7862,	// (0x00016be4) cell_ai5_widget_lrg_icon_pane_g1

0xab90,	// (0x00019f12) cell_ai5_widget_lrg_icon_pane_t1

0xab9e,	// (0x00019f20) cell_ai5_widget_list_row_pane_ParamLimits

0xab9e,	// (0x00019f20) cell_ai5_widget_list_row_pane

0xabb5,	// (0x00019f37) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabb5,	// (0x00019f37) cell_ai5_widget_list_row_pane_g1

0xabc2,	// (0x00019f44) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabc2,	// (0x00019f44) cell_ai5_widget_list_row_pane_t1

0xabf3,	// (0x00019f75) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabf3,	// (0x00019f75) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed3,	// (0x0001f255) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed3,	// (0x0001f255) cell_ai5_widget_list_row_pane_t

0x033f,	// (0x0000f6c1) main_fep_vtchi_ss_pane

0xac37,	// (0x00019fb9) popup_fep_char_pre_window

0xac3f,	// (0x00019fc1) popup_fep_ituss_window

0xf4c9,	// (0x0001e84b) popup_fep_vkbss_window

0xf4d6,	// (0x0001e858) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0001e858) grid_vkbss_keypad_pane

0xac96,	// (0x0001a018) ituss_keypad_pane

0x2581,	// (0x00011903) aid_vkbss_key_offset_ParamLimits

0x2581,	// (0x00011903) aid_vkbss_key_offset

0xc8a2,	// (0x0001bc24) cell_vkbss_key_pane_ParamLimits

0xc8a2,	// (0x0001bc24) cell_vkbss_key_pane

0xaca5,	// (0x0001a027) bg_cell_vkbss_key_g1_ParamLimits

0xaca5,	// (0x0001a027) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0001e868) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0001e868) cell_vkbss_key_3p_pane

0xf500,	// (0x0001e882) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0001e882) cell_vkbss_key_g1

0xf51a,	// (0x0001e89c) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0001e89c) cell_vkbss_key_t1

0x25a3,	// (0x00011925) cell_ituss_key_pane_ParamLimits

0x25a3,	// (0x00011925) cell_ituss_key_pane

0xad04,	// (0x0001a086) bg_cell_ituss_key_g1_ParamLimits

0xad04,	// (0x0001a086) bg_cell_ituss_key_g1

0xad10,	// (0x0001a092) cell_ituss_key_pane_g1_ParamLimits

0xad10,	// (0x0001a092) cell_ituss_key_pane_g1

0x25b4,	// (0x00011936) cell_ituss_key_pane_g2_ParamLimits

0x25b4,	// (0x00011936) cell_ituss_key_pane_g2

0x0002,

0xfeda,	// (0x0001f25c) cell_ituss_key_pane_g_ParamLimits

0xfeda,	// (0x0001f25c) cell_ituss_key_pane_g

0x25e0,	// (0x00011962) cell_ituss_key_t1_ParamLimits

0x25e0,	// (0x00011962) cell_ituss_key_t1

0x261a,	// (0x0001199c) cell_ituss_key_t2_ParamLimits

0x261a,	// (0x0001199c) cell_ituss_key_t2

0x264b,	// (0x000119cd) cell_ituss_key_t3_ParamLimits

0x264b,	// (0x000119cd) cell_ituss_key_t3

0x261a,	// (0x0001199c) cell_ituss_key_t4_ParamLimits

0x261a,	// (0x0001199c) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0001f263) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0001f263) cell_ituss_key_t

0xad3c,	// (0x0001a0be) cell_vkbss_key_3p_pane_g1

0xad44,	// (0x0001a0c6) cell_vkbss_key_3p_pane_g2

0xad4c,	// (0x0001a0ce) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f26e) cell_vkbss_key_3p_pane_g

0x033f,	// (0x0000f6c1) bg_popup_fep_char_preview_window_cp02

0x268e,	// (0x00011a10) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0001e74e) main_ai5_sk_pane

0xa841,	// (0x00019bc3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa84d,	// (0x00019bcf) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80a5,	// (0x00017427) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa862,	// (0x00019be4) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebe,	// (0x0001f240) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa86e,	// (0x00019bf0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35cc,	// (0x0001294e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0001e8c7) main_ai5_sk_pane_g1

0x5290,	// (0x00014612) popup_query_code_window_g1

0xac55,	// (0x00019fd7) popup_fep_vkb_icf_pane

0xac74,	// (0x00019ff6) popup_fep_vtchi_icf_pane

0xad5d,	// (0x0001a0df) bg_icf_pane

0xad69,	// (0x0001a0eb) list_vkb_icf_pane

0xad78,	// (0x0001a0fa) bg_icf_pane_cp01

0xad8b,	// (0x0001a10d) vtchi_icf_list_pane

0xad9b,	// (0x0001a11d) list_vkb_icf_pane_t1_ParamLimits

0xad9b,	// (0x0001a11d) list_vkb_icf_pane_t1

0xadb1,	// (0x0001a133) vtchi_icf_list_pane_t1_ParamLimits

0xadb1,	// (0x0001a133) vtchi_icf_list_pane_t1

0xac3f,	// (0x00019fc1) popup_fep_ituss_window_ParamLimits

0xac74,	// (0x00019ff6) popup_fep_vtchi_icf_pane_ParamLimits

0xac96,	// (0x0001a018) ituss_keypad_pane_ParamLimits

0x2575,	// (0x000118f7) ituss_sks_pane

0xad5d,	// (0x0001a0df) bg_icf_pane_ParamLimits

0xac1b,	// (0x00019f9d) icf_edit_indi_pane_ParamLimits

0xac1b,	// (0x00019f9d) icf_edit_indi_pane

0xad69,	// (0x0001a0eb) list_vkb_icf_pane_ParamLimits

0xad78,	// (0x0001a0fa) bg_icf_pane_cp01_ParamLimits

0xac2a,	// (0x00019fac) icf_edit_indi_pane_cp01_ParamLimits

0xac2a,	// (0x00019fac) icf_edit_indi_pane_cp01

0xad93,	// (0x0001a115) vtchi_query_pane

0x7ae0,	// (0x00016e62) icf_edit_indi_pane_g1_ParamLimits

0x7ae0,	// (0x00016e62) icf_edit_indi_pane_g1

0xae22,	// (0x0001a1a4) icf_edit_indi_pane_g2_ParamLimits

0xae22,	// (0x0001a1a4) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f286) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f286) icf_edit_indi_pane_g

0xae31,	// (0x0001a1b3) icf_edit_indi_pane_t1

0xadcb,	// (0x0001a14d) bg_input_focus_pane_cp042

0x2f80,	// (0x00012302) vtchi_button_pane

0xadd4,	// (0x0001a156) vtchi_query_pane_t1

0xade2,	// (0x0001a164) vtchi_query_pane_t2

0xadf0,	// (0x0001a172) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f275) vtchi_query_pane_t

0x033f,	// (0x0000f6c1) bg_button_pane_cp13

0xadfe,	// (0x0001a180) vtchi_button_pane_g1

0x269d,	// (0x00011a1f) ituss_sks_pane_g1

0x26a8,	// (0x00011a2a) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f27c) ituss_sks_pane_g

0xae06,	// (0x0001a188) ituss_sks_pane_t1

0xae14,	// (0x0001a196) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f281) ituss_sks_pane_t

0x72ad,	// (0x0001662f) indicator_nsta_pane_cp_g1

0x72b5,	// (0x00016637) indicator_nsta_pane_cp_g2

0x72bd,	// (0x0001663f) indicator_nsta_pane_cp_g3

0x72ad,	// (0x0001662f) indicator_nsta_pane_cp_g4

0x72b5,	// (0x00016637) indicator_nsta_pane_cp_g5

0x72bd,	// (0x0001663f) indicator_nsta_pane_cp_g6

0x0005,

0xfa9c,	// (0x0001ee1e) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0001e566) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0001e566) cell_graphic2_pane_t2

0x0001,

0xfdb5,	// (0x0001f137) cell_graphic2_pane_t_ParamLimits

0xfdb5,	// (0x0001f137) cell_graphic2_pane_t

0xf218,	// (0x0001e59a) cell_graphic2_control_pane_t1

0xd2fe,	// (0x0001c680) signal_pane_g3_ParamLimits

0xd2fe,	// (0x0001c680) signal_pane_g3

0xd312,	// (0x0001c694) signal_pane_g4_ParamLimits

0xd312,	// (0x0001c694) signal_pane_g4

0xac05,	// (0x00019f87) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xac05,	// (0x00019f87) cell_ai5_widget_list_row_pane_t3

0xad2a,	// (0x0001a0ac) cell_ituss_key_pane_t1_ParamLimits

0xad2a,	// (0x0001a0ac) cell_ituss_key_pane_t1

0x4eaa,	// (0x0001422c) form_field_data_wide_pane_vc_t2_ParamLimits

0x4eaa,	// (0x0001422c) form_field_data_wide_pane_vc_t2

0x4ebe,	// (0x00014240) form_field_data_wide_pane_vc_t3_ParamLimits

0x4ebe,	// (0x00014240) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001eb81) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001eb81) form_field_data_wide_pane_vc_t

0x6f75,	// (0x000162f7) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6f75,	// (0x000162f7) form_field_slider_wide_pane_vc_t3

0x7053,	// (0x000163d5) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7053,	// (0x000163d5) form_field_popup_wide_pane_vc_t2

0x706a,	// (0x000163ec) form_field_popup_wide_pane_vc_t3_ParamLimits

0x706a,	// (0x000163ec) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8b,	// (0x0001ee0d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001ee0d) form_field_popup_wide_pane_vc_t

0xc744,	// (0x0001bac6) aid_fshwr2_btn_pane_ParamLimits

0xc755,	// (0x0001bad7) aid_fshwr2_syb_pane_ParamLimits

0xc766,	// (0x0001bae8) aid_fshwr2_txt_pane_ParamLimits

0x1be1,	// (0x00010f63) fshwr2_bg_pane_ParamLimits

0xc772,	// (0x0001baf4) fshwr2_func_candi_pane_ParamLimits

0xc791,	// (0x0001bb13) fshwr2_hwr_syb_pane_ParamLimits

0xc7ac,	// (0x0001bb2e) fshwr2_icf_pane_ParamLimits

0x6edb,	// (0x0001625d) list_double_graphic_pane_vc_g4_ParamLimits

0x6edb,	// (0x0001625d) list_double_graphic_pane_vc_g4

0x25d4,	// (0x00011956) cell_ituss_key_pane_g3_ParamLimits

0x25d4,	// (0x00011956) cell_ituss_key_pane_g3

0x267c,	// (0x000119fe) cell_ituss_key_t5_ParamLimits

0x267c,	// (0x000119fe) cell_ituss_key_t5

0xf4c9,	// (0x0001e84b) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003fac3 };

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
0xb941,	// (0x0004b404) Screen

0xb94d,	// (0x0004b410) application_window_ParamLimits

0xb94d,	// (0x0004b410) application_window

0x29a7,	// (0x0004246a) screen_g1

0xb985,	// (0x0004b448) area_bottom_pane_ParamLimits

0xb985,	// (0x0004b448) area_bottom_pane

0x0d98,	// (0x0004085b) area_top_pane_ParamLimits

0x0d98,	// (0x0004085b) area_top_pane

0x0e2c,	// (0x000408ef) main_pane_ParamLimits

0x0e2c,	// (0x000408ef) main_pane

0x29b1,	// (0x00042474) misc_graphics

0xd2c5,	// (0x0004cd88) battery_pane_ParamLimits

0xd2c5,	// (0x0004cd88) battery_pane

0x568b,	// (0x0004514e) bg_status_flat_pane_g8

0x5693,	// (0x00045156) bg_status_flat_pane_g9

0x4a71,	// (0x00044534) context_pane_ParamLimits

0x4a71,	// (0x00044534) context_pane

0xd43c,	// (0x0004ceff) navi_pane_ParamLimits

0xd43c,	// (0x0004ceff) navi_pane

0xd4c5,	// (0x0004cf88) signal_pane_ParamLimits

0xd4c5,	// (0x0004cf88) signal_pane

0x0008,

0xf8b2,	// (0x0004f375) bg_status_flat_pane_g

0xd555,	// (0x0004d018) status_pane_g1_ParamLimits

0xd555,	// (0x0004d018) status_pane_g1

0xd56b,	// (0x0004d02e) status_pane_g2_ParamLimits

0xd56b,	// (0x0004d02e) status_pane_g2

0x4cb1,	// (0x00044774) status_pane_g3_ParamLimits

0x4cb1,	// (0x00044774) status_pane_g3

0x0004,

0xf7e5,	// (0x0004f2a8) status_pane_g_ParamLimits

0xf7e5,	// (0x0004f2a8) status_pane_g

0xd577,	// (0x0004d03a) title_pane_ParamLimits

0xd577,	// (0x0004d03a) title_pane

0xd5d4,	// (0x0004d097) uni_indicator_pane_ParamLimits

0xd5d4,	// (0x0004d097) uni_indicator_pane

0x4292,	// (0x00043d55) bg_list_pane_ParamLimits

0x4292,	// (0x00043d55) bg_list_pane

0xbf4e,	// (0x0004ba11) find_pane

0xcb1e,	// (0x0004c5e1) listscroll_app_pane_ParamLimits

0xcb1e,	// (0x0004c5e1) listscroll_app_pane

0x42d2,	// (0x00043d95) listscroll_form_pane

0xbf56,	// (0x0004ba19) listscroll_gen_pane_ParamLimits

0xbf56,	// (0x0004ba19) listscroll_gen_pane

0x42d2,	// (0x00043d95) listscroll_set_pane

0x6244,	// (0x00045d07) main_idle_act_pane

0x3f76,	// (0x00043a39) main_idle_trad_pane

0x3f76,	// (0x00043a39) main_list_empty_pane

0x4300,	// (0x00043dc3) main_midp_pane

0x430c,	// (0x00043dcf) main_pane_g1_ParamLimits

0x430c,	// (0x00043dcf) main_pane_g1

0xcb2a,	// (0x0004c5ed) popup_ai_message_window_ParamLimits

0xcb2a,	// (0x0004c5ed) popup_ai_message_window

0xcbca,	// (0x0004c68d) popup_fep_china_uni_window_ParamLimits

0xcbca,	// (0x0004c68d) popup_fep_china_uni_window

0x442a,	// (0x00043eed) popup_fep_japan_candidate_window_ParamLimits

0x442a,	// (0x00043eed) popup_fep_japan_candidate_window

0x4454,	// (0x00043f17) popup_fep_japan_predictive_window_ParamLimits

0x4454,	// (0x00043f17) popup_fep_japan_predictive_window

0xcc2a,	// (0x0004c6ed) popup_find_window

0xcc47,	// (0x0004c70a) popup_grid_graphic_window_ParamLimits

0xcc47,	// (0x0004c70a) popup_grid_graphic_window

0x44c5,	// (0x00043f88) popup_large_graphic_colour_window

0xcceb,	// (0x0004c7ae) popup_menu_window_ParamLimits

0xcceb,	// (0x0004c7ae) popup_menu_window

0xced7,	// (0x0004c99a) popup_note_image_window

0xce97,	// (0x0004c95a) popup_note_wait_window_ParamLimits

0xce97,	// (0x0004c95a) popup_note_wait_window

0xceef,	// (0x0004c9b2) popup_note_window_ParamLimits

0xceef,	// (0x0004c9b2) popup_note_window

0xcf9d,	// (0x0004ca60) popup_query_code_window_ParamLimits

0xcf9d,	// (0x0004ca60) popup_query_code_window

0x4731,	// (0x000441f4) popup_query_data_code_window_ParamLimits

0x4731,	// (0x000441f4) popup_query_data_code_window

0xcfdd,	// (0x0004caa0) popup_query_data_window_ParamLimits

0xcfdd,	// (0x0004caa0) popup_query_data_window

0xd071,	// (0x0004cb34) popup_query_sat_info_window_ParamLimits

0xd071,	// (0x0004cb34) popup_query_sat_info_window

0xd11c,	// (0x0004cbdf) popup_snote_single_graphic_window_ParamLimits

0xd11c,	// (0x0004cbdf) popup_snote_single_graphic_window

0xd11c,	// (0x0004cbdf) popup_snote_single_text_window_ParamLimits

0xd11c,	// (0x0004cbdf) popup_snote_single_text_window

0x47cc,	// (0x0004428f) popup_sub_window_general

0x4912,	// (0x000443d5) popup_window_general_ParamLimits

0x4912,	// (0x000443d5) popup_window_general

0x492b,	// (0x000443ee) power_save_pane

0xbe1a,	// (0x0004b8dd) control_pane_g1_ParamLimits

0xbe1a,	// (0x0004b8dd) control_pane_g1

0x1693,	// (0x00041156) control_pane_g2_ParamLimits

0x1693,	// (0x00041156) control_pane_g2

0x4243,	// (0x00043d06) control_pane_g3_ParamLimits

0x4243,	// (0x00043d06) control_pane_g3

0x0007,

0xf7cd,	// (0x0004f290) control_pane_g_ParamLimits

0xf7cd,	// (0x0004f290) control_pane_g

0xbe51,	// (0x0004b914) control_pane_t1_ParamLimits

0xbe51,	// (0x0004b914) control_pane_t1

0xbeaf,	// (0x0004b972) control_pane_t2_ParamLimits

0xbeaf,	// (0x0004b972) control_pane_t2

0x0002,

0xf7de,	// (0x0004f2a1) control_pane_t_ParamLimits

0xf7de,	// (0x0004f2a1) control_pane_t

0x4164,	// (0x00043c27) navi_navi_volume_pane_cp1

0x416d,	// (0x00043c30) status_small_icon_pane

0x4175,	// (0x00043c38) status_small_pane_g1_ParamLimits

0x4175,	// (0x00043c38) status_small_pane_g1

0x41a9,	// (0x00043c6c) status_small_pane_g2_ParamLimits

0x41a9,	// (0x00043c6c) status_small_pane_g2

0x41b5,	// (0x00043c78) status_small_pane_g3_ParamLimits

0x41b5,	// (0x00043c78) status_small_pane_g3

0x41c1,	// (0x00043c84) status_small_pane_g4_ParamLimits

0x41c1,	// (0x00043c84) status_small_pane_g4

0x41cd,	// (0x00043c90) status_small_pane_g5_ParamLimits

0x41cd,	// (0x00043c90) status_small_pane_g5

0x41dc,	// (0x00043c9f) status_small_pane_g6_ParamLimits

0x41dc,	// (0x00043c9f) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004f27f) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004f27f) status_small_pane_g

0x420c,	// (0x00043ccf) status_small_pane_t1

0x422f,	// (0x00043cf2) status_small_wait_pane_ParamLimits

0x422f,	// (0x00043cf2) status_small_wait_pane

0xc962,	// (0x0004c425) aid_levels_signal_ParamLimits

0xc962,	// (0x0004c425) aid_levels_signal

0xc97a,	// (0x0004c43d) signal_pane_g1_ParamLimits

0xc97a,	// (0x0004c43d) signal_pane_g1

0xc995,	// (0x0004c458) signal_pane_g2_ParamLimits

0xc995,	// (0x0004c458) signal_pane_g2

0x0001,

0xf751,	// (0x0004f214) signal_pane_g_ParamLimits

0xf751,	// (0x0004f214) signal_pane_g

0x3a49,	// (0x0004350c) context_pane_g1

0xbb02,	// (0x0004b5c5) title_pane_g1

0xbb37,	// (0x0004b5fa) title_pane_t1

0x2a59,	// (0x0004251c) title_pane_t2

0x2a7f,	// (0x00042542) title_pane_t3

0x0002,

0xf59b,	// (0x0004f05e) title_pane_t

0xd5fc,	// (0x0004d0bf) aid_levels_battery_ParamLimits

0xd5fc,	// (0x0004d0bf) aid_levels_battery

0xd618,	// (0x0004d0db) battery_pane_g1_ParamLimits

0xd618,	// (0x0004d0db) battery_pane_g1

0xd635,	// (0x0004d0f8) battery_pane_g2_ParamLimits

0xd635,	// (0x0004d0f8) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004f2b3) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004f2b3) battery_pane_g

0xd858,	// (0x0004d31b) uni_indicator_pane_g1

0xd86d,	// (0x0004d330) uni_indicator_pane_g2

0xd882,	// (0x0004d345) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0004f41d) uni_indicator_pane_g

0x3de4,	// (0x000438a7) navi_icon_pane_ParamLimits

0x3de4,	// (0x000438a7) navi_icon_pane

0x3d2b,	// (0x000437ee) navi_midp_pane

0x3e00,	// (0x000438c3) navi_navi_pane

0x3e0a,	// (0x000438cd) navi_text_pane_ParamLimits

0x3e0a,	// (0x000438cd) navi_text_pane

0x29a7,	// (0x0004246a) status_small_wait_pane_g1

0x2ec3,	// (0x00042986) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0004f418) status_small_wait_pane_g

0xd7f7,	// (0x0004d2ba) navi_navi_icon_text_pane

0xd7ff,	// (0x0004d2c2) navi_navi_pane_g1_ParamLimits

0xd7ff,	// (0x0004d2c2) navi_navi_pane_g1

0xd811,	// (0x0004d2d4) navi_navi_pane_g2_ParamLimits

0xd811,	// (0x0004d2d4) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0004f3e6) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0004f3e6) navi_navi_pane_g

0x5d1a,	// (0x000457dd) navi_navi_tabs_pane

0xd823,	// (0x0004d2e6) navi_navi_text_pane

0xd7f7,	// (0x0004d2ba) navi_navi_volume_pane

0xd7e5,	// (0x0004d2a8) navi_text_pane_t1

0xd7d9,	// (0x0004d29c) navi_icon_pane_g1

0x5c0b,	// (0x000456ce) navi_navi_text_pane_t1

0xc132,	// (0x0004bbf5) navi_navi_volume_pane_g1

0xc13a,	// (0x0004bbfd) volume_small_pane

0xd735,	// (0x0004d1f8) navi_navi_icon_text_pane_g1

0xd73d,	// (0x0004d200) navi_navi_icon_text_pane_t1

0x3e00,	// (0x000438c3) navi_tabs_2_long_pane

0x3e00,	// (0x000438c3) navi_tabs_2_pane

0x3e00,	// (0x000438c3) navi_tabs_3_long_pane

0x3e00,	// (0x000438c3) navi_tabs_3_pane

0x3e00,	// (0x000438c3) navi_tabs_4_pane

0xc112,	// (0x0004bbd5) tabs_2_active_pane_ParamLimits

0xc112,	// (0x0004bbd5) tabs_2_active_pane

0xc122,	// (0x0004bbe5) tabs_2_passive_pane_ParamLimits

0xc122,	// (0x0004bbe5) tabs_2_passive_pane

0xc0e0,	// (0x0004bba3) tabs_3_active_pane_ParamLimits

0xc0e0,	// (0x0004bba3) tabs_3_active_pane

0xc0f0,	// (0x0004bbb3) tabs_3_passive_pane_ParamLimits

0xc0f0,	// (0x0004bbb3) tabs_3_passive_pane

0xc101,	// (0x0004bbc4) tabs_3_passive_pane_cp_ParamLimits

0xc101,	// (0x0004bbc4) tabs_3_passive_pane_cp

0xc09c,	// (0x0004bb5f) tabs_4_active_pane_ParamLimits

0xc09c,	// (0x0004bb5f) tabs_4_active_pane

0xc0ad,	// (0x0004bb70) tabs_4_passive_pane_ParamLimits

0xc0ad,	// (0x0004bb70) tabs_4_passive_pane

0xc0be,	// (0x0004bb81) tabs_4_passive_pane_cp_ParamLimits

0xc0be,	// (0x0004bb81) tabs_4_passive_pane_cp

0xc0cf,	// (0x0004bb92) tabs_4_passive_pane_cp2_ParamLimits

0xc0cf,	// (0x0004bb92) tabs_4_passive_pane_cp2

0xc078,	// (0x0004bb3b) tabs_2_long_active_pane_ParamLimits

0xc078,	// (0x0004bb3b) tabs_2_long_active_pane

0xc08a,	// (0x0004bb4d) tabs_2_long_passive_pane_ParamLimits

0xc08a,	// (0x0004bb4d) tabs_2_long_passive_pane

0xc02d,	// (0x0004baf0) tabs_3_long_active_pane_ParamLimits

0xc02d,	// (0x0004baf0) tabs_3_long_active_pane

0xc046,	// (0x0004bb09) tabs_3_long_passive_pane_ParamLimits

0xc046,	// (0x0004bb09) tabs_3_long_passive_pane

0xc05f,	// (0x0004bb22) tabs_3_long_passive_pane_cp_ParamLimits

0xc05f,	// (0x0004bb22) tabs_3_long_passive_pane_cp

0x18f9,	// (0x000413bc) volume_small_pane_g1

0xbfdc,	// (0x0004ba9f) volume_small_pane_g2

0xbfe5,	// (0x0004baa8) volume_small_pane_g3

0xbfee,	// (0x0004bab1) volume_small_pane_g4

0xbff7,	// (0x0004baba) volume_small_pane_g5

0xc000,	// (0x0004bac3) volume_small_pane_g6

0xc009,	// (0x0004bacc) volume_small_pane_g7

0xc012,	// (0x0004bad5) volume_small_pane_g8

0xc01b,	// (0x0004bade) volume_small_pane_g9

0xc024,	// (0x0004bae7) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0004f3b2) volume_small_pane_g

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp2_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp2

0xbbc3,	// (0x0004b686) tabs_3_active_pane_g1

0xbbcb,	// (0x0004b68e) tabs_3_active_pane_t1

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp2_ParamLimits

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp2

0xbbc3,	// (0x0004b686) tabs_3_passive_pane_g1

0xbbcb,	// (0x0004b68e) tabs_3_passive_pane_t1

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp3_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp3

0xbbdd,	// (0x0004b6a0) tabs_4_active_pane_g1

0xbbe5,	// (0x0004b6a8) tabs_4_active_pane_t1

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp3_ParamLimits

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp3

0xbbdd,	// (0x0004b6a0) tabs_4_1_passive_pane_g1

0xbbe5,	// (0x0004b6a8) tabs_4_1_passive_pane_t1

0x4300,	// (0x00043dc3) list_highlight_pane_cp2

0xd940,	// (0x0004d403) list_set_pane_ParamLimits

0xd940,	// (0x0004d403) list_set_pane

0xda08,	// (0x0004d4cb) main_pane_set_t1_ParamLimits

0xda08,	// (0x0004d4cb) main_pane_set_t1

0xda28,	// (0x0004d4eb) main_pane_set_t2_ParamLimits

0xda28,	// (0x0004d4eb) main_pane_set_t2

0xda3c,	// (0x0004d4ff) main_pane_set_t3_ParamLimits

0xda3c,	// (0x0004d4ff) main_pane_set_t3

0xda50,	// (0x0004d513) main_pane_set_t4_ParamLimits

0xda50,	// (0x0004d513) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0004f482) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0004f482) main_pane_set_t

0xda64,	// (0x0004d527) setting_code_pane

0x63a4,	// (0x00045e67) setting_slider_graphic_pane

0x63a4,	// (0x00045e67) setting_slider_pane

0x63a4,	// (0x00045e67) setting_text_pane

0x63a4,	// (0x00045e67) setting_volume_pane

0x1083,	// (0x00040b46) volume_set_pane

0x2a91,	// (0x00042554) bg_set_opt_pane_cp

0x108d,	// (0x00040b50) setting_slider_pane_t1

0x10a3,	// (0x00040b66) setting_slider_pane_t2

0x10bd,	// (0x00040b80) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004f065) setting_slider_pane_t

0x10d5,	// (0x00040b98) slider_set_pane

0x29b1,	// (0x00042474) bg_set_opt_pane_cp2

0x2ad3,	// (0x00042596) setting_slider_graphic_pane_g1

0x10eb,	// (0x00040bae) setting_slider_graphic_pane_t1

0x10fb,	// (0x00040bbe) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004f06c) setting_slider_graphic_pane_t

0x110b,	// (0x00040bce) slider_set_pane_cp

0x29b1,	// (0x00042474) input_focus_pane_cp1

0x622b,	// (0x00045cee) list_set_text_pane

0x29a7,	// (0x0004246a) setting_text_pane_g1

0x29b1,	// (0x00042474) input_focus_pane_cp2

0x29a7,	// (0x0004246a) setting_code_pane_g1

0x2adc,	// (0x0004259f) setting_code_pane_t1

0xf563,	// (0x0004f026) set_text_pane_t1_ParamLimits

0xf563,	// (0x0004f026) set_text_pane_t1

0x337f,	// (0x00042e42) set_opt_bg_pane_g1

0x3387,	// (0x00042e4a) set_opt_bg_pane_g2

0x6203,	// (0x00045cc6) set_opt_bg_pane_g3

0x3397,	// (0x00042e5a) set_opt_bg_pane_g4

0x339f,	// (0x00042e62) set_opt_bg_pane_g5

0x33a7,	// (0x00042e6a) set_opt_bg_pane_g6

0x620d,	// (0x00045cd0) set_opt_bg_pane_g7

0x6217,	// (0x00045cda) set_opt_bg_pane_g8

0x6221,	// (0x00045ce4) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0004f46f) set_opt_bg_pane_g

0x61f6,	// (0x00045cb9) slider_set_pane_g1

0x1add,	// (0x000415a0) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0004f460) slider_set_pane_g

0x1a65,	// (0x00041528) volume_set_pane_g1

0x1a6f,	// (0x00041532) volume_set_pane_g2

0x1a79,	// (0x0004153c) volume_set_pane_g3

0x1a83,	// (0x00041546) volume_set_pane_g4

0x1a8d,	// (0x00041550) volume_set_pane_g5

0x1a97,	// (0x0004155a) volume_set_pane_g6

0x1aa1,	// (0x00041564) volume_set_pane_g7

0x1aab,	// (0x0004156e) volume_set_pane_g8

0x1ab5,	// (0x00041578) volume_set_pane_g9

0x1abf,	// (0x00041582) volume_set_pane_g10

0x0009,

0xf975,	// (0x0004f438) volume_set_pane_g

0xbbf7,	// (0x0004b6ba) indicator_pane_ParamLimits

0xbbf7,	// (0x0004b6ba) indicator_pane

0xbc23,	// (0x0004b6e6) main_idle_pane_g2_ParamLimits

0xbc23,	// (0x0004b6e6) main_idle_pane_g2

0xbc5b,	// (0x0004b71e) main_pane_idle_g1_ParamLimits

0xbc5b,	// (0x0004b71e) main_pane_idle_g1

0x2b2c,	// (0x000425ef) popup_clock_digital_analogue_window_ParamLimits

0x2b2c,	// (0x000425ef) popup_clock_digital_analogue_window

0xbc89,	// (0x0004b74c) soft_indicator_pane_ParamLimits

0xbc89,	// (0x0004b74c) soft_indicator_pane

0xbca5,	// (0x0004b768) wallpaper_pane_ParamLimits

0xbca5,	// (0x0004b768) wallpaper_pane

0x29a7,	// (0x0004246a) wallpaper_pane_g1

0xbcb7,	// (0x0004b77a) indicator_pane_g1_ParamLimits

0xbcb7,	// (0x0004b77a) indicator_pane_g1

0x6668,	// (0x0004612b) navi_navi_icon_text_pane_srt_g1

0x2b80,	// (0x00042643) soft_indicator_pane_t1

0x2b9a,	// (0x0004265d) aid_ps_area_pane

0xbcd0,	// (0x0004b793) aid_ps_clock_pane

0x2bb9,	// (0x0004267c) aid_ps_indicator_pane

0x2bc5,	// (0x00042688) indicator_ps_pane_ParamLimits

0x2bc5,	// (0x00042688) indicator_ps_pane

0x2bd4,	// (0x00042697) power_save_pane_g1_ParamLimits

0x2bd4,	// (0x00042697) power_save_pane_g1

0x2be0,	// (0x000426a3) power_save_pane_g2_ParamLimits

0x2be0,	// (0x000426a3) power_save_pane_g2

0x0c8c,	// (0x0004074f) aid_navinavi_width_pane

0x2b9a,	// (0x0004265d) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004f071) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004f071) power_save_pane_g

0x2bee,	// (0x000426b1) power_save_pane_t1_ParamLimits

0x2bee,	// (0x000426b1) power_save_pane_t1

0xbcd0,	// (0x0004b793) aid_ps_clock_pane_ParamLimits

0x2bb9,	// (0x0004267c) aid_ps_indicator_pane_ParamLimits

0x2c00,	// (0x000426c3) power_save_pane_t4_ParamLimits

0x2c00,	// (0x000426c3) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004f076) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004f076) power_save_pane_t

0x2c2a,	// (0x000426ed) power_save_t3_ParamLimits

0x2c2a,	// (0x000426ed) power_save_t3

0x2c15,	// (0x000426d8) power_save_t2_ParamLimits

0x2c15,	// (0x000426d8) power_save_t2

0x2c3f,	// (0x00042702) indicator_ps_pane_g1

0xbcde,	// (0x0004b7a1) ai_gene_pane_ParamLimits

0xbcde,	// (0x0004b7a1) ai_gene_pane

0xbcf5,	// (0x0004b7b8) ai_links_pane_ParamLimits

0xbcf5,	// (0x0004b7b8) ai_links_pane

0xbd0d,	// (0x0004b7d0) indicator_pane_cp1_ParamLimits

0xbd0d,	// (0x0004b7d0) indicator_pane_cp1

0xbd1c,	// (0x0004b7df) main_pane_idle_g1_cp_ParamLimits

0xbd1c,	// (0x0004b7df) main_pane_idle_g1_cp

0x2c78,	// (0x0004273b) popup_ai_links_title_window

0xbd34,	// (0x0004b7f7) soft_indicator_pane_cp1_ParamLimits

0xbd34,	// (0x0004b7f7) soft_indicator_pane_cp1

0x5fc9,	// (0x00045a8c) ai_links_pane_g1

0x5fd2,	// (0x00045a95) grid_ai_links_pane

0xd84f,	// (0x0004d312) ai_gene_pane_1

0x5fb7,	// (0x00045a7a) ai_gene_pane_2

0x5fc0,	// (0x00045a83) list_highlight_pane_cp4

0xd82b,	// (0x0004d2ee) cell_ai_link_pane_ParamLimits

0xd82b,	// (0x0004d2ee) cell_ai_link_pane

0x5f86,	// (0x00045a49) cell_ai_link_pane_g1

0x2ec3,	// (0x00042986) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0004f413) cell_ai_link_pane_g

0x29b1,	// (0x00042474) grid_highlight_cp2

0x29b1,	// (0x00042474) bg_popup_sub_pane_cp1

0x2c9b,	// (0x0004275e) popup_ai_links_title_window_t1

0x5ed2,	// (0x00045995) ai_gene_pane_1_g1_ParamLimits

0x5ed2,	// (0x00045995) ai_gene_pane_1_g1

0x5ede,	// (0x000459a1) ai_gene_pane_1_g2_ParamLimits

0x5ede,	// (0x000459a1) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0004f409) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0004f409) ai_gene_pane_1_g

0x5eeb,	// (0x000459ae) ai_gene_pane_1_t1_ParamLimits

0x5eeb,	// (0x000459ae) ai_gene_pane_1_t1

0x5f1f,	// (0x000459e2) grid_ai_soft_ind_pane

0x5ebd,	// (0x00045980) ai_gene_pane_2_t1_ParamLimits

0x5ebd,	// (0x00045980) ai_gene_pane_2_t1

0xbd48,	// (0x0004b80b) main_pane_empty_t1_ParamLimits

0xbd48,	// (0x0004b80b) main_pane_empty_t1

0xbd60,	// (0x0004b823) main_pane_empty_t2_ParamLimits

0xbd60,	// (0x0004b823) main_pane_empty_t2

0xbd75,	// (0x0004b838) main_pane_empty_t3_ParamLimits

0xbd75,	// (0x0004b838) main_pane_empty_t3

0xbd87,	// (0x0004b84a) main_pane_empty_t4_ParamLimits

0xbd87,	// (0x0004b84a) main_pane_empty_t4

0xbd99,	// (0x0004b85c) main_pane_empty_t5_ParamLimits

0xbd99,	// (0x0004b85c) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004f07b) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004f07b) main_pane_empty_t

0x33d0,	// (0x00042e93) bg_popup_window_pane_ParamLimits

0x33d0,	// (0x00042e93) bg_popup_window_pane

0x5c19,	// (0x000456dc) find_popup_pane_cp2_ParamLimits

0x5c19,	// (0x000456dc) find_popup_pane_cp2

0x5c25,	// (0x000456e8) heading_pane_ParamLimits

0x5c25,	// (0x000456e8) heading_pane

0x29b1,	// (0x00042474) bg_popup_sub_pane

0xd75a,	// (0x0004d21d) bg_popup_window_pane_g1_ParamLimits

0xd75a,	// (0x0004d21d) bg_popup_window_pane_g1

0xd769,	// (0x0004d22c) bg_popup_window_pane_g2_ParamLimits

0xd769,	// (0x0004d22c) bg_popup_window_pane_g2

0xd775,	// (0x0004d238) bg_popup_window_pane_g3_ParamLimits

0xd775,	// (0x0004d238) bg_popup_window_pane_g3

0xd781,	// (0x0004d244) bg_popup_window_pane_g4_ParamLimits

0xd781,	// (0x0004d244) bg_popup_window_pane_g4

0xd790,	// (0x0004d253) bg_popup_window_pane_g5_ParamLimits

0xd790,	// (0x0004d253) bg_popup_window_pane_g5

0xd7a0,	// (0x0004d263) bg_popup_window_pane_g6_ParamLimits

0xd7a0,	// (0x0004d263) bg_popup_window_pane_g6

0xd7ac,	// (0x0004d26f) bg_popup_window_pane_g7_ParamLimits

0xd7ac,	// (0x0004d26f) bg_popup_window_pane_g7

0xd7bb,	// (0x0004d27e) bg_popup_window_pane_g8_ParamLimits

0xd7bb,	// (0x0004d27e) bg_popup_window_pane_g8

0xd7ca,	// (0x0004d28d) bg_popup_window_pane_g9_ParamLimits

0xd7ca,	// (0x0004d28d) bg_popup_window_pane_g9

0x5bff,	// (0x000456c2) bg_popup_window_pane_g10_ParamLimits

0x5bff,	// (0x000456c2) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0004f3d1) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0004f3d1) bg_popup_window_pane_g

0x5b28,	// (0x000455eb) bg_popup_heading_pane_ParamLimits

0x5b28,	// (0x000455eb) bg_popup_heading_pane

0x1b4f,	// (0x00041612) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b4f,	// (0x00041612) tabs_4_passive_pane_cp_srt

0x1b61,	// (0x00041624) tabs_4_passive_pane_srt_ParamLimits

0x5b3c,	// (0x000455ff) heading_pane_g2

0x1b61,	// (0x00041624) tabs_4_passive_pane_srt

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp3_srt

0x5b44,	// (0x00045607) heading_pane_t1_ParamLimits

0x5b44,	// (0x00045607) heading_pane_t1

0x5b5b,	// (0x0004561e) heading_pane_t2_ParamLimits

0x5b5b,	// (0x0004561e) heading_pane_t2

0x0001,

0xf909,	// (0x0004f3cc) heading_pane_t_ParamLimits

0xf909,	// (0x0004f3cc) heading_pane_t

0x5653,	// (0x00045116) bg_popup_heading_pane_g1

0x5702,	// (0x000451c5) bg_popup_heading_pane_g2

0x570c,	// (0x000451cf) bg_popup_heading_pane_g3

0x5716,	// (0x000451d9) bg_popup_heading_pane_g4

0x5720,	// (0x000451e3) bg_popup_heading_pane_g5

0x572a,	// (0x000451ed) bg_popup_heading_pane_g6

0x5732,	// (0x000451f5) bg_popup_heading_pane_g7

0x573a,	// (0x000451fd) bg_popup_heading_pane_g8

0x5744,	// (0x00045207) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0004f388) bg_popup_heading_pane_g

0x4e3c,	// (0x000448ff) bg_popup_sub_pane_g1

0x4e44,	// (0x00044907) bg_popup_sub_pane_g2

0x4e4c,	// (0x0004490f) bg_popup_sub_pane_g3

0x4e54,	// (0x00044917) bg_popup_sub_pane_g4

0x4e5c,	// (0x0004491f) bg_popup_sub_pane_g5

0x4e64,	// (0x00044927) bg_popup_sub_pane_g6

0x4e6c,	// (0x0004492f) bg_popup_sub_pane_g7

0x4e74,	// (0x00044937) bg_popup_sub_pane_g8

0x4e7c,	// (0x0004493f) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0004f362) bg_popup_sub_pane_g

0x2d0d,	// (0x000427d0) bg_popup_window_pane_cp5_ParamLimits

0x2d0d,	// (0x000427d0) bg_popup_window_pane_cp5

0x2d29,	// (0x000427ec) popup_note_window_g1_ParamLimits

0x2d29,	// (0x000427ec) popup_note_window_g1

0x2d35,	// (0x000427f8) popup_note_window_t1_ParamLimits

0x2d35,	// (0x000427f8) popup_note_window_t1

0x2d4b,	// (0x0004280e) popup_note_window_t2_ParamLimits

0x2d4b,	// (0x0004280e) popup_note_window_t2

0x2d61,	// (0x00042824) popup_note_window_t3_ParamLimits

0x2d61,	// (0x00042824) popup_note_window_t3

0x2d77,	// (0x0004283a) popup_note_window_t4_ParamLimits

0x2d77,	// (0x0004283a) popup_note_window_t4

0x2d9f,	// (0x00042862) popup_note_window_t5_ParamLimits

0x2d9f,	// (0x00042862) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004f086) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004f086) popup_note_window_t

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp6_ParamLimits

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp6

0x55cf,	// (0x00045092) popup_note_image_window_g1_ParamLimits

0x55cf,	// (0x00045092) popup_note_image_window_g1

0x55db,	// (0x0004509e) popup_note_image_window_g2_ParamLimits

0x55db,	// (0x0004509e) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0004f356) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0004f356) popup_note_image_window_g

0x55f4,	// (0x000450b7) popup_note_image_window_t1_ParamLimits

0x55f4,	// (0x000450b7) popup_note_image_window_t1

0x560d,	// (0x000450d0) popup_note_image_window_t2_ParamLimits

0x560d,	// (0x000450d0) popup_note_image_window_t2

0x5626,	// (0x000450e9) popup_note_image_window_t3_ParamLimits

0x5626,	// (0x000450e9) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0004f35b) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0004f35b) popup_note_image_window_t

0x548f,	// (0x00044f52) bg_popup_window_pane_cp7_ParamLimits

0x548f,	// (0x00044f52) bg_popup_window_pane_cp7

0x54bf,	// (0x00044f82) popup_note_wait_window_g1_ParamLimits

0x54bf,	// (0x00044f82) popup_note_wait_window_g1

0x54cb,	// (0x00044f8e) popup_note_wait_window_g2_ParamLimits

0x54cb,	// (0x00044f8e) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0004f344) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0004f344) popup_note_wait_window_g

0x54e3,	// (0x00044fa6) popup_note_wait_window_t1_ParamLimits

0x54e3,	// (0x00044fa6) popup_note_wait_window_t1

0x550a,	// (0x00044fcd) popup_note_wait_window_t2_ParamLimits

0x550a,	// (0x00044fcd) popup_note_wait_window_t2

0x5528,	// (0x00044feb) popup_note_wait_window_t3_ParamLimits

0x5528,	// (0x00044feb) popup_note_wait_window_t3

0x553b,	// (0x00044ffe) popup_note_wait_window_t4_ParamLimits

0x553b,	// (0x00044ffe) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0004f34b) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0004f34b) popup_note_wait_window_t

0x5560,	// (0x00045023) wait_bar_pane_ParamLimits

0x5560,	// (0x00045023) wait_bar_pane

0x29b1,	// (0x00042474) wait_anim_pane

0x29b1,	// (0x00042474) wait_border_pane

0x29a7,	// (0x0004246a) wait_anim_pane_g1

0x29a7,	// (0x0004246a) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004f20f) wait_anim_pane_g

0x5433,	// (0x00044ef6) wait_border_pane_g1

0x543e,	// (0x00044f01) wait_border_pane_g2

0x5447,	// (0x00044f0a) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0004f33d) wait_border_pane_g

0x538f,	// (0x00044e52) bg_popup_window_pane_cp16_ParamLimits

0x538f,	// (0x00044e52) bg_popup_window_pane_cp16

0x539d,	// (0x00044e60) indicator_popup_pane_cp4_ParamLimits

0x539d,	// (0x00044e60) indicator_popup_pane_cp4

0x53b1,	// (0x00044e74) popup_query_data_window_t1_ParamLimits

0x53b1,	// (0x00044e74) popup_query_data_window_t1

0x53c3,	// (0x00044e86) popup_query_data_window_t2_ParamLimits

0x53c3,	// (0x00044e86) popup_query_data_window_t2

0x53dc,	// (0x00044e9f) popup_query_data_window_t3_ParamLimits

0x53dc,	// (0x00044e9f) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0004f336) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0004f336) popup_query_data_window_t

0x53f6,	// (0x00044eb9) query_popup_data_pane_ParamLimits

0x53f6,	// (0x00044eb9) query_popup_data_pane

0x540a,	// (0x00044ecd) query_popup_data_pane_cp1_ParamLimits

0x540a,	// (0x00044ecd) query_popup_data_pane_cp1

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp10_ParamLimits

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp10

0x52f2,	// (0x00044db5) indicator_popup_pane_ParamLimits

0x52f2,	// (0x00044db5) indicator_popup_pane

0x2e24,	// (0x000428e7) popup_query_code_window_t1_ParamLimits

0x2e24,	// (0x000428e7) popup_query_code_window_t1

0x530a,	// (0x00044dcd) popup_query_code_window_t2_ParamLimits

0x530a,	// (0x00044dcd) popup_query_code_window_t2

0x5348,	// (0x00044e0b) popup_query_code_window_t3_ParamLimits

0x5348,	// (0x00044e0b) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0004f32f) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0004f32f) popup_query_code_window_t

0x5377,	// (0x00044e3a) query_popup_pane_ParamLimits

0x5377,	// (0x00044e3a) query_popup_pane

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp15_ParamLimits

0x2dc3,	// (0x00042886) bg_popup_window_pane_cp15

0x2de3,	// (0x000428a6) indicator_popup_pane_cp1_ParamLimits

0x2de3,	// (0x000428a6) indicator_popup_pane_cp1

0x2df6,	// (0x000428b9) indicator_popup_pane_cp2_ParamLimits

0x2df6,	// (0x000428b9) indicator_popup_pane_cp2

0x2e11,	// (0x000428d4) popup_query_data_code_window_g1_ParamLimits

0x2e11,	// (0x000428d4) popup_query_data_code_window_g1

0x2e24,	// (0x000428e7) popup_query_data_code_window_t1_ParamLimits

0x2e24,	// (0x000428e7) popup_query_data_code_window_t1

0x2e36,	// (0x000428f9) popup_query_data_code_window_t2_ParamLimits

0x2e36,	// (0x000428f9) popup_query_data_code_window_t2

0x2e48,	// (0x0004290b) popup_query_data_code_window_t3_ParamLimits

0x2e48,	// (0x0004290b) popup_query_data_code_window_t3

0x2e5e,	// (0x00042921) popup_query_data_code_window_t4_ParamLimits

0x2e5e,	// (0x00042921) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004f091) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004f091) popup_query_data_code_window_t

0x3da0,	// (0x00043863) list_single_midp_graphic_pane_g3

0x2e78,	// (0x0004293b) query_popup_data_pane_cp2_ParamLimits

0x2e8b,	// (0x0004294e) query_popup_pane_cp2_ParamLimits

0x2e8b,	// (0x0004294e) query_popup_pane_cp2

0x29b1,	// (0x00042474) bg_popup_window_pane_cp11

0x52c6,	// (0x00044d89) heading_pane_cp5

0x2f7b,	// (0x00042a3e) listscroll_popup_info_pane

0x29b1,	// (0x00042474) input_focus_pane_cp3

0x2ea6,	// (0x00042969) query_popup_pane_t1

0x2eb4,	// (0x00042977) list_popup_info_pane_ParamLimits

0x2eb4,	// (0x00042977) list_popup_info_pane

0x2ec3,	// (0x00042986) listscroll_popup_info_pane_g1

0x2ecb,	// (0x0004298e) scroll_pane_cp7

0x2ed5,	// (0x00042998) popup_info_list_pane_t1_ParamLimits

0x2ed5,	// (0x00042998) popup_info_list_pane_t1

0x2eef,	// (0x000429b2) popup_info_list_pane_t2_ParamLimits

0x2eef,	// (0x000429b2) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004f09a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004f09a) popup_info_list_pane_t

0x29b1,	// (0x00042474) bg_popup_window_pane_cp12

0x6682,	// (0x00046145) find_popup_pane

0x2a91,	// (0x00042554) bg_popup_window_pane_cp3

0x2f09,	// (0x000429cc) heading_pane_cp3

0x2f15,	// (0x000429d8) listscroll_popup_graphic_pane

0x29b1,	// (0x00042474) bg_popup_window_pane_cp4

0xc6a7,	// (0x0004c16a) heading_pane_cp4

0x2f7b,	// (0x00042a3e) listscroll_popup_colour_pane

0xc6b1,	// (0x0004c174) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc6b1,	// (0x0004c174) cell_large_graphic_colour_none_popup_pane

0xc6c5,	// (0x0004c188) grid_large_graphic_colour_popup_pane_ParamLimits

0xc6c5,	// (0x0004c188) grid_large_graphic_colour_popup_pane

0xc6f1,	// (0x0004c1b4) listscroll_popup_colour_pane_g1_ParamLimits

0xc6f1,	// (0x0004c1b4) listscroll_popup_colour_pane_g1

0xc708,	// (0x0004c1cb) listscroll_popup_colour_pane_g2_ParamLimits

0xc708,	// (0x0004c1cb) listscroll_popup_colour_pane_g2

0xc71f,	// (0x0004c1e2) listscroll_popup_colour_pane_g3_ParamLimits

0xc71f,	// (0x0004c1e2) listscroll_popup_colour_pane_g3

0xc72f,	// (0x0004c1f2) listscroll_popup_colour_pane_g4_ParamLimits

0xc72f,	// (0x0004c1f2) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004f09f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004f09f) listscroll_popup_colour_pane_g

0x3015,	// (0x00042ad8) scroll_pane_cp6_ParamLimits

0x3015,	// (0x00042ad8) scroll_pane_cp6

0xc743,	// (0x0004c206) cell_large_graphic_colour_popup_pane_ParamLimits

0xc743,	// (0x0004c206) cell_large_graphic_colour_popup_pane

0x304c,	// (0x00042b0f) cell_large_graphic_colour_none_popup_pane_t1

0x29b1,	// (0x00042474) grid_highlight_pane_cp5

0x305b,	// (0x00042b1e) cell_large_graphic_colour_popup_pane_g1

0x3063,	// (0x00042b26) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004f0a8) cell_large_graphic_colour_popup_pane_g

0x306b,	// (0x00042b2e) cell_large_graphic_colour_popup_pane_g2_copy1

0x3074,	// (0x00042b37) grid_highlight_pane_cp4

0x307c,	// (0x00042b3f) bg_popup_window_pane_cp8_ParamLimits

0x307c,	// (0x00042b3f) bg_popup_window_pane_cp8

0x3097,	// (0x00042b5a) popup_snote_single_text_window_g1_ParamLimits

0x3097,	// (0x00042b5a) popup_snote_single_text_window_g1

0x30a9,	// (0x00042b6c) popup_snote_single_text_window_t1_ParamLimits

0x30a9,	// (0x00042b6c) popup_snote_single_text_window_t1

0x30bc,	// (0x00042b7f) popup_snote_single_text_window_t2_ParamLimits

0x30bc,	// (0x00042b7f) popup_snote_single_text_window_t2

0x30cf,	// (0x00042b92) popup_snote_single_text_window_t3_ParamLimits

0x30cf,	// (0x00042b92) popup_snote_single_text_window_t3

0x3108,	// (0x00042bcb) popup_snote_single_text_window_t4_ParamLimits

0x3108,	// (0x00042bcb) popup_snote_single_text_window_t4

0x313c,	// (0x00042bff) popup_snote_single_text_window_t5_ParamLimits

0x313c,	// (0x00042bff) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004f0ad) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004f0ad) popup_snote_single_text_window_t

0x316b,	// (0x00042c2e) bg_popup_window_pane_cp9_ParamLimits

0x316b,	// (0x00042c2e) bg_popup_window_pane_cp9

0x3097,	// (0x00042b5a) popup_snote_single_graphic_window_g1_ParamLimits

0x3097,	// (0x00042b5a) popup_snote_single_graphic_window_g1

0x3179,	// (0x00042c3c) popup_snote_single_graphic_window_g2_ParamLimits

0x3179,	// (0x00042c3c) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004f0b8) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004f0b8) popup_snote_single_graphic_window_g

0x3185,	// (0x00042c48) popup_snote_single_graphic_window_t1_ParamLimits

0x3185,	// (0x00042c48) popup_snote_single_graphic_window_t1

0x3198,	// (0x00042c5b) popup_snote_single_graphic_window_t2_ParamLimits

0x3198,	// (0x00042c5b) popup_snote_single_graphic_window_t2

0x31ab,	// (0x00042c6e) popup_snote_single_graphic_window_t3_ParamLimits

0x31ab,	// (0x00042c6e) popup_snote_single_graphic_window_t3

0x31e4,	// (0x00042ca7) popup_snote_single_graphic_window_t4_ParamLimits

0x31e4,	// (0x00042ca7) popup_snote_single_graphic_window_t4

0x3218,	// (0x00042cdb) popup_snote_single_graphic_window_t5_ParamLimits

0x3218,	// (0x00042cdb) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004f0bd) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004f0bd) popup_snote_single_graphic_window_t

0x65c0,	// (0x00046083) grid_graphic_popup_pane_ParamLimits

0x65c0,	// (0x00046083) grid_graphic_popup_pane

0x65ee,	// (0x000460b1) listscroll_popup_graphic_pane_g1_ParamLimits

0x65ee,	// (0x000460b1) listscroll_popup_graphic_pane_g1

0xdb64,	// (0x0004d627) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb64,	// (0x0004d627) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0004f4ac) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0004f4ac) listscroll_popup_graphic_pane_g

0x6616,	// (0x000460d9) scroll_pane_cp5

0xdb24,	// (0x0004d5e7) cell_graphic_popup_pane_ParamLimits

0xdb24,	// (0x0004d5e7) cell_graphic_popup_pane

0x6549,	// (0x0004600c) cell_graphic_popup_pane_g1

0x6551,	// (0x00046014) cell_graphic_popup_pane_g2

0x306b,	// (0x00042b2e) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0004f4a5) cell_graphic_popup_pane_g

0x655a,	// (0x0004601d) cell_graphic_popup_pane_t2

0x3074,	// (0x00042b37) grid_highlight_pane_cp3

0x3259,	// (0x00042d1c) list_gen_pane_ParamLimits

0x3259,	// (0x00042d1c) list_gen_pane

0x328b,	// (0x00042d4e) scroll_pane

0xdadf,	// (0x0004d5a2) bg_list_pane_g1_ParamLimits

0xdadf,	// (0x0004d5a2) bg_list_pane_g1

0x64c6,	// (0x00045f89) bg_list_pane_g2_ParamLimits

0x64c6,	// (0x00045f89) bg_list_pane_g2

0x64d9,	// (0x00045f9c) bg_list_pane_g3_ParamLimits

0x64d9,	// (0x00045f9c) bg_list_pane_g3

0x64eb,	// (0x00045fae) bg_list_pane_g4_ParamLimits

0x64eb,	// (0x00045fae) bg_list_pane_g4

0xdafa,	// (0x0004d5bd) bg_list_pane_g5_ParamLimits

0xdafa,	// (0x0004d5bd) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0004f49a) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0004f49a) bg_list_pane_g

0xdaa2,	// (0x0004d565) list_double2_graphic_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double2_graphic_large_graphic_pane

0xdaa2,	// (0x0004d565) list_double2_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double2_graphic_pane

0xdaa2,	// (0x0004d565) list_double2_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double2_large_graphic_pane

0xdaa2,	// (0x0004d565) list_double2_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double2_pane

0xdaa2,	// (0x0004d565) list_double_graphic_heading_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_graphic_heading_pane

0xdaa2,	// (0x0004d565) list_double_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_graphic_pane

0xdaa2,	// (0x0004d565) list_double_heading_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_heading_pane

0xdaa2,	// (0x0004d565) list_double_large_graphic_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_large_graphic_pane

0xdaa2,	// (0x0004d565) list_double_number_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_number_pane

0xdaa2,	// (0x0004d565) list_double_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_pane

0xdaa2,	// (0x0004d565) list_double_time_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_double_time_pane

0xdaa2,	// (0x0004d565) list_setting_number_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_setting_number_pane

0xdaa2,	// (0x0004d565) list_setting_pane_ParamLimits

0xdaa2,	// (0x0004d565) list_setting_pane

0xdab6,	// (0x0004d579) list_single_2graphic_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_2graphic_pane

0xdab6,	// (0x0004d579) list_single_graphic_heading_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_graphic_heading_pane

0xdab6,	// (0x0004d579) list_single_graphic_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_graphic_pane

0xdab6,	// (0x0004d579) list_single_heading_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_heading_pane

0xdab6,	// (0x0004d579) list_single_large_graphic_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_large_graphic_pane

0xdab6,	// (0x0004d579) list_single_number_heading_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_number_heading_pane

0xdab6,	// (0x0004d579) list_single_number_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_number_pane

0xdab6,	// (0x0004d579) list_single_pane_ParamLimits

0xdab6,	// (0x0004d579) list_single_pane

0x29b1,	// (0x00042474) list_highlight_pane_cp1

0x3ee7,	// (0x000439aa) list_single_pane_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_single_pane_g1

0x17e8,	// (0x000412ab) list_single_pane_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_pane_g2

0x0001,

0xf616,	// (0x0004f0d9) list_single_pane_g_ParamLimits

0xf616,	// (0x0004f0d9) list_single_pane_g

0x0860,	// (0x00040323) list_single_pane_t1_ParamLimits

0x0860,	// (0x00040323) list_single_pane_t1

0x3ee7,	// (0x000439aa) list_single_number_pane_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_single_number_pane_g1

0x17e8,	// (0x000412ab) list_single_number_pane_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004f0d9) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004f0d9) list_single_number_pane_g

0x0730,	// (0x000401f3) list_single_number_pane_t1_ParamLimits

0x0730,	// (0x000401f3) list_single_number_pane_t1

0xb785,	// (0x0004b248) list_single_number_pane_t2_ParamLimits

0xb785,	// (0x0004b248) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0004f45b) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0004f45b) list_single_number_pane_t

0xb14d,	// (0x0004ac10) list_single_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0004ac10) list_single_graphic_pane_g1

0x3ee7,	// (0x000439aa) list_single_graphic_pane_g2_ParamLimits

0x3ee7,	// (0x000439aa) list_single_graphic_pane_g2

0x17e8,	// (0x000412ab) list_single_graphic_pane_g3_ParamLimits

0x17e8,	// (0x000412ab) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004f0c8) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004f0c8) list_single_graphic_pane_g

0x0b5d,	// (0x00040620) list_single_graphic_pane_t1_ParamLimits

0x0b5d,	// (0x00040620) list_single_graphic_pane_t1

0xb159,	// (0x0004ac1c) list_single_heading_pane_g1_ParamLimits

0xb159,	// (0x0004ac1c) list_single_heading_pane_g1

0x17e8,	// (0x000412ab) list_single_heading_pane_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004f0cf) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004f0cf) list_single_heading_pane_g

0xb16c,	// (0x0004ac2f) list_single_heading_pane_t1_ParamLimits

0xb16c,	// (0x0004ac2f) list_single_heading_pane_t1

0xbdab,	// (0x0004b86e) list_single_heading_pane_t2_ParamLimits

0xbdab,	// (0x0004b86e) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004f0d4) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004f0d4) list_single_heading_pane_t

0x3ee7,	// (0x000439aa) list_single_number_heading_pane_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_single_number_heading_pane_g1

0x17e8,	// (0x000412ab) list_single_number_heading_pane_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004f0d9) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004f0d9) list_single_number_heading_pane_g

0x0876,	// (0x00040339) list_single_number_heading_pane_t1_ParamLimits

0x0876,	// (0x00040339) list_single_number_heading_pane_t1

0xb182,	// (0x0004ac45) list_single_number_heading_pane_t2_ParamLimits

0xb182,	// (0x0004ac45) list_single_number_heading_pane_t2

0x083a,	// (0x000402fd) list_single_number_heading_pane_t3_ParamLimits

0x083a,	// (0x000402fd) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004f0de) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004f0de) list_single_number_heading_pane_t

0xb194,	// (0x0004ac57) list_single_graphic_heading_pane_g1_ParamLimits

0xb194,	// (0x0004ac57) list_single_graphic_heading_pane_g1

0xbdbd,	// (0x0004b880) list_single_graphic_heading_pane_g4_ParamLimits

0xbdbd,	// (0x0004b880) list_single_graphic_heading_pane_g4

0x17e8,	// (0x000412ab) list_single_graphic_heading_pane_g5_ParamLimits

0x17e8,	// (0x000412ab) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004f0e5) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004f0e5) list_single_graphic_heading_pane_g

0x0876,	// (0x00040339) list_single_graphic_heading_pane_t1_ParamLimits

0x0876,	// (0x00040339) list_single_graphic_heading_pane_t1

0xb1ac,	// (0x0004ac6f) list_single_graphic_heading_pane_t2_ParamLimits

0xb1ac,	// (0x0004ac6f) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004f0ec) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004f0ec) list_single_graphic_heading_pane_t

0x1c0c,	// (0x000416cf) list_single_large_graphic_pane_g1_ParamLimits

0x1c0c,	// (0x000416cf) list_single_large_graphic_pane_g1

0x3ee7,	// (0x000439aa) list_single_large_graphic_pane_g2_ParamLimits

0x3ee7,	// (0x000439aa) list_single_large_graphic_pane_g2

0x17e8,	// (0x000412ab) list_single_large_graphic_pane_g3_ParamLimits

0x17e8,	// (0x000412ab) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004f0f1) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004f0f1) list_single_large_graphic_pane_g

0x543e,	// (0x00044f01) wait_border_pane_g2_copy1

0xbdce,	// (0x0004b891) list_single_large_graphic_pane_g4_cp2

0x0876,	// (0x00040339) list_single_large_graphic_pane_t1_ParamLimits

0x0876,	// (0x00040339) list_single_large_graphic_pane_t1

0x3332,	// (0x00042df5) list_double_pane_g1_ParamLimits

0x3332,	// (0x00042df5) list_double_pane_g1

0xbdd6,	// (0x0004b899) list_double_pane_g2_ParamLimits

0xbdd6,	// (0x0004b899) list_double_pane_g2

0x0001,

0xf635,	// (0x0004f0f8) list_double_pane_g_ParamLimits

0xf635,	// (0x0004f0f8) list_double_pane_g

0xb1c4,	// (0x0004ac87) list_double_pane_t1_ParamLimits

0xb1c4,	// (0x0004ac87) list_double_pane_t1

0xb1da,	// (0x0004ac9d) list_double_pane_t2_ParamLimits

0xb1da,	// (0x0004ac9d) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004f0fd) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004f0fd) list_double_pane_t

0xb1ec,	// (0x0004acaf) list_double2_pane_g1_ParamLimits

0xb1ec,	// (0x0004acaf) list_double2_pane_g1

0xb1fd,	// (0x0004acc0) list_double2_pane_g2_ParamLimits

0xb1fd,	// (0x0004acc0) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004f102) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004f102) list_double2_pane_g

0xb209,	// (0x0004accc) list_double2_pane_t1_ParamLimits

0xb209,	// (0x0004accc) list_double2_pane_t1

0xb21f,	// (0x0004ace2) list_double2_pane_t2_ParamLimits

0xb21f,	// (0x0004ace2) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004f107) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004f107) list_double2_pane_t

0x3332,	// (0x00042df5) list_double_number_pane_g1_ParamLimits

0x3332,	// (0x00042df5) list_double_number_pane_g1

0xbdd6,	// (0x0004b899) list_double_number_pane_g2_ParamLimits

0xbdd6,	// (0x0004b899) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004f0f8) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004f0f8) list_double_number_pane_g

0xb231,	// (0x0004acf4) list_double_number_pane_t1_ParamLimits

0xb231,	// (0x0004acf4) list_double_number_pane_t1

0xb243,	// (0x0004ad06) list_double_number_pane_t2_ParamLimits

0xb243,	// (0x0004ad06) list_double_number_pane_t2

0xb259,	// (0x0004ad1c) list_double_number_pane_t3_ParamLimits

0xb259,	// (0x0004ad1c) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004f10c) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004f10c) list_double_number_pane_t

0xb26b,	// (0x0004ad2e) list_double_graphic_pane_g1_ParamLimits

0xb26b,	// (0x0004ad2e) list_double_graphic_pane_g1

0xb277,	// (0x0004ad3a) list_double_graphic_pane_g2_ParamLimits

0xb277,	// (0x0004ad3a) list_double_graphic_pane_g2

0xb286,	// (0x0004ad49) list_double_graphic_pane_g3_ParamLimits

0xb286,	// (0x0004ad49) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004f113) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004f113) list_double_graphic_pane_g

0xb29e,	// (0x0004ad61) list_double_graphic_pane_t1_ParamLimits

0xb29e,	// (0x0004ad61) list_double_graphic_pane_t1

0xb2b4,	// (0x0004ad77) list_double_graphic_pane_t2_ParamLimits

0xb2b4,	// (0x0004ad77) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004f11c) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004f11c) list_double_graphic_pane_t

0xb2c6,	// (0x0004ad89) list_double2_graphic_pane_g1_ParamLimits

0xb2c6,	// (0x0004ad89) list_double2_graphic_pane_g1

0xb2d2,	// (0x0004ad95) list_double2_graphic_pane_g2_ParamLimits

0xb2d2,	// (0x0004ad95) list_double2_graphic_pane_g2

0xb2de,	// (0x0004ada1) list_double2_graphic_pane_g3_ParamLimits

0xb2de,	// (0x0004ada1) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004f121) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004f121) list_double2_graphic_pane_g

0xb2ea,	// (0x0004adad) list_double2_graphic_pane_t1_ParamLimits

0xb2ea,	// (0x0004adad) list_double2_graphic_pane_t1

0xb300,	// (0x0004adc3) list_double2_graphic_pane_t2_ParamLimits

0xb300,	// (0x0004adc3) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004f128) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004f128) list_double2_graphic_pane_t

0xb312,	// (0x0004add5) list_double_large_graphic_pane_g1_ParamLimits

0xb312,	// (0x0004add5) list_double_large_graphic_pane_g1

0xb33d,	// (0x0004ae00) list_double_large_graphic_pane_g2_ParamLimits

0xb33d,	// (0x0004ae00) list_double_large_graphic_pane_g2

0xbdd6,	// (0x0004b899) list_double_large_graphic_pane_g3_ParamLimits

0xbdd6,	// (0x0004b899) list_double_large_graphic_pane_g3

0xb353,	// (0x0004ae16) list_double_large_graphic_pane_g4_ParamLimits

0xb353,	// (0x0004ae16) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004f12d) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004f12d) list_double_large_graphic_pane_g

0xb366,	// (0x0004ae29) list_double_large_graphic_pane_t1_ParamLimits

0xb366,	// (0x0004ae29) list_double_large_graphic_pane_t1

0xb37f,	// (0x0004ae42) list_double_large_graphic_pane_t2_ParamLimits

0xb37f,	// (0x0004ae42) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004f138) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004f138) list_double_large_graphic_pane_t

0xbde2,	// (0x0004b8a5) list_double2_large_graphic_pane_g1_ParamLimits

0xbde2,	// (0x0004b8a5) list_double2_large_graphic_pane_g1

0xb391,	// (0x0004ae54) list_double2_large_graphic_pane_g2_ParamLimits

0xb391,	// (0x0004ae54) list_double2_large_graphic_pane_g2

0xb2de,	// (0x0004ada1) list_double2_large_graphic_pane_g3_ParamLimits

0xb2de,	// (0x0004ada1) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004f13d) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004f13d) list_double2_large_graphic_pane_g

0xb3a2,	// (0x0004ae65) list_double2_large_graphic_pane_t1_ParamLimits

0xb3a2,	// (0x0004ae65) list_double2_large_graphic_pane_t1

0xb3b8,	// (0x0004ae7b) list_double2_large_graphic_pane_t2_ParamLimits

0xb3b8,	// (0x0004ae7b) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004f144) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004f144) list_double2_large_graphic_pane_t

0xb3ca,	// (0x0004ae8d) list_double_heading_pane_g1_ParamLimits

0xb3ca,	// (0x0004ae8d) list_double_heading_pane_g1

0xb3db,	// (0x0004ae9e) list_double_heading_pane_g2_ParamLimits

0xb3db,	// (0x0004ae9e) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004f149) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004f149) list_double_heading_pane_g

0xb3e7,	// (0x0004aeaa) list_double_heading_pane_t1_ParamLimits

0xb3e7,	// (0x0004aeaa) list_double_heading_pane_t1

0xb21f,	// (0x0004ace2) list_double_heading_pane_t2_ParamLimits

0xb21f,	// (0x0004ace2) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004f14e) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004f14e) list_double_heading_pane_t

0xb3fd,	// (0x0004aec0) list_double_graphic_heading_pane_g1_ParamLimits

0xb3fd,	// (0x0004aec0) list_double_graphic_heading_pane_g1

0xb3ca,	// (0x0004ae8d) list_double_graphic_heading_pane_g2_ParamLimits

0xb3ca,	// (0x0004ae8d) list_double_graphic_heading_pane_g2

0xb3db,	// (0x0004ae9e) list_double_graphic_heading_pane_g3_ParamLimits

0xb3db,	// (0x0004ae9e) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004f153) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004f153) list_double_graphic_heading_pane_g

0xb409,	// (0x0004aecc) list_double_graphic_heading_pane_t1_ParamLimits

0xb409,	// (0x0004aecc) list_double_graphic_heading_pane_t1

0xb300,	// (0x0004adc3) list_double_graphic_heading_pane_t2_ParamLimits

0xb300,	// (0x0004adc3) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004f15a) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004f15a) list_double_graphic_heading_pane_t

0xb41f,	// (0x0004aee2) list_double_time_pane_g1_ParamLimits

0xb41f,	// (0x0004aee2) list_double_time_pane_g1

0xb430,	// (0x0004aef3) list_double_time_pane_g2_ParamLimits

0xb430,	// (0x0004aef3) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004f15f) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004f15f) list_double_time_pane_g

0xb43c,	// (0x0004aeff) list_double_time_pane_t1_ParamLimits

0xb43c,	// (0x0004aeff) list_double_time_pane_t1

0xb452,	// (0x0004af15) list_double_time_pane_t2_ParamLimits

0xb452,	// (0x0004af15) list_double_time_pane_t2

0xb464,	// (0x0004af27) list_double_time_pane_t3_ParamLimits

0xb464,	// (0x0004af27) list_double_time_pane_t3

0xb476,	// (0x0004af39) list_double_time_pane_t4_ParamLimits

0xb476,	// (0x0004af39) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004f164) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004f164) list_double_time_pane_t

0xb488,	// (0x0004af4b) list_setting_pane_g1_ParamLimits

0xb488,	// (0x0004af4b) list_setting_pane_g1

0xb1fd,	// (0x0004acc0) list_setting_pane_g2_ParamLimits

0xb1fd,	// (0x0004acc0) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004f16d) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004f16d) list_setting_pane_g

0xb494,	// (0x0004af57) list_setting_pane_t1_ParamLimits

0xb494,	// (0x0004af57) list_setting_pane_t1

0xb4ae,	// (0x0004af71) list_setting_pane_t2_ParamLimits

0xb4ae,	// (0x0004af71) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004f172) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004f172) list_setting_pane_t

0xb4ed,	// (0x0004afb0) set_value_pane_cp_ParamLimits

0xb4ed,	// (0x0004afb0) set_value_pane_cp

0xb4fb,	// (0x0004afbe) list_setting_number_pane_g1_ParamLimits

0xb4fb,	// (0x0004afbe) list_setting_number_pane_g1

0xb507,	// (0x0004afca) list_setting_number_pane_g2_ParamLimits

0xb507,	// (0x0004afca) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004f179) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004f179) list_setting_number_pane_g

0xb513,	// (0x0004afd6) list_setting_number_pane_t1_ParamLimits

0xb513,	// (0x0004afd6) list_setting_number_pane_t1

0xb52c,	// (0x0004afef) list_setting_number_pane_t2_ParamLimits

0xb52c,	// (0x0004afef) list_setting_number_pane_t2

0xb546,	// (0x0004b009) list_setting_number_pane_t3_ParamLimits

0xb546,	// (0x0004b009) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004f17e) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004f17e) list_setting_number_pane_t

0xb4ed,	// (0x0004afb0) set_value_pane_ParamLimits

0xb4ed,	// (0x0004afb0) set_value_pane

0x32bf,	// (0x00042d82) bg_set_opt_pane_ParamLimits

0x32bf,	// (0x00042d82) bg_set_opt_pane

0x03e0,	// (0x0003fea3) set_value_pane_t1

0x32e0,	// (0x00042da3) slider_set_pane_cp3

0x32e9,	// (0x00042dac) volume_small_pane_cp

0x32f2,	// (0x00042db5) list_form_gen_pane

0x32fb,	// (0x00042dbe) scroll_pane_cp8

0xb589,	// (0x0004b04c) form_field_data_pane_ParamLimits

0xb589,	// (0x0004b04c) form_field_data_pane

0xb5a6,	// (0x0004b069) form_field_data_wide_pane_ParamLimits

0xb5a6,	// (0x0004b069) form_field_data_wide_pane

0xb5ca,	// (0x0004b08d) form_field_popup_pane_ParamLimits

0xb5ca,	// (0x0004b08d) form_field_popup_pane

0x0467,	// (0x0003ff2a) form_field_popup_wide_pane_ParamLimits

0x0467,	// (0x0003ff2a) form_field_popup_wide_pane

0x0488,	// (0x0003ff4b) form_field_slider_pane_ParamLimits

0x0488,	// (0x0003ff4b) form_field_slider_pane

0x049b,	// (0x0003ff5e) form_field_slider_wide_pane_ParamLimits

0x049b,	// (0x0003ff5e) form_field_slider_wide_pane

0x330c,	// (0x00042dcf) data_form_pane

0xb5f6,	// (0x0004b0b9) form_field_data_pane_t1

0x3318,	// (0x00042ddb) input_focus_pane

0x3326,	// (0x00042de9) data_form_wide_pane

0x04de,	// (0x0003ffa1) form_field_data_wide_pane_t1

0x3089,	// (0x00042b4c) input_focus_pane_cp6

0xb610,	// (0x0004b0d3) form_field_popup_pane_t1

0x3318,	// (0x00042ddb) input_focus_pane_cp7

0x3352,	// (0x00042e15) list_form_pane

0x0522,	// (0x0003ffe5) form_field_popup_wide_pane_t1

0x3318,	// (0x00042ddb) input_focus_pane_cp8

0x335e,	// (0x00042e21) list_form_wide_pane

0xb632,	// (0x0004b0f5) form_field_slider_pane_t1_ParamLimits

0xb632,	// (0x0004b0f5) form_field_slider_pane_t1

0xb64a,	// (0x0004b10d) form_field_slider_pane_t2_ParamLimits

0xb64a,	// (0x0004b10d) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004f18e) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004f18e) form_field_slider_pane_t

0x2d0d,	// (0x000427d0) input_focus_pane_cp9_ParamLimits

0x2d0d,	// (0x000427d0) input_focus_pane_cp9

0xb65f,	// (0x0004b122) slider_cont_pane_ParamLimits

0xb65f,	// (0x0004b122) slider_cont_pane

0x336d,	// (0x00042e30) form_field_slider_wide_pane_t1_ParamLimits

0x336d,	// (0x00042e30) form_field_slider_wide_pane_t1

0x0580,	// (0x00040043) form_field_slider_wide_pane_t2_ParamLimits

0x0580,	// (0x00040043) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004f193) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004f193) form_field_slider_wide_pane_t

0x2d0d,	// (0x000427d0) input_focus_pane_cp10_ParamLimits

0x2d0d,	// (0x000427d0) input_focus_pane_cp10

0xb673,	// (0x0004b136) slider_cont_pane_cp1_ParamLimits

0xb673,	// (0x0004b136) slider_cont_pane_cp1

0xb687,	// (0x0004b14a) slider_form_pane_cp

0x337f,	// (0x00042e42) input_focus_pane_g1

0x3387,	// (0x00042e4a) input_focus_pane_g2

0x338f,	// (0x00042e52) input_focus_pane_g3

0x3397,	// (0x00042e5a) input_focus_pane_g4

0x339f,	// (0x00042e62) input_focus_pane_g5

0x33a7,	// (0x00042e6a) input_focus_pane_g6

0x33af,	// (0x00042e72) input_focus_pane_g7

0x33b7,	// (0x00042e7a) input_focus_pane_g8

0x33bf,	// (0x00042e82) input_focus_pane_g9

0x29a7,	// (0x0004246a) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004f198) input_focus_pane_g

0x5447,	// (0x00044f0a) wait_border_pane_g3_copy1

0xb68f,	// (0x0004b152) data_form_pane_t1

0x29a7,	// (0x0004246a) wait_anim_pane_g1_copy1

0xb797,	// (0x0004b25a) data_form_wide_pane_t1

0x05cd,	// (0x00040090) list_form_graphic_pane_cp_ParamLimits

0x05cd,	// (0x00040090) list_form_graphic_pane_cp

0x63cc,	// (0x00045e8f) slider_form_pane_g1

0x63d5,	// (0x00045e98) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0004f48b) slider_form_pane_g

0xb6ab,	// (0x0004b16e) list_form_graphic_pane_ParamLimits

0xb6ab,	// (0x0004b16e) list_form_graphic_pane

0x05df,	// (0x000400a2) list_form_graphic_pane_g1

0x05e7,	// (0x000400aa) list_form_graphic_pane_t1_ParamLimits

0x05e7,	// (0x000400aa) list_form_graphic_pane_t1

0x2a91,	// (0x00042554) list_highlight_pane_cp5_ParamLimits

0x2a91,	// (0x00042554) list_highlight_pane_cp5

0xb6bc,	// (0x0004b17f) find_pane_g1

0x33c7,	// (0x00042e8a) input_find_pane

0xb6c5,	// (0x0004b188) input_find_pane_g1_ParamLimits

0xb6c5,	// (0x0004b188) input_find_pane_g1

0xb6d1,	// (0x0004b194) input_find_pane_t1_ParamLimits

0xb6d1,	// (0x0004b194) input_find_pane_t1

0xb6e6,	// (0x0004b1a9) input_find_pane_t2_ParamLimits

0xb6e6,	// (0x0004b1a9) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004f1ad) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004f1ad) input_find_pane_t

0x33d0,	// (0x00042e93) input_focus_pane_cp5_ParamLimits

0x33d0,	// (0x00042e93) input_focus_pane_cp5

0xc77a,	// (0x0004c23d) bg_popup_window_pane_cp2_ParamLimits

0xc77a,	// (0x0004c23d) bg_popup_window_pane_cp2

0xc787,	// (0x0004c24a) listscroll_menu_pane_ParamLimits

0xc787,	// (0x0004c24a) listscroll_menu_pane

0xc793,	// (0x0004c256) popup_submenu_window_ParamLimits

0xc793,	// (0x0004c256) popup_submenu_window

0x3433,	// (0x00042ef6) find_popup_pane_g1

0x343b,	// (0x00042efe) input_popup_find_pane_cp

0x33d0,	// (0x00042e93) input_focus_pane_cp4_ParamLimits

0x33d0,	// (0x00042e93) input_focus_pane_cp4

0x3453,	// (0x00042f16) input_popup_find_pane_t1_ParamLimits

0x3453,	// (0x00042f16) input_popup_find_pane_t1

0x29b1,	// (0x00042474) bg_popup_sub_pane_cp

0x3481,	// (0x00042f44) listscroll_popup_sub_pane

0x3489,	// (0x00042f4c) list_submenu_pane_ParamLimits

0x3489,	// (0x00042f4c) list_submenu_pane

0x349a,	// (0x00042f5d) scroll_pane_cp4

0x34a2,	// (0x00042f65) list_single_popup_submenu_pane_ParamLimits

0x34a2,	// (0x00042f65) list_single_popup_submenu_pane

0x34b7,	// (0x00042f7a) list_single_popup_submenu_pane_g1

0x34bf,	// (0x00042f82) list_single_popup_submenu_pane_t1_ParamLimits

0x34bf,	// (0x00042f82) list_single_popup_submenu_pane_t1

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp1_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp1

0xc7d1,	// (0x0004c294) tabs_2_active_pane_g1

0xc7d9,	// (0x0004c29c) tabs_2_active_pane_t1

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp1_ParamLimits

0x2d0d,	// (0x000427d0) bg_passive_tab_pane_cp1

0xc7d1,	// (0x0004c294) tabs_2_passive_pane_g1

0xc7d9,	// (0x0004c29c) tabs_2_passive_pane_t1

0x2a91,	// (0x00042554) bg_active_tab_pane_cp4

0xc7eb,	// (0x0004c2ae) tabs_2_long_active_pane_t1

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp4

0x1819,	// (0x000412dc) list_single_midp_graphic_pane_g4_ParamLimits

0x2a91,	// (0x00042554) bg_active_tab_pane_cp5

0xc7fe,	// (0x0004c2c1) tabs_3_long_active_pane_t1

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp5

0x1819,	// (0x000412dc) list_single_midp_graphic_pane_g4

0x2a91,	// (0x00042554) bg_popup_window_pane_cp13_ParamLimits

0x2a91,	// (0x00042554) bg_popup_window_pane_cp13

0x3536,	// (0x00042ff9) listscroll_popup_fast_pane_ParamLimits

0x3536,	// (0x00042ff9) listscroll_popup_fast_pane

0x3545,	// (0x00043008) grid_popup_fast_pane_ParamLimits

0x3545,	// (0x00043008) grid_popup_fast_pane

0x3557,	// (0x0004301a) scroll_pane_cp9_ParamLimits

0x3557,	// (0x0004301a) scroll_pane_cp9

0x7cff,	// (0x000477c2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7cff,	// (0x000477c2) list_single_graphic_hl_pane_t1_cp2

0x357b,	// (0x0004303e) input_focus_pane_cp20_ParamLimits

0x357b,	// (0x0004303e) input_focus_pane_cp20

0x3589,	// (0x0004304c) query_popup_data_pane_t1_ParamLimits

0x3589,	// (0x0004304c) query_popup_data_pane_t1

0x359c,	// (0x0004305f) query_popup_data_pane_t2_ParamLimits

0x359c,	// (0x0004305f) query_popup_data_pane_t2

0x35e2,	// (0x000430a5) query_popup_data_pane_t3_ParamLimits

0x35e2,	// (0x000430a5) query_popup_data_pane_t3

0x3623,	// (0x000430e6) query_popup_data_pane_t4_ParamLimits

0x3623,	// (0x000430e6) query_popup_data_pane_t4

0x365f,	// (0x00043122) query_popup_data_pane_t5_ParamLimits

0x365f,	// (0x00043122) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004f1b2) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004f1b2) query_popup_data_pane_t

0x337f,	// (0x00042e42) bg_set_opt_pane_g1

0x3387,	// (0x00042e4a) bg_set_opt_pane_g2

0x338f,	// (0x00042e52) bg_set_opt_pane_g3

0x3397,	// (0x00042e5a) bg_set_opt_pane_g4

0x339f,	// (0x00042e62) bg_set_opt_pane_g5

0x33a7,	// (0x00042e6a) bg_set_opt_pane_g6

0x33af,	// (0x00042e72) bg_set_opt_pane_g7

0x33b7,	// (0x00042e7a) bg_set_opt_pane_g8

0x33bf,	// (0x00042e82) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004f1bd) bg_set_opt_pane_g

0x147d,	// (0x00040f40) control_top_pane_stacon_ParamLimits

0x147d,	// (0x00040f40) control_top_pane_stacon

0x14d0,	// (0x00040f93) signal_pane_stacon_ParamLimits

0x14d0,	// (0x00040f93) signal_pane_stacon

0x3c0b,	// (0x000436ce) stacon_top_pane_g1_ParamLimits

0x3c0b,	// (0x000436ce) stacon_top_pane_g1

0x14f5,	// (0x00040fb8) title_pane_stacon_ParamLimits

0x14f5,	// (0x00040fb8) title_pane_stacon

0x151f,	// (0x00040fe2) uni_indicator_pane_stacon_ParamLimits

0x151f,	// (0x00040fe2) uni_indicator_pane_stacon

0x1537,	// (0x00040ffa) battery_pane_stacon_ParamLimits

0x1537,	// (0x00040ffa) battery_pane_stacon

0x157b,	// (0x0004103e) control_bottom_pane_stacon_ParamLimits

0x157b,	// (0x0004103e) control_bottom_pane_stacon

0x159e,	// (0x00041061) navi_pane_stacon_ParamLimits

0x159e,	// (0x00041061) navi_pane_stacon

0x3c2d,	// (0x000436f0) stacon_bottom_pane_g1_ParamLimits

0x3c2d,	// (0x000436f0) stacon_bottom_pane_g1

0x11bc,	// (0x00040c7f) aid_levels_signal_lsc_ParamLimits

0x11bc,	// (0x00040c7f) aid_levels_signal_lsc

0x11d3,	// (0x00040c96) signal_pane_stacon_g1_ParamLimits

0x11d3,	// (0x00040c96) signal_pane_stacon_g1

0x11e7,	// (0x00040caa) signal_pane_stacon_g2_ParamLimits

0x11e7,	// (0x00040caa) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004f1d0) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004f1d0) signal_pane_stacon_g

0x121c,	// (0x00040cdf) title_pane_stacon_t1_ParamLimits

0x121c,	// (0x00040cdf) title_pane_stacon_t1

0x36a3,	// (0x00043166) uni_indicator_pane_stacon_g1

0x36ad,	// (0x00043170) uni_indicator_pane_stacon_g2

0x36b7,	// (0x0004317a) uni_indicator_pane_stacon_g3

0x36c1,	// (0x00043184) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004f1dc) uni_indicator_pane_stacon_g

0x1241,	// (0x00040d04) control_top_pane_stacon_g1

0x1249,	// (0x00040d0c) control_top_pane_stacon_t1_ParamLimits

0x1249,	// (0x00040d0c) control_top_pane_stacon_t1

0x1280,	// (0x00040d43) aid_levels_battery_lsc_ParamLimits

0x1280,	// (0x00040d43) aid_levels_battery_lsc

0x1298,	// (0x00040d5b) battery_pane_stacon_g1_ParamLimits

0x1298,	// (0x00040d5b) battery_pane_stacon_g1

0x12ab,	// (0x00040d6e) battery_pane_stacon_g2_ParamLimits

0x12ab,	// (0x00040d6e) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004f1e5) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004f1e5) battery_pane_stacon_g

0x12e9,	// (0x00040dac) navi_icon_pane_stacon

0x12fd,	// (0x00040dc0) navi_navi_pane_stacon

0x12e9,	// (0x00040dac) navi_text_pane_stacon

0x1241,	// (0x00040d04) control_bottom_pane_stacon_g1

0x1313,	// (0x00040dd6) control_bottom_pane_stacon_t1_ParamLimits

0x1313,	// (0x00040dd6) control_bottom_pane_stacon_t1

0xc810,	// (0x0004c2d3) grid_app_pane_ParamLimits

0xc810,	// (0x0004c2d3) grid_app_pane

0xc848,	// (0x0004c30b) scroll_pane_cp15_ParamLimits

0xc848,	// (0x0004c30b) scroll_pane_cp15

0xc865,	// (0x0004c328) cell_app_pane_ParamLimits

0xc865,	// (0x0004c328) cell_app_pane

0xc8a6,	// (0x0004c369) cell_app_pane_g1_ParamLimits

0xc8a6,	// (0x0004c369) cell_app_pane_g1

0x376e,	// (0x00043231) cell_app_pane_g2_ParamLimits

0x376e,	// (0x00043231) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004f1ea) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004f1ea) cell_app_pane_g

0x377a,	// (0x0004323d) cell_app_pane_t1_ParamLimits

0x377a,	// (0x0004323d) cell_app_pane_t1

0x378c,	// (0x0004324f) grid_highlight_pane_ParamLimits

0x378c,	// (0x0004324f) grid_highlight_pane

0x337f,	// (0x00042e42) cell_highlight_pane_g1

0x3387,	// (0x00042e4a) cell_highlight_pane_g2

0x338f,	// (0x00042e52) cell_highlight_pane_g3

0x3397,	// (0x00042e5a) cell_highlight_pane_g4

0x339f,	// (0x00042e62) cell_highlight_pane_g5

0x33a7,	// (0x00042e6a) cell_highlight_pane_g6

0x33af,	// (0x00042e72) cell_highlight_pane_g7

0x33b7,	// (0x00042e7a) cell_highlight_pane_g8

0x33bf,	// (0x00042e82) cell_highlight_pane_g9

0x29a7,	// (0x0004246a) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004f198) cell_highlight_pane_g

0x379d,	// (0x00043260) bg_scroll_pane

0x135d,	// (0x00040e20) scroll_handle_pane

0x37e4,	// (0x000432a7) scroll_bg_pane_g1

0x37f9,	// (0x000432bc) scroll_bg_pane_g2

0x3811,	// (0x000432d4) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004f1ef) scroll_bg_pane_g

0x3826,	// (0x000432e9) scroll_handle_focus_pane_ParamLimits

0x3826,	// (0x000432e9) scroll_handle_focus_pane

0x37e4,	// (0x000432a7) scroll_handle_pane_g1

0x3833,	// (0x000432f6) scroll_handle_pane_g2

0x3811,	// (0x000432d4) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004f1f6) scroll_handle_pane_g

0x33d0,	// (0x00042e93) bg_popup_sub_pane_cp21_ParamLimits

0x33d0,	// (0x00042e93) bg_popup_sub_pane_cp21

0x3847,	// (0x0004330a) popup_fep_japan_predictive_window_t1_ParamLimits

0x3847,	// (0x0004330a) popup_fep_japan_predictive_window_t1

0x385e,	// (0x00043321) popup_fep_japan_predictive_window_t2_ParamLimits

0x385e,	// (0x00043321) popup_fep_japan_predictive_window_t2

0x3891,	// (0x00043354) popup_fep_japan_predictive_window_t3_ParamLimits

0x3891,	// (0x00043354) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004f1fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004f1fd) popup_fep_japan_predictive_window_t

0x29b1,	// (0x00042474) bg_popup_sub_pane_cp23

0x38c8,	// (0x0004338b) listscroll_japin_cand_pane

0x38d0,	// (0x00043393) popup_fep_japan_candidate_window_t1

0x38de,	// (0x000433a1) candidate_pane_ParamLimits

0x38de,	// (0x000433a1) candidate_pane

0x38f0,	// (0x000433b3) scroll_pane_cp30

0x38fa,	// (0x000433bd) list_single_popup_jap_candidate_pane_ParamLimits

0x38fa,	// (0x000433bd) list_single_popup_jap_candidate_pane

0x29b1,	// (0x00042474) list_highlight_pane_cp30

0x390e,	// (0x000433d1) list_single_popup_jap_candidate_pane_t1

0xc8ca,	// (0x0004c38d) level_1_signal

0xc8dc,	// (0x0004c39f) level_2_signal

0xc8ef,	// (0x0004c3b2) level_3_signal

0xc902,	// (0x0004c3c5) level_4_signal

0xc915,	// (0x0004c3d8) level_5_signal

0xc928,	// (0x0004c3eb) level_6_signal

0xc93b,	// (0x0004c3fe) level_7_signal

0xc8ca,	// (0x0004c38d) level_1_battery

0xc8dc,	// (0x0004c39f) level_2_battery

0xc8ef,	// (0x0004c3b2) level_3_battery

0xc902,	// (0x0004c3c5) level_4_battery

0xc915,	// (0x0004c3d8) level_5_battery

0xc928,	// (0x0004c3eb) level_6_battery

0xc93b,	// (0x0004c3fe) level_7_battery

0x3990,	// (0x00043453) list_menu_pane_ParamLimits

0x3990,	// (0x00043453) list_menu_pane

0x39a1,	// (0x00043464) scroll_pane_cp25_ParamLimits

0x39a1,	// (0x00043464) scroll_pane_cp25

0x39ba,	// (0x0004347d) list_double2_graphic_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double2_graphic_pane_cp2

0x39ba,	// (0x0004347d) list_double2_large_graphic_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double2_large_graphic_pane_cp2

0x39ba,	// (0x0004347d) list_double2_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double2_pane_cp2

0x39ba,	// (0x0004347d) list_double_graphic_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double_graphic_pane_cp2

0x39ba,	// (0x0004347d) list_double_large_graphic_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double_large_graphic_pane_cp2

0x39ba,	// (0x0004347d) list_double_number_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double_number_pane_cp2

0x39ba,	// (0x0004347d) list_double_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double_pane_cp2

0xc94e,	// (0x0004c411) list_single_2graphic_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_2graphic_pane_cp2

0xc94e,	// (0x0004c411) list_single_graphic_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_graphic_heading_pane_cp2

0xc94e,	// (0x0004c411) list_single_graphic_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_graphic_pane_cp2

0xc94e,	// (0x0004c411) list_single_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_heading_pane_cp2

0x39fd,	// (0x000434c0) list_single_large_graphic_pane_cp2_ParamLimits

0x39fd,	// (0x000434c0) list_single_large_graphic_pane_cp2

0xc94e,	// (0x0004c411) list_single_number_heading_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_number_heading_pane_cp2

0xc94e,	// (0x0004c411) list_single_number_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_number_pane_cp2

0xc94e,	// (0x0004c411) list_single_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_pane_cp2

0x3a52,	// (0x00043515) bg_popup_sub_pane_cp22

0x140f,	// (0x00040ed2) popup_side_volume_key_window_g1

0x1439,	// (0x00040efc) popup_side_volume_key_window_t1

0x1457,	// (0x00040f1a) volume_small_pane_cp1

0x2d0d,	// (0x000427d0) bg_popup_sub_pane_cp24_ParamLimits

0x2d0d,	// (0x000427d0) bg_popup_sub_pane_cp24

0x3a68,	// (0x0004352b) fep_china_uni_candidate_pane_ParamLimits

0x3a68,	// (0x0004352b) fep_china_uni_candidate_pane

0x3a7c,	// (0x0004353f) fep_china_uni_entry_pane

0x3a8c,	// (0x0004354f) popup_fep_china_uni_window_g1

0x3aa8,	// (0x0004356b) fep_china_uni_entry_pane_g1

0x3ab2,	// (0x00043575) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004f22a) fep_china_uni_entry_pane_g

0x3abc,	// (0x0004357f) fep_entry_item_pane

0x3ac6,	// (0x00043589) fep_candidate_item_pane

0x3ace,	// (0x00043591) fep_china_uni_candidate_pane_g1

0x3ad8,	// (0x0004359b) fep_china_uni_candidate_pane_g2

0x3ae0,	// (0x000435a3) fep_china_uni_candidate_pane_g3

0x3ae8,	// (0x000435ab) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004f22f) fep_china_uni_candidate_pane_g

0x29a7,	// (0x0004246a) fep_entry_item_pane_g1

0x3af2,	// (0x000435b5) fep_entry_item_pane_t1_ParamLimits

0x3af2,	// (0x000435b5) fep_entry_item_pane_t1

0x3b08,	// (0x000435cb) fep_candidate_item_pane_t1_ParamLimits

0x3b08,	// (0x000435cb) fep_candidate_item_pane_t1

0x3b1d,	// (0x000435e0) fep_candidate_item_pane_t2_ParamLimits

0x3b1d,	// (0x000435e0) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004f238) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004f238) fep_candidate_item_pane_t

0x2a91,	// (0x00042554) list_highlight_pane_cp31_ParamLimits

0x2a91,	// (0x00042554) list_highlight_pane_cp31

0x3b2f,	// (0x000435f2) level_1_signal_lsc

0x3b38,	// (0x000435fb) level_2_signal_lsc

0x3b41,	// (0x00043604) level_3_signal_lsc

0x3b4a,	// (0x0004360d) level_4_signal_lsc

0x3b53,	// (0x00043616) level_5_signal_lsc

0x3b5c,	// (0x0004361f) level_6_signal_lsc

0x3b65,	// (0x00043628) level_7_signal_lsc

0x3b65,	// (0x00043628) level_1_battery_lsc

0x3b6e,	// (0x00043631) level_2_battery_lsc

0x3b77,	// (0x0004363a) level_3_battery_lsc

0x3b80,	// (0x00043643) level_4_battery_lsc

0x3b89,	// (0x0004364c) level_5_battery_lsc

0x3b92,	// (0x00043655) level_6_battery_lsc

0x3b2f,	// (0x000435f2) level_7_battery_lsc

0x3b9b,	// (0x0004365e) scroll_handle_focus_pane_g1

0x3ba4,	// (0x00043667) scroll_handle_focus_pane_g2

0x3bad,	// (0x00043670) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004f23d) scroll_handle_focus_pane_g

0xb6fb,	// (0x0004b1be) list_single_2graphic_pane_g1_ParamLimits

0xb6fb,	// (0x0004b1be) list_single_2graphic_pane_g1

0xbdbd,	// (0x0004b880) list_single_2graphic_pane_g2_ParamLimits

0xbdbd,	// (0x0004b880) list_single_2graphic_pane_g2

0x17e8,	// (0x000412ab) list_single_2graphic_pane_g3_ParamLimits

0x17e8,	// (0x000412ab) list_single_2graphic_pane_g3

0xbdf7,	// (0x0004b8ba) list_single_2graphic_pane_g4_ParamLimits

0xbdf7,	// (0x0004b8ba) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004f244) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004f244) list_single_2graphic_pane_g

0xb707,	// (0x0004b1ca) list_single_2graphic_pane_t1_ParamLimits

0xb707,	// (0x0004b1ca) list_single_2graphic_pane_t1

0xbe08,	// (0x0004b8cb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe08,	// (0x0004b8cb) list_double2_graphic_large_graphic_pane_g1

0xb391,	// (0x0004ae54) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb391,	// (0x0004ae54) list_double2_graphic_large_graphic_pane_g2

0xb2de,	// (0x0004ada1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb2de,	// (0x0004ada1) list_double2_graphic_large_graphic_pane_g3

0xb735,	// (0x0004b1f8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb735,	// (0x0004b1f8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004f24d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004f24d) list_double2_graphic_large_graphic_pane_g

0xb741,	// (0x0004b204) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb741,	// (0x0004b204) list_double2_graphic_large_graphic_pane_t1

0xb757,	// (0x0004b21a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb757,	// (0x0004b21a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004f256) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004f256) list_double2_graphic_large_graphic_pane_t

0x3cef,	// (0x000437b2) popup_fast_swap_window_ParamLimits

0x3cef,	// (0x000437b2) popup_fast_swap_window

0x3d0d,	// (0x000437d0) popup_side_volume_key_window

0x3d2b,	// (0x000437ee) stacon_top_pane

0x3d35,	// (0x000437f8) status_pane_ParamLimits

0x3d35,	// (0x000437f8) status_pane

0x3d2b,	// (0x000437ee) status_small_pane

0x29b1,	// (0x00042474) control_pane

0x29b1,	// (0x00042474) stacon_bottom_pane

0x32fb,	// (0x00042dbe) scroll_pane_cp121

0x32f2,	// (0x00042db5) set_content_pane

0xc9b1,	// (0x0004c474) bg_active_tab_pane_g1_cp1

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp1

0xc9ba,	// (0x0004c47d) bg_active_tab_pane_g3_cp1

0xc9b1,	// (0x0004c474) bg_passive_tab_pane_g1_cp1

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp1

0xc9ba,	// (0x0004c47d) bg_passive_tab_pane_g3_cp1

0xc9c3,	// (0x0004c486) bg_active_tab_pane_g1_cp2

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp2

0xc9cc,	// (0x0004c48f) bg_active_tab_pane_g3_cp2

0xc9c3,	// (0x0004c486) bg_passive_tab_pane_g1_cp2

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp2

0xc9cc,	// (0x0004c48f) bg_passive_tab_pane_g3_cp2

0xc9d5,	// (0x0004c498) bg_active_tab_pane_g1_cp3

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp3

0xc9de,	// (0x0004c4a1) bg_active_tab_pane_g3_cp3

0xc9d5,	// (0x0004c498) bg_passive_tab_pane_g1_cp3

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp3

0xc9de,	// (0x0004c4a1) bg_passive_tab_pane_g3_cp3

0xc9e7,	// (0x0004c4aa) bg_active_tab_pane_g1_cp4

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp4

0xc9f0,	// (0x0004c4b3) bg_active_tab_pane_g3_cp4

0xc9e7,	// (0x0004c4aa) bg_passive_tab_pane_g1_cp4

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp4

0xc9f0,	// (0x0004c4b3) bg_passive_tab_pane_g3_cp4

0x3c49,	// (0x0004370c) bg_active_tab_pane_g1_cp5

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp5

0x3c52,	// (0x00043715) bg_active_tab_pane_g3_cp5

0x3c49,	// (0x0004370c) bg_passive_tab_pane_g1_cp5

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp5

0x3c52,	// (0x00043715) bg_passive_tab_pane_g3_cp5

0x34a2,	// (0x00042f65) list_set_graphic_pane_ParamLimits

0x34a2,	// (0x00042f65) list_set_graphic_pane

0x29b1,	// (0x00042474) bg_set_opt_pane_cp4

0xc9f9,	// (0x0004c4bc) list_set_graphic_pane_g1_ParamLimits

0xc9f9,	// (0x0004c4bc) list_set_graphic_pane_g1

0xca05,	// (0x0004c4c8) list_set_graphic_pane_g2_ParamLimits

0xca05,	// (0x0004c4c8) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004f25b) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004f25b) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0004f5c6) volume_small_pane_cp_g

0x3ca0,	// (0x00043763) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3ca0,	// (0x00043763) list_double2_large_graphic_pane_g1_cp2

0x3cae,	// (0x00043771) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3cae,	// (0x00043771) list_double2_large_graphic_pane_g2_cp2

0x3cbf,	// (0x00043782) list_double2_large_graphic_pane_g3_cp2

0x3cc7,	// (0x0004378a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3cc7,	// (0x0004378a) list_double2_large_graphic_pane_t1_cp2

0x3cdd,	// (0x000437a0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3cdd,	// (0x000437a0) list_double2_large_graphic_pane_t2_cp2

0x5f31,	// (0x000459f4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5f31,	// (0x000459f4) list_double_large_graphic_pane_g1_cp2

0x5f44,	// (0x00045a07) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5f44,	// (0x00045a07) list_double_large_graphic_pane_g2_cp2

0x3e53,	// (0x00043916) list_double_large_graphic_pane_g3_cp2

0x5f55,	// (0x00045a18) list_double_large_graphic_pane_g4_cp

0x5f5d,	// (0x00045a20) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5f5d,	// (0x00045a20) list_double_large_graphic_pane_t1_cp2

0x5f74,	// (0x00045a37) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5f74,	// (0x00045a37) list_double_large_graphic_pane_t2_cp2

0x3d43,	// (0x00043806) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3d43,	// (0x00043806) list_double2_graphic_pane_g1_cp2

0x3d51,	// (0x00043814) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3d51,	// (0x00043814) list_double2_graphic_pane_g2_cp2

0x3d62,	// (0x00043825) list_double2_graphic_pane_g3_cp2

0x3d6c,	// (0x0004382f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3d6c,	// (0x0004382f) list_double2_graphic_pane_t1_cp2

0x3d82,	// (0x00043845) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3d82,	// (0x00043845) list_double2_graphic_pane_t2_cp2

0x3d94,	// (0x00043857) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3d94,	// (0x00043857) list_single_number_heading_pane_g1_cp2

0x3da0,	// (0x00043863) list_single_number_heading_pane_g2_cp2

0x3da8,	// (0x0004386b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3da8,	// (0x0004386b) list_single_number_heading_pane_t1_cp2

0x3dbe,	// (0x00043881) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3dbe,	// (0x00043881) list_single_number_heading_pane_t2_cp2

0x3dd2,	// (0x00043895) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3dd2,	// (0x00043895) list_single_number_heading_pane_t3_cp2

0x3d94,	// (0x00043857) list_single_heading_pane_g1_cp2_ParamLimits

0x3d94,	// (0x00043857) list_single_heading_pane_g1_cp2

0x3da0,	// (0x00043863) list_single_heading_pane_g2_cp2

0x3da8,	// (0x0004386b) list_single_heading_pane_t1_cp2_ParamLimits

0x3da8,	// (0x0004386b) list_single_heading_pane_t1_cp2

0x5d2b,	// (0x000457ee) list_single_heading_pane_t2_cp2_ParamLimits

0x5d2b,	// (0x000457ee) list_single_heading_pane_t2_cp2

0x5c6d,	// (0x00045730) list_double_graphic_pane_g1_cp2_ParamLimits

0x5c6d,	// (0x00045730) list_double_graphic_pane_g1_cp2

0x5c79,	// (0x0004573c) list_double_graphic_pane_g2_cp2_ParamLimits

0x5c79,	// (0x0004573c) list_double_graphic_pane_g2_cp2

0x5c88,	// (0x0004574b) list_double_graphic_pane_g3_cp2

0x5c90,	// (0x00045753) list_double_graphic_pane_t1_cp2_ParamLimits

0x5c90,	// (0x00045753) list_double_graphic_pane_t1_cp2

0x5ca6,	// (0x00045769) list_double_graphic_pane_t2_cp2_ParamLimits

0x5ca6,	// (0x00045769) list_double_graphic_pane_t2_cp2

0x3e47,	// (0x0004390a) list_double_number_pane_g1_cp2_ParamLimits

0x3e47,	// (0x0004390a) list_double_number_pane_g1_cp2

0x3e53,	// (0x00043916) list_double_number_pane_g2_cp2

0x5c31,	// (0x000456f4) list_double_number_pane_t1_cp2_ParamLimits

0x5c31,	// (0x000456f4) list_double_number_pane_t1_cp2

0x5c45,	// (0x00045708) list_double_number_pane_t2_cp2_ParamLimits

0x5c45,	// (0x00045708) list_double_number_pane_t2_cp2

0x5c5b,	// (0x0004571e) list_double_number_pane_t3_cp2_ParamLimits

0x5c5b,	// (0x0004571e) list_double_number_pane_t3_cp2

0x5b1a,	// (0x000455dd) list_single_graphic_pane_g1_cp2_ParamLimits

0x5b1a,	// (0x000455dd) list_single_graphic_pane_g1_cp2

0x3ead,	// (0x00043970) list_single_graphic_pane_g2_cp2_ParamLimits

0x3ead,	// (0x00043970) list_single_graphic_pane_g2_cp2

0x3eb9,	// (0x0004397c) list_single_graphic_pane_g3_cp2

0x5af0,	// (0x000455b3) list_single_graphic_pane_t1_cp2_ParamLimits

0x5af0,	// (0x000455b3) list_single_graphic_pane_t1_cp2

0x3ead,	// (0x00043970) list_single_number_pane_g1_cp2_ParamLimits

0x3ead,	// (0x00043970) list_single_number_pane_g1_cp2

0x3eb9,	// (0x0004397c) list_single_number_pane_g2_cp2

0x5af0,	// (0x000455b3) list_single_number_pane_t1_cp2_ParamLimits

0x5af0,	// (0x000455b3) list_single_number_pane_t1_cp2

0x5b06,	// (0x000455c9) list_single_number_pane_t2_cp2_ParamLimits

0x5b06,	// (0x000455c9) list_single_number_pane_t2_cp2

0x3cae,	// (0x00043771) list_double2_pane_g1_cp2_ParamLimits

0x3cae,	// (0x00043771) list_double2_pane_g1_cp2

0x3cbf,	// (0x00043782) list_double2_pane_g2_cp2

0x3e1f,	// (0x000438e2) list_double2_pane_t1_cp2_ParamLimits

0x3e1f,	// (0x000438e2) list_double2_pane_t1_cp2

0x3e35,	// (0x000438f8) list_double2_pane_t2_cp2_ParamLimits

0x3e35,	// (0x000438f8) list_double2_pane_t2_cp2

0x3e47,	// (0x0004390a) list_double_pane_g1_cp2_ParamLimits

0x3e47,	// (0x0004390a) list_double_pane_g1_cp2

0x3e53,	// (0x00043916) list_double_pane_g2_cp2

0x3e5b,	// (0x0004391e) list_double_pane_t1_cp2_ParamLimits

0x3e5b,	// (0x0004391e) list_double_pane_t1_cp2

0x3e71,	// (0x00043934) list_double_pane_t2_cp2_ParamLimits

0x3e71,	// (0x00043934) list_double_pane_t2_cp2

0x3e9d,	// (0x00043960) list_single_pane_cp2_g3

0x3ead,	// (0x00043970) list_single_pane_g1_cp2_ParamLimits

0x3ead,	// (0x00043970) list_single_pane_g1_cp2

0x3eb9,	// (0x0004397c) list_single_pane_g2_cp2

0x3ec1,	// (0x00043984) list_single_pane_t1_cp2_ParamLimits

0x3ec1,	// (0x00043984) list_single_pane_t1_cp2

0x3ed9,	// (0x0004399c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3ed9,	// (0x0004399c) list_single_large_graphic_pane_g1_cp2

0x3ee7,	// (0x000439aa) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3ee7,	// (0x000439aa) list_single_large_graphic_pane_g2_cp2

0x3ef3,	// (0x000439b6) list_single_large_graphic_pane_g3_cp2

0x3efb,	// (0x000439be) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3efb,	// (0x000439be) list_single_large_graphic_pane_g4_cp1

0x3f15,	// (0x000439d8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3f15,	// (0x000439d8) list_single_large_graphic_pane_t1_cp2

0x5aba,	// (0x0004557d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5aba,	// (0x0004557d) list_single_graphic_heading_pane_g1_cp2

0x5a87,	// (0x0004554a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5a87,	// (0x0004554a) list_single_graphic_heading_pane_g4_cp2

0x3eb9,	// (0x0004397c) list_single_graphic_heading_pane_g5_cp2

0x5ac6,	// (0x00045589) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5ac6,	// (0x00045589) list_single_graphic_heading_pane_t1_cp2

0x5adc,	// (0x0004559f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5adc,	// (0x0004559f) list_single_graphic_heading_pane_t2_cp2

0x5a7b,	// (0x0004553e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5a7b,	// (0x0004553e) list_single_2graphic_pane_g1_cp2

0x5a87,	// (0x0004554a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5a87,	// (0x0004554a) list_single_2graphic_pane_g2_cp2

0x3eb9,	// (0x0004397c) list_single_2graphic_pane_g3_cp2

0x5a98,	// (0x0004555b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5a98,	// (0x0004555b) list_single_2graphic_pane_g4_cp2

0x5aa4,	// (0x00045567) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5aa4,	// (0x00045567) list_single_2graphic_pane_t1_cp2

0x29a7,	// (0x0004246a) list_highlight_pane_g10_cp1

0x5653,	// (0x00045116) list_highlight_pane_g1_cp1

0x565b,	// (0x0004511e) list_highlight_pane_g2_cp1

0x5663,	// (0x00045126) list_highlight_pane_g3_cp1

0x566b,	// (0x0004512e) list_highlight_pane_g4_cp1

0x5673,	// (0x00045136) list_highlight_pane_g5_cp1

0x567b,	// (0x0004513e) list_highlight_pane_g6_cp1

0x5683,	// (0x00045146) list_highlight_pane_g7_cp1

0x568b,	// (0x0004514e) list_highlight_pane_g8_cp1

0x5693,	// (0x00045156) list_highlight_pane_g9_cp1

0xd6fb,	// (0x0004d1be) form_field_slider_pane_t3

0xd709,	// (0x0004d1cc) form_field_slider_pane_t4

0x558f,	// (0x00045052) slider_form_pane_ParamLimits

0x558f,	// (0x00045052) slider_form_pane

0x29b1,	// (0x00042474) control_abbreviations

0x29b1,	// (0x00042474) control_conventions

0x29b1,	// (0x00042474) control_definitions

0x29b1,	// (0x00042474) format_table_attribute

0x5d81,	// (0x00045844) bg_popup_preview_window_pane_g9

0x29b1,	// (0x00042474) format_table_data2

0x29b1,	// (0x00042474) format_table_data3

0x29b1,	// (0x00042474) format_table_data_example

0x0008,

0x29b1,	// (0x00042474) intro_purpose

0xf928,	// (0x0004f3eb) bg_popup_preview_window_pane_g

0x29b1,	// (0x00042474) texts_category

0x29b1,	// (0x00042474) texts_graphics

0x3f2b,	// (0x000439ee) text_digital

0x3f3a,	// (0x000439fd) text_primary

0x3f49,	// (0x00043a0c) text_primary_small

0x3f58,	// (0x00043a1b) text_secondary

0x3f67,	// (0x00043a2a) text_title

0x651d,	// (0x00045fe0) bg_passive_tab_pane_g1_cp3_srt

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp3_srt

0x6526,	// (0x00045fe9) bg_passive_tab_pane_g3_cp3_srt

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp3_srt_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp3_srt

0x652f,	// (0x00045ff2) tabs_4_active_pane_srt_g1

0xdb0e,	// (0x0004d5d1) tabs_4_active_pane_srt_t1_ParamLimits

0xdb0e,	// (0x0004d5d1) tabs_4_active_pane_srt_t1

0x651d,	// (0x00045fe0) bg_active_tab_pane_g1_cp3_copy1

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp3_copy1

0x6526,	// (0x00045fe9) bg_active_tab_pane_g3_cp3_copy1

0x2a91,	// (0x00042554) tabs_2_long_active_pane_srt_ParamLimits

0x2a91,	// (0x00042554) tabs_2_long_active_pane_srt

0x2a91,	// (0x00042554) tabs_2_long_passive_pane_srt_ParamLimits

0x2a91,	// (0x00042554) tabs_2_long_passive_pane_srt

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp4_srt

0x61d1,	// (0x00045c94) bg_passive_tab_pane_g1_cp4_srt

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp4_srt

0x61da,	// (0x00045c9d) bg_passive_tab_pane_g3_cp4_srt

0x2a91,	// (0x00042554) bg_active_tab_pane_cp4_srt_ParamLimits

0x2a91,	// (0x00042554) bg_active_tab_pane_cp4_srt

0xd904,	// (0x0004d3c7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd904,	// (0x0004d3c7) tabs_2_long_active_pane_srt_t1

0x61d1,	// (0x00045c94) bg_active_tab_pane_g1_cp4_srt

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp4_srt

0x61da,	// (0x00045c9d) bg_active_tab_pane_g3_cp4_srt

0x2d0d,	// (0x000427d0) tabs_3_long_active_pane_srt_ParamLimits

0x2d0d,	// (0x000427d0) tabs_3_long_active_pane_srt

0x2d0d,	// (0x000427d0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2d0d,	// (0x000427d0) tabs_3_long_passive_pane_cp_srt

0x2d0d,	// (0x000427d0) tabs_3_long_passive_pane_srt_ParamLimits

0x2d0d,	// (0x000427d0) tabs_3_long_passive_pane_srt

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp5_srt

0x3c49,	// (0x0004370c) bg_passive_tab_pane_g1_cp5_srt

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp5_srt

0x3c52,	// (0x00043715) bg_passive_tab_pane_g3_cp5_srt

0x2a91,	// (0x00042554) bg_active_tab_pane_cp5_srt_ParamLimits

0x2a91,	// (0x00042554) bg_active_tab_pane_cp5_srt

0xd8ee,	// (0x0004d3b1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd8ee,	// (0x0004d3b1) tabs_3_long_active_pane_srt_t1

0x3c49,	// (0x0004370c) bg_active_tab_pane_g1_cp5_srt

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp5_srt

0x3c52,	// (0x00043715) bg_active_tab_pane_g3_cp5_srt

0x61b1,	// (0x00045c74) navi_text_pane_srt_t1

0x61a9,	// (0x00045c6c) navi_icon_pane_srt_g1

0x413e,	// (0x00043c01) midp_editing_number_pane_srt

0x3f76,	// (0x00043a39) midp_ticker_pane_srt

0x4146,	// (0x00043c09) midp_ticker_pane_srt_g1

0x414e,	// (0x00043c11) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004f27a) midp_ticker_pane_srt_g

0x4156,	// (0x00043c19) midp_ticker_pane_srt_t1

0x619a,	// (0x00045c5d) midp_editing_number_pane_t1_copy1

0xca29,	// (0x0004c4ec) listscroll_midp_pane

0xca29,	// (0x0004c4ec) midp_form_pane

0x3fec,	// (0x00043aaf) midp_info_popup_window_ParamLimits

0x3fec,	// (0x00043aaf) midp_info_popup_window

0x33d0,	// (0x00042e93) bg_popup_sub_pane_cp50_ParamLimits

0x33d0,	// (0x00042e93) bg_popup_sub_pane_cp50

0x52ba,	// (0x00044d7d) listscroll_midp_info_pane_ParamLimits

0x52ba,	// (0x00044d7d) listscroll_midp_info_pane

0x52a2,	// (0x00044d65) listscroll_form_midp_pane_ParamLimits

0x52a2,	// (0x00044d65) listscroll_form_midp_pane

0x52ae,	// (0x00044d71) scroll_bar_cp050

0xd6ef,	// (0x0004d1b2) list_midp_pane

0x6f76,	// (0x00046a39) signal_pane_g2_cp

0x51bc,	// (0x00044c7f) listscroll_midp_info_pane_t1_ParamLimits

0x51bc,	// (0x00044c7f) listscroll_midp_info_pane_t1

0x51d4,	// (0x00044c97) listscroll_midp_info_pane_t2_ParamLimits

0x51d4,	// (0x00044c97) listscroll_midp_info_pane_t2

0x5212,	// (0x00044cd5) listscroll_midp_info_pane_t3_ParamLimits

0x5212,	// (0x00044cd5) listscroll_midp_info_pane_t3

0x524c,	// (0x00044d0f) listscroll_midp_info_pane_t4_ParamLimits

0x524c,	// (0x00044d0f) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0004f326) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0004f326) listscroll_midp_info_pane_t

0x349a,	// (0x00042f5d) scroll_pane_cp21

0x5156,	// (0x00044c19) form_midp_field_choice_group_pane

0x515f,	// (0x00044c22) form_midp_field_text_pane

0x51a2,	// (0x00044c65) form_midp_field_time_pane

0x51aa,	// (0x00044c6d) form_midp_gauge_slider_pane

0x51b3,	// (0x00044c76) form_midp_gauge_wait_pane

0x29b1,	// (0x00042474) form_midp_image_pane

0xb769,	// (0x0004b22c) list_single_midp_pane_ParamLimits

0xb769,	// (0x0004b22c) list_single_midp_pane

0xd6c7,	// (0x0004d18a) form_midp_field_text_pane_t1

0x4f2e,	// (0x000449f1) input_focus_pane_cp050

0x5145,	// (0x00044c08) list_midp_form_text_pane

0x50e9,	// (0x00044bac) form_midp_field_choice_group_pane_t1

0x50f7,	// (0x00044bba) input_focus_pane_cp051

0x510b,	// (0x00044bce) list_midp_choice_pane

0x29b1,	// (0x00042474) status_idle_pane

0x50cd,	// (0x00044b90) form_midp_field_time_pane_t1

0x29a7,	// (0x0004246a) wait_anim_pane_g2_copy1

0x50db,	// (0x00044b9e) form_midp_field_time_pane_t2

0x0001,

0x409c,	// (0x00043b5f) aid_navinavi_width_2_pane

0xf85e,	// (0x0004f321) form_midp_field_time_pane_t

0x29b1,	// (0x00042474) input_focus_pane_cp052

0x29b1,	// (0x00042474) bg_input_focus_pane_cp040

0x508d,	// (0x00044b50) form_midp_gauge_slider_pane_t1

0x509b,	// (0x00044b5e) form_midp_gauge_slider_pane_t2

0xd6ab,	// (0x0004d16e) form_midp_gauge_slider_pane_t3

0xd6b9,	// (0x0004d17c) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0004f318) form_midp_gauge_slider_pane_t

0x50c5,	// (0x00044b88) form_midp_slider_pane

0x2a91,	// (0x00042554) bg_input_focus_pane_cp041_ParamLimits

0x2a91,	// (0x00042554) bg_input_focus_pane_cp041

0x505a,	// (0x00044b1d) form_midp_gauge_wait_pane_t1_ParamLimits

0x505a,	// (0x00044b1d) form_midp_gauge_wait_pane_t1

0x506c,	// (0x00044b2f) form_midp_gauge_wait_pane_t2_ParamLimits

0x506c,	// (0x00044b2f) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0004f313) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0004f313) form_midp_gauge_wait_pane_t

0x507e,	// (0x00044b41) form_midp_wait_pane_ParamLimits

0x507e,	// (0x00044b41) form_midp_wait_pane

0x5022,	// (0x00044ae5) form_midp_image_pane_g1

0x502b,	// (0x00044aee) form_midp_image_pane_t1

0x503a,	// (0x00044afd) form_midp_image_pane_t2

0x5049,	// (0x00044b0c) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0004f30c) form_midp_image_pane_t

0x5019,	// (0x00044adc) list_single_midp_pane_g1

0x0770,	// (0x00040233) list_single_midp_pane_t1

0xd694,	// (0x0004d157) list_midp_form_item_pane_ParamLimits

0xd694,	// (0x0004d157) list_midp_form_item_pane

0x4044,	// (0x00043b07) list_midp_form_item_pane_t1

0x4053,	// (0x00043b16) midp_ticker_pane_g1

0x405f,	// (0x00043b22) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004f260) midp_ticker_pane_g

0xcad1,	// (0x0004c594) midp_ticker_pane_t1

0xda93,	// (0x0004d556) midp_editing_number_pane_t1

0x63f7,	// (0x00045eba) midp_editing_number_pane

0x6406,	// (0x00045ec9) midp_ticker_pane

0x618a,	// (0x00045c4d) ai_message_heading_pane

0x29b1,	// (0x00042474) bg_popup_window_pane_cp14

0x6192,	// (0x00045c55) listscroll_ai_message_pane

0x6110,	// (0x00045bd3) ai_message_heading_pane_g1_ParamLimits

0x6110,	// (0x00045bd3) ai_message_heading_pane_g1

0x611c,	// (0x00045bdf) ai_message_heading_pane_g2_ParamLimits

0x611c,	// (0x00045bdf) ai_message_heading_pane_g2

0x612a,	// (0x00045bed) ai_message_heading_pane_g3_ParamLimits

0x612a,	// (0x00045bed) ai_message_heading_pane_g3

0x6136,	// (0x00045bf9) ai_message_heading_pane_g4_ParamLimits

0x6136,	// (0x00045bf9) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0004f44d) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0004f44d) ai_message_heading_pane_g

0x6142,	// (0x00045c05) ai_message_heading_pane_t1_ParamLimits

0x6142,	// (0x00045c05) ai_message_heading_pane_t1

0x615c,	// (0x00045c1f) ai_message_heading_pane_t2_ParamLimits

0x615c,	// (0x00045c1f) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0004f456) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0004f456) ai_message_heading_pane_t

0x6170,	// (0x00045c33) bg_popup_heading_pane_cp1_ParamLimits

0x6170,	// (0x00045c33) bg_popup_heading_pane_cp1

0x60fe,	// (0x00045bc1) list_ai_message_pane_ParamLimits

0x60fe,	// (0x00045bc1) list_ai_message_pane

0x349a,	// (0x00042f5d) scroll_pane_cp10

0x609a,	// (0x00045b5d) list_ai_message_pane_g1

0x60a2,	// (0x00045b65) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0004f42a) list_ai_message_pane_g

0x60aa,	// (0x00045b6d) list_ai_message_pane_t1_ParamLimits

0x60aa,	// (0x00045b6d) list_ai_message_pane_t1

0x60bf,	// (0x00045b82) list_ai_message_pane_t2_ParamLimits

0x60bf,	// (0x00045b82) list_ai_message_pane_t2

0x60d4,	// (0x00045b97) list_ai_message_pane_t3_ParamLimits

0x60d4,	// (0x00045b97) list_ai_message_pane_t3

0x60e9,	// (0x00045bac) list_ai_message_pane_t4_ParamLimits

0x60e9,	// (0x00045bac) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0004f42f) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0004f42f) list_ai_message_pane_t

0xd8d4,	// (0x0004d397) cell_ai_soft_ind_pane_ParamLimits

0xd8d4,	// (0x0004d397) cell_ai_soft_ind_pane

0x407d,	// (0x00043b40) cell_ai_soft_ind_pane_g1_ParamLimits

0x407d,	// (0x00043b40) cell_ai_soft_ind_pane_g1

0x29b1,	// (0x00042474) grid_highlight_cp1

0x408a,	// (0x00043b4d) text_secondary_cp56_ParamLimits

0x408a,	// (0x00043b4d) text_secondary_cp56

0x6058,	// (0x00045b1b) example_general_pane_ParamLimits

0x6058,	// (0x00045b1b) example_general_pane

0x6064,	// (0x00045b27) example_parent_pane_g1_ParamLimits

0x6064,	// (0x00045b27) example_parent_pane_g1

0x6070,	// (0x00045b33) example_parent_pane_t1_ParamLimits

0x6070,	// (0x00045b33) example_parent_pane_t1

0xcf27,	// (0x0004c9ea) popup_preview_text_window_ParamLimits

0xcf27,	// (0x0004c9ea) popup_preview_text_window

0x3ea5,	// (0x00043968) list_single_pane_cp2_g4

0x2dc3,	// (0x00042886) bg_popup_preview_window_pane_ParamLimits

0x2dc3,	// (0x00042886) bg_popup_preview_window_pane

0x5d8b,	// (0x0004584e) popup_preview_text_window_t1_ParamLimits

0x5d8b,	// (0x0004584e) popup_preview_text_window_t1

0x5da9,	// (0x0004586c) popup_preview_text_window_t2_ParamLimits

0x5da9,	// (0x0004586c) popup_preview_text_window_t2

0x5df2,	// (0x000458b5) popup_preview_text_window_t3_ParamLimits

0x5df2,	// (0x000458b5) popup_preview_text_window_t3

0x5e37,	// (0x000458fa) popup_preview_text_window_t4_ParamLimits

0x5e37,	// (0x000458fa) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0004f3fe) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0004f3fe) popup_preview_text_window_t

0x5eb5,	// (0x00045978) scroll_pane_cp11

0x4e3c,	// (0x000448ff) bg_popup_preview_window_pane_g1

0x5d3f,	// (0x00045802) bg_popup_preview_window_pane_g2

0x5d49,	// (0x0004580c) bg_popup_preview_window_pane_g3

0x5d53,	// (0x00045816) bg_popup_preview_window_pane_g4

0x5d5d,	// (0x00045820) bg_popup_preview_window_pane_g5

0x5d67,	// (0x0004582a) bg_popup_preview_window_pane_g6

0x5d6f,	// (0x00045832) bg_popup_preview_window_pane_g7

0x5d77,	// (0x0004583a) bg_popup_preview_window_pane_g8

0x0c98,	// (0x0004075b) aid_popup_width_pane

0xce97,	// (0x0004c95a) popup_midp_note_alarm_window_ParamLimits

0xce97,	// (0x0004c95a) popup_midp_note_alarm_window

0x330c,	// (0x00042dcf) data_form_pane_ParamLimits

0xb5ec,	// (0x0004b0af) form_field_data_pane_g1

0xb5f6,	// (0x0004b0b9) form_field_data_pane_t1_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_ParamLimits

0x3326,	// (0x00042de9) data_form_wide_pane_ParamLimits

0x04d2,	// (0x0003ff95) form_field_data_wide_pane_g1

0x04de,	// (0x0003ffa1) form_field_data_wide_pane_t1_ParamLimits

0x3089,	// (0x00042b4c) input_focus_pane_cp6_ParamLimits

0xc7c3,	// (0x0004c286) input_popup_find_pane_g1_ParamLimits

0xc7c3,	// (0x0004c286) input_popup_find_pane_g1

0x12bc,	// (0x00040d7f) aid_navi_side_left_pane

0x12d1,	// (0x00040d94) aid_navi_side_right_pane

0x574e,	// (0x00045211) bg_popup_window_pane_cp30_ParamLimits

0x574e,	// (0x00045211) bg_popup_window_pane_cp30

0x57c8,	// (0x0004528b) popup_midp_note_alarm_window_g1_ParamLimits

0x57c8,	// (0x0004528b) popup_midp_note_alarm_window_g1

0x57f8,	// (0x000452bb) popup_midp_note_alarm_window_t1_ParamLimits

0x57f8,	// (0x000452bb) popup_midp_note_alarm_window_t1

0x5899,	// (0x0004535c) popup_midp_note_alarm_window_t2_ParamLimits

0x5899,	// (0x0004535c) popup_midp_note_alarm_window_t2

0x5947,	// (0x0004540a) popup_midp_note_alarm_window_t3_ParamLimits

0x5947,	// (0x0004540a) popup_midp_note_alarm_window_t3

0x5979,	// (0x0004543c) popup_midp_note_alarm_window_t4_ParamLimits

0x5979,	// (0x0004543c) popup_midp_note_alarm_window_t4

0x599f,	// (0x00045462) popup_midp_note_alarm_window_t5_ParamLimits

0x599f,	// (0x00045462) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0004f39b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0004f39b) popup_midp_note_alarm_window_t

0x5a4b,	// (0x0004550e) wait_bar_pane_cp1_ParamLimits

0x5a4b,	// (0x0004550e) wait_bar_pane_cp1

0x29b1,	// (0x00042474) wait_anim_pane_copy1

0x29b1,	// (0x00042474) wait_border_pane_copy1

0x5433,	// (0x00044ef6) wait_border_pane_g1_copy1

0x04f8,	// (0x0003ffbb) form_field_popup_pane_g1

0xb610,	// (0x0004b0d3) form_field_popup_pane_t1_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_cp7_ParamLimits

0x3352,	// (0x00042e15) list_form_pane_ParamLimits

0x051a,	// (0x0003ffdd) form_field_popup_wide_pane_g1

0x0522,	// (0x0003ffe5) form_field_popup_wide_pane_t1_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_cp8_ParamLimits

0x335e,	// (0x00042e21) list_form_wide_pane_ParamLimits

0x65aa,	// (0x0004606d) aid_size_cell_graphic_pane

0xb68f,	// (0x0004b152) data_form_pane_t1_ParamLimits

0xb797,	// (0x0004b25a) data_form_wide_pane_t1_ParamLimits

0xd324,	// (0x0004cde7) bg_status_flat_pane

0xbb37,	// (0x0004b5fa) title_pane_t1_ParamLimits

0x2a59,	// (0x0004251c) title_pane_t2_ParamLimits

0x2a7f,	// (0x00042542) title_pane_t3_ParamLimits

0xf59b,	// (0x0004f05e) title_pane_t_ParamLimits

0xc8ca,	// (0x0004c38d) level_1_signal_ParamLimits

0xc8dc,	// (0x0004c39f) level_2_signal_ParamLimits

0xc8ef,	// (0x0004c3b2) level_3_signal_ParamLimits

0xc902,	// (0x0004c3c5) level_4_signal_ParamLimits

0xc915,	// (0x0004c3d8) level_5_signal_ParamLimits

0xc928,	// (0x0004c3eb) level_6_signal_ParamLimits

0xc93b,	// (0x0004c3fe) level_7_signal_ParamLimits

0xc8ca,	// (0x0004c38d) level_1_battery_ParamLimits

0xc8dc,	// (0x0004c39f) level_2_battery_ParamLimits

0xc8ef,	// (0x0004c3b2) level_3_battery_ParamLimits

0xc902,	// (0x0004c3c5) level_4_battery_ParamLimits

0xc915,	// (0x0004c3d8) level_5_battery_ParamLimits

0xc928,	// (0x0004c3eb) level_6_battery_ParamLimits

0xc93b,	// (0x0004c3fe) level_7_battery_ParamLimits

0x5653,	// (0x00045116) bg_status_flat_pane_g1

0x565b,	// (0x0004511e) bg_status_flat_pane_g2

0x5663,	// (0x00045126) bg_status_flat_pane_g3

0x566b,	// (0x0004512e) bg_status_flat_pane_g4

0x5673,	// (0x00045136) bg_status_flat_pane_g5

0x567b,	// (0x0004513e) bg_status_flat_pane_g6

0x5683,	// (0x00045146) bg_status_flat_pane_g7

0xbbcb,	// (0x0004b68e) tabs_3_active_pane_t1_ParamLimits

0xbbcb,	// (0x0004b68e) tabs_3_passive_pane_t1_ParamLimits

0xbbe5,	// (0x0004b6a8) tabs_4_active_pane_t1_ParamLimits

0xbbe5,	// (0x0004b6a8) tabs_4_1_passive_pane_t1_ParamLimits

0xc7d9,	// (0x0004c29c) tabs_2_active_pane_t1_ParamLimits

0xc7d9,	// (0x0004c29c) tabs_2_passive_pane_t1_ParamLimits

0x2a91,	// (0x00042554) bg_active_tab_pane_cp4_ParamLimits

0xc7eb,	// (0x0004c2ae) tabs_2_long_active_pane_t1_ParamLimits

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp4_ParamLimits

0x1840,	// (0x00041303) list_single_midp_graphic_pane_t1_ParamLimits

0x2a91,	// (0x00042554) bg_active_tab_pane_cp5_ParamLimits

0xc7fe,	// (0x0004c2c1) tabs_3_long_active_pane_t1_ParamLimits

0x4300,	// (0x00043dc3) bg_passive_tab_pane_cp5_ParamLimits

0x1840,	// (0x00041303) list_single_midp_graphic_pane_t1

0xd324,	// (0x0004cde7) bg_status_flat_pane_ParamLimits

0x4ab5,	// (0x00044578) indicator_pane_cp2_ParamLimits

0x4ab5,	// (0x00044578) indicator_pane_cp2

0xd4b9,	// (0x0004cf7c) navi_pane_srt_ParamLimits

0xd4b9,	// (0x0004cf7c) navi_pane_srt

0x4c1b,	// (0x000446de) popup_clock_digital_analogue_window_cp1

0x2b71,	// (0x00042634) indicator_pane_t1

0x3f76,	// (0x00043a39) copy_highlight_pane

0x3f76,	// (0x00043a39) cursor_graphics_pane

0x3f76,	// (0x00043a39) graphic_within_text_pane

0x3f76,	// (0x00043a39) link_highlight_pane

0x5e78,	// (0x0004593b) popup_preview_text_window_t5_ParamLimits

0x5e78,	// (0x0004593b) popup_preview_text_window_t5

0x40a6,	// (0x00043b69) cursor_digital_pane

0x40a6,	// (0x00043b69) cursor_primary_pane

0x40b7,	// (0x00043b7a) cursor_primary_small_pane

0x40bf,	// (0x00043b82) cursor_secondary_pane

0x40c7,	// (0x00043b8a) cursor_title_pane

0x40a6,	// (0x00043b69) link_highlight_digital_pane

0x40ae,	// (0x00043b71) link_highlight_primary_pane

0x40b7,	// (0x00043b7a) link_highlight_primary_small_pane

0x40bf,	// (0x00043b82) link_highlight_secondary_pane

0x40c7,	// (0x00043b8a) link_highlight_title_pane

0x40a6,	// (0x00043b69) copy_highlight_digital_pane

0x40a6,	// (0x00043b69) copy_highlight_primary_pane

0x40b7,	// (0x00043b7a) copy_highlight_primary_small_pane

0x40bf,	// (0x00043b82) copy_highlight_secondary_pane

0x40c7,	// (0x00043b8a) copy_highlight_title_pane

0x40bf,	// (0x00043b82) graphic_text_digital_pane

0x56f1,	// (0x000451b4) graphic_text_primary_pane

0x56fa,	// (0x000451bd) graphic_text_primary_small_pane

0x40b7,	// (0x00043b7a) graphic_text_secondary_pane

0x40a6,	// (0x00043b69) graphic_text_title_pane

0xcae3,	// (0x0004c5a6) cursor_primary_pane_g1

0x56e3,	// (0x000451a6) cursor_text_primary_t1

0xd72b,	// (0x0004d1ee) cursor_primary_small_pane_g1

0x56d5,	// (0x00045198) cursor_text_primary_small_t1

0xd721,	// (0x0004d1e4) cursor_primary_small_pane_g1_copy1

0x56bd,	// (0x00045180) cursor_text_primary_small_t1_copy1

0x569b,	// (0x0004515e) cursor_text_title_t1

0xd717,	// (0x0004d1da) cursor_title_pane_g1

0xcae3,	// (0x0004c5a6) cursor_digital_pane_g1

0x40d9,	// (0x00043b9c) cursor_text_digital_t1

0x40e7,	// (0x00043baa) link_highlight_primary_pane_g1

0x5644,	// (0x00045107) link_highlight_primary_pane_t1

0x40e7,	// (0x00043baa) link_highlight_primary_small_pane_g1

0x40ef,	// (0x00043bb2) link_highlight_primary_small_pane_t1

0x40fe,	// (0x00043bc1) link_highlight_secondary_pane_g1

0x4106,	// (0x00043bc9) link_highlight_secondary_pane_t1

0x55b8,	// (0x0004507b) link_highlight_title_pane_g1

0x55c0,	// (0x00045083) link_highlight_title_pane_t1

0x55a1,	// (0x00045064) link_highlight_digital_pane_g1

0x55a9,	// (0x0004506c) link_highlight_digital_pane_t1

0x5469,	// (0x00044f2c) copy_highlight_primary_pane_g1

0x5480,	// (0x00044f43) copy_highlight_primary_pane_t1

0x5469,	// (0x00044f2c) copy_highlight_primary_small_pane_g1

0x5471,	// (0x00044f34) copy_highlight_primary_small_pane_t1

0x4115,	// (0x00043bd8) copy_highlight_secondary_pane_g1

0x411d,	// (0x00043be0) copy_highlight_secondary_pane_t1

0x5452,	// (0x00044f15) copy_highlight_title_pane_g1

0x545a,	// (0x00044f1d) copy_highlight_title_pane_t1

0x5469,	// (0x00044f2c) copy_highlight_digital_pane_g1

0x677a,	// (0x0004623d) copy_highlight_digital_pane_t1

0x66ce,	// (0x00046191) graphic_text_primary_pane_g1

0x675e,	// (0x00046221) graphic_text_primary_pane_t1

0x676c,	// (0x0004622f) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0004f4ca) graphic_text_primary_pane_t

0x673a,	// (0x000461fd) graphic_text_primary_small_pane_g1

0x6742,	// (0x00046205) graphic_text_primary_small_pane_t1

0x6750,	// (0x00046213) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0004f4c5) graphic_text_primary_small_pane_t

0x6716,	// (0x000461d9) graphic_text_secondary_pane_g1

0x671e,	// (0x000461e1) graphic_text_secondary_pane_t1

0x672c,	// (0x000461ef) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0004f4c0) graphic_text_secondary_pane_t

0x66f2,	// (0x000461b5) graphic_text_title_pane_g1

0x66fa,	// (0x000461bd) graphic_text_title_pane_t1

0x6708,	// (0x000461cb) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0004f4bb) graphic_text_title_pane_t

0x66ce,	// (0x00046191) graphic_text_digital_pane_g1

0x66d6,	// (0x00046199) graphic_text_digital_pane_t1

0x66e4,	// (0x000461a7) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0004f4b6) graphic_text_digital_pane_t

0x2a91,	// (0x00042554) navi_icon_pane_srt_ParamLimits

0x2a91,	// (0x00042554) navi_icon_pane_srt

0x29b1,	// (0x00042474) navi_midp_pane_srt

0x29b1,	// (0x00042474) navi_navi_pane_srt

0x2a91,	// (0x00042554) navi_text_pane_srt_ParamLimits

0x2a91,	// (0x00042554) navi_text_pane_srt

0x6699,	// (0x0004615c) navi_navi_icon_text_pane_srt

0x66a1,	// (0x00046164) navi_navi_pane_srt_g1_ParamLimits

0x66a1,	// (0x00046164) navi_navi_pane_srt_g1

0x66b3,	// (0x00046176) navi_navi_pane_srt_g2_ParamLimits

0x66b3,	// (0x00046176) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0004f4b1) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0004f4b1) navi_navi_pane_srt_g

0x66c5,	// (0x00046188) navi_navi_tabs_pane_srt

0x6699,	// (0x0004615c) navi_navi_text_pane_srt

0x6699,	// (0x0004615c) navi_navi_volume_pane_srt

0x668a,	// (0x0004614d) navi_navi_text_pane_srt_t1

0x1bc6,	// (0x00041689) navi_navi_volume_pane_srt_g1

0x1bce,	// (0x00041691) volume_small_pane_srt_ParamLimits

0x1bce,	// (0x00041691) volume_small_pane_srt

0x15c1,	// (0x00041084) volume_small_pane_srt_g1_ParamLimits

0x15c1,	// (0x00041084) volume_small_pane_srt_g1

0x15d1,	// (0x00041094) volume_small_pane_srt_g2_ParamLimits

0x15d1,	// (0x00041094) volume_small_pane_srt_g2

0x15e2,	// (0x000410a5) volume_small_pane_srt_g3_ParamLimits

0x15e2,	// (0x000410a5) volume_small_pane_srt_g3

0x15f3,	// (0x000410b6) volume_small_pane_srt_g4_ParamLimits

0x15f3,	// (0x000410b6) volume_small_pane_srt_g4

0x1604,	// (0x000410c7) volume_small_pane_srt_g5_ParamLimits

0x1604,	// (0x000410c7) volume_small_pane_srt_g5

0x1615,	// (0x000410d8) volume_small_pane_srt_g6_ParamLimits

0x1615,	// (0x000410d8) volume_small_pane_srt_g6

0x1626,	// (0x000410e9) volume_small_pane_srt_g7_ParamLimits

0x1626,	// (0x000410e9) volume_small_pane_srt_g7

0x1637,	// (0x000410fa) volume_small_pane_srt_g8_ParamLimits

0x1637,	// (0x000410fa) volume_small_pane_srt_g8

0x1648,	// (0x0004110b) volume_small_pane_srt_g9_ParamLimits

0x1648,	// (0x0004110b) volume_small_pane_srt_g9

0x1659,	// (0x0004111c) volume_small_pane_srt_g10_ParamLimits

0x1659,	// (0x0004111c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004f265) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004f265) volume_small_pane_srt_g

0x2e78,	// (0x0004293b) query_popup_data_pane_cp2

0x6670,	// (0x00046133) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6670,	// (0x00046133) navi_navi_icon_text_pane_srt_t1

0x56f1,	// (0x000451b4) navi_tabs_2_long_pane_srt

0x56f1,	// (0x000451b4) navi_tabs_2_pane_srt

0x56f1,	// (0x000451b4) navi_tabs_3_long_pane_srt

0x56f1,	// (0x000451b4) navi_tabs_3_pane_srt

0x56f1,	// (0x000451b4) navi_tabs_4_pane_srt

0x1ba6,	// (0x00041669) tabs_2_active_pane_srt_ParamLimits

0x1ba6,	// (0x00041669) tabs_2_active_pane_srt

0x1bb6,	// (0x00041679) tabs_2_passive_pane_srt_ParamLimits

0x1bb6,	// (0x00041679) tabs_2_passive_pane_srt

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp1_srt

0x663c,	// (0x000460ff) bg_passive_tab_pane_g1_cp1_srt

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp1_srt

0x6645,	// (0x00046108) bg_passive_tab_pane_g3_cp1_srt

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp1_srt_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp1_srt

0x664e,	// (0x00046111) tabs_2_active_pane_srt_g1

0xdb8e,	// (0x0004d651) tabs_2_active_pane_srt_t1_ParamLimits

0xdb8e,	// (0x0004d651) tabs_2_active_pane_srt_t1

0x663c,	// (0x000460ff) bg_active_tab_pane_g1_cp1_srt

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp1_srt

0x6645,	// (0x00046108) bg_active_tab_pane_g3_cp1_srt

0x1b73,	// (0x00041636) tabs_3_active_pane_srt_ParamLimits

0x1b73,	// (0x00041636) tabs_3_active_pane_srt

0x1b84,	// (0x00041647) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b84,	// (0x00041647) tabs_3_passive_pane_cp_srt

0x1b95,	// (0x00041658) tabs_3_passive_pane_srt_ParamLimits

0x1b95,	// (0x00041658) tabs_3_passive_pane_srt

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4f2e,	// (0x000449f1) bg_passive_tab_pane_cp2_srt

0x412c,	// (0x00043bef) bg_passive_tab_pane_g1_cp2_srt

0x3bbf,	// (0x00043682) bg_passive_tab_pane_g2_cp2_srt

0x4135,	// (0x00043bf8) bg_passive_tab_pane_g3_cp2_srt

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp2_srt_ParamLimits

0x2d0d,	// (0x000427d0) bg_active_tab_pane_cp2_srt

0x6622,	// (0x000460e5) tabs_3_active_pane_srt_g1

0xdb78,	// (0x0004d63b) tabs_3_active_pane_srt_t1_ParamLimits

0xdb78,	// (0x0004d63b) tabs_3_active_pane_srt_t1

0x412c,	// (0x00043bef) bg_active_tab_pane_g1_cp2_srt

0x3bbf,	// (0x00043682) bg_active_tab_pane_g2_cp2_srt

0x4135,	// (0x00043bf8) bg_active_tab_pane_g3_cp2_srt

0x1b2b,	// (0x000415ee) tabs_4_active_pane_srt_ParamLimits

0x1b2b,	// (0x000415ee) tabs_4_active_pane_srt

0x1b3d,	// (0x00041600) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b3d,	// (0x00041600) tabs_4_passive_pane_cp2_srt

0x428a,	// (0x00043d4d) aid_size_cell_toolbar

0x6244,	// (0x00045d07) main_idle_act_pane_ParamLimits

0x44c5,	// (0x00043f88) popup_large_graphic_colour_window_ParamLimits

0xd1ed,	// (0x0004ccb0) popup_toolbar_window_ParamLimits

0xd1ed,	// (0x0004ccb0) popup_toolbar_window

0x643c,	// (0x00045eff) list_single_graphic_2heading_pane_ParamLimits

0x643c,	// (0x00045eff) list_single_graphic_2heading_pane

0x36cb,	// (0x0004318e) aid_size_cell_apps_grid_lsc_pane

0x36dd,	// (0x000431a0) aid_size_cell_apps_grid_prt_pane

0x4300,	// (0x00043dc3) bg_wml_button_pane_cp1_ParamLimits

0x4300,	// (0x00043dc3) bg_wml_button_pane_cp1

0xd6c7,	// (0x0004d18a) form_midp_field_text_pane_t1_ParamLimits

0x4f2e,	// (0x000449f1) input_focus_pane_cp050_ParamLimits

0x5145,	// (0x00044c08) list_midp_form_text_pane_ParamLimits

0x50f7,	// (0x00044bba) input_focus_pane_cp051_ParamLimits

0x510b,	// (0x00044bce) list_midp_choice_pane_ParamLimits

0xd67e,	// (0x0004d141) list_single_2graphic_pane_cp3_ParamLimits

0xd67e,	// (0x0004d141) list_single_2graphic_pane_cp3

0x729f,	// (0x00046d62) list_single_midp_graphic_pane_ParamLimits

0x729f,	// (0x00046d62) list_single_midp_graphic_pane

0x06b8,	// (0x0004017b) list_single_graphic_2heading_pane_g1_ParamLimits

0x06b8,	// (0x0004017b) list_single_graphic_2heading_pane_g1

0x06c4,	// (0x00040187) list_single_graphic_2heading_pane_g4_ParamLimits

0x06c4,	// (0x00040187) list_single_graphic_2heading_pane_g4

0x06d0,	// (0x00040193) list_single_graphic_2heading_pane_g5_ParamLimits

0x06d0,	// (0x00040193) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004f2b8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004f2b8) list_single_graphic_2heading_pane_g

0x06dc,	// (0x0004019f) list_single_graphic_2heading_pane_t1_ParamLimits

0x06dc,	// (0x0004019f) list_single_graphic_2heading_pane_t1

0x06f0,	// (0x000401b3) list_single_graphic_2heading_pane_t2_ParamLimits

0x06f0,	// (0x000401b3) list_single_graphic_2heading_pane_t2

0x070c,	// (0x000401cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x070c,	// (0x000401cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004f2bf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004f2bf) list_single_graphic_2heading_pane_t

0x4d7a,	// (0x0004483d) bg_popup_sub_pane_cp2

0x4da4,	// (0x00044867) grid_toobar_pane

0x17b8,	// (0x0004127b) cell_toolbar_pane_ParamLimits

0x17b8,	// (0x0004127b) cell_toolbar_pane

0x4de0,	// (0x000448a3) cell_toolbar_pane_g1_ParamLimits

0x4de0,	// (0x000448a3) cell_toolbar_pane_g1

0x4df4,	// (0x000448b7) cell_toolbar_pane_g2_ParamLimits

0x4df4,	// (0x000448b7) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004f2cd) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004f2cd) cell_toolbar_pane_g

0x4e16,	// (0x000448d9) grid_highlight_pane_cp2_ParamLimits

0x4e16,	// (0x000448d9) grid_highlight_pane_cp2

0x4e30,	// (0x000448f3) toolbar_button_pane

0x4e3c,	// (0x000448ff) toolbar_button_pane_g1

0x4e44,	// (0x00044907) toolbar_button_pane_g2

0x4e4c,	// (0x0004490f) toolbar_button_pane_g3

0x4e54,	// (0x00044917) toolbar_button_pane_g4

0x4e5c,	// (0x0004491f) toolbar_button_pane_g5

0x4e64,	// (0x00044927) toolbar_button_pane_g6

0x4e6c,	// (0x0004492f) toolbar_button_pane_g7

0x4e74,	// (0x00044937) toolbar_button_pane_g8

0x4e7c,	// (0x0004493f) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004f2d2) toolbar_button_pane_g

0x17fc,	// (0x000412bf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17fc,	// (0x000412bf) list_single_2graphic_pane_g1_cp3

0xbf6a,	// (0x0004ba2d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf6a,	// (0x0004ba2d) list_single_2graphic_pane_g2_cp3

0x3da0,	// (0x00043863) list_single_2graphic_pane_g3_cp3

0x1819,	// (0x000412dc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1819,	// (0x000412dc) list_single_2graphic_pane_g4_cp3

0x1825,	// (0x000412e8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1825,	// (0x000412e8) list_single_2graphic_pane_t1_cp3

0x3d94,	// (0x00043857) list_single_midp_graphic_pane_g2_ParamLimits

0x3d94,	// (0x00043857) list_single_midp_graphic_pane_g2

0x06a0,	// (0x00040163) aid_zoom_text_primary

0x06a8,	// (0x0004016b) aid_zoom_text_secondary

0x41e9,	// (0x00043cac) status_small_pane_g7_ParamLimits

0x41e9,	// (0x00043cac) status_small_pane_g7

0x420c,	// (0x00043ccf) status_small_pane_t1_ParamLimits

0xbb13,	// (0x0004b5d6) title_pane_g2

0x0003,

0xf592,	// (0x0004f055) title_pane_g

0xc657,	// (0x0004c11a) aid_size_cell_colour_1_pane_ParamLimits

0xc657,	// (0x0004c11a) aid_size_cell_colour_1_pane

0xc66b,	// (0x0004c12e) aid_size_cell_colour_2_pane_ParamLimits

0xc66b,	// (0x0004c12e) aid_size_cell_colour_2_pane

0xc67f,	// (0x0004c142) aid_size_cell_colour_3_pane_ParamLimits

0xc67f,	// (0x0004c142) aid_size_cell_colour_3_pane

0xc693,	// (0x0004c156) aid_size_cell_colour_4_pane_ParamLimits

0xc693,	// (0x0004c156) aid_size_cell_colour_4_pane

0x11f8,	// (0x00040cbb) title_pane_stacon_g1_ParamLimits

0x11f8,	// (0x00040cbb) title_pane_stacon_g1

0x54d7,	// (0x00044f9a) popup_note_wait_window_g3_ParamLimits

0x54d7,	// (0x00044f9a) popup_note_wait_window_g3

0x554e,	// (0x00045011) popup_note_wait_window_t5_ParamLimits

0x554e,	// (0x00045011) popup_note_wait_window_t5

0x29b1,	// (0x00042474) main_feb_china_hwr_fs_writing_pane

0xcb88,	// (0x0004c64b) popup_feb_china_hwr_fs_window_ParamLimits

0xcb88,	// (0x0004c64b) popup_feb_china_hwr_fs_window

0xbf7b,	// (0x0004ba3e) aid_size_cell_hwr_fs_ParamLimits

0xbf7b,	// (0x0004ba3e) aid_size_cell_hwr_fs

0x4f2e,	// (0x000449f1) bg_popup_sub_pane_cp3_ParamLimits

0x4f2e,	// (0x000449f1) bg_popup_sub_pane_cp3

0xbf90,	// (0x0004ba53) grid_hwr_fs_pane_ParamLimits

0xbf90,	// (0x0004ba53) grid_hwr_fs_pane

0x1883,	// (0x00041346) linegrid_hwr_fs_pane_ParamLimits

0x1883,	// (0x00041346) linegrid_hwr_fs_pane

0xbfa8,	// (0x0004ba6b) cell_hwr_fs_pane_ParamLimits

0xbfa8,	// (0x0004ba6b) cell_hwr_fs_pane

0x4f3a,	// (0x000449fd) linegrid_hwr_fs_pane_g1_ParamLimits

0x4f3a,	// (0x000449fd) linegrid_hwr_fs_pane_g1

0xd652,	// (0x0004d115) linegrid_hwr_fs_pane_g2_ParamLimits

0xd652,	// (0x0004d115) linegrid_hwr_fs_pane_g2

0x4f58,	// (0x00044a1b) linegrid_hwr_fs_pane_g3_ParamLimits

0x4f58,	// (0x00044a1b) linegrid_hwr_fs_pane_g3

0x18b7,	// (0x0004137a) linegrid_hwr_fs_pane_g4_ParamLimits

0x18b7,	// (0x0004137a) linegrid_hwr_fs_pane_g4

0x18d5,	// (0x00041398) linegrid_hwr_fs_pane_g5_ParamLimits

0x18d5,	// (0x00041398) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0004f2f8) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0004f2f8) linegrid_hwr_fs_pane_g

0x4f64,	// (0x00044a27) cell_hwr_fs_pane_g1_ParamLimits

0x4f64,	// (0x00044a27) cell_hwr_fs_pane_g1

0x4cb1,	// (0x00044774) cell_hwr_fs_pane_g2_ParamLimits

0x4cb1,	// (0x00044774) cell_hwr_fs_pane_g2

0xd664,	// (0x0004d127) cell_hwr_fs_pane_g3_ParamLimits

0xd664,	// (0x0004d127) cell_hwr_fs_pane_g3

0xd671,	// (0x0004d134) cell_hwr_fs_pane_g4_ParamLimits

0xd671,	// (0x0004d134) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0004f303) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0004f303) cell_hwr_fs_pane_g

0xbfce,	// (0x0004ba91) cell_hwr_fs_pane_t1

0x29b1,	// (0x00042474) grid_highlight_pane_cp6

0x29b1,	// (0x00042474) main_idle_act2_pane

0x3481,	// (0x00042f44) aid_inside_area_popup_secondary

0xd74b,	// (0x0004d20e) aid_inside_area_window_primary_ParamLimits

0xd74b,	// (0x0004d20e) aid_inside_area_window_primary

0x6789,	// (0x0004624c) ai2_news_ticker_pane

0x6791,	// (0x00046254) aid_size_cell_ai1_link_ParamLimits

0x6791,	// (0x00046254) aid_size_cell_ai1_link

0x67ab,	// (0x0004626e) popup_ai2_data_window_ParamLimits

0x67ab,	// (0x0004626e) popup_ai2_data_window

0x67c9,	// (0x0004628c) popup_ai2_link_window_ParamLimits

0x67c9,	// (0x0004628c) popup_ai2_link_window

0x4f2e,	// (0x000449f1) bg_popup_sub_pane_cp4_ParamLimits

0x4f2e,	// (0x000449f1) bg_popup_sub_pane_cp4

0x67df,	// (0x000462a2) grid_ai2_link_pane_ParamLimits

0x67df,	// (0x000462a2) grid_ai2_link_pane

0x67f6,	// (0x000462b9) popup_ai2_link_window_g1_ParamLimits

0x67f6,	// (0x000462b9) popup_ai2_link_window_g1

0x6802,	// (0x000462c5) popup_ai2_link_window_g2_ParamLimits

0x6802,	// (0x000462c5) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0004f4cf) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0004f4cf) popup_ai2_link_window_g

0x6813,	// (0x000462d6) ai2_mp_button_pane

0x681b,	// (0x000462de) ai2_mp_volume_pane

0x50f7,	// (0x00044bba) bg_popup_sub_pane_cp5_ParamLimits

0x50f7,	// (0x00044bba) bg_popup_sub_pane_cp5

0x6823,	// (0x000462e6) heading_ai2_gene_pane_ParamLimits

0x6823,	// (0x000462e6) heading_ai2_gene_pane

0x682f,	// (0x000462f2) list_ai2_gene_pane_ParamLimits

0x682f,	// (0x000462f2) list_ai2_gene_pane

0x68b9,	// (0x0004637c) cell_ai2_link_pane_ParamLimits

0x68b9,	// (0x0004637c) cell_ai2_link_pane

0x68cf,	// (0x00046392) cell_ai2_link_pane_g1

0x29b1,	// (0x00042474) grid_highlight_pane_cp7

0x1be3,	// (0x000416a6) ai2_mp_volume_pane_g1

0x69a2,	// (0x00046465) ai2_mp_volume_pane_g2

0x6917,	// (0x000463da) list_ai2_gene_pane_t1

0x69aa,	// (0x0004646d) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0004f4e8) ai2_mp_volume_pane_g

0x1beb,	// (0x000416ae) volume_small_pane_cp3

0x69b2,	// (0x00046475) aid_size_cell_ai2_button

0x69ba,	// (0x0004647d) grid_ai2_button_pane

0x69c3,	// (0x00046486) cell_ai2_button_pane_ParamLimits

0x69c3,	// (0x00046486) cell_ai2_button_pane

0x29a7,	// (0x0004246a) cell_ai2_button_pane_g1

0x29b1,	// (0x00042474) grid_highlight_pane_cp8

0x6962,	// (0x00046425) ai2_gene_pane_t1_ParamLimits

0x6962,	// (0x00046425) ai2_gene_pane_t1

0xcb14,	// (0x0004c5d7) aid_height_parent_landscape

0xd91b,	// (0x0004d3de) aid_height_set_list

0x6244,	// (0x00045d07) aid_size_parent

0x65aa,	// (0x0004606d) aid_size_cell_graphic_pane_ParamLimits

0x6881,	// (0x00046344) popup_ai2_data_window_g1_ParamLimits

0x6881,	// (0x00046344) popup_ai2_data_window_g1

0x688d,	// (0x00046350) ai2_news_ticker_pane_g1

0x6895,	// (0x00046358) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0004f4d4) ai2_news_ticker_pane_g

0x689d,	// (0x00046360) ai2_news_ticker_pane_t1

0x68ab,	// (0x0004636e) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0004f4d9) ai2_news_ticker_pane_t

0x68d8,	// (0x0004639b) heading_ai2_gene_pane_g1

0x68e0,	// (0x000463a3) heading_ai2_gene_pane_t1_ParamLimits

0x68e0,	// (0x000463a3) heading_ai2_gene_pane_t1

0x68f5,	// (0x000463b8) list_highlight_pane_cp6

0x68fd,	// (0x000463c0) ai2_gene_pane_ParamLimits

0x68fd,	// (0x000463c0) ai2_gene_pane

0x6925,	// (0x000463e8) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0004f4de) list_ai2_gene_pane_t

0x6933,	// (0x000463f6) list_highlight_pane_cp8_ParamLimits

0x6933,	// (0x000463f6) list_highlight_pane_cp8

0x6944,	// (0x00046407) ai2_gene_pane_g1_ParamLimits

0x6944,	// (0x00046407) ai2_gene_pane_g1

0x6956,	// (0x00046419) ai2_gene_pane_g2_ParamLimits

0x6956,	// (0x00046419) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0004f4e3) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0004f4e3) ai2_gene_pane_g

0x32ae,	// (0x00042d71) scroll_pane_cp12

0xbf0d,	// (0x0004b9d0) control_pane_t3_ParamLimits

0xbf0d,	// (0x0004b9d0) control_pane_t3

0x41fd,	// (0x00043cc0) status_small_pane_g8_ParamLimits

0x41fd,	// (0x00043cc0) status_small_pane_g8

0xcc2a,	// (0x0004c6ed) popup_find_window_ParamLimits

0xced7,	// (0x0004c99a) popup_note_image_window_ParamLimits

0x0724,	// (0x000401e7) list_double2_graphic_pane_vc_g1_ParamLimits

0x0724,	// (0x000401e7) list_double2_graphic_pane_vc_g1

0x3ee7,	// (0x000439aa) list_double2_graphic_pane_vc_g2_ParamLimits

0x3ee7,	// (0x000439aa) list_double2_graphic_pane_vc_g2

0x17e8,	// (0x000412ab) list_double2_graphic_pane_vc_g3_ParamLimits

0x17e8,	// (0x000412ab) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004f2c6) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004f2c6) list_double2_graphic_pane_vc_g

0x0730,	// (0x000401f3) list_double2_graphic_pane_vc_t1_ParamLimits

0x0730,	// (0x000401f3) list_double2_graphic_pane_vc_t1

0x3ee7,	// (0x000439aa) list_single_heading_pane_vc_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_single_heading_pane_vc_g1

0x17e8,	// (0x000412ab) list_single_heading_pane_vc_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0004f0d9) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0004f0d9) list_single_heading_pane_vc_g

0x0746,	// (0x00040209) list_single_heading_pane_vc_t1_ParamLimits

0x0746,	// (0x00040209) list_single_heading_pane_vc_t1

0x075c,	// (0x0004021f) list_single_heading_pane_vc_t2_ParamLimits

0x075c,	// (0x0004021f) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0004f2e7) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0004f2e7) list_single_heading_pane_vc_t

0x4e84,	// (0x00044947) list_setting_number_pane_vc_g1_ParamLimits

0x4e84,	// (0x00044947) list_setting_number_pane_vc_g1

0x4e90,	// (0x00044953) list_setting_number_pane_vc_g2_ParamLimits

0x4e90,	// (0x00044953) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0004f2ec) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0004f2ec) list_setting_number_pane_vc_g

0x4e9c,	// (0x0004495f) list_setting_number_pane_vc_t1_ParamLimits

0x4e9c,	// (0x0004495f) list_setting_number_pane_vc_t1

0x4eb0,	// (0x00044973) list_setting_number_pane_vc_t2_ParamLimits

0x4eb0,	// (0x00044973) list_setting_number_pane_vc_t2

0x4ecc,	// (0x0004498f) list_setting_number_pane_vc_t3_ParamLimits

0x4ecc,	// (0x0004498f) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0004f2f1) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0004f2f1) list_setting_number_pane_vc_t

0x4ef4,	// (0x000449b7) set_value_pane_vc_ParamLimits

0x4ef4,	// (0x000449b7) set_value_pane_vc

0x643c,	// (0x00045eff) list_double2_graphic_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double2_graphic_pane_vc

0x643c,	// (0x00045eff) list_double2_large_graphic_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double2_large_graphic_pane_vc

0x643c,	// (0x00045eff) list_double2_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double2_pane_vc

0x643c,	// (0x00045eff) list_double_graphic_heading_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_graphic_heading_pane_vc

0x643c,	// (0x00045eff) list_double_graphic_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_graphic_pane_vc

0x643c,	// (0x00045eff) list_double_heading_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_heading_pane_vc

0x643c,	// (0x00045eff) list_double_large_graphic_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_large_graphic_pane_vc

0x643c,	// (0x00045eff) list_double_number_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_number_pane_vc

0x643c,	// (0x00045eff) list_double_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_pane_vc

0x643c,	// (0x00045eff) list_double_time_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_double_time_pane_vc

0x643c,	// (0x00045eff) list_setting_number_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_setting_number_pane_vc

0x643c,	// (0x00045eff) list_setting_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_setting_pane_vc

0x643c,	// (0x00045eff) list_single_graphic_heading_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_single_graphic_heading_pane_vc

0x643c,	// (0x00045eff) list_single_heading_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_single_heading_pane_vc

0x643c,	// (0x00045eff) list_single_number_heading_pane_vc_ParamLimits

0x643c,	// (0x00045eff) list_single_number_heading_pane_vc

0x0724,	// (0x000401e7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0724,	// (0x000401e7) list_double_graphic_heading_pane_vc_g1

0x1bf4,	// (0x000416b7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1bf4,	// (0x000416b7) list_double_graphic_heading_pane_vc_g2

0x1c00,	// (0x000416c3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1c00,	// (0x000416c3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0004f4ef) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0004f4ef) list_double_graphic_heading_pane_vc_g

0x0812,	// (0x000402d5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0812,	// (0x000402d5) list_double_graphic_heading_pane_vc_t1

0x0746,	// (0x00040209) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0746,	// (0x00040209) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0004f4f6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0004f4f6) list_double_graphic_heading_pane_vc_t

0x4e84,	// (0x00044947) list_setting_pane_vc_g1_ParamLimits

0x4e84,	// (0x00044947) list_setting_pane_vc_g1

0x4e90,	// (0x00044953) list_setting_pane_vc_g2_ParamLimits

0x4e90,	// (0x00044953) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0004f2ec) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0004f2ec) list_setting_pane_vc_g

0x6bff,	// (0x000466c2) list_setting_pane_vc_t1_ParamLimits

0x6bff,	// (0x000466c2) list_setting_pane_vc_t1

0x6c13,	// (0x000466d6) list_setting_pane_vc_t2_ParamLimits

0x6c13,	// (0x000466d6) list_setting_pane_vc_t2

0x0001,

0xfa76,	// (0x0004f539) list_setting_pane_vc_t_ParamLimits

0xfa76,	// (0x0004f539) list_setting_pane_vc_t

0x4ef4,	// (0x000449b7) set_value_pane_cp_vc_ParamLimits

0x4ef4,	// (0x000449b7) set_value_pane_cp_vc

0x3ee7,	// (0x000439aa) list_single_number_heading_pane_vc_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_single_number_heading_pane_vc_g1

0x17e8,	// (0x000412ab) list_single_number_heading_pane_vc_g2_ParamLimits

0x17e8,	// (0x000412ab) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0004f0d9) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0004f0d9) list_single_number_heading_pane_vc_g

0x0746,	// (0x00040209) list_single_number_heading_pane_vc_t1_ParamLimits

0x0746,	// (0x00040209) list_single_number_heading_pane_vc_t1

0x0826,	// (0x000402e9) list_single_number_heading_pane_vc_t2_ParamLimits

0x0826,	// (0x000402e9) list_single_number_heading_pane_vc_t2

0x083a,	// (0x000402fd) list_single_number_heading_pane_vc_t3_ParamLimits

0x083a,	// (0x000402fd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa7b,	// (0x0004f53e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0004f53e) list_single_number_heading_pane_vc_t

0x0724,	// (0x000401e7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0724,	// (0x000401e7) list_single_graphic_heading_pane_vc_g1

0x3ee7,	// (0x000439aa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3ee7,	// (0x000439aa) list_single_graphic_heading_pane_vc_g4

0x17e8,	// (0x000412ab) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x17e8,	// (0x000412ab) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004f2c6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004f2c6) list_single_graphic_heading_pane_vc_g

0x0746,	// (0x00040209) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0746,	// (0x00040209) list_single_graphic_heading_pane_vc_t1

0x084c,	// (0x0004030f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x084c,	// (0x0004030f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0004f545) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0004f545) list_single_graphic_heading_pane_vc_t

0x3ee7,	// (0x000439aa) list_double2_pane_vc_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_double2_pane_vc_g1

0x17e8,	// (0x000412ab) list_double2_pane_vc_g2_ParamLimits

0x17e8,	// (0x000412ab) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0004f0d9) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0004f0d9) list_double2_pane_vc_g

0x0860,	// (0x00040323) list_double2_pane_vc_t1_ParamLimits

0x0860,	// (0x00040323) list_double2_pane_vc_t1

0x1c0c,	// (0x000416cf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1c0c,	// (0x000416cf) list_double2_large_graphic_pane_vc_g1

0x3ee7,	// (0x000439aa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3ee7,	// (0x000439aa) list_double2_large_graphic_pane_vc_g2

0x17e8,	// (0x000412ab) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x17e8,	// (0x000412ab) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0004f0f1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0004f0f1) list_double2_large_graphic_pane_vc_g

0x0876,	// (0x00040339) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0876,	// (0x00040339) list_double2_large_graphic_pane_vc_t1

0x1c18,	// (0x000416db) list_double_time_pane_vc_g1_ParamLimits

0x1c18,	// (0x000416db) list_double_time_pane_vc_g1

0x1c24,	// (0x000416e7) list_double_time_pane_vc_g2_ParamLimits

0x1c24,	// (0x000416e7) list_double_time_pane_vc_g2

0x0001,

0xfa87,	// (0x0004f54a) list_double_time_pane_vc_g_ParamLimits

0xfa87,	// (0x0004f54a) list_double_time_pane_vc_g

0x088c,	// (0x0004034f) list_double_time_pane_vc_t1_ParamLimits

0x088c,	// (0x0004034f) list_double_time_pane_vc_t1

0x08a5,	// (0x00040368) list_double_time_pane_vc_t2_ParamLimits

0x08a5,	// (0x00040368) list_double_time_pane_vc_t2

0x08e5,	// (0x000403a8) list_double_time_pane_vc_t3_ParamLimits

0x08e5,	// (0x000403a8) list_double_time_pane_vc_t3

0x08fd,	// (0x000403c0) list_double_time_pane_vc_t4_ParamLimits

0x08fd,	// (0x000403c0) list_double_time_pane_vc_t4

0x0003,

0xfa8c,	// (0x0004f54f) list_double_time_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004f54f) list_double_time_pane_vc_t

0x3ee7,	// (0x000439aa) list_double_pane_vc_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_double_pane_vc_g1

0x17e8,	// (0x000412ab) list_double_pane_vc_g2_ParamLimits

0x17e8,	// (0x000412ab) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0004f0d9) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0004f0d9) list_double_pane_vc_g

0x0911,	// (0x000403d4) list_double_pane_vc_t1_ParamLimits

0x0911,	// (0x000403d4) list_double_pane_vc_t1

0x0923,	// (0x000403e6) list_double_pane_vc_t2_ParamLimits

0x0923,	// (0x000403e6) list_double_pane_vc_t2

0x0001,

0xfa95,	// (0x0004f558) list_double_pane_vc_t_ParamLimits

0xfa95,	// (0x0004f558) list_double_pane_vc_t

0x3ee7,	// (0x000439aa) list_double_number_pane_vc_g1_ParamLimits

0x3ee7,	// (0x000439aa) list_double_number_pane_vc_g1

0x17e8,	// (0x000412ab) list_double_number_pane_vc_g2_ParamLimits

0x17e8,	// (0x000412ab) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0004f0d9) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0004f0d9) list_double_number_pane_vc_g

0x093b,	// (0x000403fe) list_double_number_pane_vc_t1_ParamLimits

0x093b,	// (0x000403fe) list_double_number_pane_vc_t1

0x094f,	// (0x00040412) list_double_number_pane_vc_t2_ParamLimits

0x094f,	// (0x00040412) list_double_number_pane_vc_t2

0x0923,	// (0x000403e6) list_double_number_pane_vc_t3_ParamLimits

0x0923,	// (0x000403e6) list_double_number_pane_vc_t3

0x0002,

0xfa9a,	// (0x0004f55d) list_double_number_pane_vc_t_ParamLimits

0xfa9a,	// (0x0004f55d) list_double_number_pane_vc_t

0x1c30,	// (0x000416f3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1c30,	// (0x000416f3) list_double_large_graphic_pane_vc_g1

0x1c3c,	// (0x000416ff) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1c3c,	// (0x000416ff) list_double_large_graphic_pane_vc_g2

0x17e8,	// (0x000412ab) list_double_large_graphic_pane_vc_g3_ParamLimits

0x17e8,	// (0x000412ab) list_double_large_graphic_pane_vc_g3

0x0961,	// (0x00040424) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0961,	// (0x00040424) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa1,	// (0x0004f564) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0004f564) list_double_large_graphic_pane_vc_g

0x096d,	// (0x00040430) list_double_large_graphic_pane_vc_t1_ParamLimits

0x096d,	// (0x00040430) list_double_large_graphic_pane_vc_t1

0x097f,	// (0x00040442) list_double_large_graphic_pane_vc_t2_ParamLimits

0x097f,	// (0x00040442) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0004f56d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0004f56d) list_double_large_graphic_pane_vc_t

0x1bf4,	// (0x000416b7) list_double_heading_pane_vc_g1_ParamLimits

0x1bf4,	// (0x000416b7) list_double_heading_pane_vc_g1

0x1c00,	// (0x000416c3) list_double_heading_pane_vc_g2_ParamLimits

0x1c00,	// (0x000416c3) list_double_heading_pane_vc_g2

0x0001,

0xfaaf,	// (0x0004f572) list_double_heading_pane_vc_g_ParamLimits

0xfaaf,	// (0x0004f572) list_double_heading_pane_vc_g

0x0998,	// (0x0004045b) list_double_heading_pane_vc_t1_ParamLimits

0x0998,	// (0x0004045b) list_double_heading_pane_vc_t1

0x0746,	// (0x00040209) list_double_heading_pane_vc_t2_ParamLimits

0x0746,	// (0x00040209) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0004f577) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0004f577) list_double_heading_pane_vc_t

0x0724,	// (0x000401e7) list_double_graphic_pane_vc_g1_ParamLimits

0x0724,	// (0x000401e7) list_double_graphic_pane_vc_g1

0x1c4b,	// (0x0004170e) list_double_graphic_pane_vc_g2_ParamLimits

0x1c4b,	// (0x0004170e) list_double_graphic_pane_vc_g2

0x1c5a,	// (0x0004171d) list_double_graphic_pane_vc_g3_ParamLimits

0x1c5a,	// (0x0004171d) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0004f57c) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0004f57c) list_double_graphic_pane_vc_g

0x09ac,	// (0x0004046f) list_double_graphic_pane_vc_t1_ParamLimits

0x09ac,	// (0x0004046f) list_double_graphic_pane_vc_t1

0x0923,	// (0x000403e6) list_double_graphic_pane_vc_t2_ParamLimits

0x0923,	// (0x000403e6) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0004f583) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0004f583) list_double_graphic_pane_vc_t

0x0ca4,	// (0x00040767) aid_size_cell_fastswap

0xb95d,	// (0x0004b420) aid_size_cell_touch_ParamLimits

0xb95d,	// (0x0004b420) aid_size_cell_touch

0x0f0d,	// (0x000409d0) popup_fast_swap_wide_window_ParamLimits

0x0f0d,	// (0x000409d0) popup_fast_swap_wide_window

0xbaac,	// (0x0004b56f) touch_pane_ParamLimits

0xbaac,	// (0x0004b56f) touch_pane

0x3304,	// (0x00042dc7) button_value_adjust_pane_cp2

0x03ee,	// (0x0003feb1) button_value_adjust_pane_cp4

0x0416,	// (0x0003fed9) form_field_data_pane_cp2

0xb5c0,	// (0x0004b083) form_field_data_wide_pane_cp2

0x379d,	// (0x00043260) bg_scroll_pane_ParamLimits

0x135d,	// (0x00040e20) scroll_handle_pane_ParamLimits

0x1371,	// (0x00040e34) scroll_sc2_down_pane_ParamLimits

0x1371,	// (0x00040e34) scroll_sc2_down_pane

0x37ce,	// (0x00043291) scroll_sc2_up_pane_ParamLimits

0x37ce,	// (0x00043291) scroll_sc2_up_pane

0xdccf,	// (0x0004d792) grid_wheel_folder_pane_g1_ParamLimits

0xdccf,	// (0x0004d792) grid_wheel_folder_pane_g1

0x1559,	// (0x0004101c) clock_nsta_pane_cp2_ParamLimits

0x1559,	// (0x0004101c) clock_nsta_pane_cp2

0xca29,	// (0x0004c4ec) listscroll_midp_pane_ParamLimits

0xca3a,	// (0x0004c4fd) midp_canvas_pane

0x4278,	// (0x00043d3b) nsta_clock_indic_pane

0x42d2,	// (0x00043d95) listscroll_form_pane_vc

0x42ee,	// (0x00043db1) listscroll_set_pane_vc_ParamLimits

0x42ee,	// (0x00043db1) listscroll_set_pane_vc

0xd34c,	// (0x0004ce0f) clock_nsta_pane

0xd376,	// (0x0004ce39) indicator_nsta_pane

0x4d7a,	// (0x0004483d) bg_popup_sub_pane_cp2_ParamLimits

0x4d8e,	// (0x00044851) find_pane_cp2_ParamLimits

0x4d8e,	// (0x00044851) find_pane_cp2

0x4da4,	// (0x00044867) grid_toobar_pane_ParamLimits

0x4f02,	// (0x000449c5) list_form_gen_pane_vc_ParamLimits

0x4f02,	// (0x000449c5) list_form_gen_pane_vc

0x4f18,	// (0x000449db) scroll_pane_cp8_vc_ParamLimits

0x4f18,	// (0x000449db) scroll_pane_cp8_vc

0x4f94,	// (0x00044a57) data_form_wide_pane_vc_ParamLimits

0x4f94,	// (0x00044a57) data_form_wide_pane_vc

0x4fa0,	// (0x00044a63) form_field_data_wide_pane_vc_g1

0x4fa8,	// (0x00044a6b) form_field_data_wide_pane_vc_t1_ParamLimits

0x4fa8,	// (0x00044a6b) form_field_data_wide_pane_vc_t1

0x3318,	// (0x00042ddb) input_focus_pane_cp6_vc_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_cp6_vc

0xd6ef,	// (0x0004d1b2) list_midp_pane_ParamLimits

0x6616,	// (0x000460d9) scroll_pane_cp16_ParamLimits

0x6616,	// (0x000460d9) scroll_pane_cp16

0x52ce,	// (0x00044d91) button_value_adjust_pane_ParamLimits

0x52ce,	// (0x00044d91) button_value_adjust_pane

0xd92c,	// (0x0004d3ef) button_value_adjust_pane_cp6_ParamLimits

0xd92c,	// (0x0004d3ef) button_value_adjust_pane_cp6

0xda6e,	// (0x0004d531) settings_code_pane_cp_ParamLimits

0xda6e,	// (0x0004d531) settings_code_pane_cp

0x29a7,	// (0x0004246a) cell_touch_pane_g1

0x29a7,	// (0x0004246a) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004f20f) cell_touch_pane_g

0xdba4,	// (0x0004d667) cell_touch_pane_cp_ParamLimits

0xdba4,	// (0x0004d667) cell_touch_pane_cp

0xdbc0,	// (0x0004d683) cell_touch_pane_ParamLimits

0xdbc0,	// (0x0004d683) cell_touch_pane

0x29a7,	// (0x0004246a) scroll_sc2_down_pane_g1

0x29a7,	// (0x0004246a) scroll_sc2_up_pane_g1

0x29b1,	// (0x00042474) bg_set_opt_pane_cp4_vc

0x69f6,	// (0x000464b9) list_set_graphic_pane_vc_g1_ParamLimits

0x69f6,	// (0x000464b9) list_set_graphic_pane_vc_g1

0x6a02,	// (0x000464c5) list_set_graphic_pane_vc_g2_ParamLimits

0x6a02,	// (0x000464c5) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0004f4fb) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0004f4fb) list_set_graphic_pane_vc_g

0x6a0e,	// (0x000464d1) text_primary_small_cp13_vc_ParamLimits

0x6a0e,	// (0x000464d1) text_primary_small_cp13_vc

0x6a26,	// (0x000464e9) list_set_graphic_pane_vc_ParamLimits

0x6a26,	// (0x000464e9) list_set_graphic_pane_vc

0x29b1,	// (0x00042474) input_focus_pane_cp2_vc

0x29a7,	// (0x0004246a) setting_code_pane_vc_g1

0x6a3a,	// (0x000464fd) setting_code_pane_vc_t1

0x6a48,	// (0x0004650b) set_text_pane_vc_t1_ParamLimits

0x6a48,	// (0x0004650b) set_text_pane_vc_t1

0x29b1,	// (0x00042474) input_focus_pane_cp1_vc

0x6a66,	// (0x00046529) list_set_text_pane_vc

0x29a7,	// (0x0004246a) setting_text_pane_vc_g1

0x29b1,	// (0x00042474) bg_set_opt_pane_cp2_vc

0x6a70,	// (0x00046533) setting_slider_graphic_pane_vc_g1

0x6a78,	// (0x0004653b) setting_slider_graphic_pane_vc_t1

0x6a86,	// (0x00046549) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0004f500) setting_slider_graphic_pane_vc_t

0x6a94,	// (0x00046557) slider_set_pane_cp_vc

0x6a9c,	// (0x0004655f) slider_set_pane_vc_g1

0x6aa5,	// (0x00046568) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0004f505) slider_set_pane_vc_g

0x337f,	// (0x00042e42) set_opt_bg_pane_g1_copy1

0x3387,	// (0x00042e4a) set_opt_bg_pane_g2_copy1

0x6ad1,	// (0x00046594) set_opt_bg_pane_g3_copy1

0x3397,	// (0x00042e5a) set_opt_bg_pane_g4_copy1

0x339f,	// (0x00042e62) set_opt_bg_pane_g5_copy1

0x33a7,	// (0x00042e6a) set_opt_bg_pane_g6_copy1

0x6adb,	// (0x0004659e) set_opt_bg_pane_g7_copy1

0x6ae5,	// (0x000465a8) set_opt_bg_pane_g8_copy1

0x6aef,	// (0x000465b2) set_opt_bg_pane_g9_copy1

0x29b1,	// (0x00042474) bg_set_opt_pane_cp_vc

0x6af9,	// (0x000465bc) setting_slider_pane_vc_t1

0x6a78,	// (0x0004653b) setting_slider_pane_vc_t2

0x6a86,	// (0x00046549) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0004f514) setting_slider_pane_vc_t

0x6a94,	// (0x00046557) slider_set_pane_vc

0x18f9,	// (0x000413bc) volume_set_pane_vc_g1

0x1902,	// (0x000413c5) volume_set_pane_vc_g2

0x190b,	// (0x000413ce) volume_set_pane_vc_g3

0x1914,	// (0x000413d7) volume_set_pane_vc_g4

0x191d,	// (0x000413e0) volume_set_pane_vc_g5

0x1926,	// (0x000413e9) volume_set_pane_vc_g6

0x192f,	// (0x000413f2) volume_set_pane_vc_g7

0x1938,	// (0x000413fb) volume_set_pane_vc_g8

0x1941,	// (0x00041404) volume_set_pane_vc_g9

0x194a,	// (0x0004140d) volume_set_pane_vc_g10

0x0009,

0xfa58,	// (0x0004f51b) volume_set_pane_vc_g

0x6b08,	// (0x000465cb) volume_set_pane_vc

0x6b10,	// (0x000465d3) button_value_adjust_pane_cp1_vc

0x6b1a,	// (0x000465dd) list_highlight_pane_cp2_vc

0x6b23,	// (0x000465e6) list_set_pane_vc_ParamLimits

0x6b23,	// (0x000465e6) list_set_pane_vc

0x6b8d,	// (0x00046650) main_pane_set_vc_t1_ParamLimits

0x6b8d,	// (0x00046650) main_pane_set_vc_t1

0x6ba2,	// (0x00046665) main_pane_set_vc_t2_ParamLimits

0x6ba2,	// (0x00046665) main_pane_set_vc_t2

0x6bb4,	// (0x00046677) main_pane_set_vc_t3_ParamLimits

0x6bb4,	// (0x00046677) main_pane_set_vc_t3

0x6bc8,	// (0x0004668b) main_pane_set_vc_t4_ParamLimits

0x6bc8,	// (0x0004668b) main_pane_set_vc_t4

0x0003,

0xfa6d,	// (0x0004f530) main_pane_set_vc_t_ParamLimits

0xfa6d,	// (0x0004f530) main_pane_set_vc_t

0x6bdc,	// (0x0004669f) setting_code_pane_vc_ParamLimits

0x6bdc,	// (0x0004669f) setting_code_pane_vc

0x6bed,	// (0x000466b0) setting_slider_graphic_pane_vc

0x6bed,	// (0x000466b0) setting_slider_pane_vc

0x6bed,	// (0x000466b0) setting_text_pane_vc

0x6bed,	// (0x000466b0) setting_volume_pane_vc

0x6bf7,	// (0x000466ba) scroll_pane_cp121_vc

0x32f2,	// (0x00042db5) set_content_pane_vc

0x6c35,	// (0x000466f8) button_value_adjust_pane_g1

0x6c3e,	// (0x00046701) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0004f588) button_value_adjust_pane_g

0x6c47,	// (0x0004670a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c47,	// (0x0004670a) form_field_slider_wide_pane_vc_t1

0x6c5b,	// (0x0004671e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c5b,	// (0x0004671e) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0004f58d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0004f58d) form_field_slider_wide_pane_vc_t

0x2d0d,	// (0x000427d0) input_focus_pane_cp10_vc_ParamLimits

0x2d0d,	// (0x000427d0) input_focus_pane_cp10_vc

0x6c6d,	// (0x00046730) slider_cont_pane_cp1_vc_ParamLimits

0x6c6d,	// (0x00046730) slider_cont_pane_cp1_vc

0x6a9c,	// (0x0004655f) slider_form_pane_g1_cp2

0x6aa5,	// (0x00046568) slider_form_pane_g2_cp2

0x6c86,	// (0x00046749) form_field_slider_pane_vc_t3

0x6c94,	// (0x00046757) form_field_slider_pane_vc_t4

0x6ca2,	// (0x00046765) slider_form_pane_vc_ParamLimits

0x6ca2,	// (0x00046765) slider_form_pane_vc

0x6caf,	// (0x00046772) form_field_slider_pane_vc_t1_ParamLimits

0x6caf,	// (0x00046772) form_field_slider_pane_vc_t1

0x6c5b,	// (0x0004671e) form_field_slider_pane_vc_t2_ParamLimits

0x6c5b,	// (0x0004671e) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0004f59d) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0004f59d) form_field_slider_pane_vc_t

0x2d0d,	// (0x000427d0) input_focus_pane_cp9_vc_ParamLimits

0x2d0d,	// (0x000427d0) input_focus_pane_cp9_vc

0x6ccb,	// (0x0004678e) slider_cont_pane_vc_ParamLimits

0x6ccb,	// (0x0004678e) slider_cont_pane_vc

0x6cdd,	// (0x000467a0) list_form_graphic_pane_cp_vc_ParamLimits

0x6cdd,	// (0x000467a0) list_form_graphic_pane_cp_vc

0x4fa0,	// (0x00044a63) form_field_popup_wide_pane_vc_g1

0x6cf2,	// (0x000467b5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6cf2,	// (0x000467b5) form_field_popup_wide_pane_vc_t1

0x3318,	// (0x00042ddb) input_focus_pane_cp8_vc_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_cp8_vc

0x6d09,	// (0x000467cc) list_form_wide_pane_vc_ParamLimits

0x6d09,	// (0x000467cc) list_form_wide_pane_vc

0x6d15,	// (0x000467d8) list_form_graphic_pane_vc_g1

0x6d1d,	// (0x000467e0) list_form_graphic_pane_vc_t1_ParamLimits

0x6d1d,	// (0x000467e0) list_form_graphic_pane_vc_t1

0x2a91,	// (0x00042554) list_highlight_pane_cp5_vc_ParamLimits

0x2a91,	// (0x00042554) list_highlight_pane_cp5_vc

0x6d39,	// (0x000467fc) list_form_graphic_pane_vc_ParamLimits

0x6d39,	// (0x000467fc) list_form_graphic_pane_vc

0x4fa0,	// (0x00044a63) form_field_popup_pane_vc_g1

0x6d4f,	// (0x00046812) form_field_popup_pane_vc_t1_ParamLimits

0x6d4f,	// (0x00046812) form_field_popup_pane_vc_t1

0x3318,	// (0x00042ddb) input_focus_pane_cp7_vc_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_cp7_vc

0x6d66,	// (0x00046829) list_form_pane_vc_ParamLimits

0x6d66,	// (0x00046829) list_form_pane_vc

0x6d72,	// (0x00046835) data_form_pane_vc_t1_ParamLimits

0x6d72,	// (0x00046835) data_form_pane_vc_t1

0x337f,	// (0x00042e42) input_focus_pane_vc_g1

0x3387,	// (0x00042e4a) input_focus_pane_vc_g2

0x338f,	// (0x00042e52) input_focus_pane_vc_g3

0x3397,	// (0x00042e5a) input_focus_pane_vc_g4

0x339f,	// (0x00042e62) input_focus_pane_vc_g5

0x33a7,	// (0x00042e6a) input_focus_pane_vc_g6

0x33af,	// (0x00042e72) input_focus_pane_vc_g7

0x33b7,	// (0x00042e7a) input_focus_pane_vc_g8

0x33bf,	// (0x00042e82) input_focus_pane_vc_g9

0x29a7,	// (0x0004246a) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004f198) input_focus_pane_vc_g

0x4f94,	// (0x00044a57) data_form_pane_vc_ParamLimits

0x4f94,	// (0x00044a57) data_form_pane_vc

0x4fa0,	// (0x00044a63) form_field_data_pane_vc_g1

0x6d8f,	// (0x00046852) form_field_data_pane_vc_t1_ParamLimits

0x6d8f,	// (0x00046852) form_field_data_pane_vc_t1

0x3318,	// (0x00042ddb) input_focus_pane_vc_ParamLimits

0x3318,	// (0x00042ddb) input_focus_pane_vc

0x6da9,	// (0x0004686c) button_value_adjust_pane_cp3_vc

0x6db1,	// (0x00046874) button_value_adjust_pane_cp5_vc

0x6db9,	// (0x0004687c) form_field_data_pane_vc_ParamLimits

0x6db9,	// (0x0004687c) form_field_data_pane_vc

0x6dd4,	// (0x00046897) form_field_data_pane_vc_cp2

0x6ddc,	// (0x0004689f) form_field_data_wide_pane_vc_ParamLimits

0x6ddc,	// (0x0004689f) form_field_data_wide_pane_vc

0x6df6,	// (0x000468b9) form_field_data_wide_pane_vc_cp2

0x6dfe,	// (0x000468c1) form_field_popup_pane_vc_ParamLimits

0x6dfe,	// (0x000468c1) form_field_popup_pane_vc

0x6e19,	// (0x000468dc) form_field_popup_wide_pane_vc_ParamLimits

0x6e19,	// (0x000468dc) form_field_popup_wide_pane_vc

0x6e33,	// (0x000468f6) form_field_slider_pane_vc_ParamLimits

0x6e33,	// (0x000468f6) form_field_slider_pane_vc

0x6e46,	// (0x00046909) form_field_slider_wide_pane_vc_ParamLimits

0x6e46,	// (0x00046909) form_field_slider_wide_pane_vc

0xdbde,	// (0x0004d6a1) grid_touch_1_pane_ParamLimits

0xdbde,	// (0x0004d6a1) grid_touch_1_pane

0xdbf2,	// (0x0004d6b5) grid_touch_2_pane_ParamLimits

0xdbf2,	// (0x0004d6b5) grid_touch_2_pane

0x6f1d,	// (0x000469e0) touch_pane_g1_ParamLimits

0x6f1d,	// (0x000469e0) touch_pane_g1

0x6e7f,	// (0x00046942) cell_app_pane_cp_wide_ParamLimits

0x6e7f,	// (0x00046942) cell_app_pane_cp_wide

0x6e90,	// (0x00046953) grid_popup_fast_wide_pane_ParamLimits

0x6e90,	// (0x00046953) grid_popup_fast_wide_pane

0x6ea4,	// (0x00046967) scroll_pane_cp19_ParamLimits

0x6ea4,	// (0x00046967) scroll_pane_cp19

0x29b1,	// (0x00042474) bg_popup_window_pane_cp20

0x6eb8,	// (0x0004697b) listscroll_popup_fast_wide_pane

0x34ee,	// (0x00042fb1) grid_indicator_nsta_pane

0x6ec0,	// (0x00046983) clock_nsta_pane_g1

0x6ec9,	// (0x0004698c) clock_nsta_pane_t1

0xdc1e,	// (0x0004d6e1) cell_indicator_nsta_pane_ParamLimits

0xdc1e,	// (0x0004d6e1) cell_indicator_nsta_pane

0x6f1d,	// (0x000469e0) cell_indicator_nsta_pane_g1

0xdc3b,	// (0x0004d6fe) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0004f5a7) cell_indicator_nsta_pane_g

0x6f40,	// (0x00046a03) clock_nsta_pane_cp

0x6f48,	// (0x00046a0b) indicator_nsta_pane_cp

0x6f50,	// (0x00046a13) nsta_clock_indic_pane_g1

0x2b5d,	// (0x00042620) grid_indicator_pane

0x38c0,	// (0x00043383) scroll_pane_cp29

0x14a5,	// (0x00040f68) indicator_nsta_pane_cp2_ParamLimits

0x14a5,	// (0x00040f68) indicator_nsta_pane_cp2

0x2a91,	// (0x00042554) main_apps_wheel_pane

0x515f,	// (0x00044c22) form_midp_field_text_pane_ParamLimits

0x52ae,	// (0x00044d71) scroll_bar_cp050_ParamLimits

0x6f88,	// (0x00046a4b) cell_indicator_pane_ParamLimits

0x6f88,	// (0x00046a4b) cell_indicator_pane

0x6fa0,	// (0x00046a63) cell_indicator_pane_g1

0xdc51,	// (0x0004d714) grid_wheel_folder_pane_ParamLimits

0xdc51,	// (0x0004d714) grid_wheel_folder_pane

0xdc5f,	// (0x0004d722) list_wheel_apps_pane_ParamLimits

0xdc5f,	// (0x0004d722) list_wheel_apps_pane

0xdc6d,	// (0x0004d730) main_apps_wheel_pane_g1_ParamLimits

0xdc6d,	// (0x0004d730) main_apps_wheel_pane_g1

0xdc7d,	// (0x0004d740) main_apps_wheel_pane_g2_ParamLimits

0xdc7d,	// (0x0004d740) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0004f5b6) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0004f5b6) main_apps_wheel_pane_g

0xdc8d,	// (0x0004d750) main_apps_wheel_pane_t1_ParamLimits

0xdc8d,	// (0x0004d750) main_apps_wheel_pane_t1

0xdca5,	// (0x0004d768) list_wheel_apps_pane_g1

0xdcad,	// (0x0004d770) list_wheel_apps_pane_g2

0xdcb5,	// (0x0004d778) list_wheel_apps_pane_g3

0xdcbd,	// (0x0004d780) list_wheel_apps_pane_g4

0xdcc5,	// (0x0004d788) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0004f5bb) list_wheel_apps_pane_g

0x3df2,	// (0x000438b5) navi_icon_text_pane

0xd245,	// (0x0004cd08) aid_fill_nsta

0xdce2,	// (0x0004d7a5) navi_icon_text_pane_g1

0xdcee,	// (0x0004d7b1) navi_icon_text_pane_t1

0xca11,	// (0x0004c4d4) list_set_graphic_pane_t1_ParamLimits

0xca11,	// (0x0004c4d4) list_set_graphic_pane_t1

0x59ce,	// (0x00045491) popup_midp_note_alarm_window_t6_ParamLimits

0x59ce,	// (0x00045491) popup_midp_note_alarm_window_t6

0x59e0,	// (0x000454a3) popup_midp_note_alarm_window_t7_ParamLimits

0x59e0,	// (0x000454a3) popup_midp_note_alarm_window_t7

0x59f2,	// (0x000454b5) popup_midp_note_alarm_window_t8_ParamLimits

0x59f2,	// (0x000454b5) popup_midp_note_alarm_window_t8

0x5a04,	// (0x000454c7) popup_midp_note_alarm_window_t9_ParamLimits

0x5a04,	// (0x000454c7) popup_midp_note_alarm_window_t9

0x5a16,	// (0x000454d9) popup_midp_note_alarm_window_t10_ParamLimits

0x5a16,	// (0x000454d9) popup_midp_note_alarm_window_t10

0x5a28,	// (0x000454eb) popup_midp_note_alarm_window_t11_ParamLimits

0x5a28,	// (0x000454eb) popup_midp_note_alarm_window_t11

0x5a3a,	// (0x000454fd) scroll_pane_cp17_ParamLimits

0x5a3a,	// (0x000454fd) scroll_pane_cp17

0x18f9,	// (0x000413bc) volume_small_pane_cp_g1

0x1c66,	// (0x00041729) volume_small_pane_cp_g2

0x1c6f,	// (0x00041732) volume_small_pane_cp_g3

0x1c78,	// (0x0004173b) volume_small_pane_cp_g4

0x1c81,	// (0x00041744) volume_small_pane_cp_g5

0x1c8a,	// (0x0004174d) volume_small_pane_cp_g6

0x1c93,	// (0x00041756) volume_small_pane_cp_g7

0x1c9c,	// (0x0004175f) volume_small_pane_cp_g8

0x1ca5,	// (0x00041768) volume_small_pane_cp_g9

0x1cae,	// (0x00041771) volume_small_pane_cp_g10

0x4053,	// (0x00043b16) midp_ticker_pane_g1_ParamLimits

0x405f,	// (0x00043b22) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004f260) midp_ticker_pane_g_ParamLimits

0xcad1,	// (0x0004c594) midp_ticker_pane_t1_ParamLimits

0xd265,	// (0x0004cd28) aid_fill_nsta_2

0x529a,	// (0x00044d5d) list_form2_midp_pane

0x63f7,	// (0x00045eba) midp_editing_number_pane_ParamLimits

0x6406,	// (0x00045ec9) midp_ticker_pane_ParamLimits

0x7099,	// (0x00046b5c) form2_midp_field_pane

0x70bd,	// (0x00046b80) scroll_pane_cp51

0x70dd,	// (0x00046ba0) form2_midp_button_pane_ParamLimits

0x70dd,	// (0x00046ba0) form2_midp_button_pane

0x70ef,	// (0x00046bb2) form2_midp_content_pane_ParamLimits

0x70ef,	// (0x00046bb2) form2_midp_content_pane

0x7109,	// (0x00046bcc) form2_midp_field_choice_group_pane

0x7111,	// (0x00046bd4) form2_midp_field_pane_g1

0x7119,	// (0x00046bdc) form2_midp_field_pane_g2

0x7121,	// (0x00046be4) form2_midp_field_pane_g3

0x7129,	// (0x00046bec) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0004f5e0) form2_midp_field_pane_g

0x7131,	// (0x00046bf4) form2_midp_gauge_slider_pane

0x7139,	// (0x00046bfc) form2_midp_gauge_wait_pane

0x7141,	// (0x00046c04) form2_midp_image_pane_ParamLimits

0x7141,	// (0x00046c04) form2_midp_image_pane

0x715c,	// (0x00046c1f) form2_midp_label_pane_ParamLimits

0x715c,	// (0x00046c1f) form2_midp_label_pane

0xdd1c,	// (0x0004d7df) form2_midp_label_pane_cp_ParamLimits

0xdd1c,	// (0x0004d7df) form2_midp_label_pane_cp

0x719c,	// (0x00046c5f) form2_midp_string_pane_ParamLimits

0x719c,	// (0x00046c5f) form2_midp_string_pane

0xb7c7,	// (0x0004b28a) form2_midp_text_pane_ParamLimits

0xb7c7,	// (0x0004b28a) form2_midp_text_pane

0x71ae,	// (0x00046c71) form2_midp_time_pane

0x71be,	// (0x00046c81) input_focus_pane_cp51_ParamLimits

0x71be,	// (0x00046c81) input_focus_pane_cp51

0x71d6,	// (0x00046c99) form2_midp_label_pane_t1_ParamLimits

0x71d6,	// (0x00046c99) form2_midp_label_pane_t1

0xb7ea,	// (0x0004b2ad) form2_mdip_text_pane_t1_ParamLimits

0xb7ea,	// (0x0004b2ad) form2_mdip_text_pane_t1

0x0a00,	// (0x000404c3) form2_midp_time_pane_t1

0x7224,	// (0x00046ce7) form2_midp_gauge_slider_pane_t1

0xdd3d,	// (0x0004d800) form2_midp_gauge_slider_pane_t2

0xdd4f,	// (0x0004d812) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0004f5e9) form2_midp_gauge_slider_pane_t

0x725a,	// (0x00046d1d) form2_midp_slider_pane

0x7266,	// (0x00046d29) form2_midp_gauge_wait_pane_t1

0x7274,	// (0x00046d37) form2_midp_wait_pane_ParamLimits

0x7274,	// (0x00046d37) form2_midp_wait_pane

0xd67e,	// (0x0004d141) list_single_2graphic_pane_cp4_ParamLimits

0xd67e,	// (0x0004d141) list_single_2graphic_pane_cp4

0xdd61,	// (0x0004d824) list_single_midp_graphic_pane_cp_ParamLimits

0xdd61,	// (0x0004d824) list_single_midp_graphic_pane_cp

0x29b1,	// (0x00042474) list_highlight_pane_cp20

0x72c3,	// (0x00046d86) list_single_2graphic_pane_g1_cp4

0x68d8,	// (0x0004639b) list_single_2graphic_pane_g2_cp4

0x72cb,	// (0x00046d8e) list_single_2graphic_pane_t1_cp4

0x2a91,	// (0x00042554) list_highlight_pane_cp21

0x72da,	// (0x00046d9d) list_single_midp_graphic_pane_g4_cp

0x72e9,	// (0x00046dac) list_single_midp_graphic_pane_t1_cp

0xdd82,	// (0x0004d845) form2_mdip_string_pane_t1_ParamLimits

0xdd82,	// (0x0004d845) form2_mdip_string_pane_t1

0x29b1,	// (0x00042474) bg_wml_button_pane_cp2

0x29a7,	// (0x0004246a) form2_midp_image_pane_g1

0x1192,	// (0x00040c55) list_double_large_graphic_pane_g5_ParamLimits

0x1192,	// (0x00040c55) list_double_large_graphic_pane_g5

0xca29,	// (0x0004c4ec) midp_form_pane_ParamLimits

0x2a91,	// (0x00042554) main_apps_wheel_pane_ParamLimits

0xcf5d,	// (0x0004ca20) popup_preview_window_ParamLimits

0xcf5d,	// (0x0004ca20) popup_preview_window

0x48c4,	// (0x00044387) popup_touch_info_window_ParamLimits

0x48c4,	// (0x00044387) popup_touch_info_window

0x48e6,	// (0x000443a9) popup_touch_menu_window_ParamLimits

0x48e6,	// (0x000443a9) popup_touch_menu_window

0x299d,	// (0x00042460) bg_popup_sub_pane_cp6

0x73a3,	// (0x00046e66) list_touch_menu_pane

0x73ab,	// (0x00046e6e) list_single_touch_menu_pane_ParamLimits

0x73ab,	// (0x00046e6e) list_single_touch_menu_pane

0x73c6,	// (0x00046e89) list_single_touch_menu_pane_t1

0x2a91,	// (0x00042554) bg_popup_sub_pane_cp7_ParamLimits

0x2a91,	// (0x00042554) bg_popup_sub_pane_cp7

0x73d4,	// (0x00046e97) heading_sub_pane

0x73dc,	// (0x00046e9f) list_touch_info_pane_ParamLimits

0x73dc,	// (0x00046e9f) list_touch_info_pane

0x73eb,	// (0x00046eae) list_single_touch_info_pane_ParamLimits

0x73eb,	// (0x00046eae) list_single_touch_info_pane

0x73fd,	// (0x00046ec0) list_single_touch_info_pane_t1

0x740b,	// (0x00046ece) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0004f5f7) list_single_touch_info_pane_t

0x3f76,	// (0x00043a39) bg_popup_heading_pane_cp

0x7419,	// (0x00046edc) heading_sub_pane_t1

0x4f2e,	// (0x000449f1) bg_popup_preview_window_pane_cp_ParamLimits

0x4f2e,	// (0x000449f1) bg_popup_preview_window_pane_cp

0x73d4,	// (0x00046e97) heading_preview_pane

0x73dc,	// (0x00046e9f) list_preview_pane_ParamLimits

0x73dc,	// (0x00046e9f) list_preview_pane

0x7427,	// (0x00046eea) popup_preview_window_g1

0x73eb,	// (0x00046eae) list_single_preview_pane_ParamLimits

0x73eb,	// (0x00046eae) list_single_preview_pane

0x742f,	// (0x00046ef2) list_single_preview_pane_g1

0x7437,	// (0x00046efa) list_single_preview_pane_t1

0x73fd,	// (0x00046ec0) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0004f5fc) list_single_preview_pane_t

0x7445,	// (0x00046f08) bg_popup_heading_pane_cp2_ParamLimits

0x7445,	// (0x00046f08) bg_popup_heading_pane_cp2

0x745b,	// (0x00046f1e) heading_preview_pane_g1

0x7463,	// (0x00046f26) heading_preview_pane_t1_ParamLimits

0x7463,	// (0x00046f26) heading_preview_pane_t1

0x2b80,	// (0x00042643) soft_indicator_pane_t1_ParamLimits

0x328b,	// (0x00042d4e) scroll_pane_ParamLimits

0x37bc,	// (0x0004327f) scroll_sc2_left_pane

0x37c5,	// (0x00043288) scroll_sc2_right_pane

0x37e4,	// (0x000432a7) scroll_bg_pane_g1_ParamLimits

0x37f9,	// (0x000432bc) scroll_bg_pane_g2_ParamLimits

0x3811,	// (0x000432d4) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004f1ef) scroll_bg_pane_g_ParamLimits

0x37e4,	// (0x000432a7) scroll_handle_pane_g1_ParamLimits

0x3833,	// (0x000432f6) scroll_handle_pane_g2_ParamLimits

0x3811,	// (0x000432d4) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004f1f6) scroll_handle_pane_g_ParamLimits

0x4328,	// (0x00043deb) popup_choice_list_window_ParamLimits

0x4328,	// (0x00043deb) popup_choice_list_window

0x4d86,	// (0x00044849) choice_list_pane

0x4e08,	// (0x000448cb) cell_toolbar_pane_t1

0x4e30,	// (0x000448f3) toolbar_button_pane_ParamLimits

0x5f0a,	// (0x000459cd) ai_gene_pane_1_t2_ParamLimits

0x5f0a,	// (0x000459cd) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0004f40e) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0004f40e) ai_gene_pane_1_t

0x7480,	// (0x00046f43) scroll_sc2_left_pane_g1

0x7480,	// (0x00046f43) scroll_sc2_right_pane_g1

0x4300,	// (0x00043dc3) bg_popup_sub_pane_cp10

0x748a,	// (0x00046f4d) list_choice_list_pane

0x74a1,	// (0x00046f64) list_single_choice_list_pane_ParamLimits

0x74a1,	// (0x00046f64) list_single_choice_list_pane

0x74b5,	// (0x00046f78) list_single_choice_list_pane_g1

0x74bd,	// (0x00046f80) list_single_choice_list_pane_t1_ParamLimits

0x74bd,	// (0x00046f80) list_single_choice_list_pane_t1

0x74d2,	// (0x00046f95) choice_list_pane_g1

0x74da,	// (0x00046f9d) choice_list_pane_t1

0x299d,	// (0x00042460) input_focus_pane_cp11

0x3696,	// (0x00043159) title_pane_stacon_g2_ParamLimits

0x3696,	// (0x00043159) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004f1d5) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004f1d5) title_pane_stacon_g

0x3f76,	// (0x00043a39) cursor_press_pane

0xcbde,	// (0x0004c6a1) popup_fep_hwr_window_ParamLimits

0xcbde,	// (0x0004c6a1) popup_fep_hwr_window

0x4468,	// (0x00043f2b) popup_fep_vkb_window_ParamLimits

0x4468,	// (0x00043f2b) popup_fep_vkb_window

0x74e8,	// (0x00046fab) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0004f625) fep_vkb_side_pane_g_ParamLimits

0x1ce2,	// (0x000417a5) fep_hwr_candidate_pane_ParamLimits

0x1ce2,	// (0x000417a5) fep_hwr_candidate_pane

0x1d0c,	// (0x000417cf) fep_hwr_side_pane_ParamLimits

0x1d0c,	// (0x000417cf) fep_hwr_side_pane

0x1d2e,	// (0x000417f1) fep_hwr_top_pane_ParamLimits

0x1d2e,	// (0x000417f1) fep_hwr_top_pane

0x1d46,	// (0x00041809) fep_hwr_write_pane_ParamLimits

0x1d46,	// (0x00041809) fep_hwr_write_pane

0xfb62,	// (0x0004f625) fep_vkb_side_pane_g

0x74fe,	// (0x00046fc1) fep_hwr_top_pane_g1

0x7510,	// (0x00046fd3) fep_hwr_top_pane_g2

0x1d72,	// (0x00041835) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0004f601) fep_hwr_top_pane_g

0x1d87,	// (0x0004184a) fep_hwr_top_text_pane

0x3988,	// (0x0004344b) fep_hwr_top_text_pane_g1

0x7546,	// (0x00047009) fep_hwr_top_text_pane_t1

0x1e91,	// (0x00041954) fep_hwr_candidate_pane_g1

0x7791,	// (0x00047254) fep_vkb_keypad_pane_g3_ParamLimits

0x7791,	// (0x00047254) fep_vkb_keypad_pane_g3

0x77bd,	// (0x00047280) fep_vkb_keypad_pane_g4_ParamLimits

0x77bd,	// (0x00047280) fep_vkb_keypad_pane_g4

0x7834,	// (0x000472f7) fep_vkb_bottom_pane_g2_ParamLimits

0x7834,	// (0x000472f7) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0004f62c) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0004f62c) fep_vkb_bottom_pane_g

0x7480,	// (0x00046f43) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0004f636) cell_vkb_side_pane_g

0x78bf,	// (0x00047382) cell_vkb_side_pane_t1

0x78cd,	// (0x00047390) cell_vkb_side_pane_t1_copy1

0x7480,	// (0x00046f43) bg_fep_vkb_candidate_pane_g2

0x7a11,	// (0x000474d4) cell_vkb_candidate_pane_ParamLimits

0x7554,	// (0x00047017) aid_size_cell_vkb_ParamLimits

0x7554,	// (0x00047017) aid_size_cell_vkb

0x7a11,	// (0x000474d4) cell_vkb_candidate_pane

0x1eab,	// (0x0004196e) bg_popup_fep_shadow_pane_g1

0xde46,	// (0x0004d909) fep_vkb_bottom_pane_ParamLimits

0xde46,	// (0x0004d909) fep_vkb_bottom_pane

0x7623,	// (0x000470e6) fep_vkb_candidate_pane_ParamLimits

0x7623,	// (0x000470e6) fep_vkb_candidate_pane

0xde72,	// (0x0004d935) fep_vkb_keypad_pane_ParamLimits

0xde72,	// (0x0004d935) fep_vkb_keypad_pane

0xde99,	// (0x0004d95c) fep_vkb_side_pane_ParamLimits

0xde99,	// (0x0004d95c) fep_vkb_side_pane

0xded5,	// (0x0004d998) fep_vkb_top_pane_ParamLimits

0xded5,	// (0x0004d998) fep_vkb_top_pane

0x76ea,	// (0x000471ad) fep_vkb_top_pane_g1_ParamLimits

0x76ea,	// (0x000471ad) fep_vkb_top_pane_g1

0x76f9,	// (0x000471bc) fep_vkb_top_pane_g2_ParamLimits

0x76f9,	// (0x000471bc) fep_vkb_top_pane_g2

0x7708,	// (0x000471cb) fep_vkb_top_pane_g3_ParamLimits

0x7708,	// (0x000471cb) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0004f61c) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0004f61c) fep_vkb_top_pane_g

0x7726,	// (0x000471e9) fep_vkb_top_text_pane_ParamLimits

0x7726,	// (0x000471e9) fep_vkb_top_text_pane

0xdf11,	// (0x0004d9d4) fep_vkb_side_pane_g1_ParamLimits

0xdf11,	// (0x0004d9d4) fep_vkb_side_pane_g1

0x7780,	// (0x00047243) grid_vkb_side_pane_ParamLimits

0x7780,	// (0x00047243) grid_vkb_side_pane

0x1eb3,	// (0x00041976) bg_popup_fep_shadow_pane_g2

0x1ebc,	// (0x0004197f) bg_popup_fep_shadow_pane_g3

0x1ec4,	// (0x00041987) bg_popup_fep_shadow_pane_g4

0x1ecd,	// (0x00041990) bg_popup_fep_shadow_pane_g5

0x1ed7,	// (0x0004199a) bg_popup_fep_shadow_pane_g6

0x1edf,	// (0x000419a2) bg_popup_fep_shadow_pane_g7

0x339f,	// (0x00042e62) bg_popup_fep_shadow_pane_g8

0x77df,	// (0x000472a2) grid_vkb_keypad_number_pane_ParamLimits

0x77df,	// (0x000472a2) grid_vkb_keypad_number_pane

0x77f3,	// (0x000472b6) grid_vkb_keypad_pane_ParamLimits

0x77f3,	// (0x000472b6) grid_vkb_keypad_pane

0x7819,	// (0x000472dc) fep_vkb_bottom_pane_g1_ParamLimits

0x7819,	// (0x000472dc) fep_vkb_bottom_pane_g1

0x7842,	// (0x00047305) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7842,	// (0x00047305) grid_vkb_keypad_bottom_left_pane

0x7857,	// (0x0004731a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7857,	// (0x0004731a) grid_vkb_keypad_bottom_right_pane

0x786c,	// (0x0004732f) fep_vkb_top_text_pane_g1

0xdf58,	// (0x0004da1b) fep_vkb_top_text_pane_t1

0xdf6a,	// (0x0004da2d) cell_vkb_side_pane_ParamLimits

0xdf6a,	// (0x0004da2d) cell_vkb_side_pane

0x7480,	// (0x00046f43) cell_vkb_side_pane_g1

0x78db,	// (0x0004739e) cell_vkb_keypad_pane_ParamLimits

0x78db,	// (0x0004739e) cell_vkb_keypad_pane

0x7968,	// (0x0004742b) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0004f649) bg_popup_fep_shadow_pane_g

0x7480,	// (0x00046f43) cell_hwr_side_pane_g1

0x7480,	// (0x00046f43) cell_hwr_side_pane_g2

0x7972,	// (0x00047435) cell_vkb_keypad_pane_t1

0xdf80,	// (0x0004da43) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf80,	// (0x0004da43) cell_vkb_keypad_bottom_left_pane

0xdf95,	// (0x0004da58) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf95,	// (0x0004da58) cell_vkb_keypad_bottom_right_pane

0x7480,	// (0x00046f43) cell_vkb_keypad_bottom_left_pane_g1

0x7480,	// (0x00046f43) cell_vkb_keypad_bottom_right_pane_g1

0x79d6,	// (0x00047499) cell_vkb_keypad_number_pane_ParamLimits

0x79d6,	// (0x00047499) cell_vkb_keypad_number_pane

0x79f5,	// (0x000474b8) cell_vkb_keypad_number_pane_g1

0x79ff,	// (0x000474c2) cell_vkb_keypad_number_pane_g2

0x7a08,	// (0x000474cb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0004f63b) cell_vkb_keypad_number_pane_g

0x7972,	// (0x00047435) cell_vkb_keypad_number_pane_t1

0x7a32,	// (0x000474f5) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x0004f636) cell_hwr_side_pane_g

0x7a4b,	// (0x0004750e) cell_hwr_side_pane_t1

0x1ef1,	// (0x000419b4) cell_hwr_side_pane_t1_copy1

0x7718,	// (0x000471db) cell_hwr_candidate_pane_g1

0x1eff,	// (0x000419c2) cell_hwr_candidate_pane_t1

0x7480,	// (0x00046f43) cell_vkb_candidate_pane_g2

0x7ad1,	// (0x00047594) cell_vkb_candidate_pane_t1

0x74f0,	// (0x00046fb3) bg_popup_fep_shadow_pane_ParamLimits

0x74f0,	// (0x00046fb3) bg_popup_fep_shadow_pane

0xde0c,	// (0x0004d8cf) bg_fep_hwr_top_pane_g4

0x7522,	// (0x00046fe5) bg_hwr_side_pane_g1_ParamLimits

0x7522,	// (0x00046fe5) bg_hwr_side_pane_g1

0xc181,	// (0x0004bc44) cell_hwr_side_pane_ParamLimits

0xc181,	// (0x0004bc44) cell_hwr_side_pane

0x1e02,	// (0x000418c5) fep_hwr_write_pane_g1_ParamLimits

0x1e02,	// (0x000418c5) fep_hwr_write_pane_g1

0x1e0f,	// (0x000418d2) fep_hwr_write_pane_g2_ParamLimits

0x1e0f,	// (0x000418d2) fep_hwr_write_pane_g2

0x1e1c,	// (0x000418df) fep_hwr_write_pane_g3_ParamLimits

0x1e1c,	// (0x000418df) fep_hwr_write_pane_g3

0xc1a1,	// (0x0004bc64) fep_hwr_write_pane_g4_ParamLimits

0xc1a1,	// (0x0004bc64) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0004f608) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0004f608) fep_hwr_write_pane_g

0xde0c,	// (0x0004d8cf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xde0c,	// (0x0004d8cf) bg_fep_hwr_candidate_pane_g2

0x1e3f,	// (0x00041902) cell_hwr_candidate_pane_ParamLimits

0x1e3f,	// (0x00041902) cell_hwr_candidate_pane

0x1e91,	// (0x00041954) fep_hwr_candidate_pane_g1_ParamLimits

0x7582,	// (0x00047045) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7582,	// (0x00047045) bg_popup_fep_shadow_pane_cp2

0x7718,	// (0x000471db) fep_vkb_top_pane_g4_ParamLimits

0x7718,	// (0x000471db) fep_vkb_top_pane_g4

0x775e,	// (0x00047221) fep_vkb_side_pane_g2_ParamLimits

0x775e,	// (0x00047221) fep_vkb_side_pane_g2

0xb4c2,	// (0x0004af85) list_setting_pane_t4_ParamLimits

0xb4c2,	// (0x0004af85) list_setting_pane_t4

0xb55e,	// (0x0004b021) list_setting_number_pane_t5_ParamLimits

0xb55e,	// (0x0004b021) list_setting_number_pane_t5

0x39ba,	// (0x0004347d) list_double_heading_pane_cp2_ParamLimits

0x39ba,	// (0x0004347d) list_double_heading_pane_cp2

0x3332,	// (0x00042df5) list_double_heading_pane_g1_cp2_ParamLimits

0x3332,	// (0x00042df5) list_double_heading_pane_g1_cp2

0x333e,	// (0x00042e01) list_double_heading_pane_g2_cp2_ParamLimits

0x333e,	// (0x00042e01) list_double_heading_pane_g2_cp2

0x7adf,	// (0x000475a2) list_double_heading_pane_t1_cp2_ParamLimits

0x7adf,	// (0x000475a2) list_double_heading_pane_t1_cp2

0x7af5,	// (0x000475b8) list_double_heading_pane_t2_cp2_ParamLimits

0x7af5,	// (0x000475b8) list_double_heading_pane_t2_cp2

0x2985,	// (0x00042448) aid_value_unit2

0x0f6b,	// (0x00040a2e) popup_preview_fixed_window

0x2d1b,	// (0x000427de) bg_popup_preview_window_pane_cp02

0x7b07,	// (0x000475ca) list_preview_fixed_pane

0x7b4d,	// (0x00047610) list_empty_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_empty_pane_fp

0x7b4d,	// (0x00047610) list_single_cale_day_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_cale_day_pane_fp

0x7b4d,	// (0x00047610) list_single_graphic_heading_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_graphic_heading_pane_fp

0x7b4d,	// (0x00047610) list_single_graphic_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_graphic_pane_fp

0x7b4d,	// (0x00047610) list_single_heading_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_heading_pane_fp

0x7b4d,	// (0x00047610) list_single_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_pane_fp

0x7b66,	// (0x00047629) list_single_pane_fp_g1_ParamLimits

0x7b66,	// (0x00047629) list_single_pane_fp_g1

0x1186,	// (0x00040c49) list_single_pane_fp_g2_ParamLimits

0x1186,	// (0x00040c49) list_single_pane_fp_g2

0x1f1d,	// (0x000419e0) list_single_pane_fp_g3_ParamLimits

0x1f1d,	// (0x000419e0) list_single_pane_fp_g3

0x7b72,	// (0x00047635) list_single_pane_fp_g4_ParamLimits

0x7b72,	// (0x00047635) list_single_pane_fp_g4

0x0003,

0xfba7,	// (0x0004f66a) list_single_pane_fp_g_ParamLimits

0xfba7,	// (0x0004f66a) list_single_pane_fp_g

0x0a13,	// (0x000404d6) list_single_pane_fp_t1_ParamLimits

0x0a13,	// (0x000404d6) list_single_pane_fp_t1

0x0a2a,	// (0x000404ed) list_single_graphic_pane_fp_g1_ParamLimits

0x0a2a,	// (0x000404ed) list_single_graphic_pane_fp_g1

0x7b66,	// (0x00047629) list_single_graphic_pane_fp_g2_ParamLimits

0x7b66,	// (0x00047629) list_single_graphic_pane_fp_g2

0x1186,	// (0x00040c49) list_single_graphic_pane_fp_g3_ParamLimits

0x1186,	// (0x00040c49) list_single_graphic_pane_fp_g3

0x1f1d,	// (0x000419e0) list_single_graphic_pane_fp_g4_ParamLimits

0x1f1d,	// (0x000419e0) list_single_graphic_pane_fp_g4

0x7b72,	// (0x00047635) list_single_graphic_pane_fp_g5_ParamLimits

0x7b72,	// (0x00047635) list_single_graphic_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f673) list_single_graphic_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f673) list_single_graphic_pane_fp_g

0x0a36,	// (0x000404f9) list_single_graphic_pane_fp_t1_ParamLimits

0x0a36,	// (0x000404f9) list_single_graphic_pane_fp_t1

0x0a2a,	// (0x000404ed) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0a2a,	// (0x000404ed) list_single_graphic_heading_pane_fp_g1

0x7b66,	// (0x00047629) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b66,	// (0x00047629) list_single_graphic_heading_pane_fp_g2

0x1186,	// (0x00040c49) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1186,	// (0x00040c49) list_single_graphic_heading_pane_fp_g3

0x1f1d,	// (0x000419e0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1f1d,	// (0x000419e0) list_single_graphic_heading_pane_fp_g4

0x7b72,	// (0x00047635) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b72,	// (0x00047635) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f673) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f673) list_single_graphic_heading_pane_fp_g

0x0a4c,	// (0x0004050f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0a4c,	// (0x0004050f) list_single_graphic_heading_pane_fp_t1

0x0a62,	// (0x00040525) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0a62,	// (0x00040525) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbb,	// (0x0004f67e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbb,	// (0x0004f67e) list_single_graphic_heading_pane_fp_t

0x0a74,	// (0x00040537) list_single_cale_day_pane_fp_g1_ParamLimits

0x0a74,	// (0x00040537) list_single_cale_day_pane_fp_g1

0x7b7e,	// (0x00047641) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b7e,	// (0x00047641) list_single_cale_day_pane_fp_g2

0x1f31,	// (0x000419f4) list_single_cale_day_pane_fp_g3_ParamLimits

0x1f31,	// (0x000419f4) list_single_cale_day_pane_fp_g3

0x1f59,	// (0x00041a1c) list_single_cale_day_pane_fp_g4_ParamLimits

0x1f59,	// (0x00041a1c) list_single_cale_day_pane_fp_g4

0x1f7d,	// (0x00041a40) list_single_cale_day_pane_fp_g5_ParamLimits

0x1f7d,	// (0x00041a40) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc0,	// (0x0004f683) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc0,	// (0x0004f683) list_single_cale_day_pane_fp_g

0x0aac,	// (0x0004056f) list_single_cale_day_pane_fp_t1_ParamLimits

0x0aac,	// (0x0004056f) list_single_cale_day_pane_fp_t1

0x0ad2,	// (0x00040595) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ad2,	// (0x00040595) list_single_cale_day_pane_fp_t2

0x0aeb,	// (0x000405ae) list_single_cale_day_pane_fp_t3_ParamLimits

0x0aeb,	// (0x000405ae) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcb,	// (0x0004f68e) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcb,	// (0x0004f68e) list_single_cale_day_pane_fp_t

0x7b66,	// (0x00047629) list_empty_pane_fp_g1_ParamLimits

0x7b66,	// (0x00047629) list_empty_pane_fp_g1

0x0b04,	// (0x000405c7) list_empty_pane_fp_t1

0x0b12,	// (0x000405d5) list_empty_pane_fp_t2

0x0001,

0xfbd2,	// (0x0004f695) list_empty_pane_fp_t

0x7b66,	// (0x00047629) list_single_heading_pane_fp_g1_ParamLimits

0x7b66,	// (0x00047629) list_single_heading_pane_fp_g1

0x1186,	// (0x00040c49) list_single_heading_pane_fp_g2_ParamLimits

0x1186,	// (0x00040c49) list_single_heading_pane_fp_g2

0x1f1d,	// (0x000419e0) list_single_heading_pane_fp_g3_ParamLimits

0x1f1d,	// (0x000419e0) list_single_heading_pane_fp_g3

0x0002,

0xfbd7,	// (0x0004f69a) list_single_heading_pane_fp_g_ParamLimits

0xfbd7,	// (0x0004f69a) list_single_heading_pane_fp_g

0x0b20,	// (0x000405e3) list_single_heading_pane_fp_t1_ParamLimits

0x0b20,	// (0x000405e3) list_single_heading_pane_fp_t1

0x0b32,	// (0x000405f5) list_single_heading_pane_fp_t2_ParamLimits

0x0b32,	// (0x000405f5) list_single_heading_pane_fp_t2

0x0001,

0xfbde,	// (0x0004f6a1) list_single_heading_pane_fp_t_ParamLimits

0xfbde,	// (0x0004f6a1) list_single_heading_pane_fp_t

0x352d,	// (0x00042ff0) aid_size_cell_fast

0x2c8d,	// (0x00042750) soft_indicator_pane_cp1_t1

0x356a,	// (0x0004302d) cell_app_pane_cp2_ParamLimits

0x356a,	// (0x0004302d) cell_app_pane_cp2

0x1ccb,	// (0x0004178e) fep_hwr_candidate_drop_down_list_pane

0xde1a,	// (0x0004d8dd) fep_hwr_candidate_pane_g3_ParamLimits

0xde1a,	// (0x0004d8dd) fep_hwr_candidate_pane_g3

0xde27,	// (0x0004d8ea) fep_hwr_candidate_pane_g4_ParamLimits

0xde27,	// (0x0004d8ea) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0004f615) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0004f615) fep_hwr_candidate_pane_g

0x7612,	// (0x000470d5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7612,	// (0x000470d5) fep_vkb_candidate_drop_down_list_pane

0x7a3a,	// (0x000474fd) fep_vkb_candidate_pane_g3

0x7a42,	// (0x00047505) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0004f642) fep_vkb_candidate_pane_g

0x7718,	// (0x000471db) cell_hwr_candidate_pane_g1_ParamLimits

0x7a59,	// (0x0004751c) cell_hwr_candidate_pane_g3_ParamLimits

0x7a59,	// (0x0004751c) cell_hwr_candidate_pane_g3

0x7a7a,	// (0x0004753d) cell_hwr_candidate_pane_g4_ParamLimits

0x7a7a,	// (0x0004753d) cell_hwr_candidate_pane_g4

0x0002,

0xfb99,	// (0x0004f65c) cell_hwr_candidate_pane_g_ParamLimits

0xfb99,	// (0x0004f65c) cell_hwr_candidate_pane_g

0x7a9b,	// (0x0004755e) cell_vkb_candidate_pane_g3_ParamLimits

0x7a9b,	// (0x0004755e) cell_vkb_candidate_pane_g3

0x7ab6,	// (0x00047579) cell_vkb_candidate_pane_g4_ParamLimits

0x7ab6,	// (0x00047579) cell_vkb_candidate_pane_g4

0x7b8a,	// (0x0004764d) cell_app_pane_cp2_g1_ParamLimits

0x7b8a,	// (0x0004764d) cell_app_pane_cp2_g1

0x7ba8,	// (0x0004766b) cell_app_pane_cp2_g2_ParamLimits

0x7ba8,	// (0x0004766b) cell_app_pane_cp2_g2

0x0001,

0xfbe3,	// (0x0004f6a6) cell_app_pane_cp2_g_ParamLimits

0xfbe3,	// (0x0004f6a6) cell_app_pane_cp2_g

0x7bb4,	// (0x00047677) cell_app_pane_cp2_t1_ParamLimits

0x7bb4,	// (0x00047677) cell_app_pane_cp2_t1

0x3318,	// (0x00042ddb) grid_highlight_pane_cp1_ParamLimits

0x3318,	// (0x00042ddb) grid_highlight_pane_cp1

0x1fa1,	// (0x00041a64) cell_hwr_candidate_pane_cp1_ParamLimits

0x1fa1,	// (0x00041a64) cell_hwr_candidate_pane_cp1

0x7718,	// (0x000471db) fep_hwr_candidate_drop_down_list_pane_g1

0x7bc6,	// (0x00047689) fep_hwr_candidate_drop_down_list_pane_g2

0x7bd3,	// (0x00047696) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0004f6ab) fep_hwr_candidate_drop_down_list_pane_g

0x1fc5,	// (0x00041a88) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fce,	// (0x00041a91) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fce,	// (0x00041a91) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1fdb,	// (0x00041a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1fdb,	// (0x00041a9e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1fe8,	// (0x00041aab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1fe8,	// (0x00041aab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7a9b,	// (0x0004755e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a9b,	// (0x0004755e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ab6,	// (0x00047579) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ab6,	// (0x00047579) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ff5,	// (0x00041ab8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ff5,	// (0x00041ab8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2010,	// (0x00041ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2010,	// (0x00041ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x202b,	// (0x00041aee) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x202b,	// (0x00041aee) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0004f6b2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0004f6b2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7be0,	// (0x000476a3) cell_vkb_candidate_pane_cp1_ParamLimits

0x7be0,	// (0x000476a3) cell_vkb_candidate_pane_cp1

0x7718,	// (0x000471db) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7718,	// (0x000471db) fep_vkb_candidate_drop_down_list_pane_g1

0x7bc6,	// (0x00047689) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7bc6,	// (0x00047689) fep_vkb_candidate_drop_down_list_pane_g2

0x7bd3,	// (0x00047696) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7bd3,	// (0x00047696) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x0004f6ab) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x0004f6ab) fep_vkb_candidate_drop_down_list_pane_g

0x7c06,	// (0x000476c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c06,	// (0x000476c9) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c13,	// (0x000476d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c13,	// (0x000476d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c20,	// (0x000476e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c20,	// (0x000476e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c2c,	// (0x000476ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c2c,	// (0x000476ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a59,	// (0x0004751c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a59,	// (0x0004751c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a7a,	// (0x0004753d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a7a,	// (0x0004753d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c38,	// (0x000476fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c38,	// (0x000476fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c59,	// (0x0004771c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c59,	// (0x0004771c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c7a,	// (0x0004773d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c7a,	// (0x0004773d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc00,	// (0x0004f6c3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc00,	// (0x0004f6c3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbb02,	// (0x0004b5c5) title_pane_g1_ParamLimits

0xbb13,	// (0x0004b5d6) title_pane_g2_ParamLimits

0xf592,	// (0x0004f055) title_pane_g_ParamLimits

0x3978,	// (0x0004343b) aid_call2_pane

0x3980,	// (0x00043443) aid_call_pane

0x3988,	// (0x0004344b) popup_clock_analogue_window_g1

0x3988,	// (0x0004344b) popup_clock_analogue_window_g2

0x1386,	// (0x00040e49) popup_clock_analogue_window_g3

0x138f,	// (0x00040e52) popup_clock_analogue_window_g4

0x29a7,	// (0x0004246a) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004f204) popup_clock_analogue_window_g

0x1397,	// (0x00040e5a) popup_clock_analogue_window_t1

0x13a5,	// (0x00040e68) clock_digital_number_pane_ParamLimits

0x13a5,	// (0x00040e68) clock_digital_number_pane

0x13b1,	// (0x00040e74) clock_digital_number_pane_cp02_ParamLimits

0x13b1,	// (0x00040e74) clock_digital_number_pane_cp02

0x13bd,	// (0x00040e80) clock_digital_number_pane_cp03_ParamLimits

0x13bd,	// (0x00040e80) clock_digital_number_pane_cp03

0x13c9,	// (0x00040e8c) clock_digital_number_pane_cp04_ParamLimits

0x13c9,	// (0x00040e8c) clock_digital_number_pane_cp04

0x13d5,	// (0x00040e98) clock_digital_separator_pane_ParamLimits

0x13d5,	// (0x00040e98) clock_digital_separator_pane

0x13e1,	// (0x00040ea4) popup_clock_digital_window_t1_ParamLimits

0x13e1,	// (0x00040ea4) popup_clock_digital_window_t1

0x29a7,	// (0x0004246a) clock_digital_number_pane_g1

0x29a7,	// (0x0004246a) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004f20f) clock_digital_number_pane_g

0x29a7,	// (0x0004246a) clock_digital_separator_pane_g1

0x29a7,	// (0x0004246a) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004f20f) clock_digital_separator_pane_g

0xd245,	// (0x0004cd08) aid_fill_nsta_ParamLimits

0xd376,	// (0x0004ce39) indicator_nsta_pane_ParamLimits

0x4c13,	// (0x000446d6) popup_clock_analogue_window

0x4c13,	// (0x000446d6) popup_clock_digital_window

0x34ee,	// (0x00042fb1) grid_indicator_nsta_pane_ParamLimits

0x6ed7,	// (0x0004699a) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0004f5a2) clock_nsta_pane_t

0x134a,	// (0x00040e0d) aid_size_max_handle

0xbdee,	// (0x0004b8b1) aid_size_min_handle

0x3f76,	// (0x00043a39) editor_scroll_pane

0x7c95,	// (0x00047758) ex_editor_pane

0x349a,	// (0x00042f5d) scroll_pane_cp13

0x32b7,	// (0x00042d7a) scroll_pane_cp14

0x39b2,	// (0x00043475) scroll_pane_cp36

0xc94e,	// (0x0004c411) list_single_graphic_hl_pane_cp2_ParamLimits

0xc94e,	// (0x0004c411) list_single_graphic_hl_pane_cp2

0xdacb,	// (0x0004d58e) list_single_graphic_hl_pane_ParamLimits

0xdacb,	// (0x0004d58e) list_single_graphic_hl_pane

0x0b48,	// (0x0004060b) aid_size_min_hl_cp1

0x7c9d,	// (0x00047760) list_highlight_pane_cp34_ParamLimits

0x7c9d,	// (0x00047760) list_highlight_pane_cp34

0x7cae,	// (0x00047771) list_single_graphic_hl_pane_g1_ParamLimits

0x7cae,	// (0x00047771) list_single_graphic_hl_pane_g1

0xb806,	// (0x0004b2c9) list_single_graphic_hl_pane_g2_ParamLimits

0xb806,	// (0x0004b2c9) list_single_graphic_hl_pane_g2

0xb806,	// (0x0004b2c9) list_single_graphic_hl_pane_g3_ParamLimits

0xb806,	// (0x0004b2c9) list_single_graphic_hl_pane_g3

0x42b2,	// (0x00043d75) list_single_graphic_hl_pane_g4_ParamLimits

0x42b2,	// (0x00043d75) list_single_graphic_hl_pane_g4

0x7ceb,	// (0x000477ae) list_single_graphic_hl_pane_g5_ParamLimits

0x7ceb,	// (0x000477ae) list_single_graphic_hl_pane_g5

0x0004,

0xfc11,	// (0x0004f6d4) list_single_graphic_hl_pane_g_ParamLimits

0xfc11,	// (0x0004f6d4) list_single_graphic_hl_pane_g

0xf57c,	// (0x0004f03f) list_single_graphic_hl_pane_t1_ParamLimits

0xf57c,	// (0x0004f03f) list_single_graphic_hl_pane_t1

0x7cbb,	// (0x0004777e) aid_size_min_hl_cp2

0x7cc4,	// (0x00047787) list_highlight_pane_cp34_cp2_ParamLimits

0x7cc4,	// (0x00047787) list_highlight_pane_cp34_cp2

0x7cae,	// (0x00047771) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7cae,	// (0x00047771) list_single_graphic_hl_pane_g1_cp2

0x7cd1,	// (0x00047794) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cd1,	// (0x00047794) list_single_graphic_hl_pane_g2_cp2

0x7cdd,	// (0x000477a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7cdd,	// (0x000477a0) list_single_graphic_hl_pane_g3_cp2

0x42b2,	// (0x00043d75) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x42b2,	// (0x00043d75) list_single_graphic_hl_pane_g4_cp2

0x7ceb,	// (0x000477ae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ceb,	// (0x000477ae) list_single_graphic_hl_pane_g5_cp2

0xbe43,	// (0x0004b906) control_pane_g4_ParamLimits

0xbe43,	// (0x0004b906) control_pane_g4

0x4300,	// (0x00043dc3) bg_popup_sub_pane_cp10_ParamLimits

0x748a,	// (0x00046f4d) list_choice_list_pane_ParamLimits

0x7499,	// (0x00046f5c) scroll_pane_cp23

0x2d1b,	// (0x000427de) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b07,	// (0x000475ca) list_preview_fixed_pane_ParamLimits

0x7b1d,	// (0x000475e0) list_preview_fixed_pane_cp_ParamLimits

0x7b1d,	// (0x000475e0) list_preview_fixed_pane_cp

0x7b29,	// (0x000475ec) popup_preview_fixed_window_g1_ParamLimits

0x7b29,	// (0x000475ec) popup_preview_fixed_window_g1

0x7b35,	// (0x000475f8) popup_preview_fixed_window_g2_ParamLimits

0x7b35,	// (0x000475f8) popup_preview_fixed_window_g2

0x0002,

0xfba0,	// (0x0004f663) popup_preview_fixed_window_g_ParamLimits

0xfba0,	// (0x0004f663) popup_preview_fixed_window_g

0x12bc,	// (0x00040d7f) aid_navi_side_left_pane_ParamLimits

0x12d1,	// (0x00040d94) aid_navi_side_right_pane_ParamLimits

0x12e9,	// (0x00040dac) navi_icon_pane_stacon_ParamLimits

0x12fd,	// (0x00040dc0) navi_navi_pane_stacon_ParamLimits

0x12e9,	// (0x00040dac) navi_text_pane_stacon_ParamLimits

0x299d,	// (0x00042460) main_text_info_pane

0x7d15,	// (0x000477d8) listscroll_text_info_pane

0x7d1d,	// (0x000477e0) list_text_info_pane_ParamLimits

0x7d1d,	// (0x000477e0) list_text_info_pane

0x7d2c,	// (0x000477ef) scroll_pane_cp24_ParamLimits

0x7d2c,	// (0x000477ef) scroll_pane_cp24

0xdfb0,	// (0x0004da73) list_text_info_pane_t1_ParamLimits

0xdfb0,	// (0x0004da73) list_text_info_pane_t1

0xcb42,	// (0x0004c605) popup_fast_swap2_window_ParamLimits

0xcb42,	// (0x0004c605) popup_fast_swap2_window

0x7d6f,	// (0x00047832) aid_size_cell_fast2

0x299d,	// (0x00042460) bg_popup_window_pane_cp17

0x52c6,	// (0x00044d89) heading_pane_cp2

0x2f7b,	// (0x00042a3e) listscroll_fast2_pane

0x7d79,	// (0x0004783c) grid_fast2_pane

0x7d83,	// (0x00047846) listscroll_fast2_pane_g1

0x7d8d,	// (0x00047850) listscroll_fast2_pane_g2

0x0001,

0xfc1c,	// (0x0004f6df) listscroll_fast2_pane_g

0x349a,	// (0x00042f5d) scroll_pane_cp26

0x7d97,	// (0x0004785a) cell_fast2_pane_ParamLimits

0x7d97,	// (0x0004785a) cell_fast2_pane

0x7dae,	// (0x00047871) cell_fast2_pane_g1

0x7db7,	// (0x0004787a) cell_fast2_pane_g2

0x7dc0,	// (0x00047883) cell_fast2_pane_g3

0x0002,

0xfc21,	// (0x0004f6e4) cell_fast2_pane_g

0x3074,	// (0x00042b37) grid_highlight_pane_cp9

0x3089,	// (0x00042b4c) main_eswt_pane_ParamLimits

0x3089,	// (0x00042b4c) main_eswt_pane

0x7d41,	// (0x00047804) list_single_text_info_pane

0x7dc8,	// (0x0004788b) eswt_ctrl_button_pane

0x7dc8,	// (0x0004788b) eswt_ctrl_canvas_pane

0x7dd0,	// (0x00047893) eswt_ctrl_combo_pane

0x7dc8,	// (0x0004788b) eswt_ctrl_default_pane

0x7dc8,	// (0x0004788b) eswt_ctrl_label_pane

0x7dd8,	// (0x0004789b) eswt_ctrl_wait_pane

0x7de0,	// (0x000478a3) eswt_shell_pane

0x299d,	// (0x00042460) listscroll_eswt_app_pane

0x7e00,	// (0x000478c3) popup_eswt_tasktip_window_ParamLimits

0x7e00,	// (0x000478c3) popup_eswt_tasktip_window

0x4f2e,	// (0x000449f1) bg_popup_window_pane_cp18

0x7e11,	// (0x000478d4) eswt_control_pane_g1_ParamLimits

0x7e11,	// (0x000478d4) eswt_control_pane_g1

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_ParamLimits

0x7e1e,	// (0x000478e1) eswt_control_pane_g2

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_ParamLimits

0x7e2b,	// (0x000478ee) eswt_control_pane_g3

0x7e38,	// (0x000478fb) eswt_control_pane_g4_ParamLimits

0x7e38,	// (0x000478fb) eswt_control_pane_g4

0x0003,

0xfc28,	// (0x0004f6eb) eswt_control_pane_g_ParamLimits

0xfc28,	// (0x0004f6eb) eswt_control_pane_g

0x3318,	// (0x00042ddb) bg_button_pane_ParamLimits

0x3318,	// (0x00042ddb) bg_button_pane

0x3089,	// (0x00042b4c) common_borders_pane_copy2_ParamLimits

0x3089,	// (0x00042b4c) common_borders_pane_copy2

0x7e45,	// (0x00047908) control_button_pane_g1_ParamLimits

0x7e45,	// (0x00047908) control_button_pane_g1

0x7e51,	// (0x00047914) control_button_pane_g2_ParamLimits

0x7e51,	// (0x00047914) control_button_pane_g2

0x7e5d,	// (0x00047920) control_button_pane_g3_ParamLimits

0x7e5d,	// (0x00047920) control_button_pane_g3

0x0002,

0xfc31,	// (0x0004f6f4) control_button_pane_g_ParamLimits

0xfc31,	// (0x0004f6f4) control_button_pane_g

0x7e71,	// (0x00047934) control_button_pane_t1

0x7e7f,	// (0x00047942) control_button_pane_t2

0x0001,

0xfc38,	// (0x0004f6fb) control_button_pane_t

0x4e3c,	// (0x000448ff) bg_button_pane_g1

0x4e44,	// (0x00044907) bg_button_pane_g2

0x4e4c,	// (0x0004490f) bg_button_pane_g3

0x4e54,	// (0x00044917) bg_button_pane_g4

0x4e5c,	// (0x0004491f) bg_button_pane_g5

0x4e64,	// (0x00044927) bg_button_pane_g6

0x4e6c,	// (0x0004492f) bg_button_pane_g7

0x4e74,	// (0x00044937) bg_button_pane_g8

0x4e7c,	// (0x0004493f) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0004f362) bg_button_pane_g

0x7445,	// (0x00046f08) common_borders_pane_ParamLimits

0x7445,	// (0x00046f08) common_borders_pane

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy1_ParamLimits

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy1

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy1_ParamLimits

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy1

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy1_ParamLimits

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy1

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy1_ParamLimits

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy1

0x7480,	// (0x00046f43) bg_eswt_ctrl_canvas_pane_g1

0x7445,	// (0x00046f08) common_borders_pane_cp2_ParamLimits

0x7445,	// (0x00046f08) common_borders_pane_cp2

0x7445,	// (0x00046f08) common_borders_pane_cp3_ParamLimits

0x7445,	// (0x00046f08) common_borders_pane_cp3

0x7e8d,	// (0x00047950) separator_horizontal_pane

0x7e95,	// (0x00047958) separator_vertical_pane

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy2_ParamLimits

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy2

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy2_ParamLimits

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy2

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy2_ParamLimits

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy2

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy2_ParamLimits

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy2

0x299d,	// (0x00042460) common_borders_pane_cp4

0x7e9e,	// (0x00047961) separator_horizontal_pane_g1

0x7ea7,	// (0x0004796a) separator_horizontal_pane_g2

0x7eb0,	// (0x00047973) separator_horizontal_pane_g3

0x0002,

0xfc3d,	// (0x0004f700) separator_horizontal_pane_g

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy3_ParamLimits

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy3

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy3_ParamLimits

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy3

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy3_ParamLimits

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy3

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy3_ParamLimits

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy3

0x299d,	// (0x00042460) common_borders_pane_cp5

0x7eb9,	// (0x0004797c) separator_vertical_pane_g1

0x7ec2,	// (0x00047985) separator_vertical_pane_g2

0x7ecb,	// (0x0004798e) separator_vertical_pane_g3

0x0002,

0xfc44,	// (0x0004f707) separator_vertical_pane_g

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy4_ParamLimits

0x7e11,	// (0x000478d4) eswt_control_pane_g1_copy4

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy4_ParamLimits

0x7e1e,	// (0x000478e1) eswt_control_pane_g2_copy4

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy4_ParamLimits

0x7e2b,	// (0x000478ee) eswt_control_pane_g3_copy4

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy4_ParamLimits

0x7e38,	// (0x000478fb) eswt_control_pane_g4_copy4

0xdfd2,	// (0x0004da95) eswt_ctrl_combo_button_pane

0xdfda,	// (0x0004da9d) eswt_ctrl_input_pane

0xdfe2,	// (0x0004daa5) popup_choice_list_window_cp70

0xdfea,	// (0x0004daad) eswt_ctrl_input_pane_t1

0x299d,	// (0x00042460) input_focus_pane_cp70

0x7445,	// (0x00046f08) bg_button_pane_cp70_ParamLimits

0x7445,	// (0x00046f08) bg_button_pane_cp70

0xdff8,	// (0x0004dabb) eswt_ctrl_combo_button_pane_g1

0x7f02,	// (0x000479c5) wait_bar_pane_cp70

0x4f2e,	// (0x000449f1) bg_popup_window_pane_cp70_ParamLimits

0x4f2e,	// (0x000449f1) bg_popup_window_pane_cp70

0x7f0a,	// (0x000479cd) popup_eswt_tasktip_window_t1

0x7f20,	// (0x000479e3) wait_bar_pane_cp71_ParamLimits

0x7f20,	// (0x000479e3) wait_bar_pane_cp71

0x7f2c,	// (0x000479ef) grid_eswt_app_pane

0x37c5,	// (0x00043288) scroll_pane_cp70

0xe000,	// (0x0004dac3) cell_eswt_app_pane_ParamLimits

0xe000,	// (0x0004dac3) cell_eswt_app_pane

0xe032,	// (0x0004daf5) cell_eswt_app_pane_g1_ParamLimits

0xe032,	// (0x0004daf5) cell_eswt_app_pane_g1

0xe061,	// (0x0004db24) cell_eswt_app_pane_g2_ParamLimits

0xe061,	// (0x0004db24) cell_eswt_app_pane_g2

0x0001,

0xfc4b,	// (0x0004f70e) cell_eswt_app_pane_g_ParamLimits

0xfc4b,	// (0x0004f70e) cell_eswt_app_pane_g

0xe08a,	// (0x0004db4d) cell_eswt_app_pane_t1_ParamLimits

0xe08a,	// (0x0004db4d) cell_eswt_app_pane_t1

0x7ff1,	// (0x00047ab4) grid_highlight_pane_cp70_ParamLimits

0x7ff1,	// (0x00047ab4) grid_highlight_pane_cp70

0x638e,	// (0x00045e51) set_content_pane_g1

0x4226,	// (0x00043ce9) status_small_volume_pane

0x205a,	// (0x00041b1d) status_small_volume_pane_g1

0x2062,	// (0x00041b25) volume_small2_pane

0x206b,	// (0x00041b2e) volume_small2_pane_g1

0x2074,	// (0x00041b37) volume_small2_pane_g2

0x207d,	// (0x00041b40) volume_small2_pane_g3

0x2086,	// (0x00041b49) volume_small2_pane_g4

0x208f,	// (0x00041b52) volume_small2_pane_g5

0x2098,	// (0x00041b5b) volume_small2_pane_g6

0x20a1,	// (0x00041b64) volume_small2_pane_g7

0x20aa,	// (0x00041b6d) volume_small2_pane_g8

0x20b3,	// (0x00041b76) volume_small2_pane_g9

0x20bc,	// (0x00041b7f) volume_small2_pane_g10

0x0009,

0xfc50,	// (0x0004f713) volume_small2_pane_g

0x786c,	// (0x0004732f) fep_vkb_top_text_pane_g1_ParamLimits

0xdf58,	// (0x0004da1b) fep_vkb_top_text_pane_t1_ParamLimits

0x7b41,	// (0x00047604) popup_preview_fixed_window_g3_ParamLimits

0x7b41,	// (0x00047604) popup_preview_fixed_window_g3

0xd1d8,	// (0x0004cc9b) popup_toolbar_trans_pane

0xd91b,	// (0x0004d3de) aid_height_set_list_ParamLimits

0x6244,	// (0x00045d07) aid_size_parent_ParamLimits

0x4300,	// (0x00043dc3) list_highlight_pane_cp2_ParamLimits

0x638e,	// (0x00045e51) set_content_pane_g1_ParamLimits

0xc158,	// (0x0004bc1b) list_single_image_pane_ParamLimits

0xc158,	// (0x0004bc1b) list_single_image_pane

0xe0bc,	// (0x0004db7f) aid_size_cell_image_ParamLimits

0xe0bc,	// (0x0004db7f) aid_size_cell_image

0xe0c9,	// (0x0004db8c) grid_single_image_pane_ParamLimits

0xe0c9,	// (0x0004db8c) grid_single_image_pane

0x3332,	// (0x00042df5) list_single_image_pane_g1_ParamLimits

0x3332,	// (0x00042df5) list_single_image_pane_g1

0x333e,	// (0x00042e01) list_single_image_pane_g2_ParamLimits

0x333e,	// (0x00042e01) list_single_image_pane_g2

0x0001,

0xfc65,	// (0x0004f728) list_single_image_pane_g_ParamLimits

0xfc65,	// (0x0004f728) list_single_image_pane_g

0x8018,	// (0x00047adb) list_single_image_pane_t1_ParamLimits

0x8018,	// (0x00047adb) list_single_image_pane_t1

0xe0d7,	// (0x0004db9a) cell_image_list_pane_ParamLimits

0xe0d7,	// (0x0004db9a) cell_image_list_pane

0xe0f1,	// (0x0004dbb4) cell_image_list_pane_g1

0xe0fa,	// (0x0004dbbd) cell_image_list_pane_g2

0x0001,

0xfc6a,	// (0x0004f72d) cell_image_list_pane_g

0x8056,	// (0x00047b19) aid_size_cell_tb_trans_pane

0x3318,	// (0x00042ddb) bg_tb_trans_pane

0x8068,	// (0x00047b2b) grid_tb_trans_pane

0x4e3c,	// (0x000448ff) bg_tb_trans_pane_g1

0x4e44,	// (0x00044907) bg_tb_trans_pane_g2

0x4e4c,	// (0x0004490f) bg_tb_trans_pane_g3

0x4e54,	// (0x00044917) bg_tb_trans_pane_g4

0x4e5c,	// (0x0004491f) bg_tb_trans_pane_g5

0x4e74,	// (0x00044937) bg_tb_trans_pane_g6

0x4e7c,	// (0x0004493f) bg_tb_trans_pane_g7

0x4e64,	// (0x00044927) bg_tb_trans_pane_g8

0x4e6c,	// (0x0004492f) bg_tb_trans_pane_g9

0x0008,

0xfc6f,	// (0x0004f732) bg_tb_trans_pane_g

0x807c,	// (0x00047b3f) cell_toolbar_trans_pane_ParamLimits

0x807c,	// (0x00047b3f) cell_toolbar_trans_pane

0x7480,	// (0x00046f43) cell_toolbar_trans_pane_g1

0xdd00,	// (0x0004d7c3) list_form2_midp_pane_t1

0xdd0e,	// (0x0004d7d1) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0004f5db) list_form2_midp_pane_t

0x70bd,	// (0x00046b80) scroll_pane_cp51_ParamLimits

0x7284,	// (0x00046d47) form2_midp_wait_pane_g1

0x728d,	// (0x00046d50) form2_midp_wait_pane_g2

0x7296,	// (0x00046d59) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0004f5f0) form2_midp_wait_pane_g

0x2a91,	// (0x00042554) list_highlight_pane_cp21_ParamLimits

0x72da,	// (0x00046d9d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x72e9,	// (0x00046dac) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x643c,	// (0x00045eff) list_single_2graphic_im_pane_ParamLimits

0x643c,	// (0x00045eff) list_single_2graphic_im_pane

0xe103,	// (0x0004dbc6) list_single_2graphic_im_pane_g1_ParamLimits

0xe103,	// (0x0004dbc6) list_single_2graphic_im_pane_g1

0xe114,	// (0x0004dbd7) list_single_2graphic_im_pane_g2_ParamLimits

0xe114,	// (0x0004dbd7) list_single_2graphic_im_pane_g2

0xe120,	// (0x0004dbe3) list_single_2graphic_im_pane_g3_ParamLimits

0xe120,	// (0x0004dbe3) list_single_2graphic_im_pane_g3

0x0003,

0xfc82,	// (0x0004f745) list_single_2graphic_im_pane_g_ParamLimits

0xfc82,	// (0x0004f745) list_single_2graphic_im_pane_g

0xe134,	// (0x0004dbf7) list_single_2graphic_im_pane_t1_ParamLimits

0xe134,	// (0x0004dbf7) list_single_2graphic_im_pane_t1

0x7b4d,	// (0x00047610) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b4d,	// (0x00047610) list_single_graphic_2heading_pane_fp

0x0a2a,	// (0x000404ed) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0a2a,	// (0x000404ed) list_single_graphic_2heading_pane_fp_g1

0x7b66,	// (0x00047629) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b66,	// (0x00047629) list_single_graphic_2heading_pane_fp_g2

0x1186,	// (0x00040c49) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1186,	// (0x00040c49) list_single_graphic_2heading_pane_fp_g3

0x1f1d,	// (0x000419e0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1f1d,	// (0x000419e0) list_single_graphic_2heading_pane_fp_g4

0x7b72,	// (0x00047635) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b72,	// (0x00047635) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004f673) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004f673) list_single_graphic_2heading_pane_fp_g

0x0b73,	// (0x00040636) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0b73,	// (0x00040636) list_single_graphic_2heading_pane_fp_t1

0x0a62,	// (0x00040525) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0a62,	// (0x00040525) list_single_graphic_2heading_pane_fp_t2

0x0b89,	// (0x0004064c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0b89,	// (0x0004064c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8b,	// (0x0004f74e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8b,	// (0x0004f74e) list_single_graphic_2heading_pane_fp_t

0x752e,	// (0x00046ff1) fep_hwr_write_pane_g5_ParamLimits

0x752e,	// (0x00046ff1) fep_hwr_write_pane_g5

0x753a,	// (0x00046ffd) fep_hwr_write_pane_g6_ParamLimits

0x753a,	// (0x00046ffd) fep_hwr_write_pane_g6

0x7de0,	// (0x000478a3) eswt_shell_pane_ParamLimits

0x4f2e,	// (0x000449f1) bg_popup_window_pane_cp18_ParamLimits

0x618a,	// (0x00045c4d) heading_pane_cp70

0x7f0a,	// (0x000479cd) popup_eswt_tasktip_window_t1_ParamLimits

0xd29b,	// (0x0004cd5e) aid_touch_tab_arrow_left

0xd2b1,	// (0x0004cd74) aid_touch_tab_arrow_right

0xbb2b,	// (0x0004b5ee) title_pane_g3_ParamLimits

0xbb2b,	// (0x0004b5ee) title_pane_g3

0x32d7,	// (0x00042d9a) set_value_pane_g1

0xd1d8,	// (0x0004cc9b) popup_toolbar_trans_pane_ParamLimits

0x8056,	// (0x00047b19) aid_size_cell_tb_trans_pane_ParamLimits

0x3318,	// (0x00042ddb) bg_tb_trans_pane_ParamLimits

0x8068,	// (0x00047b2b) grid_tb_trans_pane_ParamLimits

0x2d1b,	// (0x000427de) cont_note_pane_ParamLimits

0x2d1b,	// (0x000427de) cont_note_pane

0x3089,	// (0x00042b4c) cont_snote2_single_text_pane_ParamLimits

0x3089,	// (0x00042b4c) cont_snote2_single_text_pane

0x3089,	// (0x00042b4c) cont_snote2_single_graphic_pane_ParamLimits

0x3089,	// (0x00042b4c) cont_snote2_single_graphic_pane

0x54b1,	// (0x00044f74) cont_note_wait_pane_ParamLimits

0x54b1,	// (0x00044f74) cont_note_wait_pane

0x54b1,	// (0x00044f74) cont_note_image_pane_ParamLimits

0x54b1,	// (0x00044f74) cont_note_image_pane

0x8110,	// (0x00047bd3) popup_note2_window_g1_ParamLimits

0x8110,	// (0x00047bd3) popup_note2_window_g1

0x8141,	// (0x00047c04) popup_note2_window_t1_ParamLimits

0x8141,	// (0x00047c04) popup_note2_window_t1

0x8186,	// (0x00047c49) popup_note2_window_t2_ParamLimits

0x8186,	// (0x00047c49) popup_note2_window_t2

0x81cb,	// (0x00047c8e) popup_note2_window_t3_ParamLimits

0x81cb,	// (0x00047c8e) popup_note2_window_t3

0x8210,	// (0x00047cd3) popup_note2_window_t4_ParamLimits

0x8210,	// (0x00047cd3) popup_note2_window_t4

0x2d9f,	// (0x00042862) popup_note2_window_t5_ParamLimits

0x2d9f,	// (0x00042862) popup_note2_window_t5

0x0004,

0xfc97,	// (0x0004f75a) popup_note2_window_t_ParamLimits

0xfc97,	// (0x0004f75a) popup_note2_window_t

0x823f,	// (0x00047d02) popup_note2_image_window_g1_ParamLimits

0x823f,	// (0x00047d02) popup_note2_image_window_g1

0x824b,	// (0x00047d0e) popup_note2_image_window_g2_ParamLimits

0x824b,	// (0x00047d0e) popup_note2_image_window_g2

0x0001,

0xfca2,	// (0x0004f765) popup_note2_image_window_g_ParamLimits

0xfca2,	// (0x0004f765) popup_note2_image_window_g

0x825d,	// (0x00047d20) popup_note2_image_window_t1_ParamLimits

0x825d,	// (0x00047d20) popup_note2_image_window_t1

0x8275,	// (0x00047d38) popup_note2_image_window_t2_ParamLimits

0x8275,	// (0x00047d38) popup_note2_image_window_t2

0x828d,	// (0x00047d50) popup_note2_image_window_t3_ParamLimits

0x828d,	// (0x00047d50) popup_note2_image_window_t3

0x0002,

0xfca7,	// (0x0004f76a) popup_note2_image_window_t_ParamLimits

0xfca7,	// (0x0004f76a) popup_note2_image_window_t

0x54bf,	// (0x00044f82) popup_note2_wait_window_g1_ParamLimits

0x54bf,	// (0x00044f82) popup_note2_wait_window_g1

0x82a9,	// (0x00047d6c) popup_note2_wait_window_g2_ParamLimits

0x82a9,	// (0x00047d6c) popup_note2_wait_window_g2

0x54d7,	// (0x00044f9a) popup_note2_wait_window_g3_ParamLimits

0x54d7,	// (0x00044f9a) popup_note2_wait_window_g3

0x0002,

0xfcae,	// (0x0004f771) popup_note2_wait_window_g_ParamLimits

0xfcae,	// (0x0004f771) popup_note2_wait_window_g

0x82b5,	// (0x00047d78) popup_note2_wait_window_t1_ParamLimits

0x82b5,	// (0x00047d78) popup_note2_wait_window_t1

0x82d3,	// (0x00047d96) popup_note2_wait_window_t2_ParamLimits

0x82d3,	// (0x00047d96) popup_note2_wait_window_t2

0x82f1,	// (0x00047db4) popup_note2_wait_window_t3_ParamLimits

0x82f1,	// (0x00047db4) popup_note2_wait_window_t3

0x8303,	// (0x00047dc6) popup_note2_wait_window_t4_ParamLimits

0x8303,	// (0x00047dc6) popup_note2_wait_window_t4

0x0003,

0xfcb5,	// (0x0004f778) popup_note2_wait_window_t_ParamLimits

0xfcb5,	// (0x0004f778) popup_note2_wait_window_t

0x8315,	// (0x00047dd8) wait_bar2_pane_ParamLimits

0x8315,	// (0x00047dd8) wait_bar2_pane

0x832d,	// (0x00047df0) popup_snote2_single_text_window_g1_ParamLimits

0x832d,	// (0x00047df0) popup_snote2_single_text_window_g1

0x8355,	// (0x00047e18) popup_snote2_single_text_window_t1_ParamLimits

0x8355,	// (0x00047e18) popup_snote2_single_text_window_t1

0x83a1,	// (0x00047e64) popup_snote2_single_text_window_t2_ParamLimits

0x83a1,	// (0x00047e64) popup_snote2_single_text_window_t2

0x83ed,	// (0x00047eb0) popup_snote2_single_text_window_t3_ParamLimits

0x83ed,	// (0x00047eb0) popup_snote2_single_text_window_t3

0x842e,	// (0x00047ef1) popup_snote2_single_text_window_t4_ParamLimits

0x842e,	// (0x00047ef1) popup_snote2_single_text_window_t4

0x8464,	// (0x00047f27) popup_snote2_single_text_window_t5_ParamLimits

0x8464,	// (0x00047f27) popup_snote2_single_text_window_t5

0x0004,

0xfcbe,	// (0x0004f781) popup_snote2_single_text_window_t_ParamLimits

0xfcbe,	// (0x0004f781) popup_snote2_single_text_window_t

0x848f,	// (0x00047f52) popup_snote2_single_graphic_window_g1_ParamLimits

0x848f,	// (0x00047f52) popup_snote2_single_graphic_window_g1

0x84b7,	// (0x00047f7a) popup_snote2_single_graphic_window_g2_ParamLimits

0x84b7,	// (0x00047f7a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc9,	// (0x0004f78c) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc9,	// (0x0004f78c) popup_snote2_single_graphic_window_g

0x84df,	// (0x00047fa2) popup_snote2_single_graphic_window_t1_ParamLimits

0x84df,	// (0x00047fa2) popup_snote2_single_graphic_window_t1

0x852b,	// (0x00047fee) popup_snote2_single_graphic_window_t2_ParamLimits

0x852b,	// (0x00047fee) popup_snote2_single_graphic_window_t2

0x83ed,	// (0x00047eb0) popup_snote2_single_graphic_window_t3_ParamLimits

0x83ed,	// (0x00047eb0) popup_snote2_single_graphic_window_t3

0x842e,	// (0x00047ef1) popup_snote2_single_graphic_window_t4_ParamLimits

0x842e,	// (0x00047ef1) popup_snote2_single_graphic_window_t4

0x8464,	// (0x00047f27) popup_snote2_single_graphic_window_t5_ParamLimits

0x8464,	// (0x00047f27) popup_snote2_single_graphic_window_t5

0x0004,

0xfcce,	// (0x0004f791) popup_snote2_single_graphic_window_t_ParamLimits

0xfcce,	// (0x0004f791) popup_snote2_single_graphic_window_t

0x6f67,	// (0x00046a2a) clock_nsta_pane_cp2_t1

0x6f67,	// (0x00046a2a) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0004f5b1) clock_nsta_pane_cp2_t

0x04d2,	// (0x0003ff95) form_field_data_wide_pane_g1_ParamLimits

0x3332,	// (0x00042df5) form_field_data_wide_pane_g2_ParamLimits

0x3332,	// (0x00042df5) form_field_data_wide_pane_g2

0x333e,	// (0x00042e01) form_field_data_wide_pane_g3_ParamLimits

0x333e,	// (0x00042e01) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004f187) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004f187) form_field_data_wide_pane_g

0xdc08,	// (0x0004d6cb) grid_touch_3_pane_ParamLimits

0xdc08,	// (0x0004d6cb) grid_touch_3_pane

0xe165,	// (0x0004dc28) cell_touch_3_pane_ParamLimits

0xe165,	// (0x0004dc28) cell_touch_3_pane

0x7480,	// (0x00046f43) cell_touch_3_pane_g1

0x7480,	// (0x00046f43) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0004f636) cell_touch_3_pane_g

0x2dd1,	// (0x00042894) cont_query_data_pane

0x2dd9,	// (0x0004289c) cont_query_data_pane_cp1

0x85aa,	// (0x0004806d) button_value_adjust_pane_cp7

0x85b2,	// (0x00048075) query_popup_pane_cp3

0x3a52,	// (0x00043515) bg_popup_sub_pane_cp22_ParamLimits

0x1400,	// (0x00040ec3) navi_navi_volume_pane_cp2

0x141b,	// (0x00040ede) popup_side_volume_key_window_g2

0x142a,	// (0x00040eed) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004f219) popup_side_volume_key_window_g

0x1447,	// (0x00040f0a) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004f220) popup_side_volume_key_window_t

0x3d0d,	// (0x000437d0) popup_side_volume_key_window_ParamLimits

0xb292,	// (0x0004ad55) list_double_graphic_pane_g4_ParamLimits

0xb292,	// (0x0004ad55) list_double_graphic_pane_g4

0xc143,	// (0x0004bc06) list_single_2heading_msg_pane_ParamLimits

0xc143,	// (0x0004bc06) list_single_2heading_msg_pane

0xc1b6,	// (0x0004bc79) list_single_2heading_msg_pane_g1_ParamLimits

0xc1b6,	// (0x0004bc79) list_single_2heading_msg_pane_g1

0xc1c2,	// (0x0004bc85) list_single_2heading_msg_pane_g2_ParamLimits

0xc1c2,	// (0x0004bc85) list_single_2heading_msg_pane_g2

0xc1d5,	// (0x0004bc98) list_single_2heading_msg_pane_g3_ParamLimits

0xc1d5,	// (0x0004bc98) list_single_2heading_msg_pane_g3

0xc1e1,	// (0x0004bca4) list_single_2heading_msg_pane_g4_ParamLimits

0xc1e1,	// (0x0004bca4) list_single_2heading_msg_pane_g4

0x0003,

0xfcd9,	// (0x0004f79c) list_single_2heading_msg_pane_g_ParamLimits

0xfcd9,	// (0x0004f79c) list_single_2heading_msg_pane_g

0xb812,	// (0x0004b2d5) list_single_2heading_msg_pane_t1_ParamLimits

0xb812,	// (0x0004b2d5) list_single_2heading_msg_pane_t1

0xb83a,	// (0x0004b2fd) list_single_2heading_msg_pane_t2_ParamLimits

0xb83a,	// (0x0004b2fd) list_single_2heading_msg_pane_t2

0xb8a5,	// (0x0004b368) list_single_2heading_msg_pane_t3_ParamLimits

0xb8a5,	// (0x0004b368) list_single_2heading_msg_pane_t3

0x0c39,	// (0x000406fc) list_single_2heading_msg_pane_t4_ParamLimits

0x0c39,	// (0x000406fc) list_single_2heading_msg_pane_t4

0x0003,

0xfce2,	// (0x0004f7a5) list_single_2heading_msg_pane_t_ParamLimits

0xfce2,	// (0x0004f7a5) list_single_2heading_msg_pane_t

0x29e5,	// (0x000424a8) title_pane_g4_ParamLimits

0x29e5,	// (0x000424a8) title_pane_g4

0x120c,	// (0x00040ccf) title_pane_stacon_g3_ParamLimits

0x120c,	// (0x00040ccf) title_pane_stacon_g3

0x80d3,	// (0x00047b96) list_single_2graphic_im_pane_g4_ParamLimits

0x80d3,	// (0x00047b96) list_single_2graphic_im_pane_g4

0x5f27,	// (0x000459ea) popup_side_volume_key_window_cp

0x679d,	// (0x00046260) main_idle_act2_pane_t1

0x17f4,	// (0x000412b7) toolbar_button_pane_g10

0xc764,	// (0x0004c227) popup_toolbar_window_cp1

0x6f58,	// (0x00046a1b) clock_nsta_pane_cp_t1

0x6f58,	// (0x00046a1b) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0004f5ac) clock_nsta_pane_cp_t

0x1400,	// (0x00040ec3) navi_navi_volume_pane_cp2_ParamLimits

0x140f,	// (0x00040ed2) popup_side_volume_key_window_g1_ParamLimits

0x141b,	// (0x00040ede) popup_side_volume_key_window_g2_ParamLimits

0x142a,	// (0x00040eed) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004f219) popup_side_volume_key_window_g_ParamLimits

0x1cb7,	// (0x0004177a) fep_hwr_aid_pane

0xde0c,	// (0x0004d8cf) bg_fep_hwr_top_pane_g4_ParamLimits

0x74fe,	// (0x00046fc1) fep_hwr_top_pane_g1_ParamLimits

0x7510,	// (0x00046fd3) fep_hwr_top_pane_g2_ParamLimits

0x1d72,	// (0x00041835) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0004f601) fep_hwr_top_pane_g_ParamLimits

0x1d87,	// (0x0004184a) fep_hwr_top_text_pane_ParamLimits

0x5cdc,	// (0x0004579f) aid_touch_tab_arrow_arrow_2

0x5ce5,	// (0x000457a8) aid_touch_tab_arrow_left_2

0x1ccb,	// (0x0004178e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d02,	// (0x000417c5) fep_hwr_prediction_pane

0x7666,	// (0x00047129) fep_vkb_prediction_pane

0xdf38,	// (0x0004d9fb) fep_vkb_side_pane_g3_ParamLimits

0xdf38,	// (0x0004d9fb) fep_vkb_side_pane_g3

0x7718,	// (0x000471db) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7bc6,	// (0x00047689) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7bd3,	// (0x00047696) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe8,	// (0x0004f6ab) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x85d9,	// (0x0004809c) fep_hwr_prediction_pane_g1

0x20f5,	// (0x00041bb8) fep_hwr_prediction_pane_g2

0x20fd,	// (0x00041bc0) fep_hwr_prediction_pane_g3

0x2105,	// (0x00041bc8) fep_hwr_prediction_pane_g4

0x0003,

0xfceb,	// (0x0004f7ae) fep_hwr_prediction_pane_g

0x85d9,	// (0x0004809c) fep_vkb_prediction_pane_g1

0x85e3,	// (0x000480a6) fep_vkb_prediction_pane_g2

0x85eb,	// (0x000480ae) fep_vkb_prediction_pane_g3

0x85f3,	// (0x000480b6) fep_vkb_prediction_pane_g4

0x0003,

0xfcf4,	// (0x0004f7b7) fep_vkb_prediction_pane_g

0x683f,	// (0x00046302) slider_set_pane_g3

0x6853,	// (0x00046316) slider_set_pane_g4

0x686b,	// (0x0004632e) slider_set_pane_g5

0x683f,	// (0x00046302) slider_set_pane_g6

0x1ae9,	// (0x000415ac) slider_set_pane_g7

0x63d5,	// (0x00045e98) slider_form_pane_g3

0x63de,	// (0x00045ea1) slider_form_pane_g4

0x63e6,	// (0x00045ea9) slider_form_pane_g5

0x63d5,	// (0x00045e98) slider_form_pane_g6

0xda8a,	// (0x0004d54d) slider_form_pane_g7

0x6aad,	// (0x00046570) slider_set_pane_vc_g3

0x6ab6,	// (0x00046579) slider_set_pane_vc_g4

0x6abf,	// (0x00046582) slider_set_pane_vc_g5

0x6aad,	// (0x00046570) slider_set_pane_vc_g6

0x6ac8,	// (0x0004658b) slider_set_pane_vc_g7

0x6aad,	// (0x00046570) slider_form_pane_vc_g1

0x6ab6,	// (0x00046579) slider_form_pane_vc_g2

0x6abf,	// (0x00046582) slider_form_pane_vc_g3

0x6aad,	// (0x00046570) slider_form_pane_vc_g4

0x6c7d,	// (0x00046740) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0004f592) slider_form_pane_vc_g

0x299d,	// (0x00042460) main_idle_act3_pane

0x85fb,	// (0x000480be) ai3_links_pane

0xe1af,	// (0x0004dc72) popup_ai3_data_window_ParamLimits

0xe1af,	// (0x0004dc72) popup_ai3_data_window

0x299d,	// (0x00042460) grid_ai3_links_pane

0xe1cd,	// (0x0004dc90) cell_ai3_links_pane_ParamLimits

0xe1cd,	// (0x0004dc90) cell_ai3_links_pane

0x863c,	// (0x000480ff) bg_popup_sub_pane_cp11

0x8649,	// (0x0004810c) cell_ai3_links_pane_g1

0x299d,	// (0x00042460) bg_popup_sub_pane_cp12

0x866e,	// (0x00048131) heading_ai3_data_pane

0x8676,	// (0x00048139) list_ai3_gene_pane

0x8682,	// (0x00048145) popup_ai3_data_window_g1

0x868a,	// (0x0004814d) heading_ai3_data_pane_g1

0x8692,	// (0x00048155) heading_ai3_data_pane_t1

0x86a0,	// (0x00048163) list_double_ai3_gene_pane_ParamLimits

0x86a0,	// (0x00048163) list_double_ai3_gene_pane

0x86ad,	// (0x00048170) list_single_ai3_gene_pane_ParamLimits

0x86ad,	// (0x00048170) list_single_ai3_gene_pane

0x7445,	// (0x00046f08) list_highlight_pane_cp7_ParamLimits

0x7445,	// (0x00046f08) list_highlight_pane_cp7

0x86ba,	// (0x0004817d) list_single_a13_gene_pane_t1_ParamLimits

0x86ba,	// (0x0004817d) list_single_a13_gene_pane_t1

0x86d1,	// (0x00048194) list_single_ai3_gene_pane_g1

0x86da,	// (0x0004819d) list_single_ai3_gene_pane_g2

0x0001,

0xfcfd,	// (0x0004f7c0) list_single_ai3_gene_pane_g

0x86e2,	// (0x000481a5) list_double_ai3_gene_pane_g1_ParamLimits

0x86e2,	// (0x000481a5) list_double_ai3_gene_pane_g1

0x86ee,	// (0x000481b1) list_double_ai3_gene_pane_t1_ParamLimits

0x86ee,	// (0x000481b1) list_double_ai3_gene_pane_t1

0x870a,	// (0x000481cd) list_double_ai3_gene_pane_t2_ParamLimits

0x870a,	// (0x000481cd) list_double_ai3_gene_pane_t2

0x871f,	// (0x000481e2) list_double_ai3_gene_pane_t3_ParamLimits

0x871f,	// (0x000481e2) list_double_ai3_gene_pane_t3

0x0002,

0xfd02,	// (0x0004f7c5) list_double_ai3_gene_pane_t_ParamLimits

0xfd02,	// (0x0004f7c5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b9f,	// (0x00040662) aid_size_min_col_2

0xe199,	// (0x0004dc5c) aid_size_min_msg_ParamLimits

0xe199,	// (0x0004dc5c) aid_size_min_msg

0xdf4c,	// (0x0004da0f) fep_vkb_top_text_pane_g2_ParamLimits

0xdf4c,	// (0x0004da0f) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0004f631) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0004f631) fep_vkb_top_text_pane_g

0x299d,	// (0x00042460) main_hc_apps_shell_pane

0x873c,	// (0x000481ff) grid_hc_apps_pane_ParamLimits

0x873c,	// (0x000481ff) grid_hc_apps_pane

0x874b,	// (0x0004820e) list_hc_apps_pane

0x8753,	// (0x00048216) scroll_pane_cp37_ParamLimits

0x8753,	// (0x00048216) scroll_pane_cp37

0xe1e7,	// (0x0004dcaa) cell_hc_apps_pane_ParamLimits

0xe1e7,	// (0x0004dcaa) cell_hc_apps_pane

0xe2b1,	// (0x0004dd74) cell_hc_apps_pane_g1_ParamLimits

0xe2b1,	// (0x0004dd74) cell_hc_apps_pane_g1

0x8848,	// (0x0004830b) cell_hc_apps_pane_g2_ParamLimits

0x8848,	// (0x0004830b) cell_hc_apps_pane_g2

0x8864,	// (0x00048327) cell_hc_apps_pane_g3_ParamLimits

0x8864,	// (0x00048327) cell_hc_apps_pane_g3

0x0002,

0xfd09,	// (0x0004f7cc) cell_hc_apps_pane_g_ParamLimits

0xfd09,	// (0x0004f7cc) cell_hc_apps_pane_g

0xe2de,	// (0x0004dda1) cell_hc_apps_pane_t1_ParamLimits

0xe2de,	// (0x0004dda1) cell_hc_apps_pane_t1

0x2d1b,	// (0x000427de) grid_highlight_pane_cp10_ParamLimits

0x2d1b,	// (0x000427de) grid_highlight_pane_cp10

0xe31e,	// (0x0004dde1) list_single_hc_apps_pane_ParamLimits

0xe31e,	// (0x0004dde1) list_single_hc_apps_pane

0xe358,	// (0x0004de1b) list_single_hc_apps_pane_g1

0xc1f9,	// (0x0004bcbc) list_single_hc_apps_pane_g2

0x0001,

0xfd10,	// (0x0004f7d3) list_single_hc_apps_pane_g

0xc212,	// (0x0004bcd5) list_single_hc_apps_pane_g2_copy1

0xb913,	// (0x0004b3d6) list_single_hc_apps_pane_t1

0x2a91,	// (0x00042554) bg_set_opt_pane_cp_ParamLimits

0x108d,	// (0x00040b50) setting_slider_pane_t1_ParamLimits

0x10a3,	// (0x00040b66) setting_slider_pane_t2_ParamLimits

0x10bd,	// (0x00040b80) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004f065) setting_slider_pane_t_ParamLimits

0x10d5,	// (0x00040b98) slider_set_pane_ParamLimits

0x16c4,	// (0x00041187) control_pane_g5_ParamLimits

0x16c4,	// (0x00041187) control_pane_g5

0x61f6,	// (0x00045cb9) slider_set_pane_g1_ParamLimits

0x1add,	// (0x000415a0) slider_set_pane_g2_ParamLimits

0x683f,	// (0x00046302) slider_set_pane_g3_ParamLimits

0x6853,	// (0x00046316) slider_set_pane_g4_ParamLimits

0x686b,	// (0x0004632e) slider_set_pane_g5_ParamLimits

0x683f,	// (0x00046302) slider_set_pane_g6_ParamLimits

0x1ae9,	// (0x000415ac) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0004f460) slider_set_pane_g_ParamLimits

0x3df2,	// (0x000438b5) navi_icon_text_pane_ParamLimits

0xd265,	// (0x0004cd28) aid_fill_nsta_2_ParamLimits

0xd29b,	// (0x0004cd5e) aid_touch_tab_arrow_left_ParamLimits

0xd2b1,	// (0x0004cd74) aid_touch_tab_arrow_right_ParamLimits

0xd34c,	// (0x0004ce0f) clock_nsta_pane_ParamLimits

0xd7d9,	// (0x0004d29c) navi_icon_pane_g1_ParamLimits

0xd7e5,	// (0x0004d2a8) navi_text_pane_t1_ParamLimits

0xdce2,	// (0x0004d7a5) navi_icon_text_pane_g1_ParamLimits

0xdcee,	// (0x0004d7b1) navi_icon_text_pane_t1_ParamLimits

0xe358,	// (0x0004de1b) list_single_hc_apps_pane_g1_ParamLimits

0xc1f9,	// (0x0004bcbc) list_single_hc_apps_pane_g2_ParamLimits

0xfd10,	// (0x0004f7d3) list_single_hc_apps_pane_g_ParamLimits

0xc212,	// (0x0004bcd5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb913,	// (0x0004b3d6) list_single_hc_apps_pane_t1_ParamLimits

0xba97,	// (0x0004b55a) popup_toolbar2_fixed_window_ParamLimits

0xba97,	// (0x0004b55a) popup_toolbar2_fixed_window

0xd1ce,	// (0x0004cc91) popup_toolbar2_float_window

0x299d,	// (0x00042460) bg_popup_sub_pane_cp27

0x891e,	// (0x000483e1) grid_toolbar2_float_pane

0x299d,	// (0x00042460) bg_popup_sub_pane_cp26

0x891e,	// (0x000483e1) grid_toolbar2_fixed_pane

0xe371,	// (0x0004de34) cell_toolbar2_fixed_pane_ParamLimits

0xe371,	// (0x0004de34) cell_toolbar2_fixed_pane

0xe38e,	// (0x0004de51) cell_toolbar2_fixed_pane_g1

0x893f,	// (0x00048402) toolbar2_fixed_button_pane

0x4e3c,	// (0x000448ff) toolbar2_fixed_button_pane_g1

0x4e44,	// (0x00044907) toolbar2_fixed_button_pane_g2

0x4e4c,	// (0x0004490f) toolbar2_fixed_button_pane_g3

0x4e54,	// (0x00044917) toolbar2_fixed_button_pane_g4

0x4e5c,	// (0x0004491f) toolbar2_fixed_button_pane_g5

0x4e64,	// (0x00044927) toolbar2_fixed_button_pane_g6

0x4e6c,	// (0x0004492f) toolbar2_fixed_button_pane_g7

0x4e74,	// (0x00044937) toolbar2_fixed_button_pane_g8

0x4e7c,	// (0x0004493f) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0004f362) toolbar2_fixed_button_pane_g

0x8947,	// (0x0004840a) cell_toolbar2_float_pane_ParamLimits

0x8947,	// (0x0004840a) cell_toolbar2_float_pane

0x8958,	// (0x0004841b) cell_toolbar2_float_pane_g1

0x893f,	// (0x00048402) toolbar2_fixed_button_pane_cp

0xde34,	// (0x0004d8f7) fep_vkb_accented_list_pane_ParamLimits

0xde34,	// (0x0004d8f7) fep_vkb_accented_list_pane

0x1ee9,	// (0x000419ac) bg_popup_fep_shadow_pane_g9

0x3f76,	// (0x00043a39) bg_popup_fep_shadow_pane_cp3

0x3481,	// (0x00042f44) list_accented_list_pane

0x8961,	// (0x00048424) list_single_accented_list_pane_ParamLimits

0x8961,	// (0x00048424) list_single_accented_list_pane

0x3f76,	// (0x00043a39) list_highlight_pane_cp10

0x8972,	// (0x00048435) list_single_accented_list_pane_t1

0xd0ea,	// (0x0004cbad) popup_slider_window_ParamLimits

0xd0ea,	// (0x0004cbad) popup_slider_window

0x85ba,	// (0x0004807d) aid_indentation_list_msg

0xe499,	// (0x0004df5c) bg_popup_window_pane_cp19

0x8aac,	// (0x0004856f) popup_slider_window_g1

0x8ac8,	// (0x0004858b) popup_slider_window_g2

0x8ae4,	// (0x000485a7) popup_slider_window_g3

0x0005,

0xfd15,	// (0x0004f7d8) popup_slider_window_g

0x8b40,	// (0x00048603) popup_slider_window_t1

0x8bb4,	// (0x00048677) small_volume_slider_vertical_pane

0x7480,	// (0x00046f43) small_volume_slider_vertical_pane_g1

0x7480,	// (0x00046f43) small_volume_slider_vertical_pane_g2

0x8bd0,	// (0x00048693) small_volume_slider_vertical_pane_g3

0x0002,

0xfd27,	// (0x0004f7ea) small_volume_slider_vertical_pane_g

0xba01,	// (0x0004b4c4) area_side_right_pane_ParamLimits

0xba01,	// (0x0004b4c4) area_side_right_pane

0xc22e,	// (0x0004bcf1) aid_size_side_button_ParamLimits

0xc22e,	// (0x0004bcf1) aid_size_side_button

0xc247,	// (0x0004bd0a) grid_sctrl_middle_pane_ParamLimits

0xc247,	// (0x0004bd0a) grid_sctrl_middle_pane

0x2176,	// (0x00041c39) sctrl_sk_bottom_pane

0x2187,	// (0x00041c4a) sctrl_sk_top_pane

0x2199,	// (0x00041c5c) aid_touch_sctrl_top

0x2d1b,	// (0x000427de) bg_sctrl_sk_pane_ParamLimits

0x2d1b,	// (0x000427de) bg_sctrl_sk_pane

0x21a6,	// (0x00041c69) sctrl_sk_top_pane_g1

0x21b3,	// (0x00041c76) sctrl_sk_top_pane_t1

0x2199,	// (0x00041c5c) aid_touch_sctrl_bottom

0x2d1b,	// (0x000427de) bg_sctrl_sk_pane_cp_ParamLimits

0x2d1b,	// (0x000427de) bg_sctrl_sk_pane_cp

0x21ce,	// (0x00041c91) sctrl_sk_bottom_pane_g1

0x21b3,	// (0x00041c76) sctrl_sk_bottom_pane_t1

0xc261,	// (0x0004bd24) cell_sctrl_middle_pane_ParamLimits

0xc261,	// (0x0004bd24) cell_sctrl_middle_pane

0xc274,	// (0x0004bd37) aid_touch_sctrl_middle_ParamLimits

0xc274,	// (0x0004bd37) aid_touch_sctrl_middle

0xc281,	// (0x0004bd44) bg_sctrl_middle_pane_ParamLimits

0xc281,	// (0x0004bd44) bg_sctrl_middle_pane

0x8c5b,	// (0x0004871e) cell_sctrl_middle_pane_g1_ParamLimits

0x8c5b,	// (0x0004871e) cell_sctrl_middle_pane_g1

0xc28f,	// (0x0004bd52) cell_sctrl_middle_pane_g2_ParamLimits

0xc28f,	// (0x0004bd52) cell_sctrl_middle_pane_g2

0x0001,

0xfd33,	// (0x0004f7f6) cell_sctrl_middle_pane_g_ParamLimits

0xfd33,	// (0x0004f7f6) cell_sctrl_middle_pane_g

0x4e3c,	// (0x000448ff) bg_sctrl_middle_pane_g1

0x4e44,	// (0x00044907) bg_sctrl_middle_pane_g2

0x4e4c,	// (0x0004490f) bg_sctrl_middle_pane_g3

0x4e54,	// (0x00044917) bg_sctrl_middle_pane_g4

0x4e5c,	// (0x0004491f) bg_sctrl_middle_pane_g5

0x4e64,	// (0x00044927) bg_sctrl_middle_pane_g6

0x4e6c,	// (0x0004492f) bg_sctrl_middle_pane_g7

0x4e74,	// (0x00044937) bg_sctrl_middle_pane_g8

0x0007,

0xfd38,	// (0x0004f7fb) bg_sctrl_middle_pane_g

0x4e7c,	// (0x0004493f) bg_sctrl_middle_pane_g8_copy1

0x4e3c,	// (0x000448ff) bg_sctrl_sk_pane_g1

0x4e44,	// (0x00044907) bg_sctrl_sk_pane_g2

0x4e4c,	// (0x0004490f) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0004f362) bg_sctrl_sk_pane_g

0x3247,	// (0x00042d0a) aid_size_touch_scroll_bar

0x4e54,	// (0x00044917) bg_sctrl_sk_pane_g4

0x4e5c,	// (0x0004491f) bg_sctrl_sk_pane_g5

0x4e64,	// (0x00044927) bg_sctrl_sk_pane_g6

0x4e6c,	// (0x0004492f) bg_sctrl_sk_pane_g7

0x4e74,	// (0x00044937) bg_sctrl_sk_pane_g8

0x4e7c,	// (0x0004493f) bg_sctrl_sk_pane_g9

0x43aa,	// (0x00043e6d) popup_fep_china_hwr2_fs_candidate_window

0xcba6,	// (0x0004c669) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcba6,	// (0x0004c669) popup_fep_china_hwr2_fs_control_window

0x7718,	// (0x000471db) sctrl_sk_top_pane_g2

0x0001,

0xfd2e,	// (0x0004f7f1) sctrl_sk_top_pane_g

0xe551,	// (0x0004e014) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe551,	// (0x0004e014) aid_fep_china_hwr2_fs_cell

0xe567,	// (0x0004e02a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe567,	// (0x0004e02a) bg_popup_fep_shadow_pane_cp4

0xe57e,	// (0x0004e041) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe57e,	// (0x0004e041) bg_popup_fep_shadow_pane_cp5

0xe590,	// (0x0004e053) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe590,	// (0x0004e053) popup_fep_china_hwr2_fs_control_bar_grid

0xe5a4,	// (0x0004e067) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c2f,	// (0x000486f2) aid_fep_china_hwr2_fs_candi_cell

0x299d,	// (0x00042460) bg_popup_fep_shadow_pane_cp6

0x8c39,	// (0x000486fc) popup_fep_china_hwr2_fs_candidate_grid

0xe5ac,	// (0x0004e06f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5ac,	// (0x0004e06f) cell_fep_china_hwr2_fs_funtion_grid

0x7480,	// (0x00046f43) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8c5b,	// (0x0004871e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8c5b,	// (0x0004871e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8c69,	// (0x0004872c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8c69,	// (0x0004872c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd49,	// (0x0004f80c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd49,	// (0x0004f80c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5c4,	// (0x0004e087) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5c4,	// (0x0004e087) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5d9,	// (0x0004e09c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5d9,	// (0x0004e09c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4e,	// (0x0004f811) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4e,	// (0x0004f811) cell_fep_china_hwr2_fs_funtion_grid_t

0x8cb0,	// (0x00048773) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8cb8,	// (0x0004877b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8cc0,	// (0x00048783) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd53,	// (0x0004f816) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8cc8,	// (0x0004878b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8cc8,	// (0x0004878b) cell_fep_china_hwr2_fs_candidate_grid

0x8ce7,	// (0x000487aa) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8cef,	// (0x000487b2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7480,	// (0x00046f43) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7480,	// (0x00046f43) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0004f636) cell_fep_china_hwr2_fs_candidate_grid_g

0x8cf7,	// (0x000487ba) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4a19,	// (0x000444dc) clock_nsta_pane_cp_24_ParamLimits

0x4a19,	// (0x000444dc) clock_nsta_pane_cp_24

0x4a99,	// (0x0004455c) indicator_nsta_pane_cp_24_ParamLimits

0x4a99,	// (0x0004455c) indicator_nsta_pane_cp_24

0x5b34,	// (0x000455f7) heading_pane_g1

0x0001,

0xf904,	// (0x0004f3c7) heading_pane_g

0x65e4,	// (0x000460a7) grid_sct_catagory_button_pane

0x6616,	// (0x000460d9) scroll_pane_cp5_ParamLimits

0x70c9,	// (0x00046b8c) button_value_adjust_pane_cp5_ParamLimits

0x70c9,	// (0x00046b8c) button_value_adjust_pane_cp5

0x71ae,	// (0x00046c71) form2_midp_time_pane_ParamLimits

0x8d05,	// (0x000487c8) cell_sct_catagory_button_pane_ParamLimits

0x8d05,	// (0x000487c8) cell_sct_catagory_button_pane

0x7445,	// (0x00046f08) bg_button_pane_cp01_ParamLimits

0x7445,	// (0x00046f08) bg_button_pane_cp01

0x7480,	// (0x00046f43) cell_sct_catagory_button_pane_g1

0xd16b,	// (0x0004cc2e) popup_tb_extension_window

0xe5f5,	// (0x0004e0b8) aid_size_cell_ext_ParamLimits

0xe5f5,	// (0x0004e0b8) aid_size_cell_ext

0x3089,	// (0x00042b4c) bg_tb_trans_pane_cp1_ParamLimits

0x3089,	// (0x00042b4c) bg_tb_trans_pane_cp1

0xe61b,	// (0x0004e0de) grid_tb_ext_pane_ParamLimits

0xe61b,	// (0x0004e0de) grid_tb_ext_pane

0xe65b,	// (0x0004e11e) cell_tb_ext_pane_ParamLimits

0xe65b,	// (0x0004e11e) cell_tb_ext_pane

0xe685,	// (0x0004e148) cell_tb_ext_pane_g1_ParamLimits

0xe685,	// (0x0004e148) cell_tb_ext_pane_g1

0x8d9b,	// (0x0004885e) cell_tb_ext_pane_t1

0x2d1b,	// (0x000427de) list_highlight_pane_cp11_ParamLimits

0x2d1b,	// (0x000427de) list_highlight_pane_cp11

0x0fb6,	// (0x00040a79) popup_uni_indicator_window_ParamLimits

0x0fb6,	// (0x00040a79) popup_uni_indicator_window

0x3318,	// (0x00042ddb) bg_popup_sub_pane_cp14

0x8db6,	// (0x00048879) list_uniindi_pane

0x8dc2,	// (0x00048885) uniindi_top_pane

0x2d1b,	// (0x000427de) bg_uniindi_top_pane

0x8de3,	// (0x000488a6) uniindi_top_pane_g1

0x8df9,	// (0x000488bc) uniindi_top_pane_g2

0x0003,

0xfd5a,	// (0x0004f81d) uniindi_top_pane_g

0x8e23,	// (0x000488e6) uniindi_top_pane_t1

0x8e4f,	// (0x00048912) list_single_uniindi_pane_ParamLimits

0x8e4f,	// (0x00048912) list_single_uniindi_pane

0x7480,	// (0x00046f43) bg_uniindi_top_pane_g1

0x8e61,	// (0x00048924) list_single_uniindi_pane_g1

0x8e74,	// (0x00048937) list_single_uniindi_pane_t1

0x299d,	// (0x00042460) control_bg_pane

0x8e99,	// (0x0004895c) bg_sctrl_sk_pane_cp1

0x8ea2,	// (0x00048965) bg_sctrl_sk_pane_cp2

0x8eab,	// (0x0004896e) control_bg_pane_g1

0x8eb4,	// (0x00048977) control_bg_pane_g2

0x0001,

0xfd63,	// (0x0004f826) control_bg_pane_g

0x6f1d,	// (0x000469e0) cell_indicator_nsta_pane_g1_ParamLimits

0xdc3b,	// (0x0004d6fe) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0004f5a7) cell_indicator_nsta_pane_g_ParamLimits

0x0a00,	// (0x000404c3) form2_midp_time_pane_t1_ParamLimits

0x74f0,	// (0x00046fb3) main_idle_act4_pane_ParamLimits

0x74f0,	// (0x00046fb3) main_idle_act4_pane

0xd16b,	// (0x0004cc2e) popup_tb_extension_window_ParamLimits

0xe643,	// (0x0004e106) tb_ext_find_pane_ParamLimits

0xe643,	// (0x0004e106) tb_ext_find_pane

0x8ebd,	// (0x00048980) ai_gene_pane_1_cp1

0x40bf,	// (0x00043b82) ai_gene_pane_2_cp1

0x8ec5,	// (0x00048988) list_single_idle_plugin_calendar_pane

0x8ece,	// (0x00048991) list_single_idle_plugin_notification_pane

0x8ed7,	// (0x0004899a) list_single_idle_plugin_player_pane

0xe6a2,	// (0x0004e165) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6a2,	// (0x0004e165) list_single_idle_plugin_shortcut_pane

0xe6ca,	// (0x0004e18d) main_idle_act4_pane_t1

0xe6e2,	// (0x0004e1a5) main_idle_act4_pane_t2

0x0001,

0xfd68,	// (0x0004f82b) main_idle_act4_pane_t

0xe6fa,	// (0x0004e1bd) middle_sk_idle_act4_pane_ParamLimits

0xe6fa,	// (0x0004e1bd) middle_sk_idle_act4_pane

0xe716,	// (0x0004e1d9) popup_clock_digital_analogue_window_cp2

0xe73d,	// (0x0004e200) shortcut_wheel_idle_act4_pane_ParamLimits

0xe73d,	// (0x0004e200) shortcut_wheel_idle_act4_pane

0x7480,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g1

0x7480,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g2

0x7480,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g3

0x7480,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g4

0x7480,	// (0x00046f43) shortcut_wheel_idle_act4_pane_g5

0x8f6a,	// (0x00048a2d) shortcut_wheel_idle_act4_pane_g6

0x8f72,	// (0x00048a35) shortcut_wheel_idle_act4_pane_g7

0x8f7a,	// (0x00048a3d) shortcut_wheel_idle_act4_pane_g8

0x8f82,	// (0x00048a45) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6d,	// (0x0004f830) shortcut_wheel_idle_act4_pane_g

0xde0c,	// (0x0004d8cf) middle_sk_idle_act4_pane_g1_ParamLimits

0xde0c,	// (0x0004d8cf) middle_sk_idle_act4_pane_g1

0xe7ba,	// (0x0004e27d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7ba,	// (0x0004e27d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd90,	// (0x0004f853) middle_sk_idle_act4_pane_g_ParamLimits

0xfd90,	// (0x0004f853) middle_sk_idle_act4_pane_g

0xe7d2,	// (0x0004e295) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7d2,	// (0x0004e295) middle_sk_idle_act4_pane_t1

0xe801,	// (0x0004e2c4) grid_ai_shortcut_pane_ParamLimits

0xe801,	// (0x0004e2c4) grid_ai_shortcut_pane

0xe81e,	// (0x0004e2e1) list_highlight_pane_cp16_ParamLimits

0xe81e,	// (0x0004e2e1) list_highlight_pane_cp16

0xe82b,	// (0x0004e2ee) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe82b,	// (0x0004e2ee) list_single_idle_plugin_shortcut_pane_g1

0xe837,	// (0x0004e2fa) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe837,	// (0x0004e2fa) list_single_idle_plugin_shortcut_pane_g2

0xe855,	// (0x0004e318) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe855,	// (0x0004e318) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd95,	// (0x0004f858) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd95,	// (0x0004f858) list_single_idle_plugin_shortcut_pane_g

0xe86a,	// (0x0004e32d) cell_ai_shortcut_pane_ParamLimits

0xe86a,	// (0x0004e32d) cell_ai_shortcut_pane

0xe880,	// (0x0004e343) cell_ai_shortcut_pane_g1_ParamLimits

0xe880,	// (0x0004e343) cell_ai_shortcut_pane_g1

0x8ebd,	// (0x00048980) ai_gene_pane_1_cp2

0x90b3,	// (0x00048b76) ai_gene_pane_2_cp2

0x90bb,	// (0x00048b7e) list_highlight_pane_cp15

0x90c4,	// (0x00048b87) list_single_idle_plugin_calendar_pane_g1

0x90bb,	// (0x00048b7e) list_highlight_pane_cp17

0x90cc,	// (0x00048b8f) list_single_idle_plugin_calendar_pane_g1_copy1

0x90d4,	// (0x00048b97) list_single_idle_plugin_player_pane_g1

0x688d,	// (0x00046350) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9c,	// (0x0004f85f) list_single_idle_plugin_player_pane_g

0x90dc,	// (0x00048b9f) list_single_idle_plugin_player_pane_t1

0x90ea,	// (0x00048bad) list_single_idle_plugin_player_pane_t2

0x90f8,	// (0x00048bbb) list_single_idle_plugin_player_pane_t3

0x9106,	// (0x00048bc9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda1,	// (0x0004f864) list_single_idle_plugin_player_pane_t

0x9114,	// (0x00048bd7) wait_bar_pane_cp15

0x911c,	// (0x00048bdf) grid_ai_notification_pane

0x688d,	// (0x00046350) list_single_idle_plugin_notification_pane_g1

0xe8a2,	// (0x0004e365) cell_ai_notification_pane_ParamLimits

0xe8a2,	// (0x0004e365) cell_ai_notification_pane

0x9132,	// (0x00048bf5) cell_ai_notification_pane_g1

0x913a,	// (0x00048bfd) cell_ai_notification_pane_t1

0xe8af,	// (0x0004e372) tb_ext_find_button_pane

0xe8b7,	// (0x0004e37a) tb_ext_find_pane_g1

0xe8bf,	// (0x0004e382) tb_ext_find_pane_t1

0x3988,	// (0x0004344b) tb_ext_find_button_pane_g1

0x9166,	// (0x00048c29) tb_ext_find_button_pane_g2

0x0001,

0xfdaa,	// (0x0004f86d) tb_ext_find_button_pane_g

0xe6ca,	// (0x0004e18d) main_idle_act4_pane_t1_ParamLimits

0xe6e2,	// (0x0004e1a5) main_idle_act4_pane_t2_ParamLimits

0xfd68,	// (0x0004f82b) main_idle_act4_pane_t_ParamLimits

0xe716,	// (0x0004e1d9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe72d,	// (0x0004e1f0) sat_plugin_idle_act4_pane_ParamLimits

0xe72d,	// (0x0004e1f0) sat_plugin_idle_act4_pane

0xe8cd,	// (0x0004e390) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8cd,	// (0x0004e390) sat_plugin_idle_act4_pane_t1

0xe8e5,	// (0x0004e3a8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8e5,	// (0x0004e3a8) sat_plugin_idle_act4_pane_t2

0xe8fd,	// (0x0004e3c0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8fd,	// (0x0004e3c0) sat_plugin_idle_act4_pane_t3

0xe915,	// (0x0004e3d8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe915,	// (0x0004e3d8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaf,	// (0x0004f872) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaf,	// (0x0004f872) sat_plugin_idle_act4_pane_t

0x0ee7,	// (0x000409aa) popup_battery_window_ParamLimits

0x0ee7,	// (0x000409aa) popup_battery_window

0x2d1b,	// (0x000427de) bg_popup_sub_pane_cp25_ParamLimits

0x2d1b,	// (0x000427de) bg_popup_sub_pane_cp25

0x91bb,	// (0x00048c7e) popup_battery_window_g1_ParamLimits

0x91bb,	// (0x00048c7e) popup_battery_window_g1

0x91c7,	// (0x00048c8a) popup_battery_window_t1_ParamLimits

0x91c7,	// (0x00048c8a) popup_battery_window_t1

0x91d9,	// (0x00048c9c) popup_battery_window_t2_ParamLimits

0x91d9,	// (0x00048c9c) popup_battery_window_t2

0x0001,

0xfdb8,	// (0x0004f87b) popup_battery_window_t_ParamLimits

0xfdb8,	// (0x0004f87b) popup_battery_window_t

0xca3a,	// (0x0004c4fd) midp_canvas_pane_ParamLimits

0xca95,	// (0x0004c558) midp_keypad_pane_ParamLimits

0xca95,	// (0x0004c558) midp_keypad_pane

0x4300,	// (0x00043dc3) main_midp_pane_ParamLimits

0x6f76,	// (0x00046a39) signal_pane_g2_cp_ParamLimits

0xe92d,	// (0x0004e3f0) aid_size_cell_midp_keypad_ParamLimits

0xe92d,	// (0x0004e3f0) aid_size_cell_midp_keypad

0xe94b,	// (0x0004e40e) midp_keyp_game_grid_pane_ParamLimits

0xe94b,	// (0x0004e40e) midp_keyp_game_grid_pane

0xe972,	// (0x0004e435) midp_keyp_rocker_pane_ParamLimits

0xe972,	// (0x0004e435) midp_keyp_rocker_pane

0xe9b7,	// (0x0004e47a) midp_keyp_sk_left_pane_ParamLimits

0xe9b7,	// (0x0004e47a) midp_keyp_sk_left_pane

0xea0b,	// (0x0004e4ce) midp_keyp_sk_right_pane_ParamLimits

0xea0b,	// (0x0004e4ce) midp_keyp_sk_right_pane

0x299d,	// (0x00042460) bg_button_pane_cp03

0xea5f,	// (0x0004e522) midp_keyp_sk_left_pane_g1

0x299d,	// (0x00042460) bg_button_pane_cp04

0xea5f,	// (0x0004e522) midp_keyp_sk_right_pane_g1

0x7480,	// (0x00046f43) midp_keyp_rocker_pane_g1

0xea68,	// (0x0004e52b) keyp_game_cell_pane_ParamLimits

0xea68,	// (0x0004e52b) keyp_game_cell_pane

0x299d,	// (0x00042460) bg_button_pane_cp02

0xea8e,	// (0x0004e551) keyp_game_cell_pane_g1

0xba43,	// (0x0004b506) popup_fep_vkb2_window_ParamLimits

0xba43,	// (0x0004b506) popup_fep_vkb2_window

0xc29b,	// (0x0004bd5e) aid_size_cell_vkb2_ParamLimits

0xc29b,	// (0x0004bd5e) aid_size_cell_vkb2

0xc2c9,	// (0x0004bd8c) popup_fep_vkb2_window_g1_ParamLimits

0xc2c9,	// (0x0004bd8c) popup_fep_vkb2_window_g1

0xc319,	// (0x0004bddc) vkb2_area_bottom_pane_ParamLimits

0xc319,	// (0x0004bddc) vkb2_area_bottom_pane

0xc375,	// (0x0004be38) vkb2_area_keypad_pane_ParamLimits

0xc375,	// (0x0004be38) vkb2_area_keypad_pane

0xc3c3,	// (0x0004be86) vkb2_area_top_pane_ParamLimits

0xc3c3,	// (0x0004be86) vkb2_area_top_pane

0xc449,	// (0x0004bf0c) vkb2_top_entry_pane_ParamLimits

0xc449,	// (0x0004bf0c) vkb2_top_entry_pane

0xc476,	// (0x0004bf39) vkb2_top_grid_left_pane_ParamLimits

0xc476,	// (0x0004bf39) vkb2_top_grid_left_pane

0xc496,	// (0x0004bf59) vkb2_top_grid_right_pane_ParamLimits

0xc496,	// (0x0004bf59) vkb2_top_grid_right_pane

0x2436,	// (0x00041ef9) vkb2_cell_keypad_pane_ParamLimits

0x2436,	// (0x00041ef9) vkb2_cell_keypad_pane

0xc4dc,	// (0x0004bf9f) vkb2_area_bottom_grid_pane_ParamLimits

0xc4dc,	// (0x0004bf9f) vkb2_area_bottom_grid_pane

0xc506,	// (0x0004bfc9) vkb2_area_bottom_pane_g1_ParamLimits

0xc506,	// (0x0004bfc9) vkb2_area_bottom_pane_g1

0xc52c,	// (0x0004bfef) vkb2_area_bottom_pane_g2_ParamLimits

0xc52c,	// (0x0004bfef) vkb2_area_bottom_pane_g2

0xc55d,	// (0x0004c020) vkb2_area_bottom_pane_g3_ParamLimits

0xc55d,	// (0x0004c020) vkb2_area_bottom_pane_g3

0x0002,

0xfdbd,	// (0x0004f880) vkb2_area_bottom_pane_g_ParamLimits

0xfdbd,	// (0x0004f880) vkb2_area_bottom_pane_g

0x25c5,	// (0x00042088) vkb2_top_cell_left_pane_ParamLimits

0x25c5,	// (0x00042088) vkb2_top_cell_left_pane

0xea97,	// (0x0004e55a) vkb2_top_entry_pane_g1_ParamLimits

0xea97,	// (0x0004e55a) vkb2_top_entry_pane_g1

0xeaa5,	// (0x0004e568) vkb2_top_entry_pane_t1_ParamLimits

0xeaa5,	// (0x0004e568) vkb2_top_entry_pane_t1

0x9366,	// (0x00048e29) vkb2_top_entry_pane_t2_ParamLimits

0x9366,	// (0x00048e29) vkb2_top_entry_pane_t2

0x937e,	// (0x00048e41) vkb2_top_entry_pane_t3_ParamLimits

0x937e,	// (0x00048e41) vkb2_top_entry_pane_t3

0x0002,

0xfdc4,	// (0x0004f887) vkb2_top_entry_pane_t_ParamLimits

0xfdc4,	// (0x0004f887) vkb2_top_entry_pane_t

0xc5c7,	// (0x0004c08a) vkb2_top_grid_right_pane_g1_ParamLimits

0xc5c7,	// (0x0004c08a) vkb2_top_grid_right_pane_g1

0x2628,	// (0x000420eb) vkb2_top_grid_right_pane_g2_ParamLimits

0x2628,	// (0x000420eb) vkb2_top_grid_right_pane_g2

0x2640,	// (0x00042103) vkb2_top_grid_right_pane_g3_ParamLimits

0x2640,	// (0x00042103) vkb2_top_grid_right_pane_g3

0xc5dd,	// (0x0004c0a0) vkb2_top_grid_right_pane_g4_ParamLimits

0xc5dd,	// (0x0004c0a0) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcb,	// (0x0004f88e) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcb,	// (0x0004f88e) vkb2_top_grid_right_pane_g

0x266e,	// (0x00042131) vkb2_top_cell_left_pane_g1

0x2685,	// (0x00042148) vkb2_cell_keypad_pane_g1_ParamLimits

0x2685,	// (0x00042148) vkb2_cell_keypad_pane_g1

0x9394,	// (0x00048e57) vkb2_cell_keypad_pane_t1_ParamLimits

0x9394,	// (0x00048e57) vkb2_cell_keypad_pane_t1

0x26a9,	// (0x0004216c) vkb2_cell_bottom_grid_pane_ParamLimits

0x26a9,	// (0x0004216c) vkb2_cell_bottom_grid_pane

0x26e2,	// (0x000421a5) vkb2_cell_bottom_grid_pane_g1

0xe75e,	// (0x0004e221) aid_call2_pane_cp02

0xe766,	// (0x0004e229) aid_call_pane_cp02

0xe76e,	// (0x0004e231) clock_digital_number_pane_cp10

0xe776,	// (0x0004e239) clock_digital_number_pane_cp11

0xe77e,	// (0x0004e241) clock_digital_number_pane_cp12

0xe786,	// (0x0004e249) clock_digital_number_pane_cp13

0xe78e,	// (0x0004e251) clock_digital_separator_pane_cp10

0x3988,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g1

0x3988,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g2

0xe796,	// (0x0004e259) popup_clock_digital_analogue_window_cp2_g3

0x3988,	// (0x0004344b) popup_clock_digital_analogue_window_cp2_g4

0xe796,	// (0x0004e259) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd80,	// (0x0004f843) popup_clock_digital_analogue_window_cp2_g

0xe79e,	// (0x0004e261) popup_clock_digital_analogue_window_cp2_t1

0xe7ac,	// (0x0004e26f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8b,	// (0x0004f84e) popup_clock_digital_analogue_window_cp2_t

0x7480,	// (0x00046f43) clock_digital_number_pane_cp10_g1

0x7480,	// (0x00046f43) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0004f636) clock_digital_number_pane_cp10_g

0x7480,	// (0x00046f43) clock_digital_separator_pane_cp10_g1

0x7480,	// (0x00046f43) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0004f636) clock_digital_separator_pane_cp10_g

0x8e05,	// (0x000488c8) uniindi_top_pane_g3

0x8e16,	// (0x000488d9) uniindi_top_pane_g4

0x24a6,	// (0x00041f69) vkb2_row_keypad_pane_ParamLimits

0x24a6,	// (0x00041f69) vkb2_row_keypad_pane

0x26fe,	// (0x000421c1) vkb2_cell_t_keypad_pane_ParamLimits

0x26fe,	// (0x000421c1) vkb2_cell_t_keypad_pane

0x270e,	// (0x000421d1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x270e,	// (0x000421d1) vkb2_cell_t_keypad_pane_cp08

0x2723,	// (0x000421e6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2723,	// (0x000421e6) vkb2_cell_t_keypad_pane_cp09

0x2737,	// (0x000421fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2737,	// (0x000421fa) vkb2_cell_t_keypad_pane_cp01

0x2748,	// (0x0004220b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2748,	// (0x0004220b) vkb2_cell_t_keypad_pane_cp02

0x2759,	// (0x0004221c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2759,	// (0x0004221c) vkb2_cell_t_keypad_pane_cp03

0x276a,	// (0x0004222d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x276a,	// (0x0004222d) vkb2_cell_t_keypad_pane_cp04

0x277b,	// (0x0004223e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x277b,	// (0x0004223e) vkb2_cell_t_keypad_pane_cp05

0x278c,	// (0x0004224f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x278c,	// (0x0004224f) vkb2_cell_t_keypad_pane_cp06

0x279f,	// (0x00042262) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x279f,	// (0x00042262) vkb2_cell_t_keypad_pane_cp07

0x27b4,	// (0x00042277) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x27b4,	// (0x00042277) vkb2_cell_t_keypad_pane_cp10

0x7718,	// (0x000471db) vkb2_cell_t_keypad_pane_g1

0x93ab,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1

0x299d,	// (0x00042460) popup_grid_graphic2_window

0xeade,	// (0x0004e5a1) aid_size_cell_graphic2_ParamLimits

0xeade,	// (0x0004e5a1) aid_size_cell_graphic2

0x54b1,	// (0x00044f74) bg_popup_window_pane_cp21_ParamLimits

0x54b1,	// (0x00044f74) bg_popup_window_pane_cp21

0xeb10,	// (0x0004e5d3) graphic2_pages_pane_ParamLimits

0xeb10,	// (0x0004e5d3) graphic2_pages_pane

0xeb68,	// (0x0004e62b) grid_graphic2_control_pane_ParamLimits

0xeb68,	// (0x0004e62b) grid_graphic2_control_pane

0xeb9c,	// (0x0004e65f) grid_graphic2_pane_ParamLimits

0xeb9c,	// (0x0004e65f) grid_graphic2_pane

0xec13,	// (0x0004e6d6) cell_graphic2_pane

0x299d,	// (0x00042460) main_comp_mode_pane

0x8676,	// (0x00048139) list_ai3_gene_pane_ParamLimits

0xe499,	// (0x0004df5c) bg_popup_window_pane_cp19_ParamLimits

0x8a4a,	// (0x0004850d) bg_touch_area_indi_pane_ParamLimits

0x8a4a,	// (0x0004850d) bg_touch_area_indi_pane

0x8a60,	// (0x00048523) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a60,	// (0x00048523) bg_touch_area_indi_pane_cp01

0x8a78,	// (0x0004853b) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a78,	// (0x0004853b) bg_touch_area_indi_pane_cp02

0x8a92,	// (0x00048555) bg_touch_area_indi_pane_cp03_ParamLimits

0x8a92,	// (0x00048555) bg_touch_area_indi_pane_cp03

0x8aac,	// (0x0004856f) popup_slider_window_g1_ParamLimits

0x8ac8,	// (0x0004858b) popup_slider_window_g2_ParamLimits

0x8ae4,	// (0x000485a7) popup_slider_window_g3_ParamLimits

0xfd15,	// (0x0004f7d8) popup_slider_window_g_ParamLimits

0x8b40,	// (0x00048603) popup_slider_window_t1_ParamLimits

0x8bb4,	// (0x00048677) small_volume_slider_vertical_pane_ParamLimits

0xec13,	// (0x0004e6d6) cell_graphic2_pane_ParamLimits

0xec76,	// (0x0004e739) bg_button_pane_cp10_ParamLimits

0xec76,	// (0x0004e739) bg_button_pane_cp10

0xec89,	// (0x0004e74c) bg_button_pane_cp11_ParamLimits

0xec89,	// (0x0004e74c) bg_button_pane_cp11

0xec9c,	// (0x0004e75f) graphic2_pages_pane_g1_ParamLimits

0xec9c,	// (0x0004e75f) graphic2_pages_pane_g1

0xecb7,	// (0x0004e77a) graphic2_pages_pane_g2_ParamLimits

0xecb7,	// (0x0004e77a) graphic2_pages_pane_g2

0x0001,

0xfdd9,	// (0x0004f89c) graphic2_pages_pane_g_ParamLimits

0xfdd9,	// (0x0004f89c) graphic2_pages_pane_g

0xeccf,	// (0x0004e792) graphic2_pages_pane_t1_ParamLimits

0xeccf,	// (0x0004e792) graphic2_pages_pane_t1

0xece7,	// (0x0004e7aa) cell_graphic2_control_pane_ParamLimits

0xece7,	// (0x0004e7aa) cell_graphic2_control_pane

0xed01,	// (0x0004e7c4) cell_graphic2_pane_g1_ParamLimits

0xed01,	// (0x0004e7c4) cell_graphic2_pane_g1

0xde1a,	// (0x0004d8dd) cell_graphic2_pane_g2_ParamLimits

0xde1a,	// (0x0004d8dd) cell_graphic2_pane_g2

0xed0e,	// (0x0004e7d1) cell_graphic2_pane_g3_ParamLimits

0xed0e,	// (0x0004e7d1) cell_graphic2_pane_g3

0xde27,	// (0x0004d8ea) cell_graphic2_pane_g4_ParamLimits

0xde27,	// (0x0004d8ea) cell_graphic2_pane_g4

0xed1b,	// (0x0004e7de) cell_graphic2_pane_g5_ParamLimits

0xed1b,	// (0x0004e7de) cell_graphic2_pane_g5

0x0004,

0xfdde,	// (0x0004f8a1) cell_graphic2_pane_g_ParamLimits

0xfdde,	// (0x0004f8a1) cell_graphic2_pane_g

0xed3b,	// (0x0004e7fe) cell_graphic2_pane_t1_ParamLimits

0xed3b,	// (0x0004e7fe) cell_graphic2_pane_t1

0x5b28,	// (0x000455eb) grid_highlight_pane_cp11_ParamLimits

0x5b28,	// (0x000455eb) grid_highlight_pane_cp11

0x3318,	// (0x00042ddb) bg_button_pane_cp05

0xed52,	// (0x0004e815) cell_graphic2_control_pane_g1

0x7480,	// (0x00046f43) bg_touch_area_indi_pane_g1

0x9613,	// (0x000490d6) aid_cmod_rocker_key_size

0x961d,	// (0x000490e0) aid_cmode_itu_key_size

0x9627,	// (0x000490ea) main_cmode_video_pane

0x9631,	// (0x000490f4) main_comp_mode_itu_pane

0x963d,	// (0x00049100) main_comp_mode_rocker_pane

0x9649,	// (0x0004910c) cell_cmode_rocker_pane_ParamLimits

0x9649,	// (0x0004910c) cell_cmode_rocker_pane

0x965d,	// (0x00049120) cell_cmode_itu_pane_ParamLimits

0x965d,	// (0x00049120) cell_cmode_itu_pane

0x3318,	// (0x00042ddb) bg_button_pane_cp06_ParamLimits

0x3318,	// (0x00042ddb) bg_button_pane_cp06

0x7718,	// (0x000471db) cell_cmode_rocker_pane_g1_ParamLimits

0x7718,	// (0x000471db) cell_cmode_rocker_pane_g1

0x8c5b,	// (0x0004871e) cell_cmode_rocker_pane_g2_ParamLimits

0x8c5b,	// (0x0004871e) cell_cmode_rocker_pane_g2

0x0001,

0xfde9,	// (0x0004f8ac) cell_cmode_rocker_pane_g_ParamLimits

0xfde9,	// (0x0004f8ac) cell_cmode_rocker_pane_g

0x299d,	// (0x00042460) bg_button_pane_cp07

0x9674,	// (0x00049137) cell_cmode_itu_pane_g1

0x967d,	// (0x00049140) cell_cmode_itu_pane_t1

0x968b,	// (0x0004914e) cell_cmode_itu_pane_t2

0x0001,

0xfdee,	// (0x0004f8b1) cell_cmode_itu_pane_t

0x8e89,	// (0x0004894c) aid_touch_ctrl_left

0x8e91,	// (0x00048954) aid_touch_ctrl_right

0x299d,	// (0x00042460) compa_mode_pane

0xed5f,	// (0x0004e822) aid_cmod_rocker_key_size_cp

0xed69,	// (0x0004e82c) aid_cmode_itu_key_size_cp

0x96ad,	// (0x00049170) compa_mode_pane_g1

0x96b5,	// (0x00049178) compa_mode_pane_g2

0x96bd,	// (0x00049180) compa_mode_pane_g3

0x0002,

0xfdf3,	// (0x0004f8b6) compa_mode_pane_g

0xed73,	// (0x0004e836) main_comp_mode_itu_pane_cp

0xed7b,	// (0x0004e83e) main_comp_mode_rocker_pane_cp

0xed83,	// (0x0004e846) cell_cmode_itu_pane_cp_ParamLimits

0xed83,	// (0x0004e846) cell_cmode_itu_pane_cp

0xed98,	// (0x0004e85b) cell_cmode_rocker_pane_cp_ParamLimits

0xed98,	// (0x0004e85b) cell_cmode_rocker_pane_cp

0x3318,	// (0x00042ddb) bg_button_pane_cp06_cp_ParamLimits

0x3318,	// (0x00042ddb) bg_button_pane_cp06_cp

0x7718,	// (0x000471db) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7718,	// (0x000471db) cell_cmode_rocker_pane_g1_cp

0x7480,	// (0x00046f43) cell_cmode_rocker_pane_g2_cp

0x299d,	// (0x00042460) bg_button_pane_cp07_cp

0xedaa,	// (0x0004e86d) cell_cmode_itu_pane_g1_cp

0xedb3,	// (0x0004e876) cell_cmode_itu_pane_t1_cp

0xedb3,	// (0x0004e876) cell_cmode_itu_pane_t2_cp

0xda82,	// (0x0004d545) settings_code_pane_cp2

0x2a91,	// (0x00042554) bg_popup_window_pane_cp3_ParamLimits

0x2f09,	// (0x000429cc) heading_pane_cp3_ParamLimits

0x2f15,	// (0x000429d8) listscroll_popup_graphic_pane_ParamLimits

0x1cb7,	// (0x0004177a) fep_hwr_aid_pane_ParamLimits

0x2199,	// (0x00041c5c) aid_touch_sctrl_top_ParamLimits

0x21a6,	// (0x00041c69) sctrl_sk_top_pane_g1_ParamLimits

0x7718,	// (0x000471db) sctrl_sk_top_pane_g2_ParamLimits

0xfd2e,	// (0x0004f7f1) sctrl_sk_top_pane_g_ParamLimits

0x21b3,	// (0x00041c76) sctrl_sk_top_pane_t1_ParamLimits

0x2199,	// (0x00041c5c) aid_touch_sctrl_bottom_ParamLimits

0x21b3,	// (0x00041c76) sctrl_sk_bottom_pane_t1_ParamLimits

0x8dcf,	// (0x00048892) aid_area_touch_clock

0xc40b,	// (0x0004bece) aid_vkb2_area_top_pane_cell_ParamLimits

0xc40b,	// (0x0004bece) aid_vkb2_area_top_pane_cell

0xc4b6,	// (0x0004bf79) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc4b6,	// (0x0004bf79) aid_vkb2_area_bottom_pane_cell

0x9338,	// (0x00048dfb) popup_char_count_window

0x9713,	// (0x000491d6) popup_char_count_window_g1

0x971c,	// (0x000491df) popup_char_count_window_g2

0x9725,	// (0x000491e8) popup_char_count_window_g3

0x0002,

0xfdfa,	// (0x0004f8bd) popup_char_count_window_g

0x972e,	// (0x000491f1) popup_char_count_window_t1

0x2252,	// (0x00041d15) popup_fep_char_preview_window_ParamLimits

0x2252,	// (0x00041d15) popup_fep_char_preview_window

0xc42b,	// (0x0004beee) vkb2_top_candi_pane_ParamLimits

0xc42b,	// (0x0004beee) vkb2_top_candi_pane

0xedc1,	// (0x0004e884) cell_vkb2_top_candi_pane_ParamLimits

0xedc1,	// (0x0004e884) cell_vkb2_top_candi_pane

0x54b1,	// (0x00044f74) bg_popup_fep_char_preview_window_ParamLimits

0x54b1,	// (0x00044f74) bg_popup_fep_char_preview_window

0x27c9,	// (0x0004228c) popup_fep_char_preview_window_t1_ParamLimits

0x27c9,	// (0x0004228c) popup_fep_char_preview_window_t1

0x978d,	// (0x00049250) bg_popup_fep_char_preview_window_g1

0x9795,	// (0x00049258) bg_popup_fep_char_preview_window_g2

0x979d,	// (0x00049260) bg_popup_fep_char_preview_window_g3

0x97a5,	// (0x00049268) bg_popup_fep_char_preview_window_g4

0x97ad,	// (0x00049270) bg_popup_fep_char_preview_window_g5

0x2803,	// (0x000422c6) bg_popup_fep_char_preview_window_g6

0x97b5,	// (0x00049278) bg_popup_fep_char_preview_window_g7

0x97bd,	// (0x00049280) bg_popup_fep_char_preview_window_g8

0x97c5,	// (0x00049288) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe01,	// (0x0004f8c4) bg_popup_fep_char_preview_window_g

0x7718,	// (0x000471db) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7718,	// (0x000471db) cell_vkb2_top_candi_pane_g1

0x7a59,	// (0x0004751c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7a59,	// (0x0004751c) cell_vkb2_top_candi_pane_g2

0x7a7a,	// (0x0004753d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7a7a,	// (0x0004753d) cell_vkb2_top_candi_pane_g3

0x280b,	// (0x000422ce) cell_vkb2_top_candi_pane_g4_ParamLimits

0x280b,	// (0x000422ce) cell_vkb2_top_candi_pane_g4

0x97cd,	// (0x00049290) cell_vkb2_top_candi_pane_g5_ParamLimits

0x97cd,	// (0x00049290) cell_vkb2_top_candi_pane_g5

0x8c5b,	// (0x0004871e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8c5b,	// (0x0004871e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe14,	// (0x0004f8d7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe14,	// (0x0004f8d7) cell_vkb2_top_candi_pane_g

0x282c,	// (0x000422ef) cell_vkb2_top_candi_pane_t1

0x1ac9,	// (0x0004158c) aid_size_touch_slider_mark_ParamLimits

0x1ac9,	// (0x0004158c) aid_size_touch_slider_mark

0xeb4c,	// (0x0004e60f) grid_graphic2_catg_pane_ParamLimits

0xeb4c,	// (0x0004e60f) grid_graphic2_catg_pane

0xebe2,	// (0x0004e6a5) popup_grid_graphic2_window_t1_ParamLimits

0xebe2,	// (0x0004e6a5) popup_grid_graphic2_window_t1

0xebf8,	// (0x0004e6bb) popup_grid_graphic2_window_t2_ParamLimits

0xebf8,	// (0x0004e6bb) popup_grid_graphic2_window_t2

0x0001,

0xfdd4,	// (0x0004f897) popup_grid_graphic2_window_t_ParamLimits

0xfdd4,	// (0x0004f897) popup_grid_graphic2_window_t

0x3318,	// (0x00042ddb) bg_button_pane_cp05_ParamLimits

0xed52,	// (0x0004e815) cell_graphic2_control_pane_g1_ParamLimits

0xee15,	// (0x0004e8d8) cell_graphic2_catg_pane_ParamLimits

0xee15,	// (0x0004e8d8) cell_graphic2_catg_pane

0x299d,	// (0x00042460) bg_button_pane_cp12

0xee27,	// (0x0004e8ea) cell_graphic2_catg_pane_g1

0x8d9b,	// (0x0004885e) cell_tb_ext_pane_t1_ParamLimits

0x25e5,	// (0x000420a8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25e5,	// (0x000420a8) vkb2_top_cell_right_narrow_pane

0x25fd,	// (0x000420c0) vkb2_top_cell_right_wide_pane_ParamLimits

0x25fd,	// (0x000420c0) vkb2_top_cell_right_wide_pane

0x74f0,	// (0x00046fb3) bg_vkb2_func_pane_ParamLimits

0x74f0,	// (0x00046fb3) bg_vkb2_func_pane

0x266e,	// (0x00042131) vkb2_top_cell_left_pane_g1_ParamLimits

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp03

0x26e2,	// (0x000421a5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4e44,	// (0x00044907) bg_vkb2_func_pane_g1

0x4e4c,	// (0x0004490f) bg_vkb2_func_pane_g2

0x4e5c,	// (0x0004491f) bg_vkb2_func_pane_g3

0x4e54,	// (0x00044917) bg_vkb2_func_pane_g4

0x4e64,	// (0x00044927) bg_vkb2_func_pane_g5

0x4e6c,	// (0x0004492f) bg_vkb2_func_pane_g6

0x4e74,	// (0x00044937) bg_vkb2_func_pane_g7

0x4e7c,	// (0x0004493f) bg_vkb2_func_pane_g8

0x4e3c,	// (0x000448ff) bg_vkb2_func_pane_g9

0x0008,

0xfe21,	// (0x0004f8e4) bg_vkb2_func_pane_g

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp01

0x266e,	// (0x00042131) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x266e,	// (0x00042131) vkb2_top_cell_right_wide_pane_g1

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x74f0,	// (0x00046fb3) bg_vkb2_fuc_pane_cp02

0x26e2,	// (0x000421a5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26e2,	// (0x000421a5) vkb2_top_cell_right_narrow_pane_g1

0xe3d3,	// (0x0004de96) aid_touch_area_decrease_ParamLimits

0xe3d3,	// (0x0004de96) aid_touch_area_decrease

0xe40d,	// (0x0004ded0) aid_touch_area_increase_ParamLimits

0xe40d,	// (0x0004ded0) aid_touch_area_increase

0xe435,	// (0x0004def8) aid_touch_area_mute_ParamLimits

0xe435,	// (0x0004def8) aid_touch_area_mute

0xe465,	// (0x0004df28) aid_touch_area_slider_ParamLimits

0xe465,	// (0x0004df28) aid_touch_area_slider

0xe4a5,	// (0x0004df68) popup_slider_window_g4_ParamLimits

0xe4a5,	// (0x0004df68) popup_slider_window_g4

0xe4cd,	// (0x0004df90) popup_slider_window_g5_ParamLimits

0xe4cd,	// (0x0004df90) popup_slider_window_g5

0xe501,	// (0x0004dfc4) popup_slider_window_g6_ParamLimits

0xe501,	// (0x0004dfc4) popup_slider_window_g6

0x8b6e,	// (0x00048631) popup_slider_window_t2_ParamLimits

0x8b6e,	// (0x00048631) popup_slider_window_t2

0x0001,

0xfd22,	// (0x0004f7e5) popup_slider_window_t_ParamLimits

0xfd22,	// (0x0004f7e5) popup_slider_window_t

0xe51d,	// (0x0004dfe0) slider_pane_ParamLimits

0xe51d,	// (0x0004dfe0) slider_pane

0x9809,	// (0x000492cc) slider_pane_g1_ParamLimits

0x9809,	// (0x000492cc) slider_pane_g1

0x981d,	// (0x000492e0) slider_pane_g2_ParamLimits

0x981d,	// (0x000492e0) slider_pane_g2

0x9833,	// (0x000492f6) slider_pane_g3_ParamLimits

0x9833,	// (0x000492f6) slider_pane_g3

0x0003,

0xfe34,	// (0x0004f8f7) slider_pane_g_ParamLimits

0xfe34,	// (0x0004f8f7) slider_pane_g

0xd1b7,	// (0x0004cc7a) popup_tb_float_extension_window_ParamLimits

0xd1b7,	// (0x0004cc7a) popup_tb_float_extension_window

0x985f,	// (0x00049322) aid_size_cell_tb_float_ext

0x299d,	// (0x00042460) bg_popup_sub_window_cp28

0x986b,	// (0x0004932e) grid_tb_float_ext_pane

0x9877,	// (0x0004933a) cell_tb_float_ext_pane_ParamLimits

0x9877,	// (0x0004933a) cell_tb_float_ext_pane

0x9893,	// (0x00049356) cell_tb_float_ext_pane_g1

0x989c,	// (0x0004935f) grid_highlight_pane_cp12

0xc194,	// (0x0004bc57) cell_last_hwr_side_pane_ParamLimits

0xc194,	// (0x0004bc57) cell_last_hwr_side_pane

0x7480,	// (0x00046f43) cell_last_hwr_side_pane_g1

0x98a5,	// (0x00049368) cell_last_hwr_side_pane_g2

0x0001,

0xfe3d,	// (0x0004f900) cell_last_hwr_side_pane_g

0xc592,	// (0x0004c055) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc592,	// (0x0004c055) vkb2_area_bottom_space_btn_pane

0x7718,	// (0x000471db) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x93ab,	// (0x00048e6e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x282c,	// (0x000422ef) cell_vkb2_top_candi_pane_t1_ParamLimits

0x284a,	// (0x0004230d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x284a,	// (0x0004230d) vkb2_area_bottom_space_btn_pane_g1

0x2884,	// (0x00042347) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2884,	// (0x00042347) vkb2_area_bottom_space_btn_pane_g2

0x28ba,	// (0x0004237d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x28ba,	// (0x0004237d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe42,	// (0x0004f905) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe42,	// (0x0004f905) vkb2_area_bottom_space_btn_pane_g

0x1d60,	// (0x00041823) cel_fep_hwr_func_pane_ParamLimits

0x1d60,	// (0x00041823) cel_fep_hwr_func_pane

0xc169,	// (0x0004bc2c) cell_hwr_side_button_pane_ParamLimits

0xc169,	// (0x0004bc2c) cell_hwr_side_button_pane

0x8dcf,	// (0x00048892) aid_area_touch_clock_ParamLimits

0x2d1b,	// (0x000427de) bg_uniindi_top_pane_ParamLimits

0x8de3,	// (0x000488a6) uniindi_top_pane_g1_ParamLimits

0x8df9,	// (0x000488bc) uniindi_top_pane_g2_ParamLimits

0x8e05,	// (0x000488c8) uniindi_top_pane_g3_ParamLimits

0x8e16,	// (0x000488d9) uniindi_top_pane_g4_ParamLimits

0xfd5a,	// (0x0004f81d) uniindi_top_pane_g_ParamLimits

0x8e23,	// (0x000488e6) uniindi_top_pane_t1_ParamLimits

0x2d1b,	// (0x000427de) bg_vkb2_func_pane_cp01_ParamLimits

0x2d1b,	// (0x000427de) bg_vkb2_func_pane_cp01

0x98ae,	// (0x00049371) cel_fep_hwr_func_pane_g1_ParamLimits

0x98ae,	// (0x00049371) cel_fep_hwr_func_pane_g1

0x2d1b,	// (0x000427de) bg_vkb2_func_pane_cp02_ParamLimits

0x2d1b,	// (0x000427de) bg_vkb2_func_pane_cp02

0x98ae,	// (0x00049371) cell_hwr_side_button_pane_g1_ParamLimits

0x98ae,	// (0x00049371) cell_hwr_side_button_pane_g1

0x4cbd,	// (0x00044780) status_pane_g4_ParamLimits

0x4cbd,	// (0x00044780) status_pane_g4

0x4cd7,	// (0x0004479a) status_pane_t1

0x721c,	// (0x00046cdf) form2_midp_gauge_slider_cont_pane

0x7224,	// (0x00046ce7) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd3d,	// (0x0004d800) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd4f,	// (0x0004d812) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0004f5e9) form2_midp_gauge_slider_pane_t_ParamLimits

0x725a,	// (0x00046d1d) form2_midp_slider_pane_ParamLimits

0x221a,	// (0x00041cdd) aid_size_cell_func_vkb2_ParamLimits

0x221a,	// (0x00041cdd) aid_size_cell_func_vkb2

0x984b,	// (0x0004930e) slider_pane_g4_ParamLimits

0x984b,	// (0x0004930e) slider_pane_g4

0xc5f3,	// (0x0004c0b6) form2_midp_gauge_slider_pane_t2_cp01

0xc601,	// (0x0004c0c4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc601,	// (0x0004c0c4) form2_midp_gauge_slider_pane_t3_cp01

0x292f,	// (0x000423f2) form2_midp_slider_pane_cp01

0x299d,	// (0x00042460) navi_smil_pane

0x98e7,	// (0x000493aa) navi_smil_pane_g1

0x98ef,	// (0x000493b2) navi_smil_pane_t1

0x98bc,	// (0x0004937f) form2_midp_slider_pane_g1

0x98c5,	// (0x00049388) form2_midp_slider_pane_g2

0x98cd,	// (0x00049390) form2_midp_slider_pane_g3

0x98bc,	// (0x0004937f) form2_midp_slider_pane_g4

0xee30,	// (0x0004e8f3) form2_midp_slider_pane_g5

0x0004,

0xfe4b,	// (0x0004f90e) form2_midp_slider_pane_g

0x28f4,	// (0x000423b7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28f4,	// (0x000423b7) vkb2_area_bottom_space_btn_pane_g4

0xd397,	// (0x0004ce5a) lc0_navi_pane_ParamLimits

0xd397,	// (0x0004ce5a) lc0_navi_pane

0xd407,	// (0x0004ceca) lc0_stat_indi_pane_ParamLimits

0xd407,	// (0x0004ceca) lc0_stat_indi_pane

0xd41c,	// (0x0004cedf) ls0_title_pane_ParamLimits

0xd41c,	// (0x0004cedf) ls0_title_pane

0x3318,	// (0x00042ddb) bg_popup_sub_pane_cp14_ParamLimits

0x8db6,	// (0x00048879) list_uniindi_pane_ParamLimits

0x8dc2,	// (0x00048885) uniindi_top_pane_ParamLimits

0x8e61,	// (0x00048924) list_single_uniindi_pane_g1_ParamLimits

0x8e74,	// (0x00048937) list_single_uniindi_pane_t1_ParamLimits

0xc61e,	// (0x0004c0e1) lc0_stat_clock_pane_ParamLimits

0xc61e,	// (0x0004c0e1) lc0_stat_clock_pane

0xee39,	// (0x0004e8fc) lc0_stat_indi_pane_g1_ParamLimits

0xee39,	// (0x0004e8fc) lc0_stat_indi_pane_g1

0xee46,	// (0x0004e909) lc0_stat_indi_pane_g2_ParamLimits

0xee46,	// (0x0004e909) lc0_stat_indi_pane_g2

0x0001,

0xfe56,	// (0x0004f919) lc0_stat_indi_pane_g_ParamLimits

0xfe56,	// (0x0004f919) lc0_stat_indi_pane_g

0xc62b,	// (0x0004c0ee) lc0_uni_indicator_pane_ParamLimits

0xc62b,	// (0x0004c0ee) lc0_uni_indicator_pane

0xee53,	// (0x0004e916) ls0_title_pane_g1_ParamLimits

0xee53,	// (0x0004e916) ls0_title_pane_g1

0xee67,	// (0x0004e92a) ls0_title_pane_t1_ParamLimits

0xee67,	// (0x0004e92a) ls0_title_pane_t1

0xc638,	// (0x0004c0fb) lc0_uni_indicator_pane_g1_ParamLimits

0xc638,	// (0x0004c0fb) lc0_uni_indicator_pane_g1

0x9961,	// (0x00049424) lc0_stat_clock_pane_t1

0x299d,	// (0x00042460) main_ai5_pane

0x996f,	// (0x00049432) ai5_sk_pane_ParamLimits

0x996f,	// (0x00049432) ai5_sk_pane

0xee95,	// (0x0004e958) cell_ai5_widget_pane_ParamLimits

0xee95,	// (0x0004e958) cell_ai5_widget_pane

0x99f2,	// (0x000494b5) aid_size_cell_widget_grid

0x9a06,	// (0x000494c9) bg_ai5_widget_pane_ParamLimits

0x9a06,	// (0x000494c9) bg_ai5_widget_pane

0xef22,	// (0x0004e9e5) cell_ai5_widget_pane_g2

0xef32,	// (0x0004e9f5) cell_ai5_widget_pane_g3

0xef46,	// (0x0004ea09) cell_ai5_widget_pane_g4

0xef52,	// (0x0004ea15) cell_ai5_widget_pane_g5

0xef5e,	// (0x0004ea21) cell_ai5_widget_pane_g6

0xef6a,	// (0x0004ea2d) cell_ai5_widget_pane_g7

0xefb2,	// (0x0004ea75) cell_ai5_widget_pane_t1_ParamLimits

0xefb2,	// (0x0004ea75) cell_ai5_widget_pane_t1

0xefcf,	// (0x0004ea92) cell_ai5_widget_pane_t2_ParamLimits

0xefcf,	// (0x0004ea92) cell_ai5_widget_pane_t2

0xefe7,	// (0x0004eaaa) cell_ai5_widget_pane_t3_ParamLimits

0xefe7,	// (0x0004eaaa) cell_ai5_widget_pane_t3

0xefff,	// (0x0004eac2) cell_ai5_widget_pane_t4_ParamLimits

0xefff,	// (0x0004eac2) cell_ai5_widget_pane_t4

0xf019,	// (0x0004eadc) cell_ai5_widget_pane_t5_ParamLimits

0xf019,	// (0x0004eadc) cell_ai5_widget_pane_t5

0x9b46,	// (0x00049609) cell_ai5_widget_pane_t6_ParamLimits

0x9b46,	// (0x00049609) cell_ai5_widget_pane_t6

0x9b58,	// (0x0004961b) cell_ai5_widget_pane_t7_ParamLimits

0x9b58,	// (0x0004961b) cell_ai5_widget_pane_t7

0xf038,	// (0x0004eafb) cell_ai5_widget_pane_t8_ParamLimits

0xf038,	// (0x0004eafb) cell_ai5_widget_pane_t8

0x0009,

0xfe70,	// (0x0004f933) cell_ai5_widget_pane_t_ParamLimits

0xfe70,	// (0x0004f933) cell_ai5_widget_pane_t

0xf080,	// (0x0004eb43) grid_ai5_widget_pane

0x3318,	// (0x00042ddb) highlight_cell_ai5_widget_pane_ParamLimits

0x3318,	// (0x00042ddb) highlight_cell_ai5_widget_pane

0xf097,	// (0x0004eb5a) ai5_sk_left_pane

0xf0a1,	// (0x0004eb64) ai5_sk_middle_pane

0xf0ab,	// (0x0004eb6e) ai5_sk_right_pane

0x9bee,	// (0x000496b1) bg_ai5_widget_pane_g1_ParamLimits

0x9bee,	// (0x000496b1) bg_ai5_widget_pane_g1

0x9bfa,	// (0x000496bd) bg_ai5_widget_pane_g2_ParamLimits

0x9bfa,	// (0x000496bd) bg_ai5_widget_pane_g2

0x9c06,	// (0x000496c9) bg_ai5_widget_pane_g3_ParamLimits

0x9c06,	// (0x000496c9) bg_ai5_widget_pane_g3

0x9c12,	// (0x000496d5) bg_ai5_widget_pane_g4_ParamLimits

0x9c12,	// (0x000496d5) bg_ai5_widget_pane_g4

0x9c1e,	// (0x000496e1) bg_ai5_widget_pane_g5_ParamLimits

0x9c1e,	// (0x000496e1) bg_ai5_widget_pane_g5

0x9c2a,	// (0x000496ed) bg_ai5_widget_pane_g6_ParamLimits

0x9c2a,	// (0x000496ed) bg_ai5_widget_pane_g6

0x9c36,	// (0x000496f9) bg_ai5_widget_pane_g7_ParamLimits

0x9c36,	// (0x000496f9) bg_ai5_widget_pane_g7

0x9c42,	// (0x00049705) bg_ai5_widget_pane_g8_ParamLimits

0x9c42,	// (0x00049705) bg_ai5_widget_pane_g8

0x9c4e,	// (0x00049711) bg_ai5_widget_pane_g9_ParamLimits

0x9c4e,	// (0x00049711) bg_ai5_widget_pane_g9

0x0008,

0xfe85,	// (0x0004f948) bg_ai5_widget_pane_g_ParamLimits

0xfe85,	// (0x0004f948) bg_ai5_widget_pane_g

0x9c73,	// (0x00049736) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c73,	// (0x00049736) cell_shortcut_ai5_widget_pane

0x2b5d,	// (0x00042620) bg_cell_shortcut_ai5_widget_pane

0x9c85,	// (0x00049748) cell_grid_ai5_widget_pane_g1

0x9c8e,	// (0x00049751) highlight_cell_shortcut_ai5_widget_pane

0x4e4c,	// (0x0004490f) ai5_sk_left_pane_g1

0x9c96,	// (0x00049759) ai5_sk_left_pane_g2

0x9c9e,	// (0x00049761) ai5_sk_left_pane_g3

0x9ca6,	// (0x00049769) ai5_sk_left_pane_g4

0x0003,

0xfe98,	// (0x0004f95b) ai5_sk_left_pane_g

0x9cae,	// (0x00049771) ai5_sk_left_pane_t1

0x4e44,	// (0x00044907) ai5_sk_right_pane_g1

0x9cbc,	// (0x0004977f) ai5_sk_right_pane_g2

0x9cc4,	// (0x00049787) ai5_sk_right_pane_g3

0x9ccc,	// (0x0004978f) ai5_sk_right_pane_g4

0x0003,

0xfea1,	// (0x0004f964) ai5_sk_right_pane_g

0x9cd4,	// (0x00049797) ai5_sk_right_pane_t1

0x4e44,	// (0x00044907) ai5_sk_middle_pane_g1

0x4e4c,	// (0x0004490f) ai5_sk_middle_pane_g2

0x4e64,	// (0x00044927) ai5_sk_middle_pane_g3

0x9cc4,	// (0x00049787) ai5_sk_middle_pane_g4

0x9c9e,	// (0x00049761) ai5_sk_middle_pane_g5

0x9ce2,	// (0x000497a5) ai5_sk_middle_pane_g6

0xf0b5,	// (0x0004eb78) ai5_sk_middle_pane_g7

0x0006,

0xfeaa,	// (0x0004f96d) ai5_sk_middle_pane_g

0xd281,	// (0x0004cd44) aid_touch_area_size_lc0_ParamLimits

0xd281,	// (0x0004cd44) aid_touch_area_size_lc0

0x1eff,	// (0x000419c2) cell_hwr_candidate_pane_t1_ParamLimits

0x4975,	// (0x00044438) aid_touch_navi_pane

0xd526,	// (0x0004cfe9) status_dt_navi_pane_ParamLimits

0xd526,	// (0x0004cfe9) status_dt_navi_pane

0xd53e,	// (0x0004d001) status_dt_sta_pane_ParamLimits

0xd53e,	// (0x0004d001) status_dt_sta_pane

0xf0bd,	// (0x0004eb80) dt_sta_controll_pane

0xf0ca,	// (0x0004eb8d) dt_sta_indi_pane

0xf0d7,	// (0x0004eb9a) dt_sta_title_pane

0x2d1b,	// (0x000427de) bg_dt_sta_indi_pane_ParamLimits

0x2d1b,	// (0x000427de) bg_dt_sta_indi_pane

0xf0e9,	// (0x0004ebac) dt_sta_battery_pane

0xf0f1,	// (0x0004ebb4) dt_sta_indi_pane_g1

0xf0fa,	// (0x0004ebbd) dt_sta_indi_pane_g2

0xf103,	// (0x0004ebc6) dt_sta_indi_pane_g3

0x0002,

0xfeb9,	// (0x0004f97c) dt_sta_indi_pane_g

0xf10c,	// (0x0004ebcf) dt_sta_signal_pane

0x3318,	// (0x00042ddb) bg_dt_sta_title_pane_ParamLimits

0x3318,	// (0x00042ddb) bg_dt_sta_title_pane

0xf115,	// (0x0004ebd8) dt_sta_title_pane_g1

0xf11d,	// (0x0004ebe0) dt_sta_title_pane_t1_ParamLimits

0xf11d,	// (0x0004ebe0) dt_sta_title_pane_t1

0x299d,	// (0x00042460) bg_dt_sta_control_pane

0xf132,	// (0x0004ebf5) dt_sta_controll_pane_g1

0xf13b,	// (0x0004ebfe) bg_dt_sta_title_pane_g1

0xf144,	// (0x0004ec07) bg_dt_sta_title_pane_g2

0xf14d,	// (0x0004ec10) bg_dt_sta_title_pane_g3

0x0002,

0xfec0,	// (0x0004f983) bg_dt_sta_title_pane_g

0x7480,	// (0x00046f43) bg_dt_sta_indi_pane_g1

0x9d90,	// (0x00049853) dt_sta_signal_pane_g1

0x9d98,	// (0x0004985b) dt_sta_signal_pane_g2

0x0001,

0xfec7,	// (0x0004f98a) dt_sta_signal_pane_g

0x9da0,	// (0x00049863) dt_sta_battery_pane_g1

0x9da9,	// (0x0004986c) dt_sta_battery_pane_t1

0x7480,	// (0x00046f43) bg_dt_sta_control_pane_g1

0x3a74,	// (0x00043537) fep_china_uni_eep_pane

0x3a7c,	// (0x0004353f) fep_china_uni_entry_pane_ParamLimits

0x3a8c,	// (0x0004354f) popup_fep_china_uni_window_g1_ParamLimits

0x3a9c,	// (0x0004355f) popup_fep_china_uni_window_g2_ParamLimits

0x3a9c,	// (0x0004355f) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004f225) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004f225) popup_fep_china_uni_window_g

0x9db8,	// (0x0004987b) fep_china_uni_eep_pane_g1

0x9dc0,	// (0x00049883) fep_china_uni_eep_pane_t1

0x98de,	// (0x000493a1) aid_touch_area_size_smil_player

0x4acd,	// (0x00044590) lc0_clock_pane

0x4ccb,	// (0x0004478e) status_pane_g5_ParamLimits

0x4ccb,	// (0x0004478e) status_pane_g5

0xcce1,	// (0x0004c7a4) popup_keymap_window

0x4c89,	// (0x0004474c) status_icon_pane

0xef32,	// (0x0004e9f5) cell_ai5_widget_pane_g3_ParamLimits

0xef46,	// (0x0004ea09) cell_ai5_widget_pane_g4_ParamLimits

0xef52,	// (0x0004ea15) cell_ai5_widget_pane_g5_ParamLimits

0xef76,	// (0x0004ea39) cell_ai5_widget_pane_g8_ParamLimits

0xef76,	// (0x0004ea39) cell_ai5_widget_pane_g8

0xef8a,	// (0x0004ea4d) cell_ai5_widget_pane_g9_ParamLimits

0xef8a,	// (0x0004ea4d) cell_ai5_widget_pane_g9

0xef9e,	// (0x0004ea61) cell_ai5_widget_pane_g10_ParamLimits

0xef9e,	// (0x0004ea61) cell_ai5_widget_pane_g10

0x9dcf,	// (0x00049892) status_icon_pane_g1

0x299d,	// (0x00042460) bg_popup_sub_pane_cp13

0x9dd7,	// (0x0004989a) popup_keymap_window_t1

0xcaed,	// (0x0004c5b0) control_pane_g6_ParamLimits

0xcaed,	// (0x0004c5b0) control_pane_g6

0xcafa,	// (0x0004c5bd) control_pane_g7_ParamLimits

0xcafa,	// (0x0004c5bd) control_pane_g7

0xcb07,	// (0x0004c5ca) control_pane_g8_ParamLimits

0xcb07,	// (0x0004c5ca) control_pane_g8

0xf0bd,	// (0x0004eb80) dt_sta_controll_pane_ParamLimits

0xf0ca,	// (0x0004eb8d) dt_sta_indi_pane_ParamLimits

0xf0d7,	// (0x0004eb9a) dt_sta_title_pane_ParamLimits

0x3250,	// (0x00042d13) aid_size_touch_scroll_bar_cale

0x0eff,	// (0x000409c2) popup_discreet_window_ParamLimits

0x0eff,	// (0x000409c2) popup_discreet_window

0xba8d,	// (0x0004b550) popup_sk_window

0x54b1,	// (0x00044f74) bg_popup_sub_pane_cp28_ParamLimits

0x54b1,	// (0x00044f74) bg_popup_sub_pane_cp28

0x9de5,	// (0x000498a8) popup_discreet_window_g1_ParamLimits

0x9de5,	// (0x000498a8) popup_discreet_window_g1

0x9e05,	// (0x000498c8) popup_discreet_window_t1_ParamLimits

0x9e05,	// (0x000498c8) popup_discreet_window_t1

0x9e23,	// (0x000498e6) popup_discreet_window_t2_ParamLimits

0x9e23,	// (0x000498e6) popup_discreet_window_t2

0x0002,

0xfecc,	// (0x0004f98f) popup_discreet_window_t_ParamLimits

0xfecc,	// (0x0004f98f) popup_discreet_window_t

0x2965,	// (0x00042428) popup_sk_window_g1

0x296f,	// (0x00042432) popup_sk_window_g2

0x0001,

0xfed3,	// (0x0004f996) popup_sk_window_g

0x9e75,	// (0x00049938) popup_sk_window_t1

0x9e83,	// (0x00049946) popup_sk_window_t1_copy1

0xef22,	// (0x0004e9e5) cell_ai5_widget_pane_g2_ParamLimits

0xf04a,	// (0x0004eb0d) cell_ai5_widget_pane_t9_ParamLimits

0xf04a,	// (0x0004eb0d) cell_ai5_widget_pane_t9

0x299d,	// (0x00042460) main_fep_fshwr2_pane

0xf156,	// (0x0004ec19) aid_fshwr2_btn_pane

0xf15e,	// (0x0004ec21) aid_fshwr2_syb_pane

0xf166,	// (0x0004ec29) aid_fshwr2_txt_pane

0xf16e,	// (0x0004ec31) fshwr2_func_candi_pane

0xf178,	// (0x0004ec3b) fshwr2_hwr_syb_pane

0xf184,	// (0x0004ec47) fshwr2_icf_pane

0x299d,	// (0x00042460) fshwr2_icf_bg_pane

0xf18e,	// (0x0004ec51) fshwr2_icf_pane_t1_ParamLimits

0xf18e,	// (0x0004ec51) fshwr2_icf_pane_t1

0x7480,	// (0x00046f43) fshwr2_func_candi_pane_g1

0x9ef6,	// (0x000499b9) fshwr2_func_candi_row_pane_ParamLimits

0x9ef6,	// (0x000499b9) fshwr2_func_candi_row_pane

0xf1a6,	// (0x0004ec69) cell_fshwr2_syb_pane_ParamLimits

0xf1a6,	// (0x0004ec69) cell_fshwr2_syb_pane

0x7718,	// (0x000471db) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7718,	// (0x000471db) fshwr2_hwr_syb_pane_g1

0x299d,	// (0x00042460) bg_popup_call_pane_cp01

0x9f21,	// (0x000499e4) fshwr2_func_candi_cell_pane_ParamLimits

0x9f21,	// (0x000499e4) fshwr2_func_candi_cell_pane

0x9f53,	// (0x00049a16) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f53,	// (0x00049a16) fshwr2_func_candi_cell_bg_pane

0x9f6d,	// (0x00049a30) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f6d,	// (0x00049a30) fshwr2_func_candi_cell_pane_g1

0x9f8d,	// (0x00049a50) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f8d,	// (0x00049a50) fshwr2_func_candi_cell_pane_t1

0x299d,	// (0x00042460) bg_button_pane_cp08

0x3f76,	// (0x00043a39) cell_fshwr2_syb_bg_pane

0xf1bf,	// (0x0004ec82) cell_fshwr2_syb_bg_pane_g1

0xf1c7,	// (0x0004ec8a) cell_fshwr2_syb_bg_pane_t1

0x3318,	// (0x00042ddb) main_tmo_pane

0xd858,	// (0x0004d31b) uni_indicator_pane_g1_ParamLimits

0xd86d,	// (0x0004d330) uni_indicator_pane_g2_ParamLimits

0xd882,	// (0x0004d345) uni_indicator_pane_g3_ParamLimits

0xd898,	// (0x0004d35b) uni_indicator_pane_g4_ParamLimits

0xd898,	// (0x0004d35b) uni_indicator_pane_g4

0xd8ac,	// (0x0004d36f) uni_indicator_pane_g5_ParamLimits

0xd8ac,	// (0x0004d36f) uni_indicator_pane_g5

0xd8c0,	// (0x0004d383) uni_indicator_pane_g6_ParamLimits

0xd8c0,	// (0x0004d383) uni_indicator_pane_g6

0xf95a,	// (0x0004f41d) uni_indicator_pane_g_ParamLimits

0xe3a3,	// (0x0004de66) popup_tmo_note_window_ParamLimits

0xe3a3,	// (0x0004de66) popup_tmo_note_window

0x299d,	// (0x00042460) fshwr2_bg_pane

0x9f7e,	// (0x00049a41) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f7e,	// (0x00049a41) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed8,	// (0x0004f99b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed8,	// (0x0004f99b) fshwr2_func_candi_cell_pane_g

0x7480,	// (0x00046f43) bg_popup_window_pane_cp01

0x9fb7,	// (0x00049a7a) bg_popup_window_pane_g1_cp01

0x9fc0,	// (0x00049a83) bg_popup_window_pane_cp22_ParamLimits

0x9fc0,	// (0x00049a83) bg_popup_window_pane_cp22

0x9fce,	// (0x00049a91) listscroll_tmo_link_pane_ParamLimits

0x9fce,	// (0x00049a91) listscroll_tmo_link_pane

0xa00e,	// (0x00049ad1) popup_tmo_note_window_g1_ParamLimits

0xa00e,	// (0x00049ad1) popup_tmo_note_window_g1

0xa01b,	// (0x00049ade) tmo_note_info_pane_ParamLimits

0xa01b,	// (0x00049ade) tmo_note_info_pane

0xf1d6,	// (0x0004ec99) list_tmo_note_info_pane_g1_ParamLimits

0xf1d6,	// (0x0004ec99) list_tmo_note_info_pane_g1

0xa04c,	// (0x00049b0f) list_tmo_note_info_pane_g2_ParamLimits

0xa04c,	// (0x00049b0f) list_tmo_note_info_pane_g2

0x0001,

0xfedd,	// (0x0004f9a0) list_tmo_note_info_pane_g_ParamLimits

0xfedd,	// (0x0004f9a0) list_tmo_note_info_pane_g

0xa068,	// (0x00049b2b) list_tmo_note_info_text_pane_ParamLimits

0xa068,	// (0x00049b2b) list_tmo_note_info_text_pane

0xa0ed,	// (0x00049bb0) list_tmo_link_pane

0xa0fa,	// (0x00049bbd) scroll_pane_cp20

0xa107,	// (0x00049bca) list_single_tmo_link_pane_ParamLimits

0xa107,	// (0x00049bca) list_single_tmo_link_pane

0xa117,	// (0x00049bda) list_single_tmo_link_pane_t1

0xa125,	// (0x00049be8) list_tmo_note_info_text_pane_t1_ParamLimits

0xa125,	// (0x00049be8) list_tmo_note_info_text_pane_t1

0xc76e,	// (0x0004c231) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc76e,	// (0x0004c231) aid_size_touch_scroll_bar_cp01

0xb62a,	// (0x0004b0ed) aid_size_touch_slider_marker

0xba7d,	// (0x0004b540) popup_settings_window_ParamLimits

0xba7d,	// (0x0004b540) popup_settings_window

0x06b0,	// (0x00040173) popup_candi_list_indi_window

0x4975,	// (0x00044438) aid_touch_navi_pane_ParamLimits

0x216d,	// (0x00041c30) rs_clock_indi_pane

0x2176,	// (0x00041c39) sctrl_sk_bottom_pane_ParamLimits

0x2187,	// (0x00041c4a) sctrl_sk_top_pane_ParamLimits

0x226c,	// (0x00041d2f) popup_fep_tooltip_window

0x99f2,	// (0x000494b5) aid_size_cell_widget_grid_ParamLimits

0xef16,	// (0x0004e9d9) cell_ai5_widget_pane_g1_ParamLimits

0xef16,	// (0x0004e9d9) cell_ai5_widget_pane_g1

0xef5e,	// (0x0004ea21) cell_ai5_widget_pane_g6_ParamLimits

0xef6a,	// (0x0004ea2d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5b,	// (0x0004f91e) cell_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0004f91e) cell_ai5_widget_pane_g

0xf06e,	// (0x0004eb31) cell_ai5_widget_pane_t10_ParamLimits

0xf06e,	// (0x0004eb31) cell_ai5_widget_pane_t10

0xf080,	// (0x0004eb43) grid_ai5_widget_pane_ParamLimits

0x9c5a,	// (0x0004971d) cell_contacts_ai5_widget_pane_ParamLimits

0x9c5a,	// (0x0004971d) cell_contacts_ai5_widget_pane

0x9e38,	// (0x000498fb) popup_discreet_window_t3_ParamLimits

0x9e38,	// (0x000498fb) popup_discreet_window_t3

0x9ec7,	// (0x0004998a) popup_fshwr2_char_preview_window_ParamLimits

0x9ec7,	// (0x0004998a) popup_fshwr2_char_preview_window

0xf1ed,	// (0x0004ecb0) tmo_note_info_pane_t1

0xf202,	// (0x0004ecc5) tmo_note_info_pane_t2

0xf21b,	// (0x0004ecde) tmo_note_info_pane_t3

0xa0c9,	// (0x00049b8c) tmo_note_info_pane_t4

0xa0db,	// (0x00049b9e) tmo_note_info_pane_t5

0x0004,

0xfee2,	// (0x0004f9a5) tmo_note_info_pane_t

0xa0ed,	// (0x00049bb0) list_tmo_link_pane_ParamLimits

0xa0fa,	// (0x00049bbd) scroll_pane_cp20_ParamLimits

0x299d,	// (0x00042460) bg_popup_fep_char_preview_window_cp01

0xa13e,	// (0x00049c01) popup_fshwr2_char_preview_window_t1

0xa14c,	// (0x00049c0f) popup_candi_list_indi_window_g1

0xa155,	// (0x00049c18) bg_cell_contacts_ai5_widget_pane

0xa161,	// (0x00049c24) cell_contacts_ai5_widget_pane_g1

0xa175,	// (0x00049c38) cell_contacts_ai5_widget_pane_g2

0xa184,	// (0x00049c47) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeed,	// (0x0004f9b0) cell_contacts_ai5_widget_pane_g

0xa197,	// (0x00049c5a) cell_contacts_ai5_widget_pane_t1

0x3318,	// (0x00042ddb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf295,	// (0x0004ed58) settings_container_pane

0x3f76,	// (0x00043a39) listscroll_set_pane_copy1

0x6bf7,	// (0x000466ba) scroll_pane_cp121_copy1

0xa21d,	// (0x00049ce0) set_content_pane_copy1

0xf2a1,	// (0x0004ed64) aid_height_set_list_copy1_ParamLimits

0xf2a1,	// (0x0004ed64) aid_height_set_list_copy1

0x6244,	// (0x00045d07) aid_size_parent_copy1_ParamLimits

0x6244,	// (0x00045d07) aid_size_parent_copy1

0xf2ad,	// (0x0004ed70) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2ad,	// (0x0004ed70) button_value_adjust_pane_cp6_copy1

0x4300,	// (0x00043dc3) list_highlight_pane_cp2_copy1_ParamLimits

0x4300,	// (0x00043dc3) list_highlight_pane_cp2_copy1

0xf2c1,	// (0x0004ed84) list_set_pane_copy1_ParamLimits

0xf2c1,	// (0x0004ed84) list_set_pane_copy1

0xf230,	// (0x0004ecf3) main_pane_set_t1_copy1_ParamLimits

0xf230,	// (0x0004ecf3) main_pane_set_t1_copy1

0xf26a,	// (0x0004ed2d) main_pane_set_t2_copy1_ParamLimits

0xf26a,	// (0x0004ed2d) main_pane_set_t2_copy1

0xf388,	// (0x0004ee4b) main_pane_set_t3_copy1

0xf396,	// (0x0004ee59) main_pane_set_t4_copy1

0xf289,	// (0x0004ed4c) set_content_pane_g1_copy1_ParamLimits

0xf289,	// (0x0004ed4c) set_content_pane_g1_copy1

0xf3a4,	// (0x0004ee67) setting_code_pane_copy1

0xa332,	// (0x00049df5) setting_slider_graphic_pane_copy1

0xa332,	// (0x00049df5) setting_slider_pane_copy1

0xa33c,	// (0x00049dff) setting_text_pane_copy1

0xa346,	// (0x00049e09) setting_volume_pane_copy1

0xf3ae,	// (0x0004ee71) settings_code_pane_cp2_copy1

0xf3b6,	// (0x0004ee79) settings_code_pane_cp_copy1_ParamLimits

0xf3b6,	// (0x0004ee79) settings_code_pane_cp_copy1

0xf3ca,	// (0x0004ee8d) volume_set_pane_copy1

0xf3d6,	// (0x0004ee99) volume_set_pane_g10_copy1

0xf3e2,	// (0x0004eea5) volume_set_pane_g1_copy1

0xf3ec,	// (0x0004eeaf) volume_set_pane_g2_copy1

0xf3f6,	// (0x0004eeb9) volume_set_pane_g3_copy1

0xf400,	// (0x0004eec3) volume_set_pane_g4_copy1

0xf40a,	// (0x0004eecd) volume_set_pane_g5_copy1

0xf414,	// (0x0004eed7) volume_set_pane_g6_copy1

0xf41e,	// (0x0004eee1) volume_set_pane_g7_copy1

0xf428,	// (0x0004eeeb) volume_set_pane_g8_copy1

0xf432,	// (0x0004eef5) volume_set_pane_g9_copy1

0x2a91,	// (0x00042554) bg_set_opt_pane_cp_copy1_ParamLimits

0x2a91,	// (0x00042554) bg_set_opt_pane_cp_copy1

0xa3dd,	// (0x00049ea0) setting_slider_pane_t1_copy1_ParamLimits

0xa3dd,	// (0x00049ea0) setting_slider_pane_t1_copy1

0xf43c,	// (0x0004eeff) setting_slider_pane_t2_copy1_ParamLimits

0xf43c,	// (0x0004eeff) setting_slider_pane_t2_copy1

0xf456,	// (0x0004ef19) setting_slider_pane_t3_copy1_ParamLimits

0xf456,	// (0x0004ef19) setting_slider_pane_t3_copy1

0xf46e,	// (0x0004ef31) slider_set_pane_copy1_ParamLimits

0xf46e,	// (0x0004ef31) slider_set_pane_copy1

0x337f,	// (0x00042e42) set_opt_bg_pane_g1_copy2

0x3387,	// (0x00042e4a) set_opt_bg_pane_g2_copy2

0xa443,	// (0x00049f06) set_opt_bg_pane_g3_copy2

0x3397,	// (0x00042e5a) set_opt_bg_pane_g4_copy2

0x339f,	// (0x00042e62) set_opt_bg_pane_g5_copy2

0x33a7,	// (0x00042e6a) set_opt_bg_pane_g6_copy2

0xf484,	// (0x0004ef47) set_opt_bg_pane_g7_copy2

0xa457,	// (0x00049f1a) set_opt_bg_pane_g8_copy2

0xa461,	// (0x00049f24) set_opt_bg_pane_g9_copy2

0xa46b,	// (0x00049f2e) aid_size_touch_slider_mark_copy1_ParamLimits

0xa46b,	// (0x00049f2e) aid_size_touch_slider_mark_copy1

0xa47f,	// (0x00049f42) slider_set_pane_g1_copy1

0xa488,	// (0x00049f4b) slider_set_pane_g2_copy1

0x683f,	// (0x00046302) slider_set_pane_g3_copy1_ParamLimits

0x683f,	// (0x00046302) slider_set_pane_g3_copy1

0x6853,	// (0x00046316) slider_set_pane_g4_copy1_ParamLimits

0x6853,	// (0x00046316) slider_set_pane_g4_copy1

0x686b,	// (0x0004632e) slider_set_pane_g5_copy1_ParamLimits

0x686b,	// (0x0004632e) slider_set_pane_g5_copy1

0x683f,	// (0x00046302) slider_set_pane_g6_copy1_ParamLimits

0x683f,	// (0x00046302) slider_set_pane_g6_copy1

0xf48e,	// (0x0004ef51) slider_set_pane_g7_copy1_ParamLimits

0xf48e,	// (0x0004ef51) slider_set_pane_g7_copy1

0x29b1,	// (0x00042474) bg_set_opt_pane_cp2_copy1

0xa4a6,	// (0x00049f69) setting_slider_graphic_pane_g1_copy1

0xf4a4,	// (0x0004ef67) setting_slider_graphic_pane_t1_copy1

0xf4b4,	// (0x0004ef77) setting_slider_graphic_pane_t2_copy1

0xf4c4,	// (0x0004ef87) slider_set_pane_cp_copy1

0xa4df,	// (0x00049fa2) input_focus_pane_cp1_copy1

0xa4e8,	// (0x00049fab) list_set_text_pane_copy1

0xa4f0,	// (0x00049fb3) setting_text_pane_g1_copy1

0xf563,	// (0x0004f026) set_text_pane_t1_copy1

0xa4df,	// (0x00049fa2) input_focus_pane_cp2_copy1

0xa4f0,	// (0x00049fb3) setting_code_pane_g1_copy1

0xf4cc,	// (0x0004ef8f) setting_code_pane_t1_copy1

0xf4da,	// (0x0004ef9d) list_set_graphic_pane_copy1

0x29b1,	// (0x00042474) bg_set_opt_pane_cp4_copy1

0xc9f9,	// (0x0004c4bc) list_set_graphic_pane_g1_copy1_ParamLimits

0xc9f9,	// (0x0004c4bc) list_set_graphic_pane_g1_copy1

0xf4ec,	// (0x0004efaf) list_set_graphic_pane_g2_copy1

0xca11,	// (0x0004c4d4) list_set_graphic_pane_t1_copy1_ParamLimits

0xca11,	// (0x0004c4d4) list_set_graphic_pane_t1_copy1

0x7480,	// (0x00046f43) rs_clock_indi_pane_g1

0xa521,	// (0x00049fe4) rs_clock_indi_pane_t1

0xa52f,	// (0x00049ff2) rs_indi_pane

0xa537,	// (0x00049ffa) rs_indi_pane_g1

0xa540,	// (0x0004a003) rs_indi_pane_g2

0xa549,	// (0x0004a00c) rs_indi_pane_g3

0x0002,

0xfef4,	// (0x0004f9b7) rs_indi_pane_g

0x3f76,	// (0x00043a39) bg_popup_preview_window_pane_cp03

0xa552,	// (0x0004a015) popup_fep_tooltip_window_t1

0x8134,	// (0x00047bf7) popup_note2_window_g2_ParamLimits

0x8134,	// (0x00047bf7) popup_note2_window_g2

0x0001,

0xfc92,	// (0x0004f755) popup_note2_window_g_ParamLimits

0xfc92,	// (0x0004f755) popup_note2_window_g

0x863c,	// (0x000480ff) bg_popup_sub_pane_cp11_ParamLimits

0x8649,	// (0x0004810c) cell_ai3_links_pane_g1_ParamLimits

0x8660,	// (0x00048123) cell_ai3_links_pane_t1

0xf563,	// (0x0004f026) set_text_pane_t1_copy1_ParamLimits

0x3e83,	// (0x00043946) cell_graphic_popup_pane_cp2_ParamLimits

0x3e83,	// (0x00043946) cell_graphic_popup_pane_cp2

0xa560,	// (0x0004a023) cell_graphic_popup_pane_g1_cp2

0x3063,	// (0x00042b26) cell_graphic_popup_pane_g2_cp2

0xa568,	// (0x0004a02b) cell_graphic_popup_pane_g3_cp2

0xa570,	// (0x0004a033) cell_graphic_popup_pane_t2_cp2

0x3074,	// (0x00042b37) grid_highlight_pane_cp3_cp2

0x36cb,	// (0x0004318e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3318,	// (0x00042ddb) main_tmo_pane_ParamLimits

0xe397,	// (0x0004de5a) popup_tmo_big_image_note_window

0xef06,	// (0x0004e9c9) cell_ai5_widget_list_pane

0xef0e,	// (0x0004e9d1) cell_ai5_widget_lrg_icon_pane

0xf1ed,	// (0x0004ecb0) tmo_note_info_pane_t1_ParamLimits

0xf202,	// (0x0004ecc5) tmo_note_info_pane_t2_ParamLimits

0xf21b,	// (0x0004ecde) tmo_note_info_pane_t3_ParamLimits

0xa0c9,	// (0x00049b8c) tmo_note_info_pane_t4_ParamLimits

0xa0db,	// (0x00049b9e) tmo_note_info_pane_t5_ParamLimits

0xfee2,	// (0x0004f9a5) tmo_note_info_pane_t_ParamLimits

0xf295,	// (0x0004ed58) settings_container_pane_ParamLimits

0xa4d7,	// (0x00049f9a) indicator_popup_pane_cp5

0xa4d7,	// (0x00049f9a) indicator_popup_pane_cp6

0xf4da,	// (0x0004ef9d) list_set_graphic_pane_copy1_ParamLimits

0x299d,	// (0x00042460) bg_popup_window_pane_cp23

0xa57e,	// (0x0004a041) popup_tmo_big_image_note_window_g1

0xa58a,	// (0x0004a04d) popup_tmo_big_image_note_window_t1

0xa59a,	// (0x0004a05d) popup_tmo_big_image_note_window_t2

0xa5aa,	// (0x0004a06d) popup_tmo_big_image_note_window_t3

0x0002,

0xfefb,	// (0x0004f9be) popup_tmo_big_image_note_window_t

0xf4f4,	// (0x0004efb7) cell_ai5_widget_lrg_icon_pane_g1

0xf4fc,	// (0x0004efbf) cell_ai5_widget_lrg_icon_pane_t1

0xf50a,	// (0x0004efcd) cell_ai5_widget_list_row_pane_ParamLimits

0xf50a,	// (0x0004efcd) cell_ai5_widget_list_row_pane

0xf523,	// (0x0004efe6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf523,	// (0x0004efe6) cell_ai5_widget_list_row_pane_g1

0xf530,	// (0x0004eff3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf530,	// (0x0004eff3) cell_ai5_widget_list_row_pane_t1

0xf548,	// (0x0004f00b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf548,	// (0x0004f00b) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff02,	// (0x0004f9c5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff02,	// (0x0004f9c5) cell_ai5_widget_list_row_pane_t

0x299d,	// (0x00042460) main_fep_vtchi_ss_pane

0xa620,	// (0x0004a0e3) popup_fep_char_pre_window

0xa628,	// (0x0004a0eb) popup_fep_ituss_window

0xa633,	// (0x0004a0f6) popup_fep_vkbss_window

0xa63e,	// (0x0004a101) grid_vkbss_keypad_pane_ParamLimits

0xa63e,	// (0x0004a101) grid_vkbss_keypad_pane

0xa64e,	// (0x0004a111) ituss_keypad_pane

0xa656,	// (0x0004a119) aid_vkbss_key_offset_ParamLimits

0xa656,	// (0x0004a119) aid_vkbss_key_offset

0xa665,	// (0x0004a128) cell_vkbss_key_pane_ParamLimits

0xa665,	// (0x0004a128) cell_vkbss_key_pane

0xa67b,	// (0x0004a13e) bg_cell_vkbss_key_g1_ParamLimits

0xa67b,	// (0x0004a13e) bg_cell_vkbss_key_g1

0xa687,	// (0x0004a14a) cell_vkbss_key_3p_pane_ParamLimits

0xa687,	// (0x0004a14a) cell_vkbss_key_3p_pane

0xa6a1,	// (0x0004a164) cell_vkbss_key_g1_ParamLimits

0xa6a1,	// (0x0004a164) cell_vkbss_key_g1

0xa6bb,	// (0x0004a17e) cell_vkbss_key_t1_ParamLimits

0xa6bb,	// (0x0004a17e) cell_vkbss_key_t1

0xa6e6,	// (0x0004a1a9) cell_ituss_key_pane_ParamLimits

0xa6e6,	// (0x0004a1a9) cell_ituss_key_pane

0xa6f5,	// (0x0004a1b8) bg_cell_ituss_key_g1_ParamLimits

0xa6f5,	// (0x0004a1b8) bg_cell_ituss_key_g1

0xa701,	// (0x0004a1c4) cell_ituss_key_pane_g1_ParamLimits

0xa701,	// (0x0004a1c4) cell_ituss_key_pane_g1

0xa70d,	// (0x0004a1d0) cell_ituss_key_pane_g2_ParamLimits

0xa70d,	// (0x0004a1d0) cell_ituss_key_pane_g2

0x0001,

0xff07,	// (0x0004f9ca) cell_ituss_key_pane_g_ParamLimits

0xff07,	// (0x0004f9ca) cell_ituss_key_pane_g

0xa721,	// (0x0004a1e4) cell_ituss_key_t1_ParamLimits

0xa721,	// (0x0004a1e4) cell_ituss_key_t1

0xa73f,	// (0x0004a202) cell_ituss_key_t2_ParamLimits

0xa73f,	// (0x0004a202) cell_ituss_key_t2

0xa75e,	// (0x0004a221) cell_ituss_key_t3_ParamLimits

0xa75e,	// (0x0004a221) cell_ituss_key_t3

0xa77d,	// (0x0004a240) cell_ituss_key_t4_ParamLimits

0xa77d,	// (0x0004a240) cell_ituss_key_t4

0x0003,

0xff0c,	// (0x0004f9cf) cell_ituss_key_t_ParamLimits

0xff0c,	// (0x0004f9cf) cell_ituss_key_t

0xa79c,	// (0x0004a25f) cell_vkbss_key_3p_pane_g1

0xa7a4,	// (0x0004a267) cell_vkbss_key_3p_pane_g2

0xa7ac,	// (0x0004a26f) cell_vkbss_key_3p_pane_g3

0x0002,

0xff15,	// (0x0004f9d8) cell_vkbss_key_3p_pane_g

0x299d,	// (0x00042460) bg_popup_fep_char_preview_window_cp02

0xa7b4,	// (0x0004a277) popup_fep_char_pre_window_t1

0xeefc,	// (0x0004e9bf) main_ai5_sk_pane

0xa155,	// (0x00049c18) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa161,	// (0x00049c24) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa175,	// (0x00049c38) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa184,	// (0x00049c47) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeed,	// (0x0004f9b0) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa197,	// (0x00049c5a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3318,	// (0x00042ddb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55a,	// (0x0004f01d) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

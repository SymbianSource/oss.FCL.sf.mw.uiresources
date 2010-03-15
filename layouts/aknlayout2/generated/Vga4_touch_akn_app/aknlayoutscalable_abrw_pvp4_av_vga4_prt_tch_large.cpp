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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00053b3b };

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
0x4dc0,	// (0x000588fb) Screen

0x4dcc,	// (0x00058907) application_window_ParamLimits

0x4dcc,	// (0x00058907) application_window

0xb91b,	// (0x0005f456) screen_g1

0x4e28,	// (0x00058963) area_bottom_pane_ParamLimits

0x4e28,	// (0x00058963) area_bottom_pane

0x4ee8,	// (0x00058a23) area_top_pane_ParamLimits

0x4ee8,	// (0x00058a23) area_top_pane

0x4f86,	// (0x00058ac1) main_pane_ParamLimits

0x4f86,	// (0x00058ac1) main_pane

0xb925,	// (0x0005f460) misc_graphics

0x84e4,	// (0x0005c01f) battery_pane_ParamLimits

0x84e4,	// (0x0005c01f) battery_pane

0x91a2,	// (0x0005ccdd) bg_status_flat_pane_g8

0x91aa,	// (0x0005cce5) bg_status_flat_pane_g9

0x85ac,	// (0x0005c0e7) context_pane_ParamLimits

0x85ac,	// (0x0005c0e7) context_pane

0x86d0,	// (0x0005c20b) navi_pane_ParamLimits

0x86d0,	// (0x0005c20b) navi_pane

0x8760,	// (0x0005c29b) signal_pane_ParamLimits

0x8760,	// (0x0005c29b) signal_pane

0x0008,

0xf884,	// (0x000633bf) bg_status_flat_pane_g

0x87cd,	// (0x0005c308) status_pane_g1_ParamLimits

0x87cd,	// (0x0005c308) status_pane_g1

0x87e1,	// (0x0005c31c) status_pane_g2_ParamLimits

0x87e1,	// (0x0005c31c) status_pane_g2

0x87ed,	// (0x0005c328) status_pane_g3_ParamLimits

0x87ed,	// (0x0005c328) status_pane_g3

0x0004,

0xf7ab,	// (0x000632e6) status_pane_g_ParamLimits

0xf7ab,	// (0x000632e6) status_pane_g

0x8821,	// (0x0005c35c) title_pane_ParamLimits

0x8821,	// (0x0005c35c) title_pane

0x885e,	// (0x0005c399) uni_indicator_pane_ParamLimits

0x885e,	// (0x0005c399) uni_indicator_pane

0x7dd5,	// (0x0005b910) bg_list_pane_ParamLimits

0x7dd5,	// (0x0005b910) bg_list_pane

0x7df5,	// (0x0005b930) find_pane

0x7dfd,	// (0x0005b938) listscroll_app_pane_ParamLimits

0x7dfd,	// (0x0005b938) listscroll_app_pane

0x7e09,	// (0x0005b944) listscroll_form_pane

0x7e11,	// (0x0005b94c) listscroll_gen_pane_ParamLimits

0x7e11,	// (0x0005b94c) listscroll_gen_pane

0x7e09,	// (0x0005b944) listscroll_set_pane

0x5c62,	// (0x0005979d) main_idle_act_pane

0x642c,	// (0x00059f67) main_idle_trad_pane

0x642c,	// (0x00059f67) main_list_empty_pane

0x7e37,	// (0x0005b972) main_midp_pane

0x7e43,	// (0x0005b97e) main_pane_g1_ParamLimits

0x7e43,	// (0x0005b97e) main_pane_g1

0x7e51,	// (0x0005b98c) popup_ai_message_window_ParamLimits

0x7e51,	// (0x0005b98c) popup_ai_message_window

0x7f05,	// (0x0005ba40) popup_fep_china_uni_window_ParamLimits

0x7f05,	// (0x0005ba40) popup_fep_china_uni_window

0x7f65,	// (0x0005baa0) popup_fep_japan_candidate_window_ParamLimits

0x7f65,	// (0x0005baa0) popup_fep_japan_candidate_window

0x7f8f,	// (0x0005baca) popup_fep_japan_predictive_window_ParamLimits

0x7f8f,	// (0x0005baca) popup_fep_japan_predictive_window

0x7fc5,	// (0x0005bb00) popup_find_window

0x7fd2,	// (0x0005bb0d) popup_grid_graphic_window_ParamLimits

0x7fd2,	// (0x0005bb0d) popup_grid_graphic_window

0x8000,	// (0x0005bb3b) popup_large_graphic_colour_window

0x8026,	// (0x0005bb61) popup_menu_window_ParamLimits

0x8026,	// (0x0005bb61) popup_menu_window

0x81f0,	// (0x0005bd2b) popup_note_image_window

0x81da,	// (0x0005bd15) popup_note_wait_window_ParamLimits

0x81da,	// (0x0005bd15) popup_note_wait_window

0x81da,	// (0x0005bd15) popup_note_window_ParamLimits

0x81da,	// (0x0005bd15) popup_note_window

0x8256,	// (0x0005bd91) popup_query_code_window_ParamLimits

0x8256,	// (0x0005bd91) popup_query_code_window

0x826c,	// (0x0005bda7) popup_query_data_code_window_ParamLimits

0x826c,	// (0x0005bda7) popup_query_data_code_window

0x828f,	// (0x0005bdca) popup_query_data_window_ParamLimits

0x828f,	// (0x0005bdca) popup_query_data_window

0x82b1,	// (0x0005bdec) popup_query_sat_info_window_ParamLimits

0x82b1,	// (0x0005bdec) popup_query_sat_info_window

0x82f0,	// (0x0005be2b) popup_snote_single_graphic_window_ParamLimits

0x82f0,	// (0x0005be2b) popup_snote_single_graphic_window

0x82f0,	// (0x0005be2b) popup_snote_single_text_window_ParamLimits

0x82f0,	// (0x0005be2b) popup_snote_single_text_window

0x8307,	// (0x0005be42) popup_sub_window_general

0x844d,	// (0x0005bf88) popup_window_general_ParamLimits

0x844d,	// (0x0005bf88) popup_window_general

0x8466,	// (0x0005bfa1) power_save_pane

0x66b7,	// (0x0005a1f2) control_pane_g1_ParamLimits

0x66b7,	// (0x0005a1f2) control_pane_g1

0x66e0,	// (0x0005a21b) control_pane_g2_ParamLimits

0x66e0,	// (0x0005a21b) control_pane_g2

0x7d86,	// (0x0005b8c1) control_pane_g3_ParamLimits

0x7d86,	// (0x0005b8c1) control_pane_g3

0x0007,

0xf793,	// (0x000632ce) control_pane_g_ParamLimits

0xf793,	// (0x000632ce) control_pane_g

0x6728,	// (0x0005a263) control_pane_t1_ParamLimits

0x6728,	// (0x0005a263) control_pane_t1

0x6774,	// (0x0005a2af) control_pane_t2_ParamLimits

0x6774,	// (0x0005a2af) control_pane_t2

0x0002,

0xf7a4,	// (0x000632df) control_pane_t_ParamLimits

0xf7a4,	// (0x000632df) control_pane_t

0x7ca7,	// (0x0005b7e2) navi_navi_volume_pane_cp1

0x7cb0,	// (0x0005b7eb) status_small_icon_pane

0x7cb8,	// (0x0005b7f3) status_small_pane_g1_ParamLimits

0x7cb8,	// (0x0005b7f3) status_small_pane_g1

0x7cec,	// (0x0005b827) status_small_pane_g2_ParamLimits

0x7cec,	// (0x0005b827) status_small_pane_g2

0x7cf8,	// (0x0005b833) status_small_pane_g3_ParamLimits

0x7cf8,	// (0x0005b833) status_small_pane_g3

0x7d04,	// (0x0005b83f) status_small_pane_g4_ParamLimits

0x7d04,	// (0x0005b83f) status_small_pane_g4

0x7d10,	// (0x0005b84b) status_small_pane_g5_ParamLimits

0x7d10,	// (0x0005b84b) status_small_pane_g5

0x7d1f,	// (0x0005b85a) status_small_pane_g6_ParamLimits

0x7d1f,	// (0x0005b85a) status_small_pane_g6

0x0007,

0xf782,	// (0x000632bd) status_small_pane_g_ParamLimits

0xf782,	// (0x000632bd) status_small_pane_g

0x7d4f,	// (0x0005b88a) status_small_pane_t1

0x7d72,	// (0x0005b8ad) status_small_wait_pane_ParamLimits

0x7d72,	// (0x0005b8ad) status_small_wait_pane

0x5fd7,	// (0x00059b12) aid_levels_signal_ParamLimits

0x5fd7,	// (0x00059b12) aid_levels_signal

0x5fe9,	// (0x00059b24) signal_pane_g1_ParamLimits

0x5fe9,	// (0x00059b24) signal_pane_g1

0x5ffe,	// (0x00059b39) signal_pane_g2_ParamLimits

0x5ffe,	// (0x00059b39) signal_pane_g2

0x0003,

0xf713,	// (0x0006324e) signal_pane_g_ParamLimits

0xf713,	// (0x0006324e) signal_pane_g

0x3509,	// (0x00057044) context_pane_g1

0x51dd,	// (0x00058d18) title_pane_g1

0x51fb,	// (0x00058d36) title_pane_t1

0xb947,	// (0x0005f482) title_pane_t2

0xb96d,	// (0x0005f4a8) title_pane_t3

0x0002,

0xf55d,	// (0x00063098) title_pane_t

0x8876,	// (0x0005c3b1) aid_levels_battery_ParamLimits

0x8876,	// (0x0005c3b1) aid_levels_battery

0x888a,	// (0x0005c3c5) battery_pane_g1_ParamLimits

0x888a,	// (0x0005c3c5) battery_pane_g1

0x88a0,	// (0x0005c3db) battery_pane_g2_ParamLimits

0x88a0,	// (0x0005c3db) battery_pane_g2

0x0001,

0xf7b6,	// (0x000632f1) battery_pane_g_ParamLimits

0xf7b6,	// (0x000632f1) battery_pane_g

0x9c8c,	// (0x0005d7c7) uni_indicator_pane_g1

0x9ca1,	// (0x0005d7dc) uni_indicator_pane_g2

0x9cb7,	// (0x0005d7f2) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x00063467) uni_indicator_pane_g

0x37b7,	// (0x000572f2) navi_icon_pane_ParamLimits

0x37b7,	// (0x000572f2) navi_icon_pane

0x373b,	// (0x00057276) navi_midp_pane

0x37d3,	// (0x0005730e) navi_navi_pane

0x37dd,	// (0x00057318) navi_text_pane_ParamLimits

0x37dd,	// (0x00057318) navi_text_pane

0xb91b,	// (0x0005f456) status_small_wait_pane_g1

0xee97,	// (0x000629d2) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00063462) status_small_wait_pane_g

0x97ff,	// (0x0005d33a) navi_navi_icon_text_pane

0x9807,	// (0x0005d342) navi_navi_pane_g1_ParamLimits

0x9807,	// (0x0005d342) navi_navi_pane_g1

0x9819,	// (0x0005d354) navi_navi_pane_g2_ParamLimits

0x9819,	// (0x0005d354) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x00063430) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x00063430) navi_navi_pane_g

0x982b,	// (0x0005d366) navi_navi_tabs_pane

0x9834,	// (0x0005d36f) navi_navi_text_pane

0x97ff,	// (0x0005d33a) navi_navi_volume_pane

0x97db,	// (0x0005d316) navi_text_pane_t1

0x97cf,	// (0x0005d30a) navi_icon_pane_g1

0x9722,	// (0x0005d25d) navi_navi_text_pane_t1

0x6ae8,	// (0x0005a623) navi_navi_volume_pane_g1

0x6af0,	// (0x0005a62b) volume_small_pane

0x9688,	// (0x0005d1c3) navi_navi_icon_text_pane_g1

0x9690,	// (0x0005d1cb) navi_navi_icon_text_pane_t1

0x37d3,	// (0x0005730e) navi_tabs_2_long_pane

0x37d3,	// (0x0005730e) navi_tabs_2_pane

0x37d3,	// (0x0005730e) navi_tabs_3_long_pane

0x37d3,	// (0x0005730e) navi_tabs_3_pane

0x37d3,	// (0x0005730e) navi_tabs_4_pane

0x6ac8,	// (0x0005a603) tabs_2_active_pane_ParamLimits

0x6ac8,	// (0x0005a603) tabs_2_active_pane

0x6ad8,	// (0x0005a613) tabs_2_passive_pane_ParamLimits

0x6ad8,	// (0x0005a613) tabs_2_passive_pane

0x6a96,	// (0x0005a5d1) tabs_3_active_pane_ParamLimits

0x6a96,	// (0x0005a5d1) tabs_3_active_pane

0x6aa6,	// (0x0005a5e1) tabs_3_passive_pane_ParamLimits

0x6aa6,	// (0x0005a5e1) tabs_3_passive_pane

0x6ab7,	// (0x0005a5f2) tabs_3_passive_pane_cp_ParamLimits

0x6ab7,	// (0x0005a5f2) tabs_3_passive_pane_cp

0x6a4a,	// (0x0005a585) tabs_4_active_pane_ParamLimits

0x6a4a,	// (0x0005a585) tabs_4_active_pane

0x6a5d,	// (0x0005a598) tabs_4_passive_pane_ParamLimits

0x6a5d,	// (0x0005a598) tabs_4_passive_pane

0x6a6e,	// (0x0005a5a9) tabs_4_passive_pane_cp_ParamLimits

0x6a6e,	// (0x0005a5a9) tabs_4_passive_pane_cp

0x6a7f,	// (0x0005a5ba) tabs_4_passive_pane_cp2_ParamLimits

0x6a7f,	// (0x0005a5ba) tabs_4_passive_pane_cp2

0x6a26,	// (0x0005a561) tabs_2_long_active_pane_ParamLimits

0x6a26,	// (0x0005a561) tabs_2_long_active_pane

0x6a38,	// (0x0005a573) tabs_2_long_passive_pane_ParamLimits

0x6a38,	// (0x0005a573) tabs_2_long_passive_pane

0x69e7,	// (0x0005a522) tabs_3_long_active_pane_ParamLimits

0x69e7,	// (0x0005a522) tabs_3_long_active_pane

0x69fa,	// (0x0005a535) tabs_3_long_passive_pane_ParamLimits

0x69fa,	// (0x0005a535) tabs_3_long_passive_pane

0x6a13,	// (0x0005a54e) tabs_3_long_passive_pane_cp_ParamLimits

0x6a13,	// (0x0005a54e) tabs_3_long_passive_pane_cp

0x698d,	// (0x0005a4c8) volume_small_pane_g1

0x6996,	// (0x0005a4d1) volume_small_pane_g2

0x699f,	// (0x0005a4da) volume_small_pane_g3

0x69a8,	// (0x0005a4e3) volume_small_pane_g4

0x69b1,	// (0x0005a4ec) volume_small_pane_g5

0x69ba,	// (0x0005a4f5) volume_small_pane_g6

0x69c3,	// (0x0005a4fe) volume_small_pane_g7

0x69cc,	// (0x0005a507) volume_small_pane_g8

0x69d5,	// (0x0005a510) volume_small_pane_g9

0x69de,	// (0x0005a519) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x000633fc) volume_small_pane_g

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp2_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp2

0x5263,	// (0x00058d9e) tabs_3_active_pane_g1

0x526b,	// (0x00058da6) tabs_3_active_pane_t1

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp2_ParamLimits

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp2

0x5263,	// (0x00058d9e) tabs_3_passive_pane_g1

0x526b,	// (0x00058da6) tabs_3_passive_pane_t1

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp3_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp3

0x527d,	// (0x00058db8) tabs_4_active_pane_g1

0x5285,	// (0x00058dc0) tabs_4_active_pane_t1

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp3_ParamLimits

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp3

0x527d,	// (0x00058db8) tabs_4_1_passive_pane_g1

0x5285,	// (0x00058dc0) tabs_4_1_passive_pane_t1

0x7e37,	// (0x0005b972) list_highlight_pane_cp2

0x9f1b,	// (0x0005da56) list_set_pane_ParamLimits

0x9f1b,	// (0x0005da56) list_set_pane

0x9fe3,	// (0x0005db1e) main_pane_set_t1_ParamLimits

0x9fe3,	// (0x0005db1e) main_pane_set_t1

0xa003,	// (0x0005db3e) main_pane_set_t2_ParamLimits

0xa003,	// (0x0005db3e) main_pane_set_t2

0xa017,	// (0x0005db52) main_pane_set_t3_ParamLimits

0xa017,	// (0x0005db52) main_pane_set_t3

0xa02b,	// (0x0005db66) main_pane_set_t4_ParamLimits

0xa02b,	// (0x0005db66) main_pane_set_t4

0x0003,

0xf991,	// (0x000634cc) main_pane_set_t_ParamLimits

0xf991,	// (0x000634cc) main_pane_set_t

0xa03f,	// (0x0005db7a) setting_code_pane

0xa049,	// (0x0005db84) setting_slider_graphic_pane

0xa049,	// (0x0005db84) setting_slider_pane

0xa049,	// (0x0005db84) setting_text_pane

0xa049,	// (0x0005db84) setting_volume_pane

0x5297,	// (0x00058dd2) volume_set_pane

0xebbc,	// (0x000626f7) bg_set_opt_pane_cp

0x52a1,	// (0x00058ddc) setting_slider_pane_t1

0x52ba,	// (0x00058df5) setting_slider_pane_t2

0x52d4,	// (0x00058e0f) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0006309f) setting_slider_pane_t

0x52ec,	// (0x00058e27) slider_set_pane

0xb925,	// (0x0005f460) bg_set_opt_pane_cp2

0xebca,	// (0x00062705) setting_slider_graphic_pane_g1

0x5302,	// (0x00058e3d) setting_slider_graphic_pane_t1

0x5312,	// (0x00058e4d) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000630a6) setting_slider_graphic_pane_t

0x5322,	// (0x00058e5d) slider_set_pane_cp

0xb925,	// (0x0005f460) input_focus_pane_cp1

0x9edc,	// (0x0005da17) list_set_text_pane

0xb91b,	// (0x0005f456) setting_text_pane_g1

0xb925,	// (0x0005f460) input_focus_pane_cp2

0xb91b,	// (0x0005f456) setting_code_pane_g1

0xebd3,	// (0x0006270e) setting_code_pane_t1

0x33e2,	// (0x00056f1d) set_text_pane_t1_ParamLimits

0x33e2,	// (0x00056f1d) set_text_pane_t1

0xf22c,	// (0x00062d67) set_opt_bg_pane_g1

0xf234,	// (0x00062d6f) set_opt_bg_pane_g2

0x9eb4,	// (0x0005d9ef) set_opt_bg_pane_g3

0xf244,	// (0x00062d7f) set_opt_bg_pane_g4

0xf24c,	// (0x00062d87) set_opt_bg_pane_g5

0xf254,	// (0x00062d8f) set_opt_bg_pane_g6

0x9ebe,	// (0x0005d9f9) set_opt_bg_pane_g7

0x9ec8,	// (0x0005da03) set_opt_bg_pane_g8

0x9ed2,	// (0x0005da0d) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x000634b9) set_opt_bg_pane_g

0x9ea7,	// (0x0005d9e2) slider_set_pane_g1

0x6b99,	// (0x0005a6d4) slider_set_pane_g2

0x0006,

0xf96f,	// (0x000634aa) slider_set_pane_g

0x6af9,	// (0x0005a634) volume_set_pane_g1

0x6b03,	// (0x0005a63e) volume_set_pane_g2

0x6b0d,	// (0x0005a648) volume_set_pane_g3

0x6b17,	// (0x0005a652) volume_set_pane_g4

0x6b21,	// (0x0005a65c) volume_set_pane_g5

0x6b2b,	// (0x0005a666) volume_set_pane_g6

0x6b35,	// (0x0005a670) volume_set_pane_g7

0x6b3f,	// (0x0005a67a) volume_set_pane_g8

0x6b49,	// (0x0005a684) volume_set_pane_g9

0x6b53,	// (0x0005a68e) volume_set_pane_g10

0x0009,

0xf947,	// (0x00063482) volume_set_pane_g

0x532a,	// (0x00058e65) indicator_pane_ParamLimits

0x532a,	// (0x00058e65) indicator_pane

0x5336,	// (0x00058e71) main_idle_pane_g2_ParamLimits

0x5336,	// (0x00058e71) main_idle_pane_g2

0x535e,	// (0x00058e99) main_pane_idle_g1_ParamLimits

0x535e,	// (0x00058e99) main_pane_idle_g1

0xebe1,	// (0x0006271c) popup_clock_digital_analogue_window_ParamLimits

0xebe1,	// (0x0006271c) popup_clock_digital_analogue_window

0x536c,	// (0x00058ea7) soft_indicator_pane_ParamLimits

0x536c,	// (0x00058ea7) soft_indicator_pane

0x537a,	// (0x00058eb5) wallpaper_pane_ParamLimits

0x537a,	// (0x00058eb5) wallpaper_pane

0xb91b,	// (0x0005f456) wallpaper_pane_g1

0x5386,	// (0x00058ec1) indicator_pane_g1_ParamLimits

0x5386,	// (0x00058ec1) indicator_pane_g1

0xa303,	// (0x0005de3e) navi_navi_icon_text_pane_srt_g1

0xec0f,	// (0x0006274a) soft_indicator_pane_t1

0xec29,	// (0x00062764) aid_ps_area_pane

0x5392,	// (0x00058ecd) aid_ps_clock_pane

0xec3a,	// (0x00062775) aid_ps_indicator_pane

0xec46,	// (0x00062781) indicator_ps_pane_ParamLimits

0xec46,	// (0x00062781) indicator_ps_pane

0xec55,	// (0x00062790) power_save_pane_g1_ParamLimits

0xec55,	// (0x00062790) power_save_pane_g1

0xec61,	// (0x0006279c) power_save_pane_g2_ParamLimits

0xec61,	// (0x0006279c) power_save_pane_g2

0x4ddc,	// (0x00058917) aid_navinavi_width_pane

0xec29,	// (0x00062764) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000630ab) power_save_pane_g_ParamLimits

0xf570,	// (0x000630ab) power_save_pane_g

0xec6f,	// (0x000627aa) power_save_pane_t1_ParamLimits

0xec6f,	// (0x000627aa) power_save_pane_t1

0x5392,	// (0x00058ecd) aid_ps_clock_pane_ParamLimits

0xec3a,	// (0x00062775) aid_ps_indicator_pane_ParamLimits

0xec81,	// (0x000627bc) power_save_pane_t4_ParamLimits

0xec81,	// (0x000627bc) power_save_pane_t4

0x0001,

0xf575,	// (0x000630b0) power_save_pane_t_ParamLimits

0xf575,	// (0x000630b0) power_save_pane_t

0xecab,	// (0x000627e6) power_save_t3_ParamLimits

0xecab,	// (0x000627e6) power_save_t3

0xec96,	// (0x000627d1) power_save_t2_ParamLimits

0xec96,	// (0x000627d1) power_save_t2

0xecc0,	// (0x000627fb) indicator_ps_pane_g1

0x53a0,	// (0x00058edb) ai_gene_pane_ParamLimits

0x53a0,	// (0x00058edb) ai_gene_pane

0x53ac,	// (0x00058ee7) ai_links_pane_ParamLimits

0x53ac,	// (0x00058ee7) ai_links_pane

0x53b8,	// (0x00058ef3) indicator_pane_cp1_ParamLimits

0x53b8,	// (0x00058ef3) indicator_pane_cp1

0x53c4,	// (0x00058eff) main_pane_idle_g1_cp_ParamLimits

0x53c4,	// (0x00058eff) main_pane_idle_g1_cp

0xecc9,	// (0x00062804) popup_ai_links_title_window

0x53d0,	// (0x00058f0b) soft_indicator_pane_cp1_ParamLimits

0x53d0,	// (0x00058f0b) soft_indicator_pane_cp1

0x9c7a,	// (0x0005d7b5) ai_links_pane_g1

0x9c83,	// (0x0005d7be) grid_ai_links_pane

0x9c5f,	// (0x0005d79a) ai_gene_pane_1

0x9c68,	// (0x0005d7a3) ai_gene_pane_2

0x9c71,	// (0x0005d7ac) list_highlight_pane_cp4

0x9c3f,	// (0x0005d77a) cell_ai_link_pane_ParamLimits

0x9c3f,	// (0x0005d77a) cell_ai_link_pane

0x9c37,	// (0x0005d772) cell_ai_link_pane_g1

0xee97,	// (0x000629d2) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x0006345d) cell_ai_link_pane_g

0xb925,	// (0x0005f460) grid_highlight_cp2

0xb925,	// (0x0005f460) bg_popup_sub_pane_cp1

0xece0,	// (0x0006281b) popup_ai_links_title_window_t1

0x9b83,	// (0x0005d6be) ai_gene_pane_1_g1_ParamLimits

0x9b83,	// (0x0005d6be) ai_gene_pane_1_g1

0x9b8f,	// (0x0005d6ca) ai_gene_pane_1_g2_ParamLimits

0x9b8f,	// (0x0005d6ca) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x00063453) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x00063453) ai_gene_pane_1_g

0x9b9c,	// (0x0005d6d7) ai_gene_pane_1_t1_ParamLimits

0x9b9c,	// (0x0005d6d7) ai_gene_pane_1_t1

0x9bd0,	// (0x0005d70b) grid_ai_soft_ind_pane

0x9b6e,	// (0x0005d6a9) ai_gene_pane_2_t1_ParamLimits

0x9b6e,	// (0x0005d6a9) ai_gene_pane_2_t1

0x53dc,	// (0x00058f17) main_pane_empty_t1_ParamLimits

0x53dc,	// (0x00058f17) main_pane_empty_t1

0x53f4,	// (0x00058f2f) main_pane_empty_t2_ParamLimits

0x53f4,	// (0x00058f2f) main_pane_empty_t2

0x5409,	// (0x00058f44) main_pane_empty_t3_ParamLimits

0x5409,	// (0x00058f44) main_pane_empty_t3

0x541b,	// (0x00058f56) main_pane_empty_t4_ParamLimits

0x541b,	// (0x00058f56) main_pane_empty_t4

0x542d,	// (0x00058f68) main_pane_empty_t5_ParamLimits

0x542d,	// (0x00058f68) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000630b5) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000630b5) main_pane_empty_t

0xf27d,	// (0x00062db8) bg_popup_window_pane_ParamLimits

0xf27d,	// (0x00062db8) bg_popup_window_pane

0x9730,	// (0x0005d26b) find_popup_pane_cp2_ParamLimits

0x9730,	// (0x0005d26b) find_popup_pane_cp2

0x973c,	// (0x0005d277) heading_pane_ParamLimits

0x973c,	// (0x0005d277) heading_pane

0xb925,	// (0x0005f460) bg_popup_sub_pane

0x96aa,	// (0x0005d1e5) bg_popup_window_pane_g1_ParamLimits

0x96aa,	// (0x0005d1e5) bg_popup_window_pane_g1

0x96b6,	// (0x0005d1f1) bg_popup_window_pane_g2_ParamLimits

0x96b6,	// (0x0005d1f1) bg_popup_window_pane_g2

0x96c2,	// (0x0005d1fd) bg_popup_window_pane_g3_ParamLimits

0x96c2,	// (0x0005d1fd) bg_popup_window_pane_g3

0x96ce,	// (0x0005d209) bg_popup_window_pane_g4_ParamLimits

0x96ce,	// (0x0005d209) bg_popup_window_pane_g4

0x96da,	// (0x0005d215) bg_popup_window_pane_g5_ParamLimits

0x96da,	// (0x0005d215) bg_popup_window_pane_g5

0x96e6,	// (0x0005d221) bg_popup_window_pane_g6_ParamLimits

0x96e6,	// (0x0005d221) bg_popup_window_pane_g6

0x96f2,	// (0x0005d22d) bg_popup_window_pane_g7_ParamLimits

0x96f2,	// (0x0005d22d) bg_popup_window_pane_g7

0x96fe,	// (0x0005d239) bg_popup_window_pane_g8_ParamLimits

0x96fe,	// (0x0005d239) bg_popup_window_pane_g8

0x970a,	// (0x0005d245) bg_popup_window_pane_g9_ParamLimits

0x970a,	// (0x0005d245) bg_popup_window_pane_g9

0x9716,	// (0x0005d251) bg_popup_window_pane_g10_ParamLimits

0x9716,	// (0x0005d251) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0006341b) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0006341b) bg_popup_window_pane_g

0x963f,	// (0x0005d17a) bg_popup_heading_pane_ParamLimits

0x963f,	// (0x0005d17a) bg_popup_heading_pane

0x6c6d,	// (0x0005a7a8) tabs_4_passive_pane_cp_srt_ParamLimits

0x6c6d,	// (0x0005a7a8) tabs_4_passive_pane_cp_srt

0x6c7f,	// (0x0005a7ba) tabs_4_passive_pane_srt_ParamLimits

0x9653,	// (0x0005d18e) heading_pane_g2

0x6c7f,	// (0x0005a7ba) tabs_4_passive_pane_srt

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp3_srt

0x965b,	// (0x0005d196) heading_pane_t1_ParamLimits

0x965b,	// (0x0005d196) heading_pane_t1

0x9672,	// (0x0005d1ad) heading_pane_t2_ParamLimits

0x9672,	// (0x0005d1ad) heading_pane_t2

0x0001,

0xf8db,	// (0x00063416) heading_pane_t_ParamLimits

0xf8db,	// (0x00063416) heading_pane_t

0x916a,	// (0x0005cca5) bg_popup_heading_pane_g1

0x9219,	// (0x0005cd54) bg_popup_heading_pane_g2

0x9223,	// (0x0005cd5e) bg_popup_heading_pane_g3

0x922d,	// (0x0005cd68) bg_popup_heading_pane_g4

0x9237,	// (0x0005cd72) bg_popup_heading_pane_g5

0x9241,	// (0x0005cd7c) bg_popup_heading_pane_g6

0x9249,	// (0x0005cd84) bg_popup_heading_pane_g7

0x9251,	// (0x0005cd8c) bg_popup_heading_pane_g8

0x925b,	// (0x0005cd96) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x000633d2) bg_popup_heading_pane_g

0x8978,	// (0x0005c4b3) bg_popup_sub_pane_g1

0x8988,	// (0x0005c4c3) bg_popup_sub_pane_g2

0x8980,	// (0x0005c4bb) bg_popup_sub_pane_g3

0x8998,	// (0x0005c4d3) bg_popup_sub_pane_g4

0x8990,	// (0x0005c4cb) bg_popup_sub_pane_g5

0x89a0,	// (0x0005c4db) bg_popup_sub_pane_g6

0x89a8,	// (0x0005c4e3) bg_popup_sub_pane_g7

0x89b8,	// (0x0005c4f3) bg_popup_sub_pane_g8

0x89b0,	// (0x0005c4eb) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x000633ac) bg_popup_sub_pane_g

0xb97f,	// (0x0005f4ba) bg_popup_window_pane_cp5_ParamLimits

0xb97f,	// (0x0005f4ba) bg_popup_window_pane_cp5

0xecfd,	// (0x00062838) popup_note_window_g1_ParamLimits

0xecfd,	// (0x00062838) popup_note_window_g1

0xed09,	// (0x00062844) popup_note_window_t1_ParamLimits

0xed09,	// (0x00062844) popup_note_window_t1

0xed1f,	// (0x0006285a) popup_note_window_t2_ParamLimits

0xed1f,	// (0x0006285a) popup_note_window_t2

0xed35,	// (0x00062870) popup_note_window_t3_ParamLimits

0xed35,	// (0x00062870) popup_note_window_t3

0xed4b,	// (0x00062886) popup_note_window_t4_ParamLimits

0xed4b,	// (0x00062886) popup_note_window_t4

0xed73,	// (0x000628ae) popup_note_window_t5_ParamLimits

0xed73,	// (0x000628ae) popup_note_window_t5

0x0004,

0xf585,	// (0x000630c0) popup_note_window_t_ParamLimits

0xf585,	// (0x000630c0) popup_note_window_t

0xed97,	// (0x000628d2) bg_popup_window_pane_cp6_ParamLimits

0xed97,	// (0x000628d2) bg_popup_window_pane_cp6

0x90e6,	// (0x0005cc21) popup_note_image_window_g1_ParamLimits

0x90e6,	// (0x0005cc21) popup_note_image_window_g1

0x90f2,	// (0x0005cc2d) popup_note_image_window_g2_ParamLimits

0x90f2,	// (0x0005cc2d) popup_note_image_window_g2

0x0001,

0xf865,	// (0x000633a0) popup_note_image_window_g_ParamLimits

0xf865,	// (0x000633a0) popup_note_image_window_g

0x910b,	// (0x0005cc46) popup_note_image_window_t1_ParamLimits

0x910b,	// (0x0005cc46) popup_note_image_window_t1

0x9124,	// (0x0005cc5f) popup_note_image_window_t2_ParamLimits

0x9124,	// (0x0005cc5f) popup_note_image_window_t2

0x913d,	// (0x0005cc78) popup_note_image_window_t3_ParamLimits

0x913d,	// (0x0005cc78) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x000633a5) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x000633a5) popup_note_image_window_t

0x8fa6,	// (0x0005cae1) bg_popup_window_pane_cp7_ParamLimits

0x8fa6,	// (0x0005cae1) bg_popup_window_pane_cp7

0x8fd6,	// (0x0005cb11) popup_note_wait_window_g1_ParamLimits

0x8fd6,	// (0x0005cb11) popup_note_wait_window_g1

0x8fe2,	// (0x0005cb1d) popup_note_wait_window_g2_ParamLimits

0x8fe2,	// (0x0005cb1d) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x0006338e) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x0006338e) popup_note_wait_window_g

0x8ffa,	// (0x0005cb35) popup_note_wait_window_t1_ParamLimits

0x8ffa,	// (0x0005cb35) popup_note_wait_window_t1

0x9021,	// (0x0005cb5c) popup_note_wait_window_t2_ParamLimits

0x9021,	// (0x0005cb5c) popup_note_wait_window_t2

0x903f,	// (0x0005cb7a) popup_note_wait_window_t3_ParamLimits

0x903f,	// (0x0005cb7a) popup_note_wait_window_t3

0x9052,	// (0x0005cb8d) popup_note_wait_window_t4_ParamLimits

0x9052,	// (0x0005cb8d) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00063395) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00063395) popup_note_wait_window_t

0x9077,	// (0x0005cbb2) wait_bar_pane_ParamLimits

0x9077,	// (0x0005cbb2) wait_bar_pane

0xb925,	// (0x0005f460) wait_anim_pane

0xb925,	// (0x0005f460) wait_border_pane

0xb91b,	// (0x0005f456) wait_anim_pane_g1

0xb91b,	// (0x0005f456) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00063249) wait_anim_pane_g

0x8f4a,	// (0x0005ca85) wait_border_pane_g1

0x8f55,	// (0x0005ca90) wait_border_pane_g2

0x8f5e,	// (0x0005ca99) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00063387) wait_border_pane_g

0x8db4,	// (0x0005c8ef) bg_popup_window_pane_cp16_ParamLimits

0x8db4,	// (0x0005c8ef) bg_popup_window_pane_cp16

0x8eb4,	// (0x0005c9ef) indicator_popup_pane_cp4_ParamLimits

0x8eb4,	// (0x0005c9ef) indicator_popup_pane_cp4

0x8ec8,	// (0x0005ca03) popup_query_data_window_t1_ParamLimits

0x8ec8,	// (0x0005ca03) popup_query_data_window_t1

0x8eda,	// (0x0005ca15) popup_query_data_window_t2_ParamLimits

0x8eda,	// (0x0005ca15) popup_query_data_window_t2

0x8ef3,	// (0x0005ca2e) popup_query_data_window_t3_ParamLimits

0x8ef3,	// (0x0005ca2e) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00063380) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00063380) popup_query_data_window_t

0x8f0d,	// (0x0005ca48) query_popup_data_pane_ParamLimits

0x8f0d,	// (0x0005ca48) query_popup_data_pane

0x8f21,	// (0x0005ca5c) query_popup_data_pane_cp1_ParamLimits

0x8f21,	// (0x0005ca5c) query_popup_data_pane_cp1

0x8db4,	// (0x0005c8ef) bg_popup_window_pane_cp10_ParamLimits

0x8db4,	// (0x0005c8ef) bg_popup_window_pane_cp10

0x8de6,	// (0x0005c921) indicator_popup_pane_ParamLimits

0x8de6,	// (0x0005c921) indicator_popup_pane

0x8e08,	// (0x0005c943) popup_query_code_window_t1_ParamLimits

0x8e08,	// (0x0005c943) popup_query_code_window_t1

0x8e22,	// (0x0005c95d) popup_query_code_window_t2_ParamLimits

0x8e22,	// (0x0005c95d) popup_query_code_window_t2

0x8e6b,	// (0x0005c9a6) popup_query_code_window_t3_ParamLimits

0x8e6b,	// (0x0005c9a6) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00063379) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00063379) popup_query_code_window_t

0x8e9a,	// (0x0005c9d5) query_popup_pane_ParamLimits

0x8e9a,	// (0x0005c9d5) query_popup_pane

0xed97,	// (0x000628d2) bg_popup_window_pane_cp15_ParamLimits

0xed97,	// (0x000628d2) bg_popup_window_pane_cp15

0xedb7,	// (0x000628f2) indicator_popup_pane_cp1_ParamLimits

0xedb7,	// (0x000628f2) indicator_popup_pane_cp1

0xedca,	// (0x00062905) indicator_popup_pane_cp2_ParamLimits

0xedca,	// (0x00062905) indicator_popup_pane_cp2

0xede5,	// (0x00062920) popup_query_data_code_window_g1_ParamLimits

0xede5,	// (0x00062920) popup_query_data_code_window_g1

0xedf8,	// (0x00062933) popup_query_data_code_window_t1_ParamLimits

0xedf8,	// (0x00062933) popup_query_data_code_window_t1

0xee0a,	// (0x00062945) popup_query_data_code_window_t2_ParamLimits

0xee0a,	// (0x00062945) popup_query_data_code_window_t2

0xee1c,	// (0x00062957) popup_query_data_code_window_t3_ParamLimits

0xee1c,	// (0x00062957) popup_query_data_code_window_t3

0xee32,	// (0x0006296d) popup_query_data_code_window_t4_ParamLimits

0xee32,	// (0x0006296d) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000630cb) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000630cb) popup_query_data_code_window_t

0x6862,	// (0x0005a39d) list_single_midp_graphic_pane_g3

0xee4c,	// (0x00062987) query_popup_data_pane_cp2_ParamLimits

0xee5f,	// (0x0006299a) query_popup_pane_cp2_ParamLimits

0xee5f,	// (0x0006299a) query_popup_pane_cp2

0xb925,	// (0x0005f460) bg_popup_window_pane_cp11

0x8dac,	// (0x0005c8e7) heading_pane_cp5

0xeef5,	// (0x00062a30) listscroll_popup_info_pane

0xb925,	// (0x0005f460) input_focus_pane_cp3

0xee7a,	// (0x000629b5) query_popup_pane_t1

0xee88,	// (0x000629c3) list_popup_info_pane_ParamLimits

0xee88,	// (0x000629c3) list_popup_info_pane

0xee97,	// (0x000629d2) listscroll_popup_info_pane_g1

0xee9f,	// (0x000629da) scroll_pane_cp7

0xeea9,	// (0x000629e4) popup_info_list_pane_t1_ParamLimits

0xeea9,	// (0x000629e4) popup_info_list_pane_t1

0xeec3,	// (0x000629fe) popup_info_list_pane_t2_ParamLimits

0xeec3,	// (0x000629fe) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000630d4) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000630d4) popup_info_list_pane_t

0xb925,	// (0x0005f460) bg_popup_window_pane_cp12

0xa31d,	// (0x0005de58) find_popup_pane

0xebbc,	// (0x000626f7) bg_popup_window_pane_cp3

0xeedd,	// (0x00062a18) heading_pane_cp3

0xeee9,	// (0x00062a24) listscroll_popup_graphic_pane

0xb925,	// (0x0005f460) bg_popup_window_pane_cp4

0x548f,	// (0x00058fca) heading_pane_cp4

0xeef5,	// (0x00062a30) listscroll_popup_colour_pane

0x5499,	// (0x00058fd4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5499,	// (0x00058fd4) cell_large_graphic_colour_none_popup_pane

0x54ad,	// (0x00058fe8) grid_large_graphic_colour_popup_pane_ParamLimits

0x54ad,	// (0x00058fe8) grid_large_graphic_colour_popup_pane

0x54d9,	// (0x00059014) listscroll_popup_colour_pane_g1_ParamLimits

0x54d9,	// (0x00059014) listscroll_popup_colour_pane_g1

0x54f0,	// (0x0005902b) listscroll_popup_colour_pane_g2_ParamLimits

0x54f0,	// (0x0005902b) listscroll_popup_colour_pane_g2

0x5507,	// (0x00059042) listscroll_popup_colour_pane_g3_ParamLimits

0x5507,	// (0x00059042) listscroll_popup_colour_pane_g3

0x5517,	// (0x00059052) listscroll_popup_colour_pane_g4_ParamLimits

0x5517,	// (0x00059052) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000630d9) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000630d9) listscroll_popup_colour_pane_g

0xeefd,	// (0x00062a38) scroll_pane_cp6_ParamLimits

0xeefd,	// (0x00062a38) scroll_pane_cp6

0x552b,	// (0x00059066) cell_large_graphic_colour_popup_pane_ParamLimits

0x552b,	// (0x00059066) cell_large_graphic_colour_popup_pane

0xef0f,	// (0x00062a4a) cell_large_graphic_colour_none_popup_pane_t1

0xb925,	// (0x0005f460) grid_highlight_pane_cp5

0xef1e,	// (0x00062a59) cell_large_graphic_colour_popup_pane_g1

0xef26,	// (0x00062a61) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000630e2) cell_large_graphic_colour_popup_pane_g

0xef2e,	// (0x00062a69) cell_large_graphic_colour_popup_pane_g2_copy1

0xef37,	// (0x00062a72) grid_highlight_pane_cp4

0xef3f,	// (0x00062a7a) bg_popup_window_pane_cp8_ParamLimits

0xef3f,	// (0x00062a7a) bg_popup_window_pane_cp8

0xef5a,	// (0x00062a95) popup_snote_single_text_window_g1_ParamLimits

0xef5a,	// (0x00062a95) popup_snote_single_text_window_g1

0xef6c,	// (0x00062aa7) popup_snote_single_text_window_t1_ParamLimits

0xef6c,	// (0x00062aa7) popup_snote_single_text_window_t1

0xef7f,	// (0x00062aba) popup_snote_single_text_window_t2_ParamLimits

0xef7f,	// (0x00062aba) popup_snote_single_text_window_t2

0xef92,	// (0x00062acd) popup_snote_single_text_window_t3_ParamLimits

0xef92,	// (0x00062acd) popup_snote_single_text_window_t3

0xefcb,	// (0x00062b06) popup_snote_single_text_window_t4_ParamLimits

0xefcb,	// (0x00062b06) popup_snote_single_text_window_t4

0xefff,	// (0x00062b3a) popup_snote_single_text_window_t5_ParamLimits

0xefff,	// (0x00062b3a) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000630e7) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000630e7) popup_snote_single_text_window_t

0xf02e,	// (0x00062b69) bg_popup_window_pane_cp9_ParamLimits

0xf02e,	// (0x00062b69) bg_popup_window_pane_cp9

0xef5a,	// (0x00062a95) popup_snote_single_graphic_window_g1_ParamLimits

0xef5a,	// (0x00062a95) popup_snote_single_graphic_window_g1

0xf03c,	// (0x00062b77) popup_snote_single_graphic_window_g2_ParamLimits

0xf03c,	// (0x00062b77) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000630f2) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000630f2) popup_snote_single_graphic_window_g

0xf048,	// (0x00062b83) popup_snote_single_graphic_window_t1_ParamLimits

0xf048,	// (0x00062b83) popup_snote_single_graphic_window_t1

0xf05b,	// (0x00062b96) popup_snote_single_graphic_window_t2_ParamLimits

0xf05b,	// (0x00062b96) popup_snote_single_graphic_window_t2

0xf06e,	// (0x00062ba9) popup_snote_single_graphic_window_t3_ParamLimits

0xf06e,	// (0x00062ba9) popup_snote_single_graphic_window_t3

0xf0a7,	// (0x00062be2) popup_snote_single_graphic_window_t4_ParamLimits

0xf0a7,	// (0x00062be2) popup_snote_single_graphic_window_t4

0xf0db,	// (0x00062c16) popup_snote_single_graphic_window_t5_ParamLimits

0xf0db,	// (0x00062c16) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000630f7) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000630f7) popup_snote_single_graphic_window_t

0xa25b,	// (0x0005dd96) grid_graphic_popup_pane_ParamLimits

0xa25b,	// (0x0005dd96) grid_graphic_popup_pane

0xa289,	// (0x0005ddc4) listscroll_popup_graphic_pane_g1_ParamLimits

0xa289,	// (0x0005ddc4) listscroll_popup_graphic_pane_g1

0xa29d,	// (0x0005ddd8) listscroll_popup_graphic_pane_g2_ParamLimits

0xa29d,	// (0x0005ddd8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x000634f6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x000634f6) listscroll_popup_graphic_pane_g

0xa2b1,	// (0x0005ddec) scroll_pane_cp5

0xa203,	// (0x0005dd3e) cell_graphic_popup_pane_ParamLimits

0xa203,	// (0x0005dd3e) cell_graphic_popup_pane

0xa1e4,	// (0x0005dd1f) cell_graphic_popup_pane_g1

0xa1ec,	// (0x0005dd27) cell_graphic_popup_pane_g2

0xef2e,	// (0x00062a69) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x000634ef) cell_graphic_popup_pane_g

0xa1f5,	// (0x0005dd30) cell_graphic_popup_pane_t2

0xef37,	// (0x00062a72) grid_highlight_pane_cp3

0xf11c,	// (0x00062c57) list_gen_pane_ParamLimits

0xf11c,	// (0x00062c57) list_gen_pane

0xf144,	// (0x00062c7f) scroll_pane

0xa13c,	// (0x0005dc77) bg_list_pane_g1_ParamLimits

0xa13c,	// (0x0005dc77) bg_list_pane_g1

0xa159,	// (0x0005dc94) bg_list_pane_g2_ParamLimits

0xa159,	// (0x0005dc94) bg_list_pane_g2

0xa16e,	// (0x0005dca9) bg_list_pane_g3_ParamLimits

0xa16e,	// (0x0005dca9) bg_list_pane_g3

0xa182,	// (0x0005dcbd) bg_list_pane_g4_ParamLimits

0xa182,	// (0x0005dcbd) bg_list_pane_g4

0xa196,	// (0x0005dcd1) bg_list_pane_g5_ParamLimits

0xa196,	// (0x0005dcd1) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x000634e4) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x000634e4) bg_list_pane_g

0x9948,	// (0x0005d483) list_double2_graphic_large_graphic_pane_ParamLimits

0x9948,	// (0x0005d483) list_double2_graphic_large_graphic_pane

0x9948,	// (0x0005d483) list_double2_graphic_pane_ParamLimits

0x9948,	// (0x0005d483) list_double2_graphic_pane

0x9948,	// (0x0005d483) list_double2_large_graphic_pane_ParamLimits

0x9948,	// (0x0005d483) list_double2_large_graphic_pane

0x9948,	// (0x0005d483) list_double2_pane_ParamLimits

0x9948,	// (0x0005d483) list_double2_pane

0x9948,	// (0x0005d483) list_double_graphic_heading_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_graphic_heading_pane

0x9948,	// (0x0005d483) list_double_graphic_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_graphic_pane

0x9948,	// (0x0005d483) list_double_heading_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_heading_pane

0x9948,	// (0x0005d483) list_double_large_graphic_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_large_graphic_pane

0x9948,	// (0x0005d483) list_double_number_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_number_pane

0x9948,	// (0x0005d483) list_double_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_pane

0x9948,	// (0x0005d483) list_double_time_pane_ParamLimits

0x9948,	// (0x0005d483) list_double_time_pane

0x9948,	// (0x0005d483) list_setting_number_pane_ParamLimits

0x9948,	// (0x0005d483) list_setting_number_pane

0x9948,	// (0x0005d483) list_setting_pane_ParamLimits

0x9948,	// (0x0005d483) list_setting_pane

0xa0f8,	// (0x0005dc33) list_single_2graphic_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_2graphic_pane

0xa0f8,	// (0x0005dc33) list_single_graphic_heading_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_graphic_heading_pane

0xa0f8,	// (0x0005dc33) list_single_graphic_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_graphic_pane

0xa0f8,	// (0x0005dc33) list_single_heading_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_heading_pane

0x9970,	// (0x0005d4ab) list_single_large_graphic_pane_ParamLimits

0x9970,	// (0x0005d4ab) list_single_large_graphic_pane

0xa0f8,	// (0x0005dc33) list_single_number_heading_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_number_heading_pane

0xa0f8,	// (0x0005dc33) list_single_number_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_number_pane

0xa0f8,	// (0x0005dc33) list_single_pane_ParamLimits

0xa0f8,	// (0x0005dc33) list_single_pane

0xb925,	// (0x0005f460) list_highlight_pane_cp1

0x1e20,	// (0x0005595b) list_single_pane_g1_ParamLimits

0x1e20,	// (0x0005595b) list_single_pane_g1

0x5566,	// (0x000590a1) list_single_pane_g2_ParamLimits

0x5566,	// (0x000590a1) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00063113) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00063113) list_single_pane_g

0x6c33,	// (0x0005a76e) list_single_pane_t1_ParamLimits

0x6c33,	// (0x0005a76e) list_single_pane_t1

0x1e20,	// (0x0005595b) list_single_number_pane_g1_ParamLimits

0x1e20,	// (0x0005595b) list_single_number_pane_g1

0x5566,	// (0x000590a1) list_single_number_pane_g2_ParamLimits

0x5566,	// (0x000590a1) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00063113) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00063113) list_single_number_pane_g

0x6b5d,	// (0x0005a698) list_single_number_pane_t1_ParamLimits

0x6b5d,	// (0x0005a698) list_single_number_pane_t1

0x6b73,	// (0x0005a6ae) list_single_number_pane_t2_ParamLimits

0x6b73,	// (0x0005a6ae) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x000634a5) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x000634a5) list_single_number_pane_t

0x555a,	// (0x00059095) list_single_graphic_pane_g1_ParamLimits

0x555a,	// (0x00059095) list_single_graphic_pane_g1

0x1e20,	// (0x0005595b) list_single_graphic_pane_g2_ParamLimits

0x1e20,	// (0x0005595b) list_single_graphic_pane_g2

0x5566,	// (0x000590a1) list_single_graphic_pane_g3_ParamLimits

0x5566,	// (0x000590a1) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00063102) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00063102) list_single_graphic_pane_g

0x5572,	// (0x000590ad) list_single_graphic_pane_t1_ParamLimits

0x5572,	// (0x000590ad) list_single_graphic_pane_t1

0x5588,	// (0x000590c3) list_single_heading_pane_g1_ParamLimits

0x5588,	// (0x000590c3) list_single_heading_pane_g1

0x5566,	// (0x000590a1) list_single_heading_pane_g2_ParamLimits

0x5566,	// (0x000590a1) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00063109) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00063109) list_single_heading_pane_g

0x559b,	// (0x000590d6) list_single_heading_pane_t1_ParamLimits

0x559b,	// (0x000590d6) list_single_heading_pane_t1

0x55b1,	// (0x000590ec) list_single_heading_pane_t2_ParamLimits

0x55b1,	// (0x000590ec) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0006310e) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0006310e) list_single_heading_pane_t

0x1e20,	// (0x0005595b) list_single_number_heading_pane_g1_ParamLimits

0x1e20,	// (0x0005595b) list_single_number_heading_pane_g1

0x5566,	// (0x000590a1) list_single_number_heading_pane_g2_ParamLimits

0x5566,	// (0x000590a1) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00063113) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00063113) list_single_number_heading_pane_g

0x55c3,	// (0x000590fe) list_single_number_heading_pane_t1_ParamLimits

0x55c3,	// (0x000590fe) list_single_number_heading_pane_t1

0x55d9,	// (0x00059114) list_single_number_heading_pane_t2_ParamLimits

0x55d9,	// (0x00059114) list_single_number_heading_pane_t2

0x55eb,	// (0x00059126) list_single_number_heading_pane_t3_ParamLimits

0x55eb,	// (0x00059126) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00063118) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00063118) list_single_number_heading_pane_t

0x55fd,	// (0x00059138) list_single_graphic_heading_pane_g1_ParamLimits

0x55fd,	// (0x00059138) list_single_graphic_heading_pane_g1

0x5615,	// (0x00059150) list_single_graphic_heading_pane_g4_ParamLimits

0x5615,	// (0x00059150) list_single_graphic_heading_pane_g4

0x5566,	// (0x000590a1) list_single_graphic_heading_pane_g5_ParamLimits

0x5566,	// (0x000590a1) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0006311f) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0006311f) list_single_graphic_heading_pane_g

0x55c3,	// (0x000590fe) list_single_graphic_heading_pane_t1_ParamLimits

0x55c3,	// (0x000590fe) list_single_graphic_heading_pane_t1

0x5626,	// (0x00059161) list_single_graphic_heading_pane_t2_ParamLimits

0x5626,	// (0x00059161) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00063126) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00063126) list_single_graphic_heading_pane_t

0x563e,	// (0x00059179) list_single_large_graphic_pane_g1_ParamLimits

0x563e,	// (0x00059179) list_single_large_graphic_pane_g1

0x564a,	// (0x00059185) list_single_large_graphic_pane_g2_ParamLimits

0x564a,	// (0x00059185) list_single_large_graphic_pane_g2

0x5656,	// (0x00059191) list_single_large_graphic_pane_g3_ParamLimits

0x5656,	// (0x00059191) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0006312b) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0006312b) list_single_large_graphic_pane_g

0x8f55,	// (0x0005ca90) wait_border_pane_g2_copy1

0x5662,	// (0x0005919d) list_single_large_graphic_pane_g4_cp2

0x566a,	// (0x000591a5) list_single_large_graphic_pane_t1_ParamLimits

0x566a,	// (0x000591a5) list_single_large_graphic_pane_t1

0x5680,	// (0x000591bb) list_double_pane_g1_ParamLimits

0x5680,	// (0x000591bb) list_double_pane_g1

0x568c,	// (0x000591c7) list_double_pane_g2_ParamLimits

0x568c,	// (0x000591c7) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00063132) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00063132) list_double_pane_g

0x5698,	// (0x000591d3) list_double_pane_t1_ParamLimits

0x5698,	// (0x000591d3) list_double_pane_t1

0x56ae,	// (0x000591e9) list_double_pane_t2_ParamLimits

0x56ae,	// (0x000591e9) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00063137) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00063137) list_double_pane_t

0x56c0,	// (0x000591fb) list_double2_pane_g1_ParamLimits

0x56c0,	// (0x000591fb) list_double2_pane_g1

0x56d1,	// (0x0005920c) list_double2_pane_g2_ParamLimits

0x56d1,	// (0x0005920c) list_double2_pane_g2

0x0001,

0xf601,	// (0x0006313c) list_double2_pane_g_ParamLimits

0xf601,	// (0x0006313c) list_double2_pane_g

0x56dd,	// (0x00059218) list_double2_pane_t1_ParamLimits

0x56dd,	// (0x00059218) list_double2_pane_t1

0x56f3,	// (0x0005922e) list_double2_pane_t2_ParamLimits

0x56f3,	// (0x0005922e) list_double2_pane_t2

0x0001,

0xf606,	// (0x00063141) list_double2_pane_t_ParamLimits

0xf606,	// (0x00063141) list_double2_pane_t

0x5680,	// (0x000591bb) list_double_number_pane_g1_ParamLimits

0x5680,	// (0x000591bb) list_double_number_pane_g1

0x568c,	// (0x000591c7) list_double_number_pane_g2_ParamLimits

0x568c,	// (0x000591c7) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00063132) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00063132) list_double_number_pane_g

0x5705,	// (0x00059240) list_double_number_pane_t1_ParamLimits

0x5705,	// (0x00059240) list_double_number_pane_t1

0x5717,	// (0x00059252) list_double_number_pane_t2_ParamLimits

0x5717,	// (0x00059252) list_double_number_pane_t2

0x572d,	// (0x00059268) list_double_number_pane_t3_ParamLimits

0x572d,	// (0x00059268) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00063146) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00063146) list_double_number_pane_t

0x573f,	// (0x0005927a) list_double_graphic_pane_g1_ParamLimits

0x573f,	// (0x0005927a) list_double_graphic_pane_g1

0x574b,	// (0x00059286) list_double_graphic_pane_g2_ParamLimits

0x574b,	// (0x00059286) list_double_graphic_pane_g2

0x575a,	// (0x00059295) list_double_graphic_pane_g3_ParamLimits

0x575a,	// (0x00059295) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0006314d) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0006314d) list_double_graphic_pane_g

0x5772,	// (0x000592ad) list_double_graphic_pane_t1_ParamLimits

0x5772,	// (0x000592ad) list_double_graphic_pane_t1

0x5788,	// (0x000592c3) list_double_graphic_pane_t2_ParamLimits

0x5788,	// (0x000592c3) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00063156) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00063156) list_double_graphic_pane_t

0x33fb,	// (0x00056f36) list_double2_graphic_pane_g1_ParamLimits

0x33fb,	// (0x00056f36) list_double2_graphic_pane_g1

0x579a,	// (0x000592d5) list_double2_graphic_pane_g2_ParamLimits

0x579a,	// (0x000592d5) list_double2_graphic_pane_g2

0x57a6,	// (0x000592e1) list_double2_graphic_pane_g3_ParamLimits

0x57a6,	// (0x000592e1) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0006315b) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0006315b) list_double2_graphic_pane_g

0x57b2,	// (0x000592ed) list_double2_graphic_pane_t1_ParamLimits

0x57b2,	// (0x000592ed) list_double2_graphic_pane_t1

0x57c8,	// (0x00059303) list_double2_graphic_pane_t2_ParamLimits

0x57c8,	// (0x00059303) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00063162) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00063162) list_double2_graphic_pane_t

0x57da,	// (0x00059315) list_double_large_graphic_pane_g1_ParamLimits

0x57da,	// (0x00059315) list_double_large_graphic_pane_g1

0x5805,	// (0x00059340) list_double_large_graphic_pane_g2_ParamLimits

0x5805,	// (0x00059340) list_double_large_graphic_pane_g2

0x568c,	// (0x000591c7) list_double_large_graphic_pane_g3_ParamLimits

0x568c,	// (0x000591c7) list_double_large_graphic_pane_g3

0x581b,	// (0x00059356) list_double_large_graphic_pane_g4_ParamLimits

0x581b,	// (0x00059356) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00063167) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00063167) list_double_large_graphic_pane_g

0x582e,	// (0x00059369) list_double_large_graphic_pane_t1_ParamLimits

0x582e,	// (0x00059369) list_double_large_graphic_pane_t1

0x5847,	// (0x00059382) list_double_large_graphic_pane_t2_ParamLimits

0x5847,	// (0x00059382) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00063172) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00063172) list_double_large_graphic_pane_t

0x5859,	// (0x00059394) list_double2_large_graphic_pane_g1_ParamLimits

0x5859,	// (0x00059394) list_double2_large_graphic_pane_g1

0x5865,	// (0x000593a0) list_double2_large_graphic_pane_g2_ParamLimits

0x5865,	// (0x000593a0) list_double2_large_graphic_pane_g2

0x57a6,	// (0x000592e1) list_double2_large_graphic_pane_g3_ParamLimits

0x57a6,	// (0x000592e1) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00063177) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00063177) list_double2_large_graphic_pane_g

0x5876,	// (0x000593b1) list_double2_large_graphic_pane_t1_ParamLimits

0x5876,	// (0x000593b1) list_double2_large_graphic_pane_t1

0x588c,	// (0x000593c7) list_double2_large_graphic_pane_t2_ParamLimits

0x588c,	// (0x000593c7) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0006317e) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0006317e) list_double2_large_graphic_pane_t

0x589e,	// (0x000593d9) list_double_heading_pane_g1_ParamLimits

0x589e,	// (0x000593d9) list_double_heading_pane_g1

0x58af,	// (0x000593ea) list_double_heading_pane_g2_ParamLimits

0x58af,	// (0x000593ea) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00063183) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00063183) list_double_heading_pane_g

0x58bb,	// (0x000593f6) list_double_heading_pane_t1_ParamLimits

0x58bb,	// (0x000593f6) list_double_heading_pane_t1

0x58d1,	// (0x0005940c) list_double_heading_pane_t2_ParamLimits

0x58d1,	// (0x0005940c) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00063188) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00063188) list_double_heading_pane_t

0x573f,	// (0x0005927a) list_double_graphic_heading_pane_g1_ParamLimits

0x573f,	// (0x0005927a) list_double_graphic_heading_pane_g1

0x589e,	// (0x000593d9) list_double_graphic_heading_pane_g2_ParamLimits

0x589e,	// (0x000593d9) list_double_graphic_heading_pane_g2

0x58af,	// (0x000593ea) list_double_graphic_heading_pane_g3_ParamLimits

0x58af,	// (0x000593ea) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0006318d) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0006318d) list_double_graphic_heading_pane_g

0x58e3,	// (0x0005941e) list_double_graphic_heading_pane_t1_ParamLimits

0x58e3,	// (0x0005941e) list_double_graphic_heading_pane_t1

0x58f9,	// (0x00059434) list_double_graphic_heading_pane_t2_ParamLimits

0x58f9,	// (0x00059434) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00063194) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00063194) list_double_graphic_heading_pane_t

0x590b,	// (0x00059446) list_double_time_pane_g1_ParamLimits

0x590b,	// (0x00059446) list_double_time_pane_g1

0x591c,	// (0x00059457) list_double_time_pane_g2_ParamLimits

0x591c,	// (0x00059457) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00063199) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00063199) list_double_time_pane_g

0x5928,	// (0x00059463) list_double_time_pane_t1_ParamLimits

0x5928,	// (0x00059463) list_double_time_pane_t1

0x593e,	// (0x00059479) list_double_time_pane_t2_ParamLimits

0x593e,	// (0x00059479) list_double_time_pane_t2

0x5950,	// (0x0005948b) list_double_time_pane_t3_ParamLimits

0x5950,	// (0x0005948b) list_double_time_pane_t3

0x5962,	// (0x0005949d) list_double_time_pane_t4_ParamLimits

0x5962,	// (0x0005949d) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0006319e) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0006319e) list_double_time_pane_t

0x5974,	// (0x000594af) list_setting_pane_g1_ParamLimits

0x5974,	// (0x000594af) list_setting_pane_g1

0x5980,	// (0x000594bb) list_setting_pane_g2_ParamLimits

0x5980,	// (0x000594bb) list_setting_pane_g2

0x0001,

0xf66c,	// (0x000631a7) list_setting_pane_g_ParamLimits

0xf66c,	// (0x000631a7) list_setting_pane_g

0x598c,	// (0x000594c7) list_setting_pane_t1_ParamLimits

0x598c,	// (0x000594c7) list_setting_pane_t1

0x59a6,	// (0x000594e1) list_setting_pane_t2_ParamLimits

0x59a6,	// (0x000594e1) list_setting_pane_t2

0x0002,

0xf671,	// (0x000631ac) list_setting_pane_t_ParamLimits

0xf671,	// (0x000631ac) list_setting_pane_t

0x59e5,	// (0x00059520) set_value_pane_cp_ParamLimits

0x59e5,	// (0x00059520) set_value_pane_cp

0x59f3,	// (0x0005952e) list_setting_number_pane_g1_ParamLimits

0x59f3,	// (0x0005952e) list_setting_number_pane_g1

0x59ff,	// (0x0005953a) list_setting_number_pane_g2_ParamLimits

0x59ff,	// (0x0005953a) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x000631b3) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x000631b3) list_setting_number_pane_g

0x5a0b,	// (0x00059546) list_setting_number_pane_t1_ParamLimits

0x5a0b,	// (0x00059546) list_setting_number_pane_t1

0x5a24,	// (0x0005955f) list_setting_number_pane_t2_ParamLimits

0x5a24,	// (0x0005955f) list_setting_number_pane_t2

0x5a3e,	// (0x00059579) list_setting_number_pane_t3_ParamLimits

0x5a3e,	// (0x00059579) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000631b8) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000631b8) list_setting_number_pane_t

0x59e5,	// (0x00059520) set_value_pane_ParamLimits

0x59e5,	// (0x00059520) set_value_pane

0xf178,	// (0x00062cb3) bg_set_opt_pane_ParamLimits

0xf178,	// (0x00062cb3) bg_set_opt_pane

0x3407,	// (0x00056f42) set_value_pane_t1

0xf199,	// (0x00062cd4) slider_set_pane_cp3

0xf1a2,	// (0x00062cdd) volume_small_pane_cp

0xf1ab,	// (0x00062ce6) list_form_gen_pane

0xf1b4,	// (0x00062cef) scroll_pane_cp8

0x5a81,	// (0x000595bc) form_field_data_pane_ParamLimits

0x5a81,	// (0x000595bc) form_field_data_pane

0x5aa1,	// (0x000595dc) form_field_data_wide_pane_ParamLimits

0x5aa1,	// (0x000595dc) form_field_data_wide_pane

0x5ac8,	// (0x00059603) form_field_popup_pane_ParamLimits

0x5ac8,	// (0x00059603) form_field_popup_pane

0x3425,	// (0x00056f60) form_field_popup_wide_pane_ParamLimits

0x3425,	// (0x00056f60) form_field_popup_wide_pane

0x3446,	// (0x00056f81) form_field_slider_pane_ParamLimits

0x3446,	// (0x00056f81) form_field_slider_pane

0x3459,	// (0x00056f94) form_field_slider_wide_pane_ParamLimits

0x3459,	// (0x00056f94) form_field_slider_wide_pane

0xf1c5,	// (0x00062d00) data_form_pane

0x5af4,	// (0x0005962f) form_field_data_pane_t1

0xf1d1,	// (0x00062d0c) input_focus_pane

0x346c,	// (0x00056fa7) data_form_wide_pane

0x3489,	// (0x00056fc4) form_field_data_wide_pane_t1

0xef4c,	// (0x00062a87) input_focus_pane_cp6

0x5b0e,	// (0x00059649) form_field_popup_pane_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_cp7

0xf1ff,	// (0x00062d3a) list_form_pane

0x34b3,	// (0x00056fee) form_field_popup_wide_pane_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_cp8

0xf20b,	// (0x00062d46) list_form_wide_pane

0x5b30,	// (0x0005966b) form_field_slider_pane_t1_ParamLimits

0x5b30,	// (0x0005966b) form_field_slider_pane_t1

0x5b48,	// (0x00059683) form_field_slider_pane_t2_ParamLimits

0x5b48,	// (0x00059683) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000631c8) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000631c8) form_field_slider_pane_t

0xb97f,	// (0x0005f4ba) input_focus_pane_cp9_ParamLimits

0xb97f,	// (0x0005f4ba) input_focus_pane_cp9

0x5b5d,	// (0x00059698) slider_cont_pane_ParamLimits

0x5b5d,	// (0x00059698) slider_cont_pane

0xf21a,	// (0x00062d55) form_field_slider_wide_pane_t1_ParamLimits

0xf21a,	// (0x00062d55) form_field_slider_wide_pane_t1

0x34c8,	// (0x00057003) form_field_slider_wide_pane_t2_ParamLimits

0x34c8,	// (0x00057003) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000631cd) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000631cd) form_field_slider_wide_pane_t

0xb97f,	// (0x0005f4ba) input_focus_pane_cp10_ParamLimits

0xb97f,	// (0x0005f4ba) input_focus_pane_cp10

0x5b71,	// (0x000596ac) slider_cont_pane_cp1_ParamLimits

0x5b71,	// (0x000596ac) slider_cont_pane_cp1

0x5b85,	// (0x000596c0) slider_form_pane_cp

0xf22c,	// (0x00062d67) input_focus_pane_g1

0xf234,	// (0x00062d6f) input_focus_pane_g2

0xf23c,	// (0x00062d77) input_focus_pane_g3

0xf244,	// (0x00062d7f) input_focus_pane_g4

0xf24c,	// (0x00062d87) input_focus_pane_g5

0xf254,	// (0x00062d8f) input_focus_pane_g6

0xf25c,	// (0x00062d97) input_focus_pane_g7

0xf264,	// (0x00062d9f) input_focus_pane_g8

0xf26c,	// (0x00062da7) input_focus_pane_g9

0xb91b,	// (0x0005f456) input_focus_pane_g10

0x0009,

0xf697,	// (0x000631d2) input_focus_pane_g

0x8f5e,	// (0x0005ca99) wait_border_pane_g3_copy1

0x5b8d,	// (0x000596c8) data_form_pane_t1

0xb91b,	// (0x0005f456) wait_anim_pane_g1_copy1

0x6bfd,	// (0x0005a738) data_form_wide_pane_t1

0x34da,	// (0x00057015) list_form_graphic_pane_cp_ParamLimits

0x34da,	// (0x00057015) list_form_graphic_pane_cp

0xa071,	// (0x0005dbac) slider_form_pane_g1

0xa07a,	// (0x0005dbb5) slider_form_pane_g2

0x0006,

0xf99a,	// (0x000634d5) slider_form_pane_g

0x34da,	// (0x00057015) list_form_graphic_pane_ParamLimits

0x34da,	// (0x00057015) list_form_graphic_pane

0x34ec,	// (0x00057027) list_form_graphic_pane_g1

0x34f4,	// (0x0005702f) list_form_graphic_pane_t1_ParamLimits

0x34f4,	// (0x0005702f) list_form_graphic_pane_t1

0xebbc,	// (0x000626f7) list_highlight_pane_cp5_ParamLimits

0xebbc,	// (0x000626f7) list_highlight_pane_cp5

0x5bac,	// (0x000596e7) find_pane_g1

0xf274,	// (0x00062daf) input_find_pane

0x5bb5,	// (0x000596f0) input_find_pane_g1_ParamLimits

0x5bb5,	// (0x000596f0) input_find_pane_g1

0x5bc1,	// (0x000596fc) input_find_pane_t1_ParamLimits

0x5bc1,	// (0x000596fc) input_find_pane_t1

0x5bd6,	// (0x00059711) input_find_pane_t2_ParamLimits

0x5bd6,	// (0x00059711) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000631e7) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000631e7) input_find_pane_t

0xf27d,	// (0x00062db8) input_focus_pane_cp5_ParamLimits

0xf27d,	// (0x00062db8) input_focus_pane_cp5

0xf28b,	// (0x00062dc6) bg_popup_window_pane_cp2_ParamLimits

0xf28b,	// (0x00062dc6) bg_popup_window_pane_cp2

0xf298,	// (0x00062dd3) listscroll_menu_pane_ParamLimits

0xf298,	// (0x00062dd3) listscroll_menu_pane

0x5bf7,	// (0x00059732) popup_submenu_window_ParamLimits

0x5bf7,	// (0x00059732) popup_submenu_window

0xf2a4,	// (0x00062ddf) find_popup_pane_g1

0xf2ac,	// (0x00062de7) input_popup_find_pane_cp

0xf27d,	// (0x00062db8) input_focus_pane_cp4_ParamLimits

0xf27d,	// (0x00062db8) input_focus_pane_cp4

0xf2b6,	// (0x00062df1) input_popup_find_pane_t1_ParamLimits

0xf2b6,	// (0x00062df1) input_popup_find_pane_t1

0xb925,	// (0x0005f460) bg_popup_sub_pane_cp

0xf2e4,	// (0x00062e1f) listscroll_popup_sub_pane

0xf2ec,	// (0x00062e27) list_submenu_pane_ParamLimits

0xf2ec,	// (0x00062e27) list_submenu_pane

0xf2fd,	// (0x00062e38) scroll_pane_cp4

0xf305,	// (0x00062e40) list_single_popup_submenu_pane_ParamLimits

0xf305,	// (0x00062e40) list_single_popup_submenu_pane

0xf31a,	// (0x00062e55) list_single_popup_submenu_pane_g1

0xf322,	// (0x00062e5d) list_single_popup_submenu_pane_t1_ParamLimits

0xf322,	// (0x00062e5d) list_single_popup_submenu_pane_t1

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp1_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp1

0x5c35,	// (0x00059770) tabs_2_active_pane_g1

0x5c3d,	// (0x00059778) tabs_2_active_pane_t1

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp1_ParamLimits

0xebbc,	// (0x000626f7) bg_passive_tab_pane_cp1

0x5c35,	// (0x00059770) tabs_2_passive_pane_g1

0x5c3d,	// (0x00059778) tabs_2_passive_pane_t1

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp4

0x5c4f,	// (0x0005978a) tabs_2_long_active_pane_t1

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp4

0x686a,	// (0x0005a3a5) list_single_midp_graphic_pane_g4_ParamLimits

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp5

0x5c6e,	// (0x000597a9) tabs_3_long_active_pane_t1

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp5

0x686a,	// (0x0005a3a5) list_single_midp_graphic_pane_g4

0xebbc,	// (0x000626f7) bg_popup_window_pane_cp13_ParamLimits

0xebbc,	// (0x000626f7) bg_popup_window_pane_cp13

0xf340,	// (0x00062e7b) listscroll_popup_fast_pane_ParamLimits

0xf340,	// (0x00062e7b) listscroll_popup_fast_pane

0xf34f,	// (0x00062e8a) grid_popup_fast_pane_ParamLimits

0xf34f,	// (0x00062e8a) grid_popup_fast_pane

0xf361,	// (0x00062e9c) scroll_pane_cp9_ParamLimits

0xf361,	// (0x00062e9c) scroll_pane_cp9

0xbaa7,	// (0x0005f5e2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbaa7,	// (0x0005f5e2) list_single_graphic_hl_pane_t1_cp2

0xf385,	// (0x00062ec0) input_focus_pane_cp20_ParamLimits

0xf385,	// (0x00062ec0) input_focus_pane_cp20

0xf393,	// (0x00062ece) query_popup_data_pane_t1_ParamLimits

0xf393,	// (0x00062ece) query_popup_data_pane_t1

0xf3a6,	// (0x00062ee1) query_popup_data_pane_t2_ParamLimits

0xf3a6,	// (0x00062ee1) query_popup_data_pane_t2

0xf3ec,	// (0x00062f27) query_popup_data_pane_t3_ParamLimits

0xf3ec,	// (0x00062f27) query_popup_data_pane_t3

0xf42d,	// (0x00062f68) query_popup_data_pane_t4_ParamLimits

0xf42d,	// (0x00062f68) query_popup_data_pane_t4

0xf469,	// (0x00062fa4) query_popup_data_pane_t5_ParamLimits

0xf469,	// (0x00062fa4) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000631ec) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000631ec) query_popup_data_pane_t

0xf22c,	// (0x00062d67) bg_set_opt_pane_g1

0xf234,	// (0x00062d6f) bg_set_opt_pane_g2

0xf23c,	// (0x00062d77) bg_set_opt_pane_g3

0xf244,	// (0x00062d7f) bg_set_opt_pane_g4

0xf24c,	// (0x00062d87) bg_set_opt_pane_g5

0xf254,	// (0x00062d8f) bg_set_opt_pane_g6

0xf25c,	// (0x00062d97) bg_set_opt_pane_g7

0xf264,	// (0x00062d9f) bg_set_opt_pane_g8

0xf26c,	// (0x00062da7) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000631f7) bg_set_opt_pane_g

0x6170,	// (0x00059cab) control_top_pane_stacon_ParamLimits

0x6170,	// (0x00059cab) control_top_pane_stacon

0x61c3,	// (0x00059cfe) signal_pane_stacon_ParamLimits

0x61c3,	// (0x00059cfe) signal_pane_stacon

0x367f,	// (0x000571ba) stacon_top_pane_g1_ParamLimits

0x367f,	// (0x000571ba) stacon_top_pane_g1

0x61e8,	// (0x00059d23) title_pane_stacon_ParamLimits

0x61e8,	// (0x00059d23) title_pane_stacon

0x6212,	// (0x00059d4d) uni_indicator_pane_stacon_ParamLimits

0x6212,	// (0x00059d4d) uni_indicator_pane_stacon

0x622a,	// (0x00059d65) battery_pane_stacon_ParamLimits

0x622a,	// (0x00059d65) battery_pane_stacon

0x626e,	// (0x00059da9) control_bottom_pane_stacon_ParamLimits

0x626e,	// (0x00059da9) control_bottom_pane_stacon

0x6291,	// (0x00059dcc) navi_pane_stacon_ParamLimits

0x6291,	// (0x00059dcc) navi_pane_stacon

0x36a1,	// (0x000571dc) stacon_bottom_pane_g1_ParamLimits

0x36a1,	// (0x000571dc) stacon_bottom_pane_g1

0x5c80,	// (0x000597bb) aid_levels_signal_lsc_ParamLimits

0x5c80,	// (0x000597bb) aid_levels_signal_lsc

0x5c97,	// (0x000597d2) signal_pane_stacon_g1_ParamLimits

0x5c97,	// (0x000597d2) signal_pane_stacon_g1

0x5cab,	// (0x000597e6) signal_pane_stacon_g2_ParamLimits

0x5cab,	// (0x000597e6) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0006320a) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0006320a) signal_pane_stacon_g

0x5ce0,	// (0x0005981b) title_pane_stacon_t1_ParamLimits

0x5ce0,	// (0x0005981b) title_pane_stacon_t1

0xf4ad,	// (0x00062fe8) uni_indicator_pane_stacon_g1

0xf4b7,	// (0x00062ff2) uni_indicator_pane_stacon_g2

0xf4c1,	// (0x00062ffc) uni_indicator_pane_stacon_g3

0xf4cb,	// (0x00063006) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00063216) uni_indicator_pane_stacon_g

0x5d05,	// (0x00059840) control_top_pane_stacon_g1

0x5d0d,	// (0x00059848) control_top_pane_stacon_t1_ParamLimits

0x5d0d,	// (0x00059848) control_top_pane_stacon_t1

0x5d44,	// (0x0005987f) aid_levels_battery_lsc_ParamLimits

0x5d44,	// (0x0005987f) aid_levels_battery_lsc

0x5d5c,	// (0x00059897) battery_pane_stacon_g1_ParamLimits

0x5d5c,	// (0x00059897) battery_pane_stacon_g1

0x5d6f,	// (0x000598aa) battery_pane_stacon_g2_ParamLimits

0x5d6f,	// (0x000598aa) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0006321f) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0006321f) battery_pane_stacon_g

0x5dad,	// (0x000598e8) navi_icon_pane_stacon

0x5dc1,	// (0x000598fc) navi_navi_pane_stacon

0x5dad,	// (0x000598e8) navi_text_pane_stacon

0x5d05,	// (0x00059840) control_bottom_pane_stacon_g1

0x5dd7,	// (0x00059912) control_bottom_pane_stacon_t1_ParamLimits

0x5dd7,	// (0x00059912) control_bottom_pane_stacon_t1

0x5e0e,	// (0x00059949) grid_app_pane_ParamLimits

0x5e0e,	// (0x00059949) grid_app_pane

0x5e32,	// (0x0005996d) scroll_pane_cp15_ParamLimits

0x5e32,	// (0x0005996d) scroll_pane_cp15

0x5e47,	// (0x00059982) cell_app_pane_ParamLimits

0x5e47,	// (0x00059982) cell_app_pane

0x5e73,	// (0x000599ae) cell_app_pane_g1_ParamLimits

0x5e73,	// (0x000599ae) cell_app_pane_g1

0xf4ef,	// (0x0006302a) cell_app_pane_g2_ParamLimits

0xf4ef,	// (0x0006302a) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x00063224) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x00063224) cell_app_pane_g

0xf4fb,	// (0x00063036) cell_app_pane_t1_ParamLimits

0xf4fb,	// (0x00063036) cell_app_pane_t1

0xf512,	// (0x0006304d) grid_highlight_pane_ParamLimits

0xf512,	// (0x0006304d) grid_highlight_pane

0xf22c,	// (0x00062d67) cell_highlight_pane_g1

0xf234,	// (0x00062d6f) cell_highlight_pane_g2

0xf23c,	// (0x00062d77) cell_highlight_pane_g3

0xf244,	// (0x00062d7f) cell_highlight_pane_g4

0xf24c,	// (0x00062d87) cell_highlight_pane_g5

0xf254,	// (0x00062d8f) cell_highlight_pane_g6

0xf25c,	// (0x00062d97) cell_highlight_pane_g7

0xf264,	// (0x00062d9f) cell_highlight_pane_g8

0xf26c,	// (0x00062da7) cell_highlight_pane_g9

0xb91b,	// (0x0005f456) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000631d2) cell_highlight_pane_g

0xf523,	// (0x0006305e) bg_scroll_pane

0x5ea6,	// (0x000599e1) scroll_handle_pane

0x1207,	// (0x00054d42) scroll_bg_pane_g1

0x121c,	// (0x00054d57) scroll_bg_pane_g2

0x1234,	// (0x00054d6f) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00063229) scroll_bg_pane_g

0x1249,	// (0x00054d84) scroll_handle_focus_pane_ParamLimits

0x1249,	// (0x00054d84) scroll_handle_focus_pane

0x1207,	// (0x00054d42) scroll_handle_pane_g1

0x1256,	// (0x00054d91) scroll_handle_pane_g2

0x1234,	// (0x00054d6f) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00063230) scroll_handle_pane_g

0xf27d,	// (0x00062db8) bg_popup_sub_pane_cp21_ParamLimits

0xf27d,	// (0x00062db8) bg_popup_sub_pane_cp21

0x126a,	// (0x00054da5) popup_fep_japan_predictive_window_t1_ParamLimits

0x126a,	// (0x00054da5) popup_fep_japan_predictive_window_t1

0x1281,	// (0x00054dbc) popup_fep_japan_predictive_window_t2_ParamLimits

0x1281,	// (0x00054dbc) popup_fep_japan_predictive_window_t2

0x12b4,	// (0x00054def) popup_fep_japan_predictive_window_t3_ParamLimits

0x12b4,	// (0x00054def) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00063237) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00063237) popup_fep_japan_predictive_window_t

0xb925,	// (0x0005f460) bg_popup_sub_pane_cp23

0x12eb,	// (0x00054e26) listscroll_japin_cand_pane

0x12f3,	// (0x00054e2e) popup_fep_japan_candidate_window_t1

0x1301,	// (0x00054e3c) candidate_pane_ParamLimits

0x1301,	// (0x00054e3c) candidate_pane

0x1313,	// (0x00054e4e) scroll_pane_cp30

0x131d,	// (0x00054e58) list_single_popup_jap_candidate_pane_ParamLimits

0x131d,	// (0x00054e58) list_single_popup_jap_candidate_pane

0xb925,	// (0x0005f460) list_highlight_pane_cp30

0x1331,	// (0x00054e6c) list_single_popup_jap_candidate_pane_t1

0x5ecf,	// (0x00059a0a) level_1_signal

0x5edc,	// (0x00059a17) level_2_signal

0x5ee9,	// (0x00059a24) level_3_signal

0x5ef6,	// (0x00059a31) level_4_signal

0x5f03,	// (0x00059a3e) level_5_signal

0x5f10,	// (0x00059a4b) level_6_signal

0x5f1d,	// (0x00059a58) level_7_signal

0x5ecf,	// (0x00059a0a) level_1_battery

0x5edc,	// (0x00059a17) level_2_battery

0x5ee9,	// (0x00059a24) level_3_battery

0x5ef6,	// (0x00059a31) level_4_battery

0x5f03,	// (0x00059a3e) level_5_battery

0x5f10,	// (0x00059a4b) level_6_battery

0x5f1d,	// (0x00059a58) level_7_battery

0x1358,	// (0x00054e93) list_menu_pane_ParamLimits

0x1358,	// (0x00054e93) list_menu_pane

0x136e,	// (0x00054ea9) scroll_pane_cp25_ParamLimits

0x136e,	// (0x00054ea9) scroll_pane_cp25

0x1387,	// (0x00054ec2) list_double2_graphic_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double2_graphic_pane_cp2

0x1387,	// (0x00054ec2) list_double2_large_graphic_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double2_large_graphic_pane_cp2

0x1387,	// (0x00054ec2) list_double2_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double2_pane_cp2

0x1387,	// (0x00054ec2) list_double_graphic_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double_graphic_pane_cp2

0x1387,	// (0x00054ec2) list_double_large_graphic_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double_large_graphic_pane_cp2

0x1387,	// (0x00054ec2) list_double_number_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double_number_pane_cp2

0x1387,	// (0x00054ec2) list_double_pane_cp2_ParamLimits

0x1387,	// (0x00054ec2) list_double_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_2graphic_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_2graphic_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_graphic_heading_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_graphic_heading_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_graphic_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_graphic_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_heading_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_heading_pane_cp2

0x1397,	// (0x00054ed2) list_single_large_graphic_pane_cp2_ParamLimits

0x1397,	// (0x00054ed2) list_single_large_graphic_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_number_heading_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_number_heading_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_number_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_number_pane_cp2

0x5f5f,	// (0x00059a9a) list_single_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_pane_cp2

0x3512,	// (0x0005704d) bg_popup_sub_pane_cp22

0x6048,	// (0x00059b83) popup_side_volume_key_window_g1

0x6072,	// (0x00059bad) popup_side_volume_key_window_t1

0x6090,	// (0x00059bcb) volume_small_pane_cp1

0xb97f,	// (0x0005f4ba) bg_popup_sub_pane_cp24_ParamLimits

0xb97f,	// (0x0005f4ba) bg_popup_sub_pane_cp24

0x3528,	// (0x00057063) fep_china_uni_candidate_pane_ParamLimits

0x3528,	// (0x00057063) fep_china_uni_candidate_pane

0x353c,	// (0x00057077) fep_china_uni_entry_pane

0x354c,	// (0x00057087) popup_fep_china_uni_window_g1

0x3568,	// (0x000570a3) fep_china_uni_entry_pane_g1

0x3572,	// (0x000570ad) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00063268) fep_china_uni_entry_pane_g

0x357c,	// (0x000570b7) fep_entry_item_pane

0x3586,	// (0x000570c1) fep_candidate_item_pane

0x358e,	// (0x000570c9) fep_china_uni_candidate_pane_g1

0x3598,	// (0x000570d3) fep_china_uni_candidate_pane_g2

0x35a0,	// (0x000570db) fep_china_uni_candidate_pane_g3

0x35a8,	// (0x000570e3) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0006326d) fep_china_uni_candidate_pane_g

0xb91b,	// (0x0005f456) fep_entry_item_pane_g1

0x35b2,	// (0x000570ed) fep_entry_item_pane_t1_ParamLimits

0x35b2,	// (0x000570ed) fep_entry_item_pane_t1

0x35c8,	// (0x00057103) fep_candidate_item_pane_t1_ParamLimits

0x35c8,	// (0x00057103) fep_candidate_item_pane_t1

0x35dd,	// (0x00057118) fep_candidate_item_pane_t2_ParamLimits

0x35dd,	// (0x00057118) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00063276) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00063276) fep_candidate_item_pane_t

0xebbc,	// (0x000626f7) list_highlight_pane_cp31_ParamLimits

0xebbc,	// (0x000626f7) list_highlight_pane_cp31

0x35ef,	// (0x0005712a) level_1_signal_lsc

0x35f8,	// (0x00057133) level_2_signal_lsc

0x3601,	// (0x0005713c) level_3_signal_lsc

0x360a,	// (0x00057145) level_4_signal_lsc

0x3613,	// (0x0005714e) level_5_signal_lsc

0x361c,	// (0x00057157) level_6_signal_lsc

0x3625,	// (0x00057160) level_7_signal_lsc

0x3625,	// (0x00057160) level_1_battery_lsc

0x362e,	// (0x00057169) level_2_battery_lsc

0x3637,	// (0x00057172) level_3_battery_lsc

0x3640,	// (0x0005717b) level_4_battery_lsc

0x3649,	// (0x00057184) level_5_battery_lsc

0x3652,	// (0x0005718d) level_6_battery_lsc

0x35ef,	// (0x0005712a) level_7_battery_lsc

0x365b,	// (0x00057196) scroll_handle_focus_pane_g1

0x3664,	// (0x0005719f) scroll_handle_focus_pane_g2

0x366d,	// (0x000571a8) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0006327b) scroll_handle_focus_pane_g

0x6098,	// (0x00059bd3) list_single_2graphic_pane_g1_ParamLimits

0x6098,	// (0x00059bd3) list_single_2graphic_pane_g1

0x5615,	// (0x00059150) list_single_2graphic_pane_g2_ParamLimits

0x5615,	// (0x00059150) list_single_2graphic_pane_g2

0x5566,	// (0x000590a1) list_single_2graphic_pane_g3_ParamLimits

0x5566,	// (0x000590a1) list_single_2graphic_pane_g3

0x60a4,	// (0x00059bdf) list_single_2graphic_pane_g4_ParamLimits

0x60a4,	// (0x00059bdf) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00063282) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00063282) list_single_2graphic_pane_g

0x60b0,	// (0x00059beb) list_single_2graphic_pane_t1_ParamLimits

0x60b0,	// (0x00059beb) list_single_2graphic_pane_t1

0x60de,	// (0x00059c19) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x60de,	// (0x00059c19) list_double2_graphic_large_graphic_pane_g1

0x5865,	// (0x000593a0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5865,	// (0x000593a0) list_double2_graphic_large_graphic_pane_g2

0x57a6,	// (0x000592e1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x57a6,	// (0x000592e1) list_double2_graphic_large_graphic_pane_g3

0x60f0,	// (0x00059c2b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x60f0,	// (0x00059c2b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0006328b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0006328b) list_double2_graphic_large_graphic_pane_g

0x60fc,	// (0x00059c37) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x60fc,	// (0x00059c37) list_double2_graphic_large_graphic_pane_t1

0x6112,	// (0x00059c4d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6112,	// (0x00059c4d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00063294) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00063294) list_double2_graphic_large_graphic_pane_t

0x36ff,	// (0x0005723a) popup_fast_swap_window_ParamLimits

0x36ff,	// (0x0005723a) popup_fast_swap_window

0x371d,	// (0x00057258) popup_side_volume_key_window

0x373b,	// (0x00057276) stacon_top_pane

0x3745,	// (0x00057280) status_pane_ParamLimits

0x3745,	// (0x00057280) status_pane

0x373b,	// (0x00057276) status_small_pane

0xb925,	// (0x0005f460) control_pane

0xb925,	// (0x0005f460) stacon_bottom_pane

0xf1b4,	// (0x00062cef) scroll_pane_cp121

0xf1ab,	// (0x00062ce6) set_content_pane

0x6124,	// (0x00059c5f) bg_active_tab_pane_g1_cp1

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp1

0x612d,	// (0x00059c68) bg_active_tab_pane_g3_cp1

0x6124,	// (0x00059c5f) bg_passive_tab_pane_g1_cp1

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp1

0x612d,	// (0x00059c68) bg_passive_tab_pane_g3_cp1

0x6136,	// (0x00059c71) bg_active_tab_pane_g1_cp2

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp2

0x613f,	// (0x00059c7a) bg_active_tab_pane_g3_cp2

0x6136,	// (0x00059c71) bg_passive_tab_pane_g1_cp2

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp2

0x613f,	// (0x00059c7a) bg_passive_tab_pane_g3_cp2

0x6148,	// (0x00059c83) bg_active_tab_pane_g1_cp3

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp3

0x6151,	// (0x00059c8c) bg_active_tab_pane_g3_cp3

0x6148,	// (0x00059c83) bg_passive_tab_pane_g1_cp3

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp3

0x6151,	// (0x00059c8c) bg_passive_tab_pane_g3_cp3

0x615a,	// (0x00059c95) bg_active_tab_pane_g1_cp4

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp4

0x6165,	// (0x00059ca0) bg_active_tab_pane_g3_cp4

0x615a,	// (0x00059c95) bg_passive_tab_pane_g1_cp4

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp4

0x6165,	// (0x00059ca0) bg_passive_tab_pane_g3_cp4

0x36c6,	// (0x00057201) bg_active_tab_pane_g1_cp5

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp5

0x36bd,	// (0x000571f8) bg_active_tab_pane_g3_cp5

0x36c6,	// (0x00057201) bg_passive_tab_pane_g1_cp5

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp5

0x36bd,	// (0x000571f8) bg_passive_tab_pane_g3_cp5

0x62b4,	// (0x00059def) list_set_graphic_pane_ParamLimits

0x62b4,	// (0x00059def) list_set_graphic_pane

0xb925,	// (0x0005f460) bg_set_opt_pane_cp4

0x62c9,	// (0x00059e04) list_set_graphic_pane_g1_ParamLimits

0x62c9,	// (0x00059e04) list_set_graphic_pane_g1

0x62d5,	// (0x00059e10) list_set_graphic_pane_g2_ParamLimits

0x62d5,	// (0x00059e10) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00063299) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00063299) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x00063618) volume_small_pane_cp_g

0x62f9,	// (0x00059e34) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x62f9,	// (0x00059e34) list_double2_large_graphic_pane_g1_cp2

0x6307,	// (0x00059e42) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6307,	// (0x00059e42) list_double2_large_graphic_pane_g2_cp2

0x36cf,	// (0x0005720a) list_double2_large_graphic_pane_g3_cp2

0x36d7,	// (0x00057212) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x36d7,	// (0x00057212) list_double2_large_graphic_pane_t1_cp2

0x36ed,	// (0x00057228) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x36ed,	// (0x00057228) list_double2_large_graphic_pane_t2_cp2

0x9be2,	// (0x0005d71d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9be2,	// (0x0005d71d) list_double_large_graphic_pane_g1_cp2

0x9bf5,	// (0x0005d730) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9bf5,	// (0x0005d730) list_double_large_graphic_pane_g2_cp2

0x3826,	// (0x00057361) list_double_large_graphic_pane_g3_cp2

0x9c06,	// (0x0005d741) list_double_large_graphic_pane_g4_cp

0x9c0e,	// (0x0005d749) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9c0e,	// (0x0005d749) list_double_large_graphic_pane_t1_cp2

0x9c25,	// (0x0005d760) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9c25,	// (0x0005d760) list_double_large_graphic_pane_t2_cp2

0x6318,	// (0x00059e53) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6318,	// (0x00059e53) list_double2_graphic_pane_g1_cp2

0x6326,	// (0x00059e61) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6326,	// (0x00059e61) list_double2_graphic_pane_g2_cp2

0x6337,	// (0x00059e72) list_double2_graphic_pane_g3_cp2

0x3753,	// (0x0005728e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3753,	// (0x0005728e) list_double2_graphic_pane_t1_cp2

0x3769,	// (0x000572a4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3769,	// (0x000572a4) list_double2_graphic_pane_t2_cp2

0x377b,	// (0x000572b6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x377b,	// (0x000572b6) list_single_number_heading_pane_g1_cp2

0x3787,	// (0x000572c2) list_single_number_heading_pane_g2_cp2

0x378f,	// (0x000572ca) list_single_number_heading_pane_t1_cp2_ParamLimits

0x378f,	// (0x000572ca) list_single_number_heading_pane_t1_cp2

0x6341,	// (0x00059e7c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6341,	// (0x00059e7c) list_single_number_heading_pane_t2_cp2

0x37a5,	// (0x000572e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x37a5,	// (0x000572e0) list_single_number_heading_pane_t3_cp2

0x377b,	// (0x000572b6) list_single_heading_pane_g1_cp2_ParamLimits

0x377b,	// (0x000572b6) list_single_heading_pane_g1_cp2

0x3787,	// (0x000572c2) list_single_heading_pane_g2_cp2

0x378f,	// (0x000572ca) list_single_heading_pane_t1_cp2_ParamLimits

0x378f,	// (0x000572ca) list_single_heading_pane_t1_cp2

0x983c,	// (0x0005d377) list_single_heading_pane_t2_cp2_ParamLimits

0x983c,	// (0x0005d377) list_single_heading_pane_t2_cp2

0x9784,	// (0x0005d2bf) list_double_graphic_pane_g1_cp2_ParamLimits

0x9784,	// (0x0005d2bf) list_double_graphic_pane_g1_cp2

0x9790,	// (0x0005d2cb) list_double_graphic_pane_g2_cp2_ParamLimits

0x9790,	// (0x0005d2cb) list_double_graphic_pane_g2_cp2

0x979f,	// (0x0005d2da) list_double_graphic_pane_g3_cp2

0x97a7,	// (0x0005d2e2) list_double_graphic_pane_t1_cp2_ParamLimits

0x97a7,	// (0x0005d2e2) list_double_graphic_pane_t1_cp2

0x97bd,	// (0x0005d2f8) list_double_graphic_pane_t2_cp2_ParamLimits

0x97bd,	// (0x0005d2f8) list_double_graphic_pane_t2_cp2

0x381a,	// (0x00057355) list_double_number_pane_g1_cp2_ParamLimits

0x381a,	// (0x00057355) list_double_number_pane_g1_cp2

0x3826,	// (0x00057361) list_double_number_pane_g2_cp2

0x9748,	// (0x0005d283) list_double_number_pane_t1_cp2_ParamLimits

0x9748,	// (0x0005d283) list_double_number_pane_t1_cp2

0x975c,	// (0x0005d297) list_double_number_pane_t2_cp2_ParamLimits

0x975c,	// (0x0005d297) list_double_number_pane_t2_cp2

0x9772,	// (0x0005d2ad) list_double_number_pane_t3_cp2_ParamLimits

0x9772,	// (0x0005d2ad) list_double_number_pane_t3_cp2

0x9631,	// (0x0005d16c) list_single_graphic_pane_g1_cp2_ParamLimits

0x9631,	// (0x0005d16c) list_single_graphic_pane_g1_cp2

0x3866,	// (0x000573a1) list_single_graphic_pane_g2_cp2_ParamLimits

0x3866,	// (0x000573a1) list_single_graphic_pane_g2_cp2

0x636f,	// (0x00059eaa) list_single_graphic_pane_g3_cp2

0x9607,	// (0x0005d142) list_single_graphic_pane_t1_cp2_ParamLimits

0x9607,	// (0x0005d142) list_single_graphic_pane_t1_cp2

0x3866,	// (0x000573a1) list_single_number_pane_g1_cp2_ParamLimits

0x3866,	// (0x000573a1) list_single_number_pane_g1_cp2

0x636f,	// (0x00059eaa) list_single_number_pane_g2_cp2

0x9607,	// (0x0005d142) list_single_number_pane_t1_cp2_ParamLimits

0x9607,	// (0x0005d142) list_single_number_pane_t1_cp2

0x961d,	// (0x0005d158) list_single_number_pane_t2_cp2_ParamLimits

0x961d,	// (0x0005d158) list_single_number_pane_t2_cp2

0x6307,	// (0x00059e42) list_double2_pane_g1_cp2_ParamLimits

0x6307,	// (0x00059e42) list_double2_pane_g1_cp2

0x36cf,	// (0x0005720a) list_double2_pane_g2_cp2

0x37f2,	// (0x0005732d) list_double2_pane_t1_cp2_ParamLimits

0x37f2,	// (0x0005732d) list_double2_pane_t1_cp2

0x3808,	// (0x00057343) list_double2_pane_t2_cp2_ParamLimits

0x3808,	// (0x00057343) list_double2_pane_t2_cp2

0x381a,	// (0x00057355) list_double_pane_g1_cp2_ParamLimits

0x381a,	// (0x00057355) list_double_pane_g1_cp2

0x3826,	// (0x00057361) list_double_pane_g2_cp2

0x382e,	// (0x00057369) list_double_pane_t1_cp2_ParamLimits

0x382e,	// (0x00057369) list_double_pane_t1_cp2

0x3844,	// (0x0005737f) list_double_pane_t2_cp2_ParamLimits

0x3844,	// (0x0005737f) list_double_pane_t2_cp2

0x3856,	// (0x00057391) list_single_pane_cp2_g3

0x3866,	// (0x000573a1) list_single_pane_g1_cp2_ParamLimits

0x3866,	// (0x000573a1) list_single_pane_g1_cp2

0x636f,	// (0x00059eaa) list_single_pane_g2_cp2

0x6377,	// (0x00059eb2) list_single_pane_t1_cp2_ParamLimits

0x6377,	// (0x00059eb2) list_single_pane_t1_cp2

0x638f,	// (0x00059eca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x638f,	// (0x00059eca) list_single_large_graphic_pane_g1_cp2

0x639d,	// (0x00059ed8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x639d,	// (0x00059ed8) list_single_large_graphic_pane_g2_cp2

0x63a9,	// (0x00059ee4) list_single_large_graphic_pane_g3_cp2

0x63b1,	// (0x00059eec) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x63b1,	// (0x00059eec) list_single_large_graphic_pane_g4_cp1

0x63cb,	// (0x00059f06) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x63cb,	// (0x00059f06) list_single_large_graphic_pane_t1_cp2

0x95d1,	// (0x0005d10c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x95d1,	// (0x0005d10c) list_single_graphic_heading_pane_g1_cp2

0x959e,	// (0x0005d0d9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x959e,	// (0x0005d0d9) list_single_graphic_heading_pane_g4_cp2

0x636f,	// (0x00059eaa) list_single_graphic_heading_pane_g5_cp2

0x95dd,	// (0x0005d118) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x95dd,	// (0x0005d118) list_single_graphic_heading_pane_t1_cp2

0x95f3,	// (0x0005d12e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x95f3,	// (0x0005d12e) list_single_graphic_heading_pane_t2_cp2

0x9592,	// (0x0005d0cd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9592,	// (0x0005d0cd) list_single_2graphic_pane_g1_cp2

0x959e,	// (0x0005d0d9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x959e,	// (0x0005d0d9) list_single_2graphic_pane_g2_cp2

0x636f,	// (0x00059eaa) list_single_2graphic_pane_g3_cp2

0x95af,	// (0x0005d0ea) list_single_2graphic_pane_g4_cp2_ParamLimits

0x95af,	// (0x0005d0ea) list_single_2graphic_pane_g4_cp2

0x95bb,	// (0x0005d0f6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x95bb,	// (0x0005d0f6) list_single_2graphic_pane_t1_cp2

0xb91b,	// (0x0005f456) list_highlight_pane_g10_cp1

0x916a,	// (0x0005cca5) list_highlight_pane_g1_cp1

0x9172,	// (0x0005ccad) list_highlight_pane_g2_cp1

0x917a,	// (0x0005ccb5) list_highlight_pane_g3_cp1

0x9182,	// (0x0005ccbd) list_highlight_pane_g4_cp1

0x918a,	// (0x0005ccc5) list_highlight_pane_g5_cp1

0x9192,	// (0x0005cccd) list_highlight_pane_g6_cp1

0x919a,	// (0x0005ccd5) list_highlight_pane_g7_cp1

0x91a2,	// (0x0005ccdd) list_highlight_pane_g8_cp1

0x91aa,	// (0x0005cce5) list_highlight_pane_g9_cp1

0x908a,	// (0x0005cbc5) form_field_slider_pane_t3

0x9098,	// (0x0005cbd3) form_field_slider_pane_t4

0x90a6,	// (0x0005cbe1) slider_form_pane_ParamLimits

0x90a6,	// (0x0005cbe1) slider_form_pane

0xb925,	// (0x0005f460) control_abbreviations

0xb925,	// (0x0005f460) control_conventions

0xb925,	// (0x0005f460) control_definitions

0xb925,	// (0x0005f460) format_table_attribute

0x9892,	// (0x0005d3cd) bg_popup_preview_window_pane_g9

0xb925,	// (0x0005f460) format_table_data2

0xb925,	// (0x0005f460) format_table_data3

0xb925,	// (0x0005f460) format_table_data_example

0x0008,

0xb925,	// (0x0005f460) intro_purpose

0xf8fa,	// (0x00063435) bg_popup_preview_window_pane_g

0xb925,	// (0x0005f460) texts_category

0xb925,	// (0x0005f460) texts_graphics

0x63e1,	// (0x00059f1c) text_digital

0x63f0,	// (0x00059f2b) text_primary

0x63ff,	// (0x00059f3a) text_primary_small

0x640e,	// (0x00059f49) text_secondary

0x641d,	// (0x00059f58) text_title

0xa1b8,	// (0x0005dcf3) bg_passive_tab_pane_g1_cp3_srt

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp3_srt

0xa1c1,	// (0x0005dcfc) bg_passive_tab_pane_g3_cp3_srt

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp3_srt_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp3_srt

0xa1ca,	// (0x0005dd05) tabs_4_active_pane_srt_g1

0xa1d2,	// (0x0005dd0d) tabs_4_active_pane_srt_t1_ParamLimits

0xa1d2,	// (0x0005dd0d) tabs_4_active_pane_srt_t1

0xa1b8,	// (0x0005dcf3) bg_active_tab_pane_g1_cp3_copy1

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp3_copy1

0xa1c1,	// (0x0005dcfc) bg_active_tab_pane_g3_cp3_copy1

0xebbc,	// (0x000626f7) tabs_2_long_active_pane_srt_ParamLimits

0xebbc,	// (0x000626f7) tabs_2_long_active_pane_srt

0xebbc,	// (0x000626f7) tabs_2_long_passive_pane_srt_ParamLimits

0xebbc,	// (0x000626f7) tabs_2_long_passive_pane_srt

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp4_srt

0x9e82,	// (0x0005d9bd) bg_passive_tab_pane_g1_cp4_srt

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp4_srt

0x9e8b,	// (0x0005d9c6) bg_passive_tab_pane_g3_cp4_srt

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp4_srt_ParamLimits

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp4_srt

0x9e94,	// (0x0005d9cf) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9e94,	// (0x0005d9cf) tabs_2_long_active_pane_srt_t1

0x9e82,	// (0x0005d9bd) bg_active_tab_pane_g1_cp4_srt

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp4_srt

0x9e8b,	// (0x0005d9c6) bg_active_tab_pane_g3_cp4_srt

0xb97f,	// (0x0005f4ba) tabs_3_long_active_pane_srt_ParamLimits

0xb97f,	// (0x0005f4ba) tabs_3_long_active_pane_srt

0xb97f,	// (0x0005f4ba) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb97f,	// (0x0005f4ba) tabs_3_long_passive_pane_cp_srt

0xb97f,	// (0x0005f4ba) tabs_3_long_passive_pane_srt_ParamLimits

0xb97f,	// (0x0005f4ba) tabs_3_long_passive_pane_srt

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp5_srt

0x36c6,	// (0x00057201) bg_passive_tab_pane_g1_cp5_srt

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp5_srt

0x36bd,	// (0x000571f8) bg_passive_tab_pane_g3_cp5_srt

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp5_srt_ParamLimits

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp5_srt

0x9e70,	// (0x0005d9ab) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9e70,	// (0x0005d9ab) tabs_3_long_active_pane_srt_t1

0x36c6,	// (0x00057201) bg_active_tab_pane_g1_cp5_srt

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp5_srt

0x36bd,	// (0x000571f8) bg_active_tab_pane_g3_cp5_srt

0x9e62,	// (0x0005d99d) navi_text_pane_srt_t1

0x9e5a,	// (0x0005d995) navi_icon_pane_srt_g1

0x6691,	// (0x0005a1cc) midp_editing_number_pane_srt

0x642c,	// (0x00059f67) midp_ticker_pane_srt

0x6699,	// (0x0005a1d4) midp_ticker_pane_srt_g1

0x66a1,	// (0x0005a1dc) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000632b8) midp_ticker_pane_srt_g

0x66a9,	// (0x0005a1e4) midp_ticker_pane_srt_t1

0x9e4b,	// (0x0005d986) midp_editing_number_pane_t1_copy1

0x5c62,	// (0x0005979d) listscroll_midp_pane

0x5c62,	// (0x0005979d) midp_form_pane

0x6496,	// (0x00059fd1) midp_info_popup_window_ParamLimits

0x6496,	// (0x00059fd1) midp_info_popup_window

0xf27d,	// (0x00062db8) bg_popup_sub_pane_cp50_ParamLimits

0xf27d,	// (0x00062db8) bg_popup_sub_pane_cp50

0x8da0,	// (0x0005c8db) listscroll_midp_info_pane_ParamLimits

0x8da0,	// (0x0005c8db) listscroll_midp_info_pane

0x8d88,	// (0x0005c8c3) listscroll_form_midp_pane_ParamLimits

0x8d88,	// (0x0005c8c3) listscroll_form_midp_pane

0x8d94,	// (0x0005c8cf) scroll_bar_cp050

0x8d68,	// (0x0005c8a3) list_midp_pane

0xac53,	// (0x0005e78e) signal_pane_g2_cp

0x8ca2,	// (0x0005c7dd) listscroll_midp_info_pane_t1_ParamLimits

0x8ca2,	// (0x0005c7dd) listscroll_midp_info_pane_t1

0x8cba,	// (0x0005c7f5) listscroll_midp_info_pane_t2_ParamLimits

0x8cba,	// (0x0005c7f5) listscroll_midp_info_pane_t2

0x8cf8,	// (0x0005c833) listscroll_midp_info_pane_t3_ParamLimits

0x8cf8,	// (0x0005c833) listscroll_midp_info_pane_t3

0x8d32,	// (0x0005c86d) listscroll_midp_info_pane_t4_ParamLimits

0x8d32,	// (0x0005c86d) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00063370) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00063370) listscroll_midp_info_pane_t

0xf2fd,	// (0x00062e38) scroll_pane_cp21

0x8c3c,	// (0x0005c777) form_midp_field_choice_group_pane

0x8c45,	// (0x0005c780) form_midp_field_text_pane

0x8c88,	// (0x0005c7c3) form_midp_field_time_pane

0x8c90,	// (0x0005c7cb) form_midp_gauge_slider_pane

0x8c99,	// (0x0005c7d4) form_midp_gauge_wait_pane

0xb925,	// (0x0005f460) form_midp_image_pane

0x696e,	// (0x0005a4a9) list_single_midp_pane_ParamLimits

0x696e,	// (0x0005a4a9) list_single_midp_pane

0x8c00,	// (0x0005c73b) form_midp_field_text_pane_t1

0x89ec,	// (0x0005c527) input_focus_pane_cp050

0x8c2b,	// (0x0005c766) list_midp_form_text_pane

0x8bcf,	// (0x0005c70a) form_midp_field_choice_group_pane_t1

0x8bdd,	// (0x0005c718) input_focus_pane_cp051

0x8bf1,	// (0x0005c72c) list_midp_choice_pane

0xb925,	// (0x0005f460) status_idle_pane

0x8bb3,	// (0x0005c6ee) form_midp_field_time_pane_t1

0xb91b,	// (0x0005f456) wait_anim_pane_g2_copy1

0x8bc1,	// (0x0005c6fc) form_midp_field_time_pane_t2

0x0001,

0x6546,	// (0x0005a081) aid_navinavi_width_2_pane

0xf830,	// (0x0006336b) form_midp_field_time_pane_t

0xb925,	// (0x0005f460) input_focus_pane_cp052

0xb925,	// (0x0005f460) bg_input_focus_pane_cp040

0x8b73,	// (0x0005c6ae) form_midp_gauge_slider_pane_t1

0x8b81,	// (0x0005c6bc) form_midp_gauge_slider_pane_t2

0x8b8f,	// (0x0005c6ca) form_midp_gauge_slider_pane_t3

0x8b9d,	// (0x0005c6d8) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00063362) form_midp_gauge_slider_pane_t

0x8bab,	// (0x0005c6e6) form_midp_slider_pane

0xebbc,	// (0x000626f7) bg_input_focus_pane_cp041_ParamLimits

0xebbc,	// (0x000626f7) bg_input_focus_pane_cp041

0x8b40,	// (0x0005c67b) form_midp_gauge_wait_pane_t1_ParamLimits

0x8b40,	// (0x0005c67b) form_midp_gauge_wait_pane_t1

0x8b52,	// (0x0005c68d) form_midp_gauge_wait_pane_t2_ParamLimits

0x8b52,	// (0x0005c68d) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x0006335d) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x0006335d) form_midp_gauge_wait_pane_t

0x8b64,	// (0x0005c69f) form_midp_wait_pane_ParamLimits

0x8b64,	// (0x0005c69f) form_midp_wait_pane

0x8b08,	// (0x0005c643) form_midp_image_pane_g1

0x8b11,	// (0x0005c64c) form_midp_image_pane_t1

0x8b20,	// (0x0005c65b) form_midp_image_pane_t2

0x8b2f,	// (0x0005c66a) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00063356) form_midp_image_pane_t

0x8aff,	// (0x0005c63a) list_single_midp_pane_g1

0x39b2,	// (0x000574ed) list_single_midp_pane_t1

0x8ae5,	// (0x0005c620) list_midp_form_item_pane_ParamLimits

0x8ae5,	// (0x0005c620) list_midp_form_item_pane

0x64ee,	// (0x0005a029) list_midp_form_item_pane_t1

0x64fd,	// (0x0005a038) midp_ticker_pane_g1

0x6509,	// (0x0005a044) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0006329e) midp_ticker_pane_g

0x6515,	// (0x0005a050) midp_ticker_pane_t1

0xa0be,	// (0x0005dbf9) midp_editing_number_pane_t1

0xa09c,	// (0x0005dbd7) midp_editing_number_pane

0xa0ab,	// (0x0005dbe6) midp_ticker_pane

0x9e3b,	// (0x0005d976) ai_message_heading_pane

0xb925,	// (0x0005f460) bg_popup_window_pane_cp14

0x9e43,	// (0x0005d97e) listscroll_ai_message_pane

0x9dc1,	// (0x0005d8fc) ai_message_heading_pane_g1_ParamLimits

0x9dc1,	// (0x0005d8fc) ai_message_heading_pane_g1

0x9dcd,	// (0x0005d908) ai_message_heading_pane_g2_ParamLimits

0x9dcd,	// (0x0005d908) ai_message_heading_pane_g2

0x9ddb,	// (0x0005d916) ai_message_heading_pane_g3_ParamLimits

0x9ddb,	// (0x0005d916) ai_message_heading_pane_g3

0x9de7,	// (0x0005d922) ai_message_heading_pane_g4_ParamLimits

0x9de7,	// (0x0005d922) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x00063497) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x00063497) ai_message_heading_pane_g

0x9df3,	// (0x0005d92e) ai_message_heading_pane_t1_ParamLimits

0x9df3,	// (0x0005d92e) ai_message_heading_pane_t1

0x9e0d,	// (0x0005d948) ai_message_heading_pane_t2_ParamLimits

0x9e0d,	// (0x0005d948) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x000634a0) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x000634a0) ai_message_heading_pane_t

0x9e21,	// (0x0005d95c) bg_popup_heading_pane_cp1_ParamLimits

0x9e21,	// (0x0005d95c) bg_popup_heading_pane_cp1

0x9daf,	// (0x0005d8ea) list_ai_message_pane_ParamLimits

0x9daf,	// (0x0005d8ea) list_ai_message_pane

0xf2fd,	// (0x00062e38) scroll_pane_cp10

0x9d4b,	// (0x0005d886) list_ai_message_pane_g1

0x9d53,	// (0x0005d88e) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x00063474) list_ai_message_pane_g

0x9d5b,	// (0x0005d896) list_ai_message_pane_t1_ParamLimits

0x9d5b,	// (0x0005d896) list_ai_message_pane_t1

0x9d70,	// (0x0005d8ab) list_ai_message_pane_t2_ParamLimits

0x9d70,	// (0x0005d8ab) list_ai_message_pane_t2

0x9d85,	// (0x0005d8c0) list_ai_message_pane_t3_ParamLimits

0x9d85,	// (0x0005d8c0) list_ai_message_pane_t3

0x9d9a,	// (0x0005d8d5) list_ai_message_pane_t4_ParamLimits

0x9d9a,	// (0x0005d8d5) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00063479) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00063479) list_ai_message_pane_t

0x9d34,	// (0x0005d86f) cell_ai_soft_ind_pane_ParamLimits

0x9d34,	// (0x0005d86f) cell_ai_soft_ind_pane

0x6527,	// (0x0005a062) cell_ai_soft_ind_pane_g1_ParamLimits

0x6527,	// (0x0005a062) cell_ai_soft_ind_pane_g1

0xb925,	// (0x0005f460) grid_highlight_cp1

0x6534,	// (0x0005a06f) text_secondary_cp56_ParamLimits

0x6534,	// (0x0005a06f) text_secondary_cp56

0x9d09,	// (0x0005d844) example_general_pane_ParamLimits

0x9d09,	// (0x0005d844) example_general_pane

0x9d15,	// (0x0005d850) example_parent_pane_g1_ParamLimits

0x9d15,	// (0x0005d850) example_parent_pane_g1

0x9d21,	// (0x0005d85c) example_parent_pane_t1_ParamLimits

0x9d21,	// (0x0005d85c) example_parent_pane_t1

0x81fe,	// (0x0005bd39) popup_preview_text_window_ParamLimits

0x81fe,	// (0x0005bd39) popup_preview_text_window

0x385e,	// (0x00057399) list_single_pane_cp2_g4

0xed97,	// (0x000628d2) bg_popup_preview_window_pane_ParamLimits

0xed97,	// (0x000628d2) bg_popup_preview_window_pane

0x989c,	// (0x0005d3d7) popup_preview_text_window_t1_ParamLimits

0x989c,	// (0x0005d3d7) popup_preview_text_window_t1

0x98ba,	// (0x0005d3f5) popup_preview_text_window_t2_ParamLimits

0x98ba,	// (0x0005d3f5) popup_preview_text_window_t2

0x9903,	// (0x0005d43e) popup_preview_text_window_t3_ParamLimits

0x9903,	// (0x0005d43e) popup_preview_text_window_t3

0x9ae8,	// (0x0005d623) popup_preview_text_window_t4_ParamLimits

0x9ae8,	// (0x0005d623) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x00063448) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x00063448) popup_preview_text_window_t

0x9b66,	// (0x0005d6a1) scroll_pane_cp11

0x8978,	// (0x0005c4b3) bg_popup_preview_window_pane_g1

0x9850,	// (0x0005d38b) bg_popup_preview_window_pane_g2

0x985a,	// (0x0005d395) bg_popup_preview_window_pane_g3

0x9864,	// (0x0005d39f) bg_popup_preview_window_pane_g4

0x986e,	// (0x0005d3a9) bg_popup_preview_window_pane_g5

0x9878,	// (0x0005d3b3) bg_popup_preview_window_pane_g6

0x9880,	// (0x0005d3bb) bg_popup_preview_window_pane_g7

0x9888,	// (0x0005d3c3) bg_popup_preview_window_pane_g8

0x4de8,	// (0x00058923) aid_popup_width_pane

0x81da,	// (0x0005bd15) popup_midp_note_alarm_window_ParamLimits

0x81da,	// (0x0005bd15) popup_midp_note_alarm_window

0xf1c5,	// (0x00062d00) data_form_pane_ParamLimits

0x5aea,	// (0x00059625) form_field_data_pane_g1

0x5af4,	// (0x0005962f) form_field_data_pane_t1_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_ParamLimits

0x346c,	// (0x00056fa7) data_form_wide_pane_ParamLimits

0x347d,	// (0x00056fb8) form_field_data_wide_pane_g1

0x3489,	// (0x00056fc4) form_field_data_wide_pane_t1_ParamLimits

0xef4c,	// (0x00062a87) input_focus_pane_cp6_ParamLimits

0x5c27,	// (0x00059762) input_popup_find_pane_g1_ParamLimits

0x5c27,	// (0x00059762) input_popup_find_pane_g1

0x5d80,	// (0x000598bb) aid_navi_side_left_pane

0x5d95,	// (0x000598d0) aid_navi_side_right_pane

0x9265,	// (0x0005cda0) bg_popup_window_pane_cp30_ParamLimits

0x9265,	// (0x0005cda0) bg_popup_window_pane_cp30

0x92df,	// (0x0005ce1a) popup_midp_note_alarm_window_g1_ParamLimits

0x92df,	// (0x0005ce1a) popup_midp_note_alarm_window_g1

0x930f,	// (0x0005ce4a) popup_midp_note_alarm_window_t1_ParamLimits

0x930f,	// (0x0005ce4a) popup_midp_note_alarm_window_t1

0x93b0,	// (0x0005ceeb) popup_midp_note_alarm_window_t2_ParamLimits

0x93b0,	// (0x0005ceeb) popup_midp_note_alarm_window_t2

0x945e,	// (0x0005cf99) popup_midp_note_alarm_window_t3_ParamLimits

0x945e,	// (0x0005cf99) popup_midp_note_alarm_window_t3

0x9490,	// (0x0005cfcb) popup_midp_note_alarm_window_t4_ParamLimits

0x9490,	// (0x0005cfcb) popup_midp_note_alarm_window_t4

0x94b6,	// (0x0005cff1) popup_midp_note_alarm_window_t5_ParamLimits

0x94b6,	// (0x0005cff1) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x000633e5) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x000633e5) popup_midp_note_alarm_window_t

0x9562,	// (0x0005d09d) wait_bar_pane_cp1_ParamLimits

0x9562,	// (0x0005d09d) wait_bar_pane_cp1

0xb925,	// (0x0005f460) wait_anim_pane_copy1

0xb925,	// (0x0005f460) wait_border_pane_copy1

0x8f4a,	// (0x0005ca85) wait_border_pane_g1_copy1

0x34a3,	// (0x00056fde) form_field_popup_pane_g1

0x5b0e,	// (0x00059649) form_field_popup_pane_t1_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_cp7_ParamLimits

0xf1ff,	// (0x00062d3a) list_form_pane_ParamLimits

0x34ab,	// (0x00056fe6) form_field_popup_wide_pane_g1

0x34b3,	// (0x00056fee) form_field_popup_wide_pane_t1_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_cp8_ParamLimits

0xf20b,	// (0x00062d46) list_form_wide_pane_ParamLimits

0xa245,	// (0x0005dd80) aid_size_cell_graphic_pane

0x5b8d,	// (0x000596c8) data_form_pane_t1_ParamLimits

0x6bfd,	// (0x0005a738) data_form_wide_pane_t1_ParamLimits

0x8525,	// (0x0005c060) bg_status_flat_pane

0x51fb,	// (0x00058d36) title_pane_t1_ParamLimits

0xb947,	// (0x0005f482) title_pane_t2_ParamLimits

0xb96d,	// (0x0005f4a8) title_pane_t3_ParamLimits

0xf55d,	// (0x00063098) title_pane_t_ParamLimits

0x5ecf,	// (0x00059a0a) level_1_signal_ParamLimits

0x5edc,	// (0x00059a17) level_2_signal_ParamLimits

0x5ee9,	// (0x00059a24) level_3_signal_ParamLimits

0x5ef6,	// (0x00059a31) level_4_signal_ParamLimits

0x5f03,	// (0x00059a3e) level_5_signal_ParamLimits

0x5f10,	// (0x00059a4b) level_6_signal_ParamLimits

0x5f1d,	// (0x00059a58) level_7_signal_ParamLimits

0x5ecf,	// (0x00059a0a) level_1_battery_ParamLimits

0x5edc,	// (0x00059a17) level_2_battery_ParamLimits

0x5ee9,	// (0x00059a24) level_3_battery_ParamLimits

0x5ef6,	// (0x00059a31) level_4_battery_ParamLimits

0x5f03,	// (0x00059a3e) level_5_battery_ParamLimits

0x5f10,	// (0x00059a4b) level_6_battery_ParamLimits

0x5f1d,	// (0x00059a58) level_7_battery_ParamLimits

0x916a,	// (0x0005cca5) bg_status_flat_pane_g1

0x9172,	// (0x0005ccad) bg_status_flat_pane_g2

0x917a,	// (0x0005ccb5) bg_status_flat_pane_g3

0x9182,	// (0x0005ccbd) bg_status_flat_pane_g4

0x918a,	// (0x0005ccc5) bg_status_flat_pane_g5

0x9192,	// (0x0005cccd) bg_status_flat_pane_g6

0x919a,	// (0x0005ccd5) bg_status_flat_pane_g7

0x526b,	// (0x00058da6) tabs_3_active_pane_t1_ParamLimits

0x526b,	// (0x00058da6) tabs_3_passive_pane_t1_ParamLimits

0x5285,	// (0x00058dc0) tabs_4_active_pane_t1_ParamLimits

0x5285,	// (0x00058dc0) tabs_4_1_passive_pane_t1_ParamLimits

0x5c3d,	// (0x00059778) tabs_2_active_pane_t1_ParamLimits

0x5c3d,	// (0x00059778) tabs_2_passive_pane_t1_ParamLimits

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp4_ParamLimits

0x5c4f,	// (0x0005978a) tabs_2_long_active_pane_t1_ParamLimits

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp4_ParamLimits

0x689d,	// (0x0005a3d8) list_single_midp_graphic_pane_t1_ParamLimits

0x1a95,	// (0x000555d0) bg_active_tab_pane_cp5_ParamLimits

0x5c6e,	// (0x000597a9) tabs_3_long_active_pane_t1_ParamLimits

0x5c62,	// (0x0005979d) bg_passive_tab_pane_cp5_ParamLimits

0x689d,	// (0x0005a3d8) list_single_midp_graphic_pane_t1

0x8525,	// (0x0005c060) bg_status_flat_pane_ParamLimits

0x85f0,	// (0x0005c12b) indicator_pane_cp2_ParamLimits

0x85f0,	// (0x0005c12b) indicator_pane_cp2

0x8733,	// (0x0005c26e) navi_pane_srt_ParamLimits

0x8733,	// (0x0005c26e) navi_pane_srt

0x8757,	// (0x0005c292) popup_clock_digital_analogue_window_cp1

0xec00,	// (0x0006273b) indicator_pane_t1

0x642c,	// (0x00059f67) copy_highlight_pane

0x642c,	// (0x00059f67) cursor_graphics_pane

0x642c,	// (0x00059f67) graphic_within_text_pane

0x642c,	// (0x00059f67) link_highlight_pane

0x9b29,	// (0x0005d664) popup_preview_text_window_t5_ParamLimits

0x9b29,	// (0x0005d664) popup_preview_text_window_t5

0x6550,	// (0x0005a08b) cursor_digital_pane

0x6550,	// (0x0005a08b) cursor_primary_pane

0x6561,	// (0x0005a09c) cursor_primary_small_pane

0x6569,	// (0x0005a0a4) cursor_secondary_pane

0x6571,	// (0x0005a0ac) cursor_title_pane

0x6550,	// (0x0005a08b) link_highlight_digital_pane

0x6558,	// (0x0005a093) link_highlight_primary_pane

0x6561,	// (0x0005a09c) link_highlight_primary_small_pane

0x6569,	// (0x0005a0a4) link_highlight_secondary_pane

0x6571,	// (0x0005a0ac) link_highlight_title_pane

0x6550,	// (0x0005a08b) copy_highlight_digital_pane

0x6550,	// (0x0005a08b) copy_highlight_primary_pane

0x6561,	// (0x0005a09c) copy_highlight_primary_small_pane

0x6569,	// (0x0005a0a4) copy_highlight_secondary_pane

0x6571,	// (0x0005a0ac) copy_highlight_title_pane

0x6569,	// (0x0005a0a4) graphic_text_digital_pane

0x9208,	// (0x0005cd43) graphic_text_primary_pane

0x9211,	// (0x0005cd4c) graphic_text_primary_small_pane

0x6561,	// (0x0005a09c) graphic_text_secondary_pane

0x6550,	// (0x0005a08b) graphic_text_title_pane

0x6579,	// (0x0005a0b4) cursor_primary_pane_g1

0x91fa,	// (0x0005cd35) cursor_text_primary_t1

0x91e2,	// (0x0005cd1d) cursor_primary_small_pane_g1

0x91ec,	// (0x0005cd27) cursor_text_primary_small_t1

0x91ca,	// (0x0005cd05) cursor_primary_small_pane_g1_copy1

0x91d4,	// (0x0005cd0f) cursor_text_primary_small_t1_copy1

0x91b2,	// (0x0005cced) cursor_text_title_t1

0x91c0,	// (0x0005ccfb) cursor_title_pane_g1

0x6579,	// (0x0005a0b4) cursor_digital_pane_g1

0x6583,	// (0x0005a0be) cursor_text_digital_t1

0x6591,	// (0x0005a0cc) link_highlight_primary_pane_g1

0x915b,	// (0x0005cc96) link_highlight_primary_pane_t1

0x6591,	// (0x0005a0cc) link_highlight_primary_small_pane_g1

0x6599,	// (0x0005a0d4) link_highlight_primary_small_pane_t1

0x65a8,	// (0x0005a0e3) link_highlight_secondary_pane_g1

0x65b0,	// (0x0005a0eb) link_highlight_secondary_pane_t1

0x90cf,	// (0x0005cc0a) link_highlight_title_pane_g1

0x90d7,	// (0x0005cc12) link_highlight_title_pane_t1

0x90b8,	// (0x0005cbf3) link_highlight_digital_pane_g1

0x90c0,	// (0x0005cbfb) link_highlight_digital_pane_t1

0x8f80,	// (0x0005cabb) copy_highlight_primary_pane_g1

0x8f97,	// (0x0005cad2) copy_highlight_primary_pane_t1

0x8f80,	// (0x0005cabb) copy_highlight_primary_small_pane_g1

0x8f88,	// (0x0005cac3) copy_highlight_primary_small_pane_t1

0x65bf,	// (0x0005a0fa) copy_highlight_secondary_pane_g1

0x65c7,	// (0x0005a102) copy_highlight_secondary_pane_t1

0x8f69,	// (0x0005caa4) copy_highlight_title_pane_g1

0x8f71,	// (0x0005caac) copy_highlight_title_pane_t1

0x8f80,	// (0x0005cabb) copy_highlight_digital_pane_g1

0xa415,	// (0x0005df50) copy_highlight_digital_pane_t1

0xa369,	// (0x0005dea4) graphic_text_primary_pane_g1

0xa3f9,	// (0x0005df34) graphic_text_primary_pane_t1

0xa407,	// (0x0005df42) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x00063514) graphic_text_primary_pane_t

0xa3d5,	// (0x0005df10) graphic_text_primary_small_pane_g1

0xa3dd,	// (0x0005df18) graphic_text_primary_small_pane_t1

0xa3eb,	// (0x0005df26) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x0006350f) graphic_text_primary_small_pane_t

0xa3b1,	// (0x0005deec) graphic_text_secondary_pane_g1

0xa3b9,	// (0x0005def4) graphic_text_secondary_pane_t1

0xa3c7,	// (0x0005df02) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x0006350a) graphic_text_secondary_pane_t

0xa38d,	// (0x0005dec8) graphic_text_title_pane_g1

0xa395,	// (0x0005ded0) graphic_text_title_pane_t1

0xa3a3,	// (0x0005dede) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x00063505) graphic_text_title_pane_t

0xa369,	// (0x0005dea4) graphic_text_digital_pane_g1

0xa371,	// (0x0005deac) graphic_text_digital_pane_t1

0xa37f,	// (0x0005deba) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x00063500) graphic_text_digital_pane_t

0xebbc,	// (0x000626f7) navi_icon_pane_srt_ParamLimits

0xebbc,	// (0x000626f7) navi_icon_pane_srt

0xb925,	// (0x0005f460) navi_midp_pane_srt

0xb925,	// (0x0005f460) navi_navi_pane_srt

0xebbc,	// (0x000626f7) navi_text_pane_srt_ParamLimits

0xebbc,	// (0x000626f7) navi_text_pane_srt

0xa334,	// (0x0005de6f) navi_navi_icon_text_pane_srt

0xa33c,	// (0x0005de77) navi_navi_pane_srt_g1_ParamLimits

0xa33c,	// (0x0005de77) navi_navi_pane_srt_g1

0xa34e,	// (0x0005de89) navi_navi_pane_srt_g2_ParamLimits

0xa34e,	// (0x0005de89) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x000634fb) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x000634fb) navi_navi_pane_srt_g

0xa360,	// (0x0005de9b) navi_navi_tabs_pane_srt

0xa334,	// (0x0005de6f) navi_navi_text_pane_srt

0xa334,	// (0x0005de6f) navi_navi_volume_pane_srt

0xa325,	// (0x0005de60) navi_navi_text_pane_srt_t1

0x6ce4,	// (0x0005a81f) navi_navi_volume_pane_srt_g1

0x6cec,	// (0x0005a827) volume_small_pane_srt_ParamLimits

0x6cec,	// (0x0005a827) volume_small_pane_srt

0x65d6,	// (0x0005a111) volume_small_pane_srt_g1_ParamLimits

0x65d6,	// (0x0005a111) volume_small_pane_srt_g1

0x65e6,	// (0x0005a121) volume_small_pane_srt_g2_ParamLimits

0x65e6,	// (0x0005a121) volume_small_pane_srt_g2

0x65f7,	// (0x0005a132) volume_small_pane_srt_g3_ParamLimits

0x65f7,	// (0x0005a132) volume_small_pane_srt_g3

0x6608,	// (0x0005a143) volume_small_pane_srt_g4_ParamLimits

0x6608,	// (0x0005a143) volume_small_pane_srt_g4

0x6619,	// (0x0005a154) volume_small_pane_srt_g5_ParamLimits

0x6619,	// (0x0005a154) volume_small_pane_srt_g5

0x662a,	// (0x0005a165) volume_small_pane_srt_g6_ParamLimits

0x662a,	// (0x0005a165) volume_small_pane_srt_g6

0x663b,	// (0x0005a176) volume_small_pane_srt_g7_ParamLimits

0x663b,	// (0x0005a176) volume_small_pane_srt_g7

0x664c,	// (0x0005a187) volume_small_pane_srt_g8_ParamLimits

0x664c,	// (0x0005a187) volume_small_pane_srt_g8

0x665d,	// (0x0005a198) volume_small_pane_srt_g9_ParamLimits

0x665d,	// (0x0005a198) volume_small_pane_srt_g9

0x666e,	// (0x0005a1a9) volume_small_pane_srt_g10_ParamLimits

0x666e,	// (0x0005a1a9) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000632a3) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000632a3) volume_small_pane_srt_g

0xee4c,	// (0x00062987) query_popup_data_pane_cp2

0xa30b,	// (0x0005de46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa30b,	// (0x0005de46) navi_navi_icon_text_pane_srt_t1

0x9208,	// (0x0005cd43) navi_tabs_2_long_pane_srt

0x9208,	// (0x0005cd43) navi_tabs_2_pane_srt

0x9208,	// (0x0005cd43) navi_tabs_3_long_pane_srt

0x9208,	// (0x0005cd43) navi_tabs_3_pane_srt

0x9208,	// (0x0005cd43) navi_tabs_4_pane_srt

0x6cc4,	// (0x0005a7ff) tabs_2_active_pane_srt_ParamLimits

0x6cc4,	// (0x0005a7ff) tabs_2_active_pane_srt

0x6cd4,	// (0x0005a80f) tabs_2_passive_pane_srt_ParamLimits

0x6cd4,	// (0x0005a80f) tabs_2_passive_pane_srt

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp1_srt

0xa2d7,	// (0x0005de12) bg_passive_tab_pane_g1_cp1_srt

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp1_srt

0xa2e0,	// (0x0005de1b) bg_passive_tab_pane_g3_cp1_srt

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp1_srt_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp1_srt

0xa2e9,	// (0x0005de24) tabs_2_active_pane_srt_g1

0xa2f1,	// (0x0005de2c) tabs_2_active_pane_srt_t1_ParamLimits

0xa2f1,	// (0x0005de2c) tabs_2_active_pane_srt_t1

0xa2d7,	// (0x0005de12) bg_active_tab_pane_g1_cp1_srt

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp1_srt

0xa2e0,	// (0x0005de1b) bg_active_tab_pane_g3_cp1_srt

0x6c91,	// (0x0005a7cc) tabs_3_active_pane_srt_ParamLimits

0x6c91,	// (0x0005a7cc) tabs_3_active_pane_srt

0x6ca2,	// (0x0005a7dd) tabs_3_passive_pane_cp_srt_ParamLimits

0x6ca2,	// (0x0005a7dd) tabs_3_passive_pane_cp_srt

0x6cb3,	// (0x0005a7ee) tabs_3_passive_pane_srt_ParamLimits

0x6cb3,	// (0x0005a7ee) tabs_3_passive_pane_srt

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7e37,	// (0x0005b972) bg_passive_tab_pane_cp2_srt

0x667f,	// (0x0005a1ba) bg_passive_tab_pane_g1_cp2_srt

0x3676,	// (0x000571b1) bg_passive_tab_pane_g2_cp2_srt

0x6688,	// (0x0005a1c3) bg_passive_tab_pane_g3_cp2_srt

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp2_srt_ParamLimits

0xebbc,	// (0x000626f7) bg_active_tab_pane_cp2_srt

0xa2bd,	// (0x0005ddf8) tabs_3_active_pane_srt_g1

0xa2c5,	// (0x0005de00) tabs_3_active_pane_srt_t1_ParamLimits

0xa2c5,	// (0x0005de00) tabs_3_active_pane_srt_t1

0x667f,	// (0x0005a1ba) bg_active_tab_pane_g1_cp2_srt

0x3676,	// (0x000571b1) bg_active_tab_pane_g2_cp2_srt

0x6688,	// (0x0005a1c3) bg_active_tab_pane_g3_cp2_srt

0x6c49,	// (0x0005a784) tabs_4_active_pane_srt_ParamLimits

0x6c49,	// (0x0005a784) tabs_4_active_pane_srt

0x6c5b,	// (0x0005a796) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6c5b,	// (0x0005a796) tabs_4_passive_pane_cp2_srt

0x7dcd,	// (0x0005b908) aid_size_cell_toolbar

0x5c62,	// (0x0005979d) main_idle_act_pane_ParamLimits

0x8000,	// (0x0005bb3b) popup_large_graphic_colour_window_ParamLimits

0x83a7,	// (0x0005bee2) popup_toolbar_window_ParamLimits

0x83a7,	// (0x0005bee2) popup_toolbar_window

0xa0cd,	// (0x0005dc08) list_single_graphic_2heading_pane_ParamLimits

0xa0cd,	// (0x0005dc08) list_single_graphic_2heading_pane

0xf4d5,	// (0x00063010) aid_size_cell_apps_grid_lsc_pane

0xf4e7,	// (0x00063022) aid_size_cell_apps_grid_prt_pane

0x7e37,	// (0x0005b972) bg_wml_button_pane_cp1_ParamLimits

0x7e37,	// (0x0005b972) bg_wml_button_pane_cp1

0x8c00,	// (0x0005c73b) form_midp_field_text_pane_t1_ParamLimits

0x89ec,	// (0x0005c527) input_focus_pane_cp050_ParamLimits

0x8c2b,	// (0x0005c766) list_midp_form_text_pane_ParamLimits

0x8bdd,	// (0x0005c718) input_focus_pane_cp051_ParamLimits

0x8bf1,	// (0x0005c72c) list_midp_choice_pane_ParamLimits

0x8aa5,	// (0x0005c5e0) list_single_2graphic_pane_cp3_ParamLimits

0x8aa5,	// (0x0005c5e0) list_single_2graphic_pane_cp3

0x8abe,	// (0x0005c5f9) list_single_midp_graphic_pane_ParamLimits

0x8abe,	// (0x0005c5f9) list_single_midp_graphic_pane

0x4d54,	// (0x0005888f) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d54,	// (0x0005888f) list_single_graphic_2heading_pane_g1

0x4d60,	// (0x0005889b) list_single_graphic_2heading_pane_g4_ParamLimits

0x4d60,	// (0x0005889b) list_single_graphic_2heading_pane_g4

0x4d6c,	// (0x000588a7) list_single_graphic_2heading_pane_g5_ParamLimits

0x4d6c,	// (0x000588a7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000632f6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000632f6) list_single_graphic_2heading_pane_g

0x4d78,	// (0x000588b3) list_single_graphic_2heading_pane_t1_ParamLimits

0x4d78,	// (0x000588b3) list_single_graphic_2heading_pane_t1

0x4d8c,	// (0x000588c7) list_single_graphic_2heading_pane_t2_ParamLimits

0x4d8c,	// (0x000588c7) list_single_graphic_2heading_pane_t2

0x4da8,	// (0x000588e3) list_single_graphic_2heading_pane_t3_ParamLimits

0x4da8,	// (0x000588e3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000632fd) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000632fd) list_single_graphic_2heading_pane_t

0x88b6,	// (0x0005c3f1) bg_popup_sub_pane_cp2

0x88e0,	// (0x0005c41b) grid_toobar_pane

0x6801,	// (0x0005a33c) cell_toolbar_pane_ParamLimits

0x6801,	// (0x0005a33c) cell_toolbar_pane

0x891c,	// (0x0005c457) cell_toolbar_pane_g1_ParamLimits

0x891c,	// (0x0005c457) cell_toolbar_pane_g1

0x8930,	// (0x0005c46b) cell_toolbar_pane_g2_ParamLimits

0x8930,	// (0x0005c46b) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0006330b) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0006330b) cell_toolbar_pane_g

0x8952,	// (0x0005c48d) grid_highlight_pane_cp2_ParamLimits

0x8952,	// (0x0005c48d) grid_highlight_pane_cp2

0x896c,	// (0x0005c4a7) toolbar_button_pane

0x8978,	// (0x0005c4b3) toolbar_button_pane_g1

0x8980,	// (0x0005c4bb) toolbar_button_pane_g2

0x8988,	// (0x0005c4c3) toolbar_button_pane_g3

0x8990,	// (0x0005c4cb) toolbar_button_pane_g4

0x8998,	// (0x0005c4d3) toolbar_button_pane_g5

0x89a0,	// (0x0005c4db) toolbar_button_pane_g6

0x89a8,	// (0x0005c4e3) toolbar_button_pane_g7

0x89b0,	// (0x0005c4eb) toolbar_button_pane_g8

0x89b8,	// (0x0005c4f3) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00063310) toolbar_button_pane_g

0x6845,	// (0x0005a380) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6845,	// (0x0005a380) list_single_2graphic_pane_g1_cp3

0x6851,	// (0x0005a38c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6851,	// (0x0005a38c) list_single_2graphic_pane_g2_cp3

0x6862,	// (0x0005a39d) list_single_2graphic_pane_g3_cp3

0x686a,	// (0x0005a3a5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x686a,	// (0x0005a3a5) list_single_2graphic_pane_g4_cp3

0x6876,	// (0x0005a3b1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6876,	// (0x0005a3b1) list_single_2graphic_pane_t1_cp3

0x6891,	// (0x0005a3cc) list_single_midp_graphic_pane_g2_ParamLimits

0x6891,	// (0x0005a3cc) list_single_midp_graphic_pane_g2

0x3872,	// (0x000573ad) aid_zoom_text_primary

0x387a,	// (0x000573b5) aid_zoom_text_secondary

0x7d2c,	// (0x0005b867) status_small_pane_g7_ParamLimits

0x7d2c,	// (0x0005b867) status_small_pane_g7

0x7d4f,	// (0x0005b88a) status_small_pane_t1_ParamLimits

0x51ea,	// (0x00058d25) title_pane_g2

0x0003,

0xf554,	// (0x0006308f) title_pane_g

0x543f,	// (0x00058f7a) aid_size_cell_colour_1_pane_ParamLimits

0x543f,	// (0x00058f7a) aid_size_cell_colour_1_pane

0x5453,	// (0x00058f8e) aid_size_cell_colour_2_pane_ParamLimits

0x5453,	// (0x00058f8e) aid_size_cell_colour_2_pane

0x5467,	// (0x00058fa2) aid_size_cell_colour_3_pane_ParamLimits

0x5467,	// (0x00058fa2) aid_size_cell_colour_3_pane

0x547b,	// (0x00058fb6) aid_size_cell_colour_4_pane_ParamLimits

0x547b,	// (0x00058fb6) aid_size_cell_colour_4_pane

0x5cbc,	// (0x000597f7) title_pane_stacon_g1_ParamLimits

0x5cbc,	// (0x000597f7) title_pane_stacon_g1

0x8fee,	// (0x0005cb29) popup_note_wait_window_g3_ParamLimits

0x8fee,	// (0x0005cb29) popup_note_wait_window_g3

0x9065,	// (0x0005cba0) popup_note_wait_window_t5_ParamLimits

0x9065,	// (0x0005cba0) popup_note_wait_window_t5

0xb925,	// (0x0005f460) main_feb_china_hwr_fs_writing_pane

0x7ec7,	// (0x0005ba02) popup_feb_china_hwr_fs_window_ParamLimits

0x7ec7,	// (0x0005ba02) popup_feb_china_hwr_fs_window

0x68cb,	// (0x0005a406) aid_size_cell_hwr_fs_ParamLimits

0x68cb,	// (0x0005a406) aid_size_cell_hwr_fs

0x89ec,	// (0x0005c527) bg_popup_sub_pane_cp3_ParamLimits

0x89ec,	// (0x0005c527) bg_popup_sub_pane_cp3

0x68e0,	// (0x0005a41b) grid_hwr_fs_pane_ParamLimits

0x68e0,	// (0x0005a41b) grid_hwr_fs_pane

0x68f8,	// (0x0005a433) linegrid_hwr_fs_pane_ParamLimits

0x68f8,	// (0x0005a433) linegrid_hwr_fs_pane

0x6908,	// (0x0005a443) cell_hwr_fs_pane_ParamLimits

0x6908,	// (0x0005a443) cell_hwr_fs_pane

0x89f8,	// (0x0005c533) linegrid_hwr_fs_pane_g1_ParamLimits

0x89f8,	// (0x0005c533) linegrid_hwr_fs_pane_g1

0x8a04,	// (0x0005c53f) linegrid_hwr_fs_pane_g2_ParamLimits

0x8a04,	// (0x0005c53f) linegrid_hwr_fs_pane_g2

0x8a16,	// (0x0005c551) linegrid_hwr_fs_pane_g3_ParamLimits

0x8a16,	// (0x0005c551) linegrid_hwr_fs_pane_g3

0x692c,	// (0x0005a467) linegrid_hwr_fs_pane_g4_ParamLimits

0x692c,	// (0x0005a467) linegrid_hwr_fs_pane_g4

0x694a,	// (0x0005a485) linegrid_hwr_fs_pane_g5_ParamLimits

0x694a,	// (0x0005a485) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x0006333b) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006333b) linegrid_hwr_fs_pane_g

0x8a22,	// (0x0005c55d) cell_hwr_fs_pane_g1_ParamLimits

0x8a22,	// (0x0005c55d) cell_hwr_fs_pane_g1

0x87ed,	// (0x0005c328) cell_hwr_fs_pane_g2_ParamLimits

0x87ed,	// (0x0005c328) cell_hwr_fs_pane_g2

0x8a38,	// (0x0005c573) cell_hwr_fs_pane_g3_ParamLimits

0x8a38,	// (0x0005c573) cell_hwr_fs_pane_g3

0x8a45,	// (0x0005c580) cell_hwr_fs_pane_g4_ParamLimits

0x8a45,	// (0x0005c580) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00063346) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00063346) cell_hwr_fs_pane_g

0x6960,	// (0x0005a49b) cell_hwr_fs_pane_t1

0xb925,	// (0x0005f460) grid_highlight_pane_cp6

0xb925,	// (0x0005f460) main_idle_act2_pane

0xf2e4,	// (0x00062e1f) aid_inside_area_popup_secondary

0x969e,	// (0x0005d1d9) aid_inside_area_window_primary_ParamLimits

0x969e,	// (0x0005d1d9) aid_inside_area_window_primary

0xa424,	// (0x0005df5f) ai2_news_ticker_pane

0xa42c,	// (0x0005df67) aid_size_cell_ai1_link_ParamLimits

0xa42c,	// (0x0005df67) aid_size_cell_ai1_link

0xa446,	// (0x0005df81) popup_ai2_data_window_ParamLimits

0xa446,	// (0x0005df81) popup_ai2_data_window

0xa464,	// (0x0005df9f) popup_ai2_link_window_ParamLimits

0xa464,	// (0x0005df9f) popup_ai2_link_window

0x89ec,	// (0x0005c527) bg_popup_sub_pane_cp4_ParamLimits

0x89ec,	// (0x0005c527) bg_popup_sub_pane_cp4

0xa47a,	// (0x0005dfb5) grid_ai2_link_pane_ParamLimits

0xa47a,	// (0x0005dfb5) grid_ai2_link_pane

0xa491,	// (0x0005dfcc) popup_ai2_link_window_g1_ParamLimits

0xa491,	// (0x0005dfcc) popup_ai2_link_window_g1

0xa49d,	// (0x0005dfd8) popup_ai2_link_window_g2_ParamLimits

0xa49d,	// (0x0005dfd8) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00063519) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00063519) popup_ai2_link_window_g

0xa4ae,	// (0x0005dfe9) ai2_mp_button_pane

0xa4b6,	// (0x0005dff1) ai2_mp_volume_pane

0x8bdd,	// (0x0005c718) bg_popup_sub_pane_cp5_ParamLimits

0x8bdd,	// (0x0005c718) bg_popup_sub_pane_cp5

0xa4be,	// (0x0005dff9) heading_ai2_gene_pane_ParamLimits

0xa4be,	// (0x0005dff9) heading_ai2_gene_pane

0xa4ca,	// (0x0005e005) list_ai2_gene_pane_ParamLimits

0xa4ca,	// (0x0005e005) list_ai2_gene_pane

0xa512,	// (0x0005e04d) cell_ai2_link_pane_ParamLimits

0xa512,	// (0x0005e04d) cell_ai2_link_pane

0xa528,	// (0x0005e063) cell_ai2_link_pane_g1

0xb925,	// (0x0005f460) grid_highlight_pane_cp7

0x6d01,	// (0x0005a83c) ai2_mp_volume_pane_g1

0xa5fb,	// (0x0005e136) ai2_mp_volume_pane_g2

0xa570,	// (0x0005e0ab) list_ai2_gene_pane_t1

0xa603,	// (0x0005e13e) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x00063532) ai2_mp_volume_pane_g

0x6d09,	// (0x0005a844) volume_small_pane_cp3

0xa60b,	// (0x0005e146) aid_size_cell_ai2_button

0xa613,	// (0x0005e14e) grid_ai2_button_pane

0xa61c,	// (0x0005e157) cell_ai2_button_pane_ParamLimits

0xa61c,	// (0x0005e157) cell_ai2_button_pane

0xb91b,	// (0x0005f456) cell_ai2_button_pane_g1

0xb925,	// (0x0005f460) grid_highlight_pane_cp8

0xa5bb,	// (0x0005e0f6) ai2_gene_pane_t1_ParamLimits

0xa5bb,	// (0x0005e0f6) ai2_gene_pane_t1

0x7dc3,	// (0x0005b8fe) aid_height_parent_landscape

0x9ee4,	// (0x0005da1f) aid_height_set_list

0x9ef5,	// (0x0005da30) aid_size_parent

0xa245,	// (0x0005dd80) aid_size_cell_graphic_pane_ParamLimits

0xa4da,	// (0x0005e015) popup_ai2_data_window_g1_ParamLimits

0xa4da,	// (0x0005e015) popup_ai2_data_window_g1

0xa4e6,	// (0x0005e021) ai2_news_ticker_pane_g1

0xa4ee,	// (0x0005e029) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x0006351e) ai2_news_ticker_pane_g

0xa4f6,	// (0x0005e031) ai2_news_ticker_pane_t1

0xa504,	// (0x0005e03f) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x00063523) ai2_news_ticker_pane_t

0xa531,	// (0x0005e06c) heading_ai2_gene_pane_g1

0xa539,	// (0x0005e074) heading_ai2_gene_pane_t1_ParamLimits

0xa539,	// (0x0005e074) heading_ai2_gene_pane_t1

0xa54e,	// (0x0005e089) list_highlight_pane_cp6

0xa556,	// (0x0005e091) ai2_gene_pane_ParamLimits

0xa556,	// (0x0005e091) ai2_gene_pane

0xa57e,	// (0x0005e0b9) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x00063528) list_ai2_gene_pane_t

0xa58c,	// (0x0005e0c7) list_highlight_pane_cp8_ParamLimits

0xa58c,	// (0x0005e0c7) list_highlight_pane_cp8

0xa59d,	// (0x0005e0d8) ai2_gene_pane_g1_ParamLimits

0xa59d,	// (0x0005e0d8) ai2_gene_pane_g1

0xa5af,	// (0x0005e0ea) ai2_gene_pane_g2_ParamLimits

0xa5af,	// (0x0005e0ea) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x0006352d) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x0006352d) ai2_gene_pane_g

0xf167,	// (0x00062ca2) scroll_pane_cp12

0x67c0,	// (0x0005a2fb) control_pane_t3_ParamLimits

0x67c0,	// (0x0005a2fb) control_pane_t3

0x7d40,	// (0x0005b87b) status_small_pane_g8_ParamLimits

0x7d40,	// (0x0005b87b) status_small_pane_g8

0x7fc5,	// (0x0005bb00) popup_find_window_ParamLimits

0x81f0,	// (0x0005bd2b) popup_note_image_window_ParamLimits

0x38f6,	// (0x00057431) list_double2_graphic_pane_vc_g1_ParamLimits

0x38f6,	// (0x00057431) list_double2_graphic_pane_vc_g1

0x639d,	// (0x00059ed8) list_double2_graphic_pane_vc_g2_ParamLimits

0x639d,	// (0x00059ed8) list_double2_graphic_pane_vc_g2

0x6831,	// (0x0005a36c) list_double2_graphic_pane_vc_g3_ParamLimits

0x6831,	// (0x0005a36c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00063304) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00063304) list_double2_graphic_pane_vc_g

0x3902,	// (0x0005743d) list_double2_graphic_pane_vc_t1_ParamLimits

0x3902,	// (0x0005743d) list_double2_graphic_pane_vc_t1

0x639d,	// (0x00059ed8) list_single_heading_pane_vc_g1_ParamLimits

0x639d,	// (0x00059ed8) list_single_heading_pane_vc_g1

0x6831,	// (0x0005a36c) list_single_heading_pane_vc_g2_ParamLimits

0x6831,	// (0x0005a36c) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063325) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063325) list_single_heading_pane_vc_g

0x3918,	// (0x00057453) list_single_heading_pane_vc_t1_ParamLimits

0x3918,	// (0x00057453) list_single_heading_pane_vc_t1

0x3930,	// (0x0005746b) list_single_heading_pane_vc_t2_ParamLimits

0x3930,	// (0x0005746b) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x0006332a) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x0006332a) list_single_heading_pane_vc_t

0x68b3,	// (0x0005a3ee) list_setting_number_pane_vc_g1_ParamLimits

0x68b3,	// (0x0005a3ee) list_setting_number_pane_vc_g1

0x68bf,	// (0x0005a3fa) list_setting_number_pane_vc_g2_ParamLimits

0x68bf,	// (0x0005a3fa) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x0006332f) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x0006332f) list_setting_number_pane_vc_g

0x3942,	// (0x0005747d) list_setting_number_pane_vc_t1_ParamLimits

0x3942,	// (0x0005747d) list_setting_number_pane_vc_t1

0x3956,	// (0x00057491) list_setting_number_pane_vc_t2_ParamLimits

0x3956,	// (0x00057491) list_setting_number_pane_vc_t2

0x3972,	// (0x000574ad) list_setting_number_pane_vc_t3_ParamLimits

0x3972,	// (0x000574ad) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x00063334) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x00063334) list_setting_number_pane_vc_t

0x39a0,	// (0x000574db) set_value_pane_vc_ParamLimits

0x39a0,	// (0x000574db) set_value_pane_vc

0xa0cd,	// (0x0005dc08) list_double2_graphic_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double2_graphic_pane_vc

0xa0cd,	// (0x0005dc08) list_double2_large_graphic_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double2_large_graphic_pane_vc

0xa0cd,	// (0x0005dc08) list_double2_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double2_pane_vc

0xa0cd,	// (0x0005dc08) list_double_graphic_heading_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_graphic_heading_pane_vc

0xa0cd,	// (0x0005dc08) list_double_graphic_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_graphic_pane_vc

0xa0cd,	// (0x0005dc08) list_double_heading_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_heading_pane_vc

0xa0cd,	// (0x0005dc08) list_double_large_graphic_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_large_graphic_pane_vc

0xa0cd,	// (0x0005dc08) list_double_number_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_number_pane_vc

0xa0cd,	// (0x0005dc08) list_double_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_pane_vc

0xa0cd,	// (0x0005dc08) list_double_time_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_double_time_pane_vc

0xa0cd,	// (0x0005dc08) list_setting_number_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_setting_number_pane_vc

0xa0cd,	// (0x0005dc08) list_setting_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_setting_pane_vc

0xa0cd,	// (0x0005dc08) list_single_graphic_heading_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_single_graphic_heading_pane_vc

0xa0cd,	// (0x0005dc08) list_single_heading_pane_vc_ParamLimits

0xa0cd,	// (0x0005dc08) list_single_heading_pane_vc

0xa0e1,	// (0x0005dc1c) list_single_number_heading_pane_vc_ParamLimits

0xa0e1,	// (0x0005dc1c) list_single_number_heading_pane_vc

0x38f6,	// (0x00057431) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x38f6,	// (0x00057431) list_double_graphic_heading_pane_vc_g1

0x9988,	// (0x0005d4c3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9988,	// (0x0005d4c3) list_double_graphic_heading_pane_vc_g2

0x9994,	// (0x0005d4cf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9994,	// (0x0005d4cf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x00063539) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x00063539) list_double_graphic_heading_pane_vc_g

0x39c1,	// (0x000574fc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x39c1,	// (0x000574fc) list_double_graphic_heading_pane_vc_t1

0x39d7,	// (0x00057512) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x39d7,	// (0x00057512) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x00063540) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x00063540) list_double_graphic_heading_pane_vc_t

0x68b3,	// (0x0005a3ee) list_setting_pane_vc_g1_ParamLimits

0x68b3,	// (0x0005a3ee) list_setting_pane_vc_g1

0x68bf,	// (0x0005a3fa) list_setting_pane_vc_g2_ParamLimits

0x68bf,	// (0x0005a3fa) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x0006332f) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x0006332f) list_setting_pane_vc_g

0x39f5,	// (0x00057530) list_setting_pane_vc_t1_ParamLimits

0x39f5,	// (0x00057530) list_setting_pane_vc_t1

0x3cdd,	// (0x00057818) list_setting_pane_vc_t2_ParamLimits

0x3cdd,	// (0x00057818) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0006356e) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0006356e) list_setting_pane_vc_t

0x39a0,	// (0x000574db) set_value_pane_cp_vc_ParamLimits

0x39a0,	// (0x000574db) set_value_pane_cp_vc

0x639d,	// (0x00059ed8) list_single_number_heading_pane_vc_g1_ParamLimits

0x639d,	// (0x00059ed8) list_single_number_heading_pane_vc_g1

0x6831,	// (0x0005a36c) list_single_number_heading_pane_vc_g2_ParamLimits

0x6831,	// (0x0005a36c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063325) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063325) list_single_number_heading_pane_vc_g

0x3918,	// (0x00057453) list_single_number_heading_pane_vc_t1_ParamLimits

0x3918,	// (0x00057453) list_single_number_heading_pane_vc_t1

0x3cf9,	// (0x00057834) list_single_number_heading_pane_vc_t2_ParamLimits

0x3cf9,	// (0x00057834) list_single_number_heading_pane_vc_t2

0x3cb5,	// (0x000577f0) list_single_number_heading_pane_vc_t3_ParamLimits

0x3cb5,	// (0x000577f0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00063573) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00063573) list_single_number_heading_pane_vc_t

0x38f6,	// (0x00057431) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x38f6,	// (0x00057431) list_single_graphic_heading_pane_vc_g1

0x639d,	// (0x00059ed8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x639d,	// (0x00059ed8) list_single_graphic_heading_pane_vc_g4

0x6831,	// (0x0005a36c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6831,	// (0x0005a36c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00063304) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00063304) list_single_graphic_heading_pane_vc_g

0x3918,	// (0x00057453) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3918,	// (0x00057453) list_single_graphic_heading_pane_vc_t1

0x3d0b,	// (0x00057846) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3d0b,	// (0x00057846) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0006357a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0006357a) list_single_graphic_heading_pane_vc_t

0x639d,	// (0x00059ed8) list_double2_pane_vc_g1_ParamLimits

0x639d,	// (0x00059ed8) list_double2_pane_vc_g1

0x6831,	// (0x0005a36c) list_double2_pane_vc_g2_ParamLimits

0x6831,	// (0x0005a36c) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063325) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063325) list_double2_pane_vc_g

0x3cc7,	// (0x00057802) list_double2_pane_vc_t1_ParamLimits

0x3cc7,	// (0x00057802) list_double2_pane_vc_t1

0x99a0,	// (0x0005d4db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x99a0,	// (0x0005d4db) list_double2_large_graphic_pane_vc_g1

0x639d,	// (0x00059ed8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x639d,	// (0x00059ed8) list_double2_large_graphic_pane_vc_g2

0x6831,	// (0x0005a36c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6831,	// (0x0005a36c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0006357f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0006357f) list_double2_large_graphic_pane_vc_g

0x3c9f,	// (0x000577da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3c9f,	// (0x000577da) list_double2_large_graphic_pane_vc_t1

0x99ac,	// (0x0005d4e7) list_double_time_pane_vc_g1_ParamLimits

0x99ac,	// (0x0005d4e7) list_double_time_pane_vc_g1

0x99b8,	// (0x0005d4f3) list_double_time_pane_vc_g2_ParamLimits

0x99b8,	// (0x0005d4f3) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x00063586) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x00063586) list_double_time_pane_vc_g

0x3d1d,	// (0x00057858) list_double_time_pane_vc_t1_ParamLimits

0x3d1d,	// (0x00057858) list_double_time_pane_vc_t1

0x3d47,	// (0x00057882) list_double_time_pane_vc_t2_ParamLimits

0x3d47,	// (0x00057882) list_double_time_pane_vc_t2

0x3d90,	// (0x000578cb) list_double_time_pane_vc_t3_ParamLimits

0x3d90,	// (0x000578cb) list_double_time_pane_vc_t3

0x3da2,	// (0x000578dd) list_double_time_pane_vc_t4_ParamLimits

0x3da2,	// (0x000578dd) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x0006358b) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x0006358b) list_double_time_pane_vc_t

0x639d,	// (0x00059ed8) list_double_pane_vc_g1_ParamLimits

0x639d,	// (0x00059ed8) list_double_pane_vc_g1

0x6831,	// (0x0005a36c) list_double_pane_vc_g2_ParamLimits

0x6831,	// (0x0005a36c) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063325) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063325) list_double_pane_vc_g

0x3dc7,	// (0x00057902) list_double_pane_vc_t1_ParamLimits

0x3dc7,	// (0x00057902) list_double_pane_vc_t1

0x3ddb,	// (0x00057916) list_double_pane_vc_t2_ParamLimits

0x3ddb,	// (0x00057916) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x00063594) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x00063594) list_double_pane_vc_t

0x639d,	// (0x00059ed8) list_double_number_pane_vc_g1_ParamLimits

0x639d,	// (0x00059ed8) list_double_number_pane_vc_g1

0x6831,	// (0x0005a36c) list_double_number_pane_vc_g2_ParamLimits

0x6831,	// (0x0005a36c) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00063325) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00063325) list_double_number_pane_vc_g

0x3df1,	// (0x0005792c) list_double_number_pane_vc_t1_ParamLimits

0x3df1,	// (0x0005792c) list_double_number_pane_vc_t1

0x3e05,	// (0x00057940) list_double_number_pane_vc_t2_ParamLimits

0x3e05,	// (0x00057940) list_double_number_pane_vc_t2

0x3e19,	// (0x00057954) list_double_number_pane_vc_t3_ParamLimits

0x3e19,	// (0x00057954) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x00063599) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x00063599) list_double_number_pane_vc_t

0x99c4,	// (0x0005d4ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0x99c4,	// (0x0005d4ff) list_double_large_graphic_pane_vc_g1

0x99d5,	// (0x0005d510) list_double_large_graphic_pane_vc_g2_ParamLimits

0x99d5,	// (0x0005d510) list_double_large_graphic_pane_vc_g2

0x6831,	// (0x0005a36c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6831,	// (0x0005a36c) list_double_large_graphic_pane_vc_g3

0x3e2f,	// (0x0005796a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e2f,	// (0x0005796a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x000635a0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x000635a0) list_double_large_graphic_pane_vc_g

0x3e3b,	// (0x00057976) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e3b,	// (0x00057976) list_double_large_graphic_pane_vc_t1

0x3e54,	// (0x0005798f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e54,	// (0x0005798f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x000635a9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x000635a9) list_double_large_graphic_pane_vc_t

0x9988,	// (0x0005d4c3) list_double_heading_pane_vc_g1_ParamLimits

0x9988,	// (0x0005d4c3) list_double_heading_pane_vc_g1

0x9994,	// (0x0005d4cf) list_double_heading_pane_vc_g2_ParamLimits

0x9994,	// (0x0005d4cf) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x000635ae) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x000635ae) list_double_heading_pane_vc_g

0x3e6b,	// (0x000579a6) list_double_heading_pane_vc_t1_ParamLimits

0x3e6b,	// (0x000579a6) list_double_heading_pane_vc_t1

0x3918,	// (0x00057453) list_double_heading_pane_vc_t2_ParamLimits

0x3918,	// (0x00057453) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x000635b3) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x000635b3) list_double_heading_pane_vc_t

0x38f6,	// (0x00057431) list_double_graphic_pane_vc_g1_ParamLimits

0x38f6,	// (0x00057431) list_double_graphic_pane_vc_g1

0x99e4,	// (0x0005d51f) list_double_graphic_pane_vc_g2_ParamLimits

0x99e4,	// (0x0005d51f) list_double_graphic_pane_vc_g2

0x99f3,	// (0x0005d52e) list_double_graphic_pane_vc_g3_ParamLimits

0x99f3,	// (0x0005d52e) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x000635b8) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x000635b8) list_double_graphic_pane_vc_g

0x3e7d,	// (0x000579b8) list_double_graphic_pane_vc_t1_ParamLimits

0x3e7d,	// (0x000579b8) list_double_graphic_pane_vc_t1

0x3e91,	// (0x000579cc) list_double_graphic_pane_vc_t2_ParamLimits

0x3e91,	// (0x000579cc) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x000635bf) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x000635bf) list_double_graphic_pane_vc_t

0x4df4,	// (0x0005892f) aid_size_cell_fastswap

0x4dfc,	// (0x00058937) aid_size_cell_touch_ParamLimits

0x4dfc,	// (0x00058937) aid_size_cell_touch

0x5067,	// (0x00058ba2) popup_fast_swap_wide_window_ParamLimits

0x5067,	// (0x00058ba2) popup_fast_swap_wide_window

0x517d,	// (0x00058cb8) touch_pane_ParamLimits

0x517d,	// (0x00058cb8) touch_pane

0xf1bd,	// (0x00062cf8) button_value_adjust_pane_cp2

0x3415,	// (0x00056f50) button_value_adjust_pane_cp4

0x341d,	// (0x00056f58) form_field_data_pane_cp2

0x5abe,	// (0x000595f9) form_field_data_wide_pane_cp2

0xf523,	// (0x0006305e) bg_scroll_pane_ParamLimits

0x5ea6,	// (0x000599e1) scroll_handle_pane_ParamLimits

0x5eba,	// (0x000599f5) scroll_sc2_down_pane_ParamLimits

0x5eba,	// (0x000599f5) scroll_sc2_down_pane

0x11f1,	// (0x00054d2c) scroll_sc2_up_pane_ParamLimits

0x11f1,	// (0x00054d2c) scroll_sc2_up_pane

0xad3b,	// (0x0005e876) grid_wheel_folder_pane_g1_ParamLimits

0xad3b,	// (0x0005e876) grid_wheel_folder_pane_g1

0x624c,	// (0x00059d87) clock_nsta_pane_cp2_ParamLimits

0x624c,	// (0x00059d87) clock_nsta_pane_cp2

0x5c62,	// (0x0005979d) listscroll_midp_pane_ParamLimits

0x6434,	// (0x00059f6f) midp_canvas_pane

0x7dbb,	// (0x0005b8f6) nsta_clock_indic_pane

0x7e09,	// (0x0005b944) listscroll_form_pane_vc

0x7e25,	// (0x0005b960) listscroll_set_pane_vc_ParamLimits

0x7e25,	// (0x0005b960) listscroll_set_pane_vc

0x8541,	// (0x0005c07c) clock_nsta_pane

0x85be,	// (0x0005c0f9) indicator_nsta_pane

0x88b6,	// (0x0005c3f1) bg_popup_sub_pane_cp2_ParamLimits

0x88ca,	// (0x0005c405) find_pane_cp2_ParamLimits

0x88ca,	// (0x0005c405) find_pane_cp2

0x88e0,	// (0x0005c41b) grid_toobar_pane_ParamLimits

0x89c0,	// (0x0005c4fb) list_form_gen_pane_vc_ParamLimits

0x89c0,	// (0x0005c4fb) list_form_gen_pane_vc

0x89d6,	// (0x0005c511) scroll_pane_cp8_vc_ParamLimits

0x89d6,	// (0x0005c511) scroll_pane_cp8_vc

0x8a52,	// (0x0005c58d) data_form_wide_pane_vc_ParamLimits

0x8a52,	// (0x0005c58d) data_form_wide_pane_vc

0x8a5e,	// (0x0005c599) form_field_data_wide_pane_vc_g1

0x8a66,	// (0x0005c5a1) form_field_data_wide_pane_vc_t1_ParamLimits

0x8a66,	// (0x0005c5a1) form_field_data_wide_pane_vc_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_cp6_vc_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_cp6_vc

0x8d68,	// (0x0005c8a3) list_midp_pane_ParamLimits

0x8d74,	// (0x0005c8af) scroll_pane_cp16_ParamLimits

0x8d74,	// (0x0005c8af) scroll_pane_cp16

0x8dc2,	// (0x0005c8fd) button_value_adjust_pane_ParamLimits

0x8dc2,	// (0x0005c8fd) button_value_adjust_pane

0x9f07,	// (0x0005da42) button_value_adjust_pane_cp6_ParamLimits

0x9f07,	// (0x0005da42) button_value_adjust_pane_cp6

0xa055,	// (0x0005db90) settings_code_pane_cp_ParamLimits

0xa055,	// (0x0005db90) settings_code_pane_cp

0xb91b,	// (0x0005f456) cell_touch_pane_g1

0xb91b,	// (0x0005f456) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00063249) cell_touch_pane_g

0xa62e,	// (0x0005e169) cell_touch_pane_cp_ParamLimits

0xa62e,	// (0x0005e169) cell_touch_pane_cp

0xa63e,	// (0x0005e179) cell_touch_pane_ParamLimits

0xa63e,	// (0x0005e179) cell_touch_pane

0xb91b,	// (0x0005f456) scroll_sc2_down_pane_g1

0xb91b,	// (0x0005f456) scroll_sc2_up_pane_g1

0xb925,	// (0x0005f460) bg_set_opt_pane_cp4_vc

0xa64f,	// (0x0005e18a) list_set_graphic_pane_vc_g1_ParamLimits

0xa64f,	// (0x0005e18a) list_set_graphic_pane_vc_g1

0x1a49,	// (0x00055584) list_set_graphic_pane_vc_g2_ParamLimits

0x1a49,	// (0x00055584) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x00063545) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x00063545) list_set_graphic_pane_vc_g

0xa65b,	// (0x0005e196) text_primary_small_cp13_vc_ParamLimits

0xa65b,	// (0x0005e196) text_primary_small_cp13_vc

0xa673,	// (0x0005e1ae) list_set_graphic_pane_vc_ParamLimits

0xa673,	// (0x0005e1ae) list_set_graphic_pane_vc

0xb925,	// (0x0005f460) input_focus_pane_cp2_vc

0xb91b,	// (0x0005f456) setting_code_pane_vc_g1

0xebd3,	// (0x0006270e) setting_code_pane_vc_t1

0xa688,	// (0x0005e1c3) set_text_pane_vc_t1_ParamLimits

0xa688,	// (0x0005e1c3) set_text_pane_vc_t1

0xb925,	// (0x0005f460) input_focus_pane_cp1_vc

0xa6a6,	// (0x0005e1e1) list_set_text_pane_vc

0xb91b,	// (0x0005f456) setting_text_pane_vc_g1

0xb925,	// (0x0005f460) bg_set_opt_pane_cp2_vc

0xebca,	// (0x00062705) setting_slider_graphic_pane_vc_g1

0xa6b0,	// (0x0005e1eb) setting_slider_graphic_pane_vc_t1

0xa6c2,	// (0x0005e1fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x0006354a) setting_slider_graphic_pane_vc_t

0xa6d4,	// (0x0005e20f) slider_set_pane_cp_vc

0xa6de,	// (0x0005e219) slider_set_pane_vc_g1

0xa6e7,	// (0x0005e222) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x0006354f) slider_set_pane_vc_g

0xf22c,	// (0x00062d67) set_opt_bg_pane_g1_copy1

0xf234,	// (0x00062d6f) set_opt_bg_pane_g2_copy1

0xa713,	// (0x0005e24e) set_opt_bg_pane_g3_copy1

0xf244,	// (0x00062d7f) set_opt_bg_pane_g4_copy1

0xf24c,	// (0x00062d87) set_opt_bg_pane_g5_copy1

0xf254,	// (0x00062d8f) set_opt_bg_pane_g6_copy1

0xa71d,	// (0x0005e258) set_opt_bg_pane_g7_copy1

0xa727,	// (0x0005e262) set_opt_bg_pane_g8_copy1

0xa731,	// (0x0005e26c) set_opt_bg_pane_g9_copy1

0xb925,	// (0x0005f460) bg_set_opt_pane_cp_vc

0xa73b,	// (0x0005e276) setting_slider_pane_vc_t1

0xa74a,	// (0x0005e285) setting_slider_pane_vc_t2

0xa75c,	// (0x0005e297) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x0006355e) setting_slider_pane_vc_t

0xa76e,	// (0x0005e2a9) slider_set_pane_vc

0x698d,	// (0x0005a4c8) volume_set_pane_vc_g1

0x6996,	// (0x0005a4d1) volume_set_pane_vc_g2

0x699f,	// (0x0005a4da) volume_set_pane_vc_g3

0x69a8,	// (0x0005a4e3) volume_set_pane_vc_g4

0x69b1,	// (0x0005a4ec) volume_set_pane_vc_g5

0x69ba,	// (0x0005a4f5) volume_set_pane_vc_g6

0x69c3,	// (0x0005a4fe) volume_set_pane_vc_g7

0x69cc,	// (0x0005a507) volume_set_pane_vc_g8

0x69d5,	// (0x0005a510) volume_set_pane_vc_g9

0x69de,	// (0x0005a519) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x000633fc) volume_set_pane_vc_g

0xa778,	// (0x0005e2b3) volume_set_pane_vc

0xa782,	// (0x0005e2bd) button_value_adjust_pane_cp1_vc

0xa78c,	// (0x0005e2c7) list_highlight_pane_cp2_vc

0xa795,	// (0x0005e2d0) list_set_pane_vc_ParamLimits

0xa795,	// (0x0005e2d0) list_set_pane_vc

0xa805,	// (0x0005e340) main_pane_set_vc_t1_ParamLimits

0xa805,	// (0x0005e340) main_pane_set_vc_t1

0xa81a,	// (0x0005e355) main_pane_set_vc_t2_ParamLimits

0xa81a,	// (0x0005e355) main_pane_set_vc_t2

0xa82c,	// (0x0005e367) main_pane_set_vc_t3_ParamLimits

0xa82c,	// (0x0005e367) main_pane_set_vc_t3

0xa840,	// (0x0005e37b) main_pane_set_vc_t4_ParamLimits

0xa840,	// (0x0005e37b) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00063565) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00063565) main_pane_set_vc_t

0xa854,	// (0x0005e38f) setting_code_pane_vc_ParamLimits

0xa854,	// (0x0005e38f) setting_code_pane_vc

0xa865,	// (0x0005e3a0) setting_slider_graphic_pane_vc

0xa865,	// (0x0005e3a0) setting_slider_pane_vc

0xa865,	// (0x0005e3a0) setting_text_pane_vc

0xa865,	// (0x0005e3a0) setting_volume_pane_vc

0xa86f,	// (0x0005e3aa) scroll_pane_cp121_vc

0xf1ab,	// (0x00062ce6) set_content_pane_vc

0xa877,	// (0x0005e3b2) button_value_adjust_pane_g1

0xa880,	// (0x0005e3bb) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x000635c4) button_value_adjust_pane_g

0xa889,	// (0x0005e3c4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa889,	// (0x0005e3c4) form_field_slider_wide_pane_vc_t1

0xa89b,	// (0x0005e3d6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa89b,	// (0x0005e3d6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x000635c9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x000635c9) form_field_slider_wide_pane_vc_t

0xb97f,	// (0x0005f4ba) input_focus_pane_cp10_vc_ParamLimits

0xb97f,	// (0x0005f4ba) input_focus_pane_cp10_vc

0xa8c7,	// (0x0005e402) slider_cont_pane_cp1_vc_ParamLimits

0xa8c7,	// (0x0005e402) slider_cont_pane_cp1_vc

0xa8d9,	// (0x0005e414) slider_form_pane_g1_cp2

0xa6e7,	// (0x0005e222) slider_form_pane_g2_cp2

0xa906,	// (0x0005e441) form_field_slider_pane_vc_t3

0xa914,	// (0x0005e44f) form_field_slider_pane_vc_t4

0xa922,	// (0x0005e45d) slider_form_pane_vc_ParamLimits

0xa922,	// (0x0005e45d) slider_form_pane_vc

0xa92f,	// (0x0005e46a) form_field_slider_pane_vc_t1_ParamLimits

0xa92f,	// (0x0005e46a) form_field_slider_pane_vc_t1

0xa89b,	// (0x0005e3d6) form_field_slider_pane_vc_t2_ParamLimits

0xa89b,	// (0x0005e3d6) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x000635db) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x000635db) form_field_slider_pane_vc_t

0xb97f,	// (0x0005f4ba) input_focus_pane_cp9_vc_ParamLimits

0xb97f,	// (0x0005f4ba) input_focus_pane_cp9_vc

0xa945,	// (0x0005e480) slider_cont_pane_vc_ParamLimits

0xa945,	// (0x0005e480) slider_cont_pane_vc

0xa959,	// (0x0005e494) list_form_graphic_pane_cp_vc_ParamLimits

0xa959,	// (0x0005e494) list_form_graphic_pane_cp_vc

0x8a5e,	// (0x0005c599) form_field_popup_wide_pane_vc_g1

0xa96e,	// (0x0005e4a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa96e,	// (0x0005e4a9) form_field_popup_wide_pane_vc_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_cp8_vc_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_cp8_vc

0xa9b3,	// (0x0005e4ee) list_form_wide_pane_vc_ParamLimits

0xa9b3,	// (0x0005e4ee) list_form_wide_pane_vc

0xa9bf,	// (0x0005e4fa) list_form_graphic_pane_vc_g1

0xa9c7,	// (0x0005e502) list_form_graphic_pane_vc_t1_ParamLimits

0xa9c7,	// (0x0005e502) list_form_graphic_pane_vc_t1

0xebbc,	// (0x000626f7) list_highlight_pane_cp5_vc_ParamLimits

0xebbc,	// (0x000626f7) list_highlight_pane_cp5_vc

0xa9e3,	// (0x0005e51e) list_form_graphic_pane_vc_ParamLimits

0xa9e3,	// (0x0005e51e) list_form_graphic_pane_vc

0x8a5e,	// (0x0005c599) form_field_popup_pane_vc_g1

0xa9f9,	// (0x0005e534) form_field_popup_pane_vc_t1_ParamLimits

0xa9f9,	// (0x0005e534) form_field_popup_pane_vc_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_cp7_vc_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_cp7_vc

0xaa10,	// (0x0005e54b) list_form_pane_vc_ParamLimits

0xaa10,	// (0x0005e54b) list_form_pane_vc

0xaa1c,	// (0x0005e557) data_form_pane_vc_t1_ParamLimits

0xaa1c,	// (0x0005e557) data_form_pane_vc_t1

0xf22c,	// (0x00062d67) input_focus_pane_vc_g1

0xf234,	// (0x00062d6f) input_focus_pane_vc_g2

0xf23c,	// (0x00062d77) input_focus_pane_vc_g3

0xf244,	// (0x00062d7f) input_focus_pane_vc_g4

0xf24c,	// (0x00062d87) input_focus_pane_vc_g5

0xf254,	// (0x00062d8f) input_focus_pane_vc_g6

0xf25c,	// (0x00062d97) input_focus_pane_vc_g7

0xf264,	// (0x00062d9f) input_focus_pane_vc_g8

0xf26c,	// (0x00062da7) input_focus_pane_vc_g9

0xb91b,	// (0x0005f456) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000631d2) input_focus_pane_vc_g

0x8a52,	// (0x0005c58d) data_form_pane_vc_ParamLimits

0x8a52,	// (0x0005c58d) data_form_pane_vc

0x8a5e,	// (0x0005c599) form_field_data_pane_vc_g1

0xaa39,	// (0x0005e574) form_field_data_pane_vc_t1_ParamLimits

0xaa39,	// (0x0005e574) form_field_data_pane_vc_t1

0xf1d1,	// (0x00062d0c) input_focus_pane_vc_ParamLimits

0xf1d1,	// (0x00062d0c) input_focus_pane_vc

0xaa53,	// (0x0005e58e) button_value_adjust_pane_cp3_vc

0xaa5b,	// (0x0005e596) button_value_adjust_pane_cp5_vc

0xaa63,	// (0x0005e59e) form_field_data_pane_vc_ParamLimits

0xaa63,	// (0x0005e59e) form_field_data_pane_vc

0xaa7e,	// (0x0005e5b9) form_field_data_pane_vc_cp2

0xaa86,	// (0x0005e5c1) form_field_data_wide_pane_vc_ParamLimits

0xaa86,	// (0x0005e5c1) form_field_data_wide_pane_vc

0xaaa0,	// (0x0005e5db) form_field_data_wide_pane_vc_cp2

0xaaa8,	// (0x0005e5e3) form_field_popup_pane_vc_ParamLimits

0xaaa8,	// (0x0005e5e3) form_field_popup_pane_vc

0xaac3,	// (0x0005e5fe) form_field_popup_wide_pane_vc_ParamLimits

0xaac3,	// (0x0005e5fe) form_field_popup_wide_pane_vc

0xaadd,	// (0x0005e618) form_field_slider_pane_vc_ParamLimits

0xaadd,	// (0x0005e618) form_field_slider_pane_vc

0xaaf0,	// (0x0005e62b) form_field_slider_wide_pane_vc_ParamLimits

0xaaf0,	// (0x0005e62b) form_field_slider_wide_pane_vc

0xab03,	// (0x0005e63e) grid_touch_1_pane_ParamLimits

0xab03,	// (0x0005e63e) grid_touch_1_pane

0xab0f,	// (0x0005e64a) grid_touch_2_pane_ParamLimits

0xab0f,	// (0x0005e64a) grid_touch_2_pane

0x7d86,	// (0x0005b8c1) touch_pane_g1_ParamLimits

0x7d86,	// (0x0005b8c1) touch_pane_g1

0xab29,	// (0x0005e664) cell_app_pane_cp_wide_ParamLimits

0xab29,	// (0x0005e664) cell_app_pane_cp_wide

0xab3a,	// (0x0005e675) grid_popup_fast_wide_pane_ParamLimits

0xab3a,	// (0x0005e675) grid_popup_fast_wide_pane

0xab4e,	// (0x0005e689) scroll_pane_cp19_ParamLimits

0xab4e,	// (0x0005e689) scroll_pane_cp19

0xb925,	// (0x0005f460) bg_popup_window_pane_cp20

0xab62,	// (0x0005e69d) listscroll_popup_fast_wide_pane

0xebbc,	// (0x000626f7) grid_indicator_nsta_pane

0xab6a,	// (0x0005e6a5) clock_nsta_pane_g1

0xab73,	// (0x0005e6ae) clock_nsta_pane_t1

0xab8f,	// (0x0005e6ca) cell_indicator_nsta_pane_ParamLimits

0xab8f,	// (0x0005e6ca) cell_indicator_nsta_pane

0xabc7,	// (0x0005e702) cell_indicator_nsta_pane_g1

0xabd5,	// (0x0005e710) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x000635ec) cell_indicator_nsta_pane_g

0xabeb,	// (0x0005e726) clock_nsta_pane_cp

0xabf3,	// (0x0005e72e) indicator_nsta_pane_cp

0xabfc,	// (0x0005e737) nsta_clock_indic_pane_g1

0xebf8,	// (0x00062733) grid_indicator_pane

0x12e3,	// (0x00054e1e) scroll_pane_cp29

0x6198,	// (0x00059cd3) indicator_nsta_pane_cp2_ParamLimits

0x6198,	// (0x00059cd3) indicator_nsta_pane_cp2

0xebbc,	// (0x000626f7) main_apps_wheel_pane

0x8c45,	// (0x0005c780) form_midp_field_text_pane_ParamLimits

0x8d94,	// (0x0005c8cf) scroll_bar_cp050_ParamLimits

0xac65,	// (0x0005e7a0) cell_indicator_pane_ParamLimits

0xac65,	// (0x0005e7a0) cell_indicator_pane

0xac7d,	// (0x0005e7b8) cell_indicator_pane_g1

0xac87,	// (0x0005e7c2) grid_wheel_folder_pane_ParamLimits

0xac87,	// (0x0005e7c2) grid_wheel_folder_pane

0xac9b,	// (0x0005e7d6) list_wheel_apps_pane_ParamLimits

0xac9b,	// (0x0005e7d6) list_wheel_apps_pane

0xacae,	// (0x0005e7e9) main_apps_wheel_pane_g1_ParamLimits

0xacae,	// (0x0005e7e9) main_apps_wheel_pane_g1

0xacca,	// (0x0005e805) main_apps_wheel_pane_g2_ParamLimits

0xacca,	// (0x0005e805) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x00063608) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x00063608) main_apps_wheel_pane_g

0xace6,	// (0x0005e821) main_apps_wheel_pane_t1_ParamLimits

0xace6,	// (0x0005e821) main_apps_wheel_pane_t1

0xad0f,	// (0x0005e84a) list_wheel_apps_pane_g1

0xad17,	// (0x0005e852) list_wheel_apps_pane_g2

0xad1f,	// (0x0005e85a) list_wheel_apps_pane_g3

0xad27,	// (0x0005e862) list_wheel_apps_pane_g4

0xad31,	// (0x0005e86c) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0006360d) list_wheel_apps_pane_g

0x37c5,	// (0x00057300) navi_icon_text_pane

0x846e,	// (0x0005bfa9) aid_fill_nsta

0xad52,	// (0x0005e88d) navi_icon_text_pane_g1

0xad5e,	// (0x0005e899) navi_icon_text_pane_t1

0x62e1,	// (0x00059e1c) list_set_graphic_pane_t1_ParamLimits

0x62e1,	// (0x00059e1c) list_set_graphic_pane_t1

0x94e5,	// (0x0005d020) popup_midp_note_alarm_window_t6_ParamLimits

0x94e5,	// (0x0005d020) popup_midp_note_alarm_window_t6

0x94f7,	// (0x0005d032) popup_midp_note_alarm_window_t7_ParamLimits

0x94f7,	// (0x0005d032) popup_midp_note_alarm_window_t7

0x9509,	// (0x0005d044) popup_midp_note_alarm_window_t8_ParamLimits

0x9509,	// (0x0005d044) popup_midp_note_alarm_window_t8

0x951b,	// (0x0005d056) popup_midp_note_alarm_window_t9_ParamLimits

0x951b,	// (0x0005d056) popup_midp_note_alarm_window_t9

0x952d,	// (0x0005d068) popup_midp_note_alarm_window_t10_ParamLimits

0x952d,	// (0x0005d068) popup_midp_note_alarm_window_t10

0x953f,	// (0x0005d07a) popup_midp_note_alarm_window_t11_ParamLimits

0x953f,	// (0x0005d07a) popup_midp_note_alarm_window_t11

0x9551,	// (0x0005d08c) scroll_pane_cp17_ParamLimits

0x9551,	// (0x0005d08c) scroll_pane_cp17

0x698d,	// (0x0005a4c8) volume_small_pane_cp_g1

0x6d12,	// (0x0005a84d) volume_small_pane_cp_g2

0x6d1b,	// (0x0005a856) volume_small_pane_cp_g3

0x6d24,	// (0x0005a85f) volume_small_pane_cp_g4

0x6d2d,	// (0x0005a868) volume_small_pane_cp_g5

0x6d36,	// (0x0005a871) volume_small_pane_cp_g6

0x6d3f,	// (0x0005a87a) volume_small_pane_cp_g7

0x6d48,	// (0x0005a883) volume_small_pane_cp_g8

0x6d51,	// (0x0005a88c) volume_small_pane_cp_g9

0x6d5a,	// (0x0005a895) volume_small_pane_cp_g10

0x64fd,	// (0x0005a038) midp_ticker_pane_g1_ParamLimits

0x6509,	// (0x0005a044) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0006329e) midp_ticker_pane_g_ParamLimits

0x6515,	// (0x0005a050) midp_ticker_pane_t1_ParamLimits

0x8484,	// (0x0005bfbf) aid_fill_nsta_2

0x8d80,	// (0x0005c8bb) list_form2_midp_pane

0xa09c,	// (0x0005dbd7) midp_editing_number_pane_ParamLimits

0xa0ab,	// (0x0005dbe6) midp_ticker_pane_ParamLimits

0xad70,	// (0x0005e8ab) form2_midp_field_pane

0xad94,	// (0x0005e8cf) scroll_pane_cp51

0xadb4,	// (0x0005e8ef) form2_midp_button_pane_ParamLimits

0xadb4,	// (0x0005e8ef) form2_midp_button_pane

0xadc6,	// (0x0005e901) form2_midp_content_pane_ParamLimits

0xadc6,	// (0x0005e901) form2_midp_content_pane

0xade0,	// (0x0005e91b) form2_midp_field_choice_group_pane

0xade8,	// (0x0005e923) form2_midp_field_pane_g1

0xadf0,	// (0x0005e92b) form2_midp_field_pane_g2

0xadf8,	// (0x0005e933) form2_midp_field_pane_g3

0xae00,	// (0x0005e93b) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00063632) form2_midp_field_pane_g

0xae08,	// (0x0005e943) form2_midp_gauge_slider_pane

0xae10,	// (0x0005e94b) form2_midp_gauge_wait_pane

0xae18,	// (0x0005e953) form2_midp_image_pane_ParamLimits

0xae18,	// (0x0005e953) form2_midp_image_pane

0xae33,	// (0x0005e96e) form2_midp_label_pane_ParamLimits

0xae33,	// (0x0005e96e) form2_midp_label_pane

0xae52,	// (0x0005e98d) form2_midp_label_pane_cp_ParamLimits

0xae52,	// (0x0005e98d) form2_midp_label_pane_cp

0xae73,	// (0x0005e9ae) form2_midp_string_pane_ParamLimits

0xae73,	// (0x0005e9ae) form2_midp_string_pane

0x3ea7,	// (0x000579e2) form2_midp_text_pane_ParamLimits

0x3ea7,	// (0x000579e2) form2_midp_text_pane

0xae85,	// (0x0005e9c0) form2_midp_time_pane

0xae95,	// (0x0005e9d0) input_focus_pane_cp51_ParamLimits

0xae95,	// (0x0005e9d0) input_focus_pane_cp51

0xaead,	// (0x0005e9e8) form2_midp_label_pane_t1_ParamLimits

0xaead,	// (0x0005e9e8) form2_midp_label_pane_t1

0x3eca,	// (0x00057a05) form2_mdip_text_pane_t1_ParamLimits

0x3eca,	// (0x00057a05) form2_mdip_text_pane_t1

0x3ee9,	// (0x00057a24) form2_midp_time_pane_t1

0xaefb,	// (0x0005ea36) form2_midp_gauge_slider_pane_t1

0xaf0d,	// (0x0005ea48) form2_midp_gauge_slider_pane_t2

0xaf1f,	// (0x0005ea5a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0006363b) form2_midp_gauge_slider_pane_t

0xaf31,	// (0x0005ea6c) form2_midp_slider_pane

0xaf3d,	// (0x0005ea78) form2_midp_gauge_wait_pane_t1

0xaf4b,	// (0x0005ea86) form2_midp_wait_pane_ParamLimits

0xaf4b,	// (0x0005ea86) form2_midp_wait_pane

0x8aa5,	// (0x0005c5e0) list_single_2graphic_pane_cp4_ParamLimits

0x8aa5,	// (0x0005c5e0) list_single_2graphic_pane_cp4

0xaf76,	// (0x0005eab1) list_single_midp_graphic_pane_cp_ParamLimits

0xaf76,	// (0x0005eab1) list_single_midp_graphic_pane_cp

0xb925,	// (0x0005f460) list_highlight_pane_cp20

0xaf9a,	// (0x0005ead5) list_single_2graphic_pane_g1_cp4

0xa531,	// (0x0005e06c) list_single_2graphic_pane_g2_cp4

0xafa2,	// (0x0005eadd) list_single_2graphic_pane_t1_cp4

0xebbc,	// (0x000626f7) list_highlight_pane_cp21

0xafb1,	// (0x0005eaec) list_single_midp_graphic_pane_g4_cp

0xafc0,	// (0x0005eafb) list_single_midp_graphic_pane_t1_cp

0xafd5,	// (0x0005eb10) form2_mdip_string_pane_t1_ParamLimits

0xafd5,	// (0x0005eb10) form2_mdip_string_pane_t1

0xb925,	// (0x0005f460) bg_wml_button_pane_cp2

0xb91b,	// (0x0005f456) form2_midp_image_pane_g1

0x41e9,	// (0x00057d24) list_double_large_graphic_pane_g5_ParamLimits

0x41e9,	// (0x00057d24) list_double_large_graphic_pane_g5

0x5c62,	// (0x0005979d) midp_form_pane_ParamLimits

0xebbc,	// (0x000626f7) main_apps_wheel_pane_ParamLimits

0x8218,	// (0x0005bd53) popup_preview_window_ParamLimits

0x8218,	// (0x0005bd53) popup_preview_window

0x83ff,	// (0x0005bf3a) popup_touch_info_window_ParamLimits

0x83ff,	// (0x0005bf3a) popup_touch_info_window

0x8421,	// (0x0005bf5c) popup_touch_menu_window_ParamLimits

0x8421,	// (0x0005bf5c) popup_touch_menu_window

0xb911,	// (0x0005f44c) bg_popup_sub_pane_cp6

0xb07a,	// (0x0005ebb5) list_touch_menu_pane

0xb082,	// (0x0005ebbd) list_single_touch_menu_pane_ParamLimits

0xb082,	// (0x0005ebbd) list_single_touch_menu_pane

0xb09a,	// (0x0005ebd5) list_single_touch_menu_pane_t1

0xebbc,	// (0x000626f7) bg_popup_sub_pane_cp7_ParamLimits

0xebbc,	// (0x000626f7) bg_popup_sub_pane_cp7

0xb0a8,	// (0x0005ebe3) heading_sub_pane

0xb0b0,	// (0x0005ebeb) list_touch_info_pane_ParamLimits

0xb0b0,	// (0x0005ebeb) list_touch_info_pane

0xb0bf,	// (0x0005ebfa) list_single_touch_info_pane_ParamLimits

0xb0bf,	// (0x0005ebfa) list_single_touch_info_pane

0xb0d1,	// (0x0005ec0c) list_single_touch_info_pane_t1

0xb0df,	// (0x0005ec1a) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00063649) list_single_touch_info_pane_t

0x642c,	// (0x00059f67) bg_popup_heading_pane_cp

0xb0ed,	// (0x0005ec28) heading_sub_pane_t1

0x89ec,	// (0x0005c527) bg_popup_preview_window_pane_cp_ParamLimits

0x89ec,	// (0x0005c527) bg_popup_preview_window_pane_cp

0xb0a8,	// (0x0005ebe3) heading_preview_pane

0xb0b0,	// (0x0005ebeb) list_preview_pane_ParamLimits

0xb0b0,	// (0x0005ebeb) list_preview_pane

0xb0fb,	// (0x0005ec36) popup_preview_window_g1

0xb0bf,	// (0x0005ebfa) list_single_preview_pane_ParamLimits

0xb0bf,	// (0x0005ebfa) list_single_preview_pane

0xb103,	// (0x0005ec3e) list_single_preview_pane_g1

0xb10b,	// (0x0005ec46) list_single_preview_pane_t1

0xb0d1,	// (0x0005ec0c) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0006364e) list_single_preview_pane_t

0xb119,	// (0x0005ec54) bg_popup_heading_pane_cp2_ParamLimits

0xb119,	// (0x0005ec54) bg_popup_heading_pane_cp2

0xb12f,	// (0x0005ec6a) heading_preview_pane_g1

0xb137,	// (0x0005ec72) heading_preview_pane_t1_ParamLimits

0xb137,	// (0x0005ec72) heading_preview_pane_t1

0xec0f,	// (0x0006274a) soft_indicator_pane_t1_ParamLimits

0xf144,	// (0x00062c7f) scroll_pane_ParamLimits

0xf542,	// (0x0006307d) scroll_sc2_left_pane

0xf54b,	// (0x00063086) scroll_sc2_right_pane

0x1207,	// (0x00054d42) scroll_bg_pane_g1_ParamLimits

0x121c,	// (0x00054d57) scroll_bg_pane_g2_ParamLimits

0x1234,	// (0x00054d6f) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00063229) scroll_bg_pane_g_ParamLimits

0x1207,	// (0x00054d42) scroll_handle_pane_g1_ParamLimits

0x1256,	// (0x00054d91) scroll_handle_pane_g2_ParamLimits

0x1234,	// (0x00054d6f) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00063230) scroll_handle_pane_g_ParamLimits

0x7e5f,	// (0x0005b99a) popup_choice_list_window_ParamLimits

0x7e5f,	// (0x0005b99a) popup_choice_list_window

0x88c2,	// (0x0005c3fd) choice_list_pane

0x8944,	// (0x0005c47f) cell_toolbar_pane_t1

0x896c,	// (0x0005c4a7) toolbar_button_pane_ParamLimits

0x9bbb,	// (0x0005d6f6) ai_gene_pane_1_t2_ParamLimits

0x9bbb,	// (0x0005d6f6) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x00063458) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x00063458) ai_gene_pane_1_t

0xb154,	// (0x0005ec8f) scroll_sc2_left_pane_g1

0xb154,	// (0x0005ec8f) scroll_sc2_right_pane_g1

0x7e37,	// (0x0005b972) bg_popup_sub_pane_cp10

0xb15e,	// (0x0005ec99) list_choice_list_pane

0xb177,	// (0x0005ecb2) list_single_choice_list_pane_ParamLimits

0xb177,	// (0x0005ecb2) list_single_choice_list_pane

0xb18f,	// (0x0005ecca) list_single_choice_list_pane_g1

0xf322,	// (0x00062e5d) list_single_choice_list_pane_t1_ParamLimits

0xf322,	// (0x00062e5d) list_single_choice_list_pane_t1

0xb197,	// (0x0005ecd2) choice_list_pane_g1

0xb19f,	// (0x0005ecda) choice_list_pane_t1

0xb911,	// (0x0005f44c) input_focus_pane_cp11

0xf4a0,	// (0x00062fdb) title_pane_stacon_g2_ParamLimits

0xf4a0,	// (0x00062fdb) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0006320f) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0006320f) title_pane_stacon_g

0x642c,	// (0x00059f67) cursor_press_pane

0x7f19,	// (0x0005ba54) popup_fep_hwr_window_ParamLimits

0x7f19,	// (0x0005ba54) popup_fep_hwr_window

0x7fa3,	// (0x0005bade) popup_fep_vkb_window_ParamLimits

0x7fa3,	// (0x0005bade) popup_fep_vkb_window

0xb1ad,	// (0x0005ece8) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x00063677) fep_vkb_side_pane_g_ParamLimits

0x6d9c,	// (0x0005a8d7) fep_hwr_candidate_pane_ParamLimits

0x6d9c,	// (0x0005a8d7) fep_hwr_candidate_pane

0x6dc6,	// (0x0005a901) fep_hwr_side_pane_ParamLimits

0x6dc6,	// (0x0005a901) fep_hwr_side_pane

0x6de8,	// (0x0005a923) fep_hwr_top_pane_ParamLimits

0x6de8,	// (0x0005a923) fep_hwr_top_pane

0x6e00,	// (0x0005a93b) fep_hwr_write_pane_ParamLimits

0x6e00,	// (0x0005a93b) fep_hwr_write_pane

0xfb3c,	// (0x00063677) fep_vkb_side_pane_g

0xb1b5,	// (0x0005ecf0) fep_hwr_top_pane_g1

0xb1c7,	// (0x0005ed02) fep_hwr_top_pane_g2

0x6e3a,	// (0x0005a975) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00063653) fep_hwr_top_pane_g

0x6e4f,	// (0x0005a98a) fep_hwr_top_text_pane

0x1350,	// (0x00054e8b) fep_hwr_top_text_pane_g1

0xb1fd,	// (0x0005ed38) fep_hwr_top_text_pane_t1

0x6f59,	// (0x0005aa94) fep_hwr_candidate_pane_g1

0xb448,	// (0x0005ef83) fep_vkb_keypad_pane_g3_ParamLimits

0xb448,	// (0x0005ef83) fep_vkb_keypad_pane_g3

0xb474,	// (0x0005efaf) fep_vkb_keypad_pane_g4_ParamLimits

0xb474,	// (0x0005efaf) fep_vkb_keypad_pane_g4

0xb4eb,	// (0x0005f026) fep_vkb_bottom_pane_g2_ParamLimits

0xb4eb,	// (0x0005f026) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0006367e) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0006367e) fep_vkb_bottom_pane_g

0xb154,	// (0x0005ec8f) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x00063688) cell_vkb_side_pane_g

0xb576,	// (0x0005f0b1) cell_vkb_side_pane_t1

0xb584,	// (0x0005f0bf) cell_vkb_side_pane_t1_copy1

0xb154,	// (0x0005ec8f) bg_fep_vkb_candidate_pane_g2

0xb6c8,	// (0x0005f203) cell_vkb_candidate_pane_ParamLimits

0xb20b,	// (0x0005ed46) aid_size_cell_vkb_ParamLimits

0xb20b,	// (0x0005ed46) aid_size_cell_vkb

0xb6c8,	// (0x0005f203) cell_vkb_candidate_pane

0x6f80,	// (0x0005aabb) bg_popup_fep_shadow_pane_g1

0xb29d,	// (0x0005edd8) fep_vkb_bottom_pane_ParamLimits

0xb29d,	// (0x0005edd8) fep_vkb_bottom_pane

0xb2da,	// (0x0005ee15) fep_vkb_candidate_pane_ParamLimits

0xb2da,	// (0x0005ee15) fep_vkb_candidate_pane

0xb2f6,	// (0x0005ee31) fep_vkb_keypad_pane_ParamLimits

0xb2f6,	// (0x0005ee31) fep_vkb_keypad_pane

0xb329,	// (0x0005ee64) fep_vkb_side_pane_ParamLimits

0xb329,	// (0x0005ee64) fep_vkb_side_pane

0xb365,	// (0x0005eea0) fep_vkb_top_pane_ParamLimits

0xb365,	// (0x0005eea0) fep_vkb_top_pane

0xb3a1,	// (0x0005eedc) fep_vkb_top_pane_g1_ParamLimits

0xb3a1,	// (0x0005eedc) fep_vkb_top_pane_g1

0xb3b0,	// (0x0005eeeb) fep_vkb_top_pane_g2_ParamLimits

0xb3b0,	// (0x0005eeeb) fep_vkb_top_pane_g2

0xb3bf,	// (0x0005eefa) fep_vkb_top_pane_g3_ParamLimits

0xb3bf,	// (0x0005eefa) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0006366e) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0006366e) fep_vkb_top_pane_g

0xb3dd,	// (0x0005ef18) fep_vkb_top_text_pane_ParamLimits

0xb3dd,	// (0x0005ef18) fep_vkb_top_text_pane

0xb3ee,	// (0x0005ef29) fep_vkb_side_pane_g1_ParamLimits

0xb3ee,	// (0x0005ef29) fep_vkb_side_pane_g1

0xb437,	// (0x0005ef72) grid_vkb_side_pane_ParamLimits

0xb437,	// (0x0005ef72) grid_vkb_side_pane

0x6f88,	// (0x0005aac3) bg_popup_fep_shadow_pane_g2

0x6f91,	// (0x0005aacc) bg_popup_fep_shadow_pane_g3

0x6f99,	// (0x0005aad4) bg_popup_fep_shadow_pane_g4

0x6fa2,	// (0x0005aadd) bg_popup_fep_shadow_pane_g5

0x6fac,	// (0x0005aae7) bg_popup_fep_shadow_pane_g6

0x6fb4,	// (0x0005aaef) bg_popup_fep_shadow_pane_g7

0xf244,	// (0x00062d7f) bg_popup_fep_shadow_pane_g8

0xb496,	// (0x0005efd1) grid_vkb_keypad_number_pane_ParamLimits

0xb496,	// (0x0005efd1) grid_vkb_keypad_number_pane

0xb4aa,	// (0x0005efe5) grid_vkb_keypad_pane_ParamLimits

0xb4aa,	// (0x0005efe5) grid_vkb_keypad_pane

0xb4d0,	// (0x0005f00b) fep_vkb_bottom_pane_g1_ParamLimits

0xb4d0,	// (0x0005f00b) fep_vkb_bottom_pane_g1

0xb4f9,	// (0x0005f034) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb4f9,	// (0x0005f034) grid_vkb_keypad_bottom_left_pane

0xb50e,	// (0x0005f049) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb50e,	// (0x0005f049) grid_vkb_keypad_bottom_right_pane

0xb523,	// (0x0005f05e) fep_vkb_top_text_pane_g1

0xb53e,	// (0x0005f079) fep_vkb_top_text_pane_t1

0xb553,	// (0x0005f08e) cell_vkb_side_pane_ParamLimits

0xb553,	// (0x0005f08e) cell_vkb_side_pane

0xb154,	// (0x0005ec8f) cell_vkb_side_pane_g1

0xb592,	// (0x0005f0cd) cell_vkb_keypad_pane_ParamLimits

0xb592,	// (0x0005f0cd) cell_vkb_keypad_pane

0xb61f,	// (0x0005f15a) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0006369b) bg_popup_fep_shadow_pane_g

0x6fc6,	// (0x0005ab01) cell_hwr_side_pane_g1

0x6fc6,	// (0x0005ab01) cell_hwr_side_pane_g2

0xb629,	// (0x0005f164) cell_vkb_keypad_pane_t1

0xb637,	// (0x0005f172) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb637,	// (0x0005f172) cell_vkb_keypad_bottom_left_pane

0xb654,	// (0x0005f18f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb654,	// (0x0005f18f) cell_vkb_keypad_bottom_right_pane

0xb154,	// (0x0005ec8f) cell_vkb_keypad_bottom_left_pane_g1

0xb154,	// (0x0005ec8f) cell_vkb_keypad_bottom_right_pane_g1

0xb68d,	// (0x0005f1c8) cell_vkb_keypad_number_pane_ParamLimits

0xb68d,	// (0x0005f1c8) cell_vkb_keypad_number_pane

0xb6ac,	// (0x0005f1e7) cell_vkb_keypad_number_pane_g1

0xb6b6,	// (0x0005f1f1) cell_vkb_keypad_number_pane_g2

0xb6bf,	// (0x0005f1fa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0006368d) cell_vkb_keypad_number_pane_g

0xb629,	// (0x0005f164) cell_vkb_keypad_number_pane_t1

0xb6e9,	// (0x0005f224) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x000636ae) cell_hwr_side_pane_g

0xb702,	// (0x0005f23d) cell_hwr_side_pane_t1

0x6fd0,	// (0x0005ab0b) cell_hwr_side_pane_t1_copy1

0x6fde,	// (0x0005ab19) cell_hwr_candidate_pane_g1

0x700d,	// (0x0005ab48) cell_hwr_candidate_pane_t1

0xb154,	// (0x0005ec8f) cell_vkb_candidate_pane_g2

0xb746,	// (0x0005f281) cell_vkb_candidate_pane_t1

0x6d63,	// (0x0005a89e) bg_popup_fep_shadow_pane_ParamLimits

0x6d63,	// (0x0005a89e) bg_popup_fep_shadow_pane

0x6e1a,	// (0x0005a955) bg_fep_hwr_top_pane_g4

0xb1d9,	// (0x0005ed14) bg_hwr_side_pane_g1_ParamLimits

0xb1d9,	// (0x0005ed14) bg_hwr_side_pane_g1

0x6e8d,	// (0x0005a9c8) cell_hwr_side_pane_ParamLimits

0x6e8d,	// (0x0005a9c8) cell_hwr_side_pane

0x6eca,	// (0x0005aa05) fep_hwr_write_pane_g1_ParamLimits

0x6eca,	// (0x0005aa05) fep_hwr_write_pane_g1

0x6ed7,	// (0x0005aa12) fep_hwr_write_pane_g2_ParamLimits

0x6ed7,	// (0x0005aa12) fep_hwr_write_pane_g2

0x6ee4,	// (0x0005aa1f) fep_hwr_write_pane_g3_ParamLimits

0x6ee4,	// (0x0005aa1f) fep_hwr_write_pane_g3

0x6ef2,	// (0x0005aa2d) fep_hwr_write_pane_g4_ParamLimits

0x6ef2,	// (0x0005aa2d) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0006365a) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0006365a) fep_hwr_write_pane_g

0x6e1a,	// (0x0005a955) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6e1a,	// (0x0005a955) bg_fep_hwr_candidate_pane_g2

0x6f07,	// (0x0005aa42) cell_hwr_candidate_pane_ParamLimits

0x6f07,	// (0x0005aa42) cell_hwr_candidate_pane

0x6f59,	// (0x0005aa94) fep_hwr_candidate_pane_g1_ParamLimits

0xb239,	// (0x0005ed74) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb239,	// (0x0005ed74) bg_popup_fep_shadow_pane_cp2

0xb3cf,	// (0x0005ef0a) fep_vkb_top_pane_g4_ParamLimits

0xb3cf,	// (0x0005ef0a) fep_vkb_top_pane_g4

0xb415,	// (0x0005ef50) fep_vkb_side_pane_g2_ParamLimits

0xb415,	// (0x0005ef50) fep_vkb_side_pane_g2

0x59ba,	// (0x000594f5) list_setting_pane_t4_ParamLimits

0x59ba,	// (0x000594f5) list_setting_pane_t4

0x5a56,	// (0x00059591) list_setting_number_pane_t5_ParamLimits

0x5a56,	// (0x00059591) list_setting_number_pane_t5

0x5f49,	// (0x00059a84) list_double_heading_pane_cp2_ParamLimits

0x5f49,	// (0x00059a84) list_double_heading_pane_cp2

0xb754,	// (0x0005f28f) list_double_heading_pane_g1_cp2_ParamLimits

0xb754,	// (0x0005f28f) list_double_heading_pane_g1_cp2

0xb760,	// (0x0005f29b) list_double_heading_pane_g2_cp2_ParamLimits

0xb760,	// (0x0005f29b) list_double_heading_pane_g2_cp2

0xb774,	// (0x0005f2af) list_double_heading_pane_t1_cp2_ParamLimits

0xb774,	// (0x0005f2af) list_double_heading_pane_t1_cp2

0xb78a,	// (0x0005f2c5) list_double_heading_pane_t2_cp2_ParamLimits

0xb78a,	// (0x0005f2c5) list_double_heading_pane_t2_cp2

0xb909,	// (0x0005f444) aid_value_unit2

0x50c5,	// (0x00058c00) popup_preview_fixed_window

0xecef,	// (0x0006282a) bg_popup_preview_window_pane_cp02

0xb79c,	// (0x0005f2d7) list_preview_fixed_pane

0xb7e2,	// (0x0005f31d) list_empty_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_empty_pane_fp

0xb7e2,	// (0x0005f31d) list_single_cale_day_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_cale_day_pane_fp

0xb7e2,	// (0x0005f31d) list_single_graphic_heading_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_graphic_heading_pane_fp

0xb7e2,	// (0x0005f31d) list_single_graphic_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_graphic_pane_fp

0xb7e2,	// (0x0005f31d) list_single_heading_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_heading_pane_fp

0xb7e2,	// (0x0005f31d) list_single_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_pane_fp

0xb7fb,	// (0x0005f336) list_single_pane_fp_g1_ParamLimits

0xb7fb,	// (0x0005f336) list_single_pane_fp_g1

0xb754,	// (0x0005f28f) list_single_pane_fp_g2_ParamLimits

0xb754,	// (0x0005f28f) list_single_pane_fp_g2

0xb760,	// (0x0005f29b) list_single_pane_fp_g3_ParamLimits

0xb760,	// (0x0005f29b) list_single_pane_fp_g3

0xb807,	// (0x0005f342) list_single_pane_fp_g4_ParamLimits

0xb807,	// (0x0005f342) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x000636c1) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x000636c1) list_single_pane_fp_g

0x3efc,	// (0x00057a37) list_single_pane_fp_t1_ParamLimits

0x3efc,	// (0x00057a37) list_single_pane_fp_t1

0x3f13,	// (0x00057a4e) list_single_graphic_pane_fp_g1_ParamLimits

0x3f13,	// (0x00057a4e) list_single_graphic_pane_fp_g1

0xb7fb,	// (0x0005f336) list_single_graphic_pane_fp_g2_ParamLimits

0xb7fb,	// (0x0005f336) list_single_graphic_pane_fp_g2

0xb754,	// (0x0005f28f) list_single_graphic_pane_fp_g3_ParamLimits

0xb754,	// (0x0005f28f) list_single_graphic_pane_fp_g3

0xb760,	// (0x0005f29b) list_single_graphic_pane_fp_g4_ParamLimits

0xb760,	// (0x0005f29b) list_single_graphic_pane_fp_g4

0xb807,	// (0x0005f342) list_single_graphic_pane_fp_g5_ParamLimits

0xb807,	// (0x0005f342) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x000636ca) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x000636ca) list_single_graphic_pane_fp_g

0x3f1f,	// (0x00057a5a) list_single_graphic_pane_fp_t1_ParamLimits

0x3f1f,	// (0x00057a5a) list_single_graphic_pane_fp_t1

0x3f13,	// (0x00057a4e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3f13,	// (0x00057a4e) list_single_graphic_heading_pane_fp_g1

0xb7fb,	// (0x0005f336) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb7fb,	// (0x0005f336) list_single_graphic_heading_pane_fp_g2

0xb754,	// (0x0005f28f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb754,	// (0x0005f28f) list_single_graphic_heading_pane_fp_g3

0xb760,	// (0x0005f29b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb760,	// (0x0005f29b) list_single_graphic_heading_pane_fp_g4

0xb807,	// (0x0005f342) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb807,	// (0x0005f342) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000636ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000636ca) list_single_graphic_heading_pane_fp_g

0x3f35,	// (0x00057a70) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f35,	// (0x00057a70) list_single_graphic_heading_pane_fp_t1

0x3f4b,	// (0x00057a86) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f4b,	// (0x00057a86) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x000636d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x000636d5) list_single_graphic_heading_pane_fp_t

0x3f5d,	// (0x00057a98) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f5d,	// (0x00057a98) list_single_cale_day_pane_fp_g1

0xb813,	// (0x0005f34e) list_single_cale_day_pane_fp_g2_ParamLimits

0xb813,	// (0x0005f34e) list_single_cale_day_pane_fp_g2

0x99ff,	// (0x0005d53a) list_single_cale_day_pane_fp_g3_ParamLimits

0x99ff,	// (0x0005d53a) list_single_cale_day_pane_fp_g3

0x9a27,	// (0x0005d562) list_single_cale_day_pane_fp_g4_ParamLimits

0x9a27,	// (0x0005d562) list_single_cale_day_pane_fp_g4

0x9a4b,	// (0x0005d586) list_single_cale_day_pane_fp_g5_ParamLimits

0x9a4b,	// (0x0005d586) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x000636da) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x000636da) list_single_cale_day_pane_fp_g

0x3f95,	// (0x00057ad0) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f95,	// (0x00057ad0) list_single_cale_day_pane_fp_t1

0x3fbb,	// (0x00057af6) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fbb,	// (0x00057af6) list_single_cale_day_pane_fp_t2

0x3fd4,	// (0x00057b0f) list_single_cale_day_pane_fp_t3_ParamLimits

0x3fd4,	// (0x00057b0f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x000636e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x000636e5) list_single_cale_day_pane_fp_t

0xb7fb,	// (0x0005f336) list_empty_pane_fp_g1_ParamLimits

0xb7fb,	// (0x0005f336) list_empty_pane_fp_g1

0x3fed,	// (0x00057b28) list_empty_pane_fp_t1

0x3ffb,	// (0x00057b36) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x000636ec) list_empty_pane_fp_t

0xb7fb,	// (0x0005f336) list_single_heading_pane_fp_g1_ParamLimits

0xb7fb,	// (0x0005f336) list_single_heading_pane_fp_g1

0xb754,	// (0x0005f28f) list_single_heading_pane_fp_g2_ParamLimits

0xb754,	// (0x0005f28f) list_single_heading_pane_fp_g2

0xb760,	// (0x0005f29b) list_single_heading_pane_fp_g3_ParamLimits

0xb760,	// (0x0005f29b) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x000636f1) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x000636f1) list_single_heading_pane_fp_g

0x4009,	// (0x00057b44) list_single_heading_pane_fp_t1_ParamLimits

0x4009,	// (0x00057b44) list_single_heading_pane_fp_t1

0x401b,	// (0x00057b56) list_single_heading_pane_fp_t2_ParamLimits

0x401b,	// (0x00057b56) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000636f8) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000636f8) list_single_heading_pane_fp_t

0xf337,	// (0x00062e72) aid_size_cell_fast

0xecd2,	// (0x0006280d) soft_indicator_pane_cp1_t1

0xf374,	// (0x00062eaf) cell_app_pane_cp2_ParamLimits

0xf374,	// (0x00062eaf) cell_app_pane_cp2

0x6d85,	// (0x0005a8c0) fep_hwr_candidate_drop_down_list_pane

0x6f73,	// (0x0005aaae) fep_hwr_candidate_pane_g3_ParamLimits

0x6f73,	// (0x0005aaae) fep_hwr_candidate_pane_g3

0x2be6,	// (0x00056721) fep_hwr_candidate_pane_g4_ParamLimits

0x2be6,	// (0x00056721) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00063667) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x00063667) fep_hwr_candidate_pane_g

0xb2c9,	// (0x0005ee04) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb2c9,	// (0x0005ee04) fep_vkb_candidate_drop_down_list_pane

0xb6f1,	// (0x0005f22c) fep_vkb_candidate_pane_g3

0xb6f9,	// (0x0005f234) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00063694) fep_vkb_candidate_pane_g

0x6fde,	// (0x0005ab19) cell_hwr_candidate_pane_g1_ParamLimits

0x6fec,	// (0x0005ab27) cell_hwr_candidate_pane_g3_ParamLimits

0x6fec,	// (0x0005ab27) cell_hwr_candidate_pane_g3

0xb98d,	// (0x0005f4c8) cell_hwr_candidate_pane_g4_ParamLimits

0xb98d,	// (0x0005f4c8) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x000636b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x000636b3) cell_hwr_candidate_pane_g

0xb710,	// (0x0005f24b) cell_vkb_candidate_pane_g3_ParamLimits

0xb710,	// (0x0005f24b) cell_vkb_candidate_pane_g3

0xb72b,	// (0x0005f266) cell_vkb_candidate_pane_g4_ParamLimits

0xb72b,	// (0x0005f266) cell_vkb_candidate_pane_g4

0xb81f,	// (0x0005f35a) cell_app_pane_cp2_g1_ParamLimits

0xb81f,	// (0x0005f35a) cell_app_pane_cp2_g1

0xb83d,	// (0x0005f378) cell_app_pane_cp2_g2_ParamLimits

0xb83d,	// (0x0005f378) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000636fd) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000636fd) cell_app_pane_cp2_g

0xb849,	// (0x0005f384) cell_app_pane_cp2_t1_ParamLimits

0xb849,	// (0x0005f384) cell_app_pane_cp2_t1

0xf1d1,	// (0x00062d0c) grid_highlight_pane_cp1_ParamLimits

0xf1d1,	// (0x00062d0c) grid_highlight_pane_cp1

0x702b,	// (0x0005ab66) cell_hwr_candidate_pane_cp1_ParamLimits

0x702b,	// (0x0005ab66) cell_hwr_candidate_pane_cp1

0x6fde,	// (0x0005ab19) fep_hwr_candidate_drop_down_list_pane_g1

0x704f,	// (0x0005ab8a) fep_hwr_candidate_drop_down_list_pane_g2

0x705c,	// (0x0005ab97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00063702) fep_hwr_candidate_drop_down_list_pane_g

0x7069,	// (0x0005aba4) fep_hwr_candidate_drop_down_list_scroll_pane

0x7072,	// (0x0005abad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7072,	// (0x0005abad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x707f,	// (0x0005abba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x707f,	// (0x0005abba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x708c,	// (0x0005abc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x708c,	// (0x0005abc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7099,	// (0x0005abd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7099,	// (0x0005abd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x70b4,	// (0x0005abef) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x70b4,	// (0x0005abef) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x70cf,	// (0x0005ac0a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70cf,	// (0x0005ac0a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x70ea,	// (0x0005ac25) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70ea,	// (0x0005ac25) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7105,	// (0x0005ac40) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7105,	// (0x0005ac40) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00063709) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00063709) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb85b,	// (0x0005f396) cell_vkb_candidate_pane_cp1_ParamLimits

0xb85b,	// (0x0005f396) cell_vkb_candidate_pane_cp1

0xb3cf,	// (0x0005ef0a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb3cf,	// (0x0005ef0a) fep_vkb_candidate_drop_down_list_pane_g1

0xb881,	// (0x0005f3bc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb881,	// (0x0005f3bc) fep_vkb_candidate_drop_down_list_pane_g2

0xb88e,	// (0x0005f3c9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb88e,	// (0x0005f3c9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0006371a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x0006371a) fep_vkb_candidate_drop_down_list_pane_g

0xb9ae,	// (0x0005f4e9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb9ae,	// (0x0005f4e9) fep_vkb_candidate_drop_down_list_scroll_pane

0xb9bb,	// (0x0005f4f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb9bb,	// (0x0005f4f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb9c8,	// (0x0005f503) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb9c8,	// (0x0005f503) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb9d4,	// (0x0005f50f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb9d4,	// (0x0005f50f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb89b,	// (0x0005f3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb89b,	// (0x0005f3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb8bc,	// (0x0005f3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb8bc,	// (0x0005f3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb9e0,	// (0x0005f51b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb9e0,	// (0x0005f51b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xba01,	// (0x0005f53c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xba01,	// (0x0005f53c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xba22,	// (0x0005f55d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xba22,	// (0x0005f55d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00063721) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00063721) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x51dd,	// (0x00058d18) title_pane_g1_ParamLimits

0x51ea,	// (0x00058d25) title_pane_g2_ParamLimits

0xf554,	// (0x0006308f) title_pane_g_ParamLimits

0x1348,	// (0x00054e83) aid_call2_pane

0x1340,	// (0x00054e7b) aid_call_pane

0x1350,	// (0x00054e8b) popup_clock_analogue_window_g1

0x1350,	// (0x00054e8b) popup_clock_analogue_window_g2

0x5f2a,	// (0x00059a65) popup_clock_analogue_window_g3

0x5f33,	// (0x00059a6e) popup_clock_analogue_window_g4

0xb91b,	// (0x0005f456) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0006323e) popup_clock_analogue_window_g

0x5f3b,	// (0x00059a76) popup_clock_analogue_window_t1

0x5f7c,	// (0x00059ab7) clock_digital_number_pane_ParamLimits

0x5f7c,	// (0x00059ab7) clock_digital_number_pane

0x5f88,	// (0x00059ac3) clock_digital_number_pane_cp02_ParamLimits

0x5f88,	// (0x00059ac3) clock_digital_number_pane_cp02

0x5f94,	// (0x00059acf) clock_digital_number_pane_cp03_ParamLimits

0x5f94,	// (0x00059acf) clock_digital_number_pane_cp03

0x5fa0,	// (0x00059adb) clock_digital_number_pane_cp04_ParamLimits

0x5fa0,	// (0x00059adb) clock_digital_number_pane_cp04

0x5fac,	// (0x00059ae7) clock_digital_separator_pane_ParamLimits

0x5fac,	// (0x00059ae7) clock_digital_separator_pane

0x5fb8,	// (0x00059af3) popup_clock_digital_window_t1_ParamLimits

0x5fb8,	// (0x00059af3) popup_clock_digital_window_t1

0xb91b,	// (0x0005f456) clock_digital_number_pane_g1

0xb91b,	// (0x0005f456) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00063249) clock_digital_number_pane_g

0xb91b,	// (0x0005f456) clock_digital_separator_pane_g1

0xb91b,	// (0x0005f456) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00063249) clock_digital_separator_pane_g

0x846e,	// (0x0005bfa9) aid_fill_nsta_ParamLimits

0x85be,	// (0x0005c0f9) indicator_nsta_pane_ParamLimits

0x874f,	// (0x0005c28a) popup_clock_analogue_window

0x874f,	// (0x0005c28a) popup_clock_digital_window

0xebbc,	// (0x000626f7) grid_indicator_nsta_pane_ParamLimits

0xab81,	// (0x0005e6bc) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x000635e7) clock_nsta_pane_t

0x5e93,	// (0x000599ce) aid_size_max_handle

0x5e9d,	// (0x000599d8) aid_size_min_handle

0x642c,	// (0x00059f67) editor_scroll_pane

0xba3d,	// (0x0005f578) ex_editor_pane

0xf2fd,	// (0x00062e38) scroll_pane_cp13

0xf170,	// (0x00062cab) scroll_pane_cp14

0x137f,	// (0x00054eba) scroll_pane_cp36

0x5f5f,	// (0x00059a9a) list_single_graphic_hl_pane_cp2_ParamLimits

0x5f5f,	// (0x00059a9a) list_single_graphic_hl_pane_cp2

0x995c,	// (0x0005d497) list_single_graphic_hl_pane_ParamLimits

0x995c,	// (0x0005d497) list_single_graphic_hl_pane

0x4031,	// (0x00057b6c) aid_size_min_hl_cp1

0xba45,	// (0x0005f580) list_highlight_pane_cp34_ParamLimits

0xba45,	// (0x0005f580) list_highlight_pane_cp34

0xba56,	// (0x0005f591) list_single_graphic_hl_pane_g1_ParamLimits

0xba56,	// (0x0005f591) list_single_graphic_hl_pane_g1

0x7120,	// (0x0005ac5b) list_single_graphic_hl_pane_g2_ParamLimits

0x7120,	// (0x0005ac5b) list_single_graphic_hl_pane_g2

0x7120,	// (0x0005ac5b) list_single_graphic_hl_pane_g3_ParamLimits

0x7120,	// (0x0005ac5b) list_single_graphic_hl_pane_g3

0x9988,	// (0x0005d4c3) list_single_graphic_hl_pane_g4_ParamLimits

0x9988,	// (0x0005d4c3) list_single_graphic_hl_pane_g4

0x9a6f,	// (0x0005d5aa) list_single_graphic_hl_pane_g5_ParamLimits

0x9a6f,	// (0x0005d5aa) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00063732) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00063732) list_single_graphic_hl_pane_g

0x712c,	// (0x0005ac67) list_single_graphic_hl_pane_t1_ParamLimits

0x712c,	// (0x0005ac67) list_single_graphic_hl_pane_t1

0xba63,	// (0x0005f59e) aid_size_min_hl_cp2

0xba6c,	// (0x0005f5a7) list_highlight_pane_cp34_cp2_ParamLimits

0xba6c,	// (0x0005f5a7) list_highlight_pane_cp34_cp2

0xba56,	// (0x0005f591) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xba56,	// (0x0005f591) list_single_graphic_hl_pane_g1_cp2

0xba79,	// (0x0005f5b4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xba79,	// (0x0005f5b4) list_single_graphic_hl_pane_g2_cp2

0xba85,	// (0x0005f5c0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba85,	// (0x0005f5c0) list_single_graphic_hl_pane_g3_cp2

0x1e20,	// (0x0005595b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1e20,	// (0x0005595b) list_single_graphic_hl_pane_g4_cp2

0xba93,	// (0x0005f5ce) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xba93,	// (0x0005f5ce) list_single_graphic_hl_pane_g5_cp2

0x6705,	// (0x0005a240) control_pane_g4_ParamLimits

0x6705,	// (0x0005a240) control_pane_g4

0x7e37,	// (0x0005b972) bg_popup_sub_pane_cp10_ParamLimits

0xb15e,	// (0x0005ec99) list_choice_list_pane_ParamLimits

0xb16d,	// (0x0005eca8) scroll_pane_cp23

0xecef,	// (0x0006282a) bg_popup_preview_window_pane_cp02_ParamLimits

0xb79c,	// (0x0005f2d7) list_preview_fixed_pane_ParamLimits

0xb7b2,	// (0x0005f2ed) list_preview_fixed_pane_cp_ParamLimits

0xb7b2,	// (0x0005f2ed) list_preview_fixed_pane_cp

0xb7be,	// (0x0005f2f9) popup_preview_fixed_window_g1_ParamLimits

0xb7be,	// (0x0005f2f9) popup_preview_fixed_window_g1

0xb7ca,	// (0x0005f305) popup_preview_fixed_window_g2_ParamLimits

0xb7ca,	// (0x0005f305) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x000636ba) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x000636ba) popup_preview_fixed_window_g

0x5d80,	// (0x000598bb) aid_navi_side_left_pane_ParamLimits

0x5d95,	// (0x000598d0) aid_navi_side_right_pane_ParamLimits

0x5dad,	// (0x000598e8) navi_icon_pane_stacon_ParamLimits

0x5dc1,	// (0x000598fc) navi_navi_pane_stacon_ParamLimits

0x5dad,	// (0x000598e8) navi_text_pane_stacon_ParamLimits

0xb911,	// (0x0005f44c) main_text_info_pane

0xbabd,	// (0x0005f5f8) listscroll_text_info_pane

0xbac5,	// (0x0005f600) list_text_info_pane_ParamLimits

0xbac5,	// (0x0005f600) list_text_info_pane

0xbad4,	// (0x0005f60f) scroll_pane_cp24_ParamLimits

0xbad4,	// (0x0005f60f) scroll_pane_cp24

0xbaf2,	// (0x0005f62d) list_text_info_pane_t1_ParamLimits

0xbaf2,	// (0x0005f62d) list_text_info_pane_t1

0x7e81,	// (0x0005b9bc) popup_fast_swap2_window_ParamLimits

0x7e81,	// (0x0005b9bc) popup_fast_swap2_window

0xbb17,	// (0x0005f652) aid_size_cell_fast2

0xb911,	// (0x0005f44c) bg_popup_window_pane_cp17

0x8dac,	// (0x0005c8e7) heading_pane_cp2

0xeef5,	// (0x00062a30) listscroll_fast2_pane

0xbb21,	// (0x0005f65c) grid_fast2_pane

0xbb2b,	// (0x0005f666) listscroll_fast2_pane_g1

0xbb35,	// (0x0005f670) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x0006373d) listscroll_fast2_pane_g

0xf2fd,	// (0x00062e38) scroll_pane_cp26

0xbb3f,	// (0x0005f67a) cell_fast2_pane_ParamLimits

0xbb3f,	// (0x0005f67a) cell_fast2_pane

0xbb56,	// (0x0005f691) cell_fast2_pane_g1

0xbb5f,	// (0x0005f69a) cell_fast2_pane_g2

0xbb68,	// (0x0005f6a3) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00063742) cell_fast2_pane_g

0xef37,	// (0x00062a72) grid_highlight_pane_cp9

0xef4c,	// (0x00062a87) main_eswt_pane_ParamLimits

0xef4c,	// (0x00062a87) main_eswt_pane

0xbae9,	// (0x0005f624) list_single_text_info_pane

0xbb70,	// (0x0005f6ab) eswt_ctrl_button_pane

0xbb70,	// (0x0005f6ab) eswt_ctrl_canvas_pane

0xbb78,	// (0x0005f6b3) eswt_ctrl_combo_pane

0xbb70,	// (0x0005f6ab) eswt_ctrl_default_pane

0xbb70,	// (0x0005f6ab) eswt_ctrl_label_pane

0xbb80,	// (0x0005f6bb) eswt_ctrl_wait_pane

0xbb88,	// (0x0005f6c3) eswt_shell_pane

0xb911,	// (0x0005f44c) listscroll_eswt_app_pane

0xbba8,	// (0x0005f6e3) popup_eswt_tasktip_window_ParamLimits

0xbba8,	// (0x0005f6e3) popup_eswt_tasktip_window

0x89ec,	// (0x0005c527) bg_popup_window_pane_cp18

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_ParamLimits

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_ParamLimits

0xbbc6,	// (0x0005f701) eswt_control_pane_g2

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_ParamLimits

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_ParamLimits

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x00063749) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x00063749) eswt_control_pane_g

0xf1d1,	// (0x00062d0c) bg_button_pane_ParamLimits

0xf1d1,	// (0x00062d0c) bg_button_pane

0xef4c,	// (0x00062a87) common_borders_pane_copy2_ParamLimits

0xef4c,	// (0x00062a87) common_borders_pane_copy2

0xbbed,	// (0x0005f728) control_button_pane_g1_ParamLimits

0xbbed,	// (0x0005f728) control_button_pane_g1

0xbbf9,	// (0x0005f734) control_button_pane_g2_ParamLimits

0xbbf9,	// (0x0005f734) control_button_pane_g2

0xbc05,	// (0x0005f740) control_button_pane_g3_ParamLimits

0xbc05,	// (0x0005f740) control_button_pane_g3

0x0002,

0xfc17,	// (0x00063752) control_button_pane_g_ParamLimits

0xfc17,	// (0x00063752) control_button_pane_g

0xbc19,	// (0x0005f754) control_button_pane_t1

0xbc27,	// (0x0005f762) control_button_pane_t2

0x0001,

0xfc1e,	// (0x00063759) control_button_pane_t

0x8978,	// (0x0005c4b3) bg_button_pane_g1

0x8988,	// (0x0005c4c3) bg_button_pane_g2

0x8980,	// (0x0005c4bb) bg_button_pane_g3

0x8998,	// (0x0005c4d3) bg_button_pane_g4

0x8990,	// (0x0005c4cb) bg_button_pane_g5

0x89a0,	// (0x0005c4db) bg_button_pane_g6

0x89a8,	// (0x0005c4e3) bg_button_pane_g7

0x89b8,	// (0x0005c4f3) bg_button_pane_g8

0x89b0,	// (0x0005c4eb) bg_button_pane_g9

0x0008,

0xf871,	// (0x000633ac) bg_button_pane_g

0xb119,	// (0x0005ec54) common_borders_pane_ParamLimits

0xb119,	// (0x0005ec54) common_borders_pane

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy1_ParamLimits

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy1

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy1_ParamLimits

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy1

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy1_ParamLimits

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy1

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy1_ParamLimits

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy1

0xb154,	// (0x0005ec8f) bg_eswt_ctrl_canvas_pane_g1

0xb119,	// (0x0005ec54) common_borders_pane_cp2_ParamLimits

0xb119,	// (0x0005ec54) common_borders_pane_cp2

0xb119,	// (0x0005ec54) common_borders_pane_cp3_ParamLimits

0xb119,	// (0x0005ec54) common_borders_pane_cp3

0xbc35,	// (0x0005f770) separator_horizontal_pane

0xbc3d,	// (0x0005f778) separator_vertical_pane

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy2_ParamLimits

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy2

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy2_ParamLimits

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy2

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy2_ParamLimits

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy2

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy2_ParamLimits

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy2

0xb911,	// (0x0005f44c) common_borders_pane_cp4

0xbc46,	// (0x0005f781) separator_horizontal_pane_g1

0xbc4f,	// (0x0005f78a) separator_horizontal_pane_g2

0xbc58,	// (0x0005f793) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x0006375e) separator_horizontal_pane_g

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy3_ParamLimits

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy3

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy3_ParamLimits

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy3

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy3_ParamLimits

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy3

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy3_ParamLimits

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy3

0xb911,	// (0x0005f44c) common_borders_pane_cp5

0xbc61,	// (0x0005f79c) separator_vertical_pane_g1

0xbc6a,	// (0x0005f7a5) separator_vertical_pane_g2

0xbc73,	// (0x0005f7ae) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00063765) separator_vertical_pane_g

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy4_ParamLimits

0xbbb9,	// (0x0005f6f4) eswt_control_pane_g1_copy4

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy4_ParamLimits

0xbbc6,	// (0x0005f701) eswt_control_pane_g2_copy4

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy4_ParamLimits

0xbbd3,	// (0x0005f70e) eswt_control_pane_g3_copy4

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy4_ParamLimits

0xbbe0,	// (0x0005f71b) eswt_control_pane_g4_copy4

0xbc7c,	// (0x0005f7b7) eswt_ctrl_combo_button_pane

0xbc84,	// (0x0005f7bf) eswt_ctrl_input_pane

0xbc8c,	// (0x0005f7c7) popup_choice_list_window_cp70

0xbc94,	// (0x0005f7cf) eswt_ctrl_input_pane_t1

0xb911,	// (0x0005f44c) input_focus_pane_cp70

0xb119,	// (0x0005ec54) bg_button_pane_cp70_ParamLimits

0xb119,	// (0x0005ec54) bg_button_pane_cp70

0xbca2,	// (0x0005f7dd) eswt_ctrl_combo_button_pane_g1

0xbcaa,	// (0x0005f7e5) wait_bar_pane_cp70

0x89ec,	// (0x0005c527) bg_popup_window_pane_cp70_ParamLimits

0x89ec,	// (0x0005c527) bg_popup_window_pane_cp70

0xbcb2,	// (0x0005f7ed) popup_eswt_tasktip_window_t1

0xbcc8,	// (0x0005f803) wait_bar_pane_cp71_ParamLimits

0xbcc8,	// (0x0005f803) wait_bar_pane_cp71

0xbcd4,	// (0x0005f80f) grid_eswt_app_pane

0xf542,	// (0x0006307d) scroll_pane_cp70

0xbcdd,	// (0x0005f818) cell_eswt_app_pane_ParamLimits

0xbcdd,	// (0x0005f818) cell_eswt_app_pane

0xbd0f,	// (0x0005f84a) cell_eswt_app_pane_g1_ParamLimits

0xbd0f,	// (0x0005f84a) cell_eswt_app_pane_g1

0xbd3e,	// (0x0005f879) cell_eswt_app_pane_g2_ParamLimits

0xbd3e,	// (0x0005f879) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x0006376c) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x0006376c) cell_eswt_app_pane_g

0xbd67,	// (0x0005f8a2) cell_eswt_app_pane_t1_ParamLimits

0xbd67,	// (0x0005f8a2) cell_eswt_app_pane_t1

0xbd99,	// (0x0005f8d4) grid_highlight_pane_cp70_ParamLimits

0xbd99,	// (0x0005f8d4) grid_highlight_pane_cp70

0x381a,	// (0x00057355) set_content_pane_g1

0x7d69,	// (0x0005b8a4) status_small_volume_pane

0x7142,	// (0x0005ac7d) status_small_volume_pane_g1

0x714a,	// (0x0005ac85) volume_small2_pane

0x7153,	// (0x0005ac8e) volume_small2_pane_g1

0x715c,	// (0x0005ac97) volume_small2_pane_g2

0x7165,	// (0x0005aca0) volume_small2_pane_g3

0x716e,	// (0x0005aca9) volume_small2_pane_g4

0x7177,	// (0x0005acb2) volume_small2_pane_g5

0x7180,	// (0x0005acbb) volume_small2_pane_g6

0x7189,	// (0x0005acc4) volume_small2_pane_g7

0x7192,	// (0x0005accd) volume_small2_pane_g8

0x719b,	// (0x0005acd6) volume_small2_pane_g9

0x71a4,	// (0x0005acdf) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00063771) volume_small2_pane_g

0xb523,	// (0x0005f05e) fep_vkb_top_text_pane_g1_ParamLimits

0xb53e,	// (0x0005f079) fep_vkb_top_text_pane_t1_ParamLimits

0xb7d6,	// (0x0005f311) popup_preview_fixed_window_g3_ParamLimits

0xb7d6,	// (0x0005f311) popup_preview_fixed_window_g3

0x8392,	// (0x0005becd) popup_toolbar_trans_pane

0x9ee4,	// (0x0005da1f) aid_height_set_list_ParamLimits

0x9ef5,	// (0x0005da30) aid_size_parent_ParamLimits

0x7e37,	// (0x0005b972) list_highlight_pane_cp2_ParamLimits

0x381a,	// (0x00057355) set_content_pane_g1_ParamLimits

0xa128,	// (0x0005dc63) list_single_image_pane_ParamLimits

0xa128,	// (0x0005dc63) list_single_image_pane

0xbda5,	// (0x0005f8e0) aid_size_cell_image_ParamLimits

0xbda5,	// (0x0005f8e0) aid_size_cell_image

0xbdb2,	// (0x0005f8ed) grid_single_image_pane_ParamLimits

0xbdb2,	// (0x0005f8ed) grid_single_image_pane

0xf1df,	// (0x00062d1a) list_single_image_pane_g1_ParamLimits

0xf1df,	// (0x00062d1a) list_single_image_pane_g1

0xf1eb,	// (0x00062d26) list_single_image_pane_g2_ParamLimits

0xf1eb,	// (0x00062d26) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00063786) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00063786) list_single_image_pane_g

0xbdc0,	// (0x0005f8fb) list_single_image_pane_t1_ParamLimits

0xbdc0,	// (0x0005f8fb) list_single_image_pane_t1

0xbdd6,	// (0x0005f911) cell_image_list_pane_ParamLimits

0xbdd6,	// (0x0005f911) cell_image_list_pane

0xbdec,	// (0x0005f927) cell_image_list_pane_g1

0xbdf5,	// (0x0005f930) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x0006378b) cell_image_list_pane_g

0xbdfe,	// (0x0005f939) aid_size_cell_tb_trans_pane

0xf1d1,	// (0x00062d0c) bg_tb_trans_pane

0xbe10,	// (0x0005f94b) grid_tb_trans_pane

0x8978,	// (0x0005c4b3) bg_tb_trans_pane_g1

0x8988,	// (0x0005c4c3) bg_tb_trans_pane_g2

0x8980,	// (0x0005c4bb) bg_tb_trans_pane_g3

0x8998,	// (0x0005c4d3) bg_tb_trans_pane_g4

0x8990,	// (0x0005c4cb) bg_tb_trans_pane_g5

0x89b8,	// (0x0005c4f3) bg_tb_trans_pane_g6

0x89b0,	// (0x0005c4eb) bg_tb_trans_pane_g7

0x89a0,	// (0x0005c4db) bg_tb_trans_pane_g8

0x89a8,	// (0x0005c4e3) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00063790) bg_tb_trans_pane_g

0xbe24,	// (0x0005f95f) cell_toolbar_trans_pane_ParamLimits

0xbe24,	// (0x0005f95f) cell_toolbar_trans_pane

0xb154,	// (0x0005ec8f) cell_toolbar_trans_pane_g1

0xad78,	// (0x0005e8b3) list_form2_midp_pane_t1

0xad86,	// (0x0005e8c1) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0006362d) list_form2_midp_pane_t

0xad94,	// (0x0005e8cf) scroll_pane_cp51_ParamLimits

0xaf5b,	// (0x0005ea96) form2_midp_wait_pane_g1

0xaf64,	// (0x0005ea9f) form2_midp_wait_pane_g2

0xaf6d,	// (0x0005eaa8) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00063642) form2_midp_wait_pane_g

0xebbc,	// (0x000626f7) list_highlight_pane_cp21_ParamLimits

0xafb1,	// (0x0005eaec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xafc0,	// (0x0005eafb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa0e1,	// (0x0005dc1c) list_single_2graphic_im_pane_ParamLimits

0xa0e1,	// (0x0005dc1c) list_single_2graphic_im_pane

0xbe4a,	// (0x0005f985) list_single_2graphic_im_pane_g1_ParamLimits

0xbe4a,	// (0x0005f985) list_single_2graphic_im_pane_g1

0xbe5b,	// (0x0005f996) list_single_2graphic_im_pane_g2_ParamLimits

0xbe5b,	// (0x0005f996) list_single_2graphic_im_pane_g2

0xbe67,	// (0x0005f9a2) list_single_2graphic_im_pane_g3_ParamLimits

0xbe67,	// (0x0005f9a2) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x000637a3) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x000637a3) list_single_2graphic_im_pane_g

0xbe87,	// (0x0005f9c2) list_single_2graphic_im_pane_t1_ParamLimits

0xbe87,	// (0x0005f9c2) list_single_2graphic_im_pane_t1

0xb7e2,	// (0x0005f31d) list_single_graphic_2heading_pane_fp_ParamLimits

0xb7e2,	// (0x0005f31d) list_single_graphic_2heading_pane_fp

0x3f13,	// (0x00057a4e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3f13,	// (0x00057a4e) list_single_graphic_2heading_pane_fp_g1

0xb7fb,	// (0x0005f336) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb7fb,	// (0x0005f336) list_single_graphic_2heading_pane_fp_g2

0xb754,	// (0x0005f28f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb754,	// (0x0005f28f) list_single_graphic_2heading_pane_fp_g3

0xb760,	// (0x0005f29b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb760,	// (0x0005f29b) list_single_graphic_2heading_pane_fp_g4

0xb807,	// (0x0005f342) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb807,	// (0x0005f342) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000636ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000636ca) list_single_graphic_2heading_pane_fp_g

0x403a,	// (0x00057b75) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x403a,	// (0x00057b75) list_single_graphic_2heading_pane_fp_t1

0x3f4b,	// (0x00057a86) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f4b,	// (0x00057a86) list_single_graphic_2heading_pane_fp_t2

0x4050,	// (0x00057b8b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4050,	// (0x00057b8b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x000637ac) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x000637ac) list_single_graphic_2heading_pane_fp_t

0xb1e5,	// (0x0005ed20) fep_hwr_write_pane_g5_ParamLimits

0xb1e5,	// (0x0005ed20) fep_hwr_write_pane_g5

0xb1f1,	// (0x0005ed2c) fep_hwr_write_pane_g6_ParamLimits

0xb1f1,	// (0x0005ed2c) fep_hwr_write_pane_g6

0xbb88,	// (0x0005f6c3) eswt_shell_pane_ParamLimits

0x89ec,	// (0x0005c527) bg_popup_window_pane_cp18_ParamLimits

0x9e3b,	// (0x0005d976) heading_pane_cp70

0xbcb2,	// (0x0005f7ed) popup_eswt_tasktip_window_t1_ParamLimits

0x84c5,	// (0x0005c000) aid_touch_tab_arrow_left

0x84d4,	// (0x0005c00f) aid_touch_tab_arrow_right

0xb92f,	// (0x0005f46a) title_pane_g3_ParamLimits

0xb92f,	// (0x0005f46a) title_pane_g3

0xf190,	// (0x00062ccb) set_value_pane_g1

0x8392,	// (0x0005becd) popup_toolbar_trans_pane_ParamLimits

0xbdfe,	// (0x0005f939) aid_size_cell_tb_trans_pane_ParamLimits

0xf1d1,	// (0x00062d0c) bg_tb_trans_pane_ParamLimits

0xbe10,	// (0x0005f94b) grid_tb_trans_pane_ParamLimits

0xecef,	// (0x0006282a) cont_note_pane_ParamLimits

0xecef,	// (0x0006282a) cont_note_pane

0xef4c,	// (0x00062a87) cont_snote2_single_text_pane_ParamLimits

0xef4c,	// (0x00062a87) cont_snote2_single_text_pane

0xef4c,	// (0x00062a87) cont_snote2_single_graphic_pane_ParamLimits

0xef4c,	// (0x00062a87) cont_snote2_single_graphic_pane

0x8fc8,	// (0x0005cb03) cont_note_wait_pane_ParamLimits

0x8fc8,	// (0x0005cb03) cont_note_wait_pane

0x8fc8,	// (0x0005cb03) cont_note_image_pane_ParamLimits

0x8fc8,	// (0x0005cb03) cont_note_image_pane

0xbeb8,	// (0x0005f9f3) popup_note2_window_g1_ParamLimits

0xbeb8,	// (0x0005f9f3) popup_note2_window_g1

0xbee9,	// (0x0005fa24) popup_note2_window_t1_ParamLimits

0xbee9,	// (0x0005fa24) popup_note2_window_t1

0xbf2e,	// (0x0005fa69) popup_note2_window_t2_ParamLimits

0xbf2e,	// (0x0005fa69) popup_note2_window_t2

0xbf73,	// (0x0005faae) popup_note2_window_t3_ParamLimits

0xbf73,	// (0x0005faae) popup_note2_window_t3

0xbfb8,	// (0x0005faf3) popup_note2_window_t4_ParamLimits

0xbfb8,	// (0x0005faf3) popup_note2_window_t4

0xed73,	// (0x000628ae) popup_note2_window_t5_ParamLimits

0xed73,	// (0x000628ae) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x000637b8) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x000637b8) popup_note2_window_t

0xbfe7,	// (0x0005fb22) popup_note2_image_window_g1_ParamLimits

0xbfe7,	// (0x0005fb22) popup_note2_image_window_g1

0xbff3,	// (0x0005fb2e) popup_note2_image_window_g2_ParamLimits

0xbff3,	// (0x0005fb2e) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x000637c3) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x000637c3) popup_note2_image_window_g

0xc005,	// (0x0005fb40) popup_note2_image_window_t1_ParamLimits

0xc005,	// (0x0005fb40) popup_note2_image_window_t1

0xc01d,	// (0x0005fb58) popup_note2_image_window_t2_ParamLimits

0xc01d,	// (0x0005fb58) popup_note2_image_window_t2

0xc035,	// (0x0005fb70) popup_note2_image_window_t3_ParamLimits

0xc035,	// (0x0005fb70) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x000637c8) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x000637c8) popup_note2_image_window_t

0x8fd6,	// (0x0005cb11) popup_note2_wait_window_g1_ParamLimits

0x8fd6,	// (0x0005cb11) popup_note2_wait_window_g1

0xc051,	// (0x0005fb8c) popup_note2_wait_window_g2_ParamLimits

0xc051,	// (0x0005fb8c) popup_note2_wait_window_g2

0x8fee,	// (0x0005cb29) popup_note2_wait_window_g3_ParamLimits

0x8fee,	// (0x0005cb29) popup_note2_wait_window_g3

0x0002,

0xfc94,	// (0x000637cf) popup_note2_wait_window_g_ParamLimits

0xfc94,	// (0x000637cf) popup_note2_wait_window_g

0xc05d,	// (0x0005fb98) popup_note2_wait_window_t1_ParamLimits

0xc05d,	// (0x0005fb98) popup_note2_wait_window_t1

0xc07b,	// (0x0005fbb6) popup_note2_wait_window_t2_ParamLimits

0xc07b,	// (0x0005fbb6) popup_note2_wait_window_t2

0xc099,	// (0x0005fbd4) popup_note2_wait_window_t3_ParamLimits

0xc099,	// (0x0005fbd4) popup_note2_wait_window_t3

0xc0ab,	// (0x0005fbe6) popup_note2_wait_window_t4_ParamLimits

0xc0ab,	// (0x0005fbe6) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x000637d6) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x000637d6) popup_note2_wait_window_t

0xc0bd,	// (0x0005fbf8) wait_bar2_pane_ParamLimits

0xc0bd,	// (0x0005fbf8) wait_bar2_pane

0xc0d5,	// (0x0005fc10) popup_snote2_single_text_window_g1_ParamLimits

0xc0d5,	// (0x0005fc10) popup_snote2_single_text_window_g1

0xc0fd,	// (0x0005fc38) popup_snote2_single_text_window_t1_ParamLimits

0xc0fd,	// (0x0005fc38) popup_snote2_single_text_window_t1

0xc149,	// (0x0005fc84) popup_snote2_single_text_window_t2_ParamLimits

0xc149,	// (0x0005fc84) popup_snote2_single_text_window_t2

0xc195,	// (0x0005fcd0) popup_snote2_single_text_window_t3_ParamLimits

0xc195,	// (0x0005fcd0) popup_snote2_single_text_window_t3

0xc1d6,	// (0x0005fd11) popup_snote2_single_text_window_t4_ParamLimits

0xc1d6,	// (0x0005fd11) popup_snote2_single_text_window_t4

0xc20c,	// (0x0005fd47) popup_snote2_single_text_window_t5_ParamLimits

0xc20c,	// (0x0005fd47) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x000637df) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x000637df) popup_snote2_single_text_window_t

0xc237,	// (0x0005fd72) popup_snote2_single_graphic_window_g1_ParamLimits

0xc237,	// (0x0005fd72) popup_snote2_single_graphic_window_g1

0xc25f,	// (0x0005fd9a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc25f,	// (0x0005fd9a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x000637ea) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x000637ea) popup_snote2_single_graphic_window_g

0xc287,	// (0x0005fdc2) popup_snote2_single_graphic_window_t1_ParamLimits

0xc287,	// (0x0005fdc2) popup_snote2_single_graphic_window_t1

0xc2d3,	// (0x0005fe0e) popup_snote2_single_graphic_window_t2_ParamLimits

0xc2d3,	// (0x0005fe0e) popup_snote2_single_graphic_window_t2

0xc195,	// (0x0005fcd0) popup_snote2_single_graphic_window_t3_ParamLimits

0xc195,	// (0x0005fcd0) popup_snote2_single_graphic_window_t3

0xc1d6,	// (0x0005fd11) popup_snote2_single_graphic_window_t4_ParamLimits

0xc1d6,	// (0x0005fd11) popup_snote2_single_graphic_window_t4

0xc20c,	// (0x0005fd47) popup_snote2_single_graphic_window_t5_ParamLimits

0xc20c,	// (0x0005fd47) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x000637ef) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x000637ef) popup_snote2_single_graphic_window_t

0xac44,	// (0x0005e77f) clock_nsta_pane_cp2_t1

0xac44,	// (0x0005e77f) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x00063603) clock_nsta_pane_cp2_t

0x347d,	// (0x00056fb8) form_field_data_wide_pane_g1_ParamLimits

0xf1df,	// (0x00062d1a) form_field_data_wide_pane_g2_ParamLimits

0xf1df,	// (0x00062d1a) form_field_data_wide_pane_g2

0xf1eb,	// (0x00062d26) form_field_data_wide_pane_g3_ParamLimits

0xf1eb,	// (0x00062d26) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000631c1) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000631c1) form_field_data_wide_pane_g

0xab1d,	// (0x0005e658) grid_touch_3_pane_ParamLimits

0xab1d,	// (0x0005e658) grid_touch_3_pane

0xc31f,	// (0x0005fe5a) cell_touch_3_pane_ParamLimits

0xc31f,	// (0x0005fe5a) cell_touch_3_pane

0xb154,	// (0x0005ec8f) cell_touch_3_pane_g1

0xb154,	// (0x0005ec8f) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x00063688) cell_touch_3_pane_g

0xeda5,	// (0x000628e0) cont_query_data_pane

0xedad,	// (0x000628e8) cont_query_data_pane_cp1

0xc352,	// (0x0005fe8d) button_value_adjust_pane_cp7

0xc35a,	// (0x0005fe95) query_popup_pane_cp3

0x3512,	// (0x0005704d) bg_popup_sub_pane_cp22_ParamLimits

0x6039,	// (0x00059b74) navi_navi_volume_pane_cp2

0x6054,	// (0x00059b8f) popup_side_volume_key_window_g2

0x6063,	// (0x00059b9e) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00063257) popup_side_volume_key_window_g

0x6080,	// (0x00059bbb) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0006325e) popup_side_volume_key_window_t

0x371d,	// (0x00057258) popup_side_volume_key_window_ParamLimits

0x5766,	// (0x000592a1) list_double_graphic_pane_g4_ParamLimits

0x5766,	// (0x000592a1) list_double_graphic_pane_g4

0xa110,	// (0x0005dc4b) list_single_2heading_msg_pane_ParamLimits

0xa110,	// (0x0005dc4b) list_single_2heading_msg_pane

0x9a83,	// (0x0005d5be) list_single_2heading_msg_pane_g1_ParamLimits

0x9a83,	// (0x0005d5be) list_single_2heading_msg_pane_g1

0x1e20,	// (0x0005595b) list_single_2heading_msg_pane_g2_ParamLimits

0x1e20,	// (0x0005595b) list_single_2heading_msg_pane_g2

0x9a8f,	// (0x0005d5ca) list_single_2heading_msg_pane_g3_ParamLimits

0x9a8f,	// (0x0005d5ca) list_single_2heading_msg_pane_g3

0x9a9b,	// (0x0005d5d6) list_single_2heading_msg_pane_g4_ParamLimits

0x9a9b,	// (0x0005d5d6) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x000637fa) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x000637fa) list_single_2heading_msg_pane_g

0x71ad,	// (0x0005ace8) list_single_2heading_msg_pane_t1_ParamLimits

0x71ad,	// (0x0005ace8) list_single_2heading_msg_pane_t1

0x71d5,	// (0x0005ad10) list_single_2heading_msg_pane_t2_ParamLimits

0x71d5,	// (0x0005ad10) list_single_2heading_msg_pane_t2

0x7204,	// (0x0005ad3f) list_single_2heading_msg_pane_t3_ParamLimits

0x7204,	// (0x0005ad3f) list_single_2heading_msg_pane_t3

0x4070,	// (0x00057bab) list_single_2heading_msg_pane_t4_ParamLimits

0x4070,	// (0x00057bab) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x00063803) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x00063803) list_single_2heading_msg_pane_t

0xb93b,	// (0x0005f476) title_pane_g4_ParamLimits

0xb93b,	// (0x0005f476) title_pane_g4

0x5cd0,	// (0x0005980b) title_pane_stacon_g3_ParamLimits

0x5cd0,	// (0x0005980b) title_pane_stacon_g3

0xbe7b,	// (0x0005f9b6) list_single_2graphic_im_pane_g4_ParamLimits

0xbe7b,	// (0x0005f9b6) list_single_2graphic_im_pane_g4

0x9bd8,	// (0x0005d713) popup_side_volume_key_window_cp

0xa438,	// (0x0005df73) main_idle_act2_pane_t1

0x683d,	// (0x0005a378) toolbar_button_pane_g10

0x5550,	// (0x0005908b) popup_toolbar_window_cp1

0xac35,	// (0x0005e770) clock_nsta_pane_cp_t1

0xac35,	// (0x0005e770) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x000635fe) clock_nsta_pane_cp_t

0x6039,	// (0x00059b74) navi_navi_volume_pane_cp2_ParamLimits

0x6048,	// (0x00059b83) popup_side_volume_key_window_g1_ParamLimits

0x6054,	// (0x00059b8f) popup_side_volume_key_window_g2_ParamLimits

0x6063,	// (0x00059b9e) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00063257) popup_side_volume_key_window_g_ParamLimits

0x6d71,	// (0x0005a8ac) fep_hwr_aid_pane

0x6e1a,	// (0x0005a955) bg_fep_hwr_top_pane_g4_ParamLimits

0xb1b5,	// (0x0005ecf0) fep_hwr_top_pane_g1_ParamLimits

0xb1c7,	// (0x0005ed02) fep_hwr_top_pane_g2_ParamLimits

0x6e3a,	// (0x0005a975) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00063653) fep_hwr_top_pane_g_ParamLimits

0x6e4f,	// (0x0005a98a) fep_hwr_top_text_pane_ParamLimits

0x97ed,	// (0x0005d328) aid_touch_tab_arrow_arrow_2

0x97f6,	// (0x0005d331) aid_touch_tab_arrow_left_2

0x6d85,	// (0x0005a8c0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6dbc,	// (0x0005a8f7) fep_hwr_prediction_pane

0xb31d,	// (0x0005ee58) fep_vkb_prediction_pane

0xb423,	// (0x0005ef5e) fep_vkb_side_pane_g3_ParamLimits

0xb423,	// (0x0005ef5e) fep_vkb_side_pane_g3

0x6fde,	// (0x0005ab19) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x704f,	// (0x0005ab8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x705c,	// (0x0005ab97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00063702) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x723d,	// (0x0005ad78) fep_hwr_prediction_pane_g1

0x7247,	// (0x0005ad82) fep_hwr_prediction_pane_g2

0x724f,	// (0x0005ad8a) fep_hwr_prediction_pane_g3

0x7257,	// (0x0005ad92) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x0006380c) fep_hwr_prediction_pane_g

0xc381,	// (0x0005febc) fep_vkb_prediction_pane_g1

0xc38b,	// (0x0005fec6) fep_vkb_prediction_pane_g2

0xc393,	// (0x0005fece) fep_vkb_prediction_pane_g3

0xc39b,	// (0x0005fed6) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00063815) fep_vkb_prediction_pane_g

0x6ba5,	// (0x0005a6e0) slider_set_pane_g3

0x6bb9,	// (0x0005a6f4) slider_set_pane_g4

0x6bd1,	// (0x0005a70c) slider_set_pane_g5

0x6ba5,	// (0x0005a6e0) slider_set_pane_g6

0x6be7,	// (0x0005a722) slider_set_pane_g7

0xa07a,	// (0x0005dbb5) slider_form_pane_g3

0xa083,	// (0x0005dbbe) slider_form_pane_g4

0xa08b,	// (0x0005dbc6) slider_form_pane_g5

0xa07a,	// (0x0005dbb5) slider_form_pane_g6

0xa093,	// (0x0005dbce) slider_form_pane_g7

0xa6ef,	// (0x0005e22a) slider_set_pane_vc_g3

0xa6f8,	// (0x0005e233) slider_set_pane_vc_g4

0xa701,	// (0x0005e23c) slider_set_pane_vc_g5

0xa6ef,	// (0x0005e22a) slider_set_pane_vc_g6

0xa70a,	// (0x0005e245) slider_set_pane_vc_g7

0xa8e2,	// (0x0005e41d) slider_form_pane_vc_g1

0xa8eb,	// (0x0005e426) slider_form_pane_vc_g2

0xa8f4,	// (0x0005e42f) slider_form_pane_vc_g3

0xa8e2,	// (0x0005e41d) slider_form_pane_vc_g4

0xa8fd,	// (0x0005e438) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x000635d0) slider_form_pane_vc_g

0xb911,	// (0x0005f44c) main_idle_act3_pane

0xc3a3,	// (0x0005fede) ai3_links_pane

0xc3ac,	// (0x0005fee7) popup_ai3_data_window_ParamLimits

0xc3ac,	// (0x0005fee7) popup_ai3_data_window

0xb911,	// (0x0005f44c) grid_ai3_links_pane

0xc3ca,	// (0x0005ff05) cell_ai3_links_pane_ParamLimits

0xc3ca,	// (0x0005ff05) cell_ai3_links_pane

0xc3e4,	// (0x0005ff1f) bg_popup_sub_pane_cp11

0xc3f1,	// (0x0005ff2c) cell_ai3_links_pane_g1

0xb911,	// (0x0005f44c) bg_popup_sub_pane_cp12

0xc416,	// (0x0005ff51) heading_ai3_data_pane

0xc41e,	// (0x0005ff59) list_ai3_gene_pane

0xc42a,	// (0x0005ff65) popup_ai3_data_window_g1

0xc432,	// (0x0005ff6d) heading_ai3_data_pane_g1

0xc43a,	// (0x0005ff75) heading_ai3_data_pane_t1

0xc448,	// (0x0005ff83) list_double_ai3_gene_pane_ParamLimits

0xc448,	// (0x0005ff83) list_double_ai3_gene_pane

0xc455,	// (0x0005ff90) list_single_ai3_gene_pane_ParamLimits

0xc455,	// (0x0005ff90) list_single_ai3_gene_pane

0xb119,	// (0x0005ec54) list_highlight_pane_cp7_ParamLimits

0xb119,	// (0x0005ec54) list_highlight_pane_cp7

0xc462,	// (0x0005ff9d) list_single_a13_gene_pane_t1_ParamLimits

0xc462,	// (0x0005ff9d) list_single_a13_gene_pane_t1

0xc479,	// (0x0005ffb4) list_single_ai3_gene_pane_g1

0xc482,	// (0x0005ffbd) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x0006381e) list_single_ai3_gene_pane_g

0xc48a,	// (0x0005ffc5) list_double_ai3_gene_pane_g1_ParamLimits

0xc48a,	// (0x0005ffc5) list_double_ai3_gene_pane_g1

0xc496,	// (0x0005ffd1) list_double_ai3_gene_pane_t1_ParamLimits

0xc496,	// (0x0005ffd1) list_double_ai3_gene_pane_t1

0xc4b2,	// (0x0005ffed) list_double_ai3_gene_pane_t2_ParamLimits

0xc4b2,	// (0x0005ffed) list_double_ai3_gene_pane_t2

0xc4c7,	// (0x00060002) list_double_ai3_gene_pane_t3_ParamLimits

0xc4c7,	// (0x00060002) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00063823) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00063823) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4066,	// (0x00057ba1) aid_size_min_col_2

0xc36b,	// (0x0005fea6) aid_size_min_msg_ParamLimits

0xc36b,	// (0x0005fea6) aid_size_min_msg

0xb52f,	// (0x0005f06a) fep_vkb_top_text_pane_g2_ParamLimits

0xb52f,	// (0x0005f06a) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00063683) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00063683) fep_vkb_top_text_pane_g

0xb911,	// (0x0005f44c) main_hc_apps_shell_pane

0xc4e4,	// (0x0006001f) grid_hc_apps_pane_ParamLimits

0xc4e4,	// (0x0006001f) grid_hc_apps_pane

0xc4f3,	// (0x0006002e) list_hc_apps_pane

0xc4fb,	// (0x00060036) scroll_pane_cp37_ParamLimits

0xc4fb,	// (0x00060036) scroll_pane_cp37

0xc507,	// (0x00060042) cell_hc_apps_pane_ParamLimits

0xc507,	// (0x00060042) cell_hc_apps_pane

0xc5bf,	// (0x000600fa) cell_hc_apps_pane_g1_ParamLimits

0xc5bf,	// (0x000600fa) cell_hc_apps_pane_g1

0xc5f0,	// (0x0006012b) cell_hc_apps_pane_g2_ParamLimits

0xc5f0,	// (0x0006012b) cell_hc_apps_pane_g2

0xc60c,	// (0x00060147) cell_hc_apps_pane_g3_ParamLimits

0xc60c,	// (0x00060147) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x0006382a) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x0006382a) cell_hc_apps_pane_g

0xc62e,	// (0x00060169) cell_hc_apps_pane_t1_ParamLimits

0xc62e,	// (0x00060169) cell_hc_apps_pane_t1

0xecef,	// (0x0006282a) grid_highlight_pane_cp10_ParamLimits

0xecef,	// (0x0006282a) grid_highlight_pane_cp10

0xc66e,	// (0x000601a9) list_single_hc_apps_pane_ParamLimits

0xc66e,	// (0x000601a9) list_single_hc_apps_pane

0xc6ad,	// (0x000601e8) list_single_hc_apps_pane_g1

0x9ab3,	// (0x0005d5ee) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x00063831) list_single_hc_apps_pane_g

0x9acc,	// (0x0005d607) list_single_hc_apps_pane_g2_copy1

0x725f,	// (0x0005ad9a) list_single_hc_apps_pane_t1

0xebbc,	// (0x000626f7) bg_set_opt_pane_cp_ParamLimits

0x52a1,	// (0x00058ddc) setting_slider_pane_t1_ParamLimits

0x52ba,	// (0x00058df5) setting_slider_pane_t2_ParamLimits

0x52d4,	// (0x00058e0f) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0006309f) setting_slider_pane_t_ParamLimits

0x52ec,	// (0x00058e27) slider_set_pane_ParamLimits

0x6719,	// (0x0005a254) control_pane_g5_ParamLimits

0x6719,	// (0x0005a254) control_pane_g5

0x9ea7,	// (0x0005d9e2) slider_set_pane_g1_ParamLimits

0x6b99,	// (0x0005a6d4) slider_set_pane_g2_ParamLimits

0x6ba5,	// (0x0005a6e0) slider_set_pane_g3_ParamLimits

0x6bb9,	// (0x0005a6f4) slider_set_pane_g4_ParamLimits

0x6bd1,	// (0x0005a70c) slider_set_pane_g5_ParamLimits

0x6ba5,	// (0x0005a6e0) slider_set_pane_g6_ParamLimits

0x6be7,	// (0x0005a722) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x000634aa) slider_set_pane_g_ParamLimits

0x37c5,	// (0x00057300) navi_icon_text_pane_ParamLimits

0x8484,	// (0x0005bfbf) aid_fill_nsta_2_ParamLimits

0x84c5,	// (0x0005c000) aid_touch_tab_arrow_left_ParamLimits

0x84d4,	// (0x0005c00f) aid_touch_tab_arrow_right_ParamLimits

0x8541,	// (0x0005c07c) clock_nsta_pane_ParamLimits

0x97cf,	// (0x0005d30a) navi_icon_pane_g1_ParamLimits

0x97db,	// (0x0005d316) navi_text_pane_t1_ParamLimits

0xad52,	// (0x0005e88d) navi_icon_text_pane_g1_ParamLimits

0xad5e,	// (0x0005e899) navi_icon_text_pane_t1_ParamLimits

0xc6ad,	// (0x000601e8) list_single_hc_apps_pane_g1_ParamLimits

0x9ab3,	// (0x0005d5ee) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x00063831) list_single_hc_apps_pane_g_ParamLimits

0x9acc,	// (0x0005d607) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x725f,	// (0x0005ad9a) list_single_hc_apps_pane_t1_ParamLimits

0x50f1,	// (0x00058c2c) popup_toolbar2_fixed_window_ParamLimits

0x50f1,	// (0x00058c2c) popup_toolbar2_fixed_window

0x8388,	// (0x0005bec3) popup_toolbar2_float_window

0xb911,	// (0x0005f44c) bg_popup_sub_pane_cp27

0xc6c6,	// (0x00060201) grid_toolbar2_float_pane

0xb911,	// (0x0005f44c) bg_popup_sub_pane_cp26

0xc6c6,	// (0x00060201) grid_toolbar2_fixed_pane

0xc6ce,	// (0x00060209) cell_toolbar2_fixed_pane_ParamLimits

0xc6ce,	// (0x00060209) cell_toolbar2_fixed_pane

0xc6de,	// (0x00060219) cell_toolbar2_fixed_pane_g1

0xc6e7,	// (0x00060222) toolbar2_fixed_button_pane

0x8978,	// (0x0005c4b3) toolbar2_fixed_button_pane_g1

0x8988,	// (0x0005c4c3) toolbar2_fixed_button_pane_g2

0x8980,	// (0x0005c4bb) toolbar2_fixed_button_pane_g3

0x8998,	// (0x0005c4d3) toolbar2_fixed_button_pane_g4

0x8990,	// (0x0005c4cb) toolbar2_fixed_button_pane_g5

0x89a0,	// (0x0005c4db) toolbar2_fixed_button_pane_g6

0x89a8,	// (0x0005c4e3) toolbar2_fixed_button_pane_g7

0x89b8,	// (0x0005c4f3) toolbar2_fixed_button_pane_g8

0x89b0,	// (0x0005c4eb) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x000633ac) toolbar2_fixed_button_pane_g

0xc6ef,	// (0x0006022a) cell_toolbar2_float_pane_ParamLimits

0xc6ef,	// (0x0006022a) cell_toolbar2_float_pane

0xc700,	// (0x0006023b) cell_toolbar2_float_pane_g1

0xc6e7,	// (0x00060222) toolbar2_fixed_button_pane_cp

0xb28b,	// (0x0005edc6) fep_vkb_accented_list_pane_ParamLimits

0xb28b,	// (0x0005edc6) fep_vkb_accented_list_pane

0x6fbe,	// (0x0005aaf9) bg_popup_fep_shadow_pane_g9

0x642c,	// (0x00059f67) bg_popup_fep_shadow_pane_cp3

0xf2e4,	// (0x00062e1f) list_accented_list_pane

0xc709,	// (0x00060244) list_single_accented_list_pane_ParamLimits

0xc709,	// (0x00060244) list_single_accented_list_pane

0x642c,	// (0x00059f67) list_highlight_pane_cp10

0xc71a,	// (0x00060255) list_single_accented_list_pane_t1

0x82ce,	// (0x0005be09) popup_slider_window_ParamLimits

0x82ce,	// (0x0005be09) popup_slider_window

0xc362,	// (0x0005fe9d) aid_indentation_list_msg

0xc7e6,	// (0x00060321) bg_popup_window_pane_cp19

0xc854,	// (0x0006038f) popup_slider_window_g1

0xc870,	// (0x000603ab) popup_slider_window_g2

0xc88c,	// (0x000603c7) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x00063836) popup_slider_window_g

0xc8e8,	// (0x00060423) popup_slider_window_t1

0xc95c,	// (0x00060497) small_volume_slider_vertical_pane

0xb154,	// (0x0005ec8f) small_volume_slider_vertical_pane_g1

0xb154,	// (0x0005ec8f) small_volume_slider_vertical_pane_g2

0xc978,	// (0x000604b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x00063848) small_volume_slider_vertical_pane_g

0x4e9f,	// (0x000589da) area_side_right_pane_ParamLimits

0x4e9f,	// (0x000589da) area_side_right_pane

0x728d,	// (0x0005adc8) aid_size_side_button_ParamLimits

0x728d,	// (0x0005adc8) aid_size_side_button

0x72a1,	// (0x0005addc) grid_sctrl_middle_pane_ParamLimits

0x72a1,	// (0x0005addc) grid_sctrl_middle_pane

0x72c1,	// (0x0005adfc) sctrl_sk_bottom_pane

0x72d2,	// (0x0005ae0d) sctrl_sk_top_pane

0x72e4,	// (0x0005ae1f) aid_touch_sctrl_top

0x72f1,	// (0x0005ae2c) bg_sctrl_sk_pane_ParamLimits

0x72f1,	// (0x0005ae2c) bg_sctrl_sk_pane

0x72ff,	// (0x0005ae3a) sctrl_sk_top_pane_g1

0x730c,	// (0x0005ae47) sctrl_sk_top_pane_t1

0x72e4,	// (0x0005ae1f) aid_touch_sctrl_bottom

0x72f1,	// (0x0005ae2c) bg_sctrl_sk_pane_cp_ParamLimits

0x72f1,	// (0x0005ae2c) bg_sctrl_sk_pane_cp

0x7327,	// (0x0005ae62) sctrl_sk_bottom_pane_g1

0x730c,	// (0x0005ae47) sctrl_sk_bottom_pane_t1

0x7330,	// (0x0005ae6b) cell_sctrl_middle_pane_ParamLimits

0x7330,	// (0x0005ae6b) cell_sctrl_middle_pane

0x734d,	// (0x0005ae88) aid_touch_sctrl_middle_ParamLimits

0x734d,	// (0x0005ae88) aid_touch_sctrl_middle

0x735f,	// (0x0005ae9a) bg_sctrl_middle_pane_ParamLimits

0x735f,	// (0x0005ae9a) bg_sctrl_middle_pane

0x6fde,	// (0x0005ab19) cell_sctrl_middle_pane_g1_ParamLimits

0x6fde,	// (0x0005ab19) cell_sctrl_middle_pane_g1

0x736d,	// (0x0005aea8) cell_sctrl_middle_pane_g2_ParamLimits

0x736d,	// (0x0005aea8) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x00063854) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x00063854) cell_sctrl_middle_pane_g

0x8978,	// (0x0005c4b3) bg_sctrl_middle_pane_g1

0x8980,	// (0x0005c4bb) bg_sctrl_middle_pane_g2

0x8988,	// (0x0005c4c3) bg_sctrl_middle_pane_g3

0x8990,	// (0x0005c4cb) bg_sctrl_middle_pane_g4

0x8998,	// (0x0005c4d3) bg_sctrl_middle_pane_g5

0x89a0,	// (0x0005c4db) bg_sctrl_middle_pane_g6

0x89a8,	// (0x0005c4e3) bg_sctrl_middle_pane_g7

0x89b0,	// (0x0005c4eb) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x00063859) bg_sctrl_middle_pane_g

0x89b8,	// (0x0005c4f3) bg_sctrl_middle_pane_g8_copy1

0x8978,	// (0x0005c4b3) bg_sctrl_sk_pane_g1

0x8988,	// (0x0005c4c3) bg_sctrl_sk_pane_g2

0x8980,	// (0x0005c4bb) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x000633ac) bg_sctrl_sk_pane_g

0xf10a,	// (0x00062c45) aid_size_touch_scroll_bar

0x8998,	// (0x0005c4d3) bg_sctrl_sk_pane_g4

0x8990,	// (0x0005c4cb) bg_sctrl_sk_pane_g5

0x89a0,	// (0x0005c4db) bg_sctrl_sk_pane_g6

0x89a8,	// (0x0005c4e3) bg_sctrl_sk_pane_g7

0x89b8,	// (0x0005c4f3) bg_sctrl_sk_pane_g8

0x89b0,	// (0x0005c4eb) bg_sctrl_sk_pane_g9

0x7ee5,	// (0x0005ba20) popup_fep_china_hwr2_fs_candidate_window

0x7eef,	// (0x0005ba2a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7eef,	// (0x0005ba2a) popup_fep_china_hwr2_fs_control_window

0x6fde,	// (0x0005ab19) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x0006384f) sctrl_sk_top_pane_g

0xc981,	// (0x000604bc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc981,	// (0x000604bc) aid_fep_china_hwr2_fs_cell

0xc994,	// (0x000604cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc994,	// (0x000604cf) bg_popup_fep_shadow_pane_cp4

0xc9ad,	// (0x000604e8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc9ad,	// (0x000604e8) bg_popup_fep_shadow_pane_cp5

0xc9bf,	// (0x000604fa) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc9bf,	// (0x000604fa) popup_fep_china_hwr2_fs_control_bar_grid

0xc9cf,	// (0x0006050a) popup_fep_china_hwr2_fs_control_funtion_grid

0xc9d7,	// (0x00060512) aid_fep_china_hwr2_fs_candi_cell

0xb911,	// (0x0005f44c) bg_popup_fep_shadow_pane_cp6

0xc9e1,	// (0x0006051c) popup_fep_china_hwr2_fs_candidate_grid

0xc9eb,	// (0x00060526) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc9eb,	// (0x00060526) cell_fep_china_hwr2_fs_funtion_grid

0xb154,	// (0x0005ec8f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xca03,	// (0x0006053e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xca03,	// (0x0006053e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xca11,	// (0x0006054c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xca11,	// (0x0006054c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x0006386a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x0006386a) cell_fep_china_hwr2_fs_funtion_grid_g

0xca27,	// (0x00060562) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca27,	// (0x00060562) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca3c,	// (0x00060577) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca3c,	// (0x00060577) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x0006386f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x0006386f) cell_fep_china_hwr2_fs_funtion_grid_t

0xca58,	// (0x00060593) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xca60,	// (0x0006059b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xca68,	// (0x000605a3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x00063874) popup_fep_china_hwr2_fs_control_bar_grid_g

0xca70,	// (0x000605ab) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xca70,	// (0x000605ab) cell_fep_china_hwr2_fs_candidate_grid

0xca8f,	// (0x000605ca) popup_fep_china_hwr2_fs_candidate_grid_g20

0xca97,	// (0x000605d2) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb154,	// (0x0005ec8f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb154,	// (0x0005ec8f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x00063688) cell_fep_china_hwr2_fs_candidate_grid_g

0xca9f,	// (0x000605da) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8554,	// (0x0005c08f) clock_nsta_pane_cp_24_ParamLimits

0x8554,	// (0x0005c08f) clock_nsta_pane_cp_24

0x85d4,	// (0x0005c10f) indicator_nsta_pane_cp_24_ParamLimits

0x85d4,	// (0x0005c10f) indicator_nsta_pane_cp_24

0x964b,	// (0x0005d186) heading_pane_g1

0x0001,

0xf8d6,	// (0x00063411) heading_pane_g

0xa27f,	// (0x0005ddba) grid_sct_catagory_button_pane

0xa2b1,	// (0x0005ddec) scroll_pane_cp5_ParamLimits

0xada0,	// (0x0005e8db) button_value_adjust_pane_cp5_ParamLimits

0xada0,	// (0x0005e8db) button_value_adjust_pane_cp5

0xae85,	// (0x0005e9c0) form2_midp_time_pane_ParamLimits

0xcaad,	// (0x000605e8) cell_sct_catagory_button_pane_ParamLimits

0xcaad,	// (0x000605e8) cell_sct_catagory_button_pane

0xb119,	// (0x0005ec54) bg_button_pane_cp01_ParamLimits

0xb119,	// (0x0005ec54) bg_button_pane_cp01

0xb154,	// (0x0005ec8f) cell_sct_catagory_button_pane_g1

0x830f,	// (0x0005be4a) popup_tb_extension_window

0xcabf,	// (0x000605fa) aid_size_cell_ext_ParamLimits

0xcabf,	// (0x000605fa) aid_size_cell_ext

0xecef,	// (0x0006282a) bg_tb_trans_pane_cp1_ParamLimits

0xecef,	// (0x0006282a) bg_tb_trans_pane_cp1

0xcadf,	// (0x0006061a) grid_tb_ext_pane_ParamLimits

0xcadf,	// (0x0006061a) grid_tb_ext_pane

0xcb0f,	// (0x0006064a) cell_tb_ext_pane_ParamLimits

0xcb0f,	// (0x0006064a) cell_tb_ext_pane

0xcb26,	// (0x00060661) cell_tb_ext_pane_g1_ParamLimits

0xcb26,	// (0x00060661) cell_tb_ext_pane_g1

0xcb43,	// (0x0006067e) cell_tb_ext_pane_t1

0xecef,	// (0x0006282a) list_highlight_pane_cp11_ParamLimits

0xecef,	// (0x0006282a) list_highlight_pane_cp11

0x5110,	// (0x00058c4b) popup_uni_indicator_window_ParamLimits

0x5110,	// (0x00058c4b) popup_uni_indicator_window

0xf1d1,	// (0x00062d0c) bg_popup_sub_pane_cp14

0xcb5e,	// (0x00060699) list_uniindi_pane

0xcb6a,	// (0x000606a5) uniindi_top_pane

0xecef,	// (0x0006282a) bg_uniindi_top_pane

0xcb8b,	// (0x000606c6) uniindi_top_pane_g1

0xcba1,	// (0x000606dc) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x0006387b) uniindi_top_pane_g

0xcbcb,	// (0x00060706) uniindi_top_pane_t1

0xcbf7,	// (0x00060732) list_single_uniindi_pane_ParamLimits

0xcbf7,	// (0x00060732) list_single_uniindi_pane

0xb154,	// (0x0005ec8f) bg_uniindi_top_pane_g1

0xcc09,	// (0x00060744) list_single_uniindi_pane_g1

0xcc1c,	// (0x00060757) list_single_uniindi_pane_t1

0x4f7c,	// (0x00058ab7) control_bg_pane

0xcc41,	// (0x0006077c) bg_sctrl_sk_pane_cp1

0xcc4a,	// (0x00060785) bg_sctrl_sk_pane_cp2

0xcc53,	// (0x0006078e) control_bg_pane_g1

0xcc5c,	// (0x00060797) control_bg_pane_g2

0x0001,

0xfd49,	// (0x00063884) control_bg_pane_g

0xabc7,	// (0x0005e702) cell_indicator_nsta_pane_g1_ParamLimits

0xabd5,	// (0x0005e710) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x000635ec) cell_indicator_nsta_pane_g_ParamLimits

0x3ee9,	// (0x00057a24) form2_midp_time_pane_t1_ParamLimits

0xef4c,	// (0x00062a87) main_idle_act4_pane_ParamLimits

0xef4c,	// (0x00062a87) main_idle_act4_pane

0x830f,	// (0x0005be4a) popup_tb_extension_window_ParamLimits

0xcb01,	// (0x0006063c) tb_ext_find_pane_ParamLimits

0xcb01,	// (0x0006063c) tb_ext_find_pane

0xcc65,	// (0x000607a0) ai_gene_pane_1_cp1

0x6569,	// (0x0005a0a4) ai_gene_pane_2_cp1

0xcc6d,	// (0x000607a8) list_single_idle_plugin_calendar_pane

0xcc76,	// (0x000607b1) list_single_idle_plugin_notification_pane

0xcc7f,	// (0x000607ba) list_single_idle_plugin_player_pane

0xcc88,	// (0x000607c3) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcc88,	// (0x000607c3) list_single_idle_plugin_shortcut_pane

0xccaa,	// (0x000607e5) main_idle_act4_pane_t1

0xccbc,	// (0x000607f7) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x00063889) main_idle_act4_pane_t

0xccce,	// (0x00060809) middle_sk_idle_act4_pane_ParamLimits

0xccce,	// (0x00060809) middle_sk_idle_act4_pane

0xcce4,	// (0x0006081f) popup_clock_digital_analogue_window_cp2

0xccfe,	// (0x00060839) shortcut_wheel_idle_act4_pane_ParamLimits

0xccfe,	// (0x00060839) shortcut_wheel_idle_act4_pane

0xb154,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g1

0xb154,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g2

0xb154,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g3

0xb154,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g4

0xb154,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g5

0xcd12,	// (0x0006084d) shortcut_wheel_idle_act4_pane_g6

0xcd1a,	// (0x00060855) shortcut_wheel_idle_act4_pane_g7

0xcd22,	// (0x0006085d) shortcut_wheel_idle_act4_pane_g8

0xcd2a,	// (0x00060865) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x0006388e) shortcut_wheel_idle_act4_pane_g

0xb3cf,	// (0x0005ef0a) middle_sk_idle_act4_pane_g1_ParamLimits

0xb3cf,	// (0x0005ef0a) middle_sk_idle_act4_pane_g1

0xcd8e,	// (0x000608c9) middle_sk_idle_act4_pane_g2_ParamLimits

0xcd8e,	// (0x000608c9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x000638b1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x000638b1) middle_sk_idle_act4_pane_g

0xcd9a,	// (0x000608d5) middle_sk_idle_act4_pane_t1_ParamLimits

0xcd9a,	// (0x000608d5) middle_sk_idle_act4_pane_t1

0xcdb7,	// (0x000608f2) grid_ai_shortcut_pane_ParamLimits

0xcdb7,	// (0x000608f2) grid_ai_shortcut_pane

0xcdd0,	// (0x0006090b) list_highlight_pane_cp16_ParamLimits

0xcdd0,	// (0x0006090b) list_highlight_pane_cp16

0xcddd,	// (0x00060918) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcddd,	// (0x00060918) list_single_idle_plugin_shortcut_pane_g1

0xcde9,	// (0x00060924) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcde9,	// (0x00060924) list_single_idle_plugin_shortcut_pane_g2

0xce03,	// (0x0006093e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xce03,	// (0x0006093e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x000638b6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x000638b6) list_single_idle_plugin_shortcut_pane_g

0xce16,	// (0x00060951) cell_ai_shortcut_pane_ParamLimits

0xce16,	// (0x00060951) cell_ai_shortcut_pane

0xce39,	// (0x00060974) cell_ai_shortcut_pane_g1_ParamLimits

0xce39,	// (0x00060974) cell_ai_shortcut_pane_g1

0xcc65,	// (0x000607a0) ai_gene_pane_1_cp2

0xce5b,	// (0x00060996) ai_gene_pane_2_cp2

0xce63,	// (0x0006099e) list_highlight_pane_cp15

0xce6c,	// (0x000609a7) list_single_idle_plugin_calendar_pane_g1

0xce63,	// (0x0006099e) list_highlight_pane_cp17

0xce74,	// (0x000609af) list_single_idle_plugin_calendar_pane_g1_copy1

0xce7c,	// (0x000609b7) list_single_idle_plugin_player_pane_g1

0xa4e6,	// (0x0005e021) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x000638bd) list_single_idle_plugin_player_pane_g

0xce84,	// (0x000609bf) list_single_idle_plugin_player_pane_t1

0xce92,	// (0x000609cd) list_single_idle_plugin_player_pane_t2

0xcea0,	// (0x000609db) list_single_idle_plugin_player_pane_t3

0xceae,	// (0x000609e9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x000638c2) list_single_idle_plugin_player_pane_t

0xcebc,	// (0x000609f7) wait_bar_pane_cp15

0xcec4,	// (0x000609ff) grid_ai_notification_pane

0xa4e6,	// (0x0005e021) list_single_idle_plugin_notification_pane_g1

0xcecd,	// (0x00060a08) cell_ai_notification_pane_ParamLimits

0xcecd,	// (0x00060a08) cell_ai_notification_pane

0xceda,	// (0x00060a15) cell_ai_notification_pane_g1

0xcee2,	// (0x00060a1d) cell_ai_notification_pane_t1

0xcef0,	// (0x00060a2b) tb_ext_find_button_pane

0xcef8,	// (0x00060a33) tb_ext_find_pane_g1

0xcf00,	// (0x00060a3b) tb_ext_find_pane_t1

0x1350,	// (0x00054e8b) tb_ext_find_button_pane_g1

0xcf0e,	// (0x00060a49) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x000638cb) tb_ext_find_button_pane_g

0xccaa,	// (0x000607e5) main_idle_act4_pane_t1_ParamLimits

0xccbc,	// (0x000607f7) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x00063889) main_idle_act4_pane_t_ParamLimits

0xcce4,	// (0x0006081f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xccf2,	// (0x0006082d) sat_plugin_idle_act4_pane_ParamLimits

0xccf2,	// (0x0006082d) sat_plugin_idle_act4_pane

0xcf17,	// (0x00060a52) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcf17,	// (0x00060a52) sat_plugin_idle_act4_pane_t1

0xcf2a,	// (0x00060a65) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcf2a,	// (0x00060a65) sat_plugin_idle_act4_pane_t2

0xcf3d,	// (0x00060a78) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcf3d,	// (0x00060a78) sat_plugin_idle_act4_pane_t3

0xcf50,	// (0x00060a8b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcf50,	// (0x00060a8b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x000638d0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x000638d0) sat_plugin_idle_act4_pane_t

0x5041,	// (0x00058b7c) popup_battery_window_ParamLimits

0x5041,	// (0x00058b7c) popup_battery_window

0xecef,	// (0x0006282a) bg_popup_sub_pane_cp25_ParamLimits

0xecef,	// (0x0006282a) bg_popup_sub_pane_cp25

0xcf63,	// (0x00060a9e) popup_battery_window_g1_ParamLimits

0xcf63,	// (0x00060a9e) popup_battery_window_g1

0xcf6f,	// (0x00060aaa) popup_battery_window_t1_ParamLimits

0xcf6f,	// (0x00060aaa) popup_battery_window_t1

0xcf81,	// (0x00060abc) popup_battery_window_t2_ParamLimits

0xcf81,	// (0x00060abc) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x000638d9) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x000638d9) popup_battery_window_t

0x6434,	// (0x00059f6f) midp_canvas_pane_ParamLimits

0x64ab,	// (0x00059fe6) midp_keypad_pane_ParamLimits

0x64ab,	// (0x00059fe6) midp_keypad_pane

0x7e37,	// (0x0005b972) main_midp_pane_ParamLimits

0xac53,	// (0x0005e78e) signal_pane_g2_cp_ParamLimits

0xcf9e,	// (0x00060ad9) aid_size_cell_midp_keypad_ParamLimits

0xcf9e,	// (0x00060ad9) aid_size_cell_midp_keypad

0xcfb8,	// (0x00060af3) midp_keyp_game_grid_pane_ParamLimits

0xcfb8,	// (0x00060af3) midp_keyp_game_grid_pane

0xcfd8,	// (0x00060b13) midp_keyp_rocker_pane_ParamLimits

0xcfd8,	// (0x00060b13) midp_keyp_rocker_pane

0xd003,	// (0x00060b3e) midp_keyp_sk_left_pane_ParamLimits

0xd003,	// (0x00060b3e) midp_keyp_sk_left_pane

0xd05d,	// (0x00060b98) midp_keyp_sk_right_pane_ParamLimits

0xd05d,	// (0x00060b98) midp_keyp_sk_right_pane

0xb911,	// (0x0005f44c) bg_button_pane_cp03

0xd0b7,	// (0x00060bf2) midp_keyp_sk_left_pane_g1

0xb911,	// (0x0005f44c) bg_button_pane_cp04

0xd0b7,	// (0x00060bf2) midp_keyp_sk_right_pane_g1

0xb154,	// (0x0005ec8f) midp_keyp_rocker_pane_g1

0xd0c0,	// (0x00060bfb) keyp_game_cell_pane_ParamLimits

0xd0c0,	// (0x00060bfb) keyp_game_cell_pane

0xb911,	// (0x0005f44c) bg_button_pane_cp02

0xd0d3,	// (0x00060c0e) keyp_game_cell_pane_g1

0x508b,	// (0x00058bc6) popup_fep_vkb2_window_ParamLimits

0x508b,	// (0x00058bc6) popup_fep_vkb2_window

0x738b,	// (0x0005aec6) aid_size_cell_vkb2_ParamLimits

0x738b,	// (0x0005aec6) aid_size_cell_vkb2

0x73df,	// (0x0005af1a) popup_fep_vkb2_window_g1_ParamLimits

0x73df,	// (0x0005af1a) popup_fep_vkb2_window_g1

0x7427,	// (0x0005af62) vkb2_area_bottom_pane_ParamLimits

0x7427,	// (0x0005af62) vkb2_area_bottom_pane

0x747b,	// (0x0005afb6) vkb2_area_keypad_pane_ParamLimits

0x747b,	// (0x0005afb6) vkb2_area_keypad_pane

0x74c1,	// (0x0005affc) vkb2_area_top_pane_ParamLimits

0x74c1,	// (0x0005affc) vkb2_area_top_pane

0x753b,	// (0x0005b076) vkb2_top_entry_pane_ParamLimits

0x753b,	// (0x0005b076) vkb2_top_entry_pane

0x7565,	// (0x0005b0a0) vkb2_top_grid_left_pane_ParamLimits

0x7565,	// (0x0005b0a0) vkb2_top_grid_left_pane

0x7583,	// (0x0005b0be) vkb2_top_grid_right_pane_ParamLimits

0x7583,	// (0x0005b0be) vkb2_top_grid_right_pane

0x75a1,	// (0x0005b0dc) vkb2_cell_keypad_pane_ParamLimits

0x75a1,	// (0x0005b0dc) vkb2_cell_keypad_pane

0x7672,	// (0x0005b1ad) vkb2_area_bottom_grid_pane_ParamLimits

0x7672,	// (0x0005b1ad) vkb2_area_bottom_grid_pane

0x7698,	// (0x0005b1d3) vkb2_area_bottom_pane_g1_ParamLimits

0x7698,	// (0x0005b1d3) vkb2_area_bottom_pane_g1

0x76bc,	// (0x0005b1f7) vkb2_area_bottom_pane_g2_ParamLimits

0x76bc,	// (0x0005b1f7) vkb2_area_bottom_pane_g2

0x76ea,	// (0x0005b225) vkb2_area_bottom_pane_g3_ParamLimits

0x76ea,	// (0x0005b225) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x000638de) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x000638de) vkb2_area_bottom_pane_g

0x774b,	// (0x0005b286) vkb2_top_cell_left_pane_ParamLimits

0x774b,	// (0x0005b286) vkb2_top_cell_left_pane

0xd0e4,	// (0x00060c1f) vkb2_top_entry_pane_g1_ParamLimits

0xd0e4,	// (0x00060c1f) vkb2_top_entry_pane_g1

0xd0f2,	// (0x00060c2d) vkb2_top_entry_pane_t1_ParamLimits

0xd0f2,	// (0x00060c2d) vkb2_top_entry_pane_t1

0xd124,	// (0x00060c5f) vkb2_top_entry_pane_t2_ParamLimits

0xd124,	// (0x00060c5f) vkb2_top_entry_pane_t2

0xd156,	// (0x00060c91) vkb2_top_entry_pane_t3_ParamLimits

0xd156,	// (0x00060c91) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x000638e5) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x000638e5) vkb2_top_entry_pane_t

0x7798,	// (0x0005b2d3) vkb2_top_grid_right_pane_g1_ParamLimits

0x7798,	// (0x0005b2d3) vkb2_top_grid_right_pane_g1

0x77ae,	// (0x0005b2e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x77ae,	// (0x0005b2e9) vkb2_top_grid_right_pane_g2

0x77c6,	// (0x0005b301) vkb2_top_grid_right_pane_g3_ParamLimits

0x77c6,	// (0x0005b301) vkb2_top_grid_right_pane_g3

0x77de,	// (0x0005b319) vkb2_top_grid_right_pane_g4_ParamLimits

0x77de,	// (0x0005b319) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x000638ec) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x000638ec) vkb2_top_grid_right_pane_g

0x77f4,	// (0x0005b32f) vkb2_top_cell_left_pane_g1

0x780b,	// (0x0005b346) vkb2_cell_keypad_pane_g1_ParamLimits

0x780b,	// (0x0005b346) vkb2_cell_keypad_pane_g1

0xd17a,	// (0x00060cb5) vkb2_cell_keypad_pane_t1_ParamLimits

0xd17a,	// (0x00060cb5) vkb2_cell_keypad_pane_t1

0x7819,	// (0x0005b354) vkb2_cell_bottom_grid_pane_ParamLimits

0x7819,	// (0x0005b354) vkb2_cell_bottom_grid_pane

0x7852,	// (0x0005b38d) vkb2_cell_bottom_grid_pane_g1

0xcd32,	// (0x0006086d) aid_call2_pane_cp02

0xcd3a,	// (0x00060875) aid_call_pane_cp02

0xcd42,	// (0x0006087d) clock_digital_number_pane_cp10

0xcd4a,	// (0x00060885) clock_digital_number_pane_cp11

0xcd52,	// (0x0006088d) clock_digital_number_pane_cp12

0xcd5a,	// (0x00060895) clock_digital_number_pane_cp13

0xcd62,	// (0x0006089d) clock_digital_separator_pane_cp10

0x1350,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g1

0x1350,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g2

0xcd6a,	// (0x000608a5) popup_clock_digital_analogue_window_cp2_g3

0x1350,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g4

0xcd6a,	// (0x000608a5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x000638a1) popup_clock_digital_analogue_window_cp2_g

0xcd72,	// (0x000608ad) popup_clock_digital_analogue_window_cp2_t1

0xcd80,	// (0x000608bb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x000638ac) popup_clock_digital_analogue_window_cp2_t

0xb154,	// (0x0005ec8f) clock_digital_number_pane_cp10_g1

0xb154,	// (0x0005ec8f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00063688) clock_digital_number_pane_cp10_g

0xb154,	// (0x0005ec8f) clock_digital_separator_pane_cp10_g1

0xb154,	// (0x0005ec8f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x00063688) clock_digital_separator_pane_cp10_g

0xcbad,	// (0x000606e8) uniindi_top_pane_g3

0xcbbe,	// (0x000606f9) uniindi_top_pane_g4

0x762c,	// (0x0005b167) vkb2_row_keypad_pane_ParamLimits

0x762c,	// (0x0005b167) vkb2_row_keypad_pane

0x786e,	// (0x0005b3a9) vkb2_cell_t_keypad_pane_ParamLimits

0x786e,	// (0x0005b3a9) vkb2_cell_t_keypad_pane

0x787e,	// (0x0005b3b9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x787e,	// (0x0005b3b9) vkb2_cell_t_keypad_pane_cp08

0x7893,	// (0x0005b3ce) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7893,	// (0x0005b3ce) vkb2_cell_t_keypad_pane_cp09

0x78a7,	// (0x0005b3e2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x78a7,	// (0x0005b3e2) vkb2_cell_t_keypad_pane_cp01

0x78b8,	// (0x0005b3f3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x78b8,	// (0x0005b3f3) vkb2_cell_t_keypad_pane_cp02

0x78c9,	// (0x0005b404) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x78c9,	// (0x0005b404) vkb2_cell_t_keypad_pane_cp03

0x78da,	// (0x0005b415) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x78da,	// (0x0005b415) vkb2_cell_t_keypad_pane_cp04

0x78eb,	// (0x0005b426) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x78eb,	// (0x0005b426) vkb2_cell_t_keypad_pane_cp05

0x78fc,	// (0x0005b437) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x78fc,	// (0x0005b437) vkb2_cell_t_keypad_pane_cp06

0x790f,	// (0x0005b44a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x790f,	// (0x0005b44a) vkb2_cell_t_keypad_pane_cp07

0x7924,	// (0x0005b45f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7924,	// (0x0005b45f) vkb2_cell_t_keypad_pane_cp10

0x6fde,	// (0x0005ab19) vkb2_cell_t_keypad_pane_g1

0xd191,	// (0x00060ccc) vkb2_cell_t_keypad_pane_t1

0x4f7c,	// (0x00058ab7) popup_grid_graphic2_window

0xd1a3,	// (0x00060cde) aid_size_cell_graphic2_ParamLimits

0xd1a3,	// (0x00060cde) aid_size_cell_graphic2

0xd1db,	// (0x00060d16) bg_popup_window_pane_cp21_ParamLimits

0xd1db,	// (0x00060d16) bg_popup_window_pane_cp21

0xd1e9,	// (0x00060d24) graphic2_pages_pane_ParamLimits

0xd1e9,	// (0x00060d24) graphic2_pages_pane

0xd22f,	// (0x00060d6a) grid_graphic2_control_pane_ParamLimits

0xd22f,	// (0x00060d6a) grid_graphic2_control_pane

0xd26d,	// (0x00060da8) grid_graphic2_pane_ParamLimits

0xd26d,	// (0x00060da8) grid_graphic2_pane

0xd2e3,	// (0x00060e1e) cell_graphic2_pane

0xb911,	// (0x0005f44c) main_comp_mode_pane

0xc41e,	// (0x0005ff59) list_ai3_gene_pane_ParamLimits

0xc7e6,	// (0x00060321) bg_popup_window_pane_cp19_ParamLimits

0xc7f2,	// (0x0006032d) bg_touch_area_indi_pane_ParamLimits

0xc7f2,	// (0x0006032d) bg_touch_area_indi_pane

0xc808,	// (0x00060343) bg_touch_area_indi_pane_cp01_ParamLimits

0xc808,	// (0x00060343) bg_touch_area_indi_pane_cp01

0xc820,	// (0x0006035b) bg_touch_area_indi_pane_cp02_ParamLimits

0xc820,	// (0x0006035b) bg_touch_area_indi_pane_cp02

0xc83a,	// (0x00060375) bg_touch_area_indi_pane_cp03_ParamLimits

0xc83a,	// (0x00060375) bg_touch_area_indi_pane_cp03

0xc854,	// (0x0006038f) popup_slider_window_g1_ParamLimits

0xc870,	// (0x000603ab) popup_slider_window_g2_ParamLimits

0xc88c,	// (0x000603c7) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x00063836) popup_slider_window_g_ParamLimits

0xc8e8,	// (0x00060423) popup_slider_window_t1_ParamLimits

0xc95c,	// (0x00060497) small_volume_slider_vertical_pane_ParamLimits

0xd2e3,	// (0x00060e1e) cell_graphic2_pane_ParamLimits

0xd335,	// (0x00060e70) bg_button_pane_cp10_ParamLimits

0xd335,	// (0x00060e70) bg_button_pane_cp10

0xd34a,	// (0x00060e85) bg_button_pane_cp11_ParamLimits

0xd34a,	// (0x00060e85) bg_button_pane_cp11

0xd35f,	// (0x00060e9a) graphic2_pages_pane_g1_ParamLimits

0xd35f,	// (0x00060e9a) graphic2_pages_pane_g1

0xd37a,	// (0x00060eb5) graphic2_pages_pane_g2_ParamLimits

0xd37a,	// (0x00060eb5) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x000638fa) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x000638fa) graphic2_pages_pane_g

0xd392,	// (0x00060ecd) graphic2_pages_pane_t1_ParamLimits

0xd392,	// (0x00060ecd) graphic2_pages_pane_t1

0xd3a8,	// (0x00060ee3) cell_graphic2_control_pane_ParamLimits

0xd3a8,	// (0x00060ee3) cell_graphic2_control_pane

0xd3cb,	// (0x00060f06) cell_graphic2_pane_g1_ParamLimits

0xd3cb,	// (0x00060f06) cell_graphic2_pane_g1

0xd3d8,	// (0x00060f13) cell_graphic2_pane_g2_ParamLimits

0xd3d8,	// (0x00060f13) cell_graphic2_pane_g2

0xd3e5,	// (0x00060f20) cell_graphic2_pane_g3_ParamLimits

0xd3e5,	// (0x00060f20) cell_graphic2_pane_g3

0xd3f2,	// (0x00060f2d) cell_graphic2_pane_g4_ParamLimits

0xd3f2,	// (0x00060f2d) cell_graphic2_pane_g4

0xd3ff,	// (0x00060f3a) cell_graphic2_pane_g5_ParamLimits

0xd3ff,	// (0x00060f3a) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x000638ff) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x000638ff) cell_graphic2_pane_g

0xd41a,	// (0x00060f55) cell_graphic2_pane_t1_ParamLimits

0xd41a,	// (0x00060f55) cell_graphic2_pane_t1

0x89ec,	// (0x0005c527) grid_highlight_pane_cp11_ParamLimits

0x89ec,	// (0x0005c527) grid_highlight_pane_cp11

0xecef,	// (0x0006282a) bg_button_pane_cp05

0xd443,	// (0x00060f7e) cell_graphic2_control_pane_g1

0xb154,	// (0x0005ec8f) bg_touch_area_indi_pane_g1

0xd46b,	// (0x00060fa6) aid_cmod_rocker_key_size

0xd475,	// (0x00060fb0) aid_cmode_itu_key_size

0xd47f,	// (0x00060fba) main_cmode_video_pane

0xd489,	// (0x00060fc4) main_comp_mode_itu_pane

0xd495,	// (0x00060fd0) main_comp_mode_rocker_pane

0xd4a1,	// (0x00060fdc) cell_cmode_rocker_pane_ParamLimits

0xd4a1,	// (0x00060fdc) cell_cmode_rocker_pane

0xd4b5,	// (0x00060ff0) cell_cmode_itu_pane_ParamLimits

0xd4b5,	// (0x00060ff0) cell_cmode_itu_pane

0xf1d1,	// (0x00062d0c) bg_button_pane_cp06_ParamLimits

0xf1d1,	// (0x00062d0c) bg_button_pane_cp06

0xb3cf,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_ParamLimits

0xb3cf,	// (0x0005ef0a) cell_cmode_rocker_pane_g1

0xca03,	// (0x0006053e) cell_cmode_rocker_pane_g2_ParamLimits

0xca03,	// (0x0006053e) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x0006390f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x0006390f) cell_cmode_rocker_pane_g

0xb911,	// (0x0005f44c) bg_button_pane_cp07

0xd4cc,	// (0x00061007) cell_cmode_itu_pane_g1

0xd4d5,	// (0x00061010) cell_cmode_itu_pane_t1

0xd4e3,	// (0x0006101e) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x00063914) cell_cmode_itu_pane_t

0xcc31,	// (0x0006076c) aid_touch_ctrl_left

0xcc39,	// (0x00060774) aid_touch_ctrl_right

0xb911,	// (0x0005f44c) compa_mode_pane

0xd4f1,	// (0x0006102c) aid_cmod_rocker_key_size_cp

0xd4fb,	// (0x00061036) aid_cmode_itu_key_size_cp

0xd505,	// (0x00061040) compa_mode_pane_g1

0xd50d,	// (0x00061048) compa_mode_pane_g2

0xd515,	// (0x00061050) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x00063919) compa_mode_pane_g

0xd51d,	// (0x00061058) main_comp_mode_itu_pane_cp

0xd525,	// (0x00061060) main_comp_mode_rocker_pane_cp

0xd52d,	// (0x00061068) cell_cmode_itu_pane_cp_ParamLimits

0xd52d,	// (0x00061068) cell_cmode_itu_pane_cp

0xd542,	// (0x0006107d) cell_cmode_rocker_pane_cp_ParamLimits

0xd542,	// (0x0006107d) cell_cmode_rocker_pane_cp

0xf1d1,	// (0x00062d0c) bg_button_pane_cp06_cp_ParamLimits

0xf1d1,	// (0x00062d0c) bg_button_pane_cp06_cp

0xb3cf,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb3cf,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_cp

0xb154,	// (0x0005ec8f) cell_cmode_rocker_pane_g2_cp

0xb911,	// (0x0005f44c) bg_button_pane_cp07_cp

0xd554,	// (0x0006108f) cell_cmode_itu_pane_g1_cp

0xd55d,	// (0x00061098) cell_cmode_itu_pane_t1_cp

0xd55d,	// (0x00061098) cell_cmode_itu_pane_t2_cp

0xa069,	// (0x0005dba4) settings_code_pane_cp2

0xebbc,	// (0x000626f7) bg_popup_window_pane_cp3_ParamLimits

0xeedd,	// (0x00062a18) heading_pane_cp3_ParamLimits

0xeee9,	// (0x00062a24) listscroll_popup_graphic_pane_ParamLimits

0x6d71,	// (0x0005a8ac) fep_hwr_aid_pane_ParamLimits

0x72e4,	// (0x0005ae1f) aid_touch_sctrl_top_ParamLimits

0x72ff,	// (0x0005ae3a) sctrl_sk_top_pane_g1_ParamLimits

0x6fde,	// (0x0005ab19) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x0006384f) sctrl_sk_top_pane_g_ParamLimits

0x730c,	// (0x0005ae47) sctrl_sk_top_pane_t1_ParamLimits

0x72e4,	// (0x0005ae1f) aid_touch_sctrl_bottom_ParamLimits

0x730c,	// (0x0005ae47) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb77,	// (0x000606b2) aid_area_touch_clock

0x7503,	// (0x0005b03e) aid_vkb2_area_top_pane_cell_ParamLimits

0x7503,	// (0x0005b03e) aid_vkb2_area_top_pane_cell

0x764e,	// (0x0005b189) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x764e,	// (0x0005b189) aid_vkb2_area_bottom_pane_cell

0xd0dc,	// (0x00060c17) popup_char_count_window

0xd56b,	// (0x000610a6) popup_char_count_window_g1

0xd574,	// (0x000610af) popup_char_count_window_g2

0xd57d,	// (0x000610b8) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x00063920) popup_char_count_window_g

0xd586,	// (0x000610c1) popup_char_count_window_t1

0x73bd,	// (0x0005aef8) popup_fep_char_preview_window_ParamLimits

0x73bd,	// (0x0005aef8) popup_fep_char_preview_window

0x7521,	// (0x0005b05c) vkb2_top_candi_pane_ParamLimits

0x7521,	// (0x0005b05c) vkb2_top_candi_pane

0xd594,	// (0x000610cf) cell_vkb2_top_candi_pane_ParamLimits

0xd594,	// (0x000610cf) cell_vkb2_top_candi_pane

0x7939,	// (0x0005b474) bg_popup_fep_char_preview_window_ParamLimits

0x7939,	// (0x0005b474) bg_popup_fep_char_preview_window

0x7947,	// (0x0005b482) popup_fep_char_preview_window_t1_ParamLimits

0x7947,	// (0x0005b482) popup_fep_char_preview_window_t1

0xd5e5,	// (0x00061120) bg_popup_fep_char_preview_window_g1

0xd5ed,	// (0x00061128) bg_popup_fep_char_preview_window_g2

0xd5f5,	// (0x00061130) bg_popup_fep_char_preview_window_g3

0xd5fd,	// (0x00061138) bg_popup_fep_char_preview_window_g4

0xd605,	// (0x00061140) bg_popup_fep_char_preview_window_g5

0x7981,	// (0x0005b4bc) bg_popup_fep_char_preview_window_g6

0xd60d,	// (0x00061148) bg_popup_fep_char_preview_window_g7

0xd615,	// (0x00061150) bg_popup_fep_char_preview_window_g8

0xd61d,	// (0x00061158) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x00063927) bg_popup_fep_char_preview_window_g

0x6fde,	// (0x0005ab19) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6fde,	// (0x0005ab19) cell_vkb2_top_candi_pane_g1

0x6fec,	// (0x0005ab27) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6fec,	// (0x0005ab27) cell_vkb2_top_candi_pane_g2

0xb98d,	// (0x0005f4c8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xb98d,	// (0x0005f4c8) cell_vkb2_top_candi_pane_g3

0x7989,	// (0x0005b4c4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7989,	// (0x0005b4c4) cell_vkb2_top_candi_pane_g4

0xb8bc,	// (0x0005f3f7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb8bc,	// (0x0005f3f7) cell_vkb2_top_candi_pane_g5

0x79aa,	// (0x0005b4e5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x79aa,	// (0x0005b4e5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0006393a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0006393a) cell_vkb2_top_candi_pane_g

0x79b8,	// (0x0005b4f3) cell_vkb2_top_candi_pane_t1

0x6b85,	// (0x0005a6c0) aid_size_touch_slider_mark_ParamLimits

0x6b85,	// (0x0005a6c0) aid_size_touch_slider_mark

0xd21f,	// (0x00060d5a) grid_graphic2_catg_pane_ParamLimits

0xd21f,	// (0x00060d5a) grid_graphic2_catg_pane

0xd2bd,	// (0x00060df8) popup_grid_graphic2_window_t1_ParamLimits

0xd2bd,	// (0x00060df8) popup_grid_graphic2_window_t1

0xd2cf,	// (0x00060e0a) popup_grid_graphic2_window_t2_ParamLimits

0xd2cf,	// (0x00060e0a) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x000638f5) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x000638f5) popup_grid_graphic2_window_t

0xecef,	// (0x0006282a) bg_button_pane_cp05_ParamLimits

0xd443,	// (0x00060f7e) cell_graphic2_control_pane_g1_ParamLimits

0xd625,	// (0x00061160) cell_graphic2_catg_pane_ParamLimits

0xd625,	// (0x00061160) cell_graphic2_catg_pane

0xb911,	// (0x0005f44c) bg_button_pane_cp12

0xd637,	// (0x00061172) cell_graphic2_catg_pane_g1

0xcb43,	// (0x0006067e) cell_tb_ext_pane_t1_ParamLimits

0x776b,	// (0x0005b2a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x776b,	// (0x0005b2a6) vkb2_top_cell_right_narrow_pane

0x7783,	// (0x0005b2be) vkb2_top_cell_right_wide_pane_ParamLimits

0x7783,	// (0x0005b2be) vkb2_top_cell_right_wide_pane

0x6d63,	// (0x0005a89e) bg_vkb2_func_pane_ParamLimits

0x6d63,	// (0x0005a89e) bg_vkb2_func_pane

0x77f4,	// (0x0005b32f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp03

0x7852,	// (0x0005b38d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8980,	// (0x0005c4bb) bg_vkb2_func_pane_g1

0x8988,	// (0x0005c4c3) bg_vkb2_func_pane_g2

0x8998,	// (0x0005c4d3) bg_vkb2_func_pane_g3

0x8990,	// (0x0005c4cb) bg_vkb2_func_pane_g4

0x89a0,	// (0x0005c4db) bg_vkb2_func_pane_g5

0x89a8,	// (0x0005c4e3) bg_vkb2_func_pane_g6

0x89b0,	// (0x0005c4eb) bg_vkb2_func_pane_g7

0x89b8,	// (0x0005c4f3) bg_vkb2_func_pane_g8

0x8978,	// (0x0005c4b3) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x00063947) bg_vkb2_func_pane_g

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp01

0x77f4,	// (0x0005b32f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x77f4,	// (0x0005b32f) vkb2_top_cell_right_wide_pane_g1

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6d63,	// (0x0005a89e) bg_vkb2_fuc_pane_cp02

0x7852,	// (0x0005b38d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7852,	// (0x0005b38d) vkb2_top_cell_right_narrow_pane_g1

0xc764,	// (0x0006029f) aid_touch_area_decrease_ParamLimits

0xc764,	// (0x0006029f) aid_touch_area_decrease

0xc788,	// (0x000602c3) aid_touch_area_increase_ParamLimits

0xc788,	// (0x000602c3) aid_touch_area_increase

0xc794,	// (0x000602cf) aid_touch_area_mute_ParamLimits

0xc794,	// (0x000602cf) aid_touch_area_mute

0xc7b8,	// (0x000602f3) aid_touch_area_slider_ParamLimits

0xc7b8,	// (0x000602f3) aid_touch_area_slider

0xc8a8,	// (0x000603e3) popup_slider_window_g4_ParamLimits

0xc8a8,	// (0x000603e3) popup_slider_window_g4

0xc8b4,	// (0x000603ef) popup_slider_window_g5_ParamLimits

0xc8b4,	// (0x000603ef) popup_slider_window_g5

0xc8d6,	// (0x00060411) popup_slider_window_g6_ParamLimits

0xc8d6,	// (0x00060411) popup_slider_window_g6

0xc916,	// (0x00060451) popup_slider_window_t2_ParamLimits

0xc916,	// (0x00060451) popup_slider_window_t2

0x0001,

0xfd08,	// (0x00063843) popup_slider_window_t_ParamLimits

0xfd08,	// (0x00063843) popup_slider_window_t

0xc92e,	// (0x00060469) slider_pane_ParamLimits

0xc92e,	// (0x00060469) slider_pane

0xd640,	// (0x0006117b) slider_pane_g1_ParamLimits

0xd640,	// (0x0006117b) slider_pane_g1

0xd654,	// (0x0006118f) slider_pane_g2_ParamLimits

0xd654,	// (0x0006118f) slider_pane_g2

0xd66a,	// (0x000611a5) slider_pane_g3_ParamLimits

0xd66a,	// (0x000611a5) slider_pane_g3

0x0003,

0xfe1f,	// (0x0006395a) slider_pane_g_ParamLimits

0xfe1f,	// (0x0006395a) slider_pane_g

0x8371,	// (0x0005beac) popup_tb_float_extension_window_ParamLimits

0x8371,	// (0x0005beac) popup_tb_float_extension_window

0xd696,	// (0x000611d1) aid_size_cell_tb_float_ext

0xb911,	// (0x0005f44c) bg_popup_sub_window_cp28

0xd6a2,	// (0x000611dd) grid_tb_float_ext_pane

0xd6ae,	// (0x000611e9) cell_tb_float_ext_pane_ParamLimits

0xd6ae,	// (0x000611e9) cell_tb_float_ext_pane

0xd6ca,	// (0x00061205) cell_tb_float_ext_pane_g1

0xd6d3,	// (0x0006120e) grid_highlight_pane_cp12

0x6eb8,	// (0x0005a9f3) cell_last_hwr_side_pane_ParamLimits

0x6eb8,	// (0x0005a9f3) cell_last_hwr_side_pane

0xb154,	// (0x0005ec8f) cell_last_hwr_side_pane_g1

0xd6dc,	// (0x00061217) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x00063963) cell_last_hwr_side_pane_g

0x771a,	// (0x0005b255) vkb2_area_bottom_space_btn_pane_ParamLimits

0x771a,	// (0x0005b255) vkb2_area_bottom_space_btn_pane

0x6fde,	// (0x0005ab19) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd191,	// (0x00060ccc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x79b8,	// (0x0005b4f3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x79d6,	// (0x0005b511) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x79d6,	// (0x0005b511) vkb2_area_bottom_space_btn_pane_g1

0x7a10,	// (0x0005b54b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a10,	// (0x0005b54b) vkb2_area_bottom_space_btn_pane_g2

0x7a46,	// (0x0005b581) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a46,	// (0x0005b581) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x00063968) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x00063968) vkb2_area_bottom_space_btn_pane_g

0x6e28,	// (0x0005a963) cel_fep_hwr_func_pane_ParamLimits

0x6e28,	// (0x0005a963) cel_fep_hwr_func_pane

0x6e64,	// (0x0005a99f) cell_hwr_side_button_pane_ParamLimits

0x6e64,	// (0x0005a99f) cell_hwr_side_button_pane

0xcb77,	// (0x000606b2) aid_area_touch_clock_ParamLimits

0xecef,	// (0x0006282a) bg_uniindi_top_pane_ParamLimits

0xcb8b,	// (0x000606c6) uniindi_top_pane_g1_ParamLimits

0xcba1,	// (0x000606dc) uniindi_top_pane_g2_ParamLimits

0xcbad,	// (0x000606e8) uniindi_top_pane_g3_ParamLimits

0xcbbe,	// (0x000606f9) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x0006387b) uniindi_top_pane_g_ParamLimits

0xcbcb,	// (0x00060706) uniindi_top_pane_t1_ParamLimits

0xecef,	// (0x0006282a) bg_vkb2_func_pane_cp01_ParamLimits

0xecef,	// (0x0006282a) bg_vkb2_func_pane_cp01

0xd6e5,	// (0x00061220) cel_fep_hwr_func_pane_g1_ParamLimits

0xd6e5,	// (0x00061220) cel_fep_hwr_func_pane_g1

0xecef,	// (0x0006282a) bg_vkb2_func_pane_cp02_ParamLimits

0xecef,	// (0x0006282a) bg_vkb2_func_pane_cp02

0xd6e5,	// (0x00061220) cell_hwr_side_button_pane_g1_ParamLimits

0xd6e5,	// (0x00061220) cell_hwr_side_button_pane_g1

0x87f9,	// (0x0005c334) status_pane_g4_ParamLimits

0x87f9,	// (0x0005c334) status_pane_g4

0x8813,	// (0x0005c34e) status_pane_t1

0xaef3,	// (0x0005ea2e) form2_midp_gauge_slider_cont_pane

0xaefb,	// (0x0005ea36) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaf0d,	// (0x0005ea48) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaf1f,	// (0x0005ea5a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0006363b) form2_midp_gauge_slider_pane_t_ParamLimits

0xaf31,	// (0x0005ea6c) form2_midp_slider_pane_ParamLimits

0x737d,	// (0x0005aeb8) aid_size_cell_func_vkb2_ParamLimits

0x737d,	// (0x0005aeb8) aid_size_cell_func_vkb2

0xd682,	// (0x000611bd) slider_pane_g4_ParamLimits

0xd682,	// (0x000611bd) slider_pane_g4

0x7a90,	// (0x0005b5cb) form2_midp_gauge_slider_pane_t2_cp01

0x7a9e,	// (0x0005b5d9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a9e,	// (0x0005b5d9) form2_midp_gauge_slider_pane_t3_cp01

0x7abb,	// (0x0005b5f6) form2_midp_slider_pane_cp01

0xb911,	// (0x0005f44c) navi_smil_pane

0xd734,	// (0x0006126f) navi_smil_pane_g1

0xd73c,	// (0x00061277) navi_smil_pane_t1

0xd6f3,	// (0x0006122e) form2_midp_slider_pane_g1

0xd6fc,	// (0x00061237) form2_midp_slider_pane_g2

0xd71a,	// (0x00061255) form2_midp_slider_pane_g3

0xd6f3,	// (0x0006122e) form2_midp_slider_pane_g4

0xd722,	// (0x0006125d) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x00063971) form2_midp_slider_pane_g

0x7a80,	// (0x0005b5bb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a80,	// (0x0005b5bb) vkb2_area_bottom_space_btn_pane_g4

0x8610,	// (0x0005c14b) lc0_navi_pane_ParamLimits

0x8610,	// (0x0005c14b) lc0_navi_pane

0x868c,	// (0x0005c1c7) lc0_stat_indi_pane_ParamLimits

0x868c,	// (0x0005c1c7) lc0_stat_indi_pane

0x86a3,	// (0x0005c1de) ls0_title_pane_ParamLimits

0x86a3,	// (0x0005c1de) ls0_title_pane

0xf1d1,	// (0x00062d0c) bg_popup_sub_pane_cp14_ParamLimits

0xcb5e,	// (0x00060699) list_uniindi_pane_ParamLimits

0xcb6a,	// (0x000606a5) uniindi_top_pane_ParamLimits

0xcc09,	// (0x00060744) list_single_uniindi_pane_g1_ParamLimits

0xcc1c,	// (0x00060757) list_single_uniindi_pane_t1_ParamLimits

0x7ac4,	// (0x0005b5ff) lc0_stat_clock_pane_ParamLimits

0x7ac4,	// (0x0005b5ff) lc0_stat_clock_pane

0xd74a,	// (0x00061285) lc0_stat_indi_pane_g1_ParamLimits

0xd74a,	// (0x00061285) lc0_stat_indi_pane_g1

0xd757,	// (0x00061292) lc0_stat_indi_pane_g2_ParamLimits

0xd757,	// (0x00061292) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x0006397c) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x0006397c) lc0_stat_indi_pane_g

0x7ad1,	// (0x0005b60c) lc0_uni_indicator_pane_ParamLimits

0x7ad1,	// (0x0005b60c) lc0_uni_indicator_pane

0xd764,	// (0x0006129f) ls0_title_pane_g1_ParamLimits

0xd764,	// (0x0006129f) ls0_title_pane_g1

0xd778,	// (0x000612b3) ls0_title_pane_t1_ParamLimits

0xd778,	// (0x000612b3) ls0_title_pane_t1

0x7ade,	// (0x0005b619) lc0_uni_indicator_pane_g1_ParamLimits

0x7ade,	// (0x0005b619) lc0_uni_indicator_pane_g1

0xd7ae,	// (0x000612e9) lc0_stat_clock_pane_t1

0xb911,	// (0x0005f44c) main_ai5_pane

0xd7bc,	// (0x000612f7) ai5_sk_pane_ParamLimits

0xd7bc,	// (0x000612f7) ai5_sk_pane

0xd7c9,	// (0x00061304) cell_ai5_widget_pane_ParamLimits

0xd7c9,	// (0x00061304) cell_ai5_widget_pane

0xdd65,	// (0x000618a0) aid_size_cell_widget_grid

0xdd7b,	// (0x000618b6) bg_ai5_widget_pane_ParamLimits

0xdd7b,	// (0x000618b6) bg_ai5_widget_pane

0xdde5,	// (0x00061920) cell_ai5_widget_pane_g2

0xddf5,	// (0x00061930) cell_ai5_widget_pane_g3

0xde14,	// (0x0006194f) cell_ai5_widget_pane_g4

0xde20,	// (0x0006195b) cell_ai5_widget_pane_g5

0xde2c,	// (0x00061967) cell_ai5_widget_pane_g6

0xde38,	// (0x00061973) cell_ai5_widget_pane_g7

0xde80,	// (0x000619bb) cell_ai5_widget_pane_t1_ParamLimits

0xde80,	// (0x000619bb) cell_ai5_widget_pane_t1

0xde9d,	// (0x000619d8) cell_ai5_widget_pane_t2_ParamLimits

0xde9d,	// (0x000619d8) cell_ai5_widget_pane_t2

0xdeb5,	// (0x000619f0) cell_ai5_widget_pane_t3_ParamLimits

0xdeb5,	// (0x000619f0) cell_ai5_widget_pane_t3

0xdecd,	// (0x00061a08) cell_ai5_widget_pane_t4_ParamLimits

0xdecd,	// (0x00061a08) cell_ai5_widget_pane_t4

0xdee7,	// (0x00061a22) cell_ai5_widget_pane_t5_ParamLimits

0xdee7,	// (0x00061a22) cell_ai5_widget_pane_t5

0xdf06,	// (0x00061a41) cell_ai5_widget_pane_t6_ParamLimits

0xdf06,	// (0x00061a41) cell_ai5_widget_pane_t6

0xdf18,	// (0x00061a53) cell_ai5_widget_pane_t7_ParamLimits

0xdf18,	// (0x00061a53) cell_ai5_widget_pane_t7

0xdf31,	// (0x00061a6c) cell_ai5_widget_pane_t8_ParamLimits

0xdf31,	// (0x00061a6c) cell_ai5_widget_pane_t8

0x0009,

0xfe5b,	// (0x00063996) cell_ai5_widget_pane_t_ParamLimits

0xfe5b,	// (0x00063996) cell_ai5_widget_pane_t

0xdf7d,	// (0x00061ab8) grid_ai5_widget_pane

0xf1d1,	// (0x00062d0c) highlight_cell_ai5_widget_pane_ParamLimits

0xf1d1,	// (0x00062d0c) highlight_cell_ai5_widget_pane

0xdf95,	// (0x00061ad0) ai5_sk_left_pane

0xdf9f,	// (0x00061ada) ai5_sk_middle_pane

0xdfa9,	// (0x00061ae4) ai5_sk_right_pane

0xdfb3,	// (0x00061aee) bg_ai5_widget_pane_g1_ParamLimits

0xdfb3,	// (0x00061aee) bg_ai5_widget_pane_g1

0xdfbf,	// (0x00061afa) bg_ai5_widget_pane_g2_ParamLimits

0xdfbf,	// (0x00061afa) bg_ai5_widget_pane_g2

0xdfcb,	// (0x00061b06) bg_ai5_widget_pane_g3_ParamLimits

0xdfcb,	// (0x00061b06) bg_ai5_widget_pane_g3

0xdfd7,	// (0x00061b12) bg_ai5_widget_pane_g4_ParamLimits

0xdfd7,	// (0x00061b12) bg_ai5_widget_pane_g4

0xdfe3,	// (0x00061b1e) bg_ai5_widget_pane_g5_ParamLimits

0xdfe3,	// (0x00061b1e) bg_ai5_widget_pane_g5

0xdfef,	// (0x00061b2a) bg_ai5_widget_pane_g6_ParamLimits

0xdfef,	// (0x00061b2a) bg_ai5_widget_pane_g6

0xdffb,	// (0x00061b36) bg_ai5_widget_pane_g7_ParamLimits

0xdffb,	// (0x00061b36) bg_ai5_widget_pane_g7

0xe007,	// (0x00061b42) bg_ai5_widget_pane_g8_ParamLimits

0xe007,	// (0x00061b42) bg_ai5_widget_pane_g8

0xe013,	// (0x00061b4e) bg_ai5_widget_pane_g9_ParamLimits

0xe013,	// (0x00061b4e) bg_ai5_widget_pane_g9

0x0008,

0xfe70,	// (0x000639ab) bg_ai5_widget_pane_g_ParamLimits

0xfe70,	// (0x000639ab) bg_ai5_widget_pane_g

0xe04c,	// (0x00061b87) cell_shortcut_ai5_widget_pane_ParamLimits

0xe04c,	// (0x00061b87) cell_shortcut_ai5_widget_pane

0x642c,	// (0x00059f67) bg_cell_shortcut_ai5_widget_pane

0xe05f,	// (0x00061b9a) cell_grid_ai5_widget_pane_g1

0xe068,	// (0x00061ba3) highlight_cell_shortcut_ai5_widget_pane

0x8980,	// (0x0005c4bb) ai5_sk_left_pane_g1

0xe070,	// (0x00061bab) ai5_sk_left_pane_g2

0xe078,	// (0x00061bb3) ai5_sk_left_pane_g3

0xe080,	// (0x00061bbb) ai5_sk_left_pane_g4

0x0003,

0xfe83,	// (0x000639be) ai5_sk_left_pane_g

0xe088,	// (0x00061bc3) ai5_sk_left_pane_t1

0x8988,	// (0x0005c4c3) ai5_sk_right_pane_g1

0xe096,	// (0x00061bd1) ai5_sk_right_pane_g2

0xe09e,	// (0x00061bd9) ai5_sk_right_pane_g3

0xe0a6,	// (0x00061be1) ai5_sk_right_pane_g4

0x0003,

0xfe8c,	// (0x000639c7) ai5_sk_right_pane_g

0xe0ae,	// (0x00061be9) ai5_sk_right_pane_t1

0x8988,	// (0x0005c4c3) ai5_sk_middle_pane_g1

0x8980,	// (0x0005c4bb) ai5_sk_middle_pane_g2

0x89a0,	// (0x0005c4db) ai5_sk_middle_pane_g3

0xe09e,	// (0x00061bd9) ai5_sk_middle_pane_g4

0xe078,	// (0x00061bb3) ai5_sk_middle_pane_g5

0xe0bc,	// (0x00061bf7) ai5_sk_middle_pane_g6

0xe0c4,	// (0x00061bff) ai5_sk_middle_pane_g7

0x0006,

0xfe95,	// (0x000639d0) ai5_sk_middle_pane_g

0x8492,	// (0x0005bfcd) aid_touch_area_size_lc0_ParamLimits

0x8492,	// (0x0005bfcd) aid_touch_area_size_lc0

0x700d,	// (0x0005ab48) cell_hwr_candidate_pane_t1_ParamLimits

0x84b0,	// (0x0005bfeb) aid_touch_navi_pane

0x87a3,	// (0x0005c2de) status_dt_navi_pane_ParamLimits

0x87a3,	// (0x0005c2de) status_dt_navi_pane

0x87b0,	// (0x0005c2eb) status_dt_sta_pane_ParamLimits

0x87b0,	// (0x0005c2eb) status_dt_sta_pane

0xe0cc,	// (0x00061c07) dt_sta_controll_pane

0xe0d9,	// (0x00061c14) dt_sta_indi_pane

0xe0ea,	// (0x00061c25) dt_sta_title_pane

0xecef,	// (0x0006282a) bg_dt_sta_indi_pane_ParamLimits

0xecef,	// (0x0006282a) bg_dt_sta_indi_pane

0xe0fd,	// (0x00061c38) dt_sta_battery_pane

0xe105,	// (0x00061c40) dt_sta_indi_pane_g1

0xe10e,	// (0x00061c49) dt_sta_indi_pane_g2

0xe117,	// (0x00061c52) dt_sta_indi_pane_g3

0x0002,

0xfea4,	// (0x000639df) dt_sta_indi_pane_g

0xe120,	// (0x00061c5b) dt_sta_signal_pane

0xf1d1,	// (0x00062d0c) bg_dt_sta_title_pane_ParamLimits

0xf1d1,	// (0x00062d0c) bg_dt_sta_title_pane

0xe129,	// (0x00061c64) dt_sta_title_pane_g1

0xe131,	// (0x00061c6c) dt_sta_title_pane_t1_ParamLimits

0xe131,	// (0x00061c6c) dt_sta_title_pane_t1

0xb911,	// (0x0005f44c) bg_dt_sta_control_pane

0xe146,	// (0x00061c81) dt_sta_controll_pane_g1

0xe14f,	// (0x00061c8a) bg_dt_sta_title_pane_g1

0xe158,	// (0x00061c93) bg_dt_sta_title_pane_g2

0xe161,	// (0x00061c9c) bg_dt_sta_title_pane_g3

0x0002,

0xfeab,	// (0x000639e6) bg_dt_sta_title_pane_g

0xb154,	// (0x0005ec8f) bg_dt_sta_indi_pane_g1

0xe16a,	// (0x00061ca5) dt_sta_signal_pane_g1

0xe172,	// (0x00061cad) dt_sta_signal_pane_g2

0x0001,

0xfeb2,	// (0x000639ed) dt_sta_signal_pane_g

0xe17a,	// (0x00061cb5) dt_sta_battery_pane_g1

0xe183,	// (0x00061cbe) dt_sta_battery_pane_t1

0xb154,	// (0x0005ec8f) bg_dt_sta_control_pane_g1

0x3534,	// (0x0005706f) fep_china_uni_eep_pane

0x353c,	// (0x00057077) fep_china_uni_entry_pane_ParamLimits

0x354c,	// (0x00057087) popup_fep_china_uni_window_g1_ParamLimits

0x355c,	// (0x00057097) popup_fep_china_uni_window_g2_ParamLimits

0x355c,	// (0x00057097) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00063263) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00063263) popup_fep_china_uni_window_g

0xe192,	// (0x00061ccd) fep_china_uni_eep_pane_g1

0xe19a,	// (0x00061cd5) fep_china_uni_eep_pane_t1

0xd72b,	// (0x00061266) aid_touch_area_size_smil_player

0x8608,	// (0x0005c143) lc0_clock_pane

0x8807,	// (0x0005c342) status_pane_g5_ParamLimits

0x8807,	// (0x0005c342) status_pane_g5

0x7ff6,	// (0x0005bb31) popup_keymap_window

0x87c5,	// (0x0005c300) status_icon_pane

0xddf5,	// (0x00061930) cell_ai5_widget_pane_g3_ParamLimits

0xde14,	// (0x0006194f) cell_ai5_widget_pane_g4_ParamLimits

0xde20,	// (0x0006195b) cell_ai5_widget_pane_g5_ParamLimits

0xde44,	// (0x0006197f) cell_ai5_widget_pane_g8_ParamLimits

0xde44,	// (0x0006197f) cell_ai5_widget_pane_g8

0xde58,	// (0x00061993) cell_ai5_widget_pane_g9_ParamLimits

0xde58,	// (0x00061993) cell_ai5_widget_pane_g9

0xde6c,	// (0x000619a7) cell_ai5_widget_pane_g10_ParamLimits

0xde6c,	// (0x000619a7) cell_ai5_widget_pane_g10

0xe1a9,	// (0x00061ce4) status_icon_pane_g1

0xb911,	// (0x0005f44c) bg_popup_sub_pane_cp13

0xe1b1,	// (0x00061cec) popup_keymap_window_t1

0x7d94,	// (0x0005b8cf) control_pane_g6_ParamLimits

0x7d94,	// (0x0005b8cf) control_pane_g6

0x7da1,	// (0x0005b8dc) control_pane_g7_ParamLimits

0x7da1,	// (0x0005b8dc) control_pane_g7

0x7dae,	// (0x0005b8e9) control_pane_g8_ParamLimits

0x7dae,	// (0x0005b8e9) control_pane_g8

0xe0cc,	// (0x00061c07) dt_sta_controll_pane_ParamLimits

0xe0d9,	// (0x00061c14) dt_sta_indi_pane_ParamLimits

0xe0ea,	// (0x00061c25) dt_sta_title_pane_ParamLimits

0xf113,	// (0x00062c4e) aid_size_touch_scroll_bar_cale

0x5059,	// (0x00058b94) popup_discreet_window_ParamLimits

0x5059,	// (0x00058b94) popup_discreet_window

0x50e7,	// (0x00058c22) popup_sk_window

0x8fc8,	// (0x0005cb03) bg_popup_sub_pane_cp28_ParamLimits

0x8fc8,	// (0x0005cb03) bg_popup_sub_pane_cp28

0xe1bf,	// (0x00061cfa) popup_discreet_window_g1_ParamLimits

0xe1bf,	// (0x00061cfa) popup_discreet_window_g1

0xe1df,	// (0x00061d1a) popup_discreet_window_t1_ParamLimits

0xe1df,	// (0x00061d1a) popup_discreet_window_t1

0xe1fd,	// (0x00061d38) popup_discreet_window_t2_ParamLimits

0xe1fd,	// (0x00061d38) popup_discreet_window_t2

0x0002,

0xfeb7,	// (0x000639f2) popup_discreet_window_t_ParamLimits

0xfeb7,	// (0x000639f2) popup_discreet_window_t

0x7af1,	// (0x0005b62c) popup_sk_window_g1

0x7afb,	// (0x0005b636) popup_sk_window_g2

0x0001,

0xfebe,	// (0x000639f9) popup_sk_window_g

0x7b05,	// (0x0005b640) popup_sk_window_t1

0x7b15,	// (0x0005b650) popup_sk_window_t1_copy1

0xdde5,	// (0x00061920) cell_ai5_widget_pane_g2_ParamLimits

0xdf43,	// (0x00061a7e) cell_ai5_widget_pane_t9_ParamLimits

0xdf43,	// (0x00061a7e) cell_ai5_widget_pane_t9

0xb911,	// (0x0005f44c) main_fep_fshwr2_pane

0x7b23,	// (0x0005b65e) aid_fshwr2_btn_pane

0x7b2f,	// (0x0005b66a) aid_fshwr2_syb_pane

0x7b40,	// (0x0005b67b) aid_fshwr2_txt_pane

0x7b4c,	// (0x0005b687) fshwr2_func_candi_pane

0x7b5d,	// (0x0005b698) fshwr2_hwr_syb_pane

0x7b70,	// (0x0005b6ab) fshwr2_icf_pane

0xb911,	// (0x0005f44c) fshwr2_icf_bg_pane

0xe24f,	// (0x00061d8a) fshwr2_icf_pane_t1_ParamLimits

0xe24f,	// (0x00061d8a) fshwr2_icf_pane_t1

0xb154,	// (0x0005ec8f) fshwr2_func_candi_pane_g1

0xe266,	// (0x00061da1) fshwr2_func_candi_row_pane_ParamLimits

0xe266,	// (0x00061da1) fshwr2_func_candi_row_pane

0xe277,	// (0x00061db2) cell_fshwr2_syb_pane_ParamLimits

0xe277,	// (0x00061db2) cell_fshwr2_syb_pane

0xb3cf,	// (0x0005ef0a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb3cf,	// (0x0005ef0a) fshwr2_hwr_syb_pane_g1

0xb911,	// (0x0005f44c) bg_popup_call_pane_cp01

0xe291,	// (0x00061dcc) fshwr2_func_candi_cell_pane_ParamLimits

0xe291,	// (0x00061dcc) fshwr2_func_candi_cell_pane

0xe2c3,	// (0x00061dfe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe2c3,	// (0x00061dfe) fshwr2_func_candi_cell_bg_pane

0xe2dd,	// (0x00061e18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe2dd,	// (0x00061e18) fshwr2_func_candi_cell_pane_g1

0xe2fd,	// (0x00061e38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2fd,	// (0x00061e38) fshwr2_func_candi_cell_pane_t1

0xb911,	// (0x0005f44c) bg_button_pane_cp08

0x642c,	// (0x00059f67) cell_fshwr2_syb_bg_pane

0xe310,	// (0x00061e4b) cell_fshwr2_syb_bg_pane_g1

0xe318,	// (0x00061e53) cell_fshwr2_syb_bg_pane_t1

0xf1d1,	// (0x00062d0c) main_tmo_pane

0x9c8c,	// (0x0005d7c7) uni_indicator_pane_g1_ParamLimits

0x9ca1,	// (0x0005d7dc) uni_indicator_pane_g2_ParamLimits

0x9cb7,	// (0x0005d7f2) uni_indicator_pane_g3_ParamLimits

0x9ccd,	// (0x0005d808) uni_indicator_pane_g4_ParamLimits

0x9ccd,	// (0x0005d808) uni_indicator_pane_g4

0x9ce1,	// (0x0005d81c) uni_indicator_pane_g5_ParamLimits

0x9ce1,	// (0x0005d81c) uni_indicator_pane_g5

0x9cf5,	// (0x0005d830) uni_indicator_pane_g6_ParamLimits

0x9cf5,	// (0x0005d830) uni_indicator_pane_g6

0xf92c,	// (0x00063467) uni_indicator_pane_g_ParamLimits

0xc734,	// (0x0006026f) popup_tmo_note_window_ParamLimits

0xc734,	// (0x0006026f) popup_tmo_note_window

0x735f,	// (0x0005ae9a) fshwr2_bg_pane

0xe2ee,	// (0x00061e29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2ee,	// (0x00061e29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec3,	// (0x000639fe) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec3,	// (0x000639fe) fshwr2_func_candi_cell_pane_g

0xb154,	// (0x0005ec8f) bg_popup_window_pane_cp01

0xe327,	// (0x00061e62) bg_popup_window_pane_g1_cp01

0xe330,	// (0x00061e6b) bg_popup_window_pane_cp22_ParamLimits

0xe330,	// (0x00061e6b) bg_popup_window_pane_cp22

0xe33e,	// (0x00061e79) listscroll_tmo_link_pane_ParamLimits

0xe33e,	// (0x00061e79) listscroll_tmo_link_pane

0xe37e,	// (0x00061eb9) popup_tmo_note_window_g1_ParamLimits

0xe37e,	// (0x00061eb9) popup_tmo_note_window_g1

0xe38b,	// (0x00061ec6) tmo_note_info_pane_ParamLimits

0xe38b,	// (0x00061ec6) tmo_note_info_pane

0xe3a5,	// (0x00061ee0) list_tmo_note_info_pane_g1_ParamLimits

0xe3a5,	// (0x00061ee0) list_tmo_note_info_pane_g1

0xe3bc,	// (0x00061ef7) list_tmo_note_info_pane_g2_ParamLimits

0xe3bc,	// (0x00061ef7) list_tmo_note_info_pane_g2

0x0001,

0xfec8,	// (0x00063a03) list_tmo_note_info_pane_g_ParamLimits

0xfec8,	// (0x00063a03) list_tmo_note_info_pane_g

0xe3d8,	// (0x00061f13) list_tmo_note_info_text_pane_ParamLimits

0xe3d8,	// (0x00061f13) list_tmo_note_info_text_pane

0xe45d,	// (0x00061f98) list_tmo_link_pane

0xe46a,	// (0x00061fa5) scroll_pane_cp20

0xe477,	// (0x00061fb2) list_single_tmo_link_pane_ParamLimits

0xe477,	// (0x00061fb2) list_single_tmo_link_pane

0xe487,	// (0x00061fc2) list_single_tmo_link_pane_t1

0xe495,	// (0x00061fd0) list_tmo_note_info_text_pane_t1_ParamLimits

0xe495,	// (0x00061fd0) list_tmo_note_info_text_pane_t1

0x5beb,	// (0x00059726) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5beb,	// (0x00059726) aid_size_touch_scroll_bar_cp01

0x5b28,	// (0x00059663) aid_size_touch_slider_marker

0x50cf,	// (0x00058c0a) popup_settings_window_ParamLimits

0x50cf,	// (0x00058c0a) popup_settings_window

0x3882,	// (0x000573bd) popup_candi_list_indi_window

0x84b0,	// (0x0005bfeb) aid_touch_navi_pane_ParamLimits

0x72b8,	// (0x0005adf3) rs_clock_indi_pane

0x72c1,	// (0x0005adfc) sctrl_sk_bottom_pane_ParamLimits

0x72d2,	// (0x0005ae0d) sctrl_sk_top_pane_ParamLimits

0x73d7,	// (0x0005af12) popup_fep_tooltip_window

0xdd65,	// (0x000618a0) aid_size_cell_widget_grid_ParamLimits

0xddd9,	// (0x00061914) cell_ai5_widget_pane_g1_ParamLimits

0xddd9,	// (0x00061914) cell_ai5_widget_pane_g1

0xde2c,	// (0x00061967) cell_ai5_widget_pane_g6_ParamLimits

0xde38,	// (0x00061973) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe46,	// (0x00063981) cell_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00063981) cell_ai5_widget_pane_g

0xdf67,	// (0x00061aa2) cell_ai5_widget_pane_t10_ParamLimits

0xdf67,	// (0x00061aa2) cell_ai5_widget_pane_t10

0xdf7d,	// (0x00061ab8) grid_ai5_widget_pane_ParamLimits

0xe01f,	// (0x00061b5a) cell_contacts_ai5_widget_pane_ParamLimits

0xe01f,	// (0x00061b5a) cell_contacts_ai5_widget_pane

0xe212,	// (0x00061d4d) popup_discreet_window_t3_ParamLimits

0xe212,	// (0x00061d4d) popup_discreet_window_t3

0x7b85,	// (0x0005b6c0) popup_fshwr2_char_preview_window_ParamLimits

0x7b85,	// (0x0005b6c0) popup_fshwr2_char_preview_window

0xe3f6,	// (0x00061f31) tmo_note_info_pane_t1

0xe40b,	// (0x00061f46) tmo_note_info_pane_t2

0xe424,	// (0x00061f5f) tmo_note_info_pane_t3

0xe439,	// (0x00061f74) tmo_note_info_pane_t4

0xe44b,	// (0x00061f86) tmo_note_info_pane_t5

0x0004,

0xfecd,	// (0x00063a08) tmo_note_info_pane_t

0xe45d,	// (0x00061f98) list_tmo_link_pane_ParamLimits

0xe46a,	// (0x00061fa5) scroll_pane_cp20_ParamLimits

0xb911,	// (0x0005f44c) bg_popup_fep_char_preview_window_cp01

0xe4ae,	// (0x00061fe9) popup_fshwr2_char_preview_window_t1

0xe4bc,	// (0x00061ff7) popup_candi_list_indi_window_g1

0xe4c5,	// (0x00062000) bg_cell_contacts_ai5_widget_pane

0xe4d1,	// (0x0006200c) cell_contacts_ai5_widget_pane_g1

0xe4e4,	// (0x0006201f) cell_contacts_ai5_widget_pane_g2

0xe4f0,	// (0x0006202b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed8,	// (0x00063a13) cell_contacts_ai5_widget_pane_g

0xe502,	// (0x0006203d) cell_contacts_ai5_widget_pane_t1

0xf1d1,	// (0x00062d0c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe57c,	// (0x000620b7) settings_container_pane

0x642c,	// (0x00059f67) listscroll_set_pane_copy1

0xa86f,	// (0x0005e3aa) scroll_pane_cp121_copy1

0xe588,	// (0x000620c3) set_content_pane_copy1

0xe590,	// (0x000620cb) aid_height_set_list_copy1_ParamLimits

0xe590,	// (0x000620cb) aid_height_set_list_copy1

0x9ef5,	// (0x0005da30) aid_size_parent_copy1_ParamLimits

0x9ef5,	// (0x0005da30) aid_size_parent_copy1

0xe59c,	// (0x000620d7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe59c,	// (0x000620d7) button_value_adjust_pane_cp6_copy1

0x7e37,	// (0x0005b972) list_highlight_pane_cp2_copy1_ParamLimits

0x7e37,	// (0x0005b972) list_highlight_pane_cp2_copy1

0xe5b0,	// (0x000620eb) list_set_pane_copy1_ParamLimits

0xe5b0,	// (0x000620eb) list_set_pane_copy1

0xe517,	// (0x00062052) main_pane_set_t1_copy1_ParamLimits

0xe517,	// (0x00062052) main_pane_set_t1_copy1

0xe551,	// (0x0006208c) main_pane_set_t2_copy1_ParamLimits

0xe551,	// (0x0006208c) main_pane_set_t2_copy1

0xe677,	// (0x000621b2) main_pane_set_t3_copy1

0xe685,	// (0x000621c0) main_pane_set_t4_copy1

0xe570,	// (0x000620ab) set_content_pane_g1_copy1_ParamLimits

0xe570,	// (0x000620ab) set_content_pane_g1_copy1

0xe693,	// (0x000621ce) setting_code_pane_copy1

0xe69b,	// (0x000621d6) setting_slider_graphic_pane_copy1

0xe69b,	// (0x000621d6) setting_slider_pane_copy1

0xe69b,	// (0x000621d6) setting_text_pane_copy1

0xe69b,	// (0x000621d6) setting_volume_pane_copy1

0xe693,	// (0x000621ce) settings_code_pane_cp2_copy1

0xe6a3,	// (0x000621de) settings_code_pane_cp_copy1_ParamLimits

0xe6a3,	// (0x000621de) settings_code_pane_cp_copy1

0x7b9d,	// (0x0005b6d8) volume_set_pane_copy1

0xe6b7,	// (0x000621f2) volume_set_pane_g10_copy1

0xe6c3,	// (0x000621fe) volume_set_pane_g1_copy1

0xe6cd,	// (0x00062208) volume_set_pane_g2_copy1

0xe6d7,	// (0x00062212) volume_set_pane_g3_copy1

0xe6e1,	// (0x0006221c) volume_set_pane_g4_copy1

0xe6eb,	// (0x00062226) volume_set_pane_g5_copy1

0xe6f5,	// (0x00062230) volume_set_pane_g6_copy1

0xe6ff,	// (0x0006223a) volume_set_pane_g7_copy1

0xe709,	// (0x00062244) volume_set_pane_g8_copy1

0xe713,	// (0x0006224e) volume_set_pane_g9_copy1

0xebbc,	// (0x000626f7) bg_set_opt_pane_cp_copy1_ParamLimits

0xebbc,	// (0x000626f7) bg_set_opt_pane_cp_copy1

0x7ba9,	// (0x0005b6e4) setting_slider_pane_t1_copy1_ParamLimits

0x7ba9,	// (0x0005b6e4) setting_slider_pane_t1_copy1

0x7bc7,	// (0x0005b702) setting_slider_pane_t2_copy1_ParamLimits

0x7bc7,	// (0x0005b702) setting_slider_pane_t2_copy1

0x7be1,	// (0x0005b71c) setting_slider_pane_t3_copy1_ParamLimits

0x7be1,	// (0x0005b71c) setting_slider_pane_t3_copy1

0x7bf9,	// (0x0005b734) slider_set_pane_copy1_ParamLimits

0x7bf9,	// (0x0005b734) slider_set_pane_copy1

0xf22c,	// (0x00062d67) set_opt_bg_pane_g1_copy2

0xf234,	// (0x00062d6f) set_opt_bg_pane_g2_copy2

0xe71d,	// (0x00062258) set_opt_bg_pane_g3_copy2

0xf244,	// (0x00062d7f) set_opt_bg_pane_g4_copy2

0xf24c,	// (0x00062d87) set_opt_bg_pane_g5_copy2

0xf254,	// (0x00062d8f) set_opt_bg_pane_g6_copy2

0xe727,	// (0x00062262) set_opt_bg_pane_g7_copy2

0xe731,	// (0x0006226c) set_opt_bg_pane_g8_copy2

0xe73b,	// (0x00062276) set_opt_bg_pane_g9_copy2

0xe745,	// (0x00062280) aid_size_touch_slider_mark_copy1_ParamLimits

0xe745,	// (0x00062280) aid_size_touch_slider_mark_copy1

0xe759,	// (0x00062294) slider_set_pane_g1_copy1

0xe762,	// (0x0006229d) slider_set_pane_g2_copy1

0xb8dd,	// (0x0005f418) slider_set_pane_g3_copy1_ParamLimits

0xb8dd,	// (0x0005f418) slider_set_pane_g3_copy1

0xb8f1,	// (0x0005f42c) slider_set_pane_g4_copy1_ParamLimits

0xb8f1,	// (0x0005f42c) slider_set_pane_g4_copy1

0xd704,	// (0x0006123f) slider_set_pane_g5_copy1_ParamLimits

0xd704,	// (0x0006123f) slider_set_pane_g5_copy1

0xb8dd,	// (0x0005f418) slider_set_pane_g6_copy1_ParamLimits

0xb8dd,	// (0x0005f418) slider_set_pane_g6_copy1

0xe76a,	// (0x000622a5) slider_set_pane_g7_copy1_ParamLimits

0xe76a,	// (0x000622a5) slider_set_pane_g7_copy1

0xb925,	// (0x0005f460) bg_set_opt_pane_cp2_copy1

0xe780,	// (0x000622bb) setting_slider_graphic_pane_g1_copy1

0xe789,	// (0x000622c4) setting_slider_graphic_pane_t1_copy1

0xe799,	// (0x000622d4) setting_slider_graphic_pane_t2_copy1

0xe7a9,	// (0x000622e4) slider_set_pane_cp_copy1

0xe7b9,	// (0x000622f4) input_focus_pane_cp1_copy1

0xe7c2,	// (0x000622fd) list_set_text_pane_copy1

0xe7ca,	// (0x00062305) setting_text_pane_g1_copy1

0x33e2,	// (0x00056f1d) set_text_pane_t1_copy1

0xe7b9,	// (0x000622f4) input_focus_pane_cp2_copy1

0xe7ca,	// (0x00062305) setting_code_pane_g1_copy1

0xe7d3,	// (0x0006230e) setting_code_pane_t1_copy1

0xe7e1,	// (0x0006231c) list_set_graphic_pane_copy1

0xb925,	// (0x0005f460) bg_set_opt_pane_cp4_copy1

0x62c9,	// (0x00059e04) list_set_graphic_pane_g1_copy1_ParamLimits

0x62c9,	// (0x00059e04) list_set_graphic_pane_g1_copy1

0xe7f3,	// (0x0006232e) list_set_graphic_pane_g2_copy1

0x62e1,	// (0x00059e1c) list_set_graphic_pane_t1_copy1_ParamLimits

0x62e1,	// (0x00059e1c) list_set_graphic_pane_t1_copy1

0xb154,	// (0x0005ec8f) rs_clock_indi_pane_g1

0xe7fb,	// (0x00062336) rs_clock_indi_pane_t1

0xe809,	// (0x00062344) rs_indi_pane

0xe811,	// (0x0006234c) rs_indi_pane_g1

0xe81a,	// (0x00062355) rs_indi_pane_g2

0xe823,	// (0x0006235e) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x00063a1a) rs_indi_pane_g

0x642c,	// (0x00059f67) bg_popup_preview_window_pane_cp03

0xe82c,	// (0x00062367) popup_fep_tooltip_window_t1

0xbedc,	// (0x0005fa17) popup_note2_window_g2_ParamLimits

0xbedc,	// (0x0005fa17) popup_note2_window_g2

0x0001,

0xfc78,	// (0x000637b3) popup_note2_window_g_ParamLimits

0xfc78,	// (0x000637b3) popup_note2_window_g

0xc3e4,	// (0x0005ff1f) bg_popup_sub_pane_cp11_ParamLimits

0xc3f1,	// (0x0005ff2c) cell_ai3_links_pane_g1_ParamLimits

0xc408,	// (0x0005ff43) cell_ai3_links_pane_t1

0x33e2,	// (0x00056f1d) set_text_pane_t1_copy1_ParamLimits

0x6355,	// (0x00059e90) cell_graphic_popup_pane_cp2_ParamLimits

0x6355,	// (0x00059e90) cell_graphic_popup_pane_cp2

0xe83a,	// (0x00062375) cell_graphic_popup_pane_g1_cp2

0xef26,	// (0x00062a61) cell_graphic_popup_pane_g2_cp2

0xe842,	// (0x0006237d) cell_graphic_popup_pane_g3_cp2

0xe84a,	// (0x00062385) cell_graphic_popup_pane_t2_cp2

0xef37,	// (0x00062a72) grid_highlight_pane_cp3_cp2

0xf4d5,	// (0x00063010) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf1d1,	// (0x00062d0c) main_tmo_pane_ParamLimits

0xc728,	// (0x00060263) popup_tmo_big_image_note_window

0xddc9,	// (0x00061904) cell_ai5_widget_list_pane

0xddd1,	// (0x0006190c) cell_ai5_widget_lrg_icon_pane

0xe3f6,	// (0x00061f31) tmo_note_info_pane_t1_ParamLimits

0xe40b,	// (0x00061f46) tmo_note_info_pane_t2_ParamLimits

0xe424,	// (0x00061f5f) tmo_note_info_pane_t3_ParamLimits

0xe439,	// (0x00061f74) tmo_note_info_pane_t4_ParamLimits

0xe44b,	// (0x00061f86) tmo_note_info_pane_t5_ParamLimits

0xfecd,	// (0x00063a08) tmo_note_info_pane_t_ParamLimits

0xe57c,	// (0x000620b7) settings_container_pane_ParamLimits

0xe7b1,	// (0x000622ec) indicator_popup_pane_cp5

0xe7b1,	// (0x000622ec) indicator_popup_pane_cp6

0xe7e1,	// (0x0006231c) list_set_graphic_pane_copy1_ParamLimits

0xb911,	// (0x0005f44c) bg_popup_window_pane_cp23

0xe858,	// (0x00062393) popup_tmo_big_image_note_window_g1

0xe864,	// (0x0006239f) popup_tmo_big_image_note_window_t1

0xe874,	// (0x000623af) popup_tmo_big_image_note_window_t2

0xe884,	// (0x000623bf) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x00063a21) popup_tmo_big_image_note_window_t

0xe894,	// (0x000623cf) cell_ai5_widget_lrg_icon_pane_g1

0xe89c,	// (0x000623d7) cell_ai5_widget_lrg_icon_pane_t1

0xe8aa,	// (0x000623e5) cell_ai5_widget_list_row_pane_ParamLimits

0xe8aa,	// (0x000623e5) cell_ai5_widget_list_row_pane

0xe8c3,	// (0x000623fe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8c3,	// (0x000623fe) cell_ai5_widget_list_row_pane_g1

0xe8d0,	// (0x0006240b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8d0,	// (0x0006240b) cell_ai5_widget_list_row_pane_t1

0xe8e8,	// (0x00062423) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8e8,	// (0x00062423) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x00063a28) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x00063a28) cell_ai5_widget_list_row_pane_t

0x4f7c,	// (0x00058ab7) main_fep_vtchi_ss_pane

0x7c1e,	// (0x0005b759) popup_fep_char_pre_window

0x7c26,	// (0x0005b761) popup_fep_ituss_window

0x7c47,	// (0x0005b782) popup_fep_vkbss_window

0xe910,	// (0x0006244b) grid_vkbss_keypad_pane_ParamLimits

0xe910,	// (0x0006244b) grid_vkbss_keypad_pane

0xe920,	// (0x0006245b) ituss_keypad_pane

0x7c74,	// (0x0005b7af) aid_vkbss_key_offset_ParamLimits

0x7c74,	// (0x0005b7af) aid_vkbss_key_offset

0x7c80,	// (0x0005b7bb) cell_vkbss_key_pane_ParamLimits

0x7c80,	// (0x0005b7bb) cell_vkbss_key_pane

0xe930,	// (0x0006246b) bg_cell_vkbss_key_g1_ParamLimits

0xe930,	// (0x0006246b) bg_cell_vkbss_key_g1

0xe93c,	// (0x00062477) cell_vkbss_key_3p_pane_ParamLimits

0xe93c,	// (0x00062477) cell_vkbss_key_3p_pane

0xe956,	// (0x00062491) cell_vkbss_key_g1_ParamLimits

0xe956,	// (0x00062491) cell_vkbss_key_g1

0xe970,	// (0x000624ab) cell_vkbss_key_t1_ParamLimits

0xe970,	// (0x000624ab) cell_vkbss_key_t1

0x7c96,	// (0x0005b7d1) cell_ituss_key_pane_ParamLimits

0x7c96,	// (0x0005b7d1) cell_ituss_key_pane

0xe99b,	// (0x000624d6) bg_cell_ituss_key_g1_ParamLimits

0xe99b,	// (0x000624d6) bg_cell_ituss_key_g1

0xe9a7,	// (0x000624e2) cell_ituss_key_pane_g1_ParamLimits

0xe9a7,	// (0x000624e2) cell_ituss_key_pane_g1

0xe9bb,	// (0x000624f6) cell_ituss_key_pane_g2_ParamLimits

0xe9bb,	// (0x000624f6) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x00063a2f) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x00063a2f) cell_ituss_key_pane_g

0xe9ed,	// (0x00062528) cell_ituss_key_t1_ParamLimits

0xe9ed,	// (0x00062528) cell_ituss_key_t1

0xea27,	// (0x00062562) cell_ituss_key_t2_ParamLimits

0xea27,	// (0x00062562) cell_ituss_key_t2

0xea58,	// (0x00062593) cell_ituss_key_t3_ParamLimits

0xea58,	// (0x00062593) cell_ituss_key_t3

0xea89,	// (0x000625c4) cell_ituss_key_t4_ParamLimits

0xea89,	// (0x000625c4) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x00063a34) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x00063a34) cell_ituss_key_t

0xeaba,	// (0x000625f5) cell_vkbss_key_3p_pane_g1

0xeac2,	// (0x000625fd) cell_vkbss_key_3p_pane_g2

0xeaca,	// (0x00062605) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00063a3d) cell_vkbss_key_3p_pane_g

0xb911,	// (0x0005f44c) bg_popup_fep_char_preview_window_cp02

0xead2,	// (0x0006260d) popup_fep_char_pre_window_t1

0xdd5b,	// (0x00061896) main_ai5_sk_pane

0xe4c5,	// (0x00062000) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe4d1,	// (0x0006200c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe4e4,	// (0x0006201f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe4f0,	// (0x0006202b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed8,	// (0x00063a13) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe502,	// (0x0006203d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf1d1,	// (0x00062d0c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeae1,	// (0x0006261c) main_ai5_sk_pane_g1

0x8e00,	// (0x0005c93b) popup_query_code_window_g1

0x7c3c,	// (0x0005b777) popup_fep_vkb_icf_pane

0x7c52,	// (0x0005b78d) popup_fep_vtchi_icf_pane

0xf1d1,	// (0x00062d0c) bg_icf_pane

0xeaea,	// (0x00062625) list_vkb_icf_pane

0xf1d1,	// (0x00062d0c) bg_icf_pane_cp01

0xeaf6,	// (0x00062631) vtchi_icf_list_pane

0xeb07,	// (0x00062642) list_vkb_icf_pane_t1_ParamLimits

0xeb07,	// (0x00062642) list_vkb_icf_pane_t1

0xeb1d,	// (0x00062658) vtchi_icf_list_pane_t1_ParamLimits

0xeb1d,	// (0x00062658) vtchi_icf_list_pane_t1

0x7c26,	// (0x0005b761) popup_fep_ituss_window_ParamLimits

0x7c52,	// (0x0005b78d) popup_fep_vtchi_icf_pane_ParamLimits

0xe920,	// (0x0006245b) ituss_keypad_pane_ParamLimits

0x7c68,	// (0x0005b7a3) ituss_sks_pane

0xf1d1,	// (0x00062d0c) bg_icf_pane_ParamLimits

0x7c0f,	// (0x0005b74a) icf_edit_indi_pane_ParamLimits

0x7c0f,	// (0x0005b74a) icf_edit_indi_pane

0xeaea,	// (0x00062625) list_vkb_icf_pane_ParamLimits

0xf1d1,	// (0x00062d0c) bg_icf_pane_cp01_ParamLimits

0x7c0f,	// (0x0005b74a) icf_edit_indi_pane_cp01_ParamLimits

0x7c0f,	// (0x0005b74a) icf_edit_indi_pane_cp01

0xeafe,	// (0x00062639) vtchi_query_pane

0xb3cf,	// (0x0005ef0a) icf_edit_indi_pane_g1_ParamLimits

0xb3cf,	// (0x0005ef0a) icf_edit_indi_pane_g1

0xeb9f,	// (0x000626da) icf_edit_indi_pane_g2_ParamLimits

0xeb9f,	// (0x000626da) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00063a55) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00063a55) icf_edit_indi_pane_g

0xebae,	// (0x000626e9) icf_edit_indi_pane_t1

0xeb35,	// (0x00062670) bg_input_focus_pane_cp042

0xf10a,	// (0x00062c45) vtchi_button_pane

0xeb3e,	// (0x00062679) vtchi_query_pane_t1

0xeb4c,	// (0x00062687) vtchi_query_pane_t2

0xeb5a,	// (0x00062695) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00063a44) vtchi_query_pane_t

0xb911,	// (0x0005f44c) bg_button_pane_cp13

0xeb68,	// (0x000626a3) vtchi_button_pane_g1

0xeb70,	// (0x000626ab) ituss_sks_pane_g1

0xeb7b,	// (0x000626b6) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00063a4b) ituss_sks_pane_g

0xeb83,	// (0x000626be) ituss_sks_pane_t1

0xeb91,	// (0x000626cc) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00063a50) ituss_sks_pane_t

0xac04,	// (0x0005e73f) indicator_nsta_pane_cp_g1

0xac0d,	// (0x0005e748) indicator_nsta_pane_cp_g2

0xac15,	// (0x0005e750) indicator_nsta_pane_cp_g3

0xac1d,	// (0x0005e758) indicator_nsta_pane_cp_g4

0xac25,	// (0x0005e760) indicator_nsta_pane_cp_g5

0xac2d,	// (0x0005e768) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x000635f1) indicator_nsta_pane_cp_g

0xd430,	// (0x00060f6b) cell_graphic2_pane_t2_ParamLimits

0xd430,	// (0x00060f6b) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x0006390a) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x0006390a) cell_graphic2_pane_t

0xd45d,	// (0x00060f98) cell_graphic2_control_pane_t1

0x6013,	// (0x00059b4e) signal_pane_g3_ParamLimits

0x6013,	// (0x00059b4e) signal_pane_g3

0x6025,	// (0x00059b60) signal_pane_g4_ParamLimits

0x6025,	// (0x00059b60) signal_pane_g4

0xe8fa,	// (0x00062435) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8fa,	// (0x00062435) cell_ai5_widget_list_row_pane_t3

0xe9db,	// (0x00062516) cell_ituss_key_pane_t1_ParamLimits

0xe9db,	// (0x00062516) cell_ituss_key_pane_t1

0x8a7d,	// (0x0005c5b8) form_field_data_wide_pane_vc_t2_ParamLimits

0x8a7d,	// (0x0005c5b8) form_field_data_wide_pane_vc_t2

0x8a91,	// (0x0005c5cc) form_field_data_wide_pane_vc_t3_ParamLimits

0x8a91,	// (0x0005c5cc) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x0006334f) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x0006334f) form_field_data_wide_pane_vc_t

0xa8af,	// (0x0005e3ea) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa8af,	// (0x0005e3ea) form_field_slider_wide_pane_vc_t3

0xa985,	// (0x0005e4c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa985,	// (0x0005e4c0) form_field_popup_wide_pane_vc_t2

0xa99c,	// (0x0005e4d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa99c,	// (0x0005e4d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x000635e0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x000635e0) form_field_popup_wide_pane_vc_t

0x7b23,	// (0x0005b65e) aid_fshwr2_btn_pane_ParamLimits

0x7b2f,	// (0x0005b66a) aid_fshwr2_syb_pane_ParamLimits

0x7b40,	// (0x0005b67b) aid_fshwr2_txt_pane_ParamLimits

0x735f,	// (0x0005ae9a) fshwr2_bg_pane_ParamLimits

0x7b4c,	// (0x0005b687) fshwr2_func_candi_pane_ParamLimits

0x7b5d,	// (0x0005b698) fshwr2_hwr_syb_pane_ParamLimits

0x7b70,	// (0x0005b6ab) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

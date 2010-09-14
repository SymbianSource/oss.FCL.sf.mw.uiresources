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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000143 };

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
0xb7fc,	// (0x0000b93f) Screen

0xb808,	// (0x0000b94b) application_window_ParamLimits

0xb808,	// (0x0000b94b) application_window

0xf4ff,	// (0x0000f642) screen_g1

0xb840,	// (0x0000b983) area_bottom_pane_ParamLimits

0xb840,	// (0x0000b983) area_bottom_pane

0x0001,	// (0x00000144) area_top_pane_ParamLimits

0x0001,	// (0x00000144) area_top_pane

0x0095,	// (0x000001d8) main_pane_ParamLimits

0x0095,	// (0x000001d8) main_pane

0x0150,	// (0x00000293) misc_graphics

0xce6e,	// (0x0000cfb1) battery_pane_ParamLimits

0xce6e,	// (0x0000cfb1) battery_pane

0x4035,	// (0x00004178) bg_status_flat_pane_g8

0x403d,	// (0x00004180) bg_status_flat_pane_g9

0x318e,	// (0x000032d1) context_pane_ParamLimits

0x318e,	// (0x000032d1) context_pane

0xcfd9,	// (0x0000d11c) navi_pane_ParamLimits

0xcfd9,	// (0x0000d11c) navi_pane

0xd057,	// (0x0000d19a) signal_pane_ParamLimits

0xd057,	// (0x0000d19a) signal_pane

0x0008,

0xf843,	// (0x0000f986) bg_status_flat_pane_g

0xd0e7,	// (0x0000d22a) status_pane_g1_ParamLimits

0xd0e7,	// (0x0000d22a) status_pane_g1

0xd0fd,	// (0x0000d240) status_pane_g2_ParamLimits

0xd0fd,	// (0x0000d240) status_pane_g2

0x33b5,	// (0x000034f8) status_pane_g3_ParamLimits

0x33b5,	// (0x000034f8) status_pane_g3

0x0004,

0xf776,	// (0x0000f8b9) status_pane_g_ParamLimits

0xf776,	// (0x0000f8b9) status_pane_g

0xd109,	// (0x0000d24c) title_pane_ParamLimits

0xd109,	// (0x0000d24c) title_pane

0xd16c,	// (0x0000d2af) uni_indicator_pane_ParamLimits

0xd16c,	// (0x0000d2af) uni_indicator_pane

0x2a2b,	// (0x00002b6e) bg_list_pane_ParamLimits

0x2a2b,	// (0x00002b6e) bg_list_pane

0x2a4b,	// (0x00002b8e) find_pane

0x377c,	// (0x000038bf) listscroll_app_pane_ParamLimits

0x377c,	// (0x000038bf) listscroll_app_pane

0x2a5f,	// (0x00002ba2) listscroll_form_pane

0x2a67,	// (0x00002baa) listscroll_gen_pane_ParamLimits

0x2a67,	// (0x00002baa) listscroll_gen_pane

0x2a7b,	// (0x00002bbe) listscroll_set_pane

0x4df4,	// (0x00004f37) main_idle_act_pane

0x2504,	// (0x00002647) main_idle_trad_pane

0x2504,	// (0x00002647) main_list_empty_pane

0x2a53,	// (0x00002b96) main_midp_pane

0x2a95,	// (0x00002bd8) main_pane_g1_ParamLimits

0x2a95,	// (0x00002bd8) main_pane_g1

0xc73b,	// (0x0000c87e) popup_ai_message_window_ParamLimits

0xc73b,	// (0x0000c87e) popup_ai_message_window

0xc7cc,	// (0x0000c90f) popup_fep_china_uni_window_ParamLimits

0xc7cc,	// (0x0000c90f) popup_fep_china_uni_window

0x2bad,	// (0x00002cf0) popup_fep_japan_candidate_window_ParamLimits

0x2bad,	// (0x00002cf0) popup_fep_japan_candidate_window

0x2bcd,	// (0x00002d10) popup_fep_japan_predictive_window_ParamLimits

0x2bcd,	// (0x00002d10) popup_fep_japan_predictive_window

0xc828,	// (0x0000c96b) popup_find_window

0xc845,	// (0x0000c988) popup_grid_graphic_window_ParamLimits

0xc845,	// (0x0000c988) popup_grid_graphic_window

0x2c36,	// (0x00002d79) popup_large_graphic_colour_window

0xc8e9,	// (0x0000ca2c) popup_menu_window_ParamLimits

0xc8e9,	// (0x0000ca2c) popup_menu_window

0xcabb,	// (0x0000cbfe) popup_note_image_window

0xca81,	// (0x0000cbc4) popup_note_wait_window_ParamLimits

0xca81,	// (0x0000cbc4) popup_note_wait_window

0xcad3,	// (0x0000cc16) popup_note_window_ParamLimits

0xcad3,	// (0x0000cc16) popup_note_window

0xcb79,	// (0x0000ccbc) popup_query_code_window_ParamLimits

0xcb79,	// (0x0000ccbc) popup_query_code_window

0x2e7e,	// (0x00002fc1) popup_query_data_code_window_ParamLimits

0x2e7e,	// (0x00002fc1) popup_query_data_code_window

0xcbb3,	// (0x0000ccf6) popup_query_data_window_ParamLimits

0xcbb3,	// (0x0000ccf6) popup_query_data_window

0xcc35,	// (0x0000cd78) popup_query_sat_info_window_ParamLimits

0xcc35,	// (0x0000cd78) popup_query_sat_info_window

0xcccc,	// (0x0000ce0f) popup_snote_single_graphic_window_ParamLimits

0xcccc,	// (0x0000ce0f) popup_snote_single_graphic_window

0xcccc,	// (0x0000ce0f) popup_snote_single_text_window_ParamLimits

0xcccc,	// (0x0000ce0f) popup_snote_single_text_window

0x2f05,	// (0x00003048) popup_sub_window_general

0x3035,	// (0x00003178) popup_window_general_ParamLimits

0x3035,	// (0x00003178) popup_window_general

0x304a,	// (0x0000318d) power_save_pane

0xc595,	// (0x0000c6d8) control_pane_g1_ParamLimits

0xc595,	// (0x0000c6d8) control_pane_g1

0xc5be,	// (0x0000c701) control_pane_g2_ParamLimits

0xc5be,	// (0x0000c701) control_pane_g2

0x28c2,	// (0x00002a05) control_pane_g3_ParamLimits

0x28c2,	// (0x00002a05) control_pane_g3

0x0007,

0xf75e,	// (0x0000f8a1) control_pane_g_ParamLimits

0xf75e,	// (0x0000f8a1) control_pane_g

0xc626,	// (0x0000c769) control_pane_t1_ParamLimits

0xc626,	// (0x0000c769) control_pane_t1

0xc68e,	// (0x0000c7d1) control_pane_t2_ParamLimits

0xc68e,	// (0x0000c7d1) control_pane_t2

0x0002,

0xf76f,	// (0x0000f8b2) control_pane_t_ParamLimits

0xf76f,	// (0x0000f8b2) control_pane_t

0xc4ee,	// (0x0000c631) navi_navi_volume_pane_cp1

0xc4f6,	// (0x0000c639) status_small_icon_pane

0x27a9,	// (0x000028ec) status_small_pane_g1_ParamLimits

0x27a9,	// (0x000028ec) status_small_pane_g1

0xc4fe,	// (0x0000c641) status_small_pane_g2_ParamLimits

0xc4fe,	// (0x0000c641) status_small_pane_g2

0xc50a,	// (0x0000c64d) status_small_pane_g3_ParamLimits

0xc50a,	// (0x0000c64d) status_small_pane_g3

0xc516,	// (0x0000c659) status_small_pane_g4_ParamLimits

0xc516,	// (0x0000c659) status_small_pane_g4

0xc522,	// (0x0000c665) status_small_pane_g5_ParamLimits

0xc522,	// (0x0000c665) status_small_pane_g5

0xc530,	// (0x0000c673) status_small_pane_g6_ParamLimits

0xc530,	// (0x0000c673) status_small_pane_g6

0x0007,

0xf74d,	// (0x0000f890) status_small_pane_g_ParamLimits

0xf74d,	// (0x0000f890) status_small_pane_g

0xc55f,	// (0x0000c6a2) status_small_pane_t1

0xc581,	// (0x0000c6c4) status_small_wait_pane_ParamLimits

0xc581,	// (0x0000c6c4) status_small_wait_pane

0xc373,	// (0x0000c4b6) aid_levels_signal_ParamLimits

0xc373,	// (0x0000c4b6) aid_levels_signal

0xc38b,	// (0x0000c4ce) signal_pane_g1_ParamLimits

0xc38b,	// (0x0000c4ce) signal_pane_g1

0xc3a6,	// (0x0000c4e9) signal_pane_g2_ParamLimits

0xc3a6,	// (0x0000c4e9) signal_pane_g2

0x0003,

0xf6de,	// (0x0000f821) signal_pane_g_ParamLimits

0xf6de,	// (0x0000f821) signal_pane_g

0x1dab,	// (0x00001eee) context_pane_g1

0xba1e,	// (0x0000bb61) title_pane_g1

0xba55,	// (0x0000bb98) title_pane_t1

0x038c,	// (0x000004cf) title_pane_t2

0x03b2,	// (0x000004f5) title_pane_t3

0x0002,

0xf532,	// (0x0000f675) title_pane_t

0xd194,	// (0x0000d2d7) aid_levels_battery_ParamLimits

0xd194,	// (0x0000d2d7) aid_levels_battery

0xd1b0,	// (0x0000d2f3) battery_pane_g1_ParamLimits

0xd1b0,	// (0x0000d2f3) battery_pane_g1

0xd1cd,	// (0x0000d310) battery_pane_g2_ParamLimits

0xd1cd,	// (0x0000d310) battery_pane_g2

0x0001,

0xf781,	// (0x0000f8c4) battery_pane_g_ParamLimits

0xf781,	// (0x0000f8c4) battery_pane_g

0xd416,	// (0x0000d559) uni_indicator_pane_g1

0xd42c,	// (0x0000d56f) uni_indicator_pane_g2

0xd442,	// (0x0000d585) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x0000fa2e) uni_indicator_pane_g

0x2379,	// (0x000024bc) navi_icon_pane_ParamLimits

0x2379,	// (0x000024bc) navi_icon_pane

0x22b7,	// (0x000023fa) navi_midp_pane

0x2395,	// (0x000024d8) navi_navi_pane

0x239f,	// (0x000024e2) navi_text_pane_ParamLimits

0x239f,	// (0x000024e2) navi_text_pane

0xf4ff,	// (0x0000f642) status_small_wait_pane_g1

0x08b2,	// (0x000009f5) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0000fa29) status_small_wait_pane_g

0x47f4,	// (0x00004937) navi_navi_icon_text_pane

0x47fc,	// (0x0000493f) navi_navi_pane_g1_ParamLimits

0x47fc,	// (0x0000493f) navi_navi_pane_g1

0x480e,	// (0x00004951) navi_navi_pane_g2_ParamLimits

0x480e,	// (0x00004951) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0000f9f7) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0000f9f7) navi_navi_pane_g

0x4820,	// (0x00004963) navi_navi_tabs_pane

0x4829,	// (0x0000496c) navi_navi_text_pane

0x47f4,	// (0x00004937) navi_navi_volume_pane

0x47d0,	// (0x00004913) navi_text_pane_t1

0x47c4,	// (0x00004907) navi_icon_pane_g1

0x4717,	// (0x0000485a) navi_navi_text_pane_t1

0x4706,	// (0x00004849) navi_navi_volume_pane_g1

0x470e,	// (0x00004851) volume_small_pane

0x466c,	// (0x000047af) navi_navi_icon_text_pane_g1

0x4674,	// (0x000047b7) navi_navi_icon_text_pane_t1

0x2395,	// (0x000024d8) navi_tabs_2_long_pane

0x2395,	// (0x000024d8) navi_tabs_2_pane

0x2395,	// (0x000024d8) navi_tabs_3_long_pane

0x2395,	// (0x000024d8) navi_tabs_3_pane

0x2395,	// (0x000024d8) navi_tabs_4_pane

0x45cb,	// (0x0000470e) tabs_2_active_pane_ParamLimits

0x45cb,	// (0x0000470e) tabs_2_active_pane

0x45db,	// (0x0000471e) tabs_2_passive_pane_ParamLimits

0x45db,	// (0x0000471e) tabs_2_passive_pane

0x4599,	// (0x000046dc) tabs_3_active_pane_ParamLimits

0x4599,	// (0x000046dc) tabs_3_active_pane

0x45a9,	// (0x000046ec) tabs_3_passive_pane_ParamLimits

0x45a9,	// (0x000046ec) tabs_3_passive_pane

0x45ba,	// (0x000046fd) tabs_3_passive_pane_cp_ParamLimits

0x45ba,	// (0x000046fd) tabs_3_passive_pane_cp

0x4555,	// (0x00004698) tabs_4_active_pane_ParamLimits

0x4555,	// (0x00004698) tabs_4_active_pane

0x4566,	// (0x000046a9) tabs_4_passive_pane_ParamLimits

0x4566,	// (0x000046a9) tabs_4_passive_pane

0x4577,	// (0x000046ba) tabs_4_passive_pane_cp_ParamLimits

0x4577,	// (0x000046ba) tabs_4_passive_pane_cp

0x4588,	// (0x000046cb) tabs_4_passive_pane_cp2_ParamLimits

0x4588,	// (0x000046cb) tabs_4_passive_pane_cp2

0x4531,	// (0x00004674) tabs_2_long_active_pane_ParamLimits

0x4531,	// (0x00004674) tabs_2_long_active_pane

0x4543,	// (0x00004686) tabs_2_long_passive_pane_ParamLimits

0x4543,	// (0x00004686) tabs_2_long_passive_pane

0x44f2,	// (0x00004635) tabs_3_long_active_pane_ParamLimits

0x44f2,	// (0x00004635) tabs_3_long_active_pane

0x4505,	// (0x00004648) tabs_3_long_passive_pane_ParamLimits

0x4505,	// (0x00004648) tabs_3_long_passive_pane

0x451e,	// (0x00004661) tabs_3_long_passive_pane_cp_ParamLimits

0x451e,	// (0x00004661) tabs_3_long_passive_pane_cp

0x4498,	// (0x000045db) volume_small_pane_g1

0x44a1,	// (0x000045e4) volume_small_pane_g2

0x44aa,	// (0x000045ed) volume_small_pane_g3

0x44b3,	// (0x000045f6) volume_small_pane_g4

0x44bc,	// (0x000045ff) volume_small_pane_g5

0x44c5,	// (0x00004608) volume_small_pane_g6

0x44ce,	// (0x00004611) volume_small_pane_g7

0x44d7,	// (0x0000461a) volume_small_pane_g8

0x44e0,	// (0x00004623) volume_small_pane_g9

0x44e9,	// (0x0000462c) volume_small_pane_g10

0x0009,

0xf880,	// (0x0000f9c3) volume_small_pane_g

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp2

0x03d2,	// (0x00000515) tabs_3_active_pane_g1

0xbae1,	// (0x0000bc24) tabs_3_active_pane_t1

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp2

0x03d2,	// (0x00000515) tabs_3_passive_pane_g1

0xbae1,	// (0x0000bc24) tabs_3_passive_pane_t1

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp3

0x03ec,	// (0x0000052f) tabs_4_active_pane_g1

0xbaf3,	// (0x0000bc36) tabs_4_active_pane_t1

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp3

0x03ec,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xbaf3,	// (0x0000bc36) tabs_4_1_passive_pane_t1

0x2a53,	// (0x00002b96) list_highlight_pane_cp2

0xd4c8,	// (0x0000d60b) list_set_pane_ParamLimits

0xd4c8,	// (0x0000d60b) list_set_pane

0xd562,	// (0x0000d6a5) main_pane_set_t1_ParamLimits

0xd562,	// (0x0000d6a5) main_pane_set_t1

0xd582,	// (0x0000d6c5) main_pane_set_t2_ParamLimits

0xd582,	// (0x0000d6c5) main_pane_set_t2

0xd596,	// (0x0000d6d9) main_pane_set_t3_ParamLimits

0xd596,	// (0x0000d6d9) main_pane_set_t3

0xd5a8,	// (0x0000d6eb) main_pane_set_t4_ParamLimits

0xd5a8,	// (0x0000d6eb) main_pane_set_t4

0x0003,

0xf950,	// (0x0000fa93) main_pane_set_t_ParamLimits

0xf950,	// (0x0000fa93) main_pane_set_t

0xd5ba,	// (0x0000d6fd) setting_code_pane

0xd5c4,	// (0x0000d707) setting_slider_graphic_pane

0xd5c4,	// (0x0000d707) setting_slider_pane

0xd5c4,	// (0x0000d707) setting_text_pane

0xd5c4,	// (0x0000d707) setting_volume_pane

0x0406,	// (0x00000549) volume_set_pane

0x03c4,	// (0x00000507) bg_set_opt_pane_cp

0x040e,	// (0x00000551) setting_slider_pane_t1

0x0427,	// (0x0000056a) setting_slider_pane_t2

0x0441,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0000f67c) setting_slider_pane_t

0x0459,	// (0x0000059c) slider_set_pane

0x0150,	// (0x00000293) bg_set_opt_pane_cp2

0x046f,	// (0x000005b2) setting_slider_graphic_pane_g1

0x0478,	// (0x000005bb) setting_slider_graphic_pane_t1

0x0488,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0000f683) setting_slider_graphic_pane_t

0x0498,	// (0x000005db) slider_set_pane_cp

0x0150,	// (0x00000293) input_focus_pane_cp1

0x4ddb,	// (0x00004f1e) list_set_text_pane

0xf4ff,	// (0x0000f642) setting_text_pane_g1

0x0150,	// (0x00000293) input_focus_pane_cp2

0xf4ff,	// (0x0000f642) setting_code_pane_g1

0x04a0,	// (0x000005e3) setting_code_pane_t1

0x04ae,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x04ae,	// (0x000005f1) set_text_pane_t1

0x1382,	// (0x000014c5) set_opt_bg_pane_g1

0x138a,	// (0x000014cd) set_opt_bg_pane_g2

0x4db5,	// (0x00004ef8) set_opt_bg_pane_g3

0x139a,	// (0x000014dd) set_opt_bg_pane_g4

0x13a2,	// (0x000014e5) set_opt_bg_pane_g5

0x13aa,	// (0x000014ed) set_opt_bg_pane_g6

0x4dbf,	// (0x00004f02) set_opt_bg_pane_g7

0x4dc7,	// (0x00004f0a) set_opt_bg_pane_g8

0x4dd1,	// (0x00004f14) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0000fa80) set_opt_bg_pane_g

0x4d44,	// (0x00004e87) slider_set_pane_g1

0x4d51,	// (0x00004e94) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0000fa71) slider_set_pane_g

0x4bda,	// (0x00004d1d) volume_set_pane_g1

0x4be2,	// (0x00004d25) volume_set_pane_g2

0x4bea,	// (0x00004d2d) volume_set_pane_g3

0x4bf2,	// (0x00004d35) volume_set_pane_g4

0x4bfa,	// (0x00004d3d) volume_set_pane_g5

0x4c02,	// (0x00004d45) volume_set_pane_g6

0x4c0a,	// (0x00004d4d) volume_set_pane_g7

0x4c12,	// (0x00004d55) volume_set_pane_g8

0x4c1a,	// (0x00004d5d) volume_set_pane_g9

0x4c22,	// (0x00004d65) volume_set_pane_g10

0x0009,

0xf906,	// (0x0000fa49) volume_set_pane_g

0xbb05,	// (0x0000bc48) indicator_pane_ParamLimits

0xbb05,	// (0x0000bc48) indicator_pane

0xbb2d,	// (0x0000bc70) main_idle_pane_g2_ParamLimits

0xbb2d,	// (0x0000bc70) main_idle_pane_g2

0xbb65,	// (0x0000bca8) main_pane_idle_g1_ParamLimits

0xbb65,	// (0x0000bca8) main_pane_idle_g1

0x0509,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x0509,	// (0x0000064c) popup_clock_digital_analogue_window

0xbb8c,	// (0x0000bccf) soft_indicator_pane_ParamLimits

0xbb8c,	// (0x0000bccf) soft_indicator_pane

0xbba6,	// (0x0000bce9) wallpaper_pane_ParamLimits

0xbba6,	// (0x0000bce9) wallpaper_pane

0xf4ff,	// (0x0000f642) wallpaper_pane_g1

0xbbb8,	// (0x0000bcfb) indicator_pane_g1_ParamLimits

0xbbb8,	// (0x0000bcfb) indicator_pane_g1

0x5356,	// (0x00005499) navi_navi_icon_text_pane_srt_g1

0x055b,	// (0x0000069e) soft_indicator_pane_t1

0x0575,	// (0x000006b8) aid_ps_area_pane

0xbbce,	// (0x0000bd11) aid_ps_clock_pane

0x0594,	// (0x000006d7) aid_ps_indicator_pane

0x05a0,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x05a0,	// (0x000006e3) indicator_ps_pane

0x05af,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x05af,	// (0x000006f2) power_save_pane_g1

0x05bb,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x05bb,	// (0x000006fe) power_save_pane_g2

0xf509,	// (0x0000f64c) aid_navinavi_width_pane

0x0575,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0000f688) power_save_pane_g_ParamLimits

0xf545,	// (0x0000f688) power_save_pane_g

0x05c9,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x05c9,	// (0x0000070c) power_save_pane_t1

0xbbce,	// (0x0000bd11) aid_ps_clock_pane_ParamLimits

0x0594,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x05db,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x05db,	// (0x0000071e) power_save_pane_t4

0x0001,

0xf54a,	// (0x0000f68d) power_save_pane_t_ParamLimits

0xf54a,	// (0x0000f68d) power_save_pane_t

0x0605,	// (0x00000748) power_save_t3_ParamLimits

0x0605,	// (0x00000748) power_save_t3

0x05f0,	// (0x00000733) power_save_t2_ParamLimits

0x05f0,	// (0x00000733) power_save_t2

0x061a,	// (0x0000075d) indicator_ps_pane_g1

0xbbdc,	// (0x0000bd1f) ai_gene_pane_ParamLimits

0xbbdc,	// (0x0000bd1f) ai_gene_pane

0xbbf3,	// (0x0000bd36) ai_links_pane_ParamLimits

0xbbf3,	// (0x0000bd36) ai_links_pane

0xbc0b,	// (0x0000bd4e) indicator_pane_cp1_ParamLimits

0xbc0b,	// (0x0000bd4e) indicator_pane_cp1

0xbc1a,	// (0x0000bd5d) main_pane_idle_g1_cp_ParamLimits

0xbc1a,	// (0x0000bd5d) main_pane_idle_g1_cp

0x0653,	// (0x00000796) popup_ai_links_title_window

0xbc32,	// (0x0000bd75) soft_indicator_pane_cp1_ParamLimits

0xbc32,	// (0x0000bd75) soft_indicator_pane_cp1

0x4abd,	// (0x00004c00) ai_links_pane_g1

0x4ac6,	// (0x00004c09) grid_ai_links_pane

0xd40d,	// (0x0000d550) ai_gene_pane_1

0x4aab,	// (0x00004bee) ai_gene_pane_2

0x4ab4,	// (0x00004bf7) list_highlight_pane_cp4

0xd3e9,	// (0x0000d52c) cell_ai_link_pane_ParamLimits

0xd3e9,	// (0x0000d52c) cell_ai_link_pane

0x4a7c,	// (0x00004bbf) cell_ai_link_pane_g1

0x08b2,	// (0x000009f5) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0000fa24) cell_ai_link_pane_g

0x0150,	// (0x00000293) grid_highlight_cp2

0x0150,	// (0x00000293) bg_popup_sub_pane_cp1

0x0676,	// (0x000007b9) popup_ai_links_title_window_t1

0x49ca,	// (0x00004b0d) ai_gene_pane_1_g1_ParamLimits

0x49ca,	// (0x00004b0d) ai_gene_pane_1_g1

0x49d6,	// (0x00004b19) ai_gene_pane_1_g2_ParamLimits

0x49d6,	// (0x00004b19) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x0000fa1a) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x0000fa1a) ai_gene_pane_1_g

0x49e3,	// (0x00004b26) ai_gene_pane_1_t1_ParamLimits

0x49e3,	// (0x00004b26) ai_gene_pane_1_t1

0x4a17,	// (0x00004b5a) grid_ai_soft_ind_pane

0x49b5,	// (0x00004af8) ai_gene_pane_2_t1_ParamLimits

0x49b5,	// (0x00004af8) ai_gene_pane_2_t1

0xbc46,	// (0x0000bd89) main_pane_empty_t1_ParamLimits

0xbc46,	// (0x0000bd89) main_pane_empty_t1

0xbc5e,	// (0x0000bda1) main_pane_empty_t2_ParamLimits

0xbc5e,	// (0x0000bda1) main_pane_empty_t2

0xbc73,	// (0x0000bdb6) main_pane_empty_t3_ParamLimits

0xbc73,	// (0x0000bdb6) main_pane_empty_t3

0xbc85,	// (0x0000bdc8) main_pane_empty_t4_ParamLimits

0xbc85,	// (0x0000bdc8) main_pane_empty_t4

0xbc97,	// (0x0000bdda) main_pane_empty_t5_ParamLimits

0xbc97,	// (0x0000bdda) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0000f692) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0000f692) main_pane_empty_t

0x14f5,	// (0x00001638) bg_popup_window_pane_ParamLimits

0x14f5,	// (0x00001638) bg_popup_window_pane

0x4725,	// (0x00004868) find_popup_pane_cp2_ParamLimits

0x4725,	// (0x00004868) find_popup_pane_cp2

0x4731,	// (0x00004874) heading_pane_ParamLimits

0x4731,	// (0x00004874) heading_pane

0x0150,	// (0x00000293) bg_popup_sub_pane

0xd36a,	// (0x0000d4ad) bg_popup_window_pane_g1_ParamLimits

0xd36a,	// (0x0000d4ad) bg_popup_window_pane_g1

0xd379,	// (0x0000d4bc) bg_popup_window_pane_g2_ParamLimits

0xd379,	// (0x0000d4bc) bg_popup_window_pane_g2

0xd385,	// (0x0000d4c8) bg_popup_window_pane_g3_ParamLimits

0xd385,	// (0x0000d4c8) bg_popup_window_pane_g3

0xd391,	// (0x0000d4d4) bg_popup_window_pane_g4_ParamLimits

0xd391,	// (0x0000d4d4) bg_popup_window_pane_g4

0xd3a0,	// (0x0000d4e3) bg_popup_window_pane_g5_ParamLimits

0xd3a0,	// (0x0000d4e3) bg_popup_window_pane_g5

0xd3b0,	// (0x0000d4f3) bg_popup_window_pane_g6_ParamLimits

0xd3b0,	// (0x0000d4f3) bg_popup_window_pane_g6

0xd3bc,	// (0x0000d4ff) bg_popup_window_pane_g7_ParamLimits

0xd3bc,	// (0x0000d4ff) bg_popup_window_pane_g7

0xd3cb,	// (0x0000d50e) bg_popup_window_pane_g8_ParamLimits

0xd3cb,	// (0x0000d50e) bg_popup_window_pane_g8

0xd3da,	// (0x0000d51d) bg_popup_window_pane_g9_ParamLimits

0xd3da,	// (0x0000d51d) bg_popup_window_pane_g9

0x46fa,	// (0x0000483d) bg_popup_window_pane_g10_ParamLimits

0x46fa,	// (0x0000483d) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0000f9e2) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0000f9e2) bg_popup_window_pane_g

0x4623,	// (0x00004766) bg_popup_heading_pane_ParamLimits

0x4623,	// (0x00004766) bg_popup_heading_pane

0x5299,	// (0x000053dc) tabs_4_passive_pane_cp_srt_ParamLimits

0x5299,	// (0x000053dc) tabs_4_passive_pane_cp_srt

0x52ab,	// (0x000053ee) tabs_4_passive_pane_srt_ParamLimits

0x4637,	// (0x0000477a) heading_pane_g2

0x52ab,	// (0x000053ee) tabs_4_passive_pane_srt

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp3_srt_ParamLimits

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp3_srt

0x463f,	// (0x00004782) heading_pane_t1_ParamLimits

0x463f,	// (0x00004782) heading_pane_t1

0x4656,	// (0x00004799) heading_pane_t2_ParamLimits

0x4656,	// (0x00004799) heading_pane_t2

0x0001,

0xf89a,	// (0x0000f9dd) heading_pane_t_ParamLimits

0xf89a,	// (0x0000f9dd) heading_pane_t

0x3ffd,	// (0x00004140) bg_popup_heading_pane_g1

0x40ac,	// (0x000041ef) bg_popup_heading_pane_g2

0x40b6,	// (0x000041f9) bg_popup_heading_pane_g3

0x40c0,	// (0x00004203) bg_popup_heading_pane_g4

0x40ca,	// (0x0000420d) bg_popup_heading_pane_g5

0x40d4,	// (0x00004217) bg_popup_heading_pane_g6

0x40dc,	// (0x0000421f) bg_popup_heading_pane_g7

0x40e4,	// (0x00004227) bg_popup_heading_pane_g8

0x40ee,	// (0x00004231) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x0000f999) bg_popup_heading_pane_g

0x35ce,	// (0x00003711) bg_popup_sub_pane_g1

0x35d6,	// (0x00003719) bg_popup_sub_pane_g2

0x35de,	// (0x00003721) bg_popup_sub_pane_g3

0x35e6,	// (0x00003729) bg_popup_sub_pane_g4

0x35ee,	// (0x00003731) bg_popup_sub_pane_g5

0x35f6,	// (0x00003739) bg_popup_sub_pane_g6

0x35fe,	// (0x00003741) bg_popup_sub_pane_g7

0x3606,	// (0x00003749) bg_popup_sub_pane_g8

0x360e,	// (0x00003751) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0000f973) bg_popup_sub_pane_g

0x06ea,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x06ea,	// (0x0000082d) bg_popup_window_pane_cp5

0x0706,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0706,	// (0x00000849) popup_note_window_g1

0x0712,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0712,	// (0x00000855) popup_note_window_t1

0x0728,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x0728,	// (0x0000086b) popup_note_window_t2

0x073e,	// (0x00000881) popup_note_window_t3_ParamLimits

0x073e,	// (0x00000881) popup_note_window_t3

0x0754,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0754,	// (0x00000897) popup_note_window_t4

0x077c,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x077c,	// (0x000008bf) popup_note_window_t5

0x0004,

0xf55a,	// (0x0000f69d) popup_note_window_t_ParamLimits

0xf55a,	// (0x0000f69d) popup_note_window_t

0x07c6,	// (0x00000909) bg_popup_window_pane_cp6_ParamLimits

0x07c6,	// (0x00000909) bg_popup_window_pane_cp6

0x3f79,	// (0x000040bc) popup_note_image_window_g1_ParamLimits

0x3f79,	// (0x000040bc) popup_note_image_window_g1

0x3f85,	// (0x000040c8) popup_note_image_window_g2_ParamLimits

0x3f85,	// (0x000040c8) popup_note_image_window_g2

0x0001,

0xf824,	// (0x0000f967) popup_note_image_window_g_ParamLimits

0xf824,	// (0x0000f967) popup_note_image_window_g

0x3f9e,	// (0x000040e1) popup_note_image_window_t1_ParamLimits

0x3f9e,	// (0x000040e1) popup_note_image_window_t1

0x3fb7,	// (0x000040fa) popup_note_image_window_t2_ParamLimits

0x3fb7,	// (0x000040fa) popup_note_image_window_t2

0x3fd0,	// (0x00004113) popup_note_image_window_t3_ParamLimits

0x3fd0,	// (0x00004113) popup_note_image_window_t3

0x0002,

0xf829,	// (0x0000f96c) popup_note_image_window_t_ParamLimits

0xf829,	// (0x0000f96c) popup_note_image_window_t

0x3e3a,	// (0x00003f7d) bg_popup_window_pane_cp7_ParamLimits

0x3e3a,	// (0x00003f7d) bg_popup_window_pane_cp7

0x3e6a,	// (0x00003fad) popup_note_wait_window_g1_ParamLimits

0x3e6a,	// (0x00003fad) popup_note_wait_window_g1

0x3e76,	// (0x00003fb9) popup_note_wait_window_g2_ParamLimits

0x3e76,	// (0x00003fb9) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x0000f955) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x0000f955) popup_note_wait_window_g

0x3e8e,	// (0x00003fd1) popup_note_wait_window_t1_ParamLimits

0x3e8e,	// (0x00003fd1) popup_note_wait_window_t1

0x3eb5,	// (0x00003ff8) popup_note_wait_window_t2_ParamLimits

0x3eb5,	// (0x00003ff8) popup_note_wait_window_t2

0x3ed2,	// (0x00004015) popup_note_wait_window_t3_ParamLimits

0x3ed2,	// (0x00004015) popup_note_wait_window_t3

0x3ee5,	// (0x00004028) popup_note_wait_window_t4_ParamLimits

0x3ee5,	// (0x00004028) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x0000f95c) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x0000f95c) popup_note_wait_window_t

0x3f0a,	// (0x0000404d) wait_bar_pane_ParamLimits

0x3f0a,	// (0x0000404d) wait_bar_pane

0x0150,	// (0x00000293) wait_anim_pane

0x0150,	// (0x00000293) wait_border_pane

0xf4ff,	// (0x0000f642) wait_anim_pane_g1

0xf4ff,	// (0x0000f642) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x0000f81c) wait_anim_pane_g

0x3dde,	// (0x00003f21) wait_border_pane_g1

0x3de9,	// (0x00003f2c) wait_border_pane_g2

0x3df2,	// (0x00003f35) wait_border_pane_g3

0x0002,

0xf80b,	// (0x0000f94e) wait_border_pane_g

0x3c49,	// (0x00003d8c) bg_popup_window_pane_cp16_ParamLimits

0x3c49,	// (0x00003d8c) bg_popup_window_pane_cp16

0x3d49,	// (0x00003e8c) indicator_popup_pane_cp4_ParamLimits

0x3d49,	// (0x00003e8c) indicator_popup_pane_cp4

0x3d5d,	// (0x00003ea0) popup_query_data_window_t1_ParamLimits

0x3d5d,	// (0x00003ea0) popup_query_data_window_t1

0x3d6f,	// (0x00003eb2) popup_query_data_window_t2_ParamLimits

0x3d6f,	// (0x00003eb2) popup_query_data_window_t2

0x3d88,	// (0x00003ecb) popup_query_data_window_t3_ParamLimits

0x3d88,	// (0x00003ecb) popup_query_data_window_t3

0x0002,

0xf804,	// (0x0000f947) popup_query_data_window_t_ParamLimits

0xf804,	// (0x0000f947) popup_query_data_window_t

0x3da2,	// (0x00003ee5) query_popup_data_pane_ParamLimits

0x3da2,	// (0x00003ee5) query_popup_data_pane

0x3db6,	// (0x00003ef9) query_popup_data_pane_cp1_ParamLimits

0x3db6,	// (0x00003ef9) query_popup_data_pane_cp1

0x3c49,	// (0x00003d8c) bg_popup_window_pane_cp10_ParamLimits

0x3c49,	// (0x00003d8c) bg_popup_window_pane_cp10

0x3c7b,	// (0x00003dbe) indicator_popup_pane_ParamLimits

0x3c7b,	// (0x00003dbe) indicator_popup_pane

0x3c9d,	// (0x00003de0) popup_query_code_window_t1_ParamLimits

0x3c9d,	// (0x00003de0) popup_query_code_window_t1

0x3cb7,	// (0x00003dfa) popup_query_code_window_t2_ParamLimits

0x3cb7,	// (0x00003dfa) popup_query_code_window_t2

0x3d00,	// (0x00003e43) popup_query_code_window_t3_ParamLimits

0x3d00,	// (0x00003e43) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x0000f940) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x0000f940) popup_query_code_window_t

0x3d2f,	// (0x00003e72) query_popup_pane_ParamLimits

0x3d2f,	// (0x00003e72) query_popup_pane

0x07c6,	// (0x00000909) bg_popup_window_pane_cp15_ParamLimits

0x07c6,	// (0x00000909) bg_popup_window_pane_cp15

0x07e4,	// (0x00000927) indicator_popup_pane_cp1_ParamLimits

0x07e4,	// (0x00000927) indicator_popup_pane_cp1

0x07f7,	// (0x0000093a) indicator_popup_pane_cp2_ParamLimits

0x07f7,	// (0x0000093a) indicator_popup_pane_cp2

0x080a,	// (0x0000094d) popup_query_data_code_window_g1_ParamLimits

0x080a,	// (0x0000094d) popup_query_data_code_window_g1

0x081d,	// (0x00000960) popup_query_data_code_window_t1_ParamLimits

0x081d,	// (0x00000960) popup_query_data_code_window_t1

0x082f,	// (0x00000972) popup_query_data_code_window_t2_ParamLimits

0x082f,	// (0x00000972) popup_query_data_code_window_t2

0x0841,	// (0x00000984) popup_query_data_code_window_t3_ParamLimits

0x0841,	// (0x00000984) popup_query_data_code_window_t3

0x0857,	// (0x0000099a) popup_query_data_code_window_t4_ParamLimits

0x0857,	// (0x0000099a) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0000f6a8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0000f6a8) popup_query_data_code_window_t

0x363b,	// (0x0000377e) list_single_midp_graphic_pane_g3

0x086f,	// (0x000009b2) query_popup_data_pane_cp2_ParamLimits

0x0882,	// (0x000009c5) query_popup_pane_cp2_ParamLimits

0x0882,	// (0x000009c5) query_popup_pane_cp2

0x0150,	// (0x00000293) bg_popup_window_pane_cp11

0x3c2d,	// (0x00003d70) heading_pane_cp5

0x3c35,	// (0x00003d78) listscroll_popup_info_pane

0x0150,	// (0x00000293) input_focus_pane_cp3

0x0895,	// (0x000009d8) query_popup_pane_t1

0x08a3,	// (0x000009e6) list_popup_info_pane_ParamLimits

0x08a3,	// (0x000009e6) list_popup_info_pane

0x08b2,	// (0x000009f5) listscroll_popup_info_pane_g1

0x08ba,	// (0x000009fd) scroll_pane_cp7

0x08c4,	// (0x00000a07) popup_info_list_pane_t1_ParamLimits

0x08c4,	// (0x00000a07) popup_info_list_pane_t1

0x08de,	// (0x00000a21) popup_info_list_pane_t2_ParamLimits

0x08de,	// (0x00000a21) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0000f6b1) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0000f6b1) popup_info_list_pane_t

0x0150,	// (0x00000293) bg_popup_window_pane_cp12

0x538d,	// (0x000054d0) find_popup_pane

0x03c4,	// (0x00000507) bg_popup_window_pane_cp3

0x08f8,	// (0x00000a3b) heading_pane_cp3

0x0907,	// (0x00000a4a) listscroll_popup_graphic_pane

0x0150,	// (0x00000293) bg_popup_window_pane_cp4

0xbcf9,	// (0x0000be3c) heading_pane_cp4

0x0971,	// (0x00000ab4) listscroll_popup_colour_pane

0xbd03,	// (0x0000be46) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbd03,	// (0x0000be46) cell_large_graphic_colour_none_popup_pane

0xbd17,	// (0x0000be5a) grid_large_graphic_colour_popup_pane_ParamLimits

0xbd17,	// (0x0000be5a) grid_large_graphic_colour_popup_pane

0xbd3b,	// (0x0000be7e) listscroll_popup_colour_pane_g1_ParamLimits

0xbd3b,	// (0x0000be7e) listscroll_popup_colour_pane_g1

0xbd52,	// (0x0000be95) listscroll_popup_colour_pane_g2_ParamLimits

0xbd52,	// (0x0000be95) listscroll_popup_colour_pane_g2

0xbd69,	// (0x0000beac) listscroll_popup_colour_pane_g3_ParamLimits

0xbd69,	// (0x0000beac) listscroll_popup_colour_pane_g3

0xbd79,	// (0x0000bebc) listscroll_popup_colour_pane_g4_ParamLimits

0xbd79,	// (0x0000bebc) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0000f6b6) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0000f6b6) listscroll_popup_colour_pane_g

0x09ff,	// (0x00000b42) scroll_pane_cp6_ParamLimits

0x09ff,	// (0x00000b42) scroll_pane_cp6

0xbd89,	// (0x0000becc) cell_large_graphic_colour_popup_pane_ParamLimits

0xbd89,	// (0x0000becc) cell_large_graphic_colour_popup_pane

0x0a30,	// (0x00000b73) cell_large_graphic_colour_none_popup_pane_t1

0x0150,	// (0x00000293) grid_highlight_pane_cp5

0x0a3f,	// (0x00000b82) cell_large_graphic_colour_popup_pane_g1

0x0a47,	// (0x00000b8a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0000f6bf) cell_large_graphic_colour_popup_pane_g

0x0a4f,	// (0x00000b92) cell_large_graphic_colour_popup_pane_g2_copy1

0x0a58,	// (0x00000b9b) grid_highlight_pane_cp4

0x0a60,	// (0x00000ba3) bg_popup_window_pane_cp8_ParamLimits

0x0a60,	// (0x00000ba3) bg_popup_window_pane_cp8

0x0a7b,	// (0x00000bbe) popup_snote_single_text_window_g1_ParamLimits

0x0a7b,	// (0x00000bbe) popup_snote_single_text_window_g1

0x0a8d,	// (0x00000bd0) popup_snote_single_text_window_t1_ParamLimits

0x0a8d,	// (0x00000bd0) popup_snote_single_text_window_t1

0x0aa0,	// (0x00000be3) popup_snote_single_text_window_t2_ParamLimits

0x0aa0,	// (0x00000be3) popup_snote_single_text_window_t2

0x0ab3,	// (0x00000bf6) popup_snote_single_text_window_t3_ParamLimits

0x0ab3,	// (0x00000bf6) popup_snote_single_text_window_t3

0x0aec,	// (0x00000c2f) popup_snote_single_text_window_t4_ParamLimits

0x0aec,	// (0x00000c2f) popup_snote_single_text_window_t4

0x0b20,	// (0x00000c63) popup_snote_single_text_window_t5_ParamLimits

0x0b20,	// (0x00000c63) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0000f6c4) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0000f6c4) popup_snote_single_text_window_t

0x0b4f,	// (0x00000c92) bg_popup_window_pane_cp9_ParamLimits

0x0b4f,	// (0x00000c92) bg_popup_window_pane_cp9

0x0a7b,	// (0x00000bbe) popup_snote_single_graphic_window_g1_ParamLimits

0x0a7b,	// (0x00000bbe) popup_snote_single_graphic_window_g1

0x0b5d,	// (0x00000ca0) popup_snote_single_graphic_window_g2_ParamLimits

0x0b5d,	// (0x00000ca0) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0000f6cf) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0000f6cf) popup_snote_single_graphic_window_g

0x0b69,	// (0x00000cac) popup_snote_single_graphic_window_t1_ParamLimits

0x0b69,	// (0x00000cac) popup_snote_single_graphic_window_t1

0x0b7c,	// (0x00000cbf) popup_snote_single_graphic_window_t2_ParamLimits

0x0b7c,	// (0x00000cbf) popup_snote_single_graphic_window_t2

0x0b8f,	// (0x00000cd2) popup_snote_single_graphic_window_t3_ParamLimits

0x0b8f,	// (0x00000cd2) popup_snote_single_graphic_window_t3

0x0bc8,	// (0x00000d0b) popup_snote_single_graphic_window_t4_ParamLimits

0x0bc8,	// (0x00000d0b) popup_snote_single_graphic_window_t4

0x0bfc,	// (0x00000d3f) popup_snote_single_graphic_window_t5_ParamLimits

0x0bfc,	// (0x00000d3f) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0000f6d4) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0000f6d4) popup_snote_single_graphic_window_t

0x5217,	// (0x0000535a) grid_graphic_popup_pane_ParamLimits

0x5217,	// (0x0000535a) grid_graphic_popup_pane

0x5241,	// (0x00005384) listscroll_popup_graphic_pane_g1_ParamLimits

0x5241,	// (0x00005384) listscroll_popup_graphic_pane_g1

0xd6fb,	// (0x0000d83e) listscroll_popup_graphic_pane_g2_ParamLimits

0xd6fb,	// (0x0000d83e) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x0000fabd) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x0000fabd) listscroll_popup_graphic_pane_g

0x5269,	// (0x000053ac) scroll_pane_cp5

0xd6b8,	// (0x0000d7fb) cell_graphic_popup_pane_ParamLimits

0xd6b8,	// (0x0000d7fb) cell_graphic_popup_pane

0x5189,	// (0x000052cc) cell_graphic_popup_pane_g1

0x5191,	// (0x000052d4) cell_graphic_popup_pane_g2

0x0a4f,	// (0x00000b92) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x0000fab6) cell_graphic_popup_pane_g

0x519a,	// (0x000052dd) cell_graphic_popup_pane_t2

0x0a58,	// (0x00000b9b) grid_highlight_pane_cp3

0x0c3d,	// (0x00000d80) list_gen_pane_ParamLimits

0x0c3d,	// (0x00000d80) list_gen_pane

0x0c6f,	// (0x00000db2) scroll_pane

0xd66f,	// (0x0000d7b2) bg_list_pane_g1_ParamLimits

0xd66f,	// (0x0000d7b2) bg_list_pane_g1

0x50fe,	// (0x00005241) bg_list_pane_g2_ParamLimits

0x50fe,	// (0x00005241) bg_list_pane_g2

0x5113,	// (0x00005256) bg_list_pane_g3_ParamLimits

0x5113,	// (0x00005256) bg_list_pane_g3

0x5127,	// (0x0000526a) bg_list_pane_g4_ParamLimits

0x5127,	// (0x0000526a) bg_list_pane_g4

0xd68c,	// (0x0000d7cf) bg_list_pane_g5_ParamLimits

0xd68c,	// (0x0000d7cf) bg_list_pane_g5

0x0004,

0xf968,	// (0x0000faab) bg_list_pane_g_ParamLimits

0xf968,	// (0x0000faab) bg_list_pane_g

0xd613,	// (0x0000d756) list_double2_graphic_large_graphic_pane_ParamLimits

0xd613,	// (0x0000d756) list_double2_graphic_large_graphic_pane

0xd613,	// (0x0000d756) list_double2_graphic_pane_ParamLimits

0xd613,	// (0x0000d756) list_double2_graphic_pane

0xd613,	// (0x0000d756) list_double2_large_graphic_pane_ParamLimits

0xd613,	// (0x0000d756) list_double2_large_graphic_pane

0xd613,	// (0x0000d756) list_double2_pane_ParamLimits

0xd613,	// (0x0000d756) list_double2_pane

0xd613,	// (0x0000d756) list_double_graphic_heading_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_graphic_heading_pane

0xd613,	// (0x0000d756) list_double_graphic_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_graphic_pane

0xd613,	// (0x0000d756) list_double_heading_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_heading_pane

0xd613,	// (0x0000d756) list_double_large_graphic_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_large_graphic_pane

0xd613,	// (0x0000d756) list_double_number_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_number_pane

0xd613,	// (0x0000d756) list_double_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_pane

0xd613,	// (0x0000d756) list_double_time_pane_ParamLimits

0xd613,	// (0x0000d756) list_double_time_pane

0xd613,	// (0x0000d756) list_setting_number_pane_ParamLimits

0xd613,	// (0x0000d756) list_setting_number_pane

0xd613,	// (0x0000d756) list_setting_pane_ParamLimits

0xd613,	// (0x0000d756) list_setting_pane

0xd625,	// (0x0000d768) list_single_2graphic_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_2graphic_pane

0xd625,	// (0x0000d768) list_single_graphic_heading_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_graphic_heading_pane

0xd625,	// (0x0000d768) list_single_graphic_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_graphic_pane

0xd625,	// (0x0000d768) list_single_heading_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_heading_pane

0xd625,	// (0x0000d768) list_single_large_graphic_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_large_graphic_pane

0xd625,	// (0x0000d768) list_single_number_heading_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_number_heading_pane

0xd625,	// (0x0000d768) list_single_number_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_number_pane

0xd625,	// (0x0000d768) list_single_pane_ParamLimits

0xd625,	// (0x0000d768) list_single_pane

0x0150,	// (0x00000293) list_highlight_pane_cp1

0x0caf,	// (0x00000df2) list_single_pane_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_pane_g1

0x0cbb,	// (0x00000dfe) list_single_pane_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_pane_g

0x4f98,	// (0x000050db) list_single_pane_t1_ParamLimits

0x4f98,	// (0x000050db) list_single_pane_t1

0x0caf,	// (0x00000df2) list_single_number_pane_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_number_pane_g1

0x0cbb,	// (0x00000dfe) list_single_number_pane_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_number_pane_g

0x355c,	// (0x0000369f) list_single_number_pane_t1_ParamLimits

0x355c,	// (0x0000369f) list_single_number_pane_t1

0x4cc2,	// (0x00004e05) list_single_number_pane_t2_ParamLimits

0x4cc2,	// (0x00004e05) list_single_number_pane_t2

0x0001,

0xf929,	// (0x0000fa6c) list_single_number_pane_t_ParamLimits

0xf929,	// (0x0000fa6c) list_single_number_pane_t

0x0ca3,	// (0x00000de6) list_single_graphic_pane_g1_ParamLimits

0x0ca3,	// (0x00000de6) list_single_graphic_pane_g1

0x0caf,	// (0x00000df2) list_single_graphic_pane_g2_ParamLimits

0x0caf,	// (0x00000df2) list_single_graphic_pane_g2

0x0cbb,	// (0x00000dfe) list_single_graphic_pane_g3_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0000f6df) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0000f6df) list_single_graphic_pane_g

0x0cc7,	// (0x00000e0a) list_single_graphic_pane_t1_ParamLimits

0x0cc7,	// (0x00000e0a) list_single_graphic_pane_t1

0x0caf,	// (0x00000df2) list_single_heading_pane_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_heading_pane_g1

0x0cbb,	// (0x00000dfe) list_single_heading_pane_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_heading_pane_g

0x0cdd,	// (0x00000e20) list_single_heading_pane_t1_ParamLimits

0x0cdd,	// (0x00000e20) list_single_heading_pane_t1

0x0cf3,	// (0x00000e36) list_single_heading_pane_t2_ParamLimits

0x0cf3,	// (0x00000e36) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0000f6eb) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0000f6eb) list_single_heading_pane_t

0x0caf,	// (0x00000df2) list_single_number_heading_pane_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_number_heading_pane_g1

0x0cbb,	// (0x00000dfe) list_single_number_heading_pane_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_number_heading_pane_g

0x0cdd,	// (0x00000e20) list_single_number_heading_pane_t1_ParamLimits

0x0cdd,	// (0x00000e20) list_single_number_heading_pane_t1

0x0d05,	// (0x00000e48) list_single_number_heading_pane_t2_ParamLimits

0x0d05,	// (0x00000e48) list_single_number_heading_pane_t2

0x0d17,	// (0x00000e5a) list_single_number_heading_pane_t3_ParamLimits

0x0d17,	// (0x00000e5a) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0000f6f0) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0000f6f0) list_single_number_heading_pane_t

0x0d29,	// (0x00000e6c) list_single_graphic_heading_pane_g1_ParamLimits

0x0d29,	// (0x00000e6c) list_single_graphic_heading_pane_g1

0xbdb2,	// (0x0000bef5) list_single_graphic_heading_pane_g4_ParamLimits

0xbdb2,	// (0x0000bef5) list_single_graphic_heading_pane_g4

0x0cbb,	// (0x00000dfe) list_single_graphic_heading_pane_g5_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0000f6f7) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0000f6f7) list_single_graphic_heading_pane_g

0x0cdd,	// (0x00000e20) list_single_graphic_heading_pane_t1_ParamLimits

0x0cdd,	// (0x00000e20) list_single_graphic_heading_pane_t1

0x0d46,	// (0x00000e89) list_single_graphic_heading_pane_t2_ParamLimits

0x0d46,	// (0x00000e89) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0000f6fe) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0000f6fe) list_single_graphic_heading_pane_t

0x599a,	// (0x00005add) list_single_large_graphic_pane_g1_ParamLimits

0x599a,	// (0x00005add) list_single_large_graphic_pane_g1

0x0caf,	// (0x00000df2) list_single_large_graphic_pane_g2_ParamLimits

0x0caf,	// (0x00000df2) list_single_large_graphic_pane_g2

0x0cbb,	// (0x00000dfe) list_single_large_graphic_pane_g3_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0000f703) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0000f703) list_single_large_graphic_pane_g

0x3de9,	// (0x00003f2c) wait_border_pane_g2_copy1

0xbdc3,	// (0x0000bf06) list_single_large_graphic_pane_g4_cp2

0x59a6,	// (0x00005ae9) list_single_large_graphic_pane_t1_ParamLimits

0x59a6,	// (0x00005ae9) list_single_large_graphic_pane_t1

0x0ea8,	// (0x00000feb) list_double_pane_g1_ParamLimits

0x0ea8,	// (0x00000feb) list_double_pane_g1

0x0dd3,	// (0x00000f16) list_double_pane_g2_ParamLimits

0x0dd3,	// (0x00000f16) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0000f70a) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0000f70a) list_double_pane_g

0x0ddf,	// (0x00000f22) list_double_pane_t1_ParamLimits

0x0ddf,	// (0x00000f22) list_double_pane_t1

0xbdcb,	// (0x0000bf0e) list_double_pane_t2_ParamLimits

0xbdcb,	// (0x0000bf0e) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0000f70f) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0000f70f) list_double_pane_t

0xbddd,	// (0x0000bf20) list_double2_pane_g1_ParamLimits

0xbddd,	// (0x0000bf20) list_double2_pane_g1

0xbdee,	// (0x0000bf31) list_double2_pane_g2_ParamLimits

0xbdee,	// (0x0000bf31) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0000f714) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0000f714) list_double2_pane_g

0xbdfa,	// (0x0000bf3d) list_double2_pane_t1_ParamLimits

0xbdfa,	// (0x0000bf3d) list_double2_pane_t1

0x0fc4,	// (0x00001107) list_double2_pane_t2_ParamLimits

0x0fc4,	// (0x00001107) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0000f719) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0000f719) list_double2_pane_t

0x0ea8,	// (0x00000feb) list_double_number_pane_g1_ParamLimits

0x0ea8,	// (0x00000feb) list_double_number_pane_g1

0x0dd3,	// (0x00000f16) list_double_number_pane_g2_ParamLimits

0x0dd3,	// (0x00000f16) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0000f70a) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0000f70a) list_double_number_pane_g

0xbe10,	// (0x0000bf53) list_double_number_pane_t1_ParamLimits

0xbe10,	// (0x0000bf53) list_double_number_pane_t1

0x0eb4,	// (0x00000ff7) list_double_number_pane_t2_ParamLimits

0x0eb4,	// (0x00000ff7) list_double_number_pane_t2

0xbe22,	// (0x0000bf65) list_double_number_pane_t3_ParamLimits

0xbe22,	// (0x0000bf65) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0000f71e) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0000f71e) list_double_number_pane_t

0x0e9c,	// (0x00000fdf) list_double_graphic_pane_g1_ParamLimits

0x0e9c,	// (0x00000fdf) list_double_graphic_pane_g1

0xbe34,	// (0x0000bf77) list_double_graphic_pane_g2_ParamLimits

0xbe34,	// (0x0000bf77) list_double_graphic_pane_g2

0xbe43,	// (0x0000bf86) list_double_graphic_pane_g3_ParamLimits

0xbe43,	// (0x0000bf86) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0000f725) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0000f725) list_double_graphic_pane_g

0xbe5b,	// (0x0000bf9e) list_double_graphic_pane_t1_ParamLimits

0xbe5b,	// (0x0000bf9e) list_double_graphic_pane_t1

0xbe71,	// (0x0000bfb4) list_double_graphic_pane_t2_ParamLimits

0xbe71,	// (0x0000bfb4) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0000f72e) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0000f72e) list_double_graphic_pane_t

0xbe83,	// (0x0000bfc6) list_double2_graphic_pane_g1_ParamLimits

0xbe83,	// (0x0000bfc6) list_double2_graphic_pane_g1

0x1279,	// (0x000013bc) list_double2_graphic_pane_g2_ParamLimits

0x1279,	// (0x000013bc) list_double2_graphic_pane_g2

0xbdee,	// (0x0000bf31) list_double2_graphic_pane_g3_ParamLimits

0xbdee,	// (0x0000bf31) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0000f733) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0000f733) list_double2_graphic_pane_g

0xbe8f,	// (0x0000bfd2) list_double2_graphic_pane_t1_ParamLimits

0xbe8f,	// (0x0000bfd2) list_double2_graphic_pane_t1

0x0fec,	// (0x0000112f) list_double2_graphic_pane_t2_ParamLimits

0x0fec,	// (0x0000112f) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0000f73a) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0000f73a) list_double2_graphic_pane_t

0xbea5,	// (0x0000bfe8) list_double_large_graphic_pane_g1_ParamLimits

0xbea5,	// (0x0000bfe8) list_double_large_graphic_pane_g1

0xbec4,	// (0x0000c007) list_double_large_graphic_pane_g2_ParamLimits

0xbec4,	// (0x0000c007) list_double_large_graphic_pane_g2

0x0dd3,	// (0x00000f16) list_double_large_graphic_pane_g3_ParamLimits

0x0dd3,	// (0x00000f16) list_double_large_graphic_pane_g3

0xbed5,	// (0x0000c018) list_double_large_graphic_pane_g4_ParamLimits

0xbed5,	// (0x0000c018) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0000f73f) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0000f73f) list_double_large_graphic_pane_g

0xbee8,	// (0x0000c02b) list_double_large_graphic_pane_t1_ParamLimits

0xbee8,	// (0x0000c02b) list_double_large_graphic_pane_t1

0xbf01,	// (0x0000c044) list_double_large_graphic_pane_t2_ParamLimits

0xbf01,	// (0x0000c044) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0000f74a) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0000f74a) list_double_large_graphic_pane_t

0xbf13,	// (0x0000c056) list_double2_large_graphic_pane_g1_ParamLimits

0xbf13,	// (0x0000c056) list_double2_large_graphic_pane_g1

0xbddd,	// (0x0000bf20) list_double2_large_graphic_pane_g2_ParamLimits

0xbddd,	// (0x0000bf20) list_double2_large_graphic_pane_g2

0xbdee,	// (0x0000bf31) list_double2_large_graphic_pane_g3_ParamLimits

0xbdee,	// (0x0000bf31) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0000f74f) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0000f74f) list_double2_large_graphic_pane_g

0xbf1f,	// (0x0000c062) list_double2_large_graphic_pane_t1_ParamLimits

0xbf1f,	// (0x0000c062) list_double2_large_graphic_pane_t1

0xbf35,	// (0x0000c078) list_double2_large_graphic_pane_t2_ParamLimits

0xbf35,	// (0x0000c078) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0000f756) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0000f756) list_double2_large_graphic_pane_t

0xbf47,	// (0x0000c08a) list_double_heading_pane_g1_ParamLimits

0xbf47,	// (0x0000c08a) list_double_heading_pane_g1

0xbf58,	// (0x0000c09b) list_double_heading_pane_g2_ParamLimits

0xbf58,	// (0x0000c09b) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0000f75b) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0000f75b) list_double_heading_pane_g

0xbf64,	// (0x0000c0a7) list_double_heading_pane_t1_ParamLimits

0xbf64,	// (0x0000c0a7) list_double_heading_pane_t1

0xbf7a,	// (0x0000c0bd) list_double_heading_pane_t2_ParamLimits

0xbf7a,	// (0x0000c0bd) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0000f760) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0000f760) list_double_heading_pane_t

0x0e41,	// (0x00000f84) list_double_graphic_heading_pane_g1_ParamLimits

0x0e41,	// (0x00000f84) list_double_graphic_heading_pane_g1

0xbf47,	// (0x0000c08a) list_double_graphic_heading_pane_g2_ParamLimits

0xbf47,	// (0x0000c08a) list_double_graphic_heading_pane_g2

0xbf58,	// (0x0000c09b) list_double_graphic_heading_pane_g3_ParamLimits

0xbf58,	// (0x0000c09b) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0000f765) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0000f765) list_double_graphic_heading_pane_g

0xbf8c,	// (0x0000c0cf) list_double_graphic_heading_pane_t1_ParamLimits

0xbf8c,	// (0x0000c0cf) list_double_graphic_heading_pane_t1

0xbfa2,	// (0x0000c0e5) list_double_graphic_heading_pane_t2_ParamLimits

0xbfa2,	// (0x0000c0e5) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0000f76c) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0000f76c) list_double_graphic_heading_pane_t

0xbec4,	// (0x0000c007) list_double_time_pane_g1_ParamLimits

0xbec4,	// (0x0000c007) list_double_time_pane_g1

0x0dd3,	// (0x00000f16) list_double_time_pane_g2_ParamLimits

0x0dd3,	// (0x00000f16) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0000f771) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0000f771) list_double_time_pane_g

0xbfb4,	// (0x0000c0f7) list_double_time_pane_t1_ParamLimits

0xbfb4,	// (0x0000c0f7) list_double_time_pane_t1

0xbfca,	// (0x0000c10d) list_double_time_pane_t2_ParamLimits

0xbfca,	// (0x0000c10d) list_double_time_pane_t2

0xbfdc,	// (0x0000c11f) list_double_time_pane_t3_ParamLimits

0xbfdc,	// (0x0000c11f) list_double_time_pane_t3

0xbfee,	// (0x0000c131) list_double_time_pane_t4_ParamLimits

0xbfee,	// (0x0000c131) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0000f776) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0000f776) list_double_time_pane_t

0x1279,	// (0x000013bc) list_setting_pane_g1_ParamLimits

0x1279,	// (0x000013bc) list_setting_pane_g1

0xbdee,	// (0x0000bf31) list_setting_pane_g2_ParamLimits

0xbdee,	// (0x0000bf31) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0000f77f) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0000f77f) list_setting_pane_g

0xc000,	// (0x0000c143) list_setting_pane_t1_ParamLimits

0xc000,	// (0x0000c143) list_setting_pane_t1

0xc017,	// (0x0000c15a) list_setting_pane_t2_ParamLimits

0xc017,	// (0x0000c15a) list_setting_pane_t2

0x0002,

0xf641,	// (0x0000f784) list_setting_pane_t_ParamLimits

0xf641,	// (0x0000f784) list_setting_pane_t

0xc056,	// (0x0000c199) set_value_pane_cp_ParamLimits

0xc056,	// (0x0000c199) set_value_pane_cp

0x1279,	// (0x000013bc) list_setting_number_pane_g1_ParamLimits

0x1279,	// (0x000013bc) list_setting_number_pane_g1

0xbdee,	// (0x0000bf31) list_setting_number_pane_g2_ParamLimits

0xbdee,	// (0x0000bf31) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0000f77f) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0000f77f) list_setting_number_pane_g

0xc062,	// (0x0000c1a5) list_setting_number_pane_t1_ParamLimits

0xc062,	// (0x0000c1a5) list_setting_number_pane_t1

0xc076,	// (0x0000c1b9) list_setting_number_pane_t2_ParamLimits

0xc076,	// (0x0000c1b9) list_setting_number_pane_t2

0xc08d,	// (0x0000c1d0) list_setting_number_pane_t3_ParamLimits

0xc08d,	// (0x0000c1d0) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0000f78b) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0000f78b) list_setting_number_pane_t

0xc056,	// (0x0000c199) set_value_pane_ParamLimits

0xc056,	// (0x0000c199) set_value_pane

0x111a,	// (0x0000125d) bg_set_opt_pane_ParamLimits

0x111a,	// (0x0000125d) bg_set_opt_pane

0x113b,	// (0x0000127e) set_value_pane_t1

0x1149,	// (0x0000128c) slider_set_pane_cp3

0x1152,	// (0x00001295) volume_small_pane_cp

0x115b,	// (0x0000129e) list_form_gen_pane

0x1164,	// (0x000012a7) scroll_pane_cp8

0xc0d0,	// (0x0000c213) form_field_data_pane_ParamLimits

0xc0d0,	// (0x0000c213) form_field_data_pane

0xc0e7,	// (0x0000c22a) form_field_data_wide_pane_ParamLimits

0xc0e7,	// (0x0000c22a) form_field_data_wide_pane

0xc107,	// (0x0000c24a) form_field_popup_pane_ParamLimits

0xc107,	// (0x0000c24a) form_field_popup_pane

0xc11f,	// (0x0000c262) form_field_popup_wide_pane_ParamLimits

0xc11f,	// (0x0000c262) form_field_popup_wide_pane

0x11ff,	// (0x00001342) form_field_slider_pane_ParamLimits

0x11ff,	// (0x00001342) form_field_slider_pane

0x1212,	// (0x00001355) form_field_slider_wide_pane_ParamLimits

0x1212,	// (0x00001355) form_field_slider_wide_pane

0x1225,	// (0x00001368) data_form_pane

0xc140,	// (0x0000c283) form_field_data_pane_t1

0x1253,	// (0x00001396) input_focus_pane

0x1261,	// (0x000013a4) data_form_wide_pane

0x1299,	// (0x000013dc) form_field_data_wide_pane_t1

0x0a6d,	// (0x00000bb0) input_focus_pane_cp6

0xc15a,	// (0x0000c29d) form_field_popup_pane_t1

0x1253,	// (0x00001396) input_focus_pane_cp7

0x12d0,	// (0x00001413) list_form_pane

0x12e4,	// (0x00001427) form_field_popup_wide_pane_t1

0x1253,	// (0x00001396) input_focus_pane_cp8

0x12f6,	// (0x00001439) list_form_wide_pane

0xc17c,	// (0x0000c2bf) form_field_slider_pane_t1_ParamLimits

0xc17c,	// (0x0000c2bf) form_field_slider_pane_t1

0xc194,	// (0x0000c2d7) form_field_slider_pane_t2_ParamLimits

0xc194,	// (0x0000c2d7) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0000f79b) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0000f79b) form_field_slider_pane_t

0x06ea,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x06ea,	// (0x0000082d) input_focus_pane_cp9

0xc1a9,	// (0x0000c2ec) slider_cont_pane_ParamLimits

0xc1a9,	// (0x0000c2ec) slider_cont_pane

0x1342,	// (0x00001485) form_field_slider_wide_pane_t1_ParamLimits

0x1342,	// (0x00001485) form_field_slider_wide_pane_t1

0x1354,	// (0x00001497) form_field_slider_wide_pane_t2_ParamLimits

0x1354,	// (0x00001497) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0000f7a0) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0000f7a0) form_field_slider_wide_pane_t

0x06ea,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x06ea,	// (0x0000082d) input_focus_pane_cp10

0xc1bd,	// (0x0000c300) slider_cont_pane_cp1_ParamLimits

0xc1bd,	// (0x0000c300) slider_cont_pane_cp1

0xc1d1,	// (0x0000c314) slider_form_pane_cp

0x1382,	// (0x000014c5) input_focus_pane_g1

0x138a,	// (0x000014cd) input_focus_pane_g2

0x1392,	// (0x000014d5) input_focus_pane_g3

0x139a,	// (0x000014dd) input_focus_pane_g4

0x13a2,	// (0x000014e5) input_focus_pane_g5

0x13aa,	// (0x000014ed) input_focus_pane_g6

0x13b2,	// (0x000014f5) input_focus_pane_g7

0x13ba,	// (0x000014fd) input_focus_pane_g8

0x13c2,	// (0x00001505) input_focus_pane_g9

0xf4ff,	// (0x0000f642) input_focus_pane_g10

0x0009,

0xf662,	// (0x0000f7a5) input_focus_pane_g

0x3df2,	// (0x00003f35) wait_border_pane_g3_copy1

0xc1d9,	// (0x0000c31c) data_form_pane_t1

0xf4ff,	// (0x0000f642) wait_anim_pane_g1_copy1

0xd5f7,	// (0x0000d73a) data_form_wide_pane_t1

0xc1f3,	// (0x0000c336) list_form_graphic_pane_cp_ParamLimits

0xc1f3,	// (0x0000c336) list_form_graphic_pane_cp

0x4f50,	// (0x00005093) slider_form_pane_g1

0x4f59,	// (0x0000509c) slider_form_pane_g2

0x0006,

0xf959,	// (0x0000fa9c) slider_form_pane_g

0xc1f3,	// (0x0000c336) list_form_graphic_pane_ParamLimits

0xc1f3,	// (0x0000c336) list_form_graphic_pane

0x141a,	// (0x0000155d) list_form_graphic_pane_g1

0x1422,	// (0x00001565) list_form_graphic_pane_t1_ParamLimits

0x1422,	// (0x00001565) list_form_graphic_pane_t1

0x03c4,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x03c4,	// (0x00000507) list_highlight_pane_cp5

0x1437,	// (0x0000157a) find_pane_g1

0x1440,	// (0x00001583) input_find_pane

0x1449,	// (0x0000158c) input_find_pane_g1_ParamLimits

0x1449,	// (0x0000158c) input_find_pane_g1

0x1455,	// (0x00001598) input_find_pane_t1_ParamLimits

0x1455,	// (0x00001598) input_find_pane_t1

0x146a,	// (0x000015ad) input_find_pane_t2_ParamLimits

0x146a,	// (0x000015ad) input_find_pane_t2

0x0001,

0xf677,	// (0x0000f7ba) input_find_pane_t_ParamLimits

0xf677,	// (0x0000f7ba) input_find_pane_t

0x147f,	// (0x000015c2) input_focus_pane_cp5_ParamLimits

0x147f,	// (0x000015c2) input_focus_pane_cp5

0x149e,	// (0x000015e1) bg_popup_window_pane_cp2_ParamLimits

0x149e,	// (0x000015e1) bg_popup_window_pane_cp2

0x14ab,	// (0x000015ee) listscroll_menu_pane_ParamLimits

0x14ab,	// (0x000015ee) listscroll_menu_pane

0xc211,	// (0x0000c354) popup_submenu_window_ParamLimits

0xc211,	// (0x0000c354) popup_submenu_window

0x14e3,	// (0x00001626) find_popup_pane_g1

0x14eb,	// (0x0000162e) input_popup_find_pane_cp

0x14f5,	// (0x00001638) input_focus_pane_cp4_ParamLimits

0x14f5,	// (0x00001638) input_focus_pane_cp4

0x150f,	// (0x00001652) input_popup_find_pane_t1_ParamLimits

0x150f,	// (0x00001652) input_popup_find_pane_t1

0x0150,	// (0x00000293) bg_popup_sub_pane_cp

0x153d,	// (0x00001680) listscroll_popup_sub_pane

0x1545,	// (0x00001688) list_submenu_pane_ParamLimits

0x1545,	// (0x00001688) list_submenu_pane

0x1556,	// (0x00001699) scroll_pane_cp4

0x155e,	// (0x000016a1) list_single_popup_submenu_pane_ParamLimits

0x155e,	// (0x000016a1) list_single_popup_submenu_pane

0x1572,	// (0x000016b5) list_single_popup_submenu_pane_g1

0x157a,	// (0x000016bd) list_single_popup_submenu_pane_t1_ParamLimits

0x157a,	// (0x000016bd) list_single_popup_submenu_pane_t1

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp1

0x158f,	// (0x000016d2) tabs_2_active_pane_g1

0xc24b,	// (0x0000c38e) tabs_2_active_pane_t1

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x06ea,	// (0x0000082d) bg_passive_tab_pane_cp1

0x158f,	// (0x000016d2) tabs_2_passive_pane_g1

0xc24b,	// (0x0000c38e) tabs_2_passive_pane_t1

0x03c4,	// (0x00000507) bg_active_tab_pane_cp4

0xc25d,	// (0x0000c3a0) tabs_2_long_active_pane_t1

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp4

0x3643,	// (0x00003786) list_single_midp_graphic_pane_g4_ParamLimits

0x03c4,	// (0x00000507) bg_active_tab_pane_cp5

0xc270,	// (0x0000c3b3) tabs_3_long_active_pane_t1

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp5

0x3643,	// (0x00003786) list_single_midp_graphic_pane_g4

0x03c4,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x03c4,	// (0x00000507) bg_popup_window_pane_cp13

0x15f1,	// (0x00001734) listscroll_popup_fast_pane_ParamLimits

0x15f1,	// (0x00001734) listscroll_popup_fast_pane

0x1600,	// (0x00001743) grid_popup_fast_pane_ParamLimits

0x1600,	// (0x00001743) grid_popup_fast_pane

0x1612,	// (0x00001755) scroll_pane_cp9_ParamLimits

0x1612,	// (0x00001755) scroll_pane_cp9

0x72cb,	// (0x0000740e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72cb,	// (0x0000740e) list_single_graphic_hl_pane_t1_cp2

0x1636,	// (0x00001779) input_focus_pane_cp20_ParamLimits

0x1636,	// (0x00001779) input_focus_pane_cp20

0x1644,	// (0x00001787) query_popup_data_pane_t1_ParamLimits

0x1644,	// (0x00001787) query_popup_data_pane_t1

0x1657,	// (0x0000179a) query_popup_data_pane_t2_ParamLimits

0x1657,	// (0x0000179a) query_popup_data_pane_t2

0x169d,	// (0x000017e0) query_popup_data_pane_t3_ParamLimits

0x169d,	// (0x000017e0) query_popup_data_pane_t3

0x16de,	// (0x00001821) query_popup_data_pane_t4_ParamLimits

0x16de,	// (0x00001821) query_popup_data_pane_t4

0x171a,	// (0x0000185d) query_popup_data_pane_t5_ParamLimits

0x171a,	// (0x0000185d) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0000f7bf) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0000f7bf) query_popup_data_pane_t

0x1382,	// (0x000014c5) bg_set_opt_pane_g1

0x138a,	// (0x000014cd) bg_set_opt_pane_g2

0x1392,	// (0x000014d5) bg_set_opt_pane_g3

0x139a,	// (0x000014dd) bg_set_opt_pane_g4

0x13a2,	// (0x000014e5) bg_set_opt_pane_g5

0x13aa,	// (0x000014ed) bg_set_opt_pane_g6

0x13b2,	// (0x000014f5) bg_set_opt_pane_g7

0x13ba,	// (0x000014fd) bg_set_opt_pane_g8

0x13c2,	// (0x00001505) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0000f7ca) bg_set_opt_pane_g

0x2051,	// (0x00002194) control_top_pane_stacon_ParamLimits

0x2051,	// (0x00002194) control_top_pane_stacon

0x20a4,	// (0x000021e7) signal_pane_stacon_ParamLimits

0x20a4,	// (0x000021e7) signal_pane_stacon

0x20c9,	// (0x0000220c) stacon_top_pane_g1_ParamLimits

0x20c9,	// (0x0000220c) stacon_top_pane_g1

0x20eb,	// (0x0000222e) title_pane_stacon_ParamLimits

0x20eb,	// (0x0000222e) title_pane_stacon

0x2115,	// (0x00002258) uni_indicator_pane_stacon_ParamLimits

0x2115,	// (0x00002258) uni_indicator_pane_stacon

0x212a,	// (0x0000226d) battery_pane_stacon_ParamLimits

0x212a,	// (0x0000226d) battery_pane_stacon

0x216e,	// (0x000022b1) control_bottom_pane_stacon_ParamLimits

0x216e,	// (0x000022b1) control_bottom_pane_stacon

0x2191,	// (0x000022d4) navi_pane_stacon_ParamLimits

0x2191,	// (0x000022d4) navi_pane_stacon

0x21b4,	// (0x000022f7) stacon_bottom_pane_g1_ParamLimits

0x21b4,	// (0x000022f7) stacon_bottom_pane_g1

0x1751,	// (0x00001894) aid_levels_signal_lsc_ParamLimits

0x1751,	// (0x00001894) aid_levels_signal_lsc

0x1767,	// (0x000018aa) signal_pane_stacon_g1_ParamLimits

0x1767,	// (0x000018aa) signal_pane_stacon_g1

0x177b,	// (0x000018be) signal_pane_stacon_g2_ParamLimits

0x177b,	// (0x000018be) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x0000f7dd) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x0000f7dd) signal_pane_stacon_g

0x17bd,	// (0x00001900) title_pane_stacon_t1_ParamLimits

0x17bd,	// (0x00001900) title_pane_stacon_t1

0x17e2,	// (0x00001925) uni_indicator_pane_stacon_g1

0x17ec,	// (0x0000192f) uni_indicator_pane_stacon_g2

0x17f6,	// (0x00001939) uni_indicator_pane_stacon_g3

0x1800,	// (0x00001943) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x0000f7e9) uni_indicator_pane_stacon_g

0x180a,	// (0x0000194d) control_top_pane_stacon_g1

0x1812,	// (0x00001955) control_top_pane_stacon_t1_ParamLimits

0x1812,	// (0x00001955) control_top_pane_stacon_t1

0x1849,	// (0x0000198c) aid_levels_battery_lsc_ParamLimits

0x1849,	// (0x0000198c) aid_levels_battery_lsc

0x1860,	// (0x000019a3) battery_pane_stacon_g1_ParamLimits

0x1860,	// (0x000019a3) battery_pane_stacon_g1

0x1873,	// (0x000019b6) battery_pane_stacon_g2_ParamLimits

0x1873,	// (0x000019b6) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0000f7f2) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0000f7f2) battery_pane_stacon_g

0x18b1,	// (0x000019f4) navi_icon_pane_stacon

0x18c5,	// (0x00001a08) navi_navi_pane_stacon

0x18b1,	// (0x000019f4) navi_text_pane_stacon

0x180a,	// (0x0000194d) control_bottom_pane_stacon_g1

0x18d9,	// (0x00001a1c) control_bottom_pane_stacon_t1_ParamLimits

0x18d9,	// (0x00001a1c) control_bottom_pane_stacon_t1

0xc282,	// (0x0000c3c5) grid_app_pane_ParamLimits

0xc282,	// (0x0000c3c5) grid_app_pane

0xc2ba,	// (0x0000c3fd) scroll_pane_cp15_ParamLimits

0xc2ba,	// (0x0000c3fd) scroll_pane_cp15

0xc2cf,	// (0x0000c412) cell_app_pane_ParamLimits

0xc2cf,	// (0x0000c412) cell_app_pane

0xc314,	// (0x0000c457) cell_app_pane_g1_ParamLimits

0xc314,	// (0x0000c457) cell_app_pane_g1

0x19ab,	// (0x00001aee) cell_app_pane_g2_ParamLimits

0x19ab,	// (0x00001aee) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x0000f7f7) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x0000f7f7) cell_app_pane_g

0xc338,	// (0x0000c47b) cell_app_pane_t1_ParamLimits

0xc338,	// (0x0000c47b) cell_app_pane_t1

0x19ce,	// (0x00001b11) grid_highlight_pane_ParamLimits

0x19ce,	// (0x00001b11) grid_highlight_pane

0x1382,	// (0x000014c5) cell_highlight_pane_g1

0x138a,	// (0x000014cd) cell_highlight_pane_g2

0x1392,	// (0x000014d5) cell_highlight_pane_g3

0x139a,	// (0x000014dd) cell_highlight_pane_g4

0x13a2,	// (0x000014e5) cell_highlight_pane_g5

0x13aa,	// (0x000014ed) cell_highlight_pane_g6

0x13b2,	// (0x000014f5) cell_highlight_pane_g7

0x13ba,	// (0x000014fd) cell_highlight_pane_g8

0x13c2,	// (0x00001505) cell_highlight_pane_g9

0xf4ff,	// (0x0000f642) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x0000f7a5) cell_highlight_pane_g

0x19f2,	// (0x00001b35) bg_scroll_pane

0x1a11,	// (0x00001b54) scroll_handle_pane

0x1a62,	// (0x00001ba5) scroll_bg_pane_g1

0x1a77,	// (0x00001bba) scroll_bg_pane_g2

0x1a8f,	// (0x00001bd2) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x0000f7fc) scroll_bg_pane_g

0x1aa4,	// (0x00001be7) scroll_handle_focus_pane_ParamLimits

0x1aa4,	// (0x00001be7) scroll_handle_focus_pane

0x1a62,	// (0x00001ba5) scroll_handle_pane_g1

0x1ab1,	// (0x00001bf4) scroll_handle_pane_g2

0x1a8f,	// (0x00001bd2) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0000f803) scroll_handle_pane_g

0x14f5,	// (0x00001638) bg_popup_sub_pane_cp21_ParamLimits

0x14f5,	// (0x00001638) bg_popup_sub_pane_cp21

0x1ac5,	// (0x00001c08) popup_fep_japan_predictive_window_t1_ParamLimits

0x1ac5,	// (0x00001c08) popup_fep_japan_predictive_window_t1

0x1adf,	// (0x00001c22) popup_fep_japan_predictive_window_t2_ParamLimits

0x1adf,	// (0x00001c22) popup_fep_japan_predictive_window_t2

0x1b12,	// (0x00001c55) popup_fep_japan_predictive_window_t3_ParamLimits

0x1b12,	// (0x00001c55) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x0000f80a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x0000f80a) popup_fep_japan_predictive_window_t

0x0150,	// (0x00000293) bg_popup_sub_pane_cp23

0x1b49,	// (0x00001c8c) listscroll_japin_cand_pane

0x1b51,	// (0x00001c94) popup_fep_japan_candidate_window_t1

0x1b5f,	// (0x00001ca2) candidate_pane_ParamLimits

0x1b5f,	// (0x00001ca2) candidate_pane

0x1b71,	// (0x00001cb4) scroll_pane_cp30

0x1b79,	// (0x00001cbc) list_single_popup_jap_candidate_pane_ParamLimits

0x1b79,	// (0x00001cbc) list_single_popup_jap_candidate_pane

0x0150,	// (0x00000293) list_highlight_pane_cp30

0x1b8e,	// (0x00001cd1) list_single_popup_jap_candidate_pane_t1

0x1b9d,	// (0x00001ce0) level_1_signal

0x1baf,	// (0x00001cf2) level_2_signal

0x1bc2,	// (0x00001d05) level_3_signal

0x1bd5,	// (0x00001d18) level_4_signal

0x1be8,	// (0x00001d2b) level_5_signal

0x1bfb,	// (0x00001d3e) level_6_signal

0x1c0e,	// (0x00001d51) level_7_signal

0x1b9d,	// (0x00001ce0) level_1_battery

0x1baf,	// (0x00001cf2) level_2_battery

0x1bc2,	// (0x00001d05) level_3_battery

0x1bd5,	// (0x00001d18) level_4_battery

0x1be8,	// (0x00001d2b) level_5_battery

0x1bfb,	// (0x00001d3e) level_6_battery

0x1c0e,	// (0x00001d51) level_7_battery

0x1c58,	// (0x00001d9b) list_menu_pane_ParamLimits

0x1c58,	// (0x00001d9b) list_menu_pane

0x1c6e,	// (0x00001db1) scroll_pane_cp25_ParamLimits

0x1c6e,	// (0x00001db1) scroll_pane_cp25

0x1c87,	// (0x00001dca) list_double2_graphic_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double2_graphic_pane_cp2

0x1c87,	// (0x00001dca) list_double2_large_graphic_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double2_large_graphic_pane_cp2

0x1c87,	// (0x00001dca) list_double2_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double2_pane_cp2

0x1c87,	// (0x00001dca) list_double_graphic_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double_graphic_pane_cp2

0x1c87,	// (0x00001dca) list_double_large_graphic_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double_large_graphic_pane_cp2

0x1c87,	// (0x00001dca) list_double_number_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double_number_pane_cp2

0x1c87,	// (0x00001dca) list_double_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double_pane_cp2

0xc34f,	// (0x0000c492) list_single_2graphic_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_2graphic_pane_cp2

0xc34f,	// (0x0000c492) list_single_graphic_heading_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_graphic_heading_pane_cp2

0xc34f,	// (0x0000c492) list_single_graphic_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_graphic_pane_cp2

0xc34f,	// (0x0000c492) list_single_heading_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_heading_pane_cp2

0x1cc4,	// (0x00001e07) list_single_large_graphic_pane_cp2_ParamLimits

0x1cc4,	// (0x00001e07) list_single_large_graphic_pane_cp2

0xc34f,	// (0x0000c492) list_single_number_heading_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_number_heading_pane_cp2

0xc34f,	// (0x0000c492) list_single_number_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_number_pane_cp2

0xc361,	// (0x0000c4a4) list_single_pane_cp2_ParamLimits

0xc361,	// (0x0000c4a4) list_single_pane_cp2

0x1db4,	// (0x00001ef7) bg_popup_sub_pane_cp22

0x1dd9,	// (0x00001f1c) popup_side_volume_key_window_g1

0x1e03,	// (0x00001f46) popup_side_volume_key_window_t1

0x1e1f,	// (0x00001f62) volume_small_pane_cp1

0x06ea,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x06ea,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1e27,	// (0x00001f6a) fep_china_uni_candidate_pane_ParamLimits

0x1e27,	// (0x00001f6a) fep_china_uni_candidate_pane

0x1e3b,	// (0x00001f7e) fep_china_uni_entry_pane

0x1e4b,	// (0x00001f8e) popup_fep_china_uni_window_g1

0x1e67,	// (0x00001faa) fep_china_uni_entry_pane_g1

0x1e6f,	// (0x00001fb2) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0000f83b) fep_china_uni_entry_pane_g

0x1e77,	// (0x00001fba) fep_entry_item_pane

0x1e81,	// (0x00001fc4) fep_candidate_item_pane

0x1e89,	// (0x00001fcc) fep_china_uni_candidate_pane_g1

0x1e91,	// (0x00001fd4) fep_china_uni_candidate_pane_g2

0x1e99,	// (0x00001fdc) fep_china_uni_candidate_pane_g3

0x1ea1,	// (0x00001fe4) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x0000f840) fep_china_uni_candidate_pane_g

0xf4ff,	// (0x0000f642) fep_entry_item_pane_g1

0x1ea9,	// (0x00001fec) fep_entry_item_pane_t1_ParamLimits

0x1ea9,	// (0x00001fec) fep_entry_item_pane_t1

0x1ebf,	// (0x00002002) fep_candidate_item_pane_t1_ParamLimits

0x1ebf,	// (0x00002002) fep_candidate_item_pane_t1

0x1ed4,	// (0x00002017) fep_candidate_item_pane_t2_ParamLimits

0x1ed4,	// (0x00002017) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0000f849) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0000f849) fep_candidate_item_pane_t

0x03c4,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x03c4,	// (0x00000507) list_highlight_pane_cp31

0x1ee6,	// (0x00002029) level_1_signal_lsc

0x1eef,	// (0x00002032) level_2_signal_lsc

0x1ef8,	// (0x0000203b) level_3_signal_lsc

0x1f01,	// (0x00002044) level_4_signal_lsc

0x1f0a,	// (0x0000204d) level_5_signal_lsc

0x1f13,	// (0x00002056) level_6_signal_lsc

0x1f1c,	// (0x0000205f) level_7_signal_lsc

0x1f1c,	// (0x0000205f) level_1_battery_lsc

0x1f25,	// (0x00002068) level_2_battery_lsc

0x1f2e,	// (0x00002071) level_3_battery_lsc

0x1f37,	// (0x0000207a) level_4_battery_lsc

0x1f40,	// (0x00002083) level_5_battery_lsc

0x1f49,	// (0x0000208c) level_6_battery_lsc

0x1ee6,	// (0x00002029) level_7_battery_lsc

0x1f52,	// (0x00002095) scroll_handle_focus_pane_g1

0x1f5b,	// (0x0000209e) scroll_handle_focus_pane_g2

0x1f64,	// (0x000020a7) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x0000f84e) scroll_handle_focus_pane_g

0x1f6d,	// (0x000020b0) list_single_2graphic_pane_g1_ParamLimits

0x1f6d,	// (0x000020b0) list_single_2graphic_pane_g1

0xbdb2,	// (0x0000bef5) list_single_2graphic_pane_g2_ParamLimits

0xbdb2,	// (0x0000bef5) list_single_2graphic_pane_g2

0x0cbb,	// (0x00000dfe) list_single_2graphic_pane_g3_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_2graphic_pane_g3

0x1f79,	// (0x000020bc) list_single_2graphic_pane_g4_ParamLimits

0x1f79,	// (0x000020bc) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x0000f855) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x0000f855) list_single_2graphic_pane_g

0x1f8a,	// (0x000020cd) list_single_2graphic_pane_t1_ParamLimits

0x1f8a,	// (0x000020cd) list_single_2graphic_pane_t1

0xc3ee,	// (0x0000c531) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc3ee,	// (0x0000c531) list_double2_graphic_large_graphic_pane_g1

0xbddd,	// (0x0000bf20) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbddd,	// (0x0000bf20) list_double2_graphic_large_graphic_pane_g2

0xbdee,	// (0x0000bf31) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbdee,	// (0x0000bf31) list_double2_graphic_large_graphic_pane_g3

0xc400,	// (0x0000c543) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc400,	// (0x0000c543) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x0000f85e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x0000f85e) list_double2_graphic_large_graphic_pane_g

0xc40c,	// (0x0000c54f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc40c,	// (0x0000c54f) list_double2_graphic_large_graphic_pane_t1

0xc422,	// (0x0000c565) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc422,	// (0x0000c565) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0000f867) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0000f867) list_double2_graphic_large_graphic_pane_t

0x227f,	// (0x000023c2) popup_fast_swap_window_ParamLimits

0x227f,	// (0x000023c2) popup_fast_swap_window

0x229b,	// (0x000023de) popup_side_volume_key_window

0x22b7,	// (0x000023fa) stacon_top_pane

0x22c1,	// (0x00002404) status_pane_ParamLimits

0x22c1,	// (0x00002404) status_pane

0xc434,	// (0x0000c577) status_small_pane

0x0150,	// (0x00000293) control_pane

0x0150,	// (0x00000293) stacon_bottom_pane

0x1164,	// (0x000012a7) scroll_pane_cp121

0x115b,	// (0x0000129e) set_content_pane

0x1ffc,	// (0x0000213f) bg_active_tab_pane_g1_cp1

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp1

0x200e,	// (0x00002151) bg_active_tab_pane_g3_cp1

0x1ffc,	// (0x0000213f) bg_passive_tab_pane_g1_cp1

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp1

0x200e,	// (0x00002151) bg_passive_tab_pane_g3_cp1

0x2017,	// (0x0000215a) bg_active_tab_pane_g1_cp2

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp2

0x2020,	// (0x00002163) bg_active_tab_pane_g3_cp2

0x2017,	// (0x0000215a) bg_passive_tab_pane_g1_cp2

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp2

0x2020,	// (0x00002163) bg_passive_tab_pane_g3_cp2

0x2029,	// (0x0000216c) bg_active_tab_pane_g1_cp3

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp3

0x2032,	// (0x00002175) bg_active_tab_pane_g3_cp3

0x2029,	// (0x0000216c) bg_passive_tab_pane_g1_cp3

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp3

0x2032,	// (0x00002175) bg_passive_tab_pane_g3_cp3

0x203b,	// (0x0000217e) bg_active_tab_pane_g1_cp4

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp4

0x2046,	// (0x00002189) bg_active_tab_pane_g3_cp4

0x203b,	// (0x0000217e) bg_passive_tab_pane_g1_cp4

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp4

0x2046,	// (0x00002189) bg_passive_tab_pane_g3_cp4

0x21d0,	// (0x00002313) bg_active_tab_pane_g1_cp5

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp5

0x21d9,	// (0x0000231c) bg_active_tab_pane_g3_cp5

0x21d0,	// (0x00002313) bg_passive_tab_pane_g1_cp5

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp5

0x21d9,	// (0x0000231c) bg_passive_tab_pane_g3_cp5

0x5744,	// (0x00005887) list_set_graphic_pane_ParamLimits

0x5744,	// (0x00005887) list_set_graphic_pane

0x0150,	// (0x00000293) bg_set_opt_pane_cp4

0x2202,	// (0x00002345) list_set_graphic_pane_g1_ParamLimits

0x2202,	// (0x00002345) list_set_graphic_pane_g1

0x220e,	// (0x00002351) list_set_graphic_pane_g2_ParamLimits

0x220e,	// (0x00002351) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0000f86c) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0000f86c) list_set_graphic_pane_g

0x0009,

0xfa97,	// (0x0000fbda) volume_small_pane_cp_g

0x2232,	// (0x00002375) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2232,	// (0x00002375) list_double2_large_graphic_pane_g1_cp2

0x223e,	// (0x00002381) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x223e,	// (0x00002381) list_double2_large_graphic_pane_g2_cp2

0x224f,	// (0x00002392) list_double2_large_graphic_pane_g3_cp2

0x2257,	// (0x0000239a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2257,	// (0x0000239a) list_double2_large_graphic_pane_t1_cp2

0x226d,	// (0x000023b0) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x226d,	// (0x000023b0) list_double2_large_graphic_pane_t2_cp2

0x4a29,	// (0x00004b6c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a29,	// (0x00004b6c) list_double_large_graphic_pane_g1_cp2

0x4a3a,	// (0x00004b7d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a3a,	// (0x00004b7d) list_double_large_graphic_pane_g2_cp2

0x23e8,	// (0x0000252b) list_double_large_graphic_pane_g3_cp2

0x4a4b,	// (0x00004b8e) list_double_large_graphic_pane_g4_cp

0x4a53,	// (0x00004b96) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a53,	// (0x00004b96) list_double_large_graphic_pane_t1_cp2

0x4a6a,	// (0x00004bad) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a6a,	// (0x00004bad) list_double_large_graphic_pane_t2_cp2

0x22da,	// (0x0000241d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x22da,	// (0x0000241d) list_double2_graphic_pane_g1_cp2

0x22e8,	// (0x0000242b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x22e8,	// (0x0000242b) list_double2_graphic_pane_g2_cp2

0x22f9,	// (0x0000243c) list_double2_graphic_pane_g3_cp2

0x2303,	// (0x00002446) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2303,	// (0x00002446) list_double2_graphic_pane_t1_cp2

0x2319,	// (0x0000245c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2319,	// (0x0000245c) list_double2_graphic_pane_t2_cp2

0x232b,	// (0x0000246e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x232b,	// (0x0000246e) list_single_number_heading_pane_g1_cp2

0x2337,	// (0x0000247a) list_single_number_heading_pane_g2_cp2

0x233f,	// (0x00002482) list_single_number_heading_pane_t1_cp2_ParamLimits

0x233f,	// (0x00002482) list_single_number_heading_pane_t1_cp2

0x2355,	// (0x00002498) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2355,	// (0x00002498) list_single_number_heading_pane_t2_cp2

0x2367,	// (0x000024aa) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2367,	// (0x000024aa) list_single_number_heading_pane_t3_cp2

0x232b,	// (0x0000246e) list_single_heading_pane_g1_cp2_ParamLimits

0x232b,	// (0x0000246e) list_single_heading_pane_g1_cp2

0x2337,	// (0x0000247a) list_single_heading_pane_g2_cp2

0x233f,	// (0x00002482) list_single_heading_pane_t1_cp2_ParamLimits

0x233f,	// (0x00002482) list_single_heading_pane_t1_cp2

0x4831,	// (0x00004974) list_single_heading_pane_t2_cp2_ParamLimits

0x4831,	// (0x00004974) list_single_heading_pane_t2_cp2

0x4779,	// (0x000048bc) list_double_graphic_pane_g1_cp2_ParamLimits

0x4779,	// (0x000048bc) list_double_graphic_pane_g1_cp2

0x4785,	// (0x000048c8) list_double_graphic_pane_g2_cp2_ParamLimits

0x4785,	// (0x000048c8) list_double_graphic_pane_g2_cp2

0x4794,	// (0x000048d7) list_double_graphic_pane_g3_cp2

0x479c,	// (0x000048df) list_double_graphic_pane_t1_cp2_ParamLimits

0x479c,	// (0x000048df) list_double_graphic_pane_t1_cp2

0x47b2,	// (0x000048f5) list_double_graphic_pane_t2_cp2_ParamLimits

0x47b2,	// (0x000048f5) list_double_graphic_pane_t2_cp2

0x23dc,	// (0x0000251f) list_double_number_pane_g1_cp2_ParamLimits

0x23dc,	// (0x0000251f) list_double_number_pane_g1_cp2

0x23e8,	// (0x0000252b) list_double_number_pane_g2_cp2

0x473d,	// (0x00004880) list_double_number_pane_t1_cp2_ParamLimits

0x473d,	// (0x00004880) list_double_number_pane_t1_cp2

0x4751,	// (0x00004894) list_double_number_pane_t2_cp2_ParamLimits

0x4751,	// (0x00004894) list_double_number_pane_t2_cp2

0x4767,	// (0x000048aa) list_double_number_pane_t3_cp2_ParamLimits

0x4767,	// (0x000048aa) list_double_number_pane_t3_cp2

0x4615,	// (0x00004758) list_single_graphic_pane_g1_cp2_ParamLimits

0x4615,	// (0x00004758) list_single_graphic_pane_g1_cp2

0x2449,	// (0x0000258c) list_single_graphic_pane_g2_cp2_ParamLimits

0x2449,	// (0x0000258c) list_single_graphic_pane_g2_cp2

0x2455,	// (0x00002598) list_single_graphic_pane_g3_cp2

0x45eb,	// (0x0000472e) list_single_graphic_pane_t1_cp2_ParamLimits

0x45eb,	// (0x0000472e) list_single_graphic_pane_t1_cp2

0x2449,	// (0x0000258c) list_single_number_pane_g1_cp2_ParamLimits

0x2449,	// (0x0000258c) list_single_number_pane_g1_cp2

0x2455,	// (0x00002598) list_single_number_pane_g2_cp2

0x45eb,	// (0x0000472e) list_single_number_pane_t1_cp2_ParamLimits

0x45eb,	// (0x0000472e) list_single_number_pane_t1_cp2

0x4601,	// (0x00004744) list_single_number_pane_t2_cp2_ParamLimits

0x4601,	// (0x00004744) list_single_number_pane_t2_cp2

0x223e,	// (0x00002381) list_double2_pane_g1_cp2_ParamLimits

0x223e,	// (0x00002381) list_double2_pane_g1_cp2

0x224f,	// (0x00002392) list_double2_pane_g2_cp2

0x23b4,	// (0x000024f7) list_double2_pane_t1_cp2_ParamLimits

0x23b4,	// (0x000024f7) list_double2_pane_t1_cp2

0x23ca,	// (0x0000250d) list_double2_pane_t2_cp2_ParamLimits

0x23ca,	// (0x0000250d) list_double2_pane_t2_cp2

0x23dc,	// (0x0000251f) list_double_pane_g1_cp2_ParamLimits

0x23dc,	// (0x0000251f) list_double_pane_g1_cp2

0x23e8,	// (0x0000252b) list_double_pane_g2_cp2

0x23f0,	// (0x00002533) list_double_pane_t1_cp2_ParamLimits

0x23f0,	// (0x00002533) list_double_pane_t1_cp2

0x2406,	// (0x00002549) list_double_pane_t2_cp2_ParamLimits

0x2406,	// (0x00002549) list_double_pane_t2_cp2

0x2439,	// (0x0000257c) list_single_pane_cp2_g3

0x2449,	// (0x0000258c) list_single_pane_g1_cp2_ParamLimits

0x2449,	// (0x0000258c) list_single_pane_g1_cp2

0x2455,	// (0x00002598) list_single_pane_g2_cp2

0x245d,	// (0x000025a0) list_single_pane_t1_cp2_ParamLimits

0x245d,	// (0x000025a0) list_single_pane_t1_cp2

0x2475,	// (0x000025b8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2475,	// (0x000025b8) list_single_large_graphic_pane_g1_cp2

0x0caf,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0caf,	// (0x00000df2) list_single_large_graphic_pane_g2_cp2

0x2481,	// (0x000025c4) list_single_large_graphic_pane_g3_cp2

0x2489,	// (0x000025cc) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2489,	// (0x000025cc) list_single_large_graphic_pane_g4_cp1

0x24a3,	// (0x000025e6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24a3,	// (0x000025e6) list_single_large_graphic_pane_t1_cp2

0x4464,	// (0x000045a7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4464,	// (0x000045a7) list_single_graphic_heading_pane_g1_cp2

0x4431,	// (0x00004574) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4431,	// (0x00004574) list_single_graphic_heading_pane_g4_cp2

0x2455,	// (0x00002598) list_single_graphic_heading_pane_g5_cp2

0x4470,	// (0x000045b3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4470,	// (0x000045b3) list_single_graphic_heading_pane_t1_cp2

0x4486,	// (0x000045c9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4486,	// (0x000045c9) list_single_graphic_heading_pane_t2_cp2

0x4425,	// (0x00004568) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4425,	// (0x00004568) list_single_2graphic_pane_g1_cp2

0x4431,	// (0x00004574) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4431,	// (0x00004574) list_single_2graphic_pane_g2_cp2

0x2455,	// (0x00002598) list_single_2graphic_pane_g3_cp2

0x4442,	// (0x00004585) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4442,	// (0x00004585) list_single_2graphic_pane_g4_cp2

0x444e,	// (0x00004591) list_single_2graphic_pane_t1_cp2_ParamLimits

0x444e,	// (0x00004591) list_single_2graphic_pane_t1_cp2

0xf4ff,	// (0x0000f642) list_highlight_pane_g10_cp1

0x3ffd,	// (0x00004140) list_highlight_pane_g1_cp1

0x4005,	// (0x00004148) list_highlight_pane_g2_cp1

0x400d,	// (0x00004150) list_highlight_pane_g3_cp1

0x4015,	// (0x00004158) list_highlight_pane_g4_cp1

0x401d,	// (0x00004160) list_highlight_pane_g5_cp1

0x4025,	// (0x00004168) list_highlight_pane_g6_cp1

0x402d,	// (0x00004170) list_highlight_pane_g7_cp1

0x4035,	// (0x00004178) list_highlight_pane_g8_cp1

0x403d,	// (0x00004180) list_highlight_pane_g9_cp1

0xd321,	// (0x0000d464) form_field_slider_pane_t3

0xd32f,	// (0x0000d472) form_field_slider_pane_t4

0x3f39,	// (0x0000407c) slider_form_pane_ParamLimits

0x3f39,	// (0x0000407c) slider_form_pane

0x0150,	// (0x00000293) control_abbreviations

0x0150,	// (0x00000293) control_conventions

0x0150,	// (0x00000293) control_definitions

0x0150,	// (0x00000293) format_table_attribute

0x487b,	// (0x000049be) bg_popup_preview_window_pane_g9

0x0150,	// (0x00000293) format_table_data2

0x0150,	// (0x00000293) format_table_data3

0x0150,	// (0x00000293) format_table_data_example

0x0008,

0x0150,	// (0x00000293) intro_purpose

0xf8b9,	// (0x0000f9fc) bg_popup_preview_window_pane_g

0x0150,	// (0x00000293) texts_category

0x0150,	// (0x00000293) texts_graphics

0x24b9,	// (0x000025fc) text_digital

0x24c8,	// (0x0000260b) text_primary

0x24d7,	// (0x0000261a) text_primary_small

0x24e6,	// (0x00002629) text_secondary

0x24f5,	// (0x00002638) text_title

0x515d,	// (0x000052a0) bg_passive_tab_pane_g1_cp3_srt

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp3_srt

0x5166,	// (0x000052a9) bg_passive_tab_pane_g3_cp3_srt

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x516f,	// (0x000052b2) tabs_4_active_pane_srt_g1

0xd6a2,	// (0x0000d7e5) tabs_4_active_pane_srt_t1_ParamLimits

0xd6a2,	// (0x0000d7e5) tabs_4_active_pane_srt_t1

0x515d,	// (0x000052a0) bg_active_tab_pane_g1_cp3_copy1

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp3_copy1

0x5166,	// (0x000052a9) bg_active_tab_pane_g3_cp3_copy1

0x03c4,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x03c4,	// (0x00000507) tabs_2_long_active_pane_srt

0x03c4,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x03c4,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp4_srt

0x4d0b,	// (0x00004e4e) bg_passive_tab_pane_g1_cp4_srt

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp4_srt

0x4d14,	// (0x00004e57) bg_passive_tab_pane_g3_cp4_srt

0x03c4,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x03c4,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd48c,	// (0x0000d5cf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd48c,	// (0x0000d5cf) tabs_2_long_active_pane_srt_t1

0x4d0b,	// (0x00004e4e) bg_active_tab_pane_g1_cp4_srt

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp4_srt

0x4d14,	// (0x00004e57) bg_active_tab_pane_g3_cp4_srt

0x06ea,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x06ea,	// (0x0000082d) tabs_3_long_active_pane_srt

0x06ea,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x06ea,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x06ea,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x06ea,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp5_srt

0x21d0,	// (0x00002313) bg_passive_tab_pane_g1_cp5_srt

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp5_srt

0x21d9,	// (0x0000231c) bg_passive_tab_pane_g3_cp5_srt

0x03c4,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x03c4,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd476,	// (0x0000d5b9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd476,	// (0x0000d5b9) tabs_3_long_active_pane_srt_t1

0x21d0,	// (0x00002313) bg_active_tab_pane_g1_cp5_srt

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp5_srt

0x21d9,	// (0x0000231c) bg_active_tab_pane_g3_cp5_srt

0x4ceb,	// (0x00004e2e) navi_text_pane_srt_t1

0x4ce3,	// (0x00004e26) navi_icon_pane_srt_g1

0x2773,	// (0x000028b6) midp_editing_number_pane_srt

0x2504,	// (0x00002647) midp_ticker_pane_srt

0x277b,	// (0x000028be) midp_ticker_pane_srt_g1

0x2783,	// (0x000028c6) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0000f88b) midp_ticker_pane_srt_g

0x278b,	// (0x000028ce) midp_ticker_pane_srt_t1

0x4cd4,	// (0x00004e17) midp_editing_number_pane_t1_copy1

0xc43f,	// (0x0000c582) listscroll_midp_pane

0xc43f,	// (0x0000c582) midp_form_pane

0x257c,	// (0x000026bf) midp_info_popup_window_ParamLimits

0x257c,	// (0x000026bf) midp_info_popup_window

0x14f5,	// (0x00001638) bg_popup_sub_pane_cp50_ParamLimits

0x14f5,	// (0x00001638) bg_popup_sub_pane_cp50

0x3c21,	// (0x00003d64) listscroll_midp_info_pane_ParamLimits

0x3c21,	// (0x00003d64) listscroll_midp_info_pane

0x3c01,	// (0x00003d44) listscroll_form_midp_pane_ParamLimits

0x3c01,	// (0x00003d44) listscroll_form_midp_pane

0x3c0d,	// (0x00003d50) scroll_bar_cp050

0x3c01,	// (0x00003d44) list_midp_pane

0x5fbb,	// (0x000060fe) signal_pane_g2_cp

0x3b1b,	// (0x00003c5e) listscroll_midp_info_pane_t1_ParamLimits

0x3b1b,	// (0x00003c5e) listscroll_midp_info_pane_t1

0x3b33,	// (0x00003c76) listscroll_midp_info_pane_t2_ParamLimits

0x3b33,	// (0x00003c76) listscroll_midp_info_pane_t2

0x3b71,	// (0x00003cb4) listscroll_midp_info_pane_t3_ParamLimits

0x3b71,	// (0x00003cb4) listscroll_midp_info_pane_t3

0x3bab,	// (0x00003cee) listscroll_midp_info_pane_t4_ParamLimits

0x3bab,	// (0x00003cee) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x0000f937) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x0000f937) listscroll_midp_info_pane_t

0x1556,	// (0x00001699) scroll_pane_cp21

0x3ab9,	// (0x00003bfc) form_midp_field_choice_group_pane

0x3ac2,	// (0x00003c05) form_midp_field_text_pane

0x3b01,	// (0x00003c44) form_midp_field_time_pane

0x3b09,	// (0x00003c4c) form_midp_gauge_slider_pane

0x3b12,	// (0x00003c55) form_midp_gauge_wait_pane

0x0150,	// (0x00000293) form_midp_image_pane

0xd30b,	// (0x0000d44e) list_single_midp_pane_ParamLimits

0xd30b,	// (0x0000d44e) list_single_midp_pane

0xd2ea,	// (0x0000d42d) form_midp_field_text_pane_t1

0x377c,	// (0x000038bf) input_focus_pane_cp050

0x3a7a,	// (0x00003bbd) list_midp_form_text_pane

0x3a12,	// (0x00003b55) form_midp_field_choice_group_pane_t1

0x3a20,	// (0x00003b63) input_focus_pane_cp051

0x3a34,	// (0x00003b77) list_midp_choice_pane

0x0150,	// (0x00000293) status_idle_pane

0x39f6,	// (0x00003b39) form_midp_field_time_pane_t1

0xf4ff,	// (0x0000f642) wait_anim_pane_g2_copy1

0x3a04,	// (0x00003b47) form_midp_field_time_pane_t2

0x0001,

0x262a,	// (0x0000276d) aid_navinavi_width_2_pane

0xf7ef,	// (0x0000f932) form_midp_field_time_pane_t

0x0150,	// (0x00000293) input_focus_pane_cp052

0x0150,	// (0x00000293) bg_input_focus_pane_cp040

0x39b6,	// (0x00003af9) form_midp_gauge_slider_pane_t1

0x39c4,	// (0x00003b07) form_midp_gauge_slider_pane_t2

0xd2ce,	// (0x0000d411) form_midp_gauge_slider_pane_t3

0xd2dc,	// (0x0000d41f) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x0000f929) form_midp_gauge_slider_pane_t

0x39ee,	// (0x00003b31) form_midp_slider_pane

0x03c4,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x03c4,	// (0x00000507) bg_input_focus_pane_cp041

0x3983,	// (0x00003ac6) form_midp_gauge_wait_pane_t1_ParamLimits

0x3983,	// (0x00003ac6) form_midp_gauge_wait_pane_t1

0x3995,	// (0x00003ad8) form_midp_gauge_wait_pane_t2_ParamLimits

0x3995,	// (0x00003ad8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x0000f924) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x0000f924) form_midp_gauge_wait_pane_t

0x39a7,	// (0x00003aea) form_midp_wait_pane_ParamLimits

0x39a7,	// (0x00003aea) form_midp_wait_pane

0x394d,	// (0x00003a90) form_midp_image_pane_g1

0x3956,	// (0x00003a99) form_midp_image_pane_t1

0x3965,	// (0x00003aa8) form_midp_image_pane_t2

0x3974,	// (0x00003ab7) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x0000f91d) form_midp_image_pane_t

0x3935,	// (0x00003a78) list_single_midp_pane_g1

0x393e,	// (0x00003a81) list_single_midp_pane_t1

0xd2ba,	// (0x0000d3fd) list_midp_form_item_pane_ParamLimits

0xd2ba,	// (0x0000d3fd) list_midp_form_item_pane

0x25d2,	// (0x00002715) list_midp_form_item_pane_t1

0x25e1,	// (0x00002724) midp_ticker_pane_g1

0x25ed,	// (0x00002730) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0000f871) midp_ticker_pane_g

0x25f9,	// (0x0000273c) midp_ticker_pane_t1

0x4fd0,	// (0x00005113) midp_editing_number_pane_t1

0x4fae,	// (0x000050f1) midp_editing_number_pane

0x4fbd,	// (0x00005100) midp_ticker_pane

0x4cb2,	// (0x00004df5) ai_message_heading_pane

0x0150,	// (0x00000293) bg_popup_window_pane_cp14

0x4cba,	// (0x00004dfd) listscroll_ai_message_pane

0x4c3c,	// (0x00004d7f) ai_message_heading_pane_g1_ParamLimits

0x4c3c,	// (0x00004d7f) ai_message_heading_pane_g1

0x4c48,	// (0x00004d8b) ai_message_heading_pane_g2_ParamLimits

0x4c48,	// (0x00004d8b) ai_message_heading_pane_g2

0x4c54,	// (0x00004d97) ai_message_heading_pane_g3_ParamLimits

0x4c54,	// (0x00004d97) ai_message_heading_pane_g3

0x4c60,	// (0x00004da3) ai_message_heading_pane_g4_ParamLimits

0x4c60,	// (0x00004da3) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x0000fa5e) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x0000fa5e) ai_message_heading_pane_g

0x4c6c,	// (0x00004daf) ai_message_heading_pane_t1_ParamLimits

0x4c6c,	// (0x00004daf) ai_message_heading_pane_t1

0x4c86,	// (0x00004dc9) ai_message_heading_pane_t2_ParamLimits

0x4c86,	// (0x00004dc9) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0000fa67) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0000fa67) ai_message_heading_pane_t

0x4c98,	// (0x00004ddb) bg_popup_heading_pane_cp1_ParamLimits

0x4c98,	// (0x00004ddb) bg_popup_heading_pane_cp1

0x4c2a,	// (0x00004d6d) list_ai_message_pane_ParamLimits

0x4c2a,	// (0x00004d6d) list_ai_message_pane

0x1556,	// (0x00001699) scroll_pane_cp10

0x4b76,	// (0x00004cb9) list_ai_message_pane_g1

0x4b7e,	// (0x00004cc1) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x0000fa3b) list_ai_message_pane_g

0x4b86,	// (0x00004cc9) list_ai_message_pane_t1_ParamLimits

0x4b86,	// (0x00004cc9) list_ai_message_pane_t1

0x4b9b,	// (0x00004cde) list_ai_message_pane_t2_ParamLimits

0x4b9b,	// (0x00004cde) list_ai_message_pane_t2

0x4bb0,	// (0x00004cf3) list_ai_message_pane_t3_ParamLimits

0x4bb0,	// (0x00004cf3) list_ai_message_pane_t3

0x4bc5,	// (0x00004d08) list_ai_message_pane_t4_ParamLimits

0x4bc5,	// (0x00004d08) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x0000fa40) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x0000fa40) list_ai_message_pane_t

0xd455,	// (0x0000d598) cell_ai_soft_ind_pane_ParamLimits

0xd455,	// (0x0000d598) cell_ai_soft_ind_pane

0x260b,	// (0x0000274e) cell_ai_soft_ind_pane_g1_ParamLimits

0x260b,	// (0x0000274e) cell_ai_soft_ind_pane_g1

0x0150,	// (0x00000293) grid_highlight_cp1

0x2618,	// (0x0000275b) text_secondary_cp56_ParamLimits

0x2618,	// (0x0000275b) text_secondary_cp56

0x4b36,	// (0x00004c79) example_general_pane_ParamLimits

0x4b36,	// (0x00004c79) example_general_pane

0x4b42,	// (0x00004c85) example_parent_pane_g1_ParamLimits

0x4b42,	// (0x00004c85) example_parent_pane_g1

0x4b4e,	// (0x00004c91) example_parent_pane_t1_ParamLimits

0x4b4e,	// (0x00004c91) example_parent_pane_t1

0xcb05,	// (0x0000cc48) popup_preview_text_window_ParamLimits

0xcb05,	// (0x0000cc48) popup_preview_text_window

0x2441,	// (0x00002584) list_single_pane_cp2_g4

0x07c6,	// (0x00000909) bg_popup_preview_window_pane_ParamLimits

0x07c6,	// (0x00000909) bg_popup_preview_window_pane

0x4883,	// (0x000049c6) popup_preview_text_window_t1_ParamLimits

0x4883,	// (0x000049c6) popup_preview_text_window_t1

0x48a1,	// (0x000049e4) popup_preview_text_window_t2_ParamLimits

0x48a1,	// (0x000049e4) popup_preview_text_window_t2

0x48ea,	// (0x00004a2d) popup_preview_text_window_t3_ParamLimits

0x48ea,	// (0x00004a2d) popup_preview_text_window_t3

0x492f,	// (0x00004a72) popup_preview_text_window_t4_ParamLimits

0x492f,	// (0x00004a72) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x0000fa0f) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x0000fa0f) popup_preview_text_window_t

0x49ad,	// (0x00004af0) scroll_pane_cp11

0x35ce,	// (0x00003711) bg_popup_preview_window_pane_g1

0x4843,	// (0x00004986) bg_popup_preview_window_pane_g2

0x484b,	// (0x0000498e) bg_popup_preview_window_pane_g3

0x4853,	// (0x00004996) bg_popup_preview_window_pane_g4

0x485b,	// (0x0000499e) bg_popup_preview_window_pane_g5

0x4863,	// (0x000049a6) bg_popup_preview_window_pane_g6

0x486b,	// (0x000049ae) bg_popup_preview_window_pane_g7

0x4873,	// (0x000049b6) bg_popup_preview_window_pane_g8

0xf515,	// (0x0000f658) aid_popup_width_pane

0xca81,	// (0x0000cbc4) popup_midp_note_alarm_window_ParamLimits

0xca81,	// (0x0000cbc4) popup_midp_note_alarm_window

0x1225,	// (0x00001368) data_form_pane_ParamLimits

0xc136,	// (0x0000c279) form_field_data_pane_g1

0xc140,	// (0x0000c283) form_field_data_pane_t1_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_ParamLimits

0x1261,	// (0x000013a4) data_form_wide_pane_ParamLimits

0x126d,	// (0x000013b0) form_field_data_wide_pane_g1

0x1299,	// (0x000013dc) form_field_data_wide_pane_t1_ParamLimits

0x0a6d,	// (0x00000bb0) input_focus_pane_cp6_ParamLimits

0xc23d,	// (0x0000c380) input_popup_find_pane_g1_ParamLimits

0xc23d,	// (0x0000c380) input_popup_find_pane_g1

0x1884,	// (0x000019c7) aid_navi_side_left_pane

0x1899,	// (0x000019dc) aid_navi_side_right_pane

0x40f8,	// (0x0000423b) bg_popup_window_pane_cp30_ParamLimits

0x40f8,	// (0x0000423b) bg_popup_window_pane_cp30

0x4172,	// (0x000042b5) popup_midp_note_alarm_window_g1_ParamLimits

0x4172,	// (0x000042b5) popup_midp_note_alarm_window_g1

0x41a2,	// (0x000042e5) popup_midp_note_alarm_window_t1_ParamLimits

0x41a2,	// (0x000042e5) popup_midp_note_alarm_window_t1

0x4243,	// (0x00004386) popup_midp_note_alarm_window_t2_ParamLimits

0x4243,	// (0x00004386) popup_midp_note_alarm_window_t2

0x42f1,	// (0x00004434) popup_midp_note_alarm_window_t3_ParamLimits

0x42f1,	// (0x00004434) popup_midp_note_alarm_window_t3

0x4323,	// (0x00004466) popup_midp_note_alarm_window_t4_ParamLimits

0x4323,	// (0x00004466) popup_midp_note_alarm_window_t4

0x4349,	// (0x0000448c) popup_midp_note_alarm_window_t5_ParamLimits

0x4349,	// (0x0000448c) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x0000f9ac) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x0000f9ac) popup_midp_note_alarm_window_t

0x43f5,	// (0x00004538) wait_bar_pane_cp1_ParamLimits

0x43f5,	// (0x00004538) wait_bar_pane_cp1

0x0150,	// (0x00000293) wait_anim_pane_copy1

0x0150,	// (0x00000293) wait_border_pane_copy1

0x3dde,	// (0x00003f21) wait_border_pane_g1_copy1

0x12b0,	// (0x000013f3) form_field_popup_pane_g1

0xc15a,	// (0x0000c29d) form_field_popup_pane_t1_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_cp7_ParamLimits

0x12d0,	// (0x00001413) list_form_pane_ParamLimits

0x12dc,	// (0x0000141f) form_field_popup_wide_pane_g1

0x12e4,	// (0x00001427) form_field_popup_wide_pane_t1_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_cp8_ParamLimits

0x12f6,	// (0x00001439) list_form_wide_pane_ParamLimits

0x51ff,	// (0x00005342) aid_size_cell_graphic_pane

0xc1d9,	// (0x0000c31c) data_form_pane_t1_ParamLimits

0xd5f7,	// (0x0000d73a) data_form_wide_pane_t1_ParamLimits

0xcecd,	// (0x0000d010) bg_status_flat_pane

0xba55,	// (0x0000bb98) title_pane_t1_ParamLimits

0x038c,	// (0x000004cf) title_pane_t2_ParamLimits

0x03b2,	// (0x000004f5) title_pane_t3_ParamLimits

0xf532,	// (0x0000f675) title_pane_t_ParamLimits

0x1b9d,	// (0x00001ce0) level_1_signal_ParamLimits

0x1baf,	// (0x00001cf2) level_2_signal_ParamLimits

0x1bc2,	// (0x00001d05) level_3_signal_ParamLimits

0x1bd5,	// (0x00001d18) level_4_signal_ParamLimits

0x1be8,	// (0x00001d2b) level_5_signal_ParamLimits

0x1bfb,	// (0x00001d3e) level_6_signal_ParamLimits

0x1c0e,	// (0x00001d51) level_7_signal_ParamLimits

0x1b9d,	// (0x00001ce0) level_1_battery_ParamLimits

0x1baf,	// (0x00001cf2) level_2_battery_ParamLimits

0x1bc2,	// (0x00001d05) level_3_battery_ParamLimits

0x1bd5,	// (0x00001d18) level_4_battery_ParamLimits

0x1be8,	// (0x00001d2b) level_5_battery_ParamLimits

0x1bfb,	// (0x00001d3e) level_6_battery_ParamLimits

0x1c0e,	// (0x00001d51) level_7_battery_ParamLimits

0x3ffd,	// (0x00004140) bg_status_flat_pane_g1

0x4005,	// (0x00004148) bg_status_flat_pane_g2

0x400d,	// (0x00004150) bg_status_flat_pane_g3

0x4015,	// (0x00004158) bg_status_flat_pane_g4

0x401d,	// (0x00004160) bg_status_flat_pane_g5

0x4025,	// (0x00004168) bg_status_flat_pane_g6

0x402d,	// (0x00004170) bg_status_flat_pane_g7

0xbae1,	// (0x0000bc24) tabs_3_active_pane_t1_ParamLimits

0xbae1,	// (0x0000bc24) tabs_3_passive_pane_t1_ParamLimits

0xbaf3,	// (0x0000bc36) tabs_4_active_pane_t1_ParamLimits

0xbaf3,	// (0x0000bc36) tabs_4_1_passive_pane_t1_ParamLimits

0xc24b,	// (0x0000c38e) tabs_2_active_pane_t1_ParamLimits

0xc24b,	// (0x0000c38e) tabs_2_passive_pane_t1_ParamLimits

0x03c4,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc25d,	// (0x0000c3a0) tabs_2_long_active_pane_t1_ParamLimits

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp4_ParamLimits

0x369f,	// (0x000037e2) list_single_midp_graphic_pane_t1_ParamLimits

0x03c4,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc270,	// (0x0000c3b3) tabs_3_long_active_pane_t1_ParamLimits

0x2a53,	// (0x00002b96) bg_passive_tab_pane_cp5_ParamLimits

0x369f,	// (0x000037e2) list_single_midp_graphic_pane_t1

0xcecd,	// (0x0000d010) bg_status_flat_pane_ParamLimits

0x31d0,	// (0x00003313) indicator_pane_cp2_ParamLimits

0x31d0,	// (0x00003313) indicator_pane_cp2

0xd04b,	// (0x0000d18e) navi_pane_srt_ParamLimits

0xd04b,	// (0x0000d18e) navi_pane_srt

0x331f,	// (0x00003462) popup_clock_digital_analogue_window_cp1

0x054c,	// (0x0000068f) indicator_pane_t1

0x2504,	// (0x00002647) copy_highlight_pane

0x2504,	// (0x00002647) cursor_graphics_pane

0x2504,	// (0x00002647) graphic_within_text_pane

0x2504,	// (0x00002647) link_highlight_pane

0x4970,	// (0x00004ab3) popup_preview_text_window_t5_ParamLimits

0x4970,	// (0x00004ab3) popup_preview_text_window_t5

0x2632,	// (0x00002775) cursor_digital_pane

0x2632,	// (0x00002775) cursor_primary_pane

0x2643,	// (0x00002786) cursor_primary_small_pane

0x264b,	// (0x0000278e) cursor_secondary_pane

0x2653,	// (0x00002796) cursor_title_pane

0x2632,	// (0x00002775) link_highlight_digital_pane

0x263a,	// (0x0000277d) link_highlight_primary_pane

0x2643,	// (0x00002786) link_highlight_primary_small_pane

0x264b,	// (0x0000278e) link_highlight_secondary_pane

0x2653,	// (0x00002796) link_highlight_title_pane

0x2632,	// (0x00002775) copy_highlight_digital_pane

0x2632,	// (0x00002775) copy_highlight_primary_pane

0x2643,	// (0x00002786) copy_highlight_primary_small_pane

0x264b,	// (0x0000278e) copy_highlight_secondary_pane

0x2653,	// (0x00002796) copy_highlight_title_pane

0x264b,	// (0x0000278e) graphic_text_digital_pane

0x409b,	// (0x000041de) graphic_text_primary_pane

0x40a4,	// (0x000041e7) graphic_text_primary_small_pane

0x2643,	// (0x00002786) graphic_text_secondary_pane

0x2632,	// (0x00002775) graphic_text_title_pane

0xc4e4,	// (0x0000c627) cursor_primary_pane_g1

0x408d,	// (0x000041d0) cursor_text_primary_t1

0xd351,	// (0x0000d494) cursor_primary_small_pane_g1

0x407f,	// (0x000041c2) cursor_text_primary_small_t1

0xd347,	// (0x0000d48a) cursor_primary_small_pane_g1_copy1

0x4067,	// (0x000041aa) cursor_text_primary_small_t1_copy1

0x4045,	// (0x00004188) cursor_text_title_t1

0xd33d,	// (0x0000d480) cursor_title_pane_g1

0xc4e4,	// (0x0000c627) cursor_digital_pane_g1

0x2665,	// (0x000027a8) cursor_text_digital_t1

0x268a,	// (0x000027cd) link_highlight_primary_pane_g1

0x3fee,	// (0x00004131) link_highlight_primary_pane_t1

0x2673,	// (0x000027b6) link_highlight_primary_small_pane_g1

0x267b,	// (0x000027be) link_highlight_primary_small_pane_t1

0x268a,	// (0x000027cd) link_highlight_secondary_pane_g1

0x2692,	// (0x000027d5) link_highlight_secondary_pane_t1

0x3f62,	// (0x000040a5) link_highlight_title_pane_g1

0x3f6a,	// (0x000040ad) link_highlight_title_pane_t1

0x3f4b,	// (0x0000408e) link_highlight_digital_pane_g1

0x3f53,	// (0x00004096) link_highlight_digital_pane_t1

0x3e23,	// (0x00003f66) copy_highlight_primary_pane_g1

0x3e2b,	// (0x00003f6e) copy_highlight_primary_pane_t1

0x3dfd,	// (0x00003f40) copy_highlight_primary_small_pane_g1

0x3e14,	// (0x00003f57) copy_highlight_primary_small_pane_t1

0x26a1,	// (0x000027e4) copy_highlight_secondary_pane_g1

0x26a9,	// (0x000027ec) copy_highlight_secondary_pane_t1

0x3dfd,	// (0x00003f40) copy_highlight_title_pane_g1

0x3e05,	// (0x00003f48) copy_highlight_title_pane_t1

0x3e23,	// (0x00003f66) copy_highlight_digital_pane_g1

0x5485,	// (0x000055c8) copy_highlight_digital_pane_t1

0x53d9,	// (0x0000551c) graphic_text_primary_pane_g1

0x5469,	// (0x000055ac) graphic_text_primary_pane_t1

0x5477,	// (0x000055ba) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x0000fadb) graphic_text_primary_pane_t

0x5445,	// (0x00005588) graphic_text_primary_small_pane_g1

0x544d,	// (0x00005590) graphic_text_primary_small_pane_t1

0x545b,	// (0x0000559e) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x0000fad6) graphic_text_primary_small_pane_t

0x5421,	// (0x00005564) graphic_text_secondary_pane_g1

0x5429,	// (0x0000556c) graphic_text_secondary_pane_t1

0x5437,	// (0x0000557a) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0000fad1) graphic_text_secondary_pane_t

0x53fd,	// (0x00005540) graphic_text_title_pane_g1

0x5405,	// (0x00005548) graphic_text_title_pane_t1

0x5413,	// (0x00005556) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x0000facc) graphic_text_title_pane_t

0x53d9,	// (0x0000551c) graphic_text_digital_pane_g1

0x53e1,	// (0x00005524) graphic_text_digital_pane_t1

0x53ef,	// (0x00005532) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x0000fac7) graphic_text_digital_pane_t

0x03c4,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x03c4,	// (0x00000507) navi_icon_pane_srt

0x0150,	// (0x00000293) navi_midp_pane_srt

0x0150,	// (0x00000293) navi_navi_pane_srt

0x03c4,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x03c4,	// (0x00000507) navi_text_pane_srt

0x53a4,	// (0x000054e7) navi_navi_icon_text_pane_srt

0x53ac,	// (0x000054ef) navi_navi_pane_srt_g1_ParamLimits

0x53ac,	// (0x000054ef) navi_navi_pane_srt_g1

0x53be,	// (0x00005501) navi_navi_pane_srt_g2_ParamLimits

0x53be,	// (0x00005501) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0000fac2) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0000fac2) navi_navi_pane_srt_g

0x53d0,	// (0x00005513) navi_navi_tabs_pane_srt

0x53a4,	// (0x000054e7) navi_navi_text_pane_srt

0x53a4,	// (0x000054e7) navi_navi_volume_pane_srt

0x5395,	// (0x000054d8) navi_navi_text_pane_srt_t1

0x5370,	// (0x000054b3) navi_navi_volume_pane_srt_g1

0x5378,	// (0x000054bb) volume_small_pane_srt_ParamLimits

0x5378,	// (0x000054bb) volume_small_pane_srt

0x26b8,	// (0x000027fb) volume_small_pane_srt_g1_ParamLimits

0x26b8,	// (0x000027fb) volume_small_pane_srt_g1

0x26c8,	// (0x0000280b) volume_small_pane_srt_g2_ParamLimits

0x26c8,	// (0x0000280b) volume_small_pane_srt_g2

0x26d9,	// (0x0000281c) volume_small_pane_srt_g3_ParamLimits

0x26d9,	// (0x0000281c) volume_small_pane_srt_g3

0x26ea,	// (0x0000282d) volume_small_pane_srt_g4_ParamLimits

0x26ea,	// (0x0000282d) volume_small_pane_srt_g4

0x26fb,	// (0x0000283e) volume_small_pane_srt_g5_ParamLimits

0x26fb,	// (0x0000283e) volume_small_pane_srt_g5

0x270c,	// (0x0000284f) volume_small_pane_srt_g6_ParamLimits

0x270c,	// (0x0000284f) volume_small_pane_srt_g6

0x271d,	// (0x00002860) volume_small_pane_srt_g7_ParamLimits

0x271d,	// (0x00002860) volume_small_pane_srt_g7

0x272e,	// (0x00002871) volume_small_pane_srt_g8_ParamLimits

0x272e,	// (0x00002871) volume_small_pane_srt_g8

0x273f,	// (0x00002882) volume_small_pane_srt_g9_ParamLimits

0x273f,	// (0x00002882) volume_small_pane_srt_g9

0x2750,	// (0x00002893) volume_small_pane_srt_g10_ParamLimits

0x2750,	// (0x00002893) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x0000f876) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x0000f876) volume_small_pane_srt_g

0x086f,	// (0x000009b2) query_popup_data_pane_cp2

0x535e,	// (0x000054a1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x535e,	// (0x000054a1) navi_navi_icon_text_pane_srt_t1

0x409b,	// (0x000041de) navi_tabs_2_long_pane_srt

0x409b,	// (0x000041de) navi_tabs_2_pane_srt

0x409b,	// (0x000041de) navi_tabs_3_long_pane_srt

0x409b,	// (0x000041de) navi_tabs_3_pane_srt

0x409b,	// (0x000041de) navi_tabs_4_pane_srt

0x5336,	// (0x00005479) tabs_2_active_pane_srt_ParamLimits

0x5336,	// (0x00005479) tabs_2_active_pane_srt

0x5346,	// (0x00005489) tabs_2_passive_pane_srt_ParamLimits

0x5346,	// (0x00005489) tabs_2_passive_pane_srt

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp1_srt_ParamLimits

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp1_srt

0x530a,	// (0x0000544d) bg_passive_tab_pane_g1_cp1_srt

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp1_srt

0x5313,	// (0x00005456) bg_passive_tab_pane_g3_cp1_srt

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x531c,	// (0x0000545f) tabs_2_active_pane_srt_g1

0xd725,	// (0x0000d868) tabs_2_active_pane_srt_t1_ParamLimits

0xd725,	// (0x0000d868) tabs_2_active_pane_srt_t1

0x530a,	// (0x0000544d) bg_active_tab_pane_g1_cp1_srt

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp1_srt

0x5313,	// (0x00005456) bg_active_tab_pane_g3_cp1_srt

0x52d7,	// (0x0000541a) tabs_3_active_pane_srt_ParamLimits

0x52d7,	// (0x0000541a) tabs_3_active_pane_srt

0x52e8,	// (0x0000542b) tabs_3_passive_pane_cp_srt_ParamLimits

0x52e8,	// (0x0000542b) tabs_3_passive_pane_cp_srt

0x52f9,	// (0x0000543c) tabs_3_passive_pane_srt_ParamLimits

0x52f9,	// (0x0000543c) tabs_3_passive_pane_srt

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp2_srt_ParamLimits

0x377c,	// (0x000038bf) bg_passive_tab_pane_cp2_srt

0x2761,	// (0x000028a4) bg_passive_tab_pane_g1_cp2_srt

0x2005,	// (0x00002148) bg_passive_tab_pane_g2_cp2_srt

0x276a,	// (0x000028ad) bg_passive_tab_pane_g3_cp2_srt

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x06ea,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x52bd,	// (0x00005400) tabs_3_active_pane_srt_g1

0xd70f,	// (0x0000d852) tabs_3_active_pane_srt_t1_ParamLimits

0xd70f,	// (0x0000d852) tabs_3_active_pane_srt_t1

0x2761,	// (0x000028a4) bg_active_tab_pane_g1_cp2_srt

0x2005,	// (0x00002148) bg_active_tab_pane_g2_cp2_srt

0x276a,	// (0x000028ad) bg_active_tab_pane_g3_cp2_srt

0x5275,	// (0x000053b8) tabs_4_active_pane_srt_ParamLimits

0x5275,	// (0x000053b8) tabs_4_active_pane_srt

0x5287,	// (0x000053ca) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5287,	// (0x000053ca) tabs_4_passive_pane_cp2_srt

0x2a13,	// (0x00002b56) aid_size_cell_toolbar

0x4df4,	// (0x00004f37) main_idle_act_pane_ParamLimits

0x2c36,	// (0x00002d79) popup_large_graphic_colour_window_ParamLimits

0xcd91,	// (0x0000ced4) popup_toolbar_window_ParamLimits

0xcd91,	// (0x0000ced4) popup_toolbar_window

0x4ffa,	// (0x0000513d) list_single_graphic_2heading_pane_ParamLimits

0x4ffa,	// (0x0000513d) list_single_graphic_2heading_pane

0x1910,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane

0x1922,	// (0x00001a65) aid_size_cell_apps_grid_prt_pane

0x2a53,	// (0x00002b96) bg_wml_button_pane_cp1_ParamLimits

0x2a53,	// (0x00002b96) bg_wml_button_pane_cp1

0xd2ea,	// (0x0000d42d) form_midp_field_text_pane_t1_ParamLimits

0x377c,	// (0x000038bf) input_focus_pane_cp050_ParamLimits

0x3a7a,	// (0x00003bbd) list_midp_form_text_pane_ParamLimits

0x3a20,	// (0x00003b63) input_focus_pane_cp051_ParamLimits

0x3a34,	// (0x00003b77) list_midp_choice_pane_ParamLimits

0xd288,	// (0x0000d3cb) list_single_2graphic_pane_cp3_ParamLimits

0xd288,	// (0x0000d3cb) list_single_2graphic_pane_cp3

0xd29b,	// (0x0000d3de) list_single_midp_graphic_pane_ParamLimits

0xd29b,	// (0x0000d3de) list_single_midp_graphic_pane

0x0d29,	// (0x00000e6c) list_single_graphic_2heading_pane_g1_ParamLimits

0x0d29,	// (0x00000e6c) list_single_graphic_2heading_pane_g1

0x0caf,	// (0x00000df2) list_single_graphic_2heading_pane_g4_ParamLimits

0x0caf,	// (0x00000df2) list_single_graphic_2heading_pane_g4

0x0cbb,	// (0x00000dfe) list_single_graphic_2heading_pane_g5_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0000f8c9) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0000f8c9) list_single_graphic_2heading_pane_g

0x347e,	// (0x000035c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x347e,	// (0x000035c1) list_single_graphic_2heading_pane_t1

0x3492,	// (0x000035d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x3492,	// (0x000035d5) list_single_graphic_2heading_pane_t2

0x34ae,	// (0x000035f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x34ae,	// (0x000035f1) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0000f8d0) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0000f8d0) list_single_graphic_2heading_pane_t

0x34c6,	// (0x00003609) bg_popup_sub_pane_cp2

0x34f0,	// (0x00003633) grid_toobar_pane

0x352c,	// (0x0000366f) cell_toolbar_pane_ParamLimits

0x352c,	// (0x0000366f) cell_toolbar_pane

0x3572,	// (0x000036b5) cell_toolbar_pane_g1_ParamLimits

0x3572,	// (0x000036b5) cell_toolbar_pane_g1

0x3586,	// (0x000036c9) cell_toolbar_pane_g2_ParamLimits

0x3586,	// (0x000036c9) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x0000f8d7) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x0000f8d7) cell_toolbar_pane_g

0x35a8,	// (0x000036eb) grid_highlight_pane_cp2_ParamLimits

0x35a8,	// (0x000036eb) grid_highlight_pane_cp2

0x35c2,	// (0x00003705) toolbar_button_pane

0x35ce,	// (0x00003711) toolbar_button_pane_g1

0x35d6,	// (0x00003719) toolbar_button_pane_g2

0x35de,	// (0x00003721) toolbar_button_pane_g3

0x35e6,	// (0x00003729) toolbar_button_pane_g4

0x35ee,	// (0x00003731) toolbar_button_pane_g5

0x35f6,	// (0x00003739) toolbar_button_pane_g6

0x35fe,	// (0x00003741) toolbar_button_pane_g7

0x3606,	// (0x00003749) toolbar_button_pane_g8

0x360e,	// (0x00003751) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x0000f8dc) toolbar_button_pane_g

0x361e,	// (0x00003761) list_single_2graphic_pane_g1_cp3_ParamLimits

0x361e,	// (0x00003761) list_single_2graphic_pane_g1_cp3

0xd1ea,	// (0x0000d32d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd1ea,	// (0x0000d32d) list_single_2graphic_pane_g2_cp3

0x363b,	// (0x0000377e) list_single_2graphic_pane_g3_cp3

0x3643,	// (0x00003786) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3643,	// (0x00003786) list_single_2graphic_pane_g4_cp3

0x364f,	// (0x00003792) list_single_2graphic_pane_t1_cp3_ParamLimits

0x364f,	// (0x00003792) list_single_2graphic_pane_t1_cp3

0x3693,	// (0x000037d6) list_single_midp_graphic_pane_g2_ParamLimits

0x3693,	// (0x000037d6) list_single_midp_graphic_pane_g2

0x2a1b,	// (0x00002b5e) aid_zoom_text_primary

0x2a23,	// (0x00002b66) aid_zoom_text_secondary

0xc53c,	// (0x0000c67f) status_small_pane_g7_ParamLimits

0xc53c,	// (0x0000c67f) status_small_pane_g7

0xc55f,	// (0x0000c6a2) status_small_pane_t1_ParamLimits

0xba31,	// (0x0000bb74) title_pane_g2

0x0003,

0xf529,	// (0x0000f66c) title_pane_g

0xbca9,	// (0x0000bdec) aid_size_cell_colour_1_pane_ParamLimits

0xbca9,	// (0x0000bdec) aid_size_cell_colour_1_pane

0xbcbd,	// (0x0000be00) aid_size_cell_colour_2_pane_ParamLimits

0xbcbd,	// (0x0000be00) aid_size_cell_colour_2_pane

0xbcd1,	// (0x0000be14) aid_size_cell_colour_3_pane_ParamLimits

0xbcd1,	// (0x0000be14) aid_size_cell_colour_3_pane

0xbce5,	// (0x0000be28) aid_size_cell_colour_4_pane_ParamLimits

0xbce5,	// (0x0000be28) aid_size_cell_colour_4_pane

0x178c,	// (0x000018cf) title_pane_stacon_g1_ParamLimits

0x178c,	// (0x000018cf) title_pane_stacon_g1

0x3e82,	// (0x00003fc5) popup_note_wait_window_g3_ParamLimits

0x3e82,	// (0x00003fc5) popup_note_wait_window_g3

0x3ef8,	// (0x0000403b) popup_note_wait_window_t5_ParamLimits

0x3ef8,	// (0x0000403b) popup_note_wait_window_t5

0x0150,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc793,	// (0x0000c8d6) popup_feb_china_hwr_fs_window_ParamLimits

0xc793,	// (0x0000c8d6) popup_feb_china_hwr_fs_window

0xd1fb,	// (0x0000d33e) aid_size_cell_hwr_fs_ParamLimits

0xd1fb,	// (0x0000d33e) aid_size_cell_hwr_fs

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp3_ParamLimits

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp3

0xd210,	// (0x0000d353) grid_hwr_fs_pane_ParamLimits

0xd210,	// (0x0000d353) grid_hwr_fs_pane

0x37a0,	// (0x000038e3) linegrid_hwr_fs_pane_ParamLimits

0x37a0,	// (0x000038e3) linegrid_hwr_fs_pane

0xd228,	// (0x0000d36b) cell_hwr_fs_pane_ParamLimits

0xd228,	// (0x0000d36b) cell_hwr_fs_pane

0x37d2,	// (0x00003915) linegrid_hwr_fs_pane_g1_ParamLimits

0x37d2,	// (0x00003915) linegrid_hwr_fs_pane_g1

0xd24e,	// (0x0000d391) linegrid_hwr_fs_pane_g2_ParamLimits

0xd24e,	// (0x0000d391) linegrid_hwr_fs_pane_g2

0x37f0,	// (0x00003933) linegrid_hwr_fs_pane_g3_ParamLimits

0x37f0,	// (0x00003933) linegrid_hwr_fs_pane_g3

0x37fc,	// (0x0000393f) linegrid_hwr_fs_pane_g4_ParamLimits

0x37fc,	// (0x0000393f) linegrid_hwr_fs_pane_g4

0x3816,	// (0x00003959) linegrid_hwr_fs_pane_g5_ParamLimits

0x3816,	// (0x00003959) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0000f902) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0000f902) linegrid_hwr_fs_pane_g

0x382c,	// (0x0000396f) cell_hwr_fs_pane_g1_ParamLimits

0x382c,	// (0x0000396f) cell_hwr_fs_pane_g1

0x33b5,	// (0x000034f8) cell_hwr_fs_pane_g2_ParamLimits

0x33b5,	// (0x000034f8) cell_hwr_fs_pane_g2

0xd260,	// (0x0000d3a3) cell_hwr_fs_pane_g3_ParamLimits

0xd260,	// (0x0000d3a3) cell_hwr_fs_pane_g3

0xd26d,	// (0x0000d3b0) cell_hwr_fs_pane_g4_ParamLimits

0xd26d,	// (0x0000d3b0) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x0000f90d) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x0000f90d) cell_hwr_fs_pane_g

0xd27a,	// (0x0000d3bd) cell_hwr_fs_pane_t1

0x0150,	// (0x00000293) grid_highlight_pane_cp6

0x0150,	// (0x00000293) main_idle_act2_pane

0x153d,	// (0x00001680) aid_inside_area_popup_secondary

0xd35b,	// (0x0000d49e) aid_inside_area_window_primary_ParamLimits

0xd35b,	// (0x0000d49e) aid_inside_area_window_primary

0x5494,	// (0x000055d7) ai2_news_ticker_pane

0x549c,	// (0x000055df) aid_size_cell_ai1_link_ParamLimits

0x549c,	// (0x000055df) aid_size_cell_ai1_link

0xd73b,	// (0x0000d87e) popup_ai2_data_window_ParamLimits

0xd73b,	// (0x0000d87e) popup_ai2_data_window

0x54cc,	// (0x0000560f) popup_ai2_link_window_ParamLimits

0x54cc,	// (0x0000560f) popup_ai2_link_window

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp4_ParamLimits

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp4

0x54e0,	// (0x00005623) grid_ai2_link_pane_ParamLimits

0x54e0,	// (0x00005623) grid_ai2_link_pane

0x54f7,	// (0x0000563a) popup_ai2_link_window_g1_ParamLimits

0x54f7,	// (0x0000563a) popup_ai2_link_window_g1

0x5503,	// (0x00005646) popup_ai2_link_window_g2_ParamLimits

0x5503,	// (0x00005646) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0000fae0) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0000fae0) popup_ai2_link_window_g

0x5512,	// (0x00005655) ai2_mp_button_pane

0x551a,	// (0x0000565d) ai2_mp_volume_pane

0x3a20,	// (0x00003b63) bg_popup_sub_pane_cp5_ParamLimits

0x3a20,	// (0x00003b63) bg_popup_sub_pane_cp5

0x5522,	// (0x00005665) heading_ai2_gene_pane_ParamLimits

0x5522,	// (0x00005665) heading_ai2_gene_pane

0x552e,	// (0x00005671) list_ai2_gene_pane_ParamLimits

0x552e,	// (0x00005671) list_ai2_gene_pane

0x5576,	// (0x000056b9) cell_ai2_link_pane_ParamLimits

0x5576,	// (0x000056b9) cell_ai2_link_pane

0x558c,	// (0x000056cf) cell_ai2_link_pane_g1

0x0150,	// (0x00000293) grid_highlight_pane_cp7

0x565c,	// (0x0000579f) ai2_mp_volume_pane_g1

0x5664,	// (0x000057a7) ai2_mp_volume_pane_g2

0xd765,	// (0x0000d8a8) list_ai2_gene_pane_t1

0x566c,	// (0x000057af) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0000faf9) ai2_mp_volume_pane_g

0x5674,	// (0x000057b7) volume_small_pane_cp3

0x567d,	// (0x000057c0) aid_size_cell_ai2_button

0x5685,	// (0x000057c8) grid_ai2_button_pane

0x568e,	// (0x000057d1) cell_ai2_button_pane_ParamLimits

0x568e,	// (0x000057d1) cell_ai2_button_pane

0xf4ff,	// (0x0000f642) cell_ai2_button_pane_g1

0x0150,	// (0x00000293) grid_highlight_pane_cp8

0x561c,	// (0x0000575f) ai2_gene_pane_t1_ParamLimits

0x561c,	// (0x0000575f) ai2_gene_pane_t1

0xc731,	// (0x0000c874) aid_height_parent_landscape

0xd4a3,	// (0x0000d5e6) aid_height_set_list

0x4df4,	// (0x00004f37) aid_size_parent

0x51ff,	// (0x00005342) aid_size_cell_graphic_pane_ParamLimits

0x553e,	// (0x00005681) popup_ai2_data_window_g1_ParamLimits

0x553e,	// (0x00005681) popup_ai2_data_window_g1

0x554a,	// (0x0000568d) ai2_news_ticker_pane_g1

0x5552,	// (0x00005695) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0000fae5) ai2_news_ticker_pane_g

0x555a,	// (0x0000569d) ai2_news_ticker_pane_t1

0x5568,	// (0x000056ab) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x0000faea) ai2_news_ticker_pane_t

0x5595,	// (0x000056d8) heading_ai2_gene_pane_g1

0x559d,	// (0x000056e0) heading_ai2_gene_pane_t1_ParamLimits

0x559d,	// (0x000056e0) heading_ai2_gene_pane_t1

0x55b2,	// (0x000056f5) list_highlight_pane_cp6

0xd74f,	// (0x0000d892) ai2_gene_pane_ParamLimits

0xd74f,	// (0x0000d892) ai2_gene_pane

0xd773,	// (0x0000d8b6) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0000faef) list_ai2_gene_pane_t

0x55ed,	// (0x00005730) list_highlight_pane_cp8_ParamLimits

0x55ed,	// (0x00005730) list_highlight_pane_cp8

0x55fe,	// (0x00005741) ai2_gene_pane_g1_ParamLimits

0x55fe,	// (0x00005741) ai2_gene_pane_g1

0x5610,	// (0x00005753) ai2_gene_pane_g2_ParamLimits

0x5610,	// (0x00005753) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0000faf4) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0000faf4) ai2_gene_pane_g

0x0c92,	// (0x00000dd5) scroll_pane_cp12

0xc6ee,	// (0x0000c831) control_pane_t3_ParamLimits

0xc6ee,	// (0x0000c831) control_pane_t3

0xc550,	// (0x0000c693) status_small_pane_g8_ParamLimits

0xc550,	// (0x0000c693) status_small_pane_g8

0xc828,	// (0x0000c96b) popup_find_window_ParamLimits

0xcabb,	// (0x0000cbfe) popup_note_image_window_ParamLimits

0x0d29,	// (0x00000e6c) list_double2_graphic_pane_vc_g1_ParamLimits

0x0d29,	// (0x00000e6c) list_double2_graphic_pane_vc_g1

0x0caf,	// (0x00000df2) list_double2_graphic_pane_vc_g2_ParamLimits

0x0caf,	// (0x00000df2) list_double2_graphic_pane_vc_g2

0x0cbb,	// (0x00000dfe) list_double2_graphic_pane_vc_g3_ParamLimits

0x0cbb,	// (0x00000dfe) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x0000f8c9) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x0000f8c9) list_double2_graphic_pane_vc_g

0x355c,	// (0x0000369f) list_double2_graphic_pane_vc_t1_ParamLimits

0x355c,	// (0x0000369f) list_double2_graphic_pane_vc_t1

0x0caf,	// (0x00000df2) list_single_heading_pane_vc_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_heading_pane_vc_g1

0x0cbb,	// (0x00000dfe) list_single_heading_pane_vc_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_heading_pane_vc_g

0x366b,	// (0x000037ae) list_single_heading_pane_vc_t1_ParamLimits

0x366b,	// (0x000037ae) list_single_heading_pane_vc_t1

0x3681,	// (0x000037c4) list_single_heading_pane_vc_t2_ParamLimits

0x3681,	// (0x000037c4) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0000f8f1) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0000f8f1) list_single_heading_pane_vc_t

0x36b5,	// (0x000037f8) list_setting_number_pane_vc_g1_ParamLimits

0x36b5,	// (0x000037f8) list_setting_number_pane_vc_g1

0x36c1,	// (0x00003804) list_setting_number_pane_vc_g2_ParamLimits

0x36c1,	// (0x00003804) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f8f6) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f8f6) list_setting_number_pane_vc_g

0x36cd,	// (0x00003810) list_setting_number_pane_vc_t1_ParamLimits

0x36cd,	// (0x00003810) list_setting_number_pane_vc_t1

0x36e1,	// (0x00003824) list_setting_number_pane_vc_t2_ParamLimits

0x36e1,	// (0x00003824) list_setting_number_pane_vc_t2

0x36fd,	// (0x00003840) list_setting_number_pane_vc_t3_ParamLimits

0x36fd,	// (0x00003840) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x0000f8fb) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x0000f8fb) list_setting_number_pane_vc_t

0x372b,	// (0x0000386e) set_value_pane_vc_ParamLimits

0x372b,	// (0x0000386e) set_value_pane_vc

0x4ffa,	// (0x0000513d) list_double2_graphic_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double2_graphic_pane_vc

0x4ffa,	// (0x0000513d) list_double2_large_graphic_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double2_large_graphic_pane_vc

0x4ffa,	// (0x0000513d) list_double2_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double2_pane_vc

0x4ffa,	// (0x0000513d) list_double_graphic_heading_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_graphic_heading_pane_vc

0x4ffa,	// (0x0000513d) list_double_graphic_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_graphic_pane_vc

0x4ffa,	// (0x0000513d) list_double_heading_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_heading_pane_vc

0x500c,	// (0x0000514f) list_double_large_graphic_pane_vc_ParamLimits

0x500c,	// (0x0000514f) list_double_large_graphic_pane_vc

0x4ffa,	// (0x0000513d) list_double_number_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_number_pane_vc

0x4ffa,	// (0x0000513d) list_double_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_pane_vc

0x4ffa,	// (0x0000513d) list_double_time_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_double_time_pane_vc

0x4ffa,	// (0x0000513d) list_setting_number_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_setting_number_pane_vc

0x4ffa,	// (0x0000513d) list_setting_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_setting_pane_vc

0x4ffa,	// (0x0000513d) list_single_graphic_heading_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_single_graphic_heading_pane_vc

0x4ffa,	// (0x0000513d) list_single_heading_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_single_heading_pane_vc

0x4ffa,	// (0x0000513d) list_single_number_heading_pane_vc_ParamLimits

0x4ffa,	// (0x0000513d) list_single_number_heading_pane_vc

0x0d29,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0d29,	// (0x00000e6c) list_double_graphic_heading_pane_vc_g1

0x56c2,	// (0x00005805) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56c2,	// (0x00005805) list_double_graphic_heading_pane_vc_g2

0x56ce,	// (0x00005811) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56ce,	// (0x00005811) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x0000fb00) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x0000fb00) list_double_graphic_heading_pane_vc_g

0x56da,	// (0x0000581d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56da,	// (0x0000581d) list_double_graphic_heading_pane_vc_t1

0x56f6,	// (0x00005839) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x56f6,	// (0x00005839) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0000fb07) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0000fb07) list_double_graphic_heading_pane_vc_t

0x36b5,	// (0x000037f8) list_setting_pane_vc_g1_ParamLimits

0x36b5,	// (0x000037f8) list_setting_pane_vc_g1

0x36c1,	// (0x00003804) list_setting_pane_vc_g2_ParamLimits

0x36c1,	// (0x00003804) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x0000f8f6) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x0000f8f6) list_setting_pane_vc_g

0x5924,	// (0x00005a67) list_setting_pane_vc_t1_ParamLimits

0x5924,	// (0x00005a67) list_setting_pane_vc_t1

0x5940,	// (0x00005a83) list_setting_pane_vc_t2_ParamLimits

0x5940,	// (0x00005a83) list_setting_pane_vc_t2

0x0001,

0xf9f2,	// (0x0000fb35) list_setting_pane_vc_t_ParamLimits

0xf9f2,	// (0x0000fb35) list_setting_pane_vc_t

0x372b,	// (0x0000386e) set_value_pane_cp_vc_ParamLimits

0x372b,	// (0x0000386e) set_value_pane_cp_vc

0x0caf,	// (0x00000df2) list_single_number_heading_pane_vc_g1_ParamLimits

0x0caf,	// (0x00000df2) list_single_number_heading_pane_vc_g1

0x0cbb,	// (0x00000dfe) list_single_number_heading_pane_vc_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_single_number_heading_pane_vc_g

0x595c,	// (0x00005a9f) list_single_number_heading_pane_vc_t1_ParamLimits

0x595c,	// (0x00005a9f) list_single_number_heading_pane_vc_t1

0x0d05,	// (0x00000e48) list_single_number_heading_pane_vc_t2_ParamLimits

0x0d05,	// (0x00000e48) list_single_number_heading_pane_vc_t2

0x0d17,	// (0x00000e5a) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d17,	// (0x00000e5a) list_single_number_heading_pane_vc_t3

0x0002,

0xf9f7,	// (0x0000fb3a) list_single_number_heading_pane_vc_t_ParamLimits

0xf9f7,	// (0x0000fb3a) list_single_number_heading_pane_vc_t

0x0d29,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0d29,	// (0x00000e6c) list_single_graphic_heading_pane_vc_g1

0x0caf,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0caf,	// (0x00000df2) list_single_graphic_heading_pane_vc_g4

0x0cbb,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0cbb,	// (0x00000dfe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x0000f8c9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x0000f8c9) list_single_graphic_heading_pane_vc_g

0x5972,	// (0x00005ab5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5972,	// (0x00005ab5) list_single_graphic_heading_pane_vc_t1

0x5988,	// (0x00005acb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5988,	// (0x00005acb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9fe,	// (0x0000fb41) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9fe,	// (0x0000fb41) list_single_graphic_heading_pane_vc_t

0x0caf,	// (0x00000df2) list_double2_pane_vc_g1_ParamLimits

0x0caf,	// (0x00000df2) list_double2_pane_vc_g1

0x0cbb,	// (0x00000dfe) list_double2_pane_vc_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_double2_pane_vc_g

0x4f98,	// (0x000050db) list_double2_pane_vc_t1_ParamLimits

0x4f98,	// (0x000050db) list_double2_pane_vc_t1

0x599a,	// (0x00005add) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x599a,	// (0x00005add) list_double2_large_graphic_pane_vc_g1

0x0caf,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0caf,	// (0x00000df2) list_double2_large_graphic_pane_vc_g2

0x0cbb,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0cbb,	// (0x00000dfe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0000f703) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0000f703) list_double2_large_graphic_pane_vc_g

0x59a6,	// (0x00005ae9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59a6,	// (0x00005ae9) list_double2_large_graphic_pane_vc_t1

0x59bc,	// (0x00005aff) list_double_time_pane_vc_g1_ParamLimits

0x59bc,	// (0x00005aff) list_double_time_pane_vc_g1

0x59c8,	// (0x00005b0b) list_double_time_pane_vc_g2_ParamLimits

0x59c8,	// (0x00005b0b) list_double_time_pane_vc_g2

0x0001,

0xfa03,	// (0x0000fb46) list_double_time_pane_vc_g_ParamLimits

0xfa03,	// (0x0000fb46) list_double_time_pane_vc_g

0x59d4,	// (0x00005b17) list_double_time_pane_vc_t1_ParamLimits

0x59d4,	// (0x00005b17) list_double_time_pane_vc_t1

0x59f8,	// (0x00005b3b) list_double_time_pane_vc_t2_ParamLimits

0x59f8,	// (0x00005b3b) list_double_time_pane_vc_t2

0x5a27,	// (0x00005b6a) list_double_time_pane_vc_t3_ParamLimits

0x5a27,	// (0x00005b6a) list_double_time_pane_vc_t3

0x5a39,	// (0x00005b7c) list_double_time_pane_vc_t4_ParamLimits

0x5a39,	// (0x00005b7c) list_double_time_pane_vc_t4

0x0003,

0xfa08,	// (0x0000fb4b) list_double_time_pane_vc_t_ParamLimits

0xfa08,	// (0x0000fb4b) list_double_time_pane_vc_t

0x0caf,	// (0x00000df2) list_double_pane_vc_g1_ParamLimits

0x0caf,	// (0x00000df2) list_double_pane_vc_g1

0x0cbb,	// (0x00000dfe) list_double_pane_vc_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_double_pane_vc_g

0x5a4d,	// (0x00005b90) list_double_pane_vc_t1_ParamLimits

0x5a4d,	// (0x00005b90) list_double_pane_vc_t1

0x5a61,	// (0x00005ba4) list_double_pane_vc_t2_ParamLimits

0x5a61,	// (0x00005ba4) list_double_pane_vc_t2

0x0001,

0xfa11,	// (0x0000fb54) list_double_pane_vc_t_ParamLimits

0xfa11,	// (0x0000fb54) list_double_pane_vc_t

0x0caf,	// (0x00000df2) list_double_number_pane_vc_g1_ParamLimits

0x0caf,	// (0x00000df2) list_double_number_pane_vc_g1

0x0cbb,	// (0x00000dfe) list_double_number_pane_vc_g2_ParamLimits

0x0cbb,	// (0x00000dfe) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0000f6e6) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0000f6e6) list_double_number_pane_vc_g

0x5a79,	// (0x00005bbc) list_double_number_pane_vc_t1_ParamLimits

0x5a79,	// (0x00005bbc) list_double_number_pane_vc_t1

0x5a8b,	// (0x00005bce) list_double_number_pane_vc_t2_ParamLimits

0x5a8b,	// (0x00005bce) list_double_number_pane_vc_t2

0x5a9f,	// (0x00005be2) list_double_number_pane_vc_t3_ParamLimits

0x5a9f,	// (0x00005be2) list_double_number_pane_vc_t3

0x0002,

0xfa16,	// (0x0000fb59) list_double_number_pane_vc_t_ParamLimits

0xfa16,	// (0x0000fb59) list_double_number_pane_vc_t

0x5ab7,	// (0x00005bfa) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ab7,	// (0x00005bfa) list_double_large_graphic_pane_vc_g1

0x5ad3,	// (0x00005c16) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ad3,	// (0x00005c16) list_double_large_graphic_pane_vc_g2

0x5ae7,	// (0x00005c2a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5ae7,	// (0x00005c2a) list_double_large_graphic_pane_vc_g3

0x5af6,	// (0x00005c39) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5af6,	// (0x00005c39) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa1d,	// (0x0000fb60) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa1d,	// (0x0000fb60) list_double_large_graphic_pane_vc_g

0x5b05,	// (0x00005c48) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b05,	// (0x00005c48) list_double_large_graphic_pane_vc_t1

0x5b21,	// (0x00005c64) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b21,	// (0x00005c64) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa26,	// (0x0000fb69) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa26,	// (0x0000fb69) list_double_large_graphic_pane_vc_t

0x56c2,	// (0x00005805) list_double_heading_pane_vc_g1_ParamLimits

0x56c2,	// (0x00005805) list_double_heading_pane_vc_g1

0x56ce,	// (0x00005811) list_double_heading_pane_vc_g2_ParamLimits

0x56ce,	// (0x00005811) list_double_heading_pane_vc_g2

0x0001,

0xfa2b,	// (0x0000fb6e) list_double_heading_pane_vc_g_ParamLimits

0xfa2b,	// (0x0000fb6e) list_double_heading_pane_vc_g

0x5b43,	// (0x00005c86) list_double_heading_pane_vc_t1_ParamLimits

0x5b43,	// (0x00005c86) list_double_heading_pane_vc_t1

0x5b57,	// (0x00005c9a) list_double_heading_pane_vc_t2_ParamLimits

0x5b57,	// (0x00005c9a) list_double_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x0000fb73) list_double_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x0000fb73) list_double_heading_pane_vc_t

0x5b6f,	// (0x00005cb2) list_double_graphic_pane_vc_g1_ParamLimits

0x5b6f,	// (0x00005cb2) list_double_graphic_pane_vc_g1

0x5b7b,	// (0x00005cbe) list_double_graphic_pane_vc_g2_ParamLimits

0x5b7b,	// (0x00005cbe) list_double_graphic_pane_vc_g2

0x0caf,	// (0x00000df2) list_double_graphic_pane_vc_g3_ParamLimits

0x0caf,	// (0x00000df2) list_double_graphic_pane_vc_g3

0x0003,

0xfa35,	// (0x0000fb78) list_double_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0000fb78) list_double_graphic_pane_vc_g

0x5b98,	// (0x00005cdb) list_double_graphic_pane_vc_t1_ParamLimits

0x5b98,	// (0x00005cdb) list_double_graphic_pane_vc_t1

0x5bc2,	// (0x00005d05) list_double_graphic_pane_vc_t2_ParamLimits

0x5bc2,	// (0x00005d05) list_double_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0000fb81) list_double_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0000fb81) list_double_graphic_pane_vc_t

0xf521,	// (0x0000f664) aid_size_cell_fastswap

0xb818,	// (0x0000b95b) aid_size_cell_touch_ParamLimits

0xb818,	// (0x0000b95b) aid_size_cell_touch

0x017a,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x017a,	// (0x000002bd) popup_fast_swap_wide_window

0xb9c8,	// (0x0000bb0b) touch_pane_ParamLimits

0xb9c8,	// (0x0000bb0b) touch_pane

0x116d,	// (0x000012b0) button_value_adjust_pane_cp2

0x1175,	// (0x000012b8) button_value_adjust_pane_cp4

0x1197,	// (0x000012da) form_field_data_pane_cp2

0xc0fd,	// (0x0000c240) form_field_data_wide_pane_cp2

0x19f2,	// (0x00001b35) bg_scroll_pane_ParamLimits

0x1a11,	// (0x00001b54) scroll_handle_pane_ParamLimits

0x1a25,	// (0x00001b68) scroll_sc2_down_pane_ParamLimits

0x1a25,	// (0x00001b68) scroll_sc2_down_pane

0x1a4c,	// (0x00001b8f) scroll_sc2_up_pane_ParamLimits

0x1a4c,	// (0x00001b8f) scroll_sc2_up_pane

0xd8a3,	// (0x0000d9e6) grid_wheel_folder_pane_g1_ParamLimits

0xd8a3,	// (0x0000d9e6) grid_wheel_folder_pane_g1

0x214c,	// (0x0000228f) clock_nsta_pane_cp2_ParamLimits

0x214c,	// (0x0000228f) clock_nsta_pane_cp2

0xc43f,	// (0x0000c582) listscroll_midp_pane_ParamLimits

0xc44b,	// (0x0000c58e) midp_canvas_pane

0x2a01,	// (0x00002b44) nsta_clock_indic_pane

0x2a5f,	// (0x00002ba2) listscroll_form_pane_vc

0x2a83,	// (0x00002bc6) listscroll_set_pane_vc_ParamLimits

0x2a83,	// (0x00002bc6) listscroll_set_pane_vc

0xcef5,	// (0x0000d038) clock_nsta_pane

0xcf1f,	// (0x0000d062) indicator_nsta_pane

0x34c6,	// (0x00003609) bg_popup_sub_pane_cp2_ParamLimits

0x34da,	// (0x0000361d) find_pane_cp2_ParamLimits

0x34da,	// (0x0000361d) find_pane_cp2

0x34f0,	// (0x00003633) grid_toobar_pane_ParamLimits

0x373b,	// (0x0000387e) list_form_gen_pane_vc_ParamLimits

0x373b,	// (0x0000387e) list_form_gen_pane_vc

0x3751,	// (0x00003894) scroll_pane_cp8_vc_ParamLimits

0x3751,	// (0x00003894) scroll_pane_cp8_vc

0x386a,	// (0x000039ad) data_form_wide_pane_vc_ParamLimits

0x386a,	// (0x000039ad) data_form_wide_pane_vc

0x3876,	// (0x000039b9) form_field_data_wide_pane_vc_g1

0x387e,	// (0x000039c1) form_field_data_wide_pane_vc_t1_ParamLimits

0x387e,	// (0x000039c1) form_field_data_wide_pane_vc_t1

0x1253,	// (0x00001396) input_focus_pane_cp6_vc_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_cp6_vc

0x3c01,	// (0x00003d44) list_midp_pane_ParamLimits

0x5269,	// (0x000053ac) scroll_pane_cp16_ParamLimits

0x5269,	// (0x000053ac) scroll_pane_cp16

0x3c57,	// (0x00003d9a) button_value_adjust_pane_ParamLimits

0x3c57,	// (0x00003d9a) button_value_adjust_pane

0xd4b4,	// (0x0000d5f7) button_value_adjust_pane_cp6_ParamLimits

0xd4b4,	// (0x0000d5f7) button_value_adjust_pane_cp6

0xd5ce,	// (0x0000d711) settings_code_pane_cp_ParamLimits

0xd5ce,	// (0x0000d711) settings_code_pane_cp

0xf4ff,	// (0x0000f642) cell_touch_pane_g1

0xf4ff,	// (0x0000f642) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x0000f81c) cell_touch_pane_g

0xd781,	// (0x0000d8c4) cell_touch_pane_cp_ParamLimits

0xd781,	// (0x0000d8c4) cell_touch_pane_cp

0xd79d,	// (0x0000d8e0) cell_touch_pane_ParamLimits

0xd79d,	// (0x0000d8e0) cell_touch_pane

0xf4ff,	// (0x0000f642) scroll_sc2_down_pane_g1

0xf4ff,	// (0x0000f642) scroll_sc2_up_pane_g1

0x0150,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5714,	// (0x00005857) list_set_graphic_pane_vc_g1_ParamLimits

0x5714,	// (0x00005857) list_set_graphic_pane_vc_g1

0x5720,	// (0x00005863) list_set_graphic_pane_vc_g2_ParamLimits

0x5720,	// (0x00005863) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x0000fb0c) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x0000fb0c) list_set_graphic_pane_vc_g

0x572c,	// (0x0000586f) text_primary_small_cp13_vc_ParamLimits

0x572c,	// (0x0000586f) text_primary_small_cp13_vc

0x5744,	// (0x00005887) list_set_graphic_pane_vc_ParamLimits

0x5744,	// (0x00005887) list_set_graphic_pane_vc

0x0150,	// (0x00000293) input_focus_pane_cp2_vc

0xf4ff,	// (0x0000f642) setting_code_pane_vc_g1

0x04a0,	// (0x000005e3) setting_code_pane_vc_t1

0x5757,	// (0x0000589a) set_text_pane_vc_t1_ParamLimits

0x5757,	// (0x0000589a) set_text_pane_vc_t1

0x0150,	// (0x00000293) input_focus_pane_cp1_vc

0x5773,	// (0x000058b6) list_set_text_pane_vc

0xf4ff,	// (0x0000f642) setting_text_pane_vc_g1

0x0150,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x046f,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x577d,	// (0x000058c0) setting_slider_graphic_pane_vc_t1

0x578d,	// (0x000058d0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0000fb11) setting_slider_graphic_pane_vc_t

0x579d,	// (0x000058e0) slider_set_pane_cp_vc

0x57a5,	// (0x000058e8) slider_set_pane_vc_g1

0x57ae,	// (0x000058f1) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0000fb16) slider_set_pane_vc_g

0x1382,	// (0x000014c5) set_opt_bg_pane_g1_copy1

0x138a,	// (0x000014cd) set_opt_bg_pane_g2_copy1

0x57da,	// (0x0000591d) set_opt_bg_pane_g3_copy1

0x139a,	// (0x000014dd) set_opt_bg_pane_g4_copy1

0x13a2,	// (0x000014e5) set_opt_bg_pane_g5_copy1

0x13aa,	// (0x000014ed) set_opt_bg_pane_g6_copy1

0x57e4,	// (0x00005927) set_opt_bg_pane_g7_copy1

0x57ee,	// (0x00005931) set_opt_bg_pane_g8_copy1

0x57f8,	// (0x0000593b) set_opt_bg_pane_g9_copy1

0x0150,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5802,	// (0x00005945) setting_slider_pane_vc_t1

0x5811,	// (0x00005954) setting_slider_pane_vc_t2

0x5821,	// (0x00005964) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0000fb25) setting_slider_pane_vc_t

0x5831,	// (0x00005974) slider_set_pane_vc

0x4498,	// (0x000045db) volume_set_pane_vc_g1

0x44a1,	// (0x000045e4) volume_set_pane_vc_g2

0x44aa,	// (0x000045ed) volume_set_pane_vc_g3

0x44b3,	// (0x000045f6) volume_set_pane_vc_g4

0x44bc,	// (0x000045ff) volume_set_pane_vc_g5

0x44c5,	// (0x00004608) volume_set_pane_vc_g6

0x44ce,	// (0x00004611) volume_set_pane_vc_g7

0x44d7,	// (0x0000461a) volume_set_pane_vc_g8

0x44e0,	// (0x00004623) volume_set_pane_vc_g9

0x44e9,	// (0x0000462c) volume_set_pane_vc_g10

0x0009,

0xf880,	// (0x0000f9c3) volume_set_pane_vc_g

0x5839,	// (0x0000597c) volume_set_pane_vc

0x5841,	// (0x00005984) button_value_adjust_pane_cp1_vc

0x584b,	// (0x0000598e) list_highlight_pane_cp2_vc

0x5854,	// (0x00005997) list_set_pane_vc_ParamLimits

0x5854,	// (0x00005997) list_set_pane_vc

0x58b2,	// (0x000059f5) main_pane_set_vc_t1_ParamLimits

0x58b2,	// (0x000059f5) main_pane_set_vc_t1

0x58c7,	// (0x00005a0a) main_pane_set_vc_t2_ParamLimits

0x58c7,	// (0x00005a0a) main_pane_set_vc_t2

0x58d9,	// (0x00005a1c) main_pane_set_vc_t3_ParamLimits

0x58d9,	// (0x00005a1c) main_pane_set_vc_t3

0x58ed,	// (0x00005a30) main_pane_set_vc_t4_ParamLimits

0x58ed,	// (0x00005a30) main_pane_set_vc_t4

0x0003,

0xf9e9,	// (0x0000fb2c) main_pane_set_vc_t_ParamLimits

0xf9e9,	// (0x0000fb2c) main_pane_set_vc_t

0x5901,	// (0x00005a44) setting_code_pane_vc_ParamLimits

0x5901,	// (0x00005a44) setting_code_pane_vc

0x5912,	// (0x00005a55) setting_slider_graphic_pane_vc

0x5912,	// (0x00005a55) setting_slider_pane_vc

0x5912,	// (0x00005a55) setting_text_pane_vc

0x5912,	// (0x00005a55) setting_volume_pane_vc

0x591c,	// (0x00005a5f) scroll_pane_cp121_vc

0x115b,	// (0x0000129e) set_content_pane_vc

0x5bec,	// (0x00005d2f) button_value_adjust_pane_g1

0x5bf5,	// (0x00005d38) button_value_adjust_pane_g2

0x0001,

0xfa43,	// (0x0000fb86) button_value_adjust_pane_g

0x5bfe,	// (0x00005d41) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5bfe,	// (0x00005d41) form_field_slider_wide_pane_vc_t1

0x5c12,	// (0x00005d55) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c12,	// (0x00005d55) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa48,	// (0x0000fb8b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa48,	// (0x0000fb8b) form_field_slider_wide_pane_vc_t

0x06ea,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x06ea,	// (0x0000082d) input_focus_pane_cp10_vc

0x5c40,	// (0x00005d83) slider_cont_pane_cp1_vc_ParamLimits

0x5c40,	// (0x00005d83) slider_cont_pane_cp1_vc

0x5c52,	// (0x00005d95) slider_form_pane_g1_cp2

0x57ae,	// (0x000058f1) slider_form_pane_g2_cp2

0x5c7f,	// (0x00005dc2) form_field_slider_pane_vc_t3

0x5c8d,	// (0x00005dd0) form_field_slider_pane_vc_t4

0x5c9b,	// (0x00005dde) slider_form_pane_vc_ParamLimits

0x5c9b,	// (0x00005dde) slider_form_pane_vc

0x5ca8,	// (0x00005deb) form_field_slider_pane_vc_t1_ParamLimits

0x5ca8,	// (0x00005deb) form_field_slider_pane_vc_t1

0x5c12,	// (0x00005d55) form_field_slider_pane_vc_t2_ParamLimits

0x5c12,	// (0x00005d55) form_field_slider_pane_vc_t2

0x0001,

0xfa5a,	// (0x0000fb9d) form_field_slider_pane_vc_t_ParamLimits

0xfa5a,	// (0x0000fb9d) form_field_slider_pane_vc_t

0x06ea,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x06ea,	// (0x0000082d) input_focus_pane_cp9_vc

0x5cc4,	// (0x00005e07) slider_cont_pane_vc_ParamLimits

0x5cc4,	// (0x00005e07) slider_cont_pane_vc

0x5cd8,	// (0x00005e1b) list_form_graphic_pane_cp_vc_ParamLimits

0x5cd8,	// (0x00005e1b) list_form_graphic_pane_cp_vc

0x3876,	// (0x000039b9) form_field_popup_wide_pane_vc_g1

0x5ced,	// (0x00005e30) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5ced,	// (0x00005e30) form_field_popup_wide_pane_vc_t1

0x1253,	// (0x00001396) input_focus_pane_cp8_vc_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_cp8_vc

0x5d32,	// (0x00005e75) list_form_wide_pane_vc_ParamLimits

0x5d32,	// (0x00005e75) list_form_wide_pane_vc

0x5d3e,	// (0x00005e81) list_form_graphic_pane_vc_g1

0x5d46,	// (0x00005e89) list_form_graphic_pane_vc_t1_ParamLimits

0x5d46,	// (0x00005e89) list_form_graphic_pane_vc_t1

0x03c4,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x03c4,	// (0x00000507) list_highlight_pane_cp5_vc

0x5d62,	// (0x00005ea5) list_form_graphic_pane_vc_ParamLimits

0x5d62,	// (0x00005ea5) list_form_graphic_pane_vc

0x3876,	// (0x000039b9) form_field_popup_pane_vc_g1

0x5d78,	// (0x00005ebb) form_field_popup_pane_vc_t1_ParamLimits

0x5d78,	// (0x00005ebb) form_field_popup_pane_vc_t1

0x1253,	// (0x00001396) input_focus_pane_cp7_vc_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_cp7_vc

0x5d8f,	// (0x00005ed2) list_form_pane_vc_ParamLimits

0x5d8f,	// (0x00005ed2) list_form_pane_vc

0x5d9b,	// (0x00005ede) data_form_pane_vc_t1_ParamLimits

0x5d9b,	// (0x00005ede) data_form_pane_vc_t1

0x1382,	// (0x000014c5) input_focus_pane_vc_g1

0x138a,	// (0x000014cd) input_focus_pane_vc_g2

0x1392,	// (0x000014d5) input_focus_pane_vc_g3

0x139a,	// (0x000014dd) input_focus_pane_vc_g4

0x13a2,	// (0x000014e5) input_focus_pane_vc_g5

0x13aa,	// (0x000014ed) input_focus_pane_vc_g6

0x13b2,	// (0x000014f5) input_focus_pane_vc_g7

0x13ba,	// (0x000014fd) input_focus_pane_vc_g8

0x13c2,	// (0x00001505) input_focus_pane_vc_g9

0xf4ff,	// (0x0000f642) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x0000f7a5) input_focus_pane_vc_g

0x386a,	// (0x000039ad) data_form_pane_vc_ParamLimits

0x386a,	// (0x000039ad) data_form_pane_vc

0x3876,	// (0x000039b9) form_field_data_pane_vc_g1

0x5db6,	// (0x00005ef9) form_field_data_pane_vc_t1_ParamLimits

0x5db6,	// (0x00005ef9) form_field_data_pane_vc_t1

0x1253,	// (0x00001396) input_focus_pane_vc_ParamLimits

0x1253,	// (0x00001396) input_focus_pane_vc

0x5dd0,	// (0x00005f13) button_value_adjust_pane_cp3_vc

0x5dd8,	// (0x00005f1b) button_value_adjust_pane_cp5_vc

0x5de0,	// (0x00005f23) form_field_data_pane_vc_ParamLimits

0x5de0,	// (0x00005f23) form_field_data_pane_vc

0x5df7,	// (0x00005f3a) form_field_data_pane_vc_cp2

0x5dff,	// (0x00005f42) form_field_data_wide_pane_vc_ParamLimits

0x5dff,	// (0x00005f42) form_field_data_wide_pane_vc

0x5e15,	// (0x00005f58) form_field_data_wide_pane_vc_cp2

0x5e1d,	// (0x00005f60) form_field_popup_pane_vc_ParamLimits

0x5e1d,	// (0x00005f60) form_field_popup_pane_vc

0x5e34,	// (0x00005f77) form_field_popup_wide_pane_vc_ParamLimits

0x5e34,	// (0x00005f77) form_field_popup_wide_pane_vc

0x5e4a,	// (0x00005f8d) form_field_slider_pane_vc_ParamLimits

0x5e4a,	// (0x00005f8d) form_field_slider_pane_vc

0x5e5d,	// (0x00005fa0) form_field_slider_wide_pane_vc_ParamLimits

0x5e5d,	// (0x00005fa0) form_field_slider_wide_pane_vc

0xd7bb,	// (0x0000d8fe) grid_touch_1_pane_ParamLimits

0xd7bb,	// (0x0000d8fe) grid_touch_1_pane

0xd7cf,	// (0x0000d912) grid_touch_2_pane_ParamLimits

0xd7cf,	// (0x0000d912) grid_touch_2_pane

0x5f41,	// (0x00006084) touch_pane_g1_ParamLimits

0x5f41,	// (0x00006084) touch_pane_g1

0x5e94,	// (0x00005fd7) cell_app_pane_cp_wide_ParamLimits

0x5e94,	// (0x00005fd7) cell_app_pane_cp_wide

0x5ea5,	// (0x00005fe8) grid_popup_fast_wide_pane_ParamLimits

0x5ea5,	// (0x00005fe8) grid_popup_fast_wide_pane

0x5eb9,	// (0x00005ffc) scroll_pane_cp19_ParamLimits

0x5eb9,	// (0x00005ffc) scroll_pane_cp19

0x0150,	// (0x00000293) bg_popup_window_pane_cp20

0x5ecd,	// (0x00006010) listscroll_popup_fast_wide_pane

0xd7f9,	// (0x0000d93c) grid_indicator_nsta_pane

0x5ee7,	// (0x0000602a) clock_nsta_pane_g1

0x5ef0,	// (0x00006033) clock_nsta_pane_t1

0xd805,	// (0x0000d948) cell_indicator_nsta_pane_ParamLimits

0xd805,	// (0x0000d948) cell_indicator_nsta_pane

0x5f41,	// (0x00006084) cell_indicator_nsta_pane_g1

0xd820,	// (0x0000d963) cell_indicator_nsta_pane_g2

0x0001,

0xfa6b,	// (0x0000fbae) cell_indicator_nsta_pane_g

0x5f61,	// (0x000060a4) clock_nsta_pane_cp

0x5f6a,	// (0x000060ad) indicator_nsta_pane_cp

0x5f74,	// (0x000060b7) nsta_clock_indic_pane_g1

0x0538,	// (0x0000067b) grid_indicator_pane

0x1b41,	// (0x00001c84) scroll_pane_cp29

0x2079,	// (0x000021bc) indicator_nsta_pane_cp2_ParamLimits

0x2079,	// (0x000021bc) indicator_nsta_pane_cp2

0x03c4,	// (0x00000507) main_apps_wheel_pane

0x3ac2,	// (0x00003c05) form_midp_field_text_pane_ParamLimits

0x3c0d,	// (0x00003d50) scroll_bar_cp050_ParamLimits

0x5fcd,	// (0x00006110) cell_indicator_pane_ParamLimits

0x5fcd,	// (0x00006110) cell_indicator_pane

0x5fe4,	// (0x00006127) cell_indicator_pane_g1

0xd82d,	// (0x0000d970) grid_wheel_folder_pane_ParamLimits

0xd82d,	// (0x0000d970) grid_wheel_folder_pane

0xd83b,	// (0x0000d97e) list_wheel_apps_pane_ParamLimits

0xd83b,	// (0x0000d97e) list_wheel_apps_pane

0xd849,	// (0x0000d98c) main_apps_wheel_pane_g1_ParamLimits

0xd849,	// (0x0000d98c) main_apps_wheel_pane_g1

0xd855,	// (0x0000d998) main_apps_wheel_pane_g2_ParamLimits

0xd855,	// (0x0000d998) main_apps_wheel_pane_g2

0x0001,

0xfa87,	// (0x0000fbca) main_apps_wheel_pane_g_ParamLimits

0xfa87,	// (0x0000fbca) main_apps_wheel_pane_g

0xd863,	// (0x0000d9a6) main_apps_wheel_pane_t1_ParamLimits

0xd863,	// (0x0000d9a6) main_apps_wheel_pane_t1

0xd877,	// (0x0000d9ba) list_wheel_apps_pane_g1

0xd87f,	// (0x0000d9c2) list_wheel_apps_pane_g2

0xd887,	// (0x0000d9ca) list_wheel_apps_pane_g3

0xd88f,	// (0x0000d9d2) list_wheel_apps_pane_g4

0xd899,	// (0x0000d9dc) list_wheel_apps_pane_g5

0x0004,

0xfa8c,	// (0x0000fbcf) list_wheel_apps_pane_g

0x2387,	// (0x000024ca) navi_icon_text_pane

0xcde9,	// (0x0000cf2c) aid_fill_nsta

0x60a9,	// (0x000061ec) navi_icon_text_pane_g1

0x60b5,	// (0x000061f8) navi_icon_text_pane_t1

0x221a,	// (0x0000235d) list_set_graphic_pane_t1_ParamLimits

0x221a,	// (0x0000235d) list_set_graphic_pane_t1

0x4378,	// (0x000044bb) popup_midp_note_alarm_window_t6_ParamLimits

0x4378,	// (0x000044bb) popup_midp_note_alarm_window_t6

0x438a,	// (0x000044cd) popup_midp_note_alarm_window_t7_ParamLimits

0x438a,	// (0x000044cd) popup_midp_note_alarm_window_t7

0x439c,	// (0x000044df) popup_midp_note_alarm_window_t8_ParamLimits

0x439c,	// (0x000044df) popup_midp_note_alarm_window_t8

0x43ae,	// (0x000044f1) popup_midp_note_alarm_window_t9_ParamLimits

0x43ae,	// (0x000044f1) popup_midp_note_alarm_window_t9

0x43c0,	// (0x00004503) popup_midp_note_alarm_window_t10_ParamLimits

0x43c0,	// (0x00004503) popup_midp_note_alarm_window_t10

0x43d2,	// (0x00004515) popup_midp_note_alarm_window_t11_ParamLimits

0x43d2,	// (0x00004515) popup_midp_note_alarm_window_t11

0x43e4,	// (0x00004527) scroll_pane_cp17_ParamLimits

0x43e4,	// (0x00004527) scroll_pane_cp17

0x4498,	// (0x000045db) volume_small_pane_cp_g1

0x60c7,	// (0x0000620a) volume_small_pane_cp_g2

0x60d0,	// (0x00006213) volume_small_pane_cp_g3

0x60d9,	// (0x0000621c) volume_small_pane_cp_g4

0x60e2,	// (0x00006225) volume_small_pane_cp_g5

0x60eb,	// (0x0000622e) volume_small_pane_cp_g6

0x60f4,	// (0x00006237) volume_small_pane_cp_g7

0x60fd,	// (0x00006240) volume_small_pane_cp_g8

0x6106,	// (0x00006249) volume_small_pane_cp_g9

0x610f,	// (0x00006252) volume_small_pane_cp_g10

0x25e1,	// (0x00002724) midp_ticker_pane_g1_ParamLimits

0x25ed,	// (0x00002730) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0000f871) midp_ticker_pane_g_ParamLimits

0x25f9,	// (0x0000273c) midp_ticker_pane_t1_ParamLimits

0xce0d,	// (0x0000cf50) aid_fill_nsta_2

0x3bf9,	// (0x00003d3c) list_form2_midp_pane

0x4fae,	// (0x000050f1) midp_editing_number_pane_ParamLimits

0x4fbd,	// (0x00005100) midp_ticker_pane_ParamLimits

0x6118,	// (0x0000625b) form2_midp_field_pane

0x613c,	// (0x0000627f) scroll_pane_cp51

0x615c,	// (0x0000629f) form2_midp_button_pane_ParamLimits

0x615c,	// (0x0000629f) form2_midp_button_pane

0x616e,	// (0x000062b1) form2_midp_content_pane_ParamLimits

0x616e,	// (0x000062b1) form2_midp_content_pane

0x6188,	// (0x000062cb) form2_midp_field_choice_group_pane

0x6190,	// (0x000062d3) form2_midp_field_pane_g1

0x6198,	// (0x000062db) form2_midp_field_pane_g2

0x61a0,	// (0x000062e3) form2_midp_field_pane_g3

0x61a8,	// (0x000062eb) form2_midp_field_pane_g4

0x0003,

0xfab1,	// (0x0000fbf4) form2_midp_field_pane_g

0x61b0,	// (0x000062f3) form2_midp_gauge_slider_pane

0x61b8,	// (0x000062fb) form2_midp_gauge_wait_pane

0x61c0,	// (0x00006303) form2_midp_image_pane_ParamLimits

0x61c0,	// (0x00006303) form2_midp_image_pane

0x61db,	// (0x0000631e) form2_midp_label_pane_ParamLimits

0x61db,	// (0x0000631e) form2_midp_label_pane

0xd8cc,	// (0x0000da0f) form2_midp_label_pane_cp_ParamLimits

0xd8cc,	// (0x0000da0f) form2_midp_label_pane_cp

0x6215,	// (0x00006358) form2_midp_string_pane_ParamLimits

0x6215,	// (0x00006358) form2_midp_string_pane

0xd8eb,	// (0x0000da2e) form2_midp_text_pane_ParamLimits

0xd8eb,	// (0x0000da2e) form2_midp_text_pane

0x6244,	// (0x00006387) form2_midp_time_pane

0x6254,	// (0x00006397) input_focus_pane_cp51_ParamLimits

0x6254,	// (0x00006397) input_focus_pane_cp51

0x626c,	// (0x000063af) form2_midp_label_pane_t1_ParamLimits

0x626c,	// (0x000063af) form2_midp_label_pane_t1

0xd904,	// (0x0000da47) form2_mdip_text_pane_t1_ParamLimits

0xd904,	// (0x0000da47) form2_mdip_text_pane_t1

0x62cc,	// (0x0000640f) form2_midp_time_pane_t1

0x62e7,	// (0x0000642a) form2_midp_gauge_slider_pane_t1

0xd91f,	// (0x0000da62) form2_midp_gauge_slider_pane_t2

0xd931,	// (0x0000da74) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaba,	// (0x0000fbfd) form2_midp_gauge_slider_pane_t

0x631d,	// (0x00006460) form2_midp_slider_pane

0x6329,	// (0x0000646c) form2_midp_gauge_wait_pane_t1

0x6337,	// (0x0000647a) form2_midp_wait_pane_ParamLimits

0x6337,	// (0x0000647a) form2_midp_wait_pane

0xd943,	// (0x0000da86) list_single_2graphic_pane_cp4_ParamLimits

0xd943,	// (0x0000da86) list_single_2graphic_pane_cp4

0xd29b,	// (0x0000d3de) list_single_midp_graphic_pane_cp_ParamLimits

0xd29b,	// (0x0000d3de) list_single_midp_graphic_pane_cp

0x0150,	// (0x00000293) list_highlight_pane_cp20

0x6386,	// (0x000064c9) list_single_2graphic_pane_g1_cp4

0x638e,	// (0x000064d1) list_single_2graphic_pane_g2_cp4

0x6396,	// (0x000064d9) list_single_2graphic_pane_t1_cp4

0x03c4,	// (0x00000507) list_highlight_pane_cp21

0x63a5,	// (0x000064e8) list_single_midp_graphic_pane_g4_cp

0x63b4,	// (0x000064f7) list_single_midp_graphic_pane_t1_cp

0xd957,	// (0x0000da9a) form2_mdip_string_pane_t1_ParamLimits

0xd957,	// (0x0000da9a) form2_mdip_string_pane_t1

0x0150,	// (0x00000293) bg_wml_button_pane_cp2

0xf4ff,	// (0x0000f642) form2_midp_image_pane_g1

0x0f1d,	// (0x00001060) list_double_large_graphic_pane_g5_ParamLimits

0x0f1d,	// (0x00001060) list_double_large_graphic_pane_g5

0xc43f,	// (0x0000c582) midp_form_pane_ParamLimits

0x03c4,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xcb39,	// (0x0000cc7c) popup_preview_window_ParamLimits

0xcb39,	// (0x0000cc7c) popup_preview_window

0x2ff5,	// (0x00003138) popup_touch_info_window_ParamLimits

0x2ff5,	// (0x00003138) popup_touch_info_window

0x3013,	// (0x00003156) popup_touch_menu_window_ParamLimits

0x3013,	// (0x00003156) popup_touch_menu_window

0xf4f5,	// (0x0000f638) bg_popup_sub_pane_cp6

0x64c2,	// (0x00006605) list_touch_menu_pane

0x64ca,	// (0x0000660d) list_single_touch_menu_pane_ParamLimits

0x64ca,	// (0x0000660d) list_single_touch_menu_pane

0x64e0,	// (0x00006623) list_single_touch_menu_pane_t1

0x03c4,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x03c4,	// (0x00000507) bg_popup_sub_pane_cp7

0x64ee,	// (0x00006631) heading_sub_pane

0x64f6,	// (0x00006639) list_touch_info_pane_ParamLimits

0x64f6,	// (0x00006639) list_touch_info_pane

0x6505,	// (0x00006648) list_single_touch_info_pane_ParamLimits

0x6505,	// (0x00006648) list_single_touch_info_pane

0x6517,	// (0x0000665a) list_single_touch_info_pane_t1

0x6525,	// (0x00006668) list_single_touch_info_pane_t2

0x0001,

0xfac8,	// (0x0000fc0b) list_single_touch_info_pane_t

0x2504,	// (0x00002647) bg_popup_heading_pane_cp

0x6533,	// (0x00006676) heading_sub_pane_t1

0x377c,	// (0x000038bf) bg_popup_preview_window_pane_cp_ParamLimits

0x377c,	// (0x000038bf) bg_popup_preview_window_pane_cp

0x64ee,	// (0x00006631) heading_preview_pane

0x64f6,	// (0x00006639) list_preview_pane_ParamLimits

0x64f6,	// (0x00006639) list_preview_pane

0x6541,	// (0x00006684) popup_preview_window_g1

0x6505,	// (0x00006648) list_single_preview_pane_ParamLimits

0x6505,	// (0x00006648) list_single_preview_pane

0x6549,	// (0x0000668c) list_single_preview_pane_g1

0x6551,	// (0x00006694) list_single_preview_pane_t1

0x6517,	// (0x0000665a) list_single_preview_pane_t2

0x0001,

0xfacd,	// (0x0000fc10) list_single_preview_pane_t

0x655f,	// (0x000066a2) bg_popup_heading_pane_cp2_ParamLimits

0x655f,	// (0x000066a2) bg_popup_heading_pane_cp2

0x6575,	// (0x000066b8) heading_preview_pane_g1

0x657d,	// (0x000066c0) heading_preview_pane_t1_ParamLimits

0x657d,	// (0x000066c0) heading_preview_pane_t1

0x055b,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0c6f,	// (0x00000db2) scroll_pane_ParamLimits

0x1a3a,	// (0x00001b7d) scroll_sc2_left_pane

0x1a43,	// (0x00001b86) scroll_sc2_right_pane

0x1a62,	// (0x00001ba5) scroll_bg_pane_g1_ParamLimits

0x1a77,	// (0x00001bba) scroll_bg_pane_g2_ParamLimits

0x1a8f,	// (0x00001bd2) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x0000f7fc) scroll_bg_pane_g_ParamLimits

0x1a62,	// (0x00001ba5) scroll_handle_pane_g1_ParamLimits

0x1ab1,	// (0x00001bf4) scroll_handle_pane_g2_ParamLimits

0x1a8f,	// (0x00001bd2) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0000f803) scroll_handle_pane_g_ParamLimits

0x2ab9,	// (0x00002bfc) popup_choice_list_window_ParamLimits

0x2ab9,	// (0x00002bfc) popup_choice_list_window

0x34d2,	// (0x00003615) choice_list_pane

0x359a,	// (0x000036dd) cell_toolbar_pane_t1

0x35c2,	// (0x00003705) toolbar_button_pane_ParamLimits

0x4a02,	// (0x00004b45) ai_gene_pane_1_t2_ParamLimits

0x4a02,	// (0x00004b45) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x0000fa1f) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x0000fa1f) ai_gene_pane_1_t

0x659a,	// (0x000066dd) scroll_sc2_left_pane_g1

0x659a,	// (0x000066dd) scroll_sc2_right_pane_g1

0x2a53,	// (0x00002b96) bg_popup_sub_pane_cp10

0x65a4,	// (0x000066e7) list_choice_list_pane

0x65bd,	// (0x00006700) list_single_choice_list_pane_ParamLimits

0x65bd,	// (0x00006700) list_single_choice_list_pane

0x65d0,	// (0x00006713) list_single_choice_list_pane_g1

0x157a,	// (0x000016bd) list_single_choice_list_pane_t1_ParamLimits

0x157a,	// (0x000016bd) list_single_choice_list_pane_t1

0x65d8,	// (0x0000671b) choice_list_pane_g1

0x65e0,	// (0x00006723) choice_list_pane_t1

0xf4f5,	// (0x0000f638) input_focus_pane_cp11

0x17a0,	// (0x000018e3) title_pane_stacon_g2_ParamLimits

0x17a0,	// (0x000018e3) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0000f7e2) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0000f7e2) title_pane_stacon_g

0x2504,	// (0x00002647) cursor_press_pane

0xc7e0,	// (0x0000c923) popup_fep_hwr_window_ParamLimits

0xc7e0,	// (0x0000c923) popup_fep_hwr_window

0x2bdf,	// (0x00002d22) popup_fep_vkb_window_ParamLimits

0x2bdf,	// (0x00002d22) popup_fep_vkb_window

0x65ee,	// (0x00006731) cursor_press_pane_g1

0x0002,

0xfaf6,	// (0x0000fc39) fep_vkb_side_pane_g_ParamLimits

0x662f,	// (0x00006772) fep_hwr_candidate_pane_ParamLimits

0x662f,	// (0x00006772) fep_hwr_candidate_pane

0x6659,	// (0x0000679c) fep_hwr_side_pane_ParamLimits

0x6659,	// (0x0000679c) fep_hwr_side_pane

0x6679,	// (0x000067bc) fep_hwr_top_pane_ParamLimits

0x6679,	// (0x000067bc) fep_hwr_top_pane

0x6691,	// (0x000067d4) fep_hwr_write_pane_ParamLimits

0x6691,	// (0x000067d4) fep_hwr_write_pane

0xfaf6,	// (0x0000fc39) fep_vkb_side_pane_g

0x66cb,	// (0x0000680e) fep_hwr_top_pane_g1

0x66dd,	// (0x00006820) fep_hwr_top_pane_g2

0x66ef,	// (0x00006832) fep_hwr_top_pane_g3

0x0002,

0xfad2,	// (0x0000fc15) fep_hwr_top_pane_g

0x6704,	// (0x00006847) fep_hwr_top_text_pane

0x1c31,	// (0x00001d74) fep_hwr_top_text_pane_g1

0x67dc,	// (0x0000691f) fep_hwr_top_text_pane_t1

0x682c,	// (0x0000696f) fep_hwr_candidate_pane_g1

0x6aa5,	// (0x00006be8) fep_vkb_keypad_pane_g3_ParamLimits

0x6aa5,	// (0x00006be8) fep_vkb_keypad_pane_g3

0x6acd,	// (0x00006c10) fep_vkb_keypad_pane_g4_ParamLimits

0x6acd,	// (0x00006c10) fep_vkb_keypad_pane_g4

0x6b3c,	// (0x00006c7f) fep_vkb_bottom_pane_g2_ParamLimits

0x6b3c,	// (0x00006c7f) fep_vkb_bottom_pane_g2

0x0001,

0xfafd,	// (0x0000fc40) fep_vkb_bottom_pane_g_ParamLimits

0xfafd,	// (0x0000fc40) fep_vkb_bottom_pane_g

0x659a,	// (0x000066dd) cell_vkb_side_pane_g2

0x0001,

0xfb07,	// (0x0000fc4a) cell_vkb_side_pane_g

0x6bc7,	// (0x00006d0a) cell_vkb_side_pane_t1

0x6bd5,	// (0x00006d18) cell_vkb_side_pane_t1_copy1

0x659a,	// (0x000066dd) bg_fep_vkb_candidate_pane_g2

0x6d01,	// (0x00006e44) cell_vkb_candidate_pane_ParamLimits

0x6860,	// (0x000069a3) aid_size_cell_vkb_ParamLimits

0x6860,	// (0x000069a3) aid_size_cell_vkb

0x6d01,	// (0x00006e44) cell_vkb_candidate_pane

0x6d35,	// (0x00006e78) bg_popup_fep_shadow_pane_g1

0xda26,	// (0x0000db69) fep_vkb_bottom_pane_ParamLimits

0xda26,	// (0x0000db69) fep_vkb_bottom_pane

0x6924,	// (0x00006a67) fep_vkb_candidate_pane_ParamLimits

0x6924,	// (0x00006a67) fep_vkb_candidate_pane

0xda4b,	// (0x0000db8e) fep_vkb_keypad_pane_ParamLimits

0xda4b,	// (0x0000db8e) fep_vkb_keypad_pane

0xda87,	// (0x0000dbca) fep_vkb_side_pane_ParamLimits

0xda87,	// (0x0000dbca) fep_vkb_side_pane

0xdac3,	// (0x0000dc06) fep_vkb_top_pane_ParamLimits

0xdac3,	// (0x0000dc06) fep_vkb_top_pane

0x69fe,	// (0x00006b41) fep_vkb_top_pane_g1_ParamLimits

0x69fe,	// (0x00006b41) fep_vkb_top_pane_g1

0x6a0d,	// (0x00006b50) fep_vkb_top_pane_g2_ParamLimits

0x6a0d,	// (0x00006b50) fep_vkb_top_pane_g2

0x6a1c,	// (0x00006b5f) fep_vkb_top_pane_g3_ParamLimits

0x6a1c,	// (0x00006b5f) fep_vkb_top_pane_g3

0x0003,

0xfaed,	// (0x0000fc30) fep_vkb_top_pane_g_ParamLimits

0xfaed,	// (0x0000fc30) fep_vkb_top_pane_g

0x6a3a,	// (0x00006b7d) fep_vkb_top_text_pane_ParamLimits

0x6a3a,	// (0x00006b7d) fep_vkb_top_text_pane

0xdaff,	// (0x0000dc42) fep_vkb_side_pane_g1_ParamLimits

0xdaff,	// (0x0000dc42) fep_vkb_side_pane_g1

0x6a94,	// (0x00006bd7) grid_vkb_side_pane_ParamLimits

0x6a94,	// (0x00006bd7) grid_vkb_side_pane

0x6d3d,	// (0x00006e80) bg_popup_fep_shadow_pane_g2

0x6d46,	// (0x00006e89) bg_popup_fep_shadow_pane_g3

0x6d4e,	// (0x00006e91) bg_popup_fep_shadow_pane_g4

0x6d57,	// (0x00006e9a) bg_popup_fep_shadow_pane_g5

0x6d61,	// (0x00006ea4) bg_popup_fep_shadow_pane_g6

0x6d69,	// (0x00006eac) bg_popup_fep_shadow_pane_g7

0x13a2,	// (0x000014e5) bg_popup_fep_shadow_pane_g8

0x6aeb,	// (0x00006c2e) grid_vkb_keypad_number_pane_ParamLimits

0x6aeb,	// (0x00006c2e) grid_vkb_keypad_number_pane

0x6afb,	// (0x00006c3e) grid_vkb_keypad_pane_ParamLimits

0x6afb,	// (0x00006c3e) grid_vkb_keypad_pane

0x6b21,	// (0x00006c64) fep_vkb_bottom_pane_g1_ParamLimits

0x6b21,	// (0x00006c64) fep_vkb_bottom_pane_g1

0x6b4a,	// (0x00006c8d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b4a,	// (0x00006c8d) grid_vkb_keypad_bottom_left_pane

0x6b5f,	// (0x00006ca2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b5f,	// (0x00006ca2) grid_vkb_keypad_bottom_right_pane

0x6b74,	// (0x00006cb7) fep_vkb_top_text_pane_g1

0xdb46,	// (0x0000dc89) fep_vkb_top_text_pane_t1

0xdb58,	// (0x0000dc9b) cell_vkb_side_pane_ParamLimits

0xdb58,	// (0x0000dc9b) cell_vkb_side_pane

0x659a,	// (0x000066dd) cell_vkb_side_pane_g1

0x6be3,	// (0x00006d26) cell_vkb_keypad_pane_ParamLimits

0x6be3,	// (0x00006d26) cell_vkb_keypad_pane

0x6c58,	// (0x00006d9b) cell_vkb_keypad_pane_g1

0x0008,

0xfb1a,	// (0x0000fc5d) bg_popup_fep_shadow_pane_g

0x659a,	// (0x000066dd) cell_hwr_side_pane_g1

0x659a,	// (0x000066dd) cell_hwr_side_pane_g2

0x6c62,	// (0x00006da5) cell_vkb_keypad_pane_t1

0xdb6e,	// (0x0000dcb1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb6e,	// (0x0000dcb1) cell_vkb_keypad_bottom_left_pane

0xdb83,	// (0x0000dcc6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb83,	// (0x0000dcc6) cell_vkb_keypad_bottom_right_pane

0x659a,	// (0x000066dd) cell_vkb_keypad_bottom_left_pane_g1

0x659a,	// (0x000066dd) cell_vkb_keypad_bottom_right_pane_g1

0x6cc6,	// (0x00006e09) cell_vkb_keypad_number_pane_ParamLimits

0x6cc6,	// (0x00006e09) cell_vkb_keypad_number_pane

0x6ce5,	// (0x00006e28) cell_vkb_keypad_number_pane_g1

0x6cef,	// (0x00006e32) cell_vkb_keypad_number_pane_g2

0x6cf8,	// (0x00006e3b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb0c,	// (0x0000fc4f) cell_vkb_keypad_number_pane_g

0x6c62,	// (0x00006da5) cell_vkb_keypad_number_pane_t1

0x6d1c,	// (0x00006e5f) fep_vkb_candidate_pane_g1

0x0001,

0xfb07,	// (0x0000fc4a) cell_hwr_side_pane_g

0x6d7b,	// (0x00006ebe) cell_hwr_side_pane_t1

0x6d89,	// (0x00006ecc) cell_hwr_side_pane_t1_copy1

0x6a2c,	// (0x00006b6f) cell_hwr_candidate_pane_g1

0x6dd9,	// (0x00006f1c) cell_hwr_candidate_pane_t1

0x659a,	// (0x000066dd) cell_vkb_candidate_pane_g2

0x6e2d,	// (0x00006f70) cell_vkb_candidate_pane_t1

0x65f6,	// (0x00006739) bg_popup_fep_shadow_pane_ParamLimits

0x65f6,	// (0x00006739) bg_popup_fep_shadow_pane

0x66ab,	// (0x000067ee) bg_fep_hwr_top_pane_g4

0x6719,	// (0x0000685c) bg_hwr_side_pane_g1_ParamLimits

0x6719,	// (0x0000685c) bg_hwr_side_pane_g1

0xd9df,	// (0x0000db22) cell_hwr_side_pane_ParamLimits

0xd9df,	// (0x0000db22) cell_hwr_side_pane

0x6787,	// (0x000068ca) fep_hwr_write_pane_g1_ParamLimits

0x6787,	// (0x000068ca) fep_hwr_write_pane_g1

0x6794,	// (0x000068d7) fep_hwr_write_pane_g2_ParamLimits

0x6794,	// (0x000068d7) fep_hwr_write_pane_g2

0x67a1,	// (0x000068e4) fep_hwr_write_pane_g3_ParamLimits

0x67a1,	// (0x000068e4) fep_hwr_write_pane_g3

0xd9ff,	// (0x0000db42) fep_hwr_write_pane_g4_ParamLimits

0xd9ff,	// (0x0000db42) fep_hwr_write_pane_g4

0x0005,

0xfad9,	// (0x0000fc1c) fep_hwr_write_pane_g_ParamLimits

0xfad9,	// (0x0000fc1c) fep_hwr_write_pane_g

0x66ab,	// (0x000067ee) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66ab,	// (0x000067ee) bg_fep_hwr_candidate_pane_g2

0x67ea,	// (0x0000692d) cell_hwr_candidate_pane_ParamLimits

0x67ea,	// (0x0000692d) cell_hwr_candidate_pane

0x682c,	// (0x0000696f) fep_hwr_candidate_pane_g1_ParamLimits

0x688e,	// (0x000069d1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x688e,	// (0x000069d1) bg_popup_fep_shadow_pane_cp2

0x6a2c,	// (0x00006b6f) fep_vkb_top_pane_g4_ParamLimits

0x6a2c,	// (0x00006b6f) fep_vkb_top_pane_g4

0x6a72,	// (0x00006bb5) fep_vkb_side_pane_g2_ParamLimits

0x6a72,	// (0x00006bb5) fep_vkb_side_pane_g2

0xc02b,	// (0x0000c16e) list_setting_pane_t4_ParamLimits

0xc02b,	// (0x0000c16e) list_setting_pane_t4

0xc0a5,	// (0x0000c1e8) list_setting_number_pane_t5_ParamLimits

0xc0a5,	// (0x0000c1e8) list_setting_number_pane_t5

0x1c87,	// (0x00001dca) list_double_heading_pane_cp2_ParamLimits

0x1c87,	// (0x00001dca) list_double_heading_pane_cp2

0x1279,	// (0x000013bc) list_double_heading_pane_g1_cp2_ParamLimits

0x1279,	// (0x000013bc) list_double_heading_pane_g1_cp2

0x1285,	// (0x000013c8) list_double_heading_pane_g2_cp2_ParamLimits

0x1285,	// (0x000013c8) list_double_heading_pane_g2_cp2

0x6e3b,	// (0x00006f7e) list_double_heading_pane_t1_cp2_ParamLimits

0x6e3b,	// (0x00006f7e) list_double_heading_pane_t1_cp2

0x6e51,	// (0x00006f94) list_double_heading_pane_t2_cp2_ParamLimits

0x6e51,	// (0x00006f94) list_double_heading_pane_t2_cp2

0xf4ed,	// (0x0000f630) aid_value_unit2

0x01d4,	// (0x00000317) popup_preview_fixed_window

0x06f8,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6e63,	// (0x00006fa6) list_preview_fixed_pane

0x6ea9,	// (0x00006fec) list_empty_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_empty_pane_fp

0x6ea9,	// (0x00006fec) list_single_cale_day_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_cale_day_pane_fp

0x6ea9,	// (0x00006fec) list_single_graphic_heading_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_graphic_heading_pane_fp

0x6ea9,	// (0x00006fec) list_single_graphic_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_graphic_pane_fp

0x6ea9,	// (0x00006fec) list_single_heading_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_heading_pane_fp

0x6ea9,	// (0x00006fec) list_single_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_pane_fp

0x6ebe,	// (0x00007001) list_single_pane_fp_g1_ParamLimits

0x6ebe,	// (0x00007001) list_single_pane_fp_g1

0x1279,	// (0x000013bc) list_single_pane_fp_g2_ParamLimits

0x1279,	// (0x000013bc) list_single_pane_fp_g2

0x1285,	// (0x000013c8) list_single_pane_fp_g3_ParamLimits

0x1285,	// (0x000013c8) list_single_pane_fp_g3

0x6eca,	// (0x0000700d) list_single_pane_fp_g4_ParamLimits

0x6eca,	// (0x0000700d) list_single_pane_fp_g4

0x0003,

0xfb3b,	// (0x0000fc7e) list_single_pane_fp_g_ParamLimits

0xfb3b,	// (0x0000fc7e) list_single_pane_fp_g

0x6ed6,	// (0x00007019) list_single_pane_fp_t1_ParamLimits

0x6ed6,	// (0x00007019) list_single_pane_fp_t1

0x6eed,	// (0x00007030) list_single_graphic_pane_fp_g1_ParamLimits

0x6eed,	// (0x00007030) list_single_graphic_pane_fp_g1

0x6ebe,	// (0x00007001) list_single_graphic_pane_fp_g2_ParamLimits

0x6ebe,	// (0x00007001) list_single_graphic_pane_fp_g2

0x1279,	// (0x000013bc) list_single_graphic_pane_fp_g3_ParamLimits

0x1279,	// (0x000013bc) list_single_graphic_pane_fp_g3

0x1285,	// (0x000013c8) list_single_graphic_pane_fp_g4_ParamLimits

0x1285,	// (0x000013c8) list_single_graphic_pane_fp_g4

0x6eca,	// (0x0000700d) list_single_graphic_pane_fp_g5_ParamLimits

0x6eca,	// (0x0000700d) list_single_graphic_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc87) list_single_graphic_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc87) list_single_graphic_pane_fp_g

0x6ef9,	// (0x0000703c) list_single_graphic_pane_fp_t1_ParamLimits

0x6ef9,	// (0x0000703c) list_single_graphic_pane_fp_t1

0x6eed,	// (0x00007030) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6eed,	// (0x00007030) list_single_graphic_heading_pane_fp_g1

0x6ebe,	// (0x00007001) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ebe,	// (0x00007001) list_single_graphic_heading_pane_fp_g2

0x1279,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1279,	// (0x000013bc) list_single_graphic_heading_pane_fp_g3

0x1285,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1285,	// (0x000013c8) list_single_graphic_heading_pane_fp_g4

0x6eca,	// (0x0000700d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6eca,	// (0x0000700d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc87) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc87) list_single_graphic_heading_pane_fp_g

0x6f0f,	// (0x00007052) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f0f,	// (0x00007052) list_single_graphic_heading_pane_fp_t1

0x6f25,	// (0x00007068) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f25,	// (0x00007068) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb4f,	// (0x0000fc92) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb4f,	// (0x0000fc92) list_single_graphic_heading_pane_fp_t

0x6f37,	// (0x0000707a) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f37,	// (0x0000707a) list_single_cale_day_pane_fp_g1

0x6f6f,	// (0x000070b2) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f6f,	// (0x000070b2) list_single_cale_day_pane_fp_g2

0x6f7b,	// (0x000070be) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f7b,	// (0x000070be) list_single_cale_day_pane_fp_g3

0x6fa3,	// (0x000070e6) list_single_cale_day_pane_fp_g4_ParamLimits

0x6fa3,	// (0x000070e6) list_single_cale_day_pane_fp_g4

0x6fc7,	// (0x0000710a) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fc7,	// (0x0000710a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb54,	// (0x0000fc97) list_single_cale_day_pane_fp_g_ParamLimits

0xfb54,	// (0x0000fc97) list_single_cale_day_pane_fp_g

0x6feb,	// (0x0000712e) list_single_cale_day_pane_fp_t1_ParamLimits

0x6feb,	// (0x0000712e) list_single_cale_day_pane_fp_t1

0x7011,	// (0x00007154) list_single_cale_day_pane_fp_t2_ParamLimits

0x7011,	// (0x00007154) list_single_cale_day_pane_fp_t2

0x702a,	// (0x0000716d) list_single_cale_day_pane_fp_t3_ParamLimits

0x702a,	// (0x0000716d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb5f,	// (0x0000fca2) list_single_cale_day_pane_fp_t_ParamLimits

0xfb5f,	// (0x0000fca2) list_single_cale_day_pane_fp_t

0x6ebe,	// (0x00007001) list_empty_pane_fp_g1_ParamLimits

0x6ebe,	// (0x00007001) list_empty_pane_fp_g1

0x7043,	// (0x00007186) list_empty_pane_fp_t1

0x7051,	// (0x00007194) list_empty_pane_fp_t2

0x0001,

0xfb66,	// (0x0000fca9) list_empty_pane_fp_t

0x6ebe,	// (0x00007001) list_single_heading_pane_fp_g1_ParamLimits

0x6ebe,	// (0x00007001) list_single_heading_pane_fp_g1

0x1279,	// (0x000013bc) list_single_heading_pane_fp_g2_ParamLimits

0x1279,	// (0x000013bc) list_single_heading_pane_fp_g2

0x1285,	// (0x000013c8) list_single_heading_pane_fp_g3_ParamLimits

0x1285,	// (0x000013c8) list_single_heading_pane_fp_g3

0x0002,

0xfb6b,	// (0x0000fcae) list_single_heading_pane_fp_g_ParamLimits

0xfb6b,	// (0x0000fcae) list_single_heading_pane_fp_g

0x705f,	// (0x000071a2) list_single_heading_pane_fp_t1_ParamLimits

0x705f,	// (0x000071a2) list_single_heading_pane_fp_t1

0x7071,	// (0x000071b4) list_single_heading_pane_fp_t2_ParamLimits

0x7071,	// (0x000071b4) list_single_heading_pane_fp_t2

0x0001,

0xfb72,	// (0x0000fcb5) list_single_heading_pane_fp_t_ParamLimits

0xfb72,	// (0x0000fcb5) list_single_heading_pane_fp_t

0x15e8,	// (0x0000172b) aid_size_cell_fast

0x0668,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x1625,	// (0x00001768) cell_app_pane_cp2_ParamLimits

0x1625,	// (0x00001768) cell_app_pane_cp2

0x6618,	// (0x0000675b) fep_hwr_candidate_drop_down_list_pane

0x6846,	// (0x00006989) fep_hwr_candidate_pane_g3_ParamLimits

0x6846,	// (0x00006989) fep_hwr_candidate_pane_g3

0x6853,	// (0x00006996) fep_hwr_candidate_pane_g4_ParamLimits

0x6853,	// (0x00006996) fep_hwr_candidate_pane_g4

0x0002,

0xfae6,	// (0x0000fc29) fep_hwr_candidate_pane_g_ParamLimits

0xfae6,	// (0x0000fc29) fep_hwr_candidate_pane_g

0x6913,	// (0x00006a56) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6913,	// (0x00006a56) fep_vkb_candidate_drop_down_list_pane

0x6d24,	// (0x00006e67) fep_vkb_candidate_pane_g3

0x6d2c,	// (0x00006e6f) fep_vkb_candidate_pane_g4

0x0002,

0xfb13,	// (0x0000fc56) fep_vkb_candidate_pane_g

0x6a2c,	// (0x00006b6f) cell_hwr_candidate_pane_g1_ParamLimits

0x6d97,	// (0x00006eda) cell_hwr_candidate_pane_g3_ParamLimits

0x6d97,	// (0x00006eda) cell_hwr_candidate_pane_g3

0x6db8,	// (0x00006efb) cell_hwr_candidate_pane_g4_ParamLimits

0x6db8,	// (0x00006efb) cell_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0000fc70) cell_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0000fc70) cell_hwr_candidate_pane_g

0x6df7,	// (0x00006f3a) cell_vkb_candidate_pane_g3_ParamLimits

0x6df7,	// (0x00006f3a) cell_vkb_candidate_pane_g3

0x6e12,	// (0x00006f55) cell_vkb_candidate_pane_g4_ParamLimits

0x6e12,	// (0x00006f55) cell_vkb_candidate_pane_g4

0x7087,	// (0x000071ca) cell_app_pane_cp2_g1_ParamLimits

0x7087,	// (0x000071ca) cell_app_pane_cp2_g1

0x70a5,	// (0x000071e8) cell_app_pane_cp2_g2_ParamLimits

0x70a5,	// (0x000071e8) cell_app_pane_cp2_g2

0x0001,

0xfb77,	// (0x0000fcba) cell_app_pane_cp2_g_ParamLimits

0xfb77,	// (0x0000fcba) cell_app_pane_cp2_g

0x70b1,	// (0x000071f4) cell_app_pane_cp2_t1_ParamLimits

0x70b1,	// (0x000071f4) cell_app_pane_cp2_t1

0x1253,	// (0x00001396) grid_highlight_pane_cp1_ParamLimits

0x1253,	// (0x00001396) grid_highlight_pane_cp1

0x70c3,	// (0x00007206) cell_hwr_candidate_pane_cp1_ParamLimits

0x70c3,	// (0x00007206) cell_hwr_candidate_pane_cp1

0x6a2c,	// (0x00006b6f) fep_hwr_candidate_drop_down_list_pane_g1

0x70e2,	// (0x00007225) fep_hwr_candidate_drop_down_list_pane_g2

0x70ef,	// (0x00007232) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fcbf) fep_hwr_candidate_drop_down_list_pane_g

0x70fc,	// (0x0000723f) fep_hwr_candidate_drop_down_list_scroll_pane

0x7105,	// (0x00007248) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7105,	// (0x00007248) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7112,	// (0x00007255) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7112,	// (0x00007255) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x711f,	// (0x00007262) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x711f,	// (0x00007262) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6df7,	// (0x00006f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6df7,	// (0x00006f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e12,	// (0x00006f55) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e12,	// (0x00006f55) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x712c,	// (0x0000726f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x712c,	// (0x0000726f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7147,	// (0x0000728a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7147,	// (0x0000728a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7162,	// (0x000072a5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7162,	// (0x000072a5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb83,	// (0x0000fcc6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb83,	// (0x0000fcc6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x717d,	// (0x000072c0) cell_vkb_candidate_pane_cp1_ParamLimits

0x717d,	// (0x000072c0) cell_vkb_candidate_pane_cp1

0x6a2c,	// (0x00006b6f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a2c,	// (0x00006b6f) fep_vkb_candidate_drop_down_list_pane_g1

0x70e2,	// (0x00007225) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70e2,	// (0x00007225) fep_vkb_candidate_drop_down_list_pane_g2

0x70ef,	// (0x00007232) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70ef,	// (0x00007232) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb7c,	// (0x0000fcbf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb7c,	// (0x0000fcbf) fep_vkb_candidate_drop_down_list_pane_g

0x719d,	// (0x000072e0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x719d,	// (0x000072e0) fep_vkb_candidate_drop_down_list_scroll_pane

0x71aa,	// (0x000072ed) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71aa,	// (0x000072ed) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x71b7,	// (0x000072fa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71b7,	// (0x000072fa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71c3,	// (0x00007306) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71c3,	// (0x00007306) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d97,	// (0x00006eda) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d97,	// (0x00006eda) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6db8,	// (0x00006efb) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6db8,	// (0x00006efb) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71cf,	// (0x00007312) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71cf,	// (0x00007312) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71f0,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71f0,	// (0x00007333) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7211,	// (0x00007354) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7211,	// (0x00007354) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb94,	// (0x0000fcd7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb94,	// (0x0000fcd7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xba1e,	// (0x0000bb61) title_pane_g1_ParamLimits

0xba31,	// (0x0000bb74) title_pane_g2_ParamLimits

0xf529,	// (0x0000f66c) title_pane_g_ParamLimits

0x1c21,	// (0x00001d64) aid_call2_pane

0x1c29,	// (0x00001d6c) aid_call_pane

0x1c31,	// (0x00001d74) popup_clock_analogue_window_g1

0x1c31,	// (0x00001d74) popup_clock_analogue_window_g2

0x1c39,	// (0x00001d7c) popup_clock_analogue_window_g3

0x1c42,	// (0x00001d85) popup_clock_analogue_window_g4

0xf4ff,	// (0x0000f642) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x0000f811) popup_clock_analogue_window_g

0x1c4a,	// (0x00001d8d) popup_clock_analogue_window_t1

0x1cee,	// (0x00001e31) clock_digital_number_pane_ParamLimits

0x1cee,	// (0x00001e31) clock_digital_number_pane

0x1cfa,	// (0x00001e3d) clock_digital_number_pane_cp02_ParamLimits

0x1cfa,	// (0x00001e3d) clock_digital_number_pane_cp02

0x1d06,	// (0x00001e49) clock_digital_number_pane_cp03_ParamLimits

0x1d06,	// (0x00001e49) clock_digital_number_pane_cp03

0x1d12,	// (0x00001e55) clock_digital_number_pane_cp04_ParamLimits

0x1d12,	// (0x00001e55) clock_digital_number_pane_cp04

0x1d1e,	// (0x00001e61) clock_digital_separator_pane_ParamLimits

0x1d1e,	// (0x00001e61) clock_digital_separator_pane

0x1d2a,	// (0x00001e6d) popup_clock_digital_window_t1_ParamLimits

0x1d2a,	// (0x00001e6d) popup_clock_digital_window_t1

0xf4ff,	// (0x0000f642) clock_digital_number_pane_g1

0xf4ff,	// (0x0000f642) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x0000f81c) clock_digital_number_pane_g

0xf4ff,	// (0x0000f642) clock_digital_separator_pane_g1

0xf4ff,	// (0x0000f642) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x0000f81c) clock_digital_separator_pane_g

0xcde9,	// (0x0000cf2c) aid_fill_nsta_ParamLimits

0xcf1f,	// (0x0000d062) indicator_nsta_pane_ParamLimits

0x3317,	// (0x0000345a) popup_clock_analogue_window

0x3317,	// (0x0000345a) popup_clock_digital_window

0xd7f9,	// (0x0000d93c) grid_indicator_nsta_pane_ParamLimits

0x5efe,	// (0x00006041) clock_nsta_pane_t2

0x0001,

0xfa66,	// (0x0000fba9) clock_nsta_pane_t

0x19df,	// (0x00001b22) aid_size_max_handle

0x19e9,	// (0x00001b2c) aid_size_min_handle

0x2504,	// (0x00002647) editor_scroll_pane

0x722c,	// (0x0000736f) ex_editor_pane

0x1556,	// (0x00001699) scroll_pane_cp13

0x0c9b,	// (0x00000dde) scroll_pane_cp14

0x1c7f,	// (0x00001dc2) scroll_pane_cp36

0xc34f,	// (0x0000c492) list_single_graphic_hl_pane_cp2_ParamLimits

0xc34f,	// (0x0000c492) list_single_graphic_hl_pane_cp2

0xd64b,	// (0x0000d78e) list_single_graphic_hl_pane_ParamLimits

0xd64b,	// (0x0000d78e) list_single_graphic_hl_pane

0x7234,	// (0x00007377) aid_size_min_hl_cp1

0x723d,	// (0x00007380) list_highlight_pane_cp34_ParamLimits

0x723d,	// (0x00007380) list_highlight_pane_cp34

0x724e,	// (0x00007391) list_single_graphic_hl_pane_g1_ParamLimits

0x724e,	// (0x00007391) list_single_graphic_hl_pane_g1

0xdb9e,	// (0x0000dce1) list_single_graphic_hl_pane_g2_ParamLimits

0xdb9e,	// (0x0000dce1) list_single_graphic_hl_pane_g2

0xdb9e,	// (0x0000dce1) list_single_graphic_hl_pane_g3_ParamLimits

0xdb9e,	// (0x0000dce1) list_single_graphic_hl_pane_g3

0x23dc,	// (0x0000251f) list_single_graphic_hl_pane_g4_ParamLimits

0x23dc,	// (0x0000251f) list_single_graphic_hl_pane_g4

0xdbaa,	// (0x0000dced) list_single_graphic_hl_pane_g5_ParamLimits

0xdbaa,	// (0x0000dced) list_single_graphic_hl_pane_g5

0x0004,

0xfba5,	// (0x0000fce8) list_single_graphic_hl_pane_g_ParamLimits

0xfba5,	// (0x0000fce8) list_single_graphic_hl_pane_g

0xdbbe,	// (0x0000dd01) list_single_graphic_hl_pane_t1_ParamLimits

0xdbbe,	// (0x0000dd01) list_single_graphic_hl_pane_t1

0x727b,	// (0x000073be) aid_size_min_hl_cp2

0x7284,	// (0x000073c7) list_highlight_pane_cp34_cp2_ParamLimits

0x7284,	// (0x000073c7) list_highlight_pane_cp34_cp2

0x724e,	// (0x00007391) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x724e,	// (0x00007391) list_single_graphic_hl_pane_g1_cp2

0x7291,	// (0x000073d4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7291,	// (0x000073d4) list_single_graphic_hl_pane_g2_cp2

0x729d,	// (0x000073e0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x729d,	// (0x000073e0) list_single_graphic_hl_pane_g3_cp2

0x72ab,	// (0x000073ee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x72ab,	// (0x000073ee) list_single_graphic_hl_pane_g4_cp2

0x72b7,	// (0x000073fa) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72b7,	// (0x000073fa) list_single_graphic_hl_pane_g5_cp2

0xc5e7,	// (0x0000c72a) control_pane_g4_ParamLimits

0xc5e7,	// (0x0000c72a) control_pane_g4

0x2a53,	// (0x00002b96) bg_popup_sub_pane_cp10_ParamLimits

0x65a4,	// (0x000066e7) list_choice_list_pane_ParamLimits

0x65b3,	// (0x000066f6) scroll_pane_cp23

0x06f8,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e63,	// (0x00006fa6) list_preview_fixed_pane_ParamLimits

0x6e79,	// (0x00006fbc) list_preview_fixed_pane_cp_ParamLimits

0x6e79,	// (0x00006fbc) list_preview_fixed_pane_cp

0x6e85,	// (0x00006fc8) popup_preview_fixed_window_g1_ParamLimits

0x6e85,	// (0x00006fc8) popup_preview_fixed_window_g1

0x6e91,	// (0x00006fd4) popup_preview_fixed_window_g2_ParamLimits

0x6e91,	// (0x00006fd4) popup_preview_fixed_window_g2

0x0002,

0xfb34,	// (0x0000fc77) popup_preview_fixed_window_g_ParamLimits

0xfb34,	// (0x0000fc77) popup_preview_fixed_window_g

0x1884,	// (0x000019c7) aid_navi_side_left_pane_ParamLimits

0x1899,	// (0x000019dc) aid_navi_side_right_pane_ParamLimits

0x18b1,	// (0x000019f4) navi_icon_pane_stacon_ParamLimits

0x18c5,	// (0x00001a08) navi_navi_pane_stacon_ParamLimits

0x18b1,	// (0x000019f4) navi_text_pane_stacon_ParamLimits

0xf4f5,	// (0x0000f638) main_text_info_pane

0x72e1,	// (0x00007424) listscroll_text_info_pane

0x72e9,	// (0x0000742c) list_text_info_pane_ParamLimits

0x72e9,	// (0x0000742c) list_text_info_pane

0x72f8,	// (0x0000743b) scroll_pane_cp24_ParamLimits

0x72f8,	// (0x0000743b) scroll_pane_cp24

0xdbd4,	// (0x0000dd17) list_text_info_pane_t1_ParamLimits

0xdbd4,	// (0x0000dd17) list_text_info_pane_t1

0xc753,	// (0x0000c896) popup_fast_swap2_window_ParamLimits

0xc753,	// (0x0000c896) popup_fast_swap2_window

0x7347,	// (0x0000748a) aid_size_cell_fast2

0xf4f5,	// (0x0000f638) bg_popup_window_pane_cp17

0x3c2d,	// (0x00003d70) heading_pane_cp2

0x3c35,	// (0x00003d78) listscroll_fast2_pane

0x7351,	// (0x00007494) grid_fast2_pane

0x735b,	// (0x0000749e) listscroll_fast2_pane_g1

0x7363,	// (0x000074a6) listscroll_fast2_pane_g2

0x0001,

0xfbb0,	// (0x0000fcf3) listscroll_fast2_pane_g

0x1556,	// (0x00001699) scroll_pane_cp26

0x736d,	// (0x000074b0) cell_fast2_pane_ParamLimits

0x736d,	// (0x000074b0) cell_fast2_pane

0x7382,	// (0x000074c5) cell_fast2_pane_g1

0x738b,	// (0x000074ce) cell_fast2_pane_g2

0x7394,	// (0x000074d7) cell_fast2_pane_g3

0x0002,

0xfbb5,	// (0x0000fcf8) cell_fast2_pane_g

0x0a58,	// (0x00000b9b) grid_highlight_pane_cp9

0x0a6d,	// (0x00000bb0) main_eswt_pane_ParamLimits

0x0a6d,	// (0x00000bb0) main_eswt_pane

0x730d,	// (0x00007450) list_single_text_info_pane

0x739c,	// (0x000074df) eswt_ctrl_button_pane

0x739c,	// (0x000074df) eswt_ctrl_canvas_pane

0x73a4,	// (0x000074e7) eswt_ctrl_combo_pane

0x739c,	// (0x000074df) eswt_ctrl_default_pane

0x739c,	// (0x000074df) eswt_ctrl_label_pane

0x73ac,	// (0x000074ef) eswt_ctrl_wait_pane

0x73b4,	// (0x000074f7) eswt_shell_pane

0xf4f5,	// (0x0000f638) listscroll_eswt_app_pane

0x73d4,	// (0x00007517) popup_eswt_tasktip_window_ParamLimits

0x73d4,	// (0x00007517) popup_eswt_tasktip_window

0x377c,	// (0x000038bf) bg_popup_window_pane_cp18

0x73e5,	// (0x00007528) eswt_control_pane_g1_ParamLimits

0x73e5,	// (0x00007528) eswt_control_pane_g1

0x73f2,	// (0x00007535) eswt_control_pane_g2_ParamLimits

0x73f2,	// (0x00007535) eswt_control_pane_g2

0x73ff,	// (0x00007542) eswt_control_pane_g3_ParamLimits

0x73ff,	// (0x00007542) eswt_control_pane_g3

0x740c,	// (0x0000754f) eswt_control_pane_g4_ParamLimits

0x740c,	// (0x0000754f) eswt_control_pane_g4

0x0003,

0xfbbc,	// (0x0000fcff) eswt_control_pane_g_ParamLimits

0xfbbc,	// (0x0000fcff) eswt_control_pane_g

0x1253,	// (0x00001396) bg_button_pane_ParamLimits

0x1253,	// (0x00001396) bg_button_pane

0x0a6d,	// (0x00000bb0) common_borders_pane_copy2_ParamLimits

0x0a6d,	// (0x00000bb0) common_borders_pane_copy2

0x7419,	// (0x0000755c) control_button_pane_g1_ParamLimits

0x7419,	// (0x0000755c) control_button_pane_g1

0x7425,	// (0x00007568) control_button_pane_g2_ParamLimits

0x7425,	// (0x00007568) control_button_pane_g2

0x7431,	// (0x00007574) control_button_pane_g3_ParamLimits

0x7431,	// (0x00007574) control_button_pane_g3

0x0002,

0xfbc5,	// (0x0000fd08) control_button_pane_g_ParamLimits

0xfbc5,	// (0x0000fd08) control_button_pane_g

0x7445,	// (0x00007588) control_button_pane_t1

0x7453,	// (0x00007596) control_button_pane_t2

0x0001,

0xfbcc,	// (0x0000fd0f) control_button_pane_t

0x35ce,	// (0x00003711) bg_button_pane_g1

0x35d6,	// (0x00003719) bg_button_pane_g2

0x35de,	// (0x00003721) bg_button_pane_g3

0x35e6,	// (0x00003729) bg_button_pane_g4

0x35ee,	// (0x00003731) bg_button_pane_g5

0x35f6,	// (0x00003739) bg_button_pane_g6

0x35fe,	// (0x00003741) bg_button_pane_g7

0x3606,	// (0x00003749) bg_button_pane_g8

0x360e,	// (0x00003751) bg_button_pane_g9

0x0008,

0xf830,	// (0x0000f973) bg_button_pane_g

0x655f,	// (0x000066a2) common_borders_pane_ParamLimits

0x655f,	// (0x000066a2) common_borders_pane

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy1_ParamLimits

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy1

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy1_ParamLimits

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy1

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy1_ParamLimits

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy1

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy1_ParamLimits

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy1

0x659a,	// (0x000066dd) bg_eswt_ctrl_canvas_pane_g1

0x655f,	// (0x000066a2) common_borders_pane_cp2_ParamLimits

0x655f,	// (0x000066a2) common_borders_pane_cp2

0x655f,	// (0x000066a2) common_borders_pane_cp3_ParamLimits

0x655f,	// (0x000066a2) common_borders_pane_cp3

0x7461,	// (0x000075a4) separator_horizontal_pane

0x7469,	// (0x000075ac) separator_vertical_pane

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy2_ParamLimits

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy2

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy2_ParamLimits

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy2

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy2_ParamLimits

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy2

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy2_ParamLimits

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy2

0xf4f5,	// (0x0000f638) common_borders_pane_cp4

0x7472,	// (0x000075b5) separator_horizontal_pane_g1

0x747b,	// (0x000075be) separator_horizontal_pane_g2

0x7484,	// (0x000075c7) separator_horizontal_pane_g3

0x0002,

0xfbd1,	// (0x0000fd14) separator_horizontal_pane_g

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy3_ParamLimits

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy3

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy3_ParamLimits

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy3

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy3_ParamLimits

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy3

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy3_ParamLimits

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy3

0xf4f5,	// (0x0000f638) common_borders_pane_cp5

0x748d,	// (0x000075d0) separator_vertical_pane_g1

0x7496,	// (0x000075d9) separator_vertical_pane_g2

0x749f,	// (0x000075e2) separator_vertical_pane_g3

0x0002,

0xfbd8,	// (0x0000fd1b) separator_vertical_pane_g

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy4_ParamLimits

0x73e5,	// (0x00007528) eswt_control_pane_g1_copy4

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy4_ParamLimits

0x73f2,	// (0x00007535) eswt_control_pane_g2_copy4

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy4_ParamLimits

0x73ff,	// (0x00007542) eswt_control_pane_g3_copy4

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy4_ParamLimits

0x740c,	// (0x0000754f) eswt_control_pane_g4_copy4

0x74a8,	// (0x000075eb) eswt_ctrl_combo_button_pane

0x74b0,	// (0x000075f3) eswt_ctrl_input_pane

0x74b8,	// (0x000075fb) popup_choice_list_window_cp70

0x74c0,	// (0x00007603) eswt_ctrl_input_pane_t1

0xf4f5,	// (0x0000f638) input_focus_pane_cp70

0x655f,	// (0x000066a2) bg_button_pane_cp70_ParamLimits

0x655f,	// (0x000066a2) bg_button_pane_cp70

0x74ce,	// (0x00007611) eswt_ctrl_combo_button_pane_g1

0x74d6,	// (0x00007619) wait_bar_pane_cp70

0x377c,	// (0x000038bf) bg_popup_window_pane_cp70_ParamLimits

0x377c,	// (0x000038bf) bg_popup_window_pane_cp70

0x74de,	// (0x00007621) popup_eswt_tasktip_window_t1

0x74f4,	// (0x00007637) wait_bar_pane_cp71_ParamLimits

0x74f4,	// (0x00007637) wait_bar_pane_cp71

0x7500,	// (0x00007643) grid_eswt_app_pane

0x1a43,	// (0x00001b86) scroll_pane_cp70

0xdbef,	// (0x0000dd32) cell_eswt_app_pane_ParamLimits

0xdbef,	// (0x0000dd32) cell_eswt_app_pane

0xdc19,	// (0x0000dd5c) cell_eswt_app_pane_g1_ParamLimits

0xdc19,	// (0x0000dd5c) cell_eswt_app_pane_g1

0xdc48,	// (0x0000dd8b) cell_eswt_app_pane_g2_ParamLimits

0xdc48,	// (0x0000dd8b) cell_eswt_app_pane_g2

0x0001,

0xfbdf,	// (0x0000fd22) cell_eswt_app_pane_g_ParamLimits

0xfbdf,	// (0x0000fd22) cell_eswt_app_pane_g

0xdc71,	// (0x0000ddb4) cell_eswt_app_pane_t1_ParamLimits

0xdc71,	// (0x0000ddb4) cell_eswt_app_pane_t1

0x75c3,	// (0x00007706) grid_highlight_pane_cp70_ParamLimits

0x75c3,	// (0x00007706) grid_highlight_pane_cp70

0x23dc,	// (0x0000251f) set_content_pane_g1

0xc579,	// (0x0000c6bc) status_small_volume_pane

0x75cf,	// (0x00007712) status_small_volume_pane_g1

0x75d7,	// (0x0000771a) volume_small2_pane

0x75e0,	// (0x00007723) volume_small2_pane_g1

0x75e9,	// (0x0000772c) volume_small2_pane_g2

0x75f2,	// (0x00007735) volume_small2_pane_g3

0x75fb,	// (0x0000773e) volume_small2_pane_g4

0x7604,	// (0x00007747) volume_small2_pane_g5

0x760d,	// (0x00007750) volume_small2_pane_g6

0x7616,	// (0x00007759) volume_small2_pane_g7

0x761f,	// (0x00007762) volume_small2_pane_g8

0x7628,	// (0x0000776b) volume_small2_pane_g9

0x7631,	// (0x00007774) volume_small2_pane_g10

0x0009,

0xfbe4,	// (0x0000fd27) volume_small2_pane_g

0x6b74,	// (0x00006cb7) fep_vkb_top_text_pane_g1_ParamLimits

0xdb46,	// (0x0000dc89) fep_vkb_top_text_pane_t1_ParamLimits

0x6e9d,	// (0x00006fe0) popup_preview_fixed_window_g3_ParamLimits

0x6e9d,	// (0x00006fe0) popup_preview_fixed_window_g3

0xcd7c,	// (0x0000cebf) popup_toolbar_trans_pane

0xd4a3,	// (0x0000d5e6) aid_height_set_list_ParamLimits

0x4df4,	// (0x00004f37) aid_size_parent_ParamLimits

0x2a53,	// (0x00002b96) list_highlight_pane_cp2_ParamLimits

0x23dc,	// (0x0000251f) set_content_pane_g1_ParamLimits

0xd65d,	// (0x0000d7a0) list_single_image_pane_ParamLimits

0xd65d,	// (0x0000d7a0) list_single_image_pane

0xdca3,	// (0x0000dde6) aid_size_cell_image_ParamLimits

0xdca3,	// (0x0000dde6) aid_size_cell_image

0xdcb0,	// (0x0000ddf3) grid_single_image_pane_ParamLimits

0xdcb0,	// (0x0000ddf3) grid_single_image_pane

0x3693,	// (0x000037d6) list_single_image_pane_g1_ParamLimits

0x3693,	// (0x000037d6) list_single_image_pane_g1

0x7653,	// (0x00007796) list_single_image_pane_g2_ParamLimits

0x7653,	// (0x00007796) list_single_image_pane_g2

0x0001,

0xfbf9,	// (0x0000fd3c) list_single_image_pane_g_ParamLimits

0xfbf9,	// (0x0000fd3c) list_single_image_pane_g

0x7667,	// (0x000077aa) list_single_image_pane_t1_ParamLimits

0x7667,	// (0x000077aa) list_single_image_pane_t1

0xdcbc,	// (0x0000ddff) cell_image_list_pane_ParamLimits

0xdcbc,	// (0x0000ddff) cell_image_list_pane

0xdcd0,	// (0x0000de13) cell_image_list_pane_g1

0xdcd9,	// (0x0000de1c) cell_image_list_pane_g2

0x0001,

0xfbfe,	// (0x0000fd41) cell_image_list_pane_g

0x76a3,	// (0x000077e6) aid_size_cell_tb_trans_pane

0x1253,	// (0x00001396) bg_tb_trans_pane

0x76b5,	// (0x000077f8) grid_tb_trans_pane

0x35ce,	// (0x00003711) bg_tb_trans_pane_g1

0x35d6,	// (0x00003719) bg_tb_trans_pane_g2

0x35de,	// (0x00003721) bg_tb_trans_pane_g3

0x35e6,	// (0x00003729) bg_tb_trans_pane_g4

0x35ee,	// (0x00003731) bg_tb_trans_pane_g5

0x3606,	// (0x00003749) bg_tb_trans_pane_g6

0x360e,	// (0x00003751) bg_tb_trans_pane_g7

0x35f6,	// (0x00003739) bg_tb_trans_pane_g8

0x35fe,	// (0x00003741) bg_tb_trans_pane_g9

0x0008,

0xfc03,	// (0x0000fd46) bg_tb_trans_pane_g

0x76c9,	// (0x0000780c) cell_toolbar_trans_pane_ParamLimits

0x76c9,	// (0x0000780c) cell_toolbar_trans_pane

0x659a,	// (0x000066dd) cell_toolbar_trans_pane_g1

0xd8b0,	// (0x0000d9f3) list_form2_midp_pane_t1

0xd8be,	// (0x0000da01) list_form2_midp_pane_t2

0x0001,

0xfaac,	// (0x0000fbef) list_form2_midp_pane_t

0x613c,	// (0x0000627f) scroll_pane_cp51_ParamLimits

0x6347,	// (0x0000648a) form2_midp_wait_pane_g1

0x6350,	// (0x00006493) form2_midp_wait_pane_g2

0x6359,	// (0x0000649c) form2_midp_wait_pane_g3

0x0002,

0xfac1,	// (0x0000fc04) form2_midp_wait_pane_g

0x03c4,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x63a5,	// (0x000064e8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x63b4,	// (0x000064f7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4ffa,	// (0x0000513d) list_single_2graphic_im_pane_ParamLimits

0x4ffa,	// (0x0000513d) list_single_2graphic_im_pane

0x76ef,	// (0x00007832) list_single_2graphic_im_pane_g1_ParamLimits

0x76ef,	// (0x00007832) list_single_2graphic_im_pane_g1

0x7700,	// (0x00007843) list_single_2graphic_im_pane_g2_ParamLimits

0x7700,	// (0x00007843) list_single_2graphic_im_pane_g2

0x770c,	// (0x0000784f) list_single_2graphic_im_pane_g3_ParamLimits

0x770c,	// (0x0000784f) list_single_2graphic_im_pane_g3

0x0003,

0xfc16,	// (0x0000fd59) list_single_2graphic_im_pane_g_ParamLimits

0xfc16,	// (0x0000fd59) list_single_2graphic_im_pane_g

0x772c,	// (0x0000786f) list_single_2graphic_im_pane_t1_ParamLimits

0x772c,	// (0x0000786f) list_single_2graphic_im_pane_t1

0x6ea9,	// (0x00006fec) list_single_graphic_2heading_pane_fp_ParamLimits

0x6ea9,	// (0x00006fec) list_single_graphic_2heading_pane_fp

0x6eed,	// (0x00007030) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6eed,	// (0x00007030) list_single_graphic_2heading_pane_fp_g1

0x6ebe,	// (0x00007001) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ebe,	// (0x00007001) list_single_graphic_2heading_pane_fp_g2

0x1279,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1279,	// (0x000013bc) list_single_graphic_2heading_pane_fp_g3

0x1285,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1285,	// (0x000013c8) list_single_graphic_2heading_pane_fp_g4

0x6eca,	// (0x0000700d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6eca,	// (0x0000700d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb44,	// (0x0000fc87) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb44,	// (0x0000fc87) list_single_graphic_2heading_pane_fp_g

0x775d,	// (0x000078a0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x775d,	// (0x000078a0) list_single_graphic_2heading_pane_fp_t1

0x6f25,	// (0x00007068) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f25,	// (0x00007068) list_single_graphic_2heading_pane_fp_t2

0x7773,	// (0x000078b6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7773,	// (0x000078b6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc1f,	// (0x0000fd62) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc1f,	// (0x0000fd62) list_single_graphic_2heading_pane_fp_t

0x67c4,	// (0x00006907) fep_hwr_write_pane_g5_ParamLimits

0x67c4,	// (0x00006907) fep_hwr_write_pane_g5

0x67d0,	// (0x00006913) fep_hwr_write_pane_g6_ParamLimits

0x67d0,	// (0x00006913) fep_hwr_write_pane_g6

0x73b4,	// (0x000074f7) eswt_shell_pane_ParamLimits

0x377c,	// (0x000038bf) bg_popup_window_pane_cp18_ParamLimits

0x4cb2,	// (0x00004df5) heading_pane_cp70

0x74de,	// (0x00007621) popup_eswt_tasktip_window_t1_ParamLimits

0xce44,	// (0x0000cf87) aid_touch_tab_arrow_left

0xce5a,	// (0x0000cf9d) aid_touch_tab_arrow_right

0xba49,	// (0x0000bb8c) title_pane_g3_ParamLimits

0xba49,	// (0x0000bb8c) title_pane_g3

0x1132,	// (0x00001275) set_value_pane_g1

0xcd7c,	// (0x0000cebf) popup_toolbar_trans_pane_ParamLimits

0x76a3,	// (0x000077e6) aid_size_cell_tb_trans_pane_ParamLimits

0x1253,	// (0x00001396) bg_tb_trans_pane_ParamLimits

0x76b5,	// (0x000077f8) grid_tb_trans_pane_ParamLimits

0x06f8,	// (0x0000083b) cont_note_pane_ParamLimits

0x06f8,	// (0x0000083b) cont_note_pane

0x0a6d,	// (0x00000bb0) cont_snote2_single_text_pane_ParamLimits

0x0a6d,	// (0x00000bb0) cont_snote2_single_text_pane

0x0a6d,	// (0x00000bb0) cont_snote2_single_graphic_pane_ParamLimits

0x0a6d,	// (0x00000bb0) cont_snote2_single_graphic_pane

0x3e5c,	// (0x00003f9f) cont_note_wait_pane_ParamLimits

0x3e5c,	// (0x00003f9f) cont_note_wait_pane

0x3e5c,	// (0x00003f9f) cont_note_image_pane_ParamLimits

0x3e5c,	// (0x00003f9f) cont_note_image_pane

0x7789,	// (0x000078cc) popup_note2_window_g1_ParamLimits

0x7789,	// (0x000078cc) popup_note2_window_g1

0x77ba,	// (0x000078fd) popup_note2_window_t1_ParamLimits

0x77ba,	// (0x000078fd) popup_note2_window_t1

0x77ff,	// (0x00007942) popup_note2_window_t2_ParamLimits

0x77ff,	// (0x00007942) popup_note2_window_t2

0x7844,	// (0x00007987) popup_note2_window_t3_ParamLimits

0x7844,	// (0x00007987) popup_note2_window_t3

0x7889,	// (0x000079cc) popup_note2_window_t4_ParamLimits

0x7889,	// (0x000079cc) popup_note2_window_t4

0x077c,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x077c,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xfc2b,	// (0x0000fd6e) popup_note2_window_t_ParamLimits

0xfc2b,	// (0x0000fd6e) popup_note2_window_t

0x78b8,	// (0x000079fb) popup_note2_image_window_g1_ParamLimits

0x78b8,	// (0x000079fb) popup_note2_image_window_g1

0x78c4,	// (0x00007a07) popup_note2_image_window_g2_ParamLimits

0x78c4,	// (0x00007a07) popup_note2_image_window_g2

0x0001,

0xfc36,	// (0x0000fd79) popup_note2_image_window_g_ParamLimits

0xfc36,	// (0x0000fd79) popup_note2_image_window_g

0x78d6,	// (0x00007a19) popup_note2_image_window_t1_ParamLimits

0x78d6,	// (0x00007a19) popup_note2_image_window_t1

0x78ee,	// (0x00007a31) popup_note2_image_window_t2_ParamLimits

0x78ee,	// (0x00007a31) popup_note2_image_window_t2

0x7906,	// (0x00007a49) popup_note2_image_window_t3_ParamLimits

0x7906,	// (0x00007a49) popup_note2_image_window_t3

0x0002,

0xfc3b,	// (0x0000fd7e) popup_note2_image_window_t_ParamLimits

0xfc3b,	// (0x0000fd7e) popup_note2_image_window_t

0x3e6a,	// (0x00003fad) popup_note2_wait_window_g1_ParamLimits

0x3e6a,	// (0x00003fad) popup_note2_wait_window_g1

0x7922,	// (0x00007a65) popup_note2_wait_window_g2_ParamLimits

0x7922,	// (0x00007a65) popup_note2_wait_window_g2

0x3e82,	// (0x00003fc5) popup_note2_wait_window_g3_ParamLimits

0x3e82,	// (0x00003fc5) popup_note2_wait_window_g3

0x0002,

0xfc42,	// (0x0000fd85) popup_note2_wait_window_g_ParamLimits

0xfc42,	// (0x0000fd85) popup_note2_wait_window_g

0x792e,	// (0x00007a71) popup_note2_wait_window_t1_ParamLimits

0x792e,	// (0x00007a71) popup_note2_wait_window_t1

0x794c,	// (0x00007a8f) popup_note2_wait_window_t2_ParamLimits

0x794c,	// (0x00007a8f) popup_note2_wait_window_t2

0x796a,	// (0x00007aad) popup_note2_wait_window_t3_ParamLimits

0x796a,	// (0x00007aad) popup_note2_wait_window_t3

0x797c,	// (0x00007abf) popup_note2_wait_window_t4_ParamLimits

0x797c,	// (0x00007abf) popup_note2_wait_window_t4

0x0003,

0xfc49,	// (0x0000fd8c) popup_note2_wait_window_t_ParamLimits

0xfc49,	// (0x0000fd8c) popup_note2_wait_window_t

0x798e,	// (0x00007ad1) wait_bar2_pane_ParamLimits

0x798e,	// (0x00007ad1) wait_bar2_pane

0x79a6,	// (0x00007ae9) popup_snote2_single_text_window_g1_ParamLimits

0x79a6,	// (0x00007ae9) popup_snote2_single_text_window_g1

0x79ce,	// (0x00007b11) popup_snote2_single_text_window_t1_ParamLimits

0x79ce,	// (0x00007b11) popup_snote2_single_text_window_t1

0x7a1a,	// (0x00007b5d) popup_snote2_single_text_window_t2_ParamLimits

0x7a1a,	// (0x00007b5d) popup_snote2_single_text_window_t2

0x7a66,	// (0x00007ba9) popup_snote2_single_text_window_t3_ParamLimits

0x7a66,	// (0x00007ba9) popup_snote2_single_text_window_t3

0x7aa7,	// (0x00007bea) popup_snote2_single_text_window_t4_ParamLimits

0x7aa7,	// (0x00007bea) popup_snote2_single_text_window_t4

0x7add,	// (0x00007c20) popup_snote2_single_text_window_t5_ParamLimits

0x7add,	// (0x00007c20) popup_snote2_single_text_window_t5

0x0004,

0xfc52,	// (0x0000fd95) popup_snote2_single_text_window_t_ParamLimits

0xfc52,	// (0x0000fd95) popup_snote2_single_text_window_t

0x7b08,	// (0x00007c4b) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b08,	// (0x00007c4b) popup_snote2_single_graphic_window_g1

0x7b30,	// (0x00007c73) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b30,	// (0x00007c73) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5d,	// (0x0000fda0) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5d,	// (0x0000fda0) popup_snote2_single_graphic_window_g

0x7b58,	// (0x00007c9b) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b58,	// (0x00007c9b) popup_snote2_single_graphic_window_t1

0x7ba4,	// (0x00007ce7) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ba4,	// (0x00007ce7) popup_snote2_single_graphic_window_t2

0x7a66,	// (0x00007ba9) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a66,	// (0x00007ba9) popup_snote2_single_graphic_window_t3

0x7aa7,	// (0x00007bea) popup_snote2_single_graphic_window_t4_ParamLimits

0x7aa7,	// (0x00007bea) popup_snote2_single_graphic_window_t4

0x7add,	// (0x00007c20) popup_snote2_single_graphic_window_t5_ParamLimits

0x7add,	// (0x00007c20) popup_snote2_single_graphic_window_t5

0x0004,

0xfc62,	// (0x0000fda5) popup_snote2_single_graphic_window_t_ParamLimits

0xfc62,	// (0x0000fda5) popup_snote2_single_graphic_window_t

0x5fac,	// (0x000060ef) clock_nsta_pane_cp2_t1

0x5fac,	// (0x000060ef) clock_nsta_pane_cp2_t2

0x0001,

0xfa82,	// (0x0000fbc5) clock_nsta_pane_cp2_t

0x126d,	// (0x000013b0) form_field_data_wide_pane_g1_ParamLimits

0x1279,	// (0x000013bc) form_field_data_wide_pane_g2_ParamLimits

0x1279,	// (0x000013bc) form_field_data_wide_pane_g2

0x1285,	// (0x000013c8) form_field_data_wide_pane_g3_ParamLimits

0x1285,	// (0x000013c8) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0000f794) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0000f794) form_field_data_wide_pane_g

0xd7e3,	// (0x0000d926) grid_touch_3_pane_ParamLimits

0xd7e3,	// (0x0000d926) grid_touch_3_pane

0xdce2,	// (0x0000de25) cell_touch_3_pane_ParamLimits

0xdce2,	// (0x0000de25) cell_touch_3_pane

0x659a,	// (0x000066dd) cell_touch_3_pane_g1

0x659a,	// (0x000066dd) cell_touch_3_pane_g2

0x0001,

0xfb07,	// (0x0000fc4a) cell_touch_3_pane_g

0x07d4,	// (0x00000917) cont_query_data_pane

0x07dc,	// (0x0000091f) cont_query_data_pane_cp1

0x7c1e,	// (0x00007d61) button_value_adjust_pane_cp7

0x7c26,	// (0x00007d69) query_popup_pane_cp3

0x1db4,	// (0x00001ef7) bg_popup_sub_pane_cp22_ParamLimits

0x1dca,	// (0x00001f0d) navi_navi_volume_pane_cp2

0x1de5,	// (0x00001f28) popup_side_volume_key_window_g2

0x1df4,	// (0x00001f37) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x0000f82a) popup_side_volume_key_window_g

0x1e11,	// (0x00001f54) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x0000f831) popup_side_volume_key_window_t

0x229b,	// (0x000023de) popup_side_volume_key_window_ParamLimits

0xbe4f,	// (0x0000bf92) list_double_graphic_pane_g4_ParamLimits

0xbe4f,	// (0x0000bf92) list_double_graphic_pane_g4

0xd638,	// (0x0000d77b) list_single_2heading_msg_pane_ParamLimits

0xd638,	// (0x0000d77b) list_single_2heading_msg_pane

0xdd2a,	// (0x0000de6d) list_single_2heading_msg_pane_g1_ParamLimits

0xdd2a,	// (0x0000de6d) list_single_2heading_msg_pane_g1

0xdd36,	// (0x0000de79) list_single_2heading_msg_pane_g2_ParamLimits

0xdd36,	// (0x0000de79) list_single_2heading_msg_pane_g2

0xdd49,	// (0x0000de8c) list_single_2heading_msg_pane_g3_ParamLimits

0xdd49,	// (0x0000de8c) list_single_2heading_msg_pane_g3

0x7c6d,	// (0x00007db0) list_single_2heading_msg_pane_g4_ParamLimits

0x7c6d,	// (0x00007db0) list_single_2heading_msg_pane_g4

0x0003,

0xfc6d,	// (0x0000fdb0) list_single_2heading_msg_pane_g_ParamLimits

0xfc6d,	// (0x0000fdb0) list_single_2heading_msg_pane_g

0x7c85,	// (0x00007dc8) list_single_2heading_msg_pane_t1_ParamLimits

0x7c85,	// (0x00007dc8) list_single_2heading_msg_pane_t1

0xdd55,	// (0x0000de98) list_single_2heading_msg_pane_t2_ParamLimits

0xdd55,	// (0x0000de98) list_single_2heading_msg_pane_t2

0xddc0,	// (0x0000df03) list_single_2heading_msg_pane_t3_ParamLimits

0xddc0,	// (0x0000df03) list_single_2heading_msg_pane_t3

0x7d15,	// (0x00007e58) list_single_2heading_msg_pane_t4_ParamLimits

0x7d15,	// (0x00007e58) list_single_2heading_msg_pane_t4

0x0003,

0xfc76,	// (0x0000fdb9) list_single_2heading_msg_pane_t_ParamLimits

0xfc76,	// (0x0000fdb9) list_single_2heading_msg_pane_t

0x0318,	// (0x0000045b) title_pane_g4_ParamLimits

0x0318,	// (0x0000045b) title_pane_g4

0x17ad,	// (0x000018f0) title_pane_stacon_g3_ParamLimits

0x17ad,	// (0x000018f0) title_pane_stacon_g3

0x7720,	// (0x00007863) list_single_2graphic_im_pane_g4_ParamLimits

0x7720,	// (0x00007863) list_single_2graphic_im_pane_g4

0x4a1f,	// (0x00004b62) popup_side_volume_key_window_cp

0x54a8,	// (0x000055eb) main_idle_act2_pane_t1

0x3616,	// (0x00003759) toolbar_button_pane_g10

0xbda8,	// (0x0000beeb) popup_toolbar_window_cp1

0x5f9d,	// (0x000060e0) clock_nsta_pane_cp_t1

0x5f9d,	// (0x000060e0) clock_nsta_pane_cp_t2

0x0001,

0xfa7d,	// (0x0000fbc0) clock_nsta_pane_cp_t

0x1dca,	// (0x00001f0d) navi_navi_volume_pane_cp2_ParamLimits

0x1dd9,	// (0x00001f1c) popup_side_volume_key_window_g1_ParamLimits

0x1de5,	// (0x00001f28) popup_side_volume_key_window_g2_ParamLimits

0x1df4,	// (0x00001f37) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x0000f82a) popup_side_volume_key_window_g_ParamLimits

0x6604,	// (0x00006747) fep_hwr_aid_pane

0x66ab,	// (0x000067ee) bg_fep_hwr_top_pane_g4_ParamLimits

0x66cb,	// (0x0000680e) fep_hwr_top_pane_g1_ParamLimits

0x66dd,	// (0x00006820) fep_hwr_top_pane_g2_ParamLimits

0x66ef,	// (0x00006832) fep_hwr_top_pane_g3_ParamLimits

0xfad2,	// (0x0000fc15) fep_hwr_top_pane_g_ParamLimits

0x6704,	// (0x00006847) fep_hwr_top_text_pane_ParamLimits

0x47e2,	// (0x00004925) aid_touch_tab_arrow_arrow_2

0x47eb,	// (0x0000492e) aid_touch_tab_arrow_left_2

0x6618,	// (0x0000675b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x664f,	// (0x00006792) fep_hwr_prediction_pane

0x697c,	// (0x00006abf) fep_vkb_prediction_pane

0xdb26,	// (0x0000dc69) fep_vkb_side_pane_g3_ParamLimits

0xdb26,	// (0x0000dc69) fep_vkb_side_pane_g3

0x6a2c,	// (0x00006b6f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70e2,	// (0x00007225) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70ef,	// (0x00007232) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb7c,	// (0x0000fcbf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d3a,	// (0x00007e7d) fep_hwr_prediction_pane_g1

0x7d44,	// (0x00007e87) fep_hwr_prediction_pane_g2

0x7d4c,	// (0x00007e8f) fep_hwr_prediction_pane_g3

0x7d54,	// (0x00007e97) fep_hwr_prediction_pane_g4

0x0003,

0xfc7f,	// (0x0000fdc2) fep_hwr_prediction_pane_g

0x7d3a,	// (0x00007e7d) fep_vkb_prediction_pane_g1

0x7d5c,	// (0x00007e9f) fep_vkb_prediction_pane_g2

0x7d64,	// (0x00007ea7) fep_vkb_prediction_pane_g3

0x7d6c,	// (0x00007eaf) fep_vkb_prediction_pane_g4

0x0003,

0xfc88,	// (0x0000fdcb) fep_vkb_prediction_pane_g

0x4d5d,	// (0x00004ea0) slider_set_pane_g3

0x4d71,	// (0x00004eb4) slider_set_pane_g4

0x4d89,	// (0x00004ecc) slider_set_pane_g5

0x4d5d,	// (0x00004ea0) slider_set_pane_g6

0x4d9f,	// (0x00004ee2) slider_set_pane_g7

0x4f59,	// (0x0000509c) slider_form_pane_g3

0x4f62,	// (0x000050a5) slider_form_pane_g4

0x4f6a,	// (0x000050ad) slider_form_pane_g5

0x4f59,	// (0x0000509c) slider_form_pane_g6

0xd5ee,	// (0x0000d731) slider_form_pane_g7

0x57b6,	// (0x000058f9) slider_set_pane_vc_g3

0x57bf,	// (0x00005902) slider_set_pane_vc_g4

0x57c8,	// (0x0000590b) slider_set_pane_vc_g5

0x57b6,	// (0x000058f9) slider_set_pane_vc_g6

0x57d1,	// (0x00005914) slider_set_pane_vc_g7

0x5c5b,	// (0x00005d9e) slider_form_pane_vc_g1

0x5c64,	// (0x00005da7) slider_form_pane_vc_g2

0x5c6d,	// (0x00005db0) slider_form_pane_vc_g3

0x5c5b,	// (0x00005d9e) slider_form_pane_vc_g4

0x5c76,	// (0x00005db9) slider_form_pane_vc_g5

0x0004,

0xfa4f,	// (0x0000fb92) slider_form_pane_vc_g

0xf4f5,	// (0x0000f638) main_idle_act3_pane

0x7d74,	// (0x00007eb7) ai3_links_pane

0xde2e,	// (0x0000df71) popup_ai3_data_window_ParamLimits

0xde2e,	// (0x0000df71) popup_ai3_data_window

0xf4f5,	// (0x0000f638) grid_ai3_links_pane

0xde48,	// (0x0000df8b) cell_ai3_links_pane_ParamLimits

0xde48,	// (0x0000df8b) cell_ai3_links_pane

0x7daf,	// (0x00007ef2) bg_popup_sub_pane_cp11

0x7dbc,	// (0x00007eff) cell_ai3_links_pane_g1

0xf4f5,	// (0x0000f638) bg_popup_sub_pane_cp12

0x7de1,	// (0x00007f24) heading_ai3_data_pane

0x7de9,	// (0x00007f2c) list_ai3_gene_pane

0x7df5,	// (0x00007f38) popup_ai3_data_window_g1

0x7dfd,	// (0x00007f40) heading_ai3_data_pane_g1

0x7e05,	// (0x00007f48) heading_ai3_data_pane_t1

0x7e13,	// (0x00007f56) list_double_ai3_gene_pane_ParamLimits

0x7e13,	// (0x00007f56) list_double_ai3_gene_pane

0x7e20,	// (0x00007f63) list_single_ai3_gene_pane_ParamLimits

0x7e20,	// (0x00007f63) list_single_ai3_gene_pane

0x655f,	// (0x000066a2) list_highlight_pane_cp7_ParamLimits

0x655f,	// (0x000066a2) list_highlight_pane_cp7

0x7e2d,	// (0x00007f70) list_single_a13_gene_pane_t1_ParamLimits

0x7e2d,	// (0x00007f70) list_single_a13_gene_pane_t1

0x7e44,	// (0x00007f87) list_single_ai3_gene_pane_g1

0x7e4d,	// (0x00007f90) list_single_ai3_gene_pane_g2

0x0001,

0xfc91,	// (0x0000fdd4) list_single_ai3_gene_pane_g

0x7e55,	// (0x00007f98) list_double_ai3_gene_pane_g1_ParamLimits

0x7e55,	// (0x00007f98) list_double_ai3_gene_pane_g1

0x7e61,	// (0x00007fa4) list_double_ai3_gene_pane_t1_ParamLimits

0x7e61,	// (0x00007fa4) list_double_ai3_gene_pane_t1

0x7e7d,	// (0x00007fc0) list_double_ai3_gene_pane_t2_ParamLimits

0x7e7d,	// (0x00007fc0) list_double_ai3_gene_pane_t2

0x7e93,	// (0x00007fd6) list_double_ai3_gene_pane_t3_ParamLimits

0x7e93,	// (0x00007fd6) list_double_ai3_gene_pane_t3

0x0002,

0xfc96,	// (0x0000fdd9) list_double_ai3_gene_pane_t_ParamLimits

0xfc96,	// (0x0000fdd9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c37,	// (0x00007d7a) aid_size_min_col_2

0xdd14,	// (0x0000de57) aid_size_min_msg_ParamLimits

0xdd14,	// (0x0000de57) aid_size_min_msg

0xdb3a,	// (0x0000dc7d) fep_vkb_top_text_pane_g2_ParamLimits

0xdb3a,	// (0x0000dc7d) fep_vkb_top_text_pane_g2

0x0001,

0xfb02,	// (0x0000fc45) fep_vkb_top_text_pane_g_ParamLimits

0xfb02,	// (0x0000fc45) fep_vkb_top_text_pane_g

0xf4f5,	// (0x0000f638) main_hc_apps_shell_pane

0x7eb0,	// (0x00007ff3) grid_hc_apps_pane_ParamLimits

0x7eb0,	// (0x00007ff3) grid_hc_apps_pane

0x7ec2,	// (0x00008005) list_hc_apps_pane

0x7eca,	// (0x0000800d) scroll_pane_cp37_ParamLimits

0x7eca,	// (0x0000800d) scroll_pane_cp37

0xde62,	// (0x0000dfa5) cell_hc_apps_pane_ParamLimits

0xde62,	// (0x0000dfa5) cell_hc_apps_pane

0xdf20,	// (0x0000e063) cell_hc_apps_pane_g1_ParamLimits

0xdf20,	// (0x0000e063) cell_hc_apps_pane_g1

0x7fb4,	// (0x000080f7) cell_hc_apps_pane_g2_ParamLimits

0x7fb4,	// (0x000080f7) cell_hc_apps_pane_g2

0x7fd0,	// (0x00008113) cell_hc_apps_pane_g3_ParamLimits

0x7fd0,	// (0x00008113) cell_hc_apps_pane_g3

0x0002,

0xfc9d,	// (0x0000fde0) cell_hc_apps_pane_g_ParamLimits

0xfc9d,	// (0x0000fde0) cell_hc_apps_pane_g

0xdf4c,	// (0x0000e08f) cell_hc_apps_pane_t1_ParamLimits

0xdf4c,	// (0x0000e08f) cell_hc_apps_pane_t1

0x06f8,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x06f8,	// (0x0000083b) grid_highlight_pane_cp10

0xdf8a,	// (0x0000e0cd) list_single_hc_apps_pane_ParamLimits

0xdf8a,	// (0x0000e0cd) list_single_hc_apps_pane

0xdfb7,	// (0x0000e0fa) list_single_hc_apps_pane_g1

0xdfd0,	// (0x0000e113) list_single_hc_apps_pane_g2

0x0001,

0xfca4,	// (0x0000fde7) list_single_hc_apps_pane_g

0xdfe9,	// (0x0000e12c) list_single_hc_apps_pane_g2_copy1

0x80dc,	// (0x0000821f) list_single_hc_apps_pane_t1

0x03c4,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x040e,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x0427,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0441,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0000f67c) setting_slider_pane_t_ParamLimits

0x0459,	// (0x0000059c) slider_set_pane_ParamLimits

0x28e4,	// (0x00002a27) control_pane_g5_ParamLimits

0x28e4,	// (0x00002a27) control_pane_g5

0x4d44,	// (0x00004e87) slider_set_pane_g1_ParamLimits

0x4d51,	// (0x00004e94) slider_set_pane_g2_ParamLimits

0x4d5d,	// (0x00004ea0) slider_set_pane_g3_ParamLimits

0x4d71,	// (0x00004eb4) slider_set_pane_g4_ParamLimits

0x4d89,	// (0x00004ecc) slider_set_pane_g5_ParamLimits

0x4d5d,	// (0x00004ea0) slider_set_pane_g6_ParamLimits

0x4d9f,	// (0x00004ee2) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0000fa71) slider_set_pane_g_ParamLimits

0x2387,	// (0x000024ca) navi_icon_text_pane_ParamLimits

0xce0d,	// (0x0000cf50) aid_fill_nsta_2_ParamLimits

0xce44,	// (0x0000cf87) aid_touch_tab_arrow_left_ParamLimits

0xce5a,	// (0x0000cf9d) aid_touch_tab_arrow_right_ParamLimits

0xcef5,	// (0x0000d038) clock_nsta_pane_ParamLimits

0x47c4,	// (0x00004907) navi_icon_pane_g1_ParamLimits

0x47d0,	// (0x00004913) navi_text_pane_t1_ParamLimits

0x60a9,	// (0x000061ec) navi_icon_text_pane_g1_ParamLimits

0x60b5,	// (0x000061f8) navi_icon_text_pane_t1_ParamLimits

0xdfb7,	// (0x0000e0fa) list_single_hc_apps_pane_g1_ParamLimits

0xdfd0,	// (0x0000e113) list_single_hc_apps_pane_g2_ParamLimits

0xfca4,	// (0x0000fde7) list_single_hc_apps_pane_g_ParamLimits

0xdfe9,	// (0x0000e12c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x80dc,	// (0x0000821f) list_single_hc_apps_pane_t1_ParamLimits

0xb94e,	// (0x0000ba91) popup_toolbar2_fixed_window_ParamLimits

0xb94e,	// (0x0000ba91) popup_toolbar2_fixed_window

0xcd72,	// (0x0000ceb5) popup_toolbar2_float_window

0xf4f5,	// (0x0000f638) bg_popup_sub_pane_cp27

0x810a,	// (0x0000824d) grid_toolbar2_float_pane

0xf4f5,	// (0x0000f638) bg_popup_sub_pane_cp26

0x810a,	// (0x0000824d) grid_toolbar2_fixed_pane

0xe005,	// (0x0000e148) cell_toolbar2_fixed_pane_ParamLimits

0xe005,	// (0x0000e148) cell_toolbar2_fixed_pane

0xe01f,	// (0x0000e162) cell_toolbar2_fixed_pane_g1

0x812b,	// (0x0000826e) toolbar2_fixed_button_pane

0x35ce,	// (0x00003711) toolbar2_fixed_button_pane_g1

0x35d6,	// (0x00003719) toolbar2_fixed_button_pane_g2

0x35de,	// (0x00003721) toolbar2_fixed_button_pane_g3

0x35e6,	// (0x00003729) toolbar2_fixed_button_pane_g4

0x35ee,	// (0x00003731) toolbar2_fixed_button_pane_g5

0x35f6,	// (0x00003739) toolbar2_fixed_button_pane_g6

0x35fe,	// (0x00003741) toolbar2_fixed_button_pane_g7

0x3606,	// (0x00003749) toolbar2_fixed_button_pane_g8

0x360e,	// (0x00003751) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0000f973) toolbar2_fixed_button_pane_g

0x8133,	// (0x00008276) cell_toolbar2_float_pane_ParamLimits

0x8133,	// (0x00008276) cell_toolbar2_float_pane

0x8144,	// (0x00008287) cell_toolbar2_float_pane_g1

0x812b,	// (0x0000826e) toolbar2_fixed_button_pane_cp

0xda14,	// (0x0000db57) fep_vkb_accented_list_pane_ParamLimits

0xda14,	// (0x0000db57) fep_vkb_accented_list_pane

0x6d73,	// (0x00006eb6) bg_popup_fep_shadow_pane_g9

0x2504,	// (0x00002647) bg_popup_fep_shadow_pane_cp3

0x153d,	// (0x00001680) list_accented_list_pane

0x814d,	// (0x00008290) list_single_accented_list_pane_ParamLimits

0x814d,	// (0x00008290) list_single_accented_list_pane

0x2504,	// (0x00002647) list_highlight_pane_cp10

0x815e,	// (0x000082a1) list_single_accented_list_pane_t1

0xcc9c,	// (0x0000cddf) popup_slider_window_ParamLimits

0xcc9c,	// (0x0000cddf) popup_slider_window

0x7c2e,	// (0x00007d71) aid_indentation_list_msg

0xe116,	// (0x0000e259) bg_popup_window_pane_cp19

0x828a,	// (0x000083cd) popup_slider_window_g1

0x82a6,	// (0x000083e9) popup_slider_window_g2

0x82c2,	// (0x00008405) popup_slider_window_g3

0x0005,

0xfca9,	// (0x0000fdec) popup_slider_window_g

0x8328,	// (0x0000846b) popup_slider_window_t1

0x839c,	// (0x000084df) small_volume_slider_vertical_pane

0x659a,	// (0x000066dd) small_volume_slider_vertical_pane_g1

0x659a,	// (0x000066dd) small_volume_slider_vertical_pane_g2

0x83b8,	// (0x000084fb) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbb,	// (0x0000fdfe) small_volume_slider_vertical_pane_g

0xb8bc,	// (0x0000b9ff) area_side_right_pane_ParamLimits

0xb8bc,	// (0x0000b9ff) area_side_right_pane

0xe1ce,	// (0x0000e311) aid_size_side_button_ParamLimits

0xe1ce,	// (0x0000e311) aid_size_side_button

0xe1e7,	// (0x0000e32a) grid_sctrl_middle_pane_ParamLimits

0xe1e7,	// (0x0000e32a) grid_sctrl_middle_pane

0x83f4,	// (0x00008537) sctrl_sk_bottom_pane

0x8405,	// (0x00008548) sctrl_sk_top_pane

0x8417,	// (0x0000855a) aid_touch_sctrl_top

0x06f8,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x06f8,	// (0x0000083b) bg_sctrl_sk_pane

0x8424,	// (0x00008567) sctrl_sk_top_pane_g1

0x8431,	// (0x00008574) sctrl_sk_top_pane_t1

0x8417,	// (0x0000855a) aid_touch_sctrl_bottom

0x06f8,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x06f8,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x844c,	// (0x0000858f) sctrl_sk_bottom_pane_g1

0x8431,	// (0x00008574) sctrl_sk_bottom_pane_t1

0xe201,	// (0x0000e344) cell_sctrl_middle_pane_ParamLimits

0xe201,	// (0x0000e344) cell_sctrl_middle_pane

0xe212,	// (0x0000e355) aid_touch_sctrl_middle_ParamLimits

0xe212,	// (0x0000e355) aid_touch_sctrl_middle

0xe21f,	// (0x0000e362) bg_sctrl_middle_pane_ParamLimits

0xe21f,	// (0x0000e362) bg_sctrl_middle_pane

0x8511,	// (0x00008654) cell_sctrl_middle_pane_g1_ParamLimits

0x8511,	// (0x00008654) cell_sctrl_middle_pane_g1

0xe22d,	// (0x0000e370) cell_sctrl_middle_pane_g2_ParamLimits

0xe22d,	// (0x0000e370) cell_sctrl_middle_pane_g2

0x0001,

0xfcc7,	// (0x0000fe0a) cell_sctrl_middle_pane_g_ParamLimits

0xfcc7,	// (0x0000fe0a) cell_sctrl_middle_pane_g

0x35ce,	// (0x00003711) bg_sctrl_middle_pane_g1

0x35d6,	// (0x00003719) bg_sctrl_middle_pane_g2

0x35de,	// (0x00003721) bg_sctrl_middle_pane_g3

0x35e6,	// (0x00003729) bg_sctrl_middle_pane_g4

0x35ee,	// (0x00003731) bg_sctrl_middle_pane_g5

0x35f6,	// (0x00003739) bg_sctrl_middle_pane_g6

0x35fe,	// (0x00003741) bg_sctrl_middle_pane_g7

0x3606,	// (0x00003749) bg_sctrl_middle_pane_g8

0x0007,

0xfccc,	// (0x0000fe0f) bg_sctrl_middle_pane_g

0x360e,	// (0x00003751) bg_sctrl_middle_pane_g8_copy1

0x35ce,	// (0x00003711) bg_sctrl_sk_pane_g1

0x35d6,	// (0x00003719) bg_sctrl_sk_pane_g2

0x35de,	// (0x00003721) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0000f973) bg_sctrl_sk_pane_g

0x0c2b,	// (0x00000d6e) aid_size_touch_scroll_bar

0x35e6,	// (0x00003729) bg_sctrl_sk_pane_g4

0x35ee,	// (0x00003731) bg_sctrl_sk_pane_g5

0x35f6,	// (0x00003739) bg_sctrl_sk_pane_g6

0x35fe,	// (0x00003741) bg_sctrl_sk_pane_g7

0x3606,	// (0x00003749) bg_sctrl_sk_pane_g8

0x360e,	// (0x00003751) bg_sctrl_sk_pane_g9

0x2b35,	// (0x00002c78) popup_fep_china_hwr2_fs_candidate_window

0xc7b0,	// (0x0000c8f3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7b0,	// (0x0000c8f3) popup_fep_china_hwr2_fs_control_window

0x6a2c,	// (0x00006b6f) sctrl_sk_top_pane_g2

0x0001,

0xfcc2,	// (0x0000fe05) sctrl_sk_top_pane_g

0xe239,	// (0x0000e37c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe239,	// (0x0000e37c) aid_fep_china_hwr2_fs_cell

0xe24d,	// (0x0000e390) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe24d,	// (0x0000e390) bg_popup_fep_shadow_pane_cp4

0xe264,	// (0x0000e3a7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe264,	// (0x0000e3a7) bg_popup_fep_shadow_pane_cp5

0xe276,	// (0x0000e3b9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe276,	// (0x0000e3b9) popup_fep_china_hwr2_fs_control_bar_grid

0xe28a,	// (0x0000e3cd) popup_fep_china_hwr2_fs_control_funtion_grid

0x84e5,	// (0x00008628) aid_fep_china_hwr2_fs_candi_cell

0xf4f5,	// (0x0000f638) bg_popup_fep_shadow_pane_cp6

0x84ef,	// (0x00008632) popup_fep_china_hwr2_fs_candidate_grid

0xe292,	// (0x0000e3d5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe292,	// (0x0000e3d5) cell_fep_china_hwr2_fs_funtion_grid

0x659a,	// (0x000066dd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8511,	// (0x00008654) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8511,	// (0x00008654) cell_fep_china_hwr2_fs_funtion_grid_g1

0x851f,	// (0x00008662) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x851f,	// (0x00008662) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcdd,	// (0x0000fe20) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcdd,	// (0x0000fe20) cell_fep_china_hwr2_fs_funtion_grid_g

0xe2aa,	// (0x0000e3ed) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe2aa,	// (0x0000e3ed) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe2bf,	// (0x0000e402) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe2bf,	// (0x0000e402) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce2,	// (0x0000fe25) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce2,	// (0x0000fe25) cell_fep_china_hwr2_fs_funtion_grid_t

0x8566,	// (0x000086a9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x856e,	// (0x000086b1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8576,	// (0x000086b9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce7,	// (0x0000fe2a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x857e,	// (0x000086c1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x857e,	// (0x000086c1) cell_fep_china_hwr2_fs_candidate_grid

0x8597,	// (0x000086da) popup_fep_china_hwr2_fs_candidate_grid_g20

0x859f,	// (0x000086e2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x659a,	// (0x000066dd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x659a,	// (0x000066dd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb07,	// (0x0000fc4a) cell_fep_china_hwr2_fs_candidate_grid_g

0x85a7,	// (0x000086ea) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3136,	// (0x00003279) clock_nsta_pane_cp_24_ParamLimits

0x3136,	// (0x00003279) clock_nsta_pane_cp_24

0x31b4,	// (0x000032f7) indicator_nsta_pane_cp_24_ParamLimits

0x31b4,	// (0x000032f7) indicator_nsta_pane_cp_24

0x462f,	// (0x00004772) heading_pane_g1

0x0001,

0xf895,	// (0x0000f9d8) heading_pane_g

0x5239,	// (0x0000537c) grid_sct_catagory_button_pane

0x5269,	// (0x000053ac) scroll_pane_cp5_ParamLimits

0x6148,	// (0x0000628b) button_value_adjust_pane_cp5_ParamLimits

0x6148,	// (0x0000628b) button_value_adjust_pane_cp5

0x6244,	// (0x00006387) form2_midp_time_pane_ParamLimits

0x85b5,	// (0x000086f8) cell_sct_catagory_button_pane_ParamLimits

0x85b5,	// (0x000086f8) cell_sct_catagory_button_pane

0x655f,	// (0x000066a2) bg_button_pane_cp01_ParamLimits

0x655f,	// (0x000066a2) bg_button_pane_cp01

0x659a,	// (0x000066dd) cell_sct_catagory_button_pane_g1

0xcd15,	// (0x0000ce58) popup_tb_extension_window

0xe2db,	// (0x0000e41e) aid_size_cell_ext_ParamLimits

0xe2db,	// (0x0000e41e) aid_size_cell_ext

0x0a6d,	// (0x00000bb0) bg_tb_trans_pane_cp1_ParamLimits

0x0a6d,	// (0x00000bb0) bg_tb_trans_pane_cp1

0xe301,	// (0x0000e444) grid_tb_ext_pane_ParamLimits

0xe301,	// (0x0000e444) grid_tb_ext_pane

0xe33c,	// (0x0000e47f) cell_tb_ext_pane_ParamLimits

0xe33c,	// (0x0000e47f) cell_tb_ext_pane

0xe364,	// (0x0000e4a7) cell_tb_ext_pane_g1_ParamLimits

0xe364,	// (0x0000e4a7) cell_tb_ext_pane_g1

0x8649,	// (0x0000878c) cell_tb_ext_pane_t1

0x06f8,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x06f8,	// (0x0000083b) list_highlight_pane_cp11

0xb963,	// (0x0000baa6) popup_uni_indicator_window_ParamLimits

0xb963,	// (0x0000baa6) popup_uni_indicator_window

0x1253,	// (0x00001396) bg_popup_sub_pane_cp14

0x8664,	// (0x000087a7) list_uniindi_pane

0x8670,	// (0x000087b3) uniindi_top_pane

0x06f8,	// (0x0000083b) bg_uniindi_top_pane

0x868f,	// (0x000087d2) uniindi_top_pane_g1

0x86a5,	// (0x000087e8) uniindi_top_pane_g2

0x0003,

0xfcee,	// (0x0000fe31) uniindi_top_pane_g

0x86cf,	// (0x00008812) uniindi_top_pane_t1

0x86f9,	// (0x0000883c) list_single_uniindi_pane_ParamLimits

0x86f9,	// (0x0000883c) list_single_uniindi_pane

0x659a,	// (0x000066dd) bg_uniindi_top_pane_g1

0x870c,	// (0x0000884f) list_single_uniindi_pane_g1

0x871f,	// (0x00008862) list_single_uniindi_pane_t1

0xf4f5,	// (0x0000f638) control_bg_pane

0x8744,	// (0x00008887) bg_sctrl_sk_pane_cp1

0x874d,	// (0x00008890) bg_sctrl_sk_pane_cp2

0x8756,	// (0x00008899) control_bg_pane_g1

0x875f,	// (0x000088a2) control_bg_pane_g2

0x0001,

0xfcf7,	// (0x0000fe3a) control_bg_pane_g

0x5f41,	// (0x00006084) cell_indicator_nsta_pane_g1_ParamLimits

0xd820,	// (0x0000d963) cell_indicator_nsta_pane_g2_ParamLimits

0xfa6b,	// (0x0000fbae) cell_indicator_nsta_pane_g_ParamLimits

0x62cc,	// (0x0000640f) form2_midp_time_pane_t1_ParamLimits

0x65f6,	// (0x00006739) main_idle_act4_pane_ParamLimits

0x65f6,	// (0x00006739) main_idle_act4_pane

0xcd15,	// (0x0000ce58) popup_tb_extension_window_ParamLimits

0xe323,	// (0x0000e466) tb_ext_find_pane_ParamLimits

0xe323,	// (0x0000e466) tb_ext_find_pane

0x8768,	// (0x000088ab) ai_gene_pane_1_cp1

0x264b,	// (0x0000278e) ai_gene_pane_2_cp1

0x8770,	// (0x000088b3) list_single_idle_plugin_calendar_pane

0x8779,	// (0x000088bc) list_single_idle_plugin_notification_pane

0x8782,	// (0x000088c5) list_single_idle_plugin_player_pane

0xe381,	// (0x0000e4c4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe381,	// (0x0000e4c4) list_single_idle_plugin_shortcut_pane

0xe3a9,	// (0x0000e4ec) main_idle_act4_pane_t1

0xe3bf,	// (0x0000e502) main_idle_act4_pane_t2

0x0001,

0xfcfc,	// (0x0000fe3f) main_idle_act4_pane_t

0xe3d5,	// (0x0000e518) middle_sk_idle_act4_pane_ParamLimits

0xe3d5,	// (0x0000e518) middle_sk_idle_act4_pane

0xe3f1,	// (0x0000e534) popup_clock_digital_analogue_window_cp2

0xe419,	// (0x0000e55c) shortcut_wheel_idle_act4_pane_ParamLimits

0xe419,	// (0x0000e55c) shortcut_wheel_idle_act4_pane

0x659a,	// (0x000066dd) shortcut_wheel_idle_act4_pane_g1

0x659a,	// (0x000066dd) shortcut_wheel_idle_act4_pane_g2

0x659a,	// (0x000066dd) shortcut_wheel_idle_act4_pane_g3

0x659a,	// (0x000066dd) shortcut_wheel_idle_act4_pane_g4

0x659a,	// (0x000066dd) shortcut_wheel_idle_act4_pane_g5

0x8815,	// (0x00008958) shortcut_wheel_idle_act4_pane_g6

0x881d,	// (0x00008960) shortcut_wheel_idle_act4_pane_g7

0x8825,	// (0x00008968) shortcut_wheel_idle_act4_pane_g8

0x882d,	// (0x00008970) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd01,	// (0x0000fe44) shortcut_wheel_idle_act4_pane_g

0x66ab,	// (0x000067ee) middle_sk_idle_act4_pane_g1_ParamLimits

0x66ab,	// (0x000067ee) middle_sk_idle_act4_pane_g1

0xe496,	// (0x0000e5d9) middle_sk_idle_act4_pane_g2_ParamLimits

0xe496,	// (0x0000e5d9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd24,	// (0x0000fe67) middle_sk_idle_act4_pane_g_ParamLimits

0xfd24,	// (0x0000fe67) middle_sk_idle_act4_pane_g

0xe4ae,	// (0x0000e5f1) middle_sk_idle_act4_pane_t1_ParamLimits

0xe4ae,	// (0x0000e5f1) middle_sk_idle_act4_pane_t1

0xe4dd,	// (0x0000e620) grid_ai_shortcut_pane_ParamLimits

0xe4dd,	// (0x0000e620) grid_ai_shortcut_pane

0xe4fa,	// (0x0000e63d) list_highlight_pane_cp16_ParamLimits

0xe4fa,	// (0x0000e63d) list_highlight_pane_cp16

0xe507,	// (0x0000e64a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe507,	// (0x0000e64a) list_single_idle_plugin_shortcut_pane_g1

0xe513,	// (0x0000e656) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe513,	// (0x0000e656) list_single_idle_plugin_shortcut_pane_g2

0xe52f,	// (0x0000e672) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe52f,	// (0x0000e672) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd29,	// (0x0000fe6c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd29,	// (0x0000fe6c) list_single_idle_plugin_shortcut_pane_g

0xe544,	// (0x0000e687) cell_ai_shortcut_pane_ParamLimits

0xe544,	// (0x0000e687) cell_ai_shortcut_pane

0xe55a,	// (0x0000e69d) cell_ai_shortcut_pane_g1_ParamLimits

0xe55a,	// (0x0000e69d) cell_ai_shortcut_pane_g1

0x8768,	// (0x000088ab) ai_gene_pane_1_cp2

0x895d,	// (0x00008aa0) ai_gene_pane_2_cp2

0x8965,	// (0x00008aa8) list_highlight_pane_cp15

0x896e,	// (0x00008ab1) list_single_idle_plugin_calendar_pane_g1

0x8965,	// (0x00008aa8) list_highlight_pane_cp17

0x8976,	// (0x00008ab9) list_single_idle_plugin_calendar_pane_g1_copy1

0x897e,	// (0x00008ac1) list_single_idle_plugin_player_pane_g1

0x554a,	// (0x0000568d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd30,	// (0x0000fe73) list_single_idle_plugin_player_pane_g

0x8986,	// (0x00008ac9) list_single_idle_plugin_player_pane_t1

0x8994,	// (0x00008ad7) list_single_idle_plugin_player_pane_t2

0x89a2,	// (0x00008ae5) list_single_idle_plugin_player_pane_t3

0x89b0,	// (0x00008af3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd35,	// (0x0000fe78) list_single_idle_plugin_player_pane_t

0x89be,	// (0x00008b01) wait_bar_pane_cp15

0x89c6,	// (0x00008b09) grid_ai_notification_pane

0x554a,	// (0x0000568d) list_single_idle_plugin_notification_pane_g1

0xe57c,	// (0x0000e6bf) cell_ai_notification_pane_ParamLimits

0xe57c,	// (0x0000e6bf) cell_ai_notification_pane

0x89dc,	// (0x00008b1f) cell_ai_notification_pane_g1

0x89e4,	// (0x00008b27) cell_ai_notification_pane_t1

0xe589,	// (0x0000e6cc) tb_ext_find_button_pane

0xe591,	// (0x0000e6d4) tb_ext_find_pane_g1

0xe599,	// (0x0000e6dc) tb_ext_find_pane_t1

0x1c31,	// (0x00001d74) tb_ext_find_button_pane_g1

0x8a10,	// (0x00008b53) tb_ext_find_button_pane_g2

0x0001,

0xfd3e,	// (0x0000fe81) tb_ext_find_button_pane_g

0xe3a9,	// (0x0000e4ec) main_idle_act4_pane_t1_ParamLimits

0xe3bf,	// (0x0000e502) main_idle_act4_pane_t2_ParamLimits

0xfcfc,	// (0x0000fe3f) main_idle_act4_pane_t_ParamLimits

0xe3f1,	// (0x0000e534) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe409,	// (0x0000e54c) sat_plugin_idle_act4_pane_ParamLimits

0xe409,	// (0x0000e54c) sat_plugin_idle_act4_pane

0xe5a7,	// (0x0000e6ea) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe5a7,	// (0x0000e6ea) sat_plugin_idle_act4_pane_t1

0xe5bf,	// (0x0000e702) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5bf,	// (0x0000e702) sat_plugin_idle_act4_pane_t2

0xe5d7,	// (0x0000e71a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5d7,	// (0x0000e71a) sat_plugin_idle_act4_pane_t3

0xe5ef,	// (0x0000e732) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5ef,	// (0x0000e732) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd43,	// (0x0000fe86) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd43,	// (0x0000fe86) sat_plugin_idle_act4_pane_t

0x015a,	// (0x0000029d) popup_battery_window_ParamLimits

0x015a,	// (0x0000029d) popup_battery_window

0x06f8,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x06f8,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8a65,	// (0x00008ba8) popup_battery_window_g1_ParamLimits

0x8a65,	// (0x00008ba8) popup_battery_window_g1

0x8a71,	// (0x00008bb4) popup_battery_window_t1_ParamLimits

0x8a71,	// (0x00008bb4) popup_battery_window_t1

0x8a83,	// (0x00008bc6) popup_battery_window_t2_ParamLimits

0x8a83,	// (0x00008bc6) popup_battery_window_t2

0x0001,

0xfd4c,	// (0x0000fe8f) popup_battery_window_t_ParamLimits

0xfd4c,	// (0x0000fe8f) popup_battery_window_t

0xc44b,	// (0x0000c58e) midp_canvas_pane_ParamLimits

0xc4a8,	// (0x0000c5eb) midp_keypad_pane_ParamLimits

0xc4a8,	// (0x0000c5eb) midp_keypad_pane

0x2a53,	// (0x00002b96) main_midp_pane_ParamLimits

0x5fbb,	// (0x000060fe) signal_pane_g2_cp_ParamLimits

0xe607,	// (0x0000e74a) aid_size_cell_midp_keypad_ParamLimits

0xe607,	// (0x0000e74a) aid_size_cell_midp_keypad

0xe625,	// (0x0000e768) midp_keyp_game_grid_pane_ParamLimits

0xe625,	// (0x0000e768) midp_keyp_game_grid_pane

0xe64c,	// (0x0000e78f) midp_keyp_rocker_pane_ParamLimits

0xe64c,	// (0x0000e78f) midp_keyp_rocker_pane

0xe69d,	// (0x0000e7e0) midp_keyp_sk_left_pane_ParamLimits

0xe69d,	// (0x0000e7e0) midp_keyp_sk_left_pane

0xe6f1,	// (0x0000e834) midp_keyp_sk_right_pane_ParamLimits

0xe6f1,	// (0x0000e834) midp_keyp_sk_right_pane

0xf4f5,	// (0x0000f638) bg_button_pane_cp03

0xe745,	// (0x0000e888) midp_keyp_sk_left_pane_g1

0xf4f5,	// (0x0000f638) bg_button_pane_cp04

0xe745,	// (0x0000e888) midp_keyp_sk_right_pane_g1

0x659a,	// (0x000066dd) midp_keyp_rocker_pane_g1

0xe74e,	// (0x0000e891) keyp_game_cell_pane_ParamLimits

0xe74e,	// (0x0000e891) keyp_game_cell_pane

0xf4f5,	// (0x0000f638) bg_button_pane_cp02

0xe772,	// (0x0000e8b5) keyp_game_cell_pane_g1

0xb8fe,	// (0x0000ba41) popup_fep_vkb2_window_ParamLimits

0xb8fe,	// (0x0000ba41) popup_fep_vkb2_window

0xe77b,	// (0x0000e8be) aid_size_cell_vkb2_ParamLimits

0xe77b,	// (0x0000e8be) aid_size_cell_vkb2

0xe7a7,	// (0x0000e8ea) popup_fep_vkb2_window_g1_ParamLimits

0xe7a7,	// (0x0000e8ea) popup_fep_vkb2_window_g1

0xe7f7,	// (0x0000e93a) vkb2_area_bottom_pane_ParamLimits

0xe7f7,	// (0x0000e93a) vkb2_area_bottom_pane

0xe84b,	// (0x0000e98e) vkb2_area_keypad_pane_ParamLimits

0xe84b,	// (0x0000e98e) vkb2_area_keypad_pane

0xe893,	// (0x0000e9d6) vkb2_area_top_pane_ParamLimits

0xe893,	// (0x0000e9d6) vkb2_area_top_pane

0xe91f,	// (0x0000ea62) vkb2_top_entry_pane_ParamLimits

0xe91f,	// (0x0000ea62) vkb2_top_entry_pane

0xe94c,	// (0x0000ea8f) vkb2_top_grid_left_pane_ParamLimits

0xe94c,	// (0x0000ea8f) vkb2_top_grid_left_pane

0xe96d,	// (0x0000eab0) vkb2_top_grid_right_pane_ParamLimits

0xe96d,	// (0x0000eab0) vkb2_top_grid_right_pane

0x8e03,	// (0x00008f46) vkb2_cell_keypad_pane_ParamLimits

0x8e03,	// (0x00008f46) vkb2_cell_keypad_pane

0xe9b5,	// (0x0000eaf8) vkb2_area_bottom_grid_pane_ParamLimits

0xe9b5,	// (0x0000eaf8) vkb2_area_bottom_grid_pane

0xe9df,	// (0x0000eb22) vkb2_area_bottom_pane_g1_ParamLimits

0xe9df,	// (0x0000eb22) vkb2_area_bottom_pane_g1

0xea05,	// (0x0000eb48) vkb2_area_bottom_pane_g2_ParamLimits

0xea05,	// (0x0000eb48) vkb2_area_bottom_pane_g2

0xea36,	// (0x0000eb79) vkb2_area_bottom_pane_g3_ParamLimits

0xea36,	// (0x0000eb79) vkb2_area_bottom_pane_g3

0x0002,

0xfd51,	// (0x0000fe94) vkb2_area_bottom_pane_g_ParamLimits

0xfd51,	// (0x0000fe94) vkb2_area_bottom_pane_g

0x8fad,	// (0x000090f0) vkb2_top_cell_left_pane_ParamLimits

0x8fad,	// (0x000090f0) vkb2_top_cell_left_pane

0xeaa0,	// (0x0000ebe3) vkb2_top_entry_pane_g1_ParamLimits

0xeaa0,	// (0x0000ebe3) vkb2_top_entry_pane_g1

0xeaae,	// (0x0000ebf1) vkb2_top_entry_pane_t1_ParamLimits

0xeaae,	// (0x0000ebf1) vkb2_top_entry_pane_t1

0x9015,	// (0x00009158) vkb2_top_entry_pane_t2_ParamLimits

0x9015,	// (0x00009158) vkb2_top_entry_pane_t2

0x9047,	// (0x0000918a) vkb2_top_entry_pane_t3_ParamLimits

0x9047,	// (0x0000918a) vkb2_top_entry_pane_t3

0x0002,

0xfd58,	// (0x0000fe9b) vkb2_top_entry_pane_t_ParamLimits

0xfd58,	// (0x0000fe9b) vkb2_top_entry_pane_t

0xeae7,	// (0x0000ec2a) vkb2_top_grid_right_pane_g1_ParamLimits

0xeae7,	// (0x0000ec2a) vkb2_top_grid_right_pane_g1

0x90ae,	// (0x000091f1) vkb2_top_grid_right_pane_g2_ParamLimits

0x90ae,	// (0x000091f1) vkb2_top_grid_right_pane_g2

0x90c6,	// (0x00009209) vkb2_top_grid_right_pane_g3_ParamLimits

0x90c6,	// (0x00009209) vkb2_top_grid_right_pane_g3

0xeafd,	// (0x0000ec40) vkb2_top_grid_right_pane_g4_ParamLimits

0xeafd,	// (0x0000ec40) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5f,	// (0x0000fea2) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5f,	// (0x0000fea2) vkb2_top_grid_right_pane_g

0x90f4,	// (0x00009237) vkb2_top_cell_left_pane_g1

0x910b,	// (0x0000924e) vkb2_cell_keypad_pane_g1_ParamLimits

0x910b,	// (0x0000924e) vkb2_cell_keypad_pane_g1

0x9119,	// (0x0000925c) vkb2_cell_keypad_pane_t1_ParamLimits

0x9119,	// (0x0000925c) vkb2_cell_keypad_pane_t1

0x9130,	// (0x00009273) vkb2_cell_bottom_grid_pane_ParamLimits

0x9130,	// (0x00009273) vkb2_cell_bottom_grid_pane

0x9169,	// (0x000092ac) vkb2_cell_bottom_grid_pane_g1

0xe43a,	// (0x0000e57d) aid_call2_pane_cp02

0xe442,	// (0x0000e585) aid_call_pane_cp02

0xe44a,	// (0x0000e58d) clock_digital_number_pane_cp10

0xe452,	// (0x0000e595) clock_digital_number_pane_cp11

0xe45a,	// (0x0000e59d) clock_digital_number_pane_cp12

0xe462,	// (0x0000e5a5) clock_digital_number_pane_cp13

0xe46a,	// (0x0000e5ad) clock_digital_separator_pane_cp10

0x1c31,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g1

0x1c31,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g2

0xe472,	// (0x0000e5b5) popup_clock_digital_analogue_window_cp2_g3

0x1c31,	// (0x00001d74) popup_clock_digital_analogue_window_cp2_g4

0xe472,	// (0x0000e5b5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd14,	// (0x0000fe57) popup_clock_digital_analogue_window_cp2_g

0xe47a,	// (0x0000e5bd) popup_clock_digital_analogue_window_cp2_t1

0xe488,	// (0x0000e5cb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd1f,	// (0x0000fe62) popup_clock_digital_analogue_window_cp2_t

0x659a,	// (0x000066dd) clock_digital_number_pane_cp10_g1

0x659a,	// (0x000066dd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fc4a) clock_digital_number_pane_cp10_g

0x659a,	// (0x000066dd) clock_digital_separator_pane_cp10_g1

0x659a,	// (0x000066dd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb07,	// (0x0000fc4a) clock_digital_separator_pane_cp10_g

0x86b1,	// (0x000087f4) uniindi_top_pane_g3

0x86c2,	// (0x00008805) uniindi_top_pane_g4

0x8e8e,	// (0x00008fd1) vkb2_row_keypad_pane_ParamLimits

0x8e8e,	// (0x00008fd1) vkb2_row_keypad_pane

0x9189,	// (0x000092cc) vkb2_cell_t_keypad_pane_ParamLimits

0x9189,	// (0x000092cc) vkb2_cell_t_keypad_pane

0x9199,	// (0x000092dc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9199,	// (0x000092dc) vkb2_cell_t_keypad_pane_cp08

0x91ac,	// (0x000092ef) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91ac,	// (0x000092ef) vkb2_cell_t_keypad_pane_cp09

0x91c0,	// (0x00009303) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91c0,	// (0x00009303) vkb2_cell_t_keypad_pane_cp01

0x91d1,	// (0x00009314) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91d1,	// (0x00009314) vkb2_cell_t_keypad_pane_cp02

0x91e2,	// (0x00009325) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91e2,	// (0x00009325) vkb2_cell_t_keypad_pane_cp03

0x91f3,	// (0x00009336) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91f3,	// (0x00009336) vkb2_cell_t_keypad_pane_cp04

0x9204,	// (0x00009347) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9204,	// (0x00009347) vkb2_cell_t_keypad_pane_cp05

0x9215,	// (0x00009358) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9215,	// (0x00009358) vkb2_cell_t_keypad_pane_cp06

0x9226,	// (0x00009369) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9226,	// (0x00009369) vkb2_cell_t_keypad_pane_cp07

0x9237,	// (0x0000937a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9237,	// (0x0000937a) vkb2_cell_t_keypad_pane_cp10

0x6a2c,	// (0x00006b6f) vkb2_cell_t_keypad_pane_g1

0x924c,	// (0x0000938f) vkb2_cell_t_keypad_pane_t1

0xf4f5,	// (0x0000f638) popup_grid_graphic2_window

0xeb13,	// (0x0000ec56) aid_size_cell_graphic2_ParamLimits

0xeb13,	// (0x0000ec56) aid_size_cell_graphic2

0xeb51,	// (0x0000ec94) bg_popup_window_pane_cp21_ParamLimits

0xeb51,	// (0x0000ec94) bg_popup_window_pane_cp21

0xeb5f,	// (0x0000eca2) graphic2_pages_pane_ParamLimits

0xeb5f,	// (0x0000eca2) graphic2_pages_pane

0xebb5,	// (0x0000ecf8) grid_graphic2_control_pane_ParamLimits

0xebb5,	// (0x0000ecf8) grid_graphic2_control_pane

0xebfd,	// (0x0000ed40) grid_graphic2_pane_ParamLimits

0xebfd,	// (0x0000ed40) grid_graphic2_pane

0xec84,	// (0x0000edc7) cell_graphic2_pane

0xf4f5,	// (0x0000f638) main_comp_mode_pane

0x7de9,	// (0x00007f2c) list_ai3_gene_pane_ParamLimits

0xe116,	// (0x0000e259) bg_popup_window_pane_cp19_ParamLimits

0x822e,	// (0x00008371) bg_touch_area_indi_pane_ParamLimits

0x822e,	// (0x00008371) bg_touch_area_indi_pane

0x8244,	// (0x00008387) bg_touch_area_indi_pane_cp01_ParamLimits

0x8244,	// (0x00008387) bg_touch_area_indi_pane_cp01

0x825a,	// (0x0000839d) bg_touch_area_indi_pane_cp02_ParamLimits

0x825a,	// (0x0000839d) bg_touch_area_indi_pane_cp02

0x8270,	// (0x000083b3) bg_touch_area_indi_pane_cp03_ParamLimits

0x8270,	// (0x000083b3) bg_touch_area_indi_pane_cp03

0x828a,	// (0x000083cd) popup_slider_window_g1_ParamLimits

0x82a6,	// (0x000083e9) popup_slider_window_g2_ParamLimits

0x82c2,	// (0x00008405) popup_slider_window_g3_ParamLimits

0xfca9,	// (0x0000fdec) popup_slider_window_g_ParamLimits

0x8328,	// (0x0000846b) popup_slider_window_t1_ParamLimits

0x839c,	// (0x000084df) small_volume_slider_vertical_pane_ParamLimits

0xec84,	// (0x0000edc7) cell_graphic2_pane_ParamLimits

0xecdf,	// (0x0000ee22) bg_button_pane_cp10_ParamLimits

0xecdf,	// (0x0000ee22) bg_button_pane_cp10

0xecf2,	// (0x0000ee35) bg_button_pane_cp11_ParamLimits

0xecf2,	// (0x0000ee35) bg_button_pane_cp11

0xed05,	// (0x0000ee48) graphic2_pages_pane_g1_ParamLimits

0xed05,	// (0x0000ee48) graphic2_pages_pane_g1

0xed20,	// (0x0000ee63) graphic2_pages_pane_g2_ParamLimits

0xed20,	// (0x0000ee63) graphic2_pages_pane_g2

0x0001,

0xfd6d,	// (0x0000feb0) graphic2_pages_pane_g_ParamLimits

0xfd6d,	// (0x0000feb0) graphic2_pages_pane_g

0xed38,	// (0x0000ee7b) graphic2_pages_pane_t1_ParamLimits

0xed38,	// (0x0000ee7b) graphic2_pages_pane_t1

0xed50,	// (0x0000ee93) cell_graphic2_control_pane_ParamLimits

0xed50,	// (0x0000ee93) cell_graphic2_control_pane

0xed82,	// (0x0000eec5) cell_graphic2_pane_g1_ParamLimits

0xed82,	// (0x0000eec5) cell_graphic2_pane_g1

0x6846,	// (0x00006989) cell_graphic2_pane_g2_ParamLimits

0x6846,	// (0x00006989) cell_graphic2_pane_g2

0xed8f,	// (0x0000eed2) cell_graphic2_pane_g3_ParamLimits

0xed8f,	// (0x0000eed2) cell_graphic2_pane_g3

0x6853,	// (0x00006996) cell_graphic2_pane_g4_ParamLimits

0x6853,	// (0x00006996) cell_graphic2_pane_g4

0xed9c,	// (0x0000eedf) cell_graphic2_pane_g5_ParamLimits

0xed9c,	// (0x0000eedf) cell_graphic2_pane_g5

0x0004,

0xfd72,	// (0x0000feb5) cell_graphic2_pane_g_ParamLimits

0xfd72,	// (0x0000feb5) cell_graphic2_pane_g

0xedb9,	// (0x0000eefc) cell_graphic2_pane_t1_ParamLimits

0xedb9,	// (0x0000eefc) cell_graphic2_pane_t1

0x4623,	// (0x00004766) grid_highlight_pane_cp11_ParamLimits

0x4623,	// (0x00004766) grid_highlight_pane_cp11

0x06f8,	// (0x0000083b) bg_button_pane_cp05

0xee03,	// (0x0000ef46) cell_graphic2_control_pane_g1

0x659a,	// (0x000066dd) bg_touch_area_indi_pane_g1

0x9525,	// (0x00009668) aid_cmod_rocker_key_size

0x952f,	// (0x00009672) aid_cmode_itu_key_size

0x9539,	// (0x0000967c) main_cmode_video_pane

0x9543,	// (0x00009686) main_comp_mode_itu_pane

0x954f,	// (0x00009692) main_comp_mode_rocker_pane

0x955b,	// (0x0000969e) cell_cmode_rocker_pane_ParamLimits

0x955b,	// (0x0000969e) cell_cmode_rocker_pane

0x956d,	// (0x000096b0) cell_cmode_itu_pane_ParamLimits

0x956d,	// (0x000096b0) cell_cmode_itu_pane

0x1253,	// (0x00001396) bg_button_pane_cp06_ParamLimits

0x1253,	// (0x00001396) bg_button_pane_cp06

0x6a2c,	// (0x00006b6f) cell_cmode_rocker_pane_g1_ParamLimits

0x6a2c,	// (0x00006b6f) cell_cmode_rocker_pane_g1

0x8511,	// (0x00008654) cell_cmode_rocker_pane_g2_ParamLimits

0x8511,	// (0x00008654) cell_cmode_rocker_pane_g2

0x0001,

0xfd82,	// (0x0000fec5) cell_cmode_rocker_pane_g_ParamLimits

0xfd82,	// (0x0000fec5) cell_cmode_rocker_pane_g

0xf4f5,	// (0x0000f638) bg_button_pane_cp07

0x9582,	// (0x000096c5) cell_cmode_itu_pane_g1

0x958b,	// (0x000096ce) cell_cmode_itu_pane_t1

0x9599,	// (0x000096dc) cell_cmode_itu_pane_t2

0x0001,

0xfd87,	// (0x0000feca) cell_cmode_itu_pane_t

0x8734,	// (0x00008877) aid_touch_ctrl_left

0x873c,	// (0x0000887f) aid_touch_ctrl_right

0xf4f5,	// (0x0000f638) compa_mode_pane

0xee27,	// (0x0000ef6a) aid_cmod_rocker_key_size_cp

0xee31,	// (0x0000ef74) aid_cmode_itu_key_size_cp

0x95bb,	// (0x000096fe) compa_mode_pane_g1

0x95c3,	// (0x00009706) compa_mode_pane_g2

0x95cb,	// (0x0000970e) compa_mode_pane_g3

0x0002,

0xfd8c,	// (0x0000fecf) compa_mode_pane_g

0xee3b,	// (0x0000ef7e) main_comp_mode_itu_pane_cp

0xee43,	// (0x0000ef86) main_comp_mode_rocker_pane_cp

0xee4b,	// (0x0000ef8e) cell_cmode_itu_pane_cp_ParamLimits

0xee4b,	// (0x0000ef8e) cell_cmode_itu_pane_cp

0xee60,	// (0x0000efa3) cell_cmode_rocker_pane_cp_ParamLimits

0xee60,	// (0x0000efa3) cell_cmode_rocker_pane_cp

0x1253,	// (0x00001396) bg_button_pane_cp06_cp_ParamLimits

0x1253,	// (0x00001396) bg_button_pane_cp06_cp

0x6a2c,	// (0x00006b6f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a2c,	// (0x00006b6f) cell_cmode_rocker_pane_g1_cp

0x659a,	// (0x000066dd) cell_cmode_rocker_pane_g2_cp

0xf4f5,	// (0x0000f638) bg_button_pane_cp07_cp

0xee72,	// (0x0000efb5) cell_cmode_itu_pane_g1_cp

0xee7b,	// (0x0000efbe) cell_cmode_itu_pane_t1_cp

0xee7b,	// (0x0000efbe) cell_cmode_itu_pane_t2_cp

0xd5e4,	// (0x0000d727) settings_code_pane_cp2

0x03c4,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x08f8,	// (0x00000a3b) heading_pane_cp3_ParamLimits

0x0907,	// (0x00000a4a) listscroll_popup_graphic_pane_ParamLimits

0x6604,	// (0x00006747) fep_hwr_aid_pane_ParamLimits

0x8417,	// (0x0000855a) aid_touch_sctrl_top_ParamLimits

0x8424,	// (0x00008567) sctrl_sk_top_pane_g1_ParamLimits

0x6a2c,	// (0x00006b6f) sctrl_sk_top_pane_g2_ParamLimits

0xfcc2,	// (0x0000fe05) sctrl_sk_top_pane_g_ParamLimits

0x8431,	// (0x00008574) sctrl_sk_top_pane_t1_ParamLimits

0x8417,	// (0x0000855a) aid_touch_sctrl_bottom_ParamLimits

0x8431,	// (0x00008574) sctrl_sk_bottom_pane_t1_ParamLimits

0x867d,	// (0x000087c0) aid_area_touch_clock

0xe8df,	// (0x0000ea22) aid_vkb2_area_top_pane_cell_ParamLimits

0xe8df,	// (0x0000ea22) aid_vkb2_area_top_pane_cell

0xe98e,	// (0x0000ead1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe98e,	// (0x0000ead1) aid_vkb2_area_bottom_pane_cell

0x8fcd,	// (0x00009110) popup_char_count_window

0x9618,	// (0x0000975b) popup_char_count_window_g1

0x9621,	// (0x00009764) popup_char_count_window_g2

0x962a,	// (0x0000976d) popup_char_count_window_g3

0x0002,

0xfd93,	// (0x0000fed6) popup_char_count_window_g

0x9633,	// (0x00009776) popup_char_count_window_t1

0x8c24,	// (0x00008d67) popup_fep_char_preview_window_ParamLimits

0x8c24,	// (0x00008d67) popup_fep_char_preview_window

0xe8ff,	// (0x0000ea42) vkb2_top_candi_pane_ParamLimits

0xe8ff,	// (0x0000ea42) vkb2_top_candi_pane

0xee89,	// (0x0000efcc) cell_vkb2_top_candi_pane_ParamLimits

0xee89,	// (0x0000efcc) cell_vkb2_top_candi_pane

0x3e5c,	// (0x00003f9f) bg_popup_fep_char_preview_window_ParamLimits

0x3e5c,	// (0x00003f9f) bg_popup_fep_char_preview_window

0x968b,	// (0x000097ce) popup_fep_char_preview_window_t1_ParamLimits

0x968b,	// (0x000097ce) popup_fep_char_preview_window_t1

0x96c5,	// (0x00009808) bg_popup_fep_char_preview_window_g1

0x96cd,	// (0x00009810) bg_popup_fep_char_preview_window_g2

0x96d5,	// (0x00009818) bg_popup_fep_char_preview_window_g3

0x96dd,	// (0x00009820) bg_popup_fep_char_preview_window_g4

0x96e5,	// (0x00009828) bg_popup_fep_char_preview_window_g5

0x96ed,	// (0x00009830) bg_popup_fep_char_preview_window_g6

0x96f5,	// (0x00009838) bg_popup_fep_char_preview_window_g7

0x96fd,	// (0x00009840) bg_popup_fep_char_preview_window_g8

0x9705,	// (0x00009848) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9a,	// (0x0000fedd) bg_popup_fep_char_preview_window_g

0x6a2c,	// (0x00006b6f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a2c,	// (0x00006b6f) cell_vkb2_top_candi_pane_g1

0x6d97,	// (0x00006eda) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d97,	// (0x00006eda) cell_vkb2_top_candi_pane_g2

0x6db8,	// (0x00006efb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6db8,	// (0x00006efb) cell_vkb2_top_candi_pane_g3

0x9715,	// (0x00009858) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9715,	// (0x00009858) cell_vkb2_top_candi_pane_g4

0x9736,	// (0x00009879) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9736,	// (0x00009879) cell_vkb2_top_candi_pane_g5

0x8511,	// (0x00008654) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8511,	// (0x00008654) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdaf,	// (0x0000fef2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdaf,	// (0x0000fef2) cell_vkb2_top_candi_pane_g

0x9757,	// (0x0000989a) cell_vkb2_top_candi_pane_t1

0x4d30,	// (0x00004e73) aid_size_touch_slider_mark_ParamLimits

0x4d30,	// (0x00004e73) aid_size_touch_slider_mark

0xeb9b,	// (0x0000ecde) grid_graphic2_catg_pane_ParamLimits

0xeb9b,	// (0x0000ecde) grid_graphic2_catg_pane

0xec57,	// (0x0000ed9a) popup_grid_graphic2_window_t1_ParamLimits

0xec57,	// (0x0000ed9a) popup_grid_graphic2_window_t1

0xec6d,	// (0x0000edb0) popup_grid_graphic2_window_t2_ParamLimits

0xec6d,	// (0x0000edb0) popup_grid_graphic2_window_t2

0x0001,

0xfd68,	// (0x0000feab) popup_grid_graphic2_window_t_ParamLimits

0xfd68,	// (0x0000feab) popup_grid_graphic2_window_t

0x06f8,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xee03,	// (0x0000ef46) cell_graphic2_control_pane_g1_ParamLimits

0xeef1,	// (0x0000f034) cell_graphic2_catg_pane_ParamLimits

0xeef1,	// (0x0000f034) cell_graphic2_catg_pane

0xf4f5,	// (0x0000f638) bg_button_pane_cp12

0xef03,	// (0x0000f046) cell_graphic2_catg_pane_g1

0x8649,	// (0x0000878c) cell_tb_ext_pane_t1_ParamLimits

0x906b,	// (0x000091ae) vkb2_top_cell_right_narrow_pane_ParamLimits

0x906b,	// (0x000091ae) vkb2_top_cell_right_narrow_pane

0x9083,	// (0x000091c6) vkb2_top_cell_right_wide_pane_ParamLimits

0x9083,	// (0x000091c6) vkb2_top_cell_right_wide_pane

0x65f6,	// (0x00006739) bg_vkb2_func_pane_ParamLimits

0x65f6,	// (0x00006739) bg_vkb2_func_pane

0x90f4,	// (0x00009237) vkb2_top_cell_left_pane_g1_ParamLimits

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp03

0x9169,	// (0x000092ac) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35d6,	// (0x00003719) bg_vkb2_func_pane_g1

0x35de,	// (0x00003721) bg_vkb2_func_pane_g2

0x35ee,	// (0x00003731) bg_vkb2_func_pane_g3

0x35e6,	// (0x00003729) bg_vkb2_func_pane_g4

0x35f6,	// (0x00003739) bg_vkb2_func_pane_g5

0x35fe,	// (0x00003741) bg_vkb2_func_pane_g6

0x3606,	// (0x00003749) bg_vkb2_func_pane_g7

0x360e,	// (0x00003751) bg_vkb2_func_pane_g8

0x35ce,	// (0x00003711) bg_vkb2_func_pane_g9

0x0008,

0xfdbc,	// (0x0000feff) bg_vkb2_func_pane_g

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp01

0x90f4,	// (0x00009237) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90f4,	// (0x00009237) vkb2_top_cell_right_wide_pane_g1

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65f6,	// (0x00006739) bg_vkb2_fuc_pane_cp02

0x9791,	// (0x000098d4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9791,	// (0x000098d4) vkb2_top_cell_right_narrow_pane_g1

0xe058,	// (0x0000e19b) aid_touch_area_decrease_ParamLimits

0xe058,	// (0x0000e19b) aid_touch_area_decrease

0xe092,	// (0x0000e1d5) aid_touch_area_increase_ParamLimits

0xe092,	// (0x0000e1d5) aid_touch_area_increase

0xe0ba,	// (0x0000e1fd) aid_touch_area_mute_ParamLimits

0xe0ba,	// (0x0000e1fd) aid_touch_area_mute

0xe0e2,	// (0x0000e225) aid_touch_area_slider_ParamLimits

0xe0e2,	// (0x0000e225) aid_touch_area_slider

0xe122,	// (0x0000e265) popup_slider_window_g4_ParamLimits

0xe122,	// (0x0000e265) popup_slider_window_g4

0xe14a,	// (0x0000e28d) popup_slider_window_g5_ParamLimits

0xe14a,	// (0x0000e28d) popup_slider_window_g5

0xe17e,	// (0x0000e2c1) popup_slider_window_g6_ParamLimits

0xe17e,	// (0x0000e2c1) popup_slider_window_g6

0x8356,	// (0x00008499) popup_slider_window_t2_ParamLimits

0x8356,	// (0x00008499) popup_slider_window_t2

0x0001,

0xfcb6,	// (0x0000fdf9) popup_slider_window_t_ParamLimits

0xfcb6,	// (0x0000fdf9) popup_slider_window_t

0xe19a,	// (0x0000e2dd) slider_pane_ParamLimits

0xe19a,	// (0x0000e2dd) slider_pane

0x97b1,	// (0x000098f4) slider_pane_g1_ParamLimits

0x97b1,	// (0x000098f4) slider_pane_g1

0x97c5,	// (0x00009908) slider_pane_g2_ParamLimits

0x97c5,	// (0x00009908) slider_pane_g2

0x97db,	// (0x0000991e) slider_pane_g3_ParamLimits

0x97db,	// (0x0000991e) slider_pane_g3

0x0003,

0xfdcf,	// (0x0000ff12) slider_pane_g_ParamLimits

0xfdcf,	// (0x0000ff12) slider_pane_g

0xcd5d,	// (0x0000cea0) popup_tb_float_extension_window_ParamLimits

0xcd5d,	// (0x0000cea0) popup_tb_float_extension_window

0x9807,	// (0x0000994a) aid_size_cell_tb_float_ext

0xf4f5,	// (0x0000f638) bg_popup_sub_window_cp28

0x9813,	// (0x00009956) grid_tb_float_ext_pane

0x981d,	// (0x00009960) cell_tb_float_ext_pane_ParamLimits

0x981d,	// (0x00009960) cell_tb_float_ext_pane

0x9837,	// (0x0000997a) cell_tb_float_ext_pane_g1

0x9840,	// (0x00009983) grid_highlight_pane_cp12

0xd9f2,	// (0x0000db35) cell_last_hwr_side_pane_ParamLimits

0xd9f2,	// (0x0000db35) cell_last_hwr_side_pane

0x659a,	// (0x000066dd) cell_last_hwr_side_pane_g1

0x9849,	// (0x0000998c) cell_last_hwr_side_pane_g2

0x0001,

0xfdd8,	// (0x0000ff1b) cell_last_hwr_side_pane_g

0xea6b,	// (0x0000ebae) vkb2_area_bottom_space_btn_pane_ParamLimits

0xea6b,	// (0x0000ebae) vkb2_area_bottom_space_btn_pane

0x6a2c,	// (0x00006b6f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x924c,	// (0x0000938f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9757,	// (0x0000989a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9852,	// (0x00009995) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9852,	// (0x00009995) vkb2_area_bottom_space_btn_pane_g1

0x988c,	// (0x000099cf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x988c,	// (0x000099cf) vkb2_area_bottom_space_btn_pane_g2

0x98c2,	// (0x00009a05) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x98c2,	// (0x00009a05) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfddd,	// (0x0000ff20) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfddd,	// (0x0000ff20) vkb2_area_bottom_space_btn_pane_g

0x66b9,	// (0x000067fc) cel_fep_hwr_func_pane_ParamLimits

0x66b9,	// (0x000067fc) cel_fep_hwr_func_pane

0xd9c7,	// (0x0000db0a) cell_hwr_side_button_pane_ParamLimits

0xd9c7,	// (0x0000db0a) cell_hwr_side_button_pane

0x867d,	// (0x000087c0) aid_area_touch_clock_ParamLimits

0x06f8,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x868f,	// (0x000087d2) uniindi_top_pane_g1_ParamLimits

0x86a5,	// (0x000087e8) uniindi_top_pane_g2_ParamLimits

0x86b1,	// (0x000087f4) uniindi_top_pane_g3_ParamLimits

0x86c2,	// (0x00008805) uniindi_top_pane_g4_ParamLimits

0xfcee,	// (0x0000fe31) uniindi_top_pane_g_ParamLimits

0x86cf,	// (0x00008812) uniindi_top_pane_t1_ParamLimits

0x06f8,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x06f8,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x990c,	// (0x00009a4f) cel_fep_hwr_func_pane_g1_ParamLimits

0x990c,	// (0x00009a4f) cel_fep_hwr_func_pane_g1

0x06f8,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x06f8,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x990c,	// (0x00009a4f) cell_hwr_side_button_pane_g1_ParamLimits

0x990c,	// (0x00009a4f) cell_hwr_side_button_pane_g1

0x33c1,	// (0x00003504) status_pane_g4_ParamLimits

0x33c1,	// (0x00003504) status_pane_g4

0x33db,	// (0x0000351e) status_pane_t1

0x62df,	// (0x00006422) form2_midp_gauge_slider_cont_pane

0x62e7,	// (0x0000642a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd91f,	// (0x0000da62) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd931,	// (0x0000da74) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaba,	// (0x0000fbfd) form2_midp_gauge_slider_pane_t_ParamLimits

0x631d,	// (0x00006460) form2_midp_slider_pane_ParamLimits

0x8bec,	// (0x00008d2f) aid_size_cell_func_vkb2_ParamLimits

0x8bec,	// (0x00008d2f) aid_size_cell_func_vkb2

0x97f3,	// (0x00009936) slider_pane_g4_ParamLimits

0x97f3,	// (0x00009936) slider_pane_g4

0xef0c,	// (0x0000f04f) form2_midp_gauge_slider_pane_t2_cp01

0xef1a,	// (0x0000f05d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xef1a,	// (0x0000f05d) form2_midp_gauge_slider_pane_t3_cp01

0x9945,	// (0x00009a88) form2_midp_slider_pane_cp01

0xf4f5,	// (0x0000f638) navi_smil_pane

0x9979,	// (0x00009abc) navi_smil_pane_g1

0x9981,	// (0x00009ac4) navi_smil_pane_t1

0x994e,	// (0x00009a91) form2_midp_slider_pane_g1

0x9957,	// (0x00009a9a) form2_midp_slider_pane_g2

0x995f,	// (0x00009aa2) form2_midp_slider_pane_g3

0x994e,	// (0x00009a91) form2_midp_slider_pane_g4

0xef37,	// (0x0000f07a) form2_midp_slider_pane_g5

0x0004,

0xfde6,	// (0x0000ff29) form2_midp_slider_pane_g

0x98fc,	// (0x00009a3f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x98fc,	// (0x00009a3f) vkb2_area_bottom_space_btn_pane_g4

0xcf40,	// (0x0000d083) lc0_navi_pane_ParamLimits

0xcf40,	// (0x0000d083) lc0_navi_pane

0xcfaa,	// (0x0000d0ed) lc0_stat_indi_pane_ParamLimits

0xcfaa,	// (0x0000d0ed) lc0_stat_indi_pane

0xcfbf,	// (0x0000d102) ls0_title_pane_ParamLimits

0xcfbf,	// (0x0000d102) ls0_title_pane

0x1253,	// (0x00001396) bg_popup_sub_pane_cp14_ParamLimits

0x8664,	// (0x000087a7) list_uniindi_pane_ParamLimits

0x8670,	// (0x000087b3) uniindi_top_pane_ParamLimits

0x870c,	// (0x0000884f) list_single_uniindi_pane_g1_ParamLimits

0x871f,	// (0x00008862) list_single_uniindi_pane_t1_ParamLimits

0xef42,	// (0x0000f085) lc0_stat_clock_pane_ParamLimits

0xef42,	// (0x0000f085) lc0_stat_clock_pane

0xef4f,	// (0x0000f092) lc0_stat_indi_pane_g1_ParamLimits

0xef4f,	// (0x0000f092) lc0_stat_indi_pane_g1

0xef5c,	// (0x0000f09f) lc0_stat_indi_pane_g2_ParamLimits

0xef5c,	// (0x0000f09f) lc0_stat_indi_pane_g2

0x0001,

0xfdf1,	// (0x0000ff34) lc0_stat_indi_pane_g_ParamLimits

0xfdf1,	// (0x0000ff34) lc0_stat_indi_pane_g

0xef69,	// (0x0000f0ac) lc0_uni_indicator_pane_ParamLimits

0xef69,	// (0x0000f0ac) lc0_uni_indicator_pane

0xef76,	// (0x0000f0b9) ls0_title_pane_g1_ParamLimits

0xef76,	// (0x0000f0b9) ls0_title_pane_g1

0xef8a,	// (0x0000f0cd) ls0_title_pane_t1_ParamLimits

0xef8a,	// (0x0000f0cd) ls0_title_pane_t1

0xefb8,	// (0x0000f0fb) lc0_uni_indicator_pane_g1_ParamLimits

0xefb8,	// (0x0000f0fb) lc0_uni_indicator_pane_g1

0x9a21,	// (0x00009b64) lc0_stat_clock_pane_t1

0xf4f5,	// (0x0000f638) main_ai5_pane

0x9a2f,	// (0x00009b72) ai5_sk_pane_ParamLimits

0x9a2f,	// (0x00009b72) ai5_sk_pane

0xefdf,	// (0x0000f122) cell_ai5_widget_pane_ParamLimits

0xefdf,	// (0x0000f122) cell_ai5_widget_pane

0x9b05,	// (0x00009c48) aid_size_cell_widget_grid

0x9b1b,	// (0x00009c5e) bg_ai5_widget_pane_ParamLimits

0x9b1b,	// (0x00009c5e) bg_ai5_widget_pane

0x9b97,	// (0x00009cda) cell_ai5_widget_pane_g2

0x9bab,	// (0x00009cee) cell_ai5_widget_pane_g3

0x9bc5,	// (0x00009d08) cell_ai5_widget_pane_g4

0x9bd5,	// (0x00009d18) cell_ai5_widget_pane_g5

0x9be5,	// (0x00009d28) cell_ai5_widget_pane_g6

0x9bf1,	// (0x00009d34) cell_ai5_widget_pane_g7

0x9c5d,	// (0x00009da0) cell_ai5_widget_pane_t1_ParamLimits

0x9c5d,	// (0x00009da0) cell_ai5_widget_pane_t1

0x9c7a,	// (0x00009dbd) cell_ai5_widget_pane_t2_ParamLimits

0x9c7a,	// (0x00009dbd) cell_ai5_widget_pane_t2

0x9c92,	// (0x00009dd5) cell_ai5_widget_pane_t3_ParamLimits

0x9c92,	// (0x00009dd5) cell_ai5_widget_pane_t3

0x9caa,	// (0x00009ded) cell_ai5_widget_pane_t4_ParamLimits

0x9caa,	// (0x00009ded) cell_ai5_widget_pane_t4

0x9cd0,	// (0x00009e13) cell_ai5_widget_pane_t5_ParamLimits

0x9cd0,	// (0x00009e13) cell_ai5_widget_pane_t5

0x9cef,	// (0x00009e32) cell_ai5_widget_pane_t6_ParamLimits

0x9cef,	// (0x00009e32) cell_ai5_widget_pane_t6

0x9d01,	// (0x00009e44) cell_ai5_widget_pane_t7_ParamLimits

0x9d01,	// (0x00009e44) cell_ai5_widget_pane_t7

0x9d20,	// (0x00009e63) cell_ai5_widget_pane_t8_ParamLimits

0x9d20,	// (0x00009e63) cell_ai5_widget_pane_t8

0x000b,

0xfe11,	// (0x0000ff54) cell_ai5_widget_pane_t_ParamLimits

0xfe11,	// (0x0000ff54) cell_ai5_widget_pane_t

0x9da4,	// (0x00009ee7) grid_ai5_widget_pane

0x1253,	// (0x00001396) highlight_cell_ai5_widget_pane_ParamLimits

0x1253,	// (0x00001396) highlight_cell_ai5_widget_pane

0xf04b,	// (0x0000f18e) ai5_sk_left_pane

0xf055,	// (0x0000f198) ai5_sk_middle_pane

0xf05f,	// (0x0000f1a2) ai5_sk_right_pane

0x9dd9,	// (0x00009f1c) bg_ai5_widget_pane_g1_ParamLimits

0x9dd9,	// (0x00009f1c) bg_ai5_widget_pane_g1

0x9de5,	// (0x00009f28) bg_ai5_widget_pane_g2_ParamLimits

0x9de5,	// (0x00009f28) bg_ai5_widget_pane_g2

0x9df1,	// (0x00009f34) bg_ai5_widget_pane_g3_ParamLimits

0x9df1,	// (0x00009f34) bg_ai5_widget_pane_g3

0x9dfd,	// (0x00009f40) bg_ai5_widget_pane_g4_ParamLimits

0x9dfd,	// (0x00009f40) bg_ai5_widget_pane_g4

0x9e09,	// (0x00009f4c) bg_ai5_widget_pane_g5_ParamLimits

0x9e09,	// (0x00009f4c) bg_ai5_widget_pane_g5

0x9e15,	// (0x00009f58) bg_ai5_widget_pane_g6_ParamLimits

0x9e15,	// (0x00009f58) bg_ai5_widget_pane_g6

0x9e21,	// (0x00009f64) bg_ai5_widget_pane_g7_ParamLimits

0x9e21,	// (0x00009f64) bg_ai5_widget_pane_g7

0x9e2d,	// (0x00009f70) bg_ai5_widget_pane_g8_ParamLimits

0x9e2d,	// (0x00009f70) bg_ai5_widget_pane_g8

0x9e39,	// (0x00009f7c) bg_ai5_widget_pane_g9_ParamLimits

0x9e39,	// (0x00009f7c) bg_ai5_widget_pane_g9

0x0008,

0xfe2a,	// (0x0000ff6d) bg_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0000ff6d) bg_ai5_widget_pane_g

0x9e6b,	// (0x00009fae) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e6b,	// (0x00009fae) cell_shortcut_ai5_widget_pane

0x2504,	// (0x00002647) bg_cell_shortcut_ai5_widget_pane

0x9e7c,	// (0x00009fbf) cell_grid_ai5_widget_pane_g1

0x2504,	// (0x00002647) highlight_cell_shortcut_ai5_widget_pane

0x35de,	// (0x00003721) ai5_sk_left_pane_g1

0x9e85,	// (0x00009fc8) ai5_sk_left_pane_g2

0x9e8d,	// (0x00009fd0) ai5_sk_left_pane_g3

0x9e95,	// (0x00009fd8) ai5_sk_left_pane_g4

0x0003,

0xfe3d,	// (0x0000ff80) ai5_sk_left_pane_g

0x9e9d,	// (0x00009fe0) ai5_sk_left_pane_t1

0x35d6,	// (0x00003719) ai5_sk_right_pane_g1

0x9eab,	// (0x00009fee) ai5_sk_right_pane_g2

0x9eb3,	// (0x00009ff6) ai5_sk_right_pane_g3

0x9ebb,	// (0x00009ffe) ai5_sk_right_pane_g4

0x0003,

0xfe46,	// (0x0000ff89) ai5_sk_right_pane_g

0x9ec3,	// (0x0000a006) ai5_sk_right_pane_t1

0x35d6,	// (0x00003719) ai5_sk_middle_pane_g1

0x35de,	// (0x00003721) ai5_sk_middle_pane_g2

0x35f6,	// (0x00003739) ai5_sk_middle_pane_g3

0x9eb3,	// (0x00009ff6) ai5_sk_middle_pane_g4

0x9e8d,	// (0x00009fd0) ai5_sk_middle_pane_g5

0x9ed1,	// (0x0000a014) ai5_sk_middle_pane_g6

0xf069,	// (0x0000f1ac) ai5_sk_middle_pane_g7

0x0006,

0xfe4f,	// (0x0000ff92) ai5_sk_middle_pane_g

0xce2c,	// (0x0000cf6f) aid_touch_area_size_lc0_ParamLimits

0xce2c,	// (0x0000cf6f) aid_touch_area_size_lc0

0x6dd9,	// (0x00006f1c) cell_hwr_candidate_pane_t1_ParamLimits

0x3092,	// (0x000031d5) aid_touch_navi_pane

0xd0b8,	// (0x0000d1fb) status_dt_navi_pane_ParamLimits

0xd0b8,	// (0x0000d1fb) status_dt_navi_pane

0xd0d0,	// (0x0000d213) status_dt_sta_pane_ParamLimits

0xd0d0,	// (0x0000d213) status_dt_sta_pane

0xf071,	// (0x0000f1b4) dt_sta_controll_pane

0xf07e,	// (0x0000f1c1) dt_sta_indi_pane

0xf08b,	// (0x0000f1ce) dt_sta_title_pane

0x06f8,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x06f8,	// (0x0000083b) bg_dt_sta_indi_pane

0xf09d,	// (0x0000f1e0) dt_sta_battery_pane

0xf0a5,	// (0x0000f1e8) dt_sta_indi_pane_g1

0x9f23,	// (0x0000a066) dt_sta_indi_pane_g2

0x9f2c,	// (0x0000a06f) dt_sta_indi_pane_g3

0x0002,

0xfe5e,	// (0x0000ffa1) dt_sta_indi_pane_g

0x9f35,	// (0x0000a078) dt_sta_signal_pane

0x1253,	// (0x00001396) bg_dt_sta_title_pane_ParamLimits

0x1253,	// (0x00001396) bg_dt_sta_title_pane

0x9f3e,	// (0x0000a081) dt_sta_title_pane_g1

0x9f46,	// (0x0000a089) dt_sta_title_pane_t1_ParamLimits

0x9f46,	// (0x0000a089) dt_sta_title_pane_t1

0xf4f5,	// (0x0000f638) bg_dt_sta_control_pane

0xf0ae,	// (0x0000f1f1) dt_sta_controll_pane_g1

0x9f64,	// (0x0000a0a7) bg_dt_sta_title_pane_g1

0x9f6d,	// (0x0000a0b0) bg_dt_sta_title_pane_g2

0x9f76,	// (0x0000a0b9) bg_dt_sta_title_pane_g3

0x0002,

0xfe65,	// (0x0000ffa8) bg_dt_sta_title_pane_g

0x659a,	// (0x000066dd) bg_dt_sta_indi_pane_g1

0x9f7f,	// (0x0000a0c2) dt_sta_signal_pane_g1

0x9f87,	// (0x0000a0ca) dt_sta_signal_pane_g2

0x0001,

0xfe6c,	// (0x0000ffaf) dt_sta_signal_pane_g

0x9f8f,	// (0x0000a0d2) dt_sta_battery_pane_g1

0x9f98,	// (0x0000a0db) dt_sta_battery_pane_t1

0x659a,	// (0x000066dd) bg_dt_sta_control_pane_g1

0x1e33,	// (0x00001f76) fep_china_uni_eep_pane

0x1e3b,	// (0x00001f7e) fep_china_uni_entry_pane_ParamLimits

0x1e4b,	// (0x00001f8e) popup_fep_china_uni_window_g1_ParamLimits

0x1e5b,	// (0x00001f9e) popup_fep_china_uni_window_g2_ParamLimits

0x1e5b,	// (0x00001f9e) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x0000f836) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x0000f836) popup_fep_china_uni_window_g

0x9fa7,	// (0x0000a0ea) fep_china_uni_eep_pane_g1

0x9faf,	// (0x0000a0f2) fep_china_uni_eep_pane_t1

0x9970,	// (0x00009ab3) aid_touch_area_size_smil_player

0x31e8,	// (0x0000332b) lc0_clock_pane

0x33cf,	// (0x00003512) status_pane_g5_ParamLimits

0x33cf,	// (0x00003512) status_pane_g5

0xc8df,	// (0x0000ca22) popup_keymap_window

0x338d,	// (0x000034d0) status_icon_pane

0x9bab,	// (0x00009cee) cell_ai5_widget_pane_g3_ParamLimits

0x9bc5,	// (0x00009d08) cell_ai5_widget_pane_g4_ParamLimits

0x9bd5,	// (0x00009d18) cell_ai5_widget_pane_g5_ParamLimits

0x9bfd,	// (0x00009d40) cell_ai5_widget_pane_g8_ParamLimits

0x9bfd,	// (0x00009d40) cell_ai5_widget_pane_g8

0x9c11,	// (0x00009d54) cell_ai5_widget_pane_g9_ParamLimits

0x9c11,	// (0x00009d54) cell_ai5_widget_pane_g9

0x9c25,	// (0x00009d68) cell_ai5_widget_pane_g10_ParamLimits

0x9c25,	// (0x00009d68) cell_ai5_widget_pane_g10

0x9fbe,	// (0x0000a101) status_icon_pane_g1

0xf4f5,	// (0x0000f638) bg_popup_sub_pane_cp13

0x9fc6,	// (0x0000a109) popup_keymap_window_t1

0xc5ff,	// (0x0000c742) control_pane_g6_ParamLimits

0xc5ff,	// (0x0000c742) control_pane_g6

0xc60c,	// (0x0000c74f) control_pane_g7_ParamLimits

0xc60c,	// (0x0000c74f) control_pane_g7

0xc619,	// (0x0000c75c) control_pane_g8_ParamLimits

0xc619,	// (0x0000c75c) control_pane_g8

0xf071,	// (0x0000f1b4) dt_sta_controll_pane_ParamLimits

0xf07e,	// (0x0000f1c1) dt_sta_indi_pane_ParamLimits

0xf08b,	// (0x0000f1ce) dt_sta_title_pane_ParamLimits

0x0c34,	// (0x00000d77) aid_size_touch_scroll_bar_cale

0x016e,	// (0x000002b1) popup_discreet_window_ParamLimits

0x016e,	// (0x000002b1) popup_discreet_window

0xb944,	// (0x0000ba87) popup_sk_window

0x3e5c,	// (0x00003f9f) bg_popup_sub_pane_cp28_ParamLimits

0x3e5c,	// (0x00003f9f) bg_popup_sub_pane_cp28

0x9fd4,	// (0x0000a117) popup_discreet_window_g1_ParamLimits

0x9fd4,	// (0x0000a117) popup_discreet_window_g1

0x9ff4,	// (0x0000a137) popup_discreet_window_t1_ParamLimits

0x9ff4,	// (0x0000a137) popup_discreet_window_t1

0xa012,	// (0x0000a155) popup_discreet_window_t2_ParamLimits

0xa012,	// (0x0000a155) popup_discreet_window_t2

0x0002,

0xfe71,	// (0x0000ffb4) popup_discreet_window_t_ParamLimits

0xfe71,	// (0x0000ffb4) popup_discreet_window_t

0xa064,	// (0x0000a1a7) popup_sk_window_g1

0xa06e,	// (0x0000a1b1) popup_sk_window_g2

0x0001,

0xfe78,	// (0x0000ffbb) popup_sk_window_g

0xa076,	// (0x0000a1b9) popup_sk_window_t1

0xa084,	// (0x0000a1c7) popup_sk_window_t1_copy1

0x9b97,	// (0x00009cda) cell_ai5_widget_pane_g2_ParamLimits

0x9d32,	// (0x00009e75) cell_ai5_widget_pane_t9_ParamLimits

0x9d32,	// (0x00009e75) cell_ai5_widget_pane_t9

0xf4f5,	// (0x0000f638) main_fep_fshwr2_pane

0xf0b7,	// (0x0000f1fa) aid_fshwr2_btn_pane

0xf0c7,	// (0x0000f20a) aid_fshwr2_syb_pane

0xf0db,	// (0x0000f21e) aid_fshwr2_txt_pane

0xf0eb,	// (0x0000f22e) fshwr2_func_candi_pane

0xf10b,	// (0x0000f24e) fshwr2_hwr_syb_pane

0xf12d,	// (0x0000f270) fshwr2_icf_pane

0xf4f5,	// (0x0000f638) fshwr2_icf_bg_pane

0xf15d,	// (0x0000f2a0) fshwr2_icf_pane_t1_ParamLimits

0xf15d,	// (0x0000f2a0) fshwr2_icf_pane_t1

0x1c31,	// (0x00001d74) fshwr2_func_candi_pane_g1

0xf176,	// (0x0000f2b9) fshwr2_func_candi_row_pane_ParamLimits

0xf176,	// (0x0000f2b9) fshwr2_func_candi_row_pane

0xf199,	// (0x0000f2dc) cell_fshwr2_syb_pane_ParamLimits

0xf199,	// (0x0000f2dc) cell_fshwr2_syb_pane

0x990c,	// (0x00009a4f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x990c,	// (0x00009a4f) fshwr2_hwr_syb_pane_g1

0xf4f5,	// (0x0000f638) bg_popup_call_pane_cp01

0xf1bf,	// (0x0000f302) fshwr2_func_candi_cell_pane_ParamLimits

0xf1bf,	// (0x0000f302) fshwr2_func_candi_cell_pane

0x3c3d,	// (0x00003d80) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3c3d,	// (0x00003d80) fshwr2_func_candi_cell_bg_pane

0xf20a,	// (0x0000f34d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf20a,	// (0x0000f34d) fshwr2_func_candi_cell_pane_g1

0xf241,	// (0x0000f384) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf241,	// (0x0000f384) fshwr2_func_candi_cell_pane_t1

0xf4f5,	// (0x0000f638) bg_button_pane_cp08

0x2a53,	// (0x00002b96) cell_fshwr2_syb_bg_pane

0xf25c,	// (0x0000f39f) cell_fshwr2_syb_bg_pane_g1

0xf26f,	// (0x0000f3b2) cell_fshwr2_syb_bg_pane_t1

0x1253,	// (0x00001396) main_tmo_pane

0xd416,	// (0x0000d559) uni_indicator_pane_g1_ParamLimits

0xd42c,	// (0x0000d56f) uni_indicator_pane_g2_ParamLimits

0xd442,	// (0x0000d585) uni_indicator_pane_g3_ParamLimits

0x4b0e,	// (0x00004c51) uni_indicator_pane_g4_ParamLimits

0x4b0e,	// (0x00004c51) uni_indicator_pane_g4

0x4b22,	// (0x00004c65) uni_indicator_pane_g5_ParamLimits

0x4b22,	// (0x00004c65) uni_indicator_pane_g5

0x4b22,	// (0x00004c65) uni_indicator_pane_g6_ParamLimits

0x4b22,	// (0x00004c65) uni_indicator_pane_g6

0xf8eb,	// (0x0000fa2e) uni_indicator_pane_g_ParamLimits

0xe034,	// (0x0000e177) popup_tmo_note_window_ParamLimits

0xe034,	// (0x0000e177) popup_tmo_note_window

0x1253,	// (0x00001396) fshwr2_bg_pane

0xf232,	// (0x0000f375) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf232,	// (0x0000f375) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7d,	// (0x0000ffc0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7d,	// (0x0000ffc0) fshwr2_func_candi_cell_pane_g

0x659a,	// (0x000066dd) bg_popup_window_pane_cp01

0xa247,	// (0x0000a38a) bg_popup_window_pane_g1_cp01

0xa250,	// (0x0000a393) bg_popup_window_pane_cp22_ParamLimits

0xa250,	// (0x0000a393) bg_popup_window_pane_cp22

0xa25e,	// (0x0000a3a1) listscroll_tmo_link_pane_ParamLimits

0xa25e,	// (0x0000a3a1) listscroll_tmo_link_pane

0xa29e,	// (0x0000a3e1) popup_tmo_note_window_g1_ParamLimits

0xa29e,	// (0x0000a3e1) popup_tmo_note_window_g1

0xa2ab,	// (0x0000a3ee) tmo_note_info_pane_ParamLimits

0xa2ab,	// (0x0000a3ee) tmo_note_info_pane

0xf285,	// (0x0000f3c8) list_tmo_note_info_pane_g1_ParamLimits

0xf285,	// (0x0000f3c8) list_tmo_note_info_pane_g1

0xa2dc,	// (0x0000a41f) list_tmo_note_info_pane_g2_ParamLimits

0xa2dc,	// (0x0000a41f) list_tmo_note_info_pane_g2

0x0001,

0xfe82,	// (0x0000ffc5) list_tmo_note_info_pane_g_ParamLimits

0xfe82,	// (0x0000ffc5) list_tmo_note_info_pane_g

0xa2f8,	// (0x0000a43b) list_tmo_note_info_text_pane_ParamLimits

0xa2f8,	// (0x0000a43b) list_tmo_note_info_text_pane

0xa379,	// (0x0000a4bc) list_tmo_link_pane

0xa386,	// (0x0000a4c9) scroll_pane_cp20

0xa393,	// (0x0000a4d6) list_single_tmo_link_pane_ParamLimits

0xa393,	// (0x0000a4d6) list_single_tmo_link_pane

0xa3a3,	// (0x0000a4e6) list_single_tmo_link_pane_t1

0xa3b1,	// (0x0000a4f4) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3b1,	// (0x0000a4f4) list_tmo_note_info_text_pane_t1

0xc205,	// (0x0000c348) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc205,	// (0x0000c348) aid_size_touch_scroll_bar_cp01

0xc174,	// (0x0000c2b7) aid_size_touch_slider_marker

0xb934,	// (0x0000ba77) popup_settings_window_ParamLimits

0xb934,	// (0x0000ba77) popup_settings_window

0x2ab1,	// (0x00002bf4) popup_candi_list_indi_window

0x3092,	// (0x000031d5) aid_touch_navi_pane_ParamLimits

0x83eb,	// (0x0000852e) rs_clock_indi_pane

0x83f4,	// (0x00008537) sctrl_sk_bottom_pane_ParamLimits

0x8405,	// (0x00008548) sctrl_sk_top_pane_ParamLimits

0x8c3e,	// (0x00008d81) popup_fep_tooltip_window

0x9b05,	// (0x00009c48) aid_size_cell_widget_grid_ParamLimits

0x9b82,	// (0x00009cc5) cell_ai5_widget_pane_g1_ParamLimits

0x9b82,	// (0x00009cc5) cell_ai5_widget_pane_g1

0x9be5,	// (0x00009d28) cell_ai5_widget_pane_g6_ParamLimits

0x9bf1,	// (0x00009d34) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf6,	// (0x0000ff39) cell_ai5_widget_pane_g_ParamLimits

0xfdf6,	// (0x0000ff39) cell_ai5_widget_pane_g

0x9d61,	// (0x00009ea4) cell_ai5_widget_pane_t10_ParamLimits

0x9d61,	// (0x00009ea4) cell_ai5_widget_pane_t10

0x9da4,	// (0x00009ee7) grid_ai5_widget_pane_ParamLimits

0x9e45,	// (0x00009f88) cell_contacts_ai5_widget_pane_ParamLimits

0x9e45,	// (0x00009f88) cell_contacts_ai5_widget_pane

0xa027,	// (0x0000a16a) popup_discreet_window_t3_ParamLimits

0xa027,	// (0x0000a16a) popup_discreet_window_t3

0xf149,	// (0x0000f28c) popup_fshwr2_char_preview_window_ParamLimits

0xf149,	// (0x0000f28c) popup_fshwr2_char_preview_window

0xf29c,	// (0x0000f3df) tmo_note_info_pane_t1

0xf2b1,	// (0x0000f3f4) tmo_note_info_pane_t2

0xf2c8,	// (0x0000f40b) tmo_note_info_pane_t3

0xa355,	// (0x0000a498) tmo_note_info_pane_t4

0xa367,	// (0x0000a4aa) tmo_note_info_pane_t5

0x0004,

0xfe87,	// (0x0000ffca) tmo_note_info_pane_t

0xa379,	// (0x0000a4bc) list_tmo_link_pane_ParamLimits

0xa386,	// (0x0000a4c9) scroll_pane_cp20_ParamLimits

0xf4f5,	// (0x0000f638) bg_popup_fep_char_preview_window_cp01

0xf2dd,	// (0x0000f420) popup_fshwr2_char_preview_window_t1

0xa3d8,	// (0x0000a51b) popup_candi_list_indi_window_g1

0xa3e1,	// (0x0000a524) bg_cell_contacts_ai5_widget_pane

0xa3ed,	// (0x0000a530) cell_contacts_ai5_widget_pane_g1

0x70a5,	// (0x000071e8) cell_contacts_ai5_widget_pane_g2

0xa402,	// (0x0000a545) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe92,	// (0x0000ffd5) cell_contacts_ai5_widget_pane_g

0xa40e,	// (0x0000a551) cell_contacts_ai5_widget_pane_t1

0x1253,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa485,	// (0x0000a5c8) settings_container_pane

0x2504,	// (0x00002647) listscroll_set_pane_copy1

0x591c,	// (0x00005a5f) scroll_pane_cp121_copy1

0x3bf9,	// (0x00003d3c) set_content_pane_copy1

0xa491,	// (0x0000a5d4) aid_height_set_list_copy1_ParamLimits

0xa491,	// (0x0000a5d4) aid_height_set_list_copy1

0x4df4,	// (0x00004f37) aid_size_parent_copy1_ParamLimits

0x4df4,	// (0x00004f37) aid_size_parent_copy1

0xa49d,	// (0x0000a5e0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa49d,	// (0x0000a5e0) button_value_adjust_pane_cp6_copy1

0x2a53,	// (0x00002b96) list_highlight_pane_cp2_copy1_ParamLimits

0x2a53,	// (0x00002b96) list_highlight_pane_cp2_copy1

0xa4b1,	// (0x0000a5f4) list_set_pane_copy1_ParamLimits

0xa4b1,	// (0x0000a5f4) list_set_pane_copy1

0xa420,	// (0x0000a563) main_pane_set_t1_copy1_ParamLimits

0xa420,	// (0x0000a563) main_pane_set_t1_copy1

0xa45a,	// (0x0000a59d) main_pane_set_t2_copy1_ParamLimits

0xa45a,	// (0x0000a59d) main_pane_set_t2_copy1

0xa55e,	// (0x0000a6a1) main_pane_set_t3_copy1

0xa56c,	// (0x0000a6af) main_pane_set_t4_copy1

0xa479,	// (0x0000a5bc) set_content_pane_g1_copy1_ParamLimits

0xa479,	// (0x0000a5bc) set_content_pane_g1_copy1

0xa57a,	// (0x0000a6bd) setting_code_pane_copy1

0xa582,	// (0x0000a6c5) setting_slider_graphic_pane_copy1

0xa582,	// (0x0000a6c5) setting_slider_pane_copy1

0xa58a,	// (0x0000a6cd) setting_text_pane_copy1

0xa58a,	// (0x0000a6cd) setting_volume_pane_copy1

0xa57a,	// (0x0000a6bd) settings_code_pane_cp2_copy1

0xa592,	// (0x0000a6d5) settings_code_pane_cp_copy1_ParamLimits

0xa592,	// (0x0000a6d5) settings_code_pane_cp_copy1

0xa5a6,	// (0x0000a6e9) volume_set_pane_copy1

0xa5ae,	// (0x0000a6f1) volume_set_pane_g10_copy1

0xa5b6,	// (0x0000a6f9) volume_set_pane_g1_copy1

0xa5be,	// (0x0000a701) volume_set_pane_g2_copy1

0xa5c6,	// (0x0000a709) volume_set_pane_g3_copy1

0xa5ce,	// (0x0000a711) volume_set_pane_g4_copy1

0xa5d6,	// (0x0000a719) volume_set_pane_g5_copy1

0xa5de,	// (0x0000a721) volume_set_pane_g6_copy1

0xa5e6,	// (0x0000a729) volume_set_pane_g7_copy1

0xa5ee,	// (0x0000a731) volume_set_pane_g8_copy1

0xa5f6,	// (0x0000a739) volume_set_pane_g9_copy1

0x03c4,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x03c4,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa5fe,	// (0x0000a741) setting_slider_pane_t1_copy1_ParamLimits

0xa5fe,	// (0x0000a741) setting_slider_pane_t1_copy1

0xa61d,	// (0x0000a760) setting_slider_pane_t2_copy1_ParamLimits

0xa61d,	// (0x0000a760) setting_slider_pane_t2_copy1

0xa637,	// (0x0000a77a) setting_slider_pane_t3_copy1_ParamLimits

0xa637,	// (0x0000a77a) setting_slider_pane_t3_copy1

0xa64f,	// (0x0000a792) slider_set_pane_copy1_ParamLimits

0xa64f,	// (0x0000a792) slider_set_pane_copy1

0x1382,	// (0x000014c5) set_opt_bg_pane_g1_copy2

0x138a,	// (0x000014cd) set_opt_bg_pane_g2_copy2

0xa665,	// (0x0000a7a8) set_opt_bg_pane_g3_copy2

0x139a,	// (0x000014dd) set_opt_bg_pane_g4_copy2

0x13a2,	// (0x000014e5) set_opt_bg_pane_g5_copy2

0x13aa,	// (0x000014ed) set_opt_bg_pane_g6_copy2

0xa66f,	// (0x0000a7b2) set_opt_bg_pane_g7_copy2

0xa677,	// (0x0000a7ba) set_opt_bg_pane_g8_copy2

0xa681,	// (0x0000a7c4) set_opt_bg_pane_g9_copy2

0xa68b,	// (0x0000a7ce) aid_size_touch_slider_mark_copy1_ParamLimits

0xa68b,	// (0x0000a7ce) aid_size_touch_slider_mark_copy1

0xa69f,	// (0x0000a7e2) slider_set_pane_g1_copy1

0xa6a8,	// (0x0000a7eb) slider_set_pane_g2_copy1

0x4d5d,	// (0x00004ea0) slider_set_pane_g3_copy1_ParamLimits

0x4d5d,	// (0x00004ea0) slider_set_pane_g3_copy1

0x4d71,	// (0x00004eb4) slider_set_pane_g4_copy1_ParamLimits

0x4d71,	// (0x00004eb4) slider_set_pane_g4_copy1

0x4d89,	// (0x00004ecc) slider_set_pane_g5_copy1_ParamLimits

0x4d89,	// (0x00004ecc) slider_set_pane_g5_copy1

0x4d5d,	// (0x00004ea0) slider_set_pane_g6_copy1_ParamLimits

0x4d5d,	// (0x00004ea0) slider_set_pane_g6_copy1

0xa6b0,	// (0x0000a7f3) slider_set_pane_g7_copy1_ParamLimits

0xa6b0,	// (0x0000a7f3) slider_set_pane_g7_copy1

0x0150,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa6c6,	// (0x0000a809) setting_slider_graphic_pane_g1_copy1

0xa6cf,	// (0x0000a812) setting_slider_graphic_pane_t1_copy1

0xa6df,	// (0x0000a822) setting_slider_graphic_pane_t2_copy1

0xa6ef,	// (0x0000a832) slider_set_pane_cp_copy1

0xa6ff,	// (0x0000a842) input_focus_pane_cp1_copy1

0xa708,	// (0x0000a84b) list_set_text_pane_copy1

0xa710,	// (0x0000a853) setting_text_pane_g1_copy1

0x04ae,	// (0x000005f1) set_text_pane_t1_copy1

0xa6ff,	// (0x0000a842) input_focus_pane_cp2_copy1

0xa710,	// (0x0000a853) setting_code_pane_g1_copy1

0xa719,	// (0x0000a85c) setting_code_pane_t1_copy1

0x5744,	// (0x00005887) list_set_graphic_pane_copy1

0x0150,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2202,	// (0x00002345) list_set_graphic_pane_g1_copy1_ParamLimits

0x2202,	// (0x00002345) list_set_graphic_pane_g1_copy1

0xa727,	// (0x0000a86a) list_set_graphic_pane_g2_copy1

0x221a,	// (0x0000235d) list_set_graphic_pane_t1_copy1_ParamLimits

0x221a,	// (0x0000235d) list_set_graphic_pane_t1_copy1

0x659a,	// (0x000066dd) rs_clock_indi_pane_g1

0xa72f,	// (0x0000a872) rs_clock_indi_pane_t1

0xa73d,	// (0x0000a880) rs_indi_pane

0xa745,	// (0x0000a888) rs_indi_pane_g1

0xa74e,	// (0x0000a891) rs_indi_pane_g2

0xa757,	// (0x0000a89a) rs_indi_pane_g3

0x0002,

0xfe99,	// (0x0000ffdc) rs_indi_pane_g

0x2504,	// (0x00002647) bg_popup_preview_window_pane_cp03

0xa760,	// (0x0000a8a3) popup_fep_tooltip_window_t1

0x77ad,	// (0x000078f0) popup_note2_window_g2_ParamLimits

0x77ad,	// (0x000078f0) popup_note2_window_g2

0x0001,

0xfc26,	// (0x0000fd69) popup_note2_window_g_ParamLimits

0xfc26,	// (0x0000fd69) popup_note2_window_g

0x7daf,	// (0x00007ef2) bg_popup_sub_pane_cp11_ParamLimits

0x7dbc,	// (0x00007eff) cell_ai3_links_pane_g1_ParamLimits

0x7dd3,	// (0x00007f16) cell_ai3_links_pane_t1

0x04ae,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2418,	// (0x0000255b) cell_graphic_popup_pane_cp2_ParamLimits

0x2418,	// (0x0000255b) cell_graphic_popup_pane_cp2

0xa76e,	// (0x0000a8b1) cell_graphic_popup_pane_g1_cp2

0x0a47,	// (0x00000b8a) cell_graphic_popup_pane_g2_cp2

0xa776,	// (0x0000a8b9) cell_graphic_popup_pane_g3_cp2

0xa77e,	// (0x0000a8c1) cell_graphic_popup_pane_t2_cp2

0x0a58,	// (0x00000b9b) grid_highlight_pane_cp3_cp2

0x1910,	// (0x00001a53) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1253,	// (0x00001396) main_tmo_pane_ParamLimits

0xe028,	// (0x0000e16b) popup_tmo_big_image_note_window

0x9b71,	// (0x00009cb4) cell_ai5_widget_list_pane

0x9b79,	// (0x00009cbc) cell_ai5_widget_lrg_icon_pane

0xf29c,	// (0x0000f3df) tmo_note_info_pane_t1_ParamLimits

0xf2b1,	// (0x0000f3f4) tmo_note_info_pane_t2_ParamLimits

0xf2c8,	// (0x0000f40b) tmo_note_info_pane_t3_ParamLimits

0xa355,	// (0x0000a498) tmo_note_info_pane_t4_ParamLimits

0xa367,	// (0x0000a4aa) tmo_note_info_pane_t5_ParamLimits

0xfe87,	// (0x0000ffca) tmo_note_info_pane_t_ParamLimits

0xa485,	// (0x0000a5c8) settings_container_pane_ParamLimits

0xa6f7,	// (0x0000a83a) indicator_popup_pane_cp5

0xa6f7,	// (0x0000a83a) indicator_popup_pane_cp6

0x5744,	// (0x00005887) list_set_graphic_pane_copy1_ParamLimits

0xf4f5,	// (0x0000f638) bg_popup_window_pane_cp23

0xa78c,	// (0x0000a8cf) popup_tmo_big_image_note_window_g1

0xa796,	// (0x0000a8d9) popup_tmo_big_image_note_window_t1

0xa7a6,	// (0x0000a8e9) popup_tmo_big_image_note_window_t2

0xa7b6,	// (0x0000a8f9) popup_tmo_big_image_note_window_t3

0x0002,

0xfea0,	// (0x0000ffe3) popup_tmo_big_image_note_window_t

0x659a,	// (0x000066dd) cell_ai5_widget_lrg_icon_pane_g1

0xa7c6,	// (0x0000a909) cell_ai5_widget_lrg_icon_pane_t1

0xa7d4,	// (0x0000a917) cell_ai5_widget_list_row_pane_ParamLimits

0xa7d4,	// (0x0000a917) cell_ai5_widget_list_row_pane

0xa7eb,	// (0x0000a92e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7eb,	// (0x0000a92e) cell_ai5_widget_list_row_pane_g1

0xa7f8,	// (0x0000a93b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7f8,	// (0x0000a93b) cell_ai5_widget_list_row_pane_t1

0xa829,	// (0x0000a96c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa829,	// (0x0000a96c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea7,	// (0x0000ffea) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea7,	// (0x0000ffea) cell_ai5_widget_list_row_pane_t

0xf4f5,	// (0x0000f638) main_fep_vtchi_ss_pane

0xa879,	// (0x0000a9bc) popup_fep_char_pre_window

0xa881,	// (0x0000a9c4) popup_fep_ituss_window

0xf315,	// (0x0000f458) popup_fep_vkbss_window

0x2a53,	// (0x00002b96) grid_vkbss_keypad_pane_ParamLimits

0x2a53,	// (0x00002b96) grid_vkbss_keypad_pane

0xa8ed,	// (0x0000aa30) ituss_keypad_pane

0xa903,	// (0x0000aa46) aid_vkbss_key_offset_ParamLimits

0xa903,	// (0x0000aa46) aid_vkbss_key_offset

0xf322,	// (0x0000f465) cell_vkbss_key_pane_ParamLimits

0xf322,	// (0x0000f465) cell_vkbss_key_pane

0xa967,	// (0x0000aaaa) bg_cell_vkbss_key_g1_ParamLimits

0xa967,	// (0x0000aaaa) bg_cell_vkbss_key_g1

0xf374,	// (0x0000f4b7) cell_vkbss_key_3p_pane_ParamLimits

0xf374,	// (0x0000f4b7) cell_vkbss_key_3p_pane

0xf3aa,	// (0x0000f4ed) cell_vkbss_key_g1_ParamLimits

0xf3aa,	// (0x0000f4ed) cell_vkbss_key_g1

0xf3e0,	// (0x0000f523) cell_vkbss_key_t1_ParamLimits

0xf3e0,	// (0x0000f523) cell_vkbss_key_t1

0xaa3b,	// (0x0000ab7e) cell_ituss_key_pane_ParamLimits

0xaa3b,	// (0x0000ab7e) cell_ituss_key_pane

0xaa4c,	// (0x0000ab8f) bg_cell_ituss_key_g1_ParamLimits

0xaa4c,	// (0x0000ab8f) bg_cell_ituss_key_g1

0xaa58,	// (0x0000ab9b) cell_ituss_key_pane_g1_ParamLimits

0xaa58,	// (0x0000ab9b) cell_ituss_key_pane_g1

0xaa6c,	// (0x0000abaf) cell_ituss_key_pane_g2_ParamLimits

0xaa6c,	// (0x0000abaf) cell_ituss_key_pane_g2

0x0005,

0xfeae,	// (0x0000fff1) cell_ituss_key_pane_g_ParamLimits

0xfeae,	// (0x0000fff1) cell_ituss_key_pane_g

0xab02,	// (0x0000ac45) cell_ituss_key_t1_ParamLimits

0xab02,	// (0x0000ac45) cell_ituss_key_t1

0xab3c,	// (0x0000ac7f) cell_ituss_key_t2_ParamLimits

0xab3c,	// (0x0000ac7f) cell_ituss_key_t2

0xab6e,	// (0x0000acb1) cell_ituss_key_t3_ParamLimits

0xab6e,	// (0x0000acb1) cell_ituss_key_t3

0xab9f,	// (0x0000ace2) cell_ituss_key_t4_ParamLimits

0xab9f,	// (0x0000ace2) cell_ituss_key_t4

0x0004,

0xfebb,	// (0x0000fffe) cell_ituss_key_t_ParamLimits

0xfebb,	// (0x0000fffe) cell_ituss_key_t

0xf43c,	// (0x0000f57f) cell_vkbss_key_3p_pane_g1

0xf444,	// (0x0000f587) cell_vkbss_key_3p_pane_g2

0xf44c,	// (0x0000f58f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec6,	// (0x00010009) cell_vkbss_key_3p_pane_g

0x2504,	// (0x00002647) bg_popup_fep_char_preview_window_cp02

0xabfa,	// (0x0000ad3d) popup_fep_char_pre_window_t1

0xf041,	// (0x0000f184) main_ai5_sk_pane

0xa3e1,	// (0x0000a524) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3ed,	// (0x0000a530) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x70a5,	// (0x000071e8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa402,	// (0x0000a545) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe92,	// (0x0000ffd5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa40e,	// (0x0000a551) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1253,	// (0x00001396) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf454,	// (0x0000f597) main_ai5_sk_pane_g1

0x3c95,	// (0x00003dd8) popup_query_code_window_g1

0xf306,	// (0x0000f449) popup_fep_vkb_icf_pane

0xa8c4,	// (0x0000aa07) popup_fep_vtchi_icf_pane

0xac11,	// (0x0000ad54) bg_icf_pane

0xac11,	// (0x0000ad54) list_vkb_icf_pane

0xac1d,	// (0x0000ad60) bg_icf_pane_cp01

0xac30,	// (0x0000ad73) vtchi_icf_list_pane

0xf4a9,	// (0x0000f5ec) list_vkb_icf_pane_t1_ParamLimits

0xf4a9,	// (0x0000f5ec) list_vkb_icf_pane_t1

0xacb1,	// (0x0000adf4) vtchi_icf_list_pane_t1_ParamLimits

0xacb1,	// (0x0000adf4) vtchi_icf_list_pane_t1

0xa881,	// (0x0000a9c4) popup_fep_ituss_window_ParamLimits

0xa8c4,	// (0x0000aa07) popup_fep_vtchi_icf_pane_ParamLimits

0xa8ed,	// (0x0000aa30) ituss_keypad_pane_ParamLimits

0xa8f9,	// (0x0000aa3c) ituss_sks_pane

0xac11,	// (0x0000ad54) bg_icf_pane_ParamLimits

0xf2eb,	// (0x0000f42e) icf_edit_indi_pane_ParamLimits

0xf2eb,	// (0x0000f42e) icf_edit_indi_pane

0xac11,	// (0x0000ad54) list_vkb_icf_pane_ParamLimits

0xac1d,	// (0x0000ad60) bg_icf_pane_cp01_ParamLimits

0xa86c,	// (0x0000a9af) icf_edit_indi_pane_cp01_ParamLimits

0xa86c,	// (0x0000a9af) icf_edit_indi_pane_cp01

0xac30,	// (0x0000ad73) vtchi_query_pane

0x990c,	// (0x00009a4f) icf_edit_indi_pane_g1_ParamLimits

0x990c,	// (0x00009a4f) icf_edit_indi_pane_g1

0xf4c0,	// (0x0000f603) icf_edit_indi_pane_g2_ParamLimits

0xf4c0,	// (0x0000f603) icf_edit_indi_pane_g2

0x0001,

0xfef1,	// (0x00010034) icf_edit_indi_pane_g_ParamLimits

0xfef1,	// (0x00010034) icf_edit_indi_pane_g

0xf4d4,	// (0x0000f617) icf_edit_indi_pane_t1

0xaccf,	// (0x0000ae12) bg_input_focus_pane_cp042

0x0c2b,	// (0x00000d6e) vtchi_button_pane

0xacd8,	// (0x0000ae1b) vtchi_query_pane_t1

0xace6,	// (0x0000ae29) vtchi_query_pane_t2

0xacf4,	// (0x0000ae37) vtchi_query_pane_t3

0x0002,

0xfee0,	// (0x00010023) vtchi_query_pane_t

0xf4f5,	// (0x0000f638) bg_button_pane_cp13

0xad02,	// (0x0000ae45) vtchi_button_pane_g1

0xad0a,	// (0x0000ae4d) ituss_sks_pane_g1

0xad15,	// (0x0000ae58) ituss_sks_pane_g2

0x0001,

0xfee7,	// (0x0001002a) ituss_sks_pane_g

0xad1d,	// (0x0000ae60) ituss_sks_pane_t1

0xad2b,	// (0x0000ae6e) ituss_sks_pane_t2

0x0001,

0xfeec,	// (0x0001002f) ituss_sks_pane_t

0x5f7c,	// (0x000060bf) indicator_nsta_pane_cp_g1

0x5f85,	// (0x000060c8) indicator_nsta_pane_cp_g2

0x5f8d,	// (0x000060d0) indicator_nsta_pane_cp_g3

0x5f95,	// (0x000060d8) indicator_nsta_pane_cp_g4

0x5f85,	// (0x000060c8) indicator_nsta_pane_cp_g5

0x5f8d,	// (0x000060d0) indicator_nsta_pane_cp_g6

0x0005,

0xfa70,	// (0x0000fbb3) indicator_nsta_pane_cp_g

0xede4,	// (0x0000ef27) cell_graphic2_pane_t2_ParamLimits

0xede4,	// (0x0000ef27) cell_graphic2_pane_t2

0x0001,

0xfd7d,	// (0x0000fec0) cell_graphic2_pane_t_ParamLimits

0xfd7d,	// (0x0000fec0) cell_graphic2_pane_t

0xee19,	// (0x0000ef5c) cell_graphic2_control_pane_t1

0xc3c2,	// (0x0000c505) signal_pane_g3_ParamLimits

0xc3c2,	// (0x0000c505) signal_pane_g3

0xc3d6,	// (0x0000c519) signal_pane_g4_ParamLimits

0xc3d6,	// (0x0000c519) signal_pane_g4

0xa83b,	// (0x0000a97e) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa83b,	// (0x0000a97e) cell_ai5_widget_list_row_pane_t3

0xaaf0,	// (0x0000ac33) cell_ituss_key_pane_t1_ParamLimits

0xaaf0,	// (0x0000ac33) cell_ituss_key_pane_t1

0x3895,	// (0x000039d8) form_field_data_wide_pane_vc_t2_ParamLimits

0x3895,	// (0x000039d8) form_field_data_wide_pane_vc_t2

0x38a9,	// (0x000039ec) form_field_data_wide_pane_vc_t3_ParamLimits

0x38a9,	// (0x000039ec) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x0000f916) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x0000f916) form_field_data_wide_pane_vc_t

0x5c26,	// (0x00005d69) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c26,	// (0x00005d69) form_field_slider_wide_pane_vc_t3

0x5d04,	// (0x00005e47) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d04,	// (0x00005e47) form_field_popup_wide_pane_vc_t2

0x5d1b,	// (0x00005e5e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d1b,	// (0x00005e5e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa5f,	// (0x0000fba2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0000fba2) form_field_popup_wide_pane_vc_t

0xf0b7,	// (0x0000f1fa) aid_fshwr2_btn_pane_ParamLimits

0xf0c7,	// (0x0000f20a) aid_fshwr2_syb_pane_ParamLimits

0xf0db,	// (0x0000f21e) aid_fshwr2_txt_pane_ParamLimits

0x1253,	// (0x00001396) fshwr2_bg_pane_ParamLimits

0xf0eb,	// (0x0000f22e) fshwr2_func_candi_pane_ParamLimits

0xf10b,	// (0x0000f24e) fshwr2_hwr_syb_pane_ParamLimits

0xf12d,	// (0x0000f270) fshwr2_icf_pane_ParamLimits

0x5b8c,	// (0x00005ccf) list_double_graphic_pane_vc_g4_ParamLimits

0x5b8c,	// (0x00005ccf) list_double_graphic_pane_vc_g4

0xaa8c,	// (0x0000abcf) cell_ituss_key_pane_g3_ParamLimits

0xaa8c,	// (0x0000abcf) cell_ituss_key_pane_g3

0xabd0,	// (0x0000ad13) cell_ituss_key_t5_ParamLimits

0xabd0,	// (0x0000ad13) cell_ituss_key_t5

0xf315,	// (0x0000f458) popup_fep_vkbss_window_ParamLimits

0x9afc,	// (0x00009c3f) aid_cell_ai5_quarter

0xf4d4,	// (0x0000f617) icf_edit_indi_pane_t1_ParamLimits

0x07a0,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x07a0,	// (0x000008e3) aid_tch_indicator_popup_pane_cp2

0x07b3,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x07b3,	// (0x000008f6) aid_tch_query_popup_data_pane_cp2

0x3c3d,	// (0x00003d80) aid_tch_query_popup_pane_ParamLimits

0x3c3d,	// (0x00003d80) aid_tch_query_popup_pane

0x3c3d,	// (0x00003d80) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3c3d,	// (0x00003d80) aid_tch_query_popup_data_pane_cp1

0x2a53,	// (0x00002b96) cell_fshwr2_syb_bg_pane_ParamLimits

0xf25c,	// (0x0000f39f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf26f,	// (0x0000f3b2) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf306,	// (0x0000f449) popup_fep_vkb_icf_pane_ParamLimits

0xeee9,	// (0x0000f02c) bg_popup_fep_char_preview_window_g10

0x9c39,	// (0x00009d7c) cell_ai5_widget_pane_g11_ParamLimits

0x9c39,	// (0x00009d7c) cell_ai5_widget_pane_g11

0x9c45,	// (0x00009d88) cell_ai5_widget_pane_g12_ParamLimits

0x9c45,	// (0x00009d88) cell_ai5_widget_pane_g12

0x9c51,	// (0x00009d94) cell_ai5_widget_pane_g13_ParamLimits

0x9c51,	// (0x00009d94) cell_ai5_widget_pane_g13

0x9d80,	// (0x00009ec3) cell_ai5_widget_pane_t11_ParamLimits

0x9d80,	// (0x00009ec3) cell_ai5_widget_pane_t11

0x9d92,	// (0x00009ed5) cell_ai5_widget_pane_t12_ParamLimits

0x9d92,	// (0x00009ed5) cell_ai5_widget_pane_t12

0xaa98,	// (0x0000abdb) cell_ituss_key_pane_g4_ParamLimits

0xaa98,	// (0x0000abdb) cell_ituss_key_pane_g4

0xaab4,	// (0x0000abf7) cell_ituss_key_pane_g5_ParamLimits

0xaab4,	// (0x0000abf7) cell_ituss_key_pane_g5

0xaad0,	// (0x0000ac13) cell_ituss_key_pane_g6_ParamLimits

0xaad0,	// (0x0000ac13) cell_ituss_key_pane_g6

0x35ce,	// (0x00003711) bg_icf_pane_g1

0xf45d,	// (0x0000f5a0) bg_icf_pane_g2

0xf467,	// (0x0000f5aa) bg_icf_pane_g3

0xf46f,	// (0x0000f5b2) bg_icf_pane_g4

0xf479,	// (0x0000f5bc) bg_icf_pane_g5

0xf483,	// (0x0000f5c6) bg_icf_pane_g6

0xf48d,	// (0x0000f5d0) bg_icf_pane_g7

0xf495,	// (0x0000f5d8) bg_icf_pane_g8

0xf49f,	// (0x0000f5e2) bg_icf_pane_g9

0x0008,

0xfecd,	// (0x00010010) bg_icf_pane_g

0xa8da,	// (0x0000aa1d) popup_hyb_candi_window_ParamLimits

0xa8da,	// (0x0000aa1d) popup_hyb_candi_window

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp01_ParamLimits

0x377c,	// (0x000038bf) bg_popup_sub_pane_cp01

0xad66,	// (0x0000aea9) entry_hyb_candi_pane_ParamLimits

0xad66,	// (0x0000aea9) entry_hyb_candi_pane

0xad75,	// (0x0000aeb8) grid_hyb_candi_pane_ParamLimits

0xad75,	// (0x0000aeb8) grid_hyb_candi_pane

0xad8a,	// (0x0000aecd) grid_hyb_phrase_pane_ParamLimits

0xad8a,	// (0x0000aecd) grid_hyb_phrase_pane

0xad99,	// (0x0000aedc) cell_hyb_candi_pane_ParamLimits

0xad99,	// (0x0000aedc) cell_hyb_candi_pane

0xadbc,	// (0x0000aeff) cell_hyb_candi_scroll_pane

0x1c31,	// (0x00001d74) cell_hyb_candi_pane_g1

0xadc5,	// (0x0000af08) cell_hyb_candi_pane_t1

0xadd3,	// (0x0000af16) cell_hyb_phrase_pane

0x1c31,	// (0x00001d74) cell_hyb_phrase_pane_g1

0xaddc,	// (0x0000af1f) cell_hyb_phrase_pane_t1

0xadea,	// (0x0000af2d) entry_hyb_candi_pane_t1

0x2504,	// (0x00002647) input_focus_pane_cp06

0xadf8,	// (0x0000af3b) cell_hyb_candi_scroll_pane_g1

0xae00,	// (0x0000af43) cell_hyb_candi_scroll_pane_g1_aid

0xae08,	// (0x0000af4b) cell_hyb_candi_scroll_pane_g2

0xae10,	// (0x0000af53) cell_hyb_candi_scroll_pane_g2_aid

0xae18,	// (0x0000af5b) cell_hyb_candi_scroll_pane_g3

0xae20,	// (0x0000af63) cell_hyb_candi_scroll_pane_g4
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

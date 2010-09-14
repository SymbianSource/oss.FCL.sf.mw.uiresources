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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00058c81 };

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
0x9c53,	// (0x000628d4) Screen

0x9c5f,	// (0x000628e0) application_window_ParamLimits

0x9c5f,	// (0x000628e0) application_window

0x8a30,	// (0x000616b1) screen_g1

0x9c97,	// (0x00062918) area_bottom_pane_ParamLimits

0x9c97,	// (0x00062918) area_bottom_pane

0xedd4,	// (0x00067a55) area_top_pane_ParamLimits

0xedd4,	// (0x00067a55) area_top_pane

0xee72,	// (0x00067af3) main_pane_ParamLimits

0xee72,	// (0x00067af3) main_pane

0x8a3a,	// (0x000616bb) misc_graphics

0xc0cb,	// (0x00064d4c) battery_pane_ParamLimits

0xc0cb,	// (0x00064d4c) battery_pane

0x353b,	// (0x0005c1bc) bg_status_flat_pane_g8

0x3543,	// (0x0005c1c4) bg_status_flat_pane_g9

0x2923,	// (0x0005b5a4) context_pane_ParamLimits

0x2923,	// (0x0005b5a4) context_pane

0xc242,	// (0x00064ec3) navi_pane_ParamLimits

0xc242,	// (0x00064ec3) navi_pane

0xc2cc,	// (0x00064f4d) signal_pane_ParamLimits

0xc2cc,	// (0x00064f4d) signal_pane

0x0008,

0xf854,	// (0x000684d5) bg_status_flat_pane_g

0xc35c,	// (0x00064fdd) status_pane_g1_ParamLimits

0xc35c,	// (0x00064fdd) status_pane_g1

0xc372,	// (0x00064ff3) status_pane_g2_ParamLimits

0xc372,	// (0x00064ff3) status_pane_g2

0x2b5c,	// (0x0005b7dd) status_pane_g3_ParamLimits

0x2b5c,	// (0x0005b7dd) status_pane_g3

0x0004,

0xf780,	// (0x00068401) status_pane_g_ParamLimits

0xf780,	// (0x00068401) status_pane_g

0xc37e,	// (0x00064fff) title_pane_ParamLimits

0xc37e,	// (0x00064fff) title_pane

0xc3e5,	// (0x00065066) uni_indicator_pane_ParamLimits

0xc3e5,	// (0x00065066) uni_indicator_pane

0x278d,	// (0x0005b40e) bg_list_pane_ParamLimits

0x278d,	// (0x0005b40e) bg_list_pane

0xaeac,	// (0x00063b2d) find_pane

0x2d6f,	// (0x0005b9f0) listscroll_app_pane_ParamLimits

0x2d6f,	// (0x0005b9f0) listscroll_app_pane

0x27b9,	// (0x0005b43a) listscroll_form_pane

0x9c3f,	// (0x000628c0) listscroll_gen_pane_ParamLimits

0x9c3f,	// (0x000628c0) listscroll_gen_pane

0x016d,	// (0x00058dee) listscroll_set_pane

0x429b,	// (0x0005cf1c) main_idle_act_pane

0x2486,	// (0x0005b107) main_idle_trad_pane

0x2486,	// (0x0005b107) main_list_empty_pane

0x27ad,	// (0x0005b42e) main_midp_pane

0x27d3,	// (0x0005b454) main_pane_g1_ParamLimits

0x27d3,	// (0x0005b454) main_pane_g1

0xaeb4,	// (0x00063b35) popup_ai_message_window_ParamLimits

0xaeb4,	// (0x00063b35) popup_ai_message_window

0xaf54,	// (0x00063bd5) popup_fep_china_uni_window_ParamLimits

0xaf54,	// (0x00063bd5) popup_fep_china_uni_window

0x0297,	// (0x00058f18) popup_fep_japan_candidate_window_ParamLimits

0x0297,	// (0x00058f18) popup_fep_japan_candidate_window

0x02c1,	// (0x00058f42) popup_fep_japan_predictive_window_ParamLimits

0x02c1,	// (0x00058f42) popup_fep_japan_predictive_window

0xafb4,	// (0x00063c35) popup_find_window

0xafd1,	// (0x00063c52) popup_grid_graphic_window_ParamLimits

0xafd1,	// (0x00063c52) popup_grid_graphic_window

0x0334,	// (0x00058fb5) popup_large_graphic_colour_window

0xb07b,	// (0x00063cfc) popup_menu_window_ParamLimits

0xb07b,	// (0x00063cfc) popup_menu_window

0xb26b,	// (0x00063eec) popup_note_image_window

0xb22b,	// (0x00063eac) popup_note_wait_window_ParamLimits

0xb22b,	// (0x00063eac) popup_note_wait_window

0xb283,	// (0x00063f04) popup_note_window_ParamLimits

0xb283,	// (0x00063f04) popup_note_window

0xb331,	// (0x00063fb2) popup_query_code_window_ParamLimits

0xb331,	// (0x00063fb2) popup_query_code_window

0x05a0,	// (0x00059221) popup_query_data_code_window_ParamLimits

0x05a0,	// (0x00059221) popup_query_data_code_window

0xb371,	// (0x00063ff2) popup_query_data_window_ParamLimits

0xb371,	// (0x00063ff2) popup_query_data_window

0xb405,	// (0x00064086) popup_query_sat_info_window_ParamLimits

0xb405,	// (0x00064086) popup_query_sat_info_window

0xb4ae,	// (0x0006412f) popup_snote_single_graphic_window_ParamLimits

0xb4ae,	// (0x0006412f) popup_snote_single_graphic_window

0xb4ae,	// (0x0006412f) popup_snote_single_text_window_ParamLimits

0xb4ae,	// (0x0006412f) popup_snote_single_text_window

0x063b,	// (0x000592bc) popup_sub_window_general

0x0781,	// (0x00059402) popup_window_general_ParamLimits

0x0781,	// (0x00059402) popup_window_general

0x27e1,	// (0x0005b462) power_save_pane

0xad08,	// (0x00063989) control_pane_g1_ParamLimits

0xad08,	// (0x00063989) control_pane_g1

0xad31,	// (0x000639b2) control_pane_g2_ParamLimits

0xad31,	// (0x000639b2) control_pane_g2

0x2750,	// (0x0005b3d1) control_pane_g3_ParamLimits

0x2750,	// (0x0005b3d1) control_pane_g3

0x0007,

0xf768,	// (0x000683e9) control_pane_g_ParamLimits

0xf768,	// (0x000683e9) control_pane_g

0xad97,	// (0x00063a18) control_pane_t1_ParamLimits

0xad97,	// (0x00063a18) control_pane_t1

0xadff,	// (0x00063a80) control_pane_t2_ParamLimits

0xadff,	// (0x00063a80) control_pane_t2

0x0002,

0xf779,	// (0x000683fa) control_pane_t_ParamLimits

0xf779,	// (0x000683fa) control_pane_t

0xac61,	// (0x000638e2) navi_navi_volume_pane_cp1

0xac69,	// (0x000638ea) status_small_icon_pane

0x2685,	// (0x0005b306) status_small_pane_g1_ParamLimits

0x2685,	// (0x0005b306) status_small_pane_g1

0xac71,	// (0x000638f2) status_small_pane_g2_ParamLimits

0xac71,	// (0x000638f2) status_small_pane_g2

0xac7d,	// (0x000638fe) status_small_pane_g3_ParamLimits

0xac7d,	// (0x000638fe) status_small_pane_g3

0xac89,	// (0x0006390a) status_small_pane_g4_ParamLimits

0xac89,	// (0x0006390a) status_small_pane_g4

0xac95,	// (0x00063916) status_small_pane_g5_ParamLimits

0xac95,	// (0x00063916) status_small_pane_g5

0xaca3,	// (0x00063924) status_small_pane_g6_ParamLimits

0xaca3,	// (0x00063924) status_small_pane_g6

0x0007,

0xf757,	// (0x000683d8) status_small_pane_g_ParamLimits

0xf757,	// (0x000683d8) status_small_pane_g

0xacd2,	// (0x00063953) status_small_pane_t1

0xacf4,	// (0x00063975) status_small_wait_pane_ParamLimits

0xacf4,	// (0x00063975) status_small_wait_pane

0xaa47,	// (0x000636c8) aid_levels_signal_ParamLimits

0xaa47,	// (0x000636c8) aid_levels_signal

0xaa5f,	// (0x000636e0) signal_pane_g1_ParamLimits

0xaa5f,	// (0x000636e0) signal_pane_g1

0xaa7a,	// (0x000636fb) signal_pane_g2_ParamLimits

0xaa7a,	// (0x000636fb) signal_pane_g2

0x0003,

0xf6e8,	// (0x00068369) signal_pane_g_ParamLimits

0xf6e8,	// (0x00068369) signal_pane_g

0xe10b,	// (0x00066d8c) context_pane_g1

0x9e83,	// (0x00062b04) title_pane_g1

0x9ec6,	// (0x00062b47) title_pane_t1

0x8a50,	// (0x000616d1) title_pane_t2

0x8a76,	// (0x000616f7) title_pane_t3

0x0002,

0xf532,	// (0x000681b3) title_pane_t

0xc40d,	// (0x0006508e) aid_levels_battery_ParamLimits

0xc40d,	// (0x0006508e) aid_levels_battery

0xc429,	// (0x000650aa) battery_pane_g1_ParamLimits

0xc429,	// (0x000650aa) battery_pane_g1

0xc446,	// (0x000650c7) battery_pane_g2_ParamLimits

0xc446,	// (0x000650c7) battery_pane_g2

0x0001,

0xf78b,	// (0x0006840c) battery_pane_g_ParamLimits

0xf78b,	// (0x0006840c) battery_pane_g

0xc647,	// (0x000652c8) uni_indicator_pane_g1

0xc65d,	// (0x000652de) uni_indicator_pane_g2

0xc673,	// (0x000652f4) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0006857d) uni_indicator_pane_g

0x22e9,	// (0x0005af6a) navi_icon_pane_ParamLimits

0x22e9,	// (0x0005af6a) navi_icon_pane

0x2231,	// (0x0005aeb2) navi_midp_pane

0x2305,	// (0x0005af86) navi_navi_pane

0x230f,	// (0x0005af90) navi_text_pane_ParamLimits

0x230f,	// (0x0005af90) navi_text_pane

0x8a30,	// (0x000616b1) status_small_wait_pane_g1

0x8d97,	// (0x00061a18) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00068578) status_small_wait_pane_g

0xc5e6,	// (0x00065267) navi_navi_icon_text_pane

0xc5ee,	// (0x0006526f) navi_navi_pane_g1_ParamLimits

0xc5ee,	// (0x0006526f) navi_navi_pane_g1

0xc600,	// (0x00065281) navi_navi_pane_g2_ParamLimits

0xc600,	// (0x00065281) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00068546) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00068546) navi_navi_pane_g

0x3d87,	// (0x0005ca08) navi_navi_tabs_pane

0xc612,	// (0x00065293) navi_navi_text_pane

0xc5e6,	// (0x00065267) navi_navi_volume_pane

0xc5d4,	// (0x00065255) navi_text_pane_t1

0xc5c8,	// (0x00065249) navi_icon_pane_g1

0x3c7e,	// (0x0005c8ff) navi_navi_text_pane_t1

0xb7bb,	// (0x0006443c) navi_navi_volume_pane_g1

0xb7c3,	// (0x00064444) volume_small_pane

0xc524,	// (0x000651a5) navi_navi_icon_text_pane_g1

0xc52c,	// (0x000651ad) navi_navi_icon_text_pane_t1

0x2305,	// (0x0005af86) navi_tabs_2_long_pane

0x2305,	// (0x0005af86) navi_tabs_2_pane

0x2305,	// (0x0005af86) navi_tabs_3_long_pane

0x2305,	// (0x0005af86) navi_tabs_3_pane

0x2305,	// (0x0005af86) navi_tabs_4_pane

0xb79b,	// (0x0006441c) tabs_2_active_pane_ParamLimits

0xb79b,	// (0x0006441c) tabs_2_active_pane

0xb7ab,	// (0x0006442c) tabs_2_passive_pane_ParamLimits

0xb7ab,	// (0x0006442c) tabs_2_passive_pane

0xb769,	// (0x000643ea) tabs_3_active_pane_ParamLimits

0xb769,	// (0x000643ea) tabs_3_active_pane

0xb779,	// (0x000643fa) tabs_3_passive_pane_ParamLimits

0xb779,	// (0x000643fa) tabs_3_passive_pane

0xb78a,	// (0x0006440b) tabs_3_passive_pane_cp_ParamLimits

0xb78a,	// (0x0006440b) tabs_3_passive_pane_cp

0xb725,	// (0x000643a6) tabs_4_active_pane_ParamLimits

0xb725,	// (0x000643a6) tabs_4_active_pane

0xb736,	// (0x000643b7) tabs_4_passive_pane_ParamLimits

0xb736,	// (0x000643b7) tabs_4_passive_pane

0xb747,	// (0x000643c8) tabs_4_passive_pane_cp_ParamLimits

0xb747,	// (0x000643c8) tabs_4_passive_pane_cp

0xb758,	// (0x000643d9) tabs_4_passive_pane_cp2_ParamLimits

0xb758,	// (0x000643d9) tabs_4_passive_pane_cp2

0xb701,	// (0x00064382) tabs_2_long_active_pane_ParamLimits

0xb701,	// (0x00064382) tabs_2_long_active_pane

0xb713,	// (0x00064394) tabs_2_long_passive_pane_ParamLimits

0xb713,	// (0x00064394) tabs_2_long_passive_pane

0xb6b6,	// (0x00064337) tabs_3_long_active_pane_ParamLimits

0xb6b6,	// (0x00064337) tabs_3_long_active_pane

0xb6cf,	// (0x00064350) tabs_3_long_passive_pane_ParamLimits

0xb6cf,	// (0x00064350) tabs_3_long_passive_pane

0xb6e8,	// (0x00064369) tabs_3_long_passive_pane_cp_ParamLimits

0xb6e8,	// (0x00064369) tabs_3_long_passive_pane_cp

0x0902,	// (0x00059583) volume_small_pane_g1

0xb665,	// (0x000642e6) volume_small_pane_g2

0xb66e,	// (0x000642ef) volume_small_pane_g3

0xb677,	// (0x000642f8) volume_small_pane_g4

0xb680,	// (0x00064301) volume_small_pane_g5

0xb689,	// (0x0006430a) volume_small_pane_g6

0xb692,	// (0x00064313) volume_small_pane_g7

0xb69b,	// (0x0006431c) volume_small_pane_g8

0xb6a4,	// (0x00064325) volume_small_pane_g9

0xb6ad,	// (0x0006432e) volume_small_pane_g10

0x0009,

0xf891,	// (0x00068512) volume_small_pane_g

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp2_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp2

0x9f52,	// (0x00062bd3) tabs_3_active_pane_g1

0x9f5a,	// (0x00062bdb) tabs_3_active_pane_t1

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp2_ParamLimits

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp2

0x9f52,	// (0x00062bd3) tabs_3_passive_pane_g1

0x9f5a,	// (0x00062bdb) tabs_3_passive_pane_t1

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp3_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp3

0x9f6c,	// (0x00062bed) tabs_4_active_pane_g1

0x9f74,	// (0x00062bf5) tabs_4_active_pane_t1

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp3_ParamLimits

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp3

0x9f6c,	// (0x00062bed) tabs_4_1_passive_pane_g1

0x9f74,	// (0x00062bf5) tabs_4_1_passive_pane_t1

0x27ad,	// (0x0005b42e) list_highlight_pane_cp2

0xc706,	// (0x00065387) list_set_pane_ParamLimits

0xc706,	// (0x00065387) list_set_pane

0xc7c8,	// (0x00065449) main_pane_set_t1_ParamLimits

0xc7c8,	// (0x00065449) main_pane_set_t1

0xc7e8,	// (0x00065469) main_pane_set_t2_ParamLimits

0xc7e8,	// (0x00065469) main_pane_set_t2

0xc7fc,	// (0x0006547d) main_pane_set_t3_ParamLimits

0xc7fc,	// (0x0006547d) main_pane_set_t3

0xc810,	// (0x00065491) main_pane_set_t4_ParamLimits

0xc810,	// (0x00065491) main_pane_set_t4

0x0003,

0xf961,	// (0x000685e2) main_pane_set_t_ParamLimits

0xf961,	// (0x000685e2) main_pane_set_t

0xc824,	// (0x000654a5) setting_code_pane

0x43e9,	// (0x0005d06a) setting_slider_graphic_pane

0x43e9,	// (0x0005d06a) setting_slider_pane

0x43e9,	// (0x0005d06a) setting_text_pane

0x43e9,	// (0x0005d06a) setting_volume_pane

0xef81,	// (0x00067c02) volume_set_pane

0x8a88,	// (0x00061709) bg_set_opt_pane_cp

0xef8b,	// (0x00067c0c) setting_slider_pane_t1

0xefa4,	// (0x00067c25) setting_slider_pane_t2

0xefbe,	// (0x00067c3f) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000681ba) setting_slider_pane_t

0xefd6,	// (0x00067c57) slider_set_pane

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp2

0x8a96,	// (0x00061717) setting_slider_graphic_pane_g1

0xefec,	// (0x00067c6d) setting_slider_graphic_pane_t1

0xeffc,	// (0x00067c7d) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000681c1) setting_slider_graphic_pane_t

0xf00c,	// (0x00067c8d) slider_set_pane_cp

0x8a3a,	// (0x000616bb) input_focus_pane_cp1

0x4282,	// (0x0005cf03) list_set_text_pane

0x8a30,	// (0x000616b1) setting_text_pane_g1

0x8a3a,	// (0x000616bb) input_focus_pane_cp2

0x8a30,	// (0x000616b1) setting_code_pane_g1

0x8a9f,	// (0x00061720) setting_code_pane_t1

0xdbee,	// (0x0006686f) set_text_pane_t1_ParamLimits

0xdbee,	// (0x0006686f) set_text_pane_t1

0x9130,	// (0x00061db1) set_opt_bg_pane_g1

0x9138,	// (0x00061db9) set_opt_bg_pane_g2

0x425a,	// (0x0005cedb) set_opt_bg_pane_g3

0x9148,	// (0x00061dc9) set_opt_bg_pane_g4

0x9150,	// (0x00061dd1) set_opt_bg_pane_g5

0x9158,	// (0x00061dd9) set_opt_bg_pane_g6

0x4264,	// (0x0005cee5) set_opt_bg_pane_g7

0x426e,	// (0x0005ceef) set_opt_bg_pane_g8

0x4278,	// (0x0005cef9) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x000685cf) set_opt_bg_pane_g

0x424d,	// (0x0005cece) slider_set_pane_g1

0x0b0e,	// (0x0005978f) slider_set_pane_g2

0x0006,

0xf93f,	// (0x000685c0) slider_set_pane_g

0x0a6e,	// (0x000596ef) volume_set_pane_g1

0x0a78,	// (0x000596f9) volume_set_pane_g2

0x0a82,	// (0x00059703) volume_set_pane_g3

0x0a8c,	// (0x0005970d) volume_set_pane_g4

0x0a96,	// (0x00059717) volume_set_pane_g5

0x0aa0,	// (0x00059721) volume_set_pane_g6

0x0aaa,	// (0x0005972b) volume_set_pane_g7

0x0ab4,	// (0x00059735) volume_set_pane_g8

0x0abe,	// (0x0005973f) volume_set_pane_g9

0x0ac8,	// (0x00059749) volume_set_pane_g10

0x0009,

0xf917,	// (0x00068598) volume_set_pane_g

0x9f86,	// (0x00062c07) indicator_pane_ParamLimits

0x9f86,	// (0x00062c07) indicator_pane

0x9fb2,	// (0x00062c33) main_idle_pane_g2_ParamLimits

0x9fb2,	// (0x00062c33) main_idle_pane_g2

0x9fea,	// (0x00062c6b) main_pane_idle_g1_ParamLimits

0x9fea,	// (0x00062c6b) main_pane_idle_g1

0x8aad,	// (0x0006172e) popup_clock_digital_analogue_window_ParamLimits

0x8aad,	// (0x0006172e) popup_clock_digital_analogue_window

0xa014,	// (0x00062c95) soft_indicator_pane_ParamLimits

0xa014,	// (0x00062c95) soft_indicator_pane

0xa030,	// (0x00062cb1) wallpaper_pane_ParamLimits

0xa030,	// (0x00062cb1) wallpaper_pane

0x8a30,	// (0x000616b1) wallpaper_pane_g1

0xa042,	// (0x00062cc3) indicator_pane_g1_ParamLimits

0xa042,	// (0x00062cc3) indicator_pane_g1

0x4676,	// (0x0005d2f7) navi_navi_icon_text_pane_srt_g1

0x8adb,	// (0x0006175c) soft_indicator_pane_t1

0x8af5,	// (0x00061776) aid_ps_area_pane

0xa05b,	// (0x00062cdc) aid_ps_clock_pane

0x8b06,	// (0x00061787) aid_ps_indicator_pane

0x8b12,	// (0x00061793) indicator_ps_pane_ParamLimits

0x8b12,	// (0x00061793) indicator_ps_pane

0x8b21,	// (0x000617a2) power_save_pane_g1_ParamLimits

0x8b21,	// (0x000617a2) power_save_pane_g1

0x8b2d,	// (0x000617ae) power_save_pane_g2_ParamLimits

0x8b2d,	// (0x000617ae) power_save_pane_g2

0xedb4,	// (0x00067a35) aid_navinavi_width_pane

0x8af5,	// (0x00061776) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000681c6) power_save_pane_g_ParamLimits

0xf545,	// (0x000681c6) power_save_pane_g

0x8b3b,	// (0x000617bc) power_save_pane_t1_ParamLimits

0x8b3b,	// (0x000617bc) power_save_pane_t1

0xa05b,	// (0x00062cdc) aid_ps_clock_pane_ParamLimits

0x8b06,	// (0x00061787) aid_ps_indicator_pane_ParamLimits

0x8b4d,	// (0x000617ce) power_save_pane_t4_ParamLimits

0x8b4d,	// (0x000617ce) power_save_pane_t4

0x0001,

0xf54a,	// (0x000681cb) power_save_pane_t_ParamLimits

0xf54a,	// (0x000681cb) power_save_pane_t

0x8b77,	// (0x000617f8) power_save_t3_ParamLimits

0x8b77,	// (0x000617f8) power_save_t3

0x8b62,	// (0x000617e3) power_save_t2_ParamLimits

0x8b62,	// (0x000617e3) power_save_t2

0x8b8c,	// (0x0006180d) indicator_ps_pane_g1

0xa069,	// (0x00062cea) ai_gene_pane_ParamLimits

0xa069,	// (0x00062cea) ai_gene_pane

0xa080,	// (0x00062d01) ai_links_pane_ParamLimits

0xa080,	// (0x00062d01) ai_links_pane

0xa098,	// (0x00062d19) indicator_pane_cp1_ParamLimits

0xa098,	// (0x00062d19) indicator_pane_cp1

0xa0a7,	// (0x00062d28) main_pane_idle_g1_cp_ParamLimits

0xa0a7,	// (0x00062d28) main_pane_idle_g1_cp

0x8b95,	// (0x00061816) popup_ai_links_title_window

0xa0bf,	// (0x00062d40) soft_indicator_pane_cp1_ParamLimits

0xa0bf,	// (0x00062d40) soft_indicator_pane_cp1

0x4036,	// (0x0005ccb7) ai_links_pane_g1

0x403f,	// (0x0005ccc0) grid_ai_links_pane

0xc63e,	// (0x000652bf) ai_gene_pane_1

0x4024,	// (0x0005cca5) ai_gene_pane_2

0x402d,	// (0x0005ccae) list_highlight_pane_cp4

0xc61a,	// (0x0006529b) cell_ai_link_pane_ParamLimits

0xc61a,	// (0x0006529b) cell_ai_link_pane

0x3ff3,	// (0x0005cc74) cell_ai_link_pane_g1

0x8d97,	// (0x00061a18) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00068573) cell_ai_link_pane_g

0x8a3a,	// (0x000616bb) grid_highlight_cp2

0x8a3a,	// (0x000616bb) bg_popup_sub_pane_cp1

0x8bac,	// (0x0006182d) popup_ai_links_title_window_t1

0x3f3f,	// (0x0005cbc0) ai_gene_pane_1_g1_ParamLimits

0x3f3f,	// (0x0005cbc0) ai_gene_pane_1_g1

0x3f4b,	// (0x0005cbcc) ai_gene_pane_1_g2_ParamLimits

0x3f4b,	// (0x0005cbcc) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00068569) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00068569) ai_gene_pane_1_g

0x3f58,	// (0x0005cbd9) ai_gene_pane_1_t1_ParamLimits

0x3f58,	// (0x0005cbd9) ai_gene_pane_1_t1

0x3f8c,	// (0x0005cc0d) grid_ai_soft_ind_pane

0x3f2a,	// (0x0005cbab) ai_gene_pane_2_t1_ParamLimits

0x3f2a,	// (0x0005cbab) ai_gene_pane_2_t1

0xa0d3,	// (0x00062d54) main_pane_empty_t1_ParamLimits

0xa0d3,	// (0x00062d54) main_pane_empty_t1

0xa0eb,	// (0x00062d6c) main_pane_empty_t2_ParamLimits

0xa0eb,	// (0x00062d6c) main_pane_empty_t2

0xa100,	// (0x00062d81) main_pane_empty_t3_ParamLimits

0xa100,	// (0x00062d81) main_pane_empty_t3

0xa112,	// (0x00062d93) main_pane_empty_t4_ParamLimits

0xa112,	// (0x00062d93) main_pane_empty_t4

0xa124,	// (0x00062da5) main_pane_empty_t5_ParamLimits

0xa124,	// (0x00062da5) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000681d0) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000681d0) main_pane_empty_t

0x91bf,	// (0x00061e40) bg_popup_window_pane_ParamLimits

0x91bf,	// (0x00061e40) bg_popup_window_pane

0x3c8c,	// (0x0005c90d) find_popup_pane_cp2_ParamLimits

0x3c8c,	// (0x0005c90d) find_popup_pane_cp2

0x3c98,	// (0x0005c919) heading_pane_ParamLimits

0x3c98,	// (0x0005c919) heading_pane

0x8a3a,	// (0x000616bb) bg_popup_sub_pane

0xc549,	// (0x000651ca) bg_popup_window_pane_g1_ParamLimits

0xc549,	// (0x000651ca) bg_popup_window_pane_g1

0xc558,	// (0x000651d9) bg_popup_window_pane_g2_ParamLimits

0xc558,	// (0x000651d9) bg_popup_window_pane_g2

0xc564,	// (0x000651e5) bg_popup_window_pane_g3_ParamLimits

0xc564,	// (0x000651e5) bg_popup_window_pane_g3

0xc570,	// (0x000651f1) bg_popup_window_pane_g4_ParamLimits

0xc570,	// (0x000651f1) bg_popup_window_pane_g4

0xc57f,	// (0x00065200) bg_popup_window_pane_g5_ParamLimits

0xc57f,	// (0x00065200) bg_popup_window_pane_g5

0xc58f,	// (0x00065210) bg_popup_window_pane_g6_ParamLimits

0xc58f,	// (0x00065210) bg_popup_window_pane_g6

0xc59b,	// (0x0006521c) bg_popup_window_pane_g7_ParamLimits

0xc59b,	// (0x0006521c) bg_popup_window_pane_g7

0xc5aa,	// (0x0006522b) bg_popup_window_pane_g8_ParamLimits

0xc5aa,	// (0x0006522b) bg_popup_window_pane_g8

0xc5b9,	// (0x0006523a) bg_popup_window_pane_g9_ParamLimits

0xc5b9,	// (0x0006523a) bg_popup_window_pane_g9

0x3c72,	// (0x0005c8f3) bg_popup_window_pane_g10_ParamLimits

0x3c72,	// (0x0005c8f3) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00068531) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00068531) bg_popup_window_pane_g

0x3b9b,	// (0x0005c81c) bg_popup_heading_pane_ParamLimits

0x3b9b,	// (0x0005c81c) bg_popup_heading_pane

0x0bf6,	// (0x00059877) tabs_4_passive_pane_cp_srt_ParamLimits

0x0bf6,	// (0x00059877) tabs_4_passive_pane_cp_srt

0x0c08,	// (0x00059889) tabs_4_passive_pane_srt_ParamLimits

0x3baf,	// (0x0005c830) heading_pane_g2

0x0c08,	// (0x00059889) tabs_4_passive_pane_srt

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp3_srt

0x3bb7,	// (0x0005c838) heading_pane_t1_ParamLimits

0x3bb7,	// (0x0005c838) heading_pane_t1

0x3bce,	// (0x0005c84f) heading_pane_t2_ParamLimits

0x3bce,	// (0x0005c84f) heading_pane_t2

0x0001,

0xf8ab,	// (0x0006852c) heading_pane_t_ParamLimits

0xf8ab,	// (0x0006852c) heading_pane_t

0x3503,	// (0x0005c184) bg_popup_heading_pane_g1

0x35b2,	// (0x0005c233) bg_popup_heading_pane_g2

0x35bc,	// (0x0005c23d) bg_popup_heading_pane_g3

0x35c6,	// (0x0005c247) bg_popup_heading_pane_g4

0x35d0,	// (0x0005c251) bg_popup_heading_pane_g5

0x35da,	// (0x0005c25b) bg_popup_heading_pane_g6

0x35e2,	// (0x0005c263) bg_popup_heading_pane_g7

0x35ea,	// (0x0005c26b) bg_popup_heading_pane_g8

0x35f4,	// (0x0005c275) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x000684e8) bg_popup_heading_pane_g

0x2cfb,	// (0x0005b97c) bg_popup_sub_pane_g1

0x2d0b,	// (0x0005b98c) bg_popup_sub_pane_g2

0x2d03,	// (0x0005b984) bg_popup_sub_pane_g3

0x2d1b,	// (0x0005b99c) bg_popup_sub_pane_g4

0x2d13,	// (0x0005b994) bg_popup_sub_pane_g5

0x2d23,	// (0x0005b9a4) bg_popup_sub_pane_g6

0x2d2b,	// (0x0005b9ac) bg_popup_sub_pane_g7

0x2d3b,	// (0x0005b9bc) bg_popup_sub_pane_g8

0x2d33,	// (0x0005b9b4) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x000684c2) bg_popup_sub_pane_g

0x8bbb,	// (0x0006183c) bg_popup_window_pane_cp5_ParamLimits

0x8bbb,	// (0x0006183c) bg_popup_window_pane_cp5

0x8bd7,	// (0x00061858) popup_note_window_g1_ParamLimits

0x8bd7,	// (0x00061858) popup_note_window_g1

0x8be3,	// (0x00061864) popup_note_window_t1_ParamLimits

0x8be3,	// (0x00061864) popup_note_window_t1

0x8bf9,	// (0x0006187a) popup_note_window_t2_ParamLimits

0x8bf9,	// (0x0006187a) popup_note_window_t2

0x8c0f,	// (0x00061890) popup_note_window_t3_ParamLimits

0x8c0f,	// (0x00061890) popup_note_window_t3

0x8c25,	// (0x000618a6) popup_note_window_t4_ParamLimits

0x8c25,	// (0x000618a6) popup_note_window_t4

0x8c4d,	// (0x000618ce) popup_note_window_t5_ParamLimits

0x8c4d,	// (0x000618ce) popup_note_window_t5

0x0004,

0xf55a,	// (0x000681db) popup_note_window_t_ParamLimits

0xf55a,	// (0x000681db) popup_note_window_t

0x8c97,	// (0x00061918) bg_popup_window_pane_cp6_ParamLimits

0x8c97,	// (0x00061918) bg_popup_window_pane_cp6

0x347f,	// (0x0005c100) popup_note_image_window_g1_ParamLimits

0x347f,	// (0x0005c100) popup_note_image_window_g1

0x348b,	// (0x0005c10c) popup_note_image_window_g2_ParamLimits

0x348b,	// (0x0005c10c) popup_note_image_window_g2

0x0001,

0xf835,	// (0x000684b6) popup_note_image_window_g_ParamLimits

0xf835,	// (0x000684b6) popup_note_image_window_g

0x34a4,	// (0x0005c125) popup_note_image_window_t1_ParamLimits

0x34a4,	// (0x0005c125) popup_note_image_window_t1

0x34bd,	// (0x0005c13e) popup_note_image_window_t2_ParamLimits

0x34bd,	// (0x0005c13e) popup_note_image_window_t2

0x34d6,	// (0x0005c157) popup_note_image_window_t3_ParamLimits

0x34d6,	// (0x0005c157) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x000684bb) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x000684bb) popup_note_image_window_t

0x333f,	// (0x0005bfc0) bg_popup_window_pane_cp7_ParamLimits

0x333f,	// (0x0005bfc0) bg_popup_window_pane_cp7

0x336f,	// (0x0005bff0) popup_note_wait_window_g1_ParamLimits

0x336f,	// (0x0005bff0) popup_note_wait_window_g1

0x337b,	// (0x0005bffc) popup_note_wait_window_g2_ParamLimits

0x337b,	// (0x0005bffc) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x000684a4) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x000684a4) popup_note_wait_window_g

0x3393,	// (0x0005c014) popup_note_wait_window_t1_ParamLimits

0x3393,	// (0x0005c014) popup_note_wait_window_t1

0x33ba,	// (0x0005c03b) popup_note_wait_window_t2_ParamLimits

0x33ba,	// (0x0005c03b) popup_note_wait_window_t2

0x33d8,	// (0x0005c059) popup_note_wait_window_t3_ParamLimits

0x33d8,	// (0x0005c059) popup_note_wait_window_t3

0x33eb,	// (0x0005c06c) popup_note_wait_window_t4_ParamLimits

0x33eb,	// (0x0005c06c) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x000684ab) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x000684ab) popup_note_wait_window_t

0x3410,	// (0x0005c091) wait_bar_pane_ParamLimits

0x3410,	// (0x0005c091) wait_bar_pane

0x8a3a,	// (0x000616bb) wait_anim_pane

0x8a3a,	// (0x000616bb) wait_border_pane

0x8a30,	// (0x000616b1) wait_anim_pane_g1

0x8a30,	// (0x000616b1) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00068364) wait_anim_pane_g

0x32e3,	// (0x0005bf64) wait_border_pane_g1

0x32ee,	// (0x0005bf6f) wait_border_pane_g2

0x32f7,	// (0x0005bf78) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0006849d) wait_border_pane_g

0x314d,	// (0x0005bdce) bg_popup_window_pane_cp16_ParamLimits

0x314d,	// (0x0005bdce) bg_popup_window_pane_cp16

0x324d,	// (0x0005bece) indicator_popup_pane_cp4_ParamLimits

0x324d,	// (0x0005bece) indicator_popup_pane_cp4

0x3261,	// (0x0005bee2) popup_query_data_window_t1_ParamLimits

0x3261,	// (0x0005bee2) popup_query_data_window_t1

0x3273,	// (0x0005bef4) popup_query_data_window_t2_ParamLimits

0x3273,	// (0x0005bef4) popup_query_data_window_t2

0x328c,	// (0x0005bf0d) popup_query_data_window_t3_ParamLimits

0x328c,	// (0x0005bf0d) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00068496) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00068496) popup_query_data_window_t

0x32a6,	// (0x0005bf27) query_popup_data_pane_ParamLimits

0x32a6,	// (0x0005bf27) query_popup_data_pane

0x32ba,	// (0x0005bf3b) query_popup_data_pane_cp1_ParamLimits

0x32ba,	// (0x0005bf3b) query_popup_data_pane_cp1

0x314d,	// (0x0005bdce) bg_popup_window_pane_cp10_ParamLimits

0x314d,	// (0x0005bdce) bg_popup_window_pane_cp10

0x317f,	// (0x0005be00) indicator_popup_pane_ParamLimits

0x317f,	// (0x0005be00) indicator_popup_pane

0x31a1,	// (0x0005be22) popup_query_code_window_t1_ParamLimits

0x31a1,	// (0x0005be22) popup_query_code_window_t1

0x31bb,	// (0x0005be3c) popup_query_code_window_t2_ParamLimits

0x31bb,	// (0x0005be3c) popup_query_code_window_t2

0x3204,	// (0x0005be85) popup_query_code_window_t3_ParamLimits

0x3204,	// (0x0005be85) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0006848f) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0006848f) popup_query_code_window_t

0x3233,	// (0x0005beb4) query_popup_pane_ParamLimits

0x3233,	// (0x0005beb4) query_popup_pane

0x8c97,	// (0x00061918) bg_popup_window_pane_cp15_ParamLimits

0x8c97,	// (0x00061918) bg_popup_window_pane_cp15

0x8cb7,	// (0x00061938) indicator_popup_pane_cp1_ParamLimits

0x8cb7,	// (0x00061938) indicator_popup_pane_cp1

0x8cca,	// (0x0006194b) indicator_popup_pane_cp2_ParamLimits

0x8cca,	// (0x0006194b) indicator_popup_pane_cp2

0x8ce5,	// (0x00061966) popup_query_data_code_window_g1_ParamLimits

0x8ce5,	// (0x00061966) popup_query_data_code_window_g1

0x8cf8,	// (0x00061979) popup_query_data_code_window_t1_ParamLimits

0x8cf8,	// (0x00061979) popup_query_data_code_window_t1

0x8d0a,	// (0x0006198b) popup_query_data_code_window_t2_ParamLimits

0x8d0a,	// (0x0006198b) popup_query_data_code_window_t2

0x8d1c,	// (0x0006199d) popup_query_data_code_window_t3_ParamLimits

0x8d1c,	// (0x0006199d) popup_query_data_code_window_t3

0x8d32,	// (0x000619b3) popup_query_data_code_window_t4_ParamLimits

0x8d32,	// (0x000619b3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000681e6) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000681e6) popup_query_data_code_window_t

0x07ef,	// (0x00059470) list_single_midp_graphic_pane_g3

0x8d4c,	// (0x000619cd) query_popup_data_pane_cp2_ParamLimits

0x8d5f,	// (0x000619e0) query_popup_pane_cp2_ParamLimits

0x8d5f,	// (0x000619e0) query_popup_pane_cp2

0x8a3a,	// (0x000616bb) bg_popup_window_pane_cp11

0x3131,	// (0x0005bdb2) heading_pane_cp5

0x3139,	// (0x0005bdba) listscroll_popup_info_pane

0x8a3a,	// (0x000616bb) input_focus_pane_cp3

0x8d7a,	// (0x000619fb) query_popup_pane_t1

0x8d88,	// (0x00061a09) list_popup_info_pane_ParamLimits

0x8d88,	// (0x00061a09) list_popup_info_pane

0x8d97,	// (0x00061a18) listscroll_popup_info_pane_g1

0x8d9f,	// (0x00061a20) scroll_pane_cp7

0x8da9,	// (0x00061a2a) popup_info_list_pane_t1_ParamLimits

0x8da9,	// (0x00061a2a) popup_info_list_pane_t1

0x8dc3,	// (0x00061a44) popup_info_list_pane_t2_ParamLimits

0x8dc3,	// (0x00061a44) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000681ef) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000681ef) popup_info_list_pane_t

0x8a3a,	// (0x000616bb) bg_popup_window_pane_cp12

0x4690,	// (0x0005d311) find_popup_pane

0x8a88,	// (0x00061709) bg_popup_window_pane_cp3

0x8ddd,	// (0x00061a5e) heading_pane_cp3

0x8dec,	// (0x00061a6d) listscroll_popup_graphic_pane

0x8a3a,	// (0x000616bb) bg_popup_window_pane_cp4

0xa186,	// (0x00062e07) heading_pane_cp4

0x8dfc,	// (0x00061a7d) listscroll_popup_colour_pane

0xa190,	// (0x00062e11) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa190,	// (0x00062e11) cell_large_graphic_colour_none_popup_pane

0xa1a4,	// (0x00062e25) grid_large_graphic_colour_popup_pane_ParamLimits

0xa1a4,	// (0x00062e25) grid_large_graphic_colour_popup_pane

0xa1c8,	// (0x00062e49) listscroll_popup_colour_pane_g1_ParamLimits

0xa1c8,	// (0x00062e49) listscroll_popup_colour_pane_g1

0xa1df,	// (0x00062e60) listscroll_popup_colour_pane_g2_ParamLimits

0xa1df,	// (0x00062e60) listscroll_popup_colour_pane_g2

0xa1f6,	// (0x00062e77) listscroll_popup_colour_pane_g3_ParamLimits

0xa1f6,	// (0x00062e77) listscroll_popup_colour_pane_g3

0xa206,	// (0x00062e87) listscroll_popup_colour_pane_g4_ParamLimits

0xa206,	// (0x00062e87) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000681f4) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000681f4) listscroll_popup_colour_pane_g

0x8e04,	// (0x00061a85) scroll_pane_cp6_ParamLimits

0x8e04,	// (0x00061a85) scroll_pane_cp6

0xa216,	// (0x00062e97) cell_large_graphic_colour_popup_pane_ParamLimits

0xa216,	// (0x00062e97) cell_large_graphic_colour_popup_pane

0x8e16,	// (0x00061a97) cell_large_graphic_colour_none_popup_pane_t1

0x8a3a,	// (0x000616bb) grid_highlight_pane_cp5

0x8e25,	// (0x00061aa6) cell_large_graphic_colour_popup_pane_g1

0x8e2d,	// (0x00061aae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000681fd) cell_large_graphic_colour_popup_pane_g

0x8e35,	// (0x00061ab6) cell_large_graphic_colour_popup_pane_g2_copy1

0x8e3e,	// (0x00061abf) grid_highlight_pane_cp4

0x8e46,	// (0x00061ac7) bg_popup_window_pane_cp8_ParamLimits

0x8e46,	// (0x00061ac7) bg_popup_window_pane_cp8

0x8e61,	// (0x00061ae2) popup_snote_single_text_window_g1_ParamLimits

0x8e61,	// (0x00061ae2) popup_snote_single_text_window_g1

0x8e73,	// (0x00061af4) popup_snote_single_text_window_t1_ParamLimits

0x8e73,	// (0x00061af4) popup_snote_single_text_window_t1

0x8e86,	// (0x00061b07) popup_snote_single_text_window_t2_ParamLimits

0x8e86,	// (0x00061b07) popup_snote_single_text_window_t2

0x8e99,	// (0x00061b1a) popup_snote_single_text_window_t3_ParamLimits

0x8e99,	// (0x00061b1a) popup_snote_single_text_window_t3

0x8ed2,	// (0x00061b53) popup_snote_single_text_window_t4_ParamLimits

0x8ed2,	// (0x00061b53) popup_snote_single_text_window_t4

0x8f06,	// (0x00061b87) popup_snote_single_text_window_t5_ParamLimits

0x8f06,	// (0x00061b87) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00068202) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00068202) popup_snote_single_text_window_t

0x8f35,	// (0x00061bb6) bg_popup_window_pane_cp9_ParamLimits

0x8f35,	// (0x00061bb6) bg_popup_window_pane_cp9

0x8e61,	// (0x00061ae2) popup_snote_single_graphic_window_g1_ParamLimits

0x8e61,	// (0x00061ae2) popup_snote_single_graphic_window_g1

0x8f43,	// (0x00061bc4) popup_snote_single_graphic_window_g2_ParamLimits

0x8f43,	// (0x00061bc4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006820d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006820d) popup_snote_single_graphic_window_g

0x8f4f,	// (0x00061bd0) popup_snote_single_graphic_window_t1_ParamLimits

0x8f4f,	// (0x00061bd0) popup_snote_single_graphic_window_t1

0x8f62,	// (0x00061be3) popup_snote_single_graphic_window_t2_ParamLimits

0x8f62,	// (0x00061be3) popup_snote_single_graphic_window_t2

0x8f75,	// (0x00061bf6) popup_snote_single_graphic_window_t3_ParamLimits

0x8f75,	// (0x00061bf6) popup_snote_single_graphic_window_t3

0x8fae,	// (0x00061c2f) popup_snote_single_graphic_window_t4_ParamLimits

0x8fae,	// (0x00061c2f) popup_snote_single_graphic_window_t4

0x8fe2,	// (0x00061c63) popup_snote_single_graphic_window_t5_ParamLimits

0x8fe2,	// (0x00061c63) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00068212) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00068212) popup_snote_single_graphic_window_t

0x45ce,	// (0x0005d24f) grid_graphic_popup_pane_ParamLimits

0x45ce,	// (0x0005d24f) grid_graphic_popup_pane

0x45fc,	// (0x0005d27d) listscroll_popup_graphic_pane_g1_ParamLimits

0x45fc,	// (0x0005d27d) listscroll_popup_graphic_pane_g1

0xc959,	// (0x000655da) listscroll_popup_graphic_pane_g2_ParamLimits

0xc959,	// (0x000655da) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0006860c) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0006860c) listscroll_popup_graphic_pane_g

0x4624,	// (0x0005d2a5) scroll_pane_cp5

0xc911,	// (0x00065592) cell_graphic_popup_pane_ParamLimits

0xc911,	// (0x00065592) cell_graphic_popup_pane

0x4547,	// (0x0005d1c8) cell_graphic_popup_pane_g1

0x454f,	// (0x0005d1d0) cell_graphic_popup_pane_g2

0x8e35,	// (0x00061ab6) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00068605) cell_graphic_popup_pane_g

0x4558,	// (0x0005d1d9) cell_graphic_popup_pane_t2

0x8e3e,	// (0x00061abf) grid_highlight_pane_cp3

0x9023,	// (0x00061ca4) list_gen_pane_ParamLimits

0x9023,	// (0x00061ca4) list_gen_pane

0x904b,	// (0x00061ccc) scroll_pane

0xc8c8,	// (0x00065549) bg_list_pane_g1_ParamLimits

0xc8c8,	// (0x00065549) bg_list_pane_g1

0x44bc,	// (0x0005d13d) bg_list_pane_g2_ParamLimits

0x44bc,	// (0x0005d13d) bg_list_pane_g2

0x44d1,	// (0x0005d152) bg_list_pane_g3_ParamLimits

0x44d1,	// (0x0005d152) bg_list_pane_g3

0x44e5,	// (0x0005d166) bg_list_pane_g4_ParamLimits

0x44e5,	// (0x0005d166) bg_list_pane_g4

0xc8e5,	// (0x00065566) bg_list_pane_g5_ParamLimits

0xc8e5,	// (0x00065566) bg_list_pane_g5

0x0004,

0xf979,	// (0x000685fa) bg_list_pane_g_ParamLimits

0xf979,	// (0x000685fa) bg_list_pane_g

0xc862,	// (0x000654e3) list_double2_graphic_large_graphic_pane_ParamLimits

0xc862,	// (0x000654e3) list_double2_graphic_large_graphic_pane

0xc862,	// (0x000654e3) list_double2_graphic_pane_ParamLimits

0xc862,	// (0x000654e3) list_double2_graphic_pane

0xc862,	// (0x000654e3) list_double2_large_graphic_pane_ParamLimits

0xc862,	// (0x000654e3) list_double2_large_graphic_pane

0xc862,	// (0x000654e3) list_double2_pane_ParamLimits

0xc862,	// (0x000654e3) list_double2_pane

0xc862,	// (0x000654e3) list_double_graphic_heading_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_graphic_heading_pane

0xc862,	// (0x000654e3) list_double_graphic_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_graphic_pane

0xc862,	// (0x000654e3) list_double_heading_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_heading_pane

0xc862,	// (0x000654e3) list_double_large_graphic_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_large_graphic_pane

0xc862,	// (0x000654e3) list_double_number_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_number_pane

0xc862,	// (0x000654e3) list_double_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_pane

0xc862,	// (0x000654e3) list_double_time_pane_ParamLimits

0xc862,	// (0x000654e3) list_double_time_pane

0xc862,	// (0x000654e3) list_setting_number_pane_ParamLimits

0xc862,	// (0x000654e3) list_setting_number_pane

0xc862,	// (0x000654e3) list_setting_pane_ParamLimits

0xc862,	// (0x000654e3) list_setting_pane

0xc876,	// (0x000654f7) list_single_2graphic_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_2graphic_pane

0xc876,	// (0x000654f7) list_single_graphic_heading_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_graphic_heading_pane

0xc876,	// (0x000654f7) list_single_graphic_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_graphic_pane

0xc876,	// (0x000654f7) list_single_heading_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_heading_pane

0xc876,	// (0x000654f7) list_single_large_graphic_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_large_graphic_pane

0xc876,	// (0x000654f7) list_single_number_heading_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_number_heading_pane

0xc876,	// (0x000654f7) list_single_number_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_number_pane

0xc876,	// (0x000654f7) list_single_pane_ParamLimits

0xc876,	// (0x000654f7) list_single_pane

0x8a3a,	// (0x000616bb) list_highlight_pane_cp1

0x2c87,	// (0x0005b908) list_single_pane_g1_ParamLimits

0x2c87,	// (0x0005b908) list_single_pane_g1

0x2c93,	// (0x0005b914) list_single_pane_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006822e) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006822e) list_single_pane_g

0xe223,	// (0x00066ea4) list_single_pane_t1_ParamLimits

0xe223,	// (0x00066ea4) list_single_pane_t1

0x2c87,	// (0x0005b908) list_single_number_pane_g1_ParamLimits

0x2c87,	// (0x0005b908) list_single_number_pane_g1

0x2c93,	// (0x0005b914) list_single_number_pane_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006822e) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006822e) list_single_number_pane_g

0xe13e,	// (0x00066dbf) list_single_number_pane_t1_ParamLimits

0xe13e,	// (0x00066dbf) list_single_number_pane_t1

0xe211,	// (0x00066e92) list_single_number_pane_t2_ParamLimits

0xe211,	// (0x00066e92) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x000685bb) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x000685bb) list_single_number_pane_t

0xa241,	// (0x00062ec2) list_single_graphic_pane_g1_ParamLimits

0xa241,	// (0x00062ec2) list_single_graphic_pane_g1

0x2c87,	// (0x0005b908) list_single_graphic_pane_g2_ParamLimits

0x2c87,	// (0x0005b908) list_single_graphic_pane_g2

0x2c93,	// (0x0005b914) list_single_graphic_pane_g3_ParamLimits

0x2c93,	// (0x0005b914) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006821d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006821d) list_single_graphic_pane_g

0xa24d,	// (0x00062ece) list_single_graphic_pane_t1_ParamLimits

0xa24d,	// (0x00062ece) list_single_graphic_pane_t1

0xa263,	// (0x00062ee4) list_single_heading_pane_g1_ParamLimits

0xa263,	// (0x00062ee4) list_single_heading_pane_g1

0x2c93,	// (0x0005b914) list_single_heading_pane_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00068224) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00068224) list_single_heading_pane_g

0xa276,	// (0x00062ef7) list_single_heading_pane_t1_ParamLimits

0xa276,	// (0x00062ef7) list_single_heading_pane_t1

0xa28c,	// (0x00062f0d) list_single_heading_pane_t2_ParamLimits

0xa28c,	// (0x00062f0d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00068229) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00068229) list_single_heading_pane_t

0x2c87,	// (0x0005b908) list_single_number_heading_pane_g1_ParamLimits

0x2c87,	// (0x0005b908) list_single_number_heading_pane_g1

0x2c93,	// (0x0005b914) list_single_number_heading_pane_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006822e) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006822e) list_single_number_heading_pane_g

0xa29e,	// (0x00062f1f) list_single_number_heading_pane_t1_ParamLimits

0xa29e,	// (0x00062f1f) list_single_number_heading_pane_t1

0xdc07,	// (0x00066888) list_single_number_heading_pane_t2_ParamLimits

0xdc07,	// (0x00066888) list_single_number_heading_pane_t2

0xdc19,	// (0x0006689a) list_single_number_heading_pane_t3_ParamLimits

0xdc19,	// (0x0006689a) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00068233) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00068233) list_single_number_heading_pane_t

0xa2b4,	// (0x00062f35) list_single_graphic_heading_pane_g1_ParamLimits

0xa2b4,	// (0x00062f35) list_single_graphic_heading_pane_g1

0xa2cc,	// (0x00062f4d) list_single_graphic_heading_pane_g4_ParamLimits

0xa2cc,	// (0x00062f4d) list_single_graphic_heading_pane_g4

0x2c93,	// (0x0005b914) list_single_graphic_heading_pane_g5_ParamLimits

0x2c93,	// (0x0005b914) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0006823a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0006823a) list_single_graphic_heading_pane_g

0xa29e,	// (0x00062f1f) list_single_graphic_heading_pane_t1_ParamLimits

0xa29e,	// (0x00062f1f) list_single_graphic_heading_pane_t1

0xa2dd,	// (0x00062f5e) list_single_graphic_heading_pane_t2_ParamLimits

0xa2dd,	// (0x00062f5e) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00068241) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00068241) list_single_graphic_heading_pane_t

0x39bc,	// (0x0005c63d) list_single_large_graphic_pane_g1_ParamLimits

0x39bc,	// (0x0005c63d) list_single_large_graphic_pane_g1

0x2c87,	// (0x0005b908) list_single_large_graphic_pane_g2_ParamLimits

0x2c87,	// (0x0005b908) list_single_large_graphic_pane_g2

0x2c93,	// (0x0005b914) list_single_large_graphic_pane_g3_ParamLimits

0x2c93,	// (0x0005b914) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00068246) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00068246) list_single_large_graphic_pane_g

0x32ee,	// (0x0005bf6f) wait_border_pane_g2_copy1

0xa2f5,	// (0x00062f76) list_single_large_graphic_pane_g4_cp2

0xdc2b,	// (0x000668ac) list_single_large_graphic_pane_t1_ParamLimits

0xdc2b,	// (0x000668ac) list_single_large_graphic_pane_t1

0xa2fd,	// (0x00062f7e) list_double_pane_g1_ParamLimits

0xa2fd,	// (0x00062f7e) list_double_pane_g1

0xa309,	// (0x00062f8a) list_double_pane_g2_ParamLimits

0xa309,	// (0x00062f8a) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0006824d) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0006824d) list_double_pane_g

0xa315,	// (0x00062f96) list_double_pane_t1_ParamLimits

0xa315,	// (0x00062f96) list_double_pane_t1

0xa32b,	// (0x00062fac) list_double_pane_t2_ParamLimits

0xa32b,	// (0x00062fac) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00068252) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00068252) list_double_pane_t

0xa33d,	// (0x00062fbe) list_double2_pane_g1_ParamLimits

0xa33d,	// (0x00062fbe) list_double2_pane_g1

0xa34e,	// (0x00062fcf) list_double2_pane_g2_ParamLimits

0xa34e,	// (0x00062fcf) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00068257) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00068257) list_double2_pane_g

0xa35a,	// (0x00062fdb) list_double2_pane_t1_ParamLimits

0xa35a,	// (0x00062fdb) list_double2_pane_t1

0xa370,	// (0x00062ff1) list_double2_pane_t2_ParamLimits

0xa370,	// (0x00062ff1) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006825c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006825c) list_double2_pane_t

0xa2fd,	// (0x00062f7e) list_double_number_pane_g1_ParamLimits

0xa2fd,	// (0x00062f7e) list_double_number_pane_g1

0xa309,	// (0x00062f8a) list_double_number_pane_g2_ParamLimits

0xa309,	// (0x00062f8a) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0006824d) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0006824d) list_double_number_pane_g

0xa382,	// (0x00063003) list_double_number_pane_t1_ParamLimits

0xa382,	// (0x00063003) list_double_number_pane_t1

0xa394,	// (0x00063015) list_double_number_pane_t2_ParamLimits

0xa394,	// (0x00063015) list_double_number_pane_t2

0xa3aa,	// (0x0006302b) list_double_number_pane_t3_ParamLimits

0xa3aa,	// (0x0006302b) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00068261) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00068261) list_double_number_pane_t

0xa3bc,	// (0x0006303d) list_double_graphic_pane_g1_ParamLimits

0xa3bc,	// (0x0006303d) list_double_graphic_pane_g1

0xa3c8,	// (0x00063049) list_double_graphic_pane_g2_ParamLimits

0xa3c8,	// (0x00063049) list_double_graphic_pane_g2

0x49ce,	// (0x0005d64f) list_double_graphic_pane_g3_ParamLimits

0x49ce,	// (0x0005d64f) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00068268) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00068268) list_double_graphic_pane_g

0xa3e3,	// (0x00063064) list_double_graphic_pane_t1_ParamLimits

0xa3e3,	// (0x00063064) list_double_graphic_pane_t1

0xa3f9,	// (0x0006307a) list_double_graphic_pane_t2_ParamLimits

0xa3f9,	// (0x0006307a) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00068271) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00068271) list_double_graphic_pane_t

0xa40b,	// (0x0006308c) list_double2_graphic_pane_g1_ParamLimits

0xa40b,	// (0x0006308c) list_double2_graphic_pane_g1

0xa417,	// (0x00063098) list_double2_graphic_pane_g2_ParamLimits

0xa417,	// (0x00063098) list_double2_graphic_pane_g2

0xa423,	// (0x000630a4) list_double2_graphic_pane_g3_ParamLimits

0xa423,	// (0x000630a4) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00068276) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00068276) list_double2_graphic_pane_g

0xa42f,	// (0x000630b0) list_double2_graphic_pane_t1_ParamLimits

0xa42f,	// (0x000630b0) list_double2_graphic_pane_t1

0xa445,	// (0x000630c6) list_double2_graphic_pane_t2_ParamLimits

0xa445,	// (0x000630c6) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0006827d) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0006827d) list_double2_graphic_pane_t

0xa457,	// (0x000630d8) list_double_large_graphic_pane_g1_ParamLimits

0xa457,	// (0x000630d8) list_double_large_graphic_pane_g1

0xa476,	// (0x000630f7) list_double_large_graphic_pane_g2_ParamLimits

0xa476,	// (0x000630f7) list_double_large_graphic_pane_g2

0xa309,	// (0x00062f8a) list_double_large_graphic_pane_g3_ParamLimits

0xa309,	// (0x00062f8a) list_double_large_graphic_pane_g3

0xa48c,	// (0x0006310d) list_double_large_graphic_pane_g4_ParamLimits

0xa48c,	// (0x0006310d) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00068282) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00068282) list_double_large_graphic_pane_g

0xa49f,	// (0x00063120) list_double_large_graphic_pane_t1_ParamLimits

0xa49f,	// (0x00063120) list_double_large_graphic_pane_t1

0xa4b8,	// (0x00063139) list_double_large_graphic_pane_t2_ParamLimits

0xa4b8,	// (0x00063139) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0006828d) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0006828d) list_double_large_graphic_pane_t

0xa4ca,	// (0x0006314b) list_double2_large_graphic_pane_g1_ParamLimits

0xa4ca,	// (0x0006314b) list_double2_large_graphic_pane_g1

0xa4d6,	// (0x00063157) list_double2_large_graphic_pane_g2_ParamLimits

0xa4d6,	// (0x00063157) list_double2_large_graphic_pane_g2

0xa423,	// (0x000630a4) list_double2_large_graphic_pane_g3_ParamLimits

0xa423,	// (0x000630a4) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00068292) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00068292) list_double2_large_graphic_pane_g

0xa4e7,	// (0x00063168) list_double2_large_graphic_pane_t1_ParamLimits

0xa4e7,	// (0x00063168) list_double2_large_graphic_pane_t1

0xa4fd,	// (0x0006317e) list_double2_large_graphic_pane_t2_ParamLimits

0xa4fd,	// (0x0006317e) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00068299) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00068299) list_double2_large_graphic_pane_t

0xa50f,	// (0x00063190) list_double_heading_pane_g1_ParamLimits

0xa50f,	// (0x00063190) list_double_heading_pane_g1

0xdc41,	// (0x000668c2) list_double_heading_pane_g2_ParamLimits

0xdc41,	// (0x000668c2) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0006829e) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0006829e) list_double_heading_pane_g

0xa520,	// (0x000631a1) list_double_heading_pane_t1_ParamLimits

0xa520,	// (0x000631a1) list_double_heading_pane_t1

0xa370,	// (0x00062ff1) list_double_heading_pane_t2_ParamLimits

0xa370,	// (0x00062ff1) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000682a3) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000682a3) list_double_heading_pane_t

0xa3bc,	// (0x0006303d) list_double_graphic_heading_pane_g1_ParamLimits

0xa3bc,	// (0x0006303d) list_double_graphic_heading_pane_g1

0xa50f,	// (0x00063190) list_double_graphic_heading_pane_g2_ParamLimits

0xa50f,	// (0x00063190) list_double_graphic_heading_pane_g2

0xdc41,	// (0x000668c2) list_double_graphic_heading_pane_g3_ParamLimits

0xdc41,	// (0x000668c2) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000682a8) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000682a8) list_double_graphic_heading_pane_g

0xa536,	// (0x000631b7) list_double_graphic_heading_pane_t1_ParamLimits

0xa536,	// (0x000631b7) list_double_graphic_heading_pane_t1

0xa445,	// (0x000630c6) list_double_graphic_heading_pane_t2_ParamLimits

0xa445,	// (0x000630c6) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000682af) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000682af) list_double_graphic_heading_pane_t

0xa54c,	// (0x000631cd) list_double_time_pane_g1_ParamLimits

0xa54c,	// (0x000631cd) list_double_time_pane_g1

0xa55d,	// (0x000631de) list_double_time_pane_g2_ParamLimits

0xa55d,	// (0x000631de) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000682b4) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000682b4) list_double_time_pane_g

0xa569,	// (0x000631ea) list_double_time_pane_t1_ParamLimits

0xa569,	// (0x000631ea) list_double_time_pane_t1

0xa57f,	// (0x00063200) list_double_time_pane_t2_ParamLimits

0xa57f,	// (0x00063200) list_double_time_pane_t2

0xa591,	// (0x00063212) list_double_time_pane_t3_ParamLimits

0xa591,	// (0x00063212) list_double_time_pane_t3

0xa5a3,	// (0x00063224) list_double_time_pane_t4_ParamLimits

0xa5a3,	// (0x00063224) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000682b9) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000682b9) list_double_time_pane_t

0xa5b5,	// (0x00063236) list_setting_pane_g1_ParamLimits

0xa5b5,	// (0x00063236) list_setting_pane_g1

0xa5c1,	// (0x00063242) list_setting_pane_g2_ParamLimits

0xa5c1,	// (0x00063242) list_setting_pane_g2

0x0001,

0xf641,	// (0x000682c2) list_setting_pane_g_ParamLimits

0xf641,	// (0x000682c2) list_setting_pane_g

0xa5cd,	// (0x0006324e) list_setting_pane_t1_ParamLimits

0xa5cd,	// (0x0006324e) list_setting_pane_t1

0xa5e7,	// (0x00063268) list_setting_pane_t2_ParamLimits

0xa5e7,	// (0x00063268) list_setting_pane_t2

0x0002,

0xf646,	// (0x000682c7) list_setting_pane_t_ParamLimits

0xf646,	// (0x000682c7) list_setting_pane_t

0xa626,	// (0x000632a7) set_value_pane_cp_ParamLimits

0xa626,	// (0x000632a7) set_value_pane_cp

0xa634,	// (0x000632b5) list_setting_number_pane_g1_ParamLimits

0xa634,	// (0x000632b5) list_setting_number_pane_g1

0xa640,	// (0x000632c1) list_setting_number_pane_g2_ParamLimits

0xa640,	// (0x000632c1) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x000682ce) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x000682ce) list_setting_number_pane_g

0xa64c,	// (0x000632cd) list_setting_number_pane_t1_ParamLimits

0xa64c,	// (0x000632cd) list_setting_number_pane_t1

0xa665,	// (0x000632e6) list_setting_number_pane_t2_ParamLimits

0xa665,	// (0x000632e6) list_setting_number_pane_t2

0xa67f,	// (0x00063300) list_setting_number_pane_t3_ParamLimits

0xa67f,	// (0x00063300) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x000682d3) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x000682d3) list_setting_number_pane_t

0xa626,	// (0x000632a7) set_value_pane_ParamLimits

0xa626,	// (0x000632a7) set_value_pane

0x907f,	// (0x00061d00) bg_set_opt_pane_ParamLimits

0x907f,	// (0x00061d00) bg_set_opt_pane

0xdc4d,	// (0x000668ce) set_value_pane_t1

0x90a0,	// (0x00061d21) slider_set_pane_cp3

0x90a9,	// (0x00061d2a) volume_small_pane_cp

0x90b2,	// (0x00061d33) list_form_gen_pane

0x90bb,	// (0x00061d3c) scroll_pane_cp8

0xa6c2,	// (0x00063343) form_field_data_pane_ParamLimits

0xa6c2,	// (0x00063343) form_field_data_pane

0xa6df,	// (0x00063360) form_field_data_wide_pane_ParamLimits

0xa6df,	// (0x00063360) form_field_data_wide_pane

0xa703,	// (0x00063384) form_field_popup_pane_ParamLimits

0xa703,	// (0x00063384) form_field_popup_pane

0xdc6b,	// (0x000668ec) form_field_popup_wide_pane_ParamLimits

0xdc6b,	// (0x000668ec) form_field_popup_wide_pane

0xdc8c,	// (0x0006690d) form_field_slider_pane_ParamLimits

0xdc8c,	// (0x0006690d) form_field_slider_pane

0xdc9f,	// (0x00066920) form_field_slider_wide_pane_ParamLimits

0xdc9f,	// (0x00066920) form_field_slider_wide_pane

0x90cc,	// (0x00061d4d) data_form_pane

0xa72f,	// (0x000633b0) form_field_data_pane_t1

0x90d8,	// (0x00061d59) input_focus_pane

0xdcb2,	// (0x00066933) data_form_wide_pane

0xdccf,	// (0x00066950) form_field_data_wide_pane_t1

0x8e53,	// (0x00061ad4) input_focus_pane_cp6

0xa749,	// (0x000633ca) form_field_popup_pane_t1

0x90d8,	// (0x00061d59) input_focus_pane_cp7

0x9106,	// (0x00061d87) list_form_pane

0xdcf9,	// (0x0006697a) form_field_popup_wide_pane_t1

0x90d8,	// (0x00061d59) input_focus_pane_cp8

0x9112,	// (0x00061d93) list_form_wide_pane

0xa76b,	// (0x000633ec) form_field_slider_pane_t1_ParamLimits

0xa76b,	// (0x000633ec) form_field_slider_pane_t1

0xa783,	// (0x00063404) form_field_slider_pane_t2_ParamLimits

0xa783,	// (0x00063404) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000682e3) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000682e3) form_field_slider_pane_t

0x8bbb,	// (0x0006183c) input_focus_pane_cp9_ParamLimits

0x8bbb,	// (0x0006183c) input_focus_pane_cp9

0xa798,	// (0x00063419) slider_cont_pane_ParamLimits

0xa798,	// (0x00063419) slider_cont_pane

0x911e,	// (0x00061d9f) form_field_slider_wide_pane_t1_ParamLimits

0x911e,	// (0x00061d9f) form_field_slider_wide_pane_t1

0xdd0e,	// (0x0006698f) form_field_slider_wide_pane_t2_ParamLimits

0xdd0e,	// (0x0006698f) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x000682e8) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x000682e8) form_field_slider_wide_pane_t

0x8bbb,	// (0x0006183c) input_focus_pane_cp10_ParamLimits

0x8bbb,	// (0x0006183c) input_focus_pane_cp10

0xa7ac,	// (0x0006342d) slider_cont_pane_cp1_ParamLimits

0xa7ac,	// (0x0006342d) slider_cont_pane_cp1

0xa7c0,	// (0x00063441) slider_form_pane_cp

0x9130,	// (0x00061db1) input_focus_pane_g1

0x9138,	// (0x00061db9) input_focus_pane_g2

0x9140,	// (0x00061dc1) input_focus_pane_g3

0x9148,	// (0x00061dc9) input_focus_pane_g4

0x9150,	// (0x00061dd1) input_focus_pane_g5

0x9158,	// (0x00061dd9) input_focus_pane_g6

0x9160,	// (0x00061de1) input_focus_pane_g7

0x9168,	// (0x00061de9) input_focus_pane_g8

0x9170,	// (0x00061df1) input_focus_pane_g9

0x8a30,	// (0x000616b1) input_focus_pane_g10

0x0009,

0xf66c,	// (0x000682ed) input_focus_pane_g

0x32f7,	// (0x0005bf78) wait_border_pane_g3_copy1

0xa7c8,	// (0x00063449) data_form_pane_t1

0x8a30,	// (0x000616b1) wait_anim_pane_g1_copy1

0xb7cc,	// (0x0006444d) data_form_wide_pane_t1

0xdd20,	// (0x000669a1) list_form_graphic_pane_cp_ParamLimits

0xdd20,	// (0x000669a1) list_form_graphic_pane_cp

0x4411,	// (0x0005d092) slider_form_pane_g1

0x441a,	// (0x0005d09b) slider_form_pane_g2

0x0006,

0xf96a,	// (0x000685eb) slider_form_pane_g

0xa7e4,	// (0x00063465) list_form_graphic_pane_ParamLimits

0xa7e4,	// (0x00063465) list_form_graphic_pane

0xdd32,	// (0x000669b3) list_form_graphic_pane_g1

0xdd3a,	// (0x000669bb) list_form_graphic_pane_t1_ParamLimits

0xdd3a,	// (0x000669bb) list_form_graphic_pane_t1

0x8a88,	// (0x00061709) list_highlight_pane_cp5_ParamLimits

0x8a88,	// (0x00061709) list_highlight_pane_cp5

0xa7f5,	// (0x00063476) find_pane_g1

0x9178,	// (0x00061df9) input_find_pane

0xa7fe,	// (0x0006347f) input_find_pane_g1_ParamLimits

0xa7fe,	// (0x0006347f) input_find_pane_g1

0xa80a,	// (0x0006348b) input_find_pane_t1_ParamLimits

0xa80a,	// (0x0006348b) input_find_pane_t1

0xa81f,	// (0x000634a0) input_find_pane_t2_ParamLimits

0xa81f,	// (0x000634a0) input_find_pane_t2

0x0001,

0xf681,	// (0x00068302) input_find_pane_t_ParamLimits

0xf681,	// (0x00068302) input_find_pane_t

0x9181,	// (0x00061e02) input_focus_pane_cp5_ParamLimits

0x9181,	// (0x00061e02) input_focus_pane_cp5

0x9194,	// (0x00061e15) bg_popup_window_pane_cp2_ParamLimits

0x9194,	// (0x00061e15) bg_popup_window_pane_cp2

0x91a1,	// (0x00061e22) listscroll_menu_pane_ParamLimits

0x91a1,	// (0x00061e22) listscroll_menu_pane

0xa840,	// (0x000634c1) popup_submenu_window_ParamLimits

0xa840,	// (0x000634c1) popup_submenu_window

0x91ad,	// (0x00061e2e) find_popup_pane_g1

0x91b5,	// (0x00061e36) input_popup_find_pane_cp

0x91bf,	// (0x00061e40) input_focus_pane_cp4_ParamLimits

0x91bf,	// (0x00061e40) input_focus_pane_cp4

0x91cd,	// (0x00061e4e) input_popup_find_pane_t1_ParamLimits

0x91cd,	// (0x00061e4e) input_popup_find_pane_t1

0x8a3a,	// (0x000616bb) bg_popup_sub_pane_cp

0x91fb,	// (0x00061e7c) listscroll_popup_sub_pane

0x9203,	// (0x00061e84) list_submenu_pane_ParamLimits

0x9203,	// (0x00061e84) list_submenu_pane

0x9214,	// (0x00061e95) scroll_pane_cp4

0x921c,	// (0x00061e9d) list_single_popup_submenu_pane_ParamLimits

0x921c,	// (0x00061e9d) list_single_popup_submenu_pane

0x9231,	// (0x00061eb2) list_single_popup_submenu_pane_g1

0x9239,	// (0x00061eba) list_single_popup_submenu_pane_t1_ParamLimits

0x9239,	// (0x00061eba) list_single_popup_submenu_pane_t1

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp1_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp1

0xa87e,	// (0x000634ff) tabs_2_active_pane_g1

0xa886,	// (0x00063507) tabs_2_active_pane_t1

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp1_ParamLimits

0x8bbb,	// (0x0006183c) bg_passive_tab_pane_cp1

0xa87e,	// (0x000634ff) tabs_2_passive_pane_g1

0xa886,	// (0x00063507) tabs_2_passive_pane_t1

0x8a88,	// (0x00061709) bg_active_tab_pane_cp4

0xa898,	// (0x00063519) tabs_2_long_active_pane_t1

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp4

0x07f7,	// (0x00059478) list_single_midp_graphic_pane_g4_ParamLimits

0x8a88,	// (0x00061709) bg_active_tab_pane_cp5

0xa8ab,	// (0x0006352c) tabs_3_long_active_pane_t1

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp5

0x07f7,	// (0x00059478) list_single_midp_graphic_pane_g4

0x8a88,	// (0x00061709) bg_popup_window_pane_cp13_ParamLimits

0x8a88,	// (0x00061709) bg_popup_window_pane_cp13

0xdd58,	// (0x000669d9) listscroll_popup_fast_pane_ParamLimits

0xdd58,	// (0x000669d9) listscroll_popup_fast_pane

0xdd67,	// (0x000669e8) grid_popup_fast_pane_ParamLimits

0xdd67,	// (0x000669e8) grid_popup_fast_pane

0xdd79,	// (0x000669fa) scroll_pane_cp9_ParamLimits

0xdd79,	// (0x000669fa) scroll_pane_cp9

0x5d4a,	// (0x0005e9cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5d4a,	// (0x0005e9cb) list_single_graphic_hl_pane_t1_cp2

0xdd9d,	// (0x00066a1e) input_focus_pane_cp20_ParamLimits

0xdd9d,	// (0x00066a1e) input_focus_pane_cp20

0xddab,	// (0x00066a2c) query_popup_data_pane_t1_ParamLimits

0xddab,	// (0x00066a2c) query_popup_data_pane_t1

0xddbe,	// (0x00066a3f) query_popup_data_pane_t2_ParamLimits

0xddbe,	// (0x00066a3f) query_popup_data_pane_t2

0xde04,	// (0x00066a85) query_popup_data_pane_t3_ParamLimits

0xde04,	// (0x00066a85) query_popup_data_pane_t3

0xde45,	// (0x00066ac6) query_popup_data_pane_t4_ParamLimits

0xde45,	// (0x00066ac6) query_popup_data_pane_t4

0xde81,	// (0x00066b02) query_popup_data_pane_t5_ParamLimits

0xde81,	// (0x00066b02) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00068307) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00068307) query_popup_data_pane_t

0x9130,	// (0x00061db1) bg_set_opt_pane_g1

0x9138,	// (0x00061db9) bg_set_opt_pane_g2

0x9140,	// (0x00061dc1) bg_set_opt_pane_g3

0x9148,	// (0x00061dc9) bg_set_opt_pane_g4

0x9150,	// (0x00061dd1) bg_set_opt_pane_g5

0x9158,	// (0x00061dd9) bg_set_opt_pane_g6

0x9160,	// (0x00061de1) bg_set_opt_pane_g7

0x9168,	// (0x00061de9) bg_set_opt_pane_g8

0x9170,	// (0x00061df1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00068312) bg_set_opt_pane_g

0xf33f,	// (0x00067fc0) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x00067fc0) control_top_pane_stacon

0xf392,	// (0x00068013) signal_pane_stacon_ParamLimits

0xf392,	// (0x00068013) signal_pane_stacon

0x2110,	// (0x0005ad91) stacon_top_pane_g1_ParamLimits

0x2110,	// (0x0005ad91) stacon_top_pane_g1

0xf3b7,	// (0x00068038) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00068038) title_pane_stacon

0xf3e1,	// (0x00068062) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00068062) uni_indicator_pane_stacon

0xf3f6,	// (0x00068077) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00068077) battery_pane_stacon

0xf43a,	// (0x000680bb) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x000680bb) control_bottom_pane_stacon

0xf45d,	// (0x000680de) navi_pane_stacon_ParamLimits

0xf45d,	// (0x000680de) navi_pane_stacon

0x2132,	// (0x0005adb3) stacon_bottom_pane_g1_ParamLimits

0x2132,	// (0x0005adb3) stacon_bottom_pane_g1

0xf0a5,	// (0x00067d26) aid_levels_signal_lsc_ParamLimits

0xf0a5,	// (0x00067d26) aid_levels_signal_lsc

0xf0bc,	// (0x00067d3d) signal_pane_stacon_g1_ParamLimits

0xf0bc,	// (0x00067d3d) signal_pane_stacon_g1

0xf0d0,	// (0x00067d51) signal_pane_stacon_g2_ParamLimits

0xf0d0,	// (0x00067d51) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00068325) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00068325) signal_pane_stacon_g

0xf105,	// (0x00067d86) title_pane_stacon_t1_ParamLimits

0xf105,	// (0x00067d86) title_pane_stacon_t1

0xdec5,	// (0x00066b46) uni_indicator_pane_stacon_g1

0xdecf,	// (0x00066b50) uni_indicator_pane_stacon_g2

0xded9,	// (0x00066b5a) uni_indicator_pane_stacon_g3

0xdee3,	// (0x00066b64) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00068331) uni_indicator_pane_stacon_g

0xf12a,	// (0x00067dab) control_top_pane_stacon_g1

0xf132,	// (0x00067db3) control_top_pane_stacon_t1_ParamLimits

0xf132,	// (0x00067db3) control_top_pane_stacon_t1

0xf169,	// (0x00067dea) aid_levels_battery_lsc_ParamLimits

0xf169,	// (0x00067dea) aid_levels_battery_lsc

0xf181,	// (0x00067e02) battery_pane_stacon_g1_ParamLimits

0xf181,	// (0x00067e02) battery_pane_stacon_g1

0xf194,	// (0x00067e15) battery_pane_stacon_g2_ParamLimits

0xf194,	// (0x00067e15) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0006833a) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0006833a) battery_pane_stacon_g

0xf1d2,	// (0x00067e53) navi_icon_pane_stacon

0xf1e6,	// (0x00067e67) navi_navi_pane_stacon

0xf1d2,	// (0x00067e53) navi_text_pane_stacon

0xf12a,	// (0x00067dab) control_bottom_pane_stacon_g1

0xf1fc,	// (0x00067e7d) control_bottom_pane_stacon_t1_ParamLimits

0xf1fc,	// (0x00067e7d) control_bottom_pane_stacon_t1

0xa8bd,	// (0x0006353e) grid_app_pane_ParamLimits

0xa8bd,	// (0x0006353e) grid_app_pane

0xa8f5,	// (0x00063576) scroll_pane_cp15_ParamLimits

0xa8f5,	// (0x00063576) scroll_pane_cp15

0xa90a,	// (0x0006358b) cell_app_pane_ParamLimits

0xa90a,	// (0x0006358b) cell_app_pane

0xa957,	// (0x000635d8) cell_app_pane_g1_ParamLimits

0xa957,	// (0x000635d8) cell_app_pane_g1

0xdf07,	// (0x00066b88) cell_app_pane_g2_ParamLimits

0xdf07,	// (0x00066b88) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0006833f) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0006833f) cell_app_pane_g

0xa97b,	// (0x000635fc) cell_app_pane_t1_ParamLimits

0xa97b,	// (0x000635fc) cell_app_pane_t1

0xdf13,	// (0x00066b94) grid_highlight_pane_ParamLimits

0xdf13,	// (0x00066b94) grid_highlight_pane

0x9130,	// (0x00061db1) cell_highlight_pane_g1

0x9138,	// (0x00061db9) cell_highlight_pane_g2

0x9140,	// (0x00061dc1) cell_highlight_pane_g3

0x9148,	// (0x00061dc9) cell_highlight_pane_g4

0x9150,	// (0x00061dd1) cell_highlight_pane_g5

0x9158,	// (0x00061dd9) cell_highlight_pane_g6

0x9160,	// (0x00061de1) cell_highlight_pane_g7

0x9168,	// (0x00061de9) cell_highlight_pane_g8

0x9170,	// (0x00061df1) cell_highlight_pane_g9

0x8a30,	// (0x000616b1) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x000682ed) cell_highlight_pane_g

0xdf24,	// (0x00066ba5) bg_scroll_pane

0xf23d,	// (0x00067ebe) scroll_handle_pane

0xdf6b,	// (0x00066bec) scroll_bg_pane_g1

0xdf80,	// (0x00066c01) scroll_bg_pane_g2

0xdf98,	// (0x00066c19) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00068344) scroll_bg_pane_g

0xdfad,	// (0x00066c2e) scroll_handle_focus_pane_ParamLimits

0xdfad,	// (0x00066c2e) scroll_handle_focus_pane

0xdf6b,	// (0x00066bec) scroll_handle_pane_g1

0xdfba,	// (0x00066c3b) scroll_handle_pane_g2

0xdf98,	// (0x00066c19) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0006834b) scroll_handle_pane_g

0x91bf,	// (0x00061e40) bg_popup_sub_pane_cp21_ParamLimits

0x91bf,	// (0x00061e40) bg_popup_sub_pane_cp21

0xdfce,	// (0x00066c4f) popup_fep_japan_predictive_window_t1_ParamLimits

0xdfce,	// (0x00066c4f) popup_fep_japan_predictive_window_t1

0xdfe5,	// (0x00066c66) popup_fep_japan_predictive_window_t2_ParamLimits

0xdfe5,	// (0x00066c66) popup_fep_japan_predictive_window_t2

0xe018,	// (0x00066c99) popup_fep_japan_predictive_window_t3_ParamLimits

0xe018,	// (0x00066c99) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00068352) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00068352) popup_fep_japan_predictive_window_t

0x8a3a,	// (0x000616bb) bg_popup_sub_pane_cp23

0xe04f,	// (0x00066cd0) listscroll_japin_cand_pane

0xe057,	// (0x00066cd8) popup_fep_japan_candidate_window_t1

0xe065,	// (0x00066ce6) candidate_pane_ParamLimits

0xe065,	// (0x00066ce6) candidate_pane

0xe077,	// (0x00066cf8) scroll_pane_cp30

0xe081,	// (0x00066d02) list_single_popup_jap_candidate_pane_ParamLimits

0xe081,	// (0x00066d02) list_single_popup_jap_candidate_pane

0x8a3a,	// (0x000616bb) list_highlight_pane_cp30

0xe095,	// (0x00066d16) list_single_popup_jap_candidate_pane_t1

0xa99b,	// (0x0006361c) level_1_signal

0xa9ad,	// (0x0006362e) level_2_signal

0xa9c0,	// (0x00063641) level_3_signal

0xa9d3,	// (0x00063654) level_4_signal

0xa9e6,	// (0x00063667) level_5_signal

0xa9f9,	// (0x0006367a) level_6_signal

0xaa0c,	// (0x0006368d) level_7_signal

0xa99b,	// (0x0006361c) level_1_battery

0xa9ad,	// (0x0006362e) level_2_battery

0xa9c0,	// (0x00063641) level_3_battery

0xa9d3,	// (0x00063654) level_4_battery

0xa9e6,	// (0x00063667) level_5_battery

0xa9f9,	// (0x0006367a) level_6_battery

0xaa0c,	// (0x0006368d) level_7_battery

0xe0bc,	// (0x00066d3d) list_menu_pane_ParamLimits

0xe0bc,	// (0x00066d3d) list_menu_pane

0xe0d2,	// (0x00066d53) scroll_pane_cp25_ParamLimits

0xe0d2,	// (0x00066d53) scroll_pane_cp25

0xe0eb,	// (0x00066d6c) list_double2_graphic_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double2_graphic_pane_cp2

0xe0eb,	// (0x00066d6c) list_double2_large_graphic_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double2_large_graphic_pane_cp2

0xe0eb,	// (0x00066d6c) list_double2_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double2_pane_cp2

0xe0eb,	// (0x00066d6c) list_double_graphic_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double_graphic_pane_cp2

0xe0eb,	// (0x00066d6c) list_double_large_graphic_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double_large_graphic_pane_cp2

0xe0eb,	// (0x00066d6c) list_double_number_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double_number_pane_cp2

0xe0eb,	// (0x00066d6c) list_double_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double_pane_cp2

0xaa1f,	// (0x000636a0) list_single_2graphic_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_2graphic_pane_cp2

0xaa1f,	// (0x000636a0) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_graphic_heading_pane_cp2

0xaa1f,	// (0x000636a0) list_single_graphic_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_graphic_pane_cp2

0xaa1f,	// (0x000636a0) list_single_heading_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_heading_pane_cp2

0xe0fb,	// (0x00066d7c) list_single_large_graphic_pane_cp2_ParamLimits

0xe0fb,	// (0x00066d7c) list_single_large_graphic_pane_cp2

0xaa1f,	// (0x000636a0) list_single_number_heading_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_number_heading_pane_cp2

0xaa1f,	// (0x000636a0) list_single_number_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_number_pane_cp2

0xaa33,	// (0x000636b4) list_single_pane_cp2_ParamLimits

0xaa33,	// (0x000636b4) list_single_pane_cp2

0xe114,	// (0x00066d95) bg_popup_sub_pane_cp22

0xf2ef,	// (0x00067f70) popup_side_volume_key_window_g1

0xf319,	// (0x00067f9a) popup_side_volume_key_window_t1

0xf337,	// (0x00067fb8) volume_small_pane_cp1

0x8bbb,	// (0x0006183c) bg_popup_sub_pane_cp24_ParamLimits

0x8bbb,	// (0x0006183c) bg_popup_sub_pane_cp24

0x1f6d,	// (0x0005abee) fep_china_uni_candidate_pane_ParamLimits

0x1f6d,	// (0x0005abee) fep_china_uni_candidate_pane

0x1f81,	// (0x0005ac02) fep_china_uni_entry_pane

0x1f91,	// (0x0005ac12) popup_fep_china_uni_window_g1

0x1fad,	// (0x0005ac2e) fep_china_uni_entry_pane_g1

0x1fb7,	// (0x0005ac38) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00068383) fep_china_uni_entry_pane_g

0x1fc1,	// (0x0005ac42) fep_entry_item_pane

0x1fcb,	// (0x0005ac4c) fep_candidate_item_pane

0x1fd3,	// (0x0005ac54) fep_china_uni_candidate_pane_g1

0x1fdd,	// (0x0005ac5e) fep_china_uni_candidate_pane_g2

0x1fe5,	// (0x0005ac66) fep_china_uni_candidate_pane_g3

0x1fed,	// (0x0005ac6e) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00068388) fep_china_uni_candidate_pane_g

0x8a30,	// (0x000616b1) fep_entry_item_pane_g1

0x1ff7,	// (0x0005ac78) fep_entry_item_pane_t1_ParamLimits

0x1ff7,	// (0x0005ac78) fep_entry_item_pane_t1

0x200d,	// (0x0005ac8e) fep_candidate_item_pane_t1_ParamLimits

0x200d,	// (0x0005ac8e) fep_candidate_item_pane_t1

0x2022,	// (0x0005aca3) fep_candidate_item_pane_t2_ParamLimits

0x2022,	// (0x0005aca3) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00068391) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00068391) fep_candidate_item_pane_t

0x8a88,	// (0x00061709) list_highlight_pane_cp31_ParamLimits

0x8a88,	// (0x00061709) list_highlight_pane_cp31

0x2034,	// (0x0005acb5) level_1_signal_lsc

0x203d,	// (0x0005acbe) level_2_signal_lsc

0x2046,	// (0x0005acc7) level_3_signal_lsc

0x204f,	// (0x0005acd0) level_4_signal_lsc

0x2058,	// (0x0005acd9) level_5_signal_lsc

0x2061,	// (0x0005ace2) level_6_signal_lsc

0x206a,	// (0x0005aceb) level_7_signal_lsc

0x206a,	// (0x0005aceb) level_1_battery_lsc

0x2073,	// (0x0005acf4) level_2_battery_lsc

0x207c,	// (0x0005acfd) level_3_battery_lsc

0x2085,	// (0x0005ad06) level_4_battery_lsc

0x208e,	// (0x0005ad0f) level_5_battery_lsc

0x2097,	// (0x0005ad18) level_6_battery_lsc

0x2034,	// (0x0005acb5) level_7_battery_lsc

0x20a0,	// (0x0005ad21) scroll_handle_focus_pane_g1

0x20a9,	// (0x0005ad2a) scroll_handle_focus_pane_g2

0x20b2,	// (0x0005ad33) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00068396) scroll_handle_focus_pane_g

0xaac2,	// (0x00063743) list_single_2graphic_pane_g1_ParamLimits

0xaac2,	// (0x00063743) list_single_2graphic_pane_g1

0xa2cc,	// (0x00062f4d) list_single_2graphic_pane_g2_ParamLimits

0xa2cc,	// (0x00062f4d) list_single_2graphic_pane_g2

0x2c93,	// (0x0005b914) list_single_2graphic_pane_g3_ParamLimits

0x2c93,	// (0x0005b914) list_single_2graphic_pane_g3

0xaace,	// (0x0006374f) list_single_2graphic_pane_g4_ParamLimits

0xaace,	// (0x0006374f) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0006839d) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0006839d) list_single_2graphic_pane_g

0xaada,	// (0x0006375b) list_single_2graphic_pane_t1_ParamLimits

0xaada,	// (0x0006375b) list_single_2graphic_pane_t1

0xab08,	// (0x00063789) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab08,	// (0x00063789) list_double2_graphic_large_graphic_pane_g1

0xa4d6,	// (0x00063157) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa4d6,	// (0x00063157) list_double2_graphic_large_graphic_pane_g2

0xa423,	// (0x000630a4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa423,	// (0x000630a4) list_double2_graphic_large_graphic_pane_g3

0xab1a,	// (0x0006379b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab1a,	// (0x0006379b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000683a6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000683a6) list_double2_graphic_large_graphic_pane_g

0xab26,	// (0x000637a7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab26,	// (0x000637a7) list_double2_graphic_large_graphic_pane_t1

0xab3c,	// (0x000637bd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab3c,	// (0x000637bd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000683af) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000683af) list_double2_graphic_large_graphic_pane_t

0x21f5,	// (0x0005ae76) popup_fast_swap_window_ParamLimits

0x21f5,	// (0x0005ae76) popup_fast_swap_window

0x2213,	// (0x0005ae94) popup_side_volume_key_window

0x2231,	// (0x0005aeb2) stacon_top_pane

0x223b,	// (0x0005aebc) status_pane_ParamLimits

0x223b,	// (0x0005aebc) status_pane

0xab96,	// (0x00063817) status_small_pane

0x8a3a,	// (0x000616bb) control_pane

0x8a3a,	// (0x000616bb) stacon_bottom_pane

0x90bb,	// (0x00061d3c) scroll_pane_cp121

0x90b2,	// (0x00061d33) set_content_pane

0xab4e,	// (0x000637cf) bg_active_tab_pane_g1_cp1

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp1

0xab57,	// (0x000637d8) bg_active_tab_pane_g3_cp1

0xab4e,	// (0x000637cf) bg_passive_tab_pane_g1_cp1

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp1

0xab57,	// (0x000637d8) bg_passive_tab_pane_g3_cp1

0xab60,	// (0x000637e1) bg_active_tab_pane_g1_cp2

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp2

0xab69,	// (0x000637ea) bg_active_tab_pane_g3_cp2

0xab60,	// (0x000637e1) bg_passive_tab_pane_g1_cp2

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp2

0xab69,	// (0x000637ea) bg_passive_tab_pane_g3_cp2

0xab72,	// (0x000637f3) bg_active_tab_pane_g1_cp3

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp3

0xab7b,	// (0x000637fc) bg_active_tab_pane_g3_cp3

0xab72,	// (0x000637f3) bg_passive_tab_pane_g1_cp3

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp3

0xab7b,	// (0x000637fc) bg_passive_tab_pane_g3_cp3

0xab84,	// (0x00063805) bg_active_tab_pane_g1_cp4

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp4

0xab8d,	// (0x0006380e) bg_active_tab_pane_g3_cp4

0xab84,	// (0x00063805) bg_passive_tab_pane_g1_cp4

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp4

0xab8d,	// (0x0006380e) bg_passive_tab_pane_g3_cp4

0x214e,	// (0x0005adcf) bg_active_tab_pane_g1_cp5

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp5

0x2157,	// (0x0005add8) bg_active_tab_pane_g3_cp5

0x214e,	// (0x0005adcf) bg_passive_tab_pane_g1_cp5

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp5

0x2157,	// (0x0005add8) bg_passive_tab_pane_g3_cp5

0x49f2,	// (0x0005d673) list_set_graphic_pane_ParamLimits

0x49f2,	// (0x0005d673) list_set_graphic_pane

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp4

0x2176,	// (0x0005adf7) list_set_graphic_pane_g1_ParamLimits

0x2176,	// (0x0005adf7) list_set_graphic_pane_g1

0x2182,	// (0x0005ae03) list_set_graphic_pane_g2_ParamLimits

0x2182,	// (0x0005ae03) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000683b4) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000683b4) list_set_graphic_pane_g

0x0009,

0xfab8,	// (0x00068739) volume_small_pane_cp_g

0x21a6,	// (0x0005ae27) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x21a6,	// (0x0005ae27) list_double2_large_graphic_pane_g1_cp2

0x21b4,	// (0x0005ae35) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x21b4,	// (0x0005ae35) list_double2_large_graphic_pane_g2_cp2

0x21c5,	// (0x0005ae46) list_double2_large_graphic_pane_g3_cp2

0x21cd,	// (0x0005ae4e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x21cd,	// (0x0005ae4e) list_double2_large_graphic_pane_t1_cp2

0x21e3,	// (0x0005ae64) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x21e3,	// (0x0005ae64) list_double2_large_graphic_pane_t2_cp2

0x3f9e,	// (0x0005cc1f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3f9e,	// (0x0005cc1f) list_double_large_graphic_pane_g1_cp2

0x3fb1,	// (0x0005cc32) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3fb1,	// (0x0005cc32) list_double_large_graphic_pane_g2_cp2

0x2358,	// (0x0005afd9) list_double_large_graphic_pane_g3_cp2

0x3fc2,	// (0x0005cc43) list_double_large_graphic_pane_g4_cp

0x3fca,	// (0x0005cc4b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3fca,	// (0x0005cc4b) list_double_large_graphic_pane_t1_cp2

0x3fe1,	// (0x0005cc62) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3fe1,	// (0x0005cc62) list_double_large_graphic_pane_t2_cp2

0x2254,	// (0x0005aed5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2254,	// (0x0005aed5) list_double2_graphic_pane_g1_cp2

0x2262,	// (0x0005aee3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2262,	// (0x0005aee3) list_double2_graphic_pane_g2_cp2

0x2273,	// (0x0005aef4) list_double2_graphic_pane_g3_cp2

0x227d,	// (0x0005aefe) list_double2_graphic_pane_t1_cp2_ParamLimits

0x227d,	// (0x0005aefe) list_double2_graphic_pane_t1_cp2

0x2293,	// (0x0005af14) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2293,	// (0x0005af14) list_double2_graphic_pane_t2_cp2

0x1f61,	// (0x0005abe2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1f61,	// (0x0005abe2) list_single_number_heading_pane_g1_cp2

0x22a5,	// (0x0005af26) list_single_number_heading_pane_g2_cp2

0x22ad,	// (0x0005af2e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x22ad,	// (0x0005af2e) list_single_number_heading_pane_t1_cp2

0x22c3,	// (0x0005af44) list_single_number_heading_pane_t2_cp2_ParamLimits

0x22c3,	// (0x0005af44) list_single_number_heading_pane_t2_cp2

0x22d7,	// (0x0005af58) list_single_number_heading_pane_t3_cp2_ParamLimits

0x22d7,	// (0x0005af58) list_single_number_heading_pane_t3_cp2

0x1f61,	// (0x0005abe2) list_single_heading_pane_g1_cp2_ParamLimits

0x1f61,	// (0x0005abe2) list_single_heading_pane_g1_cp2

0x22a5,	// (0x0005af26) list_single_heading_pane_g2_cp2

0x22ad,	// (0x0005af2e) list_single_heading_pane_t1_cp2_ParamLimits

0x22ad,	// (0x0005af2e) list_single_heading_pane_t1_cp2

0x3d98,	// (0x0005ca19) list_single_heading_pane_t2_cp2_ParamLimits

0x3d98,	// (0x0005ca19) list_single_heading_pane_t2_cp2

0x3ce0,	// (0x0005c961) list_double_graphic_pane_g1_cp2_ParamLimits

0x3ce0,	// (0x0005c961) list_double_graphic_pane_g1_cp2

0x3cec,	// (0x0005c96d) list_double_graphic_pane_g2_cp2_ParamLimits

0x3cec,	// (0x0005c96d) list_double_graphic_pane_g2_cp2

0x3cfb,	// (0x0005c97c) list_double_graphic_pane_g3_cp2

0x3d03,	// (0x0005c984) list_double_graphic_pane_t1_cp2_ParamLimits

0x3d03,	// (0x0005c984) list_double_graphic_pane_t1_cp2

0x3d19,	// (0x0005c99a) list_double_graphic_pane_t2_cp2_ParamLimits

0x3d19,	// (0x0005c99a) list_double_graphic_pane_t2_cp2

0x234c,	// (0x0005afcd) list_double_number_pane_g1_cp2_ParamLimits

0x234c,	// (0x0005afcd) list_double_number_pane_g1_cp2

0x2358,	// (0x0005afd9) list_double_number_pane_g2_cp2

0x3ca4,	// (0x0005c925) list_double_number_pane_t1_cp2_ParamLimits

0x3ca4,	// (0x0005c925) list_double_number_pane_t1_cp2

0x3cb8,	// (0x0005c939) list_double_number_pane_t2_cp2_ParamLimits

0x3cb8,	// (0x0005c939) list_double_number_pane_t2_cp2

0x3cce,	// (0x0005c94f) list_double_number_pane_t3_cp2_ParamLimits

0x3cce,	// (0x0005c94f) list_double_number_pane_t3_cp2

0x3b8d,	// (0x0005c80e) list_single_graphic_pane_g1_cp2_ParamLimits

0x3b8d,	// (0x0005c80e) list_single_graphic_pane_g1_cp2

0x23bd,	// (0x0005b03e) list_single_graphic_pane_g2_cp2_ParamLimits

0x23bd,	// (0x0005b03e) list_single_graphic_pane_g2_cp2

0x23c9,	// (0x0005b04a) list_single_graphic_pane_g3_cp2

0x3b63,	// (0x0005c7e4) list_single_graphic_pane_t1_cp2_ParamLimits

0x3b63,	// (0x0005c7e4) list_single_graphic_pane_t1_cp2

0x23bd,	// (0x0005b03e) list_single_number_pane_g1_cp2_ParamLimits

0x23bd,	// (0x0005b03e) list_single_number_pane_g1_cp2

0x23c9,	// (0x0005b04a) list_single_number_pane_g2_cp2

0x3b63,	// (0x0005c7e4) list_single_number_pane_t1_cp2_ParamLimits

0x3b63,	// (0x0005c7e4) list_single_number_pane_t1_cp2

0x3b79,	// (0x0005c7fa) list_single_number_pane_t2_cp2_ParamLimits

0x3b79,	// (0x0005c7fa) list_single_number_pane_t2_cp2

0x21b4,	// (0x0005ae35) list_double2_pane_g1_cp2_ParamLimits

0x21b4,	// (0x0005ae35) list_double2_pane_g1_cp2

0x21c5,	// (0x0005ae46) list_double2_pane_g2_cp2

0x2324,	// (0x0005afa5) list_double2_pane_t1_cp2_ParamLimits

0x2324,	// (0x0005afa5) list_double2_pane_t1_cp2

0x233a,	// (0x0005afbb) list_double2_pane_t2_cp2_ParamLimits

0x233a,	// (0x0005afbb) list_double2_pane_t2_cp2

0x234c,	// (0x0005afcd) list_double_pane_g1_cp2_ParamLimits

0x234c,	// (0x0005afcd) list_double_pane_g1_cp2

0x2358,	// (0x0005afd9) list_double_pane_g2_cp2

0x2360,	// (0x0005afe1) list_double_pane_t1_cp2_ParamLimits

0x2360,	// (0x0005afe1) list_double_pane_t1_cp2

0x2376,	// (0x0005aff7) list_double_pane_t2_cp2_ParamLimits

0x2376,	// (0x0005aff7) list_double_pane_t2_cp2

0x23ad,	// (0x0005b02e) list_single_pane_cp2_g3

0x23bd,	// (0x0005b03e) list_single_pane_g1_cp2_ParamLimits

0x23bd,	// (0x0005b03e) list_single_pane_g1_cp2

0x23c9,	// (0x0005b04a) list_single_pane_g2_cp2

0x23d1,	// (0x0005b052) list_single_pane_t1_cp2_ParamLimits

0x23d1,	// (0x0005b052) list_single_pane_t1_cp2

0x23e9,	// (0x0005b06a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x23e9,	// (0x0005b06a) list_single_large_graphic_pane_g1_cp2

0x23f7,	// (0x0005b078) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x23f7,	// (0x0005b078) list_single_large_graphic_pane_g2_cp2

0x2403,	// (0x0005b084) list_single_large_graphic_pane_g3_cp2

0x240b,	// (0x0005b08c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x240b,	// (0x0005b08c) list_single_large_graphic_pane_g4_cp1

0x2425,	// (0x0005b0a6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2425,	// (0x0005b0a6) list_single_large_graphic_pane_t1_cp2

0x3b2d,	// (0x0005c7ae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3b2d,	// (0x0005c7ae) list_single_graphic_heading_pane_g1_cp2

0x3afa,	// (0x0005c77b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3afa,	// (0x0005c77b) list_single_graphic_heading_pane_g4_cp2

0x23c9,	// (0x0005b04a) list_single_graphic_heading_pane_g5_cp2

0x3b39,	// (0x0005c7ba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3b39,	// (0x0005c7ba) list_single_graphic_heading_pane_t1_cp2

0x3b4f,	// (0x0005c7d0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3b4f,	// (0x0005c7d0) list_single_graphic_heading_pane_t2_cp2

0x3aee,	// (0x0005c76f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3aee,	// (0x0005c76f) list_single_2graphic_pane_g1_cp2

0x3afa,	// (0x0005c77b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3afa,	// (0x0005c77b) list_single_2graphic_pane_g2_cp2

0x23c9,	// (0x0005b04a) list_single_2graphic_pane_g3_cp2

0x3b0b,	// (0x0005c78c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3b0b,	// (0x0005c78c) list_single_2graphic_pane_g4_cp2

0x3b17,	// (0x0005c798) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3b17,	// (0x0005c798) list_single_2graphic_pane_t1_cp2

0x8a30,	// (0x000616b1) list_highlight_pane_g10_cp1

0x3503,	// (0x0005c184) list_highlight_pane_g1_cp1

0x350b,	// (0x0005c18c) list_highlight_pane_g2_cp1

0x3513,	// (0x0005c194) list_highlight_pane_g3_cp1

0x351b,	// (0x0005c19c) list_highlight_pane_g4_cp1

0x3523,	// (0x0005c1a4) list_highlight_pane_g5_cp1

0x352b,	// (0x0005c1ac) list_highlight_pane_g6_cp1

0x3533,	// (0x0005c1b4) list_highlight_pane_g7_cp1

0x353b,	// (0x0005c1bc) list_highlight_pane_g8_cp1

0x3543,	// (0x0005c1c4) list_highlight_pane_g9_cp1

0xc4ea,	// (0x0006516b) form_field_slider_pane_t3

0xc4f8,	// (0x00065179) form_field_slider_pane_t4

0x343f,	// (0x0005c0c0) slider_form_pane_ParamLimits

0x343f,	// (0x0005c0c0) slider_form_pane

0x8a3a,	// (0x000616bb) control_abbreviations

0x8a3a,	// (0x000616bb) control_conventions

0x8a3a,	// (0x000616bb) control_definitions

0x8a3a,	// (0x000616bb) format_table_attribute

0x3dee,	// (0x0005ca6f) bg_popup_preview_window_pane_g9

0x8a3a,	// (0x000616bb) format_table_data2

0x8a3a,	// (0x000616bb) format_table_data3

0x8a3a,	// (0x000616bb) format_table_data_example

0x0008,

0x8a3a,	// (0x000616bb) intro_purpose

0xf8ca,	// (0x0006854b) bg_popup_preview_window_pane_g

0x8a3a,	// (0x000616bb) texts_category

0x8a3a,	// (0x000616bb) texts_graphics

0x243b,	// (0x0005b0bc) text_digital

0x244a,	// (0x0005b0cb) text_primary

0x2459,	// (0x0005b0da) text_primary_small

0x2468,	// (0x0005b0e9) text_secondary

0x2477,	// (0x0005b0f8) text_title

0x451b,	// (0x0005d19c) bg_passive_tab_pane_g1_cp3_srt

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp3_srt

0x4524,	// (0x0005d1a5) bg_passive_tab_pane_g3_cp3_srt

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp3_srt_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp3_srt

0x452d,	// (0x0005d1ae) tabs_4_active_pane_srt_g1

0xc8fb,	// (0x0006557c) tabs_4_active_pane_srt_t1_ParamLimits

0xc8fb,	// (0x0006557c) tabs_4_active_pane_srt_t1

0x451b,	// (0x0005d19c) bg_active_tab_pane_g1_cp3_copy1

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp3_copy1

0x4524,	// (0x0005d1a5) bg_active_tab_pane_g3_cp3_copy1

0x8a88,	// (0x00061709) tabs_2_long_active_pane_srt_ParamLimits

0x8a88,	// (0x00061709) tabs_2_long_active_pane_srt

0x8a88,	// (0x00061709) tabs_2_long_passive_pane_srt_ParamLimits

0x8a88,	// (0x00061709) tabs_2_long_passive_pane_srt

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp4_srt

0x4228,	// (0x0005cea9) bg_passive_tab_pane_g1_cp4_srt

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp4_srt

0x4231,	// (0x0005ceb2) bg_passive_tab_pane_g3_cp4_srt

0x8a88,	// (0x00061709) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a88,	// (0x00061709) bg_active_tab_pane_cp4_srt

0xc6ca,	// (0x0006534b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc6ca,	// (0x0006534b) tabs_2_long_active_pane_srt_t1

0x4228,	// (0x0005cea9) bg_active_tab_pane_g1_cp4_srt

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp4_srt

0x4231,	// (0x0005ceb2) bg_active_tab_pane_g3_cp4_srt

0x8bbb,	// (0x0006183c) tabs_3_long_active_pane_srt_ParamLimits

0x8bbb,	// (0x0006183c) tabs_3_long_active_pane_srt

0x8bbb,	// (0x0006183c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8bbb,	// (0x0006183c) tabs_3_long_passive_pane_cp_srt

0x8bbb,	// (0x0006183c) tabs_3_long_passive_pane_srt_ParamLimits

0x8bbb,	// (0x0006183c) tabs_3_long_passive_pane_srt

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp5_srt

0x214e,	// (0x0005adcf) bg_passive_tab_pane_g1_cp5_srt

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp5_srt

0x2157,	// (0x0005add8) bg_passive_tab_pane_g3_cp5_srt

0x8a88,	// (0x00061709) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a88,	// (0x00061709) bg_active_tab_pane_cp5_srt

0xc6b4,	// (0x00065335) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc6b4,	// (0x00065335) tabs_3_long_active_pane_srt_t1

0x214e,	// (0x0005adcf) bg_active_tab_pane_g1_cp5_srt

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp5_srt

0x2157,	// (0x0005add8) bg_active_tab_pane_g3_cp5_srt

0x4208,	// (0x0005ce89) navi_text_pane_srt_t1

0x4200,	// (0x0005ce81) navi_icon_pane_srt_g1

0x264f,	// (0x0005b2d0) midp_editing_number_pane_srt

0x2486,	// (0x0005b107) midp_ticker_pane_srt

0x2657,	// (0x0005b2d8) midp_ticker_pane_srt_g1

0x265f,	// (0x0005b2e0) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x000683d3) midp_ticker_pane_srt_g

0x2667,	// (0x0005b2e8) midp_ticker_pane_srt_t1

0x41f1,	// (0x0005ce72) midp_editing_number_pane_t1_copy1

0xaba1,	// (0x00063822) listscroll_midp_pane

0xaba1,	// (0x00063822) midp_form_pane

0x24fd,	// (0x0005b17e) midp_info_popup_window_ParamLimits

0x24fd,	// (0x0005b17e) midp_info_popup_window

0x91bf,	// (0x00061e40) bg_popup_sub_pane_cp50_ParamLimits

0x91bf,	// (0x00061e40) bg_popup_sub_pane_cp50

0x3125,	// (0x0005bda6) listscroll_midp_info_pane_ParamLimits

0x3125,	// (0x0005bda6) listscroll_midp_info_pane

0x3105,	// (0x0005bd86) listscroll_form_midp_pane_ParamLimits

0x3105,	// (0x0005bd86) listscroll_form_midp_pane

0x3111,	// (0x0005bd92) scroll_bar_cp050

0x3105,	// (0x0005bd86) list_midp_pane

0x4fcf,	// (0x0005dc50) signal_pane_g2_cp

0x301f,	// (0x0005bca0) listscroll_midp_info_pane_t1_ParamLimits

0x301f,	// (0x0005bca0) listscroll_midp_info_pane_t1

0x3037,	// (0x0005bcb8) listscroll_midp_info_pane_t2_ParamLimits

0x3037,	// (0x0005bcb8) listscroll_midp_info_pane_t2

0x3075,	// (0x0005bcf6) listscroll_midp_info_pane_t3_ParamLimits

0x3075,	// (0x0005bcf6) listscroll_midp_info_pane_t3

0x30af,	// (0x0005bd30) listscroll_midp_info_pane_t4_ParamLimits

0x30af,	// (0x0005bd30) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00068486) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00068486) listscroll_midp_info_pane_t

0x9214,	// (0x00061e95) scroll_pane_cp21

0x2fb9,	// (0x0005bc3a) form_midp_field_choice_group_pane

0x2fc2,	// (0x0005bc43) form_midp_field_text_pane

0x3005,	// (0x0005bc86) form_midp_field_time_pane

0x300d,	// (0x0005bc8e) form_midp_gauge_slider_pane

0x3016,	// (0x0005bc97) form_midp_gauge_wait_pane

0x8a3a,	// (0x000616bb) form_midp_image_pane

0xb649,	// (0x000642ca) list_single_midp_pane_ParamLimits

0xb649,	// (0x000642ca) list_single_midp_pane

0xc4c2,	// (0x00065143) form_midp_field_text_pane_t1

0x2d6f,	// (0x0005b9f0) input_focus_pane_cp050

0x2fa8,	// (0x0005bc29) list_midp_form_text_pane

0x2f4c,	// (0x0005bbcd) form_midp_field_choice_group_pane_t1

0x2f5a,	// (0x0005bbdb) input_focus_pane_cp051

0x2f6e,	// (0x0005bbef) list_midp_choice_pane

0x8a3a,	// (0x000616bb) status_idle_pane

0x2f30,	// (0x0005bbb1) form_midp_field_time_pane_t1

0x8a30,	// (0x000616b1) wait_anim_pane_g2_copy1

0x2f3e,	// (0x0005bbbf) form_midp_field_time_pane_t2

0x0001,

0x25ad,	// (0x0005b22e) aid_navinavi_width_2_pane

0xf800,	// (0x00068481) form_midp_field_time_pane_t

0x8a3a,	// (0x000616bb) input_focus_pane_cp052

0x8a3a,	// (0x000616bb) bg_input_focus_pane_cp040

0x2ef0,	// (0x0005bb71) form_midp_gauge_slider_pane_t1

0x2efe,	// (0x0005bb7f) form_midp_gauge_slider_pane_t2

0xc4a6,	// (0x00065127) form_midp_gauge_slider_pane_t3

0xc4b4,	// (0x00065135) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00068478) form_midp_gauge_slider_pane_t

0x2f28,	// (0x0005bba9) form_midp_slider_pane

0x8a88,	// (0x00061709) bg_input_focus_pane_cp041_ParamLimits

0x8a88,	// (0x00061709) bg_input_focus_pane_cp041

0x2ebd,	// (0x0005bb3e) form_midp_gauge_wait_pane_t1_ParamLimits

0x2ebd,	// (0x0005bb3e) form_midp_gauge_wait_pane_t1

0x2ecf,	// (0x0005bb50) form_midp_gauge_wait_pane_t2_ParamLimits

0x2ecf,	// (0x0005bb50) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00068473) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00068473) form_midp_gauge_wait_pane_t

0x2ee1,	// (0x0005bb62) form_midp_wait_pane_ParamLimits

0x2ee1,	// (0x0005bb62) form_midp_wait_pane

0x2e85,	// (0x0005bb06) form_midp_image_pane_g1

0x2e8e,	// (0x0005bb0f) form_midp_image_pane_t1

0x2e9d,	// (0x0005bb1e) form_midp_image_pane_t2

0x2eac,	// (0x0005bb2d) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0006846c) form_midp_image_pane_t

0x2e7c,	// (0x0005bafd) list_single_midp_pane_g1

0xe202,	// (0x00066e83) list_single_midp_pane_t1

0xc48f,	// (0x00065110) list_midp_form_item_pane_ParamLimits

0xc48f,	// (0x00065110) list_midp_form_item_pane

0x2555,	// (0x0005b1d6) list_midp_form_item_pane_t1

0x2564,	// (0x0005b1e5) midp_ticker_pane_g1

0x2570,	// (0x0005b1f1) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x000683b9) midp_ticker_pane_g

0xac45,	// (0x000638c6) midp_ticker_pane_t1

0xc853,	// (0x000654d4) midp_editing_number_pane_t1

0x443c,	// (0x0005d0bd) midp_editing_number_pane

0x444b,	// (0x0005d0cc) midp_ticker_pane

0x41e1,	// (0x0005ce62) ai_message_heading_pane

0x8a3a,	// (0x000616bb) bg_popup_window_pane_cp14

0x41e9,	// (0x0005ce6a) listscroll_ai_message_pane

0x4167,	// (0x0005cde8) ai_message_heading_pane_g1_ParamLimits

0x4167,	// (0x0005cde8) ai_message_heading_pane_g1

0x4173,	// (0x0005cdf4) ai_message_heading_pane_g2_ParamLimits

0x4173,	// (0x0005cdf4) ai_message_heading_pane_g2

0x4181,	// (0x0005ce02) ai_message_heading_pane_g3_ParamLimits

0x4181,	// (0x0005ce02) ai_message_heading_pane_g3

0x418d,	// (0x0005ce0e) ai_message_heading_pane_g4_ParamLimits

0x418d,	// (0x0005ce0e) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x000685ad) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x000685ad) ai_message_heading_pane_g

0x4199,	// (0x0005ce1a) ai_message_heading_pane_t1_ParamLimits

0x4199,	// (0x0005ce1a) ai_message_heading_pane_t1

0x41b3,	// (0x0005ce34) ai_message_heading_pane_t2_ParamLimits

0x41b3,	// (0x0005ce34) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x000685b6) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x000685b6) ai_message_heading_pane_t

0x41c7,	// (0x0005ce48) bg_popup_heading_pane_cp1_ParamLimits

0x41c7,	// (0x0005ce48) bg_popup_heading_pane_cp1

0x4155,	// (0x0005cdd6) list_ai_message_pane_ParamLimits

0x4155,	// (0x0005cdd6) list_ai_message_pane

0x9214,	// (0x00061e95) scroll_pane_cp10

0x40f1,	// (0x0005cd72) list_ai_message_pane_g1

0x40f9,	// (0x0005cd7a) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0006858a) list_ai_message_pane_g

0x4101,	// (0x0005cd82) list_ai_message_pane_t1_ParamLimits

0x4101,	// (0x0005cd82) list_ai_message_pane_t1

0x4116,	// (0x0005cd97) list_ai_message_pane_t2_ParamLimits

0x4116,	// (0x0005cd97) list_ai_message_pane_t2

0x412b,	// (0x0005cdac) list_ai_message_pane_t3_ParamLimits

0x412b,	// (0x0005cdac) list_ai_message_pane_t3

0x4140,	// (0x0005cdc1) list_ai_message_pane_t4_ParamLimits

0x4140,	// (0x0005cdc1) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0006858f) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0006858f) list_ai_message_pane_t

0xc69a,	// (0x0006531b) cell_ai_soft_ind_pane_ParamLimits

0xc69a,	// (0x0006531b) cell_ai_soft_ind_pane

0x258e,	// (0x0005b20f) cell_ai_soft_ind_pane_g1_ParamLimits

0x258e,	// (0x0005b20f) cell_ai_soft_ind_pane_g1

0x8a3a,	// (0x000616bb) grid_highlight_cp1

0x259b,	// (0x0005b21c) text_secondary_cp56_ParamLimits

0x259b,	// (0x0005b21c) text_secondary_cp56

0x40af,	// (0x0005cd30) example_general_pane_ParamLimits

0x40af,	// (0x0005cd30) example_general_pane

0x40bb,	// (0x0005cd3c) example_parent_pane_g1_ParamLimits

0x40bb,	// (0x0005cd3c) example_parent_pane_g1

0x40c7,	// (0x0005cd48) example_parent_pane_t1_ParamLimits

0x40c7,	// (0x0005cd48) example_parent_pane_t1

0xb2bb,	// (0x00063f3c) popup_preview_text_window_ParamLimits

0xb2bb,	// (0x00063f3c) popup_preview_text_window

0x23b5,	// (0x0005b036) list_single_pane_cp2_g4

0x8c97,	// (0x00061918) bg_popup_preview_window_pane_ParamLimits

0x8c97,	// (0x00061918) bg_popup_preview_window_pane

0x3df8,	// (0x0005ca79) popup_preview_text_window_t1_ParamLimits

0x3df8,	// (0x0005ca79) popup_preview_text_window_t1

0x3e16,	// (0x0005ca97) popup_preview_text_window_t2_ParamLimits

0x3e16,	// (0x0005ca97) popup_preview_text_window_t2

0x3e5f,	// (0x0005cae0) popup_preview_text_window_t3_ParamLimits

0x3e5f,	// (0x0005cae0) popup_preview_text_window_t3

0x3ea4,	// (0x0005cb25) popup_preview_text_window_t4_ParamLimits

0x3ea4,	// (0x0005cb25) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0006855e) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0006855e) popup_preview_text_window_t

0x3f22,	// (0x0005cba3) scroll_pane_cp11

0x2cfb,	// (0x0005b97c) bg_popup_preview_window_pane_g1

0x3dac,	// (0x0005ca2d) bg_popup_preview_window_pane_g2

0x3db6,	// (0x0005ca37) bg_popup_preview_window_pane_g3

0x3dc0,	// (0x0005ca41) bg_popup_preview_window_pane_g4

0x3dca,	// (0x0005ca4b) bg_popup_preview_window_pane_g5

0x3dd4,	// (0x0005ca55) bg_popup_preview_window_pane_g6

0x3ddc,	// (0x0005ca5d) bg_popup_preview_window_pane_g7

0x3de4,	// (0x0005ca65) bg_popup_preview_window_pane_g8

0xedc0,	// (0x00067a41) aid_popup_width_pane

0xb22b,	// (0x00063eac) popup_midp_note_alarm_window_ParamLimits

0xb22b,	// (0x00063eac) popup_midp_note_alarm_window

0x90cc,	// (0x00061d4d) data_form_pane_ParamLimits

0xa725,	// (0x000633a6) form_field_data_pane_g1

0xa72f,	// (0x000633b0) form_field_data_pane_t1_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_ParamLimits

0xdcb2,	// (0x00066933) data_form_wide_pane_ParamLimits

0xdcc3,	// (0x00066944) form_field_data_wide_pane_g1

0xdccf,	// (0x00066950) form_field_data_wide_pane_t1_ParamLimits

0x8e53,	// (0x00061ad4) input_focus_pane_cp6_ParamLimits

0xa870,	// (0x000634f1) input_popup_find_pane_g1_ParamLimits

0xa870,	// (0x000634f1) input_popup_find_pane_g1

0xf1a5,	// (0x00067e26) aid_navi_side_left_pane

0xf1ba,	// (0x00067e3b) aid_navi_side_right_pane

0x35fe,	// (0x0005c27f) bg_popup_window_pane_cp30_ParamLimits

0x35fe,	// (0x0005c27f) bg_popup_window_pane_cp30

0x3678,	// (0x0005c2f9) popup_midp_note_alarm_window_g1_ParamLimits

0x3678,	// (0x0005c2f9) popup_midp_note_alarm_window_g1

0x36a8,	// (0x0005c329) popup_midp_note_alarm_window_t1_ParamLimits

0x36a8,	// (0x0005c329) popup_midp_note_alarm_window_t1

0x3749,	// (0x0005c3ca) popup_midp_note_alarm_window_t2_ParamLimits

0x3749,	// (0x0005c3ca) popup_midp_note_alarm_window_t2

0x37f7,	// (0x0005c478) popup_midp_note_alarm_window_t3_ParamLimits

0x37f7,	// (0x0005c478) popup_midp_note_alarm_window_t3

0x3829,	// (0x0005c4aa) popup_midp_note_alarm_window_t4_ParamLimits

0x3829,	// (0x0005c4aa) popup_midp_note_alarm_window_t4

0x384f,	// (0x0005c4d0) popup_midp_note_alarm_window_t5_ParamLimits

0x384f,	// (0x0005c4d0) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x000684fb) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x000684fb) popup_midp_note_alarm_window_t

0x38fb,	// (0x0005c57c) wait_bar_pane_cp1_ParamLimits

0x38fb,	// (0x0005c57c) wait_bar_pane_cp1

0x8a3a,	// (0x000616bb) wait_anim_pane_copy1

0x8a3a,	// (0x000616bb) wait_border_pane_copy1

0x32e3,	// (0x0005bf64) wait_border_pane_g1_copy1

0xdce9,	// (0x0006696a) form_field_popup_pane_g1

0xa749,	// (0x000633ca) form_field_popup_pane_t1_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_cp7_ParamLimits

0x9106,	// (0x00061d87) list_form_pane_ParamLimits

0xdcf1,	// (0x00066972) form_field_popup_wide_pane_g1

0xdcf9,	// (0x0006697a) form_field_popup_wide_pane_t1_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_cp8_ParamLimits

0x9112,	// (0x00061d93) list_form_wide_pane_ParamLimits

0x45b6,	// (0x0005d237) aid_size_cell_graphic_pane

0xa7c8,	// (0x00063449) data_form_pane_t1_ParamLimits

0xb7cc,	// (0x0006444d) data_form_wide_pane_t1_ParamLimits

0xc12a,	// (0x00064dab) bg_status_flat_pane

0x9ec6,	// (0x00062b47) title_pane_t1_ParamLimits

0x8a50,	// (0x000616d1) title_pane_t2_ParamLimits

0x8a76,	// (0x000616f7) title_pane_t3_ParamLimits

0xf532,	// (0x000681b3) title_pane_t_ParamLimits

0xa99b,	// (0x0006361c) level_1_signal_ParamLimits

0xa9ad,	// (0x0006362e) level_2_signal_ParamLimits

0xa9c0,	// (0x00063641) level_3_signal_ParamLimits

0xa9d3,	// (0x00063654) level_4_signal_ParamLimits

0xa9e6,	// (0x00063667) level_5_signal_ParamLimits

0xa9f9,	// (0x0006367a) level_6_signal_ParamLimits

0xaa0c,	// (0x0006368d) level_7_signal_ParamLimits

0xa99b,	// (0x0006361c) level_1_battery_ParamLimits

0xa9ad,	// (0x0006362e) level_2_battery_ParamLimits

0xa9c0,	// (0x00063641) level_3_battery_ParamLimits

0xa9d3,	// (0x00063654) level_4_battery_ParamLimits

0xa9e6,	// (0x00063667) level_5_battery_ParamLimits

0xa9f9,	// (0x0006367a) level_6_battery_ParamLimits

0xaa0c,	// (0x0006368d) level_7_battery_ParamLimits

0x3503,	// (0x0005c184) bg_status_flat_pane_g1

0x350b,	// (0x0005c18c) bg_status_flat_pane_g2

0x3513,	// (0x0005c194) bg_status_flat_pane_g3

0x351b,	// (0x0005c19c) bg_status_flat_pane_g4

0x3523,	// (0x0005c1a4) bg_status_flat_pane_g5

0x352b,	// (0x0005c1ac) bg_status_flat_pane_g6

0x3533,	// (0x0005c1b4) bg_status_flat_pane_g7

0x9f5a,	// (0x00062bdb) tabs_3_active_pane_t1_ParamLimits

0x9f5a,	// (0x00062bdb) tabs_3_passive_pane_t1_ParamLimits

0x9f74,	// (0x00062bf5) tabs_4_active_pane_t1_ParamLimits

0x9f74,	// (0x00062bf5) tabs_4_1_passive_pane_t1_ParamLimits

0xa886,	// (0x00063507) tabs_2_active_pane_t1_ParamLimits

0xa886,	// (0x00063507) tabs_2_passive_pane_t1_ParamLimits

0x8a88,	// (0x00061709) bg_active_tab_pane_cp4_ParamLimits

0xa898,	// (0x00063519) tabs_2_long_active_pane_t1_ParamLimits

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp4_ParamLimits

0x082a,	// (0x000594ab) list_single_midp_graphic_pane_t1_ParamLimits

0x8a88,	// (0x00061709) bg_active_tab_pane_cp5_ParamLimits

0xa8ab,	// (0x0006352c) tabs_3_long_active_pane_t1_ParamLimits

0x27ad,	// (0x0005b42e) bg_passive_tab_pane_cp5_ParamLimits

0x082a,	// (0x000594ab) list_single_midp_graphic_pane_t1

0xc12a,	// (0x00064dab) bg_status_flat_pane_ParamLimits

0x2967,	// (0x0005b5e8) indicator_pane_cp2_ParamLimits

0x2967,	// (0x0005b5e8) indicator_pane_cp2

0xc2c0,	// (0x00064f41) navi_pane_srt_ParamLimits

0xc2c0,	// (0x00064f41) navi_pane_srt

0x2ace,	// (0x0005b74f) popup_clock_digital_analogue_window_cp1

0x8acc,	// (0x0006174d) indicator_pane_t1

0x2486,	// (0x0005b107) copy_highlight_pane

0x2486,	// (0x0005b107) cursor_graphics_pane

0x2486,	// (0x0005b107) graphic_within_text_pane

0x2486,	// (0x0005b107) link_highlight_pane

0x3ee5,	// (0x0005cb66) popup_preview_text_window_t5_ParamLimits

0x3ee5,	// (0x0005cb66) popup_preview_text_window_t5

0x25b7,	// (0x0005b238) cursor_digital_pane

0x25b7,	// (0x0005b238) cursor_primary_pane

0x25c8,	// (0x0005b249) cursor_primary_small_pane

0x25d0,	// (0x0005b251) cursor_secondary_pane

0x25d8,	// (0x0005b259) cursor_title_pane

0x25b7,	// (0x0005b238) link_highlight_digital_pane

0x25bf,	// (0x0005b240) link_highlight_primary_pane

0x25c8,	// (0x0005b249) link_highlight_primary_small_pane

0x25d0,	// (0x0005b251) link_highlight_secondary_pane

0x25d8,	// (0x0005b259) link_highlight_title_pane

0x25b7,	// (0x0005b238) copy_highlight_digital_pane

0x25b7,	// (0x0005b238) copy_highlight_primary_pane

0x25c8,	// (0x0005b249) copy_highlight_primary_small_pane

0x25d0,	// (0x0005b251) copy_highlight_secondary_pane

0x25d8,	// (0x0005b259) copy_highlight_title_pane

0x25d0,	// (0x0005b251) graphic_text_digital_pane

0x35a1,	// (0x0005c222) graphic_text_primary_pane

0x35aa,	// (0x0005c22b) graphic_text_primary_small_pane

0x25c8,	// (0x0005b249) graphic_text_secondary_pane

0x25b7,	// (0x0005b238) graphic_text_title_pane

0xac57,	// (0x000638d8) cursor_primary_pane_g1

0x3593,	// (0x0005c214) cursor_text_primary_t1

0xc51a,	// (0x0006519b) cursor_primary_small_pane_g1

0x3585,	// (0x0005c206) cursor_text_primary_small_t1

0xc510,	// (0x00065191) cursor_primary_small_pane_g1_copy1

0x356d,	// (0x0005c1ee) cursor_text_primary_small_t1_copy1

0x354b,	// (0x0005c1cc) cursor_text_title_t1

0xc506,	// (0x00065187) cursor_title_pane_g1

0xac57,	// (0x000638d8) cursor_digital_pane_g1

0x25ea,	// (0x0005b26b) cursor_text_digital_t1

0x25f8,	// (0x0005b279) link_highlight_primary_pane_g1

0x34f4,	// (0x0005c175) link_highlight_primary_pane_t1

0x25f8,	// (0x0005b279) link_highlight_primary_small_pane_g1

0x2600,	// (0x0005b281) link_highlight_primary_small_pane_t1

0x260f,	// (0x0005b290) link_highlight_secondary_pane_g1

0x2617,	// (0x0005b298) link_highlight_secondary_pane_t1

0x3468,	// (0x0005c0e9) link_highlight_title_pane_g1

0x3470,	// (0x0005c0f1) link_highlight_title_pane_t1

0x3451,	// (0x0005c0d2) link_highlight_digital_pane_g1

0x3459,	// (0x0005c0da) link_highlight_digital_pane_t1

0x3319,	// (0x0005bf9a) copy_highlight_primary_pane_g1

0x3330,	// (0x0005bfb1) copy_highlight_primary_pane_t1

0x3319,	// (0x0005bf9a) copy_highlight_primary_small_pane_g1

0x3321,	// (0x0005bfa2) copy_highlight_primary_small_pane_t1

0x2626,	// (0x0005b2a7) copy_highlight_secondary_pane_g1

0x262e,	// (0x0005b2af) copy_highlight_secondary_pane_t1

0x3302,	// (0x0005bf83) copy_highlight_title_pane_g1

0x330a,	// (0x0005bf8b) copy_highlight_title_pane_t1

0x3319,	// (0x0005bf9a) copy_highlight_digital_pane_g1

0x4788,	// (0x0005d409) copy_highlight_digital_pane_t1

0x46dc,	// (0x0005d35d) graphic_text_primary_pane_g1

0x476c,	// (0x0005d3ed) graphic_text_primary_pane_t1

0x477a,	// (0x0005d3fb) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0006862a) graphic_text_primary_pane_t

0x4748,	// (0x0005d3c9) graphic_text_primary_small_pane_g1

0x4750,	// (0x0005d3d1) graphic_text_primary_small_pane_t1

0x475e,	// (0x0005d3df) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00068625) graphic_text_primary_small_pane_t

0x4724,	// (0x0005d3a5) graphic_text_secondary_pane_g1

0x472c,	// (0x0005d3ad) graphic_text_secondary_pane_t1

0x473a,	// (0x0005d3bb) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00068620) graphic_text_secondary_pane_t

0x4700,	// (0x0005d381) graphic_text_title_pane_g1

0x4708,	// (0x0005d389) graphic_text_title_pane_t1

0x4716,	// (0x0005d397) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0006861b) graphic_text_title_pane_t

0x46dc,	// (0x0005d35d) graphic_text_digital_pane_g1

0x46e4,	// (0x0005d365) graphic_text_digital_pane_t1

0x46f2,	// (0x0005d373) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00068616) graphic_text_digital_pane_t

0x8a88,	// (0x00061709) navi_icon_pane_srt_ParamLimits

0x8a88,	// (0x00061709) navi_icon_pane_srt

0x8a3a,	// (0x000616bb) navi_midp_pane_srt

0x8a3a,	// (0x000616bb) navi_navi_pane_srt

0x8a88,	// (0x00061709) navi_text_pane_srt_ParamLimits

0x8a88,	// (0x00061709) navi_text_pane_srt

0x46a7,	// (0x0005d328) navi_navi_icon_text_pane_srt

0x46af,	// (0x0005d330) navi_navi_pane_srt_g1_ParamLimits

0x46af,	// (0x0005d330) navi_navi_pane_srt_g1

0x46c1,	// (0x0005d342) navi_navi_pane_srt_g2_ParamLimits

0x46c1,	// (0x0005d342) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00068611) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00068611) navi_navi_pane_srt_g

0x46d3,	// (0x0005d354) navi_navi_tabs_pane_srt

0x46a7,	// (0x0005d328) navi_navi_text_pane_srt

0x46a7,	// (0x0005d328) navi_navi_volume_pane_srt

0x4698,	// (0x0005d319) navi_navi_text_pane_srt_t1

0x0c6d,	// (0x000598ee) navi_navi_volume_pane_srt_g1

0x0c75,	// (0x000598f6) volume_small_pane_srt_ParamLimits

0x0c75,	// (0x000598f6) volume_small_pane_srt

0xf480,	// (0x00068101) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00068101) volume_small_pane_srt_g1

0xf490,	// (0x00068111) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00068111) volume_small_pane_srt_g2

0xf4a1,	// (0x00068122) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00068122) volume_small_pane_srt_g3

0xf4b2,	// (0x00068133) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00068133) volume_small_pane_srt_g4

0xf4c3,	// (0x00068144) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00068144) volume_small_pane_srt_g5

0xf4d4,	// (0x00068155) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00068155) volume_small_pane_srt_g6

0xf4e5,	// (0x00068166) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00068166) volume_small_pane_srt_g7

0xf4f6,	// (0x00068177) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00068177) volume_small_pane_srt_g8

0xf507,	// (0x00068188) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00068188) volume_small_pane_srt_g9

0xf518,	// (0x00068199) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00068199) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x000683be) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x000683be) volume_small_pane_srt_g

0x8d4c,	// (0x000619cd) query_popup_data_pane_cp2

0x467e,	// (0x0005d2ff) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x467e,	// (0x0005d2ff) navi_navi_icon_text_pane_srt_t1

0x35a1,	// (0x0005c222) navi_tabs_2_long_pane_srt

0x35a1,	// (0x0005c222) navi_tabs_2_pane_srt

0x35a1,	// (0x0005c222) navi_tabs_3_long_pane_srt

0x35a1,	// (0x0005c222) navi_tabs_3_pane_srt

0x35a1,	// (0x0005c222) navi_tabs_4_pane_srt

0x0c4d,	// (0x000598ce) tabs_2_active_pane_srt_ParamLimits

0x0c4d,	// (0x000598ce) tabs_2_active_pane_srt

0x0c5d,	// (0x000598de) tabs_2_passive_pane_srt_ParamLimits

0x0c5d,	// (0x000598de) tabs_2_passive_pane_srt

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp1_srt

0x464a,	// (0x0005d2cb) bg_passive_tab_pane_g1_cp1_srt

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp1_srt

0x4653,	// (0x0005d2d4) bg_passive_tab_pane_g3_cp1_srt

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp1_srt_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp1_srt

0x465c,	// (0x0005d2dd) tabs_2_active_pane_srt_g1

0xc983,	// (0x00065604) tabs_2_active_pane_srt_t1_ParamLimits

0xc983,	// (0x00065604) tabs_2_active_pane_srt_t1

0x464a,	// (0x0005d2cb) bg_active_tab_pane_g1_cp1_srt

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp1_srt

0x4653,	// (0x0005d2d4) bg_active_tab_pane_g3_cp1_srt

0x0c1a,	// (0x0005989b) tabs_3_active_pane_srt_ParamLimits

0x0c1a,	// (0x0005989b) tabs_3_active_pane_srt

0x0c2b,	// (0x000598ac) tabs_3_passive_pane_cp_srt_ParamLimits

0x0c2b,	// (0x000598ac) tabs_3_passive_pane_cp_srt

0x0c3c,	// (0x000598bd) tabs_3_passive_pane_srt_ParamLimits

0x0c3c,	// (0x000598bd) tabs_3_passive_pane_srt

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_passive_tab_pane_cp2_srt

0x263d,	// (0x0005b2be) bg_passive_tab_pane_g1_cp2_srt

0x20c4,	// (0x0005ad45) bg_passive_tab_pane_g2_cp2_srt

0x2646,	// (0x0005b2c7) bg_passive_tab_pane_g3_cp2_srt

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp2_srt_ParamLimits

0x8bbb,	// (0x0006183c) bg_active_tab_pane_cp2_srt

0x4630,	// (0x0005d2b1) tabs_3_active_pane_srt_g1

0xc96d,	// (0x000655ee) tabs_3_active_pane_srt_t1_ParamLimits

0xc96d,	// (0x000655ee) tabs_3_active_pane_srt_t1

0x263d,	// (0x0005b2be) bg_active_tab_pane_g1_cp2_srt

0x20c4,	// (0x0005ad45) bg_active_tab_pane_g2_cp2_srt

0x2646,	// (0x0005b2c7) bg_active_tab_pane_g3_cp2_srt

0x0bd2,	// (0x00059853) tabs_4_active_pane_srt_ParamLimits

0x0bd2,	// (0x00059853) tabs_4_active_pane_srt

0x0be4,	// (0x00059865) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0be4,	// (0x00059865) tabs_4_passive_pane_cp2_srt

0x0149,	// (0x00058dca) aid_size_cell_toolbar

0x429b,	// (0x0005cf1c) main_idle_act_pane_ParamLimits

0x0334,	// (0x00058fb5) popup_large_graphic_colour_window_ParamLimits

0xb57f,	// (0x00064200) popup_toolbar_window_ParamLimits

0xb57f,	// (0x00064200) popup_toolbar_window

0x392b,	// (0x0005c5ac) list_single_graphic_2heading_pane_ParamLimits

0x392b,	// (0x0005c5ac) list_single_graphic_2heading_pane

0xdeed,	// (0x00066b6e) aid_size_cell_apps_grid_lsc_pane

0xdeff,	// (0x00066b80) aid_size_cell_apps_grid_prt_pane

0x27ad,	// (0x0005b42e) bg_wml_button_pane_cp1_ParamLimits

0x27ad,	// (0x0005b42e) bg_wml_button_pane_cp1

0xc4c2,	// (0x00065143) form_midp_field_text_pane_t1_ParamLimits

0x2d6f,	// (0x0005b9f0) input_focus_pane_cp050_ParamLimits

0x2fa8,	// (0x0005bc29) list_midp_form_text_pane_ParamLimits

0x2f5a,	// (0x0005bbdb) input_focus_pane_cp051_ParamLimits

0x2f6e,	// (0x0005bbef) list_midp_choice_pane_ParamLimits

0x2e28,	// (0x0005baa9) list_single_2graphic_pane_cp3_ParamLimits

0x2e28,	// (0x0005baa9) list_single_2graphic_pane_cp3

0x2e3e,	// (0x0005babf) list_single_midp_graphic_pane_ParamLimits

0x2e3e,	// (0x0005babf) list_single_midp_graphic_pane

0xf039,	// (0x00067cba) list_single_graphic_2heading_pane_g1_ParamLimits

0xf039,	// (0x00067cba) list_single_graphic_2heading_pane_g1

0xf045,	// (0x00067cc6) list_single_graphic_2heading_pane_g4_ParamLimits

0xf045,	// (0x00067cc6) list_single_graphic_2heading_pane_g4

0xf051,	// (0x00067cd2) list_single_graphic_2heading_pane_g5_ParamLimits

0xf051,	// (0x00067cd2) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00068411) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00068411) list_single_graphic_2heading_pane_g

0xf05d,	// (0x00067cde) list_single_graphic_2heading_pane_t1_ParamLimits

0xf05d,	// (0x00067cde) list_single_graphic_2heading_pane_t1

0xf071,	// (0x00067cf2) list_single_graphic_2heading_pane_t2_ParamLimits

0xf071,	// (0x00067cf2) list_single_graphic_2heading_pane_t2

0xf08d,	// (0x00067d0e) list_single_graphic_2heading_pane_t3_ParamLimits

0xf08d,	// (0x00067d0e) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00068418) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00068418) list_single_graphic_2heading_pane_t

0x2c21,	// (0x0005b8a2) bg_popup_sub_pane_cp2

0x2c4b,	// (0x0005b8cc) grid_toobar_pane

0x079a,	// (0x0005941b) cell_toolbar_pane_ParamLimits

0x079a,	// (0x0005941b) cell_toolbar_pane

0x2c9f,	// (0x0005b920) cell_toolbar_pane_g1_ParamLimits

0x2c9f,	// (0x0005b920) cell_toolbar_pane_g1

0x2cb3,	// (0x0005b934) cell_toolbar_pane_g2_ParamLimits

0x2cb3,	// (0x0005b934) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00068426) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00068426) cell_toolbar_pane_g

0x2cd5,	// (0x0005b956) grid_highlight_pane_cp2_ParamLimits

0x2cd5,	// (0x0005b956) grid_highlight_pane_cp2

0x2cef,	// (0x0005b970) toolbar_button_pane

0x2cfb,	// (0x0005b97c) toolbar_button_pane_g1

0x2d03,	// (0x0005b984) toolbar_button_pane_g2

0x2d0b,	// (0x0005b98c) toolbar_button_pane_g3

0x2d13,	// (0x0005b994) toolbar_button_pane_g4

0x2d1b,	// (0x0005b99c) toolbar_button_pane_g5

0x2d23,	// (0x0005b9a4) toolbar_button_pane_g6

0x2d2b,	// (0x0005b9ac) toolbar_button_pane_g7

0x2d33,	// (0x0005b9b4) toolbar_button_pane_g8

0x2d3b,	// (0x0005b9bc) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0006842b) toolbar_button_pane_g

0x07d2,	// (0x00059453) list_single_2graphic_pane_g1_cp3_ParamLimits

0x07d2,	// (0x00059453) list_single_2graphic_pane_g1_cp3

0xb5d7,	// (0x00064258) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb5d7,	// (0x00064258) list_single_2graphic_pane_g2_cp3

0x07ef,	// (0x00059470) list_single_2graphic_pane_g3_cp3

0x07f7,	// (0x00059478) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07f7,	// (0x00059478) list_single_2graphic_pane_g4_cp3

0x0803,	// (0x00059484) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0803,	// (0x00059484) list_single_2graphic_pane_t1_cp3

0x081e,	// (0x0005949f) list_single_midp_graphic_pane_g2_ParamLimits

0x081e,	// (0x0005949f) list_single_midp_graphic_pane_g2

0xf029,	// (0x00067caa) aid_zoom_text_primary

0xf031,	// (0x00067cb2) aid_zoom_text_secondary

0xacaf,	// (0x00063930) status_small_pane_g7_ParamLimits

0xacaf,	// (0x00063930) status_small_pane_g7

0xacd2,	// (0x00063953) status_small_pane_t1_ParamLimits

0x9e96,	// (0x00062b17) title_pane_g2

0x0003,

0xf529,	// (0x000681aa) title_pane_g

0xa136,	// (0x00062db7) aid_size_cell_colour_1_pane_ParamLimits

0xa136,	// (0x00062db7) aid_size_cell_colour_1_pane

0xa14a,	// (0x00062dcb) aid_size_cell_colour_2_pane_ParamLimits

0xa14a,	// (0x00062dcb) aid_size_cell_colour_2_pane

0xa15e,	// (0x00062ddf) aid_size_cell_colour_3_pane_ParamLimits

0xa15e,	// (0x00062ddf) aid_size_cell_colour_3_pane

0xa172,	// (0x00062df3) aid_size_cell_colour_4_pane_ParamLimits

0xa172,	// (0x00062df3) aid_size_cell_colour_4_pane

0xf0e1,	// (0x00067d62) title_pane_stacon_g1_ParamLimits

0xf0e1,	// (0x00067d62) title_pane_stacon_g1

0x3387,	// (0x0005c008) popup_note_wait_window_g3_ParamLimits

0x3387,	// (0x0005c008) popup_note_wait_window_g3

0x33fe,	// (0x0005c07f) popup_note_wait_window_t5_ParamLimits

0x33fe,	// (0x0005c07f) popup_note_wait_window_t5

0x8a3a,	// (0x000616bb) main_feb_china_hwr_fs_writing_pane

0xaf12,	// (0x00063b93) popup_feb_china_hwr_fs_window_ParamLimits

0xaf12,	// (0x00063b93) popup_feb_china_hwr_fs_window

0xb5e8,	// (0x00064269) aid_size_cell_hwr_fs_ParamLimits

0xb5e8,	// (0x00064269) aid_size_cell_hwr_fs

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp3_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp3

0xb5fd,	// (0x0006427e) grid_hwr_fs_pane_ParamLimits

0xb5fd,	// (0x0006427e) grid_hwr_fs_pane

0x086d,	// (0x000594ee) linegrid_hwr_fs_pane_ParamLimits

0x086d,	// (0x000594ee) linegrid_hwr_fs_pane

0xb615,	// (0x00064296) cell_hwr_fs_pane_ParamLimits

0xb615,	// (0x00064296) cell_hwr_fs_pane

0x2d7b,	// (0x0005b9fc) linegrid_hwr_fs_pane_g1_ParamLimits

0x2d7b,	// (0x0005b9fc) linegrid_hwr_fs_pane_g1

0xc463,	// (0x000650e4) linegrid_hwr_fs_pane_g2_ParamLimits

0xc463,	// (0x000650e4) linegrid_hwr_fs_pane_g2

0x2d99,	// (0x0005ba1a) linegrid_hwr_fs_pane_g3_ParamLimits

0x2d99,	// (0x0005ba1a) linegrid_hwr_fs_pane_g3

0x08a1,	// (0x00059522) linegrid_hwr_fs_pane_g4_ParamLimits

0x08a1,	// (0x00059522) linegrid_hwr_fs_pane_g4

0x08bf,	// (0x00059540) linegrid_hwr_fs_pane_g5_ParamLimits

0x08bf,	// (0x00059540) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00068451) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00068451) linegrid_hwr_fs_pane_g

0x2da5,	// (0x0005ba26) cell_hwr_fs_pane_g1_ParamLimits

0x2da5,	// (0x0005ba26) cell_hwr_fs_pane_g1

0x2b5c,	// (0x0005b7dd) cell_hwr_fs_pane_g2_ParamLimits

0x2b5c,	// (0x0005b7dd) cell_hwr_fs_pane_g2

0xc475,	// (0x000650f6) cell_hwr_fs_pane_g3_ParamLimits

0xc475,	// (0x000650f6) cell_hwr_fs_pane_g3

0xc482,	// (0x00065103) cell_hwr_fs_pane_g4_ParamLimits

0xc482,	// (0x00065103) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0006845c) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0006845c) cell_hwr_fs_pane_g

0xb63b,	// (0x000642bc) cell_hwr_fs_pane_t1

0x8a3a,	// (0x000616bb) grid_highlight_pane_cp6

0x8a3a,	// (0x000616bb) main_idle_act2_pane

0x91fb,	// (0x00061e7c) aid_inside_area_popup_secondary

0xc53a,	// (0x000651bb) aid_inside_area_window_primary_ParamLimits

0xc53a,	// (0x000651bb) aid_inside_area_window_primary

0x4797,	// (0x0005d418) ai2_news_ticker_pane

0x479f,	// (0x0005d420) aid_size_cell_ai1_link_ParamLimits

0x479f,	// (0x0005d420) aid_size_cell_ai1_link

0x47b9,	// (0x0005d43a) popup_ai2_data_window_ParamLimits

0x47b9,	// (0x0005d43a) popup_ai2_data_window

0x47d7,	// (0x0005d458) popup_ai2_link_window_ParamLimits

0x47d7,	// (0x0005d458) popup_ai2_link_window

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp4_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp4

0x47ed,	// (0x0005d46e) grid_ai2_link_pane_ParamLimits

0x47ed,	// (0x0005d46e) grid_ai2_link_pane

0x4804,	// (0x0005d485) popup_ai2_link_window_g1_ParamLimits

0x4804,	// (0x0005d485) popup_ai2_link_window_g1

0x4810,	// (0x0005d491) popup_ai2_link_window_g2_ParamLimits

0x4810,	// (0x0005d491) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0006862f) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0006862f) popup_ai2_link_window_g

0x4821,	// (0x0005d4a2) ai2_mp_button_pane

0x4829,	// (0x0005d4aa) ai2_mp_volume_pane

0x2f5a,	// (0x0005bbdb) bg_popup_sub_pane_cp5_ParamLimits

0x2f5a,	// (0x0005bbdb) bg_popup_sub_pane_cp5

0x4831,	// (0x0005d4b2) heading_ai2_gene_pane_ParamLimits

0x4831,	// (0x0005d4b2) heading_ai2_gene_pane

0x483d,	// (0x0005d4be) list_ai2_gene_pane_ParamLimits

0x483d,	// (0x0005d4be) list_ai2_gene_pane

0x4885,	// (0x0005d506) cell_ai2_link_pane_ParamLimits

0x4885,	// (0x0005d506) cell_ai2_link_pane

0x489b,	// (0x0005d51c) cell_ai2_link_pane_g1

0x8a3a,	// (0x000616bb) grid_highlight_pane_cp7

0x0c8a,	// (0x0005990b) ai2_mp_volume_pane_g1

0x496e,	// (0x0005d5ef) ai2_mp_volume_pane_g2

0x48e3,	// (0x0005d564) list_ai2_gene_pane_t1

0x4976,	// (0x0005d5f7) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00068648) ai2_mp_volume_pane_g

0x0c92,	// (0x00059913) volume_small_pane_cp3

0x497e,	// (0x0005d5ff) aid_size_cell_ai2_button

0x4986,	// (0x0005d607) grid_ai2_button_pane

0x498f,	// (0x0005d610) cell_ai2_button_pane_ParamLimits

0x498f,	// (0x0005d610) cell_ai2_button_pane

0x8a30,	// (0x000616b1) cell_ai2_button_pane_g1

0x8a3a,	// (0x000616bb) grid_highlight_pane_cp8

0x492e,	// (0x0005d5af) ai2_gene_pane_t1_ParamLimits

0x492e,	// (0x0005d5af) ai2_gene_pane_t1

0xaea2,	// (0x00063b23) aid_height_parent_landscape

0xc6e1,	// (0x00065362) aid_height_set_list

0x429b,	// (0x0005cf1c) aid_size_parent

0x45b6,	// (0x0005d237) aid_size_cell_graphic_pane_ParamLimits

0x484d,	// (0x0005d4ce) popup_ai2_data_window_g1_ParamLimits

0x484d,	// (0x0005d4ce) popup_ai2_data_window_g1

0x4859,	// (0x0005d4da) ai2_news_ticker_pane_g1

0x4861,	// (0x0005d4e2) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00068634) ai2_news_ticker_pane_g

0x4869,	// (0x0005d4ea) ai2_news_ticker_pane_t1

0x4877,	// (0x0005d4f8) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00068639) ai2_news_ticker_pane_t

0x48a4,	// (0x0005d525) heading_ai2_gene_pane_g1

0x48ac,	// (0x0005d52d) heading_ai2_gene_pane_t1_ParamLimits

0x48ac,	// (0x0005d52d) heading_ai2_gene_pane_t1

0x48c1,	// (0x0005d542) list_highlight_pane_cp6

0x48c9,	// (0x0005d54a) ai2_gene_pane_ParamLimits

0x48c9,	// (0x0005d54a) ai2_gene_pane

0x48f1,	// (0x0005d572) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0006863e) list_ai2_gene_pane_t

0x48ff,	// (0x0005d580) list_highlight_pane_cp8_ParamLimits

0x48ff,	// (0x0005d580) list_highlight_pane_cp8

0x4910,	// (0x0005d591) ai2_gene_pane_g1_ParamLimits

0x4910,	// (0x0005d591) ai2_gene_pane_g1

0x4922,	// (0x0005d5a3) ai2_gene_pane_g2_ParamLimits

0x4922,	// (0x0005d5a3) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00068643) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00068643) ai2_gene_pane_g

0x906e,	// (0x00061cef) scroll_pane_cp12

0xae5f,	// (0x00063ae0) control_pane_t3_ParamLimits

0xae5f,	// (0x00063ae0) control_pane_t3

0xacc3,	// (0x00063944) status_small_pane_g8_ParamLimits

0xacc3,	// (0x00063944) status_small_pane_g8

0xafb4,	// (0x00063c35) popup_find_window_ParamLimits

0xb26b,	// (0x00063eec) popup_note_image_window_ParamLimits

0xe132,	// (0x00066db3) list_double2_graphic_pane_vc_g1_ParamLimits

0xe132,	// (0x00066db3) list_double2_graphic_pane_vc_g1

0x2c87,	// (0x0005b908) list_double2_graphic_pane_vc_g2_ParamLimits

0x2c87,	// (0x0005b908) list_double2_graphic_pane_vc_g2

0x2c93,	// (0x0005b914) list_double2_graphic_pane_vc_g3_ParamLimits

0x2c93,	// (0x0005b914) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0006841f) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0006841f) list_double2_graphic_pane_vc_g

0xe13e,	// (0x00066dbf) list_double2_graphic_pane_vc_t1_ParamLimits

0xe13e,	// (0x00066dbf) list_double2_graphic_pane_vc_t1

0x2c87,	// (0x0005b908) list_single_heading_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_single_heading_pane_vc_g1

0x2c93,	// (0x0005b914) list_single_heading_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_single_heading_pane_vc_g

0xe154,	// (0x00066dd5) list_single_heading_pane_vc_t1_ParamLimits

0xe154,	// (0x00066dd5) list_single_heading_pane_vc_t1

0xe16a,	// (0x00066deb) list_single_heading_pane_vc_t2_ParamLimits

0xe16a,	// (0x00066deb) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00068440) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00068440) list_single_heading_pane_vc_t

0xe17c,	// (0x00066dfd) list_setting_number_pane_vc_g1_ParamLimits

0xe17c,	// (0x00066dfd) list_setting_number_pane_vc_g1

0xe188,	// (0x00066e09) list_setting_number_pane_vc_g2_ParamLimits

0xe188,	// (0x00066e09) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00068445) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00068445) list_setting_number_pane_vc_g

0xe194,	// (0x00066e15) list_setting_number_pane_vc_t1_ParamLimits

0xe194,	// (0x00066e15) list_setting_number_pane_vc_t1

0xe1a8,	// (0x00066e29) list_setting_number_pane_vc_t2_ParamLimits

0xe1a8,	// (0x00066e29) list_setting_number_pane_vc_t2

0xe1c4,	// (0x00066e45) list_setting_number_pane_vc_t3_ParamLimits

0xe1c4,	// (0x00066e45) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0006844a) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0006844a) list_setting_number_pane_vc_t

0xe1f0,	// (0x00066e71) set_value_pane_vc_ParamLimits

0xe1f0,	// (0x00066e71) set_value_pane_vc

0x392b,	// (0x0005c5ac) list_double2_graphic_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double2_graphic_pane_vc

0x392b,	// (0x0005c5ac) list_double2_large_graphic_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double2_large_graphic_pane_vc

0x392b,	// (0x0005c5ac) list_double2_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double2_pane_vc

0x392b,	// (0x0005c5ac) list_double_graphic_heading_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_graphic_heading_pane_vc

0x392b,	// (0x0005c5ac) list_double_graphic_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_graphic_pane_vc

0x392b,	// (0x0005c5ac) list_double_heading_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_heading_pane_vc

0x393f,	// (0x0005c5c0) list_double_large_graphic_pane_vc_ParamLimits

0x393f,	// (0x0005c5c0) list_double_large_graphic_pane_vc

0x392b,	// (0x0005c5ac) list_double_number_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_number_pane_vc

0x392b,	// (0x0005c5ac) list_double_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_pane_vc

0x392b,	// (0x0005c5ac) list_double_time_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_double_time_pane_vc

0x392b,	// (0x0005c5ac) list_setting_number_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_setting_number_pane_vc

0x392b,	// (0x0005c5ac) list_setting_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_setting_pane_vc

0x392b,	// (0x0005c5ac) list_single_graphic_heading_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_single_graphic_heading_pane_vc

0x392b,	// (0x0005c5ac) list_single_heading_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_single_heading_pane_vc

0x392b,	// (0x0005c5ac) list_single_number_heading_pane_vc_ParamLimits

0x392b,	// (0x0005c5ac) list_single_number_heading_pane_vc

0xe239,	// (0x00066eba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe239,	// (0x00066eba) list_double_graphic_heading_pane_vc_g1

0x2c87,	// (0x0005b908) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2c87,	// (0x0005b908) list_double_graphic_heading_pane_vc_g2

0x2c93,	// (0x0005b914) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2c93,	// (0x0005b914) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0006864f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0006864f) list_double_graphic_heading_pane_vc_g

0xe245,	// (0x00066ec6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe245,	// (0x00066ec6) list_double_graphic_heading_pane_vc_t1

0xe25b,	// (0x00066edc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe25b,	// (0x00066edc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00068656) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00068656) list_double_graphic_heading_pane_vc_t

0xe17c,	// (0x00066dfd) list_setting_pane_vc_g1_ParamLimits

0xe17c,	// (0x00066dfd) list_setting_pane_vc_g1

0xe188,	// (0x00066e09) list_setting_pane_vc_g2_ParamLimits

0xe188,	// (0x00066e09) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00068445) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00068445) list_setting_pane_vc_g

0xe279,	// (0x00066efa) list_setting_pane_vc_t1_ParamLimits

0xe279,	// (0x00066efa) list_setting_pane_vc_t1

0xe295,	// (0x00066f16) list_setting_pane_vc_t2_ParamLimits

0xe295,	// (0x00066f16) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00068699) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00068699) list_setting_pane_vc_t

0xe1f0,	// (0x00066e71) set_value_pane_cp_vc_ParamLimits

0xe1f0,	// (0x00066e71) set_value_pane_cp_vc

0x2c87,	// (0x0005b908) list_single_number_heading_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_single_number_heading_pane_vc_g1

0x2c93,	// (0x0005b914) list_single_number_heading_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_single_number_heading_pane_vc_g

0xe2b1,	// (0x00066f32) list_single_number_heading_pane_vc_t1_ParamLimits

0xe2b1,	// (0x00066f32) list_single_number_heading_pane_vc_t1

0xdc07,	// (0x00066888) list_single_number_heading_pane_vc_t2_ParamLimits

0xdc07,	// (0x00066888) list_single_number_heading_pane_vc_t2

0xdc19,	// (0x0006689a) list_single_number_heading_pane_vc_t3_ParamLimits

0xdc19,	// (0x0006689a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x0006869e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x0006869e) list_single_number_heading_pane_vc_t

0xe132,	// (0x00066db3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe132,	// (0x00066db3) list_single_graphic_heading_pane_vc_g1

0x2c87,	// (0x0005b908) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2c87,	// (0x0005b908) list_single_graphic_heading_pane_vc_g4

0x2c93,	// (0x0005b914) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2c93,	// (0x0005b914) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0006841f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0006841f) list_single_graphic_heading_pane_vc_g

0xe2c7,	// (0x00066f48) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe2c7,	// (0x00066f48) list_single_graphic_heading_pane_vc_t1

0xe2dd,	// (0x00066f5e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe2dd,	// (0x00066f5e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x000686a5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x000686a5) list_single_graphic_heading_pane_vc_t

0x2c87,	// (0x0005b908) list_double2_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_double2_pane_vc_g1

0x2c93,	// (0x0005b914) list_double2_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_double2_pane_vc_g

0xe223,	// (0x00066ea4) list_double2_pane_vc_t1_ParamLimits

0xe223,	// (0x00066ea4) list_double2_pane_vc_t1

0x39bc,	// (0x0005c63d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39bc,	// (0x0005c63d) list_double2_large_graphic_pane_vc_g1

0x2c87,	// (0x0005b908) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2c87,	// (0x0005b908) list_double2_large_graphic_pane_vc_g2

0x2c93,	// (0x0005b914) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2c93,	// (0x0005b914) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00068246) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00068246) list_double2_large_graphic_pane_vc_g

0xdc2b,	// (0x000668ac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdc2b,	// (0x000668ac) list_double2_large_graphic_pane_vc_t1

0xe2ef,	// (0x00066f70) list_double_time_pane_vc_g1_ParamLimits

0xe2ef,	// (0x00066f70) list_double_time_pane_vc_g1

0xe2fb,	// (0x00066f7c) list_double_time_pane_vc_g2_ParamLimits

0xe2fb,	// (0x00066f7c) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x000686aa) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x000686aa) list_double_time_pane_vc_g

0xe307,	// (0x00066f88) list_double_time_pane_vc_t1_ParamLimits

0xe307,	// (0x00066f88) list_double_time_pane_vc_t1

0xe331,	// (0x00066fb2) list_double_time_pane_vc_t2_ParamLimits

0xe331,	// (0x00066fb2) list_double_time_pane_vc_t2

0xe37a,	// (0x00066ffb) list_double_time_pane_vc_t3_ParamLimits

0xe37a,	// (0x00066ffb) list_double_time_pane_vc_t3

0xe38c,	// (0x0006700d) list_double_time_pane_vc_t4_ParamLimits

0xe38c,	// (0x0006700d) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x000686af) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x000686af) list_double_time_pane_vc_t

0x2c87,	// (0x0005b908) list_double_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_double_pane_vc_g1

0x2c93,	// (0x0005b914) list_double_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_double_pane_vc_g

0xe3a0,	// (0x00067021) list_double_pane_vc_t1_ParamLimits

0xe3a0,	// (0x00067021) list_double_pane_vc_t1

0xe3b4,	// (0x00067035) list_double_pane_vc_t2_ParamLimits

0xe3b4,	// (0x00067035) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x000686b8) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x000686b8) list_double_pane_vc_t

0x2c87,	// (0x0005b908) list_double_number_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_double_number_pane_vc_g1

0x2c93,	// (0x0005b914) list_double_number_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_double_number_pane_vc_g

0xe211,	// (0x00066e92) list_double_number_pane_vc_t1_ParamLimits

0xe211,	// (0x00066e92) list_double_number_pane_vc_t1

0xe3ca,	// (0x0006704b) list_double_number_pane_vc_t2_ParamLimits

0xe3ca,	// (0x0006704b) list_double_number_pane_vc_t2

0xe3b4,	// (0x00067035) list_double_number_pane_vc_t3_ParamLimits

0xe3b4,	// (0x00067035) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x000686bd) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x000686bd) list_double_number_pane_vc_t

0x39c8,	// (0x0005c649) list_double_large_graphic_pane_vc_g1_ParamLimits

0x39c8,	// (0x0005c649) list_double_large_graphic_pane_vc_g1

0x39ea,	// (0x0005c66b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39ea,	// (0x0005c66b) list_double_large_graphic_pane_vc_g2

0x39fe,	// (0x0005c67f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39fe,	// (0x0005c67f) list_double_large_graphic_pane_vc_g3

0xe3de,	// (0x0006705f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe3de,	// (0x0006705f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x000686c4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x000686c4) list_double_large_graphic_pane_vc_g

0xe3ea,	// (0x0006706b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe3ea,	// (0x0006706b) list_double_large_graphic_pane_vc_t1

0xe406,	// (0x00067087) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe406,	// (0x00067087) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x000686cd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x000686cd) list_double_large_graphic_pane_vc_t

0x2c87,	// (0x0005b908) list_double_heading_pane_vc_g1_ParamLimits

0x2c87,	// (0x0005b908) list_double_heading_pane_vc_g1

0x2c93,	// (0x0005b914) list_double_heading_pane_vc_g2_ParamLimits

0x2c93,	// (0x0005b914) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006822e) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006822e) list_double_heading_pane_vc_g

0xe426,	// (0x000670a7) list_double_heading_pane_vc_t1_ParamLimits

0xe426,	// (0x000670a7) list_double_heading_pane_vc_t1

0xe438,	// (0x000670b9) list_double_heading_pane_vc_t2_ParamLimits

0xe438,	// (0x000670b9) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x000686d2) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x000686d2) list_double_heading_pane_vc_t

0xe450,	// (0x000670d1) list_double_graphic_pane_vc_g1_ParamLimits

0xe450,	// (0x000670d1) list_double_graphic_pane_vc_g1

0xe45c,	// (0x000670dd) list_double_graphic_pane_vc_g2_ParamLimits

0xe45c,	// (0x000670dd) list_double_graphic_pane_vc_g2

0x2c87,	// (0x0005b908) list_double_graphic_pane_vc_g3_ParamLimits

0x2c87,	// (0x0005b908) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x000686d7) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x000686d7) list_double_graphic_pane_vc_g

0xe479,	// (0x000670fa) list_double_graphic_pane_vc_t1_ParamLimits

0xe479,	// (0x000670fa) list_double_graphic_pane_vc_t1

0xe4a3,	// (0x00067124) list_double_graphic_pane_vc_t2_ParamLimits

0xe4a3,	// (0x00067124) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x000686e0) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x000686e0) list_double_graphic_pane_vc_t

0xedcc,	// (0x00067a4d) aid_size_cell_fastswap

0x9c6f,	// (0x000628f0) aid_size_cell_touch_ParamLimits

0x9c6f,	// (0x000628f0) aid_size_cell_touch

0xef53,	// (0x00067bd4) popup_fast_swap_wide_window_ParamLimits

0xef53,	// (0x00067bd4) popup_fast_swap_wide_window

0x9e2d,	// (0x00062aae) touch_pane_ParamLimits

0x9e2d,	// (0x00062aae) touch_pane

0x90c4,	// (0x00061d45) button_value_adjust_pane_cp2

0xdc5b,	// (0x000668dc) button_value_adjust_pane_cp4

0xdc63,	// (0x000668e4) form_field_data_pane_cp2

0xa6f9,	// (0x0006337a) form_field_data_wide_pane_cp2

0xdf24,	// (0x00066ba5) bg_scroll_pane_ParamLimits

0xf23d,	// (0x00067ebe) scroll_handle_pane_ParamLimits

0xf251,	// (0x00067ed2) scroll_sc2_down_pane_ParamLimits

0xf251,	// (0x00067ed2) scroll_sc2_down_pane

0xdf55,	// (0x00066bd6) scroll_sc2_up_pane_ParamLimits

0xdf55,	// (0x00066bd6) scroll_sc2_up_pane

0xcac5,	// (0x00065746) grid_wheel_folder_pane_g1_ParamLimits

0xcac5,	// (0x00065746) grid_wheel_folder_pane_g1

0xf418,	// (0x00068099) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00068099) clock_nsta_pane_cp2

0xaba1,	// (0x00063822) listscroll_midp_pane_ParamLimits

0xabad,	// (0x0006382e) midp_canvas_pane

0x2785,	// (0x0005b406) nsta_clock_indic_pane

0x27b9,	// (0x0005b43a) listscroll_form_pane_vc

0x27c1,	// (0x0005b442) listscroll_set_pane_vc_ParamLimits

0x27c1,	// (0x0005b442) listscroll_set_pane_vc

0xc152,	// (0x00064dd3) clock_nsta_pane

0xc17c,	// (0x00064dfd) indicator_nsta_pane

0x2c21,	// (0x0005b8a2) bg_popup_sub_pane_cp2_ParamLimits

0x2c35,	// (0x0005b8b6) find_pane_cp2_ParamLimits

0x2c35,	// (0x0005b8b6) find_pane_cp2

0x2c4b,	// (0x0005b8cc) grid_toobar_pane_ParamLimits

0x2d43,	// (0x0005b9c4) list_form_gen_pane_vc_ParamLimits

0x2d43,	// (0x0005b9c4) list_form_gen_pane_vc

0x2d59,	// (0x0005b9da) scroll_pane_cp8_vc_ParamLimits

0x2d59,	// (0x0005b9da) scroll_pane_cp8_vc

0x2dd5,	// (0x0005ba56) data_form_wide_pane_vc_ParamLimits

0x2dd5,	// (0x0005ba56) data_form_wide_pane_vc

0x2de1,	// (0x0005ba62) form_field_data_wide_pane_vc_g1

0x2de9,	// (0x0005ba6a) form_field_data_wide_pane_vc_t1_ParamLimits

0x2de9,	// (0x0005ba6a) form_field_data_wide_pane_vc_t1

0x90d8,	// (0x00061d59) input_focus_pane_cp6_vc_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_cp6_vc

0x3105,	// (0x0005bd86) list_midp_pane_ParamLimits

0x4624,	// (0x0005d2a5) scroll_pane_cp16_ParamLimits

0x4624,	// (0x0005d2a5) scroll_pane_cp16

0x315b,	// (0x0005bddc) button_value_adjust_pane_ParamLimits

0x315b,	// (0x0005bddc) button_value_adjust_pane

0xc6f2,	// (0x00065373) button_value_adjust_pane_cp6_ParamLimits

0xc6f2,	// (0x00065373) button_value_adjust_pane_cp6

0xc82e,	// (0x000654af) settings_code_pane_cp_ParamLimits

0xc82e,	// (0x000654af) settings_code_pane_cp

0x8a30,	// (0x000616b1) cell_touch_pane_g1

0x8a30,	// (0x000616b1) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00068364) cell_touch_pane_g

0xc999,	// (0x0006561a) cell_touch_pane_cp_ParamLimits

0xc999,	// (0x0006561a) cell_touch_pane_cp

0xc9b5,	// (0x00065636) cell_touch_pane_ParamLimits

0xc9b5,	// (0x00065636) cell_touch_pane

0x8a30,	// (0x000616b1) scroll_sc2_down_pane_g1

0x8a30,	// (0x000616b1) scroll_sc2_up_pane_g1

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp4_vc

0x49c2,	// (0x0005d643) list_set_graphic_pane_vc_g1_ParamLimits

0x49c2,	// (0x0005d643) list_set_graphic_pane_vc_g1

0x49ce,	// (0x0005d64f) list_set_graphic_pane_vc_g2_ParamLimits

0x49ce,	// (0x0005d64f) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0006865b) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0006865b) list_set_graphic_pane_vc_g

0x49da,	// (0x0005d65b) text_primary_small_cp13_vc_ParamLimits

0x49da,	// (0x0005d65b) text_primary_small_cp13_vc

0x49f2,	// (0x0005d673) list_set_graphic_pane_vc_ParamLimits

0x49f2,	// (0x0005d673) list_set_graphic_pane_vc

0x8a3a,	// (0x000616bb) input_focus_pane_cp2_vc

0x8a30,	// (0x000616b1) setting_code_pane_vc_g1

0x8a9f,	// (0x00061720) setting_code_pane_vc_t1

0x4a05,	// (0x0005d686) set_text_pane_vc_t1_ParamLimits

0x4a05,	// (0x0005d686) set_text_pane_vc_t1

0x8a3a,	// (0x000616bb) input_focus_pane_cp1_vc

0x4a26,	// (0x0005d6a7) list_set_text_pane_vc

0x8a30,	// (0x000616b1) setting_text_pane_vc_g1

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp2_vc

0x8a96,	// (0x00061717) setting_slider_graphic_pane_vc_g1

0x4a30,	// (0x0005d6b1) setting_slider_graphic_pane_vc_t1

0x4a42,	// (0x0005d6c3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00068660) setting_slider_graphic_pane_vc_t

0x4a54,	// (0x0005d6d5) slider_set_pane_cp_vc

0x4a5e,	// (0x0005d6df) slider_set_pane_vc_g1

0x4a67,	// (0x0005d6e8) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00068665) slider_set_pane_vc_g

0x9130,	// (0x00061db1) set_opt_bg_pane_g1_copy1

0x9138,	// (0x00061db9) set_opt_bg_pane_g2_copy1

0x4a93,	// (0x0005d714) set_opt_bg_pane_g3_copy1

0x9148,	// (0x00061dc9) set_opt_bg_pane_g4_copy1

0x9150,	// (0x00061dd1) set_opt_bg_pane_g5_copy1

0x9158,	// (0x00061dd9) set_opt_bg_pane_g6_copy1

0x4a9d,	// (0x0005d71e) set_opt_bg_pane_g7_copy1

0x4aa7,	// (0x0005d728) set_opt_bg_pane_g8_copy1

0x4ab1,	// (0x0005d732) set_opt_bg_pane_g9_copy1

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp_vc

0x4abb,	// (0x0005d73c) setting_slider_pane_vc_t1

0x4aca,	// (0x0005d74b) setting_slider_pane_vc_t2

0x4adc,	// (0x0005d75d) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00068674) setting_slider_pane_vc_t

0x4aee,	// (0x0005d76f) slider_set_pane_vc

0x0902,	// (0x00059583) volume_set_pane_vc_g1

0x090b,	// (0x0005958c) volume_set_pane_vc_g2

0x0914,	// (0x00059595) volume_set_pane_vc_g3

0x091d,	// (0x0005959e) volume_set_pane_vc_g4

0x0926,	// (0x000595a7) volume_set_pane_vc_g5

0x092f,	// (0x000595b0) volume_set_pane_vc_g6

0x0938,	// (0x000595b9) volume_set_pane_vc_g7

0x0941,	// (0x000595c2) volume_set_pane_vc_g8

0x094a,	// (0x000595cb) volume_set_pane_vc_g9

0x0953,	// (0x000595d4) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x0006867b) volume_set_pane_vc_g

0x4af8,	// (0x0005d779) volume_set_pane_vc

0x4b02,	// (0x0005d783) button_value_adjust_pane_cp1_vc

0x4b0c,	// (0x0005d78d) list_highlight_pane_cp2_vc

0x4b15,	// (0x0005d796) list_set_pane_vc_ParamLimits

0x4b15,	// (0x0005d796) list_set_pane_vc

0x4b83,	// (0x0005d804) main_pane_set_vc_t1_ParamLimits

0x4b83,	// (0x0005d804) main_pane_set_vc_t1

0x4b98,	// (0x0005d819) main_pane_set_vc_t2_ParamLimits

0x4b98,	// (0x0005d819) main_pane_set_vc_t2

0x4baa,	// (0x0005d82b) main_pane_set_vc_t3_ParamLimits

0x4baa,	// (0x0005d82b) main_pane_set_vc_t3

0x4bbe,	// (0x0005d83f) main_pane_set_vc_t4_ParamLimits

0x4bbe,	// (0x0005d83f) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00068690) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00068690) main_pane_set_vc_t

0x4bd2,	// (0x0005d853) setting_code_pane_vc_ParamLimits

0x4bd2,	// (0x0005d853) setting_code_pane_vc

0x4be3,	// (0x0005d864) setting_slider_graphic_pane_vc

0x4be3,	// (0x0005d864) setting_slider_pane_vc

0x4be3,	// (0x0005d864) setting_text_pane_vc

0x4be3,	// (0x0005d864) setting_volume_pane_vc

0x4bed,	// (0x0005d86e) scroll_pane_cp121_vc

0x90b2,	// (0x00061d33) set_content_pane_vc

0x4bf5,	// (0x0005d876) button_value_adjust_pane_g1

0x4bfe,	// (0x0005d87f) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x000686e5) button_value_adjust_pane_g

0x4c07,	// (0x0005d888) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4c07,	// (0x0005d888) form_field_slider_wide_pane_vc_t1

0x4c19,	// (0x0005d89a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4c19,	// (0x0005d89a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x000686ea) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x000686ea) form_field_slider_wide_pane_vc_t

0x8bbb,	// (0x0006183c) input_focus_pane_cp10_vc_ParamLimits

0x8bbb,	// (0x0006183c) input_focus_pane_cp10_vc

0x4c45,	// (0x0005d8c6) slider_cont_pane_cp1_vc_ParamLimits

0x4c45,	// (0x0005d8c6) slider_cont_pane_cp1_vc

0x4c57,	// (0x0005d8d8) slider_form_pane_g1_cp2

0x4a67,	// (0x0005d6e8) slider_form_pane_g2_cp2

0x4c84,	// (0x0005d905) form_field_slider_pane_vc_t3

0x4c92,	// (0x0005d913) form_field_slider_pane_vc_t4

0x4ca0,	// (0x0005d921) slider_form_pane_vc_ParamLimits

0x4ca0,	// (0x0005d921) slider_form_pane_vc

0x4cad,	// (0x0005d92e) form_field_slider_pane_vc_t1_ParamLimits

0x4cad,	// (0x0005d92e) form_field_slider_pane_vc_t1

0x4c19,	// (0x0005d89a) form_field_slider_pane_vc_t2_ParamLimits

0x4c19,	// (0x0005d89a) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x000686fc) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x000686fc) form_field_slider_pane_vc_t

0x8bbb,	// (0x0006183c) input_focus_pane_cp9_vc_ParamLimits

0x8bbb,	// (0x0006183c) input_focus_pane_cp9_vc

0x4cc3,	// (0x0005d944) slider_cont_pane_vc_ParamLimits

0x4cc3,	// (0x0005d944) slider_cont_pane_vc

0x4cd7,	// (0x0005d958) list_form_graphic_pane_cp_vc_ParamLimits

0x4cd7,	// (0x0005d958) list_form_graphic_pane_cp_vc

0x2de1,	// (0x0005ba62) form_field_popup_wide_pane_vc_g1

0x4cec,	// (0x0005d96d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4cec,	// (0x0005d96d) form_field_popup_wide_pane_vc_t1

0x90d8,	// (0x00061d59) input_focus_pane_cp8_vc_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_cp8_vc

0x4d31,	// (0x0005d9b2) list_form_wide_pane_vc_ParamLimits

0x4d31,	// (0x0005d9b2) list_form_wide_pane_vc

0x4d3d,	// (0x0005d9be) list_form_graphic_pane_vc_g1

0x4d45,	// (0x0005d9c6) list_form_graphic_pane_vc_t1_ParamLimits

0x4d45,	// (0x0005d9c6) list_form_graphic_pane_vc_t1

0x8a88,	// (0x00061709) list_highlight_pane_cp5_vc_ParamLimits

0x8a88,	// (0x00061709) list_highlight_pane_cp5_vc

0x4d61,	// (0x0005d9e2) list_form_graphic_pane_vc_ParamLimits

0x4d61,	// (0x0005d9e2) list_form_graphic_pane_vc

0x2de1,	// (0x0005ba62) form_field_popup_pane_vc_g1

0x4d77,	// (0x0005d9f8) form_field_popup_pane_vc_t1_ParamLimits

0x4d77,	// (0x0005d9f8) form_field_popup_pane_vc_t1

0x90d8,	// (0x00061d59) input_focus_pane_cp7_vc_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_cp7_vc

0x4d8e,	// (0x0005da0f) list_form_pane_vc_ParamLimits

0x4d8e,	// (0x0005da0f) list_form_pane_vc

0x4d9a,	// (0x0005da1b) data_form_pane_vc_t1_ParamLimits

0x4d9a,	// (0x0005da1b) data_form_pane_vc_t1

0x9130,	// (0x00061db1) input_focus_pane_vc_g1

0x9138,	// (0x00061db9) input_focus_pane_vc_g2

0x9140,	// (0x00061dc1) input_focus_pane_vc_g3

0x9148,	// (0x00061dc9) input_focus_pane_vc_g4

0x9150,	// (0x00061dd1) input_focus_pane_vc_g5

0x9158,	// (0x00061dd9) input_focus_pane_vc_g6

0x9160,	// (0x00061de1) input_focus_pane_vc_g7

0x9168,	// (0x00061de9) input_focus_pane_vc_g8

0x9170,	// (0x00061df1) input_focus_pane_vc_g9

0x8a30,	// (0x000616b1) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x000682ed) input_focus_pane_vc_g

0x2dd5,	// (0x0005ba56) data_form_pane_vc_ParamLimits

0x2dd5,	// (0x0005ba56) data_form_pane_vc

0x2de1,	// (0x0005ba62) form_field_data_pane_vc_g1

0x4db7,	// (0x0005da38) form_field_data_pane_vc_t1_ParamLimits

0x4db7,	// (0x0005da38) form_field_data_pane_vc_t1

0x90d8,	// (0x00061d59) input_focus_pane_vc_ParamLimits

0x90d8,	// (0x00061d59) input_focus_pane_vc

0x4dd1,	// (0x0005da52) button_value_adjust_pane_cp3_vc

0x4dd9,	// (0x0005da5a) button_value_adjust_pane_cp5_vc

0x4de1,	// (0x0005da62) form_field_data_pane_vc_ParamLimits

0x4de1,	// (0x0005da62) form_field_data_pane_vc

0x4dfc,	// (0x0005da7d) form_field_data_pane_vc_cp2

0x4e04,	// (0x0005da85) form_field_data_wide_pane_vc_ParamLimits

0x4e04,	// (0x0005da85) form_field_data_wide_pane_vc

0x4e1e,	// (0x0005da9f) form_field_data_wide_pane_vc_cp2

0x4e26,	// (0x0005daa7) form_field_popup_pane_vc_ParamLimits

0x4e26,	// (0x0005daa7) form_field_popup_pane_vc

0x4e41,	// (0x0005dac2) form_field_popup_wide_pane_vc_ParamLimits

0x4e41,	// (0x0005dac2) form_field_popup_wide_pane_vc

0x4e5b,	// (0x0005dadc) form_field_slider_pane_vc_ParamLimits

0x4e5b,	// (0x0005dadc) form_field_slider_pane_vc

0x4e6e,	// (0x0005daef) form_field_slider_wide_pane_vc_ParamLimits

0x4e6e,	// (0x0005daef) form_field_slider_wide_pane_vc

0xc9d3,	// (0x00065654) grid_touch_1_pane_ParamLimits

0xc9d3,	// (0x00065654) grid_touch_1_pane

0xc9e7,	// (0x00065668) grid_touch_2_pane_ParamLimits

0xc9e7,	// (0x00065668) grid_touch_2_pane

0x4f54,	// (0x0005dbd5) touch_pane_g1_ParamLimits

0x4f54,	// (0x0005dbd5) touch_pane_g1

0x4ea7,	// (0x0005db28) cell_app_pane_cp_wide_ParamLimits

0x4ea7,	// (0x0005db28) cell_app_pane_cp_wide

0x4eb8,	// (0x0005db39) grid_popup_fast_wide_pane_ParamLimits

0x4eb8,	// (0x0005db39) grid_popup_fast_wide_pane

0x4ecc,	// (0x0005db4d) scroll_pane_cp19_ParamLimits

0x4ecc,	// (0x0005db4d) scroll_pane_cp19

0x8a3a,	// (0x000616bb) bg_popup_window_pane_cp20

0x4ee0,	// (0x0005db61) listscroll_popup_fast_wide_pane

0xca13,	// (0x00065694) grid_indicator_nsta_pane

0x4efa,	// (0x0005db7b) clock_nsta_pane_g1

0x4f03,	// (0x0005db84) clock_nsta_pane_t1

0xca1f,	// (0x000656a0) cell_indicator_nsta_pane_ParamLimits

0xca1f,	// (0x000656a0) cell_indicator_nsta_pane

0x4f54,	// (0x0005dbd5) cell_indicator_nsta_pane_g1

0xca3a,	// (0x000656bb) cell_indicator_nsta_pane_g2

0x0001,

0xfa8c,	// (0x0006870d) cell_indicator_nsta_pane_g

0x4f75,	// (0x0005dbf6) clock_nsta_pane_cp

0x4f7e,	// (0x0005dbff) indicator_nsta_pane_cp

0x4f88,	// (0x0005dc09) nsta_clock_indic_pane_g1

0x8ac4,	// (0x00061745) grid_indicator_pane

0xe047,	// (0x00066cc8) scroll_pane_cp29

0xf367,	// (0x00067fe8) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x00067fe8) indicator_nsta_pane_cp2

0x8a88,	// (0x00061709) main_apps_wheel_pane

0x2fc2,	// (0x0005bc43) form_midp_field_text_pane_ParamLimits

0x3111,	// (0x0005bd92) scroll_bar_cp050_ParamLimits

0x4fe1,	// (0x0005dc62) cell_indicator_pane_ParamLimits

0x4fe1,	// (0x0005dc62) cell_indicator_pane

0x4ff9,	// (0x0005dc7a) cell_indicator_pane_g1

0xca47,	// (0x000656c8) grid_wheel_folder_pane_ParamLimits

0xca47,	// (0x000656c8) grid_wheel_folder_pane

0xca55,	// (0x000656d6) list_wheel_apps_pane_ParamLimits

0xca55,	// (0x000656d6) list_wheel_apps_pane

0xca63,	// (0x000656e4) main_apps_wheel_pane_g1_ParamLimits

0xca63,	// (0x000656e4) main_apps_wheel_pane_g1

0xca73,	// (0x000656f4) main_apps_wheel_pane_g2_ParamLimits

0xca73,	// (0x000656f4) main_apps_wheel_pane_g2

0x0001,

0xfaa8,	// (0x00068729) main_apps_wheel_pane_g_ParamLimits

0xfaa8,	// (0x00068729) main_apps_wheel_pane_g

0xca83,	// (0x00065704) main_apps_wheel_pane_t1_ParamLimits

0xca83,	// (0x00065704) main_apps_wheel_pane_t1

0xca9b,	// (0x0006571c) list_wheel_apps_pane_g1

0xcaa3,	// (0x00065724) list_wheel_apps_pane_g2

0xcaab,	// (0x0006572c) list_wheel_apps_pane_g3

0xcab3,	// (0x00065734) list_wheel_apps_pane_g4

0xcabb,	// (0x0006573c) list_wheel_apps_pane_g5

0x0004,

0xfaad,	// (0x0006872e) list_wheel_apps_pane_g

0x22f7,	// (0x0005af78) navi_icon_text_pane

0xc044,	// (0x00064cc5) aid_fill_nsta

0xcad8,	// (0x00065759) navi_icon_text_pane_g1

0xcae4,	// (0x00065765) navi_icon_text_pane_t1

0x218e,	// (0x0005ae0f) list_set_graphic_pane_t1_ParamLimits

0x218e,	// (0x0005ae0f) list_set_graphic_pane_t1

0x387e,	// (0x0005c4ff) popup_midp_note_alarm_window_t6_ParamLimits

0x387e,	// (0x0005c4ff) popup_midp_note_alarm_window_t6

0x3890,	// (0x0005c511) popup_midp_note_alarm_window_t7_ParamLimits

0x3890,	// (0x0005c511) popup_midp_note_alarm_window_t7

0x38a2,	// (0x0005c523) popup_midp_note_alarm_window_t8_ParamLimits

0x38a2,	// (0x0005c523) popup_midp_note_alarm_window_t8

0x38b4,	// (0x0005c535) popup_midp_note_alarm_window_t9_ParamLimits

0x38b4,	// (0x0005c535) popup_midp_note_alarm_window_t9

0x38c6,	// (0x0005c547) popup_midp_note_alarm_window_t10_ParamLimits

0x38c6,	// (0x0005c547) popup_midp_note_alarm_window_t10

0x38d8,	// (0x0005c559) popup_midp_note_alarm_window_t11_ParamLimits

0x38d8,	// (0x0005c559) popup_midp_note_alarm_window_t11

0x38ea,	// (0x0005c56b) scroll_pane_cp17_ParamLimits

0x38ea,	// (0x0005c56b) scroll_pane_cp17

0x0902,	// (0x00059583) volume_small_pane_cp_g1

0x0c9b,	// (0x0005991c) volume_small_pane_cp_g2

0x0ca4,	// (0x00059925) volume_small_pane_cp_g3

0x0cad,	// (0x0005992e) volume_small_pane_cp_g4

0x0cb6,	// (0x00059937) volume_small_pane_cp_g5

0x0cbf,	// (0x00059940) volume_small_pane_cp_g6

0x0cc8,	// (0x00059949) volume_small_pane_cp_g7

0x0cd1,	// (0x00059952) volume_small_pane_cp_g8

0x0cda,	// (0x0005995b) volume_small_pane_cp_g9

0x0ce3,	// (0x00059964) volume_small_pane_cp_g10

0x2564,	// (0x0005b1e5) midp_ticker_pane_g1_ParamLimits

0x2570,	// (0x0005b1f1) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x000683b9) midp_ticker_pane_g_ParamLimits

0xac45,	// (0x000638c6) midp_ticker_pane_t1_ParamLimits

0xc068,	// (0x00064ce9) aid_fill_nsta_2

0x30fd,	// (0x0005bd7e) list_form2_midp_pane

0x443c,	// (0x0005d0bd) midp_editing_number_pane_ParamLimits

0x444b,	// (0x0005d0cc) midp_ticker_pane_ParamLimits

0x50ec,	// (0x0005dd6d) form2_midp_field_pane

0x5110,	// (0x0005dd91) scroll_pane_cp51

0x5130,	// (0x0005ddb1) form2_midp_button_pane_ParamLimits

0x5130,	// (0x0005ddb1) form2_midp_button_pane

0x5142,	// (0x0005ddc3) form2_midp_content_pane_ParamLimits

0x5142,	// (0x0005ddc3) form2_midp_content_pane

0x515c,	// (0x0005dddd) form2_midp_field_choice_group_pane

0x5164,	// (0x0005dde5) form2_midp_field_pane_g1

0x516c,	// (0x0005dded) form2_midp_field_pane_g2

0x5174,	// (0x0005ddf5) form2_midp_field_pane_g3

0x517c,	// (0x0005ddfd) form2_midp_field_pane_g4

0x0003,

0xfad2,	// (0x00068753) form2_midp_field_pane_g

0x5184,	// (0x0005de05) form2_midp_gauge_slider_pane

0x518c,	// (0x0005de0d) form2_midp_gauge_wait_pane

0x5194,	// (0x0005de15) form2_midp_image_pane_ParamLimits

0x5194,	// (0x0005de15) form2_midp_image_pane

0x51af,	// (0x0005de30) form2_midp_label_pane_ParamLimits

0x51af,	// (0x0005de30) form2_midp_label_pane

0xcb12,	// (0x00065793) form2_midp_label_pane_cp_ParamLimits

0xcb12,	// (0x00065793) form2_midp_label_pane_cp

0x51ef,	// (0x0005de70) form2_midp_string_pane_ParamLimits

0x51ef,	// (0x0005de70) form2_midp_string_pane

0xb7fc,	// (0x0006447d) form2_midp_text_pane_ParamLimits

0xb7fc,	// (0x0006447d) form2_midp_text_pane

0x5201,	// (0x0005de82) form2_midp_time_pane

0x5211,	// (0x0005de92) input_focus_pane_cp51_ParamLimits

0x5211,	// (0x0005de92) input_focus_pane_cp51

0x5229,	// (0x0005deaa) form2_midp_label_pane_t1_ParamLimits

0x5229,	// (0x0005deaa) form2_midp_label_pane_t1

0xb81f,	// (0x000644a0) form2_mdip_text_pane_t1_ParamLimits

0xb81f,	// (0x000644a0) form2_mdip_text_pane_t1

0xe4c1,	// (0x00067142) form2_midp_time_pane_t1

0x5277,	// (0x0005def8) form2_midp_gauge_slider_pane_t1

0xcb33,	// (0x000657b4) form2_midp_gauge_slider_pane_t2

0xcb45,	// (0x000657c6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadb,	// (0x0006875c) form2_midp_gauge_slider_pane_t

0x52ad,	// (0x0005df2e) form2_midp_slider_pane

0x52b9,	// (0x0005df3a) form2_midp_gauge_wait_pane_t1

0x52c7,	// (0x0005df48) form2_midp_wait_pane_ParamLimits

0x52c7,	// (0x0005df48) form2_midp_wait_pane

0x2e28,	// (0x0005baa9) list_single_2graphic_pane_cp4_ParamLimits

0x2e28,	// (0x0005baa9) list_single_2graphic_pane_cp4

0xcb57,	// (0x000657d8) list_single_midp_graphic_pane_cp_ParamLimits

0xcb57,	// (0x000657d8) list_single_midp_graphic_pane_cp

0x8a3a,	// (0x000616bb) list_highlight_pane_cp20

0x530b,	// (0x0005df8c) list_single_2graphic_pane_g1_cp4

0x48a4,	// (0x0005d525) list_single_2graphic_pane_g2_cp4

0x5313,	// (0x0005df94) list_single_2graphic_pane_t1_cp4

0x8a88,	// (0x00061709) list_highlight_pane_cp21

0x5322,	// (0x0005dfa3) list_single_midp_graphic_pane_g4_cp

0x5331,	// (0x0005dfb2) list_single_midp_graphic_pane_t1_cp

0xcb78,	// (0x000657f9) form2_mdip_string_pane_t1_ParamLimits

0xcb78,	// (0x000657f9) form2_mdip_string_pane_t1

0x8a3a,	// (0x000616bb) bg_wml_button_pane_cp2

0x8a30,	// (0x000616b1) form2_midp_image_pane_g1

0xf014,	// (0x00067c95) list_double_large_graphic_pane_g5_ParamLimits

0xf014,	// (0x00067c95) list_double_large_graphic_pane_g5

0xaba1,	// (0x00063822) midp_form_pane_ParamLimits

0x8a88,	// (0x00061709) main_apps_wheel_pane_ParamLimits

0xb2f1,	// (0x00063f72) popup_preview_window_ParamLimits

0xb2f1,	// (0x00063f72) popup_preview_window

0x0733,	// (0x000593b4) popup_touch_info_window_ParamLimits

0x0733,	// (0x000593b4) popup_touch_info_window

0x0755,	// (0x000593d6) popup_touch_menu_window_ParamLimits

0x0755,	// (0x000593d6) popup_touch_menu_window

0x8a26,	// (0x000616a7) bg_popup_sub_pane_cp6

0x53e2,	// (0x0005e063) list_touch_menu_pane

0x53ea,	// (0x0005e06b) list_single_touch_menu_pane_ParamLimits

0x53ea,	// (0x0005e06b) list_single_touch_menu_pane

0x5402,	// (0x0005e083) list_single_touch_menu_pane_t1

0x8a88,	// (0x00061709) bg_popup_sub_pane_cp7_ParamLimits

0x8a88,	// (0x00061709) bg_popup_sub_pane_cp7

0x5410,	// (0x0005e091) heading_sub_pane

0x5418,	// (0x0005e099) list_touch_info_pane_ParamLimits

0x5418,	// (0x0005e099) list_touch_info_pane

0x5427,	// (0x0005e0a8) list_single_touch_info_pane_ParamLimits

0x5427,	// (0x0005e0a8) list_single_touch_info_pane

0x5439,	// (0x0005e0ba) list_single_touch_info_pane_t1

0x5447,	// (0x0005e0c8) list_single_touch_info_pane_t2

0x0001,

0xfae9,	// (0x0006876a) list_single_touch_info_pane_t

0x2486,	// (0x0005b107) bg_popup_heading_pane_cp

0x5455,	// (0x0005e0d6) heading_sub_pane_t1

0x2d6f,	// (0x0005b9f0) bg_popup_preview_window_pane_cp_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_preview_window_pane_cp

0x5410,	// (0x0005e091) heading_preview_pane

0x5418,	// (0x0005e099) list_preview_pane_ParamLimits

0x5418,	// (0x0005e099) list_preview_pane

0x5463,	// (0x0005e0e4) popup_preview_window_g1

0x5427,	// (0x0005e0a8) list_single_preview_pane_ParamLimits

0x5427,	// (0x0005e0a8) list_single_preview_pane

0x546b,	// (0x0005e0ec) list_single_preview_pane_g1

0x5473,	// (0x0005e0f4) list_single_preview_pane_t1

0x5439,	// (0x0005e0ba) list_single_preview_pane_t2

0x0001,

0xfaee,	// (0x0006876f) list_single_preview_pane_t

0x5481,	// (0x0005e102) bg_popup_heading_pane_cp2_ParamLimits

0x5481,	// (0x0005e102) bg_popup_heading_pane_cp2

0x5497,	// (0x0005e118) heading_preview_pane_g1

0x549f,	// (0x0005e120) heading_preview_pane_t1_ParamLimits

0x549f,	// (0x0005e120) heading_preview_pane_t1

0x8adb,	// (0x0006175c) soft_indicator_pane_t1_ParamLimits

0x904b,	// (0x00061ccc) scroll_pane_ParamLimits

0xdf43,	// (0x00066bc4) scroll_sc2_left_pane

0xdf4c,	// (0x00066bcd) scroll_sc2_right_pane

0xdf6b,	// (0x00066bec) scroll_bg_pane_g1_ParamLimits

0xdf80,	// (0x00066c01) scroll_bg_pane_g2_ParamLimits

0xdf98,	// (0x00066c19) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00068344) scroll_bg_pane_g_ParamLimits

0xdf6b,	// (0x00066bec) scroll_handle_pane_g1_ParamLimits

0xdfba,	// (0x00066c3b) scroll_handle_pane_g2_ParamLimits

0xdf98,	// (0x00066c19) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0006834b) scroll_handle_pane_g_ParamLimits

0x0191,	// (0x00058e12) popup_choice_list_window_ParamLimits

0x0191,	// (0x00058e12) popup_choice_list_window

0x2c2d,	// (0x0005b8ae) choice_list_pane

0x2cc7,	// (0x0005b948) cell_toolbar_pane_t1

0x2cef,	// (0x0005b970) toolbar_button_pane_ParamLimits

0x3f77,	// (0x0005cbf8) ai_gene_pane_1_t2_ParamLimits

0x3f77,	// (0x0005cbf8) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0006856e) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0006856e) ai_gene_pane_1_t

0x54bc,	// (0x0005e13d) scroll_sc2_left_pane_g1

0x54bc,	// (0x0005e13d) scroll_sc2_right_pane_g1

0x27ad,	// (0x0005b42e) bg_popup_sub_pane_cp10

0x54c6,	// (0x0005e147) list_choice_list_pane

0x54df,	// (0x0005e160) list_single_choice_list_pane_ParamLimits

0x54df,	// (0x0005e160) list_single_choice_list_pane

0x54f7,	// (0x0005e178) list_single_choice_list_pane_g1

0x9239,	// (0x00061eba) list_single_choice_list_pane_t1_ParamLimits

0x9239,	// (0x00061eba) list_single_choice_list_pane_t1

0x54ff,	// (0x0005e180) choice_list_pane_g1

0x5507,	// (0x0005e188) choice_list_pane_t1

0x8a26,	// (0x000616a7) input_focus_pane_cp11

0xdeb8,	// (0x00066b39) title_pane_stacon_g2_ParamLimits

0xdeb8,	// (0x00066b39) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0006832a) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0006832a) title_pane_stacon_g

0x2486,	// (0x0005b107) cursor_press_pane

0xaf68,	// (0x00063be9) popup_fep_hwr_window_ParamLimits

0xaf68,	// (0x00063be9) popup_fep_hwr_window

0x02d5,	// (0x00058f56) popup_fep_vkb_window_ParamLimits

0x02d5,	// (0x00058f56) popup_fep_vkb_window

0x5515,	// (0x0005e196) cursor_press_pane_g1

0x0002,

0xfb17,	// (0x00068798) fep_vkb_side_pane_g_ParamLimits

0x0d67,	// (0x000599e8) fep_hwr_candidate_pane_ParamLimits

0x0d67,	// (0x000599e8) fep_hwr_candidate_pane

0x0d91,	// (0x00059a12) fep_hwr_side_pane_ParamLimits

0x0d91,	// (0x00059a12) fep_hwr_side_pane

0x0db3,	// (0x00059a34) fep_hwr_top_pane_ParamLimits

0x0db3,	// (0x00059a34) fep_hwr_top_pane

0x0dcb,	// (0x00059a4c) fep_hwr_write_pane_ParamLimits

0x0dcb,	// (0x00059a4c) fep_hwr_write_pane

0xfb17,	// (0x00068798) fep_vkb_side_pane_g

0x551d,	// (0x0005e19e) fep_hwr_top_pane_g1

0x552f,	// (0x0005e1b0) fep_hwr_top_pane_g2

0x0e05,	// (0x00059a86) fep_hwr_top_pane_g3

0x0002,

0xfaf3,	// (0x00068774) fep_hwr_top_pane_g

0x0e1a,	// (0x00059a9b) fep_hwr_top_text_pane

0xe0b4,	// (0x00066d35) fep_hwr_top_text_pane_g1

0x5565,	// (0x0005e1e6) fep_hwr_top_text_pane_t1

0x0f24,	// (0x00059ba5) fep_hwr_candidate_pane_g1

0x57b0,	// (0x0005e431) fep_vkb_keypad_pane_g3_ParamLimits

0x57b0,	// (0x0005e431) fep_vkb_keypad_pane_g3

0x57dc,	// (0x0005e45d) fep_vkb_keypad_pane_g4_ParamLimits

0x57dc,	// (0x0005e45d) fep_vkb_keypad_pane_g4

0x5853,	// (0x0005e4d4) fep_vkb_bottom_pane_g2_ParamLimits

0x5853,	// (0x0005e4d4) fep_vkb_bottom_pane_g2

0x0001,

0xfb1e,	// (0x0006879f) fep_vkb_bottom_pane_g_ParamLimits

0xfb1e,	// (0x0006879f) fep_vkb_bottom_pane_g

0x54bc,	// (0x0005e13d) cell_vkb_side_pane_g2

0x0001,

0xfb28,	// (0x000687a9) cell_vkb_side_pane_g

0x58de,	// (0x0005e55f) cell_vkb_side_pane_t1

0x58ec,	// (0x0005e56d) cell_vkb_side_pane_t1_copy1

0x54bc,	// (0x0005e13d) bg_fep_vkb_candidate_pane_g2

0x5a30,	// (0x0005e6b1) cell_vkb_candidate_pane_ParamLimits

0x5573,	// (0x0005e1f4) aid_size_cell_vkb_ParamLimits

0x5573,	// (0x0005e1f4) aid_size_cell_vkb

0x5a30,	// (0x0005e6b1) cell_vkb_candidate_pane

0x0f4b,	// (0x00059bcc) bg_popup_fep_shadow_pane_g1

0xcc21,	// (0x000658a2) fep_vkb_bottom_pane_ParamLimits

0xcc21,	// (0x000658a2) fep_vkb_bottom_pane

0x5642,	// (0x0005e2c3) fep_vkb_candidate_pane_ParamLimits

0x5642,	// (0x0005e2c3) fep_vkb_candidate_pane

0xcc4d,	// (0x000658ce) fep_vkb_keypad_pane_ParamLimits

0xcc4d,	// (0x000658ce) fep_vkb_keypad_pane

0xcc74,	// (0x000658f5) fep_vkb_side_pane_ParamLimits

0xcc74,	// (0x000658f5) fep_vkb_side_pane

0xccb0,	// (0x00065931) fep_vkb_top_pane_ParamLimits

0xccb0,	// (0x00065931) fep_vkb_top_pane

0x5709,	// (0x0005e38a) fep_vkb_top_pane_g1_ParamLimits

0x5709,	// (0x0005e38a) fep_vkb_top_pane_g1

0x5718,	// (0x0005e399) fep_vkb_top_pane_g2_ParamLimits

0x5718,	// (0x0005e399) fep_vkb_top_pane_g2

0x5727,	// (0x0005e3a8) fep_vkb_top_pane_g3_ParamLimits

0x5727,	// (0x0005e3a8) fep_vkb_top_pane_g3

0x0003,

0xfb0e,	// (0x0006878f) fep_vkb_top_pane_g_ParamLimits

0xfb0e,	// (0x0006878f) fep_vkb_top_pane_g

0x5745,	// (0x0005e3c6) fep_vkb_top_text_pane_ParamLimits

0x5745,	// (0x0005e3c6) fep_vkb_top_text_pane

0xccec,	// (0x0006596d) fep_vkb_side_pane_g1_ParamLimits

0xccec,	// (0x0006596d) fep_vkb_side_pane_g1

0x579f,	// (0x0005e420) grid_vkb_side_pane_ParamLimits

0x579f,	// (0x0005e420) grid_vkb_side_pane

0x0f53,	// (0x00059bd4) bg_popup_fep_shadow_pane_g2

0x0f5c,	// (0x00059bdd) bg_popup_fep_shadow_pane_g3

0x0f64,	// (0x00059be5) bg_popup_fep_shadow_pane_g4

0x0f6d,	// (0x00059bee) bg_popup_fep_shadow_pane_g5

0x0f77,	// (0x00059bf8) bg_popup_fep_shadow_pane_g6

0x0f7f,	// (0x00059c00) bg_popup_fep_shadow_pane_g7

0x9148,	// (0x00061dc9) bg_popup_fep_shadow_pane_g8

0x57fe,	// (0x0005e47f) grid_vkb_keypad_number_pane_ParamLimits

0x57fe,	// (0x0005e47f) grid_vkb_keypad_number_pane

0x5812,	// (0x0005e493) grid_vkb_keypad_pane_ParamLimits

0x5812,	// (0x0005e493) grid_vkb_keypad_pane

0x5838,	// (0x0005e4b9) fep_vkb_bottom_pane_g1_ParamLimits

0x5838,	// (0x0005e4b9) fep_vkb_bottom_pane_g1

0x5861,	// (0x0005e4e2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5861,	// (0x0005e4e2) grid_vkb_keypad_bottom_left_pane

0x5876,	// (0x0005e4f7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5876,	// (0x0005e4f7) grid_vkb_keypad_bottom_right_pane

0x588b,	// (0x0005e50c) fep_vkb_top_text_pane_g1

0xcd33,	// (0x000659b4) fep_vkb_top_text_pane_t1

0xcd45,	// (0x000659c6) cell_vkb_side_pane_ParamLimits

0xcd45,	// (0x000659c6) cell_vkb_side_pane

0x54bc,	// (0x0005e13d) cell_vkb_side_pane_g1

0x58fa,	// (0x0005e57b) cell_vkb_keypad_pane_ParamLimits

0x58fa,	// (0x0005e57b) cell_vkb_keypad_pane

0x5987,	// (0x0005e608) cell_vkb_keypad_pane_g1

0x0008,

0xfb3b,	// (0x000687bc) bg_popup_fep_shadow_pane_g

0x0f91,	// (0x00059c12) cell_hwr_side_pane_g1

0x0f91,	// (0x00059c12) cell_hwr_side_pane_g2

0x5991,	// (0x0005e612) cell_vkb_keypad_pane_t1

0xcd5b,	// (0x000659dc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd5b,	// (0x000659dc) cell_vkb_keypad_bottom_left_pane

0xcd70,	// (0x000659f1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd70,	// (0x000659f1) cell_vkb_keypad_bottom_right_pane

0x54bc,	// (0x0005e13d) cell_vkb_keypad_bottom_left_pane_g1

0x54bc,	// (0x0005e13d) cell_vkb_keypad_bottom_right_pane_g1

0x59f5,	// (0x0005e676) cell_vkb_keypad_number_pane_ParamLimits

0x59f5,	// (0x0005e676) cell_vkb_keypad_number_pane

0x5a14,	// (0x0005e695) cell_vkb_keypad_number_pane_g1

0x5a1e,	// (0x0005e69f) cell_vkb_keypad_number_pane_g2

0x5a27,	// (0x0005e6a8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2d,	// (0x000687ae) cell_vkb_keypad_number_pane_g

0x5991,	// (0x0005e612) cell_vkb_keypad_number_pane_t1

0x5a51,	// (0x0005e6d2) fep_vkb_candidate_pane_g1

0x0001,

0xfb4e,	// (0x000687cf) cell_hwr_side_pane_g

0x5a6a,	// (0x0005e6eb) cell_hwr_side_pane_t1

0x0f9b,	// (0x00059c1c) cell_hwr_side_pane_t1_copy1

0x0fa9,	// (0x00059c2a) cell_hwr_candidate_pane_g1

0x0fd8,	// (0x00059c59) cell_hwr_candidate_pane_t1

0x54bc,	// (0x0005e13d) cell_vkb_candidate_pane_g2

0x5aae,	// (0x0005e72f) cell_vkb_candidate_pane_t1

0x0d2e,	// (0x000599af) bg_popup_fep_shadow_pane_ParamLimits

0x0d2e,	// (0x000599af) bg_popup_fep_shadow_pane

0x0de5,	// (0x00059a66) bg_fep_hwr_top_pane_g4

0x5541,	// (0x0005e1c2) bg_hwr_side_pane_g1_ParamLimits

0x5541,	// (0x0005e1c2) bg_hwr_side_pane_g1

0xb853,	// (0x000644d4) cell_hwr_side_pane_ParamLimits

0xb853,	// (0x000644d4) cell_hwr_side_pane

0x0e95,	// (0x00059b16) fep_hwr_write_pane_g1_ParamLimits

0x0e95,	// (0x00059b16) fep_hwr_write_pane_g1

0x0ea2,	// (0x00059b23) fep_hwr_write_pane_g2_ParamLimits

0x0ea2,	// (0x00059b23) fep_hwr_write_pane_g2

0x0eaf,	// (0x00059b30) fep_hwr_write_pane_g3_ParamLimits

0x0eaf,	// (0x00059b30) fep_hwr_write_pane_g3

0xb873,	// (0x000644f4) fep_hwr_write_pane_g4_ParamLimits

0xb873,	// (0x000644f4) fep_hwr_write_pane_g4

0x0005,

0xfafa,	// (0x0006877b) fep_hwr_write_pane_g_ParamLimits

0xfafa,	// (0x0006877b) fep_hwr_write_pane_g

0x0de5,	// (0x00059a66) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0de5,	// (0x00059a66) bg_fep_hwr_candidate_pane_g2

0x0ed2,	// (0x00059b53) cell_hwr_candidate_pane_ParamLimits

0x0ed2,	// (0x00059b53) cell_hwr_candidate_pane

0x0f24,	// (0x00059ba5) fep_hwr_candidate_pane_g1_ParamLimits

0x55a1,	// (0x0005e222) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x55a1,	// (0x0005e222) bg_popup_fep_shadow_pane_cp2

0x5737,	// (0x0005e3b8) fep_vkb_top_pane_g4_ParamLimits

0x5737,	// (0x0005e3b8) fep_vkb_top_pane_g4

0x577d,	// (0x0005e3fe) fep_vkb_side_pane_g2_ParamLimits

0x577d,	// (0x0005e3fe) fep_vkb_side_pane_g2

0xa5fb,	// (0x0006327c) list_setting_pane_t4_ParamLimits

0xa5fb,	// (0x0006327c) list_setting_pane_t4

0xa697,	// (0x00063318) list_setting_number_pane_t5_ParamLimits

0xa697,	// (0x00063318) list_setting_number_pane_t5

0xe0eb,	// (0x00066d6c) list_double_heading_pane_cp2_ParamLimits

0xe0eb,	// (0x00066d6c) list_double_heading_pane_cp2

0x5abc,	// (0x0005e73d) list_double_heading_pane_g1_cp2_ParamLimits

0x5abc,	// (0x0005e73d) list_double_heading_pane_g1_cp2

0x5ac8,	// (0x0005e749) list_double_heading_pane_g2_cp2_ParamLimits

0x5ac8,	// (0x0005e749) list_double_heading_pane_g2_cp2

0x5adc,	// (0x0005e75d) list_double_heading_pane_t1_cp2_ParamLimits

0x5adc,	// (0x0005e75d) list_double_heading_pane_t1_cp2

0x5af2,	// (0x0005e773) list_double_heading_pane_t2_cp2_ParamLimits

0x5af2,	// (0x0005e773) list_double_heading_pane_t2_cp2

0x8a1e,	// (0x0006169f) aid_value_unit2

0xef77,	// (0x00067bf8) popup_preview_fixed_window

0x8bc9,	// (0x0006184a) bg_popup_preview_window_pane_cp02

0x5b04,	// (0x0005e785) list_preview_fixed_pane

0x5b4a,	// (0x0005e7cb) list_empty_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_empty_pane_fp

0x5b4a,	// (0x0005e7cb) list_single_cale_day_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_cale_day_pane_fp

0x5b4a,	// (0x0005e7cb) list_single_graphic_heading_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_graphic_heading_pane_fp

0x5b4a,	// (0x0005e7cb) list_single_graphic_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_graphic_pane_fp

0x5b4a,	// (0x0005e7cb) list_single_heading_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_heading_pane_fp

0x5b4a,	// (0x0005e7cb) list_single_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_pane_fp

0x5b63,	// (0x0005e7e4) list_single_pane_fp_g1_ParamLimits

0x5b63,	// (0x0005e7e4) list_single_pane_fp_g1

0x5abc,	// (0x0005e73d) list_single_pane_fp_g2_ParamLimits

0x5abc,	// (0x0005e73d) list_single_pane_fp_g2

0x5ac8,	// (0x0005e749) list_single_pane_fp_g3_ParamLimits

0x5ac8,	// (0x0005e749) list_single_pane_fp_g3

0x5b6f,	// (0x0005e7f0) list_single_pane_fp_g4_ParamLimits

0x5b6f,	// (0x0005e7f0) list_single_pane_fp_g4

0x0003,

0xfb61,	// (0x000687e2) list_single_pane_fp_g_ParamLimits

0xfb61,	// (0x000687e2) list_single_pane_fp_g

0xe4d4,	// (0x00067155) list_single_pane_fp_t1_ParamLimits

0xe4d4,	// (0x00067155) list_single_pane_fp_t1

0xe4eb,	// (0x0006716c) list_single_graphic_pane_fp_g1_ParamLimits

0xe4eb,	// (0x0006716c) list_single_graphic_pane_fp_g1

0x5b63,	// (0x0005e7e4) list_single_graphic_pane_fp_g2_ParamLimits

0x5b63,	// (0x0005e7e4) list_single_graphic_pane_fp_g2

0x5abc,	// (0x0005e73d) list_single_graphic_pane_fp_g3_ParamLimits

0x5abc,	// (0x0005e73d) list_single_graphic_pane_fp_g3

0x5ac8,	// (0x0005e749) list_single_graphic_pane_fp_g4_ParamLimits

0x5ac8,	// (0x0005e749) list_single_graphic_pane_fp_g4

0x5b6f,	// (0x0005e7f0) list_single_graphic_pane_fp_g5_ParamLimits

0x5b6f,	// (0x0005e7f0) list_single_graphic_pane_fp_g5

0x0004,

0xfb6a,	// (0x000687eb) list_single_graphic_pane_fp_g_ParamLimits

0xfb6a,	// (0x000687eb) list_single_graphic_pane_fp_g

0xe4f7,	// (0x00067178) list_single_graphic_pane_fp_t1_ParamLimits

0xe4f7,	// (0x00067178) list_single_graphic_pane_fp_t1

0xe4eb,	// (0x0006716c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe4eb,	// (0x0006716c) list_single_graphic_heading_pane_fp_g1

0x5b63,	// (0x0005e7e4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b63,	// (0x0005e7e4) list_single_graphic_heading_pane_fp_g2

0x5abc,	// (0x0005e73d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5abc,	// (0x0005e73d) list_single_graphic_heading_pane_fp_g3

0x5ac8,	// (0x0005e749) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5ac8,	// (0x0005e749) list_single_graphic_heading_pane_fp_g4

0x5b6f,	// (0x0005e7f0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b6f,	// (0x0005e7f0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000687eb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000687eb) list_single_graphic_heading_pane_fp_g

0xe50d,	// (0x0006718e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe50d,	// (0x0006718e) list_single_graphic_heading_pane_fp_t1

0xe523,	// (0x000671a4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe523,	// (0x000671a4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb75,	// (0x000687f6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb75,	// (0x000687f6) list_single_graphic_heading_pane_fp_t

0xe535,	// (0x000671b6) list_single_cale_day_pane_fp_g1_ParamLimits

0xe535,	// (0x000671b6) list_single_cale_day_pane_fp_g1

0x5b7b,	// (0x0005e7fc) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b7b,	// (0x0005e7fc) list_single_cale_day_pane_fp_g2

0x3a0d,	// (0x0005c68e) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a0d,	// (0x0005c68e) list_single_cale_day_pane_fp_g3

0x3a35,	// (0x0005c6b6) list_single_cale_day_pane_fp_g4_ParamLimits

0x3a35,	// (0x0005c6b6) list_single_cale_day_pane_fp_g4

0x3a59,	// (0x0005c6da) list_single_cale_day_pane_fp_g5_ParamLimits

0x3a59,	// (0x0005c6da) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7a,	// (0x000687fb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7a,	// (0x000687fb) list_single_cale_day_pane_fp_g

0xe56d,	// (0x000671ee) list_single_cale_day_pane_fp_t1_ParamLimits

0xe56d,	// (0x000671ee) list_single_cale_day_pane_fp_t1

0xe593,	// (0x00067214) list_single_cale_day_pane_fp_t2_ParamLimits

0xe593,	// (0x00067214) list_single_cale_day_pane_fp_t2

0xe5ac,	// (0x0006722d) list_single_cale_day_pane_fp_t3_ParamLimits

0xe5ac,	// (0x0006722d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb85,	// (0x00068806) list_single_cale_day_pane_fp_t_ParamLimits

0xfb85,	// (0x00068806) list_single_cale_day_pane_fp_t

0x5b63,	// (0x0005e7e4) list_empty_pane_fp_g1_ParamLimits

0x5b63,	// (0x0005e7e4) list_empty_pane_fp_g1

0xe5c5,	// (0x00067246) list_empty_pane_fp_t1

0xe5d3,	// (0x00067254) list_empty_pane_fp_t2

0x0001,

0xfb8c,	// (0x0006880d) list_empty_pane_fp_t

0x5b63,	// (0x0005e7e4) list_single_heading_pane_fp_g1_ParamLimits

0x5b63,	// (0x0005e7e4) list_single_heading_pane_fp_g1

0x5abc,	// (0x0005e73d) list_single_heading_pane_fp_g2_ParamLimits

0x5abc,	// (0x0005e73d) list_single_heading_pane_fp_g2

0x5ac8,	// (0x0005e749) list_single_heading_pane_fp_g3_ParamLimits

0x5ac8,	// (0x0005e749) list_single_heading_pane_fp_g3

0x0002,

0xfb91,	// (0x00068812) list_single_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x00068812) list_single_heading_pane_fp_g

0xe5e1,	// (0x00067262) list_single_heading_pane_fp_t1_ParamLimits

0xe5e1,	// (0x00067262) list_single_heading_pane_fp_t1

0xe5f3,	// (0x00067274) list_single_heading_pane_fp_t2_ParamLimits

0xe5f3,	// (0x00067274) list_single_heading_pane_fp_t2

0x0001,

0xfb98,	// (0x00068819) list_single_heading_pane_fp_t_ParamLimits

0xfb98,	// (0x00068819) list_single_heading_pane_fp_t

0xdd4f,	// (0x000669d0) aid_size_cell_fast

0x8b9e,	// (0x0006181f) soft_indicator_pane_cp1_t1

0xdd8c,	// (0x00066a0d) cell_app_pane_cp2_ParamLimits

0xdd8c,	// (0x00066a0d) cell_app_pane_cp2

0x0d50,	// (0x000599d1) fep_hwr_candidate_drop_down_list_pane

0x0f3e,	// (0x00059bbf) fep_hwr_candidate_pane_g3_ParamLimits

0x0f3e,	// (0x00059bbf) fep_hwr_candidate_pane_g3

0xcc02,	// (0x00065883) fep_hwr_candidate_pane_g4_ParamLimits

0xcc02,	// (0x00065883) fep_hwr_candidate_pane_g4

0x0002,

0xfb07,	// (0x00068788) fep_hwr_candidate_pane_g_ParamLimits

0xfb07,	// (0x00068788) fep_hwr_candidate_pane_g

0x5631,	// (0x0005e2b2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5631,	// (0x0005e2b2) fep_vkb_candidate_drop_down_list_pane

0x5a59,	// (0x0005e6da) fep_vkb_candidate_pane_g3

0x5a61,	// (0x0005e6e2) fep_vkb_candidate_pane_g4

0x0002,

0xfb34,	// (0x000687b5) fep_vkb_candidate_pane_g

0x0fa9,	// (0x00059c2a) cell_hwr_candidate_pane_g1_ParamLimits

0x0fb7,	// (0x00059c38) cell_hwr_candidate_pane_g3_ParamLimits

0x0fb7,	// (0x00059c38) cell_hwr_candidate_pane_g3

0x720f,	// (0x0005fe90) cell_hwr_candidate_pane_g4_ParamLimits

0x720f,	// (0x0005fe90) cell_hwr_candidate_pane_g4

0x0002,

0xfb53,	// (0x000687d4) cell_hwr_candidate_pane_g_ParamLimits

0xfb53,	// (0x000687d4) cell_hwr_candidate_pane_g

0x5a78,	// (0x0005e6f9) cell_vkb_candidate_pane_g3_ParamLimits

0x5a78,	// (0x0005e6f9) cell_vkb_candidate_pane_g3

0x5a93,	// (0x0005e714) cell_vkb_candidate_pane_g4_ParamLimits

0x5a93,	// (0x0005e714) cell_vkb_candidate_pane_g4

0x5b87,	// (0x0005e808) cell_app_pane_cp2_g1_ParamLimits

0x5b87,	// (0x0005e808) cell_app_pane_cp2_g1

0x5ba5,	// (0x0005e826) cell_app_pane_cp2_g2_ParamLimits

0x5ba5,	// (0x0005e826) cell_app_pane_cp2_g2

0x0001,

0xfb9d,	// (0x0006881e) cell_app_pane_cp2_g_ParamLimits

0xfb9d,	// (0x0006881e) cell_app_pane_cp2_g

0x5bb1,	// (0x0005e832) cell_app_pane_cp2_t1_ParamLimits

0x5bb1,	// (0x0005e832) cell_app_pane_cp2_t1

0x90d8,	// (0x00061d59) grid_highlight_pane_cp1_ParamLimits

0x90d8,	// (0x00061d59) grid_highlight_pane_cp1

0x0ff6,	// (0x00059c77) cell_hwr_candidate_pane_cp1_ParamLimits

0x0ff6,	// (0x00059c77) cell_hwr_candidate_pane_cp1

0x0fa9,	// (0x00059c2a) fep_hwr_candidate_drop_down_list_pane_g1

0x101a,	// (0x00059c9b) fep_hwr_candidate_drop_down_list_pane_g2

0x1027,	// (0x00059ca8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x00068823) fep_hwr_candidate_drop_down_list_pane_g

0x1034,	// (0x00059cb5) fep_hwr_candidate_drop_down_list_scroll_pane

0x103d,	// (0x00059cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x103d,	// (0x00059cbe) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x104a,	// (0x00059ccb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x104a,	// (0x00059ccb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1057,	// (0x00059cd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1057,	// (0x00059cd8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1064,	// (0x00059ce5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1064,	// (0x00059ce5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x107f,	// (0x00059d00) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x107f,	// (0x00059d00) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x109a,	// (0x00059d1b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x109a,	// (0x00059d1b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x10b5,	// (0x00059d36) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x10b5,	// (0x00059d36) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x10d0,	// (0x00059d51) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x10d0,	// (0x00059d51) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x0006882a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x0006882a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5bc3,	// (0x0005e844) cell_vkb_candidate_pane_cp1_ParamLimits

0x5bc3,	// (0x0005e844) cell_vkb_candidate_pane_cp1

0x5737,	// (0x0005e3b8) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5737,	// (0x0005e3b8) fep_vkb_candidate_drop_down_list_pane_g1

0x5be9,	// (0x0005e86a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5be9,	// (0x0005e86a) fep_vkb_candidate_drop_down_list_pane_g2

0x5bf6,	// (0x0005e877) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5bf6,	// (0x0005e877) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0006883b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0006883b) fep_vkb_candidate_drop_down_list_pane_g

0x5c03,	// (0x0005e884) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5c03,	// (0x0005e884) fep_vkb_candidate_drop_down_list_scroll_pane

0x5c10,	// (0x0005e891) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c10,	// (0x0005e891) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5c1d,	// (0x0005e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c1d,	// (0x0005e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5c29,	// (0x0005e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c29,	// (0x0005e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5c35,	// (0x0005e8b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5c35,	// (0x0005e8b6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5c56,	// (0x0005e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5c56,	// (0x0005e8d7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c77,	// (0x0005e8f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c77,	// (0x0005e8f8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c98,	// (0x0005e919) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c98,	// (0x0005e919) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5cb9,	// (0x0005e93a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5cb9,	// (0x0005e93a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00068842) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00068842) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e83,	// (0x00062b04) title_pane_g1_ParamLimits

0x9e96,	// (0x00062b17) title_pane_g2_ParamLimits

0xf529,	// (0x000681aa) title_pane_g_ParamLimits

0xe0a4,	// (0x00066d25) aid_call2_pane

0xe0ac,	// (0x00066d2d) aid_call_pane

0xe0b4,	// (0x00066d35) popup_clock_analogue_window_g1

0xe0b4,	// (0x00066d35) popup_clock_analogue_window_g2

0xf266,	// (0x00067ee7) popup_clock_analogue_window_g3

0xf26f,	// (0x00067ef0) popup_clock_analogue_window_g4

0x8a30,	// (0x000616b1) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00068359) popup_clock_analogue_window_g

0xf277,	// (0x00067ef8) popup_clock_analogue_window_t1

0xf285,	// (0x00067f06) clock_digital_number_pane_ParamLimits

0xf285,	// (0x00067f06) clock_digital_number_pane

0xf291,	// (0x00067f12) clock_digital_number_pane_cp02_ParamLimits

0xf291,	// (0x00067f12) clock_digital_number_pane_cp02

0xf29d,	// (0x00067f1e) clock_digital_number_pane_cp03_ParamLimits

0xf29d,	// (0x00067f1e) clock_digital_number_pane_cp03

0xf2a9,	// (0x00067f2a) clock_digital_number_pane_cp04_ParamLimits

0xf2a9,	// (0x00067f2a) clock_digital_number_pane_cp04

0xf2b5,	// (0x00067f36) clock_digital_separator_pane_ParamLimits

0xf2b5,	// (0x00067f36) clock_digital_separator_pane

0xf2c1,	// (0x00067f42) popup_clock_digital_window_t1_ParamLimits

0xf2c1,	// (0x00067f42) popup_clock_digital_window_t1

0x8a30,	// (0x000616b1) clock_digital_number_pane_g1

0x8a30,	// (0x000616b1) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00068364) clock_digital_number_pane_g

0x8a30,	// (0x000616b1) clock_digital_separator_pane_g1

0x8a30,	// (0x000616b1) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00068364) clock_digital_separator_pane_g

0xc044,	// (0x00064cc5) aid_fill_nsta_ParamLimits

0xc17c,	// (0x00064dfd) indicator_nsta_pane_ParamLimits

0x2ac6,	// (0x0005b747) popup_clock_analogue_window

0x2ac6,	// (0x0005b747) popup_clock_digital_window

0xca13,	// (0x00065694) grid_indicator_nsta_pane_ParamLimits

0x4f11,	// (0x0005db92) clock_nsta_pane_t2

0x0001,

0xfa87,	// (0x00068708) clock_nsta_pane_t

0xf233,	// (0x00067eb4) aid_size_max_handle

0xa992,	// (0x00063613) aid_size_min_handle

0x2486,	// (0x0005b107) editor_scroll_pane

0x5cd4,	// (0x0005e955) ex_editor_pane

0x9214,	// (0x00061e95) scroll_pane_cp13

0x9077,	// (0x00061cf8) scroll_pane_cp14

0xe0e3,	// (0x00066d64) scroll_pane_cp36

0xaa1f,	// (0x000636a0) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa1f,	// (0x000636a0) list_single_graphic_hl_pane_cp2

0xc8a0,	// (0x00065521) list_single_graphic_hl_pane_ParamLimits

0xc8a0,	// (0x00065521) list_single_graphic_hl_pane

0xe609,	// (0x0006728a) aid_size_min_hl_cp1

0x5cdc,	// (0x0005e95d) list_highlight_pane_cp34_ParamLimits

0x5cdc,	// (0x0005e95d) list_highlight_pane_cp34

0x5ced,	// (0x0005e96e) list_single_graphic_hl_pane_g1_ParamLimits

0x5ced,	// (0x0005e96e) list_single_graphic_hl_pane_g1

0xb888,	// (0x00064509) list_single_graphic_hl_pane_g2_ParamLimits

0xb888,	// (0x00064509) list_single_graphic_hl_pane_g2

0xb888,	// (0x00064509) list_single_graphic_hl_pane_g3_ParamLimits

0xb888,	// (0x00064509) list_single_graphic_hl_pane_g3

0x3a89,	// (0x0005c70a) list_single_graphic_hl_pane_g4_ParamLimits

0x3a89,	// (0x0005c70a) list_single_graphic_hl_pane_g4

0xcd8b,	// (0x00065a0c) list_single_graphic_hl_pane_g5_ParamLimits

0xcd8b,	// (0x00065a0c) list_single_graphic_hl_pane_g5

0x0004,

0xfbd2,	// (0x00068853) list_single_graphic_hl_pane_g_ParamLimits

0xfbd2,	// (0x00068853) list_single_graphic_hl_pane_g

0xb894,	// (0x00064515) list_single_graphic_hl_pane_t1_ParamLimits

0xb894,	// (0x00064515) list_single_graphic_hl_pane_t1

0x5cfa,	// (0x0005e97b) aid_size_min_hl_cp2

0x5d03,	// (0x0005e984) list_highlight_pane_cp34_cp2_ParamLimits

0x5d03,	// (0x0005e984) list_highlight_pane_cp34_cp2

0x5ced,	// (0x0005e96e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5ced,	// (0x0005e96e) list_single_graphic_hl_pane_g1_cp2

0x5d10,	// (0x0005e991) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5d10,	// (0x0005e991) list_single_graphic_hl_pane_g2_cp2

0x5d1c,	// (0x0005e99d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5d1c,	// (0x0005e99d) list_single_graphic_hl_pane_g3_cp2

0x5d2a,	// (0x0005e9ab) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5d2a,	// (0x0005e9ab) list_single_graphic_hl_pane_g4_cp2

0x5d36,	// (0x0005e9b7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5d36,	// (0x0005e9b7) list_single_graphic_hl_pane_g5_cp2

0xad5a,	// (0x000639db) control_pane_g4_ParamLimits

0xad5a,	// (0x000639db) control_pane_g4

0x27ad,	// (0x0005b42e) bg_popup_sub_pane_cp10_ParamLimits

0x54c6,	// (0x0005e147) list_choice_list_pane_ParamLimits

0x54d5,	// (0x0005e156) scroll_pane_cp23

0x8bc9,	// (0x0006184a) bg_popup_preview_window_pane_cp02_ParamLimits

0x5b04,	// (0x0005e785) list_preview_fixed_pane_ParamLimits

0x5b1a,	// (0x0005e79b) list_preview_fixed_pane_cp_ParamLimits

0x5b1a,	// (0x0005e79b) list_preview_fixed_pane_cp

0x5b26,	// (0x0005e7a7) popup_preview_fixed_window_g1_ParamLimits

0x5b26,	// (0x0005e7a7) popup_preview_fixed_window_g1

0x5b32,	// (0x0005e7b3) popup_preview_fixed_window_g2_ParamLimits

0x5b32,	// (0x0005e7b3) popup_preview_fixed_window_g2

0x0002,

0xfb5a,	// (0x000687db) popup_preview_fixed_window_g_ParamLimits

0xfb5a,	// (0x000687db) popup_preview_fixed_window_g

0xf1a5,	// (0x00067e26) aid_navi_side_left_pane_ParamLimits

0xf1ba,	// (0x00067e3b) aid_navi_side_right_pane_ParamLimits

0xf1d2,	// (0x00067e53) navi_icon_pane_stacon_ParamLimits

0xf1e6,	// (0x00067e67) navi_navi_pane_stacon_ParamLimits

0xf1d2,	// (0x00067e53) navi_text_pane_stacon_ParamLimits

0xee68,	// (0x00067ae9) main_text_info_pane

0x5d60,	// (0x0005e9e1) listscroll_text_info_pane

0x5d68,	// (0x0005e9e9) list_text_info_pane_ParamLimits

0x5d68,	// (0x0005e9e9) list_text_info_pane

0x5d77,	// (0x0005e9f8) scroll_pane_cp24_ParamLimits

0x5d77,	// (0x0005e9f8) scroll_pane_cp24

0xcd9f,	// (0x00065a20) list_text_info_pane_t1_ParamLimits

0xcd9f,	// (0x00065a20) list_text_info_pane_t1

0xaecc,	// (0x00063b4d) popup_fast_swap2_window_ParamLimits

0xaecc,	// (0x00063b4d) popup_fast_swap2_window

0x5dba,	// (0x0005ea3b) aid_size_cell_fast2

0x8a26,	// (0x000616a7) bg_popup_window_pane_cp17

0x3131,	// (0x0005bdb2) heading_pane_cp2

0x3139,	// (0x0005bdba) listscroll_fast2_pane

0x5dc4,	// (0x0005ea45) grid_fast2_pane

0x5dce,	// (0x0005ea4f) listscroll_fast2_pane_g1

0x5dd8,	// (0x0005ea59) listscroll_fast2_pane_g2

0x0001,

0xfbdd,	// (0x0006885e) listscroll_fast2_pane_g

0x9214,	// (0x00061e95) scroll_pane_cp26

0x5de2,	// (0x0005ea63) cell_fast2_pane_ParamLimits

0x5de2,	// (0x0005ea63) cell_fast2_pane

0x5df9,	// (0x0005ea7a) cell_fast2_pane_g1

0x5e02,	// (0x0005ea83) cell_fast2_pane_g2

0x5e0b,	// (0x0005ea8c) cell_fast2_pane_g3

0x0002,

0xfbe2,	// (0x00068863) cell_fast2_pane_g

0x8e3e,	// (0x00061abf) grid_highlight_pane_cp9

0x0175,	// (0x00058df6) main_eswt_pane_ParamLimits

0x0175,	// (0x00058df6) main_eswt_pane

0x5d8c,	// (0x0005ea0d) list_single_text_info_pane

0x5e13,	// (0x0005ea94) eswt_ctrl_button_pane

0x5e13,	// (0x0005ea94) eswt_ctrl_canvas_pane

0x5e1b,	// (0x0005ea9c) eswt_ctrl_combo_pane

0x5e13,	// (0x0005ea94) eswt_ctrl_default_pane

0x5e13,	// (0x0005ea94) eswt_ctrl_label_pane

0x5e23,	// (0x0005eaa4) eswt_ctrl_wait_pane

0x5e2b,	// (0x0005eaac) eswt_shell_pane

0x8a26,	// (0x000616a7) listscroll_eswt_app_pane

0x5e4b,	// (0x0005eacc) popup_eswt_tasktip_window_ParamLimits

0x5e4b,	// (0x0005eacc) popup_eswt_tasktip_window

0x2d6f,	// (0x0005b9f0) bg_popup_window_pane_cp18

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_ParamLimits

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_ParamLimits

0x5e69,	// (0x0005eaea) eswt_control_pane_g2

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_ParamLimits

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_ParamLimits

0x5e83,	// (0x0005eb04) eswt_control_pane_g4

0x0003,

0xfbe9,	// (0x0006886a) eswt_control_pane_g_ParamLimits

0xfbe9,	// (0x0006886a) eswt_control_pane_g

0x90d8,	// (0x00061d59) bg_button_pane_ParamLimits

0x90d8,	// (0x00061d59) bg_button_pane

0x8e53,	// (0x00061ad4) common_borders_pane_copy2_ParamLimits

0x8e53,	// (0x00061ad4) common_borders_pane_copy2

0x5e90,	// (0x0005eb11) control_button_pane_g1_ParamLimits

0x5e90,	// (0x0005eb11) control_button_pane_g1

0x5e9c,	// (0x0005eb1d) control_button_pane_g2_ParamLimits

0x5e9c,	// (0x0005eb1d) control_button_pane_g2

0x5ea8,	// (0x0005eb29) control_button_pane_g3_ParamLimits

0x5ea8,	// (0x0005eb29) control_button_pane_g3

0x0002,

0xfbf2,	// (0x00068873) control_button_pane_g_ParamLimits

0xfbf2,	// (0x00068873) control_button_pane_g

0x5ebc,	// (0x0005eb3d) control_button_pane_t1

0x5eca,	// (0x0005eb4b) control_button_pane_t2

0x0001,

0xfbf9,	// (0x0006887a) control_button_pane_t

0x2cfb,	// (0x0005b97c) bg_button_pane_g1

0x2d0b,	// (0x0005b98c) bg_button_pane_g2

0x2d03,	// (0x0005b984) bg_button_pane_g3

0x2d1b,	// (0x0005b99c) bg_button_pane_g4

0x2d13,	// (0x0005b994) bg_button_pane_g5

0x2d23,	// (0x0005b9a4) bg_button_pane_g6

0x2d2b,	// (0x0005b9ac) bg_button_pane_g7

0x2d3b,	// (0x0005b9bc) bg_button_pane_g8

0x2d33,	// (0x0005b9b4) bg_button_pane_g9

0x0008,

0xf841,	// (0x000684c2) bg_button_pane_g

0x5481,	// (0x0005e102) common_borders_pane_ParamLimits

0x5481,	// (0x0005e102) common_borders_pane

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy1_ParamLimits

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy1

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy1_ParamLimits

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy1

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy1_ParamLimits

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy1

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy1_ParamLimits

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy1

0x54bc,	// (0x0005e13d) bg_eswt_ctrl_canvas_pane_g1

0x5481,	// (0x0005e102) common_borders_pane_cp2_ParamLimits

0x5481,	// (0x0005e102) common_borders_pane_cp2

0x5481,	// (0x0005e102) common_borders_pane_cp3_ParamLimits

0x5481,	// (0x0005e102) common_borders_pane_cp3

0x5ed8,	// (0x0005eb59) separator_horizontal_pane

0x5ee0,	// (0x0005eb61) separator_vertical_pane

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy2_ParamLimits

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy2

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy2_ParamLimits

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy2

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy2_ParamLimits

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy2

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy2_ParamLimits

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy2

0x8a26,	// (0x000616a7) common_borders_pane_cp4

0x5ee9,	// (0x0005eb6a) separator_horizontal_pane_g1

0x5ef2,	// (0x0005eb73) separator_horizontal_pane_g2

0x5efb,	// (0x0005eb7c) separator_horizontal_pane_g3

0x0002,

0xfbfe,	// (0x0006887f) separator_horizontal_pane_g

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy3_ParamLimits

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy3

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy3_ParamLimits

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy3

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy3_ParamLimits

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy3

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy3_ParamLimits

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy3

0x8a26,	// (0x000616a7) common_borders_pane_cp5

0x5f04,	// (0x0005eb85) separator_vertical_pane_g1

0x5f0d,	// (0x0005eb8e) separator_vertical_pane_g2

0x5f16,	// (0x0005eb97) separator_vertical_pane_g3

0x0002,

0xfc05,	// (0x00068886) separator_vertical_pane_g

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy4_ParamLimits

0x5e5c,	// (0x0005eadd) eswt_control_pane_g1_copy4

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy4_ParamLimits

0x5e69,	// (0x0005eaea) eswt_control_pane_g2_copy4

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy4_ParamLimits

0x5e76,	// (0x0005eaf7) eswt_control_pane_g3_copy4

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy4_ParamLimits

0x5e83,	// (0x0005eb04) eswt_control_pane_g4_copy4

0xcdc1,	// (0x00065a42) eswt_ctrl_combo_button_pane

0xcdc9,	// (0x00065a4a) eswt_ctrl_input_pane

0xcdd1,	// (0x00065a52) popup_choice_list_window_cp70

0xcdd9,	// (0x00065a5a) eswt_ctrl_input_pane_t1

0x8a26,	// (0x000616a7) input_focus_pane_cp70

0x5481,	// (0x0005e102) bg_button_pane_cp70_ParamLimits

0x5481,	// (0x0005e102) bg_button_pane_cp70

0xcde7,	// (0x00065a68) eswt_ctrl_combo_button_pane_g1

0x5f4d,	// (0x0005ebce) wait_bar_pane_cp70

0x2d6f,	// (0x0005b9f0) bg_popup_window_pane_cp70_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_window_pane_cp70

0x5f55,	// (0x0005ebd6) popup_eswt_tasktip_window_t1

0x5f6b,	// (0x0005ebec) wait_bar_pane_cp71_ParamLimits

0x5f6b,	// (0x0005ebec) wait_bar_pane_cp71

0x5f77,	// (0x0005ebf8) grid_eswt_app_pane

0xdf43,	// (0x00066bc4) scroll_pane_cp70

0xcdef,	// (0x00065a70) cell_eswt_app_pane_ParamLimits

0xcdef,	// (0x00065a70) cell_eswt_app_pane

0xce21,	// (0x00065aa2) cell_eswt_app_pane_g1_ParamLimits

0xce21,	// (0x00065aa2) cell_eswt_app_pane_g1

0xce50,	// (0x00065ad1) cell_eswt_app_pane_g2_ParamLimits

0xce50,	// (0x00065ad1) cell_eswt_app_pane_g2

0x0001,

0xfc0c,	// (0x0006888d) cell_eswt_app_pane_g_ParamLimits

0xfc0c,	// (0x0006888d) cell_eswt_app_pane_g

0xce79,	// (0x00065afa) cell_eswt_app_pane_t1_ParamLimits

0xce79,	// (0x00065afa) cell_eswt_app_pane_t1

0x603c,	// (0x0005ecbd) grid_highlight_pane_cp70_ParamLimits

0x603c,	// (0x0005ecbd) grid_highlight_pane_cp70

0x234c,	// (0x0005afcd) set_content_pane_g1

0xacec,	// (0x0006396d) status_small_volume_pane

0x1121,	// (0x00059da2) status_small_volume_pane_g1

0x1129,	// (0x00059daa) volume_small2_pane

0x1132,	// (0x00059db3) volume_small2_pane_g1

0x113b,	// (0x00059dbc) volume_small2_pane_g2

0x1144,	// (0x00059dc5) volume_small2_pane_g3

0x114d,	// (0x00059dce) volume_small2_pane_g4

0x1156,	// (0x00059dd7) volume_small2_pane_g5

0x115f,	// (0x00059de0) volume_small2_pane_g6

0x1168,	// (0x00059de9) volume_small2_pane_g7

0x1171,	// (0x00059df2) volume_small2_pane_g8

0x117a,	// (0x00059dfb) volume_small2_pane_g9

0x1183,	// (0x00059e04) volume_small2_pane_g10

0x0009,

0xfc11,	// (0x00068892) volume_small2_pane_g

0x588b,	// (0x0005e50c) fep_vkb_top_text_pane_g1_ParamLimits

0xcd33,	// (0x000659b4) fep_vkb_top_text_pane_t1_ParamLimits

0x5b3e,	// (0x0005e7bf) popup_preview_fixed_window_g3_ParamLimits

0x5b3e,	// (0x0005e7bf) popup_preview_fixed_window_g3

0xb56a,	// (0x000641eb) popup_toolbar_trans_pane

0xc6e1,	// (0x00065362) aid_height_set_list_ParamLimits

0x429b,	// (0x0005cf1c) aid_size_parent_ParamLimits

0x27ad,	// (0x0005b42e) list_highlight_pane_cp2_ParamLimits

0x234c,	// (0x0005afcd) set_content_pane_g1_ParamLimits

0xc8b4,	// (0x00065535) list_single_image_pane_ParamLimits

0xc8b4,	// (0x00065535) list_single_image_pane

0xceab,	// (0x00065b2c) aid_size_cell_image_ParamLimits

0xceab,	// (0x00065b2c) aid_size_cell_image

0xceb8,	// (0x00065b39) grid_single_image_pane_ParamLimits

0xceb8,	// (0x00065b39) grid_single_image_pane

0x90e6,	// (0x00061d67) list_single_image_pane_g1_ParamLimits

0x90e6,	// (0x00061d67) list_single_image_pane_g1

0x90f2,	// (0x00061d73) list_single_image_pane_g2_ParamLimits

0x90f2,	// (0x00061d73) list_single_image_pane_g2

0x0001,

0xfc26,	// (0x000688a7) list_single_image_pane_g_ParamLimits

0xfc26,	// (0x000688a7) list_single_image_pane_g

0x6063,	// (0x0005ece4) list_single_image_pane_t1_ParamLimits

0x6063,	// (0x0005ece4) list_single_image_pane_t1

0xcec6,	// (0x00065b47) cell_image_list_pane_ParamLimits

0xcec6,	// (0x00065b47) cell_image_list_pane

0xcedc,	// (0x00065b5d) cell_image_list_pane_g1

0xcee5,	// (0x00065b66) cell_image_list_pane_g2

0x0001,

0xfc2b,	// (0x000688ac) cell_image_list_pane_g

0x60a3,	// (0x0005ed24) aid_size_cell_tb_trans_pane

0x90d8,	// (0x00061d59) bg_tb_trans_pane

0x60b5,	// (0x0005ed36) grid_tb_trans_pane

0x2cfb,	// (0x0005b97c) bg_tb_trans_pane_g1

0x2d0b,	// (0x0005b98c) bg_tb_trans_pane_g2

0x2d03,	// (0x0005b984) bg_tb_trans_pane_g3

0x2d1b,	// (0x0005b99c) bg_tb_trans_pane_g4

0x2d13,	// (0x0005b994) bg_tb_trans_pane_g5

0x2d3b,	// (0x0005b9bc) bg_tb_trans_pane_g6

0x2d33,	// (0x0005b9b4) bg_tb_trans_pane_g7

0x2d23,	// (0x0005b9a4) bg_tb_trans_pane_g8

0x2d2b,	// (0x0005b9ac) bg_tb_trans_pane_g9

0x0008,

0xfc30,	// (0x000688b1) bg_tb_trans_pane_g

0x60c9,	// (0x0005ed4a) cell_toolbar_trans_pane_ParamLimits

0x60c9,	// (0x0005ed4a) cell_toolbar_trans_pane

0x54bc,	// (0x0005e13d) cell_toolbar_trans_pane_g1

0xcaf6,	// (0x00065777) list_form2_midp_pane_t1

0xcb04,	// (0x00065785) list_form2_midp_pane_t2

0x0001,

0xfacd,	// (0x0006874e) list_form2_midp_pane_t

0x5110,	// (0x0005dd91) scroll_pane_cp51_ParamLimits

0x52d7,	// (0x0005df58) form2_midp_wait_pane_g1

0x52e0,	// (0x0005df61) form2_midp_wait_pane_g2

0x52e9,	// (0x0005df6a) form2_midp_wait_pane_g3

0x0002,

0xfae2,	// (0x00068763) form2_midp_wait_pane_g

0x8a88,	// (0x00061709) list_highlight_pane_cp21_ParamLimits

0x5322,	// (0x0005dfa3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5331,	// (0x0005dfb2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x392b,	// (0x0005c5ac) list_single_2graphic_im_pane_ParamLimits

0x392b,	// (0x0005c5ac) list_single_2graphic_im_pane

0xceee,	// (0x00065b6f) list_single_2graphic_im_pane_g1_ParamLimits

0xceee,	// (0x00065b6f) list_single_2graphic_im_pane_g1

0xceff,	// (0x00065b80) list_single_2graphic_im_pane_g2_ParamLimits

0xceff,	// (0x00065b80) list_single_2graphic_im_pane_g2

0xcf0b,	// (0x00065b8c) list_single_2graphic_im_pane_g3_ParamLimits

0xcf0b,	// (0x00065b8c) list_single_2graphic_im_pane_g3

0x0003,

0xfc43,	// (0x000688c4) list_single_2graphic_im_pane_g_ParamLimits

0xfc43,	// (0x000688c4) list_single_2graphic_im_pane_g

0xcf1f,	// (0x00065ba0) list_single_2graphic_im_pane_t1_ParamLimits

0xcf1f,	// (0x00065ba0) list_single_2graphic_im_pane_t1

0x5b4a,	// (0x0005e7cb) list_single_graphic_2heading_pane_fp_ParamLimits

0x5b4a,	// (0x0005e7cb) list_single_graphic_2heading_pane_fp

0xe4eb,	// (0x0006716c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe4eb,	// (0x0006716c) list_single_graphic_2heading_pane_fp_g1

0x5b63,	// (0x0005e7e4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b63,	// (0x0005e7e4) list_single_graphic_2heading_pane_fp_g2

0x5abc,	// (0x0005e73d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5abc,	// (0x0005e73d) list_single_graphic_2heading_pane_fp_g3

0x5ac8,	// (0x0005e749) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5ac8,	// (0x0005e749) list_single_graphic_2heading_pane_fp_g4

0x5b6f,	// (0x0005e7f0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b6f,	// (0x0005e7f0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000687eb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000687eb) list_single_graphic_2heading_pane_fp_g

0xe612,	// (0x00067293) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe612,	// (0x00067293) list_single_graphic_2heading_pane_fp_t1

0xe523,	// (0x000671a4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe523,	// (0x000671a4) list_single_graphic_2heading_pane_fp_t2

0xe628,	// (0x000672a9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe628,	// (0x000672a9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4c,	// (0x000688cd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4c,	// (0x000688cd) list_single_graphic_2heading_pane_fp_t

0x554d,	// (0x0005e1ce) fep_hwr_write_pane_g5_ParamLimits

0x554d,	// (0x0005e1ce) fep_hwr_write_pane_g5

0x5559,	// (0x0005e1da) fep_hwr_write_pane_g6_ParamLimits

0x5559,	// (0x0005e1da) fep_hwr_write_pane_g6

0x5e2b,	// (0x0005eaac) eswt_shell_pane_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_window_pane_cp18_ParamLimits

0x41e1,	// (0x0005ce62) heading_pane_cp70

0x5f55,	// (0x0005ebd6) popup_eswt_tasktip_window_t1_ParamLimits

0xc0a1,	// (0x00064d22) aid_touch_tab_arrow_left

0xc0b7,	// (0x00064d38) aid_touch_tab_arrow_right

0x9eba,	// (0x00062b3b) title_pane_g3_ParamLimits

0x9eba,	// (0x00062b3b) title_pane_g3

0x9097,	// (0x00061d18) set_value_pane_g1

0xb56a,	// (0x000641eb) popup_toolbar_trans_pane_ParamLimits

0x60a3,	// (0x0005ed24) aid_size_cell_tb_trans_pane_ParamLimits

0x90d8,	// (0x00061d59) bg_tb_trans_pane_ParamLimits

0x60b5,	// (0x0005ed36) grid_tb_trans_pane_ParamLimits

0x8bc9,	// (0x0006184a) cont_note_pane_ParamLimits

0x8bc9,	// (0x0006184a) cont_note_pane

0x8e53,	// (0x00061ad4) cont_snote2_single_text_pane_ParamLimits

0x8e53,	// (0x00061ad4) cont_snote2_single_text_pane

0x8e53,	// (0x00061ad4) cont_snote2_single_graphic_pane_ParamLimits

0x8e53,	// (0x00061ad4) cont_snote2_single_graphic_pane

0x3361,	// (0x0005bfe2) cont_note_wait_pane_ParamLimits

0x3361,	// (0x0005bfe2) cont_note_wait_pane

0x3361,	// (0x0005bfe2) cont_note_image_pane_ParamLimits

0x3361,	// (0x0005bfe2) cont_note_image_pane

0x615d,	// (0x0005edde) popup_note2_window_g1_ParamLimits

0x615d,	// (0x0005edde) popup_note2_window_g1

0x618e,	// (0x0005ee0f) popup_note2_window_t1_ParamLimits

0x618e,	// (0x0005ee0f) popup_note2_window_t1

0x61d3,	// (0x0005ee54) popup_note2_window_t2_ParamLimits

0x61d3,	// (0x0005ee54) popup_note2_window_t2

0x6218,	// (0x0005ee99) popup_note2_window_t3_ParamLimits

0x6218,	// (0x0005ee99) popup_note2_window_t3

0x625d,	// (0x0005eede) popup_note2_window_t4_ParamLimits

0x625d,	// (0x0005eede) popup_note2_window_t4

0x8c4d,	// (0x000618ce) popup_note2_window_t5_ParamLimits

0x8c4d,	// (0x000618ce) popup_note2_window_t5

0x0004,

0xfc58,	// (0x000688d9) popup_note2_window_t_ParamLimits

0xfc58,	// (0x000688d9) popup_note2_window_t

0x628c,	// (0x0005ef0d) popup_note2_image_window_g1_ParamLimits

0x628c,	// (0x0005ef0d) popup_note2_image_window_g1

0x6298,	// (0x0005ef19) popup_note2_image_window_g2_ParamLimits

0x6298,	// (0x0005ef19) popup_note2_image_window_g2

0x0001,

0xfc63,	// (0x000688e4) popup_note2_image_window_g_ParamLimits

0xfc63,	// (0x000688e4) popup_note2_image_window_g

0x62aa,	// (0x0005ef2b) popup_note2_image_window_t1_ParamLimits

0x62aa,	// (0x0005ef2b) popup_note2_image_window_t1

0x62c2,	// (0x0005ef43) popup_note2_image_window_t2_ParamLimits

0x62c2,	// (0x0005ef43) popup_note2_image_window_t2

0x62da,	// (0x0005ef5b) popup_note2_image_window_t3_ParamLimits

0x62da,	// (0x0005ef5b) popup_note2_image_window_t3

0x0002,

0xfc68,	// (0x000688e9) popup_note2_image_window_t_ParamLimits

0xfc68,	// (0x000688e9) popup_note2_image_window_t

0x336f,	// (0x0005bff0) popup_note2_wait_window_g1_ParamLimits

0x336f,	// (0x0005bff0) popup_note2_wait_window_g1

0x62f6,	// (0x0005ef77) popup_note2_wait_window_g2_ParamLimits

0x62f6,	// (0x0005ef77) popup_note2_wait_window_g2

0x3387,	// (0x0005c008) popup_note2_wait_window_g3_ParamLimits

0x3387,	// (0x0005c008) popup_note2_wait_window_g3

0x0002,

0xfc6f,	// (0x000688f0) popup_note2_wait_window_g_ParamLimits

0xfc6f,	// (0x000688f0) popup_note2_wait_window_g

0x6302,	// (0x0005ef83) popup_note2_wait_window_t1_ParamLimits

0x6302,	// (0x0005ef83) popup_note2_wait_window_t1

0x6320,	// (0x0005efa1) popup_note2_wait_window_t2_ParamLimits

0x6320,	// (0x0005efa1) popup_note2_wait_window_t2

0x633e,	// (0x0005efbf) popup_note2_wait_window_t3_ParamLimits

0x633e,	// (0x0005efbf) popup_note2_wait_window_t3

0x6350,	// (0x0005efd1) popup_note2_wait_window_t4_ParamLimits

0x6350,	// (0x0005efd1) popup_note2_wait_window_t4

0x0003,

0xfc76,	// (0x000688f7) popup_note2_wait_window_t_ParamLimits

0xfc76,	// (0x000688f7) popup_note2_wait_window_t

0x6362,	// (0x0005efe3) wait_bar2_pane_ParamLimits

0x6362,	// (0x0005efe3) wait_bar2_pane

0x637a,	// (0x0005effb) popup_snote2_single_text_window_g1_ParamLimits

0x637a,	// (0x0005effb) popup_snote2_single_text_window_g1

0x63a2,	// (0x0005f023) popup_snote2_single_text_window_t1_ParamLimits

0x63a2,	// (0x0005f023) popup_snote2_single_text_window_t1

0x63ee,	// (0x0005f06f) popup_snote2_single_text_window_t2_ParamLimits

0x63ee,	// (0x0005f06f) popup_snote2_single_text_window_t2

0x643a,	// (0x0005f0bb) popup_snote2_single_text_window_t3_ParamLimits

0x643a,	// (0x0005f0bb) popup_snote2_single_text_window_t3

0x647b,	// (0x0005f0fc) popup_snote2_single_text_window_t4_ParamLimits

0x647b,	// (0x0005f0fc) popup_snote2_single_text_window_t4

0x64b1,	// (0x0005f132) popup_snote2_single_text_window_t5_ParamLimits

0x64b1,	// (0x0005f132) popup_snote2_single_text_window_t5

0x0004,

0xfc7f,	// (0x00068900) popup_snote2_single_text_window_t_ParamLimits

0xfc7f,	// (0x00068900) popup_snote2_single_text_window_t

0x64dc,	// (0x0005f15d) popup_snote2_single_graphic_window_g1_ParamLimits

0x64dc,	// (0x0005f15d) popup_snote2_single_graphic_window_g1

0x6504,	// (0x0005f185) popup_snote2_single_graphic_window_g2_ParamLimits

0x6504,	// (0x0005f185) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8a,	// (0x0006890b) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8a,	// (0x0006890b) popup_snote2_single_graphic_window_g

0x652c,	// (0x0005f1ad) popup_snote2_single_graphic_window_t1_ParamLimits

0x652c,	// (0x0005f1ad) popup_snote2_single_graphic_window_t1

0x6578,	// (0x0005f1f9) popup_snote2_single_graphic_window_t2_ParamLimits

0x6578,	// (0x0005f1f9) popup_snote2_single_graphic_window_t2

0x643a,	// (0x0005f0bb) popup_snote2_single_graphic_window_t3_ParamLimits

0x643a,	// (0x0005f0bb) popup_snote2_single_graphic_window_t3

0x647b,	// (0x0005f0fc) popup_snote2_single_graphic_window_t4_ParamLimits

0x647b,	// (0x0005f0fc) popup_snote2_single_graphic_window_t4

0x64b1,	// (0x0005f132) popup_snote2_single_graphic_window_t5_ParamLimits

0x64b1,	// (0x0005f132) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8f,	// (0x00068910) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8f,	// (0x00068910) popup_snote2_single_graphic_window_t

0x4fc0,	// (0x0005dc41) clock_nsta_pane_cp2_t1

0x4fc0,	// (0x0005dc41) clock_nsta_pane_cp2_t2

0x0001,

0xfaa3,	// (0x00068724) clock_nsta_pane_cp2_t

0xdcc3,	// (0x00066944) form_field_data_wide_pane_g1_ParamLimits

0x90e6,	// (0x00061d67) form_field_data_wide_pane_g2_ParamLimits

0x90e6,	// (0x00061d67) form_field_data_wide_pane_g2

0x90f2,	// (0x00061d73) form_field_data_wide_pane_g3_ParamLimits

0x90f2,	// (0x00061d73) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x000682dc) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x000682dc) form_field_data_wide_pane_g

0xc9fd,	// (0x0006567e) grid_touch_3_pane_ParamLimits

0xc9fd,	// (0x0006567e) grid_touch_3_pane

0xcf50,	// (0x00065bd1) cell_touch_3_pane_ParamLimits

0xcf50,	// (0x00065bd1) cell_touch_3_pane

0x54bc,	// (0x0005e13d) cell_touch_3_pane_g1

0x54bc,	// (0x0005e13d) cell_touch_3_pane_g2

0x0001,

0xfb28,	// (0x000687a9) cell_touch_3_pane_g

0x8ca5,	// (0x00061926) cont_query_data_pane

0x8cad,	// (0x0006192e) cont_query_data_pane_cp1

0x65f7,	// (0x0005f278) button_value_adjust_pane_cp7

0x65ff,	// (0x0005f280) query_popup_pane_cp3

0xe114,	// (0x00066d95) bg_popup_sub_pane_cp22_ParamLimits

0xf2e0,	// (0x00067f61) navi_navi_volume_pane_cp2

0xf2fb,	// (0x00067f7c) popup_side_volume_key_window_g2

0xf30a,	// (0x00067f8b) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00068372) popup_side_volume_key_window_g

0xf327,	// (0x00067fa8) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00068379) popup_side_volume_key_window_t

0x2213,	// (0x0005ae94) popup_side_volume_key_window_ParamLimits

0xa3d7,	// (0x00063058) list_double_graphic_pane_g4_ParamLimits

0xa3d7,	// (0x00063058) list_double_graphic_pane_g4

0xc88b,	// (0x0006550c) list_single_2heading_msg_pane_ParamLimits

0xc88b,	// (0x0006550c) list_single_2heading_msg_pane

0xb8aa,	// (0x0006452b) list_single_2heading_msg_pane_g1_ParamLimits

0xb8aa,	// (0x0006452b) list_single_2heading_msg_pane_g1

0xb8b6,	// (0x00064537) list_single_2heading_msg_pane_g2_ParamLimits

0xb8b6,	// (0x00064537) list_single_2heading_msg_pane_g2

0xb8c9,	// (0x0006454a) list_single_2heading_msg_pane_g3_ParamLimits

0xb8c9,	// (0x0006454a) list_single_2heading_msg_pane_g3

0xb8d5,	// (0x00064556) list_single_2heading_msg_pane_g4_ParamLimits

0xb8d5,	// (0x00064556) list_single_2heading_msg_pane_g4

0x0003,

0xfc9a,	// (0x0006891b) list_single_2heading_msg_pane_g_ParamLimits

0xfc9a,	// (0x0006891b) list_single_2heading_msg_pane_g

0xb8ed,	// (0x0006456e) list_single_2heading_msg_pane_t1_ParamLimits

0xb8ed,	// (0x0006456e) list_single_2heading_msg_pane_t1

0xb915,	// (0x00064596) list_single_2heading_msg_pane_t2_ParamLimits

0xb915,	// (0x00064596) list_single_2heading_msg_pane_t2

0xb980,	// (0x00064601) list_single_2heading_msg_pane_t3_ParamLimits

0xb980,	// (0x00064601) list_single_2heading_msg_pane_t3

0xe648,	// (0x000672c9) list_single_2heading_msg_pane_t4_ParamLimits

0xe648,	// (0x000672c9) list_single_2heading_msg_pane_t4

0x0003,

0xfca3,	// (0x00068924) list_single_2heading_msg_pane_t_ParamLimits

0xfca3,	// (0x00068924) list_single_2heading_msg_pane_t

0x8a44,	// (0x000616c5) title_pane_g4_ParamLimits

0x8a44,	// (0x000616c5) title_pane_g4

0xf0f5,	// (0x00067d76) title_pane_stacon_g3_ParamLimits

0xf0f5,	// (0x00067d76) title_pane_stacon_g3

0x6120,	// (0x0005eda1) list_single_2graphic_im_pane_g4_ParamLimits

0x6120,	// (0x0005eda1) list_single_2graphic_im_pane_g4

0x3f94,	// (0x0005cc15) popup_side_volume_key_window_cp

0x47ab,	// (0x0005d42c) main_idle_act2_pane_t1

0x07ca,	// (0x0005944b) toolbar_button_pane_g10

0xa237,	// (0x00062eb8) popup_toolbar_window_cp1

0x4fb1,	// (0x0005dc32) clock_nsta_pane_cp_t1

0x4fb1,	// (0x0005dc32) clock_nsta_pane_cp_t2

0x0001,

0xfa9e,	// (0x0006871f) clock_nsta_pane_cp_t

0xf2e0,	// (0x00067f61) navi_navi_volume_pane_cp2_ParamLimits

0xf2ef,	// (0x00067f70) popup_side_volume_key_window_g1_ParamLimits

0xf2fb,	// (0x00067f7c) popup_side_volume_key_window_g2_ParamLimits

0xf30a,	// (0x00067f8b) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00068372) popup_side_volume_key_window_g_ParamLimits

0x0d3c,	// (0x000599bd) fep_hwr_aid_pane

0x0de5,	// (0x00059a66) bg_fep_hwr_top_pane_g4_ParamLimits

0x551d,	// (0x0005e19e) fep_hwr_top_pane_g1_ParamLimits

0x552f,	// (0x0005e1b0) fep_hwr_top_pane_g2_ParamLimits

0x0e05,	// (0x00059a86) fep_hwr_top_pane_g3_ParamLimits

0xfaf3,	// (0x00068774) fep_hwr_top_pane_g_ParamLimits

0x0e1a,	// (0x00059a9b) fep_hwr_top_text_pane_ParamLimits

0x3d49,	// (0x0005c9ca) aid_touch_tab_arrow_arrow_2

0x3d52,	// (0x0005c9d3) aid_touch_tab_arrow_left_2

0x0d50,	// (0x000599d1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d87,	// (0x00059a08) fep_hwr_prediction_pane

0x5685,	// (0x0005e306) fep_vkb_prediction_pane

0xcd13,	// (0x00065994) fep_vkb_side_pane_g3_ParamLimits

0xcd13,	// (0x00065994) fep_vkb_side_pane_g3

0x0fa9,	// (0x00059c2a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x101a,	// (0x00059c9b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1027,	// (0x00059ca8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba2,	// (0x00068823) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x121c,	// (0x00059e9d) fep_hwr_prediction_pane_g1

0x1226,	// (0x00059ea7) fep_hwr_prediction_pane_g2

0x122e,	// (0x00059eaf) fep_hwr_prediction_pane_g3

0x1236,	// (0x00059eb7) fep_hwr_prediction_pane_g4

0x0003,

0xfcac,	// (0x0006892d) fep_hwr_prediction_pane_g

0x6626,	// (0x0005f2a7) fep_vkb_prediction_pane_g1

0x6630,	// (0x0005f2b1) fep_vkb_prediction_pane_g2

0x6638,	// (0x0005f2b9) fep_vkb_prediction_pane_g3

0x6640,	// (0x0005f2c1) fep_vkb_prediction_pane_g4

0x0003,

0xfcb5,	// (0x00068936) fep_vkb_prediction_pane_g

0x0b1a,	// (0x0005979b) slider_set_pane_g3

0x0b2e,	// (0x000597af) slider_set_pane_g4

0x0b46,	// (0x000597c7) slider_set_pane_g5

0x0b1a,	// (0x0005979b) slider_set_pane_g6

0x0b5c,	// (0x000597dd) slider_set_pane_g7

0x441a,	// (0x0005d09b) slider_form_pane_g3

0x4423,	// (0x0005d0a4) slider_form_pane_g4

0x442b,	// (0x0005d0ac) slider_form_pane_g5

0x441a,	// (0x0005d09b) slider_form_pane_g6

0xc84a,	// (0x000654cb) slider_form_pane_g7

0x4a6f,	// (0x0005d6f0) slider_set_pane_vc_g3

0x4a78,	// (0x0005d6f9) slider_set_pane_vc_g4

0x4a81,	// (0x0005d702) slider_set_pane_vc_g5

0x4a6f,	// (0x0005d6f0) slider_set_pane_vc_g6

0x4a8a,	// (0x0005d70b) slider_set_pane_vc_g7

0x4c60,	// (0x0005d8e1) slider_form_pane_vc_g1

0x4c69,	// (0x0005d8ea) slider_form_pane_vc_g2

0x4c72,	// (0x0005d8f3) slider_form_pane_vc_g3

0x4c60,	// (0x0005d8e1) slider_form_pane_vc_g4

0x4c7b,	// (0x0005d8fc) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x000686f1) slider_form_pane_vc_g

0xee68,	// (0x00067ae9) main_idle_act3_pane

0x6648,	// (0x0005f2c9) ai3_links_pane

0xcf9c,	// (0x00065c1d) popup_ai3_data_window_ParamLimits

0xcf9c,	// (0x00065c1d) popup_ai3_data_window

0x8a26,	// (0x000616a7) grid_ai3_links_pane

0xcfba,	// (0x00065c3b) cell_ai3_links_pane_ParamLimits

0xcfba,	// (0x00065c3b) cell_ai3_links_pane

0x6689,	// (0x0005f30a) bg_popup_sub_pane_cp11

0x6696,	// (0x0005f317) cell_ai3_links_pane_g1

0x8a26,	// (0x000616a7) bg_popup_sub_pane_cp12

0x66bb,	// (0x0005f33c) heading_ai3_data_pane

0x66c3,	// (0x0005f344) list_ai3_gene_pane

0x66cf,	// (0x0005f350) popup_ai3_data_window_g1

0x66d7,	// (0x0005f358) heading_ai3_data_pane_g1

0x66df,	// (0x0005f360) heading_ai3_data_pane_t1

0x66ed,	// (0x0005f36e) list_double_ai3_gene_pane_ParamLimits

0x66ed,	// (0x0005f36e) list_double_ai3_gene_pane

0x66fa,	// (0x0005f37b) list_single_ai3_gene_pane_ParamLimits

0x66fa,	// (0x0005f37b) list_single_ai3_gene_pane

0x5481,	// (0x0005e102) list_highlight_pane_cp7_ParamLimits

0x5481,	// (0x0005e102) list_highlight_pane_cp7

0x6707,	// (0x0005f388) list_single_a13_gene_pane_t1_ParamLimits

0x6707,	// (0x0005f388) list_single_a13_gene_pane_t1

0x671e,	// (0x0005f39f) list_single_ai3_gene_pane_g1

0x6727,	// (0x0005f3a8) list_single_ai3_gene_pane_g2

0x0001,

0xfcbe,	// (0x0006893f) list_single_ai3_gene_pane_g

0x672f,	// (0x0005f3b0) list_double_ai3_gene_pane_g1_ParamLimits

0x672f,	// (0x0005f3b0) list_double_ai3_gene_pane_g1

0x673b,	// (0x0005f3bc) list_double_ai3_gene_pane_t1_ParamLimits

0x673b,	// (0x0005f3bc) list_double_ai3_gene_pane_t1

0x6757,	// (0x0005f3d8) list_double_ai3_gene_pane_t2_ParamLimits

0x6757,	// (0x0005f3d8) list_double_ai3_gene_pane_t2

0x676c,	// (0x0005f3ed) list_double_ai3_gene_pane_t3_ParamLimits

0x676c,	// (0x0005f3ed) list_double_ai3_gene_pane_t3

0x0002,

0xfcc3,	// (0x00068944) list_double_ai3_gene_pane_t_ParamLimits

0xfcc3,	// (0x00068944) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe63e,	// (0x000672bf) aid_size_min_col_2

0xcf86,	// (0x00065c07) aid_size_min_msg_ParamLimits

0xcf86,	// (0x00065c07) aid_size_min_msg

0xcd27,	// (0x000659a8) fep_vkb_top_text_pane_g2_ParamLimits

0xcd27,	// (0x000659a8) fep_vkb_top_text_pane_g2

0x0001,

0xfb23,	// (0x000687a4) fep_vkb_top_text_pane_g_ParamLimits

0xfb23,	// (0x000687a4) fep_vkb_top_text_pane_g

0xee68,	// (0x00067ae9) main_hc_apps_shell_pane

0x6789,	// (0x0005f40a) grid_hc_apps_pane_ParamLimits

0x6789,	// (0x0005f40a) grid_hc_apps_pane

0x679b,	// (0x0005f41c) list_hc_apps_pane

0x67a3,	// (0x0005f424) scroll_pane_cp37_ParamLimits

0x67a3,	// (0x0005f424) scroll_pane_cp37

0xcfd4,	// (0x00065c55) cell_hc_apps_pane_ParamLimits

0xcfd4,	// (0x00065c55) cell_hc_apps_pane

0xd09c,	// (0x00065d1d) cell_hc_apps_pane_g1_ParamLimits

0xd09c,	// (0x00065d1d) cell_hc_apps_pane_g1

0x6891,	// (0x0005f512) cell_hc_apps_pane_g2_ParamLimits

0x6891,	// (0x0005f512) cell_hc_apps_pane_g2

0x68ad,	// (0x0005f52e) cell_hc_apps_pane_g3_ParamLimits

0x68ad,	// (0x0005f52e) cell_hc_apps_pane_g3

0x0002,

0xfcca,	// (0x0006894b) cell_hc_apps_pane_g_ParamLimits

0xfcca,	// (0x0006894b) cell_hc_apps_pane_g

0xd0c8,	// (0x00065d49) cell_hc_apps_pane_t1_ParamLimits

0xd0c8,	// (0x00065d49) cell_hc_apps_pane_t1

0x8bc9,	// (0x0006184a) grid_highlight_pane_cp10_ParamLimits

0x8bc9,	// (0x0006184a) grid_highlight_pane_cp10

0xd108,	// (0x00065d89) list_single_hc_apps_pane_ParamLimits

0xd108,	// (0x00065d89) list_single_hc_apps_pane

0xd142,	// (0x00065dc3) list_single_hc_apps_pane_g1

0xd15b,	// (0x00065ddc) list_single_hc_apps_pane_g2

0x0001,

0xfcd1,	// (0x00068952) list_single_hc_apps_pane_g

0xd174,	// (0x00065df5) list_single_hc_apps_pane_g2_copy1

0xb9ee,	// (0x0006466f) list_single_hc_apps_pane_t1

0x8a88,	// (0x00061709) bg_set_opt_pane_cp_ParamLimits

0xef8b,	// (0x00067c0c) setting_slider_pane_t1_ParamLimits

0xefa4,	// (0x00067c25) setting_slider_pane_t2_ParamLimits

0xefbe,	// (0x00067c3f) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000681ba) setting_slider_pane_t_ParamLimits

0xefd6,	// (0x00067c57) slider_set_pane_ParamLimits

0x003d,	// (0x00058cbe) control_pane_g5_ParamLimits

0x003d,	// (0x00058cbe) control_pane_g5

0x424d,	// (0x0005cece) slider_set_pane_g1_ParamLimits

0x0b0e,	// (0x0005978f) slider_set_pane_g2_ParamLimits

0x0b1a,	// (0x0005979b) slider_set_pane_g3_ParamLimits

0x0b2e,	// (0x000597af) slider_set_pane_g4_ParamLimits

0x0b46,	// (0x000597c7) slider_set_pane_g5_ParamLimits

0x0b1a,	// (0x0005979b) slider_set_pane_g6_ParamLimits

0x0b5c,	// (0x000597dd) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x000685c0) slider_set_pane_g_ParamLimits

0x22f7,	// (0x0005af78) navi_icon_text_pane_ParamLimits

0xc068,	// (0x00064ce9) aid_fill_nsta_2_ParamLimits

0xc0a1,	// (0x00064d22) aid_touch_tab_arrow_left_ParamLimits

0xc0b7,	// (0x00064d38) aid_touch_tab_arrow_right_ParamLimits

0xc152,	// (0x00064dd3) clock_nsta_pane_ParamLimits

0xc5c8,	// (0x00065249) navi_icon_pane_g1_ParamLimits

0xc5d4,	// (0x00065255) navi_text_pane_t1_ParamLimits

0xcad8,	// (0x00065759) navi_icon_text_pane_g1_ParamLimits

0xcae4,	// (0x00065765) navi_icon_text_pane_t1_ParamLimits

0xd142,	// (0x00065dc3) list_single_hc_apps_pane_g1_ParamLimits

0xd15b,	// (0x00065ddc) list_single_hc_apps_pane_g2_ParamLimits

0xfcd1,	// (0x00068952) list_single_hc_apps_pane_g_ParamLimits

0xd174,	// (0x00065df5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb9ee,	// (0x0006466f) list_single_hc_apps_pane_t1_ParamLimits

0x9da9,	// (0x00062a2a) popup_toolbar2_fixed_window_ParamLimits

0x9da9,	// (0x00062a2a) popup_toolbar2_fixed_window

0xb560,	// (0x000641e1) popup_toolbar2_float_window

0x8a26,	// (0x000616a7) bg_popup_sub_pane_cp27

0x6967,	// (0x0005f5e8) grid_toolbar2_float_pane

0x8a26,	// (0x000616a7) bg_popup_sub_pane_cp26

0x6967,	// (0x0005f5e8) grid_toolbar2_fixed_pane

0xd190,	// (0x00065e11) cell_toolbar2_fixed_pane_ParamLimits

0xd190,	// (0x00065e11) cell_toolbar2_fixed_pane

0xd1aa,	// (0x00065e2b) cell_toolbar2_fixed_pane_g1

0x6988,	// (0x0005f609) toolbar2_fixed_button_pane

0x2cfb,	// (0x0005b97c) toolbar2_fixed_button_pane_g1

0x2d0b,	// (0x0005b98c) toolbar2_fixed_button_pane_g2

0x2d03,	// (0x0005b984) toolbar2_fixed_button_pane_g3

0x2d1b,	// (0x0005b99c) toolbar2_fixed_button_pane_g4

0x2d13,	// (0x0005b994) toolbar2_fixed_button_pane_g5

0x2d23,	// (0x0005b9a4) toolbar2_fixed_button_pane_g6

0x2d2b,	// (0x0005b9ac) toolbar2_fixed_button_pane_g7

0x2d3b,	// (0x0005b9bc) toolbar2_fixed_button_pane_g8

0x2d33,	// (0x0005b9b4) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x000684c2) toolbar2_fixed_button_pane_g

0x6990,	// (0x0005f611) cell_toolbar2_float_pane_ParamLimits

0x6990,	// (0x0005f611) cell_toolbar2_float_pane

0x69a1,	// (0x0005f622) cell_toolbar2_float_pane_g1

0x6988,	// (0x0005f609) toolbar2_fixed_button_pane_cp

0xcc0f,	// (0x00065890) fep_vkb_accented_list_pane_ParamLimits

0xcc0f,	// (0x00065890) fep_vkb_accented_list_pane

0x0f89,	// (0x00059c0a) bg_popup_fep_shadow_pane_g9

0x2486,	// (0x0005b107) bg_popup_fep_shadow_pane_cp3

0x91fb,	// (0x00061e7c) list_accented_list_pane

0x69aa,	// (0x0005f62b) list_single_accented_list_pane_ParamLimits

0x69aa,	// (0x0005f62b) list_single_accented_list_pane

0x2486,	// (0x0005b107) list_highlight_pane_cp10

0x69bb,	// (0x0005f63c) list_single_accented_list_pane_t1

0xb47e,	// (0x000640ff) popup_slider_window_ParamLimits

0xb47e,	// (0x000640ff) popup_slider_window

0x6607,	// (0x0005f288) aid_indentation_list_msg

0xd2ad,	// (0x00065f2e) bg_popup_window_pane_cp19

0x6af7,	// (0x0005f778) popup_slider_window_g1

0x6b13,	// (0x0005f794) popup_slider_window_g2

0x6b2f,	// (0x0005f7b0) popup_slider_window_g3

0x0005,

0xfcd6,	// (0x00068957) popup_slider_window_g

0x6b95,	// (0x0005f816) popup_slider_window_t1

0x6c09,	// (0x0005f88a) small_volume_slider_vertical_pane

0x54bc,	// (0x0005e13d) small_volume_slider_vertical_pane_g1

0x54bc,	// (0x0005e13d) small_volume_slider_vertical_pane_g2

0x6c25,	// (0x0005f8a6) small_volume_slider_vertical_pane_g3

0x0002,

0xfce8,	// (0x00068969) small_volume_slider_vertical_pane_g

0x9d13,	// (0x00062994) area_side_right_pane_ParamLimits

0x9d13,	// (0x00062994) area_side_right_pane

0xba1c,	// (0x0006469d) aid_size_side_button_ParamLimits

0xba1c,	// (0x0006469d) aid_size_side_button

0xba35,	// (0x000646b6) grid_sctrl_middle_pane_ParamLimits

0xba35,	// (0x000646b6) grid_sctrl_middle_pane

0x129f,	// (0x00059f20) sctrl_sk_bottom_pane

0x12b0,	// (0x00059f31) sctrl_sk_top_pane

0x12c2,	// (0x00059f43) aid_touch_sctrl_top

0x12cf,	// (0x00059f50) bg_sctrl_sk_pane_ParamLimits

0x12cf,	// (0x00059f50) bg_sctrl_sk_pane

0x12dd,	// (0x00059f5e) sctrl_sk_top_pane_g1

0x12ea,	// (0x00059f6b) sctrl_sk_top_pane_t1

0x12c2,	// (0x00059f43) aid_touch_sctrl_bottom

0x12cf,	// (0x00059f50) bg_sctrl_sk_pane_cp_ParamLimits

0x12cf,	// (0x00059f50) bg_sctrl_sk_pane_cp

0x1305,	// (0x00059f86) sctrl_sk_bottom_pane_g1

0x12ea,	// (0x00059f6b) sctrl_sk_bottom_pane_t1

0xba4f,	// (0x000646d0) cell_sctrl_middle_pane_ParamLimits

0xba4f,	// (0x000646d0) cell_sctrl_middle_pane

0xba62,	// (0x000646e3) aid_touch_sctrl_middle_ParamLimits

0xba62,	// (0x000646e3) aid_touch_sctrl_middle

0xba6f,	// (0x000646f0) bg_sctrl_middle_pane_ParamLimits

0xba6f,	// (0x000646f0) bg_sctrl_middle_pane

0x1988,	// (0x0005a609) cell_sctrl_middle_pane_g1_ParamLimits

0x1988,	// (0x0005a609) cell_sctrl_middle_pane_g1

0xba7d,	// (0x000646fe) cell_sctrl_middle_pane_g2_ParamLimits

0xba7d,	// (0x000646fe) cell_sctrl_middle_pane_g2

0x0001,

0xfcf4,	// (0x00068975) cell_sctrl_middle_pane_g_ParamLimits

0xfcf4,	// (0x00068975) cell_sctrl_middle_pane_g

0x2cfb,	// (0x0005b97c) bg_sctrl_middle_pane_g1

0x2d03,	// (0x0005b984) bg_sctrl_middle_pane_g2

0x2d0b,	// (0x0005b98c) bg_sctrl_middle_pane_g3

0x2d13,	// (0x0005b994) bg_sctrl_middle_pane_g4

0x2d1b,	// (0x0005b99c) bg_sctrl_middle_pane_g5

0x2d23,	// (0x0005b9a4) bg_sctrl_middle_pane_g6

0x2d2b,	// (0x0005b9ac) bg_sctrl_middle_pane_g7

0x2d33,	// (0x0005b9b4) bg_sctrl_middle_pane_g8

0x0007,

0xfcf9,	// (0x0006897a) bg_sctrl_middle_pane_g

0x2d3b,	// (0x0005b9bc) bg_sctrl_middle_pane_g8_copy1

0x2cfb,	// (0x0005b97c) bg_sctrl_sk_pane_g1

0x2d0b,	// (0x0005b98c) bg_sctrl_sk_pane_g2

0x2d03,	// (0x0005b984) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x000684c2) bg_sctrl_sk_pane_g

0x9011,	// (0x00061c92) aid_size_touch_scroll_bar

0x2d1b,	// (0x0005b99c) bg_sctrl_sk_pane_g4

0x2d13,	// (0x0005b994) bg_sctrl_sk_pane_g5

0x2d23,	// (0x0005b9a4) bg_sctrl_sk_pane_g6

0x2d2b,	// (0x0005b9ac) bg_sctrl_sk_pane_g7

0x2d3b,	// (0x0005b9bc) bg_sctrl_sk_pane_g8

0x2d33,	// (0x0005b9b4) bg_sctrl_sk_pane_g9

0x0217,	// (0x00058e98) popup_fep_china_hwr2_fs_candidate_window

0xaf30,	// (0x00063bb1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaf30,	// (0x00063bb1) popup_fep_china_hwr2_fs_control_window

0x0fa9,	// (0x00059c2a) sctrl_sk_top_pane_g2

0x0001,

0xfcef,	// (0x00068970) sctrl_sk_top_pane_g

0xd365,	// (0x00065fe6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd365,	// (0x00065fe6) aid_fep_china_hwr2_fs_cell

0xd37b,	// (0x00065ffc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd37b,	// (0x00065ffc) bg_popup_fep_shadow_pane_cp4

0xd392,	// (0x00066013) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd392,	// (0x00066013) bg_popup_fep_shadow_pane_cp5

0xd3a4,	// (0x00066025) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd3a4,	// (0x00066025) popup_fep_china_hwr2_fs_control_bar_grid

0xd3b8,	// (0x00066039) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c84,	// (0x0005f905) aid_fep_china_hwr2_fs_candi_cell

0x8a26,	// (0x000616a7) bg_popup_fep_shadow_pane_cp6

0x6c8e,	// (0x0005f90f) popup_fep_china_hwr2_fs_candidate_grid

0xd3c0,	// (0x00066041) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3c0,	// (0x00066041) cell_fep_china_hwr2_fs_funtion_grid

0x54bc,	// (0x0005e13d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6cb0,	// (0x0005f931) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6cb0,	// (0x0005f931) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6cbe,	// (0x0005f93f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6cbe,	// (0x0005f93f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0a,	// (0x0006898b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0a,	// (0x0006898b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3d8,	// (0x00066059) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3d8,	// (0x00066059) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3ed,	// (0x0006606e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3ed,	// (0x0006606e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0f,	// (0x00068990) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0f,	// (0x00068990) cell_fep_china_hwr2_fs_funtion_grid_t

0x6d05,	// (0x0005f986) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6d0d,	// (0x0005f98e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6d15,	// (0x0005f996) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd14,	// (0x00068995) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6d1d,	// (0x0005f99e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6d1d,	// (0x0005f99e) cell_fep_china_hwr2_fs_candidate_grid

0x6d3c,	// (0x0005f9bd) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6d44,	// (0x0005f9c5) popup_fep_china_hwr2_fs_candidate_grid_g21

0x54bc,	// (0x0005e13d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x54bc,	// (0x0005e13d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb28,	// (0x000687a9) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d4c,	// (0x0005f9cd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x28cb,	// (0x0005b54c) clock_nsta_pane_cp_24_ParamLimits

0x28cb,	// (0x0005b54c) clock_nsta_pane_cp_24

0x294b,	// (0x0005b5cc) indicator_nsta_pane_cp_24_ParamLimits

0x294b,	// (0x0005b5cc) indicator_nsta_pane_cp_24

0x3ba7,	// (0x0005c828) heading_pane_g1

0x0001,

0xf8a6,	// (0x00068527) heading_pane_g

0x45f2,	// (0x0005d273) grid_sct_catagory_button_pane

0x4624,	// (0x0005d2a5) scroll_pane_cp5_ParamLimits

0x511c,	// (0x0005dd9d) button_value_adjust_pane_cp5_ParamLimits

0x511c,	// (0x0005dd9d) button_value_adjust_pane_cp5

0x5201,	// (0x0005de82) form2_midp_time_pane_ParamLimits

0x6d5a,	// (0x0005f9db) cell_sct_catagory_button_pane_ParamLimits

0x6d5a,	// (0x0005f9db) cell_sct_catagory_button_pane

0x5481,	// (0x0005e102) bg_button_pane_cp01_ParamLimits

0x5481,	// (0x0005e102) bg_button_pane_cp01

0x54bc,	// (0x0005e13d) cell_sct_catagory_button_pane_g1

0xb4fd,	// (0x0006417e) popup_tb_extension_window

0xd409,	// (0x0006608a) aid_size_cell_ext_ParamLimits

0xd409,	// (0x0006608a) aid_size_cell_ext

0x8e53,	// (0x00061ad4) bg_tb_trans_pane_cp1_ParamLimits

0x8e53,	// (0x00061ad4) bg_tb_trans_pane_cp1

0xd42f,	// (0x000660b0) grid_tb_ext_pane_ParamLimits

0xd42f,	// (0x000660b0) grid_tb_ext_pane

0xd46c,	// (0x000660ed) cell_tb_ext_pane_ParamLimits

0xd46c,	// (0x000660ed) cell_tb_ext_pane

0xd494,	// (0x00066115) cell_tb_ext_pane_g1_ParamLimits

0xd494,	// (0x00066115) cell_tb_ext_pane_g1

0x6dee,	// (0x0005fa6f) cell_tb_ext_pane_t1

0x8bc9,	// (0x0006184a) list_highlight_pane_cp11_ParamLimits

0x8bc9,	// (0x0006184a) list_highlight_pane_cp11

0x9dbe,	// (0x00062a3f) popup_uni_indicator_window_ParamLimits

0x9dbe,	// (0x00062a3f) popup_uni_indicator_window

0x90d8,	// (0x00061d59) bg_popup_sub_pane_cp14

0x6e09,	// (0x0005fa8a) list_uniindi_pane

0x6e15,	// (0x0005fa96) uniindi_top_pane

0x8bc9,	// (0x0006184a) bg_uniindi_top_pane

0x6e36,	// (0x0005fab7) uniindi_top_pane_g1

0x6e4c,	// (0x0005facd) uniindi_top_pane_g2

0x0003,

0xfd1b,	// (0x0006899c) uniindi_top_pane_g

0x6e76,	// (0x0005faf7) uniindi_top_pane_t1

0x6ea2,	// (0x0005fb23) list_single_uniindi_pane_ParamLimits

0x6ea2,	// (0x0005fb23) list_single_uniindi_pane

0x54bc,	// (0x0005e13d) bg_uniindi_top_pane_g1

0x6eb5,	// (0x0005fb36) list_single_uniindi_pane_g1

0x6ec8,	// (0x0005fb49) list_single_uniindi_pane_t1

0xee68,	// (0x00067ae9) control_bg_pane

0x6eed,	// (0x0005fb6e) bg_sctrl_sk_pane_cp1

0x6ef6,	// (0x0005fb77) bg_sctrl_sk_pane_cp2

0x6eff,	// (0x0005fb80) control_bg_pane_g1

0x6f08,	// (0x0005fb89) control_bg_pane_g2

0x0001,

0xfd24,	// (0x000689a5) control_bg_pane_g

0x4f54,	// (0x0005dbd5) cell_indicator_nsta_pane_g1_ParamLimits

0xca3a,	// (0x000656bb) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8c,	// (0x0006870d) cell_indicator_nsta_pane_g_ParamLimits

0xe4c1,	// (0x00067142) form2_midp_time_pane_t1_ParamLimits

0x0d2e,	// (0x000599af) main_idle_act4_pane_ParamLimits

0x0d2e,	// (0x000599af) main_idle_act4_pane

0xb4fd,	// (0x0006417e) popup_tb_extension_window_ParamLimits

0xd454,	// (0x000660d5) tb_ext_find_pane_ParamLimits

0xd454,	// (0x000660d5) tb_ext_find_pane

0x6f11,	// (0x0005fb92) ai_gene_pane_1_cp1

0x25d0,	// (0x0005b251) ai_gene_pane_2_cp1

0x6f19,	// (0x0005fb9a) list_single_idle_plugin_calendar_pane

0x6f22,	// (0x0005fba3) list_single_idle_plugin_notification_pane

0x6f2b,	// (0x0005fbac) list_single_idle_plugin_player_pane

0xd4b1,	// (0x00066132) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd4b1,	// (0x00066132) list_single_idle_plugin_shortcut_pane

0xd4d9,	// (0x0006615a) main_idle_act4_pane_t1

0xd4f1,	// (0x00066172) main_idle_act4_pane_t2

0x0001,

0xfd29,	// (0x000689aa) main_idle_act4_pane_t

0xd509,	// (0x0006618a) middle_sk_idle_act4_pane_ParamLimits

0xd509,	// (0x0006618a) middle_sk_idle_act4_pane

0xd525,	// (0x000661a6) popup_clock_digital_analogue_window_cp2

0xd54c,	// (0x000661cd) shortcut_wheel_idle_act4_pane_ParamLimits

0xd54c,	// (0x000661cd) shortcut_wheel_idle_act4_pane

0x54bc,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g1

0x54bc,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g2

0x54bc,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g3

0x54bc,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g4

0x54bc,	// (0x0005e13d) shortcut_wheel_idle_act4_pane_g5

0x6fbe,	// (0x0005fc3f) shortcut_wheel_idle_act4_pane_g6

0x6fc6,	// (0x0005fc47) shortcut_wheel_idle_act4_pane_g7

0x6fce,	// (0x0005fc4f) shortcut_wheel_idle_act4_pane_g8

0x6fd6,	// (0x0005fc57) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2e,	// (0x000689af) shortcut_wheel_idle_act4_pane_g

0xd5c9,	// (0x0006624a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd5c9,	// (0x0006624a) middle_sk_idle_act4_pane_g1

0xd5d7,	// (0x00066258) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5d7,	// (0x00066258) middle_sk_idle_act4_pane_g2

0x0001,

0xfd51,	// (0x000689d2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd51,	// (0x000689d2) middle_sk_idle_act4_pane_g

0xd5ef,	// (0x00066270) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5ef,	// (0x00066270) middle_sk_idle_act4_pane_t1

0xd61e,	// (0x0006629f) grid_ai_shortcut_pane_ParamLimits

0xd61e,	// (0x0006629f) grid_ai_shortcut_pane

0xd63b,	// (0x000662bc) list_highlight_pane_cp16_ParamLimits

0xd63b,	// (0x000662bc) list_highlight_pane_cp16

0xd648,	// (0x000662c9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd648,	// (0x000662c9) list_single_idle_plugin_shortcut_pane_g1

0xd654,	// (0x000662d5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd654,	// (0x000662d5) list_single_idle_plugin_shortcut_pane_g2

0xd672,	// (0x000662f3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd672,	// (0x000662f3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd56,	// (0x000689d7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd56,	// (0x000689d7) list_single_idle_plugin_shortcut_pane_g

0xd687,	// (0x00066308) cell_ai_shortcut_pane_ParamLimits

0xd687,	// (0x00066308) cell_ai_shortcut_pane

0xd69d,	// (0x0006631e) cell_ai_shortcut_pane_g1_ParamLimits

0xd69d,	// (0x0006631e) cell_ai_shortcut_pane_g1

0x6f11,	// (0x0005fb92) ai_gene_pane_1_cp2

0x7107,	// (0x0005fd88) ai_gene_pane_2_cp2

0x710f,	// (0x0005fd90) list_highlight_pane_cp15

0x7118,	// (0x0005fd99) list_single_idle_plugin_calendar_pane_g1

0x710f,	// (0x0005fd90) list_highlight_pane_cp17

0x7120,	// (0x0005fda1) list_single_idle_plugin_calendar_pane_g1_copy1

0x7128,	// (0x0005fda9) list_single_idle_plugin_player_pane_g1

0x4859,	// (0x0005d4da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5d,	// (0x000689de) list_single_idle_plugin_player_pane_g

0x7130,	// (0x0005fdb1) list_single_idle_plugin_player_pane_t1

0x713e,	// (0x0005fdbf) list_single_idle_plugin_player_pane_t2

0x714c,	// (0x0005fdcd) list_single_idle_plugin_player_pane_t3

0x715a,	// (0x0005fddb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd62,	// (0x000689e3) list_single_idle_plugin_player_pane_t

0x7168,	// (0x0005fde9) wait_bar_pane_cp15

0x7170,	// (0x0005fdf1) grid_ai_notification_pane

0x4859,	// (0x0005d4da) list_single_idle_plugin_notification_pane_g1

0xd6bf,	// (0x00066340) cell_ai_notification_pane_ParamLimits

0xd6bf,	// (0x00066340) cell_ai_notification_pane

0x7186,	// (0x0005fe07) cell_ai_notification_pane_g1

0x718e,	// (0x0005fe0f) cell_ai_notification_pane_t1

0xd6cc,	// (0x0006634d) tb_ext_find_button_pane

0xd6d4,	// (0x00066355) tb_ext_find_pane_g1

0xd6dc,	// (0x0006635d) tb_ext_find_pane_t1

0xe0b4,	// (0x00066d35) tb_ext_find_button_pane_g1

0x71ba,	// (0x0005fe3b) tb_ext_find_button_pane_g2

0x0001,

0xfd6b,	// (0x000689ec) tb_ext_find_button_pane_g

0xd4d9,	// (0x0006615a) main_idle_act4_pane_t1_ParamLimits

0xd4f1,	// (0x00066172) main_idle_act4_pane_t2_ParamLimits

0xfd29,	// (0x000689aa) main_idle_act4_pane_t_ParamLimits

0xd525,	// (0x000661a6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd53c,	// (0x000661bd) sat_plugin_idle_act4_pane_ParamLimits

0xd53c,	// (0x000661bd) sat_plugin_idle_act4_pane

0xd6ea,	// (0x0006636b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd6ea,	// (0x0006636b) sat_plugin_idle_act4_pane_t1

0xd702,	// (0x00066383) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd702,	// (0x00066383) sat_plugin_idle_act4_pane_t2

0xd71a,	// (0x0006639b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd71a,	// (0x0006639b) sat_plugin_idle_act4_pane_t3

0xd732,	// (0x000663b3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd732,	// (0x000663b3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd70,	// (0x000689f1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd70,	// (0x000689f1) sat_plugin_idle_act4_pane_t

0xef2d,	// (0x00067bae) popup_battery_window_ParamLimits

0xef2d,	// (0x00067bae) popup_battery_window

0x8bc9,	// (0x0006184a) bg_popup_sub_pane_cp25_ParamLimits

0x8bc9,	// (0x0006184a) bg_popup_sub_pane_cp25

0x7230,	// (0x0005feb1) popup_battery_window_g1_ParamLimits

0x7230,	// (0x0005feb1) popup_battery_window_g1

0x723c,	// (0x0005febd) popup_battery_window_t1_ParamLimits

0x723c,	// (0x0005febd) popup_battery_window_t1

0x724e,	// (0x0005fecf) popup_battery_window_t2_ParamLimits

0x724e,	// (0x0005fecf) popup_battery_window_t2

0x0001,

0xfd79,	// (0x000689fa) popup_battery_window_t_ParamLimits

0xfd79,	// (0x000689fa) popup_battery_window_t

0xabad,	// (0x0006382e) midp_canvas_pane_ParamLimits

0xac09,	// (0x0006388a) midp_keypad_pane_ParamLimits

0xac09,	// (0x0006388a) midp_keypad_pane

0x27ad,	// (0x0005b42e) main_midp_pane_ParamLimits

0x4fcf,	// (0x0005dc50) signal_pane_g2_cp_ParamLimits

0xd74a,	// (0x000663cb) aid_size_cell_midp_keypad_ParamLimits

0xd74a,	// (0x000663cb) aid_size_cell_midp_keypad

0xd768,	// (0x000663e9) midp_keyp_game_grid_pane_ParamLimits

0xd768,	// (0x000663e9) midp_keyp_game_grid_pane

0xd78f,	// (0x00066410) midp_keyp_rocker_pane_ParamLimits

0xd78f,	// (0x00066410) midp_keyp_rocker_pane

0xd7de,	// (0x0006645f) midp_keyp_sk_left_pane_ParamLimits

0xd7de,	// (0x0006645f) midp_keyp_sk_left_pane

0xd834,	// (0x000664b5) midp_keyp_sk_right_pane_ParamLimits

0xd834,	// (0x000664b5) midp_keyp_sk_right_pane

0x8a26,	// (0x000616a7) bg_button_pane_cp03

0xd88a,	// (0x0006650b) midp_keyp_sk_left_pane_g1

0x8a26,	// (0x000616a7) bg_button_pane_cp04

0xd88a,	// (0x0006650b) midp_keyp_sk_right_pane_g1

0x54bc,	// (0x0005e13d) midp_keyp_rocker_pane_g1

0xd892,	// (0x00066513) keyp_game_cell_pane_ParamLimits

0xd892,	// (0x00066513) keyp_game_cell_pane

0x8a26,	// (0x000616a7) bg_button_pane_cp02

0xd8b8,	// (0x00066539) keyp_game_cell_pane_g1

0x9d55,	// (0x000629d6) popup_fep_vkb2_window_ParamLimits

0x9d55,	// (0x000629d6) popup_fep_vkb2_window

0xba89,	// (0x0006470a) aid_size_cell_vkb2_ParamLimits

0xba89,	// (0x0006470a) aid_size_cell_vkb2

0xbab5,	// (0x00064736) popup_fep_vkb2_window_g1_ParamLimits

0xbab5,	// (0x00064736) popup_fep_vkb2_window_g1

0xbb05,	// (0x00064786) vkb2_area_bottom_pane_ParamLimits

0xbb05,	// (0x00064786) vkb2_area_bottom_pane

0xbb61,	// (0x000647e2) vkb2_area_keypad_pane_ParamLimits

0xbb61,	// (0x000647e2) vkb2_area_keypad_pane

0xbbaf,	// (0x00064830) vkb2_area_top_pane_ParamLimits

0xbbaf,	// (0x00064830) vkb2_area_top_pane

0xbc3c,	// (0x000648bd) vkb2_top_entry_pane_ParamLimits

0xbc3c,	// (0x000648bd) vkb2_top_entry_pane

0xbc69,	// (0x000648ea) vkb2_top_grid_left_pane_ParamLimits

0xbc69,	// (0x000648ea) vkb2_top_grid_left_pane

0xbc8a,	// (0x0006490b) vkb2_top_grid_right_pane_ParamLimits

0xbc8a,	// (0x0006490b) vkb2_top_grid_right_pane

0x157f,	// (0x0005a200) vkb2_cell_keypad_pane_ParamLimits

0x157f,	// (0x0005a200) vkb2_cell_keypad_pane

0xbcd2,	// (0x00064953) vkb2_area_bottom_grid_pane_ParamLimits

0xbcd2,	// (0x00064953) vkb2_area_bottom_grid_pane

0xbcfc,	// (0x0006497d) vkb2_area_bottom_pane_g1_ParamLimits

0xbcfc,	// (0x0006497d) vkb2_area_bottom_pane_g1

0xbd22,	// (0x000649a3) vkb2_area_bottom_pane_g2_ParamLimits

0xbd22,	// (0x000649a3) vkb2_area_bottom_pane_g2

0xbd53,	// (0x000649d4) vkb2_area_bottom_pane_g3_ParamLimits

0xbd53,	// (0x000649d4) vkb2_area_bottom_pane_g3

0x0002,

0xfd7e,	// (0x000689ff) vkb2_area_bottom_pane_g_ParamLimits

0xfd7e,	// (0x000689ff) vkb2_area_bottom_pane_g

0x1729,	// (0x0005a3aa) vkb2_top_cell_left_pane_ParamLimits

0x1729,	// (0x0005a3aa) vkb2_top_cell_left_pane

0xd8c1,	// (0x00066542) vkb2_top_entry_pane_g1_ParamLimits

0xd8c1,	// (0x00066542) vkb2_top_entry_pane_g1

0xd8cf,	// (0x00066550) vkb2_top_entry_pane_t1_ParamLimits

0xd8cf,	// (0x00066550) vkb2_top_entry_pane_t1

0x73f8,	// (0x00060079) vkb2_top_entry_pane_t2_ParamLimits

0x73f8,	// (0x00060079) vkb2_top_entry_pane_t2

0x742a,	// (0x000600ab) vkb2_top_entry_pane_t3_ParamLimits

0x742a,	// (0x000600ab) vkb2_top_entry_pane_t3

0x0002,

0xfd85,	// (0x00068a06) vkb2_top_entry_pane_t_ParamLimits

0xfd85,	// (0x00068a06) vkb2_top_entry_pane_t

0xbdbd,	// (0x00064a3e) vkb2_top_grid_right_pane_g1_ParamLimits

0xbdbd,	// (0x00064a3e) vkb2_top_grid_right_pane_g1

0x178c,	// (0x0005a40d) vkb2_top_grid_right_pane_g2_ParamLimits

0x178c,	// (0x0005a40d) vkb2_top_grid_right_pane_g2

0x17a4,	// (0x0005a425) vkb2_top_grid_right_pane_g3_ParamLimits

0x17a4,	// (0x0005a425) vkb2_top_grid_right_pane_g3

0xbdd3,	// (0x00064a54) vkb2_top_grid_right_pane_g4_ParamLimits

0xbdd3,	// (0x00064a54) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8c,	// (0x00068a0d) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8c,	// (0x00068a0d) vkb2_top_grid_right_pane_g

0x17d2,	// (0x0005a453) vkb2_top_cell_left_pane_g1

0x17e9,	// (0x0005a46a) vkb2_cell_keypad_pane_g1_ParamLimits

0x17e9,	// (0x0005a46a) vkb2_cell_keypad_pane_g1

0x744e,	// (0x000600cf) vkb2_cell_keypad_pane_t1_ParamLimits

0x744e,	// (0x000600cf) vkb2_cell_keypad_pane_t1

0x17f7,	// (0x0005a478) vkb2_cell_bottom_grid_pane_ParamLimits

0x17f7,	// (0x0005a478) vkb2_cell_bottom_grid_pane

0x1830,	// (0x0005a4b1) vkb2_cell_bottom_grid_pane_g1

0xd56d,	// (0x000661ee) aid_call2_pane_cp02

0xd575,	// (0x000661f6) aid_call_pane_cp02

0xd57d,	// (0x000661fe) clock_digital_number_pane_cp10

0xd585,	// (0x00066206) clock_digital_number_pane_cp11

0xd58d,	// (0x0006620e) clock_digital_number_pane_cp12

0xd595,	// (0x00066216) clock_digital_number_pane_cp13

0xd59d,	// (0x0006621e) clock_digital_separator_pane_cp10

0xe0b4,	// (0x00066d35) popup_clock_digital_analogue_window_cp2_g1

0xe0b4,	// (0x00066d35) popup_clock_digital_analogue_window_cp2_g2

0xd5a5,	// (0x00066226) popup_clock_digital_analogue_window_cp2_g3

0xe0b4,	// (0x00066d35) popup_clock_digital_analogue_window_cp2_g4

0xd5a5,	// (0x00066226) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd41,	// (0x000689c2) popup_clock_digital_analogue_window_cp2_g

0xd5ad,	// (0x0006622e) popup_clock_digital_analogue_window_cp2_t1

0xd5bb,	// (0x0006623c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4c,	// (0x000689cd) popup_clock_digital_analogue_window_cp2_t

0x54bc,	// (0x0005e13d) clock_digital_number_pane_cp10_g1

0x54bc,	// (0x0005e13d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb28,	// (0x000687a9) clock_digital_number_pane_cp10_g

0x54bc,	// (0x0005e13d) clock_digital_separator_pane_cp10_g1

0x54bc,	// (0x0005e13d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb28,	// (0x000687a9) clock_digital_separator_pane_cp10_g

0x6e58,	// (0x0005fad9) uniindi_top_pane_g3

0x6e69,	// (0x0005faea) uniindi_top_pane_g4

0x160a,	// (0x0005a28b) vkb2_row_keypad_pane_ParamLimits

0x160a,	// (0x0005a28b) vkb2_row_keypad_pane

0x184c,	// (0x0005a4cd) vkb2_cell_t_keypad_pane_ParamLimits

0x184c,	// (0x0005a4cd) vkb2_cell_t_keypad_pane

0x185c,	// (0x0005a4dd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x185c,	// (0x0005a4dd) vkb2_cell_t_keypad_pane_cp08

0x1871,	// (0x0005a4f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1871,	// (0x0005a4f2) vkb2_cell_t_keypad_pane_cp09

0x1885,	// (0x0005a506) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1885,	// (0x0005a506) vkb2_cell_t_keypad_pane_cp01

0x1896,	// (0x0005a517) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1896,	// (0x0005a517) vkb2_cell_t_keypad_pane_cp02

0x18a7,	// (0x0005a528) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x18a7,	// (0x0005a528) vkb2_cell_t_keypad_pane_cp03

0x18b8,	// (0x0005a539) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x18b8,	// (0x0005a539) vkb2_cell_t_keypad_pane_cp04

0x18c9,	// (0x0005a54a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x18c9,	// (0x0005a54a) vkb2_cell_t_keypad_pane_cp05

0x18da,	// (0x0005a55b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18da,	// (0x0005a55b) vkb2_cell_t_keypad_pane_cp06

0x18ed,	// (0x0005a56e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18ed,	// (0x0005a56e) vkb2_cell_t_keypad_pane_cp07

0x1902,	// (0x0005a583) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1902,	// (0x0005a583) vkb2_cell_t_keypad_pane_cp10

0x0fa9,	// (0x00059c2a) vkb2_cell_t_keypad_pane_g1

0x7465,	// (0x000600e6) vkb2_cell_t_keypad_pane_t1

0xee68,	// (0x00067ae9) popup_grid_graphic2_window

0xd908,	// (0x00066589) aid_size_cell_graphic2_ParamLimits

0xd908,	// (0x00066589) aid_size_cell_graphic2

0xd946,	// (0x000665c7) bg_popup_window_pane_cp21_ParamLimits

0xd946,	// (0x000665c7) bg_popup_window_pane_cp21

0xd954,	// (0x000665d5) graphic2_pages_pane_ParamLimits

0xd954,	// (0x000665d5) graphic2_pages_pane

0xd9ac,	// (0x0006662d) grid_graphic2_control_pane_ParamLimits

0xd9ac,	// (0x0006662d) grid_graphic2_control_pane

0xd9f4,	// (0x00066675) grid_graphic2_pane_ParamLimits

0xd9f4,	// (0x00066675) grid_graphic2_pane

0xda7f,	// (0x00066700) cell_graphic2_pane

0xee68,	// (0x00067ae9) main_comp_mode_pane

0x66c3,	// (0x0005f344) list_ai3_gene_pane_ParamLimits

0xd2ad,	// (0x00065f2e) bg_popup_window_pane_cp19_ParamLimits

0x6a97,	// (0x0005f718) bg_touch_area_indi_pane_ParamLimits

0x6a97,	// (0x0005f718) bg_touch_area_indi_pane

0x6aad,	// (0x0005f72e) bg_touch_area_indi_pane_cp01_ParamLimits

0x6aad,	// (0x0005f72e) bg_touch_area_indi_pane_cp01

0x6ac3,	// (0x0005f744) bg_touch_area_indi_pane_cp02_ParamLimits

0x6ac3,	// (0x0005f744) bg_touch_area_indi_pane_cp02

0x6add,	// (0x0005f75e) bg_touch_area_indi_pane_cp03_ParamLimits

0x6add,	// (0x0005f75e) bg_touch_area_indi_pane_cp03

0x6af7,	// (0x0005f778) popup_slider_window_g1_ParamLimits

0x6b13,	// (0x0005f794) popup_slider_window_g2_ParamLimits

0x6b2f,	// (0x0005f7b0) popup_slider_window_g3_ParamLimits

0xfcd6,	// (0x00068957) popup_slider_window_g_ParamLimits

0x6b95,	// (0x0005f816) popup_slider_window_t1_ParamLimits

0x6c09,	// (0x0005f88a) small_volume_slider_vertical_pane_ParamLimits

0xda7f,	// (0x00066700) cell_graphic2_pane_ParamLimits

0xdae1,	// (0x00066762) bg_button_pane_cp10_ParamLimits

0xdae1,	// (0x00066762) bg_button_pane_cp10

0xdaf4,	// (0x00066775) bg_button_pane_cp11_ParamLimits

0xdaf4,	// (0x00066775) bg_button_pane_cp11

0xdb07,	// (0x00066788) graphic2_pages_pane_g1_ParamLimits

0xdb07,	// (0x00066788) graphic2_pages_pane_g1

0xdb22,	// (0x000667a3) graphic2_pages_pane_g2_ParamLimits

0xdb22,	// (0x000667a3) graphic2_pages_pane_g2

0x0001,

0xfd9a,	// (0x00068a1b) graphic2_pages_pane_g_ParamLimits

0xfd9a,	// (0x00068a1b) graphic2_pages_pane_g

0xdb3a,	// (0x000667bb) graphic2_pages_pane_t1_ParamLimits

0xdb3a,	// (0x000667bb) graphic2_pages_pane_t1

0xdb52,	// (0x000667d3) cell_graphic2_control_pane_ParamLimits

0xdb52,	// (0x000667d3) cell_graphic2_control_pane

0xdb80,	// (0x00066801) cell_graphic2_pane_g1_ParamLimits

0xdb80,	// (0x00066801) cell_graphic2_pane_g1

0xdb8d,	// (0x0006680e) cell_graphic2_pane_g2_ParamLimits

0xdb8d,	// (0x0006680e) cell_graphic2_pane_g2

0xcc02,	// (0x00065883) cell_graphic2_pane_g3_ParamLimits

0xcc02,	// (0x00065883) cell_graphic2_pane_g3

0xdb9a,	// (0x0006681b) cell_graphic2_pane_g4_ParamLimits

0xdb9a,	// (0x0006681b) cell_graphic2_pane_g4

0xdba7,	// (0x00066828) cell_graphic2_pane_g5_ParamLimits

0xdba7,	// (0x00066828) cell_graphic2_pane_g5

0x0004,

0xfd9f,	// (0x00068a20) cell_graphic2_pane_g_ParamLimits

0xfd9f,	// (0x00068a20) cell_graphic2_pane_g

0xdbc3,	// (0x00066844) cell_graphic2_pane_t1_ParamLimits

0xdbc3,	// (0x00066844) cell_graphic2_pane_t1

0x3b9b,	// (0x0005c81c) grid_highlight_pane_cp11_ParamLimits

0x3b9b,	// (0x0005c81c) grid_highlight_pane_cp11

0x8bc9,	// (0x0006184a) bg_button_pane_cp05

0xe68b,	// (0x0006730c) cell_graphic2_control_pane_g1

0x54bc,	// (0x0005e13d) bg_touch_area_indi_pane_g1

0x7748,	// (0x000603c9) aid_cmod_rocker_key_size

0x7752,	// (0x000603d3) aid_cmode_itu_key_size

0x775c,	// (0x000603dd) main_cmode_video_pane

0x7766,	// (0x000603e7) main_comp_mode_itu_pane

0x7772,	// (0x000603f3) main_comp_mode_rocker_pane

0x777e,	// (0x000603ff) cell_cmode_rocker_pane_ParamLimits

0x777e,	// (0x000603ff) cell_cmode_rocker_pane

0x7792,	// (0x00060413) cell_cmode_itu_pane_ParamLimits

0x7792,	// (0x00060413) cell_cmode_itu_pane

0x90d8,	// (0x00061d59) bg_button_pane_cp06_ParamLimits

0x90d8,	// (0x00061d59) bg_button_pane_cp06

0x5737,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_ParamLimits

0x5737,	// (0x0005e3b8) cell_cmode_rocker_pane_g1

0x6cb0,	// (0x0005f931) cell_cmode_rocker_pane_g2_ParamLimits

0x6cb0,	// (0x0005f931) cell_cmode_rocker_pane_g2

0x0001,

0xfdaf,	// (0x00068a30) cell_cmode_rocker_pane_g_ParamLimits

0xfdaf,	// (0x00068a30) cell_cmode_rocker_pane_g

0x8a26,	// (0x000616a7) bg_button_pane_cp07

0x77a9,	// (0x0006042a) cell_cmode_itu_pane_g1

0x77b2,	// (0x00060433) cell_cmode_itu_pane_t1

0x77c0,	// (0x00060441) cell_cmode_itu_pane_t2

0x0001,

0xfdb4,	// (0x00068a35) cell_cmode_itu_pane_t

0x6edd,	// (0x0005fb5e) aid_touch_ctrl_left

0x6ee5,	// (0x0005fb66) aid_touch_ctrl_right

0x8a26,	// (0x000616a7) compa_mode_pane

0xe6b3,	// (0x00067334) aid_cmod_rocker_key_size_cp

0xe6bd,	// (0x0006733e) aid_cmode_itu_key_size_cp

0x77e2,	// (0x00060463) compa_mode_pane_g1

0x77ea,	// (0x0006046b) compa_mode_pane_g2

0x77f2,	// (0x00060473) compa_mode_pane_g3

0x0002,

0xfdb9,	// (0x00068a3a) compa_mode_pane_g

0xe6c7,	// (0x00067348) main_comp_mode_itu_pane_cp

0xe6cf,	// (0x00067350) main_comp_mode_rocker_pane_cp

0xe6d7,	// (0x00067358) cell_cmode_itu_pane_cp_ParamLimits

0xe6d7,	// (0x00067358) cell_cmode_itu_pane_cp

0xe6ec,	// (0x0006736d) cell_cmode_rocker_pane_cp_ParamLimits

0xe6ec,	// (0x0006736d) cell_cmode_rocker_pane_cp

0x90d8,	// (0x00061d59) bg_button_pane_cp06_cp_ParamLimits

0x90d8,	// (0x00061d59) bg_button_pane_cp06_cp

0x5737,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5737,	// (0x0005e3b8) cell_cmode_rocker_pane_g1_cp

0x54bc,	// (0x0005e13d) cell_cmode_rocker_pane_g2_cp

0x8a26,	// (0x000616a7) bg_button_pane_cp07_cp

0xe6fe,	// (0x0006737f) cell_cmode_itu_pane_g1_cp

0xe707,	// (0x00067388) cell_cmode_itu_pane_t1_cp

0xe707,	// (0x00067388) cell_cmode_itu_pane_t2_cp

0xc842,	// (0x000654c3) settings_code_pane_cp2

0x8a88,	// (0x00061709) bg_popup_window_pane_cp3_ParamLimits

0x8ddd,	// (0x00061a5e) heading_pane_cp3_ParamLimits

0x8dec,	// (0x00061a6d) listscroll_popup_graphic_pane_ParamLimits

0x0d3c,	// (0x000599bd) fep_hwr_aid_pane_ParamLimits

0x12c2,	// (0x00059f43) aid_touch_sctrl_top_ParamLimits

0x12dd,	// (0x00059f5e) sctrl_sk_top_pane_g1_ParamLimits

0x0fa9,	// (0x00059c2a) sctrl_sk_top_pane_g2_ParamLimits

0xfcef,	// (0x00068970) sctrl_sk_top_pane_g_ParamLimits

0x12ea,	// (0x00059f6b) sctrl_sk_top_pane_t1_ParamLimits

0x12c2,	// (0x00059f43) aid_touch_sctrl_bottom_ParamLimits

0x12ea,	// (0x00059f6b) sctrl_sk_bottom_pane_t1_ParamLimits

0x6e22,	// (0x0005faa3) aid_area_touch_clock

0xbbfb,	// (0x0006487c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbbfb,	// (0x0006487c) aid_vkb2_area_top_pane_cell

0xbcab,	// (0x0006492c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbcab,	// (0x0006492c) aid_vkb2_area_bottom_pane_cell

0x73b0,	// (0x00060031) popup_char_count_window

0x7848,	// (0x000604c9) popup_char_count_window_g1

0x7851,	// (0x000604d2) popup_char_count_window_g2

0x785a,	// (0x000604db) popup_char_count_window_g3

0x0002,

0xfdc0,	// (0x00068a41) popup_char_count_window_g

0x7863,	// (0x000604e4) popup_char_count_window_t1

0x1393,	// (0x0005a014) popup_fep_char_preview_window_ParamLimits

0x1393,	// (0x0005a014) popup_fep_char_preview_window

0xbc1b,	// (0x0006489c) vkb2_top_candi_pane_ParamLimits

0xbc1b,	// (0x0006489c) vkb2_top_candi_pane

0xe715,	// (0x00067396) cell_vkb2_top_candi_pane_ParamLimits

0xe715,	// (0x00067396) cell_vkb2_top_candi_pane

0x1917,	// (0x0005a598) bg_popup_fep_char_preview_window_ParamLimits

0x1917,	// (0x0005a598) bg_popup_fep_char_preview_window

0x1925,	// (0x0005a5a6) popup_fep_char_preview_window_t1_ParamLimits

0x1925,	// (0x0005a5a6) popup_fep_char_preview_window_t1

0x78bf,	// (0x00060540) bg_popup_fep_char_preview_window_g1

0x78c7,	// (0x00060548) bg_popup_fep_char_preview_window_g2

0x78cf,	// (0x00060550) bg_popup_fep_char_preview_window_g3

0x78d7,	// (0x00060558) bg_popup_fep_char_preview_window_g4

0x78df,	// (0x00060560) bg_popup_fep_char_preview_window_g5

0x78e7,	// (0x00060568) bg_popup_fep_char_preview_window_g6

0x78ef,	// (0x00060570) bg_popup_fep_char_preview_window_g7

0x78f7,	// (0x00060578) bg_popup_fep_char_preview_window_g8

0x78ff,	// (0x00060580) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc7,	// (0x00068a48) bg_popup_fep_char_preview_window_g

0x0fa9,	// (0x00059c2a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0fa9,	// (0x00059c2a) cell_vkb2_top_candi_pane_g1

0x0fb7,	// (0x00059c38) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0fb7,	// (0x00059c38) cell_vkb2_top_candi_pane_g2

0x720f,	// (0x0005fe90) cell_vkb2_top_candi_pane_g3_ParamLimits

0x720f,	// (0x0005fe90) cell_vkb2_top_candi_pane_g3

0x1967,	// (0x0005a5e8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1967,	// (0x0005a5e8) cell_vkb2_top_candi_pane_g4

0x5c56,	// (0x0005e8d7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5c56,	// (0x0005e8d7) cell_vkb2_top_candi_pane_g5

0x1988,	// (0x0005a609) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1988,	// (0x0005a609) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddc,	// (0x00068a5d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddc,	// (0x00068a5d) cell_vkb2_top_candi_pane_g

0x1996,	// (0x0005a617) cell_vkb2_top_candi_pane_t1

0x0afa,	// (0x0005977b) aid_size_touch_slider_mark_ParamLimits

0x0afa,	// (0x0005977b) aid_size_touch_slider_mark

0xd990,	// (0x00066611) grid_graphic2_catg_pane_ParamLimits

0xd990,	// (0x00066611) grid_graphic2_catg_pane

0xda4e,	// (0x000666cf) popup_grid_graphic2_window_t1_ParamLimits

0xda4e,	// (0x000666cf) popup_grid_graphic2_window_t1

0xda64,	// (0x000666e5) popup_grid_graphic2_window_t2_ParamLimits

0xda64,	// (0x000666e5) popup_grid_graphic2_window_t2

0x0001,

0xfd95,	// (0x00068a16) popup_grid_graphic2_window_t_ParamLimits

0xfd95,	// (0x00068a16) popup_grid_graphic2_window_t

0x8bc9,	// (0x0006184a) bg_button_pane_cp05_ParamLimits

0xe68b,	// (0x0006730c) cell_graphic2_control_pane_g1_ParamLimits

0xe779,	// (0x000673fa) cell_graphic2_catg_pane_ParamLimits

0xe779,	// (0x000673fa) cell_graphic2_catg_pane

0x8a26,	// (0x000616a7) bg_button_pane_cp12

0xe78b,	// (0x0006740c) cell_graphic2_catg_pane_g1

0x6dee,	// (0x0005fa6f) cell_tb_ext_pane_t1_ParamLimits

0x1749,	// (0x0005a3ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1749,	// (0x0005a3ca) vkb2_top_cell_right_narrow_pane

0x1761,	// (0x0005a3e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x1761,	// (0x0005a3e2) vkb2_top_cell_right_wide_pane

0x0d2e,	// (0x000599af) bg_vkb2_func_pane_ParamLimits

0x0d2e,	// (0x000599af) bg_vkb2_func_pane

0x17d2,	// (0x0005a453) vkb2_top_cell_left_pane_g1_ParamLimits

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp03

0x1830,	// (0x0005a4b1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2d03,	// (0x0005b984) bg_vkb2_func_pane_g1

0x2d0b,	// (0x0005b98c) bg_vkb2_func_pane_g2

0x2d1b,	// (0x0005b99c) bg_vkb2_func_pane_g3

0x2d13,	// (0x0005b994) bg_vkb2_func_pane_g4

0x2d23,	// (0x0005b9a4) bg_vkb2_func_pane_g5

0x2d2b,	// (0x0005b9ac) bg_vkb2_func_pane_g6

0x2d33,	// (0x0005b9b4) bg_vkb2_func_pane_g7

0x2d3b,	// (0x0005b9bc) bg_vkb2_func_pane_g8

0x2cfb,	// (0x0005b97c) bg_vkb2_func_pane_g9

0x0008,

0xfde9,	// (0x00068a6a) bg_vkb2_func_pane_g

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp01

0x17d2,	// (0x0005a453) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x17d2,	// (0x0005a453) vkb2_top_cell_right_wide_pane_g1

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0d2e,	// (0x000599af) bg_vkb2_fuc_pane_cp02

0x19b4,	// (0x0005a635) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x19b4,	// (0x0005a635) vkb2_top_cell_right_narrow_pane_g1

0xd1ef,	// (0x00065e70) aid_touch_area_decrease_ParamLimits

0xd1ef,	// (0x00065e70) aid_touch_area_decrease

0xd229,	// (0x00065eaa) aid_touch_area_increase_ParamLimits

0xd229,	// (0x00065eaa) aid_touch_area_increase

0xd251,	// (0x00065ed2) aid_touch_area_mute_ParamLimits

0xd251,	// (0x00065ed2) aid_touch_area_mute

0xd279,	// (0x00065efa) aid_touch_area_slider_ParamLimits

0xd279,	// (0x00065efa) aid_touch_area_slider

0xd2b9,	// (0x00065f3a) popup_slider_window_g4_ParamLimits

0xd2b9,	// (0x00065f3a) popup_slider_window_g4

0xd2e1,	// (0x00065f62) popup_slider_window_g5_ParamLimits

0xd2e1,	// (0x00065f62) popup_slider_window_g5

0xd315,	// (0x00065f96) popup_slider_window_g6_ParamLimits

0xd315,	// (0x00065f96) popup_slider_window_g6

0x6bc3,	// (0x0005f844) popup_slider_window_t2_ParamLimits

0x6bc3,	// (0x0005f844) popup_slider_window_t2

0x0001,

0xfce3,	// (0x00068964) popup_slider_window_t_ParamLimits

0xfce3,	// (0x00068964) popup_slider_window_t

0xd331,	// (0x00065fb2) slider_pane_ParamLimits

0xd331,	// (0x00065fb2) slider_pane

0x7922,	// (0x000605a3) slider_pane_g1_ParamLimits

0x7922,	// (0x000605a3) slider_pane_g1

0x7936,	// (0x000605b7) slider_pane_g2_ParamLimits

0x7936,	// (0x000605b7) slider_pane_g2

0x794c,	// (0x000605cd) slider_pane_g3_ParamLimits

0x794c,	// (0x000605cd) slider_pane_g3

0x0003,

0xfdfc,	// (0x00068a7d) slider_pane_g_ParamLimits

0xfdfc,	// (0x00068a7d) slider_pane_g

0xb549,	// (0x000641ca) popup_tb_float_extension_window_ParamLimits

0xb549,	// (0x000641ca) popup_tb_float_extension_window

0x7978,	// (0x000605f9) aid_size_cell_tb_float_ext

0x8a26,	// (0x000616a7) bg_popup_sub_window_cp28

0x7984,	// (0x00060605) grid_tb_float_ext_pane

0x7990,	// (0x00060611) cell_tb_float_ext_pane_ParamLimits

0x7990,	// (0x00060611) cell_tb_float_ext_pane

0x79ac,	// (0x0006062d) cell_tb_float_ext_pane_g1

0x79b5,	// (0x00060636) grid_highlight_pane_cp12

0xb866,	// (0x000644e7) cell_last_hwr_side_pane_ParamLimits

0xb866,	// (0x000644e7) cell_last_hwr_side_pane

0x54bc,	// (0x0005e13d) cell_last_hwr_side_pane_g1

0x79be,	// (0x0006063f) cell_last_hwr_side_pane_g2

0x0001,

0xfe05,	// (0x00068a86) cell_last_hwr_side_pane_g

0xbd88,	// (0x00064a09) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbd88,	// (0x00064a09) vkb2_area_bottom_space_btn_pane

0x0fa9,	// (0x00059c2a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7465,	// (0x000600e6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1996,	// (0x0005a617) cell_vkb2_top_candi_pane_t1_ParamLimits

0x19d0,	// (0x0005a651) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x19d0,	// (0x0005a651) vkb2_area_bottom_space_btn_pane_g1

0x1a0a,	// (0x0005a68b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a0a,	// (0x0005a68b) vkb2_area_bottom_space_btn_pane_g2

0x1a40,	// (0x0005a6c1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a40,	// (0x0005a6c1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0a,	// (0x00068a8b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0a,	// (0x00068a8b) vkb2_area_bottom_space_btn_pane_g

0x0df3,	// (0x00059a74) cel_fep_hwr_func_pane_ParamLimits

0x0df3,	// (0x00059a74) cel_fep_hwr_func_pane

0xb83b,	// (0x000644bc) cell_hwr_side_button_pane_ParamLimits

0xb83b,	// (0x000644bc) cell_hwr_side_button_pane

0x6e22,	// (0x0005faa3) aid_area_touch_clock_ParamLimits

0x8bc9,	// (0x0006184a) bg_uniindi_top_pane_ParamLimits

0x6e36,	// (0x0005fab7) uniindi_top_pane_g1_ParamLimits

0x6e4c,	// (0x0005facd) uniindi_top_pane_g2_ParamLimits

0x6e58,	// (0x0005fad9) uniindi_top_pane_g3_ParamLimits

0x6e69,	// (0x0005faea) uniindi_top_pane_g4_ParamLimits

0xfd1b,	// (0x0006899c) uniindi_top_pane_g_ParamLimits

0x6e76,	// (0x0005faf7) uniindi_top_pane_t1_ParamLimits

0x8bc9,	// (0x0006184a) bg_vkb2_func_pane_cp01_ParamLimits

0x8bc9,	// (0x0006184a) bg_vkb2_func_pane_cp01

0x79c7,	// (0x00060648) cel_fep_hwr_func_pane_g1_ParamLimits

0x79c7,	// (0x00060648) cel_fep_hwr_func_pane_g1

0x8bc9,	// (0x0006184a) bg_vkb2_func_pane_cp02_ParamLimits

0x8bc9,	// (0x0006184a) bg_vkb2_func_pane_cp02

0x79c7,	// (0x00060648) cell_hwr_side_button_pane_g1_ParamLimits

0x79c7,	// (0x00060648) cell_hwr_side_button_pane_g1

0x2b68,	// (0x0005b7e9) status_pane_g4_ParamLimits

0x2b68,	// (0x0005b7e9) status_pane_g4

0x2b82,	// (0x0005b803) status_pane_t1

0x526f,	// (0x0005def0) form2_midp_gauge_slider_cont_pane

0x5277,	// (0x0005def8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb33,	// (0x000657b4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb45,	// (0x000657c6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadb,	// (0x0006875c) form2_midp_gauge_slider_pane_t_ParamLimits

0x52ad,	// (0x0005df2e) form2_midp_slider_pane_ParamLimits

0x135b,	// (0x00059fdc) aid_size_cell_func_vkb2_ParamLimits

0x135b,	// (0x00059fdc) aid_size_cell_func_vkb2

0x7964,	// (0x000605e5) slider_pane_g4_ParamLimits

0x7964,	// (0x000605e5) slider_pane_g4

0xbdf1,	// (0x00064a72) form2_midp_gauge_slider_pane_t2_cp01

0xbdff,	// (0x00064a80) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbdff,	// (0x00064a80) form2_midp_gauge_slider_pane_t3_cp01

0x1ab5,	// (0x0005a736) form2_midp_slider_pane_cp01

0x8a26,	// (0x000616a7) navi_smil_pane

0x7a00,	// (0x00060681) navi_smil_pane_g1

0x7a08,	// (0x00060689) navi_smil_pane_t1

0x79d5,	// (0x00060656) form2_midp_slider_pane_g1

0x79de,	// (0x0006065f) form2_midp_slider_pane_g2

0x79e6,	// (0x00060667) form2_midp_slider_pane_g3

0x79d5,	// (0x00060656) form2_midp_slider_pane_g4

0xe794,	// (0x00067415) form2_midp_slider_pane_g5

0x0004,

0xfe13,	// (0x00068a94) form2_midp_slider_pane_g

0x1a7a,	// (0x0005a6fb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a7a,	// (0x0005a6fb) vkb2_area_bottom_space_btn_pane_g4

0xc19d,	// (0x00064e1e) lc0_navi_pane_ParamLimits

0xc19d,	// (0x00064e1e) lc0_navi_pane

0xc20d,	// (0x00064e8e) lc0_stat_indi_pane_ParamLimits

0xc20d,	// (0x00064e8e) lc0_stat_indi_pane

0xc222,	// (0x00064ea3) ls0_title_pane_ParamLimits

0xc222,	// (0x00064ea3) ls0_title_pane

0x90d8,	// (0x00061d59) bg_popup_sub_pane_cp14_ParamLimits

0x6e09,	// (0x0005fa8a) list_uniindi_pane_ParamLimits

0x6e15,	// (0x0005fa96) uniindi_top_pane_ParamLimits

0x6eb5,	// (0x0005fb36) list_single_uniindi_pane_g1_ParamLimits

0x6ec8,	// (0x0005fb49) list_single_uniindi_pane_t1_ParamLimits

0xbe1c,	// (0x00064a9d) lc0_stat_clock_pane_ParamLimits

0xbe1c,	// (0x00064a9d) lc0_stat_clock_pane

0xe79d,	// (0x0006741e) lc0_stat_indi_pane_g1_ParamLimits

0xe79d,	// (0x0006741e) lc0_stat_indi_pane_g1

0xe7aa,	// (0x0006742b) lc0_stat_indi_pane_g2_ParamLimits

0xe7aa,	// (0x0006742b) lc0_stat_indi_pane_g2

0x0001,

0xfe1e,	// (0x00068a9f) lc0_stat_indi_pane_g_ParamLimits

0xfe1e,	// (0x00068a9f) lc0_stat_indi_pane_g

0xbe29,	// (0x00064aaa) lc0_uni_indicator_pane_ParamLimits

0xbe29,	// (0x00064aaa) lc0_uni_indicator_pane

0xe7b7,	// (0x00067438) ls0_title_pane_g1_ParamLimits

0xe7b7,	// (0x00067438) ls0_title_pane_g1

0xe7cb,	// (0x0006744c) ls0_title_pane_t1_ParamLimits

0xe7cb,	// (0x0006744c) ls0_title_pane_t1

0xbe36,	// (0x00064ab7) lc0_uni_indicator_pane_g1_ParamLimits

0xbe36,	// (0x00064ab7) lc0_uni_indicator_pane_g1

0x7a7a,	// (0x000606fb) lc0_stat_clock_pane_t1

0xee68,	// (0x00067ae9) main_ai5_pane

0x7a88,	// (0x00060709) ai5_sk_pane_ParamLimits

0x7a88,	// (0x00060709) ai5_sk_pane

0xe7f9,	// (0x0006747a) cell_ai5_widget_pane_ParamLimits

0xe7f9,	// (0x0006747a) cell_ai5_widget_pane

0xe868,	// (0x000674e9) aid_size_cell_widget_grid

0x7b46,	// (0x000607c7) bg_ai5_widget_pane_ParamLimits

0x7b46,	// (0x000607c7) bg_ai5_widget_pane

0xe89c,	// (0x0006751d) cell_ai5_widget_pane_g2

0xe8b0,	// (0x00067531) cell_ai5_widget_pane_g3

0xe8ca,	// (0x0006754b) cell_ai5_widget_pane_g4

0xe8da,	// (0x0006755b) cell_ai5_widget_pane_g5

0xe8ea,	// (0x0006756b) cell_ai5_widget_pane_g6

0xe8f6,	// (0x00067577) cell_ai5_widget_pane_g7

0xe91a,	// (0x0006759b) cell_ai5_widget_pane_t1_ParamLimits

0xe91a,	// (0x0006759b) cell_ai5_widget_pane_t1

0x7ca5,	// (0x00060926) cell_ai5_widget_pane_t2_ParamLimits

0x7ca5,	// (0x00060926) cell_ai5_widget_pane_t2

0x7cbd,	// (0x0006093e) cell_ai5_widget_pane_t3_ParamLimits

0x7cbd,	// (0x0006093e) cell_ai5_widget_pane_t3

0xe937,	// (0x000675b8) cell_ai5_widget_pane_t4_ParamLimits

0xe937,	// (0x000675b8) cell_ai5_widget_pane_t4

0xe95d,	// (0x000675de) cell_ai5_widget_pane_t5_ParamLimits

0xe95d,	// (0x000675de) cell_ai5_widget_pane_t5

0x7d1b,	// (0x0006099c) cell_ai5_widget_pane_t6_ParamLimits

0x7d1b,	// (0x0006099c) cell_ai5_widget_pane_t6

0x7d2d,	// (0x000609ae) cell_ai5_widget_pane_t7_ParamLimits

0x7d2d,	// (0x000609ae) cell_ai5_widget_pane_t7

0x7d4c,	// (0x000609cd) cell_ai5_widget_pane_t8_ParamLimits

0x7d4c,	// (0x000609cd) cell_ai5_widget_pane_t8

0x000b,

0xfe3e,	// (0x00068abf) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x00068abf) cell_ai5_widget_pane_t

0xe9ef,	// (0x00067670) grid_ai5_widget_pane

0x90d8,	// (0x00061d59) highlight_cell_ai5_widget_pane_ParamLimits

0x90d8,	// (0x00061d59) highlight_cell_ai5_widget_pane

0xe9fd,	// (0x0006767e) ai5_sk_left_pane

0xea07,	// (0x00067688) ai5_sk_middle_pane

0xea11,	// (0x00067692) ai5_sk_right_pane

0x7dfc,	// (0x00060a7d) bg_ai5_widget_pane_g1_ParamLimits

0x7dfc,	// (0x00060a7d) bg_ai5_widget_pane_g1

0x7e08,	// (0x00060a89) bg_ai5_widget_pane_g2_ParamLimits

0x7e08,	// (0x00060a89) bg_ai5_widget_pane_g2

0x7e14,	// (0x00060a95) bg_ai5_widget_pane_g3_ParamLimits

0x7e14,	// (0x00060a95) bg_ai5_widget_pane_g3

0x7e20,	// (0x00060aa1) bg_ai5_widget_pane_g4_ParamLimits

0x7e20,	// (0x00060aa1) bg_ai5_widget_pane_g4

0x7e2c,	// (0x00060aad) bg_ai5_widget_pane_g5_ParamLimits

0x7e2c,	// (0x00060aad) bg_ai5_widget_pane_g5

0x7e38,	// (0x00060ab9) bg_ai5_widget_pane_g6_ParamLimits

0x7e38,	// (0x00060ab9) bg_ai5_widget_pane_g6

0x7e44,	// (0x00060ac5) bg_ai5_widget_pane_g7_ParamLimits

0x7e44,	// (0x00060ac5) bg_ai5_widget_pane_g7

0x7e50,	// (0x00060ad1) bg_ai5_widget_pane_g8_ParamLimits

0x7e50,	// (0x00060ad1) bg_ai5_widget_pane_g8

0x7e5c,	// (0x00060add) bg_ai5_widget_pane_g9_ParamLimits

0x7e5c,	// (0x00060add) bg_ai5_widget_pane_g9

0x0008,

0xfe57,	// (0x00068ad8) bg_ai5_widget_pane_g_ParamLimits

0xfe57,	// (0x00068ad8) bg_ai5_widget_pane_g

0xea47,	// (0x000676c8) cell_shortcut_ai5_widget_pane_ParamLimits

0xea47,	// (0x000676c8) cell_shortcut_ai5_widget_pane

0x2486,	// (0x0005b107) bg_cell_shortcut_ai5_widget_pane

0x7ea7,	// (0x00060b28) cell_grid_ai5_widget_pane_g1

0x2486,	// (0x0005b107) highlight_cell_shortcut_ai5_widget_pane

0x2d03,	// (0x0005b984) ai5_sk_left_pane_g1

0x7eb0,	// (0x00060b31) ai5_sk_left_pane_g2

0x7eb8,	// (0x00060b39) ai5_sk_left_pane_g3

0x7ec0,	// (0x00060b41) ai5_sk_left_pane_g4

0x0003,

0xfe6a,	// (0x00068aeb) ai5_sk_left_pane_g

0x7ec8,	// (0x00060b49) ai5_sk_left_pane_t1

0x2d0b,	// (0x0005b98c) ai5_sk_right_pane_g1

0x7ed6,	// (0x00060b57) ai5_sk_right_pane_g2

0x7ede,	// (0x00060b5f) ai5_sk_right_pane_g3

0x7ee6,	// (0x00060b67) ai5_sk_right_pane_g4

0x0003,

0xfe73,	// (0x00068af4) ai5_sk_right_pane_g

0x7eee,	// (0x00060b6f) ai5_sk_right_pane_t1

0x2d0b,	// (0x0005b98c) ai5_sk_middle_pane_g1

0x2d03,	// (0x0005b984) ai5_sk_middle_pane_g2

0x2d23,	// (0x0005b9a4) ai5_sk_middle_pane_g3

0x7ede,	// (0x00060b5f) ai5_sk_middle_pane_g4

0x7eb8,	// (0x00060b39) ai5_sk_middle_pane_g5

0x7efc,	// (0x00060b7d) ai5_sk_middle_pane_g6

0xea5a,	// (0x000676db) ai5_sk_middle_pane_g7

0x0006,

0xfe7c,	// (0x00068afd) ai5_sk_middle_pane_g

0xc087,	// (0x00064d08) aid_touch_area_size_lc0_ParamLimits

0xc087,	// (0x00064d08) aid_touch_area_size_lc0

0x0fd8,	// (0x00059c59) cell_hwr_candidate_pane_t1_ParamLimits

0x282b,	// (0x0005b4ac) aid_touch_navi_pane

0xc32d,	// (0x00064fae) status_dt_navi_pane_ParamLimits

0xc32d,	// (0x00064fae) status_dt_navi_pane

0xc345,	// (0x00064fc6) status_dt_sta_pane_ParamLimits

0xc345,	// (0x00064fc6) status_dt_sta_pane

0xea62,	// (0x000676e3) dt_sta_controll_pane

0xea6f,	// (0x000676f0) dt_sta_indi_pane

0xea7c,	// (0x000676fd) dt_sta_title_pane

0x8bc9,	// (0x0006184a) bg_dt_sta_indi_pane_ParamLimits

0x8bc9,	// (0x0006184a) bg_dt_sta_indi_pane

0xea8e,	// (0x0006770f) dt_sta_battery_pane

0xea96,	// (0x00067717) dt_sta_indi_pane_g1

0xea9f,	// (0x00067720) dt_sta_indi_pane_g2

0xeaa8,	// (0x00067729) dt_sta_indi_pane_g3

0x0002,

0xfe8b,	// (0x00068b0c) dt_sta_indi_pane_g

0xeab1,	// (0x00067732) dt_sta_signal_pane

0x90d8,	// (0x00061d59) bg_dt_sta_title_pane_ParamLimits

0x90d8,	// (0x00061d59) bg_dt_sta_title_pane

0xeaba,	// (0x0006773b) dt_sta_title_pane_g1

0xeac2,	// (0x00067743) dt_sta_title_pane_t1_ParamLimits

0xeac2,	// (0x00067743) dt_sta_title_pane_t1

0x8a26,	// (0x000616a7) bg_dt_sta_control_pane

0xead7,	// (0x00067758) dt_sta_controll_pane_g1

0xeae0,	// (0x00067761) bg_dt_sta_title_pane_g1

0xeae9,	// (0x0006776a) bg_dt_sta_title_pane_g2

0xeaf2,	// (0x00067773) bg_dt_sta_title_pane_g3

0x0002,

0xfe92,	// (0x00068b13) bg_dt_sta_title_pane_g

0x54bc,	// (0x0005e13d) bg_dt_sta_indi_pane_g1

0x7faa,	// (0x00060c2b) dt_sta_signal_pane_g1

0x7fb2,	// (0x00060c33) dt_sta_signal_pane_g2

0x0001,

0xfe99,	// (0x00068b1a) dt_sta_signal_pane_g

0x7fba,	// (0x00060c3b) dt_sta_battery_pane_g1

0x7fc3,	// (0x00060c44) dt_sta_battery_pane_t1

0x54bc,	// (0x0005e13d) bg_dt_sta_control_pane_g1

0x1f79,	// (0x0005abfa) fep_china_uni_eep_pane

0x1f81,	// (0x0005ac02) fep_china_uni_entry_pane_ParamLimits

0x1f91,	// (0x0005ac12) popup_fep_china_uni_window_g1_ParamLimits

0x1fa1,	// (0x0005ac22) popup_fep_china_uni_window_g2_ParamLimits

0x1fa1,	// (0x0005ac22) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0006837e) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0006837e) popup_fep_china_uni_window_g

0x7fd2,	// (0x00060c53) fep_china_uni_eep_pane_g1

0x7fda,	// (0x00060c5b) fep_china_uni_eep_pane_t1

0x79f7,	// (0x00060678) aid_touch_area_size_smil_player

0x297f,	// (0x0005b600) lc0_clock_pane

0x2b76,	// (0x0005b7f7) status_pane_g5_ParamLimits

0x2b76,	// (0x0005b7f7) status_pane_g5

0xb071,	// (0x00063cf2) popup_keymap_window

0x2b3c,	// (0x0005b7bd) status_icon_pane

0xe8b0,	// (0x00067531) cell_ai5_widget_pane_g3_ParamLimits

0xe8ca,	// (0x0006754b) cell_ai5_widget_pane_g4_ParamLimits

0xe8da,	// (0x0006755b) cell_ai5_widget_pane_g5_ParamLimits

0x7c28,	// (0x000608a9) cell_ai5_widget_pane_g8_ParamLimits

0x7c28,	// (0x000608a9) cell_ai5_widget_pane_g8

0x7c3c,	// (0x000608bd) cell_ai5_widget_pane_g9_ParamLimits

0x7c3c,	// (0x000608bd) cell_ai5_widget_pane_g9

0x7c50,	// (0x000608d1) cell_ai5_widget_pane_g10_ParamLimits

0x7c50,	// (0x000608d1) cell_ai5_widget_pane_g10

0x7fe9,	// (0x00060c6a) status_icon_pane_g1

0x8a26,	// (0x000616a7) bg_popup_sub_pane_cp13

0x7ff1,	// (0x00060c72) popup_keymap_window_t1

0xad70,	// (0x000639f1) control_pane_g6_ParamLimits

0xad70,	// (0x000639f1) control_pane_g6

0xad7d,	// (0x000639fe) control_pane_g7_ParamLimits

0xad7d,	// (0x000639fe) control_pane_g7

0xad8a,	// (0x00063a0b) control_pane_g8_ParamLimits

0xad8a,	// (0x00063a0b) control_pane_g8

0xea62,	// (0x000676e3) dt_sta_controll_pane_ParamLimits

0xea6f,	// (0x000676f0) dt_sta_indi_pane_ParamLimits

0xea7c,	// (0x000676fd) dt_sta_title_pane_ParamLimits

0x901a,	// (0x00061c9b) aid_size_touch_scroll_bar_cale

0xef45,	// (0x00067bc6) popup_discreet_window_ParamLimits

0xef45,	// (0x00067bc6) popup_discreet_window

0x9d9f,	// (0x00062a20) popup_sk_window

0x3361,	// (0x0005bfe2) bg_popup_sub_pane_cp28_ParamLimits

0x3361,	// (0x0005bfe2) bg_popup_sub_pane_cp28

0x7fff,	// (0x00060c80) popup_discreet_window_g1_ParamLimits

0x7fff,	// (0x00060c80) popup_discreet_window_g1

0x801f,	// (0x00060ca0) popup_discreet_window_t1_ParamLimits

0x801f,	// (0x00060ca0) popup_discreet_window_t1

0x803d,	// (0x00060cbe) popup_discreet_window_t2_ParamLimits

0x803d,	// (0x00060cbe) popup_discreet_window_t2

0x0002,

0xfe9e,	// (0x00068b1f) popup_discreet_window_t_ParamLimits

0xfe9e,	// (0x00068b1f) popup_discreet_window_t

0x1aeb,	// (0x0005a76c) popup_sk_window_g1

0x1af5,	// (0x0005a776) popup_sk_window_g2

0x0001,

0xfea5,	// (0x00068b26) popup_sk_window_g

0x1afd,	// (0x0005a77e) popup_sk_window_t1

0x1b0b,	// (0x0005a78c) popup_sk_window_t1_copy1

0xe89c,	// (0x0006751d) cell_ai5_widget_pane_g2_ParamLimits

0xe97d,	// (0x000675fe) cell_ai5_widget_pane_t9_ParamLimits

0xe97d,	// (0x000675fe) cell_ai5_widget_pane_t9

0x8a26,	// (0x000616a7) main_fep_fshwr2_pane

0xbe55,	// (0x00064ad6) aid_fshwr2_btn_pane

0xbe69,	// (0x00064aea) aid_fshwr2_syb_pane

0xbe7d,	// (0x00064afe) aid_fshwr2_txt_pane

0xbe8d,	// (0x00064b0e) fshwr2_func_candi_pane

0xbeaf,	// (0x00064b30) fshwr2_hwr_syb_pane

0xbed3,	// (0x00064b54) fshwr2_icf_pane

0xee68,	// (0x00067ae9) fshwr2_icf_bg_pane

0x1bb7,	// (0x0005a838) fshwr2_icf_pane_t1_ParamLimits

0x1bb7,	// (0x0005a838) fshwr2_icf_pane_t1

0xe0b4,	// (0x00066d35) fshwr2_func_candi_pane_g1

0xeafb,	// (0x0006777c) fshwr2_func_candi_row_pane_ParamLimits

0xeafb,	// (0x0006777c) fshwr2_func_candi_row_pane

0xbf03,	// (0x00064b84) cell_fshwr2_syb_pane_ParamLimits

0xbf03,	// (0x00064b84) cell_fshwr2_syb_pane

0x1bf0,	// (0x0005a871) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1bf0,	// (0x0005a871) fshwr2_hwr_syb_pane_g1

0xee68,	// (0x00067ae9) bg_popup_call_pane_cp01

0xbf2b,	// (0x00064bac) fshwr2_func_candi_cell_pane_ParamLimits

0xbf2b,	// (0x00064bac) fshwr2_func_candi_cell_pane

0x3141,	// (0x0005bdc2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3141,	// (0x0005bdc2) fshwr2_func_candi_cell_bg_pane

0xbf76,	// (0x00064bf7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbf76,	// (0x00064bf7) fshwr2_func_candi_cell_pane_g1

0xbfad,	// (0x00064c2e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbfad,	// (0x00064c2e) fshwr2_func_candi_cell_pane_t1

0xee68,	// (0x00067ae9) bg_button_pane_cp08

0x27ad,	// (0x0005b42e) cell_fshwr2_syb_bg_pane

0xbfc8,	// (0x00064c49) cell_fshwr2_syb_bg_pane_g1

0xbfdc,	// (0x00064c5d) cell_fshwr2_syb_bg_pane_t1

0x90d8,	// (0x00061d59) main_tmo_pane

0xc647,	// (0x000652c8) uni_indicator_pane_g1_ParamLimits

0xc65d,	// (0x000652de) uni_indicator_pane_g2_ParamLimits

0xc673,	// (0x000652f4) uni_indicator_pane_g3_ParamLimits

0xc686,	// (0x00065307) uni_indicator_pane_g4_ParamLimits

0xc686,	// (0x00065307) uni_indicator_pane_g4

0x409b,	// (0x0005cd1c) uni_indicator_pane_g5_ParamLimits

0x409b,	// (0x0005cd1c) uni_indicator_pane_g5

0x409b,	// (0x0005cd1c) uni_indicator_pane_g6_ParamLimits

0x409b,	// (0x0005cd1c) uni_indicator_pane_g6

0xf8fc,	// (0x0006857d) uni_indicator_pane_g_ParamLimits

0xd1bf,	// (0x00065e40) popup_tmo_note_window_ParamLimits

0xd1bf,	// (0x00065e40) popup_tmo_note_window

0x133d,	// (0x00059fbe) fshwr2_bg_pane

0xbf9e,	// (0x00064c1f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbf9e,	// (0x00064c1f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaa,	// (0x00068b2b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaa,	// (0x00068b2b) fshwr2_func_candi_cell_pane_g

0x0f91,	// (0x00059c12) bg_popup_window_pane_cp01

0x1cb7,	// (0x0005a938) bg_popup_window_pane_g1_cp01

0x80b2,	// (0x00060d33) bg_popup_window_pane_cp22_ParamLimits

0x80b2,	// (0x00060d33) bg_popup_window_pane_cp22

0x80c0,	// (0x00060d41) listscroll_tmo_link_pane_ParamLimits

0x80c0,	// (0x00060d41) listscroll_tmo_link_pane

0x8100,	// (0x00060d81) popup_tmo_note_window_g1_ParamLimits

0x8100,	// (0x00060d81) popup_tmo_note_window_g1

0x810d,	// (0x00060d8e) tmo_note_info_pane_ParamLimits

0x810d,	// (0x00060d8e) tmo_note_info_pane

0xeb22,	// (0x000677a3) list_tmo_note_info_pane_g1_ParamLimits

0xeb22,	// (0x000677a3) list_tmo_note_info_pane_g1

0x813e,	// (0x00060dbf) list_tmo_note_info_pane_g2_ParamLimits

0x813e,	// (0x00060dbf) list_tmo_note_info_pane_g2

0x0001,

0xfeaf,	// (0x00068b30) list_tmo_note_info_pane_g_ParamLimits

0xfeaf,	// (0x00068b30) list_tmo_note_info_pane_g

0x815a,	// (0x00060ddb) list_tmo_note_info_text_pane_ParamLimits

0x815a,	// (0x00060ddb) list_tmo_note_info_text_pane

0x81df,	// (0x00060e60) list_tmo_link_pane

0x81ec,	// (0x00060e6d) scroll_pane_cp20

0x81f9,	// (0x00060e7a) list_single_tmo_link_pane_ParamLimits

0x81f9,	// (0x00060e7a) list_single_tmo_link_pane

0x8209,	// (0x00060e8a) list_single_tmo_link_pane_t1

0x8217,	// (0x00060e98) list_tmo_note_info_text_pane_t1_ParamLimits

0x8217,	// (0x00060e98) list_tmo_note_info_text_pane_t1

0xa834,	// (0x000634b5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa834,	// (0x000634b5) aid_size_touch_scroll_bar_cp01

0xa763,	// (0x000633e4) aid_size_touch_slider_marker

0x9d8f,	// (0x00062a10) popup_settings_window_ParamLimits

0x9d8f,	// (0x00062a10) popup_settings_window

0xe12a,	// (0x00066dab) popup_candi_list_indi_window

0x282b,	// (0x0005b4ac) aid_touch_navi_pane_ParamLimits

0x1296,	// (0x00059f17) rs_clock_indi_pane

0x129f,	// (0x00059f20) sctrl_sk_bottom_pane_ParamLimits

0x12b0,	// (0x00059f31) sctrl_sk_top_pane_ParamLimits

0x13ad,	// (0x0005a02e) popup_fep_tooltip_window

0xe868,	// (0x000674e9) aid_size_cell_widget_grid_ParamLimits

0xe887,	// (0x00067508) cell_ai5_widget_pane_g1_ParamLimits

0xe887,	// (0x00067508) cell_ai5_widget_pane_g1

0xe8ea,	// (0x0006756b) cell_ai5_widget_pane_g6_ParamLimits

0xe8f6,	// (0x00067577) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe23,	// (0x00068aa4) cell_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x00068aa4) cell_ai5_widget_pane_g

0xe9ac,	// (0x0006762d) cell_ai5_widget_pane_t10_ParamLimits

0xe9ac,	// (0x0006762d) cell_ai5_widget_pane_t10

0xe9ef,	// (0x00067670) grid_ai5_widget_pane_ParamLimits

0xea1b,	// (0x0006769c) cell_contacts_ai5_widget_pane_ParamLimits

0xea1b,	// (0x0006769c) cell_contacts_ai5_widget_pane

0x8052,	// (0x00060cd3) popup_discreet_window_t3_ParamLimits

0x8052,	// (0x00060cd3) popup_discreet_window_t3

0xbeef,	// (0x00064b70) popup_fshwr2_char_preview_window_ParamLimits

0xbeef,	// (0x00064b70) popup_fshwr2_char_preview_window

0xeb39,	// (0x000677ba) tmo_note_info_pane_t1

0xeb4e,	// (0x000677cf) tmo_note_info_pane_t2

0xeb67,	// (0x000677e8) tmo_note_info_pane_t3

0x81bb,	// (0x00060e3c) tmo_note_info_pane_t4

0x81cd,	// (0x00060e4e) tmo_note_info_pane_t5

0x0004,

0xfeb4,	// (0x00068b35) tmo_note_info_pane_t

0x81df,	// (0x00060e60) list_tmo_link_pane_ParamLimits

0x81ec,	// (0x00060e6d) scroll_pane_cp20_ParamLimits

0xee68,	// (0x00067ae9) bg_popup_fep_char_preview_window_cp01

0x8230,	// (0x00060eb1) popup_fshwr2_char_preview_window_t1

0x823e,	// (0x00060ebf) popup_candi_list_indi_window_g1

0x8247,	// (0x00060ec8) bg_cell_contacts_ai5_widget_pane

0x8253,	// (0x00060ed4) cell_contacts_ai5_widget_pane_g1

0x8268,	// (0x00060ee9) cell_contacts_ai5_widget_pane_g2

0x8274,	// (0x00060ef5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebf,	// (0x00068b40) cell_contacts_ai5_widget_pane_g

0x8280,	// (0x00060f01) cell_contacts_ai5_widget_pane_t1

0x90d8,	// (0x00061d59) highlight_cell_shortcut_ai5_widget_pane_cp01

0x82f7,	// (0x00060f78) settings_container_pane

0x2486,	// (0x0005b107) listscroll_set_pane_copy1

0x4bed,	// (0x0005d86e) scroll_pane_cp121_copy1

0x8303,	// (0x00060f84) set_content_pane_copy1

0x830b,	// (0x00060f8c) aid_height_set_list_copy1_ParamLimits

0x830b,	// (0x00060f8c) aid_height_set_list_copy1

0x429b,	// (0x0005cf1c) aid_size_parent_copy1_ParamLimits

0x429b,	// (0x0005cf1c) aid_size_parent_copy1

0x8317,	// (0x00060f98) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8317,	// (0x00060f98) button_value_adjust_pane_cp6_copy1

0x27ad,	// (0x0005b42e) list_highlight_pane_cp2_copy1_ParamLimits

0x27ad,	// (0x0005b42e) list_highlight_pane_cp2_copy1

0x832b,	// (0x00060fac) list_set_pane_copy1_ParamLimits

0x832b,	// (0x00060fac) list_set_pane_copy1

0x8292,	// (0x00060f13) main_pane_set_t1_copy1_ParamLimits

0x8292,	// (0x00060f13) main_pane_set_t1_copy1

0x82cc,	// (0x00060f4d) main_pane_set_t2_copy1_ParamLimits

0x82cc,	// (0x00060f4d) main_pane_set_t2_copy1

0x83ec,	// (0x0006106d) main_pane_set_t3_copy1

0x83fa,	// (0x0006107b) main_pane_set_t4_copy1

0x82eb,	// (0x00060f6c) set_content_pane_g1_copy1_ParamLimits

0x82eb,	// (0x00060f6c) set_content_pane_g1_copy1

0x8408,	// (0x00061089) setting_code_pane_copy1

0x8410,	// (0x00061091) setting_slider_graphic_pane_copy1

0x8410,	// (0x00061091) setting_slider_pane_copy1

0x8418,	// (0x00061099) setting_text_pane_copy1

0x8418,	// (0x00061099) setting_volume_pane_copy1

0x8408,	// (0x00061089) settings_code_pane_cp2_copy1

0x8420,	// (0x000610a1) settings_code_pane_cp_copy1_ParamLimits

0x8420,	// (0x000610a1) settings_code_pane_cp_copy1

0x1cc0,	// (0x0005a941) volume_set_pane_copy1

0x8434,	// (0x000610b5) volume_set_pane_g10_copy1

0x8440,	// (0x000610c1) volume_set_pane_g1_copy1

0x844a,	// (0x000610cb) volume_set_pane_g2_copy1

0x8454,	// (0x000610d5) volume_set_pane_g3_copy1

0x845e,	// (0x000610df) volume_set_pane_g4_copy1

0x8468,	// (0x000610e9) volume_set_pane_g5_copy1

0x8472,	// (0x000610f3) volume_set_pane_g6_copy1

0x847c,	// (0x000610fd) volume_set_pane_g7_copy1

0x8486,	// (0x00061107) volume_set_pane_g8_copy1

0x8490,	// (0x00061111) volume_set_pane_g9_copy1

0x8a88,	// (0x00061709) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a88,	// (0x00061709) bg_set_opt_pane_cp_copy1

0x1ccc,	// (0x0005a94d) setting_slider_pane_t1_copy1_ParamLimits

0x1ccc,	// (0x0005a94d) setting_slider_pane_t1_copy1

0x1ceb,	// (0x0005a96c) setting_slider_pane_t2_copy1_ParamLimits

0x1ceb,	// (0x0005a96c) setting_slider_pane_t2_copy1

0x1d05,	// (0x0005a986) setting_slider_pane_t3_copy1_ParamLimits

0x1d05,	// (0x0005a986) setting_slider_pane_t3_copy1

0x1d1d,	// (0x0005a99e) slider_set_pane_copy1_ParamLimits

0x1d1d,	// (0x0005a99e) slider_set_pane_copy1

0x9130,	// (0x00061db1) set_opt_bg_pane_g1_copy2

0x9138,	// (0x00061db9) set_opt_bg_pane_g2_copy2

0x849c,	// (0x0006111d) set_opt_bg_pane_g3_copy2

0x9148,	// (0x00061dc9) set_opt_bg_pane_g4_copy2

0x9150,	// (0x00061dd1) set_opt_bg_pane_g5_copy2

0x9158,	// (0x00061dd9) set_opt_bg_pane_g6_copy2

0x84a6,	// (0x00061127) set_opt_bg_pane_g7_copy2

0x84b0,	// (0x00061131) set_opt_bg_pane_g8_copy2

0x84ba,	// (0x0006113b) set_opt_bg_pane_g9_copy2

0x1d33,	// (0x0005a9b4) aid_size_touch_slider_mark_copy1_ParamLimits

0x1d33,	// (0x0005a9b4) aid_size_touch_slider_mark_copy1

0x84c4,	// (0x00061145) slider_set_pane_g1_copy1

0x1d47,	// (0x0005a9c8) slider_set_pane_g2_copy1

0x0b1a,	// (0x0005979b) slider_set_pane_g3_copy1_ParamLimits

0x0b1a,	// (0x0005979b) slider_set_pane_g3_copy1

0x0b2e,	// (0x000597af) slider_set_pane_g4_copy1_ParamLimits

0x0b2e,	// (0x000597af) slider_set_pane_g4_copy1

0x0b46,	// (0x000597c7) slider_set_pane_g5_copy1_ParamLimits

0x0b46,	// (0x000597c7) slider_set_pane_g5_copy1

0x0b1a,	// (0x0005979b) slider_set_pane_g6_copy1_ParamLimits

0x0b1a,	// (0x0005979b) slider_set_pane_g6_copy1

0x1d4f,	// (0x0005a9d0) slider_set_pane_g7_copy1_ParamLimits

0x1d4f,	// (0x0005a9d0) slider_set_pane_g7_copy1

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp2_copy1

0x84cd,	// (0x0006114e) setting_slider_graphic_pane_g1_copy1

0x84d6,	// (0x00061157) setting_slider_graphic_pane_t1_copy1

0x84e6,	// (0x00061167) setting_slider_graphic_pane_t2_copy1

0x84f6,	// (0x00061177) slider_set_pane_cp_copy1

0x8506,	// (0x00061187) input_focus_pane_cp1_copy1

0x850f,	// (0x00061190) list_set_text_pane_copy1

0x8517,	// (0x00061198) setting_text_pane_g1_copy1

0xdbee,	// (0x0006686f) set_text_pane_t1_copy1

0x8506,	// (0x00061187) input_focus_pane_cp2_copy1

0x8517,	// (0x00061198) setting_code_pane_g1_copy1

0x8520,	// (0x000611a1) setting_code_pane_t1_copy1

0x49f2,	// (0x0005d673) list_set_graphic_pane_copy1

0x8a3a,	// (0x000616bb) bg_set_opt_pane_cp4_copy1

0x2176,	// (0x0005adf7) list_set_graphic_pane_g1_copy1_ParamLimits

0x2176,	// (0x0005adf7) list_set_graphic_pane_g1_copy1

0x852e,	// (0x000611af) list_set_graphic_pane_g2_copy1

0x218e,	// (0x0005ae0f) list_set_graphic_pane_t1_copy1_ParamLimits

0x218e,	// (0x0005ae0f) list_set_graphic_pane_t1_copy1

0x54bc,	// (0x0005e13d) rs_clock_indi_pane_g1

0x8536,	// (0x000611b7) rs_clock_indi_pane_t1

0x8544,	// (0x000611c5) rs_indi_pane

0x854c,	// (0x000611cd) rs_indi_pane_g1

0x8555,	// (0x000611d6) rs_indi_pane_g2

0x855e,	// (0x000611df) rs_indi_pane_g3

0x0002,

0xfec6,	// (0x00068b47) rs_indi_pane_g

0x2486,	// (0x0005b107) bg_popup_preview_window_pane_cp03

0x8567,	// (0x000611e8) popup_fep_tooltip_window_t1

0x6181,	// (0x0005ee02) popup_note2_window_g2_ParamLimits

0x6181,	// (0x0005ee02) popup_note2_window_g2

0x0001,

0xfc53,	// (0x000688d4) popup_note2_window_g_ParamLimits

0xfc53,	// (0x000688d4) popup_note2_window_g

0x6689,	// (0x0005f30a) bg_popup_sub_pane_cp11_ParamLimits

0x6696,	// (0x0005f317) cell_ai3_links_pane_g1_ParamLimits

0x66ad,	// (0x0005f32e) cell_ai3_links_pane_t1

0xdbee,	// (0x0006686f) set_text_pane_t1_copy1_ParamLimits

0x2388,	// (0x0005b009) cell_graphic_popup_pane_cp2_ParamLimits

0x2388,	// (0x0005b009) cell_graphic_popup_pane_cp2

0x8575,	// (0x000611f6) cell_graphic_popup_pane_g1_cp2

0x8e2d,	// (0x00061aae) cell_graphic_popup_pane_g2_cp2

0x857d,	// (0x000611fe) cell_graphic_popup_pane_g3_cp2

0x8585,	// (0x00061206) cell_graphic_popup_pane_t2_cp2

0x8e3e,	// (0x00061abf) grid_highlight_pane_cp3_cp2

0xdeed,	// (0x00066b6e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x90d8,	// (0x00061d59) main_tmo_pane_ParamLimits

0xd1b3,	// (0x00065e34) popup_tmo_big_image_note_window

0xe876,	// (0x000674f7) cell_ai5_widget_list_pane

0xe87e,	// (0x000674ff) cell_ai5_widget_lrg_icon_pane

0xeb39,	// (0x000677ba) tmo_note_info_pane_t1_ParamLimits

0xeb4e,	// (0x000677cf) tmo_note_info_pane_t2_ParamLimits

0xeb67,	// (0x000677e8) tmo_note_info_pane_t3_ParamLimits

0x81bb,	// (0x00060e3c) tmo_note_info_pane_t4_ParamLimits

0x81cd,	// (0x00060e4e) tmo_note_info_pane_t5_ParamLimits

0xfeb4,	// (0x00068b35) tmo_note_info_pane_t_ParamLimits

0x82f7,	// (0x00060f78) settings_container_pane_ParamLimits

0x84fe,	// (0x0006117f) indicator_popup_pane_cp5

0x84fe,	// (0x0006117f) indicator_popup_pane_cp6

0x49f2,	// (0x0005d673) list_set_graphic_pane_copy1_ParamLimits

0x8a26,	// (0x000616a7) bg_popup_window_pane_cp23

0x8593,	// (0x00061214) popup_tmo_big_image_note_window_g1

0x859f,	// (0x00061220) popup_tmo_big_image_note_window_t1

0x85af,	// (0x00061230) popup_tmo_big_image_note_window_t2

0x85bf,	// (0x00061240) popup_tmo_big_image_note_window_t3

0x0002,

0xfecd,	// (0x00068b4e) popup_tmo_big_image_note_window_t

0x54bc,	// (0x0005e13d) cell_ai5_widget_lrg_icon_pane_g1

0xeb7c,	// (0x000677fd) cell_ai5_widget_lrg_icon_pane_t1

0xeb8a,	// (0x0006780b) cell_ai5_widget_list_row_pane_ParamLimits

0xeb8a,	// (0x0006780b) cell_ai5_widget_list_row_pane

0xeba2,	// (0x00067823) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeba2,	// (0x00067823) cell_ai5_widget_list_row_pane_g1

0xebaf,	// (0x00067830) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xebaf,	// (0x00067830) cell_ai5_widget_list_row_pane_t1

0xebda,	// (0x0006785b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebda,	// (0x0006785b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed4,	// (0x00068b55) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed4,	// (0x00068b55) cell_ai5_widget_list_row_pane_t

0xee68,	// (0x00067ae9) main_fep_vtchi_ss_pane

0x867d,	// (0x000612fe) popup_fep_char_pre_window

0x8685,	// (0x00061306) popup_fep_ituss_window

0xec2c,	// (0x000678ad) popup_fep_vkbss_window

0x27ad,	// (0x0005b42e) grid_vkbss_keypad_pane_ParamLimits

0x27ad,	// (0x0005b42e) grid_vkbss_keypad_pane

0x86f3,	// (0x00061374) ituss_keypad_pane

0x1d6f,	// (0x0005a9f0) aid_vkbss_key_offset_ParamLimits

0x1d6f,	// (0x0005a9f0) aid_vkbss_key_offset

0xbff2,	// (0x00064c73) cell_vkbss_key_pane_ParamLimits

0xbff2,	// (0x00064c73) cell_vkbss_key_pane

0x86ff,	// (0x00061380) bg_cell_vkbss_key_g1_ParamLimits

0x86ff,	// (0x00061380) bg_cell_vkbss_key_g1

0xec3b,	// (0x000678bc) cell_vkbss_key_3p_pane_ParamLimits

0xec3b,	// (0x000678bc) cell_vkbss_key_3p_pane

0xec71,	// (0x000678f2) cell_vkbss_key_g1_ParamLimits

0xec71,	// (0x000678f2) cell_vkbss_key_g1

0xeca7,	// (0x00067928) cell_vkbss_key_t1_ParamLimits

0xeca7,	// (0x00067928) cell_vkbss_key_t1

0x1dd9,	// (0x0005aa5a) cell_ituss_key_pane_ParamLimits

0x1dd9,	// (0x0005aa5a) cell_ituss_key_pane

0x87d3,	// (0x00061454) bg_cell_ituss_key_g1_ParamLimits

0x87d3,	// (0x00061454) bg_cell_ituss_key_g1

0x87df,	// (0x00061460) cell_ituss_key_pane_g1_ParamLimits

0x87df,	// (0x00061460) cell_ituss_key_pane_g1

0x1dea,	// (0x0005aa6b) cell_ituss_key_pane_g2_ParamLimits

0x1dea,	// (0x0005aa6b) cell_ituss_key_pane_g2

0x0005,

0xfedb,	// (0x00068b5c) cell_ituss_key_pane_g_ParamLimits

0xfedb,	// (0x00068b5c) cell_ituss_key_pane_g

0x1e6e,	// (0x0005aaef) cell_ituss_key_t1_ParamLimits

0x1e6e,	// (0x0005aaef) cell_ituss_key_t1

0x1ea8,	// (0x0005ab29) cell_ituss_key_t2_ParamLimits

0x1ea8,	// (0x0005ab29) cell_ituss_key_t2

0x1eda,	// (0x0005ab5b) cell_ituss_key_t3_ParamLimits

0x1eda,	// (0x0005ab5b) cell_ituss_key_t3

0x1f0b,	// (0x0005ab8c) cell_ituss_key_t4_ParamLimits

0x1f0b,	// (0x0005ab8c) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00068b69) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00068b69) cell_ituss_key_t

0xed03,	// (0x00067984) cell_vkbss_key_3p_pane_g1

0xed0b,	// (0x0006798c) cell_vkbss_key_3p_pane_g2

0xed13,	// (0x00067994) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00068b74) cell_vkbss_key_3p_pane_g

0x2486,	// (0x0005b107) bg_popup_fep_char_preview_window_cp02

0x881d,	// (0x0006149e) popup_fep_char_pre_window_t1

0xe855,	// (0x000674d6) main_ai5_sk_pane

0x8247,	// (0x00060ec8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8253,	// (0x00060ed4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8268,	// (0x00060ee9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8274,	// (0x00060ef5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebf,	// (0x00068b40) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8280,	// (0x00060f01) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x90d8,	// (0x00061d59) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed1b,	// (0x0006799c) main_ai5_sk_pane_g1

0x3199,	// (0x0005be1a) popup_query_code_window_g1

0xec1d,	// (0x0006789e) popup_fep_vkb_icf_pane

0x86ca,	// (0x0006134b) popup_fep_vtchi_icf_pane

0x8834,	// (0x000614b5) bg_icf_pane

0x8834,	// (0x000614b5) list_vkb_icf_pane

0x8840,	// (0x000614c1) bg_icf_pane_cp01

0x8853,	// (0x000614d4) vtchi_icf_list_pane

0xed70,	// (0x000679f1) list_vkb_icf_pane_t1_ParamLimits

0xed70,	// (0x000679f1) list_vkb_icf_pane_t1

0x88cf,	// (0x00061550) vtchi_icf_list_pane_t1_ParamLimits

0x88cf,	// (0x00061550) vtchi_icf_list_pane_t1

0x8685,	// (0x00061306) popup_fep_ituss_window_ParamLimits

0x86ca,	// (0x0006134b) popup_fep_vtchi_icf_pane_ParamLimits

0x86f3,	// (0x00061374) ituss_keypad_pane_ParamLimits

0x1d65,	// (0x0005a9e6) ituss_sks_pane

0x8834,	// (0x000614b5) bg_icf_pane_ParamLimits

0xec02,	// (0x00067883) icf_edit_indi_pane_ParamLimits

0xec02,	// (0x00067883) icf_edit_indi_pane

0x8834,	// (0x000614b5) list_vkb_icf_pane_ParamLimits

0x8840,	// (0x000614c1) bg_icf_pane_cp01_ParamLimits

0x8670,	// (0x000612f1) icf_edit_indi_pane_cp01_ParamLimits

0x8670,	// (0x000612f1) icf_edit_indi_pane_cp01

0x8853,	// (0x000614d4) vtchi_query_pane

0x79c7,	// (0x00060648) icf_edit_indi_pane_g1_ParamLimits

0x79c7,	// (0x00060648) icf_edit_indi_pane_g1

0xed87,	// (0x00067a08) icf_edit_indi_pane_g2_ParamLimits

0xed87,	// (0x00067a08) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x00068b9f) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x00068b9f) icf_edit_indi_pane_g

0xed9b,	// (0x00067a1c) icf_edit_indi_pane_t1

0x88e8,	// (0x00061569) bg_input_focus_pane_cp042

0x9011,	// (0x00061c92) vtchi_button_pane

0x88f1,	// (0x00061572) vtchi_query_pane_t1

0x88ff,	// (0x00061580) vtchi_query_pane_t2

0x890d,	// (0x0006158e) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x00068b8e) vtchi_query_pane_t

0xee68,	// (0x00067ae9) bg_button_pane_cp13

0x891b,	// (0x0006159c) vtchi_button_pane_g1

0x1f4e,	// (0x0005abcf) ituss_sks_pane_g1

0x1f59,	// (0x0005abda) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00068b95) ituss_sks_pane_g

0x8923,	// (0x000615a4) ituss_sks_pane_t1

0x8931,	// (0x000615b2) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x00068b9a) ituss_sks_pane_t

0x4f90,	// (0x0005dc11) indicator_nsta_pane_cp_g1

0x4f99,	// (0x0005dc1a) indicator_nsta_pane_cp_g2

0x4fa1,	// (0x0005dc22) indicator_nsta_pane_cp_g3

0x4fa9,	// (0x0005dc2a) indicator_nsta_pane_cp_g4

0x4f99,	// (0x0005dc1a) indicator_nsta_pane_cp_g5

0x4fa1,	// (0x0005dc22) indicator_nsta_pane_cp_g6

0x0005,

0xfa91,	// (0x00068712) indicator_nsta_pane_cp_g

0xe66d,	// (0x000672ee) cell_graphic2_pane_t2_ParamLimits

0xe66d,	// (0x000672ee) cell_graphic2_pane_t2

0x0001,

0xfdaa,	// (0x00068a2b) cell_graphic2_pane_t_ParamLimits

0xfdaa,	// (0x00068a2b) cell_graphic2_pane_t

0xe6a5,	// (0x00067326) cell_graphic2_control_pane_t1

0xaa96,	// (0x00063717) signal_pane_g3_ParamLimits

0xaa96,	// (0x00063717) signal_pane_g3

0xaaaa,	// (0x0006372b) signal_pane_g4_ParamLimits

0xaaaa,	// (0x0006372b) signal_pane_g4

0xebec,	// (0x0006786d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebec,	// (0x0006786d) cell_ai5_widget_list_row_pane_t3

0x87f3,	// (0x00061474) cell_ituss_key_pane_t1_ParamLimits

0x87f3,	// (0x00061474) cell_ituss_key_pane_t1

0x2e00,	// (0x0005ba81) form_field_data_wide_pane_vc_t2_ParamLimits

0x2e00,	// (0x0005ba81) form_field_data_wide_pane_vc_t2

0x2e14,	// (0x0005ba95) form_field_data_wide_pane_vc_t3_ParamLimits

0x2e14,	// (0x0005ba95) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00068465) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00068465) form_field_data_wide_pane_vc_t

0x4c2d,	// (0x0005d8ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4c2d,	// (0x0005d8ae) form_field_slider_wide_pane_vc_t3

0x4d03,	// (0x0005d984) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4d03,	// (0x0005d984) form_field_popup_wide_pane_vc_t2

0x4d1a,	// (0x0005d99b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4d1a,	// (0x0005d99b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x00068701) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x00068701) form_field_popup_wide_pane_vc_t

0xbe55,	// (0x00064ad6) aid_fshwr2_btn_pane_ParamLimits

0xbe69,	// (0x00064aea) aid_fshwr2_syb_pane_ParamLimits

0xbe7d,	// (0x00064afe) aid_fshwr2_txt_pane_ParamLimits

0x133d,	// (0x00059fbe) fshwr2_bg_pane_ParamLimits

0xbe8d,	// (0x00064b0e) fshwr2_func_candi_pane_ParamLimits

0xbeaf,	// (0x00064b30) fshwr2_hwr_syb_pane_ParamLimits

0xbed3,	// (0x00064b54) fshwr2_icf_pane_ParamLimits

0xe46d,	// (0x000670ee) list_double_graphic_pane_vc_g4_ParamLimits

0xe46d,	// (0x000670ee) list_double_graphic_pane_vc_g4

0x1e0a,	// (0x0005aa8b) cell_ituss_key_pane_g3_ParamLimits

0x1e0a,	// (0x0005aa8b) cell_ituss_key_pane_g3

0x1f3c,	// (0x0005abbd) cell_ituss_key_t5_ParamLimits

0x1f3c,	// (0x0005abbd) cell_ituss_key_t5

0xec2c,	// (0x000678ad) popup_fep_vkbss_window_ParamLimits

0xe85f,	// (0x000674e0) aid_cell_ai5_quarter

0xed9b,	// (0x00067a1c) icf_edit_indi_pane_t1_ParamLimits

0x8c71,	// (0x000618f2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c71,	// (0x000618f2) aid_tch_indicator_popup_pane_cp2

0x8c84,	// (0x00061905) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c84,	// (0x00061905) aid_tch_query_popup_data_pane_cp2

0x3141,	// (0x0005bdc2) aid_tch_query_popup_pane_ParamLimits

0x3141,	// (0x0005bdc2) aid_tch_query_popup_pane

0x3141,	// (0x0005bdc2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3141,	// (0x0005bdc2) aid_tch_query_popup_data_pane_cp1

0x27ad,	// (0x0005b42e) cell_fshwr2_syb_bg_pane_ParamLimits

0xbfc8,	// (0x00064c49) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbfdc,	// (0x00064c5d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec1d,	// (0x0006789e) popup_fep_vkb_icf_pane_ParamLimits

0xbde9,	// (0x00064a6a) bg_popup_fep_char_preview_window_g10

0xe902,	// (0x00067583) cell_ai5_widget_pane_g11_ParamLimits

0xe902,	// (0x00067583) cell_ai5_widget_pane_g11

0x7c70,	// (0x000608f1) cell_ai5_widget_pane_g12_ParamLimits

0x7c70,	// (0x000608f1) cell_ai5_widget_pane_g12

0xe90e,	// (0x0006758f) cell_ai5_widget_pane_g13_ParamLimits

0xe90e,	// (0x0006758f) cell_ai5_widget_pane_g13

0xe9cb,	// (0x0006764c) cell_ai5_widget_pane_t11_ParamLimits

0xe9cb,	// (0x0006764c) cell_ai5_widget_pane_t11

0xe9dd,	// (0x0006765e) cell_ai5_widget_pane_t12_ParamLimits

0xe9dd,	// (0x0006765e) cell_ai5_widget_pane_t12

0x1e16,	// (0x0005aa97) cell_ituss_key_pane_g4_ParamLimits

0x1e16,	// (0x0005aa97) cell_ituss_key_pane_g4

0x1e32,	// (0x0005aab3) cell_ituss_key_pane_g5_ParamLimits

0x1e32,	// (0x0005aab3) cell_ituss_key_pane_g5

0x1e4e,	// (0x0005aacf) cell_ituss_key_pane_g6_ParamLimits

0x1e4e,	// (0x0005aacf) cell_ituss_key_pane_g6

0x2cfb,	// (0x0005b97c) bg_icf_pane_g1

0xed24,	// (0x000679a5) bg_icf_pane_g2

0xed2e,	// (0x000679af) bg_icf_pane_g3

0xed36,	// (0x000679b7) bg_icf_pane_g4

0xed40,	// (0x000679c1) bg_icf_pane_g5

0xed4a,	// (0x000679cb) bg_icf_pane_g6

0xed54,	// (0x000679d5) bg_icf_pane_g7

0xed5c,	// (0x000679dd) bg_icf_pane_g8

0xed66,	// (0x000679e7) bg_icf_pane_g9

0x0008,

0xfefa,	// (0x00068b7b) bg_icf_pane_g

0x86e0,	// (0x00061361) popup_hyb_candi_window_ParamLimits

0x86e0,	// (0x00061361) popup_hyb_candi_window

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp01_ParamLimits

0x2d6f,	// (0x0005b9f0) bg_popup_sub_pane_cp01

0x896c,	// (0x000615ed) entry_hyb_candi_pane_ParamLimits

0x896c,	// (0x000615ed) entry_hyb_candi_pane

0x897b,	// (0x000615fc) grid_hyb_candi_pane_ParamLimits

0x897b,	// (0x000615fc) grid_hyb_candi_pane

0x8990,	// (0x00061611) grid_hyb_phrase_pane_ParamLimits

0x8990,	// (0x00061611) grid_hyb_phrase_pane

0x899f,	// (0x00061620) cell_hyb_candi_pane_ParamLimits

0x899f,	// (0x00061620) cell_hyb_candi_pane

0x901a,	// (0x00061c9b) cell_hyb_candi_scroll_pane

0xe0b4,	// (0x00066d35) cell_hyb_candi_pane_g1

0x89bb,	// (0x0006163c) cell_hyb_candi_pane_t1

0x89c9,	// (0x0006164a) cell_hyb_phrase_pane

0xe0b4,	// (0x00066d35) cell_hyb_phrase_pane_g1

0x89d2,	// (0x00061653) cell_hyb_phrase_pane_t1

0x89e0,	// (0x00061661) entry_hyb_candi_pane_t1

0x2486,	// (0x0005b107) input_focus_pane_cp06

0x89ee,	// (0x0006166f) cell_hyb_candi_scroll_pane_g1

0x89f6,	// (0x00061677) cell_hyb_candi_scroll_pane_g1_aid

0x89fe,	// (0x0006167f) cell_hyb_candi_scroll_pane_g2

0x8a06,	// (0x00061687) cell_hyb_candi_scroll_pane_g2_aid

0x8a0e,	// (0x0006168f) cell_hyb_candi_scroll_pane_g3

0x8a16,	// (0x00061697) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

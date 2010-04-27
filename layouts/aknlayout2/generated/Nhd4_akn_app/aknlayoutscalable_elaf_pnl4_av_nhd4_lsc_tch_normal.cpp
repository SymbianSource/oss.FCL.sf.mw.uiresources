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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00000000 };

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
0xb475,	// (0x0000b475) Screen

0xb481,	// (0x0000b481) application_window_ParamLimits

0xb481,	// (0x0000b481) application_window

0x002e,	// (0x0000002e) screen_g1

0xb4b9,	// (0x0000b4b9) area_bottom_pane_ParamLimits

0xb4b9,	// (0x0000b4b9) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcb4f,	// (0x0000cb4f) battery_pane_ParamLimits

0xcb4f,	// (0x0000cb4f) battery_pane

0x4051,	// (0x00004051) bg_status_flat_pane_g8

0x4059,	// (0x00004059) bg_status_flat_pane_g9

0x31c1,	// (0x000031c1) context_pane_ParamLimits

0x31c1,	// (0x000031c1) context_pane

0xccba,	// (0x0000ccba) navi_pane_ParamLimits

0xccba,	// (0x0000ccba) navi_pane

0xcd38,	// (0x0000cd38) signal_pane_ParamLimits

0xcd38,	// (0x0000cd38) signal_pane

0x0008,

0xadcb,	// (0x0000adcb) bg_status_flat_pane_g

0xcdc8,	// (0x0000cdc8) status_pane_g1_ParamLimits

0xcdc8,	// (0x0000cdc8) status_pane_g1

0xcdde,	// (0x0000cdde) status_pane_g2_ParamLimits

0xcdde,	// (0x0000cdde) status_pane_g2

0x33e0,	// (0x000033e0) status_pane_g3_ParamLimits

0x33e0,	// (0x000033e0) status_pane_g3

0x0004,

0xf351,	// (0x0000f351) status_pane_g_ParamLimits

0xf351,	// (0x0000f351) status_pane_g

0xcdea,	// (0x0000cdea) title_pane_ParamLimits

0xcdea,	// (0x0000cdea) title_pane

0xce4d,	// (0x0000ce4d) uni_indicator_pane_ParamLimits

0xce4d,	// (0x0000ce4d) uni_indicator_pane

0x2a6a,	// (0x00002a6a) bg_list_pane_ParamLimits

0x2a6a,	// (0x00002a6a) bg_list_pane

0x2a8a,	// (0x00002a8a) find_pane

0xc426,	// (0x0000c426) listscroll_app_pane_ParamLimits

0xc426,	// (0x0000c426) listscroll_app_pane

0x2a9e,	// (0x00002a9e) listscroll_form_pane

0x2aa6,	// (0x00002aa6) listscroll_gen_pane_ParamLimits

0x2aa6,	// (0x00002aa6) listscroll_gen_pane

0x2aba,	// (0x00002aba) listscroll_set_pane

0x4e05,	// (0x00004e05) main_idle_act_pane

0x2563,	// (0x00002563) main_idle_trad_pane

0x2563,	// (0x00002563) main_list_empty_pane

0x2ad4,	// (0x00002ad4) main_midp_pane

0x2ae0,	// (0x00002ae0) main_pane_g1_ParamLimits

0x2ae0,	// (0x00002ae0) main_pane_g1

0xc436,	// (0x0000c436) popup_ai_message_window_ParamLimits

0xc436,	// (0x0000c436) popup_ai_message_window

0xc4c7,	// (0x0000c4c7) popup_fep_china_uni_window_ParamLimits

0xc4c7,	// (0x0000c4c7) popup_fep_china_uni_window

0x2bf4,	// (0x00002bf4) popup_fep_japan_candidate_window_ParamLimits

0x2bf4,	// (0x00002bf4) popup_fep_japan_candidate_window

0x2c12,	// (0x00002c12) popup_fep_japan_predictive_window_ParamLimits

0x2c12,	// (0x00002c12) popup_fep_japan_predictive_window

0xc521,	// (0x0000c521) popup_find_window

0xc53e,	// (0x0000c53e) popup_grid_graphic_window_ParamLimits

0xc53e,	// (0x0000c53e) popup_grid_graphic_window

0x2c77,	// (0x00002c77) popup_large_graphic_colour_window

0xc5d6,	// (0x0000c5d6) popup_menu_window_ParamLimits

0xc5d6,	// (0x0000c5d6) popup_menu_window

0xc7a2,	// (0x0000c7a2) popup_note_image_window

0xc768,	// (0x0000c768) popup_note_wait_window_ParamLimits

0xc768,	// (0x0000c768) popup_note_wait_window

0xc7ba,	// (0x0000c7ba) popup_note_window_ParamLimits

0xc7ba,	// (0x0000c7ba) popup_note_window

0xc860,	// (0x0000c860) popup_query_code_window_ParamLimits

0xc860,	// (0x0000c860) popup_query_code_window

0x2ec1,	// (0x00002ec1) popup_query_data_code_window_ParamLimits

0x2ec1,	// (0x00002ec1) popup_query_data_code_window

0xc89a,	// (0x0000c89a) popup_query_data_window_ParamLimits

0xc89a,	// (0x0000c89a) popup_query_data_window

0xc916,	// (0x0000c916) popup_query_sat_info_window_ParamLimits

0xc916,	// (0x0000c916) popup_query_sat_info_window

0xc9ad,	// (0x0000c9ad) popup_snote_single_graphic_window_ParamLimits

0xc9ad,	// (0x0000c9ad) popup_snote_single_graphic_window

0xc9ad,	// (0x0000c9ad) popup_snote_single_text_window_ParamLimits

0xc9ad,	// (0x0000c9ad) popup_snote_single_text_window

0x2f44,	// (0x00002f44) popup_sub_window_general

0x3072,	// (0x00003072) popup_window_general_ParamLimits

0x3072,	// (0x00003072) popup_window_general

0x3087,	// (0x00003087) power_save_pane

0xc28e,	// (0x0000c28e) control_pane_g1_ParamLimits

0xc28e,	// (0x0000c28e) control_pane_g1

0xc2b7,	// (0x0000c2b7) control_pane_g2_ParamLimits

0xc2b7,	// (0x0000c2b7) control_pane_g2

0x2911,	// (0x00002911) control_pane_g3_ParamLimits

0x2911,	// (0x00002911) control_pane_g3

0x0007,

0xf339,	// (0x0000f339) control_pane_g_ParamLimits

0xf339,	// (0x0000f339) control_pane_g

0xc31f,	// (0x0000c31f) control_pane_t1_ParamLimits

0xc31f,	// (0x0000c31f) control_pane_t1

0xc37d,	// (0x0000c37d) control_pane_t2_ParamLimits

0xc37d,	// (0x0000c37d) control_pane_t2

0x0002,

0xf34a,	// (0x0000f34a) control_pane_t_ParamLimits

0xf34a,	// (0x0000f34a) control_pane_t

0xc1e7,	// (0x0000c1e7) navi_navi_volume_pane_cp1

0xc1ef,	// (0x0000c1ef) status_small_icon_pane

0x27f8,	// (0x000027f8) status_small_pane_g1_ParamLimits

0x27f8,	// (0x000027f8) status_small_pane_g1

0xc1f7,	// (0x0000c1f7) status_small_pane_g2_ParamLimits

0xc1f7,	// (0x0000c1f7) status_small_pane_g2

0xc203,	// (0x0000c203) status_small_pane_g3_ParamLimits

0xc203,	// (0x0000c203) status_small_pane_g3

0xc20f,	// (0x0000c20f) status_small_pane_g4_ParamLimits

0xc20f,	// (0x0000c20f) status_small_pane_g4

0xc21b,	// (0x0000c21b) status_small_pane_g5_ParamLimits

0xc21b,	// (0x0000c21b) status_small_pane_g5

0xc229,	// (0x0000c229) status_small_pane_g6_ParamLimits

0xc229,	// (0x0000c229) status_small_pane_g6

0x0007,

0xf328,	// (0x0000f328) status_small_pane_g_ParamLimits

0xf328,	// (0x0000f328) status_small_pane_g

0xc258,	// (0x0000c258) status_small_pane_t1

0xc27a,	// (0x0000c27a) status_small_wait_pane_ParamLimits

0xc27a,	// (0x0000c27a) status_small_wait_pane

0xc00c,	// (0x0000c00c) aid_levels_signal_ParamLimits

0xc00c,	// (0x0000c00c) aid_levels_signal

0xc024,	// (0x0000c024) signal_pane_g1_ParamLimits

0xc024,	// (0x0000c024) signal_pane_g1

0xc03f,	// (0x0000c03f) signal_pane_g2_ParamLimits

0xc03f,	// (0x0000c03f) signal_pane_g2

0x0003,

0xf303,	// (0x0000f303) signal_pane_g_ParamLimits

0xf303,	// (0x0000f303) signal_pane_g

0x1e22,	// (0x00001e22) context_pane_g1

0xb697,	// (0x0000b697) title_pane_g1

0xb6ce,	// (0x0000b6ce) title_pane_t1

0x04c1,	// (0x000004c1) title_pane_t2

0x04e7,	// (0x000004e7) title_pane_t3

0x0002,

0xf24d,	// (0x0000f24d) title_pane_t

0xce75,	// (0x0000ce75) aid_levels_battery_ParamLimits

0xce75,	// (0x0000ce75) aid_levels_battery

0xce91,	// (0x0000ce91) battery_pane_g1_ParamLimits

0xce91,	// (0x0000ce91) battery_pane_g1

0xceae,	// (0x0000ceae) battery_pane_g2_ParamLimits

0xceae,	// (0x0000ceae) battery_pane_g2

0x0001,

0xf35c,	// (0x0000f35c) battery_pane_g_ParamLimits

0xf35c,	// (0x0000f35c) battery_pane_g

0xd210,	// (0x0000d210) uni_indicator_pane_g1

0xd226,	// (0x0000d226) uni_indicator_pane_g2

0xd23c,	// (0x0000d23c) uni_indicator_pane_g3

0x0005,

0xf393,	// (0x0000f393) uni_indicator_pane_g

0x23e1,	// (0x000023e1) navi_icon_pane_ParamLimits

0x23e1,	// (0x000023e1) navi_icon_pane

0x231f,	// (0x0000231f) navi_midp_pane

0x23fd,	// (0x000023fd) navi_navi_pane

0x2407,	// (0x00002407) navi_text_pane_ParamLimits

0x2407,	// (0x00002407) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09b5,	// (0x000009b5) status_small_wait_pane_g2

0x0001,

0xae6e,	// (0x0000ae6e) status_small_wait_pane_g

0x480a,	// (0x0000480a) navi_navi_icon_text_pane

0x4812,	// (0x00004812) navi_navi_pane_g1_ParamLimits

0x4812,	// (0x00004812) navi_navi_pane_g1

0x4824,	// (0x00004824) navi_navi_pane_g2_ParamLimits

0x4824,	// (0x00004824) navi_navi_pane_g2

0x0001,

0xae3c,	// (0x0000ae3c) navi_navi_pane_g_ParamLimits

0xae3c,	// (0x0000ae3c) navi_navi_pane_g

0x4836,	// (0x00004836) navi_navi_tabs_pane

0x483f,	// (0x0000483f) navi_navi_text_pane

0x480a,	// (0x0000480a) navi_navi_volume_pane

0x47e6,	// (0x000047e6) navi_text_pane_t1

0x47da,	// (0x000047da) navi_icon_pane_g1

0x472d,	// (0x0000472d) navi_navi_text_pane_t1

0x471c,	// (0x0000471c) navi_navi_volume_pane_g1

0xd1da,	// (0x0000d1da) volume_small_pane

0xd144,	// (0x0000d144) navi_navi_icon_text_pane_g1

0x468a,	// (0x0000468a) navi_navi_icon_text_pane_t1

0x23fd,	// (0x000023fd) navi_tabs_2_long_pane

0x23fd,	// (0x000023fd) navi_tabs_2_pane

0x23fd,	// (0x000023fd) navi_tabs_3_long_pane

0x23fd,	// (0x000023fd) navi_tabs_3_pane

0x23fd,	// (0x000023fd) navi_tabs_4_pane

0xd124,	// (0x0000d124) tabs_2_active_pane_ParamLimits

0xd124,	// (0x0000d124) tabs_2_active_pane

0xd134,	// (0x0000d134) tabs_2_passive_pane_ParamLimits

0xd134,	// (0x0000d134) tabs_2_passive_pane

0xd0f2,	// (0x0000d0f2) tabs_3_active_pane_ParamLimits

0xd0f2,	// (0x0000d0f2) tabs_3_active_pane

0xd102,	// (0x0000d102) tabs_3_passive_pane_ParamLimits

0xd102,	// (0x0000d102) tabs_3_passive_pane

0xd113,	// (0x0000d113) tabs_3_passive_pane_cp_ParamLimits

0xd113,	// (0x0000d113) tabs_3_passive_pane_cp

0xd0bf,	// (0x0000d0bf) tabs_4_active_pane_ParamLimits

0xd0bf,	// (0x0000d0bf) tabs_4_active_pane

0xd0d0,	// (0x0000d0d0) tabs_4_passive_pane_ParamLimits

0xd0d0,	// (0x0000d0d0) tabs_4_passive_pane

0x458d,	// (0x0000458d) tabs_4_passive_pane_cp_ParamLimits

0x458d,	// (0x0000458d) tabs_4_passive_pane_cp

0xd0e1,	// (0x0000d0e1) tabs_4_passive_pane_cp2_ParamLimits

0xd0e1,	// (0x0000d0e1) tabs_4_passive_pane_cp2

0xd09b,	// (0x0000d09b) tabs_2_long_active_pane_ParamLimits

0xd09b,	// (0x0000d09b) tabs_2_long_active_pane

0xd0ad,	// (0x0000d0ad) tabs_2_long_passive_pane_ParamLimits

0xd0ad,	// (0x0000d0ad) tabs_2_long_passive_pane

0xd05c,	// (0x0000d05c) tabs_3_long_active_pane_ParamLimits

0xd05c,	// (0x0000d05c) tabs_3_long_active_pane

0xd06f,	// (0x0000d06f) tabs_3_long_passive_pane_ParamLimits

0xd06f,	// (0x0000d06f) tabs_3_long_passive_pane

0xd088,	// (0x0000d088) tabs_3_long_passive_pane_cp_ParamLimits

0xd088,	// (0x0000d088) tabs_3_long_passive_pane_cp

0x44b4,	// (0x000044b4) volume_small_pane_g1

0x44bd,	// (0x000044bd) volume_small_pane_g2

0x44c6,	// (0x000044c6) volume_small_pane_g3

0x44cf,	// (0x000044cf) volume_small_pane_g4

0x44d8,	// (0x000044d8) volume_small_pane_g5

0x44e1,	// (0x000044e1) volume_small_pane_g6

0x44ea,	// (0x000044ea) volume_small_pane_g7

0x44f3,	// (0x000044f3) volume_small_pane_g8

0x44fc,	// (0x000044fc) volume_small_pane_g9

0x4505,	// (0x00004505) volume_small_pane_g10

0x0009,

0xae08,	// (0x0000ae08) volume_small_pane_g

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_active_pane_g1

0xb75a,	// (0x0000b75a) tabs_3_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_passive_pane_g1

0xb75a,	// (0x0000b75a) tabs_3_passive_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_active_pane_g1

0xb76c,	// (0x0000b76c) tabs_4_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_1_passive_pane_g1

0xb76c,	// (0x0000b76c) tabs_4_1_passive_pane_t1

0x2ad4,	// (0x00002ad4) list_highlight_pane_cp2

0xd2c5,	// (0x0000d2c5) list_set_pane_ParamLimits

0xd2c5,	// (0x0000d2c5) list_set_pane

0xd35f,	// (0x0000d35f) main_pane_set_t1_ParamLimits

0xd35f,	// (0x0000d35f) main_pane_set_t1

0xd37f,	// (0x0000d37f) main_pane_set_t2_ParamLimits

0xd37f,	// (0x0000d37f) main_pane_set_t2

0xd393,	// (0x0000d393) main_pane_set_t3_ParamLimits

0xd393,	// (0x0000d393) main_pane_set_t3

0xd3a5,	// (0x0000d3a5) main_pane_set_t4_ParamLimits

0xd3a5,	// (0x0000d3a5) main_pane_set_t4

0x0003,

0xf3a0,	// (0x0000f3a0) main_pane_set_t_ParamLimits

0xf3a0,	// (0x0000f3a0) main_pane_set_t

0xd3b7,	// (0x0000d3b7) setting_code_pane

0xd3bf,	// (0x0000d3bf) setting_slider_graphic_pane

0xd3bf,	// (0x0000d3bf) setting_slider_pane

0xd3bf,	// (0x0000d3bf) setting_text_pane

0xd3bf,	// (0x0000d3bf) setting_volume_pane

0x053b,	// (0x0000053b) volume_set_pane

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp

0x0543,	// (0x00000543) setting_slider_pane_t1

0x055c,	// (0x0000055c) setting_slider_pane_t2

0x0576,	// (0x00000576) setting_slider_pane_t3

0x0002,

0xaac1,	// (0x0000aac1) setting_slider_pane_t

0x058e,	// (0x0000058e) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_g1

0x05ad,	// (0x000005ad) setting_slider_graphic_pane_t1

0x05bd,	// (0x000005bd) setting_slider_graphic_pane_t2

0x0001,

0xaac8,	// (0x0000aac8) setting_slider_graphic_pane_t

0x05cd,	// (0x000005cd) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4dec,	// (0x00004dec) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d5,	// (0x000005d5) setting_code_pane_t1

0x05e3,	// (0x000005e3) set_text_pane_t1_ParamLimits

0x05e3,	// (0x000005e3) set_text_pane_t1

0x1476,	// (0x00001476) set_opt_bg_pane_g1

0x147e,	// (0x0000147e) set_opt_bg_pane_g2

0x4dcc,	// (0x00004dcc) set_opt_bg_pane_g3

0x148e,	// (0x0000148e) set_opt_bg_pane_g4

0x1496,	// (0x00001496) set_opt_bg_pane_g5

0x149e,	// (0x0000149e) set_opt_bg_pane_g6

0x4dd4,	// (0x00004dd4) set_opt_bg_pane_g7

0x4ddc,	// (0x00004ddc) set_opt_bg_pane_g8

0x4de4,	// (0x00004de4) set_opt_bg_pane_g9

0x0008,

0xaec5,	// (0x0000aec5) set_opt_bg_pane_g

0x4d5b,	// (0x00004d5b) slider_set_pane_g1

0x4d68,	// (0x00004d68) slider_set_pane_g2

0x0006,

0xaeb6,	// (0x0000aeb6) slider_set_pane_g

0x4bf1,	// (0x00004bf1) volume_set_pane_g1

0x4bf9,	// (0x00004bf9) volume_set_pane_g2

0x4c01,	// (0x00004c01) volume_set_pane_g3

0x4c09,	// (0x00004c09) volume_set_pane_g4

0x4c11,	// (0x00004c11) volume_set_pane_g5

0x4c19,	// (0x00004c19) volume_set_pane_g6

0x4c21,	// (0x00004c21) volume_set_pane_g7

0x4c29,	// (0x00004c29) volume_set_pane_g8

0x4c31,	// (0x00004c31) volume_set_pane_g9

0x4c39,	// (0x00004c39) volume_set_pane_g10

0x0009,

0xae8e,	// (0x0000ae8e) volume_set_pane_g

0xb77e,	// (0x0000b77e) indicator_pane_ParamLimits

0xb77e,	// (0x0000b77e) indicator_pane

0xb7a6,	// (0x0000b7a6) main_idle_pane_g2_ParamLimits

0xb7a6,	// (0x0000b7a6) main_idle_pane_g2

0xb7de,	// (0x0000b7de) main_pane_idle_g1_ParamLimits

0xb7de,	// (0x0000b7de) main_pane_idle_g1

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window_ParamLimits

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window

0xb805,	// (0x0000b805) soft_indicator_pane_ParamLimits

0xb805,	// (0x0000b805) soft_indicator_pane

0xb81f,	// (0x0000b81f) wallpaper_pane_ParamLimits

0xb81f,	// (0x0000b81f) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb831,	// (0x0000b831) indicator_pane_g1_ParamLimits

0xb831,	// (0x0000b831) indicator_pane_g1

0x5367,	// (0x00005367) navi_navi_icon_text_pane_srt_g1

0x0690,	// (0x00000690) soft_indicator_pane_t1

0x06aa,	// (0x000006aa) aid_ps_area_pane

0xb847,	// (0x0000b847) aid_ps_clock_pane

0x06c9,	// (0x000006c9) aid_ps_indicator_pane

0x06d5,	// (0x000006d5) indicator_ps_pane_ParamLimits

0x06d5,	// (0x000006d5) indicator_ps_pane

0x06e4,	// (0x000006e4) power_save_pane_g1_ParamLimits

0x06e4,	// (0x000006e4) power_save_pane_g1

0x06f0,	// (0x000006f0) power_save_pane_g2_ParamLimits

0x06f0,	// (0x000006f0) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06aa,	// (0x000006aa) aid_ps_area_pane_ParamLimits

0x0001,

0xaacd,	// (0x0000aacd) power_save_pane_g_ParamLimits

0xaacd,	// (0x0000aacd) power_save_pane_g

0x06fe,	// (0x000006fe) power_save_pane_t1_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_t1

0xb847,	// (0x0000b847) aid_ps_clock_pane_ParamLimits

0x06c9,	// (0x000006c9) aid_ps_indicator_pane_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4

0x0001,

0xaad2,	// (0x0000aad2) power_save_pane_t_ParamLimits

0xaad2,	// (0x0000aad2) power_save_pane_t

0x073a,	// (0x0000073a) power_save_t3_ParamLimits

0x073a,	// (0x0000073a) power_save_t3

0x0725,	// (0x00000725) power_save_t2_ParamLimits

0x0725,	// (0x00000725) power_save_t2

0x074f,	// (0x0000074f) indicator_ps_pane_g1

0xb855,	// (0x0000b855) ai_gene_pane_ParamLimits

0xb855,	// (0x0000b855) ai_gene_pane

0xb86c,	// (0x0000b86c) ai_links_pane_ParamLimits

0xb86c,	// (0x0000b86c) ai_links_pane

0xb884,	// (0x0000b884) indicator_pane_cp1_ParamLimits

0xb884,	// (0x0000b884) indicator_pane_cp1

0xb893,	// (0x0000b893) main_pane_idle_g1_cp_ParamLimits

0xb893,	// (0x0000b893) main_pane_idle_g1_cp

0x0788,	// (0x00000788) popup_ai_links_title_window

0xb8ab,	// (0x0000b8ab) soft_indicator_pane_cp1_ParamLimits

0xb8ab,	// (0x0000b8ab) soft_indicator_pane_cp1

0x4ad1,	// (0x00004ad1) ai_links_pane_g1

0x4ada,	// (0x00004ada) grid_ai_links_pane

0xd207,	// (0x0000d207) ai_gene_pane_1

0x4abf,	// (0x00004abf) ai_gene_pane_2

0x4ac8,	// (0x00004ac8) list_highlight_pane_cp4

0xd1e3,	// (0x0000d1e3) cell_ai_link_pane_ParamLimits

0xd1e3,	// (0x0000d1e3) cell_ai_link_pane

0x4a90,	// (0x00004a90) cell_ai_link_pane_g1

0x09b5,	// (0x000009b5) cell_ai_link_pane_g2

0x0001,

0xae69,	// (0x0000ae69) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07ab,	// (0x000007ab) popup_ai_links_title_window_t1

0x49e0,	// (0x000049e0) ai_gene_pane_1_g1_ParamLimits

0x49e0,	// (0x000049e0) ai_gene_pane_1_g1

0x49ec,	// (0x000049ec) ai_gene_pane_1_g2_ParamLimits

0x49ec,	// (0x000049ec) ai_gene_pane_1_g2

0x0001,

0xae5f,	// (0x0000ae5f) ai_gene_pane_1_g_ParamLimits

0xae5f,	// (0x0000ae5f) ai_gene_pane_1_g

0x49f9,	// (0x000049f9) ai_gene_pane_1_t1_ParamLimits

0x49f9,	// (0x000049f9) ai_gene_pane_1_t1

0x4a2d,	// (0x00004a2d) grid_ai_soft_ind_pane

0x49cb,	// (0x000049cb) ai_gene_pane_2_t1_ParamLimits

0x49cb,	// (0x000049cb) ai_gene_pane_2_t1

0xb8bf,	// (0x0000b8bf) main_pane_empty_t1_ParamLimits

0xb8bf,	// (0x0000b8bf) main_pane_empty_t1

0xb8d7,	// (0x0000b8d7) main_pane_empty_t2_ParamLimits

0xb8d7,	// (0x0000b8d7) main_pane_empty_t2

0xb8ec,	// (0x0000b8ec) main_pane_empty_t3_ParamLimits

0xb8ec,	// (0x0000b8ec) main_pane_empty_t3

0xb8fe,	// (0x0000b8fe) main_pane_empty_t4_ParamLimits

0xb8fe,	// (0x0000b8fe) main_pane_empty_t4

0xb910,	// (0x0000b910) main_pane_empty_t5_ParamLimits

0xb910,	// (0x0000b910) main_pane_empty_t5

0x0004,

0xf254,	// (0x0000f254) main_pane_empty_t_ParamLimits

0xf254,	// (0x0000f254) main_pane_empty_t

0x1555,	// (0x00001555) bg_popup_window_pane_ParamLimits

0x1555,	// (0x00001555) bg_popup_window_pane

0x473b,	// (0x0000473b) find_popup_pane_cp2_ParamLimits

0x473b,	// (0x0000473b) find_popup_pane_cp2

0x4747,	// (0x00004747) heading_pane_ParamLimits

0x4747,	// (0x00004747) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd15b,	// (0x0000d15b) bg_popup_window_pane_g1_ParamLimits

0xd15b,	// (0x0000d15b) bg_popup_window_pane_g1

0xd16a,	// (0x0000d16a) bg_popup_window_pane_g2_ParamLimits

0xd16a,	// (0x0000d16a) bg_popup_window_pane_g2

0xd176,	// (0x0000d176) bg_popup_window_pane_g3_ParamLimits

0xd176,	// (0x0000d176) bg_popup_window_pane_g3

0xd182,	// (0x0000d182) bg_popup_window_pane_g4_ParamLimits

0xd182,	// (0x0000d182) bg_popup_window_pane_g4

0xd191,	// (0x0000d191) bg_popup_window_pane_g5_ParamLimits

0xd191,	// (0x0000d191) bg_popup_window_pane_g5

0xd1a1,	// (0x0000d1a1) bg_popup_window_pane_g6_ParamLimits

0xd1a1,	// (0x0000d1a1) bg_popup_window_pane_g6

0xd1ad,	// (0x0000d1ad) bg_popup_window_pane_g7_ParamLimits

0xd1ad,	// (0x0000d1ad) bg_popup_window_pane_g7

0xd1bc,	// (0x0000d1bc) bg_popup_window_pane_g8_ParamLimits

0xd1bc,	// (0x0000d1bc) bg_popup_window_pane_g8

0xd1cb,	// (0x0000d1cb) bg_popup_window_pane_g9_ParamLimits

0xd1cb,	// (0x0000d1cb) bg_popup_window_pane_g9

0x4710,	// (0x00004710) bg_popup_window_pane_g10_ParamLimits

0x4710,	// (0x00004710) bg_popup_window_pane_g10

0x0009,

0xf37e,	// (0x0000f37e) bg_popup_window_pane_g_ParamLimits

0xf37e,	// (0x0000f37e) bg_popup_window_pane_g

0x4639,	// (0x00004639) bg_popup_heading_pane_ParamLimits

0x4639,	// (0x00004639) bg_popup_heading_pane

0x52aa,	// (0x000052aa) tabs_4_passive_pane_cp_srt_ParamLimits

0x52aa,	// (0x000052aa) tabs_4_passive_pane_cp_srt

0x52bc,	// (0x000052bc) tabs_4_passive_pane_srt_ParamLimits

0x464d,	// (0x0000464d) heading_pane_g2

0x52bc,	// (0x000052bc) tabs_4_passive_pane_srt

0x3791,	// (0x00003791) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3791,	// (0x00003791) bg_passive_tab_pane_cp3_srt

0x4655,	// (0x00004655) heading_pane_t1_ParamLimits

0x4655,	// (0x00004655) heading_pane_t1

0x466c,	// (0x0000466c) heading_pane_t2_ParamLimits

0x466c,	// (0x0000466c) heading_pane_t2

0x0001,

0xae22,	// (0x0000ae22) heading_pane_t_ParamLimits

0xae22,	// (0x0000ae22) heading_pane_t

0x4019,	// (0x00004019) bg_popup_heading_pane_g1

0x40c8,	// (0x000040c8) bg_popup_heading_pane_g2

0x40d2,	// (0x000040d2) bg_popup_heading_pane_g3

0x40dc,	// (0x000040dc) bg_popup_heading_pane_g4

0x40e6,	// (0x000040e6) bg_popup_heading_pane_g5

0x40f0,	// (0x000040f0) bg_popup_heading_pane_g6

0x40f8,	// (0x000040f8) bg_popup_heading_pane_g7

0x4100,	// (0x00004100) bg_popup_heading_pane_g8

0x410a,	// (0x0000410a) bg_popup_heading_pane_g9

0x0008,

0xadde,	// (0x0000adde) bg_popup_heading_pane_g

0x35f7,	// (0x000035f7) bg_popup_sub_pane_g1

0x35ff,	// (0x000035ff) bg_popup_sub_pane_g2

0x3607,	// (0x00003607) bg_popup_sub_pane_g3

0x360f,	// (0x0000360f) bg_popup_sub_pane_g4

0x3617,	// (0x00003617) bg_popup_sub_pane_g5

0x361f,	// (0x0000361f) bg_popup_sub_pane_g6

0x3627,	// (0x00003627) bg_popup_sub_pane_g7

0x362f,	// (0x0000362f) bg_popup_sub_pane_g8

0x3637,	// (0x00003637) bg_popup_sub_pane_g9

0x0008,

0xadb8,	// (0x0000adb8) bg_popup_sub_pane_g

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5_ParamLimits

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5

0x083b,	// (0x0000083b) popup_note_window_g1_ParamLimits

0x083b,	// (0x0000083b) popup_note_window_g1

0x0847,	// (0x00000847) popup_note_window_t1_ParamLimits

0x0847,	// (0x00000847) popup_note_window_t1

0x0859,	// (0x00000859) popup_note_window_t2_ParamLimits

0x0859,	// (0x00000859) popup_note_window_t2

0x086b,	// (0x0000086b) popup_note_window_t3_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t3

0x087d,	// (0x0000087d) popup_note_window_t4_ParamLimits

0x087d,	// (0x0000087d) popup_note_window_t4

0x08a5,	// (0x000008a5) popup_note_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note_window_t5

0x0004,

0xaae2,	// (0x0000aae2) popup_note_window_t_ParamLimits

0xaae2,	// (0x0000aae2) popup_note_window_t

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6

0x3f8d,	// (0x00003f8d) popup_note_image_window_g1_ParamLimits

0x3f8d,	// (0x00003f8d) popup_note_image_window_g1

0x3f99,	// (0x00003f99) popup_note_image_window_g2_ParamLimits

0x3f99,	// (0x00003f99) popup_note_image_window_g2

0x0001,

0xadac,	// (0x0000adac) popup_note_image_window_g_ParamLimits

0xadac,	// (0x0000adac) popup_note_image_window_g

0x3fb2,	// (0x00003fb2) popup_note_image_window_t1_ParamLimits

0x3fb2,	// (0x00003fb2) popup_note_image_window_t1

0x3fcb,	// (0x00003fcb) popup_note_image_window_t2_ParamLimits

0x3fcb,	// (0x00003fcb) popup_note_image_window_t2

0x3fe4,	// (0x00003fe4) popup_note_image_window_t3_ParamLimits

0x3fe4,	// (0x00003fe4) popup_note_image_window_t3

0x0002,

0xadb1,	// (0x0000adb1) popup_note_image_window_t_ParamLimits

0xadb1,	// (0x0000adb1) popup_note_image_window_t

0x3e4e,	// (0x00003e4e) bg_popup_window_pane_cp7_ParamLimits

0x3e4e,	// (0x00003e4e) bg_popup_window_pane_cp7

0x3e7e,	// (0x00003e7e) popup_note_wait_window_g1_ParamLimits

0x3e7e,	// (0x00003e7e) popup_note_wait_window_g1

0x3e8a,	// (0x00003e8a) popup_note_wait_window_g2_ParamLimits

0x3e8a,	// (0x00003e8a) popup_note_wait_window_g2

0x0002,

0xad9a,	// (0x0000ad9a) popup_note_wait_window_g_ParamLimits

0xad9a,	// (0x0000ad9a) popup_note_wait_window_g

0x3ea2,	// (0x00003ea2) popup_note_wait_window_t1_ParamLimits

0x3ea2,	// (0x00003ea2) popup_note_wait_window_t1

0x3ec9,	// (0x00003ec9) popup_note_wait_window_t2_ParamLimits

0x3ec9,	// (0x00003ec9) popup_note_wait_window_t2

0x3ee6,	// (0x00003ee6) popup_note_wait_window_t3_ParamLimits

0x3ee6,	// (0x00003ee6) popup_note_wait_window_t3

0x3ef9,	// (0x00003ef9) popup_note_wait_window_t4_ParamLimits

0x3ef9,	// (0x00003ef9) popup_note_wait_window_t4

0x0004,

0xada1,	// (0x0000ada1) popup_note_wait_window_t_ParamLimits

0xada1,	// (0x0000ada1) popup_note_wait_window_t

0x3f1e,	// (0x00003f1e) wait_bar_pane_ParamLimits

0x3f1e,	// (0x00003f1e) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xac61,	// (0x0000ac61) wait_anim_pane_g

0x3df2,	// (0x00003df2) wait_border_pane_g1

0x3dfd,	// (0x00003dfd) wait_border_pane_g2

0x3e06,	// (0x00003e06) wait_border_pane_g3

0x0002,

0xad93,	// (0x0000ad93) wait_border_pane_g

0x3c62,	// (0x00003c62) bg_popup_window_pane_cp16_ParamLimits

0x3c62,	// (0x00003c62) bg_popup_window_pane_cp16

0x3d62,	// (0x00003d62) indicator_popup_pane_cp4_ParamLimits

0x3d62,	// (0x00003d62) indicator_popup_pane_cp4

0x3d76,	// (0x00003d76) popup_query_data_window_t1_ParamLimits

0x3d76,	// (0x00003d76) popup_query_data_window_t1

0x3d88,	// (0x00003d88) popup_query_data_window_t2_ParamLimits

0x3d88,	// (0x00003d88) popup_query_data_window_t2

0x3da1,	// (0x00003da1) popup_query_data_window_t3_ParamLimits

0x3da1,	// (0x00003da1) popup_query_data_window_t3

0x0002,

0xad8c,	// (0x0000ad8c) popup_query_data_window_t_ParamLimits

0xad8c,	// (0x0000ad8c) popup_query_data_window_t

0x3dbb,	// (0x00003dbb) query_popup_data_pane_ParamLimits

0x3dbb,	// (0x00003dbb) query_popup_data_pane

0x3dcf,	// (0x00003dcf) query_popup_data_pane_cp1_ParamLimits

0x3dcf,	// (0x00003dcf) query_popup_data_pane_cp1

0x3c62,	// (0x00003c62) bg_popup_window_pane_cp10_ParamLimits

0x3c62,	// (0x00003c62) bg_popup_window_pane_cp10

0x3c94,	// (0x00003c94) indicator_popup_pane_ParamLimits

0x3c94,	// (0x00003c94) indicator_popup_pane

0x3cb6,	// (0x00003cb6) popup_query_code_window_t1_ParamLimits

0x3cb6,	// (0x00003cb6) popup_query_code_window_t1

0x3cd0,	// (0x00003cd0) popup_query_code_window_t2_ParamLimits

0x3cd0,	// (0x00003cd0) popup_query_code_window_t2

0x3d19,	// (0x00003d19) popup_query_code_window_t3_ParamLimits

0x3d19,	// (0x00003d19) popup_query_code_window_t3

0x0002,

0xad85,	// (0x0000ad85) popup_query_code_window_t_ParamLimits

0xad85,	// (0x0000ad85) popup_query_code_window_t

0x3d48,	// (0x00003d48) query_popup_pane_ParamLimits

0x3d48,	// (0x00003d48) query_popup_pane

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1_ParamLimits

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2_ParamLimits

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2

0x090d,	// (0x0000090d) popup_query_data_code_window_g1_ParamLimits

0x090d,	// (0x0000090d) popup_query_data_code_window_g1

0x0920,	// (0x00000920) popup_query_data_code_window_t1_ParamLimits

0x0920,	// (0x00000920) popup_query_data_code_window_t1

0x0932,	// (0x00000932) popup_query_data_code_window_t2_ParamLimits

0x0932,	// (0x00000932) popup_query_data_code_window_t2

0x0944,	// (0x00000944) popup_query_data_code_window_t3_ParamLimits

0x0944,	// (0x00000944) popup_query_data_code_window_t3

0x095a,	// (0x0000095a) popup_query_data_code_window_t4_ParamLimits

0x095a,	// (0x0000095a) popup_query_data_code_window_t4

0x0003,

0xaaed,	// (0x0000aaed) popup_query_data_code_window_t_ParamLimits

0xaaed,	// (0x0000aaed) popup_query_data_code_window_t

0x239f,	// (0x0000239f) list_single_midp_graphic_pane_g3

0x0972,	// (0x00000972) query_popup_data_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c5a,	// (0x00003c5a) heading_pane_cp5

0x0a70,	// (0x00000a70) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0998,	// (0x00000998) query_popup_pane_t1

0x09a6,	// (0x000009a6) list_popup_info_pane_ParamLimits

0x09a6,	// (0x000009a6) list_popup_info_pane

0x09b5,	// (0x000009b5) listscroll_popup_info_pane_g1

0x09bd,	// (0x000009bd) scroll_pane_cp7

0x09c7,	// (0x000009c7) popup_info_list_pane_t1_ParamLimits

0x09c7,	// (0x000009c7) popup_info_list_pane_t1

0x09e1,	// (0x000009e1) popup_info_list_pane_t2_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t2

0x0001,

0xaaf6,	// (0x0000aaf6) popup_info_list_pane_t_ParamLimits

0xaaf6,	// (0x0000aaf6) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x539e,	// (0x0000539e) find_popup_pane

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3

0x09fb,	// (0x000009fb) heading_pane_cp3

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb972,	// (0x0000b972) heading_pane_cp4

0x0a70,	// (0x00000a70) listscroll_popup_colour_pane

0x0a78,	// (0x00000a78) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a78,	// (0x00000a78) cell_large_graphic_colour_none_popup_pane

0xb97a,	// (0x0000b97a) grid_large_graphic_colour_popup_pane_ParamLimits

0xb97a,	// (0x0000b97a) grid_large_graphic_colour_popup_pane

0x0ab4,	// (0x00000ab4) listscroll_popup_colour_pane_g1_ParamLimits

0x0ab4,	// (0x00000ab4) listscroll_popup_colour_pane_g1

0x0acb,	// (0x00000acb) listscroll_popup_colour_pane_g2_ParamLimits

0x0acb,	// (0x00000acb) listscroll_popup_colour_pane_g2

0x0ae2,	// (0x00000ae2) listscroll_popup_colour_pane_g3_ParamLimits

0x0ae2,	// (0x00000ae2) listscroll_popup_colour_pane_g3

0xb99e,	// (0x0000b99e) listscroll_popup_colour_pane_g4_ParamLimits

0xb99e,	// (0x0000b99e) listscroll_popup_colour_pane_g4

0x0003,

0xf25f,	// (0x0000f25f) listscroll_popup_colour_pane_g_ParamLimits

0xf25f,	// (0x0000f25f) listscroll_popup_colour_pane_g

0x0b01,	// (0x00000b01) scroll_pane_cp6_ParamLimits

0x0b01,	// (0x00000b01) scroll_pane_cp6

0xb9ad,	// (0x0000b9ad) cell_large_graphic_colour_popup_pane_ParamLimits

0xb9ad,	// (0x0000b9ad) cell_large_graphic_colour_popup_pane

0x0b32,	// (0x00000b32) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b41,	// (0x00000b41) cell_large_graphic_colour_popup_pane_g1

0x0b49,	// (0x00000b49) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xab04,	// (0x0000ab04) cell_large_graphic_colour_popup_pane_g

0x0b51,	// (0x00000b51) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp4

0x0b62,	// (0x00000b62) bg_popup_window_pane_cp8_ParamLimits

0x0b62,	// (0x00000b62) bg_popup_window_pane_cp8

0x0b7d,	// (0x00000b7d) popup_snote_single_text_window_g1_ParamLimits

0x0b7d,	// (0x00000b7d) popup_snote_single_text_window_g1

0x0b8f,	// (0x00000b8f) popup_snote_single_text_window_t1_ParamLimits

0x0b8f,	// (0x00000b8f) popup_snote_single_text_window_t1

0x0ba2,	// (0x00000ba2) popup_snote_single_text_window_t2_ParamLimits

0x0ba2,	// (0x00000ba2) popup_snote_single_text_window_t2

0x0bb5,	// (0x00000bb5) popup_snote_single_text_window_t3_ParamLimits

0x0bb5,	// (0x00000bb5) popup_snote_single_text_window_t3

0x0bee,	// (0x00000bee) popup_snote_single_text_window_t4_ParamLimits

0x0bee,	// (0x00000bee) popup_snote_single_text_window_t4

0x0c22,	// (0x00000c22) popup_snote_single_text_window_t5_ParamLimits

0x0c22,	// (0x00000c22) popup_snote_single_text_window_t5

0x0004,

0xab09,	// (0x0000ab09) popup_snote_single_text_window_t_ParamLimits

0xab09,	// (0x0000ab09) popup_snote_single_text_window_t

0x0c51,	// (0x00000c51) bg_popup_window_pane_cp9_ParamLimits

0x0c51,	// (0x00000c51) bg_popup_window_pane_cp9

0x0b7d,	// (0x00000b7d) popup_snote_single_graphic_window_g1_ParamLimits

0x0b7d,	// (0x00000b7d) popup_snote_single_graphic_window_g1

0x0c5f,	// (0x00000c5f) popup_snote_single_graphic_window_g2_ParamLimits

0x0c5f,	// (0x00000c5f) popup_snote_single_graphic_window_g2

0x0001,

0xab14,	// (0x0000ab14) popup_snote_single_graphic_window_g_ParamLimits

0xab14,	// (0x0000ab14) popup_snote_single_graphic_window_g

0x0c6b,	// (0x00000c6b) popup_snote_single_graphic_window_t1_ParamLimits

0x0c6b,	// (0x00000c6b) popup_snote_single_graphic_window_t1

0x0c7e,	// (0x00000c7e) popup_snote_single_graphic_window_t2_ParamLimits

0x0c7e,	// (0x00000c7e) popup_snote_single_graphic_window_t2

0x0c91,	// (0x00000c91) popup_snote_single_graphic_window_t3_ParamLimits

0x0c91,	// (0x00000c91) popup_snote_single_graphic_window_t3

0x0cca,	// (0x00000cca) popup_snote_single_graphic_window_t4_ParamLimits

0x0cca,	// (0x00000cca) popup_snote_single_graphic_window_t4

0x0cfe,	// (0x00000cfe) popup_snote_single_graphic_window_t5_ParamLimits

0x0cfe,	// (0x00000cfe) popup_snote_single_graphic_window_t5

0x0004,

0xab19,	// (0x0000ab19) popup_snote_single_graphic_window_t_ParamLimits

0xab19,	// (0x0000ab19) popup_snote_single_graphic_window_t

0x522a,	// (0x0000522a) grid_graphic_popup_pane_ParamLimits

0x522a,	// (0x0000522a) grid_graphic_popup_pane

0x5252,	// (0x00005252) listscroll_popup_graphic_pane_g1_ParamLimits

0x5252,	// (0x00005252) listscroll_popup_graphic_pane_g1

0xd509,	// (0x0000d509) listscroll_popup_graphic_pane_g2_ParamLimits

0xd509,	// (0x0000d509) listscroll_popup_graphic_pane_g2

0x0001,

0xf3c3,	// (0x0000f3c3) listscroll_popup_graphic_pane_g_ParamLimits

0xf3c3,	// (0x0000f3c3) listscroll_popup_graphic_pane_g

0x527a,	// (0x0000527a) scroll_pane_cp5

0xd4c4,	// (0x0000d4c4) cell_graphic_popup_pane_ParamLimits

0xd4c4,	// (0x0000d4c4) cell_graphic_popup_pane

0x51ab,	// (0x000051ab) cell_graphic_popup_pane_g1

0x51b3,	// (0x000051b3) cell_graphic_popup_pane_g2

0x0b51,	// (0x00000b51) cell_graphic_popup_pane_g3

0x0002,

0xaefb,	// (0x0000aefb) cell_graphic_popup_pane_g

0x51bc,	// (0x000051bc) cell_graphic_popup_pane_t2

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp3

0x0d3f,	// (0x00000d3f) list_gen_pane_ParamLimits

0x0d3f,	// (0x00000d3f) list_gen_pane

0x0d71,	// (0x00000d71) scroll_pane

0xd47f,	// (0x0000d47f) bg_list_pane_g1_ParamLimits

0xd47f,	// (0x0000d47f) bg_list_pane_g1

0x5128,	// (0x00005128) bg_list_pane_g2_ParamLimits

0x5128,	// (0x00005128) bg_list_pane_g2

0x513b,	// (0x0000513b) bg_list_pane_g3_ParamLimits

0x513b,	// (0x0000513b) bg_list_pane_g3

0x514d,	// (0x0000514d) bg_list_pane_g4_ParamLimits

0x514d,	// (0x0000514d) bg_list_pane_g4

0xd49a,	// (0x0000d49a) bg_list_pane_g5_ParamLimits

0xd49a,	// (0x0000d49a) bg_list_pane_g5

0x0004,

0xf3b8,	// (0x0000f3b8) bg_list_pane_g_ParamLimits

0xf3b8,	// (0x0000f3b8) bg_list_pane_g

0xd40e,	// (0x0000d40e) list_double2_graphic_large_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double2_graphic_large_graphic_pane

0xd40e,	// (0x0000d40e) list_double2_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double2_graphic_pane

0xd40e,	// (0x0000d40e) list_double2_large_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double2_large_graphic_pane

0xd421,	// (0x0000d421) list_double2_pane_ParamLimits

0xd421,	// (0x0000d421) list_double2_pane

0xd40e,	// (0x0000d40e) list_double_graphic_heading_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_graphic_heading_pane

0xd40e,	// (0x0000d40e) list_double_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_graphic_pane

0xd40e,	// (0x0000d40e) list_double_heading_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_heading_pane

0xd40e,	// (0x0000d40e) list_double_large_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_large_graphic_pane

0xd40e,	// (0x0000d40e) list_double_number_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_number_pane

0xd40e,	// (0x0000d40e) list_double_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_pane

0xd40e,	// (0x0000d40e) list_double_time_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_double_time_pane

0xd40e,	// (0x0000d40e) list_setting_number_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_setting_number_pane

0xd40e,	// (0x0000d40e) list_setting_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_setting_pane

0xd433,	// (0x0000d433) list_single_2graphic_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_2graphic_pane

0xd433,	// (0x0000d433) list_single_graphic_heading_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_graphic_heading_pane

0xd433,	// (0x0000d433) list_single_graphic_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_graphic_pane

0xd433,	// (0x0000d433) list_single_heading_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_heading_pane

0xd40e,	// (0x0000d40e) list_single_large_graphic_pane_ParamLimits

0xd40e,	// (0x0000d40e) list_single_large_graphic_pane

0xd433,	// (0x0000d433) list_single_number_heading_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_number_heading_pane

0xd433,	// (0x0000d433) list_single_number_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_number_pane

0xd433,	// (0x0000d433) list_single_pane_ParamLimits

0xd433,	// (0x0000d433) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0db1,	// (0x00000db1) list_single_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_pane_g1

0x0dbd,	// (0x00000dbd) list_single_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_pane_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_pane_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_pane_g

0x4fa1,	// (0x00004fa1) list_single_pane_t1_ParamLimits

0x4fa1,	// (0x00004fa1) list_single_pane_t1

0x0db1,	// (0x00000db1) list_single_number_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_pane_g1

0x0dbd,	// (0x00000dbd) list_single_number_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_pane_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_number_pane_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_number_pane_g

0x3585,	// (0x00003585) list_single_number_pane_t1_ParamLimits

0x3585,	// (0x00003585) list_single_number_pane_t1

0x4cd9,	// (0x00004cd9) list_single_number_pane_t2_ParamLimits

0x4cd9,	// (0x00004cd9) list_single_number_pane_t2

0x0001,

0xaeb1,	// (0x0000aeb1) list_single_number_pane_t_ParamLimits

0xaeb1,	// (0x0000aeb1) list_single_number_pane_t

0x0da5,	// (0x00000da5) list_single_graphic_pane_g1_ParamLimits

0x0da5,	// (0x00000da5) list_single_graphic_pane_g1

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2

0x0dbd,	// (0x00000dbd) list_single_graphic_pane_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_pane_g3

0x0002,

0xab24,	// (0x0000ab24) list_single_graphic_pane_g_ParamLimits

0xab24,	// (0x0000ab24) list_single_graphic_pane_g

0x0dc9,	// (0x00000dc9) list_single_graphic_pane_t1_ParamLimits

0x0dc9,	// (0x00000dc9) list_single_graphic_pane_t1

0x0db1,	// (0x00000db1) list_single_heading_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_heading_pane_g1

0x0dbd,	// (0x00000dbd) list_single_heading_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_heading_pane_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_heading_pane_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_heading_pane_t1

0x0df5,	// (0x00000df5) list_single_heading_pane_t2_ParamLimits

0x0df5,	// (0x00000df5) list_single_heading_pane_t2

0x0001,

0xab30,	// (0x0000ab30) list_single_heading_pane_t_ParamLimits

0xab30,	// (0x0000ab30) list_single_heading_pane_t

0x0db1,	// (0x00000db1) list_single_number_heading_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_heading_pane_g1

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_number_heading_pane_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_number_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_number_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_number_heading_pane_t1

0x0e07,	// (0x00000e07) list_single_number_heading_pane_t2_ParamLimits

0x0e07,	// (0x00000e07) list_single_number_heading_pane_t2

0x0e19,	// (0x00000e19) list_single_number_heading_pane_t3_ParamLimits

0x0e19,	// (0x00000e19) list_single_number_heading_pane_t3

0x0002,

0xab35,	// (0x0000ab35) list_single_number_heading_pane_t_ParamLimits

0xab35,	// (0x0000ab35) list_single_number_heading_pane_t

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_g1

0xb9d6,	// (0x0000b9d6) list_single_graphic_heading_pane_g4_ParamLimits

0xb9d6,	// (0x0000b9d6) list_single_graphic_heading_pane_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_g5

0x0002,

0xf268,	// (0x0000f268) list_single_graphic_heading_pane_g_ParamLimits

0xf268,	// (0x0000f268) list_single_graphic_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_graphic_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_graphic_heading_pane_t1

0x0e48,	// (0x00000e48) list_single_graphic_heading_pane_t2_ParamLimits

0x0e48,	// (0x00000e48) list_single_graphic_heading_pane_t2

0x0001,

0xab43,	// (0x0000ab43) list_single_graphic_heading_pane_t_ParamLimits

0xab43,	// (0x0000ab43) list_single_graphic_heading_pane_t

0x59c3,	// (0x000059c3) list_single_large_graphic_pane_g1_ParamLimits

0x59c3,	// (0x000059c3) list_single_large_graphic_pane_g1

0x59cf,	// (0x000059cf) list_single_large_graphic_pane_g2_ParamLimits

0x59cf,	// (0x000059cf) list_single_large_graphic_pane_g2

0x59db,	// (0x000059db) list_single_large_graphic_pane_g3_ParamLimits

0x59db,	// (0x000059db) list_single_large_graphic_pane_g3

0x0002,

0xafa0,	// (0x0000afa0) list_single_large_graphic_pane_g_ParamLimits

0xafa0,	// (0x0000afa0) list_single_large_graphic_pane_g

0x3dfd,	// (0x00003dfd) wait_border_pane_g2_copy1

0x0e7e,	// (0x00000e7e) list_single_large_graphic_pane_g4_cp2

0x59e7,	// (0x000059e7) list_single_large_graphic_pane_t1_ParamLimits

0x59e7,	// (0x000059e7) list_single_large_graphic_pane_t1

0x2393,	// (0x00002393) list_double_pane_g1_ParamLimits

0x2393,	// (0x00002393) list_double_pane_g1

0xb9e7,	// (0x0000b9e7) list_double_pane_g2_ParamLimits

0xb9e7,	// (0x0000b9e7) list_double_pane_g2

0x0001,

0xf26f,	// (0x0000f26f) list_double_pane_g_ParamLimits

0xf26f,	// (0x0000f26f) list_double_pane_g

0xb9f3,	// (0x0000b9f3) list_double_pane_t1_ParamLimits

0xb9f3,	// (0x0000b9f3) list_double_pane_t1

0xba09,	// (0x0000ba09) list_double_pane_t2_ParamLimits

0xba09,	// (0x0000ba09) list_double_pane_t2

0x0001,

0xf274,	// (0x0000f274) list_double_pane_t_ParamLimits

0xf274,	// (0x0000f274) list_double_pane_t

0xba1b,	// (0x0000ba1b) list_double2_pane_g1_ParamLimits

0xba1b,	// (0x0000ba1b) list_double2_pane_g1

0x0ea8,	// (0x00000ea8) list_double2_pane_g2_ParamLimits

0x0ea8,	// (0x00000ea8) list_double2_pane_g2

0x0001,

0xf279,	// (0x0000f279) list_double2_pane_g_ParamLimits

0xf279,	// (0x0000f279) list_double2_pane_g

0x0eb4,	// (0x00000eb4) list_double2_pane_t1_ParamLimits

0x0eb4,	// (0x00000eb4) list_double2_pane_t1

0xba2c,	// (0x0000ba2c) list_double2_pane_t2_ParamLimits

0xba2c,	// (0x0000ba2c) list_double2_pane_t2

0x0001,

0xf27e,	// (0x0000f27e) list_double2_pane_t_ParamLimits

0xf27e,	// (0x0000f27e) list_double2_pane_t

0x2393,	// (0x00002393) list_double_number_pane_g1_ParamLimits

0x2393,	// (0x00002393) list_double_number_pane_g1

0xb9e7,	// (0x0000b9e7) list_double_number_pane_g2_ParamLimits

0xb9e7,	// (0x0000b9e7) list_double_number_pane_g2

0x0001,

0xf26f,	// (0x0000f26f) list_double_number_pane_g_ParamLimits

0xf26f,	// (0x0000f26f) list_double_number_pane_g

0xba3e,	// (0x0000ba3e) list_double_number_pane_t1_ParamLimits

0xba3e,	// (0x0000ba3e) list_double_number_pane_t1

0xba50,	// (0x0000ba50) list_double_number_pane_t2_ParamLimits

0xba50,	// (0x0000ba50) list_double_number_pane_t2

0xba66,	// (0x0000ba66) list_double_number_pane_t3_ParamLimits

0xba66,	// (0x0000ba66) list_double_number_pane_t3

0x0002,

0xf283,	// (0x0000f283) list_double_number_pane_t_ParamLimits

0xf283,	// (0x0000f283) list_double_number_pane_t

0x4480,	// (0x00004480) list_double_graphic_pane_g1_ParamLimits

0x4480,	// (0x00004480) list_double_graphic_pane_g1

0xba78,	// (0x0000ba78) list_double_graphic_pane_g2_ParamLimits

0xba78,	// (0x0000ba78) list_double_graphic_pane_g2

0xba87,	// (0x0000ba87) list_double_graphic_pane_g3_ParamLimits

0xba87,	// (0x0000ba87) list_double_graphic_pane_g3

0x0003,

0xf28a,	// (0x0000f28a) list_double_graphic_pane_g_ParamLimits

0xf28a,	// (0x0000f28a) list_double_graphic_pane_g

0xba9f,	// (0x0000ba9f) list_double_graphic_pane_t1_ParamLimits

0xba9f,	// (0x0000ba9f) list_double_graphic_pane_t1

0xbab5,	// (0x0000bab5) list_double_graphic_pane_t2_ParamLimits

0xbab5,	// (0x0000bab5) list_double_graphic_pane_t2

0x0001,

0xf293,	// (0x0000f293) list_double_graphic_pane_t_ParamLimits

0xf293,	// (0x0000f293) list_double_graphic_pane_t

0xbac7,	// (0x0000bac7) list_double2_graphic_pane_g1_ParamLimits

0xbac7,	// (0x0000bac7) list_double2_graphic_pane_g1

0xbad3,	// (0x0000bad3) list_double2_graphic_pane_g2_ParamLimits

0xbad3,	// (0x0000bad3) list_double2_graphic_pane_g2

0xbadf,	// (0x0000badf) list_double2_graphic_pane_g3_ParamLimits

0xbadf,	// (0x0000badf) list_double2_graphic_pane_g3

0x0002,

0xf298,	// (0x0000f298) list_double2_graphic_pane_g_ParamLimits

0xf298,	// (0x0000f298) list_double2_graphic_pane_g

0xbaeb,	// (0x0000baeb) list_double2_graphic_pane_t1_ParamLimits

0xbaeb,	// (0x0000baeb) list_double2_graphic_pane_t1

0xbb01,	// (0x0000bb01) list_double2_graphic_pane_t2_ParamLimits

0xbb01,	// (0x0000bb01) list_double2_graphic_pane_t2

0x0001,

0xf29f,	// (0x0000f29f) list_double2_graphic_pane_t_ParamLimits

0xf29f,	// (0x0000f29f) list_double2_graphic_pane_t

0xbb13,	// (0x0000bb13) list_double_large_graphic_pane_g1_ParamLimits

0xbb13,	// (0x0000bb13) list_double_large_graphic_pane_g1

0xbb32,	// (0x0000bb32) list_double_large_graphic_pane_g2_ParamLimits

0xbb32,	// (0x0000bb32) list_double_large_graphic_pane_g2

0xb9e7,	// (0x0000b9e7) list_double_large_graphic_pane_g3_ParamLimits

0xb9e7,	// (0x0000b9e7) list_double_large_graphic_pane_g3

0xbb43,	// (0x0000bb43) list_double_large_graphic_pane_g4_ParamLimits

0xbb43,	// (0x0000bb43) list_double_large_graphic_pane_g4

0x0004,

0xf2a4,	// (0x0000f2a4) list_double_large_graphic_pane_g_ParamLimits

0xf2a4,	// (0x0000f2a4) list_double_large_graphic_pane_g

0xbb56,	// (0x0000bb56) list_double_large_graphic_pane_t1_ParamLimits

0xbb56,	// (0x0000bb56) list_double_large_graphic_pane_t1

0xbb6f,	// (0x0000bb6f) list_double_large_graphic_pane_t2_ParamLimits

0xbb6f,	// (0x0000bb6f) list_double_large_graphic_pane_t2

0x0001,

0xf2af,	// (0x0000f2af) list_double_large_graphic_pane_t_ParamLimits

0xf2af,	// (0x0000f2af) list_double_large_graphic_pane_t

0xbb81,	// (0x0000bb81) list_double2_large_graphic_pane_g1_ParamLimits

0xbb81,	// (0x0000bb81) list_double2_large_graphic_pane_g1

0xbb8d,	// (0x0000bb8d) list_double2_large_graphic_pane_g2_ParamLimits

0xbb8d,	// (0x0000bb8d) list_double2_large_graphic_pane_g2

0xbadf,	// (0x0000badf) list_double2_large_graphic_pane_g3_ParamLimits

0xbadf,	// (0x0000badf) list_double2_large_graphic_pane_g3

0x0002,

0xf2b4,	// (0x0000f2b4) list_double2_large_graphic_pane_g_ParamLimits

0xf2b4,	// (0x0000f2b4) list_double2_large_graphic_pane_g

0xbb9e,	// (0x0000bb9e) list_double2_large_graphic_pane_t1_ParamLimits

0xbb9e,	// (0x0000bb9e) list_double2_large_graphic_pane_t1

0xbbb4,	// (0x0000bbb4) list_double2_large_graphic_pane_t2_ParamLimits

0xbbb4,	// (0x0000bbb4) list_double2_large_graphic_pane_t2

0x0001,

0xf2bb,	// (0x0000f2bb) list_double2_large_graphic_pane_t_ParamLimits

0xf2bb,	// (0x0000f2bb) list_double2_large_graphic_pane_t

0xbbc6,	// (0x0000bbc6) list_double_heading_pane_g1_ParamLimits

0xbbc6,	// (0x0000bbc6) list_double_heading_pane_g1

0xbbd7,	// (0x0000bbd7) list_double_heading_pane_g2_ParamLimits

0xbbd7,	// (0x0000bbd7) list_double_heading_pane_g2

0x0001,

0xf2c0,	// (0x0000f2c0) list_double_heading_pane_g_ParamLimits

0xf2c0,	// (0x0000f2c0) list_double_heading_pane_g

0xbbe3,	// (0x0000bbe3) list_double_heading_pane_t1_ParamLimits

0xbbe3,	// (0x0000bbe3) list_double_heading_pane_t1

0xbbf9,	// (0x0000bbf9) list_double_heading_pane_t2_ParamLimits

0xbbf9,	// (0x0000bbf9) list_double_heading_pane_t2

0x0001,

0xf2c5,	// (0x0000f2c5) list_double_heading_pane_t_ParamLimits

0xf2c5,	// (0x0000f2c5) list_double_heading_pane_t

0x0fb6,	// (0x00000fb6) list_double_graphic_heading_pane_g1_ParamLimits

0x0fb6,	// (0x00000fb6) list_double_graphic_heading_pane_g1

0xbbc6,	// (0x0000bbc6) list_double_graphic_heading_pane_g2_ParamLimits

0xbbc6,	// (0x0000bbc6) list_double_graphic_heading_pane_g2

0xbbd7,	// (0x0000bbd7) list_double_graphic_heading_pane_g3_ParamLimits

0xbbd7,	// (0x0000bbd7) list_double_graphic_heading_pane_g3

0x0002,

0xf2ca,	// (0x0000f2ca) list_double_graphic_heading_pane_g_ParamLimits

0xf2ca,	// (0x0000f2ca) list_double_graphic_heading_pane_g

0xbc0b,	// (0x0000bc0b) list_double_graphic_heading_pane_t1_ParamLimits

0xbc0b,	// (0x0000bc0b) list_double_graphic_heading_pane_t1

0xbc21,	// (0x0000bc21) list_double_graphic_heading_pane_t2_ParamLimits

0xbc21,	// (0x0000bc21) list_double_graphic_heading_pane_t2

0x0001,

0xf2d1,	// (0x0000f2d1) list_double_graphic_heading_pane_t_ParamLimits

0xf2d1,	// (0x0000f2d1) list_double_graphic_heading_pane_t

0xbb32,	// (0x0000bb32) list_double_time_pane_g1_ParamLimits

0xbb32,	// (0x0000bb32) list_double_time_pane_g1

0xb9e7,	// (0x0000b9e7) list_double_time_pane_g2_ParamLimits

0xb9e7,	// (0x0000b9e7) list_double_time_pane_g2

0x0001,

0xf2d6,	// (0x0000f2d6) list_double_time_pane_g_ParamLimits

0xf2d6,	// (0x0000f2d6) list_double_time_pane_g

0xbc33,	// (0x0000bc33) list_double_time_pane_t1_ParamLimits

0xbc33,	// (0x0000bc33) list_double_time_pane_t1

0xbc49,	// (0x0000bc49) list_double_time_pane_t2_ParamLimits

0xbc49,	// (0x0000bc49) list_double_time_pane_t2

0xbc5b,	// (0x0000bc5b) list_double_time_pane_t3_ParamLimits

0xbc5b,	// (0x0000bc5b) list_double_time_pane_t3

0xbc6d,	// (0x0000bc6d) list_double_time_pane_t4_ParamLimits

0xbc6d,	// (0x0000bc6d) list_double_time_pane_t4

0x0003,

0xf2db,	// (0x0000f2db) list_double_time_pane_t_ParamLimits

0xf2db,	// (0x0000f2db) list_double_time_pane_t

0xbad3,	// (0x0000bad3) list_setting_pane_g1_ParamLimits

0xbad3,	// (0x0000bad3) list_setting_pane_g1

0xbadf,	// (0x0000badf) list_setting_pane_g2_ParamLimits

0xbadf,	// (0x0000badf) list_setting_pane_g2

0x0001,

0xf2e4,	// (0x0000f2e4) list_setting_pane_g_ParamLimits

0xf2e4,	// (0x0000f2e4) list_setting_pane_g

0xbc7f,	// (0x0000bc7f) list_setting_pane_t1_ParamLimits

0xbc7f,	// (0x0000bc7f) list_setting_pane_t1

0xbc96,	// (0x0000bc96) list_setting_pane_t2_ParamLimits

0xbc96,	// (0x0000bc96) list_setting_pane_t2

0x0002,

0xf2e9,	// (0x0000f2e9) list_setting_pane_t_ParamLimits

0xf2e9,	// (0x0000f2e9) list_setting_pane_t

0xbcd3,	// (0x0000bcd3) set_value_pane_cp_ParamLimits

0xbcd3,	// (0x0000bcd3) set_value_pane_cp

0xbad3,	// (0x0000bad3) list_setting_number_pane_g1_ParamLimits

0xbad3,	// (0x0000bad3) list_setting_number_pane_g1

0xbadf,	// (0x0000badf) list_setting_number_pane_g2_ParamLimits

0xbadf,	// (0x0000badf) list_setting_number_pane_g2

0x0001,

0xf2e4,	// (0x0000f2e4) list_setting_number_pane_g_ParamLimits

0xf2e4,	// (0x0000f2e4) list_setting_number_pane_g

0xbcdf,	// (0x0000bcdf) list_setting_number_pane_t1_ParamLimits

0xbcdf,	// (0x0000bcdf) list_setting_number_pane_t1

0xbcf3,	// (0x0000bcf3) list_setting_number_pane_t2_ParamLimits

0xbcf3,	// (0x0000bcf3) list_setting_number_pane_t2

0xbd0a,	// (0x0000bd0a) list_setting_number_pane_t3_ParamLimits

0xbd0a,	// (0x0000bd0a) list_setting_number_pane_t3

0x0003,

0xf2f0,	// (0x0000f2f0) list_setting_number_pane_t_ParamLimits

0xf2f0,	// (0x0000f2f0) list_setting_number_pane_t

0xbcd3,	// (0x0000bcd3) set_value_pane_ParamLimits

0xbcd3,	// (0x0000bcd3) set_value_pane

0x121c,	// (0x0000121c) bg_set_opt_pane_ParamLimits

0x121c,	// (0x0000121c) bg_set_opt_pane

0x123d,	// (0x0000123d) set_value_pane_t1

0x124b,	// (0x0000124b) slider_set_pane_cp3

0x1254,	// (0x00001254) volume_small_pane_cp

0x125d,	// (0x0000125d) list_form_gen_pane

0x1266,	// (0x00001266) scroll_pane_cp8

0xbd4d,	// (0x0000bd4d) form_field_data_pane_ParamLimits

0xbd4d,	// (0x0000bd4d) form_field_data_pane

0xbd64,	// (0x0000bd64) form_field_data_wide_pane_ParamLimits

0xbd64,	// (0x0000bd64) form_field_data_wide_pane

0xbd84,	// (0x0000bd84) form_field_popup_pane_ParamLimits

0xbd84,	// (0x0000bd84) form_field_popup_pane

0xbd9c,	// (0x0000bd9c) form_field_popup_wide_pane_ParamLimits

0xbd9c,	// (0x0000bd9c) form_field_popup_wide_pane

0x12f3,	// (0x000012f3) form_field_slider_pane_ParamLimits

0x12f3,	// (0x000012f3) form_field_slider_pane

0x1306,	// (0x00001306) form_field_slider_wide_pane_ParamLimits

0x1306,	// (0x00001306) form_field_slider_wide_pane

0x1319,	// (0x00001319) data_form_pane

0xbdc3,	// (0x0000bdc3) form_field_data_pane_t1

0x1349,	// (0x00001349) input_focus_pane

0x1357,	// (0x00001357) data_form_wide_pane

0x1383,	// (0x00001383) form_field_data_wide_pane_t1

0x0b6f,	// (0x00000b6f) input_focus_pane_cp6

0xbddd,	// (0x0000bddd) form_field_popup_pane_t1

0x1349,	// (0x00001349) input_focus_pane_cp7

0x13bc,	// (0x000013bc) list_form_pane

0x13d0,	// (0x000013d0) form_field_popup_wide_pane_t1

0x1349,	// (0x00001349) input_focus_pane_cp8

0x13e5,	// (0x000013e5) list_form_wide_pane

0xbdff,	// (0x0000bdff) form_field_slider_pane_t1_ParamLimits

0xbdff,	// (0x0000bdff) form_field_slider_pane_t1

0xbe17,	// (0x0000be17) form_field_slider_pane_t2_ParamLimits

0xbe17,	// (0x0000be17) form_field_slider_pane_t2

0x0001,

0xf2f9,	// (0x0000f2f9) form_field_slider_pane_t_ParamLimits

0xf2f9,	// (0x0000f2f9) form_field_slider_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9

0xbe2c,	// (0x0000be2c) slider_cont_pane_ParamLimits

0xbe2c,	// (0x0000be2c) slider_cont_pane

0x1436,	// (0x00001436) form_field_slider_wide_pane_t1_ParamLimits

0x1436,	// (0x00001436) form_field_slider_wide_pane_t1

0x1448,	// (0x00001448) form_field_slider_wide_pane_t2_ParamLimits

0x1448,	// (0x00001448) form_field_slider_wide_pane_t2

0x0001,

0xabe5,	// (0x0000abe5) form_field_slider_wide_pane_t_ParamLimits

0xabe5,	// (0x0000abe5) form_field_slider_wide_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10

0xbe40,	// (0x0000be40) slider_cont_pane_cp1_ParamLimits

0xbe40,	// (0x0000be40) slider_cont_pane_cp1

0xbe54,	// (0x0000be54) slider_form_pane_cp

0x1476,	// (0x00001476) input_focus_pane_g1

0x147e,	// (0x0000147e) input_focus_pane_g2

0x1486,	// (0x00001486) input_focus_pane_g3

0x148e,	// (0x0000148e) input_focus_pane_g4

0x1496,	// (0x00001496) input_focus_pane_g5

0x149e,	// (0x0000149e) input_focus_pane_g6

0x14a6,	// (0x000014a6) input_focus_pane_g7

0x14ae,	// (0x000014ae) input_focus_pane_g8

0x14b6,	// (0x000014b6) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xabea,	// (0x0000abea) input_focus_pane_g

0x3e06,	// (0x00003e06) wait_border_pane_g3_copy1

0xbe5c,	// (0x0000be5c) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd3f2,	// (0x0000d3f2) data_form_wide_pane_t1

0xbe76,	// (0x0000be76) list_form_graphic_pane_cp_ParamLimits

0xbe76,	// (0x0000be76) list_form_graphic_pane_cp

0x4f59,	// (0x00004f59) slider_form_pane_g1

0x4f62,	// (0x00004f62) slider_form_pane_g2

0x0006,

0xf3a9,	// (0x0000f3a9) slider_form_pane_g

0xbe89,	// (0x0000be89) list_form_graphic_pane_ParamLimits

0xbe89,	// (0x0000be89) list_form_graphic_pane

0x14f0,	// (0x000014f0) list_form_graphic_pane_g1

0x14f8,	// (0x000014f8) list_form_graphic_pane_t1_ParamLimits

0x14f8,	// (0x000014f8) list_form_graphic_pane_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5

0x150d,	// (0x0000150d) find_pane_g1

0x1516,	// (0x00001516) input_find_pane

0x151f,	// (0x0000151f) input_find_pane_g1_ParamLimits

0x151f,	// (0x0000151f) input_find_pane_g1

0x152b,	// (0x0000152b) input_find_pane_t1_ParamLimits

0x152b,	// (0x0000152b) input_find_pane_t1

0x1540,	// (0x00001540) input_find_pane_t2_ParamLimits

0x1540,	// (0x00001540) input_find_pane_t2

0x0001,

0xabff,	// (0x0000abff) input_find_pane_t_ParamLimits

0xabff,	// (0x0000abff) input_find_pane_t

0x1555,	// (0x00001555) input_focus_pane_cp5_ParamLimits

0x1555,	// (0x00001555) input_focus_pane_cp5

0x156f,	// (0x0000156f) bg_popup_window_pane_cp2_ParamLimits

0x156f,	// (0x0000156f) bg_popup_window_pane_cp2

0x157c,	// (0x0000157c) listscroll_menu_pane_ParamLimits

0x157c,	// (0x0000157c) listscroll_menu_pane

0xbea7,	// (0x0000bea7) popup_submenu_window_ParamLimits

0xbea7,	// (0x0000bea7) popup_submenu_window

0x15b0,	// (0x000015b0) find_popup_pane_g1

0x15b8,	// (0x000015b8) input_popup_find_pane_cp

0x1555,	// (0x00001555) input_focus_pane_cp4_ParamLimits

0x1555,	// (0x00001555) input_focus_pane_cp4

0x15d0,	// (0x000015d0) input_popup_find_pane_t1_ParamLimits

0x15d0,	// (0x000015d0) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x15fe,	// (0x000015fe) listscroll_popup_sub_pane

0x1606,	// (0x00001606) list_submenu_pane_ParamLimits

0x1606,	// (0x00001606) list_submenu_pane

0x1617,	// (0x00001617) scroll_pane_cp4

0x161f,	// (0x0000161f) list_single_popup_submenu_pane_ParamLimits

0x161f,	// (0x0000161f) list_single_popup_submenu_pane

0x1633,	// (0x00001633) list_single_popup_submenu_pane_g1

0x163b,	// (0x0000163b) list_single_popup_submenu_pane_t1_ParamLimits

0x163b,	// (0x0000163b) list_single_popup_submenu_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1

0xbedd,	// (0x0000bedd) tabs_2_active_pane_g1

0xbee5,	// (0x0000bee5) tabs_2_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1

0xbedd,	// (0x0000bedd) tabs_2_passive_pane_g1

0xbee5,	// (0x0000bee5) tabs_2_passive_pane_t1

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4

0xbef7,	// (0x0000bef7) tabs_2_long_active_pane_t1

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp4

0x3664,	// (0x00003664) list_single_midp_graphic_pane_g4_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5

0xbf0a,	// (0x0000bf0a) tabs_3_long_active_pane_t1

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp5

0x3664,	// (0x00003664) list_single_midp_graphic_pane_g4

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13

0x16b2,	// (0x000016b2) listscroll_popup_fast_pane_ParamLimits

0x16b2,	// (0x000016b2) listscroll_popup_fast_pane

0x16be,	// (0x000016be) grid_popup_fast_pane_ParamLimits

0x16be,	// (0x000016be) grid_popup_fast_pane

0x16d0,	// (0x000016d0) scroll_pane_cp9_ParamLimits

0x16d0,	// (0x000016d0) scroll_pane_cp9

0x72bd,	// (0x000072bd) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72bd,	// (0x000072bd) list_single_graphic_hl_pane_t1_cp2

0x16f4,	// (0x000016f4) input_focus_pane_cp20_ParamLimits

0x16f4,	// (0x000016f4) input_focus_pane_cp20

0x1702,	// (0x00001702) query_popup_data_pane_t1_ParamLimits

0x1702,	// (0x00001702) query_popup_data_pane_t1

0x1715,	// (0x00001715) query_popup_data_pane_t2_ParamLimits

0x1715,	// (0x00001715) query_popup_data_pane_t2

0x175b,	// (0x0000175b) query_popup_data_pane_t3_ParamLimits

0x175b,	// (0x0000175b) query_popup_data_pane_t3

0x179c,	// (0x0000179c) query_popup_data_pane_t4_ParamLimits

0x179c,	// (0x0000179c) query_popup_data_pane_t4

0x17d8,	// (0x000017d8) query_popup_data_pane_t5_ParamLimits

0x17d8,	// (0x000017d8) query_popup_data_pane_t5

0x0004,

0xac04,	// (0x0000ac04) query_popup_data_pane_t_ParamLimits

0xac04,	// (0x0000ac04) query_popup_data_pane_t

0x1476,	// (0x00001476) bg_set_opt_pane_g1

0x147e,	// (0x0000147e) bg_set_opt_pane_g2

0x1486,	// (0x00001486) bg_set_opt_pane_g3

0x148e,	// (0x0000148e) bg_set_opt_pane_g4

0x1496,	// (0x00001496) bg_set_opt_pane_g5

0x149e,	// (0x0000149e) bg_set_opt_pane_g6

0x14a6,	// (0x000014a6) bg_set_opt_pane_g7

0x14ae,	// (0x000014ae) bg_set_opt_pane_g8

0x14b6,	// (0x000014b6) bg_set_opt_pane_g9

0x0008,

0xac0f,	// (0x0000ac0f) bg_set_opt_pane_g

0x20bf,	// (0x000020bf) control_top_pane_stacon_ParamLimits

0x20bf,	// (0x000020bf) control_top_pane_stacon

0x2112,	// (0x00002112) signal_pane_stacon_ParamLimits

0x2112,	// (0x00002112) signal_pane_stacon

0x2137,	// (0x00002137) stacon_top_pane_g1_ParamLimits

0x2137,	// (0x00002137) stacon_top_pane_g1

0x2159,	// (0x00002159) title_pane_stacon_ParamLimits

0x2159,	// (0x00002159) title_pane_stacon

0x2183,	// (0x00002183) uni_indicator_pane_stacon_ParamLimits

0x2183,	// (0x00002183) uni_indicator_pane_stacon

0x2198,	// (0x00002198) battery_pane_stacon_ParamLimits

0x2198,	// (0x00002198) battery_pane_stacon

0x21dc,	// (0x000021dc) control_bottom_pane_stacon_ParamLimits

0x21dc,	// (0x000021dc) control_bottom_pane_stacon

0x21ff,	// (0x000021ff) navi_pane_stacon_ParamLimits

0x21ff,	// (0x000021ff) navi_pane_stacon

0x2222,	// (0x00002222) stacon_bottom_pane_g1_ParamLimits

0x2222,	// (0x00002222) stacon_bottom_pane_g1

0x180f,	// (0x0000180f) aid_levels_signal_lsc_ParamLimits

0x180f,	// (0x0000180f) aid_levels_signal_lsc

0x1826,	// (0x00001826) signal_pane_stacon_g1_ParamLimits

0x1826,	// (0x00001826) signal_pane_stacon_g1

0x183a,	// (0x0000183a) signal_pane_stacon_g2_ParamLimits

0x183a,	// (0x0000183a) signal_pane_stacon_g2

0x0001,

0xac22,	// (0x0000ac22) signal_pane_stacon_g_ParamLimits

0xac22,	// (0x0000ac22) signal_pane_stacon_g

0x187c,	// (0x0000187c) title_pane_stacon_t1_ParamLimits

0x187c,	// (0x0000187c) title_pane_stacon_t1

0x18a1,	// (0x000018a1) uni_indicator_pane_stacon_g1

0x18ab,	// (0x000018ab) uni_indicator_pane_stacon_g2

0x18b5,	// (0x000018b5) uni_indicator_pane_stacon_g3

0x18bf,	// (0x000018bf) uni_indicator_pane_stacon_g4

0x0003,

0xac2e,	// (0x0000ac2e) uni_indicator_pane_stacon_g

0x18c9,	// (0x000018c9) control_top_pane_stacon_g1

0x18d1,	// (0x000018d1) control_top_pane_stacon_t1_ParamLimits

0x18d1,	// (0x000018d1) control_top_pane_stacon_t1

0x1908,	// (0x00001908) aid_levels_battery_lsc_ParamLimits

0x1908,	// (0x00001908) aid_levels_battery_lsc

0x1920,	// (0x00001920) battery_pane_stacon_g1_ParamLimits

0x1920,	// (0x00001920) battery_pane_stacon_g1

0x1933,	// (0x00001933) battery_pane_stacon_g2_ParamLimits

0x1933,	// (0x00001933) battery_pane_stacon_g2

0x0001,

0xac37,	// (0x0000ac37) battery_pane_stacon_g_ParamLimits

0xac37,	// (0x0000ac37) battery_pane_stacon_g

0x1971,	// (0x00001971) navi_icon_pane_stacon

0x1985,	// (0x00001985) navi_navi_pane_stacon

0x1971,	// (0x00001971) navi_text_pane_stacon

0x18c9,	// (0x000018c9) control_bottom_pane_stacon_g1

0x1999,	// (0x00001999) control_bottom_pane_stacon_t1_ParamLimits

0x1999,	// (0x00001999) control_bottom_pane_stacon_t1

0xbf1c,	// (0x0000bf1c) grid_app_pane_ParamLimits

0xbf1c,	// (0x0000bf1c) grid_app_pane

0xbf52,	// (0x0000bf52) scroll_pane_cp15_ParamLimits

0xbf52,	// (0x0000bf52) scroll_pane_cp15

0xbf67,	// (0x0000bf67) cell_app_pane_ParamLimits

0xbf67,	// (0x0000bf67) cell_app_pane

0xbfae,	// (0x0000bfae) cell_app_pane_g1_ParamLimits

0xbfae,	// (0x0000bfae) cell_app_pane_g1

0x1a69,	// (0x00001a69) cell_app_pane_g2_ParamLimits

0x1a69,	// (0x00001a69) cell_app_pane_g2

0x0001,

0xf2fe,	// (0x0000f2fe) cell_app_pane_g_ParamLimits

0xf2fe,	// (0x0000f2fe) cell_app_pane_g

0xbfd2,	// (0x0000bfd2) cell_app_pane_t1_ParamLimits

0xbfd2,	// (0x0000bfd2) cell_app_pane_t1

0x1a8c,	// (0x00001a8c) grid_highlight_pane_ParamLimits

0x1a8c,	// (0x00001a8c) grid_highlight_pane

0x1476,	// (0x00001476) cell_highlight_pane_g1

0x147e,	// (0x0000147e) cell_highlight_pane_g2

0x1486,	// (0x00001486) cell_highlight_pane_g3

0x148e,	// (0x0000148e) cell_highlight_pane_g4

0x1496,	// (0x00001496) cell_highlight_pane_g5

0x149e,	// (0x0000149e) cell_highlight_pane_g6

0x14a6,	// (0x000014a6) cell_highlight_pane_g7

0x14ae,	// (0x000014ae) cell_highlight_pane_g8

0x14b6,	// (0x000014b6) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xabea,	// (0x0000abea) cell_highlight_pane_g

0x1ab0,	// (0x00001ab0) bg_scroll_pane

0x1acf,	// (0x00001acf) scroll_handle_pane

0x1b20,	// (0x00001b20) scroll_bg_pane_g1

0x1b35,	// (0x00001b35) scroll_bg_pane_g2

0x1b4d,	// (0x00001b4d) scroll_bg_pane_g3

0x0002,

0xac41,	// (0x0000ac41) scroll_bg_pane_g

0x1b62,	// (0x00001b62) scroll_handle_focus_pane_ParamLimits

0x1b62,	// (0x00001b62) scroll_handle_focus_pane

0x1b20,	// (0x00001b20) scroll_handle_pane_g1

0x1b6f,	// (0x00001b6f) scroll_handle_pane_g2

0x1b4d,	// (0x00001b4d) scroll_handle_pane_g3

0x0002,

0xac48,	// (0x0000ac48) scroll_handle_pane_g

0x1555,	// (0x00001555) bg_popup_sub_pane_cp21_ParamLimits

0x1555,	// (0x00001555) bg_popup_sub_pane_cp21

0x1b83,	// (0x00001b83) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b83,	// (0x00001b83) popup_fep_japan_predictive_window_t1

0x1b9d,	// (0x00001b9d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b9d,	// (0x00001b9d) popup_fep_japan_predictive_window_t2

0x1bd0,	// (0x00001bd0) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bd0,	// (0x00001bd0) popup_fep_japan_predictive_window_t3

0x0002,

0xac4f,	// (0x0000ac4f) popup_fep_japan_predictive_window_t_ParamLimits

0xac4f,	// (0x0000ac4f) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c07,	// (0x00001c07) listscroll_japin_cand_pane

0x1c0f,	// (0x00001c0f) popup_fep_japan_candidate_window_t1

0x1c1d,	// (0x00001c1d) candidate_pane_ParamLimits

0x1c1d,	// (0x00001c1d) candidate_pane

0x1c2f,	// (0x00001c2f) scroll_pane_cp30

0x1c37,	// (0x00001c37) list_single_popup_jap_candidate_pane_ParamLimits

0x1c37,	// (0x00001c37) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c4b,	// (0x00001c4b) list_single_popup_jap_candidate_pane_t1

0x1c5a,	// (0x00001c5a) level_1_signal

0x1c67,	// (0x00001c67) level_2_signal

0x1c74,	// (0x00001c74) level_3_signal

0x1c81,	// (0x00001c81) level_4_signal

0x1c8e,	// (0x00001c8e) level_5_signal

0x1c9b,	// (0x00001c9b) level_6_signal

0x1ca8,	// (0x00001ca8) level_7_signal

0x1c5a,	// (0x00001c5a) level_1_battery

0x1c67,	// (0x00001c67) level_2_battery

0x1c74,	// (0x00001c74) level_3_battery

0x1c81,	// (0x00001c81) level_4_battery

0x1c8e,	// (0x00001c8e) level_5_battery

0x1c9b,	// (0x00001c9b) level_6_battery

0x1ca8,	// (0x00001ca8) level_7_battery

0x1cec,	// (0x00001cec) list_menu_pane_ParamLimits

0x1cec,	// (0x00001cec) list_menu_pane

0x1d02,	// (0x00001d02) scroll_pane_cp25_ParamLimits

0x1d02,	// (0x00001d02) scroll_pane_cp25

0x1d1b,	// (0x00001d1b) list_double2_graphic_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double2_graphic_pane_cp2

0x1d1b,	// (0x00001d1b) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double2_large_graphic_pane_cp2

0x1d1b,	// (0x00001d1b) list_double2_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double2_pane_cp2

0x1d1b,	// (0x00001d1b) list_double_graphic_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double_graphic_pane_cp2

0x1d1b,	// (0x00001d1b) list_double_large_graphic_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double_large_graphic_pane_cp2

0x1d1b,	// (0x00001d1b) list_double_number_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double_number_pane_cp2

0x1d1b,	// (0x00001d1b) list_double_pane_cp2_ParamLimits

0x1d1b,	// (0x00001d1b) list_double_pane_cp2

0xbffa,	// (0x0000bffa) list_single_2graphic_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_2graphic_pane_cp2

0xbffa,	// (0x0000bffa) list_single_graphic_heading_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_graphic_heading_pane_cp2

0xbffa,	// (0x0000bffa) list_single_graphic_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_graphic_pane_cp2

0xbffa,	// (0x0000bffa) list_single_heading_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_heading_pane_cp2

0x1d55,	// (0x00001d55) list_single_large_graphic_pane_cp2_ParamLimits

0x1d55,	// (0x00001d55) list_single_large_graphic_pane_cp2

0xbffa,	// (0x0000bffa) list_single_number_heading_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_number_heading_pane_cp2

0xbffa,	// (0x0000bffa) list_single_number_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_number_pane_cp2

0xbffa,	// (0x0000bffa) list_single_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_pane_cp2

0x1e2b,	// (0x00001e2b) bg_popup_sub_pane_cp22

0x1e4d,	// (0x00001e4d) popup_side_volume_key_window_g1

0x1e71,	// (0x00001e71) popup_side_volume_key_window_t1

0x1e8d,	// (0x00001e8d) volume_small_pane_cp1

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24_ParamLimits

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24

0x1e95,	// (0x00001e95) fep_china_uni_candidate_pane_ParamLimits

0x1e95,	// (0x00001e95) fep_china_uni_candidate_pane

0x1ea9,	// (0x00001ea9) fep_china_uni_entry_pane

0x1eb9,	// (0x00001eb9) popup_fep_china_uni_window_g1

0x1ed5,	// (0x00001ed5) fep_china_uni_entry_pane_g1

0x1edd,	// (0x00001edd) fep_china_uni_entry_pane_g2

0x0001,

0xac80,	// (0x0000ac80) fep_china_uni_entry_pane_g

0x1ee5,	// (0x00001ee5) fep_entry_item_pane

0x1eef,	// (0x00001eef) fep_candidate_item_pane

0x1ef7,	// (0x00001ef7) fep_china_uni_candidate_pane_g1

0x1eff,	// (0x00001eff) fep_china_uni_candidate_pane_g2

0x1f07,	// (0x00001f07) fep_china_uni_candidate_pane_g3

0x1f0f,	// (0x00001f0f) fep_china_uni_candidate_pane_g4

0x0003,

0xac85,	// (0x0000ac85) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f17,	// (0x00001f17) fep_entry_item_pane_t1_ParamLimits

0x1f17,	// (0x00001f17) fep_entry_item_pane_t1

0x1f2d,	// (0x00001f2d) fep_candidate_item_pane_t1_ParamLimits

0x1f2d,	// (0x00001f2d) fep_candidate_item_pane_t1

0x1f42,	// (0x00001f42) fep_candidate_item_pane_t2_ParamLimits

0x1f42,	// (0x00001f42) fep_candidate_item_pane_t2

0x0001,

0xac8e,	// (0x0000ac8e) fep_candidate_item_pane_t_ParamLimits

0xac8e,	// (0x0000ac8e) fep_candidate_item_pane_t

0x04f9,	// (0x000004f9) list_highlight_pane_cp31_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp31

0x1f54,	// (0x00001f54) level_1_signal_lsc

0x1f5d,	// (0x00001f5d) level_2_signal_lsc

0x1f66,	// (0x00001f66) level_3_signal_lsc

0x1f6f,	// (0x00001f6f) level_4_signal_lsc

0x1f78,	// (0x00001f78) level_5_signal_lsc

0x1f81,	// (0x00001f81) level_6_signal_lsc

0x1f8a,	// (0x00001f8a) level_7_signal_lsc

0x1f8a,	// (0x00001f8a) level_1_battery_lsc

0x1f93,	// (0x00001f93) level_2_battery_lsc

0x1f9c,	// (0x00001f9c) level_3_battery_lsc

0x1fa5,	// (0x00001fa5) level_4_battery_lsc

0x1fae,	// (0x00001fae) level_5_battery_lsc

0x1fb7,	// (0x00001fb7) level_6_battery_lsc

0x1f54,	// (0x00001f54) level_7_battery_lsc

0x1fc0,	// (0x00001fc0) scroll_handle_focus_pane_g1

0x1fc9,	// (0x00001fc9) scroll_handle_focus_pane_g2

0x1fd2,	// (0x00001fd2) scroll_handle_focus_pane_g3

0x0002,

0xac93,	// (0x0000ac93) scroll_handle_focus_pane_g

0x1fdb,	// (0x00001fdb) list_single_2graphic_pane_g1_ParamLimits

0x1fdb,	// (0x00001fdb) list_single_2graphic_pane_g1

0xb9d6,	// (0x0000b9d6) list_single_2graphic_pane_g2_ParamLimits

0xb9d6,	// (0x0000b9d6) list_single_2graphic_pane_g2

0x0dbd,	// (0x00000dbd) list_single_2graphic_pane_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_2graphic_pane_g3

0x1fe7,	// (0x00001fe7) list_single_2graphic_pane_g4_ParamLimits

0x1fe7,	// (0x00001fe7) list_single_2graphic_pane_g4

0x0003,

0xf30c,	// (0x0000f30c) list_single_2graphic_pane_g_ParamLimits

0xf30c,	// (0x0000f30c) list_single_2graphic_pane_g

0x1ff8,	// (0x00001ff8) list_single_2graphic_pane_t1_ParamLimits

0x1ff8,	// (0x00001ff8) list_single_2graphic_pane_t1

0xc087,	// (0x0000c087) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc087,	// (0x0000c087) list_double2_graphic_large_graphic_pane_g1

0xbb8d,	// (0x0000bb8d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb8d,	// (0x0000bb8d) list_double2_graphic_large_graphic_pane_g2

0xbadf,	// (0x0000badf) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbadf,	// (0x0000badf) list_double2_graphic_large_graphic_pane_g3

0xc099,	// (0x0000c099) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc099,	// (0x0000c099) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf315,	// (0x0000f315) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf315,	// (0x0000f315) list_double2_graphic_large_graphic_pane_g

0xc0a5,	// (0x0000c0a5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc0a5,	// (0x0000c0a5) list_double2_graphic_large_graphic_pane_t1

0xc0bb,	// (0x0000c0bb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc0bb,	// (0x0000c0bb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf31e,	// (0x0000f31e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf31e,	// (0x0000f31e) list_double2_graphic_large_graphic_pane_t

0x22e9,	// (0x000022e9) popup_fast_swap_window_ParamLimits

0x22e9,	// (0x000022e9) popup_fast_swap_window

0x2305,	// (0x00002305) popup_side_volume_key_window

0x231f,	// (0x0000231f) stacon_top_pane

0x2329,	// (0x00002329) status_pane_ParamLimits

0x2329,	// (0x00002329) status_pane

0xc135,	// (0x0000c135) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1266,	// (0x00001266) scroll_pane_cp121

0x125d,	// (0x0000125d) set_content_pane

0xc0cd,	// (0x0000c0cd) bg_active_tab_pane_g1_cp1

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp1

0xc0d6,	// (0x0000c0d6) bg_active_tab_pane_g3_cp1

0xc0cd,	// (0x0000c0cd) bg_passive_tab_pane_g1_cp1

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp1

0xc0d6,	// (0x0000c0d6) bg_passive_tab_pane_g3_cp1

0xc0df,	// (0x0000c0df) bg_active_tab_pane_g1_cp2

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp2

0xc0e8,	// (0x0000c0e8) bg_active_tab_pane_g3_cp2

0xc0df,	// (0x0000c0df) bg_passive_tab_pane_g1_cp2

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp2

0xc0e8,	// (0x0000c0e8) bg_passive_tab_pane_g3_cp2

0x2097,	// (0x00002097) bg_active_tab_pane_g1_cp3

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp3

0x20a0,	// (0x000020a0) bg_active_tab_pane_g3_cp3

0x2097,	// (0x00002097) bg_passive_tab_pane_g1_cp3

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp3

0x20a0,	// (0x000020a0) bg_passive_tab_pane_g3_cp3

0xc0f1,	// (0x0000c0f1) bg_active_tab_pane_g1_cp4

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp4

0xc0fc,	// (0x0000c0fc) bg_active_tab_pane_g3_cp4

0xc0f1,	// (0x0000c0f1) bg_passive_tab_pane_g1_cp4

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp4

0xc0fc,	// (0x0000c0fc) bg_passive_tab_pane_g3_cp4

0x223e,	// (0x0000223e) bg_active_tab_pane_g1_cp5

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp5

0x2247,	// (0x00002247) bg_active_tab_pane_g3_cp5

0x223e,	// (0x0000223e) bg_passive_tab_pane_g1_cp5

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp5

0x2247,	// (0x00002247) bg_passive_tab_pane_g3_cp5

0x574d,	// (0x0000574d) list_set_graphic_pane_ParamLimits

0x574d,	// (0x0000574d) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc107,	// (0x0000c107) list_set_graphic_pane_g1_ParamLimits

0xc107,	// (0x0000c107) list_set_graphic_pane_g1

0xc113,	// (0x0000c113) list_set_graphic_pane_g2_ParamLimits

0xc113,	// (0x0000c113) list_set_graphic_pane_g2

0x0001,

0xf323,	// (0x0000f323) list_set_graphic_pane_g_ParamLimits

0xf323,	// (0x0000f323) list_set_graphic_pane_g

0x0009,

0xb03b,	// (0x0000b03b) volume_small_pane_cp_g

0x229c,	// (0x0000229c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x229c,	// (0x0000229c) list_double2_large_graphic_pane_g1_cp2

0x22a8,	// (0x000022a8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22a8,	// (0x000022a8) list_double2_large_graphic_pane_g2_cp2

0x22b9,	// (0x000022b9) list_double2_large_graphic_pane_g3_cp2

0x22c1,	// (0x000022c1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22c1,	// (0x000022c1) list_double2_large_graphic_pane_t1_cp2

0x22d7,	// (0x000022d7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22d7,	// (0x000022d7) list_double2_large_graphic_pane_t2_cp2

0x4a3d,	// (0x00004a3d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a3d,	// (0x00004a3d) list_double_large_graphic_pane_g1_cp2

0x4a4e,	// (0x00004a4e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a4e,	// (0x00004a4e) list_double_large_graphic_pane_g2_cp2

0x2450,	// (0x00002450) list_double_large_graphic_pane_g3_cp2

0x4a5f,	// (0x00004a5f) list_double_large_graphic_pane_g4_cp

0x4a67,	// (0x00004a67) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a67,	// (0x00004a67) list_double_large_graphic_pane_t1_cp2

0x4a7e,	// (0x00004a7e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a7e,	// (0x00004a7e) list_double_large_graphic_pane_t2_cp2

0x2342,	// (0x00002342) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2342,	// (0x00002342) list_double2_graphic_pane_g1_cp2

0x2350,	// (0x00002350) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2350,	// (0x00002350) list_double2_graphic_pane_g2_cp2

0x2361,	// (0x00002361) list_double2_graphic_pane_g3_cp2

0x236b,	// (0x0000236b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x236b,	// (0x0000236b) list_double2_graphic_pane_t1_cp2

0x2381,	// (0x00002381) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2381,	// (0x00002381) list_double2_graphic_pane_t2_cp2

0x2393,	// (0x00002393) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2393,	// (0x00002393) list_single_number_heading_pane_g1_cp2

0x239f,	// (0x0000239f) list_single_number_heading_pane_g2_cp2

0x23a7,	// (0x000023a7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23a7,	// (0x000023a7) list_single_number_heading_pane_t1_cp2

0x23bd,	// (0x000023bd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23bd,	// (0x000023bd) list_single_number_heading_pane_t2_cp2

0x23cf,	// (0x000023cf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23cf,	// (0x000023cf) list_single_number_heading_pane_t3_cp2

0x2393,	// (0x00002393) list_single_heading_pane_g1_cp2_ParamLimits

0x2393,	// (0x00002393) list_single_heading_pane_g1_cp2

0x239f,	// (0x0000239f) list_single_heading_pane_g2_cp2

0x23a7,	// (0x000023a7) list_single_heading_pane_t1_cp2_ParamLimits

0x23a7,	// (0x000023a7) list_single_heading_pane_t1_cp2

0x4847,	// (0x00004847) list_single_heading_pane_t2_cp2_ParamLimits

0x4847,	// (0x00004847) list_single_heading_pane_t2_cp2

0x478f,	// (0x0000478f) list_double_graphic_pane_g1_cp2_ParamLimits

0x478f,	// (0x0000478f) list_double_graphic_pane_g1_cp2

0x479b,	// (0x0000479b) list_double_graphic_pane_g2_cp2_ParamLimits

0x479b,	// (0x0000479b) list_double_graphic_pane_g2_cp2

0x47aa,	// (0x000047aa) list_double_graphic_pane_g3_cp2

0x47b2,	// (0x000047b2) list_double_graphic_pane_t1_cp2_ParamLimits

0x47b2,	// (0x000047b2) list_double_graphic_pane_t1_cp2

0x47c8,	// (0x000047c8) list_double_graphic_pane_t2_cp2_ParamLimits

0x47c8,	// (0x000047c8) list_double_graphic_pane_t2_cp2

0x2444,	// (0x00002444) list_double_number_pane_g1_cp2_ParamLimits

0x2444,	// (0x00002444) list_double_number_pane_g1_cp2

0x2450,	// (0x00002450) list_double_number_pane_g2_cp2

0x4753,	// (0x00004753) list_double_number_pane_t1_cp2_ParamLimits

0x4753,	// (0x00004753) list_double_number_pane_t1_cp2

0x4767,	// (0x00004767) list_double_number_pane_t2_cp2_ParamLimits

0x4767,	// (0x00004767) list_double_number_pane_t2_cp2

0x477d,	// (0x0000477d) list_double_number_pane_t3_cp2_ParamLimits

0x477d,	// (0x0000477d) list_double_number_pane_t3_cp2

0x462b,	// (0x0000462b) list_single_graphic_pane_g1_cp2_ParamLimits

0x462b,	// (0x0000462b) list_single_graphic_pane_g1_cp2

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_cp2

0x24a8,	// (0x000024a8) list_single_graphic_pane_g3_cp2

0x4601,	// (0x00004601) list_single_graphic_pane_t1_cp2_ParamLimits

0x4601,	// (0x00004601) list_single_graphic_pane_t1_cp2

0x0db1,	// (0x00000db1) list_single_number_pane_g1_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_pane_g1_cp2

0x24a8,	// (0x000024a8) list_single_number_pane_g2_cp2

0x4601,	// (0x00004601) list_single_number_pane_t1_cp2_ParamLimits

0x4601,	// (0x00004601) list_single_number_pane_t1_cp2

0x4617,	// (0x00004617) list_single_number_pane_t2_cp2_ParamLimits

0x4617,	// (0x00004617) list_single_number_pane_t2_cp2

0x22a8,	// (0x000022a8) list_double2_pane_g1_cp2_ParamLimits

0x22a8,	// (0x000022a8) list_double2_pane_g1_cp2

0x22b9,	// (0x000022b9) list_double2_pane_g2_cp2

0x241c,	// (0x0000241c) list_double2_pane_t1_cp2_ParamLimits

0x241c,	// (0x0000241c) list_double2_pane_t1_cp2

0x2432,	// (0x00002432) list_double2_pane_t2_cp2_ParamLimits

0x2432,	// (0x00002432) list_double2_pane_t2_cp2

0x2444,	// (0x00002444) list_double_pane_g1_cp2_ParamLimits

0x2444,	// (0x00002444) list_double_pane_g1_cp2

0x2450,	// (0x00002450) list_double_pane_g2_cp2

0x2458,	// (0x00002458) list_double_pane_t1_cp2_ParamLimits

0x2458,	// (0x00002458) list_double_pane_t1_cp2

0x246e,	// (0x0000246e) list_double_pane_t2_cp2_ParamLimits

0x246e,	// (0x0000246e) list_double_pane_t2_cp2

0x2498,	// (0x00002498) list_single_pane_cp2_g3

0x0db1,	// (0x00000db1) list_single_pane_g1_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_pane_g1_cp2

0x24a8,	// (0x000024a8) list_single_pane_g2_cp2

0x24b0,	// (0x000024b0) list_single_pane_t1_cp2_ParamLimits

0x24b0,	// (0x000024b0) list_single_pane_t1_cp2

0x24c8,	// (0x000024c8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24c8,	// (0x000024c8) list_single_large_graphic_pane_g1_cp2

0x24d4,	// (0x000024d4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24d4,	// (0x000024d4) list_single_large_graphic_pane_g2_cp2

0x24e0,	// (0x000024e0) list_single_large_graphic_pane_g3_cp2

0x24e8,	// (0x000024e8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24e8,	// (0x000024e8) list_single_large_graphic_pane_g4_cp1

0x2502,	// (0x00002502) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2502,	// (0x00002502) list_single_large_graphic_pane_t1_cp2

0x4480,	// (0x00004480) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4480,	// (0x00004480) list_single_graphic_heading_pane_g1_cp2

0x444d,	// (0x0000444d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x444d,	// (0x0000444d) list_single_graphic_heading_pane_g4_cp2

0x24a8,	// (0x000024a8) list_single_graphic_heading_pane_g5_cp2

0x448c,	// (0x0000448c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x448c,	// (0x0000448c) list_single_graphic_heading_pane_t1_cp2

0x44a2,	// (0x000044a2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44a2,	// (0x000044a2) list_single_graphic_heading_pane_t2_cp2

0x4441,	// (0x00004441) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4441,	// (0x00004441) list_single_2graphic_pane_g1_cp2

0x444d,	// (0x0000444d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x444d,	// (0x0000444d) list_single_2graphic_pane_g2_cp2

0x24a8,	// (0x000024a8) list_single_2graphic_pane_g3_cp2

0x445e,	// (0x0000445e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x445e,	// (0x0000445e) list_single_2graphic_pane_g4_cp2

0x446a,	// (0x0000446a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x446a,	// (0x0000446a) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4019,	// (0x00004019) list_highlight_pane_g1_cp1

0x4021,	// (0x00004021) list_highlight_pane_g2_cp1

0x4029,	// (0x00004029) list_highlight_pane_g3_cp1

0x4031,	// (0x00004031) list_highlight_pane_g4_cp1

0x4039,	// (0x00004039) list_highlight_pane_g5_cp1

0x4041,	// (0x00004041) list_highlight_pane_g6_cp1

0x4049,	// (0x00004049) list_highlight_pane_g7_cp1

0x4051,	// (0x00004051) list_highlight_pane_g8_cp1

0x4059,	// (0x00004059) list_highlight_pane_g9_cp1

0xd01e,	// (0x0000d01e) form_field_slider_pane_t3

0xd02e,	// (0x0000d02e) form_field_slider_pane_t4

0x3f4d,	// (0x00003f4d) slider_form_pane_ParamLimits

0x3f4d,	// (0x00003f4d) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4891,	// (0x00004891) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xae41,	// (0x0000ae41) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2518,	// (0x00002518) text_digital

0x2527,	// (0x00002527) text_primary

0x2536,	// (0x00002536) text_primary_small

0x2545,	// (0x00002545) text_secondary

0x2554,	// (0x00002554) text_title

0x517f,	// (0x0000517f) bg_passive_tab_pane_g1_cp3_srt

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp3_srt

0x5188,	// (0x00005188) bg_passive_tab_pane_g3_cp3_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt

0x5191,	// (0x00005191) tabs_4_active_pane_srt_g1

0xd4ae,	// (0x0000d4ae) tabs_4_active_pane_srt_t1_ParamLimits

0xd4ae,	// (0x0000d4ae) tabs_4_active_pane_srt_t1

0x517f,	// (0x0000517f) bg_active_tab_pane_g1_cp3_copy1

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp3_copy1

0x5188,	// (0x00005188) bg_active_tab_pane_g3_cp3_copy1

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp4_srt

0x4d22,	// (0x00004d22) bg_passive_tab_pane_g1_cp4_srt

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp4_srt

0x4d2b,	// (0x00004d2b) bg_passive_tab_pane_g3_cp4_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt

0xd289,	// (0x0000d289) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd289,	// (0x0000d289) tabs_2_long_active_pane_srt_t1

0x4d22,	// (0x00004d22) bg_active_tab_pane_g1_cp4_srt

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp4_srt

0x4d2b,	// (0x00004d2b) bg_active_tab_pane_g3_cp4_srt

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp5_srt

0x223e,	// (0x0000223e) bg_passive_tab_pane_g1_cp5_srt

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp5_srt

0x2247,	// (0x00002247) bg_passive_tab_pane_g3_cp5_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt

0xd273,	// (0x0000d273) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd273,	// (0x0000d273) tabs_3_long_active_pane_srt_t1

0x223e,	// (0x0000223e) bg_active_tab_pane_g1_cp5_srt

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp5_srt

0x2247,	// (0x00002247) bg_active_tab_pane_g3_cp5_srt

0x4d02,	// (0x00004d02) navi_text_pane_srt_t1

0x4cfa,	// (0x00004cfa) navi_icon_pane_srt_g1

0x27c2,	// (0x000027c2) midp_editing_number_pane_srt

0x2563,	// (0x00002563) midp_ticker_pane_srt

0x27ca,	// (0x000027ca) midp_ticker_pane_srt_g1

0x27d2,	// (0x000027d2) midp_ticker_pane_srt_g2

0x0001,

0xacd0,	// (0x0000acd0) midp_ticker_pane_srt_g

0x27da,	// (0x000027da) midp_ticker_pane_srt_t1

0x4ceb,	// (0x00004ceb) midp_editing_number_pane_t1_copy1

0x2ad4,	// (0x00002ad4) listscroll_midp_pane

0x2ad4,	// (0x00002ad4) midp_form_pane

0x25d1,	// (0x000025d1) midp_info_popup_window_ParamLimits

0x25d1,	// (0x000025d1) midp_info_popup_window

0x1555,	// (0x00001555) bg_popup_sub_pane_cp50_ParamLimits

0x1555,	// (0x00001555) bg_popup_sub_pane_cp50

0x3c4e,	// (0x00003c4e) listscroll_midp_info_pane_ParamLimits

0x3c4e,	// (0x00003c4e) listscroll_midp_info_pane

0x3c36,	// (0x00003c36) listscroll_form_midp_pane_ParamLimits

0x3c36,	// (0x00003c36) listscroll_form_midp_pane

0x3c42,	// (0x00003c42) scroll_bar_cp050

0xd012,	// (0x0000d012) list_midp_pane

0x5fab,	// (0x00005fab) signal_pane_g2_cp

0x3b50,	// (0x00003b50) listscroll_midp_info_pane_t1_ParamLimits

0x3b50,	// (0x00003b50) listscroll_midp_info_pane_t1

0x3b68,	// (0x00003b68) listscroll_midp_info_pane_t2_ParamLimits

0x3b68,	// (0x00003b68) listscroll_midp_info_pane_t2

0x3ba6,	// (0x00003ba6) listscroll_midp_info_pane_t3_ParamLimits

0x3ba6,	// (0x00003ba6) listscroll_midp_info_pane_t3

0x3be0,	// (0x00003be0) listscroll_midp_info_pane_t4_ParamLimits

0x3be0,	// (0x00003be0) listscroll_midp_info_pane_t4

0x0003,

0xad7c,	// (0x0000ad7c) listscroll_midp_info_pane_t_ParamLimits

0xad7c,	// (0x0000ad7c) listscroll_midp_info_pane_t

0x1617,	// (0x00001617) scroll_pane_cp21

0x3af2,	// (0x00003af2) form_midp_field_choice_group_pane

0x3afb,	// (0x00003afb) form_midp_field_text_pane

0x3b36,	// (0x00003b36) form_midp_field_time_pane

0x3b3e,	// (0x00003b3e) form_midp_gauge_slider_pane

0x3b47,	// (0x00003b47) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcff8,	// (0x0000cff8) list_single_midp_pane_ParamLimits

0xcff8,	// (0x0000cff8) list_single_midp_pane

0xcfd5,	// (0x0000cfd5) form_midp_field_text_pane_t1

0x3791,	// (0x00003791) input_focus_pane_cp050

0x3aab,	// (0x00003aab) list_midp_form_text_pane

0x3a3f,	// (0x00003a3f) form_midp_field_choice_group_pane_t1

0x3a4d,	// (0x00003a4d) input_focus_pane_cp051

0x3a61,	// (0x00003a61) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a23,	// (0x00003a23) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a31,	// (0x00003a31) form_midp_field_time_pane_t2

0x0001,

0x2681,	// (0x00002681) aid_navinavi_width_2_pane

0xad77,	// (0x0000ad77) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39e3,	// (0x000039e3) form_midp_gauge_slider_pane_t1

0x39f1,	// (0x000039f1) form_midp_gauge_slider_pane_t2

0xcfb5,	// (0x0000cfb5) form_midp_gauge_slider_pane_t3

0xcfc5,	// (0x0000cfc5) form_midp_gauge_slider_pane_t4

0x0003,

0xf375,	// (0x0000f375) form_midp_gauge_slider_pane_t

0x3a1b,	// (0x00003a1b) form_midp_slider_pane

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041_ParamLimits

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041

0x39b0,	// (0x000039b0) form_midp_gauge_wait_pane_t1_ParamLimits

0x39b0,	// (0x000039b0) form_midp_gauge_wait_pane_t1

0x39c2,	// (0x000039c2) form_midp_gauge_wait_pane_t2_ParamLimits

0x39c2,	// (0x000039c2) form_midp_gauge_wait_pane_t2

0x0001,

0xad69,	// (0x0000ad69) form_midp_gauge_wait_pane_t_ParamLimits

0xad69,	// (0x0000ad69) form_midp_gauge_wait_pane_t

0x39d4,	// (0x000039d4) form_midp_wait_pane_ParamLimits

0x39d4,	// (0x000039d4) form_midp_wait_pane

0x397a,	// (0x0000397a) form_midp_image_pane_g1

0x3983,	// (0x00003983) form_midp_image_pane_t1

0x3992,	// (0x00003992) form_midp_image_pane_t2

0x39a1,	// (0x000039a1) form_midp_image_pane_t3

0x0002,

0xad62,	// (0x0000ad62) form_midp_image_pane_t

0x3962,	// (0x00003962) list_single_midp_pane_g1

0x396b,	// (0x0000396b) list_single_midp_pane_t1

0xcf9f,	// (0x0000cf9f) list_midp_form_item_pane_ParamLimits

0xcf9f,	// (0x0000cf9f) list_midp_form_item_pane

0x2629,	// (0x00002629) list_midp_form_item_pane_t1

0x2638,	// (0x00002638) midp_ticker_pane_g1

0x2644,	// (0x00002644) midp_ticker_pane_g2

0x0001,

0xacb6,	// (0x0000acb6) midp_ticker_pane_g

0x2650,	// (0x00002650) midp_ticker_pane_t1

0x4fd9,	// (0x00004fd9) midp_editing_number_pane_t1

0x4fb7,	// (0x00004fb7) midp_editing_number_pane

0x4fc6,	// (0x00004fc6) midp_ticker_pane

0x4cc9,	// (0x00004cc9) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cd1,	// (0x00004cd1) listscroll_ai_message_pane

0x4c53,	// (0x00004c53) ai_message_heading_pane_g1_ParamLimits

0x4c53,	// (0x00004c53) ai_message_heading_pane_g1

0x4c5f,	// (0x00004c5f) ai_message_heading_pane_g2_ParamLimits

0x4c5f,	// (0x00004c5f) ai_message_heading_pane_g2

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_g3_ParamLimits

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_g3

0x4c77,	// (0x00004c77) ai_message_heading_pane_g4_ParamLimits

0x4c77,	// (0x00004c77) ai_message_heading_pane_g4

0x0003,

0xaea3,	// (0x0000aea3) ai_message_heading_pane_g_ParamLimits

0xaea3,	// (0x0000aea3) ai_message_heading_pane_g

0x4c83,	// (0x00004c83) ai_message_heading_pane_t1_ParamLimits

0x4c83,	// (0x00004c83) ai_message_heading_pane_t1

0x4c9d,	// (0x00004c9d) ai_message_heading_pane_t2_ParamLimits

0x4c9d,	// (0x00004c9d) ai_message_heading_pane_t2

0x0001,

0xaeac,	// (0x0000aeac) ai_message_heading_pane_t_ParamLimits

0xaeac,	// (0x0000aeac) ai_message_heading_pane_t

0x4caf,	// (0x00004caf) bg_popup_heading_pane_cp1_ParamLimits

0x4caf,	// (0x00004caf) bg_popup_heading_pane_cp1

0x4c41,	// (0x00004c41) list_ai_message_pane_ParamLimits

0x4c41,	// (0x00004c41) list_ai_message_pane

0x1617,	// (0x00001617) scroll_pane_cp10

0x4b8d,	// (0x00004b8d) list_ai_message_pane_g1

0x4b95,	// (0x00004b95) list_ai_message_pane_g2

0x0001,

0xae80,	// (0x0000ae80) list_ai_message_pane_g

0x4b9d,	// (0x00004b9d) list_ai_message_pane_t1_ParamLimits

0x4b9d,	// (0x00004b9d) list_ai_message_pane_t1

0x4bb2,	// (0x00004bb2) list_ai_message_pane_t2_ParamLimits

0x4bb2,	// (0x00004bb2) list_ai_message_pane_t2

0x4bc7,	// (0x00004bc7) list_ai_message_pane_t3_ParamLimits

0x4bc7,	// (0x00004bc7) list_ai_message_pane_t3

0x4bdc,	// (0x00004bdc) list_ai_message_pane_t4_ParamLimits

0x4bdc,	// (0x00004bdc) list_ai_message_pane_t4

0x0003,

0xae85,	// (0x0000ae85) list_ai_message_pane_t_ParamLimits

0xae85,	// (0x0000ae85) list_ai_message_pane_t

0xd251,	// (0x0000d251) cell_ai_soft_ind_pane_ParamLimits

0xd251,	// (0x0000d251) cell_ai_soft_ind_pane

0x2662,	// (0x00002662) cell_ai_soft_ind_pane_g1_ParamLimits

0x2662,	// (0x00002662) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x266f,	// (0x0000266f) text_secondary_cp56_ParamLimits

0x266f,	// (0x0000266f) text_secondary_cp56

0x4b4c,	// (0x00004b4c) example_general_pane_ParamLimits

0x4b4c,	// (0x00004b4c) example_general_pane

0x4b58,	// (0x00004b58) example_parent_pane_g1_ParamLimits

0x4b58,	// (0x00004b58) example_parent_pane_g1

0x4b64,	// (0x00004b64) example_parent_pane_t1_ParamLimits

0x4b64,	// (0x00004b64) example_parent_pane_t1

0xc7ec,	// (0x0000c7ec) popup_preview_text_window_ParamLimits

0xc7ec,	// (0x0000c7ec) popup_preview_text_window

0x24a0,	// (0x000024a0) list_single_pane_cp2_g4

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane

0x4899,	// (0x00004899) popup_preview_text_window_t1_ParamLimits

0x4899,	// (0x00004899) popup_preview_text_window_t1

0x48b7,	// (0x000048b7) popup_preview_text_window_t2_ParamLimits

0x48b7,	// (0x000048b7) popup_preview_text_window_t2

0x4900,	// (0x00004900) popup_preview_text_window_t3_ParamLimits

0x4900,	// (0x00004900) popup_preview_text_window_t3

0x4945,	// (0x00004945) popup_preview_text_window_t4_ParamLimits

0x4945,	// (0x00004945) popup_preview_text_window_t4

0x0004,

0xae54,	// (0x0000ae54) popup_preview_text_window_t_ParamLimits

0xae54,	// (0x0000ae54) popup_preview_text_window_t

0x49c3,	// (0x000049c3) scroll_pane_cp11

0x35f7,	// (0x000035f7) bg_popup_preview_window_pane_g1

0x4859,	// (0x00004859) bg_popup_preview_window_pane_g2

0x4861,	// (0x00004861) bg_popup_preview_window_pane_g3

0x4869,	// (0x00004869) bg_popup_preview_window_pane_g4

0x4871,	// (0x00004871) bg_popup_preview_window_pane_g5

0x4879,	// (0x00004879) bg_popup_preview_window_pane_g6

0x4881,	// (0x00004881) bg_popup_preview_window_pane_g7

0x4889,	// (0x00004889) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc768,	// (0x0000c768) popup_midp_note_alarm_window_ParamLimits

0xc768,	// (0x0000c768) popup_midp_note_alarm_window

0x1319,	// (0x00001319) data_form_pane_ParamLimits

0xbdb9,	// (0x0000bdb9) form_field_data_pane_g1

0xbdc3,	// (0x0000bdc3) form_field_data_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_ParamLimits

0x1357,	// (0x00001357) data_form_wide_pane_ParamLimits

0x1363,	// (0x00001363) form_field_data_wide_pane_g1

0x1383,	// (0x00001383) form_field_data_wide_pane_t1_ParamLimits

0x0b6f,	// (0x00000b6f) input_focus_pane_cp6_ParamLimits

0xbecf,	// (0x0000becf) input_popup_find_pane_g1_ParamLimits

0xbecf,	// (0x0000becf) input_popup_find_pane_g1

0x1944,	// (0x00001944) aid_navi_side_left_pane

0x1959,	// (0x00001959) aid_navi_side_right_pane

0x4114,	// (0x00004114) bg_popup_window_pane_cp30_ParamLimits

0x4114,	// (0x00004114) bg_popup_window_pane_cp30

0x418e,	// (0x0000418e) popup_midp_note_alarm_window_g1_ParamLimits

0x418e,	// (0x0000418e) popup_midp_note_alarm_window_g1

0x41be,	// (0x000041be) popup_midp_note_alarm_window_t1_ParamLimits

0x41be,	// (0x000041be) popup_midp_note_alarm_window_t1

0x425f,	// (0x0000425f) popup_midp_note_alarm_window_t2_ParamLimits

0x425f,	// (0x0000425f) popup_midp_note_alarm_window_t2

0x430d,	// (0x0000430d) popup_midp_note_alarm_window_t3_ParamLimits

0x430d,	// (0x0000430d) popup_midp_note_alarm_window_t3

0x433f,	// (0x0000433f) popup_midp_note_alarm_window_t4_ParamLimits

0x433f,	// (0x0000433f) popup_midp_note_alarm_window_t4

0x4365,	// (0x00004365) popup_midp_note_alarm_window_t5_ParamLimits

0x4365,	// (0x00004365) popup_midp_note_alarm_window_t5

0x000a,

0xadf1,	// (0x0000adf1) popup_midp_note_alarm_window_t_ParamLimits

0xadf1,	// (0x0000adf1) popup_midp_note_alarm_window_t

0x4411,	// (0x00004411) wait_bar_pane_cp1_ParamLimits

0x4411,	// (0x00004411) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3df2,	// (0x00003df2) wait_border_pane_g1_copy1

0x139a,	// (0x0000139a) form_field_popup_pane_g1

0xbddd,	// (0x0000bddd) form_field_popup_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp7_ParamLimits

0x13bc,	// (0x000013bc) list_form_pane_ParamLimits

0x13c8,	// (0x000013c8) form_field_popup_wide_pane_g1

0x13d0,	// (0x000013d0) form_field_popup_wide_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp8_ParamLimits

0x13e5,	// (0x000013e5) list_form_wide_pane_ParamLimits

0x5214,	// (0x00005214) aid_size_cell_graphic_pane

0xbe5c,	// (0x0000be5c) data_form_pane_t1_ParamLimits

0xd3f2,	// (0x0000d3f2) data_form_wide_pane_t1_ParamLimits

0xcbae,	// (0x0000cbae) bg_status_flat_pane

0xb6ce,	// (0x0000b6ce) title_pane_t1_ParamLimits

0x04c1,	// (0x000004c1) title_pane_t2_ParamLimits

0x04e7,	// (0x000004e7) title_pane_t3_ParamLimits

0xf24d,	// (0x0000f24d) title_pane_t_ParamLimits

0x1c5a,	// (0x00001c5a) level_1_signal_ParamLimits

0x1c67,	// (0x00001c67) level_2_signal_ParamLimits

0x1c74,	// (0x00001c74) level_3_signal_ParamLimits

0x1c81,	// (0x00001c81) level_4_signal_ParamLimits

0x1c8e,	// (0x00001c8e) level_5_signal_ParamLimits

0x1c9b,	// (0x00001c9b) level_6_signal_ParamLimits

0x1ca8,	// (0x00001ca8) level_7_signal_ParamLimits

0x1c5a,	// (0x00001c5a) level_1_battery_ParamLimits

0x1c67,	// (0x00001c67) level_2_battery_ParamLimits

0x1c74,	// (0x00001c74) level_3_battery_ParamLimits

0x1c81,	// (0x00001c81) level_4_battery_ParamLimits

0x1c8e,	// (0x00001c8e) level_5_battery_ParamLimits

0x1c9b,	// (0x00001c9b) level_6_battery_ParamLimits

0x1ca8,	// (0x00001ca8) level_7_battery_ParamLimits

0x4019,	// (0x00004019) bg_status_flat_pane_g1

0x4021,	// (0x00004021) bg_status_flat_pane_g2

0x4029,	// (0x00004029) bg_status_flat_pane_g3

0x4031,	// (0x00004031) bg_status_flat_pane_g4

0x4039,	// (0x00004039) bg_status_flat_pane_g5

0x4041,	// (0x00004041) bg_status_flat_pane_g6

0x4049,	// (0x00004049) bg_status_flat_pane_g7

0xb75a,	// (0x0000b75a) tabs_3_active_pane_t1_ParamLimits

0xb75a,	// (0x0000b75a) tabs_3_passive_pane_t1_ParamLimits

0xb76c,	// (0x0000b76c) tabs_4_active_pane_t1_ParamLimits

0xb76c,	// (0x0000b76c) tabs_4_1_passive_pane_t1_ParamLimits

0xbee5,	// (0x0000bee5) tabs_2_active_pane_t1_ParamLimits

0xbee5,	// (0x0000bee5) tabs_2_passive_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_ParamLimits

0xbef7,	// (0x0000bef7) tabs_2_long_active_pane_t1_ParamLimits

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp4_ParamLimits

0x36bc,	// (0x000036bc) list_single_midp_graphic_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_ParamLimits

0xbf0a,	// (0x0000bf0a) tabs_3_long_active_pane_t1_ParamLimits

0x2ad4,	// (0x00002ad4) bg_passive_tab_pane_cp5_ParamLimits

0x36bc,	// (0x000036bc) list_single_midp_graphic_pane_t1

0xcbae,	// (0x0000cbae) bg_status_flat_pane_ParamLimits

0x3203,	// (0x00003203) indicator_pane_cp2_ParamLimits

0x3203,	// (0x00003203) indicator_pane_cp2

0xcd2c,	// (0x0000cd2c) navi_pane_srt_ParamLimits

0xcd2c,	// (0x0000cd2c) navi_pane_srt

0x3352,	// (0x00003352) popup_clock_digital_analogue_window_cp1

0x0681,	// (0x00000681) indicator_pane_t1

0x2563,	// (0x00002563) copy_highlight_pane

0x2563,	// (0x00002563) cursor_graphics_pane

0x2563,	// (0x00002563) graphic_within_text_pane

0x2563,	// (0x00002563) link_highlight_pane

0x4986,	// (0x00004986) popup_preview_text_window_t5_ParamLimits

0x4986,	// (0x00004986) popup_preview_text_window_t5

0x2689,	// (0x00002689) cursor_digital_pane

0x2689,	// (0x00002689) cursor_primary_pane

0x269a,	// (0x0000269a) cursor_primary_small_pane

0x26a2,	// (0x000026a2) cursor_secondary_pane

0x26aa,	// (0x000026aa) cursor_title_pane

0x2689,	// (0x00002689) link_highlight_digital_pane

0x2691,	// (0x00002691) link_highlight_primary_pane

0x269a,	// (0x0000269a) link_highlight_primary_small_pane

0x26a2,	// (0x000026a2) link_highlight_secondary_pane

0x26aa,	// (0x000026aa) link_highlight_title_pane

0x2689,	// (0x00002689) copy_highlight_digital_pane

0x2689,	// (0x00002689) copy_highlight_primary_pane

0x269a,	// (0x0000269a) copy_highlight_primary_small_pane

0x26a2,	// (0x000026a2) copy_highlight_secondary_pane

0x26aa,	// (0x000026aa) copy_highlight_title_pane

0x26a2,	// (0x000026a2) graphic_text_digital_pane

0x40b7,	// (0x000040b7) graphic_text_primary_pane

0x40c0,	// (0x000040c0) graphic_text_primary_small_pane

0x269a,	// (0x0000269a) graphic_text_secondary_pane

0x2689,	// (0x00002689) graphic_text_title_pane

0xc1dd,	// (0x0000c1dd) cursor_primary_pane_g1

0x40a9,	// (0x000040a9) cursor_text_primary_t1

0xd052,	// (0x0000d052) cursor_primary_small_pane_g1

0x409b,	// (0x0000409b) cursor_text_primary_small_t1

0xd048,	// (0x0000d048) cursor_primary_small_pane_g1_copy1

0x4083,	// (0x00004083) cursor_text_primary_small_t1_copy1

0x4061,	// (0x00004061) cursor_text_title_t1

0xd03e,	// (0x0000d03e) cursor_title_pane_g1

0xc1dd,	// (0x0000c1dd) cursor_digital_pane_g1

0x26bc,	// (0x000026bc) cursor_text_digital_t1

0x4002,	// (0x00004002) link_highlight_primary_pane_g1

0x400a,	// (0x0000400a) link_highlight_primary_pane_t1

0x26ca,	// (0x000026ca) link_highlight_primary_small_pane_g1

0x26d2,	// (0x000026d2) link_highlight_primary_small_pane_t1

0x26ca,	// (0x000026ca) link_highlight_secondary_pane_g1

0x26e1,	// (0x000026e1) link_highlight_secondary_pane_t1

0x3f76,	// (0x00003f76) link_highlight_title_pane_g1

0x3f7e,	// (0x00003f7e) link_highlight_title_pane_t1

0x3f5f,	// (0x00003f5f) link_highlight_digital_pane_g1

0x3f67,	// (0x00003f67) link_highlight_digital_pane_t1

0x3e37,	// (0x00003e37) copy_highlight_primary_pane_g1

0x3e3f,	// (0x00003e3f) copy_highlight_primary_pane_t1

0x3e11,	// (0x00003e11) copy_highlight_primary_small_pane_g1

0x3e28,	// (0x00003e28) copy_highlight_primary_small_pane_t1

0x26f0,	// (0x000026f0) copy_highlight_secondary_pane_g1

0x26f8,	// (0x000026f8) copy_highlight_secondary_pane_t1

0x3e11,	// (0x00003e11) copy_highlight_title_pane_g1

0x3e19,	// (0x00003e19) copy_highlight_title_pane_t1

0x3e37,	// (0x00003e37) copy_highlight_digital_pane_g1

0x5496,	// (0x00005496) copy_highlight_digital_pane_t1

0x53ea,	// (0x000053ea) graphic_text_primary_pane_g1

0x547a,	// (0x0000547a) graphic_text_primary_pane_t1

0x5488,	// (0x00005488) graphic_text_primary_pane_t2

0x0001,

0xaf20,	// (0x0000af20) graphic_text_primary_pane_t

0x5456,	// (0x00005456) graphic_text_primary_small_pane_g1

0x545e,	// (0x0000545e) graphic_text_primary_small_pane_t1

0x546c,	// (0x0000546c) graphic_text_primary_small_pane_t2

0x0001,

0xaf1b,	// (0x0000af1b) graphic_text_primary_small_pane_t

0x5432,	// (0x00005432) graphic_text_secondary_pane_g1

0x543a,	// (0x0000543a) graphic_text_secondary_pane_t1

0x5448,	// (0x00005448) graphic_text_secondary_pane_t2

0x0001,

0xaf16,	// (0x0000af16) graphic_text_secondary_pane_t

0x540e,	// (0x0000540e) graphic_text_title_pane_g1

0x5416,	// (0x00005416) graphic_text_title_pane_t1

0x5424,	// (0x00005424) graphic_text_title_pane_t2

0x0001,

0xaf11,	// (0x0000af11) graphic_text_title_pane_t

0x53ea,	// (0x000053ea) graphic_text_digital_pane_g1

0x53f2,	// (0x000053f2) graphic_text_digital_pane_t1

0x5400,	// (0x00005400) graphic_text_digital_pane_t2

0x0001,

0xaf0c,	// (0x0000af0c) graphic_text_digital_pane_t

0x04f9,	// (0x000004f9) navi_icon_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04f9,	// (0x000004f9) navi_text_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_text_pane_srt

0x53b5,	// (0x000053b5) navi_navi_icon_text_pane_srt

0x53bd,	// (0x000053bd) navi_navi_pane_srt_g1_ParamLimits

0x53bd,	// (0x000053bd) navi_navi_pane_srt_g1

0x53cf,	// (0x000053cf) navi_navi_pane_srt_g2_ParamLimits

0x53cf,	// (0x000053cf) navi_navi_pane_srt_g2

0x0001,

0xaf07,	// (0x0000af07) navi_navi_pane_srt_g_ParamLimits

0xaf07,	// (0x0000af07) navi_navi_pane_srt_g

0x53e1,	// (0x000053e1) navi_navi_tabs_pane_srt

0x53b5,	// (0x000053b5) navi_navi_text_pane_srt

0x53b5,	// (0x000053b5) navi_navi_volume_pane_srt

0x53a6,	// (0x000053a6) navi_navi_text_pane_srt_t1

0x5381,	// (0x00005381) navi_navi_volume_pane_srt_g1

0x5389,	// (0x00005389) volume_small_pane_srt_ParamLimits

0x5389,	// (0x00005389) volume_small_pane_srt

0x2707,	// (0x00002707) volume_small_pane_srt_g1_ParamLimits

0x2707,	// (0x00002707) volume_small_pane_srt_g1

0x2717,	// (0x00002717) volume_small_pane_srt_g2_ParamLimits

0x2717,	// (0x00002717) volume_small_pane_srt_g2

0x2728,	// (0x00002728) volume_small_pane_srt_g3_ParamLimits

0x2728,	// (0x00002728) volume_small_pane_srt_g3

0x2739,	// (0x00002739) volume_small_pane_srt_g4_ParamLimits

0x2739,	// (0x00002739) volume_small_pane_srt_g4

0x274a,	// (0x0000274a) volume_small_pane_srt_g5_ParamLimits

0x274a,	// (0x0000274a) volume_small_pane_srt_g5

0x275b,	// (0x0000275b) volume_small_pane_srt_g6_ParamLimits

0x275b,	// (0x0000275b) volume_small_pane_srt_g6

0x276c,	// (0x0000276c) volume_small_pane_srt_g7_ParamLimits

0x276c,	// (0x0000276c) volume_small_pane_srt_g7

0x277d,	// (0x0000277d) volume_small_pane_srt_g8_ParamLimits

0x277d,	// (0x0000277d) volume_small_pane_srt_g8

0x278e,	// (0x0000278e) volume_small_pane_srt_g9_ParamLimits

0x278e,	// (0x0000278e) volume_small_pane_srt_g9

0x279f,	// (0x0000279f) volume_small_pane_srt_g10_ParamLimits

0x279f,	// (0x0000279f) volume_small_pane_srt_g10

0x0009,

0xacbb,	// (0x0000acbb) volume_small_pane_srt_g_ParamLimits

0xacbb,	// (0x0000acbb) volume_small_pane_srt_g

0x0972,	// (0x00000972) query_popup_data_pane_cp2

0x536f,	// (0x0000536f) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x536f,	// (0x0000536f) navi_navi_icon_text_pane_srt_t1

0x40b7,	// (0x000040b7) navi_tabs_2_long_pane_srt

0x40b7,	// (0x000040b7) navi_tabs_2_pane_srt

0x40b7,	// (0x000040b7) navi_tabs_3_long_pane_srt

0x40b7,	// (0x000040b7) navi_tabs_3_pane_srt

0x40b7,	// (0x000040b7) navi_tabs_4_pane_srt

0x5347,	// (0x00005347) tabs_2_active_pane_srt_ParamLimits

0x5347,	// (0x00005347) tabs_2_active_pane_srt

0x5357,	// (0x00005357) tabs_2_passive_pane_srt_ParamLimits

0x5357,	// (0x00005357) tabs_2_passive_pane_srt

0x3791,	// (0x00003791) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3791,	// (0x00003791) bg_passive_tab_pane_cp1_srt

0x531b,	// (0x0000531b) bg_passive_tab_pane_g1_cp1_srt

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp1_srt

0x5324,	// (0x00005324) bg_passive_tab_pane_g3_cp1_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt

0x532d,	// (0x0000532d) tabs_2_active_pane_srt_g1

0xd533,	// (0x0000d533) tabs_2_active_pane_srt_t1_ParamLimits

0xd533,	// (0x0000d533) tabs_2_active_pane_srt_t1

0x531b,	// (0x0000531b) bg_active_tab_pane_g1_cp1_srt

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp1_srt

0x5324,	// (0x00005324) bg_active_tab_pane_g3_cp1_srt

0x52e8,	// (0x000052e8) tabs_3_active_pane_srt_ParamLimits

0x52e8,	// (0x000052e8) tabs_3_active_pane_srt

0x52f9,	// (0x000052f9) tabs_3_passive_pane_cp_srt_ParamLimits

0x52f9,	// (0x000052f9) tabs_3_passive_pane_cp_srt

0x530a,	// (0x0000530a) tabs_3_passive_pane_srt_ParamLimits

0x530a,	// (0x0000530a) tabs_3_passive_pane_srt

0x3791,	// (0x00003791) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3791,	// (0x00003791) bg_passive_tab_pane_cp2_srt

0x27b0,	// (0x000027b0) bg_passive_tab_pane_g1_cp2_srt

0x2073,	// (0x00002073) bg_passive_tab_pane_g2_cp2_srt

0x27b9,	// (0x000027b9) bg_passive_tab_pane_g3_cp2_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt

0x52ce,	// (0x000052ce) tabs_3_active_pane_srt_g1

0xd51d,	// (0x0000d51d) tabs_3_active_pane_srt_t1_ParamLimits

0xd51d,	// (0x0000d51d) tabs_3_active_pane_srt_t1

0x27b0,	// (0x000027b0) bg_active_tab_pane_g1_cp2_srt

0x2073,	// (0x00002073) bg_active_tab_pane_g2_cp2_srt

0x27b9,	// (0x000027b9) bg_active_tab_pane_g3_cp2_srt

0x5286,	// (0x00005286) tabs_4_active_pane_srt_ParamLimits

0x5286,	// (0x00005286) tabs_4_active_pane_srt

0x5298,	// (0x00005298) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5298,	// (0x00005298) tabs_4_passive_pane_cp2_srt

0x2a52,	// (0x00002a52) aid_size_cell_toolbar

0x4e05,	// (0x00004e05) main_idle_act_pane_ParamLimits

0x2c77,	// (0x00002c77) popup_large_graphic_colour_window_ParamLimits

0xca72,	// (0x0000ca72) popup_toolbar_window_ParamLimits

0xca72,	// (0x0000ca72) popup_toolbar_window

0x5004,	// (0x00005004) list_single_graphic_2heading_pane_ParamLimits

0x5004,	// (0x00005004) list_single_graphic_2heading_pane

0x19d0,	// (0x000019d0) aid_size_cell_apps_grid_lsc_pane

0x19e2,	// (0x000019e2) aid_size_cell_apps_grid_prt_pane

0x2ad4,	// (0x00002ad4) bg_wml_button_pane_cp1_ParamLimits

0x2ad4,	// (0x00002ad4) bg_wml_button_pane_cp1

0xcfd5,	// (0x0000cfd5) form_midp_field_text_pane_t1_ParamLimits

0x3791,	// (0x00003791) input_focus_pane_cp050_ParamLimits

0x3aab,	// (0x00003aab) list_midp_form_text_pane_ParamLimits

0x3a4d,	// (0x00003a4d) input_focus_pane_cp051_ParamLimits

0x3a61,	// (0x00003a61) list_midp_choice_pane_ParamLimits

0xcf69,	// (0x0000cf69) list_single_2graphic_pane_cp3_ParamLimits

0xcf69,	// (0x0000cf69) list_single_2graphic_pane_cp3

0xcf7e,	// (0x0000cf7e) list_single_midp_graphic_pane_ParamLimits

0xcf7e,	// (0x0000cf7e) list_single_midp_graphic_pane

0x0e2b,	// (0x00000e2b) list_single_graphic_2heading_pane_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_2heading_pane_g1

0x0db1,	// (0x00000db1) list_single_graphic_2heading_pane_g4_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_2heading_pane_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_2heading_pane_g5

0x0002,

0xad0e,	// (0x0000ad0e) list_single_graphic_2heading_pane_g_ParamLimits

0xad0e,	// (0x0000ad0e) list_single_graphic_2heading_pane_g

0x34a9,	// (0x000034a9) list_single_graphic_2heading_pane_t1_ParamLimits

0x34a9,	// (0x000034a9) list_single_graphic_2heading_pane_t1

0x34bd,	// (0x000034bd) list_single_graphic_2heading_pane_t2_ParamLimits

0x34bd,	// (0x000034bd) list_single_graphic_2heading_pane_t2

0x34d7,	// (0x000034d7) list_single_graphic_2heading_pane_t3_ParamLimits

0x34d7,	// (0x000034d7) list_single_graphic_2heading_pane_t3

0x0002,

0xad15,	// (0x0000ad15) list_single_graphic_2heading_pane_t_ParamLimits

0xad15,	// (0x0000ad15) list_single_graphic_2heading_pane_t

0x34ef,	// (0x000034ef) bg_popup_sub_pane_cp2

0x3519,	// (0x00003519) grid_toobar_pane

0x3555,	// (0x00003555) cell_toolbar_pane_ParamLimits

0x3555,	// (0x00003555) cell_toolbar_pane

0x359b,	// (0x0000359b) cell_toolbar_pane_g1_ParamLimits

0x359b,	// (0x0000359b) cell_toolbar_pane_g1

0x35af,	// (0x000035af) cell_toolbar_pane_g2_ParamLimits

0x35af,	// (0x000035af) cell_toolbar_pane_g2

0x0001,

0xad1c,	// (0x0000ad1c) cell_toolbar_pane_g_ParamLimits

0xad1c,	// (0x0000ad1c) cell_toolbar_pane_g

0x35d1,	// (0x000035d1) grid_highlight_pane_cp2_ParamLimits

0x35d1,	// (0x000035d1) grid_highlight_pane_cp2

0x35eb,	// (0x000035eb) toolbar_button_pane

0x35f7,	// (0x000035f7) toolbar_button_pane_g1

0x35ff,	// (0x000035ff) toolbar_button_pane_g2

0x3607,	// (0x00003607) toolbar_button_pane_g3

0x360f,	// (0x0000360f) toolbar_button_pane_g4

0x3617,	// (0x00003617) toolbar_button_pane_g5

0x361f,	// (0x0000361f) toolbar_button_pane_g6

0x3627,	// (0x00003627) toolbar_button_pane_g7

0x362f,	// (0x0000362f) toolbar_button_pane_g8

0x3637,	// (0x00003637) toolbar_button_pane_g9

0x0009,

0xad21,	// (0x0000ad21) toolbar_button_pane_g

0x3647,	// (0x00003647) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3647,	// (0x00003647) list_single_2graphic_pane_g1_cp3

0xcecb,	// (0x0000cecb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcecb,	// (0x0000cecb) list_single_2graphic_pane_g2_cp3

0x239f,	// (0x0000239f) list_single_2graphic_pane_g3_cp3

0x3664,	// (0x00003664) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3664,	// (0x00003664) list_single_2graphic_pane_g4_cp3

0x3670,	// (0x00003670) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3670,	// (0x00003670) list_single_2graphic_pane_t1_cp3

0x2393,	// (0x00002393) list_single_midp_graphic_pane_g2_ParamLimits

0x2393,	// (0x00002393) list_single_midp_graphic_pane_g2

0x2a5a,	// (0x00002a5a) aid_zoom_text_primary

0x2a62,	// (0x00002a62) aid_zoom_text_secondary

0xc235,	// (0x0000c235) status_small_pane_g7_ParamLimits

0xc235,	// (0x0000c235) status_small_pane_g7

0xc258,	// (0x0000c258) status_small_pane_t1_ParamLimits

0xb6aa,	// (0x0000b6aa) title_pane_g2

0x0003,

0xf244,	// (0x0000f244) title_pane_g

0xb922,	// (0x0000b922) aid_size_cell_colour_1_pane_ParamLimits

0xb922,	// (0x0000b922) aid_size_cell_colour_1_pane

0xb936,	// (0x0000b936) aid_size_cell_colour_2_pane_ParamLimits

0xb936,	// (0x0000b936) aid_size_cell_colour_2_pane

0xb94a,	// (0x0000b94a) aid_size_cell_colour_3_pane_ParamLimits

0xb94a,	// (0x0000b94a) aid_size_cell_colour_3_pane

0xb95e,	// (0x0000b95e) aid_size_cell_colour_4_pane_ParamLimits

0xb95e,	// (0x0000b95e) aid_size_cell_colour_4_pane

0x184b,	// (0x0000184b) title_pane_stacon_g1_ParamLimits

0x184b,	// (0x0000184b) title_pane_stacon_g1

0x3e96,	// (0x00003e96) popup_note_wait_window_g3_ParamLimits

0x3e96,	// (0x00003e96) popup_note_wait_window_g3

0x3f0c,	// (0x00003f0c) popup_note_wait_window_t5_ParamLimits

0x3f0c,	// (0x00003f0c) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc48e,	// (0x0000c48e) popup_feb_china_hwr_fs_window_ParamLimits

0xc48e,	// (0x0000c48e) popup_feb_china_hwr_fs_window

0xcedc,	// (0x0000cedc) aid_size_cell_hwr_fs_ParamLimits

0xcedc,	// (0x0000cedc) aid_size_cell_hwr_fs

0x3791,	// (0x00003791) bg_popup_sub_pane_cp3_ParamLimits

0x3791,	// (0x00003791) bg_popup_sub_pane_cp3

0xcef1,	// (0x0000cef1) grid_hwr_fs_pane_ParamLimits

0xcef1,	// (0x0000cef1) grid_hwr_fs_pane

0x37b5,	// (0x000037b5) linegrid_hwr_fs_pane_ParamLimits

0x37b5,	// (0x000037b5) linegrid_hwr_fs_pane

0xcf09,	// (0x0000cf09) cell_hwr_fs_pane_ParamLimits

0xcf09,	// (0x0000cf09) cell_hwr_fs_pane

0x37e7,	// (0x000037e7) linegrid_hwr_fs_pane_g1_ParamLimits

0x37e7,	// (0x000037e7) linegrid_hwr_fs_pane_g1

0xcf2f,	// (0x0000cf2f) linegrid_hwr_fs_pane_g2_ParamLimits

0xcf2f,	// (0x0000cf2f) linegrid_hwr_fs_pane_g2

0x3805,	// (0x00003805) linegrid_hwr_fs_pane_g3_ParamLimits

0x3805,	// (0x00003805) linegrid_hwr_fs_pane_g3

0x3811,	// (0x00003811) linegrid_hwr_fs_pane_g4_ParamLimits

0x3811,	// (0x00003811) linegrid_hwr_fs_pane_g4

0x382b,	// (0x0000382b) linegrid_hwr_fs_pane_g5_ParamLimits

0x382b,	// (0x0000382b) linegrid_hwr_fs_pane_g5

0x0004,

0xf361,	// (0x0000f361) linegrid_hwr_fs_pane_g_ParamLimits

0xf361,	// (0x0000f361) linegrid_hwr_fs_pane_g

0x3841,	// (0x00003841) cell_hwr_fs_pane_g1_ParamLimits

0x3841,	// (0x00003841) cell_hwr_fs_pane_g1

0x33e0,	// (0x000033e0) cell_hwr_fs_pane_g2_ParamLimits

0x33e0,	// (0x000033e0) cell_hwr_fs_pane_g2

0xcf41,	// (0x0000cf41) cell_hwr_fs_pane_g3_ParamLimits

0xcf41,	// (0x0000cf41) cell_hwr_fs_pane_g3

0xcf4e,	// (0x0000cf4e) cell_hwr_fs_pane_g4_ParamLimits

0xcf4e,	// (0x0000cf4e) cell_hwr_fs_pane_g4

0x0003,

0xf36c,	// (0x0000f36c) cell_hwr_fs_pane_g_ParamLimits

0xf36c,	// (0x0000f36c) cell_hwr_fs_pane_g

0xcf5b,	// (0x0000cf5b) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x15fe,	// (0x000015fe) aid_inside_area_popup_secondary

0xd14c,	// (0x0000d14c) aid_inside_area_window_primary_ParamLimits

0xd14c,	// (0x0000d14c) aid_inside_area_window_primary

0x54a5,	// (0x000054a5) ai2_news_ticker_pane

0x54ad,	// (0x000054ad) aid_size_cell_ai1_link_ParamLimits

0x54ad,	// (0x000054ad) aid_size_cell_ai1_link

0x54c7,	// (0x000054c7) popup_ai2_data_window_ParamLimits

0x54c7,	// (0x000054c7) popup_ai2_data_window

0x54db,	// (0x000054db) popup_ai2_link_window_ParamLimits

0x54db,	// (0x000054db) popup_ai2_link_window

0x3791,	// (0x00003791) bg_popup_sub_pane_cp4_ParamLimits

0x3791,	// (0x00003791) bg_popup_sub_pane_cp4

0x54ef,	// (0x000054ef) grid_ai2_link_pane_ParamLimits

0x54ef,	// (0x000054ef) grid_ai2_link_pane

0x5506,	// (0x00005506) popup_ai2_link_window_g1_ParamLimits

0x5506,	// (0x00005506) popup_ai2_link_window_g1

0x5512,	// (0x00005512) popup_ai2_link_window_g2_ParamLimits

0x5512,	// (0x00005512) popup_ai2_link_window_g2

0x0001,

0xaf25,	// (0x0000af25) popup_ai2_link_window_g_ParamLimits

0xaf25,	// (0x0000af25) popup_ai2_link_window_g

0x5521,	// (0x00005521) ai2_mp_button_pane

0x5529,	// (0x00005529) ai2_mp_volume_pane

0x3a4d,	// (0x00003a4d) bg_popup_sub_pane_cp5_ParamLimits

0x3a4d,	// (0x00003a4d) bg_popup_sub_pane_cp5

0x5531,	// (0x00005531) heading_ai2_gene_pane_ParamLimits

0x5531,	// (0x00005531) heading_ai2_gene_pane

0x553d,	// (0x0000553d) list_ai2_gene_pane_ParamLimits

0x553d,	// (0x0000553d) list_ai2_gene_pane

0x5585,	// (0x00005585) cell_ai2_link_pane_ParamLimits

0x5585,	// (0x00005585) cell_ai2_link_pane

0x559b,	// (0x0000559b) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x566c,	// (0x0000566c) ai2_mp_volume_pane_g1

0x5674,	// (0x00005674) ai2_mp_volume_pane_g2

0x55e1,	// (0x000055e1) list_ai2_gene_pane_t1

0x567c,	// (0x0000567c) ai2_mp_volume_pane_g3

0x0002,

0xaf3e,	// (0x0000af3e) ai2_mp_volume_pane_g

0x5684,	// (0x00005684) volume_small_pane_cp3

0x568d,	// (0x0000568d) aid_size_cell_ai2_button

0x5695,	// (0x00005695) grid_ai2_button_pane

0x569e,	// (0x0000569e) cell_ai2_button_pane_ParamLimits

0x569e,	// (0x0000569e) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x562c,	// (0x0000562c) ai2_gene_pane_t1_ParamLimits

0x562c,	// (0x0000562c) ai2_gene_pane_t1

0xc41c,	// (0x0000c41c) aid_height_parent_landscape

0xd2a0,	// (0x0000d2a0) aid_height_set_list

0x4e05,	// (0x00004e05) aid_size_parent

0x5214,	// (0x00005214) aid_size_cell_graphic_pane_ParamLimits

0x554d,	// (0x0000554d) popup_ai2_data_window_g1_ParamLimits

0x554d,	// (0x0000554d) popup_ai2_data_window_g1

0x5559,	// (0x00005559) ai2_news_ticker_pane_g1

0x5561,	// (0x00005561) ai2_news_ticker_pane_g2

0x0001,

0xaf2a,	// (0x0000af2a) ai2_news_ticker_pane_g

0x5569,	// (0x00005569) ai2_news_ticker_pane_t1

0x5577,	// (0x00005577) ai2_news_ticker_pane_t2

0x0001,

0xaf2f,	// (0x0000af2f) ai2_news_ticker_pane_t

0x55a4,	// (0x000055a4) heading_ai2_gene_pane_g1

0x55ac,	// (0x000055ac) heading_ai2_gene_pane_t1_ParamLimits

0x55ac,	// (0x000055ac) heading_ai2_gene_pane_t1

0x55c1,	// (0x000055c1) list_highlight_pane_cp6

0x55c9,	// (0x000055c9) ai2_gene_pane_ParamLimits

0x55c9,	// (0x000055c9) ai2_gene_pane

0x55ef,	// (0x000055ef) list_ai2_gene_pane_t2

0x0001,

0xaf34,	// (0x0000af34) list_ai2_gene_pane_t

0x55fd,	// (0x000055fd) list_highlight_pane_cp8_ParamLimits

0x55fd,	// (0x000055fd) list_highlight_pane_cp8

0x560e,	// (0x0000560e) ai2_gene_pane_g1_ParamLimits

0x560e,	// (0x0000560e) ai2_gene_pane_g1

0x5620,	// (0x00005620) ai2_gene_pane_g2_ParamLimits

0x5620,	// (0x00005620) ai2_gene_pane_g2

0x0001,

0xaf39,	// (0x0000af39) ai2_gene_pane_g_ParamLimits

0xaf39,	// (0x0000af39) ai2_gene_pane_g

0x0d94,	// (0x00000d94) scroll_pane_cp12

0xc3db,	// (0x0000c3db) control_pane_t3_ParamLimits

0xc3db,	// (0x0000c3db) control_pane_t3

0xc249,	// (0x0000c249) status_small_pane_g8_ParamLimits

0xc249,	// (0x0000c249) status_small_pane_g8

0xc521,	// (0x0000c521) popup_find_window_ParamLimits

0xc7a2,	// (0x0000c7a2) popup_note_image_window_ParamLimits

0x0e2b,	// (0x00000e2b) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_double2_graphic_pane_vc_g1

0x0db1,	// (0x00000db1) list_double2_graphic_pane_vc_g2_ParamLimits

0x0db1,	// (0x00000db1) list_double2_graphic_pane_vc_g2

0x0dbd,	// (0x00000dbd) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_double2_graphic_pane_vc_g3

0x0002,

0xad0e,	// (0x0000ad0e) list_double2_graphic_pane_vc_g_ParamLimits

0xad0e,	// (0x0000ad0e) list_double2_graphic_pane_vc_g

0x3585,	// (0x00003585) list_double2_graphic_pane_vc_t1_ParamLimits

0x3585,	// (0x00003585) list_double2_graphic_pane_vc_t1

0x0db1,	// (0x00000db1) list_single_heading_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_heading_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_single_heading_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_heading_pane_vc_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_heading_pane_vc_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_heading_pane_vc_g

0x368a,	// (0x0000368a) list_single_heading_pane_vc_t1_ParamLimits

0x368a,	// (0x0000368a) list_single_heading_pane_vc_t1

0x36a0,	// (0x000036a0) list_single_heading_pane_vc_t2_ParamLimits

0x36a0,	// (0x000036a0) list_single_heading_pane_vc_t2

0x0001,

0xad36,	// (0x0000ad36) list_single_heading_pane_vc_t_ParamLimits

0xad36,	// (0x0000ad36) list_single_heading_pane_vc_t

0x36d2,	// (0x000036d2) list_setting_number_pane_vc_g1_ParamLimits

0x36d2,	// (0x000036d2) list_setting_number_pane_vc_g1

0x36de,	// (0x000036de) list_setting_number_pane_vc_g2_ParamLimits

0x36de,	// (0x000036de) list_setting_number_pane_vc_g2

0x0001,

0xad3b,	// (0x0000ad3b) list_setting_number_pane_vc_g_ParamLimits

0xad3b,	// (0x0000ad3b) list_setting_number_pane_vc_g

0x36ea,	// (0x000036ea) list_setting_number_pane_vc_t1_ParamLimits

0x36ea,	// (0x000036ea) list_setting_number_pane_vc_t1

0x36fe,	// (0x000036fe) list_setting_number_pane_vc_t2_ParamLimits

0x36fe,	// (0x000036fe) list_setting_number_pane_vc_t2

0x3718,	// (0x00003718) list_setting_number_pane_vc_t3_ParamLimits

0x3718,	// (0x00003718) list_setting_number_pane_vc_t3

0x0002,

0xad40,	// (0x0000ad40) list_setting_number_pane_vc_t_ParamLimits

0xad40,	// (0x0000ad40) list_setting_number_pane_vc_t

0x3740,	// (0x00003740) set_value_pane_vc_ParamLimits

0x3740,	// (0x00003740) set_value_pane_vc

0x5004,	// (0x00005004) list_double2_graphic_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double2_graphic_pane_vc

0x5017,	// (0x00005017) list_double2_large_graphic_pane_vc_ParamLimits

0x5017,	// (0x00005017) list_double2_large_graphic_pane_vc

0x5004,	// (0x00005004) list_double2_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double2_pane_vc

0x5004,	// (0x00005004) list_double_graphic_heading_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_graphic_heading_pane_vc

0x5004,	// (0x00005004) list_double_graphic_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_graphic_pane_vc

0x5004,	// (0x00005004) list_double_heading_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_heading_pane_vc

0x5029,	// (0x00005029) list_double_large_graphic_pane_vc_ParamLimits

0x5029,	// (0x00005029) list_double_large_graphic_pane_vc

0x5004,	// (0x00005004) list_double_number_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_number_pane_vc

0x5004,	// (0x00005004) list_double_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_pane_vc

0x5004,	// (0x00005004) list_double_time_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_double_time_pane_vc

0x5004,	// (0x00005004) list_setting_number_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_setting_number_pane_vc

0x5004,	// (0x00005004) list_setting_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_setting_pane_vc

0x5004,	// (0x00005004) list_single_graphic_heading_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_single_graphic_heading_pane_vc

0x5004,	// (0x00005004) list_single_heading_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_single_heading_pane_vc

0x5004,	// (0x00005004) list_single_number_heading_pane_vc_ParamLimits

0x5004,	// (0x00005004) list_single_number_heading_pane_vc

0x56d1,	// (0x000056d1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56d1,	// (0x000056d1) list_double_graphic_heading_pane_vc_g1

0x56dd,	// (0x000056dd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56dd,	// (0x000056dd) list_double_graphic_heading_pane_vc_g2

0x56e9,	// (0x000056e9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56e9,	// (0x000056e9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaf45,	// (0x0000af45) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaf45,	// (0x0000af45) list_double_graphic_heading_pane_vc_g

0x56f5,	// (0x000056f5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56f5,	// (0x000056f5) list_double_graphic_heading_pane_vc_t1

0x5711,	// (0x00005711) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5711,	// (0x00005711) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaf4c,	// (0x0000af4c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaf4c,	// (0x0000af4c) list_double_graphic_heading_pane_vc_t

0x36d2,	// (0x000036d2) list_setting_pane_vc_g1_ParamLimits

0x36d2,	// (0x000036d2) list_setting_pane_vc_g1

0x36de,	// (0x000036de) list_setting_pane_vc_g2_ParamLimits

0x36de,	// (0x000036de) list_setting_pane_vc_g2

0x0001,

0xad3b,	// (0x0000ad3b) list_setting_pane_vc_g_ParamLimits

0xad3b,	// (0x0000ad3b) list_setting_pane_vc_g

0x5969,	// (0x00005969) list_setting_pane_vc_t1_ParamLimits

0x5969,	// (0x00005969) list_setting_pane_vc_t1

0x5983,	// (0x00005983) list_setting_pane_vc_t2_ParamLimits

0x5983,	// (0x00005983) list_setting_pane_vc_t2

0x0001,

0xaf8f,	// (0x0000af8f) list_setting_pane_vc_t_ParamLimits

0xaf8f,	// (0x0000af8f) list_setting_pane_vc_t

0x3740,	// (0x00003740) set_value_pane_cp_vc_ParamLimits

0x3740,	// (0x00003740) set_value_pane_cp_vc

0x0db1,	// (0x00000db1) list_single_number_heading_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_heading_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_vc_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_single_number_heading_pane_vc_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_single_number_heading_pane_vc_g

0x368a,	// (0x0000368a) list_single_number_heading_pane_vc_t1_ParamLimits

0x368a,	// (0x0000368a) list_single_number_heading_pane_vc_t1

0x599b,	// (0x0000599b) list_single_number_heading_pane_vc_t2_ParamLimits

0x599b,	// (0x0000599b) list_single_number_heading_pane_vc_t2

0x0e19,	// (0x00000e19) list_single_number_heading_pane_vc_t3_ParamLimits

0x0e19,	// (0x00000e19) list_single_number_heading_pane_vc_t3

0x0002,

0xaf94,	// (0x0000af94) list_single_number_heading_pane_vc_t_ParamLimits

0xaf94,	// (0x0000af94) list_single_number_heading_pane_vc_t

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_vc_g1

0x0db1,	// (0x00000db1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_heading_pane_vc_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xad0e,	// (0x0000ad0e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xad0e,	// (0x0000ad0e) list_single_graphic_heading_pane_vc_g

0x368a,	// (0x0000368a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x368a,	// (0x0000368a) list_single_graphic_heading_pane_vc_t1

0x59af,	// (0x000059af) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59af,	// (0x000059af) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf9b,	// (0x0000af9b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf9b,	// (0x0000af9b) list_single_graphic_heading_pane_vc_t

0x0db1,	// (0x00000db1) list_double2_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double2_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double2_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double2_pane_vc_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_double2_pane_vc_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_double2_pane_vc_g

0x4fa1,	// (0x00004fa1) list_double2_pane_vc_t1_ParamLimits

0x4fa1,	// (0x00004fa1) list_double2_pane_vc_t1

0x59c3,	// (0x000059c3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59c3,	// (0x000059c3) list_double2_large_graphic_pane_vc_g1

0x59cf,	// (0x000059cf) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59cf,	// (0x000059cf) list_double2_large_graphic_pane_vc_g2

0x59db,	// (0x000059db) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59db,	// (0x000059db) list_double2_large_graphic_pane_vc_g3

0x0002,

0xafa0,	// (0x0000afa0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xafa0,	// (0x0000afa0) list_double2_large_graphic_pane_vc_g

0x59e7,	// (0x000059e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59e7,	// (0x000059e7) list_double2_large_graphic_pane_vc_t1

0x59fd,	// (0x000059fd) list_double_time_pane_vc_g1_ParamLimits

0x59fd,	// (0x000059fd) list_double_time_pane_vc_g1

0x5a09,	// (0x00005a09) list_double_time_pane_vc_g2_ParamLimits

0x5a09,	// (0x00005a09) list_double_time_pane_vc_g2

0x0001,

0xafa7,	// (0x0000afa7) list_double_time_pane_vc_g_ParamLimits

0xafa7,	// (0x0000afa7) list_double_time_pane_vc_g

0x5a15,	// (0x00005a15) list_double_time_pane_vc_t1_ParamLimits

0x5a15,	// (0x00005a15) list_double_time_pane_vc_t1

0x5a33,	// (0x00005a33) list_double_time_pane_vc_t2_ParamLimits

0x5a33,	// (0x00005a33) list_double_time_pane_vc_t2

0x5a5d,	// (0x00005a5d) list_double_time_pane_vc_t3_ParamLimits

0x5a5d,	// (0x00005a5d) list_double_time_pane_vc_t3

0x5a6f,	// (0x00005a6f) list_double_time_pane_vc_t4_ParamLimits

0x5a6f,	// (0x00005a6f) list_double_time_pane_vc_t4

0x0003,

0xafac,	// (0x0000afac) list_double_time_pane_vc_t_ParamLimits

0xafac,	// (0x0000afac) list_double_time_pane_vc_t

0x0db1,	// (0x00000db1) list_double_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double_pane_vc_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_double_pane_vc_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_double_pane_vc_g

0x5a83,	// (0x00005a83) list_double_pane_vc_t1_ParamLimits

0x5a83,	// (0x00005a83) list_double_pane_vc_t1

0x5a95,	// (0x00005a95) list_double_pane_vc_t2_ParamLimits

0x5a95,	// (0x00005a95) list_double_pane_vc_t2

0x0001,

0xafb5,	// (0x0000afb5) list_double_pane_vc_t_ParamLimits

0xafb5,	// (0x0000afb5) list_double_pane_vc_t

0x0db1,	// (0x00000db1) list_double_number_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double_number_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double_number_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double_number_pane_vc_g2

0x0001,

0xab2b,	// (0x0000ab2b) list_double_number_pane_vc_g_ParamLimits

0xab2b,	// (0x0000ab2b) list_double_number_pane_vc_g

0x5aad,	// (0x00005aad) list_double_number_pane_vc_t1_ParamLimits

0x5aad,	// (0x00005aad) list_double_number_pane_vc_t1

0x5abf,	// (0x00005abf) list_double_number_pane_vc_t2_ParamLimits

0x5abf,	// (0x00005abf) list_double_number_pane_vc_t2

0x5ad1,	// (0x00005ad1) list_double_number_pane_vc_t3_ParamLimits

0x5ad1,	// (0x00005ad1) list_double_number_pane_vc_t3

0x0002,

0xafba,	// (0x0000afba) list_double_number_pane_vc_t_ParamLimits

0xafba,	// (0x0000afba) list_double_number_pane_vc_t

0x5ae9,	// (0x00005ae9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ae9,	// (0x00005ae9) list_double_large_graphic_pane_vc_g1

0x5b05,	// (0x00005b05) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b05,	// (0x00005b05) list_double_large_graphic_pane_vc_g2

0x5b19,	// (0x00005b19) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5b19,	// (0x00005b19) list_double_large_graphic_pane_vc_g3

0x5b28,	// (0x00005b28) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b28,	// (0x00005b28) list_double_large_graphic_pane_vc_g4

0x0003,

0xafc1,	// (0x0000afc1) list_double_large_graphic_pane_vc_g_ParamLimits

0xafc1,	// (0x0000afc1) list_double_large_graphic_pane_vc_g

0x5b37,	// (0x00005b37) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b37,	// (0x00005b37) list_double_large_graphic_pane_vc_t1

0x5b51,	// (0x00005b51) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b51,	// (0x00005b51) list_double_large_graphic_pane_vc_t2

0x0001,

0xafca,	// (0x0000afca) list_double_large_graphic_pane_vc_t_ParamLimits

0xafca,	// (0x0000afca) list_double_large_graphic_pane_vc_t

0x56dd,	// (0x000056dd) list_double_heading_pane_vc_g1_ParamLimits

0x56dd,	// (0x000056dd) list_double_heading_pane_vc_g1

0x56e9,	// (0x000056e9) list_double_heading_pane_vc_g2_ParamLimits

0x56e9,	// (0x000056e9) list_double_heading_pane_vc_g2

0x0001,

0xafcf,	// (0x0000afcf) list_double_heading_pane_vc_g_ParamLimits

0xafcf,	// (0x0000afcf) list_double_heading_pane_vc_g

0x5b73,	// (0x00005b73) list_double_heading_pane_vc_t1_ParamLimits

0x5b73,	// (0x00005b73) list_double_heading_pane_vc_t1

0x368a,	// (0x0000368a) list_double_heading_pane_vc_t2_ParamLimits

0x368a,	// (0x0000368a) list_double_heading_pane_vc_t2

0x0001,

0xafd4,	// (0x0000afd4) list_double_heading_pane_vc_t_ParamLimits

0xafd4,	// (0x0000afd4) list_double_heading_pane_vc_t

0x5b87,	// (0x00005b87) list_double_graphic_pane_vc_g1_ParamLimits

0x5b87,	// (0x00005b87) list_double_graphic_pane_vc_g1

0x5b93,	// (0x00005b93) list_double_graphic_pane_vc_g2_ParamLimits

0x5b93,	// (0x00005b93) list_double_graphic_pane_vc_g2

0x0db1,	// (0x00000db1) list_double_graphic_pane_vc_g3_ParamLimits

0x0db1,	// (0x00000db1) list_double_graphic_pane_vc_g3

0x0003,

0xafd9,	// (0x0000afd9) list_double_graphic_pane_vc_g_ParamLimits

0xafd9,	// (0x0000afd9) list_double_graphic_pane_vc_g

0x5bb0,	// (0x00005bb0) list_double_graphic_pane_vc_t1_ParamLimits

0x5bb0,	// (0x00005bb0) list_double_graphic_pane_vc_t1

0x5bce,	// (0x00005bce) list_double_graphic_pane_vc_t2_ParamLimits

0x5bce,	// (0x00005bce) list_double_graphic_pane_vc_t2

0x0001,

0xafe2,	// (0x0000afe2) list_double_graphic_pane_vc_t_ParamLimits

0xafe2,	// (0x0000afe2) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb491,	// (0x0000b491) aid_size_cell_touch_ParamLimits

0xb491,	// (0x0000b491) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb641,	// (0x0000b641) touch_pane_ParamLimits

0xb641,	// (0x0000b641) touch_pane

0x126f,	// (0x0000126f) button_value_adjust_pane_cp2

0x126f,	// (0x0000126f) button_value_adjust_pane_cp4

0x128f,	// (0x0000128f) form_field_data_pane_cp2

0xbd7a,	// (0x0000bd7a) form_field_data_wide_pane_cp2

0x1ab0,	// (0x00001ab0) bg_scroll_pane_ParamLimits

0x1acf,	// (0x00001acf) scroll_handle_pane_ParamLimits

0x1ae3,	// (0x00001ae3) scroll_sc2_down_pane_ParamLimits

0x1ae3,	// (0x00001ae3) scroll_sc2_down_pane

0x1b0a,	// (0x00001b0a) scroll_sc2_up_pane_ParamLimits

0x1b0a,	// (0x00001b0a) scroll_sc2_up_pane

0xd65b,	// (0x0000d65b) grid_wheel_folder_pane_g1_ParamLimits

0xd65b,	// (0x0000d65b) grid_wheel_folder_pane_g1

0x21ba,	// (0x000021ba) clock_nsta_pane_cp2_ParamLimits

0x21ba,	// (0x000021ba) clock_nsta_pane_cp2

0x2ad4,	// (0x00002ad4) listscroll_midp_pane_ParamLimits

0xc140,	// (0x0000c140) midp_canvas_pane

0x2a40,	// (0x00002a40) nsta_clock_indic_pane

0x2a9e,	// (0x00002a9e) listscroll_form_pane_vc

0x2ac2,	// (0x00002ac2) listscroll_set_pane_vc_ParamLimits

0x2ac2,	// (0x00002ac2) listscroll_set_pane_vc

0xcbd6,	// (0x0000cbd6) clock_nsta_pane

0xcc00,	// (0x0000cc00) indicator_nsta_pane

0x34ef,	// (0x000034ef) bg_popup_sub_pane_cp2_ParamLimits

0x3503,	// (0x00003503) find_pane_cp2_ParamLimits

0x3503,	// (0x00003503) find_pane_cp2

0x3519,	// (0x00003519) grid_toobar_pane_ParamLimits

0x3750,	// (0x00003750) list_form_gen_pane_vc_ParamLimits

0x3750,	// (0x00003750) list_form_gen_pane_vc

0x3766,	// (0x00003766) scroll_pane_cp8_vc_ParamLimits

0x3766,	// (0x00003766) scroll_pane_cp8_vc

0x387f,	// (0x0000387f) data_form_wide_pane_vc_ParamLimits

0x387f,	// (0x0000387f) data_form_wide_pane_vc

0x388b,	// (0x0000388b) form_field_data_wide_pane_vc_g1

0x3893,	// (0x00003893) form_field_data_wide_pane_vc_t1_ParamLimits

0x3893,	// (0x00003893) form_field_data_wide_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp6_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp6_vc

0xd012,	// (0x0000d012) list_midp_pane_ParamLimits

0x527a,	// (0x0000527a) scroll_pane_cp16_ParamLimits

0x527a,	// (0x0000527a) scroll_pane_cp16

0x3c70,	// (0x00003c70) button_value_adjust_pane_ParamLimits

0x3c70,	// (0x00003c70) button_value_adjust_pane

0xd2b1,	// (0x0000d2b1) button_value_adjust_pane_cp6_ParamLimits

0xd2b1,	// (0x0000d2b1) button_value_adjust_pane_cp6

0xd3c7,	// (0x0000d3c7) settings_code_pane_cp_ParamLimits

0xd3c7,	// (0x0000d3c7) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xac61,	// (0x0000ac61) cell_touch_pane_g

0xd549,	// (0x0000d549) cell_touch_pane_cp_ParamLimits

0xd549,	// (0x0000d549) cell_touch_pane_cp

0xd565,	// (0x0000d565) cell_touch_pane_ParamLimits

0xd565,	// (0x0000d565) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5729,	// (0x00005729) list_set_graphic_pane_vc_g1_ParamLimits

0x5729,	// (0x00005729) list_set_graphic_pane_vc_g1

0x0f76,	// (0x00000f76) list_set_graphic_pane_vc_g2_ParamLimits

0x0f76,	// (0x00000f76) list_set_graphic_pane_vc_g2

0x0001,

0xaf51,	// (0x0000af51) list_set_graphic_pane_vc_g_ParamLimits

0xaf51,	// (0x0000af51) list_set_graphic_pane_vc_g

0x5735,	// (0x00005735) text_primary_small_cp13_vc_ParamLimits

0x5735,	// (0x00005735) text_primary_small_cp13_vc

0x574d,	// (0x0000574d) list_set_graphic_pane_vc_ParamLimits

0x574d,	// (0x0000574d) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05d5,	// (0x000005d5) setting_code_pane_vc_t1

0x5761,	// (0x00005761) set_text_pane_vc_t1_ParamLimits

0x5761,	// (0x00005761) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x577e,	// (0x0000577e) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_vc_g1

0x5788,	// (0x00005788) setting_slider_graphic_pane_vc_t1

0x5798,	// (0x00005798) setting_slider_graphic_pane_vc_t2

0x0001,

0xaf56,	// (0x0000af56) setting_slider_graphic_pane_vc_t

0x57a8,	// (0x000057a8) slider_set_pane_cp_vc

0x57b0,	// (0x000057b0) slider_set_pane_vc_g1

0x57b9,	// (0x000057b9) slider_set_pane_vc_g2

0x0006,

0xaf5b,	// (0x0000af5b) slider_set_pane_vc_g

0x1476,	// (0x00001476) set_opt_bg_pane_g1_copy1

0x147e,	// (0x0000147e) set_opt_bg_pane_g2_copy1

0x57e5,	// (0x000057e5) set_opt_bg_pane_g3_copy1

0x148e,	// (0x0000148e) set_opt_bg_pane_g4_copy1

0x1496,	// (0x00001496) set_opt_bg_pane_g5_copy1

0x149e,	// (0x0000149e) set_opt_bg_pane_g6_copy1

0x57ed,	// (0x000057ed) set_opt_bg_pane_g7_copy1

0x57f7,	// (0x000057f7) set_opt_bg_pane_g8_copy1

0x57ff,	// (0x000057ff) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5807,	// (0x00005807) setting_slider_pane_vc_t1

0x5816,	// (0x00005816) setting_slider_pane_vc_t2

0x5826,	// (0x00005826) setting_slider_pane_vc_t3

0x0002,

0xaf6a,	// (0x0000af6a) setting_slider_pane_vc_t

0x5836,	// (0x00005836) slider_set_pane_vc

0x44b4,	// (0x000044b4) volume_set_pane_vc_g1

0x583e,	// (0x0000583e) volume_set_pane_vc_g2

0x5847,	// (0x00005847) volume_set_pane_vc_g3

0x5850,	// (0x00005850) volume_set_pane_vc_g4

0x5859,	// (0x00005859) volume_set_pane_vc_g5

0x5862,	// (0x00005862) volume_set_pane_vc_g6

0x44e1,	// (0x000044e1) volume_set_pane_vc_g7

0x586b,	// (0x0000586b) volume_set_pane_vc_g8

0x5874,	// (0x00005874) volume_set_pane_vc_g9

0x587d,	// (0x0000587d) volume_set_pane_vc_g10

0x0009,

0xaf71,	// (0x0000af71) volume_set_pane_vc_g

0x5886,	// (0x00005886) volume_set_pane_vc

0x588e,	// (0x0000588e) button_value_adjust_pane_cp1_vc

0x5898,	// (0x00005898) list_highlight_pane_cp2_vc

0x58a1,	// (0x000058a1) list_set_pane_vc_ParamLimits

0x58a1,	// (0x000058a1) list_set_pane_vc

0x58ff,	// (0x000058ff) main_pane_set_vc_t1_ParamLimits

0x58ff,	// (0x000058ff) main_pane_set_vc_t1

0x5914,	// (0x00005914) main_pane_set_vc_t2_ParamLimits

0x5914,	// (0x00005914) main_pane_set_vc_t2

0x5926,	// (0x00005926) main_pane_set_vc_t3_ParamLimits

0x5926,	// (0x00005926) main_pane_set_vc_t3

0x5938,	// (0x00005938) main_pane_set_vc_t4_ParamLimits

0x5938,	// (0x00005938) main_pane_set_vc_t4

0x0003,

0xaf86,	// (0x0000af86) main_pane_set_vc_t_ParamLimits

0xaf86,	// (0x0000af86) main_pane_set_vc_t

0x594a,	// (0x0000594a) setting_code_pane_vc_ParamLimits

0x594a,	// (0x0000594a) setting_code_pane_vc

0x5959,	// (0x00005959) setting_slider_graphic_pane_vc

0x5959,	// (0x00005959) setting_slider_pane_vc

0x5959,	// (0x00005959) setting_text_pane_vc

0x5959,	// (0x00005959) setting_volume_pane_vc

0x5961,	// (0x00005961) scroll_pane_cp121_vc

0x125d,	// (0x0000125d) set_content_pane_vc

0x5bf8,	// (0x00005bf8) button_value_adjust_pane_g1

0x5c01,	// (0x00005c01) button_value_adjust_pane_g2

0x0001,

0xafe7,	// (0x0000afe7) button_value_adjust_pane_g

0x5c0a,	// (0x00005c0a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c0a,	// (0x00005c0a) form_field_slider_wide_pane_vc_t1

0x5c1e,	// (0x00005c1e) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c1e,	// (0x00005c1e) form_field_slider_wide_pane_vc_t2

0x0002,

0xafec,	// (0x0000afec) form_field_slider_wide_pane_vc_t_ParamLimits

0xafec,	// (0x0000afec) form_field_slider_wide_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc

0x5c4a,	// (0x00005c4a) slider_cont_pane_cp1_vc_ParamLimits

0x5c4a,	// (0x00005c4a) slider_cont_pane_cp1_vc

0x5c5a,	// (0x00005c5a) slider_form_pane_g1_cp2

0x57b9,	// (0x000057b9) slider_form_pane_g2_cp2

0x5c87,	// (0x00005c87) form_field_slider_pane_vc_t3

0x5c95,	// (0x00005c95) form_field_slider_pane_vc_t4

0x5ca3,	// (0x00005ca3) slider_form_pane_vc_ParamLimits

0x5ca3,	// (0x00005ca3) slider_form_pane_vc

0x5cb0,	// (0x00005cb0) form_field_slider_pane_vc_t1_ParamLimits

0x5cb0,	// (0x00005cb0) form_field_slider_pane_vc_t1

0x5c1e,	// (0x00005c1e) form_field_slider_pane_vc_t2_ParamLimits

0x5c1e,	// (0x00005c1e) form_field_slider_pane_vc_t2

0x0001,

0xaffe,	// (0x0000affe) form_field_slider_pane_vc_t_ParamLimits

0xaffe,	// (0x0000affe) form_field_slider_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc

0x5ccc,	// (0x00005ccc) slider_cont_pane_vc_ParamLimits

0x5ccc,	// (0x00005ccc) slider_cont_pane_vc

0x5cde,	// (0x00005cde) list_form_graphic_pane_cp_vc_ParamLimits

0x5cde,	// (0x00005cde) list_form_graphic_pane_cp_vc

0x388b,	// (0x0000388b) form_field_popup_wide_pane_vc_g1

0x5cf3,	// (0x00005cf3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cf3,	// (0x00005cf3) form_field_popup_wide_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp8_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp8_vc

0x5d38,	// (0x00005d38) list_form_wide_pane_vc_ParamLimits

0x5d38,	// (0x00005d38) list_form_wide_pane_vc

0x5d44,	// (0x00005d44) list_form_graphic_pane_vc_g1

0x5d4c,	// (0x00005d4c) list_form_graphic_pane_vc_t1_ParamLimits

0x5d4c,	// (0x00005d4c) list_form_graphic_pane_vc_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc

0x5d68,	// (0x00005d68) list_form_graphic_pane_vc_ParamLimits

0x5d68,	// (0x00005d68) list_form_graphic_pane_vc

0x388b,	// (0x0000388b) form_field_popup_pane_vc_g1

0x5d7e,	// (0x00005d7e) form_field_popup_pane_vc_t1_ParamLimits

0x5d7e,	// (0x00005d7e) form_field_popup_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp7_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp7_vc

0x5d95,	// (0x00005d95) list_form_pane_vc_ParamLimits

0x5d95,	// (0x00005d95) list_form_pane_vc

0x5da1,	// (0x00005da1) data_form_pane_vc_t1_ParamLimits

0x5da1,	// (0x00005da1) data_form_pane_vc_t1

0x1476,	// (0x00001476) input_focus_pane_vc_g1

0x147e,	// (0x0000147e) input_focus_pane_vc_g2

0x1486,	// (0x00001486) input_focus_pane_vc_g3

0x148e,	// (0x0000148e) input_focus_pane_vc_g4

0x1496,	// (0x00001496) input_focus_pane_vc_g5

0x149e,	// (0x0000149e) input_focus_pane_vc_g6

0x14a6,	// (0x000014a6) input_focus_pane_vc_g7

0x14ae,	// (0x000014ae) input_focus_pane_vc_g8

0x14b6,	// (0x000014b6) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xabea,	// (0x0000abea) input_focus_pane_vc_g

0x387f,	// (0x0000387f) data_form_pane_vc_ParamLimits

0x387f,	// (0x0000387f) data_form_pane_vc

0x388b,	// (0x0000388b) form_field_data_pane_vc_g1

0x5dbc,	// (0x00005dbc) form_field_data_pane_vc_t1_ParamLimits

0x5dbc,	// (0x00005dbc) form_field_data_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_vc

0x5dd6,	// (0x00005dd6) button_value_adjust_pane_cp3_vc

0x5dde,	// (0x00005dde) button_value_adjust_pane_cp5_vc

0x5de6,	// (0x00005de6) form_field_data_pane_vc_ParamLimits

0x5de6,	// (0x00005de6) form_field_data_pane_vc

0x5dfd,	// (0x00005dfd) form_field_data_pane_vc_cp2

0x5e05,	// (0x00005e05) form_field_data_wide_pane_vc_ParamLimits

0x5e05,	// (0x00005e05) form_field_data_wide_pane_vc

0x5e1b,	// (0x00005e1b) form_field_data_wide_pane_vc_cp2

0x5e23,	// (0x00005e23) form_field_popup_pane_vc_ParamLimits

0x5e23,	// (0x00005e23) form_field_popup_pane_vc

0x5e3a,	// (0x00005e3a) form_field_popup_wide_pane_vc_ParamLimits

0x5e3a,	// (0x00005e3a) form_field_popup_wide_pane_vc

0x5e50,	// (0x00005e50) form_field_slider_pane_vc_ParamLimits

0x5e50,	// (0x00005e50) form_field_slider_pane_vc

0x5e63,	// (0x00005e63) form_field_slider_wide_pane_vc_ParamLimits

0x5e63,	// (0x00005e63) form_field_slider_wide_pane_vc

0xd583,	// (0x0000d583) grid_touch_1_pane_ParamLimits

0xd583,	// (0x0000d583) grid_touch_1_pane

0xd597,	// (0x0000d597) grid_touch_2_pane_ParamLimits

0xd597,	// (0x0000d597) grid_touch_2_pane

0x5f31,	// (0x00005f31) touch_pane_g1_ParamLimits

0x5f31,	// (0x00005f31) touch_pane_g1

0x5e9a,	// (0x00005e9a) cell_app_pane_cp_wide_ParamLimits

0x5e9a,	// (0x00005e9a) cell_app_pane_cp_wide

0x5eab,	// (0x00005eab) grid_popup_fast_wide_pane_ParamLimits

0x5eab,	// (0x00005eab) grid_popup_fast_wide_pane

0x5ebf,	// (0x00005ebf) scroll_pane_cp19_ParamLimits

0x5ebf,	// (0x00005ebf) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5ed3,	// (0x00005ed3) listscroll_popup_fast_wide_pane

0x166a,	// (0x0000166a) grid_indicator_nsta_pane

0x5edb,	// (0x00005edb) clock_nsta_pane_g1

0x5ee4,	// (0x00005ee4) clock_nsta_pane_t1

0xd5c1,	// (0x0000d5c1) cell_indicator_nsta_pane_ParamLimits

0xd5c1,	// (0x0000d5c1) cell_indicator_nsta_pane

0x5f31,	// (0x00005f31) cell_indicator_nsta_pane_g1

0xd5d8,	// (0x0000d5d8) cell_indicator_nsta_pane_g2

0x0001,

0xf3c8,	// (0x0000f3c8) cell_indicator_nsta_pane_g

0x5f4c,	// (0x00005f4c) clock_nsta_pane_cp

0x5f54,	// (0x00005f54) indicator_nsta_pane_cp

0x5f5c,	// (0x00005f5c) nsta_clock_indic_pane_g1

0x066d,	// (0x0000066d) grid_indicator_pane

0x1bff,	// (0x00001bff) scroll_pane_cp29

0x20e7,	// (0x000020e7) indicator_nsta_pane_cp2_ParamLimits

0x20e7,	// (0x000020e7) indicator_nsta_pane_cp2

0x04f9,	// (0x000004f9) main_apps_wheel_pane

0x3afb,	// (0x00003afb) form_midp_field_text_pane_ParamLimits

0x3c42,	// (0x00003c42) scroll_bar_cp050_ParamLimits

0x5fbd,	// (0x00005fbd) cell_indicator_pane_ParamLimits

0x5fbd,	// (0x00005fbd) cell_indicator_pane

0x5fd8,	// (0x00005fd8) cell_indicator_pane_g1

0xd5e5,	// (0x0000d5e5) grid_wheel_folder_pane_ParamLimits

0xd5e5,	// (0x0000d5e5) grid_wheel_folder_pane

0xd5f3,	// (0x0000d5f3) list_wheel_apps_pane_ParamLimits

0xd5f3,	// (0x0000d5f3) list_wheel_apps_pane

0xd601,	// (0x0000d601) main_apps_wheel_pane_g1_ParamLimits

0xd601,	// (0x0000d601) main_apps_wheel_pane_g1

0xd60d,	// (0x0000d60d) main_apps_wheel_pane_g2_ParamLimits

0xd60d,	// (0x0000d60d) main_apps_wheel_pane_g2

0x0001,

0xf3cd,	// (0x0000f3cd) main_apps_wheel_pane_g_ParamLimits

0xf3cd,	// (0x0000f3cd) main_apps_wheel_pane_g

0xd61b,	// (0x0000d61b) main_apps_wheel_pane_t1_ParamLimits

0xd61b,	// (0x0000d61b) main_apps_wheel_pane_t1

0xd62f,	// (0x0000d62f) list_wheel_apps_pane_g1

0xd637,	// (0x0000d637) list_wheel_apps_pane_g2

0xd63f,	// (0x0000d63f) list_wheel_apps_pane_g3

0xd647,	// (0x0000d647) list_wheel_apps_pane_g4

0xd651,	// (0x0000d651) list_wheel_apps_pane_g5

0x0004,

0xf3d2,	// (0x0000f3d2) list_wheel_apps_pane_g

0x23ef,	// (0x000023ef) navi_icon_text_pane

0xcaca,	// (0x0000caca) aid_fill_nsta

0x609f,	// (0x0000609f) navi_icon_text_pane_g1

0x60ab,	// (0x000060ab) navi_icon_text_pane_t1

0xc11f,	// (0x0000c11f) list_set_graphic_pane_t1_ParamLimits

0xc11f,	// (0x0000c11f) list_set_graphic_pane_t1

0x4394,	// (0x00004394) popup_midp_note_alarm_window_t6_ParamLimits

0x4394,	// (0x00004394) popup_midp_note_alarm_window_t6

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t7_ParamLimits

0x43a6,	// (0x000043a6) popup_midp_note_alarm_window_t7

0x43b8,	// (0x000043b8) popup_midp_note_alarm_window_t8_ParamLimits

0x43b8,	// (0x000043b8) popup_midp_note_alarm_window_t8

0x43ca,	// (0x000043ca) popup_midp_note_alarm_window_t9_ParamLimits

0x43ca,	// (0x000043ca) popup_midp_note_alarm_window_t9

0x43dc,	// (0x000043dc) popup_midp_note_alarm_window_t10_ParamLimits

0x43dc,	// (0x000043dc) popup_midp_note_alarm_window_t10

0x43ee,	// (0x000043ee) popup_midp_note_alarm_window_t11_ParamLimits

0x43ee,	// (0x000043ee) popup_midp_note_alarm_window_t11

0x4400,	// (0x00004400) scroll_pane_cp17_ParamLimits

0x4400,	// (0x00004400) scroll_pane_cp17

0x44b4,	// (0x000044b4) volume_small_pane_cp_g1

0x60bd,	// (0x000060bd) volume_small_pane_cp_g2

0x60c6,	// (0x000060c6) volume_small_pane_cp_g3

0x44c6,	// (0x000044c6) volume_small_pane_cp_g4

0x60cf,	// (0x000060cf) volume_small_pane_cp_g5

0x5859,	// (0x00005859) volume_small_pane_cp_g6

0x44d8,	// (0x000044d8) volume_small_pane_cp_g7

0x60d8,	// (0x000060d8) volume_small_pane_cp_g8

0x60e1,	// (0x000060e1) volume_small_pane_cp_g9

0x44ea,	// (0x000044ea) volume_small_pane_cp_g10

0x2638,	// (0x00002638) midp_ticker_pane_g1_ParamLimits

0x2644,	// (0x00002644) midp_ticker_pane_g2_ParamLimits

0xacb6,	// (0x0000acb6) midp_ticker_pane_g_ParamLimits

0x2650,	// (0x00002650) midp_ticker_pane_t1_ParamLimits

0xcaee,	// (0x0000caee) aid_fill_nsta_2

0x3c2e,	// (0x00003c2e) list_form2_midp_pane

0x4fb7,	// (0x00004fb7) midp_editing_number_pane_ParamLimits

0x4fc6,	// (0x00004fc6) midp_ticker_pane_ParamLimits

0x60ea,	// (0x000060ea) form2_midp_field_pane

0x610e,	// (0x0000610e) scroll_pane_cp51

0x612e,	// (0x0000612e) form2_midp_button_pane_ParamLimits

0x612e,	// (0x0000612e) form2_midp_button_pane

0x6140,	// (0x00006140) form2_midp_content_pane_ParamLimits

0x6140,	// (0x00006140) form2_midp_content_pane

0x615a,	// (0x0000615a) form2_midp_field_choice_group_pane

0x6162,	// (0x00006162) form2_midp_field_pane_g1

0x616a,	// (0x0000616a) form2_midp_field_pane_g2

0x6172,	// (0x00006172) form2_midp_field_pane_g3

0x617a,	// (0x0000617a) form2_midp_field_pane_g4

0x0003,

0xb055,	// (0x0000b055) form2_midp_field_pane_g

0x6182,	// (0x00006182) form2_midp_gauge_slider_pane

0x618a,	// (0x0000618a) form2_midp_gauge_wait_pane

0x6192,	// (0x00006192) form2_midp_image_pane_ParamLimits

0x6192,	// (0x00006192) form2_midp_image_pane

0x61ad,	// (0x000061ad) form2_midp_label_pane_ParamLimits

0x61ad,	// (0x000061ad) form2_midp_label_pane

0xd684,	// (0x0000d684) form2_midp_label_pane_cp_ParamLimits

0xd684,	// (0x0000d684) form2_midp_label_pane_cp

0x61e7,	// (0x000061e7) form2_midp_string_pane_ParamLimits

0x61e7,	// (0x000061e7) form2_midp_string_pane

0x61f9,	// (0x000061f9) form2_midp_text_pane_ParamLimits

0x61f9,	// (0x000061f9) form2_midp_text_pane

0x6214,	// (0x00006214) form2_midp_time_pane

0x6224,	// (0x00006224) input_focus_pane_cp51_ParamLimits

0x6224,	// (0x00006224) input_focus_pane_cp51

0x623c,	// (0x0000623c) form2_midp_label_pane_t1_ParamLimits

0x623c,	// (0x0000623c) form2_midp_label_pane_t1

0x627c,	// (0x0000627c) form2_mdip_text_pane_t1_ParamLimits

0x627c,	// (0x0000627c) form2_mdip_text_pane_t1

0x6298,	// (0x00006298) form2_midp_time_pane_t1

0x62b3,	// (0x000062b3) form2_midp_gauge_slider_pane_t1

0xd6a5,	// (0x0000d6a5) form2_midp_gauge_slider_pane_t2

0xd6b9,	// (0x0000d6b9) form2_midp_gauge_slider_pane_t3

0x0002,

0xf3e2,	// (0x0000f3e2) form2_midp_gauge_slider_pane_t

0x62e9,	// (0x000062e9) form2_midp_slider_pane

0x62f5,	// (0x000062f5) form2_midp_gauge_wait_pane_t1

0x6303,	// (0x00006303) form2_midp_wait_pane_ParamLimits

0x6303,	// (0x00006303) form2_midp_wait_pane

0xd6cd,	// (0x0000d6cd) list_single_2graphic_pane_cp4_ParamLimits

0xd6cd,	// (0x0000d6cd) list_single_2graphic_pane_cp4

0xcf7e,	// (0x0000cf7e) list_single_midp_graphic_pane_cp_ParamLimits

0xcf7e,	// (0x0000cf7e) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x635d,	// (0x0000635d) list_single_2graphic_pane_g1_cp4

0x55a4,	// (0x000055a4) list_single_2graphic_pane_g2_cp4

0x6365,	// (0x00006365) list_single_2graphic_pane_t1_cp4

0x04f9,	// (0x000004f9) list_highlight_pane_cp21

0x6374,	// (0x00006374) list_single_midp_graphic_pane_g4_cp

0x6383,	// (0x00006383) list_single_midp_graphic_pane_t1_cp

0xd6e3,	// (0x0000d6e3) form2_mdip_string_pane_t1_ParamLimits

0xd6e3,	// (0x0000d6e3) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1039,	// (0x00001039) list_double_large_graphic_pane_g5_ParamLimits

0x1039,	// (0x00001039) list_double_large_graphic_pane_g5

0x2ad4,	// (0x00002ad4) midp_form_pane_ParamLimits

0x04f9,	// (0x000004f9) main_apps_wheel_pane_ParamLimits

0xc820,	// (0x0000c820) popup_preview_window_ParamLimits

0xc820,	// (0x0000c820) popup_preview_window

0x3034,	// (0x00003034) popup_touch_info_window_ParamLimits

0x3034,	// (0x00003034) popup_touch_info_window

0x3052,	// (0x00003052) popup_touch_menu_window_ParamLimits

0x3052,	// (0x00003052) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x64bb,	// (0x000064bb) list_touch_menu_pane

0x64c3,	// (0x000064c3) list_single_touch_menu_pane_ParamLimits

0x64c3,	// (0x000064c3) list_single_touch_menu_pane

0x64d7,	// (0x000064d7) list_single_touch_menu_pane_t1

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7

0x64e5,	// (0x000064e5) heading_sub_pane

0x64ed,	// (0x000064ed) list_touch_info_pane_ParamLimits

0x64ed,	// (0x000064ed) list_touch_info_pane

0x64fc,	// (0x000064fc) list_single_touch_info_pane_ParamLimits

0x64fc,	// (0x000064fc) list_single_touch_info_pane

0x650e,	// (0x0000650e) list_single_touch_info_pane_t1

0x651c,	// (0x0000651c) list_single_touch_info_pane_t2

0x0001,

0xb06c,	// (0x0000b06c) list_single_touch_info_pane_t

0x2563,	// (0x00002563) bg_popup_heading_pane_cp

0x652a,	// (0x0000652a) heading_sub_pane_t1

0x3791,	// (0x00003791) bg_popup_preview_window_pane_cp_ParamLimits

0x3791,	// (0x00003791) bg_popup_preview_window_pane_cp

0x64e5,	// (0x000064e5) heading_preview_pane

0x64ed,	// (0x000064ed) list_preview_pane_ParamLimits

0x64ed,	// (0x000064ed) list_preview_pane

0x6538,	// (0x00006538) popup_preview_window_g1

0x64fc,	// (0x000064fc) list_single_preview_pane_ParamLimits

0x64fc,	// (0x000064fc) list_single_preview_pane

0x6540,	// (0x00006540) list_single_preview_pane_g1

0x6548,	// (0x00006548) list_single_preview_pane_t1

0x650e,	// (0x0000650e) list_single_preview_pane_t2

0x0001,

0xb071,	// (0x0000b071) list_single_preview_pane_t

0x6556,	// (0x00006556) bg_popup_heading_pane_cp2_ParamLimits

0x6556,	// (0x00006556) bg_popup_heading_pane_cp2

0x656c,	// (0x0000656c) heading_preview_pane_g1

0x6574,	// (0x00006574) heading_preview_pane_t1_ParamLimits

0x6574,	// (0x00006574) heading_preview_pane_t1

0x0690,	// (0x00000690) soft_indicator_pane_t1_ParamLimits

0x0d71,	// (0x00000d71) scroll_pane_ParamLimits

0x1af8,	// (0x00001af8) scroll_sc2_left_pane

0x1b01,	// (0x00001b01) scroll_sc2_right_pane

0x1b20,	// (0x00001b20) scroll_bg_pane_g1_ParamLimits

0x1b35,	// (0x00001b35) scroll_bg_pane_g2_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_bg_pane_g3_ParamLimits

0xac41,	// (0x0000ac41) scroll_bg_pane_g_ParamLimits

0x1b20,	// (0x00001b20) scroll_handle_pane_g1_ParamLimits

0x1b6f,	// (0x00001b6f) scroll_handle_pane_g2_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_handle_pane_g3_ParamLimits

0xac48,	// (0x0000ac48) scroll_handle_pane_g_ParamLimits

0x2b04,	// (0x00002b04) popup_choice_list_window_ParamLimits

0x2b04,	// (0x00002b04) popup_choice_list_window

0x34fb,	// (0x000034fb) choice_list_pane

0x35c3,	// (0x000035c3) cell_toolbar_pane_t1

0x35eb,	// (0x000035eb) toolbar_button_pane_ParamLimits

0x4a18,	// (0x00004a18) ai_gene_pane_1_t2_ParamLimits

0x4a18,	// (0x00004a18) ai_gene_pane_1_t2

0x0001,

0xae64,	// (0x0000ae64) ai_gene_pane_1_t_ParamLimits

0xae64,	// (0x0000ae64) ai_gene_pane_1_t

0x6591,	// (0x00006591) scroll_sc2_left_pane_g1

0x6591,	// (0x00006591) scroll_sc2_right_pane_g1

0x2ad4,	// (0x00002ad4) bg_popup_sub_pane_cp10

0x659b,	// (0x0000659b) list_choice_list_pane

0x65b4,	// (0x000065b4) list_single_choice_list_pane_ParamLimits

0x65b4,	// (0x000065b4) list_single_choice_list_pane

0x65c7,	// (0x000065c7) list_single_choice_list_pane_g1

0x163b,	// (0x0000163b) list_single_choice_list_pane_t1_ParamLimits

0x163b,	// (0x0000163b) list_single_choice_list_pane_t1

0x65cf,	// (0x000065cf) choice_list_pane_g1

0x65d7,	// (0x000065d7) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x185f,	// (0x0000185f) title_pane_stacon_g2_ParamLimits

0x185f,	// (0x0000185f) title_pane_stacon_g2

0x0002,

0xac27,	// (0x0000ac27) title_pane_stacon_g_ParamLimits

0xac27,	// (0x0000ac27) title_pane_stacon_g

0x2563,	// (0x00002563) cursor_press_pane

0xc4d9,	// (0x0000c4d9) popup_fep_hwr_window_ParamLimits

0xc4d9,	// (0x0000c4d9) popup_fep_hwr_window

0x2c24,	// (0x00002c24) popup_fep_vkb_window_ParamLimits

0x2c24,	// (0x00002c24) popup_fep_vkb_window

0x65e5,	// (0x000065e5) cursor_press_pane_g1

0x0002,

0xf3f6,	// (0x0000f3f6) fep_vkb_side_pane_g_ParamLimits

0x6626,	// (0x00006626) fep_hwr_candidate_pane_ParamLimits

0x6626,	// (0x00006626) fep_hwr_candidate_pane

0x6650,	// (0x00006650) fep_hwr_side_pane_ParamLimits

0x6650,	// (0x00006650) fep_hwr_side_pane

0x6670,	// (0x00006670) fep_hwr_top_pane_ParamLimits

0x6670,	// (0x00006670) fep_hwr_top_pane

0x6688,	// (0x00006688) fep_hwr_write_pane_ParamLimits

0x6688,	// (0x00006688) fep_hwr_write_pane

0xf3f6,	// (0x0000f3f6) fep_vkb_side_pane_g

0x66c2,	// (0x000066c2) fep_hwr_top_pane_g1

0x66d4,	// (0x000066d4) fep_hwr_top_pane_g2

0x66e6,	// (0x000066e6) fep_hwr_top_pane_g3

0x0002,

0xb076,	// (0x0000b076) fep_hwr_top_pane_g

0x66fb,	// (0x000066fb) fep_hwr_top_text_pane

0x1cc5,	// (0x00001cc5) fep_hwr_top_text_pane_g1

0x67d3,	// (0x000067d3) fep_hwr_top_text_pane_t1

0x6823,	// (0x00006823) fep_hwr_candidate_pane_g1

0x6a8c,	// (0x00006a8c) fep_vkb_keypad_pane_g3_ParamLimits

0x6a8c,	// (0x00006a8c) fep_vkb_keypad_pane_g3

0x6ab4,	// (0x00006ab4) fep_vkb_keypad_pane_g4_ParamLimits

0x6ab4,	// (0x00006ab4) fep_vkb_keypad_pane_g4

0x6b23,	// (0x00006b23) fep_vkb_bottom_pane_g2_ParamLimits

0x6b23,	// (0x00006b23) fep_vkb_bottom_pane_g2

0x0001,

0xb0a1,	// (0x0000b0a1) fep_vkb_bottom_pane_g_ParamLimits

0xb0a1,	// (0x0000b0a1) fep_vkb_bottom_pane_g

0x6591,	// (0x00006591) cell_vkb_side_pane_g2

0x0001,

0xb0ab,	// (0x0000b0ab) cell_vkb_side_pane_g

0x6bae,	// (0x00006bae) cell_vkb_side_pane_t1

0x6bbc,	// (0x00006bbc) cell_vkb_side_pane_t1_copy1

0x6591,	// (0x00006591) bg_fep_vkb_candidate_pane_g2

0x6ce8,	// (0x00006ce8) cell_vkb_candidate_pane_ParamLimits

0x6857,	// (0x00006857) aid_size_cell_vkb_ParamLimits

0x6857,	// (0x00006857) aid_size_cell_vkb

0x6ce8,	// (0x00006ce8) cell_vkb_candidate_pane

0x6d1c,	// (0x00006d1c) bg_popup_fep_shadow_pane_g1

0xd7c0,	// (0x0000d7c0) fep_vkb_bottom_pane_ParamLimits

0xd7c0,	// (0x0000d7c0) fep_vkb_bottom_pane

0x6919,	// (0x00006919) fep_vkb_candidate_pane_ParamLimits

0x6919,	// (0x00006919) fep_vkb_candidate_pane

0xd7e5,	// (0x0000d7e5) fep_vkb_keypad_pane_ParamLimits

0xd7e5,	// (0x0000d7e5) fep_vkb_keypad_pane

0xd81a,	// (0x0000d81a) fep_vkb_side_pane_ParamLimits

0xd81a,	// (0x0000d81a) fep_vkb_side_pane

0xd856,	// (0x0000d856) fep_vkb_top_pane_ParamLimits

0xd856,	// (0x0000d856) fep_vkb_top_pane

0x69e5,	// (0x000069e5) fep_vkb_top_pane_g1_ParamLimits

0x69e5,	// (0x000069e5) fep_vkb_top_pane_g1

0x69f4,	// (0x000069f4) fep_vkb_top_pane_g2_ParamLimits

0x69f4,	// (0x000069f4) fep_vkb_top_pane_g2

0x6a03,	// (0x00006a03) fep_vkb_top_pane_g3_ParamLimits

0x6a03,	// (0x00006a03) fep_vkb_top_pane_g3

0x0003,

0xb091,	// (0x0000b091) fep_vkb_top_pane_g_ParamLimits

0xb091,	// (0x0000b091) fep_vkb_top_pane_g

0x6a21,	// (0x00006a21) fep_vkb_top_text_pane_ParamLimits

0x6a21,	// (0x00006a21) fep_vkb_top_text_pane

0xd88b,	// (0x0000d88b) fep_vkb_side_pane_g1_ParamLimits

0xd88b,	// (0x0000d88b) fep_vkb_side_pane_g1

0x6a7b,	// (0x00006a7b) grid_vkb_side_pane_ParamLimits

0x6a7b,	// (0x00006a7b) grid_vkb_side_pane

0x6d24,	// (0x00006d24) bg_popup_fep_shadow_pane_g2

0x6d2d,	// (0x00006d2d) bg_popup_fep_shadow_pane_g3

0x6d35,	// (0x00006d35) bg_popup_fep_shadow_pane_g4

0x6d3e,	// (0x00006d3e) bg_popup_fep_shadow_pane_g5

0x6d48,	// (0x00006d48) bg_popup_fep_shadow_pane_g6

0x6d50,	// (0x00006d50) bg_popup_fep_shadow_pane_g7

0x1496,	// (0x00001496) bg_popup_fep_shadow_pane_g8

0x6ad2,	// (0x00006ad2) grid_vkb_keypad_number_pane_ParamLimits

0x6ad2,	// (0x00006ad2) grid_vkb_keypad_number_pane

0x6ae2,	// (0x00006ae2) grid_vkb_keypad_pane_ParamLimits

0x6ae2,	// (0x00006ae2) grid_vkb_keypad_pane

0x6b08,	// (0x00006b08) fep_vkb_bottom_pane_g1_ParamLimits

0x6b08,	// (0x00006b08) fep_vkb_bottom_pane_g1

0x6b31,	// (0x00006b31) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b31,	// (0x00006b31) grid_vkb_keypad_bottom_left_pane

0x6b46,	// (0x00006b46) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b46,	// (0x00006b46) grid_vkb_keypad_bottom_right_pane

0x6b5b,	// (0x00006b5b) fep_vkb_top_text_pane_g1

0xd8d2,	// (0x0000d8d2) fep_vkb_top_text_pane_t1

0xd8e4,	// (0x0000d8e4) cell_vkb_side_pane_ParamLimits

0xd8e4,	// (0x0000d8e4) cell_vkb_side_pane

0x6591,	// (0x00006591) cell_vkb_side_pane_g1

0x6bca,	// (0x00006bca) cell_vkb_keypad_pane_ParamLimits

0x6bca,	// (0x00006bca) cell_vkb_keypad_pane

0x6c3f,	// (0x00006c3f) cell_vkb_keypad_pane_g1

0x0008,

0xb0be,	// (0x0000b0be) bg_popup_fep_shadow_pane_g

0x6591,	// (0x00006591) cell_hwr_side_pane_g1

0x6591,	// (0x00006591) cell_hwr_side_pane_g2

0x6c49,	// (0x00006c49) cell_vkb_keypad_pane_t1

0xd8fa,	// (0x0000d8fa) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8fa,	// (0x0000d8fa) cell_vkb_keypad_bottom_left_pane

0xd90f,	// (0x0000d90f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd90f,	// (0x0000d90f) cell_vkb_keypad_bottom_right_pane

0x6591,	// (0x00006591) cell_vkb_keypad_bottom_left_pane_g1

0x6591,	// (0x00006591) cell_vkb_keypad_bottom_right_pane_g1

0x6cad,	// (0x00006cad) cell_vkb_keypad_number_pane_ParamLimits

0x6cad,	// (0x00006cad) cell_vkb_keypad_number_pane

0x6ccc,	// (0x00006ccc) cell_vkb_keypad_number_pane_g1

0x6cd6,	// (0x00006cd6) cell_vkb_keypad_number_pane_g2

0x6cdf,	// (0x00006cdf) cell_vkb_keypad_number_pane_g3

0x0002,

0xb0b0,	// (0x0000b0b0) cell_vkb_keypad_number_pane_g

0x6c49,	// (0x00006c49) cell_vkb_keypad_number_pane_t1

0x6d03,	// (0x00006d03) fep_vkb_candidate_pane_g1

0x0001,

0xb0ab,	// (0x0000b0ab) cell_hwr_side_pane_g

0x6d62,	// (0x00006d62) cell_hwr_side_pane_t1

0x6d70,	// (0x00006d70) cell_hwr_side_pane_t1_copy1

0x6a13,	// (0x00006a13) cell_hwr_candidate_pane_g1

0x6dc0,	// (0x00006dc0) cell_hwr_candidate_pane_t1

0x6591,	// (0x00006591) cell_vkb_candidate_pane_g2

0x6e14,	// (0x00006e14) cell_vkb_candidate_pane_t1

0x65ed,	// (0x000065ed) bg_popup_fep_shadow_pane_ParamLimits

0x65ed,	// (0x000065ed) bg_popup_fep_shadow_pane

0x66a2,	// (0x000066a2) bg_fep_hwr_top_pane_g4

0x6710,	// (0x00006710) bg_hwr_side_pane_g1_ParamLimits

0x6710,	// (0x00006710) bg_hwr_side_pane_g1

0xd779,	// (0x0000d779) cell_hwr_side_pane_ParamLimits

0xd779,	// (0x0000d779) cell_hwr_side_pane

0x677e,	// (0x0000677e) fep_hwr_write_pane_g1_ParamLimits

0x677e,	// (0x0000677e) fep_hwr_write_pane_g1

0x678b,	// (0x0000678b) fep_hwr_write_pane_g2_ParamLimits

0x678b,	// (0x0000678b) fep_hwr_write_pane_g2

0x6798,	// (0x00006798) fep_hwr_write_pane_g3_ParamLimits

0x6798,	// (0x00006798) fep_hwr_write_pane_g3

0xd799,	// (0x0000d799) fep_hwr_write_pane_g4_ParamLimits

0xd799,	// (0x0000d799) fep_hwr_write_pane_g4

0x0005,

0xf3e9,	// (0x0000f3e9) fep_hwr_write_pane_g_ParamLimits

0xf3e9,	// (0x0000f3e9) fep_hwr_write_pane_g

0x66a2,	// (0x000066a2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66a2,	// (0x000066a2) bg_fep_hwr_candidate_pane_g2

0x67e1,	// (0x000067e1) cell_hwr_candidate_pane_ParamLimits

0x67e1,	// (0x000067e1) cell_hwr_candidate_pane

0x6823,	// (0x00006823) fep_hwr_candidate_pane_g1_ParamLimits

0x6885,	// (0x00006885) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6885,	// (0x00006885) bg_popup_fep_shadow_pane_cp2

0x6a13,	// (0x00006a13) fep_vkb_top_pane_g4_ParamLimits

0x6a13,	// (0x00006a13) fep_vkb_top_pane_g4

0x6a59,	// (0x00006a59) fep_vkb_side_pane_g2_ParamLimits

0x6a59,	// (0x00006a59) fep_vkb_side_pane_g2

0xbca8,	// (0x0000bca8) list_setting_pane_t4_ParamLimits

0xbca8,	// (0x0000bca8) list_setting_pane_t4

0xbd22,	// (0x0000bd22) list_setting_number_pane_t5_ParamLimits

0xbd22,	// (0x0000bd22) list_setting_number_pane_t5

0xbfe9,	// (0x0000bfe9) list_double_heading_pane_cp2_ParamLimits

0xbfe9,	// (0x0000bfe9) list_double_heading_pane_cp2

0x0fc2,	// (0x00000fc2) list_double_heading_pane_g1_cp2_ParamLimits

0x0fc2,	// (0x00000fc2) list_double_heading_pane_g1_cp2

0x136f,	// (0x0000136f) list_double_heading_pane_g2_cp2_ParamLimits

0x136f,	// (0x0000136f) list_double_heading_pane_g2_cp2

0x6e22,	// (0x00006e22) list_double_heading_pane_t1_cp2_ParamLimits

0x6e22,	// (0x00006e22) list_double_heading_pane_t1_cp2

0x6e38,	// (0x00006e38) list_double_heading_pane_t2_cp2_ParamLimits

0x6e38,	// (0x00006e38) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02

0x6e4a,	// (0x00006e4a) list_preview_fixed_pane

0x6e90,	// (0x00006e90) list_empty_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_empty_pane_fp

0x6e90,	// (0x00006e90) list_single_cale_day_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_cale_day_pane_fp

0x6e90,	// (0x00006e90) list_single_graphic_heading_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_heading_pane_fp

0x6e90,	// (0x00006e90) list_single_graphic_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_pane_fp

0x6e90,	// (0x00006e90) list_single_heading_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_heading_pane_fp

0x6e90,	// (0x00006e90) list_single_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_pane_fp

0x6ea6,	// (0x00006ea6) list_single_pane_fp_g1_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_pane_fp_g1

0x0fc2,	// (0x00000fc2) list_single_pane_fp_g2_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_pane_fp_g2

0x136f,	// (0x0000136f) list_single_pane_fp_g3_ParamLimits

0x136f,	// (0x0000136f) list_single_pane_fp_g3

0x6eb2,	// (0x00006eb2) list_single_pane_fp_g4_ParamLimits

0x6eb2,	// (0x00006eb2) list_single_pane_fp_g4

0x0003,

0xb0df,	// (0x0000b0df) list_single_pane_fp_g_ParamLimits

0xb0df,	// (0x0000b0df) list_single_pane_fp_g

0x6ebe,	// (0x00006ebe) list_single_pane_fp_t1_ParamLimits

0x6ebe,	// (0x00006ebe) list_single_pane_fp_t1

0x6ed5,	// (0x00006ed5) list_single_graphic_pane_fp_g1_ParamLimits

0x6ed5,	// (0x00006ed5) list_single_graphic_pane_fp_g1

0x6ea6,	// (0x00006ea6) list_single_graphic_pane_fp_g2_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_graphic_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_pane_fp_g4

0x6eb2,	// (0x00006eb2) list_single_graphic_pane_fp_g5_ParamLimits

0x6eb2,	// (0x00006eb2) list_single_graphic_pane_fp_g5

0x0004,

0xb0e8,	// (0x0000b0e8) list_single_graphic_pane_fp_g_ParamLimits

0xb0e8,	// (0x0000b0e8) list_single_graphic_pane_fp_g

0x6ee1,	// (0x00006ee1) list_single_graphic_pane_fp_t1_ParamLimits

0x6ee1,	// (0x00006ee1) list_single_graphic_pane_fp_t1

0x6ed5,	// (0x00006ed5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6ed5,	// (0x00006ed5) list_single_graphic_heading_pane_fp_g1

0x6ea6,	// (0x00006ea6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_graphic_heading_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_heading_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_heading_pane_fp_g4

0x6eb2,	// (0x00006eb2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6eb2,	// (0x00006eb2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb0e8,	// (0x0000b0e8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb0e8,	// (0x0000b0e8) list_single_graphic_heading_pane_fp_g

0x6ef7,	// (0x00006ef7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6ef7,	// (0x00006ef7) list_single_graphic_heading_pane_fp_t1

0x6f0d,	// (0x00006f0d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f0d,	// (0x00006f0d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb0f3,	// (0x0000b0f3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb0f3,	// (0x0000b0f3) list_single_graphic_heading_pane_fp_t

0x6f1f,	// (0x00006f1f) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f1f,	// (0x00006f1f) list_single_cale_day_pane_fp_g1

0x6f57,	// (0x00006f57) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f57,	// (0x00006f57) list_single_cale_day_pane_fp_g2

0x6f63,	// (0x00006f63) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f63,	// (0x00006f63) list_single_cale_day_pane_fp_g3

0x6f8b,	// (0x00006f8b) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f8b,	// (0x00006f8b) list_single_cale_day_pane_fp_g4

0x6faf,	// (0x00006faf) list_single_cale_day_pane_fp_g5_ParamLimits

0x6faf,	// (0x00006faf) list_single_cale_day_pane_fp_g5

0x0004,

0xb0f8,	// (0x0000b0f8) list_single_cale_day_pane_fp_g_ParamLimits

0xb0f8,	// (0x0000b0f8) list_single_cale_day_pane_fp_g

0x6fd3,	// (0x00006fd3) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fd3,	// (0x00006fd3) list_single_cale_day_pane_fp_t1

0x6ff9,	// (0x00006ff9) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ff9,	// (0x00006ff9) list_single_cale_day_pane_fp_t2

0x7012,	// (0x00007012) list_single_cale_day_pane_fp_t3_ParamLimits

0x7012,	// (0x00007012) list_single_cale_day_pane_fp_t3

0x0002,

0xb103,	// (0x0000b103) list_single_cale_day_pane_fp_t_ParamLimits

0xb103,	// (0x0000b103) list_single_cale_day_pane_fp_t

0x6ea6,	// (0x00006ea6) list_empty_pane_fp_g1_ParamLimits

0x6ea6,	// (0x00006ea6) list_empty_pane_fp_g1

0x702b,	// (0x0000702b) list_empty_pane_fp_t1

0x7039,	// (0x00007039) list_empty_pane_fp_t2

0x0001,

0xb10a,	// (0x0000b10a) list_empty_pane_fp_t

0x6ea6,	// (0x00006ea6) list_single_heading_pane_fp_g1_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_heading_pane_fp_g1

0x0fc2,	// (0x00000fc2) list_single_heading_pane_fp_g2_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_heading_pane_fp_g2

0x136f,	// (0x0000136f) list_single_heading_pane_fp_g3_ParamLimits

0x136f,	// (0x0000136f) list_single_heading_pane_fp_g3

0x0002,

0xb10f,	// (0x0000b10f) list_single_heading_pane_fp_g_ParamLimits

0xb10f,	// (0x0000b10f) list_single_heading_pane_fp_g

0x7047,	// (0x00007047) list_single_heading_pane_fp_t1_ParamLimits

0x7047,	// (0x00007047) list_single_heading_pane_fp_t1

0x7059,	// (0x00007059) list_single_heading_pane_fp_t2_ParamLimits

0x7059,	// (0x00007059) list_single_heading_pane_fp_t2

0x0001,

0xb116,	// (0x0000b116) list_single_heading_pane_fp_t_ParamLimits

0xb116,	// (0x0000b116) list_single_heading_pane_fp_t

0x16a9,	// (0x000016a9) aid_size_cell_fast

0x079d,	// (0x0000079d) soft_indicator_pane_cp1_t1

0x16e3,	// (0x000016e3) cell_app_pane_cp2_ParamLimits

0x16e3,	// (0x000016e3) cell_app_pane_cp2

0x660f,	// (0x0000660f) fep_hwr_candidate_drop_down_list_pane

0x683d,	// (0x0000683d) fep_hwr_candidate_pane_g3_ParamLimits

0x683d,	// (0x0000683d) fep_hwr_candidate_pane_g3

0x684a,	// (0x0000684a) fep_hwr_candidate_pane_g4_ParamLimits

0x684a,	// (0x0000684a) fep_hwr_candidate_pane_g4

0x0002,

0xb08a,	// (0x0000b08a) fep_hwr_candidate_pane_g_ParamLimits

0xb08a,	// (0x0000b08a) fep_hwr_candidate_pane_g

0x6908,	// (0x00006908) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6908,	// (0x00006908) fep_vkb_candidate_drop_down_list_pane

0x6d0b,	// (0x00006d0b) fep_vkb_candidate_pane_g3

0x6d13,	// (0x00006d13) fep_vkb_candidate_pane_g4

0x0002,

0xb0b7,	// (0x0000b0b7) fep_vkb_candidate_pane_g

0x6a13,	// (0x00006a13) cell_hwr_candidate_pane_g1_ParamLimits

0x6d7e,	// (0x00006d7e) cell_hwr_candidate_pane_g3_ParamLimits

0x6d7e,	// (0x00006d7e) cell_hwr_candidate_pane_g3

0x6d9f,	// (0x00006d9f) cell_hwr_candidate_pane_g4_ParamLimits

0x6d9f,	// (0x00006d9f) cell_hwr_candidate_pane_g4

0x0002,

0xb0d1,	// (0x0000b0d1) cell_hwr_candidate_pane_g_ParamLimits

0xb0d1,	// (0x0000b0d1) cell_hwr_candidate_pane_g

0x6dde,	// (0x00006dde) cell_vkb_candidate_pane_g3_ParamLimits

0x6dde,	// (0x00006dde) cell_vkb_candidate_pane_g3

0x6df9,	// (0x00006df9) cell_vkb_candidate_pane_g4_ParamLimits

0x6df9,	// (0x00006df9) cell_vkb_candidate_pane_g4

0x706f,	// (0x0000706f) cell_app_pane_cp2_g1_ParamLimits

0x706f,	// (0x0000706f) cell_app_pane_cp2_g1

0x708d,	// (0x0000708d) cell_app_pane_cp2_g2_ParamLimits

0x708d,	// (0x0000708d) cell_app_pane_cp2_g2

0x0001,

0xb11b,	// (0x0000b11b) cell_app_pane_cp2_g_ParamLimits

0xb11b,	// (0x0000b11b) cell_app_pane_cp2_g

0x7099,	// (0x00007099) cell_app_pane_cp2_t1_ParamLimits

0x7099,	// (0x00007099) cell_app_pane_cp2_t1

0x1349,	// (0x00001349) grid_highlight_pane_cp1_ParamLimits

0x1349,	// (0x00001349) grid_highlight_pane_cp1

0x70ab,	// (0x000070ab) cell_hwr_candidate_pane_cp1_ParamLimits

0x70ab,	// (0x000070ab) cell_hwr_candidate_pane_cp1

0x6a13,	// (0x00006a13) fep_hwr_candidate_drop_down_list_pane_g1

0x70ca,	// (0x000070ca) fep_hwr_candidate_drop_down_list_pane_g2

0x70d7,	// (0x000070d7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb120,	// (0x0000b120) fep_hwr_candidate_drop_down_list_pane_g

0x70e4,	// (0x000070e4) fep_hwr_candidate_drop_down_list_scroll_pane

0x70ed,	// (0x000070ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70ed,	// (0x000070ed) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x70fa,	// (0x000070fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70fa,	// (0x000070fa) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7107,	// (0x00007107) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7107,	// (0x00007107) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6dde,	// (0x00006dde) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6dde,	// (0x00006dde) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6df9,	// (0x00006df9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6df9,	// (0x00006df9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7114,	// (0x00007114) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7114,	// (0x00007114) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x712f,	// (0x0000712f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x712f,	// (0x0000712f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x714a,	// (0x0000714a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x714a,	// (0x0000714a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb127,	// (0x0000b127) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb127,	// (0x0000b127) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7165,	// (0x00007165) cell_vkb_candidate_pane_cp1_ParamLimits

0x7165,	// (0x00007165) cell_vkb_candidate_pane_cp1

0x6a13,	// (0x00006a13) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) fep_vkb_candidate_drop_down_list_pane_g1

0x70ca,	// (0x000070ca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70ca,	// (0x000070ca) fep_vkb_candidate_drop_down_list_pane_g2

0x70d7,	// (0x000070d7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70d7,	// (0x000070d7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb120,	// (0x0000b120) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb120,	// (0x0000b120) fep_vkb_candidate_drop_down_list_pane_g

0x7185,	// (0x00007185) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7185,	// (0x00007185) fep_vkb_candidate_drop_down_list_scroll_pane

0x7192,	// (0x00007192) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7192,	// (0x00007192) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x719f,	// (0x0000719f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x719f,	// (0x0000719f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71ab,	// (0x000071ab) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71ab,	// (0x000071ab) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d7e,	// (0x00006d7e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d7e,	// (0x00006d7e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d9f,	// (0x00006d9f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d9f,	// (0x00006d9f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71b7,	// (0x000071b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71b7,	// (0x000071b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71d8,	// (0x000071d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71d8,	// (0x000071d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x71f9,	// (0x000071f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71f9,	// (0x000071f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb138,	// (0x0000b138) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb138,	// (0x0000b138) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb697,	// (0x0000b697) title_pane_g1_ParamLimits

0xb6aa,	// (0x0000b6aa) title_pane_g2_ParamLimits

0xf244,	// (0x0000f244) title_pane_g_ParamLimits

0x1cb5,	// (0x00001cb5) aid_call2_pane

0x1cbd,	// (0x00001cbd) aid_call_pane

0x1cc5,	// (0x00001cc5) popup_clock_analogue_window_g1

0x1cc5,	// (0x00001cc5) popup_clock_analogue_window_g2

0x1ccd,	// (0x00001ccd) popup_clock_analogue_window_g3

0x1cd6,	// (0x00001cd6) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xac56,	// (0x0000ac56) popup_clock_analogue_window_g

0x1cde,	// (0x00001cde) popup_clock_analogue_window_t1

0x1d66,	// (0x00001d66) clock_digital_number_pane_ParamLimits

0x1d66,	// (0x00001d66) clock_digital_number_pane

0x1d72,	// (0x00001d72) clock_digital_number_pane_cp02_ParamLimits

0x1d72,	// (0x00001d72) clock_digital_number_pane_cp02

0x1d7e,	// (0x00001d7e) clock_digital_number_pane_cp03_ParamLimits

0x1d7e,	// (0x00001d7e) clock_digital_number_pane_cp03

0x1d8a,	// (0x00001d8a) clock_digital_number_pane_cp04_ParamLimits

0x1d8a,	// (0x00001d8a) clock_digital_number_pane_cp04

0x1d96,	// (0x00001d96) clock_digital_separator_pane_ParamLimits

0x1d96,	// (0x00001d96) clock_digital_separator_pane

0x1da2,	// (0x00001da2) popup_clock_digital_window_t1_ParamLimits

0x1da2,	// (0x00001da2) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xac61,	// (0x0000ac61) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xac61,	// (0x0000ac61) clock_digital_separator_pane_g

0xcaca,	// (0x0000caca) aid_fill_nsta_ParamLimits

0xcc00,	// (0x0000cc00) indicator_nsta_pane_ParamLimits

0x334a,	// (0x0000334a) popup_clock_analogue_window

0x334a,	// (0x0000334a) popup_clock_digital_window

0x166a,	// (0x0000166a) grid_indicator_nsta_pane_ParamLimits

0x5ef2,	// (0x00005ef2) clock_nsta_pane_t2

0x0001,

0xb00a,	// (0x0000b00a) clock_nsta_pane_t

0x1a9d,	// (0x00001a9d) aid_size_max_handle

0x1aa7,	// (0x00001aa7) aid_size_min_handle

0x2563,	// (0x00002563) editor_scroll_pane

0x7214,	// (0x00007214) ex_editor_pane

0x1617,	// (0x00001617) scroll_pane_cp13

0x0d9d,	// (0x00000d9d) scroll_pane_cp14

0x1d13,	// (0x00001d13) scroll_pane_cp36

0xbffa,	// (0x0000bffa) list_single_graphic_hl_pane_cp2_ParamLimits

0xbffa,	// (0x0000bffa) list_single_graphic_hl_pane_cp2

0xd45b,	// (0x0000d45b) list_single_graphic_hl_pane_ParamLimits

0xd45b,	// (0x0000d45b) list_single_graphic_hl_pane

0x721c,	// (0x0000721c) aid_size_min_hl_cp1

0x7225,	// (0x00007225) list_highlight_pane_cp34_ParamLimits

0x7225,	// (0x00007225) list_highlight_pane_cp34

0x7236,	// (0x00007236) list_single_graphic_hl_pane_g1_ParamLimits

0x7236,	// (0x00007236) list_single_graphic_hl_pane_g1

0xd92a,	// (0x0000d92a) list_single_graphic_hl_pane_g2_ParamLimits

0xd92a,	// (0x0000d92a) list_single_graphic_hl_pane_g2

0xd92a,	// (0x0000d92a) list_single_graphic_hl_pane_g3_ParamLimits

0xd92a,	// (0x0000d92a) list_single_graphic_hl_pane_g3

0x24d4,	// (0x000024d4) list_single_graphic_hl_pane_g4_ParamLimits

0x24d4,	// (0x000024d4) list_single_graphic_hl_pane_g4

0xd936,	// (0x0000d936) list_single_graphic_hl_pane_g5_ParamLimits

0xd936,	// (0x0000d936) list_single_graphic_hl_pane_g5

0x0004,

0xf402,	// (0x0000f402) list_single_graphic_hl_pane_g_ParamLimits

0xf402,	// (0x0000f402) list_single_graphic_hl_pane_g

0xd94a,	// (0x0000d94a) list_single_graphic_hl_pane_t1_ParamLimits

0xd94a,	// (0x0000d94a) list_single_graphic_hl_pane_t1

0x7279,	// (0x00007279) aid_size_min_hl_cp2

0x7282,	// (0x00007282) list_highlight_pane_cp34_cp2_ParamLimits

0x7282,	// (0x00007282) list_highlight_pane_cp34_cp2

0x7236,	// (0x00007236) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7236,	// (0x00007236) list_single_graphic_hl_pane_g1_cp2

0x728f,	// (0x0000728f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x728f,	// (0x0000728f) list_single_graphic_hl_pane_g2_cp2

0x729b,	// (0x0000729b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x729b,	// (0x0000729b) list_single_graphic_hl_pane_g3_cp2

0x0db1,	// (0x00000db1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_hl_pane_g4_cp2

0x72a9,	// (0x000072a9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72a9,	// (0x000072a9) list_single_graphic_hl_pane_g5_cp2

0xc2e0,	// (0x0000c2e0) control_pane_g4_ParamLimits

0xc2e0,	// (0x0000c2e0) control_pane_g4

0x2ad4,	// (0x00002ad4) bg_popup_sub_pane_cp10_ParamLimits

0x659b,	// (0x0000659b) list_choice_list_pane_ParamLimits

0x65aa,	// (0x000065aa) scroll_pane_cp23

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e4a,	// (0x00006e4a) list_preview_fixed_pane_ParamLimits

0x6e60,	// (0x00006e60) list_preview_fixed_pane_cp_ParamLimits

0x6e60,	// (0x00006e60) list_preview_fixed_pane_cp

0x6e6c,	// (0x00006e6c) popup_preview_fixed_window_g1_ParamLimits

0x6e6c,	// (0x00006e6c) popup_preview_fixed_window_g1

0x6e78,	// (0x00006e78) popup_preview_fixed_window_g2_ParamLimits

0x6e78,	// (0x00006e78) popup_preview_fixed_window_g2

0x0002,

0xb0d8,	// (0x0000b0d8) popup_preview_fixed_window_g_ParamLimits

0xb0d8,	// (0x0000b0d8) popup_preview_fixed_window_g

0x1944,	// (0x00001944) aid_navi_side_left_pane_ParamLimits

0x1959,	// (0x00001959) aid_navi_side_right_pane_ParamLimits

0x1971,	// (0x00001971) navi_icon_pane_stacon_ParamLimits

0x1985,	// (0x00001985) navi_navi_pane_stacon_ParamLimits

0x1971,	// (0x00001971) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72d3,	// (0x000072d3) listscroll_text_info_pane

0x72db,	// (0x000072db) list_text_info_pane_ParamLimits

0x72db,	// (0x000072db) list_text_info_pane

0x72ea,	// (0x000072ea) scroll_pane_cp24_ParamLimits

0x72ea,	// (0x000072ea) scroll_pane_cp24

0xd960,	// (0x0000d960) list_text_info_pane_t1_ParamLimits

0xd960,	// (0x0000d960) list_text_info_pane_t1

0xc44e,	// (0x0000c44e) popup_fast_swap2_window_ParamLimits

0xc44e,	// (0x0000c44e) popup_fast_swap2_window

0x733d,	// (0x0000733d) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c5a,	// (0x00003c5a) heading_pane_cp2

0x0a70,	// (0x00000a70) listscroll_fast2_pane

0x7347,	// (0x00007347) grid_fast2_pane

0x7351,	// (0x00007351) listscroll_fast2_pane_g1

0x7359,	// (0x00007359) listscroll_fast2_pane_g2

0x0001,

0xb154,	// (0x0000b154) listscroll_fast2_pane_g

0x1617,	// (0x00001617) scroll_pane_cp26

0x7363,	// (0x00007363) cell_fast2_pane_ParamLimits

0x7363,	// (0x00007363) cell_fast2_pane

0x7378,	// (0x00007378) cell_fast2_pane_g1

0x7381,	// (0x00007381) cell_fast2_pane_g2

0x738a,	// (0x0000738a) cell_fast2_pane_g3

0x0002,

0xb159,	// (0x0000b159) cell_fast2_pane_g

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp9

0x0b6f,	// (0x00000b6f) main_eswt_pane_ParamLimits

0x0b6f,	// (0x00000b6f) main_eswt_pane

0x72ff,	// (0x000072ff) list_single_text_info_pane

0x7392,	// (0x00007392) eswt_ctrl_button_pane

0x7392,	// (0x00007392) eswt_ctrl_canvas_pane

0x739a,	// (0x0000739a) eswt_ctrl_combo_pane

0x7392,	// (0x00007392) eswt_ctrl_default_pane

0x7392,	// (0x00007392) eswt_ctrl_label_pane

0x73a2,	// (0x000073a2) eswt_ctrl_wait_pane

0x73aa,	// (0x000073aa) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73ca,	// (0x000073ca) popup_eswt_tasktip_window_ParamLimits

0x73ca,	// (0x000073ca) popup_eswt_tasktip_window

0x3791,	// (0x00003791) bg_popup_window_pane_cp18

0x73db,	// (0x000073db) eswt_control_pane_g1_ParamLimits

0x73db,	// (0x000073db) eswt_control_pane_g1

0x73e8,	// (0x000073e8) eswt_control_pane_g2_ParamLimits

0x73e8,	// (0x000073e8) eswt_control_pane_g2

0x73f5,	// (0x000073f5) eswt_control_pane_g3_ParamLimits

0x73f5,	// (0x000073f5) eswt_control_pane_g3

0x7402,	// (0x00007402) eswt_control_pane_g4_ParamLimits

0x7402,	// (0x00007402) eswt_control_pane_g4

0x0003,

0xb160,	// (0x0000b160) eswt_control_pane_g_ParamLimits

0xb160,	// (0x0000b160) eswt_control_pane_g

0x1349,	// (0x00001349) bg_button_pane_ParamLimits

0x1349,	// (0x00001349) bg_button_pane

0x0b6f,	// (0x00000b6f) common_borders_pane_copy2_ParamLimits

0x0b6f,	// (0x00000b6f) common_borders_pane_copy2

0x740f,	// (0x0000740f) control_button_pane_g1_ParamLimits

0x740f,	// (0x0000740f) control_button_pane_g1

0x741b,	// (0x0000741b) control_button_pane_g2_ParamLimits

0x741b,	// (0x0000741b) control_button_pane_g2

0x7427,	// (0x00007427) control_button_pane_g3_ParamLimits

0x7427,	// (0x00007427) control_button_pane_g3

0x0002,

0xb169,	// (0x0000b169) control_button_pane_g_ParamLimits

0xb169,	// (0x0000b169) control_button_pane_g

0x743b,	// (0x0000743b) control_button_pane_t1

0x7449,	// (0x00007449) control_button_pane_t2

0x0001,

0xb170,	// (0x0000b170) control_button_pane_t

0x35f7,	// (0x000035f7) bg_button_pane_g1

0x35ff,	// (0x000035ff) bg_button_pane_g2

0x3607,	// (0x00003607) bg_button_pane_g3

0x360f,	// (0x0000360f) bg_button_pane_g4

0x3617,	// (0x00003617) bg_button_pane_g5

0x361f,	// (0x0000361f) bg_button_pane_g6

0x3627,	// (0x00003627) bg_button_pane_g7

0x362f,	// (0x0000362f) bg_button_pane_g8

0x3637,	// (0x00003637) bg_button_pane_g9

0x0008,

0xadb8,	// (0x0000adb8) bg_button_pane_g

0x6556,	// (0x00006556) common_borders_pane_ParamLimits

0x6556,	// (0x00006556) common_borders_pane

0x73db,	// (0x000073db) eswt_control_pane_g1_copy1_ParamLimits

0x73db,	// (0x000073db) eswt_control_pane_g1_copy1

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy1_ParamLimits

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy1

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy1_ParamLimits

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy1

0x7402,	// (0x00007402) eswt_control_pane_g4_copy1_ParamLimits

0x7402,	// (0x00007402) eswt_control_pane_g4_copy1

0x6591,	// (0x00006591) bg_eswt_ctrl_canvas_pane_g1

0x6556,	// (0x00006556) common_borders_pane_cp2_ParamLimits

0x6556,	// (0x00006556) common_borders_pane_cp2

0x6556,	// (0x00006556) common_borders_pane_cp3_ParamLimits

0x6556,	// (0x00006556) common_borders_pane_cp3

0x7457,	// (0x00007457) separator_horizontal_pane

0x745f,	// (0x0000745f) separator_vertical_pane

0x73db,	// (0x000073db) eswt_control_pane_g1_copy2_ParamLimits

0x73db,	// (0x000073db) eswt_control_pane_g1_copy2

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy2_ParamLimits

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy2

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy2_ParamLimits

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy2

0x7402,	// (0x00007402) eswt_control_pane_g4_copy2_ParamLimits

0x7402,	// (0x00007402) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7468,	// (0x00007468) separator_horizontal_pane_g1

0x7471,	// (0x00007471) separator_horizontal_pane_g2

0x747a,	// (0x0000747a) separator_horizontal_pane_g3

0x0002,

0xb175,	// (0x0000b175) separator_horizontal_pane_g

0x73db,	// (0x000073db) eswt_control_pane_g1_copy3_ParamLimits

0x73db,	// (0x000073db) eswt_control_pane_g1_copy3

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy3_ParamLimits

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy3

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy3_ParamLimits

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy3

0x7402,	// (0x00007402) eswt_control_pane_g4_copy3_ParamLimits

0x7402,	// (0x00007402) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7483,	// (0x00007483) separator_vertical_pane_g1

0x748c,	// (0x0000748c) separator_vertical_pane_g2

0x7495,	// (0x00007495) separator_vertical_pane_g3

0x0002,

0xb17c,	// (0x0000b17c) separator_vertical_pane_g

0x73db,	// (0x000073db) eswt_control_pane_g1_copy4_ParamLimits

0x73db,	// (0x000073db) eswt_control_pane_g1_copy4

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy4_ParamLimits

0x73e8,	// (0x000073e8) eswt_control_pane_g2_copy4

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy4_ParamLimits

0x73f5,	// (0x000073f5) eswt_control_pane_g3_copy4

0x7402,	// (0x00007402) eswt_control_pane_g4_copy4_ParamLimits

0x7402,	// (0x00007402) eswt_control_pane_g4_copy4

0x749e,	// (0x0000749e) eswt_ctrl_combo_button_pane

0x74a6,	// (0x000074a6) eswt_ctrl_input_pane

0x74ae,	// (0x000074ae) popup_choice_list_window_cp70

0x74b6,	// (0x000074b6) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6556,	// (0x00006556) bg_button_pane_cp70_ParamLimits

0x6556,	// (0x00006556) bg_button_pane_cp70

0x74c4,	// (0x000074c4) eswt_ctrl_combo_button_pane_g1

0x74cc,	// (0x000074cc) wait_bar_pane_cp70

0x3791,	// (0x00003791) bg_popup_window_pane_cp70_ParamLimits

0x3791,	// (0x00003791) bg_popup_window_pane_cp70

0x74d4,	// (0x000074d4) popup_eswt_tasktip_window_t1

0x74ea,	// (0x000074ea) wait_bar_pane_cp71_ParamLimits

0x74ea,	// (0x000074ea) wait_bar_pane_cp71

0x74f6,	// (0x000074f6) grid_eswt_app_pane

0x1b01,	// (0x00001b01) scroll_pane_cp70

0xd97d,	// (0x0000d97d) cell_eswt_app_pane_ParamLimits

0xd97d,	// (0x0000d97d) cell_eswt_app_pane

0xd9a7,	// (0x0000d9a7) cell_eswt_app_pane_g1_ParamLimits

0xd9a7,	// (0x0000d9a7) cell_eswt_app_pane_g1

0xd9d6,	// (0x0000d9d6) cell_eswt_app_pane_g2_ParamLimits

0xd9d6,	// (0x0000d9d6) cell_eswt_app_pane_g2

0x0001,

0xf40d,	// (0x0000f40d) cell_eswt_app_pane_g_ParamLimits

0xf40d,	// (0x0000f40d) cell_eswt_app_pane_g

0xd9fa,	// (0x0000d9fa) cell_eswt_app_pane_t1_ParamLimits

0xd9fa,	// (0x0000d9fa) cell_eswt_app_pane_t1

0x75b8,	// (0x000075b8) grid_highlight_pane_cp70_ParamLimits

0x75b8,	// (0x000075b8) grid_highlight_pane_cp70

0x2444,	// (0x00002444) set_content_pane_g1

0xc272,	// (0x0000c272) status_small_volume_pane

0x75c4,	// (0x000075c4) status_small_volume_pane_g1

0x75cc,	// (0x000075cc) volume_small2_pane

0x75d5,	// (0x000075d5) volume_small2_pane_g1

0x75de,	// (0x000075de) volume_small2_pane_g2

0x75e7,	// (0x000075e7) volume_small2_pane_g3

0x75f0,	// (0x000075f0) volume_small2_pane_g4

0x75f9,	// (0x000075f9) volume_small2_pane_g5

0x7602,	// (0x00007602) volume_small2_pane_g6

0x760b,	// (0x0000760b) volume_small2_pane_g7

0x7614,	// (0x00007614) volume_small2_pane_g8

0x761d,	// (0x0000761d) volume_small2_pane_g9

0x7626,	// (0x00007626) volume_small2_pane_g10

0x0009,

0xb188,	// (0x0000b188) volume_small2_pane_g

0x6b5b,	// (0x00006b5b) fep_vkb_top_text_pane_g1_ParamLimits

0xd8d2,	// (0x0000d8d2) fep_vkb_top_text_pane_t1_ParamLimits

0x6e84,	// (0x00006e84) popup_preview_fixed_window_g3_ParamLimits

0x6e84,	// (0x00006e84) popup_preview_fixed_window_g3

0xca5d,	// (0x0000ca5d) popup_toolbar_trans_pane

0xd2a0,	// (0x0000d2a0) aid_height_set_list_ParamLimits

0x4e05,	// (0x00004e05) aid_size_parent_ParamLimits

0x2ad4,	// (0x00002ad4) list_highlight_pane_cp2_ParamLimits

0x2444,	// (0x00002444) set_content_pane_g1_ParamLimits

0xd46d,	// (0x0000d46d) list_single_image_pane_ParamLimits

0xd46d,	// (0x0000d46d) list_single_image_pane

0xda2c,	// (0x0000da2c) aid_size_cell_image_ParamLimits

0xda2c,	// (0x0000da2c) aid_size_cell_image

0xda39,	// (0x0000da39) grid_single_image_pane_ParamLimits

0xda39,	// (0x0000da39) grid_single_image_pane

0x7648,	// (0x00007648) list_single_image_pane_g1_ParamLimits

0x7648,	// (0x00007648) list_single_image_pane_g1

0x7654,	// (0x00007654) list_single_image_pane_g2_ParamLimits

0x7654,	// (0x00007654) list_single_image_pane_g2

0x0001,

0xb19d,	// (0x0000b19d) list_single_image_pane_g_ParamLimits

0xb19d,	// (0x0000b19d) list_single_image_pane_g

0x7668,	// (0x00007668) list_single_image_pane_t1_ParamLimits

0x7668,	// (0x00007668) list_single_image_pane_t1

0xda45,	// (0x0000da45) cell_image_list_pane_ParamLimits

0xda45,	// (0x0000da45) cell_image_list_pane

0xda59,	// (0x0000da59) cell_image_list_pane_g1

0xda62,	// (0x0000da62) cell_image_list_pane_g2

0x0001,

0xf412,	// (0x0000f412) cell_image_list_pane_g

0x76a4,	// (0x000076a4) aid_size_cell_tb_trans_pane

0x1349,	// (0x00001349) bg_tb_trans_pane

0x76b6,	// (0x000076b6) grid_tb_trans_pane

0x35f7,	// (0x000035f7) bg_tb_trans_pane_g1

0x35ff,	// (0x000035ff) bg_tb_trans_pane_g2

0x3607,	// (0x00003607) bg_tb_trans_pane_g3

0x360f,	// (0x0000360f) bg_tb_trans_pane_g4

0x3617,	// (0x00003617) bg_tb_trans_pane_g5

0x362f,	// (0x0000362f) bg_tb_trans_pane_g6

0x3637,	// (0x00003637) bg_tb_trans_pane_g7

0x361f,	// (0x0000361f) bg_tb_trans_pane_g8

0x3627,	// (0x00003627) bg_tb_trans_pane_g9

0x0008,

0xb1a7,	// (0x0000b1a7) bg_tb_trans_pane_g

0x76ca,	// (0x000076ca) cell_toolbar_trans_pane_ParamLimits

0x76ca,	// (0x000076ca) cell_toolbar_trans_pane

0x6591,	// (0x00006591) cell_toolbar_trans_pane_g1

0xd668,	// (0x0000d668) list_form2_midp_pane_t1

0xd676,	// (0x0000d676) list_form2_midp_pane_t2

0x0001,

0xf3dd,	// (0x0000f3dd) list_form2_midp_pane_t

0x610e,	// (0x0000610e) scroll_pane_cp51_ParamLimits

0x6314,	// (0x00006314) form2_midp_wait_pane_g1

0x631d,	// (0x0000631d) form2_midp_wait_pane_g2

0x6326,	// (0x00006326) form2_midp_wait_pane_g3

0x0002,

0xb065,	// (0x0000b065) form2_midp_wait_pane_g

0x04f9,	// (0x000004f9) list_highlight_pane_cp21_ParamLimits

0x6374,	// (0x00006374) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6383,	// (0x00006383) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5004,	// (0x00005004) list_single_2graphic_im_pane_ParamLimits

0x5004,	// (0x00005004) list_single_2graphic_im_pane

0x76f0,	// (0x000076f0) list_single_2graphic_im_pane_g1_ParamLimits

0x76f0,	// (0x000076f0) list_single_2graphic_im_pane_g1

0x7701,	// (0x00007701) list_single_2graphic_im_pane_g2_ParamLimits

0x7701,	// (0x00007701) list_single_2graphic_im_pane_g2

0x770d,	// (0x0000770d) list_single_2graphic_im_pane_g3_ParamLimits

0x770d,	// (0x0000770d) list_single_2graphic_im_pane_g3

0x0003,

0xb1ba,	// (0x0000b1ba) list_single_2graphic_im_pane_g_ParamLimits

0xb1ba,	// (0x0000b1ba) list_single_2graphic_im_pane_g

0x772d,	// (0x0000772d) list_single_2graphic_im_pane_t1_ParamLimits

0x772d,	// (0x0000772d) list_single_2graphic_im_pane_t1

0x6e90,	// (0x00006e90) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e90,	// (0x00006e90) list_single_graphic_2heading_pane_fp

0x6ed5,	// (0x00006ed5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6ed5,	// (0x00006ed5) list_single_graphic_2heading_pane_fp_g1

0x6ea6,	// (0x00006ea6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_graphic_2heading_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_2heading_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_2heading_pane_fp_g4

0x6eb2,	// (0x00006eb2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6eb2,	// (0x00006eb2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb0e8,	// (0x0000b0e8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb0e8,	// (0x0000b0e8) list_single_graphic_2heading_pane_fp_g

0x775e,	// (0x0000775e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x775e,	// (0x0000775e) list_single_graphic_2heading_pane_fp_t1

0x6f0d,	// (0x00006f0d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f0d,	// (0x00006f0d) list_single_graphic_2heading_pane_fp_t2

0x7774,	// (0x00007774) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7774,	// (0x00007774) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb1c3,	// (0x0000b1c3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb1c3,	// (0x0000b1c3) list_single_graphic_2heading_pane_fp_t

0x67bb,	// (0x000067bb) fep_hwr_write_pane_g5_ParamLimits

0x67bb,	// (0x000067bb) fep_hwr_write_pane_g5

0x67c7,	// (0x000067c7) fep_hwr_write_pane_g6_ParamLimits

0x67c7,	// (0x000067c7) fep_hwr_write_pane_g6

0x73aa,	// (0x000073aa) eswt_shell_pane_ParamLimits

0x3791,	// (0x00003791) bg_popup_window_pane_cp18_ParamLimits

0x4cc9,	// (0x00004cc9) heading_pane_cp70

0x74d4,	// (0x000074d4) popup_eswt_tasktip_window_t1_ParamLimits

0xcb25,	// (0x0000cb25) aid_touch_tab_arrow_left

0xcb3b,	// (0x0000cb3b) aid_touch_tab_arrow_right

0xb6c2,	// (0x0000b6c2) title_pane_g3_ParamLimits

0xb6c2,	// (0x0000b6c2) title_pane_g3

0x1234,	// (0x00001234) set_value_pane_g1

0xca5d,	// (0x0000ca5d) popup_toolbar_trans_pane_ParamLimits

0x76a4,	// (0x000076a4) aid_size_cell_tb_trans_pane_ParamLimits

0x1349,	// (0x00001349) bg_tb_trans_pane_ParamLimits

0x76b6,	// (0x000076b6) grid_tb_trans_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane

0x0b6f,	// (0x00000b6f) cont_snote2_single_text_pane_ParamLimits

0x0b6f,	// (0x00000b6f) cont_snote2_single_text_pane

0x0b6f,	// (0x00000b6f) cont_snote2_single_graphic_pane_ParamLimits

0x0b6f,	// (0x00000b6f) cont_snote2_single_graphic_pane

0x3e70,	// (0x00003e70) cont_note_wait_pane_ParamLimits

0x3e70,	// (0x00003e70) cont_note_wait_pane

0x3e70,	// (0x00003e70) cont_note_image_pane_ParamLimits

0x3e70,	// (0x00003e70) cont_note_image_pane

0x778a,	// (0x0000778a) popup_note2_window_g1_ParamLimits

0x778a,	// (0x0000778a) popup_note2_window_g1

0x77bb,	// (0x000077bb) popup_note2_window_t1_ParamLimits

0x77bb,	// (0x000077bb) popup_note2_window_t1

0x7800,	// (0x00007800) popup_note2_window_t2_ParamLimits

0x7800,	// (0x00007800) popup_note2_window_t2

0x7845,	// (0x00007845) popup_note2_window_t3_ParamLimits

0x7845,	// (0x00007845) popup_note2_window_t3

0x788a,	// (0x0000788a) popup_note2_window_t4_ParamLimits

0x788a,	// (0x0000788a) popup_note2_window_t4

0x08a5,	// (0x000008a5) popup_note2_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note2_window_t5

0x0004,

0xb1cf,	// (0x0000b1cf) popup_note2_window_t_ParamLimits

0xb1cf,	// (0x0000b1cf) popup_note2_window_t

0x78b9,	// (0x000078b9) popup_note2_image_window_g1_ParamLimits

0x78b9,	// (0x000078b9) popup_note2_image_window_g1

0x78c5,	// (0x000078c5) popup_note2_image_window_g2_ParamLimits

0x78c5,	// (0x000078c5) popup_note2_image_window_g2

0x0001,

0xb1da,	// (0x0000b1da) popup_note2_image_window_g_ParamLimits

0xb1da,	// (0x0000b1da) popup_note2_image_window_g

0x78d7,	// (0x000078d7) popup_note2_image_window_t1_ParamLimits

0x78d7,	// (0x000078d7) popup_note2_image_window_t1

0x78ef,	// (0x000078ef) popup_note2_image_window_t2_ParamLimits

0x78ef,	// (0x000078ef) popup_note2_image_window_t2

0x7907,	// (0x00007907) popup_note2_image_window_t3_ParamLimits

0x7907,	// (0x00007907) popup_note2_image_window_t3

0x0002,

0xb1df,	// (0x0000b1df) popup_note2_image_window_t_ParamLimits

0xb1df,	// (0x0000b1df) popup_note2_image_window_t

0x3e7e,	// (0x00003e7e) popup_note2_wait_window_g1_ParamLimits

0x3e7e,	// (0x00003e7e) popup_note2_wait_window_g1

0x7923,	// (0x00007923) popup_note2_wait_window_g2_ParamLimits

0x7923,	// (0x00007923) popup_note2_wait_window_g2

0x3e96,	// (0x00003e96) popup_note2_wait_window_g3_ParamLimits

0x3e96,	// (0x00003e96) popup_note2_wait_window_g3

0x0002,

0xb1e6,	// (0x0000b1e6) popup_note2_wait_window_g_ParamLimits

0xb1e6,	// (0x0000b1e6) popup_note2_wait_window_g

0x792f,	// (0x0000792f) popup_note2_wait_window_t1_ParamLimits

0x792f,	// (0x0000792f) popup_note2_wait_window_t1

0x794d,	// (0x0000794d) popup_note2_wait_window_t2_ParamLimits

0x794d,	// (0x0000794d) popup_note2_wait_window_t2

0x796b,	// (0x0000796b) popup_note2_wait_window_t3_ParamLimits

0x796b,	// (0x0000796b) popup_note2_wait_window_t3

0x797d,	// (0x0000797d) popup_note2_wait_window_t4_ParamLimits

0x797d,	// (0x0000797d) popup_note2_wait_window_t4

0x0003,

0xb1ed,	// (0x0000b1ed) popup_note2_wait_window_t_ParamLimits

0xb1ed,	// (0x0000b1ed) popup_note2_wait_window_t

0x798f,	// (0x0000798f) wait_bar2_pane_ParamLimits

0x798f,	// (0x0000798f) wait_bar2_pane

0x79a7,	// (0x000079a7) popup_snote2_single_text_window_g1_ParamLimits

0x79a7,	// (0x000079a7) popup_snote2_single_text_window_g1

0x79cf,	// (0x000079cf) popup_snote2_single_text_window_t1_ParamLimits

0x79cf,	// (0x000079cf) popup_snote2_single_text_window_t1

0x7a1b,	// (0x00007a1b) popup_snote2_single_text_window_t2_ParamLimits

0x7a1b,	// (0x00007a1b) popup_snote2_single_text_window_t2

0x7a67,	// (0x00007a67) popup_snote2_single_text_window_t3_ParamLimits

0x7a67,	// (0x00007a67) popup_snote2_single_text_window_t3

0x7aa8,	// (0x00007aa8) popup_snote2_single_text_window_t4_ParamLimits

0x7aa8,	// (0x00007aa8) popup_snote2_single_text_window_t4

0x7ade,	// (0x00007ade) popup_snote2_single_text_window_t5_ParamLimits

0x7ade,	// (0x00007ade) popup_snote2_single_text_window_t5

0x0004,

0xb1f6,	// (0x0000b1f6) popup_snote2_single_text_window_t_ParamLimits

0xb1f6,	// (0x0000b1f6) popup_snote2_single_text_window_t

0x7b09,	// (0x00007b09) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b09,	// (0x00007b09) popup_snote2_single_graphic_window_g1

0x7b31,	// (0x00007b31) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b31,	// (0x00007b31) popup_snote2_single_graphic_window_g2

0x0001,

0xb201,	// (0x0000b201) popup_snote2_single_graphic_window_g_ParamLimits

0xb201,	// (0x0000b201) popup_snote2_single_graphic_window_g

0x7b59,	// (0x00007b59) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b59,	// (0x00007b59) popup_snote2_single_graphic_window_t1

0x7ba5,	// (0x00007ba5) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ba5,	// (0x00007ba5) popup_snote2_single_graphic_window_t2

0x7a67,	// (0x00007a67) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a67,	// (0x00007a67) popup_snote2_single_graphic_window_t3

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_t4_ParamLimits

0x7aa8,	// (0x00007aa8) popup_snote2_single_graphic_window_t4

0x7ade,	// (0x00007ade) popup_snote2_single_graphic_window_t5_ParamLimits

0x7ade,	// (0x00007ade) popup_snote2_single_graphic_window_t5

0x0004,

0xb206,	// (0x0000b206) popup_snote2_single_graphic_window_t_ParamLimits

0xb206,	// (0x0000b206) popup_snote2_single_graphic_window_t

0x5f9c,	// (0x00005f9c) clock_nsta_pane_cp2_t1

0x5f9c,	// (0x00005f9c) clock_nsta_pane_cp2_t2

0x0001,

0xb026,	// (0x0000b026) clock_nsta_pane_cp2_t

0x1363,	// (0x00001363) form_field_data_wide_pane_g1_ParamLimits

0x0fc2,	// (0x00000fc2) form_field_data_wide_pane_g2_ParamLimits

0x0fc2,	// (0x00000fc2) form_field_data_wide_pane_g2

0x136f,	// (0x0000136f) form_field_data_wide_pane_g3_ParamLimits

0x136f,	// (0x0000136f) form_field_data_wide_pane_g3

0x0002,

0xabd9,	// (0x0000abd9) form_field_data_wide_pane_g_ParamLimits

0xabd9,	// (0x0000abd9) form_field_data_wide_pane_g

0xd5ab,	// (0x0000d5ab) grid_touch_3_pane_ParamLimits

0xd5ab,	// (0x0000d5ab) grid_touch_3_pane

0xda6b,	// (0x0000da6b) cell_touch_3_pane_ParamLimits

0xda6b,	// (0x0000da6b) cell_touch_3_pane

0x6591,	// (0x00006591) cell_touch_3_pane_g1

0x6591,	// (0x00006591) cell_touch_3_pane_g2

0x0001,

0xb0ab,	// (0x0000b0ab) cell_touch_3_pane_g

0x08d7,	// (0x000008d7) cont_query_data_pane

0x08df,	// (0x000008df) cont_query_data_pane_cp1

0x7c22,	// (0x00007c22) button_value_adjust_pane_cp7

0x7c2a,	// (0x00007c2a) query_popup_pane_cp3

0x1e2b,	// (0x00001e2b) bg_popup_sub_pane_cp22_ParamLimits

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2

0x1e59,	// (0x00001e59) popup_side_volume_key_window_g2

0x1e65,	// (0x00001e65) popup_side_volume_key_window_g3

0x0002,

0xac6f,	// (0x0000ac6f) popup_side_volume_key_window_g

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_t2

0x0001,

0xac76,	// (0x0000ac76) popup_side_volume_key_window_t

0x2305,	// (0x00002305) popup_side_volume_key_window_ParamLimits

0xba93,	// (0x0000ba93) list_double_graphic_pane_g4_ParamLimits

0xba93,	// (0x0000ba93) list_double_graphic_pane_g4

0xd447,	// (0x0000d447) list_single_2heading_msg_pane_ParamLimits

0xd447,	// (0x0000d447) list_single_2heading_msg_pane

0xdab4,	// (0x0000dab4) list_single_2heading_msg_pane_g1_ParamLimits

0xdab4,	// (0x0000dab4) list_single_2heading_msg_pane_g1

0xdac0,	// (0x0000dac0) list_single_2heading_msg_pane_g2_ParamLimits

0xdac0,	// (0x0000dac0) list_single_2heading_msg_pane_g2

0xdad3,	// (0x0000dad3) list_single_2heading_msg_pane_g3_ParamLimits

0xdad3,	// (0x0000dad3) list_single_2heading_msg_pane_g3

0x7c65,	// (0x00007c65) list_single_2heading_msg_pane_g4_ParamLimits

0x7c65,	// (0x00007c65) list_single_2heading_msg_pane_g4

0x0003,

0xf417,	// (0x0000f417) list_single_2heading_msg_pane_g_ParamLimits

0xf417,	// (0x0000f417) list_single_2heading_msg_pane_g

0x7c7d,	// (0x00007c7d) list_single_2heading_msg_pane_t1_ParamLimits

0x7c7d,	// (0x00007c7d) list_single_2heading_msg_pane_t1

0xdadf,	// (0x0000dadf) list_single_2heading_msg_pane_t2_ParamLimits

0xdadf,	// (0x0000dadf) list_single_2heading_msg_pane_t2

0xdb4a,	// (0x0000db4a) list_single_2heading_msg_pane_t3_ParamLimits

0xdb4a,	// (0x0000db4a) list_single_2heading_msg_pane_t3

0x7d12,	// (0x00007d12) list_single_2heading_msg_pane_t4_ParamLimits

0x7d12,	// (0x00007d12) list_single_2heading_msg_pane_t4

0x0003,

0xf420,	// (0x0000f420) list_single_2heading_msg_pane_t_ParamLimits

0xf420,	// (0x0000f420) list_single_2heading_msg_pane_t

0x044d,	// (0x0000044d) title_pane_g4_ParamLimits

0x044d,	// (0x0000044d) title_pane_g4

0x186c,	// (0x0000186c) title_pane_stacon_g3_ParamLimits

0x186c,	// (0x0000186c) title_pane_stacon_g3

0x7721,	// (0x00007721) list_single_2graphic_im_pane_g4_ParamLimits

0x7721,	// (0x00007721) list_single_2graphic_im_pane_g4

0x4a35,	// (0x00004a35) popup_side_volume_key_window_cp

0x54b9,	// (0x000054b9) main_idle_act2_pane_t1

0x363f,	// (0x0000363f) toolbar_button_pane_g10

0xb9cc,	// (0x0000b9cc) popup_toolbar_window_cp1

0x5f8d,	// (0x00005f8d) clock_nsta_pane_cp_t1

0x5f8d,	// (0x00005f8d) clock_nsta_pane_cp_t2

0x0001,

0xb021,	// (0x0000b021) clock_nsta_pane_cp_t

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2_ParamLimits

0x1e4d,	// (0x00001e4d) popup_side_volume_key_window_g1_ParamLimits

0x1e59,	// (0x00001e59) popup_side_volume_key_window_g2_ParamLimits

0x1e65,	// (0x00001e65) popup_side_volume_key_window_g3_ParamLimits

0xac6f,	// (0x0000ac6f) popup_side_volume_key_window_g_ParamLimits

0x65fb,	// (0x000065fb) fep_hwr_aid_pane

0x66a2,	// (0x000066a2) bg_fep_hwr_top_pane_g4_ParamLimits

0x66c2,	// (0x000066c2) fep_hwr_top_pane_g1_ParamLimits

0x66d4,	// (0x000066d4) fep_hwr_top_pane_g2_ParamLimits

0x66e6,	// (0x000066e6) fep_hwr_top_pane_g3_ParamLimits

0xb076,	// (0x0000b076) fep_hwr_top_pane_g_ParamLimits

0x66fb,	// (0x000066fb) fep_hwr_top_text_pane_ParamLimits

0x47f8,	// (0x000047f8) aid_touch_tab_arrow_arrow_2

0x4801,	// (0x00004801) aid_touch_tab_arrow_left_2

0x660f,	// (0x0000660f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6646,	// (0x00006646) fep_hwr_prediction_pane

0x696a,	// (0x0000696a) fep_vkb_prediction_pane

0xd8b2,	// (0x0000d8b2) fep_vkb_side_pane_g3_ParamLimits

0xd8b2,	// (0x0000d8b2) fep_vkb_side_pane_g3

0x6a13,	// (0x00006a13) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70ca,	// (0x000070ca) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70d7,	// (0x000070d7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb120,	// (0x0000b120) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d37,	// (0x00007d37) fep_hwr_prediction_pane_g1

0x7d41,	// (0x00007d41) fep_hwr_prediction_pane_g2

0x7d49,	// (0x00007d49) fep_hwr_prediction_pane_g3

0x7d51,	// (0x00007d51) fep_hwr_prediction_pane_g4

0x0003,

0xb223,	// (0x0000b223) fep_hwr_prediction_pane_g

0x7d37,	// (0x00007d37) fep_vkb_prediction_pane_g1

0x7d59,	// (0x00007d59) fep_vkb_prediction_pane_g2

0x7d61,	// (0x00007d61) fep_vkb_prediction_pane_g3

0x7d69,	// (0x00007d69) fep_vkb_prediction_pane_g4

0x0003,

0xb22c,	// (0x0000b22c) fep_vkb_prediction_pane_g

0x4d74,	// (0x00004d74) slider_set_pane_g3

0x4d88,	// (0x00004d88) slider_set_pane_g4

0x4da0,	// (0x00004da0) slider_set_pane_g5

0x4d74,	// (0x00004d74) slider_set_pane_g6

0x4db6,	// (0x00004db6) slider_set_pane_g7

0x4f62,	// (0x00004f62) slider_form_pane_g3

0x4f6b,	// (0x00004f6b) slider_form_pane_g4

0x4f73,	// (0x00004f73) slider_form_pane_g5

0x4f62,	// (0x00004f62) slider_form_pane_g6

0xd3e7,	// (0x0000d3e7) slider_form_pane_g7

0x57c1,	// (0x000057c1) slider_set_pane_vc_g3

0x57ca,	// (0x000057ca) slider_set_pane_vc_g4

0x57d3,	// (0x000057d3) slider_set_pane_vc_g5

0x57c1,	// (0x000057c1) slider_set_pane_vc_g6

0x57dc,	// (0x000057dc) slider_set_pane_vc_g7

0x5c63,	// (0x00005c63) slider_form_pane_vc_g1

0x5c6c,	// (0x00005c6c) slider_form_pane_vc_g2

0x5c75,	// (0x00005c75) slider_form_pane_vc_g3

0x5c63,	// (0x00005c63) slider_form_pane_vc_g4

0x5c7e,	// (0x00005c7e) slider_form_pane_vc_g5

0x0004,

0xaff3,	// (0x0000aff3) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d71,	// (0x00007d71) ai3_links_pane

0xdbb8,	// (0x0000dbb8) popup_ai3_data_window_ParamLimits

0xdbb8,	// (0x0000dbb8) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdbd0,	// (0x0000dbd0) cell_ai3_links_pane_ParamLimits

0xdbd0,	// (0x0000dbd0) cell_ai3_links_pane

0x7daa,	// (0x00007daa) bg_popup_sub_pane_cp11

0x7db7,	// (0x00007db7) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7ddc,	// (0x00007ddc) heading_ai3_data_pane

0x7de4,	// (0x00007de4) list_ai3_gene_pane

0x7df0,	// (0x00007df0) popup_ai3_data_window_g1

0x7df8,	// (0x00007df8) heading_ai3_data_pane_g1

0x7e00,	// (0x00007e00) heading_ai3_data_pane_t1

0x7e0e,	// (0x00007e0e) list_double_ai3_gene_pane_ParamLimits

0x7e0e,	// (0x00007e0e) list_double_ai3_gene_pane

0x7e1b,	// (0x00007e1b) list_single_ai3_gene_pane_ParamLimits

0x7e1b,	// (0x00007e1b) list_single_ai3_gene_pane

0x6556,	// (0x00006556) list_highlight_pane_cp7_ParamLimits

0x6556,	// (0x00006556) list_highlight_pane_cp7

0x7e28,	// (0x00007e28) list_single_a13_gene_pane_t1_ParamLimits

0x7e28,	// (0x00007e28) list_single_a13_gene_pane_t1

0x7e3f,	// (0x00007e3f) list_single_ai3_gene_pane_g1

0x7e48,	// (0x00007e48) list_single_ai3_gene_pane_g2

0x0001,

0xb235,	// (0x0000b235) list_single_ai3_gene_pane_g

0x7e50,	// (0x00007e50) list_double_ai3_gene_pane_g1_ParamLimits

0x7e50,	// (0x00007e50) list_double_ai3_gene_pane_g1

0x7e5c,	// (0x00007e5c) list_double_ai3_gene_pane_t1_ParamLimits

0x7e5c,	// (0x00007e5c) list_double_ai3_gene_pane_t1

0x7e78,	// (0x00007e78) list_double_ai3_gene_pane_t2_ParamLimits

0x7e78,	// (0x00007e78) list_double_ai3_gene_pane_t2

0x7e8d,	// (0x00007e8d) list_double_ai3_gene_pane_t3_ParamLimits

0x7e8d,	// (0x00007e8d) list_double_ai3_gene_pane_t3

0x0002,

0xb23a,	// (0x0000b23a) list_double_ai3_gene_pane_t_ParamLimits

0xb23a,	// (0x0000b23a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c3b,	// (0x00007c3b) aid_size_min_col_2

0xda9e,	// (0x0000da9e) aid_size_min_msg_ParamLimits

0xda9e,	// (0x0000da9e) aid_size_min_msg

0xd8c6,	// (0x0000d8c6) fep_vkb_top_text_pane_g2_ParamLimits

0xd8c6,	// (0x0000d8c6) fep_vkb_top_text_pane_g2

0x0001,

0xf3fd,	// (0x0000f3fd) fep_vkb_top_text_pane_g_ParamLimits

0xf3fd,	// (0x0000f3fd) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7eaa,	// (0x00007eaa) grid_hc_apps_pane_ParamLimits

0x7eaa,	// (0x00007eaa) grid_hc_apps_pane

0x7eb9,	// (0x00007eb9) list_hc_apps_pane

0x7ec1,	// (0x00007ec1) scroll_pane_cp37_ParamLimits

0x7ec1,	// (0x00007ec1) scroll_pane_cp37

0xdbea,	// (0x0000dbea) cell_hc_apps_pane_ParamLimits

0xdbea,	// (0x0000dbea) cell_hc_apps_pane

0xdca8,	// (0x0000dca8) cell_hc_apps_pane_g1_ParamLimits

0xdca8,	// (0x0000dca8) cell_hc_apps_pane_g1

0x7fac,	// (0x00007fac) cell_hc_apps_pane_g2_ParamLimits

0x7fac,	// (0x00007fac) cell_hc_apps_pane_g2

0x7fc8,	// (0x00007fc8) cell_hc_apps_pane_g3_ParamLimits

0x7fc8,	// (0x00007fc8) cell_hc_apps_pane_g3

0x0002,

0xf429,	// (0x0000f429) cell_hc_apps_pane_g_ParamLimits

0xf429,	// (0x0000f429) cell_hc_apps_pane_g

0xdcd5,	// (0x0000dcd5) cell_hc_apps_pane_t1_ParamLimits

0xdcd5,	// (0x0000dcd5) cell_hc_apps_pane_t1

0x082d,	// (0x0000082d) grid_highlight_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) grid_highlight_pane_cp10

0xdd13,	// (0x0000dd13) list_single_hc_apps_pane_ParamLimits

0xdd13,	// (0x0000dd13) list_single_hc_apps_pane

0xdd44,	// (0x0000dd44) list_single_hc_apps_pane_g1

0xdd5d,	// (0x0000dd5d) list_single_hc_apps_pane_g2

0x0001,

0xf430,	// (0x0000f430) list_single_hc_apps_pane_g

0xdd76,	// (0x0000dd76) list_single_hc_apps_pane_g2_copy1

0xdd92,	// (0x0000dd92) list_single_hc_apps_pane_t1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_ParamLimits

0x0543,	// (0x00000543) setting_slider_pane_t1_ParamLimits

0x055c,	// (0x0000055c) setting_slider_pane_t2_ParamLimits

0x0576,	// (0x00000576) setting_slider_pane_t3_ParamLimits

0xaac1,	// (0x0000aac1) setting_slider_pane_t_ParamLimits

0x058e,	// (0x0000058e) slider_set_pane_ParamLimits

0x2933,	// (0x00002933) control_pane_g5_ParamLimits

0x2933,	// (0x00002933) control_pane_g5

0x4d5b,	// (0x00004d5b) slider_set_pane_g1_ParamLimits

0x4d68,	// (0x00004d68) slider_set_pane_g2_ParamLimits

0x4d74,	// (0x00004d74) slider_set_pane_g3_ParamLimits

0x4d88,	// (0x00004d88) slider_set_pane_g4_ParamLimits

0x4da0,	// (0x00004da0) slider_set_pane_g5_ParamLimits

0x4d74,	// (0x00004d74) slider_set_pane_g6_ParamLimits

0x4db6,	// (0x00004db6) slider_set_pane_g7_ParamLimits

0xaeb6,	// (0x0000aeb6) slider_set_pane_g_ParamLimits

0x23ef,	// (0x000023ef) navi_icon_text_pane_ParamLimits

0xcaee,	// (0x0000caee) aid_fill_nsta_2_ParamLimits

0xcb25,	// (0x0000cb25) aid_touch_tab_arrow_left_ParamLimits

0xcb3b,	// (0x0000cb3b) aid_touch_tab_arrow_right_ParamLimits

0xcbd6,	// (0x0000cbd6) clock_nsta_pane_ParamLimits

0x47da,	// (0x000047da) navi_icon_pane_g1_ParamLimits

0x47e6,	// (0x000047e6) navi_text_pane_t1_ParamLimits

0x609f,	// (0x0000609f) navi_icon_text_pane_g1_ParamLimits

0x60ab,	// (0x000060ab) navi_icon_text_pane_t1_ParamLimits

0xdd44,	// (0x0000dd44) list_single_hc_apps_pane_g1_ParamLimits

0xdd5d,	// (0x0000dd5d) list_single_hc_apps_pane_g2_ParamLimits

0xf430,	// (0x0000f430) list_single_hc_apps_pane_g_ParamLimits

0xdd76,	// (0x0000dd76) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdd92,	// (0x0000dd92) list_single_hc_apps_pane_t1_ParamLimits

0xb5c7,	// (0x0000b5c7) popup_toolbar2_fixed_window_ParamLimits

0xb5c7,	// (0x0000b5c7) popup_toolbar2_fixed_window

0xca53,	// (0x0000ca53) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x810e,	// (0x0000810e) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x810e,	// (0x0000810e) grid_toolbar2_fixed_pane

0xddc0,	// (0x0000ddc0) cell_toolbar2_fixed_pane_ParamLimits

0xddc0,	// (0x0000ddc0) cell_toolbar2_fixed_pane

0xdddb,	// (0x0000dddb) cell_toolbar2_fixed_pane_g1

0x3531,	// (0x00003531) toolbar2_fixed_button_pane

0x35f7,	// (0x000035f7) toolbar2_fixed_button_pane_g1

0x35ff,	// (0x000035ff) toolbar2_fixed_button_pane_g2

0x3607,	// (0x00003607) toolbar2_fixed_button_pane_g3

0x360f,	// (0x0000360f) toolbar2_fixed_button_pane_g4

0x3617,	// (0x00003617) toolbar2_fixed_button_pane_g5

0x361f,	// (0x0000361f) toolbar2_fixed_button_pane_g6

0x3627,	// (0x00003627) toolbar2_fixed_button_pane_g7

0x362f,	// (0x0000362f) toolbar2_fixed_button_pane_g8

0x3637,	// (0x00003637) toolbar2_fixed_button_pane_g9

0x0008,

0xadb8,	// (0x0000adb8) toolbar2_fixed_button_pane_g

0x8130,	// (0x00008130) cell_toolbar2_float_pane_ParamLimits

0x8130,	// (0x00008130) cell_toolbar2_float_pane

0x8144,	// (0x00008144) cell_toolbar2_float_pane_g1

0x3531,	// (0x00003531) toolbar2_fixed_button_pane_cp

0xd7ae,	// (0x0000d7ae) fep_vkb_accented_list_pane_ParamLimits

0xd7ae,	// (0x0000d7ae) fep_vkb_accented_list_pane

0x6d5a,	// (0x00006d5a) bg_popup_fep_shadow_pane_g9

0x2563,	// (0x00002563) bg_popup_fep_shadow_pane_cp3

0x15fe,	// (0x000015fe) list_accented_list_pane

0x814d,	// (0x0000814d) list_single_accented_list_pane_ParamLimits

0x814d,	// (0x0000814d) list_single_accented_list_pane

0x2563,	// (0x00002563) list_highlight_pane_cp10

0x815e,	// (0x0000815e) list_single_accented_list_pane_t1

0xc97d,	// (0x0000c97d) popup_slider_window_ParamLimits

0xc97d,	// (0x0000c97d) popup_slider_window

0x7c32,	// (0x00007c32) aid_indentation_list_msg

0xded4,	// (0x0000ded4) bg_popup_window_pane_cp19

0x8282,	// (0x00008282) popup_slider_window_g1

0x829e,	// (0x0000829e) popup_slider_window_g2

0x82ba,	// (0x000082ba) popup_slider_window_g3

0x0005,

0xf435,	// (0x0000f435) popup_slider_window_g

0x8316,	// (0x00008316) popup_slider_window_t1

0x838a,	// (0x0000838a) small_volume_slider_vertical_pane

0x6591,	// (0x00006591) small_volume_slider_vertical_pane_g1

0x6591,	// (0x00006591) small_volume_slider_vertical_pane_g2

0x83a6,	// (0x000083a6) small_volume_slider_vertical_pane_g3

0x0002,

0xb25f,	// (0x0000b25f) small_volume_slider_vertical_pane_g

0xb535,	// (0x0000b535) area_side_right_pane_ParamLimits

0xb535,	// (0x0000b535) area_side_right_pane

0xdf8c,	// (0x0000df8c) aid_size_side_button_ParamLimits

0xdf8c,	// (0x0000df8c) aid_size_side_button

0xdfa5,	// (0x0000dfa5) grid_sctrl_middle_pane_ParamLimits

0xdfa5,	// (0x0000dfa5) grid_sctrl_middle_pane

0x83e2,	// (0x000083e2) sctrl_sk_bottom_pane

0x83f3,	// (0x000083f3) sctrl_sk_top_pane

0x8405,	// (0x00008405) aid_touch_sctrl_top

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane

0x8412,	// (0x00008412) sctrl_sk_top_pane_g1

0x841f,	// (0x0000841f) sctrl_sk_top_pane_t1

0x8405,	// (0x00008405) aid_touch_sctrl_bottom

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp

0x843a,	// (0x0000843a) sctrl_sk_bottom_pane_g1

0x841f,	// (0x0000841f) sctrl_sk_bottom_pane_t1

0xdfbf,	// (0x0000dfbf) cell_sctrl_middle_pane_ParamLimits

0xdfbf,	// (0x0000dfbf) cell_sctrl_middle_pane

0xdfd0,	// (0x0000dfd0) aid_touch_sctrl_middle_ParamLimits

0xdfd0,	// (0x0000dfd0) aid_touch_sctrl_middle

0xdfdd,	// (0x0000dfdd) bg_sctrl_middle_pane_ParamLimits

0xdfdd,	// (0x0000dfdd) bg_sctrl_middle_pane

0x84ff,	// (0x000084ff) cell_sctrl_middle_pane_g1_ParamLimits

0x84ff,	// (0x000084ff) cell_sctrl_middle_pane_g1

0xdfeb,	// (0x0000dfeb) cell_sctrl_middle_pane_g2_ParamLimits

0xdfeb,	// (0x0000dfeb) cell_sctrl_middle_pane_g2

0x0001,

0xf442,	// (0x0000f442) cell_sctrl_middle_pane_g_ParamLimits

0xf442,	// (0x0000f442) cell_sctrl_middle_pane_g

0x35f7,	// (0x000035f7) bg_sctrl_middle_pane_g1

0x35ff,	// (0x000035ff) bg_sctrl_middle_pane_g2

0x3607,	// (0x00003607) bg_sctrl_middle_pane_g3

0x360f,	// (0x0000360f) bg_sctrl_middle_pane_g4

0x3617,	// (0x00003617) bg_sctrl_middle_pane_g5

0x361f,	// (0x0000361f) bg_sctrl_middle_pane_g6

0x3627,	// (0x00003627) bg_sctrl_middle_pane_g7

0x362f,	// (0x0000362f) bg_sctrl_middle_pane_g8

0x0007,

0xb270,	// (0x0000b270) bg_sctrl_middle_pane_g

0x3637,	// (0x00003637) bg_sctrl_middle_pane_g8_copy1

0x35f7,	// (0x000035f7) bg_sctrl_sk_pane_g1

0x35ff,	// (0x000035ff) bg_sctrl_sk_pane_g2

0x3607,	// (0x00003607) bg_sctrl_sk_pane_g3

0x0008,

0xadb8,	// (0x0000adb8) bg_sctrl_sk_pane_g

0x0d2d,	// (0x00000d2d) aid_size_touch_scroll_bar

0x360f,	// (0x0000360f) bg_sctrl_sk_pane_g4

0x3617,	// (0x00003617) bg_sctrl_sk_pane_g5

0x361f,	// (0x0000361f) bg_sctrl_sk_pane_g6

0x3627,	// (0x00003627) bg_sctrl_sk_pane_g7

0x362f,	// (0x0000362f) bg_sctrl_sk_pane_g8

0x3637,	// (0x00003637) bg_sctrl_sk_pane_g9

0x2b7e,	// (0x00002b7e) popup_fep_china_hwr2_fs_candidate_window

0xc4ab,	// (0x0000c4ab) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc4ab,	// (0x0000c4ab) popup_fep_china_hwr2_fs_control_window

0x6a13,	// (0x00006a13) sctrl_sk_top_pane_g2

0x0001,

0xb266,	// (0x0000b266) sctrl_sk_top_pane_g

0xdff7,	// (0x0000dff7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdff7,	// (0x0000dff7) aid_fep_china_hwr2_fs_cell

0xe00b,	// (0x0000e00b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe00b,	// (0x0000e00b) bg_popup_fep_shadow_pane_cp4

0xe022,	// (0x0000e022) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe022,	// (0x0000e022) bg_popup_fep_shadow_pane_cp5

0xe034,	// (0x0000e034) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe034,	// (0x0000e034) popup_fep_china_hwr2_fs_control_bar_grid

0xe048,	// (0x0000e048) popup_fep_china_hwr2_fs_control_funtion_grid

0x84d3,	// (0x000084d3) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84dd,	// (0x000084dd) popup_fep_china_hwr2_fs_candidate_grid

0xe050,	// (0x0000e050) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe050,	// (0x0000e050) cell_fep_china_hwr2_fs_funtion_grid

0x6591,	// (0x00006591) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x84ff,	// (0x000084ff) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x84ff,	// (0x000084ff) cell_fep_china_hwr2_fs_funtion_grid_g1

0x850d,	// (0x0000850d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x850d,	// (0x0000850d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb281,	// (0x0000b281) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb281,	// (0x0000b281) cell_fep_china_hwr2_fs_funtion_grid_g

0xe068,	// (0x0000e068) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe068,	// (0x0000e068) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe07d,	// (0x0000e07d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe07d,	// (0x0000e07d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf447,	// (0x0000f447) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf447,	// (0x0000f447) cell_fep_china_hwr2_fs_funtion_grid_t

0x8554,	// (0x00008554) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x855c,	// (0x0000855c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8564,	// (0x00008564) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb28b,	// (0x0000b28b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x856c,	// (0x0000856c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x856c,	// (0x0000856c) cell_fep_china_hwr2_fs_candidate_grid

0x8585,	// (0x00008585) popup_fep_china_hwr2_fs_candidate_grid_g20

0x858d,	// (0x0000858d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6591,	// (0x00006591) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6591,	// (0x00006591) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb0ab,	// (0x0000b0ab) cell_fep_china_hwr2_fs_candidate_grid_g

0x8595,	// (0x00008595) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3169,	// (0x00003169) clock_nsta_pane_cp_24_ParamLimits

0x3169,	// (0x00003169) clock_nsta_pane_cp_24

0x31e7,	// (0x000031e7) indicator_nsta_pane_cp_24_ParamLimits

0x31e7,	// (0x000031e7) indicator_nsta_pane_cp_24

0x4645,	// (0x00004645) heading_pane_g1

0x0001,

0xae1d,	// (0x0000ae1d) heading_pane_g

0x524a,	// (0x0000524a) grid_sct_catagory_button_pane

0x527a,	// (0x0000527a) scroll_pane_cp5_ParamLimits

0x611a,	// (0x0000611a) button_value_adjust_pane_cp5_ParamLimits

0x611a,	// (0x0000611a) button_value_adjust_pane_cp5

0x6214,	// (0x00006214) form2_midp_time_pane_ParamLimits

0x85a3,	// (0x000085a3) cell_sct_catagory_button_pane_ParamLimits

0x85a3,	// (0x000085a3) cell_sct_catagory_button_pane

0x6556,	// (0x00006556) bg_button_pane_cp01_ParamLimits

0x6556,	// (0x00006556) bg_button_pane_cp01

0x6591,	// (0x00006591) cell_sct_catagory_button_pane_g1

0xc9f6,	// (0x0000c9f6) popup_tb_extension_window

0xe099,	// (0x0000e099) aid_size_cell_ext_ParamLimits

0xe099,	// (0x0000e099) aid_size_cell_ext

0x0b6f,	// (0x00000b6f) bg_tb_trans_pane_cp1_ParamLimits

0x0b6f,	// (0x00000b6f) bg_tb_trans_pane_cp1

0xe0bf,	// (0x0000e0bf) grid_tb_ext_pane_ParamLimits

0xe0bf,	// (0x0000e0bf) grid_tb_ext_pane

0xe101,	// (0x0000e101) cell_tb_ext_pane_ParamLimits

0xe101,	// (0x0000e101) cell_tb_ext_pane

0xe129,	// (0x0000e129) cell_tb_ext_pane_g1_ParamLimits

0xe129,	// (0x0000e129) cell_tb_ext_pane_g1

0x863b,	// (0x0000863b) cell_tb_ext_pane_t1

0x082d,	// (0x0000082d) list_highlight_pane_cp11_ParamLimits

0x082d,	// (0x0000082d) list_highlight_pane_cp11

0xb5dc,	// (0x0000b5dc) popup_uni_indicator_window_ParamLimits

0xb5dc,	// (0x0000b5dc) popup_uni_indicator_window

0x1349,	// (0x00001349) bg_popup_sub_pane_cp14

0x8656,	// (0x00008656) list_uniindi_pane

0x8662,	// (0x00008662) uniindi_top_pane

0x082d,	// (0x0000082d) bg_uniindi_top_pane

0x8681,	// (0x00008681) uniindi_top_pane_g1

0x8697,	// (0x00008697) uniindi_top_pane_g2

0x0003,

0xb292,	// (0x0000b292) uniindi_top_pane_g

0x86c1,	// (0x000086c1) uniindi_top_pane_t1

0x86eb,	// (0x000086eb) list_single_uniindi_pane_ParamLimits

0x86eb,	// (0x000086eb) list_single_uniindi_pane

0x6591,	// (0x00006591) bg_uniindi_top_pane_g1

0x86fe,	// (0x000086fe) list_single_uniindi_pane_g1

0x8711,	// (0x00008711) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8736,	// (0x00008736) bg_sctrl_sk_pane_cp1

0x873f,	// (0x0000873f) bg_sctrl_sk_pane_cp2

0x8748,	// (0x00008748) control_bg_pane_g1

0x8751,	// (0x00008751) control_bg_pane_g2

0x0001,

0xb29b,	// (0x0000b29b) control_bg_pane_g

0x5f31,	// (0x00005f31) cell_indicator_nsta_pane_g1_ParamLimits

0xd5d8,	// (0x0000d5d8) cell_indicator_nsta_pane_g2_ParamLimits

0xf3c8,	// (0x0000f3c8) cell_indicator_nsta_pane_g_ParamLimits

0x6298,	// (0x00006298) form2_midp_time_pane_t1_ParamLimits

0x65ed,	// (0x000065ed) main_idle_act4_pane_ParamLimits

0x65ed,	// (0x000065ed) main_idle_act4_pane

0xc9f6,	// (0x0000c9f6) popup_tb_extension_window_ParamLimits

0xe0e7,	// (0x0000e0e7) tb_ext_find_pane_ParamLimits

0xe0e7,	// (0x0000e0e7) tb_ext_find_pane

0x875a,	// (0x0000875a) ai_gene_pane_1_cp1

0x26a2,	// (0x000026a2) ai_gene_pane_2_cp1

0x8762,	// (0x00008762) list_single_idle_plugin_calendar_pane

0x876b,	// (0x0000876b) list_single_idle_plugin_notification_pane

0x8774,	// (0x00008774) list_single_idle_plugin_player_pane

0xe146,	// (0x0000e146) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe146,	// (0x0000e146) list_single_idle_plugin_shortcut_pane

0xe16e,	// (0x0000e16e) main_idle_act4_pane_t1

0xe184,	// (0x0000e184) main_idle_act4_pane_t2

0x0001,

0xf44c,	// (0x0000f44c) main_idle_act4_pane_t

0xe19c,	// (0x0000e19c) middle_sk_idle_act4_pane_ParamLimits

0xe19c,	// (0x0000e19c) middle_sk_idle_act4_pane

0xe1b8,	// (0x0000e1b8) popup_clock_digital_analogue_window_cp2

0xe1df,	// (0x0000e1df) shortcut_wheel_idle_act4_pane_ParamLimits

0xe1df,	// (0x0000e1df) shortcut_wheel_idle_act4_pane

0x6591,	// (0x00006591) shortcut_wheel_idle_act4_pane_g1

0x6591,	// (0x00006591) shortcut_wheel_idle_act4_pane_g2

0x6591,	// (0x00006591) shortcut_wheel_idle_act4_pane_g3

0x6591,	// (0x00006591) shortcut_wheel_idle_act4_pane_g4

0x6591,	// (0x00006591) shortcut_wheel_idle_act4_pane_g5

0x8807,	// (0x00008807) shortcut_wheel_idle_act4_pane_g6

0x880f,	// (0x0000880f) shortcut_wheel_idle_act4_pane_g7

0x8817,	// (0x00008817) shortcut_wheel_idle_act4_pane_g8

0x881f,	// (0x0000881f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb2a5,	// (0x0000b2a5) shortcut_wheel_idle_act4_pane_g

0x66a2,	// (0x000066a2) middle_sk_idle_act4_pane_g1_ParamLimits

0x66a2,	// (0x000066a2) middle_sk_idle_act4_pane_g1

0xe25c,	// (0x0000e25c) middle_sk_idle_act4_pane_g2_ParamLimits

0xe25c,	// (0x0000e25c) middle_sk_idle_act4_pane_g2

0x0001,

0xf461,	// (0x0000f461) middle_sk_idle_act4_pane_g_ParamLimits

0xf461,	// (0x0000f461) middle_sk_idle_act4_pane_g

0xe274,	// (0x0000e274) middle_sk_idle_act4_pane_t1_ParamLimits

0xe274,	// (0x0000e274) middle_sk_idle_act4_pane_t1

0xe2a3,	// (0x0000e2a3) grid_ai_shortcut_pane_ParamLimits

0xe2a3,	// (0x0000e2a3) grid_ai_shortcut_pane

0xe2c0,	// (0x0000e2c0) list_highlight_pane_cp16_ParamLimits

0xe2c0,	// (0x0000e2c0) list_highlight_pane_cp16

0xe2cd,	// (0x0000e2cd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe2cd,	// (0x0000e2cd) list_single_idle_plugin_shortcut_pane_g1

0xe2d9,	// (0x0000e2d9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe2d9,	// (0x0000e2d9) list_single_idle_plugin_shortcut_pane_g2

0xe2f5,	// (0x0000e2f5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe2f5,	// (0x0000e2f5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf466,	// (0x0000f466) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf466,	// (0x0000f466) list_single_idle_plugin_shortcut_pane_g

0xe30a,	// (0x0000e30a) cell_ai_shortcut_pane_ParamLimits

0xe30a,	// (0x0000e30a) cell_ai_shortcut_pane

0xe320,	// (0x0000e320) cell_ai_shortcut_pane_g1_ParamLimits

0xe320,	// (0x0000e320) cell_ai_shortcut_pane_g1

0x875a,	// (0x0000875a) ai_gene_pane_1_cp2

0x894c,	// (0x0000894c) ai_gene_pane_2_cp2

0x8954,	// (0x00008954) list_highlight_pane_cp15

0x895d,	// (0x0000895d) list_single_idle_plugin_calendar_pane_g1

0x8954,	// (0x00008954) list_highlight_pane_cp17

0x8965,	// (0x00008965) list_single_idle_plugin_calendar_pane_g1_copy1

0x896d,	// (0x0000896d) list_single_idle_plugin_player_pane_g1

0x5559,	// (0x00005559) list_single_idle_plugin_player_pane_g2

0x0001,

0xb2d4,	// (0x0000b2d4) list_single_idle_plugin_player_pane_g

0x8975,	// (0x00008975) list_single_idle_plugin_player_pane_t1

0x8983,	// (0x00008983) list_single_idle_plugin_player_pane_t2

0x8991,	// (0x00008991) list_single_idle_plugin_player_pane_t3

0x899f,	// (0x0000899f) list_single_idle_plugin_player_pane_t4

0x0003,

0xb2d9,	// (0x0000b2d9) list_single_idle_plugin_player_pane_t

0x89ad,	// (0x000089ad) wait_bar_pane_cp15

0x89b5,	// (0x000089b5) grid_ai_notification_pane

0x5559,	// (0x00005559) list_single_idle_plugin_notification_pane_g1

0xe342,	// (0x0000e342) cell_ai_notification_pane_ParamLimits

0xe342,	// (0x0000e342) cell_ai_notification_pane

0x89cb,	// (0x000089cb) cell_ai_notification_pane_g1

0x89d3,	// (0x000089d3) cell_ai_notification_pane_t1

0xe34f,	// (0x0000e34f) tb_ext_find_button_pane

0xe357,	// (0x0000e357) tb_ext_find_pane_g1

0xe35f,	// (0x0000e35f) tb_ext_find_pane_t1

0x1cc5,	// (0x00001cc5) tb_ext_find_button_pane_g1

0x89ff,	// (0x000089ff) tb_ext_find_button_pane_g2

0x0001,

0xb2e2,	// (0x0000b2e2) tb_ext_find_button_pane_g

0xe16e,	// (0x0000e16e) main_idle_act4_pane_t1_ParamLimits

0xe184,	// (0x0000e184) main_idle_act4_pane_t2_ParamLimits

0xf44c,	// (0x0000f44c) main_idle_act4_pane_t_ParamLimits

0xe1b8,	// (0x0000e1b8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe1cf,	// (0x0000e1cf) sat_plugin_idle_act4_pane_ParamLimits

0xe1cf,	// (0x0000e1cf) sat_plugin_idle_act4_pane

0xe36d,	// (0x0000e36d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe36d,	// (0x0000e36d) sat_plugin_idle_act4_pane_t1

0xe385,	// (0x0000e385) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe385,	// (0x0000e385) sat_plugin_idle_act4_pane_t2

0xe39d,	// (0x0000e39d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe39d,	// (0x0000e39d) sat_plugin_idle_act4_pane_t3

0xe3b5,	// (0x0000e3b5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe3b5,	// (0x0000e3b5) sat_plugin_idle_act4_pane_t4

0x0003,

0xf46d,	// (0x0000f46d) sat_plugin_idle_act4_pane_t_ParamLimits

0xf46d,	// (0x0000f46d) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25

0x8a54,	// (0x00008a54) popup_battery_window_g1_ParamLimits

0x8a54,	// (0x00008a54) popup_battery_window_g1

0x8a60,	// (0x00008a60) popup_battery_window_t1_ParamLimits

0x8a60,	// (0x00008a60) popup_battery_window_t1

0x8a72,	// (0x00008a72) popup_battery_window_t2_ParamLimits

0x8a72,	// (0x00008a72) popup_battery_window_t2

0x0001,

0xb2f0,	// (0x0000b2f0) popup_battery_window_t_ParamLimits

0xb2f0,	// (0x0000b2f0) popup_battery_window_t

0xc140,	// (0x0000c140) midp_canvas_pane_ParamLimits

0xc19f,	// (0x0000c19f) midp_keypad_pane_ParamLimits

0xc19f,	// (0x0000c19f) midp_keypad_pane

0x2ad4,	// (0x00002ad4) main_midp_pane_ParamLimits

0x5fab,	// (0x00005fab) signal_pane_g2_cp_ParamLimits

0xe3cd,	// (0x0000e3cd) aid_size_cell_midp_keypad_ParamLimits

0xe3cd,	// (0x0000e3cd) aid_size_cell_midp_keypad

0xe3eb,	// (0x0000e3eb) midp_keyp_game_grid_pane_ParamLimits

0xe3eb,	// (0x0000e3eb) midp_keyp_game_grid_pane

0xe412,	// (0x0000e412) midp_keyp_rocker_pane_ParamLimits

0xe412,	// (0x0000e412) midp_keyp_rocker_pane

0xe463,	// (0x0000e463) midp_keyp_sk_left_pane_ParamLimits

0xe463,	// (0x0000e463) midp_keyp_sk_left_pane

0xe4b7,	// (0x0000e4b7) midp_keyp_sk_right_pane_ParamLimits

0xe4b7,	// (0x0000e4b7) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe50b,	// (0x0000e50b) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe50b,	// (0x0000e50b) midp_keyp_sk_right_pane_g1

0x6591,	// (0x00006591) midp_keyp_rocker_pane_g1

0xe514,	// (0x0000e514) keyp_game_cell_pane_ParamLimits

0xe514,	// (0x0000e514) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe538,	// (0x0000e538) keyp_game_cell_pane_g1

0xb577,	// (0x0000b577) popup_fep_vkb2_window_ParamLimits

0xb577,	// (0x0000b577) popup_fep_vkb2_window

0xe541,	// (0x0000e541) aid_size_cell_vkb2_ParamLimits

0xe541,	// (0x0000e541) aid_size_cell_vkb2

0xe577,	// (0x0000e577) popup_fep_vkb2_window_g1_ParamLimits

0xe577,	// (0x0000e577) popup_fep_vkb2_window_g1

0xe5c7,	// (0x0000e5c7) vkb2_area_bottom_pane_ParamLimits

0xe5c7,	// (0x0000e5c7) vkb2_area_bottom_pane

0xe61b,	// (0x0000e61b) vkb2_area_keypad_pane_ParamLimits

0xe61b,	// (0x0000e61b) vkb2_area_keypad_pane

0xe663,	// (0x0000e663) vkb2_area_top_pane_ParamLimits

0xe663,	// (0x0000e663) vkb2_area_top_pane

0xe6e9,	// (0x0000e6e9) vkb2_top_entry_pane_ParamLimits

0xe6e9,	// (0x0000e6e9) vkb2_top_entry_pane

0xe716,	// (0x0000e716) vkb2_top_grid_left_pane_ParamLimits

0xe716,	// (0x0000e716) vkb2_top_grid_left_pane

0xe736,	// (0x0000e736) vkb2_top_grid_right_pane_ParamLimits

0xe736,	// (0x0000e736) vkb2_top_grid_right_pane

0x8df3,	// (0x00008df3) vkb2_cell_keypad_pane_ParamLimits

0x8df3,	// (0x00008df3) vkb2_cell_keypad_pane

0xe77c,	// (0x0000e77c) vkb2_area_bottom_grid_pane_ParamLimits

0xe77c,	// (0x0000e77c) vkb2_area_bottom_grid_pane

0xe7a6,	// (0x0000e7a6) vkb2_area_bottom_pane_g1_ParamLimits

0xe7a6,	// (0x0000e7a6) vkb2_area_bottom_pane_g1

0xe7cc,	// (0x0000e7cc) vkb2_area_bottom_pane_g2_ParamLimits

0xe7cc,	// (0x0000e7cc) vkb2_area_bottom_pane_g2

0xe7fd,	// (0x0000e7fd) vkb2_area_bottom_pane_g3_ParamLimits

0xe7fd,	// (0x0000e7fd) vkb2_area_bottom_pane_g3

0x0002,

0xf476,	// (0x0000f476) vkb2_area_bottom_pane_g_ParamLimits

0xf476,	// (0x0000f476) vkb2_area_bottom_pane_g

0x8f9d,	// (0x00008f9d) vkb2_top_cell_left_pane_ParamLimits

0x8f9d,	// (0x00008f9d) vkb2_top_cell_left_pane

0xe867,	// (0x0000e867) vkb2_top_entry_pane_g1_ParamLimits

0xe867,	// (0x0000e867) vkb2_top_entry_pane_g1

0xe875,	// (0x0000e875) vkb2_top_entry_pane_t1_ParamLimits

0xe875,	// (0x0000e875) vkb2_top_entry_pane_t1

0x9005,	// (0x00009005) vkb2_top_entry_pane_t2_ParamLimits

0x9005,	// (0x00009005) vkb2_top_entry_pane_t2

0x9037,	// (0x00009037) vkb2_top_entry_pane_t3_ParamLimits

0x9037,	// (0x00009037) vkb2_top_entry_pane_t3

0x0002,

0xf47d,	// (0x0000f47d) vkb2_top_entry_pane_t_ParamLimits

0xf47d,	// (0x0000f47d) vkb2_top_entry_pane_t

0xe8ae,	// (0x0000e8ae) vkb2_top_grid_right_pane_g1_ParamLimits

0xe8ae,	// (0x0000e8ae) vkb2_top_grid_right_pane_g1

0x909e,	// (0x0000909e) vkb2_top_grid_right_pane_g2_ParamLimits

0x909e,	// (0x0000909e) vkb2_top_grid_right_pane_g2

0x90b6,	// (0x000090b6) vkb2_top_grid_right_pane_g3_ParamLimits

0x90b6,	// (0x000090b6) vkb2_top_grid_right_pane_g3

0xe8c4,	// (0x0000e8c4) vkb2_top_grid_right_pane_g4_ParamLimits

0xe8c4,	// (0x0000e8c4) vkb2_top_grid_right_pane_g4

0x0003,

0xf484,	// (0x0000f484) vkb2_top_grid_right_pane_g_ParamLimits

0xf484,	// (0x0000f484) vkb2_top_grid_right_pane_g

0x90e4,	// (0x000090e4) vkb2_top_cell_left_pane_g1

0x90fb,	// (0x000090fb) vkb2_cell_keypad_pane_g1_ParamLimits

0x90fb,	// (0x000090fb) vkb2_cell_keypad_pane_g1

0x9109,	// (0x00009109) vkb2_cell_keypad_pane_t1_ParamLimits

0x9109,	// (0x00009109) vkb2_cell_keypad_pane_t1

0x9120,	// (0x00009120) vkb2_cell_bottom_grid_pane_ParamLimits

0x9120,	// (0x00009120) vkb2_cell_bottom_grid_pane

0x9159,	// (0x00009159) vkb2_cell_bottom_grid_pane_g1

0xe200,	// (0x0000e200) aid_call2_pane_cp02

0xe208,	// (0x0000e208) aid_call_pane_cp02

0xe210,	// (0x0000e210) clock_digital_number_pane_cp10

0xe218,	// (0x0000e218) clock_digital_number_pane_cp11

0xe220,	// (0x0000e220) clock_digital_number_pane_cp12

0xe228,	// (0x0000e228) clock_digital_number_pane_cp13

0xe230,	// (0x0000e230) clock_digital_separator_pane_cp10

0x1cc5,	// (0x00001cc5) popup_clock_digital_analogue_window_cp2_g1

0x1cc5,	// (0x00001cc5) popup_clock_digital_analogue_window_cp2_g2

0xe238,	// (0x0000e238) popup_clock_digital_analogue_window_cp2_g3

0x1cc5,	// (0x00001cc5) popup_clock_digital_analogue_window_cp2_g4

0xe238,	// (0x0000e238) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf451,	// (0x0000f451) popup_clock_digital_analogue_window_cp2_g

0xe240,	// (0x0000e240) popup_clock_digital_analogue_window_cp2_t1

0xe24e,	// (0x0000e24e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf45c,	// (0x0000f45c) popup_clock_digital_analogue_window_cp2_t

0x6591,	// (0x00006591) clock_digital_number_pane_cp10_g1

0x6591,	// (0x00006591) clock_digital_number_pane_cp10_g2

0x0001,

0xb0ab,	// (0x0000b0ab) clock_digital_number_pane_cp10_g

0x6591,	// (0x00006591) clock_digital_separator_pane_cp10_g1

0x6591,	// (0x00006591) clock_digital_separator_pane_cp10_g2

0x0001,

0xb0ab,	// (0x0000b0ab) clock_digital_separator_pane_cp10_g

0x86a3,	// (0x000086a3) uniindi_top_pane_g3

0x86b4,	// (0x000086b4) uniindi_top_pane_g4

0x8e7e,	// (0x00008e7e) vkb2_row_keypad_pane_ParamLimits

0x8e7e,	// (0x00008e7e) vkb2_row_keypad_pane

0x9179,	// (0x00009179) vkb2_cell_t_keypad_pane_ParamLimits

0x9179,	// (0x00009179) vkb2_cell_t_keypad_pane

0x9189,	// (0x00009189) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9189,	// (0x00009189) vkb2_cell_t_keypad_pane_cp08

0x919c,	// (0x0000919c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x919c,	// (0x0000919c) vkb2_cell_t_keypad_pane_cp09

0x91b0,	// (0x000091b0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91b0,	// (0x000091b0) vkb2_cell_t_keypad_pane_cp01

0x91c1,	// (0x000091c1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91c1,	// (0x000091c1) vkb2_cell_t_keypad_pane_cp02

0x91d2,	// (0x000091d2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91d2,	// (0x000091d2) vkb2_cell_t_keypad_pane_cp03

0x91e3,	// (0x000091e3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91e3,	// (0x000091e3) vkb2_cell_t_keypad_pane_cp04

0x91f4,	// (0x000091f4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91f4,	// (0x000091f4) vkb2_cell_t_keypad_pane_cp05

0x9205,	// (0x00009205) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9205,	// (0x00009205) vkb2_cell_t_keypad_pane_cp06

0x9216,	// (0x00009216) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9216,	// (0x00009216) vkb2_cell_t_keypad_pane_cp07

0x9227,	// (0x00009227) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9227,	// (0x00009227) vkb2_cell_t_keypad_pane_cp10

0x6a13,	// (0x00006a13) vkb2_cell_t_keypad_pane_g1

0x923c,	// (0x0000923c) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe8da,	// (0x0000e8da) aid_size_cell_graphic2_ParamLimits

0xe8da,	// (0x0000e8da) aid_size_cell_graphic2

0xe918,	// (0x0000e918) bg_popup_window_pane_cp21_ParamLimits

0xe918,	// (0x0000e918) bg_popup_window_pane_cp21

0xe926,	// (0x0000e926) graphic2_pages_pane_ParamLimits

0xe926,	// (0x0000e926) graphic2_pages_pane

0xe97c,	// (0x0000e97c) grid_graphic2_control_pane_ParamLimits

0xe97c,	// (0x0000e97c) grid_graphic2_control_pane

0xe9c4,	// (0x0000e9c4) grid_graphic2_pane_ParamLimits

0xe9c4,	// (0x0000e9c4) grid_graphic2_pane

0xea4b,	// (0x0000ea4b) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7de4,	// (0x00007de4) list_ai3_gene_pane_ParamLimits

0xded4,	// (0x0000ded4) bg_popup_window_pane_cp19_ParamLimits

0x8224,	// (0x00008224) bg_touch_area_indi_pane_ParamLimits

0x8224,	// (0x00008224) bg_touch_area_indi_pane

0x823a,	// (0x0000823a) bg_touch_area_indi_pane_cp01_ParamLimits

0x823a,	// (0x0000823a) bg_touch_area_indi_pane_cp01

0x8250,	// (0x00008250) bg_touch_area_indi_pane_cp02_ParamLimits

0x8250,	// (0x00008250) bg_touch_area_indi_pane_cp02

0x8268,	// (0x00008268) bg_touch_area_indi_pane_cp03_ParamLimits

0x8268,	// (0x00008268) bg_touch_area_indi_pane_cp03

0x8282,	// (0x00008282) popup_slider_window_g1_ParamLimits

0x829e,	// (0x0000829e) popup_slider_window_g2_ParamLimits

0x82ba,	// (0x000082ba) popup_slider_window_g3_ParamLimits

0xf435,	// (0x0000f435) popup_slider_window_g_ParamLimits

0x8316,	// (0x00008316) popup_slider_window_t1_ParamLimits

0x838a,	// (0x0000838a) small_volume_slider_vertical_pane_ParamLimits

0xea4b,	// (0x0000ea4b) cell_graphic2_pane_ParamLimits

0xeaa8,	// (0x0000eaa8) bg_button_pane_cp10_ParamLimits

0xeaa8,	// (0x0000eaa8) bg_button_pane_cp10

0xeabb,	// (0x0000eabb) bg_button_pane_cp11_ParamLimits

0xeabb,	// (0x0000eabb) bg_button_pane_cp11

0xeace,	// (0x0000eace) graphic2_pages_pane_g1_ParamLimits

0xeace,	// (0x0000eace) graphic2_pages_pane_g1

0xeae9,	// (0x0000eae9) graphic2_pages_pane_g2_ParamLimits

0xeae9,	// (0x0000eae9) graphic2_pages_pane_g2

0x0001,

0xf492,	// (0x0000f492) graphic2_pages_pane_g_ParamLimits

0xf492,	// (0x0000f492) graphic2_pages_pane_g

0xeb01,	// (0x0000eb01) graphic2_pages_pane_t1_ParamLimits

0xeb01,	// (0x0000eb01) graphic2_pages_pane_t1

0xeb19,	// (0x0000eb19) cell_graphic2_control_pane_ParamLimits

0xeb19,	// (0x0000eb19) cell_graphic2_control_pane

0xeb4b,	// (0x0000eb4b) cell_graphic2_pane_g1_ParamLimits

0xeb4b,	// (0x0000eb4b) cell_graphic2_pane_g1

0x683d,	// (0x0000683d) cell_graphic2_pane_g2_ParamLimits

0x683d,	// (0x0000683d) cell_graphic2_pane_g2

0xeb58,	// (0x0000eb58) cell_graphic2_pane_g3_ParamLimits

0xeb58,	// (0x0000eb58) cell_graphic2_pane_g3

0x684a,	// (0x0000684a) cell_graphic2_pane_g4_ParamLimits

0x684a,	// (0x0000684a) cell_graphic2_pane_g4

0xeb65,	// (0x0000eb65) cell_graphic2_pane_g5_ParamLimits

0xeb65,	// (0x0000eb65) cell_graphic2_pane_g5

0x0004,

0xf497,	// (0x0000f497) cell_graphic2_pane_g_ParamLimits

0xf497,	// (0x0000f497) cell_graphic2_pane_g

0xeb85,	// (0x0000eb85) cell_graphic2_pane_t1_ParamLimits

0xeb85,	// (0x0000eb85) cell_graphic2_pane_t1

0x4639,	// (0x00004639) grid_highlight_pane_cp11_ParamLimits

0x4639,	// (0x00004639) grid_highlight_pane_cp11

0x082d,	// (0x0000082d) bg_button_pane_cp05

0xebb9,	// (0x0000ebb9) cell_graphic2_control_pane_g1

0x6591,	// (0x00006591) bg_touch_area_indi_pane_g1

0x950a,	// (0x0000950a) aid_cmod_rocker_key_size

0x9514,	// (0x00009514) aid_cmode_itu_key_size

0x951e,	// (0x0000951e) main_cmode_video_pane

0x9528,	// (0x00009528) main_comp_mode_itu_pane

0x9534,	// (0x00009534) main_comp_mode_rocker_pane

0x9540,	// (0x00009540) cell_cmode_rocker_pane_ParamLimits

0x9540,	// (0x00009540) cell_cmode_rocker_pane

0x9552,	// (0x00009552) cell_cmode_itu_pane_ParamLimits

0x9552,	// (0x00009552) cell_cmode_itu_pane

0x1349,	// (0x00001349) bg_button_pane_cp06_ParamLimits

0x1349,	// (0x00001349) bg_button_pane_cp06

0x6a13,	// (0x00006a13) cell_cmode_rocker_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) cell_cmode_rocker_pane_g1

0x84ff,	// (0x000084ff) cell_cmode_rocker_pane_g2_ParamLimits

0x84ff,	// (0x000084ff) cell_cmode_rocker_pane_g2

0x0001,

0xb326,	// (0x0000b326) cell_cmode_rocker_pane_g_ParamLimits

0xb326,	// (0x0000b326) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9567,	// (0x00009567) cell_cmode_itu_pane_g1

0x9570,	// (0x00009570) cell_cmode_itu_pane_t1

0x957e,	// (0x0000957e) cell_cmode_itu_pane_t2

0x0001,

0xb32b,	// (0x0000b32b) cell_cmode_itu_pane_t

0x8726,	// (0x00008726) aid_touch_ctrl_left

0x872e,	// (0x0000872e) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xebdd,	// (0x0000ebdd) aid_cmod_rocker_key_size_cp

0xebe7,	// (0x0000ebe7) aid_cmode_itu_key_size_cp

0x95a0,	// (0x000095a0) compa_mode_pane_g1

0x95a8,	// (0x000095a8) compa_mode_pane_g2

0x95b0,	// (0x000095b0) compa_mode_pane_g3

0x0002,

0xb330,	// (0x0000b330) compa_mode_pane_g

0xebf1,	// (0x0000ebf1) main_comp_mode_itu_pane_cp

0xebf9,	// (0x0000ebf9) main_comp_mode_rocker_pane_cp

0xec01,	// (0x0000ec01) cell_cmode_itu_pane_cp_ParamLimits

0xec01,	// (0x0000ec01) cell_cmode_itu_pane_cp

0xec16,	// (0x0000ec16) cell_cmode_rocker_pane_cp_ParamLimits

0xec16,	// (0x0000ec16) cell_cmode_rocker_pane_cp

0x1349,	// (0x00001349) bg_button_pane_cp06_cp_ParamLimits

0x1349,	// (0x00001349) bg_button_pane_cp06_cp

0x6a13,	// (0x00006a13) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a13,	// (0x00006a13) cell_cmode_rocker_pane_g1_cp

0x6591,	// (0x00006591) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xec28,	// (0x0000ec28) cell_cmode_itu_pane_g1_cp

0xec31,	// (0x0000ec31) cell_cmode_itu_pane_t1_cp

0xec31,	// (0x0000ec31) cell_cmode_itu_pane_t2_cp

0xd3dd,	// (0x0000d3dd) settings_code_pane_cp2

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3_ParamLimits

0x09fb,	// (0x000009fb) heading_pane_cp3_ParamLimits

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane_ParamLimits

0x65fb,	// (0x000065fb) fep_hwr_aid_pane_ParamLimits

0x8405,	// (0x00008405) aid_touch_sctrl_top_ParamLimits

0x8412,	// (0x00008412) sctrl_sk_top_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) sctrl_sk_top_pane_g2_ParamLimits

0xb266,	// (0x0000b266) sctrl_sk_top_pane_g_ParamLimits

0x841f,	// (0x0000841f) sctrl_sk_top_pane_t1_ParamLimits

0x8405,	// (0x00008405) aid_touch_sctrl_bottom_ParamLimits

0x841f,	// (0x0000841f) sctrl_sk_bottom_pane_t1_ParamLimits

0x866f,	// (0x0000866f) aid_area_touch_clock

0xe6ab,	// (0x0000e6ab) aid_vkb2_area_top_pane_cell_ParamLimits

0xe6ab,	// (0x0000e6ab) aid_vkb2_area_top_pane_cell

0xe756,	// (0x0000e756) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe756,	// (0x0000e756) aid_vkb2_area_bottom_pane_cell

0x8fbd,	// (0x00008fbd) popup_char_count_window

0x9606,	// (0x00009606) popup_char_count_window_g1

0x960f,	// (0x0000960f) popup_char_count_window_g2

0x9618,	// (0x00009618) popup_char_count_window_g3

0x0002,

0xb337,	// (0x0000b337) popup_char_count_window_g

0x9621,	// (0x00009621) popup_char_count_window_t1

0x8c1b,	// (0x00008c1b) popup_fep_char_preview_window_ParamLimits

0x8c1b,	// (0x00008c1b) popup_fep_char_preview_window

0xe6cb,	// (0x0000e6cb) vkb2_top_candi_pane_ParamLimits

0xe6cb,	// (0x0000e6cb) vkb2_top_candi_pane

0xec3f,	// (0x0000ec3f) cell_vkb2_top_candi_pane_ParamLimits

0xec3f,	// (0x0000ec3f) cell_vkb2_top_candi_pane

0x3e70,	// (0x00003e70) bg_popup_fep_char_preview_window_ParamLimits

0x3e70,	// (0x00003e70) bg_popup_fep_char_preview_window

0x967c,	// (0x0000967c) popup_fep_char_preview_window_t1_ParamLimits

0x967c,	// (0x0000967c) popup_fep_char_preview_window_t1

0x96b6,	// (0x000096b6) bg_popup_fep_char_preview_window_g1

0x96be,	// (0x000096be) bg_popup_fep_char_preview_window_g2

0x96c6,	// (0x000096c6) bg_popup_fep_char_preview_window_g3

0x96ce,	// (0x000096ce) bg_popup_fep_char_preview_window_g4

0x96d6,	// (0x000096d6) bg_popup_fep_char_preview_window_g5

0x96de,	// (0x000096de) bg_popup_fep_char_preview_window_g6

0x96e6,	// (0x000096e6) bg_popup_fep_char_preview_window_g7

0x96ee,	// (0x000096ee) bg_popup_fep_char_preview_window_g8

0x96f6,	// (0x000096f6) bg_popup_fep_char_preview_window_g9

0x0008,

0xb33e,	// (0x0000b33e) bg_popup_fep_char_preview_window_g

0x6a13,	// (0x00006a13) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) cell_vkb2_top_candi_pane_g1

0x6d7e,	// (0x00006d7e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d7e,	// (0x00006d7e) cell_vkb2_top_candi_pane_g2

0x6d9f,	// (0x00006d9f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d9f,	// (0x00006d9f) cell_vkb2_top_candi_pane_g3

0x96fe,	// (0x000096fe) cell_vkb2_top_candi_pane_g4_ParamLimits

0x96fe,	// (0x000096fe) cell_vkb2_top_candi_pane_g4

0x971f,	// (0x0000971f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x971f,	// (0x0000971f) cell_vkb2_top_candi_pane_g5

0x84ff,	// (0x000084ff) cell_vkb2_top_candi_pane_g6_ParamLimits

0x84ff,	// (0x000084ff) cell_vkb2_top_candi_pane_g6

0x0005,

0xb351,	// (0x0000b351) cell_vkb2_top_candi_pane_g_ParamLimits

0xb351,	// (0x0000b351) cell_vkb2_top_candi_pane_g

0x9740,	// (0x00009740) cell_vkb2_top_candi_pane_t1

0x4d47,	// (0x00004d47) aid_size_touch_slider_mark_ParamLimits

0x4d47,	// (0x00004d47) aid_size_touch_slider_mark

0xe962,	// (0x0000e962) grid_graphic2_catg_pane_ParamLimits

0xe962,	// (0x0000e962) grid_graphic2_catg_pane

0xea1e,	// (0x0000ea1e) popup_grid_graphic2_window_t1_ParamLimits

0xea1e,	// (0x0000ea1e) popup_grid_graphic2_window_t1

0xea34,	// (0x0000ea34) popup_grid_graphic2_window_t2_ParamLimits

0xea34,	// (0x0000ea34) popup_grid_graphic2_window_t2

0x0001,

0xf48d,	// (0x0000f48d) popup_grid_graphic2_window_t_ParamLimits

0xf48d,	// (0x0000f48d) popup_grid_graphic2_window_t

0x082d,	// (0x0000082d) bg_button_pane_cp05_ParamLimits

0xebb9,	// (0x0000ebb9) cell_graphic2_control_pane_g1_ParamLimits

0xeca5,	// (0x0000eca5) cell_graphic2_catg_pane_ParamLimits

0xeca5,	// (0x0000eca5) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xecb7,	// (0x0000ecb7) cell_graphic2_catg_pane_g1

0x863b,	// (0x0000863b) cell_tb_ext_pane_t1_ParamLimits

0x905b,	// (0x0000905b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x905b,	// (0x0000905b) vkb2_top_cell_right_narrow_pane

0x9073,	// (0x00009073) vkb2_top_cell_right_wide_pane_ParamLimits

0x9073,	// (0x00009073) vkb2_top_cell_right_wide_pane

0x65ed,	// (0x000065ed) bg_vkb2_func_pane_ParamLimits

0x65ed,	// (0x000065ed) bg_vkb2_func_pane

0x90e4,	// (0x000090e4) vkb2_top_cell_left_pane_g1_ParamLimits

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp03

0x9159,	// (0x00009159) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35ff,	// (0x000035ff) bg_vkb2_func_pane_g1

0x3607,	// (0x00003607) bg_vkb2_func_pane_g2

0x3617,	// (0x00003617) bg_vkb2_func_pane_g3

0x360f,	// (0x0000360f) bg_vkb2_func_pane_g4

0x361f,	// (0x0000361f) bg_vkb2_func_pane_g5

0x3627,	// (0x00003627) bg_vkb2_func_pane_g6

0x362f,	// (0x0000362f) bg_vkb2_func_pane_g7

0x3637,	// (0x00003637) bg_vkb2_func_pane_g8

0x35f7,	// (0x000035f7) bg_vkb2_func_pane_g9

0x0008,

0xb35e,	// (0x0000b35e) bg_vkb2_func_pane_g

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp01

0x90e4,	// (0x000090e4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90e4,	// (0x000090e4) vkb2_top_cell_right_wide_pane_g1

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65ed,	// (0x000065ed) bg_vkb2_fuc_pane_cp02

0x9159,	// (0x00009159) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9159,	// (0x00009159) vkb2_top_cell_right_narrow_pane_g1

0xde0e,	// (0x0000de0e) aid_touch_area_decrease_ParamLimits

0xde0e,	// (0x0000de0e) aid_touch_area_decrease

0xde48,	// (0x0000de48) aid_touch_area_increase_ParamLimits

0xde48,	// (0x0000de48) aid_touch_area_increase

0xde70,	// (0x0000de70) aid_touch_area_mute_ParamLimits

0xde70,	// (0x0000de70) aid_touch_area_mute

0xdea0,	// (0x0000dea0) aid_touch_area_slider_ParamLimits

0xdea0,	// (0x0000dea0) aid_touch_area_slider

0xdee0,	// (0x0000dee0) popup_slider_window_g4_ParamLimits

0xdee0,	// (0x0000dee0) popup_slider_window_g4

0xdf08,	// (0x0000df08) popup_slider_window_g5_ParamLimits

0xdf08,	// (0x0000df08) popup_slider_window_g5

0xdf3c,	// (0x0000df3c) popup_slider_window_g6_ParamLimits

0xdf3c,	// (0x0000df3c) popup_slider_window_g6

0x8344,	// (0x00008344) popup_slider_window_t2_ParamLimits

0x8344,	// (0x00008344) popup_slider_window_t2

0x0001,

0xb25a,	// (0x0000b25a) popup_slider_window_t_ParamLimits

0xb25a,	// (0x0000b25a) popup_slider_window_t

0xdf58,	// (0x0000df58) slider_pane_ParamLimits

0xdf58,	// (0x0000df58) slider_pane

0x977a,	// (0x0000977a) slider_pane_g1_ParamLimits

0x977a,	// (0x0000977a) slider_pane_g1

0x978e,	// (0x0000978e) slider_pane_g2_ParamLimits

0x978e,	// (0x0000978e) slider_pane_g2

0x97a4,	// (0x000097a4) slider_pane_g3_ParamLimits

0x97a4,	// (0x000097a4) slider_pane_g3

0x0003,

0xb371,	// (0x0000b371) slider_pane_g_ParamLimits

0xb371,	// (0x0000b371) slider_pane_g

0xca3e,	// (0x0000ca3e) popup_tb_float_extension_window_ParamLimits

0xca3e,	// (0x0000ca3e) popup_tb_float_extension_window

0x97d0,	// (0x000097d0) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x97dc,	// (0x000097dc) grid_tb_float_ext_pane

0x97e6,	// (0x000097e6) cell_tb_float_ext_pane_ParamLimits

0x97e6,	// (0x000097e6) cell_tb_float_ext_pane

0x9800,	// (0x00009800) cell_tb_float_ext_pane_g1

0x9809,	// (0x00009809) grid_highlight_pane_cp12

0xd78c,	// (0x0000d78c) cell_last_hwr_side_pane_ParamLimits

0xd78c,	// (0x0000d78c) cell_last_hwr_side_pane

0x6591,	// (0x00006591) cell_last_hwr_side_pane_g1

0x9812,	// (0x00009812) cell_last_hwr_side_pane_g2

0x0001,

0xb37a,	// (0x0000b37a) cell_last_hwr_side_pane_g

0xe832,	// (0x0000e832) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe832,	// (0x0000e832) vkb2_area_bottom_space_btn_pane

0x6a13,	// (0x00006a13) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x923c,	// (0x0000923c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9740,	// (0x00009740) cell_vkb2_top_candi_pane_t1_ParamLimits

0x981b,	// (0x0000981b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x981b,	// (0x0000981b) vkb2_area_bottom_space_btn_pane_g1

0x9855,	// (0x00009855) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9855,	// (0x00009855) vkb2_area_bottom_space_btn_pane_g2

0x988b,	// (0x0000988b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x988b,	// (0x0000988b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb37f,	// (0x0000b37f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb37f,	// (0x0000b37f) vkb2_area_bottom_space_btn_pane_g

0x66b0,	// (0x000066b0) cel_fep_hwr_func_pane_ParamLimits

0x66b0,	// (0x000066b0) cel_fep_hwr_func_pane

0xd761,	// (0x0000d761) cell_hwr_side_button_pane_ParamLimits

0xd761,	// (0x0000d761) cell_hwr_side_button_pane

0x866f,	// (0x0000866f) aid_area_touch_clock_ParamLimits

0x082d,	// (0x0000082d) bg_uniindi_top_pane_ParamLimits

0x8681,	// (0x00008681) uniindi_top_pane_g1_ParamLimits

0x8697,	// (0x00008697) uniindi_top_pane_g2_ParamLimits

0x86a3,	// (0x000086a3) uniindi_top_pane_g3_ParamLimits

0x86b4,	// (0x000086b4) uniindi_top_pane_g4_ParamLimits

0xb292,	// (0x0000b292) uniindi_top_pane_g_ParamLimits

0x86c1,	// (0x000086c1) uniindi_top_pane_t1_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01

0x98d5,	// (0x000098d5) cel_fep_hwr_func_pane_g1_ParamLimits

0x98d5,	// (0x000098d5) cel_fep_hwr_func_pane_g1

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02

0x98d5,	// (0x000098d5) cell_hwr_side_button_pane_g1_ParamLimits

0x98d5,	// (0x000098d5) cell_hwr_side_button_pane_g1

0x33ec,	// (0x000033ec) status_pane_g4_ParamLimits

0x33ec,	// (0x000033ec) status_pane_g4

0x3406,	// (0x00003406) status_pane_t1

0x62ab,	// (0x000062ab) form2_midp_gauge_slider_cont_pane

0x62b3,	// (0x000062b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd6a5,	// (0x0000d6a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd6b9,	// (0x0000d6b9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf3e2,	// (0x0000f3e2) form2_midp_gauge_slider_pane_t_ParamLimits

0x62e9,	// (0x000062e9) form2_midp_slider_pane_ParamLimits

0x8bdb,	// (0x00008bdb) aid_size_cell_func_vkb2_ParamLimits

0x8bdb,	// (0x00008bdb) aid_size_cell_func_vkb2

0x97bc,	// (0x000097bc) slider_pane_g4_ParamLimits

0x97bc,	// (0x000097bc) slider_pane_g4

0xecc0,	// (0x0000ecc0) form2_midp_gauge_slider_pane_t2_cp01

0xecd0,	// (0x0000ecd0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xecd0,	// (0x0000ecd0) form2_midp_gauge_slider_pane_t3_cp01

0x990e,	// (0x0000990e) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9942,	// (0x00009942) navi_smil_pane_g1

0x994a,	// (0x0000994a) navi_smil_pane_t1

0x9917,	// (0x00009917) form2_midp_slider_pane_g1

0x9920,	// (0x00009920) form2_midp_slider_pane_g2

0x9928,	// (0x00009928) form2_midp_slider_pane_g3

0x9917,	// (0x00009917) form2_midp_slider_pane_g4

0xecef,	// (0x0000ecef) form2_midp_slider_pane_g5

0x0004,

0xf4a7,	// (0x0000f4a7) form2_midp_slider_pane_g

0x98c5,	// (0x000098c5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x98c5,	// (0x000098c5) vkb2_area_bottom_space_btn_pane_g4

0xcc21,	// (0x0000cc21) lc0_navi_pane_ParamLimits

0xcc21,	// (0x0000cc21) lc0_navi_pane

0xcc8b,	// (0x0000cc8b) lc0_stat_indi_pane_ParamLimits

0xcc8b,	// (0x0000cc8b) lc0_stat_indi_pane

0xcca0,	// (0x0000cca0) ls0_title_pane_ParamLimits

0xcca0,	// (0x0000cca0) ls0_title_pane

0x1349,	// (0x00001349) bg_popup_sub_pane_cp14_ParamLimits

0x8656,	// (0x00008656) list_uniindi_pane_ParamLimits

0x8662,	// (0x00008662) uniindi_top_pane_ParamLimits

0x86fe,	// (0x000086fe) list_single_uniindi_pane_g1_ParamLimits

0x8711,	// (0x00008711) list_single_uniindi_pane_t1_ParamLimits

0xecfa,	// (0x0000ecfa) lc0_stat_clock_pane_ParamLimits

0xecfa,	// (0x0000ecfa) lc0_stat_clock_pane

0xed07,	// (0x0000ed07) lc0_stat_indi_pane_g1_ParamLimits

0xed07,	// (0x0000ed07) lc0_stat_indi_pane_g1

0xed14,	// (0x0000ed14) lc0_stat_indi_pane_g2_ParamLimits

0xed14,	// (0x0000ed14) lc0_stat_indi_pane_g2

0x0001,

0xf4b2,	// (0x0000f4b2) lc0_stat_indi_pane_g_ParamLimits

0xf4b2,	// (0x0000f4b2) lc0_stat_indi_pane_g

0xed21,	// (0x0000ed21) lc0_uni_indicator_pane_ParamLimits

0xed21,	// (0x0000ed21) lc0_uni_indicator_pane

0xed2e,	// (0x0000ed2e) ls0_title_pane_g1_ParamLimits

0xed2e,	// (0x0000ed2e) ls0_title_pane_g1

0xed42,	// (0x0000ed42) ls0_title_pane_t1_ParamLimits

0xed42,	// (0x0000ed42) ls0_title_pane_t1

0xed70,	// (0x0000ed70) lc0_uni_indicator_pane_g1_ParamLimits

0xed70,	// (0x0000ed70) lc0_uni_indicator_pane_g1

0x99eb,	// (0x000099eb) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x99f9,	// (0x000099f9) ai5_sk_pane_ParamLimits

0x99f9,	// (0x000099f9) ai5_sk_pane

0xed9e,	// (0x0000ed9e) cell_ai5_widget_pane_ParamLimits

0xed9e,	// (0x0000ed9e) cell_ai5_widget_pane

0x9ad0,	// (0x00009ad0) aid_size_cell_widget_grid

0x9ae6,	// (0x00009ae6) bg_ai5_widget_pane_ParamLimits

0x9ae6,	// (0x00009ae6) bg_ai5_widget_pane

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_g2

0x9b6a,	// (0x00009b6a) cell_ai5_widget_pane_g3

0x9b81,	// (0x00009b81) cell_ai5_widget_pane_g4

0x9b8d,	// (0x00009b8d) cell_ai5_widget_pane_g5

0x9b99,	// (0x00009b99) cell_ai5_widget_pane_g6

0x9ba5,	// (0x00009ba5) cell_ai5_widget_pane_g7

0x9bed,	// (0x00009bed) cell_ai5_widget_pane_t1_ParamLimits

0x9bed,	// (0x00009bed) cell_ai5_widget_pane_t1

0x9c0a,	// (0x00009c0a) cell_ai5_widget_pane_t2_ParamLimits

0x9c0a,	// (0x00009c0a) cell_ai5_widget_pane_t2

0x9c22,	// (0x00009c22) cell_ai5_widget_pane_t3_ParamLimits

0x9c22,	// (0x00009c22) cell_ai5_widget_pane_t3

0x9c3a,	// (0x00009c3a) cell_ai5_widget_pane_t4_ParamLimits

0x9c3a,	// (0x00009c3a) cell_ai5_widget_pane_t4

0x9c57,	// (0x00009c57) cell_ai5_widget_pane_t5_ParamLimits

0x9c57,	// (0x00009c57) cell_ai5_widget_pane_t5

0x9c76,	// (0x00009c76) cell_ai5_widget_pane_t6_ParamLimits

0x9c76,	// (0x00009c76) cell_ai5_widget_pane_t6

0x9c88,	// (0x00009c88) cell_ai5_widget_pane_t7_ParamLimits

0x9c88,	// (0x00009c88) cell_ai5_widget_pane_t7

0x9ca1,	// (0x00009ca1) cell_ai5_widget_pane_t8_ParamLimits

0x9ca1,	// (0x00009ca1) cell_ai5_widget_pane_t8

0x0009,

0xb3ad,	// (0x0000b3ad) cell_ai5_widget_pane_t_ParamLimits

0xb3ad,	// (0x0000b3ad) cell_ai5_widget_pane_t

0x9cf5,	// (0x00009cf5) grid_ai5_widget_pane

0x1349,	// (0x00001349) highlight_cell_ai5_widget_pane_ParamLimits

0x1349,	// (0x00001349) highlight_cell_ai5_widget_pane

0xee08,	// (0x0000ee08) ai5_sk_left_pane

0xee12,	// (0x0000ee12) ai5_sk_middle_pane

0xee1c,	// (0x0000ee1c) ai5_sk_right_pane

0x9d2b,	// (0x00009d2b) bg_ai5_widget_pane_g1_ParamLimits

0x9d2b,	// (0x00009d2b) bg_ai5_widget_pane_g1

0x9d37,	// (0x00009d37) bg_ai5_widget_pane_g2_ParamLimits

0x9d37,	// (0x00009d37) bg_ai5_widget_pane_g2

0x9d43,	// (0x00009d43) bg_ai5_widget_pane_g3_ParamLimits

0x9d43,	// (0x00009d43) bg_ai5_widget_pane_g3

0x9d4f,	// (0x00009d4f) bg_ai5_widget_pane_g4_ParamLimits

0x9d4f,	// (0x00009d4f) bg_ai5_widget_pane_g4

0x9d5b,	// (0x00009d5b) bg_ai5_widget_pane_g5_ParamLimits

0x9d5b,	// (0x00009d5b) bg_ai5_widget_pane_g5

0x9d67,	// (0x00009d67) bg_ai5_widget_pane_g6_ParamLimits

0x9d67,	// (0x00009d67) bg_ai5_widget_pane_g6

0x9d73,	// (0x00009d73) bg_ai5_widget_pane_g7_ParamLimits

0x9d73,	// (0x00009d73) bg_ai5_widget_pane_g7

0x9d7f,	// (0x00009d7f) bg_ai5_widget_pane_g8_ParamLimits

0x9d7f,	// (0x00009d7f) bg_ai5_widget_pane_g8

0x9d8b,	// (0x00009d8b) bg_ai5_widget_pane_g9_ParamLimits

0x9d8b,	// (0x00009d8b) bg_ai5_widget_pane_g9

0x0008,

0xb3c2,	// (0x0000b3c2) bg_ai5_widget_pane_g_ParamLimits

0xb3c2,	// (0x0000b3c2) bg_ai5_widget_pane_g

0x9dbd,	// (0x00009dbd) cell_shortcut_ai5_widget_pane_ParamLimits

0x9dbd,	// (0x00009dbd) cell_shortcut_ai5_widget_pane

0x2563,	// (0x00002563) bg_cell_shortcut_ai5_widget_pane

0x9dce,	// (0x00009dce) cell_grid_ai5_widget_pane_g1

0x2563,	// (0x00002563) highlight_cell_shortcut_ai5_widget_pane

0x3607,	// (0x00003607) ai5_sk_left_pane_g1

0x9dd7,	// (0x00009dd7) ai5_sk_left_pane_g2

0x9ddf,	// (0x00009ddf) ai5_sk_left_pane_g3

0x9de7,	// (0x00009de7) ai5_sk_left_pane_g4

0x0003,

0xb3d5,	// (0x0000b3d5) ai5_sk_left_pane_g

0x9def,	// (0x00009def) ai5_sk_left_pane_t1

0x35ff,	// (0x000035ff) ai5_sk_right_pane_g1

0x9dfd,	// (0x00009dfd) ai5_sk_right_pane_g2

0x9e05,	// (0x00009e05) ai5_sk_right_pane_g3

0x9e0d,	// (0x00009e0d) ai5_sk_right_pane_g4

0x0003,

0xb3de,	// (0x0000b3de) ai5_sk_right_pane_g

0x9e15,	// (0x00009e15) ai5_sk_right_pane_t1

0x35ff,	// (0x000035ff) ai5_sk_middle_pane_g1

0x3607,	// (0x00003607) ai5_sk_middle_pane_g2

0x361f,	// (0x0000361f) ai5_sk_middle_pane_g3

0x9e05,	// (0x00009e05) ai5_sk_middle_pane_g4

0x9ddf,	// (0x00009ddf) ai5_sk_middle_pane_g5

0x9e23,	// (0x00009e23) ai5_sk_middle_pane_g6

0xee26,	// (0x0000ee26) ai5_sk_middle_pane_g7

0x0006,

0xf4b7,	// (0x0000f4b7) ai5_sk_middle_pane_g

0xcb0d,	// (0x0000cb0d) aid_touch_area_size_lc0_ParamLimits

0xcb0d,	// (0x0000cb0d) aid_touch_area_size_lc0

0x6dc0,	// (0x00006dc0) cell_hwr_candidate_pane_t1_ParamLimits

0x30cf,	// (0x000030cf) aid_touch_navi_pane

0xcd99,	// (0x0000cd99) status_dt_navi_pane_ParamLimits

0xcd99,	// (0x0000cd99) status_dt_navi_pane

0xcdb1,	// (0x0000cdb1) status_dt_sta_pane_ParamLimits

0xcdb1,	// (0x0000cdb1) status_dt_sta_pane

0xee2e,	// (0x0000ee2e) dt_sta_controll_pane

0xee3b,	// (0x0000ee3b) dt_sta_indi_pane

0xee48,	// (0x0000ee48) dt_sta_title_pane

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane_ParamLimits

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane

0x9e64,	// (0x00009e64) dt_sta_battery_pane

0xee5a,	// (0x0000ee5a) dt_sta_indi_pane_g1

0xee63,	// (0x0000ee63) dt_sta_indi_pane_g2

0xee6c,	// (0x0000ee6c) dt_sta_indi_pane_g3

0x0002,

0xf4c6,	// (0x0000f4c6) dt_sta_indi_pane_g

0xee75,	// (0x0000ee75) dt_sta_signal_pane

0x1349,	// (0x00001349) bg_dt_sta_title_pane_ParamLimits

0x1349,	// (0x00001349) bg_dt_sta_title_pane

0x9e90,	// (0x00009e90) dt_sta_title_pane_g1

0xee7e,	// (0x0000ee7e) dt_sta_title_pane_t1_ParamLimits

0xee7e,	// (0x0000ee7e) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xee93,	// (0x0000ee93) dt_sta_controll_pane_g1

0x9eb6,	// (0x00009eb6) bg_dt_sta_title_pane_g1

0x9ebf,	// (0x00009ebf) bg_dt_sta_title_pane_g2

0x9ec8,	// (0x00009ec8) bg_dt_sta_title_pane_g3

0x0002,

0xb3fd,	// (0x0000b3fd) bg_dt_sta_title_pane_g

0x6591,	// (0x00006591) bg_dt_sta_indi_pane_g1

0x9ed1,	// (0x00009ed1) dt_sta_signal_pane_g1

0x9ed9,	// (0x00009ed9) dt_sta_signal_pane_g2

0x0001,

0xb404,	// (0x0000b404) dt_sta_signal_pane_g

0x9ee1,	// (0x00009ee1) dt_sta_battery_pane_g1

0x9eea,	// (0x00009eea) dt_sta_battery_pane_t1

0x6591,	// (0x00006591) bg_dt_sta_control_pane_g1

0x1ea1,	// (0x00001ea1) fep_china_uni_eep_pane

0x1ea9,	// (0x00001ea9) fep_china_uni_entry_pane_ParamLimits

0x1eb9,	// (0x00001eb9) popup_fep_china_uni_window_g1_ParamLimits

0x1ec9,	// (0x00001ec9) popup_fep_china_uni_window_g2_ParamLimits

0x1ec9,	// (0x00001ec9) popup_fep_china_uni_window_g2

0x0001,

0xac7b,	// (0x0000ac7b) popup_fep_china_uni_window_g_ParamLimits

0xac7b,	// (0x0000ac7b) popup_fep_china_uni_window_g

0x9ef9,	// (0x00009ef9) fep_china_uni_eep_pane_g1

0x9f01,	// (0x00009f01) fep_china_uni_eep_pane_t1

0x9939,	// (0x00009939) aid_touch_area_size_smil_player

0x321b,	// (0x0000321b) lc0_clock_pane

0x33fa,	// (0x000033fa) status_pane_g5_ParamLimits

0x33fa,	// (0x000033fa) status_pane_g5

0xc5cc,	// (0x0000c5cc) popup_keymap_window

0x33c0,	// (0x000033c0) status_icon_pane

0x9b6a,	// (0x00009b6a) cell_ai5_widget_pane_g3_ParamLimits

0x9b81,	// (0x00009b81) cell_ai5_widget_pane_g4_ParamLimits

0x9b8d,	// (0x00009b8d) cell_ai5_widget_pane_g5_ParamLimits

0x9bb1,	// (0x00009bb1) cell_ai5_widget_pane_g8_ParamLimits

0x9bb1,	// (0x00009bb1) cell_ai5_widget_pane_g8

0x9bc5,	// (0x00009bc5) cell_ai5_widget_pane_g9_ParamLimits

0x9bc5,	// (0x00009bc5) cell_ai5_widget_pane_g9

0x9bd9,	// (0x00009bd9) cell_ai5_widget_pane_g10_ParamLimits

0x9bd9,	// (0x00009bd9) cell_ai5_widget_pane_g10

0x9f10,	// (0x00009f10) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9f18,	// (0x00009f18) popup_keymap_window_t1

0xc2f8,	// (0x0000c2f8) control_pane_g6_ParamLimits

0xc2f8,	// (0x0000c2f8) control_pane_g6

0xc305,	// (0x0000c305) control_pane_g7_ParamLimits

0xc305,	// (0x0000c305) control_pane_g7

0xc312,	// (0x0000c312) control_pane_g8_ParamLimits

0xc312,	// (0x0000c312) control_pane_g8

0xee2e,	// (0x0000ee2e) dt_sta_controll_pane_ParamLimits

0xee3b,	// (0x0000ee3b) dt_sta_indi_pane_ParamLimits

0xee48,	// (0x0000ee48) dt_sta_title_pane_ParamLimits

0x0d36,	// (0x00000d36) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb5bd,	// (0x0000b5bd) popup_sk_window

0x3e70,	// (0x00003e70) bg_popup_sub_pane_cp28_ParamLimits

0x3e70,	// (0x00003e70) bg_popup_sub_pane_cp28

0x9f26,	// (0x00009f26) popup_discreet_window_g1_ParamLimits

0x9f26,	// (0x00009f26) popup_discreet_window_g1

0x9f46,	// (0x00009f46) popup_discreet_window_t1_ParamLimits

0x9f46,	// (0x00009f46) popup_discreet_window_t1

0x9f64,	// (0x00009f64) popup_discreet_window_t2_ParamLimits

0x9f64,	// (0x00009f64) popup_discreet_window_t2

0x0002,

0xb409,	// (0x0000b409) popup_discreet_window_t_ParamLimits

0xb409,	// (0x0000b409) popup_discreet_window_t

0x9fb6,	// (0x00009fb6) popup_sk_window_g1

0x9fc0,	// (0x00009fc0) popup_sk_window_g2

0x0001,

0xb410,	// (0x0000b410) popup_sk_window_g

0x9fca,	// (0x00009fca) popup_sk_window_t1

0x9fd8,	// (0x00009fd8) popup_sk_window_t1_copy1

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_g2_ParamLimits

0x9cb3,	// (0x00009cb3) cell_ai5_widget_pane_t9_ParamLimits

0x9cb3,	// (0x00009cb3) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xee9c,	// (0x0000ee9c) aid_fshwr2_btn_pane

0xeead,	// (0x0000eead) aid_fshwr2_syb_pane

0xeebe,	// (0x0000eebe) aid_fshwr2_txt_pane

0xeeca,	// (0x0000eeca) fshwr2_func_candi_pane

0xeee9,	// (0x0000eee9) fshwr2_hwr_syb_pane

0xef04,	// (0x0000ef04) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xef2d,	// (0x0000ef2d) fshwr2_icf_pane_t1_ParamLimits

0xef2d,	// (0x0000ef2d) fshwr2_icf_pane_t1

0x1cc5,	// (0x00001cc5) fshwr2_func_candi_pane_g1

0xef46,	// (0x0000ef46) fshwr2_func_candi_row_pane_ParamLimits

0xef46,	// (0x0000ef46) fshwr2_func_candi_row_pane

0xef56,	// (0x0000ef56) cell_fshwr2_syb_pane_ParamLimits

0xef56,	// (0x0000ef56) cell_fshwr2_syb_pane

0x6a13,	// (0x00006a13) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xef6c,	// (0x0000ef6c) fshwr2_func_candi_cell_pane_ParamLimits

0xef6c,	// (0x0000ef6c) fshwr2_func_candi_cell_pane

0xefa1,	// (0x0000efa1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xefa1,	// (0x0000efa1) fshwr2_func_candi_cell_bg_pane

0xefad,	// (0x0000efad) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xefad,	// (0x0000efad) fshwr2_func_candi_cell_pane_g1

0xefdc,	// (0x0000efdc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xefdc,	// (0x0000efdc) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x55c1,	// (0x000055c1) cell_fshwr2_syb_bg_pane

0xefef,	// (0x0000efef) cell_fshwr2_syb_bg_pane_g1

0xeff7,	// (0x0000eff7) cell_fshwr2_syb_bg_pane_t1

0x1349,	// (0x00001349) main_tmo_pane

0xd210,	// (0x0000d210) uni_indicator_pane_g1_ParamLimits

0xd226,	// (0x0000d226) uni_indicator_pane_g2_ParamLimits

0xd23c,	// (0x0000d23c) uni_indicator_pane_g3_ParamLimits

0x4b24,	// (0x00004b24) uni_indicator_pane_g4_ParamLimits

0x4b24,	// (0x00004b24) uni_indicator_pane_g4

0x4b38,	// (0x00004b38) uni_indicator_pane_g5_ParamLimits

0x4b38,	// (0x00004b38) uni_indicator_pane_g5

0x4b38,	// (0x00004b38) uni_indicator_pane_g6_ParamLimits

0x4b38,	// (0x00004b38) uni_indicator_pane_g6

0xf393,	// (0x0000f393) uni_indicator_pane_g_ParamLimits

0xddf0,	// (0x0000ddf0) popup_tmo_note_window_ParamLimits

0xddf0,	// (0x0000ddf0) popup_tmo_note_window

0x1349,	// (0x00001349) fshwr2_bg_pane

0xefcd,	// (0x0000efcd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xefcd,	// (0x0000efcd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf4cd,	// (0x0000f4cd) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf4cd,	// (0x0000f4cd) fshwr2_func_candi_cell_pane_g

0x6591,	// (0x00006591) bg_popup_window_pane_cp01

0xa115,	// (0x0000a115) bg_popup_window_pane_g1_cp01

0xa11e,	// (0x0000a11e) bg_popup_window_pane_cp22_ParamLimits

0xa11e,	// (0x0000a11e) bg_popup_window_pane_cp22

0xa12c,	// (0x0000a12c) listscroll_tmo_link_pane_ParamLimits

0xa12c,	// (0x0000a12c) listscroll_tmo_link_pane

0xa16c,	// (0x0000a16c) popup_tmo_note_window_g1_ParamLimits

0xa16c,	// (0x0000a16c) popup_tmo_note_window_g1

0xa179,	// (0x0000a179) tmo_note_info_pane_ParamLimits

0xa179,	// (0x0000a179) tmo_note_info_pane

0xf006,	// (0x0000f006) list_tmo_note_info_pane_g1_ParamLimits

0xf006,	// (0x0000f006) list_tmo_note_info_pane_g1

0xa1aa,	// (0x0000a1aa) list_tmo_note_info_pane_g2_ParamLimits

0xa1aa,	// (0x0000a1aa) list_tmo_note_info_pane_g2

0x0001,

0xf4d2,	// (0x0000f4d2) list_tmo_note_info_pane_g_ParamLimits

0xf4d2,	// (0x0000f4d2) list_tmo_note_info_pane_g

0xa1c6,	// (0x0000a1c6) list_tmo_note_info_text_pane_ParamLimits

0xa1c6,	// (0x0000a1c6) list_tmo_note_info_text_pane

0xa249,	// (0x0000a249) list_tmo_link_pane

0xa256,	// (0x0000a256) scroll_pane_cp20

0xa263,	// (0x0000a263) list_single_tmo_link_pane_ParamLimits

0xa263,	// (0x0000a263) list_single_tmo_link_pane

0xa273,	// (0x0000a273) list_single_tmo_link_pane_t1

0xa281,	// (0x0000a281) list_tmo_note_info_text_pane_t1_ParamLimits

0xa281,	// (0x0000a281) list_tmo_note_info_text_pane_t1

0xbe9b,	// (0x0000be9b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe9b,	// (0x0000be9b) aid_size_touch_scroll_bar_cp01

0xbdf7,	// (0x0000bdf7) aid_size_touch_slider_marker

0xb5ad,	// (0x0000b5ad) popup_settings_window_ParamLimits

0xb5ad,	// (0x0000b5ad) popup_settings_window

0x2afc,	// (0x00002afc) popup_candi_list_indi_window

0x30cf,	// (0x000030cf) aid_touch_navi_pane_ParamLimits

0x83d9,	// (0x000083d9) rs_clock_indi_pane

0x83e2,	// (0x000083e2) sctrl_sk_bottom_pane_ParamLimits

0x83f3,	// (0x000083f3) sctrl_sk_top_pane_ParamLimits

0x8c35,	// (0x00008c35) popup_fep_tooltip_window

0x9ad0,	// (0x00009ad0) aid_size_cell_widget_grid_ParamLimits

0x9b45,	// (0x00009b45) cell_ai5_widget_pane_g1_ParamLimits

0x9b45,	// (0x00009b45) cell_ai5_widget_pane_g1

0x9b99,	// (0x00009b99) cell_ai5_widget_pane_g6_ParamLimits

0x9ba5,	// (0x00009ba5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb398,	// (0x0000b398) cell_ai5_widget_pane_g_ParamLimits

0xb398,	// (0x0000b398) cell_ai5_widget_pane_g

0x9cd7,	// (0x00009cd7) cell_ai5_widget_pane_t10_ParamLimits

0x9cd7,	// (0x00009cd7) cell_ai5_widget_pane_t10

0x9cf5,	// (0x00009cf5) grid_ai5_widget_pane_ParamLimits

0x9d97,	// (0x00009d97) cell_contacts_ai5_widget_pane_ParamLimits

0x9d97,	// (0x00009d97) cell_contacts_ai5_widget_pane

0x9f79,	// (0x00009f79) popup_discreet_window_t3_ParamLimits

0x9f79,	// (0x00009f79) popup_discreet_window_t3

0xef19,	// (0x0000ef19) popup_fshwr2_char_preview_window_ParamLimits

0xef19,	// (0x0000ef19) popup_fshwr2_char_preview_window

0xf01d,	// (0x0000f01d) tmo_note_info_pane_t1

0xf032,	// (0x0000f032) tmo_note_info_pane_t2

0xf04b,	// (0x0000f04b) tmo_note_info_pane_t3

0xa225,	// (0x0000a225) tmo_note_info_pane_t4

0xa237,	// (0x0000a237) tmo_note_info_pane_t5

0x0004,

0xf4d7,	// (0x0000f4d7) tmo_note_info_pane_t

0xa249,	// (0x0000a249) list_tmo_link_pane_ParamLimits

0xa256,	// (0x0000a256) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa29a,	// (0x0000a29a) popup_fshwr2_char_preview_window_t1

0xa2a8,	// (0x0000a2a8) popup_candi_list_indi_window_g1

0xa2b1,	// (0x0000a2b1) bg_cell_contacts_ai5_widget_pane

0xa2bd,	// (0x0000a2bd) cell_contacts_ai5_widget_pane_g1

0xa2d2,	// (0x0000a2d2) cell_contacts_ai5_widget_pane_g2

0xa2de,	// (0x0000a2de) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb42a,	// (0x0000b42a) cell_contacts_ai5_widget_pane_g

0xa2ea,	// (0x0000a2ea) cell_contacts_ai5_widget_pane_t1

0x1349,	// (0x00001349) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf060,	// (0x0000f060) settings_container_pane

0x2563,	// (0x00002563) listscroll_set_pane_copy1

0x5961,	// (0x00005961) scroll_pane_cp121_copy1

0xa36d,	// (0x0000a36d) set_content_pane_copy1

0xf06c,	// (0x0000f06c) aid_height_set_list_copy1_ParamLimits

0xf06c,	// (0x0000f06c) aid_height_set_list_copy1

0x4e05,	// (0x00004e05) aid_size_parent_copy1_ParamLimits

0x4e05,	// (0x00004e05) aid_size_parent_copy1

0xf078,	// (0x0000f078) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf078,	// (0x0000f078) button_value_adjust_pane_cp6_copy1

0x2ad4,	// (0x00002ad4) list_highlight_pane_cp2_copy1_ParamLimits

0x2ad4,	// (0x00002ad4) list_highlight_pane_cp2_copy1

0xf08c,	// (0x0000f08c) list_set_pane_copy1_ParamLimits

0xf08c,	// (0x0000f08c) list_set_pane_copy1

0xa2fc,	// (0x0000a2fc) main_pane_set_t1_copy1_ParamLimits

0xa2fc,	// (0x0000a2fc) main_pane_set_t1_copy1

0xa336,	// (0x0000a336) main_pane_set_t2_copy1_ParamLimits

0xa336,	// (0x0000a336) main_pane_set_t2_copy1

0xa442,	// (0x0000a442) main_pane_set_t3_copy1

0xa450,	// (0x0000a450) main_pane_set_t4_copy1

0xa355,	// (0x0000a355) set_content_pane_g1_copy1_ParamLimits

0xa355,	// (0x0000a355) set_content_pane_g1_copy1

0xf139,	// (0x0000f139) setting_code_pane_copy1

0xa466,	// (0x0000a466) setting_slider_graphic_pane_copy1

0xa466,	// (0x0000a466) setting_slider_pane_copy1

0xa466,	// (0x0000a466) setting_text_pane_copy1

0xa466,	// (0x0000a466) setting_volume_pane_copy1

0xf139,	// (0x0000f139) settings_code_pane_cp2_copy1

0xf141,	// (0x0000f141) settings_code_pane_cp_copy1_ParamLimits

0xf141,	// (0x0000f141) settings_code_pane_cp_copy1

0xf155,	// (0x0000f155) volume_set_pane_copy1

0xf15d,	// (0x0000f15d) volume_set_pane_g10_copy1

0xf165,	// (0x0000f165) volume_set_pane_g1_copy1

0xf16d,	// (0x0000f16d) volume_set_pane_g2_copy1

0xf175,	// (0x0000f175) volume_set_pane_g3_copy1

0xf17d,	// (0x0000f17d) volume_set_pane_g4_copy1

0xf185,	// (0x0000f185) volume_set_pane_g5_copy1

0xf18d,	// (0x0000f18d) volume_set_pane_g6_copy1

0xf195,	// (0x0000f195) volume_set_pane_g7_copy1

0xf19d,	// (0x0000f19d) volume_set_pane_g8_copy1

0xf1a5,	// (0x0000f1a5) volume_set_pane_g9_copy1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1

0xa4da,	// (0x0000a4da) setting_slider_pane_t1_copy1_ParamLimits

0xa4da,	// (0x0000a4da) setting_slider_pane_t1_copy1

0xf1ad,	// (0x0000f1ad) setting_slider_pane_t2_copy1_ParamLimits

0xf1ad,	// (0x0000f1ad) setting_slider_pane_t2_copy1

0xf1c7,	// (0x0000f1c7) setting_slider_pane_t3_copy1_ParamLimits

0xf1c7,	// (0x0000f1c7) setting_slider_pane_t3_copy1

0xf1df,	// (0x0000f1df) slider_set_pane_copy1_ParamLimits

0xf1df,	// (0x0000f1df) slider_set_pane_copy1

0x1476,	// (0x00001476) set_opt_bg_pane_g1_copy2

0x147e,	// (0x0000147e) set_opt_bg_pane_g2_copy2

0xa540,	// (0x0000a540) set_opt_bg_pane_g3_copy2

0x148e,	// (0x0000148e) set_opt_bg_pane_g4_copy2

0x1496,	// (0x00001496) set_opt_bg_pane_g5_copy2

0x149e,	// (0x0000149e) set_opt_bg_pane_g6_copy2

0xf1f5,	// (0x0000f1f5) set_opt_bg_pane_g7_copy2

0xa552,	// (0x0000a552) set_opt_bg_pane_g8_copy2

0xa55c,	// (0x0000a55c) set_opt_bg_pane_g9_copy2

0xa566,	// (0x0000a566) aid_size_touch_slider_mark_copy1_ParamLimits

0xa566,	// (0x0000a566) aid_size_touch_slider_mark_copy1

0xa57a,	// (0x0000a57a) slider_set_pane_g1_copy1

0xa583,	// (0x0000a583) slider_set_pane_g2_copy1

0x4d74,	// (0x00004d74) slider_set_pane_g3_copy1_ParamLimits

0x4d74,	// (0x00004d74) slider_set_pane_g3_copy1

0x4d88,	// (0x00004d88) slider_set_pane_g4_copy1_ParamLimits

0x4d88,	// (0x00004d88) slider_set_pane_g4_copy1

0x4da0,	// (0x00004da0) slider_set_pane_g5_copy1_ParamLimits

0x4da0,	// (0x00004da0) slider_set_pane_g5_copy1

0x4d74,	// (0x00004d74) slider_set_pane_g6_copy1_ParamLimits

0x4d74,	// (0x00004d74) slider_set_pane_g6_copy1

0xa58b,	// (0x0000a58b) slider_set_pane_g7_copy1_ParamLimits

0xa58b,	// (0x0000a58b) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa5a1,	// (0x0000a5a1) setting_slider_graphic_pane_g1_copy1

0xf1fd,	// (0x0000f1fd) setting_slider_graphic_pane_t1_copy1

0xf20d,	// (0x0000f20d) setting_slider_graphic_pane_t2_copy1

0xf21d,	// (0x0000f21d) slider_set_pane_cp_copy1

0xa5da,	// (0x0000a5da) input_focus_pane_cp1_copy1

0xa5e3,	// (0x0000a5e3) list_set_text_pane_copy1

0xa5eb,	// (0x0000a5eb) setting_text_pane_g1_copy1

0xa5f4,	// (0x0000a5f4) set_text_pane_t1_copy1

0xa5da,	// (0x0000a5da) input_focus_pane_cp2_copy1

0xa5eb,	// (0x0000a5eb) setting_code_pane_g1_copy1

0xf225,	// (0x0000f225) setting_code_pane_t1_copy1

0x574d,	// (0x0000574d) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc107,	// (0x0000c107) list_set_graphic_pane_g1_copy1_ParamLimits

0xc107,	// (0x0000c107) list_set_graphic_pane_g1_copy1

0xf233,	// (0x0000f233) list_set_graphic_pane_g2_copy1

0xc11f,	// (0x0000c11f) list_set_graphic_pane_t1_copy1_ParamLimits

0xc11f,	// (0x0000c11f) list_set_graphic_pane_t1_copy1

0x6591,	// (0x00006591) rs_clock_indi_pane_g1

0xa63a,	// (0x0000a63a) rs_clock_indi_pane_t1

0xa648,	// (0x0000a648) rs_indi_pane

0xa650,	// (0x0000a650) rs_indi_pane_g1

0xa659,	// (0x0000a659) rs_indi_pane_g2

0xa662,	// (0x0000a662) rs_indi_pane_g3

0x0002,

0xb431,	// (0x0000b431) rs_indi_pane_g

0x2563,	// (0x00002563) bg_popup_preview_window_pane_cp03

0xa66b,	// (0x0000a66b) popup_fep_tooltip_window_t1

0x77ae,	// (0x000077ae) popup_note2_window_g2_ParamLimits

0x77ae,	// (0x000077ae) popup_note2_window_g2

0x0001,

0xb1ca,	// (0x0000b1ca) popup_note2_window_g_ParamLimits

0xb1ca,	// (0x0000b1ca) popup_note2_window_g

0x7daa,	// (0x00007daa) bg_popup_sub_pane_cp11_ParamLimits

0x7db7,	// (0x00007db7) cell_ai3_links_pane_g1_ParamLimits

0x7dce,	// (0x00007dce) cell_ai3_links_pane_t1

0xa5f4,	// (0x0000a5f4) set_text_pane_t1_copy1_ParamLimits

0x2480,	// (0x00002480) cell_graphic_popup_pane_cp2_ParamLimits

0x2480,	// (0x00002480) cell_graphic_popup_pane_cp2

0xa679,	// (0x0000a679) cell_graphic_popup_pane_g1_cp2

0x0b49,	// (0x00000b49) cell_graphic_popup_pane_g2_cp2

0xa681,	// (0x0000a681) cell_graphic_popup_pane_g3_cp2

0xa689,	// (0x0000a689) cell_graphic_popup_pane_t2_cp2

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp3_cp2

0x19d0,	// (0x000019d0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1349,	// (0x00001349) main_tmo_pane_ParamLimits

0xdde4,	// (0x0000dde4) popup_tmo_big_image_note_window

0x9b34,	// (0x00009b34) cell_ai5_widget_list_pane

0x9b3c,	// (0x00009b3c) cell_ai5_widget_lrg_icon_pane

0xf01d,	// (0x0000f01d) tmo_note_info_pane_t1_ParamLimits

0xf032,	// (0x0000f032) tmo_note_info_pane_t2_ParamLimits

0xf04b,	// (0x0000f04b) tmo_note_info_pane_t3_ParamLimits

0xa225,	// (0x0000a225) tmo_note_info_pane_t4_ParamLimits

0xa237,	// (0x0000a237) tmo_note_info_pane_t5_ParamLimits

0xf4d7,	// (0x0000f4d7) tmo_note_info_pane_t_ParamLimits

0xf060,	// (0x0000f060) settings_container_pane_ParamLimits

0xa5d2,	// (0x0000a5d2) indicator_popup_pane_cp5

0xa5d2,	// (0x0000a5d2) indicator_popup_pane_cp6

0x574d,	// (0x0000574d) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa697,	// (0x0000a697) popup_tmo_big_image_note_window_g1

0xa6a0,	// (0x0000a6a0) popup_tmo_big_image_note_window_t1

0xa6b0,	// (0x0000a6b0) popup_tmo_big_image_note_window_t2

0xa6c0,	// (0x0000a6c0) popup_tmo_big_image_note_window_t3

0x0002,

0xb438,	// (0x0000b438) popup_tmo_big_image_note_window_t

0x6591,	// (0x00006591) cell_ai5_widget_lrg_icon_pane_g1

0xa6d0,	// (0x0000a6d0) cell_ai5_widget_lrg_icon_pane_t1

0xa6de,	// (0x0000a6de) cell_ai5_widget_list_row_pane_ParamLimits

0xa6de,	// (0x0000a6de) cell_ai5_widget_list_row_pane

0xa6f5,	// (0x0000a6f5) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6f5,	// (0x0000a6f5) cell_ai5_widget_list_row_pane_g1

0xa702,	// (0x0000a702) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa702,	// (0x0000a702) cell_ai5_widget_list_row_pane_t1

0xa730,	// (0x0000a730) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa730,	// (0x0000a730) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb43f,	// (0x0000b43f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb43f,	// (0x0000b43f) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa774,	// (0x0000a774) popup_fep_char_pre_window

0xa77c,	// (0x0000a77c) popup_fep_ituss_window

0xa79d,	// (0x0000a79d) popup_fep_vkbss_window

0xa7bc,	// (0x0000a7bc) grid_vkbss_keypad_pane_ParamLimits

0xa7bc,	// (0x0000a7bc) grid_vkbss_keypad_pane

0xa7cc,	// (0x0000a7cc) ituss_keypad_pane

0xa7e7,	// (0x0000a7e7) aid_vkbss_key_offset_ParamLimits

0xa7e7,	// (0x0000a7e7) aid_vkbss_key_offset

0xa7f3,	// (0x0000a7f3) cell_vkbss_key_pane_ParamLimits

0xa7f3,	// (0x0000a7f3) cell_vkbss_key_pane

0x33d4,	// (0x000033d4) bg_cell_vkbss_key_g1_ParamLimits

0x33d4,	// (0x000033d4) bg_cell_vkbss_key_g1

0xa809,	// (0x0000a809) cell_vkbss_key_3p_pane_ParamLimits

0xa809,	// (0x0000a809) cell_vkbss_key_3p_pane

0xa823,	// (0x0000a823) cell_vkbss_key_g1_ParamLimits

0xa823,	// (0x0000a823) cell_vkbss_key_g1

0xa83d,	// (0x0000a83d) cell_vkbss_key_t1_ParamLimits

0xa83d,	// (0x0000a83d) cell_vkbss_key_t1

0xa868,	// (0x0000a868) cell_ituss_key_pane_ParamLimits

0xa868,	// (0x0000a868) cell_ituss_key_pane

0xa879,	// (0x0000a879) bg_cell_ituss_key_g1_ParamLimits

0xa879,	// (0x0000a879) bg_cell_ituss_key_g1

0xa885,	// (0x0000a885) cell_ituss_key_pane_g1_ParamLimits

0xa885,	// (0x0000a885) cell_ituss_key_pane_g1

0xa899,	// (0x0000a899) cell_ituss_key_pane_g2_ParamLimits

0xa899,	// (0x0000a899) cell_ituss_key_pane_g2

0x0002,

0xb446,	// (0x0000b446) cell_ituss_key_pane_g_ParamLimits

0xb446,	// (0x0000b446) cell_ituss_key_pane_g

0xa8d7,	// (0x0000a8d7) cell_ituss_key_t1_ParamLimits

0xa8d7,	// (0x0000a8d7) cell_ituss_key_t1

0xa911,	// (0x0000a911) cell_ituss_key_t2_ParamLimits

0xa911,	// (0x0000a911) cell_ituss_key_t2

0xa942,	// (0x0000a942) cell_ituss_key_t3_ParamLimits

0xa942,	// (0x0000a942) cell_ituss_key_t3

0xa911,	// (0x0000a911) cell_ituss_key_t4_ParamLimits

0xa911,	// (0x0000a911) cell_ituss_key_t4

0x0004,

0xb44d,	// (0x0000b44d) cell_ituss_key_t_ParamLimits

0xb44d,	// (0x0000b44d) cell_ituss_key_t

0xa985,	// (0x0000a985) cell_vkbss_key_3p_pane_g1

0xa98d,	// (0x0000a98d) cell_vkbss_key_3p_pane_g2

0xa995,	// (0x0000a995) cell_vkbss_key_3p_pane_g3

0x0002,

0xb458,	// (0x0000b458) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa99d,	// (0x0000a99d) popup_fep_char_pre_window_t1

0xedfe,	// (0x0000edfe) main_ai5_sk_pane

0xa2b1,	// (0x0000a2b1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa2bd,	// (0x0000a2bd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa2d2,	// (0x0000a2d2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa2de,	// (0x0000a2de) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb42a,	// (0x0000b42a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2ea,	// (0x0000a2ea) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1349,	// (0x00001349) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf23b,	// (0x0000f23b) main_ai5_sk_pane_g1

0x3cae,	// (0x00003cae) popup_query_code_window_g1

0xa792,	// (0x0000a792) popup_fep_vkb_icf_pane

0xa7a6,	// (0x0000a7a6) popup_fep_vtchi_icf_pane

0xa9b5,	// (0x0000a9b5) bg_icf_pane

0xa9c1,	// (0x0000a9c1) list_vkb_icf_pane

0xa9cd,	// (0x0000a9cd) bg_icf_pane_cp01

0xa9e0,	// (0x0000a9e0) vtchi_icf_list_pane

0xa9f0,	// (0x0000a9f0) list_vkb_icf_pane_t1_ParamLimits

0xa9f0,	// (0x0000a9f0) list_vkb_icf_pane_t1

0xaa08,	// (0x0000aa08) vtchi_icf_list_pane_t1_ParamLimits

0xaa08,	// (0x0000aa08) vtchi_icf_list_pane_t1

0xa77c,	// (0x0000a77c) popup_fep_ituss_window_ParamLimits

0xa7a6,	// (0x0000a7a6) popup_fep_vtchi_icf_pane_ParamLimits

0xa7cc,	// (0x0000a7cc) ituss_keypad_pane_ParamLimits

0xa7db,	// (0x0000a7db) ituss_sks_pane

0xa9b5,	// (0x0000a9b5) bg_icf_pane_ParamLimits

0xa758,	// (0x0000a758) icf_edit_indi_pane_ParamLimits

0xa758,	// (0x0000a758) icf_edit_indi_pane

0xa9c1,	// (0x0000a9c1) list_vkb_icf_pane_ParamLimits

0xa9cd,	// (0x0000a9cd) bg_icf_pane_cp01_ParamLimits

0xa767,	// (0x0000a767) icf_edit_indi_pane_cp01_ParamLimits

0xa767,	// (0x0000a767) icf_edit_indi_pane_cp01

0xa9e8,	// (0x0000a9e8) vtchi_query_pane

0x6a13,	// (0x00006a13) icf_edit_indi_pane_g1_ParamLimits

0x6a13,	// (0x00006a13) icf_edit_indi_pane_g1

0xaa94,	// (0x0000aa94) icf_edit_indi_pane_g2_ParamLimits

0xaa94,	// (0x0000aa94) icf_edit_indi_pane_g2

0x0001,

0xb470,	// (0x0000b470) icf_edit_indi_pane_g_ParamLimits

0xb470,	// (0x0000b470) icf_edit_indi_pane_g

0xaaa3,	// (0x0000aaa3) icf_edit_indi_pane_t1

0xaa2a,	// (0x0000aa2a) bg_input_focus_pane_cp042

0x0d2d,	// (0x00000d2d) vtchi_button_pane

0xaa33,	// (0x0000aa33) vtchi_query_pane_t1

0xaa41,	// (0x0000aa41) vtchi_query_pane_t2

0xaa4f,	// (0x0000aa4f) vtchi_query_pane_t3

0x0002,

0xb45f,	// (0x0000b45f) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xaa5d,	// (0x0000aa5d) vtchi_button_pane_g1

0xaa65,	// (0x0000aa65) ituss_sks_pane_g1

0xaa70,	// (0x0000aa70) ituss_sks_pane_g2

0x0001,

0xb466,	// (0x0000b466) ituss_sks_pane_g

0xaa78,	// (0x0000aa78) ituss_sks_pane_t1

0xaa86,	// (0x0000aa86) ituss_sks_pane_t2

0x0001,

0xb46b,	// (0x0000b46b) ituss_sks_pane_t

0x5f64,	// (0x00005f64) indicator_nsta_pane_cp_g1

0x5f6d,	// (0x00005f6d) indicator_nsta_pane_cp_g2

0x5f75,	// (0x00005f75) indicator_nsta_pane_cp_g3

0x5f7d,	// (0x00005f7d) indicator_nsta_pane_cp_g4

0x5f85,	// (0x00005f85) indicator_nsta_pane_cp_g5

0x5f85,	// (0x00005f85) indicator_nsta_pane_cp_g6

0x0005,

0xb014,	// (0x0000b014) indicator_nsta_pane_cp_g

0xeb9c,	// (0x0000eb9c) cell_graphic2_pane_t2_ParamLimits

0xeb9c,	// (0x0000eb9c) cell_graphic2_pane_t2

0x0001,

0xf4a2,	// (0x0000f4a2) cell_graphic2_pane_t_ParamLimits

0xf4a2,	// (0x0000f4a2) cell_graphic2_pane_t

0xebcf,	// (0x0000ebcf) cell_graphic2_control_pane_t1

0xc05b,	// (0x0000c05b) signal_pane_g3_ParamLimits

0xc05b,	// (0x0000c05b) signal_pane_g3

0xc06f,	// (0x0000c06f) signal_pane_g4_ParamLimits

0xc06f,	// (0x0000c06f) signal_pane_g4

0xa742,	// (0x0000a742) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa742,	// (0x0000a742) cell_ai5_widget_list_row_pane_t3

0xa8c5,	// (0x0000a8c5) cell_ituss_key_pane_t1_ParamLimits

0xa8c5,	// (0x0000a8c5) cell_ituss_key_pane_t1

0x38a7,	// (0x000038a7) form_field_data_wide_pane_vc_t2_ParamLimits

0x38a7,	// (0x000038a7) form_field_data_wide_pane_vc_t2

0x38bb,	// (0x000038bb) form_field_data_wide_pane_vc_t3_ParamLimits

0x38bb,	// (0x000038bb) form_field_data_wide_pane_vc_t3

0x0002,

0xad5b,	// (0x0000ad5b) form_field_data_wide_pane_vc_t_ParamLimits

0xad5b,	// (0x0000ad5b) form_field_data_wide_pane_vc_t

0x5c30,	// (0x00005c30) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c30,	// (0x00005c30) form_field_slider_wide_pane_vc_t3

0x5d0a,	// (0x00005d0a) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d0a,	// (0x00005d0a) form_field_popup_wide_pane_vc_t2

0x5d21,	// (0x00005d21) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d21,	// (0x00005d21) form_field_popup_wide_pane_vc_t3

0x0002,

0xb003,	// (0x0000b003) form_field_popup_wide_pane_vc_t_ParamLimits

0xb003,	// (0x0000b003) form_field_popup_wide_pane_vc_t

0xee9c,	// (0x0000ee9c) aid_fshwr2_btn_pane_ParamLimits

0xeead,	// (0x0000eead) aid_fshwr2_syb_pane_ParamLimits

0xeebe,	// (0x0000eebe) aid_fshwr2_txt_pane_ParamLimits

0x1349,	// (0x00001349) fshwr2_bg_pane_ParamLimits

0xeeca,	// (0x0000eeca) fshwr2_func_candi_pane_ParamLimits

0xeee9,	// (0x0000eee9) fshwr2_hwr_syb_pane_ParamLimits

0xef04,	// (0x0000ef04) fshwr2_icf_pane_ParamLimits

0x5ba4,	// (0x00005ba4) list_double_graphic_pane_vc_g4_ParamLimits

0x5ba4,	// (0x00005ba4) list_double_graphic_pane_vc_g4

0xa8b9,	// (0x0000a8b9) cell_ituss_key_pane_g3_ParamLimits

0xa8b9,	// (0x0000a8b9) cell_ituss_key_pane_g3

0xa973,	// (0x0000a973) cell_ituss_key_t5_ParamLimits

0xa973,	// (0x0000a973) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

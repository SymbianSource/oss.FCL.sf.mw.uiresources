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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005b386 };

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
0x9bf3,	// (0x00064f79) Screen

0x9bff,	// (0x00064f85) application_window_ParamLimits

0x9bff,	// (0x00064f85) application_window

0x5d61,	// (0x000610e7) screen_g1

0x9c37,	// (0x00064fbd) area_bottom_pane_ParamLimits

0x9c37,	// (0x00064fbd) area_bottom_pane

0xe677,	// (0x000699fd) area_top_pane_ParamLimits

0xe677,	// (0x000699fd) area_top_pane

0xe715,	// (0x00069a9b) main_pane_ParamLimits

0xe715,	// (0x00069a9b) main_pane

0x5d6b,	// (0x000610f1) misc_graphics

0xb6d1,	// (0x00066a57) battery_pane_ParamLimits

0xb6d1,	// (0x00066a57) battery_pane

0x2bc5,	// (0x0005df4b) bg_status_flat_pane_g8

0x2bcd,	// (0x0005df53) bg_status_flat_pane_g9

0x1fcf,	// (0x0005d355) context_pane_ParamLimits

0x1fcf,	// (0x0005d355) context_pane

0xb848,	// (0x00066bce) navi_pane_ParamLimits

0xb848,	// (0x00066bce) navi_pane

0xb8d2,	// (0x00066c58) signal_pane_ParamLimits

0xb8d2,	// (0x00066c58) signal_pane

0x0008,

0xf879,	// (0x0006abff) bg_status_flat_pane_g

0xb962,	// (0x00066ce8) status_pane_g1_ParamLimits

0xb962,	// (0x00066ce8) status_pane_g1

0xb978,	// (0x00066cfe) status_pane_g2_ParamLimits

0xb978,	// (0x00066cfe) status_pane_g2

0x2210,	// (0x0005d596) status_pane_g3_ParamLimits

0x2210,	// (0x0005d596) status_pane_g3

0x0004,

0xf7a5,	// (0x0006ab2b) status_pane_g_ParamLimits

0xf7a5,	// (0x0006ab2b) status_pane_g

0xb984,	// (0x00066d0a) title_pane_ParamLimits

0xb984,	// (0x00066d0a) title_pane

0xb9e7,	// (0x00066d6d) uni_indicator_pane_ParamLimits

0xb9e7,	// (0x00066d6d) uni_indicator_pane

0x0102,	// (0x0005b488) bg_list_pane_ParamLimits

0x0102,	// (0x0005b488) bg_list_pane

0xaef1,	// (0x00066277) find_pane

0xaef9,	// (0x0006627f) listscroll_app_pane_ParamLimits

0xaef9,	// (0x0006627f) listscroll_app_pane

0x0136,	// (0x0005b4bc) listscroll_form_pane

0xaf09,	// (0x0006628f) listscroll_gen_pane_ParamLimits

0xaf09,	// (0x0006628f) listscroll_gen_pane

0x0152,	// (0x0005b4d8) listscroll_set_pane

0x3764,	// (0x0005eaea) main_idle_act_pane

0xe9a8,	// (0x00069d2e) main_idle_trad_pane

0xe9a8,	// (0x00069d2e) main_list_empty_pane

0x016c,	// (0x0005b4f2) main_midp_pane

0x0178,	// (0x0005b4fe) main_pane_g1_ParamLimits

0x0178,	// (0x0005b4fe) main_pane_g1

0xaf2b,	// (0x000662b1) popup_ai_message_window_ParamLimits

0xaf2b,	// (0x000662b1) popup_ai_message_window

0xafcb,	// (0x00066351) popup_fep_china_uni_window_ParamLimits

0xafcb,	// (0x00066351) popup_fep_china_uni_window

0x1988,	// (0x0005cd0e) popup_fep_japan_candidate_window_ParamLimits

0x1988,	// (0x0005cd0e) popup_fep_japan_candidate_window

0x19b2,	// (0x0005cd38) popup_fep_japan_predictive_window_ParamLimits

0x19b2,	// (0x0005cd38) popup_fep_japan_predictive_window

0xb02b,	// (0x000663b1) popup_find_window

0xb048,	// (0x000663ce) popup_grid_graphic_window_ParamLimits

0xb048,	// (0x000663ce) popup_grid_graphic_window

0x1a23,	// (0x0005cda9) popup_large_graphic_colour_window

0xb0ec,	// (0x00066472) popup_menu_window_ParamLimits

0xb0ec,	// (0x00066472) popup_menu_window

0xb2dc,	// (0x00066662) popup_note_image_window

0xb29c,	// (0x00066622) popup_note_wait_window_ParamLimits

0xb29c,	// (0x00066622) popup_note_wait_window

0xb2f4,	// (0x0006667a) popup_note_window_ParamLimits

0xb2f4,	// (0x0006667a) popup_note_window

0xb3a2,	// (0x00066728) popup_query_code_window_ParamLimits

0xb3a2,	// (0x00066728) popup_query_code_window

0x1c8f,	// (0x0005d015) popup_query_data_code_window_ParamLimits

0x1c8f,	// (0x0005d015) popup_query_data_code_window

0xb3e2,	// (0x00066768) popup_query_data_window_ParamLimits

0xb3e2,	// (0x00066768) popup_query_data_window

0xb476,	// (0x000667fc) popup_query_sat_info_window_ParamLimits

0xb476,	// (0x000667fc) popup_query_sat_info_window

0xb521,	// (0x000668a7) popup_snote_single_graphic_window_ParamLimits

0xb521,	// (0x000668a7) popup_snote_single_graphic_window

0xb521,	// (0x000668a7) popup_snote_single_text_window_ParamLimits

0xb521,	// (0x000668a7) popup_snote_single_text_window

0x1d2a,	// (0x0005d0b0) popup_sub_window_general

0x1e70,	// (0x0005d1f6) popup_window_general_ParamLimits

0x1e70,	// (0x0005d1f6) popup_window_general

0x1e89,	// (0x0005d20f) power_save_pane

0xad5f,	// (0x000660e5) control_pane_g1_ParamLimits

0xad5f,	// (0x000660e5) control_pane_g1

0xad88,	// (0x0006610e) control_pane_g2_ParamLimits

0xad88,	// (0x0006610e) control_pane_g2

0xeafd,	// (0x00069e83) control_pane_g3_ParamLimits

0xeafd,	// (0x00069e83) control_pane_g3

0x0007,

0xf78d,	// (0x0006ab13) control_pane_g_ParamLimits

0xf78d,	// (0x0006ab13) control_pane_g

0xadea,	// (0x00066170) control_pane_t1_ParamLimits

0xadea,	// (0x00066170) control_pane_t1

0xae48,	// (0x000661ce) control_pane_t2_ParamLimits

0xae48,	// (0x000661ce) control_pane_t2

0x0002,

0xf79e,	// (0x0006ab24) control_pane_t_ParamLimits

0xf79e,	// (0x0006ab24) control_pane_t

0xacb8,	// (0x0006603e) navi_navi_volume_pane_cp1

0xacc0,	// (0x00066046) status_small_icon_pane

0xeac9,	// (0x00069e4f) status_small_pane_g1_ParamLimits

0xeac9,	// (0x00069e4f) status_small_pane_g1

0xacc8,	// (0x0006604e) status_small_pane_g2_ParamLimits

0xacc8,	// (0x0006604e) status_small_pane_g2

0xacd4,	// (0x0006605a) status_small_pane_g3_ParamLimits

0xacd4,	// (0x0006605a) status_small_pane_g3

0xace0,	// (0x00066066) status_small_pane_g4_ParamLimits

0xace0,	// (0x00066066) status_small_pane_g4

0xacec,	// (0x00066072) status_small_pane_g5_ParamLimits

0xacec,	// (0x00066072) status_small_pane_g5

0xacfa,	// (0x00066080) status_small_pane_g6_ParamLimits

0xacfa,	// (0x00066080) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006ab02) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006ab02) status_small_pane_g

0xad29,	// (0x000660af) status_small_pane_t1

0xad4b,	// (0x000660d1) status_small_wait_pane_ParamLimits

0xad4b,	// (0x000660d1) status_small_wait_pane

0xa9f2,	// (0x00065d78) aid_levels_signal_ParamLimits

0xa9f2,	// (0x00065d78) aid_levels_signal

0xaa0a,	// (0x00065d90) signal_pane_g1_ParamLimits

0xaa0a,	// (0x00065d90) signal_pane_g1

0xaa25,	// (0x00065dab) signal_pane_g2_ParamLimits

0xaa25,	// (0x00065dab) signal_pane_g2

0x0003,

0xf70d,	// (0x0006aa93) signal_pane_g_ParamLimits

0xf70d,	// (0x0006aa93) signal_pane_g

0x8ed5,	// (0x0006425b) context_pane_g1

0x9e23,	// (0x000651a9) title_pane_g1

0x9e4e,	// (0x000651d4) title_pane_t1

0x5d8d,	// (0x00061113) title_pane_t2

0x5db3,	// (0x00061139) title_pane_t3

0x0002,

0xf557,	// (0x0006a8dd) title_pane_t

0xba0f,	// (0x00066d95) aid_levels_battery_ParamLimits

0xba0f,	// (0x00066d95) aid_levels_battery

0xba2b,	// (0x00066db1) battery_pane_g1_ParamLimits

0xba2b,	// (0x00066db1) battery_pane_g1

0xba48,	// (0x00066dce) battery_pane_g2_ParamLimits

0xba48,	// (0x00066dce) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006ab36) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006ab36) battery_pane_g

0xc7f4,	// (0x00067b7a) uni_indicator_pane_g1

0xc80a,	// (0x00067b90) uni_indicator_pane_g2

0xc820,	// (0x00067ba6) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0006aca7) uni_indicator_pane_g

0x9183,	// (0x00064509) navi_icon_pane_ParamLimits

0x9183,	// (0x00064509) navi_icon_pane

0x9107,	// (0x0006448d) navi_midp_pane

0x919f,	// (0x00064525) navi_navi_pane

0x91a9,	// (0x0006452f) navi_text_pane_ParamLimits

0x91a9,	// (0x0006452f) navi_text_pane

0x5d61,	// (0x000610e7) status_small_wait_pane_g1

0x60ae,	// (0x00061434) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0006aca2) status_small_wait_pane_g

0xc75b,	// (0x00067ae1) navi_navi_icon_text_pane

0xc763,	// (0x00067ae9) navi_navi_pane_g1_ParamLimits

0xc763,	// (0x00067ae9) navi_navi_pane_g1

0xc775,	// (0x00067afb) navi_navi_pane_g2_ParamLimits

0xc775,	// (0x00067afb) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0006ac70) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0006ac70) navi_navi_pane_g

0x324e,	// (0x0005e5d4) navi_navi_tabs_pane

0xc787,	// (0x00067b0d) navi_navi_text_pane

0xc75b,	// (0x00067ae1) navi_navi_volume_pane

0xc749,	// (0x00067acf) navi_text_pane_t1

0xc73d,	// (0x00067ac3) navi_icon_pane_g1

0x3145,	// (0x0005e4cb) navi_navi_text_pane_t1

0xbca2,	// (0x00067028) navi_navi_volume_pane_g1

0xbcaa,	// (0x00067030) volume_small_pane

0xc685,	// (0x00067a0b) navi_navi_icon_text_pane_g1

0xc68d,	// (0x00067a13) navi_navi_icon_text_pane_t1

0x919f,	// (0x00064525) navi_tabs_2_long_pane

0x919f,	// (0x00064525) navi_tabs_2_pane

0x919f,	// (0x00064525) navi_tabs_3_long_pane

0x919f,	// (0x00064525) navi_tabs_3_pane

0x919f,	// (0x00064525) navi_tabs_4_pane

0xbc82,	// (0x00067008) tabs_2_active_pane_ParamLimits

0xbc82,	// (0x00067008) tabs_2_active_pane

0xbc92,	// (0x00067018) tabs_2_passive_pane_ParamLimits

0xbc92,	// (0x00067018) tabs_2_passive_pane

0xbc50,	// (0x00066fd6) tabs_3_active_pane_ParamLimits

0xbc50,	// (0x00066fd6) tabs_3_active_pane

0xbc60,	// (0x00066fe6) tabs_3_passive_pane_ParamLimits

0xbc60,	// (0x00066fe6) tabs_3_passive_pane

0xbc71,	// (0x00066ff7) tabs_3_passive_pane_cp_ParamLimits

0xbc71,	// (0x00066ff7) tabs_3_passive_pane_cp

0xbc0c,	// (0x00066f92) tabs_4_active_pane_ParamLimits

0xbc0c,	// (0x00066f92) tabs_4_active_pane

0xbc1d,	// (0x00066fa3) tabs_4_passive_pane_ParamLimits

0xbc1d,	// (0x00066fa3) tabs_4_passive_pane

0xbc2e,	// (0x00066fb4) tabs_4_passive_pane_cp_ParamLimits

0xbc2e,	// (0x00066fb4) tabs_4_passive_pane_cp

0xbc3f,	// (0x00066fc5) tabs_4_passive_pane_cp2_ParamLimits

0xbc3f,	// (0x00066fc5) tabs_4_passive_pane_cp2

0xbbe8,	// (0x00066f6e) tabs_2_long_active_pane_ParamLimits

0xbbe8,	// (0x00066f6e) tabs_2_long_active_pane

0xbbfa,	// (0x00066f80) tabs_2_long_passive_pane_ParamLimits

0xbbfa,	// (0x00066f80) tabs_2_long_passive_pane

0xbb9d,	// (0x00066f23) tabs_3_long_active_pane_ParamLimits

0xbb9d,	// (0x00066f23) tabs_3_long_active_pane

0xbbb6,	// (0x00066f3c) tabs_3_long_passive_pane_ParamLimits

0xbbb6,	// (0x00066f3c) tabs_3_long_passive_pane

0xbbcf,	// (0x00066f55) tabs_3_long_passive_pane_cp_ParamLimits

0xbbcf,	// (0x00066f55) tabs_3_long_passive_pane_cp

0x0426,	// (0x0005b7ac) volume_small_pane_g1

0xbb4c,	// (0x00066ed2) volume_small_pane_g2

0xbb55,	// (0x00066edb) volume_small_pane_g3

0xbb5e,	// (0x00066ee4) volume_small_pane_g4

0xbb67,	// (0x00066eed) volume_small_pane_g5

0xbb70,	// (0x00066ef6) volume_small_pane_g6

0xbb79,	// (0x00066eff) volume_small_pane_g7

0xbb82,	// (0x00066f08) volume_small_pane_g8

0xbb8b,	// (0x00066f11) volume_small_pane_g9

0xbb94,	// (0x00066f1a) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006ac3c) volume_small_pane_g

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp2_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp2

0x9eda,	// (0x00065260) tabs_3_active_pane_g1

0x9ee2,	// (0x00065268) tabs_3_active_pane_t1

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp2_ParamLimits

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp2

0x9eda,	// (0x00065260) tabs_3_passive_pane_g1

0x9ee2,	// (0x00065268) tabs_3_passive_pane_t1

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp3_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp3

0x9ef4,	// (0x0006527a) tabs_4_active_pane_g1

0x9efc,	// (0x00065282) tabs_4_active_pane_t1

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp3_ParamLimits

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp3

0x9ef4,	// (0x0006527a) tabs_4_1_passive_pane_g1

0x9efc,	// (0x00065282) tabs_4_1_passive_pane_t1

0x016c,	// (0x0005b4f2) list_highlight_pane_cp2

0xc8b5,	// (0x00067c3b) list_set_pane_ParamLimits

0xc8b5,	// (0x00067c3b) list_set_pane

0xc97d,	// (0x00067d03) main_pane_set_t1_ParamLimits

0xc97d,	// (0x00067d03) main_pane_set_t1

0xc99d,	// (0x00067d23) main_pane_set_t2_ParamLimits

0xc99d,	// (0x00067d23) main_pane_set_t2

0xc9b1,	// (0x00067d37) main_pane_set_t3_ParamLimits

0xc9b1,	// (0x00067d37) main_pane_set_t3

0xc9c5,	// (0x00067d4b) main_pane_set_t4_ParamLimits

0xc9c5,	// (0x00067d4b) main_pane_set_t4

0x0003,

0xf986,	// (0x0006ad0c) main_pane_set_t_ParamLimits

0xf986,	// (0x0006ad0c) main_pane_set_t

0xc9d9,	// (0x00067d5f) setting_code_pane

0x38b8,	// (0x0005ec3e) setting_slider_graphic_pane

0x38b8,	// (0x0005ec3e) setting_slider_pane

0x38b8,	// (0x0005ec3e) setting_text_pane

0x38b8,	// (0x0005ec3e) setting_volume_pane

0xe824,	// (0x00069baa) volume_set_pane

0x5dc5,	// (0x0006114b) bg_set_opt_pane_cp

0xe82e,	// (0x00069bb4) setting_slider_pane_t1

0xe847,	// (0x00069bcd) setting_slider_pane_t2

0xe861,	// (0x00069be7) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006a8e4) setting_slider_pane_t

0xe879,	// (0x00069bff) slider_set_pane

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp2

0x5dd3,	// (0x00061159) setting_slider_graphic_pane_g1

0xe88f,	// (0x00069c15) setting_slider_graphic_pane_t1

0xe89f,	// (0x00069c25) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006a8eb) setting_slider_graphic_pane_t

0xe8af,	// (0x00069c35) slider_set_pane_cp

0x5d6b,	// (0x000610f1) input_focus_pane_cp1

0x374b,	// (0x0005ead1) list_set_text_pane

0x5d61,	// (0x000610e7) setting_text_pane_g1

0x5d6b,	// (0x000610f1) input_focus_pane_cp2

0x5d61,	// (0x000610e7) setting_code_pane_g1

0x5ddc,	// (0x00061162) setting_code_pane_t1

0xc476,	// (0x000677fc) set_text_pane_t1_ParamLimits

0xc476,	// (0x000677fc) set_text_pane_t1

0x89f7,	// (0x00063d7d) set_opt_bg_pane_g1

0x89ff,	// (0x00063d85) set_opt_bg_pane_g2

0x3723,	// (0x0005eaa9) set_opt_bg_pane_g3

0x8a0f,	// (0x00063d95) set_opt_bg_pane_g4

0x8a17,	// (0x00063d9d) set_opt_bg_pane_g5

0x8a1f,	// (0x00063da5) set_opt_bg_pane_g6

0x372d,	// (0x0005eab3) set_opt_bg_pane_g7

0x3737,	// (0x0005eabd) set_opt_bg_pane_g8

0x3741,	// (0x0005eac7) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0006acf9) set_opt_bg_pane_g

0x3716,	// (0x0005ea9c) slider_set_pane_g1

0x0632,	// (0x0005b9b8) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006acea) slider_set_pane_g

0x0592,	// (0x0005b918) volume_set_pane_g1

0x059c,	// (0x0005b922) volume_set_pane_g2

0x05a6,	// (0x0005b92c) volume_set_pane_g3

0x05b0,	// (0x0005b936) volume_set_pane_g4

0x05ba,	// (0x0005b940) volume_set_pane_g5

0x05c4,	// (0x0005b94a) volume_set_pane_g6

0x05ce,	// (0x0005b954) volume_set_pane_g7

0x05d8,	// (0x0005b95e) volume_set_pane_g8

0x05e2,	// (0x0005b968) volume_set_pane_g9

0x05ec,	// (0x0005b972) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0006acc2) volume_set_pane_g

0x9f0e,	// (0x00065294) indicator_pane_ParamLimits

0x9f0e,	// (0x00065294) indicator_pane

0x9f3a,	// (0x000652c0) main_idle_pane_g2_ParamLimits

0x9f3a,	// (0x000652c0) main_idle_pane_g2

0x9f72,	// (0x000652f8) main_pane_idle_g1_ParamLimits

0x9f72,	// (0x000652f8) main_pane_idle_g1

0x5dea,	// (0x00061170) popup_clock_digital_analogue_window_ParamLimits

0x5dea,	// (0x00061170) popup_clock_digital_analogue_window

0x9fa0,	// (0x00065326) soft_indicator_pane_ParamLimits

0x9fa0,	// (0x00065326) soft_indicator_pane

0x9fbc,	// (0x00065342) wallpaper_pane_ParamLimits

0x9fbc,	// (0x00065342) wallpaper_pane

0x5d61,	// (0x000610e7) wallpaper_pane_g1

0x9fce,	// (0x00065354) indicator_pane_g1_ParamLimits

0x9fce,	// (0x00065354) indicator_pane_g1

0x3d21,	// (0x0005f0a7) navi_navi_icon_text_pane_srt_g1

0x5e18,	// (0x0006119e) soft_indicator_pane_t1

0x5e32,	// (0x000611b8) aid_ps_area_pane

0x9fe7,	// (0x0006536d) aid_ps_clock_pane

0x5e43,	// (0x000611c9) aid_ps_indicator_pane

0x5e4f,	// (0x000611d5) indicator_ps_pane_ParamLimits

0x5e4f,	// (0x000611d5) indicator_ps_pane

0x5e5e,	// (0x000611e4) power_save_pane_g1_ParamLimits

0x5e5e,	// (0x000611e4) power_save_pane_g1

0x5e6a,	// (0x000611f0) power_save_pane_g2_ParamLimits

0x5e6a,	// (0x000611f0) power_save_pane_g2

0xe657,	// (0x000699dd) aid_navinavi_width_pane

0x5e32,	// (0x000611b8) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006a8f0) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006a8f0) power_save_pane_g

0x5e78,	// (0x000611fe) power_save_pane_t1_ParamLimits

0x5e78,	// (0x000611fe) power_save_pane_t1

0x9fe7,	// (0x0006536d) aid_ps_clock_pane_ParamLimits

0x5e43,	// (0x000611c9) aid_ps_indicator_pane_ParamLimits

0x5e8a,	// (0x00061210) power_save_pane_t4_ParamLimits

0x5e8a,	// (0x00061210) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006a8f5) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006a8f5) power_save_pane_t

0x5eb4,	// (0x0006123a) power_save_t3_ParamLimits

0x5eb4,	// (0x0006123a) power_save_t3

0x5e9f,	// (0x00061225) power_save_t2_ParamLimits

0x5e9f,	// (0x00061225) power_save_t2

0x5ec9,	// (0x0006124f) indicator_ps_pane_g1

0x9ff5,	// (0x0006537b) ai_gene_pane_ParamLimits

0x9ff5,	// (0x0006537b) ai_gene_pane

0xa00c,	// (0x00065392) ai_links_pane_ParamLimits

0xa00c,	// (0x00065392) ai_links_pane

0xa024,	// (0x000653aa) indicator_pane_cp1_ParamLimits

0xa024,	// (0x000653aa) indicator_pane_cp1

0xa033,	// (0x000653b9) main_pane_idle_g1_cp_ParamLimits

0xa033,	// (0x000653b9) main_pane_idle_g1_cp

0x5ed2,	// (0x00061258) popup_ai_links_title_window

0xa04b,	// (0x000653d1) soft_indicator_pane_cp1_ParamLimits

0xa04b,	// (0x000653d1) soft_indicator_pane_cp1

0x34fd,	// (0x0005e883) ai_links_pane_g1

0x3506,	// (0x0005e88c) grid_ai_links_pane

0xc7eb,	// (0x00067b71) ai_gene_pane_1

0x34eb,	// (0x0005e871) ai_gene_pane_2

0x34f4,	// (0x0005e87a) list_highlight_pane_cp4

0xc7c7,	// (0x00067b4d) cell_ai_link_pane_ParamLimits

0xc7c7,	// (0x00067b4d) cell_ai_link_pane

0x34ba,	// (0x0005e840) cell_ai_link_pane_g1

0x60ae,	// (0x00061434) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0006ac9d) cell_ai_link_pane_g

0x5d6b,	// (0x000610f1) grid_highlight_cp2

0x5d6b,	// (0x000610f1) bg_popup_sub_pane_cp1

0x5ee9,	// (0x0006126f) popup_ai_links_title_window_t1

0x3406,	// (0x0005e78c) ai_gene_pane_1_g1_ParamLimits

0x3406,	// (0x0005e78c) ai_gene_pane_1_g1

0x3412,	// (0x0005e798) ai_gene_pane_1_g2_ParamLimits

0x3412,	// (0x0005e798) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0006ac93) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0006ac93) ai_gene_pane_1_g

0x341f,	// (0x0005e7a5) ai_gene_pane_1_t1_ParamLimits

0x341f,	// (0x0005e7a5) ai_gene_pane_1_t1

0x3453,	// (0x0005e7d9) grid_ai_soft_ind_pane

0x33f1,	// (0x0005e777) ai_gene_pane_2_t1_ParamLimits

0x33f1,	// (0x0005e777) ai_gene_pane_2_t1

0xa05f,	// (0x000653e5) main_pane_empty_t1_ParamLimits

0xa05f,	// (0x000653e5) main_pane_empty_t1

0xa077,	// (0x000653fd) main_pane_empty_t2_ParamLimits

0xa077,	// (0x000653fd) main_pane_empty_t2

0xa08c,	// (0x00065412) main_pane_empty_t3_ParamLimits

0xa08c,	// (0x00065412) main_pane_empty_t3

0xa09e,	// (0x00065424) main_pane_empty_t4_ParamLimits

0xa09e,	// (0x00065424) main_pane_empty_t4

0xa0b0,	// (0x00065436) main_pane_empty_t5_ParamLimits

0xa0b0,	// (0x00065436) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006a8fa) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006a8fa) main_pane_empty_t

0x8a48,	// (0x00063dce) bg_popup_window_pane_ParamLimits

0x8a48,	// (0x00063dce) bg_popup_window_pane

0x3153,	// (0x0005e4d9) find_popup_pane_cp2_ParamLimits

0x3153,	// (0x0005e4d9) find_popup_pane_cp2

0x315f,	// (0x0005e4e5) heading_pane_ParamLimits

0x315f,	// (0x0005e4e5) heading_pane

0x5d6b,	// (0x000610f1) bg_popup_sub_pane

0xc6aa,	// (0x00067a30) bg_popup_window_pane_g1_ParamLimits

0xc6aa,	// (0x00067a30) bg_popup_window_pane_g1

0xc6b9,	// (0x00067a3f) bg_popup_window_pane_g2_ParamLimits

0xc6b9,	// (0x00067a3f) bg_popup_window_pane_g2

0xc6c5,	// (0x00067a4b) bg_popup_window_pane_g3_ParamLimits

0xc6c5,	// (0x00067a4b) bg_popup_window_pane_g3

0xc6d1,	// (0x00067a57) bg_popup_window_pane_g4_ParamLimits

0xc6d1,	// (0x00067a57) bg_popup_window_pane_g4

0xc6e0,	// (0x00067a66) bg_popup_window_pane_g5_ParamLimits

0xc6e0,	// (0x00067a66) bg_popup_window_pane_g5

0xc6f0,	// (0x00067a76) bg_popup_window_pane_g6_ParamLimits

0xc6f0,	// (0x00067a76) bg_popup_window_pane_g6

0xc6fc,	// (0x00067a82) bg_popup_window_pane_g7_ParamLimits

0xc6fc,	// (0x00067a82) bg_popup_window_pane_g7

0xc70b,	// (0x00067a91) bg_popup_window_pane_g8_ParamLimits

0xc70b,	// (0x00067a91) bg_popup_window_pane_g8

0xc71a,	// (0x00067aa0) bg_popup_window_pane_g9_ParamLimits

0xc71a,	// (0x00067aa0) bg_popup_window_pane_g9

0x3139,	// (0x0005e4bf) bg_popup_window_pane_g10_ParamLimits

0x3139,	// (0x0005e4bf) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006ac5b) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006ac5b) bg_popup_window_pane_g

0x3062,	// (0x0005e3e8) bg_popup_heading_pane_ParamLimits

0x3062,	// (0x0005e3e8) bg_popup_heading_pane

0x0746,	// (0x0005bacc) tabs_4_passive_pane_cp_srt_ParamLimits

0x0746,	// (0x0005bacc) tabs_4_passive_pane_cp_srt

0x0758,	// (0x0005bade) tabs_4_passive_pane_srt_ParamLimits

0x3076,	// (0x0005e3fc) heading_pane_g2

0x0758,	// (0x0005bade) tabs_4_passive_pane_srt

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp3_srt_ParamLimits

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp3_srt

0x307e,	// (0x0005e404) heading_pane_t1_ParamLimits

0x307e,	// (0x0005e404) heading_pane_t1

0x3095,	// (0x0005e41b) heading_pane_t2_ParamLimits

0x3095,	// (0x0005e41b) heading_pane_t2

0x0001,

0xf8d0,	// (0x0006ac56) heading_pane_t_ParamLimits

0xf8d0,	// (0x0006ac56) heading_pane_t

0x2b8d,	// (0x0005df13) bg_popup_heading_pane_g1

0x2c3c,	// (0x0005dfc2) bg_popup_heading_pane_g2

0x2c46,	// (0x0005dfcc) bg_popup_heading_pane_g3

0x2c50,	// (0x0005dfd6) bg_popup_heading_pane_g4

0x2c5a,	// (0x0005dfe0) bg_popup_heading_pane_g5

0x2c64,	// (0x0005dfea) bg_popup_heading_pane_g6

0x2c6c,	// (0x0005dff2) bg_popup_heading_pane_g7

0x2c74,	// (0x0005dffa) bg_popup_heading_pane_g8

0x2c7e,	// (0x0005e004) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0006ac12) bg_popup_heading_pane_g

0x239b,	// (0x0005d721) bg_popup_sub_pane_g1

0x23ab,	// (0x0005d731) bg_popup_sub_pane_g2

0x23a3,	// (0x0005d729) bg_popup_sub_pane_g3

0x23bb,	// (0x0005d741) bg_popup_sub_pane_g4

0x23b3,	// (0x0005d739) bg_popup_sub_pane_g5

0x23c3,	// (0x0005d749) bg_popup_sub_pane_g6

0x23cb,	// (0x0005d751) bg_popup_sub_pane_g7

0x23db,	// (0x0005d761) bg_popup_sub_pane_g8

0x23d3,	// (0x0005d759) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006abec) bg_popup_sub_pane_g

0x5ef8,	// (0x0006127e) bg_popup_window_pane_cp5_ParamLimits

0x5ef8,	// (0x0006127e) bg_popup_window_pane_cp5

0x5f14,	// (0x0006129a) popup_note_window_g1_ParamLimits

0x5f14,	// (0x0006129a) popup_note_window_g1

0x5f20,	// (0x000612a6) popup_note_window_t1_ParamLimits

0x5f20,	// (0x000612a6) popup_note_window_t1

0x5f36,	// (0x000612bc) popup_note_window_t2_ParamLimits

0x5f36,	// (0x000612bc) popup_note_window_t2

0x5f4c,	// (0x000612d2) popup_note_window_t3_ParamLimits

0x5f4c,	// (0x000612d2) popup_note_window_t3

0x5f62,	// (0x000612e8) popup_note_window_t4_ParamLimits

0x5f62,	// (0x000612e8) popup_note_window_t4

0x5f8a,	// (0x00061310) popup_note_window_t5_ParamLimits

0x5f8a,	// (0x00061310) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006a905) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006a905) popup_note_window_t

0x5fae,	// (0x00061334) bg_popup_window_pane_cp6_ParamLimits

0x5fae,	// (0x00061334) bg_popup_window_pane_cp6

0x2b09,	// (0x0005de8f) popup_note_image_window_g1_ParamLimits

0x2b09,	// (0x0005de8f) popup_note_image_window_g1

0x2b15,	// (0x0005de9b) popup_note_image_window_g2_ParamLimits

0x2b15,	// (0x0005de9b) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0006abe0) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0006abe0) popup_note_image_window_g

0x2b2e,	// (0x0005deb4) popup_note_image_window_t1_ParamLimits

0x2b2e,	// (0x0005deb4) popup_note_image_window_t1

0x2b47,	// (0x0005decd) popup_note_image_window_t2_ParamLimits

0x2b47,	// (0x0005decd) popup_note_image_window_t2

0x2b60,	// (0x0005dee6) popup_note_image_window_t3_ParamLimits

0x2b60,	// (0x0005dee6) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0006abe5) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0006abe5) popup_note_image_window_t

0x29c9,	// (0x0005dd4f) bg_popup_window_pane_cp7_ParamLimits

0x29c9,	// (0x0005dd4f) bg_popup_window_pane_cp7

0x29f9,	// (0x0005dd7f) popup_note_wait_window_g1_ParamLimits

0x29f9,	// (0x0005dd7f) popup_note_wait_window_g1

0x2a05,	// (0x0005dd8b) popup_note_wait_window_g2_ParamLimits

0x2a05,	// (0x0005dd8b) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0006abce) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0006abce) popup_note_wait_window_g

0x2a1d,	// (0x0005dda3) popup_note_wait_window_t1_ParamLimits

0x2a1d,	// (0x0005dda3) popup_note_wait_window_t1

0x2a44,	// (0x0005ddca) popup_note_wait_window_t2_ParamLimits

0x2a44,	// (0x0005ddca) popup_note_wait_window_t2

0x2a62,	// (0x0005dde8) popup_note_wait_window_t3_ParamLimits

0x2a62,	// (0x0005dde8) popup_note_wait_window_t3

0x2a75,	// (0x0005ddfb) popup_note_wait_window_t4_ParamLimits

0x2a75,	// (0x0005ddfb) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0006abd5) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0006abd5) popup_note_wait_window_t

0x2a9a,	// (0x0005de20) wait_bar_pane_ParamLimits

0x2a9a,	// (0x0005de20) wait_bar_pane

0x5d6b,	// (0x000610f1) wait_anim_pane

0x5d6b,	// (0x000610f1) wait_border_pane

0x5d61,	// (0x000610e7) wait_anim_pane_g1

0x5d61,	// (0x000610e7) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006aa8e) wait_anim_pane_g

0x296d,	// (0x0005dcf3) wait_border_pane_g1

0x2978,	// (0x0005dcfe) wait_border_pane_g2

0x2981,	// (0x0005dd07) wait_border_pane_g3

0x0002,

0xf841,	// (0x0006abc7) wait_border_pane_g

0x27d7,	// (0x0005db5d) bg_popup_window_pane_cp16_ParamLimits

0x27d7,	// (0x0005db5d) bg_popup_window_pane_cp16

0x28d7,	// (0x0005dc5d) indicator_popup_pane_cp4_ParamLimits

0x28d7,	// (0x0005dc5d) indicator_popup_pane_cp4

0x28eb,	// (0x0005dc71) popup_query_data_window_t1_ParamLimits

0x28eb,	// (0x0005dc71) popup_query_data_window_t1

0x28fd,	// (0x0005dc83) popup_query_data_window_t2_ParamLimits

0x28fd,	// (0x0005dc83) popup_query_data_window_t2

0x2916,	// (0x0005dc9c) popup_query_data_window_t3_ParamLimits

0x2916,	// (0x0005dc9c) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0006abc0) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0006abc0) popup_query_data_window_t

0x2930,	// (0x0005dcb6) query_popup_data_pane_ParamLimits

0x2930,	// (0x0005dcb6) query_popup_data_pane

0x2944,	// (0x0005dcca) query_popup_data_pane_cp1_ParamLimits

0x2944,	// (0x0005dcca) query_popup_data_pane_cp1

0x27d7,	// (0x0005db5d) bg_popup_window_pane_cp10_ParamLimits

0x27d7,	// (0x0005db5d) bg_popup_window_pane_cp10

0x2809,	// (0x0005db8f) indicator_popup_pane_ParamLimits

0x2809,	// (0x0005db8f) indicator_popup_pane

0x282b,	// (0x0005dbb1) popup_query_code_window_t1_ParamLimits

0x282b,	// (0x0005dbb1) popup_query_code_window_t1

0x2845,	// (0x0005dbcb) popup_query_code_window_t2_ParamLimits

0x2845,	// (0x0005dbcb) popup_query_code_window_t2

0x288e,	// (0x0005dc14) popup_query_code_window_t3_ParamLimits

0x288e,	// (0x0005dc14) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0006abb9) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0006abb9) popup_query_code_window_t

0x28bd,	// (0x0005dc43) query_popup_pane_ParamLimits

0x28bd,	// (0x0005dc43) query_popup_pane

0x5fae,	// (0x00061334) bg_popup_window_pane_cp15_ParamLimits

0x5fae,	// (0x00061334) bg_popup_window_pane_cp15

0x5fce,	// (0x00061354) indicator_popup_pane_cp1_ParamLimits

0x5fce,	// (0x00061354) indicator_popup_pane_cp1

0x5fe1,	// (0x00061367) indicator_popup_pane_cp2_ParamLimits

0x5fe1,	// (0x00061367) indicator_popup_pane_cp2

0x5ffc,	// (0x00061382) popup_query_data_code_window_g1_ParamLimits

0x5ffc,	// (0x00061382) popup_query_data_code_window_g1

0x600f,	// (0x00061395) popup_query_data_code_window_t1_ParamLimits

0x600f,	// (0x00061395) popup_query_data_code_window_t1

0x6021,	// (0x000613a7) popup_query_data_code_window_t2_ParamLimits

0x6021,	// (0x000613a7) popup_query_data_code_window_t2

0x6033,	// (0x000613b9) popup_query_data_code_window_t3_ParamLimits

0x6033,	// (0x000613b9) popup_query_data_code_window_t3

0x6049,	// (0x000613cf) popup_query_data_code_window_t4_ParamLimits

0x6049,	// (0x000613cf) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006a910) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006a910) popup_query_data_code_window_t

0x02fb,	// (0x0005b681) list_single_midp_graphic_pane_g3

0x6063,	// (0x000613e9) query_popup_data_pane_cp2_ParamLimits

0x6076,	// (0x000613fc) query_popup_pane_cp2_ParamLimits

0x6076,	// (0x000613fc) query_popup_pane_cp2

0x5d6b,	// (0x000610f1) bg_popup_window_pane_cp11

0x27cf,	// (0x0005db55) heading_pane_cp5

0x610c,	// (0x00061492) listscroll_popup_info_pane

0x5d6b,	// (0x000610f1) input_focus_pane_cp3

0x6091,	// (0x00061417) query_popup_pane_t1

0x609f,	// (0x00061425) list_popup_info_pane_ParamLimits

0x609f,	// (0x00061425) list_popup_info_pane

0x60ae,	// (0x00061434) listscroll_popup_info_pane_g1

0x60b6,	// (0x0006143c) scroll_pane_cp7

0x60c0,	// (0x00061446) popup_info_list_pane_t1_ParamLimits

0x60c0,	// (0x00061446) popup_info_list_pane_t1

0x60da,	// (0x00061460) popup_info_list_pane_t2_ParamLimits

0x60da,	// (0x00061460) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006a919) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006a919) popup_info_list_pane_t

0x5d6b,	// (0x000610f1) bg_popup_window_pane_cp12

0x3d3b,	// (0x0005f0c1) find_popup_pane

0x5dc5,	// (0x0006114b) bg_popup_window_pane_cp3

0x60f4,	// (0x0006147a) heading_pane_cp3

0x6100,	// (0x00061486) listscroll_popup_graphic_pane

0x5d6b,	// (0x000610f1) bg_popup_window_pane_cp4

0xa112,	// (0x00065498) heading_pane_cp4

0x610c,	// (0x00061492) listscroll_popup_colour_pane

0xa11c,	// (0x000654a2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa11c,	// (0x000654a2) cell_large_graphic_colour_none_popup_pane

0xa130,	// (0x000654b6) grid_large_graphic_colour_popup_pane_ParamLimits

0xa130,	// (0x000654b6) grid_large_graphic_colour_popup_pane

0xa154,	// (0x000654da) listscroll_popup_colour_pane_g1_ParamLimits

0xa154,	// (0x000654da) listscroll_popup_colour_pane_g1

0xa16b,	// (0x000654f1) listscroll_popup_colour_pane_g2_ParamLimits

0xa16b,	// (0x000654f1) listscroll_popup_colour_pane_g2

0xa182,	// (0x00065508) listscroll_popup_colour_pane_g3_ParamLimits

0xa182,	// (0x00065508) listscroll_popup_colour_pane_g3

0xa192,	// (0x00065518) listscroll_popup_colour_pane_g4_ParamLimits

0xa192,	// (0x00065518) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006a91e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006a91e) listscroll_popup_colour_pane_g

0x6114,	// (0x0006149a) scroll_pane_cp6_ParamLimits

0x6114,	// (0x0006149a) scroll_pane_cp6

0xa1a2,	// (0x00065528) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1a2,	// (0x00065528) cell_large_graphic_colour_popup_pane

0x6126,	// (0x000614ac) cell_large_graphic_colour_none_popup_pane_t1

0x5d6b,	// (0x000610f1) grid_highlight_pane_cp5

0x6135,	// (0x000614bb) cell_large_graphic_colour_popup_pane_g1

0x613d,	// (0x000614c3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006a927) cell_large_graphic_colour_popup_pane_g

0x6145,	// (0x000614cb) cell_large_graphic_colour_popup_pane_g2_copy1

0x614e,	// (0x000614d4) grid_highlight_pane_cp4

0x6156,	// (0x000614dc) bg_popup_window_pane_cp8_ParamLimits

0x6156,	// (0x000614dc) bg_popup_window_pane_cp8

0x6171,	// (0x000614f7) popup_snote_single_text_window_g1_ParamLimits

0x6171,	// (0x000614f7) popup_snote_single_text_window_g1

0x6183,	// (0x00061509) popup_snote_single_text_window_t1_ParamLimits

0x6183,	// (0x00061509) popup_snote_single_text_window_t1

0x6196,	// (0x0006151c) popup_snote_single_text_window_t2_ParamLimits

0x6196,	// (0x0006151c) popup_snote_single_text_window_t2

0x61a9,	// (0x0006152f) popup_snote_single_text_window_t3_ParamLimits

0x61a9,	// (0x0006152f) popup_snote_single_text_window_t3

0x61e2,	// (0x00061568) popup_snote_single_text_window_t4_ParamLimits

0x61e2,	// (0x00061568) popup_snote_single_text_window_t4

0x6216,	// (0x0006159c) popup_snote_single_text_window_t5_ParamLimits

0x6216,	// (0x0006159c) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006a92c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006a92c) popup_snote_single_text_window_t

0x6245,	// (0x000615cb) bg_popup_window_pane_cp9_ParamLimits

0x6245,	// (0x000615cb) bg_popup_window_pane_cp9

0x6171,	// (0x000614f7) popup_snote_single_graphic_window_g1_ParamLimits

0x6171,	// (0x000614f7) popup_snote_single_graphic_window_g1

0x6253,	// (0x000615d9) popup_snote_single_graphic_window_g2_ParamLimits

0x6253,	// (0x000615d9) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006a937) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006a937) popup_snote_single_graphic_window_g

0x625f,	// (0x000615e5) popup_snote_single_graphic_window_t1_ParamLimits

0x625f,	// (0x000615e5) popup_snote_single_graphic_window_t1

0x6272,	// (0x000615f8) popup_snote_single_graphic_window_t2_ParamLimits

0x6272,	// (0x000615f8) popup_snote_single_graphic_window_t2

0x6285,	// (0x0006160b) popup_snote_single_graphic_window_t3_ParamLimits

0x6285,	// (0x0006160b) popup_snote_single_graphic_window_t3

0x62be,	// (0x00061644) popup_snote_single_graphic_window_t4_ParamLimits

0x62be,	// (0x00061644) popup_snote_single_graphic_window_t4

0x62f2,	// (0x00061678) popup_snote_single_graphic_window_t5_ParamLimits

0x62f2,	// (0x00061678) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006a93c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006a93c) popup_snote_single_graphic_window_t

0x3c79,	// (0x0005efff) grid_graphic_popup_pane_ParamLimits

0x3c79,	// (0x0005efff) grid_graphic_popup_pane

0x3ca7,	// (0x0005f02d) listscroll_popup_graphic_pane_g1_ParamLimits

0x3ca7,	// (0x0005f02d) listscroll_popup_graphic_pane_g1

0xcaf3,	// (0x00067e79) listscroll_popup_graphic_pane_g2_ParamLimits

0xcaf3,	// (0x00067e79) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0006ad36) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0006ad36) listscroll_popup_graphic_pane_g

0x3ccf,	// (0x0005f055) scroll_pane_cp5

0xcab2,	// (0x00067e38) cell_graphic_popup_pane_ParamLimits

0xcab2,	// (0x00067e38) cell_graphic_popup_pane

0x3c02,	// (0x0005ef88) cell_graphic_popup_pane_g1

0x3c0a,	// (0x0005ef90) cell_graphic_popup_pane_g2

0x6145,	// (0x000614cb) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006ad2f) cell_graphic_popup_pane_g

0x3c13,	// (0x0005ef99) cell_graphic_popup_pane_t2

0x614e,	// (0x000614d4) grid_highlight_pane_cp3

0x6333,	// (0x000616b9) list_gen_pane_ParamLimits

0x6333,	// (0x000616b9) list_gen_pane

0x635b,	// (0x000616e1) scroll_pane

0xca69,	// (0x00067def) bg_list_pane_g1_ParamLimits

0xca69,	// (0x00067def) bg_list_pane_g1

0x3b77,	// (0x0005eefd) bg_list_pane_g2_ParamLimits

0x3b77,	// (0x0005eefd) bg_list_pane_g2

0x3b8c,	// (0x0005ef12) bg_list_pane_g3_ParamLimits

0x3b8c,	// (0x0005ef12) bg_list_pane_g3

0x3ba0,	// (0x0005ef26) bg_list_pane_g4_ParamLimits

0x3ba0,	// (0x0005ef26) bg_list_pane_g4

0xca86,	// (0x00067e0c) bg_list_pane_g5_ParamLimits

0xca86,	// (0x00067e0c) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0006ad24) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0006ad24) bg_list_pane_g

0xca17,	// (0x00067d9d) list_double2_graphic_large_graphic_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double2_graphic_large_graphic_pane

0xca17,	// (0x00067d9d) list_double2_graphic_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double2_graphic_pane

0xca17,	// (0x00067d9d) list_double2_large_graphic_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double2_large_graphic_pane

0xca17,	// (0x00067d9d) list_double2_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double2_pane

0xca17,	// (0x00067d9d) list_double_graphic_heading_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_graphic_heading_pane

0xca17,	// (0x00067d9d) list_double_graphic_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_graphic_pane

0xca17,	// (0x00067d9d) list_double_heading_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_heading_pane

0xca17,	// (0x00067d9d) list_double_large_graphic_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_large_graphic_pane

0xca17,	// (0x00067d9d) list_double_number_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_number_pane

0xca17,	// (0x00067d9d) list_double_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_pane

0xca17,	// (0x00067d9d) list_double_time_pane_ParamLimits

0xca17,	// (0x00067d9d) list_double_time_pane

0xca17,	// (0x00067d9d) list_setting_number_pane_ParamLimits

0xca17,	// (0x00067d9d) list_setting_number_pane

0xca17,	// (0x00067d9d) list_setting_pane_ParamLimits

0xca17,	// (0x00067d9d) list_setting_pane

0xca2b,	// (0x00067db1) list_single_2graphic_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_2graphic_pane

0xca2b,	// (0x00067db1) list_single_graphic_heading_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_graphic_heading_pane

0xca2b,	// (0x00067db1) list_single_graphic_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_graphic_pane

0xca2b,	// (0x00067db1) list_single_heading_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_heading_pane

0xca2b,	// (0x00067db1) list_single_large_graphic_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_large_graphic_pane

0xca2b,	// (0x00067db1) list_single_number_heading_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_number_heading_pane

0xca2b,	// (0x00067db1) list_single_number_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_number_pane

0xca2b,	// (0x00067db1) list_single_pane_ParamLimits

0xca2b,	// (0x00067db1) list_single_pane

0x5d6b,	// (0x000610f1) list_highlight_pane_cp1

0xc48f,	// (0x00067815) list_single_pane_g1_ParamLimits

0xc48f,	// (0x00067815) list_single_pane_g1

0x02ca,	// (0x0005b650) list_single_pane_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006a958) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006a958) list_single_pane_g

0xec5a,	// (0x00069fe0) list_single_pane_t1_ParamLimits

0xec5a,	// (0x00069fe0) list_single_pane_t1

0xc48f,	// (0x00067815) list_single_number_pane_g1_ParamLimits

0xc48f,	// (0x00067815) list_single_number_pane_g1

0x02ca,	// (0x0005b650) list_single_number_pane_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006a958) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006a958) list_single_number_pane_g

0xeb9b,	// (0x00069f21) list_single_number_pane_t1_ParamLimits

0xeb9b,	// (0x00069f21) list_single_number_pane_t1

0xbcb3,	// (0x00067039) list_single_number_pane_t2_ParamLimits

0xbcb3,	// (0x00067039) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0006ace5) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0006ace5) list_single_number_pane_t

0xa1cd,	// (0x00065553) list_single_graphic_pane_g1_ParamLimits

0xa1cd,	// (0x00065553) list_single_graphic_pane_g1

0xc48f,	// (0x00067815) list_single_graphic_pane_g2_ParamLimits

0xc48f,	// (0x00067815) list_single_graphic_pane_g2

0x02ca,	// (0x0005b650) list_single_graphic_pane_g3_ParamLimits

0x02ca,	// (0x0005b650) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006a947) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006a947) list_single_graphic_pane_g

0xa1d9,	// (0x0006555f) list_single_graphic_pane_t1_ParamLimits

0xa1d9,	// (0x0006555f) list_single_graphic_pane_t1

0xa1ef,	// (0x00065575) list_single_heading_pane_g1_ParamLimits

0xa1ef,	// (0x00065575) list_single_heading_pane_g1

0x02ca,	// (0x0005b650) list_single_heading_pane_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006a94e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006a94e) list_single_heading_pane_g

0xa202,	// (0x00065588) list_single_heading_pane_t1_ParamLimits

0xa202,	// (0x00065588) list_single_heading_pane_t1

0xa218,	// (0x0006559e) list_single_heading_pane_t2_ParamLimits

0xa218,	// (0x0006559e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006a953) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006a953) list_single_heading_pane_t

0xc48f,	// (0x00067815) list_single_number_heading_pane_g1_ParamLimits

0xc48f,	// (0x00067815) list_single_number_heading_pane_g1

0x02ca,	// (0x0005b650) list_single_number_heading_pane_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006a958) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006a958) list_single_number_heading_pane_g

0xc49b,	// (0x00067821) list_single_number_heading_pane_t1_ParamLimits

0xc49b,	// (0x00067821) list_single_number_heading_pane_t1

0xa22a,	// (0x000655b0) list_single_number_heading_pane_t2_ParamLimits

0xa22a,	// (0x000655b0) list_single_number_heading_pane_t2

0xc4b1,	// (0x00067837) list_single_number_heading_pane_t3_ParamLimits

0xc4b1,	// (0x00067837) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006a95d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006a95d) list_single_number_heading_pane_t

0xa23c,	// (0x000655c2) list_single_graphic_heading_pane_g1_ParamLimits

0xa23c,	// (0x000655c2) list_single_graphic_heading_pane_g1

0xa254,	// (0x000655da) list_single_graphic_heading_pane_g4_ParamLimits

0xa254,	// (0x000655da) list_single_graphic_heading_pane_g4

0x02ca,	// (0x0005b650) list_single_graphic_heading_pane_g5_ParamLimits

0x02ca,	// (0x0005b650) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006a964) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006a964) list_single_graphic_heading_pane_g

0xc49b,	// (0x00067821) list_single_graphic_heading_pane_t1_ParamLimits

0xc49b,	// (0x00067821) list_single_graphic_heading_pane_t1

0xa265,	// (0x000655eb) list_single_graphic_heading_pane_t2_ParamLimits

0xa265,	// (0x000655eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006a96b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006a96b) list_single_graphic_heading_pane_t

0x3a02,	// (0x0005ed88) list_single_large_graphic_pane_g1_ParamLimits

0x3a02,	// (0x0005ed88) list_single_large_graphic_pane_g1

0xc48f,	// (0x00067815) list_single_large_graphic_pane_g2_ParamLimits

0xc48f,	// (0x00067815) list_single_large_graphic_pane_g2

0x02ca,	// (0x0005b650) list_single_large_graphic_pane_g3_ParamLimits

0x02ca,	// (0x0005b650) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006a970) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006a970) list_single_large_graphic_pane_g

0x2978,	// (0x0005dcfe) wait_border_pane_g2_copy1

0xa27d,	// (0x00065603) list_single_large_graphic_pane_g4_cp2

0xc49b,	// (0x00067821) list_single_large_graphic_pane_t1_ParamLimits

0xc49b,	// (0x00067821) list_single_large_graphic_pane_t1

0x516c,	// (0x000604f2) list_double_pane_g1_ParamLimits

0x516c,	// (0x000604f2) list_double_pane_g1

0xa285,	// (0x0006560b) list_double_pane_g2_ParamLimits

0xa285,	// (0x0006560b) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006a977) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006a977) list_double_pane_g

0xa291,	// (0x00065617) list_double_pane_t1_ParamLimits

0xa291,	// (0x00065617) list_double_pane_t1

0xa2a7,	// (0x0006562d) list_double_pane_t2_ParamLimits

0xa2a7,	// (0x0006562d) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006a97c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006a97c) list_double_pane_t

0xa2b9,	// (0x0006563f) list_double2_pane_g1_ParamLimits

0xa2b9,	// (0x0006563f) list_double2_pane_g1

0xa2ca,	// (0x00065650) list_double2_pane_g2_ParamLimits

0xa2ca,	// (0x00065650) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006a981) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006a981) list_double2_pane_g

0xa2d6,	// (0x0006565c) list_double2_pane_t1_ParamLimits

0xa2d6,	// (0x0006565c) list_double2_pane_t1

0xa2ec,	// (0x00065672) list_double2_pane_t2_ParamLimits

0xa2ec,	// (0x00065672) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006a986) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006a986) list_double2_pane_t

0x516c,	// (0x000604f2) list_double_number_pane_g1_ParamLimits

0x516c,	// (0x000604f2) list_double_number_pane_g1

0xa285,	// (0x0006560b) list_double_number_pane_g2_ParamLimits

0xa285,	// (0x0006560b) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006a977) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006a977) list_double_number_pane_g

0xa2fe,	// (0x00065684) list_double_number_pane_t1_ParamLimits

0xa2fe,	// (0x00065684) list_double_number_pane_t1

0xa310,	// (0x00065696) list_double_number_pane_t2_ParamLimits

0xa310,	// (0x00065696) list_double_number_pane_t2

0xa326,	// (0x000656ac) list_double_number_pane_t3_ParamLimits

0xa326,	// (0x000656ac) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006a98b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006a98b) list_double_number_pane_t

0xa338,	// (0x000656be) list_double_graphic_pane_g1_ParamLimits

0xa338,	// (0x000656be) list_double_graphic_pane_g1

0xa344,	// (0x000656ca) list_double_graphic_pane_g2_ParamLimits

0xa344,	// (0x000656ca) list_double_graphic_pane_g2

0xa353,	// (0x000656d9) list_double_graphic_pane_g3_ParamLimits

0xa353,	// (0x000656d9) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006a992) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006a992) list_double_graphic_pane_g

0xa36b,	// (0x000656f1) list_double_graphic_pane_t1_ParamLimits

0xa36b,	// (0x000656f1) list_double_graphic_pane_t1

0xa381,	// (0x00065707) list_double_graphic_pane_t2_ParamLimits

0xa381,	// (0x00065707) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006a99b) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006a99b) list_double_graphic_pane_t

0xa393,	// (0x00065719) list_double2_graphic_pane_g1_ParamLimits

0xa393,	// (0x00065719) list_double2_graphic_pane_g1

0xa39f,	// (0x00065725) list_double2_graphic_pane_g2_ParamLimits

0xa39f,	// (0x00065725) list_double2_graphic_pane_g2

0xa3ab,	// (0x00065731) list_double2_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x00065731) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0006a9a0) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0006a9a0) list_double2_graphic_pane_g

0xa3b7,	// (0x0006573d) list_double2_graphic_pane_t1_ParamLimits

0xa3b7,	// (0x0006573d) list_double2_graphic_pane_t1

0xa3cd,	// (0x00065753) list_double2_graphic_pane_t2_ParamLimits

0xa3cd,	// (0x00065753) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006a9a7) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006a9a7) list_double2_graphic_pane_t

0xa3df,	// (0x00065765) list_double_large_graphic_pane_g1_ParamLimits

0xa3df,	// (0x00065765) list_double_large_graphic_pane_g1

0xa40a,	// (0x00065790) list_double_large_graphic_pane_g2_ParamLimits

0xa40a,	// (0x00065790) list_double_large_graphic_pane_g2

0xa285,	// (0x0006560b) list_double_large_graphic_pane_g3_ParamLimits

0xa285,	// (0x0006560b) list_double_large_graphic_pane_g3

0xa420,	// (0x000657a6) list_double_large_graphic_pane_g4_ParamLimits

0xa420,	// (0x000657a6) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006a9ac) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006a9ac) list_double_large_graphic_pane_g

0xa433,	// (0x000657b9) list_double_large_graphic_pane_t1_ParamLimits

0xa433,	// (0x000657b9) list_double_large_graphic_pane_t1

0xa44c,	// (0x000657d2) list_double_large_graphic_pane_t2_ParamLimits

0xa44c,	// (0x000657d2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006a9b7) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006a9b7) list_double_large_graphic_pane_t

0xa45e,	// (0x000657e4) list_double2_large_graphic_pane_g1_ParamLimits

0xa45e,	// (0x000657e4) list_double2_large_graphic_pane_g1

0xa46a,	// (0x000657f0) list_double2_large_graphic_pane_g2_ParamLimits

0xa46a,	// (0x000657f0) list_double2_large_graphic_pane_g2

0xa3ab,	// (0x00065731) list_double2_large_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x00065731) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006a9bc) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006a9bc) list_double2_large_graphic_pane_g

0xa47b,	// (0x00065801) list_double2_large_graphic_pane_t1_ParamLimits

0xa47b,	// (0x00065801) list_double2_large_graphic_pane_t1

0xa491,	// (0x00065817) list_double2_large_graphic_pane_t2_ParamLimits

0xa491,	// (0x00065817) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006a9c3) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006a9c3) list_double2_large_graphic_pane_t

0xa4a3,	// (0x00065829) list_double_heading_pane_g1_ParamLimits

0xa4a3,	// (0x00065829) list_double_heading_pane_g1

0xa4b4,	// (0x0006583a) list_double_heading_pane_g2_ParamLimits

0xa4b4,	// (0x0006583a) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006a9c8) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006a9c8) list_double_heading_pane_g

0xa4c0,	// (0x00065846) list_double_heading_pane_t1_ParamLimits

0xa4c0,	// (0x00065846) list_double_heading_pane_t1

0xa4d6,	// (0x0006585c) list_double_heading_pane_t2_ParamLimits

0xa4d6,	// (0x0006585c) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006a9cd) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006a9cd) list_double_heading_pane_t

0xc4c3,	// (0x00067849) list_double_graphic_heading_pane_g1_ParamLimits

0xc4c3,	// (0x00067849) list_double_graphic_heading_pane_g1

0xa4a3,	// (0x00065829) list_double_graphic_heading_pane_g2_ParamLimits

0xa4a3,	// (0x00065829) list_double_graphic_heading_pane_g2

0xa4b4,	// (0x0006583a) list_double_graphic_heading_pane_g3_ParamLimits

0xa4b4,	// (0x0006583a) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006a9d2) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006a9d2) list_double_graphic_heading_pane_g

0xa4e8,	// (0x0006586e) list_double_graphic_heading_pane_t1_ParamLimits

0xa4e8,	// (0x0006586e) list_double_graphic_heading_pane_t1

0xa4fe,	// (0x00065884) list_double_graphic_heading_pane_t2_ParamLimits

0xa4fe,	// (0x00065884) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006a9d9) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006a9d9) list_double_graphic_heading_pane_t

0xa510,	// (0x00065896) list_double_time_pane_g1_ParamLimits

0xa510,	// (0x00065896) list_double_time_pane_g1

0xa521,	// (0x000658a7) list_double_time_pane_g2_ParamLimits

0xa521,	// (0x000658a7) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006a9de) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006a9de) list_double_time_pane_g

0xa52d,	// (0x000658b3) list_double_time_pane_t1_ParamLimits

0xa52d,	// (0x000658b3) list_double_time_pane_t1

0xa543,	// (0x000658c9) list_double_time_pane_t2_ParamLimits

0xa543,	// (0x000658c9) list_double_time_pane_t2

0xa555,	// (0x000658db) list_double_time_pane_t3_ParamLimits

0xa555,	// (0x000658db) list_double_time_pane_t3

0xa567,	// (0x000658ed) list_double_time_pane_t4_ParamLimits

0xa567,	// (0x000658ed) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006a9e3) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006a9e3) list_double_time_pane_t

0xa579,	// (0x000658ff) list_setting_pane_g1_ParamLimits

0xa579,	// (0x000658ff) list_setting_pane_g1

0xa585,	// (0x0006590b) list_setting_pane_g2_ParamLimits

0xa585,	// (0x0006590b) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006a9ec) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006a9ec) list_setting_pane_g

0xa591,	// (0x00065917) list_setting_pane_t1_ParamLimits

0xa591,	// (0x00065917) list_setting_pane_t1

0xa5ab,	// (0x00065931) list_setting_pane_t2_ParamLimits

0xa5ab,	// (0x00065931) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006a9f1) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006a9f1) list_setting_pane_t

0xa5ea,	// (0x00065970) set_value_pane_cp_ParamLimits

0xa5ea,	// (0x00065970) set_value_pane_cp

0xa5f8,	// (0x0006597e) list_setting_number_pane_g1_ParamLimits

0xa5f8,	// (0x0006597e) list_setting_number_pane_g1

0xa604,	// (0x0006598a) list_setting_number_pane_g2_ParamLimits

0xa604,	// (0x0006598a) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006a9f8) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006a9f8) list_setting_number_pane_g

0xa610,	// (0x00065996) list_setting_number_pane_t1_ParamLimits

0xa610,	// (0x00065996) list_setting_number_pane_t1

0xa629,	// (0x000659af) list_setting_number_pane_t2_ParamLimits

0xa629,	// (0x000659af) list_setting_number_pane_t2

0xa643,	// (0x000659c9) list_setting_number_pane_t3_ParamLimits

0xa643,	// (0x000659c9) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006a9fd) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006a9fd) list_setting_number_pane_t

0xa5ea,	// (0x00065970) set_value_pane_ParamLimits

0xa5ea,	// (0x00065970) set_value_pane

0x8943,	// (0x00063cc9) bg_set_opt_pane_ParamLimits

0x8943,	// (0x00063cc9) bg_set_opt_pane

0xc4cf,	// (0x00067855) set_value_pane_t1

0x8964,	// (0x00063cea) slider_set_pane_cp3

0x896d,	// (0x00063cf3) volume_small_pane_cp

0x8976,	// (0x00063cfc) list_form_gen_pane

0x897f,	// (0x00063d05) scroll_pane_cp8

0xa686,	// (0x00065a0c) form_field_data_pane_ParamLimits

0xa686,	// (0x00065a0c) form_field_data_pane

0xa6a3,	// (0x00065a29) form_field_data_wide_pane_ParamLimits

0xa6a3,	// (0x00065a29) form_field_data_wide_pane

0xa6c7,	// (0x00065a4d) form_field_popup_pane_ParamLimits

0xa6c7,	// (0x00065a4d) form_field_popup_pane

0xc4ed,	// (0x00067873) form_field_popup_wide_pane_ParamLimits

0xc4ed,	// (0x00067873) form_field_popup_wide_pane

0xc50e,	// (0x00067894) form_field_slider_pane_ParamLimits

0xc50e,	// (0x00067894) form_field_slider_pane

0xc521,	// (0x000678a7) form_field_slider_wide_pane_ParamLimits

0xc521,	// (0x000678a7) form_field_slider_wide_pane

0x8990,	// (0x00063d16) data_form_pane

0xa6f3,	// (0x00065a79) form_field_data_pane_t1

0x899c,	// (0x00063d22) input_focus_pane

0xc534,	// (0x000678ba) data_form_wide_pane

0xc551,	// (0x000678d7) form_field_data_wide_pane_t1

0x6163,	// (0x000614e9) input_focus_pane_cp6

0xa70d,	// (0x00065a93) form_field_popup_pane_t1

0x899c,	// (0x00063d22) input_focus_pane_cp7

0x89ca,	// (0x00063d50) list_form_pane

0xc57b,	// (0x00067901) form_field_popup_wide_pane_t1

0x899c,	// (0x00063d22) input_focus_pane_cp8

0x89d6,	// (0x00063d5c) list_form_wide_pane

0xa72f,	// (0x00065ab5) form_field_slider_pane_t1_ParamLimits

0xa72f,	// (0x00065ab5) form_field_slider_pane_t1

0xa747,	// (0x00065acd) form_field_slider_pane_t2_ParamLimits

0xa747,	// (0x00065acd) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006aa0d) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006aa0d) form_field_slider_pane_t

0x5ef8,	// (0x0006127e) input_focus_pane_cp9_ParamLimits

0x5ef8,	// (0x0006127e) input_focus_pane_cp9

0xa75c,	// (0x00065ae2) slider_cont_pane_ParamLimits

0xa75c,	// (0x00065ae2) slider_cont_pane

0x89e5,	// (0x00063d6b) form_field_slider_wide_pane_t1_ParamLimits

0x89e5,	// (0x00063d6b) form_field_slider_wide_pane_t1

0xc590,	// (0x00067916) form_field_slider_wide_pane_t2_ParamLimits

0xc590,	// (0x00067916) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006aa12) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006aa12) form_field_slider_wide_pane_t

0x5ef8,	// (0x0006127e) input_focus_pane_cp10_ParamLimits

0x5ef8,	// (0x0006127e) input_focus_pane_cp10

0xa770,	// (0x00065af6) slider_cont_pane_cp1_ParamLimits

0xa770,	// (0x00065af6) slider_cont_pane_cp1

0xa784,	// (0x00065b0a) slider_form_pane_cp

0x89f7,	// (0x00063d7d) input_focus_pane_g1

0x89ff,	// (0x00063d85) input_focus_pane_g2

0x8a07,	// (0x00063d8d) input_focus_pane_g3

0x8a0f,	// (0x00063d95) input_focus_pane_g4

0x8a17,	// (0x00063d9d) input_focus_pane_g5

0x8a1f,	// (0x00063da5) input_focus_pane_g6

0x8a27,	// (0x00063dad) input_focus_pane_g7

0x8a2f,	// (0x00063db5) input_focus_pane_g8

0x8a37,	// (0x00063dbd) input_focus_pane_g9

0x5d61,	// (0x000610e7) input_focus_pane_g10

0x0009,

0xf691,	// (0x0006aa17) input_focus_pane_g

0x2981,	// (0x0005dd07) wait_border_pane_g3_copy1

0xa78c,	// (0x00065b12) data_form_pane_t1

0x5d61,	// (0x000610e7) wait_anim_pane_g1_copy1

0xbcc5,	// (0x0006704b) data_form_wide_pane_t1

0xc5a2,	// (0x00067928) list_form_graphic_pane_cp_ParamLimits

0xc5a2,	// (0x00067928) list_form_graphic_pane_cp

0x38e0,	// (0x0005ec66) slider_form_pane_g1

0x38e9,	// (0x0005ec6f) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0006ad15) slider_form_pane_g

0xa7a8,	// (0x00065b2e) list_form_graphic_pane_ParamLimits

0xa7a8,	// (0x00065b2e) list_form_graphic_pane

0xe8cc,	// (0x00069c52) list_form_graphic_pane_g1

0xe8d4,	// (0x00069c5a) list_form_graphic_pane_t1_ParamLimits

0xe8d4,	// (0x00069c5a) list_form_graphic_pane_t1

0x5dc5,	// (0x0006114b) list_highlight_pane_cp5_ParamLimits

0x5dc5,	// (0x0006114b) list_highlight_pane_cp5

0xa7b9,	// (0x00065b3f) find_pane_g1

0x8a3f,	// (0x00063dc5) input_find_pane

0xa7c2,	// (0x00065b48) input_find_pane_g1_ParamLimits

0xa7c2,	// (0x00065b48) input_find_pane_g1

0xa7ce,	// (0x00065b54) input_find_pane_t1_ParamLimits

0xa7ce,	// (0x00065b54) input_find_pane_t1

0xa7e3,	// (0x00065b69) input_find_pane_t2_ParamLimits

0xa7e3,	// (0x00065b69) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006aa2c) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006aa2c) input_find_pane_t

0x8a48,	// (0x00063dce) input_focus_pane_cp5_ParamLimits

0x8a48,	// (0x00063dce) input_focus_pane_cp5

0x8a56,	// (0x00063ddc) bg_popup_window_pane_cp2_ParamLimits

0x8a56,	// (0x00063ddc) bg_popup_window_pane_cp2

0x8a63,	// (0x00063de9) listscroll_menu_pane_ParamLimits

0x8a63,	// (0x00063de9) listscroll_menu_pane

0xa804,	// (0x00065b8a) popup_submenu_window_ParamLimits

0xa804,	// (0x00065b8a) popup_submenu_window

0x8a6f,	// (0x00063df5) find_popup_pane_g1

0x8a77,	// (0x00063dfd) input_popup_find_pane_cp

0x8a48,	// (0x00063dce) input_focus_pane_cp4_ParamLimits

0x8a48,	// (0x00063dce) input_focus_pane_cp4

0x8a81,	// (0x00063e07) input_popup_find_pane_t1_ParamLimits

0x8a81,	// (0x00063e07) input_popup_find_pane_t1

0x5d6b,	// (0x000610f1) bg_popup_sub_pane_cp

0x8aaf,	// (0x00063e35) listscroll_popup_sub_pane

0x8ab7,	// (0x00063e3d) list_submenu_pane_ParamLimits

0x8ab7,	// (0x00063e3d) list_submenu_pane

0x8ac8,	// (0x00063e4e) scroll_pane_cp4

0x8ad0,	// (0x00063e56) list_single_popup_submenu_pane_ParamLimits

0x8ad0,	// (0x00063e56) list_single_popup_submenu_pane

0x8ae5,	// (0x00063e6b) list_single_popup_submenu_pane_g1

0x8aed,	// (0x00063e73) list_single_popup_submenu_pane_t1_ParamLimits

0x8aed,	// (0x00063e73) list_single_popup_submenu_pane_t1

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp1_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp1

0xa842,	// (0x00065bc8) tabs_2_active_pane_g1

0xa84a,	// (0x00065bd0) tabs_2_active_pane_t1

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp1_ParamLimits

0x5ef8,	// (0x0006127e) bg_passive_tab_pane_cp1

0xa842,	// (0x00065bc8) tabs_2_passive_pane_g1

0xa84a,	// (0x00065bd0) tabs_2_passive_pane_t1

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp4

0xa85c,	// (0x00065be2) tabs_2_long_active_pane_t1

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp4

0x0303,	// (0x0005b689) list_single_midp_graphic_pane_g4_ParamLimits

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp5

0xa86f,	// (0x00065bf5) tabs_3_long_active_pane_t1

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp5

0x0303,	// (0x0005b689) list_single_midp_graphic_pane_g4

0x5dc5,	// (0x0006114b) bg_popup_window_pane_cp13_ParamLimits

0x5dc5,	// (0x0006114b) bg_popup_window_pane_cp13

0x8b0b,	// (0x00063e91) listscroll_popup_fast_pane_ParamLimits

0x8b0b,	// (0x00063e91) listscroll_popup_fast_pane

0x8b1a,	// (0x00063ea0) grid_popup_fast_pane_ParamLimits

0x8b1a,	// (0x00063ea0) grid_popup_fast_pane

0x8b2c,	// (0x00063eb2) scroll_pane_cp9_ParamLimits

0x8b2c,	// (0x00063eb2) scroll_pane_cp9

0x53ee,	// (0x00060774) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x53ee,	// (0x00060774) list_single_graphic_hl_pane_t1_cp2

0x8b50,	// (0x00063ed6) input_focus_pane_cp20_ParamLimits

0x8b50,	// (0x00063ed6) input_focus_pane_cp20

0x8b5e,	// (0x00063ee4) query_popup_data_pane_t1_ParamLimits

0x8b5e,	// (0x00063ee4) query_popup_data_pane_t1

0x8b71,	// (0x00063ef7) query_popup_data_pane_t2_ParamLimits

0x8b71,	// (0x00063ef7) query_popup_data_pane_t2

0x8bb7,	// (0x00063f3d) query_popup_data_pane_t3_ParamLimits

0x8bb7,	// (0x00063f3d) query_popup_data_pane_t3

0x8bf8,	// (0x00063f7e) query_popup_data_pane_t4_ParamLimits

0x8bf8,	// (0x00063f7e) query_popup_data_pane_t4

0x8c34,	// (0x00063fba) query_popup_data_pane_t5_ParamLimits

0x8c34,	// (0x00063fba) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006aa31) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006aa31) query_popup_data_pane_t

0x89f7,	// (0x00063d7d) bg_set_opt_pane_g1

0x89ff,	// (0x00063d85) bg_set_opt_pane_g2

0x8a07,	// (0x00063d8d) bg_set_opt_pane_g3

0x8a0f,	// (0x00063d95) bg_set_opt_pane_g4

0x8a17,	// (0x00063d9d) bg_set_opt_pane_g5

0x8a1f,	// (0x00063da5) bg_set_opt_pane_g6

0x8a27,	// (0x00063dad) bg_set_opt_pane_g7

0x8a2f,	// (0x00063db5) bg_set_opt_pane_g8

0x8a37,	// (0x00063dbd) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006aa3c) bg_set_opt_pane_g

0xf352,	// (0x0006a6d8) control_top_pane_stacon_ParamLimits

0xf352,	// (0x0006a6d8) control_top_pane_stacon

0xf3a5,	// (0x0006a72b) signal_pane_stacon_ParamLimits

0xf3a5,	// (0x0006a72b) signal_pane_stacon

0x904b,	// (0x000643d1) stacon_top_pane_g1_ParamLimits

0x904b,	// (0x000643d1) stacon_top_pane_g1

0xf3ca,	// (0x0006a750) title_pane_stacon_ParamLimits

0xf3ca,	// (0x0006a750) title_pane_stacon

0xf3f4,	// (0x0006a77a) uni_indicator_pane_stacon_ParamLimits

0xf3f4,	// (0x0006a77a) uni_indicator_pane_stacon

0xf40c,	// (0x0006a792) battery_pane_stacon_ParamLimits

0xf40c,	// (0x0006a792) battery_pane_stacon

0xf450,	// (0x0006a7d6) control_bottom_pane_stacon_ParamLimits

0xf450,	// (0x0006a7d6) control_bottom_pane_stacon

0xf473,	// (0x0006a7f9) navi_pane_stacon_ParamLimits

0xf473,	// (0x0006a7f9) navi_pane_stacon

0x906d,	// (0x000643f3) stacon_bottom_pane_g1_ParamLimits

0x906d,	// (0x000643f3) stacon_bottom_pane_g1

0xf0b8,	// (0x0006a43e) aid_levels_signal_lsc_ParamLimits

0xf0b8,	// (0x0006a43e) aid_levels_signal_lsc

0xf0cf,	// (0x0006a455) signal_pane_stacon_g1_ParamLimits

0xf0cf,	// (0x0006a455) signal_pane_stacon_g1

0xf0e3,	// (0x0006a469) signal_pane_stacon_g2_ParamLimits

0xf0e3,	// (0x0006a469) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006aa4f) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006aa4f) signal_pane_stacon_g

0xf118,	// (0x0006a49e) title_pane_stacon_t1_ParamLimits

0xf118,	// (0x0006a49e) title_pane_stacon_t1

0x8c78,	// (0x00063ffe) uni_indicator_pane_stacon_g1

0x8c82,	// (0x00064008) uni_indicator_pane_stacon_g2

0x8c8c,	// (0x00064012) uni_indicator_pane_stacon_g3

0x8c96,	// (0x0006401c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006aa5b) uni_indicator_pane_stacon_g

0xf13d,	// (0x0006a4c3) control_top_pane_stacon_g1

0xf145,	// (0x0006a4cb) control_top_pane_stacon_t1_ParamLimits

0xf145,	// (0x0006a4cb) control_top_pane_stacon_t1

0xf17c,	// (0x0006a502) aid_levels_battery_lsc_ParamLimits

0xf17c,	// (0x0006a502) aid_levels_battery_lsc

0xf194,	// (0x0006a51a) battery_pane_stacon_g1_ParamLimits

0xf194,	// (0x0006a51a) battery_pane_stacon_g1

0xf1a7,	// (0x0006a52d) battery_pane_stacon_g2_ParamLimits

0xf1a7,	// (0x0006a52d) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006aa64) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006aa64) battery_pane_stacon_g

0xf1e5,	// (0x0006a56b) navi_icon_pane_stacon

0xf1f9,	// (0x0006a57f) navi_navi_pane_stacon

0xf1e5,	// (0x0006a56b) navi_text_pane_stacon

0xf13d,	// (0x0006a4c3) control_bottom_pane_stacon_g1

0xf20f,	// (0x0006a595) control_bottom_pane_stacon_t1_ParamLimits

0xf20f,	// (0x0006a595) control_bottom_pane_stacon_t1

0xa881,	// (0x00065c07) grid_app_pane_ParamLimits

0xa881,	// (0x00065c07) grid_app_pane

0xa8b9,	// (0x00065c3f) scroll_pane_cp15_ParamLimits

0xa8b9,	// (0x00065c3f) scroll_pane_cp15

0xa8ce,	// (0x00065c54) cell_app_pane_ParamLimits

0xa8ce,	// (0x00065c54) cell_app_pane

0xa91b,	// (0x00065ca1) cell_app_pane_g1_ParamLimits

0xa91b,	// (0x00065ca1) cell_app_pane_g1

0x8cba,	// (0x00064040) cell_app_pane_g2_ParamLimits

0x8cba,	// (0x00064040) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006aa69) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006aa69) cell_app_pane_g

0x8cc6,	// (0x0006404c) cell_app_pane_t1_ParamLimits

0x8cc6,	// (0x0006404c) cell_app_pane_t1

0x8cdd,	// (0x00064063) grid_highlight_pane_ParamLimits

0x8cdd,	// (0x00064063) grid_highlight_pane

0x89f7,	// (0x00063d7d) cell_highlight_pane_g1

0x89ff,	// (0x00063d85) cell_highlight_pane_g2

0x8a07,	// (0x00063d8d) cell_highlight_pane_g3

0x8a0f,	// (0x00063d95) cell_highlight_pane_g4

0x8a17,	// (0x00063d9d) cell_highlight_pane_g5

0x8a1f,	// (0x00063da5) cell_highlight_pane_g6

0x8a27,	// (0x00063dad) cell_highlight_pane_g7

0x8a2f,	// (0x00063db5) cell_highlight_pane_g8

0x8a37,	// (0x00063dbd) cell_highlight_pane_g9

0x5d61,	// (0x000610e7) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0006aa17) cell_highlight_pane_g

0x8cee,	// (0x00064074) bg_scroll_pane

0xf250,	// (0x0006a5d6) scroll_handle_pane

0x8d35,	// (0x000640bb) scroll_bg_pane_g1

0x8d4a,	// (0x000640d0) scroll_bg_pane_g2

0x8d62,	// (0x000640e8) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006aa6e) scroll_bg_pane_g

0x8d77,	// (0x000640fd) scroll_handle_focus_pane_ParamLimits

0x8d77,	// (0x000640fd) scroll_handle_focus_pane

0x8d35,	// (0x000640bb) scroll_handle_pane_g1

0x8d84,	// (0x0006410a) scroll_handle_pane_g2

0x8d62,	// (0x000640e8) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006aa75) scroll_handle_pane_g

0x8a48,	// (0x00063dce) bg_popup_sub_pane_cp21_ParamLimits

0x8a48,	// (0x00063dce) bg_popup_sub_pane_cp21

0x8d98,	// (0x0006411e) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d98,	// (0x0006411e) popup_fep_japan_predictive_window_t1

0x8daf,	// (0x00064135) popup_fep_japan_predictive_window_t2_ParamLimits

0x8daf,	// (0x00064135) popup_fep_japan_predictive_window_t2

0x8de2,	// (0x00064168) popup_fep_japan_predictive_window_t3_ParamLimits

0x8de2,	// (0x00064168) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006aa7c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006aa7c) popup_fep_japan_predictive_window_t

0x5d6b,	// (0x000610f1) bg_popup_sub_pane_cp23

0x8e19,	// (0x0006419f) listscroll_japin_cand_pane

0x8e21,	// (0x000641a7) popup_fep_japan_candidate_window_t1

0x8e2f,	// (0x000641b5) candidate_pane_ParamLimits

0x8e2f,	// (0x000641b5) candidate_pane

0x8e41,	// (0x000641c7) scroll_pane_cp30

0x8e4b,	// (0x000641d1) list_single_popup_jap_candidate_pane_ParamLimits

0x8e4b,	// (0x000641d1) list_single_popup_jap_candidate_pane

0x5d6b,	// (0x000610f1) list_highlight_pane_cp30

0x8e5f,	// (0x000641e5) list_single_popup_jap_candidate_pane_t1

0xa944,	// (0x00065cca) level_1_signal

0xa956,	// (0x00065cdc) level_2_signal

0xa969,	// (0x00065cef) level_3_signal

0xa97c,	// (0x00065d02) level_4_signal

0xa98f,	// (0x00065d15) level_5_signal

0xa9a2,	// (0x00065d28) level_6_signal

0xa9b5,	// (0x00065d3b) level_7_signal

0xa944,	// (0x00065cca) level_1_battery

0xa956,	// (0x00065cdc) level_2_battery

0xa969,	// (0x00065cef) level_3_battery

0xa97c,	// (0x00065d02) level_4_battery

0xa98f,	// (0x00065d15) level_5_battery

0xa9a2,	// (0x00065d28) level_6_battery

0xa9b5,	// (0x00065d3b) level_7_battery

0x8e86,	// (0x0006420c) list_menu_pane_ParamLimits

0x8e86,	// (0x0006420c) list_menu_pane

0x8e9c,	// (0x00064222) scroll_pane_cp25_ParamLimits

0x8e9c,	// (0x00064222) scroll_pane_cp25

0x8eb5,	// (0x0006423b) list_double2_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double2_graphic_pane_cp2

0x8eb5,	// (0x0006423b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double2_large_graphic_pane_cp2

0x8eb5,	// (0x0006423b) list_double2_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double2_pane_cp2

0x8eb5,	// (0x0006423b) list_double_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double_graphic_pane_cp2

0x8eb5,	// (0x0006423b) list_double_large_graphic_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double_large_graphic_pane_cp2

0x8eb5,	// (0x0006423b) list_double_number_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double_number_pane_cp2

0x8eb5,	// (0x0006423b) list_double_pane_cp2_ParamLimits

0x8eb5,	// (0x0006423b) list_double_pane_cp2

0xa9db,	// (0x00065d61) list_single_2graphic_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_2graphic_pane_cp2

0xa9db,	// (0x00065d61) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_graphic_heading_pane_cp2

0xa9db,	// (0x00065d61) list_single_graphic_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_graphic_pane_cp2

0xa9db,	// (0x00065d61) list_single_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_heading_pane_cp2

0x8ec5,	// (0x0006424b) list_single_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x0006424b) list_single_large_graphic_pane_cp2

0xa9db,	// (0x00065d61) list_single_number_heading_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_number_heading_pane_cp2

0xa9db,	// (0x00065d61) list_single_number_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_number_pane_cp2

0xa9db,	// (0x00065d61) list_single_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_pane_cp2

0x8ede,	// (0x00064264) bg_popup_sub_pane_cp22

0xf302,	// (0x0006a688) popup_side_volume_key_window_g1

0xf32c,	// (0x0006a6b2) popup_side_volume_key_window_t1

0xf34a,	// (0x0006a6d0) volume_small_pane_cp1

0x5ef8,	// (0x0006127e) bg_popup_sub_pane_cp24_ParamLimits

0x5ef8,	// (0x0006127e) bg_popup_sub_pane_cp24

0x8ef4,	// (0x0006427a) fep_china_uni_candidate_pane_ParamLimits

0x8ef4,	// (0x0006427a) fep_china_uni_candidate_pane

0x8f08,	// (0x0006428e) fep_china_uni_entry_pane

0x8f18,	// (0x0006429e) popup_fep_china_uni_window_g1

0x8f34,	// (0x000642ba) fep_china_uni_entry_pane_g1

0x8f3e,	// (0x000642c4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006aaad) fep_china_uni_entry_pane_g

0x8f48,	// (0x000642ce) fep_entry_item_pane

0x8f52,	// (0x000642d8) fep_candidate_item_pane

0x8f5a,	// (0x000642e0) fep_china_uni_candidate_pane_g1

0x8f64,	// (0x000642ea) fep_china_uni_candidate_pane_g2

0x8f6c,	// (0x000642f2) fep_china_uni_candidate_pane_g3

0x8f74,	// (0x000642fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006aab2) fep_china_uni_candidate_pane_g

0x5d61,	// (0x000610e7) fep_entry_item_pane_g1

0x8f7e,	// (0x00064304) fep_entry_item_pane_t1_ParamLimits

0x8f7e,	// (0x00064304) fep_entry_item_pane_t1

0x8f94,	// (0x0006431a) fep_candidate_item_pane_t1_ParamLimits

0x8f94,	// (0x0006431a) fep_candidate_item_pane_t1

0x8fa9,	// (0x0006432f) fep_candidate_item_pane_t2_ParamLimits

0x8fa9,	// (0x0006432f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006aabb) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006aabb) fep_candidate_item_pane_t

0x5dc5,	// (0x0006114b) list_highlight_pane_cp31_ParamLimits

0x5dc5,	// (0x0006114b) list_highlight_pane_cp31

0x8fbb,	// (0x00064341) level_1_signal_lsc

0x8fc4,	// (0x0006434a) level_2_signal_lsc

0x8fcd,	// (0x00064353) level_3_signal_lsc

0x8fd6,	// (0x0006435c) level_4_signal_lsc

0x8fdf,	// (0x00064365) level_5_signal_lsc

0x8fe8,	// (0x0006436e) level_6_signal_lsc

0x8ff1,	// (0x00064377) level_7_signal_lsc

0x8ff1,	// (0x00064377) level_1_battery_lsc

0x8ffa,	// (0x00064380) level_2_battery_lsc

0x9003,	// (0x00064389) level_3_battery_lsc

0x900c,	// (0x00064392) level_4_battery_lsc

0x9015,	// (0x0006439b) level_5_battery_lsc

0x901e,	// (0x000643a4) level_6_battery_lsc

0x8fbb,	// (0x00064341) level_7_battery_lsc

0x9027,	// (0x000643ad) scroll_handle_focus_pane_g1

0x9030,	// (0x000643b6) scroll_handle_focus_pane_g2

0x9039,	// (0x000643bf) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006aac0) scroll_handle_focus_pane_g

0xaa6d,	// (0x00065df3) list_single_2graphic_pane_g1_ParamLimits

0xaa6d,	// (0x00065df3) list_single_2graphic_pane_g1

0xa254,	// (0x000655da) list_single_2graphic_pane_g2_ParamLimits

0xa254,	// (0x000655da) list_single_2graphic_pane_g2

0x02ca,	// (0x0005b650) list_single_2graphic_pane_g3_ParamLimits

0x02ca,	// (0x0005b650) list_single_2graphic_pane_g3

0xaa79,	// (0x00065dff) list_single_2graphic_pane_g4_ParamLimits

0xaa79,	// (0x00065dff) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006aac7) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006aac7) list_single_2graphic_pane_g

0xaa8a,	// (0x00065e10) list_single_2graphic_pane_t1_ParamLimits

0xaa8a,	// (0x00065e10) list_single_2graphic_pane_t1

0xaab8,	// (0x00065e3e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaab8,	// (0x00065e3e) list_double2_graphic_large_graphic_pane_g1

0xa46a,	// (0x000657f0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa46a,	// (0x000657f0) list_double2_graphic_large_graphic_pane_g2

0xa3ab,	// (0x00065731) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa3ab,	// (0x00065731) list_double2_graphic_large_graphic_pane_g3

0xaaca,	// (0x00065e50) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaaca,	// (0x00065e50) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006aad0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006aad0) list_double2_graphic_large_graphic_pane_g

0xaad6,	// (0x00065e5c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaad6,	// (0x00065e5c) list_double2_graphic_large_graphic_pane_t1

0xaaec,	// (0x00065e72) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaaec,	// (0x00065e72) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0006aad9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0006aad9) list_double2_graphic_large_graphic_pane_t

0x90cb,	// (0x00064451) popup_fast_swap_window_ParamLimits

0x90cb,	// (0x00064451) popup_fast_swap_window

0x90e9,	// (0x0006446f) popup_side_volume_key_window

0x9107,	// (0x0006448d) stacon_top_pane

0x9111,	// (0x00064497) status_pane_ParamLimits

0x9111,	// (0x00064497) status_pane

0xab95,	// (0x00065f1b) status_small_pane

0x5d6b,	// (0x000610f1) control_pane

0x5d6b,	// (0x000610f1) stacon_bottom_pane

0x897f,	// (0x00063d05) scroll_pane_cp121

0x8976,	// (0x00063cfc) set_content_pane

0xaafe,	// (0x00065e84) bg_active_tab_pane_g1_cp1

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp1

0xab07,	// (0x00065e8d) bg_active_tab_pane_g3_cp1

0xaafe,	// (0x00065e84) bg_passive_tab_pane_g1_cp1

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp1

0xab07,	// (0x00065e8d) bg_passive_tab_pane_g3_cp1

0xab10,	// (0x00065e96) bg_active_tab_pane_g1_cp2

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp2

0xab19,	// (0x00065e9f) bg_active_tab_pane_g3_cp2

0xab10,	// (0x00065e96) bg_passive_tab_pane_g1_cp2

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp2

0xab19,	// (0x00065e9f) bg_passive_tab_pane_g3_cp2

0xab22,	// (0x00065ea8) bg_active_tab_pane_g1_cp3

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp3

0xab2b,	// (0x00065eb1) bg_active_tab_pane_g3_cp3

0xab22,	// (0x00065ea8) bg_passive_tab_pane_g1_cp3

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp3

0xab2b,	// (0x00065eb1) bg_passive_tab_pane_g3_cp3

0xab34,	// (0x00065eba) bg_active_tab_pane_g1_cp4

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp4

0xab3d,	// (0x00065ec3) bg_active_tab_pane_g3_cp4

0xab34,	// (0x00065eba) bg_passive_tab_pane_g1_cp4

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp4

0xab3d,	// (0x00065ec3) bg_passive_tab_pane_g3_cp4

0x9089,	// (0x0006440f) bg_active_tab_pane_g1_cp5

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp5

0x9092,	// (0x00064418) bg_active_tab_pane_g3_cp5

0x9089,	// (0x0006440f) bg_passive_tab_pane_g1_cp5

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp5

0x9092,	// (0x00064418) bg_passive_tab_pane_g3_cp5

0x4091,	// (0x0005f417) list_set_graphic_pane_ParamLimits

0x4091,	// (0x0005f417) list_set_graphic_pane

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp4

0xab46,	// (0x00065ecc) list_set_graphic_pane_g1_ParamLimits

0xab46,	// (0x00065ecc) list_set_graphic_pane_g1

0xab52,	// (0x00065ed8) list_set_graphic_pane_g2_ParamLimits

0xab52,	// (0x00065ed8) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006aade) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006aade) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x0006ae68) volume_small_pane_cp_g

0xab76,	// (0x00065efc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xab76,	// (0x00065efc) list_double2_large_graphic_pane_g1_cp2

0xab84,	// (0x00065f0a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xab84,	// (0x00065f0a) list_double2_large_graphic_pane_g2_cp2

0x909b,	// (0x00064421) list_double2_large_graphic_pane_g3_cp2

0x90a3,	// (0x00064429) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x90a3,	// (0x00064429) list_double2_large_graphic_pane_t1_cp2

0x90b9,	// (0x0006443f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x90b9,	// (0x0006443f) list_double2_large_graphic_pane_t2_cp2

0xc7a3,	// (0x00067b29) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7a3,	// (0x00067b29) list_double_large_graphic_pane_g1_cp2

0xc7b6,	// (0x00067b3c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc7b6,	// (0x00067b3c) list_double_large_graphic_pane_g2_cp2

0x91f2,	// (0x00064578) list_double_large_graphic_pane_g3_cp2

0x3489,	// (0x0005e80f) list_double_large_graphic_pane_g4_cp

0x3491,	// (0x0005e817) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3491,	// (0x0005e817) list_double_large_graphic_pane_t1_cp2

0x34a8,	// (0x0005e82e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x34a8,	// (0x0005e82e) list_double_large_graphic_pane_t2_cp2

0xaba0,	// (0x00065f26) list_double2_graphic_pane_g1_cp2_ParamLimits

0xaba0,	// (0x00065f26) list_double2_graphic_pane_g1_cp2

0xabae,	// (0x00065f34) list_double2_graphic_pane_g2_cp2_ParamLimits

0xabae,	// (0x00065f34) list_double2_graphic_pane_g2_cp2

0xabbf,	// (0x00065f45) list_double2_graphic_pane_g3_cp2

0x911f,	// (0x000644a5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x911f,	// (0x000644a5) list_double2_graphic_pane_t1_cp2

0x9135,	// (0x000644bb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9135,	// (0x000644bb) list_double2_graphic_pane_t2_cp2

0x9147,	// (0x000644cd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9147,	// (0x000644cd) list_single_number_heading_pane_g1_cp2

0x9153,	// (0x000644d9) list_single_number_heading_pane_g2_cp2

0x915b,	// (0x000644e1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x915b,	// (0x000644e1) list_single_number_heading_pane_t1_cp2

0xabc9,	// (0x00065f4f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xabc9,	// (0x00065f4f) list_single_number_heading_pane_t2_cp2

0x9171,	// (0x000644f7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9171,	// (0x000644f7) list_single_number_heading_pane_t3_cp2

0x9147,	// (0x000644cd) list_single_heading_pane_g1_cp2_ParamLimits

0x9147,	// (0x000644cd) list_single_heading_pane_g1_cp2

0x9153,	// (0x000644d9) list_single_heading_pane_g2_cp2

0x915b,	// (0x000644e1) list_single_heading_pane_t1_cp2_ParamLimits

0x915b,	// (0x000644e1) list_single_heading_pane_t1_cp2

0xc78f,	// (0x00067b15) list_single_heading_pane_t2_cp2_ParamLimits

0xc78f,	// (0x00067b15) list_single_heading_pane_t2_cp2

0x31a7,	// (0x0005e52d) list_double_graphic_pane_g1_cp2_ParamLimits

0x31a7,	// (0x0005e52d) list_double_graphic_pane_g1_cp2

0x31b3,	// (0x0005e539) list_double_graphic_pane_g2_cp2_ParamLimits

0x31b3,	// (0x0005e539) list_double_graphic_pane_g2_cp2

0x31c2,	// (0x0005e548) list_double_graphic_pane_g3_cp2

0x31ca,	// (0x0005e550) list_double_graphic_pane_t1_cp2_ParamLimits

0x31ca,	// (0x0005e550) list_double_graphic_pane_t1_cp2

0x31e0,	// (0x0005e566) list_double_graphic_pane_t2_cp2_ParamLimits

0x31e0,	// (0x0005e566) list_double_graphic_pane_t2_cp2

0x91e6,	// (0x0006456c) list_double_number_pane_g1_cp2_ParamLimits

0x91e6,	// (0x0006456c) list_double_number_pane_g1_cp2

0x91f2,	// (0x00064578) list_double_number_pane_g2_cp2

0xc729,	// (0x00067aaf) list_double_number_pane_t1_cp2_ParamLimits

0xc729,	// (0x00067aaf) list_double_number_pane_t1_cp2

0x317f,	// (0x0005e505) list_double_number_pane_t2_cp2_ParamLimits

0x317f,	// (0x0005e505) list_double_number_pane_t2_cp2

0x3195,	// (0x0005e51b) list_double_number_pane_t3_cp2_ParamLimits

0x3195,	// (0x0005e51b) list_double_number_pane_t3_cp2

0xc677,	// (0x000679fd) list_single_graphic_pane_g1_cp2_ParamLimits

0xc677,	// (0x000679fd) list_single_graphic_pane_g1_cp2

0xe8f9,	// (0x00069c7f) list_single_graphic_pane_g2_cp2_ParamLimits

0xe8f9,	// (0x00069c7f) list_single_graphic_pane_g2_cp2

0xe905,	// (0x00069c8b) list_single_graphic_pane_g3_cp2

0x302a,	// (0x0005e3b0) list_single_graphic_pane_t1_cp2_ParamLimits

0x302a,	// (0x0005e3b0) list_single_graphic_pane_t1_cp2

0xe8f9,	// (0x00069c7f) list_single_number_pane_g1_cp2_ParamLimits

0xe8f9,	// (0x00069c7f) list_single_number_pane_g1_cp2

0xe905,	// (0x00069c8b) list_single_number_pane_g2_cp2

0x302a,	// (0x0005e3b0) list_single_number_pane_t1_cp2_ParamLimits

0x302a,	// (0x0005e3b0) list_single_number_pane_t1_cp2

0xc663,	// (0x000679e9) list_single_number_pane_t2_cp2_ParamLimits

0xc663,	// (0x000679e9) list_single_number_pane_t2_cp2

0xab84,	// (0x00065f0a) list_double2_pane_g1_cp2_ParamLimits

0xab84,	// (0x00065f0a) list_double2_pane_g1_cp2

0x909b,	// (0x00064421) list_double2_pane_g2_cp2

0x91be,	// (0x00064544) list_double2_pane_t1_cp2_ParamLimits

0x91be,	// (0x00064544) list_double2_pane_t1_cp2

0x91d4,	// (0x0006455a) list_double2_pane_t2_cp2_ParamLimits

0x91d4,	// (0x0006455a) list_double2_pane_t2_cp2

0x91e6,	// (0x0006456c) list_double_pane_g1_cp2_ParamLimits

0x91e6,	// (0x0006456c) list_double_pane_g1_cp2

0x91f2,	// (0x00064578) list_double_pane_g2_cp2

0x91fa,	// (0x00064580) list_double_pane_t1_cp2_ParamLimits

0x91fa,	// (0x00064580) list_double_pane_t1_cp2

0x9210,	// (0x00064596) list_double_pane_t2_cp2_ParamLimits

0x9210,	// (0x00064596) list_double_pane_t2_cp2

0xe8e9,	// (0x00069c6f) list_single_pane_cp2_g3

0xe8f9,	// (0x00069c7f) list_single_pane_g1_cp2_ParamLimits

0xe8f9,	// (0x00069c7f) list_single_pane_g1_cp2

0xe905,	// (0x00069c8b) list_single_pane_g2_cp2

0xe90d,	// (0x00069c93) list_single_pane_t1_cp2_ParamLimits

0xe90d,	// (0x00069c93) list_single_pane_t1_cp2

0xabf7,	// (0x00065f7d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xabf7,	// (0x00065f7d) list_single_large_graphic_pane_g1_cp2

0xc48f,	// (0x00067815) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc48f,	// (0x00067815) list_single_large_graphic_pane_g2_cp2

0xe925,	// (0x00069cab) list_single_large_graphic_pane_g3_cp2

0xe92d,	// (0x00069cb3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe92d,	// (0x00069cb3) list_single_large_graphic_pane_g4_cp1

0xe947,	// (0x00069ccd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe947,	// (0x00069ccd) list_single_large_graphic_pane_t1_cp2

0x2ff4,	// (0x0005e37a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2ff4,	// (0x0005e37a) list_single_graphic_heading_pane_g1_cp2

0xc63e,	// (0x000679c4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc63e,	// (0x000679c4) list_single_graphic_heading_pane_g4_cp2

0xe905,	// (0x00069c8b) list_single_graphic_heading_pane_g5_cp2

0x3000,	// (0x0005e386) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3000,	// (0x0005e386) list_single_graphic_heading_pane_t1_cp2

0xc64f,	// (0x000679d5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc64f,	// (0x000679d5) list_single_graphic_heading_pane_t2_cp2

0x2fb5,	// (0x0005e33b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2fb5,	// (0x0005e33b) list_single_2graphic_pane_g1_cp2

0xc63e,	// (0x000679c4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc63e,	// (0x000679c4) list_single_2graphic_pane_g2_cp2

0xe905,	// (0x00069c8b) list_single_2graphic_pane_g3_cp2

0x2fd2,	// (0x0005e358) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2fd2,	// (0x0005e358) list_single_2graphic_pane_g4_cp2

0x2fde,	// (0x0005e364) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2fde,	// (0x0005e364) list_single_2graphic_pane_t1_cp2

0x5d61,	// (0x000610e7) list_highlight_pane_g10_cp1

0x2b8d,	// (0x0005df13) list_highlight_pane_g1_cp1

0x2b95,	// (0x0005df1b) list_highlight_pane_g2_cp1

0x2b9d,	// (0x0005df23) list_highlight_pane_g3_cp1

0x2ba5,	// (0x0005df2b) list_highlight_pane_g4_cp1

0x2bad,	// (0x0005df33) list_highlight_pane_g5_cp1

0x2bb5,	// (0x0005df3b) list_highlight_pane_g6_cp1

0x2bbd,	// (0x0005df43) list_highlight_pane_g7_cp1

0x2bc5,	// (0x0005df4b) list_highlight_pane_g8_cp1

0x2bcd,	// (0x0005df53) list_highlight_pane_g9_cp1

0xc604,	// (0x0006798a) form_field_slider_pane_t3

0xc612,	// (0x00067998) form_field_slider_pane_t4

0x2ac9,	// (0x0005de4f) slider_form_pane_ParamLimits

0x2ac9,	// (0x0005de4f) slider_form_pane

0x5d6b,	// (0x000610f1) control_abbreviations

0x5d6b,	// (0x000610f1) control_conventions

0x5d6b,	// (0x000610f1) control_definitions

0x5d6b,	// (0x000610f1) format_table_attribute

0x32b5,	// (0x0005e63b) bg_popup_preview_window_pane_g9

0x5d6b,	// (0x000610f1) format_table_data2

0x5d6b,	// (0x000610f1) format_table_data3

0x5d6b,	// (0x000610f1) format_table_data_example

0x0008,

0x5d6b,	// (0x000610f1) intro_purpose

0xf8ef,	// (0x0006ac75) bg_popup_preview_window_pane_g

0x5d6b,	// (0x000610f1) texts_category

0x5d6b,	// (0x000610f1) texts_graphics

0xe95d,	// (0x00069ce3) text_digital

0xe96c,	// (0x00069cf2) text_primary

0xe97b,	// (0x00069d01) text_primary_small

0xe98a,	// (0x00069d10) text_secondary

0xe999,	// (0x00069d1f) text_title

0x3bd6,	// (0x0005ef5c) bg_passive_tab_pane_g1_cp3_srt

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp3_srt

0x3bdf,	// (0x0005ef65) bg_passive_tab_pane_g3_cp3_srt

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp3_srt_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp3_srt

0x3be8,	// (0x0005ef6e) tabs_4_active_pane_srt_g1

0xca9c,	// (0x00067e22) tabs_4_active_pane_srt_t1_ParamLimits

0xca9c,	// (0x00067e22) tabs_4_active_pane_srt_t1

0x3bd6,	// (0x0005ef5c) bg_active_tab_pane_g1_cp3_copy1

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp3_copy1

0x3bdf,	// (0x0005ef65) bg_active_tab_pane_g3_cp3_copy1

0x5dc5,	// (0x0006114b) tabs_2_long_active_pane_srt_ParamLimits

0x5dc5,	// (0x0006114b) tabs_2_long_active_pane_srt

0x5dc5,	// (0x0006114b) tabs_2_long_passive_pane_srt_ParamLimits

0x5dc5,	// (0x0006114b) tabs_2_long_passive_pane_srt

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp4_srt

0x36f1,	// (0x0005ea77) bg_passive_tab_pane_g1_cp4_srt

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp4_srt

0x36fa,	// (0x0005ea80) bg_passive_tab_pane_g3_cp4_srt

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp4_srt_ParamLimits

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp4_srt

0xc879,	// (0x00067bff) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc879,	// (0x00067bff) tabs_2_long_active_pane_srt_t1

0x36f1,	// (0x0005ea77) bg_active_tab_pane_g1_cp4_srt

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp4_srt

0x36fa,	// (0x0005ea80) bg_active_tab_pane_g3_cp4_srt

0x5ef8,	// (0x0006127e) tabs_3_long_active_pane_srt_ParamLimits

0x5ef8,	// (0x0006127e) tabs_3_long_active_pane_srt

0x5ef8,	// (0x0006127e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x5ef8,	// (0x0006127e) tabs_3_long_passive_pane_cp_srt

0x5ef8,	// (0x0006127e) tabs_3_long_passive_pane_srt_ParamLimits

0x5ef8,	// (0x0006127e) tabs_3_long_passive_pane_srt

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp5_srt

0x9089,	// (0x0006440f) bg_passive_tab_pane_g1_cp5_srt

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp5_srt

0x9092,	// (0x00064418) bg_passive_tab_pane_g3_cp5_srt

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp5_srt_ParamLimits

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp5_srt

0xc863,	// (0x00067be9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc863,	// (0x00067be9) tabs_3_long_active_pane_srt_t1

0x9089,	// (0x0006440f) bg_active_tab_pane_g1_cp5_srt

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp5_srt

0x9092,	// (0x00064418) bg_active_tab_pane_g3_cp5_srt

0x36d1,	// (0x0005ea57) navi_text_pane_srt_t1

0x36c9,	// (0x0005ea4f) navi_icon_pane_srt_g1

0xeaa3,	// (0x00069e29) midp_editing_number_pane_srt

0xe9a8,	// (0x00069d2e) midp_ticker_pane_srt

0xeaab,	// (0x00069e31) midp_ticker_pane_srt_g1

0xeab3,	// (0x00069e39) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006aafd) midp_ticker_pane_srt_g

0xeabb,	// (0x00069e41) midp_ticker_pane_srt_t1

0x36ba,	// (0x0005ea40) midp_editing_number_pane_t1_copy1

0x016c,	// (0x0005b4f2) listscroll_midp_pane

0x016c,	// (0x0005b4f2) midp_form_pane

0xe9b0,	// (0x00069d36) midp_info_popup_window_ParamLimits

0xe9b0,	// (0x00069d36) midp_info_popup_window

0x8a48,	// (0x00063dce) bg_popup_sub_pane_cp50_ParamLimits

0x8a48,	// (0x00063dce) bg_popup_sub_pane_cp50

0x27c3,	// (0x0005db49) listscroll_midp_info_pane_ParamLimits

0x27c3,	// (0x0005db49) listscroll_midp_info_pane

0x27ab,	// (0x0005db31) listscroll_form_midp_pane_ParamLimits

0x27ab,	// (0x0005db31) listscroll_form_midp_pane

0x27b7,	// (0x0005db3d) scroll_bar_cp050

0xc5f8,	// (0x0006797e) list_midp_pane

0x466b,	// (0x0005f9f1) signal_pane_g2_cp

0x26c5,	// (0x0005da4b) listscroll_midp_info_pane_t1_ParamLimits

0x26c5,	// (0x0005da4b) listscroll_midp_info_pane_t1

0x26dd,	// (0x0005da63) listscroll_midp_info_pane_t2_ParamLimits

0x26dd,	// (0x0005da63) listscroll_midp_info_pane_t2

0x271b,	// (0x0005daa1) listscroll_midp_info_pane_t3_ParamLimits

0x271b,	// (0x0005daa1) listscroll_midp_info_pane_t3

0x2755,	// (0x0005dadb) listscroll_midp_info_pane_t4_ParamLimits

0x2755,	// (0x0005dadb) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0006abb0) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0006abb0) listscroll_midp_info_pane_t

0x8ac8,	// (0x00063e4e) scroll_pane_cp21

0x265f,	// (0x0005d9e5) form_midp_field_choice_group_pane

0x2668,	// (0x0005d9ee) form_midp_field_text_pane

0x26ab,	// (0x0005da31) form_midp_field_time_pane

0x26b3,	// (0x0005da39) form_midp_gauge_slider_pane

0x26bc,	// (0x0005da42) form_midp_gauge_wait_pane

0x5d6b,	// (0x000610f1) form_midp_image_pane

0xbb30,	// (0x00066eb6) list_single_midp_pane_ParamLimits

0xbb30,	// (0x00066eb6) list_single_midp_pane

0xc5d0,	// (0x00067956) form_midp_field_text_pane_t1

0x240f,	// (0x0005d795) input_focus_pane_cp050

0x264e,	// (0x0005d9d4) list_midp_form_text_pane

0x25f2,	// (0x0005d978) form_midp_field_choice_group_pane_t1

0x2600,	// (0x0005d986) input_focus_pane_cp051

0x2614,	// (0x0005d99a) list_midp_choice_pane

0x5d6b,	// (0x000610f1) status_idle_pane

0x25d6,	// (0x0005d95c) form_midp_field_time_pane_t1

0x5d61,	// (0x000610e7) wait_anim_pane_g2_copy1

0x25e4,	// (0x0005d96a) form_midp_field_time_pane_t2

0x0001,

0xea0b,	// (0x00069d91) aid_navinavi_width_2_pane

0xf825,	// (0x0006abab) form_midp_field_time_pane_t

0x5d6b,	// (0x000610f1) input_focus_pane_cp052

0x5d6b,	// (0x000610f1) bg_input_focus_pane_cp040

0x2596,	// (0x0005d91c) form_midp_gauge_slider_pane_t1

0x25a4,	// (0x0005d92a) form_midp_gauge_slider_pane_t2

0xc5b4,	// (0x0006793a) form_midp_gauge_slider_pane_t3

0xc5c2,	// (0x00067948) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0006aba2) form_midp_gauge_slider_pane_t

0x25ce,	// (0x0005d954) form_midp_slider_pane

0x5dc5,	// (0x0006114b) bg_input_focus_pane_cp041_ParamLimits

0x5dc5,	// (0x0006114b) bg_input_focus_pane_cp041

0x2563,	// (0x0005d8e9) form_midp_gauge_wait_pane_t1_ParamLimits

0x2563,	// (0x0005d8e9) form_midp_gauge_wait_pane_t1

0x2575,	// (0x0005d8fb) form_midp_gauge_wait_pane_t2_ParamLimits

0x2575,	// (0x0005d8fb) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0006ab9d) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0006ab9d) form_midp_gauge_wait_pane_t

0x2587,	// (0x0005d90d) form_midp_wait_pane_ParamLimits

0x2587,	// (0x0005d90d) form_midp_wait_pane

0x252b,	// (0x0005d8b1) form_midp_image_pane_g1

0x2534,	// (0x0005d8ba) form_midp_image_pane_t1

0x2543,	// (0x0005d8c9) form_midp_image_pane_t2

0x2552,	// (0x0005d8d8) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0006ab96) form_midp_image_pane_t

0x2522,	// (0x0005d8a8) list_single_midp_pane_g1

0xec4b,	// (0x00069fd1) list_single_midp_pane_t1

0xbb19,	// (0x00066e9f) list_midp_form_item_pane_ParamLimits

0xbb19,	// (0x00066e9f) list_midp_form_item_pane

0xe9c5,	// (0x00069d4b) list_midp_form_item_pane_t1

0xe9d4,	// (0x00069d5a) midp_ticker_pane_g1

0xe9e0,	// (0x00069d66) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006aae3) midp_ticker_pane_g

0xac9c,	// (0x00066022) midp_ticker_pane_t1

0xca08,	// (0x00067d8e) midp_editing_number_pane_t1

0x390b,	// (0x0005ec91) midp_editing_number_pane

0x391a,	// (0x0005eca0) midp_ticker_pane

0x36aa,	// (0x0005ea30) ai_message_heading_pane

0x5d6b,	// (0x000610f1) bg_popup_window_pane_cp14

0x36b2,	// (0x0005ea38) listscroll_ai_message_pane

0x3630,	// (0x0005e9b6) ai_message_heading_pane_g1_ParamLimits

0x3630,	// (0x0005e9b6) ai_message_heading_pane_g1

0x363c,	// (0x0005e9c2) ai_message_heading_pane_g2_ParamLimits

0x363c,	// (0x0005e9c2) ai_message_heading_pane_g2

0x364a,	// (0x0005e9d0) ai_message_heading_pane_g3_ParamLimits

0x364a,	// (0x0005e9d0) ai_message_heading_pane_g3

0x3656,	// (0x0005e9dc) ai_message_heading_pane_g4_ParamLimits

0x3656,	// (0x0005e9dc) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0006acd7) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0006acd7) ai_message_heading_pane_g

0x3662,	// (0x0005e9e8) ai_message_heading_pane_t1_ParamLimits

0x3662,	// (0x0005e9e8) ai_message_heading_pane_t1

0x367c,	// (0x0005ea02) ai_message_heading_pane_t2_ParamLimits

0x367c,	// (0x0005ea02) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0006ace0) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0006ace0) ai_message_heading_pane_t

0x3690,	// (0x0005ea16) bg_popup_heading_pane_cp1_ParamLimits

0x3690,	// (0x0005ea16) bg_popup_heading_pane_cp1

0x361e,	// (0x0005e9a4) list_ai_message_pane_ParamLimits

0x361e,	// (0x0005e9a4) list_ai_message_pane

0x8ac8,	// (0x00063e4e) scroll_pane_cp10

0x35ba,	// (0x0005e940) list_ai_message_pane_g1

0x35c2,	// (0x0005e948) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0006acb4) list_ai_message_pane_g

0x35ca,	// (0x0005e950) list_ai_message_pane_t1_ParamLimits

0x35ca,	// (0x0005e950) list_ai_message_pane_t1

0x35df,	// (0x0005e965) list_ai_message_pane_t2_ParamLimits

0x35df,	// (0x0005e965) list_ai_message_pane_t2

0x35f4,	// (0x0005e97a) list_ai_message_pane_t3_ParamLimits

0x35f4,	// (0x0005e97a) list_ai_message_pane_t3

0x3609,	// (0x0005e98f) list_ai_message_pane_t4_ParamLimits

0x3609,	// (0x0005e98f) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0006acb9) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0006acb9) list_ai_message_pane_t

0xc849,	// (0x00067bcf) cell_ai_soft_ind_pane_ParamLimits

0xc849,	// (0x00067bcf) cell_ai_soft_ind_pane

0xe9ec,	// (0x00069d72) cell_ai_soft_ind_pane_g1_ParamLimits

0xe9ec,	// (0x00069d72) cell_ai_soft_ind_pane_g1

0x5d6b,	// (0x000610f1) grid_highlight_cp1

0xe9f9,	// (0x00069d7f) text_secondary_cp56_ParamLimits

0xe9f9,	// (0x00069d7f) text_secondary_cp56

0x3578,	// (0x0005e8fe) example_general_pane_ParamLimits

0x3578,	// (0x0005e8fe) example_general_pane

0x3584,	// (0x0005e90a) example_parent_pane_g1_ParamLimits

0x3584,	// (0x0005e90a) example_parent_pane_g1

0x3590,	// (0x0005e916) example_parent_pane_t1_ParamLimits

0x3590,	// (0x0005e916) example_parent_pane_t1

0xb32c,	// (0x000666b2) popup_preview_text_window_ParamLimits

0xb32c,	// (0x000666b2) popup_preview_text_window

0xe8f1,	// (0x00069c77) list_single_pane_cp2_g4

0x5fae,	// (0x00061334) bg_popup_preview_window_pane_ParamLimits

0x5fae,	// (0x00061334) bg_popup_preview_window_pane

0x32bf,	// (0x0005e645) popup_preview_text_window_t1_ParamLimits

0x32bf,	// (0x0005e645) popup_preview_text_window_t1

0x32dd,	// (0x0005e663) popup_preview_text_window_t2_ParamLimits

0x32dd,	// (0x0005e663) popup_preview_text_window_t2

0x3326,	// (0x0005e6ac) popup_preview_text_window_t3_ParamLimits

0x3326,	// (0x0005e6ac) popup_preview_text_window_t3

0x336b,	// (0x0005e6f1) popup_preview_text_window_t4_ParamLimits

0x336b,	// (0x0005e6f1) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0006ac88) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0006ac88) popup_preview_text_window_t

0x33e9,	// (0x0005e76f) scroll_pane_cp11

0x239b,	// (0x0005d721) bg_popup_preview_window_pane_g1

0x3273,	// (0x0005e5f9) bg_popup_preview_window_pane_g2

0x327d,	// (0x0005e603) bg_popup_preview_window_pane_g3

0x3287,	// (0x0005e60d) bg_popup_preview_window_pane_g4

0x3291,	// (0x0005e617) bg_popup_preview_window_pane_g5

0x329b,	// (0x0005e621) bg_popup_preview_window_pane_g6

0x32a3,	// (0x0005e629) bg_popup_preview_window_pane_g7

0x32ab,	// (0x0005e631) bg_popup_preview_window_pane_g8

0xe663,	// (0x000699e9) aid_popup_width_pane

0xb29c,	// (0x00066622) popup_midp_note_alarm_window_ParamLimits

0xb29c,	// (0x00066622) popup_midp_note_alarm_window

0x8990,	// (0x00063d16) data_form_pane_ParamLimits

0xa6e9,	// (0x00065a6f) form_field_data_pane_g1

0xa6f3,	// (0x00065a79) form_field_data_pane_t1_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_ParamLimits

0xc534,	// (0x000678ba) data_form_wide_pane_ParamLimits

0xc545,	// (0x000678cb) form_field_data_wide_pane_g1

0xc551,	// (0x000678d7) form_field_data_wide_pane_t1_ParamLimits

0x6163,	// (0x000614e9) input_focus_pane_cp6_ParamLimits

0xa834,	// (0x00065bba) input_popup_find_pane_g1_ParamLimits

0xa834,	// (0x00065bba) input_popup_find_pane_g1

0xf1b8,	// (0x0006a53e) aid_navi_side_left_pane

0xf1cd,	// (0x0006a553) aid_navi_side_right_pane

0x2c88,	// (0x0005e00e) bg_popup_window_pane_cp30_ParamLimits

0x2c88,	// (0x0005e00e) bg_popup_window_pane_cp30

0x2d02,	// (0x0005e088) popup_midp_note_alarm_window_g1_ParamLimits

0x2d02,	// (0x0005e088) popup_midp_note_alarm_window_g1

0x2d32,	// (0x0005e0b8) popup_midp_note_alarm_window_t1_ParamLimits

0x2d32,	// (0x0005e0b8) popup_midp_note_alarm_window_t1

0x2dd3,	// (0x0005e159) popup_midp_note_alarm_window_t2_ParamLimits

0x2dd3,	// (0x0005e159) popup_midp_note_alarm_window_t2

0x2e81,	// (0x0005e207) popup_midp_note_alarm_window_t3_ParamLimits

0x2e81,	// (0x0005e207) popup_midp_note_alarm_window_t3

0x2eb3,	// (0x0005e239) popup_midp_note_alarm_window_t4_ParamLimits

0x2eb3,	// (0x0005e239) popup_midp_note_alarm_window_t4

0x2ed9,	// (0x0005e25f) popup_midp_note_alarm_window_t5_ParamLimits

0x2ed9,	// (0x0005e25f) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0006ac25) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0006ac25) popup_midp_note_alarm_window_t

0x2f85,	// (0x0005e30b) wait_bar_pane_cp1_ParamLimits

0x2f85,	// (0x0005e30b) wait_bar_pane_cp1

0x5d6b,	// (0x000610f1) wait_anim_pane_copy1

0x5d6b,	// (0x000610f1) wait_border_pane_copy1

0x296d,	// (0x0005dcf3) wait_border_pane_g1_copy1

0xc56b,	// (0x000678f1) form_field_popup_pane_g1

0xa70d,	// (0x00065a93) form_field_popup_pane_t1_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_cp7_ParamLimits

0x89ca,	// (0x00063d50) list_form_pane_ParamLimits

0xc573,	// (0x000678f9) form_field_popup_wide_pane_g1

0xc57b,	// (0x00067901) form_field_popup_wide_pane_t1_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_cp8_ParamLimits

0x89d6,	// (0x00063d5c) list_form_wide_pane_ParamLimits

0x3c63,	// (0x0005efe9) aid_size_cell_graphic_pane

0xa78c,	// (0x00065b12) data_form_pane_t1_ParamLimits

0xbcc5,	// (0x0006704b) data_form_wide_pane_t1_ParamLimits

0xb730,	// (0x00066ab6) bg_status_flat_pane

0x9e4e,	// (0x000651d4) title_pane_t1_ParamLimits

0x5d8d,	// (0x00061113) title_pane_t2_ParamLimits

0x5db3,	// (0x00061139) title_pane_t3_ParamLimits

0xf557,	// (0x0006a8dd) title_pane_t_ParamLimits

0xa944,	// (0x00065cca) level_1_signal_ParamLimits

0xa956,	// (0x00065cdc) level_2_signal_ParamLimits

0xa969,	// (0x00065cef) level_3_signal_ParamLimits

0xa97c,	// (0x00065d02) level_4_signal_ParamLimits

0xa98f,	// (0x00065d15) level_5_signal_ParamLimits

0xa9a2,	// (0x00065d28) level_6_signal_ParamLimits

0xa9b5,	// (0x00065d3b) level_7_signal_ParamLimits

0xa944,	// (0x00065cca) level_1_battery_ParamLimits

0xa956,	// (0x00065cdc) level_2_battery_ParamLimits

0xa969,	// (0x00065cef) level_3_battery_ParamLimits

0xa97c,	// (0x00065d02) level_4_battery_ParamLimits

0xa98f,	// (0x00065d15) level_5_battery_ParamLimits

0xa9a2,	// (0x00065d28) level_6_battery_ParamLimits

0xa9b5,	// (0x00065d3b) level_7_battery_ParamLimits

0x2b8d,	// (0x0005df13) bg_status_flat_pane_g1

0x2b95,	// (0x0005df1b) bg_status_flat_pane_g2

0x2b9d,	// (0x0005df23) bg_status_flat_pane_g3

0x2ba5,	// (0x0005df2b) bg_status_flat_pane_g4

0x2bad,	// (0x0005df33) bg_status_flat_pane_g5

0x2bb5,	// (0x0005df3b) bg_status_flat_pane_g6

0x2bbd,	// (0x0005df43) bg_status_flat_pane_g7

0x9ee2,	// (0x00065268) tabs_3_active_pane_t1_ParamLimits

0x9ee2,	// (0x00065268) tabs_3_passive_pane_t1_ParamLimits

0x9efc,	// (0x00065282) tabs_4_active_pane_t1_ParamLimits

0x9efc,	// (0x00065282) tabs_4_1_passive_pane_t1_ParamLimits

0xa84a,	// (0x00065bd0) tabs_2_active_pane_t1_ParamLimits

0xa84a,	// (0x00065bd0) tabs_2_passive_pane_t1_ParamLimits

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp4_ParamLimits

0xa85c,	// (0x00065be2) tabs_2_long_active_pane_t1_ParamLimits

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp4_ParamLimits

0x0336,	// (0x0005b6bc) list_single_midp_graphic_pane_t1_ParamLimits

0x5dc5,	// (0x0006114b) bg_active_tab_pane_cp5_ParamLimits

0xa86f,	// (0x00065bf5) tabs_3_long_active_pane_t1_ParamLimits

0x016c,	// (0x0005b4f2) bg_passive_tab_pane_cp5_ParamLimits

0x0336,	// (0x0005b6bc) list_single_midp_graphic_pane_t1

0xb730,	// (0x00066ab6) bg_status_flat_pane_ParamLimits

0x2013,	// (0x0005d399) indicator_pane_cp2_ParamLimits

0x2013,	// (0x0005d399) indicator_pane_cp2

0xb8c6,	// (0x00066c4c) navi_pane_srt_ParamLimits

0xb8c6,	// (0x00066c4c) navi_pane_srt

0x217a,	// (0x0005d500) popup_clock_digital_analogue_window_cp1

0x5e09,	// (0x0006118f) indicator_pane_t1

0xe9a8,	// (0x00069d2e) copy_highlight_pane

0xe9a8,	// (0x00069d2e) cursor_graphics_pane

0xe9a8,	// (0x00069d2e) graphic_within_text_pane

0xe9a8,	// (0x00069d2e) link_highlight_pane

0x33ac,	// (0x0005e732) popup_preview_text_window_t5_ParamLimits

0x33ac,	// (0x0005e732) popup_preview_text_window_t5

0xea15,	// (0x00069d9b) cursor_digital_pane

0xea15,	// (0x00069d9b) cursor_primary_pane

0xea26,	// (0x00069dac) cursor_primary_small_pane

0xea2e,	// (0x00069db4) cursor_secondary_pane

0xea36,	// (0x00069dbc) cursor_title_pane

0xea15,	// (0x00069d9b) link_highlight_digital_pane

0xea1d,	// (0x00069da3) link_highlight_primary_pane

0xea26,	// (0x00069dac) link_highlight_primary_small_pane

0xea2e,	// (0x00069db4) link_highlight_secondary_pane

0xea36,	// (0x00069dbc) link_highlight_title_pane

0xea15,	// (0x00069d9b) copy_highlight_digital_pane

0xea15,	// (0x00069d9b) copy_highlight_primary_pane

0xea26,	// (0x00069dac) copy_highlight_primary_small_pane

0xea2e,	// (0x00069db4) copy_highlight_secondary_pane

0xea36,	// (0x00069dbc) copy_highlight_title_pane

0xea2e,	// (0x00069db4) graphic_text_digital_pane

0x2c2b,	// (0x0005dfb1) graphic_text_primary_pane

0x2c34,	// (0x0005dfba) graphic_text_primary_small_pane

0xea26,	// (0x00069dac) graphic_text_secondary_pane

0xea15,	// (0x00069d9b) graphic_text_title_pane

0xacae,	// (0x00066034) cursor_primary_pane_g1

0x2c1d,	// (0x0005dfa3) cursor_text_primary_t1

0xc634,	// (0x000679ba) cursor_primary_small_pane_g1

0x2c0f,	// (0x0005df95) cursor_text_primary_small_t1

0xc62a,	// (0x000679b0) cursor_primary_small_pane_g1_copy1

0x2bf7,	// (0x0005df7d) cursor_text_primary_small_t1_copy1

0x2bd5,	// (0x0005df5b) cursor_text_title_t1

0xc620,	// (0x000679a6) cursor_title_pane_g1

0xacae,	// (0x00066034) cursor_digital_pane_g1

0xea3e,	// (0x00069dc4) cursor_text_digital_t1

0xea4c,	// (0x00069dd2) link_highlight_primary_pane_g1

0x2b7e,	// (0x0005df04) link_highlight_primary_pane_t1

0xea4c,	// (0x00069dd2) link_highlight_primary_small_pane_g1

0xea54,	// (0x00069dda) link_highlight_primary_small_pane_t1

0xea63,	// (0x00069de9) link_highlight_secondary_pane_g1

0xea6b,	// (0x00069df1) link_highlight_secondary_pane_t1

0x2af2,	// (0x0005de78) link_highlight_title_pane_g1

0x2afa,	// (0x0005de80) link_highlight_title_pane_t1

0x2adb,	// (0x0005de61) link_highlight_digital_pane_g1

0x2ae3,	// (0x0005de69) link_highlight_digital_pane_t1

0x29a3,	// (0x0005dd29) copy_highlight_primary_pane_g1

0x29ba,	// (0x0005dd40) copy_highlight_primary_pane_t1

0x29a3,	// (0x0005dd29) copy_highlight_primary_small_pane_g1

0x29ab,	// (0x0005dd31) copy_highlight_primary_small_pane_t1

0xea7a,	// (0x00069e00) copy_highlight_secondary_pane_g1

0xea82,	// (0x00069e08) copy_highlight_secondary_pane_t1

0x298c,	// (0x0005dd12) copy_highlight_title_pane_g1

0x2994,	// (0x0005dd1a) copy_highlight_title_pane_t1

0x29a3,	// (0x0005dd29) copy_highlight_digital_pane_g1

0x3e33,	// (0x0005f1b9) copy_highlight_digital_pane_t1

0x3d87,	// (0x0005f10d) graphic_text_primary_pane_g1

0x3e17,	// (0x0005f19d) graphic_text_primary_pane_t1

0x3e25,	// (0x0005f1ab) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0006ad54) graphic_text_primary_pane_t

0x3df3,	// (0x0005f179) graphic_text_primary_small_pane_g1

0x3dfb,	// (0x0005f181) graphic_text_primary_small_pane_t1

0x3e09,	// (0x0005f18f) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006ad4f) graphic_text_primary_small_pane_t

0x3dcf,	// (0x0005f155) graphic_text_secondary_pane_g1

0x3dd7,	// (0x0005f15d) graphic_text_secondary_pane_t1

0x3de5,	// (0x0005f16b) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006ad4a) graphic_text_secondary_pane_t

0x3dab,	// (0x0005f131) graphic_text_title_pane_g1

0x3db3,	// (0x0005f139) graphic_text_title_pane_t1

0x3dc1,	// (0x0005f147) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0006ad45) graphic_text_title_pane_t

0x3d87,	// (0x0005f10d) graphic_text_digital_pane_g1

0x3d8f,	// (0x0005f115) graphic_text_digital_pane_t1

0x3d9d,	// (0x0005f123) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0006ad40) graphic_text_digital_pane_t

0x5dc5,	// (0x0006114b) navi_icon_pane_srt_ParamLimits

0x5dc5,	// (0x0006114b) navi_icon_pane_srt

0x5d6b,	// (0x000610f1) navi_midp_pane_srt

0x5d6b,	// (0x000610f1) navi_navi_pane_srt

0x5dc5,	// (0x0006114b) navi_text_pane_srt_ParamLimits

0x5dc5,	// (0x0006114b) navi_text_pane_srt

0x3d52,	// (0x0005f0d8) navi_navi_icon_text_pane_srt

0x3d5a,	// (0x0005f0e0) navi_navi_pane_srt_g1_ParamLimits

0x3d5a,	// (0x0005f0e0) navi_navi_pane_srt_g1

0x3d6c,	// (0x0005f0f2) navi_navi_pane_srt_g2_ParamLimits

0x3d6c,	// (0x0005f0f2) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006ad3b) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006ad3b) navi_navi_pane_srt_g

0x3d7e,	// (0x0005f104) navi_navi_tabs_pane_srt

0x3d52,	// (0x0005f0d8) navi_navi_text_pane_srt

0x3d52,	// (0x0005f0d8) navi_navi_volume_pane_srt

0x3d43,	// (0x0005f0c9) navi_navi_text_pane_srt_t1

0x07bd,	// (0x0005bb43) navi_navi_volume_pane_srt_g1

0x07c5,	// (0x0005bb4b) volume_small_pane_srt_ParamLimits

0x07c5,	// (0x0005bb4b) volume_small_pane_srt

0xf496,	// (0x0006a81c) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x0006a81c) volume_small_pane_srt_g1

0xf4a6,	// (0x0006a82c) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x0006a82c) volume_small_pane_srt_g2

0xf4b7,	// (0x0006a83d) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x0006a83d) volume_small_pane_srt_g3

0xf4c8,	// (0x0006a84e) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x0006a84e) volume_small_pane_srt_g4

0xf4d9,	// (0x0006a85f) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x0006a85f) volume_small_pane_srt_g5

0xf4ea,	// (0x0006a870) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x0006a870) volume_small_pane_srt_g6

0xf4fb,	// (0x0006a881) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x0006a881) volume_small_pane_srt_g7

0xf50c,	// (0x0006a892) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x0006a892) volume_small_pane_srt_g8

0xf51d,	// (0x0006a8a3) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x0006a8a3) volume_small_pane_srt_g9

0xf52e,	// (0x0006a8b4) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x0006a8b4) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0006aae8) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0006aae8) volume_small_pane_srt_g

0x6063,	// (0x000613e9) query_popup_data_pane_cp2

0x3d29,	// (0x0005f0af) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d29,	// (0x0005f0af) navi_navi_icon_text_pane_srt_t1

0x2c2b,	// (0x0005dfb1) navi_tabs_2_long_pane_srt

0x2c2b,	// (0x0005dfb1) navi_tabs_2_pane_srt

0x2c2b,	// (0x0005dfb1) navi_tabs_3_long_pane_srt

0x2c2b,	// (0x0005dfb1) navi_tabs_3_pane_srt

0x2c2b,	// (0x0005dfb1) navi_tabs_4_pane_srt

0x079d,	// (0x0005bb23) tabs_2_active_pane_srt_ParamLimits

0x079d,	// (0x0005bb23) tabs_2_active_pane_srt

0x07ad,	// (0x0005bb33) tabs_2_passive_pane_srt_ParamLimits

0x07ad,	// (0x0005bb33) tabs_2_passive_pane_srt

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp1_srt_ParamLimits

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp1_srt

0x3cf5,	// (0x0005f07b) bg_passive_tab_pane_g1_cp1_srt

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp1_srt

0x3cfe,	// (0x0005f084) bg_passive_tab_pane_g3_cp1_srt

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp1_srt_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp1_srt

0x3d07,	// (0x0005f08d) tabs_2_active_pane_srt_g1

0xcb1d,	// (0x00067ea3) tabs_2_active_pane_srt_t1_ParamLimits

0xcb1d,	// (0x00067ea3) tabs_2_active_pane_srt_t1

0x3cf5,	// (0x0005f07b) bg_active_tab_pane_g1_cp1_srt

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp1_srt

0x3cfe,	// (0x0005f084) bg_active_tab_pane_g3_cp1_srt

0x076a,	// (0x0005baf0) tabs_3_active_pane_srt_ParamLimits

0x076a,	// (0x0005baf0) tabs_3_active_pane_srt

0x077b,	// (0x0005bb01) tabs_3_passive_pane_cp_srt_ParamLimits

0x077b,	// (0x0005bb01) tabs_3_passive_pane_cp_srt

0x078c,	// (0x0005bb12) tabs_3_passive_pane_srt_ParamLimits

0x078c,	// (0x0005bb12) tabs_3_passive_pane_srt

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp2_srt_ParamLimits

0x240f,	// (0x0005d795) bg_passive_tab_pane_cp2_srt

0xea91,	// (0x00069e17) bg_passive_tab_pane_g1_cp2_srt

0x9042,	// (0x000643c8) bg_passive_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069e20) bg_passive_tab_pane_g3_cp2_srt

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp2_srt_ParamLimits

0x5ef8,	// (0x0006127e) bg_active_tab_pane_cp2_srt

0x3cdb,	// (0x0005f061) tabs_3_active_pane_srt_g1

0xcb07,	// (0x00067e8d) tabs_3_active_pane_srt_t1_ParamLimits

0xcb07,	// (0x00067e8d) tabs_3_active_pane_srt_t1

0xea91,	// (0x00069e17) bg_active_tab_pane_g1_cp2_srt

0x9042,	// (0x000643c8) bg_active_tab_pane_g2_cp2_srt

0xea9a,	// (0x00069e20) bg_active_tab_pane_g3_cp2_srt

0x0722,	// (0x0005baa8) tabs_4_active_pane_srt_ParamLimits

0x0722,	// (0x0005baa8) tabs_4_active_pane_srt

0x0734,	// (0x0005baba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0734,	// (0x0005baba) tabs_4_passive_pane_cp2_srt

0x00fa,	// (0x0005b480) aid_size_cell_toolbar

0x3764,	// (0x0005eaea) main_idle_act_pane_ParamLimits

0x1a23,	// (0x0005cda9) popup_large_graphic_colour_window_ParamLimits

0xb5f2,	// (0x00066978) popup_toolbar_window_ParamLimits

0xb5f2,	// (0x00066978) popup_toolbar_window

0x393c,	// (0x0005ecc2) list_single_graphic_2heading_pane_ParamLimits

0x393c,	// (0x0005ecc2) list_single_graphic_2heading_pane

0x8ca0,	// (0x00064026) aid_size_cell_apps_grid_lsc_pane

0x8cb2,	// (0x00064038) aid_size_cell_apps_grid_prt_pane

0x016c,	// (0x0005b4f2) bg_wml_button_pane_cp1_ParamLimits

0x016c,	// (0x0005b4f2) bg_wml_button_pane_cp1

0xc5d0,	// (0x00067956) form_midp_field_text_pane_t1_ParamLimits

0x240f,	// (0x0005d795) input_focus_pane_cp050_ParamLimits

0x264e,	// (0x0005d9d4) list_midp_form_text_pane_ParamLimits

0x2600,	// (0x0005d986) input_focus_pane_cp051_ParamLimits

0x2614,	// (0x0005d99a) list_midp_choice_pane_ParamLimits

0xbb03,	// (0x00066e89) list_single_2graphic_pane_cp3_ParamLimits

0xbb03,	// (0x00066e89) list_single_2graphic_pane_cp3

0x498e,	// (0x0005fd14) list_single_midp_graphic_pane_ParamLimits

0x498e,	// (0x0005fd14) list_single_midp_graphic_pane

0xeb23,	// (0x00069ea9) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb23,	// (0x00069ea9) list_single_graphic_2heading_pane_g1

0xeb2f,	// (0x00069eb5) list_single_graphic_2heading_pane_g4_ParamLimits

0xeb2f,	// (0x00069eb5) list_single_graphic_2heading_pane_g4

0xeb3b,	// (0x00069ec1) list_single_graphic_2heading_pane_g5_ParamLimits

0xeb3b,	// (0x00069ec1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006ab3b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006ab3b) list_single_graphic_2heading_pane_g

0xeb47,	// (0x00069ecd) list_single_graphic_2heading_pane_t1_ParamLimits

0xeb47,	// (0x00069ecd) list_single_graphic_2heading_pane_t1

0xeb5b,	// (0x00069ee1) list_single_graphic_2heading_pane_t2_ParamLimits

0xeb5b,	// (0x00069ee1) list_single_graphic_2heading_pane_t2

0xeb77,	// (0x00069efd) list_single_graphic_2heading_pane_t3_ParamLimits

0xeb77,	// (0x00069efd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006ab42) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006ab42) list_single_graphic_2heading_pane_t

0x22d9,	// (0x0005d65f) bg_popup_sub_pane_cp2

0x2303,	// (0x0005d689) grid_toobar_pane

0x029a,	// (0x0005b620) cell_toolbar_pane_ParamLimits

0x029a,	// (0x0005b620) cell_toolbar_pane

0x233f,	// (0x0005d6c5) cell_toolbar_pane_g1_ParamLimits

0x233f,	// (0x0005d6c5) cell_toolbar_pane_g1

0x2353,	// (0x0005d6d9) cell_toolbar_pane_g2_ParamLimits

0x2353,	// (0x0005d6d9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0006ab50) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0006ab50) cell_toolbar_pane_g

0x2375,	// (0x0005d6fb) grid_highlight_pane_cp2_ParamLimits

0x2375,	// (0x0005d6fb) grid_highlight_pane_cp2

0x238f,	// (0x0005d715) toolbar_button_pane

0x239b,	// (0x0005d721) toolbar_button_pane_g1

0x23a3,	// (0x0005d729) toolbar_button_pane_g2

0x23ab,	// (0x0005d731) toolbar_button_pane_g3

0x23b3,	// (0x0005d739) toolbar_button_pane_g4

0x23bb,	// (0x0005d741) toolbar_button_pane_g5

0x23c3,	// (0x0005d749) toolbar_button_pane_g6

0x23cb,	// (0x0005d751) toolbar_button_pane_g7

0x23d3,	// (0x0005d759) toolbar_button_pane_g8

0x23db,	// (0x0005d761) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0006ab55) toolbar_button_pane_g

0x02de,	// (0x0005b664) list_single_2graphic_pane_g1_cp3_ParamLimits

0x02de,	// (0x0005b664) list_single_2graphic_pane_g1_cp3

0xba65,	// (0x00066deb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba65,	// (0x00066deb) list_single_2graphic_pane_g2_cp3

0x02fb,	// (0x0005b681) list_single_2graphic_pane_g3_cp3

0x0303,	// (0x0005b689) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0303,	// (0x0005b689) list_single_2graphic_pane_g4_cp3

0x030f,	// (0x0005b695) list_single_2graphic_pane_t1_cp3_ParamLimits

0x030f,	// (0x0005b695) list_single_2graphic_pane_t1_cp3

0x032a,	// (0x0005b6b0) list_single_midp_graphic_pane_g2_ParamLimits

0x032a,	// (0x0005b6b0) list_single_midp_graphic_pane_g2

0xeb0b,	// (0x00069e91) aid_zoom_text_primary

0xeb13,	// (0x00069e99) aid_zoom_text_secondary

0xad06,	// (0x0006608c) status_small_pane_g7_ParamLimits

0xad06,	// (0x0006608c) status_small_pane_g7

0xad29,	// (0x000660af) status_small_pane_t1_ParamLimits

0x9e36,	// (0x000651bc) title_pane_g2

0x0003,

0xf54e,	// (0x0006a8d4) title_pane_g

0xa0c2,	// (0x00065448) aid_size_cell_colour_1_pane_ParamLimits

0xa0c2,	// (0x00065448) aid_size_cell_colour_1_pane

0xa0d6,	// (0x0006545c) aid_size_cell_colour_2_pane_ParamLimits

0xa0d6,	// (0x0006545c) aid_size_cell_colour_2_pane

0xa0ea,	// (0x00065470) aid_size_cell_colour_3_pane_ParamLimits

0xa0ea,	// (0x00065470) aid_size_cell_colour_3_pane

0xa0fe,	// (0x00065484) aid_size_cell_colour_4_pane_ParamLimits

0xa0fe,	// (0x00065484) aid_size_cell_colour_4_pane

0xf0f4,	// (0x0006a47a) title_pane_stacon_g1_ParamLimits

0xf0f4,	// (0x0006a47a) title_pane_stacon_g1

0x2a11,	// (0x0005dd97) popup_note_wait_window_g3_ParamLimits

0x2a11,	// (0x0005dd97) popup_note_wait_window_g3

0x2a88,	// (0x0005de0e) popup_note_wait_window_t5_ParamLimits

0x2a88,	// (0x0005de0e) popup_note_wait_window_t5

0x5d6b,	// (0x000610f1) main_feb_china_hwr_fs_writing_pane

0xaf89,	// (0x0006630f) popup_feb_china_hwr_fs_window_ParamLimits

0xaf89,	// (0x0006630f) popup_feb_china_hwr_fs_window

0xba76,	// (0x00066dfc) aid_size_cell_hwr_fs_ParamLimits

0xba76,	// (0x00066dfc) aid_size_cell_hwr_fs

0x240f,	// (0x0005d795) bg_popup_sub_pane_cp3_ParamLimits

0x240f,	// (0x0005d795) bg_popup_sub_pane_cp3

0xba8b,	// (0x00066e11) grid_hwr_fs_pane_ParamLimits

0xba8b,	// (0x00066e11) grid_hwr_fs_pane

0x0391,	// (0x0005b717) linegrid_hwr_fs_pane_ParamLimits

0x0391,	// (0x0005b717) linegrid_hwr_fs_pane

0xbaa3,	// (0x00066e29) cell_hwr_fs_pane_ParamLimits

0xbaa3,	// (0x00066e29) cell_hwr_fs_pane

0x241b,	// (0x0005d7a1) linegrid_hwr_fs_pane_g1_ParamLimits

0x241b,	// (0x0005d7a1) linegrid_hwr_fs_pane_g1

0xbac9,	// (0x00066e4f) linegrid_hwr_fs_pane_g2_ParamLimits

0xbac9,	// (0x00066e4f) linegrid_hwr_fs_pane_g2

0x2439,	// (0x0005d7bf) linegrid_hwr_fs_pane_g3_ParamLimits

0x2439,	// (0x0005d7bf) linegrid_hwr_fs_pane_g3

0x03c5,	// (0x0005b74b) linegrid_hwr_fs_pane_g4_ParamLimits

0x03c5,	// (0x0005b74b) linegrid_hwr_fs_pane_g4

0x03e3,	// (0x0005b769) linegrid_hwr_fs_pane_g5_ParamLimits

0x03e3,	// (0x0005b769) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006ab7b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006ab7b) linegrid_hwr_fs_pane_g

0x2445,	// (0x0005d7cb) cell_hwr_fs_pane_g1_ParamLimits

0x2445,	// (0x0005d7cb) cell_hwr_fs_pane_g1

0x2210,	// (0x0005d596) cell_hwr_fs_pane_g2_ParamLimits

0x2210,	// (0x0005d596) cell_hwr_fs_pane_g2

0xbadb,	// (0x00066e61) cell_hwr_fs_pane_g3_ParamLimits

0xbadb,	// (0x00066e61) cell_hwr_fs_pane_g3

0xbae8,	// (0x00066e6e) cell_hwr_fs_pane_g4_ParamLimits

0xbae8,	// (0x00066e6e) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0006ab86) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006ab86) cell_hwr_fs_pane_g

0xbaf5,	// (0x00066e7b) cell_hwr_fs_pane_t1

0x5d6b,	// (0x000610f1) grid_highlight_pane_cp6

0x5d6b,	// (0x000610f1) main_idle_act2_pane

0x8aaf,	// (0x00063e35) aid_inside_area_popup_secondary

0xc69b,	// (0x00067a21) aid_inside_area_window_primary_ParamLimits

0xc69b,	// (0x00067a21) aid_inside_area_window_primary

0x3e42,	// (0x0005f1c8) ai2_news_ticker_pane

0x3e4a,	// (0x0005f1d0) aid_size_cell_ai1_link_ParamLimits

0x3e4a,	// (0x0005f1d0) aid_size_cell_ai1_link

0x3e64,	// (0x0005f1ea) popup_ai2_data_window_ParamLimits

0x3e64,	// (0x0005f1ea) popup_ai2_data_window

0x3e82,	// (0x0005f208) popup_ai2_link_window_ParamLimits

0x3e82,	// (0x0005f208) popup_ai2_link_window

0x240f,	// (0x0005d795) bg_popup_sub_pane_cp4_ParamLimits

0x240f,	// (0x0005d795) bg_popup_sub_pane_cp4

0x3e98,	// (0x0005f21e) grid_ai2_link_pane_ParamLimits

0x3e98,	// (0x0005f21e) grid_ai2_link_pane

0x3eaf,	// (0x0005f235) popup_ai2_link_window_g1_ParamLimits

0x3eaf,	// (0x0005f235) popup_ai2_link_window_g1

0x3ebb,	// (0x0005f241) popup_ai2_link_window_g2_ParamLimits

0x3ebb,	// (0x0005f241) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0006ad59) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0006ad59) popup_ai2_link_window_g

0x3ecc,	// (0x0005f252) ai2_mp_button_pane

0x3ed4,	// (0x0005f25a) ai2_mp_volume_pane

0x2600,	// (0x0005d986) bg_popup_sub_pane_cp5_ParamLimits

0x2600,	// (0x0005d986) bg_popup_sub_pane_cp5

0x3edc,	// (0x0005f262) heading_ai2_gene_pane_ParamLimits

0x3edc,	// (0x0005f262) heading_ai2_gene_pane

0x3ee8,	// (0x0005f26e) list_ai2_gene_pane_ParamLimits

0x3ee8,	// (0x0005f26e) list_ai2_gene_pane

0x3f30,	// (0x0005f2b6) cell_ai2_link_pane_ParamLimits

0x3f30,	// (0x0005f2b6) cell_ai2_link_pane

0x3f46,	// (0x0005f2cc) cell_ai2_link_pane_g1

0x5d6b,	// (0x000610f1) grid_highlight_pane_cp7

0x07da,	// (0x0005bb60) ai2_mp_volume_pane_g1

0x4019,	// (0x0005f39f) ai2_mp_volume_pane_g2

0x3f8e,	// (0x0005f314) list_ai2_gene_pane_t1

0x4021,	// (0x0005f3a7) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0006ad72) ai2_mp_volume_pane_g

0x07e2,	// (0x0005bb68) volume_small_pane_cp3

0x4029,	// (0x0005f3af) aid_size_cell_ai2_button

0x4031,	// (0x0005f3b7) grid_ai2_button_pane

0x403a,	// (0x0005f3c0) cell_ai2_button_pane_ParamLimits

0x403a,	// (0x0005f3c0) cell_ai2_button_pane

0x5d61,	// (0x000610e7) cell_ai2_button_pane_g1

0x5d6b,	// (0x000610f1) grid_highlight_pane_cp8

0x3fd9,	// (0x0005f35f) ai2_gene_pane_t1_ParamLimits

0x3fd9,	// (0x0005f35f) ai2_gene_pane_t1

0xaee7,	// (0x0006626d) aid_height_parent_landscape

0xc890,	// (0x00067c16) aid_height_set_list

0x3764,	// (0x0005eaea) aid_size_parent

0x3c63,	// (0x0005efe9) aid_size_cell_graphic_pane_ParamLimits

0x3ef8,	// (0x0005f27e) popup_ai2_data_window_g1_ParamLimits

0x3ef8,	// (0x0005f27e) popup_ai2_data_window_g1

0x3f04,	// (0x0005f28a) ai2_news_ticker_pane_g1

0x3f0c,	// (0x0005f292) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006ad5e) ai2_news_ticker_pane_g

0x3f14,	// (0x0005f29a) ai2_news_ticker_pane_t1

0x3f22,	// (0x0005f2a8) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0006ad63) ai2_news_ticker_pane_t

0x3f4f,	// (0x0005f2d5) heading_ai2_gene_pane_g1

0x3f57,	// (0x0005f2dd) heading_ai2_gene_pane_t1_ParamLimits

0x3f57,	// (0x0005f2dd) heading_ai2_gene_pane_t1

0x3f6c,	// (0x0005f2f2) list_highlight_pane_cp6

0x3f74,	// (0x0005f2fa) ai2_gene_pane_ParamLimits

0x3f74,	// (0x0005f2fa) ai2_gene_pane

0x3f9c,	// (0x0005f322) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0006ad68) list_ai2_gene_pane_t

0x3faa,	// (0x0005f330) list_highlight_pane_cp8_ParamLimits

0x3faa,	// (0x0005f330) list_highlight_pane_cp8

0x3fbb,	// (0x0005f341) ai2_gene_pane_g1_ParamLimits

0x3fbb,	// (0x0005f341) ai2_gene_pane_g1

0x3fcd,	// (0x0005f353) ai2_gene_pane_g2_ParamLimits

0x3fcd,	// (0x0005f353) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006ad6d) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006ad6d) ai2_gene_pane_g

0x637e,	// (0x00061704) scroll_pane_cp12

0xaea6,	// (0x0006622c) control_pane_t3_ParamLimits

0xaea6,	// (0x0006622c) control_pane_t3

0xad1a,	// (0x000660a0) status_small_pane_g8_ParamLimits

0xad1a,	// (0x000660a0) status_small_pane_g8

0xb02b,	// (0x000663b1) popup_find_window_ParamLimits

0xb2dc,	// (0x00066662) popup_note_image_window_ParamLimits

0xeb8f,	// (0x00069f15) list_double2_graphic_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069f15) list_double2_graphic_pane_vc_g1

0xc48f,	// (0x00067815) list_double2_graphic_pane_vc_g2_ParamLimits

0xc48f,	// (0x00067815) list_double2_graphic_pane_vc_g2

0x02ca,	// (0x0005b650) list_double2_graphic_pane_vc_g3_ParamLimits

0x02ca,	// (0x0005b650) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006ab49) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006ab49) list_double2_graphic_pane_vc_g

0xeb9b,	// (0x00069f21) list_double2_graphic_pane_vc_t1_ParamLimits

0xeb9b,	// (0x00069f21) list_double2_graphic_pane_vc_t1

0xc48f,	// (0x00067815) list_single_heading_pane_vc_g1_ParamLimits

0xc48f,	// (0x00067815) list_single_heading_pane_vc_g1

0x02ca,	// (0x0005b650) list_single_heading_pane_vc_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a958) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a958) list_single_heading_pane_vc_g

0xebb1,	// (0x00069f37) list_single_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069f37) list_single_heading_pane_vc_t1

0xebc9,	// (0x00069f4f) list_single_heading_pane_vc_t2_ParamLimits

0xebc9,	// (0x00069f4f) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006ab6a) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006ab6a) list_single_heading_pane_vc_t

0x034c,	// (0x0005b6d2) list_setting_number_pane_vc_g1_ParamLimits

0x034c,	// (0x0005b6d2) list_setting_number_pane_vc_g1

0x0358,	// (0x0005b6de) list_setting_number_pane_vc_g2_ParamLimits

0x0358,	// (0x0005b6de) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006ab6f) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006ab6f) list_setting_number_pane_vc_g

0xebdb,	// (0x00069f61) list_setting_number_pane_vc_t1_ParamLimits

0xebdb,	// (0x00069f61) list_setting_number_pane_vc_t1

0xebef,	// (0x00069f75) list_setting_number_pane_vc_t2_ParamLimits

0xebef,	// (0x00069f75) list_setting_number_pane_vc_t2

0xec0b,	// (0x00069f91) list_setting_number_pane_vc_t3_ParamLimits

0xec0b,	// (0x00069f91) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0006ab74) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0006ab74) list_setting_number_pane_vc_t

0xec39,	// (0x00069fbf) set_value_pane_vc_ParamLimits

0xec39,	// (0x00069fbf) set_value_pane_vc

0x393c,	// (0x0005ecc2) list_double2_graphic_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double2_graphic_pane_vc

0x393c,	// (0x0005ecc2) list_double2_large_graphic_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double2_large_graphic_pane_vc

0x393c,	// (0x0005ecc2) list_double2_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double2_pane_vc

0x393c,	// (0x0005ecc2) list_double_graphic_heading_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_graphic_heading_pane_vc

0x393c,	// (0x0005ecc2) list_double_graphic_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_graphic_pane_vc

0x393c,	// (0x0005ecc2) list_double_heading_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_heading_pane_vc

0x3950,	// (0x0005ecd6) list_double_large_graphic_pane_vc_ParamLimits

0x3950,	// (0x0005ecd6) list_double_large_graphic_pane_vc

0x393c,	// (0x0005ecc2) list_double_number_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_number_pane_vc

0x393c,	// (0x0005ecc2) list_double_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_pane_vc

0x393c,	// (0x0005ecc2) list_double_time_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_double_time_pane_vc

0x393c,	// (0x0005ecc2) list_setting_number_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_setting_number_pane_vc

0x393c,	// (0x0005ecc2) list_setting_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_setting_pane_vc

0x393c,	// (0x0005ecc2) list_single_graphic_heading_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_single_graphic_heading_pane_vc

0x393c,	// (0x0005ecc2) list_single_heading_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_single_heading_pane_vc

0x393c,	// (0x0005ecc2) list_single_number_heading_pane_vc_ParamLimits

0x393c,	// (0x0005ecc2) list_single_number_heading_pane_vc

0xeb8f,	// (0x00069f15) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069f15) list_double_graphic_heading_pane_vc_g1

0x39ea,	// (0x0005ed70) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x39ea,	// (0x0005ed70) list_double_graphic_heading_pane_vc_g2

0x39f6,	// (0x0005ed7c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x39f6,	// (0x0005ed7c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0006ad79) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0006ad79) list_double_graphic_heading_pane_vc_g

0xec70,	// (0x00069ff6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xec70,	// (0x00069ff6) list_double_graphic_heading_pane_vc_t1

0xec86,	// (0x0006a00c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec86,	// (0x0006a00c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0006ad80) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0006ad80) list_double_graphic_heading_pane_vc_t

0x034c,	// (0x0005b6d2) list_setting_pane_vc_g1_ParamLimits

0x034c,	// (0x0005b6d2) list_setting_pane_vc_g1

0x0358,	// (0x0005b6de) list_setting_pane_vc_g2_ParamLimits

0x0358,	// (0x0005b6de) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006ab6f) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006ab6f) list_setting_pane_vc_g

0xeca4,	// (0x0006a02a) list_setting_pane_vc_t1_ParamLimits

0xeca4,	// (0x0006a02a) list_setting_pane_vc_t1

0xecc0,	// (0x0006a046) list_setting_pane_vc_t2_ParamLimits

0xecc0,	// (0x0006a046) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006adc3) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006adc3) list_setting_pane_vc_t

0xec39,	// (0x00069fbf) set_value_pane_cp_vc_ParamLimits

0xec39,	// (0x00069fbf) set_value_pane_cp_vc

0xc48f,	// (0x00067815) list_single_number_heading_pane_vc_g1_ParamLimits

0xc48f,	// (0x00067815) list_single_number_heading_pane_vc_g1

0x02ca,	// (0x0005b650) list_single_number_heading_pane_vc_g2_ParamLimits

0x02ca,	// (0x0005b650) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a958) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a958) list_single_number_heading_pane_vc_g

0xebb1,	// (0x00069f37) list_single_number_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069f37) list_single_number_heading_pane_vc_t1

0xecdc,	// (0x0006a062) list_single_number_heading_pane_vc_t2_ParamLimits

0xecdc,	// (0x0006a062) list_single_number_heading_pane_vc_t2

0xc4b1,	// (0x00067837) list_single_number_heading_pane_vc_t3_ParamLimits

0xc4b1,	// (0x00067837) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0006adc8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006adc8) list_single_number_heading_pane_vc_t

0xeb8f,	// (0x00069f15) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb8f,	// (0x00069f15) list_single_graphic_heading_pane_vc_g1

0xc48f,	// (0x00067815) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc48f,	// (0x00067815) list_single_graphic_heading_pane_vc_g4

0x02ca,	// (0x0005b650) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x02ca,	// (0x0005b650) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006ab49) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006ab49) list_single_graphic_heading_pane_vc_g

0xebb1,	// (0x00069f37) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xebb1,	// (0x00069f37) list_single_graphic_heading_pane_vc_t1

0xecee,	// (0x0006a074) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xecee,	// (0x0006a074) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0006adcf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0006adcf) list_single_graphic_heading_pane_vc_t

0xc48f,	// (0x00067815) list_double2_pane_vc_g1_ParamLimits

0xc48f,	// (0x00067815) list_double2_pane_vc_g1

0x02ca,	// (0x0005b650) list_double2_pane_vc_g2_ParamLimits

0x02ca,	// (0x0005b650) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a958) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a958) list_double2_pane_vc_g

0xec5a,	// (0x00069fe0) list_double2_pane_vc_t1_ParamLimits

0xec5a,	// (0x00069fe0) list_double2_pane_vc_t1

0x3a02,	// (0x0005ed88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3a02,	// (0x0005ed88) list_double2_large_graphic_pane_vc_g1

0xc48f,	// (0x00067815) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc48f,	// (0x00067815) list_double2_large_graphic_pane_vc_g2

0x02ca,	// (0x0005b650) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x02ca,	// (0x0005b650) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006a970) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006a970) list_double2_large_graphic_pane_vc_g

0xc49b,	// (0x00067821) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc49b,	// (0x00067821) list_double2_large_graphic_pane_vc_t1

0x3a0e,	// (0x0005ed94) list_double_time_pane_vc_g1_ParamLimits

0x3a0e,	// (0x0005ed94) list_double_time_pane_vc_g1

0x3a1a,	// (0x0005eda0) list_double_time_pane_vc_g2_ParamLimits

0x3a1a,	// (0x0005eda0) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0006add4) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0006add4) list_double_time_pane_vc_g

0xed00,	// (0x0006a086) list_double_time_pane_vc_t1_ParamLimits

0xed00,	// (0x0006a086) list_double_time_pane_vc_t1

0xed2a,	// (0x0006a0b0) list_double_time_pane_vc_t2_ParamLimits

0xed2a,	// (0x0006a0b0) list_double_time_pane_vc_t2

0xed73,	// (0x0006a0f9) list_double_time_pane_vc_t3_ParamLimits

0xed73,	// (0x0006a0f9) list_double_time_pane_vc_t3

0xed85,	// (0x0006a10b) list_double_time_pane_vc_t4_ParamLimits

0xed85,	// (0x0006a10b) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0006add9) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0006add9) list_double_time_pane_vc_t

0xc48f,	// (0x00067815) list_double_pane_vc_g1_ParamLimits

0xc48f,	// (0x00067815) list_double_pane_vc_g1

0x02ca,	// (0x0005b650) list_double_pane_vc_g2_ParamLimits

0x02ca,	// (0x0005b650) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a958) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a958) list_double_pane_vc_g

0xedaa,	// (0x0006a130) list_double_pane_vc_t1_ParamLimits

0xedaa,	// (0x0006a130) list_double_pane_vc_t1

0xedbe,	// (0x0006a144) list_double_pane_vc_t2_ParamLimits

0xedbe,	// (0x0006a144) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0006ade2) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0006ade2) list_double_pane_vc_t

0xc48f,	// (0x00067815) list_double_number_pane_vc_g1_ParamLimits

0xc48f,	// (0x00067815) list_double_number_pane_vc_g1

0x02ca,	// (0x0005b650) list_double_number_pane_vc_g2_ParamLimits

0x02ca,	// (0x0005b650) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a958) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a958) list_double_number_pane_vc_g

0xedd4,	// (0x0006a15a) list_double_number_pane_vc_t1_ParamLimits

0xedd4,	// (0x0006a15a) list_double_number_pane_vc_t1

0xede8,	// (0x0006a16e) list_double_number_pane_vc_t2_ParamLimits

0xede8,	// (0x0006a16e) list_double_number_pane_vc_t2

0xedfc,	// (0x0006a182) list_double_number_pane_vc_t3_ParamLimits

0xedfc,	// (0x0006a182) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0006ade7) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0006ade7) list_double_number_pane_vc_t

0x3a26,	// (0x0005edac) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3a26,	// (0x0005edac) list_double_large_graphic_pane_vc_g1

0x3a4e,	// (0x0005edd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3a4e,	// (0x0005edd4) list_double_large_graphic_pane_vc_g2

0x3a62,	// (0x0005ede8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3a62,	// (0x0005ede8) list_double_large_graphic_pane_vc_g3

0xee12,	// (0x0006a198) list_double_large_graphic_pane_vc_g4_ParamLimits

0xee12,	// (0x0006a198) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0006adee) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0006adee) list_double_large_graphic_pane_vc_g

0xee22,	// (0x0006a1a8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xee22,	// (0x0006a1a8) list_double_large_graphic_pane_vc_t1

0xee44,	// (0x0006a1ca) list_double_large_graphic_pane_vc_t2_ParamLimits

0xee44,	// (0x0006a1ca) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0006adf7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0006adf7) list_double_large_graphic_pane_vc_t

0x39ea,	// (0x0005ed70) list_double_heading_pane_vc_g1_ParamLimits

0x39ea,	// (0x0005ed70) list_double_heading_pane_vc_g1

0x39f6,	// (0x0005ed7c) list_double_heading_pane_vc_g2_ParamLimits

0x39f6,	// (0x0005ed7c) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0006adfc) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0006adfc) list_double_heading_pane_vc_g

0xee64,	// (0x0006a1ea) list_double_heading_pane_vc_t1_ParamLimits

0xee64,	// (0x0006a1ea) list_double_heading_pane_vc_t1

0xebb1,	// (0x00069f37) list_double_heading_pane_vc_t2_ParamLimits

0xebb1,	// (0x00069f37) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0006ae01) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0006ae01) list_double_heading_pane_vc_t

0xee76,	// (0x0006a1fc) list_double_graphic_pane_vc_g1_ParamLimits

0xee76,	// (0x0006a1fc) list_double_graphic_pane_vc_g1

0x3a71,	// (0x0005edf7) list_double_graphic_pane_vc_g2_ParamLimits

0x3a71,	// (0x0005edf7) list_double_graphic_pane_vc_g2

0xc48f,	// (0x00067815) list_double_graphic_pane_vc_g3_ParamLimits

0xc48f,	// (0x00067815) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x0006ae06) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0006ae06) list_double_graphic_pane_vc_g

0xee82,	// (0x0006a208) list_double_graphic_pane_vc_t1_ParamLimits

0xee82,	// (0x0006a208) list_double_graphic_pane_vc_t1

0xeeac,	// (0x0006a232) list_double_graphic_pane_vc_t2_ParamLimits

0xeeac,	// (0x0006a232) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0006ae0f) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0006ae0f) list_double_graphic_pane_vc_t

0xe66f,	// (0x000699f5) aid_size_cell_fastswap

0x9c0f,	// (0x00064f95) aid_size_cell_touch_ParamLimits

0x9c0f,	// (0x00064f95) aid_size_cell_touch

0xe7f6,	// (0x00069b7c) popup_fast_swap_wide_window_ParamLimits

0xe7f6,	// (0x00069b7c) popup_fast_swap_wide_window

0x9dcd,	// (0x00065153) touch_pane_ParamLimits

0x9dcd,	// (0x00065153) touch_pane

0x8988,	// (0x00063d0e) button_value_adjust_pane_cp2

0xc4dd,	// (0x00067863) button_value_adjust_pane_cp4

0xc4e5,	// (0x0006786b) form_field_data_pane_cp2

0xa6bd,	// (0x00065a43) form_field_data_wide_pane_cp2

0x8cee,	// (0x00064074) bg_scroll_pane_ParamLimits

0xf250,	// (0x0006a5d6) scroll_handle_pane_ParamLimits

0xf264,	// (0x0006a5ea) scroll_sc2_down_pane_ParamLimits

0xf264,	// (0x0006a5ea) scroll_sc2_down_pane

0x8d1f,	// (0x000640a5) scroll_sc2_up_pane_ParamLimits

0x8d1f,	// (0x000640a5) scroll_sc2_up_pane

0xcc74,	// (0x00067ffa) grid_wheel_folder_pane_g1_ParamLimits

0xcc74,	// (0x00067ffa) grid_wheel_folder_pane_g1

0xf42e,	// (0x0006a7b4) clock_nsta_pane_cp2_ParamLimits

0xf42e,	// (0x0006a7b4) clock_nsta_pane_cp2

0x016c,	// (0x0005b4f2) listscroll_midp_pane_ParamLimits

0xac05,	// (0x00065f8b) midp_canvas_pane

0x00e8,	// (0x0005b46e) nsta_clock_indic_pane

0x0136,	// (0x0005b4bc) listscroll_form_pane_vc

0x015a,	// (0x0005b4e0) listscroll_set_pane_vc_ParamLimits

0x015a,	// (0x0005b4e0) listscroll_set_pane_vc

0xb758,	// (0x00066ade) clock_nsta_pane

0xb782,	// (0x00066b08) indicator_nsta_pane

0x22d9,	// (0x0005d65f) bg_popup_sub_pane_cp2_ParamLimits

0x22ed,	// (0x0005d673) find_pane_cp2_ParamLimits

0x22ed,	// (0x0005d673) find_pane_cp2

0x2303,	// (0x0005d689) grid_toobar_pane_ParamLimits

0x23e3,	// (0x0005d769) list_form_gen_pane_vc_ParamLimits

0x23e3,	// (0x0005d769) list_form_gen_pane_vc

0x23f9,	// (0x0005d77f) scroll_pane_cp8_vc_ParamLimits

0x23f9,	// (0x0005d77f) scroll_pane_cp8_vc

0x2475,	// (0x0005d7fb) data_form_wide_pane_vc_ParamLimits

0x2475,	// (0x0005d7fb) data_form_wide_pane_vc

0x2481,	// (0x0005d807) form_field_data_wide_pane_vc_g1

0x2489,	// (0x0005d80f) form_field_data_wide_pane_vc_t1_ParamLimits

0x2489,	// (0x0005d80f) form_field_data_wide_pane_vc_t1

0x899c,	// (0x00063d22) input_focus_pane_cp6_vc_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_cp6_vc

0xc5f8,	// (0x0006797e) list_midp_pane_ParamLimits

0x3ccf,	// (0x0005f055) scroll_pane_cp16_ParamLimits

0x3ccf,	// (0x0005f055) scroll_pane_cp16

0x27e5,	// (0x0005db6b) button_value_adjust_pane_ParamLimits

0x27e5,	// (0x0005db6b) button_value_adjust_pane

0xc8a1,	// (0x00067c27) button_value_adjust_pane_cp6_ParamLimits

0xc8a1,	// (0x00067c27) button_value_adjust_pane_cp6

0xc9e3,	// (0x00067d69) settings_code_pane_cp_ParamLimits

0xc9e3,	// (0x00067d69) settings_code_pane_cp

0x5d61,	// (0x000610e7) cell_touch_pane_g1

0x5d61,	// (0x000610e7) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006aa8e) cell_touch_pane_g

0xcb33,	// (0x00067eb9) cell_touch_pane_cp_ParamLimits

0xcb33,	// (0x00067eb9) cell_touch_pane_cp

0xcb4f,	// (0x00067ed5) cell_touch_pane_ParamLimits

0xcb4f,	// (0x00067ed5) cell_touch_pane

0x5d61,	// (0x000610e7) scroll_sc2_down_pane_g1

0x5d61,	// (0x000610e7) scroll_sc2_up_pane_g1

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp4_vc

0x406d,	// (0x0005f3f3) list_set_graphic_pane_vc_g1_ParamLimits

0x406d,	// (0x0005f3f3) list_set_graphic_pane_vc_g1

0xcb6d,	// (0x00067ef3) list_set_graphic_pane_vc_g2_ParamLimits

0xcb6d,	// (0x00067ef3) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0006ad85) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0006ad85) list_set_graphic_pane_vc_g

0x4079,	// (0x0005f3ff) text_primary_small_cp13_vc_ParamLimits

0x4079,	// (0x0005f3ff) text_primary_small_cp13_vc

0x4091,	// (0x0005f417) list_set_graphic_pane_vc_ParamLimits

0x4091,	// (0x0005f417) list_set_graphic_pane_vc

0x5d6b,	// (0x000610f1) input_focus_pane_cp2_vc

0x5d61,	// (0x000610e7) setting_code_pane_vc_g1

0x5ddc,	// (0x00061162) setting_code_pane_vc_t1

0x40a6,	// (0x0005f42c) set_text_pane_vc_t1_ParamLimits

0x40a6,	// (0x0005f42c) set_text_pane_vc_t1

0x5d6b,	// (0x000610f1) input_focus_pane_cp1_vc

0x40c4,	// (0x0005f44a) list_set_text_pane_vc

0x5d61,	// (0x000610e7) setting_text_pane_vc_g1

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp2_vc

0x5dd3,	// (0x00061159) setting_slider_graphic_pane_vc_g1

0x40ce,	// (0x0005f454) setting_slider_graphic_pane_vc_t1

0x40e0,	// (0x0005f466) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0006ad8a) setting_slider_graphic_pane_vc_t

0x40f2,	// (0x0005f478) slider_set_pane_cp_vc

0x40fc,	// (0x0005f482) slider_set_pane_vc_g1

0x4105,	// (0x0005f48b) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0006ad8f) slider_set_pane_vc_g

0x89f7,	// (0x00063d7d) set_opt_bg_pane_g1_copy1

0x89ff,	// (0x00063d85) set_opt_bg_pane_g2_copy1

0x4131,	// (0x0005f4b7) set_opt_bg_pane_g3_copy1

0x8a0f,	// (0x00063d95) set_opt_bg_pane_g4_copy1

0x8a17,	// (0x00063d9d) set_opt_bg_pane_g5_copy1

0x8a1f,	// (0x00063da5) set_opt_bg_pane_g6_copy1

0x413b,	// (0x0005f4c1) set_opt_bg_pane_g7_copy1

0x4145,	// (0x0005f4cb) set_opt_bg_pane_g8_copy1

0x414f,	// (0x0005f4d5) set_opt_bg_pane_g9_copy1

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp_vc

0x4159,	// (0x0005f4df) setting_slider_pane_vc_t1

0x4168,	// (0x0005f4ee) setting_slider_pane_vc_t2

0x417a,	// (0x0005f500) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0006ad9e) setting_slider_pane_vc_t

0x418c,	// (0x0005f512) slider_set_pane_vc

0x0426,	// (0x0005b7ac) volume_set_pane_vc_g1

0x042f,	// (0x0005b7b5) volume_set_pane_vc_g2

0x0438,	// (0x0005b7be) volume_set_pane_vc_g3

0x0441,	// (0x0005b7c7) volume_set_pane_vc_g4

0x044a,	// (0x0005b7d0) volume_set_pane_vc_g5

0x0453,	// (0x0005b7d9) volume_set_pane_vc_g6

0x045c,	// (0x0005b7e2) volume_set_pane_vc_g7

0x0465,	// (0x0005b7eb) volume_set_pane_vc_g8

0x046e,	// (0x0005b7f4) volume_set_pane_vc_g9

0x0477,	// (0x0005b7fd) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0006ada5) volume_set_pane_vc_g

0x4196,	// (0x0005f51c) volume_set_pane_vc

0x41a0,	// (0x0005f526) button_value_adjust_pane_cp1_vc

0x41aa,	// (0x0005f530) list_highlight_pane_cp2_vc

0x41b3,	// (0x0005f539) list_set_pane_vc_ParamLimits

0x41b3,	// (0x0005f539) list_set_pane_vc

0x4223,	// (0x0005f5a9) main_pane_set_vc_t1_ParamLimits

0x4223,	// (0x0005f5a9) main_pane_set_vc_t1

0x4238,	// (0x0005f5be) main_pane_set_vc_t2_ParamLimits

0x4238,	// (0x0005f5be) main_pane_set_vc_t2

0x424a,	// (0x0005f5d0) main_pane_set_vc_t3_ParamLimits

0x424a,	// (0x0005f5d0) main_pane_set_vc_t3

0x425e,	// (0x0005f5e4) main_pane_set_vc_t4_ParamLimits

0x425e,	// (0x0005f5e4) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0006adba) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0006adba) main_pane_set_vc_t

0x4272,	// (0x0005f5f8) setting_code_pane_vc_ParamLimits

0x4272,	// (0x0005f5f8) setting_code_pane_vc

0x4283,	// (0x0005f609) setting_slider_graphic_pane_vc

0x4283,	// (0x0005f609) setting_slider_pane_vc

0x4283,	// (0x0005f609) setting_text_pane_vc

0x4283,	// (0x0005f609) setting_volume_pane_vc

0x428d,	// (0x0005f613) scroll_pane_cp121_vc

0x8976,	// (0x00063cfc) set_content_pane_vc

0x4295,	// (0x0005f61b) button_value_adjust_pane_g1

0x429e,	// (0x0005f624) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0006ae14) button_value_adjust_pane_g

0x42a7,	// (0x0005f62d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x42a7,	// (0x0005f62d) form_field_slider_wide_pane_vc_t1

0x42b9,	// (0x0005f63f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x42b9,	// (0x0005f63f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x0006ae19) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0006ae19) form_field_slider_wide_pane_vc_t

0x5ef8,	// (0x0006127e) input_focus_pane_cp10_vc_ParamLimits

0x5ef8,	// (0x0006127e) input_focus_pane_cp10_vc

0x42e5,	// (0x0005f66b) slider_cont_pane_cp1_vc_ParamLimits

0x42e5,	// (0x0005f66b) slider_cont_pane_cp1_vc

0x42f7,	// (0x0005f67d) slider_form_pane_g1_cp2

0x4105,	// (0x0005f48b) slider_form_pane_g2_cp2

0x4324,	// (0x0005f6aa) form_field_slider_pane_vc_t3

0x4332,	// (0x0005f6b8) form_field_slider_pane_vc_t4

0x4340,	// (0x0005f6c6) slider_form_pane_vc_ParamLimits

0x4340,	// (0x0005f6c6) slider_form_pane_vc

0x434d,	// (0x0005f6d3) form_field_slider_pane_vc_t1_ParamLimits

0x434d,	// (0x0005f6d3) form_field_slider_pane_vc_t1

0x42b9,	// (0x0005f63f) form_field_slider_pane_vc_t2_ParamLimits

0x42b9,	// (0x0005f63f) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0006ae2b) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0006ae2b) form_field_slider_pane_vc_t

0x5ef8,	// (0x0006127e) input_focus_pane_cp9_vc_ParamLimits

0x5ef8,	// (0x0006127e) input_focus_pane_cp9_vc

0x4363,	// (0x0005f6e9) slider_cont_pane_vc_ParamLimits

0x4363,	// (0x0005f6e9) slider_cont_pane_vc

0x4377,	// (0x0005f6fd) list_form_graphic_pane_cp_vc_ParamLimits

0x4377,	// (0x0005f6fd) list_form_graphic_pane_cp_vc

0x2481,	// (0x0005d807) form_field_popup_wide_pane_vc_g1

0x438c,	// (0x0005f712) form_field_popup_wide_pane_vc_t1_ParamLimits

0x438c,	// (0x0005f712) form_field_popup_wide_pane_vc_t1

0x899c,	// (0x00063d22) input_focus_pane_cp8_vc_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_cp8_vc

0x43d1,	// (0x0005f757) list_form_wide_pane_vc_ParamLimits

0x43d1,	// (0x0005f757) list_form_wide_pane_vc

0x43dd,	// (0x0005f763) list_form_graphic_pane_vc_g1

0x43e5,	// (0x0005f76b) list_form_graphic_pane_vc_t1_ParamLimits

0x43e5,	// (0x0005f76b) list_form_graphic_pane_vc_t1

0x5dc5,	// (0x0006114b) list_highlight_pane_cp5_vc_ParamLimits

0x5dc5,	// (0x0006114b) list_highlight_pane_cp5_vc

0x4401,	// (0x0005f787) list_form_graphic_pane_vc_ParamLimits

0x4401,	// (0x0005f787) list_form_graphic_pane_vc

0x2481,	// (0x0005d807) form_field_popup_pane_vc_g1

0x4417,	// (0x0005f79d) form_field_popup_pane_vc_t1_ParamLimits

0x4417,	// (0x0005f79d) form_field_popup_pane_vc_t1

0x899c,	// (0x00063d22) input_focus_pane_cp7_vc_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_cp7_vc

0x442e,	// (0x0005f7b4) list_form_pane_vc_ParamLimits

0x442e,	// (0x0005f7b4) list_form_pane_vc

0x443a,	// (0x0005f7c0) data_form_pane_vc_t1_ParamLimits

0x443a,	// (0x0005f7c0) data_form_pane_vc_t1

0x89f7,	// (0x00063d7d) input_focus_pane_vc_g1

0x89ff,	// (0x00063d85) input_focus_pane_vc_g2

0x8a07,	// (0x00063d8d) input_focus_pane_vc_g3

0x8a0f,	// (0x00063d95) input_focus_pane_vc_g4

0x8a17,	// (0x00063d9d) input_focus_pane_vc_g5

0x8a1f,	// (0x00063da5) input_focus_pane_vc_g6

0x8a27,	// (0x00063dad) input_focus_pane_vc_g7

0x8a2f,	// (0x00063db5) input_focus_pane_vc_g8

0x8a37,	// (0x00063dbd) input_focus_pane_vc_g9

0x5d61,	// (0x000610e7) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0006aa17) input_focus_pane_vc_g

0x2475,	// (0x0005d7fb) data_form_pane_vc_ParamLimits

0x2475,	// (0x0005d7fb) data_form_pane_vc

0x2481,	// (0x0005d807) form_field_data_pane_vc_g1

0x4457,	// (0x0005f7dd) form_field_data_pane_vc_t1_ParamLimits

0x4457,	// (0x0005f7dd) form_field_data_pane_vc_t1

0x899c,	// (0x00063d22) input_focus_pane_vc_ParamLimits

0x899c,	// (0x00063d22) input_focus_pane_vc

0x4471,	// (0x0005f7f7) button_value_adjust_pane_cp3_vc

0x4479,	// (0x0005f7ff) button_value_adjust_pane_cp5_vc

0x4481,	// (0x0005f807) form_field_data_pane_vc_ParamLimits

0x4481,	// (0x0005f807) form_field_data_pane_vc

0x449c,	// (0x0005f822) form_field_data_pane_vc_cp2

0x44a4,	// (0x0005f82a) form_field_data_wide_pane_vc_ParamLimits

0x44a4,	// (0x0005f82a) form_field_data_wide_pane_vc

0x44be,	// (0x0005f844) form_field_data_wide_pane_vc_cp2

0x44c6,	// (0x0005f84c) form_field_popup_pane_vc_ParamLimits

0x44c6,	// (0x0005f84c) form_field_popup_pane_vc

0x44e1,	// (0x0005f867) form_field_popup_wide_pane_vc_ParamLimits

0x44e1,	// (0x0005f867) form_field_popup_wide_pane_vc

0x44fb,	// (0x0005f881) form_field_slider_pane_vc_ParamLimits

0x44fb,	// (0x0005f881) form_field_slider_pane_vc

0x450e,	// (0x0005f894) form_field_slider_wide_pane_vc_ParamLimits

0x450e,	// (0x0005f894) form_field_slider_wide_pane_vc

0xcb79,	// (0x00067eff) grid_touch_1_pane_ParamLimits

0xcb79,	// (0x00067eff) grid_touch_1_pane

0xcb8d,	// (0x00067f13) grid_touch_2_pane_ParamLimits

0xcb8d,	// (0x00067f13) grid_touch_2_pane

0x45df,	// (0x0005f965) touch_pane_g1_ParamLimits

0x45df,	// (0x0005f965) touch_pane_g1

0x4547,	// (0x0005f8cd) cell_app_pane_cp_wide_ParamLimits

0x4547,	// (0x0005f8cd) cell_app_pane_cp_wide

0x4558,	// (0x0005f8de) grid_popup_fast_wide_pane_ParamLimits

0x4558,	// (0x0005f8de) grid_popup_fast_wide_pane

0x456c,	// (0x0005f8f2) scroll_pane_cp19_ParamLimits

0x456c,	// (0x0005f8f2) scroll_pane_cp19

0x5d6b,	// (0x000610f1) bg_popup_window_pane_cp20

0x4580,	// (0x0005f906) listscroll_popup_fast_wide_pane

0xcbb9,	// (0x00067f3f) grid_indicator_nsta_pane

0x4588,	// (0x0005f90e) clock_nsta_pane_g1

0x4591,	// (0x0005f917) clock_nsta_pane_t1

0xcbc7,	// (0x00067f4d) cell_indicator_nsta_pane_ParamLimits

0xcbc7,	// (0x00067f4d) cell_indicator_nsta_pane

0x45df,	// (0x0005f965) cell_indicator_nsta_pane_g1

0xcbe0,	// (0x00067f66) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x0006ae3c) cell_indicator_nsta_pane_g

0x4603,	// (0x0005f989) clock_nsta_pane_cp

0x460b,	// (0x0005f991) indicator_nsta_pane_cp

0x4614,	// (0x0005f99a) nsta_clock_indic_pane_g1

0x5e01,	// (0x00061187) grid_indicator_pane

0x8e11,	// (0x00064197) scroll_pane_cp29

0xf37a,	// (0x0006a700) indicator_nsta_pane_cp2_ParamLimits

0xf37a,	// (0x0006a700) indicator_nsta_pane_cp2

0x5dc5,	// (0x0006114b) main_apps_wheel_pane

0x2668,	// (0x0005d9ee) form_midp_field_text_pane_ParamLimits

0x27b7,	// (0x0005db3d) scroll_bar_cp050_ParamLimits

0x467d,	// (0x0005fa03) cell_indicator_pane_ParamLimits

0x467d,	// (0x0005fa03) cell_indicator_pane

0x4695,	// (0x0005fa1b) cell_indicator_pane_g1

0xcbf6,	// (0x00067f7c) grid_wheel_folder_pane_ParamLimits

0xcbf6,	// (0x00067f7c) grid_wheel_folder_pane

0xcc04,	// (0x00067f8a) list_wheel_apps_pane_ParamLimits

0xcc04,	// (0x00067f8a) list_wheel_apps_pane

0xcc12,	// (0x00067f98) main_apps_wheel_pane_g1_ParamLimits

0xcc12,	// (0x00067f98) main_apps_wheel_pane_g1

0xcc22,	// (0x00067fa8) main_apps_wheel_pane_g2_ParamLimits

0xcc22,	// (0x00067fa8) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x0006ae58) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x0006ae58) main_apps_wheel_pane_g

0xcc32,	// (0x00067fb8) main_apps_wheel_pane_t1_ParamLimits

0xcc32,	// (0x00067fb8) main_apps_wheel_pane_t1

0xcc4a,	// (0x00067fd0) list_wheel_apps_pane_g1

0xcc52,	// (0x00067fd8) list_wheel_apps_pane_g2

0xcc5a,	// (0x00067fe0) list_wheel_apps_pane_g3

0xcc62,	// (0x00067fe8) list_wheel_apps_pane_g4

0xcc6a,	// (0x00067ff0) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x0006ae5d) list_wheel_apps_pane_g

0x9191,	// (0x00064517) navi_icon_text_pane

0xb64a,	// (0x000669d0) aid_fill_nsta

0xcc87,	// (0x0006800d) navi_icon_text_pane_g1

0xcc93,	// (0x00068019) navi_icon_text_pane_t1

0xab5e,	// (0x00065ee4) list_set_graphic_pane_t1_ParamLimits

0xab5e,	// (0x00065ee4) list_set_graphic_pane_t1

0x2f08,	// (0x0005e28e) popup_midp_note_alarm_window_t6_ParamLimits

0x2f08,	// (0x0005e28e) popup_midp_note_alarm_window_t6

0x2f1a,	// (0x0005e2a0) popup_midp_note_alarm_window_t7_ParamLimits

0x2f1a,	// (0x0005e2a0) popup_midp_note_alarm_window_t7

0x2f2c,	// (0x0005e2b2) popup_midp_note_alarm_window_t8_ParamLimits

0x2f2c,	// (0x0005e2b2) popup_midp_note_alarm_window_t8

0x2f3e,	// (0x0005e2c4) popup_midp_note_alarm_window_t9_ParamLimits

0x2f3e,	// (0x0005e2c4) popup_midp_note_alarm_window_t9

0x2f50,	// (0x0005e2d6) popup_midp_note_alarm_window_t10_ParamLimits

0x2f50,	// (0x0005e2d6) popup_midp_note_alarm_window_t10

0x2f62,	// (0x0005e2e8) popup_midp_note_alarm_window_t11_ParamLimits

0x2f62,	// (0x0005e2e8) popup_midp_note_alarm_window_t11

0x2f74,	// (0x0005e2fa) scroll_pane_cp17_ParamLimits

0x2f74,	// (0x0005e2fa) scroll_pane_cp17

0x0426,	// (0x0005b7ac) volume_small_pane_cp_g1

0x07eb,	// (0x0005bb71) volume_small_pane_cp_g2

0x07f4,	// (0x0005bb7a) volume_small_pane_cp_g3

0x07fd,	// (0x0005bb83) volume_small_pane_cp_g4

0x0806,	// (0x0005bb8c) volume_small_pane_cp_g5

0x080f,	// (0x0005bb95) volume_small_pane_cp_g6

0x0818,	// (0x0005bb9e) volume_small_pane_cp_g7

0x0821,	// (0x0005bba7) volume_small_pane_cp_g8

0x082a,	// (0x0005bbb0) volume_small_pane_cp_g9

0x0833,	// (0x0005bbb9) volume_small_pane_cp_g10

0xe9d4,	// (0x00069d5a) midp_ticker_pane_g1_ParamLimits

0xe9e0,	// (0x00069d66) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006aae3) midp_ticker_pane_g_ParamLimits

0xac9c,	// (0x00066022) midp_ticker_pane_t1_ParamLimits

0xb66e,	// (0x000669f4) aid_fill_nsta_2

0x27a3,	// (0x0005db29) list_form2_midp_pane

0x390b,	// (0x0005ec91) midp_editing_number_pane_ParamLimits

0x391a,	// (0x0005eca0) midp_ticker_pane_ParamLimits

0x4788,	// (0x0005fb0e) form2_midp_field_pane

0x47ac,	// (0x0005fb32) scroll_pane_cp51

0x47cc,	// (0x0005fb52) form2_midp_button_pane_ParamLimits

0x47cc,	// (0x0005fb52) form2_midp_button_pane

0x47de,	// (0x0005fb64) form2_midp_content_pane_ParamLimits

0x47de,	// (0x0005fb64) form2_midp_content_pane

0x47f8,	// (0x0005fb7e) form2_midp_field_choice_group_pane

0x4800,	// (0x0005fb86) form2_midp_field_pane_g1

0x4808,	// (0x0005fb8e) form2_midp_field_pane_g2

0x4810,	// (0x0005fb96) form2_midp_field_pane_g3

0x4818,	// (0x0005fb9e) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x0006ae82) form2_midp_field_pane_g

0x4820,	// (0x0005fba6) form2_midp_gauge_slider_pane

0x4828,	// (0x0005fbae) form2_midp_gauge_wait_pane

0x4830,	// (0x0005fbb6) form2_midp_image_pane_ParamLimits

0x4830,	// (0x0005fbb6) form2_midp_image_pane

0x484b,	// (0x0005fbd1) form2_midp_label_pane_ParamLimits

0x484b,	// (0x0005fbd1) form2_midp_label_pane

0xccc1,	// (0x00068047) form2_midp_label_pane_cp_ParamLimits

0xccc1,	// (0x00068047) form2_midp_label_pane_cp

0x488b,	// (0x0005fc11) form2_midp_string_pane_ParamLimits

0x488b,	// (0x0005fc11) form2_midp_string_pane

0xeeca,	// (0x0006a250) form2_midp_text_pane_ParamLimits

0xeeca,	// (0x0006a250) form2_midp_text_pane

0x489d,	// (0x0005fc23) form2_midp_time_pane

0x48ad,	// (0x0005fc33) input_focus_pane_cp51_ParamLimits

0x48ad,	// (0x0005fc33) input_focus_pane_cp51

0x48c5,	// (0x0005fc4b) form2_midp_label_pane_t1_ParamLimits

0x48c5,	// (0x0005fc4b) form2_midp_label_pane_t1

0xeeed,	// (0x0006a273) form2_mdip_text_pane_t1_ParamLimits

0xeeed,	// (0x0006a273) form2_mdip_text_pane_t1

0xef0c,	// (0x0006a292) form2_midp_time_pane_t1

0x4913,	// (0x0005fc99) form2_midp_gauge_slider_pane_t1

0xcce2,	// (0x00068068) form2_midp_gauge_slider_pane_t2

0xccf4,	// (0x0006807a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x0006ae8b) form2_midp_gauge_slider_pane_t

0x4949,	// (0x0005fccf) form2_midp_slider_pane

0x4955,	// (0x0005fcdb) form2_midp_gauge_wait_pane_t1

0x4963,	// (0x0005fce9) form2_midp_wait_pane_ParamLimits

0x4963,	// (0x0005fce9) form2_midp_wait_pane

0x24c8,	// (0x0005d84e) list_single_2graphic_pane_cp4_ParamLimits

0x24c8,	// (0x0005d84e) list_single_2graphic_pane_cp4

0x498e,	// (0x0005fd14) list_single_midp_graphic_pane_cp_ParamLimits

0x498e,	// (0x0005fd14) list_single_midp_graphic_pane_cp

0x5d6b,	// (0x000610f1) list_highlight_pane_cp20

0x49b2,	// (0x0005fd38) list_single_2graphic_pane_g1_cp4

0x3f4f,	// (0x0005f2d5) list_single_2graphic_pane_g2_cp4

0x49ba,	// (0x0005fd40) list_single_2graphic_pane_t1_cp4

0x5dc5,	// (0x0006114b) list_highlight_pane_cp21

0x49c9,	// (0x0005fd4f) list_single_midp_graphic_pane_g4_cp

0x49d8,	// (0x0005fd5e) list_single_midp_graphic_pane_t1_cp

0xcd06,	// (0x0006808c) form2_mdip_string_pane_t1_ParamLimits

0xcd06,	// (0x0006808c) form2_mdip_string_pane_t1

0x5d6b,	// (0x000610f1) bg_wml_button_pane_cp2

0x5d61,	// (0x000610e7) form2_midp_image_pane_g1

0xe8b7,	// (0x00069c3d) list_double_large_graphic_pane_g5_ParamLimits

0xe8b7,	// (0x00069c3d) list_double_large_graphic_pane_g5

0x016c,	// (0x0005b4f2) midp_form_pane_ParamLimits

0x5dc5,	// (0x0006114b) main_apps_wheel_pane_ParamLimits

0xb362,	// (0x000666e8) popup_preview_window_ParamLimits

0xb362,	// (0x000666e8) popup_preview_window

0x1e22,	// (0x0005d1a8) popup_touch_info_window_ParamLimits

0x1e22,	// (0x0005d1a8) popup_touch_info_window

0x1e44,	// (0x0005d1ca) popup_touch_menu_window_ParamLimits

0x1e44,	// (0x0005d1ca) popup_touch_menu_window

0x5d57,	// (0x000610dd) bg_popup_sub_pane_cp6

0x4a92,	// (0x0005fe18) list_touch_menu_pane

0x4a9a,	// (0x0005fe20) list_single_touch_menu_pane_ParamLimits

0x4a9a,	// (0x0005fe20) list_single_touch_menu_pane

0x4ab2,	// (0x0005fe38) list_single_touch_menu_pane_t1

0x5dc5,	// (0x0006114b) bg_popup_sub_pane_cp7_ParamLimits

0x5dc5,	// (0x0006114b) bg_popup_sub_pane_cp7

0x4ac0,	// (0x0005fe46) heading_sub_pane

0x4ac8,	// (0x0005fe4e) list_touch_info_pane_ParamLimits

0x4ac8,	// (0x0005fe4e) list_touch_info_pane

0x4ad7,	// (0x0005fe5d) list_single_touch_info_pane_ParamLimits

0x4ad7,	// (0x0005fe5d) list_single_touch_info_pane

0x4ae9,	// (0x0005fe6f) list_single_touch_info_pane_t1

0x4af7,	// (0x0005fe7d) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0006ae99) list_single_touch_info_pane_t

0xe9a8,	// (0x00069d2e) bg_popup_heading_pane_cp

0x4b05,	// (0x0005fe8b) heading_sub_pane_t1

0x240f,	// (0x0005d795) bg_popup_preview_window_pane_cp_ParamLimits

0x240f,	// (0x0005d795) bg_popup_preview_window_pane_cp

0x4ac0,	// (0x0005fe46) heading_preview_pane

0x4ac8,	// (0x0005fe4e) list_preview_pane_ParamLimits

0x4ac8,	// (0x0005fe4e) list_preview_pane

0x4b13,	// (0x0005fe99) popup_preview_window_g1

0x4ad7,	// (0x0005fe5d) list_single_preview_pane_ParamLimits

0x4ad7,	// (0x0005fe5d) list_single_preview_pane

0x4b1b,	// (0x0005fea1) list_single_preview_pane_g1

0x4b23,	// (0x0005fea9) list_single_preview_pane_t1

0x4ae9,	// (0x0005fe6f) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x0006ae9e) list_single_preview_pane_t

0x4b31,	// (0x0005feb7) bg_popup_heading_pane_cp2_ParamLimits

0x4b31,	// (0x0005feb7) bg_popup_heading_pane_cp2

0x4b47,	// (0x0005fecd) heading_preview_pane_g1

0x4b4f,	// (0x0005fed5) heading_preview_pane_t1_ParamLimits

0x4b4f,	// (0x0005fed5) heading_preview_pane_t1

0x5e18,	// (0x0006119e) soft_indicator_pane_t1_ParamLimits

0x635b,	// (0x000616e1) scroll_pane_ParamLimits

0x8d0d,	// (0x00064093) scroll_sc2_left_pane

0x8d16,	// (0x0006409c) scroll_sc2_right_pane

0x8d35,	// (0x000640bb) scroll_bg_pane_g1_ParamLimits

0x8d4a,	// (0x000640d0) scroll_bg_pane_g2_ParamLimits

0x8d62,	// (0x000640e8) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006aa6e) scroll_bg_pane_g_ParamLimits

0x8d35,	// (0x000640bb) scroll_handle_pane_g1_ParamLimits

0x8d84,	// (0x0006410a) scroll_handle_pane_g2_ParamLimits

0x8d62,	// (0x000640e8) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006aa75) scroll_handle_pane_g_ParamLimits

0x0194,	// (0x0005b51a) popup_choice_list_window_ParamLimits

0x0194,	// (0x0005b51a) popup_choice_list_window

0x22e5,	// (0x0005d66b) choice_list_pane

0x2367,	// (0x0005d6ed) cell_toolbar_pane_t1

0x238f,	// (0x0005d715) toolbar_button_pane_ParamLimits

0x343e,	// (0x0005e7c4) ai_gene_pane_1_t2_ParamLimits

0x343e,	// (0x0005e7c4) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0006ac98) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0006ac98) ai_gene_pane_1_t

0x4b6c,	// (0x0005fef2) scroll_sc2_left_pane_g1

0x4b6c,	// (0x0005fef2) scroll_sc2_right_pane_g1

0x016c,	// (0x0005b4f2) bg_popup_sub_pane_cp10

0x4b76,	// (0x0005fefc) list_choice_list_pane

0x4b8f,	// (0x0005ff15) list_single_choice_list_pane_ParamLimits

0x4b8f,	// (0x0005ff15) list_single_choice_list_pane

0x4ba7,	// (0x0005ff2d) list_single_choice_list_pane_g1

0x8aed,	// (0x00063e73) list_single_choice_list_pane_t1_ParamLimits

0x8aed,	// (0x00063e73) list_single_choice_list_pane_t1

0x4baf,	// (0x0005ff35) choice_list_pane_g1

0x4bb7,	// (0x0005ff3d) choice_list_pane_t1

0x5d57,	// (0x000610dd) input_focus_pane_cp11

0x8c6b,	// (0x00063ff1) title_pane_stacon_g2_ParamLimits

0x8c6b,	// (0x00063ff1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006aa54) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006aa54) title_pane_stacon_g

0xe9a8,	// (0x00069d2e) cursor_press_pane

0xafdf,	// (0x00066365) popup_fep_hwr_window_ParamLimits

0xafdf,	// (0x00066365) popup_fep_hwr_window

0x19c6,	// (0x0005cd4c) popup_fep_vkb_window_ParamLimits

0x19c6,	// (0x0005cd4c) popup_fep_vkb_window

0x4bc5,	// (0x0005ff4b) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0006aec7) fep_vkb_side_pane_g_ParamLimits

0x0875,	// (0x0005bbfb) fep_hwr_candidate_pane_ParamLimits

0x0875,	// (0x0005bbfb) fep_hwr_candidate_pane

0x089f,	// (0x0005bc25) fep_hwr_side_pane_ParamLimits

0x089f,	// (0x0005bc25) fep_hwr_side_pane

0x08c1,	// (0x0005bc47) fep_hwr_top_pane_ParamLimits

0x08c1,	// (0x0005bc47) fep_hwr_top_pane

0x08d9,	// (0x0005bc5f) fep_hwr_write_pane_ParamLimits

0x08d9,	// (0x0005bc5f) fep_hwr_write_pane

0xfb41,	// (0x0006aec7) fep_vkb_side_pane_g

0x4bcd,	// (0x0005ff53) fep_hwr_top_pane_g1

0x4bdf,	// (0x0005ff65) fep_hwr_top_pane_g2

0x0913,	// (0x0005bc99) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x0006aea3) fep_hwr_top_pane_g

0x0928,	// (0x0005bcae) fep_hwr_top_text_pane

0x8e7e,	// (0x00064204) fep_hwr_top_text_pane_g1

0x4c15,	// (0x0005ff9b) fep_hwr_top_text_pane_t1

0x0a32,	// (0x0005bdb8) fep_hwr_candidate_pane_g1

0x4e60,	// (0x000601e6) fep_vkb_keypad_pane_g3_ParamLimits

0x4e60,	// (0x000601e6) fep_vkb_keypad_pane_g3

0x4e8c,	// (0x00060212) fep_vkb_keypad_pane_g4_ParamLimits

0x4e8c,	// (0x00060212) fep_vkb_keypad_pane_g4

0x4f03,	// (0x00060289) fep_vkb_bottom_pane_g2_ParamLimits

0x4f03,	// (0x00060289) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x0006aece) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x0006aece) fep_vkb_bottom_pane_g

0x4b6c,	// (0x0005fef2) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0006aed8) cell_vkb_side_pane_g

0x4f8e,	// (0x00060314) cell_vkb_side_pane_t1

0x4f9c,	// (0x00060322) cell_vkb_side_pane_t1_copy1

0x4b6c,	// (0x0005fef2) bg_fep_vkb_candidate_pane_g2

0x50e0,	// (0x00060466) cell_vkb_candidate_pane_ParamLimits

0x4c23,	// (0x0005ffa9) aid_size_cell_vkb_ParamLimits

0x4c23,	// (0x0005ffa9) aid_size_cell_vkb

0x50e0,	// (0x00060466) cell_vkb_candidate_pane

0x0a59,	// (0x0005bddf) bg_popup_fep_shadow_pane_g1

0xcdbb,	// (0x00068141) fep_vkb_bottom_pane_ParamLimits

0xcdbb,	// (0x00068141) fep_vkb_bottom_pane

0x4cf2,	// (0x00060078) fep_vkb_candidate_pane_ParamLimits

0x4cf2,	// (0x00060078) fep_vkb_candidate_pane

0xcde7,	// (0x0006816d) fep_vkb_keypad_pane_ParamLimits

0xcde7,	// (0x0006816d) fep_vkb_keypad_pane

0xce0e,	// (0x00068194) fep_vkb_side_pane_ParamLimits

0xce0e,	// (0x00068194) fep_vkb_side_pane

0xce4a,	// (0x000681d0) fep_vkb_top_pane_ParamLimits

0xce4a,	// (0x000681d0) fep_vkb_top_pane

0x4db9,	// (0x0006013f) fep_vkb_top_pane_g1_ParamLimits

0x4db9,	// (0x0006013f) fep_vkb_top_pane_g1

0x4dc8,	// (0x0006014e) fep_vkb_top_pane_g2_ParamLimits

0x4dc8,	// (0x0006014e) fep_vkb_top_pane_g2

0x4dd7,	// (0x0006015d) fep_vkb_top_pane_g3_ParamLimits

0x4dd7,	// (0x0006015d) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x0006aebe) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x0006aebe) fep_vkb_top_pane_g

0x4df5,	// (0x0006017b) fep_vkb_top_text_pane_ParamLimits

0x4df5,	// (0x0006017b) fep_vkb_top_text_pane

0xce86,	// (0x0006820c) fep_vkb_side_pane_g1_ParamLimits

0xce86,	// (0x0006820c) fep_vkb_side_pane_g1

0x4e4f,	// (0x000601d5) grid_vkb_side_pane_ParamLimits

0x4e4f,	// (0x000601d5) grid_vkb_side_pane

0x0a61,	// (0x0005bde7) bg_popup_fep_shadow_pane_g2

0x0a6a,	// (0x0005bdf0) bg_popup_fep_shadow_pane_g3

0x0a72,	// (0x0005bdf8) bg_popup_fep_shadow_pane_g4

0x0a7b,	// (0x0005be01) bg_popup_fep_shadow_pane_g5

0x0a85,	// (0x0005be0b) bg_popup_fep_shadow_pane_g6

0x0a8d,	// (0x0005be13) bg_popup_fep_shadow_pane_g7

0x8a0f,	// (0x00063d95) bg_popup_fep_shadow_pane_g8

0x4eae,	// (0x00060234) grid_vkb_keypad_number_pane_ParamLimits

0x4eae,	// (0x00060234) grid_vkb_keypad_number_pane

0x4ec2,	// (0x00060248) grid_vkb_keypad_pane_ParamLimits

0x4ec2,	// (0x00060248) grid_vkb_keypad_pane

0x4ee8,	// (0x0006026e) fep_vkb_bottom_pane_g1_ParamLimits

0x4ee8,	// (0x0006026e) fep_vkb_bottom_pane_g1

0x4f11,	// (0x00060297) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f11,	// (0x00060297) grid_vkb_keypad_bottom_left_pane

0x4f26,	// (0x000602ac) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f26,	// (0x000602ac) grid_vkb_keypad_bottom_right_pane

0x4f3b,	// (0x000602c1) fep_vkb_top_text_pane_g1

0xcecd,	// (0x00068253) fep_vkb_top_text_pane_t1

0xcedf,	// (0x00068265) cell_vkb_side_pane_ParamLimits

0xcedf,	// (0x00068265) cell_vkb_side_pane

0x4b6c,	// (0x0005fef2) cell_vkb_side_pane_g1

0x4faa,	// (0x00060330) cell_vkb_keypad_pane_ParamLimits

0x4faa,	// (0x00060330) cell_vkb_keypad_pane

0x5037,	// (0x000603bd) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x0006aeeb) bg_popup_fep_shadow_pane_g

0x0a9f,	// (0x0005be25) cell_hwr_side_pane_g1

0x0a9f,	// (0x0005be25) cell_hwr_side_pane_g2

0x5041,	// (0x000603c7) cell_vkb_keypad_pane_t1

0xcef5,	// (0x0006827b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcef5,	// (0x0006827b) cell_vkb_keypad_bottom_left_pane

0xcf0a,	// (0x00068290) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf0a,	// (0x00068290) cell_vkb_keypad_bottom_right_pane

0x4b6c,	// (0x0005fef2) cell_vkb_keypad_bottom_left_pane_g1

0x4b6c,	// (0x0005fef2) cell_vkb_keypad_bottom_right_pane_g1

0x50a5,	// (0x0006042b) cell_vkb_keypad_number_pane_ParamLimits

0x50a5,	// (0x0006042b) cell_vkb_keypad_number_pane

0x50c4,	// (0x0006044a) cell_vkb_keypad_number_pane_g1

0x50ce,	// (0x00060454) cell_vkb_keypad_number_pane_g2

0x50d7,	// (0x0006045d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x0006aedd) cell_vkb_keypad_number_pane_g

0x5041,	// (0x000603c7) cell_vkb_keypad_number_pane_t1

0x5101,	// (0x00060487) fep_vkb_candidate_pane_g1

0x0001,

0xfb78,	// (0x0006aefe) cell_hwr_side_pane_g

0x511a,	// (0x000604a0) cell_hwr_side_pane_t1

0x0aa9,	// (0x0005be2f) cell_hwr_side_pane_t1_copy1

0x0ab7,	// (0x0005be3d) cell_hwr_candidate_pane_g1

0x0ae6,	// (0x0005be6c) cell_hwr_candidate_pane_t1

0x4b6c,	// (0x0005fef2) cell_vkb_candidate_pane_g2

0x515e,	// (0x000604e4) cell_vkb_candidate_pane_t1

0x083c,	// (0x0005bbc2) bg_popup_fep_shadow_pane_ParamLimits

0x083c,	// (0x0005bbc2) bg_popup_fep_shadow_pane

0x08f3,	// (0x0005bc79) bg_fep_hwr_top_pane_g4

0x4bf1,	// (0x0005ff77) bg_hwr_side_pane_g1_ParamLimits

0x4bf1,	// (0x0005ff77) bg_hwr_side_pane_g1

0xbd1e,	// (0x000670a4) cell_hwr_side_pane_ParamLimits

0xbd1e,	// (0x000670a4) cell_hwr_side_pane

0x09a3,	// (0x0005bd29) fep_hwr_write_pane_g1_ParamLimits

0x09a3,	// (0x0005bd29) fep_hwr_write_pane_g1

0x09b0,	// (0x0005bd36) fep_hwr_write_pane_g2_ParamLimits

0x09b0,	// (0x0005bd36) fep_hwr_write_pane_g2

0x09bd,	// (0x0005bd43) fep_hwr_write_pane_g3_ParamLimits

0x09bd,	// (0x0005bd43) fep_hwr_write_pane_g3

0xbd3e,	// (0x000670c4) fep_hwr_write_pane_g4_ParamLimits

0xbd3e,	// (0x000670c4) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x0006aeaa) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x0006aeaa) fep_hwr_write_pane_g

0x08f3,	// (0x0005bc79) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x08f3,	// (0x0005bc79) bg_fep_hwr_candidate_pane_g2

0x09e0,	// (0x0005bd66) cell_hwr_candidate_pane_ParamLimits

0x09e0,	// (0x0005bd66) cell_hwr_candidate_pane

0x0a32,	// (0x0005bdb8) fep_hwr_candidate_pane_g1_ParamLimits

0x4c51,	// (0x0005ffd7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c51,	// (0x0005ffd7) bg_popup_fep_shadow_pane_cp2

0x4de7,	// (0x0006016d) fep_vkb_top_pane_g4_ParamLimits

0x4de7,	// (0x0006016d) fep_vkb_top_pane_g4

0x4e2d,	// (0x000601b3) fep_vkb_side_pane_g2_ParamLimits

0x4e2d,	// (0x000601b3) fep_vkb_side_pane_g2

0xa5bf,	// (0x00065945) list_setting_pane_t4_ParamLimits

0xa5bf,	// (0x00065945) list_setting_pane_t4

0xa65b,	// (0x000659e1) list_setting_number_pane_t5_ParamLimits

0xa65b,	// (0x000659e1) list_setting_number_pane_t5

0xa9c8,	// (0x00065d4e) list_double_heading_pane_cp2_ParamLimits

0xa9c8,	// (0x00065d4e) list_double_heading_pane_cp2

0x516c,	// (0x000604f2) list_double_heading_pane_g1_cp2_ParamLimits

0x516c,	// (0x000604f2) list_double_heading_pane_g1_cp2

0x5178,	// (0x000604fe) list_double_heading_pane_g2_cp2_ParamLimits

0x5178,	// (0x000604fe) list_double_heading_pane_g2_cp2

0x518c,	// (0x00060512) list_double_heading_pane_t1_cp2_ParamLimits

0x518c,	// (0x00060512) list_double_heading_pane_t1_cp2

0x51a2,	// (0x00060528) list_double_heading_pane_t2_cp2_ParamLimits

0x51a2,	// (0x00060528) list_double_heading_pane_t2_cp2

0x5d4f,	// (0x000610d5) aid_value_unit2

0xe81a,	// (0x00069ba0) popup_preview_fixed_window

0x5f06,	// (0x0006128c) bg_popup_preview_window_pane_cp02

0x51b4,	// (0x0006053a) list_preview_fixed_pane

0x51fa,	// (0x00060580) list_empty_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_empty_pane_fp

0x51fa,	// (0x00060580) list_single_cale_day_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_cale_day_pane_fp

0x51fa,	// (0x00060580) list_single_graphic_heading_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_graphic_heading_pane_fp

0x51fa,	// (0x00060580) list_single_graphic_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_graphic_pane_fp

0x51fa,	// (0x00060580) list_single_heading_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_heading_pane_fp

0x51fa,	// (0x00060580) list_single_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_pane_fp

0x5213,	// (0x00060599) list_single_pane_fp_g1_ParamLimits

0x5213,	// (0x00060599) list_single_pane_fp_g1

0x516c,	// (0x000604f2) list_single_pane_fp_g2_ParamLimits

0x516c,	// (0x000604f2) list_single_pane_fp_g2

0x5178,	// (0x000604fe) list_single_pane_fp_g3_ParamLimits

0x5178,	// (0x000604fe) list_single_pane_fp_g3

0x521f,	// (0x000605a5) list_single_pane_fp_g4_ParamLimits

0x521f,	// (0x000605a5) list_single_pane_fp_g4

0x0003,

0xfb8b,	// (0x0006af11) list_single_pane_fp_g_ParamLimits

0xfb8b,	// (0x0006af11) list_single_pane_fp_g

0xef1f,	// (0x0006a2a5) list_single_pane_fp_t1_ParamLimits

0xef1f,	// (0x0006a2a5) list_single_pane_fp_t1

0xef36,	// (0x0006a2bc) list_single_graphic_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a2bc) list_single_graphic_pane_fp_g1

0x5213,	// (0x00060599) list_single_graphic_pane_fp_g2_ParamLimits

0x5213,	// (0x00060599) list_single_graphic_pane_fp_g2

0x516c,	// (0x000604f2) list_single_graphic_pane_fp_g3_ParamLimits

0x516c,	// (0x000604f2) list_single_graphic_pane_fp_g3

0x5178,	// (0x000604fe) list_single_graphic_pane_fp_g4_ParamLimits

0x5178,	// (0x000604fe) list_single_graphic_pane_fp_g4

0x521f,	// (0x000605a5) list_single_graphic_pane_fp_g5_ParamLimits

0x521f,	// (0x000605a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb94,	// (0x0006af1a) list_single_graphic_pane_fp_g_ParamLimits

0xfb94,	// (0x0006af1a) list_single_graphic_pane_fp_g

0xef42,	// (0x0006a2c8) list_single_graphic_pane_fp_t1_ParamLimits

0xef42,	// (0x0006a2c8) list_single_graphic_pane_fp_t1

0xef36,	// (0x0006a2bc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a2bc) list_single_graphic_heading_pane_fp_g1

0x5213,	// (0x00060599) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5213,	// (0x00060599) list_single_graphic_heading_pane_fp_g2

0x516c,	// (0x000604f2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x516c,	// (0x000604f2) list_single_graphic_heading_pane_fp_g3

0x5178,	// (0x000604fe) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5178,	// (0x000604fe) list_single_graphic_heading_pane_fp_g4

0x521f,	// (0x000605a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x521f,	// (0x000605a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006af1a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006af1a) list_single_graphic_heading_pane_fp_g

0xef58,	// (0x0006a2de) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef58,	// (0x0006a2de) list_single_graphic_heading_pane_fp_t1

0xef6e,	// (0x0006a2f4) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a2f4) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9f,	// (0x0006af25) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9f,	// (0x0006af25) list_single_graphic_heading_pane_fp_t

0xef80,	// (0x0006a306) list_single_cale_day_pane_fp_g1_ParamLimits

0xef80,	// (0x0006a306) list_single_cale_day_pane_fp_g1

0x522b,	// (0x000605b1) list_single_cale_day_pane_fp_g2_ParamLimits

0x522b,	// (0x000605b1) list_single_cale_day_pane_fp_g2

0x3a8e,	// (0x0005ee14) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a8e,	// (0x0005ee14) list_single_cale_day_pane_fp_g3

0x3ab6,	// (0x0005ee3c) list_single_cale_day_pane_fp_g4_ParamLimits

0x3ab6,	// (0x0005ee3c) list_single_cale_day_pane_fp_g4

0x3ada,	// (0x0005ee60) list_single_cale_day_pane_fp_g5_ParamLimits

0x3ada,	// (0x0005ee60) list_single_cale_day_pane_fp_g5

0x0004,

0xfba4,	// (0x0006af2a) list_single_cale_day_pane_fp_g_ParamLimits

0xfba4,	// (0x0006af2a) list_single_cale_day_pane_fp_g

0xefb8,	// (0x0006a33e) list_single_cale_day_pane_fp_t1_ParamLimits

0xefb8,	// (0x0006a33e) list_single_cale_day_pane_fp_t1

0xefde,	// (0x0006a364) list_single_cale_day_pane_fp_t2_ParamLimits

0xefde,	// (0x0006a364) list_single_cale_day_pane_fp_t2

0xeff7,	// (0x0006a37d) list_single_cale_day_pane_fp_t3_ParamLimits

0xeff7,	// (0x0006a37d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaf,	// (0x0006af35) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaf,	// (0x0006af35) list_single_cale_day_pane_fp_t

0x5213,	// (0x00060599) list_empty_pane_fp_g1_ParamLimits

0x5213,	// (0x00060599) list_empty_pane_fp_g1

0xf010,	// (0x0006a396) list_empty_pane_fp_t1

0xf01e,	// (0x0006a3a4) list_empty_pane_fp_t2

0x0001,

0xfbb6,	// (0x0006af3c) list_empty_pane_fp_t

0x5213,	// (0x00060599) list_single_heading_pane_fp_g1_ParamLimits

0x5213,	// (0x00060599) list_single_heading_pane_fp_g1

0x516c,	// (0x000604f2) list_single_heading_pane_fp_g2_ParamLimits

0x516c,	// (0x000604f2) list_single_heading_pane_fp_g2

0x5178,	// (0x000604fe) list_single_heading_pane_fp_g3_ParamLimits

0x5178,	// (0x000604fe) list_single_heading_pane_fp_g3

0x0002,

0xfbbb,	// (0x0006af41) list_single_heading_pane_fp_g_ParamLimits

0xfbbb,	// (0x0006af41) list_single_heading_pane_fp_g

0xf02c,	// (0x0006a3b2) list_single_heading_pane_fp_t1_ParamLimits

0xf02c,	// (0x0006a3b2) list_single_heading_pane_fp_t1

0xf03e,	// (0x0006a3c4) list_single_heading_pane_fp_t2_ParamLimits

0xf03e,	// (0x0006a3c4) list_single_heading_pane_fp_t2

0x0001,

0xfbc2,	// (0x0006af48) list_single_heading_pane_fp_t_ParamLimits

0xfbc2,	// (0x0006af48) list_single_heading_pane_fp_t

0x8b02,	// (0x00063e88) aid_size_cell_fast

0x5edb,	// (0x00061261) soft_indicator_pane_cp1_t1

0x8b3f,	// (0x00063ec5) cell_app_pane_cp2_ParamLimits

0x8b3f,	// (0x00063ec5) cell_app_pane_cp2

0x085e,	// (0x0005bbe4) fep_hwr_candidate_drop_down_list_pane

0x0a4c,	// (0x0005bdd2) fep_hwr_candidate_pane_g3_ParamLimits

0x0a4c,	// (0x0005bdd2) fep_hwr_candidate_pane_g3

0xcd9c,	// (0x00068122) fep_hwr_candidate_pane_g4_ParamLimits

0xcd9c,	// (0x00068122) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0006aeb7) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0006aeb7) fep_hwr_candidate_pane_g

0x4ce1,	// (0x00060067) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4ce1,	// (0x00060067) fep_vkb_candidate_drop_down_list_pane

0x5109,	// (0x0006048f) fep_vkb_candidate_pane_g3

0x5111,	// (0x00060497) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0006aee4) fep_vkb_candidate_pane_g

0x0ab7,	// (0x0005be3d) cell_hwr_candidate_pane_g1_ParamLimits

0x0ac5,	// (0x0005be4b) cell_hwr_candidate_pane_g3_ParamLimits

0x0ac5,	// (0x0005be4b) cell_hwr_candidate_pane_g3

0x638f,	// (0x00061715) cell_hwr_candidate_pane_g4_ParamLimits

0x638f,	// (0x00061715) cell_hwr_candidate_pane_g4

0x0002,

0xfb7d,	// (0x0006af03) cell_hwr_candidate_pane_g_ParamLimits

0xfb7d,	// (0x0006af03) cell_hwr_candidate_pane_g

0x5128,	// (0x000604ae) cell_vkb_candidate_pane_g3_ParamLimits

0x5128,	// (0x000604ae) cell_vkb_candidate_pane_g3

0x5143,	// (0x000604c9) cell_vkb_candidate_pane_g4_ParamLimits

0x5143,	// (0x000604c9) cell_vkb_candidate_pane_g4

0x5237,	// (0x000605bd) cell_app_pane_cp2_g1_ParamLimits

0x5237,	// (0x000605bd) cell_app_pane_cp2_g1

0x5255,	// (0x000605db) cell_app_pane_cp2_g2_ParamLimits

0x5255,	// (0x000605db) cell_app_pane_cp2_g2

0x0001,

0xfbc7,	// (0x0006af4d) cell_app_pane_cp2_g_ParamLimits

0xfbc7,	// (0x0006af4d) cell_app_pane_cp2_g

0x5261,	// (0x000605e7) cell_app_pane_cp2_t1_ParamLimits

0x5261,	// (0x000605e7) cell_app_pane_cp2_t1

0x899c,	// (0x00063d22) grid_highlight_pane_cp1_ParamLimits

0x899c,	// (0x00063d22) grid_highlight_pane_cp1

0x0b04,	// (0x0005be8a) cell_hwr_candidate_pane_cp1_ParamLimits

0x0b04,	// (0x0005be8a) cell_hwr_candidate_pane_cp1

0x0ab7,	// (0x0005be3d) fep_hwr_candidate_drop_down_list_pane_g1

0x0b28,	// (0x0005beae) fep_hwr_candidate_drop_down_list_pane_g2

0x0b35,	// (0x0005bebb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcc,	// (0x0006af52) fep_hwr_candidate_drop_down_list_pane_g

0x0b42,	// (0x0005bec8) fep_hwr_candidate_drop_down_list_scroll_pane

0x0b4b,	// (0x0005bed1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0b4b,	// (0x0005bed1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0b58,	// (0x0005bede) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0b58,	// (0x0005bede) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0b65,	// (0x0005beeb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0b65,	// (0x0005beeb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0b72,	// (0x0005bef8) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0b72,	// (0x0005bef8) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0b8d,	// (0x0005bf13) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0b8d,	// (0x0005bf13) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0ba8,	// (0x0005bf2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ba8,	// (0x0005bf2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0bc3,	// (0x0005bf49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0bc3,	// (0x0005bf49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0bde,	// (0x0005bf64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0bde,	// (0x0005bf64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd3,	// (0x0006af59) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd3,	// (0x0006af59) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5273,	// (0x000605f9) cell_vkb_candidate_pane_cp1_ParamLimits

0x5273,	// (0x000605f9) cell_vkb_candidate_pane_cp1

0x4de7,	// (0x0006016d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4de7,	// (0x0006016d) fep_vkb_candidate_drop_down_list_pane_g1

0x5299,	// (0x0006061f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5299,	// (0x0006061f) fep_vkb_candidate_drop_down_list_pane_g2

0x52a6,	// (0x0006062c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x52a6,	// (0x0006062c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe4,	// (0x0006af6a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe4,	// (0x0006af6a) fep_vkb_candidate_drop_down_list_pane_g

0x52b3,	// (0x00060639) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x52b3,	// (0x00060639) fep_vkb_candidate_drop_down_list_scroll_pane

0x52c0,	// (0x00060646) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x52c0,	// (0x00060646) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x52cd,	// (0x00060653) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x52cd,	// (0x00060653) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x52d9,	// (0x0006065f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x52d9,	// (0x0006065f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x52e5,	// (0x0006066b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52e5,	// (0x0006066b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5306,	// (0x0006068c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5306,	// (0x0006068c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5327,	// (0x000606ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5327,	// (0x000606ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5348,	// (0x000606ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5348,	// (0x000606ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5369,	// (0x000606ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5369,	// (0x000606ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbeb,	// (0x0006af71) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbeb,	// (0x0006af71) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e23,	// (0x000651a9) title_pane_g1_ParamLimits

0x9e36,	// (0x000651bc) title_pane_g2_ParamLimits

0xf54e,	// (0x0006a8d4) title_pane_g_ParamLimits

0x8e6e,	// (0x000641f4) aid_call2_pane

0x8e76,	// (0x000641fc) aid_call_pane

0x8e7e,	// (0x00064204) popup_clock_analogue_window_g1

0x8e7e,	// (0x00064204) popup_clock_analogue_window_g2

0xf279,	// (0x0006a5ff) popup_clock_analogue_window_g3

0xf282,	// (0x0006a608) popup_clock_analogue_window_g4

0x5d61,	// (0x000610e7) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006aa83) popup_clock_analogue_window_g

0xf28a,	// (0x0006a610) popup_clock_analogue_window_t1

0xf298,	// (0x0006a61e) clock_digital_number_pane_ParamLimits

0xf298,	// (0x0006a61e) clock_digital_number_pane

0xf2a4,	// (0x0006a62a) clock_digital_number_pane_cp02_ParamLimits

0xf2a4,	// (0x0006a62a) clock_digital_number_pane_cp02

0xf2b0,	// (0x0006a636) clock_digital_number_pane_cp03_ParamLimits

0xf2b0,	// (0x0006a636) clock_digital_number_pane_cp03

0xf2bc,	// (0x0006a642) clock_digital_number_pane_cp04_ParamLimits

0xf2bc,	// (0x0006a642) clock_digital_number_pane_cp04

0xf2c8,	// (0x0006a64e) clock_digital_separator_pane_ParamLimits

0xf2c8,	// (0x0006a64e) clock_digital_separator_pane

0xf2d4,	// (0x0006a65a) popup_clock_digital_window_t1_ParamLimits

0xf2d4,	// (0x0006a65a) popup_clock_digital_window_t1

0x5d61,	// (0x000610e7) clock_digital_number_pane_g1

0x5d61,	// (0x000610e7) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006aa8e) clock_digital_number_pane_g

0x5d61,	// (0x000610e7) clock_digital_separator_pane_g1

0x5d61,	// (0x000610e7) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006aa8e) clock_digital_separator_pane_g

0xb64a,	// (0x000669d0) aid_fill_nsta_ParamLimits

0xb782,	// (0x00066b08) indicator_nsta_pane_ParamLimits

0x2172,	// (0x0005d4f8) popup_clock_analogue_window

0x2172,	// (0x0005d4f8) popup_clock_digital_window

0xcbb9,	// (0x00067f3f) grid_indicator_nsta_pane_ParamLimits

0x459f,	// (0x0005f925) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x0006ae37) clock_nsta_pane_t

0xf246,	// (0x0006a5cc) aid_size_max_handle

0xa93b,	// (0x00065cc1) aid_size_min_handle

0xe9a8,	// (0x00069d2e) editor_scroll_pane

0x5384,	// (0x0006070a) ex_editor_pane

0x8ac8,	// (0x00063e4e) scroll_pane_cp13

0x6387,	// (0x0006170d) scroll_pane_cp14

0x8ead,	// (0x00064233) scroll_pane_cp36

0xa9db,	// (0x00065d61) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9db,	// (0x00065d61) list_single_graphic_hl_pane_cp2

0xca55,	// (0x00067ddb) list_single_graphic_hl_pane_ParamLimits

0xca55,	// (0x00067ddb) list_single_graphic_hl_pane

0xf054,	// (0x0006a3da) aid_size_min_hl_cp1

0x538c,	// (0x00060712) list_highlight_pane_cp34_ParamLimits

0x538c,	// (0x00060712) list_highlight_pane_cp34

0x539d,	// (0x00060723) list_single_graphic_hl_pane_g1_ParamLimits

0x539d,	// (0x00060723) list_single_graphic_hl_pane_g1

0xbd53,	// (0x000670d9) list_single_graphic_hl_pane_g2_ParamLimits

0xbd53,	// (0x000670d9) list_single_graphic_hl_pane_g2

0xbd53,	// (0x000670d9) list_single_graphic_hl_pane_g3_ParamLimits

0xbd53,	// (0x000670d9) list_single_graphic_hl_pane_g3

0xcf25,	// (0x000682ab) list_single_graphic_hl_pane_g4_ParamLimits

0xcf25,	// (0x000682ab) list_single_graphic_hl_pane_g4

0x53da,	// (0x00060760) list_single_graphic_hl_pane_g5_ParamLimits

0x53da,	// (0x00060760) list_single_graphic_hl_pane_g5

0x0004,

0xfbfc,	// (0x0006af82) list_single_graphic_hl_pane_g_ParamLimits

0xfbfc,	// (0x0006af82) list_single_graphic_hl_pane_g

0xbd5f,	// (0x000670e5) list_single_graphic_hl_pane_t1_ParamLimits

0xbd5f,	// (0x000670e5) list_single_graphic_hl_pane_t1

0x53aa,	// (0x00060730) aid_size_min_hl_cp2

0x53b3,	// (0x00060739) list_highlight_pane_cp34_cp2_ParamLimits

0x53b3,	// (0x00060739) list_highlight_pane_cp34_cp2

0x539d,	// (0x00060723) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x539d,	// (0x00060723) list_single_graphic_hl_pane_g1_cp2

0x53c0,	// (0x00060746) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x53c0,	// (0x00060746) list_single_graphic_hl_pane_g2_cp2

0xcf31,	// (0x000682b7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf31,	// (0x000682b7) list_single_graphic_hl_pane_g3_cp2

0xcf25,	// (0x000682ab) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf25,	// (0x000682ab) list_single_graphic_hl_pane_g4_cp2

0x53da,	// (0x00060760) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x53da,	// (0x00060760) list_single_graphic_hl_pane_g5_cp2

0xadad,	// (0x00066133) control_pane_g4_ParamLimits

0xadad,	// (0x00066133) control_pane_g4

0x016c,	// (0x0005b4f2) bg_popup_sub_pane_cp10_ParamLimits

0x4b76,	// (0x0005fefc) list_choice_list_pane_ParamLimits

0x4b85,	// (0x0005ff0b) scroll_pane_cp23

0x5f06,	// (0x0006128c) bg_popup_preview_window_pane_cp02_ParamLimits

0x51b4,	// (0x0006053a) list_preview_fixed_pane_ParamLimits

0x51ca,	// (0x00060550) list_preview_fixed_pane_cp_ParamLimits

0x51ca,	// (0x00060550) list_preview_fixed_pane_cp

0x51d6,	// (0x0006055c) popup_preview_fixed_window_g1_ParamLimits

0x51d6,	// (0x0006055c) popup_preview_fixed_window_g1

0x51e2,	// (0x00060568) popup_preview_fixed_window_g2_ParamLimits

0x51e2,	// (0x00060568) popup_preview_fixed_window_g2

0x0002,

0xfb84,	// (0x0006af0a) popup_preview_fixed_window_g_ParamLimits

0xfb84,	// (0x0006af0a) popup_preview_fixed_window_g

0xf1b8,	// (0x0006a53e) aid_navi_side_left_pane_ParamLimits

0xf1cd,	// (0x0006a553) aid_navi_side_right_pane_ParamLimits

0xf1e5,	// (0x0006a56b) navi_icon_pane_stacon_ParamLimits

0xf1f9,	// (0x0006a57f) navi_navi_pane_stacon_ParamLimits

0xf1e5,	// (0x0006a56b) navi_text_pane_stacon_ParamLimits

0x5d57,	// (0x000610dd) main_text_info_pane

0x5404,	// (0x0006078a) listscroll_text_info_pane

0x540c,	// (0x00060792) list_text_info_pane_ParamLimits

0x540c,	// (0x00060792) list_text_info_pane

0x541b,	// (0x000607a1) scroll_pane_cp24_ParamLimits

0x541b,	// (0x000607a1) scroll_pane_cp24

0xcf3f,	// (0x000682c5) list_text_info_pane_t1_ParamLimits

0xcf3f,	// (0x000682c5) list_text_info_pane_t1

0xaf43,	// (0x000662c9) popup_fast_swap2_window_ParamLimits

0xaf43,	// (0x000662c9) popup_fast_swap2_window

0x545e,	// (0x000607e4) aid_size_cell_fast2

0x5d57,	// (0x000610dd) bg_popup_window_pane_cp17

0x27cf,	// (0x0005db55) heading_pane_cp2

0x610c,	// (0x00061492) listscroll_fast2_pane

0x5468,	// (0x000607ee) grid_fast2_pane

0x5472,	// (0x000607f8) listscroll_fast2_pane_g1

0x547c,	// (0x00060802) listscroll_fast2_pane_g2

0x0001,

0xfc07,	// (0x0006af8d) listscroll_fast2_pane_g

0x8ac8,	// (0x00063e4e) scroll_pane_cp26

0x5486,	// (0x0006080c) cell_fast2_pane_ParamLimits

0x5486,	// (0x0006080c) cell_fast2_pane

0x549d,	// (0x00060823) cell_fast2_pane_g1

0x54a6,	// (0x0006082c) cell_fast2_pane_g2

0x54af,	// (0x00060835) cell_fast2_pane_g3

0x0002,

0xfc0c,	// (0x0006af92) cell_fast2_pane_g

0x614e,	// (0x000614d4) grid_highlight_pane_cp9

0x6163,	// (0x000614e9) main_eswt_pane_ParamLimits

0x6163,	// (0x000614e9) main_eswt_pane

0x5430,	// (0x000607b6) list_single_text_info_pane

0x54b7,	// (0x0006083d) eswt_ctrl_button_pane

0x54b7,	// (0x0006083d) eswt_ctrl_canvas_pane

0x54bf,	// (0x00060845) eswt_ctrl_combo_pane

0x54b7,	// (0x0006083d) eswt_ctrl_default_pane

0x54b7,	// (0x0006083d) eswt_ctrl_label_pane

0x54c7,	// (0x0006084d) eswt_ctrl_wait_pane

0x54cf,	// (0x00060855) eswt_shell_pane

0x5d57,	// (0x000610dd) listscroll_eswt_app_pane

0x54ef,	// (0x00060875) popup_eswt_tasktip_window_ParamLimits

0x54ef,	// (0x00060875) popup_eswt_tasktip_window

0x240f,	// (0x0005d795) bg_popup_window_pane_cp18

0x5500,	// (0x00060886) eswt_control_pane_g1_ParamLimits

0x5500,	// (0x00060886) eswt_control_pane_g1

0x550d,	// (0x00060893) eswt_control_pane_g2_ParamLimits

0x550d,	// (0x00060893) eswt_control_pane_g2

0x551a,	// (0x000608a0) eswt_control_pane_g3_ParamLimits

0x551a,	// (0x000608a0) eswt_control_pane_g3

0x5527,	// (0x000608ad) eswt_control_pane_g4_ParamLimits

0x5527,	// (0x000608ad) eswt_control_pane_g4

0x0003,

0xfc13,	// (0x0006af99) eswt_control_pane_g_ParamLimits

0xfc13,	// (0x0006af99) eswt_control_pane_g

0x899c,	// (0x00063d22) bg_button_pane_ParamLimits

0x899c,	// (0x00063d22) bg_button_pane

0x6163,	// (0x000614e9) common_borders_pane_copy2_ParamLimits

0x6163,	// (0x000614e9) common_borders_pane_copy2

0x5534,	// (0x000608ba) control_button_pane_g1_ParamLimits

0x5534,	// (0x000608ba) control_button_pane_g1

0x5540,	// (0x000608c6) control_button_pane_g2_ParamLimits

0x5540,	// (0x000608c6) control_button_pane_g2

0x554c,	// (0x000608d2) control_button_pane_g3_ParamLimits

0x554c,	// (0x000608d2) control_button_pane_g3

0x0002,

0xfc1c,	// (0x0006afa2) control_button_pane_g_ParamLimits

0xfc1c,	// (0x0006afa2) control_button_pane_g

0x5560,	// (0x000608e6) control_button_pane_t1

0x556e,	// (0x000608f4) control_button_pane_t2

0x0001,

0xfc23,	// (0x0006afa9) control_button_pane_t

0x239b,	// (0x0005d721) bg_button_pane_g1

0x23ab,	// (0x0005d731) bg_button_pane_g2

0x23a3,	// (0x0005d729) bg_button_pane_g3

0x23bb,	// (0x0005d741) bg_button_pane_g4

0x23b3,	// (0x0005d739) bg_button_pane_g5

0x23c3,	// (0x0005d749) bg_button_pane_g6

0x23cb,	// (0x0005d751) bg_button_pane_g7

0x23db,	// (0x0005d761) bg_button_pane_g8

0x23d3,	// (0x0005d759) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006abec) bg_button_pane_g

0x4b31,	// (0x0005feb7) common_borders_pane_ParamLimits

0x4b31,	// (0x0005feb7) common_borders_pane

0x5500,	// (0x00060886) eswt_control_pane_g1_copy1_ParamLimits

0x5500,	// (0x00060886) eswt_control_pane_g1_copy1

0x550d,	// (0x00060893) eswt_control_pane_g2_copy1_ParamLimits

0x550d,	// (0x00060893) eswt_control_pane_g2_copy1

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy1_ParamLimits

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy1

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy1_ParamLimits

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy1

0x4b6c,	// (0x0005fef2) bg_eswt_ctrl_canvas_pane_g1

0x4b31,	// (0x0005feb7) common_borders_pane_cp2_ParamLimits

0x4b31,	// (0x0005feb7) common_borders_pane_cp2

0x4b31,	// (0x0005feb7) common_borders_pane_cp3_ParamLimits

0x4b31,	// (0x0005feb7) common_borders_pane_cp3

0x557c,	// (0x00060902) separator_horizontal_pane

0x5584,	// (0x0006090a) separator_vertical_pane

0x5500,	// (0x00060886) eswt_control_pane_g1_copy2_ParamLimits

0x5500,	// (0x00060886) eswt_control_pane_g1_copy2

0x550d,	// (0x00060893) eswt_control_pane_g2_copy2_ParamLimits

0x550d,	// (0x00060893) eswt_control_pane_g2_copy2

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy2_ParamLimits

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy2

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy2_ParamLimits

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy2

0x5d57,	// (0x000610dd) common_borders_pane_cp4

0x558d,	// (0x00060913) separator_horizontal_pane_g1

0x5596,	// (0x0006091c) separator_horizontal_pane_g2

0x559f,	// (0x00060925) separator_horizontal_pane_g3

0x0002,

0xfc28,	// (0x0006afae) separator_horizontal_pane_g

0x5500,	// (0x00060886) eswt_control_pane_g1_copy3_ParamLimits

0x5500,	// (0x00060886) eswt_control_pane_g1_copy3

0x550d,	// (0x00060893) eswt_control_pane_g2_copy3_ParamLimits

0x550d,	// (0x00060893) eswt_control_pane_g2_copy3

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy3_ParamLimits

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy3

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy3_ParamLimits

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy3

0x5d57,	// (0x000610dd) common_borders_pane_cp5

0x55a8,	// (0x0006092e) separator_vertical_pane_g1

0x55b1,	// (0x00060937) separator_vertical_pane_g2

0x55ba,	// (0x00060940) separator_vertical_pane_g3

0x0002,

0xfc2f,	// (0x0006afb5) separator_vertical_pane_g

0x5500,	// (0x00060886) eswt_control_pane_g1_copy4_ParamLimits

0x5500,	// (0x00060886) eswt_control_pane_g1_copy4

0x550d,	// (0x00060893) eswt_control_pane_g2_copy4_ParamLimits

0x550d,	// (0x00060893) eswt_control_pane_g2_copy4

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy4_ParamLimits

0x551a,	// (0x000608a0) eswt_control_pane_g3_copy4

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy4_ParamLimits

0x5527,	// (0x000608ad) eswt_control_pane_g4_copy4

0xcf61,	// (0x000682e7) eswt_ctrl_combo_button_pane

0xcf69,	// (0x000682ef) eswt_ctrl_input_pane

0xcf71,	// (0x000682f7) popup_choice_list_window_cp70

0xcf79,	// (0x000682ff) eswt_ctrl_input_pane_t1

0x5d57,	// (0x000610dd) input_focus_pane_cp70

0x4b31,	// (0x0005feb7) bg_button_pane_cp70_ParamLimits

0x4b31,	// (0x0005feb7) bg_button_pane_cp70

0xcf87,	// (0x0006830d) eswt_ctrl_combo_button_pane_g1

0x55f1,	// (0x00060977) wait_bar_pane_cp70

0x240f,	// (0x0005d795) bg_popup_window_pane_cp70_ParamLimits

0x240f,	// (0x0005d795) bg_popup_window_pane_cp70

0x55f9,	// (0x0006097f) popup_eswt_tasktip_window_t1

0x560f,	// (0x00060995) wait_bar_pane_cp71_ParamLimits

0x560f,	// (0x00060995) wait_bar_pane_cp71

0x561b,	// (0x000609a1) grid_eswt_app_pane

0x8d0d,	// (0x00064093) scroll_pane_cp70

0xcf8f,	// (0x00068315) cell_eswt_app_pane_ParamLimits

0xcf8f,	// (0x00068315) cell_eswt_app_pane

0xcfc1,	// (0x00068347) cell_eswt_app_pane_g1_ParamLimits

0xcfc1,	// (0x00068347) cell_eswt_app_pane_g1

0xcff0,	// (0x00068376) cell_eswt_app_pane_g2_ParamLimits

0xcff0,	// (0x00068376) cell_eswt_app_pane_g2

0x0001,

0xfc36,	// (0x0006afbc) cell_eswt_app_pane_g_ParamLimits

0xfc36,	// (0x0006afbc) cell_eswt_app_pane_g

0xd019,	// (0x0006839f) cell_eswt_app_pane_t1_ParamLimits

0xd019,	// (0x0006839f) cell_eswt_app_pane_t1

0x56e0,	// (0x00060a66) grid_highlight_pane_cp70_ParamLimits

0x56e0,	// (0x00060a66) grid_highlight_pane_cp70

0x91e6,	// (0x0006456c) set_content_pane_g1

0xad43,	// (0x000660c9) status_small_volume_pane

0x0c1b,	// (0x0005bfa1) status_small_volume_pane_g1

0x0c23,	// (0x0005bfa9) volume_small2_pane

0x0c2c,	// (0x0005bfb2) volume_small2_pane_g1

0x0c35,	// (0x0005bfbb) volume_small2_pane_g2

0x0c3e,	// (0x0005bfc4) volume_small2_pane_g3

0x0c47,	// (0x0005bfcd) volume_small2_pane_g4

0x0c50,	// (0x0005bfd6) volume_small2_pane_g5

0x0c59,	// (0x0005bfdf) volume_small2_pane_g6

0x0c62,	// (0x0005bfe8) volume_small2_pane_g7

0x0c6b,	// (0x0005bff1) volume_small2_pane_g8

0x0c74,	// (0x0005bffa) volume_small2_pane_g9

0x0c7d,	// (0x0005c003) volume_small2_pane_g10

0x0009,

0xfc3b,	// (0x0006afc1) volume_small2_pane_g

0x4f3b,	// (0x000602c1) fep_vkb_top_text_pane_g1_ParamLimits

0xcecd,	// (0x00068253) fep_vkb_top_text_pane_t1_ParamLimits

0x51ee,	// (0x00060574) popup_preview_fixed_window_g3_ParamLimits

0x51ee,	// (0x00060574) popup_preview_fixed_window_g3

0xb5dd,	// (0x00066963) popup_toolbar_trans_pane

0xc890,	// (0x00067c16) aid_height_set_list_ParamLimits

0x3764,	// (0x0005eaea) aid_size_parent_ParamLimits

0x016c,	// (0x0005b4f2) list_highlight_pane_cp2_ParamLimits

0x91e6,	// (0x0006456c) set_content_pane_g1_ParamLimits

0xbcf5,	// (0x0006707b) list_single_image_pane_ParamLimits

0xbcf5,	// (0x0006707b) list_single_image_pane

0xd04b,	// (0x000683d1) aid_size_cell_image_ParamLimits

0xd04b,	// (0x000683d1) aid_size_cell_image

0xd058,	// (0x000683de) grid_single_image_pane_ParamLimits

0xd058,	// (0x000683de) grid_single_image_pane

0x89aa,	// (0x00063d30) list_single_image_pane_g1_ParamLimits

0x89aa,	// (0x00063d30) list_single_image_pane_g1

0x89b6,	// (0x00063d3c) list_single_image_pane_g2_ParamLimits

0x89b6,	// (0x00063d3c) list_single_image_pane_g2

0x0001,

0xfc50,	// (0x0006afd6) list_single_image_pane_g_ParamLimits

0xfc50,	// (0x0006afd6) list_single_image_pane_g

0x5707,	// (0x00060a8d) list_single_image_pane_t1_ParamLimits

0x5707,	// (0x00060a8d) list_single_image_pane_t1

0xd066,	// (0x000683ec) cell_image_list_pane_ParamLimits

0xd066,	// (0x000683ec) cell_image_list_pane

0xd07a,	// (0x00068400) cell_image_list_pane_g1

0xd083,	// (0x00068409) cell_image_list_pane_g2

0x0001,

0xfc55,	// (0x0006afdb) cell_image_list_pane_g

0x5745,	// (0x00060acb) aid_size_cell_tb_trans_pane

0x899c,	// (0x00063d22) bg_tb_trans_pane

0x5757,	// (0x00060add) grid_tb_trans_pane

0x239b,	// (0x0005d721) bg_tb_trans_pane_g1

0x23ab,	// (0x0005d731) bg_tb_trans_pane_g2

0x23a3,	// (0x0005d729) bg_tb_trans_pane_g3

0x23bb,	// (0x0005d741) bg_tb_trans_pane_g4

0x23b3,	// (0x0005d739) bg_tb_trans_pane_g5

0x23db,	// (0x0005d761) bg_tb_trans_pane_g6

0x23d3,	// (0x0005d759) bg_tb_trans_pane_g7

0x23c3,	// (0x0005d749) bg_tb_trans_pane_g8

0x23cb,	// (0x0005d751) bg_tb_trans_pane_g9

0x0008,

0xfc5a,	// (0x0006afe0) bg_tb_trans_pane_g

0x576b,	// (0x00060af1) cell_toolbar_trans_pane_ParamLimits

0x576b,	// (0x00060af1) cell_toolbar_trans_pane

0x4b6c,	// (0x0005fef2) cell_toolbar_trans_pane_g1

0xcca5,	// (0x0006802b) list_form2_midp_pane_t1

0xccb3,	// (0x00068039) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x0006ae7d) list_form2_midp_pane_t

0x47ac,	// (0x0005fb32) scroll_pane_cp51_ParamLimits

0x4973,	// (0x0005fcf9) form2_midp_wait_pane_g1

0x497c,	// (0x0005fd02) form2_midp_wait_pane_g2

0x4985,	// (0x0005fd0b) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x0006ae92) form2_midp_wait_pane_g

0x5dc5,	// (0x0006114b) list_highlight_pane_cp21_ParamLimits

0x49c9,	// (0x0005fd4f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x49d8,	// (0x0005fd5e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x393c,	// (0x0005ecc2) list_single_2graphic_im_pane_ParamLimits

0x393c,	// (0x0005ecc2) list_single_2graphic_im_pane

0xd08c,	// (0x00068412) list_single_2graphic_im_pane_g1_ParamLimits

0xd08c,	// (0x00068412) list_single_2graphic_im_pane_g1

0xd09d,	// (0x00068423) list_single_2graphic_im_pane_g2_ParamLimits

0xd09d,	// (0x00068423) list_single_2graphic_im_pane_g2

0xd0a9,	// (0x0006842f) list_single_2graphic_im_pane_g3_ParamLimits

0xd0a9,	// (0x0006842f) list_single_2graphic_im_pane_g3

0x0003,

0xfc6d,	// (0x0006aff3) list_single_2graphic_im_pane_g_ParamLimits

0xfc6d,	// (0x0006aff3) list_single_2graphic_im_pane_g

0xd0bd,	// (0x00068443) list_single_2graphic_im_pane_t1_ParamLimits

0xd0bd,	// (0x00068443) list_single_2graphic_im_pane_t1

0x51fa,	// (0x00060580) list_single_graphic_2heading_pane_fp_ParamLimits

0x51fa,	// (0x00060580) list_single_graphic_2heading_pane_fp

0xef36,	// (0x0006a2bc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xef36,	// (0x0006a2bc) list_single_graphic_2heading_pane_fp_g1

0x5213,	// (0x00060599) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5213,	// (0x00060599) list_single_graphic_2heading_pane_fp_g2

0x516c,	// (0x000604f2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x516c,	// (0x000604f2) list_single_graphic_2heading_pane_fp_g3

0x5178,	// (0x000604fe) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5178,	// (0x000604fe) list_single_graphic_2heading_pane_fp_g4

0x521f,	// (0x000605a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x521f,	// (0x000605a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb94,	// (0x0006af1a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0006af1a) list_single_graphic_2heading_pane_fp_g

0xf05d,	// (0x0006a3e3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf05d,	// (0x0006a3e3) list_single_graphic_2heading_pane_fp_t1

0xef6e,	// (0x0006a2f4) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef6e,	// (0x0006a2f4) list_single_graphic_2heading_pane_fp_t2

0xf073,	// (0x0006a3f9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf073,	// (0x0006a3f9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc76,	// (0x0006affc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc76,	// (0x0006affc) list_single_graphic_2heading_pane_fp_t

0x4bfd,	// (0x0005ff83) fep_hwr_write_pane_g5_ParamLimits

0x4bfd,	// (0x0005ff83) fep_hwr_write_pane_g5

0x4c09,	// (0x0005ff8f) fep_hwr_write_pane_g6_ParamLimits

0x4c09,	// (0x0005ff8f) fep_hwr_write_pane_g6

0x54cf,	// (0x00060855) eswt_shell_pane_ParamLimits

0x240f,	// (0x0005d795) bg_popup_window_pane_cp18_ParamLimits

0x36aa,	// (0x0005ea30) heading_pane_cp70

0x55f9,	// (0x0006097f) popup_eswt_tasktip_window_t1_ParamLimits

0xb6a7,	// (0x00066a2d) aid_touch_tab_arrow_left

0xb6bd,	// (0x00066a43) aid_touch_tab_arrow_right

0x5d75,	// (0x000610fb) title_pane_g3_ParamLimits

0x5d75,	// (0x000610fb) title_pane_g3

0x895b,	// (0x00063ce1) set_value_pane_g1

0xb5dd,	// (0x00066963) popup_toolbar_trans_pane_ParamLimits

0x5745,	// (0x00060acb) aid_size_cell_tb_trans_pane_ParamLimits

0x899c,	// (0x00063d22) bg_tb_trans_pane_ParamLimits

0x5757,	// (0x00060add) grid_tb_trans_pane_ParamLimits

0x5f06,	// (0x0006128c) cont_note_pane_ParamLimits

0x5f06,	// (0x0006128c) cont_note_pane

0x6163,	// (0x000614e9) cont_snote2_single_text_pane_ParamLimits

0x6163,	// (0x000614e9) cont_snote2_single_text_pane

0x6163,	// (0x000614e9) cont_snote2_single_graphic_pane_ParamLimits

0x6163,	// (0x000614e9) cont_snote2_single_graphic_pane

0x29eb,	// (0x0005dd71) cont_note_wait_pane_ParamLimits

0x29eb,	// (0x0005dd71) cont_note_wait_pane

0x29eb,	// (0x0005dd71) cont_note_image_pane_ParamLimits

0x29eb,	// (0x0005dd71) cont_note_image_pane

0x57ff,	// (0x00060b85) popup_note2_window_g1_ParamLimits

0x57ff,	// (0x00060b85) popup_note2_window_g1

0x5830,	// (0x00060bb6) popup_note2_window_t1_ParamLimits

0x5830,	// (0x00060bb6) popup_note2_window_t1

0x5875,	// (0x00060bfb) popup_note2_window_t2_ParamLimits

0x5875,	// (0x00060bfb) popup_note2_window_t2

0x58ba,	// (0x00060c40) popup_note2_window_t3_ParamLimits

0x58ba,	// (0x00060c40) popup_note2_window_t3

0x58ff,	// (0x00060c85) popup_note2_window_t4_ParamLimits

0x58ff,	// (0x00060c85) popup_note2_window_t4

0x5f8a,	// (0x00061310) popup_note2_window_t5_ParamLimits

0x5f8a,	// (0x00061310) popup_note2_window_t5

0x0004,

0xfc82,	// (0x0006b008) popup_note2_window_t_ParamLimits

0xfc82,	// (0x0006b008) popup_note2_window_t

0x592e,	// (0x00060cb4) popup_note2_image_window_g1_ParamLimits

0x592e,	// (0x00060cb4) popup_note2_image_window_g1

0x593a,	// (0x00060cc0) popup_note2_image_window_g2_ParamLimits

0x593a,	// (0x00060cc0) popup_note2_image_window_g2

0x0001,

0xfc8d,	// (0x0006b013) popup_note2_image_window_g_ParamLimits

0xfc8d,	// (0x0006b013) popup_note2_image_window_g

0x594c,	// (0x00060cd2) popup_note2_image_window_t1_ParamLimits

0x594c,	// (0x00060cd2) popup_note2_image_window_t1

0x5964,	// (0x00060cea) popup_note2_image_window_t2_ParamLimits

0x5964,	// (0x00060cea) popup_note2_image_window_t2

0x597c,	// (0x00060d02) popup_note2_image_window_t3_ParamLimits

0x597c,	// (0x00060d02) popup_note2_image_window_t3

0x0002,

0xfc92,	// (0x0006b018) popup_note2_image_window_t_ParamLimits

0xfc92,	// (0x0006b018) popup_note2_image_window_t

0x29f9,	// (0x0005dd7f) popup_note2_wait_window_g1_ParamLimits

0x29f9,	// (0x0005dd7f) popup_note2_wait_window_g1

0x5998,	// (0x00060d1e) popup_note2_wait_window_g2_ParamLimits

0x5998,	// (0x00060d1e) popup_note2_wait_window_g2

0x2a11,	// (0x0005dd97) popup_note2_wait_window_g3_ParamLimits

0x2a11,	// (0x0005dd97) popup_note2_wait_window_g3

0x0002,

0xfc99,	// (0x0006b01f) popup_note2_wait_window_g_ParamLimits

0xfc99,	// (0x0006b01f) popup_note2_wait_window_g

0x59a4,	// (0x00060d2a) popup_note2_wait_window_t1_ParamLimits

0x59a4,	// (0x00060d2a) popup_note2_wait_window_t1

0x59c2,	// (0x00060d48) popup_note2_wait_window_t2_ParamLimits

0x59c2,	// (0x00060d48) popup_note2_wait_window_t2

0x59e0,	// (0x00060d66) popup_note2_wait_window_t3_ParamLimits

0x59e0,	// (0x00060d66) popup_note2_wait_window_t3

0x59f2,	// (0x00060d78) popup_note2_wait_window_t4_ParamLimits

0x59f2,	// (0x00060d78) popup_note2_wait_window_t4

0x0003,

0xfca0,	// (0x0006b026) popup_note2_wait_window_t_ParamLimits

0xfca0,	// (0x0006b026) popup_note2_wait_window_t

0x5a04,	// (0x00060d8a) wait_bar2_pane_ParamLimits

0x5a04,	// (0x00060d8a) wait_bar2_pane

0x5a1c,	// (0x00060da2) popup_snote2_single_text_window_g1_ParamLimits

0x5a1c,	// (0x00060da2) popup_snote2_single_text_window_g1

0x5a44,	// (0x00060dca) popup_snote2_single_text_window_t1_ParamLimits

0x5a44,	// (0x00060dca) popup_snote2_single_text_window_t1

0x5a90,	// (0x00060e16) popup_snote2_single_text_window_t2_ParamLimits

0x5a90,	// (0x00060e16) popup_snote2_single_text_window_t2

0x5adc,	// (0x00060e62) popup_snote2_single_text_window_t3_ParamLimits

0x5adc,	// (0x00060e62) popup_snote2_single_text_window_t3

0x5b1d,	// (0x00060ea3) popup_snote2_single_text_window_t4_ParamLimits

0x5b1d,	// (0x00060ea3) popup_snote2_single_text_window_t4

0x5b53,	// (0x00060ed9) popup_snote2_single_text_window_t5_ParamLimits

0x5b53,	// (0x00060ed9) popup_snote2_single_text_window_t5

0x0004,

0xfca9,	// (0x0006b02f) popup_snote2_single_text_window_t_ParamLimits

0xfca9,	// (0x0006b02f) popup_snote2_single_text_window_t

0x5b7e,	// (0x00060f04) popup_snote2_single_graphic_window_g1_ParamLimits

0x5b7e,	// (0x00060f04) popup_snote2_single_graphic_window_g1

0x5ba6,	// (0x00060f2c) popup_snote2_single_graphic_window_g2_ParamLimits

0x5ba6,	// (0x00060f2c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb4,	// (0x0006b03a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb4,	// (0x0006b03a) popup_snote2_single_graphic_window_g

0x5bce,	// (0x00060f54) popup_snote2_single_graphic_window_t1_ParamLimits

0x5bce,	// (0x00060f54) popup_snote2_single_graphic_window_t1

0x5c1a,	// (0x00060fa0) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c1a,	// (0x00060fa0) popup_snote2_single_graphic_window_t2

0x5adc,	// (0x00060e62) popup_snote2_single_graphic_window_t3_ParamLimits

0x5adc,	// (0x00060e62) popup_snote2_single_graphic_window_t3

0x5b1d,	// (0x00060ea3) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b1d,	// (0x00060ea3) popup_snote2_single_graphic_window_t4

0x5b53,	// (0x00060ed9) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b53,	// (0x00060ed9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb9,	// (0x0006b03f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb9,	// (0x0006b03f) popup_snote2_single_graphic_window_t

0x465c,	// (0x0005f9e2) clock_nsta_pane_cp2_t1

0x465c,	// (0x0005f9e2) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x0006ae53) clock_nsta_pane_cp2_t

0xc545,	// (0x000678cb) form_field_data_wide_pane_g1_ParamLimits

0x89aa,	// (0x00063d30) form_field_data_wide_pane_g2_ParamLimits

0x89aa,	// (0x00063d30) form_field_data_wide_pane_g2

0x89b6,	// (0x00063d3c) form_field_data_wide_pane_g3_ParamLimits

0x89b6,	// (0x00063d3c) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006aa06) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006aa06) form_field_data_wide_pane_g

0xcba3,	// (0x00067f29) grid_touch_3_pane_ParamLimits

0xcba3,	// (0x00067f29) grid_touch_3_pane

0xd0ee,	// (0x00068474) cell_touch_3_pane_ParamLimits

0xd0ee,	// (0x00068474) cell_touch_3_pane

0x4b6c,	// (0x0005fef2) cell_touch_3_pane_g1

0x4b6c,	// (0x0005fef2) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0006aed8) cell_touch_3_pane_g

0x5fbc,	// (0x00061342) cont_query_data_pane

0x5fc4,	// (0x0006134a) cont_query_data_pane_cp1

0x5c99,	// (0x0006101f) button_value_adjust_pane_cp7

0x5ca1,	// (0x00061027) query_popup_pane_cp3

0x8ede,	// (0x00064264) bg_popup_sub_pane_cp22_ParamLimits

0xf2f3,	// (0x0006a679) navi_navi_volume_pane_cp2

0xf30e,	// (0x0006a694) popup_side_volume_key_window_g2

0xf31d,	// (0x0006a6a3) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0006aa9c) popup_side_volume_key_window_g

0xf33a,	// (0x0006a6c0) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006aaa3) popup_side_volume_key_window_t

0x90e9,	// (0x0006446f) popup_side_volume_key_window_ParamLimits

0xa35f,	// (0x000656e5) list_double_graphic_pane_g4_ParamLimits

0xa35f,	// (0x000656e5) list_double_graphic_pane_g4

0xca40,	// (0x00067dc6) list_single_2heading_msg_pane_ParamLimits

0xca40,	// (0x00067dc6) list_single_2heading_msg_pane

0xd138,	// (0x000684be) list_single_2heading_msg_pane_g1_ParamLimits

0xd138,	// (0x000684be) list_single_2heading_msg_pane_g1

0xd144,	// (0x000684ca) list_single_2heading_msg_pane_g2_ParamLimits

0xd144,	// (0x000684ca) list_single_2heading_msg_pane_g2

0xd157,	// (0x000684dd) list_single_2heading_msg_pane_g3_ParamLimits

0xd157,	// (0x000684dd) list_single_2heading_msg_pane_g3

0xd163,	// (0x000684e9) list_single_2heading_msg_pane_g4_ParamLimits

0xd163,	// (0x000684e9) list_single_2heading_msg_pane_g4

0x0003,

0xfcc4,	// (0x0006b04a) list_single_2heading_msg_pane_g_ParamLimits

0xfcc4,	// (0x0006b04a) list_single_2heading_msg_pane_g

0xbd75,	// (0x000670fb) list_single_2heading_msg_pane_t1_ParamLimits

0xbd75,	// (0x000670fb) list_single_2heading_msg_pane_t1

0xbd9d,	// (0x00067123) list_single_2heading_msg_pane_t2_ParamLimits

0xbd9d,	// (0x00067123) list_single_2heading_msg_pane_t2

0xbe08,	// (0x0006718e) list_single_2heading_msg_pane_t3_ParamLimits

0xbe08,	// (0x0006718e) list_single_2heading_msg_pane_t3

0xf093,	// (0x0006a419) list_single_2heading_msg_pane_t4_ParamLimits

0xf093,	// (0x0006a419) list_single_2heading_msg_pane_t4

0x0003,

0xfccd,	// (0x0006b053) list_single_2heading_msg_pane_t_ParamLimits

0xfccd,	// (0x0006b053) list_single_2heading_msg_pane_t

0x5d81,	// (0x00061107) title_pane_g4_ParamLimits

0x5d81,	// (0x00061107) title_pane_g4

0xf108,	// (0x0006a48e) title_pane_stacon_g3_ParamLimits

0xf108,	// (0x0006a48e) title_pane_stacon_g3

0x57c2,	// (0x00060b48) list_single_2graphic_im_pane_g4_ParamLimits

0x57c2,	// (0x00060b48) list_single_2graphic_im_pane_g4

0x345b,	// (0x0005e7e1) popup_side_volume_key_window_cp

0x3e56,	// (0x0005f1dc) main_idle_act2_pane_t1

0x02d6,	// (0x0005b65c) toolbar_button_pane_g10

0xa1c3,	// (0x00065549) popup_toolbar_window_cp1

0x464d,	// (0x0005f9d3) clock_nsta_pane_cp_t1

0x464d,	// (0x0005f9d3) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x0006ae4e) clock_nsta_pane_cp_t

0xf2f3,	// (0x0006a679) navi_navi_volume_pane_cp2_ParamLimits

0xf302,	// (0x0006a688) popup_side_volume_key_window_g1_ParamLimits

0xf30e,	// (0x0006a694) popup_side_volume_key_window_g2_ParamLimits

0xf31d,	// (0x0006a6a3) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0006aa9c) popup_side_volume_key_window_g_ParamLimits

0x084a,	// (0x0005bbd0) fep_hwr_aid_pane

0x08f3,	// (0x0005bc79) bg_fep_hwr_top_pane_g4_ParamLimits

0x4bcd,	// (0x0005ff53) fep_hwr_top_pane_g1_ParamLimits

0x4bdf,	// (0x0005ff65) fep_hwr_top_pane_g2_ParamLimits

0x0913,	// (0x0005bc99) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x0006aea3) fep_hwr_top_pane_g_ParamLimits

0x0928,	// (0x0005bcae) fep_hwr_top_text_pane_ParamLimits

0x3210,	// (0x0005e596) aid_touch_tab_arrow_arrow_2

0x3219,	// (0x0005e59f) aid_touch_tab_arrow_left_2

0x085e,	// (0x0005bbe4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0895,	// (0x0005bc1b) fep_hwr_prediction_pane

0x4d35,	// (0x000600bb) fep_vkb_prediction_pane

0xcead,	// (0x00068233) fep_vkb_side_pane_g3_ParamLimits

0xcead,	// (0x00068233) fep_vkb_side_pane_g3

0x0ab7,	// (0x0005be3d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0b28,	// (0x0005beae) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0b35,	// (0x0005bebb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcc,	// (0x0006af52) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0d16,	// (0x0005c09c) fep_hwr_prediction_pane_g1

0x0d20,	// (0x0005c0a6) fep_hwr_prediction_pane_g2

0x0d28,	// (0x0005c0ae) fep_hwr_prediction_pane_g3

0x0d30,	// (0x0005c0b6) fep_hwr_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0006b05c) fep_hwr_prediction_pane_g

0x5cc8,	// (0x0006104e) fep_vkb_prediction_pane_g1

0x5cd2,	// (0x00061058) fep_vkb_prediction_pane_g2

0x5cda,	// (0x00061060) fep_vkb_prediction_pane_g3

0x5ce2,	// (0x00061068) fep_vkb_prediction_pane_g4

0x0003,

0xfcdf,	// (0x0006b065) fep_vkb_prediction_pane_g

0x063e,	// (0x0005b9c4) slider_set_pane_g3

0x0652,	// (0x0005b9d8) slider_set_pane_g4

0x066a,	// (0x0005b9f0) slider_set_pane_g5

0x063e,	// (0x0005b9c4) slider_set_pane_g6

0x0680,	// (0x0005ba06) slider_set_pane_g7

0x38e9,	// (0x0005ec6f) slider_form_pane_g3

0x38f2,	// (0x0005ec78) slider_form_pane_g4

0x38fa,	// (0x0005ec80) slider_form_pane_g5

0x38e9,	// (0x0005ec6f) slider_form_pane_g6

0xc9ff,	// (0x00067d85) slider_form_pane_g7

0x410d,	// (0x0005f493) slider_set_pane_vc_g3

0x4116,	// (0x0005f49c) slider_set_pane_vc_g4

0x411f,	// (0x0005f4a5) slider_set_pane_vc_g5

0x410d,	// (0x0005f493) slider_set_pane_vc_g6

0x4128,	// (0x0005f4ae) slider_set_pane_vc_g7

0x4300,	// (0x0005f686) slider_form_pane_vc_g1

0x4309,	// (0x0005f68f) slider_form_pane_vc_g2

0x4312,	// (0x0005f698) slider_form_pane_vc_g3

0x4300,	// (0x0005f686) slider_form_pane_vc_g4

0x431b,	// (0x0005f6a1) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x0006ae20) slider_form_pane_vc_g

0x5d57,	// (0x000610dd) main_idle_act3_pane

0x5cea,	// (0x00061070) ai3_links_pane

0xd17b,	// (0x00068501) popup_ai3_data_window_ParamLimits

0xd17b,	// (0x00068501) popup_ai3_data_window

0x5d57,	// (0x000610dd) grid_ai3_links_pane

0xd199,	// (0x0006851f) cell_ai3_links_pane_ParamLimits

0xd199,	// (0x0006851f) cell_ai3_links_pane

0x5d2b,	// (0x000610b1) bg_popup_sub_pane_cp11

0x5d38,	// (0x000610be) cell_ai3_links_pane_g1

0x5d57,	// (0x000610dd) bg_popup_sub_pane_cp12

0x63be,	// (0x00061744) heading_ai3_data_pane

0x63c6,	// (0x0006174c) list_ai3_gene_pane

0x63d2,	// (0x00061758) popup_ai3_data_window_g1

0x63da,	// (0x00061760) heading_ai3_data_pane_g1

0x63e2,	// (0x00061768) heading_ai3_data_pane_t1

0x63f0,	// (0x00061776) list_double_ai3_gene_pane_ParamLimits

0x63f0,	// (0x00061776) list_double_ai3_gene_pane

0x63fd,	// (0x00061783) list_single_ai3_gene_pane_ParamLimits

0x63fd,	// (0x00061783) list_single_ai3_gene_pane

0x4b31,	// (0x0005feb7) list_highlight_pane_cp7_ParamLimits

0x4b31,	// (0x0005feb7) list_highlight_pane_cp7

0x640a,	// (0x00061790) list_single_a13_gene_pane_t1_ParamLimits

0x640a,	// (0x00061790) list_single_a13_gene_pane_t1

0x6421,	// (0x000617a7) list_single_ai3_gene_pane_g1

0x642a,	// (0x000617b0) list_single_ai3_gene_pane_g2

0x0001,

0xfce8,	// (0x0006b06e) list_single_ai3_gene_pane_g

0x6432,	// (0x000617b8) list_double_ai3_gene_pane_g1_ParamLimits

0x6432,	// (0x000617b8) list_double_ai3_gene_pane_g1

0x643e,	// (0x000617c4) list_double_ai3_gene_pane_t1_ParamLimits

0x643e,	// (0x000617c4) list_double_ai3_gene_pane_t1

0x645a,	// (0x000617e0) list_double_ai3_gene_pane_t2_ParamLimits

0x645a,	// (0x000617e0) list_double_ai3_gene_pane_t2

0x646f,	// (0x000617f5) list_double_ai3_gene_pane_t3_ParamLimits

0x646f,	// (0x000617f5) list_double_ai3_gene_pane_t3

0x0002,

0xfced,	// (0x0006b073) list_double_ai3_gene_pane_t_ParamLimits

0xfced,	// (0x0006b073) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf089,	// (0x0006a40f) aid_size_min_col_2

0xd122,	// (0x000684a8) aid_size_min_msg_ParamLimits

0xd122,	// (0x000684a8) aid_size_min_msg

0xcec1,	// (0x00068247) fep_vkb_top_text_pane_g2_ParamLimits

0xcec1,	// (0x00068247) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x0006aed3) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x0006aed3) fep_vkb_top_text_pane_g

0x5d57,	// (0x000610dd) main_hc_apps_shell_pane

0x648c,	// (0x00061812) grid_hc_apps_pane_ParamLimits

0x648c,	// (0x00061812) grid_hc_apps_pane

0x649b,	// (0x00061821) list_hc_apps_pane

0x64a3,	// (0x00061829) scroll_pane_cp37_ParamLimits

0x64a3,	// (0x00061829) scroll_pane_cp37

0xd1b3,	// (0x00068539) cell_hc_apps_pane_ParamLimits

0xd1b3,	// (0x00068539) cell_hc_apps_pane

0xd27d,	// (0x00068603) cell_hc_apps_pane_g1_ParamLimits

0xd27d,	// (0x00068603) cell_hc_apps_pane_g1

0x6598,	// (0x0006191e) cell_hc_apps_pane_g2_ParamLimits

0x6598,	// (0x0006191e) cell_hc_apps_pane_g2

0x65b4,	// (0x0006193a) cell_hc_apps_pane_g3_ParamLimits

0x65b4,	// (0x0006193a) cell_hc_apps_pane_g3

0x0002,

0xfcf4,	// (0x0006b07a) cell_hc_apps_pane_g_ParamLimits

0xfcf4,	// (0x0006b07a) cell_hc_apps_pane_g

0xd2aa,	// (0x00068630) cell_hc_apps_pane_t1_ParamLimits

0xd2aa,	// (0x00068630) cell_hc_apps_pane_t1

0x5f06,	// (0x0006128c) grid_highlight_pane_cp10_ParamLimits

0x5f06,	// (0x0006128c) grid_highlight_pane_cp10

0xd2ea,	// (0x00068670) list_single_hc_apps_pane_ParamLimits

0xd2ea,	// (0x00068670) list_single_hc_apps_pane

0xd324,	// (0x000686aa) list_single_hc_apps_pane_g1

0xd33d,	// (0x000686c3) list_single_hc_apps_pane_g2

0x0001,

0xfcfb,	// (0x0006b081) list_single_hc_apps_pane_g

0xd356,	// (0x000686dc) list_single_hc_apps_pane_g2_copy1

0xbe76,	// (0x000671fc) list_single_hc_apps_pane_t1

0x5dc5,	// (0x0006114b) bg_set_opt_pane_cp_ParamLimits

0xe82e,	// (0x00069bb4) setting_slider_pane_t1_ParamLimits

0xe847,	// (0x00069bcd) setting_slider_pane_t2_ParamLimits

0xe861,	// (0x00069be7) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006a8e4) setting_slider_pane_t_ParamLimits

0xe879,	// (0x00069bff) slider_set_pane_ParamLimits

0xf53f,	// (0x0006a8c5) control_pane_g5_ParamLimits

0xf53f,	// (0x0006a8c5) control_pane_g5

0x3716,	// (0x0005ea9c) slider_set_pane_g1_ParamLimits

0x0632,	// (0x0005b9b8) slider_set_pane_g2_ParamLimits

0x063e,	// (0x0005b9c4) slider_set_pane_g3_ParamLimits

0x0652,	// (0x0005b9d8) slider_set_pane_g4_ParamLimits

0x066a,	// (0x0005b9f0) slider_set_pane_g5_ParamLimits

0x063e,	// (0x0005b9c4) slider_set_pane_g6_ParamLimits

0x0680,	// (0x0005ba06) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006acea) slider_set_pane_g_ParamLimits

0x9191,	// (0x00064517) navi_icon_text_pane_ParamLimits

0xb66e,	// (0x000669f4) aid_fill_nsta_2_ParamLimits

0xb6a7,	// (0x00066a2d) aid_touch_tab_arrow_left_ParamLimits

0xb6bd,	// (0x00066a43) aid_touch_tab_arrow_right_ParamLimits

0xb758,	// (0x00066ade) clock_nsta_pane_ParamLimits

0xc73d,	// (0x00067ac3) navi_icon_pane_g1_ParamLimits

0xc749,	// (0x00067acf) navi_text_pane_t1_ParamLimits

0xcc87,	// (0x0006800d) navi_icon_text_pane_g1_ParamLimits

0xcc93,	// (0x00068019) navi_icon_text_pane_t1_ParamLimits

0xd324,	// (0x000686aa) list_single_hc_apps_pane_g1_ParamLimits

0xd33d,	// (0x000686c3) list_single_hc_apps_pane_g2_ParamLimits

0xfcfb,	// (0x0006b081) list_single_hc_apps_pane_g_ParamLimits

0xd356,	// (0x000686dc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe76,	// (0x000671fc) list_single_hc_apps_pane_t1_ParamLimits

0x9d49,	// (0x000650cf) popup_toolbar2_fixed_window_ParamLimits

0x9d49,	// (0x000650cf) popup_toolbar2_fixed_window

0xb5d3,	// (0x00066959) popup_toolbar2_float_window

0x5d57,	// (0x000610dd) bg_popup_sub_pane_cp27

0x666e,	// (0x000619f4) grid_toolbar2_float_pane

0x5d57,	// (0x000610dd) bg_popup_sub_pane_cp26

0x666e,	// (0x000619f4) grid_toolbar2_fixed_pane

0xd372,	// (0x000686f8) cell_toolbar2_fixed_pane_ParamLimits

0xd372,	// (0x000686f8) cell_toolbar2_fixed_pane

0xd38f,	// (0x00068715) cell_toolbar2_fixed_pane_g1

0x668f,	// (0x00061a15) toolbar2_fixed_button_pane

0x239b,	// (0x0005d721) toolbar2_fixed_button_pane_g1

0x23ab,	// (0x0005d731) toolbar2_fixed_button_pane_g2

0x23a3,	// (0x0005d729) toolbar2_fixed_button_pane_g3

0x23bb,	// (0x0005d741) toolbar2_fixed_button_pane_g4

0x23b3,	// (0x0005d739) toolbar2_fixed_button_pane_g5

0x23c3,	// (0x0005d749) toolbar2_fixed_button_pane_g6

0x23cb,	// (0x0005d751) toolbar2_fixed_button_pane_g7

0x23db,	// (0x0005d761) toolbar2_fixed_button_pane_g8

0x23d3,	// (0x0005d759) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006abec) toolbar2_fixed_button_pane_g

0x6697,	// (0x00061a1d) cell_toolbar2_float_pane_ParamLimits

0x6697,	// (0x00061a1d) cell_toolbar2_float_pane

0x66a8,	// (0x00061a2e) cell_toolbar2_float_pane_g1

0x668f,	// (0x00061a15) toolbar2_fixed_button_pane_cp

0xcda9,	// (0x0006812f) fep_vkb_accented_list_pane_ParamLimits

0xcda9,	// (0x0006812f) fep_vkb_accented_list_pane

0x0a97,	// (0x0005be1d) bg_popup_fep_shadow_pane_g9

0xe9a8,	// (0x00069d2e) bg_popup_fep_shadow_pane_cp3

0x8aaf,	// (0x00063e35) list_accented_list_pane

0x66b1,	// (0x00061a37) list_single_accented_list_pane_ParamLimits

0x66b1,	// (0x00061a37) list_single_accented_list_pane

0xe9a8,	// (0x00069d2e) list_highlight_pane_cp10

0x66c2,	// (0x00061a48) list_single_accented_list_pane_t1

0xb4ef,	// (0x00066875) popup_slider_window_ParamLimits

0xb4ef,	// (0x00066875) popup_slider_window

0x5ca9,	// (0x0006102f) aid_indentation_list_msg

0xd49a,	// (0x00068820) bg_popup_window_pane_cp19

0x67fc,	// (0x00061b82) popup_slider_window_g1

0x6818,	// (0x00061b9e) popup_slider_window_g2

0x6834,	// (0x00061bba) popup_slider_window_g3

0x0005,

0xfd00,	// (0x0006b086) popup_slider_window_g

0x6890,	// (0x00061c16) popup_slider_window_t1

0x6904,	// (0x00061c8a) small_volume_slider_vertical_pane

0x4b6c,	// (0x0005fef2) small_volume_slider_vertical_pane_g1

0x4b6c,	// (0x0005fef2) small_volume_slider_vertical_pane_g2

0x6920,	// (0x00061ca6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd12,	// (0x0006b098) small_volume_slider_vertical_pane_g

0x9cb3,	// (0x00065039) area_side_right_pane_ParamLimits

0x9cb3,	// (0x00065039) area_side_right_pane

0xbea4,	// (0x0006722a) aid_size_side_button_ParamLimits

0xbea4,	// (0x0006722a) aid_size_side_button

0xbebd,	// (0x00067243) grid_sctrl_middle_pane_ParamLimits

0xbebd,	// (0x00067243) grid_sctrl_middle_pane

0x0d9a,	// (0x0005c120) sctrl_sk_bottom_pane

0x0dab,	// (0x0005c131) sctrl_sk_top_pane

0x0dbd,	// (0x0005c143) aid_touch_sctrl_top

0x0dca,	// (0x0005c150) bg_sctrl_sk_pane_ParamLimits

0x0dca,	// (0x0005c150) bg_sctrl_sk_pane

0x0dd8,	// (0x0005c15e) sctrl_sk_top_pane_g1

0x0de5,	// (0x0005c16b) sctrl_sk_top_pane_t1

0x0dbd,	// (0x0005c143) aid_touch_sctrl_bottom

0x0dca,	// (0x0005c150) bg_sctrl_sk_pane_cp_ParamLimits

0x0dca,	// (0x0005c150) bg_sctrl_sk_pane_cp

0x0e00,	// (0x0005c186) sctrl_sk_bottom_pane_g1

0x0de5,	// (0x0005c16b) sctrl_sk_bottom_pane_t1

0xbed7,	// (0x0006725d) cell_sctrl_middle_pane_ParamLimits

0xbed7,	// (0x0006725d) cell_sctrl_middle_pane

0xbeea,	// (0x00067270) aid_touch_sctrl_middle_ParamLimits

0xbeea,	// (0x00067270) aid_touch_sctrl_middle

0xbef7,	// (0x0006727d) bg_sctrl_middle_pane_ParamLimits

0xbef7,	// (0x0006727d) bg_sctrl_middle_pane

0x1483,	// (0x0005c809) cell_sctrl_middle_pane_g1_ParamLimits

0x1483,	// (0x0005c809) cell_sctrl_middle_pane_g1

0xbf05,	// (0x0006728b) cell_sctrl_middle_pane_g2_ParamLimits

0xbf05,	// (0x0006728b) cell_sctrl_middle_pane_g2

0x0001,

0xfd1e,	// (0x0006b0a4) cell_sctrl_middle_pane_g_ParamLimits

0xfd1e,	// (0x0006b0a4) cell_sctrl_middle_pane_g

0x239b,	// (0x0005d721) bg_sctrl_middle_pane_g1

0x23a3,	// (0x0005d729) bg_sctrl_middle_pane_g2

0x23ab,	// (0x0005d731) bg_sctrl_middle_pane_g3

0x23b3,	// (0x0005d739) bg_sctrl_middle_pane_g4

0x23bb,	// (0x0005d741) bg_sctrl_middle_pane_g5

0x23c3,	// (0x0005d749) bg_sctrl_middle_pane_g6

0x23cb,	// (0x0005d751) bg_sctrl_middle_pane_g7

0x23d3,	// (0x0005d759) bg_sctrl_middle_pane_g8

0x0007,

0xfd23,	// (0x0006b0a9) bg_sctrl_middle_pane_g

0x23db,	// (0x0005d761) bg_sctrl_middle_pane_g8_copy1

0x239b,	// (0x0005d721) bg_sctrl_sk_pane_g1

0x23ab,	// (0x0005d731) bg_sctrl_sk_pane_g2

0x23a3,	// (0x0005d729) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006abec) bg_sctrl_sk_pane_g

0x6321,	// (0x000616a7) aid_size_touch_scroll_bar

0x23bb,	// (0x0005d741) bg_sctrl_sk_pane_g4

0x23b3,	// (0x0005d739) bg_sctrl_sk_pane_g5

0x23c3,	// (0x0005d749) bg_sctrl_sk_pane_g6

0x23cb,	// (0x0005d751) bg_sctrl_sk_pane_g7

0x23db,	// (0x0005d761) bg_sctrl_sk_pane_g8

0x23d3,	// (0x0005d759) bg_sctrl_sk_pane_g9

0x021a,	// (0x0005b5a0) popup_fep_china_hwr2_fs_candidate_window

0xafa7,	// (0x0006632d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xafa7,	// (0x0006632d) popup_fep_china_hwr2_fs_control_window

0x0ab7,	// (0x0005be3d) sctrl_sk_top_pane_g2

0x0001,

0xfd19,	// (0x0006b09f) sctrl_sk_top_pane_g

0xd552,	// (0x000688d8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd552,	// (0x000688d8) aid_fep_china_hwr2_fs_cell

0xd568,	// (0x000688ee) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd568,	// (0x000688ee) bg_popup_fep_shadow_pane_cp4

0xd57f,	// (0x00068905) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd57f,	// (0x00068905) bg_popup_fep_shadow_pane_cp5

0xd591,	// (0x00068917) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd591,	// (0x00068917) popup_fep_china_hwr2_fs_control_bar_grid

0xd5a5,	// (0x0006892b) popup_fep_china_hwr2_fs_control_funtion_grid

0x697f,	// (0x00061d05) aid_fep_china_hwr2_fs_candi_cell

0x5d57,	// (0x000610dd) bg_popup_fep_shadow_pane_cp6

0x6989,	// (0x00061d0f) popup_fep_china_hwr2_fs_candidate_grid

0xd5ad,	// (0x00068933) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd5ad,	// (0x00068933) cell_fep_china_hwr2_fs_funtion_grid

0x4b6c,	// (0x0005fef2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x69ab,	// (0x00061d31) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x69ab,	// (0x00061d31) cell_fep_china_hwr2_fs_funtion_grid_g1

0x69b9,	// (0x00061d3f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x69b9,	// (0x00061d3f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd34,	// (0x0006b0ba) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd34,	// (0x0006b0ba) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5c5,	// (0x0006894b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5c5,	// (0x0006894b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5da,	// (0x00068960) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5da,	// (0x00068960) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd39,	// (0x0006b0bf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd39,	// (0x0006b0bf) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a00,	// (0x00061d86) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a08,	// (0x00061d8e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a10,	// (0x00061d96) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3e,	// (0x0006b0c4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a18,	// (0x00061d9e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a18,	// (0x00061d9e) cell_fep_china_hwr2_fs_candidate_grid

0x6a37,	// (0x00061dbd) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a3f,	// (0x00061dc5) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4b6c,	// (0x0005fef2) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4b6c,	// (0x0005fef2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0006aed8) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a47,	// (0x00061dcd) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1f77,	// (0x0005d2fd) clock_nsta_pane_cp_24_ParamLimits

0x1f77,	// (0x0005d2fd) clock_nsta_pane_cp_24

0x1ff7,	// (0x0005d37d) indicator_nsta_pane_cp_24_ParamLimits

0x1ff7,	// (0x0005d37d) indicator_nsta_pane_cp_24

0x306e,	// (0x0005e3f4) heading_pane_g1

0x0001,

0xf8cb,	// (0x0006ac51) heading_pane_g

0x3c9d,	// (0x0005f023) grid_sct_catagory_button_pane

0x3ccf,	// (0x0005f055) scroll_pane_cp5_ParamLimits

0x47b8,	// (0x0005fb3e) button_value_adjust_pane_cp5_ParamLimits

0x47b8,	// (0x0005fb3e) button_value_adjust_pane_cp5

0x489d,	// (0x0005fc23) form2_midp_time_pane_ParamLimits

0x6a55,	// (0x00061ddb) cell_sct_catagory_button_pane_ParamLimits

0x6a55,	// (0x00061ddb) cell_sct_catagory_button_pane

0x4b31,	// (0x0005feb7) bg_button_pane_cp01_ParamLimits

0x4b31,	// (0x0005feb7) bg_button_pane_cp01

0x4b6c,	// (0x0005fef2) cell_sct_catagory_button_pane_g1

0xb570,	// (0x000668f6) popup_tb_extension_window

0xd5f6,	// (0x0006897c) aid_size_cell_ext_ParamLimits

0xd5f6,	// (0x0006897c) aid_size_cell_ext

0x6163,	// (0x000614e9) bg_tb_trans_pane_cp1_ParamLimits

0x6163,	// (0x000614e9) bg_tb_trans_pane_cp1

0xd61c,	// (0x000689a2) grid_tb_ext_pane_ParamLimits

0xd61c,	// (0x000689a2) grid_tb_ext_pane

0xd65c,	// (0x000689e2) cell_tb_ext_pane_ParamLimits

0xd65c,	// (0x000689e2) cell_tb_ext_pane

0xd684,	// (0x00068a0a) cell_tb_ext_pane_g1_ParamLimits

0xd684,	// (0x00068a0a) cell_tb_ext_pane_g1

0x6aeb,	// (0x00061e71) cell_tb_ext_pane_t1

0x5f06,	// (0x0006128c) list_highlight_pane_cp11_ParamLimits

0x5f06,	// (0x0006128c) list_highlight_pane_cp11

0x9d5e,	// (0x000650e4) popup_uni_indicator_window_ParamLimits

0x9d5e,	// (0x000650e4) popup_uni_indicator_window

0x899c,	// (0x00063d22) bg_popup_sub_pane_cp14

0x6b06,	// (0x00061e8c) list_uniindi_pane

0x6b12,	// (0x00061e98) uniindi_top_pane

0x5f06,	// (0x0006128c) bg_uniindi_top_pane

0x6b33,	// (0x00061eb9) uniindi_top_pane_g1

0x6b49,	// (0x00061ecf) uniindi_top_pane_g2

0x0003,

0xfd45,	// (0x0006b0cb) uniindi_top_pane_g

0x6b73,	// (0x00061ef9) uniindi_top_pane_t1

0x6b9f,	// (0x00061f25) list_single_uniindi_pane_ParamLimits

0x6b9f,	// (0x00061f25) list_single_uniindi_pane

0x4b6c,	// (0x0005fef2) bg_uniindi_top_pane_g1

0x6bb1,	// (0x00061f37) list_single_uniindi_pane_g1

0x6bc4,	// (0x00061f4a) list_single_uniindi_pane_t1

0xe70b,	// (0x00069a91) control_bg_pane

0x6be9,	// (0x00061f6f) bg_sctrl_sk_pane_cp1

0x6bf2,	// (0x00061f78) bg_sctrl_sk_pane_cp2

0x6bfb,	// (0x00061f81) control_bg_pane_g1

0x6c04,	// (0x00061f8a) control_bg_pane_g2

0x0001,

0xfd4e,	// (0x0006b0d4) control_bg_pane_g

0x45df,	// (0x0005f965) cell_indicator_nsta_pane_g1_ParamLimits

0xcbe0,	// (0x00067f66) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x0006ae3c) cell_indicator_nsta_pane_g_ParamLimits

0xef0c,	// (0x0006a292) form2_midp_time_pane_t1_ParamLimits

0xaf1d,	// (0x000662a3) main_idle_act4_pane_ParamLimits

0xaf1d,	// (0x000662a3) main_idle_act4_pane

0xb570,	// (0x000668f6) popup_tb_extension_window_ParamLimits

0xd644,	// (0x000689ca) tb_ext_find_pane_ParamLimits

0xd644,	// (0x000689ca) tb_ext_find_pane

0x6c0d,	// (0x00061f93) ai_gene_pane_1_cp1

0xea2e,	// (0x00069db4) ai_gene_pane_2_cp1

0x6c15,	// (0x00061f9b) list_single_idle_plugin_calendar_pane

0x6c1e,	// (0x00061fa4) list_single_idle_plugin_notification_pane

0x6c27,	// (0x00061fad) list_single_idle_plugin_player_pane

0xd6a1,	// (0x00068a27) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6a1,	// (0x00068a27) list_single_idle_plugin_shortcut_pane

0xd6c9,	// (0x00068a4f) main_idle_act4_pane_t1

0xd6e1,	// (0x00068a67) main_idle_act4_pane_t2

0x0001,

0xfd53,	// (0x0006b0d9) main_idle_act4_pane_t

0xd6f9,	// (0x00068a7f) middle_sk_idle_act4_pane_ParamLimits

0xd6f9,	// (0x00068a7f) middle_sk_idle_act4_pane

0xd715,	// (0x00068a9b) popup_clock_digital_analogue_window_cp2

0xd73c,	// (0x00068ac2) shortcut_wheel_idle_act4_pane_ParamLimits

0xd73c,	// (0x00068ac2) shortcut_wheel_idle_act4_pane

0x4b6c,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g1

0x4b6c,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g2

0x4b6c,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g3

0x4b6c,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g4

0x4b6c,	// (0x0005fef2) shortcut_wheel_idle_act4_pane_g5

0x6cba,	// (0x00062040) shortcut_wheel_idle_act4_pane_g6

0x6cc2,	// (0x00062048) shortcut_wheel_idle_act4_pane_g7

0x6cca,	// (0x00062050) shortcut_wheel_idle_act4_pane_g8

0x6cd2,	// (0x00062058) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd58,	// (0x0006b0de) shortcut_wheel_idle_act4_pane_g

0xd7b9,	// (0x00068b3f) middle_sk_idle_act4_pane_g1_ParamLimits

0xd7b9,	// (0x00068b3f) middle_sk_idle_act4_pane_g1

0xd7c7,	// (0x00068b4d) middle_sk_idle_act4_pane_g2_ParamLimits

0xd7c7,	// (0x00068b4d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7b,	// (0x0006b101) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7b,	// (0x0006b101) middle_sk_idle_act4_pane_g

0xd7df,	// (0x00068b65) middle_sk_idle_act4_pane_t1_ParamLimits

0xd7df,	// (0x00068b65) middle_sk_idle_act4_pane_t1

0xd80e,	// (0x00068b94) grid_ai_shortcut_pane_ParamLimits

0xd80e,	// (0x00068b94) grid_ai_shortcut_pane

0xd82b,	// (0x00068bb1) list_highlight_pane_cp16_ParamLimits

0xd82b,	// (0x00068bb1) list_highlight_pane_cp16

0xd838,	// (0x00068bbe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd838,	// (0x00068bbe) list_single_idle_plugin_shortcut_pane_g1

0xd844,	// (0x00068bca) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd844,	// (0x00068bca) list_single_idle_plugin_shortcut_pane_g2

0xd862,	// (0x00068be8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd862,	// (0x00068be8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd80,	// (0x0006b106) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd80,	// (0x0006b106) list_single_idle_plugin_shortcut_pane_g

0xd877,	// (0x00068bfd) cell_ai_shortcut_pane_ParamLimits

0xd877,	// (0x00068bfd) cell_ai_shortcut_pane

0xd88d,	// (0x00068c13) cell_ai_shortcut_pane_g1_ParamLimits

0xd88d,	// (0x00068c13) cell_ai_shortcut_pane_g1

0x6c0d,	// (0x00061f93) ai_gene_pane_1_cp2

0x6e03,	// (0x00062189) ai_gene_pane_2_cp2

0x6e0b,	// (0x00062191) list_highlight_pane_cp15

0x6e14,	// (0x0006219a) list_single_idle_plugin_calendar_pane_g1

0x6e0b,	// (0x00062191) list_highlight_pane_cp17

0x6e1c,	// (0x000621a2) list_single_idle_plugin_calendar_pane_g1_copy1

0x6e24,	// (0x000621aa) list_single_idle_plugin_player_pane_g1

0x3f04,	// (0x0005f28a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd87,	// (0x0006b10d) list_single_idle_plugin_player_pane_g

0x6e2c,	// (0x000621b2) list_single_idle_plugin_player_pane_t1

0x6e3a,	// (0x000621c0) list_single_idle_plugin_player_pane_t2

0x6e48,	// (0x000621ce) list_single_idle_plugin_player_pane_t3

0x6e56,	// (0x000621dc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8c,	// (0x0006b112) list_single_idle_plugin_player_pane_t

0x6e64,	// (0x000621ea) wait_bar_pane_cp15

0x6e6c,	// (0x000621f2) grid_ai_notification_pane

0x3f04,	// (0x0005f28a) list_single_idle_plugin_notification_pane_g1

0xd8af,	// (0x00068c35) cell_ai_notification_pane_ParamLimits

0xd8af,	// (0x00068c35) cell_ai_notification_pane

0x6e82,	// (0x00062208) cell_ai_notification_pane_g1

0x6e8a,	// (0x00062210) cell_ai_notification_pane_t1

0xd8bc,	// (0x00068c42) tb_ext_find_button_pane

0xd8c4,	// (0x00068c4a) tb_ext_find_pane_g1

0xd8cc,	// (0x00068c52) tb_ext_find_pane_t1

0x8e7e,	// (0x00064204) tb_ext_find_button_pane_g1

0x6eb6,	// (0x0006223c) tb_ext_find_button_pane_g2

0x0001,

0xfd95,	// (0x0006b11b) tb_ext_find_button_pane_g

0xd6c9,	// (0x00068a4f) main_idle_act4_pane_t1_ParamLimits

0xd6e1,	// (0x00068a67) main_idle_act4_pane_t2_ParamLimits

0xfd53,	// (0x0006b0d9) main_idle_act4_pane_t_ParamLimits

0xd715,	// (0x00068a9b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd72c,	// (0x00068ab2) sat_plugin_idle_act4_pane_ParamLimits

0xd72c,	// (0x00068ab2) sat_plugin_idle_act4_pane

0xd8da,	// (0x00068c60) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd8da,	// (0x00068c60) sat_plugin_idle_act4_pane_t1

0xd8f2,	// (0x00068c78) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8f2,	// (0x00068c78) sat_plugin_idle_act4_pane_t2

0xd90a,	// (0x00068c90) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd90a,	// (0x00068c90) sat_plugin_idle_act4_pane_t3

0xd922,	// (0x00068ca8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd922,	// (0x00068ca8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9a,	// (0x0006b120) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9a,	// (0x0006b120) sat_plugin_idle_act4_pane_t

0xe7d0,	// (0x00069b56) popup_battery_window_ParamLimits

0xe7d0,	// (0x00069b56) popup_battery_window

0x5f06,	// (0x0006128c) bg_popup_sub_pane_cp25_ParamLimits

0x5f06,	// (0x0006128c) bg_popup_sub_pane_cp25

0x6f0b,	// (0x00062291) popup_battery_window_g1_ParamLimits

0x6f0b,	// (0x00062291) popup_battery_window_g1

0x6f17,	// (0x0006229d) popup_battery_window_t1_ParamLimits

0x6f17,	// (0x0006229d) popup_battery_window_t1

0x6f29,	// (0x000622af) popup_battery_window_t2_ParamLimits

0x6f29,	// (0x000622af) popup_battery_window_t2

0x0001,

0xfda3,	// (0x0006b129) popup_battery_window_t_ParamLimits

0xfda3,	// (0x0006b129) popup_battery_window_t

0xac05,	// (0x00065f8b) midp_canvas_pane_ParamLimits

0xac60,	// (0x00065fe6) midp_keypad_pane_ParamLimits

0xac60,	// (0x00065fe6) midp_keypad_pane

0x016c,	// (0x0005b4f2) main_midp_pane_ParamLimits

0x466b,	// (0x0005f9f1) signal_pane_g2_cp_ParamLimits

0xd93a,	// (0x00068cc0) aid_size_cell_midp_keypad_ParamLimits

0xd93a,	// (0x00068cc0) aid_size_cell_midp_keypad

0xd958,	// (0x00068cde) midp_keyp_game_grid_pane_ParamLimits

0xd958,	// (0x00068cde) midp_keyp_game_grid_pane

0xd97f,	// (0x00068d05) midp_keyp_rocker_pane_ParamLimits

0xd97f,	// (0x00068d05) midp_keyp_rocker_pane

0xd9be,	// (0x00068d44) midp_keyp_sk_left_pane_ParamLimits

0xd9be,	// (0x00068d44) midp_keyp_sk_left_pane

0xda12,	// (0x00068d98) midp_keyp_sk_right_pane_ParamLimits

0xda12,	// (0x00068d98) midp_keyp_sk_right_pane

0x5d57,	// (0x000610dd) bg_button_pane_cp03

0xda66,	// (0x00068dec) midp_keyp_sk_left_pane_g1

0x5d57,	// (0x000610dd) bg_button_pane_cp04

0xda66,	// (0x00068dec) midp_keyp_sk_right_pane_g1

0x4b6c,	// (0x0005fef2) midp_keyp_rocker_pane_g1

0xda6f,	// (0x00068df5) keyp_game_cell_pane_ParamLimits

0xda6f,	// (0x00068df5) keyp_game_cell_pane

0x5d57,	// (0x000610dd) bg_button_pane_cp02

0xda95,	// (0x00068e1b) keyp_game_cell_pane_g1

0x9cf5,	// (0x0006507b) popup_fep_vkb2_window_ParamLimits

0x9cf5,	// (0x0006507b) popup_fep_vkb2_window

0xbf11,	// (0x00067297) aid_size_cell_vkb2_ParamLimits

0xbf11,	// (0x00067297) aid_size_cell_vkb2

0xbf47,	// (0x000672cd) popup_fep_vkb2_window_g1_ParamLimits

0xbf47,	// (0x000672cd) popup_fep_vkb2_window_g1

0xbf97,	// (0x0006731d) vkb2_area_bottom_pane_ParamLimits

0xbf97,	// (0x0006731d) vkb2_area_bottom_pane

0xbff3,	// (0x00067379) vkb2_area_keypad_pane_ParamLimits

0xbff3,	// (0x00067379) vkb2_area_keypad_pane

0xc041,	// (0x000673c7) vkb2_area_top_pane_ParamLimits

0xc041,	// (0x000673c7) vkb2_area_top_pane

0xc0c7,	// (0x0006744d) vkb2_top_entry_pane_ParamLimits

0xc0c7,	// (0x0006744d) vkb2_top_entry_pane

0xc0f4,	// (0x0006747a) vkb2_top_grid_left_pane_ParamLimits

0xc0f4,	// (0x0006747a) vkb2_top_grid_left_pane

0xc114,	// (0x0006749a) vkb2_top_grid_right_pane_ParamLimits

0xc114,	// (0x0006749a) vkb2_top_grid_right_pane

0x107a,	// (0x0005c400) vkb2_cell_keypad_pane_ParamLimits

0x107a,	// (0x0005c400) vkb2_cell_keypad_pane

0xc15a,	// (0x000674e0) vkb2_area_bottom_grid_pane_ParamLimits

0xc15a,	// (0x000674e0) vkb2_area_bottom_grid_pane

0xc184,	// (0x0006750a) vkb2_area_bottom_pane_g1_ParamLimits

0xc184,	// (0x0006750a) vkb2_area_bottom_pane_g1

0xc1aa,	// (0x00067530) vkb2_area_bottom_pane_g2_ParamLimits

0xc1aa,	// (0x00067530) vkb2_area_bottom_pane_g2

0xc1db,	// (0x00067561) vkb2_area_bottom_pane_g3_ParamLimits

0xc1db,	// (0x00067561) vkb2_area_bottom_pane_g3

0x0002,

0xfda8,	// (0x0006b12e) vkb2_area_bottom_pane_g_ParamLimits

0xfda8,	// (0x0006b12e) vkb2_area_bottom_pane_g

0x1224,	// (0x0005c5aa) vkb2_top_cell_left_pane_ParamLimits

0x1224,	// (0x0005c5aa) vkb2_top_cell_left_pane

0xda9e,	// (0x00068e24) vkb2_top_entry_pane_g1_ParamLimits

0xda9e,	// (0x00068e24) vkb2_top_entry_pane_g1

0xdaac,	// (0x00068e32) vkb2_top_entry_pane_t1_ParamLimits

0xdaac,	// (0x00068e32) vkb2_top_entry_pane_t1

0x70cc,	// (0x00062452) vkb2_top_entry_pane_t2_ParamLimits

0x70cc,	// (0x00062452) vkb2_top_entry_pane_t2

0x70fe,	// (0x00062484) vkb2_top_entry_pane_t3_ParamLimits

0x70fe,	// (0x00062484) vkb2_top_entry_pane_t3

0x0002,

0xfdaf,	// (0x0006b135) vkb2_top_entry_pane_t_ParamLimits

0xfdaf,	// (0x0006b135) vkb2_top_entry_pane_t

0xc245,	// (0x000675cb) vkb2_top_grid_right_pane_g1_ParamLimits

0xc245,	// (0x000675cb) vkb2_top_grid_right_pane_g1

0x1287,	// (0x0005c60d) vkb2_top_grid_right_pane_g2_ParamLimits

0x1287,	// (0x0005c60d) vkb2_top_grid_right_pane_g2

0x129f,	// (0x0005c625) vkb2_top_grid_right_pane_g3_ParamLimits

0x129f,	// (0x0005c625) vkb2_top_grid_right_pane_g3

0xc25b,	// (0x000675e1) vkb2_top_grid_right_pane_g4_ParamLimits

0xc25b,	// (0x000675e1) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb6,	// (0x0006b13c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb6,	// (0x0006b13c) vkb2_top_grid_right_pane_g

0x12cd,	// (0x0005c653) vkb2_top_cell_left_pane_g1

0x12e4,	// (0x0005c66a) vkb2_cell_keypad_pane_g1_ParamLimits

0x12e4,	// (0x0005c66a) vkb2_cell_keypad_pane_g1

0x7122,	// (0x000624a8) vkb2_cell_keypad_pane_t1_ParamLimits

0x7122,	// (0x000624a8) vkb2_cell_keypad_pane_t1

0x12f2,	// (0x0005c678) vkb2_cell_bottom_grid_pane_ParamLimits

0x12f2,	// (0x0005c678) vkb2_cell_bottom_grid_pane

0x132b,	// (0x0005c6b1) vkb2_cell_bottom_grid_pane_g1

0xd75d,	// (0x00068ae3) aid_call2_pane_cp02

0xd765,	// (0x00068aeb) aid_call_pane_cp02

0xd76d,	// (0x00068af3) clock_digital_number_pane_cp10

0xd775,	// (0x00068afb) clock_digital_number_pane_cp11

0xd77d,	// (0x00068b03) clock_digital_number_pane_cp12

0xd785,	// (0x00068b0b) clock_digital_number_pane_cp13

0xd78d,	// (0x00068b13) clock_digital_separator_pane_cp10

0x8e7e,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g1

0x8e7e,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g2

0xd795,	// (0x00068b1b) popup_clock_digital_analogue_window_cp2_g3

0x8e7e,	// (0x00064204) popup_clock_digital_analogue_window_cp2_g4

0xd795,	// (0x00068b1b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6b,	// (0x0006b0f1) popup_clock_digital_analogue_window_cp2_g

0xd79d,	// (0x00068b23) popup_clock_digital_analogue_window_cp2_t1

0xd7ab,	// (0x00068b31) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd76,	// (0x0006b0fc) popup_clock_digital_analogue_window_cp2_t

0x4b6c,	// (0x0005fef2) clock_digital_number_pane_cp10_g1

0x4b6c,	// (0x0005fef2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006aed8) clock_digital_number_pane_cp10_g

0x4b6c,	// (0x0005fef2) clock_digital_separator_pane_cp10_g1

0x4b6c,	// (0x0005fef2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0006aed8) clock_digital_separator_pane_cp10_g

0x6b55,	// (0x00061edb) uniindi_top_pane_g3

0x6b66,	// (0x00061eec) uniindi_top_pane_g4

0x1105,	// (0x0005c48b) vkb2_row_keypad_pane_ParamLimits

0x1105,	// (0x0005c48b) vkb2_row_keypad_pane

0x1347,	// (0x0005c6cd) vkb2_cell_t_keypad_pane_ParamLimits

0x1347,	// (0x0005c6cd) vkb2_cell_t_keypad_pane

0x1357,	// (0x0005c6dd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1357,	// (0x0005c6dd) vkb2_cell_t_keypad_pane_cp08

0x136c,	// (0x0005c6f2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x136c,	// (0x0005c6f2) vkb2_cell_t_keypad_pane_cp09

0x1380,	// (0x0005c706) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1380,	// (0x0005c706) vkb2_cell_t_keypad_pane_cp01

0x1391,	// (0x0005c717) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1391,	// (0x0005c717) vkb2_cell_t_keypad_pane_cp02

0x13a2,	// (0x0005c728) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x13a2,	// (0x0005c728) vkb2_cell_t_keypad_pane_cp03

0x13b3,	// (0x0005c739) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x13b3,	// (0x0005c739) vkb2_cell_t_keypad_pane_cp04

0x13c4,	// (0x0005c74a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x13c4,	// (0x0005c74a) vkb2_cell_t_keypad_pane_cp05

0x13d5,	// (0x0005c75b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x13d5,	// (0x0005c75b) vkb2_cell_t_keypad_pane_cp06

0x13e8,	// (0x0005c76e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x13e8,	// (0x0005c76e) vkb2_cell_t_keypad_pane_cp07

0x13fd,	// (0x0005c783) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x13fd,	// (0x0005c783) vkb2_cell_t_keypad_pane_cp10

0x0ab7,	// (0x0005be3d) vkb2_cell_t_keypad_pane_g1

0x7139,	// (0x000624bf) vkb2_cell_t_keypad_pane_t1

0xe70b,	// (0x00069a91) popup_grid_graphic2_window

0xdae5,	// (0x00068e6b) aid_size_cell_graphic2_ParamLimits

0xdae5,	// (0x00068e6b) aid_size_cell_graphic2

0xdb23,	// (0x00068ea9) bg_popup_window_pane_cp21_ParamLimits

0xdb23,	// (0x00068ea9) bg_popup_window_pane_cp21

0xdb31,	// (0x00068eb7) graphic2_pages_pane_ParamLimits

0xdb31,	// (0x00068eb7) graphic2_pages_pane

0xdb89,	// (0x00068f0f) grid_graphic2_control_pane_ParamLimits

0xdb89,	// (0x00068f0f) grid_graphic2_control_pane

0xdbd1,	// (0x00068f57) grid_graphic2_pane_ParamLimits

0xdbd1,	// (0x00068f57) grid_graphic2_pane

0xdc5c,	// (0x00068fe2) cell_graphic2_pane

0x5d57,	// (0x000610dd) main_comp_mode_pane

0x63c6,	// (0x0006174c) list_ai3_gene_pane_ParamLimits

0xd49a,	// (0x00068820) bg_popup_window_pane_cp19_ParamLimits

0x679a,	// (0x00061b20) bg_touch_area_indi_pane_ParamLimits

0x679a,	// (0x00061b20) bg_touch_area_indi_pane

0x67b0,	// (0x00061b36) bg_touch_area_indi_pane_cp01_ParamLimits

0x67b0,	// (0x00061b36) bg_touch_area_indi_pane_cp01

0x67c8,	// (0x00061b4e) bg_touch_area_indi_pane_cp02_ParamLimits

0x67c8,	// (0x00061b4e) bg_touch_area_indi_pane_cp02

0x67e2,	// (0x00061b68) bg_touch_area_indi_pane_cp03_ParamLimits

0x67e2,	// (0x00061b68) bg_touch_area_indi_pane_cp03

0x67fc,	// (0x00061b82) popup_slider_window_g1_ParamLimits

0x6818,	// (0x00061b9e) popup_slider_window_g2_ParamLimits

0x6834,	// (0x00061bba) popup_slider_window_g3_ParamLimits

0xfd00,	// (0x0006b086) popup_slider_window_g_ParamLimits

0x6890,	// (0x00061c16) popup_slider_window_t1_ParamLimits

0x6904,	// (0x00061c8a) small_volume_slider_vertical_pane_ParamLimits

0xdc5c,	// (0x00068fe2) cell_graphic2_pane_ParamLimits

0xdcbf,	// (0x00069045) bg_button_pane_cp10_ParamLimits

0xdcbf,	// (0x00069045) bg_button_pane_cp10

0xdcd2,	// (0x00069058) bg_button_pane_cp11_ParamLimits

0xdcd2,	// (0x00069058) bg_button_pane_cp11

0xdce5,	// (0x0006906b) graphic2_pages_pane_g1_ParamLimits

0xdce5,	// (0x0006906b) graphic2_pages_pane_g1

0xdd00,	// (0x00069086) graphic2_pages_pane_g2_ParamLimits

0xdd00,	// (0x00069086) graphic2_pages_pane_g2

0x0001,

0xfdc4,	// (0x0006b14a) graphic2_pages_pane_g_ParamLimits

0xfdc4,	// (0x0006b14a) graphic2_pages_pane_g

0xdd18,	// (0x0006909e) graphic2_pages_pane_t1_ParamLimits

0xdd18,	// (0x0006909e) graphic2_pages_pane_t1

0xdd30,	// (0x000690b6) cell_graphic2_control_pane_ParamLimits

0xdd30,	// (0x000690b6) cell_graphic2_control_pane

0xdd64,	// (0x000690ea) cell_graphic2_pane_g1_ParamLimits

0xdd64,	// (0x000690ea) cell_graphic2_pane_g1

0xdd71,	// (0x000690f7) cell_graphic2_pane_g2_ParamLimits

0xdd71,	// (0x000690f7) cell_graphic2_pane_g2

0xcd9c,	// (0x00068122) cell_graphic2_pane_g3_ParamLimits

0xcd9c,	// (0x00068122) cell_graphic2_pane_g3

0xdd7e,	// (0x00069104) cell_graphic2_pane_g4_ParamLimits

0xdd7e,	// (0x00069104) cell_graphic2_pane_g4

0xdd8b,	// (0x00069111) cell_graphic2_pane_g5_ParamLimits

0xdd8b,	// (0x00069111) cell_graphic2_pane_g5

0x0004,

0xfdc9,	// (0x0006b14f) cell_graphic2_pane_g_ParamLimits

0xfdc9,	// (0x0006b14f) cell_graphic2_pane_g

0xddab,	// (0x00069131) cell_graphic2_pane_t1_ParamLimits

0xddab,	// (0x00069131) cell_graphic2_pane_t1

0x3062,	// (0x0005e3e8) grid_highlight_pane_cp11_ParamLimits

0x3062,	// (0x0005e3e8) grid_highlight_pane_cp11

0x5f06,	// (0x0006128c) bg_button_pane_cp05

0xdde0,	// (0x00069166) cell_graphic2_control_pane_g1

0x4b6c,	// (0x0005fef2) bg_touch_area_indi_pane_g1

0x7413,	// (0x00062799) aid_cmod_rocker_key_size

0x741d,	// (0x000627a3) aid_cmode_itu_key_size

0x7427,	// (0x000627ad) main_cmode_video_pane

0x7431,	// (0x000627b7) main_comp_mode_itu_pane

0x743d,	// (0x000627c3) main_comp_mode_rocker_pane

0x7449,	// (0x000627cf) cell_cmode_rocker_pane_ParamLimits

0x7449,	// (0x000627cf) cell_cmode_rocker_pane

0x745d,	// (0x000627e3) cell_cmode_itu_pane_ParamLimits

0x745d,	// (0x000627e3) cell_cmode_itu_pane

0x899c,	// (0x00063d22) bg_button_pane_cp06_ParamLimits

0x899c,	// (0x00063d22) bg_button_pane_cp06

0x4de7,	// (0x0006016d) cell_cmode_rocker_pane_g1_ParamLimits

0x4de7,	// (0x0006016d) cell_cmode_rocker_pane_g1

0x69ab,	// (0x00061d31) cell_cmode_rocker_pane_g2_ParamLimits

0x69ab,	// (0x00061d31) cell_cmode_rocker_pane_g2

0x0001,

0xfdd9,	// (0x0006b15f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd9,	// (0x0006b15f) cell_cmode_rocker_pane_g

0x5d57,	// (0x000610dd) bg_button_pane_cp07

0x7474,	// (0x000627fa) cell_cmode_itu_pane_g1

0x747d,	// (0x00062803) cell_cmode_itu_pane_t1

0x748b,	// (0x00062811) cell_cmode_itu_pane_t2

0x0001,

0xfdde,	// (0x0006b164) cell_cmode_itu_pane_t

0x6bd9,	// (0x00061f5f) aid_touch_ctrl_left

0x6be1,	// (0x00061f67) aid_touch_ctrl_right

0x5d57,	// (0x000610dd) compa_mode_pane

0xde06,	// (0x0006918c) aid_cmod_rocker_key_size_cp

0xde10,	// (0x00069196) aid_cmode_itu_key_size_cp

0x74ad,	// (0x00062833) compa_mode_pane_g1

0x74b5,	// (0x0006283b) compa_mode_pane_g2

0x74bd,	// (0x00062843) compa_mode_pane_g3

0x0002,

0xfde3,	// (0x0006b169) compa_mode_pane_g

0xde1a,	// (0x000691a0) main_comp_mode_itu_pane_cp

0xde22,	// (0x000691a8) main_comp_mode_rocker_pane_cp

0xde2a,	// (0x000691b0) cell_cmode_itu_pane_cp_ParamLimits

0xde2a,	// (0x000691b0) cell_cmode_itu_pane_cp

0xde3f,	// (0x000691c5) cell_cmode_rocker_pane_cp_ParamLimits

0xde3f,	// (0x000691c5) cell_cmode_rocker_pane_cp

0x899c,	// (0x00063d22) bg_button_pane_cp06_cp_ParamLimits

0x899c,	// (0x00063d22) bg_button_pane_cp06_cp

0x4de7,	// (0x0006016d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4de7,	// (0x0006016d) cell_cmode_rocker_pane_g1_cp

0x4b6c,	// (0x0005fef2) cell_cmode_rocker_pane_g2_cp

0x5d57,	// (0x000610dd) bg_button_pane_cp07_cp

0xde51,	// (0x000691d7) cell_cmode_itu_pane_g1_cp

0xde5a,	// (0x000691e0) cell_cmode_itu_pane_t1_cp

0xde5a,	// (0x000691e0) cell_cmode_itu_pane_t2_cp

0xc9f7,	// (0x00067d7d) settings_code_pane_cp2

0x5dc5,	// (0x0006114b) bg_popup_window_pane_cp3_ParamLimits

0x60f4,	// (0x0006147a) heading_pane_cp3_ParamLimits

0x6100,	// (0x00061486) listscroll_popup_graphic_pane_ParamLimits

0x084a,	// (0x0005bbd0) fep_hwr_aid_pane_ParamLimits

0x0dbd,	// (0x0005c143) aid_touch_sctrl_top_ParamLimits

0x0dd8,	// (0x0005c15e) sctrl_sk_top_pane_g1_ParamLimits

0x0ab7,	// (0x0005be3d) sctrl_sk_top_pane_g2_ParamLimits

0xfd19,	// (0x0006b09f) sctrl_sk_top_pane_g_ParamLimits

0x0de5,	// (0x0005c16b) sctrl_sk_top_pane_t1_ParamLimits

0x0dbd,	// (0x0005c143) aid_touch_sctrl_bottom_ParamLimits

0x0de5,	// (0x0005c16b) sctrl_sk_bottom_pane_t1_ParamLimits

0x6b1f,	// (0x00061ea5) aid_area_touch_clock

0xc089,	// (0x0006740f) aid_vkb2_area_top_pane_cell_ParamLimits

0xc089,	// (0x0006740f) aid_vkb2_area_top_pane_cell

0xc134,	// (0x000674ba) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc134,	// (0x000674ba) aid_vkb2_area_bottom_pane_cell

0x7084,	// (0x0006240a) popup_char_count_window

0x7513,	// (0x00062899) popup_char_count_window_g1

0x751c,	// (0x000628a2) popup_char_count_window_g2

0x7525,	// (0x000628ab) popup_char_count_window_g3

0x0002,

0xfdea,	// (0x0006b170) popup_char_count_window_g

0x752e,	// (0x000628b4) popup_char_count_window_t1

0x0e96,	// (0x0005c21c) popup_fep_char_preview_window_ParamLimits

0x0e96,	// (0x0005c21c) popup_fep_char_preview_window

0xc0a9,	// (0x0006742f) vkb2_top_candi_pane_ParamLimits

0xc0a9,	// (0x0006742f) vkb2_top_candi_pane

0xde68,	// (0x000691ee) cell_vkb2_top_candi_pane_ParamLimits

0xde68,	// (0x000691ee) cell_vkb2_top_candi_pane

0x1412,	// (0x0005c798) bg_popup_fep_char_preview_window_ParamLimits

0x1412,	// (0x0005c798) bg_popup_fep_char_preview_window

0x1420,	// (0x0005c7a6) popup_fep_char_preview_window_t1_ParamLimits

0x1420,	// (0x0005c7a6) popup_fep_char_preview_window_t1

0x758d,	// (0x00062913) bg_popup_fep_char_preview_window_g1

0x7595,	// (0x0006291b) bg_popup_fep_char_preview_window_g2

0x759d,	// (0x00062923) bg_popup_fep_char_preview_window_g3

0x75a5,	// (0x0006292b) bg_popup_fep_char_preview_window_g4

0x75ad,	// (0x00062933) bg_popup_fep_char_preview_window_g5

0x145a,	// (0x0005c7e0) bg_popup_fep_char_preview_window_g6

0x75b5,	// (0x0006293b) bg_popup_fep_char_preview_window_g7

0x75bd,	// (0x00062943) bg_popup_fep_char_preview_window_g8

0x75c5,	// (0x0006294b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf1,	// (0x0006b177) bg_popup_fep_char_preview_window_g

0x0ab7,	// (0x0005be3d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ab7,	// (0x0005be3d) cell_vkb2_top_candi_pane_g1

0x0ac5,	// (0x0005be4b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ac5,	// (0x0005be4b) cell_vkb2_top_candi_pane_g2

0x638f,	// (0x00061715) cell_vkb2_top_candi_pane_g3_ParamLimits

0x638f,	// (0x00061715) cell_vkb2_top_candi_pane_g3

0x1462,	// (0x0005c7e8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1462,	// (0x0005c7e8) cell_vkb2_top_candi_pane_g4

0x5306,	// (0x0006068c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5306,	// (0x0006068c) cell_vkb2_top_candi_pane_g5

0x1483,	// (0x0005c809) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1483,	// (0x0005c809) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe04,	// (0x0006b18a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe04,	// (0x0006b18a) cell_vkb2_top_candi_pane_g

0x1491,	// (0x0005c817) cell_vkb2_top_candi_pane_t1

0x061e,	// (0x0005b9a4) aid_size_touch_slider_mark_ParamLimits

0x061e,	// (0x0005b9a4) aid_size_touch_slider_mark

0xdb6d,	// (0x00068ef3) grid_graphic2_catg_pane_ParamLimits

0xdb6d,	// (0x00068ef3) grid_graphic2_catg_pane

0xdc2b,	// (0x00068fb1) popup_grid_graphic2_window_t1_ParamLimits

0xdc2b,	// (0x00068fb1) popup_grid_graphic2_window_t1

0xdc41,	// (0x00068fc7) popup_grid_graphic2_window_t2_ParamLimits

0xdc41,	// (0x00068fc7) popup_grid_graphic2_window_t2

0x0001,

0xfdbf,	// (0x0006b145) popup_grid_graphic2_window_t_ParamLimits

0xfdbf,	// (0x0006b145) popup_grid_graphic2_window_t

0x5f06,	// (0x0006128c) bg_button_pane_cp05_ParamLimits

0xdde0,	// (0x00069166) cell_graphic2_control_pane_g1_ParamLimits

0xded2,	// (0x00069258) cell_graphic2_catg_pane_ParamLimits

0xded2,	// (0x00069258) cell_graphic2_catg_pane

0x5d57,	// (0x000610dd) bg_button_pane_cp12

0xdee4,	// (0x0006926a) cell_graphic2_catg_pane_g1

0x6aeb,	// (0x00061e71) cell_tb_ext_pane_t1_ParamLimits

0x1244,	// (0x0005c5ca) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1244,	// (0x0005c5ca) vkb2_top_cell_right_narrow_pane

0x125c,	// (0x0005c5e2) vkb2_top_cell_right_wide_pane_ParamLimits

0x125c,	// (0x0005c5e2) vkb2_top_cell_right_wide_pane

0x083c,	// (0x0005bbc2) bg_vkb2_func_pane_ParamLimits

0x083c,	// (0x0005bbc2) bg_vkb2_func_pane

0x12cd,	// (0x0005c653) vkb2_top_cell_left_pane_g1_ParamLimits

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp03

0x132b,	// (0x0005c6b1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x23a3,	// (0x0005d729) bg_vkb2_func_pane_g1

0x23ab,	// (0x0005d731) bg_vkb2_func_pane_g2

0x23bb,	// (0x0005d741) bg_vkb2_func_pane_g3

0x23b3,	// (0x0005d739) bg_vkb2_func_pane_g4

0x23c3,	// (0x0005d749) bg_vkb2_func_pane_g5

0x23cb,	// (0x0005d751) bg_vkb2_func_pane_g6

0x23d3,	// (0x0005d759) bg_vkb2_func_pane_g7

0x23db,	// (0x0005d761) bg_vkb2_func_pane_g8

0x239b,	// (0x0005d721) bg_vkb2_func_pane_g9

0x0008,

0xfe11,	// (0x0006b197) bg_vkb2_func_pane_g

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp01

0x12cd,	// (0x0005c653) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x12cd,	// (0x0005c653) vkb2_top_cell_right_wide_pane_g1

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x083c,	// (0x0005bbc2) bg_vkb2_fuc_pane_cp02

0x132b,	// (0x0005c6b1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x132b,	// (0x0005c6b1) vkb2_top_cell_right_narrow_pane_g1

0xd3d4,	// (0x0006875a) aid_touch_area_decrease_ParamLimits

0xd3d4,	// (0x0006875a) aid_touch_area_decrease

0xd40e,	// (0x00068794) aid_touch_area_increase_ParamLimits

0xd40e,	// (0x00068794) aid_touch_area_increase

0xd436,	// (0x000687bc) aid_touch_area_mute_ParamLimits

0xd436,	// (0x000687bc) aid_touch_area_mute

0xd466,	// (0x000687ec) aid_touch_area_slider_ParamLimits

0xd466,	// (0x000687ec) aid_touch_area_slider

0xd4a6,	// (0x0006882c) popup_slider_window_g4_ParamLimits

0xd4a6,	// (0x0006882c) popup_slider_window_g4

0xd4ce,	// (0x00068854) popup_slider_window_g5_ParamLimits

0xd4ce,	// (0x00068854) popup_slider_window_g5

0xd502,	// (0x00068888) popup_slider_window_g6_ParamLimits

0xd502,	// (0x00068888) popup_slider_window_g6

0x68be,	// (0x00061c44) popup_slider_window_t2_ParamLimits

0x68be,	// (0x00061c44) popup_slider_window_t2

0x0001,

0xfd0d,	// (0x0006b093) popup_slider_window_t_ParamLimits

0xfd0d,	// (0x0006b093) popup_slider_window_t

0xd51e,	// (0x000688a4) slider_pane_ParamLimits

0xd51e,	// (0x000688a4) slider_pane

0x75e8,	// (0x0006296e) slider_pane_g1_ParamLimits

0x75e8,	// (0x0006296e) slider_pane_g1

0x75fc,	// (0x00062982) slider_pane_g2_ParamLimits

0x75fc,	// (0x00062982) slider_pane_g2

0x7612,	// (0x00062998) slider_pane_g3_ParamLimits

0x7612,	// (0x00062998) slider_pane_g3

0x0003,

0xfe24,	// (0x0006b1aa) slider_pane_g_ParamLimits

0xfe24,	// (0x0006b1aa) slider_pane_g

0xb5bc,	// (0x00066942) popup_tb_float_extension_window_ParamLimits

0xb5bc,	// (0x00066942) popup_tb_float_extension_window

0x763e,	// (0x000629c4) aid_size_cell_tb_float_ext

0x5d57,	// (0x000610dd) bg_popup_sub_window_cp28

0x764a,	// (0x000629d0) grid_tb_float_ext_pane

0x7656,	// (0x000629dc) cell_tb_float_ext_pane_ParamLimits

0x7656,	// (0x000629dc) cell_tb_float_ext_pane

0x7672,	// (0x000629f8) cell_tb_float_ext_pane_g1

0x767b,	// (0x00062a01) grid_highlight_pane_cp12

0xbd31,	// (0x000670b7) cell_last_hwr_side_pane_ParamLimits

0xbd31,	// (0x000670b7) cell_last_hwr_side_pane

0x4b6c,	// (0x0005fef2) cell_last_hwr_side_pane_g1

0x7684,	// (0x00062a0a) cell_last_hwr_side_pane_g2

0x0001,

0xfe2d,	// (0x0006b1b3) cell_last_hwr_side_pane_g

0xc210,	// (0x00067596) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc210,	// (0x00067596) vkb2_area_bottom_space_btn_pane

0x0ab7,	// (0x0005be3d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7139,	// (0x000624bf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1491,	// (0x0005c817) cell_vkb2_top_candi_pane_t1_ParamLimits

0x14af,	// (0x0005c835) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x14af,	// (0x0005c835) vkb2_area_bottom_space_btn_pane_g1

0x14e9,	// (0x0005c86f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x14e9,	// (0x0005c86f) vkb2_area_bottom_space_btn_pane_g2

0x151f,	// (0x0005c8a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x151f,	// (0x0005c8a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe32,	// (0x0006b1b8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe32,	// (0x0006b1b8) vkb2_area_bottom_space_btn_pane_g

0x0901,	// (0x0005bc87) cel_fep_hwr_func_pane_ParamLimits

0x0901,	// (0x0005bc87) cel_fep_hwr_func_pane

0xbd06,	// (0x0006708c) cell_hwr_side_button_pane_ParamLimits

0xbd06,	// (0x0006708c) cell_hwr_side_button_pane

0x6b1f,	// (0x00061ea5) aid_area_touch_clock_ParamLimits

0x5f06,	// (0x0006128c) bg_uniindi_top_pane_ParamLimits

0x6b33,	// (0x00061eb9) uniindi_top_pane_g1_ParamLimits

0x6b49,	// (0x00061ecf) uniindi_top_pane_g2_ParamLimits

0x6b55,	// (0x00061edb) uniindi_top_pane_g3_ParamLimits

0x6b66,	// (0x00061eec) uniindi_top_pane_g4_ParamLimits

0xfd45,	// (0x0006b0cb) uniindi_top_pane_g_ParamLimits

0x6b73,	// (0x00061ef9) uniindi_top_pane_t1_ParamLimits

0x5f06,	// (0x0006128c) bg_vkb2_func_pane_cp01_ParamLimits

0x5f06,	// (0x0006128c) bg_vkb2_func_pane_cp01

0x768d,	// (0x00062a13) cel_fep_hwr_func_pane_g1_ParamLimits

0x768d,	// (0x00062a13) cel_fep_hwr_func_pane_g1

0x5f06,	// (0x0006128c) bg_vkb2_func_pane_cp02_ParamLimits

0x5f06,	// (0x0006128c) bg_vkb2_func_pane_cp02

0x768d,	// (0x00062a13) cell_hwr_side_button_pane_g1_ParamLimits

0x768d,	// (0x00062a13) cell_hwr_side_button_pane_g1

0x221c,	// (0x0005d5a2) status_pane_g4_ParamLimits

0x221c,	// (0x0005d5a2) status_pane_g4

0x2236,	// (0x0005d5bc) status_pane_t1

0x490b,	// (0x0005fc91) form2_midp_gauge_slider_cont_pane

0x4913,	// (0x0005fc99) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcce2,	// (0x00068068) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccf4,	// (0x0006807a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x0006ae8b) form2_midp_gauge_slider_pane_t_ParamLimits

0x4949,	// (0x0005fccf) form2_midp_slider_pane_ParamLimits

0x0e56,	// (0x0005c1dc) aid_size_cell_func_vkb2_ParamLimits

0x0e56,	// (0x0005c1dc) aid_size_cell_func_vkb2

0x762a,	// (0x000629b0) slider_pane_g4_ParamLimits

0x762a,	// (0x000629b0) slider_pane_g4

0xc271,	// (0x000675f7) form2_midp_gauge_slider_pane_t2_cp01

0xc27f,	// (0x00067605) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc27f,	// (0x00067605) form2_midp_gauge_slider_pane_t3_cp01

0x1594,	// (0x0005c91a) form2_midp_slider_pane_cp01

0x5d57,	// (0x000610dd) navi_smil_pane

0x76c6,	// (0x00062a4c) navi_smil_pane_g1

0x76ce,	// (0x00062a54) navi_smil_pane_t1

0x769b,	// (0x00062a21) form2_midp_slider_pane_g1

0x76a4,	// (0x00062a2a) form2_midp_slider_pane_g2

0x76ac,	// (0x00062a32) form2_midp_slider_pane_g3

0x769b,	// (0x00062a21) form2_midp_slider_pane_g4

0xdeed,	// (0x00069273) form2_midp_slider_pane_g5

0x0004,

0xfe3b,	// (0x0006b1c1) form2_midp_slider_pane_g

0x1559,	// (0x0005c8df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1559,	// (0x0005c8df) vkb2_area_bottom_space_btn_pane_g4

0xb7a3,	// (0x00066b29) lc0_navi_pane_ParamLimits

0xb7a3,	// (0x00066b29) lc0_navi_pane

0xb813,	// (0x00066b99) lc0_stat_indi_pane_ParamLimits

0xb813,	// (0x00066b99) lc0_stat_indi_pane

0xb828,	// (0x00066bae) ls0_title_pane_ParamLimits

0xb828,	// (0x00066bae) ls0_title_pane

0x899c,	// (0x00063d22) bg_popup_sub_pane_cp14_ParamLimits

0x6b06,	// (0x00061e8c) list_uniindi_pane_ParamLimits

0x6b12,	// (0x00061e98) uniindi_top_pane_ParamLimits

0x6bb1,	// (0x00061f37) list_single_uniindi_pane_g1_ParamLimits

0x6bc4,	// (0x00061f4a) list_single_uniindi_pane_t1_ParamLimits

0xc29c,	// (0x00067622) lc0_stat_clock_pane_ParamLimits

0xc29c,	// (0x00067622) lc0_stat_clock_pane

0xdef6,	// (0x0006927c) lc0_stat_indi_pane_g1_ParamLimits

0xdef6,	// (0x0006927c) lc0_stat_indi_pane_g1

0xdf03,	// (0x00069289) lc0_stat_indi_pane_g2_ParamLimits

0xdf03,	// (0x00069289) lc0_stat_indi_pane_g2

0x0001,

0xfe46,	// (0x0006b1cc) lc0_stat_indi_pane_g_ParamLimits

0xfe46,	// (0x0006b1cc) lc0_stat_indi_pane_g

0xc2a9,	// (0x0006762f) lc0_uni_indicator_pane_ParamLimits

0xc2a9,	// (0x0006762f) lc0_uni_indicator_pane

0xdf10,	// (0x00069296) ls0_title_pane_g1_ParamLimits

0xdf10,	// (0x00069296) ls0_title_pane_g1

0xdf24,	// (0x000692aa) ls0_title_pane_t1_ParamLimits

0xdf24,	// (0x000692aa) ls0_title_pane_t1

0xc2b6,	// (0x0006763c) lc0_uni_indicator_pane_g1_ParamLimits

0xc2b6,	// (0x0006763c) lc0_uni_indicator_pane_g1

0x7740,	// (0x00062ac6) lc0_stat_clock_pane_t1

0x5d57,	// (0x000610dd) main_ai5_pane

0x774e,	// (0x00062ad4) ai5_sk_pane_ParamLimits

0x774e,	// (0x00062ad4) ai5_sk_pane

0xdf52,	// (0x000692d8) cell_ai5_widget_pane_ParamLimits

0xdf52,	// (0x000692d8) cell_ai5_widget_pane

0x7cf7,	// (0x0006307d) aid_size_cell_widget_grid

0x7d05,	// (0x0006308b) bg_ai5_widget_pane_ParamLimits

0x7d05,	// (0x0006308b) bg_ai5_widget_pane

0x7d79,	// (0x000630ff) cell_ai5_widget_pane_g2

0x7d89,	// (0x0006310f) cell_ai5_widget_pane_g3

0x7da0,	// (0x00063126) cell_ai5_widget_pane_g4

0x7dac,	// (0x00063132) cell_ai5_widget_pane_g5

0xe2a9,	// (0x0006962f) cell_ai5_widget_pane_g6

0xe2b5,	// (0x0006963b) cell_ai5_widget_pane_g7

0x7e0c,	// (0x00063192) cell_ai5_widget_pane_t1_ParamLimits

0x7e0c,	// (0x00063192) cell_ai5_widget_pane_t1

0x7e29,	// (0x000631af) cell_ai5_widget_pane_t2_ParamLimits

0x7e29,	// (0x000631af) cell_ai5_widget_pane_t2

0x7e41,	// (0x000631c7) cell_ai5_widget_pane_t3_ParamLimits

0x7e41,	// (0x000631c7) cell_ai5_widget_pane_t3

0x7e59,	// (0x000631df) cell_ai5_widget_pane_t4_ParamLimits

0x7e59,	// (0x000631df) cell_ai5_widget_pane_t4

0x7e76,	// (0x000631fc) cell_ai5_widget_pane_t5_ParamLimits

0x7e76,	// (0x000631fc) cell_ai5_widget_pane_t5

0x7e95,	// (0x0006321b) cell_ai5_widget_pane_t6_ParamLimits

0x7e95,	// (0x0006321b) cell_ai5_widget_pane_t6

0x7ea7,	// (0x0006322d) cell_ai5_widget_pane_t7_ParamLimits

0x7ea7,	// (0x0006322d) cell_ai5_widget_pane_t7

0x7ec0,	// (0x00063246) cell_ai5_widget_pane_t8_ParamLimits

0x7ec0,	// (0x00063246) cell_ai5_widget_pane_t8

0x0009,

0xfe60,	// (0x0006b1e6) cell_ai5_widget_pane_t_ParamLimits

0xfe60,	// (0x0006b1e6) cell_ai5_widget_pane_t

0x7f14,	// (0x0006329a) grid_ai5_widget_pane

0x899c,	// (0x00063d22) highlight_cell_ai5_widget_pane_ParamLimits

0x899c,	// (0x00063d22) highlight_cell_ai5_widget_pane

0xe2c1,	// (0x00069647) ai5_sk_left_pane

0xe2cb,	// (0x00069651) ai5_sk_middle_pane

0xe2d5,	// (0x0006965b) ai5_sk_right_pane

0x7f46,	// (0x000632cc) bg_ai5_widget_pane_g1_ParamLimits

0x7f46,	// (0x000632cc) bg_ai5_widget_pane_g1

0x7f52,	// (0x000632d8) bg_ai5_widget_pane_g2_ParamLimits

0x7f52,	// (0x000632d8) bg_ai5_widget_pane_g2

0x7f5e,	// (0x000632e4) bg_ai5_widget_pane_g3_ParamLimits

0x7f5e,	// (0x000632e4) bg_ai5_widget_pane_g3

0x7f6a,	// (0x000632f0) bg_ai5_widget_pane_g4_ParamLimits

0x7f6a,	// (0x000632f0) bg_ai5_widget_pane_g4

0x7f76,	// (0x000632fc) bg_ai5_widget_pane_g5_ParamLimits

0x7f76,	// (0x000632fc) bg_ai5_widget_pane_g5

0x7f82,	// (0x00063308) bg_ai5_widget_pane_g6_ParamLimits

0x7f82,	// (0x00063308) bg_ai5_widget_pane_g6

0x7f8e,	// (0x00063314) bg_ai5_widget_pane_g7_ParamLimits

0x7f8e,	// (0x00063314) bg_ai5_widget_pane_g7

0x7f9a,	// (0x00063320) bg_ai5_widget_pane_g8_ParamLimits

0x7f9a,	// (0x00063320) bg_ai5_widget_pane_g8

0x7fa6,	// (0x0006332c) bg_ai5_widget_pane_g9_ParamLimits

0x7fa6,	// (0x0006332c) bg_ai5_widget_pane_g9

0x0008,

0xfe75,	// (0x0006b1fb) bg_ai5_widget_pane_g_ParamLimits

0xfe75,	// (0x0006b1fb) bg_ai5_widget_pane_g

0x7fdc,	// (0x00063362) cell_shortcut_ai5_widget_pane_ParamLimits

0x7fdc,	// (0x00063362) cell_shortcut_ai5_widget_pane

0xe9a8,	// (0x00069d2e) bg_cell_shortcut_ai5_widget_pane

0x7fef,	// (0x00063375) cell_grid_ai5_widget_pane_g1

0xe9a8,	// (0x00069d2e) highlight_cell_shortcut_ai5_widget_pane

0x23a3,	// (0x0005d729) ai5_sk_left_pane_g1

0x7ff8,	// (0x0006337e) ai5_sk_left_pane_g2

0x8000,	// (0x00063386) ai5_sk_left_pane_g3

0x8008,	// (0x0006338e) ai5_sk_left_pane_g4

0x0003,

0xfe88,	// (0x0006b20e) ai5_sk_left_pane_g

0x8010,	// (0x00063396) ai5_sk_left_pane_t1

0x23ab,	// (0x0005d731) ai5_sk_right_pane_g1

0x801e,	// (0x000633a4) ai5_sk_right_pane_g2

0x8026,	// (0x000633ac) ai5_sk_right_pane_g3

0x802e,	// (0x000633b4) ai5_sk_right_pane_g4

0x0003,

0xfe91,	// (0x0006b217) ai5_sk_right_pane_g

0x8036,	// (0x000633bc) ai5_sk_right_pane_t1

0x23ab,	// (0x0005d731) ai5_sk_middle_pane_g1

0x23a3,	// (0x0005d729) ai5_sk_middle_pane_g2

0x23c3,	// (0x0005d749) ai5_sk_middle_pane_g3

0x8026,	// (0x000633ac) ai5_sk_middle_pane_g4

0x8000,	// (0x00063386) ai5_sk_middle_pane_g5

0x8044,	// (0x000633ca) ai5_sk_middle_pane_g6

0xe2df,	// (0x00069665) ai5_sk_middle_pane_g7

0x0006,

0xfe9a,	// (0x0006b220) ai5_sk_middle_pane_g

0xb68d,	// (0x00066a13) aid_touch_area_size_lc0_ParamLimits

0xb68d,	// (0x00066a13) aid_touch_area_size_lc0

0x0ae6,	// (0x0005be6c) cell_hwr_candidate_pane_t1_ParamLimits

0x1ed3,	// (0x0005d259) aid_touch_navi_pane

0xb933,	// (0x00066cb9) status_dt_navi_pane_ParamLimits

0xb933,	// (0x00066cb9) status_dt_navi_pane

0xb94b,	// (0x00066cd1) status_dt_sta_pane_ParamLimits

0xb94b,	// (0x00066cd1) status_dt_sta_pane

0xe2e7,	// (0x0006966d) dt_sta_controll_pane

0xe2f4,	// (0x0006967a) dt_sta_indi_pane

0xe301,	// (0x00069687) dt_sta_title_pane

0x5f06,	// (0x0006128c) bg_dt_sta_indi_pane_ParamLimits

0x5f06,	// (0x0006128c) bg_dt_sta_indi_pane

0xe313,	// (0x00069699) dt_sta_battery_pane

0xe31b,	// (0x000696a1) dt_sta_indi_pane_g1

0xe324,	// (0x000696aa) dt_sta_indi_pane_g2

0xe32d,	// (0x000696b3) dt_sta_indi_pane_g3

0x0002,

0xfea9,	// (0x0006b22f) dt_sta_indi_pane_g

0xe336,	// (0x000696bc) dt_sta_signal_pane

0x899c,	// (0x00063d22) bg_dt_sta_title_pane_ParamLimits

0x899c,	// (0x00063d22) bg_dt_sta_title_pane

0xe33f,	// (0x000696c5) dt_sta_title_pane_g1

0xe347,	// (0x000696cd) dt_sta_title_pane_t1_ParamLimits

0xe347,	// (0x000696cd) dt_sta_title_pane_t1

0x5d57,	// (0x000610dd) bg_dt_sta_control_pane

0xe35c,	// (0x000696e2) dt_sta_controll_pane_g1

0xe365,	// (0x000696eb) bg_dt_sta_title_pane_g1

0xe36e,	// (0x000696f4) bg_dt_sta_title_pane_g2

0xe377,	// (0x000696fd) bg_dt_sta_title_pane_g3

0x0002,

0xfeb0,	// (0x0006b236) bg_dt_sta_title_pane_g

0x4b6c,	// (0x0005fef2) bg_dt_sta_indi_pane_g1

0x80f2,	// (0x00063478) dt_sta_signal_pane_g1

0x80fa,	// (0x00063480) dt_sta_signal_pane_g2

0x0001,

0xfeb7,	// (0x0006b23d) dt_sta_signal_pane_g

0x8102,	// (0x00063488) dt_sta_battery_pane_g1

0x810b,	// (0x00063491) dt_sta_battery_pane_t1

0x4b6c,	// (0x0005fef2) bg_dt_sta_control_pane_g1

0x8f00,	// (0x00064286) fep_china_uni_eep_pane

0x8f08,	// (0x0006428e) fep_china_uni_entry_pane_ParamLimits

0x8f18,	// (0x0006429e) popup_fep_china_uni_window_g1_ParamLimits

0x8f28,	// (0x000642ae) popup_fep_china_uni_window_g2_ParamLimits

0x8f28,	// (0x000642ae) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006aaa8) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006aaa8) popup_fep_china_uni_window_g

0x811a,	// (0x000634a0) fep_china_uni_eep_pane_g1

0x8122,	// (0x000634a8) fep_china_uni_eep_pane_t1

0x76bd,	// (0x00062a43) aid_touch_area_size_smil_player

0x202b,	// (0x0005d3b1) lc0_clock_pane

0x222a,	// (0x0005d5b0) status_pane_g5_ParamLimits

0x222a,	// (0x0005d5b0) status_pane_g5

0xb0e2,	// (0x00066468) popup_keymap_window

0x21e8,	// (0x0005d56e) status_icon_pane

0x7d89,	// (0x0006310f) cell_ai5_widget_pane_g3_ParamLimits

0x7da0,	// (0x00063126) cell_ai5_widget_pane_g4_ParamLimits

0x7dac,	// (0x00063132) cell_ai5_widget_pane_g5_ParamLimits

0x7dd0,	// (0x00063156) cell_ai5_widget_pane_g8_ParamLimits

0x7dd0,	// (0x00063156) cell_ai5_widget_pane_g8

0x7de4,	// (0x0006316a) cell_ai5_widget_pane_g9_ParamLimits

0x7de4,	// (0x0006316a) cell_ai5_widget_pane_g9

0x7df8,	// (0x0006317e) cell_ai5_widget_pane_g10_ParamLimits

0x7df8,	// (0x0006317e) cell_ai5_widget_pane_g10

0x8131,	// (0x000634b7) status_icon_pane_g1

0x5d57,	// (0x000610dd) bg_popup_sub_pane_cp13

0x8139,	// (0x000634bf) popup_keymap_window_t1

0xadc3,	// (0x00066149) control_pane_g6_ParamLimits

0xadc3,	// (0x00066149) control_pane_g6

0xadd0,	// (0x00066156) control_pane_g7_ParamLimits

0xadd0,	// (0x00066156) control_pane_g7

0xaddd,	// (0x00066163) control_pane_g8_ParamLimits

0xaddd,	// (0x00066163) control_pane_g8

0xe2e7,	// (0x0006966d) dt_sta_controll_pane_ParamLimits

0xe2f4,	// (0x0006967a) dt_sta_indi_pane_ParamLimits

0xe301,	// (0x00069687) dt_sta_title_pane_ParamLimits

0x632a,	// (0x000616b0) aid_size_touch_scroll_bar_cale

0xe7e8,	// (0x00069b6e) popup_discreet_window_ParamLimits

0xe7e8,	// (0x00069b6e) popup_discreet_window

0x9d3f,	// (0x000650c5) popup_sk_window

0x29eb,	// (0x0005dd71) bg_popup_sub_pane_cp28_ParamLimits

0x29eb,	// (0x0005dd71) bg_popup_sub_pane_cp28

0x8147,	// (0x000634cd) popup_discreet_window_g1_ParamLimits

0x8147,	// (0x000634cd) popup_discreet_window_g1

0x8167,	// (0x000634ed) popup_discreet_window_t1_ParamLimits

0x8167,	// (0x000634ed) popup_discreet_window_t1

0x8185,	// (0x0006350b) popup_discreet_window_t2_ParamLimits

0x8185,	// (0x0006350b) popup_discreet_window_t2

0x0002,

0xfebc,	// (0x0006b242) popup_discreet_window_t_ParamLimits

0xfebc,	// (0x0006b242) popup_discreet_window_t

0x15ca,	// (0x0005c950) popup_sk_window_g1

0x15d4,	// (0x0005c95a) popup_sk_window_g2

0x0001,

0xfec3,	// (0x0006b249) popup_sk_window_g

0x15de,	// (0x0005c964) popup_sk_window_t1

0x15ee,	// (0x0005c974) popup_sk_window_t1_copy1

0x7d79,	// (0x000630ff) cell_ai5_widget_pane_g2_ParamLimits

0x7ed2,	// (0x00063258) cell_ai5_widget_pane_t9_ParamLimits

0x7ed2,	// (0x00063258) cell_ai5_widget_pane_t9

0x5d57,	// (0x000610dd) main_fep_fshwr2_pane

0xc2d5,	// (0x0006765b) aid_fshwr2_btn_pane

0xc2e6,	// (0x0006766c) aid_fshwr2_syb_pane

0xc2f7,	// (0x0006767d) aid_fshwr2_txt_pane

0xc303,	// (0x00067689) fshwr2_func_candi_pane

0xc324,	// (0x000676aa) fshwr2_hwr_syb_pane

0xc341,	// (0x000676c7) fshwr2_icf_pane

0xe70b,	// (0x00069a91) fshwr2_icf_bg_pane

0x1670,	// (0x0005c9f6) fshwr2_icf_pane_t1_ParamLimits

0x1670,	// (0x0005c9f6) fshwr2_icf_pane_t1

0x8e7e,	// (0x00064204) fshwr2_func_candi_pane_g1

0xe380,	// (0x00069706) fshwr2_func_candi_row_pane_ParamLimits

0xe380,	// (0x00069706) fshwr2_func_candi_row_pane

0xc36d,	// (0x000676f3) cell_fshwr2_syb_pane_ParamLimits

0xc36d,	// (0x000676f3) cell_fshwr2_syb_pane

0x0ab7,	// (0x0005be3d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0ab7,	// (0x0005be3d) fshwr2_hwr_syb_pane_g1

0xe70b,	// (0x00069a91) bg_popup_call_pane_cp01

0xc383,	// (0x00067709) fshwr2_func_candi_cell_pane_ParamLimits

0xc383,	// (0x00067709) fshwr2_func_candi_cell_pane

0xe390,	// (0x00069716) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe390,	// (0x00069716) fshwr2_func_candi_cell_bg_pane

0xc3b3,	// (0x00067739) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc3b3,	// (0x00067739) fshwr2_func_candi_cell_pane_g1

0xc3e2,	// (0x00067768) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc3e2,	// (0x00067768) fshwr2_func_candi_cell_pane_t1

0xe70b,	// (0x00069a91) bg_button_pane_cp08

0x81f3,	// (0x00063579) cell_fshwr2_syb_bg_pane

0xc3f5,	// (0x0006777b) cell_fshwr2_syb_bg_pane_g1

0xc3fd,	// (0x00067783) cell_fshwr2_syb_bg_pane_t1

0x899c,	// (0x00063d22) main_tmo_pane

0xc7f4,	// (0x00067b7a) uni_indicator_pane_g1_ParamLimits

0xc80a,	// (0x00067b90) uni_indicator_pane_g2_ParamLimits

0xc820,	// (0x00067ba6) uni_indicator_pane_g3_ParamLimits

0xc835,	// (0x00067bbb) uni_indicator_pane_g4_ParamLimits

0xc835,	// (0x00067bbb) uni_indicator_pane_g4

0x3564,	// (0x0005e8ea) uni_indicator_pane_g5_ParamLimits

0x3564,	// (0x0005e8ea) uni_indicator_pane_g5

0x3564,	// (0x0005e8ea) uni_indicator_pane_g6_ParamLimits

0x3564,	// (0x0005e8ea) uni_indicator_pane_g6

0xf921,	// (0x0006aca7) uni_indicator_pane_g_ParamLimits

0xd3a4,	// (0x0006872a) popup_tmo_note_window_ParamLimits

0xd3a4,	// (0x0006872a) popup_tmo_note_window

0x0e38,	// (0x0005c1be) fshwr2_bg_pane

0xc3d3,	// (0x00067759) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc3d3,	// (0x00067759) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec8,	// (0x0006b24e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec8,	// (0x0006b24e) fshwr2_func_candi_cell_pane_g

0x0a9f,	// (0x0005be25) bg_popup_window_pane_cp01

0x171c,	// (0x0005caa2) bg_popup_window_pane_g1_cp01

0x81fb,	// (0x00063581) bg_popup_window_pane_cp22_ParamLimits

0x81fb,	// (0x00063581) bg_popup_window_pane_cp22

0x8209,	// (0x0006358f) listscroll_tmo_link_pane_ParamLimits

0x8209,	// (0x0006358f) listscroll_tmo_link_pane

0x8249,	// (0x000635cf) popup_tmo_note_window_g1_ParamLimits

0x8249,	// (0x000635cf) popup_tmo_note_window_g1

0x8256,	// (0x000635dc) tmo_note_info_pane_ParamLimits

0x8256,	// (0x000635dc) tmo_note_info_pane

0xe39c,	// (0x00069722) list_tmo_note_info_pane_g1_ParamLimits

0xe39c,	// (0x00069722) list_tmo_note_info_pane_g1

0x8287,	// (0x0006360d) list_tmo_note_info_pane_g2_ParamLimits

0x8287,	// (0x0006360d) list_tmo_note_info_pane_g2

0x0001,

0xfecd,	// (0x0006b253) list_tmo_note_info_pane_g_ParamLimits

0xfecd,	// (0x0006b253) list_tmo_note_info_pane_g

0x82a3,	// (0x00063629) list_tmo_note_info_text_pane_ParamLimits

0x82a3,	// (0x00063629) list_tmo_note_info_text_pane

0x8328,	// (0x000636ae) list_tmo_link_pane

0x8335,	// (0x000636bb) scroll_pane_cp20

0x8342,	// (0x000636c8) list_single_tmo_link_pane_ParamLimits

0x8342,	// (0x000636c8) list_single_tmo_link_pane

0x8352,	// (0x000636d8) list_single_tmo_link_pane_t1

0x8360,	// (0x000636e6) list_tmo_note_info_text_pane_t1_ParamLimits

0x8360,	// (0x000636e6) list_tmo_note_info_text_pane_t1

0xa7f8,	// (0x00065b7e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7f8,	// (0x00065b7e) aid_size_touch_scroll_bar_cp01

0xa727,	// (0x00065aad) aid_size_touch_slider_marker

0x9d2f,	// (0x000650b5) popup_settings_window_ParamLimits

0x9d2f,	// (0x000650b5) popup_settings_window

0xeb1b,	// (0x00069ea1) popup_candi_list_indi_window

0x1ed3,	// (0x0005d259) aid_touch_navi_pane_ParamLimits

0x0d91,	// (0x0005c117) rs_clock_indi_pane

0x0d9a,	// (0x0005c120) sctrl_sk_bottom_pane_ParamLimits

0x0dab,	// (0x0005c131) sctrl_sk_top_pane_ParamLimits

0x0eb0,	// (0x0005c236) popup_fep_tooltip_window

0x7cf7,	// (0x0006307d) aid_size_cell_widget_grid_ParamLimits

0x7d64,	// (0x000630ea) cell_ai5_widget_pane_g1_ParamLimits

0x7d64,	// (0x000630ea) cell_ai5_widget_pane_g1

0xe2a9,	// (0x0006962f) cell_ai5_widget_pane_g6_ParamLimits

0xe2b5,	// (0x0006963b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4b,	// (0x0006b1d1) cell_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0006b1d1) cell_ai5_widget_pane_g

0x7ef6,	// (0x0006327c) cell_ai5_widget_pane_t10_ParamLimits

0x7ef6,	// (0x0006327c) cell_ai5_widget_pane_t10

0x7f14,	// (0x0006329a) grid_ai5_widget_pane_ParamLimits

0x7fb2,	// (0x00063338) cell_contacts_ai5_widget_pane_ParamLimits

0x7fb2,	// (0x00063338) cell_contacts_ai5_widget_pane

0x819a,	// (0x00063520) popup_discreet_window_t3_ParamLimits

0x819a,	// (0x00063520) popup_discreet_window_t3

0xc359,	// (0x000676df) popup_fshwr2_char_preview_window_ParamLimits

0xc359,	// (0x000676df) popup_fshwr2_char_preview_window

0xe3b3,	// (0x00069739) tmo_note_info_pane_t1

0xe3c8,	// (0x0006974e) tmo_note_info_pane_t2

0xe3e1,	// (0x00069767) tmo_note_info_pane_t3

0x8304,	// (0x0006368a) tmo_note_info_pane_t4

0x8316,	// (0x0006369c) tmo_note_info_pane_t5

0x0004,

0xfed2,	// (0x0006b258) tmo_note_info_pane_t

0x8328,	// (0x000636ae) list_tmo_link_pane_ParamLimits

0x8335,	// (0x000636bb) scroll_pane_cp20_ParamLimits

0xe70b,	// (0x00069a91) bg_popup_fep_char_preview_window_cp01

0x8379,	// (0x000636ff) popup_fshwr2_char_preview_window_t1

0x8387,	// (0x0006370d) popup_candi_list_indi_window_g1

0x8390,	// (0x00063716) bg_cell_contacts_ai5_widget_pane

0x839c,	// (0x00063722) cell_contacts_ai5_widget_pane_g1

0x83b1,	// (0x00063737) cell_contacts_ai5_widget_pane_g2

0x83bd,	// (0x00063743) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfedd,	// (0x0006b263) cell_contacts_ai5_widget_pane_g

0x83c9,	// (0x0006374f) cell_contacts_ai5_widget_pane_t1

0x899c,	// (0x00063d22) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe45b,	// (0x000697e1) settings_container_pane

0xe9a8,	// (0x00069d2e) listscroll_set_pane_copy1

0x428d,	// (0x0005f613) scroll_pane_cp121_copy1

0x844c,	// (0x000637d2) set_content_pane_copy1

0xe467,	// (0x000697ed) aid_height_set_list_copy1_ParamLimits

0xe467,	// (0x000697ed) aid_height_set_list_copy1

0x3764,	// (0x0005eaea) aid_size_parent_copy1_ParamLimits

0x3764,	// (0x0005eaea) aid_size_parent_copy1

0xe473,	// (0x000697f9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe473,	// (0x000697f9) button_value_adjust_pane_cp6_copy1

0x016c,	// (0x0005b4f2) list_highlight_pane_cp2_copy1_ParamLimits

0x016c,	// (0x0005b4f2) list_highlight_pane_cp2_copy1

0xe487,	// (0x0006980d) list_set_pane_copy1_ParamLimits

0xe487,	// (0x0006980d) list_set_pane_copy1

0xe3f6,	// (0x0006977c) main_pane_set_t1_copy1_ParamLimits

0xe3f6,	// (0x0006977c) main_pane_set_t1_copy1

0xe430,	// (0x000697b6) main_pane_set_t2_copy1_ParamLimits

0xe430,	// (0x000697b6) main_pane_set_t2_copy1

0xe54e,	// (0x000698d4) main_pane_set_t3_copy1

0xe55c,	// (0x000698e2) main_pane_set_t4_copy1

0xe44f,	// (0x000697d5) set_content_pane_g1_copy1_ParamLimits

0xe44f,	// (0x000697d5) set_content_pane_g1_copy1

0xe56a,	// (0x000698f0) setting_code_pane_copy1

0x855f,	// (0x000638e5) setting_slider_graphic_pane_copy1

0x855f,	// (0x000638e5) setting_slider_pane_copy1

0x855f,	// (0x000638e5) setting_text_pane_copy1

0x855f,	// (0x000638e5) setting_volume_pane_copy1

0xe56a,	// (0x000698f0) settings_code_pane_cp2_copy1

0xe572,	// (0x000698f8) settings_code_pane_cp_copy1_ParamLimits

0xe572,	// (0x000698f8) settings_code_pane_cp_copy1

0xc40c,	// (0x00067792) volume_set_pane_copy1

0xe586,	// (0x0006990c) volume_set_pane_g10_copy1

0xe592,	// (0x00069918) volume_set_pane_g1_copy1

0xe59c,	// (0x00069922) volume_set_pane_g2_copy1

0xe5a6,	// (0x0006992c) volume_set_pane_g3_copy1

0xe5b0,	// (0x00069936) volume_set_pane_g4_copy1

0xe5ba,	// (0x00069940) volume_set_pane_g5_copy1

0xe5c4,	// (0x0006994a) volume_set_pane_g6_copy1

0xe5ce,	// (0x00069954) volume_set_pane_g7_copy1

0xe5d8,	// (0x0006995e) volume_set_pane_g8_copy1

0xe5e2,	// (0x00069968) volume_set_pane_g9_copy1

0x5dc5,	// (0x0006114b) bg_set_opt_pane_cp_copy1_ParamLimits

0x5dc5,	// (0x0006114b) bg_set_opt_pane_cp_copy1

0x1731,	// (0x0005cab7) setting_slider_pane_t1_copy1_ParamLimits

0x1731,	// (0x0005cab7) setting_slider_pane_t1_copy1

0xc418,	// (0x0006779e) setting_slider_pane_t2_copy1_ParamLimits

0xc418,	// (0x0006779e) setting_slider_pane_t2_copy1

0xc432,	// (0x000677b8) setting_slider_pane_t3_copy1_ParamLimits

0xc432,	// (0x000677b8) setting_slider_pane_t3_copy1

0xc44a,	// (0x000677d0) slider_set_pane_copy1_ParamLimits

0xc44a,	// (0x000677d0) slider_set_pane_copy1

0x89f7,	// (0x00063d7d) set_opt_bg_pane_g1_copy2

0x89ff,	// (0x00063d85) set_opt_bg_pane_g2_copy2

0x85e1,	// (0x00063967) set_opt_bg_pane_g3_copy2

0x8a0f,	// (0x00063d95) set_opt_bg_pane_g4_copy2

0x8a17,	// (0x00063d9d) set_opt_bg_pane_g5_copy2

0x8a1f,	// (0x00063da5) set_opt_bg_pane_g6_copy2

0xe5ec,	// (0x00069972) set_opt_bg_pane_g7_copy2

0x85f5,	// (0x0006397b) set_opt_bg_pane_g8_copy2

0x85ff,	// (0x00063985) set_opt_bg_pane_g9_copy2

0x1797,	// (0x0005cb1d) aid_size_touch_slider_mark_copy1_ParamLimits

0x1797,	// (0x0005cb1d) aid_size_touch_slider_mark_copy1

0x8609,	// (0x0006398f) slider_set_pane_g1_copy1

0x17ab,	// (0x0005cb31) slider_set_pane_g2_copy1

0x063e,	// (0x0005b9c4) slider_set_pane_g3_copy1_ParamLimits

0x063e,	// (0x0005b9c4) slider_set_pane_g3_copy1

0x0652,	// (0x0005b9d8) slider_set_pane_g4_copy1_ParamLimits

0x0652,	// (0x0005b9d8) slider_set_pane_g4_copy1

0x066a,	// (0x0005b9f0) slider_set_pane_g5_copy1_ParamLimits

0x066a,	// (0x0005b9f0) slider_set_pane_g5_copy1

0x063e,	// (0x0005b9c4) slider_set_pane_g6_copy1_ParamLimits

0x063e,	// (0x0005b9c4) slider_set_pane_g6_copy1

0xc460,	// (0x000677e6) slider_set_pane_g7_copy1_ParamLimits

0xc460,	// (0x000677e6) slider_set_pane_g7_copy1

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp2_copy1

0x8612,	// (0x00063998) setting_slider_graphic_pane_g1_copy1

0xe5f6,	// (0x0006997c) setting_slider_graphic_pane_t1_copy1

0xe606,	// (0x0006998c) setting_slider_graphic_pane_t2_copy1

0xe616,	// (0x0006999c) slider_set_pane_cp_copy1

0x864b,	// (0x000639d1) input_focus_pane_cp1_copy1

0x8654,	// (0x000639da) list_set_text_pane_copy1

0x865c,	// (0x000639e2) setting_text_pane_g1_copy1

0xc476,	// (0x000677fc) set_text_pane_t1_copy1

0x864b,	// (0x000639d1) input_focus_pane_cp2_copy1

0x865c,	// (0x000639e2) setting_code_pane_g1_copy1

0xe61e,	// (0x000699a4) setting_code_pane_t1_copy1

0xe62c,	// (0x000699b2) list_set_graphic_pane_copy1

0x5d6b,	// (0x000610f1) bg_set_opt_pane_cp4_copy1

0xab46,	// (0x00065ecc) list_set_graphic_pane_g1_copy1_ParamLimits

0xab46,	// (0x00065ecc) list_set_graphic_pane_g1_copy1

0xe63e,	// (0x000699c4) list_set_graphic_pane_g2_copy1

0xab5e,	// (0x00065ee4) list_set_graphic_pane_t1_copy1_ParamLimits

0xab5e,	// (0x00065ee4) list_set_graphic_pane_t1_copy1

0x4b6c,	// (0x0005fef2) rs_clock_indi_pane_g1

0x868d,	// (0x00063a13) rs_clock_indi_pane_t1

0x869b,	// (0x00063a21) rs_indi_pane

0x86a3,	// (0x00063a29) rs_indi_pane_g1

0x86ac,	// (0x00063a32) rs_indi_pane_g2

0x86b5,	// (0x00063a3b) rs_indi_pane_g3

0x0002,

0xfee4,	// (0x0006b26a) rs_indi_pane_g

0xe9a8,	// (0x00069d2e) bg_popup_preview_window_pane_cp03

0x86be,	// (0x00063a44) popup_fep_tooltip_window_t1

0x5823,	// (0x00060ba9) popup_note2_window_g2_ParamLimits

0x5823,	// (0x00060ba9) popup_note2_window_g2

0x0001,

0xfc7d,	// (0x0006b003) popup_note2_window_g_ParamLimits

0xfc7d,	// (0x0006b003) popup_note2_window_g

0x5d2b,	// (0x000610b1) bg_popup_sub_pane_cp11_ParamLimits

0x5d38,	// (0x000610be) cell_ai3_links_pane_g1_ParamLimits

0x63b0,	// (0x00061736) cell_ai3_links_pane_t1

0xc476,	// (0x000677fc) set_text_pane_t1_copy1_ParamLimits

0xabdd,	// (0x00065f63) cell_graphic_popup_pane_cp2_ParamLimits

0xabdd,	// (0x00065f63) cell_graphic_popup_pane_cp2

0xe646,	// (0x000699cc) cell_graphic_popup_pane_g1_cp2

0x613d,	// (0x000614c3) cell_graphic_popup_pane_g2_cp2

0x86d4,	// (0x00063a5a) cell_graphic_popup_pane_g3_cp2

0x86dc,	// (0x00063a62) cell_graphic_popup_pane_t2_cp2

0x614e,	// (0x000614d4) grid_highlight_pane_cp3_cp2

0x8ca0,	// (0x00064026) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x899c,	// (0x00063d22) main_tmo_pane_ParamLimits

0xd398,	// (0x0006871e) popup_tmo_big_image_note_window

0x7d53,	// (0x000630d9) cell_ai5_widget_list_pane

0x7d5b,	// (0x000630e1) cell_ai5_widget_lrg_icon_pane

0xe3b3,	// (0x00069739) tmo_note_info_pane_t1_ParamLimits

0xe3c8,	// (0x0006974e) tmo_note_info_pane_t2_ParamLimits

0xe3e1,	// (0x00069767) tmo_note_info_pane_t3_ParamLimits

0x8304,	// (0x0006368a) tmo_note_info_pane_t4_ParamLimits

0x8316,	// (0x0006369c) tmo_note_info_pane_t5_ParamLimits

0xfed2,	// (0x0006b258) tmo_note_info_pane_t_ParamLimits

0xe45b,	// (0x000697e1) settings_container_pane_ParamLimits

0x8643,	// (0x000639c9) indicator_popup_pane_cp5

0x8643,	// (0x000639c9) indicator_popup_pane_cp6

0xe62c,	// (0x000699b2) list_set_graphic_pane_copy1_ParamLimits

0x5d57,	// (0x000610dd) bg_popup_window_pane_cp23

0x86ea,	// (0x00063a70) popup_tmo_big_image_note_window_g1

0x86f6,	// (0x00063a7c) popup_tmo_big_image_note_window_t1

0x8706,	// (0x00063a8c) popup_tmo_big_image_note_window_t2

0x8716,	// (0x00063a9c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeeb,	// (0x0006b271) popup_tmo_big_image_note_window_t

0x4b6c,	// (0x0005fef2) cell_ai5_widget_lrg_icon_pane_g1

0x8726,	// (0x00063aac) cell_ai5_widget_lrg_icon_pane_t1

0x8734,	// (0x00063aba) cell_ai5_widget_list_row_pane_ParamLimits

0x8734,	// (0x00063aba) cell_ai5_widget_list_row_pane

0x874c,	// (0x00063ad2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x874c,	// (0x00063ad2) cell_ai5_widget_list_row_pane_g1

0x8759,	// (0x00063adf) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8759,	// (0x00063adf) cell_ai5_widget_list_row_pane_t1

0x8784,	// (0x00063b0a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8784,	// (0x00063b0a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef2,	// (0x0006b278) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef2,	// (0x0006b278) cell_ai5_widget_list_row_pane_t

0xe70b,	// (0x00069a91) main_fep_vtchi_ss_pane

0x17e5,	// (0x0005cb6b) popup_fep_char_pre_window

0x17ed,	// (0x0005cb73) popup_fep_ituss_window

0x180e,	// (0x0005cb94) popup_fep_vkbss_window

0x87ac,	// (0x00063b32) grid_vkbss_keypad_pane_ParamLimits

0x87ac,	// (0x00063b32) grid_vkbss_keypad_pane

0x87bc,	// (0x00063b42) ituss_keypad_pane

0x183c,	// (0x0005cbc2) aid_vkbss_key_offset_ParamLimits

0x183c,	// (0x0005cbc2) aid_vkbss_key_offset

0x1848,	// (0x0005cbce) cell_vkbss_key_pane_ParamLimits

0x1848,	// (0x0005cbce) cell_vkbss_key_pane

0x87cb,	// (0x00063b51) bg_cell_vkbss_key_g1_ParamLimits

0x87cb,	// (0x00063b51) bg_cell_vkbss_key_g1

0x87d7,	// (0x00063b5d) cell_vkbss_key_3p_pane_ParamLimits

0x87d7,	// (0x00063b5d) cell_vkbss_key_3p_pane

0x87f1,	// (0x00063b77) cell_vkbss_key_g1_ParamLimits

0x87f1,	// (0x00063b77) cell_vkbss_key_g1

0x880b,	// (0x00063b91) cell_vkbss_key_t1_ParamLimits

0x880b,	// (0x00063b91) cell_vkbss_key_t1

0x185e,	// (0x0005cbe4) cell_ituss_key_pane_ParamLimits

0x185e,	// (0x0005cbe4) cell_ituss_key_pane

0x8836,	// (0x00063bbc) bg_cell_ituss_key_g1_ParamLimits

0x8836,	// (0x00063bbc) bg_cell_ituss_key_g1

0x8842,	// (0x00063bc8) cell_ituss_key_pane_g1_ParamLimits

0x8842,	// (0x00063bc8) cell_ituss_key_pane_g1

0x186f,	// (0x0005cbf5) cell_ituss_key_pane_g2_ParamLimits

0x186f,	// (0x0005cbf5) cell_ituss_key_pane_g2

0x0002,

0xfef9,	// (0x0006b27f) cell_ituss_key_pane_g_ParamLimits

0xfef9,	// (0x0006b27f) cell_ituss_key_pane_g

0x189b,	// (0x0005cc21) cell_ituss_key_t1_ParamLimits

0x189b,	// (0x0005cc21) cell_ituss_key_t1

0x18d5,	// (0x0005cc5b) cell_ituss_key_t2_ParamLimits

0x18d5,	// (0x0005cc5b) cell_ituss_key_t2

0x1906,	// (0x0005cc8c) cell_ituss_key_t3_ParamLimits

0x1906,	// (0x0005cc8c) cell_ituss_key_t3

0x18d5,	// (0x0005cc5b) cell_ituss_key_t4_ParamLimits

0x18d5,	// (0x0005cc5b) cell_ituss_key_t4

0x0004,

0xff00,	// (0x0006b286) cell_ituss_key_t_ParamLimits

0xff00,	// (0x0006b286) cell_ituss_key_t

0x8868,	// (0x00063bee) cell_vkbss_key_3p_pane_g1

0x8870,	// (0x00063bf6) cell_vkbss_key_3p_pane_g2

0x8878,	// (0x00063bfe) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x0006b291) cell_vkbss_key_3p_pane_g

0xe70b,	// (0x00069a91) bg_popup_fep_char_preview_window_cp02

0x1949,	// (0x0005cccf) popup_fep_char_pre_window_t1

0xe29f,	// (0x00069625) main_ai5_sk_pane

0x8390,	// (0x00063716) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x839c,	// (0x00063722) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x83b1,	// (0x00063737) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x83bd,	// (0x00063743) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfedd,	// (0x0006b263) cell_contacts_ai5_widget_pane_g_ParamLimits

0x83c9,	// (0x0006374f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x899c,	// (0x00063d22) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe64e,	// (0x000699d4) main_ai5_sk_pane_g1

0x2823,	// (0x0005dba9) popup_query_code_window_g1

0x1803,	// (0x0005cb89) popup_fep_vkb_icf_pane

0x1819,	// (0x0005cb9f) popup_fep_vtchi_icf_pane

0x8889,	// (0x00063c0f) bg_icf_pane

0x8895,	// (0x00063c1b) list_vkb_icf_pane

0x88a1,	// (0x00063c27) bg_icf_pane_cp01

0x88ad,	// (0x00063c33) vtchi_icf_list_pane

0x88be,	// (0x00063c44) list_vkb_icf_pane_t1_ParamLimits

0x88be,	// (0x00063c44) list_vkb_icf_pane_t1

0x88d4,	// (0x00063c5a) vtchi_icf_list_pane_t1_ParamLimits

0x88d4,	// (0x00063c5a) vtchi_icf_list_pane_t1

0x17ed,	// (0x0005cb73) popup_fep_ituss_window_ParamLimits

0x1819,	// (0x0005cb9f) popup_fep_vtchi_icf_pane_ParamLimits

0x87bc,	// (0x00063b42) ituss_keypad_pane_ParamLimits

0x1830,	// (0x0005cbb6) ituss_sks_pane

0x8889,	// (0x00063c0f) bg_icf_pane_ParamLimits

0x17c9,	// (0x0005cb4f) icf_edit_indi_pane_ParamLimits

0x17c9,	// (0x0005cb4f) icf_edit_indi_pane

0x8895,	// (0x00063c1b) list_vkb_icf_pane_ParamLimits

0x88a1,	// (0x00063c27) bg_icf_pane_cp01_ParamLimits

0x17d8,	// (0x0005cb5e) icf_edit_indi_pane_cp01_ParamLimits

0x17d8,	// (0x0005cb5e) icf_edit_indi_pane_cp01

0x88b5,	// (0x00063c3b) vtchi_query_pane

0x0ab7,	// (0x0005be3d) icf_edit_indi_pane_g1_ParamLimits

0x0ab7,	// (0x0005be3d) icf_edit_indi_pane_g1

0x196b,	// (0x0005ccf1) icf_edit_indi_pane_g2_ParamLimits

0x196b,	// (0x0005ccf1) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006b2a9) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006b2a9) icf_edit_indi_pane_g

0x197a,	// (0x0005cd00) icf_edit_indi_pane_t1

0x88ec,	// (0x00063c72) bg_input_focus_pane_cp042

0x6321,	// (0x000616a7) vtchi_button_pane

0x88f5,	// (0x00063c7b) vtchi_query_pane_t1

0x8903,	// (0x00063c89) vtchi_query_pane_t2

0x8911,	// (0x00063c97) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006b298) vtchi_query_pane_t

0xe70b,	// (0x00069a91) bg_button_pane_cp13

0x891f,	// (0x00063ca5) vtchi_button_pane_g1

0x1958,	// (0x0005ccde) ituss_sks_pane_g1

0x1963,	// (0x0005cce9) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x0006b29f) ituss_sks_pane_g

0x8927,	// (0x00063cad) ituss_sks_pane_t1

0x8935,	// (0x00063cbb) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x0006b2a4) ituss_sks_pane_t

0x461c,	// (0x0005f9a2) indicator_nsta_pane_cp_g1

0x4625,	// (0x0005f9ab) indicator_nsta_pane_cp_g2

0x462d,	// (0x0005f9b3) indicator_nsta_pane_cp_g3

0x4635,	// (0x0005f9bb) indicator_nsta_pane_cp_g4

0x463d,	// (0x0005f9c3) indicator_nsta_pane_cp_g5

0x4645,	// (0x0005f9cb) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x0006ae41) indicator_nsta_pane_cp_g

0xddc2,	// (0x00069148) cell_graphic2_pane_t2_ParamLimits

0xddc2,	// (0x00069148) cell_graphic2_pane_t2

0x0001,

0xfdd4,	// (0x0006b15a) cell_graphic2_pane_t_ParamLimits

0xfdd4,	// (0x0006b15a) cell_graphic2_pane_t

0xddf8,	// (0x0006917e) cell_graphic2_control_pane_t1

0xaa41,	// (0x00065dc7) signal_pane_g3_ParamLimits

0xaa41,	// (0x00065dc7) signal_pane_g3

0xaa55,	// (0x00065ddb) signal_pane_g4_ParamLimits

0xaa55,	// (0x00065ddb) signal_pane_g4

0x8796,	// (0x00063b1c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8796,	// (0x00063b1c) cell_ai5_widget_list_row_pane_t3

0x8856,	// (0x00063bdc) cell_ituss_key_pane_t1_ParamLimits

0x8856,	// (0x00063bdc) cell_ituss_key_pane_t1

0x24a0,	// (0x0005d826) form_field_data_wide_pane_vc_t2_ParamLimits

0x24a0,	// (0x0005d826) form_field_data_wide_pane_vc_t2

0x24b4,	// (0x0005d83a) form_field_data_wide_pane_vc_t3_ParamLimits

0x24b4,	// (0x0005d83a) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0006ab8f) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0006ab8f) form_field_data_wide_pane_vc_t

0x42cd,	// (0x0005f653) form_field_slider_wide_pane_vc_t3_ParamLimits

0x42cd,	// (0x0005f653) form_field_slider_wide_pane_vc_t3

0x43a3,	// (0x0005f729) form_field_popup_wide_pane_vc_t2_ParamLimits

0x43a3,	// (0x0005f729) form_field_popup_wide_pane_vc_t2

0x43ba,	// (0x0005f740) form_field_popup_wide_pane_vc_t3_ParamLimits

0x43ba,	// (0x0005f740) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x0006ae30) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x0006ae30) form_field_popup_wide_pane_vc_t

0xc2d5,	// (0x0006765b) aid_fshwr2_btn_pane_ParamLimits

0xc2e6,	// (0x0006766c) aid_fshwr2_syb_pane_ParamLimits

0xc2f7,	// (0x0006767d) aid_fshwr2_txt_pane_ParamLimits

0x0e38,	// (0x0005c1be) fshwr2_bg_pane_ParamLimits

0xc303,	// (0x00067689) fshwr2_func_candi_pane_ParamLimits

0xc324,	// (0x000676aa) fshwr2_hwr_syb_pane_ParamLimits

0xc341,	// (0x000676c7) fshwr2_icf_pane_ParamLimits

0x3a82,	// (0x0005ee08) list_double_graphic_pane_vc_g4_ParamLimits

0x3a82,	// (0x0005ee08) list_double_graphic_pane_vc_g4

0x188f,	// (0x0005cc15) cell_ituss_key_pane_g3_ParamLimits

0x188f,	// (0x0005cc15) cell_ituss_key_pane_g3

0x1937,	// (0x0005ccbd) cell_ituss_key_t5_ParamLimits

0x1937,	// (0x0005ccbd) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

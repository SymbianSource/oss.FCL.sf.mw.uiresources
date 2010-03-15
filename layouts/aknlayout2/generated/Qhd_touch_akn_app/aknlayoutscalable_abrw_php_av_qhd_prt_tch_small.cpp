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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002adfc };

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
0x7650,	// (0x0003244c) Screen

0x7664,	// (0x00032460) application_window_ParamLimits

0x7664,	// (0x00032460) application_window

0x767e,	// (0x0003247a) screen_g1

0x49ae,	// (0x0002f7aa) area_bottom_pane_ParamLimits

0x49ae,	// (0x0002f7aa) area_bottom_pane

0x4a6e,	// (0x0002f86a) area_top_pane_ParamLimits

0x4a6e,	// (0x0002f86a) area_top_pane

0x4b0c,	// (0x0002f908) main_pane_ParamLimits

0x4b0c,	// (0x0002f908) main_pane

0x7688,	// (0x00032484) misc_graphics

0x9672,	// (0x0003446e) battery_pane_ParamLimits

0x9672,	// (0x0003446e) battery_pane

0xa32a,	// (0x00035126) bg_status_flat_pane_g8

0xa332,	// (0x0003512e) bg_status_flat_pane_g9

0x9734,	// (0x00034530) context_pane_ParamLimits

0x9734,	// (0x00034530) context_pane

0x984a,	// (0x00034646) navi_pane_ParamLimits

0x984a,	// (0x00034646) navi_pane

0x98c8,	// (0x000346c4) signal_pane_ParamLimits

0x98c8,	// (0x000346c4) signal_pane

0x0008,

0xf87f,	// (0x0003a67b) bg_status_flat_pane_g

0x9935,	// (0x00034731) status_pane_g1_ParamLimits

0x9935,	// (0x00034731) status_pane_g1

0x9941,	// (0x0003473d) status_pane_g2_ParamLimits

0x9941,	// (0x0003473d) status_pane_g2

0x994d,	// (0x00034749) status_pane_g3_ParamLimits

0x994d,	// (0x00034749) status_pane_g3

0x0004,

0xf7a6,	// (0x0003a5a2) status_pane_g_ParamLimits

0xf7a6,	// (0x0003a5a2) status_pane_g

0x9981,	// (0x0003477d) title_pane_ParamLimits

0x9981,	// (0x0003477d) title_pane

0x99be,	// (0x000347ba) uni_indicator_pane_ParamLimits

0x99be,	// (0x000347ba) uni_indicator_pane

0x959a,	// (0x00034396) bg_list_pane_ParamLimits

0x959a,	// (0x00034396) bg_list_pane

0x5b61,	// (0x0003095d) find_pane

0x95ba,	// (0x000343b6) listscroll_app_pane_ParamLimits

0x95ba,	// (0x000343b6) listscroll_app_pane

0x95c6,	// (0x000343c2) listscroll_form_pane

0x48e2,	// (0x0002f6de) listscroll_gen_pane_ParamLimits

0x48e2,	// (0x0002f6de) listscroll_gen_pane

0x95c6,	// (0x000343c2) listscroll_set_pane

0x87fb,	// (0x000335f7) main_idle_act_pane

0x92a0,	// (0x0003409c) main_idle_trad_pane

0x92a0,	// (0x0003409c) main_list_empty_pane

0x95e0,	// (0x000343dc) main_midp_pane

0x95ec,	// (0x000343e8) main_pane_g1_ParamLimits

0x95ec,	// (0x000343e8) main_pane_g1

0x5b77,	// (0x00030973) popup_ai_message_window_ParamLimits

0x5b77,	// (0x00030973) popup_ai_message_window

0x5c25,	// (0x00030a21) popup_fep_china_uni_window_ParamLimits

0x5c25,	// (0x00030a21) popup_fep_china_uni_window

0x5c81,	// (0x00030a7d) popup_fep_japan_candidate_window_ParamLimits

0x5c81,	// (0x00030a7d) popup_fep_japan_candidate_window

0x5ca1,	// (0x00030a9d) popup_fep_japan_predictive_window_ParamLimits

0x5ca1,	// (0x00030a9d) popup_fep_japan_predictive_window

0x5cd1,	// (0x00030acd) popup_find_window

0x5cde,	// (0x00030ada) popup_grid_graphic_window_ParamLimits

0x5cde,	// (0x00030ada) popup_grid_graphic_window

0x5d06,	// (0x00030b02) popup_large_graphic_colour_window

0x5d2c,	// (0x00030b28) popup_menu_window_ParamLimits

0x5d2c,	// (0x00030b28) popup_menu_window

0x5ee4,	// (0x00030ce0) popup_note_image_window

0x5ed0,	// (0x00030ccc) popup_note_wait_window_ParamLimits

0x5ed0,	// (0x00030ccc) popup_note_wait_window

0x5ed0,	// (0x00030ccc) popup_note_window_ParamLimits

0x5ed0,	// (0x00030ccc) popup_note_window

0x5f3a,	// (0x00030d36) popup_query_code_window_ParamLimits

0x5f3a,	// (0x00030d36) popup_query_code_window

0x5f4e,	// (0x00030d4a) popup_query_data_code_window_ParamLimits

0x5f4e,	// (0x00030d4a) popup_query_data_code_window

0x5f6b,	// (0x00030d67) popup_query_data_window_ParamLimits

0x5f6b,	// (0x00030d67) popup_query_data_window

0x5f87,	// (0x00030d83) popup_query_sat_info_window_ParamLimits

0x5f87,	// (0x00030d83) popup_query_sat_info_window

0x5fc0,	// (0x00030dbc) popup_snote_single_graphic_window_ParamLimits

0x5fc0,	// (0x00030dbc) popup_snote_single_graphic_window

0x5fc0,	// (0x00030dbc) popup_snote_single_text_window_ParamLimits

0x5fc0,	// (0x00030dbc) popup_snote_single_text_window

0x5fd5,	// (0x00030dd1) popup_sub_window_general

0x6105,	// (0x00030f01) popup_window_general_ParamLimits

0x6105,	// (0x00030f01) popup_window_general

0x95fa,	// (0x000343f6) power_save_pane

0x59fd,	// (0x000307f9) control_pane_g1_ParamLimits

0x59fd,	// (0x000307f9) control_pane_g1

0x5a24,	// (0x00030820) control_pane_g2_ParamLimits

0x5a24,	// (0x00030820) control_pane_g2

0x955d,	// (0x00034359) control_pane_g3_ParamLimits

0x955d,	// (0x00034359) control_pane_g3

0x0007,

0xf78e,	// (0x0003a58a) control_pane_g_ParamLimits

0xf78e,	// (0x0003a58a) control_pane_g

0x5a6e,	// (0x0003086a) control_pane_t1_ParamLimits

0x5a6e,	// (0x0003086a) control_pane_t1

0x5aba,	// (0x000308b6) control_pane_t2_ParamLimits

0x5aba,	// (0x000308b6) control_pane_t2

0x0002,

0xf79f,	// (0x0003a59b) control_pane_t_ParamLimits

0xf79f,	// (0x0003a59b) control_pane_t

0x947e,	// (0x0003427a) navi_navi_volume_pane_cp1

0x9487,	// (0x00034283) status_small_icon_pane

0x948f,	// (0x0003428b) status_small_pane_g1_ParamLimits

0x948f,	// (0x0003428b) status_small_pane_g1

0x94c3,	// (0x000342bf) status_small_pane_g2_ParamLimits

0x94c3,	// (0x000342bf) status_small_pane_g2

0x94cf,	// (0x000342cb) status_small_pane_g3_ParamLimits

0x94cf,	// (0x000342cb) status_small_pane_g3

0x94db,	// (0x000342d7) status_small_pane_g4_ParamLimits

0x94db,	// (0x000342d7) status_small_pane_g4

0x94e7,	// (0x000342e3) status_small_pane_g5_ParamLimits

0x94e7,	// (0x000342e3) status_small_pane_g5

0x94f6,	// (0x000342f2) status_small_pane_g6_ParamLimits

0x94f6,	// (0x000342f2) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003a579) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003a579) status_small_pane_g

0x9526,	// (0x00034322) status_small_pane_t1

0x9549,	// (0x00034345) status_small_wait_pane_ParamLimits

0x9549,	// (0x00034345) status_small_wait_pane

0x8d1d,	// (0x00033b19) aid_levels_signal_ParamLimits

0x8d1d,	// (0x00033b19) aid_levels_signal

0x8d2f,	// (0x00033b2b) signal_pane_g1_ParamLimits

0x8d2f,	// (0x00033b2b) signal_pane_g1

0x8d44,	// (0x00033b40) signal_pane_g2_ParamLimits

0x8d44,	// (0x00033b40) signal_pane_g2

0x0003,

0xf70e,	// (0x0003a50a) signal_pane_g_ParamLimits

0xf70e,	// (0x0003a50a) signal_pane_g

0x8d7f,	// (0x00033b7b) context_pane_g1

0x7692,	// (0x0003248e) title_pane_g1

0x76c8,	// (0x000324c4) title_pane_t1

0x7730,	// (0x0003252c) title_pane_t2

0x7756,	// (0x00032552) title_pane_t3

0x0002,

0xf55d,	// (0x0003a359) title_pane_t

0x99d6,	// (0x000347d2) aid_levels_battery_ParamLimits

0x99d6,	// (0x000347d2) aid_levels_battery

0x99ea,	// (0x000347e6) battery_pane_g1_ParamLimits

0x99ea,	// (0x000347e6) battery_pane_g1

0x9a00,	// (0x000347fc) battery_pane_g2_ParamLimits

0x9a00,	// (0x000347fc) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003a5ad) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003a5ad) battery_pane_g

0xac6c,	// (0x00035a68) uni_indicator_pane_g1

0xac81,	// (0x00035a7d) uni_indicator_pane_g2

0xac97,	// (0x00035a93) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0003a723) uni_indicator_pane_g

0x9112,	// (0x00033f0e) navi_icon_pane_ParamLimits

0x9112,	// (0x00033f0e) navi_icon_pane

0x905b,	// (0x00033e57) navi_midp_pane

0x912e,	// (0x00033f2a) navi_navi_pane

0x9138,	// (0x00033f34) navi_text_pane_ParamLimits

0x9138,	// (0x00033f34) navi_text_pane

0x767e,	// (0x0003247a) status_small_wait_pane_g1

0x81c8,	// (0x00032fc4) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0003a71e) status_small_wait_pane_g

0xa991,	// (0x0003578d) navi_navi_icon_text_pane

0xa999,	// (0x00035795) navi_navi_pane_g1_ParamLimits

0xa999,	// (0x00035795) navi_navi_pane_g1

0xa9ab,	// (0x000357a7) navi_navi_pane_g2_ParamLimits

0xa9ab,	// (0x000357a7) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0003a6ec) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0003a6ec) navi_navi_pane_g

0xa9bd,	// (0x000357b9) navi_navi_tabs_pane

0xa9c6,	// (0x000357c2) navi_navi_text_pane

0xa991,	// (0x0003578d) navi_navi_volume_pane

0xa96d,	// (0x00035769) navi_text_pane_t1

0xa961,	// (0x0003575d) navi_icon_pane_g1

0xa8b4,	// (0x000356b0) navi_navi_text_pane_t1

0x64ce,	// (0x000312ca) navi_navi_volume_pane_g1

0x64d6,	// (0x000312d2) volume_small_pane

0xa81a,	// (0x00035616) navi_navi_icon_text_pane_g1

0xa822,	// (0x0003561e) navi_navi_icon_text_pane_t1

0x912e,	// (0x00033f2a) navi_tabs_2_long_pane

0x912e,	// (0x00033f2a) navi_tabs_2_pane

0x912e,	// (0x00033f2a) navi_tabs_3_long_pane

0x912e,	// (0x00033f2a) navi_tabs_3_pane

0x912e,	// (0x00033f2a) navi_tabs_4_pane

0x64ae,	// (0x000312aa) tabs_2_active_pane_ParamLimits

0x64ae,	// (0x000312aa) tabs_2_active_pane

0x64be,	// (0x000312ba) tabs_2_passive_pane_ParamLimits

0x64be,	// (0x000312ba) tabs_2_passive_pane

0x647c,	// (0x00031278) tabs_3_active_pane_ParamLimits

0x647c,	// (0x00031278) tabs_3_active_pane

0x648c,	// (0x00031288) tabs_3_passive_pane_ParamLimits

0x648c,	// (0x00031288) tabs_3_passive_pane

0x649d,	// (0x00031299) tabs_3_passive_pane_cp_ParamLimits

0x649d,	// (0x00031299) tabs_3_passive_pane_cp

0x6438,	// (0x00031234) tabs_4_active_pane_ParamLimits

0x6438,	// (0x00031234) tabs_4_active_pane

0x6449,	// (0x00031245) tabs_4_passive_pane_ParamLimits

0x6449,	// (0x00031245) tabs_4_passive_pane

0x645a,	// (0x00031256) tabs_4_passive_pane_cp_ParamLimits

0x645a,	// (0x00031256) tabs_4_passive_pane_cp

0x646b,	// (0x00031267) tabs_4_passive_pane_cp2_ParamLimits

0x646b,	// (0x00031267) tabs_4_passive_pane_cp2

0x6414,	// (0x00031210) tabs_2_long_active_pane_ParamLimits

0x6414,	// (0x00031210) tabs_2_long_active_pane

0x6426,	// (0x00031222) tabs_2_long_passive_pane_ParamLimits

0x6426,	// (0x00031222) tabs_2_long_passive_pane

0x63d5,	// (0x000311d1) tabs_3_long_active_pane_ParamLimits

0x63d5,	// (0x000311d1) tabs_3_long_active_pane

0x63e8,	// (0x000311e4) tabs_3_long_passive_pane_ParamLimits

0x63e8,	// (0x000311e4) tabs_3_long_passive_pane

0x6401,	// (0x000311fd) tabs_3_long_passive_pane_cp_ParamLimits

0x6401,	// (0x000311fd) tabs_3_long_passive_pane_cp

0x637b,	// (0x00031177) volume_small_pane_g1

0x6384,	// (0x00031180) volume_small_pane_g2

0x638d,	// (0x00031189) volume_small_pane_g3

0x6396,	// (0x00031192) volume_small_pane_g4

0x639f,	// (0x0003119b) volume_small_pane_g5

0x63a8,	// (0x000311a4) volume_small_pane_g6

0x63b1,	// (0x000311ad) volume_small_pane_g7

0x63ba,	// (0x000311b6) volume_small_pane_g8

0x63c3,	// (0x000311bf) volume_small_pane_g9

0x63cc,	// (0x000311c8) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0003a6b8) volume_small_pane_g

0x7768,	// (0x00032564) bg_active_tab_pane_cp2_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp2

0x7776,	// (0x00032572) tabs_3_active_pane_g1

0x777e,	// (0x0003257a) tabs_3_active_pane_t1

0x7768,	// (0x00032564) bg_passive_tab_pane_cp2_ParamLimits

0x7768,	// (0x00032564) bg_passive_tab_pane_cp2

0x7776,	// (0x00032572) tabs_3_passive_pane_g1

0x777e,	// (0x0003257a) tabs_3_passive_pane_t1

0x7768,	// (0x00032564) bg_active_tab_pane_cp3_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp3

0x7790,	// (0x0003258c) tabs_4_active_pane_g1

0x7798,	// (0x00032594) tabs_4_active_pane_t1

0x7768,	// (0x00032564) bg_passive_tab_pane_cp3_ParamLimits

0x7768,	// (0x00032564) bg_passive_tab_pane_cp3

0x7790,	// (0x0003258c) tabs_4_1_passive_pane_g1

0x7798,	// (0x00032594) tabs_4_1_passive_pane_t1

0x95e0,	// (0x000343dc) list_highlight_pane_cp2

0xaef5,	// (0x00035cf1) list_set_pane_ParamLimits

0xaef5,	// (0x00035cf1) list_set_pane

0xaf9b,	// (0x00035d97) main_pane_set_t1_ParamLimits

0xaf9b,	// (0x00035d97) main_pane_set_t1

0xafbb,	// (0x00035db7) main_pane_set_t2_ParamLimits

0xafbb,	// (0x00035db7) main_pane_set_t2

0xafcf,	// (0x00035dcb) main_pane_set_t3_ParamLimits

0xafcf,	// (0x00035dcb) main_pane_set_t3

0xafe1,	// (0x00035ddd) main_pane_set_t4_ParamLimits

0xafe1,	// (0x00035ddd) main_pane_set_t4

0x0003,

0xf98c,	// (0x0003a788) main_pane_set_t_ParamLimits

0xf98c,	// (0x0003a788) main_pane_set_t

0xaff3,	// (0x00035def) setting_code_pane

0xafff,	// (0x00035dfb) setting_slider_graphic_pane

0xafff,	// (0x00035dfb) setting_slider_pane

0xafff,	// (0x00035dfb) setting_text_pane

0xafff,	// (0x00035dfb) setting_volume_pane

0x4d51,	// (0x0002fb4d) volume_set_pane

0x7768,	// (0x00032564) bg_set_opt_pane_cp

0x4d59,	// (0x0002fb55) setting_slider_pane_t1

0x4d72,	// (0x0002fb6e) setting_slider_pane_t2

0x4d8c,	// (0x0002fb88) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003a360) setting_slider_pane_t

0x4da4,	// (0x0002fba0) slider_set_pane

0x7688,	// (0x00032484) bg_set_opt_pane_cp2

0x77aa,	// (0x000325a6) setting_slider_graphic_pane_g1

0x4dba,	// (0x0002fbb6) setting_slider_graphic_pane_t1

0x4dca,	// (0x0002fbc6) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003a367) setting_slider_graphic_pane_t

0x4dda,	// (0x0002fbd6) slider_set_pane_cp

0x7688,	// (0x00032484) input_focus_pane_cp1

0xaeb4,	// (0x00035cb0) list_set_text_pane

0x767e,	// (0x0003247a) setting_text_pane_g1

0x7688,	// (0x00032484) input_focus_pane_cp2

0x767e,	// (0x0003247a) setting_code_pane_g1

0x77b3,	// (0x000325af) setting_code_pane_t1

0x3f0f,	// (0x0002ed0b) set_text_pane_t1_ParamLimits

0x3f0f,	// (0x0002ed0b) set_text_pane_t1

0x8672,	// (0x0003346e) set_opt_bg_pane_g1

0x867a,	// (0x00033476) set_opt_bg_pane_g2

0xae8e,	// (0x00035c8a) set_opt_bg_pane_g3

0x868a,	// (0x00033486) set_opt_bg_pane_g4

0x8692,	// (0x0003348e) set_opt_bg_pane_g5

0x869a,	// (0x00033496) set_opt_bg_pane_g6

0xae98,	// (0x00035c94) set_opt_bg_pane_g7

0xaea0,	// (0x00035c9c) set_opt_bg_pane_g8

0xaeaa,	// (0x00035ca6) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0003a775) set_opt_bg_pane_g

0xae81,	// (0x00035c7d) slider_set_pane_g1

0x656b,	// (0x00031367) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0003a766) slider_set_pane_g

0x64df,	// (0x000312db) volume_set_pane_g1

0x64e7,	// (0x000312e3) volume_set_pane_g2

0x64ef,	// (0x000312eb) volume_set_pane_g3

0x64f7,	// (0x000312f3) volume_set_pane_g4

0x64ff,	// (0x000312fb) volume_set_pane_g5

0x6507,	// (0x00031303) volume_set_pane_g6

0x650f,	// (0x0003130b) volume_set_pane_g7

0x6517,	// (0x00031313) volume_set_pane_g8

0x651f,	// (0x0003131b) volume_set_pane_g9

0x6527,	// (0x00031323) volume_set_pane_g10

0x0009,

0xf942,	// (0x0003a73e) volume_set_pane_g

0x77c1,	// (0x000325bd) indicator_pane_ParamLimits

0x77c1,	// (0x000325bd) indicator_pane

0x77cd,	// (0x000325c9) main_idle_pane_g2_ParamLimits

0x77cd,	// (0x000325c9) main_idle_pane_g2

0x77f5,	// (0x000325f1) main_pane_idle_g1_ParamLimits

0x77f5,	// (0x000325f1) main_pane_idle_g1

0x7802,	// (0x000325fe) popup_clock_digital_analogue_window_ParamLimits

0x7802,	// (0x000325fe) popup_clock_digital_analogue_window

0x7819,	// (0x00032615) soft_indicator_pane_ParamLimits

0x7819,	// (0x00032615) soft_indicator_pane

0x7825,	// (0x00032621) wallpaper_pane_ParamLimits

0x7825,	// (0x00032621) wallpaper_pane

0x767e,	// (0x0003247a) wallpaper_pane_g1

0x7839,	// (0x00032635) indicator_pane_g1_ParamLimits

0x7839,	// (0x00032635) indicator_pane_g1

0xb28e,	// (0x0003608a) navi_navi_icon_text_pane_srt_g1

0x7854,	// (0x00032650) soft_indicator_pane_t1

0x786e,	// (0x0003266a) aid_ps_area_pane

0x787f,	// (0x0003267b) aid_ps_clock_pane

0x788d,	// (0x00032689) aid_ps_indicator_pane

0x7899,	// (0x00032695) indicator_ps_pane_ParamLimits

0x7899,	// (0x00032695) indicator_ps_pane

0x78a8,	// (0x000326a4) power_save_pane_g1_ParamLimits

0x78a8,	// (0x000326a4) power_save_pane_g1

0x78b4,	// (0x000326b0) power_save_pane_g2_ParamLimits

0x78b4,	// (0x000326b0) power_save_pane_g2

0x4962,	// (0x0002f75e) aid_navinavi_width_pane

0x786e,	// (0x0003266a) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003a36c) power_save_pane_g_ParamLimits

0xf570,	// (0x0003a36c) power_save_pane_g

0x78c2,	// (0x000326be) power_save_pane_t1_ParamLimits

0x78c2,	// (0x000326be) power_save_pane_t1

0x787f,	// (0x0003267b) aid_ps_clock_pane_ParamLimits

0x788d,	// (0x00032689) aid_ps_indicator_pane_ParamLimits

0x78d4,	// (0x000326d0) power_save_pane_t4_ParamLimits

0x78d4,	// (0x000326d0) power_save_pane_t4

0x0001,

0xf575,	// (0x0003a371) power_save_pane_t_ParamLimits

0xf575,	// (0x0003a371) power_save_pane_t

0x78fe,	// (0x000326fa) power_save_t3_ParamLimits

0x78fe,	// (0x000326fa) power_save_t3

0x78e9,	// (0x000326e5) power_save_t2_ParamLimits

0x78e9,	// (0x000326e5) power_save_t2

0x7913,	// (0x0003270f) indicator_ps_pane_g1

0x791c,	// (0x00032718) ai_gene_pane_ParamLimits

0x791c,	// (0x00032718) ai_gene_pane

0x7928,	// (0x00032724) ai_links_pane_ParamLimits

0x7928,	// (0x00032724) ai_links_pane

0x7934,	// (0x00032730) indicator_pane_cp1_ParamLimits

0x7934,	// (0x00032730) indicator_pane_cp1

0x7940,	// (0x0003273c) main_pane_idle_g1_cp_ParamLimits

0x7940,	// (0x0003273c) main_pane_idle_g1_cp

0x794c,	// (0x00032748) popup_ai_links_title_window

0x7955,	// (0x00032751) soft_indicator_pane_cp1_ParamLimits

0x7955,	// (0x00032751) soft_indicator_pane_cp1

0xac5a,	// (0x00035a56) ai_links_pane_g1

0xac63,	// (0x00035a5f) grid_ai_links_pane

0xac3d,	// (0x00035a39) ai_gene_pane_1

0xac48,	// (0x00035a44) ai_gene_pane_2

0xac51,	// (0x00035a4d) list_highlight_pane_cp4

0xac21,	// (0x00035a1d) cell_ai_link_pane_ParamLimits

0xac21,	// (0x00035a1d) cell_ai_link_pane

0xac19,	// (0x00035a15) cell_ai_link_pane_g1

0x81c8,	// (0x00032fc4) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0003a719) cell_ai_link_pane_g

0x7688,	// (0x00032484) grid_highlight_cp2

0x7688,	// (0x00032484) bg_popup_sub_pane_cp1

0x796f,	// (0x0003276b) popup_ai_links_title_window_t1

0xab67,	// (0x00035963) ai_gene_pane_1_g1_ParamLimits

0xab67,	// (0x00035963) ai_gene_pane_1_g1

0xab73,	// (0x0003596f) ai_gene_pane_1_g2_ParamLimits

0xab73,	// (0x0003596f) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0003a70f) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0003a70f) ai_gene_pane_1_g

0xab80,	// (0x0003597c) ai_gene_pane_1_t1_ParamLimits

0xab80,	// (0x0003597c) ai_gene_pane_1_t1

0xabb4,	// (0x000359b0) grid_ai_soft_ind_pane

0xab52,	// (0x0003594e) ai_gene_pane_2_t1_ParamLimits

0xab52,	// (0x0003594e) ai_gene_pane_2_t1

0x797e,	// (0x0003277a) main_pane_empty_t1_ParamLimits

0x797e,	// (0x0003277a) main_pane_empty_t1

0x7996,	// (0x00032792) main_pane_empty_t2_ParamLimits

0x7996,	// (0x00032792) main_pane_empty_t2

0x79ab,	// (0x000327a7) main_pane_empty_t3_ParamLimits

0x79ab,	// (0x000327a7) main_pane_empty_t3

0x79bd,	// (0x000327b9) main_pane_empty_t4_ParamLimits

0x79bd,	// (0x000327b9) main_pane_empty_t4

0x79cf,	// (0x000327cb) main_pane_empty_t5_ParamLimits

0x79cf,	// (0x000327cb) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003a376) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003a376) main_pane_empty_t

0x86c3,	// (0x000334bf) bg_popup_window_pane_ParamLimits

0x86c3,	// (0x000334bf) bg_popup_window_pane

0xa8c2,	// (0x000356be) find_popup_pane_cp2_ParamLimits

0xa8c2,	// (0x000356be) find_popup_pane_cp2

0xa8ce,	// (0x000356ca) heading_pane_ParamLimits

0xa8ce,	// (0x000356ca) heading_pane

0x7688,	// (0x00032484) bg_popup_sub_pane

0xa83c,	// (0x00035638) bg_popup_window_pane_g1_ParamLimits

0xa83c,	// (0x00035638) bg_popup_window_pane_g1

0xa848,	// (0x00035644) bg_popup_window_pane_g2_ParamLimits

0xa848,	// (0x00035644) bg_popup_window_pane_g2

0xa854,	// (0x00035650) bg_popup_window_pane_g3_ParamLimits

0xa854,	// (0x00035650) bg_popup_window_pane_g3

0xa860,	// (0x0003565c) bg_popup_window_pane_g4_ParamLimits

0xa860,	// (0x0003565c) bg_popup_window_pane_g4

0xa86c,	// (0x00035668) bg_popup_window_pane_g5_ParamLimits

0xa86c,	// (0x00035668) bg_popup_window_pane_g5

0xa878,	// (0x00035674) bg_popup_window_pane_g6_ParamLimits

0xa878,	// (0x00035674) bg_popup_window_pane_g6

0xa884,	// (0x00035680) bg_popup_window_pane_g7_ParamLimits

0xa884,	// (0x00035680) bg_popup_window_pane_g7

0xa890,	// (0x0003568c) bg_popup_window_pane_g8_ParamLimits

0xa890,	// (0x0003568c) bg_popup_window_pane_g8

0xa89c,	// (0x00035698) bg_popup_window_pane_g9_ParamLimits

0xa89c,	// (0x00035698) bg_popup_window_pane_g9

0xa8a8,	// (0x000356a4) bg_popup_window_pane_g10_ParamLimits

0xa8a8,	// (0x000356a4) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0003a6d7) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0003a6d7) bg_popup_window_pane_g

0xa7d1,	// (0x000355cd) bg_popup_heading_pane_ParamLimits

0xa7d1,	// (0x000355cd) bg_popup_heading_pane

0x66d4,	// (0x000314d0) tabs_4_passive_pane_cp_srt_ParamLimits

0x66d4,	// (0x000314d0) tabs_4_passive_pane_cp_srt

0x66e6,	// (0x000314e2) tabs_4_passive_pane_srt_ParamLimits

0xa7e5,	// (0x000355e1) heading_pane_g2

0x66e6,	// (0x000314e2) tabs_4_passive_pane_srt

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp3_srt

0xa7ed,	// (0x000355e9) heading_pane_t1_ParamLimits

0xa7ed,	// (0x000355e9) heading_pane_t1

0xa804,	// (0x00035600) heading_pane_t2_ParamLimits

0xa804,	// (0x00035600) heading_pane_t2

0x0001,

0xf8d6,	// (0x0003a6d2) heading_pane_t_ParamLimits

0xf8d6,	// (0x0003a6d2) heading_pane_t

0xa2f2,	// (0x000350ee) bg_popup_heading_pane_g1

0xa3a1,	// (0x0003519d) bg_popup_heading_pane_g2

0xa3ab,	// (0x000351a7) bg_popup_heading_pane_g3

0xa3b5,	// (0x000351b1) bg_popup_heading_pane_g4

0xa3bf,	// (0x000351bb) bg_popup_heading_pane_g5

0xa3c9,	// (0x000351c5) bg_popup_heading_pane_g6

0xa3d1,	// (0x000351cd) bg_popup_heading_pane_g7

0xa3d9,	// (0x000351d5) bg_popup_heading_pane_g8

0xa3e3,	// (0x000351df) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0003a68e) bg_popup_heading_pane_g

0x9ad8,	// (0x000348d4) bg_popup_sub_pane_g1

0x9ae8,	// (0x000348e4) bg_popup_sub_pane_g2

0x9ae0,	// (0x000348dc) bg_popup_sub_pane_g3

0x9af8,	// (0x000348f4) bg_popup_sub_pane_g4

0x9af0,	// (0x000348ec) bg_popup_sub_pane_g5

0x9b00,	// (0x000348fc) bg_popup_sub_pane_g6

0x9b08,	// (0x00034904) bg_popup_sub_pane_g7

0x9b18,	// (0x00034914) bg_popup_sub_pane_g8

0x9b10,	// (0x0003490c) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0003a668) bg_popup_sub_pane_g

0x79e3,	// (0x000327df) bg_popup_window_pane_cp5_ParamLimits

0x79e3,	// (0x000327df) bg_popup_window_pane_cp5

0x79ff,	// (0x000327fb) popup_note_window_g1_ParamLimits

0x79ff,	// (0x000327fb) popup_note_window_g1

0x7a0b,	// (0x00032807) popup_note_window_t1_ParamLimits

0x7a0b,	// (0x00032807) popup_note_window_t1

0x7a21,	// (0x0003281d) popup_note_window_t2_ParamLimits

0x7a21,	// (0x0003281d) popup_note_window_t2

0x7a37,	// (0x00032833) popup_note_window_t3_ParamLimits

0x7a37,	// (0x00032833) popup_note_window_t3

0x7a4d,	// (0x00032849) popup_note_window_t4_ParamLimits

0x7a4d,	// (0x00032849) popup_note_window_t4

0x7a75,	// (0x00032871) popup_note_window_t5_ParamLimits

0x7a75,	// (0x00032871) popup_note_window_t5

0x0004,

0xf585,	// (0x0003a381) popup_note_window_t_ParamLimits

0xf585,	// (0x0003a381) popup_note_window_t

0x7a99,	// (0x00032895) bg_popup_window_pane_cp6_ParamLimits

0x7a99,	// (0x00032895) bg_popup_window_pane_cp6

0xa26e,	// (0x0003506a) popup_note_image_window_g1_ParamLimits

0xa26e,	// (0x0003506a) popup_note_image_window_g1

0xa27a,	// (0x00035076) popup_note_image_window_g2_ParamLimits

0xa27a,	// (0x00035076) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0003a65c) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0003a65c) popup_note_image_window_g

0xa293,	// (0x0003508f) popup_note_image_window_t1_ParamLimits

0xa293,	// (0x0003508f) popup_note_image_window_t1

0xa2ac,	// (0x000350a8) popup_note_image_window_t2_ParamLimits

0xa2ac,	// (0x000350a8) popup_note_image_window_t2

0xa2c5,	// (0x000350c1) popup_note_image_window_t3_ParamLimits

0xa2c5,	// (0x000350c1) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0003a661) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0003a661) popup_note_image_window_t

0xa12f,	// (0x00034f2b) bg_popup_window_pane_cp7_ParamLimits

0xa12f,	// (0x00034f2b) bg_popup_window_pane_cp7

0xa15f,	// (0x00034f5b) popup_note_wait_window_g1_ParamLimits

0xa15f,	// (0x00034f5b) popup_note_wait_window_g1

0xa16b,	// (0x00034f67) popup_note_wait_window_g2_ParamLimits

0xa16b,	// (0x00034f67) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0003a64a) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0003a64a) popup_note_wait_window_g

0xa183,	// (0x00034f7f) popup_note_wait_window_t1_ParamLimits

0xa183,	// (0x00034f7f) popup_note_wait_window_t1

0xa1aa,	// (0x00034fa6) popup_note_wait_window_t2_ParamLimits

0xa1aa,	// (0x00034fa6) popup_note_wait_window_t2

0xa1c7,	// (0x00034fc3) popup_note_wait_window_t3_ParamLimits

0xa1c7,	// (0x00034fc3) popup_note_wait_window_t3

0xa1da,	// (0x00034fd6) popup_note_wait_window_t4_ParamLimits

0xa1da,	// (0x00034fd6) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0003a651) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0003a651) popup_note_wait_window_t

0xa1ff,	// (0x00034ffb) wait_bar_pane_ParamLimits

0xa1ff,	// (0x00034ffb) wait_bar_pane

0x7688,	// (0x00032484) wait_anim_pane

0x7688,	// (0x00032484) wait_border_pane

0x767e,	// (0x0003247a) wait_anim_pane_g1

0x767e,	// (0x0003247a) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003a505) wait_anim_pane_g

0xa0d3,	// (0x00034ecf) wait_border_pane_g1

0xa0de,	// (0x00034eda) wait_border_pane_g2

0xa0e7,	// (0x00034ee3) wait_border_pane_g3

0x0002,

0xf847,	// (0x0003a643) wait_border_pane_g

0x9f3e,	// (0x00034d3a) bg_popup_window_pane_cp16_ParamLimits

0x9f3e,	// (0x00034d3a) bg_popup_window_pane_cp16

0xa03e,	// (0x00034e3a) indicator_popup_pane_cp4_ParamLimits

0xa03e,	// (0x00034e3a) indicator_popup_pane_cp4

0xa052,	// (0x00034e4e) popup_query_data_window_t1_ParamLimits

0xa052,	// (0x00034e4e) popup_query_data_window_t1

0xa064,	// (0x00034e60) popup_query_data_window_t2_ParamLimits

0xa064,	// (0x00034e60) popup_query_data_window_t2

0xa07d,	// (0x00034e79) popup_query_data_window_t3_ParamLimits

0xa07d,	// (0x00034e79) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0003a63c) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0003a63c) popup_query_data_window_t

0xa097,	// (0x00034e93) query_popup_data_pane_ParamLimits

0xa097,	// (0x00034e93) query_popup_data_pane

0xa0ab,	// (0x00034ea7) query_popup_data_pane_cp1_ParamLimits

0xa0ab,	// (0x00034ea7) query_popup_data_pane_cp1

0x9f3e,	// (0x00034d3a) bg_popup_window_pane_cp10_ParamLimits

0x9f3e,	// (0x00034d3a) bg_popup_window_pane_cp10

0x9f70,	// (0x00034d6c) indicator_popup_pane_ParamLimits

0x9f70,	// (0x00034d6c) indicator_popup_pane

0x9f92,	// (0x00034d8e) popup_query_code_window_t1_ParamLimits

0x9f92,	// (0x00034d8e) popup_query_code_window_t1

0x9fac,	// (0x00034da8) popup_query_code_window_t2_ParamLimits

0x9fac,	// (0x00034da8) popup_query_code_window_t2

0x9ff5,	// (0x00034df1) popup_query_code_window_t3_ParamLimits

0x9ff5,	// (0x00034df1) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0003a635) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0003a635) popup_query_code_window_t

0xa024,	// (0x00034e20) query_popup_pane_ParamLimits

0xa024,	// (0x00034e20) query_popup_pane

0x7a99,	// (0x00032895) bg_popup_window_pane_cp15_ParamLimits

0x7a99,	// (0x00032895) bg_popup_window_pane_cp15

0x7ab7,	// (0x000328b3) indicator_popup_pane_cp1_ParamLimits

0x7ab7,	// (0x000328b3) indicator_popup_pane_cp1

0x7aca,	// (0x000328c6) indicator_popup_pane_cp2_ParamLimits

0x7aca,	// (0x000328c6) indicator_popup_pane_cp2

0x7add,	// (0x000328d9) popup_query_data_code_window_g1_ParamLimits

0x7add,	// (0x000328d9) popup_query_data_code_window_g1

0x7af0,	// (0x000328ec) popup_query_data_code_window_t1_ParamLimits

0x7af0,	// (0x000328ec) popup_query_data_code_window_t1

0x7b02,	// (0x000328fe) popup_query_data_code_window_t2_ParamLimits

0x7b02,	// (0x000328fe) popup_query_data_code_window_t2

0x7b14,	// (0x00032910) popup_query_data_code_window_t3_ParamLimits

0x7b14,	// (0x00032910) popup_query_data_code_window_t3

0x7b2a,	// (0x00032926) popup_query_data_code_window_t4_ParamLimits

0x7b2a,	// (0x00032926) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003a38c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003a38c) popup_query_data_code_window_t

0x61a9,	// (0x00030fa5) list_single_midp_graphic_pane_g3

0x7b42,	// (0x0003293e) query_popup_data_pane_cp2_ParamLimits

0x7b55,	// (0x00032951) query_popup_pane_cp2_ParamLimits

0x7b55,	// (0x00032951) query_popup_pane_cp2

0x7688,	// (0x00032484) bg_popup_window_pane_cp11

0x9f36,	// (0x00034d32) heading_pane_cp5

0x8280,	// (0x0003307c) listscroll_popup_info_pane

0x7688,	// (0x00032484) input_focus_pane_cp3

0x7b68,	// (0x00032964) query_popup_pane_t1

0x7b76,	// (0x00032972) list_popup_info_pane_ParamLimits

0x7b76,	// (0x00032972) list_popup_info_pane

0x81c8,	// (0x00032fc4) listscroll_popup_info_pane_g1

0x81d0,	// (0x00032fcc) scroll_pane_cp7

0x81da,	// (0x00032fd6) popup_info_list_pane_t1_ParamLimits

0x81da,	// (0x00032fd6) popup_info_list_pane_t1

0x81f4,	// (0x00032ff0) popup_info_list_pane_t2_ParamLimits

0x81f4,	// (0x00032ff0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003a395) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003a395) popup_info_list_pane_t

0x7688,	// (0x00032484) bg_popup_window_pane_cp12

0xb2a8,	// (0x000360a4) find_popup_pane

0x7768,	// (0x00032564) bg_popup_window_pane_cp3

0x820e,	// (0x0003300a) heading_pane_cp3

0x821a,	// (0x00033016) listscroll_popup_graphic_pane

0x7688,	// (0x00032484) bg_popup_window_pane_cp4

0x8276,	// (0x00033072) heading_pane_cp4

0x8280,	// (0x0003307c) listscroll_popup_colour_pane

0x8288,	// (0x00033084) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8288,	// (0x00033084) cell_large_graphic_colour_none_popup_pane

0x829c,	// (0x00033098) grid_large_graphic_colour_popup_pane_ParamLimits

0x829c,	// (0x00033098) grid_large_graphic_colour_popup_pane

0x82c8,	// (0x000330c4) listscroll_popup_colour_pane_g1_ParamLimits

0x82c8,	// (0x000330c4) listscroll_popup_colour_pane_g1

0x82df,	// (0x000330db) listscroll_popup_colour_pane_g2_ParamLimits

0x82df,	// (0x000330db) listscroll_popup_colour_pane_g2

0x82f6,	// (0x000330f2) listscroll_popup_colour_pane_g3_ParamLimits

0x82f6,	// (0x000330f2) listscroll_popup_colour_pane_g3

0x8306,	// (0x00033102) listscroll_popup_colour_pane_g4_ParamLimits

0x8306,	// (0x00033102) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003a39a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003a39a) listscroll_popup_colour_pane_g

0x831a,	// (0x00033116) scroll_pane_cp6_ParamLimits

0x831a,	// (0x00033116) scroll_pane_cp6

0x832c,	// (0x00033128) cell_large_graphic_colour_popup_pane_ParamLimits

0x832c,	// (0x00033128) cell_large_graphic_colour_popup_pane

0x834b,	// (0x00033147) cell_large_graphic_colour_none_popup_pane_t1

0x7688,	// (0x00032484) grid_highlight_pane_cp5

0x835a,	// (0x00033156) cell_large_graphic_colour_popup_pane_g1

0x8362,	// (0x0003315e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003a3a3) cell_large_graphic_colour_popup_pane_g

0x836a,	// (0x00033166) cell_large_graphic_colour_popup_pane_g2_copy1

0x8373,	// (0x0003316f) grid_highlight_pane_cp4

0x837b,	// (0x00033177) bg_popup_window_pane_cp8_ParamLimits

0x837b,	// (0x00033177) bg_popup_window_pane_cp8

0x8396,	// (0x00033192) popup_snote_single_text_window_g1_ParamLimits

0x8396,	// (0x00033192) popup_snote_single_text_window_g1

0x83a8,	// (0x000331a4) popup_snote_single_text_window_t1_ParamLimits

0x83a8,	// (0x000331a4) popup_snote_single_text_window_t1

0x83bb,	// (0x000331b7) popup_snote_single_text_window_t2_ParamLimits

0x83bb,	// (0x000331b7) popup_snote_single_text_window_t2

0x83ce,	// (0x000331ca) popup_snote_single_text_window_t3_ParamLimits

0x83ce,	// (0x000331ca) popup_snote_single_text_window_t3

0x8407,	// (0x00033203) popup_snote_single_text_window_t4_ParamLimits

0x8407,	// (0x00033203) popup_snote_single_text_window_t4

0x843b,	// (0x00033237) popup_snote_single_text_window_t5_ParamLimits

0x843b,	// (0x00033237) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003a3a8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003a3a8) popup_snote_single_text_window_t

0x846a,	// (0x00033266) bg_popup_window_pane_cp9_ParamLimits

0x846a,	// (0x00033266) bg_popup_window_pane_cp9

0x8396,	// (0x00033192) popup_snote_single_graphic_window_g1_ParamLimits

0x8396,	// (0x00033192) popup_snote_single_graphic_window_g1

0x8478,	// (0x00033274) popup_snote_single_graphic_window_g2_ParamLimits

0x8478,	// (0x00033274) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003a3b3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003a3b3) popup_snote_single_graphic_window_g

0x8484,	// (0x00033280) popup_snote_single_graphic_window_t1_ParamLimits

0x8484,	// (0x00033280) popup_snote_single_graphic_window_t1

0x8497,	// (0x00033293) popup_snote_single_graphic_window_t2_ParamLimits

0x8497,	// (0x00033293) popup_snote_single_graphic_window_t2

0x84aa,	// (0x000332a6) popup_snote_single_graphic_window_t3_ParamLimits

0x84aa,	// (0x000332a6) popup_snote_single_graphic_window_t3

0x84e3,	// (0x000332df) popup_snote_single_graphic_window_t4_ParamLimits

0x84e3,	// (0x000332df) popup_snote_single_graphic_window_t4

0x8517,	// (0x00033313) popup_snote_single_graphic_window_t5_ParamLimits

0x8517,	// (0x00033313) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003a3b8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003a3b8) popup_snote_single_graphic_window_t

0xb1ec,	// (0x00035fe8) grid_graphic_popup_pane_ParamLimits

0xb1ec,	// (0x00035fe8) grid_graphic_popup_pane

0xb214,	// (0x00036010) listscroll_popup_graphic_pane_g1_ParamLimits

0xb214,	// (0x00036010) listscroll_popup_graphic_pane_g1

0xb228,	// (0x00036024) listscroll_popup_graphic_pane_g2_ParamLimits

0xb228,	// (0x00036024) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0003a7b2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0003a7b2) listscroll_popup_graphic_pane_g

0xb23c,	// (0x00036038) scroll_pane_cp5

0xb195,	// (0x00035f91) cell_graphic_popup_pane_ParamLimits

0xb195,	// (0x00035f91) cell_graphic_popup_pane

0xb176,	// (0x00035f72) cell_graphic_popup_pane_g1

0xb17e,	// (0x00035f7a) cell_graphic_popup_pane_g2

0x836a,	// (0x00033166) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0003a7ab) cell_graphic_popup_pane_g

0xb187,	// (0x00035f83) cell_graphic_popup_pane_t2

0x8373,	// (0x0003316f) grid_highlight_pane_cp3

0x8558,	// (0x00033354) list_gen_pane_ParamLimits

0x8558,	// (0x00033354) list_gen_pane

0x858a,	// (0x00033386) scroll_pane

0xb0ce,	// (0x00035eca) bg_list_pane_g1_ParamLimits

0xb0ce,	// (0x00035eca) bg_list_pane_g1

0xb0eb,	// (0x00035ee7) bg_list_pane_g2_ParamLimits

0xb0eb,	// (0x00035ee7) bg_list_pane_g2

0xb100,	// (0x00035efc) bg_list_pane_g3_ParamLimits

0xb100,	// (0x00035efc) bg_list_pane_g3

0xb114,	// (0x00035f10) bg_list_pane_g4_ParamLimits

0xb114,	// (0x00035f10) bg_list_pane_g4

0xb128,	// (0x00035f24) bg_list_pane_g5_ParamLimits

0xb128,	// (0x00035f24) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0003a7a0) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0003a7a0) bg_list_pane_g

0x6613,	// (0x0003140f) list_double2_graphic_large_graphic_pane_ParamLimits

0x6613,	// (0x0003140f) list_double2_graphic_large_graphic_pane

0x6613,	// (0x0003140f) list_double2_graphic_pane_ParamLimits

0x6613,	// (0x0003140f) list_double2_graphic_pane

0x6613,	// (0x0003140f) list_double2_large_graphic_pane_ParamLimits

0x6613,	// (0x0003140f) list_double2_large_graphic_pane

0x6613,	// (0x0003140f) list_double2_pane_ParamLimits

0x6613,	// (0x0003140f) list_double2_pane

0x6613,	// (0x0003140f) list_double_graphic_heading_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_graphic_heading_pane

0x6613,	// (0x0003140f) list_double_graphic_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_graphic_pane

0x6613,	// (0x0003140f) list_double_heading_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_heading_pane

0x6613,	// (0x0003140f) list_double_large_graphic_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_large_graphic_pane

0x6613,	// (0x0003140f) list_double_number_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_number_pane

0x6613,	// (0x0003140f) list_double_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_pane

0x6613,	// (0x0003140f) list_double_time_pane_ParamLimits

0x6613,	// (0x0003140f) list_double_time_pane

0x6613,	// (0x0003140f) list_setting_number_pane_ParamLimits

0x6613,	// (0x0003140f) list_setting_number_pane

0x6613,	// (0x0003140f) list_setting_pane_ParamLimits

0x6613,	// (0x0003140f) list_setting_pane

0x664e,	// (0x0003144a) list_single_2graphic_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_2graphic_pane

0x664e,	// (0x0003144a) list_single_graphic_heading_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_graphic_heading_pane

0x664e,	// (0x0003144a) list_single_graphic_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_graphic_pane

0x664e,	// (0x0003144a) list_single_heading_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_heading_pane

0x668e,	// (0x0003148a) list_single_large_graphic_pane_ParamLimits

0x668e,	// (0x0003148a) list_single_large_graphic_pane

0x664e,	// (0x0003144a) list_single_number_heading_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_number_heading_pane

0x664e,	// (0x0003144a) list_single_number_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_number_pane

0x664e,	// (0x0003144a) list_single_pane_ParamLimits

0x664e,	// (0x0003144a) list_single_pane

0x7688,	// (0x00032484) list_highlight_pane_cp1

0x4dee,	// (0x0002fbea) list_single_pane_g1_ParamLimits

0x4dee,	// (0x0002fbea) list_single_pane_g1

0x4dfa,	// (0x0002fbf6) list_single_pane_g2_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003a3ca) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003a3ca) list_single_pane_g

0x65fd,	// (0x000313f9) list_single_pane_t1_ParamLimits

0x65fd,	// (0x000313f9) list_single_pane_t1

0x4dee,	// (0x0002fbea) list_single_number_pane_g1_ParamLimits

0x4dee,	// (0x0002fbea) list_single_number_pane_g1

0x4dfa,	// (0x0002fbf6) list_single_number_pane_g2_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003a3ca) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003a3ca) list_single_number_pane_g

0x652f,	// (0x0003132b) list_single_number_pane_t1_ParamLimits

0x652f,	// (0x0003132b) list_single_number_pane_t1

0x6545,	// (0x00031341) list_single_number_pane_t2_ParamLimits

0x6545,	// (0x00031341) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0003a761) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0003a761) list_single_number_pane_t

0x4de2,	// (0x0002fbde) list_single_graphic_pane_g1_ParamLimits

0x4de2,	// (0x0002fbde) list_single_graphic_pane_g1

0x4dee,	// (0x0002fbea) list_single_graphic_pane_g2_ParamLimits

0x4dee,	// (0x0002fbea) list_single_graphic_pane_g2

0x4dfa,	// (0x0002fbf6) list_single_graphic_pane_g3_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003a3c3) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003a3c3) list_single_graphic_pane_g

0x4e06,	// (0x0002fc02) list_single_graphic_pane_t1_ParamLimits

0x4e06,	// (0x0002fc02) list_single_graphic_pane_t1

0x4dee,	// (0x0002fbea) list_single_heading_pane_g1_ParamLimits

0x4dee,	// (0x0002fbea) list_single_heading_pane_g1

0x4dfa,	// (0x0002fbf6) list_single_heading_pane_g2_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003a3ca) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003a3ca) list_single_heading_pane_g

0x4e1c,	// (0x0002fc18) list_single_heading_pane_t1_ParamLimits

0x4e1c,	// (0x0002fc18) list_single_heading_pane_t1

0x4e32,	// (0x0002fc2e) list_single_heading_pane_t2_ParamLimits

0x4e32,	// (0x0002fc2e) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003a3cf) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003a3cf) list_single_heading_pane_t

0x4dee,	// (0x0002fbea) list_single_number_heading_pane_g1_ParamLimits

0x4dee,	// (0x0002fbea) list_single_number_heading_pane_g1

0x4dfa,	// (0x0002fbf6) list_single_number_heading_pane_g2_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003a3ca) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003a3ca) list_single_number_heading_pane_g

0x4e1c,	// (0x0002fc18) list_single_number_heading_pane_t1_ParamLimits

0x4e1c,	// (0x0002fc18) list_single_number_heading_pane_t1

0x4e44,	// (0x0002fc40) list_single_number_heading_pane_t2_ParamLimits

0x4e44,	// (0x0002fc40) list_single_number_heading_pane_t2

0x4e56,	// (0x0002fc52) list_single_number_heading_pane_t3_ParamLimits

0x4e56,	// (0x0002fc52) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003a3d4) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003a3d4) list_single_number_heading_pane_t

0x4e68,	// (0x0002fc64) list_single_graphic_heading_pane_g1_ParamLimits

0x4e68,	// (0x0002fc64) list_single_graphic_heading_pane_g1

0x4e74,	// (0x0002fc70) list_single_graphic_heading_pane_g4_ParamLimits

0x4e74,	// (0x0002fc70) list_single_graphic_heading_pane_g4

0x4dfa,	// (0x0002fbf6) list_single_graphic_heading_pane_g5_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003a3db) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003a3db) list_single_graphic_heading_pane_g

0x4e1c,	// (0x0002fc18) list_single_graphic_heading_pane_t1_ParamLimits

0x4e1c,	// (0x0002fc18) list_single_graphic_heading_pane_t1

0x4e85,	// (0x0002fc81) list_single_graphic_heading_pane_t2_ParamLimits

0x4e85,	// (0x0002fc81) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003a3e2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003a3e2) list_single_graphic_heading_pane_t

0x4e97,	// (0x0002fc93) list_single_large_graphic_pane_g1_ParamLimits

0x4e97,	// (0x0002fc93) list_single_large_graphic_pane_g1

0x4ea3,	// (0x0002fc9f) list_single_large_graphic_pane_g2_ParamLimits

0x4ea3,	// (0x0002fc9f) list_single_large_graphic_pane_g2

0x4eaf,	// (0x0002fcab) list_single_large_graphic_pane_g3_ParamLimits

0x4eaf,	// (0x0002fcab) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003a3e7) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003a3e7) list_single_large_graphic_pane_g

0xa0de,	// (0x00034eda) wait_border_pane_g2_copy1

0x4ebb,	// (0x0002fcb7) list_single_large_graphic_pane_g4_cp2

0x4ec3,	// (0x0002fcbf) list_single_large_graphic_pane_t1_ParamLimits

0x4ec3,	// (0x0002fcbf) list_single_large_graphic_pane_t1

0x4ed9,	// (0x0002fcd5) list_double_pane_g1_ParamLimits

0x4ed9,	// (0x0002fcd5) list_double_pane_g1

0x4ee5,	// (0x0002fce1) list_double_pane_g2_ParamLimits

0x4ee5,	// (0x0002fce1) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003a3ee) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003a3ee) list_double_pane_g

0x4ef1,	// (0x0002fced) list_double_pane_t1_ParamLimits

0x4ef1,	// (0x0002fced) list_double_pane_t1

0x4f07,	// (0x0002fd03) list_double_pane_t2_ParamLimits

0x4f07,	// (0x0002fd03) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003a3f3) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003a3f3) list_double_pane_t

0x4f19,	// (0x0002fd15) list_double2_pane_g1_ParamLimits

0x4f19,	// (0x0002fd15) list_double2_pane_g1

0x4f2a,	// (0x0002fd26) list_double2_pane_g2_ParamLimits

0x4f2a,	// (0x0002fd26) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003a3f8) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003a3f8) list_double2_pane_g

0x4f36,	// (0x0002fd32) list_double2_pane_t1_ParamLimits

0x4f36,	// (0x0002fd32) list_double2_pane_t1

0x4f4c,	// (0x0002fd48) list_double2_pane_t2_ParamLimits

0x4f4c,	// (0x0002fd48) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003a3fd) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003a3fd) list_double2_pane_t

0x4ed9,	// (0x0002fcd5) list_double_number_pane_g1_ParamLimits

0x4ed9,	// (0x0002fcd5) list_double_number_pane_g1

0x4ee5,	// (0x0002fce1) list_double_number_pane_g2_ParamLimits

0x4ee5,	// (0x0002fce1) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003a3ee) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003a3ee) list_double_number_pane_g

0x4f5e,	// (0x0002fd5a) list_double_number_pane_t1_ParamLimits

0x4f5e,	// (0x0002fd5a) list_double_number_pane_t1

0x4f70,	// (0x0002fd6c) list_double_number_pane_t2_ParamLimits

0x4f70,	// (0x0002fd6c) list_double_number_pane_t2

0x4f86,	// (0x0002fd82) list_double_number_pane_t3_ParamLimits

0x4f86,	// (0x0002fd82) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003a402) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003a402) list_double_number_pane_t

0x4f98,	// (0x0002fd94) list_double_graphic_pane_g1_ParamLimits

0x4f98,	// (0x0002fd94) list_double_graphic_pane_g1

0x4fa4,	// (0x0002fda0) list_double_graphic_pane_g2_ParamLimits

0x4fa4,	// (0x0002fda0) list_double_graphic_pane_g2

0x4fb3,	// (0x0002fdaf) list_double_graphic_pane_g3_ParamLimits

0x4fb3,	// (0x0002fdaf) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003a409) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003a409) list_double_graphic_pane_g

0x4fcb,	// (0x0002fdc7) list_double_graphic_pane_t1_ParamLimits

0x4fcb,	// (0x0002fdc7) list_double_graphic_pane_t1

0x4fe1,	// (0x0002fddd) list_double_graphic_pane_t2_ParamLimits

0x4fe1,	// (0x0002fddd) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003a412) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003a412) list_double_graphic_pane_t

0x4ff3,	// (0x0002fdef) list_double2_graphic_pane_g1_ParamLimits

0x4ff3,	// (0x0002fdef) list_double2_graphic_pane_g1

0x4fff,	// (0x0002fdfb) list_double2_graphic_pane_g2_ParamLimits

0x4fff,	// (0x0002fdfb) list_double2_graphic_pane_g2

0x4f2a,	// (0x0002fd26) list_double2_graphic_pane_g3_ParamLimits

0x4f2a,	// (0x0002fd26) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003a417) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003a417) list_double2_graphic_pane_g

0x500b,	// (0x0002fe07) list_double2_graphic_pane_t1_ParamLimits

0x500b,	// (0x0002fe07) list_double2_graphic_pane_t1

0x5021,	// (0x0002fe1d) list_double2_graphic_pane_t2_ParamLimits

0x5021,	// (0x0002fe1d) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003a41e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003a41e) list_double2_graphic_pane_t

0x5033,	// (0x0002fe2f) list_double_large_graphic_pane_g1_ParamLimits

0x5033,	// (0x0002fe2f) list_double_large_graphic_pane_g1

0x5050,	// (0x0002fe4c) list_double_large_graphic_pane_g2_ParamLimits

0x5050,	// (0x0002fe4c) list_double_large_graphic_pane_g2

0x4ee5,	// (0x0002fce1) list_double_large_graphic_pane_g3_ParamLimits

0x4ee5,	// (0x0002fce1) list_double_large_graphic_pane_g3

0x5061,	// (0x0002fe5d) list_double_large_graphic_pane_g4_ParamLimits

0x5061,	// (0x0002fe5d) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003a423) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003a423) list_double_large_graphic_pane_g

0x5088,	// (0x0002fe84) list_double_large_graphic_pane_t1_ParamLimits

0x5088,	// (0x0002fe84) list_double_large_graphic_pane_t1

0x50a1,	// (0x0002fe9d) list_double_large_graphic_pane_t2_ParamLimits

0x50a1,	// (0x0002fe9d) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003a42e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003a42e) list_double_large_graphic_pane_t

0x50b3,	// (0x0002feaf) list_double2_large_graphic_pane_g1_ParamLimits

0x50b3,	// (0x0002feaf) list_double2_large_graphic_pane_g1

0x4f19,	// (0x0002fd15) list_double2_large_graphic_pane_g2_ParamLimits

0x4f19,	// (0x0002fd15) list_double2_large_graphic_pane_g2

0x4f2a,	// (0x0002fd26) list_double2_large_graphic_pane_g3_ParamLimits

0x4f2a,	// (0x0002fd26) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003a433) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003a433) list_double2_large_graphic_pane_g

0x50bf,	// (0x0002febb) list_double2_large_graphic_pane_t1_ParamLimits

0x50bf,	// (0x0002febb) list_double2_large_graphic_pane_t1

0x50d5,	// (0x0002fed1) list_double2_large_graphic_pane_t2_ParamLimits

0x50d5,	// (0x0002fed1) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003a43a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003a43a) list_double2_large_graphic_pane_t

0x50e7,	// (0x0002fee3) list_double_heading_pane_g1_ParamLimits

0x50e7,	// (0x0002fee3) list_double_heading_pane_g1

0x50f8,	// (0x0002fef4) list_double_heading_pane_g2_ParamLimits

0x50f8,	// (0x0002fef4) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003a43f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003a43f) list_double_heading_pane_g

0x5104,	// (0x0002ff00) list_double_heading_pane_t1_ParamLimits

0x5104,	// (0x0002ff00) list_double_heading_pane_t1

0x4f4c,	// (0x0002fd48) list_double_heading_pane_t2_ParamLimits

0x4f4c,	// (0x0002fd48) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003a444) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003a444) list_double_heading_pane_t

0x511a,	// (0x0002ff16) list_double_graphic_heading_pane_g1_ParamLimits

0x511a,	// (0x0002ff16) list_double_graphic_heading_pane_g1

0x50e7,	// (0x0002fee3) list_double_graphic_heading_pane_g2_ParamLimits

0x50e7,	// (0x0002fee3) list_double_graphic_heading_pane_g2

0x50f8,	// (0x0002fef4) list_double_graphic_heading_pane_g3_ParamLimits

0x50f8,	// (0x0002fef4) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003a449) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003a449) list_double_graphic_heading_pane_g

0x5126,	// (0x0002ff22) list_double_graphic_heading_pane_t1_ParamLimits

0x5126,	// (0x0002ff22) list_double_graphic_heading_pane_t1

0x5021,	// (0x0002fe1d) list_double_graphic_heading_pane_t2_ParamLimits

0x5021,	// (0x0002fe1d) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003a450) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003a450) list_double_graphic_heading_pane_t

0x5050,	// (0x0002fe4c) list_double_time_pane_g1_ParamLimits

0x5050,	// (0x0002fe4c) list_double_time_pane_g1

0x4ee5,	// (0x0002fce1) list_double_time_pane_g2_ParamLimits

0x4ee5,	// (0x0002fce1) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003a455) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003a455) list_double_time_pane_g

0x513c,	// (0x0002ff38) list_double_time_pane_t1_ParamLimits

0x513c,	// (0x0002ff38) list_double_time_pane_t1

0x5152,	// (0x0002ff4e) list_double_time_pane_t2_ParamLimits

0x5152,	// (0x0002ff4e) list_double_time_pane_t2

0x5164,	// (0x0002ff60) list_double_time_pane_t3_ParamLimits

0x5164,	// (0x0002ff60) list_double_time_pane_t3

0x5176,	// (0x0002ff72) list_double_time_pane_t4_ParamLimits

0x5176,	// (0x0002ff72) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003a45a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003a45a) list_double_time_pane_t

0x4fff,	// (0x0002fdfb) list_setting_pane_g1_ParamLimits

0x4fff,	// (0x0002fdfb) list_setting_pane_g1

0x4f2a,	// (0x0002fd26) list_setting_pane_g2_ParamLimits

0x4f2a,	// (0x0002fd26) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003a463) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003a463) list_setting_pane_g

0x5188,	// (0x0002ff84) list_setting_pane_t1_ParamLimits

0x5188,	// (0x0002ff84) list_setting_pane_t1

0x51a2,	// (0x0002ff9e) list_setting_pane_t2_ParamLimits

0x51a2,	// (0x0002ff9e) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003a468) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003a468) list_setting_pane_t

0x51e1,	// (0x0002ffdd) set_value_pane_cp_ParamLimits

0x51e1,	// (0x0002ffdd) set_value_pane_cp

0x51ed,	// (0x0002ffe9) list_setting_number_pane_g1_ParamLimits

0x51ed,	// (0x0002ffe9) list_setting_number_pane_g1

0x51f9,	// (0x0002fff5) list_setting_number_pane_g2_ParamLimits

0x51f9,	// (0x0002fff5) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003a46f) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003a46f) list_setting_number_pane_g

0x5205,	// (0x00030001) list_setting_number_pane_t1_ParamLimits

0x5205,	// (0x00030001) list_setting_number_pane_t1

0x521e,	// (0x0003001a) list_setting_number_pane_t2_ParamLimits

0x521e,	// (0x0003001a) list_setting_number_pane_t2

0x5238,	// (0x00030034) list_setting_number_pane_t3_ParamLimits

0x5238,	// (0x00030034) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003a474) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003a474) list_setting_number_pane_t

0x51e1,	// (0x0002ffdd) set_value_pane_ParamLimits

0x51e1,	// (0x0002ffdd) set_value_pane

0x85be,	// (0x000333ba) bg_set_opt_pane_ParamLimits

0x85be,	// (0x000333ba) bg_set_opt_pane

0x527b,	// (0x00030077) set_value_pane_t1

0x85df,	// (0x000333db) slider_set_pane_cp3

0x85e8,	// (0x000333e4) volume_small_pane_cp

0x85f1,	// (0x000333ed) list_form_gen_pane

0x85fa,	// (0x000333f6) scroll_pane_cp8

0x5291,	// (0x0003008d) form_field_data_pane_ParamLimits

0x5291,	// (0x0003008d) form_field_data_pane

0x52b1,	// (0x000300ad) form_field_data_wide_pane_ParamLimits

0x52b1,	// (0x000300ad) form_field_data_wide_pane

0x52d2,	// (0x000300ce) form_field_popup_pane_ParamLimits

0x52d2,	// (0x000300ce) form_field_popup_pane

0x52f2,	// (0x000300ee) form_field_popup_wide_pane_ParamLimits

0x52f2,	// (0x000300ee) form_field_popup_wide_pane

0x530f,	// (0x0003010b) form_field_slider_pane_ParamLimits

0x530f,	// (0x0003010b) form_field_slider_pane

0x5322,	// (0x0003011e) form_field_slider_wide_pane_ParamLimits

0x5322,	// (0x0003011e) form_field_slider_wide_pane

0x860b,	// (0x00033407) data_form_pane

0x533f,	// (0x0003013b) form_field_data_pane_t1

0x8617,	// (0x00033413) input_focus_pane

0x5357,	// (0x00030153) data_form_wide_pane

0x5374,	// (0x00030170) form_field_data_wide_pane_t1

0x8388,	// (0x00033184) input_focus_pane_cp6

0x5396,	// (0x00030192) form_field_popup_pane_t1

0x8617,	// (0x00033413) input_focus_pane_cp7

0x8645,	// (0x00033441) list_form_pane

0x53b6,	// (0x000301b2) form_field_popup_wide_pane_t1

0x8617,	// (0x00033413) input_focus_pane_cp8

0x8651,	// (0x0003344d) list_form_wide_pane

0x53d3,	// (0x000301cf) form_field_slider_pane_t1_ParamLimits

0x53d3,	// (0x000301cf) form_field_slider_pane_t1

0x53e9,	// (0x000301e5) form_field_slider_pane_t2_ParamLimits

0x53e9,	// (0x000301e5) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003a484) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003a484) form_field_slider_pane_t

0x79e3,	// (0x000327df) input_focus_pane_cp9_ParamLimits

0x79e3,	// (0x000327df) input_focus_pane_cp9

0x53fe,	// (0x000301fa) slider_cont_pane_ParamLimits

0x53fe,	// (0x000301fa) slider_cont_pane

0x8660,	// (0x0003345c) form_field_slider_wide_pane_t1_ParamLimits

0x8660,	// (0x0003345c) form_field_slider_wide_pane_t1

0x5412,	// (0x0003020e) form_field_slider_wide_pane_t2_ParamLimits

0x5412,	// (0x0003020e) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003a489) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003a489) form_field_slider_wide_pane_t

0x79e3,	// (0x000327df) input_focus_pane_cp10_ParamLimits

0x79e3,	// (0x000327df) input_focus_pane_cp10

0x5424,	// (0x00030220) slider_cont_pane_cp1_ParamLimits

0x5424,	// (0x00030220) slider_cont_pane_cp1

0x5438,	// (0x00030234) slider_form_pane_cp

0x8672,	// (0x0003346e) input_focus_pane_g1

0x867a,	// (0x00033476) input_focus_pane_g2

0x8682,	// (0x0003347e) input_focus_pane_g3

0x868a,	// (0x00033486) input_focus_pane_g4

0x8692,	// (0x0003348e) input_focus_pane_g5

0x869a,	// (0x00033496) input_focus_pane_g6

0x86a2,	// (0x0003349e) input_focus_pane_g7

0x86aa,	// (0x000334a6) input_focus_pane_g8

0x86b2,	// (0x000334ae) input_focus_pane_g9

0x767e,	// (0x0003247a) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003a48e) input_focus_pane_g

0xa0e7,	// (0x00034ee3) wait_border_pane_g3_copy1

0x5440,	// (0x0003023c) data_form_pane_t1

0x767e,	// (0x0003247a) wait_anim_pane_g1_copy1

0x65cf,	// (0x000313cb) data_form_wide_pane_t1

0x545b,	// (0x00030257) list_form_graphic_pane_cp_ParamLimits

0x545b,	// (0x00030257) list_form_graphic_pane_cp

0xb029,	// (0x00035e25) slider_form_pane_g1

0xb032,	// (0x00035e2e) slider_form_pane_g2

0x0006,

0xf995,	// (0x0003a791) slider_form_pane_g

0x5474,	// (0x00030270) list_form_graphic_pane_ParamLimits

0x5474,	// (0x00030270) list_form_graphic_pane

0x5490,	// (0x0003028c) list_form_graphic_pane_g1

0x5498,	// (0x00030294) list_form_graphic_pane_t1_ParamLimits

0x5498,	// (0x00030294) list_form_graphic_pane_t1

0x7768,	// (0x00032564) list_highlight_pane_cp5_ParamLimits

0x7768,	// (0x00032564) list_highlight_pane_cp5

0x54ad,	// (0x000302a9) find_pane_g1

0x86ba,	// (0x000334b6) input_find_pane

0x54b6,	// (0x000302b2) input_find_pane_g1_ParamLimits

0x54b6,	// (0x000302b2) input_find_pane_g1

0x54c2,	// (0x000302be) input_find_pane_t1_ParamLimits

0x54c2,	// (0x000302be) input_find_pane_t1

0x54d7,	// (0x000302d3) input_find_pane_t2_ParamLimits

0x54d7,	// (0x000302d3) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003a4a3) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003a4a3) input_find_pane_t

0x86c3,	// (0x000334bf) input_focus_pane_cp5_ParamLimits

0x86c3,	// (0x000334bf) input_focus_pane_cp5

0x86dd,	// (0x000334d9) bg_popup_window_pane_cp2_ParamLimits

0x86dd,	// (0x000334d9) bg_popup_window_pane_cp2

0x86ea,	// (0x000334e6) listscroll_menu_pane_ParamLimits

0x86ea,	// (0x000334e6) listscroll_menu_pane

0x86f6,	// (0x000334f2) popup_submenu_window_ParamLimits

0x86f6,	// (0x000334f2) popup_submenu_window

0x8722,	// (0x0003351e) find_popup_pane_g1

0x872a,	// (0x00033526) input_popup_find_pane_cp

0x86c3,	// (0x000334bf) input_focus_pane_cp4_ParamLimits

0x86c3,	// (0x000334bf) input_focus_pane_cp4

0x8740,	// (0x0003353c) input_popup_find_pane_t1_ParamLimits

0x8740,	// (0x0003353c) input_popup_find_pane_t1

0x7688,	// (0x00032484) bg_popup_sub_pane_cp

0x876e,	// (0x0003356a) listscroll_popup_sub_pane

0x8776,	// (0x00033572) list_submenu_pane_ParamLimits

0x8776,	// (0x00033572) list_submenu_pane

0x8787,	// (0x00033583) scroll_pane_cp4

0x878f,	// (0x0003358b) list_single_popup_submenu_pane_ParamLimits

0x878f,	// (0x0003358b) list_single_popup_submenu_pane

0x87a3,	// (0x0003359f) list_single_popup_submenu_pane_g1

0x87ab,	// (0x000335a7) list_single_popup_submenu_pane_t1_ParamLimits

0x87ab,	// (0x000335a7) list_single_popup_submenu_pane_t1

0x7768,	// (0x00032564) bg_active_tab_pane_cp1_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp1

0x87c0,	// (0x000335bc) tabs_2_active_pane_g1

0x87c8,	// (0x000335c4) tabs_2_active_pane_t1

0x7768,	// (0x00032564) bg_passive_tab_pane_cp1_ParamLimits

0x7768,	// (0x00032564) bg_passive_tab_pane_cp1

0x87c0,	// (0x000335bc) tabs_2_passive_pane_g1

0x87c8,	// (0x000335c4) tabs_2_passive_pane_t1

0x87da,	// (0x000335d6) bg_active_tab_pane_cp4

0x87e8,	// (0x000335e4) tabs_2_long_active_pane_t1

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp4

0x61b1,	// (0x00030fad) list_single_midp_graphic_pane_g4_ParamLimits

0x87da,	// (0x000335d6) bg_active_tab_pane_cp5

0x8807,	// (0x00033603) tabs_3_long_active_pane_t1

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp5

0x61b1,	// (0x00030fad) list_single_midp_graphic_pane_g4

0x7768,	// (0x00032564) bg_popup_window_pane_cp13_ParamLimits

0x7768,	// (0x00032564) bg_popup_window_pane_cp13

0x8822,	// (0x0003361e) listscroll_popup_fast_pane_ParamLimits

0x8822,	// (0x0003361e) listscroll_popup_fast_pane

0x8831,	// (0x0003362d) grid_popup_fast_pane_ParamLimits

0x8831,	// (0x0003362d) grid_popup_fast_pane

0x8843,	// (0x0003363f) scroll_pane_cp9_ParamLimits

0x8843,	// (0x0003363f) scroll_pane_cp9

0xc963,	// (0x0003775f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc963,	// (0x0003775f) list_single_graphic_hl_pane_t1_cp2

0x8867,	// (0x00033663) input_focus_pane_cp20_ParamLimits

0x8867,	// (0x00033663) input_focus_pane_cp20

0x8875,	// (0x00033671) query_popup_data_pane_t1_ParamLimits

0x8875,	// (0x00033671) query_popup_data_pane_t1

0x8888,	// (0x00033684) query_popup_data_pane_t2_ParamLimits

0x8888,	// (0x00033684) query_popup_data_pane_t2

0x88ce,	// (0x000336ca) query_popup_data_pane_t3_ParamLimits

0x88ce,	// (0x000336ca) query_popup_data_pane_t3

0x890f,	// (0x0003370b) query_popup_data_pane_t4_ParamLimits

0x890f,	// (0x0003370b) query_popup_data_pane_t4

0x894b,	// (0x00033747) query_popup_data_pane_t5_ParamLimits

0x894b,	// (0x00033747) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003a4a8) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003a4a8) query_popup_data_pane_t

0x8672,	// (0x0003346e) bg_set_opt_pane_g1

0x867a,	// (0x00033476) bg_set_opt_pane_g2

0x8682,	// (0x0003347e) bg_set_opt_pane_g3

0x868a,	// (0x00033486) bg_set_opt_pane_g4

0x8692,	// (0x0003348e) bg_set_opt_pane_g5

0x869a,	// (0x00033496) bg_set_opt_pane_g6

0x86a2,	// (0x0003349e) bg_set_opt_pane_g7

0x86aa,	// (0x000334a6) bg_set_opt_pane_g8

0x86b2,	// (0x000334ae) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003a4b3) bg_set_opt_pane_g

0x5813,	// (0x0003060f) control_top_pane_stacon_ParamLimits

0x5813,	// (0x0003060f) control_top_pane_stacon

0x5866,	// (0x00030662) signal_pane_stacon_ParamLimits

0x5866,	// (0x00030662) signal_pane_stacon

0x8f39,	// (0x00033d35) stacon_top_pane_g1_ParamLimits

0x8f39,	// (0x00033d35) stacon_top_pane_g1

0x588b,	// (0x00030687) title_pane_stacon_ParamLimits

0x588b,	// (0x00030687) title_pane_stacon

0x58b5,	// (0x000306b1) uni_indicator_pane_stacon_ParamLimits

0x58b5,	// (0x000306b1) uni_indicator_pane_stacon

0x58ca,	// (0x000306c6) battery_pane_stacon_ParamLimits

0x58ca,	// (0x000306c6) battery_pane_stacon

0x590e,	// (0x0003070a) control_bottom_pane_stacon_ParamLimits

0x590e,	// (0x0003070a) control_bottom_pane_stacon

0x5931,	// (0x0003072d) navi_pane_stacon_ParamLimits

0x5931,	// (0x0003072d) navi_pane_stacon

0x8f5b,	// (0x00033d57) stacon_bottom_pane_g1_ParamLimits

0x8f5b,	// (0x00033d57) stacon_bottom_pane_g1

0x54ec,	// (0x000302e8) aid_levels_signal_lsc_ParamLimits

0x54ec,	// (0x000302e8) aid_levels_signal_lsc

0x5502,	// (0x000302fe) signal_pane_stacon_g1_ParamLimits

0x5502,	// (0x000302fe) signal_pane_stacon_g1

0x5516,	// (0x00030312) signal_pane_stacon_g2_ParamLimits

0x5516,	// (0x00030312) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003a4c6) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003a4c6) signal_pane_stacon_g

0x554b,	// (0x00030347) title_pane_stacon_t1_ParamLimits

0x554b,	// (0x00030347) title_pane_stacon_t1

0x898f,	// (0x0003378b) uni_indicator_pane_stacon_g1

0x8999,	// (0x00033795) uni_indicator_pane_stacon_g2

0x89a3,	// (0x0003379f) uni_indicator_pane_stacon_g3

0x89ad,	// (0x000337a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003a4d2) uni_indicator_pane_stacon_g

0x5570,	// (0x0003036c) control_top_pane_stacon_g1

0x5578,	// (0x00030374) control_top_pane_stacon_t1_ParamLimits

0x5578,	// (0x00030374) control_top_pane_stacon_t1

0x55af,	// (0x000303ab) aid_levels_battery_lsc_ParamLimits

0x55af,	// (0x000303ab) aid_levels_battery_lsc

0x55c6,	// (0x000303c2) battery_pane_stacon_g1_ParamLimits

0x55c6,	// (0x000303c2) battery_pane_stacon_g1

0x55d9,	// (0x000303d5) battery_pane_stacon_g2_ParamLimits

0x55d9,	// (0x000303d5) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003a4db) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003a4db) battery_pane_stacon_g

0x5617,	// (0x00030413) navi_icon_pane_stacon

0x562b,	// (0x00030427) navi_navi_pane_stacon

0x5617,	// (0x00030413) navi_text_pane_stacon

0x5570,	// (0x0003036c) control_bottom_pane_stacon_g1

0x563f,	// (0x0003043b) control_bottom_pane_stacon_t1_ParamLimits

0x563f,	// (0x0003043b) control_bottom_pane_stacon_t1

0x89d1,	// (0x000337cd) grid_app_pane_ParamLimits

0x89d1,	// (0x000337cd) grid_app_pane

0x89f5,	// (0x000337f1) scroll_pane_cp15_ParamLimits

0x89f5,	// (0x000337f1) scroll_pane_cp15

0x8a0a,	// (0x00033806) cell_app_pane_ParamLimits

0x8a0a,	// (0x00033806) cell_app_pane

0x8a2e,	// (0x0003382a) cell_app_pane_g1_ParamLimits

0x8a2e,	// (0x0003382a) cell_app_pane_g1

0x8a4e,	// (0x0003384a) cell_app_pane_g2_ParamLimits

0x8a4e,	// (0x0003384a) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003a4e0) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003a4e0) cell_app_pane_g

0x8a5a,	// (0x00033856) cell_app_pane_t1_ParamLimits

0x8a5a,	// (0x00033856) cell_app_pane_t1

0x8a71,	// (0x0003386d) grid_highlight_pane_ParamLimits

0x8a71,	// (0x0003386d) grid_highlight_pane

0x8672,	// (0x0003346e) cell_highlight_pane_g1

0x867a,	// (0x00033476) cell_highlight_pane_g2

0x8682,	// (0x0003347e) cell_highlight_pane_g3

0x868a,	// (0x00033486) cell_highlight_pane_g4

0x8692,	// (0x0003348e) cell_highlight_pane_g5

0x869a,	// (0x00033496) cell_highlight_pane_g6

0x86a2,	// (0x0003349e) cell_highlight_pane_g7

0x86aa,	// (0x000334a6) cell_highlight_pane_g8

0x86b2,	// (0x000334ae) cell_highlight_pane_g9

0x767e,	// (0x0003247a) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003a48e) cell_highlight_pane_g

0x8a82,	// (0x0003387e) bg_scroll_pane

0x5689,	// (0x00030485) scroll_handle_pane

0x8ac9,	// (0x000338c5) scroll_bg_pane_g1

0x8ade,	// (0x000338da) scroll_bg_pane_g2

0x8af6,	// (0x000338f2) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003a4e5) scroll_bg_pane_g

0x8b0b,	// (0x00033907) scroll_handle_focus_pane_ParamLimits

0x8b0b,	// (0x00033907) scroll_handle_focus_pane

0x8ac9,	// (0x000338c5) scroll_handle_pane_g1

0x8b18,	// (0x00033914) scroll_handle_pane_g2

0x8af6,	// (0x000338f2) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003a4ec) scroll_handle_pane_g

0x86c3,	// (0x000334bf) bg_popup_sub_pane_cp21_ParamLimits

0x86c3,	// (0x000334bf) bg_popup_sub_pane_cp21

0x8b2c,	// (0x00033928) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b2c,	// (0x00033928) popup_fep_japan_predictive_window_t1

0x8b46,	// (0x00033942) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b46,	// (0x00033942) popup_fep_japan_predictive_window_t2

0x8b79,	// (0x00033975) popup_fep_japan_predictive_window_t3_ParamLimits

0x8b79,	// (0x00033975) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003a4f3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003a4f3) popup_fep_japan_predictive_window_t

0x7688,	// (0x00032484) bg_popup_sub_pane_cp23

0x8bb0,	// (0x000339ac) listscroll_japin_cand_pane

0x8bb8,	// (0x000339b4) popup_fep_japan_candidate_window_t1

0x8bc6,	// (0x000339c2) candidate_pane_ParamLimits

0x8bc6,	// (0x000339c2) candidate_pane

0x8bd8,	// (0x000339d4) scroll_pane_cp30

0x8be0,	// (0x000339dc) list_single_popup_jap_candidate_pane_ParamLimits

0x8be0,	// (0x000339dc) list_single_popup_jap_candidate_pane

0x7688,	// (0x00032484) list_highlight_pane_cp30

0x8bf5,	// (0x000339f1) list_single_popup_jap_candidate_pane_t1

0x8c04,	// (0x00033a00) level_1_signal

0x8c16,	// (0x00033a12) level_2_signal

0x8c29,	// (0x00033a25) level_3_signal

0x8c3c,	// (0x00033a38) level_4_signal

0x8c4f,	// (0x00033a4b) level_5_signal

0x8c62,	// (0x00033a5e) level_6_signal

0x8c75,	// (0x00033a71) level_7_signal

0x8c04,	// (0x00033a00) level_1_battery

0x8c16,	// (0x00033a12) level_2_battery

0x8c29,	// (0x00033a25) level_3_battery

0x8c3c,	// (0x00033a38) level_4_battery

0x8c4f,	// (0x00033a4b) level_5_battery

0x8c62,	// (0x00033a5e) level_6_battery

0x8c75,	// (0x00033a71) level_7_battery

0x8ca0,	// (0x00033a9c) list_menu_pane_ParamLimits

0x8ca0,	// (0x00033a9c) list_menu_pane

0x8cb6,	// (0x00033ab2) scroll_pane_cp25_ParamLimits

0x8cb6,	// (0x00033ab2) scroll_pane_cp25

0x8ccf,	// (0x00033acb) list_double2_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double2_graphic_pane_cp2

0x8ccf,	// (0x00033acb) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double2_large_graphic_pane_cp2

0x8ccf,	// (0x00033acb) list_double2_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double2_pane_cp2

0x8ccf,	// (0x00033acb) list_double_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double_graphic_pane_cp2

0x8ccf,	// (0x00033acb) list_double_large_graphic_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double_large_graphic_pane_cp2

0x8ccf,	// (0x00033acb) list_double_number_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double_number_pane_cp2

0x8ccf,	// (0x00033acb) list_double_pane_cp2_ParamLimits

0x8ccf,	// (0x00033acb) list_double_pane_cp2

0x8cf3,	// (0x00033aef) list_single_2graphic_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_2graphic_pane_cp2

0x8cf3,	// (0x00033aef) list_single_graphic_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_graphic_heading_pane_cp2

0x8cf3,	// (0x00033aef) list_single_graphic_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_graphic_pane_cp2

0x8cf3,	// (0x00033aef) list_single_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_heading_pane_cp2

0x8d0c,	// (0x00033b08) list_single_large_graphic_pane_cp2_ParamLimits

0x8d0c,	// (0x00033b08) list_single_large_graphic_pane_cp2

0x8cf3,	// (0x00033aef) list_single_number_heading_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_number_heading_pane_cp2

0x8cf3,	// (0x00033aef) list_single_number_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_number_pane_cp2

0x8cf3,	// (0x00033aef) list_single_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_pane_cp2

0x8d88,	// (0x00033b84) bg_popup_sub_pane_cp22

0x573b,	// (0x00030537) popup_side_volume_key_window_g1

0x5765,	// (0x00030561) popup_side_volume_key_window_t1

0x5781,	// (0x0003057d) volume_small_pane_cp1

0x79e3,	// (0x000327df) bg_popup_sub_pane_cp24_ParamLimits

0x79e3,	// (0x000327df) bg_popup_sub_pane_cp24

0x8d9e,	// (0x00033b9a) fep_china_uni_candidate_pane_ParamLimits

0x8d9e,	// (0x00033b9a) fep_china_uni_candidate_pane

0x8db2,	// (0x00033bae) fep_china_uni_entry_pane

0x8dc2,	// (0x00033bbe) popup_fep_china_uni_window_g1

0x8dde,	// (0x00033bda) fep_china_uni_entry_pane_g1

0x8de6,	// (0x00033be2) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003a524) fep_china_uni_entry_pane_g

0x8dee,	// (0x00033bea) fep_entry_item_pane

0x8df8,	// (0x00033bf4) fep_candidate_item_pane

0x8e00,	// (0x00033bfc) fep_china_uni_candidate_pane_g1

0x8e08,	// (0x00033c04) fep_china_uni_candidate_pane_g2

0x8e10,	// (0x00033c0c) fep_china_uni_candidate_pane_g3

0x8e18,	// (0x00033c14) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003a529) fep_china_uni_candidate_pane_g

0x767e,	// (0x0003247a) fep_entry_item_pane_g1

0x8e20,	// (0x00033c1c) fep_entry_item_pane_t1_ParamLimits

0x8e20,	// (0x00033c1c) fep_entry_item_pane_t1

0x8e36,	// (0x00033c32) fep_candidate_item_pane_t1_ParamLimits

0x8e36,	// (0x00033c32) fep_candidate_item_pane_t1

0x8e4b,	// (0x00033c47) fep_candidate_item_pane_t2_ParamLimits

0x8e4b,	// (0x00033c47) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003a532) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003a532) fep_candidate_item_pane_t

0x7768,	// (0x00032564) list_highlight_pane_cp31_ParamLimits

0x7768,	// (0x00032564) list_highlight_pane_cp31

0x8e5d,	// (0x00033c59) level_1_signal_lsc

0x8e66,	// (0x00033c62) level_2_signal_lsc

0x8e6f,	// (0x00033c6b) level_3_signal_lsc

0x8e78,	// (0x00033c74) level_4_signal_lsc

0x8e81,	// (0x00033c7d) level_5_signal_lsc

0x8e8a,	// (0x00033c86) level_6_signal_lsc

0x8e93,	// (0x00033c8f) level_7_signal_lsc

0x8e93,	// (0x00033c8f) level_1_battery_lsc

0x8e9c,	// (0x00033c98) level_2_battery_lsc

0x8ea5,	// (0x00033ca1) level_3_battery_lsc

0x8eae,	// (0x00033caa) level_4_battery_lsc

0x8eb7,	// (0x00033cb3) level_5_battery_lsc

0x8ec0,	// (0x00033cbc) level_6_battery_lsc

0x8e5d,	// (0x00033c59) level_7_battery_lsc

0x8ec9,	// (0x00033cc5) scroll_handle_focus_pane_g1

0x8ed2,	// (0x00033cce) scroll_handle_focus_pane_g2

0x8edb,	// (0x00033cd7) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003a537) scroll_handle_focus_pane_g

0x5789,	// (0x00030585) list_single_2graphic_pane_g1_ParamLimits

0x5789,	// (0x00030585) list_single_2graphic_pane_g1

0x4e74,	// (0x0002fc70) list_single_2graphic_pane_g2_ParamLimits

0x4e74,	// (0x0002fc70) list_single_2graphic_pane_g2

0x4dfa,	// (0x0002fbf6) list_single_2graphic_pane_g3_ParamLimits

0x4dfa,	// (0x0002fbf6) list_single_2graphic_pane_g3

0x5795,	// (0x00030591) list_single_2graphic_pane_g4_ParamLimits

0x5795,	// (0x00030591) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003a53e) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003a53e) list_single_2graphic_pane_g

0x57a1,	// (0x0003059d) list_single_2graphic_pane_t1_ParamLimits

0x57a1,	// (0x0003059d) list_single_2graphic_pane_t1

0x57cf,	// (0x000305cb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x57cf,	// (0x000305cb) list_double2_graphic_large_graphic_pane_g1

0x4f19,	// (0x0002fd15) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f19,	// (0x0002fd15) list_double2_graphic_large_graphic_pane_g2

0x4f2a,	// (0x0002fd26) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4f2a,	// (0x0002fd26) list_double2_graphic_large_graphic_pane_g3

0x57df,	// (0x000305db) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x57df,	// (0x000305db) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003a547) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003a547) list_double2_graphic_large_graphic_pane_g

0x57eb,	// (0x000305e7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57eb,	// (0x000305e7) list_double2_graphic_large_graphic_pane_t1

0x5801,	// (0x000305fd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5801,	// (0x000305fd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003a550) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003a550) list_double2_graphic_large_graphic_pane_t

0x9023,	// (0x00033e1f) popup_fast_swap_window_ParamLimits

0x9023,	// (0x00033e1f) popup_fast_swap_window

0x903f,	// (0x00033e3b) popup_side_volume_key_window

0x905b,	// (0x00033e57) stacon_top_pane

0x9065,	// (0x00033e61) status_pane_ParamLimits

0x9065,	// (0x00033e61) status_pane

0x905b,	// (0x00033e57) status_small_pane

0x7688,	// (0x00032484) control_pane

0x7688,	// (0x00032484) stacon_bottom_pane

0x85fa,	// (0x000333f6) scroll_pane_cp121

0x85f1,	// (0x000333ed) set_content_pane

0x8ee4,	// (0x00033ce0) bg_active_tab_pane_g1_cp1

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp1

0x8ef6,	// (0x00033cf2) bg_active_tab_pane_g3_cp1

0x8ee4,	// (0x00033ce0) bg_passive_tab_pane_g1_cp1

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp1

0x8ef6,	// (0x00033cf2) bg_passive_tab_pane_g3_cp1

0x8eff,	// (0x00033cfb) bg_active_tab_pane_g1_cp2

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp2

0x8f08,	// (0x00033d04) bg_active_tab_pane_g3_cp2

0x8eff,	// (0x00033cfb) bg_passive_tab_pane_g1_cp2

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp2

0x8f08,	// (0x00033d04) bg_passive_tab_pane_g3_cp2

0x8f11,	// (0x00033d0d) bg_active_tab_pane_g1_cp3

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp3

0x8f1a,	// (0x00033d16) bg_active_tab_pane_g3_cp3

0x8f11,	// (0x00033d0d) bg_passive_tab_pane_g1_cp3

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp3

0x8f1a,	// (0x00033d16) bg_passive_tab_pane_g3_cp3

0x8f23,	// (0x00033d1f) bg_active_tab_pane_g1_cp4

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp4

0x8f2e,	// (0x00033d2a) bg_active_tab_pane_g3_cp4

0x8f23,	// (0x00033d1f) bg_passive_tab_pane_g1_cp4

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp4

0x8f2e,	// (0x00033d2a) bg_passive_tab_pane_g3_cp4

0x8f77,	// (0x00033d73) bg_active_tab_pane_g1_cp5

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp5

0x8f80,	// (0x00033d7c) bg_active_tab_pane_g3_cp5

0x8f77,	// (0x00033d73) bg_passive_tab_pane_g1_cp5

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp5

0x8f80,	// (0x00033d7c) bg_passive_tab_pane_g3_cp5

0x8f89,	// (0x00033d85) list_set_graphic_pane_ParamLimits

0x8f89,	// (0x00033d85) list_set_graphic_pane

0x7688,	// (0x00032484) bg_set_opt_pane_cp4

0x8fa6,	// (0x00033da2) list_set_graphic_pane_g1_ParamLimits

0x8fa6,	// (0x00033da2) list_set_graphic_pane_g1

0x8fb2,	// (0x00033dae) list_set_graphic_pane_g2_ParamLimits

0x8fb2,	// (0x00033dae) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003a555) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003a555) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x0003a8c8) volume_small_pane_cp_g

0x8fd6,	// (0x00033dd2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8fd6,	// (0x00033dd2) list_double2_large_graphic_pane_g1_cp2

0x8fe2,	// (0x00033dde) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8fe2,	// (0x00033dde) list_double2_large_graphic_pane_g2_cp2

0x8ff3,	// (0x00033def) list_double2_large_graphic_pane_g3_cp2

0x8ffb,	// (0x00033df7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ffb,	// (0x00033df7) list_double2_large_graphic_pane_t1_cp2

0x9011,	// (0x00033e0d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9011,	// (0x00033e0d) list_double2_large_graphic_pane_t2_cp2

0xabc6,	// (0x000359c2) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabc6,	// (0x000359c2) list_double_large_graphic_pane_g1_cp2

0xabd7,	// (0x000359d3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabd7,	// (0x000359d3) list_double_large_graphic_pane_g2_cp2

0x9181,	// (0x00033f7d) list_double_large_graphic_pane_g3_cp2

0xabe8,	// (0x000359e4) list_double_large_graphic_pane_g4_cp

0xabf0,	// (0x000359ec) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabf0,	// (0x000359ec) list_double_large_graphic_pane_t1_cp2

0xac07,	// (0x00035a03) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac07,	// (0x00035a03) list_double_large_graphic_pane_t2_cp2

0x9073,	// (0x00033e6f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9073,	// (0x00033e6f) list_double2_graphic_pane_g1_cp2

0x9081,	// (0x00033e7d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9081,	// (0x00033e7d) list_double2_graphic_pane_g2_cp2

0x9092,	// (0x00033e8e) list_double2_graphic_pane_g3_cp2

0x909c,	// (0x00033e98) list_double2_graphic_pane_t1_cp2_ParamLimits

0x909c,	// (0x00033e98) list_double2_graphic_pane_t1_cp2

0x90b2,	// (0x00033eae) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90b2,	// (0x00033eae) list_double2_graphic_pane_t2_cp2

0x90c4,	// (0x00033ec0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x90c4,	// (0x00033ec0) list_single_number_heading_pane_g1_cp2

0x90d0,	// (0x00033ecc) list_single_number_heading_pane_g2_cp2

0x90d8,	// (0x00033ed4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x90d8,	// (0x00033ed4) list_single_number_heading_pane_t1_cp2

0x90ee,	// (0x00033eea) list_single_number_heading_pane_t2_cp2_ParamLimits

0x90ee,	// (0x00033eea) list_single_number_heading_pane_t2_cp2

0x9100,	// (0x00033efc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9100,	// (0x00033efc) list_single_number_heading_pane_t3_cp2

0x90c4,	// (0x00033ec0) list_single_heading_pane_g1_cp2_ParamLimits

0x90c4,	// (0x00033ec0) list_single_heading_pane_g1_cp2

0x90d0,	// (0x00033ecc) list_single_heading_pane_g2_cp2

0x90d8,	// (0x00033ed4) list_single_heading_pane_t1_cp2_ParamLimits

0x90d8,	// (0x00033ed4) list_single_heading_pane_t1_cp2

0xa9ce,	// (0x000357ca) list_single_heading_pane_t2_cp2_ParamLimits

0xa9ce,	// (0x000357ca) list_single_heading_pane_t2_cp2

0xa916,	// (0x00035712) list_double_graphic_pane_g1_cp2_ParamLimits

0xa916,	// (0x00035712) list_double_graphic_pane_g1_cp2

0xa922,	// (0x0003571e) list_double_graphic_pane_g2_cp2_ParamLimits

0xa922,	// (0x0003571e) list_double_graphic_pane_g2_cp2

0xa931,	// (0x0003572d) list_double_graphic_pane_g3_cp2

0xa939,	// (0x00035735) list_double_graphic_pane_t1_cp2_ParamLimits

0xa939,	// (0x00035735) list_double_graphic_pane_t1_cp2

0xa94f,	// (0x0003574b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa94f,	// (0x0003574b) list_double_graphic_pane_t2_cp2

0x9175,	// (0x00033f71) list_double_number_pane_g1_cp2_ParamLimits

0x9175,	// (0x00033f71) list_double_number_pane_g1_cp2

0x9181,	// (0x00033f7d) list_double_number_pane_g2_cp2

0xa8da,	// (0x000356d6) list_double_number_pane_t1_cp2_ParamLimits

0xa8da,	// (0x000356d6) list_double_number_pane_t1_cp2

0xa8ee,	// (0x000356ea) list_double_number_pane_t2_cp2_ParamLimits

0xa8ee,	// (0x000356ea) list_double_number_pane_t2_cp2

0xa904,	// (0x00035700) list_double_number_pane_t3_cp2_ParamLimits

0xa904,	// (0x00035700) list_double_number_pane_t3_cp2

0xa7c3,	// (0x000355bf) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7c3,	// (0x000355bf) list_single_graphic_pane_g1_cp2

0x91d9,	// (0x00033fd5) list_single_graphic_pane_g2_cp2_ParamLimits

0x91d9,	// (0x00033fd5) list_single_graphic_pane_g2_cp2

0x91e5,	// (0x00033fe1) list_single_graphic_pane_g3_cp2

0xa799,	// (0x00035595) list_single_graphic_pane_t1_cp2_ParamLimits

0xa799,	// (0x00035595) list_single_graphic_pane_t1_cp2

0x91d9,	// (0x00033fd5) list_single_number_pane_g1_cp2_ParamLimits

0x91d9,	// (0x00033fd5) list_single_number_pane_g1_cp2

0x91e5,	// (0x00033fe1) list_single_number_pane_g2_cp2

0xa799,	// (0x00035595) list_single_number_pane_t1_cp2_ParamLimits

0xa799,	// (0x00035595) list_single_number_pane_t1_cp2

0xa7af,	// (0x000355ab) list_single_number_pane_t2_cp2_ParamLimits

0xa7af,	// (0x000355ab) list_single_number_pane_t2_cp2

0x8fe2,	// (0x00033dde) list_double2_pane_g1_cp2_ParamLimits

0x8fe2,	// (0x00033dde) list_double2_pane_g1_cp2

0x8ff3,	// (0x00033def) list_double2_pane_g2_cp2

0x914d,	// (0x00033f49) list_double2_pane_t1_cp2_ParamLimits

0x914d,	// (0x00033f49) list_double2_pane_t1_cp2

0x9163,	// (0x00033f5f) list_double2_pane_t2_cp2_ParamLimits

0x9163,	// (0x00033f5f) list_double2_pane_t2_cp2

0x9175,	// (0x00033f71) list_double_pane_g1_cp2_ParamLimits

0x9175,	// (0x00033f71) list_double_pane_g1_cp2

0x9181,	// (0x00033f7d) list_double_pane_g2_cp2

0x9189,	// (0x00033f85) list_double_pane_t1_cp2_ParamLimits

0x9189,	// (0x00033f85) list_double_pane_t1_cp2

0x919f,	// (0x00033f9b) list_double_pane_t2_cp2_ParamLimits

0x919f,	// (0x00033f9b) list_double_pane_t2_cp2

0x91c9,	// (0x00033fc5) list_single_pane_cp2_g3

0x91d9,	// (0x00033fd5) list_single_pane_g1_cp2_ParamLimits

0x91d9,	// (0x00033fd5) list_single_pane_g1_cp2

0x91e5,	// (0x00033fe1) list_single_pane_g2_cp2

0x91ed,	// (0x00033fe9) list_single_pane_t1_cp2_ParamLimits

0x91ed,	// (0x00033fe9) list_single_pane_t1_cp2

0x9205,	// (0x00034001) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9205,	// (0x00034001) list_single_large_graphic_pane_g1_cp2

0x9211,	// (0x0003400d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9211,	// (0x0003400d) list_single_large_graphic_pane_g2_cp2

0x921d,	// (0x00034019) list_single_large_graphic_pane_g3_cp2

0x9225,	// (0x00034021) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9225,	// (0x00034021) list_single_large_graphic_pane_g4_cp1

0x923f,	// (0x0003403b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x923f,	// (0x0003403b) list_single_large_graphic_pane_t1_cp2

0xa765,	// (0x00035561) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa765,	// (0x00035561) list_single_graphic_heading_pane_g1_cp2

0xa732,	// (0x0003552e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa732,	// (0x0003552e) list_single_graphic_heading_pane_g4_cp2

0x91e5,	// (0x00033fe1) list_single_graphic_heading_pane_g5_cp2

0xa771,	// (0x0003556d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa771,	// (0x0003556d) list_single_graphic_heading_pane_t1_cp2

0xa787,	// (0x00035583) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa787,	// (0x00035583) list_single_graphic_heading_pane_t2_cp2

0xa726,	// (0x00035522) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa726,	// (0x00035522) list_single_2graphic_pane_g1_cp2

0xa732,	// (0x0003552e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa732,	// (0x0003552e) list_single_2graphic_pane_g2_cp2

0x91e5,	// (0x00033fe1) list_single_2graphic_pane_g3_cp2

0xa743,	// (0x0003553f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa743,	// (0x0003553f) list_single_2graphic_pane_g4_cp2

0xa74f,	// (0x0003554b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa74f,	// (0x0003554b) list_single_2graphic_pane_t1_cp2

0x767e,	// (0x0003247a) list_highlight_pane_g10_cp1

0xa2f2,	// (0x000350ee) list_highlight_pane_g1_cp1

0xa2fa,	// (0x000350f6) list_highlight_pane_g2_cp1

0xa302,	// (0x000350fe) list_highlight_pane_g3_cp1

0xa30a,	// (0x00035106) list_highlight_pane_g4_cp1

0xa312,	// (0x0003510e) list_highlight_pane_g5_cp1

0xa31a,	// (0x00035116) list_highlight_pane_g6_cp1

0xa322,	// (0x0003511e) list_highlight_pane_g7_cp1

0xa32a,	// (0x00035126) list_highlight_pane_g8_cp1

0xa332,	// (0x0003512e) list_highlight_pane_g9_cp1

0xa212,	// (0x0003500e) form_field_slider_pane_t3

0xa220,	// (0x0003501c) form_field_slider_pane_t4

0xa22e,	// (0x0003502a) slider_form_pane_ParamLimits

0xa22e,	// (0x0003502a) slider_form_pane

0x7688,	// (0x00032484) control_abbreviations

0x7688,	// (0x00032484) control_conventions

0x7688,	// (0x00032484) control_definitions

0x7688,	// (0x00032484) format_table_attribute

0xaa18,	// (0x00035814) bg_popup_preview_window_pane_g9

0x7688,	// (0x00032484) format_table_data2

0x7688,	// (0x00032484) format_table_data3

0x7688,	// (0x00032484) format_table_data_example

0x0008,

0x7688,	// (0x00032484) intro_purpose

0xf8f5,	// (0x0003a6f1) bg_popup_preview_window_pane_g

0x7688,	// (0x00032484) texts_category

0x7688,	// (0x00032484) texts_graphics

0x9255,	// (0x00034051) text_digital

0x9264,	// (0x00034060) text_primary

0x9273,	// (0x0003406f) text_primary_small

0x9282,	// (0x0003407e) text_secondary

0x9291,	// (0x0003408d) text_title

0xb14a,	// (0x00035f46) bg_passive_tab_pane_g1_cp3_srt

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp3_srt

0xb153,	// (0x00035f4f) bg_passive_tab_pane_g3_cp3_srt

0x7768,	// (0x00032564) bg_active_tab_pane_cp3_srt_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp3_srt

0xb15c,	// (0x00035f58) tabs_4_active_pane_srt_g1

0xb164,	// (0x00035f60) tabs_4_active_pane_srt_t1_ParamLimits

0xb164,	// (0x00035f60) tabs_4_active_pane_srt_t1

0xb14a,	// (0x00035f46) bg_active_tab_pane_g1_cp3_copy1

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp3_copy1

0xb153,	// (0x00035f4f) bg_active_tab_pane_g3_cp3_copy1

0x7768,	// (0x00032564) tabs_2_long_active_pane_srt_ParamLimits

0x7768,	// (0x00032564) tabs_2_long_active_pane_srt

0x7768,	// (0x00032564) tabs_2_long_passive_pane_srt_ParamLimits

0x7768,	// (0x00032564) tabs_2_long_passive_pane_srt

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp4_srt

0xae5c,	// (0x00035c58) bg_passive_tab_pane_g1_cp4_srt

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp4_srt

0xae65,	// (0x00035c61) bg_passive_tab_pane_g3_cp4_srt

0x87da,	// (0x000335d6) bg_active_tab_pane_cp4_srt_ParamLimits

0x87da,	// (0x000335d6) bg_active_tab_pane_cp4_srt

0xae6e,	// (0x00035c6a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6e,	// (0x00035c6a) tabs_2_long_active_pane_srt_t1

0xae5c,	// (0x00035c58) bg_active_tab_pane_g1_cp4_srt

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp4_srt

0xae65,	// (0x00035c61) bg_active_tab_pane_g3_cp4_srt

0x79e3,	// (0x000327df) tabs_3_long_active_pane_srt_ParamLimits

0x79e3,	// (0x000327df) tabs_3_long_active_pane_srt

0x79e3,	// (0x000327df) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x79e3,	// (0x000327df) tabs_3_long_passive_pane_cp_srt

0x79e3,	// (0x000327df) tabs_3_long_passive_pane_srt_ParamLimits

0x79e3,	// (0x000327df) tabs_3_long_passive_pane_srt

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp5_srt

0x8f77,	// (0x00033d73) bg_passive_tab_pane_g1_cp5_srt

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp5_srt

0x8f80,	// (0x00033d7c) bg_passive_tab_pane_g3_cp5_srt

0x87da,	// (0x000335d6) bg_active_tab_pane_cp5_srt_ParamLimits

0x87da,	// (0x000335d6) bg_active_tab_pane_cp5_srt

0xae4a,	// (0x00035c46) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae4a,	// (0x00035c46) tabs_3_long_active_pane_srt_t1

0x8f77,	// (0x00033d73) bg_active_tab_pane_g1_cp5_srt

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp5_srt

0x8f80,	// (0x00033d7c) bg_active_tab_pane_g3_cp5_srt

0xae3c,	// (0x00035c38) navi_text_pane_srt_t1

0xae34,	// (0x00035c30) navi_icon_pane_srt_g1

0x9458,	// (0x00034254) midp_editing_number_pane_srt

0x92a0,	// (0x0003409c) midp_ticker_pane_srt

0x9460,	// (0x0003425c) midp_ticker_pane_srt_g1

0x9468,	// (0x00034264) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003a574) midp_ticker_pane_srt_g

0x9470,	// (0x0003426c) midp_ticker_pane_srt_t1

0xae25,	// (0x00035c21) midp_editing_number_pane_t1_copy1

0x87fb,	// (0x000335f7) listscroll_midp_pane

0x87fb,	// (0x000335f7) midp_form_pane

0x930a,	// (0x00034106) midp_info_popup_window_ParamLimits

0x930a,	// (0x00034106) midp_info_popup_window

0x86c3,	// (0x000334bf) bg_popup_sub_pane_cp50_ParamLimits

0x86c3,	// (0x000334bf) bg_popup_sub_pane_cp50

0x9f2a,	// (0x00034d26) listscroll_midp_info_pane_ParamLimits

0x9f2a,	// (0x00034d26) listscroll_midp_info_pane

0x9f12,	// (0x00034d0e) listscroll_form_midp_pane_ParamLimits

0x9f12,	// (0x00034d0e) listscroll_form_midp_pane

0x9f1e,	// (0x00034d1a) scroll_bar_cp050

0x9ef2,	// (0x00034cee) list_midp_pane

0xbbdc,	// (0x000369d8) signal_pane_g2_cp

0x9e2c,	// (0x00034c28) listscroll_midp_info_pane_t1_ParamLimits

0x9e2c,	// (0x00034c28) listscroll_midp_info_pane_t1

0x9e44,	// (0x00034c40) listscroll_midp_info_pane_t2_ParamLimits

0x9e44,	// (0x00034c40) listscroll_midp_info_pane_t2

0x9e82,	// (0x00034c7e) listscroll_midp_info_pane_t3_ParamLimits

0x9e82,	// (0x00034c7e) listscroll_midp_info_pane_t3

0x9ebc,	// (0x00034cb8) listscroll_midp_info_pane_t4_ParamLimits

0x9ebc,	// (0x00034cb8) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0003a62c) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0003a62c) listscroll_midp_info_pane_t

0x8787,	// (0x00033583) scroll_pane_cp21

0x9dca,	// (0x00034bc6) form_midp_field_choice_group_pane

0x9dd3,	// (0x00034bcf) form_midp_field_text_pane

0x9e12,	// (0x00034c0e) form_midp_field_time_pane

0x9e1a,	// (0x00034c16) form_midp_gauge_slider_pane

0x9e23,	// (0x00034c1f) form_midp_gauge_wait_pane

0x7688,	// (0x00032484) form_midp_image_pane

0x6349,	// (0x00031145) list_single_midp_pane_ParamLimits

0x6349,	// (0x00031145) list_single_midp_pane

0x9d82,	// (0x00034b7e) form_midp_field_text_pane_t1

0x9b4c,	// (0x00034948) input_focus_pane_cp050

0x9db9,	// (0x00034bb5) list_midp_form_text_pane

0x9d51,	// (0x00034b4d) form_midp_field_choice_group_pane_t1

0x9d5f,	// (0x00034b5b) input_focus_pane_cp051

0x9d73,	// (0x00034b6f) list_midp_choice_pane

0x7688,	// (0x00032484) status_idle_pane

0x9d35,	// (0x00034b31) form_midp_field_time_pane_t1

0x767e,	// (0x0003247a) wait_anim_pane_g2_copy1

0x9d43,	// (0x00034b3f) form_midp_field_time_pane_t2

0x0001,

0x93b8,	// (0x000341b4) aid_navinavi_width_2_pane

0xf82b,	// (0x0003a627) form_midp_field_time_pane_t

0x7688,	// (0x00032484) input_focus_pane_cp052

0x7688,	// (0x00032484) bg_input_focus_pane_cp040

0x9cf5,	// (0x00034af1) form_midp_gauge_slider_pane_t1

0x9d03,	// (0x00034aff) form_midp_gauge_slider_pane_t2

0x9d11,	// (0x00034b0d) form_midp_gauge_slider_pane_t3

0x9d1f,	// (0x00034b1b) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0003a61e) form_midp_gauge_slider_pane_t

0x9d2d,	// (0x00034b29) form_midp_slider_pane

0x7768,	// (0x00032564) bg_input_focus_pane_cp041_ParamLimits

0x7768,	// (0x00032564) bg_input_focus_pane_cp041

0x9cc2,	// (0x00034abe) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc2,	// (0x00034abe) form_midp_gauge_wait_pane_t1

0x9cd4,	// (0x00034ad0) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd4,	// (0x00034ad0) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0003a619) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0003a619) form_midp_gauge_wait_pane_t

0x9ce6,	// (0x00034ae2) form_midp_wait_pane_ParamLimits

0x9ce6,	// (0x00034ae2) form_midp_wait_pane

0x9c8c,	// (0x00034a88) form_midp_image_pane_g1

0x9c95,	// (0x00034a91) form_midp_image_pane_t1

0x9ca4,	// (0x00034aa0) form_midp_image_pane_t2

0x9cb3,	// (0x00034aaf) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0003a612) form_midp_image_pane_t

0x9c83,	// (0x00034a7f) list_single_midp_pane_g1

0x633a,	// (0x00031136) list_single_midp_pane_t1

0x9c5b,	// (0x00034a57) list_midp_form_item_pane_ParamLimits

0x9c5b,	// (0x00034a57) list_midp_form_item_pane

0x9360,	// (0x0003415c) list_midp_form_item_pane_t1

0x936f,	// (0x0003416b) midp_ticker_pane_g1

0x937b,	// (0x00034177) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003a55a) midp_ticker_pane_g

0x9387,	// (0x00034183) midp_ticker_pane_t1

0xb076,	// (0x00035e72) midp_editing_number_pane_t1

0xb054,	// (0x00035e50) midp_editing_number_pane

0xb063,	// (0x00035e5f) midp_ticker_pane

0xae15,	// (0x00035c11) ai_message_heading_pane

0x7688,	// (0x00032484) bg_popup_window_pane_cp14

0xae1d,	// (0x00035c19) listscroll_ai_message_pane

0xad9f,	// (0x00035b9b) ai_message_heading_pane_g1_ParamLimits

0xad9f,	// (0x00035b9b) ai_message_heading_pane_g1

0xadab,	// (0x00035ba7) ai_message_heading_pane_g2_ParamLimits

0xadab,	// (0x00035ba7) ai_message_heading_pane_g2

0xadb7,	// (0x00035bb3) ai_message_heading_pane_g3_ParamLimits

0xadb7,	// (0x00035bb3) ai_message_heading_pane_g3

0xadc3,	// (0x00035bbf) ai_message_heading_pane_g4_ParamLimits

0xadc3,	// (0x00035bbf) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0003a753) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0003a753) ai_message_heading_pane_g

0xadcf,	// (0x00035bcb) ai_message_heading_pane_t1_ParamLimits

0xadcf,	// (0x00035bcb) ai_message_heading_pane_t1

0xade9,	// (0x00035be5) ai_message_heading_pane_t2_ParamLimits

0xade9,	// (0x00035be5) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0003a75c) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0003a75c) ai_message_heading_pane_t

0xadfb,	// (0x00035bf7) bg_popup_heading_pane_cp1_ParamLimits

0xadfb,	// (0x00035bf7) bg_popup_heading_pane_cp1

0xad8d,	// (0x00035b89) list_ai_message_pane_ParamLimits

0xad8d,	// (0x00035b89) list_ai_message_pane

0x8787,	// (0x00033583) scroll_pane_cp10

0xad29,	// (0x00035b25) list_ai_message_pane_g1

0xad31,	// (0x00035b2d) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0003a730) list_ai_message_pane_g

0xad39,	// (0x00035b35) list_ai_message_pane_t1_ParamLimits

0xad39,	// (0x00035b35) list_ai_message_pane_t1

0xad4e,	// (0x00035b4a) list_ai_message_pane_t2_ParamLimits

0xad4e,	// (0x00035b4a) list_ai_message_pane_t2

0xad63,	// (0x00035b5f) list_ai_message_pane_t3_ParamLimits

0xad63,	// (0x00035b5f) list_ai_message_pane_t3

0xad78,	// (0x00035b74) list_ai_message_pane_t4_ParamLimits

0xad78,	// (0x00035b74) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0003a735) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0003a735) list_ai_message_pane_t

0xad14,	// (0x00035b10) cell_ai_soft_ind_pane_ParamLimits

0xad14,	// (0x00035b10) cell_ai_soft_ind_pane

0x9399,	// (0x00034195) cell_ai_soft_ind_pane_g1_ParamLimits

0x9399,	// (0x00034195) cell_ai_soft_ind_pane_g1

0x7688,	// (0x00032484) grid_highlight_cp1

0x93a6,	// (0x000341a2) text_secondary_cp56_ParamLimits

0x93a6,	// (0x000341a2) text_secondary_cp56

0xace9,	// (0x00035ae5) example_general_pane_ParamLimits

0xace9,	// (0x00035ae5) example_general_pane

0xacf5,	// (0x00035af1) example_parent_pane_g1_ParamLimits

0xacf5,	// (0x00035af1) example_parent_pane_g1

0xad01,	// (0x00035afd) example_parent_pane_t1_ParamLimits

0xad01,	// (0x00035afd) example_parent_pane_t1

0x5ef2,	// (0x00030cee) popup_preview_text_window_ParamLimits

0x5ef2,	// (0x00030cee) popup_preview_text_window

0x91d1,	// (0x00033fcd) list_single_pane_cp2_g4

0x7a99,	// (0x00032895) bg_popup_preview_window_pane_ParamLimits

0x7a99,	// (0x00032895) bg_popup_preview_window_pane

0xaa20,	// (0x0003581c) popup_preview_text_window_t1_ParamLimits

0xaa20,	// (0x0003581c) popup_preview_text_window_t1

0xaa3e,	// (0x0003583a) popup_preview_text_window_t2_ParamLimits

0xaa3e,	// (0x0003583a) popup_preview_text_window_t2

0xaa87,	// (0x00035883) popup_preview_text_window_t3_ParamLimits

0xaa87,	// (0x00035883) popup_preview_text_window_t3

0xaacc,	// (0x000358c8) popup_preview_text_window_t4_ParamLimits

0xaacc,	// (0x000358c8) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0003a704) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0003a704) popup_preview_text_window_t

0xab4a,	// (0x00035946) scroll_pane_cp11

0x9ad8,	// (0x000348d4) bg_popup_preview_window_pane_g1

0xa9e0,	// (0x000357dc) bg_popup_preview_window_pane_g2

0xa9e8,	// (0x000357e4) bg_popup_preview_window_pane_g3

0xa9f0,	// (0x000357ec) bg_popup_preview_window_pane_g4

0xa9f8,	// (0x000357f4) bg_popup_preview_window_pane_g5

0xaa00,	// (0x000357fc) bg_popup_preview_window_pane_g6

0xaa08,	// (0x00035804) bg_popup_preview_window_pane_g7

0xaa10,	// (0x0003580c) bg_popup_preview_window_pane_g8

0x496e,	// (0x0002f76a) aid_popup_width_pane

0x5ed0,	// (0x00030ccc) popup_midp_note_alarm_window_ParamLimits

0x5ed0,	// (0x00030ccc) popup_midp_note_alarm_window

0x860b,	// (0x00033407) data_form_pane_ParamLimits

0x5335,	// (0x00030131) form_field_data_pane_g1

0x533f,	// (0x0003013b) form_field_data_pane_t1_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_ParamLimits

0x5357,	// (0x00030153) data_form_wide_pane_ParamLimits

0x5368,	// (0x00030164) form_field_data_wide_pane_g1

0x5374,	// (0x00030170) form_field_data_wide_pane_t1_ParamLimits

0x8388,	// (0x00033184) input_focus_pane_cp6_ParamLimits

0x8734,	// (0x00033530) input_popup_find_pane_g1_ParamLimits

0x8734,	// (0x00033530) input_popup_find_pane_g1

0x55ea,	// (0x000303e6) aid_navi_side_left_pane

0x55ff,	// (0x000303fb) aid_navi_side_right_pane

0xa3ed,	// (0x000351e9) bg_popup_window_pane_cp30_ParamLimits

0xa3ed,	// (0x000351e9) bg_popup_window_pane_cp30

0xa473,	// (0x0003526f) popup_midp_note_alarm_window_g1_ParamLimits

0xa473,	// (0x0003526f) popup_midp_note_alarm_window_g1

0xa4a3,	// (0x0003529f) popup_midp_note_alarm_window_t1_ParamLimits

0xa4a3,	// (0x0003529f) popup_midp_note_alarm_window_t1

0xa544,	// (0x00035340) popup_midp_note_alarm_window_t2_ParamLimits

0xa544,	// (0x00035340) popup_midp_note_alarm_window_t2

0xa5f2,	// (0x000353ee) popup_midp_note_alarm_window_t3_ParamLimits

0xa5f2,	// (0x000353ee) popup_midp_note_alarm_window_t3

0xa624,	// (0x00035420) popup_midp_note_alarm_window_t4_ParamLimits

0xa624,	// (0x00035420) popup_midp_note_alarm_window_t4

0xa64a,	// (0x00035446) popup_midp_note_alarm_window_t5_ParamLimits

0xa64a,	// (0x00035446) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0003a6a1) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0003a6a1) popup_midp_note_alarm_window_t

0xa6f6,	// (0x000354f2) wait_bar_pane_cp1_ParamLimits

0xa6f6,	// (0x000354f2) wait_bar_pane_cp1

0x7688,	// (0x00032484) wait_anim_pane_copy1

0x7688,	// (0x00032484) wait_border_pane_copy1

0xa0d3,	// (0x00034ecf) wait_border_pane_g1_copy1

0x538e,	// (0x0003018a) form_field_popup_pane_g1

0x5396,	// (0x00030192) form_field_popup_pane_t1_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_cp7_ParamLimits

0x8645,	// (0x00033441) list_form_pane_ParamLimits

0x53ae,	// (0x000301aa) form_field_popup_wide_pane_g1

0x53b6,	// (0x000301b2) form_field_popup_wide_pane_t1_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_cp8_ParamLimits

0x8651,	// (0x0003344d) list_form_wide_pane_ParamLimits

0xb1d6,	// (0x00035fd2) aid_size_cell_graphic_pane

0x5440,	// (0x0003023c) data_form_pane_t1_ParamLimits

0x65cf,	// (0x000313cb) data_form_wide_pane_t1_ParamLimits

0x96b3,	// (0x000344af) bg_status_flat_pane

0x76c8,	// (0x000324c4) title_pane_t1_ParamLimits

0x7730,	// (0x0003252c) title_pane_t2_ParamLimits

0x7756,	// (0x00032552) title_pane_t3_ParamLimits

0xf55d,	// (0x0003a359) title_pane_t_ParamLimits

0x8c04,	// (0x00033a00) level_1_signal_ParamLimits

0x8c16,	// (0x00033a12) level_2_signal_ParamLimits

0x8c29,	// (0x00033a25) level_3_signal_ParamLimits

0x8c3c,	// (0x00033a38) level_4_signal_ParamLimits

0x8c4f,	// (0x00033a4b) level_5_signal_ParamLimits

0x8c62,	// (0x00033a5e) level_6_signal_ParamLimits

0x8c75,	// (0x00033a71) level_7_signal_ParamLimits

0x8c04,	// (0x00033a00) level_1_battery_ParamLimits

0x8c16,	// (0x00033a12) level_2_battery_ParamLimits

0x8c29,	// (0x00033a25) level_3_battery_ParamLimits

0x8c3c,	// (0x00033a38) level_4_battery_ParamLimits

0x8c4f,	// (0x00033a4b) level_5_battery_ParamLimits

0x8c62,	// (0x00033a5e) level_6_battery_ParamLimits

0x8c75,	// (0x00033a71) level_7_battery_ParamLimits

0xa2f2,	// (0x000350ee) bg_status_flat_pane_g1

0xa2fa,	// (0x000350f6) bg_status_flat_pane_g2

0xa302,	// (0x000350fe) bg_status_flat_pane_g3

0xa30a,	// (0x00035106) bg_status_flat_pane_g4

0xa312,	// (0x0003510e) bg_status_flat_pane_g5

0xa31a,	// (0x00035116) bg_status_flat_pane_g6

0xa322,	// (0x0003511e) bg_status_flat_pane_g7

0x777e,	// (0x0003257a) tabs_3_active_pane_t1_ParamLimits

0x777e,	// (0x0003257a) tabs_3_passive_pane_t1_ParamLimits

0x7798,	// (0x00032594) tabs_4_active_pane_t1_ParamLimits

0x7798,	// (0x00032594) tabs_4_1_passive_pane_t1_ParamLimits

0x87c8,	// (0x000335c4) tabs_2_active_pane_t1_ParamLimits

0x87c8,	// (0x000335c4) tabs_2_passive_pane_t1_ParamLimits

0x87da,	// (0x000335d6) bg_active_tab_pane_cp4_ParamLimits

0x87e8,	// (0x000335e4) tabs_2_long_active_pane_t1_ParamLimits

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp4_ParamLimits

0x6211,	// (0x0003100d) list_single_midp_graphic_pane_t1_ParamLimits

0x87da,	// (0x000335d6) bg_active_tab_pane_cp5_ParamLimits

0x8807,	// (0x00033603) tabs_3_long_active_pane_t1_ParamLimits

0x87fb,	// (0x000335f7) bg_passive_tab_pane_cp5_ParamLimits

0x6211,	// (0x0003100d) list_single_midp_graphic_pane_t1

0x96b3,	// (0x000344af) bg_status_flat_pane_ParamLimits

0x9776,	// (0x00034572) indicator_pane_cp2_ParamLimits

0x9776,	// (0x00034572) indicator_pane_cp2

0x989b,	// (0x00034697) navi_pane_srt_ParamLimits

0x989b,	// (0x00034697) navi_pane_srt

0x98bf,	// (0x000346bb) popup_clock_digital_analogue_window_cp1

0x7845,	// (0x00032641) indicator_pane_t1

0x92a0,	// (0x0003409c) copy_highlight_pane

0x92a0,	// (0x0003409c) cursor_graphics_pane

0x92a0,	// (0x0003409c) graphic_within_text_pane

0x92a0,	// (0x0003409c) link_highlight_pane

0xab0d,	// (0x00035909) popup_preview_text_window_t5_ParamLimits

0xab0d,	// (0x00035909) popup_preview_text_window_t5

0x93c0,	// (0x000341bc) cursor_digital_pane

0x93c0,	// (0x000341bc) cursor_primary_pane

0x93d1,	// (0x000341cd) cursor_primary_small_pane

0x93d9,	// (0x000341d5) cursor_secondary_pane

0x93e1,	// (0x000341dd) cursor_title_pane

0x93c0,	// (0x000341bc) link_highlight_digital_pane

0x93c8,	// (0x000341c4) link_highlight_primary_pane

0x93d1,	// (0x000341cd) link_highlight_primary_small_pane

0x93d9,	// (0x000341d5) link_highlight_secondary_pane

0x93e1,	// (0x000341dd) link_highlight_title_pane

0x93c0,	// (0x000341bc) copy_highlight_digital_pane

0x93c0,	// (0x000341bc) copy_highlight_primary_pane

0x93d1,	// (0x000341cd) copy_highlight_primary_small_pane

0x93d9,	// (0x000341d5) copy_highlight_secondary_pane

0x93e1,	// (0x000341dd) copy_highlight_title_pane

0x93d9,	// (0x000341d5) graphic_text_digital_pane

0xa390,	// (0x0003518c) graphic_text_primary_pane

0xa399,	// (0x00035195) graphic_text_primary_small_pane

0x93d1,	// (0x000341cd) graphic_text_secondary_pane

0x93c0,	// (0x000341bc) graphic_text_title_pane

0x93e9,	// (0x000341e5) cursor_primary_pane_g1

0xa382,	// (0x0003517e) cursor_text_primary_t1

0xa36a,	// (0x00035166) cursor_primary_small_pane_g1

0xa374,	// (0x00035170) cursor_text_primary_small_t1

0xa352,	// (0x0003514e) cursor_primary_small_pane_g1_copy1

0xa35c,	// (0x00035158) cursor_text_primary_small_t1_copy1

0xa33a,	// (0x00035136) cursor_text_title_t1

0xa348,	// (0x00035144) cursor_title_pane_g1

0x93e9,	// (0x000341e5) cursor_digital_pane_g1

0x93f3,	// (0x000341ef) cursor_text_digital_t1

0x9418,	// (0x00034214) link_highlight_primary_pane_g1

0xa2e3,	// (0x000350df) link_highlight_primary_pane_t1

0x9401,	// (0x000341fd) link_highlight_primary_small_pane_g1

0x9409,	// (0x00034205) link_highlight_primary_small_pane_t1

0x9418,	// (0x00034214) link_highlight_secondary_pane_g1

0x9420,	// (0x0003421c) link_highlight_secondary_pane_t1

0xa257,	// (0x00035053) link_highlight_title_pane_g1

0xa25f,	// (0x0003505b) link_highlight_title_pane_t1

0xa240,	// (0x0003503c) link_highlight_digital_pane_g1

0xa248,	// (0x00035044) link_highlight_digital_pane_t1

0xa118,	// (0x00034f14) copy_highlight_primary_pane_g1

0xa120,	// (0x00034f1c) copy_highlight_primary_pane_t1

0xa0f2,	// (0x00034eee) copy_highlight_primary_small_pane_g1

0xa109,	// (0x00034f05) copy_highlight_primary_small_pane_t1

0x942f,	// (0x0003422b) copy_highlight_secondary_pane_g1

0x9437,	// (0x00034233) copy_highlight_secondary_pane_t1

0xa0f2,	// (0x00034eee) copy_highlight_title_pane_g1

0xa0fa,	// (0x00034ef6) copy_highlight_title_pane_t1

0xa118,	// (0x00034f14) copy_highlight_digital_pane_g1

0xb3a0,	// (0x0003619c) copy_highlight_digital_pane_t1

0xb2f4,	// (0x000360f0) graphic_text_primary_pane_g1

0xb384,	// (0x00036180) graphic_text_primary_pane_t1

0xb392,	// (0x0003618e) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0003a7d0) graphic_text_primary_pane_t

0xb360,	// (0x0003615c) graphic_text_primary_small_pane_g1

0xb368,	// (0x00036164) graphic_text_primary_small_pane_t1

0xb376,	// (0x00036172) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0003a7cb) graphic_text_primary_small_pane_t

0xb33c,	// (0x00036138) graphic_text_secondary_pane_g1

0xb344,	// (0x00036140) graphic_text_secondary_pane_t1

0xb352,	// (0x0003614e) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0003a7c6) graphic_text_secondary_pane_t

0xb318,	// (0x00036114) graphic_text_title_pane_g1

0xb320,	// (0x0003611c) graphic_text_title_pane_t1

0xb32e,	// (0x0003612a) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0003a7c1) graphic_text_title_pane_t

0xb2f4,	// (0x000360f0) graphic_text_digital_pane_g1

0xb2fc,	// (0x000360f8) graphic_text_digital_pane_t1

0xb30a,	// (0x00036106) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0003a7bc) graphic_text_digital_pane_t

0x7768,	// (0x00032564) navi_icon_pane_srt_ParamLimits

0x7768,	// (0x00032564) navi_icon_pane_srt

0x7688,	// (0x00032484) navi_midp_pane_srt

0x7688,	// (0x00032484) navi_navi_pane_srt

0x7768,	// (0x00032564) navi_text_pane_srt_ParamLimits

0x7768,	// (0x00032564) navi_text_pane_srt

0xb2bf,	// (0x000360bb) navi_navi_icon_text_pane_srt

0xb2c7,	// (0x000360c3) navi_navi_pane_srt_g1_ParamLimits

0xb2c7,	// (0x000360c3) navi_navi_pane_srt_g1

0xb2d9,	// (0x000360d5) navi_navi_pane_srt_g2_ParamLimits

0xb2d9,	// (0x000360d5) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0003a7b7) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0003a7b7) navi_navi_pane_srt_g

0xb2eb,	// (0x000360e7) navi_navi_tabs_pane_srt

0xb2bf,	// (0x000360bb) navi_navi_text_pane_srt

0xb2bf,	// (0x000360bb) navi_navi_volume_pane_srt

0xb2b0,	// (0x000360ac) navi_navi_text_pane_srt_t1

0x674b,	// (0x00031547) navi_navi_volume_pane_srt_g1

0x6753,	// (0x0003154f) volume_small_pane_srt_ParamLimits

0x6753,	// (0x0003154f) volume_small_pane_srt

0x5954,	// (0x00030750) volume_small_pane_srt_g1_ParamLimits

0x5954,	// (0x00030750) volume_small_pane_srt_g1

0x5964,	// (0x00030760) volume_small_pane_srt_g2_ParamLimits

0x5964,	// (0x00030760) volume_small_pane_srt_g2

0x5975,	// (0x00030771) volume_small_pane_srt_g3_ParamLimits

0x5975,	// (0x00030771) volume_small_pane_srt_g3

0x5986,	// (0x00030782) volume_small_pane_srt_g4_ParamLimits

0x5986,	// (0x00030782) volume_small_pane_srt_g4

0x5997,	// (0x00030793) volume_small_pane_srt_g5_ParamLimits

0x5997,	// (0x00030793) volume_small_pane_srt_g5

0x59a8,	// (0x000307a4) volume_small_pane_srt_g6_ParamLimits

0x59a8,	// (0x000307a4) volume_small_pane_srt_g6

0x59b9,	// (0x000307b5) volume_small_pane_srt_g7_ParamLimits

0x59b9,	// (0x000307b5) volume_small_pane_srt_g7

0x59ca,	// (0x000307c6) volume_small_pane_srt_g8_ParamLimits

0x59ca,	// (0x000307c6) volume_small_pane_srt_g8

0x59db,	// (0x000307d7) volume_small_pane_srt_g9_ParamLimits

0x59db,	// (0x000307d7) volume_small_pane_srt_g9

0x59ec,	// (0x000307e8) volume_small_pane_srt_g10_ParamLimits

0x59ec,	// (0x000307e8) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003a55f) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003a55f) volume_small_pane_srt_g

0x7b42,	// (0x0003293e) query_popup_data_pane_cp2

0xb296,	// (0x00036092) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb296,	// (0x00036092) navi_navi_icon_text_pane_srt_t1

0xa390,	// (0x0003518c) navi_tabs_2_long_pane_srt

0xa390,	// (0x0003518c) navi_tabs_2_pane_srt

0xa390,	// (0x0003518c) navi_tabs_3_long_pane_srt

0xa390,	// (0x0003518c) navi_tabs_3_pane_srt

0xa390,	// (0x0003518c) navi_tabs_4_pane_srt

0x672b,	// (0x00031527) tabs_2_active_pane_srt_ParamLimits

0x672b,	// (0x00031527) tabs_2_active_pane_srt

0x673b,	// (0x00031537) tabs_2_passive_pane_srt_ParamLimits

0x673b,	// (0x00031537) tabs_2_passive_pane_srt

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp1_srt

0xb262,	// (0x0003605e) bg_passive_tab_pane_g1_cp1_srt

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp1_srt

0xb26b,	// (0x00036067) bg_passive_tab_pane_g3_cp1_srt

0x7768,	// (0x00032564) bg_active_tab_pane_cp1_srt_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp1_srt

0xb274,	// (0x00036070) tabs_2_active_pane_srt_g1

0xb27c,	// (0x00036078) tabs_2_active_pane_srt_t1_ParamLimits

0xb27c,	// (0x00036078) tabs_2_active_pane_srt_t1

0xb262,	// (0x0003605e) bg_active_tab_pane_g1_cp1_srt

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp1_srt

0xb26b,	// (0x00036067) bg_active_tab_pane_g3_cp1_srt

0x66f8,	// (0x000314f4) tabs_3_active_pane_srt_ParamLimits

0x66f8,	// (0x000314f4) tabs_3_active_pane_srt

0x6709,	// (0x00031505) tabs_3_passive_pane_cp_srt_ParamLimits

0x6709,	// (0x00031505) tabs_3_passive_pane_cp_srt

0x671a,	// (0x00031516) tabs_3_passive_pane_srt_ParamLimits

0x671a,	// (0x00031516) tabs_3_passive_pane_srt

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x95e0,	// (0x000343dc) bg_passive_tab_pane_cp2_srt

0x9446,	// (0x00034242) bg_passive_tab_pane_g1_cp2_srt

0x8eed,	// (0x00033ce9) bg_passive_tab_pane_g2_cp2_srt

0x944f,	// (0x0003424b) bg_passive_tab_pane_g3_cp2_srt

0x7768,	// (0x00032564) bg_active_tab_pane_cp2_srt_ParamLimits

0x7768,	// (0x00032564) bg_active_tab_pane_cp2_srt

0xb248,	// (0x00036044) tabs_3_active_pane_srt_g1

0xb250,	// (0x0003604c) tabs_3_active_pane_srt_t1_ParamLimits

0xb250,	// (0x0003604c) tabs_3_active_pane_srt_t1

0x9446,	// (0x00034242) bg_active_tab_pane_g1_cp2_srt

0x8eed,	// (0x00033ce9) bg_active_tab_pane_g2_cp2_srt

0x944f,	// (0x0003424b) bg_active_tab_pane_g3_cp2_srt

0x66b0,	// (0x000314ac) tabs_4_active_pane_srt_ParamLimits

0x66b0,	// (0x000314ac) tabs_4_active_pane_srt

0x66c2,	// (0x000314be) tabs_4_passive_pane_cp2_srt_ParamLimits

0x66c2,	// (0x000314be) tabs_4_passive_pane_cp2_srt

0x5b51,	// (0x0003094d) aid_size_cell_toolbar

0x87fb,	// (0x000335f7) main_idle_act_pane_ParamLimits

0x5d06,	// (0x00030b02) popup_large_graphic_colour_window_ParamLimits

0x606d,	// (0x00030e69) popup_toolbar_window_ParamLimits

0x606d,	// (0x00030e69) popup_toolbar_window

0xb085,	// (0x00035e81) list_single_graphic_2heading_pane_ParamLimits

0xb085,	// (0x00035e81) list_single_graphic_2heading_pane

0x89b7,	// (0x000337b3) aid_size_cell_apps_grid_lsc_pane

0x89c9,	// (0x000337c5) aid_size_cell_apps_grid_prt_pane

0x95e0,	// (0x000343dc) bg_wml_button_pane_cp1_ParamLimits

0x95e0,	// (0x000343dc) bg_wml_button_pane_cp1

0x9d82,	// (0x00034b7e) form_midp_field_text_pane_t1_ParamLimits

0x9b4c,	// (0x00034948) input_focus_pane_cp050_ParamLimits

0x9db9,	// (0x00034bb5) list_midp_form_text_pane_ParamLimits

0x9d5f,	// (0x00034b5b) input_focus_pane_cp051_ParamLimits

0x9d73,	// (0x00034b6f) list_midp_choice_pane_ParamLimits

0x9c05,	// (0x00034a01) list_single_2graphic_pane_cp3_ParamLimits

0x9c05,	// (0x00034a01) list_single_2graphic_pane_cp3

0x9c29,	// (0x00034a25) list_single_midp_graphic_pane_ParamLimits

0x9c29,	// (0x00034a25) list_single_midp_graphic_pane

0x48f6,	// (0x0002f6f2) list_single_graphic_2heading_pane_g1_ParamLimits

0x48f6,	// (0x0002f6f2) list_single_graphic_2heading_pane_g1

0x4902,	// (0x0002f6fe) list_single_graphic_2heading_pane_g4_ParamLimits

0x4902,	// (0x0002f6fe) list_single_graphic_2heading_pane_g4

0x490e,	// (0x0002f70a) list_single_graphic_2heading_pane_g5_ParamLimits

0x490e,	// (0x0002f70a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003a5b2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003a5b2) list_single_graphic_2heading_pane_g

0x491a,	// (0x0002f716) list_single_graphic_2heading_pane_t1_ParamLimits

0x491a,	// (0x0002f716) list_single_graphic_2heading_pane_t1

0x492e,	// (0x0002f72a) list_single_graphic_2heading_pane_t2_ParamLimits

0x492e,	// (0x0002f72a) list_single_graphic_2heading_pane_t2

0x494a,	// (0x0002f746) list_single_graphic_2heading_pane_t3_ParamLimits

0x494a,	// (0x0002f746) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003a5b9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003a5b9) list_single_graphic_2heading_pane_t

0x9a16,	// (0x00034812) bg_popup_sub_pane_cp2

0x9a40,	// (0x0003483c) grid_toobar_pane

0x611a,	// (0x00030f16) cell_toolbar_pane_ParamLimits

0x611a,	// (0x00030f16) cell_toolbar_pane

0x9a7c,	// (0x00034878) cell_toolbar_pane_g1_ParamLimits

0x9a7c,	// (0x00034878) cell_toolbar_pane_g1

0x9a90,	// (0x0003488c) cell_toolbar_pane_g2_ParamLimits

0x9a90,	// (0x0003488c) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003a5c7) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003a5c7) cell_toolbar_pane_g

0x9ab2,	// (0x000348ae) grid_highlight_pane_cp2_ParamLimits

0x9ab2,	// (0x000348ae) grid_highlight_pane_cp2

0x9acc,	// (0x000348c8) toolbar_button_pane

0x9ad8,	// (0x000348d4) toolbar_button_pane_g1

0x9ae0,	// (0x000348dc) toolbar_button_pane_g2

0x9ae8,	// (0x000348e4) toolbar_button_pane_g3

0x9af0,	// (0x000348ec) toolbar_button_pane_g4

0x9af8,	// (0x000348f4) toolbar_button_pane_g5

0x9b00,	// (0x000348fc) toolbar_button_pane_g6

0x9b08,	// (0x00034904) toolbar_button_pane_g7

0x9b10,	// (0x0003490c) toolbar_button_pane_g8

0x9b18,	// (0x00034914) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003a5cc) toolbar_button_pane_g

0x618c,	// (0x00030f88) list_single_2graphic_pane_g1_cp3_ParamLimits

0x618c,	// (0x00030f88) list_single_2graphic_pane_g1_cp3

0x6198,	// (0x00030f94) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6198,	// (0x00030f94) list_single_2graphic_pane_g2_cp3

0x61a9,	// (0x00030fa5) list_single_2graphic_pane_g3_cp3

0x61b1,	// (0x00030fad) list_single_2graphic_pane_g4_cp3_ParamLimits

0x61b1,	// (0x00030fad) list_single_2graphic_pane_g4_cp3

0x61bd,	// (0x00030fb9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x61bd,	// (0x00030fb9) list_single_2graphic_pane_t1_cp3

0x6205,	// (0x00031001) list_single_midp_graphic_pane_g2_ParamLimits

0x6205,	// (0x00031001) list_single_midp_graphic_pane_g2

0x5b59,	// (0x00030955) aid_zoom_text_primary

0x48da,	// (0x0002f6d6) aid_zoom_text_secondary

0x9503,	// (0x000342ff) status_small_pane_g7_ParamLimits

0x9503,	// (0x000342ff) status_small_pane_g7

0x9526,	// (0x00034322) status_small_pane_t1_ParamLimits

0x769f,	// (0x0003249b) title_pane_g2

0x0003,

0xf554,	// (0x0003a350) title_pane_g

0x8226,	// (0x00033022) aid_size_cell_colour_1_pane_ParamLimits

0x8226,	// (0x00033022) aid_size_cell_colour_1_pane

0x823a,	// (0x00033036) aid_size_cell_colour_2_pane_ParamLimits

0x823a,	// (0x00033036) aid_size_cell_colour_2_pane

0x824e,	// (0x0003304a) aid_size_cell_colour_3_pane_ParamLimits

0x824e,	// (0x0003304a) aid_size_cell_colour_3_pane

0x8262,	// (0x0003305e) aid_size_cell_colour_4_pane_ParamLimits

0x8262,	// (0x0003305e) aid_size_cell_colour_4_pane

0x5527,	// (0x00030323) title_pane_stacon_g1_ParamLimits

0x5527,	// (0x00030323) title_pane_stacon_g1

0xa177,	// (0x00034f73) popup_note_wait_window_g3_ParamLimits

0xa177,	// (0x00034f73) popup_note_wait_window_g3

0xa1ed,	// (0x00034fe9) popup_note_wait_window_t5_ParamLimits

0xa1ed,	// (0x00034fe9) popup_note_wait_window_t5

0x7688,	// (0x00032484) main_feb_china_hwr_fs_writing_pane

0x5beb,	// (0x000309e7) popup_feb_china_hwr_fs_window_ParamLimits

0x5beb,	// (0x000309e7) popup_feb_china_hwr_fs_window

0x629d,	// (0x00031099) aid_size_cell_hwr_fs_ParamLimits

0x629d,	// (0x00031099) aid_size_cell_hwr_fs

0x9b4c,	// (0x00034948) bg_popup_sub_pane_cp3_ParamLimits

0x9b4c,	// (0x00034948) bg_popup_sub_pane_cp3

0x62b2,	// (0x000310ae) grid_hwr_fs_pane_ParamLimits

0x62b2,	// (0x000310ae) grid_hwr_fs_pane

0x62ca,	// (0x000310c6) linegrid_hwr_fs_pane_ParamLimits

0x62ca,	// (0x000310c6) linegrid_hwr_fs_pane

0x62da,	// (0x000310d6) cell_hwr_fs_pane_ParamLimits

0x62da,	// (0x000310d6) cell_hwr_fs_pane

0x9b58,	// (0x00034954) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b58,	// (0x00034954) linegrid_hwr_fs_pane_g1

0x9b64,	// (0x00034960) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b64,	// (0x00034960) linegrid_hwr_fs_pane_g2

0x9b76,	// (0x00034972) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b76,	// (0x00034972) linegrid_hwr_fs_pane_g3

0x62fc,	// (0x000310f8) linegrid_hwr_fs_pane_g4_ParamLimits

0x62fc,	// (0x000310f8) linegrid_hwr_fs_pane_g4

0x6316,	// (0x00031112) linegrid_hwr_fs_pane_g5_ParamLimits

0x6316,	// (0x00031112) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0003a5f7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003a5f7) linegrid_hwr_fs_pane_g

0x9b82,	// (0x0003497e) cell_hwr_fs_pane_g1_ParamLimits

0x9b82,	// (0x0003497e) cell_hwr_fs_pane_g1

0x994d,	// (0x00034749) cell_hwr_fs_pane_g2_ParamLimits

0x994d,	// (0x00034749) cell_hwr_fs_pane_g2

0x9b98,	// (0x00034994) cell_hwr_fs_pane_g3_ParamLimits

0x9b98,	// (0x00034994) cell_hwr_fs_pane_g3

0x9ba5,	// (0x000349a1) cell_hwr_fs_pane_g4_ParamLimits

0x9ba5,	// (0x000349a1) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0003a602) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003a602) cell_hwr_fs_pane_g

0x632c,	// (0x00031128) cell_hwr_fs_pane_t1

0x7688,	// (0x00032484) grid_highlight_pane_cp6

0x7688,	// (0x00032484) main_idle_act2_pane

0x876e,	// (0x0003356a) aid_inside_area_popup_secondary

0xa830,	// (0x0003562c) aid_inside_area_window_primary_ParamLimits

0xa830,	// (0x0003562c) aid_inside_area_window_primary

0xb3af,	// (0x000361ab) ai2_news_ticker_pane

0xb3b7,	// (0x000361b3) aid_size_cell_ai1_link_ParamLimits

0xb3b7,	// (0x000361b3) aid_size_cell_ai1_link

0xb3d1,	// (0x000361cd) popup_ai2_data_window_ParamLimits

0xb3d1,	// (0x000361cd) popup_ai2_data_window

0xb3e7,	// (0x000361e3) popup_ai2_link_window_ParamLimits

0xb3e7,	// (0x000361e3) popup_ai2_link_window

0x9b4c,	// (0x00034948) bg_popup_sub_pane_cp4_ParamLimits

0x9b4c,	// (0x00034948) bg_popup_sub_pane_cp4

0xb3fb,	// (0x000361f7) grid_ai2_link_pane_ParamLimits

0xb3fb,	// (0x000361f7) grid_ai2_link_pane

0xb412,	// (0x0003620e) popup_ai2_link_window_g1_ParamLimits

0xb412,	// (0x0003620e) popup_ai2_link_window_g1

0xb41e,	// (0x0003621a) popup_ai2_link_window_g2_ParamLimits

0xb41e,	// (0x0003621a) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0003a7d5) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0003a7d5) popup_ai2_link_window_g

0xb42d,	// (0x00036229) ai2_mp_button_pane

0xb435,	// (0x00036231) ai2_mp_volume_pane

0x9d5f,	// (0x00034b5b) bg_popup_sub_pane_cp5_ParamLimits

0x9d5f,	// (0x00034b5b) bg_popup_sub_pane_cp5

0xb43d,	// (0x00036239) heading_ai2_gene_pane_ParamLimits

0xb43d,	// (0x00036239) heading_ai2_gene_pane

0xb449,	// (0x00036245) list_ai2_gene_pane_ParamLimits

0xb449,	// (0x00036245) list_ai2_gene_pane

0xb491,	// (0x0003628d) cell_ai2_link_pane_ParamLimits

0xb491,	// (0x0003628d) cell_ai2_link_pane

0xb4a7,	// (0x000362a3) cell_ai2_link_pane_g1

0x7688,	// (0x00032484) grid_highlight_pane_cp7

0x6768,	// (0x00031564) ai2_mp_volume_pane_g1

0xb577,	// (0x00036373) ai2_mp_volume_pane_g2

0xb4ec,	// (0x000362e8) list_ai2_gene_pane_t1

0xb57f,	// (0x0003637b) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0003a7ee) ai2_mp_volume_pane_g

0x6770,	// (0x0003156c) volume_small_pane_cp3

0xb587,	// (0x00036383) aid_size_cell_ai2_button

0xb58f,	// (0x0003638b) grid_ai2_button_pane

0xb598,	// (0x00036394) cell_ai2_button_pane_ParamLimits

0xb598,	// (0x00036394) cell_ai2_button_pane

0x767e,	// (0x0003247a) cell_ai2_button_pane_g1

0x7688,	// (0x00032484) grid_highlight_pane_cp8

0xb537,	// (0x00036333) ai2_gene_pane_t1_ParamLimits

0xb537,	// (0x00036333) ai2_gene_pane_t1

0x5b47,	// (0x00030943) aid_height_parent_landscape

0xaebc,	// (0x00035cb8) aid_height_set_list

0xaecd,	// (0x00035cc9) aid_size_parent

0xb1d6,	// (0x00035fd2) aid_size_cell_graphic_pane_ParamLimits

0xb459,	// (0x00036255) popup_ai2_data_window_g1_ParamLimits

0xb459,	// (0x00036255) popup_ai2_data_window_g1

0xb465,	// (0x00036261) ai2_news_ticker_pane_g1

0xb46d,	// (0x00036269) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0003a7da) ai2_news_ticker_pane_g

0xb475,	// (0x00036271) ai2_news_ticker_pane_t1

0xb483,	// (0x0003627f) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0003a7df) ai2_news_ticker_pane_t

0xb4b0,	// (0x000362ac) heading_ai2_gene_pane_g1

0xb4b8,	// (0x000362b4) heading_ai2_gene_pane_t1_ParamLimits

0xb4b8,	// (0x000362b4) heading_ai2_gene_pane_t1

0xb4cd,	// (0x000362c9) list_highlight_pane_cp6

0xb4d5,	// (0x000362d1) ai2_gene_pane_ParamLimits

0xb4d5,	// (0x000362d1) ai2_gene_pane

0xb4fa,	// (0x000362f6) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0003a7e4) list_ai2_gene_pane_t

0xb508,	// (0x00036304) list_highlight_pane_cp8_ParamLimits

0xb508,	// (0x00036304) list_highlight_pane_cp8

0xb519,	// (0x00036315) ai2_gene_pane_g1_ParamLimits

0xb519,	// (0x00036315) ai2_gene_pane_g1

0xb52b,	// (0x00036327) ai2_gene_pane_g2_ParamLimits

0xb52b,	// (0x00036327) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0003a7e9) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0003a7e9) ai2_gene_pane_g

0x85ad,	// (0x000333a9) scroll_pane_cp12

0x5b06,	// (0x00030902) control_pane_t3_ParamLimits

0x5b06,	// (0x00030902) control_pane_t3

0x9517,	// (0x00034313) status_small_pane_g8_ParamLimits

0x9517,	// (0x00034313) status_small_pane_g8

0x5cd1,	// (0x00030acd) popup_find_window_ParamLimits

0x5ee4,	// (0x00030ce0) popup_note_image_window_ParamLimits

0x614a,	// (0x00030f46) list_double2_graphic_pane_vc_g1_ParamLimits

0x614a,	// (0x00030f46) list_double2_graphic_pane_vc_g1

0x6156,	// (0x00030f52) list_double2_graphic_pane_vc_g2_ParamLimits

0x6156,	// (0x00030f52) list_double2_graphic_pane_vc_g2

0x6162,	// (0x00030f5e) list_double2_graphic_pane_vc_g3_ParamLimits

0x6162,	// (0x00030f5e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003a5c0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003a5c0) list_double2_graphic_pane_vc_g

0x616e,	// (0x00030f6a) list_double2_graphic_pane_vc_t1_ParamLimits

0x616e,	// (0x00030f6a) list_double2_graphic_pane_vc_t1

0x6156,	// (0x00030f52) list_single_heading_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_single_heading_pane_vc_g1

0x6162,	// (0x00030f5e) list_single_heading_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_single_heading_pane_vc_g

0x61d9,	// (0x00030fd5) list_single_heading_pane_vc_t1_ParamLimits

0x61d9,	// (0x00030fd5) list_single_heading_pane_vc_t1

0x61f1,	// (0x00030fed) list_single_heading_pane_vc_t2_ParamLimits

0x61f1,	// (0x00030fed) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0003a5e6) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0003a5e6) list_single_heading_pane_vc_t

0x6227,	// (0x00031023) list_setting_number_pane_vc_g1_ParamLimits

0x6227,	// (0x00031023) list_setting_number_pane_vc_g1

0x6233,	// (0x0003102f) list_setting_number_pane_vc_g2_ParamLimits

0x6233,	// (0x0003102f) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003a5eb) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003a5eb) list_setting_number_pane_vc_g

0x623f,	// (0x0003103b) list_setting_number_pane_vc_t1_ParamLimits

0x623f,	// (0x0003103b) list_setting_number_pane_vc_t1

0x6253,	// (0x0003104f) list_setting_number_pane_vc_t2_ParamLimits

0x6253,	// (0x0003104f) list_setting_number_pane_vc_t2

0x626f,	// (0x0003106b) list_setting_number_pane_vc_t3_ParamLimits

0x626f,	// (0x0003106b) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0003a5f0) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0003a5f0) list_setting_number_pane_vc_t

0x628d,	// (0x00031089) set_value_pane_vc_ParamLimits

0x628d,	// (0x00031089) set_value_pane_vc

0xb085,	// (0x00035e81) list_double2_graphic_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double2_graphic_pane_vc

0xb085,	// (0x00035e81) list_double2_large_graphic_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double2_large_graphic_pane_vc

0xb085,	// (0x00035e81) list_double2_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double2_pane_vc

0xb085,	// (0x00035e81) list_double_graphic_heading_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_graphic_heading_pane_vc

0xb085,	// (0x00035e81) list_double_graphic_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_graphic_pane_vc

0xb085,	// (0x00035e81) list_double_heading_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_heading_pane_vc

0xb085,	// (0x00035e81) list_double_large_graphic_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_large_graphic_pane_vc

0xb085,	// (0x00035e81) list_double_number_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_number_pane_vc

0xb085,	// (0x00035e81) list_double_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_pane_vc

0xb085,	// (0x00035e81) list_double_time_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_double_time_pane_vc

0xb085,	// (0x00035e81) list_setting_number_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_setting_number_pane_vc

0xb085,	// (0x00035e81) list_setting_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_setting_pane_vc

0xb085,	// (0x00035e81) list_single_graphic_heading_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_single_graphic_heading_pane_vc

0xb085,	// (0x00035e81) list_single_heading_pane_vc_ParamLimits

0xb085,	// (0x00035e81) list_single_heading_pane_vc

0x662f,	// (0x0003142b) list_single_number_heading_pane_vc_ParamLimits

0x662f,	// (0x0003142b) list_single_number_heading_pane_vc

0x614a,	// (0x00030f46) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x614a,	// (0x00030f46) list_double_graphic_heading_pane_vc_g1

0x6156,	// (0x00030f52) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6156,	// (0x00030f52) list_double_graphic_heading_pane_vc_g2

0x6162,	// (0x00030f5e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6162,	// (0x00030f5e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003a5c0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003a5c0) list_double_graphic_heading_pane_vc_g

0x6779,	// (0x00031575) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6779,	// (0x00031575) list_double_graphic_heading_pane_vc_t1

0x6795,	// (0x00031591) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6795,	// (0x00031591) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0003a7f5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0003a7f5) list_double_graphic_heading_pane_vc_t

0x6227,	// (0x00031023) list_setting_pane_vc_g1_ParamLimits

0x6227,	// (0x00031023) list_setting_pane_vc_g1

0x6233,	// (0x0003102f) list_setting_pane_vc_g2_ParamLimits

0x6233,	// (0x0003102f) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003a5eb) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003a5eb) list_setting_pane_vc_g

0x67b3,	// (0x000315af) list_setting_pane_vc_t1_ParamLimits

0x67b3,	// (0x000315af) list_setting_pane_vc_t1

0x7b85,	// (0x00032981) list_setting_pane_vc_t2_ParamLimits

0x7b85,	// (0x00032981) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0003a823) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0003a823) list_setting_pane_vc_t

0x628d,	// (0x00031089) set_value_pane_cp_vc_ParamLimits

0x628d,	// (0x00031089) set_value_pane_cp_vc

0x6156,	// (0x00030f52) list_single_number_heading_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_single_number_heading_pane_vc_g1

0x6162,	// (0x00030f5e) list_single_number_heading_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_single_number_heading_pane_vc_g

0x61d9,	// (0x00030fd5) list_single_number_heading_pane_vc_t1_ParamLimits

0x61d9,	// (0x00030fd5) list_single_number_heading_pane_vc_t1

0x7ba1,	// (0x0003299d) list_single_number_heading_pane_vc_t2_ParamLimits

0x7ba1,	// (0x0003299d) list_single_number_heading_pane_vc_t2

0x7bb5,	// (0x000329b1) list_single_number_heading_pane_vc_t3_ParamLimits

0x7bb5,	// (0x000329b1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x0003a828) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0003a828) list_single_number_heading_pane_vc_t

0x614a,	// (0x00030f46) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x614a,	// (0x00030f46) list_single_graphic_heading_pane_vc_g1

0x6156,	// (0x00030f52) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6156,	// (0x00030f52) list_single_graphic_heading_pane_vc_g4

0x6162,	// (0x00030f5e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6162,	// (0x00030f5e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0003a5c0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003a5c0) list_single_graphic_heading_pane_vc_g

0x61d9,	// (0x00030fd5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x61d9,	// (0x00030fd5) list_single_graphic_heading_pane_vc_t1

0x7bc7,	// (0x000329c3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7bc7,	// (0x000329c3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0003a82f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003a82f) list_single_graphic_heading_pane_vc_t

0x6156,	// (0x00030f52) list_double2_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_double2_pane_vc_g1

0x6162,	// (0x00030f5e) list_double2_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_double2_pane_vc_g

0x7bdb,	// (0x000329d7) list_double2_pane_vc_t1_ParamLimits

0x7bdb,	// (0x000329d7) list_double2_pane_vc_t1

0x7bf1,	// (0x000329ed) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7bf1,	// (0x000329ed) list_double2_large_graphic_pane_vc_g1

0x6156,	// (0x00030f52) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6156,	// (0x00030f52) list_double2_large_graphic_pane_vc_g2

0x6162,	// (0x00030f5e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6162,	// (0x00030f5e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa38,	// (0x0003a834) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0003a834) list_double2_large_graphic_pane_vc_g

0x7bfd,	// (0x000329f9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7bfd,	// (0x000329f9) list_double2_large_graphic_pane_vc_t1

0x7c13,	// (0x00032a0f) list_double_time_pane_vc_g1_ParamLimits

0x7c13,	// (0x00032a0f) list_double_time_pane_vc_g1

0x7c1f,	// (0x00032a1b) list_double_time_pane_vc_g2_ParamLimits

0x7c1f,	// (0x00032a1b) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x0003a83b) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x0003a83b) list_double_time_pane_vc_g

0x7c2b,	// (0x00032a27) list_double_time_pane_vc_t1_ParamLimits

0x7c2b,	// (0x00032a27) list_double_time_pane_vc_t1

0x7c4f,	// (0x00032a4b) list_double_time_pane_vc_t2_ParamLimits

0x7c4f,	// (0x00032a4b) list_double_time_pane_vc_t2

0x7c9e,	// (0x00032a9a) list_double_time_pane_vc_t3_ParamLimits

0x7c9e,	// (0x00032a9a) list_double_time_pane_vc_t3

0x7cb0,	// (0x00032aac) list_double_time_pane_vc_t4_ParamLimits

0x7cb0,	// (0x00032aac) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x0003a840) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x0003a840) list_double_time_pane_vc_t

0x6156,	// (0x00030f52) list_double_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_double_pane_vc_g1

0x6162,	// (0x00030f5e) list_double_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_double_pane_vc_g

0x7cc4,	// (0x00032ac0) list_double_pane_vc_t1_ParamLimits

0x7cc4,	// (0x00032ac0) list_double_pane_vc_t1

0x7cd8,	// (0x00032ad4) list_double_pane_vc_t2_ParamLimits

0x7cd8,	// (0x00032ad4) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x0003a849) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x0003a849) list_double_pane_vc_t

0x6156,	// (0x00030f52) list_double_number_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_double_number_pane_vc_g1

0x6162,	// (0x00030f5e) list_double_number_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_double_number_pane_vc_g

0x7cf0,	// (0x00032aec) list_double_number_pane_vc_t1_ParamLimits

0x7cf0,	// (0x00032aec) list_double_number_pane_vc_t1

0x7d04,	// (0x00032b00) list_double_number_pane_vc_t2_ParamLimits

0x7d04,	// (0x00032b00) list_double_number_pane_vc_t2

0x7d18,	// (0x00032b14) list_double_number_pane_vc_t3_ParamLimits

0x7d18,	// (0x00032b14) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x0003a84e) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x0003a84e) list_double_number_pane_vc_t

0x7d30,	// (0x00032b2c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7d30,	// (0x00032b2c) list_double_large_graphic_pane_vc_g1

0x7d41,	// (0x00032b3d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7d41,	// (0x00032b3d) list_double_large_graphic_pane_vc_g2

0x6162,	// (0x00030f5e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6162,	// (0x00030f5e) list_double_large_graphic_pane_vc_g3

0x7d50,	// (0x00032b4c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7d50,	// (0x00032b4c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x0003a855) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0003a855) list_double_large_graphic_pane_vc_g

0x7d5c,	// (0x00032b58) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7d5c,	// (0x00032b58) list_double_large_graphic_pane_vc_t1

0x7d75,	// (0x00032b71) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7d75,	// (0x00032b71) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x0003a85e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x0003a85e) list_double_large_graphic_pane_vc_t

0x6156,	// (0x00030f52) list_double_heading_pane_vc_g1_ParamLimits

0x6156,	// (0x00030f52) list_double_heading_pane_vc_g1

0x6162,	// (0x00030f5e) list_double_heading_pane_vc_g2_ParamLimits

0x6162,	// (0x00030f5e) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0003a5e1) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0003a5e1) list_double_heading_pane_vc_g

0x7d8e,	// (0x00032b8a) list_double_heading_pane_vc_t1_ParamLimits

0x7d8e,	// (0x00032b8a) list_double_heading_pane_vc_t1

0x61d9,	// (0x00030fd5) list_double_heading_pane_vc_t2_ParamLimits

0x61d9,	// (0x00030fd5) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x0003a863) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x0003a863) list_double_heading_pane_vc_t

0x614a,	// (0x00030f46) list_double_graphic_pane_vc_g1_ParamLimits

0x614a,	// (0x00030f46) list_double_graphic_pane_vc_g1

0x7da2,	// (0x00032b9e) list_double_graphic_pane_vc_g2_ParamLimits

0x7da2,	// (0x00032b9e) list_double_graphic_pane_vc_g2

0x7db1,	// (0x00032bad) list_double_graphic_pane_vc_g3_ParamLimits

0x7db1,	// (0x00032bad) list_double_graphic_pane_vc_g3

0x0002,

0xfa6c,	// (0x0003a868) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x0003a868) list_double_graphic_pane_vc_g

0x7dbd,	// (0x00032bb9) list_double_graphic_pane_vc_t1_ParamLimits

0x7dbd,	// (0x00032bb9) list_double_graphic_pane_vc_t1

0x7dd1,	// (0x00032bcd) list_double_graphic_pane_vc_t2_ParamLimits

0x7dd1,	// (0x00032bcd) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x0003a86f) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x0003a86f) list_double_graphic_pane_vc_t

0x497a,	// (0x0002f776) aid_size_cell_fastswap

0x4982,	// (0x0002f77e) aid_size_cell_touch_ParamLimits

0x4982,	// (0x0002f77e) aid_size_cell_touch

0x4be7,	// (0x0002f9e3) popup_fast_swap_wide_window_ParamLimits

0x4be7,	// (0x0002f9e3) popup_fast_swap_wide_window

0x4cf1,	// (0x0002faed) touch_pane_ParamLimits

0x4cf1,	// (0x0002faed) touch_pane

0x8603,	// (0x000333ff) button_value_adjust_pane_cp2

0x5289,	// (0x00030085) button_value_adjust_pane_cp4

0x52a9,	// (0x000300a5) form_field_data_pane_cp2

0x52c8,	// (0x000300c4) form_field_data_wide_pane_cp2

0x8a82,	// (0x0003387e) bg_scroll_pane_ParamLimits

0x5689,	// (0x00030485) scroll_handle_pane_ParamLimits

0x569d,	// (0x00030499) scroll_sc2_down_pane_ParamLimits

0x569d,	// (0x00030499) scroll_sc2_down_pane

0x8ab3,	// (0x000338af) scroll_sc2_up_pane_ParamLimits

0x8ab3,	// (0x000338af) scroll_sc2_up_pane

0xbcb1,	// (0x00036aad) grid_wheel_folder_pane_g1_ParamLimits

0xbcb1,	// (0x00036aad) grid_wheel_folder_pane_g1

0x58ec,	// (0x000306e8) clock_nsta_pane_cp2_ParamLimits

0x58ec,	// (0x000306e8) clock_nsta_pane_cp2

0x87fb,	// (0x000335f7) listscroll_midp_pane_ParamLimits

0x92a8,	// (0x000340a4) midp_canvas_pane

0x9592,	// (0x0003438e) nsta_clock_indic_pane

0x95c6,	// (0x000343c2) listscroll_form_pane_vc

0x95ce,	// (0x000343ca) listscroll_set_pane_vc_ParamLimits

0x95ce,	// (0x000343ca) listscroll_set_pane_vc

0x96cf,	// (0x000344cb) clock_nsta_pane

0x9744,	// (0x00034540) indicator_nsta_pane

0x9a16,	// (0x00034812) bg_popup_sub_pane_cp2_ParamLimits

0x9a2a,	// (0x00034826) find_pane_cp2_ParamLimits

0x9a2a,	// (0x00034826) find_pane_cp2

0x9a40,	// (0x0003483c) grid_toobar_pane_ParamLimits

0x9b20,	// (0x0003491c) list_form_gen_pane_vc_ParamLimits

0x9b20,	// (0x0003491c) list_form_gen_pane_vc

0x9b36,	// (0x00034932) scroll_pane_cp8_vc_ParamLimits

0x9b36,	// (0x00034932) scroll_pane_cp8_vc

0x9bb2,	// (0x000349ae) data_form_wide_pane_vc_ParamLimits

0x9bb2,	// (0x000349ae) data_form_wide_pane_vc

0x9bbe,	// (0x000349ba) form_field_data_wide_pane_vc_g1

0x9bc6,	// (0x000349c2) form_field_data_wide_pane_vc_t1_ParamLimits

0x9bc6,	// (0x000349c2) form_field_data_wide_pane_vc_t1

0x8617,	// (0x00033413) input_focus_pane_cp6_vc_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_cp6_vc

0x9ef2,	// (0x00034cee) list_midp_pane_ParamLimits

0x9efe,	// (0x00034cfa) scroll_pane_cp16_ParamLimits

0x9efe,	// (0x00034cfa) scroll_pane_cp16

0x9f4c,	// (0x00034d48) button_value_adjust_pane_ParamLimits

0x9f4c,	// (0x00034d48) button_value_adjust_pane

0xaedf,	// (0x00035cdb) button_value_adjust_pane_cp6_ParamLimits

0xaedf,	// (0x00035cdb) button_value_adjust_pane_cp6

0xb009,	// (0x00035e05) settings_code_pane_cp_ParamLimits

0xb009,	// (0x00035e05) settings_code_pane_cp

0x767e,	// (0x0003247a) cell_touch_pane_g1

0x767e,	// (0x0003247a) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003a505) cell_touch_pane_g

0xb5aa,	// (0x000363a6) cell_touch_pane_cp_ParamLimits

0xb5aa,	// (0x000363a6) cell_touch_pane_cp

0xb5ba,	// (0x000363b6) cell_touch_pane_ParamLimits

0xb5ba,	// (0x000363b6) cell_touch_pane

0x767e,	// (0x0003247a) scroll_sc2_down_pane_g1

0x767e,	// (0x0003247a) scroll_sc2_up_pane_g1

0x7688,	// (0x00032484) bg_set_opt_pane_cp4_vc

0xb5cc,	// (0x000363c8) list_set_graphic_pane_vc_g1_ParamLimits

0xb5cc,	// (0x000363c8) list_set_graphic_pane_vc_g1

0xb5d8,	// (0x000363d4) list_set_graphic_pane_vc_g2_ParamLimits

0xb5d8,	// (0x000363d4) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0003a7fa) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0003a7fa) list_set_graphic_pane_vc_g

0xb5e4,	// (0x000363e0) text_primary_small_cp13_vc_ParamLimits

0xb5e4,	// (0x000363e0) text_primary_small_cp13_vc

0xb5fc,	// (0x000363f8) list_set_graphic_pane_vc_ParamLimits

0xb5fc,	// (0x000363f8) list_set_graphic_pane_vc

0x7688,	// (0x00032484) input_focus_pane_cp2_vc

0x767e,	// (0x0003247a) setting_code_pane_vc_g1

0x77b3,	// (0x000325af) setting_code_pane_vc_t1

0xb60e,	// (0x0003640a) set_text_pane_vc_t1_ParamLimits

0xb60e,	// (0x0003640a) set_text_pane_vc_t1

0x7688,	// (0x00032484) input_focus_pane_cp1_vc

0xb62a,	// (0x00036426) list_set_text_pane_vc

0x767e,	// (0x0003247a) setting_text_pane_vc_g1

0x7688,	// (0x00032484) bg_set_opt_pane_cp2_vc

0x77aa,	// (0x000325a6) setting_slider_graphic_pane_vc_g1

0xb634,	// (0x00036430) setting_slider_graphic_pane_vc_t1

0xb644,	// (0x00036440) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0003a7ff) setting_slider_graphic_pane_vc_t

0xb654,	// (0x00036450) slider_set_pane_cp_vc

0xb65c,	// (0x00036458) slider_set_pane_vc_g1

0xb665,	// (0x00036461) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0003a804) slider_set_pane_vc_g

0x8672,	// (0x0003346e) set_opt_bg_pane_g1_copy1

0x867a,	// (0x00033476) set_opt_bg_pane_g2_copy1

0xb691,	// (0x0003648d) set_opt_bg_pane_g3_copy1

0x868a,	// (0x00033486) set_opt_bg_pane_g4_copy1

0x8692,	// (0x0003348e) set_opt_bg_pane_g5_copy1

0x869a,	// (0x00033496) set_opt_bg_pane_g6_copy1

0xb69b,	// (0x00036497) set_opt_bg_pane_g7_copy1

0xb6a3,	// (0x0003649f) set_opt_bg_pane_g8_copy1

0xb6ad,	// (0x000364a9) set_opt_bg_pane_g9_copy1

0x7688,	// (0x00032484) bg_set_opt_pane_cp_vc

0xb6b7,	// (0x000364b3) setting_slider_pane_vc_t1

0xb6c6,	// (0x000364c2) setting_slider_pane_vc_t2

0xb6d6,	// (0x000364d2) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0003a813) setting_slider_pane_vc_t

0xb6e6,	// (0x000364e2) slider_set_pane_vc

0x637b,	// (0x00031177) volume_set_pane_vc_g1

0x6384,	// (0x00031180) volume_set_pane_vc_g2

0x638d,	// (0x00031189) volume_set_pane_vc_g3

0x6396,	// (0x00031192) volume_set_pane_vc_g4

0x639f,	// (0x0003119b) volume_set_pane_vc_g5

0x63a8,	// (0x000311a4) volume_set_pane_vc_g6

0x63b1,	// (0x000311ad) volume_set_pane_vc_g7

0x63ba,	// (0x000311b6) volume_set_pane_vc_g8

0x63c3,	// (0x000311bf) volume_set_pane_vc_g9

0x63cc,	// (0x000311c8) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0003a6b8) volume_set_pane_vc_g

0xb6ee,	// (0x000364ea) volume_set_pane_vc

0xb6f6,	// (0x000364f2) button_value_adjust_pane_cp1_vc

0xb700,	// (0x000364fc) list_highlight_pane_cp2_vc

0xb709,	// (0x00036505) list_set_pane_vc_ParamLimits

0xb709,	// (0x00036505) list_set_pane_vc

0xb767,	// (0x00036563) main_pane_set_vc_t1_ParamLimits

0xb767,	// (0x00036563) main_pane_set_vc_t1

0xb77c,	// (0x00036578) main_pane_set_vc_t2_ParamLimits

0xb77c,	// (0x00036578) main_pane_set_vc_t2

0xb78e,	// (0x0003658a) main_pane_set_vc_t3_ParamLimits

0xb78e,	// (0x0003658a) main_pane_set_vc_t3

0xb7a2,	// (0x0003659e) main_pane_set_vc_t4_ParamLimits

0xb7a2,	// (0x0003659e) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x0003a81a) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x0003a81a) main_pane_set_vc_t

0xb7b6,	// (0x000365b2) setting_code_pane_vc_ParamLimits

0xb7b6,	// (0x000365b2) setting_code_pane_vc

0xb7c7,	// (0x000365c3) setting_slider_graphic_pane_vc

0xb7c7,	// (0x000365c3) setting_slider_pane_vc

0xb7c7,	// (0x000365c3) setting_text_pane_vc

0xb7c7,	// (0x000365c3) setting_volume_pane_vc

0xb7d1,	// (0x000365cd) scroll_pane_cp121_vc

0x85f1,	// (0x000333ed) set_content_pane_vc

0xb7d9,	// (0x000365d5) button_value_adjust_pane_g1

0xb7e2,	// (0x000365de) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x0003a874) button_value_adjust_pane_g

0xb7eb,	// (0x000365e7) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7eb,	// (0x000365e7) form_field_slider_wide_pane_vc_t1

0xb7ff,	// (0x000365fb) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb7ff,	// (0x000365fb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x0003a879) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0003a879) form_field_slider_wide_pane_vc_t

0x79e3,	// (0x000327df) input_focus_pane_cp10_vc_ParamLimits

0x79e3,	// (0x000327df) input_focus_pane_cp10_vc

0xb82d,	// (0x00036629) slider_cont_pane_cp1_vc_ParamLimits

0xb82d,	// (0x00036629) slider_cont_pane_cp1_vc

0xb83f,	// (0x0003663b) slider_form_pane_g1_cp2

0xb665,	// (0x00036461) slider_form_pane_g2_cp2

0xb86c,	// (0x00036668) form_field_slider_pane_vc_t3

0xb87a,	// (0x00036676) form_field_slider_pane_vc_t4

0xb888,	// (0x00036684) slider_form_pane_vc_ParamLimits

0xb888,	// (0x00036684) slider_form_pane_vc

0xb895,	// (0x00036691) form_field_slider_pane_vc_t1_ParamLimits

0xb895,	// (0x00036691) form_field_slider_pane_vc_t1

0xb7ff,	// (0x000365fb) form_field_slider_pane_vc_t2_ParamLimits

0xb7ff,	// (0x000365fb) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003a88b) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003a88b) form_field_slider_pane_vc_t

0x79e3,	// (0x000327df) input_focus_pane_cp9_vc_ParamLimits

0x79e3,	// (0x000327df) input_focus_pane_cp9_vc

0xb8b1,	// (0x000366ad) slider_cont_pane_vc_ParamLimits

0xb8b1,	// (0x000366ad) slider_cont_pane_vc

0xb8c5,	// (0x000366c1) list_form_graphic_pane_cp_vc_ParamLimits

0xb8c5,	// (0x000366c1) list_form_graphic_pane_cp_vc

0x9bbe,	// (0x000349ba) form_field_popup_wide_pane_vc_g1

0xb8da,	// (0x000366d6) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8da,	// (0x000366d6) form_field_popup_wide_pane_vc_t1

0x8617,	// (0x00033413) input_focus_pane_cp8_vc_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_cp8_vc

0xb91f,	// (0x0003671b) list_form_wide_pane_vc_ParamLimits

0xb91f,	// (0x0003671b) list_form_wide_pane_vc

0xb92b,	// (0x00036727) list_form_graphic_pane_vc_g1

0xb933,	// (0x0003672f) list_form_graphic_pane_vc_t1_ParamLimits

0xb933,	// (0x0003672f) list_form_graphic_pane_vc_t1

0x7768,	// (0x00032564) list_highlight_pane_cp5_vc_ParamLimits

0x7768,	// (0x00032564) list_highlight_pane_cp5_vc

0xb94f,	// (0x0003674b) list_form_graphic_pane_vc_ParamLimits

0xb94f,	// (0x0003674b) list_form_graphic_pane_vc

0x9bbe,	// (0x000349ba) form_field_popup_pane_vc_g1

0xb965,	// (0x00036761) form_field_popup_pane_vc_t1_ParamLimits

0xb965,	// (0x00036761) form_field_popup_pane_vc_t1

0x8617,	// (0x00033413) input_focus_pane_cp7_vc_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_cp7_vc

0xb97c,	// (0x00036778) list_form_pane_vc_ParamLimits

0xb97c,	// (0x00036778) list_form_pane_vc

0xb988,	// (0x00036784) data_form_pane_vc_t1_ParamLimits

0xb988,	// (0x00036784) data_form_pane_vc_t1

0x8672,	// (0x0003346e) input_focus_pane_vc_g1

0x867a,	// (0x00033476) input_focus_pane_vc_g2

0x8682,	// (0x0003347e) input_focus_pane_vc_g3

0x868a,	// (0x00033486) input_focus_pane_vc_g4

0x8692,	// (0x0003348e) input_focus_pane_vc_g5

0x869a,	// (0x00033496) input_focus_pane_vc_g6

0x86a2,	// (0x0003349e) input_focus_pane_vc_g7

0x86aa,	// (0x000334a6) input_focus_pane_vc_g8

0x86b2,	// (0x000334ae) input_focus_pane_vc_g9

0x767e,	// (0x0003247a) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003a48e) input_focus_pane_vc_g

0x9bb2,	// (0x000349ae) data_form_pane_vc_ParamLimits

0x9bb2,	// (0x000349ae) data_form_pane_vc

0x9bbe,	// (0x000349ba) form_field_data_pane_vc_g1

0xb9a3,	// (0x0003679f) form_field_data_pane_vc_t1_ParamLimits

0xb9a3,	// (0x0003679f) form_field_data_pane_vc_t1

0x8617,	// (0x00033413) input_focus_pane_vc_ParamLimits

0x8617,	// (0x00033413) input_focus_pane_vc

0xb9bd,	// (0x000367b9) button_value_adjust_pane_cp3_vc

0xb9c5,	// (0x000367c1) button_value_adjust_pane_cp5_vc

0xb9cd,	// (0x000367c9) form_field_data_pane_vc_ParamLimits

0xb9cd,	// (0x000367c9) form_field_data_pane_vc

0xb9e4,	// (0x000367e0) form_field_data_pane_vc_cp2

0xb9ec,	// (0x000367e8) form_field_data_wide_pane_vc_ParamLimits

0xb9ec,	// (0x000367e8) form_field_data_wide_pane_vc

0xba02,	// (0x000367fe) form_field_data_wide_pane_vc_cp2

0xba0a,	// (0x00036806) form_field_popup_pane_vc_ParamLimits

0xba0a,	// (0x00036806) form_field_popup_pane_vc

0xba21,	// (0x0003681d) form_field_popup_wide_pane_vc_ParamLimits

0xba21,	// (0x0003681d) form_field_popup_wide_pane_vc

0xba37,	// (0x00036833) form_field_slider_pane_vc_ParamLimits

0xba37,	// (0x00036833) form_field_slider_pane_vc

0xba4a,	// (0x00036846) form_field_slider_wide_pane_vc_ParamLimits

0xba4a,	// (0x00036846) form_field_slider_wide_pane_vc

0xba5d,	// (0x00036859) grid_touch_1_pane_ParamLimits

0xba5d,	// (0x00036859) grid_touch_1_pane

0xba69,	// (0x00036865) grid_touch_2_pane_ParamLimits

0xba69,	// (0x00036865) grid_touch_2_pane

0x955d,	// (0x00034359) touch_pane_g1_ParamLimits

0x955d,	// (0x00034359) touch_pane_g1

0xba81,	// (0x0003687d) cell_app_pane_cp_wide_ParamLimits

0xba81,	// (0x0003687d) cell_app_pane_cp_wide

0xba92,	// (0x0003688e) grid_popup_fast_wide_pane_ParamLimits

0xba92,	// (0x0003688e) grid_popup_fast_wide_pane

0xbaa6,	// (0x000368a2) scroll_pane_cp19_ParamLimits

0xbaa6,	// (0x000368a2) scroll_pane_cp19

0x7688,	// (0x00032484) bg_popup_window_pane_cp20

0xbaba,	// (0x000368b6) listscroll_popup_fast_wide_pane

0x7768,	// (0x00032564) grid_indicator_nsta_pane

0xbac2,	// (0x000368be) clock_nsta_pane_g1

0xbacb,	// (0x000368c7) clock_nsta_pane_t1

0xbae7,	// (0x000368e3) cell_indicator_nsta_pane_ParamLimits

0xbae7,	// (0x000368e3) cell_indicator_nsta_pane

0xbb61,	// (0x0003695d) cell_indicator_nsta_pane_g1

0xbb6f,	// (0x0003696b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x0003a89c) cell_indicator_nsta_pane_g

0xbb85,	// (0x00036981) clock_nsta_pane_cp

0xbb8d,	// (0x00036989) indicator_nsta_pane_cp

0xbb95,	// (0x00036991) nsta_clock_indic_pane_g1

0x7831,	// (0x0003262d) grid_indicator_pane

0x8ba8,	// (0x000339a4) scroll_pane_cp29

0x583b,	// (0x00030637) indicator_nsta_pane_cp2_ParamLimits

0x583b,	// (0x00030637) indicator_nsta_pane_cp2

0x7768,	// (0x00032564) main_apps_wheel_pane

0x9dd3,	// (0x00034bcf) form_midp_field_text_pane_ParamLimits

0x9f1e,	// (0x00034d1a) scroll_bar_cp050_ParamLimits

0xbbee,	// (0x000369ea) cell_indicator_pane_ParamLimits

0xbbee,	// (0x000369ea) cell_indicator_pane

0xbc05,	// (0x00036a01) cell_indicator_pane_g1

0xbc0f,	// (0x00036a0b) grid_wheel_folder_pane_ParamLimits

0xbc0f,	// (0x00036a0b) grid_wheel_folder_pane

0xbc25,	// (0x00036a21) list_wheel_apps_pane_ParamLimits

0xbc25,	// (0x00036a21) list_wheel_apps_pane

0xbc36,	// (0x00036a32) main_apps_wheel_pane_g1_ParamLimits

0xbc36,	// (0x00036a32) main_apps_wheel_pane_g1

0xbc4a,	// (0x00036a46) main_apps_wheel_pane_g2_ParamLimits

0xbc4a,	// (0x00036a46) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x0003a8b8) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x0003a8b8) main_apps_wheel_pane_g

0xbc62,	// (0x00036a5e) main_apps_wheel_pane_t1_ParamLimits

0xbc62,	// (0x00036a5e) main_apps_wheel_pane_t1

0xbc85,	// (0x00036a81) list_wheel_apps_pane_g1

0xbc8d,	// (0x00036a89) list_wheel_apps_pane_g2

0xbc95,	// (0x00036a91) list_wheel_apps_pane_g3

0xbc9d,	// (0x00036a99) list_wheel_apps_pane_g4

0xbca7,	// (0x00036aa3) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x0003a8bd) list_wheel_apps_pane_g

0x9120,	// (0x00033f1c) navi_icon_text_pane

0x9602,	// (0x000343fe) aid_fill_nsta

0xbcca,	// (0x00036ac6) navi_icon_text_pane_g1

0xbcd6,	// (0x00036ad2) navi_icon_text_pane_t1

0x8fbe,	// (0x00033dba) list_set_graphic_pane_t1_ParamLimits

0x8fbe,	// (0x00033dba) list_set_graphic_pane_t1

0xa679,	// (0x00035475) popup_midp_note_alarm_window_t6_ParamLimits

0xa679,	// (0x00035475) popup_midp_note_alarm_window_t6

0xa68b,	// (0x00035487) popup_midp_note_alarm_window_t7_ParamLimits

0xa68b,	// (0x00035487) popup_midp_note_alarm_window_t7

0xa69d,	// (0x00035499) popup_midp_note_alarm_window_t8_ParamLimits

0xa69d,	// (0x00035499) popup_midp_note_alarm_window_t8

0xa6af,	// (0x000354ab) popup_midp_note_alarm_window_t9_ParamLimits

0xa6af,	// (0x000354ab) popup_midp_note_alarm_window_t9

0xa6c1,	// (0x000354bd) popup_midp_note_alarm_window_t10_ParamLimits

0xa6c1,	// (0x000354bd) popup_midp_note_alarm_window_t10

0xa6d3,	// (0x000354cf) popup_midp_note_alarm_window_t11_ParamLimits

0xa6d3,	// (0x000354cf) popup_midp_note_alarm_window_t11

0xa6e5,	// (0x000354e1) scroll_pane_cp17_ParamLimits

0xa6e5,	// (0x000354e1) scroll_pane_cp17

0x637b,	// (0x00031177) volume_small_pane_cp_g1

0x67cf,	// (0x000315cb) volume_small_pane_cp_g2

0x67d8,	// (0x000315d4) volume_small_pane_cp_g3

0x67e1,	// (0x000315dd) volume_small_pane_cp_g4

0x67ea,	// (0x000315e6) volume_small_pane_cp_g5

0x67f3,	// (0x000315ef) volume_small_pane_cp_g6

0x67fc,	// (0x000315f8) volume_small_pane_cp_g7

0x6805,	// (0x00031601) volume_small_pane_cp_g8

0x680e,	// (0x0003160a) volume_small_pane_cp_g9

0x6817,	// (0x00031613) volume_small_pane_cp_g10

0x936f,	// (0x0003416b) midp_ticker_pane_g1_ParamLimits

0x937b,	// (0x00034177) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003a55a) midp_ticker_pane_g_ParamLimits

0x9387,	// (0x00034183) midp_ticker_pane_t1_ParamLimits

0x9618,	// (0x00034414) aid_fill_nsta_2

0x9f0a,	// (0x00034d06) list_form2_midp_pane

0xb054,	// (0x00035e50) midp_editing_number_pane_ParamLimits

0xb063,	// (0x00035e5f) midp_ticker_pane_ParamLimits

0xbce8,	// (0x00036ae4) form2_midp_field_pane

0xbd0c,	// (0x00036b08) scroll_pane_cp51

0xbd2c,	// (0x00036b28) form2_midp_button_pane_ParamLimits

0xbd2c,	// (0x00036b28) form2_midp_button_pane

0xbd3e,	// (0x00036b3a) form2_midp_content_pane_ParamLimits

0xbd3e,	// (0x00036b3a) form2_midp_content_pane

0xbd58,	// (0x00036b54) form2_midp_field_choice_group_pane

0xbd60,	// (0x00036b5c) form2_midp_field_pane_g1

0xbd68,	// (0x00036b64) form2_midp_field_pane_g2

0xbd70,	// (0x00036b6c) form2_midp_field_pane_g3

0xbd78,	// (0x00036b74) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x0003a8e2) form2_midp_field_pane_g

0xbd80,	// (0x00036b7c) form2_midp_gauge_slider_pane

0xbd88,	// (0x00036b84) form2_midp_gauge_wait_pane

0xbd90,	// (0x00036b8c) form2_midp_image_pane_ParamLimits

0xbd90,	// (0x00036b8c) form2_midp_image_pane

0xbdab,	// (0x00036ba7) form2_midp_label_pane_ParamLimits

0xbdab,	// (0x00036ba7) form2_midp_label_pane

0xbdc4,	// (0x00036bc0) form2_midp_label_pane_cp_ParamLimits

0xbdc4,	// (0x00036bc0) form2_midp_label_pane_cp

0xbde5,	// (0x00036be1) form2_midp_string_pane_ParamLimits

0xbde5,	// (0x00036be1) form2_midp_string_pane

0x7de9,	// (0x00032be5) form2_midp_text_pane_ParamLimits

0x7de9,	// (0x00032be5) form2_midp_text_pane

0xbdf7,	// (0x00036bf3) form2_midp_time_pane

0xbe07,	// (0x00036c03) input_focus_pane_cp51_ParamLimits

0xbe07,	// (0x00036c03) input_focus_pane_cp51

0xbe1f,	// (0x00036c1b) form2_midp_label_pane_t1_ParamLimits

0xbe1f,	// (0x00036c1b) form2_midp_label_pane_t1

0x7e04,	// (0x00032c00) form2_mdip_text_pane_t1_ParamLimits

0x7e04,	// (0x00032c00) form2_mdip_text_pane_t1

0x7e22,	// (0x00032c1e) form2_midp_time_pane_t1

0xbe68,	// (0x00036c64) form2_midp_gauge_slider_pane_t1

0xbe7a,	// (0x00036c76) form2_midp_gauge_slider_pane_t2

0xbe8c,	// (0x00036c88) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x0003a8eb) form2_midp_gauge_slider_pane_t

0xbe9e,	// (0x00036c9a) form2_midp_slider_pane

0xbeaa,	// (0x00036ca6) form2_midp_gauge_wait_pane_t1

0xbeb8,	// (0x00036cb4) form2_midp_wait_pane_ParamLimits

0xbeb8,	// (0x00036cb4) form2_midp_wait_pane

0x9c05,	// (0x00034a01) list_single_2graphic_pane_cp4_ParamLimits

0x9c05,	// (0x00034a01) list_single_2graphic_pane_cp4

0xbee3,	// (0x00036cdf) list_single_midp_graphic_pane_cp_ParamLimits

0xbee3,	// (0x00036cdf) list_single_midp_graphic_pane_cp

0x7688,	// (0x00032484) list_highlight_pane_cp20

0xbf12,	// (0x00036d0e) list_single_2graphic_pane_g1_cp4

0xbf1a,	// (0x00036d16) list_single_2graphic_pane_g2_cp4

0xbf22,	// (0x00036d1e) list_single_2graphic_pane_t1_cp4

0x7768,	// (0x00032564) list_highlight_pane_cp21

0xbf31,	// (0x00036d2d) list_single_midp_graphic_pane_g4_cp

0xbf40,	// (0x00036d3c) list_single_midp_graphic_pane_t1_cp

0xbf55,	// (0x00036d51) form2_mdip_string_pane_t1_ParamLimits

0xbf55,	// (0x00036d51) form2_mdip_string_pane_t1

0x7688,	// (0x00032484) bg_wml_button_pane_cp2

0x767e,	// (0x0003247a) form2_midp_image_pane_g1

0x5073,	// (0x0002fe6f) list_double_large_graphic_pane_g5_ParamLimits

0x5073,	// (0x0002fe6f) list_double_large_graphic_pane_g5

0x87fb,	// (0x000335f7) midp_form_pane_ParamLimits

0x7768,	// (0x00032564) main_apps_wheel_pane_ParamLimits

0x5f0a,	// (0x00030d06) popup_preview_window_ParamLimits

0x5f0a,	// (0x00030d06) popup_preview_window

0x60c5,	// (0x00030ec1) popup_touch_info_window_ParamLimits

0x60c5,	// (0x00030ec1) popup_touch_info_window

0x60e3,	// (0x00030edf) popup_touch_menu_window_ParamLimits

0x60e3,	// (0x00030edf) popup_touch_menu_window

0x7674,	// (0x00032470) bg_popup_sub_pane_cp6

0xc04e,	// (0x00036e4a) list_touch_menu_pane

0xc056,	// (0x00036e52) list_single_touch_menu_pane_ParamLimits

0xc056,	// (0x00036e52) list_single_touch_menu_pane

0xc06c,	// (0x00036e68) list_single_touch_menu_pane_t1

0x7768,	// (0x00032564) bg_popup_sub_pane_cp7_ParamLimits

0x7768,	// (0x00032564) bg_popup_sub_pane_cp7

0xc07a,	// (0x00036e76) heading_sub_pane

0xc082,	// (0x00036e7e) list_touch_info_pane_ParamLimits

0xc082,	// (0x00036e7e) list_touch_info_pane

0xc091,	// (0x00036e8d) list_single_touch_info_pane_ParamLimits

0xc091,	// (0x00036e8d) list_single_touch_info_pane

0xc0a3,	// (0x00036e9f) list_single_touch_info_pane_t1

0xc0b1,	// (0x00036ead) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x0003a8f9) list_single_touch_info_pane_t

0x92a0,	// (0x0003409c) bg_popup_heading_pane_cp

0xc0bf,	// (0x00036ebb) heading_sub_pane_t1

0x9b4c,	// (0x00034948) bg_popup_preview_window_pane_cp_ParamLimits

0x9b4c,	// (0x00034948) bg_popup_preview_window_pane_cp

0xc07a,	// (0x00036e76) heading_preview_pane

0xc082,	// (0x00036e7e) list_preview_pane_ParamLimits

0xc082,	// (0x00036e7e) list_preview_pane

0xc0cd,	// (0x00036ec9) popup_preview_window_g1

0xc091,	// (0x00036e8d) list_single_preview_pane_ParamLimits

0xc091,	// (0x00036e8d) list_single_preview_pane

0xc0d5,	// (0x00036ed1) list_single_preview_pane_g1

0xc0dd,	// (0x00036ed9) list_single_preview_pane_t1

0xc0a3,	// (0x00036e9f) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x0003a8fe) list_single_preview_pane_t

0xc0eb,	// (0x00036ee7) bg_popup_heading_pane_cp2_ParamLimits

0xc0eb,	// (0x00036ee7) bg_popup_heading_pane_cp2

0xc101,	// (0x00036efd) heading_preview_pane_g1

0xc109,	// (0x00036f05) heading_preview_pane_t1_ParamLimits

0xc109,	// (0x00036f05) heading_preview_pane_t1

0x7854,	// (0x00032650) soft_indicator_pane_t1_ParamLimits

0x858a,	// (0x00033386) scroll_pane_ParamLimits

0x8aa1,	// (0x0003389d) scroll_sc2_left_pane

0x8aaa,	// (0x000338a6) scroll_sc2_right_pane

0x8ac9,	// (0x000338c5) scroll_bg_pane_g1_ParamLimits

0x8ade,	// (0x000338da) scroll_bg_pane_g2_ParamLimits

0x8af6,	// (0x000338f2) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003a4e5) scroll_bg_pane_g_ParamLimits

0x8ac9,	// (0x000338c5) scroll_handle_pane_g1_ParamLimits

0x8b18,	// (0x00033914) scroll_handle_pane_g2_ParamLimits

0x8af6,	// (0x000338f2) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003a4ec) scroll_handle_pane_g_ParamLimits

0x5b8d,	// (0x00030989) popup_choice_list_window_ParamLimits

0x5b8d,	// (0x00030989) popup_choice_list_window

0x9a22,	// (0x0003481e) choice_list_pane

0x9aa4,	// (0x000348a0) cell_toolbar_pane_t1

0x9acc,	// (0x000348c8) toolbar_button_pane_ParamLimits

0xab9f,	// (0x0003599b) ai_gene_pane_1_t2_ParamLimits

0xab9f,	// (0x0003599b) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0003a714) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0003a714) ai_gene_pane_1_t

0xc126,	// (0x00036f22) scroll_sc2_left_pane_g1

0xc126,	// (0x00036f22) scroll_sc2_right_pane_g1

0x95e0,	// (0x000343dc) bg_popup_sub_pane_cp10

0xc130,	// (0x00036f2c) list_choice_list_pane

0xc149,	// (0x00036f45) list_single_choice_list_pane_ParamLimits

0xc149,	// (0x00036f45) list_single_choice_list_pane

0xc15c,	// (0x00036f58) list_single_choice_list_pane_g1

0x87ab,	// (0x000335a7) list_single_choice_list_pane_t1_ParamLimits

0x87ab,	// (0x000335a7) list_single_choice_list_pane_t1

0xc164,	// (0x00036f60) choice_list_pane_g1

0xc16c,	// (0x00036f68) choice_list_pane_t1

0x7674,	// (0x00032470) input_focus_pane_cp11

0x8982,	// (0x0003377e) title_pane_stacon_g2_ParamLimits

0x8982,	// (0x0003377e) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003a4cb) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003a4cb) title_pane_stacon_g

0x92a0,	// (0x0003409c) cursor_press_pane

0x5c39,	// (0x00030a35) popup_fep_hwr_window_ParamLimits

0x5c39,	// (0x00030a35) popup_fep_hwr_window

0x5cb3,	// (0x00030aaf) popup_fep_vkb_window_ParamLimits

0x5cb3,	// (0x00030aaf) popup_fep_vkb_window

0xc17a,	// (0x00036f76) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x0003a927) fep_vkb_side_pane_g_ParamLimits

0x6859,	// (0x00031655) fep_hwr_candidate_pane_ParamLimits

0x6859,	// (0x00031655) fep_hwr_candidate_pane

0x6883,	// (0x0003167f) fep_hwr_side_pane_ParamLimits

0x6883,	// (0x0003167f) fep_hwr_side_pane

0x68a3,	// (0x0003169f) fep_hwr_top_pane_ParamLimits

0x68a3,	// (0x0003169f) fep_hwr_top_pane

0x68bb,	// (0x000316b7) fep_hwr_write_pane_ParamLimits

0x68bb,	// (0x000316b7) fep_hwr_write_pane

0xfb2b,	// (0x0003a927) fep_vkb_side_pane_g

0xc182,	// (0x00036f7e) fep_hwr_top_pane_g1

0xc194,	// (0x00036f90) fep_hwr_top_pane_g2

0x68f5,	// (0x000316f1) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x0003a903) fep_hwr_top_pane_g

0x690a,	// (0x00031706) fep_hwr_top_text_pane

0x8c98,	// (0x00033a94) fep_hwr_top_text_pane_g1

0xc1ca,	// (0x00036fc6) fep_hwr_top_text_pane_t1

0x6a00,	// (0x000317fc) fep_hwr_candidate_pane_g1

0xc41d,	// (0x00037219) fep_vkb_keypad_pane_g3_ParamLimits

0xc41d,	// (0x00037219) fep_vkb_keypad_pane_g3

0xc445,	// (0x00037241) fep_vkb_keypad_pane_g4_ParamLimits

0xc445,	// (0x00037241) fep_vkb_keypad_pane_g4

0xc4b4,	// (0x000372b0) fep_vkb_bottom_pane_g2_ParamLimits

0xc4b4,	// (0x000372b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x0003a92e) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x0003a92e) fep_vkb_bottom_pane_g

0xc126,	// (0x00036f22) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x0003a938) cell_vkb_side_pane_g

0xc53f,	// (0x0003733b) cell_vkb_side_pane_t1

0xc54d,	// (0x00037349) cell_vkb_side_pane_t1_copy1

0xc126,	// (0x00036f22) bg_fep_vkb_candidate_pane_g2

0xc679,	// (0x00037475) cell_vkb_candidate_pane_ParamLimits

0xc1d8,	// (0x00036fd4) aid_size_cell_vkb_ParamLimits

0xc1d8,	// (0x00036fd4) aid_size_cell_vkb

0xc679,	// (0x00037475) cell_vkb_candidate_pane

0x6a27,	// (0x00031823) bg_popup_fep_shadow_pane_g1

0xc266,	// (0x00037062) fep_vkb_bottom_pane_ParamLimits

0xc266,	// (0x00037062) fep_vkb_bottom_pane

0xc29c,	// (0x00037098) fep_vkb_candidate_pane_ParamLimits

0xc29c,	// (0x00037098) fep_vkb_candidate_pane

0xc2b8,	// (0x000370b4) fep_vkb_keypad_pane_ParamLimits

0xc2b8,	// (0x000370b4) fep_vkb_keypad_pane

0xc2fe,	// (0x000370fa) fep_vkb_side_pane_ParamLimits

0xc2fe,	// (0x000370fa) fep_vkb_side_pane

0xc33a,	// (0x00037136) fep_vkb_top_pane_ParamLimits

0xc33a,	// (0x00037136) fep_vkb_top_pane

0xc376,	// (0x00037172) fep_vkb_top_pane_g1_ParamLimits

0xc376,	// (0x00037172) fep_vkb_top_pane_g1

0xc385,	// (0x00037181) fep_vkb_top_pane_g2_ParamLimits

0xc385,	// (0x00037181) fep_vkb_top_pane_g2

0xc394,	// (0x00037190) fep_vkb_top_pane_g3_ParamLimits

0xc394,	// (0x00037190) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x0003a91e) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x0003a91e) fep_vkb_top_pane_g

0xc3b2,	// (0x000371ae) fep_vkb_top_text_pane_ParamLimits

0xc3b2,	// (0x000371ae) fep_vkb_top_text_pane

0xc3c3,	// (0x000371bf) fep_vkb_side_pane_g1_ParamLimits

0xc3c3,	// (0x000371bf) fep_vkb_side_pane_g1

0xc40c,	// (0x00037208) grid_vkb_side_pane_ParamLimits

0xc40c,	// (0x00037208) grid_vkb_side_pane

0x6a2f,	// (0x0003182b) bg_popup_fep_shadow_pane_g2

0x6a38,	// (0x00031834) bg_popup_fep_shadow_pane_g3

0x6a40,	// (0x0003183c) bg_popup_fep_shadow_pane_g4

0x6a49,	// (0x00031845) bg_popup_fep_shadow_pane_g5

0x6a53,	// (0x0003184f) bg_popup_fep_shadow_pane_g6

0x6a5b,	// (0x00031857) bg_popup_fep_shadow_pane_g7

0x868a,	// (0x00033486) bg_popup_fep_shadow_pane_g8

0xc463,	// (0x0003725f) grid_vkb_keypad_number_pane_ParamLimits

0xc463,	// (0x0003725f) grid_vkb_keypad_number_pane

0xc473,	// (0x0003726f) grid_vkb_keypad_pane_ParamLimits

0xc473,	// (0x0003726f) grid_vkb_keypad_pane

0xc499,	// (0x00037295) fep_vkb_bottom_pane_g1_ParamLimits

0xc499,	// (0x00037295) fep_vkb_bottom_pane_g1

0xc4c2,	// (0x000372be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c2,	// (0x000372be) grid_vkb_keypad_bottom_left_pane

0xc4d7,	// (0x000372d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d7,	// (0x000372d3) grid_vkb_keypad_bottom_right_pane

0xc4ec,	// (0x000372e8) fep_vkb_top_text_pane_g1

0xc507,	// (0x00037303) fep_vkb_top_text_pane_t1

0xc51c,	// (0x00037318) cell_vkb_side_pane_ParamLimits

0xc51c,	// (0x00037318) cell_vkb_side_pane

0xc126,	// (0x00036f22) cell_vkb_side_pane_g1

0xc55b,	// (0x00037357) cell_vkb_keypad_pane_ParamLimits

0xc55b,	// (0x00037357) cell_vkb_keypad_pane

0xc5d0,	// (0x000373cc) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x0003a94b) bg_popup_fep_shadow_pane_g

0x6a6d,	// (0x00031869) cell_hwr_side_pane_g1

0x6a6d,	// (0x00031869) cell_hwr_side_pane_g2

0xc5da,	// (0x000373d6) cell_vkb_keypad_pane_t1

0xc5e8,	// (0x000373e4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5e8,	// (0x000373e4) cell_vkb_keypad_bottom_left_pane

0xc605,	// (0x00037401) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc605,	// (0x00037401) cell_vkb_keypad_bottom_right_pane

0xc126,	// (0x00036f22) cell_vkb_keypad_bottom_left_pane_g1

0xc126,	// (0x00036f22) cell_vkb_keypad_bottom_right_pane_g1

0xc63e,	// (0x0003743a) cell_vkb_keypad_number_pane_ParamLimits

0xc63e,	// (0x0003743a) cell_vkb_keypad_number_pane

0xc65d,	// (0x00037459) cell_vkb_keypad_number_pane_g1

0xc667,	// (0x00037463) cell_vkb_keypad_number_pane_g2

0xc670,	// (0x0003746c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x0003a93d) cell_vkb_keypad_number_pane_g

0xc5da,	// (0x000373d6) cell_vkb_keypad_number_pane_t1

0xc694,	// (0x00037490) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0003a95e) cell_hwr_side_pane_g

0xc6ad,	// (0x000374a9) cell_hwr_side_pane_t1

0x6a77,	// (0x00031873) cell_hwr_side_pane_t1_copy1

0x6a85,	// (0x00031881) cell_hwr_candidate_pane_g1

0x6ab4,	// (0x000318b0) cell_hwr_candidate_pane_t1

0xc126,	// (0x00036f22) cell_vkb_candidate_pane_g2

0xc71e,	// (0x0003751a) cell_vkb_candidate_pane_t1

0x6820,	// (0x0003161c) bg_popup_fep_shadow_pane_ParamLimits

0x6820,	// (0x0003161c) bg_popup_fep_shadow_pane

0x68d5,	// (0x000316d1) bg_fep_hwr_top_pane_g4

0xc1a6,	// (0x00036fa2) bg_hwr_side_pane_g1_ParamLimits

0xc1a6,	// (0x00036fa2) bg_hwr_side_pane_g1

0x6946,	// (0x00031742) cell_hwr_side_pane_ParamLimits

0x6946,	// (0x00031742) cell_hwr_side_pane

0x6981,	// (0x0003177d) fep_hwr_write_pane_g1_ParamLimits

0x6981,	// (0x0003177d) fep_hwr_write_pane_g1

0x698e,	// (0x0003178a) fep_hwr_write_pane_g2_ParamLimits

0x698e,	// (0x0003178a) fep_hwr_write_pane_g2

0x699b,	// (0x00031797) fep_hwr_write_pane_g3_ParamLimits

0x699b,	// (0x00031797) fep_hwr_write_pane_g3

0x69a9,	// (0x000317a5) fep_hwr_write_pane_g4_ParamLimits

0x69a9,	// (0x000317a5) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x0003a90a) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x0003a90a) fep_hwr_write_pane_g

0x68d5,	// (0x000316d1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x68d5,	// (0x000316d1) bg_fep_hwr_candidate_pane_g2

0x69be,	// (0x000317ba) cell_hwr_candidate_pane_ParamLimits

0x69be,	// (0x000317ba) cell_hwr_candidate_pane

0x6a00,	// (0x000317fc) fep_hwr_candidate_pane_g1_ParamLimits

0xc206,	// (0x00037002) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc206,	// (0x00037002) bg_popup_fep_shadow_pane_cp2

0xc3a4,	// (0x000371a0) fep_vkb_top_pane_g4_ParamLimits

0xc3a4,	// (0x000371a0) fep_vkb_top_pane_g4

0xc3ea,	// (0x000371e6) fep_vkb_side_pane_g2_ParamLimits

0xc3ea,	// (0x000371e6) fep_vkb_side_pane_g2

0x51b6,	// (0x0002ffb2) list_setting_pane_t4_ParamLimits

0x51b6,	// (0x0002ffb2) list_setting_pane_t4

0x5250,	// (0x0003004c) list_setting_number_pane_t5_ParamLimits

0x5250,	// (0x0003004c) list_setting_number_pane_t5

0x8cdf,	// (0x00033adb) list_double_heading_pane_cp2_ParamLimits

0x8cdf,	// (0x00033adb) list_double_heading_pane_cp2

0x8625,	// (0x00033421) list_double_heading_pane_g1_cp2_ParamLimits

0x8625,	// (0x00033421) list_double_heading_pane_g1_cp2

0x8631,	// (0x0003342d) list_double_heading_pane_g2_cp2_ParamLimits

0x8631,	// (0x0003342d) list_double_heading_pane_g2_cp2

0xc72c,	// (0x00037528) list_double_heading_pane_t1_cp2_ParamLimits

0xc72c,	// (0x00037528) list_double_heading_pane_t1_cp2

0xc742,	// (0x0003753e) list_double_heading_pane_t2_cp2_ParamLimits

0xc742,	// (0x0003753e) list_double_heading_pane_t2_cp2

0x765c,	// (0x00032458) aid_value_unit2

0x4c41,	// (0x0002fa3d) popup_preview_fixed_window

0x79f1,	// (0x000327ed) bg_popup_preview_window_pane_cp02

0xc754,	// (0x00037550) list_preview_fixed_pane

0xc79a,	// (0x00037596) list_empty_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_empty_pane_fp

0xc79a,	// (0x00037596) list_single_cale_day_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_cale_day_pane_fp

0xc79a,	// (0x00037596) list_single_graphic_heading_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_graphic_heading_pane_fp

0xc79a,	// (0x00037596) list_single_graphic_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_graphic_pane_fp

0xc79a,	// (0x00037596) list_single_heading_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_heading_pane_fp

0xc79a,	// (0x00037596) list_single_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_pane_fp

0xc7af,	// (0x000375ab) list_single_pane_fp_g1_ParamLimits

0xc7af,	// (0x000375ab) list_single_pane_fp_g1

0x7e35,	// (0x00032c31) list_single_pane_fp_g2_ParamLimits

0x7e35,	// (0x00032c31) list_single_pane_fp_g2

0x7e41,	// (0x00032c3d) list_single_pane_fp_g3_ParamLimits

0x7e41,	// (0x00032c3d) list_single_pane_fp_g3

0xc7bb,	// (0x000375b7) list_single_pane_fp_g4_ParamLimits

0xc7bb,	// (0x000375b7) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0003a971) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0003a971) list_single_pane_fp_g

0x7e55,	// (0x00032c51) list_single_pane_fp_t1_ParamLimits

0x7e55,	// (0x00032c51) list_single_pane_fp_t1

0x7e6c,	// (0x00032c68) list_single_graphic_pane_fp_g1_ParamLimits

0x7e6c,	// (0x00032c68) list_single_graphic_pane_fp_g1

0xc7af,	// (0x000375ab) list_single_graphic_pane_fp_g2_ParamLimits

0xc7af,	// (0x000375ab) list_single_graphic_pane_fp_g2

0x7e35,	// (0x00032c31) list_single_graphic_pane_fp_g3_ParamLimits

0x7e35,	// (0x00032c31) list_single_graphic_pane_fp_g3

0x7e41,	// (0x00032c3d) list_single_graphic_pane_fp_g4_ParamLimits

0x7e41,	// (0x00032c3d) list_single_graphic_pane_fp_g4

0xc7bb,	// (0x000375b7) list_single_graphic_pane_fp_g5_ParamLimits

0xc7bb,	// (0x000375b7) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a97a) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a97a) list_single_graphic_pane_fp_g

0x7e78,	// (0x00032c74) list_single_graphic_pane_fp_t1_ParamLimits

0x7e78,	// (0x00032c74) list_single_graphic_pane_fp_t1

0x7e6c,	// (0x00032c68) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7e6c,	// (0x00032c68) list_single_graphic_heading_pane_fp_g1

0xc7af,	// (0x000375ab) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7af,	// (0x000375ab) list_single_graphic_heading_pane_fp_g2

0x7e35,	// (0x00032c31) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7e35,	// (0x00032c31) list_single_graphic_heading_pane_fp_g3

0x7e41,	// (0x00032c3d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7e41,	// (0x00032c3d) list_single_graphic_heading_pane_fp_g4

0xc7bb,	// (0x000375b7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7bb,	// (0x000375b7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a97a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a97a) list_single_graphic_heading_pane_fp_g

0x7e8e,	// (0x00032c8a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e8e,	// (0x00032c8a) list_single_graphic_heading_pane_fp_t1

0x7ea4,	// (0x00032ca0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7ea4,	// (0x00032ca0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0003a985) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0003a985) list_single_graphic_heading_pane_fp_t

0x7eb6,	// (0x00032cb2) list_single_cale_day_pane_fp_g1_ParamLimits

0x7eb6,	// (0x00032cb2) list_single_cale_day_pane_fp_g1

0xc7c7,	// (0x000375c3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7c7,	// (0x000375c3) list_single_cale_day_pane_fp_g2

0x7eee,	// (0x00032cea) list_single_cale_day_pane_fp_g3_ParamLimits

0x7eee,	// (0x00032cea) list_single_cale_day_pane_fp_g3

0x7f16,	// (0x00032d12) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f16,	// (0x00032d12) list_single_cale_day_pane_fp_g4

0x7f3a,	// (0x00032d36) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f3a,	// (0x00032d36) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a98a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a98a) list_single_cale_day_pane_fp_g

0x7f5e,	// (0x00032d5a) list_single_cale_day_pane_fp_t1_ParamLimits

0x7f5e,	// (0x00032d5a) list_single_cale_day_pane_fp_t1

0x7f84,	// (0x00032d80) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f84,	// (0x00032d80) list_single_cale_day_pane_fp_t2

0x7f9d,	// (0x00032d99) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f9d,	// (0x00032d99) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0003a995) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0003a995) list_single_cale_day_pane_fp_t

0xc7af,	// (0x000375ab) list_empty_pane_fp_g1_ParamLimits

0xc7af,	// (0x000375ab) list_empty_pane_fp_g1

0x7fb6,	// (0x00032db2) list_empty_pane_fp_t1

0x7fc4,	// (0x00032dc0) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0003a99c) list_empty_pane_fp_t

0xc7af,	// (0x000375ab) list_single_heading_pane_fp_g1_ParamLimits

0xc7af,	// (0x000375ab) list_single_heading_pane_fp_g1

0x7e35,	// (0x00032c31) list_single_heading_pane_fp_g2_ParamLimits

0x7e35,	// (0x00032c31) list_single_heading_pane_fp_g2

0x7e41,	// (0x00032c3d) list_single_heading_pane_fp_g3_ParamLimits

0x7e41,	// (0x00032c3d) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0003a9a1) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0003a9a1) list_single_heading_pane_fp_g

0x7fd2,	// (0x00032dce) list_single_heading_pane_fp_t1_ParamLimits

0x7fd2,	// (0x00032dce) list_single_heading_pane_fp_t1

0x7fe4,	// (0x00032de0) list_single_heading_pane_fp_t2_ParamLimits

0x7fe4,	// (0x00032de0) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0003a9a8) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0003a9a8) list_single_heading_pane_fp_t

0x8819,	// (0x00033615) aid_size_cell_fast

0x7961,	// (0x0003275d) soft_indicator_pane_cp1_t1

0x8856,	// (0x00033652) cell_app_pane_cp2_ParamLimits

0x8856,	// (0x00033652) cell_app_pane_cp2

0x6842,	// (0x0003163e) fep_hwr_candidate_drop_down_list_pane

0x6a1a,	// (0x00031816) fep_hwr_candidate_pane_g3_ParamLimits

0x6a1a,	// (0x00031816) fep_hwr_candidate_pane_g3

0x3993,	// (0x0002e78f) fep_hwr_candidate_pane_g4_ParamLimits

0x3993,	// (0x0002e78f) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x0003a917) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x0003a917) fep_hwr_candidate_pane_g

0xc28b,	// (0x00037087) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc28b,	// (0x00037087) fep_vkb_candidate_drop_down_list_pane

0xc69c,	// (0x00037498) fep_vkb_candidate_pane_g3

0xc6a4,	// (0x000374a0) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x0003a944) fep_vkb_candidate_pane_g

0x6a85,	// (0x00031881) cell_hwr_candidate_pane_g1_ParamLimits

0x6a93,	// (0x0003188f) cell_hwr_candidate_pane_g3_ParamLimits

0x6a93,	// (0x0003188f) cell_hwr_candidate_pane_g3

0xddc2,	// (0x00038bbe) cell_hwr_candidate_pane_g4_ParamLimits

0xddc2,	// (0x00038bbe) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0003a963) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0003a963) cell_hwr_candidate_pane_g

0xc6e8,	// (0x000374e4) cell_vkb_candidate_pane_g3_ParamLimits

0xc6e8,	// (0x000374e4) cell_vkb_candidate_pane_g3

0xc703,	// (0x000374ff) cell_vkb_candidate_pane_g4_ParamLimits

0xc703,	// (0x000374ff) cell_vkb_candidate_pane_g4

0xc7d3,	// (0x000375cf) cell_app_pane_cp2_g1_ParamLimits

0xc7d3,	// (0x000375cf) cell_app_pane_cp2_g1

0xc7f1,	// (0x000375ed) cell_app_pane_cp2_g2_ParamLimits

0xc7f1,	// (0x000375ed) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0003a9ad) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0003a9ad) cell_app_pane_cp2_g

0xc7fd,	// (0x000375f9) cell_app_pane_cp2_t1_ParamLimits

0xc7fd,	// (0x000375f9) cell_app_pane_cp2_t1

0x8617,	// (0x00033413) grid_highlight_pane_cp1_ParamLimits

0x8617,	// (0x00033413) grid_highlight_pane_cp1

0x6ad2,	// (0x000318ce) cell_hwr_candidate_pane_cp1_ParamLimits

0x6ad2,	// (0x000318ce) cell_hwr_candidate_pane_cp1

0x6a85,	// (0x00031881) fep_hwr_candidate_drop_down_list_pane_g1

0x6af1,	// (0x000318ed) fep_hwr_candidate_drop_down_list_pane_g2

0x6afe,	// (0x000318fa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003a9b2) fep_hwr_candidate_drop_down_list_pane_g

0x6b0b,	// (0x00031907) fep_hwr_candidate_drop_down_list_scroll_pane

0x6b14,	// (0x00031910) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6b14,	// (0x00031910) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6b21,	// (0x0003191d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6b21,	// (0x0003191d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b2e,	// (0x0003192a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b2e,	// (0x0003192a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6b3b,	// (0x00031937) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6b3b,	// (0x00031937) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b56,	// (0x00031952) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b56,	// (0x00031952) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b71,	// (0x0003196d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b71,	// (0x0003196d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b8c,	// (0x00031988) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b8c,	// (0x00031988) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6ba7,	// (0x000319a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ba7,	// (0x000319a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0003a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0003a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc80f,	// (0x0003760b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc80f,	// (0x0003760b) cell_vkb_candidate_pane_cp1

0xc3a4,	// (0x000371a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3a4,	// (0x000371a0) fep_vkb_candidate_drop_down_list_pane_g1

0xc82f,	// (0x0003762b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc82f,	// (0x0003762b) fep_vkb_candidate_drop_down_list_pane_g2

0xc83c,	// (0x00037638) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc83c,	// (0x00037638) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0003a9ca) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x0003a9ca) fep_vkb_candidate_drop_down_list_pane_g

0xc849,	// (0x00037645) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc849,	// (0x00037645) fep_vkb_candidate_drop_down_list_scroll_pane

0xc856,	// (0x00037652) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc856,	// (0x00037652) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc863,	// (0x0003765f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc863,	// (0x0003765f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc86f,	// (0x0003766b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc86f,	// (0x0003766b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6bb,	// (0x000374b7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6bb,	// (0x000374b7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc87b,	// (0x00037677) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87b,	// (0x00037677) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89c,	// (0x00037698) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89c,	// (0x00037698) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8bd,	// (0x000376b9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8bd,	// (0x000376b9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8de,	// (0x000376da) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8de,	// (0x000376da) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0003a9d1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0003a9d1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7692,	// (0x0003248e) title_pane_g1_ParamLimits

0x769f,	// (0x0003249b) title_pane_g2_ParamLimits

0xf554,	// (0x0003a350) title_pane_g_ParamLimits

0x8c88,	// (0x00033a84) aid_call2_pane

0x8c90,	// (0x00033a8c) aid_call_pane

0x8c98,	// (0x00033a94) popup_clock_analogue_window_g1

0x8c98,	// (0x00033a94) popup_clock_analogue_window_g2

0x56b2,	// (0x000304ae) popup_clock_analogue_window_g3

0x56bb,	// (0x000304b7) popup_clock_analogue_window_g4

0x767e,	// (0x0003247a) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003a4fa) popup_clock_analogue_window_g

0x56c3,	// (0x000304bf) popup_clock_analogue_window_t1

0x56d1,	// (0x000304cd) clock_digital_number_pane_ParamLimits

0x56d1,	// (0x000304cd) clock_digital_number_pane

0x56dd,	// (0x000304d9) clock_digital_number_pane_cp02_ParamLimits

0x56dd,	// (0x000304d9) clock_digital_number_pane_cp02

0x56e9,	// (0x000304e5) clock_digital_number_pane_cp03_ParamLimits

0x56e9,	// (0x000304e5) clock_digital_number_pane_cp03

0x56f5,	// (0x000304f1) clock_digital_number_pane_cp04_ParamLimits

0x56f5,	// (0x000304f1) clock_digital_number_pane_cp04

0x5701,	// (0x000304fd) clock_digital_separator_pane_ParamLimits

0x5701,	// (0x000304fd) clock_digital_separator_pane

0x570d,	// (0x00030509) popup_clock_digital_window_t1_ParamLimits

0x570d,	// (0x00030509) popup_clock_digital_window_t1

0x767e,	// (0x0003247a) clock_digital_number_pane_g1

0x767e,	// (0x0003247a) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003a505) clock_digital_number_pane_g

0x767e,	// (0x0003247a) clock_digital_separator_pane_g1

0x767e,	// (0x0003247a) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003a505) clock_digital_separator_pane_g

0x9602,	// (0x000343fe) aid_fill_nsta_ParamLimits

0x9744,	// (0x00034540) indicator_nsta_pane_ParamLimits

0x98b7,	// (0x000346b3) popup_clock_analogue_window

0x98b7,	// (0x000346b3) popup_clock_digital_window

0x7768,	// (0x00032564) grid_indicator_nsta_pane_ParamLimits

0xbad9,	// (0x000368d5) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x0003a897) clock_nsta_pane_t

0x5676,	// (0x00030472) aid_size_max_handle

0x5680,	// (0x0003047c) aid_size_min_handle

0x92a0,	// (0x0003409c) editor_scroll_pane

0xc8f9,	// (0x000376f5) ex_editor_pane

0x8787,	// (0x00033583) scroll_pane_cp13

0x85b6,	// (0x000333b2) scroll_pane_cp14

0x8cc7,	// (0x00033ac3) scroll_pane_cp36

0x8cf3,	// (0x00033aef) list_single_graphic_hl_pane_cp2_ParamLimits

0x8cf3,	// (0x00033aef) list_single_graphic_hl_pane_cp2

0xb097,	// (0x00035e93) list_single_graphic_hl_pane_ParamLimits

0xb097,	// (0x00035e93) list_single_graphic_hl_pane

0x7ffa,	// (0x00032df6) aid_size_min_hl_cp1

0xc901,	// (0x000376fd) list_highlight_pane_cp34_ParamLimits

0xc901,	// (0x000376fd) list_highlight_pane_cp34

0xc912,	// (0x0003770e) list_single_graphic_hl_pane_g1_ParamLimits

0xc912,	// (0x0003770e) list_single_graphic_hl_pane_g1

0x8003,	// (0x00032dff) list_single_graphic_hl_pane_g2_ParamLimits

0x8003,	// (0x00032dff) list_single_graphic_hl_pane_g2

0x8003,	// (0x00032dff) list_single_graphic_hl_pane_g3_ParamLimits

0x8003,	// (0x00032dff) list_single_graphic_hl_pane_g3

0x800f,	// (0x00032e0b) list_single_graphic_hl_pane_g4_ParamLimits

0x800f,	// (0x00032e0b) list_single_graphic_hl_pane_g4

0x801b,	// (0x00032e17) list_single_graphic_hl_pane_g5_ParamLimits

0x801b,	// (0x00032e17) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x0003a9e2) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x0003a9e2) list_single_graphic_hl_pane_g

0x802f,	// (0x00032e2b) list_single_graphic_hl_pane_t1_ParamLimits

0x802f,	// (0x00032e2b) list_single_graphic_hl_pane_t1

0xc91f,	// (0x0003771b) aid_size_min_hl_cp2

0xc928,	// (0x00037724) list_highlight_pane_cp34_cp2_ParamLimits

0xc928,	// (0x00037724) list_highlight_pane_cp34_cp2

0xc912,	// (0x0003770e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc912,	// (0x0003770e) list_single_graphic_hl_pane_g1_cp2

0xc935,	// (0x00037731) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc935,	// (0x00037731) list_single_graphic_hl_pane_g2_cp2

0xc941,	// (0x0003773d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc941,	// (0x0003773d) list_single_graphic_hl_pane_g3_cp2

0xc6dc,	// (0x000374d8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc6dc,	// (0x000374d8) list_single_graphic_hl_pane_g4_cp2

0xc94f,	// (0x0003774b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc94f,	// (0x0003774b) list_single_graphic_hl_pane_g5_cp2

0x5a4b,	// (0x00030847) control_pane_g4_ParamLimits

0x5a4b,	// (0x00030847) control_pane_g4

0x95e0,	// (0x000343dc) bg_popup_sub_pane_cp10_ParamLimits

0xc130,	// (0x00036f2c) list_choice_list_pane_ParamLimits

0xc13f,	// (0x00036f3b) scroll_pane_cp23

0x79f1,	// (0x000327ed) bg_popup_preview_window_pane_cp02_ParamLimits

0xc754,	// (0x00037550) list_preview_fixed_pane_ParamLimits

0xc76a,	// (0x00037566) list_preview_fixed_pane_cp_ParamLimits

0xc76a,	// (0x00037566) list_preview_fixed_pane_cp

0xc776,	// (0x00037572) popup_preview_fixed_window_g1_ParamLimits

0xc776,	// (0x00037572) popup_preview_fixed_window_g1

0xc782,	// (0x0003757e) popup_preview_fixed_window_g2_ParamLimits

0xc782,	// (0x0003757e) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0003a96a) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0003a96a) popup_preview_fixed_window_g

0x55ea,	// (0x000303e6) aid_navi_side_left_pane_ParamLimits

0x55ff,	// (0x000303fb) aid_navi_side_right_pane_ParamLimits

0x5617,	// (0x00030413) navi_icon_pane_stacon_ParamLimits

0x562b,	// (0x00030427) navi_navi_pane_stacon_ParamLimits

0x5617,	// (0x00030413) navi_text_pane_stacon_ParamLimits

0x4b02,	// (0x0002f8fe) main_text_info_pane

0xc979,	// (0x00037775) listscroll_text_info_pane

0xc981,	// (0x0003777d) list_text_info_pane_ParamLimits

0xc981,	// (0x0003777d) list_text_info_pane

0xc990,	// (0x0003778c) scroll_pane_cp24_ParamLimits

0xc990,	// (0x0003778c) scroll_pane_cp24

0xc9ae,	// (0x000377aa) list_text_info_pane_t1_ParamLimits

0xc9ae,	// (0x000377aa) list_text_info_pane_t1

0x5bab,	// (0x000309a7) popup_fast_swap2_window_ParamLimits

0x5bab,	// (0x000309a7) popup_fast_swap2_window

0xc9df,	// (0x000377db) aid_size_cell_fast2

0x7674,	// (0x00032470) bg_popup_window_pane_cp17

0x9f36,	// (0x00034d32) heading_pane_cp2

0x8280,	// (0x0003307c) listscroll_fast2_pane

0xc9e9,	// (0x000377e5) grid_fast2_pane

0xc9f3,	// (0x000377ef) listscroll_fast2_pane_g1

0xc9fb,	// (0x000377f7) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0003a9ed) listscroll_fast2_pane_g

0x8787,	// (0x00033583) scroll_pane_cp26

0xca05,	// (0x00037801) cell_fast2_pane_ParamLimits

0xca05,	// (0x00037801) cell_fast2_pane

0xca1a,	// (0x00037816) cell_fast2_pane_g1

0xca23,	// (0x0003781f) cell_fast2_pane_g2

0xca2c,	// (0x00037828) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x0003a9f2) cell_fast2_pane_g

0x8373,	// (0x0003316f) grid_highlight_pane_cp9

0x5b69,	// (0x00030965) main_eswt_pane_ParamLimits

0x5b69,	// (0x00030965) main_eswt_pane

0xc9a5,	// (0x000377a1) list_single_text_info_pane

0xca34,	// (0x00037830) eswt_ctrl_button_pane

0xca34,	// (0x00037830) eswt_ctrl_canvas_pane

0xca3c,	// (0x00037838) eswt_ctrl_combo_pane

0xca34,	// (0x00037830) eswt_ctrl_default_pane

0xca34,	// (0x00037830) eswt_ctrl_label_pane

0xca44,	// (0x00037840) eswt_ctrl_wait_pane

0xca4c,	// (0x00037848) eswt_shell_pane

0x7674,	// (0x00032470) listscroll_eswt_app_pane

0xca6c,	// (0x00037868) popup_eswt_tasktip_window_ParamLimits

0xca6c,	// (0x00037868) popup_eswt_tasktip_window

0x9b4c,	// (0x00034948) bg_popup_window_pane_cp18

0xca7d,	// (0x00037879) eswt_control_pane_g1_ParamLimits

0xca7d,	// (0x00037879) eswt_control_pane_g1

0xca8a,	// (0x00037886) eswt_control_pane_g2_ParamLimits

0xca8a,	// (0x00037886) eswt_control_pane_g2

0xca97,	// (0x00037893) eswt_control_pane_g3_ParamLimits

0xca97,	// (0x00037893) eswt_control_pane_g3

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_ParamLimits

0xcaa4,	// (0x000378a0) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x0003a9f9) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x0003a9f9) eswt_control_pane_g

0x8617,	// (0x00033413) bg_button_pane_ParamLimits

0x8617,	// (0x00033413) bg_button_pane

0x8388,	// (0x00033184) common_borders_pane_copy2_ParamLimits

0x8388,	// (0x00033184) common_borders_pane_copy2

0xcab1,	// (0x000378ad) control_button_pane_g1_ParamLimits

0xcab1,	// (0x000378ad) control_button_pane_g1

0xcabd,	// (0x000378b9) control_button_pane_g2_ParamLimits

0xcabd,	// (0x000378b9) control_button_pane_g2

0xcac9,	// (0x000378c5) control_button_pane_g3_ParamLimits

0xcac9,	// (0x000378c5) control_button_pane_g3

0x0002,

0xfc06,	// (0x0003aa02) control_button_pane_g_ParamLimits

0xfc06,	// (0x0003aa02) control_button_pane_g

0xcadd,	// (0x000378d9) control_button_pane_t1

0xcaeb,	// (0x000378e7) control_button_pane_t2

0x0001,

0xfc0d,	// (0x0003aa09) control_button_pane_t

0x9ad8,	// (0x000348d4) bg_button_pane_g1

0x9ae8,	// (0x000348e4) bg_button_pane_g2

0x9ae0,	// (0x000348dc) bg_button_pane_g3

0x9af8,	// (0x000348f4) bg_button_pane_g4

0x9af0,	// (0x000348ec) bg_button_pane_g5

0x9b00,	// (0x000348fc) bg_button_pane_g6

0x9b08,	// (0x00034904) bg_button_pane_g7

0x9b18,	// (0x00034914) bg_button_pane_g8

0x9b10,	// (0x0003490c) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0003a668) bg_button_pane_g

0xc0eb,	// (0x00036ee7) common_borders_pane_ParamLimits

0xc0eb,	// (0x00036ee7) common_borders_pane

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy1_ParamLimits

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy1

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy1_ParamLimits

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy1

0xca97,	// (0x00037893) eswt_control_pane_g3_copy1_ParamLimits

0xca97,	// (0x00037893) eswt_control_pane_g3_copy1

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy1_ParamLimits

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy1

0xc126,	// (0x00036f22) bg_eswt_ctrl_canvas_pane_g1

0xc0eb,	// (0x00036ee7) common_borders_pane_cp2_ParamLimits

0xc0eb,	// (0x00036ee7) common_borders_pane_cp2

0xc0eb,	// (0x00036ee7) common_borders_pane_cp3_ParamLimits

0xc0eb,	// (0x00036ee7) common_borders_pane_cp3

0xcaf9,	// (0x000378f5) separator_horizontal_pane

0xcb01,	// (0x000378fd) separator_vertical_pane

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy2_ParamLimits

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy2

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy2_ParamLimits

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy2

0xca97,	// (0x00037893) eswt_control_pane_g3_copy2_ParamLimits

0xca97,	// (0x00037893) eswt_control_pane_g3_copy2

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy2_ParamLimits

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy2

0x7674,	// (0x00032470) common_borders_pane_cp4

0xcb0a,	// (0x00037906) separator_horizontal_pane_g1

0xcb13,	// (0x0003790f) separator_horizontal_pane_g2

0xcb1c,	// (0x00037918) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0003aa0e) separator_horizontal_pane_g

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy3_ParamLimits

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy3

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy3_ParamLimits

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy3

0xca97,	// (0x00037893) eswt_control_pane_g3_copy3_ParamLimits

0xca97,	// (0x00037893) eswt_control_pane_g3_copy3

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy3_ParamLimits

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy3

0x7674,	// (0x00032470) common_borders_pane_cp5

0xcb25,	// (0x00037921) separator_vertical_pane_g1

0xcb2e,	// (0x0003792a) separator_vertical_pane_g2

0xcb37,	// (0x00037933) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x0003aa15) separator_vertical_pane_g

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy4_ParamLimits

0xca7d,	// (0x00037879) eswt_control_pane_g1_copy4

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy4_ParamLimits

0xca8a,	// (0x00037886) eswt_control_pane_g2_copy4

0xca97,	// (0x00037893) eswt_control_pane_g3_copy4_ParamLimits

0xca97,	// (0x00037893) eswt_control_pane_g3_copy4

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy4_ParamLimits

0xcaa4,	// (0x000378a0) eswt_control_pane_g4_copy4

0xcb40,	// (0x0003793c) eswt_ctrl_combo_button_pane

0xcb48,	// (0x00037944) eswt_ctrl_input_pane

0xcb50,	// (0x0003794c) popup_choice_list_window_cp70

0xcb58,	// (0x00037954) eswt_ctrl_input_pane_t1

0x7674,	// (0x00032470) input_focus_pane_cp70

0xc0eb,	// (0x00036ee7) bg_button_pane_cp70_ParamLimits

0xc0eb,	// (0x00036ee7) bg_button_pane_cp70

0xcb66,	// (0x00037962) eswt_ctrl_combo_button_pane_g1

0xcb6e,	// (0x0003796a) wait_bar_pane_cp70

0x9b4c,	// (0x00034948) bg_popup_window_pane_cp70_ParamLimits

0x9b4c,	// (0x00034948) bg_popup_window_pane_cp70

0xcb76,	// (0x00037972) popup_eswt_tasktip_window_t1

0xcb8c,	// (0x00037988) wait_bar_pane_cp71_ParamLimits

0xcb8c,	// (0x00037988) wait_bar_pane_cp71

0xcb98,	// (0x00037994) grid_eswt_app_pane

0x8aa1,	// (0x0003389d) scroll_pane_cp70

0xcba1,	// (0x0003799d) cell_eswt_app_pane_ParamLimits

0xcba1,	// (0x0003799d) cell_eswt_app_pane

0xcbd1,	// (0x000379cd) cell_eswt_app_pane_g1_ParamLimits

0xcbd1,	// (0x000379cd) cell_eswt_app_pane_g1

0xcc00,	// (0x000379fc) cell_eswt_app_pane_g2_ParamLimits

0xcc00,	// (0x000379fc) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x0003aa1c) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x0003aa1c) cell_eswt_app_pane_g

0xcc29,	// (0x00037a25) cell_eswt_app_pane_t1_ParamLimits

0xcc29,	// (0x00037a25) cell_eswt_app_pane_t1

0xcc5b,	// (0x00037a57) grid_highlight_pane_cp70_ParamLimits

0xcc5b,	// (0x00037a57) grid_highlight_pane_cp70

0x9175,	// (0x00033f71) set_content_pane_g1

0x9540,	// (0x0003433c) status_small_volume_pane

0x6bc2,	// (0x000319be) status_small_volume_pane_g1

0x6bca,	// (0x000319c6) volume_small2_pane

0x6bd3,	// (0x000319cf) volume_small2_pane_g1

0x6bdc,	// (0x000319d8) volume_small2_pane_g2

0x6be5,	// (0x000319e1) volume_small2_pane_g3

0x6bee,	// (0x000319ea) volume_small2_pane_g4

0x6bf7,	// (0x000319f3) volume_small2_pane_g5

0x6c00,	// (0x000319fc) volume_small2_pane_g6

0x6c09,	// (0x00031a05) volume_small2_pane_g7

0x6c12,	// (0x00031a0e) volume_small2_pane_g8

0x6c1b,	// (0x00031a17) volume_small2_pane_g9

0x6c24,	// (0x00031a20) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x0003aa21) volume_small2_pane_g

0xc4ec,	// (0x000372e8) fep_vkb_top_text_pane_g1_ParamLimits

0xc507,	// (0x00037303) fep_vkb_top_text_pane_t1_ParamLimits

0xc78e,	// (0x0003758a) popup_preview_fixed_window_g3_ParamLimits

0xc78e,	// (0x0003758a) popup_preview_fixed_window_g3

0x6058,	// (0x00030e54) popup_toolbar_trans_pane

0xaebc,	// (0x00035cb8) aid_height_set_list_ParamLimits

0xaecd,	// (0x00035cc9) aid_size_parent_ParamLimits

0x95e0,	// (0x000343dc) list_highlight_pane_cp2_ParamLimits

0x9175,	// (0x00033f71) set_content_pane_g1_ParamLimits

0xb0b3,	// (0x00035eaf) list_single_image_pane_ParamLimits

0xb0b3,	// (0x00035eaf) list_single_image_pane

0xcc67,	// (0x00037a63) aid_size_cell_image_ParamLimits

0xcc67,	// (0x00037a63) aid_size_cell_image

0xcc74,	// (0x00037a70) grid_single_image_pane_ParamLimits

0xcc74,	// (0x00037a70) grid_single_image_pane

0xa467,	// (0x00035263) list_single_image_pane_g1_ParamLimits

0xa467,	// (0x00035263) list_single_image_pane_g1

0xcc80,	// (0x00037a7c) list_single_image_pane_g2_ParamLimits

0xcc80,	// (0x00037a7c) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x0003aa36) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x0003aa36) list_single_image_pane_g

0xcc94,	// (0x00037a90) list_single_image_pane_t1_ParamLimits

0xcc94,	// (0x00037a90) list_single_image_pane_t1

0xccaa,	// (0x00037aa6) cell_image_list_pane_ParamLimits

0xccaa,	// (0x00037aa6) cell_image_list_pane

0xccbe,	// (0x00037aba) cell_image_list_pane_g1

0xccc7,	// (0x00037ac3) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x0003aa3b) cell_image_list_pane_g

0xccd0,	// (0x00037acc) aid_size_cell_tb_trans_pane

0x8617,	// (0x00033413) bg_tb_trans_pane

0xcce2,	// (0x00037ade) grid_tb_trans_pane

0x9ad8,	// (0x000348d4) bg_tb_trans_pane_g1

0x9ae8,	// (0x000348e4) bg_tb_trans_pane_g2

0x9ae0,	// (0x000348dc) bg_tb_trans_pane_g3

0x9af8,	// (0x000348f4) bg_tb_trans_pane_g4

0x9af0,	// (0x000348ec) bg_tb_trans_pane_g5

0x9b18,	// (0x00034914) bg_tb_trans_pane_g6

0x9b10,	// (0x0003490c) bg_tb_trans_pane_g7

0x9b00,	// (0x000348fc) bg_tb_trans_pane_g8

0x9b08,	// (0x00034904) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0003aa40) bg_tb_trans_pane_g

0xccf6,	// (0x00037af2) cell_toolbar_trans_pane_ParamLimits

0xccf6,	// (0x00037af2) cell_toolbar_trans_pane

0xc126,	// (0x00036f22) cell_toolbar_trans_pane_g1

0xbcf0,	// (0x00036aec) list_form2_midp_pane_t1

0xbcfe,	// (0x00036afa) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x0003a8dd) list_form2_midp_pane_t

0xbd0c,	// (0x00036b08) scroll_pane_cp51_ParamLimits

0xbec8,	// (0x00036cc4) form2_midp_wait_pane_g1

0xbed1,	// (0x00036ccd) form2_midp_wait_pane_g2

0xbeda,	// (0x00036cd6) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x0003a8f2) form2_midp_wait_pane_g

0x7768,	// (0x00032564) list_highlight_pane_cp21_ParamLimits

0xbf31,	// (0x00036d2d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf40,	// (0x00036d3c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x662f,	// (0x0003142b) list_single_2graphic_im_pane_ParamLimits

0x662f,	// (0x0003142b) list_single_2graphic_im_pane

0xcd1c,	// (0x00037b18) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1c,	// (0x00037b18) list_single_2graphic_im_pane_g1

0xcd2d,	// (0x00037b29) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2d,	// (0x00037b29) list_single_2graphic_im_pane_g2

0xcd39,	// (0x00037b35) list_single_2graphic_im_pane_g3_ParamLimits

0xcd39,	// (0x00037b35) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x0003aa53) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x0003aa53) list_single_2graphic_im_pane_g

0xcd59,	// (0x00037b55) list_single_2graphic_im_pane_t1_ParamLimits

0xcd59,	// (0x00037b55) list_single_2graphic_im_pane_t1

0xc79a,	// (0x00037596) list_single_graphic_2heading_pane_fp_ParamLimits

0xc79a,	// (0x00037596) list_single_graphic_2heading_pane_fp

0x7e6c,	// (0x00032c68) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7e6c,	// (0x00032c68) list_single_graphic_2heading_pane_fp_g1

0xc7af,	// (0x000375ab) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7af,	// (0x000375ab) list_single_graphic_2heading_pane_fp_g2

0x7e35,	// (0x00032c31) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7e35,	// (0x00032c31) list_single_graphic_2heading_pane_fp_g3

0x7e41,	// (0x00032c3d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7e41,	// (0x00032c3d) list_single_graphic_2heading_pane_fp_g4

0xc7bb,	// (0x000375b7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7bb,	// (0x000375b7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a97a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a97a) list_single_graphic_2heading_pane_fp_g

0x8045,	// (0x00032e41) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8045,	// (0x00032e41) list_single_graphic_2heading_pane_fp_t1

0x7ea4,	// (0x00032ca0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7ea4,	// (0x00032ca0) list_single_graphic_2heading_pane_fp_t2

0x805b,	// (0x00032e57) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x805b,	// (0x00032e57) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x0003aa5c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x0003aa5c) list_single_graphic_2heading_pane_fp_t

0xc1b2,	// (0x00036fae) fep_hwr_write_pane_g5_ParamLimits

0xc1b2,	// (0x00036fae) fep_hwr_write_pane_g5

0xc1be,	// (0x00036fba) fep_hwr_write_pane_g6_ParamLimits

0xc1be,	// (0x00036fba) fep_hwr_write_pane_g6

0xca4c,	// (0x00037848) eswt_shell_pane_ParamLimits

0x9b4c,	// (0x00034948) bg_popup_window_pane_cp18_ParamLimits

0xae15,	// (0x00035c11) heading_pane_cp70

0xcb76,	// (0x00037972) popup_eswt_tasktip_window_t1_ParamLimits

0x9657,	// (0x00034453) aid_touch_tab_arrow_left

0x9663,	// (0x0003445f) aid_touch_tab_arrow_right

0x76b0,	// (0x000324ac) title_pane_g3_ParamLimits

0x76b0,	// (0x000324ac) title_pane_g3

0x85d6,	// (0x000333d2) set_value_pane_g1

0x6058,	// (0x00030e54) popup_toolbar_trans_pane_ParamLimits

0xccd0,	// (0x00037acc) aid_size_cell_tb_trans_pane_ParamLimits

0x8617,	// (0x00033413) bg_tb_trans_pane_ParamLimits

0xcce2,	// (0x00037ade) grid_tb_trans_pane_ParamLimits

0x79f1,	// (0x000327ed) cont_note_pane_ParamLimits

0x79f1,	// (0x000327ed) cont_note_pane

0x8388,	// (0x00033184) cont_snote2_single_text_pane_ParamLimits

0x8388,	// (0x00033184) cont_snote2_single_text_pane

0x8388,	// (0x00033184) cont_snote2_single_graphic_pane_ParamLimits

0x8388,	// (0x00033184) cont_snote2_single_graphic_pane

0xa151,	// (0x00034f4d) cont_note_wait_pane_ParamLimits

0xa151,	// (0x00034f4d) cont_note_wait_pane

0xa151,	// (0x00034f4d) cont_note_image_pane_ParamLimits

0xa151,	// (0x00034f4d) cont_note_image_pane

0xcd8a,	// (0x00037b86) popup_note2_window_g1_ParamLimits

0xcd8a,	// (0x00037b86) popup_note2_window_g1

0xcdbb,	// (0x00037bb7) popup_note2_window_t1_ParamLimits

0xcdbb,	// (0x00037bb7) popup_note2_window_t1

0xce00,	// (0x00037bfc) popup_note2_window_t2_ParamLimits

0xce00,	// (0x00037bfc) popup_note2_window_t2

0xce45,	// (0x00037c41) popup_note2_window_t3_ParamLimits

0xce45,	// (0x00037c41) popup_note2_window_t3

0xce8a,	// (0x00037c86) popup_note2_window_t4_ParamLimits

0xce8a,	// (0x00037c86) popup_note2_window_t4

0x7a75,	// (0x00032871) popup_note2_window_t5_ParamLimits

0x7a75,	// (0x00032871) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x0003aa68) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x0003aa68) popup_note2_window_t

0xceb9,	// (0x00037cb5) popup_note2_image_window_g1_ParamLimits

0xceb9,	// (0x00037cb5) popup_note2_image_window_g1

0xcec5,	// (0x00037cc1) popup_note2_image_window_g2_ParamLimits

0xcec5,	// (0x00037cc1) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x0003aa73) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x0003aa73) popup_note2_image_window_g

0xced7,	// (0x00037cd3) popup_note2_image_window_t1_ParamLimits

0xced7,	// (0x00037cd3) popup_note2_image_window_t1

0xceef,	// (0x00037ceb) popup_note2_image_window_t2_ParamLimits

0xceef,	// (0x00037ceb) popup_note2_image_window_t2

0xcf07,	// (0x00037d03) popup_note2_image_window_t3_ParamLimits

0xcf07,	// (0x00037d03) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x0003aa78) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x0003aa78) popup_note2_image_window_t

0xa15f,	// (0x00034f5b) popup_note2_wait_window_g1_ParamLimits

0xa15f,	// (0x00034f5b) popup_note2_wait_window_g1

0xcf23,	// (0x00037d1f) popup_note2_wait_window_g2_ParamLimits

0xcf23,	// (0x00037d1f) popup_note2_wait_window_g2

0xa177,	// (0x00034f73) popup_note2_wait_window_g3_ParamLimits

0xa177,	// (0x00034f73) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x0003aa7f) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x0003aa7f) popup_note2_wait_window_g

0xcf2f,	// (0x00037d2b) popup_note2_wait_window_t1_ParamLimits

0xcf2f,	// (0x00037d2b) popup_note2_wait_window_t1

0xcf4d,	// (0x00037d49) popup_note2_wait_window_t2_ParamLimits

0xcf4d,	// (0x00037d49) popup_note2_wait_window_t2

0xcf6b,	// (0x00037d67) popup_note2_wait_window_t3_ParamLimits

0xcf6b,	// (0x00037d67) popup_note2_wait_window_t3

0xcf7d,	// (0x00037d79) popup_note2_wait_window_t4_ParamLimits

0xcf7d,	// (0x00037d79) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x0003aa86) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x0003aa86) popup_note2_wait_window_t

0xcf8f,	// (0x00037d8b) wait_bar2_pane_ParamLimits

0xcf8f,	// (0x00037d8b) wait_bar2_pane

0xcfa7,	// (0x00037da3) popup_snote2_single_text_window_g1_ParamLimits

0xcfa7,	// (0x00037da3) popup_snote2_single_text_window_g1

0xcfcf,	// (0x00037dcb) popup_snote2_single_text_window_t1_ParamLimits

0xcfcf,	// (0x00037dcb) popup_snote2_single_text_window_t1

0xd01b,	// (0x00037e17) popup_snote2_single_text_window_t2_ParamLimits

0xd01b,	// (0x00037e17) popup_snote2_single_text_window_t2

0xd067,	// (0x00037e63) popup_snote2_single_text_window_t3_ParamLimits

0xd067,	// (0x00037e63) popup_snote2_single_text_window_t3

0xd0a8,	// (0x00037ea4) popup_snote2_single_text_window_t4_ParamLimits

0xd0a8,	// (0x00037ea4) popup_snote2_single_text_window_t4

0xd0de,	// (0x00037eda) popup_snote2_single_text_window_t5_ParamLimits

0xd0de,	// (0x00037eda) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0003aa8f) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0003aa8f) popup_snote2_single_text_window_t

0xd109,	// (0x00037f05) popup_snote2_single_graphic_window_g1_ParamLimits

0xd109,	// (0x00037f05) popup_snote2_single_graphic_window_g1

0xd131,	// (0x00037f2d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd131,	// (0x00037f2d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0003aa9a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0003aa9a) popup_snote2_single_graphic_window_g

0xd159,	// (0x00037f55) popup_snote2_single_graphic_window_t1_ParamLimits

0xd159,	// (0x00037f55) popup_snote2_single_graphic_window_t1

0xd1a5,	// (0x00037fa1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a5,	// (0x00037fa1) popup_snote2_single_graphic_window_t2

0xd067,	// (0x00037e63) popup_snote2_single_graphic_window_t3_ParamLimits

0xd067,	// (0x00037e63) popup_snote2_single_graphic_window_t3

0xd0a8,	// (0x00037ea4) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a8,	// (0x00037ea4) popup_snote2_single_graphic_window_t4

0xd0de,	// (0x00037eda) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0de,	// (0x00037eda) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x0003aa9f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x0003aa9f) popup_snote2_single_graphic_window_t

0xbbcd,	// (0x000369c9) clock_nsta_pane_cp2_t1

0xbbcd,	// (0x000369c9) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x0003a8b3) clock_nsta_pane_cp2_t

0x5368,	// (0x00030164) form_field_data_wide_pane_g1_ParamLimits

0x8625,	// (0x00033421) form_field_data_wide_pane_g2_ParamLimits

0x8625,	// (0x00033421) form_field_data_wide_pane_g2

0x8631,	// (0x0003342d) form_field_data_wide_pane_g3_ParamLimits

0x8631,	// (0x0003342d) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003a47d) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003a47d) form_field_data_wide_pane_g

0xba75,	// (0x00036871) grid_touch_3_pane_ParamLimits

0xba75,	// (0x00036871) grid_touch_3_pane

0xd1f1,	// (0x00037fed) cell_touch_3_pane_ParamLimits

0xd1f1,	// (0x00037fed) cell_touch_3_pane

0xc126,	// (0x00036f22) cell_touch_3_pane_g1

0xc126,	// (0x00036f22) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x0003a938) cell_touch_3_pane_g

0x7aa7,	// (0x000328a3) cont_query_data_pane

0x7aaf,	// (0x000328ab) cont_query_data_pane_cp1

0xd21f,	// (0x0003801b) button_value_adjust_pane_cp7

0xd227,	// (0x00038023) query_popup_pane_cp3

0x8d88,	// (0x00033b84) bg_popup_sub_pane_cp22_ParamLimits

0x572c,	// (0x00030528) navi_navi_volume_pane_cp2

0x5747,	// (0x00030543) popup_side_volume_key_window_g2

0x5756,	// (0x00030552) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003a513) popup_side_volume_key_window_g

0x5773,	// (0x0003056f) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003a51a) popup_side_volume_key_window_t

0x903f,	// (0x00033e3b) popup_side_volume_key_window_ParamLimits

0x4fbf,	// (0x0002fdbb) list_double_graphic_pane_g4_ParamLimits

0x4fbf,	// (0x0002fdbb) list_double_graphic_pane_g4

0x666e,	// (0x0003146a) list_single_2heading_msg_pane_ParamLimits

0x666e,	// (0x0003146a) list_single_2heading_msg_pane

0x807b,	// (0x00032e77) list_single_2heading_msg_pane_g1_ParamLimits

0x807b,	// (0x00032e77) list_single_2heading_msg_pane_g1

0x4dee,	// (0x0002fbea) list_single_2heading_msg_pane_g2_ParamLimits

0x4dee,	// (0x0002fbea) list_single_2heading_msg_pane_g2

0x8087,	// (0x00032e83) list_single_2heading_msg_pane_g3_ParamLimits

0x8087,	// (0x00032e83) list_single_2heading_msg_pane_g3

0x8093,	// (0x00032e8f) list_single_2heading_msg_pane_g4_ParamLimits

0x8093,	// (0x00032e8f) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x0003aaaa) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x0003aaaa) list_single_2heading_msg_pane_g

0x80ab,	// (0x00032ea7) list_single_2heading_msg_pane_t1_ParamLimits

0x80ab,	// (0x00032ea7) list_single_2heading_msg_pane_t1

0x80d3,	// (0x00032ecf) list_single_2heading_msg_pane_t2_ParamLimits

0x80d3,	// (0x00032ecf) list_single_2heading_msg_pane_t2

0x8107,	// (0x00032f03) list_single_2heading_msg_pane_t3_ParamLimits

0x8107,	// (0x00032f03) list_single_2heading_msg_pane_t3

0x8140,	// (0x00032f3c) list_single_2heading_msg_pane_t4_ParamLimits

0x8140,	// (0x00032f3c) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x0003aab3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x0003aab3) list_single_2heading_msg_pane_t

0x76bc,	// (0x000324b8) title_pane_g4_ParamLimits

0x76bc,	// (0x000324b8) title_pane_g4

0x553b,	// (0x00030337) title_pane_stacon_g3_ParamLimits

0x553b,	// (0x00030337) title_pane_stacon_g3

0xcd4d,	// (0x00037b49) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4d,	// (0x00037b49) list_single_2graphic_im_pane_g4

0xabbc,	// (0x000359b8) popup_side_volume_key_window_cp

0xb3c3,	// (0x000361bf) main_idle_act2_pane_t1

0x6184,	// (0x00030f80) toolbar_button_pane_g10

0x8580,	// (0x0003337c) popup_toolbar_window_cp1

0xbbbe,	// (0x000369ba) clock_nsta_pane_cp_t1

0xbbbe,	// (0x000369ba) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x0003a8ae) clock_nsta_pane_cp_t

0x572c,	// (0x00030528) navi_navi_volume_pane_cp2_ParamLimits

0x573b,	// (0x00030537) popup_side_volume_key_window_g1_ParamLimits

0x5747,	// (0x00030543) popup_side_volume_key_window_g2_ParamLimits

0x5756,	// (0x00030552) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003a513) popup_side_volume_key_window_g_ParamLimits

0x682e,	// (0x0003162a) fep_hwr_aid_pane

0x68d5,	// (0x000316d1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc182,	// (0x00036f7e) fep_hwr_top_pane_g1_ParamLimits

0xc194,	// (0x00036f90) fep_hwr_top_pane_g2_ParamLimits

0x68f5,	// (0x000316f1) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x0003a903) fep_hwr_top_pane_g_ParamLimits

0x690a,	// (0x00031706) fep_hwr_top_text_pane_ParamLimits

0xa97f,	// (0x0003577b) aid_touch_tab_arrow_arrow_2

0xa988,	// (0x00035784) aid_touch_tab_arrow_left_2

0x6842,	// (0x0003163e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6879,	// (0x00031675) fep_hwr_prediction_pane

0xc2f4,	// (0x000370f0) fep_vkb_prediction_pane

0xc3f8,	// (0x000371f4) fep_vkb_side_pane_g3_ParamLimits

0xc3f8,	// (0x000371f4) fep_vkb_side_pane_g3

0x6a85,	// (0x00031881) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6af1,	// (0x000318ed) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6afe,	// (0x000318fa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0003a9b2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6c2d,	// (0x00031a29) fep_hwr_prediction_pane_g1

0x6c37,	// (0x00031a33) fep_hwr_prediction_pane_g2

0x6c3f,	// (0x00031a3b) fep_hwr_prediction_pane_g3

0x6c47,	// (0x00031a43) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0003aabc) fep_hwr_prediction_pane_g

0xd24c,	// (0x00038048) fep_vkb_prediction_pane_g1

0xd256,	// (0x00038052) fep_vkb_prediction_pane_g2

0xd25e,	// (0x0003805a) fep_vkb_prediction_pane_g3

0xd266,	// (0x00038062) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003aac5) fep_vkb_prediction_pane_g

0x6577,	// (0x00031373) slider_set_pane_g3

0x658b,	// (0x00031387) slider_set_pane_g4

0x65a3,	// (0x0003139f) slider_set_pane_g5

0x6577,	// (0x00031373) slider_set_pane_g6

0x65b9,	// (0x000313b5) slider_set_pane_g7

0xb032,	// (0x00035e2e) slider_form_pane_g3

0xb03b,	// (0x00035e37) slider_form_pane_g4

0xb043,	// (0x00035e3f) slider_form_pane_g5

0xb032,	// (0x00035e2e) slider_form_pane_g6

0xb04b,	// (0x00035e47) slider_form_pane_g7

0xb66d,	// (0x00036469) slider_set_pane_vc_g3

0xb676,	// (0x00036472) slider_set_pane_vc_g4

0xb67f,	// (0x0003647b) slider_set_pane_vc_g5

0xb66d,	// (0x00036469) slider_set_pane_vc_g6

0xb688,	// (0x00036484) slider_set_pane_vc_g7

0xb848,	// (0x00036644) slider_form_pane_vc_g1

0xb851,	// (0x0003664d) slider_form_pane_vc_g2

0xb85a,	// (0x00036656) slider_form_pane_vc_g3

0xb848,	// (0x00036644) slider_form_pane_vc_g4

0xb863,	// (0x0003665f) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x0003a880) slider_form_pane_vc_g

0x4b02,	// (0x0002f8fe) main_idle_act3_pane

0xd26e,	// (0x0003806a) ai3_links_pane

0xd277,	// (0x00038073) popup_ai3_data_window_ParamLimits

0xd277,	// (0x00038073) popup_ai3_data_window

0x7674,	// (0x00032470) grid_ai3_links_pane

0xd291,	// (0x0003808d) cell_ai3_links_pane_ParamLimits

0xd291,	// (0x0003808d) cell_ai3_links_pane

0xd2a9,	// (0x000380a5) bg_popup_sub_pane_cp11

0xd2b6,	// (0x000380b2) cell_ai3_links_pane_g1

0x7674,	// (0x00032470) bg_popup_sub_pane_cp12

0xd2db,	// (0x000380d7) heading_ai3_data_pane

0xd2e3,	// (0x000380df) list_ai3_gene_pane

0xd2ef,	// (0x000380eb) popup_ai3_data_window_g1

0xd2f7,	// (0x000380f3) heading_ai3_data_pane_g1

0xd2ff,	// (0x000380fb) heading_ai3_data_pane_t1

0xd30d,	// (0x00038109) list_double_ai3_gene_pane_ParamLimits

0xd30d,	// (0x00038109) list_double_ai3_gene_pane

0xd31a,	// (0x00038116) list_single_ai3_gene_pane_ParamLimits

0xd31a,	// (0x00038116) list_single_ai3_gene_pane

0xc0eb,	// (0x00036ee7) list_highlight_pane_cp7_ParamLimits

0xc0eb,	// (0x00036ee7) list_highlight_pane_cp7

0xd327,	// (0x00038123) list_single_a13_gene_pane_t1_ParamLimits

0xd327,	// (0x00038123) list_single_a13_gene_pane_t1

0xd33e,	// (0x0003813a) list_single_ai3_gene_pane_g1

0xd347,	// (0x00038143) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x0003aace) list_single_ai3_gene_pane_g

0xd34f,	// (0x0003814b) list_double_ai3_gene_pane_g1_ParamLimits

0xd34f,	// (0x0003814b) list_double_ai3_gene_pane_g1

0xd35b,	// (0x00038157) list_double_ai3_gene_pane_t1_ParamLimits

0xd35b,	// (0x00038157) list_double_ai3_gene_pane_t1

0xd377,	// (0x00038173) list_double_ai3_gene_pane_t2_ParamLimits

0xd377,	// (0x00038173) list_double_ai3_gene_pane_t2

0xd38d,	// (0x00038189) list_double_ai3_gene_pane_t3_ParamLimits

0xd38d,	// (0x00038189) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x0003aad3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x0003aad3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8071,	// (0x00032e6d) aid_size_min_col_2

0xd238,	// (0x00038034) aid_size_min_msg_ParamLimits

0xd238,	// (0x00038034) aid_size_min_msg

0xc4f8,	// (0x000372f4) fep_vkb_top_text_pane_g2_ParamLimits

0xc4f8,	// (0x000372f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x0003a933) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x0003a933) fep_vkb_top_text_pane_g

0x4b02,	// (0x0002f8fe) main_hc_apps_shell_pane

0xd3aa,	// (0x000381a6) grid_hc_apps_pane_ParamLimits

0xd3aa,	// (0x000381a6) grid_hc_apps_pane

0xd3b9,	// (0x000381b5) list_hc_apps_pane

0xd3c1,	// (0x000381bd) scroll_pane_cp37_ParamLimits

0xd3c1,	// (0x000381bd) scroll_pane_cp37

0xd3cd,	// (0x000381c9) cell_hc_apps_pane_ParamLimits

0xd3cd,	// (0x000381c9) cell_hc_apps_pane

0xd47b,	// (0x00038277) cell_hc_apps_pane_g1_ParamLimits

0xd47b,	// (0x00038277) cell_hc_apps_pane_g1

0xd4ac,	// (0x000382a8) cell_hc_apps_pane_g2_ParamLimits

0xd4ac,	// (0x000382a8) cell_hc_apps_pane_g2

0xd4c8,	// (0x000382c4) cell_hc_apps_pane_g3_ParamLimits

0xd4c8,	// (0x000382c4) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x0003aada) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x0003aada) cell_hc_apps_pane_g

0xd4ea,	// (0x000382e6) cell_hc_apps_pane_t1_ParamLimits

0xd4ea,	// (0x000382e6) cell_hc_apps_pane_t1

0x79f1,	// (0x000327ed) grid_highlight_pane_cp10_ParamLimits

0x79f1,	// (0x000327ed) grid_highlight_pane_cp10

0xd52a,	// (0x00038326) list_single_hc_apps_pane_ParamLimits

0xd52a,	// (0x00038326) list_single_hc_apps_pane

0xd586,	// (0x00038382) list_single_hc_apps_pane_g1

0x8165,	// (0x00032f61) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x0003aae1) list_single_hc_apps_pane_g

0x817e,	// (0x00032f7a) list_single_hc_apps_pane_g2_copy1

0x819a,	// (0x00032f96) list_single_hc_apps_pane_t1

0x7768,	// (0x00032564) bg_set_opt_pane_cp_ParamLimits

0x4d59,	// (0x0002fb55) setting_slider_pane_t1_ParamLimits

0x4d72,	// (0x0002fb6e) setting_slider_pane_t2_ParamLimits

0x4d8c,	// (0x0002fb88) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003a360) setting_slider_pane_t_ParamLimits

0x4da4,	// (0x0002fba0) slider_set_pane_ParamLimits

0x5a5f,	// (0x0003085b) control_pane_g5_ParamLimits

0x5a5f,	// (0x0003085b) control_pane_g5

0xae81,	// (0x00035c7d) slider_set_pane_g1_ParamLimits

0x656b,	// (0x00031367) slider_set_pane_g2_ParamLimits

0x6577,	// (0x00031373) slider_set_pane_g3_ParamLimits

0x658b,	// (0x00031387) slider_set_pane_g4_ParamLimits

0x65a3,	// (0x0003139f) slider_set_pane_g5_ParamLimits

0x6577,	// (0x00031373) slider_set_pane_g6_ParamLimits

0x65b9,	// (0x000313b5) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0003a766) slider_set_pane_g_ParamLimits

0x9120,	// (0x00033f1c) navi_icon_text_pane_ParamLimits

0x9618,	// (0x00034414) aid_fill_nsta_2_ParamLimits

0x9657,	// (0x00034453) aid_touch_tab_arrow_left_ParamLimits

0x9663,	// (0x0003445f) aid_touch_tab_arrow_right_ParamLimits

0x96cf,	// (0x000344cb) clock_nsta_pane_ParamLimits

0xa961,	// (0x0003575d) navi_icon_pane_g1_ParamLimits

0xa96d,	// (0x00035769) navi_text_pane_t1_ParamLimits

0xbcca,	// (0x00036ac6) navi_icon_text_pane_g1_ParamLimits

0xbcd6,	// (0x00036ad2) navi_icon_text_pane_t1_ParamLimits

0xd586,	// (0x00038382) list_single_hc_apps_pane_g1_ParamLimits

0x8165,	// (0x00032f61) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x0003aae1) list_single_hc_apps_pane_g_ParamLimits

0x817e,	// (0x00032f7a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x819a,	// (0x00032f96) list_single_hc_apps_pane_t1_ParamLimits

0x4c6d,	// (0x0002fa69) popup_toolbar2_fixed_window_ParamLimits

0x4c6d,	// (0x0002fa69) popup_toolbar2_fixed_window

0x604e,	// (0x00030e4a) popup_toolbar2_float_window

0x7674,	// (0x00032470) bg_popup_sub_pane_cp27

0xd59f,	// (0x0003839b) grid_toolbar2_float_pane

0x7674,	// (0x00032470) bg_popup_sub_pane_cp26

0xd59f,	// (0x0003839b) grid_toolbar2_fixed_pane

0xd5a7,	// (0x000383a3) cell_toolbar2_fixed_pane_ParamLimits

0xd5a7,	// (0x000383a3) cell_toolbar2_fixed_pane

0xd5b7,	// (0x000383b3) cell_toolbar2_fixed_pane_g1

0xd5c0,	// (0x000383bc) toolbar2_fixed_button_pane

0x9ad8,	// (0x000348d4) toolbar2_fixed_button_pane_g1

0x9ae8,	// (0x000348e4) toolbar2_fixed_button_pane_g2

0x9ae0,	// (0x000348dc) toolbar2_fixed_button_pane_g3

0x9af8,	// (0x000348f4) toolbar2_fixed_button_pane_g4

0x9af0,	// (0x000348ec) toolbar2_fixed_button_pane_g5

0x9b00,	// (0x000348fc) toolbar2_fixed_button_pane_g6

0x9b08,	// (0x00034904) toolbar2_fixed_button_pane_g7

0x9b18,	// (0x00034914) toolbar2_fixed_button_pane_g8

0x9b10,	// (0x0003490c) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0003a668) toolbar2_fixed_button_pane_g

0xd5c8,	// (0x000383c4) cell_toolbar2_float_pane_ParamLimits

0xd5c8,	// (0x000383c4) cell_toolbar2_float_pane

0xd5d9,	// (0x000383d5) cell_toolbar2_float_pane_g1

0xd5c0,	// (0x000383bc) toolbar2_fixed_button_pane_cp

0xc254,	// (0x00037050) fep_vkb_accented_list_pane_ParamLimits

0xc254,	// (0x00037050) fep_vkb_accented_list_pane

0x6a65,	// (0x00031861) bg_popup_fep_shadow_pane_g9

0x92a0,	// (0x0003409c) bg_popup_fep_shadow_pane_cp3

0x876e,	// (0x0003356a) list_accented_list_pane

0xd5e2,	// (0x000383de) list_single_accented_list_pane_ParamLimits

0xd5e2,	// (0x000383de) list_single_accented_list_pane

0x92a0,	// (0x0003409c) list_highlight_pane_cp10

0xd5f3,	// (0x000383ef) list_single_accented_list_pane_t1

0x5f9e,	// (0x00030d9a) popup_slider_window_ParamLimits

0x5f9e,	// (0x00030d9a) popup_slider_window

0xd22f,	// (0x0003802b) aid_indentation_list_msg

0xd6ad,	// (0x000384a9) bg_popup_window_pane_cp19

0xd717,	// (0x00038513) popup_slider_window_g1

0xd733,	// (0x0003852f) popup_slider_window_g2

0xd74f,	// (0x0003854b) popup_slider_window_g3

0x0005,

0xfcea,	// (0x0003aae6) popup_slider_window_g

0xd7ab,	// (0x000385a7) popup_slider_window_t1

0xd81f,	// (0x0003861b) small_volume_slider_vertical_pane

0xc126,	// (0x00036f22) small_volume_slider_vertical_pane_g1

0xc126,	// (0x00036f22) small_volume_slider_vertical_pane_g2

0xd83b,	// (0x00038637) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x0003aaf8) small_volume_slider_vertical_pane_g

0x4a25,	// (0x0002f821) area_side_right_pane_ParamLimits

0x4a25,	// (0x0002f821) area_side_right_pane

0x6c4f,	// (0x00031a4b) aid_size_side_button_ParamLimits

0x6c4f,	// (0x00031a4b) aid_size_side_button

0x6c63,	// (0x00031a5f) grid_sctrl_middle_pane_ParamLimits

0x6c63,	// (0x00031a5f) grid_sctrl_middle_pane

0x6c82,	// (0x00031a7e) sctrl_sk_bottom_pane

0x6c93,	// (0x00031a8f) sctrl_sk_top_pane

0x6ca5,	// (0x00031aa1) aid_touch_sctrl_top

0x6cb2,	// (0x00031aae) bg_sctrl_sk_pane_ParamLimits

0x6cb2,	// (0x00031aae) bg_sctrl_sk_pane

0x6cc0,	// (0x00031abc) sctrl_sk_top_pane_g1

0x6ccd,	// (0x00031ac9) sctrl_sk_top_pane_t1

0x6ca5,	// (0x00031aa1) aid_touch_sctrl_bottom

0x6cb2,	// (0x00031aae) bg_sctrl_sk_pane_cp_ParamLimits

0x6cb2,	// (0x00031aae) bg_sctrl_sk_pane_cp

0x6ce8,	// (0x00031ae4) sctrl_sk_bottom_pane_g1

0x6ccd,	// (0x00031ac9) sctrl_sk_bottom_pane_t1

0x6cf1,	// (0x00031aed) cell_sctrl_middle_pane_ParamLimits

0x6cf1,	// (0x00031aed) cell_sctrl_middle_pane

0x6d0c,	// (0x00031b08) aid_touch_sctrl_middle_ParamLimits

0x6d0c,	// (0x00031b08) aid_touch_sctrl_middle

0x6d1e,	// (0x00031b1a) bg_sctrl_middle_pane_ParamLimits

0x6d1e,	// (0x00031b1a) bg_sctrl_middle_pane

0x6a85,	// (0x00031881) cell_sctrl_middle_pane_g1_ParamLimits

0x6a85,	// (0x00031881) cell_sctrl_middle_pane_g1

0x6d2c,	// (0x00031b28) cell_sctrl_middle_pane_g2_ParamLimits

0x6d2c,	// (0x00031b28) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x0003ab04) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x0003ab04) cell_sctrl_middle_pane_g

0x9ad8,	// (0x000348d4) bg_sctrl_middle_pane_g1

0x9ae0,	// (0x000348dc) bg_sctrl_middle_pane_g2

0x9ae8,	// (0x000348e4) bg_sctrl_middle_pane_g3

0x9af0,	// (0x000348ec) bg_sctrl_middle_pane_g4

0x9af8,	// (0x000348f4) bg_sctrl_middle_pane_g5

0x9b00,	// (0x000348fc) bg_sctrl_middle_pane_g6

0x9b08,	// (0x00034904) bg_sctrl_middle_pane_g7

0x9b10,	// (0x0003490c) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x0003ab09) bg_sctrl_middle_pane_g

0x9b18,	// (0x00034914) bg_sctrl_middle_pane_g8_copy1

0x9ad8,	// (0x000348d4) bg_sctrl_sk_pane_g1

0x9ae8,	// (0x000348e4) bg_sctrl_sk_pane_g2

0x9ae0,	// (0x000348dc) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0003a668) bg_sctrl_sk_pane_g

0x8546,	// (0x00033342) aid_size_touch_scroll_bar

0x9af8,	// (0x000348f4) bg_sctrl_sk_pane_g4

0x9af0,	// (0x000348ec) bg_sctrl_sk_pane_g5

0x9b00,	// (0x000348fc) bg_sctrl_sk_pane_g6

0x9b08,	// (0x00034904) bg_sctrl_sk_pane_g7

0x9b18,	// (0x00034914) bg_sctrl_sk_pane_g8

0x9b10,	// (0x0003490c) bg_sctrl_sk_pane_g9

0x5c09,	// (0x00030a05) popup_fep_china_hwr2_fs_candidate_window

0x5c13,	// (0x00030a0f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5c13,	// (0x00030a0f) popup_fep_china_hwr2_fs_control_window

0x6a85,	// (0x00031881) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0003aaff) sctrl_sk_top_pane_g

0xd844,	// (0x00038640) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd844,	// (0x00038640) aid_fep_china_hwr2_fs_cell

0xd856,	// (0x00038652) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd856,	// (0x00038652) bg_popup_fep_shadow_pane_cp4

0xd86d,	// (0x00038669) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86d,	// (0x00038669) bg_popup_fep_shadow_pane_cp5

0xd87f,	// (0x0003867b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd87f,	// (0x0003867b) popup_fep_china_hwr2_fs_control_bar_grid

0xd88f,	// (0x0003868b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd897,	// (0x00038693) aid_fep_china_hwr2_fs_candi_cell

0x7674,	// (0x00032470) bg_popup_fep_shadow_pane_cp6

0xd8a1,	// (0x0003869d) popup_fep_china_hwr2_fs_candidate_grid

0xd8ab,	// (0x000386a7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ab,	// (0x000386a7) cell_fep_china_hwr2_fs_funtion_grid

0xc126,	// (0x00036f22) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c3,	// (0x000386bf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c3,	// (0x000386bf) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d1,	// (0x000386cd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d1,	// (0x000386cd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0003ab1a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0003ab1a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e7,	// (0x000386e3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e7,	// (0x000386e3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fc,	// (0x000386f8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fc,	// (0x000386f8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0003ab1f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0003ab1f) cell_fep_china_hwr2_fs_funtion_grid_t

0xd918,	// (0x00038714) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd920,	// (0x0003871c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd928,	// (0x00038724) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x0003ab24) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd930,	// (0x0003872c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd930,	// (0x0003872c) cell_fep_china_hwr2_fs_candidate_grid

0xd949,	// (0x00038745) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd951,	// (0x0003874d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc126,	// (0x00036f22) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc126,	// (0x00036f22) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x0003a938) cell_fep_china_hwr2_fs_candidate_grid_g

0xd959,	// (0x00038755) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96dc,	// (0x000344d8) clock_nsta_pane_cp_24_ParamLimits

0x96dc,	// (0x000344d8) clock_nsta_pane_cp_24

0x975a,	// (0x00034556) indicator_nsta_pane_cp_24_ParamLimits

0x975a,	// (0x00034556) indicator_nsta_pane_cp_24

0xa7dd,	// (0x000355d9) heading_pane_g1

0x0001,

0xf8d1,	// (0x0003a6cd) heading_pane_g

0xb20c,	// (0x00036008) grid_sct_catagory_button_pane

0xb23c,	// (0x00036038) scroll_pane_cp5_ParamLimits

0xbd18,	// (0x00036b14) button_value_adjust_pane_cp5_ParamLimits

0xbd18,	// (0x00036b14) button_value_adjust_pane_cp5

0xbdf7,	// (0x00036bf3) form2_midp_time_pane_ParamLimits

0xd967,	// (0x00038763) cell_sct_catagory_button_pane_ParamLimits

0xd967,	// (0x00038763) cell_sct_catagory_button_pane

0xc0eb,	// (0x00036ee7) bg_button_pane_cp01_ParamLimits

0xc0eb,	// (0x00036ee7) bg_button_pane_cp01

0xc126,	// (0x00036f22) cell_sct_catagory_button_pane_g1

0x5fdd,	// (0x00030dd9) popup_tb_extension_window

0xd979,	// (0x00038775) aid_size_cell_ext_ParamLimits

0xd979,	// (0x00038775) aid_size_cell_ext

0x79f1,	// (0x000327ed) bg_tb_trans_pane_cp1_ParamLimits

0x79f1,	// (0x000327ed) bg_tb_trans_pane_cp1

0xd999,	// (0x00038795) grid_tb_ext_pane_ParamLimits

0xd999,	// (0x00038795) grid_tb_ext_pane

0xd9c7,	// (0x000387c3) cell_tb_ext_pane_ParamLimits

0xd9c7,	// (0x000387c3) cell_tb_ext_pane

0xd9de,	// (0x000387da) cell_tb_ext_pane_g1_ParamLimits

0xd9de,	// (0x000387da) cell_tb_ext_pane_g1

0xd9fb,	// (0x000387f7) cell_tb_ext_pane_t1

0x79f1,	// (0x000327ed) list_highlight_pane_cp11_ParamLimits

0x79f1,	// (0x000327ed) list_highlight_pane_cp11

0x4c8c,	// (0x0002fa88) popup_uni_indicator_window_ParamLimits

0x4c8c,	// (0x0002fa88) popup_uni_indicator_window

0x8617,	// (0x00033413) bg_popup_sub_pane_cp14

0xda16,	// (0x00038812) list_uniindi_pane

0xda22,	// (0x0003881e) uniindi_top_pane

0x79f1,	// (0x000327ed) bg_uniindi_top_pane

0xda41,	// (0x0003883d) uniindi_top_pane_g1

0xda57,	// (0x00038853) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x0003ab2b) uniindi_top_pane_g

0xda81,	// (0x0003887d) uniindi_top_pane_t1

0xdaab,	// (0x000388a7) list_single_uniindi_pane_ParamLimits

0xdaab,	// (0x000388a7) list_single_uniindi_pane

0xc126,	// (0x00036f22) bg_uniindi_top_pane_g1

0xdabe,	// (0x000388ba) list_single_uniindi_pane_g1

0xdad1,	// (0x000388cd) list_single_uniindi_pane_t1

0x4b02,	// (0x0002f8fe) control_bg_pane

0xdaf6,	// (0x000388f2) bg_sctrl_sk_pane_cp1

0xdaff,	// (0x000388fb) bg_sctrl_sk_pane_cp2

0xdb08,	// (0x00038904) control_bg_pane_g1

0xdb11,	// (0x0003890d) control_bg_pane_g2

0x0001,

0xfd38,	// (0x0003ab34) control_bg_pane_g

0xbb61,	// (0x0003695d) cell_indicator_nsta_pane_g1_ParamLimits

0xbb6f,	// (0x0003696b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x0003a89c) cell_indicator_nsta_pane_g_ParamLimits

0x7e22,	// (0x00032c1e) form2_midp_time_pane_t1_ParamLimits

0x5b69,	// (0x00030965) main_idle_act4_pane_ParamLimits

0x5b69,	// (0x00030965) main_idle_act4_pane

0x5fdd,	// (0x00030dd9) popup_tb_extension_window_ParamLimits

0xd9b7,	// (0x000387b3) tb_ext_find_pane_ParamLimits

0xd9b7,	// (0x000387b3) tb_ext_find_pane

0xdb1a,	// (0x00038916) ai_gene_pane_1_cp1

0x93d9,	// (0x000341d5) ai_gene_pane_2_cp1

0xdb22,	// (0x0003891e) list_single_idle_plugin_calendar_pane

0xdb2b,	// (0x00038927) list_single_idle_plugin_notification_pane

0xdb34,	// (0x00038930) list_single_idle_plugin_player_pane

0xdb3d,	// (0x00038939) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3d,	// (0x00038939) list_single_idle_plugin_shortcut_pane

0xdb5f,	// (0x0003895b) main_idle_act4_pane_t1

0xdb71,	// (0x0003896d) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0003ab39) main_idle_act4_pane_t

0xdb83,	// (0x0003897f) middle_sk_idle_act4_pane_ParamLimits

0xdb83,	// (0x0003897f) middle_sk_idle_act4_pane

0xdb99,	// (0x00038995) popup_clock_digital_analogue_window_cp2

0xdbb3,	// (0x000389af) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb3,	// (0x000389af) shortcut_wheel_idle_act4_pane

0xc126,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g1

0xc126,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g2

0xc126,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g3

0xc126,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g4

0xc126,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g5

0xdbc7,	// (0x000389c3) shortcut_wheel_idle_act4_pane_g6

0xdbcf,	// (0x000389cb) shortcut_wheel_idle_act4_pane_g7

0xdbd7,	// (0x000389d3) shortcut_wheel_idle_act4_pane_g8

0xdbdf,	// (0x000389db) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x0003ab3e) shortcut_wheel_idle_act4_pane_g

0xc3a4,	// (0x000371a0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3a4,	// (0x000371a0) middle_sk_idle_act4_pane_g1

0xdc43,	// (0x00038a3f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc43,	// (0x00038a3f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x0003ab61) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x0003ab61) middle_sk_idle_act4_pane_g

0xdc4f,	// (0x00038a4b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc4f,	// (0x00038a4b) middle_sk_idle_act4_pane_t1

0xdc6c,	// (0x00038a68) grid_ai_shortcut_pane_ParamLimits

0xdc6c,	// (0x00038a68) grid_ai_shortcut_pane

0xdc85,	// (0x00038a81) list_highlight_pane_cp16_ParamLimits

0xdc85,	// (0x00038a81) list_highlight_pane_cp16

0xdc92,	// (0x00038a8e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc92,	// (0x00038a8e) list_single_idle_plugin_shortcut_pane_g1

0xdc9e,	// (0x00038a9a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9e,	// (0x00038a9a) list_single_idle_plugin_shortcut_pane_g2

0xdcb6,	// (0x00038ab2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb6,	// (0x00038ab2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x0003ab66) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x0003ab66) list_single_idle_plugin_shortcut_pane_g

0xdcc9,	// (0x00038ac5) cell_ai_shortcut_pane_ParamLimits

0xdcc9,	// (0x00038ac5) cell_ai_shortcut_pane

0xdced,	// (0x00038ae9) cell_ai_shortcut_pane_g1_ParamLimits

0xdced,	// (0x00038ae9) cell_ai_shortcut_pane_g1

0xdb1a,	// (0x00038916) ai_gene_pane_1_cp2

0xdd0f,	// (0x00038b0b) ai_gene_pane_2_cp2

0xdd17,	// (0x00038b13) list_highlight_pane_cp15

0xdd20,	// (0x00038b1c) list_single_idle_plugin_calendar_pane_g1

0xdd17,	// (0x00038b13) list_highlight_pane_cp17

0xdd28,	// (0x00038b24) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd30,	// (0x00038b2c) list_single_idle_plugin_player_pane_g1

0xb465,	// (0x00036261) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x0003ab6d) list_single_idle_plugin_player_pane_g

0xdd38,	// (0x00038b34) list_single_idle_plugin_player_pane_t1

0xdd46,	// (0x00038b42) list_single_idle_plugin_player_pane_t2

0xdd54,	// (0x00038b50) list_single_idle_plugin_player_pane_t3

0xdd62,	// (0x00038b5e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x0003ab72) list_single_idle_plugin_player_pane_t

0xdd70,	// (0x00038b6c) wait_bar_pane_cp15

0xdd78,	// (0x00038b74) grid_ai_notification_pane

0xb465,	// (0x00036261) list_single_idle_plugin_notification_pane_g1

0xdd81,	// (0x00038b7d) cell_ai_notification_pane_ParamLimits

0xdd81,	// (0x00038b7d) cell_ai_notification_pane

0xdd8e,	// (0x00038b8a) cell_ai_notification_pane_g1

0xdd96,	// (0x00038b92) cell_ai_notification_pane_t1

0xdda4,	// (0x00038ba0) tb_ext_find_button_pane

0xddac,	// (0x00038ba8) tb_ext_find_pane_g1

0xddb4,	// (0x00038bb0) tb_ext_find_pane_t1

0x8c98,	// (0x00033a94) tb_ext_find_button_pane_g1

0xdde3,	// (0x00038bdf) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x0003ab7b) tb_ext_find_button_pane_g

0xdb5f,	// (0x0003895b) main_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x0003896d) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0003ab39) main_idle_act4_pane_t_ParamLimits

0xdb99,	// (0x00038995) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba7,	// (0x000389a3) sat_plugin_idle_act4_pane_ParamLimits

0xdba7,	// (0x000389a3) sat_plugin_idle_act4_pane

0xddec,	// (0x00038be8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddec,	// (0x00038be8) sat_plugin_idle_act4_pane_t1

0xddff,	// (0x00038bfb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddff,	// (0x00038bfb) sat_plugin_idle_act4_pane_t2

0xde12,	// (0x00038c0e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde12,	// (0x00038c0e) sat_plugin_idle_act4_pane_t3

0xde25,	// (0x00038c21) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde25,	// (0x00038c21) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x0003ab80) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x0003ab80) sat_plugin_idle_act4_pane_t

0x4bc7,	// (0x0002f9c3) popup_battery_window_ParamLimits

0x4bc7,	// (0x0002f9c3) popup_battery_window

0x79f1,	// (0x000327ed) bg_popup_sub_pane_cp25_ParamLimits

0x79f1,	// (0x000327ed) bg_popup_sub_pane_cp25

0xde38,	// (0x00038c34) popup_battery_window_g1_ParamLimits

0xde38,	// (0x00038c34) popup_battery_window_g1

0xde44,	// (0x00038c40) popup_battery_window_t1_ParamLimits

0xde44,	// (0x00038c40) popup_battery_window_t1

0xde56,	// (0x00038c52) popup_battery_window_t2_ParamLimits

0xde56,	// (0x00038c52) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x0003ab89) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x0003ab89) popup_battery_window_t

0x92a8,	// (0x000340a4) midp_canvas_pane_ParamLimits

0x931d,	// (0x00034119) midp_keypad_pane_ParamLimits

0x931d,	// (0x00034119) midp_keypad_pane

0x95e0,	// (0x000343dc) main_midp_pane_ParamLimits

0xbbdc,	// (0x000369d8) signal_pane_g2_cp_ParamLimits

0xde73,	// (0x00038c6f) aid_size_cell_midp_keypad_ParamLimits

0xde73,	// (0x00038c6f) aid_size_cell_midp_keypad

0xde8d,	// (0x00038c89) midp_keyp_game_grid_pane_ParamLimits

0xde8d,	// (0x00038c89) midp_keyp_game_grid_pane

0xdead,	// (0x00038ca9) midp_keyp_rocker_pane_ParamLimits

0xdead,	// (0x00038ca9) midp_keyp_rocker_pane

0xdee2,	// (0x00038cde) midp_keyp_sk_left_pane_ParamLimits

0xdee2,	// (0x00038cde) midp_keyp_sk_left_pane

0xdf3a,	// (0x00038d36) midp_keyp_sk_right_pane_ParamLimits

0xdf3a,	// (0x00038d36) midp_keyp_sk_right_pane

0x7674,	// (0x00032470) bg_button_pane_cp03

0xdf92,	// (0x00038d8e) midp_keyp_sk_left_pane_g1

0x7674,	// (0x00032470) bg_button_pane_cp04

0xdf92,	// (0x00038d8e) midp_keyp_sk_right_pane_g1

0xc126,	// (0x00036f22) midp_keyp_rocker_pane_g1

0xdf9b,	// (0x00038d97) keyp_game_cell_pane_ParamLimits

0xdf9b,	// (0x00038d97) keyp_game_cell_pane

0x7674,	// (0x00032470) bg_button_pane_cp02

0xdfae,	// (0x00038daa) keyp_game_cell_pane_g1

0x4c0b,	// (0x0002fa07) popup_fep_vkb2_window_ParamLimits

0x4c0b,	// (0x0002fa07) popup_fep_vkb2_window

0x6d4a,	// (0x00031b46) aid_size_cell_vkb2_ParamLimits

0x6d4a,	// (0x00031b46) aid_size_cell_vkb2

0x6d9e,	// (0x00031b9a) popup_fep_vkb2_window_g1_ParamLimits

0x6d9e,	// (0x00031b9a) popup_fep_vkb2_window_g1

0x6de6,	// (0x00031be2) vkb2_area_bottom_pane_ParamLimits

0x6de6,	// (0x00031be2) vkb2_area_bottom_pane

0x6e32,	// (0x00031c2e) vkb2_area_keypad_pane_ParamLimits

0x6e32,	// (0x00031c2e) vkb2_area_keypad_pane

0x6e74,	// (0x00031c70) vkb2_area_top_pane_ParamLimits

0x6e74,	// (0x00031c70) vkb2_area_top_pane

0x6eee,	// (0x00031cea) vkb2_top_entry_pane_ParamLimits

0x6eee,	// (0x00031cea) vkb2_top_entry_pane

0x6f18,	// (0x00031d14) vkb2_top_grid_left_pane_ParamLimits

0x6f18,	// (0x00031d14) vkb2_top_grid_left_pane

0x6f36,	// (0x00031d32) vkb2_top_grid_right_pane_ParamLimits

0x6f36,	// (0x00031d32) vkb2_top_grid_right_pane

0x6f54,	// (0x00031d50) vkb2_cell_keypad_pane_ParamLimits

0x6f54,	// (0x00031d50) vkb2_cell_keypad_pane

0x7025,	// (0x00031e21) vkb2_area_bottom_grid_pane_ParamLimits

0x7025,	// (0x00031e21) vkb2_area_bottom_grid_pane

0x704b,	// (0x00031e47) vkb2_area_bottom_pane_g1_ParamLimits

0x704b,	// (0x00031e47) vkb2_area_bottom_pane_g1

0x706f,	// (0x00031e6b) vkb2_area_bottom_pane_g2_ParamLimits

0x706f,	// (0x00031e6b) vkb2_area_bottom_pane_g2

0x709d,	// (0x00031e99) vkb2_area_bottom_pane_g3_ParamLimits

0x709d,	// (0x00031e99) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x0003ab8e) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x0003ab8e) vkb2_area_bottom_pane_g

0x70fe,	// (0x00031efa) vkb2_top_cell_left_pane_ParamLimits

0x70fe,	// (0x00031efa) vkb2_top_cell_left_pane

0xdfbf,	// (0x00038dbb) vkb2_top_entry_pane_g1_ParamLimits

0xdfbf,	// (0x00038dbb) vkb2_top_entry_pane_g1

0xdfcd,	// (0x00038dc9) vkb2_top_entry_pane_t1_ParamLimits

0xdfcd,	// (0x00038dc9) vkb2_top_entry_pane_t1

0xdfff,	// (0x00038dfb) vkb2_top_entry_pane_t2_ParamLimits

0xdfff,	// (0x00038dfb) vkb2_top_entry_pane_t2

0xe031,	// (0x00038e2d) vkb2_top_entry_pane_t3_ParamLimits

0xe031,	// (0x00038e2d) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x0003ab95) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x0003ab95) vkb2_top_entry_pane_t

0x714b,	// (0x00031f47) vkb2_top_grid_right_pane_g1_ParamLimits

0x714b,	// (0x00031f47) vkb2_top_grid_right_pane_g1

0x7161,	// (0x00031f5d) vkb2_top_grid_right_pane_g2_ParamLimits

0x7161,	// (0x00031f5d) vkb2_top_grid_right_pane_g2

0x7179,	// (0x00031f75) vkb2_top_grid_right_pane_g3_ParamLimits

0x7179,	// (0x00031f75) vkb2_top_grid_right_pane_g3

0x7191,	// (0x00031f8d) vkb2_top_grid_right_pane_g4_ParamLimits

0x7191,	// (0x00031f8d) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x0003ab9c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x0003ab9c) vkb2_top_grid_right_pane_g

0x71a7,	// (0x00031fa3) vkb2_top_cell_left_pane_g1

0x71be,	// (0x00031fba) vkb2_cell_keypad_pane_g1_ParamLimits

0x71be,	// (0x00031fba) vkb2_cell_keypad_pane_g1

0xe055,	// (0x00038e51) vkb2_cell_keypad_pane_t1_ParamLimits

0xe055,	// (0x00038e51) vkb2_cell_keypad_pane_t1

0x71cc,	// (0x00031fc8) vkb2_cell_bottom_grid_pane_ParamLimits

0x71cc,	// (0x00031fc8) vkb2_cell_bottom_grid_pane

0x7205,	// (0x00032001) vkb2_cell_bottom_grid_pane_g1

0xdbe7,	// (0x000389e3) aid_call2_pane_cp02

0xdbef,	// (0x000389eb) aid_call_pane_cp02

0xdbf7,	// (0x000389f3) clock_digital_number_pane_cp10

0xdbff,	// (0x000389fb) clock_digital_number_pane_cp11

0xdc07,	// (0x00038a03) clock_digital_number_pane_cp12

0xdc0f,	// (0x00038a0b) clock_digital_number_pane_cp13

0xdc17,	// (0x00038a13) clock_digital_separator_pane_cp10

0x8c98,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g1

0x8c98,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g2

0xdc1f,	// (0x00038a1b) popup_clock_digital_analogue_window_cp2_g3

0x8c98,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g4

0xdc1f,	// (0x00038a1b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x0003ab51) popup_clock_digital_analogue_window_cp2_g

0xdc27,	// (0x00038a23) popup_clock_digital_analogue_window_cp2_t1

0xdc35,	// (0x00038a31) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x0003ab5c) popup_clock_digital_analogue_window_cp2_t

0xc126,	// (0x00036f22) clock_digital_number_pane_cp10_g1

0xc126,	// (0x00036f22) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0003a938) clock_digital_number_pane_cp10_g

0xc126,	// (0x00036f22) clock_digital_separator_pane_cp10_g1

0xc126,	// (0x00036f22) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0003a938) clock_digital_separator_pane_cp10_g

0xda63,	// (0x0003885f) uniindi_top_pane_g3

0xda74,	// (0x00038870) uniindi_top_pane_g4

0x6fdf,	// (0x00031ddb) vkb2_row_keypad_pane_ParamLimits

0x6fdf,	// (0x00031ddb) vkb2_row_keypad_pane

0x7221,	// (0x0003201d) vkb2_cell_t_keypad_pane_ParamLimits

0x7221,	// (0x0003201d) vkb2_cell_t_keypad_pane

0x7231,	// (0x0003202d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7231,	// (0x0003202d) vkb2_cell_t_keypad_pane_cp08

0x7244,	// (0x00032040) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7244,	// (0x00032040) vkb2_cell_t_keypad_pane_cp09

0x7258,	// (0x00032054) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7258,	// (0x00032054) vkb2_cell_t_keypad_pane_cp01

0x7269,	// (0x00032065) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7269,	// (0x00032065) vkb2_cell_t_keypad_pane_cp02

0x727a,	// (0x00032076) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x727a,	// (0x00032076) vkb2_cell_t_keypad_pane_cp03

0x728b,	// (0x00032087) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x728b,	// (0x00032087) vkb2_cell_t_keypad_pane_cp04

0x729c,	// (0x00032098) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x729c,	// (0x00032098) vkb2_cell_t_keypad_pane_cp05

0x72ad,	// (0x000320a9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x72ad,	// (0x000320a9) vkb2_cell_t_keypad_pane_cp06

0x72be,	// (0x000320ba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x72be,	// (0x000320ba) vkb2_cell_t_keypad_pane_cp07

0x72cf,	// (0x000320cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x72cf,	// (0x000320cb) vkb2_cell_t_keypad_pane_cp10

0x6a85,	// (0x00031881) vkb2_cell_t_keypad_pane_g1

0xe06c,	// (0x00038e68) vkb2_cell_t_keypad_pane_t1

0x4b02,	// (0x0002f8fe) popup_grid_graphic2_window

0xe07e,	// (0x00038e7a) aid_size_cell_graphic2_ParamLimits

0xe07e,	// (0x00038e7a) aid_size_cell_graphic2

0xe0b6,	// (0x00038eb2) bg_popup_window_pane_cp21_ParamLimits

0xe0b6,	// (0x00038eb2) bg_popup_window_pane_cp21

0xe0c4,	// (0x00038ec0) graphic2_pages_pane_ParamLimits

0xe0c4,	// (0x00038ec0) graphic2_pages_pane

0xe10a,	// (0x00038f06) grid_graphic2_control_pane_ParamLimits

0xe10a,	// (0x00038f06) grid_graphic2_control_pane

0xe148,	// (0x00038f44) grid_graphic2_pane_ParamLimits

0xe148,	// (0x00038f44) grid_graphic2_pane

0xe1bc,	// (0x00038fb8) cell_graphic2_pane

0x4b02,	// (0x0002f8fe) main_comp_mode_pane

0xd2e3,	// (0x000380df) list_ai3_gene_pane_ParamLimits

0xd6ad,	// (0x000384a9) bg_popup_window_pane_cp19_ParamLimits

0xd6b9,	// (0x000384b5) bg_touch_area_indi_pane_ParamLimits

0xd6b9,	// (0x000384b5) bg_touch_area_indi_pane

0xd6cf,	// (0x000384cb) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6cf,	// (0x000384cb) bg_touch_area_indi_pane_cp01

0xd6e5,	// (0x000384e1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e5,	// (0x000384e1) bg_touch_area_indi_pane_cp02

0xd6fd,	// (0x000384f9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fd,	// (0x000384f9) bg_touch_area_indi_pane_cp03

0xd717,	// (0x00038513) popup_slider_window_g1_ParamLimits

0xd733,	// (0x0003852f) popup_slider_window_g2_ParamLimits

0xd74f,	// (0x0003854b) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x0003aae6) popup_slider_window_g_ParamLimits

0xd7ab,	// (0x000385a7) popup_slider_window_t1_ParamLimits

0xd81f,	// (0x0003861b) small_volume_slider_vertical_pane_ParamLimits

0xe1bc,	// (0x00038fb8) cell_graphic2_pane_ParamLimits

0xe20a,	// (0x00039006) bg_button_pane_cp10_ParamLimits

0xe20a,	// (0x00039006) bg_button_pane_cp10

0xe21d,	// (0x00039019) bg_button_pane_cp11_ParamLimits

0xe21d,	// (0x00039019) bg_button_pane_cp11

0xe230,	// (0x0003902c) graphic2_pages_pane_g1_ParamLimits

0xe230,	// (0x0003902c) graphic2_pages_pane_g1

0xe24b,	// (0x00039047) graphic2_pages_pane_g2_ParamLimits

0xe24b,	// (0x00039047) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x0003abaa) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x0003abaa) graphic2_pages_pane_g

0xe263,	// (0x0003905f) graphic2_pages_pane_t1_ParamLimits

0xe263,	// (0x0003905f) graphic2_pages_pane_t1

0xe27b,	// (0x00039077) cell_graphic2_control_pane_ParamLimits

0xe27b,	// (0x00039077) cell_graphic2_control_pane

0xe29c,	// (0x00039098) cell_graphic2_pane_g1_ParamLimits

0xe29c,	// (0x00039098) cell_graphic2_pane_g1

0xe2a9,	// (0x000390a5) cell_graphic2_pane_g2_ParamLimits

0xe2a9,	// (0x000390a5) cell_graphic2_pane_g2

0xe2b6,	// (0x000390b2) cell_graphic2_pane_g3_ParamLimits

0xe2b6,	// (0x000390b2) cell_graphic2_pane_g3

0xe2c3,	// (0x000390bf) cell_graphic2_pane_g4_ParamLimits

0xe2c3,	// (0x000390bf) cell_graphic2_pane_g4

0xe2d0,	// (0x000390cc) cell_graphic2_pane_g5_ParamLimits

0xe2d0,	// (0x000390cc) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x0003abaf) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x0003abaf) cell_graphic2_pane_g

0xe2eb,	// (0x000390e7) cell_graphic2_pane_t1_ParamLimits

0xe2eb,	// (0x000390e7) cell_graphic2_pane_t1

0x9b4c,	// (0x00034948) grid_highlight_pane_cp11_ParamLimits

0x9b4c,	// (0x00034948) grid_highlight_pane_cp11

0x79f1,	// (0x000327ed) bg_button_pane_cp05

0xe314,	// (0x00039110) cell_graphic2_control_pane_g1

0xc126,	// (0x00036f22) bg_touch_area_indi_pane_g1

0xe33c,	// (0x00039138) aid_cmod_rocker_key_size

0xe346,	// (0x00039142) aid_cmode_itu_key_size

0xe350,	// (0x0003914c) main_cmode_video_pane

0xe35a,	// (0x00039156) main_comp_mode_itu_pane

0xe366,	// (0x00039162) main_comp_mode_rocker_pane

0xe372,	// (0x0003916e) cell_cmode_rocker_pane_ParamLimits

0xe372,	// (0x0003916e) cell_cmode_rocker_pane

0xe384,	// (0x00039180) cell_cmode_itu_pane_ParamLimits

0xe384,	// (0x00039180) cell_cmode_itu_pane

0x8617,	// (0x00033413) bg_button_pane_cp06_ParamLimits

0x8617,	// (0x00033413) bg_button_pane_cp06

0xc3a4,	// (0x000371a0) cell_cmode_rocker_pane_g1_ParamLimits

0xc3a4,	// (0x000371a0) cell_cmode_rocker_pane_g1

0xd8c3,	// (0x000386bf) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c3,	// (0x000386bf) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x0003abbf) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x0003abbf) cell_cmode_rocker_pane_g

0x7674,	// (0x00032470) bg_button_pane_cp07

0xe399,	// (0x00039195) cell_cmode_itu_pane_g1

0xe3a2,	// (0x0003919e) cell_cmode_itu_pane_t1

0xe3b0,	// (0x000391ac) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x0003abc4) cell_cmode_itu_pane_t

0xdae6,	// (0x000388e2) aid_touch_ctrl_left

0xdaee,	// (0x000388ea) aid_touch_ctrl_right

0x7674,	// (0x00032470) compa_mode_pane

0xe3be,	// (0x000391ba) aid_cmod_rocker_key_size_cp

0xe3c8,	// (0x000391c4) aid_cmode_itu_key_size_cp

0xe3d2,	// (0x000391ce) compa_mode_pane_g1

0xe3da,	// (0x000391d6) compa_mode_pane_g2

0xe3e2,	// (0x000391de) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x0003abc9) compa_mode_pane_g

0xe3ea,	// (0x000391e6) main_comp_mode_itu_pane_cp

0xe3f2,	// (0x000391ee) main_comp_mode_rocker_pane_cp

0xe3fa,	// (0x000391f6) cell_cmode_itu_pane_cp_ParamLimits

0xe3fa,	// (0x000391f6) cell_cmode_itu_pane_cp

0xe40f,	// (0x0003920b) cell_cmode_rocker_pane_cp_ParamLimits

0xe40f,	// (0x0003920b) cell_cmode_rocker_pane_cp

0x8617,	// (0x00033413) bg_button_pane_cp06_cp_ParamLimits

0x8617,	// (0x00033413) bg_button_pane_cp06_cp

0xc3a4,	// (0x000371a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3a4,	// (0x000371a0) cell_cmode_rocker_pane_g1_cp

0xc126,	// (0x00036f22) cell_cmode_rocker_pane_g2_cp

0x7674,	// (0x00032470) bg_button_pane_cp07_cp

0xb032,	// (0x00035e2e) cell_cmode_itu_pane_g1_cp

0xe421,	// (0x0003921d) cell_cmode_itu_pane_t1_cp

0xe421,	// (0x0003921d) cell_cmode_itu_pane_t2_cp

0xb01f,	// (0x00035e1b) settings_code_pane_cp2

0x7768,	// (0x00032564) bg_popup_window_pane_cp3_ParamLimits

0x820e,	// (0x0003300a) heading_pane_cp3_ParamLimits

0x821a,	// (0x00033016) listscroll_popup_graphic_pane_ParamLimits

0x682e,	// (0x0003162a) fep_hwr_aid_pane_ParamLimits

0x6ca5,	// (0x00031aa1) aid_touch_sctrl_top_ParamLimits

0x6cc0,	// (0x00031abc) sctrl_sk_top_pane_g1_ParamLimits

0x6a85,	// (0x00031881) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0003aaff) sctrl_sk_top_pane_g_ParamLimits

0x6ccd,	// (0x00031ac9) sctrl_sk_top_pane_t1_ParamLimits

0x6ca5,	// (0x00031aa1) aid_touch_sctrl_bottom_ParamLimits

0x6ccd,	// (0x00031ac9) sctrl_sk_bottom_pane_t1_ParamLimits

0xda2f,	// (0x0003882b) aid_area_touch_clock

0x6eb6,	// (0x00031cb2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6eb6,	// (0x00031cb2) aid_vkb2_area_top_pane_cell

0x7001,	// (0x00031dfd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7001,	// (0x00031dfd) aid_vkb2_area_bottom_pane_cell

0xdfb7,	// (0x00038db3) popup_char_count_window

0xe42f,	// (0x0003922b) popup_char_count_window_g1

0xe438,	// (0x00039234) popup_char_count_window_g2

0xe441,	// (0x0003923d) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x0003abd0) popup_char_count_window_g

0xe44a,	// (0x00039246) popup_char_count_window_t1

0x6d7c,	// (0x00031b78) popup_fep_char_preview_window_ParamLimits

0x6d7c,	// (0x00031b78) popup_fep_char_preview_window

0x6ed4,	// (0x00031cd0) vkb2_top_candi_pane_ParamLimits

0x6ed4,	// (0x00031cd0) vkb2_top_candi_pane

0xe458,	// (0x00039254) cell_vkb2_top_candi_pane_ParamLimits

0xe458,	// (0x00039254) cell_vkb2_top_candi_pane

0x72e4,	// (0x000320e0) bg_popup_fep_char_preview_window_ParamLimits

0x72e4,	// (0x000320e0) bg_popup_fep_char_preview_window

0x72f2,	// (0x000320ee) popup_fep_char_preview_window_t1_ParamLimits

0x72f2,	// (0x000320ee) popup_fep_char_preview_window_t1

0xe4a5,	// (0x000392a1) bg_popup_fep_char_preview_window_g1

0xe4ad,	// (0x000392a9) bg_popup_fep_char_preview_window_g2

0xe4b5,	// (0x000392b1) bg_popup_fep_char_preview_window_g3

0xe4bd,	// (0x000392b9) bg_popup_fep_char_preview_window_g4

0xe4c5,	// (0x000392c1) bg_popup_fep_char_preview_window_g5

0x732c,	// (0x00032128) bg_popup_fep_char_preview_window_g6

0xe4cd,	// (0x000392c9) bg_popup_fep_char_preview_window_g7

0xe4d5,	// (0x000392d1) bg_popup_fep_char_preview_window_g8

0xe4dd,	// (0x000392d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x0003abd7) bg_popup_fep_char_preview_window_g

0x6a85,	// (0x00031881) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a85,	// (0x00031881) cell_vkb2_top_candi_pane_g1

0x6a93,	// (0x0003188f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a93,	// (0x0003188f) cell_vkb2_top_candi_pane_g2

0xddc2,	// (0x00038bbe) cell_vkb2_top_candi_pane_g3_ParamLimits

0xddc2,	// (0x00038bbe) cell_vkb2_top_candi_pane_g3

0x7334,	// (0x00032130) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7334,	// (0x00032130) cell_vkb2_top_candi_pane_g4

0xc87b,	// (0x00037677) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc87b,	// (0x00037677) cell_vkb2_top_candi_pane_g5

0x7355,	// (0x00032151) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7355,	// (0x00032151) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x0003abea) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x0003abea) cell_vkb2_top_candi_pane_g

0x7363,	// (0x0003215f) cell_vkb2_top_candi_pane_t1

0x6557,	// (0x00031353) aid_size_touch_slider_mark_ParamLimits

0x6557,	// (0x00031353) aid_size_touch_slider_mark

0xe0fa,	// (0x00038ef6) grid_graphic2_catg_pane_ParamLimits

0xe0fa,	// (0x00038ef6) grid_graphic2_catg_pane

0xe198,	// (0x00038f94) popup_grid_graphic2_window_t1_ParamLimits

0xe198,	// (0x00038f94) popup_grid_graphic2_window_t1

0xe1aa,	// (0x00038fa6) popup_grid_graphic2_window_t2_ParamLimits

0xe1aa,	// (0x00038fa6) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x0003aba5) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x0003aba5) popup_grid_graphic2_window_t

0x79f1,	// (0x000327ed) bg_button_pane_cp05_ParamLimits

0xe314,	// (0x00039110) cell_graphic2_control_pane_g1_ParamLimits

0xe4e5,	// (0x000392e1) cell_graphic2_catg_pane_ParamLimits

0xe4e5,	// (0x000392e1) cell_graphic2_catg_pane

0x7674,	// (0x00032470) bg_button_pane_cp12

0xe4f7,	// (0x000392f3) cell_graphic2_catg_pane_g1

0xd9fb,	// (0x000387f7) cell_tb_ext_pane_t1_ParamLimits

0x711e,	// (0x00031f1a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x711e,	// (0x00031f1a) vkb2_top_cell_right_narrow_pane

0x7136,	// (0x00031f32) vkb2_top_cell_right_wide_pane_ParamLimits

0x7136,	// (0x00031f32) vkb2_top_cell_right_wide_pane

0x6820,	// (0x0003161c) bg_vkb2_func_pane_ParamLimits

0x6820,	// (0x0003161c) bg_vkb2_func_pane

0x71a7,	// (0x00031fa3) vkb2_top_cell_left_pane_g1_ParamLimits

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp03

0x7205,	// (0x00032001) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ae0,	// (0x000348dc) bg_vkb2_func_pane_g1

0x9ae8,	// (0x000348e4) bg_vkb2_func_pane_g2

0x9af8,	// (0x000348f4) bg_vkb2_func_pane_g3

0x9af0,	// (0x000348ec) bg_vkb2_func_pane_g4

0x9b00,	// (0x000348fc) bg_vkb2_func_pane_g5

0x9b08,	// (0x00034904) bg_vkb2_func_pane_g6

0x9b10,	// (0x0003490c) bg_vkb2_func_pane_g7

0x9b18,	// (0x00034914) bg_vkb2_func_pane_g8

0x9ad8,	// (0x000348d4) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x0003abf7) bg_vkb2_func_pane_g

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp01

0x71a7,	// (0x00031fa3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x71a7,	// (0x00031fa3) vkb2_top_cell_right_wide_pane_g1

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6820,	// (0x0003161c) bg_vkb2_fuc_pane_cp02

0x7205,	// (0x00032001) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7205,	// (0x00032001) vkb2_top_cell_right_narrow_pane_g1

0xd631,	// (0x0003842d) aid_touch_area_decrease_ParamLimits

0xd631,	// (0x0003842d) aid_touch_area_decrease

0xd64f,	// (0x0003844b) aid_touch_area_increase_ParamLimits

0xd64f,	// (0x0003844b) aid_touch_area_increase

0xd65b,	// (0x00038457) aid_touch_area_mute_ParamLimits

0xd65b,	// (0x00038457) aid_touch_area_mute

0xd67f,	// (0x0003847b) aid_touch_area_slider_ParamLimits

0xd67f,	// (0x0003847b) aid_touch_area_slider

0xd76b,	// (0x00038567) popup_slider_window_g4_ParamLimits

0xd76b,	// (0x00038567) popup_slider_window_g4

0xd777,	// (0x00038573) popup_slider_window_g5_ParamLimits

0xd777,	// (0x00038573) popup_slider_window_g5

0xd799,	// (0x00038595) popup_slider_window_g6_ParamLimits

0xd799,	// (0x00038595) popup_slider_window_g6

0xd7d9,	// (0x000385d5) popup_slider_window_t2_ParamLimits

0xd7d9,	// (0x000385d5) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x0003aaf3) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x0003aaf3) popup_slider_window_t

0xd7f1,	// (0x000385ed) slider_pane_ParamLimits

0xd7f1,	// (0x000385ed) slider_pane

0xe500,	// (0x000392fc) slider_pane_g1_ParamLimits

0xe500,	// (0x000392fc) slider_pane_g1

0xe514,	// (0x00039310) slider_pane_g2_ParamLimits

0xe514,	// (0x00039310) slider_pane_g2

0xe52a,	// (0x00039326) slider_pane_g3_ParamLimits

0xe52a,	// (0x00039326) slider_pane_g3

0x0003,

0xfe0e,	// (0x0003ac0a) slider_pane_g_ParamLimits

0xfe0e,	// (0x0003ac0a) slider_pane_g

0x6039,	// (0x00030e35) popup_tb_float_extension_window_ParamLimits

0x6039,	// (0x00030e35) popup_tb_float_extension_window

0xe556,	// (0x00039352) aid_size_cell_tb_float_ext

0x7674,	// (0x00032470) bg_popup_sub_window_cp28

0xe562,	// (0x0003935e) grid_tb_float_ext_pane

0xe56c,	// (0x00039368) cell_tb_float_ext_pane_ParamLimits

0xe56c,	// (0x00039368) cell_tb_float_ext_pane

0xe586,	// (0x00039382) cell_tb_float_ext_pane_g1

0xe58f,	// (0x0003938b) grid_highlight_pane_cp12

0x696f,	// (0x0003176b) cell_last_hwr_side_pane_ParamLimits

0x696f,	// (0x0003176b) cell_last_hwr_side_pane

0xc126,	// (0x00036f22) cell_last_hwr_side_pane_g1

0xe598,	// (0x00039394) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x0003ac13) cell_last_hwr_side_pane_g

0x70cd,	// (0x00031ec9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x70cd,	// (0x00031ec9) vkb2_area_bottom_space_btn_pane

0x6a85,	// (0x00031881) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe06c,	// (0x00038e68) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7363,	// (0x0003215f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7382,	// (0x0003217e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7382,	// (0x0003217e) vkb2_area_bottom_space_btn_pane_g1

0x73bc,	// (0x000321b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x73bc,	// (0x000321b8) vkb2_area_bottom_space_btn_pane_g2

0x73f2,	// (0x000321ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73f2,	// (0x000321ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x0003ac18) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x0003ac18) vkb2_area_bottom_space_btn_pane_g

0x68e3,	// (0x000316df) cel_fep_hwr_func_pane_ParamLimits

0x68e3,	// (0x000316df) cel_fep_hwr_func_pane

0x691f,	// (0x0003171b) cell_hwr_side_button_pane_ParamLimits

0x691f,	// (0x0003171b) cell_hwr_side_button_pane

0xda2f,	// (0x0003882b) aid_area_touch_clock_ParamLimits

0x79f1,	// (0x000327ed) bg_uniindi_top_pane_ParamLimits

0xda41,	// (0x0003883d) uniindi_top_pane_g1_ParamLimits

0xda57,	// (0x00038853) uniindi_top_pane_g2_ParamLimits

0xda63,	// (0x0003885f) uniindi_top_pane_g3_ParamLimits

0xda74,	// (0x00038870) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x0003ab2b) uniindi_top_pane_g_ParamLimits

0xda81,	// (0x0003887d) uniindi_top_pane_t1_ParamLimits

0x79f1,	// (0x000327ed) bg_vkb2_func_pane_cp01_ParamLimits

0x79f1,	// (0x000327ed) bg_vkb2_func_pane_cp01

0xe5a1,	// (0x0003939d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a1,	// (0x0003939d) cel_fep_hwr_func_pane_g1

0x79f1,	// (0x000327ed) bg_vkb2_func_pane_cp02_ParamLimits

0x79f1,	// (0x000327ed) bg_vkb2_func_pane_cp02

0xe5a1,	// (0x0003939d) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a1,	// (0x0003939d) cell_hwr_side_button_pane_g1

0x9959,	// (0x00034755) status_pane_g4_ParamLimits

0x9959,	// (0x00034755) status_pane_g4

0x9973,	// (0x0003476f) status_pane_t1

0xbe60,	// (0x00036c5c) form2_midp_gauge_slider_cont_pane

0xbe68,	// (0x00036c64) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe7a,	// (0x00036c76) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe8c,	// (0x00036c88) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x0003a8eb) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe9e,	// (0x00036c9a) form2_midp_slider_pane_ParamLimits

0x6d3c,	// (0x00031b38) aid_size_cell_func_vkb2_ParamLimits

0x6d3c,	// (0x00031b38) aid_size_cell_func_vkb2

0xe542,	// (0x0003933e) slider_pane_g4_ParamLimits

0xe542,	// (0x0003933e) slider_pane_g4

0x743c,	// (0x00032238) form2_midp_gauge_slider_pane_t2_cp01

0x744a,	// (0x00032246) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x744a,	// (0x00032246) form2_midp_gauge_slider_pane_t3_cp01

0x7467,	// (0x00032263) form2_midp_slider_pane_cp01

0x7674,	// (0x00032470) navi_smil_pane

0xe5da,	// (0x000393d6) navi_smil_pane_g1

0xe5e2,	// (0x000393de) navi_smil_pane_t1

0xe5af,	// (0x000393ab) form2_midp_slider_pane_g1

0xe5b8,	// (0x000393b4) form2_midp_slider_pane_g2

0xe5c0,	// (0x000393bc) form2_midp_slider_pane_g3

0xe5af,	// (0x000393ab) form2_midp_slider_pane_g4

0xe5c8,	// (0x000393c4) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x0003ac21) form2_midp_slider_pane_g

0x742c,	// (0x00032228) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x742c,	// (0x00032228) vkb2_area_bottom_space_btn_pane_g4

0x9796,	// (0x00034592) lc0_navi_pane_ParamLimits

0x9796,	// (0x00034592) lc0_navi_pane

0x980c,	// (0x00034608) lc0_stat_indi_pane_ParamLimits

0x980c,	// (0x00034608) lc0_stat_indi_pane

0x9823,	// (0x0003461f) ls0_title_pane_ParamLimits

0x9823,	// (0x0003461f) ls0_title_pane

0x8617,	// (0x00033413) bg_popup_sub_pane_cp14_ParamLimits

0xda16,	// (0x00038812) list_uniindi_pane_ParamLimits

0xda22,	// (0x0003881e) uniindi_top_pane_ParamLimits

0xdabe,	// (0x000388ba) list_single_uniindi_pane_g1_ParamLimits

0xdad1,	// (0x000388cd) list_single_uniindi_pane_t1_ParamLimits

0x7470,	// (0x0003226c) lc0_stat_clock_pane_ParamLimits

0x7470,	// (0x0003226c) lc0_stat_clock_pane

0xe5f0,	// (0x000393ec) lc0_stat_indi_pane_g1_ParamLimits

0xe5f0,	// (0x000393ec) lc0_stat_indi_pane_g1

0xe5fd,	// (0x000393f9) lc0_stat_indi_pane_g2_ParamLimits

0xe5fd,	// (0x000393f9) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x0003ac2c) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x0003ac2c) lc0_stat_indi_pane_g

0x747d,	// (0x00032279) lc0_uni_indicator_pane_ParamLimits

0x747d,	// (0x00032279) lc0_uni_indicator_pane

0xe60a,	// (0x00039406) ls0_title_pane_g1_ParamLimits

0xe60a,	// (0x00039406) ls0_title_pane_g1

0xe61e,	// (0x0003941a) ls0_title_pane_t1_ParamLimits

0xe61e,	// (0x0003941a) ls0_title_pane_t1

0x748a,	// (0x00032286) lc0_uni_indicator_pane_g1_ParamLimits

0x748a,	// (0x00032286) lc0_uni_indicator_pane_g1

0xe654,	// (0x00039450) lc0_stat_clock_pane_t1

0x4b02,	// (0x0002f8fe) main_ai5_pane

0xe662,	// (0x0003945e) ai5_sk_pane_ParamLimits

0xe662,	// (0x0003945e) ai5_sk_pane

0xe66f,	// (0x0003946b) cell_ai5_widget_pane_ParamLimits

0xe66f,	// (0x0003946b) cell_ai5_widget_pane

0xe725,	// (0x00039521) aid_size_cell_widget_grid

0xe73b,	// (0x00039537) bg_ai5_widget_pane_ParamLimits

0xe73b,	// (0x00039537) bg_ai5_widget_pane

0xe7a5,	// (0x000395a1) cell_ai5_widget_pane_g2

0xe7b5,	// (0x000395b1) cell_ai5_widget_pane_g3

0xe7d4,	// (0x000395d0) cell_ai5_widget_pane_g4

0xe7e0,	// (0x000395dc) cell_ai5_widget_pane_g5

0xe7ec,	// (0x000395e8) cell_ai5_widget_pane_g6

0xe7f8,	// (0x000395f4) cell_ai5_widget_pane_g7

0xe840,	// (0x0003963c) cell_ai5_widget_pane_t1_ParamLimits

0xe840,	// (0x0003963c) cell_ai5_widget_pane_t1

0xe85d,	// (0x00039659) cell_ai5_widget_pane_t2_ParamLimits

0xe85d,	// (0x00039659) cell_ai5_widget_pane_t2

0xe875,	// (0x00039671) cell_ai5_widget_pane_t3_ParamLimits

0xe875,	// (0x00039671) cell_ai5_widget_pane_t3

0xe88d,	// (0x00039689) cell_ai5_widget_pane_t4_ParamLimits

0xe88d,	// (0x00039689) cell_ai5_widget_pane_t4

0xe8a7,	// (0x000396a3) cell_ai5_widget_pane_t5_ParamLimits

0xe8a7,	// (0x000396a3) cell_ai5_widget_pane_t5

0xe8c6,	// (0x000396c2) cell_ai5_widget_pane_t6_ParamLimits

0xe8c6,	// (0x000396c2) cell_ai5_widget_pane_t6

0xe8d8,	// (0x000396d4) cell_ai5_widget_pane_t7_ParamLimits

0xe8d8,	// (0x000396d4) cell_ai5_widget_pane_t7

0xe8f1,	// (0x000396ed) cell_ai5_widget_pane_t8_ParamLimits

0xe8f1,	// (0x000396ed) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x0003ac46) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x0003ac46) cell_ai5_widget_pane_t

0xe93d,	// (0x00039739) grid_ai5_widget_pane

0x8617,	// (0x00033413) highlight_cell_ai5_widget_pane_ParamLimits

0x8617,	// (0x00033413) highlight_cell_ai5_widget_pane

0xe955,	// (0x00039751) ai5_sk_left_pane

0xe95f,	// (0x0003975b) ai5_sk_middle_pane

0xe969,	// (0x00039765) ai5_sk_right_pane

0xe973,	// (0x0003976f) bg_ai5_widget_pane_g1_ParamLimits

0xe973,	// (0x0003976f) bg_ai5_widget_pane_g1

0xe97f,	// (0x0003977b) bg_ai5_widget_pane_g2_ParamLimits

0xe97f,	// (0x0003977b) bg_ai5_widget_pane_g2

0xe98b,	// (0x00039787) bg_ai5_widget_pane_g3_ParamLimits

0xe98b,	// (0x00039787) bg_ai5_widget_pane_g3

0xe997,	// (0x00039793) bg_ai5_widget_pane_g4_ParamLimits

0xe997,	// (0x00039793) bg_ai5_widget_pane_g4

0xe9a3,	// (0x0003979f) bg_ai5_widget_pane_g5_ParamLimits

0xe9a3,	// (0x0003979f) bg_ai5_widget_pane_g5

0xe9af,	// (0x000397ab) bg_ai5_widget_pane_g6_ParamLimits

0xe9af,	// (0x000397ab) bg_ai5_widget_pane_g6

0xe9bb,	// (0x000397b7) bg_ai5_widget_pane_g7_ParamLimits

0xe9bb,	// (0x000397b7) bg_ai5_widget_pane_g7

0xe9c7,	// (0x000397c3) bg_ai5_widget_pane_g8_ParamLimits

0xe9c7,	// (0x000397c3) bg_ai5_widget_pane_g8

0xe9d3,	// (0x000397cf) bg_ai5_widget_pane_g9_ParamLimits

0xe9d3,	// (0x000397cf) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x0003ac5b) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x0003ac5b) bg_ai5_widget_pane_g

0xea06,	// (0x00039802) cell_shortcut_ai5_widget_pane_ParamLimits

0xea06,	// (0x00039802) cell_shortcut_ai5_widget_pane

0x92a0,	// (0x0003409c) bg_cell_shortcut_ai5_widget_pane

0xea17,	// (0x00039813) cell_grid_ai5_widget_pane_g1

0xea20,	// (0x0003981c) highlight_cell_shortcut_ai5_widget_pane

0x9ae0,	// (0x000348dc) ai5_sk_left_pane_g1

0xea28,	// (0x00039824) ai5_sk_left_pane_g2

0xea30,	// (0x0003982c) ai5_sk_left_pane_g3

0xea38,	// (0x00039834) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x0003ac6e) ai5_sk_left_pane_g

0xea40,	// (0x0003983c) ai5_sk_left_pane_t1

0x9ae8,	// (0x000348e4) ai5_sk_right_pane_g1

0xea4e,	// (0x0003984a) ai5_sk_right_pane_g2

0xea56,	// (0x00039852) ai5_sk_right_pane_g3

0xea5e,	// (0x0003985a) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x0003ac77) ai5_sk_right_pane_g

0xea66,	// (0x00039862) ai5_sk_right_pane_t1

0x9ae8,	// (0x000348e4) ai5_sk_middle_pane_g1

0x9ae0,	// (0x000348dc) ai5_sk_middle_pane_g2

0x9b00,	// (0x000348fc) ai5_sk_middle_pane_g3

0xea56,	// (0x00039852) ai5_sk_middle_pane_g4

0xea30,	// (0x0003982c) ai5_sk_middle_pane_g5

0xea74,	// (0x00039870) ai5_sk_middle_pane_g6

0xea7c,	// (0x00039878) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x0003ac80) ai5_sk_middle_pane_g

0x9626,	// (0x00034422) aid_touch_area_size_lc0_ParamLimits

0x9626,	// (0x00034422) aid_touch_area_size_lc0

0x6ab4,	// (0x000318b0) cell_hwr_candidate_pane_t1_ParamLimits

0x9642,	// (0x0003443e) aid_touch_navi_pane

0x990b,	// (0x00034707) status_dt_navi_pane_ParamLimits

0x990b,	// (0x00034707) status_dt_navi_pane

0x9918,	// (0x00034714) status_dt_sta_pane_ParamLimits

0x9918,	// (0x00034714) status_dt_sta_pane

0xea84,	// (0x00039880) dt_sta_controll_pane

0xea91,	// (0x0003988d) dt_sta_indi_pane

0xeaa2,	// (0x0003989e) dt_sta_title_pane

0x79f1,	// (0x000327ed) bg_dt_sta_indi_pane_ParamLimits

0x79f1,	// (0x000327ed) bg_dt_sta_indi_pane

0xeab5,	// (0x000398b1) dt_sta_battery_pane

0xeabd,	// (0x000398b9) dt_sta_indi_pane_g1

0xeac6,	// (0x000398c2) dt_sta_indi_pane_g2

0xeacf,	// (0x000398cb) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x0003ac8f) dt_sta_indi_pane_g

0xead8,	// (0x000398d4) dt_sta_signal_pane

0x8617,	// (0x00033413) bg_dt_sta_title_pane_ParamLimits

0x8617,	// (0x00033413) bg_dt_sta_title_pane

0xeae1,	// (0x000398dd) dt_sta_title_pane_g1

0xeae9,	// (0x000398e5) dt_sta_title_pane_t1_ParamLimits

0xeae9,	// (0x000398e5) dt_sta_title_pane_t1

0x7674,	// (0x00032470) bg_dt_sta_control_pane

0xeafe,	// (0x000398fa) dt_sta_controll_pane_g1

0xeb07,	// (0x00039903) bg_dt_sta_title_pane_g1

0xeb10,	// (0x0003990c) bg_dt_sta_title_pane_g2

0xeb19,	// (0x00039915) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x0003ac96) bg_dt_sta_title_pane_g

0xc126,	// (0x00036f22) bg_dt_sta_indi_pane_g1

0xeb22,	// (0x0003991e) dt_sta_signal_pane_g1

0xeb2a,	// (0x00039926) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x0003ac9d) dt_sta_signal_pane_g

0xeb32,	// (0x0003992e) dt_sta_battery_pane_g1

0xeb3b,	// (0x00039937) dt_sta_battery_pane_t1

0xc126,	// (0x00036f22) bg_dt_sta_control_pane_g1

0x8daa,	// (0x00033ba6) fep_china_uni_eep_pane

0x8db2,	// (0x00033bae) fep_china_uni_entry_pane_ParamLimits

0x8dc2,	// (0x00033bbe) popup_fep_china_uni_window_g1_ParamLimits

0x8dd2,	// (0x00033bce) popup_fep_china_uni_window_g2_ParamLimits

0x8dd2,	// (0x00033bce) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003a51f) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003a51f) popup_fep_china_uni_window_g

0xeb4a,	// (0x00039946) fep_china_uni_eep_pane_g1

0xeb52,	// (0x0003994e) fep_china_uni_eep_pane_t1

0xe5d1,	// (0x000393cd) aid_touch_area_size_smil_player

0x978e,	// (0x0003458a) lc0_clock_pane

0x9967,	// (0x00034763) status_pane_g5_ParamLimits

0x9967,	// (0x00034763) status_pane_g5

0x5cfe,	// (0x00030afa) popup_keymap_window

0x992d,	// (0x00034729) status_icon_pane

0xe7b5,	// (0x000395b1) cell_ai5_widget_pane_g3_ParamLimits

0xe7d4,	// (0x000395d0) cell_ai5_widget_pane_g4_ParamLimits

0xe7e0,	// (0x000395dc) cell_ai5_widget_pane_g5_ParamLimits

0xe804,	// (0x00039600) cell_ai5_widget_pane_g8_ParamLimits

0xe804,	// (0x00039600) cell_ai5_widget_pane_g8

0xe818,	// (0x00039614) cell_ai5_widget_pane_g9_ParamLimits

0xe818,	// (0x00039614) cell_ai5_widget_pane_g9

0xe82c,	// (0x00039628) cell_ai5_widget_pane_g10_ParamLimits

0xe82c,	// (0x00039628) cell_ai5_widget_pane_g10

0xeb61,	// (0x0003995d) status_icon_pane_g1

0x7674,	// (0x00032470) bg_popup_sub_pane_cp13

0xeb69,	// (0x00039965) popup_keymap_window_t1

0x956b,	// (0x00034367) control_pane_g6_ParamLimits

0x956b,	// (0x00034367) control_pane_g6

0x9578,	// (0x00034374) control_pane_g7_ParamLimits

0x9578,	// (0x00034374) control_pane_g7

0x9585,	// (0x00034381) control_pane_g8_ParamLimits

0x9585,	// (0x00034381) control_pane_g8

0xea84,	// (0x00039880) dt_sta_controll_pane_ParamLimits

0xea91,	// (0x0003988d) dt_sta_indi_pane_ParamLimits

0xeaa2,	// (0x0003989e) dt_sta_title_pane_ParamLimits

0x854f,	// (0x0003334b) aid_size_touch_scroll_bar_cale

0x4bdb,	// (0x0002f9d7) popup_discreet_window_ParamLimits

0x4bdb,	// (0x0002f9d7) popup_discreet_window

0x4c63,	// (0x0002fa5f) popup_sk_window

0xa151,	// (0x00034f4d) bg_popup_sub_pane_cp28_ParamLimits

0xa151,	// (0x00034f4d) bg_popup_sub_pane_cp28

0xeb77,	// (0x00039973) popup_discreet_window_g1_ParamLimits

0xeb77,	// (0x00039973) popup_discreet_window_g1

0xeb97,	// (0x00039993) popup_discreet_window_t1_ParamLimits

0xeb97,	// (0x00039993) popup_discreet_window_t1

0xebb5,	// (0x000399b1) popup_discreet_window_t2_ParamLimits

0xebb5,	// (0x000399b1) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x0003aca2) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x0003aca2) popup_discreet_window_t

0x749e,	// (0x0003229a) popup_sk_window_g1

0x74a8,	// (0x000322a4) popup_sk_window_g2

0x0001,

0xfead,	// (0x0003aca9) popup_sk_window_g

0x74b2,	// (0x000322ae) popup_sk_window_t1

0x74c0,	// (0x000322bc) popup_sk_window_t1_copy1

0xe7a5,	// (0x000395a1) cell_ai5_widget_pane_g2_ParamLimits

0xe903,	// (0x000396ff) cell_ai5_widget_pane_t9_ParamLimits

0xe903,	// (0x000396ff) cell_ai5_widget_pane_t9

0x7674,	// (0x00032470) main_fep_fshwr2_pane

0x74ce,	// (0x000322ca) aid_fshwr2_btn_pane

0x74da,	// (0x000322d6) aid_fshwr2_syb_pane

0x74eb,	// (0x000322e7) aid_fshwr2_txt_pane

0x74f7,	// (0x000322f3) fshwr2_func_candi_pane

0x750c,	// (0x00032308) fshwr2_hwr_syb_pane

0x7523,	// (0x0003231f) fshwr2_icf_pane

0x7674,	// (0x00032470) fshwr2_icf_bg_pane

0xec07,	// (0x00039a03) fshwr2_icf_pane_t1_ParamLimits

0xec07,	// (0x00039a03) fshwr2_icf_pane_t1

0xc126,	// (0x00036f22) fshwr2_func_candi_pane_g1

0xec1e,	// (0x00039a1a) fshwr2_func_candi_row_pane_ParamLimits

0xec1e,	// (0x00039a1a) fshwr2_func_candi_row_pane

0xec2f,	// (0x00039a2b) cell_fshwr2_syb_pane_ParamLimits

0xec2f,	// (0x00039a2b) cell_fshwr2_syb_pane

0xc3a4,	// (0x000371a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3a4,	// (0x000371a0) fshwr2_hwr_syb_pane_g1

0x7674,	// (0x00032470) bg_popup_call_pane_cp01

0xec49,	// (0x00039a45) fshwr2_func_candi_cell_pane_ParamLimits

0xec49,	// (0x00039a45) fshwr2_func_candi_cell_pane

0xec7a,	// (0x00039a76) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec7a,	// (0x00039a76) fshwr2_func_candi_cell_bg_pane

0xec94,	// (0x00039a90) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec94,	// (0x00039a90) fshwr2_func_candi_cell_pane_g1

0xecbc,	// (0x00039ab8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecbc,	// (0x00039ab8) fshwr2_func_candi_cell_pane_t1

0x7674,	// (0x00032470) bg_button_pane_cp08

0x92a0,	// (0x0003409c) cell_fshwr2_syb_bg_pane

0xeccf,	// (0x00039acb) cell_fshwr2_syb_bg_pane_g1

0xecd7,	// (0x00039ad3) cell_fshwr2_syb_bg_pane_t1

0x8617,	// (0x00033413) main_tmo_pane

0xac6c,	// (0x00035a68) uni_indicator_pane_g1_ParamLimits

0xac81,	// (0x00035a7d) uni_indicator_pane_g2_ParamLimits

0xac97,	// (0x00035a93) uni_indicator_pane_g3_ParamLimits

0xacad,	// (0x00035aa9) uni_indicator_pane_g4_ParamLimits

0xacad,	// (0x00035aa9) uni_indicator_pane_g4

0xacc1,	// (0x00035abd) uni_indicator_pane_g5_ParamLimits

0xacc1,	// (0x00035abd) uni_indicator_pane_g5

0xacd5,	// (0x00035ad1) uni_indicator_pane_g6_ParamLimits

0xacd5,	// (0x00035ad1) uni_indicator_pane_g6

0xf927,	// (0x0003a723) uni_indicator_pane_g_ParamLimits

0xd60d,	// (0x00038409) popup_tmo_note_window_ParamLimits

0xd60d,	// (0x00038409) popup_tmo_note_window

0x6d1e,	// (0x00031b1a) fshwr2_bg_pane

0xecad,	// (0x00039aa9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecad,	// (0x00039aa9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x0003acae) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x0003acae) fshwr2_func_candi_cell_pane_g

0xc126,	// (0x00036f22) bg_popup_window_pane_cp01

0xece6,	// (0x00039ae2) bg_popup_window_pane_g1_cp01

0xecef,	// (0x00039aeb) bg_popup_window_pane_cp22_ParamLimits

0xecef,	// (0x00039aeb) bg_popup_window_pane_cp22

0xecfd,	// (0x00039af9) listscroll_tmo_link_pane_ParamLimits

0xecfd,	// (0x00039af9) listscroll_tmo_link_pane

0xed3d,	// (0x00039b39) popup_tmo_note_window_g1_ParamLimits

0xed3d,	// (0x00039b39) popup_tmo_note_window_g1

0xed4a,	// (0x00039b46) tmo_note_info_pane_ParamLimits

0xed4a,	// (0x00039b46) tmo_note_info_pane

0xed64,	// (0x00039b60) list_tmo_note_info_pane_g1_ParamLimits

0xed64,	// (0x00039b60) list_tmo_note_info_pane_g1

0xed7b,	// (0x00039b77) list_tmo_note_info_pane_g2_ParamLimits

0xed7b,	// (0x00039b77) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x0003acb3) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x0003acb3) list_tmo_note_info_pane_g

0xed97,	// (0x00039b93) list_tmo_note_info_text_pane_ParamLimits

0xed97,	// (0x00039b93) list_tmo_note_info_text_pane

0xee18,	// (0x00039c14) list_tmo_link_pane

0xee25,	// (0x00039c21) scroll_pane_cp20

0xee32,	// (0x00039c2e) list_single_tmo_link_pane_ParamLimits

0xee32,	// (0x00039c2e) list_single_tmo_link_pane

0xee42,	// (0x00039c3e) list_single_tmo_link_pane_t1

0xee50,	// (0x00039c4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xee50,	// (0x00039c4c) list_tmo_note_info_text_pane_t1

0x86d1,	// (0x000334cd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x86d1,	// (0x000334cd) aid_size_touch_scroll_bar_cp01

0x53cb,	// (0x000301c7) aid_size_touch_slider_marker

0x4c4b,	// (0x0002fa47) popup_settings_window_ParamLimits

0x4c4b,	// (0x0002fa47) popup_settings_window

0x5b85,	// (0x00030981) popup_candi_list_indi_window

0x9642,	// (0x0003443e) aid_touch_navi_pane_ParamLimits

0x6c79,	// (0x00031a75) rs_clock_indi_pane

0x6c82,	// (0x00031a7e) sctrl_sk_bottom_pane_ParamLimits

0x6c93,	// (0x00031a8f) sctrl_sk_top_pane_ParamLimits

0x6d96,	// (0x00031b92) popup_fep_tooltip_window

0xe725,	// (0x00039521) aid_size_cell_widget_grid_ParamLimits

0xe799,	// (0x00039595) cell_ai5_widget_pane_g1_ParamLimits

0xe799,	// (0x00039595) cell_ai5_widget_pane_g1

0xe7ec,	// (0x000395e8) cell_ai5_widget_pane_g6_ParamLimits

0xe7f8,	// (0x000395f4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x0003ac31) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0003ac31) cell_ai5_widget_pane_g

0xe927,	// (0x00039723) cell_ai5_widget_pane_t10_ParamLimits

0xe927,	// (0x00039723) cell_ai5_widget_pane_t10

0xe93d,	// (0x00039739) grid_ai5_widget_pane_ParamLimits

0xe9df,	// (0x000397db) cell_contacts_ai5_widget_pane_ParamLimits

0xe9df,	// (0x000397db) cell_contacts_ai5_widget_pane

0xebca,	// (0x000399c6) popup_discreet_window_t3_ParamLimits

0xebca,	// (0x000399c6) popup_discreet_window_t3

0x7538,	// (0x00032334) popup_fshwr2_char_preview_window_ParamLimits

0x7538,	// (0x00032334) popup_fshwr2_char_preview_window

0xedb5,	// (0x00039bb1) tmo_note_info_pane_t1

0xedca,	// (0x00039bc6) tmo_note_info_pane_t2

0xeddf,	// (0x00039bdb) tmo_note_info_pane_t3

0xedf4,	// (0x00039bf0) tmo_note_info_pane_t4

0xee06,	// (0x00039c02) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x0003acb8) tmo_note_info_pane_t

0xee18,	// (0x00039c14) list_tmo_link_pane_ParamLimits

0xee25,	// (0x00039c21) scroll_pane_cp20_ParamLimits

0x7674,	// (0x00032470) bg_popup_fep_char_preview_window_cp01

0xee69,	// (0x00039c65) popup_fshwr2_char_preview_window_t1

0xee77,	// (0x00039c73) popup_candi_list_indi_window_g1

0xee80,	// (0x00039c7c) bg_cell_contacts_ai5_widget_pane

0xee8c,	// (0x00039c88) cell_contacts_ai5_widget_pane_g1

0xeea0,	// (0x00039c9c) cell_contacts_ai5_widget_pane_g2

0xeeac,	// (0x00039ca8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x0003acc3) cell_contacts_ai5_widget_pane_g

0xeebf,	// (0x00039cbb) cell_contacts_ai5_widget_pane_t1

0x8617,	// (0x00033413) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef36,	// (0x00039d32) settings_container_pane

0x92a0,	// (0x0003409c) listscroll_set_pane_copy1

0xb7d1,	// (0x000365cd) scroll_pane_cp121_copy1

0xef42,	// (0x00039d3e) set_content_pane_copy1

0xef4a,	// (0x00039d46) aid_height_set_list_copy1_ParamLimits

0xef4a,	// (0x00039d46) aid_height_set_list_copy1

0xaecd,	// (0x00035cc9) aid_size_parent_copy1_ParamLimits

0xaecd,	// (0x00035cc9) aid_size_parent_copy1

0xef56,	// (0x00039d52) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef56,	// (0x00039d52) button_value_adjust_pane_cp6_copy1

0x95e0,	// (0x000343dc) list_highlight_pane_cp2_copy1_ParamLimits

0x95e0,	// (0x000343dc) list_highlight_pane_cp2_copy1

0xef6a,	// (0x00039d66) list_set_pane_copy1_ParamLimits

0xef6a,	// (0x00039d66) list_set_pane_copy1

0xeed1,	// (0x00039ccd) main_pane_set_t1_copy1_ParamLimits

0xeed1,	// (0x00039ccd) main_pane_set_t1_copy1

0xef0b,	// (0x00039d07) main_pane_set_t2_copy1_ParamLimits

0xef0b,	// (0x00039d07) main_pane_set_t2_copy1

0xf017,	// (0x00039e13) main_pane_set_t3_copy1

0xf025,	// (0x00039e21) main_pane_set_t4_copy1

0xef2a,	// (0x00039d26) set_content_pane_g1_copy1_ParamLimits

0xef2a,	// (0x00039d26) set_content_pane_g1_copy1

0xf033,	// (0x00039e2f) setting_code_pane_copy1

0xf03b,	// (0x00039e37) setting_slider_graphic_pane_copy1

0xf03b,	// (0x00039e37) setting_slider_pane_copy1

0xf03b,	// (0x00039e37) setting_text_pane_copy1

0xf03b,	// (0x00039e37) setting_volume_pane_copy1

0xf033,	// (0x00039e2f) settings_code_pane_cp2_copy1

0xf043,	// (0x00039e3f) settings_code_pane_cp_copy1_ParamLimits

0xf043,	// (0x00039e3f) settings_code_pane_cp_copy1

0x754c,	// (0x00032348) volume_set_pane_copy1

0xf057,	// (0x00039e53) volume_set_pane_g10_copy1

0xf05f,	// (0x00039e5b) volume_set_pane_g1_copy1

0xf067,	// (0x00039e63) volume_set_pane_g2_copy1

0xf06f,	// (0x00039e6b) volume_set_pane_g3_copy1

0xf077,	// (0x00039e73) volume_set_pane_g4_copy1

0xf07f,	// (0x00039e7b) volume_set_pane_g5_copy1

0xf087,	// (0x00039e83) volume_set_pane_g6_copy1

0xf08f,	// (0x00039e8b) volume_set_pane_g7_copy1

0xf097,	// (0x00039e93) volume_set_pane_g8_copy1

0xf09f,	// (0x00039e9b) volume_set_pane_g9_copy1

0x7768,	// (0x00032564) bg_set_opt_pane_cp_copy1_ParamLimits

0x7768,	// (0x00032564) bg_set_opt_pane_cp_copy1

0x7554,	// (0x00032350) setting_slider_pane_t1_copy1_ParamLimits

0x7554,	// (0x00032350) setting_slider_pane_t1_copy1

0x7572,	// (0x0003236e) setting_slider_pane_t2_copy1_ParamLimits

0x7572,	// (0x0003236e) setting_slider_pane_t2_copy1

0x758c,	// (0x00032388) setting_slider_pane_t3_copy1_ParamLimits

0x758c,	// (0x00032388) setting_slider_pane_t3_copy1

0x75a4,	// (0x000323a0) slider_set_pane_copy1_ParamLimits

0x75a4,	// (0x000323a0) slider_set_pane_copy1

0x8672,	// (0x0003346e) set_opt_bg_pane_g1_copy2

0x867a,	// (0x00033476) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x00039ea3) set_opt_bg_pane_g3_copy2

0x868a,	// (0x00033486) set_opt_bg_pane_g4_copy2

0x8692,	// (0x0003348e) set_opt_bg_pane_g5_copy2

0x869a,	// (0x00033496) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x00039ead) set_opt_bg_pane_g7_copy2

0xf0b9,	// (0x00039eb5) set_opt_bg_pane_g8_copy2

0xf0c3,	// (0x00039ebf) set_opt_bg_pane_g9_copy2

0xf0cd,	// (0x00039ec9) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cd,	// (0x00039ec9) aid_size_touch_slider_mark_copy1

0xf0e1,	// (0x00039edd) slider_set_pane_g1_copy1

0xf0ea,	// (0x00039ee6) slider_set_pane_g2_copy1

0xbb1f,	// (0x0003691b) slider_set_pane_g3_copy1_ParamLimits

0xbb1f,	// (0x0003691b) slider_set_pane_g3_copy1

0xbb33,	// (0x0003692f) slider_set_pane_g4_copy1_ParamLimits

0xbb33,	// (0x0003692f) slider_set_pane_g4_copy1

0xbb4b,	// (0x00036947) slider_set_pane_g5_copy1_ParamLimits

0xbb4b,	// (0x00036947) slider_set_pane_g5_copy1

0xbb1f,	// (0x0003691b) slider_set_pane_g6_copy1_ParamLimits

0xbb1f,	// (0x0003691b) slider_set_pane_g6_copy1

0xf0f2,	// (0x00039eee) slider_set_pane_g7_copy1_ParamLimits

0xf0f2,	// (0x00039eee) slider_set_pane_g7_copy1

0x7688,	// (0x00032484) bg_set_opt_pane_cp2_copy1

0xf108,	// (0x00039f04) setting_slider_graphic_pane_g1_copy1

0xf111,	// (0x00039f0d) setting_slider_graphic_pane_t1_copy1

0xf121,	// (0x00039f1d) setting_slider_graphic_pane_t2_copy1

0xf131,	// (0x00039f2d) slider_set_pane_cp_copy1

0xf141,	// (0x00039f3d) input_focus_pane_cp1_copy1

0xf14a,	// (0x00039f46) list_set_text_pane_copy1

0xf152,	// (0x00039f4e) setting_text_pane_g1_copy1

0x3f0f,	// (0x0002ed0b) set_text_pane_t1_copy1

0xf141,	// (0x00039f3d) input_focus_pane_cp2_copy1

0xf152,	// (0x00039f4e) setting_code_pane_g1_copy1

0xf15b,	// (0x00039f57) setting_code_pane_t1_copy1

0xf169,	// (0x00039f65) list_set_graphic_pane_copy1

0x7688,	// (0x00032484) bg_set_opt_pane_cp4_copy1

0x8fa6,	// (0x00033da2) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fa6,	// (0x00033da2) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x00039f77) list_set_graphic_pane_g2_copy1

0x8fbe,	// (0x00033dba) list_set_graphic_pane_t1_copy1_ParamLimits

0x8fbe,	// (0x00033dba) list_set_graphic_pane_t1_copy1

0xc126,	// (0x00036f22) rs_clock_indi_pane_g1

0xf183,	// (0x00039f7f) rs_clock_indi_pane_t1

0xf191,	// (0x00039f8d) rs_indi_pane

0xf199,	// (0x00039f95) rs_indi_pane_g1

0xf1a2,	// (0x00039f9e) rs_indi_pane_g2

0xf1ab,	// (0x00039fa7) rs_indi_pane_g3

0x0002,

0xfece,	// (0x0003acca) rs_indi_pane_g

0x92a0,	// (0x0003409c) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x00039fb0) popup_fep_tooltip_window_t1

0xcdae,	// (0x00037baa) popup_note2_window_g2_ParamLimits

0xcdae,	// (0x00037baa) popup_note2_window_g2

0x0001,

0xfc67,	// (0x0003aa63) popup_note2_window_g_ParamLimits

0xfc67,	// (0x0003aa63) popup_note2_window_g

0xd2a9,	// (0x000380a5) bg_popup_sub_pane_cp11_ParamLimits

0xd2b6,	// (0x000380b2) cell_ai3_links_pane_g1_ParamLimits

0xd2cd,	// (0x000380c9) cell_ai3_links_pane_t1

0x3f0f,	// (0x0002ed0b) set_text_pane_t1_copy1_ParamLimits

0x91b1,	// (0x00033fad) cell_graphic_popup_pane_cp2_ParamLimits

0x91b1,	// (0x00033fad) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x00039fbe) cell_graphic_popup_pane_g1_cp2

0x8362,	// (0x0003315e) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x00039fc6) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x00039fce) cell_graphic_popup_pane_t2_cp2

0x8373,	// (0x0003316f) grid_highlight_pane_cp3_cp2

0x89b7,	// (0x000337b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8617,	// (0x00033413) main_tmo_pane_ParamLimits

0xd601,	// (0x000383fd) popup_tmo_big_image_note_window

0xe789,	// (0x00039585) cell_ai5_widget_list_pane

0xe791,	// (0x0003958d) cell_ai5_widget_lrg_icon_pane

0xedb5,	// (0x00039bb1) tmo_note_info_pane_t1_ParamLimits

0xedca,	// (0x00039bc6) tmo_note_info_pane_t2_ParamLimits

0xeddf,	// (0x00039bdb) tmo_note_info_pane_t3_ParamLimits

0xedf4,	// (0x00039bf0) tmo_note_info_pane_t4_ParamLimits

0xee06,	// (0x00039c02) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x0003acb8) tmo_note_info_pane_t_ParamLimits

0xef36,	// (0x00039d32) settings_container_pane_ParamLimits

0xf139,	// (0x00039f35) indicator_popup_pane_cp5

0xf139,	// (0x00039f35) indicator_popup_pane_cp6

0xf169,	// (0x00039f65) list_set_graphic_pane_copy1_ParamLimits

0x7674,	// (0x00032470) bg_popup_window_pane_cp23

0xf1e0,	// (0x00039fdc) popup_tmo_big_image_note_window_g1

0xf1ea,	// (0x00039fe6) popup_tmo_big_image_note_window_t1

0xf1fa,	// (0x00039ff6) popup_tmo_big_image_note_window_t2

0xf20a,	// (0x0003a006) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x0003acd1) popup_tmo_big_image_note_window_t

0xf21a,	// (0x0003a016) cell_ai5_widget_lrg_icon_pane_g1

0xf222,	// (0x0003a01e) cell_ai5_widget_lrg_icon_pane_t1

0xf230,	// (0x0003a02c) cell_ai5_widget_list_row_pane_ParamLimits

0xf230,	// (0x0003a02c) cell_ai5_widget_list_row_pane

0xf248,	// (0x0003a044) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf248,	// (0x0003a044) cell_ai5_widget_list_row_pane_g1

0xf255,	// (0x0003a051) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf255,	// (0x0003a051) cell_ai5_widget_list_row_pane_t1

0xf26d,	// (0x0003a069) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26d,	// (0x0003a069) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x0003acd8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x0003acd8) cell_ai5_widget_list_row_pane_t

0x4b02,	// (0x0002f8fe) main_fep_vtchi_ss_pane

0x75c9,	// (0x000323c5) popup_fep_char_pre_window

0x75d1,	// (0x000323cd) popup_fep_ituss_window

0x75f2,	// (0x000323ee) popup_fep_vkbss_window

0xf295,	// (0x0003a091) grid_vkbss_keypad_pane_ParamLimits

0xf295,	// (0x0003a091) grid_vkbss_keypad_pane

0xf2a5,	// (0x0003a0a1) ituss_keypad_pane

0x761d,	// (0x00032419) aid_vkbss_key_offset_ParamLimits

0x761d,	// (0x00032419) aid_vkbss_key_offset

0x7629,	// (0x00032425) cell_vkbss_key_pane_ParamLimits

0x7629,	// (0x00032425) cell_vkbss_key_pane

0xf2b5,	// (0x0003a0b1) bg_cell_vkbss_key_g1_ParamLimits

0xf2b5,	// (0x0003a0b1) bg_cell_vkbss_key_g1

0xf2c1,	// (0x0003a0bd) cell_vkbss_key_3p_pane_ParamLimits

0xf2c1,	// (0x0003a0bd) cell_vkbss_key_3p_pane

0xf2db,	// (0x0003a0d7) cell_vkbss_key_g1_ParamLimits

0xf2db,	// (0x0003a0d7) cell_vkbss_key_g1

0xf2f5,	// (0x0003a0f1) cell_vkbss_key_t1_ParamLimits

0xf2f5,	// (0x0003a0f1) cell_vkbss_key_t1

0x763f,	// (0x0003243b) cell_ituss_key_pane_ParamLimits

0x763f,	// (0x0003243b) cell_ituss_key_pane

0xf320,	// (0x0003a11c) bg_cell_ituss_key_g1_ParamLimits

0xf320,	// (0x0003a11c) bg_cell_ituss_key_g1

0xf32c,	// (0x0003a128) cell_ituss_key_pane_g1_ParamLimits

0xf32c,	// (0x0003a128) cell_ituss_key_pane_g1

0xf346,	// (0x0003a142) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0003a142) cell_ituss_key_pane_g2

0x0001,

0xfee3,	// (0x0003acdf) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x0003acdf) cell_ituss_key_pane_g

0xf374,	// (0x0003a170) cell_ituss_key_t1_ParamLimits

0xf374,	// (0x0003a170) cell_ituss_key_t1

0xf3aa,	// (0x0003a1a6) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0003a1a6) cell_ituss_key_t2

0xf3db,	// (0x0003a1d7) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0003a1d7) cell_ituss_key_t3

0xf415,	// (0x0003a211) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0003a211) cell_ituss_key_t4

0x0003,

0xfee8,	// (0x0003ace4) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0003ace4) cell_ituss_key_t

0xf44f,	// (0x0003a24b) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0003a253) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0003a25b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003aced) cell_vkbss_key_3p_pane_g

0x7674,	// (0x00032470) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0003a263) popup_fep_char_pre_window_t1

0xe71b,	// (0x00039517) main_ai5_sk_pane

0xee80,	// (0x00039c7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee8c,	// (0x00039c88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeea0,	// (0x00039c9c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeeac,	// (0x00039ca8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x0003acc3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeebf,	// (0x00039cbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8617,	// (0x00033413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf476,	// (0x0003a272) main_ai5_sk_pane_g1

0x9f8a,	// (0x00034d86) popup_query_code_window_g1

0x75e7,	// (0x000323e3) popup_fep_vkb_icf_pane

0x75fb,	// (0x000323f7) popup_fep_vtchi_icf_pane

0x8617,	// (0x00033413) bg_icf_pane

0xf47f,	// (0x0003a27b) list_vkb_icf_pane

0x8617,	// (0x00033413) bg_icf_pane_cp01

0xf48b,	// (0x0003a287) vtchi_icf_list_pane

0xf49c,	// (0x0003a298) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0003a298) list_vkb_icf_pane_t1

0xf4b2,	// (0x0003a2ae) vtchi_icf_list_pane_t1_ParamLimits

0xf4b2,	// (0x0003a2ae) vtchi_icf_list_pane_t1

0x75d1,	// (0x000323cd) popup_fep_ituss_window_ParamLimits

0x75fb,	// (0x000323f7) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a5,	// (0x0003a0a1) ituss_keypad_pane_ParamLimits

0x7611,	// (0x0003240d) ituss_sks_pane

0x8617,	// (0x00033413) bg_icf_pane_ParamLimits

0x75ba,	// (0x000323b6) icf_edit_indi_pane_ParamLimits

0x75ba,	// (0x000323b6) icf_edit_indi_pane

0xf47f,	// (0x0003a27b) list_vkb_icf_pane_ParamLimits

0x8617,	// (0x00033413) bg_icf_pane_cp01_ParamLimits

0x75ba,	// (0x000323b6) icf_edit_indi_pane_cp01_ParamLimits

0x75ba,	// (0x000323b6) icf_edit_indi_pane_cp01

0xf493,	// (0x0003a28f) vtchi_query_pane

0xc3a4,	// (0x000371a0) icf_edit_indi_pane_g1_ParamLimits

0xc3a4,	// (0x000371a0) icf_edit_indi_pane_g1

0xf537,	// (0x0003a333) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0003a333) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0003ad05) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0003ad05) icf_edit_indi_pane_g

0xf546,	// (0x0003a342) icf_edit_indi_pane_t1

0xf4cd,	// (0x0003a2c9) bg_input_focus_pane_cp042

0x8546,	// (0x00033342) vtchi_button_pane

0xf4d6,	// (0x0003a2d2) vtchi_query_pane_t1

0xf4e4,	// (0x0003a2e0) vtchi_query_pane_t2

0xf4f2,	// (0x0003a2ee) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0003acf4) vtchi_query_pane_t

0x7674,	// (0x00032470) bg_button_pane_cp13

0xf500,	// (0x0003a2fc) vtchi_button_pane_g1

0xf508,	// (0x0003a304) ituss_sks_pane_g1

0xf513,	// (0x0003a30f) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0003acfb) ituss_sks_pane_g

0xf51b,	// (0x0003a317) ituss_sks_pane_t1

0xf529,	// (0x0003a325) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0003ad00) ituss_sks_pane_t

0xbb9d,	// (0x00036999) indicator_nsta_pane_cp_g1

0xbba6,	// (0x000369a2) indicator_nsta_pane_cp_g2

0xbbae,	// (0x000369aa) indicator_nsta_pane_cp_g3

0xbbb6,	// (0x000369b2) indicator_nsta_pane_cp_g4

0xbbb6,	// (0x000369b2) indicator_nsta_pane_cp_g5

0xbbb6,	// (0x000369b2) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x0003a8a1) indicator_nsta_pane_cp_g

0xe301,	// (0x000390fd) cell_graphic2_pane_t2_ParamLimits

0xe301,	// (0x000390fd) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x0003abba) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x0003abba) cell_graphic2_pane_t

0xe32e,	// (0x0003912a) cell_graphic2_control_pane_t1

0x8d59,	// (0x00033b55) signal_pane_g3_ParamLimits

0x8d59,	// (0x00033b55) signal_pane_g3

0x8d6b,	// (0x00033b67) signal_pane_g4_ParamLimits

0x8d6b,	// (0x00033b67) signal_pane_g4

0xf27f,	// (0x0003a07b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27f,	// (0x0003a07b) cell_ai5_widget_list_row_pane_t3

0xf362,	// (0x0003a15e) cell_ituss_key_pane_t1_ParamLimits

0xf362,	// (0x0003a15e) cell_ituss_key_pane_t1

0x9bdd,	// (0x000349d9) form_field_data_wide_pane_vc_t2_ParamLimits

0x9bdd,	// (0x000349d9) form_field_data_wide_pane_vc_t2

0x9bf1,	// (0x000349ed) form_field_data_wide_pane_vc_t3_ParamLimits

0x9bf1,	// (0x000349ed) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0003a60b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0003a60b) form_field_data_wide_pane_vc_t

0xb813,	// (0x0003660f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb813,	// (0x0003660f) form_field_slider_wide_pane_vc_t3

0xb8f1,	// (0x000366ed) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb8f1,	// (0x000366ed) form_field_popup_wide_pane_vc_t2

0xb908,	// (0x00036704) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb908,	// (0x00036704) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x0003a890) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x0003a890) form_field_popup_wide_pane_vc_t

0x74ce,	// (0x000322ca) aid_fshwr2_btn_pane_ParamLimits

0x74da,	// (0x000322d6) aid_fshwr2_syb_pane_ParamLimits

0x74eb,	// (0x000322e7) aid_fshwr2_txt_pane_ParamLimits

0x6d1e,	// (0x00031b1a) fshwr2_bg_pane_ParamLimits

0x74f7,	// (0x000322f3) fshwr2_func_candi_pane_ParamLimits

0x750c,	// (0x00032308) fshwr2_hwr_syb_pane_ParamLimits

0x7523,	// (0x0003231f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

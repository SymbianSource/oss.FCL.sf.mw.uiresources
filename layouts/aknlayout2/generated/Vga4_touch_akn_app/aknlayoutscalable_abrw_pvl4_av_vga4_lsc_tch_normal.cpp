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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00014a7c };

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
0x9250,	// (0x0001dccc) Screen

0x925c,	// (0x0001dcd8) application_window_ParamLimits

0x925c,	// (0x0001dcd8) application_window

0xb88a,	// (0x00020306) screen_g1

0x86dc,	// (0x0001d158) area_bottom_pane_ParamLimits

0x86dc,	// (0x0001d158) area_bottom_pane

0xd685,	// (0x00022101) area_top_pane_ParamLimits

0xd685,	// (0x00022101) area_top_pane

0xd723,	// (0x0002219f) main_pane_ParamLimits

0xd723,	// (0x0002219f) main_pane

0xb894,	// (0x00020310) misc_graphics

0xa8ec,	// (0x0001f368) battery_pane_ParamLimits

0xa8ec,	// (0x0001f368) battery_pane

0x1f26,	// (0x000169a2) bg_status_flat_pane_g8

0x1f2e,	// (0x000169aa) bg_status_flat_pane_g9

0x1221,	// (0x00015c9d) context_pane_ParamLimits

0x1221,	// (0x00015c9d) context_pane

0xaa63,	// (0x0001f4df) navi_pane_ParamLimits

0xaa63,	// (0x0001f4df) navi_pane

0xaaed,	// (0x0001f569) signal_pane_ParamLimits

0xaaed,	// (0x0001f569) signal_pane

0x0008,

0xf86f,	// (0x000242eb) bg_status_flat_pane_g

0xab7d,	// (0x0001f5f9) status_pane_g1_ParamLimits

0xab7d,	// (0x0001f5f9) status_pane_g1

0xab93,	// (0x0001f60f) status_pane_g2_ParamLimits

0xab93,	// (0x0001f60f) status_pane_g2

0x1462,	// (0x00015ede) status_pane_g3_ParamLimits

0x1462,	// (0x00015ede) status_pane_g3

0x0004,

0xf79b,	// (0x00024217) status_pane_g_ParamLimits

0xf79b,	// (0x00024217) status_pane_g

0xab9f,	// (0x0001f61b) title_pane_ParamLimits

0xab9f,	// (0x0001f61b) title_pane

0xac02,	// (0x0001f67e) uni_indicator_pane_ParamLimits

0xac02,	// (0x0001f67e) uni_indicator_pane

0x0a3a,	// (0x000154b6) bg_list_pane_ParamLimits

0x0a3a,	// (0x000154b6) bg_list_pane

0xa10c,	// (0x0001eb88) find_pane

0xa114,	// (0x0001eb90) listscroll_app_pane_ParamLimits

0xa114,	// (0x0001eb90) listscroll_app_pane

0x0a6e,	// (0x000154ea) listscroll_form_pane

0xa124,	// (0x0001eba0) listscroll_gen_pane_ParamLimits

0xa124,	// (0x0001eba0) listscroll_gen_pane

0x0a8a,	// (0x00015506) listscroll_set_pane

0x2aed,	// (0x00017569) main_idle_act_pane

0xe473,	// (0x00022eef) main_idle_trad_pane

0xe473,	// (0x00022eef) main_list_empty_pane

0x0aa4,	// (0x00015520) main_midp_pane

0x0ab0,	// (0x0001552c) main_pane_g1_ParamLimits

0x0ab0,	// (0x0001552c) main_pane_g1

0xa146,	// (0x0001ebc2) popup_ai_message_window_ParamLimits

0xa146,	// (0x0001ebc2) popup_ai_message_window

0xa1e6,	// (0x0001ec62) popup_fep_china_uni_window_ParamLimits

0xa1e6,	// (0x0001ec62) popup_fep_china_uni_window

0x0bda,	// (0x00015656) popup_fep_japan_candidate_window_ParamLimits

0x0bda,	// (0x00015656) popup_fep_japan_candidate_window

0x0c04,	// (0x00015680) popup_fep_japan_predictive_window_ParamLimits

0x0c04,	// (0x00015680) popup_fep_japan_predictive_window

0xa246,	// (0x0001ecc2) popup_find_window

0xa263,	// (0x0001ecdf) popup_grid_graphic_window_ParamLimits

0xa263,	// (0x0001ecdf) popup_grid_graphic_window

0x0c75,	// (0x000156f1) popup_large_graphic_colour_window

0xa307,	// (0x0001ed83) popup_menu_window_ParamLimits

0xa307,	// (0x0001ed83) popup_menu_window

0xa4f7,	// (0x0001ef73) popup_note_image_window

0xa4b7,	// (0x0001ef33) popup_note_wait_window_ParamLimits

0xa4b7,	// (0x0001ef33) popup_note_wait_window

0xa50f,	// (0x0001ef8b) popup_note_window_ParamLimits

0xa50f,	// (0x0001ef8b) popup_note_window

0xa5bd,	// (0x0001f039) popup_query_code_window_ParamLimits

0xa5bd,	// (0x0001f039) popup_query_code_window

0x0ee1,	// (0x0001595d) popup_query_data_code_window_ParamLimits

0x0ee1,	// (0x0001595d) popup_query_data_code_window

0xa5fd,	// (0x0001f079) popup_query_data_window_ParamLimits

0xa5fd,	// (0x0001f079) popup_query_data_window

0xa691,	// (0x0001f10d) popup_query_sat_info_window_ParamLimits

0xa691,	// (0x0001f10d) popup_query_sat_info_window

0xa73c,	// (0x0001f1b8) popup_snote_single_graphic_window_ParamLimits

0xa73c,	// (0x0001f1b8) popup_snote_single_graphic_window

0xa73c,	// (0x0001f1b8) popup_snote_single_text_window_ParamLimits

0xa73c,	// (0x0001f1b8) popup_snote_single_text_window

0x0f7c,	// (0x000159f8) popup_sub_window_general

0x10c2,	// (0x00015b3e) popup_window_general_ParamLimits

0x10c2,	// (0x00015b3e) popup_window_general

0x10db,	// (0x00015b57) power_save_pane

0x88d1,	// (0x0001d34d) control_pane_g1_ParamLimits

0x88d1,	// (0x0001d34d) control_pane_g1

0x88fa,	// (0x0001d376) control_pane_g2_ParamLimits

0x88fa,	// (0x0001d376) control_pane_g2

0x09db,	// (0x00015457) control_pane_g3_ParamLimits

0x09db,	// (0x00015457) control_pane_g3

0x0007,

0xf783,	// (0x000241ff) control_pane_g_ParamLimits

0xf783,	// (0x000241ff) control_pane_g

0x8935,	// (0x0001d3b1) control_pane_t1_ParamLimits

0x8935,	// (0x0001d3b1) control_pane_t1

0x8993,	// (0x0001d40f) control_pane_t2_ParamLimits

0x8993,	// (0x0001d40f) control_pane_t2

0x0002,

0xf794,	// (0x00024210) control_pane_t_ParamLimits

0xf794,	// (0x00024210) control_pane_t

0xa034,	// (0x0001eab0) navi_navi_volume_pane_cp1

0xa03c,	// (0x0001eab8) status_small_icon_pane

0x0910,	// (0x0001538c) status_small_pane_g1_ParamLimits

0x0910,	// (0x0001538c) status_small_pane_g1

0xa044,	// (0x0001eac0) status_small_pane_g2_ParamLimits

0xa044,	// (0x0001eac0) status_small_pane_g2

0xa050,	// (0x0001eacc) status_small_pane_g3_ParamLimits

0xa050,	// (0x0001eacc) status_small_pane_g3

0xa05c,	// (0x0001ead8) status_small_pane_g4_ParamLimits

0xa05c,	// (0x0001ead8) status_small_pane_g4

0xa068,	// (0x0001eae4) status_small_pane_g5_ParamLimits

0xa068,	// (0x0001eae4) status_small_pane_g5

0xa076,	// (0x0001eaf2) status_small_pane_g6_ParamLimits

0xa076,	// (0x0001eaf2) status_small_pane_g6

0x0007,

0xf772,	// (0x000241ee) status_small_pane_g_ParamLimits

0xf772,	// (0x000241ee) status_small_pane_g

0xa0a5,	// (0x0001eb21) status_small_pane_t1

0xa0c7,	// (0x0001eb43) status_small_wait_pane_ParamLimits

0xa0c7,	// (0x0001eb43) status_small_wait_pane

0x9d6e,	// (0x0001e7ea) aid_levels_signal_ParamLimits

0x9d6e,	// (0x0001e7ea) aid_levels_signal

0x9d86,	// (0x0001e802) signal_pane_g1_ParamLimits

0x9d86,	// (0x0001e802) signal_pane_g1

0x9da1,	// (0x0001e81d) signal_pane_g2_ParamLimits

0x9da1,	// (0x0001e81d) signal_pane_g2

0x0003,

0xf703,	// (0x0002417f) signal_pane_g_ParamLimits

0xf703,	// (0x0002417f) signal_pane_g

0xe067,	// (0x00022ae3) context_pane_g1

0x926c,	// (0x0001dce8) title_pane_g1

0x9297,	// (0x0001dd13) title_pane_t1

0xb8b6,	// (0x00020332) title_pane_t2

0xb8dc,	// (0x00020358) title_pane_t3

0x0002,

0xf557,	// (0x00023fd3) title_pane_t

0xac2a,	// (0x0001f6a6) aid_levels_battery_ParamLimits

0xac2a,	// (0x0001f6a6) aid_levels_battery

0xac46,	// (0x0001f6c2) battery_pane_g1_ParamLimits

0xac46,	// (0x0001f6c2) battery_pane_g1

0xac63,	// (0x0001f6df) battery_pane_g2_ParamLimits

0xac63,	// (0x0001f6df) battery_pane_g2

0x0001,

0xf7a6,	// (0x00024222) battery_pane_g_ParamLimits

0xf7a6,	// (0x00024222) battery_pane_g

0xaf36,	// (0x0001f9b2) uni_indicator_pane_g1

0xaf4c,	// (0x0001f9c8) uni_indicator_pane_g2

0xaf62,	// (0x0001f9de) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00024393) uni_indicator_pane_g

0xe315,	// (0x00022d91) navi_icon_pane_ParamLimits

0xe315,	// (0x00022d91) navi_icon_pane

0xe299,	// (0x00022d15) navi_midp_pane

0xe331,	// (0x00022dad) navi_navi_pane

0xe33b,	// (0x00022db7) navi_text_pane_ParamLimits

0xe33b,	// (0x00022db7) navi_text_pane

0xb88a,	// (0x00020306) status_small_wait_pane_g1

0xbbf1,	// (0x0002066d) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0002438e) status_small_wait_pane_g

0xae9d,	// (0x0001f919) navi_navi_icon_text_pane

0xaea5,	// (0x0001f921) navi_navi_pane_g1_ParamLimits

0xaea5,	// (0x0001f921) navi_navi_pane_g1

0xaeb7,	// (0x0001f933) navi_navi_pane_g2_ParamLimits

0xaeb7,	// (0x0001f933) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0002435c) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0002435c) navi_navi_pane_g

0x25af,	// (0x0001702b) navi_navi_tabs_pane

0xaec9,	// (0x0001f945) navi_navi_text_pane

0xae9d,	// (0x0001f919) navi_navi_volume_pane

0xae8b,	// (0x0001f907) navi_text_pane_t1

0xae7f,	// (0x0001f8fb) navi_icon_pane_g1

0x24a6,	// (0x00016f22) navi_navi_text_pane_t1

0x8bfa,	// (0x0001d676) navi_navi_volume_pane_g1

0x8c02,	// (0x0001d67e) volume_small_pane

0xadc7,	// (0x0001f843) navi_navi_icon_text_pane_g1

0xadcf,	// (0x0001f84b) navi_navi_icon_text_pane_t1

0xe331,	// (0x00022dad) navi_tabs_2_long_pane

0xe331,	// (0x00022dad) navi_tabs_2_pane

0xe331,	// (0x00022dad) navi_tabs_3_long_pane

0xe331,	// (0x00022dad) navi_tabs_3_pane

0xe331,	// (0x00022dad) navi_tabs_4_pane

0x8bda,	// (0x0001d656) tabs_2_active_pane_ParamLimits

0x8bda,	// (0x0001d656) tabs_2_active_pane

0x8bea,	// (0x0001d666) tabs_2_passive_pane_ParamLimits

0x8bea,	// (0x0001d666) tabs_2_passive_pane

0x8ba8,	// (0x0001d624) tabs_3_active_pane_ParamLimits

0x8ba8,	// (0x0001d624) tabs_3_active_pane

0x8bb8,	// (0x0001d634) tabs_3_passive_pane_ParamLimits

0x8bb8,	// (0x0001d634) tabs_3_passive_pane

0x8bc9,	// (0x0001d645) tabs_3_passive_pane_cp_ParamLimits

0x8bc9,	// (0x0001d645) tabs_3_passive_pane_cp

0x8b64,	// (0x0001d5e0) tabs_4_active_pane_ParamLimits

0x8b64,	// (0x0001d5e0) tabs_4_active_pane

0x8b75,	// (0x0001d5f1) tabs_4_passive_pane_ParamLimits

0x8b75,	// (0x0001d5f1) tabs_4_passive_pane

0x8b86,	// (0x0001d602) tabs_4_passive_pane_cp_ParamLimits

0x8b86,	// (0x0001d602) tabs_4_passive_pane_cp

0x8b97,	// (0x0001d613) tabs_4_passive_pane_cp2_ParamLimits

0x8b97,	// (0x0001d613) tabs_4_passive_pane_cp2

0x8b40,	// (0x0001d5bc) tabs_2_long_active_pane_ParamLimits

0x8b40,	// (0x0001d5bc) tabs_2_long_active_pane

0x8b52,	// (0x0001d5ce) tabs_2_long_passive_pane_ParamLimits

0x8b52,	// (0x0001d5ce) tabs_2_long_passive_pane

0x8af5,	// (0x0001d571) tabs_3_long_active_pane_ParamLimits

0x8af5,	// (0x0001d571) tabs_3_long_active_pane

0x8b0e,	// (0x0001d58a) tabs_3_long_passive_pane_ParamLimits

0x8b0e,	// (0x0001d58a) tabs_3_long_passive_pane

0x8b27,	// (0x0001d5a3) tabs_3_long_passive_pane_cp_ParamLimits

0x8b27,	// (0x0001d5a3) tabs_3_long_passive_pane_cp

0xe8e2,	// (0x0002335e) volume_small_pane_g1

0x8aa4,	// (0x0001d520) volume_small_pane_g2

0x8aad,	// (0x0001d529) volume_small_pane_g3

0x8ab6,	// (0x0001d532) volume_small_pane_g4

0x8abf,	// (0x0001d53b) volume_small_pane_g5

0x8ac8,	// (0x0001d544) volume_small_pane_g6

0x8ad1,	// (0x0001d54d) volume_small_pane_g7

0x8ada,	// (0x0001d556) volume_small_pane_g8

0x8ae3,	// (0x0001d55f) volume_small_pane_g9

0x8aec,	// (0x0001d568) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00024328) volume_small_pane_g

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp2_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp2

0x9323,	// (0x0001dd9f) tabs_3_active_pane_g1

0x932b,	// (0x0001dda7) tabs_3_active_pane_t1

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp2_ParamLimits

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp2

0x9323,	// (0x0001dd9f) tabs_3_passive_pane_g1

0x932b,	// (0x0001dda7) tabs_3_passive_pane_t1

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp3_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp3

0x933d,	// (0x0001ddb9) tabs_4_active_pane_g1

0x9345,	// (0x0001ddc1) tabs_4_active_pane_t1

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp3_ParamLimits

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp3

0x933d,	// (0x0001ddb9) tabs_4_1_passive_pane_g1

0x9345,	// (0x0001ddc1) tabs_4_1_passive_pane_t1

0x0aa4,	// (0x00015520) list_highlight_pane_cp2

0xb009,	// (0x0001fa85) list_set_pane_ParamLimits

0xb009,	// (0x0001fa85) list_set_pane

0xb0d1,	// (0x0001fb4d) main_pane_set_t1_ParamLimits

0xb0d1,	// (0x0001fb4d) main_pane_set_t1

0xb0f1,	// (0x0001fb6d) main_pane_set_t2_ParamLimits

0xb0f1,	// (0x0001fb6d) main_pane_set_t2

0xb105,	// (0x0001fb81) main_pane_set_t3_ParamLimits

0xb105,	// (0x0001fb81) main_pane_set_t3

0xb119,	// (0x0001fb95) main_pane_set_t4_ParamLimits

0xb119,	// (0x0001fb95) main_pane_set_t4

0x0003,

0xf97c,	// (0x000243f8) main_pane_set_t_ParamLimits

0xf97c,	// (0x000243f8) main_pane_set_t

0xb12d,	// (0x0001fba9) setting_code_pane

0x2c41,	// (0x000176bd) setting_slider_graphic_pane

0x2c41,	// (0x000176bd) setting_slider_pane

0x2c41,	// (0x000176bd) setting_text_pane

0x2c41,	// (0x000176bd) setting_volume_pane

0xd832,	// (0x000222ae) volume_set_pane

0xb8fc,	// (0x00020378) bg_set_opt_pane_cp

0xd83c,	// (0x000222b8) setting_slider_pane_t1

0xd855,	// (0x000222d1) setting_slider_pane_t2

0xd86f,	// (0x000222eb) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023fda) setting_slider_pane_t

0xd887,	// (0x00022303) slider_set_pane

0xb894,	// (0x00020310) bg_set_opt_pane_cp2

0xb90a,	// (0x00020386) setting_slider_graphic_pane_g1

0xd89d,	// (0x00022319) setting_slider_graphic_pane_t1

0xd8ad,	// (0x00022329) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023fe1) setting_slider_graphic_pane_t

0xd8bd,	// (0x00022339) slider_set_pane_cp

0xb894,	// (0x00020310) input_focus_pane_cp1

0x2ad4,	// (0x00017550) list_set_text_pane

0xb88a,	// (0x00020306) setting_text_pane_g1

0xb894,	// (0x00020310) input_focus_pane_cp2

0xb88a,	// (0x00020306) setting_code_pane_g1

0xb913,	// (0x0002038f) setting_code_pane_t1

0xb921,	// (0x0002039d) set_text_pane_t1_ParamLimits

0xb921,	// (0x0002039d) set_text_pane_t1

0xd9cc,	// (0x00022448) set_opt_bg_pane_g1

0xd9d4,	// (0x00022450) set_opt_bg_pane_g2

0x2aac,	// (0x00017528) set_opt_bg_pane_g3

0xd9e4,	// (0x00022460) set_opt_bg_pane_g4

0xd9ec,	// (0x00022468) set_opt_bg_pane_g5

0xd9f4,	// (0x00022470) set_opt_bg_pane_g6

0x2ab6,	// (0x00017532) set_opt_bg_pane_g7

0x2ac0,	// (0x0001753c) set_opt_bg_pane_g8

0x2aca,	// (0x00017546) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x000243e5) set_opt_bg_pane_g

0x2a9f,	// (0x0001751b) slider_set_pane_g1

0xe963,	// (0x000233df) slider_set_pane_g2

0x0006,

0xf95a,	// (0x000243d6) slider_set_pane_g

0xe8eb,	// (0x00023367) volume_set_pane_g1

0xe8f5,	// (0x00023371) volume_set_pane_g2

0xe8ff,	// (0x0002337b) volume_set_pane_g3

0xe909,	// (0x00023385) volume_set_pane_g4

0xe913,	// (0x0002338f) volume_set_pane_g5

0xe91d,	// (0x00023399) volume_set_pane_g6

0xe927,	// (0x000233a3) volume_set_pane_g7

0xe931,	// (0x000233ad) volume_set_pane_g8

0xe93b,	// (0x000233b7) volume_set_pane_g9

0xe945,	// (0x000233c1) volume_set_pane_g10

0x0009,

0xf932,	// (0x000243ae) volume_set_pane_g

0x9357,	// (0x0001ddd3) indicator_pane_ParamLimits

0x9357,	// (0x0001ddd3) indicator_pane

0x9383,	// (0x0001ddff) main_idle_pane_g2_ParamLimits

0x9383,	// (0x0001ddff) main_idle_pane_g2

0x93bb,	// (0x0001de37) main_pane_idle_g1_ParamLimits

0x93bb,	// (0x0001de37) main_pane_idle_g1

0xb93b,	// (0x000203b7) popup_clock_digital_analogue_window_ParamLimits

0xb93b,	// (0x000203b7) popup_clock_digital_analogue_window

0x93e9,	// (0x0001de65) soft_indicator_pane_ParamLimits

0x93e9,	// (0x0001de65) soft_indicator_pane

0x9405,	// (0x0001de81) wallpaper_pane_ParamLimits

0x9405,	// (0x0001de81) wallpaper_pane

0xb88a,	// (0x00020306) wallpaper_pane_g1

0x9417,	// (0x0001de93) indicator_pane_g1_ParamLimits

0x9417,	// (0x0001de93) indicator_pane_g1

0x2f92,	// (0x00017a0e) navi_navi_icon_text_pane_srt_g1

0xb969,	// (0x000203e5) soft_indicator_pane_t1

0xb983,	// (0x000203ff) aid_ps_area_pane

0x9430,	// (0x0001deac) aid_ps_clock_pane

0xb994,	// (0x00020410) aid_ps_indicator_pane

0xb9a0,	// (0x0002041c) indicator_ps_pane_ParamLimits

0xb9a0,	// (0x0002041c) indicator_ps_pane

0xb9af,	// (0x0002042b) power_save_pane_g1_ParamLimits

0xb9af,	// (0x0002042b) power_save_pane_g1

0xb9bb,	// (0x00020437) power_save_pane_g2_ParamLimits

0xb9bb,	// (0x00020437) power_save_pane_g2

0xd665,	// (0x000220e1) aid_navinavi_width_pane

0xb983,	// (0x000203ff) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023fe6) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023fe6) power_save_pane_g

0xb9c9,	// (0x00020445) power_save_pane_t1_ParamLimits

0xb9c9,	// (0x00020445) power_save_pane_t1

0x9430,	// (0x0001deac) aid_ps_clock_pane_ParamLimits

0xb994,	// (0x00020410) aid_ps_indicator_pane_ParamLimits

0xb9db,	// (0x00020457) power_save_pane_t4_ParamLimits

0xb9db,	// (0x00020457) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023feb) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023feb) power_save_pane_t

0xba05,	// (0x00020481) power_save_t3_ParamLimits

0xba05,	// (0x00020481) power_save_t3

0xb9f0,	// (0x0002046c) power_save_t2_ParamLimits

0xb9f0,	// (0x0002046c) power_save_t2

0xba1a,	// (0x00020496) indicator_ps_pane_g1

0x943e,	// (0x0001deba) ai_gene_pane_ParamLimits

0x943e,	// (0x0001deba) ai_gene_pane

0x9455,	// (0x0001ded1) ai_links_pane_ParamLimits

0x9455,	// (0x0001ded1) ai_links_pane

0x946d,	// (0x0001dee9) indicator_pane_cp1_ParamLimits

0x946d,	// (0x0001dee9) indicator_pane_cp1

0x947c,	// (0x0001def8) main_pane_idle_g1_cp_ParamLimits

0x947c,	// (0x0001def8) main_pane_idle_g1_cp

0xba23,	// (0x0002049f) popup_ai_links_title_window

0x9494,	// (0x0001df10) soft_indicator_pane_cp1_ParamLimits

0x9494,	// (0x0001df10) soft_indicator_pane_cp1

0x285e,	// (0x000172da) ai_links_pane_g1

0x2867,	// (0x000172e3) grid_ai_links_pane

0xaf2d,	// (0x0001f9a9) ai_gene_pane_1

0x284c,	// (0x000172c8) ai_gene_pane_2

0x2855,	// (0x000172d1) list_highlight_pane_cp4

0xaf09,	// (0x0001f985) cell_ai_link_pane_ParamLimits

0xaf09,	// (0x0001f985) cell_ai_link_pane

0x281b,	// (0x00017297) cell_ai_link_pane_g1

0xbbf1,	// (0x0002066d) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00024389) cell_ai_link_pane_g

0xb894,	// (0x00020310) grid_highlight_cp2

0xb894,	// (0x00020310) bg_popup_sub_pane_cp1

0xba3a,	// (0x000204b6) popup_ai_links_title_window_t1

0x2767,	// (0x000171e3) ai_gene_pane_1_g1_ParamLimits

0x2767,	// (0x000171e3) ai_gene_pane_1_g1

0x2773,	// (0x000171ef) ai_gene_pane_1_g2_ParamLimits

0x2773,	// (0x000171ef) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0002437f) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0002437f) ai_gene_pane_1_g

0x2780,	// (0x000171fc) ai_gene_pane_1_t1_ParamLimits

0x2780,	// (0x000171fc) ai_gene_pane_1_t1

0x27b4,	// (0x00017230) grid_ai_soft_ind_pane

0x2752,	// (0x000171ce) ai_gene_pane_2_t1_ParamLimits

0x2752,	// (0x000171ce) ai_gene_pane_2_t1

0x94a8,	// (0x0001df24) main_pane_empty_t1_ParamLimits

0x94a8,	// (0x0001df24) main_pane_empty_t1

0x94c0,	// (0x0001df3c) main_pane_empty_t2_ParamLimits

0x94c0,	// (0x0001df3c) main_pane_empty_t2

0x94d5,	// (0x0001df51) main_pane_empty_t3_ParamLimits

0x94d5,	// (0x0001df51) main_pane_empty_t3

0x94e7,	// (0x0001df63) main_pane_empty_t4_ParamLimits

0x94e7,	// (0x0001df63) main_pane_empty_t4

0x94f9,	// (0x0001df75) main_pane_empty_t5_ParamLimits

0x94f9,	// (0x0001df75) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023ff0) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023ff0) main_pane_empty_t

0xda4c,	// (0x000224c8) bg_popup_window_pane_ParamLimits

0xda4c,	// (0x000224c8) bg_popup_window_pane

0x24b4,	// (0x00016f30) find_popup_pane_cp2_ParamLimits

0x24b4,	// (0x00016f30) find_popup_pane_cp2

0x24c0,	// (0x00016f3c) heading_pane_ParamLimits

0x24c0,	// (0x00016f3c) heading_pane

0xb894,	// (0x00020310) bg_popup_sub_pane

0xadec,	// (0x0001f868) bg_popup_window_pane_g1_ParamLimits

0xadec,	// (0x0001f868) bg_popup_window_pane_g1

0xadfb,	// (0x0001f877) bg_popup_window_pane_g2_ParamLimits

0xadfb,	// (0x0001f877) bg_popup_window_pane_g2

0xae07,	// (0x0001f883) bg_popup_window_pane_g3_ParamLimits

0xae07,	// (0x0001f883) bg_popup_window_pane_g3

0xae13,	// (0x0001f88f) bg_popup_window_pane_g4_ParamLimits

0xae13,	// (0x0001f88f) bg_popup_window_pane_g4

0xae22,	// (0x0001f89e) bg_popup_window_pane_g5_ParamLimits

0xae22,	// (0x0001f89e) bg_popup_window_pane_g5

0xae32,	// (0x0001f8ae) bg_popup_window_pane_g6_ParamLimits

0xae32,	// (0x0001f8ae) bg_popup_window_pane_g6

0xae3e,	// (0x0001f8ba) bg_popup_window_pane_g7_ParamLimits

0xae3e,	// (0x0001f8ba) bg_popup_window_pane_g7

0xae4d,	// (0x0001f8c9) bg_popup_window_pane_g8_ParamLimits

0xae4d,	// (0x0001f8c9) bg_popup_window_pane_g8

0xae5c,	// (0x0001f8d8) bg_popup_window_pane_g9_ParamLimits

0xae5c,	// (0x0001f8d8) bg_popup_window_pane_g9

0x249a,	// (0x00016f16) bg_popup_window_pane_g10_ParamLimits

0x249a,	// (0x00016f16) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00024347) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00024347) bg_popup_window_pane_g

0x23c3,	// (0x00016e3f) bg_popup_heading_pane_ParamLimits

0x23c3,	// (0x00016e3f) bg_popup_heading_pane

0xe9eb,	// (0x00023467) tabs_4_passive_pane_cp_srt_ParamLimits

0xe9eb,	// (0x00023467) tabs_4_passive_pane_cp_srt

0xe9fd,	// (0x00023479) tabs_4_passive_pane_srt_ParamLimits

0x23d7,	// (0x00016e53) heading_pane_g2

0xe9fd,	// (0x00023479) tabs_4_passive_pane_srt

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp3_srt

0x23df,	// (0x00016e5b) heading_pane_t1_ParamLimits

0x23df,	// (0x00016e5b) heading_pane_t1

0x23f6,	// (0x00016e72) heading_pane_t2_ParamLimits

0x23f6,	// (0x00016e72) heading_pane_t2

0x0001,

0xf8c6,	// (0x00024342) heading_pane_t_ParamLimits

0xf8c6,	// (0x00024342) heading_pane_t

0x1eee,	// (0x0001696a) bg_popup_heading_pane_g1

0x1f9d,	// (0x00016a19) bg_popup_heading_pane_g2

0x1fa7,	// (0x00016a23) bg_popup_heading_pane_g3

0x1fb1,	// (0x00016a2d) bg_popup_heading_pane_g4

0x1fbb,	// (0x00016a37) bg_popup_heading_pane_g5

0x1fc5,	// (0x00016a41) bg_popup_heading_pane_g6

0x1fcd,	// (0x00016a49) bg_popup_heading_pane_g7

0x1fd5,	// (0x00016a51) bg_popup_heading_pane_g8

0x1fdf,	// (0x00016a5b) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x000242fe) bg_popup_heading_pane_g

0x161b,	// (0x00016097) bg_popup_sub_pane_g1

0x162b,	// (0x000160a7) bg_popup_sub_pane_g2

0x1623,	// (0x0001609f) bg_popup_sub_pane_g3

0x163b,	// (0x000160b7) bg_popup_sub_pane_g4

0x1633,	// (0x000160af) bg_popup_sub_pane_g5

0x1643,	// (0x000160bf) bg_popup_sub_pane_g6

0x164b,	// (0x000160c7) bg_popup_sub_pane_g7

0x165b,	// (0x000160d7) bg_popup_sub_pane_g8

0x1653,	// (0x000160cf) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x000242d8) bg_popup_sub_pane_g

0xb8ee,	// (0x0002036a) bg_popup_window_pane_cp5_ParamLimits

0xb8ee,	// (0x0002036a) bg_popup_window_pane_cp5

0xba57,	// (0x000204d3) popup_note_window_g1_ParamLimits

0xba57,	// (0x000204d3) popup_note_window_g1

0xba63,	// (0x000204df) popup_note_window_t1_ParamLimits

0xba63,	// (0x000204df) popup_note_window_t1

0xba79,	// (0x000204f5) popup_note_window_t2_ParamLimits

0xba79,	// (0x000204f5) popup_note_window_t2

0xba8f,	// (0x0002050b) popup_note_window_t3_ParamLimits

0xba8f,	// (0x0002050b) popup_note_window_t3

0xbaa5,	// (0x00020521) popup_note_window_t4_ParamLimits

0xbaa5,	// (0x00020521) popup_note_window_t4

0xbacd,	// (0x00020549) popup_note_window_t5_ParamLimits

0xbacd,	// (0x00020549) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023ffb) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023ffb) popup_note_window_t

0xbaf1,	// (0x0002056d) bg_popup_window_pane_cp6_ParamLimits

0xbaf1,	// (0x0002056d) bg_popup_window_pane_cp6

0x1e6a,	// (0x000168e6) popup_note_image_window_g1_ParamLimits

0x1e6a,	// (0x000168e6) popup_note_image_window_g1

0x1e76,	// (0x000168f2) popup_note_image_window_g2_ParamLimits

0x1e76,	// (0x000168f2) popup_note_image_window_g2

0x0001,

0xf850,	// (0x000242cc) popup_note_image_window_g_ParamLimits

0xf850,	// (0x000242cc) popup_note_image_window_g

0x1e8f,	// (0x0001690b) popup_note_image_window_t1_ParamLimits

0x1e8f,	// (0x0001690b) popup_note_image_window_t1

0x1ea8,	// (0x00016924) popup_note_image_window_t2_ParamLimits

0x1ea8,	// (0x00016924) popup_note_image_window_t2

0x1ec1,	// (0x0001693d) popup_note_image_window_t3_ParamLimits

0x1ec1,	// (0x0001693d) popup_note_image_window_t3

0x0002,

0xf855,	// (0x000242d1) popup_note_image_window_t_ParamLimits

0xf855,	// (0x000242d1) popup_note_image_window_t

0x1d2a,	// (0x000167a6) bg_popup_window_pane_cp7_ParamLimits

0x1d2a,	// (0x000167a6) bg_popup_window_pane_cp7

0x1d5a,	// (0x000167d6) popup_note_wait_window_g1_ParamLimits

0x1d5a,	// (0x000167d6) popup_note_wait_window_g1

0x1d66,	// (0x000167e2) popup_note_wait_window_g2_ParamLimits

0x1d66,	// (0x000167e2) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x000242ba) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x000242ba) popup_note_wait_window_g

0x1d7e,	// (0x000167fa) popup_note_wait_window_t1_ParamLimits

0x1d7e,	// (0x000167fa) popup_note_wait_window_t1

0x1da5,	// (0x00016821) popup_note_wait_window_t2_ParamLimits

0x1da5,	// (0x00016821) popup_note_wait_window_t2

0x1dc3,	// (0x0001683f) popup_note_wait_window_t3_ParamLimits

0x1dc3,	// (0x0001683f) popup_note_wait_window_t3

0x1dd6,	// (0x00016852) popup_note_wait_window_t4_ParamLimits

0x1dd6,	// (0x00016852) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x000242c1) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x000242c1) popup_note_wait_window_t

0x1dfb,	// (0x00016877) wait_bar_pane_ParamLimits

0x1dfb,	// (0x00016877) wait_bar_pane

0xb894,	// (0x00020310) wait_anim_pane

0xb894,	// (0x00020310) wait_border_pane

0xb88a,	// (0x00020306) wait_anim_pane_g1

0xb88a,	// (0x00020306) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002417a) wait_anim_pane_g

0x1cce,	// (0x0001674a) wait_border_pane_g1

0x1cd9,	// (0x00016755) wait_border_pane_g2

0x1ce2,	// (0x0001675e) wait_border_pane_g3

0x0002,

0xf837,	// (0x000242b3) wait_border_pane_g

0x1b38,	// (0x000165b4) bg_popup_window_pane_cp16_ParamLimits

0x1b38,	// (0x000165b4) bg_popup_window_pane_cp16

0x1c38,	// (0x000166b4) indicator_popup_pane_cp4_ParamLimits

0x1c38,	// (0x000166b4) indicator_popup_pane_cp4

0x1c4c,	// (0x000166c8) popup_query_data_window_t1_ParamLimits

0x1c4c,	// (0x000166c8) popup_query_data_window_t1

0x1c5e,	// (0x000166da) popup_query_data_window_t2_ParamLimits

0x1c5e,	// (0x000166da) popup_query_data_window_t2

0x1c77,	// (0x000166f3) popup_query_data_window_t3_ParamLimits

0x1c77,	// (0x000166f3) popup_query_data_window_t3

0x0002,

0xf830,	// (0x000242ac) popup_query_data_window_t_ParamLimits

0xf830,	// (0x000242ac) popup_query_data_window_t

0x1c91,	// (0x0001670d) query_popup_data_pane_ParamLimits

0x1c91,	// (0x0001670d) query_popup_data_pane

0x1ca5,	// (0x00016721) query_popup_data_pane_cp1_ParamLimits

0x1ca5,	// (0x00016721) query_popup_data_pane_cp1

0x1b38,	// (0x000165b4) bg_popup_window_pane_cp10_ParamLimits

0x1b38,	// (0x000165b4) bg_popup_window_pane_cp10

0x1b6a,	// (0x000165e6) indicator_popup_pane_ParamLimits

0x1b6a,	// (0x000165e6) indicator_popup_pane

0x1b8c,	// (0x00016608) popup_query_code_window_t1_ParamLimits

0x1b8c,	// (0x00016608) popup_query_code_window_t1

0x1ba6,	// (0x00016622) popup_query_code_window_t2_ParamLimits

0x1ba6,	// (0x00016622) popup_query_code_window_t2

0x1bef,	// (0x0001666b) popup_query_code_window_t3_ParamLimits

0x1bef,	// (0x0001666b) popup_query_code_window_t3

0x0002,

0xf829,	// (0x000242a5) popup_query_code_window_t_ParamLimits

0xf829,	// (0x000242a5) popup_query_code_window_t

0x1c1e,	// (0x0001669a) query_popup_pane_ParamLimits

0x1c1e,	// (0x0001669a) query_popup_pane

0xbaf1,	// (0x0002056d) bg_popup_window_pane_cp15_ParamLimits

0xbaf1,	// (0x0002056d) bg_popup_window_pane_cp15

0xbb11,	// (0x0002058d) indicator_popup_pane_cp1_ParamLimits

0xbb11,	// (0x0002058d) indicator_popup_pane_cp1

0xbb24,	// (0x000205a0) indicator_popup_pane_cp2_ParamLimits

0xbb24,	// (0x000205a0) indicator_popup_pane_cp2

0xbb3f,	// (0x000205bb) popup_query_data_code_window_g1_ParamLimits

0xbb3f,	// (0x000205bb) popup_query_data_code_window_g1

0xbb52,	// (0x000205ce) popup_query_data_code_window_t1_ParamLimits

0xbb52,	// (0x000205ce) popup_query_data_code_window_t1

0xbb64,	// (0x000205e0) popup_query_data_code_window_t2_ParamLimits

0xbb64,	// (0x000205e0) popup_query_data_code_window_t2

0xbb76,	// (0x000205f2) popup_query_data_code_window_t3_ParamLimits

0xbb76,	// (0x000205f2) popup_query_data_code_window_t3

0xbb8c,	// (0x00020608) popup_query_data_code_window_t4_ParamLimits

0xbb8c,	// (0x00020608) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00024006) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00024006) popup_query_data_code_window_t

0xe84d,	// (0x000232c9) list_single_midp_graphic_pane_g3

0xbba6,	// (0x00020622) query_popup_data_pane_cp2_ParamLimits

0xbbb9,	// (0x00020635) query_popup_pane_cp2_ParamLimits

0xbbb9,	// (0x00020635) query_popup_pane_cp2

0xb894,	// (0x00020310) bg_popup_window_pane_cp11

0x1b30,	// (0x000165ac) heading_pane_cp5

0xbc4f,	// (0x000206cb) listscroll_popup_info_pane

0xb894,	// (0x00020310) input_focus_pane_cp3

0xbbd4,	// (0x00020650) query_popup_pane_t1

0xbbe2,	// (0x0002065e) list_popup_info_pane_ParamLimits

0xbbe2,	// (0x0002065e) list_popup_info_pane

0xbbf1,	// (0x0002066d) listscroll_popup_info_pane_g1

0xbbf9,	// (0x00020675) scroll_pane_cp7

0xbc03,	// (0x0002067f) popup_info_list_pane_t1_ParamLimits

0xbc03,	// (0x0002067f) popup_info_list_pane_t1

0xbc1d,	// (0x00020699) popup_info_list_pane_t2_ParamLimits

0xbc1d,	// (0x00020699) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002400f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002400f) popup_info_list_pane_t

0xb894,	// (0x00020310) bg_popup_window_pane_cp12

0x2fac,	// (0x00017a28) find_popup_pane

0xb8fc,	// (0x00020378) bg_popup_window_pane_cp3

0xbc37,	// (0x000206b3) heading_pane_cp3

0xbc43,	// (0x000206bf) listscroll_popup_graphic_pane

0xb894,	// (0x00020310) bg_popup_window_pane_cp4

0x955b,	// (0x0001dfd7) heading_pane_cp4

0xbc4f,	// (0x000206cb) listscroll_popup_colour_pane

0x9565,	// (0x0001dfe1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9565,	// (0x0001dfe1) cell_large_graphic_colour_none_popup_pane

0x9579,	// (0x0001dff5) grid_large_graphic_colour_popup_pane_ParamLimits

0x9579,	// (0x0001dff5) grid_large_graphic_colour_popup_pane

0x959d,	// (0x0001e019) listscroll_popup_colour_pane_g1_ParamLimits

0x959d,	// (0x0001e019) listscroll_popup_colour_pane_g1

0x95b4,	// (0x0001e030) listscroll_popup_colour_pane_g2_ParamLimits

0x95b4,	// (0x0001e030) listscroll_popup_colour_pane_g2

0x95cb,	// (0x0001e047) listscroll_popup_colour_pane_g3_ParamLimits

0x95cb,	// (0x0001e047) listscroll_popup_colour_pane_g3

0x95db,	// (0x0001e057) listscroll_popup_colour_pane_g4_ParamLimits

0x95db,	// (0x0001e057) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00024014) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00024014) listscroll_popup_colour_pane_g

0xbc57,	// (0x000206d3) scroll_pane_cp6_ParamLimits

0xbc57,	// (0x000206d3) scroll_pane_cp6

0x95eb,	// (0x0001e067) cell_large_graphic_colour_popup_pane_ParamLimits

0x95eb,	// (0x0001e067) cell_large_graphic_colour_popup_pane

0xbc69,	// (0x000206e5) cell_large_graphic_colour_none_popup_pane_t1

0xb894,	// (0x00020310) grid_highlight_pane_cp5

0xbc78,	// (0x000206f4) cell_large_graphic_colour_popup_pane_g1

0xbc80,	// (0x000206fc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002401d) cell_large_graphic_colour_popup_pane_g

0xbc88,	// (0x00020704) cell_large_graphic_colour_popup_pane_g2_copy1

0xbc91,	// (0x0002070d) grid_highlight_pane_cp4

0xbc99,	// (0x00020715) bg_popup_window_pane_cp8_ParamLimits

0xbc99,	// (0x00020715) bg_popup_window_pane_cp8

0xbcb4,	// (0x00020730) popup_snote_single_text_window_g1_ParamLimits

0xbcb4,	// (0x00020730) popup_snote_single_text_window_g1

0xbcc6,	// (0x00020742) popup_snote_single_text_window_t1_ParamLimits

0xbcc6,	// (0x00020742) popup_snote_single_text_window_t1

0xbcd9,	// (0x00020755) popup_snote_single_text_window_t2_ParamLimits

0xbcd9,	// (0x00020755) popup_snote_single_text_window_t2

0xbcec,	// (0x00020768) popup_snote_single_text_window_t3_ParamLimits

0xbcec,	// (0x00020768) popup_snote_single_text_window_t3

0xbd25,	// (0x000207a1) popup_snote_single_text_window_t4_ParamLimits

0xbd25,	// (0x000207a1) popup_snote_single_text_window_t4

0xbd59,	// (0x000207d5) popup_snote_single_text_window_t5_ParamLimits

0xbd59,	// (0x000207d5) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00024022) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00024022) popup_snote_single_text_window_t

0xbd88,	// (0x00020804) bg_popup_window_pane_cp9_ParamLimits

0xbd88,	// (0x00020804) bg_popup_window_pane_cp9

0xbcb4,	// (0x00020730) popup_snote_single_graphic_window_g1_ParamLimits

0xbcb4,	// (0x00020730) popup_snote_single_graphic_window_g1

0xbd96,	// (0x00020812) popup_snote_single_graphic_window_g2_ParamLimits

0xbd96,	// (0x00020812) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002402d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002402d) popup_snote_single_graphic_window_g

0xbda2,	// (0x0002081e) popup_snote_single_graphic_window_t1_ParamLimits

0xbda2,	// (0x0002081e) popup_snote_single_graphic_window_t1

0xbdb5,	// (0x00020831) popup_snote_single_graphic_window_t2_ParamLimits

0xbdb5,	// (0x00020831) popup_snote_single_graphic_window_t2

0xbdc8,	// (0x00020844) popup_snote_single_graphic_window_t3_ParamLimits

0xbdc8,	// (0x00020844) popup_snote_single_graphic_window_t3

0xbe01,	// (0x0002087d) popup_snote_single_graphic_window_t4_ParamLimits

0xbe01,	// (0x0002087d) popup_snote_single_graphic_window_t4

0xbe35,	// (0x000208b1) popup_snote_single_graphic_window_t5_ParamLimits

0xbe35,	// (0x000208b1) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00024032) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00024032) popup_snote_single_graphic_window_t

0x2eea,	// (0x00017966) grid_graphic_popup_pane_ParamLimits

0x2eea,	// (0x00017966) grid_graphic_popup_pane

0x2f18,	// (0x00017994) listscroll_popup_graphic_pane_g1_ParamLimits

0x2f18,	// (0x00017994) listscroll_popup_graphic_pane_g1

0xb277,	// (0x0001fcf3) listscroll_popup_graphic_pane_g2_ParamLimits

0xb277,	// (0x0001fcf3) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x00024422) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x00024422) listscroll_popup_graphic_pane_g

0x2f40,	// (0x000179bc) scroll_pane_cp5

0xb236,	// (0x0001fcb2) cell_graphic_popup_pane_ParamLimits

0xb236,	// (0x0001fcb2) cell_graphic_popup_pane

0x2e73,	// (0x000178ef) cell_graphic_popup_pane_g1

0x2e7b,	// (0x000178f7) cell_graphic_popup_pane_g2

0xbc88,	// (0x00020704) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0002441b) cell_graphic_popup_pane_g

0x2e84,	// (0x00017900) cell_graphic_popup_pane_t2

0xbc91,	// (0x0002070d) grid_highlight_pane_cp3

0xbe76,	// (0x000208f2) list_gen_pane_ParamLimits

0xbe76,	// (0x000208f2) list_gen_pane

0xbe9e,	// (0x0002091a) scroll_pane

0xb1ed,	// (0x0001fc69) bg_list_pane_g1_ParamLimits

0xb1ed,	// (0x0001fc69) bg_list_pane_g1

0x2de8,	// (0x00017864) bg_list_pane_g2_ParamLimits

0x2de8,	// (0x00017864) bg_list_pane_g2

0x2dfd,	// (0x00017879) bg_list_pane_g3_ParamLimits

0x2dfd,	// (0x00017879) bg_list_pane_g3

0x2e11,	// (0x0001788d) bg_list_pane_g4_ParamLimits

0x2e11,	// (0x0001788d) bg_list_pane_g4

0xb20a,	// (0x0001fc86) bg_list_pane_g5_ParamLimits

0xb20a,	// (0x0001fc86) bg_list_pane_g5

0x0004,

0xf994,	// (0x00024410) bg_list_pane_g_ParamLimits

0xf994,	// (0x00024410) bg_list_pane_g

0xb187,	// (0x0001fc03) list_double2_graphic_large_graphic_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double2_graphic_large_graphic_pane

0xb187,	// (0x0001fc03) list_double2_graphic_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double2_graphic_pane

0xb187,	// (0x0001fc03) list_double2_large_graphic_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double2_large_graphic_pane

0xb187,	// (0x0001fc03) list_double2_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double2_pane

0xb187,	// (0x0001fc03) list_double_graphic_heading_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_graphic_heading_pane

0xb187,	// (0x0001fc03) list_double_graphic_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_graphic_pane

0xb187,	// (0x0001fc03) list_double_heading_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_heading_pane

0xb187,	// (0x0001fc03) list_double_large_graphic_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_large_graphic_pane

0xb187,	// (0x0001fc03) list_double_number_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_number_pane

0xb187,	// (0x0001fc03) list_double_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_pane

0xb187,	// (0x0001fc03) list_double_time_pane_ParamLimits

0xb187,	// (0x0001fc03) list_double_time_pane

0xb187,	// (0x0001fc03) list_setting_number_pane_ParamLimits

0xb187,	// (0x0001fc03) list_setting_number_pane

0xb187,	// (0x0001fc03) list_setting_pane_ParamLimits

0xb187,	// (0x0001fc03) list_setting_pane

0xb19b,	// (0x0001fc17) list_single_2graphic_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_2graphic_pane

0xb19b,	// (0x0001fc17) list_single_graphic_heading_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_graphic_heading_pane

0xb19b,	// (0x0001fc17) list_single_graphic_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_graphic_pane

0xb19b,	// (0x0001fc17) list_single_heading_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_heading_pane

0xb19b,	// (0x0001fc17) list_single_large_graphic_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_large_graphic_pane

0xb19b,	// (0x0001fc17) list_single_number_heading_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_number_heading_pane

0xb19b,	// (0x0001fc17) list_single_number_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_number_pane

0xb19b,	// (0x0001fc17) list_single_pane_ParamLimits

0xb19b,	// (0x0001fc17) list_single_pane

0xb894,	// (0x00020310) list_highlight_pane_cp1

0xd8c5,	// (0x00022341) list_single_pane_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_pane_g1

0x159d,	// (0x00016019) list_single_pane_g2_ParamLimits

0x159d,	// (0x00016019) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_pane_g

0x35c0,	// (0x0001803c) list_single_pane_t1_ParamLimits

0x35c0,	// (0x0001803c) list_single_pane_t1

0xd8c5,	// (0x00022341) list_single_number_pane_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_number_pane_g1

0x159d,	// (0x00016019) list_single_number_pane_g2_ParamLimits

0x159d,	// (0x00016019) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_number_pane_g

0x15a9,	// (0x00016025) list_single_number_pane_t1_ParamLimits

0x15a9,	// (0x00016025) list_single_number_pane_t1

0xafa5,	// (0x0001fa21) list_single_number_pane_t2_ParamLimits

0xafa5,	// (0x0001fa21) list_single_number_pane_t2

0x0001,

0xf955,	// (0x000243d1) list_single_number_pane_t_ParamLimits

0xf955,	// (0x000243d1) list_single_number_pane_t

0x4b41,	// (0x000195bd) list_single_graphic_pane_g1_ParamLimits

0x4b41,	// (0x000195bd) list_single_graphic_pane_g1

0xd8c5,	// (0x00022341) list_single_graphic_pane_g2_ParamLimits

0xd8c5,	// (0x00022341) list_single_graphic_pane_g2

0x159d,	// (0x00016019) list_single_graphic_pane_g3_ParamLimits

0x159d,	// (0x00016019) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002403d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002403d) list_single_graphic_pane_g

0x9616,	// (0x0001e092) list_single_graphic_pane_t1_ParamLimits

0x9616,	// (0x0001e092) list_single_graphic_pane_t1

0xd8c5,	// (0x00022341) list_single_heading_pane_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_heading_pane_g1

0x159d,	// (0x00016019) list_single_heading_pane_g2_ParamLimits

0x159d,	// (0x00016019) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_heading_pane_g

0x35e2,	// (0x0001805e) list_single_heading_pane_t1_ParamLimits

0x35e2,	// (0x0001805e) list_single_heading_pane_t1

0x962c,	// (0x0001e0a8) list_single_heading_pane_t2_ParamLimits

0x962c,	// (0x0001e0a8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00024049) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00024049) list_single_heading_pane_t

0xd8c5,	// (0x00022341) list_single_number_heading_pane_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_number_heading_pane_g1

0x159d,	// (0x00016019) list_single_number_heading_pane_g2_ParamLimits

0x159d,	// (0x00016019) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_number_heading_pane_g

0x35e2,	// (0x0001805e) list_single_number_heading_pane_t1_ParamLimits

0x35e2,	// (0x0001805e) list_single_number_heading_pane_t1

0x963e,	// (0x0001e0ba) list_single_number_heading_pane_t2_ParamLimits

0x963e,	// (0x0001e0ba) list_single_number_heading_pane_t2

0x359c,	// (0x00018018) list_single_number_heading_pane_t3_ParamLimits

0x359c,	// (0x00018018) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002404e) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002404e) list_single_number_heading_pane_t

0x1591,	// (0x0001600d) list_single_graphic_heading_pane_g1_ParamLimits

0x1591,	// (0x0001600d) list_single_graphic_heading_pane_g1

0x9650,	// (0x0001e0cc) list_single_graphic_heading_pane_g4_ParamLimits

0x9650,	// (0x0001e0cc) list_single_graphic_heading_pane_g4

0x159d,	// (0x00016019) list_single_graphic_heading_pane_g5_ParamLimits

0x159d,	// (0x00016019) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00024055) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00024055) list_single_graphic_heading_pane_g

0x35e2,	// (0x0001805e) list_single_graphic_heading_pane_t1_ParamLimits

0x35e2,	// (0x0001805e) list_single_graphic_heading_pane_t1

0x9661,	// (0x0001e0dd) list_single_graphic_heading_pane_t2_ParamLimits

0x9661,	// (0x0001e0dd) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002405c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002405c) list_single_graphic_heading_pane_t

0x35d6,	// (0x00018052) list_single_large_graphic_pane_g1_ParamLimits

0x35d6,	// (0x00018052) list_single_large_graphic_pane_g1

0xd8c5,	// (0x00022341) list_single_large_graphic_pane_g2_ParamLimits

0xd8c5,	// (0x00022341) list_single_large_graphic_pane_g2

0x159d,	// (0x00016019) list_single_large_graphic_pane_g3_ParamLimits

0x159d,	// (0x00016019) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00024061) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00024061) list_single_large_graphic_pane_g

0x1cd9,	// (0x00016755) wait_border_pane_g2_copy1

0x9673,	// (0x0001e0ef) list_single_large_graphic_pane_g4_cp2

0x35e2,	// (0x0001805e) list_single_large_graphic_pane_t1_ParamLimits

0x35e2,	// (0x0001805e) list_single_large_graphic_pane_t1

0x967b,	// (0x0001e0f7) list_double_pane_g1_ParamLimits

0x967b,	// (0x0001e0f7) list_double_pane_g1

0x9687,	// (0x0001e103) list_double_pane_g2_ParamLimits

0x9687,	// (0x0001e103) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00024068) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00024068) list_double_pane_g

0x9693,	// (0x0001e10f) list_double_pane_t1_ParamLimits

0x9693,	// (0x0001e10f) list_double_pane_t1

0x96a9,	// (0x0001e125) list_double_pane_t2_ParamLimits

0x96a9,	// (0x0001e125) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002406d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002406d) list_double_pane_t

0x96bb,	// (0x0001e137) list_double2_pane_g1_ParamLimits

0x96bb,	// (0x0001e137) list_double2_pane_g1

0x96cc,	// (0x0001e148) list_double2_pane_g2_ParamLimits

0x96cc,	// (0x0001e148) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00024072) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00024072) list_double2_pane_g

0x96d8,	// (0x0001e154) list_double2_pane_t1_ParamLimits

0x96d8,	// (0x0001e154) list_double2_pane_t1

0x96ee,	// (0x0001e16a) list_double2_pane_t2_ParamLimits

0x96ee,	// (0x0001e16a) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00024077) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00024077) list_double2_pane_t

0x967b,	// (0x0001e0f7) list_double_number_pane_g1_ParamLimits

0x967b,	// (0x0001e0f7) list_double_number_pane_g1

0x9687,	// (0x0001e103) list_double_number_pane_g2_ParamLimits

0x9687,	// (0x0001e103) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00024068) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00024068) list_double_number_pane_g

0x9700,	// (0x0001e17c) list_double_number_pane_t1_ParamLimits

0x9700,	// (0x0001e17c) list_double_number_pane_t1

0x9712,	// (0x0001e18e) list_double_number_pane_t2_ParamLimits

0x9712,	// (0x0001e18e) list_double_number_pane_t2

0x9728,	// (0x0001e1a4) list_double_number_pane_t3_ParamLimits

0x9728,	// (0x0001e1a4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002407c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002407c) list_double_number_pane_t

0xbed2,	// (0x0002094e) list_double_graphic_pane_g1_ParamLimits

0xbed2,	// (0x0002094e) list_double_graphic_pane_g1

0x973a,	// (0x0001e1b6) list_double_graphic_pane_g2_ParamLimits

0x973a,	// (0x0001e1b6) list_double_graphic_pane_g2

0x9749,	// (0x0001e1c5) list_double_graphic_pane_g3_ParamLimits

0x9749,	// (0x0001e1c5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00024083) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00024083) list_double_graphic_pane_g

0x9761,	// (0x0001e1dd) list_double_graphic_pane_t1_ParamLimits

0x9761,	// (0x0001e1dd) list_double_graphic_pane_t1

0x9777,	// (0x0001e1f3) list_double_graphic_pane_t2_ParamLimits

0x9777,	// (0x0001e1f3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002408c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002408c) list_double_graphic_pane_t

0x9789,	// (0x0001e205) list_double2_graphic_pane_g1_ParamLimits

0x9789,	// (0x0001e205) list_double2_graphic_pane_g1

0x9795,	// (0x0001e211) list_double2_graphic_pane_g2_ParamLimits

0x9795,	// (0x0001e211) list_double2_graphic_pane_g2

0x96cc,	// (0x0001e148) list_double2_graphic_pane_g3_ParamLimits

0x96cc,	// (0x0001e148) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00024091) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00024091) list_double2_graphic_pane_g

0x97a1,	// (0x0001e21d) list_double2_graphic_pane_t1_ParamLimits

0x97a1,	// (0x0001e21d) list_double2_graphic_pane_t1

0x97b7,	// (0x0001e233) list_double2_graphic_pane_t2_ParamLimits

0x97b7,	// (0x0001e233) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00024098) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00024098) list_double2_graphic_pane_t

0x97c9,	// (0x0001e245) list_double_large_graphic_pane_g1_ParamLimits

0x97c9,	// (0x0001e245) list_double_large_graphic_pane_g1

0x97f4,	// (0x0001e270) list_double_large_graphic_pane_g2_ParamLimits

0x97f4,	// (0x0001e270) list_double_large_graphic_pane_g2

0x9687,	// (0x0001e103) list_double_large_graphic_pane_g3_ParamLimits

0x9687,	// (0x0001e103) list_double_large_graphic_pane_g3

0x9805,	// (0x0001e281) list_double_large_graphic_pane_g4_ParamLimits

0x9805,	// (0x0001e281) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002409d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002409d) list_double_large_graphic_pane_g

0x9817,	// (0x0001e293) list_double_large_graphic_pane_t1_ParamLimits

0x9817,	// (0x0001e293) list_double_large_graphic_pane_t1

0x9830,	// (0x0001e2ac) list_double_large_graphic_pane_t2_ParamLimits

0x9830,	// (0x0001e2ac) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000240a8) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000240a8) list_double_large_graphic_pane_t

0x9842,	// (0x0001e2be) list_double2_large_graphic_pane_g1_ParamLimits

0x9842,	// (0x0001e2be) list_double2_large_graphic_pane_g1

0x96bb,	// (0x0001e137) list_double2_large_graphic_pane_g2_ParamLimits

0x96bb,	// (0x0001e137) list_double2_large_graphic_pane_g2

0x96cc,	// (0x0001e148) list_double2_large_graphic_pane_g3_ParamLimits

0x96cc,	// (0x0001e148) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000240ad) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000240ad) list_double2_large_graphic_pane_g

0x984e,	// (0x0001e2ca) list_double2_large_graphic_pane_t1_ParamLimits

0x984e,	// (0x0001e2ca) list_double2_large_graphic_pane_t1

0x9864,	// (0x0001e2e0) list_double2_large_graphic_pane_t2_ParamLimits

0x9864,	// (0x0001e2e0) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000240b4) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000240b4) list_double2_large_graphic_pane_t

0x9876,	// (0x0001e2f2) list_double_heading_pane_g1_ParamLimits

0x9876,	// (0x0001e2f2) list_double_heading_pane_g1

0x9887,	// (0x0001e303) list_double_heading_pane_g2_ParamLimits

0x9887,	// (0x0001e303) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000240b9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000240b9) list_double_heading_pane_g

0x9893,	// (0x0001e30f) list_double_heading_pane_t1_ParamLimits

0x9893,	// (0x0001e30f) list_double_heading_pane_t1

0x98a9,	// (0x0001e325) list_double_heading_pane_t2_ParamLimits

0x98a9,	// (0x0001e325) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000240be) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000240be) list_double_heading_pane_t

0x98bb,	// (0x0001e337) list_double_graphic_heading_pane_g1_ParamLimits

0x98bb,	// (0x0001e337) list_double_graphic_heading_pane_g1

0x9876,	// (0x0001e2f2) list_double_graphic_heading_pane_g2_ParamLimits

0x9876,	// (0x0001e2f2) list_double_graphic_heading_pane_g2

0x9887,	// (0x0001e303) list_double_graphic_heading_pane_g3_ParamLimits

0x9887,	// (0x0001e303) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000240c3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000240c3) list_double_graphic_heading_pane_g

0x98c7,	// (0x0001e343) list_double_graphic_heading_pane_t1_ParamLimits

0x98c7,	// (0x0001e343) list_double_graphic_heading_pane_t1

0x98dd,	// (0x0001e359) list_double_graphic_heading_pane_t2_ParamLimits

0x98dd,	// (0x0001e359) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000240ca) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000240ca) list_double_graphic_heading_pane_t

0x97f4,	// (0x0001e270) list_double_time_pane_g1_ParamLimits

0x97f4,	// (0x0001e270) list_double_time_pane_g1

0x9687,	// (0x0001e103) list_double_time_pane_g2_ParamLimits

0x9687,	// (0x0001e103) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000240cf) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000240cf) list_double_time_pane_g

0x98ef,	// (0x0001e36b) list_double_time_pane_t1_ParamLimits

0x98ef,	// (0x0001e36b) list_double_time_pane_t1

0x9905,	// (0x0001e381) list_double_time_pane_t2_ParamLimits

0x9905,	// (0x0001e381) list_double_time_pane_t2

0x9917,	// (0x0001e393) list_double_time_pane_t3_ParamLimits

0x9917,	// (0x0001e393) list_double_time_pane_t3

0x9929,	// (0x0001e3a5) list_double_time_pane_t4_ParamLimits

0x9929,	// (0x0001e3a5) list_double_time_pane_t4

0x0003,

0xf658,	// (0x000240d4) list_double_time_pane_t_ParamLimits

0xf658,	// (0x000240d4) list_double_time_pane_t

0x9795,	// (0x0001e211) list_setting_pane_g1_ParamLimits

0x9795,	// (0x0001e211) list_setting_pane_g1

0x96cc,	// (0x0001e148) list_setting_pane_g2_ParamLimits

0x96cc,	// (0x0001e148) list_setting_pane_g2

0x0001,

0xf661,	// (0x000240dd) list_setting_pane_g_ParamLimits

0xf661,	// (0x000240dd) list_setting_pane_g

0x993b,	// (0x0001e3b7) list_setting_pane_t1_ParamLimits

0x993b,	// (0x0001e3b7) list_setting_pane_t1

0x9952,	// (0x0001e3ce) list_setting_pane_t2_ParamLimits

0x9952,	// (0x0001e3ce) list_setting_pane_t2

0x0002,

0xf666,	// (0x000240e2) list_setting_pane_t_ParamLimits

0xf666,	// (0x000240e2) list_setting_pane_t

0x9991,	// (0x0001e40d) set_value_pane_cp_ParamLimits

0x9991,	// (0x0001e40d) set_value_pane_cp

0x9795,	// (0x0001e211) list_setting_number_pane_g1_ParamLimits

0x9795,	// (0x0001e211) list_setting_number_pane_g1

0x96cc,	// (0x0001e148) list_setting_number_pane_g2_ParamLimits

0x96cc,	// (0x0001e148) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x000240dd) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x000240dd) list_setting_number_pane_g

0x999f,	// (0x0001e41b) list_setting_number_pane_t1_ParamLimits

0x999f,	// (0x0001e41b) list_setting_number_pane_t1

0x99b3,	// (0x0001e42f) list_setting_number_pane_t2_ParamLimits

0x99b3,	// (0x0001e42f) list_setting_number_pane_t2

0x99ca,	// (0x0001e446) list_setting_number_pane_t3_ParamLimits

0x99ca,	// (0x0001e446) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000240e9) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000240e9) list_setting_number_pane_t

0x9991,	// (0x0001e40d) set_value_pane_ParamLimits

0x9991,	// (0x0001e40d) set_value_pane

0xbef3,	// (0x0002096f) bg_set_opt_pane_ParamLimits

0xbef3,	// (0x0002096f) bg_set_opt_pane

0xbf14,	// (0x00020990) set_value_pane_t1

0xbf22,	// (0x0002099e) slider_set_pane_cp3

0xbf2b,	// (0x000209a7) volume_small_pane_cp

0xbf34,	// (0x000209b0) list_form_gen_pane

0xbf3d,	// (0x000209b9) scroll_pane_cp8

0x9a0d,	// (0x0001e489) form_field_data_pane_ParamLimits

0x9a0d,	// (0x0001e489) form_field_data_pane

0x9a28,	// (0x0001e4a4) form_field_data_wide_pane_ParamLimits

0x9a28,	// (0x0001e4a4) form_field_data_wide_pane

0x9a4c,	// (0x0001e4c8) form_field_popup_pane_ParamLimits

0x9a4c,	// (0x0001e4c8) form_field_popup_pane

0xbf5e,	// (0x000209da) form_field_popup_wide_pane_ParamLimits

0xbf5e,	// (0x000209da) form_field_popup_wide_pane

0xd8d1,	// (0x0002234d) form_field_slider_pane_ParamLimits

0xd8d1,	// (0x0002234d) form_field_slider_pane

0xd8e4,	// (0x00022360) form_field_slider_wide_pane_ParamLimits

0xd8e4,	// (0x00022360) form_field_slider_wide_pane

0xd8f7,	// (0x00022373) data_form_pane

0x9a78,	// (0x0001e4f4) form_field_data_pane_t1

0xd903,	// (0x0002237f) input_focus_pane

0xd911,	// (0x0002238d) data_form_wide_pane

0xd94e,	// (0x000223ca) form_field_data_wide_pane_t1

0xbca6,	// (0x00020722) input_focus_pane_cp6

0x9a92,	// (0x0001e50e) form_field_popup_pane_t1

0xd903,	// (0x0002237f) input_focus_pane_cp7

0xd970,	// (0x000223ec) list_form_pane

0xd984,	// (0x00022400) form_field_popup_wide_pane_t1

0xd903,	// (0x0002237f) input_focus_pane_cp8

0xd999,	// (0x00022415) list_form_wide_pane

0x9ab4,	// (0x0001e530) form_field_slider_pane_t1_ParamLimits

0x9ab4,	// (0x0001e530) form_field_slider_pane_t1

0x9acc,	// (0x0001e548) form_field_slider_pane_t2_ParamLimits

0x9acc,	// (0x0001e548) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000240f9) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000240f9) form_field_slider_pane_t

0xb8ee,	// (0x0002036a) input_focus_pane_cp9_ParamLimits

0xb8ee,	// (0x0002036a) input_focus_pane_cp9

0x9ae1,	// (0x0001e55d) slider_cont_pane_ParamLimits

0x9ae1,	// (0x0001e55d) slider_cont_pane

0xd9a8,	// (0x00022424) form_field_slider_wide_pane_t1_ParamLimits

0xd9a8,	// (0x00022424) form_field_slider_wide_pane_t1

0xd9ba,	// (0x00022436) form_field_slider_wide_pane_t2_ParamLimits

0xd9ba,	// (0x00022436) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000240fe) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000240fe) form_field_slider_wide_pane_t

0xb8ee,	// (0x0002036a) input_focus_pane_cp10_ParamLimits

0xb8ee,	// (0x0002036a) input_focus_pane_cp10

0x9af5,	// (0x0001e571) slider_cont_pane_cp1_ParamLimits

0x9af5,	// (0x0001e571) slider_cont_pane_cp1

0x9b09,	// (0x0001e585) slider_form_pane_cp

0xd9cc,	// (0x00022448) input_focus_pane_g1

0xd9d4,	// (0x00022450) input_focus_pane_g2

0xd9dc,	// (0x00022458) input_focus_pane_g3

0xd9e4,	// (0x00022460) input_focus_pane_g4

0xd9ec,	// (0x00022468) input_focus_pane_g5

0xd9f4,	// (0x00022470) input_focus_pane_g6

0xd9fc,	// (0x00022478) input_focus_pane_g7

0xda04,	// (0x00022480) input_focus_pane_g8

0xda0c,	// (0x00022488) input_focus_pane_g9

0xb88a,	// (0x00020306) input_focus_pane_g10

0x0009,

0xf687,	// (0x00024103) input_focus_pane_g

0x1ce2,	// (0x0001675e) wait_border_pane_g3_copy1

0x9b11,	// (0x0001e58d) data_form_pane_t1

0xb88a,	// (0x00020306) wait_anim_pane_g1_copy1

0xb15c,	// (0x0001fbd8) data_form_wide_pane_t1

0xda14,	// (0x00022490) list_form_graphic_pane_cp_ParamLimits

0xda14,	// (0x00022490) list_form_graphic_pane_cp

0x2c69,	// (0x000176e5) slider_form_pane_g1

0x2c72,	// (0x000176ee) slider_form_pane_g2

0x0006,

0xf985,	// (0x00024401) slider_form_pane_g

0x9b2d,	// (0x0001e5a9) list_form_graphic_pane_ParamLimits

0x9b2d,	// (0x0001e5a9) list_form_graphic_pane

0xda26,	// (0x000224a2) list_form_graphic_pane_g1

0xda2e,	// (0x000224aa) list_form_graphic_pane_t1_ParamLimits

0xda2e,	// (0x000224aa) list_form_graphic_pane_t1

0xb8fc,	// (0x00020378) list_highlight_pane_cp5_ParamLimits

0xb8fc,	// (0x00020378) list_highlight_pane_cp5

0x9b3e,	// (0x0001e5ba) find_pane_g1

0xda43,	// (0x000224bf) input_find_pane

0x9b47,	// (0x0001e5c3) input_find_pane_g1_ParamLimits

0x9b47,	// (0x0001e5c3) input_find_pane_g1

0x9b53,	// (0x0001e5cf) input_find_pane_t1_ParamLimits

0x9b53,	// (0x0001e5cf) input_find_pane_t1

0x9b68,	// (0x0001e5e4) input_find_pane_t2_ParamLimits

0x9b68,	// (0x0001e5e4) input_find_pane_t2

0x0001,

0xf69c,	// (0x00024118) input_find_pane_t_ParamLimits

0xf69c,	// (0x00024118) input_find_pane_t

0xda4c,	// (0x000224c8) input_focus_pane_cp5_ParamLimits

0xda4c,	// (0x000224c8) input_focus_pane_cp5

0xda5a,	// (0x000224d6) bg_popup_window_pane_cp2_ParamLimits

0xda5a,	// (0x000224d6) bg_popup_window_pane_cp2

0xda67,	// (0x000224e3) listscroll_menu_pane_ParamLimits

0xda67,	// (0x000224e3) listscroll_menu_pane

0x9b89,	// (0x0001e605) popup_submenu_window_ParamLimits

0x9b89,	// (0x0001e605) popup_submenu_window

0xda73,	// (0x000224ef) find_popup_pane_g1

0xda7b,	// (0x000224f7) input_popup_find_pane_cp

0xda4c,	// (0x000224c8) input_focus_pane_cp4_ParamLimits

0xda4c,	// (0x000224c8) input_focus_pane_cp4

0xda85,	// (0x00022501) input_popup_find_pane_t1_ParamLimits

0xda85,	// (0x00022501) input_popup_find_pane_t1

0xb894,	// (0x00020310) bg_popup_sub_pane_cp

0xdab3,	// (0x0002252f) listscroll_popup_sub_pane

0xdabb,	// (0x00022537) list_submenu_pane_ParamLimits

0xdabb,	// (0x00022537) list_submenu_pane

0xdacc,	// (0x00022548) scroll_pane_cp4

0xdad4,	// (0x00022550) list_single_popup_submenu_pane_ParamLimits

0xdad4,	// (0x00022550) list_single_popup_submenu_pane

0xdae9,	// (0x00022565) list_single_popup_submenu_pane_g1

0xdaf1,	// (0x0002256d) list_single_popup_submenu_pane_t1_ParamLimits

0xdaf1,	// (0x0002256d) list_single_popup_submenu_pane_t1

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp1_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp1

0x9bc7,	// (0x0001e643) tabs_2_active_pane_g1

0x9bcf,	// (0x0001e64b) tabs_2_active_pane_t1

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp1_ParamLimits

0xb8ee,	// (0x0002036a) bg_passive_tab_pane_cp1

0x9bc7,	// (0x0001e643) tabs_2_passive_pane_g1

0x9bcf,	// (0x0001e64b) tabs_2_passive_pane_t1

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp4

0x9be1,	// (0x0001e65d) tabs_2_long_active_pane_t1

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp4

0xe855,	// (0x000232d1) list_single_midp_graphic_pane_g4_ParamLimits

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp5

0x9bf4,	// (0x0001e670) tabs_3_long_active_pane_t1

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp5

0xe855,	// (0x000232d1) list_single_midp_graphic_pane_g4

0xb8fc,	// (0x00020378) bg_popup_window_pane_cp13_ParamLimits

0xb8fc,	// (0x00020378) bg_popup_window_pane_cp13

0xdb0f,	// (0x0002258b) listscroll_popup_fast_pane_ParamLimits

0xdb0f,	// (0x0002258b) listscroll_popup_fast_pane

0xdb1e,	// (0x0002259a) grid_popup_fast_pane_ParamLimits

0xdb1e,	// (0x0002259a) grid_popup_fast_pane

0xdb30,	// (0x000225ac) scroll_pane_cp9_ParamLimits

0xdb30,	// (0x000225ac) scroll_pane_cp9

0x4bbb,	// (0x00019637) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4bbb,	// (0x00019637) list_single_graphic_hl_pane_t1_cp2

0xdb54,	// (0x000225d0) input_focus_pane_cp20_ParamLimits

0xdb54,	// (0x000225d0) input_focus_pane_cp20

0xdb62,	// (0x000225de) query_popup_data_pane_t1_ParamLimits

0xdb62,	// (0x000225de) query_popup_data_pane_t1

0xdb75,	// (0x000225f1) query_popup_data_pane_t2_ParamLimits

0xdb75,	// (0x000225f1) query_popup_data_pane_t2

0xdbbb,	// (0x00022637) query_popup_data_pane_t3_ParamLimits

0xdbbb,	// (0x00022637) query_popup_data_pane_t3

0xdbfc,	// (0x00022678) query_popup_data_pane_t4_ParamLimits

0xdbfc,	// (0x00022678) query_popup_data_pane_t4

0xdc38,	// (0x000226b4) query_popup_data_pane_t5_ParamLimits

0xdc38,	// (0x000226b4) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002411d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002411d) query_popup_data_pane_t

0xd9cc,	// (0x00022448) bg_set_opt_pane_g1

0xd9d4,	// (0x00022450) bg_set_opt_pane_g2

0xd9dc,	// (0x00022458) bg_set_opt_pane_g3

0xd9e4,	// (0x00022460) bg_set_opt_pane_g4

0xd9ec,	// (0x00022468) bg_set_opt_pane_g5

0xd9f4,	// (0x00022470) bg_set_opt_pane_g6

0xd9fc,	// (0x00022478) bg_set_opt_pane_g7

0xda04,	// (0x00022480) bg_set_opt_pane_g8

0xda0c,	// (0x00022488) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00024128) bg_set_opt_pane_g

0xe5a1,	// (0x0002301d) control_top_pane_stacon_ParamLimits

0xe5a1,	// (0x0002301d) control_top_pane_stacon

0xe5f4,	// (0x00023070) signal_pane_stacon_ParamLimits

0xe5f4,	// (0x00023070) signal_pane_stacon

0xe1dd,	// (0x00022c59) stacon_top_pane_g1_ParamLimits

0xe1dd,	// (0x00022c59) stacon_top_pane_g1

0xe619,	// (0x00023095) title_pane_stacon_ParamLimits

0xe619,	// (0x00023095) title_pane_stacon

0xe643,	// (0x000230bf) uni_indicator_pane_stacon_ParamLimits

0xe643,	// (0x000230bf) uni_indicator_pane_stacon

0xe65b,	// (0x000230d7) battery_pane_stacon_ParamLimits

0xe65b,	// (0x000230d7) battery_pane_stacon

0xe69f,	// (0x0002311b) control_bottom_pane_stacon_ParamLimits

0xe69f,	// (0x0002311b) control_bottom_pane_stacon

0xe6c2,	// (0x0002313e) navi_pane_stacon_ParamLimits

0xe6c2,	// (0x0002313e) navi_pane_stacon

0xe1ff,	// (0x00022c7b) stacon_bottom_pane_g1_ParamLimits

0xe1ff,	// (0x00022c7b) stacon_bottom_pane_g1

0xdc6f,	// (0x000226eb) aid_levels_signal_lsc_ParamLimits

0xdc6f,	// (0x000226eb) aid_levels_signal_lsc

0xdc86,	// (0x00022702) signal_pane_stacon_g1_ParamLimits

0xdc86,	// (0x00022702) signal_pane_stacon_g1

0xdc9a,	// (0x00022716) signal_pane_stacon_g2_ParamLimits

0xdc9a,	// (0x00022716) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002413b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002413b) signal_pane_stacon_g

0xdcdc,	// (0x00022758) title_pane_stacon_t1_ParamLimits

0xdcdc,	// (0x00022758) title_pane_stacon_t1

0xdd01,	// (0x0002277d) uni_indicator_pane_stacon_g1

0xdd0b,	// (0x00022787) uni_indicator_pane_stacon_g2

0xdd15,	// (0x00022791) uni_indicator_pane_stacon_g3

0xdd1f,	// (0x0002279b) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00024147) uni_indicator_pane_stacon_g

0xdd29,	// (0x000227a5) control_top_pane_stacon_g1

0xdd31,	// (0x000227ad) control_top_pane_stacon_t1_ParamLimits

0xdd31,	// (0x000227ad) control_top_pane_stacon_t1

0xdd68,	// (0x000227e4) aid_levels_battery_lsc_ParamLimits

0xdd68,	// (0x000227e4) aid_levels_battery_lsc

0xdd80,	// (0x000227fc) battery_pane_stacon_g1_ParamLimits

0xdd80,	// (0x000227fc) battery_pane_stacon_g1

0xdd93,	// (0x0002280f) battery_pane_stacon_g2_ParamLimits

0xdd93,	// (0x0002280f) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00024150) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00024150) battery_pane_stacon_g

0xddd1,	// (0x0002284d) navi_icon_pane_stacon

0xdde5,	// (0x00022861) navi_navi_pane_stacon

0xddd1,	// (0x0002284d) navi_text_pane_stacon

0xdd29,	// (0x000227a5) control_bottom_pane_stacon_g1

0xddfb,	// (0x00022877) control_bottom_pane_stacon_t1_ParamLimits

0xddfb,	// (0x00022877) control_bottom_pane_stacon_t1

0x9c06,	// (0x0001e682) grid_app_pane_ParamLimits

0x9c06,	// (0x0001e682) grid_app_pane

0x9c3e,	// (0x0001e6ba) scroll_pane_cp15_ParamLimits

0x9c3e,	// (0x0001e6ba) scroll_pane_cp15

0x9c53,	// (0x0001e6cf) cell_app_pane_ParamLimits

0x9c53,	// (0x0001e6cf) cell_app_pane

0x9ca0,	// (0x0001e71c) cell_app_pane_g1_ParamLimits

0x9ca0,	// (0x0001e71c) cell_app_pane_g1

0xde4c,	// (0x000228c8) cell_app_pane_g2_ParamLimits

0xde4c,	// (0x000228c8) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00024155) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00024155) cell_app_pane_g

0xde58,	// (0x000228d4) cell_app_pane_t1_ParamLimits

0xde58,	// (0x000228d4) cell_app_pane_t1

0xde6f,	// (0x000228eb) grid_highlight_pane_ParamLimits

0xde6f,	// (0x000228eb) grid_highlight_pane

0xd9cc,	// (0x00022448) cell_highlight_pane_g1

0xd9d4,	// (0x00022450) cell_highlight_pane_g2

0xd9dc,	// (0x00022458) cell_highlight_pane_g3

0xd9e4,	// (0x00022460) cell_highlight_pane_g4

0xd9ec,	// (0x00022468) cell_highlight_pane_g5

0xd9f4,	// (0x00022470) cell_highlight_pane_g6

0xd9fc,	// (0x00022478) cell_highlight_pane_g7

0xda04,	// (0x00022480) cell_highlight_pane_g8

0xda0c,	// (0x00022488) cell_highlight_pane_g9

0xb88a,	// (0x00020306) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00024103) cell_highlight_pane_g

0xde80,	// (0x000228fc) bg_scroll_pane

0xe49f,	// (0x00022f1b) scroll_handle_pane

0xdec7,	// (0x00022943) scroll_bg_pane_g1

0xdedc,	// (0x00022958) scroll_bg_pane_g2

0xdef4,	// (0x00022970) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002415a) scroll_bg_pane_g

0xdf09,	// (0x00022985) scroll_handle_focus_pane_ParamLimits

0xdf09,	// (0x00022985) scroll_handle_focus_pane

0xdec7,	// (0x00022943) scroll_handle_pane_g1

0xdf16,	// (0x00022992) scroll_handle_pane_g2

0xdef4,	// (0x00022970) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00024161) scroll_handle_pane_g

0xda4c,	// (0x000224c8) bg_popup_sub_pane_cp21_ParamLimits

0xda4c,	// (0x000224c8) bg_popup_sub_pane_cp21

0xdf2a,	// (0x000229a6) popup_fep_japan_predictive_window_t1_ParamLimits

0xdf2a,	// (0x000229a6) popup_fep_japan_predictive_window_t1

0xdf41,	// (0x000229bd) popup_fep_japan_predictive_window_t2_ParamLimits

0xdf41,	// (0x000229bd) popup_fep_japan_predictive_window_t2

0xdf74,	// (0x000229f0) popup_fep_japan_predictive_window_t3_ParamLimits

0xdf74,	// (0x000229f0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00024168) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00024168) popup_fep_japan_predictive_window_t

0xb894,	// (0x00020310) bg_popup_sub_pane_cp23

0xdfab,	// (0x00022a27) listscroll_japin_cand_pane

0xdfb3,	// (0x00022a2f) popup_fep_japan_candidate_window_t1

0xdfc1,	// (0x00022a3d) candidate_pane_ParamLimits

0xdfc1,	// (0x00022a3d) candidate_pane

0xdfd3,	// (0x00022a4f) scroll_pane_cp30

0xdfdd,	// (0x00022a59) list_single_popup_jap_candidate_pane_ParamLimits

0xdfdd,	// (0x00022a59) list_single_popup_jap_candidate_pane

0xb894,	// (0x00020310) list_highlight_pane_cp30

0xdff1,	// (0x00022a6d) list_single_popup_jap_candidate_pane_t1

0x9cc0,	// (0x0001e73c) level_1_signal

0x9cd2,	// (0x0001e74e) level_2_signal

0x9ce5,	// (0x0001e761) level_3_signal

0x9cf8,	// (0x0001e774) level_4_signal

0x9d0b,	// (0x0001e787) level_5_signal

0x9d1e,	// (0x0001e79a) level_6_signal

0x9d31,	// (0x0001e7ad) level_7_signal

0x9cc0,	// (0x0001e73c) level_1_battery

0x9cd2,	// (0x0001e74e) level_2_battery

0x9ce5,	// (0x0001e761) level_3_battery

0x9cf8,	// (0x0001e774) level_4_battery

0x9d0b,	// (0x0001e787) level_5_battery

0x9d1e,	// (0x0001e79a) level_6_battery

0x9d31,	// (0x0001e7ad) level_7_battery

0xe018,	// (0x00022a94) list_menu_pane_ParamLimits

0xe018,	// (0x00022a94) list_menu_pane

0xe02e,	// (0x00022aaa) scroll_pane_cp25_ParamLimits

0xe02e,	// (0x00022aaa) scroll_pane_cp25

0xe047,	// (0x00022ac3) list_double2_graphic_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double2_graphic_pane_cp2

0xe047,	// (0x00022ac3) list_double2_large_graphic_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double2_large_graphic_pane_cp2

0xe047,	// (0x00022ac3) list_double2_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double2_pane_cp2

0xe047,	// (0x00022ac3) list_double_graphic_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double_graphic_pane_cp2

0xe047,	// (0x00022ac3) list_double_large_graphic_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double_large_graphic_pane_cp2

0xe047,	// (0x00022ac3) list_double_number_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double_number_pane_cp2

0xe047,	// (0x00022ac3) list_double_pane_cp2_ParamLimits

0xe047,	// (0x00022ac3) list_double_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_2graphic_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_2graphic_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_graphic_heading_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_graphic_heading_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_graphic_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_graphic_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_heading_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_heading_pane_cp2

0xe057,	// (0x00022ad3) list_single_large_graphic_pane_cp2_ParamLimits

0xe057,	// (0x00022ad3) list_single_large_graphic_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_number_heading_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_number_heading_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_number_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_number_pane_cp2

0x9d57,	// (0x0001e7d3) list_single_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_pane_cp2

0xe070,	// (0x00022aec) bg_popup_sub_pane_cp22

0xe551,	// (0x00022fcd) popup_side_volume_key_window_g1

0xe57b,	// (0x00022ff7) popup_side_volume_key_window_t1

0xe599,	// (0x00023015) volume_small_pane_cp1

0xb8ee,	// (0x0002036a) bg_popup_sub_pane_cp24_ParamLimits

0xb8ee,	// (0x0002036a) bg_popup_sub_pane_cp24

0xe086,	// (0x00022b02) fep_china_uni_candidate_pane_ParamLimits

0xe086,	// (0x00022b02) fep_china_uni_candidate_pane

0xe09a,	// (0x00022b16) fep_china_uni_entry_pane

0xe0aa,	// (0x00022b26) popup_fep_china_uni_window_g1

0xe0c6,	// (0x00022b42) fep_china_uni_entry_pane_g1

0xe0d0,	// (0x00022b4c) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00024199) fep_china_uni_entry_pane_g

0xe0da,	// (0x00022b56) fep_entry_item_pane

0xe0e4,	// (0x00022b60) fep_candidate_item_pane

0xe0ec,	// (0x00022b68) fep_china_uni_candidate_pane_g1

0xe0f6,	// (0x00022b72) fep_china_uni_candidate_pane_g2

0xe0fe,	// (0x00022b7a) fep_china_uni_candidate_pane_g3

0xe106,	// (0x00022b82) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002419e) fep_china_uni_candidate_pane_g

0xb88a,	// (0x00020306) fep_entry_item_pane_g1

0xe110,	// (0x00022b8c) fep_entry_item_pane_t1_ParamLimits

0xe110,	// (0x00022b8c) fep_entry_item_pane_t1

0xe126,	// (0x00022ba2) fep_candidate_item_pane_t1_ParamLimits

0xe126,	// (0x00022ba2) fep_candidate_item_pane_t1

0xe13b,	// (0x00022bb7) fep_candidate_item_pane_t2_ParamLimits

0xe13b,	// (0x00022bb7) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000241a7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000241a7) fep_candidate_item_pane_t

0xb8fc,	// (0x00020378) list_highlight_pane_cp31_ParamLimits

0xb8fc,	// (0x00020378) list_highlight_pane_cp31

0xe14d,	// (0x00022bc9) level_1_signal_lsc

0xe156,	// (0x00022bd2) level_2_signal_lsc

0xe15f,	// (0x00022bdb) level_3_signal_lsc

0xe168,	// (0x00022be4) level_4_signal_lsc

0xe171,	// (0x00022bed) level_5_signal_lsc

0xe17a,	// (0x00022bf6) level_6_signal_lsc

0xe183,	// (0x00022bff) level_7_signal_lsc

0xe183,	// (0x00022bff) level_1_battery_lsc

0xe18c,	// (0x00022c08) level_2_battery_lsc

0xe195,	// (0x00022c11) level_3_battery_lsc

0xe19e,	// (0x00022c1a) level_4_battery_lsc

0xe1a7,	// (0x00022c23) level_5_battery_lsc

0xe1b0,	// (0x00022c2c) level_6_battery_lsc

0xe14d,	// (0x00022bc9) level_7_battery_lsc

0xe1b9,	// (0x00022c35) scroll_handle_focus_pane_g1

0xe1c2,	// (0x00022c3e) scroll_handle_focus_pane_g2

0xe1cb,	// (0x00022c47) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000241ac) scroll_handle_focus_pane_g

0x9de9,	// (0x0001e865) list_single_2graphic_pane_g1_ParamLimits

0x9de9,	// (0x0001e865) list_single_2graphic_pane_g1

0x9650,	// (0x0001e0cc) list_single_2graphic_pane_g2_ParamLimits

0x9650,	// (0x0001e0cc) list_single_2graphic_pane_g2

0x159d,	// (0x00016019) list_single_2graphic_pane_g3_ParamLimits

0x159d,	// (0x00016019) list_single_2graphic_pane_g3

0x9df5,	// (0x0001e871) list_single_2graphic_pane_g4_ParamLimits

0x9df5,	// (0x0001e871) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000241b3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000241b3) list_single_2graphic_pane_g

0x9e06,	// (0x0001e882) list_single_2graphic_pane_t1_ParamLimits

0x9e06,	// (0x0001e882) list_single_2graphic_pane_t1

0x9e34,	// (0x0001e8b0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9e34,	// (0x0001e8b0) list_double2_graphic_large_graphic_pane_g1

0x96bb,	// (0x0001e137) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x96bb,	// (0x0001e137) list_double2_graphic_large_graphic_pane_g2

0x96cc,	// (0x0001e148) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x96cc,	// (0x0001e148) list_double2_graphic_large_graphic_pane_g3

0x9e46,	// (0x0001e8c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9e46,	// (0x0001e8c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000241bc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000241bc) list_double2_graphic_large_graphic_pane_g

0x9e52,	// (0x0001e8ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9e52,	// (0x0001e8ce) list_double2_graphic_large_graphic_pane_t1

0x9e68,	// (0x0001e8e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9e68,	// (0x0001e8e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000241c5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000241c5) list_double2_graphic_large_graphic_pane_t

0xe25d,	// (0x00022cd9) popup_fast_swap_window_ParamLimits

0xe25d,	// (0x00022cd9) popup_fast_swap_window

0xe27b,	// (0x00022cf7) popup_side_volume_key_window

0xe299,	// (0x00022d15) stacon_top_pane

0xe2a3,	// (0x00022d1f) status_pane_ParamLimits

0xe2a3,	// (0x00022d1f) status_pane

0x9f11,	// (0x0001e98d) status_small_pane

0xb894,	// (0x00020310) control_pane

0xb894,	// (0x00020310) stacon_bottom_pane

0xbf3d,	// (0x000209b9) scroll_pane_cp121

0xbf34,	// (0x000209b0) set_content_pane

0x9e7a,	// (0x0001e8f6) bg_active_tab_pane_g1_cp1

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp1

0x9e83,	// (0x0001e8ff) bg_active_tab_pane_g3_cp1

0x9e7a,	// (0x0001e8f6) bg_passive_tab_pane_g1_cp1

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp1

0x9e83,	// (0x0001e8ff) bg_passive_tab_pane_g3_cp1

0x9e8c,	// (0x0001e908) bg_active_tab_pane_g1_cp2

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp2

0x9e95,	// (0x0001e911) bg_active_tab_pane_g3_cp2

0x9e8c,	// (0x0001e908) bg_passive_tab_pane_g1_cp2

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp2

0x9e95,	// (0x0001e911) bg_passive_tab_pane_g3_cp2

0x9e9e,	// (0x0001e91a) bg_active_tab_pane_g1_cp3

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp3

0x9ea7,	// (0x0001e923) bg_active_tab_pane_g3_cp3

0x9e9e,	// (0x0001e91a) bg_passive_tab_pane_g1_cp3

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp3

0x9ea7,	// (0x0001e923) bg_passive_tab_pane_g3_cp3

0x9eb0,	// (0x0001e92c) bg_active_tab_pane_g1_cp4

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp4

0x9eb9,	// (0x0001e935) bg_active_tab_pane_g3_cp4

0x9eb0,	// (0x0001e92c) bg_passive_tab_pane_g1_cp4

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp4

0x9eb9,	// (0x0001e935) bg_passive_tab_pane_g3_cp4

0xe21b,	// (0x00022c97) bg_active_tab_pane_g1_cp5

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp5

0xe224,	// (0x00022ca0) bg_active_tab_pane_g3_cp5

0xe21b,	// (0x00022c97) bg_passive_tab_pane_g1_cp5

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp5

0xe224,	// (0x00022ca0) bg_passive_tab_pane_g3_cp5

0x334e,	// (0x00017dca) list_set_graphic_pane_ParamLimits

0x334e,	// (0x00017dca) list_set_graphic_pane

0xb894,	// (0x00020310) bg_set_opt_pane_cp4

0x9ec2,	// (0x0001e93e) list_set_graphic_pane_g1_ParamLimits

0x9ec2,	// (0x0001e93e) list_set_graphic_pane_g1

0x9ece,	// (0x0001e94a) list_set_graphic_pane_g2_ParamLimits

0x9ece,	// (0x0001e94a) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000241ca) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000241ca) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00024554) volume_small_pane_cp_g

0x9ef2,	// (0x0001e96e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9ef2,	// (0x0001e96e) list_double2_large_graphic_pane_g1_cp2

0x9f00,	// (0x0001e97c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9f00,	// (0x0001e97c) list_double2_large_graphic_pane_g2_cp2

0xe22d,	// (0x00022ca9) list_double2_large_graphic_pane_g3_cp2

0xe235,	// (0x00022cb1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe235,	// (0x00022cb1) list_double2_large_graphic_pane_t1_cp2

0xe24b,	// (0x00022cc7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe24b,	// (0x00022cc7) list_double2_large_graphic_pane_t2_cp2

0xaee5,	// (0x0001f961) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaee5,	// (0x0001f961) list_double_large_graphic_pane_g1_cp2

0xaef8,	// (0x0001f974) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaef8,	// (0x0001f974) list_double_large_graphic_pane_g2_cp2

0xe384,	// (0x00022e00) list_double_large_graphic_pane_g3_cp2

0x27ea,	// (0x00017266) list_double_large_graphic_pane_g4_cp

0x27f2,	// (0x0001726e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x27f2,	// (0x0001726e) list_double_large_graphic_pane_t1_cp2

0x2809,	// (0x00017285) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2809,	// (0x00017285) list_double_large_graphic_pane_t2_cp2

0x9f1c,	// (0x0001e998) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9f1c,	// (0x0001e998) list_double2_graphic_pane_g1_cp2

0x9f2a,	// (0x0001e9a6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9f2a,	// (0x0001e9a6) list_double2_graphic_pane_g2_cp2

0x9f3b,	// (0x0001e9b7) list_double2_graphic_pane_g3_cp2

0xe2b1,	// (0x00022d2d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe2b1,	// (0x00022d2d) list_double2_graphic_pane_t1_cp2

0xe2c7,	// (0x00022d43) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe2c7,	// (0x00022d43) list_double2_graphic_pane_t2_cp2

0xe2d9,	// (0x00022d55) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe2d9,	// (0x00022d55) list_single_number_heading_pane_g1_cp2

0xe2e5,	// (0x00022d61) list_single_number_heading_pane_g2_cp2

0xe2ed,	// (0x00022d69) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe2ed,	// (0x00022d69) list_single_number_heading_pane_t1_cp2

0x9f45,	// (0x0001e9c1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9f45,	// (0x0001e9c1) list_single_number_heading_pane_t2_cp2

0xe303,	// (0x00022d7f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe303,	// (0x00022d7f) list_single_number_heading_pane_t3_cp2

0xe2d9,	// (0x00022d55) list_single_heading_pane_g1_cp2_ParamLimits

0xe2d9,	// (0x00022d55) list_single_heading_pane_g1_cp2

0xe2e5,	// (0x00022d61) list_single_heading_pane_g2_cp2

0xe2ed,	// (0x00022d69) list_single_heading_pane_t1_cp2_ParamLimits

0xe2ed,	// (0x00022d69) list_single_heading_pane_t1_cp2

0xaed1,	// (0x0001f94d) list_single_heading_pane_t2_cp2_ParamLimits

0xaed1,	// (0x0001f94d) list_single_heading_pane_t2_cp2

0x2508,	// (0x00016f84) list_double_graphic_pane_g1_cp2_ParamLimits

0x2508,	// (0x00016f84) list_double_graphic_pane_g1_cp2

0x2514,	// (0x00016f90) list_double_graphic_pane_g2_cp2_ParamLimits

0x2514,	// (0x00016f90) list_double_graphic_pane_g2_cp2

0x2523,	// (0x00016f9f) list_double_graphic_pane_g3_cp2

0x252b,	// (0x00016fa7) list_double_graphic_pane_t1_cp2_ParamLimits

0x252b,	// (0x00016fa7) list_double_graphic_pane_t1_cp2

0x2541,	// (0x00016fbd) list_double_graphic_pane_t2_cp2_ParamLimits

0x2541,	// (0x00016fbd) list_double_graphic_pane_t2_cp2

0xe378,	// (0x00022df4) list_double_number_pane_g1_cp2_ParamLimits

0xe378,	// (0x00022df4) list_double_number_pane_g1_cp2

0xe384,	// (0x00022e00) list_double_number_pane_g2_cp2

0xae6b,	// (0x0001f8e7) list_double_number_pane_t1_cp2_ParamLimits

0xae6b,	// (0x0001f8e7) list_double_number_pane_t1_cp2

0x24e0,	// (0x00016f5c) list_double_number_pane_t2_cp2_ParamLimits

0x24e0,	// (0x00016f5c) list_double_number_pane_t2_cp2

0x24f6,	// (0x00016f72) list_double_number_pane_t3_cp2_ParamLimits

0x24f6,	// (0x00016f72) list_double_number_pane_t3_cp2

0xadb9,	// (0x0001f835) list_single_graphic_pane_g1_cp2_ParamLimits

0xadb9,	// (0x0001f835) list_single_graphic_pane_g1_cp2

0xe3c4,	// (0x00022e40) list_single_graphic_pane_g2_cp2_ParamLimits

0xe3c4,	// (0x00022e40) list_single_graphic_pane_g2_cp2

0xe3d0,	// (0x00022e4c) list_single_graphic_pane_g3_cp2

0x238b,	// (0x00016e07) list_single_graphic_pane_t1_cp2_ParamLimits

0x238b,	// (0x00016e07) list_single_graphic_pane_t1_cp2

0xe3c4,	// (0x00022e40) list_single_number_pane_g1_cp2_ParamLimits

0xe3c4,	// (0x00022e40) list_single_number_pane_g1_cp2

0xe3d0,	// (0x00022e4c) list_single_number_pane_g2_cp2

0x238b,	// (0x00016e07) list_single_number_pane_t1_cp2_ParamLimits

0x238b,	// (0x00016e07) list_single_number_pane_t1_cp2

0xada5,	// (0x0001f821) list_single_number_pane_t2_cp2_ParamLimits

0xada5,	// (0x0001f821) list_single_number_pane_t2_cp2

0x9f00,	// (0x0001e97c) list_double2_pane_g1_cp2_ParamLimits

0x9f00,	// (0x0001e97c) list_double2_pane_g1_cp2

0xe22d,	// (0x00022ca9) list_double2_pane_g2_cp2

0xe350,	// (0x00022dcc) list_double2_pane_t1_cp2_ParamLimits

0xe350,	// (0x00022dcc) list_double2_pane_t1_cp2

0xe366,	// (0x00022de2) list_double2_pane_t2_cp2_ParamLimits

0xe366,	// (0x00022de2) list_double2_pane_t2_cp2

0xe378,	// (0x00022df4) list_double_pane_g1_cp2_ParamLimits

0xe378,	// (0x00022df4) list_double_pane_g1_cp2

0xe384,	// (0x00022e00) list_double_pane_g2_cp2

0xe38c,	// (0x00022e08) list_double_pane_t1_cp2_ParamLimits

0xe38c,	// (0x00022e08) list_double_pane_t1_cp2

0xe3a2,	// (0x00022e1e) list_double_pane_t2_cp2_ParamLimits

0xe3a2,	// (0x00022e1e) list_double_pane_t2_cp2

0xe3b4,	// (0x00022e30) list_single_pane_cp2_g3

0xe3c4,	// (0x00022e40) list_single_pane_g1_cp2_ParamLimits

0xe3c4,	// (0x00022e40) list_single_pane_g1_cp2

0xe3d0,	// (0x00022e4c) list_single_pane_g2_cp2

0xe3d8,	// (0x00022e54) list_single_pane_t1_cp2_ParamLimits

0xe3d8,	// (0x00022e54) list_single_pane_t1_cp2

0x9f73,	// (0x0001e9ef) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9f73,	// (0x0001e9ef) list_single_large_graphic_pane_g1_cp2

0xd8c5,	// (0x00022341) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd8c5,	// (0x00022341) list_single_large_graphic_pane_g2_cp2

0xe3f0,	// (0x00022e6c) list_single_large_graphic_pane_g3_cp2

0xe3f8,	// (0x00022e74) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe3f8,	// (0x00022e74) list_single_large_graphic_pane_g4_cp1

0xe412,	// (0x00022e8e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe412,	// (0x00022e8e) list_single_large_graphic_pane_t1_cp2

0x2355,	// (0x00016dd1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2355,	// (0x00016dd1) list_single_graphic_heading_pane_g1_cp2

0xad80,	// (0x0001f7fc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xad80,	// (0x0001f7fc) list_single_graphic_heading_pane_g4_cp2

0xe3d0,	// (0x00022e4c) list_single_graphic_heading_pane_g5_cp2

0x2361,	// (0x00016ddd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2361,	// (0x00016ddd) list_single_graphic_heading_pane_t1_cp2

0xad91,	// (0x0001f80d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xad91,	// (0x0001f80d) list_single_graphic_heading_pane_t2_cp2

0x2316,	// (0x00016d92) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2316,	// (0x00016d92) list_single_2graphic_pane_g1_cp2

0xad80,	// (0x0001f7fc) list_single_2graphic_pane_g2_cp2_ParamLimits

0xad80,	// (0x0001f7fc) list_single_2graphic_pane_g2_cp2

0xe3d0,	// (0x00022e4c) list_single_2graphic_pane_g3_cp2

0x2333,	// (0x00016daf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2333,	// (0x00016daf) list_single_2graphic_pane_g4_cp2

0x233f,	// (0x00016dbb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x233f,	// (0x00016dbb) list_single_2graphic_pane_t1_cp2

0xb88a,	// (0x00020306) list_highlight_pane_g10_cp1

0x1eee,	// (0x0001696a) list_highlight_pane_g1_cp1

0x1ef6,	// (0x00016972) list_highlight_pane_g2_cp1

0x1efe,	// (0x0001697a) list_highlight_pane_g3_cp1

0x1f06,	// (0x00016982) list_highlight_pane_g4_cp1

0x1f0e,	// (0x0001698a) list_highlight_pane_g5_cp1

0x1f16,	// (0x00016992) list_highlight_pane_g6_cp1

0x1f1e,	// (0x0001699a) list_highlight_pane_g7_cp1

0x1f26,	// (0x000169a2) list_highlight_pane_g8_cp1

0x1f2e,	// (0x000169aa) list_highlight_pane_g9_cp1

0xad46,	// (0x0001f7c2) form_field_slider_pane_t3

0xad54,	// (0x0001f7d0) form_field_slider_pane_t4

0x1e2a,	// (0x000168a6) slider_form_pane_ParamLimits

0x1e2a,	// (0x000168a6) slider_form_pane

0xb894,	// (0x00020310) control_abbreviations

0xb894,	// (0x00020310) control_conventions

0xb894,	// (0x00020310) control_definitions

0xb894,	// (0x00020310) format_table_attribute

0x2616,	// (0x00017092) bg_popup_preview_window_pane_g9

0xb894,	// (0x00020310) format_table_data2

0xb894,	// (0x00020310) format_table_data3

0xb894,	// (0x00020310) format_table_data_example

0x0008,

0xb894,	// (0x00020310) intro_purpose

0xf8e5,	// (0x00024361) bg_popup_preview_window_pane_g

0xb894,	// (0x00020310) texts_category

0xb894,	// (0x00020310) texts_graphics

0xe428,	// (0x00022ea4) text_digital

0xe437,	// (0x00022eb3) text_primary

0xe446,	// (0x00022ec2) text_primary_small

0xe455,	// (0x00022ed1) text_secondary

0xe464,	// (0x00022ee0) text_title

0x2e47,	// (0x000178c3) bg_passive_tab_pane_g1_cp3_srt

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp3_srt

0x2e50,	// (0x000178cc) bg_passive_tab_pane_g3_cp3_srt

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp3_srt_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp3_srt

0x2e59,	// (0x000178d5) tabs_4_active_pane_srt_g1

0xb220,	// (0x0001fc9c) tabs_4_active_pane_srt_t1_ParamLimits

0xb220,	// (0x0001fc9c) tabs_4_active_pane_srt_t1

0x2e47,	// (0x000178c3) bg_active_tab_pane_g1_cp3_copy1

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp3_copy1

0x2e50,	// (0x000178cc) bg_active_tab_pane_g3_cp3_copy1

0xb8fc,	// (0x00020378) tabs_2_long_active_pane_srt_ParamLimits

0xb8fc,	// (0x00020378) tabs_2_long_active_pane_srt

0xb8fc,	// (0x00020378) tabs_2_long_passive_pane_srt_ParamLimits

0xb8fc,	// (0x00020378) tabs_2_long_passive_pane_srt

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp4_srt

0x2a7a,	// (0x000174f6) bg_passive_tab_pane_g1_cp4_srt

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp4_srt

0x2a83,	// (0x000174ff) bg_passive_tab_pane_g3_cp4_srt

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp4_srt_ParamLimits

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp4_srt

0xafcd,	// (0x0001fa49) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafcd,	// (0x0001fa49) tabs_2_long_active_pane_srt_t1

0x2a7a,	// (0x000174f6) bg_active_tab_pane_g1_cp4_srt

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp4_srt

0x2a83,	// (0x000174ff) bg_active_tab_pane_g3_cp4_srt

0xb8ee,	// (0x0002036a) tabs_3_long_active_pane_srt_ParamLimits

0xb8ee,	// (0x0002036a) tabs_3_long_active_pane_srt

0xb8ee,	// (0x0002036a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb8ee,	// (0x0002036a) tabs_3_long_passive_pane_cp_srt

0xb8ee,	// (0x0002036a) tabs_3_long_passive_pane_srt_ParamLimits

0xb8ee,	// (0x0002036a) tabs_3_long_passive_pane_srt

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp5_srt

0xe21b,	// (0x00022c97) bg_passive_tab_pane_g1_cp5_srt

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp5_srt

0xe224,	// (0x00022ca0) bg_passive_tab_pane_g3_cp5_srt

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp5_srt_ParamLimits

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp5_srt

0xafb7,	// (0x0001fa33) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafb7,	// (0x0001fa33) tabs_3_long_active_pane_srt_t1

0xe21b,	// (0x00022c97) bg_active_tab_pane_g1_cp5_srt

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp5_srt

0xe224,	// (0x00022ca0) bg_active_tab_pane_g3_cp5_srt

0x2a5a,	// (0x000174d6) navi_text_pane_srt_t1

0x2a52,	// (0x000174ce) navi_icon_pane_srt_g1

0x08da,	// (0x00015356) midp_editing_number_pane_srt

0xe473,	// (0x00022eef) midp_ticker_pane_srt

0x08e2,	// (0x0001535e) midp_ticker_pane_srt_g1

0x08ea,	// (0x00015366) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000241e9) midp_ticker_pane_srt_g

0x08f2,	// (0x0001536e) midp_ticker_pane_srt_t1

0x2a43,	// (0x000174bf) midp_editing_number_pane_t1_copy1

0x0aa4,	// (0x00015520) listscroll_midp_pane

0x0aa4,	// (0x00015520) midp_form_pane

0x0788,	// (0x00015204) midp_info_popup_window_ParamLimits

0x0788,	// (0x00015204) midp_info_popup_window

0xda4c,	// (0x000224c8) bg_popup_sub_pane_cp50_ParamLimits

0xda4c,	// (0x000224c8) bg_popup_sub_pane_cp50

0x1b24,	// (0x000165a0) listscroll_midp_info_pane_ParamLimits

0x1b24,	// (0x000165a0) listscroll_midp_info_pane

0x1b0c,	// (0x00016588) listscroll_form_midp_pane_ParamLimits

0x1b0c,	// (0x00016588) listscroll_form_midp_pane

0x1b18,	// (0x00016594) scroll_bar_cp050

0xad3a,	// (0x0001f7b6) list_midp_pane

0x3bfe,	// (0x0001867a) signal_pane_g2_cp

0x1a26,	// (0x000164a2) listscroll_midp_info_pane_t1_ParamLimits

0x1a26,	// (0x000164a2) listscroll_midp_info_pane_t1

0x1a3e,	// (0x000164ba) listscroll_midp_info_pane_t2_ParamLimits

0x1a3e,	// (0x000164ba) listscroll_midp_info_pane_t2

0x1a7c,	// (0x000164f8) listscroll_midp_info_pane_t3_ParamLimits

0x1a7c,	// (0x000164f8) listscroll_midp_info_pane_t3

0x1ab6,	// (0x00016532) listscroll_midp_info_pane_t4_ParamLimits

0x1ab6,	// (0x00016532) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0002429c) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0002429c) listscroll_midp_info_pane_t

0xdacc,	// (0x00022548) scroll_pane_cp21

0x19c0,	// (0x0001643c) form_midp_field_choice_group_pane

0x19c9,	// (0x00016445) form_midp_field_text_pane

0x1a0c,	// (0x00016488) form_midp_field_time_pane

0x1a14,	// (0x00016490) form_midp_gauge_slider_pane

0x1a1d,	// (0x00016499) form_midp_gauge_wait_pane

0xb894,	// (0x00020310) form_midp_image_pane

0xad1d,	// (0x0001f799) list_single_midp_pane_ParamLimits

0xad1d,	// (0x0001f799) list_single_midp_pane

0xacf5,	// (0x0001f771) form_midp_field_text_pane_t1

0x1741,	// (0x000161bd) input_focus_pane_cp050

0x198f,	// (0x0001640b) list_midp_form_text_pane

0x1933,	// (0x000163af) form_midp_field_choice_group_pane_t1

0x1941,	// (0x000163bd) input_focus_pane_cp051

0x1955,	// (0x000163d1) list_midp_choice_pane

0xb894,	// (0x00020310) status_idle_pane

0x1917,	// (0x00016393) form_midp_field_time_pane_t1

0xb88a,	// (0x00020306) wait_anim_pane_g2_copy1

0x1925,	// (0x000163a1) form_midp_field_time_pane_t2

0x0001,

0x0838,	// (0x000152b4) aid_navinavi_width_2_pane

0xf81b,	// (0x00024297) form_midp_field_time_pane_t

0xb894,	// (0x00020310) input_focus_pane_cp052

0xb894,	// (0x00020310) bg_input_focus_pane_cp040

0x18d7,	// (0x00016353) form_midp_gauge_slider_pane_t1

0x18e5,	// (0x00016361) form_midp_gauge_slider_pane_t2

0xacd9,	// (0x0001f755) form_midp_gauge_slider_pane_t3

0xace7,	// (0x0001f763) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0002428e) form_midp_gauge_slider_pane_t

0x190f,	// (0x0001638b) form_midp_slider_pane

0xb8fc,	// (0x00020378) bg_input_focus_pane_cp041_ParamLimits

0xb8fc,	// (0x00020378) bg_input_focus_pane_cp041

0x18a4,	// (0x00016320) form_midp_gauge_wait_pane_t1_ParamLimits

0x18a4,	// (0x00016320) form_midp_gauge_wait_pane_t1

0x18b6,	// (0x00016332) form_midp_gauge_wait_pane_t2_ParamLimits

0x18b6,	// (0x00016332) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00024289) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00024289) form_midp_gauge_wait_pane_t

0x18c8,	// (0x00016344) form_midp_wait_pane_ParamLimits

0x18c8,	// (0x00016344) form_midp_wait_pane

0x186c,	// (0x000162e8) form_midp_image_pane_g1

0x1875,	// (0x000162f1) form_midp_image_pane_t1

0x1884,	// (0x00016300) form_midp_image_pane_t2

0x1893,	// (0x0001630f) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x00024282) form_midp_image_pane_t

0x1854,	// (0x000162d0) list_single_midp_pane_g1

0x185d,	// (0x000162d9) list_single_midp_pane_t1

0xacc2,	// (0x0001f73e) list_midp_form_item_pane_ParamLimits

0xacc2,	// (0x0001f73e) list_midp_form_item_pane

0x07e0,	// (0x0001525c) list_midp_form_item_pane_t1

0x07ef,	// (0x0001526b) midp_ticker_pane_g1

0x07fb,	// (0x00015277) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000241cf) midp_ticker_pane_g

0xa018,	// (0x0001ea94) midp_ticker_pane_t1

0xb178,	// (0x0001fbf4) midp_editing_number_pane_t1

0x2cc9,	// (0x00017745) midp_editing_number_pane

0x2cd8,	// (0x00017754) midp_ticker_pane

0x2a0b,	// (0x00017487) ai_message_heading_pane

0xb894,	// (0x00020310) bg_popup_window_pane_cp14

0x2a13,	// (0x0001748f) listscroll_ai_message_pane

0x2991,	// (0x0001740d) ai_message_heading_pane_g1_ParamLimits

0x2991,	// (0x0001740d) ai_message_heading_pane_g1

0x299d,	// (0x00017419) ai_message_heading_pane_g2_ParamLimits

0x299d,	// (0x00017419) ai_message_heading_pane_g2

0x29ab,	// (0x00017427) ai_message_heading_pane_g3_ParamLimits

0x29ab,	// (0x00017427) ai_message_heading_pane_g3

0x29b7,	// (0x00017433) ai_message_heading_pane_g4_ParamLimits

0x29b7,	// (0x00017433) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x000243c3) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x000243c3) ai_message_heading_pane_g

0x29c3,	// (0x0001743f) ai_message_heading_pane_t1_ParamLimits

0x29c3,	// (0x0001743f) ai_message_heading_pane_t1

0x29dd,	// (0x00017459) ai_message_heading_pane_t2_ParamLimits

0x29dd,	// (0x00017459) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x000243cc) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x000243cc) ai_message_heading_pane_t

0x29f1,	// (0x0001746d) bg_popup_heading_pane_cp1_ParamLimits

0x29f1,	// (0x0001746d) bg_popup_heading_pane_cp1

0x297f,	// (0x000173fb) list_ai_message_pane_ParamLimits

0x297f,	// (0x000173fb) list_ai_message_pane

0xdacc,	// (0x00022548) scroll_pane_cp10

0x291b,	// (0x00017397) list_ai_message_pane_g1

0x2923,	// (0x0001739f) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x000243a0) list_ai_message_pane_g

0x292b,	// (0x000173a7) list_ai_message_pane_t1_ParamLimits

0x292b,	// (0x000173a7) list_ai_message_pane_t1

0x2940,	// (0x000173bc) list_ai_message_pane_t2_ParamLimits

0x2940,	// (0x000173bc) list_ai_message_pane_t2

0x2955,	// (0x000173d1) list_ai_message_pane_t3_ParamLimits

0x2955,	// (0x000173d1) list_ai_message_pane_t3

0x296a,	// (0x000173e6) list_ai_message_pane_t4_ParamLimits

0x296a,	// (0x000173e6) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x000243a5) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x000243a5) list_ai_message_pane_t

0xaf8b,	// (0x0001fa07) cell_ai_soft_ind_pane_ParamLimits

0xaf8b,	// (0x0001fa07) cell_ai_soft_ind_pane

0x0819,	// (0x00015295) cell_ai_soft_ind_pane_g1_ParamLimits

0x0819,	// (0x00015295) cell_ai_soft_ind_pane_g1

0xb894,	// (0x00020310) grid_highlight_cp1

0x0826,	// (0x000152a2) text_secondary_cp56_ParamLimits

0x0826,	// (0x000152a2) text_secondary_cp56

0x28d9,	// (0x00017355) example_general_pane_ParamLimits

0x28d9,	// (0x00017355) example_general_pane

0x28e5,	// (0x00017361) example_parent_pane_g1_ParamLimits

0x28e5,	// (0x00017361) example_parent_pane_g1

0x28f1,	// (0x0001736d) example_parent_pane_t1_ParamLimits

0x28f1,	// (0x0001736d) example_parent_pane_t1

0xa547,	// (0x0001efc3) popup_preview_text_window_ParamLimits

0xa547,	// (0x0001efc3) popup_preview_text_window

0xe3bc,	// (0x00022e38) list_single_pane_cp2_g4

0xbaf1,	// (0x0002056d) bg_popup_preview_window_pane_ParamLimits

0xbaf1,	// (0x0002056d) bg_popup_preview_window_pane

0x2620,	// (0x0001709c) popup_preview_text_window_t1_ParamLimits

0x2620,	// (0x0001709c) popup_preview_text_window_t1

0x263e,	// (0x000170ba) popup_preview_text_window_t2_ParamLimits

0x263e,	// (0x000170ba) popup_preview_text_window_t2

0x2687,	// (0x00017103) popup_preview_text_window_t3_ParamLimits

0x2687,	// (0x00017103) popup_preview_text_window_t3

0x26cc,	// (0x00017148) popup_preview_text_window_t4_ParamLimits

0x26cc,	// (0x00017148) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00024374) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00024374) popup_preview_text_window_t

0x274a,	// (0x000171c6) scroll_pane_cp11

0x161b,	// (0x00016097) bg_popup_preview_window_pane_g1

0x25d4,	// (0x00017050) bg_popup_preview_window_pane_g2

0x25de,	// (0x0001705a) bg_popup_preview_window_pane_g3

0x25e8,	// (0x00017064) bg_popup_preview_window_pane_g4

0x25f2,	// (0x0001706e) bg_popup_preview_window_pane_g5

0x25fc,	// (0x00017078) bg_popup_preview_window_pane_g6

0x2604,	// (0x00017080) bg_popup_preview_window_pane_g7

0x260c,	// (0x00017088) bg_popup_preview_window_pane_g8

0xd671,	// (0x000220ed) aid_popup_width_pane

0xa4b7,	// (0x0001ef33) popup_midp_note_alarm_window_ParamLimits

0xa4b7,	// (0x0001ef33) popup_midp_note_alarm_window

0xd8f7,	// (0x00022373) data_form_pane_ParamLimits

0x9a6e,	// (0x0001e4ea) form_field_data_pane_g1

0x9a78,	// (0x0001e4f4) form_field_data_pane_t1_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_ParamLimits

0xd911,	// (0x0002238d) data_form_wide_pane_ParamLimits

0xd922,	// (0x0002239e) form_field_data_wide_pane_g1

0xd94e,	// (0x000223ca) form_field_data_wide_pane_t1_ParamLimits

0xbca6,	// (0x00020722) input_focus_pane_cp6_ParamLimits

0x9bb9,	// (0x0001e635) input_popup_find_pane_g1_ParamLimits

0x9bb9,	// (0x0001e635) input_popup_find_pane_g1

0xdda4,	// (0x00022820) aid_navi_side_left_pane

0xddb9,	// (0x00022835) aid_navi_side_right_pane

0x1fe9,	// (0x00016a65) bg_popup_window_pane_cp30_ParamLimits

0x1fe9,	// (0x00016a65) bg_popup_window_pane_cp30

0x2063,	// (0x00016adf) popup_midp_note_alarm_window_g1_ParamLimits

0x2063,	// (0x00016adf) popup_midp_note_alarm_window_g1

0x2093,	// (0x00016b0f) popup_midp_note_alarm_window_t1_ParamLimits

0x2093,	// (0x00016b0f) popup_midp_note_alarm_window_t1

0x2134,	// (0x00016bb0) popup_midp_note_alarm_window_t2_ParamLimits

0x2134,	// (0x00016bb0) popup_midp_note_alarm_window_t2

0x21e2,	// (0x00016c5e) popup_midp_note_alarm_window_t3_ParamLimits

0x21e2,	// (0x00016c5e) popup_midp_note_alarm_window_t3

0x2214,	// (0x00016c90) popup_midp_note_alarm_window_t4_ParamLimits

0x2214,	// (0x00016c90) popup_midp_note_alarm_window_t4

0x223a,	// (0x00016cb6) popup_midp_note_alarm_window_t5_ParamLimits

0x223a,	// (0x00016cb6) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x00024311) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x00024311) popup_midp_note_alarm_window_t

0x22e6,	// (0x00016d62) wait_bar_pane_cp1_ParamLimits

0x22e6,	// (0x00016d62) wait_bar_pane_cp1

0xb894,	// (0x00020310) wait_anim_pane_copy1

0xb894,	// (0x00020310) wait_border_pane_copy1

0x1cce,	// (0x0001674a) wait_border_pane_g1_copy1

0xd968,	// (0x000223e4) form_field_popup_pane_g1

0x9a92,	// (0x0001e50e) form_field_popup_pane_t1_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_cp7_ParamLimits

0xd970,	// (0x000223ec) list_form_pane_ParamLimits

0xd97c,	// (0x000223f8) form_field_popup_wide_pane_g1

0xd984,	// (0x00022400) form_field_popup_wide_pane_t1_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_cp8_ParamLimits

0xd999,	// (0x00022415) list_form_wide_pane_ParamLimits

0x2ed4,	// (0x00017950) aid_size_cell_graphic_pane

0x9b11,	// (0x0001e58d) data_form_pane_t1_ParamLimits

0xb15c,	// (0x0001fbd8) data_form_wide_pane_t1_ParamLimits

0xa94b,	// (0x0001f3c7) bg_status_flat_pane

0x9297,	// (0x0001dd13) title_pane_t1_ParamLimits

0xb8b6,	// (0x00020332) title_pane_t2_ParamLimits

0xb8dc,	// (0x00020358) title_pane_t3_ParamLimits

0xf557,	// (0x00023fd3) title_pane_t_ParamLimits

0x9cc0,	// (0x0001e73c) level_1_signal_ParamLimits

0x9cd2,	// (0x0001e74e) level_2_signal_ParamLimits

0x9ce5,	// (0x0001e761) level_3_signal_ParamLimits

0x9cf8,	// (0x0001e774) level_4_signal_ParamLimits

0x9d0b,	// (0x0001e787) level_5_signal_ParamLimits

0x9d1e,	// (0x0001e79a) level_6_signal_ParamLimits

0x9d31,	// (0x0001e7ad) level_7_signal_ParamLimits

0x9cc0,	// (0x0001e73c) level_1_battery_ParamLimits

0x9cd2,	// (0x0001e74e) level_2_battery_ParamLimits

0x9ce5,	// (0x0001e761) level_3_battery_ParamLimits

0x9cf8,	// (0x0001e774) level_4_battery_ParamLimits

0x9d0b,	// (0x0001e787) level_5_battery_ParamLimits

0x9d1e,	// (0x0001e79a) level_6_battery_ParamLimits

0x9d31,	// (0x0001e7ad) level_7_battery_ParamLimits

0x1eee,	// (0x0001696a) bg_status_flat_pane_g1

0x1ef6,	// (0x00016972) bg_status_flat_pane_g2

0x1efe,	// (0x0001697a) bg_status_flat_pane_g3

0x1f06,	// (0x00016982) bg_status_flat_pane_g4

0x1f0e,	// (0x0001698a) bg_status_flat_pane_g5

0x1f16,	// (0x00016992) bg_status_flat_pane_g6

0x1f1e,	// (0x0001699a) bg_status_flat_pane_g7

0x932b,	// (0x0001dda7) tabs_3_active_pane_t1_ParamLimits

0x932b,	// (0x0001dda7) tabs_3_passive_pane_t1_ParamLimits

0x9345,	// (0x0001ddc1) tabs_4_active_pane_t1_ParamLimits

0x9345,	// (0x0001ddc1) tabs_4_1_passive_pane_t1_ParamLimits

0x9bcf,	// (0x0001e64b) tabs_2_active_pane_t1_ParamLimits

0x9bcf,	// (0x0001e64b) tabs_2_passive_pane_t1_ParamLimits

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp4_ParamLimits

0x9be1,	// (0x0001e65d) tabs_2_long_active_pane_t1_ParamLimits

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp4_ParamLimits

0xe888,	// (0x00023304) list_single_midp_graphic_pane_t1_ParamLimits

0xb8fc,	// (0x00020378) bg_active_tab_pane_cp5_ParamLimits

0x9bf4,	// (0x0001e670) tabs_3_long_active_pane_t1_ParamLimits

0x0aa4,	// (0x00015520) bg_passive_tab_pane_cp5_ParamLimits

0xe888,	// (0x00023304) list_single_midp_graphic_pane_t1

0xa94b,	// (0x0001f3c7) bg_status_flat_pane_ParamLimits

0x1265,	// (0x00015ce1) indicator_pane_cp2_ParamLimits

0x1265,	// (0x00015ce1) indicator_pane_cp2

0xaae1,	// (0x0001f55d) navi_pane_srt_ParamLimits

0xaae1,	// (0x0001f55d) navi_pane_srt

0x13cc,	// (0x00015e48) popup_clock_digital_analogue_window_cp1

0xb95a,	// (0x000203d6) indicator_pane_t1

0xe473,	// (0x00022eef) copy_highlight_pane

0xe473,	// (0x00022eef) cursor_graphics_pane

0xe473,	// (0x00022eef) graphic_within_text_pane

0xe473,	// (0x00022eef) link_highlight_pane

0x270d,	// (0x00017189) popup_preview_text_window_t5_ParamLimits

0x270d,	// (0x00017189) popup_preview_text_window_t5

0x0842,	// (0x000152be) cursor_digital_pane

0x0842,	// (0x000152be) cursor_primary_pane

0x0853,	// (0x000152cf) cursor_primary_small_pane

0x085b,	// (0x000152d7) cursor_secondary_pane

0x0863,	// (0x000152df) cursor_title_pane

0x0842,	// (0x000152be) link_highlight_digital_pane

0x084a,	// (0x000152c6) link_highlight_primary_pane

0x0853,	// (0x000152cf) link_highlight_primary_small_pane

0x085b,	// (0x000152d7) link_highlight_secondary_pane

0x0863,	// (0x000152df) link_highlight_title_pane

0x0842,	// (0x000152be) copy_highlight_digital_pane

0x0842,	// (0x000152be) copy_highlight_primary_pane

0x0853,	// (0x000152cf) copy_highlight_primary_small_pane

0x085b,	// (0x000152d7) copy_highlight_secondary_pane

0x0863,	// (0x000152df) copy_highlight_title_pane

0x085b,	// (0x000152d7) graphic_text_digital_pane

0x1f8c,	// (0x00016a08) graphic_text_primary_pane

0x1f95,	// (0x00016a11) graphic_text_primary_small_pane

0x0853,	// (0x000152cf) graphic_text_secondary_pane

0x0842,	// (0x000152be) graphic_text_title_pane

0xa02a,	// (0x0001eaa6) cursor_primary_pane_g1

0x1f7e,	// (0x000169fa) cursor_text_primary_t1

0xad76,	// (0x0001f7f2) cursor_primary_small_pane_g1

0x1f70,	// (0x000169ec) cursor_text_primary_small_t1

0xad6c,	// (0x0001f7e8) cursor_primary_small_pane_g1_copy1

0x1f58,	// (0x000169d4) cursor_text_primary_small_t1_copy1

0x1f36,	// (0x000169b2) cursor_text_title_t1

0xad62,	// (0x0001f7de) cursor_title_pane_g1

0xa02a,	// (0x0001eaa6) cursor_digital_pane_g1

0x0875,	// (0x000152f1) cursor_text_digital_t1

0x0883,	// (0x000152ff) link_highlight_primary_pane_g1

0x1edf,	// (0x0001695b) link_highlight_primary_pane_t1

0x0883,	// (0x000152ff) link_highlight_primary_small_pane_g1

0x088b,	// (0x00015307) link_highlight_primary_small_pane_t1

0x089a,	// (0x00015316) link_highlight_secondary_pane_g1

0x08a2,	// (0x0001531e) link_highlight_secondary_pane_t1

0x1e53,	// (0x000168cf) link_highlight_title_pane_g1

0x1e5b,	// (0x000168d7) link_highlight_title_pane_t1

0x1e3c,	// (0x000168b8) link_highlight_digital_pane_g1

0x1e44,	// (0x000168c0) link_highlight_digital_pane_t1

0x1d04,	// (0x00016780) copy_highlight_primary_pane_g1

0x1d1b,	// (0x00016797) copy_highlight_primary_pane_t1

0x1d04,	// (0x00016780) copy_highlight_primary_small_pane_g1

0x1d0c,	// (0x00016788) copy_highlight_primary_small_pane_t1

0x08b1,	// (0x0001532d) copy_highlight_secondary_pane_g1

0x08b9,	// (0x00015335) copy_highlight_secondary_pane_t1

0x1ced,	// (0x00016769) copy_highlight_title_pane_g1

0x1cf5,	// (0x00016771) copy_highlight_title_pane_t1

0x1d04,	// (0x00016780) copy_highlight_digital_pane_g1

0x30a4,	// (0x00017b20) copy_highlight_digital_pane_t1

0x2ff8,	// (0x00017a74) graphic_text_primary_pane_g1

0x3088,	// (0x00017b04) graphic_text_primary_pane_t1

0x3096,	// (0x00017b12) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x00024440) graphic_text_primary_pane_t

0x3064,	// (0x00017ae0) graphic_text_primary_small_pane_g1

0x306c,	// (0x00017ae8) graphic_text_primary_small_pane_t1

0x307a,	// (0x00017af6) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0002443b) graphic_text_primary_small_pane_t

0x3040,	// (0x00017abc) graphic_text_secondary_pane_g1

0x3048,	// (0x00017ac4) graphic_text_secondary_pane_t1

0x3056,	// (0x00017ad2) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00024436) graphic_text_secondary_pane_t

0x301c,	// (0x00017a98) graphic_text_title_pane_g1

0x3024,	// (0x00017aa0) graphic_text_title_pane_t1

0x3032,	// (0x00017aae) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x00024431) graphic_text_title_pane_t

0x2ff8,	// (0x00017a74) graphic_text_digital_pane_g1

0x3000,	// (0x00017a7c) graphic_text_digital_pane_t1

0x300e,	// (0x00017a8a) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0002442c) graphic_text_digital_pane_t

0xb8fc,	// (0x00020378) navi_icon_pane_srt_ParamLimits

0xb8fc,	// (0x00020378) navi_icon_pane_srt

0xb894,	// (0x00020310) navi_midp_pane_srt

0xb894,	// (0x00020310) navi_navi_pane_srt

0xb8fc,	// (0x00020378) navi_text_pane_srt_ParamLimits

0xb8fc,	// (0x00020378) navi_text_pane_srt

0x2fc3,	// (0x00017a3f) navi_navi_icon_text_pane_srt

0x2fcb,	// (0x00017a47) navi_navi_pane_srt_g1_ParamLimits

0x2fcb,	// (0x00017a47) navi_navi_pane_srt_g1

0x2fdd,	// (0x00017a59) navi_navi_pane_srt_g2_ParamLimits

0x2fdd,	// (0x00017a59) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00024427) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00024427) navi_navi_pane_srt_g

0x2fef,	// (0x00017a6b) navi_navi_tabs_pane_srt

0x2fc3,	// (0x00017a3f) navi_navi_text_pane_srt

0x2fc3,	// (0x00017a3f) navi_navi_volume_pane_srt

0x2fb4,	// (0x00017a30) navi_navi_text_pane_srt_t1

0xea62,	// (0x000234de) navi_navi_volume_pane_srt_g1

0xea6a,	// (0x000234e6) volume_small_pane_srt_ParamLimits

0xea6a,	// (0x000234e6) volume_small_pane_srt

0xe6e5,	// (0x00023161) volume_small_pane_srt_g1_ParamLimits

0xe6e5,	// (0x00023161) volume_small_pane_srt_g1

0xe6f5,	// (0x00023171) volume_small_pane_srt_g2_ParamLimits

0xe6f5,	// (0x00023171) volume_small_pane_srt_g2

0xe706,	// (0x00023182) volume_small_pane_srt_g3_ParamLimits

0xe706,	// (0x00023182) volume_small_pane_srt_g3

0xe717,	// (0x00023193) volume_small_pane_srt_g4_ParamLimits

0xe717,	// (0x00023193) volume_small_pane_srt_g4

0xe728,	// (0x000231a4) volume_small_pane_srt_g5_ParamLimits

0xe728,	// (0x000231a4) volume_small_pane_srt_g5

0xe739,	// (0x000231b5) volume_small_pane_srt_g6_ParamLimits

0xe739,	// (0x000231b5) volume_small_pane_srt_g6

0xe74a,	// (0x000231c6) volume_small_pane_srt_g7_ParamLimits

0xe74a,	// (0x000231c6) volume_small_pane_srt_g7

0xe75b,	// (0x000231d7) volume_small_pane_srt_g8_ParamLimits

0xe75b,	// (0x000231d7) volume_small_pane_srt_g8

0xe76c,	// (0x000231e8) volume_small_pane_srt_g9_ParamLimits

0xe76c,	// (0x000231e8) volume_small_pane_srt_g9

0xe77d,	// (0x000231f9) volume_small_pane_srt_g10_ParamLimits

0xe77d,	// (0x000231f9) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000241d4) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000241d4) volume_small_pane_srt_g

0xbba6,	// (0x00020622) query_popup_data_pane_cp2

0x2f9a,	// (0x00017a16) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2f9a,	// (0x00017a16) navi_navi_icon_text_pane_srt_t1

0x1f8c,	// (0x00016a08) navi_tabs_2_long_pane_srt

0x1f8c,	// (0x00016a08) navi_tabs_2_pane_srt

0x1f8c,	// (0x00016a08) navi_tabs_3_long_pane_srt

0x1f8c,	// (0x00016a08) navi_tabs_3_pane_srt

0x1f8c,	// (0x00016a08) navi_tabs_4_pane_srt

0xea42,	// (0x000234be) tabs_2_active_pane_srt_ParamLimits

0xea42,	// (0x000234be) tabs_2_active_pane_srt

0xea52,	// (0x000234ce) tabs_2_passive_pane_srt_ParamLimits

0xea52,	// (0x000234ce) tabs_2_passive_pane_srt

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp1_srt

0x2f66,	// (0x000179e2) bg_passive_tab_pane_g1_cp1_srt

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp1_srt

0x2f6f,	// (0x000179eb) bg_passive_tab_pane_g3_cp1_srt

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp1_srt_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp1_srt

0x2f78,	// (0x000179f4) tabs_2_active_pane_srt_g1

0xb2a1,	// (0x0001fd1d) tabs_2_active_pane_srt_t1_ParamLimits

0xb2a1,	// (0x0001fd1d) tabs_2_active_pane_srt_t1

0x2f66,	// (0x000179e2) bg_active_tab_pane_g1_cp1_srt

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp1_srt

0x2f6f,	// (0x000179eb) bg_active_tab_pane_g3_cp1_srt

0xea0f,	// (0x0002348b) tabs_3_active_pane_srt_ParamLimits

0xea0f,	// (0x0002348b) tabs_3_active_pane_srt

0xea20,	// (0x0002349c) tabs_3_passive_pane_cp_srt_ParamLimits

0xea20,	// (0x0002349c) tabs_3_passive_pane_cp_srt

0xea31,	// (0x000234ad) tabs_3_passive_pane_srt_ParamLimits

0xea31,	// (0x000234ad) tabs_3_passive_pane_srt

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1741,	// (0x000161bd) bg_passive_tab_pane_cp2_srt

0x08c8,	// (0x00015344) bg_passive_tab_pane_g1_cp2_srt

0xe1d4,	// (0x00022c50) bg_passive_tab_pane_g2_cp2_srt

0x08d1,	// (0x0001534d) bg_passive_tab_pane_g3_cp2_srt

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp2_srt_ParamLimits

0xb8ee,	// (0x0002036a) bg_active_tab_pane_cp2_srt

0x2f4c,	// (0x000179c8) tabs_3_active_pane_srt_g1

0xb28b,	// (0x0001fd07) tabs_3_active_pane_srt_t1_ParamLimits

0xb28b,	// (0x0001fd07) tabs_3_active_pane_srt_t1

0x08c8,	// (0x00015344) bg_active_tab_pane_g1_cp2_srt

0xe1d4,	// (0x00022c50) bg_active_tab_pane_g2_cp2_srt

0x08d1,	// (0x0001534d) bg_active_tab_pane_g3_cp2_srt

0xe9c7,	// (0x00023443) tabs_4_active_pane_srt_ParamLimits

0xe9c7,	// (0x00023443) tabs_4_active_pane_srt

0xe9d9,	// (0x00023455) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe9d9,	// (0x00023455) tabs_4_passive_pane_cp2_srt

0x0a22,	// (0x0001549e) aid_size_cell_toolbar

0x2aed,	// (0x00017569) main_idle_act_pane_ParamLimits

0x0c75,	// (0x000156f1) popup_large_graphic_colour_window_ParamLimits

0xa80d,	// (0x0001f289) popup_toolbar_window_ParamLimits

0xa80d,	// (0x0001f289) popup_toolbar_window

0x2d0e,	// (0x0001778a) list_single_graphic_2heading_pane_ParamLimits

0x2d0e,	// (0x0001778a) list_single_graphic_2heading_pane

0xde32,	// (0x000228ae) aid_size_cell_apps_grid_lsc_pane

0xde44,	// (0x000228c0) aid_size_cell_apps_grid_prt_pane

0x0aa4,	// (0x00015520) bg_wml_button_pane_cp1_ParamLimits

0x0aa4,	// (0x00015520) bg_wml_button_pane_cp1

0xacf5,	// (0x0001f771) form_midp_field_text_pane_t1_ParamLimits

0x1741,	// (0x000161bd) input_focus_pane_cp050_ParamLimits

0x198f,	// (0x0001640b) list_midp_form_text_pane_ParamLimits

0x1941,	// (0x000163bd) input_focus_pane_cp051_ParamLimits

0x1955,	// (0x000163d1) list_midp_choice_pane_ParamLimits

0xacac,	// (0x0001f728) list_single_2graphic_pane_cp3_ParamLimits

0xacac,	// (0x0001f728) list_single_2graphic_pane_cp3

0x3f77,	// (0x000189f3) list_single_midp_graphic_pane_ParamLimits

0x3f77,	// (0x000189f3) list_single_midp_graphic_pane

0xe79d,	// (0x00023219) list_single_graphic_2heading_pane_g1_ParamLimits

0xe79d,	// (0x00023219) list_single_graphic_2heading_pane_g1

0xe7a9,	// (0x00023225) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7a9,	// (0x00023225) list_single_graphic_2heading_pane_g4

0xe7b5,	// (0x00023231) list_single_graphic_2heading_pane_g5_ParamLimits

0xe7b5,	// (0x00023231) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00024227) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00024227) list_single_graphic_2heading_pane_g

0xe7c1,	// (0x0002323d) list_single_graphic_2heading_pane_t1_ParamLimits

0xe7c1,	// (0x0002323d) list_single_graphic_2heading_pane_t1

0xe7d5,	// (0x00023251) list_single_graphic_2heading_pane_t2_ParamLimits

0xe7d5,	// (0x00023251) list_single_graphic_2heading_pane_t2

0xe7f1,	// (0x0002326d) list_single_graphic_2heading_pane_t3_ParamLimits

0xe7f1,	// (0x0002326d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002422e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002422e) list_single_graphic_2heading_pane_t

0x152b,	// (0x00015fa7) bg_popup_sub_pane_cp2

0x1555,	// (0x00015fd1) grid_toobar_pane

0xe809,	// (0x00023285) cell_toolbar_pane_ParamLimits

0xe809,	// (0x00023285) cell_toolbar_pane

0x15bf,	// (0x0001603b) cell_toolbar_pane_g1_ParamLimits

0x15bf,	// (0x0001603b) cell_toolbar_pane_g1

0x15d3,	// (0x0001604f) cell_toolbar_pane_g2_ParamLimits

0x15d3,	// (0x0001604f) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002423c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002423c) cell_toolbar_pane_g

0x15f5,	// (0x00016071) grid_highlight_pane_cp2_ParamLimits

0x15f5,	// (0x00016071) grid_highlight_pane_cp2

0x160f,	// (0x0001608b) toolbar_button_pane

0x161b,	// (0x00016097) toolbar_button_pane_g1

0x1623,	// (0x0001609f) toolbar_button_pane_g2

0x162b,	// (0x000160a7) toolbar_button_pane_g3

0x1633,	// (0x000160af) toolbar_button_pane_g4

0x163b,	// (0x000160b7) toolbar_button_pane_g5

0x1643,	// (0x000160bf) toolbar_button_pane_g6

0x164b,	// (0x000160c7) toolbar_button_pane_g7

0x1653,	// (0x000160cf) toolbar_button_pane_g8

0x165b,	// (0x000160d7) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00024241) toolbar_button_pane_g

0xe841,	// (0x000232bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe841,	// (0x000232bd) list_single_2graphic_pane_g1_cp3

0x8a32,	// (0x0001d4ae) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8a32,	// (0x0001d4ae) list_single_2graphic_pane_g2_cp3

0xe84d,	// (0x000232c9) list_single_2graphic_pane_g3_cp3

0xe855,	// (0x000232d1) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe855,	// (0x000232d1) list_single_2graphic_pane_g4_cp3

0xe861,	// (0x000232dd) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe861,	// (0x000232dd) list_single_2graphic_pane_t1_cp3

0xe87c,	// (0x000232f8) list_single_midp_graphic_pane_g2_ParamLimits

0xe87c,	// (0x000232f8) list_single_midp_graphic_pane_g2

0x0a2a,	// (0x000154a6) aid_zoom_text_primary

0x0a32,	// (0x000154ae) aid_zoom_text_secondary

0xa082,	// (0x0001eafe) status_small_pane_g7_ParamLimits

0xa082,	// (0x0001eafe) status_small_pane_g7

0xa0a5,	// (0x0001eb21) status_small_pane_t1_ParamLimits

0x927f,	// (0x0001dcfb) title_pane_g2

0x0003,

0xf54e,	// (0x00023fca) title_pane_g

0x950b,	// (0x0001df87) aid_size_cell_colour_1_pane_ParamLimits

0x950b,	// (0x0001df87) aid_size_cell_colour_1_pane

0x951f,	// (0x0001df9b) aid_size_cell_colour_2_pane_ParamLimits

0x951f,	// (0x0001df9b) aid_size_cell_colour_2_pane

0x9533,	// (0x0001dfaf) aid_size_cell_colour_3_pane_ParamLimits

0x9533,	// (0x0001dfaf) aid_size_cell_colour_3_pane

0x9547,	// (0x0001dfc3) aid_size_cell_colour_4_pane_ParamLimits

0x9547,	// (0x0001dfc3) aid_size_cell_colour_4_pane

0xdcab,	// (0x00022727) title_pane_stacon_g1_ParamLimits

0xdcab,	// (0x00022727) title_pane_stacon_g1

0x1d72,	// (0x000167ee) popup_note_wait_window_g3_ParamLimits

0x1d72,	// (0x000167ee) popup_note_wait_window_g3

0x1de9,	// (0x00016865) popup_note_wait_window_t5_ParamLimits

0x1de9,	// (0x00016865) popup_note_wait_window_t5

0xb894,	// (0x00020310) main_feb_china_hwr_fs_writing_pane

0xa1a4,	// (0x0001ec20) popup_feb_china_hwr_fs_window_ParamLimits

0xa1a4,	// (0x0001ec20) popup_feb_china_hwr_fs_window

0x8a43,	// (0x0001d4bf) aid_size_cell_hwr_fs_ParamLimits

0x8a43,	// (0x0001d4bf) aid_size_cell_hwr_fs

0x1741,	// (0x000161bd) bg_popup_sub_pane_cp3_ParamLimits

0x1741,	// (0x000161bd) bg_popup_sub_pane_cp3

0x8a58,	// (0x0001d4d4) grid_hwr_fs_pane_ParamLimits

0x8a58,	// (0x0001d4d4) grid_hwr_fs_pane

0xe89e,	// (0x0002331a) linegrid_hwr_fs_pane_ParamLimits

0xe89e,	// (0x0002331a) linegrid_hwr_fs_pane

0x8a70,	// (0x0001d4ec) cell_hwr_fs_pane_ParamLimits

0x8a70,	// (0x0001d4ec) cell_hwr_fs_pane

0x174d,	// (0x000161c9) linegrid_hwr_fs_pane_g1_ParamLimits

0x174d,	// (0x000161c9) linegrid_hwr_fs_pane_g1

0xac80,	// (0x0001f6fc) linegrid_hwr_fs_pane_g2_ParamLimits

0xac80,	// (0x0001f6fc) linegrid_hwr_fs_pane_g2

0x176b,	// (0x000161e7) linegrid_hwr_fs_pane_g3_ParamLimits

0x176b,	// (0x000161e7) linegrid_hwr_fs_pane_g3

0xe8ae,	// (0x0002332a) linegrid_hwr_fs_pane_g4_ParamLimits

0xe8ae,	// (0x0002332a) linegrid_hwr_fs_pane_g4

0xe8cc,	// (0x00023348) linegrid_hwr_fs_pane_g5_ParamLimits

0xe8cc,	// (0x00023348) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00024267) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00024267) linegrid_hwr_fs_pane_g

0x1777,	// (0x000161f3) cell_hwr_fs_pane_g1_ParamLimits

0x1777,	// (0x000161f3) cell_hwr_fs_pane_g1

0x1462,	// (0x00015ede) cell_hwr_fs_pane_g2_ParamLimits

0x1462,	// (0x00015ede) cell_hwr_fs_pane_g2

0xac92,	// (0x0001f70e) cell_hwr_fs_pane_g3_ParamLimits

0xac92,	// (0x0001f70e) cell_hwr_fs_pane_g3

0xac9f,	// (0x0001f71b) cell_hwr_fs_pane_g4_ParamLimits

0xac9f,	// (0x0001f71b) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x00024272) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00024272) cell_hwr_fs_pane_g

0x8a96,	// (0x0001d512) cell_hwr_fs_pane_t1

0xb894,	// (0x00020310) grid_highlight_pane_cp6

0xb894,	// (0x00020310) main_idle_act2_pane

0xdab3,	// (0x0002252f) aid_inside_area_popup_secondary

0xaddd,	// (0x0001f859) aid_inside_area_window_primary_ParamLimits

0xaddd,	// (0x0001f859) aid_inside_area_window_primary

0x30b3,	// (0x00017b2f) ai2_news_ticker_pane

0x30bb,	// (0x00017b37) aid_size_cell_ai1_link_ParamLimits

0x30bb,	// (0x00017b37) aid_size_cell_ai1_link

0x30d5,	// (0x00017b51) popup_ai2_data_window_ParamLimits

0x30d5,	// (0x00017b51) popup_ai2_data_window

0x30f3,	// (0x00017b6f) popup_ai2_link_window_ParamLimits

0x30f3,	// (0x00017b6f) popup_ai2_link_window

0x1741,	// (0x000161bd) bg_popup_sub_pane_cp4_ParamLimits

0x1741,	// (0x000161bd) bg_popup_sub_pane_cp4

0x3109,	// (0x00017b85) grid_ai2_link_pane_ParamLimits

0x3109,	// (0x00017b85) grid_ai2_link_pane

0x3120,	// (0x00017b9c) popup_ai2_link_window_g1_ParamLimits

0x3120,	// (0x00017b9c) popup_ai2_link_window_g1

0x312c,	// (0x00017ba8) popup_ai2_link_window_g2_ParamLimits

0x312c,	// (0x00017ba8) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00024445) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00024445) popup_ai2_link_window_g

0x313d,	// (0x00017bb9) ai2_mp_button_pane

0x3145,	// (0x00017bc1) ai2_mp_volume_pane

0x1941,	// (0x000163bd) bg_popup_sub_pane_cp5_ParamLimits

0x1941,	// (0x000163bd) bg_popup_sub_pane_cp5

0x314d,	// (0x00017bc9) heading_ai2_gene_pane_ParamLimits

0x314d,	// (0x00017bc9) heading_ai2_gene_pane

0x3159,	// (0x00017bd5) list_ai2_gene_pane_ParamLimits

0x3159,	// (0x00017bd5) list_ai2_gene_pane

0x31a1,	// (0x00017c1d) cell_ai2_link_pane_ParamLimits

0x31a1,	// (0x00017c1d) cell_ai2_link_pane

0x31b7,	// (0x00017c33) cell_ai2_link_pane_g1

0xb894,	// (0x00020310) grid_highlight_pane_cp7

0xea7f,	// (0x000234fb) ai2_mp_volume_pane_g1

0x328a,	// (0x00017d06) ai2_mp_volume_pane_g2

0x31ff,	// (0x00017c7b) list_ai2_gene_pane_t1

0x3292,	// (0x00017d0e) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0002445e) ai2_mp_volume_pane_g

0xea87,	// (0x00023503) volume_small_pane_cp3

0x329a,	// (0x00017d16) aid_size_cell_ai2_button

0x32a2,	// (0x00017d1e) grid_ai2_button_pane

0x32ab,	// (0x00017d27) cell_ai2_button_pane_ParamLimits

0x32ab,	// (0x00017d27) cell_ai2_button_pane

0xb88a,	// (0x00020306) cell_ai2_button_pane_g1

0xb894,	// (0x00020310) grid_highlight_pane_cp8

0x324a,	// (0x00017cc6) ai2_gene_pane_t1_ParamLimits

0x324a,	// (0x00017cc6) ai2_gene_pane_t1

0xa102,	// (0x0001eb7e) aid_height_parent_landscape

0xafe4,	// (0x0001fa60) aid_height_set_list

0x2aed,	// (0x00017569) aid_size_parent

0x2ed4,	// (0x00017950) aid_size_cell_graphic_pane_ParamLimits

0x3169,	// (0x00017be5) popup_ai2_data_window_g1_ParamLimits

0x3169,	// (0x00017be5) popup_ai2_data_window_g1

0x3175,	// (0x00017bf1) ai2_news_ticker_pane_g1

0x317d,	// (0x00017bf9) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0002444a) ai2_news_ticker_pane_g

0x3185,	// (0x00017c01) ai2_news_ticker_pane_t1

0x3193,	// (0x00017c0f) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0002444f) ai2_news_ticker_pane_t

0x31c0,	// (0x00017c3c) heading_ai2_gene_pane_g1

0x31c8,	// (0x00017c44) heading_ai2_gene_pane_t1_ParamLimits

0x31c8,	// (0x00017c44) heading_ai2_gene_pane_t1

0x31dd,	// (0x00017c59) list_highlight_pane_cp6

0x31e5,	// (0x00017c61) ai2_gene_pane_ParamLimits

0x31e5,	// (0x00017c61) ai2_gene_pane

0x320d,	// (0x00017c89) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00024454) list_ai2_gene_pane_t

0x321b,	// (0x00017c97) list_highlight_pane_cp8_ParamLimits

0x321b,	// (0x00017c97) list_highlight_pane_cp8

0x322c,	// (0x00017ca8) ai2_gene_pane_g1_ParamLimits

0x322c,	// (0x00017ca8) ai2_gene_pane_g1

0x323e,	// (0x00017cba) ai2_gene_pane_g2_ParamLimits

0x323e,	// (0x00017cba) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00024459) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00024459) ai2_gene_pane_g

0xbec1,	// (0x0002093d) scroll_pane_cp12

0x89f1,	// (0x0001d46d) control_pane_t3_ParamLimits

0x89f1,	// (0x0001d46d) control_pane_t3

0xa096,	// (0x0001eb12) status_small_pane_g8_ParamLimits

0xa096,	// (0x0001eb12) status_small_pane_g8

0xa246,	// (0x0001ecc2) popup_find_window_ParamLimits

0xa4f7,	// (0x0001ef73) popup_note_image_window_ParamLimits

0x1591,	// (0x0001600d) list_double2_graphic_pane_vc_g1_ParamLimits

0x1591,	// (0x0001600d) list_double2_graphic_pane_vc_g1

0xd8c5,	// (0x00022341) list_double2_graphic_pane_vc_g2_ParamLimits

0xd8c5,	// (0x00022341) list_double2_graphic_pane_vc_g2

0x159d,	// (0x00016019) list_double2_graphic_pane_vc_g3_ParamLimits

0x159d,	// (0x00016019) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00024235) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00024235) list_double2_graphic_pane_vc_g

0x15a9,	// (0x00016025) list_double2_graphic_pane_vc_t1_ParamLimits

0x15a9,	// (0x00016025) list_double2_graphic_pane_vc_t1

0xd8c5,	// (0x00022341) list_single_heading_pane_vc_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_heading_pane_vc_g1

0x159d,	// (0x00016019) list_single_heading_pane_vc_g2_ParamLimits

0x159d,	// (0x00016019) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_heading_pane_vc_g

0x1663,	// (0x000160df) list_single_heading_pane_vc_t1_ParamLimits

0x1663,	// (0x000160df) list_single_heading_pane_vc_t1

0x167b,	// (0x000160f7) list_single_heading_pane_vc_t2_ParamLimits

0x167b,	// (0x000160f7) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00024256) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00024256) list_single_heading_pane_vc_t

0x168d,	// (0x00016109) list_setting_number_pane_vc_g1_ParamLimits

0x168d,	// (0x00016109) list_setting_number_pane_vc_g1

0x1699,	// (0x00016115) list_setting_number_pane_vc_g2_ParamLimits

0x1699,	// (0x00016115) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0002425b) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0002425b) list_setting_number_pane_vc_g

0x16a5,	// (0x00016121) list_setting_number_pane_vc_t1_ParamLimits

0x16a5,	// (0x00016121) list_setting_number_pane_vc_t1

0x16b9,	// (0x00016135) list_setting_number_pane_vc_t2_ParamLimits

0x16b9,	// (0x00016135) list_setting_number_pane_vc_t2

0x16d5,	// (0x00016151) list_setting_number_pane_vc_t3_ParamLimits

0x16d5,	// (0x00016151) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x00024260) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x00024260) list_setting_number_pane_vc_t

0x1703,	// (0x0001617f) set_value_pane_vc_ParamLimits

0x1703,	// (0x0001617f) set_value_pane_vc

0x2d0e,	// (0x0001778a) list_double2_graphic_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double2_graphic_pane_vc

0x2d0e,	// (0x0001778a) list_double2_large_graphic_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double2_large_graphic_pane_vc

0x2d0e,	// (0x0001778a) list_double2_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double2_pane_vc

0x2d0e,	// (0x0001778a) list_double_graphic_heading_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_graphic_heading_pane_vc

0x2d0e,	// (0x0001778a) list_double_graphic_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_graphic_pane_vc

0x2d0e,	// (0x0001778a) list_double_heading_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_heading_pane_vc

0x2d22,	// (0x0001779e) list_double_large_graphic_pane_vc_ParamLimits

0x2d22,	// (0x0001779e) list_double_large_graphic_pane_vc

0x2d0e,	// (0x0001778a) list_double_number_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_number_pane_vc

0x2d0e,	// (0x0001778a) list_double_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_pane_vc

0x2d0e,	// (0x0001778a) list_double_time_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_double_time_pane_vc

0x2d0e,	// (0x0001778a) list_setting_number_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_setting_number_pane_vc

0x2d0e,	// (0x0001778a) list_setting_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_setting_pane_vc

0x2d0e,	// (0x0001778a) list_single_graphic_heading_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_single_graphic_heading_pane_vc

0x2d0e,	// (0x0001778a) list_single_heading_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_single_heading_pane_vc

0x2d0e,	// (0x0001778a) list_single_number_heading_pane_vc_ParamLimits

0x2d0e,	// (0x0001778a) list_single_number_heading_pane_vc

0x1591,	// (0x0001600d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1591,	// (0x0001600d) list_double_graphic_heading_pane_vc_g1

0x32de,	// (0x00017d5a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x32de,	// (0x00017d5a) list_double_graphic_heading_pane_vc_g2

0x32ea,	// (0x00017d66) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x32ea,	// (0x00017d66) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x00024465) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x00024465) list_double_graphic_heading_pane_vc_g

0x32f6,	// (0x00017d72) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x32f6,	// (0x00017d72) list_double_graphic_heading_pane_vc_t1

0x330c,	// (0x00017d88) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x330c,	// (0x00017d88) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0002446c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0002446c) list_double_graphic_heading_pane_vc_t

0x168d,	// (0x00016109) list_setting_pane_vc_g1_ParamLimits

0x168d,	// (0x00016109) list_setting_pane_vc_g1

0x1699,	// (0x00016115) list_setting_pane_vc_g2_ParamLimits

0x1699,	// (0x00016115) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0002425b) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0002425b) list_setting_pane_vc_g

0x3552,	// (0x00017fce) list_setting_pane_vc_t1_ParamLimits

0x3552,	// (0x00017fce) list_setting_pane_vc_t1

0x356e,	// (0x00017fea) list_setting_pane_vc_t2_ParamLimits

0x356e,	// (0x00017fea) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x000244af) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x000244af) list_setting_pane_vc_t

0x1703,	// (0x0001617f) set_value_pane_cp_vc_ParamLimits

0x1703,	// (0x0001617f) set_value_pane_cp_vc

0xd8c5,	// (0x00022341) list_single_number_heading_pane_vc_g1_ParamLimits

0xd8c5,	// (0x00022341) list_single_number_heading_pane_vc_g1

0x159d,	// (0x00016019) list_single_number_heading_pane_vc_g2_ParamLimits

0x159d,	// (0x00016019) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00024044) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00024044) list_single_number_heading_pane_vc_g

0x1663,	// (0x000160df) list_single_number_heading_pane_vc_t1_ParamLimits

0x1663,	// (0x000160df) list_single_number_heading_pane_vc_t1

0x358a,	// (0x00018006) list_single_number_heading_pane_vc_t2_ParamLimits

0x358a,	// (0x00018006) list_single_number_heading_pane_vc_t2

0x359c,	// (0x00018018) list_single_number_heading_pane_vc_t3_ParamLimits

0x359c,	// (0x00018018) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x000244b4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000244b4) list_single_number_heading_pane_vc_t

0x1591,	// (0x0001600d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1591,	// (0x0001600d) list_single_graphic_heading_pane_vc_g1

0xd8c5,	// (0x00022341) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd8c5,	// (0x00022341) list_single_graphic_heading_pane_vc_g4

0x159d,	// (0x00016019) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x159d,	// (0x00016019) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00024235) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00024235) list_single_graphic_heading_pane_vc_g

0x1663,	// (0x000160df) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1663,	// (0x000160df) list_single_graphic_heading_pane_vc_t1

0x35ae,	// (0x0001802a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x35ae,	// (0x0001802a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x000244bb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x000244bb) list_single_graphic_heading_pane_vc_t

0xd8c5,	// (0x00022341) list_double2_pane_vc_g1_ParamLimits

0xd8c5,	// (0x00022341) list_double2_pane_vc_g1

0x159d,	// (0x00016019) list_double2_pane_vc_g2_ParamLimits

0x159d,	// (0x00016019) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00024044) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00024044) list_double2_pane_vc_g

0x35c0,	// (0x0001803c) list_double2_pane_vc_t1_ParamLimits

0x35c0,	// (0x0001803c) list_double2_pane_vc_t1

0x35d6,	// (0x00018052) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x35d6,	// (0x00018052) list_double2_large_graphic_pane_vc_g1

0xd8c5,	// (0x00022341) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd8c5,	// (0x00022341) list_double2_large_graphic_pane_vc_g2

0x159d,	// (0x00016019) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x159d,	// (0x00016019) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00024061) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00024061) list_double2_large_graphic_pane_vc_g

0x35e2,	// (0x0001805e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x35e2,	// (0x0001805e) list_double2_large_graphic_pane_vc_t1

0x35f8,	// (0x00018074) list_double_time_pane_vc_g1_ParamLimits

0x35f8,	// (0x00018074) list_double_time_pane_vc_g1

0x3604,	// (0x00018080) list_double_time_pane_vc_g2_ParamLimits

0x3604,	// (0x00018080) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x000244c0) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x000244c0) list_double_time_pane_vc_g

0x3610,	// (0x0001808c) list_double_time_pane_vc_t1_ParamLimits

0x3610,	// (0x0001808c) list_double_time_pane_vc_t1

0x3640,	// (0x000180bc) list_double_time_pane_vc_t2_ParamLimits

0x3640,	// (0x000180bc) list_double_time_pane_vc_t2

0x3669,	// (0x000180e5) list_double_time_pane_vc_t3_ParamLimits

0x3669,	// (0x000180e5) list_double_time_pane_vc_t3

0x367b,	// (0x000180f7) list_double_time_pane_vc_t4_ParamLimits

0x367b,	// (0x000180f7) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x000244c5) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x000244c5) list_double_time_pane_vc_t

0xd8c5,	// (0x00022341) list_double_pane_vc_g1_ParamLimits

0xd8c5,	// (0x00022341) list_double_pane_vc_g1

0x159d,	// (0x00016019) list_double_pane_vc_g2_ParamLimits

0x159d,	// (0x00016019) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00024044) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00024044) list_double_pane_vc_g

0x36a0,	// (0x0001811c) list_double_pane_vc_t1_ParamLimits

0x36a0,	// (0x0001811c) list_double_pane_vc_t1

0x36b4,	// (0x00018130) list_double_pane_vc_t2_ParamLimits

0x36b4,	// (0x00018130) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x000244ce) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x000244ce) list_double_pane_vc_t

0xd8c5,	// (0x00022341) list_double_number_pane_vc_g1_ParamLimits

0xd8c5,	// (0x00022341) list_double_number_pane_vc_g1

0x159d,	// (0x00016019) list_double_number_pane_vc_g2_ParamLimits

0x159d,	// (0x00016019) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00024044) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00024044) list_double_number_pane_vc_g

0x36ca,	// (0x00018146) list_double_number_pane_vc_t1_ParamLimits

0x36ca,	// (0x00018146) list_double_number_pane_vc_t1

0x36de,	// (0x0001815a) list_double_number_pane_vc_t2_ParamLimits

0x36de,	// (0x0001815a) list_double_number_pane_vc_t2

0x36f2,	// (0x0001816e) list_double_number_pane_vc_t3_ParamLimits

0x36f2,	// (0x0001816e) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x000244d3) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x000244d3) list_double_number_pane_vc_t

0x3708,	// (0x00018184) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3708,	// (0x00018184) list_double_large_graphic_pane_vc_g1

0x3730,	// (0x000181ac) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3730,	// (0x000181ac) list_double_large_graphic_pane_vc_g2

0x3744,	// (0x000181c0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3744,	// (0x000181c0) list_double_large_graphic_pane_vc_g3

0x3753,	// (0x000181cf) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3753,	// (0x000181cf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x000244da) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x000244da) list_double_large_graphic_pane_vc_g

0x3763,	// (0x000181df) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3763,	// (0x000181df) list_double_large_graphic_pane_vc_t1

0x3785,	// (0x00018201) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3785,	// (0x00018201) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x000244e3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x000244e3) list_double_large_graphic_pane_vc_t

0x32de,	// (0x00017d5a) list_double_heading_pane_vc_g1_ParamLimits

0x32de,	// (0x00017d5a) list_double_heading_pane_vc_g1

0x32ea,	// (0x00017d66) list_double_heading_pane_vc_g2_ParamLimits

0x32ea,	// (0x00017d66) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x000244e8) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x000244e8) list_double_heading_pane_vc_g

0x37a5,	// (0x00018221) list_double_heading_pane_vc_t1_ParamLimits

0x37a5,	// (0x00018221) list_double_heading_pane_vc_t1

0x1663,	// (0x000160df) list_double_heading_pane_vc_t2_ParamLimits

0x1663,	// (0x000160df) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x000244ed) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x000244ed) list_double_heading_pane_vc_t

0x37b7,	// (0x00018233) list_double_graphic_pane_vc_g1_ParamLimits

0x37b7,	// (0x00018233) list_double_graphic_pane_vc_g1

0x37c3,	// (0x0001823f) list_double_graphic_pane_vc_g2_ParamLimits

0x37c3,	// (0x0001823f) list_double_graphic_pane_vc_g2

0xd8c5,	// (0x00022341) list_double_graphic_pane_vc_g3_ParamLimits

0xd8c5,	// (0x00022341) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x000244f2) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x000244f2) list_double_graphic_pane_vc_g

0x37e0,	// (0x0001825c) list_double_graphic_pane_vc_t1_ParamLimits

0x37e0,	// (0x0001825c) list_double_graphic_pane_vc_t1

0x380a,	// (0x00018286) list_double_graphic_pane_vc_t2_ParamLimits

0x380a,	// (0x00018286) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x000244fb) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x000244fb) list_double_graphic_pane_vc_t

0xd67d,	// (0x000220f9) aid_size_cell_fastswap

0x86b4,	// (0x0001d130) aid_size_cell_touch_ParamLimits

0x86b4,	// (0x0001d130) aid_size_cell_touch

0xd804,	// (0x00022280) popup_fast_swap_wide_window_ParamLimits

0xd804,	// (0x00022280) popup_fast_swap_wide_window

0x8872,	// (0x0001d2ee) touch_pane_ParamLimits

0x8872,	// (0x0001d2ee) touch_pane

0xbf46,	// (0x000209c2) button_value_adjust_pane_cp2

0xbf4e,	// (0x000209ca) button_value_adjust_pane_cp4

0xbf56,	// (0x000209d2) form_field_data_pane_cp2

0x9a42,	// (0x0001e4be) form_field_data_wide_pane_cp2

0xde80,	// (0x000228fc) bg_scroll_pane_ParamLimits

0xe49f,	// (0x00022f1b) scroll_handle_pane_ParamLimits

0xe4b3,	// (0x00022f2f) scroll_sc2_down_pane_ParamLimits

0xe4b3,	// (0x00022f2f) scroll_sc2_down_pane

0xdeb1,	// (0x0002292d) scroll_sc2_up_pane_ParamLimits

0xdeb1,	// (0x0002292d) scroll_sc2_up_pane

0xb3de,	// (0x0001fe5a) grid_wheel_folder_pane_g1_ParamLimits

0xb3de,	// (0x0001fe5a) grid_wheel_folder_pane_g1

0xe67d,	// (0x000230f9) clock_nsta_pane_cp2_ParamLimits

0xe67d,	// (0x000230f9) clock_nsta_pane_cp2

0x0aa4,	// (0x00015520) listscroll_midp_pane_ParamLimits

0x9f81,	// (0x0001e9fd) midp_canvas_pane

0x0a10,	// (0x0001548c) nsta_clock_indic_pane

0x0a6e,	// (0x000154ea) listscroll_form_pane_vc

0x0a92,	// (0x0001550e) listscroll_set_pane_vc_ParamLimits

0x0a92,	// (0x0001550e) listscroll_set_pane_vc

0xa973,	// (0x0001f3ef) clock_nsta_pane

0xa99d,	// (0x0001f419) indicator_nsta_pane

0x152b,	// (0x00015fa7) bg_popup_sub_pane_cp2_ParamLimits

0x153f,	// (0x00015fbb) find_pane_cp2_ParamLimits

0x153f,	// (0x00015fbb) find_pane_cp2

0x1555,	// (0x00015fd1) grid_toobar_pane_ParamLimits

0x1715,	// (0x00016191) list_form_gen_pane_vc_ParamLimits

0x1715,	// (0x00016191) list_form_gen_pane_vc

0x172b,	// (0x000161a7) scroll_pane_cp8_vc_ParamLimits

0x172b,	// (0x000161a7) scroll_pane_cp8_vc

0x17a7,	// (0x00016223) data_form_wide_pane_vc_ParamLimits

0x17a7,	// (0x00016223) data_form_wide_pane_vc

0x17b3,	// (0x0001622f) form_field_data_wide_pane_vc_g1

0x17bb,	// (0x00016237) form_field_data_wide_pane_vc_t1_ParamLimits

0x17bb,	// (0x00016237) form_field_data_wide_pane_vc_t1

0xd903,	// (0x0002237f) input_focus_pane_cp6_vc_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_cp6_vc

0xad3a,	// (0x0001f7b6) list_midp_pane_ParamLimits

0x2f40,	// (0x000179bc) scroll_pane_cp16_ParamLimits

0x2f40,	// (0x000179bc) scroll_pane_cp16

0x1b46,	// (0x000165c2) button_value_adjust_pane_ParamLimits

0x1b46,	// (0x000165c2) button_value_adjust_pane

0xaff5,	// (0x0001fa71) button_value_adjust_pane_cp6_ParamLimits

0xaff5,	// (0x0001fa71) button_value_adjust_pane_cp6

0xb137,	// (0x0001fbb3) settings_code_pane_cp_ParamLimits

0xb137,	// (0x0001fbb3) settings_code_pane_cp

0xb88a,	// (0x00020306) cell_touch_pane_g1

0xb88a,	// (0x00020306) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002417a) cell_touch_pane_g

0xb2b7,	// (0x0001fd33) cell_touch_pane_cp_ParamLimits

0xb2b7,	// (0x0001fd33) cell_touch_pane_cp

0xb2d3,	// (0x0001fd4f) cell_touch_pane_ParamLimits

0xb2d3,	// (0x0001fd4f) cell_touch_pane

0xb88a,	// (0x00020306) scroll_sc2_down_pane_g1

0xb88a,	// (0x00020306) scroll_sc2_up_pane_g1

0xb894,	// (0x00020310) bg_set_opt_pane_cp4_vc

0x332a,	// (0x00017da6) list_set_graphic_pane_vc_g1_ParamLimits

0x332a,	// (0x00017da6) list_set_graphic_pane_vc_g1

0xe47b,	// (0x00022ef7) list_set_graphic_pane_vc_g2_ParamLimits

0xe47b,	// (0x00022ef7) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x00024471) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x00024471) list_set_graphic_pane_vc_g

0x3336,	// (0x00017db2) text_primary_small_cp13_vc_ParamLimits

0x3336,	// (0x00017db2) text_primary_small_cp13_vc

0x334e,	// (0x00017dca) list_set_graphic_pane_vc_ParamLimits

0x334e,	// (0x00017dca) list_set_graphic_pane_vc

0xb894,	// (0x00020310) input_focus_pane_cp2_vc

0xb88a,	// (0x00020306) setting_code_pane_vc_g1

0xb913,	// (0x0002038f) setting_code_pane_vc_t1

0x3363,	// (0x00017ddf) set_text_pane_vc_t1_ParamLimits

0x3363,	// (0x00017ddf) set_text_pane_vc_t1

0xb894,	// (0x00020310) input_focus_pane_cp1_vc

0x3381,	// (0x00017dfd) list_set_text_pane_vc

0xb88a,	// (0x00020306) setting_text_pane_vc_g1

0xb894,	// (0x00020310) bg_set_opt_pane_cp2_vc

0xb90a,	// (0x00020386) setting_slider_graphic_pane_vc_g1

0x338b,	// (0x00017e07) setting_slider_graphic_pane_vc_t1

0x339d,	// (0x00017e19) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x00024476) setting_slider_graphic_pane_vc_t

0x33af,	// (0x00017e2b) slider_set_pane_cp_vc

0x33b9,	// (0x00017e35) slider_set_pane_vc_g1

0x33c2,	// (0x00017e3e) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0002447b) slider_set_pane_vc_g

0xd9cc,	// (0x00022448) set_opt_bg_pane_g1_copy1

0xd9d4,	// (0x00022450) set_opt_bg_pane_g2_copy1

0x33ee,	// (0x00017e6a) set_opt_bg_pane_g3_copy1

0xd9e4,	// (0x00022460) set_opt_bg_pane_g4_copy1

0xd9ec,	// (0x00022468) set_opt_bg_pane_g5_copy1

0xd9f4,	// (0x00022470) set_opt_bg_pane_g6_copy1

0x33f8,	// (0x00017e74) set_opt_bg_pane_g7_copy1

0x3402,	// (0x00017e7e) set_opt_bg_pane_g8_copy1

0x340c,	// (0x00017e88) set_opt_bg_pane_g9_copy1

0xb894,	// (0x00020310) bg_set_opt_pane_cp_vc

0x3416,	// (0x00017e92) setting_slider_pane_vc_t1

0x3425,	// (0x00017ea1) setting_slider_pane_vc_t2

0x3437,	// (0x00017eb3) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0002448a) setting_slider_pane_vc_t

0x3449,	// (0x00017ec5) slider_set_pane_vc

0xe8e2,	// (0x0002335e) volume_set_pane_vc_g1

0xea90,	// (0x0002350c) volume_set_pane_vc_g2

0xea99,	// (0x00023515) volume_set_pane_vc_g3

0xeaa2,	// (0x0002351e) volume_set_pane_vc_g4

0xeaab,	// (0x00023527) volume_set_pane_vc_g5

0xeab4,	// (0x00023530) volume_set_pane_vc_g6

0xeabd,	// (0x00023539) volume_set_pane_vc_g7

0xeac6,	// (0x00023542) volume_set_pane_vc_g8

0xeacf,	// (0x0002354b) volume_set_pane_vc_g9

0xead8,	// (0x00023554) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x00024491) volume_set_pane_vc_g

0x3453,	// (0x00017ecf) volume_set_pane_vc

0x345d,	// (0x00017ed9) button_value_adjust_pane_cp1_vc

0x3467,	// (0x00017ee3) list_highlight_pane_cp2_vc

0x3470,	// (0x00017eec) list_set_pane_vc_ParamLimits

0x3470,	// (0x00017eec) list_set_pane_vc

0x34e0,	// (0x00017f5c) main_pane_set_vc_t1_ParamLimits

0x34e0,	// (0x00017f5c) main_pane_set_vc_t1

0x34f5,	// (0x00017f71) main_pane_set_vc_t2_ParamLimits

0x34f5,	// (0x00017f71) main_pane_set_vc_t2

0x3507,	// (0x00017f83) main_pane_set_vc_t3_ParamLimits

0x3507,	// (0x00017f83) main_pane_set_vc_t3

0x351b,	// (0x00017f97) main_pane_set_vc_t4_ParamLimits

0x351b,	// (0x00017f97) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x000244a6) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x000244a6) main_pane_set_vc_t

0x352f,	// (0x00017fab) setting_code_pane_vc_ParamLimits

0x352f,	// (0x00017fab) setting_code_pane_vc

0x3540,	// (0x00017fbc) setting_slider_graphic_pane_vc

0x3540,	// (0x00017fbc) setting_slider_pane_vc

0x3540,	// (0x00017fbc) setting_text_pane_vc

0x3540,	// (0x00017fbc) setting_volume_pane_vc

0x354a,	// (0x00017fc6) scroll_pane_cp121_vc

0xbf34,	// (0x000209b0) set_content_pane_vc

0x3828,	// (0x000182a4) button_value_adjust_pane_g1

0x3831,	// (0x000182ad) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00024500) button_value_adjust_pane_g

0x383a,	// (0x000182b6) form_field_slider_wide_pane_vc_t1_ParamLimits

0x383a,	// (0x000182b6) form_field_slider_wide_pane_vc_t1

0x384c,	// (0x000182c8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x384c,	// (0x000182c8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00024505) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00024505) form_field_slider_wide_pane_vc_t

0xb8ee,	// (0x0002036a) input_focus_pane_cp10_vc_ParamLimits

0xb8ee,	// (0x0002036a) input_focus_pane_cp10_vc

0x3878,	// (0x000182f4) slider_cont_pane_cp1_vc_ParamLimits

0x3878,	// (0x000182f4) slider_cont_pane_cp1_vc

0x388a,	// (0x00018306) slider_form_pane_g1_cp2

0x33c2,	// (0x00017e3e) slider_form_pane_g2_cp2

0x38b7,	// (0x00018333) form_field_slider_pane_vc_t3

0x38c5,	// (0x00018341) form_field_slider_pane_vc_t4

0x38d3,	// (0x0001834f) slider_form_pane_vc_ParamLimits

0x38d3,	// (0x0001834f) slider_form_pane_vc

0x38e0,	// (0x0001835c) form_field_slider_pane_vc_t1_ParamLimits

0x38e0,	// (0x0001835c) form_field_slider_pane_vc_t1

0x384c,	// (0x000182c8) form_field_slider_pane_vc_t2_ParamLimits

0x384c,	// (0x000182c8) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00024517) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00024517) form_field_slider_pane_vc_t

0xb8ee,	// (0x0002036a) input_focus_pane_cp9_vc_ParamLimits

0xb8ee,	// (0x0002036a) input_focus_pane_cp9_vc

0x38f6,	// (0x00018372) slider_cont_pane_vc_ParamLimits

0x38f6,	// (0x00018372) slider_cont_pane_vc

0x390a,	// (0x00018386) list_form_graphic_pane_cp_vc_ParamLimits

0x390a,	// (0x00018386) list_form_graphic_pane_cp_vc

0x17b3,	// (0x0001622f) form_field_popup_wide_pane_vc_g1

0x391f,	// (0x0001839b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x391f,	// (0x0001839b) form_field_popup_wide_pane_vc_t1

0xd903,	// (0x0002237f) input_focus_pane_cp8_vc_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_cp8_vc

0x3964,	// (0x000183e0) list_form_wide_pane_vc_ParamLimits

0x3964,	// (0x000183e0) list_form_wide_pane_vc

0x3970,	// (0x000183ec) list_form_graphic_pane_vc_g1

0x3978,	// (0x000183f4) list_form_graphic_pane_vc_t1_ParamLimits

0x3978,	// (0x000183f4) list_form_graphic_pane_vc_t1

0xb8fc,	// (0x00020378) list_highlight_pane_cp5_vc_ParamLimits

0xb8fc,	// (0x00020378) list_highlight_pane_cp5_vc

0x3994,	// (0x00018410) list_form_graphic_pane_vc_ParamLimits

0x3994,	// (0x00018410) list_form_graphic_pane_vc

0x17b3,	// (0x0001622f) form_field_popup_pane_vc_g1

0x39aa,	// (0x00018426) form_field_popup_pane_vc_t1_ParamLimits

0x39aa,	// (0x00018426) form_field_popup_pane_vc_t1

0xd903,	// (0x0002237f) input_focus_pane_cp7_vc_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_cp7_vc

0x39c1,	// (0x0001843d) list_form_pane_vc_ParamLimits

0x39c1,	// (0x0001843d) list_form_pane_vc

0x39cd,	// (0x00018449) data_form_pane_vc_t1_ParamLimits

0x39cd,	// (0x00018449) data_form_pane_vc_t1

0xd9cc,	// (0x00022448) input_focus_pane_vc_g1

0xd9d4,	// (0x00022450) input_focus_pane_vc_g2

0xd9dc,	// (0x00022458) input_focus_pane_vc_g3

0xd9e4,	// (0x00022460) input_focus_pane_vc_g4

0xd9ec,	// (0x00022468) input_focus_pane_vc_g5

0xd9f4,	// (0x00022470) input_focus_pane_vc_g6

0xd9fc,	// (0x00022478) input_focus_pane_vc_g7

0xda04,	// (0x00022480) input_focus_pane_vc_g8

0xda0c,	// (0x00022488) input_focus_pane_vc_g9

0xb88a,	// (0x00020306) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00024103) input_focus_pane_vc_g

0x17a7,	// (0x00016223) data_form_pane_vc_ParamLimits

0x17a7,	// (0x00016223) data_form_pane_vc

0x17b3,	// (0x0001622f) form_field_data_pane_vc_g1

0x39ea,	// (0x00018466) form_field_data_pane_vc_t1_ParamLimits

0x39ea,	// (0x00018466) form_field_data_pane_vc_t1

0xd903,	// (0x0002237f) input_focus_pane_vc_ParamLimits

0xd903,	// (0x0002237f) input_focus_pane_vc

0x3a04,	// (0x00018480) button_value_adjust_pane_cp3_vc

0x3a0c,	// (0x00018488) button_value_adjust_pane_cp5_vc

0x3a14,	// (0x00018490) form_field_data_pane_vc_ParamLimits

0x3a14,	// (0x00018490) form_field_data_pane_vc

0x3a2f,	// (0x000184ab) form_field_data_pane_vc_cp2

0x3a37,	// (0x000184b3) form_field_data_wide_pane_vc_ParamLimits

0x3a37,	// (0x000184b3) form_field_data_wide_pane_vc

0x3a51,	// (0x000184cd) form_field_data_wide_pane_vc_cp2

0x3a59,	// (0x000184d5) form_field_popup_pane_vc_ParamLimits

0x3a59,	// (0x000184d5) form_field_popup_pane_vc

0x3a74,	// (0x000184f0) form_field_popup_wide_pane_vc_ParamLimits

0x3a74,	// (0x000184f0) form_field_popup_wide_pane_vc

0x3a8e,	// (0x0001850a) form_field_slider_pane_vc_ParamLimits

0x3a8e,	// (0x0001850a) form_field_slider_pane_vc

0x3aa1,	// (0x0001851d) form_field_slider_wide_pane_vc_ParamLimits

0x3aa1,	// (0x0001851d) form_field_slider_wide_pane_vc

0xb2f1,	// (0x0001fd6d) grid_touch_1_pane_ParamLimits

0xb2f1,	// (0x0001fd6d) grid_touch_1_pane

0xb305,	// (0x0001fd81) grid_touch_2_pane_ParamLimits

0xb305,	// (0x0001fd81) grid_touch_2_pane

0x3b72,	// (0x000185ee) touch_pane_g1_ParamLimits

0x3b72,	// (0x000185ee) touch_pane_g1

0x3ada,	// (0x00018556) cell_app_pane_cp_wide_ParamLimits

0x3ada,	// (0x00018556) cell_app_pane_cp_wide

0x3aeb,	// (0x00018567) grid_popup_fast_wide_pane_ParamLimits

0x3aeb,	// (0x00018567) grid_popup_fast_wide_pane

0x3aff,	// (0x0001857b) scroll_pane_cp19_ParamLimits

0x3aff,	// (0x0001857b) scroll_pane_cp19

0xb894,	// (0x00020310) bg_popup_window_pane_cp20

0x3b13,	// (0x0001858f) listscroll_popup_fast_wide_pane

0xe487,	// (0x00022f03) grid_indicator_nsta_pane

0x3b1b,	// (0x00018597) clock_nsta_pane_g1

0x3b24,	// (0x000185a0) clock_nsta_pane_t1

0xb331,	// (0x0001fdad) cell_indicator_nsta_pane_ParamLimits

0xb331,	// (0x0001fdad) cell_indicator_nsta_pane

0x3b72,	// (0x000185ee) cell_indicator_nsta_pane_g1

0xb34a,	// (0x0001fdc6) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00024528) cell_indicator_nsta_pane_g

0x3b96,	// (0x00018612) clock_nsta_pane_cp

0x3b9e,	// (0x0001861a) indicator_nsta_pane_cp

0x3ba7,	// (0x00018623) nsta_clock_indic_pane_g1

0xb952,	// (0x000203ce) grid_indicator_pane

0xdfa3,	// (0x00022a1f) scroll_pane_cp29

0xe5c9,	// (0x00023045) indicator_nsta_pane_cp2_ParamLimits

0xe5c9,	// (0x00023045) indicator_nsta_pane_cp2

0xb8fc,	// (0x00020378) main_apps_wheel_pane

0x19c9,	// (0x00016445) form_midp_field_text_pane_ParamLimits

0x1b18,	// (0x00016594) scroll_bar_cp050_ParamLimits

0x3c10,	// (0x0001868c) cell_indicator_pane_ParamLimits

0x3c10,	// (0x0001868c) cell_indicator_pane

0x3c28,	// (0x000186a4) cell_indicator_pane_g1

0xb360,	// (0x0001fddc) grid_wheel_folder_pane_ParamLimits

0xb360,	// (0x0001fddc) grid_wheel_folder_pane

0xb36e,	// (0x0001fdea) list_wheel_apps_pane_ParamLimits

0xb36e,	// (0x0001fdea) list_wheel_apps_pane

0xb37c,	// (0x0001fdf8) main_apps_wheel_pane_g1_ParamLimits

0xb37c,	// (0x0001fdf8) main_apps_wheel_pane_g1

0xb38c,	// (0x0001fe08) main_apps_wheel_pane_g2_ParamLimits

0xb38c,	// (0x0001fe08) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00024544) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00024544) main_apps_wheel_pane_g

0xb39c,	// (0x0001fe18) main_apps_wheel_pane_t1_ParamLimits

0xb39c,	// (0x0001fe18) main_apps_wheel_pane_t1

0xb3b4,	// (0x0001fe30) list_wheel_apps_pane_g1

0xb3bc,	// (0x0001fe38) list_wheel_apps_pane_g2

0xb3c4,	// (0x0001fe40) list_wheel_apps_pane_g3

0xb3cc,	// (0x0001fe48) list_wheel_apps_pane_g4

0xb3d4,	// (0x0001fe50) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00024549) list_wheel_apps_pane_g

0xe323,	// (0x00022d9f) navi_icon_text_pane

0xa865,	// (0x0001f2e1) aid_fill_nsta

0xb3f1,	// (0x0001fe6d) navi_icon_text_pane_g1

0xb3fd,	// (0x0001fe79) navi_icon_text_pane_t1

0x9eda,	// (0x0001e956) list_set_graphic_pane_t1_ParamLimits

0x9eda,	// (0x0001e956) list_set_graphic_pane_t1

0x2269,	// (0x00016ce5) popup_midp_note_alarm_window_t6_ParamLimits

0x2269,	// (0x00016ce5) popup_midp_note_alarm_window_t6

0x227b,	// (0x00016cf7) popup_midp_note_alarm_window_t7_ParamLimits

0x227b,	// (0x00016cf7) popup_midp_note_alarm_window_t7

0x228d,	// (0x00016d09) popup_midp_note_alarm_window_t8_ParamLimits

0x228d,	// (0x00016d09) popup_midp_note_alarm_window_t8

0x229f,	// (0x00016d1b) popup_midp_note_alarm_window_t9_ParamLimits

0x229f,	// (0x00016d1b) popup_midp_note_alarm_window_t9

0x22b1,	// (0x00016d2d) popup_midp_note_alarm_window_t10_ParamLimits

0x22b1,	// (0x00016d2d) popup_midp_note_alarm_window_t10

0x22c3,	// (0x00016d3f) popup_midp_note_alarm_window_t11_ParamLimits

0x22c3,	// (0x00016d3f) popup_midp_note_alarm_window_t11

0x22d5,	// (0x00016d51) scroll_pane_cp17_ParamLimits

0x22d5,	// (0x00016d51) scroll_pane_cp17

0xe8e2,	// (0x0002335e) volume_small_pane_cp_g1

0xeae1,	// (0x0002355d) volume_small_pane_cp_g2

0xeaea,	// (0x00023566) volume_small_pane_cp_g3

0xeaf3,	// (0x0002356f) volume_small_pane_cp_g4

0xeafc,	// (0x00023578) volume_small_pane_cp_g5

0xeb05,	// (0x00023581) volume_small_pane_cp_g6

0xeb0e,	// (0x0002358a) volume_small_pane_cp_g7

0xeb17,	// (0x00023593) volume_small_pane_cp_g8

0xeb20,	// (0x0002359c) volume_small_pane_cp_g9

0xeb29,	// (0x000235a5) volume_small_pane_cp_g10

0x07ef,	// (0x0001526b) midp_ticker_pane_g1_ParamLimits

0x07fb,	// (0x00015277) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000241cf) midp_ticker_pane_g_ParamLimits

0xa018,	// (0x0001ea94) midp_ticker_pane_t1_ParamLimits

0xa889,	// (0x0001f305) aid_fill_nsta_2

0x1b04,	// (0x00016580) list_form2_midp_pane

0x2cc9,	// (0x00017745) midp_editing_number_pane_ParamLimits

0x2cd8,	// (0x00017754) midp_ticker_pane_ParamLimits

0x3d1b,	// (0x00018797) form2_midp_field_pane

0x3d3f,	// (0x000187bb) scroll_pane_cp51

0x3d5f,	// (0x000187db) form2_midp_button_pane_ParamLimits

0x3d5f,	// (0x000187db) form2_midp_button_pane

0x3d71,	// (0x000187ed) form2_midp_content_pane_ParamLimits

0x3d71,	// (0x000187ed) form2_midp_content_pane

0x3d8b,	// (0x00018807) form2_midp_field_choice_group_pane

0x3d93,	// (0x0001880f) form2_midp_field_pane_g1

0x3d9b,	// (0x00018817) form2_midp_field_pane_g2

0x3da3,	// (0x0001881f) form2_midp_field_pane_g3

0x3dab,	// (0x00018827) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0002456e) form2_midp_field_pane_g

0x3db3,	// (0x0001882f) form2_midp_gauge_slider_pane

0x3dbb,	// (0x00018837) form2_midp_gauge_wait_pane

0x3dc3,	// (0x0001883f) form2_midp_image_pane_ParamLimits

0x3dc3,	// (0x0001883f) form2_midp_image_pane

0x3dde,	// (0x0001885a) form2_midp_label_pane_ParamLimits

0x3dde,	// (0x0001885a) form2_midp_label_pane

0xb42b,	// (0x0001fea7) form2_midp_label_pane_cp_ParamLimits

0xb42b,	// (0x0001fea7) form2_midp_label_pane_cp

0x3e1e,	// (0x0001889a) form2_midp_string_pane_ParamLimits

0x3e1e,	// (0x0001889a) form2_midp_string_pane

0xb44c,	// (0x0001fec8) form2_midp_text_pane_ParamLimits

0xb44c,	// (0x0001fec8) form2_midp_text_pane

0x3e51,	// (0x000188cd) form2_midp_time_pane

0x3e61,	// (0x000188dd) input_focus_pane_cp51_ParamLimits

0x3e61,	// (0x000188dd) input_focus_pane_cp51

0x3e79,	// (0x000188f5) form2_midp_label_pane_t1_ParamLimits

0x3e79,	// (0x000188f5) form2_midp_label_pane_t1

0xb46d,	// (0x0001fee9) form2_mdip_text_pane_t1_ParamLimits

0xb46d,	// (0x0001fee9) form2_mdip_text_pane_t1

0x3ee1,	// (0x0001895d) form2_midp_time_pane_t1

0x3efc,	// (0x00018978) form2_midp_gauge_slider_pane_t1

0xb48c,	// (0x0001ff08) form2_midp_gauge_slider_pane_t2

0xb49e,	// (0x0001ff1a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00024577) form2_midp_gauge_slider_pane_t

0x3f32,	// (0x000189ae) form2_midp_slider_pane

0x3f3e,	// (0x000189ba) form2_midp_gauge_wait_pane_t1

0x3f4c,	// (0x000189c8) form2_midp_wait_pane_ParamLimits

0x3f4c,	// (0x000189c8) form2_midp_wait_pane

0x17fa,	// (0x00016276) list_single_2graphic_pane_cp4_ParamLimits

0x17fa,	// (0x00016276) list_single_2graphic_pane_cp4

0x3f77,	// (0x000189f3) list_single_midp_graphic_pane_cp_ParamLimits

0x3f77,	// (0x000189f3) list_single_midp_graphic_pane_cp

0xb894,	// (0x00020310) list_highlight_pane_cp20

0x3f9b,	// (0x00018a17) list_single_2graphic_pane_g1_cp4

0x31c0,	// (0x00017c3c) list_single_2graphic_pane_g2_cp4

0x3fa3,	// (0x00018a1f) list_single_2graphic_pane_t1_cp4

0xb8fc,	// (0x00020378) list_highlight_pane_cp21

0x3fb2,	// (0x00018a2e) list_single_midp_graphic_pane_g4_cp

0x3fc1,	// (0x00018a3d) list_single_midp_graphic_pane_t1_cp

0xb4b0,	// (0x0001ff2c) form2_mdip_string_pane_t1_ParamLimits

0xb4b0,	// (0x0001ff2c) form2_mdip_string_pane_t1

0xb894,	// (0x00020310) bg_wml_button_pane_cp2

0xb88a,	// (0x00020306) form2_midp_image_pane_g1

0xbede,	// (0x0002095a) list_double_large_graphic_pane_g5_ParamLimits

0xbede,	// (0x0002095a) list_double_large_graphic_pane_g5

0x0aa4,	// (0x00015520) midp_form_pane_ParamLimits

0xb8fc,	// (0x00020378) main_apps_wheel_pane_ParamLimits

0xa57d,	// (0x0001eff9) popup_preview_window_ParamLimits

0xa57d,	// (0x0001eff9) popup_preview_window

0x1074,	// (0x00015af0) popup_touch_info_window_ParamLimits

0x1074,	// (0x00015af0) popup_touch_info_window

0x1096,	// (0x00015b12) popup_touch_menu_window_ParamLimits

0x1096,	// (0x00015b12) popup_touch_menu_window

0xb880,	// (0x000202fc) bg_popup_sub_pane_cp6

0x407b,	// (0x00018af7) list_touch_menu_pane

0x4083,	// (0x00018aff) list_single_touch_menu_pane_ParamLimits

0x4083,	// (0x00018aff) list_single_touch_menu_pane

0x409b,	// (0x00018b17) list_single_touch_menu_pane_t1

0xb8fc,	// (0x00020378) bg_popup_sub_pane_cp7_ParamLimits

0xb8fc,	// (0x00020378) bg_popup_sub_pane_cp7

0x40a9,	// (0x00018b25) heading_sub_pane

0x40b1,	// (0x00018b2d) list_touch_info_pane_ParamLimits

0x40b1,	// (0x00018b2d) list_touch_info_pane

0x40c0,	// (0x00018b3c) list_single_touch_info_pane_ParamLimits

0x40c0,	// (0x00018b3c) list_single_touch_info_pane

0x40d2,	// (0x00018b4e) list_single_touch_info_pane_t1

0x40e0,	// (0x00018b5c) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00024585) list_single_touch_info_pane_t

0xe473,	// (0x00022eef) bg_popup_heading_pane_cp

0x40ee,	// (0x00018b6a) heading_sub_pane_t1

0x1741,	// (0x000161bd) bg_popup_preview_window_pane_cp_ParamLimits

0x1741,	// (0x000161bd) bg_popup_preview_window_pane_cp

0x40a9,	// (0x00018b25) heading_preview_pane

0x40b1,	// (0x00018b2d) list_preview_pane_ParamLimits

0x40b1,	// (0x00018b2d) list_preview_pane

0x40fc,	// (0x00018b78) popup_preview_window_g1

0x40c0,	// (0x00018b3c) list_single_preview_pane_ParamLimits

0x40c0,	// (0x00018b3c) list_single_preview_pane

0x4104,	// (0x00018b80) list_single_preview_pane_g1

0x410c,	// (0x00018b88) list_single_preview_pane_t1

0x40d2,	// (0x00018b4e) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0002458a) list_single_preview_pane_t

0x411a,	// (0x00018b96) bg_popup_heading_pane_cp2_ParamLimits

0x411a,	// (0x00018b96) bg_popup_heading_pane_cp2

0x4130,	// (0x00018bac) heading_preview_pane_g1

0x4138,	// (0x00018bb4) heading_preview_pane_t1_ParamLimits

0x4138,	// (0x00018bb4) heading_preview_pane_t1

0xb969,	// (0x000203e5) soft_indicator_pane_t1_ParamLimits

0xbe9e,	// (0x0002091a) scroll_pane_ParamLimits

0xde9f,	// (0x0002291b) scroll_sc2_left_pane

0xdea8,	// (0x00022924) scroll_sc2_right_pane

0xdec7,	// (0x00022943) scroll_bg_pane_g1_ParamLimits

0xdedc,	// (0x00022958) scroll_bg_pane_g2_ParamLimits

0xdef4,	// (0x00022970) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002415a) scroll_bg_pane_g_ParamLimits

0xdec7,	// (0x00022943) scroll_handle_pane_g1_ParamLimits

0xdf16,	// (0x00022992) scroll_handle_pane_g2_ParamLimits

0xdef4,	// (0x00022970) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00024161) scroll_handle_pane_g_ParamLimits

0x0ad4,	// (0x00015550) popup_choice_list_window_ParamLimits

0x0ad4,	// (0x00015550) popup_choice_list_window

0x1537,	// (0x00015fb3) choice_list_pane

0x15e7,	// (0x00016063) cell_toolbar_pane_t1

0x160f,	// (0x0001608b) toolbar_button_pane_ParamLimits

0x279f,	// (0x0001721b) ai_gene_pane_1_t2_ParamLimits

0x279f,	// (0x0001721b) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00024384) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00024384) ai_gene_pane_1_t

0x4155,	// (0x00018bd1) scroll_sc2_left_pane_g1

0x4155,	// (0x00018bd1) scroll_sc2_right_pane_g1

0x0aa4,	// (0x00015520) bg_popup_sub_pane_cp10

0x415f,	// (0x00018bdb) list_choice_list_pane

0x4178,	// (0x00018bf4) list_single_choice_list_pane_ParamLimits

0x4178,	// (0x00018bf4) list_single_choice_list_pane

0x4190,	// (0x00018c0c) list_single_choice_list_pane_g1

0xdaf1,	// (0x0002256d) list_single_choice_list_pane_t1_ParamLimits

0xdaf1,	// (0x0002256d) list_single_choice_list_pane_t1

0x4198,	// (0x00018c14) choice_list_pane_g1

0x41a0,	// (0x00018c1c) choice_list_pane_t1

0xb880,	// (0x000202fc) input_focus_pane_cp11

0xdcbf,	// (0x0002273b) title_pane_stacon_g2_ParamLimits

0xdcbf,	// (0x0002273b) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00024140) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00024140) title_pane_stacon_g

0xe473,	// (0x00022eef) cursor_press_pane

0xa1fa,	// (0x0001ec76) popup_fep_hwr_window_ParamLimits

0xa1fa,	// (0x0001ec76) popup_fep_hwr_window

0x0c18,	// (0x00015694) popup_fep_vkb_window_ParamLimits

0x0c18,	// (0x00015694) popup_fep_vkb_window

0x41ae,	// (0x00018c2a) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x000245b3) fep_vkb_side_pane_g_ParamLimits

0xeb6b,	// (0x000235e7) fep_hwr_candidate_pane_ParamLimits

0xeb6b,	// (0x000235e7) fep_hwr_candidate_pane

0xeb95,	// (0x00023611) fep_hwr_side_pane_ParamLimits

0xeb95,	// (0x00023611) fep_hwr_side_pane

0xebb7,	// (0x00023633) fep_hwr_top_pane_ParamLimits

0xebb7,	// (0x00023633) fep_hwr_top_pane

0xebcf,	// (0x0002364b) fep_hwr_write_pane_ParamLimits

0xebcf,	// (0x0002364b) fep_hwr_write_pane

0xfb37,	// (0x000245b3) fep_vkb_side_pane_g

0x41b6,	// (0x00018c32) fep_hwr_top_pane_g1

0x41c8,	// (0x00018c44) fep_hwr_top_pane_g2

0xec09,	// (0x00023685) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0002458f) fep_hwr_top_pane_g

0xec1e,	// (0x0002369a) fep_hwr_top_text_pane

0xe010,	// (0x00022a8c) fep_hwr_top_text_pane_g1

0x41fe,	// (0x00018c7a) fep_hwr_top_text_pane_t1

0xecad,	// (0x00023729) fep_hwr_candidate_pane_g1

0x4449,	// (0x00018ec5) fep_vkb_keypad_pane_g3_ParamLimits

0x4449,	// (0x00018ec5) fep_vkb_keypad_pane_g3

0x4475,	// (0x00018ef1) fep_vkb_keypad_pane_g4_ParamLimits

0x4475,	// (0x00018ef1) fep_vkb_keypad_pane_g4

0x44ec,	// (0x00018f68) fep_vkb_bottom_pane_g2_ParamLimits

0x44ec,	// (0x00018f68) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000245ba) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000245ba) fep_vkb_bottom_pane_g

0x4155,	// (0x00018bd1) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x000245c4) cell_vkb_side_pane_g

0x4577,	// (0x00018ff3) cell_vkb_side_pane_t1

0x4585,	// (0x00019001) cell_vkb_side_pane_t1_copy1

0x4155,	// (0x00018bd1) bg_fep_vkb_candidate_pane_g2

0x46c9,	// (0x00019145) cell_vkb_candidate_pane_ParamLimits

0x420c,	// (0x00018c88) aid_size_cell_vkb_ParamLimits

0x420c,	// (0x00018c88) aid_size_cell_vkb

0x46c9,	// (0x00019145) cell_vkb_candidate_pane

0xecd4,	// (0x00023750) bg_popup_fep_shadow_pane_g1

0xb558,	// (0x0001ffd4) fep_vkb_bottom_pane_ParamLimits

0xb558,	// (0x0001ffd4) fep_vkb_bottom_pane

0x42db,	// (0x00018d57) fep_vkb_candidate_pane_ParamLimits

0x42db,	// (0x00018d57) fep_vkb_candidate_pane

0xb584,	// (0x00020000) fep_vkb_keypad_pane_ParamLimits

0xb584,	// (0x00020000) fep_vkb_keypad_pane

0xb5ab,	// (0x00020027) fep_vkb_side_pane_ParamLimits

0xb5ab,	// (0x00020027) fep_vkb_side_pane

0xb5e7,	// (0x00020063) fep_vkb_top_pane_ParamLimits

0xb5e7,	// (0x00020063) fep_vkb_top_pane

0x43a2,	// (0x00018e1e) fep_vkb_top_pane_g1_ParamLimits

0x43a2,	// (0x00018e1e) fep_vkb_top_pane_g1

0x43b1,	// (0x00018e2d) fep_vkb_top_pane_g2_ParamLimits

0x43b1,	// (0x00018e2d) fep_vkb_top_pane_g2

0x43c0,	// (0x00018e3c) fep_vkb_top_pane_g3_ParamLimits

0x43c0,	// (0x00018e3c) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x000245aa) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x000245aa) fep_vkb_top_pane_g

0x43de,	// (0x00018e5a) fep_vkb_top_text_pane_ParamLimits

0x43de,	// (0x00018e5a) fep_vkb_top_text_pane

0xb623,	// (0x0002009f) fep_vkb_side_pane_g1_ParamLimits

0xb623,	// (0x0002009f) fep_vkb_side_pane_g1

0x4438,	// (0x00018eb4) grid_vkb_side_pane_ParamLimits

0x4438,	// (0x00018eb4) grid_vkb_side_pane

0xecdc,	// (0x00023758) bg_popup_fep_shadow_pane_g2

0xece5,	// (0x00023761) bg_popup_fep_shadow_pane_g3

0xeced,	// (0x00023769) bg_popup_fep_shadow_pane_g4

0xecf6,	// (0x00023772) bg_popup_fep_shadow_pane_g5

0xed00,	// (0x0002377c) bg_popup_fep_shadow_pane_g6

0xed08,	// (0x00023784) bg_popup_fep_shadow_pane_g7

0xd9e4,	// (0x00022460) bg_popup_fep_shadow_pane_g8

0x4497,	// (0x00018f13) grid_vkb_keypad_number_pane_ParamLimits

0x4497,	// (0x00018f13) grid_vkb_keypad_number_pane

0x44ab,	// (0x00018f27) grid_vkb_keypad_pane_ParamLimits

0x44ab,	// (0x00018f27) grid_vkb_keypad_pane

0x44d1,	// (0x00018f4d) fep_vkb_bottom_pane_g1_ParamLimits

0x44d1,	// (0x00018f4d) fep_vkb_bottom_pane_g1

0x44fa,	// (0x00018f76) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x44fa,	// (0x00018f76) grid_vkb_keypad_bottom_left_pane

0x450f,	// (0x00018f8b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x450f,	// (0x00018f8b) grid_vkb_keypad_bottom_right_pane

0x4524,	// (0x00018fa0) fep_vkb_top_text_pane_g1

0xb66a,	// (0x000200e6) fep_vkb_top_text_pane_t1

0xb67c,	// (0x000200f8) cell_vkb_side_pane_ParamLimits

0xb67c,	// (0x000200f8) cell_vkb_side_pane

0x4155,	// (0x00018bd1) cell_vkb_side_pane_g1

0x4593,	// (0x0001900f) cell_vkb_keypad_pane_ParamLimits

0x4593,	// (0x0001900f) cell_vkb_keypad_pane

0x4620,	// (0x0001909c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x000245d7) bg_popup_fep_shadow_pane_g

0xed1a,	// (0x00023796) cell_hwr_side_pane_g1

0xed1a,	// (0x00023796) cell_hwr_side_pane_g2

0x462a,	// (0x000190a6) cell_vkb_keypad_pane_t1

0xb692,	// (0x0002010e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb692,	// (0x0002010e) cell_vkb_keypad_bottom_left_pane

0xb6a7,	// (0x00020123) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb6a7,	// (0x00020123) cell_vkb_keypad_bottom_right_pane

0x4155,	// (0x00018bd1) cell_vkb_keypad_bottom_left_pane_g1

0x4155,	// (0x00018bd1) cell_vkb_keypad_bottom_right_pane_g1

0x468e,	// (0x0001910a) cell_vkb_keypad_number_pane_ParamLimits

0x468e,	// (0x0001910a) cell_vkb_keypad_number_pane

0x46ad,	// (0x00019129) cell_vkb_keypad_number_pane_g1

0x46b7,	// (0x00019133) cell_vkb_keypad_number_pane_g2

0x46c0,	// (0x0001913c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x000245c9) cell_vkb_keypad_number_pane_g

0x462a,	// (0x000190a6) cell_vkb_keypad_number_pane_t1

0x46ea,	// (0x00019166) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x000245ea) cell_hwr_side_pane_g

0x4703,	// (0x0001917f) cell_hwr_side_pane_t1

0xed24,	// (0x000237a0) cell_hwr_side_pane_t1_copy1

0xed32,	// (0x000237ae) cell_hwr_candidate_pane_g1

0xed61,	// (0x000237dd) cell_hwr_candidate_pane_t1

0x4155,	// (0x00018bd1) cell_vkb_candidate_pane_g2

0x4747,	// (0x000191c3) cell_vkb_candidate_pane_t1

0xeb32,	// (0x000235ae) bg_popup_fep_shadow_pane_ParamLimits

0xeb32,	// (0x000235ae) bg_popup_fep_shadow_pane

0xebe9,	// (0x00023665) bg_fep_hwr_top_pane_g4

0x41da,	// (0x00018c56) bg_hwr_side_pane_g1_ParamLimits

0x41da,	// (0x00018c56) bg_hwr_side_pane_g1

0x8c23,	// (0x0001d69f) cell_hwr_side_pane_ParamLimits

0x8c23,	// (0x0001d69f) cell_hwr_side_pane

0xec33,	// (0x000236af) fep_hwr_write_pane_g1_ParamLimits

0xec33,	// (0x000236af) fep_hwr_write_pane_g1

0xec40,	// (0x000236bc) fep_hwr_write_pane_g2_ParamLimits

0xec40,	// (0x000236bc) fep_hwr_write_pane_g2

0xec4d,	// (0x000236c9) fep_hwr_write_pane_g3_ParamLimits

0xec4d,	// (0x000236c9) fep_hwr_write_pane_g3

0x8c43,	// (0x0001d6bf) fep_hwr_write_pane_g4_ParamLimits

0x8c43,	// (0x0001d6bf) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00024596) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00024596) fep_hwr_write_pane_g

0xebe9,	// (0x00023665) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xebe9,	// (0x00023665) bg_fep_hwr_candidate_pane_g2

0xec5b,	// (0x000236d7) cell_hwr_candidate_pane_ParamLimits

0xec5b,	// (0x000236d7) cell_hwr_candidate_pane

0xecad,	// (0x00023729) fep_hwr_candidate_pane_g1_ParamLimits

0x423a,	// (0x00018cb6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x423a,	// (0x00018cb6) bg_popup_fep_shadow_pane_cp2

0x43d0,	// (0x00018e4c) fep_vkb_top_pane_g4_ParamLimits

0x43d0,	// (0x00018e4c) fep_vkb_top_pane_g4

0x4416,	// (0x00018e92) fep_vkb_side_pane_g2_ParamLimits

0x4416,	// (0x00018e92) fep_vkb_side_pane_g2

0x9966,	// (0x0001e3e2) list_setting_pane_t4_ParamLimits

0x9966,	// (0x0001e3e2) list_setting_pane_t4

0x99e2,	// (0x0001e45e) list_setting_number_pane_t5_ParamLimits

0x99e2,	// (0x0001e45e) list_setting_number_pane_t5

0x9d44,	// (0x0001e7c0) list_double_heading_pane_cp2_ParamLimits

0x9d44,	// (0x0001e7c0) list_double_heading_pane_cp2

0x4755,	// (0x000191d1) list_double_heading_pane_g1_cp2_ParamLimits

0x4755,	// (0x000191d1) list_double_heading_pane_g1_cp2

0x4761,	// (0x000191dd) list_double_heading_pane_g2_cp2_ParamLimits

0x4761,	// (0x000191dd) list_double_heading_pane_g2_cp2

0x4775,	// (0x000191f1) list_double_heading_pane_t1_cp2_ParamLimits

0x4775,	// (0x000191f1) list_double_heading_pane_t1_cp2

0x478b,	// (0x00019207) list_double_heading_pane_t2_cp2_ParamLimits

0x478b,	// (0x00019207) list_double_heading_pane_t2_cp2

0xb878,	// (0x000202f4) aid_value_unit2

0xd828,	// (0x000222a4) popup_preview_fixed_window

0xba49,	// (0x000204c5) bg_popup_preview_window_pane_cp02

0x479d,	// (0x00019219) list_preview_fixed_pane

0x47e3,	// (0x0001925f) list_empty_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_empty_pane_fp

0x47e3,	// (0x0001925f) list_single_cale_day_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_cale_day_pane_fp

0x47e3,	// (0x0001925f) list_single_graphic_heading_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_graphic_heading_pane_fp

0x47e3,	// (0x0001925f) list_single_graphic_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_graphic_pane_fp

0x47e3,	// (0x0001925f) list_single_heading_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_heading_pane_fp

0x47e3,	// (0x0001925f) list_single_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_pane_fp

0x47fc,	// (0x00019278) list_single_pane_fp_g1_ParamLimits

0x47fc,	// (0x00019278) list_single_pane_fp_g1

0x4755,	// (0x000191d1) list_single_pane_fp_g2_ParamLimits

0x4755,	// (0x000191d1) list_single_pane_fp_g2

0x4761,	// (0x000191dd) list_single_pane_fp_g3_ParamLimits

0x4761,	// (0x000191dd) list_single_pane_fp_g3

0x4808,	// (0x00019284) list_single_pane_fp_g4_ParamLimits

0x4808,	// (0x00019284) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x000245fd) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x000245fd) list_single_pane_fp_g

0x4814,	// (0x00019290) list_single_pane_fp_t1_ParamLimits

0x4814,	// (0x00019290) list_single_pane_fp_t1

0x482b,	// (0x000192a7) list_single_graphic_pane_fp_g1_ParamLimits

0x482b,	// (0x000192a7) list_single_graphic_pane_fp_g1

0x47fc,	// (0x00019278) list_single_graphic_pane_fp_g2_ParamLimits

0x47fc,	// (0x00019278) list_single_graphic_pane_fp_g2

0x4755,	// (0x000191d1) list_single_graphic_pane_fp_g3_ParamLimits

0x4755,	// (0x000191d1) list_single_graphic_pane_fp_g3

0x4761,	// (0x000191dd) list_single_graphic_pane_fp_g4_ParamLimits

0x4761,	// (0x000191dd) list_single_graphic_pane_fp_g4

0x4808,	// (0x00019284) list_single_graphic_pane_fp_g5_ParamLimits

0x4808,	// (0x00019284) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024606) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024606) list_single_graphic_pane_fp_g

0x4837,	// (0x000192b3) list_single_graphic_pane_fp_t1_ParamLimits

0x4837,	// (0x000192b3) list_single_graphic_pane_fp_t1

0x482b,	// (0x000192a7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x482b,	// (0x000192a7) list_single_graphic_heading_pane_fp_g1

0x47fc,	// (0x00019278) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x47fc,	// (0x00019278) list_single_graphic_heading_pane_fp_g2

0x4755,	// (0x000191d1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4755,	// (0x000191d1) list_single_graphic_heading_pane_fp_g3

0x4761,	// (0x000191dd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4761,	// (0x000191dd) list_single_graphic_heading_pane_fp_g4

0x4808,	// (0x00019284) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4808,	// (0x00019284) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024606) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024606) list_single_graphic_heading_pane_fp_g

0x484d,	// (0x000192c9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x484d,	// (0x000192c9) list_single_graphic_heading_pane_fp_t1

0x4863,	// (0x000192df) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4863,	// (0x000192df) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00024611) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00024611) list_single_graphic_heading_pane_fp_t

0x4875,	// (0x000192f1) list_single_cale_day_pane_fp_g1_ParamLimits

0x4875,	// (0x000192f1) list_single_cale_day_pane_fp_g1

0x48ad,	// (0x00019329) list_single_cale_day_pane_fp_g2_ParamLimits

0x48ad,	// (0x00019329) list_single_cale_day_pane_fp_g2

0x48b9,	// (0x00019335) list_single_cale_day_pane_fp_g3_ParamLimits

0x48b9,	// (0x00019335) list_single_cale_day_pane_fp_g3

0x48e1,	// (0x0001935d) list_single_cale_day_pane_fp_g4_ParamLimits

0x48e1,	// (0x0001935d) list_single_cale_day_pane_fp_g4

0x4905,	// (0x00019381) list_single_cale_day_pane_fp_g5_ParamLimits

0x4905,	// (0x00019381) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00024616) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00024616) list_single_cale_day_pane_fp_g

0x4929,	// (0x000193a5) list_single_cale_day_pane_fp_t1_ParamLimits

0x4929,	// (0x000193a5) list_single_cale_day_pane_fp_t1

0x494f,	// (0x000193cb) list_single_cale_day_pane_fp_t2_ParamLimits

0x494f,	// (0x000193cb) list_single_cale_day_pane_fp_t2

0x4968,	// (0x000193e4) list_single_cale_day_pane_fp_t3_ParamLimits

0x4968,	// (0x000193e4) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00024621) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00024621) list_single_cale_day_pane_fp_t

0x47fc,	// (0x00019278) list_empty_pane_fp_g1_ParamLimits

0x47fc,	// (0x00019278) list_empty_pane_fp_g1

0x4981,	// (0x000193fd) list_empty_pane_fp_t1

0x498f,	// (0x0001940b) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00024628) list_empty_pane_fp_t

0x47fc,	// (0x00019278) list_single_heading_pane_fp_g1_ParamLimits

0x47fc,	// (0x00019278) list_single_heading_pane_fp_g1

0x4755,	// (0x000191d1) list_single_heading_pane_fp_g2_ParamLimits

0x4755,	// (0x000191d1) list_single_heading_pane_fp_g2

0x4761,	// (0x000191dd) list_single_heading_pane_fp_g3_ParamLimits

0x4761,	// (0x000191dd) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0002462d) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002462d) list_single_heading_pane_fp_g

0x499d,	// (0x00019419) list_single_heading_pane_fp_t1_ParamLimits

0x499d,	// (0x00019419) list_single_heading_pane_fp_t1

0x49af,	// (0x0001942b) list_single_heading_pane_fp_t2_ParamLimits

0x49af,	// (0x0001942b) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00024634) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00024634) list_single_heading_pane_fp_t

0xdb06,	// (0x00022582) aid_size_cell_fast

0xba2c,	// (0x000204a8) soft_indicator_pane_cp1_t1

0xdb43,	// (0x000225bf) cell_app_pane_cp2_ParamLimits

0xdb43,	// (0x000225bf) cell_app_pane_cp2

0xeb54,	// (0x000235d0) fep_hwr_candidate_drop_down_list_pane

0xecc7,	// (0x00023743) fep_hwr_candidate_pane_g3_ParamLimits

0xecc7,	// (0x00023743) fep_hwr_candidate_pane_g3

0xbf7f,	// (0x000209fb) fep_hwr_candidate_pane_g4_ParamLimits

0xbf7f,	// (0x000209fb) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x000245a3) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x000245a3) fep_hwr_candidate_pane_g

0x42ca,	// (0x00018d46) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x42ca,	// (0x00018d46) fep_vkb_candidate_drop_down_list_pane

0x46f2,	// (0x0001916e) fep_vkb_candidate_pane_g3

0x46fa,	// (0x00019176) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x000245d0) fep_vkb_candidate_pane_g

0xed32,	// (0x000237ae) cell_hwr_candidate_pane_g1_ParamLimits

0xed40,	// (0x000237bc) cell_hwr_candidate_pane_g3_ParamLimits

0xed40,	// (0x000237bc) cell_hwr_candidate_pane_g3

0x5659,	// (0x0001a0d5) cell_hwr_candidate_pane_g4_ParamLimits

0x5659,	// (0x0001a0d5) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x000245ef) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x000245ef) cell_hwr_candidate_pane_g

0x4711,	// (0x0001918d) cell_vkb_candidate_pane_g3_ParamLimits

0x4711,	// (0x0001918d) cell_vkb_candidate_pane_g3

0x472c,	// (0x000191a8) cell_vkb_candidate_pane_g4_ParamLimits

0x472c,	// (0x000191a8) cell_vkb_candidate_pane_g4

0x49c5,	// (0x00019441) cell_app_pane_cp2_g1_ParamLimits

0x49c5,	// (0x00019441) cell_app_pane_cp2_g1

0x49e3,	// (0x0001945f) cell_app_pane_cp2_g2_ParamLimits

0x49e3,	// (0x0001945f) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00024639) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00024639) cell_app_pane_cp2_g

0x49ef,	// (0x0001946b) cell_app_pane_cp2_t1_ParamLimits

0x49ef,	// (0x0001946b) cell_app_pane_cp2_t1

0xd903,	// (0x0002237f) grid_highlight_pane_cp1_ParamLimits

0xd903,	// (0x0002237f) grid_highlight_pane_cp1

0xed7f,	// (0x000237fb) cell_hwr_candidate_pane_cp1_ParamLimits

0xed7f,	// (0x000237fb) cell_hwr_candidate_pane_cp1

0xed32,	// (0x000237ae) fep_hwr_candidate_drop_down_list_pane_g1

0xeda3,	// (0x0002381f) fep_hwr_candidate_drop_down_list_pane_g2

0xedb0,	// (0x0002382c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002463e) fep_hwr_candidate_drop_down_list_pane_g

0xedbd,	// (0x00023839) fep_hwr_candidate_drop_down_list_scroll_pane

0xedc6,	// (0x00023842) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedc6,	// (0x00023842) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xedd3,	// (0x0002384f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xedd3,	// (0x0002384f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xede0,	// (0x0002385c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xede0,	// (0x0002385c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeded,	// (0x00023869) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeded,	// (0x00023869) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee08,	// (0x00023884) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee08,	// (0x00023884) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee23,	// (0x0002389f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee23,	// (0x0002389f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xee3e,	// (0x000238ba) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee3e,	// (0x000238ba) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee59,	// (0x000238d5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee59,	// (0x000238d5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00024645) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00024645) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4a01,	// (0x0001947d) cell_vkb_candidate_pane_cp1_ParamLimits

0x4a01,	// (0x0001947d) cell_vkb_candidate_pane_cp1

0x43d0,	// (0x00018e4c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x43d0,	// (0x00018e4c) fep_vkb_candidate_drop_down_list_pane_g1

0x4a27,	// (0x000194a3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4a27,	// (0x000194a3) fep_vkb_candidate_drop_down_list_pane_g2

0x4a34,	// (0x000194b0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4a34,	// (0x000194b0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00024656) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00024656) fep_vkb_candidate_drop_down_list_pane_g

0x4a41,	// (0x000194bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4a41,	// (0x000194bd) fep_vkb_candidate_drop_down_list_scroll_pane

0x4a4e,	// (0x000194ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4a4e,	// (0x000194ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4a5b,	// (0x000194d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4a5b,	// (0x000194d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4a67,	// (0x000194e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4a67,	// (0x000194e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4a73,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4a73,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4a94,	// (0x00019510) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4a94,	// (0x00019510) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ab5,	// (0x00019531) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ab5,	// (0x00019531) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ad6,	// (0x00019552) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ad6,	// (0x00019552) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4af7,	// (0x00019573) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4af7,	// (0x00019573) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0002465d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0002465d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x926c,	// (0x0001dce8) title_pane_g1_ParamLimits

0x927f,	// (0x0001dcfb) title_pane_g2_ParamLimits

0xf54e,	// (0x00023fca) title_pane_g_ParamLimits

0xe000,	// (0x00022a7c) aid_call2_pane

0xe008,	// (0x00022a84) aid_call_pane

0xe010,	// (0x00022a8c) popup_clock_analogue_window_g1

0xe010,	// (0x00022a8c) popup_clock_analogue_window_g2

0xe4c8,	// (0x00022f44) popup_clock_analogue_window_g3

0xe4d1,	// (0x00022f4d) popup_clock_analogue_window_g4

0xb88a,	// (0x00020306) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002416f) popup_clock_analogue_window_g

0xe4d9,	// (0x00022f55) popup_clock_analogue_window_t1

0xe4e7,	// (0x00022f63) clock_digital_number_pane_ParamLimits

0xe4e7,	// (0x00022f63) clock_digital_number_pane

0xe4f3,	// (0x00022f6f) clock_digital_number_pane_cp02_ParamLimits

0xe4f3,	// (0x00022f6f) clock_digital_number_pane_cp02

0xe4ff,	// (0x00022f7b) clock_digital_number_pane_cp03_ParamLimits

0xe4ff,	// (0x00022f7b) clock_digital_number_pane_cp03

0xe50b,	// (0x00022f87) clock_digital_number_pane_cp04_ParamLimits

0xe50b,	// (0x00022f87) clock_digital_number_pane_cp04

0xe517,	// (0x00022f93) clock_digital_separator_pane_ParamLimits

0xe517,	// (0x00022f93) clock_digital_separator_pane

0xe523,	// (0x00022f9f) popup_clock_digital_window_t1_ParamLimits

0xe523,	// (0x00022f9f) popup_clock_digital_window_t1

0xb88a,	// (0x00020306) clock_digital_number_pane_g1

0xb88a,	// (0x00020306) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002417a) clock_digital_number_pane_g

0xb88a,	// (0x00020306) clock_digital_separator_pane_g1

0xb88a,	// (0x00020306) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002417a) clock_digital_separator_pane_g

0xa865,	// (0x0001f2e1) aid_fill_nsta_ParamLimits

0xa99d,	// (0x0001f419) indicator_nsta_pane_ParamLimits

0x13c4,	// (0x00015e40) popup_clock_analogue_window

0x13c4,	// (0x00015e40) popup_clock_digital_window

0xe487,	// (0x00022f03) grid_indicator_nsta_pane_ParamLimits

0x3b32,	// (0x000185ae) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00024523) clock_nsta_pane_t

0xe495,	// (0x00022f11) aid_size_max_handle

0x88c8,	// (0x0001d344) aid_size_min_handle

0xe473,	// (0x00022eef) editor_scroll_pane

0x4b12,	// (0x0001958e) ex_editor_pane

0xdacc,	// (0x00022548) scroll_pane_cp13

0xbeca,	// (0x00020946) scroll_pane_cp14

0xe03f,	// (0x00022abb) scroll_pane_cp36

0x9d57,	// (0x0001e7d3) list_single_graphic_hl_pane_cp2_ParamLimits

0x9d57,	// (0x0001e7d3) list_single_graphic_hl_pane_cp2

0xb1c5,	// (0x0001fc41) list_single_graphic_hl_pane_ParamLimits

0xb1c5,	// (0x0001fc41) list_single_graphic_hl_pane

0x4b1a,	// (0x00019596) aid_size_min_hl_cp1

0x4b23,	// (0x0001959f) list_highlight_pane_cp34_ParamLimits

0x4b23,	// (0x0001959f) list_highlight_pane_cp34

0x4b34,	// (0x000195b0) list_single_graphic_hl_pane_g1_ParamLimits

0x4b34,	// (0x000195b0) list_single_graphic_hl_pane_g1

0xbf8c,	// (0x00020a08) list_single_graphic_hl_pane_g2_ParamLimits

0xbf8c,	// (0x00020a08) list_single_graphic_hl_pane_g2

0xbf8c,	// (0x00020a08) list_single_graphic_hl_pane_g3_ParamLimits

0xbf8c,	// (0x00020a08) list_single_graphic_hl_pane_g3

0xbf98,	// (0x00020a14) list_single_graphic_hl_pane_g4_ParamLimits

0xbf98,	// (0x00020a14) list_single_graphic_hl_pane_g4

0x4ba7,	// (0x00019623) list_single_graphic_hl_pane_g5_ParamLimits

0x4ba7,	// (0x00019623) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0002466e) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0002466e) list_single_graphic_hl_pane_g

0xb6c2,	// (0x0002013e) list_single_graphic_hl_pane_t1_ParamLimits

0xb6c2,	// (0x0002013e) list_single_graphic_hl_pane_t1

0x4b77,	// (0x000195f3) aid_size_min_hl_cp2

0x4b80,	// (0x000195fc) list_highlight_pane_cp34_cp2_ParamLimits

0x4b80,	// (0x000195fc) list_highlight_pane_cp34_cp2

0x4b34,	// (0x000195b0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4b34,	// (0x000195b0) list_single_graphic_hl_pane_g1_cp2

0x4b8d,	// (0x00019609) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4b8d,	// (0x00019609) list_single_graphic_hl_pane_g2_cp2

0xb6d8,	// (0x00020154) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb6d8,	// (0x00020154) list_single_graphic_hl_pane_g3_cp2

0xbf98,	// (0x00020a14) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf98,	// (0x00020a14) list_single_graphic_hl_pane_g4_cp2

0x4ba7,	// (0x00019623) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4ba7,	// (0x00019623) list_single_graphic_hl_pane_g5_cp2

0x891f,	// (0x0001d39b) control_pane_g4_ParamLimits

0x891f,	// (0x0001d39b) control_pane_g4

0x0aa4,	// (0x00015520) bg_popup_sub_pane_cp10_ParamLimits

0x415f,	// (0x00018bdb) list_choice_list_pane_ParamLimits

0x416e,	// (0x00018bea) scroll_pane_cp23

0xba49,	// (0x000204c5) bg_popup_preview_window_pane_cp02_ParamLimits

0x479d,	// (0x00019219) list_preview_fixed_pane_ParamLimits

0x47b3,	// (0x0001922f) list_preview_fixed_pane_cp_ParamLimits

0x47b3,	// (0x0001922f) list_preview_fixed_pane_cp

0x47bf,	// (0x0001923b) popup_preview_fixed_window_g1_ParamLimits

0x47bf,	// (0x0001923b) popup_preview_fixed_window_g1

0x47cb,	// (0x00019247) popup_preview_fixed_window_g2_ParamLimits

0x47cb,	// (0x00019247) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x000245f6) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x000245f6) popup_preview_fixed_window_g

0xdda4,	// (0x00022820) aid_navi_side_left_pane_ParamLimits

0xddb9,	// (0x00022835) aid_navi_side_right_pane_ParamLimits

0xddd1,	// (0x0002284d) navi_icon_pane_stacon_ParamLimits

0xdde5,	// (0x00022861) navi_navi_pane_stacon_ParamLimits

0xddd1,	// (0x0002284d) navi_text_pane_stacon_ParamLimits

0xb880,	// (0x000202fc) main_text_info_pane

0x4bd1,	// (0x0001964d) listscroll_text_info_pane

0x4bd9,	// (0x00019655) list_text_info_pane_ParamLimits

0x4bd9,	// (0x00019655) list_text_info_pane

0x4be8,	// (0x00019664) scroll_pane_cp24_ParamLimits

0x4be8,	// (0x00019664) scroll_pane_cp24

0xb6e6,	// (0x00020162) list_text_info_pane_t1_ParamLimits

0xb6e6,	// (0x00020162) list_text_info_pane_t1

0xa15e,	// (0x0001ebda) popup_fast_swap2_window_ParamLimits

0xa15e,	// (0x0001ebda) popup_fast_swap2_window

0x4c2b,	// (0x000196a7) aid_size_cell_fast2

0xb880,	// (0x000202fc) bg_popup_window_pane_cp17

0x1b30,	// (0x000165ac) heading_pane_cp2

0xbc4f,	// (0x000206cb) listscroll_fast2_pane

0x4c35,	// (0x000196b1) grid_fast2_pane

0x4c3f,	// (0x000196bb) listscroll_fast2_pane_g1

0x4c49,	// (0x000196c5) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00024679) listscroll_fast2_pane_g

0xdacc,	// (0x00022548) scroll_pane_cp26

0x4c53,	// (0x000196cf) cell_fast2_pane_ParamLimits

0x4c53,	// (0x000196cf) cell_fast2_pane

0x4c6a,	// (0x000196e6) cell_fast2_pane_g1

0x4c73,	// (0x000196ef) cell_fast2_pane_g2

0x4c7c,	// (0x000196f8) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0002467e) cell_fast2_pane_g

0xbc91,	// (0x0002070d) grid_highlight_pane_cp9

0xbca6,	// (0x00020722) main_eswt_pane_ParamLimits

0xbca6,	// (0x00020722) main_eswt_pane

0x4bfd,	// (0x00019679) list_single_text_info_pane

0x4c84,	// (0x00019700) eswt_ctrl_button_pane

0x4c84,	// (0x00019700) eswt_ctrl_canvas_pane

0x4c8c,	// (0x00019708) eswt_ctrl_combo_pane

0x4c84,	// (0x00019700) eswt_ctrl_default_pane

0x4c84,	// (0x00019700) eswt_ctrl_label_pane

0x4c94,	// (0x00019710) eswt_ctrl_wait_pane

0x4c9c,	// (0x00019718) eswt_shell_pane

0xb880,	// (0x000202fc) listscroll_eswt_app_pane

0x4cbc,	// (0x00019738) popup_eswt_tasktip_window_ParamLimits

0x4cbc,	// (0x00019738) popup_eswt_tasktip_window

0x1741,	// (0x000161bd) bg_popup_window_pane_cp18

0x4ccd,	// (0x00019749) eswt_control_pane_g1_ParamLimits

0x4ccd,	// (0x00019749) eswt_control_pane_g1

0x4cda,	// (0x00019756) eswt_control_pane_g2_ParamLimits

0x4cda,	// (0x00019756) eswt_control_pane_g2

0x4ce7,	// (0x00019763) eswt_control_pane_g3_ParamLimits

0x4ce7,	// (0x00019763) eswt_control_pane_g3

0x4cf4,	// (0x00019770) eswt_control_pane_g4_ParamLimits

0x4cf4,	// (0x00019770) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00024685) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00024685) eswt_control_pane_g

0xd903,	// (0x0002237f) bg_button_pane_ParamLimits

0xd903,	// (0x0002237f) bg_button_pane

0xbca6,	// (0x00020722) common_borders_pane_copy2_ParamLimits

0xbca6,	// (0x00020722) common_borders_pane_copy2

0x4d01,	// (0x0001977d) control_button_pane_g1_ParamLimits

0x4d01,	// (0x0001977d) control_button_pane_g1

0x4d0d,	// (0x00019789) control_button_pane_g2_ParamLimits

0x4d0d,	// (0x00019789) control_button_pane_g2

0x4d19,	// (0x00019795) control_button_pane_g3_ParamLimits

0x4d19,	// (0x00019795) control_button_pane_g3

0x0002,

0xfc12,	// (0x0002468e) control_button_pane_g_ParamLimits

0xfc12,	// (0x0002468e) control_button_pane_g

0x4d2d,	// (0x000197a9) control_button_pane_t1

0x4d3b,	// (0x000197b7) control_button_pane_t2

0x0001,

0xfc19,	// (0x00024695) control_button_pane_t

0x161b,	// (0x00016097) bg_button_pane_g1

0x162b,	// (0x000160a7) bg_button_pane_g2

0x1623,	// (0x0001609f) bg_button_pane_g3

0x163b,	// (0x000160b7) bg_button_pane_g4

0x1633,	// (0x000160af) bg_button_pane_g5

0x1643,	// (0x000160bf) bg_button_pane_g6

0x164b,	// (0x000160c7) bg_button_pane_g7

0x165b,	// (0x000160d7) bg_button_pane_g8

0x1653,	// (0x000160cf) bg_button_pane_g9

0x0008,

0xf85c,	// (0x000242d8) bg_button_pane_g

0x411a,	// (0x00018b96) common_borders_pane_ParamLimits

0x411a,	// (0x00018b96) common_borders_pane

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy1_ParamLimits

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy1

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy1_ParamLimits

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy1

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy1_ParamLimits

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy1

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy1_ParamLimits

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy1

0x4155,	// (0x00018bd1) bg_eswt_ctrl_canvas_pane_g1

0x411a,	// (0x00018b96) common_borders_pane_cp2_ParamLimits

0x411a,	// (0x00018b96) common_borders_pane_cp2

0x411a,	// (0x00018b96) common_borders_pane_cp3_ParamLimits

0x411a,	// (0x00018b96) common_borders_pane_cp3

0x4d49,	// (0x000197c5) separator_horizontal_pane

0x4d51,	// (0x000197cd) separator_vertical_pane

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy2_ParamLimits

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy2

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy2_ParamLimits

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy2

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy2_ParamLimits

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy2

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy2_ParamLimits

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy2

0xb880,	// (0x000202fc) common_borders_pane_cp4

0x4d5a,	// (0x000197d6) separator_horizontal_pane_g1

0x4d63,	// (0x000197df) separator_horizontal_pane_g2

0x4d6c,	// (0x000197e8) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0002469a) separator_horizontal_pane_g

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy3_ParamLimits

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy3

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy3_ParamLimits

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy3

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy3_ParamLimits

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy3

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy3_ParamLimits

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy3

0xb880,	// (0x000202fc) common_borders_pane_cp5

0x4d75,	// (0x000197f1) separator_vertical_pane_g1

0x4d7e,	// (0x000197fa) separator_vertical_pane_g2

0x4d87,	// (0x00019803) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x000246a1) separator_vertical_pane_g

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy4_ParamLimits

0x4ccd,	// (0x00019749) eswt_control_pane_g1_copy4

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy4_ParamLimits

0x4cda,	// (0x00019756) eswt_control_pane_g2_copy4

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy4_ParamLimits

0x4ce7,	// (0x00019763) eswt_control_pane_g3_copy4

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy4_ParamLimits

0x4cf4,	// (0x00019770) eswt_control_pane_g4_copy4

0xb708,	// (0x00020184) eswt_ctrl_combo_button_pane

0xb710,	// (0x0002018c) eswt_ctrl_input_pane

0xb718,	// (0x00020194) popup_choice_list_window_cp70

0xb720,	// (0x0002019c) eswt_ctrl_input_pane_t1

0xb880,	// (0x000202fc) input_focus_pane_cp70

0x411a,	// (0x00018b96) bg_button_pane_cp70_ParamLimits

0x411a,	// (0x00018b96) bg_button_pane_cp70

0xb72e,	// (0x000201aa) eswt_ctrl_combo_button_pane_g1

0x4dbe,	// (0x0001983a) wait_bar_pane_cp70

0x1741,	// (0x000161bd) bg_popup_window_pane_cp70_ParamLimits

0x1741,	// (0x000161bd) bg_popup_window_pane_cp70

0x4dc6,	// (0x00019842) popup_eswt_tasktip_window_t1

0x4ddc,	// (0x00019858) wait_bar_pane_cp71_ParamLimits

0x4ddc,	// (0x00019858) wait_bar_pane_cp71

0x4de8,	// (0x00019864) grid_eswt_app_pane

0xde9f,	// (0x0002291b) scroll_pane_cp70

0xb736,	// (0x000201b2) cell_eswt_app_pane_ParamLimits

0xb736,	// (0x000201b2) cell_eswt_app_pane

0xb768,	// (0x000201e4) cell_eswt_app_pane_g1_ParamLimits

0xb768,	// (0x000201e4) cell_eswt_app_pane_g1

0xb797,	// (0x00020213) cell_eswt_app_pane_g2_ParamLimits

0xb797,	// (0x00020213) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x000246a8) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x000246a8) cell_eswt_app_pane_g

0xb7c0,	// (0x0002023c) cell_eswt_app_pane_t1_ParamLimits

0xb7c0,	// (0x0002023c) cell_eswt_app_pane_t1

0x4ead,	// (0x00019929) grid_highlight_pane_cp70_ParamLimits

0x4ead,	// (0x00019929) grid_highlight_pane_cp70

0xe378,	// (0x00022df4) set_content_pane_g1

0xa0bf,	// (0x0001eb3b) status_small_volume_pane

0xee74,	// (0x000238f0) status_small_volume_pane_g1

0xee7c,	// (0x000238f8) volume_small2_pane

0xee85,	// (0x00023901) volume_small2_pane_g1

0xee8e,	// (0x0002390a) volume_small2_pane_g2

0xee97,	// (0x00023913) volume_small2_pane_g3

0xeea0,	// (0x0002391c) volume_small2_pane_g4

0xeea9,	// (0x00023925) volume_small2_pane_g5

0xeeb2,	// (0x0002392e) volume_small2_pane_g6

0xeebb,	// (0x00023937) volume_small2_pane_g7

0xeec4,	// (0x00023940) volume_small2_pane_g8

0xeecd,	// (0x00023949) volume_small2_pane_g9

0xeed6,	// (0x00023952) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x000246ad) volume_small2_pane_g

0x4524,	// (0x00018fa0) fep_vkb_top_text_pane_g1_ParamLimits

0xb66a,	// (0x000200e6) fep_vkb_top_text_pane_t1_ParamLimits

0x47d7,	// (0x00019253) popup_preview_fixed_window_g3_ParamLimits

0x47d7,	// (0x00019253) popup_preview_fixed_window_g3

0xa7f8,	// (0x0001f274) popup_toolbar_trans_pane

0xafe4,	// (0x0001fa60) aid_height_set_list_ParamLimits

0x2aed,	// (0x00017569) aid_size_parent_ParamLimits

0x0aa4,	// (0x00015520) list_highlight_pane_cp2_ParamLimits

0xe378,	// (0x00022df4) set_content_pane_g1_ParamLimits

0xb1d9,	// (0x0001fc55) list_single_image_pane_ParamLimits

0xb1d9,	// (0x0001fc55) list_single_image_pane

0xb7f2,	// (0x0002026e) aid_size_cell_image_ParamLimits

0xb7f2,	// (0x0002026e) aid_size_cell_image

0xb7ff,	// (0x0002027b) grid_single_image_pane_ParamLimits

0xb7ff,	// (0x0002027b) grid_single_image_pane

0xd92e,	// (0x000223aa) list_single_image_pane_g1_ParamLimits

0xd92e,	// (0x000223aa) list_single_image_pane_g1

0xd93a,	// (0x000223b6) list_single_image_pane_g2_ParamLimits

0xd93a,	// (0x000223b6) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x000246c2) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x000246c2) list_single_image_pane_g

0x4ed4,	// (0x00019950) list_single_image_pane_t1_ParamLimits

0x4ed4,	// (0x00019950) list_single_image_pane_t1

0xb80d,	// (0x00020289) cell_image_list_pane_ParamLimits

0xb80d,	// (0x00020289) cell_image_list_pane

0xb821,	// (0x0002029d) cell_image_list_pane_g1

0xb82a,	// (0x000202a6) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x000246c7) cell_image_list_pane_g

0x4f12,	// (0x0001998e) aid_size_cell_tb_trans_pane

0xd903,	// (0x0002237f) bg_tb_trans_pane

0x4f24,	// (0x000199a0) grid_tb_trans_pane

0x161b,	// (0x00016097) bg_tb_trans_pane_g1

0x162b,	// (0x000160a7) bg_tb_trans_pane_g2

0x1623,	// (0x0001609f) bg_tb_trans_pane_g3

0x163b,	// (0x000160b7) bg_tb_trans_pane_g4

0x1633,	// (0x000160af) bg_tb_trans_pane_g5

0x165b,	// (0x000160d7) bg_tb_trans_pane_g6

0x1653,	// (0x000160cf) bg_tb_trans_pane_g7

0x1643,	// (0x000160bf) bg_tb_trans_pane_g8

0x164b,	// (0x000160c7) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x000246cc) bg_tb_trans_pane_g

0x4f38,	// (0x000199b4) cell_toolbar_trans_pane_ParamLimits

0x4f38,	// (0x000199b4) cell_toolbar_trans_pane

0x4155,	// (0x00018bd1) cell_toolbar_trans_pane_g1

0xb40f,	// (0x0001fe8b) list_form2_midp_pane_t1

0xb41d,	// (0x0001fe99) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00024569) list_form2_midp_pane_t

0x3d3f,	// (0x000187bb) scroll_pane_cp51_ParamLimits

0x3f5c,	// (0x000189d8) form2_midp_wait_pane_g1

0x3f65,	// (0x000189e1) form2_midp_wait_pane_g2

0x3f6e,	// (0x000189ea) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0002457e) form2_midp_wait_pane_g

0xb8fc,	// (0x00020378) list_highlight_pane_cp21_ParamLimits

0x3fb2,	// (0x00018a2e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3fc1,	// (0x00018a3d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2d0e,	// (0x0001778a) list_single_2graphic_im_pane_ParamLimits

0x2d0e,	// (0x0001778a) list_single_2graphic_im_pane

0xb833,	// (0x000202af) list_single_2graphic_im_pane_g1_ParamLimits

0xb833,	// (0x000202af) list_single_2graphic_im_pane_g1

0xb844,	// (0x000202c0) list_single_2graphic_im_pane_g2_ParamLimits

0xb844,	// (0x000202c0) list_single_2graphic_im_pane_g2

0xbfa4,	// (0x00020a20) list_single_2graphic_im_pane_g3_ParamLimits

0xbfa4,	// (0x00020a20) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x000246df) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x000246df) list_single_2graphic_im_pane_g

0xbfb8,	// (0x00020a34) list_single_2graphic_im_pane_t1_ParamLimits

0xbfb8,	// (0x00020a34) list_single_2graphic_im_pane_t1

0x47e3,	// (0x0001925f) list_single_graphic_2heading_pane_fp_ParamLimits

0x47e3,	// (0x0001925f) list_single_graphic_2heading_pane_fp

0x482b,	// (0x000192a7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x482b,	// (0x000192a7) list_single_graphic_2heading_pane_fp_g1

0x47fc,	// (0x00019278) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x47fc,	// (0x00019278) list_single_graphic_2heading_pane_fp_g2

0x4755,	// (0x000191d1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4755,	// (0x000191d1) list_single_graphic_2heading_pane_fp_g3

0x4761,	// (0x000191dd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4761,	// (0x000191dd) list_single_graphic_2heading_pane_fp_g4

0x4808,	// (0x00019284) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4808,	// (0x00019284) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024606) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024606) list_single_graphic_2heading_pane_fp_g

0x4fcc,	// (0x00019a48) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4fcc,	// (0x00019a48) list_single_graphic_2heading_pane_fp_t1

0x4863,	// (0x000192df) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4863,	// (0x000192df) list_single_graphic_2heading_pane_fp_t2

0x4fe2,	// (0x00019a5e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4fe2,	// (0x00019a5e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x000246e8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x000246e8) list_single_graphic_2heading_pane_fp_t

0x41e6,	// (0x00018c62) fep_hwr_write_pane_g5_ParamLimits

0x41e6,	// (0x00018c62) fep_hwr_write_pane_g5

0x41f2,	// (0x00018c6e) fep_hwr_write_pane_g6_ParamLimits

0x41f2,	// (0x00018c6e) fep_hwr_write_pane_g6

0x4c9c,	// (0x00019718) eswt_shell_pane_ParamLimits

0x1741,	// (0x000161bd) bg_popup_window_pane_cp18_ParamLimits

0x2a0b,	// (0x00017487) heading_pane_cp70

0x4dc6,	// (0x00019842) popup_eswt_tasktip_window_t1_ParamLimits

0xa8c2,	// (0x0001f33e) aid_touch_tab_arrow_left

0xa8d8,	// (0x0001f354) aid_touch_tab_arrow_right

0xb89e,	// (0x0002031a) title_pane_g3_ParamLimits

0xb89e,	// (0x0002031a) title_pane_g3

0xbf0b,	// (0x00020987) set_value_pane_g1

0xa7f8,	// (0x0001f274) popup_toolbar_trans_pane_ParamLimits

0x4f12,	// (0x0001998e) aid_size_cell_tb_trans_pane_ParamLimits

0xd903,	// (0x0002237f) bg_tb_trans_pane_ParamLimits

0x4f24,	// (0x000199a0) grid_tb_trans_pane_ParamLimits

0xba49,	// (0x000204c5) cont_note_pane_ParamLimits

0xba49,	// (0x000204c5) cont_note_pane

0xbca6,	// (0x00020722) cont_snote2_single_text_pane_ParamLimits

0xbca6,	// (0x00020722) cont_snote2_single_text_pane

0xbca6,	// (0x00020722) cont_snote2_single_graphic_pane_ParamLimits

0xbca6,	// (0x00020722) cont_snote2_single_graphic_pane

0x1d4c,	// (0x000167c8) cont_note_wait_pane_ParamLimits

0x1d4c,	// (0x000167c8) cont_note_wait_pane

0x1d4c,	// (0x000167c8) cont_note_image_pane_ParamLimits

0x1d4c,	// (0x000167c8) cont_note_image_pane

0x4ff8,	// (0x00019a74) popup_note2_window_g1_ParamLimits

0x4ff8,	// (0x00019a74) popup_note2_window_g1

0x5029,	// (0x00019aa5) popup_note2_window_t1_ParamLimits

0x5029,	// (0x00019aa5) popup_note2_window_t1

0x506e,	// (0x00019aea) popup_note2_window_t2_ParamLimits

0x506e,	// (0x00019aea) popup_note2_window_t2

0x50b3,	// (0x00019b2f) popup_note2_window_t3_ParamLimits

0x50b3,	// (0x00019b2f) popup_note2_window_t3

0x50f8,	// (0x00019b74) popup_note2_window_t4_ParamLimits

0x50f8,	// (0x00019b74) popup_note2_window_t4

0xbacd,	// (0x00020549) popup_note2_window_t5_ParamLimits

0xbacd,	// (0x00020549) popup_note2_window_t5

0x0004,

0xfc78,	// (0x000246f4) popup_note2_window_t_ParamLimits

0xfc78,	// (0x000246f4) popup_note2_window_t

0x5127,	// (0x00019ba3) popup_note2_image_window_g1_ParamLimits

0x5127,	// (0x00019ba3) popup_note2_image_window_g1

0x5133,	// (0x00019baf) popup_note2_image_window_g2_ParamLimits

0x5133,	// (0x00019baf) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x000246ff) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x000246ff) popup_note2_image_window_g

0x5145,	// (0x00019bc1) popup_note2_image_window_t1_ParamLimits

0x5145,	// (0x00019bc1) popup_note2_image_window_t1

0x515d,	// (0x00019bd9) popup_note2_image_window_t2_ParamLimits

0x515d,	// (0x00019bd9) popup_note2_image_window_t2

0x5175,	// (0x00019bf1) popup_note2_image_window_t3_ParamLimits

0x5175,	// (0x00019bf1) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00024704) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00024704) popup_note2_image_window_t

0x1d5a,	// (0x000167d6) popup_note2_wait_window_g1_ParamLimits

0x1d5a,	// (0x000167d6) popup_note2_wait_window_g1

0x5191,	// (0x00019c0d) popup_note2_wait_window_g2_ParamLimits

0x5191,	// (0x00019c0d) popup_note2_wait_window_g2

0x1d72,	// (0x000167ee) popup_note2_wait_window_g3_ParamLimits

0x1d72,	// (0x000167ee) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0002470b) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0002470b) popup_note2_wait_window_g

0x519d,	// (0x00019c19) popup_note2_wait_window_t1_ParamLimits

0x519d,	// (0x00019c19) popup_note2_wait_window_t1

0x51bb,	// (0x00019c37) popup_note2_wait_window_t2_ParamLimits

0x51bb,	// (0x00019c37) popup_note2_wait_window_t2

0x51d9,	// (0x00019c55) popup_note2_wait_window_t3_ParamLimits

0x51d9,	// (0x00019c55) popup_note2_wait_window_t3

0x51eb,	// (0x00019c67) popup_note2_wait_window_t4_ParamLimits

0x51eb,	// (0x00019c67) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00024712) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00024712) popup_note2_wait_window_t

0x51fd,	// (0x00019c79) wait_bar2_pane_ParamLimits

0x51fd,	// (0x00019c79) wait_bar2_pane

0x5215,	// (0x00019c91) popup_snote2_single_text_window_g1_ParamLimits

0x5215,	// (0x00019c91) popup_snote2_single_text_window_g1

0x523d,	// (0x00019cb9) popup_snote2_single_text_window_t1_ParamLimits

0x523d,	// (0x00019cb9) popup_snote2_single_text_window_t1

0x5289,	// (0x00019d05) popup_snote2_single_text_window_t2_ParamLimits

0x5289,	// (0x00019d05) popup_snote2_single_text_window_t2

0x52d5,	// (0x00019d51) popup_snote2_single_text_window_t3_ParamLimits

0x52d5,	// (0x00019d51) popup_snote2_single_text_window_t3

0x5316,	// (0x00019d92) popup_snote2_single_text_window_t4_ParamLimits

0x5316,	// (0x00019d92) popup_snote2_single_text_window_t4

0x534c,	// (0x00019dc8) popup_snote2_single_text_window_t5_ParamLimits

0x534c,	// (0x00019dc8) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x0002471b) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x0002471b) popup_snote2_single_text_window_t

0x5377,	// (0x00019df3) popup_snote2_single_graphic_window_g1_ParamLimits

0x5377,	// (0x00019df3) popup_snote2_single_graphic_window_g1

0x539f,	// (0x00019e1b) popup_snote2_single_graphic_window_g2_ParamLimits

0x539f,	// (0x00019e1b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00024726) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00024726) popup_snote2_single_graphic_window_g

0x53c7,	// (0x00019e43) popup_snote2_single_graphic_window_t1_ParamLimits

0x53c7,	// (0x00019e43) popup_snote2_single_graphic_window_t1

0x5413,	// (0x00019e8f) popup_snote2_single_graphic_window_t2_ParamLimits

0x5413,	// (0x00019e8f) popup_snote2_single_graphic_window_t2

0x52d5,	// (0x00019d51) popup_snote2_single_graphic_window_t3_ParamLimits

0x52d5,	// (0x00019d51) popup_snote2_single_graphic_window_t3

0x5316,	// (0x00019d92) popup_snote2_single_graphic_window_t4_ParamLimits

0x5316,	// (0x00019d92) popup_snote2_single_graphic_window_t4

0x534c,	// (0x00019dc8) popup_snote2_single_graphic_window_t5_ParamLimits

0x534c,	// (0x00019dc8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x0002472b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x0002472b) popup_snote2_single_graphic_window_t

0x3bef,	// (0x0001866b) clock_nsta_pane_cp2_t1

0x3bef,	// (0x0001866b) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0002453f) clock_nsta_pane_cp2_t

0xd922,	// (0x0002239e) form_field_data_wide_pane_g1_ParamLimits

0xd92e,	// (0x000223aa) form_field_data_wide_pane_g2_ParamLimits

0xd92e,	// (0x000223aa) form_field_data_wide_pane_g2

0xd93a,	// (0x000223b6) form_field_data_wide_pane_g3_ParamLimits

0xd93a,	// (0x000223b6) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000240f2) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000240f2) form_field_data_wide_pane_g

0xb31b,	// (0x0001fd97) grid_touch_3_pane_ParamLimits

0xb31b,	// (0x0001fd97) grid_touch_3_pane

0xbfe9,	// (0x00020a65) cell_touch_3_pane_ParamLimits

0xbfe9,	// (0x00020a65) cell_touch_3_pane

0x4155,	// (0x00018bd1) cell_touch_3_pane_g1

0x4155,	// (0x00018bd1) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x000245c4) cell_touch_3_pane_g

0xbaff,	// (0x0002057b) cont_query_data_pane

0xbb07,	// (0x00020583) cont_query_data_pane_cp1

0x5492,	// (0x00019f0e) button_value_adjust_pane_cp7

0x549a,	// (0x00019f16) query_popup_pane_cp3

0xe070,	// (0x00022aec) bg_popup_sub_pane_cp22_ParamLimits

0xe542,	// (0x00022fbe) navi_navi_volume_pane_cp2

0xe55d,	// (0x00022fd9) popup_side_volume_key_window_g2

0xe56c,	// (0x00022fe8) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00024188) popup_side_volume_key_window_g

0xe589,	// (0x00023005) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002418f) popup_side_volume_key_window_t

0xe27b,	// (0x00022cf7) popup_side_volume_key_window_ParamLimits

0x9755,	// (0x0001e1d1) list_double_graphic_pane_g4_ParamLimits

0x9755,	// (0x0001e1d1) list_double_graphic_pane_g4

0xb1b0,	// (0x0001fc2c) list_single_2heading_msg_pane_ParamLimits

0xb1b0,	// (0x0001fc2c) list_single_2heading_msg_pane

0xc033,	// (0x00020aaf) list_single_2heading_msg_pane_g1_ParamLimits

0xc033,	// (0x00020aaf) list_single_2heading_msg_pane_g1

0xc03f,	// (0x00020abb) list_single_2heading_msg_pane_g2_ParamLimits

0xc03f,	// (0x00020abb) list_single_2heading_msg_pane_g2

0xc052,	// (0x00020ace) list_single_2heading_msg_pane_g3_ParamLimits

0xc052,	// (0x00020ace) list_single_2heading_msg_pane_g3

0xc05e,	// (0x00020ada) list_single_2heading_msg_pane_g4_ParamLimits

0xc05e,	// (0x00020ada) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00024736) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00024736) list_single_2heading_msg_pane_g

0xc076,	// (0x00020af2) list_single_2heading_msg_pane_t1_ParamLimits

0xc076,	// (0x00020af2) list_single_2heading_msg_pane_t1

0xc09e,	// (0x00020b1a) list_single_2heading_msg_pane_t2_ParamLimits

0xc09e,	// (0x00020b1a) list_single_2heading_msg_pane_t2

0xc109,	// (0x00020b85) list_single_2heading_msg_pane_t3_ParamLimits

0xc109,	// (0x00020b85) list_single_2heading_msg_pane_t3

0x558b,	// (0x0001a007) list_single_2heading_msg_pane_t4_ParamLimits

0x558b,	// (0x0001a007) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0002473f) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0002473f) list_single_2heading_msg_pane_t

0xb8aa,	// (0x00020326) title_pane_g4_ParamLimits

0xb8aa,	// (0x00020326) title_pane_g4

0xdccc,	// (0x00022748) title_pane_stacon_g3_ParamLimits

0xdccc,	// (0x00022748) title_pane_stacon_g3

0x4f8f,	// (0x00019a0b) list_single_2graphic_im_pane_g4_ParamLimits

0x4f8f,	// (0x00019a0b) list_single_2graphic_im_pane_g4

0x27bc,	// (0x00017238) popup_side_volume_key_window_cp

0x30c7,	// (0x00017b43) main_idle_act2_pane_t1

0xe839,	// (0x000232b5) toolbar_button_pane_g10

0x960c,	// (0x0001e088) popup_toolbar_window_cp1

0x3be0,	// (0x0001865c) clock_nsta_pane_cp_t1

0x3be0,	// (0x0001865c) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0002453a) clock_nsta_pane_cp_t

0xe542,	// (0x00022fbe) navi_navi_volume_pane_cp2_ParamLimits

0xe551,	// (0x00022fcd) popup_side_volume_key_window_g1_ParamLimits

0xe55d,	// (0x00022fd9) popup_side_volume_key_window_g2_ParamLimits

0xe56c,	// (0x00022fe8) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00024188) popup_side_volume_key_window_g_ParamLimits

0xeb40,	// (0x000235bc) fep_hwr_aid_pane

0xebe9,	// (0x00023665) bg_fep_hwr_top_pane_g4_ParamLimits

0x41b6,	// (0x00018c32) fep_hwr_top_pane_g1_ParamLimits

0x41c8,	// (0x00018c44) fep_hwr_top_pane_g2_ParamLimits

0xec09,	// (0x00023685) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0002458f) fep_hwr_top_pane_g_ParamLimits

0xec1e,	// (0x0002369a) fep_hwr_top_text_pane_ParamLimits

0x2571,	// (0x00016fed) aid_touch_tab_arrow_arrow_2

0x257a,	// (0x00016ff6) aid_touch_tab_arrow_left_2

0xeb54,	// (0x000235d0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xeb8b,	// (0x00023607) fep_hwr_prediction_pane

0x431e,	// (0x00018d9a) fep_vkb_prediction_pane

0xb64a,	// (0x000200c6) fep_vkb_side_pane_g3_ParamLimits

0xb64a,	// (0x000200c6) fep_vkb_side_pane_g3

0xed32,	// (0x000237ae) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xeda3,	// (0x0002381f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xedb0,	// (0x0002382c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0002463e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xeedf,	// (0x0002395b) fep_hwr_prediction_pane_g1

0xeee9,	// (0x00023965) fep_hwr_prediction_pane_g2

0xeef1,	// (0x0002396d) fep_hwr_prediction_pane_g3

0xeef9,	// (0x00023975) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00024748) fep_hwr_prediction_pane_g

0x55b0,	// (0x0001a02c) fep_vkb_prediction_pane_g1

0x55ba,	// (0x0001a036) fep_vkb_prediction_pane_g2

0x55c2,	// (0x0001a03e) fep_vkb_prediction_pane_g3

0x55ca,	// (0x0001a046) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00024751) fep_vkb_prediction_pane_g

0xe96f,	// (0x000233eb) slider_set_pane_g3

0xe983,	// (0x000233ff) slider_set_pane_g4

0xe99b,	// (0x00023417) slider_set_pane_g5

0xe96f,	// (0x000233eb) slider_set_pane_g6

0xe9b1,	// (0x0002342d) slider_set_pane_g7

0x2c72,	// (0x000176ee) slider_form_pane_g3

0x2c7b,	// (0x000176f7) slider_form_pane_g4

0x2c83,	// (0x000176ff) slider_form_pane_g5

0x2c72,	// (0x000176ee) slider_form_pane_g6

0xb153,	// (0x0001fbcf) slider_form_pane_g7

0x33ca,	// (0x00017e46) slider_set_pane_vc_g3

0x33d3,	// (0x00017e4f) slider_set_pane_vc_g4

0x33dc,	// (0x00017e58) slider_set_pane_vc_g5

0x33ca,	// (0x00017e46) slider_set_pane_vc_g6

0x33e5,	// (0x00017e61) slider_set_pane_vc_g7

0x3893,	// (0x0001830f) slider_form_pane_vc_g1

0x389c,	// (0x00018318) slider_form_pane_vc_g2

0x38a5,	// (0x00018321) slider_form_pane_vc_g3

0x3893,	// (0x0001830f) slider_form_pane_vc_g4

0x38ae,	// (0x0001832a) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0002450c) slider_form_pane_vc_g

0xb880,	// (0x000202fc) main_idle_act3_pane

0x55d2,	// (0x0001a04e) ai3_links_pane

0xc177,	// (0x00020bf3) popup_ai3_data_window_ParamLimits

0xc177,	// (0x00020bf3) popup_ai3_data_window

0xb880,	// (0x000202fc) grid_ai3_links_pane

0xc195,	// (0x00020c11) cell_ai3_links_pane_ParamLimits

0xc195,	// (0x00020c11) cell_ai3_links_pane

0x5613,	// (0x0001a08f) bg_popup_sub_pane_cp11

0x5620,	// (0x0001a09c) cell_ai3_links_pane_g1

0xb880,	// (0x000202fc) bg_popup_sub_pane_cp12

0x5645,	// (0x0001a0c1) heading_ai3_data_pane

0x564d,	// (0x0001a0c9) list_ai3_gene_pane

0x567a,	// (0x0001a0f6) popup_ai3_data_window_g1

0x5682,	// (0x0001a0fe) heading_ai3_data_pane_g1

0x568a,	// (0x0001a106) heading_ai3_data_pane_t1

0x5698,	// (0x0001a114) list_double_ai3_gene_pane_ParamLimits

0x5698,	// (0x0001a114) list_double_ai3_gene_pane

0x56a5,	// (0x0001a121) list_single_ai3_gene_pane_ParamLimits

0x56a5,	// (0x0001a121) list_single_ai3_gene_pane

0x411a,	// (0x00018b96) list_highlight_pane_cp7_ParamLimits

0x411a,	// (0x00018b96) list_highlight_pane_cp7

0x56b2,	// (0x0001a12e) list_single_a13_gene_pane_t1_ParamLimits

0x56b2,	// (0x0001a12e) list_single_a13_gene_pane_t1

0x56c9,	// (0x0001a145) list_single_ai3_gene_pane_g1

0x56d2,	// (0x0001a14e) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x0002475a) list_single_ai3_gene_pane_g

0x56da,	// (0x0001a156) list_double_ai3_gene_pane_g1_ParamLimits

0x56da,	// (0x0001a156) list_double_ai3_gene_pane_g1

0x56e6,	// (0x0001a162) list_double_ai3_gene_pane_t1_ParamLimits

0x56e6,	// (0x0001a162) list_double_ai3_gene_pane_t1

0x5702,	// (0x0001a17e) list_double_ai3_gene_pane_t2_ParamLimits

0x5702,	// (0x0001a17e) list_double_ai3_gene_pane_t2

0x5717,	// (0x0001a193) list_double_ai3_gene_pane_t3_ParamLimits

0x5717,	// (0x0001a193) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0002475f) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0002475f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x54ab,	// (0x00019f27) aid_size_min_col_2

0xc01d,	// (0x00020a99) aid_size_min_msg_ParamLimits

0xc01d,	// (0x00020a99) aid_size_min_msg

0xb65e,	// (0x000200da) fep_vkb_top_text_pane_g2_ParamLimits

0xb65e,	// (0x000200da) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000245bf) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000245bf) fep_vkb_top_text_pane_g

0xb880,	// (0x000202fc) main_hc_apps_shell_pane

0x5734,	// (0x0001a1b0) grid_hc_apps_pane_ParamLimits

0x5734,	// (0x0001a1b0) grid_hc_apps_pane

0x5743,	// (0x0001a1bf) list_hc_apps_pane

0x574b,	// (0x0001a1c7) scroll_pane_cp37_ParamLimits

0x574b,	// (0x0001a1c7) scroll_pane_cp37

0xc1af,	// (0x00020c2b) cell_hc_apps_pane_ParamLimits

0xc1af,	// (0x00020c2b) cell_hc_apps_pane

0xc279,	// (0x00020cf5) cell_hc_apps_pane_g1_ParamLimits

0xc279,	// (0x00020cf5) cell_hc_apps_pane_g1

0x5840,	// (0x0001a2bc) cell_hc_apps_pane_g2_ParamLimits

0x5840,	// (0x0001a2bc) cell_hc_apps_pane_g2

0x585c,	// (0x0001a2d8) cell_hc_apps_pane_g3_ParamLimits

0x585c,	// (0x0001a2d8) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00024766) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00024766) cell_hc_apps_pane_g

0xc2a6,	// (0x00020d22) cell_hc_apps_pane_t1_ParamLimits

0xc2a6,	// (0x00020d22) cell_hc_apps_pane_t1

0xba49,	// (0x000204c5) grid_highlight_pane_cp10_ParamLimits

0xba49,	// (0x000204c5) grid_highlight_pane_cp10

0xc2e6,	// (0x00020d62) list_single_hc_apps_pane_ParamLimits

0xc2e6,	// (0x00020d62) list_single_hc_apps_pane

0xc320,	// (0x00020d9c) list_single_hc_apps_pane_g1

0xc339,	// (0x00020db5) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0002476d) list_single_hc_apps_pane_g

0xc352,	// (0x00020dce) list_single_hc_apps_pane_g2_copy1

0xc36e,	// (0x00020dea) list_single_hc_apps_pane_t1

0xb8fc,	// (0x00020378) bg_set_opt_pane_cp_ParamLimits

0xd83c,	// (0x000222b8) setting_slider_pane_t1_ParamLimits

0xd855,	// (0x000222d1) setting_slider_pane_t2_ParamLimits

0xd86f,	// (0x000222eb) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023fda) setting_slider_pane_t_ParamLimits

0xd887,	// (0x00022303) slider_set_pane_ParamLimits

0xe78e,	// (0x0002320a) control_pane_g5_ParamLimits

0xe78e,	// (0x0002320a) control_pane_g5

0x2a9f,	// (0x0001751b) slider_set_pane_g1_ParamLimits

0xe963,	// (0x000233df) slider_set_pane_g2_ParamLimits

0xe96f,	// (0x000233eb) slider_set_pane_g3_ParamLimits

0xe983,	// (0x000233ff) slider_set_pane_g4_ParamLimits

0xe99b,	// (0x00023417) slider_set_pane_g5_ParamLimits

0xe96f,	// (0x000233eb) slider_set_pane_g6_ParamLimits

0xe9b1,	// (0x0002342d) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x000243d6) slider_set_pane_g_ParamLimits

0xe323,	// (0x00022d9f) navi_icon_text_pane_ParamLimits

0xa889,	// (0x0001f305) aid_fill_nsta_2_ParamLimits

0xa8c2,	// (0x0001f33e) aid_touch_tab_arrow_left_ParamLimits

0xa8d8,	// (0x0001f354) aid_touch_tab_arrow_right_ParamLimits

0xa973,	// (0x0001f3ef) clock_nsta_pane_ParamLimits

0xae7f,	// (0x0001f8fb) navi_icon_pane_g1_ParamLimits

0xae8b,	// (0x0001f907) navi_text_pane_t1_ParamLimits

0xb3f1,	// (0x0001fe6d) navi_icon_text_pane_g1_ParamLimits

0xb3fd,	// (0x0001fe79) navi_icon_text_pane_t1_ParamLimits

0xc320,	// (0x00020d9c) list_single_hc_apps_pane_g1_ParamLimits

0xc339,	// (0x00020db5) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0002476d) list_single_hc_apps_pane_g_ParamLimits

0xc352,	// (0x00020dce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc36e,	// (0x00020dea) list_single_hc_apps_pane_t1_ParamLimits

0x87ee,	// (0x0001d26a) popup_toolbar2_fixed_window_ParamLimits

0x87ee,	// (0x0001d26a) popup_toolbar2_fixed_window

0xa7ee,	// (0x0001f26a) popup_toolbar2_float_window

0xb880,	// (0x000202fc) bg_popup_sub_pane_cp27

0x5979,	// (0x0001a3f5) grid_toolbar2_float_pane

0xb880,	// (0x000202fc) bg_popup_sub_pane_cp26

0x5979,	// (0x0001a3f5) grid_toolbar2_fixed_pane

0xc39c,	// (0x00020e18) cell_toolbar2_fixed_pane_ParamLimits

0xc39c,	// (0x00020e18) cell_toolbar2_fixed_pane

0xc3b9,	// (0x00020e35) cell_toolbar2_fixed_pane_g1

0x599a,	// (0x0001a416) toolbar2_fixed_button_pane

0x161b,	// (0x00016097) toolbar2_fixed_button_pane_g1

0x162b,	// (0x000160a7) toolbar2_fixed_button_pane_g2

0x1623,	// (0x0001609f) toolbar2_fixed_button_pane_g3

0x163b,	// (0x000160b7) toolbar2_fixed_button_pane_g4

0x1633,	// (0x000160af) toolbar2_fixed_button_pane_g5

0x1643,	// (0x000160bf) toolbar2_fixed_button_pane_g6

0x164b,	// (0x000160c7) toolbar2_fixed_button_pane_g7

0x165b,	// (0x000160d7) toolbar2_fixed_button_pane_g8

0x1653,	// (0x000160cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x000242d8) toolbar2_fixed_button_pane_g

0x59a2,	// (0x0001a41e) cell_toolbar2_float_pane_ParamLimits

0x59a2,	// (0x0001a41e) cell_toolbar2_float_pane

0x59b3,	// (0x0001a42f) cell_toolbar2_float_pane_g1

0x599a,	// (0x0001a416) toolbar2_fixed_button_pane_cp

0xb546,	// (0x0001ffc2) fep_vkb_accented_list_pane_ParamLimits

0xb546,	// (0x0001ffc2) fep_vkb_accented_list_pane

0xed12,	// (0x0002378e) bg_popup_fep_shadow_pane_g9

0xe473,	// (0x00022eef) bg_popup_fep_shadow_pane_cp3

0xdab3,	// (0x0002252f) list_accented_list_pane

0x59bc,	// (0x0001a438) list_single_accented_list_pane_ParamLimits

0x59bc,	// (0x0001a438) list_single_accented_list_pane

0xe473,	// (0x00022eef) list_highlight_pane_cp10

0x59cd,	// (0x0001a449) list_single_accented_list_pane_t1

0xa70a,	// (0x0001f186) popup_slider_window_ParamLimits

0xa70a,	// (0x0001f186) popup_slider_window

0x54a2,	// (0x00019f1e) aid_indentation_list_msg

0xc4c4,	// (0x00020f40) bg_popup_window_pane_cp19

0x5b07,	// (0x0001a583) popup_slider_window_g1

0x5b23,	// (0x0001a59f) popup_slider_window_g2

0x5b3f,	// (0x0001a5bb) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00024772) popup_slider_window_g

0x5b9b,	// (0x0001a617) popup_slider_window_t1

0x5c0f,	// (0x0001a68b) small_volume_slider_vertical_pane

0x4155,	// (0x00018bd1) small_volume_slider_vertical_pane_g1

0x4155,	// (0x00018bd1) small_volume_slider_vertical_pane_g2

0x5c2b,	// (0x0001a6a7) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00024784) small_volume_slider_vertical_pane_g

0x8758,	// (0x0001d1d4) area_side_right_pane_ParamLimits

0x8758,	// (0x0001d1d4) area_side_right_pane

0x8c58,	// (0x0001d6d4) aid_size_side_button_ParamLimits

0x8c58,	// (0x0001d6d4) aid_size_side_button

0x8c71,	// (0x0001d6ed) grid_sctrl_middle_pane_ParamLimits

0x8c71,	// (0x0001d6ed) grid_sctrl_middle_pane

0xef0a,	// (0x00023986) sctrl_sk_bottom_pane

0xef1b,	// (0x00023997) sctrl_sk_top_pane

0xef2d,	// (0x000239a9) aid_touch_sctrl_top

0xef3a,	// (0x000239b6) bg_sctrl_sk_pane_ParamLimits

0xef3a,	// (0x000239b6) bg_sctrl_sk_pane

0xef48,	// (0x000239c4) sctrl_sk_top_pane_g1

0xef55,	// (0x000239d1) sctrl_sk_top_pane_t1

0xef2d,	// (0x000239a9) aid_touch_sctrl_bottom

0xef3a,	// (0x000239b6) bg_sctrl_sk_pane_cp_ParamLimits

0xef3a,	// (0x000239b6) bg_sctrl_sk_pane_cp

0xef70,	// (0x000239ec) sctrl_sk_bottom_pane_g1

0xef55,	// (0x000239d1) sctrl_sk_bottom_pane_t1

0x8c8b,	// (0x0001d707) cell_sctrl_middle_pane_ParamLimits

0x8c8b,	// (0x0001d707) cell_sctrl_middle_pane

0x8c9e,	// (0x0001d71a) aid_touch_sctrl_middle_ParamLimits

0x8c9e,	// (0x0001d71a) aid_touch_sctrl_middle

0x8cab,	// (0x0001d727) bg_sctrl_middle_pane_ParamLimits

0x8cab,	// (0x0001d727) bg_sctrl_middle_pane

0xef79,	// (0x000239f5) cell_sctrl_middle_pane_g1_ParamLimits

0xef79,	// (0x000239f5) cell_sctrl_middle_pane_g1

0x8cb9,	// (0x0001d735) cell_sctrl_middle_pane_g2_ParamLimits

0x8cb9,	// (0x0001d735) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00024790) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00024790) cell_sctrl_middle_pane_g

0x161b,	// (0x00016097) bg_sctrl_middle_pane_g1

0x1623,	// (0x0001609f) bg_sctrl_middle_pane_g2

0x162b,	// (0x000160a7) bg_sctrl_middle_pane_g3

0x1633,	// (0x000160af) bg_sctrl_middle_pane_g4

0x163b,	// (0x000160b7) bg_sctrl_middle_pane_g5

0x1643,	// (0x000160bf) bg_sctrl_middle_pane_g6

0x164b,	// (0x000160c7) bg_sctrl_middle_pane_g7

0x1653,	// (0x000160cf) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00024795) bg_sctrl_middle_pane_g

0x165b,	// (0x000160d7) bg_sctrl_middle_pane_g8_copy1

0x161b,	// (0x00016097) bg_sctrl_sk_pane_g1

0x162b,	// (0x000160a7) bg_sctrl_sk_pane_g2

0x1623,	// (0x0001609f) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x000242d8) bg_sctrl_sk_pane_g

0xbe64,	// (0x000208e0) aid_size_touch_scroll_bar

0x163b,	// (0x000160b7) bg_sctrl_sk_pane_g4

0x1633,	// (0x000160af) bg_sctrl_sk_pane_g5

0x1643,	// (0x000160bf) bg_sctrl_sk_pane_g6

0x164b,	// (0x000160c7) bg_sctrl_sk_pane_g7

0x165b,	// (0x000160d7) bg_sctrl_sk_pane_g8

0x1653,	// (0x000160cf) bg_sctrl_sk_pane_g9

0x0b5a,	// (0x000155d6) popup_fep_china_hwr2_fs_candidate_window

0xa1c2,	// (0x0001ec3e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa1c2,	// (0x0001ec3e) popup_fep_china_hwr2_fs_control_window

0xed32,	// (0x000237ae) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x0002478b) sctrl_sk_top_pane_g

0xc57c,	// (0x00020ff8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc57c,	// (0x00020ff8) aid_fep_china_hwr2_fs_cell

0xc592,	// (0x0002100e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc592,	// (0x0002100e) bg_popup_fep_shadow_pane_cp4

0xc5a9,	// (0x00021025) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc5a9,	// (0x00021025) bg_popup_fep_shadow_pane_cp5

0xc5bb,	// (0x00021037) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc5bb,	// (0x00021037) popup_fep_china_hwr2_fs_control_bar_grid

0xc5cf,	// (0x0002104b) popup_fep_china_hwr2_fs_control_funtion_grid

0x5c8a,	// (0x0001a706) aid_fep_china_hwr2_fs_candi_cell

0xb880,	// (0x000202fc) bg_popup_fep_shadow_pane_cp6

0x5c94,	// (0x0001a710) popup_fep_china_hwr2_fs_candidate_grid

0xc5d7,	// (0x00021053) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc5d7,	// (0x00021053) cell_fep_china_hwr2_fs_funtion_grid

0x4155,	// (0x00018bd1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5cb6,	// (0x0001a732) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5cb6,	// (0x0001a732) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5cc4,	// (0x0001a740) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5cc4,	// (0x0001a740) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x000247a6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x000247a6) cell_fep_china_hwr2_fs_funtion_grid_g

0xc5ef,	// (0x0002106b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc5ef,	// (0x0002106b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc604,	// (0x00021080) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc604,	// (0x00021080) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x000247ab) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x000247ab) cell_fep_china_hwr2_fs_funtion_grid_t

0x5d0b,	// (0x0001a787) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5d13,	// (0x0001a78f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5d1b,	// (0x0001a797) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x000247b0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5d23,	// (0x0001a79f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5d23,	// (0x0001a79f) cell_fep_china_hwr2_fs_candidate_grid

0x5d42,	// (0x0001a7be) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5d4a,	// (0x0001a7c6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4155,	// (0x00018bd1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4155,	// (0x00018bd1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x000245c4) cell_fep_china_hwr2_fs_candidate_grid_g

0x5d52,	// (0x0001a7ce) cell_fep_china_hwr2_fs_candidate_grid_t1

0x11c9,	// (0x00015c45) clock_nsta_pane_cp_24_ParamLimits

0x11c9,	// (0x00015c45) clock_nsta_pane_cp_24

0x1249,	// (0x00015cc5) indicator_nsta_pane_cp_24_ParamLimits

0x1249,	// (0x00015cc5) indicator_nsta_pane_cp_24

0x23cf,	// (0x00016e4b) heading_pane_g1

0x0001,

0xf8c1,	// (0x0002433d) heading_pane_g

0x2f0e,	// (0x0001798a) grid_sct_catagory_button_pane

0x2f40,	// (0x000179bc) scroll_pane_cp5_ParamLimits

0x3d4b,	// (0x000187c7) button_value_adjust_pane_cp5_ParamLimits

0x3d4b,	// (0x000187c7) button_value_adjust_pane_cp5

0x3e51,	// (0x000188cd) form2_midp_time_pane_ParamLimits

0x5d60,	// (0x0001a7dc) cell_sct_catagory_button_pane_ParamLimits

0x5d60,	// (0x0001a7dc) cell_sct_catagory_button_pane

0x411a,	// (0x00018b96) bg_button_pane_cp01_ParamLimits

0x411a,	// (0x00018b96) bg_button_pane_cp01

0x4155,	// (0x00018bd1) cell_sct_catagory_button_pane_g1

0xa78b,	// (0x0001f207) popup_tb_extension_window

0xc620,	// (0x0002109c) aid_size_cell_ext_ParamLimits

0xc620,	// (0x0002109c) aid_size_cell_ext

0xbca6,	// (0x00020722) bg_tb_trans_pane_cp1_ParamLimits

0xbca6,	// (0x00020722) bg_tb_trans_pane_cp1

0xc646,	// (0x000210c2) grid_tb_ext_pane_ParamLimits

0xc646,	// (0x000210c2) grid_tb_ext_pane

0xc686,	// (0x00021102) cell_tb_ext_pane_ParamLimits

0xc686,	// (0x00021102) cell_tb_ext_pane

0xc6ae,	// (0x0002112a) cell_tb_ext_pane_g1_ParamLimits

0xc6ae,	// (0x0002112a) cell_tb_ext_pane_g1

0x5df6,	// (0x0001a872) cell_tb_ext_pane_t1

0xba49,	// (0x000204c5) list_highlight_pane_cp11_ParamLimits

0xba49,	// (0x000204c5) list_highlight_pane_cp11

0x8803,	// (0x0001d27f) popup_uni_indicator_window_ParamLimits

0x8803,	// (0x0001d27f) popup_uni_indicator_window

0xd903,	// (0x0002237f) bg_popup_sub_pane_cp14

0x5e11,	// (0x0001a88d) list_uniindi_pane

0x5e1d,	// (0x0001a899) uniindi_top_pane

0xba49,	// (0x000204c5) bg_uniindi_top_pane

0x5e3e,	// (0x0001a8ba) uniindi_top_pane_g1

0x5e54,	// (0x0001a8d0) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x000247b7) uniindi_top_pane_g

0x5e7e,	// (0x0001a8fa) uniindi_top_pane_t1

0x5eaa,	// (0x0001a926) list_single_uniindi_pane_ParamLimits

0x5eaa,	// (0x0001a926) list_single_uniindi_pane

0x4155,	// (0x00018bd1) bg_uniindi_top_pane_g1

0x5ebc,	// (0x0001a938) list_single_uniindi_pane_g1

0x5ecf,	// (0x0001a94b) list_single_uniindi_pane_t1

0xd719,	// (0x00022195) control_bg_pane

0x5ef4,	// (0x0001a970) bg_sctrl_sk_pane_cp1

0x5efd,	// (0x0001a979) bg_sctrl_sk_pane_cp2

0x5f06,	// (0x0001a982) control_bg_pane_g1

0x5f0f,	// (0x0001a98b) control_bg_pane_g2

0x0001,

0xfd44,	// (0x000247c0) control_bg_pane_g

0x3b72,	// (0x000185ee) cell_indicator_nsta_pane_g1_ParamLimits

0xb34a,	// (0x0001fdc6) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00024528) cell_indicator_nsta_pane_g_ParamLimits

0x3ee1,	// (0x0001895d) form2_midp_time_pane_t1_ParamLimits

0xa138,	// (0x0001ebb4) main_idle_act4_pane_ParamLimits

0xa138,	// (0x0001ebb4) main_idle_act4_pane

0xa78b,	// (0x0001f207) popup_tb_extension_window_ParamLimits

0xc66e,	// (0x000210ea) tb_ext_find_pane_ParamLimits

0xc66e,	// (0x000210ea) tb_ext_find_pane

0x5f18,	// (0x0001a994) ai_gene_pane_1_cp1

0x085b,	// (0x000152d7) ai_gene_pane_2_cp1

0x5f20,	// (0x0001a99c) list_single_idle_plugin_calendar_pane

0x5f29,	// (0x0001a9a5) list_single_idle_plugin_notification_pane

0x5f32,	// (0x0001a9ae) list_single_idle_plugin_player_pane

0xc6cb,	// (0x00021147) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc6cb,	// (0x00021147) list_single_idle_plugin_shortcut_pane

0xc6f3,	// (0x0002116f) main_idle_act4_pane_t1

0xc70b,	// (0x00021187) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x000247c5) main_idle_act4_pane_t

0xc723,	// (0x0002119f) middle_sk_idle_act4_pane_ParamLimits

0xc723,	// (0x0002119f) middle_sk_idle_act4_pane

0xc73f,	// (0x000211bb) popup_clock_digital_analogue_window_cp2

0xc766,	// (0x000211e2) shortcut_wheel_idle_act4_pane_ParamLimits

0xc766,	// (0x000211e2) shortcut_wheel_idle_act4_pane

0x4155,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g1

0x4155,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g2

0x4155,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g3

0x4155,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g4

0x4155,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g5

0x5fc5,	// (0x0001aa41) shortcut_wheel_idle_act4_pane_g6

0x5fcd,	// (0x0001aa49) shortcut_wheel_idle_act4_pane_g7

0x5fd5,	// (0x0001aa51) shortcut_wheel_idle_act4_pane_g8

0x5fdd,	// (0x0001aa59) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x000247ca) shortcut_wheel_idle_act4_pane_g

0xb850,	// (0x000202cc) middle_sk_idle_act4_pane_g1_ParamLimits

0xb850,	// (0x000202cc) middle_sk_idle_act4_pane_g1

0xc7e3,	// (0x0002125f) middle_sk_idle_act4_pane_g2_ParamLimits

0xc7e3,	// (0x0002125f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x000247ed) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x000247ed) middle_sk_idle_act4_pane_g

0xc7fb,	// (0x00021277) middle_sk_idle_act4_pane_t1_ParamLimits

0xc7fb,	// (0x00021277) middle_sk_idle_act4_pane_t1

0xc82a,	// (0x000212a6) grid_ai_shortcut_pane_ParamLimits

0xc82a,	// (0x000212a6) grid_ai_shortcut_pane

0xc847,	// (0x000212c3) list_highlight_pane_cp16_ParamLimits

0xc847,	// (0x000212c3) list_highlight_pane_cp16

0xc854,	// (0x000212d0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc854,	// (0x000212d0) list_single_idle_plugin_shortcut_pane_g1

0xc860,	// (0x000212dc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc860,	// (0x000212dc) list_single_idle_plugin_shortcut_pane_g2

0xc87e,	// (0x000212fa) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc87e,	// (0x000212fa) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x000247f2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x000247f2) list_single_idle_plugin_shortcut_pane_g

0xc893,	// (0x0002130f) cell_ai_shortcut_pane_ParamLimits

0xc893,	// (0x0002130f) cell_ai_shortcut_pane

0xc8a9,	// (0x00021325) cell_ai_shortcut_pane_g1_ParamLimits

0xc8a9,	// (0x00021325) cell_ai_shortcut_pane_g1

0x5f18,	// (0x0001a994) ai_gene_pane_1_cp2

0x610e,	// (0x0001ab8a) ai_gene_pane_2_cp2

0x6116,	// (0x0001ab92) list_highlight_pane_cp15

0x611f,	// (0x0001ab9b) list_single_idle_plugin_calendar_pane_g1

0x6116,	// (0x0001ab92) list_highlight_pane_cp17

0x6127,	// (0x0001aba3) list_single_idle_plugin_calendar_pane_g1_copy1

0x612f,	// (0x0001abab) list_single_idle_plugin_player_pane_g1

0x3175,	// (0x00017bf1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x000247f9) list_single_idle_plugin_player_pane_g

0x6137,	// (0x0001abb3) list_single_idle_plugin_player_pane_t1

0x6145,	// (0x0001abc1) list_single_idle_plugin_player_pane_t2

0x6153,	// (0x0001abcf) list_single_idle_plugin_player_pane_t3

0x6161,	// (0x0001abdd) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x000247fe) list_single_idle_plugin_player_pane_t

0x616f,	// (0x0001abeb) wait_bar_pane_cp15

0x6177,	// (0x0001abf3) grid_ai_notification_pane

0x3175,	// (0x00017bf1) list_single_idle_plugin_notification_pane_g1

0xc8cb,	// (0x00021347) cell_ai_notification_pane_ParamLimits

0xc8cb,	// (0x00021347) cell_ai_notification_pane

0x618d,	// (0x0001ac09) cell_ai_notification_pane_g1

0x6195,	// (0x0001ac11) cell_ai_notification_pane_t1

0xc8d8,	// (0x00021354) tb_ext_find_button_pane

0xc8e0,	// (0x0002135c) tb_ext_find_pane_g1

0xc8e8,	// (0x00021364) tb_ext_find_pane_t1

0xe010,	// (0x00022a8c) tb_ext_find_button_pane_g1

0x61c1,	// (0x0001ac3d) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00024807) tb_ext_find_button_pane_g

0xc6f3,	// (0x0002116f) main_idle_act4_pane_t1_ParamLimits

0xc70b,	// (0x00021187) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x000247c5) main_idle_act4_pane_t_ParamLimits

0xc73f,	// (0x000211bb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc756,	// (0x000211d2) sat_plugin_idle_act4_pane_ParamLimits

0xc756,	// (0x000211d2) sat_plugin_idle_act4_pane

0xc8f6,	// (0x00021372) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc8f6,	// (0x00021372) sat_plugin_idle_act4_pane_t1

0xc90e,	// (0x0002138a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc90e,	// (0x0002138a) sat_plugin_idle_act4_pane_t2

0xc926,	// (0x000213a2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc926,	// (0x000213a2) sat_plugin_idle_act4_pane_t3

0xc93e,	// (0x000213ba) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc93e,	// (0x000213ba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0002480c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0002480c) sat_plugin_idle_act4_pane_t

0xd7de,	// (0x0002225a) popup_battery_window_ParamLimits

0xd7de,	// (0x0002225a) popup_battery_window

0xba49,	// (0x000204c5) bg_popup_sub_pane_cp25_ParamLimits

0xba49,	// (0x000204c5) bg_popup_sub_pane_cp25

0x6216,	// (0x0001ac92) popup_battery_window_g1_ParamLimits

0x6216,	// (0x0001ac92) popup_battery_window_g1

0x6222,	// (0x0001ac9e) popup_battery_window_t1_ParamLimits

0x6222,	// (0x0001ac9e) popup_battery_window_t1

0x6234,	// (0x0001acb0) popup_battery_window_t2_ParamLimits

0x6234,	// (0x0001acb0) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00024815) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00024815) popup_battery_window_t

0x9f81,	// (0x0001e9fd) midp_canvas_pane_ParamLimits

0x9fdc,	// (0x0001ea58) midp_keypad_pane_ParamLimits

0x9fdc,	// (0x0001ea58) midp_keypad_pane

0x0aa4,	// (0x00015520) main_midp_pane_ParamLimits

0x3bfe,	// (0x0001867a) signal_pane_g2_cp_ParamLimits

0xc956,	// (0x000213d2) aid_size_cell_midp_keypad_ParamLimits

0xc956,	// (0x000213d2) aid_size_cell_midp_keypad

0xc974,	// (0x000213f0) midp_keyp_game_grid_pane_ParamLimits

0xc974,	// (0x000213f0) midp_keyp_game_grid_pane

0xc99b,	// (0x00021417) midp_keyp_rocker_pane_ParamLimits

0xc99b,	// (0x00021417) midp_keyp_rocker_pane

0xc9da,	// (0x00021456) midp_keyp_sk_left_pane_ParamLimits

0xc9da,	// (0x00021456) midp_keyp_sk_left_pane

0xca2e,	// (0x000214aa) midp_keyp_sk_right_pane_ParamLimits

0xca2e,	// (0x000214aa) midp_keyp_sk_right_pane

0xb880,	// (0x000202fc) bg_button_pane_cp03

0xca82,	// (0x000214fe) midp_keyp_sk_left_pane_g1

0xb880,	// (0x000202fc) bg_button_pane_cp04

0xca82,	// (0x000214fe) midp_keyp_sk_right_pane_g1

0x4155,	// (0x00018bd1) midp_keyp_rocker_pane_g1

0xca8b,	// (0x00021507) keyp_game_cell_pane_ParamLimits

0xca8b,	// (0x00021507) keyp_game_cell_pane

0xb880,	// (0x000202fc) bg_button_pane_cp02

0xcab1,	// (0x0002152d) keyp_game_cell_pane_g1

0x879a,	// (0x0001d216) popup_fep_vkb2_window_ParamLimits

0x879a,	// (0x0001d216) popup_fep_vkb2_window

0x8cc5,	// (0x0001d741) aid_size_cell_vkb2_ParamLimits

0x8cc5,	// (0x0001d741) aid_size_cell_vkb2

0x8cfb,	// (0x0001d777) popup_fep_vkb2_window_g1_ParamLimits

0x8cfb,	// (0x0001d777) popup_fep_vkb2_window_g1

0x8d4b,	// (0x0001d7c7) vkb2_area_bottom_pane_ParamLimits

0x8d4b,	// (0x0001d7c7) vkb2_area_bottom_pane

0x8da7,	// (0x0001d823) vkb2_area_keypad_pane_ParamLimits

0x8da7,	// (0x0001d823) vkb2_area_keypad_pane

0x8df5,	// (0x0001d871) vkb2_area_top_pane_ParamLimits

0x8df5,	// (0x0001d871) vkb2_area_top_pane

0x8e7b,	// (0x0001d8f7) vkb2_top_entry_pane_ParamLimits

0x8e7b,	// (0x0001d8f7) vkb2_top_entry_pane

0x8ea8,	// (0x0001d924) vkb2_top_grid_left_pane_ParamLimits

0x8ea8,	// (0x0001d924) vkb2_top_grid_left_pane

0x8ec8,	// (0x0001d944) vkb2_top_grid_right_pane_ParamLimits

0x8ec8,	// (0x0001d944) vkb2_top_grid_right_pane

0xefb7,	// (0x00023a33) vkb2_cell_keypad_pane_ParamLimits

0xefb7,	// (0x00023a33) vkb2_cell_keypad_pane

0x8f0e,	// (0x0001d98a) vkb2_area_bottom_grid_pane_ParamLimits

0x8f0e,	// (0x0001d98a) vkb2_area_bottom_grid_pane

0x8f38,	// (0x0001d9b4) vkb2_area_bottom_pane_g1_ParamLimits

0x8f38,	// (0x0001d9b4) vkb2_area_bottom_pane_g1

0x8f5e,	// (0x0001d9da) vkb2_area_bottom_pane_g2_ParamLimits

0x8f5e,	// (0x0001d9da) vkb2_area_bottom_pane_g2

0x8f8f,	// (0x0001da0b) vkb2_area_bottom_pane_g3_ParamLimits

0x8f8f,	// (0x0001da0b) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x0002481a) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x0002481a) vkb2_area_bottom_pane_g

0xf064,	// (0x00023ae0) vkb2_top_cell_left_pane_ParamLimits

0xf064,	// (0x00023ae0) vkb2_top_cell_left_pane

0xcaba,	// (0x00021536) vkb2_top_entry_pane_g1_ParamLimits

0xcaba,	// (0x00021536) vkb2_top_entry_pane_g1

0xcac8,	// (0x00021544) vkb2_top_entry_pane_t1_ParamLimits

0xcac8,	// (0x00021544) vkb2_top_entry_pane_t1

0x63d7,	// (0x0001ae53) vkb2_top_entry_pane_t2_ParamLimits

0x63d7,	// (0x0001ae53) vkb2_top_entry_pane_t2

0x6409,	// (0x0001ae85) vkb2_top_entry_pane_t3_ParamLimits

0x6409,	// (0x0001ae85) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00024821) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00024821) vkb2_top_entry_pane_t

0x8ff9,	// (0x0001da75) vkb2_top_grid_right_pane_g1_ParamLimits

0x8ff9,	// (0x0001da75) vkb2_top_grid_right_pane_g1

0xf0b1,	// (0x00023b2d) vkb2_top_grid_right_pane_g2_ParamLimits

0xf0b1,	// (0x00023b2d) vkb2_top_grid_right_pane_g2

0xf0c9,	// (0x00023b45) vkb2_top_grid_right_pane_g3_ParamLimits

0xf0c9,	// (0x00023b45) vkb2_top_grid_right_pane_g3

0x900f,	// (0x0001da8b) vkb2_top_grid_right_pane_g4_ParamLimits

0x900f,	// (0x0001da8b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00024828) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00024828) vkb2_top_grid_right_pane_g

0xf0e1,	// (0x00023b5d) vkb2_top_cell_left_pane_g1

0xf0f8,	// (0x00023b74) vkb2_cell_keypad_pane_g1_ParamLimits

0xf0f8,	// (0x00023b74) vkb2_cell_keypad_pane_g1

0x642d,	// (0x0001aea9) vkb2_cell_keypad_pane_t1_ParamLimits

0x642d,	// (0x0001aea9) vkb2_cell_keypad_pane_t1

0xf106,	// (0x00023b82) vkb2_cell_bottom_grid_pane_ParamLimits

0xf106,	// (0x00023b82) vkb2_cell_bottom_grid_pane

0xf13f,	// (0x00023bbb) vkb2_cell_bottom_grid_pane_g1

0xc787,	// (0x00021203) aid_call2_pane_cp02

0xc78f,	// (0x0002120b) aid_call_pane_cp02

0xc797,	// (0x00021213) clock_digital_number_pane_cp10

0xc79f,	// (0x0002121b) clock_digital_number_pane_cp11

0xc7a7,	// (0x00021223) clock_digital_number_pane_cp12

0xc7af,	// (0x0002122b) clock_digital_number_pane_cp13

0xc7b7,	// (0x00021233) clock_digital_separator_pane_cp10

0xe010,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g1

0xe010,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g2

0xc7bf,	// (0x0002123b) popup_clock_digital_analogue_window_cp2_g3

0xe010,	// (0x00022a8c) popup_clock_digital_analogue_window_cp2_g4

0xc7bf,	// (0x0002123b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x000247dd) popup_clock_digital_analogue_window_cp2_g

0xc7c7,	// (0x00021243) popup_clock_digital_analogue_window_cp2_t1

0xc7d5,	// (0x00021251) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x000247e8) popup_clock_digital_analogue_window_cp2_t

0x4155,	// (0x00018bd1) clock_digital_number_pane_cp10_g1

0x4155,	// (0x00018bd1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x000245c4) clock_digital_number_pane_cp10_g

0x4155,	// (0x00018bd1) clock_digital_separator_pane_cp10_g1

0x4155,	// (0x00018bd1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x000245c4) clock_digital_separator_pane_cp10_g

0x5e60,	// (0x0001a8dc) uniindi_top_pane_g3

0x5e71,	// (0x0001a8ed) uniindi_top_pane_g4

0xf042,	// (0x00023abe) vkb2_row_keypad_pane_ParamLimits

0xf042,	// (0x00023abe) vkb2_row_keypad_pane

0xf15b,	// (0x00023bd7) vkb2_cell_t_keypad_pane_ParamLimits

0xf15b,	// (0x00023bd7) vkb2_cell_t_keypad_pane

0xf16b,	// (0x00023be7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf16b,	// (0x00023be7) vkb2_cell_t_keypad_pane_cp08

0xf180,	// (0x00023bfc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf180,	// (0x00023bfc) vkb2_cell_t_keypad_pane_cp09

0xf194,	// (0x00023c10) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf194,	// (0x00023c10) vkb2_cell_t_keypad_pane_cp01

0xf1a5,	// (0x00023c21) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf1a5,	// (0x00023c21) vkb2_cell_t_keypad_pane_cp02

0xf1b6,	// (0x00023c32) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf1b6,	// (0x00023c32) vkb2_cell_t_keypad_pane_cp03

0xf1c7,	// (0x00023c43) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf1c7,	// (0x00023c43) vkb2_cell_t_keypad_pane_cp04

0xf1d8,	// (0x00023c54) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf1d8,	// (0x00023c54) vkb2_cell_t_keypad_pane_cp05

0xf1e9,	// (0x00023c65) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf1e9,	// (0x00023c65) vkb2_cell_t_keypad_pane_cp06

0xf1fc,	// (0x00023c78) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1fc,	// (0x00023c78) vkb2_cell_t_keypad_pane_cp07

0xf211,	// (0x00023c8d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf211,	// (0x00023c8d) vkb2_cell_t_keypad_pane_cp10

0xed32,	// (0x000237ae) vkb2_cell_t_keypad_pane_g1

0x6444,	// (0x0001aec0) vkb2_cell_t_keypad_pane_t1

0xd719,	// (0x00022195) popup_grid_graphic2_window

0xcb01,	// (0x0002157d) aid_size_cell_graphic2_ParamLimits

0xcb01,	// (0x0002157d) aid_size_cell_graphic2

0xcb3f,	// (0x000215bb) bg_popup_window_pane_cp21_ParamLimits

0xcb3f,	// (0x000215bb) bg_popup_window_pane_cp21

0xcb4d,	// (0x000215c9) graphic2_pages_pane_ParamLimits

0xcb4d,	// (0x000215c9) graphic2_pages_pane

0xcba5,	// (0x00021621) grid_graphic2_control_pane_ParamLimits

0xcba5,	// (0x00021621) grid_graphic2_control_pane

0xcbed,	// (0x00021669) grid_graphic2_pane_ParamLimits

0xcbed,	// (0x00021669) grid_graphic2_pane

0xcc78,	// (0x000216f4) cell_graphic2_pane

0xb880,	// (0x000202fc) main_comp_mode_pane

0x564d,	// (0x0001a0c9) list_ai3_gene_pane_ParamLimits

0xc4c4,	// (0x00020f40) bg_popup_window_pane_cp19_ParamLimits

0x5aa5,	// (0x0001a521) bg_touch_area_indi_pane_ParamLimits

0x5aa5,	// (0x0001a521) bg_touch_area_indi_pane

0x5abb,	// (0x0001a537) bg_touch_area_indi_pane_cp01_ParamLimits

0x5abb,	// (0x0001a537) bg_touch_area_indi_pane_cp01

0x5ad3,	// (0x0001a54f) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ad3,	// (0x0001a54f) bg_touch_area_indi_pane_cp02

0x5aed,	// (0x0001a569) bg_touch_area_indi_pane_cp03_ParamLimits

0x5aed,	// (0x0001a569) bg_touch_area_indi_pane_cp03

0x5b07,	// (0x0001a583) popup_slider_window_g1_ParamLimits

0x5b23,	// (0x0001a59f) popup_slider_window_g2_ParamLimits

0x5b3f,	// (0x0001a5bb) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00024772) popup_slider_window_g_ParamLimits

0x5b9b,	// (0x0001a617) popup_slider_window_t1_ParamLimits

0x5c0f,	// (0x0001a68b) small_volume_slider_vertical_pane_ParamLimits

0xcc78,	// (0x000216f4) cell_graphic2_pane_ParamLimits

0xccdb,	// (0x00021757) bg_button_pane_cp10_ParamLimits

0xccdb,	// (0x00021757) bg_button_pane_cp10

0xccee,	// (0x0002176a) bg_button_pane_cp11_ParamLimits

0xccee,	// (0x0002176a) bg_button_pane_cp11

0xcd01,	// (0x0002177d) graphic2_pages_pane_g1_ParamLimits

0xcd01,	// (0x0002177d) graphic2_pages_pane_g1

0xcd1c,	// (0x00021798) graphic2_pages_pane_g2_ParamLimits

0xcd1c,	// (0x00021798) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00024836) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00024836) graphic2_pages_pane_g

0xcd34,	// (0x000217b0) graphic2_pages_pane_t1_ParamLimits

0xcd34,	// (0x000217b0) graphic2_pages_pane_t1

0xcd4c,	// (0x000217c8) cell_graphic2_control_pane_ParamLimits

0xcd4c,	// (0x000217c8) cell_graphic2_control_pane

0xcd80,	// (0x000217fc) cell_graphic2_pane_g1_ParamLimits

0xcd80,	// (0x000217fc) cell_graphic2_pane_g1

0xb85e,	// (0x000202da) cell_graphic2_pane_g2_ParamLimits

0xb85e,	// (0x000202da) cell_graphic2_pane_g2

0xbf7f,	// (0x000209fb) cell_graphic2_pane_g3_ParamLimits

0xbf7f,	// (0x000209fb) cell_graphic2_pane_g3

0xb86b,	// (0x000202e7) cell_graphic2_pane_g4_ParamLimits

0xb86b,	// (0x000202e7) cell_graphic2_pane_g4

0xcd8d,	// (0x00021809) cell_graphic2_pane_g5_ParamLimits

0xcd8d,	// (0x00021809) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x0002483b) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x0002483b) cell_graphic2_pane_g

0xcdad,	// (0x00021829) cell_graphic2_pane_t1_ParamLimits

0xcdad,	// (0x00021829) cell_graphic2_pane_t1

0x23c3,	// (0x00016e3f) grid_highlight_pane_cp11_ParamLimits

0x23c3,	// (0x00016e3f) grid_highlight_pane_cp11

0xba49,	// (0x000204c5) bg_button_pane_cp05

0xcde2,	// (0x0002185e) cell_graphic2_control_pane_g1

0x4155,	// (0x00018bd1) bg_touch_area_indi_pane_g1

0x671e,	// (0x0001b19a) aid_cmod_rocker_key_size

0x6728,	// (0x0001b1a4) aid_cmode_itu_key_size

0x6732,	// (0x0001b1ae) main_cmode_video_pane

0x673c,	// (0x0001b1b8) main_comp_mode_itu_pane

0x6748,	// (0x0001b1c4) main_comp_mode_rocker_pane

0x6754,	// (0x0001b1d0) cell_cmode_rocker_pane_ParamLimits

0x6754,	// (0x0001b1d0) cell_cmode_rocker_pane

0x6768,	// (0x0001b1e4) cell_cmode_itu_pane_ParamLimits

0x6768,	// (0x0001b1e4) cell_cmode_itu_pane

0xd903,	// (0x0002237f) bg_button_pane_cp06_ParamLimits

0xd903,	// (0x0002237f) bg_button_pane_cp06

0x43d0,	// (0x00018e4c) cell_cmode_rocker_pane_g1_ParamLimits

0x43d0,	// (0x00018e4c) cell_cmode_rocker_pane_g1

0x5cb6,	// (0x0001a732) cell_cmode_rocker_pane_g2_ParamLimits

0x5cb6,	// (0x0001a732) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x0002484b) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x0002484b) cell_cmode_rocker_pane_g

0xb880,	// (0x000202fc) bg_button_pane_cp07

0x677f,	// (0x0001b1fb) cell_cmode_itu_pane_g1

0x6788,	// (0x0001b204) cell_cmode_itu_pane_t1

0x6796,	// (0x0001b212) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00024850) cell_cmode_itu_pane_t

0x5ee4,	// (0x0001a960) aid_touch_ctrl_left

0x5eec,	// (0x0001a968) aid_touch_ctrl_right

0xb880,	// (0x000202fc) compa_mode_pane

0xce08,	// (0x00021884) aid_cmod_rocker_key_size_cp

0xce12,	// (0x0002188e) aid_cmode_itu_key_size_cp

0x67b8,	// (0x0001b234) compa_mode_pane_g1

0x67c0,	// (0x0001b23c) compa_mode_pane_g2

0x67c8,	// (0x0001b244) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00024855) compa_mode_pane_g

0xce1c,	// (0x00021898) main_comp_mode_itu_pane_cp

0xce24,	// (0x000218a0) main_comp_mode_rocker_pane_cp

0xce2c,	// (0x000218a8) cell_cmode_itu_pane_cp_ParamLimits

0xce2c,	// (0x000218a8) cell_cmode_itu_pane_cp

0xce41,	// (0x000218bd) cell_cmode_rocker_pane_cp_ParamLimits

0xce41,	// (0x000218bd) cell_cmode_rocker_pane_cp

0xd903,	// (0x0002237f) bg_button_pane_cp06_cp_ParamLimits

0xd903,	// (0x0002237f) bg_button_pane_cp06_cp

0x43d0,	// (0x00018e4c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x43d0,	// (0x00018e4c) cell_cmode_rocker_pane_g1_cp

0x4155,	// (0x00018bd1) cell_cmode_rocker_pane_g2_cp

0xb880,	// (0x000202fc) bg_button_pane_cp07_cp

0xce53,	// (0x000218cf) cell_cmode_itu_pane_g1_cp

0xce5c,	// (0x000218d8) cell_cmode_itu_pane_t1_cp

0xce5c,	// (0x000218d8) cell_cmode_itu_pane_t2_cp

0xb14b,	// (0x0001fbc7) settings_code_pane_cp2

0xb8fc,	// (0x00020378) bg_popup_window_pane_cp3_ParamLimits

0xbc37,	// (0x000206b3) heading_pane_cp3_ParamLimits

0xbc43,	// (0x000206bf) listscroll_popup_graphic_pane_ParamLimits

0xeb40,	// (0x000235bc) fep_hwr_aid_pane_ParamLimits

0xef2d,	// (0x000239a9) aid_touch_sctrl_top_ParamLimits

0xef48,	// (0x000239c4) sctrl_sk_top_pane_g1_ParamLimits

0xed32,	// (0x000237ae) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x0002478b) sctrl_sk_top_pane_g_ParamLimits

0xef55,	// (0x000239d1) sctrl_sk_top_pane_t1_ParamLimits

0xef2d,	// (0x000239a9) aid_touch_sctrl_bottom_ParamLimits

0xef55,	// (0x000239d1) sctrl_sk_bottom_pane_t1_ParamLimits

0x5e2a,	// (0x0001a8a6) aid_area_touch_clock

0x8e3d,	// (0x0001d8b9) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e3d,	// (0x0001d8b9) aid_vkb2_area_top_pane_cell

0x8ee8,	// (0x0001d964) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8ee8,	// (0x0001d964) aid_vkb2_area_bottom_pane_cell

0x638f,	// (0x0001ae0b) popup_char_count_window

0x681e,	// (0x0001b29a) popup_char_count_window_g1

0x6827,	// (0x0001b2a3) popup_char_count_window_g2

0x6830,	// (0x0001b2ac) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0002485c) popup_char_count_window_g

0x6839,	// (0x0001b2b5) popup_char_count_window_t1

0xef95,	// (0x00023a11) popup_fep_char_preview_window_ParamLimits

0xef95,	// (0x00023a11) popup_fep_char_preview_window

0x8e5d,	// (0x0001d8d9) vkb2_top_candi_pane_ParamLimits

0x8e5d,	// (0x0001d8d9) vkb2_top_candi_pane

0xce6a,	// (0x000218e6) cell_vkb2_top_candi_pane_ParamLimits

0xce6a,	// (0x000218e6) cell_vkb2_top_candi_pane

0xf226,	// (0x00023ca2) bg_popup_fep_char_preview_window_ParamLimits

0xf226,	// (0x00023ca2) bg_popup_fep_char_preview_window

0xf234,	// (0x00023cb0) popup_fep_char_preview_window_t1_ParamLimits

0xf234,	// (0x00023cb0) popup_fep_char_preview_window_t1

0x6898,	// (0x0001b314) bg_popup_fep_char_preview_window_g1

0x68a0,	// (0x0001b31c) bg_popup_fep_char_preview_window_g2

0x68a8,	// (0x0001b324) bg_popup_fep_char_preview_window_g3

0x68b0,	// (0x0001b32c) bg_popup_fep_char_preview_window_g4

0x68b8,	// (0x0001b334) bg_popup_fep_char_preview_window_g5

0xf26e,	// (0x00023cea) bg_popup_fep_char_preview_window_g6

0x68c0,	// (0x0001b33c) bg_popup_fep_char_preview_window_g7

0x68c8,	// (0x0001b344) bg_popup_fep_char_preview_window_g8

0x68d0,	// (0x0001b34c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00024863) bg_popup_fep_char_preview_window_g

0xed32,	// (0x000237ae) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed32,	// (0x000237ae) cell_vkb2_top_candi_pane_g1

0xed40,	// (0x000237bc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed40,	// (0x000237bc) cell_vkb2_top_candi_pane_g2

0x5659,	// (0x0001a0d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5659,	// (0x0001a0d5) cell_vkb2_top_candi_pane_g3

0xf276,	// (0x00023cf2) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf276,	// (0x00023cf2) cell_vkb2_top_candi_pane_g4

0x4a94,	// (0x00019510) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4a94,	// (0x00019510) cell_vkb2_top_candi_pane_g5

0xef79,	// (0x000239f5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef79,	// (0x000239f5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00024876) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00024876) cell_vkb2_top_candi_pane_g

0xf297,	// (0x00023d13) cell_vkb2_top_candi_pane_t1

0xe94f,	// (0x000233cb) aid_size_touch_slider_mark_ParamLimits

0xe94f,	// (0x000233cb) aid_size_touch_slider_mark

0xcb89,	// (0x00021605) grid_graphic2_catg_pane_ParamLimits

0xcb89,	// (0x00021605) grid_graphic2_catg_pane

0xcc47,	// (0x000216c3) popup_grid_graphic2_window_t1_ParamLimits

0xcc47,	// (0x000216c3) popup_grid_graphic2_window_t1

0xcc5d,	// (0x000216d9) popup_grid_graphic2_window_t2_ParamLimits

0xcc5d,	// (0x000216d9) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00024831) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00024831) popup_grid_graphic2_window_t

0xba49,	// (0x000204c5) bg_button_pane_cp05_ParamLimits

0xcde2,	// (0x0002185e) cell_graphic2_control_pane_g1_ParamLimits

0xced4,	// (0x00021950) cell_graphic2_catg_pane_ParamLimits

0xced4,	// (0x00021950) cell_graphic2_catg_pane

0xb880,	// (0x000202fc) bg_button_pane_cp12

0xcee6,	// (0x00021962) cell_graphic2_catg_pane_g1

0x5df6,	// (0x0001a872) cell_tb_ext_pane_t1_ParamLimits

0xf084,	// (0x00023b00) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf084,	// (0x00023b00) vkb2_top_cell_right_narrow_pane

0xf09c,	// (0x00023b18) vkb2_top_cell_right_wide_pane_ParamLimits

0xf09c,	// (0x00023b18) vkb2_top_cell_right_wide_pane

0xeb32,	// (0x000235ae) bg_vkb2_func_pane_ParamLimits

0xeb32,	// (0x000235ae) bg_vkb2_func_pane

0xf0e1,	// (0x00023b5d) vkb2_top_cell_left_pane_g1_ParamLimits

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp03_ParamLimits

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp03

0xf13f,	// (0x00023bbb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1623,	// (0x0001609f) bg_vkb2_func_pane_g1

0x162b,	// (0x000160a7) bg_vkb2_func_pane_g2

0x163b,	// (0x000160b7) bg_vkb2_func_pane_g3

0x1633,	// (0x000160af) bg_vkb2_func_pane_g4

0x1643,	// (0x000160bf) bg_vkb2_func_pane_g5

0x164b,	// (0x000160c7) bg_vkb2_func_pane_g6

0x1653,	// (0x000160cf) bg_vkb2_func_pane_g7

0x165b,	// (0x000160d7) bg_vkb2_func_pane_g8

0x161b,	// (0x00016097) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00024883) bg_vkb2_func_pane_g

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp01_ParamLimits

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp01

0xf0e1,	// (0x00023b5d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf0e1,	// (0x00023b5d) vkb2_top_cell_right_wide_pane_g1

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp02_ParamLimits

0xeb32,	// (0x000235ae) bg_vkb2_fuc_pane_cp02

0xf13f,	// (0x00023bbb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf13f,	// (0x00023bbb) vkb2_top_cell_right_narrow_pane_g1

0xc3fe,	// (0x00020e7a) aid_touch_area_decrease_ParamLimits

0xc3fe,	// (0x00020e7a) aid_touch_area_decrease

0xc438,	// (0x00020eb4) aid_touch_area_increase_ParamLimits

0xc438,	// (0x00020eb4) aid_touch_area_increase

0xc460,	// (0x00020edc) aid_touch_area_mute_ParamLimits

0xc460,	// (0x00020edc) aid_touch_area_mute

0xc490,	// (0x00020f0c) aid_touch_area_slider_ParamLimits

0xc490,	// (0x00020f0c) aid_touch_area_slider

0xc4d0,	// (0x00020f4c) popup_slider_window_g4_ParamLimits

0xc4d0,	// (0x00020f4c) popup_slider_window_g4

0xc4f8,	// (0x00020f74) popup_slider_window_g5_ParamLimits

0xc4f8,	// (0x00020f74) popup_slider_window_g5

0xc52c,	// (0x00020fa8) popup_slider_window_g6_ParamLimits

0xc52c,	// (0x00020fa8) popup_slider_window_g6

0x5bc9,	// (0x0001a645) popup_slider_window_t2_ParamLimits

0x5bc9,	// (0x0001a645) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0002477f) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0002477f) popup_slider_window_t

0xc548,	// (0x00020fc4) slider_pane_ParamLimits

0xc548,	// (0x00020fc4) slider_pane

0x68f3,	// (0x0001b36f) slider_pane_g1_ParamLimits

0x68f3,	// (0x0001b36f) slider_pane_g1

0x6907,	// (0x0001b383) slider_pane_g2_ParamLimits

0x6907,	// (0x0001b383) slider_pane_g2

0x691d,	// (0x0001b399) slider_pane_g3_ParamLimits

0x691d,	// (0x0001b399) slider_pane_g3

0x0003,

0xfe1a,	// (0x00024896) slider_pane_g_ParamLimits

0xfe1a,	// (0x00024896) slider_pane_g

0xa7d7,	// (0x0001f253) popup_tb_float_extension_window_ParamLimits

0xa7d7,	// (0x0001f253) popup_tb_float_extension_window

0x6949,	// (0x0001b3c5) aid_size_cell_tb_float_ext

0xb880,	// (0x000202fc) bg_popup_sub_window_cp28

0x6955,	// (0x0001b3d1) grid_tb_float_ext_pane

0x6961,	// (0x0001b3dd) cell_tb_float_ext_pane_ParamLimits

0x6961,	// (0x0001b3dd) cell_tb_float_ext_pane

0x697d,	// (0x0001b3f9) cell_tb_float_ext_pane_g1

0x6986,	// (0x0001b402) grid_highlight_pane_cp12

0x8c36,	// (0x0001d6b2) cell_last_hwr_side_pane_ParamLimits

0x8c36,	// (0x0001d6b2) cell_last_hwr_side_pane

0x4155,	// (0x00018bd1) cell_last_hwr_side_pane_g1

0x698f,	// (0x0001b40b) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0002489f) cell_last_hwr_side_pane_g

0x8fc4,	// (0x0001da40) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8fc4,	// (0x0001da40) vkb2_area_bottom_space_btn_pane

0xed32,	// (0x000237ae) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6444,	// (0x0001aec0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf297,	// (0x00023d13) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf2b5,	// (0x00023d31) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf2b5,	// (0x00023d31) vkb2_area_bottom_space_btn_pane_g1

0xf2ef,	// (0x00023d6b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2ef,	// (0x00023d6b) vkb2_area_bottom_space_btn_pane_g2

0xf325,	// (0x00023da1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf325,	// (0x00023da1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x000248a4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x000248a4) vkb2_area_bottom_space_btn_pane_g

0xebf7,	// (0x00023673) cel_fep_hwr_func_pane_ParamLimits

0xebf7,	// (0x00023673) cel_fep_hwr_func_pane

0x8c0b,	// (0x0001d687) cell_hwr_side_button_pane_ParamLimits

0x8c0b,	// (0x0001d687) cell_hwr_side_button_pane

0x5e2a,	// (0x0001a8a6) aid_area_touch_clock_ParamLimits

0xba49,	// (0x000204c5) bg_uniindi_top_pane_ParamLimits

0x5e3e,	// (0x0001a8ba) uniindi_top_pane_g1_ParamLimits

0x5e54,	// (0x0001a8d0) uniindi_top_pane_g2_ParamLimits

0x5e60,	// (0x0001a8dc) uniindi_top_pane_g3_ParamLimits

0x5e71,	// (0x0001a8ed) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x000247b7) uniindi_top_pane_g_ParamLimits

0x5e7e,	// (0x0001a8fa) uniindi_top_pane_t1_ParamLimits

0xba49,	// (0x000204c5) bg_vkb2_func_pane_cp01_ParamLimits

0xba49,	// (0x000204c5) bg_vkb2_func_pane_cp01

0x6998,	// (0x0001b414) cel_fep_hwr_func_pane_g1_ParamLimits

0x6998,	// (0x0001b414) cel_fep_hwr_func_pane_g1

0xba49,	// (0x000204c5) bg_vkb2_func_pane_cp02_ParamLimits

0xba49,	// (0x000204c5) bg_vkb2_func_pane_cp02

0x6998,	// (0x0001b414) cell_hwr_side_button_pane_g1_ParamLimits

0x6998,	// (0x0001b414) cell_hwr_side_button_pane_g1

0x146e,	// (0x00015eea) status_pane_g4_ParamLimits

0x146e,	// (0x00015eea) status_pane_g4

0x1488,	// (0x00015f04) status_pane_t1

0x3ef4,	// (0x00018970) form2_midp_gauge_slider_cont_pane

0x3efc,	// (0x00018978) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb48c,	// (0x0001ff08) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb49e,	// (0x0001ff1a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00024577) form2_midp_gauge_slider_pane_t_ParamLimits

0x3f32,	// (0x000189ae) form2_midp_slider_pane_ParamLimits

0xef87,	// (0x00023a03) aid_size_cell_func_vkb2_ParamLimits

0xef87,	// (0x00023a03) aid_size_cell_func_vkb2

0x6935,	// (0x0001b3b1) slider_pane_g4_ParamLimits

0x6935,	// (0x0001b3b1) slider_pane_g4

0x9025,	// (0x0001daa1) form2_midp_gauge_slider_pane_t2_cp01

0x9033,	// (0x0001daaf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9033,	// (0x0001daaf) form2_midp_gauge_slider_pane_t3_cp01

0xf36f,	// (0x00023deb) form2_midp_slider_pane_cp01

0xb880,	// (0x000202fc) navi_smil_pane

0x69d1,	// (0x0001b44d) navi_smil_pane_g1

0x69d9,	// (0x0001b455) navi_smil_pane_t1

0x69a6,	// (0x0001b422) form2_midp_slider_pane_g1

0x69af,	// (0x0001b42b) form2_midp_slider_pane_g2

0x69b7,	// (0x0001b433) form2_midp_slider_pane_g3

0x69a6,	// (0x0001b422) form2_midp_slider_pane_g4

0xceef,	// (0x0002196b) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x000248ad) form2_midp_slider_pane_g

0xf35f,	// (0x00023ddb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf35f,	// (0x00023ddb) vkb2_area_bottom_space_btn_pane_g4

0xa9be,	// (0x0001f43a) lc0_navi_pane_ParamLimits

0xa9be,	// (0x0001f43a) lc0_navi_pane

0xaa2e,	// (0x0001f4aa) lc0_stat_indi_pane_ParamLimits

0xaa2e,	// (0x0001f4aa) lc0_stat_indi_pane

0xaa43,	// (0x0001f4bf) ls0_title_pane_ParamLimits

0xaa43,	// (0x0001f4bf) ls0_title_pane

0xd903,	// (0x0002237f) bg_popup_sub_pane_cp14_ParamLimits

0x5e11,	// (0x0001a88d) list_uniindi_pane_ParamLimits

0x5e1d,	// (0x0001a899) uniindi_top_pane_ParamLimits

0x5ebc,	// (0x0001a938) list_single_uniindi_pane_g1_ParamLimits

0x5ecf,	// (0x0001a94b) list_single_uniindi_pane_t1_ParamLimits

0x9050,	// (0x0001dacc) lc0_stat_clock_pane_ParamLimits

0x9050,	// (0x0001dacc) lc0_stat_clock_pane

0xcef8,	// (0x00021974) lc0_stat_indi_pane_g1_ParamLimits

0xcef8,	// (0x00021974) lc0_stat_indi_pane_g1

0xcf05,	// (0x00021981) lc0_stat_indi_pane_g2_ParamLimits

0xcf05,	// (0x00021981) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x000248b8) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x000248b8) lc0_stat_indi_pane_g

0x905d,	// (0x0001dad9) lc0_uni_indicator_pane_ParamLimits

0x905d,	// (0x0001dad9) lc0_uni_indicator_pane

0xcf12,	// (0x0002198e) ls0_title_pane_g1_ParamLimits

0xcf12,	// (0x0002198e) ls0_title_pane_g1

0xcf26,	// (0x000219a2) ls0_title_pane_t1_ParamLimits

0xcf26,	// (0x000219a2) ls0_title_pane_t1

0x906a,	// (0x0001dae6) lc0_uni_indicator_pane_g1_ParamLimits

0x906a,	// (0x0001dae6) lc0_uni_indicator_pane_g1

0x6a4b,	// (0x0001b4c7) lc0_stat_clock_pane_t1

0xb880,	// (0x000202fc) main_ai5_pane

0x6a59,	// (0x0001b4d5) ai5_sk_pane_ParamLimits

0x6a59,	// (0x0001b4d5) ai5_sk_pane

0xcf54,	// (0x000219d0) cell_ai5_widget_pane_ParamLimits

0xcf54,	// (0x000219d0) cell_ai5_widget_pane

0x7002,	// (0x0001ba7e) aid_size_cell_widget_grid

0x7010,	// (0x0001ba8c) bg_ai5_widget_pane_ParamLimits

0x7010,	// (0x0001ba8c) bg_ai5_widget_pane

0x7084,	// (0x0001bb00) cell_ai5_widget_pane_g2

0x7094,	// (0x0001bb10) cell_ai5_widget_pane_g3

0x70ab,	// (0x0001bb27) cell_ai5_widget_pane_g4

0x70b7,	// (0x0001bb33) cell_ai5_widget_pane_g5

0xd2ab,	// (0x00021d27) cell_ai5_widget_pane_g6

0xd2b7,	// (0x00021d33) cell_ai5_widget_pane_g7

0x7117,	// (0x0001bb93) cell_ai5_widget_pane_t1_ParamLimits

0x7117,	// (0x0001bb93) cell_ai5_widget_pane_t1

0x7134,	// (0x0001bbb0) cell_ai5_widget_pane_t2_ParamLimits

0x7134,	// (0x0001bbb0) cell_ai5_widget_pane_t2

0x714c,	// (0x0001bbc8) cell_ai5_widget_pane_t3_ParamLimits

0x714c,	// (0x0001bbc8) cell_ai5_widget_pane_t3

0x7164,	// (0x0001bbe0) cell_ai5_widget_pane_t4_ParamLimits

0x7164,	// (0x0001bbe0) cell_ai5_widget_pane_t4

0x7181,	// (0x0001bbfd) cell_ai5_widget_pane_t5_ParamLimits

0x7181,	// (0x0001bbfd) cell_ai5_widget_pane_t5

0x71a0,	// (0x0001bc1c) cell_ai5_widget_pane_t6_ParamLimits

0x71a0,	// (0x0001bc1c) cell_ai5_widget_pane_t6

0x71b2,	// (0x0001bc2e) cell_ai5_widget_pane_t7_ParamLimits

0x71b2,	// (0x0001bc2e) cell_ai5_widget_pane_t7

0x71cb,	// (0x0001bc47) cell_ai5_widget_pane_t8_ParamLimits

0x71cb,	// (0x0001bc47) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x000248d2) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x000248d2) cell_ai5_widget_pane_t

0x721f,	// (0x0001bc9b) grid_ai5_widget_pane

0xd903,	// (0x0002237f) highlight_cell_ai5_widget_pane_ParamLimits

0xd903,	// (0x0002237f) highlight_cell_ai5_widget_pane

0xd2c3,	// (0x00021d3f) ai5_sk_left_pane

0xd2cd,	// (0x00021d49) ai5_sk_middle_pane

0xd2d7,	// (0x00021d53) ai5_sk_right_pane

0x724b,	// (0x0001bcc7) bg_ai5_widget_pane_g1_ParamLimits

0x724b,	// (0x0001bcc7) bg_ai5_widget_pane_g1

0x7257,	// (0x0001bcd3) bg_ai5_widget_pane_g2_ParamLimits

0x7257,	// (0x0001bcd3) bg_ai5_widget_pane_g2

0x7263,	// (0x0001bcdf) bg_ai5_widget_pane_g3_ParamLimits

0x7263,	// (0x0001bcdf) bg_ai5_widget_pane_g3

0x726f,	// (0x0001bceb) bg_ai5_widget_pane_g4_ParamLimits

0x726f,	// (0x0001bceb) bg_ai5_widget_pane_g4

0x727b,	// (0x0001bcf7) bg_ai5_widget_pane_g5_ParamLimits

0x727b,	// (0x0001bcf7) bg_ai5_widget_pane_g5

0x7287,	// (0x0001bd03) bg_ai5_widget_pane_g6_ParamLimits

0x7287,	// (0x0001bd03) bg_ai5_widget_pane_g6

0x7293,	// (0x0001bd0f) bg_ai5_widget_pane_g7_ParamLimits

0x7293,	// (0x0001bd0f) bg_ai5_widget_pane_g7

0x729f,	// (0x0001bd1b) bg_ai5_widget_pane_g8_ParamLimits

0x729f,	// (0x0001bd1b) bg_ai5_widget_pane_g8

0x72ab,	// (0x0001bd27) bg_ai5_widget_pane_g9_ParamLimits

0x72ab,	// (0x0001bd27) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x000248e7) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x000248e7) bg_ai5_widget_pane_g

0x72e3,	// (0x0001bd5f) cell_shortcut_ai5_widget_pane_ParamLimits

0x72e3,	// (0x0001bd5f) cell_shortcut_ai5_widget_pane

0xe473,	// (0x00022eef) bg_cell_shortcut_ai5_widget_pane

0x72f6,	// (0x0001bd72) cell_grid_ai5_widget_pane_g1

0xe473,	// (0x00022eef) highlight_cell_shortcut_ai5_widget_pane

0x1623,	// (0x0001609f) ai5_sk_left_pane_g1

0x72ff,	// (0x0001bd7b) ai5_sk_left_pane_g2

0x7307,	// (0x0001bd83) ai5_sk_left_pane_g3

0x730f,	// (0x0001bd8b) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x000248fa) ai5_sk_left_pane_g

0x7317,	// (0x0001bd93) ai5_sk_left_pane_t1

0x162b,	// (0x000160a7) ai5_sk_right_pane_g1

0x7325,	// (0x0001bda1) ai5_sk_right_pane_g2

0x732d,	// (0x0001bda9) ai5_sk_right_pane_g3

0x7335,	// (0x0001bdb1) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00024903) ai5_sk_right_pane_g

0x733d,	// (0x0001bdb9) ai5_sk_right_pane_t1

0x162b,	// (0x000160a7) ai5_sk_middle_pane_g1

0x1623,	// (0x0001609f) ai5_sk_middle_pane_g2

0x1643,	// (0x000160bf) ai5_sk_middle_pane_g3

0x732d,	// (0x0001bda9) ai5_sk_middle_pane_g4

0x7307,	// (0x0001bd83) ai5_sk_middle_pane_g5

0x734b,	// (0x0001bdc7) ai5_sk_middle_pane_g6

0xd2e1,	// (0x00021d5d) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0002490c) ai5_sk_middle_pane_g

0xa8a8,	// (0x0001f324) aid_touch_area_size_lc0_ParamLimits

0xa8a8,	// (0x0001f324) aid_touch_area_size_lc0

0xed61,	// (0x000237dd) cell_hwr_candidate_pane_t1_ParamLimits

0x1125,	// (0x00015ba1) aid_touch_navi_pane

0xab4e,	// (0x0001f5ca) status_dt_navi_pane_ParamLimits

0xab4e,	// (0x0001f5ca) status_dt_navi_pane

0xab66,	// (0x0001f5e2) status_dt_sta_pane_ParamLimits

0xab66,	// (0x0001f5e2) status_dt_sta_pane

0xd2e9,	// (0x00021d65) dt_sta_controll_pane

0xd2f6,	// (0x00021d72) dt_sta_indi_pane

0xd303,	// (0x00021d7f) dt_sta_title_pane

0xba49,	// (0x000204c5) bg_dt_sta_indi_pane_ParamLimits

0xba49,	// (0x000204c5) bg_dt_sta_indi_pane

0xd315,	// (0x00021d91) dt_sta_battery_pane

0xd31d,	// (0x00021d99) dt_sta_indi_pane_g1

0xd326,	// (0x00021da2) dt_sta_indi_pane_g2

0xd32f,	// (0x00021dab) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x0002491b) dt_sta_indi_pane_g

0xd338,	// (0x00021db4) dt_sta_signal_pane

0xd903,	// (0x0002237f) bg_dt_sta_title_pane_ParamLimits

0xd903,	// (0x0002237f) bg_dt_sta_title_pane

0xd341,	// (0x00021dbd) dt_sta_title_pane_g1

0xd349,	// (0x00021dc5) dt_sta_title_pane_t1_ParamLimits

0xd349,	// (0x00021dc5) dt_sta_title_pane_t1

0xb880,	// (0x000202fc) bg_dt_sta_control_pane

0xd35e,	// (0x00021dda) dt_sta_controll_pane_g1

0xd367,	// (0x00021de3) bg_dt_sta_title_pane_g1

0xd370,	// (0x00021dec) bg_dt_sta_title_pane_g2

0xd379,	// (0x00021df5) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00024922) bg_dt_sta_title_pane_g

0x4155,	// (0x00018bd1) bg_dt_sta_indi_pane_g1

0x73f9,	// (0x0001be75) dt_sta_signal_pane_g1

0x7401,	// (0x0001be7d) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00024929) dt_sta_signal_pane_g

0x7409,	// (0x0001be85) dt_sta_battery_pane_g1

0x7412,	// (0x0001be8e) dt_sta_battery_pane_t1

0x4155,	// (0x00018bd1) bg_dt_sta_control_pane_g1

0xe092,	// (0x00022b0e) fep_china_uni_eep_pane

0xe09a,	// (0x00022b16) fep_china_uni_entry_pane_ParamLimits

0xe0aa,	// (0x00022b26) popup_fep_china_uni_window_g1_ParamLimits

0xe0ba,	// (0x00022b36) popup_fep_china_uni_window_g2_ParamLimits

0xe0ba,	// (0x00022b36) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00024194) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00024194) popup_fep_china_uni_window_g

0x7421,	// (0x0001be9d) fep_china_uni_eep_pane_g1

0x7429,	// (0x0001bea5) fep_china_uni_eep_pane_t1

0x69c8,	// (0x0001b444) aid_touch_area_size_smil_player

0x127d,	// (0x00015cf9) lc0_clock_pane

0x147c,	// (0x00015ef8) status_pane_g5_ParamLimits

0x147c,	// (0x00015ef8) status_pane_g5

0xa2fd,	// (0x0001ed79) popup_keymap_window

0x143a,	// (0x00015eb6) status_icon_pane

0x7094,	// (0x0001bb10) cell_ai5_widget_pane_g3_ParamLimits

0x70ab,	// (0x0001bb27) cell_ai5_widget_pane_g4_ParamLimits

0x70b7,	// (0x0001bb33) cell_ai5_widget_pane_g5_ParamLimits

0x70db,	// (0x0001bb57) cell_ai5_widget_pane_g8_ParamLimits

0x70db,	// (0x0001bb57) cell_ai5_widget_pane_g8

0x70ef,	// (0x0001bb6b) cell_ai5_widget_pane_g9_ParamLimits

0x70ef,	// (0x0001bb6b) cell_ai5_widget_pane_g9

0x7103,	// (0x0001bb7f) cell_ai5_widget_pane_g10_ParamLimits

0x7103,	// (0x0001bb7f) cell_ai5_widget_pane_g10

0x7438,	// (0x0001beb4) status_icon_pane_g1

0xb880,	// (0x000202fc) bg_popup_sub_pane_cp13

0x7440,	// (0x0001bebc) popup_keymap_window_t1

0xa0db,	// (0x0001eb57) control_pane_g6_ParamLimits

0xa0db,	// (0x0001eb57) control_pane_g6

0xa0e8,	// (0x0001eb64) control_pane_g7_ParamLimits

0xa0e8,	// (0x0001eb64) control_pane_g7

0xa0f5,	// (0x0001eb71) control_pane_g8_ParamLimits

0xa0f5,	// (0x0001eb71) control_pane_g8

0xd2e9,	// (0x00021d65) dt_sta_controll_pane_ParamLimits

0xd2f6,	// (0x00021d72) dt_sta_indi_pane_ParamLimits

0xd303,	// (0x00021d7f) dt_sta_title_pane_ParamLimits

0xbe6d,	// (0x000208e9) aid_size_touch_scroll_bar_cale

0xd7f6,	// (0x00022272) popup_discreet_window_ParamLimits

0xd7f6,	// (0x00022272) popup_discreet_window

0x87e4,	// (0x0001d260) popup_sk_window

0x1d4c,	// (0x000167c8) bg_popup_sub_pane_cp28_ParamLimits

0x1d4c,	// (0x000167c8) bg_popup_sub_pane_cp28

0x744e,	// (0x0001beca) popup_discreet_window_g1_ParamLimits

0x744e,	// (0x0001beca) popup_discreet_window_g1

0x746e,	// (0x0001beea) popup_discreet_window_t1_ParamLimits

0x746e,	// (0x0001beea) popup_discreet_window_t1

0x748c,	// (0x0001bf08) popup_discreet_window_t2_ParamLimits

0x748c,	// (0x0001bf08) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0002492e) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0002492e) popup_discreet_window_t

0xf378,	// (0x00023df4) popup_sk_window_g1

0xf382,	// (0x00023dfe) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00024935) popup_sk_window_g

0xf38c,	// (0x00023e08) popup_sk_window_t1

0xf39c,	// (0x00023e18) popup_sk_window_t1_copy1

0x7084,	// (0x0001bb00) cell_ai5_widget_pane_g2_ParamLimits

0x71dd,	// (0x0001bc59) cell_ai5_widget_pane_t9_ParamLimits

0x71dd,	// (0x0001bc59) cell_ai5_widget_pane_t9

0xb880,	// (0x000202fc) main_fep_fshwr2_pane

0x9089,	// (0x0001db05) aid_fshwr2_btn_pane

0x909a,	// (0x0001db16) aid_fshwr2_syb_pane

0x90ab,	// (0x0001db27) aid_fshwr2_txt_pane

0x90b7,	// (0x0001db33) fshwr2_func_candi_pane

0x90d8,	// (0x0001db54) fshwr2_hwr_syb_pane

0x90f5,	// (0x0001db71) fshwr2_icf_pane

0xd719,	// (0x00022195) fshwr2_icf_bg_pane

0xf3b8,	// (0x00023e34) fshwr2_icf_pane_t1_ParamLimits

0xf3b8,	// (0x00023e34) fshwr2_icf_pane_t1

0xe010,	// (0x00022a8c) fshwr2_func_candi_pane_g1

0xd382,	// (0x00021dfe) fshwr2_func_candi_row_pane_ParamLimits

0xd382,	// (0x00021dfe) fshwr2_func_candi_row_pane

0x9121,	// (0x0001db9d) cell_fshwr2_syb_pane_ParamLimits

0x9121,	// (0x0001db9d) cell_fshwr2_syb_pane

0xed32,	// (0x000237ae) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed32,	// (0x000237ae) fshwr2_hwr_syb_pane_g1

0xd719,	// (0x00022195) bg_popup_call_pane_cp01

0x9137,	// (0x0001dbb3) fshwr2_func_candi_cell_pane_ParamLimits

0x9137,	// (0x0001dbb3) fshwr2_func_candi_cell_pane

0xd39e,	// (0x00021e1a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd39e,	// (0x00021e1a) fshwr2_func_candi_cell_bg_pane

0x917d,	// (0x0001dbf9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x917d,	// (0x0001dbf9) fshwr2_func_candi_cell_pane_g1

0x91b4,	// (0x0001dc30) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x91b4,	// (0x0001dc30) fshwr2_func_candi_cell_pane_t1

0xd719,	// (0x00022195) bg_button_pane_cp08

0x74fa,	// (0x0001bf76) cell_fshwr2_syb_bg_pane

0x91cf,	// (0x0001dc4b) cell_fshwr2_syb_bg_pane_g1

0x91d7,	// (0x0001dc53) cell_fshwr2_syb_bg_pane_t1

0xd903,	// (0x0002237f) main_tmo_pane

0xaf36,	// (0x0001f9b2) uni_indicator_pane_g1_ParamLimits

0xaf4c,	// (0x0001f9c8) uni_indicator_pane_g2_ParamLimits

0xaf62,	// (0x0001f9de) uni_indicator_pane_g3_ParamLimits

0xaf77,	// (0x0001f9f3) uni_indicator_pane_g4_ParamLimits

0xaf77,	// (0x0001f9f3) uni_indicator_pane_g4

0x28c5,	// (0x00017341) uni_indicator_pane_g5_ParamLimits

0x28c5,	// (0x00017341) uni_indicator_pane_g5

0x28c5,	// (0x00017341) uni_indicator_pane_g6_ParamLimits

0x28c5,	// (0x00017341) uni_indicator_pane_g6

0xf917,	// (0x00024393) uni_indicator_pane_g_ParamLimits

0xc3ce,	// (0x00020e4a) popup_tmo_note_window_ParamLimits

0xc3ce,	// (0x00020e4a) popup_tmo_note_window

0xf3aa,	// (0x00023e26) fshwr2_bg_pane

0x91a5,	// (0x0001dc21) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x91a5,	// (0x0001dc21) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x0002493a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x0002493a) fshwr2_func_candi_cell_pane_g

0xed1a,	// (0x00023796) bg_popup_window_pane_cp01

0xf3d0,	// (0x00023e4c) bg_popup_window_pane_g1_cp01

0x7502,	// (0x0001bf7e) bg_popup_window_pane_cp22_ParamLimits

0x7502,	// (0x0001bf7e) bg_popup_window_pane_cp22

0x7510,	// (0x0001bf8c) listscroll_tmo_link_pane_ParamLimits

0x7510,	// (0x0001bf8c) listscroll_tmo_link_pane

0x7550,	// (0x0001bfcc) popup_tmo_note_window_g1_ParamLimits

0x7550,	// (0x0001bfcc) popup_tmo_note_window_g1

0x755d,	// (0x0001bfd9) tmo_note_info_pane_ParamLimits

0x755d,	// (0x0001bfd9) tmo_note_info_pane

0xd3aa,	// (0x00021e26) list_tmo_note_info_pane_g1_ParamLimits

0xd3aa,	// (0x00021e26) list_tmo_note_info_pane_g1

0x758e,	// (0x0001c00a) list_tmo_note_info_pane_g2_ParamLimits

0x758e,	// (0x0001c00a) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0002493f) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0002493f) list_tmo_note_info_pane_g

0x75aa,	// (0x0001c026) list_tmo_note_info_text_pane_ParamLimits

0x75aa,	// (0x0001c026) list_tmo_note_info_text_pane

0x762f,	// (0x0001c0ab) list_tmo_link_pane

0x763c,	// (0x0001c0b8) scroll_pane_cp20

0x7649,	// (0x0001c0c5) list_single_tmo_link_pane_ParamLimits

0x7649,	// (0x0001c0c5) list_single_tmo_link_pane

0x7659,	// (0x0001c0d5) list_single_tmo_link_pane_t1

0x7667,	// (0x0001c0e3) list_tmo_note_info_text_pane_t1_ParamLimits

0x7667,	// (0x0001c0e3) list_tmo_note_info_text_pane_t1

0x9b7d,	// (0x0001e5f9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9b7d,	// (0x0001e5f9) aid_size_touch_scroll_bar_cp01

0x9aac,	// (0x0001e528) aid_size_touch_slider_marker

0x87d4,	// (0x0001d250) popup_settings_window_ParamLimits

0x87d4,	// (0x0001d250) popup_settings_window

0x0acc,	// (0x00015548) popup_candi_list_indi_window

0x1125,	// (0x00015ba1) aid_touch_navi_pane_ParamLimits

0xef01,	// (0x0002397d) rs_clock_indi_pane

0xef0a,	// (0x00023986) sctrl_sk_bottom_pane_ParamLimits

0xef1b,	// (0x00023997) sctrl_sk_top_pane_ParamLimits

0xefaf,	// (0x00023a2b) popup_fep_tooltip_window

0x7002,	// (0x0001ba7e) aid_size_cell_widget_grid_ParamLimits

0x706f,	// (0x0001baeb) cell_ai5_widget_pane_g1_ParamLimits

0x706f,	// (0x0001baeb) cell_ai5_widget_pane_g1

0xd2ab,	// (0x00021d27) cell_ai5_widget_pane_g6_ParamLimits

0xd2b7,	// (0x00021d33) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x000248bd) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x000248bd) cell_ai5_widget_pane_g

0x7201,	// (0x0001bc7d) cell_ai5_widget_pane_t10_ParamLimits

0x7201,	// (0x0001bc7d) cell_ai5_widget_pane_t10

0x721f,	// (0x0001bc9b) grid_ai5_widget_pane_ParamLimits

0x72b7,	// (0x0001bd33) cell_contacts_ai5_widget_pane_ParamLimits

0x72b7,	// (0x0001bd33) cell_contacts_ai5_widget_pane

0x74a1,	// (0x0001bf1d) popup_discreet_window_t3_ParamLimits

0x74a1,	// (0x0001bf1d) popup_discreet_window_t3

0x910d,	// (0x0001db89) popup_fshwr2_char_preview_window_ParamLimits

0x910d,	// (0x0001db89) popup_fshwr2_char_preview_window

0xd3c1,	// (0x00021e3d) tmo_note_info_pane_t1

0xd3d6,	// (0x00021e52) tmo_note_info_pane_t2

0xd3ef,	// (0x00021e6b) tmo_note_info_pane_t3

0x760b,	// (0x0001c087) tmo_note_info_pane_t4

0x761d,	// (0x0001c099) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00024944) tmo_note_info_pane_t

0x762f,	// (0x0001c0ab) list_tmo_link_pane_ParamLimits

0x763c,	// (0x0001c0b8) scroll_pane_cp20_ParamLimits

0xd719,	// (0x00022195) bg_popup_fep_char_preview_window_cp01

0x7680,	// (0x0001c0fc) popup_fshwr2_char_preview_window_t1

0x768e,	// (0x0001c10a) popup_candi_list_indi_window_g1

0x7697,	// (0x0001c113) bg_cell_contacts_ai5_widget_pane

0x76a3,	// (0x0001c11f) cell_contacts_ai5_widget_pane_g1

0x76b8,	// (0x0001c134) cell_contacts_ai5_widget_pane_g2

0x76c4,	// (0x0001c140) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0002494f) cell_contacts_ai5_widget_pane_g

0x76d0,	// (0x0001c14c) cell_contacts_ai5_widget_pane_t1

0xd903,	// (0x0002237f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd469,	// (0x00021ee5) settings_container_pane

0xe473,	// (0x00022eef) listscroll_set_pane_copy1

0x354a,	// (0x00017fc6) scroll_pane_cp121_copy1

0x7753,	// (0x0001c1cf) set_content_pane_copy1

0xd475,	// (0x00021ef1) aid_height_set_list_copy1_ParamLimits

0xd475,	// (0x00021ef1) aid_height_set_list_copy1

0x2aed,	// (0x00017569) aid_size_parent_copy1_ParamLimits

0x2aed,	// (0x00017569) aid_size_parent_copy1

0xd481,	// (0x00021efd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd481,	// (0x00021efd) button_value_adjust_pane_cp6_copy1

0x0aa4,	// (0x00015520) list_highlight_pane_cp2_copy1_ParamLimits

0x0aa4,	// (0x00015520) list_highlight_pane_cp2_copy1

0xd495,	// (0x00021f11) list_set_pane_copy1_ParamLimits

0xd495,	// (0x00021f11) list_set_pane_copy1

0xd404,	// (0x00021e80) main_pane_set_t1_copy1_ParamLimits

0xd404,	// (0x00021e80) main_pane_set_t1_copy1

0xd43e,	// (0x00021eba) main_pane_set_t2_copy1_ParamLimits

0xd43e,	// (0x00021eba) main_pane_set_t2_copy1

0xd55c,	// (0x00021fd8) main_pane_set_t3_copy1

0xd56a,	// (0x00021fe6) main_pane_set_t4_copy1

0xd45d,	// (0x00021ed9) set_content_pane_g1_copy1_ParamLimits

0xd45d,	// (0x00021ed9) set_content_pane_g1_copy1

0xd578,	// (0x00021ff4) setting_code_pane_copy1

0x7866,	// (0x0001c2e2) setting_slider_graphic_pane_copy1

0x7866,	// (0x0001c2e2) setting_slider_pane_copy1

0x7866,	// (0x0001c2e2) setting_text_pane_copy1

0x7866,	// (0x0001c2e2) setting_volume_pane_copy1

0xd578,	// (0x00021ff4) settings_code_pane_cp2_copy1

0xd580,	// (0x00021ffc) settings_code_pane_cp_copy1_ParamLimits

0xd580,	// (0x00021ffc) settings_code_pane_cp_copy1

0x91e6,	// (0x0001dc62) volume_set_pane_copy1

0xd594,	// (0x00022010) volume_set_pane_g10_copy1

0xd5a0,	// (0x0002201c) volume_set_pane_g1_copy1

0xd5aa,	// (0x00022026) volume_set_pane_g2_copy1

0xd5b4,	// (0x00022030) volume_set_pane_g3_copy1

0xd5be,	// (0x0002203a) volume_set_pane_g4_copy1

0xd5c8,	// (0x00022044) volume_set_pane_g5_copy1

0xd5d2,	// (0x0002204e) volume_set_pane_g6_copy1

0xd5dc,	// (0x00022058) volume_set_pane_g7_copy1

0xd5e6,	// (0x00022062) volume_set_pane_g8_copy1

0xd5f0,	// (0x0002206c) volume_set_pane_g9_copy1

0xb8fc,	// (0x00020378) bg_set_opt_pane_cp_copy1_ParamLimits

0xb8fc,	// (0x00020378) bg_set_opt_pane_cp_copy1

0xf3d9,	// (0x00023e55) setting_slider_pane_t1_copy1_ParamLimits

0xf3d9,	// (0x00023e55) setting_slider_pane_t1_copy1

0x91f2,	// (0x0001dc6e) setting_slider_pane_t2_copy1_ParamLimits

0x91f2,	// (0x0001dc6e) setting_slider_pane_t2_copy1

0x920c,	// (0x0001dc88) setting_slider_pane_t3_copy1_ParamLimits

0x920c,	// (0x0001dc88) setting_slider_pane_t3_copy1

0x9224,	// (0x0001dca0) slider_set_pane_copy1_ParamLimits

0x9224,	// (0x0001dca0) slider_set_pane_copy1

0xd9cc,	// (0x00022448) set_opt_bg_pane_g1_copy2

0xd9d4,	// (0x00022450) set_opt_bg_pane_g2_copy2

0x78e8,	// (0x0001c364) set_opt_bg_pane_g3_copy2

0xd9e4,	// (0x00022460) set_opt_bg_pane_g4_copy2

0xd9ec,	// (0x00022468) set_opt_bg_pane_g5_copy2

0xd9f4,	// (0x00022470) set_opt_bg_pane_g6_copy2

0xd5fa,	// (0x00022076) set_opt_bg_pane_g7_copy2

0x78fc,	// (0x0001c378) set_opt_bg_pane_g8_copy2

0x7906,	// (0x0001c382) set_opt_bg_pane_g9_copy2

0xf3f7,	// (0x00023e73) aid_size_touch_slider_mark_copy1_ParamLimits

0xf3f7,	// (0x00023e73) aid_size_touch_slider_mark_copy1

0x7910,	// (0x0001c38c) slider_set_pane_g1_copy1

0xf40b,	// (0x00023e87) slider_set_pane_g2_copy1

0xe96f,	// (0x000233eb) slider_set_pane_g3_copy1_ParamLimits

0xe96f,	// (0x000233eb) slider_set_pane_g3_copy1

0xe983,	// (0x000233ff) slider_set_pane_g4_copy1_ParamLimits

0xe983,	// (0x000233ff) slider_set_pane_g4_copy1

0xe99b,	// (0x00023417) slider_set_pane_g5_copy1_ParamLimits

0xe99b,	// (0x00023417) slider_set_pane_g5_copy1

0xe96f,	// (0x000233eb) slider_set_pane_g6_copy1_ParamLimits

0xe96f,	// (0x000233eb) slider_set_pane_g6_copy1

0x923a,	// (0x0001dcb6) slider_set_pane_g7_copy1_ParamLimits

0x923a,	// (0x0001dcb6) slider_set_pane_g7_copy1

0xb894,	// (0x00020310) bg_set_opt_pane_cp2_copy1

0x7919,	// (0x0001c395) setting_slider_graphic_pane_g1_copy1

0xd604,	// (0x00022080) setting_slider_graphic_pane_t1_copy1

0xd614,	// (0x00022090) setting_slider_graphic_pane_t2_copy1

0xd624,	// (0x000220a0) slider_set_pane_cp_copy1

0x7952,	// (0x0001c3ce) input_focus_pane_cp1_copy1

0x795b,	// (0x0001c3d7) list_set_text_pane_copy1

0x7963,	// (0x0001c3df) setting_text_pane_g1_copy1

0xb921,	// (0x0002039d) set_text_pane_t1_copy1

0x7952,	// (0x0001c3ce) input_focus_pane_cp2_copy1

0x7963,	// (0x0001c3df) setting_code_pane_g1_copy1

0xd62c,	// (0x000220a8) setting_code_pane_t1_copy1

0xd63a,	// (0x000220b6) list_set_graphic_pane_copy1

0xb894,	// (0x00020310) bg_set_opt_pane_cp4_copy1

0x9ec2,	// (0x0001e93e) list_set_graphic_pane_g1_copy1_ParamLimits

0x9ec2,	// (0x0001e93e) list_set_graphic_pane_g1_copy1

0xd64c,	// (0x000220c8) list_set_graphic_pane_g2_copy1

0x9eda,	// (0x0001e956) list_set_graphic_pane_t1_copy1_ParamLimits

0x9eda,	// (0x0001e956) list_set_graphic_pane_t1_copy1

0x4155,	// (0x00018bd1) rs_clock_indi_pane_g1

0x79ad,	// (0x0001c429) rs_clock_indi_pane_t1

0x79bb,	// (0x0001c437) rs_indi_pane

0x79c3,	// (0x0001c43f) rs_indi_pane_g1

0x79cc,	// (0x0001c448) rs_indi_pane_g2

0x79d5,	// (0x0001c451) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00024956) rs_indi_pane_g

0xe473,	// (0x00022eef) bg_popup_preview_window_pane_cp03

0x79de,	// (0x0001c45a) popup_fep_tooltip_window_t1

0x501c,	// (0x00019a98) popup_note2_window_g2_ParamLimits

0x501c,	// (0x00019a98) popup_note2_window_g2

0x0001,

0xfc73,	// (0x000246ef) popup_note2_window_g_ParamLimits

0xfc73,	// (0x000246ef) popup_note2_window_g

0x5613,	// (0x0001a08f) bg_popup_sub_pane_cp11_ParamLimits

0x5620,	// (0x0001a09c) cell_ai3_links_pane_g1_ParamLimits

0x5637,	// (0x0001a0b3) cell_ai3_links_pane_t1

0xb921,	// (0x0002039d) set_text_pane_t1_copy1_ParamLimits

0x9f59,	// (0x0001e9d5) cell_graphic_popup_pane_cp2_ParamLimits

0x9f59,	// (0x0001e9d5) cell_graphic_popup_pane_cp2

0xd654,	// (0x000220d0) cell_graphic_popup_pane_g1_cp2

0xbc80,	// (0x000206fc) cell_graphic_popup_pane_g2_cp2

0x79f4,	// (0x0001c470) cell_graphic_popup_pane_g3_cp2

0x79fc,	// (0x0001c478) cell_graphic_popup_pane_t2_cp2

0xbc91,	// (0x0002070d) grid_highlight_pane_cp3_cp2

0xde32,	// (0x000228ae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd903,	// (0x0002237f) main_tmo_pane_ParamLimits

0xc3c2,	// (0x00020e3e) popup_tmo_big_image_note_window

0x705e,	// (0x0001bada) cell_ai5_widget_list_pane

0x7066,	// (0x0001bae2) cell_ai5_widget_lrg_icon_pane

0xd3c1,	// (0x00021e3d) tmo_note_info_pane_t1_ParamLimits

0xd3d6,	// (0x00021e52) tmo_note_info_pane_t2_ParamLimits

0xd3ef,	// (0x00021e6b) tmo_note_info_pane_t3_ParamLimits

0x760b,	// (0x0001c087) tmo_note_info_pane_t4_ParamLimits

0x761d,	// (0x0001c099) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00024944) tmo_note_info_pane_t_ParamLimits

0xd469,	// (0x00021ee5) settings_container_pane_ParamLimits

0x794a,	// (0x0001c3c6) indicator_popup_pane_cp5

0x794a,	// (0x0001c3c6) indicator_popup_pane_cp6

0xd63a,	// (0x000220b6) list_set_graphic_pane_copy1_ParamLimits

0xb880,	// (0x000202fc) bg_popup_window_pane_cp23

0x7a0a,	// (0x0001c486) popup_tmo_big_image_note_window_g1

0x7a16,	// (0x0001c492) popup_tmo_big_image_note_window_t1

0x7a26,	// (0x0001c4a2) popup_tmo_big_image_note_window_t2

0x7a36,	// (0x0001c4b2) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0002495d) popup_tmo_big_image_note_window_t

0x4155,	// (0x00018bd1) cell_ai5_widget_lrg_icon_pane_g1

0x7a46,	// (0x0001c4c2) cell_ai5_widget_lrg_icon_pane_t1

0x7a54,	// (0x0001c4d0) cell_ai5_widget_list_row_pane_ParamLimits

0x7a54,	// (0x0001c4d0) cell_ai5_widget_list_row_pane

0x7a6c,	// (0x0001c4e8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7a6c,	// (0x0001c4e8) cell_ai5_widget_list_row_pane_g1

0x7a79,	// (0x0001c4f5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7a79,	// (0x0001c4f5) cell_ai5_widget_list_row_pane_t1

0x7aa4,	// (0x0001c520) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7aa4,	// (0x0001c520) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00024964) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00024964) cell_ai5_widget_list_row_pane_t

0xd719,	// (0x00022195) main_fep_vtchi_ss_pane

0x7ae8,	// (0x0001c564) popup_fep_char_pre_window

0x7af0,	// (0x0001c56c) popup_fep_ituss_window

0x7b11,	// (0x0001c58d) popup_fep_vkbss_window

0x7b32,	// (0x0001c5ae) grid_vkbss_keypad_pane_ParamLimits

0x7b32,	// (0x0001c5ae) grid_vkbss_keypad_pane

0x7b42,	// (0x0001c5be) ituss_keypad_pane

0xf41f,	// (0x00023e9b) aid_vkbss_key_offset_ParamLimits

0xf41f,	// (0x00023e9b) aid_vkbss_key_offset

0xf42b,	// (0x00023ea7) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00023ea7) cell_vkbss_key_pane

0x7b51,	// (0x0001c5cd) bg_cell_vkbss_key_g1_ParamLimits

0x7b51,	// (0x0001c5cd) bg_cell_vkbss_key_g1

0x7b5d,	// (0x0001c5d9) cell_vkbss_key_3p_pane_ParamLimits

0x7b5d,	// (0x0001c5d9) cell_vkbss_key_3p_pane

0x7b77,	// (0x0001c5f3) cell_vkbss_key_g1_ParamLimits

0x7b77,	// (0x0001c5f3) cell_vkbss_key_g1

0x7b91,	// (0x0001c60d) cell_vkbss_key_t1_ParamLimits

0x7b91,	// (0x0001c60d) cell_vkbss_key_t1

0xf441,	// (0x00023ebd) cell_ituss_key_pane_ParamLimits

0xf441,	// (0x00023ebd) cell_ituss_key_pane

0x7bbc,	// (0x0001c638) bg_cell_ituss_key_g1_ParamLimits

0x7bbc,	// (0x0001c638) bg_cell_ituss_key_g1

0x7bc8,	// (0x0001c644) cell_ituss_key_pane_g1_ParamLimits

0x7bc8,	// (0x0001c644) cell_ituss_key_pane_g1

0xf452,	// (0x00023ece) cell_ituss_key_pane_g2_ParamLimits

0xf452,	// (0x00023ece) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x0002496b) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0002496b) cell_ituss_key_pane_g

0xf47e,	// (0x00023efa) cell_ituss_key_t1_ParamLimits

0xf47e,	// (0x00023efa) cell_ituss_key_t1

0xf4b8,	// (0x00023f34) cell_ituss_key_t2_ParamLimits

0xf4b8,	// (0x00023f34) cell_ituss_key_t2

0xf4e9,	// (0x00023f65) cell_ituss_key_t3_ParamLimits

0xf4e9,	// (0x00023f65) cell_ituss_key_t3

0xf4b8,	// (0x00023f34) cell_ituss_key_t4_ParamLimits

0xf4b8,	// (0x00023f34) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x00024972) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00024972) cell_ituss_key_t

0x7bee,	// (0x0001c66a) cell_vkbss_key_3p_pane_g1

0x7bf6,	// (0x0001c672) cell_vkbss_key_3p_pane_g2

0x7bfe,	// (0x0001c67a) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0002497d) cell_vkbss_key_3p_pane_g

0xd719,	// (0x00022195) bg_popup_fep_char_preview_window_cp02

0xf52c,	// (0x00023fa8) popup_fep_char_pre_window_t1

0xd2a1,	// (0x00021d1d) main_ai5_sk_pane

0x7697,	// (0x0001c113) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x76a3,	// (0x0001c11f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x76b8,	// (0x0001c134) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x76c4,	// (0x0001c140) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0002494f) cell_contacts_ai5_widget_pane_g_ParamLimits

0x76d0,	// (0x0001c14c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd903,	// (0x0002237f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd65c,	// (0x000220d8) main_ai5_sk_pane_g1

0x1b84,	// (0x00016600) popup_query_code_window_g1

0x7b06,	// (0x0001c582) popup_fep_vkb_icf_pane

0x7b1c,	// (0x0001c598) popup_fep_vtchi_icf_pane

0x7c0f,	// (0x0001c68b) bg_icf_pane

0x7c1b,	// (0x0001c697) list_vkb_icf_pane

0x7c27,	// (0x0001c6a3) bg_icf_pane_cp01

0x7c3a,	// (0x0001c6b6) vtchi_icf_list_pane

0x7c4b,	// (0x0001c6c7) list_vkb_icf_pane_t1_ParamLimits

0x7c4b,	// (0x0001c6c7) list_vkb_icf_pane_t1

0x7c61,	// (0x0001c6dd) vtchi_icf_list_pane_t1_ParamLimits

0x7c61,	// (0x0001c6dd) vtchi_icf_list_pane_t1

0x7af0,	// (0x0001c56c) popup_fep_ituss_window_ParamLimits

0x7b1c,	// (0x0001c598) popup_fep_vtchi_icf_pane_ParamLimits

0x7b42,	// (0x0001c5be) ituss_keypad_pane_ParamLimits

0xf413,	// (0x00023e8f) ituss_sks_pane

0x7c0f,	// (0x0001c68b) bg_icf_pane_ParamLimits

0x7acc,	// (0x0001c548) icf_edit_indi_pane_ParamLimits

0x7acc,	// (0x0001c548) icf_edit_indi_pane

0x7c1b,	// (0x0001c697) list_vkb_icf_pane_ParamLimits

0x7c27,	// (0x0001c6a3) bg_icf_pane_cp01_ParamLimits

0x7adb,	// (0x0001c557) icf_edit_indi_pane_cp01_ParamLimits

0x7adb,	// (0x0001c557) icf_edit_indi_pane_cp01

0x7c42,	// (0x0001c6be) vtchi_query_pane

0x43d0,	// (0x00018e4c) icf_edit_indi_pane_g1_ParamLimits

0x43d0,	// (0x00018e4c) icf_edit_indi_pane_g1

0x7cd0,	// (0x0001c74c) icf_edit_indi_pane_g2_ParamLimits

0x7cd0,	// (0x0001c74c) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00024995) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00024995) icf_edit_indi_pane_g

0x7cdf,	// (0x0001c75b) icf_edit_indi_pane_t1

0x7c79,	// (0x0001c6f5) bg_input_focus_pane_cp042

0xbe64,	// (0x000208e0) vtchi_button_pane

0x7c82,	// (0x0001c6fe) vtchi_query_pane_t1

0x7c90,	// (0x0001c70c) vtchi_query_pane_t2

0x7c9e,	// (0x0001c71a) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00024984) vtchi_query_pane_t

0xd719,	// (0x00022195) bg_button_pane_cp13

0x7cac,	// (0x0001c728) vtchi_button_pane_g1

0xf53b,	// (0x00023fb7) ituss_sks_pane_g1

0xf546,	// (0x00023fc2) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0002498b) ituss_sks_pane_g

0x7cb4,	// (0x0001c730) ituss_sks_pane_t1

0x7cc2,	// (0x0001c73e) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00024990) ituss_sks_pane_t

0x3baf,	// (0x0001862b) indicator_nsta_pane_cp_g1

0x3bb8,	// (0x00018634) indicator_nsta_pane_cp_g2

0x3bc0,	// (0x0001863c) indicator_nsta_pane_cp_g3

0x3bc8,	// (0x00018644) indicator_nsta_pane_cp_g4

0x3bd0,	// (0x0001864c) indicator_nsta_pane_cp_g5

0x3bd8,	// (0x00018654) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0002452d) indicator_nsta_pane_cp_g

0xcdc4,	// (0x00021840) cell_graphic2_pane_t2_ParamLimits

0xcdc4,	// (0x00021840) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00024846) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00024846) cell_graphic2_pane_t

0xcdfa,	// (0x00021876) cell_graphic2_control_pane_t1

0x9dbd,	// (0x0001e839) signal_pane_g3_ParamLimits

0x9dbd,	// (0x0001e839) signal_pane_g3

0x9dd1,	// (0x0001e84d) signal_pane_g4_ParamLimits

0x9dd1,	// (0x0001e84d) signal_pane_g4

0x7ab6,	// (0x0001c532) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7ab6,	// (0x0001c532) cell_ai5_widget_list_row_pane_t3

0x7bdc,	// (0x0001c658) cell_ituss_key_pane_t1_ParamLimits

0x7bdc,	// (0x0001c658) cell_ituss_key_pane_t1

0x17d2,	// (0x0001624e) form_field_data_wide_pane_vc_t2_ParamLimits

0x17d2,	// (0x0001624e) form_field_data_wide_pane_vc_t2

0x17e6,	// (0x00016262) form_field_data_wide_pane_vc_t3_ParamLimits

0x17e6,	// (0x00016262) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0002427b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0002427b) form_field_data_wide_pane_vc_t

0x3860,	// (0x000182dc) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3860,	// (0x000182dc) form_field_slider_wide_pane_vc_t3

0x3936,	// (0x000183b2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3936,	// (0x000183b2) form_field_popup_wide_pane_vc_t2

0x394d,	// (0x000183c9) form_field_popup_wide_pane_vc_t3_ParamLimits

0x394d,	// (0x000183c9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0002451c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002451c) form_field_popup_wide_pane_vc_t

0x9089,	// (0x0001db05) aid_fshwr2_btn_pane_ParamLimits

0x909a,	// (0x0001db16) aid_fshwr2_syb_pane_ParamLimits

0x90ab,	// (0x0001db27) aid_fshwr2_txt_pane_ParamLimits

0xf3aa,	// (0x00023e26) fshwr2_bg_pane_ParamLimits

0x90b7,	// (0x0001db33) fshwr2_func_candi_pane_ParamLimits

0x90d8,	// (0x0001db54) fshwr2_hwr_syb_pane_ParamLimits

0x90f5,	// (0x0001db71) fshwr2_icf_pane_ParamLimits

0x37d4,	// (0x00018250) list_double_graphic_pane_vc_g4_ParamLimits

0x37d4,	// (0x00018250) list_double_graphic_pane_vc_g4

0xf472,	// (0x00023eee) cell_ituss_key_pane_g3_ParamLimits

0xf472,	// (0x00023eee) cell_ituss_key_pane_g3

0xf51a,	// (0x00023f96) cell_ituss_key_t5_ParamLimits

0xf51a,	// (0x00023f96) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

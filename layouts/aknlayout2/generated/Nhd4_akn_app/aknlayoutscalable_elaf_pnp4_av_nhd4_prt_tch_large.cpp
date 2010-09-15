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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00043f16 };

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
0x62e3,	// (0x0004a1f9) Screen

0x62ef,	// (0x0004a205) application_window_ParamLimits

0x62ef,	// (0x0004a205) application_window

0x09e1,	// (0x000448f7) screen_g1

0x634b,	// (0x0004a261) area_bottom_pane_ParamLimits

0x634b,	// (0x0004a261) area_bottom_pane

0x640b,	// (0x0004a321) area_top_pane_ParamLimits

0x640b,	// (0x0004a321) area_top_pane

0x649f,	// (0x0004a3b5) main_pane_ParamLimits

0x649f,	// (0x0004a3b5) main_pane

0x09eb,	// (0x00044901) misc_graphics

0x7f05,	// (0x0004be1b) battery_pane_ParamLimits

0x7f05,	// (0x0004be1b) battery_pane

0xa2c7,	// (0x0004e1dd) bg_status_flat_pane_g8

0xa2cf,	// (0x0004e1e5) bg_status_flat_pane_g9

0x7fcd,	// (0x0004bee3) context_pane_ParamLimits

0x7fcd,	// (0x0004bee3) context_pane

0x80e3,	// (0x0004bff9) navi_pane_ParamLimits

0x80e3,	// (0x0004bff9) navi_pane

0x8167,	// (0x0004c07d) signal_pane_ParamLimits

0x8167,	// (0x0004c07d) signal_pane

0x0008,

0xf84f,	// (0x00053765) bg_status_flat_pane_g

0x98a8,	// (0x0004d7be) status_pane_g1_ParamLimits

0x98a8,	// (0x0004d7be) status_pane_g1

0x98bc,	// (0x0004d7d2) status_pane_g2_ParamLimits

0x98bc,	// (0x0004d7d2) status_pane_g2

0x98c8,	// (0x0004d7de) status_pane_g3_ParamLimits

0x98c8,	// (0x0004d7de) status_pane_g3

0x0004,

0xf776,	// (0x0005368c) status_pane_g_ParamLimits

0xf776,	// (0x0005368c) status_pane_g

0x98fc,	// (0x0004d812) title_pane_ParamLimits

0x98fc,	// (0x0004d812) title_pane

0x9939,	// (0x0004d84f) uni_indicator_pane_ParamLimits

0x9939,	// (0x0004d84f) uni_indicator_pane

0x1825,	// (0x0004573b) bg_list_pane_ParamLimits

0x1825,	// (0x0004573b) bg_list_pane

0x78ca,	// (0x0004b7e0) find_pane

0x0f3f,	// (0x00044e55) listscroll_app_pane_ParamLimits

0x0f3f,	// (0x00044e55) listscroll_app_pane

0x1845,	// (0x0004575b) listscroll_form_pane

0x78d2,	// (0x0004b7e8) listscroll_gen_pane_ParamLimits

0x78d2,	// (0x0004b7e8) listscroll_gen_pane

0x78e6,	// (0x0004b7fc) listscroll_set_pane

0x6e11,	// (0x0004ad27) main_idle_act_pane

0x16b9,	// (0x000455cf) main_idle_trad_pane

0x16b9,	// (0x000455cf) main_list_empty_pane

0x0f3f,	// (0x00044e55) main_midp_pane

0x185f,	// (0x00045775) main_pane_g1_ParamLimits

0x185f,	// (0x00045775) main_pane_g1

0x78ee,	// (0x0004b804) popup_ai_message_window_ParamLimits

0x78ee,	// (0x0004b804) popup_ai_message_window

0x7992,	// (0x0004b8a8) popup_fep_china_uni_window_ParamLimits

0x7992,	// (0x0004b8a8) popup_fep_china_uni_window

0x79ec,	// (0x0004b902) popup_fep_japan_candidate_window_ParamLimits

0x79ec,	// (0x0004b902) popup_fep_japan_candidate_window

0x7a0a,	// (0x0004b920) popup_fep_japan_predictive_window_ParamLimits

0x7a0a,	// (0x0004b920) popup_fep_japan_predictive_window

0x7a3a,	// (0x0004b950) popup_find_window

0x7a47,	// (0x0004b95d) popup_grid_graphic_window_ParamLimits

0x7a47,	// (0x0004b95d) popup_grid_graphic_window

0x7a71,	// (0x0004b987) popup_large_graphic_colour_window

0x7a97,	// (0x0004b9ad) popup_menu_window_ParamLimits

0x7a97,	// (0x0004b9ad) popup_menu_window

0x7c53,	// (0x0004bb69) popup_note_image_window

0x7c3f,	// (0x0004bb55) popup_note_wait_window_ParamLimits

0x7c3f,	// (0x0004bb55) popup_note_wait_window

0x7c3f,	// (0x0004bb55) popup_note_window_ParamLimits

0x7c3f,	// (0x0004bb55) popup_note_window

0x7ca9,	// (0x0004bbbf) popup_query_code_window_ParamLimits

0x7ca9,	// (0x0004bbbf) popup_query_code_window

0x7cbd,	// (0x0004bbd3) popup_query_data_code_window_ParamLimits

0x7cbd,	// (0x0004bbd3) popup_query_data_code_window

0x7cda,	// (0x0004bbf0) popup_query_data_window_ParamLimits

0x7cda,	// (0x0004bbf0) popup_query_data_window

0x7cf6,	// (0x0004bc0c) popup_query_sat_info_window_ParamLimits

0x7cf6,	// (0x0004bc0c) popup_query_sat_info_window

0x7d2f,	// (0x0004bc45) popup_snote_single_graphic_window_ParamLimits

0x7d2f,	// (0x0004bc45) popup_snote_single_graphic_window

0x7d2f,	// (0x0004bc45) popup_snote_single_text_window_ParamLimits

0x7d2f,	// (0x0004bc45) popup_snote_single_text_window

0x7d44,	// (0x0004bc5a) popup_sub_window_general

0x7e74,	// (0x0004bd8a) popup_window_general_ParamLimits

0x7e74,	// (0x0004bd8a) popup_window_general

0x7e89,	// (0x0004bd9f) power_save_pane

0x7731,	// (0x0004b647) control_pane_g1_ParamLimits

0x7731,	// (0x0004b647) control_pane_g1

0x7758,	// (0x0004b66e) control_pane_g2_ParamLimits

0x7758,	// (0x0004b66e) control_pane_g2

0x180f,	// (0x00045725) control_pane_g3_ParamLimits

0x180f,	// (0x00045725) control_pane_g3

0x0007,

0xf75e,	// (0x00053674) control_pane_g_ParamLimits

0xf75e,	// (0x00053674) control_pane_g

0x77c9,	// (0x0004b6df) control_pane_t1_ParamLimits

0x77c9,	// (0x0004b6df) control_pane_t1

0x781f,	// (0x0004b735) control_pane_t2_ParamLimits

0x781f,	// (0x0004b735) control_pane_t2

0x0002,

0xf76f,	// (0x00053685) control_pane_t_ParamLimits

0xf76f,	// (0x00053685) control_pane_t

0x76aa,	// (0x0004b5c0) navi_navi_volume_pane_cp1

0x76b2,	// (0x0004b5c8) status_small_icon_pane

0x17bb,	// (0x000456d1) status_small_pane_g1_ParamLimits

0x17bb,	// (0x000456d1) status_small_pane_g1

0x76ba,	// (0x0004b5d0) status_small_pane_g2_ParamLimits

0x76ba,	// (0x0004b5d0) status_small_pane_g2

0x17ef,	// (0x00045705) status_small_pane_g3_ParamLimits

0x17ef,	// (0x00045705) status_small_pane_g3

0x76c6,	// (0x0004b5dc) status_small_pane_g4_ParamLimits

0x76c6,	// (0x0004b5dc) status_small_pane_g4

0x76d2,	// (0x0004b5e8) status_small_pane_g5_ParamLimits

0x76d2,	// (0x0004b5e8) status_small_pane_g5

0x76e0,	// (0x0004b5f6) status_small_pane_g6_ParamLimits

0x76e0,	// (0x0004b5f6) status_small_pane_g6

0x0007,

0xf74d,	// (0x00053663) status_small_pane_g_ParamLimits

0xf74d,	// (0x00053663) status_small_pane_g

0x76fb,	// (0x0004b611) status_small_pane_t1

0x771d,	// (0x0004b633) status_small_wait_pane_ParamLimits

0x771d,	// (0x0004b633) status_small_wait_pane

0x71fa,	// (0x0004b110) aid_levels_signal_ParamLimits

0x71fa,	// (0x0004b110) aid_levels_signal

0x720c,	// (0x0004b122) signal_pane_g1_ParamLimits

0x720c,	// (0x0004b122) signal_pane_g1

0x7221,	// (0x0004b137) signal_pane_g2_ParamLimits

0x7221,	// (0x0004b137) signal_pane_g2

0x0003,

0xf6de,	// (0x000535f4) signal_pane_g_ParamLimits

0xf6de,	// (0x000535f4) signal_pane_g

0x12a7,	// (0x000451bd) context_pane_g1

0x66e0,	// (0x0004a5f6) title_pane_g1

0x670a,	// (0x0004a620) title_pane_t1

0x0a01,	// (0x00044917) title_pane_t2

0x0a27,	// (0x0004493d) title_pane_t3

0x0002,

0xf532,	// (0x00053448) title_pane_t

0x9951,	// (0x0004d867) aid_levels_battery_ParamLimits

0x9951,	// (0x0004d867) aid_levels_battery

0x9965,	// (0x0004d87b) battery_pane_g1_ParamLimits

0x9965,	// (0x0004d87b) battery_pane_g1

0x997b,	// (0x0004d891) battery_pane_g2_ParamLimits

0x997b,	// (0x0004d891) battery_pane_g2

0x0001,

0xf781,	// (0x00053697) battery_pane_g_ParamLimits

0xf781,	// (0x00053697) battery_pane_g

0xabeb,	// (0x0004eb01) uni_indicator_pane_g1

0xabfe,	// (0x0004eb14) uni_indicator_pane_g2

0xac10,	// (0x0004eb26) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0005380d) uni_indicator_pane_g

0x1550,	// (0x00045466) navi_icon_pane_ParamLimits

0x1550,	// (0x00045466) navi_icon_pane

0x1499,	// (0x000453af) navi_midp_pane

0x156c,	// (0x00045482) navi_navi_pane

0x1576,	// (0x0004548c) navi_text_pane_ParamLimits

0x1576,	// (0x0004548c) navi_text_pane

0x09e1,	// (0x000448f7) status_small_wait_pane_g1

0x0c78,	// (0x00044b8e) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00053808) status_small_wait_pane_g

0xa912,	// (0x0004e828) navi_navi_icon_text_pane

0xa91a,	// (0x0004e830) navi_navi_pane_g1_ParamLimits

0xa91a,	// (0x0004e830) navi_navi_pane_g1

0xa92c,	// (0x0004e842) navi_navi_pane_g2_ParamLimits

0xa92c,	// (0x0004e842) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000537d6) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000537d6) navi_navi_pane_g

0xa93e,	// (0x0004e854) navi_navi_tabs_pane

0xa947,	// (0x0004e85d) navi_navi_text_pane

0xa912,	// (0x0004e828) navi_navi_volume_pane

0xa8ee,	// (0x0004e804) navi_text_pane_t1

0xa8e2,	// (0x0004e7f8) navi_icon_pane_g1

0xa835,	// (0x0004e74b) navi_navi_text_pane_t1

0x843f,	// (0x0004c355) navi_navi_volume_pane_g1

0x8447,	// (0x0004c35d) volume_small_pane

0xa79b,	// (0x0004e6b1) navi_navi_icon_text_pane_g1

0xa7a3,	// (0x0004e6b9) navi_navi_icon_text_pane_t1

0x156c,	// (0x00045482) navi_tabs_2_long_pane

0x156c,	// (0x00045482) navi_tabs_2_pane

0x156c,	// (0x00045482) navi_tabs_3_long_pane

0x156c,	// (0x00045482) navi_tabs_3_pane

0x156c,	// (0x00045482) navi_tabs_4_pane

0x841f,	// (0x0004c335) tabs_2_active_pane_ParamLimits

0x841f,	// (0x0004c335) tabs_2_active_pane

0x842f,	// (0x0004c345) tabs_2_passive_pane_ParamLimits

0x842f,	// (0x0004c345) tabs_2_passive_pane

0x83ed,	// (0x0004c303) tabs_3_active_pane_ParamLimits

0x83ed,	// (0x0004c303) tabs_3_active_pane

0x83fd,	// (0x0004c313) tabs_3_passive_pane_ParamLimits

0x83fd,	// (0x0004c313) tabs_3_passive_pane

0x840e,	// (0x0004c324) tabs_3_passive_pane_cp_ParamLimits

0x840e,	// (0x0004c324) tabs_3_passive_pane_cp

0x83a9,	// (0x0004c2bf) tabs_4_active_pane_ParamLimits

0x83a9,	// (0x0004c2bf) tabs_4_active_pane

0x83ba,	// (0x0004c2d0) tabs_4_passive_pane_ParamLimits

0x83ba,	// (0x0004c2d0) tabs_4_passive_pane

0x83cb,	// (0x0004c2e1) tabs_4_passive_pane_cp_ParamLimits

0x83cb,	// (0x0004c2e1) tabs_4_passive_pane_cp

0x83dc,	// (0x0004c2f2) tabs_4_passive_pane_cp2_ParamLimits

0x83dc,	// (0x0004c2f2) tabs_4_passive_pane_cp2

0x8385,	// (0x0004c29b) tabs_2_long_active_pane_ParamLimits

0x8385,	// (0x0004c29b) tabs_2_long_active_pane

0x8397,	// (0x0004c2ad) tabs_2_long_passive_pane_ParamLimits

0x8397,	// (0x0004c2ad) tabs_2_long_passive_pane

0x8340,	// (0x0004c256) tabs_3_long_active_pane_ParamLimits

0x8340,	// (0x0004c256) tabs_3_long_active_pane

0x8359,	// (0x0004c26f) tabs_3_long_passive_pane_ParamLimits

0x8359,	// (0x0004c26f) tabs_3_long_passive_pane

0x836c,	// (0x0004c282) tabs_3_long_passive_pane_cp_ParamLimits

0x836c,	// (0x0004c282) tabs_3_long_passive_pane_cp

0x82e6,	// (0x0004c1fc) volume_small_pane_g1

0x82ef,	// (0x0004c205) volume_small_pane_g2

0x82f8,	// (0x0004c20e) volume_small_pane_g3

0x8301,	// (0x0004c217) volume_small_pane_g4

0x830a,	// (0x0004c220) volume_small_pane_g5

0x8313,	// (0x0004c229) volume_small_pane_g6

0x831c,	// (0x0004c232) volume_small_pane_g7

0x8325,	// (0x0004c23b) volume_small_pane_g8

0x832e,	// (0x0004c244) volume_small_pane_g9

0x8337,	// (0x0004c24d) volume_small_pane_g10

0x0009,

0xf88c,	// (0x000537a2) volume_small_pane_g

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp2_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp2

0x6772,	// (0x0004a688) tabs_3_active_pane_g1

0x677a,	// (0x0004a690) tabs_3_active_pane_t1

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp2_ParamLimits

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp2

0x6772,	// (0x0004a688) tabs_3_passive_pane_g1

0x677a,	// (0x0004a690) tabs_3_passive_pane_t1

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp3_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp3

0x678c,	// (0x0004a6a2) tabs_4_active_pane_g1

0x6794,	// (0x0004a6aa) tabs_4_active_pane_t1

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp3_ParamLimits

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp3

0x678c,	// (0x0004a6a2) tabs_4_1_passive_pane_g1

0x6794,	// (0x0004a6aa) tabs_4_1_passive_pane_t1

0x0f3f,	// (0x00044e55) list_highlight_pane_cp2

0xae53,	// (0x0004ed69) list_set_pane_ParamLimits

0xae53,	// (0x0004ed69) list_set_pane

0xaef5,	// (0x0004ee0b) main_pane_set_t1_ParamLimits

0xaef5,	// (0x0004ee0b) main_pane_set_t1

0xaf15,	// (0x0004ee2b) main_pane_set_t2_ParamLimits

0xaf15,	// (0x0004ee2b) main_pane_set_t2

0xaf29,	// (0x0004ee3f) main_pane_set_t3_ParamLimits

0xaf29,	// (0x0004ee3f) main_pane_set_t3

0xaf3b,	// (0x0004ee51) main_pane_set_t4_ParamLimits

0xaf3b,	// (0x0004ee51) main_pane_set_t4

0x0003,

0xf95c,	// (0x00053872) main_pane_set_t_ParamLimits

0xf95c,	// (0x00053872) main_pane_set_t

0xaf4d,	// (0x0004ee63) setting_code_pane

0xaf59,	// (0x0004ee6f) setting_slider_graphic_pane

0xaf59,	// (0x0004ee6f) setting_slider_pane

0xaf59,	// (0x0004ee6f) setting_text_pane

0xaf59,	// (0x0004ee6f) setting_volume_pane

0x67a6,	// (0x0004a6bc) volume_set_pane

0x0a47,	// (0x0004495d) bg_set_opt_pane_cp

0x67ae,	// (0x0004a6c4) setting_slider_pane_t1

0x67c7,	// (0x0004a6dd) setting_slider_pane_t2

0x67e1,	// (0x0004a6f7) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005344f) setting_slider_pane_t

0x67f9,	// (0x0004a70f) slider_set_pane

0x09eb,	// (0x00044901) bg_set_opt_pane_cp2

0x0a55,	// (0x0004496b) setting_slider_graphic_pane_g1

0x680f,	// (0x0004a725) setting_slider_graphic_pane_t1

0x681f,	// (0x0004a735) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00053456) setting_slider_graphic_pane_t

0x682f,	// (0x0004a745) slider_set_pane_cp

0x09eb,	// (0x00044901) input_focus_pane_cp1

0xae12,	// (0x0004ed28) list_set_text_pane

0x09e1,	// (0x000448f7) setting_text_pane_g1

0x09eb,	// (0x00044901) input_focus_pane_cp2

0x09e1,	// (0x000448f7) setting_code_pane_g1

0x0a5e,	// (0x00044974) setting_code_pane_t1

0x542b,	// (0x00049341) set_text_pane_t1_ParamLimits

0x542b,	// (0x00049341) set_text_pane_t1

0x0e55,	// (0x00044d6b) set_opt_bg_pane_g1

0x0e5d,	// (0x00044d73) set_opt_bg_pane_g2

0xadec,	// (0x0004ed02) set_opt_bg_pane_g3

0x0e6d,	// (0x00044d83) set_opt_bg_pane_g4

0x0e75,	// (0x00044d8b) set_opt_bg_pane_g5

0x0e7d,	// (0x00044d93) set_opt_bg_pane_g6

0xadf6,	// (0x0004ed0c) set_opt_bg_pane_g7

0xadfe,	// (0x0004ed14) set_opt_bg_pane_g8

0xae08,	// (0x0004ed1e) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0005385f) set_opt_bg_pane_g

0xaddf,	// (0x0004ecf5) slider_set_pane_g1

0x84b4,	// (0x0004c3ca) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00053850) slider_set_pane_g

0x8450,	// (0x0004c366) volume_set_pane_g1

0x8458,	// (0x0004c36e) volume_set_pane_g2

0x8460,	// (0x0004c376) volume_set_pane_g3

0x8468,	// (0x0004c37e) volume_set_pane_g4

0x8470,	// (0x0004c386) volume_set_pane_g5

0x8478,	// (0x0004c38e) volume_set_pane_g6

0x8480,	// (0x0004c396) volume_set_pane_g7

0x8488,	// (0x0004c39e) volume_set_pane_g8

0x8490,	// (0x0004c3a6) volume_set_pane_g9

0x8498,	// (0x0004c3ae) volume_set_pane_g10

0x0009,

0xf912,	// (0x00053828) volume_set_pane_g

0x6837,	// (0x0004a74d) indicator_pane_ParamLimits

0x6837,	// (0x0004a74d) indicator_pane

0x6843,	// (0x0004a759) main_idle_pane_g2_ParamLimits

0x6843,	// (0x0004a759) main_idle_pane_g2

0x686b,	// (0x0004a781) main_pane_idle_g1_ParamLimits

0x686b,	// (0x0004a781) main_pane_idle_g1

0x0a6c,	// (0x00044982) popup_clock_digital_analogue_window_ParamLimits

0x0a6c,	// (0x00044982) popup_clock_digital_analogue_window

0x6878,	// (0x0004a78e) soft_indicator_pane_ParamLimits

0x6878,	// (0x0004a78e) soft_indicator_pane

0x6884,	// (0x0004a79a) wallpaper_pane_ParamLimits

0x6884,	// (0x0004a79a) wallpaper_pane

0x09e1,	// (0x000448f7) wallpaper_pane_g1

0x6890,	// (0x0004a7a6) indicator_pane_g1_ParamLimits

0x6890,	// (0x0004a7a6) indicator_pane_g1

0xb1c7,	// (0x0004f0dd) navi_navi_icon_text_pane_srt_g1

0x0a9a,	// (0x000449b0) soft_indicator_pane_t1

0x0ab4,	// (0x000449ca) aid_ps_area_pane

0x689c,	// (0x0004a7b2) aid_ps_clock_pane

0x0ac5,	// (0x000449db) aid_ps_indicator_pane

0x0ad1,	// (0x000449e7) indicator_ps_pane_ParamLimits

0x0ad1,	// (0x000449e7) indicator_ps_pane

0x0ae0,	// (0x000449f6) power_save_pane_g1_ParamLimits

0x0ae0,	// (0x000449f6) power_save_pane_g1

0x0aec,	// (0x00044a02) power_save_pane_g2_ParamLimits

0x0aec,	// (0x00044a02) power_save_pane_g2

0x62ff,	// (0x0004a215) aid_navinavi_width_pane

0x0ab4,	// (0x000449ca) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005345b) power_save_pane_g_ParamLimits

0xf545,	// (0x0005345b) power_save_pane_g

0x0afa,	// (0x00044a10) power_save_pane_t1_ParamLimits

0x0afa,	// (0x00044a10) power_save_pane_t1

0x689c,	// (0x0004a7b2) aid_ps_clock_pane_ParamLimits

0x0ac5,	// (0x000449db) aid_ps_indicator_pane_ParamLimits

0x0b0c,	// (0x00044a22) power_save_pane_t4_ParamLimits

0x0b0c,	// (0x00044a22) power_save_pane_t4

0x0001,

0xf54a,	// (0x00053460) power_save_pane_t_ParamLimits

0xf54a,	// (0x00053460) power_save_pane_t

0x0b36,	// (0x00044a4c) power_save_t3_ParamLimits

0x0b36,	// (0x00044a4c) power_save_t3

0x0b21,	// (0x00044a37) power_save_t2_ParamLimits

0x0b21,	// (0x00044a37) power_save_t2

0x0b4b,	// (0x00044a61) indicator_ps_pane_g1

0x68aa,	// (0x0004a7c0) ai_gene_pane_ParamLimits

0x68aa,	// (0x0004a7c0) ai_gene_pane

0x68b6,	// (0x0004a7cc) ai_links_pane_ParamLimits

0x68b6,	// (0x0004a7cc) ai_links_pane

0x68c2,	// (0x0004a7d8) indicator_pane_cp1_ParamLimits

0x68c2,	// (0x0004a7d8) indicator_pane_cp1

0x68ce,	// (0x0004a7e4) main_pane_idle_g1_cp_ParamLimits

0x68ce,	// (0x0004a7e4) main_pane_idle_g1_cp

0x68da,	// (0x0004a7f0) popup_ai_links_title_window

0x68e3,	// (0x0004a7f9) soft_indicator_pane_cp1_ParamLimits

0x68e3,	// (0x0004a7f9) soft_indicator_pane_cp1

0xabd9,	// (0x0004eaef) ai_links_pane_g1

0xabe2,	// (0x0004eaf8) grid_ai_links_pane

0xabbc,	// (0x0004ead2) ai_gene_pane_1

0xabc7,	// (0x0004eadd) ai_gene_pane_2

0xabd0,	// (0x0004eae6) list_highlight_pane_cp4

0xaba0,	// (0x0004eab6) cell_ai_link_pane_ParamLimits

0xaba0,	// (0x0004eab6) cell_ai_link_pane

0xab98,	// (0x0004eaae) cell_ai_link_pane_g1

0x0c78,	// (0x00044b8e) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00053803) cell_ai_link_pane_g

0x09eb,	// (0x00044901) grid_highlight_cp2

0x09eb,	// (0x00044901) bg_popup_sub_pane_cp1

0x0b62,	// (0x00044a78) popup_ai_links_title_window_t1

0xaae8,	// (0x0004e9fe) ai_gene_pane_1_g1_ParamLimits

0xaae8,	// (0x0004e9fe) ai_gene_pane_1_g1

0xaaf4,	// (0x0004ea0a) ai_gene_pane_1_g2_ParamLimits

0xaaf4,	// (0x0004ea0a) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000537f9) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000537f9) ai_gene_pane_1_g

0xab01,	// (0x0004ea17) ai_gene_pane_1_t1_ParamLimits

0xab01,	// (0x0004ea17) ai_gene_pane_1_t1

0xab35,	// (0x0004ea4b) grid_ai_soft_ind_pane

0xaad3,	// (0x0004e9e9) ai_gene_pane_2_t1_ParamLimits

0xaad3,	// (0x0004e9e9) ai_gene_pane_2_t1

0x68ef,	// (0x0004a805) main_pane_empty_t1_ParamLimits

0x68ef,	// (0x0004a805) main_pane_empty_t1

0x6907,	// (0x0004a81d) main_pane_empty_t2_ParamLimits

0x6907,	// (0x0004a81d) main_pane_empty_t2

0x691c,	// (0x0004a832) main_pane_empty_t3_ParamLimits

0x691c,	// (0x0004a832) main_pane_empty_t3

0x692e,	// (0x0004a844) main_pane_empty_t4_ParamLimits

0x692e,	// (0x0004a844) main_pane_empty_t4

0x6940,	// (0x0004a856) main_pane_empty_t5_ParamLimits

0x6940,	// (0x0004a856) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00053465) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00053465) main_pane_empty_t

0x0eda,	// (0x00044df0) bg_popup_window_pane_ParamLimits

0x0eda,	// (0x00044df0) bg_popup_window_pane

0xa843,	// (0x0004e759) find_popup_pane_cp2_ParamLimits

0xa843,	// (0x0004e759) find_popup_pane_cp2

0xa84f,	// (0x0004e765) heading_pane_ParamLimits

0xa84f,	// (0x0004e765) heading_pane

0x09eb,	// (0x00044901) bg_popup_sub_pane

0xa7bd,	// (0x0004e6d3) bg_popup_window_pane_g1_ParamLimits

0xa7bd,	// (0x0004e6d3) bg_popup_window_pane_g1

0xa7c9,	// (0x0004e6df) bg_popup_window_pane_g2_ParamLimits

0xa7c9,	// (0x0004e6df) bg_popup_window_pane_g2

0xa7d5,	// (0x0004e6eb) bg_popup_window_pane_g3_ParamLimits

0xa7d5,	// (0x0004e6eb) bg_popup_window_pane_g3

0xa7e1,	// (0x0004e6f7) bg_popup_window_pane_g4_ParamLimits

0xa7e1,	// (0x0004e6f7) bg_popup_window_pane_g4

0xa7ed,	// (0x0004e703) bg_popup_window_pane_g5_ParamLimits

0xa7ed,	// (0x0004e703) bg_popup_window_pane_g5

0xa7f9,	// (0x0004e70f) bg_popup_window_pane_g6_ParamLimits

0xa7f9,	// (0x0004e70f) bg_popup_window_pane_g6

0xa805,	// (0x0004e71b) bg_popup_window_pane_g7_ParamLimits

0xa805,	// (0x0004e71b) bg_popup_window_pane_g7

0xa811,	// (0x0004e727) bg_popup_window_pane_g8_ParamLimits

0xa811,	// (0x0004e727) bg_popup_window_pane_g8

0xa81d,	// (0x0004e733) bg_popup_window_pane_g9_ParamLimits

0xa81d,	// (0x0004e733) bg_popup_window_pane_g9

0xa829,	// (0x0004e73f) bg_popup_window_pane_g10_ParamLimits

0xa829,	// (0x0004e73f) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x000537c1) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x000537c1) bg_popup_window_pane_g

0xa752,	// (0x0004e668) bg_popup_heading_pane_ParamLimits

0xa752,	// (0x0004e668) bg_popup_heading_pane

0x85e7,	// (0x0004c4fd) tabs_4_passive_pane_cp_srt_ParamLimits

0x85e7,	// (0x0004c4fd) tabs_4_passive_pane_cp_srt

0x85f9,	// (0x0004c50f) tabs_4_passive_pane_srt_ParamLimits

0xa766,	// (0x0004e67c) heading_pane_g2

0x85f9,	// (0x0004c50f) tabs_4_passive_pane_srt

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp3_srt

0xa76e,	// (0x0004e684) heading_pane_t1_ParamLimits

0xa76e,	// (0x0004e684) heading_pane_t1

0xa785,	// (0x0004e69b) heading_pane_t2_ParamLimits

0xa785,	// (0x0004e69b) heading_pane_t2

0x0001,

0xf8a6,	// (0x000537bc) heading_pane_t_ParamLimits

0xf8a6,	// (0x000537bc) heading_pane_t

0xa28f,	// (0x0004e1a5) bg_popup_heading_pane_g1

0xa33e,	// (0x0004e254) bg_popup_heading_pane_g2

0xa348,	// (0x0004e25e) bg_popup_heading_pane_g3

0xa352,	// (0x0004e268) bg_popup_heading_pane_g4

0xa35c,	// (0x0004e272) bg_popup_heading_pane_g5

0xa366,	// (0x0004e27c) bg_popup_heading_pane_g6

0xa36e,	// (0x0004e284) bg_popup_heading_pane_g7

0xa376,	// (0x0004e28c) bg_popup_heading_pane_g8

0xa380,	// (0x0004e296) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00053778) bg_popup_heading_pane_g

0x9a50,	// (0x0004d966) bg_popup_sub_pane_g1

0x9a58,	// (0x0004d96e) bg_popup_sub_pane_g2

0x9a60,	// (0x0004d976) bg_popup_sub_pane_g3

0x9a68,	// (0x0004d97e) bg_popup_sub_pane_g4

0x9a70,	// (0x0004d986) bg_popup_sub_pane_g5

0x9a78,	// (0x0004d98e) bg_popup_sub_pane_g6

0x9a80,	// (0x0004d996) bg_popup_sub_pane_g7

0x9a88,	// (0x0004d99e) bg_popup_sub_pane_g8

0x9a90,	// (0x0004d9a6) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00053752) bg_popup_sub_pane_g

0x0a39,	// (0x0004494f) bg_popup_window_pane_cp5_ParamLimits

0x0a39,	// (0x0004494f) bg_popup_window_pane_cp5

0x0b7f,	// (0x00044a95) popup_note_window_g1_ParamLimits

0x0b7f,	// (0x00044a95) popup_note_window_g1

0x0b8b,	// (0x00044aa1) popup_note_window_t1_ParamLimits

0x0b8b,	// (0x00044aa1) popup_note_window_t1

0x0ba1,	// (0x00044ab7) popup_note_window_t2_ParamLimits

0x0ba1,	// (0x00044ab7) popup_note_window_t2

0x0bb7,	// (0x00044acd) popup_note_window_t3_ParamLimits

0x0bb7,	// (0x00044acd) popup_note_window_t3

0x0bcd,	// (0x00044ae3) popup_note_window_t4_ParamLimits

0x0bcd,	// (0x00044ae3) popup_note_window_t4

0x0bf5,	// (0x00044b0b) popup_note_window_t5_ParamLimits

0x0bf5,	// (0x00044b0b) popup_note_window_t5

0x0004,

0xf55a,	// (0x00053470) popup_note_window_t_ParamLimits

0xf55a,	// (0x00053470) popup_note_window_t

0x0c19,	// (0x00044b2f) bg_popup_window_pane_cp6_ParamLimits

0x0c19,	// (0x00044b2f) bg_popup_window_pane_cp6

0xa20b,	// (0x0004e121) popup_note_image_window_g1_ParamLimits

0xa20b,	// (0x0004e121) popup_note_image_window_g1

0xa217,	// (0x0004e12d) popup_note_image_window_g2_ParamLimits

0xa217,	// (0x0004e12d) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00053746) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00053746) popup_note_image_window_g

0xa230,	// (0x0004e146) popup_note_image_window_t1_ParamLimits

0xa230,	// (0x0004e146) popup_note_image_window_t1

0xa249,	// (0x0004e15f) popup_note_image_window_t2_ParamLimits

0xa249,	// (0x0004e15f) popup_note_image_window_t2

0xa262,	// (0x0004e178) popup_note_image_window_t3_ParamLimits

0xa262,	// (0x0004e178) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0005374b) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0005374b) popup_note_image_window_t

0xa0d4,	// (0x0004dfea) bg_popup_window_pane_cp7_ParamLimits

0xa0d4,	// (0x0004dfea) bg_popup_window_pane_cp7

0xa104,	// (0x0004e01a) popup_note_wait_window_g1_ParamLimits

0xa104,	// (0x0004e01a) popup_note_wait_window_g1

0xa110,	// (0x0004e026) popup_note_wait_window_g2_ParamLimits

0xa110,	// (0x0004e026) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00053734) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00053734) popup_note_wait_window_g

0xa128,	// (0x0004e03e) popup_note_wait_window_t1_ParamLimits

0xa128,	// (0x0004e03e) popup_note_wait_window_t1

0xa14f,	// (0x0004e065) popup_note_wait_window_t2_ParamLimits

0xa14f,	// (0x0004e065) popup_note_wait_window_t2

0xa16c,	// (0x0004e082) popup_note_wait_window_t3_ParamLimits

0xa16c,	// (0x0004e082) popup_note_wait_window_t3

0xa17f,	// (0x0004e095) popup_note_wait_window_t4_ParamLimits

0xa17f,	// (0x0004e095) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0005373b) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0005373b) popup_note_wait_window_t

0xa1a4,	// (0x0004e0ba) wait_bar_pane_ParamLimits

0xa1a4,	// (0x0004e0ba) wait_bar_pane

0x09eb,	// (0x00044901) wait_anim_pane

0x09eb,	// (0x00044901) wait_border_pane

0x09e1,	// (0x000448f7) wait_anim_pane_g1

0x09e1,	// (0x000448f7) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x000535ef) wait_anim_pane_g

0xa080,	// (0x0004df96) wait_border_pane_g1

0xa08b,	// (0x0004dfa1) wait_border_pane_g2

0xa094,	// (0x0004dfaa) wait_border_pane_g3

0x0002,

0xf817,	// (0x0005372d) wait_border_pane_g

0x9eeb,	// (0x0004de01) bg_popup_window_pane_cp16_ParamLimits

0x9eeb,	// (0x0004de01) bg_popup_window_pane_cp16

0x9feb,	// (0x0004df01) indicator_popup_pane_cp4_ParamLimits

0x9feb,	// (0x0004df01) indicator_popup_pane_cp4

0x9fff,	// (0x0004df15) popup_query_data_window_t1_ParamLimits

0x9fff,	// (0x0004df15) popup_query_data_window_t1

0xa011,	// (0x0004df27) popup_query_data_window_t2_ParamLimits

0xa011,	// (0x0004df27) popup_query_data_window_t2

0xa02a,	// (0x0004df40) popup_query_data_window_t3_ParamLimits

0xa02a,	// (0x0004df40) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00053726) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00053726) popup_query_data_window_t

0xa044,	// (0x0004df5a) query_popup_data_pane_ParamLimits

0xa044,	// (0x0004df5a) query_popup_data_pane

0xa058,	// (0x0004df6e) query_popup_data_pane_cp1_ParamLimits

0xa058,	// (0x0004df6e) query_popup_data_pane_cp1

0x9eeb,	// (0x0004de01) bg_popup_window_pane_cp10_ParamLimits

0x9eeb,	// (0x0004de01) bg_popup_window_pane_cp10

0x9f1d,	// (0x0004de33) indicator_popup_pane_ParamLimits

0x9f1d,	// (0x0004de33) indicator_popup_pane

0x9f3f,	// (0x0004de55) popup_query_code_window_t1_ParamLimits

0x9f3f,	// (0x0004de55) popup_query_code_window_t1

0x9f59,	// (0x0004de6f) popup_query_code_window_t2_ParamLimits

0x9f59,	// (0x0004de6f) popup_query_code_window_t2

0x9fa2,	// (0x0004deb8) popup_query_code_window_t3_ParamLimits

0x9fa2,	// (0x0004deb8) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0005371f) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0005371f) popup_query_code_window_t

0x9fd1,	// (0x0004dee7) query_popup_pane_ParamLimits

0x9fd1,	// (0x0004dee7) query_popup_pane

0x0c19,	// (0x00044b2f) bg_popup_window_pane_cp15_ParamLimits

0x0c19,	// (0x00044b2f) bg_popup_window_pane_cp15

0x697a,	// (0x0004a890) indicator_popup_pane_cp1_ParamLimits

0x697a,	// (0x0004a890) indicator_popup_pane_cp1

0x698d,	// (0x0004a8a3) indicator_popup_pane_cp2_ParamLimits

0x698d,	// (0x0004a8a3) indicator_popup_pane_cp2

0x69a0,	// (0x0004a8b6) popup_query_data_code_window_g1_ParamLimits

0x69a0,	// (0x0004a8b6) popup_query_data_code_window_g1

0x0c37,	// (0x00044b4d) popup_query_data_code_window_t1_ParamLimits

0x0c37,	// (0x00044b4d) popup_query_data_code_window_t1

0x0c49,	// (0x00044b5f) popup_query_data_code_window_t2_ParamLimits

0x0c49,	// (0x00044b5f) popup_query_data_code_window_t2

0x69b3,	// (0x0004a8c9) popup_query_data_code_window_t3_ParamLimits

0x69b3,	// (0x0004a8c9) popup_query_data_code_window_t3

0x69c9,	// (0x0004a8df) popup_query_data_code_window_t4_ParamLimits

0x69c9,	// (0x0004a8df) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005347b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005347b) popup_query_data_code_window_t

0x150e,	// (0x00045424) list_single_midp_graphic_pane_g3

0x69e1,	// (0x0004a8f7) query_popup_data_pane_cp2_ParamLimits

0x69f4,	// (0x0004a90a) query_popup_pane_cp2_ParamLimits

0x69f4,	// (0x0004a90a) query_popup_pane_cp2

0x09eb,	// (0x00044901) bg_popup_window_pane_cp11

0x9ecf,	// (0x0004dde5) heading_pane_cp5

0x9ed7,	// (0x0004dded) listscroll_popup_info_pane

0x09eb,	// (0x00044901) input_focus_pane_cp3

0x0c5b,	// (0x00044b71) query_popup_pane_t1

0x0c69,	// (0x00044b7f) list_popup_info_pane_ParamLimits

0x0c69,	// (0x00044b7f) list_popup_info_pane

0x0c78,	// (0x00044b8e) listscroll_popup_info_pane_g1

0x0c80,	// (0x00044b96) scroll_pane_cp7

0x6a07,	// (0x0004a91d) popup_info_list_pane_t1_ParamLimits

0x6a07,	// (0x0004a91d) popup_info_list_pane_t1

0x6a21,	// (0x0004a937) popup_info_list_pane_t2_ParamLimits

0x6a21,	// (0x0004a937) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00053484) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00053484) popup_info_list_pane_t

0x09eb,	// (0x00044901) bg_popup_window_pane_cp12

0xb1e1,	// (0x0004f0f7) find_popup_pane

0x0a47,	// (0x0004495d) bg_popup_window_pane_cp3

0x0c8a,	// (0x00044ba0) heading_pane_cp3

0x0c99,	// (0x00044baf) listscroll_popup_graphic_pane

0x09eb,	// (0x00044901) bg_popup_window_pane_cp4

0x6a8b,	// (0x0004a9a1) heading_pane_cp4

0x0ca9,	// (0x00044bbf) listscroll_popup_colour_pane

0x6a95,	// (0x0004a9ab) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6a95,	// (0x0004a9ab) cell_large_graphic_colour_none_popup_pane

0x6aa9,	// (0x0004a9bf) grid_large_graphic_colour_popup_pane_ParamLimits

0x6aa9,	// (0x0004a9bf) grid_large_graphic_colour_popup_pane

0x6acd,	// (0x0004a9e3) listscroll_popup_colour_pane_g1_ParamLimits

0x6acd,	// (0x0004a9e3) listscroll_popup_colour_pane_g1

0x6ae4,	// (0x0004a9fa) listscroll_popup_colour_pane_g2_ParamLimits

0x6ae4,	// (0x0004a9fa) listscroll_popup_colour_pane_g2

0x6afb,	// (0x0004aa11) listscroll_popup_colour_pane_g3_ParamLimits

0x6afb,	// (0x0004aa11) listscroll_popup_colour_pane_g3

0x6b0b,	// (0x0004aa21) listscroll_popup_colour_pane_g4_ParamLimits

0x6b0b,	// (0x0004aa21) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00053489) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00053489) listscroll_popup_colour_pane_g

0x0cb1,	// (0x00044bc7) scroll_pane_cp6_ParamLimits

0x0cb1,	// (0x00044bc7) scroll_pane_cp6

0x6b1b,	// (0x0004aa31) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b1b,	// (0x0004aa31) cell_large_graphic_colour_popup_pane

0x6b3a,	// (0x0004aa50) cell_large_graphic_colour_none_popup_pane_t1

0x09eb,	// (0x00044901) grid_highlight_pane_cp5

0x0cc3,	// (0x00044bd9) cell_large_graphic_colour_popup_pane_g1

0x0ccb,	// (0x00044be1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00053492) cell_large_graphic_colour_popup_pane_g

0x0cd3,	// (0x00044be9) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cdc,	// (0x00044bf2) grid_highlight_pane_cp4

0x0ce4,	// (0x00044bfa) bg_popup_window_pane_cp8_ParamLimits

0x0ce4,	// (0x00044bfa) bg_popup_window_pane_cp8

0x6b49,	// (0x0004aa5f) popup_snote_single_text_window_g1_ParamLimits

0x6b49,	// (0x0004aa5f) popup_snote_single_text_window_g1

0x6b5b,	// (0x0004aa71) popup_snote_single_text_window_t1_ParamLimits

0x6b5b,	// (0x0004aa71) popup_snote_single_text_window_t1

0x6b6e,	// (0x0004aa84) popup_snote_single_text_window_t2_ParamLimits

0x6b6e,	// (0x0004aa84) popup_snote_single_text_window_t2

0x6b81,	// (0x0004aa97) popup_snote_single_text_window_t3_ParamLimits

0x6b81,	// (0x0004aa97) popup_snote_single_text_window_t3

0x6bba,	// (0x0004aad0) popup_snote_single_text_window_t4_ParamLimits

0x6bba,	// (0x0004aad0) popup_snote_single_text_window_t4

0x6bee,	// (0x0004ab04) popup_snote_single_text_window_t5_ParamLimits

0x6bee,	// (0x0004ab04) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00053497) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00053497) popup_snote_single_text_window_t

0x0cff,	// (0x00044c15) bg_popup_window_pane_cp9_ParamLimits

0x0cff,	// (0x00044c15) bg_popup_window_pane_cp9

0x6b49,	// (0x0004aa5f) popup_snote_single_graphic_window_g1_ParamLimits

0x6b49,	// (0x0004aa5f) popup_snote_single_graphic_window_g1

0x0d0d,	// (0x00044c23) popup_snote_single_graphic_window_g2_ParamLimits

0x0d0d,	// (0x00044c23) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000534a2) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000534a2) popup_snote_single_graphic_window_g

0x0d19,	// (0x00044c2f) popup_snote_single_graphic_window_t1_ParamLimits

0x0d19,	// (0x00044c2f) popup_snote_single_graphic_window_t1

0x0d2c,	// (0x00044c42) popup_snote_single_graphic_window_t2_ParamLimits

0x0d2c,	// (0x00044c42) popup_snote_single_graphic_window_t2

0x6c1d,	// (0x0004ab33) popup_snote_single_graphic_window_t3_ParamLimits

0x6c1d,	// (0x0004ab33) popup_snote_single_graphic_window_t3

0x6c56,	// (0x0004ab6c) popup_snote_single_graphic_window_t4_ParamLimits

0x6c56,	// (0x0004ab6c) popup_snote_single_graphic_window_t4

0x6c8a,	// (0x0004aba0) popup_snote_single_graphic_window_t5_ParamLimits

0x6c8a,	// (0x0004aba0) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000534a7) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000534a7) popup_snote_single_graphic_window_t

0xb123,	// (0x0004f039) grid_graphic_popup_pane_ParamLimits

0xb123,	// (0x0004f039) grid_graphic_popup_pane

0xb14d,	// (0x0004f063) listscroll_popup_graphic_pane_g1_ParamLimits

0xb14d,	// (0x0004f063) listscroll_popup_graphic_pane_g1

0xb161,	// (0x0004f077) listscroll_popup_graphic_pane_g2_ParamLimits

0xb161,	// (0x0004f077) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0005389c) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0005389c) listscroll_popup_graphic_pane_g

0xb175,	// (0x0004f08b) scroll_pane_cp5

0xb0b9,	// (0x0004efcf) cell_graphic_popup_pane_ParamLimits

0xb0b9,	// (0x0004efcf) cell_graphic_popup_pane

0xb09a,	// (0x0004efb0) cell_graphic_popup_pane_g1

0xb0a2,	// (0x0004efb8) cell_graphic_popup_pane_g2

0x0cd3,	// (0x00044be9) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00053895) cell_graphic_popup_pane_g

0xb0ab,	// (0x0004efc1) cell_graphic_popup_pane_t2

0x0cdc,	// (0x00044bf2) grid_highlight_pane_cp3

0x0d51,	// (0x00044c67) list_gen_pane_ParamLimits

0x0d51,	// (0x00044c67) list_gen_pane

0x0d79,	// (0x00044c8f) scroll_pane

0xaff2,	// (0x0004ef08) bg_list_pane_g1_ParamLimits

0xaff2,	// (0x0004ef08) bg_list_pane_g1

0xb00f,	// (0x0004ef25) bg_list_pane_g2_ParamLimits

0xb00f,	// (0x0004ef25) bg_list_pane_g2

0xb024,	// (0x0004ef3a) bg_list_pane_g3_ParamLimits

0xb024,	// (0x0004ef3a) bg_list_pane_g3

0xb038,	// (0x0004ef4e) bg_list_pane_g4_ParamLimits

0xb038,	// (0x0004ef4e) bg_list_pane_g4

0xb04c,	// (0x0004ef62) bg_list_pane_g5_ParamLimits

0xb04c,	// (0x0004ef62) bg_list_pane_g5

0x0004,

0xf974,	// (0x0005388a) bg_list_pane_g_ParamLimits

0xf974,	// (0x0005388a) bg_list_pane_g

0x8518,	// (0x0004c42e) list_double2_graphic_large_graphic_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double2_graphic_large_graphic_pane

0x8518,	// (0x0004c42e) list_double2_graphic_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double2_graphic_pane

0x8518,	// (0x0004c42e) list_double2_large_graphic_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double2_large_graphic_pane

0x5cb0,	// (0x00049bc6) list_double2_pane_ParamLimits

0x5cb0,	// (0x00049bc6) list_double2_pane

0x8518,	// (0x0004c42e) list_double_graphic_heading_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_graphic_heading_pane

0x8518,	// (0x0004c42e) list_double_graphic_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_graphic_pane

0x8518,	// (0x0004c42e) list_double_heading_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_heading_pane

0x8518,	// (0x0004c42e) list_double_large_graphic_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_large_graphic_pane

0x8518,	// (0x0004c42e) list_double_number_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_number_pane

0x8518,	// (0x0004c42e) list_double_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_pane

0x8518,	// (0x0004c42e) list_double_time_pane_ParamLimits

0x8518,	// (0x0004c42e) list_double_time_pane

0x8518,	// (0x0004c42e) list_setting_number_pane_ParamLimits

0x8518,	// (0x0004c42e) list_setting_number_pane

0x8518,	// (0x0004c42e) list_setting_pane_ParamLimits

0x8518,	// (0x0004c42e) list_setting_pane

0x8583,	// (0x0004c499) list_single_2graphic_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_2graphic_pane

0x8583,	// (0x0004c499) list_single_graphic_heading_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_graphic_heading_pane

0x8583,	// (0x0004c499) list_single_graphic_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_graphic_pane

0x8583,	// (0x0004c499) list_single_heading_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_heading_pane

0x5d04,	// (0x00049c1a) list_single_large_graphic_pane_ParamLimits

0x5d04,	// (0x00049c1a) list_single_large_graphic_pane

0x8583,	// (0x0004c499) list_single_number_heading_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_number_heading_pane

0x8583,	// (0x0004c499) list_single_number_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_number_pane

0x8583,	// (0x0004c499) list_single_pane_ParamLimits

0x8583,	// (0x0004c499) list_single_pane

0x09eb,	// (0x00044901) list_highlight_pane_cp1

0x6cc3,	// (0x0004abd9) list_single_pane_g1_ParamLimits

0x6cc3,	// (0x0004abd9) list_single_pane_g1

0x6ccf,	// (0x0004abe5) list_single_pane_g2_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000534c3) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000534c3) list_single_pane_g

0x5c9a,	// (0x00049bb0) list_single_pane_t1_ParamLimits

0x5c9a,	// (0x00049bb0) list_single_pane_t1

0x6cc3,	// (0x0004abd9) list_single_number_pane_g1_ParamLimits

0x6cc3,	// (0x0004abd9) list_single_number_pane_g1

0x6ccf,	// (0x0004abe5) list_single_number_pane_g2_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000534c3) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000534c3) list_single_number_pane_g

0x5450,	// (0x00049366) list_single_number_pane_t1_ParamLimits

0x5450,	// (0x00049366) list_single_number_pane_t1

0x5c58,	// (0x00049b6e) list_single_number_pane_t2_ParamLimits

0x5c58,	// (0x00049b6e) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0005384b) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0005384b) list_single_number_pane_t

0x5444,	// (0x0004935a) list_single_graphic_pane_g1_ParamLimits

0x5444,	// (0x0004935a) list_single_graphic_pane_g1

0x6cc3,	// (0x0004abd9) list_single_graphic_pane_g2_ParamLimits

0x6cc3,	// (0x0004abd9) list_single_graphic_pane_g2

0x6ccf,	// (0x0004abe5) list_single_graphic_pane_g3_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000534b2) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000534b2) list_single_graphic_pane_g

0x5450,	// (0x00049366) list_single_graphic_pane_t1_ParamLimits

0x5450,	// (0x00049366) list_single_graphic_pane_t1

0x5466,	// (0x0004937c) list_single_heading_pane_g1_ParamLimits

0x5466,	// (0x0004937c) list_single_heading_pane_g1

0x6ccf,	// (0x0004abe5) list_single_heading_pane_g2_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000534b9) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000534b9) list_single_heading_pane_g

0x5479,	// (0x0004938f) list_single_heading_pane_t1_ParamLimits

0x5479,	// (0x0004938f) list_single_heading_pane_t1

0x6cdb,	// (0x0004abf1) list_single_heading_pane_t2_ParamLimits

0x6cdb,	// (0x0004abf1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000534be) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000534be) list_single_heading_pane_t

0x6cc3,	// (0x0004abd9) list_single_number_heading_pane_g1_ParamLimits

0x6cc3,	// (0x0004abd9) list_single_number_heading_pane_g1

0x6ccf,	// (0x0004abe5) list_single_number_heading_pane_g2_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000534c3) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000534c3) list_single_number_heading_pane_g

0x548f,	// (0x000493a5) list_single_number_heading_pane_t1_ParamLimits

0x548f,	// (0x000493a5) list_single_number_heading_pane_t1

0x54a5,	// (0x000493bb) list_single_number_heading_pane_t2_ParamLimits

0x54a5,	// (0x000493bb) list_single_number_heading_pane_t2

0x54b7,	// (0x000493cd) list_single_number_heading_pane_t3_ParamLimits

0x54b7,	// (0x000493cd) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000534c8) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000534c8) list_single_number_heading_pane_t

0x54c9,	// (0x000493df) list_single_graphic_heading_pane_g1_ParamLimits

0x54c9,	// (0x000493df) list_single_graphic_heading_pane_g1

0x6ced,	// (0x0004ac03) list_single_graphic_heading_pane_g4_ParamLimits

0x6ced,	// (0x0004ac03) list_single_graphic_heading_pane_g4

0x6ccf,	// (0x0004abe5) list_single_graphic_heading_pane_g5_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000534cf) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000534cf) list_single_graphic_heading_pane_g

0x548f,	// (0x000493a5) list_single_graphic_heading_pane_t1_ParamLimits

0x548f,	// (0x000493a5) list_single_graphic_heading_pane_t1

0x54d5,	// (0x000493eb) list_single_graphic_heading_pane_t2_ParamLimits

0x54d5,	// (0x000493eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000534d6) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000534d6) list_single_graphic_heading_pane_t

0x54e7,	// (0x000493fd) list_single_large_graphic_pane_g1_ParamLimits

0x54e7,	// (0x000493fd) list_single_large_graphic_pane_g1

0x6cfe,	// (0x0004ac14) list_single_large_graphic_pane_g2_ParamLimits

0x6cfe,	// (0x0004ac14) list_single_large_graphic_pane_g2

0x6d0a,	// (0x0004ac20) list_single_large_graphic_pane_g3_ParamLimits

0x6d0a,	// (0x0004ac20) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000534db) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000534db) list_single_large_graphic_pane_g

0xa08b,	// (0x0004dfa1) wait_border_pane_g2_copy1

0x54f3,	// (0x00049409) list_single_large_graphic_pane_g4_cp2

0x54fb,	// (0x00049411) list_single_large_graphic_pane_t1_ParamLimits

0x54fb,	// (0x00049411) list_single_large_graphic_pane_t1

0x25e0,	// (0x000464f6) list_double_pane_g1_ParamLimits

0x25e0,	// (0x000464f6) list_double_pane_g1

0x6d16,	// (0x0004ac2c) list_double_pane_g2_ParamLimits

0x6d16,	// (0x0004ac2c) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000534e2) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000534e2) list_double_pane_g

0x5511,	// (0x00049427) list_double_pane_t1_ParamLimits

0x5511,	// (0x00049427) list_double_pane_t1

0x5527,	// (0x0004943d) list_double_pane_t2_ParamLimits

0x5527,	// (0x0004943d) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000534e7) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000534e7) list_double_pane_t

0x5539,	// (0x0004944f) list_double2_pane_g1_ParamLimits

0x5539,	// (0x0004944f) list_double2_pane_g1

0x554a,	// (0x00049460) list_double2_pane_g2_ParamLimits

0x554a,	// (0x00049460) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000534ec) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000534ec) list_double2_pane_g

0x5556,	// (0x0004946c) list_double2_pane_t1_ParamLimits

0x5556,	// (0x0004946c) list_double2_pane_t1

0x556c,	// (0x00049482) list_double2_pane_t2_ParamLimits

0x556c,	// (0x00049482) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000534f1) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000534f1) list_double2_pane_t

0x25e0,	// (0x000464f6) list_double_number_pane_g1_ParamLimits

0x25e0,	// (0x000464f6) list_double_number_pane_g1

0x6d16,	// (0x0004ac2c) list_double_number_pane_g2_ParamLimits

0x6d16,	// (0x0004ac2c) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000534e2) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000534e2) list_double_number_pane_g

0x557e,	// (0x00049494) list_double_number_pane_t1_ParamLimits

0x557e,	// (0x00049494) list_double_number_pane_t1

0x5590,	// (0x000494a6) list_double_number_pane_t2_ParamLimits

0x5590,	// (0x000494a6) list_double_number_pane_t2

0x55a6,	// (0x000494bc) list_double_number_pane_t3_ParamLimits

0x55a6,	// (0x000494bc) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000534f6) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000534f6) list_double_number_pane_t

0x55b8,	// (0x000494ce) list_double_graphic_pane_g1_ParamLimits

0x55b8,	// (0x000494ce) list_double_graphic_pane_g1

0x55c4,	// (0x000494da) list_double_graphic_pane_g2_ParamLimits

0x55c4,	// (0x000494da) list_double_graphic_pane_g2

0x55d3,	// (0x000494e9) list_double_graphic_pane_g3_ParamLimits

0x55d3,	// (0x000494e9) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000534fd) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000534fd) list_double_graphic_pane_g

0x5590,	// (0x000494a6) list_double_graphic_pane_t1_ParamLimits

0x5590,	// (0x000494a6) list_double_graphic_pane_t1

0x55a6,	// (0x000494bc) list_double_graphic_pane_t2_ParamLimits

0x55a6,	// (0x000494bc) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00053506) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00053506) list_double_graphic_pane_t

0x55b8,	// (0x000494ce) list_double2_graphic_pane_g1_ParamLimits

0x55b8,	// (0x000494ce) list_double2_graphic_pane_g1

0x25e0,	// (0x000464f6) list_double2_graphic_pane_g2_ParamLimits

0x25e0,	// (0x000464f6) list_double2_graphic_pane_g2

0x6d16,	// (0x0004ac2c) list_double2_graphic_pane_g3_ParamLimits

0x6d16,	// (0x0004ac2c) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0005350b) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0005350b) list_double2_graphic_pane_g

0x5590,	// (0x000494a6) list_double2_graphic_pane_t1_ParamLimits

0x5590,	// (0x000494a6) list_double2_graphic_pane_t1

0x55df,	// (0x000494f5) list_double2_graphic_pane_t2_ParamLimits

0x55df,	// (0x000494f5) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00053512) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00053512) list_double2_graphic_pane_t

0x55f1,	// (0x00049507) list_double_large_graphic_pane_g1_ParamLimits

0x55f1,	// (0x00049507) list_double_large_graphic_pane_g1

0x5610,	// (0x00049526) list_double_large_graphic_pane_g2_ParamLimits

0x5610,	// (0x00049526) list_double_large_graphic_pane_g2

0x6d16,	// (0x0004ac2c) list_double_large_graphic_pane_g3_ParamLimits

0x6d16,	// (0x0004ac2c) list_double_large_graphic_pane_g3

0x5626,	// (0x0004953c) list_double_large_graphic_pane_g4_ParamLimits

0x5626,	// (0x0004953c) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00053517) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00053517) list_double_large_graphic_pane_g

0x5638,	// (0x0004954e) list_double_large_graphic_pane_t1_ParamLimits

0x5638,	// (0x0004954e) list_double_large_graphic_pane_t1

0x5651,	// (0x00049567) list_double_large_graphic_pane_t2_ParamLimits

0x5651,	// (0x00049567) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00053522) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00053522) list_double_large_graphic_pane_t

0x5663,	// (0x00049579) list_double2_large_graphic_pane_g1_ParamLimits

0x5663,	// (0x00049579) list_double2_large_graphic_pane_g1

0x6d43,	// (0x0004ac59) list_double2_large_graphic_pane_g2_ParamLimits

0x6d43,	// (0x0004ac59) list_double2_large_graphic_pane_g2

0x6d16,	// (0x0004ac2c) list_double2_large_graphic_pane_g3_ParamLimits

0x6d16,	// (0x0004ac2c) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00053527) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00053527) list_double2_large_graphic_pane_g

0x5590,	// (0x000494a6) list_double2_large_graphic_pane_t1_ParamLimits

0x5590,	// (0x000494a6) list_double2_large_graphic_pane_t1

0x55df,	// (0x000494f5) list_double2_large_graphic_pane_t2_ParamLimits

0x55df,	// (0x000494f5) list_double2_large_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00053512) list_double2_large_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00053512) list_double2_large_graphic_pane_t

0x566f,	// (0x00049585) list_double_heading_pane_g1_ParamLimits

0x566f,	// (0x00049585) list_double_heading_pane_g1

0x6d54,	// (0x0004ac6a) list_double_heading_pane_g2_ParamLimits

0x6d54,	// (0x0004ac6a) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0005352e) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0005352e) list_double_heading_pane_g

0x5680,	// (0x00049596) list_double_heading_pane_t1_ParamLimits

0x5680,	// (0x00049596) list_double_heading_pane_t1

0x5696,	// (0x000495ac) list_double_heading_pane_t2_ParamLimits

0x5696,	// (0x000495ac) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00053533) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00053533) list_double_heading_pane_t

0x56a8,	// (0x000495be) list_double_graphic_heading_pane_g1_ParamLimits

0x56a8,	// (0x000495be) list_double_graphic_heading_pane_g1

0x566f,	// (0x00049585) list_double_graphic_heading_pane_g2_ParamLimits

0x566f,	// (0x00049585) list_double_graphic_heading_pane_g2

0x6d54,	// (0x0004ac6a) list_double_graphic_heading_pane_g3_ParamLimits

0x6d54,	// (0x0004ac6a) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00053538) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00053538) list_double_graphic_heading_pane_g

0x5680,	// (0x00049596) list_double_graphic_heading_pane_t1_ParamLimits

0x5680,	// (0x00049596) list_double_graphic_heading_pane_t1

0x5696,	// (0x000495ac) list_double_graphic_heading_pane_t2_ParamLimits

0x5696,	// (0x000495ac) list_double_graphic_heading_pane_t2

0x0001,

0xf61d,	// (0x00053533) list_double_graphic_heading_pane_t_ParamLimits

0xf61d,	// (0x00053533) list_double_graphic_heading_pane_t

0x56b4,	// (0x000495ca) list_double_time_pane_g1_ParamLimits

0x56b4,	// (0x000495ca) list_double_time_pane_g1

0x56c5,	// (0x000495db) list_double_time_pane_g2_ParamLimits

0x56c5,	// (0x000495db) list_double_time_pane_g2

0x0001,

0xf629,	// (0x0005353f) list_double_time_pane_g_ParamLimits

0xf629,	// (0x0005353f) list_double_time_pane_g

0x56d1,	// (0x000495e7) list_double_time_pane_t1_ParamLimits

0x56d1,	// (0x000495e7) list_double_time_pane_t1

0x56e7,	// (0x000495fd) list_double_time_pane_t2_ParamLimits

0x56e7,	// (0x000495fd) list_double_time_pane_t2

0x56f9,	// (0x0004960f) list_double_time_pane_t3_ParamLimits

0x56f9,	// (0x0004960f) list_double_time_pane_t3

0x570b,	// (0x00049621) list_double_time_pane_t4_ParamLimits

0x570b,	// (0x00049621) list_double_time_pane_t4

0x0003,

0xf62e,	// (0x00053544) list_double_time_pane_t_ParamLimits

0xf62e,	// (0x00053544) list_double_time_pane_t

0x571d,	// (0x00049633) list_setting_pane_g1_ParamLimits

0x571d,	// (0x00049633) list_setting_pane_g1

0x5729,	// (0x0004963f) list_setting_pane_g2_ParamLimits

0x5729,	// (0x0004963f) list_setting_pane_g2

0x0001,

0xf637,	// (0x0005354d) list_setting_pane_g_ParamLimits

0xf637,	// (0x0005354d) list_setting_pane_g

0x5735,	// (0x0004964b) list_setting_pane_t1_ParamLimits

0x5735,	// (0x0004964b) list_setting_pane_t1

0x574f,	// (0x00049665) list_setting_pane_t2_ParamLimits

0x574f,	// (0x00049665) list_setting_pane_t2

0x0002,

0xf63c,	// (0x00053552) list_setting_pane_t_ParamLimits

0xf63c,	// (0x00053552) list_setting_pane_t

0x578c,	// (0x000496a2) set_value_pane_cp_ParamLimits

0x578c,	// (0x000496a2) set_value_pane_cp

0x5798,	// (0x000496ae) list_setting_number_pane_g1_ParamLimits

0x5798,	// (0x000496ae) list_setting_number_pane_g1

0x57a4,	// (0x000496ba) list_setting_number_pane_g2_ParamLimits

0x57a4,	// (0x000496ba) list_setting_number_pane_g2

0x0001,

0xf643,	// (0x00053559) list_setting_number_pane_g_ParamLimits

0xf643,	// (0x00053559) list_setting_number_pane_g

0x57b0,	// (0x000496c6) list_setting_number_pane_t1_ParamLimits

0x57b0,	// (0x000496c6) list_setting_number_pane_t1

0x57c9,	// (0x000496df) list_setting_number_pane_t2_ParamLimits

0x57c9,	// (0x000496df) list_setting_number_pane_t2

0x57e3,	// (0x000496f9) list_setting_number_pane_t3_ParamLimits

0x57e3,	// (0x000496f9) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x0005355e) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x0005355e) list_setting_number_pane_t

0x578c,	// (0x000496a2) set_value_pane_ParamLimits

0x578c,	// (0x000496a2) set_value_pane

0x0dad,	// (0x00044cc3) bg_set_opt_pane_ParamLimits

0x0dad,	// (0x00044cc3) bg_set_opt_pane

0x5826,	// (0x0004973c) set_value_pane_t1

0x0dce,	// (0x00044ce4) slider_set_pane_cp3

0x6d60,	// (0x0004ac76) volume_small_pane_cp

0x0dd7,	// (0x00044ced) list_form_gen_pane

0x0de0,	// (0x00044cf6) scroll_pane_cp8

0x583c,	// (0x00049752) form_field_data_pane_ParamLimits

0x583c,	// (0x00049752) form_field_data_pane

0x585e,	// (0x00049774) form_field_data_wide_pane_ParamLimits

0x585e,	// (0x00049774) form_field_data_wide_pane

0x5881,	// (0x00049797) form_field_popup_pane_ParamLimits

0x5881,	// (0x00049797) form_field_popup_pane

0x58a1,	// (0x000497b7) form_field_popup_wide_pane_ParamLimits

0x58a1,	// (0x000497b7) form_field_popup_wide_pane

0x58be,	// (0x000497d4) form_field_slider_pane_ParamLimits

0x58be,	// (0x000497d4) form_field_slider_pane

0x58d1,	// (0x000497e7) form_field_slider_wide_pane_ParamLimits

0x58d1,	// (0x000497e7) form_field_slider_wide_pane

0x0df1,	// (0x00044d07) data_form_pane

0x58ee,	// (0x00049804) form_field_data_pane_t1

0x0dfd,	// (0x00044d13) input_focus_pane

0x5906,	// (0x0004981c) data_form_wide_pane

0x5923,	// (0x00049839) form_field_data_wide_pane_t1

0x0cf1,	// (0x00044c07) input_focus_pane_cp6

0x5945,	// (0x0004985b) form_field_popup_pane_t1

0x0dfd,	// (0x00044d13) input_focus_pane_cp7

0x0e2b,	// (0x00044d41) list_form_pane

0x5965,	// (0x0004987b) form_field_popup_wide_pane_t1

0x0dfd,	// (0x00044d13) input_focus_pane_cp8

0x0e37,	// (0x00044d4d) list_form_wide_pane

0x5982,	// (0x00049898) form_field_slider_pane_t1_ParamLimits

0x5982,	// (0x00049898) form_field_slider_pane_t1

0x5998,	// (0x000498ae) form_field_slider_pane_t2_ParamLimits

0x5998,	// (0x000498ae) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x0005356e) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x0005356e) form_field_slider_pane_t

0x0a39,	// (0x0004494f) input_focus_pane_cp9_ParamLimits

0x0a39,	// (0x0004494f) input_focus_pane_cp9

0x59ad,	// (0x000498c3) slider_cont_pane_ParamLimits

0x59ad,	// (0x000498c3) slider_cont_pane

0x0e43,	// (0x00044d59) form_field_slider_wide_pane_t1_ParamLimits

0x0e43,	// (0x00044d59) form_field_slider_wide_pane_t1

0x59c1,	// (0x000498d7) form_field_slider_wide_pane_t2_ParamLimits

0x59c1,	// (0x000498d7) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00053573) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00053573) form_field_slider_wide_pane_t

0x0a39,	// (0x0004494f) input_focus_pane_cp10_ParamLimits

0x0a39,	// (0x0004494f) input_focus_pane_cp10

0x59d3,	// (0x000498e9) slider_cont_pane_cp1_ParamLimits

0x59d3,	// (0x000498e9) slider_cont_pane_cp1

0x59e7,	// (0x000498fd) slider_form_pane_cp

0x0e55,	// (0x00044d6b) input_focus_pane_g1

0x0e5d,	// (0x00044d73) input_focus_pane_g2

0x0e65,	// (0x00044d7b) input_focus_pane_g3

0x0e6d,	// (0x00044d83) input_focus_pane_g4

0x0e75,	// (0x00044d8b) input_focus_pane_g5

0x0e7d,	// (0x00044d93) input_focus_pane_g6

0x0e85,	// (0x00044d9b) input_focus_pane_g7

0x0e8d,	// (0x00044da3) input_focus_pane_g8

0x0e95,	// (0x00044dab) input_focus_pane_g9

0x09e1,	// (0x000448f7) input_focus_pane_g10

0x0009,

0xf662,	// (0x00053578) input_focus_pane_g

0xa094,	// (0x0004dfaa) wait_border_pane_g3_copy1

0x59ef,	// (0x00049905) data_form_pane_t1

0x09e1,	// (0x000448f7) wait_anim_pane_g1_copy1

0x5c6a,	// (0x00049b80) data_form_wide_pane_t1

0x5a0a,	// (0x00049920) list_form_graphic_pane_cp_ParamLimits

0x5a0a,	// (0x00049920) list_form_graphic_pane_cp

0xaf83,	// (0x0004ee99) slider_form_pane_g1

0xaf8c,	// (0x0004eea2) slider_form_pane_g2

0x0006,

0xf965,	// (0x0005387b) slider_form_pane_g

0x5a0a,	// (0x00049920) list_form_graphic_pane_ParamLimits

0x5a0a,	// (0x00049920) list_form_graphic_pane

0x5a23,	// (0x00049939) list_form_graphic_pane_g1

0x5a2b,	// (0x00049941) list_form_graphic_pane_t1_ParamLimits

0x5a2b,	// (0x00049941) list_form_graphic_pane_t1

0x0a47,	// (0x0004495d) list_highlight_pane_cp5_ParamLimits

0x0a47,	// (0x0004495d) list_highlight_pane_cp5

0x5a40,	// (0x00049956) find_pane_g1

0x0e9d,	// (0x00044db3) input_find_pane

0x5a49,	// (0x0004995f) input_find_pane_g1_ParamLimits

0x5a49,	// (0x0004995f) input_find_pane_g1

0x5a55,	// (0x0004996b) input_find_pane_t1_ParamLimits

0x5a55,	// (0x0004996b) input_find_pane_t1

0x5a6a,	// (0x00049980) input_find_pane_t2_ParamLimits

0x5a6a,	// (0x00049980) input_find_pane_t2

0x0001,

0xf677,	// (0x0005358d) input_find_pane_t_ParamLimits

0xf677,	// (0x0005358d) input_find_pane_t

0x0ea6,	// (0x00044dbc) input_focus_pane_cp5_ParamLimits

0x0ea6,	// (0x00044dbc) input_focus_pane_cp5

0x0eb9,	// (0x00044dcf) bg_popup_window_pane_cp2_ParamLimits

0x0eb9,	// (0x00044dcf) bg_popup_window_pane_cp2

0x0ec6,	// (0x00044ddc) listscroll_menu_pane_ParamLimits

0x0ec6,	// (0x00044ddc) listscroll_menu_pane

0x6d75,	// (0x0004ac8b) popup_submenu_window_ParamLimits

0x6d75,	// (0x0004ac8b) popup_submenu_window

0x0ed2,	// (0x00044de8) find_popup_pane_g1

0x6d9d,	// (0x0004acb3) input_popup_find_pane_cp

0x0eda,	// (0x00044df0) input_focus_pane_cp4_ParamLimits

0x0eda,	// (0x00044df0) input_focus_pane_cp4

0x0ee8,	// (0x00044dfe) input_popup_find_pane_t1_ParamLimits

0x0ee8,	// (0x00044dfe) input_popup_find_pane_t1

0x09eb,	// (0x00044901) bg_popup_sub_pane_cp

0x0f16,	// (0x00044e2c) listscroll_popup_sub_pane

0x0f1e,	// (0x00044e34) list_submenu_pane_ParamLimits

0x0f1e,	// (0x00044e34) list_submenu_pane

0x0f2f,	// (0x00044e45) scroll_pane_cp4

0x6db5,	// (0x0004accb) list_single_popup_submenu_pane_ParamLimits

0x6db5,	// (0x0004accb) list_single_popup_submenu_pane

0x22d4,	// (0x000461ea) list_single_popup_submenu_pane_g1

0x6dc9,	// (0x0004acdf) list_single_popup_submenu_pane_t1_ParamLimits

0x6dc9,	// (0x0004acdf) list_single_popup_submenu_pane_t1

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp1_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp1

0x0f37,	// (0x00044e4d) tabs_2_active_pane_g1

0x6dde,	// (0x0004acf4) tabs_2_active_pane_t1

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp1_ParamLimits

0x0a47,	// (0x0004495d) bg_passive_tab_pane_cp1

0x0f37,	// (0x00044e4d) tabs_2_passive_pane_g1

0x6dde,	// (0x0004acf4) tabs_2_passive_pane_t1

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp4

0x6dfe,	// (0x0004ad14) tabs_2_long_active_pane_t1

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp4

0x820b,	// (0x0004c121) list_single_midp_graphic_pane_g4_ParamLimits

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp5

0x6e1d,	// (0x0004ad33) tabs_3_long_active_pane_t1

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp5

0x820b,	// (0x0004c121) list_single_midp_graphic_pane_g4

0x0a47,	// (0x0004495d) bg_popup_window_pane_cp13_ParamLimits

0x0a47,	// (0x0004495d) bg_popup_window_pane_cp13

0x0f4b,	// (0x00044e61) listscroll_popup_fast_pane_ParamLimits

0x0f4b,	// (0x00044e61) listscroll_popup_fast_pane

0x0f57,	// (0x00044e6d) grid_popup_fast_pane_ParamLimits

0x0f57,	// (0x00044e6d) grid_popup_fast_pane

0x0f69,	// (0x00044e7f) scroll_pane_cp9_ParamLimits

0x0f69,	// (0x00044e7f) scroll_pane_cp9

0xc893,	// (0x000507a9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc893,	// (0x000507a9) list_single_graphic_hl_pane_t1_cp2

0x0f7c,	// (0x00044e92) input_focus_pane_cp20_ParamLimits

0x0f7c,	// (0x00044e92) input_focus_pane_cp20

0x0f8a,	// (0x00044ea0) query_popup_data_pane_t1_ParamLimits

0x0f8a,	// (0x00044ea0) query_popup_data_pane_t1

0x0f9d,	// (0x00044eb3) query_popup_data_pane_t2_ParamLimits

0x0f9d,	// (0x00044eb3) query_popup_data_pane_t2

0x0fe3,	// (0x00044ef9) query_popup_data_pane_t3_ParamLimits

0x0fe3,	// (0x00044ef9) query_popup_data_pane_t3

0x1024,	// (0x00044f3a) query_popup_data_pane_t4_ParamLimits

0x1024,	// (0x00044f3a) query_popup_data_pane_t4

0x1060,	// (0x00044f76) query_popup_data_pane_t5_ParamLimits

0x1060,	// (0x00044f76) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00053592) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00053592) query_popup_data_pane_t

0x0e55,	// (0x00044d6b) bg_set_opt_pane_g1

0x0e5d,	// (0x00044d73) bg_set_opt_pane_g2

0x0e65,	// (0x00044d7b) bg_set_opt_pane_g3

0x0e6d,	// (0x00044d83) bg_set_opt_pane_g4

0x0e75,	// (0x00044d8b) bg_set_opt_pane_g5

0x0e7d,	// (0x00044d93) bg_set_opt_pane_g6

0x0e85,	// (0x00044d9b) bg_set_opt_pane_g7

0x0e8d,	// (0x00044da3) bg_set_opt_pane_g8

0x0e95,	// (0x00044dab) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x0005359d) bg_set_opt_pane_g

0x733a,	// (0x0004b250) control_top_pane_stacon_ParamLimits

0x733a,	// (0x0004b250) control_top_pane_stacon

0x738d,	// (0x0004b2a3) signal_pane_stacon_ParamLimits

0x738d,	// (0x0004b2a3) signal_pane_stacon

0x13ec,	// (0x00045302) stacon_top_pane_g1_ParamLimits

0x13ec,	// (0x00045302) stacon_top_pane_g1

0x73b2,	// (0x0004b2c8) title_pane_stacon_ParamLimits

0x73b2,	// (0x0004b2c8) title_pane_stacon

0x73dc,	// (0x0004b2f2) uni_indicator_pane_stacon_ParamLimits

0x73dc,	// (0x0004b2f2) uni_indicator_pane_stacon

0x73f1,	// (0x0004b307) battery_pane_stacon_ParamLimits

0x73f1,	// (0x0004b307) battery_pane_stacon

0x7435,	// (0x0004b34b) control_bottom_pane_stacon_ParamLimits

0x7435,	// (0x0004b34b) control_bottom_pane_stacon

0x7458,	// (0x0004b36e) navi_pane_stacon_ParamLimits

0x7458,	// (0x0004b36e) navi_pane_stacon

0x140e,	// (0x00045324) stacon_bottom_pane_g1_ParamLimits

0x140e,	// (0x00045324) stacon_bottom_pane_g1

0x6e49,	// (0x0004ad5f) aid_levels_signal_lsc_ParamLimits

0x6e49,	// (0x0004ad5f) aid_levels_signal_lsc

0x6e5f,	// (0x0004ad75) signal_pane_stacon_g1_ParamLimits

0x6e5f,	// (0x0004ad75) signal_pane_stacon_g1

0x6e73,	// (0x0004ad89) signal_pane_stacon_g2_ParamLimits

0x6e73,	// (0x0004ad89) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x000535b0) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x000535b0) signal_pane_stacon_g

0x6ea8,	// (0x0004adbe) title_pane_stacon_t1_ParamLimits

0x6ea8,	// (0x0004adbe) title_pane_stacon_t1

0x10b8,	// (0x00044fce) uni_indicator_pane_stacon_g1

0x10c2,	// (0x00044fd8) uni_indicator_pane_stacon_g2

0x10a4,	// (0x00044fba) uni_indicator_pane_stacon_g3

0x10ae,	// (0x00044fc4) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x000535bc) uni_indicator_pane_stacon_g

0x6ecd,	// (0x0004ade3) control_top_pane_stacon_g1

0x6ed5,	// (0x0004adeb) control_top_pane_stacon_t1_ParamLimits

0x6ed5,	// (0x0004adeb) control_top_pane_stacon_t1

0x6f0c,	// (0x0004ae22) aid_levels_battery_lsc_ParamLimits

0x6f0c,	// (0x0004ae22) aid_levels_battery_lsc

0x6f23,	// (0x0004ae39) battery_pane_stacon_g1_ParamLimits

0x6f23,	// (0x0004ae39) battery_pane_stacon_g1

0x6f36,	// (0x0004ae4c) battery_pane_stacon_g2_ParamLimits

0x6f36,	// (0x0004ae4c) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x000535c5) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x000535c5) battery_pane_stacon_g

0x6f74,	// (0x0004ae8a) navi_icon_pane_stacon

0x6f88,	// (0x0004ae9e) navi_navi_pane_stacon

0x6f74,	// (0x0004ae8a) navi_text_pane_stacon

0x6ecd,	// (0x0004ade3) control_bottom_pane_stacon_g1

0x6f9c,	// (0x0004aeb2) control_bottom_pane_stacon_t1_ParamLimits

0x6f9c,	// (0x0004aeb2) control_bottom_pane_stacon_t1

0x6fd3,	// (0x0004aee9) grid_app_pane_ParamLimits

0x6fd3,	// (0x0004aee9) grid_app_pane

0x6ff5,	// (0x0004af0b) scroll_pane_cp15_ParamLimits

0x6ff5,	// (0x0004af0b) scroll_pane_cp15

0x7008,	// (0x0004af1e) cell_app_pane_ParamLimits

0x7008,	// (0x0004af1e) cell_app_pane

0x7030,	// (0x0004af46) cell_app_pane_g1_ParamLimits

0x7030,	// (0x0004af46) cell_app_pane_g1

0x10e6,	// (0x00044ffc) cell_app_pane_g2_ParamLimits

0x10e6,	// (0x00044ffc) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x000535ca) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x000535ca) cell_app_pane_g

0x7054,	// (0x0004af6a) cell_app_pane_t1_ParamLimits

0x7054,	// (0x0004af6a) cell_app_pane_t1

0x10f2,	// (0x00045008) grid_highlight_pane_ParamLimits

0x10f2,	// (0x00045008) grid_highlight_pane

0x0e55,	// (0x00044d6b) cell_highlight_pane_g1

0x0e5d,	// (0x00044d73) cell_highlight_pane_g2

0x0e65,	// (0x00044d7b) cell_highlight_pane_g3

0x0e6d,	// (0x00044d83) cell_highlight_pane_g4

0x0e75,	// (0x00044d8b) cell_highlight_pane_g5

0x0e7d,	// (0x00044d93) cell_highlight_pane_g6

0x0e85,	// (0x00044d9b) cell_highlight_pane_g7

0x0e8d,	// (0x00044da3) cell_highlight_pane_g8

0x0e95,	// (0x00044dab) cell_highlight_pane_g9

0x09e1,	// (0x000448f7) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00053578) cell_highlight_pane_g

0x1103,	// (0x00045019) bg_scroll_pane

0x707e,	// (0x0004af94) scroll_handle_pane

0x114a,	// (0x00045060) scroll_bg_pane_g1

0x115f,	// (0x00045075) scroll_bg_pane_g2

0x1177,	// (0x0004508d) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x000535cf) scroll_bg_pane_g

0x70a7,	// (0x0004afbd) scroll_handle_focus_pane_ParamLimits

0x70a7,	// (0x0004afbd) scroll_handle_focus_pane

0x114a,	// (0x00045060) scroll_handle_pane_g1

0x118c,	// (0x000450a2) scroll_handle_pane_g2

0x1177,	// (0x0004508d) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x000535d6) scroll_handle_pane_g

0x0eda,	// (0x00044df0) bg_popup_sub_pane_cp21_ParamLimits

0x0eda,	// (0x00044df0) bg_popup_sub_pane_cp21

0x70b4,	// (0x0004afca) popup_fep_japan_predictive_window_t1_ParamLimits

0x70b4,	// (0x0004afca) popup_fep_japan_predictive_window_t1

0x70ce,	// (0x0004afe4) popup_fep_japan_predictive_window_t2_ParamLimits

0x70ce,	// (0x0004afe4) popup_fep_japan_predictive_window_t2

0x7101,	// (0x0004b017) popup_fep_japan_predictive_window_t3_ParamLimits

0x7101,	// (0x0004b017) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x000535dd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x000535dd) popup_fep_japan_predictive_window_t

0x09eb,	// (0x00044901) bg_popup_sub_pane_cp23

0x2bdd,	// (0x00046af3) listscroll_japin_cand_pane

0x11a0,	// (0x000450b6) popup_fep_japan_candidate_window_t1

0x11ae,	// (0x000450c4) candidate_pane_ParamLimits

0x11ae,	// (0x000450c4) candidate_pane

0x7138,	// (0x0004b04e) scroll_pane_cp30

0x11c0,	// (0x000450d6) list_single_popup_jap_candidate_pane_ParamLimits

0x11c0,	// (0x000450d6) list_single_popup_jap_candidate_pane

0x09eb,	// (0x00044901) list_highlight_pane_cp30

0x11d5,	// (0x000450eb) list_single_popup_jap_candidate_pane_t1

0x11e4,	// (0x000450fa) level_1_signal

0x11f1,	// (0x00045107) level_2_signal

0x11fe,	// (0x00045114) level_3_signal

0x120b,	// (0x00045121) level_4_signal

0x1218,	// (0x0004512e) level_5_signal

0x1225,	// (0x0004513b) level_6_signal

0x1232,	// (0x00045148) level_7_signal

0x11e4,	// (0x000450fa) level_1_battery

0x11f1,	// (0x00045107) level_2_battery

0x11fe,	// (0x00045114) level_3_battery

0x120b,	// (0x00045121) level_4_battery

0x1218,	// (0x0004512e) level_5_battery

0x1225,	// (0x0004513b) level_6_battery

0x1232,	// (0x00045148) level_7_battery

0x1257,	// (0x0004516d) list_menu_pane_ParamLimits

0x1257,	// (0x0004516d) list_menu_pane

0x126d,	// (0x00045183) scroll_pane_cp25_ParamLimits

0x126d,	// (0x00045183) scroll_pane_cp25

0x1286,	// (0x0004519c) list_double2_graphic_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double2_graphic_pane_cp2

0x1286,	// (0x0004519c) list_double2_large_graphic_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double2_large_graphic_pane_cp2

0x1286,	// (0x0004519c) list_double2_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double2_pane_cp2

0x1286,	// (0x0004519c) list_double_graphic_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double_graphic_pane_cp2

0x1286,	// (0x0004519c) list_double_large_graphic_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double_large_graphic_pane_cp2

0x1286,	// (0x0004519c) list_double_number_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double_number_pane_cp2

0x1286,	// (0x0004519c) list_double_pane_cp2_ParamLimits

0x1286,	// (0x0004519c) list_double_pane_cp2

0x7173,	// (0x0004b089) list_single_2graphic_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_2graphic_pane_cp2

0x7173,	// (0x0004b089) list_single_graphic_heading_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_graphic_heading_pane_cp2

0x7173,	// (0x0004b089) list_single_graphic_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_graphic_pane_cp2

0x7173,	// (0x0004b089) list_single_heading_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_heading_pane_cp2

0x1296,	// (0x000451ac) list_single_large_graphic_pane_cp2_ParamLimits

0x1296,	// (0x000451ac) list_single_large_graphic_pane_cp2

0x7173,	// (0x0004b089) list_single_number_heading_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_number_heading_pane_cp2

0x7173,	// (0x0004b089) list_single_number_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_number_pane_cp2

0x7189,	// (0x0004b09f) list_single_pane_cp2_ParamLimits

0x7189,	// (0x0004b09f) list_single_pane_cp2

0x12b0,	// (0x000451c6) bg_popup_sub_pane_cp22

0x7261,	// (0x0004b177) popup_side_volume_key_window_g1

0x7285,	// (0x0004b19b) popup_side_volume_key_window_t1

0x72a1,	// (0x0004b1b7) volume_small_pane_cp1

0x0a39,	// (0x0004494f) bg_popup_sub_pane_cp24_ParamLimits

0x0a39,	// (0x0004494f) bg_popup_sub_pane_cp24

0x12c6,	// (0x000451dc) fep_china_uni_candidate_pane_ParamLimits

0x12c6,	// (0x000451dc) fep_china_uni_candidate_pane

0x12da,	// (0x000451f0) fep_china_uni_entry_pane

0x12ea,	// (0x00045200) popup_fep_china_uni_window_g1

0x72a9,	// (0x0004b1bf) fep_china_uni_entry_pane_g1

0x72b1,	// (0x0004b1c7) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x0005360e) fep_china_uni_entry_pane_g

0x1306,	// (0x0004521c) fep_entry_item_pane

0x1310,	// (0x00045226) fep_candidate_item_pane

0x72b9,	// (0x0004b1cf) fep_china_uni_candidate_pane_g1

0x1318,	// (0x0004522e) fep_china_uni_candidate_pane_g2

0x1320,	// (0x00045236) fep_china_uni_candidate_pane_g3

0x72c1,	// (0x0004b1d7) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00053613) fep_china_uni_candidate_pane_g

0x09e1,	// (0x000448f7) fep_entry_item_pane_g1

0x1328,	// (0x0004523e) fep_entry_item_pane_t1_ParamLimits

0x1328,	// (0x0004523e) fep_entry_item_pane_t1

0x133e,	// (0x00045254) fep_candidate_item_pane_t1_ParamLimits

0x133e,	// (0x00045254) fep_candidate_item_pane_t1

0x1353,	// (0x00045269) fep_candidate_item_pane_t2_ParamLimits

0x1353,	// (0x00045269) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x0005361c) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x0005361c) fep_candidate_item_pane_t

0x0a47,	// (0x0004495d) list_highlight_pane_cp31_ParamLimits

0x0a47,	// (0x0004495d) list_highlight_pane_cp31

0x1365,	// (0x0004527b) level_1_signal_lsc

0x136e,	// (0x00045284) level_2_signal_lsc

0x1377,	// (0x0004528d) level_3_signal_lsc

0x1380,	// (0x00045296) level_4_signal_lsc

0x1389,	// (0x0004529f) level_5_signal_lsc

0x1392,	// (0x000452a8) level_6_signal_lsc

0x139b,	// (0x000452b1) level_7_signal_lsc

0x139b,	// (0x000452b1) level_1_battery_lsc

0x13a4,	// (0x000452ba) level_2_battery_lsc

0x13ad,	// (0x000452c3) level_3_battery_lsc

0x13b6,	// (0x000452cc) level_4_battery_lsc

0x13bf,	// (0x000452d5) level_5_battery_lsc

0x13c8,	// (0x000452de) level_6_battery_lsc

0x1365,	// (0x0004527b) level_7_battery_lsc

0x13d1,	// (0x000452e7) scroll_handle_focus_pane_g1

0x13da,	// (0x000452f0) scroll_handle_focus_pane_g2

0x13e3,	// (0x000452f9) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00053621) scroll_handle_focus_pane_g

0x5a7f,	// (0x00049995) list_single_2graphic_pane_g1_ParamLimits

0x5a7f,	// (0x00049995) list_single_2graphic_pane_g1

0x6ced,	// (0x0004ac03) list_single_2graphic_pane_g2_ParamLimits

0x6ced,	// (0x0004ac03) list_single_2graphic_pane_g2

0x6ccf,	// (0x0004abe5) list_single_2graphic_pane_g3_ParamLimits

0x6ccf,	// (0x0004abe5) list_single_2graphic_pane_g3

0x5a8b,	// (0x000499a1) list_single_2graphic_pane_g4_ParamLimits

0x5a8b,	// (0x000499a1) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00053628) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00053628) list_single_2graphic_pane_g

0x5a97,	// (0x000499ad) list_single_2graphic_pane_t1_ParamLimits

0x5a97,	// (0x000499ad) list_single_2graphic_pane_t1

0x72c9,	// (0x0004b1df) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x72c9,	// (0x0004b1df) list_double2_graphic_large_graphic_pane_g1

0x6d43,	// (0x0004ac59) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6d43,	// (0x0004ac59) list_double2_graphic_large_graphic_pane_g2

0x6d16,	// (0x0004ac2c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6d16,	// (0x0004ac2c) list_double2_graphic_large_graphic_pane_g3

0x72d9,	// (0x0004b1ef) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x72d9,	// (0x0004b1ef) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00053631) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00053631) list_double2_graphic_large_graphic_pane_g

0x5ac5,	// (0x000499db) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5ac5,	// (0x000499db) list_double2_graphic_large_graphic_pane_t1

0x5adb,	// (0x000499f1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5adb,	// (0x000499f1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x0005363a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x0005363a) list_double2_graphic_large_graphic_pane_t

0x74b7,	// (0x0004b3cd) popup_fast_swap_window_ParamLimits

0x74b7,	// (0x0004b3cd) popup_fast_swap_window

0x74d3,	// (0x0004b3e9) popup_side_volume_key_window

0x1499,	// (0x000453af) stacon_top_pane

0x14a3,	// (0x000453b9) status_pane_ParamLimits

0x14a3,	// (0x000453b9) status_pane

0x09d7,	// (0x000448ed) status_small_pane

0x09eb,	// (0x00044901) control_pane

0x09eb,	// (0x00044901) stacon_bottom_pane

0x0de0,	// (0x00044cf6) scroll_pane_cp121

0x0dd7,	// (0x00044ced) set_content_pane

0x72e5,	// (0x0004b1fb) bg_active_tab_pane_g1_cp1

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp1

0x72f7,	// (0x0004b20d) bg_active_tab_pane_g3_cp1

0x72e5,	// (0x0004b1fb) bg_passive_tab_pane_g1_cp1

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp1

0x72f7,	// (0x0004b20d) bg_passive_tab_pane_g3_cp1

0x7300,	// (0x0004b216) bg_active_tab_pane_g1_cp2

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp2

0x7309,	// (0x0004b21f) bg_active_tab_pane_g3_cp2

0x7300,	// (0x0004b216) bg_passive_tab_pane_g1_cp2

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp2

0x7309,	// (0x0004b21f) bg_passive_tab_pane_g3_cp2

0x7312,	// (0x0004b228) bg_active_tab_pane_g1_cp3

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp3

0x731b,	// (0x0004b231) bg_active_tab_pane_g3_cp3

0x7312,	// (0x0004b228) bg_passive_tab_pane_g1_cp3

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp3

0x731b,	// (0x0004b231) bg_passive_tab_pane_g3_cp3

0x7324,	// (0x0004b23a) bg_active_tab_pane_g1_cp4

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp4

0x732f,	// (0x0004b245) bg_active_tab_pane_g3_cp4

0x7324,	// (0x0004b23a) bg_passive_tab_pane_g1_cp4

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp4

0x732f,	// (0x0004b245) bg_passive_tab_pane_g3_cp4

0x747b,	// (0x0004b391) bg_active_tab_pane_g1_cp5

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp5

0x7484,	// (0x0004b39a) bg_active_tab_pane_g3_cp5

0x747b,	// (0x0004b391) bg_passive_tab_pane_g1_cp5

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp5

0x7484,	// (0x0004b39a) bg_passive_tab_pane_g3_cp5

0x748d,	// (0x0004b3a3) list_set_graphic_pane_ParamLimits

0x748d,	// (0x0004b3a3) list_set_graphic_pane

0x09eb,	// (0x00044901) bg_set_opt_pane_cp4

0x142a,	// (0x00045340) list_set_graphic_pane_g1_ParamLimits

0x142a,	// (0x00045340) list_set_graphic_pane_g1

0x1436,	// (0x0004534c) list_set_graphic_pane_g2_ParamLimits

0x1436,	// (0x0004534c) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x0005363f) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x0005363f) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x000539d7) volume_small_pane_cp_g

0x74ab,	// (0x0004b3c1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x74ab,	// (0x0004b3c1) list_double2_large_graphic_pane_g1_cp2

0x1458,	// (0x0004536e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1458,	// (0x0004536e) list_double2_large_graphic_pane_g2_cp2

0x1469,	// (0x0004537f) list_double2_large_graphic_pane_g3_cp2

0x1471,	// (0x00045387) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1471,	// (0x00045387) list_double2_large_graphic_pane_t1_cp2

0x1487,	// (0x0004539d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1487,	// (0x0004539d) list_double2_large_graphic_pane_t2_cp2

0xab45,	// (0x0004ea5b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab45,	// (0x0004ea5b) list_double_large_graphic_pane_g1_cp2

0xab56,	// (0x0004ea6c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab56,	// (0x0004ea6c) list_double_large_graphic_pane_g2_cp2

0x15bf,	// (0x000454d5) list_double_large_graphic_pane_g3_cp2

0xab67,	// (0x0004ea7d) list_double_large_graphic_pane_g4_cp

0xab6f,	// (0x0004ea85) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab6f,	// (0x0004ea85) list_double_large_graphic_pane_t1_cp2

0xab86,	// (0x0004ea9c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab86,	// (0x0004ea9c) list_double_large_graphic_pane_t2_cp2

0x14b1,	// (0x000453c7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14b1,	// (0x000453c7) list_double2_graphic_pane_g1_cp2

0x14bf,	// (0x000453d5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x14bf,	// (0x000453d5) list_double2_graphic_pane_g2_cp2

0x14d0,	// (0x000453e6) list_double2_graphic_pane_g3_cp2

0x14da,	// (0x000453f0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x14da,	// (0x000453f0) list_double2_graphic_pane_t1_cp2

0x14f0,	// (0x00045406) list_double2_graphic_pane_t2_cp2_ParamLimits

0x14f0,	// (0x00045406) list_double2_graphic_pane_t2_cp2

0x1502,	// (0x00045418) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1502,	// (0x00045418) list_single_number_heading_pane_g1_cp2

0x150e,	// (0x00045424) list_single_number_heading_pane_g2_cp2

0x1516,	// (0x0004542c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1516,	// (0x0004542c) list_single_number_heading_pane_t1_cp2

0x152c,	// (0x00045442) list_single_number_heading_pane_t2_cp2_ParamLimits

0x152c,	// (0x00045442) list_single_number_heading_pane_t2_cp2

0x153e,	// (0x00045454) list_single_number_heading_pane_t3_cp2_ParamLimits

0x153e,	// (0x00045454) list_single_number_heading_pane_t3_cp2

0x1502,	// (0x00045418) list_single_heading_pane_g1_cp2_ParamLimits

0x1502,	// (0x00045418) list_single_heading_pane_g1_cp2

0x150e,	// (0x00045424) list_single_heading_pane_g2_cp2

0x1516,	// (0x0004542c) list_single_heading_pane_t1_cp2_ParamLimits

0x1516,	// (0x0004542c) list_single_heading_pane_t1_cp2

0xa94f,	// (0x0004e865) list_single_heading_pane_t2_cp2_ParamLimits

0xa94f,	// (0x0004e865) list_single_heading_pane_t2_cp2

0xa897,	// (0x0004e7ad) list_double_graphic_pane_g1_cp2_ParamLimits

0xa897,	// (0x0004e7ad) list_double_graphic_pane_g1_cp2

0xa8a3,	// (0x0004e7b9) list_double_graphic_pane_g2_cp2_ParamLimits

0xa8a3,	// (0x0004e7b9) list_double_graphic_pane_g2_cp2

0xa8b2,	// (0x0004e7c8) list_double_graphic_pane_g3_cp2

0xa8ba,	// (0x0004e7d0) list_double_graphic_pane_t1_cp2_ParamLimits

0xa8ba,	// (0x0004e7d0) list_double_graphic_pane_t1_cp2

0xa8d0,	// (0x0004e7e6) list_double_graphic_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x0004e7e6) list_double_graphic_pane_t2_cp2

0x15b3,	// (0x000454c9) list_double_number_pane_g1_cp2_ParamLimits

0x15b3,	// (0x000454c9) list_double_number_pane_g1_cp2

0x15bf,	// (0x000454d5) list_double_number_pane_g2_cp2

0xa85b,	// (0x0004e771) list_double_number_pane_t1_cp2_ParamLimits

0xa85b,	// (0x0004e771) list_double_number_pane_t1_cp2

0xa86f,	// (0x0004e785) list_double_number_pane_t2_cp2_ParamLimits

0xa86f,	// (0x0004e785) list_double_number_pane_t2_cp2

0xa885,	// (0x0004e79b) list_double_number_pane_t3_cp2_ParamLimits

0xa885,	// (0x0004e79b) list_double_number_pane_t3_cp2

0xa744,	// (0x0004e65a) list_single_graphic_pane_g1_cp2_ParamLimits

0xa744,	// (0x0004e65a) list_single_graphic_pane_g1_cp2

0x1618,	// (0x0004552e) list_single_graphic_pane_g2_cp2_ParamLimits

0x1618,	// (0x0004552e) list_single_graphic_pane_g2_cp2

0x1624,	// (0x0004553a) list_single_graphic_pane_g3_cp2

0xa71a,	// (0x0004e630) list_single_graphic_pane_t1_cp2_ParamLimits

0xa71a,	// (0x0004e630) list_single_graphic_pane_t1_cp2

0x1618,	// (0x0004552e) list_single_number_pane_g1_cp2_ParamLimits

0x1618,	// (0x0004552e) list_single_number_pane_g1_cp2

0x1624,	// (0x0004553a) list_single_number_pane_g2_cp2

0xa71a,	// (0x0004e630) list_single_number_pane_t1_cp2_ParamLimits

0xa71a,	// (0x0004e630) list_single_number_pane_t1_cp2

0xa730,	// (0x0004e646) list_single_number_pane_t2_cp2_ParamLimits

0xa730,	// (0x0004e646) list_single_number_pane_t2_cp2

0x1458,	// (0x0004536e) list_double2_pane_g1_cp2_ParamLimits

0x1458,	// (0x0004536e) list_double2_pane_g1_cp2

0x1469,	// (0x0004537f) list_double2_pane_g2_cp2

0x158b,	// (0x000454a1) list_double2_pane_t1_cp2_ParamLimits

0x158b,	// (0x000454a1) list_double2_pane_t1_cp2

0x15a1,	// (0x000454b7) list_double2_pane_t2_cp2_ParamLimits

0x15a1,	// (0x000454b7) list_double2_pane_t2_cp2

0x15b3,	// (0x000454c9) list_double_pane_g1_cp2_ParamLimits

0x15b3,	// (0x000454c9) list_double_pane_g1_cp2

0x15bf,	// (0x000454d5) list_double_pane_g2_cp2

0x15c7,	// (0x000454dd) list_double_pane_t1_cp2_ParamLimits

0x15c7,	// (0x000454dd) list_double_pane_t1_cp2

0x15dd,	// (0x000454f3) list_double_pane_t2_cp2_ParamLimits

0x15dd,	// (0x000454f3) list_double_pane_t2_cp2

0x74ed,	// (0x0004b403) list_single_pane_cp2_g3

0x1618,	// (0x0004552e) list_single_pane_g1_cp2_ParamLimits

0x1618,	// (0x0004552e) list_single_pane_g1_cp2

0x1624,	// (0x0004553a) list_single_pane_g2_cp2

0x162c,	// (0x00045542) list_single_pane_t1_cp2_ParamLimits

0x162c,	// (0x00045542) list_single_pane_t1_cp2

0x74f5,	// (0x0004b40b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x74f5,	// (0x0004b40b) list_single_large_graphic_pane_g1_cp2

0x1644,	// (0x0004555a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1644,	// (0x0004555a) list_single_large_graphic_pane_g2_cp2

0x1650,	// (0x00045566) list_single_large_graphic_pane_g3_cp2

0x7501,	// (0x0004b417) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7501,	// (0x0004b417) list_single_large_graphic_pane_g4_cp1

0x1658,	// (0x0004556e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1658,	// (0x0004556e) list_single_large_graphic_pane_t1_cp2

0xa6e6,	// (0x0004e5fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6e6,	// (0x0004e5fc) list_single_graphic_heading_pane_g1_cp2

0xa6b3,	// (0x0004e5c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa6b3,	// (0x0004e5c9) list_single_graphic_heading_pane_g4_cp2

0x1624,	// (0x0004553a) list_single_graphic_heading_pane_g5_cp2

0xa6f2,	// (0x0004e608) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6f2,	// (0x0004e608) list_single_graphic_heading_pane_t1_cp2

0xa708,	// (0x0004e61e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa708,	// (0x0004e61e) list_single_graphic_heading_pane_t2_cp2

0xa6a7,	// (0x0004e5bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa6a7,	// (0x0004e5bd) list_single_2graphic_pane_g1_cp2

0xa6b3,	// (0x0004e5c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa6b3,	// (0x0004e5c9) list_single_2graphic_pane_g2_cp2

0x1624,	// (0x0004553a) list_single_2graphic_pane_g3_cp2

0xa6c4,	// (0x0004e5da) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa6c4,	// (0x0004e5da) list_single_2graphic_pane_g4_cp2

0xa6d0,	// (0x0004e5e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa6d0,	// (0x0004e5e6) list_single_2graphic_pane_t1_cp2

0x09e1,	// (0x000448f7) list_highlight_pane_g10_cp1

0xa28f,	// (0x0004e1a5) list_highlight_pane_g1_cp1

0xa297,	// (0x0004e1ad) list_highlight_pane_g2_cp1

0xa29f,	// (0x0004e1b5) list_highlight_pane_g3_cp1

0xa2a7,	// (0x0004e1bd) list_highlight_pane_g4_cp1

0xa2af,	// (0x0004e1c5) list_highlight_pane_g5_cp1

0xa2b7,	// (0x0004e1cd) list_highlight_pane_g6_cp1

0xa2bf,	// (0x0004e1d5) list_highlight_pane_g7_cp1

0xa2c7,	// (0x0004e1dd) list_highlight_pane_g8_cp1

0xa2cf,	// (0x0004e1e5) list_highlight_pane_g9_cp1

0xa1b7,	// (0x0004e0cd) form_field_slider_pane_t3

0xa1c5,	// (0x0004e0db) form_field_slider_pane_t4

0xa1d3,	// (0x0004e0e9) slider_form_pane_ParamLimits

0xa1d3,	// (0x0004e0e9) slider_form_pane

0x09eb,	// (0x00044901) control_abbreviations

0x09eb,	// (0x00044901) control_conventions

0x09eb,	// (0x00044901) control_definitions

0x09eb,	// (0x00044901) format_table_attribute

0xa999,	// (0x0004e8af) bg_popup_preview_window_pane_g9

0x09eb,	// (0x00044901) format_table_data2

0x09eb,	// (0x00044901) format_table_data3

0x09eb,	// (0x00044901) format_table_data_example

0x0008,

0x09eb,	// (0x00044901) intro_purpose

0xf8c5,	// (0x000537db) bg_popup_preview_window_pane_g

0x09eb,	// (0x00044901) texts_category

0x09eb,	// (0x00044901) texts_graphics

0x166e,	// (0x00045584) text_digital

0x167d,	// (0x00045593) text_primary

0x168c,	// (0x000455a2) text_primary_small

0x169b,	// (0x000455b1) text_secondary

0x16aa,	// (0x000455c0) text_title

0xb06e,	// (0x0004ef84) bg_passive_tab_pane_g1_cp3_srt

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp3_srt

0xb077,	// (0x0004ef8d) bg_passive_tab_pane_g3_cp3_srt

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp3_srt

0xb080,	// (0x0004ef96) tabs_4_active_pane_srt_g1

0xb088,	// (0x0004ef9e) tabs_4_active_pane_srt_t1_ParamLimits

0xb088,	// (0x0004ef9e) tabs_4_active_pane_srt_t1

0xb06e,	// (0x0004ef84) bg_active_tab_pane_g1_cp3_copy1

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp3_copy1

0xb077,	// (0x0004ef8d) bg_active_tab_pane_g3_cp3_copy1

0x0a47,	// (0x0004495d) tabs_2_long_active_pane_srt_ParamLimits

0x0a47,	// (0x0004495d) tabs_2_long_active_pane_srt

0x0a47,	// (0x0004495d) tabs_2_long_passive_pane_srt_ParamLimits

0x0a47,	// (0x0004495d) tabs_2_long_passive_pane_srt

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp4_srt

0xadba,	// (0x0004ecd0) bg_passive_tab_pane_g1_cp4_srt

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp4_srt

0xadc3,	// (0x0004ecd9) bg_passive_tab_pane_g3_cp4_srt

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp4_srt_ParamLimits

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp4_srt

0xadcc,	// (0x0004ece2) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadcc,	// (0x0004ece2) tabs_2_long_active_pane_srt_t1

0xadba,	// (0x0004ecd0) bg_active_tab_pane_g1_cp4_srt

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp4_srt

0xadc3,	// (0x0004ecd9) bg_active_tab_pane_g3_cp4_srt

0x0a39,	// (0x0004494f) tabs_3_long_active_pane_srt_ParamLimits

0x0a39,	// (0x0004494f) tabs_3_long_active_pane_srt

0x0a39,	// (0x0004494f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a39,	// (0x0004494f) tabs_3_long_passive_pane_cp_srt

0x0a39,	// (0x0004494f) tabs_3_long_passive_pane_srt_ParamLimits

0x0a39,	// (0x0004494f) tabs_3_long_passive_pane_srt

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp5_srt

0x747b,	// (0x0004b391) bg_passive_tab_pane_g1_cp5_srt

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp5_srt

0x7484,	// (0x0004b39a) bg_passive_tab_pane_g3_cp5_srt

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp5_srt_ParamLimits

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp5_srt

0xada8,	// (0x0004ecbe) tabs_3_long_active_pane_srt_t1_ParamLimits

0xada8,	// (0x0004ecbe) tabs_3_long_active_pane_srt_t1

0x747b,	// (0x0004b391) bg_active_tab_pane_g1_cp5_srt

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp5_srt

0x7484,	// (0x0004b39a) bg_active_tab_pane_g3_cp5_srt

0xad9a,	// (0x0004ecb0) navi_text_pane_srt_t1

0xad92,	// (0x0004eca8) navi_icon_pane_srt_g1

0x1795,	// (0x000456ab) midp_editing_number_pane_srt

0x16b9,	// (0x000455cf) midp_ticker_pane_srt

0x179d,	// (0x000456b3) midp_ticker_pane_srt_g1

0x17a5,	// (0x000456bb) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x0005365e) midp_ticker_pane_srt_g

0x17ad,	// (0x000456c3) midp_ticker_pane_srt_t1

0xad83,	// (0x0004ec99) midp_editing_number_pane_t1_copy1

0x751b,	// (0x0004b431) listscroll_midp_pane

0x751b,	// (0x0004b431) midp_form_pane

0x758d,	// (0x0004b4a3) midp_info_popup_window_ParamLimits

0x758d,	// (0x0004b4a3) midp_info_popup_window

0x0eda,	// (0x00044df0) bg_popup_sub_pane_cp50_ParamLimits

0x0eda,	// (0x00044df0) bg_popup_sub_pane_cp50

0x9ec3,	// (0x0004ddd9) listscroll_midp_info_pane_ParamLimits

0x9ec3,	// (0x0004ddd9) listscroll_midp_info_pane

0x9ea3,	// (0x0004ddb9) listscroll_form_midp_pane_ParamLimits

0x9ea3,	// (0x0004ddb9) listscroll_form_midp_pane

0x9eaf,	// (0x0004ddc5) scroll_bar_cp050

0x9e83,	// (0x0004dd99) list_midp_pane

0xbad9,	// (0x0004f9ef) signal_pane_g2_cp

0x9dbd,	// (0x0004dcd3) listscroll_midp_info_pane_t1_ParamLimits

0x9dbd,	// (0x0004dcd3) listscroll_midp_info_pane_t1

0x9dd5,	// (0x0004dceb) listscroll_midp_info_pane_t2_ParamLimits

0x9dd5,	// (0x0004dceb) listscroll_midp_info_pane_t2

0x9e13,	// (0x0004dd29) listscroll_midp_info_pane_t3_ParamLimits

0x9e13,	// (0x0004dd29) listscroll_midp_info_pane_t3

0x9e4d,	// (0x0004dd63) listscroll_midp_info_pane_t4_ParamLimits

0x9e4d,	// (0x0004dd63) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00053716) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00053716) listscroll_midp_info_pane_t

0x0f2f,	// (0x00044e45) scroll_pane_cp21

0x9d5d,	// (0x0004dc73) form_midp_field_choice_group_pane

0x9d66,	// (0x0004dc7c) form_midp_field_text_pane

0x9da3,	// (0x0004dcb9) form_midp_field_time_pane

0x9dab,	// (0x0004dcc1) form_midp_gauge_slider_pane

0x9db4,	// (0x0004dcca) form_midp_gauge_wait_pane

0x09eb,	// (0x00044901) form_midp_image_pane

0x5c2a,	// (0x00049b40) list_single_midp_pane_ParamLimits

0x5c2a,	// (0x00049b40) list_single_midp_pane

0x9d12,	// (0x0004dc28) form_midp_field_text_pane_t1

0x9adc,	// (0x0004d9f2) input_focus_pane_cp050

0x9d4c,	// (0x0004dc62) list_midp_form_text_pane

0x9ce1,	// (0x0004dbf7) form_midp_field_choice_group_pane_t1

0x9cef,	// (0x0004dc05) input_focus_pane_cp051

0x9d03,	// (0x0004dc19) list_midp_choice_pane

0x09eb,	// (0x00044901) status_idle_pane

0x9cc5,	// (0x0004dbdb) form_midp_field_time_pane_t1

0x09e1,	// (0x000448f7) wait_anim_pane_g2_copy1

0x9cd3,	// (0x0004dbe9) form_midp_field_time_pane_t2

0x0001,

0x1719,	// (0x0004562f) aid_navinavi_width_2_pane

0xf7fb,	// (0x00053711) form_midp_field_time_pane_t

0x09eb,	// (0x00044901) input_focus_pane_cp052

0x09eb,	// (0x00044901) bg_input_focus_pane_cp040

0x9c85,	// (0x0004db9b) form_midp_gauge_slider_pane_t1

0x9c93,	// (0x0004dba9) form_midp_gauge_slider_pane_t2

0x9ca1,	// (0x0004dbb7) form_midp_gauge_slider_pane_t3

0x9caf,	// (0x0004dbc5) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00053708) form_midp_gauge_slider_pane_t

0x9cbd,	// (0x0004dbd3) form_midp_slider_pane

0x0a47,	// (0x0004495d) bg_input_focus_pane_cp041_ParamLimits

0x0a47,	// (0x0004495d) bg_input_focus_pane_cp041

0x9c52,	// (0x0004db68) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c52,	// (0x0004db68) form_midp_gauge_wait_pane_t1

0x9c64,	// (0x0004db7a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c64,	// (0x0004db7a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00053703) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00053703) form_midp_gauge_wait_pane_t

0x9c76,	// (0x0004db8c) form_midp_wait_pane_ParamLimits

0x9c76,	// (0x0004db8c) form_midp_wait_pane

0x9c1c,	// (0x0004db32) form_midp_image_pane_g1

0x9c25,	// (0x0004db3b) form_midp_image_pane_t1

0x9c34,	// (0x0004db4a) form_midp_image_pane_t2

0x9c43,	// (0x0004db59) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000536fc) form_midp_image_pane_t

0x9c13,	// (0x0004db29) list_single_midp_pane_g1

0x5c1b,	// (0x00049b31) list_single_midp_pane_t1

0x9bea,	// (0x0004db00) list_midp_form_item_pane_ParamLimits

0x9bea,	// (0x0004db00) list_midp_form_item_pane

0x16c1,	// (0x000455d7) list_midp_form_item_pane_t1

0x16d0,	// (0x000455e6) midp_ticker_pane_g1

0x16dc,	// (0x000455f2) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00053644) midp_ticker_pane_g

0x16e8,	// (0x000455fe) midp_ticker_pane_t1

0xafd0,	// (0x0004eee6) midp_editing_number_pane_t1

0xafae,	// (0x0004eec4) midp_editing_number_pane

0xafbd,	// (0x0004eed3) midp_ticker_pane

0xad73,	// (0x0004ec89) ai_message_heading_pane

0x09eb,	// (0x00044901) bg_popup_window_pane_cp14

0xad7b,	// (0x0004ec91) listscroll_ai_message_pane

0xacfd,	// (0x0004ec13) ai_message_heading_pane_g1_ParamLimits

0xacfd,	// (0x0004ec13) ai_message_heading_pane_g1

0xad09,	// (0x0004ec1f) ai_message_heading_pane_g2_ParamLimits

0xad09,	// (0x0004ec1f) ai_message_heading_pane_g2

0xad15,	// (0x0004ec2b) ai_message_heading_pane_g3_ParamLimits

0xad15,	// (0x0004ec2b) ai_message_heading_pane_g3

0xad21,	// (0x0004ec37) ai_message_heading_pane_g4_ParamLimits

0xad21,	// (0x0004ec37) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0005383d) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0005383d) ai_message_heading_pane_g

0xad2d,	// (0x0004ec43) ai_message_heading_pane_t1_ParamLimits

0xad2d,	// (0x0004ec43) ai_message_heading_pane_t1

0xad47,	// (0x0004ec5d) ai_message_heading_pane_t2_ParamLimits

0xad47,	// (0x0004ec5d) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00053846) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00053846) ai_message_heading_pane_t

0xad59,	// (0x0004ec6f) bg_popup_heading_pane_cp1_ParamLimits

0xad59,	// (0x0004ec6f) bg_popup_heading_pane_cp1

0xaceb,	// (0x0004ec01) list_ai_message_pane_ParamLimits

0xaceb,	// (0x0004ec01) list_ai_message_pane

0x0f2f,	// (0x00044e45) scroll_pane_cp10

0xac87,	// (0x0004eb9d) list_ai_message_pane_g1

0xac8f,	// (0x0004eba5) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0005381a) list_ai_message_pane_g

0xac97,	// (0x0004ebad) list_ai_message_pane_t1_ParamLimits

0xac97,	// (0x0004ebad) list_ai_message_pane_t1

0xacac,	// (0x0004ebc2) list_ai_message_pane_t2_ParamLimits

0xacac,	// (0x0004ebc2) list_ai_message_pane_t2

0xacc1,	// (0x0004ebd7) list_ai_message_pane_t3_ParamLimits

0xacc1,	// (0x0004ebd7) list_ai_message_pane_t3

0xacd6,	// (0x0004ebec) list_ai_message_pane_t4_ParamLimits

0xacd6,	// (0x0004ebec) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0005381f) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0005381f) list_ai_message_pane_t

0xac72,	// (0x0004eb88) cell_ai_soft_ind_pane_ParamLimits

0xac72,	// (0x0004eb88) cell_ai_soft_ind_pane

0x16fa,	// (0x00045610) cell_ai_soft_ind_pane_g1_ParamLimits

0x16fa,	// (0x00045610) cell_ai_soft_ind_pane_g1

0x09eb,	// (0x00044901) grid_highlight_cp1

0x1707,	// (0x0004561d) text_secondary_cp56_ParamLimits

0x1707,	// (0x0004561d) text_secondary_cp56

0xac47,	// (0x0004eb5d) example_general_pane_ParamLimits

0xac47,	// (0x0004eb5d) example_general_pane

0xac53,	// (0x0004eb69) example_parent_pane_g1_ParamLimits

0xac53,	// (0x0004eb69) example_parent_pane_g1

0xac5f,	// (0x0004eb75) example_parent_pane_t1_ParamLimits

0xac5f,	// (0x0004eb75) example_parent_pane_t1

0x7c61,	// (0x0004bb77) popup_preview_text_window_ParamLimits

0x7c61,	// (0x0004bb77) popup_preview_text_window

0x1610,	// (0x00045526) list_single_pane_cp2_g4

0x0c19,	// (0x00044b2f) bg_popup_preview_window_pane_ParamLimits

0x0c19,	// (0x00044b2f) bg_popup_preview_window_pane

0xa9a1,	// (0x0004e8b7) popup_preview_text_window_t1_ParamLimits

0xa9a1,	// (0x0004e8b7) popup_preview_text_window_t1

0xa9bf,	// (0x0004e8d5) popup_preview_text_window_t2_ParamLimits

0xa9bf,	// (0x0004e8d5) popup_preview_text_window_t2

0xaa08,	// (0x0004e91e) popup_preview_text_window_t3_ParamLimits

0xaa08,	// (0x0004e91e) popup_preview_text_window_t3

0xaa4d,	// (0x0004e963) popup_preview_text_window_t4_ParamLimits

0xaa4d,	// (0x0004e963) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000537ee) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000537ee) popup_preview_text_window_t

0xaacb,	// (0x0004e9e1) scroll_pane_cp11

0x9a50,	// (0x0004d966) bg_popup_preview_window_pane_g1

0xa961,	// (0x0004e877) bg_popup_preview_window_pane_g2

0xa969,	// (0x0004e87f) bg_popup_preview_window_pane_g3

0xa971,	// (0x0004e887) bg_popup_preview_window_pane_g4

0xa979,	// (0x0004e88f) bg_popup_preview_window_pane_g5

0xa981,	// (0x0004e897) bg_popup_preview_window_pane_g6

0xa989,	// (0x0004e89f) bg_popup_preview_window_pane_g7

0xa991,	// (0x0004e8a7) bg_popup_preview_window_pane_g8

0x630b,	// (0x0004a221) aid_popup_width_pane

0x7c3f,	// (0x0004bb55) popup_midp_note_alarm_window_ParamLimits

0x7c3f,	// (0x0004bb55) popup_midp_note_alarm_window

0x0df1,	// (0x00044d07) data_form_pane_ParamLimits

0x58e4,	// (0x000497fa) form_field_data_pane_g1

0x58ee,	// (0x00049804) form_field_data_pane_t1_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_ParamLimits

0x5906,	// (0x0004981c) data_form_wide_pane_ParamLimits

0x5917,	// (0x0004982d) form_field_data_wide_pane_g1

0x5923,	// (0x00049839) form_field_data_wide_pane_t1_ParamLimits

0x0cf1,	// (0x00044c07) input_focus_pane_cp6_ParamLimits

0x6da7,	// (0x0004acbd) input_popup_find_pane_g1_ParamLimits

0x6da7,	// (0x0004acbd) input_popup_find_pane_g1

0x6f47,	// (0x0004ae5d) aid_navi_side_left_pane

0x6f5c,	// (0x0004ae72) aid_navi_side_right_pane

0xa38a,	// (0x0004e2a0) bg_popup_window_pane_cp30_ParamLimits

0xa38a,	// (0x0004e2a0) bg_popup_window_pane_cp30

0xa404,	// (0x0004e31a) popup_midp_note_alarm_window_g1_ParamLimits

0xa404,	// (0x0004e31a) popup_midp_note_alarm_window_g1

0xa434,	// (0x0004e34a) popup_midp_note_alarm_window_t1_ParamLimits

0xa434,	// (0x0004e34a) popup_midp_note_alarm_window_t1

0xa4d5,	// (0x0004e3eb) popup_midp_note_alarm_window_t2_ParamLimits

0xa4d5,	// (0x0004e3eb) popup_midp_note_alarm_window_t2

0xa583,	// (0x0004e499) popup_midp_note_alarm_window_t3_ParamLimits

0xa583,	// (0x0004e499) popup_midp_note_alarm_window_t3

0xa5ab,	// (0x0004e4c1) popup_midp_note_alarm_window_t4_ParamLimits

0xa5ab,	// (0x0004e4c1) popup_midp_note_alarm_window_t4

0xa5cb,	// (0x0004e4e1) popup_midp_note_alarm_window_t5_ParamLimits

0xa5cb,	// (0x0004e4e1) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0005378b) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0005378b) popup_midp_note_alarm_window_t

0xa677,	// (0x0004e58d) wait_bar_pane_cp1_ParamLimits

0xa677,	// (0x0004e58d) wait_bar_pane_cp1

0x09eb,	// (0x00044901) wait_anim_pane_copy1

0x09eb,	// (0x00044901) wait_border_pane_copy1

0xa080,	// (0x0004df96) wait_border_pane_g1_copy1

0x593d,	// (0x00049853) form_field_popup_pane_g1

0x5945,	// (0x0004985b) form_field_popup_pane_t1_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_cp7_ParamLimits

0x0e2b,	// (0x00044d41) list_form_pane_ParamLimits

0x595d,	// (0x00049873) form_field_popup_wide_pane_g1

0x5965,	// (0x0004987b) form_field_popup_wide_pane_t1_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_cp8_ParamLimits

0x0e37,	// (0x00044d4d) list_form_wide_pane_ParamLimits

0xb10b,	// (0x0004f021) aid_size_cell_graphic_pane

0x59ef,	// (0x00049905) data_form_pane_t1_ParamLimits

0x5c6a,	// (0x00049b80) data_form_wide_pane_t1_ParamLimits

0x7f46,	// (0x0004be5c) bg_status_flat_pane

0x670a,	// (0x0004a620) title_pane_t1_ParamLimits

0x0a01,	// (0x00044917) title_pane_t2_ParamLimits

0x0a27,	// (0x0004493d) title_pane_t3_ParamLimits

0xf532,	// (0x00053448) title_pane_t_ParamLimits

0x11e4,	// (0x000450fa) level_1_signal_ParamLimits

0x11f1,	// (0x00045107) level_2_signal_ParamLimits

0x11fe,	// (0x00045114) level_3_signal_ParamLimits

0x120b,	// (0x00045121) level_4_signal_ParamLimits

0x1218,	// (0x0004512e) level_5_signal_ParamLimits

0x1225,	// (0x0004513b) level_6_signal_ParamLimits

0x1232,	// (0x00045148) level_7_signal_ParamLimits

0x11e4,	// (0x000450fa) level_1_battery_ParamLimits

0x11f1,	// (0x00045107) level_2_battery_ParamLimits

0x11fe,	// (0x00045114) level_3_battery_ParamLimits

0x120b,	// (0x00045121) level_4_battery_ParamLimits

0x1218,	// (0x0004512e) level_5_battery_ParamLimits

0x1225,	// (0x0004513b) level_6_battery_ParamLimits

0x1232,	// (0x00045148) level_7_battery_ParamLimits

0xa28f,	// (0x0004e1a5) bg_status_flat_pane_g1

0xa297,	// (0x0004e1ad) bg_status_flat_pane_g2

0xa29f,	// (0x0004e1b5) bg_status_flat_pane_g3

0xa2a7,	// (0x0004e1bd) bg_status_flat_pane_g4

0xa2af,	// (0x0004e1c5) bg_status_flat_pane_g5

0xa2b7,	// (0x0004e1cd) bg_status_flat_pane_g6

0xa2bf,	// (0x0004e1d5) bg_status_flat_pane_g7

0x677a,	// (0x0004a690) tabs_3_active_pane_t1_ParamLimits

0x677a,	// (0x0004a690) tabs_3_passive_pane_t1_ParamLimits

0x6794,	// (0x0004a6aa) tabs_4_active_pane_t1_ParamLimits

0x6794,	// (0x0004a6aa) tabs_4_1_passive_pane_t1_ParamLimits

0x6dde,	// (0x0004acf4) tabs_2_active_pane_t1_ParamLimits

0x6dde,	// (0x0004acf4) tabs_2_passive_pane_t1_ParamLimits

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp4_ParamLimits

0x6dfe,	// (0x0004ad14) tabs_2_long_active_pane_t1_ParamLimits

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp4_ParamLimits

0x8233,	// (0x0004c149) list_single_midp_graphic_pane_t1_ParamLimits

0x6df0,	// (0x0004ad06) bg_active_tab_pane_cp5_ParamLimits

0x6e1d,	// (0x0004ad33) tabs_3_long_active_pane_t1_ParamLimits

0x6e11,	// (0x0004ad27) bg_passive_tab_pane_cp5_ParamLimits

0x8233,	// (0x0004c149) list_single_midp_graphic_pane_t1

0x7f46,	// (0x0004be5c) bg_status_flat_pane_ParamLimits

0x800f,	// (0x0004bf25) indicator_pane_cp2_ParamLimits

0x800f,	// (0x0004bf25) indicator_pane_cp2

0x813a,	// (0x0004c050) navi_pane_srt_ParamLimits

0x813a,	// (0x0004c050) navi_pane_srt

0x815e,	// (0x0004c074) popup_clock_digital_analogue_window_cp1

0x0a8b,	// (0x000449a1) indicator_pane_t1

0x16b9,	// (0x000455cf) copy_highlight_pane

0x16b9,	// (0x000455cf) cursor_graphics_pane

0x16b9,	// (0x000455cf) graphic_within_text_pane

0x16b9,	// (0x000455cf) link_highlight_pane

0xaa8e,	// (0x0004e9a4) popup_preview_text_window_t5_ParamLimits

0xaa8e,	// (0x0004e9a4) popup_preview_text_window_t5

0x1721,	// (0x00045637) cursor_digital_pane

0x1721,	// (0x00045637) cursor_primary_pane

0x1732,	// (0x00045648) cursor_primary_small_pane

0x173a,	// (0x00045650) cursor_secondary_pane

0x1742,	// (0x00045658) cursor_title_pane

0x1721,	// (0x00045637) link_highlight_digital_pane

0x1729,	// (0x0004563f) link_highlight_primary_pane

0x1732,	// (0x00045648) link_highlight_primary_small_pane

0x173a,	// (0x00045650) link_highlight_secondary_pane

0x1742,	// (0x00045658) link_highlight_title_pane

0x1721,	// (0x00045637) copy_highlight_digital_pane

0x1721,	// (0x00045637) copy_highlight_primary_pane

0x1732,	// (0x00045648) copy_highlight_primary_small_pane

0x173a,	// (0x00045650) copy_highlight_secondary_pane

0x1742,	// (0x00045658) copy_highlight_title_pane

0x173a,	// (0x00045650) graphic_text_digital_pane

0xa32d,	// (0x0004e243) graphic_text_primary_pane

0xa336,	// (0x0004e24c) graphic_text_primary_small_pane

0x1732,	// (0x00045648) graphic_text_secondary_pane

0x1721,	// (0x00045637) graphic_text_title_pane

0x75e5,	// (0x0004b4fb) cursor_primary_pane_g1

0xa31f,	// (0x0004e235) cursor_text_primary_t1

0xa307,	// (0x0004e21d) cursor_primary_small_pane_g1

0xa311,	// (0x0004e227) cursor_text_primary_small_t1

0xa2ef,	// (0x0004e205) cursor_primary_small_pane_g1_copy1

0xa2f9,	// (0x0004e20f) cursor_text_primary_small_t1_copy1

0xa2d7,	// (0x0004e1ed) cursor_text_title_t1

0xa2e5,	// (0x0004e1fb) cursor_title_pane_g1

0x75e5,	// (0x0004b4fb) cursor_digital_pane_g1

0x174a,	// (0x00045660) cursor_text_digital_t1

0x1758,	// (0x0004566e) link_highlight_primary_pane_g1

0xa280,	// (0x0004e196) link_highlight_primary_pane_t1

0x1758,	// (0x0004566e) link_highlight_primary_small_pane_g1

0x1760,	// (0x00045676) link_highlight_primary_small_pane_t1

0x1758,	// (0x0004566e) link_highlight_secondary_pane_g1

0x176f,	// (0x00045685) link_highlight_secondary_pane_t1

0xa1e5,	// (0x0004e0fb) link_highlight_title_pane_g1

0xa1fc,	// (0x0004e112) link_highlight_title_pane_t1

0xa1e5,	// (0x0004e0fb) link_highlight_digital_pane_g1

0xa1ed,	// (0x0004e103) link_highlight_digital_pane_t1

0xa09f,	// (0x0004dfb5) copy_highlight_primary_pane_g1

0xa0c5,	// (0x0004dfdb) copy_highlight_primary_pane_t1

0xa09f,	// (0x0004dfb5) copy_highlight_primary_small_pane_g1

0xa0b6,	// (0x0004dfcc) copy_highlight_primary_small_pane_t1

0x177e,	// (0x00045694) copy_highlight_secondary_pane_g1

0x1786,	// (0x0004569c) copy_highlight_secondary_pane_t1

0xa09f,	// (0x0004dfb5) copy_highlight_title_pane_g1

0xa0a7,	// (0x0004dfbd) copy_highlight_title_pane_t1

0xa09f,	// (0x0004dfb5) copy_highlight_digital_pane_g1

0xb2d9,	// (0x0004f1ef) copy_highlight_digital_pane_t1

0xb22d,	// (0x0004f143) graphic_text_primary_pane_g1

0xb2bd,	// (0x0004f1d3) graphic_text_primary_pane_t1

0xb2cb,	// (0x0004f1e1) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000538ba) graphic_text_primary_pane_t

0xb299,	// (0x0004f1af) graphic_text_primary_small_pane_g1

0xb2a1,	// (0x0004f1b7) graphic_text_primary_small_pane_t1

0xb2af,	// (0x0004f1c5) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000538b5) graphic_text_primary_small_pane_t

0xb275,	// (0x0004f18b) graphic_text_secondary_pane_g1

0xb27d,	// (0x0004f193) graphic_text_secondary_pane_t1

0xb28b,	// (0x0004f1a1) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000538b0) graphic_text_secondary_pane_t

0xb251,	// (0x0004f167) graphic_text_title_pane_g1

0xb259,	// (0x0004f16f) graphic_text_title_pane_t1

0xb267,	// (0x0004f17d) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x000538ab) graphic_text_title_pane_t

0xb22d,	// (0x0004f143) graphic_text_digital_pane_g1

0xb235,	// (0x0004f14b) graphic_text_digital_pane_t1

0xb243,	// (0x0004f159) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x000538a6) graphic_text_digital_pane_t

0x0a47,	// (0x0004495d) navi_icon_pane_srt_ParamLimits

0x0a47,	// (0x0004495d) navi_icon_pane_srt

0x09eb,	// (0x00044901) navi_midp_pane_srt

0x09eb,	// (0x00044901) navi_navi_pane_srt

0x0a47,	// (0x0004495d) navi_text_pane_srt_ParamLimits

0x0a47,	// (0x0004495d) navi_text_pane_srt

0xb1f8,	// (0x0004f10e) navi_navi_icon_text_pane_srt

0xb200,	// (0x0004f116) navi_navi_pane_srt_g1_ParamLimits

0xb200,	// (0x0004f116) navi_navi_pane_srt_g1

0xb212,	// (0x0004f128) navi_navi_pane_srt_g2_ParamLimits

0xb212,	// (0x0004f128) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x000538a1) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x000538a1) navi_navi_pane_srt_g

0xb224,	// (0x0004f13a) navi_navi_tabs_pane_srt

0xb1f8,	// (0x0004f10e) navi_navi_text_pane_srt

0xb1f8,	// (0x0004f10e) navi_navi_volume_pane_srt

0xb1e9,	// (0x0004f0ff) navi_navi_text_pane_srt_t1

0x865e,	// (0x0004c574) navi_navi_volume_pane_srt_g1

0x8666,	// (0x0004c57c) volume_small_pane_srt_ParamLimits

0x8666,	// (0x0004c57c) volume_small_pane_srt

0x75ef,	// (0x0004b505) volume_small_pane_srt_g1_ParamLimits

0x75ef,	// (0x0004b505) volume_small_pane_srt_g1

0x75ff,	// (0x0004b515) volume_small_pane_srt_g2_ParamLimits

0x75ff,	// (0x0004b515) volume_small_pane_srt_g2

0x7610,	// (0x0004b526) volume_small_pane_srt_g3_ParamLimits

0x7610,	// (0x0004b526) volume_small_pane_srt_g3

0x7621,	// (0x0004b537) volume_small_pane_srt_g4_ParamLimits

0x7621,	// (0x0004b537) volume_small_pane_srt_g4

0x7632,	// (0x0004b548) volume_small_pane_srt_g5_ParamLimits

0x7632,	// (0x0004b548) volume_small_pane_srt_g5

0x7643,	// (0x0004b559) volume_small_pane_srt_g6_ParamLimits

0x7643,	// (0x0004b559) volume_small_pane_srt_g6

0x7654,	// (0x0004b56a) volume_small_pane_srt_g7_ParamLimits

0x7654,	// (0x0004b56a) volume_small_pane_srt_g7

0x7665,	// (0x0004b57b) volume_small_pane_srt_g8_ParamLimits

0x7665,	// (0x0004b57b) volume_small_pane_srt_g8

0x7676,	// (0x0004b58c) volume_small_pane_srt_g9_ParamLimits

0x7676,	// (0x0004b58c) volume_small_pane_srt_g9

0x7687,	// (0x0004b59d) volume_small_pane_srt_g10_ParamLimits

0x7687,	// (0x0004b59d) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00053649) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00053649) volume_small_pane_srt_g

0x69e1,	// (0x0004a8f7) query_popup_data_pane_cp2

0xb1cf,	// (0x0004f0e5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1cf,	// (0x0004f0e5) navi_navi_icon_text_pane_srt_t1

0xa32d,	// (0x0004e243) navi_tabs_2_long_pane_srt

0xa32d,	// (0x0004e243) navi_tabs_2_pane_srt

0xa32d,	// (0x0004e243) navi_tabs_3_long_pane_srt

0xa32d,	// (0x0004e243) navi_tabs_3_pane_srt

0xa32d,	// (0x0004e243) navi_tabs_4_pane_srt

0x863e,	// (0x0004c554) tabs_2_active_pane_srt_ParamLimits

0x863e,	// (0x0004c554) tabs_2_active_pane_srt

0x864e,	// (0x0004c564) tabs_2_passive_pane_srt_ParamLimits

0x864e,	// (0x0004c564) tabs_2_passive_pane_srt

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp1_srt

0xb19b,	// (0x0004f0b1) bg_passive_tab_pane_g1_cp1_srt

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0004f0ba) bg_passive_tab_pane_g3_cp1_srt

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp1_srt

0xb1ad,	// (0x0004f0c3) tabs_2_active_pane_srt_g1

0xb1b5,	// (0x0004f0cb) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b5,	// (0x0004f0cb) tabs_2_active_pane_srt_t1

0xb19b,	// (0x0004f0b1) bg_active_tab_pane_g1_cp1_srt

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp1_srt

0xb1a4,	// (0x0004f0ba) bg_active_tab_pane_g3_cp1_srt

0x860b,	// (0x0004c521) tabs_3_active_pane_srt_ParamLimits

0x860b,	// (0x0004c521) tabs_3_active_pane_srt

0x861c,	// (0x0004c532) tabs_3_passive_pane_cp_srt_ParamLimits

0x861c,	// (0x0004c532) tabs_3_passive_pane_cp_srt

0x862d,	// (0x0004c543) tabs_3_passive_pane_srt_ParamLimits

0x862d,	// (0x0004c543) tabs_3_passive_pane_srt

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0f3f,	// (0x00044e55) bg_passive_tab_pane_cp2_srt

0x7698,	// (0x0004b5ae) bg_passive_tab_pane_g1_cp2_srt

0x72ee,	// (0x0004b204) bg_passive_tab_pane_g2_cp2_srt

0x76a1,	// (0x0004b5b7) bg_passive_tab_pane_g3_cp2_srt

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a47,	// (0x0004495d) bg_active_tab_pane_cp2_srt

0xb181,	// (0x0004f097) tabs_3_active_pane_srt_g1

0xb189,	// (0x0004f09f) tabs_3_active_pane_srt_t1_ParamLimits

0xb189,	// (0x0004f09f) tabs_3_active_pane_srt_t1

0x7698,	// (0x0004b5ae) bg_active_tab_pane_g1_cp2_srt

0x72ee,	// (0x0004b204) bg_active_tab_pane_g2_cp2_srt

0x76a1,	// (0x0004b5b7) bg_active_tab_pane_g3_cp2_srt

0x85c3,	// (0x0004c4d9) tabs_4_active_pane_srt_ParamLimits

0x85c3,	// (0x0004c4d9) tabs_4_active_pane_srt

0x85d5,	// (0x0004c4eb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x85d5,	// (0x0004c4eb) tabs_4_passive_pane_cp2_srt

0x78ba,	// (0x0004b7d0) aid_size_cell_toolbar

0x6e11,	// (0x0004ad27) main_idle_act_pane_ParamLimits

0x7a71,	// (0x0004b987) popup_large_graphic_colour_window_ParamLimits

0x7ddc,	// (0x0004bcf2) popup_toolbar_window_ParamLimits

0x7ddc,	// (0x0004bcf2) popup_toolbar_window

0xafdf,	// (0x0004eef5) list_single_graphic_2heading_pane_ParamLimits

0xafdf,	// (0x0004eef5) list_single_graphic_2heading_pane

0x10cc,	// (0x00044fe2) aid_size_cell_apps_grid_lsc_pane

0x10de,	// (0x00044ff4) aid_size_cell_apps_grid_prt_pane

0x0f3f,	// (0x00044e55) bg_wml_button_pane_cp1_ParamLimits

0x0f3f,	// (0x00044e55) bg_wml_button_pane_cp1

0x9d12,	// (0x0004dc28) form_midp_field_text_pane_t1_ParamLimits

0x9adc,	// (0x0004d9f2) input_focus_pane_cp050_ParamLimits

0x9d4c,	// (0x0004dc62) list_midp_form_text_pane_ParamLimits

0x9cef,	// (0x0004dc05) input_focus_pane_cp051_ParamLimits

0x9d03,	// (0x0004dc19) list_midp_choice_pane_ParamLimits

0x9b92,	// (0x0004daa8) list_single_2graphic_pane_cp3_ParamLimits

0x9b92,	// (0x0004daa8) list_single_2graphic_pane_cp3

0x9bb7,	// (0x0004dacd) list_single_midp_graphic_pane_ParamLimits

0x9bb7,	// (0x0004dacd) list_single_midp_graphic_pane

0x5afd,	// (0x00049a13) list_single_graphic_2heading_pane_g1_ParamLimits

0x5afd,	// (0x00049a13) list_single_graphic_2heading_pane_g1

0x5b09,	// (0x00049a1f) list_single_graphic_2heading_pane_g4_ParamLimits

0x5b09,	// (0x00049a1f) list_single_graphic_2heading_pane_g4

0x5b15,	// (0x00049a2b) list_single_graphic_2heading_pane_g5_ParamLimits

0x5b15,	// (0x00049a2b) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x0005369c) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x0005369c) list_single_graphic_2heading_pane_g

0x5b21,	// (0x00049a37) list_single_graphic_2heading_pane_t1_ParamLimits

0x5b21,	// (0x00049a37) list_single_graphic_2heading_pane_t1

0x5b35,	// (0x00049a4b) list_single_graphic_2heading_pane_t2_ParamLimits

0x5b35,	// (0x00049a4b) list_single_graphic_2heading_pane_t2

0x5b4f,	// (0x00049a65) list_single_graphic_2heading_pane_t3_ParamLimits

0x5b4f,	// (0x00049a65) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x000536a3) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x000536a3) list_single_graphic_2heading_pane_t

0x998e,	// (0x0004d8a4) bg_popup_sub_pane_cp2

0x99b8,	// (0x0004d8ce) grid_toobar_pane

0x81aa,	// (0x0004c0c0) cell_toolbar_pane_ParamLimits

0x81aa,	// (0x0004c0c0) cell_toolbar_pane

0x99f4,	// (0x0004d90a) cell_toolbar_pane_g1_ParamLimits

0x99f4,	// (0x0004d90a) cell_toolbar_pane_g1

0x9a08,	// (0x0004d91e) cell_toolbar_pane_g2_ParamLimits

0x9a08,	// (0x0004d91e) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x000536b1) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x000536b1) cell_toolbar_pane_g

0x9a2a,	// (0x0004d940) grid_highlight_pane_cp2_ParamLimits

0x9a2a,	// (0x0004d940) grid_highlight_pane_cp2

0x9a44,	// (0x0004d95a) toolbar_button_pane

0x9a50,	// (0x0004d966) toolbar_button_pane_g1

0x9a58,	// (0x0004d96e) toolbar_button_pane_g2

0x9a60,	// (0x0004d976) toolbar_button_pane_g3

0x9a68,	// (0x0004d97e) toolbar_button_pane_g4

0x9a70,	// (0x0004d986) toolbar_button_pane_g5

0x9a78,	// (0x0004d98e) toolbar_button_pane_g6

0x9a80,	// (0x0004d996) toolbar_button_pane_g7

0x9a88,	// (0x0004d99e) toolbar_button_pane_g8

0x9a90,	// (0x0004d9a6) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x000536b6) toolbar_button_pane_g

0x81ee,	// (0x0004c104) list_single_2graphic_pane_g1_cp3_ParamLimits

0x81ee,	// (0x0004c104) list_single_2graphic_pane_g1_cp3

0x81fa,	// (0x0004c110) list_single_2graphic_pane_g2_cp3_ParamLimits

0x81fa,	// (0x0004c110) list_single_2graphic_pane_g2_cp3

0x150e,	// (0x00045424) list_single_2graphic_pane_g3_cp3

0x820b,	// (0x0004c121) list_single_2graphic_pane_g4_cp3_ParamLimits

0x820b,	// (0x0004c121) list_single_2graphic_pane_g4_cp3

0x8217,	// (0x0004c12d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8217,	// (0x0004c12d) list_single_2graphic_pane_t1_cp3

0x1502,	// (0x00045418) list_single_midp_graphic_pane_g2_ParamLimits

0x1502,	// (0x00045418) list_single_midp_graphic_pane_g2

0x5aed,	// (0x00049a03) aid_zoom_text_primary

0x78c2,	// (0x0004b7d8) aid_zoom_text_secondary

0x17fb,	// (0x00045711) status_small_pane_g7_ParamLimits

0x17fb,	// (0x00045711) status_small_pane_g7

0x76fb,	// (0x0004b611) status_small_pane_t1_ParamLimits

0x66ed,	// (0x0004a603) title_pane_g2

0x0003,

0xf529,	// (0x0005343f) title_pane_g

0x6a3b,	// (0x0004a951) aid_size_cell_colour_1_pane_ParamLimits

0x6a3b,	// (0x0004a951) aid_size_cell_colour_1_pane

0x6a4f,	// (0x0004a965) aid_size_cell_colour_2_pane_ParamLimits

0x6a4f,	// (0x0004a965) aid_size_cell_colour_2_pane

0x6a63,	// (0x0004a979) aid_size_cell_colour_3_pane_ParamLimits

0x6a63,	// (0x0004a979) aid_size_cell_colour_3_pane

0x6a77,	// (0x0004a98d) aid_size_cell_colour_4_pane_ParamLimits

0x6a77,	// (0x0004a98d) aid_size_cell_colour_4_pane

0x6e84,	// (0x0004ad9a) title_pane_stacon_g1_ParamLimits

0x6e84,	// (0x0004ad9a) title_pane_stacon_g1

0xa11c,	// (0x0004e032) popup_note_wait_window_g3_ParamLimits

0xa11c,	// (0x0004e032) popup_note_wait_window_g3

0xa192,	// (0x0004e0a8) popup_note_wait_window_t5_ParamLimits

0xa192,	// (0x0004e0a8) popup_note_wait_window_t5

0x09eb,	// (0x00044901) main_feb_china_hwr_fs_writing_pane

0x7958,	// (0x0004b86e) popup_feb_china_hwr_fs_window_ParamLimits

0x7958,	// (0x0004b86e) popup_feb_china_hwr_fs_window

0x8249,	// (0x0004c15f) aid_size_cell_hwr_fs_ParamLimits

0x8249,	// (0x0004c15f) aid_size_cell_hwr_fs

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp3_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp3

0x825e,	// (0x0004c174) grid_hwr_fs_pane_ParamLimits

0x825e,	// (0x0004c174) grid_hwr_fs_pane

0x8276,	// (0x0004c18c) linegrid_hwr_fs_pane_ParamLimits

0x8276,	// (0x0004c18c) linegrid_hwr_fs_pane

0x8286,	// (0x0004c19c) cell_hwr_fs_pane_ParamLimits

0x8286,	// (0x0004c19c) cell_hwr_fs_pane

0x9ae8,	// (0x0004d9fe) linegrid_hwr_fs_pane_g1_ParamLimits

0x9ae8,	// (0x0004d9fe) linegrid_hwr_fs_pane_g1

0x9af4,	// (0x0004da0a) linegrid_hwr_fs_pane_g2_ParamLimits

0x9af4,	// (0x0004da0a) linegrid_hwr_fs_pane_g2

0x9b06,	// (0x0004da1c) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b06,	// (0x0004da1c) linegrid_hwr_fs_pane_g3

0x82a8,	// (0x0004c1be) linegrid_hwr_fs_pane_g4_ParamLimits

0x82a8,	// (0x0004c1be) linegrid_hwr_fs_pane_g4

0x82c2,	// (0x0004c1d8) linegrid_hwr_fs_pane_g5_ParamLimits

0x82c2,	// (0x0004c1d8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000536e1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000536e1) linegrid_hwr_fs_pane_g

0x9b12,	// (0x0004da28) cell_hwr_fs_pane_g1_ParamLimits

0x9b12,	// (0x0004da28) cell_hwr_fs_pane_g1

0x98c8,	// (0x0004d7de) cell_hwr_fs_pane_g2_ParamLimits

0x98c8,	// (0x0004d7de) cell_hwr_fs_pane_g2

0x9b28,	// (0x0004da3e) cell_hwr_fs_pane_g3_ParamLimits

0x9b28,	// (0x0004da3e) cell_hwr_fs_pane_g3

0x9b35,	// (0x0004da4b) cell_hwr_fs_pane_g4_ParamLimits

0x9b35,	// (0x0004da4b) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000536ec) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000536ec) cell_hwr_fs_pane_g

0x82d8,	// (0x0004c1ee) cell_hwr_fs_pane_t1

0x09eb,	// (0x00044901) grid_highlight_pane_cp6

0x09eb,	// (0x00044901) main_idle_act2_pane

0x0f16,	// (0x00044e2c) aid_inside_area_popup_secondary

0xa7b1,	// (0x0004e6c7) aid_inside_area_window_primary_ParamLimits

0xa7b1,	// (0x0004e6c7) aid_inside_area_window_primary

0xb2e8,	// (0x0004f1fe) ai2_news_ticker_pane

0xb2f0,	// (0x0004f206) aid_size_cell_ai1_link_ParamLimits

0xb2f0,	// (0x0004f206) aid_size_cell_ai1_link

0xb30a,	// (0x0004f220) popup_ai2_data_window_ParamLimits

0xb30a,	// (0x0004f220) popup_ai2_data_window

0xb320,	// (0x0004f236) popup_ai2_link_window_ParamLimits

0xb320,	// (0x0004f236) popup_ai2_link_window

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp4_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp4

0xb334,	// (0x0004f24a) grid_ai2_link_pane_ParamLimits

0xb334,	// (0x0004f24a) grid_ai2_link_pane

0xb34b,	// (0x0004f261) popup_ai2_link_window_g1_ParamLimits

0xb34b,	// (0x0004f261) popup_ai2_link_window_g1

0xb357,	// (0x0004f26d) popup_ai2_link_window_g2_ParamLimits

0xb357,	// (0x0004f26d) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x000538bf) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x000538bf) popup_ai2_link_window_g

0xb366,	// (0x0004f27c) ai2_mp_button_pane

0xb36e,	// (0x0004f284) ai2_mp_volume_pane

0x9cef,	// (0x0004dc05) bg_popup_sub_pane_cp5_ParamLimits

0x9cef,	// (0x0004dc05) bg_popup_sub_pane_cp5

0xb376,	// (0x0004f28c) heading_ai2_gene_pane_ParamLimits

0xb376,	// (0x0004f28c) heading_ai2_gene_pane

0xb382,	// (0x0004f298) list_ai2_gene_pane_ParamLimits

0xb382,	// (0x0004f298) list_ai2_gene_pane

0xb3ca,	// (0x0004f2e0) cell_ai2_link_pane_ParamLimits

0xb3ca,	// (0x0004f2e0) cell_ai2_link_pane

0xb3e0,	// (0x0004f2f6) cell_ai2_link_pane_g1

0x09eb,	// (0x00044901) grid_highlight_pane_cp7

0x867b,	// (0x0004c591) ai2_mp_volume_pane_g1

0xb4b0,	// (0x0004f3c6) ai2_mp_volume_pane_g2

0xb425,	// (0x0004f33b) list_ai2_gene_pane_t1

0xb4b8,	// (0x0004f3ce) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000538d8) ai2_mp_volume_pane_g

0x8683,	// (0x0004c599) volume_small_pane_cp3

0xb4c0,	// (0x0004f3d6) aid_size_cell_ai2_button

0xb4c8,	// (0x0004f3de) grid_ai2_button_pane

0xb4d1,	// (0x0004f3e7) cell_ai2_button_pane_ParamLimits

0xb4d1,	// (0x0004f3e7) cell_ai2_button_pane

0x09e1,	// (0x000448f7) cell_ai2_button_pane_g1

0x09eb,	// (0x00044901) grid_highlight_pane_cp8

0xb470,	// (0x0004f386) ai2_gene_pane_t1_ParamLimits

0xb470,	// (0x0004f386) ai2_gene_pane_t1

0x78b0,	// (0x0004b7c6) aid_height_parent_landscape

0xae1a,	// (0x0004ed30) aid_height_set_list

0xae2b,	// (0x0004ed41) aid_size_parent

0xb10b,	// (0x0004f021) aid_size_cell_graphic_pane_ParamLimits

0xb392,	// (0x0004f2a8) popup_ai2_data_window_g1_ParamLimits

0xb392,	// (0x0004f2a8) popup_ai2_data_window_g1

0xb39e,	// (0x0004f2b4) ai2_news_ticker_pane_g1

0xb3a6,	// (0x0004f2bc) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x000538c4) ai2_news_ticker_pane_g

0xb3ae,	// (0x0004f2c4) ai2_news_ticker_pane_t1

0xb3bc,	// (0x0004f2d2) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000538c9) ai2_news_ticker_pane_t

0xb3e9,	// (0x0004f2ff) heading_ai2_gene_pane_g1

0xb3f1,	// (0x0004f307) heading_ai2_gene_pane_t1_ParamLimits

0xb3f1,	// (0x0004f307) heading_ai2_gene_pane_t1

0xb406,	// (0x0004f31c) list_highlight_pane_cp6

0xb40e,	// (0x0004f324) ai2_gene_pane_ParamLimits

0xb40e,	// (0x0004f324) ai2_gene_pane

0xb433,	// (0x0004f349) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000538ce) list_ai2_gene_pane_t

0xb441,	// (0x0004f357) list_highlight_pane_cp8_ParamLimits

0xb441,	// (0x0004f357) list_highlight_pane_cp8

0xb452,	// (0x0004f368) ai2_gene_pane_g1_ParamLimits

0xb452,	// (0x0004f368) ai2_gene_pane_g1

0xb464,	// (0x0004f37a) ai2_gene_pane_g2_ParamLimits

0xb464,	// (0x0004f37a) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000538d3) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000538d3) ai2_gene_pane_g

0x0d9c,	// (0x00044cb2) scroll_pane_cp12

0x786d,	// (0x0004b783) control_pane_t3_ParamLimits

0x786d,	// (0x0004b783) control_pane_t3

0x76ec,	// (0x0004b602) status_small_pane_g8_ParamLimits

0x76ec,	// (0x0004b602) status_small_pane_g8

0x7a3a,	// (0x0004b950) popup_find_window_ParamLimits

0x7c53,	// (0x0004bb69) popup_note_image_window_ParamLimits

0x5b67,	// (0x00049a7d) list_double2_graphic_pane_vc_g1_ParamLimits

0x5b67,	// (0x00049a7d) list_double2_graphic_pane_vc_g1

0x1618,	// (0x0004552e) list_double2_graphic_pane_vc_g2_ParamLimits

0x1618,	// (0x0004552e) list_double2_graphic_pane_vc_g2

0x81da,	// (0x0004c0f0) list_double2_graphic_pane_vc_g3_ParamLimits

0x81da,	// (0x0004c0f0) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x000536aa) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x000536aa) list_double2_graphic_pane_vc_g

0x5b73,	// (0x00049a89) list_double2_graphic_pane_vc_t1_ParamLimits

0x5b73,	// (0x00049a89) list_double2_graphic_pane_vc_t1

0x1618,	// (0x0004552e) list_single_heading_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_single_heading_pane_vc_g1

0x81da,	// (0x0004c0f0) list_single_heading_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_single_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_single_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_single_heading_pane_vc_g

0x5b89,	// (0x00049a9f) list_single_heading_pane_vc_t1_ParamLimits

0x5b89,	// (0x00049a9f) list_single_heading_pane_vc_t1

0x5b9f,	// (0x00049ab5) list_single_heading_pane_vc_t2_ParamLimits

0x5b9f,	// (0x00049ab5) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000536d0) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000536d0) list_single_heading_pane_vc_t

0x9a98,	// (0x0004d9ae) list_setting_number_pane_vc_g1_ParamLimits

0x9a98,	// (0x0004d9ae) list_setting_number_pane_vc_g1

0x9aa4,	// (0x0004d9ba) list_setting_number_pane_vc_g2_ParamLimits

0x9aa4,	// (0x0004d9ba) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000536d5) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000536d5) list_setting_number_pane_vc_g

0x5bb1,	// (0x00049ac7) list_setting_number_pane_vc_t1_ParamLimits

0x5bb1,	// (0x00049ac7) list_setting_number_pane_vc_t1

0x5bc5,	// (0x00049adb) list_setting_number_pane_vc_t2_ParamLimits

0x5bc5,	// (0x00049adb) list_setting_number_pane_vc_t2

0x5be1,	// (0x00049af7) list_setting_number_pane_vc_t3_ParamLimits

0x5be1,	// (0x00049af7) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000536da) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000536da) list_setting_number_pane_vc_t

0x5c0b,	// (0x00049b21) set_value_pane_vc_ParamLimits

0x5c0b,	// (0x00049b21) set_value_pane_vc

0xafdf,	// (0x0004eef5) list_double2_graphic_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double2_graphic_pane_vc

0x8534,	// (0x0004c44a) list_double2_large_graphic_pane_vc_ParamLimits

0x8534,	// (0x0004c44a) list_double2_large_graphic_pane_vc

0xafdf,	// (0x0004eef5) list_double2_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double2_pane_vc

0xafdf,	// (0x0004eef5) list_double_graphic_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_graphic_heading_pane_vc

0xafdf,	// (0x0004eef5) list_double_graphic_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_graphic_pane_vc

0xafdf,	// (0x0004eef5) list_double_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_heading_pane_vc

0x8546,	// (0x0004c45c) list_double_large_graphic_pane_vc_ParamLimits

0x8546,	// (0x0004c45c) list_double_large_graphic_pane_vc

0xafdf,	// (0x0004eef5) list_double_number_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_number_pane_vc

0xafdf,	// (0x0004eef5) list_double_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_pane_vc

0xafdf,	// (0x0004eef5) list_double_time_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_double_time_pane_vc

0xafdf,	// (0x0004eef5) list_setting_number_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_setting_number_pane_vc

0xafdf,	// (0x0004eef5) list_setting_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_setting_pane_vc

0xafdf,	// (0x0004eef5) list_single_graphic_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_single_graphic_heading_pane_vc

0xafdf,	// (0x0004eef5) list_single_heading_pane_vc_ParamLimits

0xafdf,	// (0x0004eef5) list_single_heading_pane_vc

0x8564,	// (0x0004c47a) list_single_number_heading_pane_vc_ParamLimits

0x8564,	// (0x0004c47a) list_single_number_heading_pane_vc

0x5d26,	// (0x00049c3c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d26,	// (0x00049c3c) list_double_graphic_heading_pane_vc_g1

0x1618,	// (0x0004552e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1618,	// (0x0004552e) list_double_graphic_heading_pane_vc_g2

0x81da,	// (0x0004c0f0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x81da,	// (0x0004c0f0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x000538df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x000538df) list_double_graphic_heading_pane_vc_g

0x5d32,	// (0x00049c48) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5d32,	// (0x00049c48) list_double_graphic_heading_pane_vc_t1

0x5d46,	// (0x00049c5c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d46,	// (0x00049c5c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000538e6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000538e6) list_double_graphic_heading_pane_vc_t

0x9a98,	// (0x0004d9ae) list_setting_pane_vc_g1_ParamLimits

0x9a98,	// (0x0004d9ae) list_setting_pane_vc_g1

0x9aa4,	// (0x0004d9ba) list_setting_pane_vc_g2_ParamLimits

0x9aa4,	// (0x0004d9ba) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000536d5) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000536d5) list_setting_pane_vc_g

0x5d5e,	// (0x00049c74) list_setting_pane_vc_t1_ParamLimits

0x5d5e,	// (0x00049c74) list_setting_pane_vc_t1

0x5d7a,	// (0x00049c90) list_setting_pane_vc_t2_ParamLimits

0x5d7a,	// (0x00049c90) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00053929) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00053929) list_setting_pane_vc_t

0x5c0b,	// (0x00049b21) set_value_pane_cp_vc_ParamLimits

0x5c0b,	// (0x00049b21) set_value_pane_cp_vc

0x1618,	// (0x0004552e) list_single_number_heading_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_single_number_heading_pane_vc_g1

0x81da,	// (0x0004c0f0) list_single_number_heading_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_single_number_heading_pane_vc_g

0x5d94,	// (0x00049caa) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d94,	// (0x00049caa) list_single_number_heading_pane_vc_t1

0x5daa,	// (0x00049cc0) list_single_number_heading_pane_vc_t2_ParamLimits

0x5daa,	// (0x00049cc0) list_single_number_heading_pane_vc_t2

0x5dc0,	// (0x00049cd6) list_single_number_heading_pane_vc_t3_ParamLimits

0x5dc0,	// (0x00049cd6) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x0005392e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x0005392e) list_single_number_heading_pane_vc_t

0x5dd2,	// (0x00049ce8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5dd2,	// (0x00049ce8) list_single_graphic_heading_pane_vc_g1

0x1618,	// (0x0004552e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1618,	// (0x0004552e) list_single_graphic_heading_pane_vc_g4

0x81da,	// (0x0004c0f0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x81da,	// (0x0004c0f0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1f,	// (0x00053935) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1f,	// (0x00053935) list_single_graphic_heading_pane_vc_g

0x5d94,	// (0x00049caa) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5d94,	// (0x00049caa) list_single_graphic_heading_pane_vc_t1

0x5dde,	// (0x00049cf4) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5dde,	// (0x00049cf4) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa26,	// (0x0005393c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005393c) list_single_graphic_heading_pane_vc_t

0x1618,	// (0x0004552e) list_double2_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_double2_pane_vc_g1

0x81da,	// (0x0004c0f0) list_double2_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_double2_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_double2_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_double2_pane_vc_g

0x5df0,	// (0x00049d06) list_double2_pane_vc_t1_ParamLimits

0x5df0,	// (0x00049d06) list_double2_pane_vc_t1

0x86dd,	// (0x0004c5f3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x86dd,	// (0x0004c5f3) list_double2_large_graphic_pane_vc_g1

0x6cfe,	// (0x0004ac14) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6cfe,	// (0x0004ac14) list_double2_large_graphic_pane_vc_g2

0x6d0a,	// (0x0004ac20) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6d0a,	// (0x0004ac20) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa2b,	// (0x00053941) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa2b,	// (0x00053941) list_double2_large_graphic_pane_vc_g

0x5e08,	// (0x00049d1e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5e08,	// (0x00049d1e) list_double2_large_graphic_pane_vc_t1

0x86e9,	// (0x0004c5ff) list_double_time_pane_vc_g1_ParamLimits

0x86e9,	// (0x0004c5ff) list_double_time_pane_vc_g1

0x86f5,	// (0x0004c60b) list_double_time_pane_vc_g2_ParamLimits

0x86f5,	// (0x0004c60b) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x00053948) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x00053948) list_double_time_pane_vc_g

0x5e1e,	// (0x00049d34) list_double_time_pane_vc_t1_ParamLimits

0x5e1e,	// (0x00049d34) list_double_time_pane_vc_t1

0x5e42,	// (0x00049d58) list_double_time_pane_vc_t2_ParamLimits

0x5e42,	// (0x00049d58) list_double_time_pane_vc_t2

0x5e91,	// (0x00049da7) list_double_time_pane_vc_t3_ParamLimits

0x5e91,	// (0x00049da7) list_double_time_pane_vc_t3

0x5ea3,	// (0x00049db9) list_double_time_pane_vc_t4_ParamLimits

0x5ea3,	// (0x00049db9) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005394d) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005394d) list_double_time_pane_vc_t

0x1618,	// (0x0004552e) list_double_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_double_pane_vc_g1

0x81da,	// (0x0004c0f0) list_double_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_double_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_double_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_double_pane_vc_g

0x5eb7,	// (0x00049dcd) list_double_pane_vc_t1_ParamLimits

0x5eb7,	// (0x00049dcd) list_double_pane_vc_t1

0x5ecb,	// (0x00049de1) list_double_pane_vc_t2_ParamLimits

0x5ecb,	// (0x00049de1) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x00053956) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x00053956) list_double_pane_vc_t

0x1618,	// (0x0004552e) list_double_number_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_double_number_pane_vc_g1

0x81da,	// (0x0004c0f0) list_double_number_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_double_number_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_double_number_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_double_number_pane_vc_g

0x5ee3,	// (0x00049df9) list_double_number_pane_vc_t1_ParamLimits

0x5ee3,	// (0x00049df9) list_double_number_pane_vc_t1

0x5eb7,	// (0x00049dcd) list_double_number_pane_vc_t2_ParamLimits

0x5eb7,	// (0x00049dcd) list_double_number_pane_vc_t2

0x5ef5,	// (0x00049e0b) list_double_number_pane_vc_t3_ParamLimits

0x5ef5,	// (0x00049e0b) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005395b) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005395b) list_double_number_pane_vc_t

0x8701,	// (0x0004c617) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8701,	// (0x0004c617) list_double_large_graphic_pane_vc_g1

0x871d,	// (0x0004c633) list_double_large_graphic_pane_vc_g2_ParamLimits

0x871d,	// (0x0004c633) list_double_large_graphic_pane_vc_g2

0x8731,	// (0x0004c647) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8731,	// (0x0004c647) list_double_large_graphic_pane_vc_g3

0x5f0d,	// (0x00049e23) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f0d,	// (0x00049e23) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x00053962) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00053962) list_double_large_graphic_pane_vc_g

0x5f1c,	// (0x00049e32) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f1c,	// (0x00049e32) list_double_large_graphic_pane_vc_t1

0x5f38,	// (0x00049e4e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f38,	// (0x00049e4e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005396b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005396b) list_double_large_graphic_pane_vc_t

0x1618,	// (0x0004552e) list_double_heading_pane_vc_g1_ParamLimits

0x1618,	// (0x0004552e) list_double_heading_pane_vc_g1

0x81da,	// (0x0004c0f0) list_double_heading_pane_vc_g2_ParamLimits

0x81da,	// (0x0004c0f0) list_double_heading_pane_vc_g2

0x0001,

0xf7b5,	// (0x000536cb) list_double_heading_pane_vc_g_ParamLimits

0xf7b5,	// (0x000536cb) list_double_heading_pane_vc_g

0x5f5a,	// (0x00049e70) list_double_heading_pane_vc_t1_ParamLimits

0x5f5a,	// (0x00049e70) list_double_heading_pane_vc_t1

0x5f6e,	// (0x00049e84) list_double_heading_pane_vc_t2_ParamLimits

0x5f6e,	// (0x00049e84) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00053970) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00053970) list_double_heading_pane_vc_t

0x5f86,	// (0x00049e9c) list_double_graphic_pane_vc_g1_ParamLimits

0x5f86,	// (0x00049e9c) list_double_graphic_pane_vc_g1

0x8740,	// (0x0004c656) list_double_graphic_pane_vc_g2_ParamLimits

0x8740,	// (0x0004c656) list_double_graphic_pane_vc_g2

0x1618,	// (0x0004552e) list_double_graphic_pane_vc_g3_ParamLimits

0x1618,	// (0x0004552e) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x00053975) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00053975) list_double_graphic_pane_vc_g

0x5f99,	// (0x00049eaf) list_double_graphic_pane_vc_t1_ParamLimits

0x5f99,	// (0x00049eaf) list_double_graphic_pane_vc_t1

0x5fb8,	// (0x00049ece) list_double_graphic_pane_vc_t2_ParamLimits

0x5fb8,	// (0x00049ece) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005397e) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005397e) list_double_graphic_pane_vc_t

0x6317,	// (0x0004a22d) aid_size_cell_fastswap

0x631f,	// (0x0004a235) aid_size_cell_touch_ParamLimits

0x631f,	// (0x0004a235) aid_size_cell_touch

0x657a,	// (0x0004a490) popup_fast_swap_wide_window_ParamLimits

0x657a,	// (0x0004a490) popup_fast_swap_wide_window

0x6680,	// (0x0004a596) touch_pane_ParamLimits

0x6680,	// (0x0004a596) touch_pane

0x0de9,	// (0x00044cff) button_value_adjust_pane_cp2

0x5834,	// (0x0004974a) button_value_adjust_pane_cp4

0x5856,	// (0x0004976c) form_field_data_pane_cp2

0x5877,	// (0x0004978d) form_field_data_wide_pane_cp2

0x1103,	// (0x00045019) bg_scroll_pane_ParamLimits

0x707e,	// (0x0004af94) scroll_handle_pane_ParamLimits

0x7092,	// (0x0004afa8) scroll_sc2_down_pane_ParamLimits

0x7092,	// (0x0004afa8) scroll_sc2_down_pane

0x1134,	// (0x0004504a) scroll_sc2_up_pane_ParamLimits

0x1134,	// (0x0004504a) scroll_sc2_up_pane

0xbbb2,	// (0x0004fac8) grid_wheel_folder_pane_g1_ParamLimits

0xbbb2,	// (0x0004fac8) grid_wheel_folder_pane_g1

0x7413,	// (0x0004b329) clock_nsta_pane_cp2_ParamLimits

0x7413,	// (0x0004b329) clock_nsta_pane_cp2

0x751b,	// (0x0004b431) listscroll_midp_pane_ParamLimits

0x7527,	// (0x0004b43d) midp_canvas_pane

0x181d,	// (0x00045733) nsta_clock_indic_pane

0x1845,	// (0x0004575b) listscroll_form_pane_vc

0x184d,	// (0x00045763) listscroll_set_pane_vc_ParamLimits

0x184d,	// (0x00045763) listscroll_set_pane_vc

0x7f62,	// (0x0004be78) clock_nsta_pane

0x7fdd,	// (0x0004bef3) indicator_nsta_pane

0x998e,	// (0x0004d8a4) bg_popup_sub_pane_cp2_ParamLimits

0x99a2,	// (0x0004d8b8) find_pane_cp2_ParamLimits

0x99a2,	// (0x0004d8b8) find_pane_cp2

0x99b8,	// (0x0004d8ce) grid_toobar_pane_ParamLimits

0x9ab0,	// (0x0004d9c6) list_form_gen_pane_vc_ParamLimits

0x9ab0,	// (0x0004d9c6) list_form_gen_pane_vc

0x9ac6,	// (0x0004d9dc) scroll_pane_cp8_vc_ParamLimits

0x9ac6,	// (0x0004d9dc) scroll_pane_cp8_vc

0x9b42,	// (0x0004da58) data_form_wide_pane_vc_ParamLimits

0x9b42,	// (0x0004da58) data_form_wide_pane_vc

0x9b4e,	// (0x0004da64) form_field_data_wide_pane_vc_g1

0x9b56,	// (0x0004da6c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b56,	// (0x0004da6c) form_field_data_wide_pane_vc_t1

0x0dfd,	// (0x00044d13) input_focus_pane_cp6_vc_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_cp6_vc

0x9e83,	// (0x0004dd99) list_midp_pane_ParamLimits

0x9e8f,	// (0x0004dda5) scroll_pane_cp16_ParamLimits

0x9e8f,	// (0x0004dda5) scroll_pane_cp16

0x9ef9,	// (0x0004de0f) button_value_adjust_pane_ParamLimits

0x9ef9,	// (0x0004de0f) button_value_adjust_pane

0xae3d,	// (0x0004ed53) button_value_adjust_pane_cp6_ParamLimits

0xae3d,	// (0x0004ed53) button_value_adjust_pane_cp6

0xaf63,	// (0x0004ee79) settings_code_pane_cp_ParamLimits

0xaf63,	// (0x0004ee79) settings_code_pane_cp

0x09e1,	// (0x000448f7) cell_touch_pane_g1

0x09e1,	// (0x000448f7) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x000535ef) cell_touch_pane_g

0xb4e3,	// (0x0004f3f9) cell_touch_pane_cp_ParamLimits

0xb4e3,	// (0x0004f3f9) cell_touch_pane_cp

0xb4f3,	// (0x0004f409) cell_touch_pane_ParamLimits

0xb4f3,	// (0x0004f409) cell_touch_pane

0x09e1,	// (0x000448f7) scroll_sc2_down_pane_g1

0x09e1,	// (0x000448f7) scroll_sc2_up_pane_g1

0x09eb,	// (0x00044901) bg_set_opt_pane_cp4_vc

0xb505,	// (0x0004f41b) list_set_graphic_pane_vc_g1_ParamLimits

0xb505,	// (0x0004f41b) list_set_graphic_pane_vc_g1

0xb511,	// (0x0004f427) list_set_graphic_pane_vc_g2_ParamLimits

0xb511,	// (0x0004f427) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000538eb) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000538eb) list_set_graphic_pane_vc_g

0xb51d,	// (0x0004f433) text_primary_small_cp13_vc_ParamLimits

0xb51d,	// (0x0004f433) text_primary_small_cp13_vc

0xb535,	// (0x0004f44b) list_set_graphic_pane_vc_ParamLimits

0xb535,	// (0x0004f44b) list_set_graphic_pane_vc

0x09eb,	// (0x00044901) input_focus_pane_cp2_vc

0x09e1,	// (0x000448f7) setting_code_pane_vc_g1

0x0a5e,	// (0x00044974) setting_code_pane_vc_t1

0xb548,	// (0x0004f45e) set_text_pane_vc_t1_ParamLimits

0xb548,	// (0x0004f45e) set_text_pane_vc_t1

0x09eb,	// (0x00044901) input_focus_pane_cp1_vc

0xb565,	// (0x0004f47b) list_set_text_pane_vc

0x09e1,	// (0x000448f7) setting_text_pane_vc_g1

0x09eb,	// (0x00044901) bg_set_opt_pane_cp2_vc

0x0a55,	// (0x0004496b) setting_slider_graphic_pane_vc_g1

0xb56f,	// (0x0004f485) setting_slider_graphic_pane_vc_t1

0xb57f,	// (0x0004f495) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000538f0) setting_slider_graphic_pane_vc_t

0xb58f,	// (0x0004f4a5) slider_set_pane_cp_vc

0xb597,	// (0x0004f4ad) slider_set_pane_vc_g1

0xb5a0,	// (0x0004f4b6) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000538f5) slider_set_pane_vc_g

0x0e55,	// (0x00044d6b) set_opt_bg_pane_g1_copy1

0x0e5d,	// (0x00044d73) set_opt_bg_pane_g2_copy1

0xb5cc,	// (0x0004f4e2) set_opt_bg_pane_g3_copy1

0x0e6d,	// (0x00044d83) set_opt_bg_pane_g4_copy1

0x0e75,	// (0x00044d8b) set_opt_bg_pane_g5_copy1

0x0e7d,	// (0x00044d93) set_opt_bg_pane_g6_copy1

0xb5d4,	// (0x0004f4ea) set_opt_bg_pane_g7_copy1

0xb5de,	// (0x0004f4f4) set_opt_bg_pane_g8_copy1

0xb5e6,	// (0x0004f4fc) set_opt_bg_pane_g9_copy1

0x09eb,	// (0x00044901) bg_set_opt_pane_cp_vc

0xb5ee,	// (0x0004f504) setting_slider_pane_vc_t1

0xb5fd,	// (0x0004f513) setting_slider_pane_vc_t2

0xb60d,	// (0x0004f523) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00053904) setting_slider_pane_vc_t

0xb61d,	// (0x0004f533) slider_set_pane_vc

0x82e6,	// (0x0004c1fc) volume_set_pane_vc_g1

0x868c,	// (0x0004c5a2) volume_set_pane_vc_g2

0x8695,	// (0x0004c5ab) volume_set_pane_vc_g3

0x869e,	// (0x0004c5b4) volume_set_pane_vc_g4

0x86a7,	// (0x0004c5bd) volume_set_pane_vc_g5

0x86b0,	// (0x0004c5c6) volume_set_pane_vc_g6

0x86b9,	// (0x0004c5cf) volume_set_pane_vc_g7

0x86c2,	// (0x0004c5d8) volume_set_pane_vc_g8

0x86cb,	// (0x0004c5e1) volume_set_pane_vc_g9

0x86d4,	// (0x0004c5ea) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x0005390b) volume_set_pane_vc_g

0xb625,	// (0x0004f53b) volume_set_pane_vc

0xb62f,	// (0x0004f545) button_value_adjust_pane_cp1_vc

0xb639,	// (0x0004f54f) list_highlight_pane_cp2_vc

0xb642,	// (0x0004f558) list_set_pane_vc_ParamLimits

0xb642,	// (0x0004f558) list_set_pane_vc

0xb6a0,	// (0x0004f5b6) main_pane_set_vc_t1_ParamLimits

0xb6a0,	// (0x0004f5b6) main_pane_set_vc_t1

0xb6b5,	// (0x0004f5cb) main_pane_set_vc_t2_ParamLimits

0xb6b5,	// (0x0004f5cb) main_pane_set_vc_t2

0xb6c7,	// (0x0004f5dd) main_pane_set_vc_t3_ParamLimits

0xb6c7,	// (0x0004f5dd) main_pane_set_vc_t3

0xb6d9,	// (0x0004f5ef) main_pane_set_vc_t4_ParamLimits

0xb6d9,	// (0x0004f5ef) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00053920) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00053920) main_pane_set_vc_t

0xb6eb,	// (0x0004f601) setting_code_pane_vc_ParamLimits

0xb6eb,	// (0x0004f601) setting_code_pane_vc

0xb6fa,	// (0x0004f610) setting_slider_graphic_pane_vc

0xb6fa,	// (0x0004f610) setting_slider_pane_vc

0xb6fa,	// (0x0004f610) setting_text_pane_vc

0xb6fa,	// (0x0004f610) setting_volume_pane_vc

0xb702,	// (0x0004f618) scroll_pane_cp121_vc

0x0dd7,	// (0x00044ced) set_content_pane_vc

0xb70a,	// (0x0004f620) button_value_adjust_pane_g1

0xb713,	// (0x0004f629) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x00053983) button_value_adjust_pane_g

0xb71c,	// (0x0004f632) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x0004f632) form_field_slider_wide_pane_vc_t1

0xb730,	// (0x0004f646) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb730,	// (0x0004f646) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x00053988) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00053988) form_field_slider_wide_pane_vc_t

0x0a39,	// (0x0004494f) input_focus_pane_cp10_vc_ParamLimits

0x0a39,	// (0x0004494f) input_focus_pane_cp10_vc

0xb75e,	// (0x0004f674) slider_cont_pane_cp1_vc_ParamLimits

0xb75e,	// (0x0004f674) slider_cont_pane_cp1_vc

0xb770,	// (0x0004f686) slider_form_pane_g1_cp2

0xb5a0,	// (0x0004f4b6) slider_form_pane_g2_cp2

0xb79d,	// (0x0004f6b3) form_field_slider_pane_vc_t3

0xb7ab,	// (0x0004f6c1) form_field_slider_pane_vc_t4

0xb7b9,	// (0x0004f6cf) slider_form_pane_vc_ParamLimits

0xb7b9,	// (0x0004f6cf) slider_form_pane_vc

0xb7c6,	// (0x0004f6dc) form_field_slider_pane_vc_t1_ParamLimits

0xb7c6,	// (0x0004f6dc) form_field_slider_pane_vc_t1

0xb730,	// (0x0004f646) form_field_slider_pane_vc_t2_ParamLimits

0xb730,	// (0x0004f646) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005399a) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005399a) form_field_slider_pane_vc_t

0x0a39,	// (0x0004494f) input_focus_pane_cp9_vc_ParamLimits

0x0a39,	// (0x0004494f) input_focus_pane_cp9_vc

0xb7e2,	// (0x0004f6f8) slider_cont_pane_vc_ParamLimits

0xb7e2,	// (0x0004f6f8) slider_cont_pane_vc

0xb7f6,	// (0x0004f70c) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f6,	// (0x0004f70c) list_form_graphic_pane_cp_vc

0x9b4e,	// (0x0004da64) form_field_popup_wide_pane_vc_g1

0xb80b,	// (0x0004f721) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb80b,	// (0x0004f721) form_field_popup_wide_pane_vc_t1

0x0dfd,	// (0x00044d13) input_focus_pane_cp8_vc_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_cp8_vc

0xb850,	// (0x0004f766) list_form_wide_pane_vc_ParamLimits

0xb850,	// (0x0004f766) list_form_wide_pane_vc

0xb85c,	// (0x0004f772) list_form_graphic_pane_vc_g1

0xb864,	// (0x0004f77a) list_form_graphic_pane_vc_t1_ParamLimits

0xb864,	// (0x0004f77a) list_form_graphic_pane_vc_t1

0x0a47,	// (0x0004495d) list_highlight_pane_cp5_vc_ParamLimits

0x0a47,	// (0x0004495d) list_highlight_pane_cp5_vc

0xb880,	// (0x0004f796) list_form_graphic_pane_vc_ParamLimits

0xb880,	// (0x0004f796) list_form_graphic_pane_vc

0x9b4e,	// (0x0004da64) form_field_popup_pane_vc_g1

0xb896,	// (0x0004f7ac) form_field_popup_pane_vc_t1_ParamLimits

0xb896,	// (0x0004f7ac) form_field_popup_pane_vc_t1

0x0dfd,	// (0x00044d13) input_focus_pane_cp7_vc_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_cp7_vc

0xb8ad,	// (0x0004f7c3) list_form_pane_vc_ParamLimits

0xb8ad,	// (0x0004f7c3) list_form_pane_vc

0xb8b9,	// (0x0004f7cf) data_form_pane_vc_t1_ParamLimits

0xb8b9,	// (0x0004f7cf) data_form_pane_vc_t1

0x0e55,	// (0x00044d6b) input_focus_pane_vc_g1

0x0e5d,	// (0x00044d73) input_focus_pane_vc_g2

0x0e65,	// (0x00044d7b) input_focus_pane_vc_g3

0x0e6d,	// (0x00044d83) input_focus_pane_vc_g4

0x0e75,	// (0x00044d8b) input_focus_pane_vc_g5

0x0e7d,	// (0x00044d93) input_focus_pane_vc_g6

0x0e85,	// (0x00044d9b) input_focus_pane_vc_g7

0x0e8d,	// (0x00044da3) input_focus_pane_vc_g8

0x0e95,	// (0x00044dab) input_focus_pane_vc_g9

0x09e1,	// (0x000448f7) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00053578) input_focus_pane_vc_g

0x9b42,	// (0x0004da58) data_form_pane_vc_ParamLimits

0x9b42,	// (0x0004da58) data_form_pane_vc

0x9b4e,	// (0x0004da64) form_field_data_pane_vc_g1

0xb8d4,	// (0x0004f7ea) form_field_data_pane_vc_t1_ParamLimits

0xb8d4,	// (0x0004f7ea) form_field_data_pane_vc_t1

0x0dfd,	// (0x00044d13) input_focus_pane_vc_ParamLimits

0x0dfd,	// (0x00044d13) input_focus_pane_vc

0xb8ee,	// (0x0004f804) button_value_adjust_pane_cp3_vc

0xb8f6,	// (0x0004f80c) button_value_adjust_pane_cp5_vc

0xb8fe,	// (0x0004f814) form_field_data_pane_vc_ParamLimits

0xb8fe,	// (0x0004f814) form_field_data_pane_vc

0xb915,	// (0x0004f82b) form_field_data_pane_vc_cp2

0xb91d,	// (0x0004f833) form_field_data_wide_pane_vc_ParamLimits

0xb91d,	// (0x0004f833) form_field_data_wide_pane_vc

0xb933,	// (0x0004f849) form_field_data_wide_pane_vc_cp2

0xb93b,	// (0x0004f851) form_field_popup_pane_vc_ParamLimits

0xb93b,	// (0x0004f851) form_field_popup_pane_vc

0xb952,	// (0x0004f868) form_field_popup_wide_pane_vc_ParamLimits

0xb952,	// (0x0004f868) form_field_popup_wide_pane_vc

0xb968,	// (0x0004f87e) form_field_slider_pane_vc_ParamLimits

0xb968,	// (0x0004f87e) form_field_slider_pane_vc

0xb97b,	// (0x0004f891) form_field_slider_wide_pane_vc_ParamLimits

0xb97b,	// (0x0004f891) form_field_slider_wide_pane_vc

0xb98e,	// (0x0004f8a4) grid_touch_1_pane_ParamLimits

0xb98e,	// (0x0004f8a4) grid_touch_1_pane

0xb99a,	// (0x0004f8b0) grid_touch_2_pane_ParamLimits

0xb99a,	// (0x0004f8b0) grid_touch_2_pane

0x180f,	// (0x00045725) touch_pane_g1_ParamLimits

0x180f,	// (0x00045725) touch_pane_g1

0xb9b2,	// (0x0004f8c8) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0004f8c8) cell_app_pane_cp_wide

0xb9c3,	// (0x0004f8d9) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0004f8d9) grid_popup_fast_wide_pane

0xb9d7,	// (0x0004f8ed) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0004f8ed) scroll_pane_cp19

0x09eb,	// (0x00044901) bg_popup_window_pane_cp20

0xb9eb,	// (0x0004f901) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0004f909) grid_indicator_nsta_pane

0xba05,	// (0x0004f91b) clock_nsta_pane_g1

0xba0e,	// (0x0004f924) clock_nsta_pane_t1

0xba2a,	// (0x0004f940) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0004f940) cell_indicator_nsta_pane

0xba5f,	// (0x0004f975) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0004f983) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x000539ab) cell_indicator_nsta_pane_g

0xba7f,	// (0x0004f995) clock_nsta_pane_cp

0xba88,	// (0x0004f99e) indicator_nsta_pane_cp

0xba92,	// (0x0004f9a8) nsta_clock_indic_pane_g1

0x0a83,	// (0x00044999) grid_indicator_pane

0x7130,	// (0x0004b046) scroll_pane_cp29

0x7362,	// (0x0004b278) indicator_nsta_pane_cp2_ParamLimits

0x7362,	// (0x0004b278) indicator_nsta_pane_cp2

0x0a47,	// (0x0004495d) main_apps_wheel_pane

0x9d66,	// (0x0004dc7c) form_midp_field_text_pane_ParamLimits

0x9eaf,	// (0x0004ddc5) scroll_bar_cp050_ParamLimits

0xbaeb,	// (0x0004fa01) cell_indicator_pane_ParamLimits

0xbaeb,	// (0x0004fa01) cell_indicator_pane

0xbb04,	// (0x0004fa1a) cell_indicator_pane_g1

0xbb0e,	// (0x0004fa24) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0004fa24) grid_wheel_folder_pane

0xbb24,	// (0x0004fa3a) list_wheel_apps_pane_ParamLimits

0xbb24,	// (0x0004fa3a) list_wheel_apps_pane

0xbb35,	// (0x0004fa4b) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0004fa4b) main_apps_wheel_pane_g1

0xbb49,	// (0x0004fa5f) main_apps_wheel_pane_g2_ParamLimits

0xbb49,	// (0x0004fa5f) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x000539c7) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x000539c7) main_apps_wheel_pane_g

0xbb61,	// (0x0004fa77) main_apps_wheel_pane_t1_ParamLimits

0xbb61,	// (0x0004fa77) main_apps_wheel_pane_t1

0xbb84,	// (0x0004fa9a) list_wheel_apps_pane_g1

0xbb8c,	// (0x0004faa2) list_wheel_apps_pane_g2

0xbb94,	// (0x0004faaa) list_wheel_apps_pane_g3

0xbb9e,	// (0x0004fab4) list_wheel_apps_pane_g4

0xbba8,	// (0x0004fabe) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x000539cc) list_wheel_apps_pane_g

0x155e,	// (0x00045474) navi_icon_text_pane

0x7e91,	// (0x0004bda7) aid_fill_nsta

0xbbcb,	// (0x0004fae1) navi_icon_text_pane_g1

0xbbd7,	// (0x0004faed) navi_icon_text_pane_t1

0x1442,	// (0x00045358) list_set_graphic_pane_t1_ParamLimits

0x1442,	// (0x00045358) list_set_graphic_pane_t1

0xa5fa,	// (0x0004e510) popup_midp_note_alarm_window_t6_ParamLimits

0xa5fa,	// (0x0004e510) popup_midp_note_alarm_window_t6

0xa60c,	// (0x0004e522) popup_midp_note_alarm_window_t7_ParamLimits

0xa60c,	// (0x0004e522) popup_midp_note_alarm_window_t7

0xa61e,	// (0x0004e534) popup_midp_note_alarm_window_t8_ParamLimits

0xa61e,	// (0x0004e534) popup_midp_note_alarm_window_t8

0xa630,	// (0x0004e546) popup_midp_note_alarm_window_t9_ParamLimits

0xa630,	// (0x0004e546) popup_midp_note_alarm_window_t9

0xa642,	// (0x0004e558) popup_midp_note_alarm_window_t10_ParamLimits

0xa642,	// (0x0004e558) popup_midp_note_alarm_window_t10

0xa654,	// (0x0004e56a) popup_midp_note_alarm_window_t11_ParamLimits

0xa654,	// (0x0004e56a) popup_midp_note_alarm_window_t11

0xa666,	// (0x0004e57c) scroll_pane_cp17_ParamLimits

0xa666,	// (0x0004e57c) scroll_pane_cp17

0x82e6,	// (0x0004c1fc) volume_small_pane_cp_g1

0x875d,	// (0x0004c673) volume_small_pane_cp_g2

0x8766,	// (0x0004c67c) volume_small_pane_cp_g3

0x876f,	// (0x0004c685) volume_small_pane_cp_g4

0x8778,	// (0x0004c68e) volume_small_pane_cp_g5

0x86a7,	// (0x0004c5bd) volume_small_pane_cp_g6

0x8781,	// (0x0004c697) volume_small_pane_cp_g7

0x878a,	// (0x0004c6a0) volume_small_pane_cp_g8

0x8793,	// (0x0004c6a9) volume_small_pane_cp_g9

0x879c,	// (0x0004c6b2) volume_small_pane_cp_g10

0x16d0,	// (0x000455e6) midp_ticker_pane_g1_ParamLimits

0x16dc,	// (0x000455f2) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00053644) midp_ticker_pane_g_ParamLimits

0x16e8,	// (0x000455fe) midp_ticker_pane_t1_ParamLimits

0x7ea7,	// (0x0004bdbd) aid_fill_nsta_2

0x9e9b,	// (0x0004ddb1) list_form2_midp_pane

0xafae,	// (0x0004eec4) midp_editing_number_pane_ParamLimits

0xafbd,	// (0x0004eed3) midp_ticker_pane_ParamLimits

0xbbe9,	// (0x0004faff) form2_midp_field_pane

0xbc0d,	// (0x0004fb23) scroll_pane_cp51

0xbc2d,	// (0x0004fb43) form2_midp_button_pane_ParamLimits

0xbc2d,	// (0x0004fb43) form2_midp_button_pane

0xbc3f,	// (0x0004fb55) form2_midp_content_pane_ParamLimits

0xbc3f,	// (0x0004fb55) form2_midp_content_pane

0xbc59,	// (0x0004fb6f) form2_midp_field_choice_group_pane

0xbc61,	// (0x0004fb77) form2_midp_field_pane_g1

0xbc69,	// (0x0004fb7f) form2_midp_field_pane_g2

0xbc71,	// (0x0004fb87) form2_midp_field_pane_g3

0xbc79,	// (0x0004fb8f) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x000539f1) form2_midp_field_pane_g

0xbc81,	// (0x0004fb97) form2_midp_gauge_slider_pane

0xbc89,	// (0x0004fb9f) form2_midp_gauge_wait_pane

0xbc91,	// (0x0004fba7) form2_midp_image_pane_ParamLimits

0xbc91,	// (0x0004fba7) form2_midp_image_pane

0xbcac,	// (0x0004fbc2) form2_midp_label_pane_ParamLimits

0xbcac,	// (0x0004fbc2) form2_midp_label_pane

0xbcc5,	// (0x0004fbdb) form2_midp_label_pane_cp_ParamLimits

0xbcc5,	// (0x0004fbdb) form2_midp_label_pane_cp

0xbce6,	// (0x0004fbfc) form2_midp_string_pane_ParamLimits

0xbce6,	// (0x0004fbfc) form2_midp_string_pane

0x5fe2,	// (0x00049ef8) form2_midp_text_pane_ParamLimits

0x5fe2,	// (0x00049ef8) form2_midp_text_pane

0xbcf8,	// (0x0004fc0e) form2_midp_time_pane

0xbd08,	// (0x0004fc1e) input_focus_pane_cp51_ParamLimits

0xbd08,	// (0x0004fc1e) input_focus_pane_cp51

0xbd20,	// (0x0004fc36) form2_midp_label_pane_t1_ParamLimits

0xbd20,	// (0x0004fc36) form2_midp_label_pane_t1

0x5fff,	// (0x00049f15) form2_mdip_text_pane_t1_ParamLimits

0x5fff,	// (0x00049f15) form2_mdip_text_pane_t1

0x601d,	// (0x00049f33) form2_midp_time_pane_t1

0xbd69,	// (0x0004fc7f) form2_midp_gauge_slider_pane_t1

0xbd7b,	// (0x0004fc91) form2_midp_gauge_slider_pane_t2

0xbd8d,	// (0x0004fca3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x000539fa) form2_midp_gauge_slider_pane_t

0xbd9f,	// (0x0004fcb5) form2_midp_slider_pane

0xbdab,	// (0x0004fcc1) form2_midp_gauge_wait_pane_t1

0xbdb9,	// (0x0004fccf) form2_midp_wait_pane_ParamLimits

0xbdb9,	// (0x0004fccf) form2_midp_wait_pane

0xbde4,	// (0x0004fcfa) list_single_2graphic_pane_cp4_ParamLimits

0xbde4,	// (0x0004fcfa) list_single_2graphic_pane_cp4

0x9bb7,	// (0x0004dacd) list_single_midp_graphic_pane_cp_ParamLimits

0x9bb7,	// (0x0004dacd) list_single_midp_graphic_pane_cp

0x09eb,	// (0x00044901) list_highlight_pane_cp20

0xbe0c,	// (0x0004fd22) list_single_2graphic_pane_g1_cp4

0xb3e9,	// (0x0004f2ff) list_single_2graphic_pane_g2_cp4

0xbe14,	// (0x0004fd2a) list_single_2graphic_pane_t1_cp4

0x0a47,	// (0x0004495d) list_highlight_pane_cp21

0xbe23,	// (0x0004fd39) list_single_midp_graphic_pane_g4_cp

0xbe32,	// (0x0004fd48) list_single_midp_graphic_pane_t1_cp

0xbe47,	// (0x0004fd5d) form2_mdip_string_pane_t1_ParamLimits

0xbe47,	// (0x0004fd5d) form2_mdip_string_pane_t1

0x09eb,	// (0x00044901) bg_wml_button_pane_cp2

0x09e1,	// (0x000448f7) form2_midp_image_pane_g1

0x6d2e,	// (0x0004ac44) list_double_large_graphic_pane_g5_ParamLimits

0x6d2e,	// (0x0004ac44) list_double_large_graphic_pane_g5

0x751b,	// (0x0004b431) midp_form_pane_ParamLimits

0x0a47,	// (0x0004495d) main_apps_wheel_pane_ParamLimits

0x7c79,	// (0x0004bb8f) popup_preview_window_ParamLimits

0x7c79,	// (0x0004bb8f) popup_preview_window

0x7e34,	// (0x0004bd4a) popup_touch_info_window_ParamLimits

0x7e34,	// (0x0004bd4a) popup_touch_info_window

0x7e52,	// (0x0004bd68) popup_touch_menu_window_ParamLimits

0x7e52,	// (0x0004bd68) popup_touch_menu_window

0x09d7,	// (0x000448ed) bg_popup_sub_pane_cp6

0xbf4e,	// (0x0004fe64) list_touch_menu_pane

0xbf56,	// (0x0004fe6c) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x0004fe6c) list_single_touch_menu_pane

0xbf6c,	// (0x0004fe82) list_single_touch_menu_pane_t1

0x0a47,	// (0x0004495d) bg_popup_sub_pane_cp7_ParamLimits

0x0a47,	// (0x0004495d) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0004fe90) heading_sub_pane

0xbf82,	// (0x0004fe98) list_touch_info_pane_ParamLimits

0xbf82,	// (0x0004fe98) list_touch_info_pane

0xbf91,	// (0x0004fea7) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x0004fea7) list_single_touch_info_pane

0xbfa3,	// (0x0004feb9) list_single_touch_info_pane_t1

0xbfb1,	// (0x0004fec7) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x00053a08) list_single_touch_info_pane_t

0x16b9,	// (0x000455cf) bg_popup_heading_pane_cp

0xbfbf,	// (0x0004fed5) heading_sub_pane_t1

0x9adc,	// (0x0004d9f2) bg_popup_preview_window_pane_cp_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0004fe90) heading_preview_pane

0xbf82,	// (0x0004fe98) list_preview_pane_ParamLimits

0xbf82,	// (0x0004fe98) list_preview_pane

0xbfcd,	// (0x0004fee3) popup_preview_window_g1

0xbf91,	// (0x0004fea7) list_single_preview_pane_ParamLimits

0xbf91,	// (0x0004fea7) list_single_preview_pane

0xbfd5,	// (0x0004feeb) list_single_preview_pane_g1

0xbfdd,	// (0x0004fef3) list_single_preview_pane_t1

0xbfa3,	// (0x0004feb9) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x00053a0d) list_single_preview_pane_t

0xbfeb,	// (0x0004ff01) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0004ff01) bg_popup_heading_pane_cp2

0xc001,	// (0x0004ff17) heading_preview_pane_g1

0xc009,	// (0x0004ff1f) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0004ff1f) heading_preview_pane_t1

0x0a9a,	// (0x000449b0) soft_indicator_pane_t1_ParamLimits

0x0d79,	// (0x00044c8f) scroll_pane_ParamLimits

0x112b,	// (0x00045041) scroll_sc2_left_pane

0x1122,	// (0x00045038) scroll_sc2_right_pane

0x114a,	// (0x00045060) scroll_bg_pane_g1_ParamLimits

0x115f,	// (0x00045075) scroll_bg_pane_g2_ParamLimits

0x1177,	// (0x0004508d) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x000535cf) scroll_bg_pane_g_ParamLimits

0x114a,	// (0x00045060) scroll_handle_pane_g1_ParamLimits

0x118c,	// (0x000450a2) scroll_handle_pane_g2_ParamLimits

0x1177,	// (0x0004508d) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x000535d6) scroll_handle_pane_g_ParamLimits

0x78fc,	// (0x0004b812) popup_choice_list_window_ParamLimits

0x78fc,	// (0x0004b812) popup_choice_list_window

0x999a,	// (0x0004d8b0) choice_list_pane

0x9a1c,	// (0x0004d932) cell_toolbar_pane_t1

0x9a44,	// (0x0004d95a) toolbar_button_pane_ParamLimits

0xab20,	// (0x0004ea36) ai_gene_pane_1_t2_ParamLimits

0xab20,	// (0x0004ea36) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000537fe) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000537fe) ai_gene_pane_1_t

0xc026,	// (0x0004ff3c) scroll_sc2_left_pane_g1

0xc026,	// (0x0004ff3c) scroll_sc2_right_pane_g1

0x0f3f,	// (0x00044e55) bg_popup_sub_pane_cp10

0xc030,	// (0x0004ff46) list_choice_list_pane

0xc049,	// (0x0004ff5f) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x0004ff5f) list_single_choice_list_pane

0xc05c,	// (0x0004ff72) list_single_choice_list_pane_g1

0x6dc9,	// (0x0004acdf) list_single_choice_list_pane_t1_ParamLimits

0x6dc9,	// (0x0004acdf) list_single_choice_list_pane_t1

0xc064,	// (0x0004ff7a) choice_list_pane_g1

0xc06c,	// (0x0004ff82) choice_list_pane_t1

0x09d7,	// (0x000448ed) input_focus_pane_cp11

0x1097,	// (0x00044fad) title_pane_stacon_g2_ParamLimits

0x1097,	// (0x00044fad) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x000535b5) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x000535b5) title_pane_stacon_g

0x16b9,	// (0x000455cf) cursor_press_pane

0x79a4,	// (0x0004b8ba) popup_fep_hwr_window_ParamLimits

0x79a4,	// (0x0004b8ba) popup_fep_hwr_window

0x7a1c,	// (0x0004b932) popup_fep_vkb_window_ParamLimits

0x7a1c,	// (0x0004b932) popup_fep_vkb_window

0xc07a,	// (0x0004ff90) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x00053a36) fep_vkb_side_pane_g_ParamLimits

0x87de,	// (0x0004c6f4) fep_hwr_candidate_pane_ParamLimits

0x87de,	// (0x0004c6f4) fep_hwr_candidate_pane

0x8808,	// (0x0004c71e) fep_hwr_side_pane_ParamLimits

0x8808,	// (0x0004c71e) fep_hwr_side_pane

0x8828,	// (0x0004c73e) fep_hwr_top_pane_ParamLimits

0x8828,	// (0x0004c73e) fep_hwr_top_pane

0x8840,	// (0x0004c756) fep_hwr_write_pane_ParamLimits

0x8840,	// (0x0004c756) fep_hwr_write_pane

0xfb20,	// (0x00053a36) fep_vkb_side_pane_g

0xc082,	// (0x0004ff98) fep_hwr_top_pane_g1

0xc094,	// (0x0004ffaa) fep_hwr_top_pane_g2

0x886c,	// (0x0004c782) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x00053a12) fep_hwr_top_pane_g

0x8881,	// (0x0004c797) fep_hwr_top_text_pane

0x124f,	// (0x00045165) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0004ffe0) fep_hwr_top_text_pane_t1

0x8977,	// (0x0004c88d) fep_hwr_candidate_pane_g1

0xc30f,	// (0x00050225) fep_vkb_keypad_pane_g3_ParamLimits

0xc30f,	// (0x00050225) fep_vkb_keypad_pane_g3

0xc337,	// (0x0005024d) fep_vkb_keypad_pane_g4_ParamLimits

0xc337,	// (0x0005024d) fep_vkb_keypad_pane_g4

0xc3a6,	// (0x000502bc) fep_vkb_bottom_pane_g2_ParamLimits

0xc3a6,	// (0x000502bc) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x00053a3d) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x00053a3d) fep_vkb_bottom_pane_g

0xc026,	// (0x0004ff3c) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x00053a47) cell_vkb_side_pane_g

0xc431,	// (0x00050347) cell_vkb_side_pane_t1

0xc43f,	// (0x00050355) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x0004ff3c) bg_fep_vkb_candidate_pane_g2

0xc56b,	// (0x00050481) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0004ffee) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0004ffee) aid_size_cell_vkb

0xc56b,	// (0x00050481) cell_vkb_candidate_pane

0x8991,	// (0x0004c8a7) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x0005007c) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x0005007c) fep_vkb_bottom_pane

0xc19c,	// (0x000500b2) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x000500b2) fep_vkb_candidate_pane

0xc1b8,	// (0x000500ce) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x000500ce) fep_vkb_keypad_pane

0xc1f7,	// (0x0005010d) fep_vkb_side_pane_ParamLimits

0xc1f7,	// (0x0005010d) fep_vkb_side_pane

0xc233,	// (0x00050149) fep_vkb_top_pane_ParamLimits

0xc233,	// (0x00050149) fep_vkb_top_pane

0xc268,	// (0x0005017e) fep_vkb_top_pane_g1_ParamLimits

0xc268,	// (0x0005017e) fep_vkb_top_pane_g1

0xc277,	// (0x0005018d) fep_vkb_top_pane_g2_ParamLimits

0xc277,	// (0x0005018d) fep_vkb_top_pane_g2

0xc286,	// (0x0005019c) fep_vkb_top_pane_g3_ParamLimits

0xc286,	// (0x0005019c) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x00053a2d) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x00053a2d) fep_vkb_top_pane_g

0xc2a4,	// (0x000501ba) fep_vkb_top_text_pane_ParamLimits

0xc2a4,	// (0x000501ba) fep_vkb_top_text_pane

0xc2b5,	// (0x000501cb) fep_vkb_side_pane_g1_ParamLimits

0xc2b5,	// (0x000501cb) fep_vkb_side_pane_g1

0xc2fe,	// (0x00050214) grid_vkb_side_pane_ParamLimits

0xc2fe,	// (0x00050214) grid_vkb_side_pane

0x8999,	// (0x0004c8af) bg_popup_fep_shadow_pane_g2

0x89a2,	// (0x0004c8b8) bg_popup_fep_shadow_pane_g3

0x89aa,	// (0x0004c8c0) bg_popup_fep_shadow_pane_g4

0x89b3,	// (0x0004c8c9) bg_popup_fep_shadow_pane_g5

0x89bd,	// (0x0004c8d3) bg_popup_fep_shadow_pane_g6

0x89c5,	// (0x0004c8db) bg_popup_fep_shadow_pane_g7

0x0e75,	// (0x00044d8b) bg_popup_fep_shadow_pane_g8

0xc355,	// (0x0005026b) grid_vkb_keypad_number_pane_ParamLimits

0xc355,	// (0x0005026b) grid_vkb_keypad_number_pane

0xc365,	// (0x0005027b) grid_vkb_keypad_pane_ParamLimits

0xc365,	// (0x0005027b) grid_vkb_keypad_pane

0xc38b,	// (0x000502a1) fep_vkb_bottom_pane_g1_ParamLimits

0xc38b,	// (0x000502a1) fep_vkb_bottom_pane_g1

0xc3b4,	// (0x000502ca) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b4,	// (0x000502ca) grid_vkb_keypad_bottom_left_pane

0xc3c9,	// (0x000502df) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3c9,	// (0x000502df) grid_vkb_keypad_bottom_right_pane

0xc3de,	// (0x000502f4) fep_vkb_top_text_pane_g1

0xc3f9,	// (0x0005030f) fep_vkb_top_text_pane_t1

0xc40e,	// (0x00050324) cell_vkb_side_pane_ParamLimits

0xc40e,	// (0x00050324) cell_vkb_side_pane

0xc026,	// (0x0004ff3c) cell_vkb_side_pane_g1

0xc44d,	// (0x00050363) cell_vkb_keypad_pane_ParamLimits

0xc44d,	// (0x00050363) cell_vkb_keypad_pane

0xc4c2,	// (0x000503d8) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x00053a5a) bg_popup_fep_shadow_pane_g

0xc026,	// (0x0004ff3c) cell_hwr_side_pane_g1

0xc026,	// (0x0004ff3c) cell_hwr_side_pane_g2

0xc4cc,	// (0x000503e2) cell_vkb_keypad_pane_t1

0xc4da,	// (0x000503f0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4da,	// (0x000503f0) cell_vkb_keypad_bottom_left_pane

0xc4f7,	// (0x0005040d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4f7,	// (0x0005040d) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x0004ff3c) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x0004ff3c) cell_vkb_keypad_bottom_right_pane_g1

0xc530,	// (0x00050446) cell_vkb_keypad_number_pane_ParamLimits

0xc530,	// (0x00050446) cell_vkb_keypad_number_pane

0xc54f,	// (0x00050465) cell_vkb_keypad_number_pane_g1

0xc559,	// (0x0005046f) cell_vkb_keypad_number_pane_g2

0xc562,	// (0x00050478) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x00053a4c) cell_vkb_keypad_number_pane_g

0xc4cc,	// (0x000503e2) cell_vkb_keypad_number_pane_t1

0xc586,	// (0x0005049c) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x00053a47) cell_hwr_side_pane_g

0xc59f,	// (0x000504b5) cell_hwr_side_pane_t1

0x89d7,	// (0x0004c8ed) cell_hwr_side_pane_t1_copy1

0xc296,	// (0x000501ac) cell_hwr_candidate_pane_g1

0x89e5,	// (0x0004c8fb) cell_hwr_candidate_pane_t1

0xc026,	// (0x0004ff3c) cell_vkb_candidate_pane_g2

0xc625,	// (0x0005053b) cell_vkb_candidate_pane_t1

0x87a5,	// (0x0004c6bb) bg_popup_fep_shadow_pane_ParamLimits

0x87a5,	// (0x0004c6bb) bg_popup_fep_shadow_pane

0x2e84,	// (0x00046d9a) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x0004ffbc) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x0004ffbc) bg_hwr_side_pane_g1

0x88bd,	// (0x0004c7d3) cell_hwr_side_pane_ParamLimits

0x88bd,	// (0x0004c7d3) cell_hwr_side_pane

0x88f8,	// (0x0004c80e) fep_hwr_write_pane_g1_ParamLimits

0x88f8,	// (0x0004c80e) fep_hwr_write_pane_g1

0x8905,	// (0x0004c81b) fep_hwr_write_pane_g2_ParamLimits

0x8905,	// (0x0004c81b) fep_hwr_write_pane_g2

0x8912,	// (0x0004c828) fep_hwr_write_pane_g3_ParamLimits

0x8912,	// (0x0004c828) fep_hwr_write_pane_g3

0x8920,	// (0x0004c836) fep_hwr_write_pane_g4_ParamLimits

0x8920,	// (0x0004c836) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x00053a19) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x00053a19) fep_hwr_write_pane_g

0x2e84,	// (0x00046d9a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2e84,	// (0x00046d9a) bg_fep_hwr_candidate_pane_g2

0x8935,	// (0x0004c84b) cell_hwr_candidate_pane_ParamLimits

0x8935,	// (0x0004c84b) cell_hwr_candidate_pane

0x8977,	// (0x0004c88d) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x0005001c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x0005001c) bg_popup_fep_shadow_pane_cp2

0xc296,	// (0x000501ac) fep_vkb_top_pane_g4_ParamLimits

0xc296,	// (0x000501ac) fep_vkb_top_pane_g4

0xc2dc,	// (0x000501f2) fep_vkb_side_pane_g2_ParamLimits

0xc2dc,	// (0x000501f2) fep_vkb_side_pane_g2

0x5761,	// (0x00049677) list_setting_pane_t4_ParamLimits

0x5761,	// (0x00049677) list_setting_pane_t4

0x57fb,	// (0x00049711) list_setting_number_pane_t5_ParamLimits

0x57fb,	// (0x00049711) list_setting_number_pane_t5

0x715f,	// (0x0004b075) list_double_heading_pane_cp2_ParamLimits

0x715f,	// (0x0004b075) list_double_heading_pane_cp2

0x246e,	// (0x00046384) list_double_heading_pane_g1_cp2_ParamLimits

0x246e,	// (0x00046384) list_double_heading_pane_g1_cp2

0xc633,	// (0x00050549) list_double_heading_pane_g2_cp2_ParamLimits

0xc633,	// (0x00050549) list_double_heading_pane_g2_cp2

0xc647,	// (0x0005055d) list_double_heading_pane_t1_cp2_ParamLimits

0xc647,	// (0x0005055d) list_double_heading_pane_t1_cp2

0xc65d,	// (0x00050573) list_double_heading_pane_t2_cp2_ParamLimits

0xc65d,	// (0x00050573) list_double_heading_pane_t2_cp2

0x09cf,	// (0x000448e5) aid_value_unit2

0x65c6,	// (0x0004a4dc) popup_preview_fixed_window

0x0b71,	// (0x00044a87) bg_popup_preview_window_pane_cp02

0xc66f,	// (0x00050585) list_preview_fixed_pane

0xc6b5,	// (0x000505cb) list_empty_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_empty_pane_fp

0xc6b5,	// (0x000505cb) list_single_cale_day_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_cale_day_pane_fp

0xc6b5,	// (0x000505cb) list_single_graphic_heading_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_graphic_heading_pane_fp

0xc6b5,	// (0x000505cb) list_single_graphic_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_graphic_pane_fp

0xc6b5,	// (0x000505cb) list_single_heading_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_heading_pane_fp

0xc6b5,	// (0x000505cb) list_single_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_pane_fp

0xc6cb,	// (0x000505e1) list_single_pane_fp_g1_ParamLimits

0xc6cb,	// (0x000505e1) list_single_pane_fp_g1

0x25e0,	// (0x000464f6) list_single_pane_fp_g2_ParamLimits

0x25e0,	// (0x000464f6) list_single_pane_fp_g2

0xc7b8,	// (0x000506ce) list_single_pane_fp_g3_ParamLimits

0xc7b8,	// (0x000506ce) list_single_pane_fp_g3

0xc6d7,	// (0x000505ed) list_single_pane_fp_g4_ParamLimits

0xc6d7,	// (0x000505ed) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x00053a7b) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x00053a7b) list_single_pane_fp_g

0x6030,	// (0x00049f46) list_single_pane_fp_t1_ParamLimits

0x6030,	// (0x00049f46) list_single_pane_fp_t1

0x6047,	// (0x00049f5d) list_single_graphic_pane_fp_g1_ParamLimits

0x6047,	// (0x00049f5d) list_single_graphic_pane_fp_g1

0xc6cb,	// (0x000505e1) list_single_graphic_pane_fp_g2_ParamLimits

0xc6cb,	// (0x000505e1) list_single_graphic_pane_fp_g2

0x25e0,	// (0x000464f6) list_single_graphic_pane_fp_g3_ParamLimits

0x25e0,	// (0x000464f6) list_single_graphic_pane_fp_g3

0xc7b8,	// (0x000506ce) list_single_graphic_pane_fp_g4_ParamLimits

0xc7b8,	// (0x000506ce) list_single_graphic_pane_fp_g4

0xc6d7,	// (0x000505ed) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d7,	// (0x000505ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053a84) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053a84) list_single_graphic_pane_fp_g

0x6053,	// (0x00049f69) list_single_graphic_pane_fp_t1_ParamLimits

0x6053,	// (0x00049f69) list_single_graphic_pane_fp_t1

0x6047,	// (0x00049f5d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6047,	// (0x00049f5d) list_single_graphic_heading_pane_fp_g1

0xc6cb,	// (0x000505e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x000505e1) list_single_graphic_heading_pane_fp_g2

0x25e0,	// (0x000464f6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x25e0,	// (0x000464f6) list_single_graphic_heading_pane_fp_g3

0xc7b8,	// (0x000506ce) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc7b8,	// (0x000506ce) list_single_graphic_heading_pane_fp_g4

0xc6d7,	// (0x000505ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x000505ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053a84) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053a84) list_single_graphic_heading_pane_fp_g

0x6069,	// (0x00049f7f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6069,	// (0x00049f7f) list_single_graphic_heading_pane_fp_t1

0x607f,	// (0x00049f95) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x607f,	// (0x00049f95) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x00053a8f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x00053a8f) list_single_graphic_heading_pane_fp_t

0x6091,	// (0x00049fa7) list_single_cale_day_pane_fp_g1_ParamLimits

0x6091,	// (0x00049fa7) list_single_cale_day_pane_fp_g1

0xc6e3,	// (0x000505f9) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6e3,	// (0x000505f9) list_single_cale_day_pane_fp_g2

0x8a03,	// (0x0004c919) list_single_cale_day_pane_fp_g3_ParamLimits

0x8a03,	// (0x0004c919) list_single_cale_day_pane_fp_g3

0x8a2b,	// (0x0004c941) list_single_cale_day_pane_fp_g4_ParamLimits

0x8a2b,	// (0x0004c941) list_single_cale_day_pane_fp_g4

0x8a4f,	// (0x0004c965) list_single_cale_day_pane_fp_g5_ParamLimits

0x8a4f,	// (0x0004c965) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x00053a94) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x00053a94) list_single_cale_day_pane_fp_g

0x60c9,	// (0x00049fdf) list_single_cale_day_pane_fp_t1_ParamLimits

0x60c9,	// (0x00049fdf) list_single_cale_day_pane_fp_t1

0x60ef,	// (0x0004a005) list_single_cale_day_pane_fp_t2_ParamLimits

0x60ef,	// (0x0004a005) list_single_cale_day_pane_fp_t2

0x6108,	// (0x0004a01e) list_single_cale_day_pane_fp_t3_ParamLimits

0x6108,	// (0x0004a01e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x00053a9f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x00053a9f) list_single_cale_day_pane_fp_t

0xc6cb,	// (0x000505e1) list_empty_pane_fp_g1_ParamLimits

0xc6cb,	// (0x000505e1) list_empty_pane_fp_g1

0x6121,	// (0x0004a037) list_empty_pane_fp_t1

0x612f,	// (0x0004a045) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x00053aa6) list_empty_pane_fp_t

0xc6cb,	// (0x000505e1) list_single_heading_pane_fp_g1_ParamLimits

0xc6cb,	// (0x000505e1) list_single_heading_pane_fp_g1

0x25e0,	// (0x000464f6) list_single_heading_pane_fp_g2_ParamLimits

0x25e0,	// (0x000464f6) list_single_heading_pane_fp_g2

0xc7b8,	// (0x000506ce) list_single_heading_pane_fp_g3_ParamLimits

0xc7b8,	// (0x000506ce) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x00053aab) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x00053aab) list_single_heading_pane_fp_g

0x613d,	// (0x0004a053) list_single_heading_pane_fp_t1_ParamLimits

0x613d,	// (0x0004a053) list_single_heading_pane_fp_t1

0x614f,	// (0x0004a065) list_single_heading_pane_fp_t2_ParamLimits

0x614f,	// (0x0004a065) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x00053ab2) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x00053ab2) list_single_heading_pane_fp_t

0x6e2f,	// (0x0004ad45) aid_size_cell_fast

0x0b54,	// (0x00044a6a) soft_indicator_pane_cp1_t1

0x6e38,	// (0x0004ad4e) cell_app_pane_cp2_ParamLimits

0x6e38,	// (0x0004ad4e) cell_app_pane_cp2

0x87c7,	// (0x0004c6dd) fep_hwr_candidate_drop_down_list_pane

0x2ffc,	// (0x00046f12) fep_hwr_candidate_pane_g3_ParamLimits

0x2ffc,	// (0x00046f12) fep_hwr_candidate_pane_g3

0x3009,	// (0x00046f1f) fep_hwr_candidate_pane_g4_ParamLimits

0x3009,	// (0x00046f1f) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x00053a26) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x00053a26) fep_hwr_candidate_pane_g

0xc18b,	// (0x000500a1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x000500a1) fep_vkb_candidate_drop_down_list_pane

0xc58e,	// (0x000504a4) fep_vkb_candidate_pane_g3

0xc596,	// (0x000504ac) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x00053a53) fep_vkb_candidate_pane_g

0xc296,	// (0x000501ac) cell_hwr_candidate_pane_g1_ParamLimits

0xc5ad,	// (0x000504c3) cell_hwr_candidate_pane_g3_ParamLimits

0xc5ad,	// (0x000504c3) cell_hwr_candidate_pane_g3

0xc5ce,	// (0x000504e4) cell_hwr_candidate_pane_g4_ParamLimits

0xc5ce,	// (0x000504e4) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x00053a6d) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x00053a6d) cell_hwr_candidate_pane_g

0xc5ef,	// (0x00050505) cell_vkb_candidate_pane_g3_ParamLimits

0xc5ef,	// (0x00050505) cell_vkb_candidate_pane_g3

0xc60a,	// (0x00050520) cell_vkb_candidate_pane_g4_ParamLimits

0xc60a,	// (0x00050520) cell_vkb_candidate_pane_g4

0xc6ef,	// (0x00050605) cell_app_pane_cp2_g1_ParamLimits

0xc6ef,	// (0x00050605) cell_app_pane_cp2_g1

0xc70d,	// (0x00050623) cell_app_pane_cp2_g2_ParamLimits

0xc70d,	// (0x00050623) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x00053ab7) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x00053ab7) cell_app_pane_cp2_g

0xc719,	// (0x0005062f) cell_app_pane_cp2_t1_ParamLimits

0xc719,	// (0x0005062f) cell_app_pane_cp2_t1

0x0dfd,	// (0x00044d13) grid_highlight_pane_cp1_ParamLimits

0x0dfd,	// (0x00044d13) grid_highlight_pane_cp1

0x8a73,	// (0x0004c989) cell_hwr_candidate_pane_cp1_ParamLimits

0x8a73,	// (0x0004c989) cell_hwr_candidate_pane_cp1

0xc296,	// (0x000501ac) fep_hwr_candidate_drop_down_list_pane_g1

0xc72b,	// (0x00050641) fep_hwr_candidate_drop_down_list_pane_g2

0xc738,	// (0x0005064e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053abc) fep_hwr_candidate_drop_down_list_pane_g

0x8a92,	// (0x0004c9a8) fep_hwr_candidate_drop_down_list_scroll_pane

0x8a9b,	// (0x0004c9b1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a9b,	// (0x0004c9b1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8aa8,	// (0x0004c9be) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8aa8,	// (0x0004c9be) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8ab5,	// (0x0004c9cb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8ab5,	// (0x0004c9cb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5ef,	// (0x00050505) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ef,	// (0x00050505) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc60a,	// (0x00050520) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc60a,	// (0x00050520) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8ac2,	// (0x0004c9d8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8ac2,	// (0x0004c9d8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8add,	// (0x0004c9f3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8add,	// (0x0004c9f3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8af8,	// (0x0004ca0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8af8,	// (0x0004ca0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x00053ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x00053ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc745,	// (0x0005065b) cell_vkb_candidate_pane_cp1_ParamLimits

0xc745,	// (0x0005065b) cell_vkb_candidate_pane_cp1

0xc296,	// (0x000501ac) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc296,	// (0x000501ac) fep_vkb_candidate_drop_down_list_pane_g1

0xc72b,	// (0x00050641) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc72b,	// (0x00050641) fep_vkb_candidate_drop_down_list_pane_g2

0xc738,	// (0x0005064e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc738,	// (0x0005064e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x00053abc) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x00053abc) fep_vkb_candidate_drop_down_list_pane_g

0xc765,	// (0x0005067b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc765,	// (0x0005067b) fep_vkb_candidate_drop_down_list_scroll_pane

0xc772,	// (0x00050688) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc772,	// (0x00050688) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc77f,	// (0x00050695) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc77f,	// (0x00050695) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc78b,	// (0x000506a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc78b,	// (0x000506a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5ad,	// (0x000504c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5ad,	// (0x000504c3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5ce,	// (0x000504e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ce,	// (0x000504e4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7cc,	// (0x000506e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7cc,	// (0x000506e2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7ed,	// (0x00050703) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7ed,	// (0x00050703) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc80e,	// (0x00050724) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc80e,	// (0x00050724) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x00053ad4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x00053ad4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x66e0,	// (0x0004a5f6) title_pane_g1_ParamLimits

0x66ed,	// (0x0004a603) title_pane_g2_ParamLimits

0xf529,	// (0x0005343f) title_pane_g_ParamLimits

0x1247,	// (0x0004515d) aid_call2_pane

0x123f,	// (0x00045155) aid_call_pane

0x124f,	// (0x00045165) popup_clock_analogue_window_g1

0x124f,	// (0x00045165) popup_clock_analogue_window_g2

0x7140,	// (0x0004b056) popup_clock_analogue_window_g3

0x7149,	// (0x0004b05f) popup_clock_analogue_window_g4

0x09e1,	// (0x000448f7) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x000535e4) popup_clock_analogue_window_g

0x7151,	// (0x0004b067) popup_clock_analogue_window_t1

0x719f,	// (0x0004b0b5) clock_digital_number_pane_ParamLimits

0x719f,	// (0x0004b0b5) clock_digital_number_pane

0x71ab,	// (0x0004b0c1) clock_digital_number_pane_cp02_ParamLimits

0x71ab,	// (0x0004b0c1) clock_digital_number_pane_cp02

0x71b7,	// (0x0004b0cd) clock_digital_number_pane_cp03_ParamLimits

0x71b7,	// (0x0004b0cd) clock_digital_number_pane_cp03

0x71c3,	// (0x0004b0d9) clock_digital_number_pane_cp04_ParamLimits

0x71c3,	// (0x0004b0d9) clock_digital_number_pane_cp04

0x71cf,	// (0x0004b0e5) clock_digital_separator_pane_ParamLimits

0x71cf,	// (0x0004b0e5) clock_digital_separator_pane

0x71db,	// (0x0004b0f1) popup_clock_digital_window_t1_ParamLimits

0x71db,	// (0x0004b0f1) popup_clock_digital_window_t1

0x09e1,	// (0x000448f7) clock_digital_number_pane_g1

0x09e1,	// (0x000448f7) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x000535ef) clock_digital_number_pane_g

0x09e1,	// (0x000448f7) clock_digital_separator_pane_g1

0x09e1,	// (0x000448f7) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x000535ef) clock_digital_separator_pane_g

0x7e91,	// (0x0004bda7) aid_fill_nsta_ParamLimits

0x7fdd,	// (0x0004bef3) indicator_nsta_pane_ParamLimits

0x8156,	// (0x0004c06c) popup_clock_analogue_window

0x8156,	// (0x0004c06c) popup_clock_digital_window

0xb9f3,	// (0x0004f909) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0004f932) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x000539a6) clock_nsta_pane_t

0x706b,	// (0x0004af81) aid_size_max_handle

0x7075,	// (0x0004af8b) aid_size_min_handle

0x16b9,	// (0x000455cf) editor_scroll_pane

0xc829,	// (0x0005073f) ex_editor_pane

0x0f2f,	// (0x00044e45) scroll_pane_cp13

0x0da5,	// (0x00044cbb) scroll_pane_cp14

0x127e,	// (0x00045194) scroll_pane_cp36

0x7173,	// (0x0004b089) list_single_graphic_hl_pane_cp2_ParamLimits

0x7173,	// (0x0004b089) list_single_graphic_hl_pane_cp2

0x5ccb,	// (0x00049be1) list_single_graphic_hl_pane_ParamLimits

0x5ccb,	// (0x00049be1) list_single_graphic_hl_pane

0x6165,	// (0x0004a07b) aid_size_min_hl_cp1

0xc831,	// (0x00050747) list_highlight_pane_cp34_ParamLimits

0xc831,	// (0x00050747) list_highlight_pane_cp34

0xc842,	// (0x00050758) list_single_graphic_hl_pane_g1_ParamLimits

0xc842,	// (0x00050758) list_single_graphic_hl_pane_g1

0x616e,	// (0x0004a084) list_single_graphic_hl_pane_g2_ParamLimits

0x616e,	// (0x0004a084) list_single_graphic_hl_pane_g2

0x616e,	// (0x0004a084) list_single_graphic_hl_pane_g3_ParamLimits

0x616e,	// (0x0004a084) list_single_graphic_hl_pane_g3

0x617a,	// (0x0004a090) list_single_graphic_hl_pane_g4_ParamLimits

0x617a,	// (0x0004a090) list_single_graphic_hl_pane_g4

0x6186,	// (0x0004a09c) list_single_graphic_hl_pane_g5_ParamLimits

0x6186,	// (0x0004a09c) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x00053ae5) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x00053ae5) list_single_graphic_hl_pane_g

0x619a,	// (0x0004a0b0) list_single_graphic_hl_pane_t1_ParamLimits

0x619a,	// (0x0004a0b0) list_single_graphic_hl_pane_t1

0xc84f,	// (0x00050765) aid_size_min_hl_cp2

0xc858,	// (0x0005076e) list_highlight_pane_cp34_cp2_ParamLimits

0xc858,	// (0x0005076e) list_highlight_pane_cp34_cp2

0xc842,	// (0x00050758) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc842,	// (0x00050758) list_single_graphic_hl_pane_g1_cp2

0xc865,	// (0x0005077b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc865,	// (0x0005077b) list_single_graphic_hl_pane_g2_cp2

0xc871,	// (0x00050787) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc871,	// (0x00050787) list_single_graphic_hl_pane_g3_cp2

0x1618,	// (0x0004552e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1618,	// (0x0004552e) list_single_graphic_hl_pane_g4_cp2

0xc87f,	// (0x00050795) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc87f,	// (0x00050795) list_single_graphic_hl_pane_g5_cp2

0x777f,	// (0x0004b695) control_pane_g4_ParamLimits

0x777f,	// (0x0004b695) control_pane_g4

0x0f3f,	// (0x00044e55) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x0004ff46) list_choice_list_pane_ParamLimits

0xc03f,	// (0x0004ff55) scroll_pane_cp23

0x0b71,	// (0x00044a87) bg_popup_preview_window_pane_cp02_ParamLimits

0xc66f,	// (0x00050585) list_preview_fixed_pane_ParamLimits

0xc685,	// (0x0005059b) list_preview_fixed_pane_cp_ParamLimits

0xc685,	// (0x0005059b) list_preview_fixed_pane_cp

0xc691,	// (0x000505a7) popup_preview_fixed_window_g1_ParamLimits

0xc691,	// (0x000505a7) popup_preview_fixed_window_g1

0xc69d,	// (0x000505b3) popup_preview_fixed_window_g2_ParamLimits

0xc69d,	// (0x000505b3) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x00053a74) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x00053a74) popup_preview_fixed_window_g

0x6f47,	// (0x0004ae5d) aid_navi_side_left_pane_ParamLimits

0x6f5c,	// (0x0004ae72) aid_navi_side_right_pane_ParamLimits

0x6f74,	// (0x0004ae8a) navi_icon_pane_stacon_ParamLimits

0x6f88,	// (0x0004ae9e) navi_navi_pane_stacon_ParamLimits

0x6f74,	// (0x0004ae8a) navi_text_pane_stacon_ParamLimits

0x09d7,	// (0x000448ed) main_text_info_pane

0xc8a9,	// (0x000507bf) listscroll_text_info_pane

0xc8b1,	// (0x000507c7) list_text_info_pane_ParamLimits

0xc8b1,	// (0x000507c7) list_text_info_pane

0xc8c0,	// (0x000507d6) scroll_pane_cp24_ParamLimits

0xc8c0,	// (0x000507d6) scroll_pane_cp24

0xc8de,	// (0x000507f4) list_text_info_pane_t1_ParamLimits

0xc8de,	// (0x000507f4) list_text_info_pane_t1

0x7918,	// (0x0004b82e) popup_fast_swap2_window_ParamLimits

0x7918,	// (0x0004b82e) popup_fast_swap2_window

0xc912,	// (0x00050828) aid_size_cell_fast2

0x09d7,	// (0x000448ed) bg_popup_window_pane_cp17

0xc91c,	// (0x00050832) heading_pane_cp2

0xc924,	// (0x0005083a) listscroll_fast2_pane

0xc92c,	// (0x00050842) grid_fast2_pane

0xc936,	// (0x0005084c) listscroll_fast2_pane_g1

0xc93e,	// (0x00050854) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x00053af0) listscroll_fast2_pane_g

0x0f2f,	// (0x00044e45) scroll_pane_cp26

0xc948,	// (0x0005085e) cell_fast2_pane_ParamLimits

0xc948,	// (0x0005085e) cell_fast2_pane

0xc95d,	// (0x00050873) cell_fast2_pane_g1

0xc966,	// (0x0005087c) cell_fast2_pane_g2

0xc96f,	// (0x00050885) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x00053af5) cell_fast2_pane_g

0x0cdc,	// (0x00044bf2) grid_highlight_pane_cp9

0x0cf1,	// (0x00044c07) main_eswt_pane_ParamLimits

0x0cf1,	// (0x00044c07) main_eswt_pane

0xc8d5,	// (0x000507eb) list_single_text_info_pane

0xc977,	// (0x0005088d) eswt_ctrl_button_pane

0xc977,	// (0x0005088d) eswt_ctrl_canvas_pane

0xc97f,	// (0x00050895) eswt_ctrl_combo_pane

0xc977,	// (0x0005088d) eswt_ctrl_default_pane

0xc977,	// (0x0005088d) eswt_ctrl_label_pane

0xc987,	// (0x0005089d) eswt_ctrl_wait_pane

0xc98f,	// (0x000508a5) eswt_shell_pane

0x09d7,	// (0x000448ed) listscroll_eswt_app_pane

0xc9af,	// (0x000508c5) popup_eswt_tasktip_window_ParamLimits

0xc9af,	// (0x000508c5) popup_eswt_tasktip_window

0x9adc,	// (0x0004d9f2) bg_popup_window_pane_cp18

0xc9c8,	// (0x000508de) eswt_control_pane_g1_ParamLimits

0xc9c8,	// (0x000508de) eswt_control_pane_g1

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_ParamLimits

0xc9d5,	// (0x000508eb) eswt_control_pane_g2

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_ParamLimits

0xc9e2,	// (0x000508f8) eswt_control_pane_g3

0xc9ef,	// (0x00050905) eswt_control_pane_g4_ParamLimits

0xc9ef,	// (0x00050905) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x00053afc) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x00053afc) eswt_control_pane_g

0x0dfd,	// (0x00044d13) bg_button_pane_ParamLimits

0x0dfd,	// (0x00044d13) bg_button_pane

0x0cf1,	// (0x00044c07) common_borders_pane_copy2_ParamLimits

0x0cf1,	// (0x00044c07) common_borders_pane_copy2

0xc9fc,	// (0x00050912) control_button_pane_g1_ParamLimits

0xc9fc,	// (0x00050912) control_button_pane_g1

0xca08,	// (0x0005091e) control_button_pane_g2_ParamLimits

0xca08,	// (0x0005091e) control_button_pane_g2

0xca14,	// (0x0005092a) control_button_pane_g3_ParamLimits

0xca14,	// (0x0005092a) control_button_pane_g3

0x0002,

0xfbef,	// (0x00053b05) control_button_pane_g_ParamLimits

0xfbef,	// (0x00053b05) control_button_pane_g

0xca28,	// (0x0005093e) control_button_pane_t1

0xca36,	// (0x0005094c) control_button_pane_t2

0x0001,

0xfbf6,	// (0x00053b0c) control_button_pane_t

0x9a50,	// (0x0004d966) bg_button_pane_g1

0x9a58,	// (0x0004d96e) bg_button_pane_g2

0x9a60,	// (0x0004d976) bg_button_pane_g3

0x9a68,	// (0x0004d97e) bg_button_pane_g4

0x9a70,	// (0x0004d986) bg_button_pane_g5

0x9a78,	// (0x0004d98e) bg_button_pane_g6

0x9a80,	// (0x0004d996) bg_button_pane_g7

0x9a88,	// (0x0004d99e) bg_button_pane_g8

0x9a90,	// (0x0004d9a6) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00053752) bg_button_pane_g

0xbfeb,	// (0x0004ff01) common_borders_pane_ParamLimits

0xbfeb,	// (0x0004ff01) common_borders_pane

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy1_ParamLimits

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy1

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy1_ParamLimits

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy1

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy1_ParamLimits

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy1

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy1_ParamLimits

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy1

0xc026,	// (0x0004ff3c) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0004ff01) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0004ff01) common_borders_pane_cp2

0xbfeb,	// (0x0004ff01) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0004ff01) common_borders_pane_cp3

0xca44,	// (0x0005095a) separator_horizontal_pane

0xca4c,	// (0x00050962) separator_vertical_pane

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy2_ParamLimits

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy2

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy2_ParamLimits

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy2

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy2_ParamLimits

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy2

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy2_ParamLimits

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy2

0x09d7,	// (0x000448ed) common_borders_pane_cp4

0xca55,	// (0x0005096b) separator_horizontal_pane_g1

0xca5e,	// (0x00050974) separator_horizontal_pane_g2

0xca67,	// (0x0005097d) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x00053b11) separator_horizontal_pane_g

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy3_ParamLimits

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy3

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy3_ParamLimits

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy3

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy3_ParamLimits

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy3

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy3_ParamLimits

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy3

0x09d7,	// (0x000448ed) common_borders_pane_cp5

0xca70,	// (0x00050986) separator_vertical_pane_g1

0xca79,	// (0x0005098f) separator_vertical_pane_g2

0xca82,	// (0x00050998) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x00053b18) separator_vertical_pane_g

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy4_ParamLimits

0xc9c8,	// (0x000508de) eswt_control_pane_g1_copy4

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy4_ParamLimits

0xc9d5,	// (0x000508eb) eswt_control_pane_g2_copy4

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy4_ParamLimits

0xc9e2,	// (0x000508f8) eswt_control_pane_g3_copy4

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy4_ParamLimits

0xc9ef,	// (0x00050905) eswt_control_pane_g4_copy4

0xca8b,	// (0x000509a1) eswt_ctrl_combo_button_pane

0xca93,	// (0x000509a9) eswt_ctrl_input_pane

0xca9b,	// (0x000509b1) popup_choice_list_window_cp70

0xcaa3,	// (0x000509b9) eswt_ctrl_input_pane_t1

0x09d7,	// (0x000448ed) input_focus_pane_cp70

0xbfeb,	// (0x0004ff01) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0004ff01) bg_button_pane_cp70

0xcab1,	// (0x000509c7) eswt_ctrl_combo_button_pane_g1

0xcab9,	// (0x000509cf) wait_bar_pane_cp70

0x9adc,	// (0x0004d9f2) bg_popup_window_pane_cp70_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_window_pane_cp70

0xcac1,	// (0x000509d7) popup_eswt_tasktip_window_t1

0xcad7,	// (0x000509ed) wait_bar_pane_cp71_ParamLimits

0xcad7,	// (0x000509ed) wait_bar_pane_cp71

0xcae3,	// (0x000509f9) grid_eswt_app_pane

0x1122,	// (0x00045038) scroll_pane_cp70

0xcaec,	// (0x00050a02) cell_eswt_app_pane_ParamLimits

0xcaec,	// (0x00050a02) cell_eswt_app_pane

0xcb1c,	// (0x00050a32) cell_eswt_app_pane_g1_ParamLimits

0xcb1c,	// (0x00050a32) cell_eswt_app_pane_g1

0xcb4b,	// (0x00050a61) cell_eswt_app_pane_g2_ParamLimits

0xcb4b,	// (0x00050a61) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x00053b1f) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x00053b1f) cell_eswt_app_pane_g

0xcb6f,	// (0x00050a85) cell_eswt_app_pane_t1_ParamLimits

0xcb6f,	// (0x00050a85) cell_eswt_app_pane_t1

0xcba1,	// (0x00050ab7) grid_highlight_pane_cp70_ParamLimits

0xcba1,	// (0x00050ab7) grid_highlight_pane_cp70

0x15b3,	// (0x000454c9) set_content_pane_g1

0x7715,	// (0x0004b62b) status_small_volume_pane

0x8b13,	// (0x0004ca29) status_small_volume_pane_g1

0x8b1b,	// (0x0004ca31) volume_small2_pane

0x8b24,	// (0x0004ca3a) volume_small2_pane_g1

0x8b2d,	// (0x0004ca43) volume_small2_pane_g2

0x8b36,	// (0x0004ca4c) volume_small2_pane_g3

0x8b3f,	// (0x0004ca55) volume_small2_pane_g4

0x8b48,	// (0x0004ca5e) volume_small2_pane_g5

0x8b51,	// (0x0004ca67) volume_small2_pane_g6

0x8b5a,	// (0x0004ca70) volume_small2_pane_g7

0x8b63,	// (0x0004ca79) volume_small2_pane_g8

0x8b6c,	// (0x0004ca82) volume_small2_pane_g9

0x8b75,	// (0x0004ca8b) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x00053b24) volume_small2_pane_g

0xc3de,	// (0x000502f4) fep_vkb_top_text_pane_g1_ParamLimits

0xc3f9,	// (0x0005030f) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a9,	// (0x000505bf) popup_preview_fixed_window_g3_ParamLimits

0xc6a9,	// (0x000505bf) popup_preview_fixed_window_g3

0x7dc7,	// (0x0004bcdd) popup_toolbar_trans_pane

0xae1a,	// (0x0004ed30) aid_height_set_list_ParamLimits

0xae2b,	// (0x0004ed41) aid_size_parent_ParamLimits

0x0f3f,	// (0x00044e55) list_highlight_pane_cp2_ParamLimits

0x15b3,	// (0x000454c9) set_content_pane_g1_ParamLimits

0x5ce9,	// (0x00049bff) list_single_image_pane_ParamLimits

0x5ce9,	// (0x00049bff) list_single_image_pane

0xcbad,	// (0x00050ac3) aid_size_cell_image_ParamLimits

0xcbad,	// (0x00050ac3) aid_size_cell_image

0xcbba,	// (0x00050ad0) grid_single_image_pane_ParamLimits

0xcbba,	// (0x00050ad0) grid_single_image_pane

0x25e0,	// (0x000464f6) list_single_image_pane_g1_ParamLimits

0x25e0,	// (0x000464f6) list_single_image_pane_g1

0xc7b8,	// (0x000506ce) list_single_image_pane_g2_ParamLimits

0xc7b8,	// (0x000506ce) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x00053b39) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x00053b39) list_single_image_pane_g

0xcbc6,	// (0x00050adc) list_single_image_pane_t1_ParamLimits

0xcbc6,	// (0x00050adc) list_single_image_pane_t1

0xcbdc,	// (0x00050af2) cell_image_list_pane_ParamLimits

0xcbdc,	// (0x00050af2) cell_image_list_pane

0xcbf0,	// (0x00050b06) cell_image_list_pane_g1

0xcbf9,	// (0x00050b0f) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x00053b3e) cell_image_list_pane_g

0xcc02,	// (0x00050b18) aid_size_cell_tb_trans_pane

0x0dfd,	// (0x00044d13) bg_tb_trans_pane

0xcc14,	// (0x00050b2a) grid_tb_trans_pane

0x9a50,	// (0x0004d966) bg_tb_trans_pane_g1

0x9a58,	// (0x0004d96e) bg_tb_trans_pane_g2

0x9a60,	// (0x0004d976) bg_tb_trans_pane_g3

0x9a68,	// (0x0004d97e) bg_tb_trans_pane_g4

0x9a70,	// (0x0004d986) bg_tb_trans_pane_g5

0x9a88,	// (0x0004d99e) bg_tb_trans_pane_g6

0x9a90,	// (0x0004d9a6) bg_tb_trans_pane_g7

0x9a78,	// (0x0004d98e) bg_tb_trans_pane_g8

0x9a80,	// (0x0004d996) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x00053b43) bg_tb_trans_pane_g

0xcc28,	// (0x00050b3e) cell_toolbar_trans_pane_ParamLimits

0xcc28,	// (0x00050b3e) cell_toolbar_trans_pane

0xc026,	// (0x0004ff3c) cell_toolbar_trans_pane_g1

0xbbf1,	// (0x0004fb07) list_form2_midp_pane_t1

0xbbff,	// (0x0004fb15) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x000539ec) list_form2_midp_pane_t

0xbc0d,	// (0x0004fb23) scroll_pane_cp51_ParamLimits

0xbdc9,	// (0x0004fcdf) form2_midp_wait_pane_g1

0xbdd2,	// (0x0004fce8) form2_midp_wait_pane_g2

0xbddb,	// (0x0004fcf1) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x00053a01) form2_midp_wait_pane_g

0x0a47,	// (0x0004495d) list_highlight_pane_cp21_ParamLimits

0xbe23,	// (0x0004fd39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe32,	// (0x0004fd48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x8564,	// (0x0004c47a) list_single_2graphic_im_pane_ParamLimits

0x8564,	// (0x0004c47a) list_single_2graphic_im_pane

0xcc4e,	// (0x00050b64) list_single_2graphic_im_pane_g1_ParamLimits

0xcc4e,	// (0x00050b64) list_single_2graphic_im_pane_g1

0xcc5f,	// (0x00050b75) list_single_2graphic_im_pane_g2_ParamLimits

0xcc5f,	// (0x00050b75) list_single_2graphic_im_pane_g2

0xcc6b,	// (0x00050b81) list_single_2graphic_im_pane_g3_ParamLimits

0xcc6b,	// (0x00050b81) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x00053b56) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x00053b56) list_single_2graphic_im_pane_g

0xcc8b,	// (0x00050ba1) list_single_2graphic_im_pane_t1_ParamLimits

0xcc8b,	// (0x00050ba1) list_single_2graphic_im_pane_t1

0xc6b5,	// (0x000505cb) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6b5,	// (0x000505cb) list_single_graphic_2heading_pane_fp

0x6047,	// (0x00049f5d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6047,	// (0x00049f5d) list_single_graphic_2heading_pane_fp_g1

0xc6cb,	// (0x000505e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6cb,	// (0x000505e1) list_single_graphic_2heading_pane_fp_g2

0x25e0,	// (0x000464f6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x25e0,	// (0x000464f6) list_single_graphic_2heading_pane_fp_g3

0xc7b8,	// (0x000506ce) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc7b8,	// (0x000506ce) list_single_graphic_2heading_pane_fp_g4

0xc6d7,	// (0x000505ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d7,	// (0x000505ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x00053a84) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x00053a84) list_single_graphic_2heading_pane_fp_g

0x61b0,	// (0x0004a0c6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x61b0,	// (0x0004a0c6) list_single_graphic_2heading_pane_fp_t1

0x607f,	// (0x00049f95) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x607f,	// (0x00049f95) list_single_graphic_2heading_pane_fp_t2

0x61c6,	// (0x0004a0dc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x61c6,	// (0x0004a0dc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x00053b5f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x00053b5f) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x0004ffc8) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x0004ffc8) fep_hwr_write_pane_g5

0xc0be,	// (0x0004ffd4) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0004ffd4) fep_hwr_write_pane_g6

0xc98f,	// (0x000508a5) eswt_shell_pane_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_window_pane_cp18_ParamLimits

0xc9c0,	// (0x000508d6) heading_pane_cp70

0xcac1,	// (0x000509d7) popup_eswt_tasktip_window_t1_ParamLimits

0x7ee6,	// (0x0004bdfc) aid_touch_tab_arrow_left

0x7ef5,	// (0x0004be0b) aid_touch_tab_arrow_right

0x66fe,	// (0x0004a614) title_pane_g3_ParamLimits

0x66fe,	// (0x0004a614) title_pane_g3

0x0dc5,	// (0x00044cdb) set_value_pane_g1

0x7dc7,	// (0x0004bcdd) popup_toolbar_trans_pane_ParamLimits

0xcc02,	// (0x00050b18) aid_size_cell_tb_trans_pane_ParamLimits

0x0dfd,	// (0x00044d13) bg_tb_trans_pane_ParamLimits

0xcc14,	// (0x00050b2a) grid_tb_trans_pane_ParamLimits

0x0b71,	// (0x00044a87) cont_note_pane_ParamLimits

0x0b71,	// (0x00044a87) cont_note_pane

0x0cf1,	// (0x00044c07) cont_snote2_single_text_pane_ParamLimits

0x0cf1,	// (0x00044c07) cont_snote2_single_text_pane

0x0cf1,	// (0x00044c07) cont_snote2_single_graphic_pane_ParamLimits

0x0cf1,	// (0x00044c07) cont_snote2_single_graphic_pane

0xa0f6,	// (0x0004e00c) cont_note_wait_pane_ParamLimits

0xa0f6,	// (0x0004e00c) cont_note_wait_pane

0xa0f6,	// (0x0004e00c) cont_note_image_pane_ParamLimits

0xa0f6,	// (0x0004e00c) cont_note_image_pane

0xccbc,	// (0x00050bd2) popup_note2_window_g1_ParamLimits

0xccbc,	// (0x00050bd2) popup_note2_window_g1

0xcced,	// (0x00050c03) popup_note2_window_t1_ParamLimits

0xcced,	// (0x00050c03) popup_note2_window_t1

0xcd32,	// (0x00050c48) popup_note2_window_t2_ParamLimits

0xcd32,	// (0x00050c48) popup_note2_window_t2

0xcd77,	// (0x00050c8d) popup_note2_window_t3_ParamLimits

0xcd77,	// (0x00050c8d) popup_note2_window_t3

0xcdbc,	// (0x00050cd2) popup_note2_window_t4_ParamLimits

0xcdbc,	// (0x00050cd2) popup_note2_window_t4

0x0bf5,	// (0x00044b0b) popup_note2_window_t5_ParamLimits

0x0bf5,	// (0x00044b0b) popup_note2_window_t5

0x0004,

0xfc55,	// (0x00053b6b) popup_note2_window_t_ParamLimits

0xfc55,	// (0x00053b6b) popup_note2_window_t

0xcdeb,	// (0x00050d01) popup_note2_image_window_g1_ParamLimits

0xcdeb,	// (0x00050d01) popup_note2_image_window_g1

0xcdf7,	// (0x00050d0d) popup_note2_image_window_g2_ParamLimits

0xcdf7,	// (0x00050d0d) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x00053b76) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x00053b76) popup_note2_image_window_g

0xce09,	// (0x00050d1f) popup_note2_image_window_t1_ParamLimits

0xce09,	// (0x00050d1f) popup_note2_image_window_t1

0xce21,	// (0x00050d37) popup_note2_image_window_t2_ParamLimits

0xce21,	// (0x00050d37) popup_note2_image_window_t2

0xce39,	// (0x00050d4f) popup_note2_image_window_t3_ParamLimits

0xce39,	// (0x00050d4f) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x00053b7b) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x00053b7b) popup_note2_image_window_t

0xa104,	// (0x0004e01a) popup_note2_wait_window_g1_ParamLimits

0xa104,	// (0x0004e01a) popup_note2_wait_window_g1

0xa110,	// (0x0004e026) popup_note2_wait_window_g2_ParamLimits

0xa110,	// (0x0004e026) popup_note2_wait_window_g2

0xa11c,	// (0x0004e032) popup_note2_wait_window_g3_ParamLimits

0xa11c,	// (0x0004e032) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00053734) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00053734) popup_note2_wait_window_g

0xce55,	// (0x00050d6b) popup_note2_wait_window_t1_ParamLimits

0xce55,	// (0x00050d6b) popup_note2_wait_window_t1

0xce73,	// (0x00050d89) popup_note2_wait_window_t2_ParamLimits

0xce73,	// (0x00050d89) popup_note2_wait_window_t2

0xce91,	// (0x00050da7) popup_note2_wait_window_t3_ParamLimits

0xce91,	// (0x00050da7) popup_note2_wait_window_t3

0xcea3,	// (0x00050db9) popup_note2_wait_window_t4_ParamLimits

0xcea3,	// (0x00050db9) popup_note2_wait_window_t4

0x0003,

0xfc6c,	// (0x00053b82) popup_note2_wait_window_t_ParamLimits

0xfc6c,	// (0x00053b82) popup_note2_wait_window_t

0xceb5,	// (0x00050dcb) wait_bar2_pane_ParamLimits

0xceb5,	// (0x00050dcb) wait_bar2_pane

0xcecd,	// (0x00050de3) popup_snote2_single_text_window_g1_ParamLimits

0xcecd,	// (0x00050de3) popup_snote2_single_text_window_g1

0xcef5,	// (0x00050e0b) popup_snote2_single_text_window_t1_ParamLimits

0xcef5,	// (0x00050e0b) popup_snote2_single_text_window_t1

0xcf41,	// (0x00050e57) popup_snote2_single_text_window_t2_ParamLimits

0xcf41,	// (0x00050e57) popup_snote2_single_text_window_t2

0xcf8d,	// (0x00050ea3) popup_snote2_single_text_window_t3_ParamLimits

0xcf8d,	// (0x00050ea3) popup_snote2_single_text_window_t3

0xcfce,	// (0x00050ee4) popup_snote2_single_text_window_t4_ParamLimits

0xcfce,	// (0x00050ee4) popup_snote2_single_text_window_t4

0xd004,	// (0x00050f1a) popup_snote2_single_text_window_t5_ParamLimits

0xd004,	// (0x00050f1a) popup_snote2_single_text_window_t5

0x0004,

0xfc75,	// (0x00053b8b) popup_snote2_single_text_window_t_ParamLimits

0xfc75,	// (0x00053b8b) popup_snote2_single_text_window_t

0xd02f,	// (0x00050f45) popup_snote2_single_graphic_window_g1_ParamLimits

0xd02f,	// (0x00050f45) popup_snote2_single_graphic_window_g1

0xd057,	// (0x00050f6d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd057,	// (0x00050f6d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc80,	// (0x00053b96) popup_snote2_single_graphic_window_g_ParamLimits

0xfc80,	// (0x00053b96) popup_snote2_single_graphic_window_g

0xd07f,	// (0x00050f95) popup_snote2_single_graphic_window_t1_ParamLimits

0xd07f,	// (0x00050f95) popup_snote2_single_graphic_window_t1

0xd0cb,	// (0x00050fe1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0cb,	// (0x00050fe1) popup_snote2_single_graphic_window_t2

0xcf8d,	// (0x00050ea3) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf8d,	// (0x00050ea3) popup_snote2_single_graphic_window_t3

0xcfce,	// (0x00050ee4) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfce,	// (0x00050ee4) popup_snote2_single_graphic_window_t4

0xd004,	// (0x00050f1a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd004,	// (0x00050f1a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc85,	// (0x00053b9b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc85,	// (0x00053b9b) popup_snote2_single_graphic_window_t

0xbaca,	// (0x0004f9e0) clock_nsta_pane_cp2_t1

0xbaca,	// (0x0004f9e0) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x000539c2) clock_nsta_pane_cp2_t

0x5917,	// (0x0004982d) form_field_data_wide_pane_g1_ParamLimits

0x0e0b,	// (0x00044d21) form_field_data_wide_pane_g2_ParamLimits

0x0e0b,	// (0x00044d21) form_field_data_wide_pane_g2

0x0e17,	// (0x00044d2d) form_field_data_wide_pane_g3_ParamLimits

0x0e17,	// (0x00044d2d) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00053567) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00053567) form_field_data_wide_pane_g

0xb9a6,	// (0x0004f8bc) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0004f8bc) grid_touch_3_pane

0xd117,	// (0x0005102d) cell_touch_3_pane_ParamLimits

0xd117,	// (0x0005102d) cell_touch_3_pane

0xc026,	// (0x0004ff3c) cell_touch_3_pane_g1

0xc026,	// (0x0004ff3c) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x00053a47) cell_touch_3_pane_g

0x0c27,	// (0x00044b3d) cont_query_data_pane

0x0c2f,	// (0x00044b45) cont_query_data_pane_cp1

0xd145,	// (0x0005105b) button_value_adjust_pane_cp7

0xd14d,	// (0x00051063) query_popup_pane_cp3

0x12b0,	// (0x000451c6) bg_popup_sub_pane_cp22_ParamLimits

0x7255,	// (0x0004b16b) navi_navi_volume_pane_cp2

0x726d,	// (0x0004b183) popup_side_volume_key_window_g2

0x7279,	// (0x0004b18f) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x000535fd) popup_side_volume_key_window_g

0x7293,	// (0x0004b1a9) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00053604) popup_side_volume_key_window_t

0x74d3,	// (0x0004b3e9) popup_side_volume_key_window_ParamLimits

0x6d22,	// (0x0004ac38) list_double_graphic_pane_g4_ParamLimits

0x6d22,	// (0x0004ac38) list_double_graphic_pane_g4

0x85a3,	// (0x0004c4b9) list_single_2heading_msg_pane_ParamLimits

0x85a3,	// (0x0004c4b9) list_single_2heading_msg_pane

0x8b7e,	// (0x0004ca94) list_single_2heading_msg_pane_g1_ParamLimits

0x8b7e,	// (0x0004ca94) list_single_2heading_msg_pane_g1

0x6cc3,	// (0x0004abd9) list_single_2heading_msg_pane_g2_ParamLimits

0x6cc3,	// (0x0004abd9) list_single_2heading_msg_pane_g2

0x8b8a,	// (0x0004caa0) list_single_2heading_msg_pane_g3_ParamLimits

0x8b8a,	// (0x0004caa0) list_single_2heading_msg_pane_g3

0x8b96,	// (0x0004caac) list_single_2heading_msg_pane_g4_ParamLimits

0x8b96,	// (0x0004caac) list_single_2heading_msg_pane_g4

0x0003,

0xfc90,	// (0x00053ba6) list_single_2heading_msg_pane_g_ParamLimits

0xfc90,	// (0x00053ba6) list_single_2heading_msg_pane_g

0x61e6,	// (0x0004a0fc) list_single_2heading_msg_pane_t1_ParamLimits

0x61e6,	// (0x0004a0fc) list_single_2heading_msg_pane_t1

0x620e,	// (0x0004a124) list_single_2heading_msg_pane_t2_ParamLimits

0x620e,	// (0x0004a124) list_single_2heading_msg_pane_t2

0x623d,	// (0x0004a153) list_single_2heading_msg_pane_t3_ParamLimits

0x623d,	// (0x0004a153) list_single_2heading_msg_pane_t3

0x6276,	// (0x0004a18c) list_single_2heading_msg_pane_t4_ParamLimits

0x6276,	// (0x0004a18c) list_single_2heading_msg_pane_t4

0x0003,

0xfc99,	// (0x00053baf) list_single_2heading_msg_pane_t_ParamLimits

0xfc99,	// (0x00053baf) list_single_2heading_msg_pane_t

0x09f5,	// (0x0004490b) title_pane_g4_ParamLimits

0x09f5,	// (0x0004490b) title_pane_g4

0x6e98,	// (0x0004adae) title_pane_stacon_g3_ParamLimits

0x6e98,	// (0x0004adae) title_pane_stacon_g3

0xcc7f,	// (0x00050b95) list_single_2graphic_im_pane_g4_ParamLimits

0xcc7f,	// (0x00050b95) list_single_2graphic_im_pane_g4

0xab3d,	// (0x0004ea53) popup_side_volume_key_window_cp

0xb2fc,	// (0x0004f212) main_idle_act2_pane_t1

0x81e6,	// (0x0004c0fc) toolbar_button_pane_g10

0x6cb9,	// (0x0004abcf) popup_toolbar_window_cp1

0xbabb,	// (0x0004f9d1) clock_nsta_pane_cp_t1

0xbabb,	// (0x0004f9d1) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x000539bd) clock_nsta_pane_cp_t

0x7255,	// (0x0004b16b) navi_navi_volume_pane_cp2_ParamLimits

0x7261,	// (0x0004b177) popup_side_volume_key_window_g1_ParamLimits

0x726d,	// (0x0004b183) popup_side_volume_key_window_g2_ParamLimits

0x7279,	// (0x0004b18f) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x000535fd) popup_side_volume_key_window_g_ParamLimits

0x87b3,	// (0x0004c6c9) fep_hwr_aid_pane

0x2e84,	// (0x00046d9a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x0004ff98) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x0004ffaa) fep_hwr_top_pane_g2_ParamLimits

0x886c,	// (0x0004c782) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x00053a12) fep_hwr_top_pane_g_ParamLimits

0x8881,	// (0x0004c797) fep_hwr_top_text_pane_ParamLimits

0xa900,	// (0x0004e816) aid_touch_tab_arrow_arrow_2

0xa909,	// (0x0004e81f) aid_touch_tab_arrow_left_2

0x87c7,	// (0x0004c6dd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x87fe,	// (0x0004c714) fep_hwr_prediction_pane

0xc1ed,	// (0x00050103) fep_vkb_prediction_pane

0xc2ea,	// (0x00050200) fep_vkb_side_pane_g3_ParamLimits

0xc2ea,	// (0x00050200) fep_vkb_side_pane_g3

0xc296,	// (0x000501ac) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc72b,	// (0x00050641) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc738,	// (0x0005064e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x00053abc) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd172,	// (0x00051088) fep_hwr_prediction_pane_g1

0x8bae,	// (0x0004cac4) fep_hwr_prediction_pane_g2

0x8bb6,	// (0x0004cacc) fep_hwr_prediction_pane_g3

0x8bbe,	// (0x0004cad4) fep_hwr_prediction_pane_g4

0x0003,

0xfca2,	// (0x00053bb8) fep_hwr_prediction_pane_g

0xd172,	// (0x00051088) fep_vkb_prediction_pane_g1

0xd17c,	// (0x00051092) fep_vkb_prediction_pane_g2

0xd184,	// (0x0005109a) fep_vkb_prediction_pane_g3

0xd18c,	// (0x000510a2) fep_vkb_prediction_pane_g4

0x0003,

0xfcab,	// (0x00053bc1) fep_vkb_prediction_pane_g

0x84c0,	// (0x0004c3d6) slider_set_pane_g3

0x84d4,	// (0x0004c3ea) slider_set_pane_g4

0x84ec,	// (0x0004c402) slider_set_pane_g5

0x84c0,	// (0x0004c3d6) slider_set_pane_g6

0x8502,	// (0x0004c418) slider_set_pane_g7

0xaf8c,	// (0x0004eea2) slider_form_pane_g3

0xaf95,	// (0x0004eeab) slider_form_pane_g4

0xaf9d,	// (0x0004eeb3) slider_form_pane_g5

0xaf8c,	// (0x0004eea2) slider_form_pane_g6

0xafa5,	// (0x0004eebb) slider_form_pane_g7

0xb5a8,	// (0x0004f4be) slider_set_pane_vc_g3

0xb5b1,	// (0x0004f4c7) slider_set_pane_vc_g4

0xb5ba,	// (0x0004f4d0) slider_set_pane_vc_g5

0xb5a8,	// (0x0004f4be) slider_set_pane_vc_g6

0xb5c3,	// (0x0004f4d9) slider_set_pane_vc_g7

0xb779,	// (0x0004f68f) slider_form_pane_vc_g1

0xb782,	// (0x0004f698) slider_form_pane_vc_g2

0xb78b,	// (0x0004f6a1) slider_form_pane_vc_g3

0xb779,	// (0x0004f68f) slider_form_pane_vc_g4

0xb794,	// (0x0004f6aa) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005398f) slider_form_pane_vc_g

0x09d7,	// (0x000448ed) main_idle_act3_pane

0xd194,	// (0x000510aa) ai3_links_pane

0xd19d,	// (0x000510b3) popup_ai3_data_window_ParamLimits

0xd19d,	// (0x000510b3) popup_ai3_data_window

0x09d7,	// (0x000448ed) grid_ai3_links_pane

0xd1b5,	// (0x000510cb) cell_ai3_links_pane_ParamLimits

0xd1b5,	// (0x000510cb) cell_ai3_links_pane

0xd1cd,	// (0x000510e3) bg_popup_sub_pane_cp11

0xd1da,	// (0x000510f0) cell_ai3_links_pane_g1

0x09d7,	// (0x000448ed) bg_popup_sub_pane_cp12

0xd1ff,	// (0x00051115) heading_ai3_data_pane

0xd207,	// (0x0005111d) list_ai3_gene_pane

0xd213,	// (0x00051129) popup_ai3_data_window_g1

0xd21b,	// (0x00051131) heading_ai3_data_pane_g1

0xd223,	// (0x00051139) heading_ai3_data_pane_t1

0xd231,	// (0x00051147) list_double_ai3_gene_pane_ParamLimits

0xd231,	// (0x00051147) list_double_ai3_gene_pane

0xd23e,	// (0x00051154) list_single_ai3_gene_pane_ParamLimits

0xd23e,	// (0x00051154) list_single_ai3_gene_pane

0xbfeb,	// (0x0004ff01) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0004ff01) list_highlight_pane_cp7

0xd24b,	// (0x00051161) list_single_a13_gene_pane_t1_ParamLimits

0xd24b,	// (0x00051161) list_single_a13_gene_pane_t1

0xd262,	// (0x00051178) list_single_ai3_gene_pane_g1

0xd26b,	// (0x00051181) list_single_ai3_gene_pane_g2

0x0001,

0xfcb4,	// (0x00053bca) list_single_ai3_gene_pane_g

0xd273,	// (0x00051189) list_double_ai3_gene_pane_g1_ParamLimits

0xd273,	// (0x00051189) list_double_ai3_gene_pane_g1

0xd27f,	// (0x00051195) list_double_ai3_gene_pane_t1_ParamLimits

0xd27f,	// (0x00051195) list_double_ai3_gene_pane_t1

0xd29b,	// (0x000511b1) list_double_ai3_gene_pane_t2_ParamLimits

0xd29b,	// (0x000511b1) list_double_ai3_gene_pane_t2

0xd2b0,	// (0x000511c6) list_double_ai3_gene_pane_t3_ParamLimits

0xd2b0,	// (0x000511c6) list_double_ai3_gene_pane_t3

0x0002,

0xfcb9,	// (0x00053bcf) list_double_ai3_gene_pane_t_ParamLimits

0xfcb9,	// (0x00053bcf) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x61dc,	// (0x0004a0f2) aid_size_min_col_2

0xd15e,	// (0x00051074) aid_size_min_msg_ParamLimits

0xd15e,	// (0x00051074) aid_size_min_msg

0xc3ea,	// (0x00050300) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ea,	// (0x00050300) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x00053a42) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x00053a42) fep_vkb_top_text_pane_g

0x09d7,	// (0x000448ed) main_hc_apps_shell_pane

0xd2cd,	// (0x000511e3) grid_hc_apps_pane_ParamLimits

0xd2cd,	// (0x000511e3) grid_hc_apps_pane

0xd2df,	// (0x000511f5) list_hc_apps_pane

0xd2e7,	// (0x000511fd) scroll_pane_cp37_ParamLimits

0xd2e7,	// (0x000511fd) scroll_pane_cp37

0xd2f3,	// (0x00051209) cell_hc_apps_pane_ParamLimits

0xd2f3,	// (0x00051209) cell_hc_apps_pane

0xd3a1,	// (0x000512b7) cell_hc_apps_pane_g1_ParamLimits

0xd3a1,	// (0x000512b7) cell_hc_apps_pane_g1

0xd3d1,	// (0x000512e7) cell_hc_apps_pane_g2_ParamLimits

0xd3d1,	// (0x000512e7) cell_hc_apps_pane_g2

0xd3ed,	// (0x00051303) cell_hc_apps_pane_g3_ParamLimits

0xd3ed,	// (0x00051303) cell_hc_apps_pane_g3

0x0002,

0xfcc0,	// (0x00053bd6) cell_hc_apps_pane_g_ParamLimits

0xfcc0,	// (0x00053bd6) cell_hc_apps_pane_g

0xd40f,	// (0x00051325) cell_hc_apps_pane_t1_ParamLimits

0xd40f,	// (0x00051325) cell_hc_apps_pane_t1

0x0b71,	// (0x00044a87) grid_highlight_pane_cp10_ParamLimits

0x0b71,	// (0x00044a87) grid_highlight_pane_cp10

0xd44f,	// (0x00051365) list_single_hc_apps_pane_ParamLimits

0xd44f,	// (0x00051365) list_single_hc_apps_pane

0xd4b2,	// (0x000513c8) list_single_hc_apps_pane_g1

0x8bc6,	// (0x0004cadc) list_single_hc_apps_pane_g2

0x0001,

0xfcc7,	// (0x00053bdd) list_single_hc_apps_pane_g

0x8bdf,	// (0x0004caf5) list_single_hc_apps_pane_g2_copy1

0x629b,	// (0x0004a1b1) list_single_hc_apps_pane_t1

0x0a47,	// (0x0004495d) bg_set_opt_pane_cp_ParamLimits

0x67ae,	// (0x0004a6c4) setting_slider_pane_t1_ParamLimits

0x67c7,	// (0x0004a6dd) setting_slider_pane_t2_ParamLimits

0x67e1,	// (0x0004a6f7) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005344f) setting_slider_pane_t_ParamLimits

0x67f9,	// (0x0004a70f) slider_set_pane_ParamLimits

0x7793,	// (0x0004b6a9) control_pane_g5_ParamLimits

0x7793,	// (0x0004b6a9) control_pane_g5

0xaddf,	// (0x0004ecf5) slider_set_pane_g1_ParamLimits

0x84b4,	// (0x0004c3ca) slider_set_pane_g2_ParamLimits

0x84c0,	// (0x0004c3d6) slider_set_pane_g3_ParamLimits

0x84d4,	// (0x0004c3ea) slider_set_pane_g4_ParamLimits

0x84ec,	// (0x0004c402) slider_set_pane_g5_ParamLimits

0x84c0,	// (0x0004c3d6) slider_set_pane_g6_ParamLimits

0x8502,	// (0x0004c418) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00053850) slider_set_pane_g_ParamLimits

0x155e,	// (0x00045474) navi_icon_text_pane_ParamLimits

0x7ea7,	// (0x0004bdbd) aid_fill_nsta_2_ParamLimits

0x7ee6,	// (0x0004bdfc) aid_touch_tab_arrow_left_ParamLimits

0x7ef5,	// (0x0004be0b) aid_touch_tab_arrow_right_ParamLimits

0x7f62,	// (0x0004be78) clock_nsta_pane_ParamLimits

0xa8e2,	// (0x0004e7f8) navi_icon_pane_g1_ParamLimits

0xa8ee,	// (0x0004e804) navi_text_pane_t1_ParamLimits

0xbbcb,	// (0x0004fae1) navi_icon_text_pane_g1_ParamLimits

0xbbd7,	// (0x0004faed) navi_icon_text_pane_t1_ParamLimits

0xd4b2,	// (0x000513c8) list_single_hc_apps_pane_g1_ParamLimits

0x8bc6,	// (0x0004cadc) list_single_hc_apps_pane_g2_ParamLimits

0xfcc7,	// (0x00053bdd) list_single_hc_apps_pane_g_ParamLimits

0x8bdf,	// (0x0004caf5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x629b,	// (0x0004a1b1) list_single_hc_apps_pane_t1_ParamLimits

0x65f2,	// (0x0004a508) popup_toolbar2_fixed_window_ParamLimits

0x65f2,	// (0x0004a508) popup_toolbar2_fixed_window

0x7dbd,	// (0x0004bcd3) popup_toolbar2_float_window

0x09d7,	// (0x000448ed) bg_popup_sub_pane_cp27

0xd4cb,	// (0x000513e1) grid_toolbar2_float_pane

0x09d7,	// (0x000448ed) bg_popup_sub_pane_cp26

0xd4cb,	// (0x000513e1) grid_toolbar2_fixed_pane

0xd4d3,	// (0x000513e9) cell_toolbar2_fixed_pane_ParamLimits

0xd4d3,	// (0x000513e9) cell_toolbar2_fixed_pane

0xd4e3,	// (0x000513f9) cell_toolbar2_fixed_pane_g1

0x99d0,	// (0x0004d8e6) toolbar2_fixed_button_pane

0x9a50,	// (0x0004d966) toolbar2_fixed_button_pane_g1

0x9a58,	// (0x0004d96e) toolbar2_fixed_button_pane_g2

0x9a60,	// (0x0004d976) toolbar2_fixed_button_pane_g3

0x9a68,	// (0x0004d97e) toolbar2_fixed_button_pane_g4

0x9a70,	// (0x0004d986) toolbar2_fixed_button_pane_g5

0x9a78,	// (0x0004d98e) toolbar2_fixed_button_pane_g6

0x9a80,	// (0x0004d996) toolbar2_fixed_button_pane_g7

0x9a88,	// (0x0004d99e) toolbar2_fixed_button_pane_g8

0x9a90,	// (0x0004d9a6) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00053752) toolbar2_fixed_button_pane_g

0xd4ec,	// (0x00051402) cell_toolbar2_float_pane_ParamLimits

0xd4ec,	// (0x00051402) cell_toolbar2_float_pane

0xd4fd,	// (0x00051413) cell_toolbar2_float_pane_g1

0x99d0,	// (0x0004d8e6) toolbar2_fixed_button_pane_cp

0xc154,	// (0x0005006a) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x0005006a) fep_vkb_accented_list_pane

0x89cf,	// (0x0004c8e5) bg_popup_fep_shadow_pane_g9

0x16b9,	// (0x000455cf) bg_popup_fep_shadow_pane_cp3

0x0f16,	// (0x00044e2c) list_accented_list_pane

0xd506,	// (0x0005141c) list_single_accented_list_pane_ParamLimits

0xd506,	// (0x0005141c) list_single_accented_list_pane

0x16b9,	// (0x000455cf) list_highlight_pane_cp10

0xd517,	// (0x0005142d) list_single_accented_list_pane_t1

0x7d0d,	// (0x0004bc23) popup_slider_window_ParamLimits

0x7d0d,	// (0x0004bc23) popup_slider_window

0xd155,	// (0x0005106b) aid_indentation_list_msg

0xd5d5,	// (0x000514eb) bg_popup_window_pane_cp19

0xd63d,	// (0x00051553) popup_slider_window_g1

0xd659,	// (0x0005156f) popup_slider_window_g2

0xd675,	// (0x0005158b) popup_slider_window_g3

0x0005,

0xfccc,	// (0x00053be2) popup_slider_window_g

0xd6db,	// (0x000515f1) popup_slider_window_t1

0xd74f,	// (0x00051665) small_volume_slider_vertical_pane

0xc026,	// (0x0004ff3c) small_volume_slider_vertical_pane_g1

0xc026,	// (0x0004ff3c) small_volume_slider_vertical_pane_g2

0xd76b,	// (0x00051681) small_volume_slider_vertical_pane_g3

0x0002,

0xfcde,	// (0x00053bf4) small_volume_slider_vertical_pane_g

0x63c2,	// (0x0004a2d8) area_side_right_pane_ParamLimits

0x63c2,	// (0x0004a2d8) area_side_right_pane

0x8bfb,	// (0x0004cb11) aid_size_side_button_ParamLimits

0x8bfb,	// (0x0004cb11) aid_size_side_button

0x8c0f,	// (0x0004cb25) grid_sctrl_middle_pane_ParamLimits

0x8c0f,	// (0x0004cb25) grid_sctrl_middle_pane

0x8c2e,	// (0x0004cb44) sctrl_sk_bottom_pane

0x8c3f,	// (0x0004cb55) sctrl_sk_top_pane

0x8c51,	// (0x0004cb67) aid_touch_sctrl_top

0x0b71,	// (0x00044a87) bg_sctrl_sk_pane_ParamLimits

0x0b71,	// (0x00044a87) bg_sctrl_sk_pane

0x8c5e,	// (0x0004cb74) sctrl_sk_top_pane_g1

0x8c6b,	// (0x0004cb81) sctrl_sk_top_pane_t1

0x8c51,	// (0x0004cb67) aid_touch_sctrl_bottom

0x0b71,	// (0x00044a87) bg_sctrl_sk_pane_cp_ParamLimits

0x0b71,	// (0x00044a87) bg_sctrl_sk_pane_cp

0x8c86,	// (0x0004cb9c) sctrl_sk_bottom_pane_g1

0x8c6b,	// (0x0004cb81) sctrl_sk_bottom_pane_t1

0x8c8f,	// (0x0004cba5) cell_sctrl_middle_pane_ParamLimits

0x8c8f,	// (0x0004cba5) cell_sctrl_middle_pane

0x8caa,	// (0x0004cbc0) aid_touch_sctrl_middle_ParamLimits

0x8caa,	// (0x0004cbc0) aid_touch_sctrl_middle

0x0dfd,	// (0x00044d13) bg_sctrl_middle_pane_ParamLimits

0x0dfd,	// (0x00044d13) bg_sctrl_middle_pane

0xc296,	// (0x000501ac) cell_sctrl_middle_pane_g1_ParamLimits

0xc296,	// (0x000501ac) cell_sctrl_middle_pane_g1

0x8cbc,	// (0x0004cbd2) cell_sctrl_middle_pane_g2_ParamLimits

0x8cbc,	// (0x0004cbd2) cell_sctrl_middle_pane_g2

0x0001,

0xfcea,	// (0x00053c00) cell_sctrl_middle_pane_g_ParamLimits

0xfcea,	// (0x00053c00) cell_sctrl_middle_pane_g

0x9a50,	// (0x0004d966) bg_sctrl_middle_pane_g1

0x9a58,	// (0x0004d96e) bg_sctrl_middle_pane_g2

0x9a60,	// (0x0004d976) bg_sctrl_middle_pane_g3

0x9a68,	// (0x0004d97e) bg_sctrl_middle_pane_g4

0x9a70,	// (0x0004d986) bg_sctrl_middle_pane_g5

0x9a78,	// (0x0004d98e) bg_sctrl_middle_pane_g6

0x9a80,	// (0x0004d996) bg_sctrl_middle_pane_g7

0x9a88,	// (0x0004d99e) bg_sctrl_middle_pane_g8

0x0007,

0xfcef,	// (0x00053c05) bg_sctrl_middle_pane_g

0x9a90,	// (0x0004d9a6) bg_sctrl_middle_pane_g8_copy1

0x9a50,	// (0x0004d966) bg_sctrl_sk_pane_g1

0x9a58,	// (0x0004d96e) bg_sctrl_sk_pane_g2

0x9a60,	// (0x0004d976) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00053752) bg_sctrl_sk_pane_g

0x0d3f,	// (0x00044c55) aid_size_touch_scroll_bar

0x9a68,	// (0x0004d97e) bg_sctrl_sk_pane_g4

0x9a70,	// (0x0004d986) bg_sctrl_sk_pane_g5

0x9a78,	// (0x0004d98e) bg_sctrl_sk_pane_g6

0x9a80,	// (0x0004d996) bg_sctrl_sk_pane_g7

0x9a88,	// (0x0004d99e) bg_sctrl_sk_pane_g8

0x9a90,	// (0x0004d9a6) bg_sctrl_sk_pane_g9

0x7976,	// (0x0004b88c) popup_fep_china_hwr2_fs_candidate_window

0x7980,	// (0x0004b896) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7980,	// (0x0004b896) popup_fep_china_hwr2_fs_control_window

0xc296,	// (0x000501ac) sctrl_sk_top_pane_g2

0x0001,

0xfce5,	// (0x00053bfb) sctrl_sk_top_pane_g

0xd774,	// (0x0005168a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd774,	// (0x0005168a) aid_fep_china_hwr2_fs_cell

0xd786,	// (0x0005169c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd786,	// (0x0005169c) bg_popup_fep_shadow_pane_cp4

0xd79d,	// (0x000516b3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd79d,	// (0x000516b3) bg_popup_fep_shadow_pane_cp5

0xd7af,	// (0x000516c5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7af,	// (0x000516c5) popup_fep_china_hwr2_fs_control_bar_grid

0xd7bf,	// (0x000516d5) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7c7,	// (0x000516dd) aid_fep_china_hwr2_fs_candi_cell

0x09d7,	// (0x000448ed) bg_popup_fep_shadow_pane_cp6

0xd7d1,	// (0x000516e7) popup_fep_china_hwr2_fs_candidate_grid

0xd7db,	// (0x000516f1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7db,	// (0x000516f1) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x0004ff3c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7f3,	// (0x00051709) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7f3,	// (0x00051709) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd801,	// (0x00051717) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd801,	// (0x00051717) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd00,	// (0x00053c16) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd00,	// (0x00053c16) cell_fep_china_hwr2_fs_funtion_grid_g

0xd817,	// (0x0005172d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd817,	// (0x0005172d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd82c,	// (0x00051742) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd82c,	// (0x00051742) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd05,	// (0x00053c1b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd05,	// (0x00053c1b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd848,	// (0x0005175e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd850,	// (0x00051766) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd858,	// (0x0005176e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0a,	// (0x00053c20) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd860,	// (0x00051776) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd860,	// (0x00051776) cell_fep_china_hwr2_fs_candidate_grid

0xd879,	// (0x0005178f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd881,	// (0x00051797) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x0004ff3c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x0004ff3c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x00053a47) cell_fep_china_hwr2_fs_candidate_grid_g

0xd889,	// (0x0005179f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f75,	// (0x0004be8b) clock_nsta_pane_cp_24_ParamLimits

0x7f75,	// (0x0004be8b) clock_nsta_pane_cp_24

0x7ff3,	// (0x0004bf09) indicator_nsta_pane_cp_24_ParamLimits

0x7ff3,	// (0x0004bf09) indicator_nsta_pane_cp_24

0xa75e,	// (0x0004e674) heading_pane_g1

0x0001,

0xf8a1,	// (0x000537b7) heading_pane_g

0xb145,	// (0x0004f05b) grid_sct_catagory_button_pane

0xb175,	// (0x0004f08b) scroll_pane_cp5_ParamLimits

0xbc19,	// (0x0004fb2f) button_value_adjust_pane_cp5_ParamLimits

0xbc19,	// (0x0004fb2f) button_value_adjust_pane_cp5

0xbcf8,	// (0x0004fc0e) form2_midp_time_pane_ParamLimits

0xd897,	// (0x000517ad) cell_sct_catagory_button_pane_ParamLimits

0xd897,	// (0x000517ad) cell_sct_catagory_button_pane

0xbfeb,	// (0x0004ff01) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0004ff01) bg_button_pane_cp01

0xc026,	// (0x0004ff3c) cell_sct_catagory_button_pane_g1

0x7d4c,	// (0x0004bc62) popup_tb_extension_window

0xd8a9,	// (0x000517bf) aid_size_cell_ext_ParamLimits

0xd8a9,	// (0x000517bf) aid_size_cell_ext

0x0b71,	// (0x00044a87) bg_tb_trans_pane_cp1_ParamLimits

0x0b71,	// (0x00044a87) bg_tb_trans_pane_cp1

0xd8c9,	// (0x000517df) grid_tb_ext_pane_ParamLimits

0xd8c9,	// (0x000517df) grid_tb_ext_pane

0xd8f9,	// (0x0005180f) cell_tb_ext_pane_ParamLimits

0xd8f9,	// (0x0005180f) cell_tb_ext_pane

0xd910,	// (0x00051826) cell_tb_ext_pane_g1_ParamLimits

0xd910,	// (0x00051826) cell_tb_ext_pane_g1

0xd92d,	// (0x00051843) cell_tb_ext_pane_t1

0x0b71,	// (0x00044a87) list_highlight_pane_cp11_ParamLimits

0x0b71,	// (0x00044a87) list_highlight_pane_cp11

0x6611,	// (0x0004a527) popup_uni_indicator_window_ParamLimits

0x6611,	// (0x0004a527) popup_uni_indicator_window

0x0dfd,	// (0x00044d13) bg_popup_sub_pane_cp14

0xd949,	// (0x0005185f) list_uniindi_pane

0xd955,	// (0x0005186b) uniindi_top_pane

0x0b71,	// (0x00044a87) bg_uniindi_top_pane

0xd974,	// (0x0005188a) uniindi_top_pane_g1

0xd98a,	// (0x000518a0) uniindi_top_pane_g2

0x0003,

0xfd11,	// (0x00053c27) uniindi_top_pane_g

0xd9b4,	// (0x000518ca) uniindi_top_pane_t1

0xd9de,	// (0x000518f4) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x000518f4) list_single_uniindi_pane

0xc026,	// (0x0004ff3c) bg_uniindi_top_pane_g1

0xd9f1,	// (0x00051907) list_single_uniindi_pane_g1

0xda04,	// (0x0005191a) list_single_uniindi_pane_t1

0x09d7,	// (0x000448ed) control_bg_pane

0xda29,	// (0x0005193f) bg_sctrl_sk_pane_cp1

0xda32,	// (0x00051948) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x00051951) control_bg_pane_g1

0xda44,	// (0x0005195a) control_bg_pane_g2

0x0001,

0xfd1a,	// (0x00053c30) control_bg_pane_g

0xba5f,	// (0x0004f975) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0004f983) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x000539ab) cell_indicator_nsta_pane_g_ParamLimits

0x601d,	// (0x00049f33) form2_midp_time_pane_t1_ParamLimits

0x0cf1,	// (0x00044c07) main_idle_act4_pane_ParamLimits

0x0cf1,	// (0x00044c07) main_idle_act4_pane

0x7d4c,	// (0x0004bc62) popup_tb_extension_window_ParamLimits

0xd8e9,	// (0x000517ff) tb_ext_find_pane_ParamLimits

0xd8e9,	// (0x000517ff) tb_ext_find_pane

0xda4d,	// (0x00051963) ai_gene_pane_1_cp1

0x173a,	// (0x00045650) ai_gene_pane_2_cp1

0xda55,	// (0x0005196b) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x00051974) list_single_idle_plugin_notification_pane

0xda67,	// (0x0005197d) list_single_idle_plugin_player_pane

0xda70,	// (0x00051986) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x00051986) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x000519a8) main_idle_act4_pane_t1

0xdaa4,	// (0x000519ba) main_idle_act4_pane_t2

0x0001,

0xfd1f,	// (0x00053c35) main_idle_act4_pane_t

0xdab6,	// (0x000519cc) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x000519cc) middle_sk_idle_act4_pane

0xdacc,	// (0x000519e2) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x000519fc) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x000519fc) shortcut_wheel_idle_act4_pane

0xc026,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x0004ff3c) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x00051a10) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x00051a18) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x00051a20) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x00051a28) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd24,	// (0x00053c3a) shortcut_wheel_idle_act4_pane_g

0xc296,	// (0x000501ac) middle_sk_idle_act4_pane_g1_ParamLimits

0xc296,	// (0x000501ac) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x00051a8c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x00051a8c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd47,	// (0x00053c5d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd47,	// (0x00053c5d) middle_sk_idle_act4_pane_g

0xdb82,	// (0x00051a98) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x00051a98) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x00051ab5) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x00051ab5) grid_ai_shortcut_pane

0xdbb8,	// (0x00051ace) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x00051ace) list_highlight_pane_cp16

0xdbc5,	// (0x00051adb) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x00051adb) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x00051ae7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x00051ae7) list_single_idle_plugin_shortcut_pane_g2

0xdbe9,	// (0x00051aff) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbe9,	// (0x00051aff) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4c,	// (0x00053c62) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4c,	// (0x00053c62) list_single_idle_plugin_shortcut_pane_g

0xdbfc,	// (0x00051b12) cell_ai_shortcut_pane_ParamLimits

0xdbfc,	// (0x00051b12) cell_ai_shortcut_pane

0xdc20,	// (0x00051b36) cell_ai_shortcut_pane_g1_ParamLimits

0xdc20,	// (0x00051b36) cell_ai_shortcut_pane_g1

0xda4d,	// (0x00051963) ai_gene_pane_1_cp2

0xdc42,	// (0x00051b58) ai_gene_pane_2_cp2

0xdc4a,	// (0x00051b60) list_highlight_pane_cp15

0xdc53,	// (0x00051b69) list_single_idle_plugin_calendar_pane_g1

0xdc4a,	// (0x00051b60) list_highlight_pane_cp17

0xdc5b,	// (0x00051b71) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc63,	// (0x00051b79) list_single_idle_plugin_player_pane_g1

0xb39e,	// (0x0004f2b4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd53,	// (0x00053c69) list_single_idle_plugin_player_pane_g

0xdc6b,	// (0x00051b81) list_single_idle_plugin_player_pane_t1

0xdc79,	// (0x00051b8f) list_single_idle_plugin_player_pane_t2

0xdc87,	// (0x00051b9d) list_single_idle_plugin_player_pane_t3

0xdc95,	// (0x00051bab) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd58,	// (0x00053c6e) list_single_idle_plugin_player_pane_t

0xdca3,	// (0x00051bb9) wait_bar_pane_cp15

0xdcab,	// (0x00051bc1) grid_ai_notification_pane

0xb39e,	// (0x0004f2b4) list_single_idle_plugin_notification_pane_g1

0xdcb4,	// (0x00051bca) cell_ai_notification_pane_ParamLimits

0xdcb4,	// (0x00051bca) cell_ai_notification_pane

0xdcc1,	// (0x00051bd7) cell_ai_notification_pane_g1

0xdcc9,	// (0x00051bdf) cell_ai_notification_pane_t1

0xdcd7,	// (0x00051bed) tb_ext_find_button_pane

0xdcdf,	// (0x00051bf5) tb_ext_find_pane_g1

0xdce7,	// (0x00051bfd) tb_ext_find_pane_t1

0x124f,	// (0x00045165) tb_ext_find_button_pane_g1

0xdcf5,	// (0x00051c0b) tb_ext_find_button_pane_g2

0x0001,

0xfd61,	// (0x00053c77) tb_ext_find_button_pane_g

0xda92,	// (0x000519a8) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x000519ba) main_idle_act4_pane_t2_ParamLimits

0xfd1f,	// (0x00053c35) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x000519e2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x000519f0) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x000519f0) sat_plugin_idle_act4_pane

0xdcfe,	// (0x00051c14) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfe,	// (0x00051c14) sat_plugin_idle_act4_pane_t1

0xdd11,	// (0x00051c27) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd11,	// (0x00051c27) sat_plugin_idle_act4_pane_t2

0xdd24,	// (0x00051c3a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd24,	// (0x00051c3a) sat_plugin_idle_act4_pane_t3

0xdd37,	// (0x00051c4d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd37,	// (0x00051c4d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd66,	// (0x00053c7c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd66,	// (0x00053c7c) sat_plugin_idle_act4_pane_t

0x655a,	// (0x0004a470) popup_battery_window_ParamLimits

0x655a,	// (0x0004a470) popup_battery_window

0x0b71,	// (0x00044a87) bg_popup_sub_pane_cp25_ParamLimits

0x0b71,	// (0x00044a87) bg_popup_sub_pane_cp25

0xdd4a,	// (0x00051c60) popup_battery_window_g1_ParamLimits

0xdd4a,	// (0x00051c60) popup_battery_window_g1

0xdd56,	// (0x00051c6c) popup_battery_window_t1_ParamLimits

0xdd56,	// (0x00051c6c) popup_battery_window_t1

0xdd68,	// (0x00051c7e) popup_battery_window_t2_ParamLimits

0xdd68,	// (0x00051c7e) popup_battery_window_t2

0x0001,

0xfd6f,	// (0x00053c85) popup_battery_window_t_ParamLimits

0xfd6f,	// (0x00053c85) popup_battery_window_t

0x7527,	// (0x0004b43d) midp_canvas_pane_ParamLimits

0x75a0,	// (0x0004b4b6) midp_keypad_pane_ParamLimits

0x75a0,	// (0x0004b4b6) midp_keypad_pane

0x0f3f,	// (0x00044e55) main_midp_pane_ParamLimits

0xbad9,	// (0x0004f9ef) signal_pane_g2_cp_ParamLimits

0xdd85,	// (0x00051c9b) aid_size_cell_midp_keypad_ParamLimits

0xdd85,	// (0x00051c9b) aid_size_cell_midp_keypad

0xdd9f,	// (0x00051cb5) midp_keyp_game_grid_pane_ParamLimits

0xdd9f,	// (0x00051cb5) midp_keyp_game_grid_pane

0xddbf,	// (0x00051cd5) midp_keyp_rocker_pane_ParamLimits

0xddbf,	// (0x00051cd5) midp_keyp_rocker_pane

0xddf8,	// (0x00051d0e) midp_keyp_sk_left_pane_ParamLimits

0xddf8,	// (0x00051d0e) midp_keyp_sk_left_pane

0xde52,	// (0x00051d68) midp_keyp_sk_right_pane_ParamLimits

0xde52,	// (0x00051d68) midp_keyp_sk_right_pane

0x09d7,	// (0x000448ed) bg_button_pane_cp03

0xdeac,	// (0x00051dc2) midp_keyp_sk_left_pane_g1

0x09d7,	// (0x000448ed) bg_button_pane_cp04

0xdeac,	// (0x00051dc2) midp_keyp_sk_right_pane_g1

0xc026,	// (0x0004ff3c) midp_keyp_rocker_pane_g1

0xdeb5,	// (0x00051dcb) keyp_game_cell_pane_ParamLimits

0xdeb5,	// (0x00051dcb) keyp_game_cell_pane

0x09d7,	// (0x000448ed) bg_button_pane_cp02

0xdec8,	// (0x00051dde) keyp_game_cell_pane_g1

0x6590,	// (0x0004a4a6) popup_fep_vkb2_window_ParamLimits

0x6590,	// (0x0004a4a6) popup_fep_vkb2_window

0x8cda,	// (0x0004cbf0) aid_size_cell_vkb2_ParamLimits

0x8cda,	// (0x0004cbf0) aid_size_cell_vkb2

0x8d26,	// (0x0004cc3c) popup_fep_vkb2_window_g1_ParamLimits

0x8d26,	// (0x0004cc3c) popup_fep_vkb2_window_g1

0x8d6e,	// (0x0004cc84) vkb2_area_bottom_pane_ParamLimits

0x8d6e,	// (0x0004cc84) vkb2_area_bottom_pane

0x8dba,	// (0x0004ccd0) vkb2_area_keypad_pane_ParamLimits

0x8dba,	// (0x0004ccd0) vkb2_area_keypad_pane

0x8dfc,	// (0x0004cd12) vkb2_area_top_pane_ParamLimits

0x8dfc,	// (0x0004cd12) vkb2_area_top_pane

0x8e7b,	// (0x0004cd91) vkb2_top_entry_pane_ParamLimits

0x8e7b,	// (0x0004cd91) vkb2_top_entry_pane

0x8ea5,	// (0x0004cdbb) vkb2_top_grid_left_pane_ParamLimits

0x8ea5,	// (0x0004cdbb) vkb2_top_grid_left_pane

0x8ec4,	// (0x0004cdda) vkb2_top_grid_right_pane_ParamLimits

0x8ec4,	// (0x0004cdda) vkb2_top_grid_right_pane

0x8ee3,	// (0x0004cdf9) vkb2_cell_keypad_pane_ParamLimits

0x8ee3,	// (0x0004cdf9) vkb2_cell_keypad_pane

0x8fb4,	// (0x0004ceca) vkb2_area_bottom_grid_pane_ParamLimits

0x8fb4,	// (0x0004ceca) vkb2_area_bottom_grid_pane

0x8fda,	// (0x0004cef0) vkb2_area_bottom_pane_g1_ParamLimits

0x8fda,	// (0x0004cef0) vkb2_area_bottom_pane_g1

0x8ffe,	// (0x0004cf14) vkb2_area_bottom_pane_g2_ParamLimits

0x8ffe,	// (0x0004cf14) vkb2_area_bottom_pane_g2

0x902c,	// (0x0004cf42) vkb2_area_bottom_pane_g3_ParamLimits

0x902c,	// (0x0004cf42) vkb2_area_bottom_pane_g3

0x0002,

0xfd74,	// (0x00053c8a) vkb2_area_bottom_pane_g_ParamLimits

0xfd74,	// (0x00053c8a) vkb2_area_bottom_pane_g

0x908d,	// (0x0004cfa3) vkb2_top_cell_left_pane_ParamLimits

0x908d,	// (0x0004cfa3) vkb2_top_cell_left_pane

0xded9,	// (0x00051def) vkb2_top_entry_pane_g1_ParamLimits

0xded9,	// (0x00051def) vkb2_top_entry_pane_g1

0xdee7,	// (0x00051dfd) vkb2_top_entry_pane_t1_ParamLimits

0xdee7,	// (0x00051dfd) vkb2_top_entry_pane_t1

0xdf19,	// (0x00051e2f) vkb2_top_entry_pane_t2_ParamLimits

0xdf19,	// (0x00051e2f) vkb2_top_entry_pane_t2

0xdf4b,	// (0x00051e61) vkb2_top_entry_pane_t3_ParamLimits

0xdf4b,	// (0x00051e61) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x00053c91) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x00053c91) vkb2_top_entry_pane_t

0x90da,	// (0x0004cff0) vkb2_top_grid_right_pane_g1_ParamLimits

0x90da,	// (0x0004cff0) vkb2_top_grid_right_pane_g1

0x90f0,	// (0x0004d006) vkb2_top_grid_right_pane_g2_ParamLimits

0x90f0,	// (0x0004d006) vkb2_top_grid_right_pane_g2

0x9108,	// (0x0004d01e) vkb2_top_grid_right_pane_g3_ParamLimits

0x9108,	// (0x0004d01e) vkb2_top_grid_right_pane_g3

0x9120,	// (0x0004d036) vkb2_top_grid_right_pane_g4_ParamLimits

0x9120,	// (0x0004d036) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x00053c98) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x00053c98) vkb2_top_grid_right_pane_g

0x9136,	// (0x0004d04c) vkb2_top_cell_left_pane_g1

0x914d,	// (0x0004d063) vkb2_cell_keypad_pane_g1_ParamLimits

0x914d,	// (0x0004d063) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x00051e85) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x00051e85) vkb2_cell_keypad_pane_t1

0x915b,	// (0x0004d071) vkb2_cell_bottom_grid_pane_ParamLimits

0x915b,	// (0x0004d071) vkb2_cell_bottom_grid_pane

0x9194,	// (0x0004d0aa) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x00051a30) aid_call2_pane_cp02

0xdb22,	// (0x00051a38) aid_call_pane_cp02

0xdb2a,	// (0x00051a40) clock_digital_number_pane_cp10

0xdb32,	// (0x00051a48) clock_digital_number_pane_cp11

0xdb3a,	// (0x00051a50) clock_digital_number_pane_cp12

0xdb42,	// (0x00051a58) clock_digital_number_pane_cp13

0xdb4a,	// (0x00051a60) clock_digital_separator_pane_cp10

0x124f,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g1

0x124f,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x00051a68) popup_clock_digital_analogue_window_cp2_g3

0x124f,	// (0x00045165) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x00051a68) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd37,	// (0x00053c4d) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x00051a70) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x00051a7e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd42,	// (0x00053c58) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x0004ff3c) clock_digital_number_pane_cp10_g1

0xc026,	// (0x0004ff3c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053a47) clock_digital_number_pane_cp10_g

0xc026,	// (0x0004ff3c) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x0004ff3c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x00053a47) clock_digital_separator_pane_cp10_g

0xd996,	// (0x000518ac) uniindi_top_pane_g3

0xd9a7,	// (0x000518bd) uniindi_top_pane_g4

0x8f6e,	// (0x0004ce84) vkb2_row_keypad_pane_ParamLimits

0x8f6e,	// (0x0004ce84) vkb2_row_keypad_pane

0x91b4,	// (0x0004d0ca) vkb2_cell_t_keypad_pane_ParamLimits

0x91b4,	// (0x0004d0ca) vkb2_cell_t_keypad_pane

0x91c4,	// (0x0004d0da) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x91c4,	// (0x0004d0da) vkb2_cell_t_keypad_pane_cp08

0x91d7,	// (0x0004d0ed) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x91d7,	// (0x0004d0ed) vkb2_cell_t_keypad_pane_cp09

0x91eb,	// (0x0004d101) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91eb,	// (0x0004d101) vkb2_cell_t_keypad_pane_cp01

0x91fc,	// (0x0004d112) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91fc,	// (0x0004d112) vkb2_cell_t_keypad_pane_cp02

0x920d,	// (0x0004d123) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x920d,	// (0x0004d123) vkb2_cell_t_keypad_pane_cp03

0x921e,	// (0x0004d134) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x921e,	// (0x0004d134) vkb2_cell_t_keypad_pane_cp04

0x922f,	// (0x0004d145) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x922f,	// (0x0004d145) vkb2_cell_t_keypad_pane_cp05

0x9240,	// (0x0004d156) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9240,	// (0x0004d156) vkb2_cell_t_keypad_pane_cp06

0x9251,	// (0x0004d167) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9251,	// (0x0004d167) vkb2_cell_t_keypad_pane_cp07

0x9262,	// (0x0004d178) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9262,	// (0x0004d178) vkb2_cell_t_keypad_pane_cp10

0xc296,	// (0x000501ac) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x00051e9c) vkb2_cell_t_keypad_pane_t1

0x09d7,	// (0x000448ed) popup_grid_graphic2_window

0xdf98,	// (0x00051eae) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x00051eae) aid_size_cell_graphic2

0xdfd0,	// (0x00051ee6) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x00051ee6) bg_popup_window_pane_cp21

0xdfde,	// (0x00051ef4) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x00051ef4) graphic2_pages_pane

0xe024,	// (0x00051f3a) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x00051f3a) grid_graphic2_control_pane

0xe062,	// (0x00051f78) grid_graphic2_pane_ParamLimits

0xe062,	// (0x00051f78) grid_graphic2_pane

0xe0d6,	// (0x00051fec) cell_graphic2_pane

0x09d7,	// (0x000448ed) main_comp_mode_pane

0xd207,	// (0x0005111d) list_ai3_gene_pane_ParamLimits

0xd5d5,	// (0x000514eb) bg_popup_window_pane_cp19_ParamLimits

0xd5e1,	// (0x000514f7) bg_touch_area_indi_pane_ParamLimits

0xd5e1,	// (0x000514f7) bg_touch_area_indi_pane

0xd5f7,	// (0x0005150d) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5f7,	// (0x0005150d) bg_touch_area_indi_pane_cp01

0xd60d,	// (0x00051523) bg_touch_area_indi_pane_cp02_ParamLimits

0xd60d,	// (0x00051523) bg_touch_area_indi_pane_cp02

0xd623,	// (0x00051539) bg_touch_area_indi_pane_cp03_ParamLimits

0xd623,	// (0x00051539) bg_touch_area_indi_pane_cp03

0xd63d,	// (0x00051553) popup_slider_window_g1_ParamLimits

0xd659,	// (0x0005156f) popup_slider_window_g2_ParamLimits

0xd675,	// (0x0005158b) popup_slider_window_g3_ParamLimits

0xfccc,	// (0x00053be2) popup_slider_window_g_ParamLimits

0xd6db,	// (0x000515f1) popup_slider_window_t1_ParamLimits

0xd74f,	// (0x00051665) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x00051fec) cell_graphic2_pane_ParamLimits

0xe125,	// (0x0005203b) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x0005203b) bg_button_pane_cp10

0xe138,	// (0x0005204e) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x0005204e) bg_button_pane_cp11

0xe14b,	// (0x00052061) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x00052061) graphic2_pages_pane_g1

0xe166,	// (0x0005207c) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x0005207c) graphic2_pages_pane_g2

0x0001,

0xfd90,	// (0x00053ca6) graphic2_pages_pane_g_ParamLimits

0xfd90,	// (0x00053ca6) graphic2_pages_pane_g

0xe17e,	// (0x00052094) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x00052094) graphic2_pages_pane_t1

0xe196,	// (0x000520ac) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x000520ac) cell_graphic2_control_pane

0xe1b4,	// (0x000520ca) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x000520ca) cell_graphic2_pane_g1

0xe1c1,	// (0x000520d7) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x000520d7) cell_graphic2_pane_g2

0xe1ce,	// (0x000520e4) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x000520e4) cell_graphic2_pane_g3

0xe1db,	// (0x000520f1) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x000520f1) cell_graphic2_pane_g4

0xe1e8,	// (0x000520fe) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x000520fe) cell_graphic2_pane_g5

0x0004,

0xfd95,	// (0x00053cab) cell_graphic2_pane_g_ParamLimits

0xfd95,	// (0x00053cab) cell_graphic2_pane_g

0xe201,	// (0x00052117) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x00052117) cell_graphic2_pane_t1

0x9adc,	// (0x0004d9f2) grid_highlight_pane_cp11_ParamLimits

0x9adc,	// (0x0004d9f2) grid_highlight_pane_cp11

0x0b71,	// (0x00044a87) bg_button_pane_cp05

0xe237,	// (0x0005214d) cell_graphic2_control_pane_g1

0xc026,	// (0x0004ff3c) bg_touch_area_indi_pane_g1

0xe25f,	// (0x00052175) aid_cmod_rocker_key_size

0xe269,	// (0x0005217f) aid_cmode_itu_key_size

0xe273,	// (0x00052189) main_cmode_video_pane

0xe27d,	// (0x00052193) main_comp_mode_itu_pane

0xe289,	// (0x0005219f) main_comp_mode_rocker_pane

0xe295,	// (0x000521ab) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x000521ab) cell_cmode_rocker_pane

0xe2a7,	// (0x000521bd) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x000521bd) cell_cmode_itu_pane

0x0dfd,	// (0x00044d13) bg_button_pane_cp06_ParamLimits

0x0dfd,	// (0x00044d13) bg_button_pane_cp06

0xc296,	// (0x000501ac) cell_cmode_rocker_pane_g1_ParamLimits

0xc296,	// (0x000501ac) cell_cmode_rocker_pane_g1

0xd7f3,	// (0x00051709) cell_cmode_rocker_pane_g2_ParamLimits

0xd7f3,	// (0x00051709) cell_cmode_rocker_pane_g2

0x0001,

0xfda5,	// (0x00053cbb) cell_cmode_rocker_pane_g_ParamLimits

0xfda5,	// (0x00053cbb) cell_cmode_rocker_pane_g

0x09d7,	// (0x000448ed) bg_button_pane_cp07

0xe2bc,	// (0x000521d2) cell_cmode_itu_pane_g1

0xe2c5,	// (0x000521db) cell_cmode_itu_pane_t1

0xe2d3,	// (0x000521e9) cell_cmode_itu_pane_t2

0x0001,

0xfdaa,	// (0x00053cc0) cell_cmode_itu_pane_t

0xda19,	// (0x0005192f) aid_touch_ctrl_left

0xda21,	// (0x00051937) aid_touch_ctrl_right

0x09d7,	// (0x000448ed) compa_mode_pane

0xe2e1,	// (0x000521f7) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x00052201) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0005220b) compa_mode_pane_g1

0xe2fd,	// (0x00052213) compa_mode_pane_g2

0xe305,	// (0x0005221b) compa_mode_pane_g3

0x0002,

0xfdaf,	// (0x00053cc5) compa_mode_pane_g

0xe30d,	// (0x00052223) main_comp_mode_itu_pane_cp

0xe315,	// (0x0005222b) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x00052233) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x00052233) cell_cmode_itu_pane_cp

0xe332,	// (0x00052248) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x00052248) cell_cmode_rocker_pane_cp

0x0dfd,	// (0x00044d13) bg_button_pane_cp06_cp_ParamLimits

0x0dfd,	// (0x00044d13) bg_button_pane_cp06_cp

0xc296,	// (0x000501ac) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc296,	// (0x000501ac) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x0004ff3c) cell_cmode_rocker_pane_g2_cp

0x09d7,	// (0x000448ed) bg_button_pane_cp07_cp

0xe344,	// (0x0005225a) cell_cmode_itu_pane_g1_cp

0xe34d,	// (0x00052263) cell_cmode_itu_pane_t1_cp

0xe34d,	// (0x00052263) cell_cmode_itu_pane_t2_cp

0xaf79,	// (0x0004ee8f) settings_code_pane_cp2

0x0a47,	// (0x0004495d) bg_popup_window_pane_cp3_ParamLimits

0x0c8a,	// (0x00044ba0) heading_pane_cp3_ParamLimits

0x0c99,	// (0x00044baf) listscroll_popup_graphic_pane_ParamLimits

0x87b3,	// (0x0004c6c9) fep_hwr_aid_pane_ParamLimits

0x8c51,	// (0x0004cb67) aid_touch_sctrl_top_ParamLimits

0x8c5e,	// (0x0004cb74) sctrl_sk_top_pane_g1_ParamLimits

0xc296,	// (0x000501ac) sctrl_sk_top_pane_g2_ParamLimits

0xfce5,	// (0x00053bfb) sctrl_sk_top_pane_g_ParamLimits

0x8c6b,	// (0x0004cb81) sctrl_sk_top_pane_t1_ParamLimits

0x8c51,	// (0x0004cb67) aid_touch_sctrl_bottom_ParamLimits

0x8c6b,	// (0x0004cb81) sctrl_sk_bottom_pane_t1_ParamLimits

0xd962,	// (0x00051878) aid_area_touch_clock

0x8e42,	// (0x0004cd58) aid_vkb2_area_top_pane_cell_ParamLimits

0x8e42,	// (0x0004cd58) aid_vkb2_area_top_pane_cell

0x8f90,	// (0x0004cea6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f90,	// (0x0004cea6) aid_vkb2_area_bottom_pane_cell

0xded1,	// (0x00051de7) popup_char_count_window

0xe35b,	// (0x00052271) popup_char_count_window_g1

0xe364,	// (0x0005227a) popup_char_count_window_g2

0xe36d,	// (0x00052283) popup_char_count_window_g3

0x0002,

0xfdb6,	// (0x00053ccc) popup_char_count_window_g

0xe376,	// (0x0005228c) popup_char_count_window_t1

0x8d04,	// (0x0004cc1a) popup_fep_char_preview_window_ParamLimits

0x8d04,	// (0x0004cc1a) popup_fep_char_preview_window

0x8e60,	// (0x0004cd76) vkb2_top_candi_pane_ParamLimits

0x8e60,	// (0x0004cd76) vkb2_top_candi_pane

0xe384,	// (0x0005229a) cell_vkb2_top_candi_pane_ParamLimits

0xe384,	// (0x0005229a) cell_vkb2_top_candi_pane

0xa0f6,	// (0x0004e00c) bg_popup_fep_char_preview_window_ParamLimits

0xa0f6,	// (0x0004e00c) bg_popup_fep_char_preview_window

0x9277,	// (0x0004d18d) popup_fep_char_preview_window_t1_ParamLimits

0x9277,	// (0x0004d18d) popup_fep_char_preview_window_t1

0xe3ce,	// (0x000522e4) bg_popup_fep_char_preview_window_g1

0xe3d6,	// (0x000522ec) bg_popup_fep_char_preview_window_g2

0xe3de,	// (0x000522f4) bg_popup_fep_char_preview_window_g3

0xe3e6,	// (0x000522fc) bg_popup_fep_char_preview_window_g4

0xe3ee,	// (0x00052304) bg_popup_fep_char_preview_window_g5

0xe3f6,	// (0x0005230c) bg_popup_fep_char_preview_window_g6

0xe3fe,	// (0x00052314) bg_popup_fep_char_preview_window_g7

0xe406,	// (0x0005231c) bg_popup_fep_char_preview_window_g8

0xe40e,	// (0x00052324) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbd,	// (0x00053cd3) bg_popup_fep_char_preview_window_g

0xc296,	// (0x000501ac) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc296,	// (0x000501ac) cell_vkb2_top_candi_pane_g1

0xc5ad,	// (0x000504c3) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5ad,	// (0x000504c3) cell_vkb2_top_candi_pane_g2

0xc5ce,	// (0x000504e4) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5ce,	// (0x000504e4) cell_vkb2_top_candi_pane_g3

0x92b9,	// (0x0004d1cf) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92b9,	// (0x0004d1cf) cell_vkb2_top_candi_pane_g4

0xc797,	// (0x000506ad) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc797,	// (0x000506ad) cell_vkb2_top_candi_pane_g5

0xd7f3,	// (0x00051709) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7f3,	// (0x00051709) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd2,	// (0x00053ce8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd2,	// (0x00053ce8) cell_vkb2_top_candi_pane_g

0x92da,	// (0x0004d1f0) cell_vkb2_top_candi_pane_t1

0x84a0,	// (0x0004c3b6) aid_size_touch_slider_mark_ParamLimits

0x84a0,	// (0x0004c3b6) aid_size_touch_slider_mark

0xe014,	// (0x00051f2a) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x00051f2a) grid_graphic2_catg_pane

0xe0b2,	// (0x00051fc8) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x00051fc8) popup_grid_graphic2_window_t1

0xe0c4,	// (0x00051fda) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x00051fda) popup_grid_graphic2_window_t2

0x0001,

0xfd8b,	// (0x00053ca1) popup_grid_graphic2_window_t_ParamLimits

0xfd8b,	// (0x00053ca1) popup_grid_graphic2_window_t

0x0b71,	// (0x00044a87) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x0005214d) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0005232c) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0005232c) cell_graphic2_catg_pane

0x09d7,	// (0x000448ed) bg_button_pane_cp12

0xe428,	// (0x0005233e) cell_graphic2_catg_pane_g1

0xd92d,	// (0x00051843) cell_tb_ext_pane_t1_ParamLimits

0x90ad,	// (0x0004cfc3) vkb2_top_cell_right_narrow_pane_ParamLimits

0x90ad,	// (0x0004cfc3) vkb2_top_cell_right_narrow_pane

0x90c5,	// (0x0004cfdb) vkb2_top_cell_right_wide_pane_ParamLimits

0x90c5,	// (0x0004cfdb) vkb2_top_cell_right_wide_pane

0x87a5,	// (0x0004c6bb) bg_vkb2_func_pane_ParamLimits

0x87a5,	// (0x0004c6bb) bg_vkb2_func_pane

0x9136,	// (0x0004d04c) vkb2_top_cell_left_pane_g1_ParamLimits

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp03

0x9194,	// (0x0004d0aa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a58,	// (0x0004d96e) bg_vkb2_func_pane_g1

0x9a60,	// (0x0004d976) bg_vkb2_func_pane_g2

0x9a70,	// (0x0004d986) bg_vkb2_func_pane_g3

0x9a68,	// (0x0004d97e) bg_vkb2_func_pane_g4

0x9a78,	// (0x0004d98e) bg_vkb2_func_pane_g5

0x9a80,	// (0x0004d996) bg_vkb2_func_pane_g6

0x9a88,	// (0x0004d99e) bg_vkb2_func_pane_g7

0x9a90,	// (0x0004d9a6) bg_vkb2_func_pane_g8

0x9a50,	// (0x0004d966) bg_vkb2_func_pane_g9

0x0008,

0xfddf,	// (0x00053cf5) bg_vkb2_func_pane_g

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp01

0x9136,	// (0x0004d04c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9136,	// (0x0004d04c) vkb2_top_cell_right_wide_pane_g1

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x87a5,	// (0x0004c6bb) bg_vkb2_fuc_pane_cp02

0x92f9,	// (0x0004d20f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x92f9,	// (0x0004d20f) vkb2_top_cell_right_narrow_pane_g1

0xd54f,	// (0x00051465) aid_touch_area_decrease_ParamLimits

0xd54f,	// (0x00051465) aid_touch_area_decrease

0xd573,	// (0x00051489) aid_touch_area_increase_ParamLimits

0xd573,	// (0x00051489) aid_touch_area_increase

0xd58b,	// (0x000514a1) aid_touch_area_mute_ParamLimits

0xd58b,	// (0x000514a1) aid_touch_area_mute

0xd5a7,	// (0x000514bd) aid_touch_area_slider_ParamLimits

0xd5a7,	// (0x000514bd) aid_touch_area_slider

0xd691,	// (0x000515a7) popup_slider_window_g4_ParamLimits

0xd691,	// (0x000515a7) popup_slider_window_g4

0xd6a9,	// (0x000515bf) popup_slider_window_g5_ParamLimits

0xd6a9,	// (0x000515bf) popup_slider_window_g5

0xd6cb,	// (0x000515e1) popup_slider_window_g6_ParamLimits

0xd6cb,	// (0x000515e1) popup_slider_window_g6

0xd709,	// (0x0005161f) popup_slider_window_t2_ParamLimits

0xd709,	// (0x0005161f) popup_slider_window_t2

0x0001,

0xfcd9,	// (0x00053bef) popup_slider_window_t_ParamLimits

0xfcd9,	// (0x00053bef) popup_slider_window_t

0xd721,	// (0x00051637) slider_pane_ParamLimits

0xd721,	// (0x00051637) slider_pane

0xe431,	// (0x00052347) slider_pane_g1_ParamLimits

0xe431,	// (0x00052347) slider_pane_g1

0xe445,	// (0x0005235b) slider_pane_g2_ParamLimits

0xe445,	// (0x0005235b) slider_pane_g2

0xe45b,	// (0x00052371) slider_pane_g3_ParamLimits

0xe45b,	// (0x00052371) slider_pane_g3

0x0003,

0xfdf2,	// (0x00053d08) slider_pane_g_ParamLimits

0xfdf2,	// (0x00053d08) slider_pane_g

0x7da8,	// (0x0004bcbe) popup_tb_float_extension_window_ParamLimits

0x7da8,	// (0x0004bcbe) popup_tb_float_extension_window

0xe487,	// (0x0005239d) aid_size_cell_tb_float_ext

0x09d7,	// (0x000448ed) bg_popup_sub_window_cp28

0xe493,	// (0x000523a9) grid_tb_float_ext_pane

0xe49d,	// (0x000523b3) cell_tb_float_ext_pane_ParamLimits

0xe49d,	// (0x000523b3) cell_tb_float_ext_pane

0xe4b7,	// (0x000523cd) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x000523d6) grid_highlight_pane_cp12

0x88e6,	// (0x0004c7fc) cell_last_hwr_side_pane_ParamLimits

0x88e6,	// (0x0004c7fc) cell_last_hwr_side_pane

0xc026,	// (0x0004ff3c) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x000523df) cell_last_hwr_side_pane_g2

0x0001,

0xfdfb,	// (0x00053d11) cell_last_hwr_side_pane_g

0x905c,	// (0x0004cf72) vkb2_area_bottom_space_btn_pane_ParamLimits

0x905c,	// (0x0004cf72) vkb2_area_bottom_space_btn_pane

0xc296,	// (0x000501ac) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x00051e9c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x92da,	// (0x0004d1f0) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9319,	// (0x0004d22f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9319,	// (0x0004d22f) vkb2_area_bottom_space_btn_pane_g1

0x9353,	// (0x0004d269) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9353,	// (0x0004d269) vkb2_area_bottom_space_btn_pane_g2

0x9389,	// (0x0004d29f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9389,	// (0x0004d29f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe00,	// (0x00053d16) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe00,	// (0x00053d16) vkb2_area_bottom_space_btn_pane_g

0x885a,	// (0x0004c770) cel_fep_hwr_func_pane_ParamLimits

0x885a,	// (0x0004c770) cel_fep_hwr_func_pane

0x8896,	// (0x0004c7ac) cell_hwr_side_button_pane_ParamLimits

0x8896,	// (0x0004c7ac) cell_hwr_side_button_pane

0xd962,	// (0x00051878) aid_area_touch_clock_ParamLimits

0x0b71,	// (0x00044a87) bg_uniindi_top_pane_ParamLimits

0xd974,	// (0x0005188a) uniindi_top_pane_g1_ParamLimits

0xd98a,	// (0x000518a0) uniindi_top_pane_g2_ParamLimits

0xd996,	// (0x000518ac) uniindi_top_pane_g3_ParamLimits

0xd9a7,	// (0x000518bd) uniindi_top_pane_g4_ParamLimits

0xfd11,	// (0x00053c27) uniindi_top_pane_g_ParamLimits

0xd9b4,	// (0x000518ca) uniindi_top_pane_t1_ParamLimits

0x0b71,	// (0x00044a87) bg_vkb2_func_pane_cp01_ParamLimits

0x0b71,	// (0x00044a87) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x000523e8) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x000523e8) cel_fep_hwr_func_pane_g1

0x0b71,	// (0x00044a87) bg_vkb2_func_pane_cp02_ParamLimits

0x0b71,	// (0x00044a87) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x000523e8) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x000523e8) cell_hwr_side_button_pane_g1

0x98d4,	// (0x0004d7ea) status_pane_g4_ParamLimits

0x98d4,	// (0x0004d7ea) status_pane_g4

0x98ee,	// (0x0004d804) status_pane_t1

0xbd61,	// (0x0004fc77) form2_midp_gauge_slider_cont_pane

0xbd69,	// (0x0004fc7f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd7b,	// (0x0004fc91) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0004fca3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x000539fa) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd9f,	// (0x0004fcb5) form2_midp_slider_pane_ParamLimits

0x8ccc,	// (0x0004cbe2) aid_size_cell_func_vkb2_ParamLimits

0x8ccc,	// (0x0004cbe2) aid_size_cell_func_vkb2

0xe473,	// (0x00052389) slider_pane_g4_ParamLimits

0xe473,	// (0x00052389) slider_pane_g4

0x93d3,	// (0x0004d2e9) form2_midp_gauge_slider_pane_t2_cp01

0x93e1,	// (0x0004d2f7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x93e1,	// (0x0004d2f7) form2_midp_gauge_slider_pane_t3_cp01

0x93fe,	// (0x0004d314) form2_midp_slider_pane_cp01

0x09d7,	// (0x000448ed) navi_smil_pane

0xe50b,	// (0x00052421) navi_smil_pane_g1

0xe513,	// (0x00052429) navi_smil_pane_t1

0xe4e0,	// (0x000523f6) form2_midp_slider_pane_g1

0xe4e9,	// (0x000523ff) form2_midp_slider_pane_g2

0xe4f1,	// (0x00052407) form2_midp_slider_pane_g3

0xe4e0,	// (0x000523f6) form2_midp_slider_pane_g4

0xe4f9,	// (0x0005240f) form2_midp_slider_pane_g5

0x0004,

0xfe09,	// (0x00053d1f) form2_midp_slider_pane_g

0x93c3,	// (0x0004d2d9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x93c3,	// (0x0004d2d9) vkb2_area_bottom_space_btn_pane_g4

0x802f,	// (0x0004bf45) lc0_navi_pane_ParamLimits

0x802f,	// (0x0004bf45) lc0_navi_pane

0x80a5,	// (0x0004bfbb) lc0_stat_indi_pane_ParamLimits

0x80a5,	// (0x0004bfbb) lc0_stat_indi_pane

0x80bc,	// (0x0004bfd2) ls0_title_pane_ParamLimits

0x80bc,	// (0x0004bfd2) ls0_title_pane

0x0dfd,	// (0x00044d13) bg_popup_sub_pane_cp14_ParamLimits

0xd949,	// (0x0005185f) list_uniindi_pane_ParamLimits

0xd955,	// (0x0005186b) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x00051907) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0005191a) list_single_uniindi_pane_t1_ParamLimits

0x9407,	// (0x0004d31d) lc0_stat_clock_pane_ParamLimits

0x9407,	// (0x0004d31d) lc0_stat_clock_pane

0xe521,	// (0x00052437) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x00052437) lc0_stat_indi_pane_g1

0xe52e,	// (0x00052444) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x00052444) lc0_stat_indi_pane_g2

0x0001,

0xfe14,	// (0x00053d2a) lc0_stat_indi_pane_g_ParamLimits

0xfe14,	// (0x00053d2a) lc0_stat_indi_pane_g

0x9414,	// (0x0004d32a) lc0_uni_indicator_pane_ParamLimits

0x9414,	// (0x0004d32a) lc0_uni_indicator_pane

0xe53b,	// (0x00052451) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x00052451) ls0_title_pane_g1

0xe54f,	// (0x00052465) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x00052465) ls0_title_pane_t1

0x9421,	// (0x0004d337) lc0_uni_indicator_pane_g1_ParamLimits

0x9421,	// (0x0004d337) lc0_uni_indicator_pane_g1

0xe585,	// (0x0005249b) lc0_stat_clock_pane_t1

0x09d7,	// (0x000448ed) main_ai5_pane

0xe593,	// (0x000524a9) ai5_sk_pane_ParamLimits

0xe593,	// (0x000524a9) ai5_sk_pane

0xe5a0,	// (0x000524b6) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x000524b6) cell_ai5_widget_pane

0xe669,	// (0x0005257f) aid_size_cell_widget_grid

0xe677,	// (0x0005258d) bg_ai5_widget_pane_ParamLimits

0xe677,	// (0x0005258d) bg_ai5_widget_pane

0xe6f3,	// (0x00052609) cell_ai5_widget_pane_g2

0xe707,	// (0x0005261d) cell_ai5_widget_pane_g3

0xe721,	// (0x00052637) cell_ai5_widget_pane_g4

0xe731,	// (0x00052647) cell_ai5_widget_pane_g5

0xe741,	// (0x00052657) cell_ai5_widget_pane_g6

0xe74d,	// (0x00052663) cell_ai5_widget_pane_g7

0xe7b9,	// (0x000526cf) cell_ai5_widget_pane_t1_ParamLimits

0xe7b9,	// (0x000526cf) cell_ai5_widget_pane_t1

0xe7d6,	// (0x000526ec) cell_ai5_widget_pane_t2_ParamLimits

0xe7d6,	// (0x000526ec) cell_ai5_widget_pane_t2

0xe7ee,	// (0x00052704) cell_ai5_widget_pane_t3_ParamLimits

0xe7ee,	// (0x00052704) cell_ai5_widget_pane_t3

0xe806,	// (0x0005271c) cell_ai5_widget_pane_t4_ParamLimits

0xe806,	// (0x0005271c) cell_ai5_widget_pane_t4

0xe82c,	// (0x00052742) cell_ai5_widget_pane_t5_ParamLimits

0xe82c,	// (0x00052742) cell_ai5_widget_pane_t5

0xe84b,	// (0x00052761) cell_ai5_widget_pane_t6_ParamLimits

0xe84b,	// (0x00052761) cell_ai5_widget_pane_t6

0xe85d,	// (0x00052773) cell_ai5_widget_pane_t7_ParamLimits

0xe85d,	// (0x00052773) cell_ai5_widget_pane_t7

0xe87c,	// (0x00052792) cell_ai5_widget_pane_t8_ParamLimits

0xe87c,	// (0x00052792) cell_ai5_widget_pane_t8

0x000b,

0xfe34,	// (0x00053d4a) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00053d4a) cell_ai5_widget_pane_t

0xe900,	// (0x00052816) grid_ai5_widget_pane

0x0dfd,	// (0x00044d13) highlight_cell_ai5_widget_pane_ParamLimits

0x0dfd,	// (0x00044d13) highlight_cell_ai5_widget_pane

0xe90e,	// (0x00052824) ai5_sk_left_pane

0xe918,	// (0x0005282e) ai5_sk_middle_pane

0xe922,	// (0x00052838) ai5_sk_right_pane

0xe92c,	// (0x00052842) bg_ai5_widget_pane_g1_ParamLimits

0xe92c,	// (0x00052842) bg_ai5_widget_pane_g1

0xe938,	// (0x0005284e) bg_ai5_widget_pane_g2_ParamLimits

0xe938,	// (0x0005284e) bg_ai5_widget_pane_g2

0xe944,	// (0x0005285a) bg_ai5_widget_pane_g3_ParamLimits

0xe944,	// (0x0005285a) bg_ai5_widget_pane_g3

0xe950,	// (0x00052866) bg_ai5_widget_pane_g4_ParamLimits

0xe950,	// (0x00052866) bg_ai5_widget_pane_g4

0xe95c,	// (0x00052872) bg_ai5_widget_pane_g5_ParamLimits

0xe95c,	// (0x00052872) bg_ai5_widget_pane_g5

0xe968,	// (0x0005287e) bg_ai5_widget_pane_g6_ParamLimits

0xe968,	// (0x0005287e) bg_ai5_widget_pane_g6

0xe974,	// (0x0005288a) bg_ai5_widget_pane_g7_ParamLimits

0xe974,	// (0x0005288a) bg_ai5_widget_pane_g7

0xe980,	// (0x00052896) bg_ai5_widget_pane_g8_ParamLimits

0xe980,	// (0x00052896) bg_ai5_widget_pane_g8

0xe98c,	// (0x000528a2) bg_ai5_widget_pane_g9_ParamLimits

0xe98c,	// (0x000528a2) bg_ai5_widget_pane_g9

0x0008,

0xfe4d,	// (0x00053d63) bg_ai5_widget_pane_g_ParamLimits

0xfe4d,	// (0x00053d63) bg_ai5_widget_pane_g

0xe9be,	// (0x000528d4) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9be,	// (0x000528d4) cell_shortcut_ai5_widget_pane

0x16b9,	// (0x000455cf) bg_cell_shortcut_ai5_widget_pane

0xe9cf,	// (0x000528e5) cell_grid_ai5_widget_pane_g1

0x16b9,	// (0x000455cf) highlight_cell_shortcut_ai5_widget_pane

0x9a60,	// (0x0004d976) ai5_sk_left_pane_g1

0xe9d8,	// (0x000528ee) ai5_sk_left_pane_g2

0xe9e0,	// (0x000528f6) ai5_sk_left_pane_g3

0xe9e8,	// (0x000528fe) ai5_sk_left_pane_g4

0x0003,

0xfe60,	// (0x00053d76) ai5_sk_left_pane_g

0xe9f0,	// (0x00052906) ai5_sk_left_pane_t1

0x9a58,	// (0x0004d96e) ai5_sk_right_pane_g1

0xe9fe,	// (0x00052914) ai5_sk_right_pane_g2

0xea06,	// (0x0005291c) ai5_sk_right_pane_g3

0xea0e,	// (0x00052924) ai5_sk_right_pane_g4

0x0003,

0xfe69,	// (0x00053d7f) ai5_sk_right_pane_g

0xea16,	// (0x0005292c) ai5_sk_right_pane_t1

0x9a58,	// (0x0004d96e) ai5_sk_middle_pane_g1

0x9a60,	// (0x0004d976) ai5_sk_middle_pane_g2

0x9a78,	// (0x0004d98e) ai5_sk_middle_pane_g3

0xea06,	// (0x0005291c) ai5_sk_middle_pane_g4

0xe9e0,	// (0x000528f6) ai5_sk_middle_pane_g5

0xea24,	// (0x0005293a) ai5_sk_middle_pane_g6

0xea2c,	// (0x00052942) ai5_sk_middle_pane_g7

0x0006,

0xfe72,	// (0x00053d88) ai5_sk_middle_pane_g

0x7eb5,	// (0x0004bdcb) aid_touch_area_size_lc0_ParamLimits

0x7eb5,	// (0x0004bdcb) aid_touch_area_size_lc0

0x89e5,	// (0x0004c8fb) cell_hwr_candidate_pane_t1_ParamLimits

0x7ed1,	// (0x0004bde7) aid_touch_navi_pane

0x987e,	// (0x0004d794) status_dt_navi_pane_ParamLimits

0x987e,	// (0x0004d794) status_dt_navi_pane

0x988b,	// (0x0004d7a1) status_dt_sta_pane_ParamLimits

0x988b,	// (0x0004d7a1) status_dt_sta_pane

0xea34,	// (0x0005294a) dt_sta_controll_pane

0xea41,	// (0x00052957) dt_sta_indi_pane

0xea52,	// (0x00052968) dt_sta_title_pane

0x0b71,	// (0x00044a87) bg_dt_sta_indi_pane_ParamLimits

0x0b71,	// (0x00044a87) bg_dt_sta_indi_pane

0xea65,	// (0x0005297b) dt_sta_battery_pane

0xea6d,	// (0x00052983) dt_sta_indi_pane_g1

0xea76,	// (0x0005298c) dt_sta_indi_pane_g2

0xea7f,	// (0x00052995) dt_sta_indi_pane_g3

0x0002,

0xfe81,	// (0x00053d97) dt_sta_indi_pane_g

0xea88,	// (0x0005299e) dt_sta_signal_pane

0x0dfd,	// (0x00044d13) bg_dt_sta_title_pane_ParamLimits

0x0dfd,	// (0x00044d13) bg_dt_sta_title_pane

0xa8b2,	// (0x0004e7c8) dt_sta_title_pane_g1

0xea91,	// (0x000529a7) dt_sta_title_pane_t1_ParamLimits

0xea91,	// (0x000529a7) dt_sta_title_pane_t1

0x09d7,	// (0x000448ed) bg_dt_sta_control_pane

0xeaa6,	// (0x000529bc) dt_sta_controll_pane_g1

0xeaaf,	// (0x000529c5) bg_dt_sta_title_pane_g1

0xeab8,	// (0x000529ce) bg_dt_sta_title_pane_g2

0xeac1,	// (0x000529d7) bg_dt_sta_title_pane_g3

0x0002,

0xfe88,	// (0x00053d9e) bg_dt_sta_title_pane_g

0xc026,	// (0x0004ff3c) bg_dt_sta_indi_pane_g1

0xeaca,	// (0x000529e0) dt_sta_signal_pane_g1

0xead2,	// (0x000529e8) dt_sta_signal_pane_g2

0x0001,

0xfe8f,	// (0x00053da5) dt_sta_signal_pane_g

0xeada,	// (0x000529f0) dt_sta_battery_pane_g1

0xeae3,	// (0x000529f9) dt_sta_battery_pane_t1

0xc026,	// (0x0004ff3c) bg_dt_sta_control_pane_g1

0x12d2,	// (0x000451e8) fep_china_uni_eep_pane

0x12da,	// (0x000451f0) fep_china_uni_entry_pane_ParamLimits

0x12ea,	// (0x00045200) popup_fep_china_uni_window_g1_ParamLimits

0x12fa,	// (0x00045210) popup_fep_china_uni_window_g2_ParamLimits

0x12fa,	// (0x00045210) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00053609) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00053609) popup_fep_china_uni_window_g

0xeaf2,	// (0x00052a08) fep_china_uni_eep_pane_g1

0xeafa,	// (0x00052a10) fep_china_uni_eep_pane_t1

0xe502,	// (0x00052418) aid_touch_area_size_smil_player

0x8027,	// (0x0004bf3d) lc0_clock_pane

0x98e2,	// (0x0004d7f8) status_pane_g5_ParamLimits

0x98e2,	// (0x0004d7f8) status_pane_g5

0x7a69,	// (0x0004b97f) popup_keymap_window

0x98a0,	// (0x0004d7b6) status_icon_pane

0xe707,	// (0x0005261d) cell_ai5_widget_pane_g3_ParamLimits

0xe721,	// (0x00052637) cell_ai5_widget_pane_g4_ParamLimits

0xe731,	// (0x00052647) cell_ai5_widget_pane_g5_ParamLimits

0xe759,	// (0x0005266f) cell_ai5_widget_pane_g8_ParamLimits

0xe759,	// (0x0005266f) cell_ai5_widget_pane_g8

0xe76d,	// (0x00052683) cell_ai5_widget_pane_g9_ParamLimits

0xe76d,	// (0x00052683) cell_ai5_widget_pane_g9

0xe781,	// (0x00052697) cell_ai5_widget_pane_g10_ParamLimits

0xe781,	// (0x00052697) cell_ai5_widget_pane_g10

0xeb09,	// (0x00052a1f) status_icon_pane_g1

0x09d7,	// (0x000448ed) bg_popup_sub_pane_cp13

0xeb11,	// (0x00052a27) popup_keymap_window_t1

0x77a2,	// (0x0004b6b8) control_pane_g6_ParamLimits

0x77a2,	// (0x0004b6b8) control_pane_g6

0x77af,	// (0x0004b6c5) control_pane_g7_ParamLimits

0x77af,	// (0x0004b6c5) control_pane_g7

0x77bc,	// (0x0004b6d2) control_pane_g8_ParamLimits

0x77bc,	// (0x0004b6d2) control_pane_g8

0xea34,	// (0x0005294a) dt_sta_controll_pane_ParamLimits

0xea41,	// (0x00052957) dt_sta_indi_pane_ParamLimits

0xea52,	// (0x00052968) dt_sta_title_pane_ParamLimits

0x0d48,	// (0x00044c5e) aid_size_touch_scroll_bar_cale

0x656e,	// (0x0004a484) popup_discreet_window_ParamLimits

0x656e,	// (0x0004a484) popup_discreet_window

0x65e8,	// (0x0004a4fe) popup_sk_window

0xa0f6,	// (0x0004e00c) bg_popup_sub_pane_cp28_ParamLimits

0xa0f6,	// (0x0004e00c) bg_popup_sub_pane_cp28

0xeb1f,	// (0x00052a35) popup_discreet_window_g1_ParamLimits

0xeb1f,	// (0x00052a35) popup_discreet_window_g1

0xeb3f,	// (0x00052a55) popup_discreet_window_t1_ParamLimits

0xeb3f,	// (0x00052a55) popup_discreet_window_t1

0xeb5d,	// (0x00052a73) popup_discreet_window_t2_ParamLimits

0xeb5d,	// (0x00052a73) popup_discreet_window_t2

0x0002,

0xfe94,	// (0x00053daa) popup_discreet_window_t_ParamLimits

0xfe94,	// (0x00053daa) popup_discreet_window_t

0x9435,	// (0x0004d34b) popup_sk_window_g1

0x943f,	// (0x0004d355) popup_sk_window_g2

0x0001,

0xfe9b,	// (0x00053db1) popup_sk_window_g

0x9447,	// (0x0004d35d) popup_sk_window_t1

0x9455,	// (0x0004d36b) popup_sk_window_t1_copy1

0xe6f3,	// (0x00052609) cell_ai5_widget_pane_g2_ParamLimits

0xe88e,	// (0x000527a4) cell_ai5_widget_pane_t9_ParamLimits

0xe88e,	// (0x000527a4) cell_ai5_widget_pane_t9

0x09d7,	// (0x000448ed) main_fep_fshwr2_pane

0x9463,	// (0x0004d379) aid_fshwr2_btn_pane

0x9477,	// (0x0004d38d) aid_fshwr2_syb_pane

0x948b,	// (0x0004d3a1) aid_fshwr2_txt_pane

0x949b,	// (0x0004d3b1) fshwr2_func_candi_pane

0x94bf,	// (0x0004d3d5) fshwr2_hwr_syb_pane

0x94d9,	// (0x0004d3ef) fshwr2_icf_pane

0x09d7,	// (0x000448ed) fshwr2_icf_bg_pane

0x9507,	// (0x0004d41d) fshwr2_icf_pane_t1_ParamLimits

0x9507,	// (0x0004d41d) fshwr2_icf_pane_t1

0x124f,	// (0x00045165) fshwr2_func_candi_pane_g1

0xebaf,	// (0x00052ac5) fshwr2_func_candi_row_pane_ParamLimits

0xebaf,	// (0x00052ac5) fshwr2_func_candi_row_pane

0x9520,	// (0x0004d436) cell_fshwr2_syb_pane_ParamLimits

0x9520,	// (0x0004d436) cell_fshwr2_syb_pane

0xe4d2,	// (0x000523e8) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d2,	// (0x000523e8) fshwr2_hwr_syb_pane_g1

0x09d7,	// (0x000448ed) bg_popup_call_pane_cp01

0x9543,	// (0x0004d459) fshwr2_func_candi_cell_pane_ParamLimits

0x9543,	// (0x0004d459) fshwr2_func_candi_cell_pane

0xa752,	// (0x0004e668) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa752,	// (0x0004e668) fshwr2_func_candi_cell_bg_pane

0x958e,	// (0x0004d4a4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x958e,	// (0x0004d4a4) fshwr2_func_candi_cell_pane_g1

0x95ae,	// (0x0004d4c4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x95ae,	// (0x0004d4c4) fshwr2_func_candi_cell_pane_t1

0x09d7,	// (0x000448ed) bg_button_pane_cp08

0x0f3f,	// (0x00044e55) cell_fshwr2_syb_bg_pane

0x95c1,	// (0x0004d4d7) cell_fshwr2_syb_bg_pane_g1

0x95d5,	// (0x0004d4eb) cell_fshwr2_syb_bg_pane_t1

0x0dfd,	// (0x00044d13) main_tmo_pane

0xabeb,	// (0x0004eb01) uni_indicator_pane_g1_ParamLimits

0xabfe,	// (0x0004eb14) uni_indicator_pane_g2_ParamLimits

0xac10,	// (0x0004eb26) uni_indicator_pane_g3_ParamLimits

0xac1f,	// (0x0004eb35) uni_indicator_pane_g4_ParamLimits

0xac1f,	// (0x0004eb35) uni_indicator_pane_g4

0xac33,	// (0x0004eb49) uni_indicator_pane_g5_ParamLimits

0xac33,	// (0x0004eb49) uni_indicator_pane_g5

0xac33,	// (0x0004eb49) uni_indicator_pane_g6_ParamLimits

0xac33,	// (0x0004eb49) uni_indicator_pane_g6

0xf8f7,	// (0x0005380d) uni_indicator_pane_g_ParamLimits

0xd531,	// (0x00051447) popup_tmo_note_window_ParamLimits

0xd531,	// (0x00051447) popup_tmo_note_window

0x0dfd,	// (0x00044d13) fshwr2_bg_pane

0x959f,	// (0x0004d4b5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x959f,	// (0x0004d4b5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea0,	// (0x00053db6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea0,	// (0x00053db6) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x0004ff3c) bg_popup_window_pane_cp01

0x95eb,	// (0x0004d501) bg_popup_window_pane_g1_cp01

0xebd6,	// (0x00052aec) bg_popup_window_pane_cp22_ParamLimits

0xebd6,	// (0x00052aec) bg_popup_window_pane_cp22

0xebe4,	// (0x00052afa) listscroll_tmo_link_pane_ParamLimits

0xebe4,	// (0x00052afa) listscroll_tmo_link_pane

0xec24,	// (0x00052b3a) popup_tmo_note_window_g1_ParamLimits

0xec24,	// (0x00052b3a) popup_tmo_note_window_g1

0xec31,	// (0x00052b47) tmo_note_info_pane_ParamLimits

0xec31,	// (0x00052b47) tmo_note_info_pane

0xec4b,	// (0x00052b61) list_tmo_note_info_pane_g1_ParamLimits

0xec4b,	// (0x00052b61) list_tmo_note_info_pane_g1

0xec62,	// (0x00052b78) list_tmo_note_info_pane_g2_ParamLimits

0xec62,	// (0x00052b78) list_tmo_note_info_pane_g2

0x0001,

0xfea5,	// (0x00053dbb) list_tmo_note_info_pane_g_ParamLimits

0xfea5,	// (0x00053dbb) list_tmo_note_info_pane_g

0xec7e,	// (0x00052b94) list_tmo_note_info_text_pane_ParamLimits

0xec7e,	// (0x00052b94) list_tmo_note_info_text_pane

0xecff,	// (0x00052c15) list_tmo_link_pane

0xed0c,	// (0x00052c22) scroll_pane_cp20

0xed19,	// (0x00052c2f) list_single_tmo_link_pane_ParamLimits

0xed19,	// (0x00052c2f) list_single_tmo_link_pane

0xed29,	// (0x00052c3f) list_single_tmo_link_pane_t1

0xed37,	// (0x00052c4d) list_tmo_note_info_text_pane_t1_ParamLimits

0xed37,	// (0x00052c4d) list_tmo_note_info_text_pane_t1

0x6d69,	// (0x0004ac7f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6d69,	// (0x0004ac7f) aid_size_touch_scroll_bar_cp01

0x597a,	// (0x00049890) aid_size_touch_slider_marker

0x65d0,	// (0x0004a4e6) popup_settings_window_ParamLimits

0x65d0,	// (0x0004a4e6) popup_settings_window

0x5af5,	// (0x00049a0b) popup_candi_list_indi_window

0x7ed1,	// (0x0004bde7) aid_touch_navi_pane_ParamLimits

0x8c25,	// (0x0004cb3b) rs_clock_indi_pane

0x8c2e,	// (0x0004cb44) sctrl_sk_bottom_pane_ParamLimits

0x8c3f,	// (0x0004cb55) sctrl_sk_top_pane_ParamLimits

0x8d1e,	// (0x0004cc34) popup_fep_tooltip_window

0xe669,	// (0x0005257f) aid_size_cell_widget_grid_ParamLimits

0xe6de,	// (0x000525f4) cell_ai5_widget_pane_g1_ParamLimits

0xe6de,	// (0x000525f4) cell_ai5_widget_pane_g1

0xe741,	// (0x00052657) cell_ai5_widget_pane_g6_ParamLimits

0xe74d,	// (0x00052663) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe19,	// (0x00053d2f) cell_ai5_widget_pane_g_ParamLimits

0xfe19,	// (0x00053d2f) cell_ai5_widget_pane_g

0xe8bd,	// (0x000527d3) cell_ai5_widget_pane_t10_ParamLimits

0xe8bd,	// (0x000527d3) cell_ai5_widget_pane_t10

0xe900,	// (0x00052816) grid_ai5_widget_pane_ParamLimits

0xe998,	// (0x000528ae) cell_contacts_ai5_widget_pane_ParamLimits

0xe998,	// (0x000528ae) cell_contacts_ai5_widget_pane

0xeb72,	// (0x00052a88) popup_discreet_window_t3_ParamLimits

0xeb72,	// (0x00052a88) popup_discreet_window_t3

0x94f1,	// (0x0004d407) popup_fshwr2_char_preview_window_ParamLimits

0x94f1,	// (0x0004d407) popup_fshwr2_char_preview_window

0xec9c,	// (0x00052bb2) tmo_note_info_pane_t1

0xecb1,	// (0x00052bc7) tmo_note_info_pane_t2

0xecc6,	// (0x00052bdc) tmo_note_info_pane_t3

0xecdb,	// (0x00052bf1) tmo_note_info_pane_t4

0xeced,	// (0x00052c03) tmo_note_info_pane_t5

0x0004,

0xfeaa,	// (0x00053dc0) tmo_note_info_pane_t

0xecff,	// (0x00052c15) list_tmo_link_pane_ParamLimits

0xed0c,	// (0x00052c22) scroll_pane_cp20_ParamLimits

0x09d7,	// (0x000448ed) bg_popup_fep_char_preview_window_cp01

0xed50,	// (0x00052c66) popup_fshwr2_char_preview_window_t1

0xed5e,	// (0x00052c74) popup_candi_list_indi_window_g1

0xed67,	// (0x00052c7d) bg_cell_contacts_ai5_widget_pane

0xed73,	// (0x00052c89) cell_contacts_ai5_widget_pane_g1

0xc70d,	// (0x00050623) cell_contacts_ai5_widget_pane_g2

0xed88,	// (0x00052c9e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb5,	// (0x00053dcb) cell_contacts_ai5_widget_pane_g

0xed94,	// (0x00052caa) cell_contacts_ai5_widget_pane_t1

0x0dfd,	// (0x00044d13) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0b,	// (0x00052d21) settings_container_pane

0x16b9,	// (0x000455cf) listscroll_set_pane_copy1

0xb702,	// (0x0004f618) scroll_pane_cp121_copy1

0x9e9b,	// (0x0004ddb1) set_content_pane_copy1

0xee17,	// (0x00052d2d) aid_height_set_list_copy1_ParamLimits

0xee17,	// (0x00052d2d) aid_height_set_list_copy1

0xae2b,	// (0x0004ed41) aid_size_parent_copy1_ParamLimits

0xae2b,	// (0x0004ed41) aid_size_parent_copy1

0xee23,	// (0x00052d39) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee23,	// (0x00052d39) button_value_adjust_pane_cp6_copy1

0x0f3f,	// (0x00044e55) list_highlight_pane_cp2_copy1_ParamLimits

0x0f3f,	// (0x00044e55) list_highlight_pane_cp2_copy1

0xee37,	// (0x00052d4d) list_set_pane_copy1_ParamLimits

0xee37,	// (0x00052d4d) list_set_pane_copy1

0xeda6,	// (0x00052cbc) main_pane_set_t1_copy1_ParamLimits

0xeda6,	// (0x00052cbc) main_pane_set_t1_copy1

0xede0,	// (0x00052cf6) main_pane_set_t2_copy1_ParamLimits

0xede0,	// (0x00052cf6) main_pane_set_t2_copy1

0xeee4,	// (0x00052dfa) main_pane_set_t3_copy1

0xeef2,	// (0x00052e08) main_pane_set_t4_copy1

0xedff,	// (0x00052d15) set_content_pane_g1_copy1_ParamLimits

0xedff,	// (0x00052d15) set_content_pane_g1_copy1

0xef00,	// (0x00052e16) setting_code_pane_copy1

0xef08,	// (0x00052e1e) setting_slider_graphic_pane_copy1

0xef08,	// (0x00052e1e) setting_slider_pane_copy1

0xef10,	// (0x00052e26) setting_text_pane_copy1

0xef10,	// (0x00052e26) setting_volume_pane_copy1

0xef00,	// (0x00052e16) settings_code_pane_cp2_copy1

0xef18,	// (0x00052e2e) settings_code_pane_cp_copy1_ParamLimits

0xef18,	// (0x00052e2e) settings_code_pane_cp_copy1

0x95f4,	// (0x0004d50a) volume_set_pane_copy1

0xef2c,	// (0x00052e42) volume_set_pane_g10_copy1

0xef34,	// (0x00052e4a) volume_set_pane_g1_copy1

0xef3c,	// (0x00052e52) volume_set_pane_g2_copy1

0xef44,	// (0x00052e5a) volume_set_pane_g3_copy1

0xef4c,	// (0x00052e62) volume_set_pane_g4_copy1

0xef54,	// (0x00052e6a) volume_set_pane_g5_copy1

0xef5c,	// (0x00052e72) volume_set_pane_g6_copy1

0xef64,	// (0x00052e7a) volume_set_pane_g7_copy1

0xef6c,	// (0x00052e82) volume_set_pane_g8_copy1

0xef74,	// (0x00052e8a) volume_set_pane_g9_copy1

0x0a47,	// (0x0004495d) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a47,	// (0x0004495d) bg_set_opt_pane_cp_copy1

0x95fc,	// (0x0004d512) setting_slider_pane_t1_copy1_ParamLimits

0x95fc,	// (0x0004d512) setting_slider_pane_t1_copy1

0x961b,	// (0x0004d531) setting_slider_pane_t2_copy1_ParamLimits

0x961b,	// (0x0004d531) setting_slider_pane_t2_copy1

0x9635,	// (0x0004d54b) setting_slider_pane_t3_copy1_ParamLimits

0x9635,	// (0x0004d54b) setting_slider_pane_t3_copy1

0x964d,	// (0x0004d563) slider_set_pane_copy1_ParamLimits

0x964d,	// (0x0004d563) slider_set_pane_copy1

0x0e55,	// (0x00044d6b) set_opt_bg_pane_g1_copy2

0x0e5d,	// (0x00044d73) set_opt_bg_pane_g2_copy2

0xef7c,	// (0x00052e92) set_opt_bg_pane_g3_copy2

0x0e6d,	// (0x00044d83) set_opt_bg_pane_g4_copy2

0x0e75,	// (0x00044d8b) set_opt_bg_pane_g5_copy2

0x0e7d,	// (0x00044d93) set_opt_bg_pane_g6_copy2

0xef86,	// (0x00052e9c) set_opt_bg_pane_g7_copy2

0xef8e,	// (0x00052ea4) set_opt_bg_pane_g8_copy2

0xef98,	// (0x00052eae) set_opt_bg_pane_g9_copy2

0x9663,	// (0x0004d579) aid_size_touch_slider_mark_copy1_ParamLimits

0x9663,	// (0x0004d579) aid_size_touch_slider_mark_copy1

0xefa2,	// (0x00052eb8) slider_set_pane_g1_copy1

0x9677,	// (0x0004d58d) slider_set_pane_g2_copy1

0x84c0,	// (0x0004c3d6) slider_set_pane_g3_copy1_ParamLimits

0x84c0,	// (0x0004c3d6) slider_set_pane_g3_copy1

0x84d4,	// (0x0004c3ea) slider_set_pane_g4_copy1_ParamLimits

0x84d4,	// (0x0004c3ea) slider_set_pane_g4_copy1

0x84ec,	// (0x0004c402) slider_set_pane_g5_copy1_ParamLimits

0x84ec,	// (0x0004c402) slider_set_pane_g5_copy1

0x84c0,	// (0x0004c3d6) slider_set_pane_g6_copy1_ParamLimits

0x84c0,	// (0x0004c3d6) slider_set_pane_g6_copy1

0x967f,	// (0x0004d595) slider_set_pane_g7_copy1_ParamLimits

0x967f,	// (0x0004d595) slider_set_pane_g7_copy1

0x09eb,	// (0x00044901) bg_set_opt_pane_cp2_copy1

0xefab,	// (0x00052ec1) setting_slider_graphic_pane_g1_copy1

0xefb4,	// (0x00052eca) setting_slider_graphic_pane_t1_copy1

0xefc4,	// (0x00052eda) setting_slider_graphic_pane_t2_copy1

0xefd4,	// (0x00052eea) slider_set_pane_cp_copy1

0xefe4,	// (0x00052efa) input_focus_pane_cp1_copy1

0xefed,	// (0x00052f03) list_set_text_pane_copy1

0xeff5,	// (0x00052f0b) setting_text_pane_g1_copy1

0x62c9,	// (0x0004a1df) set_text_pane_t1_copy1

0xefe4,	// (0x00052efa) input_focus_pane_cp2_copy1

0xeff5,	// (0x00052f0b) setting_code_pane_g1_copy1

0xeffe,	// (0x00052f14) setting_code_pane_t1_copy1

0xf00c,	// (0x00052f22) list_set_graphic_pane_copy1

0x09eb,	// (0x00044901) bg_set_opt_pane_cp4_copy1

0x142a,	// (0x00045340) list_set_graphic_pane_g1_copy1_ParamLimits

0x142a,	// (0x00045340) list_set_graphic_pane_g1_copy1

0xf020,	// (0x00052f36) list_set_graphic_pane_g2_copy1

0x1442,	// (0x00045358) list_set_graphic_pane_t1_copy1_ParamLimits

0x1442,	// (0x00045358) list_set_graphic_pane_t1_copy1

0xc026,	// (0x0004ff3c) rs_clock_indi_pane_g1

0xf028,	// (0x00052f3e) rs_clock_indi_pane_t1

0xf036,	// (0x00052f4c) rs_indi_pane

0xf03e,	// (0x00052f54) rs_indi_pane_g1

0xf047,	// (0x00052f5d) rs_indi_pane_g2

0xed5e,	// (0x00052c74) rs_indi_pane_g3

0x0002,

0xfebc,	// (0x00053dd2) rs_indi_pane_g

0x16b9,	// (0x000455cf) bg_popup_preview_window_pane_cp03

0xf050,	// (0x00052f66) popup_fep_tooltip_window_t1

0xcce0,	// (0x00050bf6) popup_note2_window_g2_ParamLimits

0xcce0,	// (0x00050bf6) popup_note2_window_g2

0x0001,

0xfc50,	// (0x00053b66) popup_note2_window_g_ParamLimits

0xfc50,	// (0x00053b66) popup_note2_window_g

0xd1cd,	// (0x000510e3) bg_popup_sub_pane_cp11_ParamLimits

0xd1da,	// (0x000510f0) cell_ai3_links_pane_g1_ParamLimits

0xd1f1,	// (0x00051107) cell_ai3_links_pane_t1

0x62c9,	// (0x0004a1df) set_text_pane_t1_copy1_ParamLimits

0x15ef,	// (0x00045505) cell_graphic_popup_pane_cp2_ParamLimits

0x15ef,	// (0x00045505) cell_graphic_popup_pane_cp2

0xf05e,	// (0x00052f74) cell_graphic_popup_pane_g1_cp2

0x0ccb,	// (0x00044be1) cell_graphic_popup_pane_g2_cp2

0xf066,	// (0x00052f7c) cell_graphic_popup_pane_g3_cp2

0xf06e,	// (0x00052f84) cell_graphic_popup_pane_t2_cp2

0x0cdc,	// (0x00044bf2) grid_highlight_pane_cp3_cp2

0x10cc,	// (0x00044fe2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dfd,	// (0x00044d13) main_tmo_pane_ParamLimits

0xd525,	// (0x0005143b) popup_tmo_big_image_note_window

0xe6cd,	// (0x000525e3) cell_ai5_widget_list_pane

0xe6d5,	// (0x000525eb) cell_ai5_widget_lrg_icon_pane

0xec9c,	// (0x00052bb2) tmo_note_info_pane_t1_ParamLimits

0xecb1,	// (0x00052bc7) tmo_note_info_pane_t2_ParamLimits

0xecc6,	// (0x00052bdc) tmo_note_info_pane_t3_ParamLimits

0xecdb,	// (0x00052bf1) tmo_note_info_pane_t4_ParamLimits

0xeced,	// (0x00052c03) tmo_note_info_pane_t5_ParamLimits

0xfeaa,	// (0x00053dc0) tmo_note_info_pane_t_ParamLimits

0xee0b,	// (0x00052d21) settings_container_pane_ParamLimits

0xefdc,	// (0x00052ef2) indicator_popup_pane_cp5

0xefdc,	// (0x00052ef2) indicator_popup_pane_cp6

0xf00c,	// (0x00052f22) list_set_graphic_pane_copy1_ParamLimits

0x09d7,	// (0x000448ed) bg_popup_window_pane_cp23

0xf07c,	// (0x00052f92) popup_tmo_big_image_note_window_g1

0xf085,	// (0x00052f9b) popup_tmo_big_image_note_window_t1

0xf095,	// (0x00052fab) popup_tmo_big_image_note_window_t2

0xf0a5,	// (0x00052fbb) popup_tmo_big_image_note_window_t3

0x0002,

0xfec3,	// (0x00053dd9) popup_tmo_big_image_note_window_t

0xc026,	// (0x0004ff3c) cell_ai5_widget_lrg_icon_pane_g1

0xf0b5,	// (0x00052fcb) cell_ai5_widget_lrg_icon_pane_t1

0xf0c3,	// (0x00052fd9) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c3,	// (0x00052fd9) cell_ai5_widget_list_row_pane

0xf0da,	// (0x00052ff0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0da,	// (0x00052ff0) cell_ai5_widget_list_row_pane_g1

0xf0e7,	// (0x00052ffd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0e7,	// (0x00052ffd) cell_ai5_widget_list_row_pane_t1

0xf112,	// (0x00053028) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf112,	// (0x00053028) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeca,	// (0x00053de0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeca,	// (0x00053de0) cell_ai5_widget_list_row_pane_t

0x09d7,	// (0x000448ed) main_fep_vtchi_ss_pane

0xf162,	// (0x00053078) popup_fep_char_pre_window

0xf16a,	// (0x00053080) popup_fep_ituss_window

0xf196,	// (0x000530ac) popup_fep_vkbss_window

0x0f3f,	// (0x00044e55) grid_vkbss_keypad_pane_ParamLimits

0x0f3f,	// (0x00044e55) grid_vkbss_keypad_pane

0xf1d6,	// (0x000530ec) ituss_keypad_pane

0x969f,	// (0x0004d5b5) aid_vkbss_key_offset_ParamLimits

0x969f,	// (0x0004d5b5) aid_vkbss_key_offset

0x96ab,	// (0x0004d5c1) cell_vkbss_key_pane_ParamLimits

0x96ab,	// (0x0004d5c1) cell_vkbss_key_pane

0xf1e6,	// (0x000530fc) bg_cell_vkbss_key_g1_ParamLimits

0xf1e6,	// (0x000530fc) bg_cell_vkbss_key_g1

0xf1f2,	// (0x00053108) cell_vkbss_key_3p_pane_ParamLimits

0xf1f2,	// (0x00053108) cell_vkbss_key_3p_pane

0xf228,	// (0x0005313e) cell_vkbss_key_g1_ParamLimits

0xf228,	// (0x0005313e) cell_vkbss_key_g1

0xf25e,	// (0x00053174) cell_vkbss_key_t1_ParamLimits

0xf25e,	// (0x00053174) cell_vkbss_key_t1

0x96f6,	// (0x0004d60c) cell_ituss_key_pane_ParamLimits

0x96f6,	// (0x0004d60c) cell_ituss_key_pane

0xf2ba,	// (0x000531d0) bg_cell_ituss_key_g1_ParamLimits

0xf2ba,	// (0x000531d0) bg_cell_ituss_key_g1

0xf2c6,	// (0x000531dc) cell_ituss_key_pane_g1_ParamLimits

0xf2c6,	// (0x000531dc) cell_ituss_key_pane_g1

0x9707,	// (0x0004d61d) cell_ituss_key_pane_g2_ParamLimits

0x9707,	// (0x0004d61d) cell_ituss_key_pane_g2

0x0005,

0xfed1,	// (0x00053de7) cell_ituss_key_pane_g_ParamLimits

0xfed1,	// (0x00053de7) cell_ituss_key_pane_g

0x978b,	// (0x0004d6a1) cell_ituss_key_t1_ParamLimits

0x978b,	// (0x0004d6a1) cell_ituss_key_t1

0x97c5,	// (0x0004d6db) cell_ituss_key_t2_ParamLimits

0x97c5,	// (0x0004d6db) cell_ituss_key_t2

0x97f7,	// (0x0004d70d) cell_ituss_key_t3_ParamLimits

0x97f7,	// (0x0004d70d) cell_ituss_key_t3

0x9828,	// (0x0004d73e) cell_ituss_key_t4_ParamLimits

0x9828,	// (0x0004d73e) cell_ituss_key_t4

0x0004,

0xfede,	// (0x00053df4) cell_ituss_key_t_ParamLimits

0xfede,	// (0x00053df4) cell_ituss_key_t

0xf2ec,	// (0x00053202) cell_vkbss_key_3p_pane_g1

0xf2f4,	// (0x0005320a) cell_vkbss_key_3p_pane_g2

0xf2fc,	// (0x00053212) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee9,	// (0x00053dff) cell_vkbss_key_3p_pane_g

0x16b9,	// (0x000455cf) bg_popup_fep_char_preview_window_cp02

0xf304,	// (0x0005321a) popup_fep_char_pre_window_t1

0xe656,	// (0x0005256c) main_ai5_sk_pane

0xed67,	// (0x00052c7d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed73,	// (0x00052c89) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc70d,	// (0x00050623) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed88,	// (0x00052c9e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb5,	// (0x00053dcb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed94,	// (0x00052caa) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dfd,	// (0x00044d13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf312,	// (0x00053228) main_ai5_sk_pane_g1

0x9f37,	// (0x0004de4d) popup_query_code_window_g1

0xf180,	// (0x00053096) popup_fep_vkb_icf_pane

0xf1ad,	// (0x000530c3) popup_fep_vtchi_icf_pane

0xf31b,	// (0x00053231) bg_icf_pane

0xf31b,	// (0x00053231) list_vkb_icf_pane

0xf327,	// (0x0005323d) bg_icf_pane_cp01

0xf33a,	// (0x00053250) vtchi_icf_list_pane

0xf39a,	// (0x000532b0) list_vkb_icf_pane_t1_ParamLimits

0xf39a,	// (0x000532b0) list_vkb_icf_pane_t1

0xf3bf,	// (0x000532d5) vtchi_icf_list_pane_t1_ParamLimits

0xf3bf,	// (0x000532d5) vtchi_icf_list_pane_t1

0xf16a,	// (0x00053080) popup_fep_ituss_window_ParamLimits

0xf1ad,	// (0x000530c3) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d6,	// (0x000530ec) ituss_keypad_pane_ParamLimits

0x9695,	// (0x0004d5ab) ituss_sks_pane

0xf31b,	// (0x00053231) bg_icf_pane_ParamLimits

0xf13a,	// (0x00053050) icf_edit_indi_pane_ParamLimits

0xf13a,	// (0x00053050) icf_edit_indi_pane

0xf31b,	// (0x00053231) list_vkb_icf_pane_ParamLimits

0xf327,	// (0x0005323d) bg_icf_pane_cp01_ParamLimits

0xf155,	// (0x0005306b) icf_edit_indi_pane_cp01_ParamLimits

0xf155,	// (0x0005306b) icf_edit_indi_pane_cp01

0xf33a,	// (0x00053250) vtchi_query_pane

0xe4d2,	// (0x000523e8) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x000523e8) icf_edit_indi_pane_g1

0xf43a,	// (0x00053350) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x00053350) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00053e2a) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00053e2a) icf_edit_indi_pane_g

0xf44e,	// (0x00053364) icf_edit_indi_pane_t1

0xf3e3,	// (0x000532f9) bg_input_focus_pane_cp042

0x0d3f,	// (0x00044c55) vtchi_button_pane

0xf3ec,	// (0x00053302) vtchi_query_pane_t1

0xf3fa,	// (0x00053310) vtchi_query_pane_t2

0xf408,	// (0x0005331e) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00053e19) vtchi_query_pane_t

0x09d7,	// (0x000448ed) bg_button_pane_cp13

0xf416,	// (0x0005332c) vtchi_button_pane_g1

0x986b,	// (0x0004d781) ituss_sks_pane_g1

0x9876,	// (0x0004d78c) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00053e20) ituss_sks_pane_g

0xf41e,	// (0x00053334) ituss_sks_pane_t1

0xf42c,	// (0x00053342) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00053e25) ituss_sks_pane_t

0xba9a,	// (0x0004f9b0) indicator_nsta_pane_cp_g1

0xbaa3,	// (0x0004f9b9) indicator_nsta_pane_cp_g2

0xbaab,	// (0x0004f9c1) indicator_nsta_pane_cp_g3

0xbab3,	// (0x0004f9c9) indicator_nsta_pane_cp_g4

0xbaa3,	// (0x0004f9b9) indicator_nsta_pane_cp_g5

0xbaab,	// (0x0004f9c1) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x000539b0) indicator_nsta_pane_cp_g

0xe225,	// (0x0005213b) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x0005213b) cell_graphic2_pane_t2

0x0001,

0xfda0,	// (0x00053cb6) cell_graphic2_pane_t_ParamLimits

0xfda0,	// (0x00053cb6) cell_graphic2_pane_t

0xe251,	// (0x00052167) cell_graphic2_control_pane_t1

0x7233,	// (0x0004b149) signal_pane_g3_ParamLimits

0x7233,	// (0x0004b149) signal_pane_g3

0x7245,	// (0x0004b15b) signal_pane_g4_ParamLimits

0x7245,	// (0x0004b15b) signal_pane_g4

0xf124,	// (0x0005303a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf124,	// (0x0005303a) cell_ai5_widget_list_row_pane_t3

0xf2da,	// (0x000531f0) cell_ituss_key_pane_t1_ParamLimits

0xf2da,	// (0x000531f0) cell_ituss_key_pane_t1

0x9b6a,	// (0x0004da80) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b6a,	// (0x0004da80) form_field_data_wide_pane_vc_t2

0x9b7e,	// (0x0004da94) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b7e,	// (0x0004da94) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000536f5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000536f5) form_field_data_wide_pane_vc_t

0xb744,	// (0x0004f65a) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb744,	// (0x0004f65a) form_field_slider_wide_pane_vc_t3

0xb822,	// (0x0004f738) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb822,	// (0x0004f738) form_field_popup_wide_pane_vc_t2

0xb839,	// (0x0004f74f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb839,	// (0x0004f74f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005399f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005399f) form_field_popup_wide_pane_vc_t

0x9463,	// (0x0004d379) aid_fshwr2_btn_pane_ParamLimits

0x9477,	// (0x0004d38d) aid_fshwr2_syb_pane_ParamLimits

0x948b,	// (0x0004d3a1) aid_fshwr2_txt_pane_ParamLimits

0x0dfd,	// (0x00044d13) fshwr2_bg_pane_ParamLimits

0x949b,	// (0x0004d3b1) fshwr2_func_candi_pane_ParamLimits

0x94bf,	// (0x0004d3d5) fshwr2_hwr_syb_pane_ParamLimits

0x94d9,	// (0x0004d3ef) fshwr2_icf_pane_ParamLimits

0x8751,	// (0x0004c667) list_double_graphic_pane_vc_g4_ParamLimits

0x8751,	// (0x0004c667) list_double_graphic_pane_vc_g4

0x9727,	// (0x0004d63d) cell_ituss_key_pane_g3_ParamLimits

0x9727,	// (0x0004d63d) cell_ituss_key_pane_g3

0x9859,	// (0x0004d76f) cell_ituss_key_t5_ParamLimits

0x9859,	// (0x0004d76f) cell_ituss_key_t5

0xf196,	// (0x000530ac) popup_fep_vkbss_window_ParamLimits

0xe660,	// (0x00052576) aid_cell_ai5_quarter

0xf44e,	// (0x00053364) icf_edit_indi_pane_t1_ParamLimits

0x6954,	// (0x0004a86a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6954,	// (0x0004a86a) aid_tch_indicator_popup_pane_cp2

0x6967,	// (0x0004a87d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6967,	// (0x0004a87d) aid_tch_query_popup_data_pane_cp2

0x9edf,	// (0x0004ddf5) aid_tch_query_popup_pane_ParamLimits

0x9edf,	// (0x0004ddf5) aid_tch_query_popup_pane

0x9edf,	// (0x0004ddf5) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9edf,	// (0x0004ddf5) aid_tch_query_popup_data_pane_cp1

0x0f3f,	// (0x00044e55) cell_fshwr2_syb_bg_pane_ParamLimits

0x95c1,	// (0x0004d4d7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x95d5,	// (0x0004d4eb) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf180,	// (0x00053096) popup_fep_vkb_icf_pane_ParamLimits

0x92b1,	// (0x0004d1c7) bg_popup_fep_char_preview_window_g10

0xe795,	// (0x000526ab) cell_ai5_widget_pane_g11_ParamLimits

0xe795,	// (0x000526ab) cell_ai5_widget_pane_g11

0xe7a1,	// (0x000526b7) cell_ai5_widget_pane_g12_ParamLimits

0xe7a1,	// (0x000526b7) cell_ai5_widget_pane_g12

0xe7ad,	// (0x000526c3) cell_ai5_widget_pane_g13_ParamLimits

0xe7ad,	// (0x000526c3) cell_ai5_widget_pane_g13

0xe8dc,	// (0x000527f2) cell_ai5_widget_pane_t11_ParamLimits

0xe8dc,	// (0x000527f2) cell_ai5_widget_pane_t11

0xe8ee,	// (0x00052804) cell_ai5_widget_pane_t12_ParamLimits

0xe8ee,	// (0x00052804) cell_ai5_widget_pane_t12

0x9733,	// (0x0004d649) cell_ituss_key_pane_g4_ParamLimits

0x9733,	// (0x0004d649) cell_ituss_key_pane_g4

0x974f,	// (0x0004d665) cell_ituss_key_pane_g5_ParamLimits

0x974f,	// (0x0004d665) cell_ituss_key_pane_g5

0x976b,	// (0x0004d681) cell_ituss_key_pane_g6_ParamLimits

0x976b,	// (0x0004d681) cell_ituss_key_pane_g6

0x9a50,	// (0x0004d966) bg_icf_pane_g1

0xf342,	// (0x00053258) bg_icf_pane_g2

0xf34e,	// (0x00053264) bg_icf_pane_g3

0xf358,	// (0x0005326e) bg_icf_pane_g4

0xf364,	// (0x0005327a) bg_icf_pane_g5

0xf36e,	// (0x00053284) bg_icf_pane_g6

0xf37a,	// (0x00053290) bg_icf_pane_g7

0xf384,	// (0x0005329a) bg_icf_pane_g8

0xf390,	// (0x000532a6) bg_icf_pane_g9

0x0008,

0xfef0,	// (0x00053e06) bg_icf_pane_g

0xf1c3,	// (0x000530d9) popup_hyb_candi_window_ParamLimits

0xf1c3,	// (0x000530d9) popup_hyb_candi_window

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp01_ParamLimits

0x9adc,	// (0x0004d9f2) bg_popup_sub_pane_cp01

0xf467,	// (0x0005337d) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0005337d) entry_hyb_candi_pane

0xf476,	// (0x0005338c) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0005338c) grid_hyb_candi_pane

0xf48b,	// (0x000533a1) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x000533a1) grid_hyb_phrase_pane

0xf49a,	// (0x000533b0) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x000533b0) cell_hyb_candi_pane

0xf4bd,	// (0x000533d3) cell_hyb_candi_scroll_pane

0x124f,	// (0x00045165) cell_hyb_candi_pane_g1

0xf4c6,	// (0x000533dc) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000533ea) cell_hyb_phrase_pane

0x124f,	// (0x00045165) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000533f3) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x00053401) entry_hyb_candi_pane_t1

0x16b9,	// (0x000455cf) input_focus_pane_cp06

0xf4f9,	// (0x0005340f) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x00053417) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0005341f) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x00053427) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0005342f) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x00053437) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large

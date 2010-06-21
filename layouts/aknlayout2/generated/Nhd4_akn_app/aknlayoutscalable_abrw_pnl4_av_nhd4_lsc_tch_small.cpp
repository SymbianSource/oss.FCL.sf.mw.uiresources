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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00037bbe };

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
0x891c,	// (0x000404da) Screen

0x8928,	// (0x000404e6) application_window_ParamLimits

0x8928,	// (0x000404e6) application_window

0xb299,	// (0x00042e57) screen_g1

0x8960,	// (0x0004051e) area_bottom_pane_ParamLimits

0x8960,	// (0x0004051e) area_bottom_pane

0xed11,	// (0x000468cf) area_top_pane_ParamLimits

0xed11,	// (0x000468cf) area_top_pane

0xedaf,	// (0x0004696d) main_pane_ParamLimits

0xedaf,	// (0x0004696d) main_pane

0xb2a3,	// (0x00042e61) misc_graphics

0xa706,	// (0x000422c4) battery_pane_ParamLimits

0xa706,	// (0x000422c4) battery_pane

0x2ef9,	// (0x0003aab7) bg_status_flat_pane_g8

0x2f01,	// (0x0003aabf) bg_status_flat_pane_g9

0x22f3,	// (0x00039eb1) context_pane_ParamLimits

0x22f3,	// (0x00039eb1) context_pane

0xbd99,	// (0x00043957) navi_pane_ParamLimits

0xbd99,	// (0x00043957) navi_pane

0xbe17,	// (0x000439d5) signal_pane_ParamLimits

0xbe17,	// (0x000439d5) signal_pane

0x0008,

0xf85e,	// (0x0004741c) bg_status_flat_pane_g

0xbea7,	// (0x00043a65) status_pane_g1_ParamLimits

0xbea7,	// (0x00043a65) status_pane_g1

0xbebd,	// (0x00043a7b) status_pane_g2_ParamLimits

0xbebd,	// (0x00043a7b) status_pane_g2

0x251a,	// (0x0003a0d8) status_pane_g3_ParamLimits

0x251a,	// (0x0003a0d8) status_pane_g3

0x0004,

0xf791,	// (0x0004734f) status_pane_g_ParamLimits

0xf791,	// (0x0004734f) status_pane_g

0xbec9,	// (0x00043a87) title_pane_ParamLimits

0xbec9,	// (0x00043a87) title_pane

0xbf2c,	// (0x00043aea) uni_indicator_pane_ParamLimits

0xbf2c,	// (0x00043aea) uni_indicator_pane

0x215b,	// (0x00039d19) bg_list_pane_ParamLimits

0x215b,	// (0x00039d19) bg_list_pane

0xd45e,	// (0x0004501c) find_pane

0x2716,	// (0x0003a2d4) listscroll_app_pane_ParamLimits

0x2716,	// (0x0003a2d4) listscroll_app_pane

0x2187,	// (0x00039d45) listscroll_form_pane

0xf01c,	// (0x00046bda) listscroll_gen_pane_ParamLimits

0xf01c,	// (0x00046bda) listscroll_gen_pane

0x0352,	// (0x00037f10) listscroll_set_pane

0x3a5d,	// (0x0003b61b) main_idle_act_pane

0xf546,	// (0x00047104) main_idle_trad_pane

0xf546,	// (0x00047104) main_list_empty_pane

0x217b,	// (0x00039d39) main_midp_pane

0x21a1,	// (0x00039d5f) main_pane_g1_ParamLimits

0x21a1,	// (0x00039d5f) main_pane_g1

0x9eea,	// (0x00041aa8) popup_ai_message_window_ParamLimits

0x9eea,	// (0x00041aa8) popup_ai_message_window

0x9f9b,	// (0x00041b59) popup_fep_china_uni_window_ParamLimits

0x9f9b,	// (0x00041b59) popup_fep_china_uni_window

0x9ff5,	// (0x00041bb3) popup_fep_japan_candidate_window_ParamLimits

0x9ff5,	// (0x00041bb3) popup_fep_japan_candidate_window

0xa013,	// (0x00041bd1) popup_fep_japan_predictive_window_ParamLimits

0xa013,	// (0x00041bd1) popup_fep_japan_predictive_window

0xa025,	// (0x00041be3) popup_find_window

0xa042,	// (0x00041c00) popup_grid_graphic_window_ParamLimits

0xa042,	// (0x00041c00) popup_grid_graphic_window

0xa0e0,	// (0x00041c9e) popup_large_graphic_colour_window

0xa106,	// (0x00041cc4) popup_menu_window_ParamLimits

0xa106,	// (0x00041cc4) popup_menu_window

0xa2d8,	// (0x00041e96) popup_note_image_window

0xa29e,	// (0x00041e5c) popup_note_wait_window_ParamLimits

0xa29e,	// (0x00041e5c) popup_note_wait_window

0xa2f0,	// (0x00041eae) popup_note_window_ParamLimits

0xa2f0,	// (0x00041eae) popup_note_window

0xa39f,	// (0x00041f5d) popup_query_code_window_ParamLimits

0xa39f,	// (0x00041f5d) popup_query_code_window

0xa3d9,	// (0x00041f97) popup_query_data_code_window_ParamLimits

0xa3d9,	// (0x00041f97) popup_query_data_code_window

0xa3f6,	// (0x00041fb4) popup_query_data_window_ParamLimits

0xa3f6,	// (0x00041fb4) popup_query_data_window

0xa478,	// (0x00042036) popup_query_sat_info_window_ParamLimits

0xa478,	// (0x00042036) popup_query_sat_info_window

0xa50f,	// (0x000420cd) popup_snote_single_graphic_window_ParamLimits

0xa50f,	// (0x000420cd) popup_snote_single_graphic_window

0xa50f,	// (0x000420cd) popup_snote_single_text_window_ParamLimits

0xa50f,	// (0x000420cd) popup_snote_single_text_window

0x07be,	// (0x0003837c) popup_sub_window_general

0xa66c,	// (0x0004222a) popup_window_general_ParamLimits

0xa66c,	// (0x0004222a) popup_window_general

0x21af,	// (0x00039d6d) power_save_pane

0x9d48,	// (0x00041906) control_pane_g1_ParamLimits

0x9d48,	// (0x00041906) control_pane_g1

0x9d71,	// (0x0004192f) control_pane_g2_ParamLimits

0x9d71,	// (0x0004192f) control_pane_g2

0x211e,	// (0x00039cdc) control_pane_g3_ParamLimits

0x211e,	// (0x00039cdc) control_pane_g3

0x0007,

0xf779,	// (0x00047337) control_pane_g_ParamLimits

0xf779,	// (0x00047337) control_pane_g

0x9dd9,	// (0x00041997) control_pane_t1_ParamLimits

0x9dd9,	// (0x00041997) control_pane_t1

0x9e3f,	// (0x000419fd) control_pane_t2_ParamLimits

0x9e3f,	// (0x000419fd) control_pane_t2

0x0002,

0xf78a,	// (0x00047348) control_pane_t_ParamLimits

0xf78a,	// (0x00047348) control_pane_t

0x9ca1,	// (0x0004185f) navi_navi_volume_pane_cp1

0x9ca9,	// (0x00041867) status_small_icon_pane

0x2053,	// (0x00039c11) status_small_pane_g1_ParamLimits

0x2053,	// (0x00039c11) status_small_pane_g1

0x9cb1,	// (0x0004186f) status_small_pane_g2_ParamLimits

0x9cb1,	// (0x0004186f) status_small_pane_g2

0x9cbd,	// (0x0004187b) status_small_pane_g3_ParamLimits

0x9cbd,	// (0x0004187b) status_small_pane_g3

0x9cc9,	// (0x00041887) status_small_pane_g4_ParamLimits

0x9cc9,	// (0x00041887) status_small_pane_g4

0x9cd5,	// (0x00041893) status_small_pane_g5_ParamLimits

0x9cd5,	// (0x00041893) status_small_pane_g5

0x9ce3,	// (0x000418a1) status_small_pane_g6_ParamLimits

0x9ce3,	// (0x000418a1) status_small_pane_g6

0x0007,

0xf768,	// (0x00047326) status_small_pane_g_ParamLimits

0xf768,	// (0x00047326) status_small_pane_g

0x9d12,	// (0x000418d0) status_small_pane_t1

0x9d34,	// (0x000418f2) status_small_wait_pane_ParamLimits

0x9d34,	// (0x000418f2) status_small_wait_pane

0x9993,	// (0x00041551) aid_levels_signal_ParamLimits

0x9993,	// (0x00041551) aid_levels_signal

0x99ab,	// (0x00041569) signal_pane_g1_ParamLimits

0x99ab,	// (0x00041569) signal_pane_g1

0x99c6,	// (0x00041584) signal_pane_g2_ParamLimits

0x99c6,	// (0x00041584) signal_pane_g2

0x0003,

0xf6f9,	// (0x000472b7) signal_pane_g_ParamLimits

0xf6f9,	// (0x000472b7) signal_pane_g

0xbb3c,	// (0x000436fa) context_pane_g1

0x8b5e,	// (0x0004071c) title_pane_g1

0x8b95,	// (0x00040753) title_pane_t1

0xb2b9,	// (0x00042e77) title_pane_t2

0xb2df,	// (0x00042e9d) title_pane_t3

0x0002,

0xf557,	// (0x00047115) title_pane_t

0xbf54,	// (0x00043b12) aid_levels_battery_ParamLimits

0xbf54,	// (0x00043b12) aid_levels_battery

0xbf70,	// (0x00043b2e) battery_pane_g1_ParamLimits

0xbf70,	// (0x00043b2e) battery_pane_g1

0xbf8d,	// (0x00043b4b) battery_pane_g2_ParamLimits

0xbf8d,	// (0x00043b4b) battery_pane_g2

0x0001,

0xf79c,	// (0x0004735a) battery_pane_g_ParamLimits

0xf79c,	// (0x0004735a) battery_pane_g

0xc553,	// (0x00044111) uni_indicator_pane_g1

0xc569,	// (0x00044127) uni_indicator_pane_g2

0xc57f,	// (0x0004413d) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x000474c4) uni_indicator_pane_g

0xf3e6,	// (0x00046fa4) navi_icon_pane_ParamLimits

0xf3e6,	// (0x00046fa4) navi_icon_pane

0xf33b,	// (0x00046ef9) navi_midp_pane

0xf402,	// (0x00046fc0) navi_navi_pane

0xf40c,	// (0x00046fca) navi_text_pane_ParamLimits

0xf40c,	// (0x00046fca) navi_text_pane

0xb299,	// (0x00042e57) status_small_wait_pane_g1

0xb530,	// (0x000430ee) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x000474bf) status_small_wait_pane_g

0xc4ac,	// (0x0004406a) navi_navi_icon_text_pane

0x354c,	// (0x0003b10a) navi_navi_pane_g1_ParamLimits

0x354c,	// (0x0003b10a) navi_navi_pane_g1

0x355e,	// (0x0003b11c) navi_navi_pane_g2_ParamLimits

0x355e,	// (0x0003b11c) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x0004748d) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x0004748d) navi_navi_pane_g

0x3570,	// (0x0003b12e) navi_navi_tabs_pane

0x3579,	// (0x0003b137) navi_navi_text_pane

0xc4ac,	// (0x0004406a) navi_navi_volume_pane

0x3520,	// (0x0003b0de) navi_text_pane_t1

0x3514,	// (0x0003b0d2) navi_icon_pane_g1

0x3467,	// (0x0003b025) navi_navi_text_pane_t1

0xa825,	// (0x000423e3) navi_navi_volume_pane_g1

0x0bdb,	// (0x00038799) volume_small_pane

0x33cd,	// (0x0003af8b) navi_navi_icon_text_pane_g1

0xc404,	// (0x00043fc2) navi_navi_icon_text_pane_t1

0xf402,	// (0x00046fc0) navi_tabs_2_long_pane

0xf402,	// (0x00046fc0) navi_tabs_2_pane

0xf402,	// (0x00046fc0) navi_tabs_3_long_pane

0xf402,	// (0x00046fc0) navi_tabs_3_pane

0xf402,	// (0x00046fc0) navi_tabs_4_pane

0x0bb3,	// (0x00038771) tabs_2_active_pane_ParamLimits

0x0bb3,	// (0x00038771) tabs_2_active_pane

0x0bc3,	// (0x00038781) tabs_2_passive_pane_ParamLimits

0x0bc3,	// (0x00038781) tabs_2_passive_pane

0x0b81,	// (0x0003873f) tabs_3_active_pane_ParamLimits

0x0b81,	// (0x0003873f) tabs_3_active_pane

0x0b91,	// (0x0003874f) tabs_3_passive_pane_ParamLimits

0x0b91,	// (0x0003874f) tabs_3_passive_pane

0x0ba2,	// (0x00038760) tabs_3_passive_pane_cp_ParamLimits

0x0ba2,	// (0x00038760) tabs_3_passive_pane_cp

0x0b3d,	// (0x000386fb) tabs_4_active_pane_ParamLimits

0x0b3d,	// (0x000386fb) tabs_4_active_pane

0x0b4e,	// (0x0003870c) tabs_4_passive_pane_ParamLimits

0x0b4e,	// (0x0003870c) tabs_4_passive_pane

0x0b5f,	// (0x0003871d) tabs_4_passive_pane_cp_ParamLimits

0x0b5f,	// (0x0003871d) tabs_4_passive_pane_cp

0x0b70,	// (0x0003872e) tabs_4_passive_pane_cp2_ParamLimits

0x0b70,	// (0x0003872e) tabs_4_passive_pane_cp2

0x0b19,	// (0x000386d7) tabs_2_long_active_pane_ParamLimits

0x0b19,	// (0x000386d7) tabs_2_long_active_pane

0x0b2b,	// (0x000386e9) tabs_2_long_passive_pane_ParamLimits

0x0b2b,	// (0x000386e9) tabs_2_long_passive_pane

0x0ad4,	// (0x00038692) tabs_3_long_active_pane_ParamLimits

0x0ad4,	// (0x00038692) tabs_3_long_active_pane

0x0aed,	// (0x000386ab) tabs_3_long_passive_pane_ParamLimits

0x0aed,	// (0x000386ab) tabs_3_long_passive_pane

0x0b00,	// (0x000386be) tabs_3_long_passive_pane_cp_ParamLimits

0x0b00,	// (0x000386be) tabs_3_long_passive_pane_cp

0x0a7a,	// (0x00038638) volume_small_pane_g1

0x0a83,	// (0x00038641) volume_small_pane_g2

0x0a8c,	// (0x0003864a) volume_small_pane_g3

0x0a95,	// (0x00038653) volume_small_pane_g4

0x0a9e,	// (0x0003865c) volume_small_pane_g5

0x0aa7,	// (0x00038665) volume_small_pane_g6

0x0ab0,	// (0x0003866e) volume_small_pane_g7

0x0ab9,	// (0x00038677) volume_small_pane_g8

0x0ac2,	// (0x00038680) volume_small_pane_g9

0x0acb,	// (0x00038689) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00047459) volume_small_pane_g

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp2_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp2

0x8c21,	// (0x000407df) tabs_3_active_pane_g1

0x8c29,	// (0x000407e7) tabs_3_active_pane_t1

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp2_ParamLimits

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp2

0x8c21,	// (0x000407df) tabs_3_passive_pane_g1

0x8c29,	// (0x000407e7) tabs_3_passive_pane_t1

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp3_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp3

0x8c3b,	// (0x000407f9) tabs_4_active_pane_g1

0x8c43,	// (0x00040801) tabs_4_active_pane_t1

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp3_ParamLimits

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp3

0x8c3b,	// (0x000407f9) tabs_4_1_passive_pane_g1

0x8c43,	// (0x00040801) tabs_4_1_passive_pane_t1

0x217b,	// (0x00039d39) list_highlight_pane_cp2

0xc685,	// (0x00044243) list_set_pane_ParamLimits

0xc685,	// (0x00044243) list_set_pane

0xc71f,	// (0x000442dd) main_pane_set_t1_ParamLimits

0xc71f,	// (0x000442dd) main_pane_set_t1

0xc73f,	// (0x000442fd) main_pane_set_t2_ParamLimits

0xc73f,	// (0x000442fd) main_pane_set_t2

0xc753,	// (0x00044311) main_pane_set_t3_ParamLimits

0xc753,	// (0x00044311) main_pane_set_t3

0xc765,	// (0x00044323) main_pane_set_t4_ParamLimits

0xc765,	// (0x00044323) main_pane_set_t4

0x0003,

0xf96b,	// (0x00047529) main_pane_set_t_ParamLimits

0xf96b,	// (0x00047529) main_pane_set_t

0xc777,	// (0x00044335) setting_code_pane

0xc781,	// (0x0004433f) setting_slider_graphic_pane

0xc781,	// (0x0004433f) setting_slider_pane

0xc781,	// (0x0004433f) setting_text_pane

0xc781,	// (0x0004433f) setting_volume_pane

0x8c55,	// (0x00040813) volume_set_pane

0xb2ff,	// (0x00042ebd) bg_set_opt_pane_cp

0x8c5d,	// (0x0004081b) setting_slider_pane_t1

0x8c76,	// (0x00040834) setting_slider_pane_t2

0x8c90,	// (0x0004084e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004711c) setting_slider_pane_t

0x8ca8,	// (0x00040866) slider_set_pane

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp2

0xb30d,	// (0x00042ecb) setting_slider_graphic_pane_g1

0x8cbe,	// (0x0004087c) setting_slider_graphic_pane_t1

0x8cce,	// (0x0004088c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00047123) setting_slider_graphic_pane_t

0x8cde,	// (0x0004089c) slider_set_pane_cp

0xb2a3,	// (0x00042e61) input_focus_pane_cp1

0x3a44,	// (0x0003b602) list_set_text_pane

0xb299,	// (0x00042e57) setting_text_pane_g1

0xb2a3,	// (0x00042e61) input_focus_pane_cp2

0xb299,	// (0x00042e57) setting_code_pane_g1

0xb316,	// (0x00042ed4) setting_code_pane_t1

0xd32a,	// (0x00044ee8) set_text_pane_t1_ParamLimits

0xd32a,	// (0x00044ee8) set_text_pane_t1

0xb709,	// (0x000432c7) set_opt_bg_pane_g1

0xb711,	// (0x000432cf) set_opt_bg_pane_g2

0xc63a,	// (0x000441f8) set_opt_bg_pane_g3

0xb721,	// (0x000432df) set_opt_bg_pane_g4

0xb729,	// (0x000432e7) set_opt_bg_pane_g5

0xb731,	// (0x000432ef) set_opt_bg_pane_g6

0xc644,	// (0x00044202) set_opt_bg_pane_g7

0xc64c,	// (0x0004420a) set_opt_bg_pane_g8

0xc656,	// (0x00044214) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00047516) set_opt_bg_pane_g

0xc62d,	// (0x000441eb) slider_set_pane_g1

0x0c5a,	// (0x00038818) slider_set_pane_g2

0x0006,

0xf949,	// (0x00047507) slider_set_pane_g

0xa82d,	// (0x000423eb) volume_set_pane_g1

0xa835,	// (0x000423f3) volume_set_pane_g2

0xa83d,	// (0x000423fb) volume_set_pane_g3

0xa845,	// (0x00042403) volume_set_pane_g4

0xa84d,	// (0x0004240b) volume_set_pane_g5

0xa855,	// (0x00042413) volume_set_pane_g6

0xa85d,	// (0x0004241b) volume_set_pane_g7

0xa865,	// (0x00042423) volume_set_pane_g8

0xa86d,	// (0x0004242b) volume_set_pane_g9

0xa875,	// (0x00042433) volume_set_pane_g10

0x0009,

0xf921,	// (0x000474df) volume_set_pane_g

0x8ce6,	// (0x000408a4) indicator_pane_ParamLimits

0x8ce6,	// (0x000408a4) indicator_pane

0x8d0e,	// (0x000408cc) main_idle_pane_g2_ParamLimits

0x8d0e,	// (0x000408cc) main_idle_pane_g2

0x8d46,	// (0x00040904) main_pane_idle_g1_ParamLimits

0x8d46,	// (0x00040904) main_pane_idle_g1

0xb324,	// (0x00042ee2) popup_clock_digital_analogue_window_ParamLimits

0xb324,	// (0x00042ee2) popup_clock_digital_analogue_window

0x8d6d,	// (0x0004092b) soft_indicator_pane_ParamLimits

0x8d6d,	// (0x0004092b) soft_indicator_pane

0x8d91,	// (0x0004094f) wallpaper_pane_ParamLimits

0x8d91,	// (0x0004094f) wallpaper_pane

0xb299,	// (0x00042e57) wallpaper_pane_g1

0x8da3,	// (0x00040961) indicator_pane_g1_ParamLimits

0x8da3,	// (0x00040961) indicator_pane_g1

0x3e48,	// (0x0003ba06) navi_navi_icon_text_pane_srt_g1

0xb352,	// (0x00042f10) soft_indicator_pane_t1

0xb36c,	// (0x00042f2a) aid_ps_area_pane

0x8db9,	// (0x00040977) aid_ps_clock_pane

0xb37d,	// (0x00042f3b) aid_ps_indicator_pane

0xb389,	// (0x00042f47) indicator_ps_pane_ParamLimits

0xb389,	// (0x00042f47) indicator_ps_pane

0xb398,	// (0x00042f56) power_save_pane_g1_ParamLimits

0xb398,	// (0x00042f56) power_save_pane_g1

0xb3a4,	// (0x00042f62) power_save_pane_g2_ParamLimits

0xb3a4,	// (0x00042f62) power_save_pane_g2

0xecf1,	// (0x000468af) aid_navinavi_width_pane

0xb36c,	// (0x00042f2a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00047128) power_save_pane_g_ParamLimits

0xf56a,	// (0x00047128) power_save_pane_g

0xb3b2,	// (0x00042f70) power_save_pane_t1_ParamLimits

0xb3b2,	// (0x00042f70) power_save_pane_t1

0x8db9,	// (0x00040977) aid_ps_clock_pane_ParamLimits

0xb37d,	// (0x00042f3b) aid_ps_indicator_pane_ParamLimits

0xb3c4,	// (0x00042f82) power_save_pane_t4_ParamLimits

0xb3c4,	// (0x00042f82) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004712d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004712d) power_save_pane_t

0xb3ee,	// (0x00042fac) power_save_t3_ParamLimits

0xb3ee,	// (0x00042fac) power_save_t3

0xb3d9,	// (0x00042f97) power_save_t2_ParamLimits

0xb3d9,	// (0x00042f97) power_save_t2

0xb403,	// (0x00042fc1) indicator_ps_pane_g1

0x8dc7,	// (0x00040985) ai_gene_pane_ParamLimits

0x8dc7,	// (0x00040985) ai_gene_pane

0x8dde,	// (0x0004099c) ai_links_pane_ParamLimits

0x8dde,	// (0x0004099c) ai_links_pane

0x8df6,	// (0x000409b4) indicator_pane_cp1_ParamLimits

0x8df6,	// (0x000409b4) indicator_pane_cp1

0x8e05,	// (0x000409c3) main_pane_idle_g1_cp_ParamLimits

0x8e05,	// (0x000409c3) main_pane_idle_g1_cp

0x8e1d,	// (0x000409db) popup_ai_links_title_window

0x8e26,	// (0x000409e4) soft_indicator_pane_cp1_ParamLimits

0x8e26,	// (0x000409e4) soft_indicator_pane_cp1

0x380b,	// (0x0003b3c9) ai_links_pane_g1

0x3814,	// (0x0003b3d2) grid_ai_links_pane

0xc54a,	// (0x00044108) ai_gene_pane_1

0x37f9,	// (0x0003b3b7) ai_gene_pane_2

0x3802,	// (0x0003b3c0) list_highlight_pane_cp4

0xc526,	// (0x000440e4) cell_ai_link_pane_ParamLimits

0xc526,	// (0x000440e4) cell_ai_link_pane

0x37ca,	// (0x0003b388) cell_ai_link_pane_g1

0xb530,	// (0x000430ee) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x000474ba) cell_ai_link_pane_g

0xb2a3,	// (0x00042e61) grid_highlight_cp2

0xb2a3,	// (0x00042e61) bg_popup_sub_pane_cp1

0xb41a,	// (0x00042fd8) popup_ai_links_title_window_t1

0x371a,	// (0x0003b2d8) ai_gene_pane_1_g1_ParamLimits

0x371a,	// (0x0003b2d8) ai_gene_pane_1_g1

0x3726,	// (0x0003b2e4) ai_gene_pane_1_g2_ParamLimits

0x3726,	// (0x0003b2e4) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x000474b0) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x000474b0) ai_gene_pane_1_g

0x3733,	// (0x0003b2f1) ai_gene_pane_1_t1_ParamLimits

0x3733,	// (0x0003b2f1) ai_gene_pane_1_t1

0x3767,	// (0x0003b325) grid_ai_soft_ind_pane

0x3705,	// (0x0003b2c3) ai_gene_pane_2_t1_ParamLimits

0x3705,	// (0x0003b2c3) ai_gene_pane_2_t1

0x8e3a,	// (0x000409f8) main_pane_empty_t1_ParamLimits

0x8e3a,	// (0x000409f8) main_pane_empty_t1

0x8e52,	// (0x00040a10) main_pane_empty_t2_ParamLimits

0x8e52,	// (0x00040a10) main_pane_empty_t2

0x8e67,	// (0x00040a25) main_pane_empty_t3_ParamLimits

0x8e67,	// (0x00040a25) main_pane_empty_t3

0x8e79,	// (0x00040a37) main_pane_empty_t4_ParamLimits

0x8e79,	// (0x00040a37) main_pane_empty_t4

0x8e8b,	// (0x00040a49) main_pane_empty_t5_ParamLimits

0x8e8b,	// (0x00040a49) main_pane_empty_t5

0x0004,

0xf574,	// (0x00047132) main_pane_empty_t_ParamLimits

0xf574,	// (0x00047132) main_pane_empty_t

0xb75a,	// (0x00043318) bg_popup_window_pane_ParamLimits

0xb75a,	// (0x00043318) bg_popup_window_pane

0xc4a0,	// (0x0004405e) find_popup_pane_cp2_ParamLimits

0xc4a0,	// (0x0004405e) find_popup_pane_cp2

0x3481,	// (0x0003b03f) heading_pane_ParamLimits

0x3481,	// (0x0003b03f) heading_pane

0xb2a3,	// (0x00042e61) bg_popup_sub_pane

0xc421,	// (0x00043fdf) bg_popup_window_pane_g1_ParamLimits

0xc421,	// (0x00043fdf) bg_popup_window_pane_g1

0xc430,	// (0x00043fee) bg_popup_window_pane_g2_ParamLimits

0xc430,	// (0x00043fee) bg_popup_window_pane_g2

0xc43c,	// (0x00043ffa) bg_popup_window_pane_g3_ParamLimits

0xc43c,	// (0x00043ffa) bg_popup_window_pane_g3

0xc448,	// (0x00044006) bg_popup_window_pane_g4_ParamLimits

0xc448,	// (0x00044006) bg_popup_window_pane_g4

0xc457,	// (0x00044015) bg_popup_window_pane_g5_ParamLimits

0xc457,	// (0x00044015) bg_popup_window_pane_g5

0xc467,	// (0x00044025) bg_popup_window_pane_g6_ParamLimits

0xc467,	// (0x00044025) bg_popup_window_pane_g6

0xc473,	// (0x00044031) bg_popup_window_pane_g7_ParamLimits

0xc473,	// (0x00044031) bg_popup_window_pane_g7

0xc482,	// (0x00044040) bg_popup_window_pane_g8_ParamLimits

0xc482,	// (0x00044040) bg_popup_window_pane_g8

0xc491,	// (0x0004404f) bg_popup_window_pane_g9_ParamLimits

0xc491,	// (0x0004404f) bg_popup_window_pane_g9

0x345b,	// (0x0003b019) bg_popup_window_pane_g10_ParamLimits

0x345b,	// (0x0003b019) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00047478) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00047478) bg_popup_window_pane_g

0x3384,	// (0x0003af42) bg_popup_heading_pane_ParamLimits

0x3384,	// (0x0003af42) bg_popup_heading_pane

0x0dea,	// (0x000389a8) tabs_4_passive_pane_cp_srt_ParamLimits

0x0dea,	// (0x000389a8) tabs_4_passive_pane_cp_srt

0x0dfc,	// (0x000389ba) tabs_4_passive_pane_srt_ParamLimits

0x3398,	// (0x0003af56) heading_pane_g2

0x0dfc,	// (0x000389ba) tabs_4_passive_pane_srt

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp3_srt

0x33a0,	// (0x0003af5e) heading_pane_t1_ParamLimits

0x33a0,	// (0x0003af5e) heading_pane_t1

0x33b7,	// (0x0003af75) heading_pane_t2_ParamLimits

0x33b7,	// (0x0003af75) heading_pane_t2

0x0001,

0xf8b5,	// (0x00047473) heading_pane_t_ParamLimits

0xf8b5,	// (0x00047473) heading_pane_t

0x2ec1,	// (0x0003aa7f) bg_popup_heading_pane_g1

0x2f70,	// (0x0003ab2e) bg_popup_heading_pane_g2

0x2f7a,	// (0x0003ab38) bg_popup_heading_pane_g3

0x2f84,	// (0x0003ab42) bg_popup_heading_pane_g4

0x2f8e,	// (0x0003ab4c) bg_popup_heading_pane_g5

0x2f98,	// (0x0003ab56) bg_popup_heading_pane_g6

0x2fa0,	// (0x0003ab5e) bg_popup_heading_pane_g7

0x2fa8,	// (0x0003ab66) bg_popup_heading_pane_g8

0x2fb2,	// (0x0003ab70) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x0004742f) bg_popup_heading_pane_g

0x26a2,	// (0x0003a260) bg_popup_sub_pane_g1

0x26b2,	// (0x0003a270) bg_popup_sub_pane_g2

0x26aa,	// (0x0003a268) bg_popup_sub_pane_g3

0x26c2,	// (0x0003a280) bg_popup_sub_pane_g4

0x26ba,	// (0x0003a278) bg_popup_sub_pane_g5

0x26ca,	// (0x0003a288) bg_popup_sub_pane_g6

0x26d2,	// (0x0003a290) bg_popup_sub_pane_g7

0x26e2,	// (0x0003a2a0) bg_popup_sub_pane_g8

0x26da,	// (0x0003a298) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00047409) bg_popup_sub_pane_g

0xb2f1,	// (0x00042eaf) bg_popup_window_pane_cp5_ParamLimits

0xb2f1,	// (0x00042eaf) bg_popup_window_pane_cp5

0xb437,	// (0x00042ff5) popup_note_window_g1_ParamLimits

0xb437,	// (0x00042ff5) popup_note_window_g1

0xb443,	// (0x00043001) popup_note_window_t1_ParamLimits

0xb443,	// (0x00043001) popup_note_window_t1

0xb459,	// (0x00043017) popup_note_window_t2_ParamLimits

0xb459,	// (0x00043017) popup_note_window_t2

0xb46f,	// (0x0004302d) popup_note_window_t3_ParamLimits

0xb46f,	// (0x0004302d) popup_note_window_t3

0xb485,	// (0x00043043) popup_note_window_t4_ParamLimits

0xb485,	// (0x00043043) popup_note_window_t4

0xb4ad,	// (0x0004306b) popup_note_window_t5_ParamLimits

0xb4ad,	// (0x0004306b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004713d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004713d) popup_note_window_t

0xb4d1,	// (0x0004308f) bg_popup_window_pane_cp6_ParamLimits

0xb4d1,	// (0x0004308f) bg_popup_window_pane_cp6

0x2e3d,	// (0x0003a9fb) popup_note_image_window_g1_ParamLimits

0x2e3d,	// (0x0003a9fb) popup_note_image_window_g1

0xc2c6,	// (0x00043e84) popup_note_image_window_g2_ParamLimits

0xc2c6,	// (0x00043e84) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x000473fd) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x000473fd) popup_note_image_window_g

0x2e62,	// (0x0003aa20) popup_note_image_window_t1_ParamLimits

0x2e62,	// (0x0003aa20) popup_note_image_window_t1

0x2e7b,	// (0x0003aa39) popup_note_image_window_t2_ParamLimits

0x2e7b,	// (0x0003aa39) popup_note_image_window_t2

0x2e94,	// (0x0003aa52) popup_note_image_window_t3_ParamLimits

0x2e94,	// (0x0003aa52) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00047402) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00047402) popup_note_image_window_t

0x2d06,	// (0x0003a8c4) bg_popup_window_pane_cp7_ParamLimits

0x2d06,	// (0x0003a8c4) bg_popup_window_pane_cp7

0x2d36,	// (0x0003a8f4) popup_note_wait_window_g1_ParamLimits

0x2d36,	// (0x0003a8f4) popup_note_wait_window_g1

0x2d42,	// (0x0003a900) popup_note_wait_window_g2_ParamLimits

0x2d42,	// (0x0003a900) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x000473eb) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x000473eb) popup_note_wait_window_g

0x2d5a,	// (0x0003a918) popup_note_wait_window_t1_ParamLimits

0x2d5a,	// (0x0003a918) popup_note_wait_window_t1

0xc267,	// (0x00043e25) popup_note_wait_window_t2_ParamLimits

0xc267,	// (0x00043e25) popup_note_wait_window_t2

0xc284,	// (0x00043e42) popup_note_wait_window_t3_ParamLimits

0xc284,	// (0x00043e42) popup_note_wait_window_t3

0xc297,	// (0x00043e55) popup_note_wait_window_t4_ParamLimits

0xc297,	// (0x00043e55) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x000473f2) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x000473f2) popup_note_wait_window_t

0x2dd6,	// (0x0003a994) wait_bar_pane_ParamLimits

0x2dd6,	// (0x0003a994) wait_bar_pane

0xb2a3,	// (0x00042e61) wait_anim_pane

0xb2a3,	// (0x00042e61) wait_border_pane

0xb299,	// (0x00042e57) wait_anim_pane_g1

0xb299,	// (0x00042e57) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x000472b2) wait_anim_pane_g

0x2cb2,	// (0x0003a870) wait_border_pane_g1

0x2cbd,	// (0x0003a87b) wait_border_pane_g2

0x2cc6,	// (0x0003a884) wait_border_pane_g3

0x0002,

0xf826,	// (0x000473e4) wait_border_pane_g

0x2b1d,	// (0x0003a6db) bg_popup_window_pane_cp16_ParamLimits

0x2b1d,	// (0x0003a6db) bg_popup_window_pane_cp16

0xc217,	// (0x00043dd5) indicator_popup_pane_cp4_ParamLimits

0xc217,	// (0x00043dd5) indicator_popup_pane_cp4

0x2c31,	// (0x0003a7ef) popup_query_data_window_t1_ParamLimits

0x2c31,	// (0x0003a7ef) popup_query_data_window_t1

0x2c43,	// (0x0003a801) popup_query_data_window_t2_ParamLimits

0x2c43,	// (0x0003a801) popup_query_data_window_t2

0x2c5c,	// (0x0003a81a) popup_query_data_window_t3_ParamLimits

0x2c5c,	// (0x0003a81a) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x000473dd) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x000473dd) popup_query_data_window_t

0xc22b,	// (0x00043de9) query_popup_data_pane_ParamLimits

0xc22b,	// (0x00043de9) query_popup_data_pane

0xc23f,	// (0x00043dfd) query_popup_data_pane_cp1_ParamLimits

0xc23f,	// (0x00043dfd) query_popup_data_pane_cp1

0x2b1d,	// (0x0003a6db) bg_popup_window_pane_cp10_ParamLimits

0x2b1d,	// (0x0003a6db) bg_popup_window_pane_cp10

0xc192,	// (0x00043d50) indicator_popup_pane_ParamLimits

0xc192,	// (0x00043d50) indicator_popup_pane

0xc1b4,	// (0x00043d72) popup_query_code_window_t1_ParamLimits

0xc1b4,	// (0x00043d72) popup_query_code_window_t1

0xc1ce,	// (0x00043d8c) popup_query_code_window_t2_ParamLimits

0xc1ce,	// (0x00043d8c) popup_query_code_window_t2

0x2bd4,	// (0x0003a792) popup_query_code_window_t3_ParamLimits

0x2bd4,	// (0x0003a792) popup_query_code_window_t3

0x0002,

0xf818,	// (0x000473d6) popup_query_code_window_t_ParamLimits

0xf818,	// (0x000473d6) popup_query_code_window_t

0x2c03,	// (0x0003a7c1) query_popup_pane_ParamLimits

0x2c03,	// (0x0003a7c1) query_popup_pane

0xb4d1,	// (0x0004308f) bg_popup_window_pane_cp15_ParamLimits

0xb4d1,	// (0x0004308f) bg_popup_window_pane_cp15

0x8ec3,	// (0x00040a81) indicator_popup_pane_cp1_ParamLimits

0x8ec3,	// (0x00040a81) indicator_popup_pane_cp1

0x8ed6,	// (0x00040a94) indicator_popup_pane_cp2_ParamLimits

0x8ed6,	// (0x00040a94) indicator_popup_pane_cp2

0x8ee9,	// (0x00040aa7) popup_query_data_code_window_g1_ParamLimits

0x8ee9,	// (0x00040aa7) popup_query_data_code_window_g1

0xb4ef,	// (0x000430ad) popup_query_data_code_window_t1_ParamLimits

0xb4ef,	// (0x000430ad) popup_query_data_code_window_t1

0xb501,	// (0x000430bf) popup_query_data_code_window_t2_ParamLimits

0xb501,	// (0x000430bf) popup_query_data_code_window_t2

0x8efc,	// (0x00040aba) popup_query_data_code_window_t3_ParamLimits

0x8efc,	// (0x00040aba) popup_query_data_code_window_t3

0x8f12,	// (0x00040ad0) popup_query_data_code_window_t4_ParamLimits

0x8f12,	// (0x00040ad0) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00047148) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00047148) popup_query_data_code_window_t

0x0958,	// (0x00038516) list_single_midp_graphic_pane_g3

0x8f2a,	// (0x00040ae8) query_popup_data_pane_cp2_ParamLimits

0x8f3d,	// (0x00040afb) query_popup_pane_cp2_ParamLimits

0x8f3d,	// (0x00040afb) query_popup_pane_cp2

0xb2a3,	// (0x00042e61) bg_popup_window_pane_cp11

0x2b09,	// (0x0003a6c7) heading_pane_cp5

0xb55d,	// (0x0004311b) listscroll_popup_info_pane

0xb2a3,	// (0x00042e61) input_focus_pane_cp3

0xb513,	// (0x000430d1) query_popup_pane_t1

0xb521,	// (0x000430df) list_popup_info_pane_ParamLimits

0xb521,	// (0x000430df) list_popup_info_pane

0xb530,	// (0x000430ee) listscroll_popup_info_pane_g1

0xb538,	// (0x000430f6) scroll_pane_cp7

0x8f50,	// (0x00040b0e) popup_info_list_pane_t1_ParamLimits

0x8f50,	// (0x00040b0e) popup_info_list_pane_t1

0x8f6a,	// (0x00040b28) popup_info_list_pane_t2_ParamLimits

0x8f6a,	// (0x00040b28) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00047151) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00047151) popup_info_list_pane_t

0xb2a3,	// (0x00042e61) bg_popup_window_pane_cp12

0xc93e,	// (0x000444fc) find_popup_pane

0xb2ff,	// (0x00042ebd) bg_popup_window_pane_cp3

0xb542,	// (0x00043100) heading_pane_cp3

0xb54e,	// (0x0004310c) listscroll_popup_graphic_pane

0xb2a3,	// (0x00042e61) bg_popup_window_pane_cp4

0x8fd4,	// (0x00040b92) heading_pane_cp4

0xb55d,	// (0x0004311b) listscroll_popup_colour_pane

0x8fdc,	// (0x00040b9a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8fdc,	// (0x00040b9a) cell_large_graphic_colour_none_popup_pane

0x8ff0,	// (0x00040bae) grid_large_graphic_colour_popup_pane_ParamLimits

0x8ff0,	// (0x00040bae) grid_large_graphic_colour_popup_pane

0x9014,	// (0x00040bd2) listscroll_popup_colour_pane_g1_ParamLimits

0x9014,	// (0x00040bd2) listscroll_popup_colour_pane_g1

0x902b,	// (0x00040be9) listscroll_popup_colour_pane_g2_ParamLimits

0x902b,	// (0x00040be9) listscroll_popup_colour_pane_g2

0x9042,	// (0x00040c00) listscroll_popup_colour_pane_g3_ParamLimits

0x9042,	// (0x00040c00) listscroll_popup_colour_pane_g3

0x9052,	// (0x00040c10) listscroll_popup_colour_pane_g4_ParamLimits

0x9052,	// (0x00040c10) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00047156) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00047156) listscroll_popup_colour_pane_g

0xb565,	// (0x00043123) scroll_pane_cp6_ParamLimits

0xb565,	// (0x00043123) scroll_pane_cp6

0x9062,	// (0x00040c20) cell_large_graphic_colour_popup_pane_ParamLimits

0x9062,	// (0x00040c20) cell_large_graphic_colour_popup_pane

0x9081,	// (0x00040c3f) cell_large_graphic_colour_none_popup_pane_t1

0xb2a3,	// (0x00042e61) grid_highlight_pane_cp5

0xb577,	// (0x00043135) cell_large_graphic_colour_popup_pane_g1

0xb57f,	// (0x0004313d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004715f) cell_large_graphic_colour_popup_pane_g

0xb587,	// (0x00043145) cell_large_graphic_colour_popup_pane_g2_copy1

0xb590,	// (0x0004314e) grid_highlight_pane_cp4

0xb598,	// (0x00043156) bg_popup_window_pane_cp8_ParamLimits

0xb598,	// (0x00043156) bg_popup_window_pane_cp8

0x9090,	// (0x00040c4e) popup_snote_single_text_window_g1_ParamLimits

0x9090,	// (0x00040c4e) popup_snote_single_text_window_g1

0x90a2,	// (0x00040c60) popup_snote_single_text_window_t1_ParamLimits

0x90a2,	// (0x00040c60) popup_snote_single_text_window_t1

0x90b5,	// (0x00040c73) popup_snote_single_text_window_t2_ParamLimits

0x90b5,	// (0x00040c73) popup_snote_single_text_window_t2

0x90c8,	// (0x00040c86) popup_snote_single_text_window_t3_ParamLimits

0x90c8,	// (0x00040c86) popup_snote_single_text_window_t3

0x9101,	// (0x00040cbf) popup_snote_single_text_window_t4_ParamLimits

0x9101,	// (0x00040cbf) popup_snote_single_text_window_t4

0x9135,	// (0x00040cf3) popup_snote_single_text_window_t5_ParamLimits

0x9135,	// (0x00040cf3) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00047164) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00047164) popup_snote_single_text_window_t

0xb5b3,	// (0x00043171) bg_popup_window_pane_cp9_ParamLimits

0xb5b3,	// (0x00043171) bg_popup_window_pane_cp9

0x9090,	// (0x00040c4e) popup_snote_single_graphic_window_g1_ParamLimits

0x9090,	// (0x00040c4e) popup_snote_single_graphic_window_g1

0xb5c1,	// (0x0004317f) popup_snote_single_graphic_window_g2_ParamLimits

0xb5c1,	// (0x0004317f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004716f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004716f) popup_snote_single_graphic_window_g

0xb5cd,	// (0x0004318b) popup_snote_single_graphic_window_t1_ParamLimits

0xb5cd,	// (0x0004318b) popup_snote_single_graphic_window_t1

0xb5e0,	// (0x0004319e) popup_snote_single_graphic_window_t2_ParamLimits

0xb5e0,	// (0x0004319e) popup_snote_single_graphic_window_t2

0x90c8,	// (0x00040c86) popup_snote_single_graphic_window_t3_ParamLimits

0x90c8,	// (0x00040c86) popup_snote_single_graphic_window_t3

0x9101,	// (0x00040cbf) popup_snote_single_graphic_window_t4_ParamLimits

0x9101,	// (0x00040cbf) popup_snote_single_graphic_window_t4

0x9164,	// (0x00040d22) popup_snote_single_graphic_window_t5_ParamLimits

0x9164,	// (0x00040d22) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00047174) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00047174) popup_snote_single_graphic_window_t

0x3da4,	// (0x0003b962) grid_graphic_popup_pane_ParamLimits

0x3da4,	// (0x0003b962) grid_graphic_popup_pane

0x3dce,	// (0x0003b98c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3dce,	// (0x0003b98c) listscroll_popup_graphic_pane_g1

0xc8dc,	// (0x0004449a) listscroll_popup_graphic_pane_g2_ParamLimits

0xc8dc,	// (0x0004449a) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00047553) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00047553) listscroll_popup_graphic_pane_g

0x3df6,	// (0x0003b9b4) scroll_pane_cp5

0xc881,	// (0x0004443f) cell_graphic_popup_pane_ParamLimits

0xc881,	// (0x0004443f) cell_graphic_popup_pane

0x3d24,	// (0x0003b8e2) cell_graphic_popup_pane_g1

0x3d2c,	// (0x0003b8ea) cell_graphic_popup_pane_g2

0xb587,	// (0x00043145) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x0004754c) cell_graphic_popup_pane_g

0x3d35,	// (0x0003b8f3) cell_graphic_popup_pane_t2

0xb590,	// (0x0004314e) grid_highlight_pane_cp3

0xb605,	// (0x000431c3) list_gen_pane_ParamLimits

0xb605,	// (0x000431c3) list_gen_pane

0xb62d,	// (0x000431eb) scroll_pane

0xc7eb,	// (0x000443a9) bg_list_pane_g1_ParamLimits

0xc7eb,	// (0x000443a9) bg_list_pane_g1

0xc806,	// (0x000443c4) bg_list_pane_g2_ParamLimits

0xc806,	// (0x000443c4) bg_list_pane_g2

0xc819,	// (0x000443d7) bg_list_pane_g3_ParamLimits

0xc819,	// (0x000443d7) bg_list_pane_g3

0xc82b,	// (0x000443e9) bg_list_pane_g4_ParamLimits

0xc82b,	// (0x000443e9) bg_list_pane_g4

0xc83d,	// (0x000443fb) bg_list_pane_g5_ParamLimits

0xc83d,	// (0x000443fb) bg_list_pane_g5

0x0004,

0xf983,	// (0x00047541) bg_list_pane_g_ParamLimits

0xf983,	// (0x00047541) bg_list_pane_g

0xc7b4,	// (0x00044372) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double2_graphic_large_graphic_pane

0xc7b4,	// (0x00044372) list_double2_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double2_graphic_pane

0xc7b4,	// (0x00044372) list_double2_large_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double2_large_graphic_pane

0xc7b4,	// (0x00044372) list_double2_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double2_pane

0xc7b4,	// (0x00044372) list_double_graphic_heading_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_graphic_heading_pane

0xc7b4,	// (0x00044372) list_double_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_graphic_pane

0xc7b4,	// (0x00044372) list_double_heading_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_heading_pane

0xc7b4,	// (0x00044372) list_double_large_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_large_graphic_pane

0xc7b4,	// (0x00044372) list_double_number_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_number_pane

0xc7b4,	// (0x00044372) list_double_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_pane

0xc7b4,	// (0x00044372) list_double_time_pane_ParamLimits

0xc7b4,	// (0x00044372) list_double_time_pane

0xc7b4,	// (0x00044372) list_setting_number_pane_ParamLimits

0xc7b4,	// (0x00044372) list_setting_number_pane

0xc7b4,	// (0x00044372) list_setting_pane_ParamLimits

0xc7b4,	// (0x00044372) list_setting_pane

0xa93d,	// (0x000424fb) list_single_2graphic_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_2graphic_pane

0xa93d,	// (0x000424fb) list_single_graphic_heading_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_graphic_heading_pane

0xa93d,	// (0x000424fb) list_single_graphic_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_graphic_pane

0xa93d,	// (0x000424fb) list_single_heading_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_heading_pane

0xc7b4,	// (0x00044372) list_single_large_graphic_pane_ParamLimits

0xc7b4,	// (0x00044372) list_single_large_graphic_pane

0xa93d,	// (0x000424fb) list_single_number_heading_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_number_heading_pane

0xa93d,	// (0x000424fb) list_single_number_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_number_pane

0xa93d,	// (0x000424fb) list_single_pane_ParamLimits

0xa93d,	// (0x000424fb) list_single_pane

0xb2a3,	// (0x00042e61) list_highlight_pane_cp1

0xd351,	// (0x00044f0f) list_single_pane_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_pane_g1

0xd35d,	// (0x00044f1b) list_single_pane_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_pane_g

0xa927,	// (0x000424e5) list_single_pane_t1_ParamLimits

0xa927,	// (0x000424e5) list_single_pane_t1

0xd351,	// (0x00044f0f) list_single_number_pane_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_number_pane_g1

0xd35d,	// (0x00044f1b) list_single_number_pane_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_number_pane_g

0xd369,	// (0x00044f27) list_single_number_pane_t1_ParamLimits

0xd369,	// (0x00044f27) list_single_number_pane_t1

0xa87d,	// (0x0004243b) list_single_number_pane_t2_ParamLimits

0xa87d,	// (0x0004243b) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00047502) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00047502) list_single_number_pane_t

0xd345,	// (0x00044f03) list_single_graphic_pane_g1_ParamLimits

0xd345,	// (0x00044f03) list_single_graphic_pane_g1

0xd351,	// (0x00044f0f) list_single_graphic_pane_g2_ParamLimits

0xd351,	// (0x00044f0f) list_single_graphic_pane_g2

0xd35d,	// (0x00044f1b) list_single_graphic_pane_g3_ParamLimits

0xd35d,	// (0x00044f1b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004717f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004717f) list_single_graphic_pane_g

0xd369,	// (0x00044f27) list_single_graphic_pane_t1_ParamLimits

0xd369,	// (0x00044f27) list_single_graphic_pane_t1

0xd351,	// (0x00044f0f) list_single_heading_pane_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_heading_pane_g1

0xd35d,	// (0x00044f1b) list_single_heading_pane_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_heading_pane_g

0xd37f,	// (0x00044f3d) list_single_heading_pane_t1_ParamLimits

0xd37f,	// (0x00044f3d) list_single_heading_pane_t1

0xd395,	// (0x00044f53) list_single_heading_pane_t2_ParamLimits

0xd395,	// (0x00044f53) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004718b) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004718b) list_single_heading_pane_t

0xd351,	// (0x00044f0f) list_single_number_heading_pane_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_number_heading_pane_g1

0xd35d,	// (0x00044f1b) list_single_number_heading_pane_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_number_heading_pane_g

0xd37f,	// (0x00044f3d) list_single_number_heading_pane_t1_ParamLimits

0xd37f,	// (0x00044f3d) list_single_number_heading_pane_t1

0xd3a7,	// (0x00044f65) list_single_number_heading_pane_t2_ParamLimits

0xd3a7,	// (0x00044f65) list_single_number_heading_pane_t2

0xd3b9,	// (0x00044f77) list_single_number_heading_pane_t3_ParamLimits

0xd3b9,	// (0x00044f77) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00047190) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00047190) list_single_number_heading_pane_t

0xd3cb,	// (0x00044f89) list_single_graphic_heading_pane_g1_ParamLimits

0xd3cb,	// (0x00044f89) list_single_graphic_heading_pane_g1

0x919d,	// (0x00040d5b) list_single_graphic_heading_pane_g4_ParamLimits

0x919d,	// (0x00040d5b) list_single_graphic_heading_pane_g4

0xd35d,	// (0x00044f1b) list_single_graphic_heading_pane_g5_ParamLimits

0xd35d,	// (0x00044f1b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00047197) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00047197) list_single_graphic_heading_pane_g

0xd37f,	// (0x00044f3d) list_single_graphic_heading_pane_t1_ParamLimits

0xd37f,	// (0x00044f3d) list_single_graphic_heading_pane_t1

0x91ae,	// (0x00040d6c) list_single_graphic_heading_pane_t2_ParamLimits

0x91ae,	// (0x00040d6c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0004719e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0004719e) list_single_graphic_heading_pane_t

0xd3d7,	// (0x00044f95) list_single_large_graphic_pane_g1_ParamLimits

0xd3d7,	// (0x00044f95) list_single_large_graphic_pane_g1

0xd3e3,	// (0x00044fa1) list_single_large_graphic_pane_g2_ParamLimits

0xd3e3,	// (0x00044fa1) list_single_large_graphic_pane_g2

0xd3ef,	// (0x00044fad) list_single_large_graphic_pane_g3_ParamLimits

0xd3ef,	// (0x00044fad) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000471a3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000471a3) list_single_large_graphic_pane_g

0x2cbd,	// (0x0003a87b) wait_border_pane_g2_copy1

0x91c0,	// (0x00040d7e) list_single_large_graphic_pane_g4_cp2

0xd3fb,	// (0x00044fb9) list_single_large_graphic_pane_t1_ParamLimits

0xd3fb,	// (0x00044fb9) list_single_large_graphic_pane_t1

0x91c8,	// (0x00040d86) list_double_pane_g1_ParamLimits

0x91c8,	// (0x00040d86) list_double_pane_g1

0xd411,	// (0x00044fcf) list_double_pane_g2_ParamLimits

0xd411,	// (0x00044fcf) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000471aa) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000471aa) list_double_pane_g

0x91d4,	// (0x00040d92) list_double_pane_t1_ParamLimits

0x91d4,	// (0x00040d92) list_double_pane_t1

0x91ea,	// (0x00040da8) list_double_pane_t2_ParamLimits

0x91ea,	// (0x00040da8) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000471af) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000471af) list_double_pane_t

0x91fc,	// (0x00040dba) list_double2_pane_g1_ParamLimits

0x91fc,	// (0x00040dba) list_double2_pane_g1

0xd411,	// (0x00044fcf) list_double2_pane_g2_ParamLimits

0xd411,	// (0x00044fcf) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000471b4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000471b4) list_double2_pane_g

0x91d4,	// (0x00040d92) list_double2_pane_t1_ParamLimits

0x91d4,	// (0x00040d92) list_double2_pane_t1

0x920d,	// (0x00040dcb) list_double2_pane_t2_ParamLimits

0x920d,	// (0x00040dcb) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000471b9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000471b9) list_double2_pane_t

0x91c8,	// (0x00040d86) list_double_number_pane_g1_ParamLimits

0x91c8,	// (0x00040d86) list_double_number_pane_g1

0xd411,	// (0x00044fcf) list_double_number_pane_g2_ParamLimits

0xd411,	// (0x00044fcf) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000471aa) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000471aa) list_double_number_pane_g

0x921f,	// (0x00040ddd) list_double_number_pane_t1_ParamLimits

0x921f,	// (0x00040ddd) list_double_number_pane_t1

0x9231,	// (0x00040def) list_double_number_pane_t2_ParamLimits

0x9231,	// (0x00040def) list_double_number_pane_t2

0x9247,	// (0x00040e05) list_double_number_pane_t3_ParamLimits

0x9247,	// (0x00040e05) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000471be) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000471be) list_double_number_pane_t

0x9259,	// (0x00040e17) list_double_graphic_pane_g1_ParamLimits

0x9259,	// (0x00040e17) list_double_graphic_pane_g1

0x9265,	// (0x00040e23) list_double_graphic_pane_g2_ParamLimits

0x9265,	// (0x00040e23) list_double_graphic_pane_g2

0x9274,	// (0x00040e32) list_double_graphic_pane_g3_ParamLimits

0x9274,	// (0x00040e32) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000471c5) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000471c5) list_double_graphic_pane_g

0x928c,	// (0x00040e4a) list_double_graphic_pane_t1_ParamLimits

0x928c,	// (0x00040e4a) list_double_graphic_pane_t1

0x92a2,	// (0x00040e60) list_double_graphic_pane_t2_ParamLimits

0x92a2,	// (0x00040e60) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000471ce) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000471ce) list_double_graphic_pane_t

0x92b4,	// (0x00040e72) list_double2_graphic_pane_g1_ParamLimits

0x92b4,	// (0x00040e72) list_double2_graphic_pane_g1

0x92c0,	// (0x00040e7e) list_double2_graphic_pane_g2_ParamLimits

0x92c0,	// (0x00040e7e) list_double2_graphic_pane_g2

0x92cc,	// (0x00040e8a) list_double2_graphic_pane_g3_ParamLimits

0x92cc,	// (0x00040e8a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000471d3) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000471d3) list_double2_graphic_pane_g

0x9231,	// (0x00040def) list_double2_graphic_pane_t1_ParamLimits

0x9231,	// (0x00040def) list_double2_graphic_pane_t1

0x92d8,	// (0x00040e96) list_double2_graphic_pane_t2_ParamLimits

0x92d8,	// (0x00040e96) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000471da) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000471da) list_double2_graphic_pane_t

0x92ea,	// (0x00040ea8) list_double_large_graphic_pane_g1_ParamLimits

0x92ea,	// (0x00040ea8) list_double_large_graphic_pane_g1

0x91fc,	// (0x00040dba) list_double_large_graphic_pane_g2_ParamLimits

0x91fc,	// (0x00040dba) list_double_large_graphic_pane_g2

0xd411,	// (0x00044fcf) list_double_large_graphic_pane_g3_ParamLimits

0xd411,	// (0x00044fcf) list_double_large_graphic_pane_g3

0x9309,	// (0x00040ec7) list_double_large_graphic_pane_g4_ParamLimits

0x9309,	// (0x00040ec7) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000471df) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000471df) list_double_large_graphic_pane_g

0x931c,	// (0x00040eda) list_double_large_graphic_pane_t1_ParamLimits

0x931c,	// (0x00040eda) list_double_large_graphic_pane_t1

0x9335,	// (0x00040ef3) list_double_large_graphic_pane_t2_ParamLimits

0x9335,	// (0x00040ef3) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000471ea) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000471ea) list_double_large_graphic_pane_t

0x9347,	// (0x00040f05) list_double2_large_graphic_pane_g1_ParamLimits

0x9347,	// (0x00040f05) list_double2_large_graphic_pane_g1

0x91fc,	// (0x00040dba) list_double2_large_graphic_pane_g2_ParamLimits

0x91fc,	// (0x00040dba) list_double2_large_graphic_pane_g2

0xd411,	// (0x00044fcf) list_double2_large_graphic_pane_g3_ParamLimits

0xd411,	// (0x00044fcf) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000471ef) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000471ef) list_double2_large_graphic_pane_g

0x9231,	// (0x00040def) list_double2_large_graphic_pane_t1_ParamLimits

0x9231,	// (0x00040def) list_double2_large_graphic_pane_t1

0x92d8,	// (0x00040e96) list_double2_large_graphic_pane_t2_ParamLimits

0x92d8,	// (0x00040e96) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x000471da) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x000471da) list_double2_large_graphic_pane_t

0x9353,	// (0x00040f11) list_double_heading_pane_g1_ParamLimits

0x9353,	// (0x00040f11) list_double_heading_pane_g1

0x9364,	// (0x00040f22) list_double_heading_pane_g2_ParamLimits

0x9364,	// (0x00040f22) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x000471f6) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x000471f6) list_double_heading_pane_g

0x9370,	// (0x00040f2e) list_double_heading_pane_t1_ParamLimits

0x9370,	// (0x00040f2e) list_double_heading_pane_t1

0x92d8,	// (0x00040e96) list_double_heading_pane_t2_ParamLimits

0x92d8,	// (0x00040e96) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000471fb) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000471fb) list_double_heading_pane_t

0x9386,	// (0x00040f44) list_double_graphic_heading_pane_g1_ParamLimits

0x9386,	// (0x00040f44) list_double_graphic_heading_pane_g1

0x9353,	// (0x00040f11) list_double_graphic_heading_pane_g2_ParamLimits

0x9353,	// (0x00040f11) list_double_graphic_heading_pane_g2

0x9364,	// (0x00040f22) list_double_graphic_heading_pane_g3_ParamLimits

0x9364,	// (0x00040f22) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00047200) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00047200) list_double_graphic_heading_pane_g

0x9370,	// (0x00040f2e) list_double_graphic_heading_pane_t1_ParamLimits

0x9370,	// (0x00040f2e) list_double_graphic_heading_pane_t1

0x92d8,	// (0x00040e96) list_double_graphic_heading_pane_t2_ParamLimits

0x92d8,	// (0x00040e96) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000471fb) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000471fb) list_double_graphic_heading_pane_t

0x91fc,	// (0x00040dba) list_double_time_pane_g1_ParamLimits

0x91fc,	// (0x00040dba) list_double_time_pane_g1

0xd411,	// (0x00044fcf) list_double_time_pane_g2_ParamLimits

0xd411,	// (0x00044fcf) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x000471b4) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x000471b4) list_double_time_pane_g

0x9392,	// (0x00040f50) list_double_time_pane_t1_ParamLimits

0x9392,	// (0x00040f50) list_double_time_pane_t1

0x93a8,	// (0x00040f66) list_double_time_pane_t2_ParamLimits

0x93a8,	// (0x00040f66) list_double_time_pane_t2

0x93ba,	// (0x00040f78) list_double_time_pane_t3_ParamLimits

0x93ba,	// (0x00040f78) list_double_time_pane_t3

0x93cc,	// (0x00040f8a) list_double_time_pane_t4_ParamLimits

0x93cc,	// (0x00040f8a) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00047207) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00047207) list_double_time_pane_t

0x93de,	// (0x00040f9c) list_setting_pane_g1_ParamLimits

0x93de,	// (0x00040f9c) list_setting_pane_g1

0x93ea,	// (0x00040fa8) list_setting_pane_g2_ParamLimits

0x93ea,	// (0x00040fa8) list_setting_pane_g2

0x0001,

0xf652,	// (0x00047210) list_setting_pane_g_ParamLimits

0xf652,	// (0x00047210) list_setting_pane_g

0x93f6,	// (0x00040fb4) list_setting_pane_t1_ParamLimits

0x93f6,	// (0x00040fb4) list_setting_pane_t1

0x9410,	// (0x00040fce) list_setting_pane_t2_ParamLimits

0x9410,	// (0x00040fce) list_setting_pane_t2

0x0002,

0xf657,	// (0x00047215) list_setting_pane_t_ParamLimits

0xf657,	// (0x00047215) list_setting_pane_t

0x944f,	// (0x0004100d) set_value_pane_cp_ParamLimits

0x944f,	// (0x0004100d) set_value_pane_cp

0x945b,	// (0x00041019) list_setting_number_pane_g1_ParamLimits

0x945b,	// (0x00041019) list_setting_number_pane_g1

0x9467,	// (0x00041025) list_setting_number_pane_g2_ParamLimits

0x9467,	// (0x00041025) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x0004721c) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x0004721c) list_setting_number_pane_g

0x9473,	// (0x00041031) list_setting_number_pane_t1_ParamLimits

0x9473,	// (0x00041031) list_setting_number_pane_t1

0x948c,	// (0x0004104a) list_setting_number_pane_t2_ParamLimits

0x948c,	// (0x0004104a) list_setting_number_pane_t2

0x94a6,	// (0x00041064) list_setting_number_pane_t3_ParamLimits

0x94a6,	// (0x00041064) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00047221) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00047221) list_setting_number_pane_t

0x944f,	// (0x0004100d) set_value_pane_ParamLimits

0x944f,	// (0x0004100d) set_value_pane

0xb661,	// (0x0004321f) bg_set_opt_pane_ParamLimits

0xb661,	// (0x0004321f) bg_set_opt_pane

0x94e9,	// (0x000410a7) set_value_pane_t1

0xb682,	// (0x00043240) slider_set_pane_cp3

0x94f7,	// (0x000410b5) volume_small_pane_cp

0xb68b,	// (0x00043249) list_form_gen_pane

0xb694,	// (0x00043252) scroll_pane_cp8

0x9500,	// (0x000410be) form_field_data_pane_ParamLimits

0x9500,	// (0x000410be) form_field_data_pane

0x9517,	// (0x000410d5) form_field_data_wide_pane_ParamLimits

0x9517,	// (0x000410d5) form_field_data_wide_pane

0x9537,	// (0x000410f5) form_field_popup_pane_ParamLimits

0x9537,	// (0x000410f5) form_field_popup_pane

0x954f,	// (0x0004110d) form_field_popup_wide_pane_ParamLimits

0x954f,	// (0x0004110d) form_field_popup_wide_pane

0xd442,	// (0x00045000) form_field_slider_pane_ParamLimits

0xd442,	// (0x00045000) form_field_slider_pane

0x9566,	// (0x00041124) form_field_slider_wide_pane_ParamLimits

0x9566,	// (0x00041124) form_field_slider_wide_pane

0xb6a5,	// (0x00043263) data_form_pane

0x9583,	// (0x00041141) form_field_data_pane_t1

0xb6b1,	// (0x0004326f) input_focus_pane

0x959d,	// (0x0004115b) data_form_wide_pane

0x95ba,	// (0x00041178) form_field_data_wide_pane_t1

0xb5a5,	// (0x00043163) input_focus_pane_cp6

0x95dc,	// (0x0004119a) form_field_popup_pane_t1

0xb6b1,	// (0x0004326f) input_focus_pane_cp7

0xb6df,	// (0x0004329d) list_form_pane

0x95fe,	// (0x000411bc) form_field_popup_wide_pane_t1

0xb6b1,	// (0x0004326f) input_focus_pane_cp8

0xb6eb,	// (0x000432a9) list_form_wide_pane

0x961b,	// (0x000411d9) form_field_slider_pane_t1_ParamLimits

0x961b,	// (0x000411d9) form_field_slider_pane_t1

0x9633,	// (0x000411f1) form_field_slider_pane_t2_ParamLimits

0x9633,	// (0x000411f1) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00047231) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00047231) form_field_slider_pane_t

0xb2f1,	// (0x00042eaf) input_focus_pane_cp9_ParamLimits

0xb2f1,	// (0x00042eaf) input_focus_pane_cp9

0x9648,	// (0x00041206) slider_cont_pane_ParamLimits

0x9648,	// (0x00041206) slider_cont_pane

0xb6f7,	// (0x000432b5) form_field_slider_wide_pane_t1_ParamLimits

0xb6f7,	// (0x000432b5) form_field_slider_wide_pane_t1

0x965c,	// (0x0004121a) form_field_slider_wide_pane_t2_ParamLimits

0x965c,	// (0x0004121a) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00047236) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00047236) form_field_slider_wide_pane_t

0xb2f1,	// (0x00042eaf) input_focus_pane_cp10_ParamLimits

0xb2f1,	// (0x00042eaf) input_focus_pane_cp10

0x966e,	// (0x0004122c) slider_cont_pane_cp1_ParamLimits

0x966e,	// (0x0004122c) slider_cont_pane_cp1

0x9682,	// (0x00041240) slider_form_pane_cp

0xb709,	// (0x000432c7) input_focus_pane_g1

0xb711,	// (0x000432cf) input_focus_pane_g2

0xb719,	// (0x000432d7) input_focus_pane_g3

0xb721,	// (0x000432df) input_focus_pane_g4

0xb729,	// (0x000432e7) input_focus_pane_g5

0xb731,	// (0x000432ef) input_focus_pane_g6

0xb739,	// (0x000432f7) input_focus_pane_g7

0xb741,	// (0x000432ff) input_focus_pane_g8

0xb749,	// (0x00043307) input_focus_pane_g9

0xb299,	// (0x00042e57) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0004723b) input_focus_pane_g

0x2cc6,	// (0x0003a884) wait_border_pane_g3_copy1

0x968a,	// (0x00041248) data_form_pane_t1

0xb299,	// (0x00042e57) wait_anim_pane_g1_copy1

0xa8fb,	// (0x000424b9) data_form_wide_pane_t1

0x96a4,	// (0x00041262) list_form_graphic_pane_cp_ParamLimits

0x96a4,	// (0x00041262) list_form_graphic_pane_cp

0x3bb5,	// (0x0003b773) slider_form_pane_g1

0x3bbe,	// (0x0003b77c) slider_form_pane_g2

0x0006,

0xf974,	// (0x00047532) slider_form_pane_g

0x96b6,	// (0x00041274) list_form_graphic_pane_ParamLimits

0x96b6,	// (0x00041274) list_form_graphic_pane

0x96c9,	// (0x00041287) list_form_graphic_pane_g1

0x96d1,	// (0x0004128f) list_form_graphic_pane_t1_ParamLimits

0x96d1,	// (0x0004128f) list_form_graphic_pane_t1

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp5_ParamLimits

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp5

0xd455,	// (0x00045013) find_pane_g1

0xb751,	// (0x0004330f) input_find_pane

0x96e6,	// (0x000412a4) input_find_pane_g1_ParamLimits

0x96e6,	// (0x000412a4) input_find_pane_g1

0x96f2,	// (0x000412b0) input_find_pane_t1_ParamLimits

0x96f2,	// (0x000412b0) input_find_pane_t1

0x9707,	// (0x000412c5) input_find_pane_t2_ParamLimits

0x9707,	// (0x000412c5) input_find_pane_t2

0x0001,

0xf692,	// (0x00047250) input_find_pane_t_ParamLimits

0xf692,	// (0x00047250) input_find_pane_t

0xb75a,	// (0x00043318) input_focus_pane_cp5_ParamLimits

0xb75a,	// (0x00043318) input_focus_pane_cp5

0xb768,	// (0x00043326) bg_popup_window_pane_cp2_ParamLimits

0xb768,	// (0x00043326) bg_popup_window_pane_cp2

0xb775,	// (0x00043333) listscroll_menu_pane_ParamLimits

0xb775,	// (0x00043333) listscroll_menu_pane

0x9728,	// (0x000412e6) popup_submenu_window_ParamLimits

0x9728,	// (0x000412e6) popup_submenu_window

0xb781,	// (0x0004333f) find_popup_pane_g1

0x9750,	// (0x0004130e) input_popup_find_pane_cp

0xb75a,	// (0x00043318) input_focus_pane_cp4_ParamLimits

0xb75a,	// (0x00043318) input_focus_pane_cp4

0xb789,	// (0x00043347) input_popup_find_pane_t1_ParamLimits

0xb789,	// (0x00043347) input_popup_find_pane_t1

0xb2a3,	// (0x00042e61) bg_popup_sub_pane_cp

0xb7b7,	// (0x00043375) listscroll_popup_sub_pane

0xb7bf,	// (0x0004337d) list_submenu_pane_ParamLimits

0xb7bf,	// (0x0004337d) list_submenu_pane

0xb7d0,	// (0x0004338e) scroll_pane_cp4

0x9768,	// (0x00041326) list_single_popup_submenu_pane_ParamLimits

0x9768,	// (0x00041326) list_single_popup_submenu_pane

0x977c,	// (0x0004133a) list_single_popup_submenu_pane_g1

0x9784,	// (0x00041342) list_single_popup_submenu_pane_t1_ParamLimits

0x9784,	// (0x00041342) list_single_popup_submenu_pane_t1

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp1_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp1

0xb7d8,	// (0x00043396) tabs_2_active_pane_g1

0x9799,	// (0x00041357) tabs_2_active_pane_t1

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp1_ParamLimits

0xb2f1,	// (0x00042eaf) bg_passive_tab_pane_cp1

0xb7d8,	// (0x00043396) tabs_2_passive_pane_g1

0x9799,	// (0x00041357) tabs_2_passive_pane_t1

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp4

0x97ab,	// (0x00041369) tabs_2_long_active_pane_t1

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp4

0x0960,	// (0x0003851e) list_single_midp_graphic_pane_g4_ParamLimits

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp5

0x97be,	// (0x0004137c) tabs_3_long_active_pane_t1

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp5

0x0960,	// (0x0003851e) list_single_midp_graphic_pane_g4

0xb2ff,	// (0x00042ebd) bg_popup_window_pane_cp13_ParamLimits

0xb2ff,	// (0x00042ebd) bg_popup_window_pane_cp13

0xb7e0,	// (0x0004339e) listscroll_popup_fast_pane_ParamLimits

0xb7e0,	// (0x0004339e) listscroll_popup_fast_pane

0xb7ec,	// (0x000433aa) grid_popup_fast_pane_ParamLimits

0xb7ec,	// (0x000433aa) grid_popup_fast_pane

0xb7fe,	// (0x000433bc) scroll_pane_cp9_ParamLimits

0xb7fe,	// (0x000433bc) scroll_pane_cp9

0x54c9,	// (0x0003d087) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x54c9,	// (0x0003d087) list_single_graphic_hl_pane_t1_cp2

0xb811,	// (0x000433cf) input_focus_pane_cp20_ParamLimits

0xb811,	// (0x000433cf) input_focus_pane_cp20

0xb81f,	// (0x000433dd) query_popup_data_pane_t1_ParamLimits

0xb81f,	// (0x000433dd) query_popup_data_pane_t1

0xb832,	// (0x000433f0) query_popup_data_pane_t2_ParamLimits

0xb832,	// (0x000433f0) query_popup_data_pane_t2

0xb878,	// (0x00043436) query_popup_data_pane_t3_ParamLimits

0xb878,	// (0x00043436) query_popup_data_pane_t3

0xb8b9,	// (0x00043477) query_popup_data_pane_t4_ParamLimits

0xb8b9,	// (0x00043477) query_popup_data_pane_t4

0xb8f5,	// (0x000434b3) query_popup_data_pane_t5_ParamLimits

0xb8f5,	// (0x000434b3) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00047255) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00047255) query_popup_data_pane_t

0xb709,	// (0x000432c7) bg_set_opt_pane_g1

0xb711,	// (0x000432cf) bg_set_opt_pane_g2

0xb719,	// (0x000432d7) bg_set_opt_pane_g3

0xb721,	// (0x000432df) bg_set_opt_pane_g4

0xb729,	// (0x000432e7) bg_set_opt_pane_g5

0xb731,	// (0x000432ef) bg_set_opt_pane_g6

0xb739,	// (0x000432f7) bg_set_opt_pane_g7

0xb741,	// (0x000432ff) bg_set_opt_pane_g8

0xb749,	// (0x00043307) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00047260) bg_set_opt_pane_g

0xf14d,	// (0x00046d0b) control_top_pane_stacon_ParamLimits

0xf14d,	// (0x00046d0b) control_top_pane_stacon

0xf1a0,	// (0x00046d5e) signal_pane_stacon_ParamLimits

0xf1a0,	// (0x00046d5e) signal_pane_stacon

0xf1c5,	// (0x00046d83) stacon_top_pane_g1_ParamLimits

0xf1c5,	// (0x00046d83) stacon_top_pane_g1

0xf1e7,	// (0x00046da5) title_pane_stacon_ParamLimits

0xf1e7,	// (0x00046da5) title_pane_stacon

0xf211,	// (0x00046dcf) uni_indicator_pane_stacon_ParamLimits

0xf211,	// (0x00046dcf) uni_indicator_pane_stacon

0xf226,	// (0x00046de4) battery_pane_stacon_ParamLimits

0xf226,	// (0x00046de4) battery_pane_stacon

0xf26a,	// (0x00046e28) control_bottom_pane_stacon_ParamLimits

0xf26a,	// (0x00046e28) control_bottom_pane_stacon

0xf28d,	// (0x00046e4b) navi_pane_stacon_ParamLimits

0xf28d,	// (0x00046e4b) navi_pane_stacon

0xf2b0,	// (0x00046e6e) stacon_bottom_pane_g1_ParamLimits

0xf2b0,	// (0x00046e6e) stacon_bottom_pane_g1

0xee8a,	// (0x00046a48) aid_levels_signal_lsc_ParamLimits

0xee8a,	// (0x00046a48) aid_levels_signal_lsc

0xeea0,	// (0x00046a5e) signal_pane_stacon_g1_ParamLimits

0xeea0,	// (0x00046a5e) signal_pane_stacon_g1

0xeeb4,	// (0x00046a72) signal_pane_stacon_g2_ParamLimits

0xeeb4,	// (0x00046a72) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00047273) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00047273) signal_pane_stacon_g

0xeee9,	// (0x00046aa7) title_pane_stacon_t1_ParamLimits

0xeee9,	// (0x00046aa7) title_pane_stacon_t1

0xb939,	// (0x000434f7) uni_indicator_pane_stacon_g1

0xb943,	// (0x00043501) uni_indicator_pane_stacon_g2

0xb94d,	// (0x0004350b) uni_indicator_pane_stacon_g3

0xb957,	// (0x00043515) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0004727f) uni_indicator_pane_stacon_g

0xef0e,	// (0x00046acc) control_top_pane_stacon_g1

0xef16,	// (0x00046ad4) control_top_pane_stacon_t1_ParamLimits

0xef16,	// (0x00046ad4) control_top_pane_stacon_t1

0xef4d,	// (0x00046b0b) aid_levels_battery_lsc_ParamLimits

0xef4d,	// (0x00046b0b) aid_levels_battery_lsc

0xef64,	// (0x00046b22) battery_pane_stacon_g1_ParamLimits

0xef64,	// (0x00046b22) battery_pane_stacon_g1

0xef77,	// (0x00046b35) battery_pane_stacon_g2_ParamLimits

0xef77,	// (0x00046b35) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00047288) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00047288) battery_pane_stacon_g

0xefb5,	// (0x00046b73) navi_icon_pane_stacon

0xefc9,	// (0x00046b87) navi_navi_pane_stacon

0xefb5,	// (0x00046b73) navi_text_pane_stacon

0xef0e,	// (0x00046acc) control_bottom_pane_stacon_g1

0xefdd,	// (0x00046b9b) control_bottom_pane_stacon_t1_ParamLimits

0xefdd,	// (0x00046b9b) control_bottom_pane_stacon_t1

0x97ea,	// (0x000413a8) grid_app_pane_ParamLimits

0x97ea,	// (0x000413a8) grid_app_pane

0x9822,	// (0x000413e0) scroll_pane_cp15_ParamLimits

0x9822,	// (0x000413e0) scroll_pane_cp15

0x9837,	// (0x000413f5) cell_app_pane_ParamLimits

0x9837,	// (0x000413f5) cell_app_pane

0x987c,	// (0x0004143a) cell_app_pane_g1_ParamLimits

0x987c,	// (0x0004143a) cell_app_pane_g1

0xb97b,	// (0x00043539) cell_app_pane_g2_ParamLimits

0xb97b,	// (0x00043539) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x0004728d) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x0004728d) cell_app_pane_g

0x98a0,	// (0x0004145e) cell_app_pane_t1_ParamLimits

0x98a0,	// (0x0004145e) cell_app_pane_t1

0xb987,	// (0x00043545) grid_highlight_pane_ParamLimits

0xb987,	// (0x00043545) grid_highlight_pane

0xb709,	// (0x000432c7) cell_highlight_pane_g1

0xb711,	// (0x000432cf) cell_highlight_pane_g2

0xb719,	// (0x000432d7) cell_highlight_pane_g3

0xb721,	// (0x000432df) cell_highlight_pane_g4

0xb729,	// (0x000432e7) cell_highlight_pane_g5

0xb731,	// (0x000432ef) cell_highlight_pane_g6

0xb739,	// (0x000432f7) cell_highlight_pane_g7

0xb741,	// (0x000432ff) cell_highlight_pane_g8

0xb749,	// (0x00043307) cell_highlight_pane_g9

0xb299,	// (0x00042e57) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0004723b) cell_highlight_pane_g

0xb998,	// (0x00043556) bg_scroll_pane

0x98c0,	// (0x0004147e) scroll_handle_pane

0xb9df,	// (0x0004359d) scroll_bg_pane_g1

0xb9f4,	// (0x000435b2) scroll_bg_pane_g2

0xba0c,	// (0x000435ca) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00047292) scroll_bg_pane_g

0x98d4,	// (0x00041492) scroll_handle_focus_pane_ParamLimits

0x98d4,	// (0x00041492) scroll_handle_focus_pane

0xb9df,	// (0x0004359d) scroll_handle_pane_g1

0xba21,	// (0x000435df) scroll_handle_pane_g2

0xba0c,	// (0x000435ca) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00047299) scroll_handle_pane_g

0xb75a,	// (0x00043318) bg_popup_sub_pane_cp21_ParamLimits

0xb75a,	// (0x00043318) bg_popup_sub_pane_cp21

0x98e1,	// (0x0004149f) popup_fep_japan_predictive_window_t1_ParamLimits

0x98e1,	// (0x0004149f) popup_fep_japan_predictive_window_t1

0x98f8,	// (0x000414b6) popup_fep_japan_predictive_window_t2_ParamLimits

0x98f8,	// (0x000414b6) popup_fep_japan_predictive_window_t2

0x992b,	// (0x000414e9) popup_fep_japan_predictive_window_t3_ParamLimits

0x992b,	// (0x000414e9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x000472a0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x000472a0) popup_fep_japan_predictive_window_t

0xb2a3,	// (0x00042e61) bg_popup_sub_pane_cp23

0x9962,	// (0x00041520) listscroll_japin_cand_pane

0xba35,	// (0x000435f3) popup_fep_japan_candidate_window_t1

0xba43,	// (0x00043601) candidate_pane_ParamLimits

0xba43,	// (0x00043601) candidate_pane

0x996a,	// (0x00041528) scroll_pane_cp30

0xba55,	// (0x00043613) list_single_popup_jap_candidate_pane_ParamLimits

0xba55,	// (0x00043613) list_single_popup_jap_candidate_pane

0xb2a3,	// (0x00042e61) list_highlight_pane_cp30

0xba6a,	// (0x00043628) list_single_popup_jap_candidate_pane_t1

0xba79,	// (0x00043637) level_1_signal

0xba86,	// (0x00043644) level_2_signal

0xba93,	// (0x00043651) level_3_signal

0xbaa0,	// (0x0004365e) level_4_signal

0xbaad,	// (0x0004366b) level_5_signal

0xbaba,	// (0x00043678) level_6_signal

0xbac7,	// (0x00043685) level_7_signal

0xba79,	// (0x00043637) level_1_battery

0xba86,	// (0x00043644) level_2_battery

0xba93,	// (0x00043651) level_3_battery

0xbaa0,	// (0x0004365e) level_4_battery

0xbaad,	// (0x0004366b) level_5_battery

0xbaba,	// (0x00043678) level_6_battery

0xbac7,	// (0x00043685) level_7_battery

0xbaec,	// (0x000436aa) list_menu_pane_ParamLimits

0xbaec,	// (0x000436aa) list_menu_pane

0xbb02,	// (0x000436c0) scroll_pane_cp25_ParamLimits

0xbb02,	// (0x000436c0) scroll_pane_cp25

0x9972,	// (0x00041530) list_double2_graphic_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double2_graphic_pane_cp2

0x9972,	// (0x00041530) list_double2_large_graphic_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double2_large_graphic_pane_cp2

0x9972,	// (0x00041530) list_double2_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double2_pane_cp2

0x9972,	// (0x00041530) list_double_graphic_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double_graphic_pane_cp2

0x9972,	// (0x00041530) list_double_large_graphic_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double_large_graphic_pane_cp2

0x9972,	// (0x00041530) list_double_number_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double_number_pane_cp2

0x9972,	// (0x00041530) list_double_pane_cp2_ParamLimits

0x9972,	// (0x00041530) list_double_pane_cp2

0x9981,	// (0x0004153f) list_single_2graphic_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_2graphic_pane_cp2

0x9981,	// (0x0004153f) list_single_graphic_heading_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_graphic_heading_pane_cp2

0x9981,	// (0x0004153f) list_single_graphic_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_graphic_pane_cp2

0x9981,	// (0x0004153f) list_single_heading_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_heading_pane_cp2

0xbb2b,	// (0x000436e9) list_single_large_graphic_pane_cp2_ParamLimits

0xbb2b,	// (0x000436e9) list_single_large_graphic_pane_cp2

0x9981,	// (0x0004153f) list_single_number_heading_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_number_heading_pane_cp2

0x9981,	// (0x0004153f) list_single_number_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_number_pane_cp2

0x9981,	// (0x0004153f) list_single_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_pane_cp2

0xbb45,	// (0x00043703) bg_popup_sub_pane_cp22

0xf133,	// (0x00046cf1) popup_side_volume_key_window_g1

0xf13f,	// (0x00046cfd) popup_side_volume_key_window_t1

0x9a49,	// (0x00041607) volume_small_pane_cp1

0xb2f1,	// (0x00042eaf) bg_popup_sub_pane_cp24_ParamLimits

0xb2f1,	// (0x00042eaf) bg_popup_sub_pane_cp24

0xbb5b,	// (0x00043719) fep_china_uni_candidate_pane_ParamLimits

0xbb5b,	// (0x00043719) fep_china_uni_candidate_pane

0xbb6f,	// (0x0004372d) fep_china_uni_entry_pane

0xbb7f,	// (0x0004373d) popup_fep_china_uni_window_g1

0x9a51,	// (0x0004160f) fep_china_uni_entry_pane_g1

0x9a59,	// (0x00041617) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x000472d1) fep_china_uni_entry_pane_g

0xbb9b,	// (0x00043759) fep_entry_item_pane

0xbba5,	// (0x00043763) fep_candidate_item_pane

0x9a61,	// (0x0004161f) fep_china_uni_candidate_pane_g1

0xbbad,	// (0x0004376b) fep_china_uni_candidate_pane_g2

0xbbb5,	// (0x00043773) fep_china_uni_candidate_pane_g3

0x9a69,	// (0x00041627) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x000472d6) fep_china_uni_candidate_pane_g

0xb299,	// (0x00042e57) fep_entry_item_pane_g1

0xbbbd,	// (0x0004377b) fep_entry_item_pane_t1_ParamLimits

0xbbbd,	// (0x0004377b) fep_entry_item_pane_t1

0xbbd3,	// (0x00043791) fep_candidate_item_pane_t1_ParamLimits

0xbbd3,	// (0x00043791) fep_candidate_item_pane_t1

0xbbe8,	// (0x000437a6) fep_candidate_item_pane_t2_ParamLimits

0xbbe8,	// (0x000437a6) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x000472df) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x000472df) fep_candidate_item_pane_t

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp31_ParamLimits

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp31

0xbbfa,	// (0x000437b8) level_1_signal_lsc

0xbc03,	// (0x000437c1) level_2_signal_lsc

0xbc0c,	// (0x000437ca) level_3_signal_lsc

0xbc15,	// (0x000437d3) level_4_signal_lsc

0xbc1e,	// (0x000437dc) level_5_signal_lsc

0xbc27,	// (0x000437e5) level_6_signal_lsc

0xbc30,	// (0x000437ee) level_7_signal_lsc

0xbc30,	// (0x000437ee) level_1_battery_lsc

0xbc39,	// (0x000437f7) level_2_battery_lsc

0xbc42,	// (0x00043800) level_3_battery_lsc

0xbc4b,	// (0x00043809) level_4_battery_lsc

0xbc54,	// (0x00043812) level_5_battery_lsc

0xbc5d,	// (0x0004381b) level_6_battery_lsc

0xbbfa,	// (0x000437b8) level_7_battery_lsc

0xbc66,	// (0x00043824) scroll_handle_focus_pane_g1

0xbc6f,	// (0x0004382d) scroll_handle_focus_pane_g2

0xbc78,	// (0x00043836) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x000472e4) scroll_handle_focus_pane_g

0x9a71,	// (0x0004162f) list_single_2graphic_pane_g1_ParamLimits

0x9a71,	// (0x0004162f) list_single_2graphic_pane_g1

0x919d,	// (0x00040d5b) list_single_2graphic_pane_g2_ParamLimits

0x919d,	// (0x00040d5b) list_single_2graphic_pane_g2

0xd35d,	// (0x00044f1b) list_single_2graphic_pane_g3_ParamLimits

0xd35d,	// (0x00044f1b) list_single_2graphic_pane_g3

0x9a7d,	// (0x0004163b) list_single_2graphic_pane_g4_ParamLimits

0x9a7d,	// (0x0004163b) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x000472eb) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x000472eb) list_single_2graphic_pane_g

0x9a89,	// (0x00041647) list_single_2graphic_pane_t1_ParamLimits

0x9a89,	// (0x00041647) list_single_2graphic_pane_t1

0x9ab7,	// (0x00041675) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9ab7,	// (0x00041675) list_double2_graphic_large_graphic_pane_g1

0x91fc,	// (0x00040dba) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x91fc,	// (0x00040dba) list_double2_graphic_large_graphic_pane_g2

0xd411,	// (0x00044fcf) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd411,	// (0x00044fcf) list_double2_graphic_large_graphic_pane_g3

0x9ac9,	// (0x00041687) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ac9,	// (0x00041687) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x000472f4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x000472f4) list_double2_graphic_large_graphic_pane_g

0x9392,	// (0x00040f50) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9392,	// (0x00040f50) list_double2_graphic_large_graphic_pane_t1

0x9ad5,	// (0x00041693) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ad5,	// (0x00041693) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x000472fd) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x000472fd) list_double2_graphic_large_graphic_pane_t

0x9b5a,	// (0x00041718) popup_fast_swap_window_ParamLimits

0x9b5a,	// (0x00041718) popup_fast_swap_window

0x9b76,	// (0x00041734) popup_side_volume_key_window

0xf33b,	// (0x00046ef9) stacon_top_pane

0xf345,	// (0x00046f03) status_pane_ParamLimits

0xf345,	// (0x00046f03) status_pane

0x9b90,	// (0x0004174e) status_small_pane

0xb2a3,	// (0x00042e61) control_pane

0xb2a3,	// (0x00042e61) stacon_bottom_pane

0xb694,	// (0x00043252) scroll_pane_cp121

0xb68b,	// (0x00043249) set_content_pane

0x9ae7,	// (0x000416a5) bg_active_tab_pane_g1_cp1

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp1

0x9af9,	// (0x000416b7) bg_active_tab_pane_g3_cp1

0x9ae7,	// (0x000416a5) bg_passive_tab_pane_g1_cp1

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp1

0x9af9,	// (0x000416b7) bg_passive_tab_pane_g3_cp1

0x9b02,	// (0x000416c0) bg_active_tab_pane_g1_cp2

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp2

0x9b0b,	// (0x000416c9) bg_active_tab_pane_g3_cp2

0x9b02,	// (0x000416c0) bg_passive_tab_pane_g1_cp2

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp2

0x9b0b,	// (0x000416c9) bg_passive_tab_pane_g3_cp2

0x9b14,	// (0x000416d2) bg_active_tab_pane_g1_cp3

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp3

0x9b1d,	// (0x000416db) bg_active_tab_pane_g3_cp3

0x9b14,	// (0x000416d2) bg_passive_tab_pane_g1_cp3

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp3

0x9b1d,	// (0x000416db) bg_passive_tab_pane_g3_cp3

0x9b26,	// (0x000416e4) bg_active_tab_pane_g1_cp4

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp4

0x9b31,	// (0x000416ef) bg_active_tab_pane_g3_cp4

0x9b26,	// (0x000416e4) bg_passive_tab_pane_g1_cp4

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp4

0x9b31,	// (0x000416ef) bg_passive_tab_pane_g3_cp4

0x9b3c,	// (0x000416fa) bg_active_tab_pane_g1_cp5

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp5

0x9b45,	// (0x00041703) bg_active_tab_pane_g3_cp5

0x9b3c,	// (0x000416fa) bg_passive_tab_pane_g1_cp5

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp5

0x9b45,	// (0x00041703) bg_passive_tab_pane_g3_cp5

0x41b6,	// (0x0003bd74) list_set_graphic_pane_ParamLimits

0x41b6,	// (0x0003bd74) list_set_graphic_pane

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp4

0xf2cc,	// (0x00046e8a) list_set_graphic_pane_g1_ParamLimits

0xf2cc,	// (0x00046e8a) list_set_graphic_pane_g1

0xf2d8,	// (0x00046e96) list_set_graphic_pane_g2_ParamLimits

0xf2d8,	// (0x00046e96) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00047302) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00047302) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00047687) volume_small_pane_cp_g

0x9b4e,	// (0x0004170c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9b4e,	// (0x0004170c) list_double2_large_graphic_pane_g1_cp2

0xf2fa,	// (0x00046eb8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf2fa,	// (0x00046eb8) list_double2_large_graphic_pane_g2_cp2

0xf30b,	// (0x00046ec9) list_double2_large_graphic_pane_g3_cp2

0xf313,	// (0x00046ed1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf313,	// (0x00046ed1) list_double2_large_graphic_pane_t1_cp2

0xf329,	// (0x00046ee7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf329,	// (0x00046ee7) list_double2_large_graphic_pane_t2_cp2

0xc515,	// (0x000440d3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc515,	// (0x000440d3) list_double_large_graphic_pane_g1_cp2

0x3788,	// (0x0003b346) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3788,	// (0x0003b346) list_double_large_graphic_pane_g2_cp2

0xf455,	// (0x00047013) list_double_large_graphic_pane_g3_cp2

0x3799,	// (0x0003b357) list_double_large_graphic_pane_g4_cp

0x37a1,	// (0x0003b35f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x37a1,	// (0x0003b35f) list_double_large_graphic_pane_t1_cp2

0x37b8,	// (0x0003b376) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x37b8,	// (0x0003b376) list_double_large_graphic_pane_t2_cp2

0xf353,	// (0x00046f11) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf353,	// (0x00046f11) list_double2_graphic_pane_g1_cp2

0xf361,	// (0x00046f1f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf361,	// (0x00046f1f) list_double2_graphic_pane_g2_cp2

0xf372,	// (0x00046f30) list_double2_graphic_pane_g3_cp2

0xf37c,	// (0x00046f3a) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf37c,	// (0x00046f3a) list_double2_graphic_pane_t1_cp2

0xf392,	// (0x00046f50) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf392,	// (0x00046f50) list_double2_graphic_pane_t2_cp2

0xbc81,	// (0x0004383f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbc81,	// (0x0004383f) list_single_number_heading_pane_g1_cp2

0xf3a4,	// (0x00046f62) list_single_number_heading_pane_g2_cp2

0xf3ac,	// (0x00046f6a) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf3ac,	// (0x00046f6a) list_single_number_heading_pane_t1_cp2

0xf3c2,	// (0x00046f80) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf3c2,	// (0x00046f80) list_single_number_heading_pane_t2_cp2

0xf3d4,	// (0x00046f92) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf3d4,	// (0x00046f92) list_single_number_heading_pane_t3_cp2

0xbc81,	// (0x0004383f) list_single_heading_pane_g1_cp2_ParamLimits

0xbc81,	// (0x0004383f) list_single_heading_pane_g1_cp2

0xf3a4,	// (0x00046f62) list_single_heading_pane_g2_cp2

0xf3ac,	// (0x00046f6a) list_single_heading_pane_t1_cp2_ParamLimits

0xf3ac,	// (0x00046f6a) list_single_heading_pane_t1_cp2

0x3581,	// (0x0003b13f) list_single_heading_pane_t2_cp2_ParamLimits

0x3581,	// (0x0003b13f) list_single_heading_pane_t2_cp2

0x34c9,	// (0x0003b087) list_double_graphic_pane_g1_cp2_ParamLimits

0x34c9,	// (0x0003b087) list_double_graphic_pane_g1_cp2

0x34d5,	// (0x0003b093) list_double_graphic_pane_g2_cp2_ParamLimits

0x34d5,	// (0x0003b093) list_double_graphic_pane_g2_cp2

0x34e4,	// (0x0003b0a2) list_double_graphic_pane_g3_cp2

0x34ec,	// (0x0003b0aa) list_double_graphic_pane_t1_cp2_ParamLimits

0x34ec,	// (0x0003b0aa) list_double_graphic_pane_t1_cp2

0x3502,	// (0x0003b0c0) list_double_graphic_pane_t2_cp2_ParamLimits

0x3502,	// (0x0003b0c0) list_double_graphic_pane_t2_cp2

0xf449,	// (0x00047007) list_double_number_pane_g1_cp2_ParamLimits

0xf449,	// (0x00047007) list_double_number_pane_g1_cp2

0xf455,	// (0x00047013) list_double_number_pane_g2_cp2

0x348d,	// (0x0003b04b) list_double_number_pane_t1_cp2_ParamLimits

0x348d,	// (0x0003b04b) list_double_number_pane_t1_cp2

0x34a1,	// (0x0003b05f) list_double_number_pane_t2_cp2_ParamLimits

0x34a1,	// (0x0003b05f) list_double_number_pane_t2_cp2

0x34b7,	// (0x0003b075) list_double_number_pane_t3_cp2_ParamLimits

0x34b7,	// (0x0003b075) list_double_number_pane_t3_cp2

0x3376,	// (0x0003af34) list_single_graphic_pane_g1_cp2_ParamLimits

0x3376,	// (0x0003af34) list_single_graphic_pane_g1_cp2

0xf4a5,	// (0x00047063) list_single_graphic_pane_g2_cp2_ParamLimits

0xf4a5,	// (0x00047063) list_single_graphic_pane_g2_cp2

0xf4b1,	// (0x0004706f) list_single_graphic_pane_g3_cp2

0x334c,	// (0x0003af0a) list_single_graphic_pane_t1_cp2_ParamLimits

0x334c,	// (0x0003af0a) list_single_graphic_pane_t1_cp2

0xf4a5,	// (0x00047063) list_single_number_pane_g1_cp2_ParamLimits

0xf4a5,	// (0x00047063) list_single_number_pane_g1_cp2

0xf4b1,	// (0x0004706f) list_single_number_pane_g2_cp2

0x334c,	// (0x0003af0a) list_single_number_pane_t1_cp2_ParamLimits

0x334c,	// (0x0003af0a) list_single_number_pane_t1_cp2

0x3362,	// (0x0003af20) list_single_number_pane_t2_cp2_ParamLimits

0x3362,	// (0x0003af20) list_single_number_pane_t2_cp2

0xf2fa,	// (0x00046eb8) list_double2_pane_g1_cp2_ParamLimits

0xf2fa,	// (0x00046eb8) list_double2_pane_g1_cp2

0xf30b,	// (0x00046ec9) list_double2_pane_g2_cp2

0xf421,	// (0x00046fdf) list_double2_pane_t1_cp2_ParamLimits

0xf421,	// (0x00046fdf) list_double2_pane_t1_cp2

0xf437,	// (0x00046ff5) list_double2_pane_t2_cp2_ParamLimits

0xf437,	// (0x00046ff5) list_double2_pane_t2_cp2

0xf449,	// (0x00047007) list_double_pane_g1_cp2_ParamLimits

0xf449,	// (0x00047007) list_double_pane_g1_cp2

0xf455,	// (0x00047013) list_double_pane_g2_cp2

0xf45d,	// (0x0004701b) list_double_pane_t1_cp2_ParamLimits

0xf45d,	// (0x0004701b) list_double_pane_t1_cp2

0xf473,	// (0x00047031) list_double_pane_t2_cp2_ParamLimits

0xf473,	// (0x00047031) list_double_pane_t2_cp2

0x9b9b,	// (0x00041759) list_single_pane_cp2_g3

0xf4a5,	// (0x00047063) list_single_pane_g1_cp2_ParamLimits

0xf4a5,	// (0x00047063) list_single_pane_g1_cp2

0xf4b1,	// (0x0004706f) list_single_pane_g2_cp2

0xf4b9,	// (0x00047077) list_single_pane_t1_cp2_ParamLimits

0xf4b9,	// (0x00047077) list_single_pane_t1_cp2

0x9ba3,	// (0x00041761) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9ba3,	// (0x00041761) list_single_large_graphic_pane_g1_cp2

0xf4d1,	// (0x0004708f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf4d1,	// (0x0004708f) list_single_large_graphic_pane_g2_cp2

0xf4dd,	// (0x0004709b) list_single_large_graphic_pane_g3_cp2

0x9baf,	// (0x0004176d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9baf,	// (0x0004176d) list_single_large_graphic_pane_g4_cp1

0xf4e5,	// (0x000470a3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf4e5,	// (0x000470a3) list_single_large_graphic_pane_t1_cp2

0x3318,	// (0x0003aed6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3318,	// (0x0003aed6) list_single_graphic_heading_pane_g1_cp2

0x32e5,	// (0x0003aea3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x32e5,	// (0x0003aea3) list_single_graphic_heading_pane_g4_cp2

0xf4b1,	// (0x0004706f) list_single_graphic_heading_pane_g5_cp2

0x3324,	// (0x0003aee2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3324,	// (0x0003aee2) list_single_graphic_heading_pane_t1_cp2

0x333a,	// (0x0003aef8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x333a,	// (0x0003aef8) list_single_graphic_heading_pane_t2_cp2

0x32d9,	// (0x0003ae97) list_single_2graphic_pane_g1_cp2_ParamLimits

0x32d9,	// (0x0003ae97) list_single_2graphic_pane_g1_cp2

0x32e5,	// (0x0003aea3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x32e5,	// (0x0003aea3) list_single_2graphic_pane_g2_cp2

0xf4b1,	// (0x0004706f) list_single_2graphic_pane_g3_cp2

0x32f6,	// (0x0003aeb4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x32f6,	// (0x0003aeb4) list_single_2graphic_pane_g4_cp2

0x3302,	// (0x0003aec0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3302,	// (0x0003aec0) list_single_2graphic_pane_t1_cp2

0xb299,	// (0x00042e57) list_highlight_pane_g10_cp1

0x2ec1,	// (0x0003aa7f) list_highlight_pane_g1_cp1

0x2ec9,	// (0x0003aa87) list_highlight_pane_g2_cp1

0x2ed1,	// (0x0003aa8f) list_highlight_pane_g3_cp1

0x2ed9,	// (0x0003aa97) list_highlight_pane_g4_cp1

0x2ee1,	// (0x0003aa9f) list_highlight_pane_g5_cp1

0x2ee9,	// (0x0003aaa7) list_highlight_pane_g6_cp1

0x2ef1,	// (0x0003aaaf) list_highlight_pane_g7_cp1

0x2ef9,	// (0x0003aab7) list_highlight_pane_g8_cp1

0x2f01,	// (0x0003aabf) list_highlight_pane_g9_cp1

0xc2aa,	// (0x00043e68) form_field_slider_pane_t3

0xc2b8,	// (0x00043e76) form_field_slider_pane_t4

0x2e05,	// (0x0003a9c3) slider_form_pane_ParamLimits

0x2e05,	// (0x0003a9c3) slider_form_pane

0xb2a3,	// (0x00042e61) control_abbreviations

0xb2a3,	// (0x00042e61) control_conventions

0xb2a3,	// (0x00042e61) control_definitions

0xb2a3,	// (0x00042e61) format_table_attribute

0xc4ec,	// (0x000440aa) bg_popup_preview_window_pane_g9

0xb2a3,	// (0x00042e61) format_table_data2

0xb2a3,	// (0x00042e61) format_table_data3

0xb2a3,	// (0x00042e61) format_table_data_example

0x0008,

0xb2a3,	// (0x00042e61) intro_purpose

0xf8d4,	// (0x00047492) bg_popup_preview_window_pane_g

0xb2a3,	// (0x00042e61) texts_category

0xb2a3,	// (0x00042e61) texts_graphics

0xf4fb,	// (0x000470b9) text_digital

0xf50a,	// (0x000470c8) text_primary

0xf519,	// (0x000470d7) text_primary_small

0xf528,	// (0x000470e6) text_secondary

0xf537,	// (0x000470f5) text_title

0xc851,	// (0x0004440f) bg_passive_tab_pane_g1_cp3_srt

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp3_srt

0xc85a,	// (0x00044418) bg_passive_tab_pane_g3_cp3_srt

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp3_srt_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp3_srt

0xc863,	// (0x00044421) tabs_4_active_pane_srt_g1

0xc86b,	// (0x00044429) tabs_4_active_pane_srt_t1_ParamLimits

0xc86b,	// (0x00044429) tabs_4_active_pane_srt_t1

0xc851,	// (0x0004440f) bg_active_tab_pane_g1_cp3_copy1

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp3_copy1

0xc85a,	// (0x00044418) bg_active_tab_pane_g3_cp3_copy1

0xb2ff,	// (0x00042ebd) tabs_2_long_active_pane_srt_ParamLimits

0xb2ff,	// (0x00042ebd) tabs_2_long_active_pane_srt

0xb2ff,	// (0x00042ebd) tabs_2_long_passive_pane_srt_ParamLimits

0xb2ff,	// (0x00042ebd) tabs_2_long_passive_pane_srt

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp4_srt_ParamLimits

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp4_srt

0xc604,	// (0x000441c2) bg_passive_tab_pane_g1_cp4_srt

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp4_srt

0xc60d,	// (0x000441cb) bg_passive_tab_pane_g3_cp4_srt

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp4_srt_ParamLimits

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp4_srt

0xc616,	// (0x000441d4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc616,	// (0x000441d4) tabs_2_long_active_pane_srt_t1

0xc604,	// (0x000441c2) bg_active_tab_pane_g1_cp4_srt

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp4_srt

0xc60d,	// (0x000441cb) bg_active_tab_pane_g3_cp4_srt

0xb2f1,	// (0x00042eaf) tabs_3_long_active_pane_srt_ParamLimits

0xb2f1,	// (0x00042eaf) tabs_3_long_active_pane_srt

0xb2f1,	// (0x00042eaf) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb2f1,	// (0x00042eaf) tabs_3_long_passive_pane_cp_srt

0xb2f1,	// (0x00042eaf) tabs_3_long_passive_pane_srt_ParamLimits

0xb2f1,	// (0x00042eaf) tabs_3_long_passive_pane_srt

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp5_srt_ParamLimits

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp5_srt

0x9b3c,	// (0x000416fa) bg_passive_tab_pane_g1_cp5_srt

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp5_srt

0x9b45,	// (0x00041703) bg_passive_tab_pane_g3_cp5_srt

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp5_srt_ParamLimits

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp5_srt

0xc5ee,	// (0x000441ac) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5ee,	// (0x000441ac) tabs_3_long_active_pane_srt_t1

0x9b3c,	// (0x000416fa) bg_active_tab_pane_g1_cp5_srt

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp5_srt

0x9b45,	// (0x00041703) bg_active_tab_pane_g3_cp5_srt

0x39cc,	// (0x0003b58a) navi_text_pane_srt_t1

0x39c4,	// (0x0003b582) navi_icon_pane_srt_g1

0x201d,	// (0x00039bdb) midp_editing_number_pane_srt

0xf546,	// (0x00047104) midp_ticker_pane_srt

0x2025,	// (0x00039be3) midp_ticker_pane_srt_g1

0x202d,	// (0x00039beb) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00047321) midp_ticker_pane_srt_g

0x2035,	// (0x00039bf3) midp_ticker_pane_srt_t1

0x39b5,	// (0x0003b573) midp_editing_number_pane_t1_copy1

0x9bc9,	// (0x00041787) listscroll_midp_pane

0x9bc9,	// (0x00041787) midp_form_pane

0x9c34,	// (0x000417f2) midp_info_popup_window_ParamLimits

0x9c34,	// (0x000417f2) midp_info_popup_window

0xb75a,	// (0x00043318) bg_popup_sub_pane_cp50_ParamLimits

0xb75a,	// (0x00043318) bg_popup_sub_pane_cp50

0x2afd,	// (0x0003a6bb) listscroll_midp_info_pane_ParamLimits

0x2afd,	// (0x0003a6bb) listscroll_midp_info_pane

0x2add,	// (0x0003a69b) listscroll_form_midp_pane_ParamLimits

0x2add,	// (0x0003a69b) listscroll_form_midp_pane

0x2ae9,	// (0x0003a6a7) scroll_bar_cp050

0x2add,	// (0x0003a69b) list_midp_pane

0xca0d,	// (0x000445cb) signal_pane_g2_cp

0x29f7,	// (0x0003a5b5) listscroll_midp_info_pane_t1_ParamLimits

0x29f7,	// (0x0003a5b5) listscroll_midp_info_pane_t1

0xc0e4,	// (0x00043ca2) listscroll_midp_info_pane_t2_ParamLimits

0xc0e4,	// (0x00043ca2) listscroll_midp_info_pane_t2

0xc122,	// (0x00043ce0) listscroll_midp_info_pane_t3_ParamLimits

0xc122,	// (0x00043ce0) listscroll_midp_info_pane_t3

0xc15c,	// (0x00043d1a) listscroll_midp_info_pane_t4_ParamLimits

0xc15c,	// (0x00043d1a) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x000473cd) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x000473cd) listscroll_midp_info_pane_t

0xb7d0,	// (0x0004338e) scroll_pane_cp21

0x2997,	// (0x0003a555) form_midp_field_choice_group_pane

0xc0a7,	// (0x00043c65) form_midp_field_text_pane

0x29dd,	// (0x0003a59b) form_midp_field_time_pane

0x29e5,	// (0x0003a5a3) form_midp_gauge_slider_pane

0x29ee,	// (0x0003a5ac) form_midp_gauge_wait_pane

0xb2a3,	// (0x00042e61) form_midp_image_pane

0xa80d,	// (0x000423cb) list_single_midp_pane_ParamLimits

0xa80d,	// (0x000423cb) list_single_midp_pane

0xc085,	// (0x00043c43) form_midp_field_text_pane_t1

0x2716,	// (0x0003a2d4) input_focus_pane_cp050

0x2986,	// (0x0003a544) list_midp_form_text_pane

0x291b,	// (0x0003a4d9) form_midp_field_choice_group_pane_t1

0x2929,	// (0x0003a4e7) input_focus_pane_cp051

0x293d,	// (0x0003a4fb) list_midp_choice_pane

0xb2a3,	// (0x00042e61) status_idle_pane

0x28ff,	// (0x0003a4bd) form_midp_field_time_pane_t1

0xb299,	// (0x00042e57) wait_anim_pane_g2_copy1

0x290d,	// (0x0003a4cb) form_midp_field_time_pane_t2

0x0001,

0x00ac,	// (0x00037c6a) aid_navinavi_width_2_pane

0xf80a,	// (0x000473c8) form_midp_field_time_pane_t

0xb2a3,	// (0x00042e61) input_focus_pane_cp052

0xb2a3,	// (0x00042e61) bg_input_focus_pane_cp040

0x28bf,	// (0x0003a47d) form_midp_gauge_slider_pane_t1

0x28cd,	// (0x0003a48b) form_midp_gauge_slider_pane_t2

0xc069,	// (0x00043c27) form_midp_gauge_slider_pane_t3

0xc077,	// (0x00043c35) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x000473bf) form_midp_gauge_slider_pane_t

0x28f7,	// (0x0003a4b5) form_midp_slider_pane

0xb2ff,	// (0x00042ebd) bg_input_focus_pane_cp041_ParamLimits

0xb2ff,	// (0x00042ebd) bg_input_focus_pane_cp041

0x288c,	// (0x0003a44a) form_midp_gauge_wait_pane_t1_ParamLimits

0x288c,	// (0x0003a44a) form_midp_gauge_wait_pane_t1

0x289e,	// (0x0003a45c) form_midp_gauge_wait_pane_t2_ParamLimits

0x289e,	// (0x0003a45c) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x000473ba) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x000473ba) form_midp_gauge_wait_pane_t

0x28b0,	// (0x0003a46e) form_midp_wait_pane_ParamLimits

0x28b0,	// (0x0003a46e) form_midp_wait_pane

0xc033,	// (0x00043bf1) form_midp_image_pane_g1

0xc03c,	// (0x00043bfa) form_midp_image_pane_t1

0xc04b,	// (0x00043c09) form_midp_image_pane_t2

0xc05a,	// (0x00043c18) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x000473b3) form_midp_image_pane_t

0x284d,	// (0x0003a40b) list_single_midp_pane_g1

0xd51a,	// (0x000450d8) list_single_midp_pane_t1

0xc01e,	// (0x00043bdc) list_midp_form_item_pane_ParamLimits

0xc01e,	// (0x00043bdc) list_midp_form_item_pane

0x0054,	// (0x00037c12) list_midp_form_item_pane_t1

0x0063,	// (0x00037c21) midp_ticker_pane_g1

0x006f,	// (0x00037c2d) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00047307) midp_ticker_pane_g

0x007b,	// (0x00037c39) midp_ticker_pane_t1

0x3c02,	// (0x0003b7c0) midp_editing_number_pane_t1

0x3be0,	// (0x0003b79e) midp_editing_number_pane

0x3bef,	// (0x0003b7ad) midp_ticker_pane

0x39a5,	// (0x0003b563) ai_message_heading_pane

0xb2a3,	// (0x00042e61) bg_popup_window_pane_cp14

0x39ad,	// (0x0003b56b) listscroll_ai_message_pane

0x392f,	// (0x0003b4ed) ai_message_heading_pane_g1_ParamLimits

0x392f,	// (0x0003b4ed) ai_message_heading_pane_g1

0xc5b6,	// (0x00044174) ai_message_heading_pane_g2_ParamLimits

0xc5b6,	// (0x00044174) ai_message_heading_pane_g2

0x3947,	// (0x0003b505) ai_message_heading_pane_g3_ParamLimits

0x3947,	// (0x0003b505) ai_message_heading_pane_g3

0x3953,	// (0x0003b511) ai_message_heading_pane_g4_ParamLimits

0x3953,	// (0x0003b511) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x000474f4) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x000474f4) ai_message_heading_pane_g

0xc5c2,	// (0x00044180) ai_message_heading_pane_t1_ParamLimits

0xc5c2,	// (0x00044180) ai_message_heading_pane_t1

0xc5dc,	// (0x0004419a) ai_message_heading_pane_t2_ParamLimits

0xc5dc,	// (0x0004419a) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x000474fd) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x000474fd) ai_message_heading_pane_t

0x398b,	// (0x0003b549) bg_popup_heading_pane_cp1_ParamLimits

0x398b,	// (0x0003b549) bg_popup_heading_pane_cp1

0x391d,	// (0x0003b4db) list_ai_message_pane_ParamLimits

0x391d,	// (0x0003b4db) list_ai_message_pane

0xb7d0,	// (0x0004338e) scroll_pane_cp10

0x38b9,	// (0x0003b477) list_ai_message_pane_g1

0x38c1,	// (0x0003b47f) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x000474d1) list_ai_message_pane_g

0x38c9,	// (0x0003b487) list_ai_message_pane_t1_ParamLimits

0x38c9,	// (0x0003b487) list_ai_message_pane_t1

0x38de,	// (0x0003b49c) list_ai_message_pane_t2_ParamLimits

0x38de,	// (0x0003b49c) list_ai_message_pane_t2

0x38f3,	// (0x0003b4b1) list_ai_message_pane_t3_ParamLimits

0x38f3,	// (0x0003b4b1) list_ai_message_pane_t3

0x3908,	// (0x0003b4c6) list_ai_message_pane_t4_ParamLimits

0x3908,	// (0x0003b4c6) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x000474d6) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x000474d6) list_ai_message_pane_t

0xc592,	// (0x00044150) cell_ai_soft_ind_pane_ParamLimits

0xc592,	// (0x00044150) cell_ai_soft_ind_pane

0x008d,	// (0x00037c4b) cell_ai_soft_ind_pane_g1_ParamLimits

0x008d,	// (0x00037c4b) cell_ai_soft_ind_pane_g1

0xb2a3,	// (0x00042e61) grid_highlight_cp1

0x009a,	// (0x00037c58) text_secondary_cp56_ParamLimits

0x009a,	// (0x00037c58) text_secondary_cp56

0x3879,	// (0x0003b437) example_general_pane_ParamLimits

0x3879,	// (0x0003b437) example_general_pane

0x3885,	// (0x0003b443) example_parent_pane_g1_ParamLimits

0x3885,	// (0x0003b443) example_parent_pane_g1

0x3891,	// (0x0003b44f) example_parent_pane_t1_ParamLimits

0x3891,	// (0x0003b44f) example_parent_pane_t1

0xa322,	// (0x00041ee0) popup_preview_text_window_ParamLimits

0xa322,	// (0x00041ee0) popup_preview_text_window

0xf49d,	// (0x0004705b) list_single_pane_cp2_g4

0xb4d1,	// (0x0004308f) bg_popup_preview_window_pane_ParamLimits

0xb4d1,	// (0x0004308f) bg_popup_preview_window_pane

0xc4f4,	// (0x000440b2) popup_preview_text_window_t1_ParamLimits

0xc4f4,	// (0x000440b2) popup_preview_text_window_t1

0x35f1,	// (0x0003b1af) popup_preview_text_window_t2_ParamLimits

0x35f1,	// (0x0003b1af) popup_preview_text_window_t2

0x363a,	// (0x0003b1f8) popup_preview_text_window_t3_ParamLimits

0x363a,	// (0x0003b1f8) popup_preview_text_window_t3

0x367f,	// (0x0003b23d) popup_preview_text_window_t4_ParamLimits

0x367f,	// (0x0003b23d) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x000474a5) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x000474a5) popup_preview_text_window_t

0x36fd,	// (0x0003b2bb) scroll_pane_cp11

0x26a2,	// (0x0003a260) bg_popup_preview_window_pane_g1

0xc4b4,	// (0x00044072) bg_popup_preview_window_pane_g2

0xc4bc,	// (0x0004407a) bg_popup_preview_window_pane_g3

0xc4c4,	// (0x00044082) bg_popup_preview_window_pane_g4

0xc4cc,	// (0x0004408a) bg_popup_preview_window_pane_g5

0xc4d4,	// (0x00044092) bg_popup_preview_window_pane_g6

0xc4dc,	// (0x0004409a) bg_popup_preview_window_pane_g7

0xc4e4,	// (0x000440a2) bg_popup_preview_window_pane_g8

0xecfd,	// (0x000468bb) aid_popup_width_pane

0xa29e,	// (0x00041e5c) popup_midp_note_alarm_window_ParamLimits

0xa29e,	// (0x00041e5c) popup_midp_note_alarm_window

0xb6a5,	// (0x00043263) data_form_pane_ParamLimits

0x9579,	// (0x00041137) form_field_data_pane_g1

0x9583,	// (0x00041141) form_field_data_pane_t1_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_ParamLimits

0x959d,	// (0x0004115b) data_form_wide_pane_ParamLimits

0x95ae,	// (0x0004116c) form_field_data_wide_pane_g1

0x95ba,	// (0x00041178) form_field_data_wide_pane_t1_ParamLimits

0xb5a5,	// (0x00043163) input_focus_pane_cp6_ParamLimits

0x975a,	// (0x00041318) input_popup_find_pane_g1_ParamLimits

0x975a,	// (0x00041318) input_popup_find_pane_g1

0xef88,	// (0x00046b46) aid_navi_side_left_pane

0xef9d,	// (0x00046b5b) aid_navi_side_right_pane

0x2fbc,	// (0x0003ab7a) bg_popup_window_pane_cp30_ParamLimits

0x2fbc,	// (0x0003ab7a) bg_popup_window_pane_cp30

0x3036,	// (0x0003abf4) popup_midp_note_alarm_window_g1_ParamLimits

0x3036,	// (0x0003abf4) popup_midp_note_alarm_window_g1

0x3066,	// (0x0003ac24) popup_midp_note_alarm_window_t1_ParamLimits

0x3066,	// (0x0003ac24) popup_midp_note_alarm_window_t1

0xc2fd,	// (0x00043ebb) popup_midp_note_alarm_window_t2_ParamLimits

0xc2fd,	// (0x00043ebb) popup_midp_note_alarm_window_t2

0xc3ab,	// (0x00043f69) popup_midp_note_alarm_window_t3_ParamLimits

0xc3ab,	// (0x00043f69) popup_midp_note_alarm_window_t3

0xc3d3,	// (0x00043f91) popup_midp_note_alarm_window_t4_ParamLimits

0xc3d3,	// (0x00043f91) popup_midp_note_alarm_window_t4

0x31fd,	// (0x0003adbb) popup_midp_note_alarm_window_t5_ParamLimits

0x31fd,	// (0x0003adbb) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00047442) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00047442) popup_midp_note_alarm_window_t

0x32a9,	// (0x0003ae67) wait_bar_pane_cp1_ParamLimits

0x32a9,	// (0x0003ae67) wait_bar_pane_cp1

0xb2a3,	// (0x00042e61) wait_anim_pane_copy1

0xb2a3,	// (0x00042e61) wait_border_pane_copy1

0x2cb2,	// (0x0003a870) wait_border_pane_g1_copy1

0x95d4,	// (0x00041192) form_field_popup_pane_g1

0x95dc,	// (0x0004119a) form_field_popup_pane_t1_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_cp7_ParamLimits

0xb6df,	// (0x0004329d) list_form_pane_ParamLimits

0x95f6,	// (0x000411b4) form_field_popup_wide_pane_g1

0x95fe,	// (0x000411bc) form_field_popup_wide_pane_t1_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_cp8_ParamLimits

0xb6eb,	// (0x000432a9) list_form_wide_pane_ParamLimits

0xc8c4,	// (0x00044482) aid_size_cell_graphic_pane

0x968a,	// (0x00041248) data_form_pane_t1_ParamLimits

0xa8fb,	// (0x000424b9) data_form_wide_pane_t1_ParamLimits

0xbc8d,	// (0x0004384b) bg_status_flat_pane

0x8b95,	// (0x00040753) title_pane_t1_ParamLimits

0xb2b9,	// (0x00042e77) title_pane_t2_ParamLimits

0xb2df,	// (0x00042e9d) title_pane_t3_ParamLimits

0xf557,	// (0x00047115) title_pane_t_ParamLimits

0xba79,	// (0x00043637) level_1_signal_ParamLimits

0xba86,	// (0x00043644) level_2_signal_ParamLimits

0xba93,	// (0x00043651) level_3_signal_ParamLimits

0xbaa0,	// (0x0004365e) level_4_signal_ParamLimits

0xbaad,	// (0x0004366b) level_5_signal_ParamLimits

0xbaba,	// (0x00043678) level_6_signal_ParamLimits

0xbac7,	// (0x00043685) level_7_signal_ParamLimits

0xba79,	// (0x00043637) level_1_battery_ParamLimits

0xba86,	// (0x00043644) level_2_battery_ParamLimits

0xba93,	// (0x00043651) level_3_battery_ParamLimits

0xbaa0,	// (0x0004365e) level_4_battery_ParamLimits

0xbaad,	// (0x0004366b) level_5_battery_ParamLimits

0xbaba,	// (0x00043678) level_6_battery_ParamLimits

0xbac7,	// (0x00043685) level_7_battery_ParamLimits

0x2ec1,	// (0x0003aa7f) bg_status_flat_pane_g1

0x2ec9,	// (0x0003aa87) bg_status_flat_pane_g2

0x2ed1,	// (0x0003aa8f) bg_status_flat_pane_g3

0x2ed9,	// (0x0003aa97) bg_status_flat_pane_g4

0x2ee1,	// (0x0003aa9f) bg_status_flat_pane_g5

0x2ee9,	// (0x0003aaa7) bg_status_flat_pane_g6

0x2ef1,	// (0x0003aaaf) bg_status_flat_pane_g7

0x8c29,	// (0x000407e7) tabs_3_active_pane_t1_ParamLimits

0x8c29,	// (0x000407e7) tabs_3_passive_pane_t1_ParamLimits

0x8c43,	// (0x00040801) tabs_4_active_pane_t1_ParamLimits

0x8c43,	// (0x00040801) tabs_4_1_passive_pane_t1_ParamLimits

0x9799,	// (0x00041357) tabs_2_active_pane_t1_ParamLimits

0x9799,	// (0x00041357) tabs_2_passive_pane_t1_ParamLimits

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp4_ParamLimits

0x97ab,	// (0x00041369) tabs_2_long_active_pane_t1_ParamLimits

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp4_ParamLimits

0x0994,	// (0x00038552) list_single_midp_graphic_pane_t1_ParamLimits

0xb2ff,	// (0x00042ebd) bg_active_tab_pane_cp5_ParamLimits

0x97be,	// (0x0004137c) tabs_3_long_active_pane_t1_ParamLimits

0x217b,	// (0x00039d39) bg_passive_tab_pane_cp5_ParamLimits

0x0994,	// (0x00038552) list_single_midp_graphic_pane_t1

0xbc8d,	// (0x0004384b) bg_status_flat_pane_ParamLimits

0x2335,	// (0x00039ef3) indicator_pane_cp2_ParamLimits

0x2335,	// (0x00039ef3) indicator_pane_cp2

0xbe0b,	// (0x000439c9) navi_pane_srt_ParamLimits

0xbe0b,	// (0x000439c9) navi_pane_srt

0x2484,	// (0x0003a042) popup_clock_digital_analogue_window_cp1

0xb343,	// (0x00042f01) indicator_pane_t1

0xf546,	// (0x00047104) copy_highlight_pane

0xf546,	// (0x00047104) cursor_graphics_pane

0xf546,	// (0x00047104) graphic_within_text_pane

0xf546,	// (0x00047104) link_highlight_pane

0x36c0,	// (0x0003b27e) popup_preview_text_window_t5_ParamLimits

0x36c0,	// (0x0003b27e) popup_preview_text_window_t5

0x00b4,	// (0x00037c72) cursor_digital_pane

0x00b4,	// (0x00037c72) cursor_primary_pane

0x00c5,	// (0x00037c83) cursor_primary_small_pane

0x00cd,	// (0x00037c8b) cursor_secondary_pane

0x00d5,	// (0x00037c93) cursor_title_pane

0x00b4,	// (0x00037c72) link_highlight_digital_pane

0x00bc,	// (0x00037c7a) link_highlight_primary_pane

0x00c5,	// (0x00037c83) link_highlight_primary_small_pane

0x00cd,	// (0x00037c8b) link_highlight_secondary_pane

0x00d5,	// (0x00037c93) link_highlight_title_pane

0x00b4,	// (0x00037c72) copy_highlight_digital_pane

0x00b4,	// (0x00037c72) copy_highlight_primary_pane

0x00c5,	// (0x00037c83) copy_highlight_primary_small_pane

0x00cd,	// (0x00037c8b) copy_highlight_secondary_pane

0x00d5,	// (0x00037c93) copy_highlight_title_pane

0x00cd,	// (0x00037c8b) graphic_text_digital_pane

0x2f5f,	// (0x0003ab1d) graphic_text_primary_pane

0x2f68,	// (0x0003ab26) graphic_text_primary_small_pane

0x00c5,	// (0x00037c83) graphic_text_secondary_pane

0x00b4,	// (0x00037c72) graphic_text_title_pane

0x9c85,	// (0x00041843) cursor_primary_pane_g1

0x2f51,	// (0x0003ab0f) cursor_text_primary_t1

0xc2f3,	// (0x00043eb1) cursor_primary_small_pane_g1

0x2f43,	// (0x0003ab01) cursor_text_primary_small_t1

0xc2e9,	// (0x00043ea7) cursor_primary_small_pane_g1_copy1

0x2f2b,	// (0x0003aae9) cursor_text_primary_small_t1_copy1

0x2f09,	// (0x0003aac7) cursor_text_title_t1

0xc2df,	// (0x00043e9d) cursor_title_pane_g1

0x9c85,	// (0x00041843) cursor_digital_pane_g1

0x00e7,	// (0x00037ca5) cursor_text_digital_t1

0x00f5,	// (0x00037cb3) link_highlight_primary_pane_g1

0x2eb2,	// (0x0003aa70) link_highlight_primary_pane_t1

0x00f5,	// (0x00037cb3) link_highlight_primary_small_pane_g1

0x00fd,	// (0x00037cbb) link_highlight_primary_small_pane_t1

0x00f5,	// (0x00037cb3) link_highlight_secondary_pane_g1

0x010c,	// (0x00037cca) link_highlight_secondary_pane_t1

0x2e17,	// (0x0003a9d5) link_highlight_title_pane_g1

0x2e2e,	// (0x0003a9ec) link_highlight_title_pane_t1

0x2e17,	// (0x0003a9d5) link_highlight_digital_pane_g1

0x2e1f,	// (0x0003a9dd) link_highlight_digital_pane_t1

0x2cd1,	// (0x0003a88f) copy_highlight_primary_pane_g1

0x2cf7,	// (0x0003a8b5) copy_highlight_primary_pane_t1

0x2cd1,	// (0x0003a88f) copy_highlight_primary_small_pane_g1

0x2ce8,	// (0x0003a8a6) copy_highlight_primary_small_pane_t1

0x011b,	// (0x00037cd9) copy_highlight_secondary_pane_g1

0x0123,	// (0x00037ce1) copy_highlight_secondary_pane_t1

0x2cd1,	// (0x0003a88f) copy_highlight_title_pane_g1

0x2cd9,	// (0x0003a897) copy_highlight_title_pane_t1

0x2cd1,	// (0x0003a88f) copy_highlight_digital_pane_g1

0x3f5a,	// (0x0003bb18) copy_highlight_digital_pane_t1

0x3eae,	// (0x0003ba6c) graphic_text_primary_pane_g1

0x3f3e,	// (0x0003bafc) graphic_text_primary_pane_t1

0x3f4c,	// (0x0003bb0a) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00047571) graphic_text_primary_pane_t

0x3f1a,	// (0x0003bad8) graphic_text_primary_small_pane_g1

0x3f22,	// (0x0003bae0) graphic_text_primary_small_pane_t1

0x3f30,	// (0x0003baee) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x0004756c) graphic_text_primary_small_pane_t

0x3ef6,	// (0x0003bab4) graphic_text_secondary_pane_g1

0x3efe,	// (0x0003babc) graphic_text_secondary_pane_t1

0x3f0c,	// (0x0003baca) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00047567) graphic_text_secondary_pane_t

0x3ed2,	// (0x0003ba90) graphic_text_title_pane_g1

0x3eda,	// (0x0003ba98) graphic_text_title_pane_t1

0x3ee8,	// (0x0003baa6) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00047562) graphic_text_title_pane_t

0x3eae,	// (0x0003ba6c) graphic_text_digital_pane_g1

0x3eb6,	// (0x0003ba74) graphic_text_digital_pane_t1

0x3ec4,	// (0x0003ba82) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x0004755d) graphic_text_digital_pane_t

0xb2ff,	// (0x00042ebd) navi_icon_pane_srt_ParamLimits

0xb2ff,	// (0x00042ebd) navi_icon_pane_srt

0xb2a3,	// (0x00042e61) navi_midp_pane_srt

0xb2a3,	// (0x00042e61) navi_navi_pane_srt

0xb2ff,	// (0x00042ebd) navi_text_pane_srt_ParamLimits

0xb2ff,	// (0x00042ebd) navi_text_pane_srt

0x3e79,	// (0x0003ba37) navi_navi_icon_text_pane_srt

0x3e81,	// (0x0003ba3f) navi_navi_pane_srt_g1_ParamLimits

0x3e81,	// (0x0003ba3f) navi_navi_pane_srt_g1

0x3e93,	// (0x0003ba51) navi_navi_pane_srt_g2_ParamLimits

0x3e93,	// (0x0003ba51) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00047558) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00047558) navi_navi_pane_srt_g

0x3ea5,	// (0x0003ba63) navi_navi_tabs_pane_srt

0x3e79,	// (0x0003ba37) navi_navi_text_pane_srt

0x3e79,	// (0x0003ba37) navi_navi_volume_pane_srt

0x3e6a,	// (0x0003ba28) navi_navi_text_pane_srt_t1

0x0e61,	// (0x00038a1f) navi_navi_volume_pane_srt_g1

0x0e69,	// (0x00038a27) volume_small_pane_srt_ParamLimits

0x0e69,	// (0x00038a27) volume_small_pane_srt

0x0132,	// (0x00037cf0) volume_small_pane_srt_g1_ParamLimits

0x0132,	// (0x00037cf0) volume_small_pane_srt_g1

0x0142,	// (0x00037d00) volume_small_pane_srt_g2_ParamLimits

0x0142,	// (0x00037d00) volume_small_pane_srt_g2

0x0153,	// (0x00037d11) volume_small_pane_srt_g3_ParamLimits

0x0153,	// (0x00037d11) volume_small_pane_srt_g3

0x0164,	// (0x00037d22) volume_small_pane_srt_g4_ParamLimits

0x0164,	// (0x00037d22) volume_small_pane_srt_g4

0x0175,	// (0x00037d33) volume_small_pane_srt_g5_ParamLimits

0x0175,	// (0x00037d33) volume_small_pane_srt_g5

0x0186,	// (0x00037d44) volume_small_pane_srt_g6_ParamLimits

0x0186,	// (0x00037d44) volume_small_pane_srt_g6

0x0197,	// (0x00037d55) volume_small_pane_srt_g7_ParamLimits

0x0197,	// (0x00037d55) volume_small_pane_srt_g7

0x01a8,	// (0x00037d66) volume_small_pane_srt_g8_ParamLimits

0x01a8,	// (0x00037d66) volume_small_pane_srt_g8

0x01b9,	// (0x00037d77) volume_small_pane_srt_g9_ParamLimits

0x01b9,	// (0x00037d77) volume_small_pane_srt_g9

0x01ca,	// (0x00037d88) volume_small_pane_srt_g10_ParamLimits

0x01ca,	// (0x00037d88) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0004730c) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0004730c) volume_small_pane_srt_g

0x8f2a,	// (0x00040ae8) query_popup_data_pane_cp2

0x3e50,	// (0x0003ba0e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e50,	// (0x0003ba0e) navi_navi_icon_text_pane_srt_t1

0x2f5f,	// (0x0003ab1d) navi_tabs_2_long_pane_srt

0x2f5f,	// (0x0003ab1d) navi_tabs_2_pane_srt

0x2f5f,	// (0x0003ab1d) navi_tabs_3_long_pane_srt

0x2f5f,	// (0x0003ab1d) navi_tabs_3_pane_srt

0x2f5f,	// (0x0003ab1d) navi_tabs_4_pane_srt

0xa998,	// (0x00042556) tabs_2_active_pane_srt_ParamLimits

0xa998,	// (0x00042556) tabs_2_active_pane_srt

0xa9a8,	// (0x00042566) tabs_2_passive_pane_srt_ParamLimits

0xa9a8,	// (0x00042566) tabs_2_passive_pane_srt

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp1_srt

0xc90e,	// (0x000444cc) bg_passive_tab_pane_g1_cp1_srt

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp1_srt

0xc917,	// (0x000444d5) bg_passive_tab_pane_g3_cp1_srt

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp1_srt_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp1_srt

0xc920,	// (0x000444de) tabs_2_active_pane_srt_g1

0xc928,	// (0x000444e6) tabs_2_active_pane_srt_t1_ParamLimits

0xc928,	// (0x000444e6) tabs_2_active_pane_srt_t1

0xc90e,	// (0x000444cc) bg_active_tab_pane_g1_cp1_srt

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp1_srt

0xc917,	// (0x000444d5) bg_active_tab_pane_g3_cp1_srt

0xa965,	// (0x00042523) tabs_3_active_pane_srt_ParamLimits

0xa965,	// (0x00042523) tabs_3_active_pane_srt

0xa976,	// (0x00042534) tabs_3_passive_pane_cp_srt_ParamLimits

0xa976,	// (0x00042534) tabs_3_passive_pane_cp_srt

0xa987,	// (0x00042545) tabs_3_passive_pane_srt_ParamLimits

0xa987,	// (0x00042545) tabs_3_passive_pane_srt

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2716,	// (0x0003a2d4) bg_passive_tab_pane_cp2_srt

0x9c8f,	// (0x0004184d) bg_passive_tab_pane_g1_cp2_srt

0x9af0,	// (0x000416ae) bg_passive_tab_pane_g2_cp2_srt

0x9c98,	// (0x00041856) bg_passive_tab_pane_g3_cp2_srt

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp2_srt_ParamLimits

0xb2f1,	// (0x00042eaf) bg_active_tab_pane_cp2_srt

0xc8f0,	// (0x000444ae) tabs_3_active_pane_srt_g1

0xc8f8,	// (0x000444b6) tabs_3_active_pane_srt_t1_ParamLimits

0xc8f8,	// (0x000444b6) tabs_3_active_pane_srt_t1

0x9c8f,	// (0x0004184d) bg_active_tab_pane_g1_cp2_srt

0x9af0,	// (0x000416ae) bg_active_tab_pane_g2_cp2_srt

0x9c98,	// (0x00041856) bg_active_tab_pane_g3_cp2_srt

0x0dc6,	// (0x00038984) tabs_4_active_pane_srt_ParamLimits

0x0dc6,	// (0x00038984) tabs_4_active_pane_srt

0x0dd8,	// (0x00038996) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0dd8,	// (0x00038996) tabs_4_passive_pane_cp2_srt

0x0342,	// (0x00037f00) aid_size_cell_toolbar

0x3a5d,	// (0x0003b61b) main_idle_act_pane_ParamLimits

0xa0e0,	// (0x00041c9e) popup_large_graphic_colour_window_ParamLimits

0xa5d4,	// (0x00042192) popup_toolbar_window_ParamLimits

0xa5d4,	// (0x00042192) popup_toolbar_window

0xd529,	// (0x000450e7) list_single_graphic_2heading_pane_ParamLimits

0xd529,	// (0x000450e7) list_single_graphic_2heading_pane

0xb961,	// (0x0004351f) aid_size_cell_apps_grid_lsc_pane

0xb973,	// (0x00043531) aid_size_cell_apps_grid_prt_pane

0x217b,	// (0x00039d39) bg_wml_button_pane_cp1_ParamLimits

0x217b,	// (0x00039d39) bg_wml_button_pane_cp1

0xc085,	// (0x00043c43) form_midp_field_text_pane_t1_ParamLimits

0x2716,	// (0x0003a2d4) input_focus_pane_cp050_ParamLimits

0x2986,	// (0x0003a544) list_midp_form_text_pane_ParamLimits

0x2929,	// (0x0003a4e7) input_focus_pane_cp051_ParamLimits

0x293d,	// (0x0003a4fb) list_midp_choice_pane_ParamLimits

0xbfea,	// (0x00043ba8) list_single_2graphic_pane_cp3_ParamLimits

0xbfea,	// (0x00043ba8) list_single_2graphic_pane_cp3

0xbffe,	// (0x00043bbc) list_single_midp_graphic_pane_ParamLimits

0xbffe,	// (0x00043bbc) list_single_midp_graphic_pane

0xf030,	// (0x00046bee) list_single_graphic_2heading_pane_g1_ParamLimits

0xf030,	// (0x00046bee) list_single_graphic_2heading_pane_g1

0xf03c,	// (0x00046bfa) list_single_graphic_2heading_pane_g4_ParamLimits

0xf03c,	// (0x00046bfa) list_single_graphic_2heading_pane_g4

0xf048,	// (0x00046c06) list_single_graphic_2heading_pane_g5_ParamLimits

0xf048,	// (0x00046c06) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0004735f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0004735f) list_single_graphic_2heading_pane_g

0xf054,	// (0x00046c12) list_single_graphic_2heading_pane_t1_ParamLimits

0xf054,	// (0x00046c12) list_single_graphic_2heading_pane_t1

0xf068,	// (0x00046c26) list_single_graphic_2heading_pane_t2_ParamLimits

0xf068,	// (0x00046c26) list_single_graphic_2heading_pane_t2

0xf082,	// (0x00046c40) list_single_graphic_2heading_pane_t3_ParamLimits

0xf082,	// (0x00046c40) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00047366) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00047366) list_single_graphic_2heading_pane_t

0x25e0,	// (0x0003a19e) bg_popup_sub_pane_cp2

0x260a,	// (0x0003a1c8) grid_toobar_pane

0x0903,	// (0x000384c1) cell_toolbar_pane_ParamLimits

0x0903,	// (0x000384c1) cell_toolbar_pane

0x2646,	// (0x0003a204) cell_toolbar_pane_g1_ParamLimits

0x2646,	// (0x0003a204) cell_toolbar_pane_g1

0xbfaa,	// (0x00043b68) cell_toolbar_pane_g2_ParamLimits

0xbfaa,	// (0x00043b68) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x0004736d) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x0004736d) cell_toolbar_pane_g

0x267c,	// (0x0003a23a) grid_highlight_pane_cp2_ParamLimits

0x267c,	// (0x0003a23a) grid_highlight_pane_cp2

0x2696,	// (0x0003a254) toolbar_button_pane

0x26a2,	// (0x0003a260) toolbar_button_pane_g1

0x26aa,	// (0x0003a268) toolbar_button_pane_g2

0x26b2,	// (0x0003a270) toolbar_button_pane_g3

0x26ba,	// (0x0003a278) toolbar_button_pane_g4

0x26c2,	// (0x0003a280) toolbar_button_pane_g5

0x26ca,	// (0x0003a288) toolbar_button_pane_g6

0x26d2,	// (0x0003a290) toolbar_button_pane_g7

0x26da,	// (0x0003a298) toolbar_button_pane_g8

0x26e2,	// (0x0003a2a0) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00047372) toolbar_button_pane_g

0x093b,	// (0x000384f9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x093b,	// (0x000384f9) list_single_2graphic_pane_g1_cp3

0xa765,	// (0x00042323) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa765,	// (0x00042323) list_single_2graphic_pane_g2_cp3

0x0958,	// (0x00038516) list_single_2graphic_pane_g3_cp3

0x0960,	// (0x0003851e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0960,	// (0x0003851e) list_single_2graphic_pane_g4_cp3

0xa776,	// (0x00042334) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa776,	// (0x00042334) list_single_2graphic_pane_t1_cp3

0x0988,	// (0x00038546) list_single_midp_graphic_pane_g2_ParamLimits

0x0988,	// (0x00038546) list_single_midp_graphic_pane_g2

0x034a,	// (0x00037f08) aid_zoom_text_primary

0xf014,	// (0x00046bd2) aid_zoom_text_secondary

0x9cef,	// (0x000418ad) status_small_pane_g7_ParamLimits

0x9cef,	// (0x000418ad) status_small_pane_g7

0x9d12,	// (0x000418d0) status_small_pane_t1_ParamLimits

0x8b71,	// (0x0004072f) title_pane_g2

0x0003,

0xf54e,	// (0x0004710c) title_pane_g

0x8f84,	// (0x00040b42) aid_size_cell_colour_1_pane_ParamLimits

0x8f84,	// (0x00040b42) aid_size_cell_colour_1_pane

0x8f98,	// (0x00040b56) aid_size_cell_colour_2_pane_ParamLimits

0x8f98,	// (0x00040b56) aid_size_cell_colour_2_pane

0x8fac,	// (0x00040b6a) aid_size_cell_colour_3_pane_ParamLimits

0x8fac,	// (0x00040b6a) aid_size_cell_colour_3_pane

0x8fc0,	// (0x00040b7e) aid_size_cell_colour_4_pane_ParamLimits

0x8fc0,	// (0x00040b7e) aid_size_cell_colour_4_pane

0xeec5,	// (0x00046a83) title_pane_stacon_g1_ParamLimits

0xeec5,	// (0x00046a83) title_pane_stacon_g1

0x2d4e,	// (0x0003a90c) popup_note_wait_window_g3_ParamLimits

0x2d4e,	// (0x0003a90c) popup_note_wait_window_g3

0x2dc4,	// (0x0003a982) popup_note_wait_window_t5_ParamLimits

0x2dc4,	// (0x0003a982) popup_note_wait_window_t5

0xb2a3,	// (0x00042e61) main_feb_china_hwr_fs_writing_pane

0x9f62,	// (0x00041b20) popup_feb_china_hwr_fs_window_ParamLimits

0x9f62,	// (0x00041b20) popup_feb_china_hwr_fs_window

0xa792,	// (0x00042350) aid_size_cell_hwr_fs_ParamLimits

0xa792,	// (0x00042350) aid_size_cell_hwr_fs

0x2716,	// (0x0003a2d4) bg_popup_sub_pane_cp3_ParamLimits

0x2716,	// (0x0003a2d4) bg_popup_sub_pane_cp3

0xa7a7,	// (0x00042365) grid_hwr_fs_pane_ParamLimits

0xa7a7,	// (0x00042365) grid_hwr_fs_pane

0x09d7,	// (0x00038595) linegrid_hwr_fs_pane_ParamLimits

0x09d7,	// (0x00038595) linegrid_hwr_fs_pane

0xa7bf,	// (0x0004237d) cell_hwr_fs_pane_ParamLimits

0xa7bf,	// (0x0004237d) cell_hwr_fs_pane

0x2722,	// (0x0003a2e0) linegrid_hwr_fs_pane_g1_ParamLimits

0x2722,	// (0x0003a2e0) linegrid_hwr_fs_pane_g1

0xbfbe,	// (0x00043b7c) linegrid_hwr_fs_pane_g2_ParamLimits

0xbfbe,	// (0x00043b7c) linegrid_hwr_fs_pane_g2

0x2740,	// (0x0003a2fe) linegrid_hwr_fs_pane_g3_ParamLimits

0x2740,	// (0x0003a2fe) linegrid_hwr_fs_pane_g3

0xa7e5,	// (0x000423a3) linegrid_hwr_fs_pane_g4_ParamLimits

0xa7e5,	// (0x000423a3) linegrid_hwr_fs_pane_g4

0x0a23,	// (0x000385e1) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a23,	// (0x000385e1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00047398) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00047398) linegrid_hwr_fs_pane_g

0x274c,	// (0x0003a30a) cell_hwr_fs_pane_g1_ParamLimits

0x274c,	// (0x0003a30a) cell_hwr_fs_pane_g1

0x251a,	// (0x0003a0d8) cell_hwr_fs_pane_g2_ParamLimits

0x251a,	// (0x0003a0d8) cell_hwr_fs_pane_g2

0xbfd0,	// (0x00043b8e) cell_hwr_fs_pane_g3_ParamLimits

0xbfd0,	// (0x00043b8e) cell_hwr_fs_pane_g3

0xbfdd,	// (0x00043b9b) cell_hwr_fs_pane_g4_ParamLimits

0xbfdd,	// (0x00043b9b) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x000473a3) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x000473a3) cell_hwr_fs_pane_g

0xa7ff,	// (0x000423bd) cell_hwr_fs_pane_t1

0xb2a3,	// (0x00042e61) grid_highlight_pane_cp6

0xb2a3,	// (0x00042e61) main_idle_act2_pane

0xb7b7,	// (0x00043375) aid_inside_area_popup_secondary

0xc412,	// (0x00043fd0) aid_inside_area_window_primary_ParamLimits

0xc412,	// (0x00043fd0) aid_inside_area_window_primary

0xc946,	// (0x00044504) ai2_news_ticker_pane

0x3f71,	// (0x0003bb2f) aid_size_cell_ai1_link_ParamLimits

0x3f71,	// (0x0003bb2f) aid_size_cell_ai1_link

0xc94e,	// (0x0004450c) popup_ai2_data_window_ParamLimits

0xc94e,	// (0x0004450c) popup_ai2_data_window

0x3fa1,	// (0x0003bb5f) popup_ai2_link_window_ParamLimits

0x3fa1,	// (0x0003bb5f) popup_ai2_link_window

0x2716,	// (0x0003a2d4) bg_popup_sub_pane_cp4_ParamLimits

0x2716,	// (0x0003a2d4) bg_popup_sub_pane_cp4

0x3fb5,	// (0x0003bb73) grid_ai2_link_pane_ParamLimits

0x3fb5,	// (0x0003bb73) grid_ai2_link_pane

0x3fcc,	// (0x0003bb8a) popup_ai2_link_window_g1_ParamLimits

0x3fcc,	// (0x0003bb8a) popup_ai2_link_window_g1

0x3fd8,	// (0x0003bb96) popup_ai2_link_window_g2_ParamLimits

0x3fd8,	// (0x0003bb96) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00047576) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00047576) popup_ai2_link_window_g

0x3fe7,	// (0x0003bba5) ai2_mp_button_pane

0x3fef,	// (0x0003bbad) ai2_mp_volume_pane

0x2929,	// (0x0003a4e7) bg_popup_sub_pane_cp5_ParamLimits

0x2929,	// (0x0003a4e7) bg_popup_sub_pane_cp5

0x3ff7,	// (0x0003bbb5) heading_ai2_gene_pane_ParamLimits

0x3ff7,	// (0x0003bbb5) heading_ai2_gene_pane

0x4003,	// (0x0003bbc1) list_ai2_gene_pane_ParamLimits

0x4003,	// (0x0003bbc1) list_ai2_gene_pane

0x404b,	// (0x0003bc09) cell_ai2_link_pane_ParamLimits

0x404b,	// (0x0003bc09) cell_ai2_link_pane

0x4061,	// (0x0003bc1f) cell_ai2_link_pane_g1

0xb2a3,	// (0x00042e61) grid_highlight_pane_cp7

0x0e7e,	// (0x00038a3c) ai2_mp_volume_pane_g1

0x4131,	// (0x0003bcef) ai2_mp_volume_pane_g2

0x40a6,	// (0x0003bc64) list_ai2_gene_pane_t1

0x4139,	// (0x0003bcf7) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x0004758f) ai2_mp_volume_pane_g

0xa9b8,	// (0x00042576) volume_small_pane_cp3

0x4141,	// (0x0003bcff) aid_size_cell_ai2_button

0x4149,	// (0x0003bd07) grid_ai2_button_pane

0x4152,	// (0x0003bd10) cell_ai2_button_pane_ParamLimits

0x4152,	// (0x0003bd10) cell_ai2_button_pane

0xb299,	// (0x00042e57) cell_ai2_button_pane_g1

0xb2a3,	// (0x00042e61) grid_highlight_pane_cp8

0x40f1,	// (0x0003bcaf) ai2_gene_pane_t1_ParamLimits

0x40f1,	// (0x0003bcaf) ai2_gene_pane_t1

0x9ee0,	// (0x00041a9e) aid_height_parent_landscape

0xc660,	// (0x0004421e) aid_height_set_list

0x3a5d,	// (0x0003b61b) aid_size_parent

0xc8c4,	// (0x00044482) aid_size_cell_graphic_pane_ParamLimits

0x4013,	// (0x0003bbd1) popup_ai2_data_window_g1_ParamLimits

0x4013,	// (0x0003bbd1) popup_ai2_data_window_g1

0x401f,	// (0x0003bbdd) ai2_news_ticker_pane_g1

0x4027,	// (0x0003bbe5) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x0004757b) ai2_news_ticker_pane_g

0x402f,	// (0x0003bbed) ai2_news_ticker_pane_t1

0x403d,	// (0x0003bbfb) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00047580) ai2_news_ticker_pane_t

0x406a,	// (0x0003bc28) heading_ai2_gene_pane_g1

0x4072,	// (0x0003bc30) heading_ai2_gene_pane_t1_ParamLimits

0x4072,	// (0x0003bc30) heading_ai2_gene_pane_t1

0x4087,	// (0x0003bc45) list_highlight_pane_cp6

0x408f,	// (0x0003bc4d) ai2_gene_pane_ParamLimits

0x408f,	// (0x0003bc4d) ai2_gene_pane

0x40b4,	// (0x0003bc72) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00047585) list_ai2_gene_pane_t

0x40c2,	// (0x0003bc80) list_highlight_pane_cp8_ParamLimits

0x40c2,	// (0x0003bc80) list_highlight_pane_cp8

0x40d3,	// (0x0003bc91) ai2_gene_pane_g1_ParamLimits

0x40d3,	// (0x0003bc91) ai2_gene_pane_g1

0x40e5,	// (0x0003bca3) ai2_gene_pane_g2_ParamLimits

0x40e5,	// (0x0003bca3) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x0004758a) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x0004758a) ai2_gene_pane_g

0xb650,	// (0x0004320e) scroll_pane_cp12

0x9e9d,	// (0x00041a5b) control_pane_t3_ParamLimits

0x9e9d,	// (0x00041a5b) control_pane_t3

0x9d03,	// (0x000418c1) status_small_pane_g8_ParamLimits

0x9d03,	// (0x000418c1) status_small_pane_g8

0xa025,	// (0x00041be3) popup_find_window_ParamLimits

0xa2d8,	// (0x00041e96) popup_note_image_window_ParamLimits

0xd345,	// (0x00044f03) list_double2_graphic_pane_vc_g1_ParamLimits

0xd345,	// (0x00044f03) list_double2_graphic_pane_vc_g1

0xd351,	// (0x00044f0f) list_double2_graphic_pane_vc_g2_ParamLimits

0xd351,	// (0x00044f0f) list_double2_graphic_pane_vc_g2

0xd35d,	// (0x00044f1b) list_double2_graphic_pane_vc_g3_ParamLimits

0xd35d,	// (0x00044f1b) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0004717f) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004717f) list_double2_graphic_pane_vc_g

0xd369,	// (0x00044f27) list_double2_graphic_pane_vc_t1_ParamLimits

0xd369,	// (0x00044f27) list_double2_graphic_pane_vc_t1

0xd351,	// (0x00044f0f) list_single_heading_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_heading_pane_vc_g1

0xd35d,	// (0x00044f1b) list_single_heading_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_heading_pane_vc_g

0xd46e,	// (0x0004502c) list_single_heading_pane_vc_t1_ParamLimits

0xd46e,	// (0x0004502c) list_single_heading_pane_vc_t1

0xd484,	// (0x00045042) list_single_heading_pane_vc_t2_ParamLimits

0xd484,	// (0x00045042) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00047387) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00047387) list_single_heading_pane_vc_t

0xd496,	// (0x00045054) list_setting_number_pane_vc_g1_ParamLimits

0xd496,	// (0x00045054) list_setting_number_pane_vc_g1

0xd4a2,	// (0x00045060) list_setting_number_pane_vc_g2_ParamLimits

0xd4a2,	// (0x00045060) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x0004738c) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x0004738c) list_setting_number_pane_vc_g

0xd4ae,	// (0x0004506c) list_setting_number_pane_vc_t1_ParamLimits

0xd4ae,	// (0x0004506c) list_setting_number_pane_vc_t1

0xd4c2,	// (0x00045080) list_setting_number_pane_vc_t2_ParamLimits

0xd4c2,	// (0x00045080) list_setting_number_pane_vc_t2

0xd4de,	// (0x0004509c) list_setting_number_pane_vc_t3_ParamLimits

0xd4de,	// (0x0004509c) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00047391) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00047391) list_setting_number_pane_vc_t

0xd50a,	// (0x000450c8) set_value_pane_vc_ParamLimits

0xd50a,	// (0x000450c8) set_value_pane_vc

0xd529,	// (0x000450e7) list_double2_graphic_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double2_graphic_pane_vc

0x3c2d,	// (0x0003b7eb) list_double2_large_graphic_pane_vc_ParamLimits

0x3c2d,	// (0x0003b7eb) list_double2_large_graphic_pane_vc

0xd529,	// (0x000450e7) list_double2_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double2_pane_vc

0xd529,	// (0x000450e7) list_double_graphic_heading_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_graphic_heading_pane_vc

0xd529,	// (0x000450e7) list_double_graphic_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_graphic_pane_vc

0xd529,	// (0x000450e7) list_double_heading_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_heading_pane_vc

0x3c3f,	// (0x0003b7fd) list_double_large_graphic_pane_vc_ParamLimits

0x3c3f,	// (0x0003b7fd) list_double_large_graphic_pane_vc

0xd529,	// (0x000450e7) list_double_number_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_number_pane_vc

0xd529,	// (0x000450e7) list_double_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_pane_vc

0xd529,	// (0x000450e7) list_double_time_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_double_time_pane_vc

0xd529,	// (0x000450e7) list_setting_number_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_setting_number_pane_vc

0xd529,	// (0x000450e7) list_setting_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_setting_pane_vc

0xd529,	// (0x000450e7) list_single_graphic_heading_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_single_graphic_heading_pane_vc

0xd529,	// (0x000450e7) list_single_heading_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_single_heading_pane_vc

0xd529,	// (0x000450e7) list_single_number_heading_pane_vc_ParamLimits

0xd529,	// (0x000450e7) list_single_number_heading_pane_vc

0xd3cb,	// (0x00044f89) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd3cb,	// (0x00044f89) list_double_graphic_heading_pane_vc_g1

0xd351,	// (0x00044f0f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd351,	// (0x00044f0f) list_double_graphic_heading_pane_vc_g2

0xd35d,	// (0x00044f1b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd35d,	// (0x00044f1b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00047596) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00047596) list_double_graphic_heading_pane_vc_g

0xd53c,	// (0x000450fa) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd53c,	// (0x000450fa) list_double_graphic_heading_pane_vc_t1

0xd550,	// (0x0004510e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd550,	// (0x0004510e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x0004759d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x0004759d) list_double_graphic_heading_pane_vc_t

0xd496,	// (0x00045054) list_setting_pane_vc_g1_ParamLimits

0xd496,	// (0x00045054) list_setting_pane_vc_g1

0xd4a2,	// (0x00045060) list_setting_pane_vc_g2_ParamLimits

0xd4a2,	// (0x00045060) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x0004738c) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x0004738c) list_setting_pane_vc_g

0xd568,	// (0x00045126) list_setting_pane_vc_t1_ParamLimits

0xd568,	// (0x00045126) list_setting_pane_vc_t1

0xd584,	// (0x00045142) list_setting_pane_vc_t2_ParamLimits

0xd584,	// (0x00045142) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x000475e0) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x000475e0) list_setting_pane_vc_t

0xd50a,	// (0x000450c8) set_value_pane_cp_vc_ParamLimits

0xd50a,	// (0x000450c8) set_value_pane_cp_vc

0xd351,	// (0x00044f0f) list_single_number_heading_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_single_number_heading_pane_vc_g1

0xd35d,	// (0x00044f1b) list_single_number_heading_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_single_number_heading_pane_vc_g

0xd59e,	// (0x0004515c) list_single_number_heading_pane_vc_t1_ParamLimits

0xd59e,	// (0x0004515c) list_single_number_heading_pane_vc_t1

0xd5b4,	// (0x00045172) list_single_number_heading_pane_vc_t2_ParamLimits

0xd5b4,	// (0x00045172) list_single_number_heading_pane_vc_t2

0xd5c6,	// (0x00045184) list_single_number_heading_pane_vc_t3_ParamLimits

0xd5c6,	// (0x00045184) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x000475e5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x000475e5) list_single_number_heading_pane_vc_t

0xd5d8,	// (0x00045196) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd5d8,	// (0x00045196) list_single_graphic_heading_pane_vc_g1

0xd351,	// (0x00044f0f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd351,	// (0x00044f0f) list_single_graphic_heading_pane_vc_g4

0xd35d,	// (0x00044f1b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd35d,	// (0x00044f1b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x000475ec) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x000475ec) list_single_graphic_heading_pane_vc_g

0xd5e4,	// (0x000451a2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd5e4,	// (0x000451a2) list_single_graphic_heading_pane_vc_t1

0xd5fa,	// (0x000451b8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd5fa,	// (0x000451b8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x000475f3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x000475f3) list_single_graphic_heading_pane_vc_t

0xd351,	// (0x00044f0f) list_double2_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_double2_pane_vc_g1

0xd35d,	// (0x00044f1b) list_double2_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_double2_pane_vc_g

0xd60c,	// (0x000451ca) list_double2_pane_vc_t1_ParamLimits

0xd60c,	// (0x000451ca) list_double2_pane_vc_t1

0xd3d7,	// (0x00044f95) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd3d7,	// (0x00044f95) list_double2_large_graphic_pane_vc_g1

0xd3e3,	// (0x00044fa1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd3e3,	// (0x00044fa1) list_double2_large_graphic_pane_vc_g2

0xd3ef,	// (0x00044fad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd3ef,	// (0x00044fad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x000471a3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x000471a3) list_double2_large_graphic_pane_vc_g

0xd3fb,	// (0x00044fb9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd3fb,	// (0x00044fb9) list_double2_large_graphic_pane_vc_t1

0xd624,	// (0x000451e2) list_double_time_pane_vc_g1_ParamLimits

0xd624,	// (0x000451e2) list_double_time_pane_vc_g1

0xd630,	// (0x000451ee) list_double_time_pane_vc_g2_ParamLimits

0xd630,	// (0x000451ee) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x000475f8) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x000475f8) list_double_time_pane_vc_g

0xd63c,	// (0x000451fa) list_double_time_pane_vc_t1_ParamLimits

0xd63c,	// (0x000451fa) list_double_time_pane_vc_t1

0xd660,	// (0x0004521e) list_double_time_pane_vc_t2_ParamLimits

0xd660,	// (0x0004521e) list_double_time_pane_vc_t2

0xd6af,	// (0x0004526d) list_double_time_pane_vc_t3_ParamLimits

0xd6af,	// (0x0004526d) list_double_time_pane_vc_t3

0xd6c1,	// (0x0004527f) list_double_time_pane_vc_t4_ParamLimits

0xd6c1,	// (0x0004527f) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x000475fd) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x000475fd) list_double_time_pane_vc_t

0xd351,	// (0x00044f0f) list_double_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_double_pane_vc_g1

0xd35d,	// (0x00044f1b) list_double_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_double_pane_vc_g

0xd6d5,	// (0x00045293) list_double_pane_vc_t1_ParamLimits

0xd6d5,	// (0x00045293) list_double_pane_vc_t1

0xd6e9,	// (0x000452a7) list_double_pane_vc_t2_ParamLimits

0xd6e9,	// (0x000452a7) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00047606) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00047606) list_double_pane_vc_t

0xd351,	// (0x00044f0f) list_double_number_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_double_number_pane_vc_g1

0xd35d,	// (0x00044f1b) list_double_number_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_double_number_pane_vc_g

0xd701,	// (0x000452bf) list_double_number_pane_vc_t1_ParamLimits

0xd701,	// (0x000452bf) list_double_number_pane_vc_t1

0xd6d5,	// (0x00045293) list_double_number_pane_vc_t2_ParamLimits

0xd6d5,	// (0x00045293) list_double_number_pane_vc_t2

0xd713,	// (0x000452d1) list_double_number_pane_vc_t3_ParamLimits

0xd713,	// (0x000452d1) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x0004760b) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x0004760b) list_double_number_pane_vc_t

0xd72b,	// (0x000452e9) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd72b,	// (0x000452e9) list_double_large_graphic_pane_vc_g1

0xd74d,	// (0x0004530b) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd74d,	// (0x0004530b) list_double_large_graphic_pane_vc_g2

0xd761,	// (0x0004531f) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd761,	// (0x0004531f) list_double_large_graphic_pane_vc_g3

0xd770,	// (0x0004532e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd770,	// (0x0004532e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00047612) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00047612) list_double_large_graphic_pane_vc_g

0xd77c,	// (0x0004533a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd77c,	// (0x0004533a) list_double_large_graphic_pane_vc_t1

0xd798,	// (0x00045356) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd798,	// (0x00045356) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x0004761b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x0004761b) list_double_large_graphic_pane_vc_t

0xd351,	// (0x00044f0f) list_double_heading_pane_vc_g1_ParamLimits

0xd351,	// (0x00044f0f) list_double_heading_pane_vc_g1

0xd35d,	// (0x00044f1b) list_double_heading_pane_vc_g2_ParamLimits

0xd35d,	// (0x00044f1b) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00047186) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00047186) list_double_heading_pane_vc_g

0xd7ba,	// (0x00045378) list_double_heading_pane_vc_t1_ParamLimits

0xd7ba,	// (0x00045378) list_double_heading_pane_vc_t1

0xd7ce,	// (0x0004538c) list_double_heading_pane_vc_t2_ParamLimits

0xd7ce,	// (0x0004538c) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00047620) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00047620) list_double_heading_pane_vc_t

0xd7e6,	// (0x000453a4) list_double_graphic_pane_vc_g1_ParamLimits

0xd7e6,	// (0x000453a4) list_double_graphic_pane_vc_g1

0xd7fe,	// (0x000453bc) list_double_graphic_pane_vc_g2_ParamLimits

0xd7fe,	// (0x000453bc) list_double_graphic_pane_vc_g2

0xd351,	// (0x00044f0f) list_double_graphic_pane_vc_g3_ParamLimits

0xd351,	// (0x00044f0f) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00047625) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00047625) list_double_graphic_pane_vc_g

0xd81b,	// (0x000453d9) list_double_graphic_pane_vc_t1_ParamLimits

0xd81b,	// (0x000453d9) list_double_graphic_pane_vc_t1

0xd83a,	// (0x000453f8) list_double_graphic_pane_vc_t2_ParamLimits

0xd83a,	// (0x000453f8) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0004762e) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0004762e) list_double_graphic_pane_vc_t

0xed09,	// (0x000468c7) aid_size_cell_fastswap

0x8938,	// (0x000404f6) aid_size_cell_touch_ParamLimits

0x8938,	// (0x000404f6) aid_size_cell_touch

0xee6a,	// (0x00046a28) popup_fast_swap_wide_window_ParamLimits

0xee6a,	// (0x00046a28) popup_fast_swap_wide_window

0x8b08,	// (0x000406c6) touch_pane_ParamLimits

0x8b08,	// (0x000406c6) touch_pane

0xb69d,	// (0x0004325b) button_value_adjust_pane_cp2

0xd432,	// (0x00044ff0) button_value_adjust_pane_cp4

0xd43a,	// (0x00044ff8) form_field_data_pane_cp2

0x952d,	// (0x000410eb) form_field_data_wide_pane_cp2

0xb998,	// (0x00043556) bg_scroll_pane_ParamLimits

0x98c0,	// (0x0004147e) scroll_handle_pane_ParamLimits

0xf0a4,	// (0x00046c62) scroll_sc2_down_pane_ParamLimits

0xf0a4,	// (0x00046c62) scroll_sc2_down_pane

0xb9c9,	// (0x00043587) scroll_sc2_up_pane_ParamLimits

0xb9c9,	// (0x00043587) scroll_sc2_up_pane

0xca95,	// (0x00044653) grid_wheel_folder_pane_g1_ParamLimits

0xca95,	// (0x00044653) grid_wheel_folder_pane_g1

0xf248,	// (0x00046e06) clock_nsta_pane_cp2_ParamLimits

0xf248,	// (0x00046e06) clock_nsta_pane_cp2

0x9bc9,	// (0x00041787) listscroll_midp_pane_ParamLimits

0x9bd5,	// (0x00041793) midp_canvas_pane

0x2153,	// (0x00039d11) nsta_clock_indic_pane

0x2187,	// (0x00039d45) listscroll_form_pane_vc

0x218f,	// (0x00039d4d) listscroll_set_pane_vc_ParamLimits

0x218f,	// (0x00039d4d) listscroll_set_pane_vc

0xbcb5,	// (0x00043873) clock_nsta_pane

0xbcdf,	// (0x0004389d) indicator_nsta_pane

0x25e0,	// (0x0003a19e) bg_popup_sub_pane_cp2_ParamLimits

0x25f4,	// (0x0003a1b2) find_pane_cp2_ParamLimits

0x25f4,	// (0x0003a1b2) find_pane_cp2

0x260a,	// (0x0003a1c8) grid_toobar_pane_ParamLimits

0x26ea,	// (0x0003a2a8) list_form_gen_pane_vc_ParamLimits

0x26ea,	// (0x0003a2a8) list_form_gen_pane_vc

0x2700,	// (0x0003a2be) scroll_pane_cp8_vc_ParamLimits

0x2700,	// (0x0003a2be) scroll_pane_cp8_vc

0x277c,	// (0x0003a33a) data_form_wide_pane_vc_ParamLimits

0x277c,	// (0x0003a33a) data_form_wide_pane_vc

0x2788,	// (0x0003a346) form_field_data_wide_pane_vc_g1

0x2790,	// (0x0003a34e) form_field_data_wide_pane_vc_t1_ParamLimits

0x2790,	// (0x0003a34e) form_field_data_wide_pane_vc_t1

0xb6b1,	// (0x0004326f) input_focus_pane_cp6_vc_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_cp6_vc

0x2add,	// (0x0003a69b) list_midp_pane_ParamLimits

0x3df6,	// (0x0003b9b4) scroll_pane_cp16_ParamLimits

0x3df6,	// (0x0003b9b4) scroll_pane_cp16

0x2b2b,	// (0x0003a6e9) button_value_adjust_pane_ParamLimits

0x2b2b,	// (0x0003a6e9) button_value_adjust_pane

0xc671,	// (0x0004422f) button_value_adjust_pane_cp6_ParamLimits

0xc671,	// (0x0004422f) button_value_adjust_pane_cp6

0xc78b,	// (0x00044349) settings_code_pane_cp_ParamLimits

0xc78b,	// (0x00044349) settings_code_pane_cp

0xb299,	// (0x00042e57) cell_touch_pane_g1

0xb299,	// (0x00042e57) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x000472b2) cell_touch_pane_g

0xc964,	// (0x00044522) cell_touch_pane_cp_ParamLimits

0xc964,	// (0x00044522) cell_touch_pane_cp

0xc980,	// (0x0004453e) cell_touch_pane_ParamLimits

0xc980,	// (0x0004453e) cell_touch_pane

0xb299,	// (0x00042e57) scroll_sc2_down_pane_g1

0xb299,	// (0x00042e57) scroll_sc2_up_pane_g1

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp4_vc

0x4186,	// (0x0003bd44) list_set_graphic_pane_vc_g1_ParamLimits

0x4186,	// (0x0003bd44) list_set_graphic_pane_vc_g1

0x4192,	// (0x0003bd50) list_set_graphic_pane_vc_g2_ParamLimits

0x4192,	// (0x0003bd50) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x000475a2) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x000475a2) list_set_graphic_pane_vc_g

0x419e,	// (0x0003bd5c) text_primary_small_cp13_vc_ParamLimits

0x419e,	// (0x0003bd5c) text_primary_small_cp13_vc

0x41b6,	// (0x0003bd74) list_set_graphic_pane_vc_ParamLimits

0x41b6,	// (0x0003bd74) list_set_graphic_pane_vc

0xb2a3,	// (0x00042e61) input_focus_pane_cp2_vc

0xb299,	// (0x00042e57) setting_code_pane_vc_g1

0xb316,	// (0x00042ed4) setting_code_pane_vc_t1

0x41c9,	// (0x0003bd87) set_text_pane_vc_t1_ParamLimits

0x41c9,	// (0x0003bd87) set_text_pane_vc_t1

0xb2a3,	// (0x00042e61) input_focus_pane_cp1_vc

0x41e5,	// (0x0003bda3) list_set_text_pane_vc

0xb299,	// (0x00042e57) setting_text_pane_vc_g1

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp2_vc

0xb30d,	// (0x00042ecb) setting_slider_graphic_pane_vc_g1

0x41ef,	// (0x0003bdad) setting_slider_graphic_pane_vc_t1

0x41ff,	// (0x0003bdbd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x000475a7) setting_slider_graphic_pane_vc_t

0x420f,	// (0x0003bdcd) slider_set_pane_cp_vc

0x4217,	// (0x0003bdd5) slider_set_pane_vc_g1

0x4220,	// (0x0003bdde) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x000475ac) slider_set_pane_vc_g

0xb709,	// (0x000432c7) set_opt_bg_pane_g1_copy1

0xb711,	// (0x000432cf) set_opt_bg_pane_g2_copy1

0x424c,	// (0x0003be0a) set_opt_bg_pane_g3_copy1

0xb721,	// (0x000432df) set_opt_bg_pane_g4_copy1

0xb729,	// (0x000432e7) set_opt_bg_pane_g5_copy1

0xb731,	// (0x000432ef) set_opt_bg_pane_g6_copy1

0x4254,	// (0x0003be12) set_opt_bg_pane_g7_copy1

0x425c,	// (0x0003be1a) set_opt_bg_pane_g8_copy1

0x4264,	// (0x0003be22) set_opt_bg_pane_g9_copy1

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp_vc

0x426c,	// (0x0003be2a) setting_slider_pane_vc_t1

0x427b,	// (0x0003be39) setting_slider_pane_vc_t2

0x428b,	// (0x0003be49) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x000475bb) setting_slider_pane_vc_t

0x429b,	// (0x0003be59) slider_set_pane_vc

0x0a7a,	// (0x00038638) volume_set_pane_vc_g1

0x0e8f,	// (0x00038a4d) volume_set_pane_vc_g2

0x0e98,	// (0x00038a56) volume_set_pane_vc_g3

0x0ea1,	// (0x00038a5f) volume_set_pane_vc_g4

0x0eaa,	// (0x00038a68) volume_set_pane_vc_g5

0x0eb3,	// (0x00038a71) volume_set_pane_vc_g6

0x0ebc,	// (0x00038a7a) volume_set_pane_vc_g7

0x0ec5,	// (0x00038a83) volume_set_pane_vc_g8

0x0ece,	// (0x00038a8c) volume_set_pane_vc_g9

0x0ed7,	// (0x00038a95) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x000475c2) volume_set_pane_vc_g

0x42a3,	// (0x0003be61) volume_set_pane_vc

0x42ab,	// (0x0003be69) button_value_adjust_pane_cp1_vc

0x42b5,	// (0x0003be73) list_highlight_pane_cp2_vc

0x42be,	// (0x0003be7c) list_set_pane_vc_ParamLimits

0x42be,	// (0x0003be7c) list_set_pane_vc

0x431c,	// (0x0003beda) main_pane_set_vc_t1_ParamLimits

0x431c,	// (0x0003beda) main_pane_set_vc_t1

0x4331,	// (0x0003beef) main_pane_set_vc_t2_ParamLimits

0x4331,	// (0x0003beef) main_pane_set_vc_t2

0x4343,	// (0x0003bf01) main_pane_set_vc_t3_ParamLimits

0x4343,	// (0x0003bf01) main_pane_set_vc_t3

0x4355,	// (0x0003bf13) main_pane_set_vc_t4_ParamLimits

0x4355,	// (0x0003bf13) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x000475d7) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x000475d7) main_pane_set_vc_t

0x4367,	// (0x0003bf25) setting_code_pane_vc_ParamLimits

0x4367,	// (0x0003bf25) setting_code_pane_vc

0x4376,	// (0x0003bf34) setting_slider_graphic_pane_vc

0x4376,	// (0x0003bf34) setting_slider_pane_vc

0x4376,	// (0x0003bf34) setting_text_pane_vc

0x4376,	// (0x0003bf34) setting_volume_pane_vc

0x437e,	// (0x0003bf3c) scroll_pane_cp121_vc

0xb68b,	// (0x00043249) set_content_pane_vc

0x4386,	// (0x0003bf44) button_value_adjust_pane_g1

0x438f,	// (0x0003bf4d) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00047633) button_value_adjust_pane_g

0x4398,	// (0x0003bf56) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4398,	// (0x0003bf56) form_field_slider_wide_pane_vc_t1

0x43ac,	// (0x0003bf6a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x43ac,	// (0x0003bf6a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00047638) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00047638) form_field_slider_wide_pane_vc_t

0xb2f1,	// (0x00042eaf) input_focus_pane_cp10_vc_ParamLimits

0xb2f1,	// (0x00042eaf) input_focus_pane_cp10_vc

0x43da,	// (0x0003bf98) slider_cont_pane_cp1_vc_ParamLimits

0x43da,	// (0x0003bf98) slider_cont_pane_cp1_vc

0x43ec,	// (0x0003bfaa) slider_form_pane_g1_cp2

0x4220,	// (0x0003bdde) slider_form_pane_g2_cp2

0x4419,	// (0x0003bfd7) form_field_slider_pane_vc_t3

0x4427,	// (0x0003bfe5) form_field_slider_pane_vc_t4

0x4435,	// (0x0003bff3) slider_form_pane_vc_ParamLimits

0x4435,	// (0x0003bff3) slider_form_pane_vc

0x4442,	// (0x0003c000) form_field_slider_pane_vc_t1_ParamLimits

0x4442,	// (0x0003c000) form_field_slider_pane_vc_t1

0x43ac,	// (0x0003bf6a) form_field_slider_pane_vc_t2_ParamLimits

0x43ac,	// (0x0003bf6a) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x0004764a) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x0004764a) form_field_slider_pane_vc_t

0xb2f1,	// (0x00042eaf) input_focus_pane_cp9_vc_ParamLimits

0xb2f1,	// (0x00042eaf) input_focus_pane_cp9_vc

0x445e,	// (0x0003c01c) slider_cont_pane_vc_ParamLimits

0x445e,	// (0x0003c01c) slider_cont_pane_vc

0x4472,	// (0x0003c030) list_form_graphic_pane_cp_vc_ParamLimits

0x4472,	// (0x0003c030) list_form_graphic_pane_cp_vc

0x2788,	// (0x0003a346) form_field_popup_wide_pane_vc_g1

0x4487,	// (0x0003c045) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4487,	// (0x0003c045) form_field_popup_wide_pane_vc_t1

0xb6b1,	// (0x0004326f) input_focus_pane_cp8_vc_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_cp8_vc

0x44cc,	// (0x0003c08a) list_form_wide_pane_vc_ParamLimits

0x44cc,	// (0x0003c08a) list_form_wide_pane_vc

0x44d8,	// (0x0003c096) list_form_graphic_pane_vc_g1

0x44e0,	// (0x0003c09e) list_form_graphic_pane_vc_t1_ParamLimits

0x44e0,	// (0x0003c09e) list_form_graphic_pane_vc_t1

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp5_vc_ParamLimits

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp5_vc

0x44fc,	// (0x0003c0ba) list_form_graphic_pane_vc_ParamLimits

0x44fc,	// (0x0003c0ba) list_form_graphic_pane_vc

0x2788,	// (0x0003a346) form_field_popup_pane_vc_g1

0x4512,	// (0x0003c0d0) form_field_popup_pane_vc_t1_ParamLimits

0x4512,	// (0x0003c0d0) form_field_popup_pane_vc_t1

0xb6b1,	// (0x0004326f) input_focus_pane_cp7_vc_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_cp7_vc

0x4529,	// (0x0003c0e7) list_form_pane_vc_ParamLimits

0x4529,	// (0x0003c0e7) list_form_pane_vc

0x4535,	// (0x0003c0f3) data_form_pane_vc_t1_ParamLimits

0x4535,	// (0x0003c0f3) data_form_pane_vc_t1

0xb709,	// (0x000432c7) input_focus_pane_vc_g1

0xb711,	// (0x000432cf) input_focus_pane_vc_g2

0xb719,	// (0x000432d7) input_focus_pane_vc_g3

0xb721,	// (0x000432df) input_focus_pane_vc_g4

0xb729,	// (0x000432e7) input_focus_pane_vc_g5

0xb731,	// (0x000432ef) input_focus_pane_vc_g6

0xb739,	// (0x000432f7) input_focus_pane_vc_g7

0xb741,	// (0x000432ff) input_focus_pane_vc_g8

0xb749,	// (0x00043307) input_focus_pane_vc_g9

0xb299,	// (0x00042e57) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0004723b) input_focus_pane_vc_g

0x277c,	// (0x0003a33a) data_form_pane_vc_ParamLimits

0x277c,	// (0x0003a33a) data_form_pane_vc

0x2788,	// (0x0003a346) form_field_data_pane_vc_g1

0x4550,	// (0x0003c10e) form_field_data_pane_vc_t1_ParamLimits

0x4550,	// (0x0003c10e) form_field_data_pane_vc_t1

0xb6b1,	// (0x0004326f) input_focus_pane_vc_ParamLimits

0xb6b1,	// (0x0004326f) input_focus_pane_vc

0x456a,	// (0x0003c128) button_value_adjust_pane_cp3_vc

0x4572,	// (0x0003c130) button_value_adjust_pane_cp5_vc

0x457a,	// (0x0003c138) form_field_data_pane_vc_ParamLimits

0x457a,	// (0x0003c138) form_field_data_pane_vc

0x4591,	// (0x0003c14f) form_field_data_pane_vc_cp2

0x4599,	// (0x0003c157) form_field_data_wide_pane_vc_ParamLimits

0x4599,	// (0x0003c157) form_field_data_wide_pane_vc

0x45af,	// (0x0003c16d) form_field_data_wide_pane_vc_cp2

0x45b7,	// (0x0003c175) form_field_popup_pane_vc_ParamLimits

0x45b7,	// (0x0003c175) form_field_popup_pane_vc

0x45ce,	// (0x0003c18c) form_field_popup_wide_pane_vc_ParamLimits

0x45ce,	// (0x0003c18c) form_field_popup_wide_pane_vc

0x45e4,	// (0x0003c1a2) form_field_slider_pane_vc_ParamLimits

0x45e4,	// (0x0003c1a2) form_field_slider_pane_vc

0x45f7,	// (0x0003c1b5) form_field_slider_wide_pane_vc_ParamLimits

0x45f7,	// (0x0003c1b5) form_field_slider_wide_pane_vc

0xc99d,	// (0x0004455b) grid_touch_1_pane_ParamLimits

0xc99d,	// (0x0004455b) grid_touch_1_pane

0xc9b1,	// (0x0004456f) grid_touch_2_pane_ParamLimits

0xc9b1,	// (0x0004456f) grid_touch_2_pane

0x46c5,	// (0x0003c283) touch_pane_g1_ParamLimits

0x46c5,	// (0x0003c283) touch_pane_g1

0x462e,	// (0x0003c1ec) cell_app_pane_cp_wide_ParamLimits

0x462e,	// (0x0003c1ec) cell_app_pane_cp_wide

0x463f,	// (0x0003c1fd) grid_popup_fast_wide_pane_ParamLimits

0x463f,	// (0x0003c1fd) grid_popup_fast_wide_pane

0x4653,	// (0x0003c211) scroll_pane_cp19_ParamLimits

0x4653,	// (0x0003c211) scroll_pane_cp19

0xb2a3,	// (0x00042e61) bg_popup_window_pane_cp20

0x4667,	// (0x0003c225) listscroll_popup_fast_wide_pane

0xc9db,	// (0x00044599) grid_indicator_nsta_pane

0x466f,	// (0x0003c22d) clock_nsta_pane_g1

0x4678,	// (0x0003c236) clock_nsta_pane_t1

0xc9e9,	// (0x000445a7) cell_indicator_nsta_pane_ParamLimits

0xc9e9,	// (0x000445a7) cell_indicator_nsta_pane

0x46c5,	// (0x0003c283) cell_indicator_nsta_pane_g1

0xca00,	// (0x000445be) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x0004765b) cell_indicator_nsta_pane_g

0x46e0,	// (0x0003c29e) clock_nsta_pane_cp

0x46e9,	// (0x0003c2a7) indicator_nsta_pane_cp

0x46f1,	// (0x0003c2af) nsta_clock_indic_pane_g1

0xb33b,	// (0x00042ef9) grid_indicator_pane

0x995a,	// (0x00041518) scroll_pane_cp29

0xf175,	// (0x00046d33) indicator_nsta_pane_cp2_ParamLimits

0xf175,	// (0x00046d33) indicator_nsta_pane_cp2

0xb2ff,	// (0x00042ebd) main_apps_wheel_pane

0xc0a7,	// (0x00043c65) form_midp_field_text_pane_ParamLimits

0x2ae9,	// (0x0003a6a7) scroll_bar_cp050_ParamLimits

0x4741,	// (0x0003c2ff) cell_indicator_pane_ParamLimits

0x4741,	// (0x0003c2ff) cell_indicator_pane

0x475a,	// (0x0003c318) cell_indicator_pane_g1

0xca1f,	// (0x000445dd) grid_wheel_folder_pane_ParamLimits

0xca1f,	// (0x000445dd) grid_wheel_folder_pane

0xca2d,	// (0x000445eb) list_wheel_apps_pane_ParamLimits

0xca2d,	// (0x000445eb) list_wheel_apps_pane

0xca3b,	// (0x000445f9) main_apps_wheel_pane_g1_ParamLimits

0xca3b,	// (0x000445f9) main_apps_wheel_pane_g1

0xca47,	// (0x00044605) main_apps_wheel_pane_g2_ParamLimits

0xca47,	// (0x00044605) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00047677) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00047677) main_apps_wheel_pane_g

0xca55,	// (0x00044613) main_apps_wheel_pane_t1_ParamLimits

0xca55,	// (0x00044613) main_apps_wheel_pane_t1

0xca69,	// (0x00044627) list_wheel_apps_pane_g1

0xca71,	// (0x0004462f) list_wheel_apps_pane_g2

0xca79,	// (0x00044637) list_wheel_apps_pane_g3

0xca81,	// (0x0004463f) list_wheel_apps_pane_g4

0xca8b,	// (0x00044649) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x0004767c) list_wheel_apps_pane_g

0xf3f4,	// (0x00046fb2) navi_icon_text_pane

0xa681,	// (0x0004223f) aid_fill_nsta

0x4821,	// (0x0003c3df) navi_icon_text_pane_g1

0x482d,	// (0x0003c3eb) navi_icon_text_pane_t1

0xf2e4,	// (0x00046ea2) list_set_graphic_pane_t1_ParamLimits

0xf2e4,	// (0x00046ea2) list_set_graphic_pane_t1

0x322c,	// (0x0003adea) popup_midp_note_alarm_window_t6_ParamLimits

0x322c,	// (0x0003adea) popup_midp_note_alarm_window_t6

0x323e,	// (0x0003adfc) popup_midp_note_alarm_window_t7_ParamLimits

0x323e,	// (0x0003adfc) popup_midp_note_alarm_window_t7

0x3250,	// (0x0003ae0e) popup_midp_note_alarm_window_t8_ParamLimits

0x3250,	// (0x0003ae0e) popup_midp_note_alarm_window_t8

0x3262,	// (0x0003ae20) popup_midp_note_alarm_window_t9_ParamLimits

0x3262,	// (0x0003ae20) popup_midp_note_alarm_window_t9

0x3274,	// (0x0003ae32) popup_midp_note_alarm_window_t10_ParamLimits

0x3274,	// (0x0003ae32) popup_midp_note_alarm_window_t10

0x3286,	// (0x0003ae44) popup_midp_note_alarm_window_t11_ParamLimits

0x3286,	// (0x0003ae44) popup_midp_note_alarm_window_t11

0xc3f3,	// (0x00043fb1) scroll_pane_cp17_ParamLimits

0xc3f3,	// (0x00043fb1) scroll_pane_cp17

0x0a7a,	// (0x00038638) volume_small_pane_cp_g1

0x0ee0,	// (0x00038a9e) volume_small_pane_cp_g2

0x0ee9,	// (0x00038aa7) volume_small_pane_cp_g3

0x0ef2,	// (0x00038ab0) volume_small_pane_cp_g4

0x0efb,	// (0x00038ab9) volume_small_pane_cp_g5

0x0eaa,	// (0x00038a68) volume_small_pane_cp_g6

0x0f04,	// (0x00038ac2) volume_small_pane_cp_g7

0x0f0d,	// (0x00038acb) volume_small_pane_cp_g8

0x0f16,	// (0x00038ad4) volume_small_pane_cp_g9

0x0f1f,	// (0x00038add) volume_small_pane_cp_g10

0x0063,	// (0x00037c21) midp_ticker_pane_g1_ParamLimits

0x006f,	// (0x00037c2d) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00047307) midp_ticker_pane_g_ParamLimits

0x007b,	// (0x00037c39) midp_ticker_pane_t1_ParamLimits

0xa6a5,	// (0x00042263) aid_fill_nsta_2

0x2ad5,	// (0x0003a693) list_form2_midp_pane

0x3be0,	// (0x0003b79e) midp_editing_number_pane_ParamLimits

0x3bef,	// (0x0003b7ad) midp_ticker_pane_ParamLimits

0x483f,	// (0x0003c3fd) form2_midp_field_pane

0x4863,	// (0x0003c421) scroll_pane_cp51

0x4883,	// (0x0003c441) form2_midp_button_pane_ParamLimits

0x4883,	// (0x0003c441) form2_midp_button_pane

0x4895,	// (0x0003c453) form2_midp_content_pane_ParamLimits

0x4895,	// (0x0003c453) form2_midp_content_pane

0x48af,	// (0x0003c46d) form2_midp_field_choice_group_pane

0x48b7,	// (0x0003c475) form2_midp_field_pane_g1

0x48bf,	// (0x0003c47d) form2_midp_field_pane_g2

0x48c7,	// (0x0003c485) form2_midp_field_pane_g3

0x48cf,	// (0x0003c48d) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x000476a1) form2_midp_field_pane_g

0x48d7,	// (0x0003c495) form2_midp_gauge_slider_pane

0x48df,	// (0x0003c49d) form2_midp_gauge_wait_pane

0x48e7,	// (0x0003c4a5) form2_midp_image_pane_ParamLimits

0x48e7,	// (0x0003c4a5) form2_midp_image_pane

0xcabe,	// (0x0004467c) form2_midp_label_pane_ParamLimits

0xcabe,	// (0x0004467c) form2_midp_label_pane

0xcad7,	// (0x00044695) form2_midp_label_pane_cp_ParamLimits

0xcad7,	// (0x00044695) form2_midp_label_pane_cp

0x493c,	// (0x0003c4fa) form2_midp_string_pane_ParamLimits

0x493c,	// (0x0003c4fa) form2_midp_string_pane

0xd864,	// (0x00045422) form2_midp_text_pane_ParamLimits

0xd864,	// (0x00045422) form2_midp_text_pane

0x494e,	// (0x0003c50c) form2_midp_time_pane

0x495e,	// (0x0003c51c) input_focus_pane_cp51_ParamLimits

0x495e,	// (0x0003c51c) input_focus_pane_cp51

0xcaf6,	// (0x000446b4) form2_midp_label_pane_t1_ParamLimits

0xcaf6,	// (0x000446b4) form2_midp_label_pane_t1

0xd87d,	// (0x0004543b) form2_mdip_text_pane_t1_ParamLimits

0xd87d,	// (0x0004543b) form2_mdip_text_pane_t1

0xd89b,	// (0x00045459) form2_midp_time_pane_t1

0x49bf,	// (0x0003c57d) form2_midp_gauge_slider_pane_t1

0xcb36,	// (0x000446f4) form2_midp_gauge_slider_pane_t2

0xcb48,	// (0x00044706) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x000476aa) form2_midp_gauge_slider_pane_t

0x49f5,	// (0x0003c5b3) form2_midp_slider_pane

0x4a01,	// (0x0003c5bf) form2_midp_gauge_wait_pane_t1

0x4a0f,	// (0x0003c5cd) form2_midp_wait_pane_ParamLimits

0x4a0f,	// (0x0003c5cd) form2_midp_wait_pane

0xcb5a,	// (0x00044718) list_single_2graphic_pane_cp4_ParamLimits

0xcb5a,	// (0x00044718) list_single_2graphic_pane_cp4

0xbffe,	// (0x00043bbc) list_single_midp_graphic_pane_cp_ParamLimits

0xbffe,	// (0x00043bbc) list_single_midp_graphic_pane_cp

0xb2a3,	// (0x00042e61) list_highlight_pane_cp20

0x4a62,	// (0x0003c620) list_single_2graphic_pane_g1_cp4

0x406a,	// (0x0003bc28) list_single_2graphic_pane_g2_cp4

0x4a6a,	// (0x0003c628) list_single_2graphic_pane_t1_cp4

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp21

0x4a79,	// (0x0003c637) list_single_midp_graphic_pane_g4_cp

0x4a88,	// (0x0003c646) list_single_midp_graphic_pane_t1_cp

0xcb6f,	// (0x0004472d) form2_mdip_string_pane_t1_ParamLimits

0xcb6f,	// (0x0004472d) form2_mdip_string_pane_t1

0xb2a3,	// (0x00042e61) bg_wml_button_pane_cp2

0xb299,	// (0x00042e57) form2_midp_image_pane_g1

0xd41d,	// (0x00044fdb) list_double_large_graphic_pane_g5_ParamLimits

0xd41d,	// (0x00044fdb) list_double_large_graphic_pane_g5

0x9bc9,	// (0x00041787) midp_form_pane_ParamLimits

0xb2ff,	// (0x00042ebd) main_apps_wheel_pane_ParamLimits

0xa35f,	// (0x00041f1d) popup_preview_window_ParamLimits

0xa35f,	// (0x00041f1d) popup_preview_window

0xa62c,	// (0x000421ea) popup_touch_info_window_ParamLimits

0xa62c,	// (0x000421ea) popup_touch_info_window

0xa64a,	// (0x00042208) popup_touch_menu_window_ParamLimits

0xa64a,	// (0x00042208) popup_touch_menu_window

0xb28f,	// (0x00042e4d) bg_popup_sub_pane_cp6

0x4ba4,	// (0x0003c762) list_touch_menu_pane

0xcbe5,	// (0x000447a3) list_single_touch_menu_pane_ParamLimits

0xcbe5,	// (0x000447a3) list_single_touch_menu_pane

0xcbf9,	// (0x000447b7) list_single_touch_menu_pane_t1

0xb2ff,	// (0x00042ebd) bg_popup_sub_pane_cp7_ParamLimits

0xb2ff,	// (0x00042ebd) bg_popup_sub_pane_cp7

0x4bd0,	// (0x0003c78e) heading_sub_pane

0x4bd8,	// (0x0003c796) list_touch_info_pane_ParamLimits

0x4bd8,	// (0x0003c796) list_touch_info_pane

0x4be7,	// (0x0003c7a5) list_single_touch_info_pane_ParamLimits

0x4be7,	// (0x0003c7a5) list_single_touch_info_pane

0x4bf9,	// (0x0003c7b7) list_single_touch_info_pane_t1

0x4c07,	// (0x0003c7c5) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x000476b8) list_single_touch_info_pane_t

0xf546,	// (0x00047104) bg_popup_heading_pane_cp

0x4c15,	// (0x0003c7d3) heading_sub_pane_t1

0x2716,	// (0x0003a2d4) bg_popup_preview_window_pane_cp_ParamLimits

0x2716,	// (0x0003a2d4) bg_popup_preview_window_pane_cp

0x4bd0,	// (0x0003c78e) heading_preview_pane

0x4bd8,	// (0x0003c796) list_preview_pane_ParamLimits

0x4bd8,	// (0x0003c796) list_preview_pane

0x4c23,	// (0x0003c7e1) popup_preview_window_g1

0x4be7,	// (0x0003c7a5) list_single_preview_pane_ParamLimits

0x4be7,	// (0x0003c7a5) list_single_preview_pane

0x4c2b,	// (0x0003c7e9) list_single_preview_pane_g1

0x4c33,	// (0x0003c7f1) list_single_preview_pane_t1

0x4bf9,	// (0x0003c7b7) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x000476bd) list_single_preview_pane_t

0x4c41,	// (0x0003c7ff) bg_popup_heading_pane_cp2_ParamLimits

0x4c41,	// (0x0003c7ff) bg_popup_heading_pane_cp2

0x4c57,	// (0x0003c815) heading_preview_pane_g1

0x4c5f,	// (0x0003c81d) heading_preview_pane_t1_ParamLimits

0x4c5f,	// (0x0003c81d) heading_preview_pane_t1

0xb352,	// (0x00042f10) soft_indicator_pane_t1_ParamLimits

0xb62d,	// (0x000431eb) scroll_pane_ParamLimits

0xb9b7,	// (0x00043575) scroll_sc2_left_pane

0xb9c0,	// (0x0004357e) scroll_sc2_right_pane

0xb9df,	// (0x0004359d) scroll_bg_pane_g1_ParamLimits

0xb9f4,	// (0x000435b2) scroll_bg_pane_g2_ParamLimits

0xba0c,	// (0x000435ca) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00047292) scroll_bg_pane_g_ParamLimits

0xb9df,	// (0x0004359d) scroll_handle_pane_g1_ParamLimits

0xba21,	// (0x000435df) scroll_handle_pane_g2_ParamLimits

0xba0c,	// (0x000435ca) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00047299) scroll_handle_pane_g_ParamLimits

0x9f06,	// (0x00041ac4) popup_choice_list_window_ParamLimits

0x9f06,	// (0x00041ac4) popup_choice_list_window

0x25ec,	// (0x0003a1aa) choice_list_pane

0x266e,	// (0x0003a22c) cell_toolbar_pane_t1

0x2696,	// (0x0003a254) toolbar_button_pane_ParamLimits

0x3752,	// (0x0003b310) ai_gene_pane_1_t2_ParamLimits

0x3752,	// (0x0003b310) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x000474b5) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x000474b5) ai_gene_pane_1_t

0x4c7c,	// (0x0003c83a) scroll_sc2_left_pane_g1

0x4c7c,	// (0x0003c83a) scroll_sc2_right_pane_g1

0x217b,	// (0x00039d39) bg_popup_sub_pane_cp10

0x4c86,	// (0x0003c844) list_choice_list_pane

0xcc07,	// (0x000447c5) list_single_choice_list_pane_ParamLimits

0xcc07,	// (0x000447c5) list_single_choice_list_pane

0xcc1b,	// (0x000447d9) list_single_choice_list_pane_g1

0x9784,	// (0x00041342) list_single_choice_list_pane_t1_ParamLimits

0x9784,	// (0x00041342) list_single_choice_list_pane_t1

0x4cba,	// (0x0003c878) choice_list_pane_g1

0xcc23,	// (0x000447e1) choice_list_pane_t1

0xb28f,	// (0x00042e4d) input_focus_pane_cp11

0xb92c,	// (0x000434ea) title_pane_stacon_g2_ParamLimits

0xb92c,	// (0x000434ea) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00047278) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00047278) title_pane_stacon_g

0xf546,	// (0x00047104) cursor_press_pane

0x9fad,	// (0x00041b6b) popup_fep_hwr_window_ParamLimits

0x9fad,	// (0x00041b6b) popup_fep_hwr_window

0x0496,	// (0x00038054) popup_fep_vkb_window_ParamLimits

0x0496,	// (0x00038054) popup_fep_vkb_window

0xcc31,	// (0x000447ef) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x000476e6) fep_vkb_side_pane_g_ParamLimits

0x0f61,	// (0x00038b1f) fep_hwr_candidate_pane_ParamLimits

0x0f61,	// (0x00038b1f) fep_hwr_candidate_pane

0x0f8b,	// (0x00038b49) fep_hwr_side_pane_ParamLimits

0x0f8b,	// (0x00038b49) fep_hwr_side_pane

0x0fab,	// (0x00038b69) fep_hwr_top_pane_ParamLimits

0x0fab,	// (0x00038b69) fep_hwr_top_pane

0x0fc3,	// (0x00038b81) fep_hwr_write_pane_ParamLimits

0x0fc3,	// (0x00038b81) fep_hwr_write_pane

0xfb28,	// (0x000476e6) fep_vkb_side_pane_g

0x4cd8,	// (0x0003c896) fep_hwr_top_pane_g1

0x4cea,	// (0x0003c8a8) fep_hwr_top_pane_g2

0x0ffd,	// (0x00038bbb) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x000476c2) fep_hwr_top_pane_g

0x1012,	// (0x00038bd0) fep_hwr_top_text_pane

0xbae4,	// (0x000436a2) fep_hwr_top_text_pane_g1

0x4d20,	// (0x0003c8de) fep_hwr_top_text_pane_t1

0x1108,	// (0x00038cc6) fep_hwr_candidate_pane_g1

0x4f65,	// (0x0003cb23) fep_vkb_keypad_pane_g3_ParamLimits

0x4f65,	// (0x0003cb23) fep_vkb_keypad_pane_g3

0x4f8d,	// (0x0003cb4b) fep_vkb_keypad_pane_g4_ParamLimits

0x4f8d,	// (0x0003cb4b) fep_vkb_keypad_pane_g4

0x4ffc,	// (0x0003cbba) fep_vkb_bottom_pane_g2_ParamLimits

0x4ffc,	// (0x0003cbba) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x000476ed) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x000476ed) fep_vkb_bottom_pane_g

0x4c7c,	// (0x0003c83a) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x000476f7) cell_vkb_side_pane_g

0x5087,	// (0x0003cc45) cell_vkb_side_pane_t1

0x5095,	// (0x0003cc53) cell_vkb_side_pane_t1_copy1

0x4c7c,	// (0x0003c83a) bg_fep_vkb_candidate_pane_g2

0x51c1,	// (0x0003cd7f) cell_vkb_candidate_pane_ParamLimits

0x4d2e,	// (0x0003c8ec) aid_size_cell_vkb_ParamLimits

0x4d2e,	// (0x0003c8ec) aid_size_cell_vkb

0x51c1,	// (0x0003cd7f) cell_vkb_candidate_pane

0x112f,	// (0x00038ced) bg_popup_fep_shadow_pane_g1

0xcc4b,	// (0x00044809) fep_vkb_bottom_pane_ParamLimits

0xcc4b,	// (0x00044809) fep_vkb_bottom_pane

0x4df2,	// (0x0003c9b0) fep_vkb_candidate_pane_ParamLimits

0x4df2,	// (0x0003c9b0) fep_vkb_candidate_pane

0xcc70,	// (0x0004482e) fep_vkb_keypad_pane_ParamLimits

0xcc70,	// (0x0004482e) fep_vkb_keypad_pane

0xcca5,	// (0x00044863) fep_vkb_side_pane_ParamLimits

0xcca5,	// (0x00044863) fep_vkb_side_pane

0xcce1,	// (0x0004489f) fep_vkb_top_pane_ParamLimits

0xcce1,	// (0x0004489f) fep_vkb_top_pane

0x4ebe,	// (0x0003ca7c) fep_vkb_top_pane_g1_ParamLimits

0x4ebe,	// (0x0003ca7c) fep_vkb_top_pane_g1

0x4ecd,	// (0x0003ca8b) fep_vkb_top_pane_g2_ParamLimits

0x4ecd,	// (0x0003ca8b) fep_vkb_top_pane_g2

0x4edc,	// (0x0003ca9a) fep_vkb_top_pane_g3_ParamLimits

0x4edc,	// (0x0003ca9a) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x000476dd) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x000476dd) fep_vkb_top_pane_g

0x4efa,	// (0x0003cab8) fep_vkb_top_text_pane_ParamLimits

0x4efa,	// (0x0003cab8) fep_vkb_top_text_pane

0xcd16,	// (0x000448d4) fep_vkb_side_pane_g1_ParamLimits

0xcd16,	// (0x000448d4) fep_vkb_side_pane_g1

0x4f54,	// (0x0003cb12) grid_vkb_side_pane_ParamLimits

0x4f54,	// (0x0003cb12) grid_vkb_side_pane

0x1137,	// (0x00038cf5) bg_popup_fep_shadow_pane_g2

0x1140,	// (0x00038cfe) bg_popup_fep_shadow_pane_g3

0x1148,	// (0x00038d06) bg_popup_fep_shadow_pane_g4

0x1151,	// (0x00038d0f) bg_popup_fep_shadow_pane_g5

0x115b,	// (0x00038d19) bg_popup_fep_shadow_pane_g6

0x1163,	// (0x00038d21) bg_popup_fep_shadow_pane_g7

0xb721,	// (0x000432df) bg_popup_fep_shadow_pane_g8

0x4fab,	// (0x0003cb69) grid_vkb_keypad_number_pane_ParamLimits

0x4fab,	// (0x0003cb69) grid_vkb_keypad_number_pane

0x4fbb,	// (0x0003cb79) grid_vkb_keypad_pane_ParamLimits

0x4fbb,	// (0x0003cb79) grid_vkb_keypad_pane

0x4fe1,	// (0x0003cb9f) fep_vkb_bottom_pane_g1_ParamLimits

0x4fe1,	// (0x0003cb9f) fep_vkb_bottom_pane_g1

0x500a,	// (0x0003cbc8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x500a,	// (0x0003cbc8) grid_vkb_keypad_bottom_left_pane

0x501f,	// (0x0003cbdd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x501f,	// (0x0003cbdd) grid_vkb_keypad_bottom_right_pane

0x5034,	// (0x0003cbf2) fep_vkb_top_text_pane_g1

0xcd5d,	// (0x0004491b) fep_vkb_top_text_pane_t1

0xcd6f,	// (0x0004492d) cell_vkb_side_pane_ParamLimits

0xcd6f,	// (0x0004492d) cell_vkb_side_pane

0x4c7c,	// (0x0003c83a) cell_vkb_side_pane_g1

0x50a3,	// (0x0003cc61) cell_vkb_keypad_pane_ParamLimits

0x50a3,	// (0x0003cc61) cell_vkb_keypad_pane

0x5118,	// (0x0003ccd6) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x0004770a) bg_popup_fep_shadow_pane_g

0x1175,	// (0x00038d33) cell_hwr_side_pane_g1

0x1175,	// (0x00038d33) cell_hwr_side_pane_g2

0x5122,	// (0x0003cce0) cell_vkb_keypad_pane_t1

0xcd85,	// (0x00044943) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd85,	// (0x00044943) cell_vkb_keypad_bottom_left_pane

0xcd9a,	// (0x00044958) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd9a,	// (0x00044958) cell_vkb_keypad_bottom_right_pane

0x4c7c,	// (0x0003c83a) cell_vkb_keypad_bottom_left_pane_g1

0x4c7c,	// (0x0003c83a) cell_vkb_keypad_bottom_right_pane_g1

0x5186,	// (0x0003cd44) cell_vkb_keypad_number_pane_ParamLimits

0x5186,	// (0x0003cd44) cell_vkb_keypad_number_pane

0x51a5,	// (0x0003cd63) cell_vkb_keypad_number_pane_g1

0x51af,	// (0x0003cd6d) cell_vkb_keypad_number_pane_g2

0x51b8,	// (0x0003cd76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000476fc) cell_vkb_keypad_number_pane_g

0x5122,	// (0x0003cce0) cell_vkb_keypad_number_pane_t1

0x51dc,	// (0x0003cd9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x0004771d) cell_hwr_side_pane_g

0x51f5,	// (0x0003cdb3) cell_hwr_side_pane_t1

0x117f,	// (0x00038d3d) cell_hwr_side_pane_t1_copy1

0x118d,	// (0x00038d4b) cell_hwr_candidate_pane_g1

0x11bc,	// (0x00038d7a) cell_hwr_candidate_pane_t1

0x4c7c,	// (0x0003c83a) cell_vkb_candidate_pane_g2

0x5239,	// (0x0003cdf7) cell_vkb_candidate_pane_t1

0x0f28,	// (0x00038ae6) bg_popup_fep_shadow_pane_ParamLimits

0x0f28,	// (0x00038ae6) bg_popup_fep_shadow_pane

0x0fdd,	// (0x00038b9b) bg_fep_hwr_top_pane_g4

0x4cfc,	// (0x0003c8ba) bg_hwr_side_pane_g1_ParamLimits

0x4cfc,	// (0x0003c8ba) bg_hwr_side_pane_g1

0xa9d9,	// (0x00042597) cell_hwr_side_pane_ParamLimits

0xa9d9,	// (0x00042597) cell_hwr_side_pane

0x1089,	// (0x00038c47) fep_hwr_write_pane_g1_ParamLimits

0x1089,	// (0x00038c47) fep_hwr_write_pane_g1

0x1096,	// (0x00038c54) fep_hwr_write_pane_g2_ParamLimits

0x1096,	// (0x00038c54) fep_hwr_write_pane_g2

0x10a3,	// (0x00038c61) fep_hwr_write_pane_g3_ParamLimits

0x10a3,	// (0x00038c61) fep_hwr_write_pane_g3

0xa9f9,	// (0x000425b7) fep_hwr_write_pane_g4_ParamLimits

0xa9f9,	// (0x000425b7) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x000476c9) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x000476c9) fep_hwr_write_pane_g

0x0fdd,	// (0x00038b9b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0fdd,	// (0x00038b9b) bg_fep_hwr_candidate_pane_g2

0x10c6,	// (0x00038c84) cell_hwr_candidate_pane_ParamLimits

0x10c6,	// (0x00038c84) cell_hwr_candidate_pane

0x1108,	// (0x00038cc6) fep_hwr_candidate_pane_g1_ParamLimits

0x4d5c,	// (0x0003c91a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4d5c,	// (0x0003c91a) bg_popup_fep_shadow_pane_cp2

0x4eec,	// (0x0003caaa) fep_vkb_top_pane_g4_ParamLimits

0x4eec,	// (0x0003caaa) fep_vkb_top_pane_g4

0x4f32,	// (0x0003caf0) fep_vkb_side_pane_g2_ParamLimits

0x4f32,	// (0x0003caf0) fep_vkb_side_pane_g2

0x9424,	// (0x00040fe2) list_setting_pane_t4_ParamLimits

0x9424,	// (0x00040fe2) list_setting_pane_t4

0x94be,	// (0x0004107c) list_setting_number_pane_t5_ParamLimits

0x94be,	// (0x0004107c) list_setting_number_pane_t5

0xbb1b,	// (0x000436d9) list_double_heading_pane_cp2_ParamLimits

0xbb1b,	// (0x000436d9) list_double_heading_pane_cp2

0x5247,	// (0x0003ce05) list_double_heading_pane_g1_cp2_ParamLimits

0x5247,	// (0x0003ce05) list_double_heading_pane_g1_cp2

0x5253,	// (0x0003ce11) list_double_heading_pane_g2_cp2_ParamLimits

0x5253,	// (0x0003ce11) list_double_heading_pane_g2_cp2

0x5267,	// (0x0003ce25) list_double_heading_pane_t1_cp2_ParamLimits

0x5267,	// (0x0003ce25) list_double_heading_pane_t1_cp2

0x527d,	// (0x0003ce3b) list_double_heading_pane_t2_cp2_ParamLimits

0x527d,	// (0x0003ce3b) list_double_heading_pane_t2_cp2

0xb287,	// (0x00042e45) aid_value_unit2

0xee80,	// (0x00046a3e) popup_preview_fixed_window

0xb429,	// (0x00042fe7) bg_popup_preview_window_pane_cp02

0x528f,	// (0x0003ce4d) list_preview_fixed_pane

0x52d5,	// (0x0003ce93) list_empty_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_empty_pane_fp

0x52d5,	// (0x0003ce93) list_single_cale_day_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_cale_day_pane_fp

0x52d5,	// (0x0003ce93) list_single_graphic_heading_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_graphic_heading_pane_fp

0x52d5,	// (0x0003ce93) list_single_graphic_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_graphic_pane_fp

0x52d5,	// (0x0003ce93) list_single_heading_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_heading_pane_fp

0x52d5,	// (0x0003ce93) list_single_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_pane_fp

0x52eb,	// (0x0003cea9) list_single_pane_fp_g1_ParamLimits

0x52eb,	// (0x0003cea9) list_single_pane_fp_g1

0xd8bb,	// (0x00045479) list_single_pane_fp_g2_ParamLimits

0xd8bb,	// (0x00045479) list_single_pane_fp_g2

0xd8c7,	// (0x00045485) list_single_pane_fp_g3_ParamLimits

0xd8c7,	// (0x00045485) list_single_pane_fp_g3

0x52f7,	// (0x0003ceb5) list_single_pane_fp_g4_ParamLimits

0x52f7,	// (0x0003ceb5) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00047730) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00047730) list_single_pane_fp_g

0xd8db,	// (0x00045499) list_single_pane_fp_t1_ParamLimits

0xd8db,	// (0x00045499) list_single_pane_fp_t1

0xd8f2,	// (0x000454b0) list_single_graphic_pane_fp_g1_ParamLimits

0xd8f2,	// (0x000454b0) list_single_graphic_pane_fp_g1

0x52eb,	// (0x0003cea9) list_single_graphic_pane_fp_g2_ParamLimits

0x52eb,	// (0x0003cea9) list_single_graphic_pane_fp_g2

0xd8bb,	// (0x00045479) list_single_graphic_pane_fp_g3_ParamLimits

0xd8bb,	// (0x00045479) list_single_graphic_pane_fp_g3

0xd8c7,	// (0x00045485) list_single_graphic_pane_fp_g4_ParamLimits

0xd8c7,	// (0x00045485) list_single_graphic_pane_fp_g4

0x52f7,	// (0x0003ceb5) list_single_graphic_pane_fp_g5_ParamLimits

0x52f7,	// (0x0003ceb5) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047739) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047739) list_single_graphic_pane_fp_g

0xd8fe,	// (0x000454bc) list_single_graphic_pane_fp_t1_ParamLimits

0xd8fe,	// (0x000454bc) list_single_graphic_pane_fp_t1

0xd8f2,	// (0x000454b0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd8f2,	// (0x000454b0) list_single_graphic_heading_pane_fp_g1

0x52eb,	// (0x0003cea9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x52eb,	// (0x0003cea9) list_single_graphic_heading_pane_fp_g2

0xd8bb,	// (0x00045479) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd8bb,	// (0x00045479) list_single_graphic_heading_pane_fp_g3

0xd8c7,	// (0x00045485) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd8c7,	// (0x00045485) list_single_graphic_heading_pane_fp_g4

0x52f7,	// (0x0003ceb5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x52f7,	// (0x0003ceb5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047739) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047739) list_single_graphic_heading_pane_fp_g

0xd914,	// (0x000454d2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd914,	// (0x000454d2) list_single_graphic_heading_pane_fp_t1

0xd92a,	// (0x000454e8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd92a,	// (0x000454e8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00047744) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00047744) list_single_graphic_heading_pane_fp_t

0xd93c,	// (0x000454fa) list_single_cale_day_pane_fp_g1_ParamLimits

0xd93c,	// (0x000454fa) list_single_cale_day_pane_fp_g1

0x5303,	// (0x0003cec1) list_single_cale_day_pane_fp_g2_ParamLimits

0x5303,	// (0x0003cec1) list_single_cale_day_pane_fp_g2

0xd974,	// (0x00045532) list_single_cale_day_pane_fp_g3_ParamLimits

0xd974,	// (0x00045532) list_single_cale_day_pane_fp_g3

0xd99c,	// (0x0004555a) list_single_cale_day_pane_fp_g4_ParamLimits

0xd99c,	// (0x0004555a) list_single_cale_day_pane_fp_g4

0xd9c0,	// (0x0004557e) list_single_cale_day_pane_fp_g5_ParamLimits

0xd9c0,	// (0x0004557e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00047749) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00047749) list_single_cale_day_pane_fp_g

0xd9e4,	// (0x000455a2) list_single_cale_day_pane_fp_t1_ParamLimits

0xd9e4,	// (0x000455a2) list_single_cale_day_pane_fp_t1

0xda0a,	// (0x000455c8) list_single_cale_day_pane_fp_t2_ParamLimits

0xda0a,	// (0x000455c8) list_single_cale_day_pane_fp_t2

0xda23,	// (0x000455e1) list_single_cale_day_pane_fp_t3_ParamLimits

0xda23,	// (0x000455e1) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00047754) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00047754) list_single_cale_day_pane_fp_t

0x52eb,	// (0x0003cea9) list_empty_pane_fp_g1_ParamLimits

0x52eb,	// (0x0003cea9) list_empty_pane_fp_g1

0xda3c,	// (0x000455fa) list_empty_pane_fp_t1

0xda4a,	// (0x00045608) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x0004775b) list_empty_pane_fp_t

0x52eb,	// (0x0003cea9) list_single_heading_pane_fp_g1_ParamLimits

0x52eb,	// (0x0003cea9) list_single_heading_pane_fp_g1

0xd8bb,	// (0x00045479) list_single_heading_pane_fp_g2_ParamLimits

0xd8bb,	// (0x00045479) list_single_heading_pane_fp_g2

0xd8c7,	// (0x00045485) list_single_heading_pane_fp_g3_ParamLimits

0xd8c7,	// (0x00045485) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00047760) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00047760) list_single_heading_pane_fp_g

0xda58,	// (0x00045616) list_single_heading_pane_fp_t1_ParamLimits

0xda58,	// (0x00045616) list_single_heading_pane_fp_t1

0xda6a,	// (0x00045628) list_single_heading_pane_fp_t2_ParamLimits

0xda6a,	// (0x00045628) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00047767) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00047767) list_single_heading_pane_fp_t

0x97d0,	// (0x0004138e) aid_size_cell_fast

0xb40c,	// (0x00042fca) soft_indicator_pane_cp1_t1

0x97d9,	// (0x00041397) cell_app_pane_cp2_ParamLimits

0x97d9,	// (0x00041397) cell_app_pane_cp2

0x0f4a,	// (0x00038b08) fep_hwr_candidate_drop_down_list_pane

0x1122,	// (0x00038ce0) fep_hwr_candidate_pane_g3_ParamLimits

0x1122,	// (0x00038ce0) fep_hwr_candidate_pane_g3

0xd8ae,	// (0x0004546c) fep_hwr_candidate_pane_g4_ParamLimits

0xd8ae,	// (0x0004546c) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x000476d6) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x000476d6) fep_hwr_candidate_pane_g

0x4de1,	// (0x0003c99f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4de1,	// (0x0003c99f) fep_vkb_candidate_drop_down_list_pane

0x51e4,	// (0x0003cda2) fep_vkb_candidate_pane_g3

0x51ec,	// (0x0003cdaa) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00047703) fep_vkb_candidate_pane_g

0x118d,	// (0x00038d4b) cell_hwr_candidate_pane_g1_ParamLimits

0x119b,	// (0x00038d59) cell_hwr_candidate_pane_g3_ParamLimits

0x119b,	// (0x00038d59) cell_hwr_candidate_pane_g3

0x6109,	// (0x0003dcc7) cell_hwr_candidate_pane_g4_ParamLimits

0x6109,	// (0x0003dcc7) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00047722) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00047722) cell_hwr_candidate_pane_g

0x5203,	// (0x0003cdc1) cell_vkb_candidate_pane_g3_ParamLimits

0x5203,	// (0x0003cdc1) cell_vkb_candidate_pane_g3

0x521e,	// (0x0003cddc) cell_vkb_candidate_pane_g4_ParamLimits

0x521e,	// (0x0003cddc) cell_vkb_candidate_pane_g4

0xcdb5,	// (0x00044973) cell_app_pane_cp2_g1_ParamLimits

0xcdb5,	// (0x00044973) cell_app_pane_cp2_g1

0x532d,	// (0x0003ceeb) cell_app_pane_cp2_g2_ParamLimits

0x532d,	// (0x0003ceeb) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x0004776c) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x0004776c) cell_app_pane_cp2_g

0x5339,	// (0x0003cef7) cell_app_pane_cp2_t1_ParamLimits

0x5339,	// (0x0003cef7) cell_app_pane_cp2_t1

0xb6b1,	// (0x0004326f) grid_highlight_pane_cp1_ParamLimits

0xb6b1,	// (0x0004326f) grid_highlight_pane_cp1

0x11da,	// (0x00038d98) cell_hwr_candidate_pane_cp1_ParamLimits

0x11da,	// (0x00038d98) cell_hwr_candidate_pane_cp1

0x118d,	// (0x00038d4b) fep_hwr_candidate_drop_down_list_pane_g1

0x11f9,	// (0x00038db7) fep_hwr_candidate_drop_down_list_pane_g2

0x1206,	// (0x00038dc4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00047771) fep_hwr_candidate_drop_down_list_pane_g

0x1213,	// (0x00038dd1) fep_hwr_candidate_drop_down_list_scroll_pane

0x121c,	// (0x00038dda) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x121c,	// (0x00038dda) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1229,	// (0x00038de7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1229,	// (0x00038de7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1236,	// (0x00038df4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1236,	// (0x00038df4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1243,	// (0x00038e01) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1243,	// (0x00038e01) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x125e,	// (0x00038e1c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x125e,	// (0x00038e1c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1279,	// (0x00038e37) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1279,	// (0x00038e37) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1294,	// (0x00038e52) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1294,	// (0x00038e52) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x12af,	// (0x00038e6d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x12af,	// (0x00038e6d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00047778) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00047778) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x534b,	// (0x0003cf09) cell_vkb_candidate_pane_cp1_ParamLimits

0x534b,	// (0x0003cf09) cell_vkb_candidate_pane_cp1

0x4eec,	// (0x0003caaa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4eec,	// (0x0003caaa) fep_vkb_candidate_drop_down_list_pane_g1

0x536b,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x536b,	// (0x0003cf29) fep_vkb_candidate_drop_down_list_pane_g2

0x5378,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5378,	// (0x0003cf36) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00047789) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00047789) fep_vkb_candidate_drop_down_list_pane_g

0x5385,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5385,	// (0x0003cf43) fep_vkb_candidate_drop_down_list_scroll_pane

0x5392,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5392,	// (0x0003cf50) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x539f,	// (0x0003cf5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x539f,	// (0x0003cf5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x53ab,	// (0x0003cf69) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x53ab,	// (0x0003cf69) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x53b7,	// (0x0003cf75) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x53b7,	// (0x0003cf75) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x53d8,	// (0x0003cf96) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x53d8,	// (0x0003cf96) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x53f9,	// (0x0003cfb7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x53f9,	// (0x0003cfb7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x541a,	// (0x0003cfd8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x541a,	// (0x0003cfd8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x543b,	// (0x0003cff9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x543b,	// (0x0003cff9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00047790) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00047790) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8b5e,	// (0x0004071c) title_pane_g1_ParamLimits

0x8b71,	// (0x0004072f) title_pane_g2_ParamLimits

0xf54e,	// (0x0004710c) title_pane_g_ParamLimits

0xbad4,	// (0x00043692) aid_call2_pane

0xbadc,	// (0x0004369a) aid_call_pane

0xbae4,	// (0x000436a2) popup_clock_analogue_window_g1

0xbae4,	// (0x000436a2) popup_clock_analogue_window_g2

0xf0b9,	// (0x00046c77) popup_clock_analogue_window_g3

0xf0c2,	// (0x00046c80) popup_clock_analogue_window_g4

0xb299,	// (0x00042e57) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x000472a7) popup_clock_analogue_window_g

0xf0ca,	// (0x00046c88) popup_clock_analogue_window_t1

0xf0d8,	// (0x00046c96) clock_digital_number_pane_ParamLimits

0xf0d8,	// (0x00046c96) clock_digital_number_pane

0xf0e4,	// (0x00046ca2) clock_digital_number_pane_cp02_ParamLimits

0xf0e4,	// (0x00046ca2) clock_digital_number_pane_cp02

0xf0f0,	// (0x00046cae) clock_digital_number_pane_cp03_ParamLimits

0xf0f0,	// (0x00046cae) clock_digital_number_pane_cp03

0xf0fc,	// (0x00046cba) clock_digital_number_pane_cp04_ParamLimits

0xf0fc,	// (0x00046cba) clock_digital_number_pane_cp04

0xf108,	// (0x00046cc6) clock_digital_separator_pane_ParamLimits

0xf108,	// (0x00046cc6) clock_digital_separator_pane

0xf114,	// (0x00046cd2) popup_clock_digital_window_t1_ParamLimits

0xf114,	// (0x00046cd2) popup_clock_digital_window_t1

0xb299,	// (0x00042e57) clock_digital_number_pane_g1

0xb299,	// (0x00042e57) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x000472b2) clock_digital_number_pane_g

0xb299,	// (0x00042e57) clock_digital_separator_pane_g1

0xb299,	// (0x00042e57) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x000472b2) clock_digital_separator_pane_g

0xa681,	// (0x0004223f) aid_fill_nsta_ParamLimits

0xbcdf,	// (0x0004389d) indicator_nsta_pane_ParamLimits

0x247c,	// (0x0003a03a) popup_clock_analogue_window

0x247c,	// (0x0003a03a) popup_clock_digital_window

0xc9db,	// (0x00044599) grid_indicator_nsta_pane_ParamLimits

0x4686,	// (0x0003c244) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00047656) clock_nsta_pane_t

0xf09a,	// (0x00046c58) aid_size_max_handle

0x98b7,	// (0x00041475) aid_size_min_handle

0xf546,	// (0x00047104) editor_scroll_pane

0x5456,	// (0x0003d014) ex_editor_pane

0xb7d0,	// (0x0004338e) scroll_pane_cp13

0xb659,	// (0x00043217) scroll_pane_cp14

0xbb13,	// (0x000436d1) scroll_pane_cp36

0x9981,	// (0x0004153f) list_single_graphic_hl_pane_cp2_ParamLimits

0x9981,	// (0x0004153f) list_single_graphic_hl_pane_cp2

0xc7c7,	// (0x00044385) list_single_graphic_hl_pane_ParamLimits

0xc7c7,	// (0x00044385) list_single_graphic_hl_pane

0xaa0e,	// (0x000425cc) aid_size_min_hl_cp1

0x5467,	// (0x0003d025) list_highlight_pane_cp34_ParamLimits

0x5467,	// (0x0003d025) list_highlight_pane_cp34

0x5478,	// (0x0003d036) list_single_graphic_hl_pane_g1_ParamLimits

0x5478,	// (0x0003d036) list_single_graphic_hl_pane_g1

0xaa17,	// (0x000425d5) list_single_graphic_hl_pane_g2_ParamLimits

0xaa17,	// (0x000425d5) list_single_graphic_hl_pane_g2

0xaa17,	// (0x000425d5) list_single_graphic_hl_pane_g3_ParamLimits

0xaa17,	// (0x000425d5) list_single_graphic_hl_pane_g3

0xda80,	// (0x0004563e) list_single_graphic_hl_pane_g4_ParamLimits

0xda80,	// (0x0004563e) list_single_graphic_hl_pane_g4

0xaa23,	// (0x000425e1) list_single_graphic_hl_pane_g5_ParamLimits

0xaa23,	// (0x000425e1) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x000477a1) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x000477a1) list_single_graphic_hl_pane_g

0xaa37,	// (0x000425f5) list_single_graphic_hl_pane_t1_ParamLimits

0xaa37,	// (0x000425f5) list_single_graphic_hl_pane_t1

0x5485,	// (0x0003d043) aid_size_min_hl_cp2

0x548e,	// (0x0003d04c) list_highlight_pane_cp34_cp2_ParamLimits

0x548e,	// (0x0003d04c) list_highlight_pane_cp34_cp2

0x5478,	// (0x0003d036) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5478,	// (0x0003d036) list_single_graphic_hl_pane_g1_cp2

0x549b,	// (0x0003d059) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x549b,	// (0x0003d059) list_single_graphic_hl_pane_g2_cp2

0xcdd3,	// (0x00044991) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcdd3,	// (0x00044991) list_single_graphic_hl_pane_g3_cp2

0xf4a5,	// (0x00047063) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf4a5,	// (0x00047063) list_single_graphic_hl_pane_g4_cp2

0x54b5,	// (0x0003d073) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x54b5,	// (0x0003d073) list_single_graphic_hl_pane_g5_cp2

0x9d9a,	// (0x00041958) control_pane_g4_ParamLimits

0x9d9a,	// (0x00041958) control_pane_g4

0x217b,	// (0x00039d39) bg_popup_sub_pane_cp10_ParamLimits

0x4c86,	// (0x0003c844) list_choice_list_pane_ParamLimits

0x4c95,	// (0x0003c853) scroll_pane_cp23

0xb429,	// (0x00042fe7) bg_popup_preview_window_pane_cp02_ParamLimits

0x528f,	// (0x0003ce4d) list_preview_fixed_pane_ParamLimits

0x52a5,	// (0x0003ce63) list_preview_fixed_pane_cp_ParamLimits

0x52a5,	// (0x0003ce63) list_preview_fixed_pane_cp

0x52b1,	// (0x0003ce6f) popup_preview_fixed_window_g1_ParamLimits

0x52b1,	// (0x0003ce6f) popup_preview_fixed_window_g1

0x52bd,	// (0x0003ce7b) popup_preview_fixed_window_g2_ParamLimits

0x52bd,	// (0x0003ce7b) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00047729) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00047729) popup_preview_fixed_window_g

0xef88,	// (0x00046b46) aid_navi_side_left_pane_ParamLimits

0xef9d,	// (0x00046b5b) aid_navi_side_right_pane_ParamLimits

0xefb5,	// (0x00046b73) navi_icon_pane_stacon_ParamLimits

0xefc9,	// (0x00046b87) navi_navi_pane_stacon_ParamLimits

0xefb5,	// (0x00046b73) navi_text_pane_stacon_ParamLimits

0xeda5,	// (0x00046963) main_text_info_pane

0x54df,	// (0x0003d09d) listscroll_text_info_pane

0x54e7,	// (0x0003d0a5) list_text_info_pane_ParamLimits

0x54e7,	// (0x0003d0a5) list_text_info_pane

0x54f6,	// (0x0003d0b4) scroll_pane_cp24_ParamLimits

0x54f6,	// (0x0003d0b4) scroll_pane_cp24

0xcde1,	// (0x0004499f) list_text_info_pane_t1_ParamLimits

0xcde1,	// (0x0004499f) list_text_info_pane_t1

0x9f22,	// (0x00041ae0) popup_fast_swap2_window_ParamLimits

0x9f22,	// (0x00041ae0) popup_fast_swap2_window

0x5548,	// (0x0003d106) aid_size_cell_fast2

0xb28f,	// (0x00042e4d) bg_popup_window_pane_cp17

0x2b09,	// (0x0003a6c7) heading_pane_cp2

0xb55d,	// (0x0004311b) listscroll_fast2_pane

0x5552,	// (0x0003d110) grid_fast2_pane

0x555c,	// (0x0003d11a) listscroll_fast2_pane_g1

0x5564,	// (0x0003d122) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x000477ac) listscroll_fast2_pane_g

0xb7d0,	// (0x0004338e) scroll_pane_cp26

0x556e,	// (0x0003d12c) cell_fast2_pane_ParamLimits

0x556e,	// (0x0003d12c) cell_fast2_pane

0x5583,	// (0x0003d141) cell_fast2_pane_g1

0x558c,	// (0x0003d14a) cell_fast2_pane_g2

0x5595,	// (0x0003d153) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x000477b1) cell_fast2_pane_g

0xb590,	// (0x0004314e) grid_highlight_pane_cp9

0x035a,	// (0x00037f18) main_eswt_pane_ParamLimits

0x035a,	// (0x00037f18) main_eswt_pane

0x550b,	// (0x0003d0c9) list_single_text_info_pane

0x559d,	// (0x0003d15b) eswt_ctrl_button_pane

0x559d,	// (0x0003d15b) eswt_ctrl_canvas_pane

0xcdfd,	// (0x000449bb) eswt_ctrl_combo_pane

0x559d,	// (0x0003d15b) eswt_ctrl_default_pane

0x559d,	// (0x0003d15b) eswt_ctrl_label_pane

0x55ad,	// (0x0003d16b) eswt_ctrl_wait_pane

0xce05,	// (0x000449c3) eswt_shell_pane

0xb28f,	// (0x00042e4d) listscroll_eswt_app_pane

0x55d5,	// (0x0003d193) popup_eswt_tasktip_window_ParamLimits

0x55d5,	// (0x0003d193) popup_eswt_tasktip_window

0x2716,	// (0x0003a2d4) bg_popup_window_pane_cp18

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_ParamLimits

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_ParamLimits

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2

0x5600,	// (0x0003d1be) eswt_control_pane_g3_ParamLimits

0x5600,	// (0x0003d1be) eswt_control_pane_g3

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_ParamLimits

0x560d,	// (0x0003d1cb) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x000477b8) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x000477b8) eswt_control_pane_g

0xb6b1,	// (0x0004326f) bg_button_pane_ParamLimits

0xb6b1,	// (0x0004326f) bg_button_pane

0xb5a5,	// (0x00043163) common_borders_pane_copy2_ParamLimits

0xb5a5,	// (0x00043163) common_borders_pane_copy2

0x561a,	// (0x0003d1d8) control_button_pane_g1_ParamLimits

0x561a,	// (0x0003d1d8) control_button_pane_g1

0x5626,	// (0x0003d1e4) control_button_pane_g2_ParamLimits

0x5626,	// (0x0003d1e4) control_button_pane_g2

0x5632,	// (0x0003d1f0) control_button_pane_g3_ParamLimits

0x5632,	// (0x0003d1f0) control_button_pane_g3

0x0002,

0xfc03,	// (0x000477c1) control_button_pane_g_ParamLimits

0xfc03,	// (0x000477c1) control_button_pane_g

0x5646,	// (0x0003d204) control_button_pane_t1

0x5654,	// (0x0003d212) control_button_pane_t2

0x0001,

0xfc0a,	// (0x000477c8) control_button_pane_t

0x26a2,	// (0x0003a260) bg_button_pane_g1

0x26b2,	// (0x0003a270) bg_button_pane_g2

0x26aa,	// (0x0003a268) bg_button_pane_g3

0x26c2,	// (0x0003a280) bg_button_pane_g4

0x26ba,	// (0x0003a278) bg_button_pane_g5

0x26ca,	// (0x0003a288) bg_button_pane_g6

0x26d2,	// (0x0003a290) bg_button_pane_g7

0x26e2,	// (0x0003a2a0) bg_button_pane_g8

0x26da,	// (0x0003a298) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00047409) bg_button_pane_g

0x4c41,	// (0x0003c7ff) common_borders_pane_ParamLimits

0x4c41,	// (0x0003c7ff) common_borders_pane

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy1_ParamLimits

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy1

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy1_ParamLimits

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy1

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy1_ParamLimits

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy1

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy1_ParamLimits

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy1

0x4c7c,	// (0x0003c83a) bg_eswt_ctrl_canvas_pane_g1

0x4c41,	// (0x0003c7ff) common_borders_pane_cp2_ParamLimits

0x4c41,	// (0x0003c7ff) common_borders_pane_cp2

0x4c41,	// (0x0003c7ff) common_borders_pane_cp3_ParamLimits

0x4c41,	// (0x0003c7ff) common_borders_pane_cp3

0x5662,	// (0x0003d220) separator_horizontal_pane

0x566a,	// (0x0003d228) separator_vertical_pane

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy2_ParamLimits

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy2

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy2_ParamLimits

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy2

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy2_ParamLimits

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy2

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy2_ParamLimits

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy2

0xb28f,	// (0x00042e4d) common_borders_pane_cp4

0x5673,	// (0x0003d231) separator_horizontal_pane_g1

0x567c,	// (0x0003d23a) separator_horizontal_pane_g2

0x5685,	// (0x0003d243) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x000477cd) separator_horizontal_pane_g

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy3_ParamLimits

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy3

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy3_ParamLimits

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy3

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy3_ParamLimits

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy3

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy3_ParamLimits

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy3

0xb28f,	// (0x00042e4d) common_borders_pane_cp5

0x568e,	// (0x0003d24c) separator_vertical_pane_g1

0x5697,	// (0x0003d255) separator_vertical_pane_g2

0x56a0,	// (0x0003d25e) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x000477d4) separator_vertical_pane_g

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy4_ParamLimits

0x55e6,	// (0x0003d1a4) eswt_control_pane_g1_copy4

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy4_ParamLimits

0x55f3,	// (0x0003d1b1) eswt_control_pane_g2_copy4

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy4_ParamLimits

0x5600,	// (0x0003d1be) eswt_control_pane_g3_copy4

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy4_ParamLimits

0x560d,	// (0x0003d1cb) eswt_control_pane_g4_copy4

0xce25,	// (0x000449e3) eswt_ctrl_combo_button_pane

0xce2d,	// (0x000449eb) eswt_ctrl_input_pane

0xce35,	// (0x000449f3) popup_choice_list_window_cp70

0xce3d,	// (0x000449fb) eswt_ctrl_input_pane_t1

0xb28f,	// (0x00042e4d) input_focus_pane_cp70

0x4c41,	// (0x0003c7ff) bg_button_pane_cp70_ParamLimits

0x4c41,	// (0x0003c7ff) bg_button_pane_cp70

0xce4b,	// (0x00044a09) eswt_ctrl_combo_button_pane_g1

0x56d7,	// (0x0003d295) wait_bar_pane_cp70

0x2716,	// (0x0003a2d4) bg_popup_window_pane_cp70_ParamLimits

0x2716,	// (0x0003a2d4) bg_popup_window_pane_cp70

0x56df,	// (0x0003d29d) popup_eswt_tasktip_window_t1

0x56f5,	// (0x0003d2b3) wait_bar_pane_cp71_ParamLimits

0x56f5,	// (0x0003d2b3) wait_bar_pane_cp71

0x5701,	// (0x0003d2bf) grid_eswt_app_pane

0xb9b7,	// (0x00043575) scroll_pane_cp70

0xce53,	// (0x00044a11) cell_eswt_app_pane_ParamLimits

0xce53,	// (0x00044a11) cell_eswt_app_pane

0xce7d,	// (0x00044a3b) cell_eswt_app_pane_g1_ParamLimits

0xce7d,	// (0x00044a3b) cell_eswt_app_pane_g1

0xceac,	// (0x00044a6a) cell_eswt_app_pane_g2_ParamLimits

0xceac,	// (0x00044a6a) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x000477db) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x000477db) cell_eswt_app_pane_g

0xced0,	// (0x00044a8e) cell_eswt_app_pane_t1_ParamLimits

0xced0,	// (0x00044a8e) cell_eswt_app_pane_t1

0x57bf,	// (0x0003d37d) grid_highlight_pane_cp70_ParamLimits

0x57bf,	// (0x0003d37d) grid_highlight_pane_cp70

0xf449,	// (0x00047007) set_content_pane_g1

0x9d2c,	// (0x000418ea) status_small_volume_pane

0xaa4d,	// (0x0004260b) status_small_volume_pane_g1

0xaa55,	// (0x00042613) volume_small2_pane

0xaa5e,	// (0x0004261c) volume_small2_pane_g1

0xaa67,	// (0x00042625) volume_small2_pane_g2

0xaa70,	// (0x0004262e) volume_small2_pane_g3

0xaa79,	// (0x00042637) volume_small2_pane_g4

0xaa82,	// (0x00042640) volume_small2_pane_g5

0xaa8b,	// (0x00042649) volume_small2_pane_g6

0xaa94,	// (0x00042652) volume_small2_pane_g7

0xaa9d,	// (0x0004265b) volume_small2_pane_g8

0xaaa6,	// (0x00042664) volume_small2_pane_g9

0xaaaf,	// (0x0004266d) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x000477e0) volume_small2_pane_g

0x5034,	// (0x0003cbf2) fep_vkb_top_text_pane_g1_ParamLimits

0xcd5d,	// (0x0004491b) fep_vkb_top_text_pane_t1_ParamLimits

0x52c9,	// (0x0003ce87) popup_preview_fixed_window_g3_ParamLimits

0x52c9,	// (0x0003ce87) popup_preview_fixed_window_g3

0xa5bf,	// (0x0004217d) popup_toolbar_trans_pane

0xc660,	// (0x0004421e) aid_height_set_list_ParamLimits

0x3a5d,	// (0x0003b61b) aid_size_parent_ParamLimits

0x217b,	// (0x00039d39) list_highlight_pane_cp2_ParamLimits

0xf449,	// (0x00047007) set_content_pane_g1_ParamLimits

0xc7d9,	// (0x00044397) list_single_image_pane_ParamLimits

0xc7d9,	// (0x00044397) list_single_image_pane

0xcf02,	// (0x00044ac0) aid_size_cell_image_ParamLimits

0xcf02,	// (0x00044ac0) aid_size_cell_image

0xcf0f,	// (0x00044acd) grid_single_image_pane_ParamLimits

0xcf0f,	// (0x00044acd) grid_single_image_pane

0x57e6,	// (0x0003d3a4) list_single_image_pane_g1_ParamLimits

0x57e6,	// (0x0003d3a4) list_single_image_pane_g1

0x57f2,	// (0x0003d3b0) list_single_image_pane_g2_ParamLimits

0x57f2,	// (0x0003d3b0) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x000477f5) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x000477f5) list_single_image_pane_g

0x5806,	// (0x0003d3c4) list_single_image_pane_t1_ParamLimits

0x5806,	// (0x0003d3c4) list_single_image_pane_t1

0xcf1b,	// (0x00044ad9) cell_image_list_pane_ParamLimits

0xcf1b,	// (0x00044ad9) cell_image_list_pane

0xcf2f,	// (0x00044aed) cell_image_list_pane_g1

0xcf38,	// (0x00044af6) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x000477fa) cell_image_list_pane_g

0xcf41,	// (0x00044aff) aid_size_cell_tb_trans_pane

0xb6b1,	// (0x0004326f) bg_tb_trans_pane

0xcf53,	// (0x00044b11) grid_tb_trans_pane

0x26a2,	// (0x0003a260) bg_tb_trans_pane_g1

0x26b2,	// (0x0003a270) bg_tb_trans_pane_g2

0x26aa,	// (0x0003a268) bg_tb_trans_pane_g3

0x26c2,	// (0x0003a280) bg_tb_trans_pane_g4

0x26ba,	// (0x0003a278) bg_tb_trans_pane_g5

0x26e2,	// (0x0003a2a0) bg_tb_trans_pane_g6

0x26da,	// (0x0003a298) bg_tb_trans_pane_g7

0x26ca,	// (0x0003a288) bg_tb_trans_pane_g8

0x26d2,	// (0x0003a290) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x000477ff) bg_tb_trans_pane_g

0xcf67,	// (0x00044b25) cell_toolbar_trans_pane_ParamLimits

0xcf67,	// (0x00044b25) cell_toolbar_trans_pane

0x4c7c,	// (0x0003c83a) cell_toolbar_trans_pane_g1

0xcaa2,	// (0x00044660) list_form2_midp_pane_t1

0xcab0,	// (0x0004466e) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x0004769c) list_form2_midp_pane_t

0x4863,	// (0x0003c421) scroll_pane_cp51_ParamLimits

0x4a1f,	// (0x0003c5dd) form2_midp_wait_pane_g1

0x4a28,	// (0x0003c5e6) form2_midp_wait_pane_g2

0x4a31,	// (0x0003c5ef) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x000476b1) form2_midp_wait_pane_g

0xb2ff,	// (0x00042ebd) list_highlight_pane_cp21_ParamLimits

0x4a79,	// (0x0003c637) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4a88,	// (0x0003c646) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd529,	// (0x000450e7) list_single_2graphic_im_pane_ParamLimits

0xd529,	// (0x000450e7) list_single_2graphic_im_pane

0xcf8d,	// (0x00044b4b) list_single_2graphic_im_pane_g1_ParamLimits

0xcf8d,	// (0x00044b4b) list_single_2graphic_im_pane_g1

0xcf9e,	// (0x00044b5c) list_single_2graphic_im_pane_g2_ParamLimits

0xcf9e,	// (0x00044b5c) list_single_2graphic_im_pane_g2

0xcfaa,	// (0x00044b68) list_single_2graphic_im_pane_g3_ParamLimits

0xcfaa,	// (0x00044b68) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00047812) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00047812) list_single_2graphic_im_pane_g

0xcfbe,	// (0x00044b7c) list_single_2graphic_im_pane_t1_ParamLimits

0xcfbe,	// (0x00044b7c) list_single_2graphic_im_pane_t1

0x52d5,	// (0x0003ce93) list_single_graphic_2heading_pane_fp_ParamLimits

0x52d5,	// (0x0003ce93) list_single_graphic_2heading_pane_fp

0xd8f2,	// (0x000454b0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd8f2,	// (0x000454b0) list_single_graphic_2heading_pane_fp_g1

0x52eb,	// (0x0003cea9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x52eb,	// (0x0003cea9) list_single_graphic_2heading_pane_fp_g2

0xd8bb,	// (0x00045479) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd8bb,	// (0x00045479) list_single_graphic_2heading_pane_fp_g3

0xd8c7,	// (0x00045485) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd8c7,	// (0x00045485) list_single_graphic_2heading_pane_fp_g4

0x52f7,	// (0x0003ceb5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x52f7,	// (0x0003ceb5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00047739) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00047739) list_single_graphic_2heading_pane_fp_g

0xda8c,	// (0x0004564a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xda8c,	// (0x0004564a) list_single_graphic_2heading_pane_fp_t1

0xd92a,	// (0x000454e8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd92a,	// (0x000454e8) list_single_graphic_2heading_pane_fp_t2

0xdaa2,	// (0x00045660) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdaa2,	// (0x00045660) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0004781b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0004781b) list_single_graphic_2heading_pane_fp_t

0x4d08,	// (0x0003c8c6) fep_hwr_write_pane_g5_ParamLimits

0x4d08,	// (0x0003c8c6) fep_hwr_write_pane_g5

0x4d14,	// (0x0003c8d2) fep_hwr_write_pane_g6_ParamLimits

0x4d14,	// (0x0003c8d2) fep_hwr_write_pane_g6

0xce05,	// (0x000449c3) eswt_shell_pane_ParamLimits

0x2716,	// (0x0003a2d4) bg_popup_window_pane_cp18_ParamLimits

0x39a5,	// (0x0003b563) heading_pane_cp70

0x56df,	// (0x0003d29d) popup_eswt_tasktip_window_t1_ParamLimits

0xa6dc,	// (0x0004229a) aid_touch_tab_arrow_left

0xa6f2,	// (0x000422b0) aid_touch_tab_arrow_right

0x8b89,	// (0x00040747) title_pane_g3_ParamLimits

0x8b89,	// (0x00040747) title_pane_g3

0xb679,	// (0x00043237) set_value_pane_g1

0xa5bf,	// (0x0004217d) popup_toolbar_trans_pane_ParamLimits

0xcf41,	// (0x00044aff) aid_size_cell_tb_trans_pane_ParamLimits

0xb6b1,	// (0x0004326f) bg_tb_trans_pane_ParamLimits

0xcf53,	// (0x00044b11) grid_tb_trans_pane_ParamLimits

0xb429,	// (0x00042fe7) cont_note_pane_ParamLimits

0xb429,	// (0x00042fe7) cont_note_pane

0xb5a5,	// (0x00043163) cont_snote2_single_text_pane_ParamLimits

0xb5a5,	// (0x00043163) cont_snote2_single_text_pane

0xb5a5,	// (0x00043163) cont_snote2_single_graphic_pane_ParamLimits

0xb5a5,	// (0x00043163) cont_snote2_single_graphic_pane

0x2d28,	// (0x0003a8e6) cont_note_wait_pane_ParamLimits

0x2d28,	// (0x0003a8e6) cont_note_wait_pane

0x2d28,	// (0x0003a8e6) cont_note_image_pane_ParamLimits

0x2d28,	// (0x0003a8e6) cont_note_image_pane

0x58fc,	// (0x0003d4ba) popup_note2_window_g1_ParamLimits

0x58fc,	// (0x0003d4ba) popup_note2_window_g1

0xcffc,	// (0x00044bba) popup_note2_window_t1_ParamLimits

0xcffc,	// (0x00044bba) popup_note2_window_t1

0xd041,	// (0x00044bff) popup_note2_window_t2_ParamLimits

0xd041,	// (0x00044bff) popup_note2_window_t2

0xd086,	// (0x00044c44) popup_note2_window_t3_ParamLimits

0xd086,	// (0x00044c44) popup_note2_window_t3

0x59fc,	// (0x0003d5ba) popup_note2_window_t4_ParamLimits

0x59fc,	// (0x0003d5ba) popup_note2_window_t4

0xb4ad,	// (0x0004306b) popup_note2_window_t5_ParamLimits

0xb4ad,	// (0x0004306b) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00047827) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00047827) popup_note2_window_t

0x5a2b,	// (0x0003d5e9) popup_note2_image_window_g1_ParamLimits

0x5a2b,	// (0x0003d5e9) popup_note2_image_window_g1

0xd0cb,	// (0x00044c89) popup_note2_image_window_g2_ParamLimits

0xd0cb,	// (0x00044c89) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00047832) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00047832) popup_note2_image_window_g

0x5a49,	// (0x0003d607) popup_note2_image_window_t1_ParamLimits

0x5a49,	// (0x0003d607) popup_note2_image_window_t1

0x5a61,	// (0x0003d61f) popup_note2_image_window_t2_ParamLimits

0x5a61,	// (0x0003d61f) popup_note2_image_window_t2

0x5a79,	// (0x0003d637) popup_note2_image_window_t3_ParamLimits

0x5a79,	// (0x0003d637) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00047837) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00047837) popup_note2_image_window_t

0x2d36,	// (0x0003a8f4) popup_note2_wait_window_g1_ParamLimits

0x2d36,	// (0x0003a8f4) popup_note2_wait_window_g1

0x2d42,	// (0x0003a900) popup_note2_wait_window_g2_ParamLimits

0x2d42,	// (0x0003a900) popup_note2_wait_window_g2

0x2d4e,	// (0x0003a90c) popup_note2_wait_window_g3_ParamLimits

0x2d4e,	// (0x0003a90c) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x000473eb) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x000473eb) popup_note2_wait_window_g

0x5a95,	// (0x0003d653) popup_note2_wait_window_t1_ParamLimits

0x5a95,	// (0x0003d653) popup_note2_wait_window_t1

0x5ab3,	// (0x0003d671) popup_note2_wait_window_t2_ParamLimits

0x5ab3,	// (0x0003d671) popup_note2_wait_window_t2

0x5ad1,	// (0x0003d68f) popup_note2_wait_window_t3_ParamLimits

0x5ad1,	// (0x0003d68f) popup_note2_wait_window_t3

0x5ae3,	// (0x0003d6a1) popup_note2_wait_window_t4_ParamLimits

0x5ae3,	// (0x0003d6a1) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0004783e) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0004783e) popup_note2_wait_window_t

0x5af5,	// (0x0003d6b3) wait_bar2_pane_ParamLimits

0x5af5,	// (0x0003d6b3) wait_bar2_pane

0x5b0d,	// (0x0003d6cb) popup_snote2_single_text_window_g1_ParamLimits

0x5b0d,	// (0x0003d6cb) popup_snote2_single_text_window_g1

0x5b35,	// (0x0003d6f3) popup_snote2_single_text_window_t1_ParamLimits

0x5b35,	// (0x0003d6f3) popup_snote2_single_text_window_t1

0x5b81,	// (0x0003d73f) popup_snote2_single_text_window_t2_ParamLimits

0x5b81,	// (0x0003d73f) popup_snote2_single_text_window_t2

0x5bcd,	// (0x0003d78b) popup_snote2_single_text_window_t3_ParamLimits

0x5bcd,	// (0x0003d78b) popup_snote2_single_text_window_t3

0x5c0e,	// (0x0003d7cc) popup_snote2_single_text_window_t4_ParamLimits

0x5c0e,	// (0x0003d7cc) popup_snote2_single_text_window_t4

0x5c44,	// (0x0003d802) popup_snote2_single_text_window_t5_ParamLimits

0x5c44,	// (0x0003d802) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00047847) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00047847) popup_snote2_single_text_window_t

0xd0dd,	// (0x00044c9b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0dd,	// (0x00044c9b) popup_snote2_single_graphic_window_g1

0x5c97,	// (0x0003d855) popup_snote2_single_graphic_window_g2_ParamLimits

0x5c97,	// (0x0003d855) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00047852) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00047852) popup_snote2_single_graphic_window_g

0x5cbf,	// (0x0003d87d) popup_snote2_single_graphic_window_t1_ParamLimits

0x5cbf,	// (0x0003d87d) popup_snote2_single_graphic_window_t1

0x5d0b,	// (0x0003d8c9) popup_snote2_single_graphic_window_t2_ParamLimits

0x5d0b,	// (0x0003d8c9) popup_snote2_single_graphic_window_t2

0x5bcd,	// (0x0003d78b) popup_snote2_single_graphic_window_t3_ParamLimits

0x5bcd,	// (0x0003d78b) popup_snote2_single_graphic_window_t3

0x5c0e,	// (0x0003d7cc) popup_snote2_single_graphic_window_t4_ParamLimits

0x5c0e,	// (0x0003d7cc) popup_snote2_single_graphic_window_t4

0x5c44,	// (0x0003d802) popup_snote2_single_graphic_window_t5_ParamLimits

0x5c44,	// (0x0003d802) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00047857) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00047857) popup_snote2_single_graphic_window_t

0x4720,	// (0x0003c2de) clock_nsta_pane_cp2_t1

0x4720,	// (0x0003c2de) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00047672) clock_nsta_pane_cp2_t

0x95ae,	// (0x0004116c) form_field_data_wide_pane_g1_ParamLimits

0xb6bf,	// (0x0004327d) form_field_data_wide_pane_g2_ParamLimits

0xb6bf,	// (0x0004327d) form_field_data_wide_pane_g2

0xb6cb,	// (0x00043289) form_field_data_wide_pane_g3_ParamLimits

0xb6cb,	// (0x00043289) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0004722a) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0004722a) form_field_data_wide_pane_g

0xc9c5,	// (0x00044583) grid_touch_3_pane_ParamLimits

0xc9c5,	// (0x00044583) grid_touch_3_pane

0xd105,	// (0x00044cc3) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00044cc3) cell_touch_3_pane

0x4c7c,	// (0x0003c83a) cell_touch_3_pane_g1

0x4c7c,	// (0x0003c83a) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x000476f7) cell_touch_3_pane_g

0xb4df,	// (0x0004309d) cont_query_data_pane

0xb4e7,	// (0x000430a5) cont_query_data_pane_cp1

0x5d85,	// (0x0003d943) button_value_adjust_pane_cp7

0x5d8d,	// (0x0003d94b) query_popup_pane_cp3

0xbb45,	// (0x00043703) bg_popup_sub_pane_cp22_ParamLimits

0x9a0e,	// (0x000415cc) navi_navi_volume_pane_cp2

0x9a1d,	// (0x000415db) popup_side_volume_key_window_g2

0x9a2c,	// (0x000415ea) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x000472c0) popup_side_volume_key_window_g

0x9a3b,	// (0x000415f9) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x000472c7) popup_side_volume_key_window_t

0x9b76,	// (0x00041734) popup_side_volume_key_window_ParamLimits

0x9280,	// (0x00040e3e) list_double_graphic_pane_g4_ParamLimits

0x9280,	// (0x00040e3e) list_double_graphic_pane_g4

0xa951,	// (0x0004250f) list_single_2heading_msg_pane_ParamLimits

0xa951,	// (0x0004250f) list_single_2heading_msg_pane

0xaab8,	// (0x00042676) list_single_2heading_msg_pane_g1_ParamLimits

0xaab8,	// (0x00042676) list_single_2heading_msg_pane_g1

0xaac4,	// (0x00042682) list_single_2heading_msg_pane_g2_ParamLimits

0xaac4,	// (0x00042682) list_single_2heading_msg_pane_g2

0xaad7,	// (0x00042695) list_single_2heading_msg_pane_g3_ParamLimits

0xaad7,	// (0x00042695) list_single_2heading_msg_pane_g3

0xdac2,	// (0x00045680) list_single_2heading_msg_pane_g4_ParamLimits

0xdac2,	// (0x00045680) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x00047862) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x00047862) list_single_2heading_msg_pane_g

0xdada,	// (0x00045698) list_single_2heading_msg_pane_t1_ParamLimits

0xdada,	// (0x00045698) list_single_2heading_msg_pane_t1

0xaae3,	// (0x000426a1) list_single_2heading_msg_pane_t2_ParamLimits

0xaae3,	// (0x000426a1) list_single_2heading_msg_pane_t2

0xab4e,	// (0x0004270c) list_single_2heading_msg_pane_t3_ParamLimits

0xab4e,	// (0x0004270c) list_single_2heading_msg_pane_t3

0xdb02,	// (0x000456c0) list_single_2heading_msg_pane_t4_ParamLimits

0xdb02,	// (0x000456c0) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0004786b) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0004786b) list_single_2heading_msg_pane_t

0xb2ad,	// (0x00042e6b) title_pane_g4_ParamLimits

0xb2ad,	// (0x00042e6b) title_pane_g4

0xeed9,	// (0x00046a97) title_pane_stacon_g3_ParamLimits

0xeed9,	// (0x00046a97) title_pane_stacon_g3

0x58bf,	// (0x0003d47d) list_single_2graphic_im_pane_g4_ParamLimits

0x58bf,	// (0x0003d47d) list_single_2graphic_im_pane_g4

0xc50d,	// (0x000440cb) popup_side_volume_key_window_cp

0x3f7d,	// (0x0003bb3b) main_idle_act2_pane_t1

0x0933,	// (0x000384f1) toolbar_button_pane_g10

0x9193,	// (0x00040d51) popup_toolbar_window_cp1

0x4711,	// (0x0003c2cf) clock_nsta_pane_cp_t1

0x4711,	// (0x0003c2cf) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x0004766d) clock_nsta_pane_cp_t

0x9a0e,	// (0x000415cc) navi_navi_volume_pane_cp2_ParamLimits

0xf133,	// (0x00046cf1) popup_side_volume_key_window_g1_ParamLimits

0x9a1d,	// (0x000415db) popup_side_volume_key_window_g2_ParamLimits

0x9a2c,	// (0x000415ea) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x000472c0) popup_side_volume_key_window_g_ParamLimits

0x0f36,	// (0x00038af4) fep_hwr_aid_pane

0x0fdd,	// (0x00038b9b) bg_fep_hwr_top_pane_g4_ParamLimits

0x4cd8,	// (0x0003c896) fep_hwr_top_pane_g1_ParamLimits

0x4cea,	// (0x0003c8a8) fep_hwr_top_pane_g2_ParamLimits

0x0ffd,	// (0x00038bbb) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x000476c2) fep_hwr_top_pane_g_ParamLimits

0x1012,	// (0x00038bd0) fep_hwr_top_text_pane_ParamLimits

0x3532,	// (0x0003b0f0) aid_touch_tab_arrow_arrow_2

0x353b,	// (0x0003b0f9) aid_touch_tab_arrow_left_2

0x0f4a,	// (0x00038b08) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f81,	// (0x00038b3f) fep_hwr_prediction_pane

0x4e43,	// (0x0003ca01) fep_vkb_prediction_pane

0xcd3d,	// (0x000448fb) fep_vkb_side_pane_g3_ParamLimits

0xcd3d,	// (0x000448fb) fep_vkb_side_pane_g3

0x118d,	// (0x00038d4b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x11f9,	// (0x00038db7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1206,	// (0x00038dc4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00047771) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x13f0,	// (0x00038fae) fep_hwr_prediction_pane_g1

0x13fa,	// (0x00038fb8) fep_hwr_prediction_pane_g2

0x1402,	// (0x00038fc0) fep_hwr_prediction_pane_g3

0x140a,	// (0x00038fc8) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00047874) fep_hwr_prediction_pane_g

0x5db2,	// (0x0003d970) fep_vkb_prediction_pane_g1

0x5dbc,	// (0x0003d97a) fep_vkb_prediction_pane_g2

0x5dc4,	// (0x0003d982) fep_vkb_prediction_pane_g3

0x5dcc,	// (0x0003d98a) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0004787d) fep_vkb_prediction_pane_g

0xa8a3,	// (0x00042461) slider_set_pane_g3

0xa8b7,	// (0x00042475) slider_set_pane_g4

0xa8cf,	// (0x0004248d) slider_set_pane_g5

0xa8a3,	// (0x00042461) slider_set_pane_g6

0xa8e5,	// (0x000424a3) slider_set_pane_g7

0x3bbe,	// (0x0003b77c) slider_form_pane_g3

0x3bc7,	// (0x0003b785) slider_form_pane_g4

0x3bcf,	// (0x0003b78d) slider_form_pane_g5

0x3bbe,	// (0x0003b77c) slider_form_pane_g6

0xc7ab,	// (0x00044369) slider_form_pane_g7

0x4228,	// (0x0003bde6) slider_set_pane_vc_g3

0x4231,	// (0x0003bdef) slider_set_pane_vc_g4

0x423a,	// (0x0003bdf8) slider_set_pane_vc_g5

0x4228,	// (0x0003bde6) slider_set_pane_vc_g6

0x4243,	// (0x0003be01) slider_set_pane_vc_g7

0x43f5,	// (0x0003bfb3) slider_form_pane_vc_g1

0x43fe,	// (0x0003bfbc) slider_form_pane_vc_g2

0x4407,	// (0x0003bfc5) slider_form_pane_vc_g3

0x43f5,	// (0x0003bfb3) slider_form_pane_vc_g4

0x4410,	// (0x0003bfce) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x0004763f) slider_form_pane_vc_g

0xeda5,	// (0x00046963) main_idle_act3_pane

0x5dd4,	// (0x0003d992) ai3_links_pane

0xd14e,	// (0x00044d0c) popup_ai3_data_window_ParamLimits

0xd14e,	// (0x00044d0c) popup_ai3_data_window

0xb28f,	// (0x00042e4d) grid_ai3_links_pane

0xd166,	// (0x00044d24) cell_ai3_links_pane_ParamLimits

0xd166,	// (0x00044d24) cell_ai3_links_pane

0x5e0d,	// (0x0003d9cb) bg_popup_sub_pane_cp11

0x5e1a,	// (0x0003d9d8) cell_ai3_links_pane_g1

0xb28f,	// (0x00042e4d) bg_popup_sub_pane_cp12

0x5e3f,	// (0x0003d9fd) heading_ai3_data_pane

0x5e47,	// (0x0003da05) list_ai3_gene_pane

0x5e53,	// (0x0003da11) popup_ai3_data_window_g1

0x5e5b,	// (0x0003da19) heading_ai3_data_pane_g1

0x5e63,	// (0x0003da21) heading_ai3_data_pane_t1

0xd180,	// (0x00044d3e) list_double_ai3_gene_pane_ParamLimits

0xd180,	// (0x00044d3e) list_double_ai3_gene_pane

0x5e7e,	// (0x0003da3c) list_single_ai3_gene_pane_ParamLimits

0x5e7e,	// (0x0003da3c) list_single_ai3_gene_pane

0x4c41,	// (0x0003c7ff) list_highlight_pane_cp7_ParamLimits

0x4c41,	// (0x0003c7ff) list_highlight_pane_cp7

0x5e8b,	// (0x0003da49) list_single_a13_gene_pane_t1_ParamLimits

0x5e8b,	// (0x0003da49) list_single_a13_gene_pane_t1

0x5ea2,	// (0x0003da60) list_single_ai3_gene_pane_g1

0x5eab,	// (0x0003da69) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x00047886) list_single_ai3_gene_pane_g

0x5eb3,	// (0x0003da71) list_double_ai3_gene_pane_g1_ParamLimits

0x5eb3,	// (0x0003da71) list_double_ai3_gene_pane_g1

0xd18d,	// (0x00044d4b) list_double_ai3_gene_pane_t1_ParamLimits

0xd18d,	// (0x00044d4b) list_double_ai3_gene_pane_t1

0x5edb,	// (0x0003da99) list_double_ai3_gene_pane_t2_ParamLimits

0x5edb,	// (0x0003da99) list_double_ai3_gene_pane_t2

0x5ef0,	// (0x0003daae) list_double_ai3_gene_pane_t3_ParamLimits

0x5ef0,	// (0x0003daae) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0004788b) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0004788b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdab8,	// (0x00045676) aid_size_min_col_2

0xd138,	// (0x00044cf6) aid_size_min_msg_ParamLimits

0xd138,	// (0x00044cf6) aid_size_min_msg

0xcd51,	// (0x0004490f) fep_vkb_top_text_pane_g2_ParamLimits

0xcd51,	// (0x0004490f) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x000476f2) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x000476f2) fep_vkb_top_text_pane_g

0xeda5,	// (0x00046963) main_hc_apps_shell_pane

0x5f0d,	// (0x0003dacb) grid_hc_apps_pane_ParamLimits

0x5f0d,	// (0x0003dacb) grid_hc_apps_pane

0x5f1c,	// (0x0003dada) list_hc_apps_pane

0x5f24,	// (0x0003dae2) scroll_pane_cp37_ParamLimits

0x5f24,	// (0x0003dae2) scroll_pane_cp37

0xd1a9,	// (0x00044d67) cell_hc_apps_pane_ParamLimits

0xd1a9,	// (0x00044d67) cell_hc_apps_pane

0xd267,	// (0x00044e25) cell_hc_apps_pane_g1_ParamLimits

0xd267,	// (0x00044e25) cell_hc_apps_pane_g1

0x600f,	// (0x0003dbcd) cell_hc_apps_pane_g2_ParamLimits

0x600f,	// (0x0003dbcd) cell_hc_apps_pane_g2

0x602b,	// (0x0003dbe9) cell_hc_apps_pane_g3_ParamLimits

0x602b,	// (0x0003dbe9) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x00047892) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x00047892) cell_hc_apps_pane_g

0xd294,	// (0x00044e52) cell_hc_apps_pane_t1_ParamLimits

0xd294,	// (0x00044e52) cell_hc_apps_pane_t1

0xb429,	// (0x00042fe7) grid_highlight_pane_cp10_ParamLimits

0xb429,	// (0x00042fe7) grid_highlight_pane_cp10

0xd2d2,	// (0x00044e90) list_single_hc_apps_pane_ParamLimits

0xd2d2,	// (0x00044e90) list_single_hc_apps_pane

0xdb27,	// (0x000456e5) list_single_hc_apps_pane_g1

0xabbc,	// (0x0004277a) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x00047899) list_single_hc_apps_pane_g

0xabd5,	// (0x00042793) list_single_hc_apps_pane_g2_copy1

0xabf1,	// (0x000427af) list_single_hc_apps_pane_t1

0xb2ff,	// (0x00042ebd) bg_set_opt_pane_cp_ParamLimits

0x8c5d,	// (0x0004081b) setting_slider_pane_t1_ParamLimits

0x8c76,	// (0x00040834) setting_slider_pane_t2_ParamLimits

0x8c90,	// (0x0004084e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004711c) setting_slider_pane_t_ParamLimits

0x8ca8,	// (0x00040866) slider_set_pane_ParamLimits

0x0246,	// (0x00037e04) control_pane_g5_ParamLimits

0x0246,	// (0x00037e04) control_pane_g5

0xc62d,	// (0x000441eb) slider_set_pane_g1_ParamLimits

0x0c5a,	// (0x00038818) slider_set_pane_g2_ParamLimits

0xa8a3,	// (0x00042461) slider_set_pane_g3_ParamLimits

0xa8b7,	// (0x00042475) slider_set_pane_g4_ParamLimits

0xa8cf,	// (0x0004248d) slider_set_pane_g5_ParamLimits

0xa8a3,	// (0x00042461) slider_set_pane_g6_ParamLimits

0xa8e5,	// (0x000424a3) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00047507) slider_set_pane_g_ParamLimits

0xf3f4,	// (0x00046fb2) navi_icon_text_pane_ParamLimits

0xa6a5,	// (0x00042263) aid_fill_nsta_2_ParamLimits

0xa6dc,	// (0x0004229a) aid_touch_tab_arrow_left_ParamLimits

0xa6f2,	// (0x000422b0) aid_touch_tab_arrow_right_ParamLimits

0xbcb5,	// (0x00043873) clock_nsta_pane_ParamLimits

0x3514,	// (0x0003b0d2) navi_icon_pane_g1_ParamLimits

0x3520,	// (0x0003b0de) navi_text_pane_t1_ParamLimits

0x4821,	// (0x0003c3df) navi_icon_text_pane_g1_ParamLimits

0x482d,	// (0x0003c3eb) navi_icon_text_pane_t1_ParamLimits

0xdb27,	// (0x000456e5) list_single_hc_apps_pane_g1_ParamLimits

0xabbc,	// (0x0004277a) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x00047899) list_single_hc_apps_pane_g_ParamLimits

0xabd5,	// (0x00042793) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xabf1,	// (0x000427af) list_single_hc_apps_pane_t1_ParamLimits

0x8a8e,	// (0x0004064c) popup_toolbar2_fixed_window_ParamLimits

0x8a8e,	// (0x0004064c) popup_toolbar2_fixed_window

0xa5b5,	// (0x00042173) popup_toolbar2_float_window

0xb28f,	// (0x00042e4d) bg_popup_sub_pane_cp27

0x612a,	// (0x0003dce8) grid_toolbar2_float_pane

0xb28f,	// (0x00042e4d) bg_popup_sub_pane_cp26

0x612a,	// (0x0003dce8) grid_toolbar2_fixed_pane

0xdb40,	// (0x000456fe) cell_toolbar2_fixed_pane_ParamLimits

0xdb40,	// (0x000456fe) cell_toolbar2_fixed_pane

0xdb5a,	// (0x00045718) cell_toolbar2_fixed_pane_g1

0x0709,	// (0x000382c7) toolbar2_fixed_button_pane

0x26a2,	// (0x0003a260) toolbar2_fixed_button_pane_g1

0x26b2,	// (0x0003a270) toolbar2_fixed_button_pane_g2

0x26aa,	// (0x0003a268) toolbar2_fixed_button_pane_g3

0x26c2,	// (0x0003a280) toolbar2_fixed_button_pane_g4

0x26ba,	// (0x0003a278) toolbar2_fixed_button_pane_g5

0x26ca,	// (0x0003a288) toolbar2_fixed_button_pane_g6

0x26d2,	// (0x0003a290) toolbar2_fixed_button_pane_g7

0x26e2,	// (0x0003a2a0) toolbar2_fixed_button_pane_g8

0x26da,	// (0x0003a298) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00047409) toolbar2_fixed_button_pane_g

0x614b,	// (0x0003dd09) cell_toolbar2_float_pane_ParamLimits

0x614b,	// (0x0003dd09) cell_toolbar2_float_pane

0x615c,	// (0x0003dd1a) cell_toolbar2_float_pane_g1

0x0709,	// (0x000382c7) toolbar2_fixed_button_pane_cp

0xcc39,	// (0x000447f7) fep_vkb_accented_list_pane_ParamLimits

0xcc39,	// (0x000447f7) fep_vkb_accented_list_pane

0x116d,	// (0x00038d2b) bg_popup_fep_shadow_pane_g9

0xf546,	// (0x00047104) bg_popup_fep_shadow_pane_cp3

0xb7b7,	// (0x00043375) list_accented_list_pane

0x6165,	// (0x0003dd23) list_single_accented_list_pane_ParamLimits

0x6165,	// (0x0003dd23) list_single_accented_list_pane

0xf546,	// (0x00047104) list_highlight_pane_cp10

0x6176,	// (0x0003dd34) list_single_accented_list_pane_t1

0xa4df,	// (0x0004209d) popup_slider_window_ParamLimits

0xa4df,	// (0x0004209d) popup_slider_window

0x5d95,	// (0x0003d953) aid_indentation_list_msg

0xdc4b,	// (0x00045809) bg_popup_window_pane_cp19

0x629c,	// (0x0003de5a) popup_slider_window_g1

0x62b8,	// (0x0003de76) popup_slider_window_g2

0x62d4,	// (0x0003de92) popup_slider_window_g3

0x0005,

0xfce0,	// (0x0004789e) popup_slider_window_g

0x633a,	// (0x0003def8) popup_slider_window_t1

0x63ae,	// (0x0003df6c) small_volume_slider_vertical_pane

0x4c7c,	// (0x0003c83a) small_volume_slider_vertical_pane_g1

0x4c7c,	// (0x0003c83a) small_volume_slider_vertical_pane_g2

0x63ca,	// (0x0003df88) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x000478b0) small_volume_slider_vertical_pane_g

0x89dc,	// (0x0004059a) area_side_right_pane_ParamLimits

0x89dc,	// (0x0004059a) area_side_right_pane

0xac1f,	// (0x000427dd) aid_size_side_button_ParamLimits

0xac1f,	// (0x000427dd) aid_size_side_button

0xac38,	// (0x000427f6) grid_sctrl_middle_pane_ParamLimits

0xac38,	// (0x000427f6) grid_sctrl_middle_pane

0x14a8,	// (0x00039066) sctrl_sk_bottom_pane

0x14b9,	// (0x00039077) sctrl_sk_top_pane

0x14cb,	// (0x00039089) aid_touch_sctrl_top

0x14d8,	// (0x00039096) bg_sctrl_sk_pane_ParamLimits

0x14d8,	// (0x00039096) bg_sctrl_sk_pane

0x14e6,	// (0x000390a4) sctrl_sk_top_pane_g1

0x14f3,	// (0x000390b1) sctrl_sk_top_pane_t1

0x14cb,	// (0x00039089) aid_touch_sctrl_bottom

0x14d8,	// (0x00039096) bg_sctrl_sk_pane_cp_ParamLimits

0x14d8,	// (0x00039096) bg_sctrl_sk_pane_cp

0x150e,	// (0x000390cc) sctrl_sk_bottom_pane_g1

0x14f3,	// (0x000390b1) sctrl_sk_bottom_pane_t1

0xac52,	// (0x00042810) cell_sctrl_middle_pane_ParamLimits

0xac52,	// (0x00042810) cell_sctrl_middle_pane

0xac63,	// (0x00042821) aid_touch_sctrl_middle_ParamLimits

0xac63,	// (0x00042821) aid_touch_sctrl_middle

0xac70,	// (0x0004282e) bg_sctrl_middle_pane_ParamLimits

0xac70,	// (0x0004282e) bg_sctrl_middle_pane

0x1b7b,	// (0x00039739) cell_sctrl_middle_pane_g1_ParamLimits

0x1b7b,	// (0x00039739) cell_sctrl_middle_pane_g1

0xac7e,	// (0x0004283c) cell_sctrl_middle_pane_g2_ParamLimits

0xac7e,	// (0x0004283c) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x000478bc) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x000478bc) cell_sctrl_middle_pane_g

0x26a2,	// (0x0003a260) bg_sctrl_middle_pane_g1

0x26aa,	// (0x0003a268) bg_sctrl_middle_pane_g2

0x26b2,	// (0x0003a270) bg_sctrl_middle_pane_g3

0x26ba,	// (0x0003a278) bg_sctrl_middle_pane_g4

0x26c2,	// (0x0003a280) bg_sctrl_middle_pane_g5

0x26ca,	// (0x0003a288) bg_sctrl_middle_pane_g6

0x26d2,	// (0x0003a290) bg_sctrl_middle_pane_g7

0x26da,	// (0x0003a298) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x000478c1) bg_sctrl_middle_pane_g

0x26e2,	// (0x0003a2a0) bg_sctrl_middle_pane_g8_copy1

0x26a2,	// (0x0003a260) bg_sctrl_sk_pane_g1

0x26b2,	// (0x0003a270) bg_sctrl_sk_pane_g2

0x26aa,	// (0x0003a268) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00047409) bg_sctrl_sk_pane_g

0xb5f3,	// (0x000431b1) aid_size_touch_scroll_bar

0x26c2,	// (0x0003a280) bg_sctrl_sk_pane_g4

0x26ba,	// (0x0003a278) bg_sctrl_sk_pane_g5

0x26ca,	// (0x0003a288) bg_sctrl_sk_pane_g6

0x26d2,	// (0x0003a290) bg_sctrl_sk_pane_g7

0x26e2,	// (0x0003a2a0) bg_sctrl_sk_pane_g8

0x26da,	// (0x0003a298) bg_sctrl_sk_pane_g9

0x03f0,	// (0x00037fae) popup_fep_china_hwr2_fs_candidate_window

0x9f7f,	// (0x00041b3d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9f7f,	// (0x00041b3d) popup_fep_china_hwr2_fs_control_window

0x118d,	// (0x00038d4b) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x000478b7) sctrl_sk_top_pane_g

0xdd03,	// (0x000458c1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdd03,	// (0x000458c1) aid_fep_china_hwr2_fs_cell

0xdd17,	// (0x000458d5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdd17,	// (0x000458d5) bg_popup_fep_shadow_pane_cp4

0xdd2e,	// (0x000458ec) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd2e,	// (0x000458ec) bg_popup_fep_shadow_pane_cp5

0xdd40,	// (0x000458fe) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd40,	// (0x000458fe) popup_fep_china_hwr2_fs_control_bar_grid

0xdd54,	// (0x00045912) popup_fep_china_hwr2_fs_control_funtion_grid

0x6426,	// (0x0003dfe4) aid_fep_china_hwr2_fs_candi_cell

0xb28f,	// (0x00042e4d) bg_popup_fep_shadow_pane_cp6

0x6430,	// (0x0003dfee) popup_fep_china_hwr2_fs_candidate_grid

0xdd5c,	// (0x0004591a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdd5c,	// (0x0004591a) cell_fep_china_hwr2_fs_funtion_grid

0x4c7c,	// (0x0003c83a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6452,	// (0x0003e010) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6452,	// (0x0003e010) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6460,	// (0x0003e01e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6460,	// (0x0003e01e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x000478d2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x000478d2) cell_fep_china_hwr2_fs_funtion_grid_g

0xdd74,	// (0x00045932) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdd74,	// (0x00045932) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdd89,	// (0x00045947) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdd89,	// (0x00045947) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x000478d7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x000478d7) cell_fep_china_hwr2_fs_funtion_grid_t

0x64a7,	// (0x0003e065) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x64af,	// (0x0003e06d) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x64b7,	// (0x0003e075) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x000478dc) popup_fep_china_hwr2_fs_control_bar_grid_g

0x64bf,	// (0x0003e07d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x64bf,	// (0x0003e07d) cell_fep_china_hwr2_fs_candidate_grid

0x64d8,	// (0x0003e096) popup_fep_china_hwr2_fs_candidate_grid_g20

0x64e0,	// (0x0003e09e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4c7c,	// (0x0003c83a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4c7c,	// (0x0003c83a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x000476f7) cell_fep_china_hwr2_fs_candidate_grid_g

0x64e8,	// (0x0003e0a6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x229b,	// (0x00039e59) clock_nsta_pane_cp_24_ParamLimits

0x229b,	// (0x00039e59) clock_nsta_pane_cp_24

0x2319,	// (0x00039ed7) indicator_nsta_pane_cp_24_ParamLimits

0x2319,	// (0x00039ed7) indicator_nsta_pane_cp_24

0x3390,	// (0x0003af4e) heading_pane_g1

0x0001,

0xf8b0,	// (0x0004746e) heading_pane_g

0x3dc6,	// (0x0003b984) grid_sct_catagory_button_pane

0x3df6,	// (0x0003b9b4) scroll_pane_cp5_ParamLimits

0x486f,	// (0x0003c42d) button_value_adjust_pane_cp5_ParamLimits

0x486f,	// (0x0003c42d) button_value_adjust_pane_cp5

0x494e,	// (0x0003c50c) form2_midp_time_pane_ParamLimits

0x64f6,	// (0x0003e0b4) cell_sct_catagory_button_pane_ParamLimits

0x64f6,	// (0x0003e0b4) cell_sct_catagory_button_pane

0x4c41,	// (0x0003c7ff) bg_button_pane_cp01_ParamLimits

0x4c41,	// (0x0003c7ff) bg_button_pane_cp01

0x4c7c,	// (0x0003c83a) cell_sct_catagory_button_pane_g1

0xa558,	// (0x00042116) popup_tb_extension_window

0xdda5,	// (0x00045963) aid_size_cell_ext_ParamLimits

0xdda5,	// (0x00045963) aid_size_cell_ext

0xb5a5,	// (0x00043163) bg_tb_trans_pane_cp1_ParamLimits

0xb5a5,	// (0x00043163) bg_tb_trans_pane_cp1

0xddcb,	// (0x00045989) grid_tb_ext_pane_ParamLimits

0xddcb,	// (0x00045989) grid_tb_ext_pane

0xde0a,	// (0x000459c8) cell_tb_ext_pane_ParamLimits

0xde0a,	// (0x000459c8) cell_tb_ext_pane

0xde32,	// (0x000459f0) cell_tb_ext_pane_g1_ParamLimits

0xde32,	// (0x000459f0) cell_tb_ext_pane_g1

0x658c,	// (0x0003e14a) cell_tb_ext_pane_t1

0xb429,	// (0x00042fe7) list_highlight_pane_cp11_ParamLimits

0xb429,	// (0x00042fe7) list_highlight_pane_cp11

0x8aa3,	// (0x00040661) popup_uni_indicator_window_ParamLimits

0x8aa3,	// (0x00040661) popup_uni_indicator_window

0xb6b1,	// (0x0004326f) bg_popup_sub_pane_cp14

0xde4f,	// (0x00045a0d) list_uniindi_pane

0xde5b,	// (0x00045a19) uniindi_top_pane

0xb429,	// (0x00042fe7) bg_uniindi_top_pane

0xde7a,	// (0x00045a38) uniindi_top_pane_g1

0xde90,	// (0x00045a4e) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x000478e3) uniindi_top_pane_g

0xdead,	// (0x00045a6b) uniindi_top_pane_t1

0x663d,	// (0x0003e1fb) list_single_uniindi_pane_ParamLimits

0x663d,	// (0x0003e1fb) list_single_uniindi_pane

0x4c7c,	// (0x0003c83a) bg_uniindi_top_pane_g1

0x664f,	// (0x0003e20d) list_single_uniindi_pane_g1

0x6662,	// (0x0003e220) list_single_uniindi_pane_t1

0xeda5,	// (0x00046963) control_bg_pane

0x6687,	// (0x0003e245) bg_sctrl_sk_pane_cp1

0x6690,	// (0x0003e24e) bg_sctrl_sk_pane_cp2

0x6699,	// (0x0003e257) control_bg_pane_g1

0x66a2,	// (0x0003e260) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x000478ec) control_bg_pane_g

0x46c5,	// (0x0003c283) cell_indicator_nsta_pane_g1_ParamLimits

0xca00,	// (0x000445be) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x0004765b) cell_indicator_nsta_pane_g_ParamLimits

0xd89b,	// (0x00045459) form2_midp_time_pane_t1_ParamLimits

0x0f28,	// (0x00038ae6) main_idle_act4_pane_ParamLimits

0x0f28,	// (0x00038ae6) main_idle_act4_pane

0xa558,	// (0x00042116) popup_tb_extension_window_ParamLimits

0xddf0,	// (0x000459ae) tb_ext_find_pane_ParamLimits

0xddf0,	// (0x000459ae) tb_ext_find_pane

0x66ab,	// (0x0003e269) ai_gene_pane_1_cp1

0x00cd,	// (0x00037c8b) ai_gene_pane_2_cp1

0xded7,	// (0x00045a95) list_single_idle_plugin_calendar_pane

0x66bc,	// (0x0003e27a) list_single_idle_plugin_notification_pane

0x66c5,	// (0x0003e283) list_single_idle_plugin_player_pane

0xdee0,	// (0x00045a9e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdee0,	// (0x00045a9e) list_single_idle_plugin_shortcut_pane

0xdf08,	// (0x00045ac6) main_idle_act4_pane_t1

0xdf1f,	// (0x00045add) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x000478f1) main_idle_act4_pane_t

0xdf36,	// (0x00045af4) middle_sk_idle_act4_pane_ParamLimits

0xdf36,	// (0x00045af4) middle_sk_idle_act4_pane

0xdf52,	// (0x00045b10) popup_clock_digital_analogue_window_cp2

0xdf7e,	// (0x00045b3c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdf7e,	// (0x00045b3c) shortcut_wheel_idle_act4_pane

0x4c7c,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g1

0x4c7c,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g2

0x4c7c,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g3

0x4c7c,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g4

0x4c7c,	// (0x0003c83a) shortcut_wheel_idle_act4_pane_g5

0x6758,	// (0x0003e316) shortcut_wheel_idle_act4_pane_g6

0x6760,	// (0x0003e31e) shortcut_wheel_idle_act4_pane_g7

0x6768,	// (0x0003e326) shortcut_wheel_idle_act4_pane_g8

0x6770,	// (0x0003e32e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x000478f6) shortcut_wheel_idle_act4_pane_g

0xd302,	// (0x00044ec0) middle_sk_idle_act4_pane_g1_ParamLimits

0xd302,	// (0x00044ec0) middle_sk_idle_act4_pane_g1

0xdffb,	// (0x00045bb9) middle_sk_idle_act4_pane_g2_ParamLimits

0xdffb,	// (0x00045bb9) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00047919) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00047919) middle_sk_idle_act4_pane_g

0xe013,	// (0x00045bd1) middle_sk_idle_act4_pane_t1_ParamLimits

0xe013,	// (0x00045bd1) middle_sk_idle_act4_pane_t1

0xe042,	// (0x00045c00) grid_ai_shortcut_pane_ParamLimits

0xe042,	// (0x00045c00) grid_ai_shortcut_pane

0xe05f,	// (0x00045c1d) list_highlight_pane_cp16_ParamLimits

0xe05f,	// (0x00045c1d) list_highlight_pane_cp16

0xe06c,	// (0x00045c2a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe06c,	// (0x00045c2a) list_single_idle_plugin_shortcut_pane_g1

0xe078,	// (0x00045c36) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe078,	// (0x00045c36) list_single_idle_plugin_shortcut_pane_g2

0xe094,	// (0x00045c52) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe094,	// (0x00045c52) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0004791e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0004791e) list_single_idle_plugin_shortcut_pane_g

0xe0a9,	// (0x00045c67) cell_ai_shortcut_pane_ParamLimits

0xe0a9,	// (0x00045c67) cell_ai_shortcut_pane

0xe0bf,	// (0x00045c7d) cell_ai_shortcut_pane_g1_ParamLimits

0xe0bf,	// (0x00045c7d) cell_ai_shortcut_pane_g1

0x66ab,	// (0x0003e269) ai_gene_pane_1_cp2

0x68a0,	// (0x0003e45e) ai_gene_pane_2_cp2

0x68a8,	// (0x0003e466) list_highlight_pane_cp15

0xe0e1,	// (0x00045c9f) list_single_idle_plugin_calendar_pane_g1

0x68a8,	// (0x0003e466) list_highlight_pane_cp17

0x68b9,	// (0x0003e477) list_single_idle_plugin_calendar_pane_g1_copy1

0x68c1,	// (0x0003e47f) list_single_idle_plugin_player_pane_g1

0x401f,	// (0x0003bbdd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00047925) list_single_idle_plugin_player_pane_g

0x68c9,	// (0x0003e487) list_single_idle_plugin_player_pane_t1

0x68d7,	// (0x0003e495) list_single_idle_plugin_player_pane_t2

0x68e5,	// (0x0003e4a3) list_single_idle_plugin_player_pane_t3

0x68f3,	// (0x0003e4b1) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0004792a) list_single_idle_plugin_player_pane_t

0x6901,	// (0x0003e4bf) wait_bar_pane_cp15

0x6909,	// (0x0003e4c7) grid_ai_notification_pane

0x401f,	// (0x0003bbdd) list_single_idle_plugin_notification_pane_g1

0xe0e9,	// (0x00045ca7) cell_ai_notification_pane_ParamLimits

0xe0e9,	// (0x00045ca7) cell_ai_notification_pane

0x691f,	// (0x0003e4dd) cell_ai_notification_pane_g1

0x6927,	// (0x0003e4e5) cell_ai_notification_pane_t1

0xe0f6,	// (0x00045cb4) tb_ext_find_button_pane

0xe0fe,	// (0x00045cbc) tb_ext_find_pane_g1

0xe106,	// (0x00045cc4) tb_ext_find_pane_t1

0xbae4,	// (0x000436a2) tb_ext_find_button_pane_g1

0xe114,	// (0x00045cd2) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00047933) tb_ext_find_button_pane_g

0xdf08,	// (0x00045ac6) main_idle_act4_pane_t1_ParamLimits

0xdf1f,	// (0x00045add) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x000478f1) main_idle_act4_pane_t_ParamLimits

0xdf52,	// (0x00045b10) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdf6a,	// (0x00045b28) sat_plugin_idle_act4_pane_ParamLimits

0xdf6a,	// (0x00045b28) sat_plugin_idle_act4_pane

0xe11d,	// (0x00045cdb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe11d,	// (0x00045cdb) sat_plugin_idle_act4_pane_t1

0xe135,	// (0x00045cf3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe135,	// (0x00045cf3) sat_plugin_idle_act4_pane_t2

0xe14d,	// (0x00045d0b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe14d,	// (0x00045d0b) sat_plugin_idle_act4_pane_t3

0xe165,	// (0x00045d23) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe165,	// (0x00045d23) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00047938) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00047938) sat_plugin_idle_act4_pane_t

0x8a1e,	// (0x000405dc) popup_battery_window_ParamLimits

0x8a1e,	// (0x000405dc) popup_battery_window

0xb429,	// (0x00042fe7) bg_popup_sub_pane_cp25_ParamLimits

0xb429,	// (0x00042fe7) bg_popup_sub_pane_cp25

0x69a8,	// (0x0003e566) popup_battery_window_g1_ParamLimits

0x69a8,	// (0x0003e566) popup_battery_window_g1

0x69b4,	// (0x0003e572) popup_battery_window_t1_ParamLimits

0x69b4,	// (0x0003e572) popup_battery_window_t1

0x69c6,	// (0x0003e584) popup_battery_window_t2_ParamLimits

0x69c6,	// (0x0003e584) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00047941) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00047941) popup_battery_window_t

0x9bd5,	// (0x00041793) midp_canvas_pane_ParamLimits

0x9c47,	// (0x00041805) midp_keypad_pane_ParamLimits

0x9c47,	// (0x00041805) midp_keypad_pane

0x217b,	// (0x00039d39) main_midp_pane_ParamLimits

0xca0d,	// (0x000445cb) signal_pane_g2_cp_ParamLimits

0xe17d,	// (0x00045d3b) aid_size_cell_midp_keypad_ParamLimits

0xe17d,	// (0x00045d3b) aid_size_cell_midp_keypad

0xe19b,	// (0x00045d59) midp_keyp_game_grid_pane_ParamLimits

0xe19b,	// (0x00045d59) midp_keyp_game_grid_pane

0xe1c2,	// (0x00045d80) midp_keyp_rocker_pane_ParamLimits

0xe1c2,	// (0x00045d80) midp_keyp_rocker_pane

0xe213,	// (0x00045dd1) midp_keyp_sk_left_pane_ParamLimits

0xe213,	// (0x00045dd1) midp_keyp_sk_left_pane

0xe267,	// (0x00045e25) midp_keyp_sk_right_pane_ParamLimits

0xe267,	// (0x00045e25) midp_keyp_sk_right_pane

0xb28f,	// (0x00042e4d) bg_button_pane_cp03

0xe2bb,	// (0x00045e79) midp_keyp_sk_left_pane_g1

0xb28f,	// (0x00042e4d) bg_button_pane_cp04

0xe2bb,	// (0x00045e79) midp_keyp_sk_right_pane_g1

0x4c7c,	// (0x0003c83a) midp_keyp_rocker_pane_g1

0xe2c4,	// (0x00045e82) keyp_game_cell_pane_ParamLimits

0xe2c4,	// (0x00045e82) keyp_game_cell_pane

0xb28f,	// (0x00042e4d) bg_button_pane_cp02

0xe2e8,	// (0x00045ea6) keyp_game_cell_pane_g1

0x8a3e,	// (0x000405fc) popup_fep_vkb2_window_ParamLimits

0x8a3e,	// (0x000405fc) popup_fep_vkb2_window

0xac8a,	// (0x00042848) aid_size_cell_vkb2_ParamLimits

0xac8a,	// (0x00042848) aid_size_cell_vkb2

0xacc8,	// (0x00042886) popup_fep_vkb2_window_g1_ParamLimits

0xacc8,	// (0x00042886) popup_fep_vkb2_window_g1

0xad18,	// (0x000428d6) vkb2_area_bottom_pane_ParamLimits

0xad18,	// (0x000428d6) vkb2_area_bottom_pane

0xad6c,	// (0x0004292a) vkb2_area_keypad_pane_ParamLimits

0xad6c,	// (0x0004292a) vkb2_area_keypad_pane

0xadb4,	// (0x00042972) vkb2_area_top_pane_ParamLimits

0xadb4,	// (0x00042972) vkb2_area_top_pane

0xae3a,	// (0x000429f8) vkb2_top_entry_pane_ParamLimits

0xae3a,	// (0x000429f8) vkb2_top_entry_pane

0xae67,	// (0x00042a25) vkb2_top_grid_left_pane_ParamLimits

0xae67,	// (0x00042a25) vkb2_top_grid_left_pane

0xae87,	// (0x00042a45) vkb2_top_grid_right_pane_ParamLimits

0xae87,	// (0x00042a45) vkb2_top_grid_right_pane

0x177a,	// (0x00039338) vkb2_cell_keypad_pane_ParamLimits

0x177a,	// (0x00039338) vkb2_cell_keypad_pane

0xaecd,	// (0x00042a8b) vkb2_area_bottom_grid_pane_ParamLimits

0xaecd,	// (0x00042a8b) vkb2_area_bottom_grid_pane

0xaef7,	// (0x00042ab5) vkb2_area_bottom_pane_g1_ParamLimits

0xaef7,	// (0x00042ab5) vkb2_area_bottom_pane_g1

0xaf1d,	// (0x00042adb) vkb2_area_bottom_pane_g2_ParamLimits

0xaf1d,	// (0x00042adb) vkb2_area_bottom_pane_g2

0xaf4e,	// (0x00042b0c) vkb2_area_bottom_pane_g3_ParamLimits

0xaf4e,	// (0x00042b0c) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00047946) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00047946) vkb2_area_bottom_pane_g

0x1924,	// (0x000394e2) vkb2_top_cell_left_pane_ParamLimits

0x1924,	// (0x000394e2) vkb2_top_cell_left_pane

0xe2f1,	// (0x00045eaf) vkb2_top_entry_pane_g1_ParamLimits

0xe2f1,	// (0x00045eaf) vkb2_top_entry_pane_g1

0xe2ff,	// (0x00045ebd) vkb2_top_entry_pane_t1_ParamLimits

0xe2ff,	// (0x00045ebd) vkb2_top_entry_pane_t1

0x6b77,	// (0x0003e735) vkb2_top_entry_pane_t2_ParamLimits

0x6b77,	// (0x0003e735) vkb2_top_entry_pane_t2

0x6ba9,	// (0x0003e767) vkb2_top_entry_pane_t3_ParamLimits

0x6ba9,	// (0x0003e767) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0004794d) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0004794d) vkb2_top_entry_pane_t

0xafb8,	// (0x00042b76) vkb2_top_grid_right_pane_g1_ParamLimits

0xafb8,	// (0x00042b76) vkb2_top_grid_right_pane_g1

0x1987,	// (0x00039545) vkb2_top_grid_right_pane_g2_ParamLimits

0x1987,	// (0x00039545) vkb2_top_grid_right_pane_g2

0x199f,	// (0x0003955d) vkb2_top_grid_right_pane_g3_ParamLimits

0x199f,	// (0x0003955d) vkb2_top_grid_right_pane_g3

0xafce,	// (0x00042b8c) vkb2_top_grid_right_pane_g4_ParamLimits

0xafce,	// (0x00042b8c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00047954) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00047954) vkb2_top_grid_right_pane_g

0x19cd,	// (0x0003958b) vkb2_top_cell_left_pane_g1

0x19e4,	// (0x000395a2) vkb2_cell_keypad_pane_g1_ParamLimits

0x19e4,	// (0x000395a2) vkb2_cell_keypad_pane_g1

0x6bcd,	// (0x0003e78b) vkb2_cell_keypad_pane_t1_ParamLimits

0x6bcd,	// (0x0003e78b) vkb2_cell_keypad_pane_t1

0x19f2,	// (0x000395b0) vkb2_cell_bottom_grid_pane_ParamLimits

0x19f2,	// (0x000395b0) vkb2_cell_bottom_grid_pane

0x1a2b,	// (0x000395e9) vkb2_cell_bottom_grid_pane_g1

0xdf9f,	// (0x00045b5d) aid_call2_pane_cp02

0xdfa7,	// (0x00045b65) aid_call_pane_cp02

0xdfaf,	// (0x00045b6d) clock_digital_number_pane_cp10

0xdfb7,	// (0x00045b75) clock_digital_number_pane_cp11

0xdfbf,	// (0x00045b7d) clock_digital_number_pane_cp12

0xdfc7,	// (0x00045b85) clock_digital_number_pane_cp13

0xdfcf,	// (0x00045b8d) clock_digital_separator_pane_cp10

0xbae4,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g1

0xbae4,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g2

0xdfd7,	// (0x00045b95) popup_clock_digital_analogue_window_cp2_g3

0xbae4,	// (0x000436a2) popup_clock_digital_analogue_window_cp2_g4

0xdfd7,	// (0x00045b95) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00047909) popup_clock_digital_analogue_window_cp2_g

0xdfdf,	// (0x00045b9d) popup_clock_digital_analogue_window_cp2_t1

0xdfed,	// (0x00045bab) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00047914) popup_clock_digital_analogue_window_cp2_t

0x4c7c,	// (0x0003c83a) clock_digital_number_pane_cp10_g1

0x4c7c,	// (0x0003c83a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x000476f7) clock_digital_number_pane_cp10_g

0x4c7c,	// (0x0003c83a) clock_digital_separator_pane_cp10_g1

0x4c7c,	// (0x0003c83a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x000476f7) clock_digital_separator_pane_cp10_g

0xde9c,	// (0x00045a5a) uniindi_top_pane_g3

0x6606,	// (0x0003e1c4) uniindi_top_pane_g4

0x1805,	// (0x000393c3) vkb2_row_keypad_pane_ParamLimits

0x1805,	// (0x000393c3) vkb2_row_keypad_pane

0x1a47,	// (0x00039605) vkb2_cell_t_keypad_pane_ParamLimits

0x1a47,	// (0x00039605) vkb2_cell_t_keypad_pane

0x1a57,	// (0x00039615) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1a57,	// (0x00039615) vkb2_cell_t_keypad_pane_cp08

0x1a6a,	// (0x00039628) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1a6a,	// (0x00039628) vkb2_cell_t_keypad_pane_cp09

0x1a7e,	// (0x0003963c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1a7e,	// (0x0003963c) vkb2_cell_t_keypad_pane_cp01

0x1a8f,	// (0x0003964d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1a8f,	// (0x0003964d) vkb2_cell_t_keypad_pane_cp02

0x1aa0,	// (0x0003965e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1aa0,	// (0x0003965e) vkb2_cell_t_keypad_pane_cp03

0x1ab1,	// (0x0003966f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1ab1,	// (0x0003966f) vkb2_cell_t_keypad_pane_cp04

0x1ac2,	// (0x00039680) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ac2,	// (0x00039680) vkb2_cell_t_keypad_pane_cp05

0x1ad3,	// (0x00039691) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ad3,	// (0x00039691) vkb2_cell_t_keypad_pane_cp06

0x1ae4,	// (0x000396a2) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1ae4,	// (0x000396a2) vkb2_cell_t_keypad_pane_cp07

0x1af5,	// (0x000396b3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1af5,	// (0x000396b3) vkb2_cell_t_keypad_pane_cp10

0x118d,	// (0x00038d4b) vkb2_cell_t_keypad_pane_g1

0x6be4,	// (0x0003e7a2) vkb2_cell_t_keypad_pane_t1

0xeda5,	// (0x00046963) popup_grid_graphic2_window

0xe338,	// (0x00045ef6) aid_size_cell_graphic2_ParamLimits

0xe338,	// (0x00045ef6) aid_size_cell_graphic2

0xe376,	// (0x00045f34) bg_popup_window_pane_cp21_ParamLimits

0xe376,	// (0x00045f34) bg_popup_window_pane_cp21

0xe384,	// (0x00045f42) graphic2_pages_pane_ParamLimits

0xe384,	// (0x00045f42) graphic2_pages_pane

0xe3da,	// (0x00045f98) grid_graphic2_control_pane_ParamLimits

0xe3da,	// (0x00045f98) grid_graphic2_control_pane

0xe422,	// (0x00045fe0) grid_graphic2_pane_ParamLimits

0xe422,	// (0x00045fe0) grid_graphic2_pane

0xe4a9,	// (0x00046067) cell_graphic2_pane

0xeda5,	// (0x00046963) main_comp_mode_pane

0x5e47,	// (0x0003da05) list_ai3_gene_pane_ParamLimits

0xdc4b,	// (0x00045809) bg_popup_window_pane_cp19_ParamLimits

0x6240,	// (0x0003ddfe) bg_touch_area_indi_pane_ParamLimits

0x6240,	// (0x0003ddfe) bg_touch_area_indi_pane

0x6256,	// (0x0003de14) bg_touch_area_indi_pane_cp01_ParamLimits

0x6256,	// (0x0003de14) bg_touch_area_indi_pane_cp01

0x626c,	// (0x0003de2a) bg_touch_area_indi_pane_cp02_ParamLimits

0x626c,	// (0x0003de2a) bg_touch_area_indi_pane_cp02

0x6282,	// (0x0003de40) bg_touch_area_indi_pane_cp03_ParamLimits

0x6282,	// (0x0003de40) bg_touch_area_indi_pane_cp03

0x629c,	// (0x0003de5a) popup_slider_window_g1_ParamLimits

0x62b8,	// (0x0003de76) popup_slider_window_g2_ParamLimits

0x62d4,	// (0x0003de92) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x0004789e) popup_slider_window_g_ParamLimits

0x633a,	// (0x0003def8) popup_slider_window_t1_ParamLimits

0x63ae,	// (0x0003df6c) small_volume_slider_vertical_pane_ParamLimits

0xe4a9,	// (0x00046067) cell_graphic2_pane_ParamLimits

0xe504,	// (0x000460c2) bg_button_pane_cp10_ParamLimits

0xe504,	// (0x000460c2) bg_button_pane_cp10

0xe517,	// (0x000460d5) bg_button_pane_cp11_ParamLimits

0xe517,	// (0x000460d5) bg_button_pane_cp11

0xe52a,	// (0x000460e8) graphic2_pages_pane_g1_ParamLimits

0xe52a,	// (0x000460e8) graphic2_pages_pane_g1

0xe545,	// (0x00046103) graphic2_pages_pane_g2_ParamLimits

0xe545,	// (0x00046103) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x00047962) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x00047962) graphic2_pages_pane_g

0xe55d,	// (0x0004611b) graphic2_pages_pane_t1_ParamLimits

0xe55d,	// (0x0004611b) graphic2_pages_pane_t1

0xe575,	// (0x00046133) cell_graphic2_control_pane_ParamLimits

0xe575,	// (0x00046133) cell_graphic2_control_pane

0xe5a7,	// (0x00046165) cell_graphic2_pane_g1_ParamLimits

0xe5a7,	// (0x00046165) cell_graphic2_pane_g1

0xd310,	// (0x00044ece) cell_graphic2_pane_g2_ParamLimits

0xd310,	// (0x00044ece) cell_graphic2_pane_g2

0xd8ae,	// (0x0004546c) cell_graphic2_pane_g3_ParamLimits

0xd8ae,	// (0x0004546c) cell_graphic2_pane_g3

0xd31d,	// (0x00044edb) cell_graphic2_pane_g4_ParamLimits

0xd31d,	// (0x00044edb) cell_graphic2_pane_g4

0xe5b4,	// (0x00046172) cell_graphic2_pane_g5_ParamLimits

0xe5b4,	// (0x00046172) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x00047967) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x00047967) cell_graphic2_pane_g

0xe5d4,	// (0x00046192) cell_graphic2_pane_t1_ParamLimits

0xe5d4,	// (0x00046192) cell_graphic2_pane_t1

0x3384,	// (0x0003af42) grid_highlight_pane_cp11_ParamLimits

0x3384,	// (0x0003af42) grid_highlight_pane_cp11

0xb429,	// (0x00042fe7) bg_button_pane_cp05

0xe620,	// (0x000461de) cell_graphic2_control_pane_g1

0x4c7c,	// (0x0003c83a) bg_touch_area_indi_pane_g1

0x6ec0,	// (0x0003ea7e) aid_cmod_rocker_key_size

0x6eca,	// (0x0003ea88) aid_cmode_itu_key_size

0x6ed4,	// (0x0003ea92) main_cmode_video_pane

0x6ede,	// (0x0003ea9c) main_comp_mode_itu_pane

0x6eea,	// (0x0003eaa8) main_comp_mode_rocker_pane

0x6ef6,	// (0x0003eab4) cell_cmode_rocker_pane_ParamLimits

0x6ef6,	// (0x0003eab4) cell_cmode_rocker_pane

0x6f08,	// (0x0003eac6) cell_cmode_itu_pane_ParamLimits

0x6f08,	// (0x0003eac6) cell_cmode_itu_pane

0xb6b1,	// (0x0004326f) bg_button_pane_cp06_ParamLimits

0xb6b1,	// (0x0004326f) bg_button_pane_cp06

0x4eec,	// (0x0003caaa) cell_cmode_rocker_pane_g1_ParamLimits

0x4eec,	// (0x0003caaa) cell_cmode_rocker_pane_g1

0x6452,	// (0x0003e010) cell_cmode_rocker_pane_g2_ParamLimits

0x6452,	// (0x0003e010) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x00047977) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x00047977) cell_cmode_rocker_pane_g

0xb28f,	// (0x00042e4d) bg_button_pane_cp07

0x6f1d,	// (0x0003eadb) cell_cmode_itu_pane_g1

0x6f26,	// (0x0003eae4) cell_cmode_itu_pane_t1

0x6f34,	// (0x0003eaf2) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x0004797c) cell_cmode_itu_pane_t

0x6677,	// (0x0003e235) aid_touch_ctrl_left

0x667f,	// (0x0003e23d) aid_touch_ctrl_right

0xb28f,	// (0x00042e4d) compa_mode_pane

0xe646,	// (0x00046204) aid_cmod_rocker_key_size_cp

0xe650,	// (0x0004620e) aid_cmode_itu_key_size_cp

0x6f56,	// (0x0003eb14) compa_mode_pane_g1

0x6f5e,	// (0x0003eb1c) compa_mode_pane_g2

0x6f66,	// (0x0003eb24) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00047981) compa_mode_pane_g

0xe65a,	// (0x00046218) main_comp_mode_itu_pane_cp

0xe662,	// (0x00046220) main_comp_mode_rocker_pane_cp

0xe66a,	// (0x00046228) cell_cmode_itu_pane_cp_ParamLimits

0xe66a,	// (0x00046228) cell_cmode_itu_pane_cp

0xe67f,	// (0x0004623d) cell_cmode_rocker_pane_cp_ParamLimits

0xe67f,	// (0x0004623d) cell_cmode_rocker_pane_cp

0xb6b1,	// (0x0004326f) bg_button_pane_cp06_cp_ParamLimits

0xb6b1,	// (0x0004326f) bg_button_pane_cp06_cp

0x4eec,	// (0x0003caaa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4eec,	// (0x0003caaa) cell_cmode_rocker_pane_g1_cp

0x4c7c,	// (0x0003c83a) cell_cmode_rocker_pane_g2_cp

0xb28f,	// (0x00042e4d) bg_button_pane_cp07_cp

0xe691,	// (0x0004624f) cell_cmode_itu_pane_g1_cp

0xe69a,	// (0x00046258) cell_cmode_itu_pane_t1_cp

0xe69a,	// (0x00046258) cell_cmode_itu_pane_t2_cp

0xc7a1,	// (0x0004435f) settings_code_pane_cp2

0xb2ff,	// (0x00042ebd) bg_popup_window_pane_cp3_ParamLimits

0xb542,	// (0x00043100) heading_pane_cp3_ParamLimits

0xb54e,	// (0x0004310c) listscroll_popup_graphic_pane_ParamLimits

0x0f36,	// (0x00038af4) fep_hwr_aid_pane_ParamLimits

0x14cb,	// (0x00039089) aid_touch_sctrl_top_ParamLimits

0x14e6,	// (0x000390a4) sctrl_sk_top_pane_g1_ParamLimits

0x118d,	// (0x00038d4b) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x000478b7) sctrl_sk_top_pane_g_ParamLimits

0x14f3,	// (0x000390b1) sctrl_sk_top_pane_t1_ParamLimits

0x14cb,	// (0x00039089) aid_touch_sctrl_bottom_ParamLimits

0x14f3,	// (0x000390b1) sctrl_sk_bottom_pane_t1_ParamLimits

0xde68,	// (0x00045a26) aid_area_touch_clock

0xadfc,	// (0x000429ba) aid_vkb2_area_top_pane_cell_ParamLimits

0xadfc,	// (0x000429ba) aid_vkb2_area_top_pane_cell

0xaea7,	// (0x00042a65) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaea7,	// (0x00042a65) aid_vkb2_area_bottom_pane_cell

0x6b2f,	// (0x0003e6ed) popup_char_count_window

0x6fbc,	// (0x0003eb7a) popup_char_count_window_g1

0x6fc5,	// (0x0003eb83) popup_char_count_window_g2

0x6fce,	// (0x0003eb8c) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x00047988) popup_char_count_window_g

0x6fd7,	// (0x0003eb95) popup_char_count_window_t1

0x15a2,	// (0x00039160) popup_fep_char_preview_window_ParamLimits

0x15a2,	// (0x00039160) popup_fep_char_preview_window

0xae1c,	// (0x000429da) vkb2_top_candi_pane_ParamLimits

0xae1c,	// (0x000429da) vkb2_top_candi_pane

0xe6a8,	// (0x00046266) cell_vkb2_top_candi_pane_ParamLimits

0xe6a8,	// (0x00046266) cell_vkb2_top_candi_pane

0x1b0a,	// (0x000396c8) bg_popup_fep_char_preview_window_ParamLimits

0x1b0a,	// (0x000396c8) bg_popup_fep_char_preview_window

0x1b18,	// (0x000396d6) popup_fep_char_preview_window_t1_ParamLimits

0x1b18,	// (0x000396d6) popup_fep_char_preview_window_t1

0x7032,	// (0x0003ebf0) bg_popup_fep_char_preview_window_g1

0x703a,	// (0x0003ebf8) bg_popup_fep_char_preview_window_g2

0x7042,	// (0x0003ec00) bg_popup_fep_char_preview_window_g3

0x704a,	// (0x0003ec08) bg_popup_fep_char_preview_window_g4

0x7052,	// (0x0003ec10) bg_popup_fep_char_preview_window_g5

0x1b52,	// (0x00039710) bg_popup_fep_char_preview_window_g6

0x705a,	// (0x0003ec18) bg_popup_fep_char_preview_window_g7

0x7062,	// (0x0003ec20) bg_popup_fep_char_preview_window_g8

0x706a,	// (0x0003ec28) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x0004798f) bg_popup_fep_char_preview_window_g

0x118d,	// (0x00038d4b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x118d,	// (0x00038d4b) cell_vkb2_top_candi_pane_g1

0x119b,	// (0x00038d59) cell_vkb2_top_candi_pane_g2_ParamLimits

0x119b,	// (0x00038d59) cell_vkb2_top_candi_pane_g2

0x6109,	// (0x0003dcc7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6109,	// (0x0003dcc7) cell_vkb2_top_candi_pane_g3

0x1b5a,	// (0x00039718) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1b5a,	// (0x00039718) cell_vkb2_top_candi_pane_g4

0x53d8,	// (0x0003cf96) cell_vkb2_top_candi_pane_g5_ParamLimits

0x53d8,	// (0x0003cf96) cell_vkb2_top_candi_pane_g5

0x1b7b,	// (0x00039739) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1b7b,	// (0x00039739) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x000479a2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x000479a2) cell_vkb2_top_candi_pane_g

0x1b89,	// (0x00039747) cell_vkb2_top_candi_pane_t1

0xa88f,	// (0x0004244d) aid_size_touch_slider_mark_ParamLimits

0xa88f,	// (0x0004244d) aid_size_touch_slider_mark

0xe3c0,	// (0x00045f7e) grid_graphic2_catg_pane_ParamLimits

0xe3c0,	// (0x00045f7e) grid_graphic2_catg_pane

0xe47c,	// (0x0004603a) popup_grid_graphic2_window_t1_ParamLimits

0xe47c,	// (0x0004603a) popup_grid_graphic2_window_t1

0xe492,	// (0x00046050) popup_grid_graphic2_window_t2_ParamLimits

0xe492,	// (0x00046050) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0004795d) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0004795d) popup_grid_graphic2_window_t

0xb429,	// (0x00042fe7) bg_button_pane_cp05_ParamLimits

0xe620,	// (0x000461de) cell_graphic2_control_pane_g1_ParamLimits

0xe70e,	// (0x000462cc) cell_graphic2_catg_pane_ParamLimits

0xe70e,	// (0x000462cc) cell_graphic2_catg_pane

0xb28f,	// (0x00042e4d) bg_button_pane_cp12

0xe720,	// (0x000462de) cell_graphic2_catg_pane_g1

0x658c,	// (0x0003e14a) cell_tb_ext_pane_t1_ParamLimits

0x1944,	// (0x00039502) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1944,	// (0x00039502) vkb2_top_cell_right_narrow_pane

0x195c,	// (0x0003951a) vkb2_top_cell_right_wide_pane_ParamLimits

0x195c,	// (0x0003951a) vkb2_top_cell_right_wide_pane

0x0f28,	// (0x00038ae6) bg_vkb2_func_pane_ParamLimits

0x0f28,	// (0x00038ae6) bg_vkb2_func_pane

0x19cd,	// (0x0003958b) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp03

0x1a2b,	// (0x000395e9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x26aa,	// (0x0003a268) bg_vkb2_func_pane_g1

0x26b2,	// (0x0003a270) bg_vkb2_func_pane_g2

0x26c2,	// (0x0003a280) bg_vkb2_func_pane_g3

0x26ba,	// (0x0003a278) bg_vkb2_func_pane_g4

0x26ca,	// (0x0003a288) bg_vkb2_func_pane_g5

0x26d2,	// (0x0003a290) bg_vkb2_func_pane_g6

0x26da,	// (0x0003a298) bg_vkb2_func_pane_g7

0x26e2,	// (0x0003a2a0) bg_vkb2_func_pane_g8

0x26a2,	// (0x0003a260) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x000479af) bg_vkb2_func_pane_g

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp01

0x19cd,	// (0x0003958b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x19cd,	// (0x0003958b) vkb2_top_cell_right_wide_pane_g1

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f28,	// (0x00038ae6) bg_vkb2_fuc_pane_cp02

0x1a2b,	// (0x000395e9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1a2b,	// (0x000395e9) vkb2_top_cell_right_narrow_pane_g1

0xdb8d,	// (0x0004574b) aid_touch_area_decrease_ParamLimits

0xdb8d,	// (0x0004574b) aid_touch_area_decrease

0xdbc7,	// (0x00045785) aid_touch_area_increase_ParamLimits

0xdbc7,	// (0x00045785) aid_touch_area_increase

0xdbef,	// (0x000457ad) aid_touch_area_mute_ParamLimits

0xdbef,	// (0x000457ad) aid_touch_area_mute

0xdc17,	// (0x000457d5) aid_touch_area_slider_ParamLimits

0xdc17,	// (0x000457d5) aid_touch_area_slider

0xdc57,	// (0x00045815) popup_slider_window_g4_ParamLimits

0xdc57,	// (0x00045815) popup_slider_window_g4

0xdc7f,	// (0x0004583d) popup_slider_window_g5_ParamLimits

0xdc7f,	// (0x0004583d) popup_slider_window_g5

0xdcb3,	// (0x00045871) popup_slider_window_g6_ParamLimits

0xdcb3,	// (0x00045871) popup_slider_window_g6

0x6368,	// (0x0003df26) popup_slider_window_t2_ParamLimits

0x6368,	// (0x0003df26) popup_slider_window_t2

0x0001,

0xfced,	// (0x000478ab) popup_slider_window_t_ParamLimits

0xfced,	// (0x000478ab) popup_slider_window_t

0xdccf,	// (0x0004588d) slider_pane_ParamLimits

0xdccf,	// (0x0004588d) slider_pane

0x708d,	// (0x0003ec4b) slider_pane_g1_ParamLimits

0x708d,	// (0x0003ec4b) slider_pane_g1

0x70a1,	// (0x0003ec5f) slider_pane_g2_ParamLimits

0x70a1,	// (0x0003ec5f) slider_pane_g2

0x70b7,	// (0x0003ec75) slider_pane_g3_ParamLimits

0x70b7,	// (0x0003ec75) slider_pane_g3

0x0003,

0xfe04,	// (0x000479c2) slider_pane_g_ParamLimits

0xfe04,	// (0x000479c2) slider_pane_g

0xa5a0,	// (0x0004215e) popup_tb_float_extension_window_ParamLimits

0xa5a0,	// (0x0004215e) popup_tb_float_extension_window

0x70e3,	// (0x0003eca1) aid_size_cell_tb_float_ext

0xb28f,	// (0x00042e4d) bg_popup_sub_window_cp28

0xe729,	// (0x000462e7) grid_tb_float_ext_pane

0xe733,	// (0x000462f1) cell_tb_float_ext_pane_ParamLimits

0xe733,	// (0x000462f1) cell_tb_float_ext_pane

0xe74d,	// (0x0004630b) cell_tb_float_ext_pane_g1

0xe756,	// (0x00046314) grid_highlight_pane_cp12

0xa9ec,	// (0x000425aa) cell_last_hwr_side_pane_ParamLimits

0xa9ec,	// (0x000425aa) cell_last_hwr_side_pane

0x4c7c,	// (0x0003c83a) cell_last_hwr_side_pane_g1

0x7125,	// (0x0003ece3) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x000479cb) cell_last_hwr_side_pane_g

0xaf83,	// (0x00042b41) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaf83,	// (0x00042b41) vkb2_area_bottom_space_btn_pane

0x118d,	// (0x00038d4b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6be4,	// (0x0003e7a2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1b89,	// (0x00039747) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1ba8,	// (0x00039766) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1ba8,	// (0x00039766) vkb2_area_bottom_space_btn_pane_g1

0x1be2,	// (0x000397a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1be2,	// (0x000397a0) vkb2_area_bottom_space_btn_pane_g2

0x1c18,	// (0x000397d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1c18,	// (0x000397d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x000479d0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x000479d0) vkb2_area_bottom_space_btn_pane_g

0x0feb,	// (0x00038ba9) cel_fep_hwr_func_pane_ParamLimits

0x0feb,	// (0x00038ba9) cel_fep_hwr_func_pane

0xa9c1,	// (0x0004257f) cell_hwr_side_button_pane_ParamLimits

0xa9c1,	// (0x0004257f) cell_hwr_side_button_pane

0xde68,	// (0x00045a26) aid_area_touch_clock_ParamLimits

0xb429,	// (0x00042fe7) bg_uniindi_top_pane_ParamLimits

0xde7a,	// (0x00045a38) uniindi_top_pane_g1_ParamLimits

0xde90,	// (0x00045a4e) uniindi_top_pane_g2_ParamLimits

0xde9c,	// (0x00045a5a) uniindi_top_pane_g3_ParamLimits

0x6606,	// (0x0003e1c4) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x000478e3) uniindi_top_pane_g_ParamLimits

0xdead,	// (0x00045a6b) uniindi_top_pane_t1_ParamLimits

0xb429,	// (0x00042fe7) bg_vkb2_func_pane_cp01_ParamLimits

0xb429,	// (0x00042fe7) bg_vkb2_func_pane_cp01

0x712e,	// (0x0003ecec) cel_fep_hwr_func_pane_g1_ParamLimits

0x712e,	// (0x0003ecec) cel_fep_hwr_func_pane_g1

0xb429,	// (0x00042fe7) bg_vkb2_func_pane_cp02_ParamLimits

0xb429,	// (0x00042fe7) bg_vkb2_func_pane_cp02

0x712e,	// (0x0003ecec) cell_hwr_side_button_pane_g1_ParamLimits

0x712e,	// (0x0003ecec) cell_hwr_side_button_pane_g1

0x2526,	// (0x0003a0e4) status_pane_g4_ParamLimits

0x2526,	// (0x0003a0e4) status_pane_g4

0x2540,	// (0x0003a0fe) status_pane_t1

0x49b7,	// (0x0003c575) form2_midp_gauge_slider_cont_pane

0x49bf,	// (0x0003c57d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb36,	// (0x000446f4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb48,	// (0x00044706) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x000476aa) form2_midp_gauge_slider_pane_t_ParamLimits

0x49f5,	// (0x0003c5b3) form2_midp_slider_pane_ParamLimits

0x1562,	// (0x00039120) aid_size_cell_func_vkb2_ParamLimits

0x1562,	// (0x00039120) aid_size_cell_func_vkb2

0x70cf,	// (0x0003ec8d) slider_pane_g4_ParamLimits

0x70cf,	// (0x0003ec8d) slider_pane_g4

0xafe4,	// (0x00042ba2) form2_midp_gauge_slider_pane_t2_cp01

0xaff2,	// (0x00042bb0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaff2,	// (0x00042bb0) form2_midp_gauge_slider_pane_t3_cp01

0x1c8d,	// (0x0003984b) form2_midp_slider_pane_cp01

0xb28f,	// (0x00042e4d) navi_smil_pane

0x7167,	// (0x0003ed25) navi_smil_pane_g1

0x716f,	// (0x0003ed2d) navi_smil_pane_t1

0x713c,	// (0x0003ecfa) form2_midp_slider_pane_g1

0x7145,	// (0x0003ed03) form2_midp_slider_pane_g2

0x714d,	// (0x0003ed0b) form2_midp_slider_pane_g3

0x713c,	// (0x0003ecfa) form2_midp_slider_pane_g4

0xe75f,	// (0x0004631d) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x000479d9) form2_midp_slider_pane_g

0x1c52,	// (0x00039810) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1c52,	// (0x00039810) vkb2_area_bottom_space_btn_pane_g4

0xbd00,	// (0x000438be) lc0_navi_pane_ParamLimits

0xbd00,	// (0x000438be) lc0_navi_pane

0xbd6a,	// (0x00043928) lc0_stat_indi_pane_ParamLimits

0xbd6a,	// (0x00043928) lc0_stat_indi_pane

0xbd7f,	// (0x0004393d) ls0_title_pane_ParamLimits

0xbd7f,	// (0x0004393d) ls0_title_pane

0xb6b1,	// (0x0004326f) bg_popup_sub_pane_cp14_ParamLimits

0xde4f,	// (0x00045a0d) list_uniindi_pane_ParamLimits

0xde5b,	// (0x00045a19) uniindi_top_pane_ParamLimits

0x664f,	// (0x0003e20d) list_single_uniindi_pane_g1_ParamLimits

0x6662,	// (0x0003e220) list_single_uniindi_pane_t1_ParamLimits

0xb00f,	// (0x00042bcd) lc0_stat_clock_pane_ParamLimits

0xb00f,	// (0x00042bcd) lc0_stat_clock_pane

0xe76a,	// (0x00046328) lc0_stat_indi_pane_g1_ParamLimits

0xe76a,	// (0x00046328) lc0_stat_indi_pane_g1

0xe777,	// (0x00046335) lc0_stat_indi_pane_g2_ParamLimits

0xe777,	// (0x00046335) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x000479e4) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x000479e4) lc0_stat_indi_pane_g

0xb01f,	// (0x00042bdd) lc0_uni_indicator_pane_ParamLimits

0xb01f,	// (0x00042bdd) lc0_uni_indicator_pane

0xe784,	// (0x00046342) ls0_title_pane_g1_ParamLimits

0xe784,	// (0x00046342) ls0_title_pane_g1

0xe798,	// (0x00046356) ls0_title_pane_t1_ParamLimits

0xe798,	// (0x00046356) ls0_title_pane_t1

0xb02f,	// (0x00042bed) lc0_uni_indicator_pane_g1_ParamLimits

0xb02f,	// (0x00042bed) lc0_uni_indicator_pane_g1

0x71e1,	// (0x0003ed9f) lc0_stat_clock_pane_t1

0xeda5,	// (0x00046963) main_ai5_pane

0x71ef,	// (0x0003edad) ai5_sk_pane_ParamLimits

0x71ef,	// (0x0003edad) ai5_sk_pane

0xe7c6,	// (0x00046384) cell_ai5_widget_pane_ParamLimits

0xe7c6,	// (0x00046384) cell_ai5_widget_pane

0x72ae,	// (0x0003ee6c) aid_size_cell_widget_grid

0x72bc,	// (0x0003ee7a) bg_ai5_widget_pane_ParamLimits

0x72bc,	// (0x0003ee7a) bg_ai5_widget_pane

0x7334,	// (0x0003eef2) cell_ai5_widget_pane_g2

0x7348,	// (0x0003ef06) cell_ai5_widget_pane_g3

0x7362,	// (0x0003ef20) cell_ai5_widget_pane_g4

0x7372,	// (0x0003ef30) cell_ai5_widget_pane_g5

0x7382,	// (0x0003ef40) cell_ai5_widget_pane_g6

0x738e,	// (0x0003ef4c) cell_ai5_widget_pane_g7

0x73d6,	// (0x0003ef94) cell_ai5_widget_pane_t1_ParamLimits

0x73d6,	// (0x0003ef94) cell_ai5_widget_pane_t1

0x73f3,	// (0x0003efb1) cell_ai5_widget_pane_t2_ParamLimits

0x73f3,	// (0x0003efb1) cell_ai5_widget_pane_t2

0x740b,	// (0x0003efc9) cell_ai5_widget_pane_t3_ParamLimits

0x740b,	// (0x0003efc9) cell_ai5_widget_pane_t3

0x7423,	// (0x0003efe1) cell_ai5_widget_pane_t4_ParamLimits

0x7423,	// (0x0003efe1) cell_ai5_widget_pane_t4

0x7449,	// (0x0003f007) cell_ai5_widget_pane_t5_ParamLimits

0x7449,	// (0x0003f007) cell_ai5_widget_pane_t5

0x7469,	// (0x0003f027) cell_ai5_widget_pane_t6_ParamLimits

0x7469,	// (0x0003f027) cell_ai5_widget_pane_t6

0x747b,	// (0x0003f039) cell_ai5_widget_pane_t7_ParamLimits

0x747b,	// (0x0003f039) cell_ai5_widget_pane_t7

0x7494,	// (0x0003f052) cell_ai5_widget_pane_t8_ParamLimits

0x7494,	// (0x0003f052) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x000479fe) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x000479fe) cell_ai5_widget_pane_t

0x74f3,	// (0x0003f0b1) grid_ai5_widget_pane

0xb6b1,	// (0x0004326f) highlight_cell_ai5_widget_pane_ParamLimits

0xb6b1,	// (0x0004326f) highlight_cell_ai5_widget_pane

0xe82c,	// (0x000463ea) ai5_sk_left_pane

0xe836,	// (0x000463f4) ai5_sk_middle_pane

0xe840,	// (0x000463fe) ai5_sk_right_pane

0x751f,	// (0x0003f0dd) bg_ai5_widget_pane_g1_ParamLimits

0x751f,	// (0x0003f0dd) bg_ai5_widget_pane_g1

0x752b,	// (0x0003f0e9) bg_ai5_widget_pane_g2_ParamLimits

0x752b,	// (0x0003f0e9) bg_ai5_widget_pane_g2

0x7537,	// (0x0003f0f5) bg_ai5_widget_pane_g3_ParamLimits

0x7537,	// (0x0003f0f5) bg_ai5_widget_pane_g3

0x7543,	// (0x0003f101) bg_ai5_widget_pane_g4_ParamLimits

0x7543,	// (0x0003f101) bg_ai5_widget_pane_g4

0x754f,	// (0x0003f10d) bg_ai5_widget_pane_g5_ParamLimits

0x754f,	// (0x0003f10d) bg_ai5_widget_pane_g5

0x755b,	// (0x0003f119) bg_ai5_widget_pane_g6_ParamLimits

0x755b,	// (0x0003f119) bg_ai5_widget_pane_g6

0x7567,	// (0x0003f125) bg_ai5_widget_pane_g7_ParamLimits

0x7567,	// (0x0003f125) bg_ai5_widget_pane_g7

0x7573,	// (0x0003f131) bg_ai5_widget_pane_g8_ParamLimits

0x7573,	// (0x0003f131) bg_ai5_widget_pane_g8

0x757f,	// (0x0003f13d) bg_ai5_widget_pane_g9_ParamLimits

0x757f,	// (0x0003f13d) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00047a13) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00047a13) bg_ai5_widget_pane_g

0x75b1,	// (0x0003f16f) cell_shortcut_ai5_widget_pane_ParamLimits

0x75b1,	// (0x0003f16f) cell_shortcut_ai5_widget_pane

0xf546,	// (0x00047104) bg_cell_shortcut_ai5_widget_pane

0x75c2,	// (0x0003f180) cell_grid_ai5_widget_pane_g1

0xf546,	// (0x00047104) highlight_cell_shortcut_ai5_widget_pane

0x26aa,	// (0x0003a268) ai5_sk_left_pane_g1

0x75cb,	// (0x0003f189) ai5_sk_left_pane_g2

0x75d3,	// (0x0003f191) ai5_sk_left_pane_g3

0x75db,	// (0x0003f199) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x00047a26) ai5_sk_left_pane_g

0x75e3,	// (0x0003f1a1) ai5_sk_left_pane_t1

0x26b2,	// (0x0003a270) ai5_sk_right_pane_g1

0x75f1,	// (0x0003f1af) ai5_sk_right_pane_g2

0x75f9,	// (0x0003f1b7) ai5_sk_right_pane_g3

0x7601,	// (0x0003f1bf) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x00047a2f) ai5_sk_right_pane_g

0x7609,	// (0x0003f1c7) ai5_sk_right_pane_t1

0x26b2,	// (0x0003a270) ai5_sk_middle_pane_g1

0x26aa,	// (0x0003a268) ai5_sk_middle_pane_g2

0x26ca,	// (0x0003a288) ai5_sk_middle_pane_g3

0x75f9,	// (0x0003f1b7) ai5_sk_middle_pane_g4

0x75d3,	// (0x0003f191) ai5_sk_middle_pane_g5

0x7617,	// (0x0003f1d5) ai5_sk_middle_pane_g6

0xe84a,	// (0x00046408) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00047a38) ai5_sk_middle_pane_g

0xa6c4,	// (0x00042282) aid_touch_area_size_lc0_ParamLimits

0xa6c4,	// (0x00042282) aid_touch_area_size_lc0

0x11bc,	// (0x00038d7a) cell_hwr_candidate_pane_t1_ParamLimits

0x21f7,	// (0x00039db5) aid_touch_navi_pane

0xbe78,	// (0x00043a36) status_dt_navi_pane_ParamLimits

0xbe78,	// (0x00043a36) status_dt_navi_pane

0xbe90,	// (0x00043a4e) status_dt_sta_pane_ParamLimits

0xbe90,	// (0x00043a4e) status_dt_sta_pane

0xe852,	// (0x00046410) dt_sta_controll_pane

0xe85f,	// (0x0004641d) dt_sta_indi_pane

0xe86c,	// (0x0004642a) dt_sta_title_pane

0xb429,	// (0x00042fe7) bg_dt_sta_indi_pane_ParamLimits

0xb429,	// (0x00042fe7) bg_dt_sta_indi_pane

0xe87e,	// (0x0004643c) dt_sta_battery_pane

0xe886,	// (0x00046444) dt_sta_indi_pane_g1

0x7669,	// (0x0003f227) dt_sta_indi_pane_g2

0x7672,	// (0x0003f230) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00047a47) dt_sta_indi_pane_g

0x767b,	// (0x0003f239) dt_sta_signal_pane

0xb6b1,	// (0x0004326f) bg_dt_sta_title_pane_ParamLimits

0xb6b1,	// (0x0004326f) bg_dt_sta_title_pane

0x34e4,	// (0x0003b0a2) dt_sta_title_pane_g1

0xe88f,	// (0x0004644d) dt_sta_title_pane_t1_ParamLimits

0xe88f,	// (0x0004644d) dt_sta_title_pane_t1

0xb28f,	// (0x00042e4d) bg_dt_sta_control_pane

0xe8a4,	// (0x00046462) dt_sta_controll_pane_g1

0xe8ad,	// (0x0004646b) bg_dt_sta_title_pane_g1

0xe8b6,	// (0x00046474) bg_dt_sta_title_pane_g2

0xe8bf,	// (0x0004647d) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x00047a4e) bg_dt_sta_title_pane_g

0x4c7c,	// (0x0003c83a) bg_dt_sta_indi_pane_g1

0x76bd,	// (0x0003f27b) dt_sta_signal_pane_g1

0x76c5,	// (0x0003f283) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x00047a55) dt_sta_signal_pane_g

0x76cd,	// (0x0003f28b) dt_sta_battery_pane_g1

0x76d6,	// (0x0003f294) dt_sta_battery_pane_t1

0x4c7c,	// (0x0003c83a) bg_dt_sta_control_pane_g1

0xbb67,	// (0x00043725) fep_china_uni_eep_pane

0xbb6f,	// (0x0004372d) fep_china_uni_entry_pane_ParamLimits

0xbb7f,	// (0x0004373d) popup_fep_china_uni_window_g1_ParamLimits

0xbb8f,	// (0x0004374d) popup_fep_china_uni_window_g2_ParamLimits

0xbb8f,	// (0x0004374d) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x000472cc) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x000472cc) popup_fep_china_uni_window_g

0x76e5,	// (0x0003f2a3) fep_china_uni_eep_pane_g1

0x76ed,	// (0x0003f2ab) fep_china_uni_eep_pane_t1

0x715e,	// (0x0003ed1c) aid_touch_area_size_smil_player

0x234d,	// (0x00039f0b) lc0_clock_pane

0x2534,	// (0x0003a0f2) status_pane_g5_ParamLimits

0x2534,	// (0x0003a0f2) status_pane_g5

0xa0d6,	// (0x00041c94) popup_keymap_window

0x24f2,	// (0x0003a0b0) status_icon_pane

0x7348,	// (0x0003ef06) cell_ai5_widget_pane_g3_ParamLimits

0x7362,	// (0x0003ef20) cell_ai5_widget_pane_g4_ParamLimits

0x7372,	// (0x0003ef30) cell_ai5_widget_pane_g5_ParamLimits

0x739a,	// (0x0003ef58) cell_ai5_widget_pane_g8_ParamLimits

0x739a,	// (0x0003ef58) cell_ai5_widget_pane_g8

0x73ae,	// (0x0003ef6c) cell_ai5_widget_pane_g9_ParamLimits

0x73ae,	// (0x0003ef6c) cell_ai5_widget_pane_g9

0x73c2,	// (0x0003ef80) cell_ai5_widget_pane_g10_ParamLimits

0x73c2,	// (0x0003ef80) cell_ai5_widget_pane_g10

0x76fc,	// (0x0003f2ba) status_icon_pane_g1

0xb28f,	// (0x00042e4d) bg_popup_sub_pane_cp13

0x7704,	// (0x0003f2c2) popup_keymap_window_t1

0x9db2,	// (0x00041970) control_pane_g6_ParamLimits

0x9db2,	// (0x00041970) control_pane_g6

0x9dbf,	// (0x0004197d) control_pane_g7_ParamLimits

0x9dbf,	// (0x0004197d) control_pane_g7

0x9dcc,	// (0x0004198a) control_pane_g8_ParamLimits

0x9dcc,	// (0x0004198a) control_pane_g8

0xe852,	// (0x00046410) dt_sta_controll_pane_ParamLimits

0xe85f,	// (0x0004641d) dt_sta_indi_pane_ParamLimits

0xe86c,	// (0x0004642a) dt_sta_title_pane_ParamLimits

0xb5fc,	// (0x000431ba) aid_size_touch_scroll_bar_cale

0x8a32,	// (0x000405f0) popup_discreet_window_ParamLimits

0x8a32,	// (0x000405f0) popup_discreet_window

0x8a84,	// (0x00040642) popup_sk_window

0x2d28,	// (0x0003a8e6) bg_popup_sub_pane_cp28_ParamLimits

0x2d28,	// (0x0003a8e6) bg_popup_sub_pane_cp28

0x7712,	// (0x0003f2d0) popup_discreet_window_g1_ParamLimits

0x7712,	// (0x0003f2d0) popup_discreet_window_g1

0xe8c8,	// (0x00046486) popup_discreet_window_t1_ParamLimits

0xe8c8,	// (0x00046486) popup_discreet_window_t1

0x7750,	// (0x0003f30e) popup_discreet_window_t2_ParamLimits

0x7750,	// (0x0003f30e) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x00047a5a) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x00047a5a) popup_discreet_window_t

0x1cc4,	// (0x00039882) popup_sk_window_g1

0x1cce,	// (0x0003988c) popup_sk_window_g2

0x0001,

0xfea3,	// (0x00047a61) popup_sk_window_g

0xb05a,	// (0x00042c18) popup_sk_window_t1

0xb068,	// (0x00042c26) popup_sk_window_t1_copy1

0x7334,	// (0x0003eef2) cell_ai5_widget_pane_g2_ParamLimits

0x74a6,	// (0x0003f064) cell_ai5_widget_pane_t9_ParamLimits

0x74a6,	// (0x0003f064) cell_ai5_widget_pane_t9

0xb28f,	// (0x00042e4d) main_fep_fshwr2_pane

0xb076,	// (0x00042c34) aid_fshwr2_btn_pane

0xb088,	// (0x00042c46) aid_fshwr2_syb_pane

0xb09a,	// (0x00042c58) aid_fshwr2_txt_pane

0xb0a9,	// (0x00042c67) fshwr2_func_candi_pane

0xb0c8,	// (0x00042c86) fshwr2_hwr_syb_pane

0xb0e3,	// (0x00042ca1) fshwr2_icf_pane

0xeda5,	// (0x00046963) fshwr2_icf_bg_pane

0x1d73,	// (0x00039931) fshwr2_icf_pane_t1_ParamLimits

0x1d73,	// (0x00039931) fshwr2_icf_pane_t1

0xbae4,	// (0x000436a2) fshwr2_func_candi_pane_g1

0xe8e6,	// (0x000464a4) fshwr2_func_candi_row_pane_ParamLimits

0xe8e6,	// (0x000464a4) fshwr2_func_candi_row_pane

0xb10f,	// (0x00042ccd) cell_fshwr2_syb_pane_ParamLimits

0xb10f,	// (0x00042ccd) cell_fshwr2_syb_pane

0x118d,	// (0x00038d4b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x118d,	// (0x00038d4b) fshwr2_hwr_syb_pane_g1

0xeda5,	// (0x00046963) bg_popup_call_pane_cp01

0xb125,	// (0x00042ce3) fshwr2_func_candi_cell_pane_ParamLimits

0xb125,	// (0x00042ce3) fshwr2_func_candi_cell_pane

0x2b11,	// (0x0003a6cf) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2b11,	// (0x0003a6cf) fshwr2_func_candi_cell_bg_pane

0xb170,	// (0x00042d2e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb170,	// (0x00042d2e) fshwr2_func_candi_cell_pane_g1

0xb1a7,	// (0x00042d65) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb1a7,	// (0x00042d65) fshwr2_func_candi_cell_pane_t1

0xeda5,	// (0x00046963) bg_button_pane_cp08

0x77b2,	// (0x0003f370) cell_fshwr2_syb_bg_pane

0xb1c2,	// (0x00042d80) cell_fshwr2_syb_bg_pane_g1

0xb1ca,	// (0x00042d88) cell_fshwr2_syb_bg_pane_t1

0xb6b1,	// (0x0004326f) main_tmo_pane

0xc553,	// (0x00044111) uni_indicator_pane_g1_ParamLimits

0xc569,	// (0x00044127) uni_indicator_pane_g2_ParamLimits

0xc57f,	// (0x0004413d) uni_indicator_pane_g3_ParamLimits

0x3851,	// (0x0003b40f) uni_indicator_pane_g4_ParamLimits

0x3851,	// (0x0003b40f) uni_indicator_pane_g4

0x3865,	// (0x0003b423) uni_indicator_pane_g5_ParamLimits

0x3865,	// (0x0003b423) uni_indicator_pane_g5

0x3865,	// (0x0003b423) uni_indicator_pane_g6_ParamLimits

0x3865,	// (0x0003b423) uni_indicator_pane_g6

0xf906,	// (0x000474c4) uni_indicator_pane_g_ParamLimits

0xdb6f,	// (0x0004572d) popup_tmo_note_window_ParamLimits

0xdb6f,	// (0x0004572d) popup_tmo_note_window

0x1544,	// (0x00039102) fshwr2_bg_pane

0xb198,	// (0x00042d56) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb198,	// (0x00042d56) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x00047a66) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x00047a66) fshwr2_func_candi_cell_pane_g

0x1175,	// (0x00038d33) bg_popup_window_pane_cp01

0x1e3f,	// (0x000399fd) bg_popup_window_pane_g1_cp01

0x77ba,	// (0x0003f378) bg_popup_window_pane_cp22_ParamLimits

0x77ba,	// (0x0003f378) bg_popup_window_pane_cp22

0xe909,	// (0x000464c7) listscroll_tmo_link_pane_ParamLimits

0xe909,	// (0x000464c7) listscroll_tmo_link_pane

0x7808,	// (0x0003f3c6) popup_tmo_note_window_g1_ParamLimits

0x7808,	// (0x0003f3c6) popup_tmo_note_window_g1

0xe949,	// (0x00046507) tmo_note_info_pane_ParamLimits

0xe949,	// (0x00046507) tmo_note_info_pane

0xe963,	// (0x00046521) list_tmo_note_info_pane_g1_ParamLimits

0xe963,	// (0x00046521) list_tmo_note_info_pane_g1

0x7846,	// (0x0003f404) list_tmo_note_info_pane_g2_ParamLimits

0x7846,	// (0x0003f404) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x00047a6b) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x00047a6b) list_tmo_note_info_pane_g

0x7862,	// (0x0003f420) list_tmo_note_info_text_pane_ParamLimits

0x7862,	// (0x0003f420) list_tmo_note_info_text_pane

0x78e3,	// (0x0003f4a1) list_tmo_link_pane

0x78f0,	// (0x0003f4ae) scroll_pane_cp20

0x78fd,	// (0x0003f4bb) list_single_tmo_link_pane_ParamLimits

0x78fd,	// (0x0003f4bb) list_single_tmo_link_pane

0x790d,	// (0x0003f4cb) list_single_tmo_link_pane_t1

0x791b,	// (0x0003f4d9) list_tmo_note_info_text_pane_t1_ParamLimits

0x791b,	// (0x0003f4d9) list_tmo_note_info_text_pane_t1

0x971c,	// (0x000412da) aid_size_touch_scroll_bar_cp01_ParamLimits

0x971c,	// (0x000412da) aid_size_touch_scroll_bar_cp01

0x9613,	// (0x000411d1) aid_size_touch_slider_marker

0x8a74,	// (0x00040632) popup_settings_window_ParamLimits

0x8a74,	// (0x00040632) popup_settings_window

0xd466,	// (0x00045024) popup_candi_list_indi_window

0x21f7,	// (0x00039db5) aid_touch_navi_pane_ParamLimits

0x149f,	// (0x0003905d) rs_clock_indi_pane

0x14a8,	// (0x00039066) sctrl_sk_bottom_pane_ParamLimits

0x14b9,	// (0x00039077) sctrl_sk_top_pane_ParamLimits

0xacc0,	// (0x0004287e) popup_fep_tooltip_window

0x72ae,	// (0x0003ee6c) aid_size_cell_widget_grid_ParamLimits

0x731f,	// (0x0003eedd) cell_ai5_widget_pane_g1_ParamLimits

0x731f,	// (0x0003eedd) cell_ai5_widget_pane_g1

0x7382,	// (0x0003ef40) cell_ai5_widget_pane_g6_ParamLimits

0x738e,	// (0x0003ef4c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x000479e9) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x000479e9) cell_ai5_widget_pane_g

0x74d5,	// (0x0003f093) cell_ai5_widget_pane_t10_ParamLimits

0x74d5,	// (0x0003f093) cell_ai5_widget_pane_t10

0x74f3,	// (0x0003f0b1) grid_ai5_widget_pane_ParamLimits

0x758b,	// (0x0003f149) cell_contacts_ai5_widget_pane_ParamLimits

0x758b,	// (0x0003f149) cell_contacts_ai5_widget_pane

0x7765,	// (0x0003f323) popup_discreet_window_t3_ParamLimits

0x7765,	// (0x0003f323) popup_discreet_window_t3

0xb0fb,	// (0x00042cb9) popup_fshwr2_char_preview_window_ParamLimits

0xb0fb,	// (0x00042cb9) popup_fshwr2_char_preview_window

0xe97a,	// (0x00046538) tmo_note_info_pane_t1

0xe98f,	// (0x0004654d) tmo_note_info_pane_t2

0xe9a6,	// (0x00046564) tmo_note_info_pane_t3

0x78bf,	// (0x0003f47d) tmo_note_info_pane_t4

0x78d1,	// (0x0003f48f) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x00047a70) tmo_note_info_pane_t

0x78e3,	// (0x0003f4a1) list_tmo_link_pane_ParamLimits

0x78f0,	// (0x0003f4ae) scroll_pane_cp20_ParamLimits

0xeda5,	// (0x00046963) bg_popup_fep_char_preview_window_cp01

0xe9bb,	// (0x00046579) popup_fshwr2_char_preview_window_t1

0x7942,	// (0x0003f500) popup_candi_list_indi_window_g1

0x794b,	// (0x0003f509) bg_cell_contacts_ai5_widget_pane

0x7957,	// (0x0003f515) cell_contacts_ai5_widget_pane_g1

0x532d,	// (0x0003ceeb) cell_contacts_ai5_widget_pane_g2

0x796c,	// (0x0003f52a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x00047a7b) cell_contacts_ai5_widget_pane_g

0x7978,	// (0x0003f536) cell_contacts_ai5_widget_pane_t1

0xb6b1,	// (0x0004326f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x79ef,	// (0x0003f5ad) settings_container_pane

0xf546,	// (0x00047104) listscroll_set_pane_copy1

0x437e,	// (0x0003bf3c) scroll_pane_cp121_copy1

0x2ad5,	// (0x0003a693) set_content_pane_copy1

0xea2e,	// (0x000465ec) aid_height_set_list_copy1_ParamLimits

0xea2e,	// (0x000465ec) aid_height_set_list_copy1

0x3a5d,	// (0x0003b61b) aid_size_parent_copy1_ParamLimits

0x3a5d,	// (0x0003b61b) aid_size_parent_copy1

0xea3a,	// (0x000465f8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xea3a,	// (0x000465f8) button_value_adjust_pane_cp6_copy1

0x217b,	// (0x00039d39) list_highlight_pane_cp2_copy1_ParamLimits

0x217b,	// (0x00039d39) list_highlight_pane_cp2_copy1

0xea4e,	// (0x0004660c) list_set_pane_copy1_ParamLimits

0xea4e,	// (0x0004660c) list_set_pane_copy1

0xe9c9,	// (0x00046587) main_pane_set_t1_copy1_ParamLimits

0xe9c9,	// (0x00046587) main_pane_set_t1_copy1

0xea03,	// (0x000465c1) main_pane_set_t2_copy1_ParamLimits

0xea03,	// (0x000465c1) main_pane_set_t2_copy1

0xeafb,	// (0x000466b9) main_pane_set_t3_copy1

0xeb09,	// (0x000466c7) main_pane_set_t4_copy1

0xea22,	// (0x000465e0) set_content_pane_g1_copy1_ParamLimits

0xea22,	// (0x000465e0) set_content_pane_g1_copy1

0xeb17,	// (0x000466d5) setting_code_pane_copy1

0x7aec,	// (0x0003f6aa) setting_slider_graphic_pane_copy1

0x7aec,	// (0x0003f6aa) setting_slider_pane_copy1

0x7aec,	// (0x0003f6aa) setting_text_pane_copy1

0x7aec,	// (0x0003f6aa) setting_volume_pane_copy1

0xeb17,	// (0x000466d5) settings_code_pane_cp2_copy1

0xeb1f,	// (0x000466dd) settings_code_pane_cp_copy1_ParamLimits

0xeb1f,	// (0x000466dd) settings_code_pane_cp_copy1

0xb1d9,	// (0x00042d97) volume_set_pane_copy1

0xeb33,	// (0x000466f1) volume_set_pane_g10_copy1

0xeb3b,	// (0x000466f9) volume_set_pane_g1_copy1

0xeb43,	// (0x00046701) volume_set_pane_g2_copy1

0xeb4b,	// (0x00046709) volume_set_pane_g3_copy1

0xeb53,	// (0x00046711) volume_set_pane_g4_copy1

0xeb5b,	// (0x00046719) volume_set_pane_g5_copy1

0xeb63,	// (0x00046721) volume_set_pane_g6_copy1

0xeb6b,	// (0x00046729) volume_set_pane_g7_copy1

0xeb73,	// (0x00046731) volume_set_pane_g8_copy1

0xeb7b,	// (0x00046739) volume_set_pane_g9_copy1

0xb2ff,	// (0x00042ebd) bg_set_opt_pane_cp_copy1_ParamLimits

0xb2ff,	// (0x00042ebd) bg_set_opt_pane_cp_copy1

0xb1e1,	// (0x00042d9f) setting_slider_pane_t1_copy1_ParamLimits

0xb1e1,	// (0x00042d9f) setting_slider_pane_t1_copy1

0xb1ff,	// (0x00042dbd) setting_slider_pane_t2_copy1_ParamLimits

0xb1ff,	// (0x00042dbd) setting_slider_pane_t2_copy1

0xb219,	// (0x00042dd7) setting_slider_pane_t3_copy1_ParamLimits

0xb219,	// (0x00042dd7) setting_slider_pane_t3_copy1

0xb231,	// (0x00042def) slider_set_pane_copy1_ParamLimits

0xb231,	// (0x00042def) slider_set_pane_copy1

0xb709,	// (0x000432c7) set_opt_bg_pane_g1_copy2

0xb711,	// (0x000432cf) set_opt_bg_pane_g2_copy2

0x7b58,	// (0x0003f716) set_opt_bg_pane_g3_copy2

0xb721,	// (0x000432df) set_opt_bg_pane_g4_copy2

0xb729,	// (0x000432e7) set_opt_bg_pane_g5_copy2

0xb731,	// (0x000432ef) set_opt_bg_pane_g6_copy2

0xeb83,	// (0x00046741) set_opt_bg_pane_g7_copy2

0x7b6a,	// (0x0003f728) set_opt_bg_pane_g8_copy2

0x7b74,	// (0x0003f732) set_opt_bg_pane_g9_copy2

0xb247,	// (0x00042e05) aid_size_touch_slider_mark_copy1_ParamLimits

0xb247,	// (0x00042e05) aid_size_touch_slider_mark_copy1

0xeb8b,	// (0x00046749) slider_set_pane_g1_copy1

0x1eca,	// (0x00039a88) slider_set_pane_g2_copy1

0xa8a3,	// (0x00042461) slider_set_pane_g3_copy1_ParamLimits

0xa8a3,	// (0x00042461) slider_set_pane_g3_copy1

0xa8b7,	// (0x00042475) slider_set_pane_g4_copy1_ParamLimits

0xa8b7,	// (0x00042475) slider_set_pane_g4_copy1

0xa8cf,	// (0x0004248d) slider_set_pane_g5_copy1_ParamLimits

0xa8cf,	// (0x0004248d) slider_set_pane_g5_copy1

0xa8a3,	// (0x00042461) slider_set_pane_g6_copy1_ParamLimits

0xa8a3,	// (0x00042461) slider_set_pane_g6_copy1

0xb25b,	// (0x00042e19) slider_set_pane_g7_copy1_ParamLimits

0xb25b,	// (0x00042e19) slider_set_pane_g7_copy1

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp2_copy1

0xeb94,	// (0x00046752) setting_slider_graphic_pane_g1_copy1

0xeb9d,	// (0x0004675b) setting_slider_graphic_pane_t1_copy1

0xebad,	// (0x0004676b) setting_slider_graphic_pane_t2_copy1

0xebbd,	// (0x0004677b) slider_set_pane_cp_copy1

0x7bc0,	// (0x0003f77e) input_focus_pane_cp1_copy1

0x7bc9,	// (0x0003f787) list_set_text_pane_copy1

0x7bd1,	// (0x0003f78f) setting_text_pane_g1_copy1

0xebcd,	// (0x0004678b) set_text_pane_t1_copy1

0x7bc0,	// (0x0003f77e) input_focus_pane_cp2_copy1

0x7bd1,	// (0x0003f78f) setting_code_pane_g1_copy1

0x7bda,	// (0x0003f798) setting_code_pane_t1_copy1

0x7be8,	// (0x0003f7a6) list_set_graphic_pane_copy1

0xb2a3,	// (0x00042e61) bg_set_opt_pane_cp4_copy1

0xf2cc,	// (0x00046e8a) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2cc,	// (0x00046e8a) list_set_graphic_pane_g1_copy1

0x7bfc,	// (0x0003f7ba) list_set_graphic_pane_g2_copy1

0xf2e4,	// (0x00046ea2) list_set_graphic_pane_t1_copy1_ParamLimits

0xf2e4,	// (0x00046ea2) list_set_graphic_pane_t1_copy1

0x4c7c,	// (0x0003c83a) rs_clock_indi_pane_g1

0x7c04,	// (0x0003f7c2) rs_clock_indi_pane_t1

0x7c12,	// (0x0003f7d0) rs_indi_pane

0x7c1a,	// (0x0003f7d8) rs_indi_pane_g1

0x7c23,	// (0x0003f7e1) rs_indi_pane_g2

0x7942,	// (0x0003f500) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x00047a82) rs_indi_pane_g

0xf546,	// (0x00047104) bg_popup_preview_window_pane_cp03

0x7c2c,	// (0x0003f7ea) popup_fep_tooltip_window_t1

0xcfef,	// (0x00044bad) popup_note2_window_g2_ParamLimits

0xcfef,	// (0x00044bad) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00047822) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00047822) popup_note2_window_g

0x5e0d,	// (0x0003d9cb) bg_popup_sub_pane_cp11_ParamLimits

0x5e1a,	// (0x0003d9d8) cell_ai3_links_pane_g1_ParamLimits

0x5e31,	// (0x0003d9ef) cell_ai3_links_pane_t1

0xebcd,	// (0x0004678b) set_text_pane_t1_copy1_ParamLimits

0xf485,	// (0x00047043) cell_graphic_popup_pane_cp2_ParamLimits

0xf485,	// (0x00047043) cell_graphic_popup_pane_cp2

0xebe9,	// (0x000467a7) cell_graphic_popup_pane_g1_cp2

0xb57f,	// (0x0004313d) cell_graphic_popup_pane_g2_cp2

0x7c42,	// (0x0003f800) cell_graphic_popup_pane_g3_cp2

0xebf1,	// (0x000467af) cell_graphic_popup_pane_t2_cp2

0xb590,	// (0x0004314e) grid_highlight_pane_cp3_cp2

0xb961,	// (0x0004351f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb6b1,	// (0x0004326f) main_tmo_pane_ParamLimits

0xdb63,	// (0x00045721) popup_tmo_big_image_note_window

0x730e,	// (0x0003eecc) cell_ai5_widget_list_pane

0x7316,	// (0x0003eed4) cell_ai5_widget_lrg_icon_pane

0xe97a,	// (0x00046538) tmo_note_info_pane_t1_ParamLimits

0xe98f,	// (0x0004654d) tmo_note_info_pane_t2_ParamLimits

0xe9a6,	// (0x00046564) tmo_note_info_pane_t3_ParamLimits

0x78bf,	// (0x0003f47d) tmo_note_info_pane_t4_ParamLimits

0x78d1,	// (0x0003f48f) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x00047a70) tmo_note_info_pane_t_ParamLimits

0x79ef,	// (0x0003f5ad) settings_container_pane_ParamLimits

0xebc5,	// (0x00046783) indicator_popup_pane_cp5

0xebc5,	// (0x00046783) indicator_popup_pane_cp6

0x7be8,	// (0x0003f7a6) list_set_graphic_pane_copy1_ParamLimits

0xb28f,	// (0x00042e4d) bg_popup_window_pane_cp23

0x7c58,	// (0x0003f816) popup_tmo_big_image_note_window_g1

0x7c61,	// (0x0003f81f) popup_tmo_big_image_note_window_t1

0x7c71,	// (0x0003f82f) popup_tmo_big_image_note_window_t2

0x7c81,	// (0x0003f83f) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x00047a89) popup_tmo_big_image_note_window_t

0x4c7c,	// (0x0003c83a) cell_ai5_widget_lrg_icon_pane_g1

0x7c91,	// (0x0003f84f) cell_ai5_widget_lrg_icon_pane_t1

0x7c9f,	// (0x0003f85d) cell_ai5_widget_list_row_pane_ParamLimits

0x7c9f,	// (0x0003f85d) cell_ai5_widget_list_row_pane

0x7cb6,	// (0x0003f874) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7cb6,	// (0x0003f874) cell_ai5_widget_list_row_pane_g1

0xebff,	// (0x000467bd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xebff,	// (0x000467bd) cell_ai5_widget_list_row_pane_t1

0x7cee,	// (0x0003f8ac) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7cee,	// (0x0003f8ac) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x00047a90) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x00047a90) cell_ai5_widget_list_row_pane_t

0xeda5,	// (0x00046963) main_fep_vtchi_ss_pane

0x7d36,	// (0x0003f8f4) popup_fep_char_pre_window

0x7d3e,	// (0x0003f8fc) popup_fep_ituss_window

0xec43,	// (0x00046801) popup_fep_vkbss_window

0xec50,	// (0x0004680e) grid_vkbss_keypad_pane_ParamLimits

0xec50,	// (0x0004680e) grid_vkbss_keypad_pane

0x7d99,	// (0x0003f957) ituss_keypad_pane

0x1ef4,	// (0x00039ab2) aid_vkbss_key_offset_ParamLimits

0x1ef4,	// (0x00039ab2) aid_vkbss_key_offset

0xb271,	// (0x00042e2f) cell_vkbss_key_pane_ParamLimits

0xb271,	// (0x00042e2f) cell_vkbss_key_pane

0x250e,	// (0x0003a0cc) bg_cell_vkbss_key_g1_ParamLimits

0x250e,	// (0x0003a0cc) bg_cell_vkbss_key_g1

0xec60,	// (0x0004681e) cell_vkbss_key_3p_pane_ParamLimits

0xec60,	// (0x0004681e) cell_vkbss_key_3p_pane

0xec7a,	// (0x00046838) cell_vkbss_key_g1_ParamLimits

0xec7a,	// (0x00046838) cell_vkbss_key_g1

0xec94,	// (0x00046852) cell_vkbss_key_t1_ParamLimits

0xec94,	// (0x00046852) cell_vkbss_key_t1

0x1f16,	// (0x00039ad4) cell_ituss_key_pane_ParamLimits

0x1f16,	// (0x00039ad4) cell_ituss_key_pane

0x7dfb,	// (0x0003f9b9) bg_cell_ituss_key_g1_ParamLimits

0x7dfb,	// (0x0003f9b9) bg_cell_ituss_key_g1

0x7e07,	// (0x0003f9c5) cell_ituss_key_pane_g1_ParamLimits

0x7e07,	// (0x0003f9c5) cell_ituss_key_pane_g1

0x1f27,	// (0x00039ae5) cell_ituss_key_pane_g2_ParamLimits

0x1f27,	// (0x00039ae5) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x00047a97) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x00047a97) cell_ituss_key_pane_g

0x1f53,	// (0x00039b11) cell_ituss_key_t1_ParamLimits

0x1f53,	// (0x00039b11) cell_ituss_key_t1

0x1f8d,	// (0x00039b4b) cell_ituss_key_t2_ParamLimits

0x1f8d,	// (0x00039b4b) cell_ituss_key_t2

0x1fbe,	// (0x00039b7c) cell_ituss_key_t3_ParamLimits

0x1fbe,	// (0x00039b7c) cell_ituss_key_t3

0x1f8d,	// (0x00039b4b) cell_ituss_key_t4_ParamLimits

0x1f8d,	// (0x00039b4b) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00047a9e) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00047a9e) cell_ituss_key_t

0x7e2d,	// (0x0003f9eb) cell_vkbss_key_3p_pane_g1

0x7e35,	// (0x0003f9f3) cell_vkbss_key_3p_pane_g2

0x7e3d,	// (0x0003f9fb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x00047aa9) cell_vkbss_key_3p_pane_g

0xf546,	// (0x00047104) bg_popup_fep_char_preview_window_cp02

0x7e45,	// (0x0003fa03) popup_fep_char_pre_window_t1

0xe822,	// (0x000463e0) main_ai5_sk_pane

0x794b,	// (0x0003f509) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7957,	// (0x0003f515) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x532d,	// (0x0003ceeb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x796c,	// (0x0003f52a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x00047a7b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7978,	// (0x0003f536) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb6b1,	// (0x0004326f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecbf,	// (0x0004687d) main_ai5_sk_pane_g1

0xc1ac,	// (0x00043d6a) popup_query_code_window_g1

0x7d54,	// (0x0003f912) popup_fep_vkb_icf_pane

0x7d73,	// (0x0003f931) popup_fep_vtchi_icf_pane

0x7e5c,	// (0x0003fa1a) bg_icf_pane

0x7e68,	// (0x0003fa26) list_vkb_icf_pane

0x7e77,	// (0x0003fa35) bg_icf_pane_cp01

0x7e8a,	// (0x0003fa48) vtchi_icf_list_pane

0x7e9a,	// (0x0003fa58) list_vkb_icf_pane_t1_ParamLimits

0x7e9a,	// (0x0003fa58) list_vkb_icf_pane_t1

0x7eb1,	// (0x0003fa6f) vtchi_icf_list_pane_t1_ParamLimits

0x7eb1,	// (0x0003fa6f) vtchi_icf_list_pane_t1

0x7d3e,	// (0x0003f8fc) popup_fep_ituss_window_ParamLimits

0x7d73,	// (0x0003f931) popup_fep_vtchi_icf_pane_ParamLimits

0x7d99,	// (0x0003f957) ituss_keypad_pane_ParamLimits

0x1ee8,	// (0x00039aa6) ituss_sks_pane

0x7e5c,	// (0x0003fa1a) bg_icf_pane_ParamLimits

0xec30,	// (0x000467ee) icf_edit_indi_pane_ParamLimits

0xec30,	// (0x000467ee) icf_edit_indi_pane

0x7e68,	// (0x0003fa26) list_vkb_icf_pane_ParamLimits

0x7e77,	// (0x0003fa35) bg_icf_pane_cp01_ParamLimits

0x7d29,	// (0x0003f8e7) icf_edit_indi_pane_cp01_ParamLimits

0x7d29,	// (0x0003f8e7) icf_edit_indi_pane_cp01

0x7e92,	// (0x0003fa50) vtchi_query_pane

0x712e,	// (0x0003ecec) icf_edit_indi_pane_g1_ParamLimits

0x712e,	// (0x0003ecec) icf_edit_indi_pane_g1

0xecc8,	// (0x00046886) icf_edit_indi_pane_g2_ParamLimits

0xecc8,	// (0x00046886) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00047ac1) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00047ac1) icf_edit_indi_pane_g

0xecda,	// (0x00046898) icf_edit_indi_pane_t1

0x7ecf,	// (0x0003fa8d) bg_input_focus_pane_cp042

0xb5f3,	// (0x000431b1) vtchi_button_pane

0x7ed8,	// (0x0003fa96) vtchi_query_pane_t1

0x7ee6,	// (0x0003faa4) vtchi_query_pane_t2

0x7ef4,	// (0x0003fab2) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x00047ab0) vtchi_query_pane_t

0xeda5,	// (0x00046963) bg_button_pane_cp13

0x7f02,	// (0x0003fac0) vtchi_button_pane_g1

0x2001,	// (0x00039bbf) ituss_sks_pane_g1

0x200c,	// (0x00039bca) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00047ab7) ituss_sks_pane_g

0x7f0a,	// (0x0003fac8) ituss_sks_pane_t1

0x7f18,	// (0x0003fad6) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00047abc) ituss_sks_pane_t

0x46f9,	// (0x0003c2b7) indicator_nsta_pane_cp_g1

0x4701,	// (0x0003c2bf) indicator_nsta_pane_cp_g2

0x4709,	// (0x0003c2c7) indicator_nsta_pane_cp_g3

0x46f9,	// (0x0003c2b7) indicator_nsta_pane_cp_g4

0x4701,	// (0x0003c2bf) indicator_nsta_pane_cp_g5

0x4709,	// (0x0003c2c7) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00047660) indicator_nsta_pane_cp_g

0xe5ff,	// (0x000461bd) cell_graphic2_pane_t2_ParamLimits

0xe5ff,	// (0x000461bd) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x00047972) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x00047972) cell_graphic2_pane_t

0xe638,	// (0x000461f6) cell_graphic2_control_pane_t1

0x99e2,	// (0x000415a0) signal_pane_g3_ParamLimits

0x99e2,	// (0x000415a0) signal_pane_g3

0x99f6,	// (0x000415b4) signal_pane_g4_ParamLimits

0x99f6,	// (0x000415b4) signal_pane_g4

0x7d00,	// (0x0003f8be) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d00,	// (0x0003f8be) cell_ai5_widget_list_row_pane_t3

0x7e1b,	// (0x0003f9d9) cell_ituss_key_pane_t1_ParamLimits

0x7e1b,	// (0x0003f9d9) cell_ituss_key_pane_t1

0x27a4,	// (0x0003a362) form_field_data_wide_pane_vc_t2_ParamLimits

0x27a4,	// (0x0003a362) form_field_data_wide_pane_vc_t2

0x27b8,	// (0x0003a376) form_field_data_wide_pane_vc_t3_ParamLimits

0x27b8,	// (0x0003a376) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x000473ac) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x000473ac) form_field_data_wide_pane_vc_t

0x43c0,	// (0x0003bf7e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x43c0,	// (0x0003bf7e) form_field_slider_wide_pane_vc_t3

0x449e,	// (0x0003c05c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x449e,	// (0x0003c05c) form_field_popup_wide_pane_vc_t2

0x44b5,	// (0x0003c073) form_field_popup_wide_pane_vc_t3_ParamLimits

0x44b5,	// (0x0003c073) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x0004764f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0004764f) form_field_popup_wide_pane_vc_t

0xb076,	// (0x00042c34) aid_fshwr2_btn_pane_ParamLimits

0xb088,	// (0x00042c46) aid_fshwr2_syb_pane_ParamLimits

0xb09a,	// (0x00042c58) aid_fshwr2_txt_pane_ParamLimits

0x1544,	// (0x00039102) fshwr2_bg_pane_ParamLimits

0xb0a9,	// (0x00042c67) fshwr2_func_candi_pane_ParamLimits

0xb0c8,	// (0x00042c86) fshwr2_hwr_syb_pane_ParamLimits

0xb0e3,	// (0x00042ca1) fshwr2_icf_pane_ParamLimits

0xd80f,	// (0x000453cd) list_double_graphic_pane_vc_g4_ParamLimits

0xd80f,	// (0x000453cd) list_double_graphic_pane_vc_g4

0x1f47,	// (0x00039b05) cell_ituss_key_pane_g3_ParamLimits

0x1f47,	// (0x00039b05) cell_ituss_key_pane_g3

0x1fef,	// (0x00039bad) cell_ituss_key_t5_ParamLimits

0x1fef,	// (0x00039bad) cell_ituss_key_t5

0xec43,	// (0x00046801) popup_fep_vkbss_window_ParamLimits

0x545e,	// (0x0003d01c) aid_cell_ai5_quarter

0xecda,	// (0x00046898) icf_edit_indi_pane_t1_ParamLimits

0x8e9d,	// (0x00040a5b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8e9d,	// (0x00040a5b) aid_tch_indicator_popup_pane_cp2

0x8eb0,	// (0x00040a6e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8eb0,	// (0x00040a6e) aid_tch_query_popup_data_pane_cp2

0x2b11,	// (0x0003a6cf) aid_tch_query_popup_pane_ParamLimits

0x2b11,	// (0x0003a6cf) aid_tch_query_popup_pane

0x2b11,	// (0x0003a6cf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2b11,	// (0x0003a6cf) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

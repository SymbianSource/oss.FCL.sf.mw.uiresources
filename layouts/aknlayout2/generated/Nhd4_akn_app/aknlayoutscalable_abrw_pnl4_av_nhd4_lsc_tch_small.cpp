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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000254ef };

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
0x9144,	// (0x0002e633) Screen

0x9150,	// (0x0002e63f) application_window_ParamLimits

0x9150,	// (0x0002e63f) application_window

0xc2e2,	// (0x000317d1) screen_g1

0x87bc,	// (0x0002dcab) area_bottom_pane_ParamLimits

0x87bc,	// (0x0002dcab) area_bottom_pane

0x0a7b,	// (0x00025f6a) area_top_pane_ParamLimits

0x0a7b,	// (0x00025f6a) area_top_pane

0x0b19,	// (0x00026008) main_pane_ParamLimits

0x0b19,	// (0x00026008) main_pane

0xc2ec,	// (0x000317db) misc_graphics

0xa4ec,	// (0x0002f9db) battery_pane_ParamLimits

0xa4ec,	// (0x0002f9db) battery_pane

0xe063,	// (0x00033552) bg_status_flat_pane_g8

0xe06b,	// (0x0003355a) bg_status_flat_pane_g9

0xd7c9,	// (0x00032cb8) context_pane_ParamLimits

0xd7c9,	// (0x00032cb8) context_pane

0xa657,	// (0x0002fb46) navi_pane_ParamLimits

0xa657,	// (0x0002fb46) navi_pane

0xa6ce,	// (0x0002fbbd) signal_pane_ParamLimits

0xa6ce,	// (0x0002fbbd) signal_pane

0x0008,

0x0290,	// (0x0002577f) bg_status_flat_pane_g

0xa75e,	// (0x0002fc4d) status_pane_g1_ParamLimits

0xa75e,	// (0x0002fc4d) status_pane_g1

0xa774,	// (0x0002fc63) status_pane_g2_ParamLimits

0xa774,	// (0x0002fc63) status_pane_g2

0xd82e,	// (0x00032d1d) status_pane_g3_ParamLimits

0xd82e,	// (0x00032d1d) status_pane_g3

0x0004,

0xf76e,	// (0x00034c5d) status_pane_g_ParamLimits

0xf76e,	// (0x00034c5d) status_pane_g

0xa780,	// (0x0002fc6f) title_pane_ParamLimits

0xa780,	// (0x0002fc6f) title_pane

0xa7e1,	// (0x0002fcd0) uni_indicator_pane_ParamLimits

0xa7e1,	// (0x0002fcd0) uni_indicator_pane

0xd5f4,	// (0x00032ae3) bg_list_pane_ParamLimits

0xd5f4,	// (0x00032ae3) bg_list_pane

0x6e95,	// (0x0002c384) find_pane

0x9dda,	// (0x0002f2c9) listscroll_app_pane_ParamLimits

0x9dda,	// (0x0002f2c9) listscroll_app_pane

0xd614,	// (0x00032b03) listscroll_form_pane

0x6e9d,	// (0x0002c38c) listscroll_gen_pane_ParamLimits

0x6e9d,	// (0x0002c38c) listscroll_gen_pane

0xd614,	// (0x00032b03) listscroll_set_pane

0xe890,	// (0x00033d7f) main_idle_act_pane

0xd3da,	// (0x000328c9) main_idle_trad_pane

0xd3da,	// (0x000328c9) main_list_empty_pane

0xcaef,	// (0x00031fde) main_midp_pane

0xd62e,	// (0x00032b1d) main_pane_g1_ParamLimits

0xd62e,	// (0x00032b1d) main_pane_g1

0x9de6,	// (0x0002f2d5) popup_ai_message_window_ParamLimits

0x9de6,	// (0x0002f2d5) popup_ai_message_window

0x9e77,	// (0x0002f366) popup_fep_china_uni_window_ParamLimits

0x9e77,	// (0x0002f366) popup_fep_china_uni_window

0xd66e,	// (0x00032b5d) popup_fep_japan_candidate_window_ParamLimits

0xd66e,	// (0x00032b5d) popup_fep_japan_candidate_window

0xd68c,	// (0x00032b7b) popup_fep_japan_predictive_window_ParamLimits

0xd68c,	// (0x00032b7b) popup_fep_japan_predictive_window

0x9ed1,	// (0x0002f3c0) popup_find_window

0x9eee,	// (0x0002f3dd) popup_grid_graphic_window_ParamLimits

0x9eee,	// (0x0002f3dd) popup_grid_graphic_window

0xd6bc,	// (0x00032bab) popup_large_graphic_colour_window

0x9f80,	// (0x0002f46f) popup_menu_window_ParamLimits

0x9f80,	// (0x0002f46f) popup_menu_window

0xa14c,	// (0x0002f63b) popup_note_image_window

0xa112,	// (0x0002f601) popup_note_wait_window_ParamLimits

0xa112,	// (0x0002f601) popup_note_wait_window

0xa164,	// (0x0002f653) popup_note_window_ParamLimits

0xa164,	// (0x0002f653) popup_note_window

0xa20a,	// (0x0002f6f9) popup_query_code_window_ParamLimits

0xa20a,	// (0x0002f6f9) popup_query_code_window

0xd6e2,	// (0x00032bd1) popup_query_data_code_window_ParamLimits

0xd6e2,	// (0x00032bd1) popup_query_data_code_window

0xa244,	// (0x0002f733) popup_query_data_window_ParamLimits

0xa244,	// (0x0002f733) popup_query_data_window

0xa2ba,	// (0x0002f7a9) popup_query_sat_info_window_ParamLimits

0xa2ba,	// (0x0002f7a9) popup_query_sat_info_window

0xa351,	// (0x0002f840) popup_snote_single_graphic_window_ParamLimits

0xa351,	// (0x0002f840) popup_snote_single_graphic_window

0xa351,	// (0x0002f840) popup_snote_single_text_window_ParamLimits

0xa351,	// (0x0002f840) popup_snote_single_text_window

0xd6f9,	// (0x00032be8) popup_sub_window_general

0xd73f,	// (0x00032c2e) popup_window_general_ParamLimits

0xd73f,	// (0x00032c2e) popup_window_general

0xd754,	// (0x00032c43) power_save_pane

0x89a8,	// (0x0002de97) control_pane_g1_ParamLimits

0x89a8,	// (0x0002de97) control_pane_g1

0x17e0,	// (0x00026ccf) control_pane_g2_ParamLimits

0x17e0,	// (0x00026ccf) control_pane_g2

0xd5ce,	// (0x00032abd) control_pane_g3_ParamLimits

0xd5ce,	// (0x00032abd) control_pane_g3

0x0007,

0xf756,	// (0x00034c45) control_pane_g_ParamLimits

0xf756,	// (0x00034c45) control_pane_g

0x89e9,	// (0x0002ded8) control_pane_t1_ParamLimits

0x89e9,	// (0x0002ded8) control_pane_t1

0x8a47,	// (0x0002df36) control_pane_t2_ParamLimits

0x8a47,	// (0x0002df36) control_pane_t2

0x0002,

0xf767,	// (0x00034c56) control_pane_t_ParamLimits

0xf767,	// (0x00034c56) control_pane_t

0xd4ef,	// (0x000329de) navi_navi_volume_pane_cp1

0xd4f8,	// (0x000329e7) status_small_icon_pane

0xd500,	// (0x000329ef) status_small_pane_g1_ParamLimits

0xd500,	// (0x000329ef) status_small_pane_g1

0xd534,	// (0x00032a23) status_small_pane_g2_ParamLimits

0xd534,	// (0x00032a23) status_small_pane_g2

0xd540,	// (0x00032a2f) status_small_pane_g3_ParamLimits

0xd540,	// (0x00032a2f) status_small_pane_g3

0xd54c,	// (0x00032a3b) status_small_pane_g4_ParamLimits

0xd54c,	// (0x00032a3b) status_small_pane_g4

0xd558,	// (0x00032a47) status_small_pane_g5_ParamLimits

0xd558,	// (0x00032a47) status_small_pane_g5

0xd567,	// (0x00032a56) status_small_pane_g6_ParamLimits

0xd567,	// (0x00032a56) status_small_pane_g6

0x0007,

0x01a1,	// (0x00025690) status_small_pane_g_ParamLimits

0x01a1,	// (0x00025690) status_small_pane_g

0xd597,	// (0x00032a86) status_small_pane_t1

0xd5ba,	// (0x00032aa9) status_small_wait_pane_ParamLimits

0xd5ba,	// (0x00032aa9) status_small_wait_pane

0x9c4a,	// (0x0002f139) aid_levels_signal_ParamLimits

0x9c4a,	// (0x0002f139) aid_levels_signal

0x9c62,	// (0x0002f151) signal_pane_g1_ParamLimits

0x9c62,	// (0x0002f151) signal_pane_g1

0x9c7d,	// (0x0002f16c) signal_pane_g2_ParamLimits

0x9c7d,	// (0x0002f16c) signal_pane_g2

0x0001,

0xf719,	// (0x00034c08) signal_pane_g_ParamLimits

0xf719,	// (0x00034c08) signal_pane_g

0xcf1e,	// (0x0003240d) context_pane_g1

0x9160,	// (0x0002e64f) title_pane_g1

0x9195,	// (0x0002e684) title_pane_t1

0xc302,	// (0x000317f1) title_pane_t2

0xc328,	// (0x00031817) title_pane_t3

0x0002,

0xf59b,	// (0x00034a8a) title_pane_t

0xa809,	// (0x0002fcf8) aid_levels_battery_ParamLimits

0xa809,	// (0x0002fcf8) aid_levels_battery

0xa825,	// (0x0002fd14) battery_pane_g1_ParamLimits

0xa825,	// (0x0002fd14) battery_pane_g1

0xa842,	// (0x0002fd31) battery_pane_g2_ParamLimits

0xa842,	// (0x0002fd31) battery_pane_g2

0x0001,

0xf779,	// (0x00034c68) battery_pane_g_ParamLimits

0xf779,	// (0x00034c68) battery_pane_g

0xaa87,	// (0x0002ff76) uni_indicator_pane_g1

0xaa9c,	// (0x0002ff8b) uni_indicator_pane_g2

0xaab1,	// (0x0002ffa0) uni_indicator_pane_g3

0x0005,

0xf811,	// (0x00034d00) uni_indicator_pane_g

0xd24a,	// (0x00032739) navi_icon_pane_ParamLimits

0xd24a,	// (0x00032739) navi_icon_pane

0xd191,	// (0x00032680) navi_midp_pane

0xd266,	// (0x00032755) navi_navi_pane

0xd270,	// (0x0003275f) navi_text_pane_ParamLimits

0xd270,	// (0x0003275f) navi_text_pane

0xc2e2,	// (0x000317d1) status_small_wait_pane_g1

0xc60c,	// (0x00031afb) status_small_wait_pane_g2

0x0001,

0xf80c,	// (0x00034cfb) status_small_wait_pane_g

0xaa26,	// (0x0002ff15) navi_navi_icon_text_pane

0xaa2e,	// (0x0002ff1d) navi_navi_pane_g1_ParamLimits

0xaa2e,	// (0x0002ff1d) navi_navi_pane_g1

0xaa40,	// (0x0002ff2f) navi_navi_pane_g2_ParamLimits

0xaa40,	// (0x0002ff2f) navi_navi_pane_g2

0x0001,

0xf807,	// (0x00034cf6) navi_navi_pane_g_ParamLimits

0xf807,	// (0x00034cf6) navi_navi_pane_g

0xe5e6,	// (0x00033ad5) navi_navi_tabs_pane

0xaa52,	// (0x0002ff41) navi_navi_text_pane

0xaa26,	// (0x0002ff15) navi_navi_volume_pane

0xaa14,	// (0x0002ff03) navi_text_pane_t1

0xaa08,	// (0x0002fef7) navi_icon_pane_g1

0xe527,	// (0x00033a16) navi_navi_text_pane_t1

0x8c96,	// (0x0002e185) navi_navi_volume_pane_g1

0x8c9e,	// (0x0002e18d) volume_small_pane

0xa964,	// (0x0002fe53) navi_navi_icon_text_pane_g1

0xa96c,	// (0x0002fe5b) navi_navi_icon_text_pane_t1

0xd266,	// (0x00032755) navi_tabs_2_long_pane

0xd266,	// (0x00032755) navi_tabs_2_pane

0xd266,	// (0x00032755) navi_tabs_3_long_pane

0xd266,	// (0x00032755) navi_tabs_3_pane

0xd266,	// (0x00032755) navi_tabs_4_pane

0x8c76,	// (0x0002e165) tabs_2_active_pane_ParamLimits

0x8c76,	// (0x0002e165) tabs_2_active_pane

0x8c86,	// (0x0002e175) tabs_2_passive_pane_ParamLimits

0x8c86,	// (0x0002e175) tabs_2_passive_pane

0x8c44,	// (0x0002e133) tabs_3_active_pane_ParamLimits

0x8c44,	// (0x0002e133) tabs_3_active_pane

0x8c54,	// (0x0002e143) tabs_3_passive_pane_ParamLimits

0x8c54,	// (0x0002e143) tabs_3_passive_pane

0x8c65,	// (0x0002e154) tabs_3_passive_pane_cp_ParamLimits

0x8c65,	// (0x0002e154) tabs_3_passive_pane_cp

0x8c00,	// (0x0002e0ef) tabs_4_active_pane_ParamLimits

0x8c00,	// (0x0002e0ef) tabs_4_active_pane

0x8c11,	// (0x0002e100) tabs_4_passive_pane_ParamLimits

0x8c11,	// (0x0002e100) tabs_4_passive_pane

0x8c22,	// (0x0002e111) tabs_4_passive_pane_cp_ParamLimits

0x8c22,	// (0x0002e111) tabs_4_passive_pane_cp

0x8c33,	// (0x0002e122) tabs_4_passive_pane_cp2_ParamLimits

0x8c33,	// (0x0002e122) tabs_4_passive_pane_cp2

0x8be0,	// (0x0002e0cf) tabs_2_long_active_pane_ParamLimits

0x8be0,	// (0x0002e0cf) tabs_2_long_active_pane

0x8bf0,	// (0x0002e0df) tabs_2_long_passive_pane_ParamLimits

0x8bf0,	// (0x0002e0df) tabs_2_long_passive_pane

0x8bab,	// (0x0002e09a) tabs_3_long_active_pane_ParamLimits

0x8bab,	// (0x0002e09a) tabs_3_long_active_pane

0x8bbc,	// (0x0002e0ab) tabs_3_long_passive_pane_ParamLimits

0x8bbc,	// (0x0002e0ab) tabs_3_long_passive_pane

0x8bcf,	// (0x0002e0be) tabs_3_long_passive_pane_cp_ParamLimits

0x8bcf,	// (0x0002e0be) tabs_3_long_passive_pane_cp

0x238e,	// (0x0002787d) volume_small_pane_g1

0x8b5a,	// (0x0002e049) volume_small_pane_g2

0x8b63,	// (0x0002e052) volume_small_pane_g3

0x8b6c,	// (0x0002e05b) volume_small_pane_g4

0x8b75,	// (0x0002e064) volume_small_pane_g5

0x8b7e,	// (0x0002e06d) volume_small_pane_g6

0x8b87,	// (0x0002e076) volume_small_pane_g7

0x8b90,	// (0x0002e07f) volume_small_pane_g8

0x8b99,	// (0x0002e088) volume_small_pane_g9

0x8ba2,	// (0x0002e091) volume_small_pane_g10

0x0009,

0xf7dd,	// (0x00034ccc) volume_small_pane_g

0xc33a,	// (0x00031829) bg_active_tab_pane_cp2_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp2

0x9221,	// (0x0002e710) tabs_3_active_pane_g1

0x9229,	// (0x0002e718) tabs_3_active_pane_t1

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp2_ParamLimits

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp2

0x9221,	// (0x0002e710) tabs_3_passive_pane_g1

0x9229,	// (0x0002e718) tabs_3_passive_pane_t1

0xc33a,	// (0x00031829) bg_active_tab_pane_cp3_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp3

0x923b,	// (0x0002e72a) tabs_4_active_pane_g1

0x9243,	// (0x0002e732) tabs_4_active_pane_t1

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp3_ParamLimits

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp3

0x923b,	// (0x0002e72a) tabs_4_1_passive_pane_g1

0x9243,	// (0x0002e732) tabs_4_1_passive_pane_t1

0xcaef,	// (0x00031fde) list_highlight_pane_cp2

0xab3e,	// (0x0003002d) list_set_pane_ParamLimits

0xab3e,	// (0x0003002d) list_set_pane

0xabd8,	// (0x000300c7) main_pane_set_t1_ParamLimits

0xabd8,	// (0x000300c7) main_pane_set_t1

0xabf8,	// (0x000300e7) main_pane_set_t2_ParamLimits

0xabf8,	// (0x000300e7) main_pane_set_t2

0xac0c,	// (0x000300fb) main_pane_set_t3_ParamLimits

0xac0c,	// (0x000300fb) main_pane_set_t3

0xac1e,	// (0x0003010d) main_pane_set_t4_ParamLimits

0xac1e,	// (0x0003010d) main_pane_set_t4

0x0003,

0xf847,	// (0x00034d36) main_pane_set_t_ParamLimits

0xf847,	// (0x00034d36) main_pane_set_t

0xac30,	// (0x0003011f) setting_code_pane

0xac38,	// (0x00030127) setting_slider_graphic_pane

0xac38,	// (0x00030127) setting_slider_pane

0xac38,	// (0x00030127) setting_text_pane

0xac38,	// (0x00030127) setting_volume_pane

0x0e10,	// (0x000262ff) volume_set_pane

0xc348,	// (0x00031837) bg_set_opt_pane_cp

0x0e18,	// (0x00026307) setting_slider_pane_t1

0x0e31,	// (0x00026320) setting_slider_pane_t2

0x0e4a,	// (0x00026339) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00034a91) setting_slider_pane_t

0x0e61,	// (0x00026350) slider_set_pane

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp2

0xc35f,	// (0x0003184e) setting_slider_graphic_pane_g1

0x0e77,	// (0x00026366) setting_slider_graphic_pane_t1

0x0e86,	// (0x00026375) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00034a98) setting_slider_graphic_pane_t

0x0e95,	// (0x00026384) slider_set_pane_cp

0xc2ec,	// (0x000317db) input_focus_pane_cp1

0xea4d,	// (0x00033f3c) list_set_text_pane

0xc2e2,	// (0x000317d1) setting_text_pane_g1

0xc2ec,	// (0x000317db) input_focus_pane_cp2

0xc2e2,	// (0x000317d1) setting_code_pane_g1

0xc368,	// (0x00031857) setting_code_pane_t1

0x6748,	// (0x0002bc37) set_text_pane_t1_ParamLimits

0x6748,	// (0x0002bc37) set_text_pane_t1

0xc9ff,	// (0x00031eee) set_opt_bg_pane_g1

0xca07,	// (0x00031ef6) set_opt_bg_pane_g2

0xea2d,	// (0x00033f1c) set_opt_bg_pane_g3

0xca17,	// (0x00031f06) set_opt_bg_pane_g4

0xca1f,	// (0x00031f0e) set_opt_bg_pane_g5

0xca27,	// (0x00031f16) set_opt_bg_pane_g6

0xea35,	// (0x00033f24) set_opt_bg_pane_g7

0xea3d,	// (0x00033f2c) set_opt_bg_pane_g8

0xea45,	// (0x00033f34) set_opt_bg_pane_g9

0x0008,

0x038a,	// (0x00025879) set_opt_bg_pane_g

0xea20,	// (0x00033f0f) slider_set_pane_g1

0x26e5,	// (0x00027bd4) slider_set_pane_g2

0x0006,

0xf838,	// (0x00034d27) slider_set_pane_g

0x265c,	// (0x00027b4b) volume_set_pane_g1

0x2664,	// (0x00027b53) volume_set_pane_g2

0x266c,	// (0x00027b5b) volume_set_pane_g3

0x2674,	// (0x00027b63) volume_set_pane_g4

0x267c,	// (0x00027b6b) volume_set_pane_g5

0x2684,	// (0x00027b73) volume_set_pane_g6

0x268c,	// (0x00027b7b) volume_set_pane_g7

0x2694,	// (0x00027b83) volume_set_pane_g8

0x269c,	// (0x00027b8b) volume_set_pane_g9

0x26a4,	// (0x00027b93) volume_set_pane_g10

0x0009,

0xf81e,	// (0x00034d0d) volume_set_pane_g

0x9255,	// (0x0002e744) indicator_pane_ParamLimits

0x9255,	// (0x0002e744) indicator_pane

0x927d,	// (0x0002e76c) main_idle_pane_g2_ParamLimits

0x927d,	// (0x0002e76c) main_idle_pane_g2

0x92b5,	// (0x0002e7a4) main_pane_idle_g1_ParamLimits

0x92b5,	// (0x0002e7a4) main_pane_idle_g1

0xc376,	// (0x00031865) popup_clock_digital_analogue_window_ParamLimits

0xc376,	// (0x00031865) popup_clock_digital_analogue_window

0x92dc,	// (0x0002e7cb) soft_indicator_pane_ParamLimits

0x92dc,	// (0x0002e7cb) soft_indicator_pane

0x92f6,	// (0x0002e7e5) wallpaper_pane_ParamLimits

0x92f6,	// (0x0002e7e5) wallpaper_pane

0xc2e2,	// (0x000317d1) wallpaper_pane_g1

0x9308,	// (0x0002e7f7) indicator_pane_g1_ParamLimits

0x9308,	// (0x0002e7f7) indicator_pane_g1

0xeb94,	// (0x00034083) navi_navi_icon_text_pane_srt_g1

0xc3a4,	// (0x00031893) soft_indicator_pane_t1

0xc3be,	// (0x000318ad) aid_ps_area_pane

0x9321,	// (0x0002e810) aid_ps_clock_pane

0xc3cf,	// (0x000318be) aid_ps_indicator_pane

0xc3db,	// (0x000318ca) indicator_ps_pane_ParamLimits

0xc3db,	// (0x000318ca) indicator_ps_pane

0xc3ea,	// (0x000318d9) power_save_pane_g1_ParamLimits

0xc3ea,	// (0x000318d9) power_save_pane_g1

0xc3f6,	// (0x000318e5) power_save_pane_g2_ParamLimits

0xc3f6,	// (0x000318e5) power_save_pane_g2

0x096f,	// (0x00025e5e) aid_navinavi_width_pane

0xc3be,	// (0x000318ad) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00034a9d) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00034a9d) power_save_pane_g

0xc404,	// (0x000318f3) power_save_pane_t1_ParamLimits

0xc404,	// (0x000318f3) power_save_pane_t1

0x9321,	// (0x0002e810) aid_ps_clock_pane_ParamLimits

0xc3cf,	// (0x000318be) aid_ps_indicator_pane_ParamLimits

0xc416,	// (0x00031905) power_save_pane_t4_ParamLimits

0xc416,	// (0x00031905) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00034aa2) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00034aa2) power_save_pane_t

0xc440,	// (0x0003192f) power_save_t3_ParamLimits

0xc440,	// (0x0003192f) power_save_t3

0xc42b,	// (0x0003191a) power_save_t2_ParamLimits

0xc42b,	// (0x0003191a) power_save_t2

0xc455,	// (0x00031944) indicator_ps_pane_g1

0x9951,	// (0x0002ee40) ai_gene_pane_ParamLimits

0x9951,	// (0x0002ee40) ai_gene_pane

0x9968,	// (0x0002ee57) ai_links_pane_ParamLimits

0x9968,	// (0x0002ee57) ai_links_pane

0x9980,	// (0x0002ee6f) indicator_pane_cp1_ParamLimits

0x9980,	// (0x0002ee6f) indicator_pane_cp1

0x998f,	// (0x0002ee7e) main_pane_idle_g1_cp_ParamLimits

0x998f,	// (0x0002ee7e) main_pane_idle_g1_cp

0xc45e,	// (0x0003194d) popup_ai_links_title_window

0x99a7,	// (0x0002ee96) soft_indicator_pane_cp1_ParamLimits

0x99a7,	// (0x0002ee96) soft_indicator_pane_cp1

0xe856,	// (0x00033d45) ai_links_pane_g1

0xe85f,	// (0x00033d4e) grid_ai_links_pane

0xaa7e,	// (0x0002ff6d) ai_gene_pane_1

0xe844,	// (0x00033d33) ai_gene_pane_2

0xe84d,	// (0x00033d3c) list_highlight_pane_cp4

0xaa5a,	// (0x0002ff49) cell_ai_link_pane_ParamLimits

0xaa5a,	// (0x0002ff49) cell_ai_link_pane

0xe83c,	// (0x00033d2b) cell_ai_link_pane_g1

0xc60c,	// (0x00031afb) cell_ai_link_pane_g2

0x0001,

0x032e,	// (0x0002581d) cell_ai_link_pane_g

0xc2ec,	// (0x000317db) grid_highlight_cp2

0xc2ec,	// (0x000317db) bg_popup_sub_pane_cp1

0xc475,	// (0x00031964) popup_ai_links_title_window_t1

0xe78a,	// (0x00033c79) ai_gene_pane_1_g1_ParamLimits

0xe78a,	// (0x00033c79) ai_gene_pane_1_g1

0xe796,	// (0x00033c85) ai_gene_pane_1_g2_ParamLimits

0xe796,	// (0x00033c85) ai_gene_pane_1_g2

0x0001,

0x0324,	// (0x00025813) ai_gene_pane_1_g_ParamLimits

0x0324,	// (0x00025813) ai_gene_pane_1_g

0xe7a3,	// (0x00033c92) ai_gene_pane_1_t1_ParamLimits

0xe7a3,	// (0x00033c92) ai_gene_pane_1_t1

0xe7d7,	// (0x00033cc6) grid_ai_soft_ind_pane

0xe775,	// (0x00033c64) ai_gene_pane_2_t1_ParamLimits

0xe775,	// (0x00033c64) ai_gene_pane_2_t1

0x99bb,	// (0x0002eeaa) main_pane_empty_t1_ParamLimits

0x99bb,	// (0x0002eeaa) main_pane_empty_t1

0x99d3,	// (0x0002eec2) main_pane_empty_t2_ParamLimits

0x99d3,	// (0x0002eec2) main_pane_empty_t2

0x99e8,	// (0x0002eed7) main_pane_empty_t3_ParamLimits

0x99e8,	// (0x0002eed7) main_pane_empty_t3

0x99fa,	// (0x0002eee9) main_pane_empty_t4_ParamLimits

0x99fa,	// (0x0002eee9) main_pane_empty_t4

0x9a0c,	// (0x0002eefb) main_pane_empty_t5_ParamLimits

0x9a0c,	// (0x0002eefb) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00034aa7) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00034aa7) main_pane_empty_t

0xca50,	// (0x00031f3f) bg_popup_window_pane_ParamLimits

0xca50,	// (0x00031f3f) bg_popup_window_pane

0xe535,	// (0x00033a24) find_popup_pane_cp2_ParamLimits

0xe535,	// (0x00033a24) find_popup_pane_cp2

0xe541,	// (0x00033a30) heading_pane_ParamLimits

0xe541,	// (0x00033a30) heading_pane

0xc2ec,	// (0x000317db) bg_popup_sub_pane

0xa989,	// (0x0002fe78) bg_popup_window_pane_g1_ParamLimits

0xa989,	// (0x0002fe78) bg_popup_window_pane_g1

0xa998,	// (0x0002fe87) bg_popup_window_pane_g2_ParamLimits

0xa998,	// (0x0002fe87) bg_popup_window_pane_g2

0xa9a4,	// (0x0002fe93) bg_popup_window_pane_g3_ParamLimits

0xa9a4,	// (0x0002fe93) bg_popup_window_pane_g3

0xa9b0,	// (0x0002fe9f) bg_popup_window_pane_g4_ParamLimits

0xa9b0,	// (0x0002fe9f) bg_popup_window_pane_g4

0xa9bf,	// (0x0002feae) bg_popup_window_pane_g5_ParamLimits

0xa9bf,	// (0x0002feae) bg_popup_window_pane_g5

0xa9cf,	// (0x0002febe) bg_popup_window_pane_g6_ParamLimits

0xa9cf,	// (0x0002febe) bg_popup_window_pane_g6

0xa9db,	// (0x0002feca) bg_popup_window_pane_g7_ParamLimits

0xa9db,	// (0x0002feca) bg_popup_window_pane_g7

0xa9ea,	// (0x0002fed9) bg_popup_window_pane_g8_ParamLimits

0xa9ea,	// (0x0002fed9) bg_popup_window_pane_g8

0xa9f9,	// (0x0002fee8) bg_popup_window_pane_g9_ParamLimits

0xa9f9,	// (0x0002fee8) bg_popup_window_pane_g9

0xe51b,	// (0x00033a0a) bg_popup_window_pane_g10_ParamLimits

0xe51b,	// (0x00033a0a) bg_popup_window_pane_g10

0x0009,

0xf7f2,	// (0x00034ce1) bg_popup_window_pane_g_ParamLimits

0xf7f2,	// (0x00034ce1) bg_popup_window_pane_g

0xe4d2,	// (0x000339c1) bg_popup_heading_pane_ParamLimits

0xe4d2,	// (0x000339c1) bg_popup_heading_pane

0x299b,	// (0x00027e8a) tabs_4_passive_pane_cp_srt_ParamLimits

0x299b,	// (0x00027e8a) tabs_4_passive_pane_cp_srt

0x29ad,	// (0x00027e9c) tabs_4_passive_pane_srt_ParamLimits

0xe4e6,	// (0x000339d5) heading_pane_g2

0x29ad,	// (0x00027e9c) tabs_4_passive_pane_srt

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp3_srt_ParamLimits

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp3_srt

0xe4ee,	// (0x000339dd) heading_pane_t1_ParamLimits

0xe4ee,	// (0x000339dd) heading_pane_t1

0xe505,	// (0x000339f4) heading_pane_t2_ParamLimits

0xe505,	// (0x000339f4) heading_pane_t2

0x0001,

0x02e7,	// (0x000257d6) heading_pane_t_ParamLimits

0x02e7,	// (0x000257d6) heading_pane_t

0xe02b,	// (0x0003351a) bg_popup_heading_pane_g1

0xe0bc,	// (0x000335ab) bg_popup_heading_pane_g2

0xe0c6,	// (0x000335b5) bg_popup_heading_pane_g3

0xe0d0,	// (0x000335bf) bg_popup_heading_pane_g4

0xe0da,	// (0x000335c9) bg_popup_heading_pane_g5

0xe0e4,	// (0x000335d3) bg_popup_heading_pane_g6

0xe0ec,	// (0x000335db) bg_popup_heading_pane_g7

0xe0f4,	// (0x000335e3) bg_popup_heading_pane_g8

0xe0fe,	// (0x000335ed) bg_popup_heading_pane_g9

0x0008,

0x02a3,	// (0x00025792) bg_popup_heading_pane_g

0xd922,	// (0x00032e11) bg_popup_sub_pane_g1

0xd932,	// (0x00032e21) bg_popup_sub_pane_g2

0xd92a,	// (0x00032e19) bg_popup_sub_pane_g3

0xd942,	// (0x00032e31) bg_popup_sub_pane_g4

0xd93a,	// (0x00032e29) bg_popup_sub_pane_g5

0xd94a,	// (0x00032e39) bg_popup_sub_pane_g6

0xd952,	// (0x00032e41) bg_popup_sub_pane_g7

0xd962,	// (0x00032e51) bg_popup_sub_pane_g8

0xd95a,	// (0x00032e49) bg_popup_sub_pane_g9

0x0008,

0xf7ca,	// (0x00034cb9) bg_popup_sub_pane_g

0xc33a,	// (0x00031829) bg_popup_window_pane_cp5_ParamLimits

0xc33a,	// (0x00031829) bg_popup_window_pane_cp5

0xc492,	// (0x00031981) popup_note_window_g1_ParamLimits

0xc492,	// (0x00031981) popup_note_window_g1

0xc49e,	// (0x0003198d) popup_note_window_t1_ParamLimits

0xc49e,	// (0x0003198d) popup_note_window_t1

0xc4b0,	// (0x0003199f) popup_note_window_t2_ParamLimits

0xc4b0,	// (0x0003199f) popup_note_window_t2

0xc4c2,	// (0x000319b1) popup_note_window_t3_ParamLimits

0xc4c2,	// (0x000319b1) popup_note_window_t3

0xc4d4,	// (0x000319c3) popup_note_window_t4_ParamLimits

0xc4d4,	// (0x000319c3) popup_note_window_t4

0xc4fc,	// (0x000319eb) popup_note_window_t5_ParamLimits

0xc4fc,	// (0x000319eb) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00034ab2) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00034ab2) popup_note_window_t

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp6_ParamLimits

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp6

0xdf9f,	// (0x0003348e) popup_note_image_window_g1_ParamLimits

0xdf9f,	// (0x0003348e) popup_note_image_window_g1

0xdfab,	// (0x0003349a) popup_note_image_window_g2_ParamLimits

0xdfab,	// (0x0003349a) popup_note_image_window_g2

0x0001,

0x0271,	// (0x00025760) popup_note_image_window_g_ParamLimits

0x0271,	// (0x00025760) popup_note_image_window_g

0xdfc4,	// (0x000334b3) popup_note_image_window_t1_ParamLimits

0xdfc4,	// (0x000334b3) popup_note_image_window_t1

0xdfdd,	// (0x000334cc) popup_note_image_window_t2_ParamLimits

0xdfdd,	// (0x000334cc) popup_note_image_window_t2

0xdff6,	// (0x000334e5) popup_note_image_window_t3_ParamLimits

0xdff6,	// (0x000334e5) popup_note_image_window_t3

0x0002,

0x0276,	// (0x00025765) popup_note_image_window_t_ParamLimits

0x0276,	// (0x00025765) popup_note_image_window_t

0xde7c,	// (0x0003336b) bg_popup_window_pane_cp7_ParamLimits

0xde7c,	// (0x0003336b) bg_popup_window_pane_cp7

0xdeac,	// (0x0003339b) popup_note_wait_window_g1_ParamLimits

0xdeac,	// (0x0003339b) popup_note_wait_window_g1

0xdeb8,	// (0x000333a7) popup_note_wait_window_g2_ParamLimits

0xdeb8,	// (0x000333a7) popup_note_wait_window_g2

0x0002,

0x025f,	// (0x0002574e) popup_note_wait_window_g_ParamLimits

0x025f,	// (0x0002574e) popup_note_wait_window_g

0xded0,	// (0x000333bf) popup_note_wait_window_t1_ParamLimits

0xded0,	// (0x000333bf) popup_note_wait_window_t1

0xdef7,	// (0x000333e6) popup_note_wait_window_t2_ParamLimits

0xdef7,	// (0x000333e6) popup_note_wait_window_t2

0xdf14,	// (0x00033403) popup_note_wait_window_t3_ParamLimits

0xdf14,	// (0x00033403) popup_note_wait_window_t3

0xdf27,	// (0x00033416) popup_note_wait_window_t4_ParamLimits

0xdf27,	// (0x00033416) popup_note_wait_window_t4

0x0004,

0x0266,	// (0x00025755) popup_note_wait_window_t_ParamLimits

0x0266,	// (0x00025755) popup_note_wait_window_t

0xdf4c,	// (0x0003343b) wait_bar_pane_ParamLimits

0xdf4c,	// (0x0003343b) wait_bar_pane

0xc2ec,	// (0x000317db) wait_anim_pane

0xc2ec,	// (0x000317db) wait_border_pane

0xc2e2,	// (0x000317d1) wait_anim_pane_g1

0xc2e2,	// (0x000317d1) wait_anim_pane_g2

0x0001,

0xf714,	// (0x00034c03) wait_anim_pane_g

0xde20,	// (0x0003330f) wait_border_pane_g1

0xde2b,	// (0x0003331a) wait_border_pane_g2

0xde34,	// (0x00033323) wait_border_pane_g3

0x0002,

0x0258,	// (0x00025747) wait_border_pane_g

0xdd82,	// (0x00033271) bg_popup_window_pane_cp16_ParamLimits

0xdd82,	// (0x00033271) bg_popup_window_pane_cp16

0xdd90,	// (0x0003327f) indicator_popup_pane_cp4_ParamLimits

0xdd90,	// (0x0003327f) indicator_popup_pane_cp4

0xdda4,	// (0x00033293) popup_query_data_window_t1_ParamLimits

0xdda4,	// (0x00033293) popup_query_data_window_t1

0xddb6,	// (0x000332a5) popup_query_data_window_t2_ParamLimits

0xddb6,	// (0x000332a5) popup_query_data_window_t2

0xddcf,	// (0x000332be) popup_query_data_window_t3_ParamLimits

0xddcf,	// (0x000332be) popup_query_data_window_t3

0x0002,

0x0251,	// (0x00025740) popup_query_data_window_t_ParamLimits

0x0251,	// (0x00025740) popup_query_data_window_t

0xdde9,	// (0x000332d8) query_popup_data_pane_ParamLimits

0xdde9,	// (0x000332d8) query_popup_data_pane

0xddfd,	// (0x000332ec) query_popup_data_pane_cp1_ParamLimits

0xddfd,	// (0x000332ec) query_popup_data_pane_cp1

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp10_ParamLimits

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp10

0xdce5,	// (0x000331d4) indicator_popup_pane_ParamLimits

0xdce5,	// (0x000331d4) indicator_popup_pane

0xc577,	// (0x00031a66) popup_query_code_window_t1_ParamLimits

0xc577,	// (0x00031a66) popup_query_code_window_t1

0xdcfd,	// (0x000331ec) popup_query_code_window_t2_ParamLimits

0xdcfd,	// (0x000331ec) popup_query_code_window_t2

0xdd3b,	// (0x0003322a) popup_query_code_window_t3_ParamLimits

0xdd3b,	// (0x0003322a) popup_query_code_window_t3

0x0002,

0x024a,	// (0x00025739) popup_query_code_window_t_ParamLimits

0x024a,	// (0x00025739) popup_query_code_window_t

0xdd6a,	// (0x00033259) query_popup_pane_ParamLimits

0xdd6a,	// (0x00033259) query_popup_pane

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp15_ParamLimits

0xc520,	// (0x00031a0f) bg_popup_window_pane_cp15

0xc53e,	// (0x00031a2d) indicator_popup_pane_cp1_ParamLimits

0xc53e,	// (0x00031a2d) indicator_popup_pane_cp1

0xc551,	// (0x00031a40) indicator_popup_pane_cp2_ParamLimits

0xc551,	// (0x00031a40) indicator_popup_pane_cp2

0xc564,	// (0x00031a53) popup_query_data_code_window_g1_ParamLimits

0xc564,	// (0x00031a53) popup_query_data_code_window_g1

0xc577,	// (0x00031a66) popup_query_data_code_window_t1_ParamLimits

0xc577,	// (0x00031a66) popup_query_data_code_window_t1

0xc589,	// (0x00031a78) popup_query_data_code_window_t2_ParamLimits

0xc589,	// (0x00031a78) popup_query_data_code_window_t2

0xc59b,	// (0x00031a8a) popup_query_data_code_window_t3_ParamLimits

0xc59b,	// (0x00031a8a) popup_query_data_code_window_t3

0xc5b1,	// (0x00031aa0) popup_query_data_code_window_t4_ParamLimits

0xc5b1,	// (0x00031aa0) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00034abd) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00034abd) popup_query_data_code_window_t

0x2132,	// (0x00027621) list_single_midp_graphic_pane_g3

0xc5c9,	// (0x00031ab8) query_popup_data_pane_cp2_ParamLimits

0xc5dc,	// (0x00031acb) query_popup_pane_cp2_ParamLimits

0xc5dc,	// (0x00031acb) query_popup_pane_cp2

0xc2ec,	// (0x000317db) bg_popup_window_pane_cp11

0xdcb9,	// (0x000331a8) heading_pane_cp5

0xc66a,	// (0x00031b59) listscroll_popup_info_pane

0xc2ec,	// (0x000317db) input_focus_pane_cp3

0xc5ef,	// (0x00031ade) query_popup_pane_t1

0xc5fd,	// (0x00031aec) list_popup_info_pane_ParamLimits

0xc5fd,	// (0x00031aec) list_popup_info_pane

0xc60c,	// (0x00031afb) listscroll_popup_info_pane_g1

0xc614,	// (0x00031b03) scroll_pane_cp7

0xc61e,	// (0x00031b0d) popup_info_list_pane_t1_ParamLimits

0xc61e,	// (0x00031b0d) popup_info_list_pane_t1

0xc638,	// (0x00031b27) popup_info_list_pane_t2_ParamLimits

0xc638,	// (0x00031b27) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00034ac6) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00034ac6) popup_info_list_pane_t

0xc2ec,	// (0x000317db) bg_popup_window_pane_cp12

0xebae,	// (0x0003409d) find_popup_pane

0xc348,	// (0x00031837) bg_popup_window_pane_cp3

0xc652,	// (0x00031b41) heading_pane_cp3

0xc65e,	// (0x00031b4d) listscroll_popup_graphic_pane

0xc2ec,	// (0x000317db) bg_popup_window_pane_cp4

0x9a6e,	// (0x0002ef5d) heading_pane_cp4

0xc66a,	// (0x00031b59) listscroll_popup_colour_pane

0xc672,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc672,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane

0x9a76,	// (0x0002ef65) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a76,	// (0x0002ef65) grid_large_graphic_colour_popup_pane

0xc686,	// (0x00031b75) listscroll_popup_colour_pane_g1_ParamLimits

0xc686,	// (0x00031b75) listscroll_popup_colour_pane_g1

0xc69d,	// (0x00031b8c) listscroll_popup_colour_pane_g2_ParamLimits

0xc69d,	// (0x00031b8c) listscroll_popup_colour_pane_g2

0xc6b4,	// (0x00031ba3) listscroll_popup_colour_pane_g3_ParamLimits

0xc6b4,	// (0x00031ba3) listscroll_popup_colour_pane_g3

0x9a9a,	// (0x0002ef89) listscroll_popup_colour_pane_g4_ParamLimits

0x9a9a,	// (0x0002ef89) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00034acb) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00034acb) listscroll_popup_colour_pane_g

0xc6c4,	// (0x00031bb3) scroll_pane_cp6_ParamLimits

0xc6c4,	// (0x00031bb3) scroll_pane_cp6

0x9aa9,	// (0x0002ef98) cell_large_graphic_colour_popup_pane_ParamLimits

0x9aa9,	// (0x0002ef98) cell_large_graphic_colour_popup_pane

0xc6d6,	// (0x00031bc5) cell_large_graphic_colour_none_popup_pane_t1

0xc2ec,	// (0x000317db) grid_highlight_pane_cp5

0xc6e5,	// (0x00031bd4) cell_large_graphic_colour_popup_pane_g1

0xc6ed,	// (0x00031bdc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00034ad4) cell_large_graphic_colour_popup_pane_g

0xc6f5,	// (0x00031be4) cell_large_graphic_colour_popup_pane_g2_copy1

0xc6fe,	// (0x00031bed) grid_highlight_pane_cp4

0xc706,	// (0x00031bf5) bg_popup_window_pane_cp8_ParamLimits

0xc706,	// (0x00031bf5) bg_popup_window_pane_cp8

0xc721,	// (0x00031c10) popup_snote_single_text_window_g1_ParamLimits

0xc721,	// (0x00031c10) popup_snote_single_text_window_g1

0xc733,	// (0x00031c22) popup_snote_single_text_window_t1_ParamLimits

0xc733,	// (0x00031c22) popup_snote_single_text_window_t1

0xc746,	// (0x00031c35) popup_snote_single_text_window_t2_ParamLimits

0xc746,	// (0x00031c35) popup_snote_single_text_window_t2

0xc759,	// (0x00031c48) popup_snote_single_text_window_t3_ParamLimits

0xc759,	// (0x00031c48) popup_snote_single_text_window_t3

0xc792,	// (0x00031c81) popup_snote_single_text_window_t4_ParamLimits

0xc792,	// (0x00031c81) popup_snote_single_text_window_t4

0xc7c6,	// (0x00031cb5) popup_snote_single_text_window_t5_ParamLimits

0xc7c6,	// (0x00031cb5) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00034ad9) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00034ad9) popup_snote_single_text_window_t

0xc7f5,	// (0x00031ce4) bg_popup_window_pane_cp9_ParamLimits

0xc7f5,	// (0x00031ce4) bg_popup_window_pane_cp9

0xc721,	// (0x00031c10) popup_snote_single_graphic_window_g1_ParamLimits

0xc721,	// (0x00031c10) popup_snote_single_graphic_window_g1

0xc803,	// (0x00031cf2) popup_snote_single_graphic_window_g2_ParamLimits

0xc803,	// (0x00031cf2) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00034ae4) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00034ae4) popup_snote_single_graphic_window_g

0xc80f,	// (0x00031cfe) popup_snote_single_graphic_window_t1_ParamLimits

0xc80f,	// (0x00031cfe) popup_snote_single_graphic_window_t1

0xc822,	// (0x00031d11) popup_snote_single_graphic_window_t2_ParamLimits

0xc822,	// (0x00031d11) popup_snote_single_graphic_window_t2

0xc835,	// (0x00031d24) popup_snote_single_graphic_window_t3_ParamLimits

0xc835,	// (0x00031d24) popup_snote_single_graphic_window_t3

0xc86e,	// (0x00031d5d) popup_snote_single_graphic_window_t4_ParamLimits

0xc86e,	// (0x00031d5d) popup_snote_single_graphic_window_t4

0xc8a2,	// (0x00031d91) popup_snote_single_graphic_window_t5_ParamLimits

0xc8a2,	// (0x00031d91) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00034ae9) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00034ae9) popup_snote_single_graphic_window_t

0xeb32,	// (0x00034021) grid_graphic_popup_pane_ParamLimits

0xeb32,	// (0x00034021) grid_graphic_popup_pane

0xeb5e,	// (0x0003404d) listscroll_popup_graphic_pane_g1_ParamLimits

0xeb5e,	// (0x0003404d) listscroll_popup_graphic_pane_g1

0xad49,	// (0x00030238) listscroll_popup_graphic_pane_g2_ParamLimits

0xad49,	// (0x00030238) listscroll_popup_graphic_pane_g2

0x0001,

0xf86a,	// (0x00034d59) listscroll_popup_graphic_pane_g_ParamLimits

0xf86a,	// (0x00034d59) listscroll_popup_graphic_pane_g

0xe8a2,	// (0x00033d91) scroll_pane_cp5

0xad0c,	// (0x000301fb) cell_graphic_popup_pane_ParamLimits

0xad0c,	// (0x000301fb) cell_graphic_popup_pane

0xeafd,	// (0x00033fec) cell_graphic_popup_pane_g1

0xeb05,	// (0x00033ff4) cell_graphic_popup_pane_g2

0xc6f5,	// (0x00031be4) cell_graphic_popup_pane_g3

0x0002,

0x03c0,	// (0x000258af) cell_graphic_popup_pane_g

0xeb0e,	// (0x00033ffd) cell_graphic_popup_pane_t2

0xc6fe,	// (0x00031bed) grid_highlight_pane_cp3

0xc8e3,	// (0x00031dd2) list_gen_pane_ParamLimits

0xc8e3,	// (0x00031dd2) list_gen_pane

0xc90b,	// (0x00031dfa) scroll_pane

0xacc7,	// (0x000301b6) bg_list_pane_g1_ParamLimits

0xacc7,	// (0x000301b6) bg_list_pane_g1

0xeaac,	// (0x00033f9b) bg_list_pane_g2_ParamLimits

0xeaac,	// (0x00033f9b) bg_list_pane_g2

0xeabf,	// (0x00033fae) bg_list_pane_g3_ParamLimits

0xeabf,	// (0x00033fae) bg_list_pane_g3

0xead1,	// (0x00033fc0) bg_list_pane_g4_ParamLimits

0xead1,	// (0x00033fc0) bg_list_pane_g4

0xace2,	// (0x000301d1) bg_list_pane_g5_ParamLimits

0xace2,	// (0x000301d1) bg_list_pane_g5

0x0004,

0xf85f,	// (0x00034d4e) bg_list_pane_g_ParamLimits

0xf85f,	// (0x00034d4e) bg_list_pane_g

0xac7a,	// (0x00030169) list_double2_graphic_large_graphic_pane_ParamLimits

0xac7a,	// (0x00030169) list_double2_graphic_large_graphic_pane

0xac7a,	// (0x00030169) list_double2_graphic_pane_ParamLimits

0xac7a,	// (0x00030169) list_double2_graphic_pane

0xac7a,	// (0x00030169) list_double2_large_graphic_pane_ParamLimits

0xac7a,	// (0x00030169) list_double2_large_graphic_pane

0xac8d,	// (0x0003017c) list_double2_pane_ParamLimits

0xac8d,	// (0x0003017c) list_double2_pane

0xac7a,	// (0x00030169) list_double_graphic_heading_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_graphic_heading_pane

0xac7a,	// (0x00030169) list_double_graphic_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_graphic_pane

0xac7a,	// (0x00030169) list_double_heading_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_heading_pane

0xac7a,	// (0x00030169) list_double_large_graphic_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_large_graphic_pane

0xac7a,	// (0x00030169) list_double_number_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_number_pane

0xac7a,	// (0x00030169) list_double_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_pane

0xac7a,	// (0x00030169) list_double_time_pane_ParamLimits

0xac7a,	// (0x00030169) list_double_time_pane

0xac7a,	// (0x00030169) list_setting_number_pane_ParamLimits

0xac7a,	// (0x00030169) list_setting_number_pane

0xac7a,	// (0x00030169) list_setting_pane_ParamLimits

0xac7a,	// (0x00030169) list_setting_pane

0x9817,	// (0x0002ed06) list_single_2graphic_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_2graphic_pane

0x9817,	// (0x0002ed06) list_single_graphic_heading_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_graphic_heading_pane

0x9817,	// (0x0002ed06) list_single_graphic_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_graphic_pane

0x9817,	// (0x0002ed06) list_single_heading_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_heading_pane

0xac8d,	// (0x0003017c) list_single_large_graphic_pane_ParamLimits

0xac8d,	// (0x0003017c) list_single_large_graphic_pane

0x9817,	// (0x0002ed06) list_single_number_heading_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_number_heading_pane

0x9817,	// (0x0002ed06) list_single_number_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_number_pane

0x9817,	// (0x0002ed06) list_single_pane_ParamLimits

0x9817,	// (0x0002ed06) list_single_pane

0xc2ec,	// (0x000317db) list_highlight_pane_cp1

0x676e,	// (0x0002bc5d) list_single_pane_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_pane_g1

0x677a,	// (0x0002bc69) list_single_pane_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_pane_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_pane_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_pane_g

0x6f85,	// (0x0002c474) list_single_pane_t1_ParamLimits

0x6f85,	// (0x0002c474) list_single_pane_t1

0x676e,	// (0x0002bc5d) list_single_number_pane_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_number_pane_g1

0x677a,	// (0x0002bc69) list_single_number_pane_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_number_pane_g

0x6eb9,	// (0x0002c3a8) list_single_number_pane_t1_ParamLimits

0x6eb9,	// (0x0002c3a8) list_single_number_pane_t1

0x6f45,	// (0x0002c434) list_single_number_pane_t2_ParamLimits

0x6f45,	// (0x0002c434) list_single_number_pane_t2

0x0001,

0xf833,	// (0x00034d22) list_single_number_pane_t_ParamLimits

0xf833,	// (0x00034d22) list_single_number_pane_t

0x6762,	// (0x0002bc51) list_single_graphic_pane_g1_ParamLimits

0x6762,	// (0x0002bc51) list_single_graphic_pane_g1

0x676e,	// (0x0002bc5d) list_single_graphic_pane_g2_ParamLimits

0x676e,	// (0x0002bc5d) list_single_graphic_pane_g2

0x677a,	// (0x0002bc69) list_single_graphic_pane_g3_ParamLimits

0x677a,	// (0x0002bc69) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00034af4) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00034af4) list_single_graphic_pane_g

0x6786,	// (0x0002bc75) list_single_graphic_pane_t1_ParamLimits

0x6786,	// (0x0002bc75) list_single_graphic_pane_t1

0x676e,	// (0x0002bc5d) list_single_heading_pane_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_heading_pane_g1

0x677a,	// (0x0002bc69) list_single_heading_pane_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_heading_pane_g

0x679c,	// (0x0002bc8b) list_single_heading_pane_t1_ParamLimits

0x679c,	// (0x0002bc8b) list_single_heading_pane_t1

0x67b2,	// (0x0002bca1) list_single_heading_pane_t2_ParamLimits

0x67b2,	// (0x0002bca1) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00034b00) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00034b00) list_single_heading_pane_t

0x676e,	// (0x0002bc5d) list_single_number_heading_pane_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_number_heading_pane_g1

0x677a,	// (0x0002bc69) list_single_number_heading_pane_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_number_heading_pane_g

0x679c,	// (0x0002bc8b) list_single_number_heading_pane_t1_ParamLimits

0x679c,	// (0x0002bc8b) list_single_number_heading_pane_t1

0x67c4,	// (0x0002bcb3) list_single_number_heading_pane_t2_ParamLimits

0x67c4,	// (0x0002bcb3) list_single_number_heading_pane_t2

0x67d6,	// (0x0002bcc5) list_single_number_heading_pane_t3_ParamLimits

0x67d6,	// (0x0002bcc5) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00034b05) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00034b05) list_single_number_heading_pane_t

0x67e8,	// (0x0002bcd7) list_single_graphic_heading_pane_g1_ParamLimits

0x67e8,	// (0x0002bcd7) list_single_graphic_heading_pane_g1

0x8935,	// (0x0002de24) list_single_graphic_heading_pane_g4_ParamLimits

0x8935,	// (0x0002de24) list_single_graphic_heading_pane_g4

0x677a,	// (0x0002bc69) list_single_graphic_heading_pane_g5_ParamLimits

0x677a,	// (0x0002bc69) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00034b0c) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00034b0c) list_single_graphic_heading_pane_g

0x679c,	// (0x0002bc8b) list_single_graphic_heading_pane_t1_ParamLimits

0x679c,	// (0x0002bc8b) list_single_graphic_heading_pane_t1

0x6805,	// (0x0002bcf4) list_single_graphic_heading_pane_t2_ParamLimits

0x6805,	// (0x0002bcf4) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00034b13) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00034b13) list_single_graphic_heading_pane_t

0x70ca,	// (0x0002c5b9) list_single_large_graphic_pane_g1_ParamLimits

0x70ca,	// (0x0002c5b9) list_single_large_graphic_pane_g1

0x70d6,	// (0x0002c5c5) list_single_large_graphic_pane_g2_ParamLimits

0x70d6,	// (0x0002c5c5) list_single_large_graphic_pane_g2

0x70e2,	// (0x0002c5d1) list_single_large_graphic_pane_g3_ParamLimits

0x70e2,	// (0x0002c5d1) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00034b18) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00034b18) list_single_large_graphic_pane_g

0xde2b,	// (0x0003331a) wait_border_pane_g2_copy1

0x8946,	// (0x0002de35) list_single_large_graphic_pane_g4_cp2

0x70ee,	// (0x0002c5dd) list_single_large_graphic_pane_t1_ParamLimits

0x70ee,	// (0x0002c5dd) list_single_large_graphic_pane_t1

0x894e,	// (0x0002de3d) list_double_pane_g1_ParamLimits

0x894e,	// (0x0002de3d) list_double_pane_g1

0x895a,	// (0x0002de49) list_double_pane_g2_ParamLimits

0x895a,	// (0x0002de49) list_double_pane_g2

0x0001,

0xf630,	// (0x00034b1f) list_double_pane_g_ParamLimits

0xf630,	// (0x00034b1f) list_double_pane_g

0x8966,	// (0x0002de55) list_double_pane_t1_ParamLimits

0x8966,	// (0x0002de55) list_double_pane_t1

0x897c,	// (0x0002de6b) list_double_pane_t2_ParamLimits

0x897c,	// (0x0002de6b) list_double_pane_t2

0x0001,

0xf635,	// (0x00034b24) list_double_pane_t_ParamLimits

0xf635,	// (0x00034b24) list_double_pane_t

0x898e,	// (0x0002de7d) list_double2_pane_g1_ParamLimits

0x898e,	// (0x0002de7d) list_double2_pane_g1

0x6a3e,	// (0x0002bf2d) list_double2_pane_g2_ParamLimits

0x6a3e,	// (0x0002bf2d) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00034b29) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00034b29) list_double2_pane_g

0x932f,	// (0x0002e81e) list_double2_pane_t1_ParamLimits

0x932f,	// (0x0002e81e) list_double2_pane_t1

0x9345,	// (0x0002e834) list_double2_pane_t2_ParamLimits

0x9345,	// (0x0002e834) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00034b2e) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00034b2e) list_double2_pane_t

0x894e,	// (0x0002de3d) list_double_number_pane_g1_ParamLimits

0x894e,	// (0x0002de3d) list_double_number_pane_g1

0x895a,	// (0x0002de49) list_double_number_pane_g2_ParamLimits

0x895a,	// (0x0002de49) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00034b1f) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00034b1f) list_double_number_pane_g

0x9357,	// (0x0002e846) list_double_number_pane_t1_ParamLimits

0x9357,	// (0x0002e846) list_double_number_pane_t1

0x9369,	// (0x0002e858) list_double_number_pane_t2_ParamLimits

0x9369,	// (0x0002e858) list_double_number_pane_t2

0x937f,	// (0x0002e86e) list_double_number_pane_t3_ParamLimits

0x937f,	// (0x0002e86e) list_double_number_pane_t3

0x0002,

0xf644,	// (0x00034b33) list_double_number_pane_t_ParamLimits

0xf644,	// (0x00034b33) list_double_number_pane_t

0x9391,	// (0x0002e880) list_double_graphic_pane_g1_ParamLimits

0x9391,	// (0x0002e880) list_double_graphic_pane_g1

0x939d,	// (0x0002e88c) list_double_graphic_pane_g2_ParamLimits

0x939d,	// (0x0002e88c) list_double_graphic_pane_g2

0x93ac,	// (0x0002e89b) list_double_graphic_pane_g3_ParamLimits

0x93ac,	// (0x0002e89b) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00034b3a) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00034b3a) list_double_graphic_pane_g

0x93c4,	// (0x0002e8b3) list_double_graphic_pane_t1_ParamLimits

0x93c4,	// (0x0002e8b3) list_double_graphic_pane_t1

0x93da,	// (0x0002e8c9) list_double_graphic_pane_t2_ParamLimits

0x93da,	// (0x0002e8c9) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x00034b43) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x00034b43) list_double_graphic_pane_t

0x9391,	// (0x0002e880) list_double2_graphic_pane_g1_ParamLimits

0x9391,	// (0x0002e880) list_double2_graphic_pane_g1

0x93ec,	// (0x0002e8db) list_double2_graphic_pane_g2_ParamLimits

0x93ec,	// (0x0002e8db) list_double2_graphic_pane_g2

0x93f8,	// (0x0002e8e7) list_double2_graphic_pane_g3_ParamLimits

0x93f8,	// (0x0002e8e7) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00034b48) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00034b48) list_double2_graphic_pane_g

0x9369,	// (0x0002e858) list_double2_graphic_pane_t1_ParamLimits

0x9369,	// (0x0002e858) list_double2_graphic_pane_t1

0x9404,	// (0x0002e8f3) list_double2_graphic_pane_t2_ParamLimits

0x9404,	// (0x0002e8f3) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00034b4f) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00034b4f) list_double2_graphic_pane_t

0x9416,	// (0x0002e905) list_double_large_graphic_pane_g1_ParamLimits

0x9416,	// (0x0002e905) list_double_large_graphic_pane_g1

0x9441,	// (0x0002e930) list_double_large_graphic_pane_g2_ParamLimits

0x9441,	// (0x0002e930) list_double_large_graphic_pane_g2

0x895a,	// (0x0002de49) list_double_large_graphic_pane_g3_ParamLimits

0x895a,	// (0x0002de49) list_double_large_graphic_pane_g3

0x9452,	// (0x0002e941) list_double_large_graphic_pane_g4_ParamLimits

0x9452,	// (0x0002e941) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x00034b54) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x00034b54) list_double_large_graphic_pane_g

0x9464,	// (0x0002e953) list_double_large_graphic_pane_t1_ParamLimits

0x9464,	// (0x0002e953) list_double_large_graphic_pane_t1

0x947d,	// (0x0002e96c) list_double_large_graphic_pane_t2_ParamLimits

0x947d,	// (0x0002e96c) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00034b5f) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00034b5f) list_double_large_graphic_pane_t

0x948f,	// (0x0002e97e) list_double2_large_graphic_pane_g1_ParamLimits

0x948f,	// (0x0002e97e) list_double2_large_graphic_pane_g1

0x9441,	// (0x0002e930) list_double2_large_graphic_pane_g2_ParamLimits

0x9441,	// (0x0002e930) list_double2_large_graphic_pane_g2

0x895a,	// (0x0002de49) list_double2_large_graphic_pane_g3_ParamLimits

0x895a,	// (0x0002de49) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x00034b64) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x00034b64) list_double2_large_graphic_pane_g

0x949b,	// (0x0002e98a) list_double2_large_graphic_pane_t1_ParamLimits

0x949b,	// (0x0002e98a) list_double2_large_graphic_pane_t1

0x94b1,	// (0x0002e9a0) list_double2_large_graphic_pane_t2_ParamLimits

0x94b1,	// (0x0002e9a0) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00034b6b) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00034b6b) list_double2_large_graphic_pane_t

0x94c3,	// (0x0002e9b2) list_double_heading_pane_g1_ParamLimits

0x94c3,	// (0x0002e9b2) list_double_heading_pane_g1

0x6865,	// (0x0002bd54) list_double_heading_pane_g2_ParamLimits

0x6865,	// (0x0002bd54) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x00034b70) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x00034b70) list_double_heading_pane_g

0x94d4,	// (0x0002e9c3) list_double_heading_pane_t1_ParamLimits

0x94d4,	// (0x0002e9c3) list_double_heading_pane_t1

0x94ea,	// (0x0002e9d9) list_double_heading_pane_t2_ParamLimits

0x94ea,	// (0x0002e9d9) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x00034b75) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x00034b75) list_double_heading_pane_t

0x68f6,	// (0x0002bde5) list_double_graphic_heading_pane_g1_ParamLimits

0x68f6,	// (0x0002bde5) list_double_graphic_heading_pane_g1

0x94c3,	// (0x0002e9b2) list_double_graphic_heading_pane_g2_ParamLimits

0x94c3,	// (0x0002e9b2) list_double_graphic_heading_pane_g2

0x6865,	// (0x0002bd54) list_double_graphic_heading_pane_g3_ParamLimits

0x6865,	// (0x0002bd54) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00034b7a) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00034b7a) list_double_graphic_heading_pane_g

0x94fc,	// (0x0002e9eb) list_double_graphic_heading_pane_t1_ParamLimits

0x94fc,	// (0x0002e9eb) list_double_graphic_heading_pane_t1

0x9404,	// (0x0002e8f3) list_double_graphic_heading_pane_t2_ParamLimits

0x9404,	// (0x0002e8f3) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x00034b81) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x00034b81) list_double_graphic_heading_pane_t

0x9441,	// (0x0002e930) list_double_time_pane_g1_ParamLimits

0x9441,	// (0x0002e930) list_double_time_pane_g1

0x895a,	// (0x0002de49) list_double_time_pane_g2_ParamLimits

0x895a,	// (0x0002de49) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00034b86) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00034b86) list_double_time_pane_g

0x949b,	// (0x0002e98a) list_double_time_pane_t1_ParamLimits

0x949b,	// (0x0002e98a) list_double_time_pane_t1

0x9512,	// (0x0002ea01) list_double_time_pane_t2_ParamLimits

0x9512,	// (0x0002ea01) list_double_time_pane_t2

0x9524,	// (0x0002ea13) list_double_time_pane_t3_ParamLimits

0x9524,	// (0x0002ea13) list_double_time_pane_t3

0x9536,	// (0x0002ea25) list_double_time_pane_t4_ParamLimits

0x9536,	// (0x0002ea25) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00034b8b) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00034b8b) list_double_time_pane_t

0x6951,	// (0x0002be40) list_setting_pane_g1_ParamLimits

0x6951,	// (0x0002be40) list_setting_pane_g1

0x695d,	// (0x0002be4c) list_setting_pane_g2_ParamLimits

0x695d,	// (0x0002be4c) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00034b94) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00034b94) list_setting_pane_g

0x9548,	// (0x0002ea37) list_setting_pane_t1_ParamLimits

0x9548,	// (0x0002ea37) list_setting_pane_t1

0x9562,	// (0x0002ea51) list_setting_pane_t2_ParamLimits

0x9562,	// (0x0002ea51) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00034b99) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00034b99) list_setting_pane_t

0x959f,	// (0x0002ea8e) set_value_pane_cp_ParamLimits

0x959f,	// (0x0002ea8e) set_value_pane_cp

0x95ab,	// (0x0002ea9a) list_setting_number_pane_g1_ParamLimits

0x95ab,	// (0x0002ea9a) list_setting_number_pane_g1

0x95b7,	// (0x0002eaa6) list_setting_number_pane_g2_ParamLimits

0x95b7,	// (0x0002eaa6) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x00034ba0) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x00034ba0) list_setting_number_pane_g

0x95c3,	// (0x0002eab2) list_setting_number_pane_t1_ParamLimits

0x95c3,	// (0x0002eab2) list_setting_number_pane_t1

0x95dc,	// (0x0002eacb) list_setting_number_pane_t2_ParamLimits

0x95dc,	// (0x0002eacb) list_setting_number_pane_t2

0x95f6,	// (0x0002eae5) list_setting_number_pane_t3_ParamLimits

0x95f6,	// (0x0002eae5) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x00034ba5) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x00034ba5) list_setting_number_pane_t

0x959f,	// (0x0002ea8e) set_value_pane_ParamLimits

0x959f,	// (0x0002ea8e) set_value_pane

0xc93f,	// (0x00031e2e) bg_set_opt_pane_ParamLimits

0xc93f,	// (0x00031e2e) bg_set_opt_pane

0x6baa,	// (0x0002c099) set_value_pane_t1

0xc960,	// (0x00031e4f) slider_set_pane_cp3

0xc969,	// (0x00031e58) volume_small_pane_cp

0xc972,	// (0x00031e61) list_form_gen_pane

0xc97b,	// (0x00031e6a) scroll_pane_cp8

0x9639,	// (0x0002eb28) form_field_data_pane_ParamLimits

0x9639,	// (0x0002eb28) form_field_data_pane

0x9650,	// (0x0002eb3f) form_field_data_wide_pane_ParamLimits

0x9650,	// (0x0002eb3f) form_field_data_wide_pane

0x9670,	// (0x0002eb5f) form_field_popup_pane_ParamLimits

0x9670,	// (0x0002eb5f) form_field_popup_pane

0x968e,	// (0x0002eb7d) form_field_popup_wide_pane_ParamLimits

0x968e,	// (0x0002eb7d) form_field_popup_wide_pane

0x6c3a,	// (0x0002c129) form_field_slider_pane_ParamLimits

0x6c3a,	// (0x0002c129) form_field_slider_pane

0x6c4d,	// (0x0002c13c) form_field_slider_wide_pane_ParamLimits

0x6c4d,	// (0x0002c13c) form_field_slider_wide_pane

0xc98c,	// (0x00031e7b) data_form_pane

0x96af,	// (0x0002eb9e) form_field_data_pane_t1

0xc998,	// (0x00031e87) input_focus_pane

0xc9a6,	// (0x00031e95) data_form_wide_pane

0x6c90,	// (0x0002c17f) form_field_data_wide_pane_t1

0xc713,	// (0x00031c02) input_focus_pane_cp6

0x96c9,	// (0x0002ebb8) form_field_popup_pane_t1

0xc998,	// (0x00031e87) input_focus_pane_cp7

0xc9d2,	// (0x00031ec1) list_form_pane

0x6cd4,	// (0x0002c1c3) form_field_popup_wide_pane_t1

0xc998,	// (0x00031e87) input_focus_pane_cp8

0xc9de,	// (0x00031ecd) list_form_wide_pane

0x96eb,	// (0x0002ebda) form_field_slider_pane_t1_ParamLimits

0x96eb,	// (0x0002ebda) form_field_slider_pane_t1

0x9703,	// (0x0002ebf2) form_field_slider_pane_t2_ParamLimits

0x9703,	// (0x0002ebf2) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00034bb5) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00034bb5) form_field_slider_pane_t

0xc33a,	// (0x00031829) input_focus_pane_cp9_ParamLimits

0xc33a,	// (0x00031829) input_focus_pane_cp9

0x9718,	// (0x0002ec07) slider_cont_pane_ParamLimits

0x9718,	// (0x0002ec07) slider_cont_pane

0xc9ed,	// (0x00031edc) form_field_slider_wide_pane_t1_ParamLimits

0xc9ed,	// (0x00031edc) form_field_slider_wide_pane_t1

0x6d2b,	// (0x0002c21a) form_field_slider_wide_pane_t2_ParamLimits

0x6d2b,	// (0x0002c21a) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00034bba) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00034bba) form_field_slider_wide_pane_t

0xc33a,	// (0x00031829) input_focus_pane_cp10_ParamLimits

0xc33a,	// (0x00031829) input_focus_pane_cp10

0x972c,	// (0x0002ec1b) slider_cont_pane_cp1_ParamLimits

0x972c,	// (0x0002ec1b) slider_cont_pane_cp1

0x9740,	// (0x0002ec2f) slider_form_pane_cp

0xc9ff,	// (0x00031eee) input_focus_pane_g1

0xca07,	// (0x00031ef6) input_focus_pane_g2

0xca0f,	// (0x00031efe) input_focus_pane_g3

0xca17,	// (0x00031f06) input_focus_pane_g4

0xca1f,	// (0x00031f0e) input_focus_pane_g5

0xca27,	// (0x00031f16) input_focus_pane_g6

0xca2f,	// (0x00031f1e) input_focus_pane_g7

0xca37,	// (0x00031f26) input_focus_pane_g8

0xca3f,	// (0x00031f2e) input_focus_pane_g9

0xc2e2,	// (0x000317d1) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x00034bbf) input_focus_pane_g

0xde34,	// (0x00033323) wait_border_pane_g3_copy1

0x9748,	// (0x0002ec37) data_form_pane_t1

0xc2e2,	// (0x000317d1) wait_anim_pane_g1_copy1

0x97eb,	// (0x0002ecda) data_form_wide_pane_t1

0x9762,	// (0x0002ec51) list_form_graphic_pane_cp_ParamLimits

0x9762,	// (0x0002ec51) list_form_graphic_pane_cp

0xea55,	// (0x00033f44) slider_form_pane_g1

0xea5e,	// (0x00033f4d) slider_form_pane_g2

0x0006,

0xf850,	// (0x00034d3f) slider_form_pane_g

0x9775,	// (0x0002ec64) list_form_graphic_pane_ParamLimits

0x9775,	// (0x0002ec64) list_form_graphic_pane

0x6da5,	// (0x0002c294) list_form_graphic_pane_g1

0x6dad,	// (0x0002c29c) list_form_graphic_pane_t1_ParamLimits

0x6dad,	// (0x0002c29c) list_form_graphic_pane_t1

0xc348,	// (0x00031837) list_highlight_pane_cp5_ParamLimits

0xc348,	// (0x00031837) list_highlight_pane_cp5

0x6dc2,	// (0x0002c2b1) find_pane_g1

0xca47,	// (0x00031f36) input_find_pane

0x6dcb,	// (0x0002c2ba) input_find_pane_g1_ParamLimits

0x6dcb,	// (0x0002c2ba) input_find_pane_g1

0x6dd7,	// (0x0002c2c6) input_find_pane_t1_ParamLimits

0x6dd7,	// (0x0002c2c6) input_find_pane_t1

0x6dec,	// (0x0002c2db) input_find_pane_t2_ParamLimits

0x6dec,	// (0x0002c2db) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00034bd4) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00034bd4) input_find_pane_t

0xca50,	// (0x00031f3f) input_focus_pane_cp5_ParamLimits

0xca50,	// (0x00031f3f) input_focus_pane_cp5

0x9ade,	// (0x0002efcd) bg_popup_window_pane_cp2_ParamLimits

0x9ade,	// (0x0002efcd) bg_popup_window_pane_cp2

0x9aeb,	// (0x0002efda) listscroll_menu_pane_ParamLimits

0x9aeb,	// (0x0002efda) listscroll_menu_pane

0x9af7,	// (0x0002efe6) popup_submenu_window_ParamLimits

0x9af7,	// (0x0002efe6) popup_submenu_window

0xca5e,	// (0x00031f4d) find_popup_pane_g1

0xca66,	// (0x00031f55) input_popup_find_pane_cp

0xca50,	// (0x00031f3f) input_focus_pane_cp4_ParamLimits

0xca50,	// (0x00031f3f) input_focus_pane_cp4

0xca70,	// (0x00031f5f) input_popup_find_pane_t1_ParamLimits

0xca70,	// (0x00031f5f) input_popup_find_pane_t1

0xc2ec,	// (0x000317db) bg_popup_sub_pane_cp

0xca9e,	// (0x00031f8d) listscroll_popup_sub_pane

0xcaa6,	// (0x00031f95) list_submenu_pane_ParamLimits

0xcaa6,	// (0x00031f95) list_submenu_pane

0xcab7,	// (0x00031fa6) scroll_pane_cp4

0xcabf,	// (0x00031fae) list_single_popup_submenu_pane_ParamLimits

0xcabf,	// (0x00031fae) list_single_popup_submenu_pane

0xcad2,	// (0x00031fc1) list_single_popup_submenu_pane_g1

0xcada,	// (0x00031fc9) list_single_popup_submenu_pane_t1_ParamLimits

0xcada,	// (0x00031fc9) list_single_popup_submenu_pane_t1

0xc33a,	// (0x00031829) bg_active_tab_pane_cp1_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp1

0x9b29,	// (0x0002f018) tabs_2_active_pane_g1

0x9b31,	// (0x0002f020) tabs_2_active_pane_t1

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp1_ParamLimits

0xc33a,	// (0x00031829) bg_passive_tab_pane_cp1

0x9b29,	// (0x0002f018) tabs_2_passive_pane_g1

0x9b31,	// (0x0002f020) tabs_2_passive_pane_t1

0xc348,	// (0x00031837) bg_active_tab_pane_cp4

0x9b43,	// (0x0002f032) tabs_2_long_active_pane_t1

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp4

0x213a,	// (0x00027629) list_single_midp_graphic_pane_g4_ParamLimits

0xc348,	// (0x00031837) bg_active_tab_pane_cp5

0x9b56,	// (0x0002f045) tabs_3_long_active_pane_t1

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp5

0x213a,	// (0x00027629) list_single_midp_graphic_pane_g4

0xc348,	// (0x00031837) bg_popup_window_pane_cp13_ParamLimits

0xc348,	// (0x00031837) bg_popup_window_pane_cp13

0xcb04,	// (0x00031ff3) listscroll_popup_fast_pane_ParamLimits

0xcb04,	// (0x00031ff3) listscroll_popup_fast_pane

0xcb13,	// (0x00032002) grid_popup_fast_pane_ParamLimits

0xcb13,	// (0x00032002) grid_popup_fast_pane

0xcb25,	// (0x00032014) scroll_pane_cp9_ParamLimits

0xcb25,	// (0x00032014) scroll_pane_cp9

0x445e,	// (0x0002994d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x445e,	// (0x0002994d) list_single_graphic_hl_pane_t1_cp2

0xcb49,	// (0x00032038) input_focus_pane_cp20_ParamLimits

0xcb49,	// (0x00032038) input_focus_pane_cp20

0xcb57,	// (0x00032046) query_popup_data_pane_t1_ParamLimits

0xcb57,	// (0x00032046) query_popup_data_pane_t1

0xcb6a,	// (0x00032059) query_popup_data_pane_t2_ParamLimits

0xcb6a,	// (0x00032059) query_popup_data_pane_t2

0xcbb0,	// (0x0003209f) query_popup_data_pane_t3_ParamLimits

0xcbb0,	// (0x0003209f) query_popup_data_pane_t3

0xcbf1,	// (0x000320e0) query_popup_data_pane_t4_ParamLimits

0xcbf1,	// (0x000320e0) query_popup_data_pane_t4

0xcc2d,	// (0x0003211c) query_popup_data_pane_t5_ParamLimits

0xcc2d,	// (0x0003211c) query_popup_data_pane_t5

0x0004,

0x00d4,	// (0x000255c3) query_popup_data_pane_t_ParamLimits

0x00d4,	// (0x000255c3) query_popup_data_pane_t

0xc9ff,	// (0x00031eee) bg_set_opt_pane_g1

0xca07,	// (0x00031ef6) bg_set_opt_pane_g2

0xca0f,	// (0x00031efe) bg_set_opt_pane_g3

0xca17,	// (0x00031f06) bg_set_opt_pane_g4

0xca1f,	// (0x00031f0e) bg_set_opt_pane_g5

0xca27,	// (0x00031f16) bg_set_opt_pane_g6

0xca2f,	// (0x00031f1e) bg_set_opt_pane_g7

0xca37,	// (0x00031f26) bg_set_opt_pane_g8

0xca3f,	// (0x00031f2e) bg_set_opt_pane_g9

0x0008,

0x00df,	// (0x000255ce) bg_set_opt_pane_g

0x14de,	// (0x000269cd) control_top_pane_stacon_ParamLimits

0x14de,	// (0x000269cd) control_top_pane_stacon

0x1531,	// (0x00026a20) signal_pane_stacon_ParamLimits

0x1531,	// (0x00026a20) signal_pane_stacon

0xd08c,	// (0x0003257b) stacon_top_pane_g1_ParamLimits

0xd08c,	// (0x0003257b) stacon_top_pane_g1

0x1556,	// (0x00026a45) title_pane_stacon_ParamLimits

0x1556,	// (0x00026a45) title_pane_stacon

0x1580,	// (0x00026a6f) uni_indicator_pane_stacon_ParamLimits

0x1580,	// (0x00026a6f) uni_indicator_pane_stacon

0x1595,	// (0x00026a84) battery_pane_stacon_ParamLimits

0x1595,	// (0x00026a84) battery_pane_stacon

0x15d9,	// (0x00026ac8) control_bottom_pane_stacon_ParamLimits

0x15d9,	// (0x00026ac8) control_bottom_pane_stacon

0x15fc,	// (0x00026aeb) navi_pane_stacon_ParamLimits

0x15fc,	// (0x00026aeb) navi_pane_stacon

0xd0ae,	// (0x0003259d) stacon_bottom_pane_g1_ParamLimits

0xd0ae,	// (0x0003259d) stacon_bottom_pane_g1

0x1109,	// (0x000265f8) aid_levels_signal_lsc_ParamLimits

0x1109,	// (0x000265f8) aid_levels_signal_lsc

0x1120,	// (0x0002660f) signal_pane_stacon_g1_ParamLimits

0x1120,	// (0x0002660f) signal_pane_stacon_g1

0x1134,	// (0x00026623) signal_pane_stacon_g2_ParamLimits

0x1134,	// (0x00026623) signal_pane_stacon_g2

0x0001,

0xf6ea,	// (0x00034bd9) signal_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00034bd9) signal_pane_stacon_g

0x1169,	// (0x00026658) title_pane_stacon_t1_ParamLimits

0x1169,	// (0x00026658) title_pane_stacon_t1

0xcc7b,	// (0x0003216a) uni_indicator_pane_stacon_g1

0xcc85,	// (0x00032174) uni_indicator_pane_stacon_g2

0xcc71,	// (0x00032160) uni_indicator_pane_stacon_g3

0xcc8f,	// (0x0003217e) uni_indicator_pane_stacon_g4

0x0003,

0xf6f6,	// (0x00034be5) uni_indicator_pane_stacon_g

0x118e,	// (0x0002667d) control_top_pane_stacon_g1

0x1196,	// (0x00026685) control_top_pane_stacon_t1_ParamLimits

0x1196,	// (0x00026685) control_top_pane_stacon_t1

0x11cd,	// (0x000266bc) aid_levels_battery_lsc_ParamLimits

0x11cd,	// (0x000266bc) aid_levels_battery_lsc

0x11e5,	// (0x000266d4) battery_pane_stacon_g1_ParamLimits

0x11e5,	// (0x000266d4) battery_pane_stacon_g1

0x11f8,	// (0x000266e7) battery_pane_stacon_g2_ParamLimits

0x11f8,	// (0x000266e7) battery_pane_stacon_g2

0x0001,

0xf6ff,	// (0x00034bee) battery_pane_stacon_g_ParamLimits

0xf6ff,	// (0x00034bee) battery_pane_stacon_g

0x1236,	// (0x00026725) navi_icon_pane_stacon

0x124a,	// (0x00026739) navi_navi_pane_stacon

0x1236,	// (0x00026725) navi_text_pane_stacon

0x118e,	// (0x0002667d) control_bottom_pane_stacon_g1

0x125e,	// (0x0002674d) control_bottom_pane_stacon_t1_ParamLimits

0x125e,	// (0x0002674d) control_bottom_pane_stacon_t1

0x9b68,	// (0x0002f057) grid_app_pane_ParamLimits

0x9b68,	// (0x0002f057) grid_app_pane

0x9b9e,	// (0x0002f08d) scroll_pane_cp15_ParamLimits

0x9b9e,	// (0x0002f08d) scroll_pane_cp15

0x9bbb,	// (0x0002f0aa) cell_app_pane_ParamLimits

0x9bbb,	// (0x0002f0aa) cell_app_pane

0x9c02,	// (0x0002f0f1) cell_app_pane_g1_ParamLimits

0x9c02,	// (0x0002f0f1) cell_app_pane_g1

0xccb3,	// (0x000321a2) cell_app_pane_g2_ParamLimits

0xccb3,	// (0x000321a2) cell_app_pane_g2

0x0001,

0xf704,	// (0x00034bf3) cell_app_pane_g_ParamLimits

0xf704,	// (0x00034bf3) cell_app_pane_g

0xccbf,	// (0x000321ae) cell_app_pane_t1_ParamLimits

0xccbf,	// (0x000321ae) cell_app_pane_t1

0xccd1,	// (0x000321c0) grid_highlight_pane_ParamLimits

0xccd1,	// (0x000321c0) grid_highlight_pane

0xc9ff,	// (0x00031eee) cell_highlight_pane_g1

0xca07,	// (0x00031ef6) cell_highlight_pane_g2

0xca0f,	// (0x00031efe) cell_highlight_pane_g3

0xca17,	// (0x00031f06) cell_highlight_pane_g4

0xca1f,	// (0x00031f0e) cell_highlight_pane_g5

0xca27,	// (0x00031f16) cell_highlight_pane_g6

0xca2f,	// (0x00031f1e) cell_highlight_pane_g7

0xca37,	// (0x00031f26) cell_highlight_pane_g8

0xca3f,	// (0x00031f2e) cell_highlight_pane_g9

0xc2e2,	// (0x000317d1) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x00034bbf) cell_highlight_pane_g

0xcce2,	// (0x000321d1) bg_scroll_pane

0x132d,	// (0x0002681c) scroll_handle_pane

0xcd29,	// (0x00032218) scroll_bg_pane_g1

0xcd3e,	// (0x0003222d) scroll_bg_pane_g2

0xcd56,	// (0x00032245) scroll_bg_pane_g3

0x0002,

0x0111,	// (0x00025600) scroll_bg_pane_g

0xcd6b,	// (0x0003225a) scroll_handle_focus_pane_ParamLimits

0xcd6b,	// (0x0003225a) scroll_handle_focus_pane

0xcd29,	// (0x00032218) scroll_handle_pane_g1

0xcd78,	// (0x00032267) scroll_handle_pane_g2

0xcd56,	// (0x00032245) scroll_handle_pane_g3

0x0002,

0x0118,	// (0x00025607) scroll_handle_pane_g

0xca50,	// (0x00031f3f) bg_popup_sub_pane_cp21_ParamLimits

0xca50,	// (0x00031f3f) bg_popup_sub_pane_cp21

0xcd8c,	// (0x0003227b) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd8c,	// (0x0003227b) popup_fep_japan_predictive_window_t1

0xcda3,	// (0x00032292) popup_fep_japan_predictive_window_t2_ParamLimits

0xcda3,	// (0x00032292) popup_fep_japan_predictive_window_t2

0xcdd6,	// (0x000322c5) popup_fep_japan_predictive_window_t3_ParamLimits

0xcdd6,	// (0x000322c5) popup_fep_japan_predictive_window_t3

0x0002,

0x011f,	// (0x0002560e) popup_fep_japan_predictive_window_t_ParamLimits

0x011f,	// (0x0002560e) popup_fep_japan_predictive_window_t

0xc2ec,	// (0x000317db) bg_popup_sub_pane_cp23

0xce0d,	// (0x000322fc) listscroll_japin_cand_pane

0xce15,	// (0x00032304) popup_fep_japan_candidate_window_t1

0xce23,	// (0x00032312) candidate_pane_ParamLimits

0xce23,	// (0x00032312) candidate_pane

0xce35,	// (0x00032324) scroll_pane_cp30

0xce3d,	// (0x0003232c) list_single_popup_jap_candidate_pane_ParamLimits

0xce3d,	// (0x0003232c) list_single_popup_jap_candidate_pane

0xc2ec,	// (0x000317db) list_highlight_pane_cp30

0xce51,	// (0x00032340) list_single_popup_jap_candidate_pane_t1

0xce60,	// (0x0003234f) level_1_signal

0xce6d,	// (0x0003235c) level_2_signal

0xce7a,	// (0x00032369) level_3_signal

0xce87,	// (0x00032376) level_4_signal

0xce94,	// (0x00032383) level_5_signal

0xcea1,	// (0x00032390) level_6_signal

0xceae,	// (0x0003239d) level_7_signal

0xce60,	// (0x0003234f) level_1_battery

0xce6d,	// (0x0003235c) level_2_battery

0xce7a,	// (0x00032369) level_3_battery

0xce87,	// (0x00032376) level_4_battery

0xce94,	// (0x00032383) level_5_battery

0xcea1,	// (0x00032390) level_6_battery

0xceae,	// (0x0003239d) level_7_battery

0xced3,	// (0x000323c2) list_menu_pane_ParamLimits

0xced3,	// (0x000323c2) list_menu_pane

0xcee4,	// (0x000323d3) scroll_pane_cp25_ParamLimits

0xcee4,	// (0x000323d3) scroll_pane_cp25

0xcefd,	// (0x000323ec) list_double2_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double2_graphic_pane_cp2

0xcefd,	// (0x000323ec) list_double2_large_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double2_large_graphic_pane_cp2

0xcefd,	// (0x000323ec) list_double2_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double2_pane_cp2

0xcefd,	// (0x000323ec) list_double_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double_graphic_pane_cp2

0xcefd,	// (0x000323ec) list_double_large_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double_large_graphic_pane_cp2

0xcefd,	// (0x000323ec) list_double_number_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double_number_pane_cp2

0xcefd,	// (0x000323ec) list_double_pane_cp2_ParamLimits

0xcefd,	// (0x000323ec) list_double_pane_cp2

0x9c37,	// (0x0002f126) list_single_2graphic_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_2graphic_pane_cp2

0x9c37,	// (0x0002f126) list_single_graphic_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_graphic_heading_pane_cp2

0x9c37,	// (0x0002f126) list_single_graphic_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_graphic_pane_cp2

0x9c37,	// (0x0002f126) list_single_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_heading_pane_cp2

0xcf0d,	// (0x000323fc) list_single_large_graphic_pane_cp2_ParamLimits

0xcf0d,	// (0x000323fc) list_single_large_graphic_pane_cp2

0x9c37,	// (0x0002f126) list_single_number_heading_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_number_heading_pane_cp2

0x9c37,	// (0x0002f126) list_single_number_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_number_pane_cp2

0x9c37,	// (0x0002f126) list_single_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_pane_cp2

0xcf27,	// (0x00032416) bg_popup_sub_pane_cp22

0x1444,	// (0x00026933) popup_side_volume_key_window_g1

0x146e,	// (0x0002695d) popup_side_volume_key_window_t1

0x148a,	// (0x00026979) volume_small_pane_cp1

0xc33a,	// (0x00031829) bg_popup_sub_pane_cp24_ParamLimits

0xc33a,	// (0x00031829) bg_popup_sub_pane_cp24

0xcf3d,	// (0x0003242c) fep_china_uni_candidate_pane_ParamLimits

0xcf3d,	// (0x0003242c) fep_china_uni_candidate_pane

0xcf51,	// (0x00032440) fep_china_uni_entry_pane

0xcf61,	// (0x00032450) popup_fep_china_uni_window_g1

0xcf7d,	// (0x0003246c) fep_china_uni_entry_pane_g1

0xcf85,	// (0x00032474) fep_china_uni_entry_pane_g2

0x0001,

0x014c,	// (0x0002563b) fep_china_uni_entry_pane_g

0xcf8d,	// (0x0003247c) fep_entry_item_pane

0xcf97,	// (0x00032486) fep_candidate_item_pane

0xcf9f,	// (0x0003248e) fep_china_uni_candidate_pane_g1

0xcfa7,	// (0x00032496) fep_china_uni_candidate_pane_g2

0xcfaf,	// (0x0003249e) fep_china_uni_candidate_pane_g3

0xcfb7,	// (0x000324a6) fep_china_uni_candidate_pane_g4

0x0003,

0x0151,	// (0x00025640) fep_china_uni_candidate_pane_g

0xc2e2,	// (0x000317d1) fep_entry_item_pane_g1

0xcfbf,	// (0x000324ae) fep_entry_item_pane_t1_ParamLimits

0xcfbf,	// (0x000324ae) fep_entry_item_pane_t1

0xcfd5,	// (0x000324c4) fep_candidate_item_pane_t1_ParamLimits

0xcfd5,	// (0x000324c4) fep_candidate_item_pane_t1

0xcfea,	// (0x000324d9) fep_candidate_item_pane_t2_ParamLimits

0xcfea,	// (0x000324d9) fep_candidate_item_pane_t2

0x0001,

0x015a,	// (0x00025649) fep_candidate_item_pane_t_ParamLimits

0x015a,	// (0x00025649) fep_candidate_item_pane_t

0xc348,	// (0x00031837) list_highlight_pane_cp31_ParamLimits

0xc348,	// (0x00031837) list_highlight_pane_cp31

0xcffc,	// (0x000324eb) level_1_signal_lsc

0xd005,	// (0x000324f4) level_2_signal_lsc

0xd00e,	// (0x000324fd) level_3_signal_lsc

0xd017,	// (0x00032506) level_4_signal_lsc

0xd020,	// (0x0003250f) level_5_signal_lsc

0xd029,	// (0x00032518) level_6_signal_lsc

0xd032,	// (0x00032521) level_7_signal_lsc

0xd032,	// (0x00032521) level_1_battery_lsc

0xd03b,	// (0x0003252a) level_2_battery_lsc

0xd044,	// (0x00032533) level_3_battery_lsc

0xd04d,	// (0x0003253c) level_4_battery_lsc

0xd056,	// (0x00032545) level_5_battery_lsc

0xd05f,	// (0x0003254e) level_6_battery_lsc

0xcffc,	// (0x000324eb) level_7_battery_lsc

0xd068,	// (0x00032557) scroll_handle_focus_pane_g1

0xd071,	// (0x00032560) scroll_handle_focus_pane_g2

0xd07a,	// (0x00032569) scroll_handle_focus_pane_g3

0x0002,

0x015f,	// (0x0002564e) scroll_handle_focus_pane_g

0x6e01,	// (0x0002c2f0) list_single_2graphic_pane_g1_ParamLimits

0x6e01,	// (0x0002c2f0) list_single_2graphic_pane_g1

0x8935,	// (0x0002de24) list_single_2graphic_pane_g2_ParamLimits

0x8935,	// (0x0002de24) list_single_2graphic_pane_g2

0x677a,	// (0x0002bc69) list_single_2graphic_pane_g3_ParamLimits

0x677a,	// (0x0002bc69) list_single_2graphic_pane_g3

0x6e0d,	// (0x0002c2fc) list_single_2graphic_pane_g4_ParamLimits

0x6e0d,	// (0x0002c2fc) list_single_2graphic_pane_g4

0x0003,

0xf72a,	// (0x00034c19) list_single_2graphic_pane_g_ParamLimits

0xf72a,	// (0x00034c19) list_single_2graphic_pane_g

0x6e19,	// (0x0002c308) list_single_2graphic_pane_t1_ParamLimits

0x6e19,	// (0x0002c308) list_single_2graphic_pane_t1

0x9789,	// (0x0002ec78) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9789,	// (0x0002ec78) list_double2_graphic_large_graphic_pane_g1

0x9441,	// (0x0002e930) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9441,	// (0x0002e930) list_double2_graphic_large_graphic_pane_g2

0x895a,	// (0x0002de49) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x895a,	// (0x0002de49) list_double2_graphic_large_graphic_pane_g3

0x979b,	// (0x0002ec8a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x979b,	// (0x0002ec8a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf733,	// (0x00034c22) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf733,	// (0x00034c22) list_double2_graphic_large_graphic_pane_g

0x97a7,	// (0x0002ec96) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x97a7,	// (0x0002ec96) list_double2_graphic_large_graphic_pane_t1

0x97bd,	// (0x0002ecac) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x97bd,	// (0x0002ecac) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73c,	// (0x00034c2b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73c,	// (0x00034c2b) list_double2_graphic_large_graphic_pane_t

0xd15b,	// (0x0003264a) popup_fast_swap_window_ParamLimits

0xd15b,	// (0x0003264a) popup_fast_swap_window

0xd177,	// (0x00032666) popup_side_volume_key_window

0xd191,	// (0x00032680) stacon_top_pane

0xd19b,	// (0x0003268a) status_pane_ParamLimits

0xd19b,	// (0x0003268a) status_pane

0xd191,	// (0x00032680) status_small_pane

0xc2ec,	// (0x000317db) control_pane

0xc2ec,	// (0x000317db) stacon_bottom_pane

0xc97b,	// (0x00031e6a) scroll_pane_cp121

0xc972,	// (0x00031e61) set_content_pane

0x9c99,	// (0x0002f188) bg_active_tab_pane_g1_cp1

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp1

0x9ca2,	// (0x0002f191) bg_active_tab_pane_g3_cp1

0x9c99,	// (0x0002f188) bg_passive_tab_pane_g1_cp1

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp1

0x9ca2,	// (0x0002f191) bg_passive_tab_pane_g3_cp1

0x9cab,	// (0x0002f19a) bg_active_tab_pane_g1_cp2

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp2

0x9cb4,	// (0x0002f1a3) bg_active_tab_pane_g3_cp2

0x9cab,	// (0x0002f19a) bg_passive_tab_pane_g1_cp2

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp2

0x9cb4,	// (0x0002f1a3) bg_passive_tab_pane_g3_cp2

0x9cbd,	// (0x0002f1ac) bg_active_tab_pane_g1_cp3

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp3

0x9cc6,	// (0x0002f1b5) bg_active_tab_pane_g3_cp3

0x9cbd,	// (0x0002f1ac) bg_passive_tab_pane_g1_cp3

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp3

0x9cc6,	// (0x0002f1b5) bg_passive_tab_pane_g3_cp3

0x9ccf,	// (0x0002f1be) bg_active_tab_pane_g1_cp4

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp4

0x9cd8,	// (0x0002f1c7) bg_active_tab_pane_g3_cp4

0x9ccf,	// (0x0002f1be) bg_passive_tab_pane_g1_cp4

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp4

0x9cd8,	// (0x0002f1c7) bg_passive_tab_pane_g3_cp4

0xd0ca,	// (0x000325b9) bg_active_tab_pane_g1_cp5

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp5

0xd0d3,	// (0x000325c2) bg_active_tab_pane_g3_cp5

0xd0ca,	// (0x000325b9) bg_passive_tab_pane_g1_cp5

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp5

0xd0d3,	// (0x000325c2) bg_passive_tab_pane_g3_cp5

0x64f4,	// (0x0002b9e3) list_set_graphic_pane_ParamLimits

0x64f4,	// (0x0002b9e3) list_set_graphic_pane

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp4

0xd0dc,	// (0x000325cb) list_set_graphic_pane_g1_ParamLimits

0xd0dc,	// (0x000325cb) list_set_graphic_pane_g1

0xd0e8,	// (0x000325d7) list_set_graphic_pane_g2_ParamLimits

0xd0e8,	// (0x000325d7) list_set_graphic_pane_g2

0x0001,

0x017d,	// (0x0002566c) list_set_graphic_pane_g_ParamLimits

0x017d,	// (0x0002566c) list_set_graphic_pane_g

0x0009,

0xf8f4,	// (0x00034de3) volume_small_pane_cp_g

0xd10c,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd10c,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2

0xd11a,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd11a,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2

0xd12b,	// (0x0003261a) list_double2_large_graphic_pane_g3_cp2

0xd133,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd133,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2

0xd149,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd149,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2

0xe7e7,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe7e7,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2

0xe7fa,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe7fa,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2

0xd2b9,	// (0x000327a8) list_double_large_graphic_pane_g3_cp2

0xe80b,	// (0x00033cfa) list_double_large_graphic_pane_g4_cp

0xe813,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe813,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2

0xe82a,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe82a,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2

0xd1a9,	// (0x00032698) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1a9,	// (0x00032698) list_double2_graphic_pane_g1_cp2

0xd1b7,	// (0x000326a6) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1b7,	// (0x000326a6) list_double2_graphic_pane_g2_cp2

0xd1c8,	// (0x000326b7) list_double2_graphic_pane_g3_cp2

0xd1d2,	// (0x000326c1) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1d2,	// (0x000326c1) list_double2_graphic_pane_t1_cp2

0xd1e8,	// (0x000326d7) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1e8,	// (0x000326d7) list_double2_graphic_pane_t2_cp2

0xd1fa,	// (0x000326e9) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1fa,	// (0x000326e9) list_single_number_heading_pane_g1_cp2

0xd206,	// (0x000326f5) list_single_number_heading_pane_g2_cp2

0xd20e,	// (0x000326fd) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd20e,	// (0x000326fd) list_single_number_heading_pane_t1_cp2

0xd224,	// (0x00032713) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd224,	// (0x00032713) list_single_number_heading_pane_t2_cp2

0xd238,	// (0x00032727) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd238,	// (0x00032727) list_single_number_heading_pane_t3_cp2

0xd1fa,	// (0x000326e9) list_single_heading_pane_g1_cp2_ParamLimits

0xd1fa,	// (0x000326e9) list_single_heading_pane_g1_cp2

0xd206,	// (0x000326f5) list_single_heading_pane_g2_cp2

0xd20e,	// (0x000326fd) list_single_heading_pane_t1_cp2_ParamLimits

0xd20e,	// (0x000326fd) list_single_heading_pane_t1_cp2

0xe5ef,	// (0x00033ade) list_single_heading_pane_t2_cp2_ParamLimits

0xe5ef,	// (0x00033ade) list_single_heading_pane_t2_cp2

0xe589,	// (0x00033a78) list_double_graphic_pane_g1_cp2_ParamLimits

0xe589,	// (0x00033a78) list_double_graphic_pane_g1_cp2

0xe595,	// (0x00033a84) list_double_graphic_pane_g2_cp2_ParamLimits

0xe595,	// (0x00033a84) list_double_graphic_pane_g2_cp2

0xe5a4,	// (0x00033a93) list_double_graphic_pane_g3_cp2

0xe5ac,	// (0x00033a9b) list_double_graphic_pane_t1_cp2_ParamLimits

0xe5ac,	// (0x00033a9b) list_double_graphic_pane_t1_cp2

0xe5c2,	// (0x00033ab1) list_double_graphic_pane_t2_cp2_ParamLimits

0xe5c2,	// (0x00033ab1) list_double_graphic_pane_t2_cp2

0xd2ad,	// (0x0003279c) list_double_number_pane_g1_cp2_ParamLimits

0xd2ad,	// (0x0003279c) list_double_number_pane_g1_cp2

0xd2b9,	// (0x000327a8) list_double_number_pane_g2_cp2

0xe54d,	// (0x00033a3c) list_double_number_pane_t1_cp2_ParamLimits

0xe54d,	// (0x00033a3c) list_double_number_pane_t1_cp2

0xe561,	// (0x00033a50) list_double_number_pane_t2_cp2_ParamLimits

0xe561,	// (0x00033a50) list_double_number_pane_t2_cp2

0xe577,	// (0x00033a66) list_double_number_pane_t3_cp2_ParamLimits

0xe577,	// (0x00033a66) list_double_number_pane_t3_cp2

0xe4c4,	// (0x000339b3) list_single_graphic_pane_g1_cp2_ParamLimits

0xe4c4,	// (0x000339b3) list_single_graphic_pane_g1_cp2

0xd311,	// (0x00032800) list_single_graphic_pane_g2_cp2_ParamLimits

0xd311,	// (0x00032800) list_single_graphic_pane_g2_cp2

0xd31d,	// (0x0003280c) list_single_graphic_pane_g3_cp2

0xe49a,	// (0x00033989) list_single_graphic_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00033989) list_single_graphic_pane_t1_cp2

0xd311,	// (0x00032800) list_single_number_pane_g1_cp2_ParamLimits

0xd311,	// (0x00032800) list_single_number_pane_g1_cp2

0xd31d,	// (0x0003280c) list_single_number_pane_g2_cp2

0xe49a,	// (0x00033989) list_single_number_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00033989) list_single_number_pane_t1_cp2

0xe4b0,	// (0x0003399f) list_single_number_pane_t2_cp2_ParamLimits

0xe4b0,	// (0x0003399f) list_single_number_pane_t2_cp2

0xd11a,	// (0x00032609) list_double2_pane_g1_cp2_ParamLimits

0xd11a,	// (0x00032609) list_double2_pane_g1_cp2

0xd12b,	// (0x0003261a) list_double2_pane_g2_cp2

0xd285,	// (0x00032774) list_double2_pane_t1_cp2_ParamLimits

0xd285,	// (0x00032774) list_double2_pane_t1_cp2

0xd29b,	// (0x0003278a) list_double2_pane_t2_cp2_ParamLimits

0xd29b,	// (0x0003278a) list_double2_pane_t2_cp2

0xd2ad,	// (0x0003279c) list_double_pane_g1_cp2_ParamLimits

0xd2ad,	// (0x0003279c) list_double_pane_g1_cp2

0xd2b9,	// (0x000327a8) list_double_pane_g2_cp2

0xd2c1,	// (0x000327b0) list_double_pane_t1_cp2_ParamLimits

0xd2c1,	// (0x000327b0) list_double_pane_t1_cp2

0xd2d7,	// (0x000327c6) list_double_pane_t2_cp2_ParamLimits

0xd2d7,	// (0x000327c6) list_double_pane_t2_cp2

0xd301,	// (0x000327f0) list_single_pane_cp2_g3

0xd311,	// (0x00032800) list_single_pane_g1_cp2_ParamLimits

0xd311,	// (0x00032800) list_single_pane_g1_cp2

0xd31d,	// (0x0003280c) list_single_pane_g2_cp2

0xd325,	// (0x00032814) list_single_pane_t1_cp2_ParamLimits

0xd325,	// (0x00032814) list_single_pane_t1_cp2

0xd33d,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd33d,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2

0xd34b,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd34b,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2

0xd357,	// (0x00032846) list_single_large_graphic_pane_g3_cp2

0xd35f,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd35f,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1

0xd379,	// (0x00032868) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd379,	// (0x00032868) list_single_large_graphic_pane_t1_cp2

0xe464,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe464,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2

0xe431,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe431,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2

0xd31d,	// (0x0003280c) list_single_graphic_heading_pane_g5_cp2

0xe470,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe470,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2

0xe486,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe486,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2

0xe425,	// (0x00033914) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe425,	// (0x00033914) list_single_2graphic_pane_g1_cp2

0xe431,	// (0x00033920) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe431,	// (0x00033920) list_single_2graphic_pane_g2_cp2

0xd31d,	// (0x0003280c) list_single_2graphic_pane_g3_cp2

0xe442,	// (0x00033931) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe442,	// (0x00033931) list_single_2graphic_pane_g4_cp2

0xe44e,	// (0x0003393d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe44e,	// (0x0003393d) list_single_2graphic_pane_t1_cp2

0xc2e2,	// (0x000317d1) list_highlight_pane_g10_cp1

0xe02b,	// (0x0003351a) list_highlight_pane_g1_cp1

0xe033,	// (0x00033522) list_highlight_pane_g2_cp1

0xe03b,	// (0x0003352a) list_highlight_pane_g3_cp1

0xe043,	// (0x00033532) list_highlight_pane_g4_cp1

0xe04b,	// (0x0003353a) list_highlight_pane_g5_cp1

0xe053,	// (0x00033542) list_highlight_pane_g6_cp1

0xe05b,	// (0x0003354a) list_highlight_pane_g7_cp1

0xe063,	// (0x00033552) list_highlight_pane_g8_cp1

0xe06b,	// (0x0003355a) list_highlight_pane_g9_cp1

0xa926,	// (0x0002fe15) form_field_slider_pane_t3

0xa936,	// (0x0002fe25) form_field_slider_pane_t4

0xdf5f,	// (0x0003344e) slider_form_pane_ParamLimits

0xdf5f,	// (0x0003344e) slider_form_pane

0xc2ec,	// (0x000317db) control_abbreviations

0xc2ec,	// (0x000317db) control_conventions

0xc2ec,	// (0x000317db) control_definitions

0xc2ec,	// (0x000317db) format_table_attribute

0xe63b,	// (0x00033b2a) bg_popup_preview_window_pane_g9

0xc2ec,	// (0x000317db) format_table_data2

0xc2ec,	// (0x000317db) format_table_data3

0xc2ec,	// (0x000317db) format_table_data_example

0x0008,

0xc2ec,	// (0x000317db) intro_purpose

0x0306,	// (0x000257f5) bg_popup_preview_window_pane_g

0xc2ec,	// (0x000317db) texts_category

0xc2ec,	// (0x000317db) texts_graphics

0xd38f,	// (0x0003287e) text_digital

0xd39e,	// (0x0003288d) text_primary

0xd3ad,	// (0x0003289c) text_primary_small

0xd3bc,	// (0x000328ab) text_secondary

0xd3cb,	// (0x000328ba) text_title

0xeae3,	// (0x00033fd2) bg_passive_tab_pane_g1_cp3_srt

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp3_srt

0xeaec,	// (0x00033fdb) bg_passive_tab_pane_g3_cp3_srt

0xc33a,	// (0x00031829) bg_active_tab_pane_cp3_srt_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp3_srt

0xeaf5,	// (0x00033fe4) tabs_4_active_pane_srt_g1

0xacf6,	// (0x000301e5) tabs_4_active_pane_srt_t1_ParamLimits

0xacf6,	// (0x000301e5) tabs_4_active_pane_srt_t1

0xeae3,	// (0x00033fd2) bg_active_tab_pane_g1_cp3_copy1

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp3_copy1

0xeaec,	// (0x00033fdb) bg_active_tab_pane_g3_cp3_copy1

0xc348,	// (0x00031837) tabs_2_long_active_pane_srt_ParamLimits

0xc348,	// (0x00031837) tabs_2_long_active_pane_srt

0xc348,	// (0x00031837) tabs_2_long_passive_pane_srt_ParamLimits

0xc348,	// (0x00031837) tabs_2_long_passive_pane_srt

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp4_srt_ParamLimits

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp4_srt

0xea0e,	// (0x00033efd) bg_passive_tab_pane_g1_cp4_srt

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp4_srt

0xea17,	// (0x00033f06) bg_passive_tab_pane_g3_cp4_srt

0xc348,	// (0x00031837) bg_active_tab_pane_cp4_srt_ParamLimits

0xc348,	// (0x00031837) bg_active_tab_pane_cp4_srt

0xab02,	// (0x0002fff1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xab02,	// (0x0002fff1) tabs_2_long_active_pane_srt_t1

0xea0e,	// (0x00033efd) bg_active_tab_pane_g1_cp4_srt

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp4_srt

0xea17,	// (0x00033f06) bg_active_tab_pane_g3_cp4_srt

0xc33a,	// (0x00031829) tabs_3_long_active_pane_srt_ParamLimits

0xc33a,	// (0x00031829) tabs_3_long_active_pane_srt

0xc33a,	// (0x00031829) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc33a,	// (0x00031829) tabs_3_long_passive_pane_cp_srt

0xc33a,	// (0x00031829) tabs_3_long_passive_pane_srt_ParamLimits

0xc33a,	// (0x00031829) tabs_3_long_passive_pane_srt

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp5_srt_ParamLimits

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp5_srt

0xd0ca,	// (0x000325b9) bg_passive_tab_pane_g1_cp5_srt

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp5_srt

0xd0d3,	// (0x000325c2) bg_passive_tab_pane_g3_cp5_srt

0xc348,	// (0x00031837) bg_active_tab_pane_cp5_srt_ParamLimits

0xc348,	// (0x00031837) bg_active_tab_pane_cp5_srt

0xaaec,	// (0x0002ffdb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaaec,	// (0x0002ffdb) tabs_3_long_active_pane_srt_t1

0xd0ca,	// (0x000325b9) bg_active_tab_pane_g1_cp5_srt

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp5_srt

0xd0d3,	// (0x000325c2) bg_active_tab_pane_g3_cp5_srt

0xea00,	// (0x00033eef) navi_text_pane_srt_t1

0xe9f8,	// (0x00033ee7) navi_icon_pane_srt_g1

0xd4c9,	// (0x000329b8) midp_editing_number_pane_srt

0xd3da,	// (0x000328c9) midp_ticker_pane_srt

0xd4d1,	// (0x000329c0) midp_ticker_pane_srt_g1

0xd4d9,	// (0x000329c8) midp_ticker_pane_srt_g2

0x0001,

0x019c,	// (0x0002568b) midp_ticker_pane_srt_g

0xd4e1,	// (0x000329d0) midp_ticker_pane_srt_t1

0xe9e9,	// (0x00033ed8) midp_editing_number_pane_t1_copy1

0x9ce1,	// (0x0002f1d0) listscroll_midp_pane

0x9ce1,	// (0x0002f1d0) midp_form_pane

0xd3e2,	// (0x000328d1) midp_info_popup_window_ParamLimits

0xd3e2,	// (0x000328d1) midp_info_popup_window

0xca50,	// (0x00031f3f) bg_popup_sub_pane_cp50_ParamLimits

0xca50,	// (0x00031f3f) bg_popup_sub_pane_cp50

0xdcad,	// (0x0003319c) listscroll_midp_info_pane_ParamLimits

0xdcad,	// (0x0003319c) listscroll_midp_info_pane

0xdc95,	// (0x00033184) listscroll_form_midp_pane_ParamLimits

0xdc95,	// (0x00033184) listscroll_form_midp_pane

0xdca1,	// (0x00033190) scroll_bar_cp050

0xa91a,	// (0x0002fe09) list_midp_pane

0xf385,	// (0x00034874) signal_pane_g2_cp

0xdbc7,	// (0x000330b6) listscroll_midp_info_pane_t1_ParamLimits

0xdbc7,	// (0x000330b6) listscroll_midp_info_pane_t1

0xdbdf,	// (0x000330ce) listscroll_midp_info_pane_t2_ParamLimits

0xdbdf,	// (0x000330ce) listscroll_midp_info_pane_t2

0xdc1d,	// (0x0003310c) listscroll_midp_info_pane_t3_ParamLimits

0xdc1d,	// (0x0003310c) listscroll_midp_info_pane_t3

0xdc57,	// (0x00033146) listscroll_midp_info_pane_t4_ParamLimits

0xdc57,	// (0x00033146) listscroll_midp_info_pane_t4

0x0003,

0x0241,	// (0x00025730) listscroll_midp_info_pane_t_ParamLimits

0x0241,	// (0x00025730) listscroll_midp_info_pane_t

0xcab7,	// (0x00031fa6) scroll_pane_cp21

0xdb6b,	// (0x0003305a) form_midp_field_choice_group_pane

0xdb74,	// (0x00033063) form_midp_field_text_pane

0xdbad,	// (0x0003309c) form_midp_field_time_pane

0xdbb5,	// (0x000330a4) form_midp_gauge_slider_pane

0xdbbe,	// (0x000330ad) form_midp_gauge_wait_pane

0xc2ec,	// (0x000317db) form_midp_image_pane

0x97cf,	// (0x0002ecbe) list_single_midp_pane_ParamLimits

0x97cf,	// (0x0002ecbe) list_single_midp_pane

0xa8f6,	// (0x0002fde5) form_midp_field_text_pane_t1

0xda12,	// (0x00032f01) input_focus_pane_cp050

0xdb5a,	// (0x00033049) list_midp_form_text_pane

0xdb29,	// (0x00033018) form_midp_field_choice_group_pane_t1

0xdb37,	// (0x00033026) input_focus_pane_cp051

0xdb4b,	// (0x0003303a) list_midp_choice_pane

0xc2ec,	// (0x000317db) status_idle_pane

0xdb0d,	// (0x00032ffc) form_midp_field_time_pane_t1

0xc2e2,	// (0x000317d1) wait_anim_pane_g2_copy1

0xdb1b,	// (0x0003300a) form_midp_field_time_pane_t2

0x0001,

0xd43b,	// (0x0003292a) aid_navinavi_width_2_pane

0x023c,	// (0x0002572b) form_midp_field_time_pane_t

0xc2ec,	// (0x000317db) input_focus_pane_cp052

0xc2ec,	// (0x000317db) bg_input_focus_pane_cp040

0xdae9,	// (0x00032fd8) form_midp_gauge_slider_pane_t1

0xdaf7,	// (0x00032fe6) form_midp_gauge_slider_pane_t2

0xa8da,	// (0x0002fdc9) form_midp_gauge_slider_pane_t3

0xa8e8,	// (0x0002fdd7) form_midp_gauge_slider_pane_t4

0x0003,

0xf7c1,	// (0x00034cb0) form_midp_gauge_slider_pane_t

0xdb05,	// (0x00032ff4) form_midp_slider_pane

0xc348,	// (0x00031837) bg_input_focus_pane_cp041_ParamLimits

0xc348,	// (0x00031837) bg_input_focus_pane_cp041

0xdab6,	// (0x00032fa5) form_midp_gauge_wait_pane_t1_ParamLimits

0xdab6,	// (0x00032fa5) form_midp_gauge_wait_pane_t1

0xdac8,	// (0x00032fb7) form_midp_gauge_wait_pane_t2_ParamLimits

0xdac8,	// (0x00032fb7) form_midp_gauge_wait_pane_t2

0x0001,

0x022e,	// (0x0002571d) form_midp_gauge_wait_pane_t_ParamLimits

0x022e,	// (0x0002571d) form_midp_gauge_wait_pane_t

0xdada,	// (0x00032fc9) form_midp_wait_pane_ParamLimits

0xdada,	// (0x00032fc9) form_midp_wait_pane

0xda80,	// (0x00032f6f) form_midp_image_pane_g1

0xda89,	// (0x00032f78) form_midp_image_pane_t1

0xda98,	// (0x00032f87) form_midp_image_pane_t2

0xdaa7,	// (0x00032f96) form_midp_image_pane_t3

0x0002,

0x0227,	// (0x00025716) form_midp_image_pane_t

0xda77,	// (0x00032f66) list_single_midp_pane_g1

0x6ef9,	// (0x0002c3e8) list_single_midp_pane_t1

0xa8c3,	// (0x0002fdb2) list_midp_form_item_pane_ParamLimits

0xa8c3,	// (0x0002fdb2) list_midp_form_item_pane

0xd3f5,	// (0x000328e4) list_midp_form_item_pane_t1

0xd404,	// (0x000328f3) midp_ticker_pane_g1

0xd410,	// (0x000328ff) midp_ticker_pane_g2

0x0001,

0x0182,	// (0x00025671) midp_ticker_pane_g

0x9d8d,	// (0x0002f27c) midp_ticker_pane_t1

0xac6b,	// (0x0003015a) midp_editing_number_pane_t1

0xea77,	// (0x00033f66) midp_editing_number_pane

0xea86,	// (0x00033f75) midp_ticker_pane

0xe9d9,	// (0x00033ec8) ai_message_heading_pane

0xc2ec,	// (0x000317db) bg_popup_window_pane_cp14

0xe9e1,	// (0x00033ed0) listscroll_ai_message_pane

0xe963,	// (0x00033e52) ai_message_heading_pane_g1_ParamLimits

0xe963,	// (0x00033e52) ai_message_heading_pane_g1

0xe96f,	// (0x00033e5e) ai_message_heading_pane_g2_ParamLimits

0xe96f,	// (0x00033e5e) ai_message_heading_pane_g2

0xe97b,	// (0x00033e6a) ai_message_heading_pane_g3_ParamLimits

0xe97b,	// (0x00033e6a) ai_message_heading_pane_g3

0xe987,	// (0x00033e76) ai_message_heading_pane_g4_ParamLimits

0xe987,	// (0x00033e76) ai_message_heading_pane_g4

0x0003,

0x0368,	// (0x00025857) ai_message_heading_pane_g_ParamLimits

0x0368,	// (0x00025857) ai_message_heading_pane_g

0xe993,	// (0x00033e82) ai_message_heading_pane_t1_ParamLimits

0xe993,	// (0x00033e82) ai_message_heading_pane_t1

0xe9ad,	// (0x00033e9c) ai_message_heading_pane_t2_ParamLimits

0xe9ad,	// (0x00033e9c) ai_message_heading_pane_t2

0x0001,

0x0371,	// (0x00025860) ai_message_heading_pane_t_ParamLimits

0x0371,	// (0x00025860) ai_message_heading_pane_t

0xe9bf,	// (0x00033eae) bg_popup_heading_pane_cp1_ParamLimits

0xe9bf,	// (0x00033eae) bg_popup_heading_pane_cp1

0xe951,	// (0x00033e40) list_ai_message_pane_ParamLimits

0xe951,	// (0x00033e40) list_ai_message_pane

0xcab7,	// (0x00031fa6) scroll_pane_cp10

0xe8ed,	// (0x00033ddc) list_ai_message_pane_g1

0xe8f5,	// (0x00033de4) list_ai_message_pane_g2

0x0001,

0x0345,	// (0x00025834) list_ai_message_pane_g

0xe8fd,	// (0x00033dec) list_ai_message_pane_t1_ParamLimits

0xe8fd,	// (0x00033dec) list_ai_message_pane_t1

0xe912,	// (0x00033e01) list_ai_message_pane_t2_ParamLimits

0xe912,	// (0x00033e01) list_ai_message_pane_t2

0xe927,	// (0x00033e16) list_ai_message_pane_t3_ParamLimits

0xe927,	// (0x00033e16) list_ai_message_pane_t3

0xe93c,	// (0x00033e2b) list_ai_message_pane_t4_ParamLimits

0xe93c,	// (0x00033e2b) list_ai_message_pane_t4

0x0003,

0x034a,	// (0x00025839) list_ai_message_pane_t_ParamLimits

0x034a,	// (0x00025839) list_ai_message_pane_t

0xaac7,	// (0x0002ffb6) cell_ai_soft_ind_pane_ParamLimits

0xaac7,	// (0x0002ffb6) cell_ai_soft_ind_pane

0xd41c,	// (0x0003290b) cell_ai_soft_ind_pane_g1_ParamLimits

0xd41c,	// (0x0003290b) cell_ai_soft_ind_pane_g1

0xc2ec,	// (0x000317db) grid_highlight_cp1

0xd429,	// (0x00032918) text_secondary_cp56_ParamLimits

0xd429,	// (0x00032918) text_secondary_cp56

0xe8c2,	// (0x00033db1) example_general_pane_ParamLimits

0xe8c2,	// (0x00033db1) example_general_pane

0xe8ce,	// (0x00033dbd) example_parent_pane_g1_ParamLimits

0xe8ce,	// (0x00033dbd) example_parent_pane_g1

0xe8da,	// (0x00033dc9) example_parent_pane_t1_ParamLimits

0xe8da,	// (0x00033dc9) example_parent_pane_t1

0xa196,	// (0x0002f685) popup_preview_text_window_ParamLimits

0xa196,	// (0x0002f685) popup_preview_text_window

0xd309,	// (0x000327f8) list_single_pane_cp2_g4

0xc520,	// (0x00031a0f) bg_popup_preview_window_pane_ParamLimits

0xc520,	// (0x00031a0f) bg_popup_preview_window_pane

0xe643,	// (0x00033b32) popup_preview_text_window_t1_ParamLimits

0xe643,	// (0x00033b32) popup_preview_text_window_t1

0xe661,	// (0x00033b50) popup_preview_text_window_t2_ParamLimits

0xe661,	// (0x00033b50) popup_preview_text_window_t2

0xe6aa,	// (0x00033b99) popup_preview_text_window_t3_ParamLimits

0xe6aa,	// (0x00033b99) popup_preview_text_window_t3

0xe6ef,	// (0x00033bde) popup_preview_text_window_t4_ParamLimits

0xe6ef,	// (0x00033bde) popup_preview_text_window_t4

0x0004,

0x0319,	// (0x00025808) popup_preview_text_window_t_ParamLimits

0x0319,	// (0x00025808) popup_preview_text_window_t

0xe76d,	// (0x00033c5c) scroll_pane_cp11

0xd922,	// (0x00032e11) bg_popup_preview_window_pane_g1

0xe603,	// (0x00033af2) bg_popup_preview_window_pane_g2

0xe60b,	// (0x00033afa) bg_popup_preview_window_pane_g3

0xe613,	// (0x00033b02) bg_popup_preview_window_pane_g4

0xe61b,	// (0x00033b0a) bg_popup_preview_window_pane_g5

0xe623,	// (0x00033b12) bg_popup_preview_window_pane_g6

0xe62b,	// (0x00033b1a) bg_popup_preview_window_pane_g7

0xe633,	// (0x00033b22) bg_popup_preview_window_pane_g8

0x097b,	// (0x00025e6a) aid_popup_width_pane

0xa112,	// (0x0002f601) popup_midp_note_alarm_window_ParamLimits

0xa112,	// (0x0002f601) popup_midp_note_alarm_window

0xc98c,	// (0x00031e7b) data_form_pane_ParamLimits

0x96a5,	// (0x0002eb94) form_field_data_pane_g1

0x96af,	// (0x0002eb9e) form_field_data_pane_t1_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_ParamLimits

0xc9a6,	// (0x00031e95) data_form_wide_pane_ParamLimits

0x6c84,	// (0x0002c173) form_field_data_wide_pane_g1

0x6c90,	// (0x0002c17f) form_field_data_wide_pane_t1_ParamLimits

0xc713,	// (0x00031c02) input_focus_pane_cp6_ParamLimits

0x9b1b,	// (0x0002f00a) input_popup_find_pane_g1_ParamLimits

0x9b1b,	// (0x0002f00a) input_popup_find_pane_g1

0x1209,	// (0x000266f8) aid_navi_side_left_pane

0x121e,	// (0x0002670d) aid_navi_side_right_pane

0xe108,	// (0x000335f7) bg_popup_window_pane_cp30_ParamLimits

0xe108,	// (0x000335f7) bg_popup_window_pane_cp30

0xe182,	// (0x00033671) popup_midp_note_alarm_window_g1_ParamLimits

0xe182,	// (0x00033671) popup_midp_note_alarm_window_g1

0xe1b2,	// (0x000336a1) popup_midp_note_alarm_window_t1_ParamLimits

0xe1b2,	// (0x000336a1) popup_midp_note_alarm_window_t1

0xe253,	// (0x00033742) popup_midp_note_alarm_window_t2_ParamLimits

0xe253,	// (0x00033742) popup_midp_note_alarm_window_t2

0xe301,	// (0x000337f0) popup_midp_note_alarm_window_t3_ParamLimits

0xe301,	// (0x000337f0) popup_midp_note_alarm_window_t3

0xe329,	// (0x00033818) popup_midp_note_alarm_window_t4_ParamLimits

0xe329,	// (0x00033818) popup_midp_note_alarm_window_t4

0xe349,	// (0x00033838) popup_midp_note_alarm_window_t5_ParamLimits

0xe349,	// (0x00033838) popup_midp_note_alarm_window_t5

0x000a,

0x02b6,	// (0x000257a5) popup_midp_note_alarm_window_t_ParamLimits

0x02b6,	// (0x000257a5) popup_midp_note_alarm_window_t

0xe3f5,	// (0x000338e4) wait_bar_pane_cp1_ParamLimits

0xe3f5,	// (0x000338e4) wait_bar_pane_cp1

0xc2ec,	// (0x000317db) wait_anim_pane_copy1

0xc2ec,	// (0x000317db) wait_border_pane_copy1

0xde20,	// (0x0003330f) wait_border_pane_g1_copy1

0x6caa,	// (0x0002c199) form_field_popup_pane_g1

0x96c9,	// (0x0002ebb8) form_field_popup_pane_t1_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_cp7_ParamLimits

0xc9d2,	// (0x00031ec1) list_form_pane_ParamLimits

0x6ccc,	// (0x0002c1bb) form_field_popup_wide_pane_g1

0x6cd4,	// (0x0002c1c3) form_field_popup_wide_pane_t1_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_cp8_ParamLimits

0xc9de,	// (0x00031ecd) list_form_wide_pane_ParamLimits

0xeb1c,	// (0x0003400b) aid_size_cell_graphic_pane

0x9748,	// (0x0002ec37) data_form_pane_t1_ParamLimits

0x97eb,	// (0x0002ecda) data_form_wide_pane_t1_ParamLimits

0xa54b,	// (0x0002fa3a) bg_status_flat_pane

0x9195,	// (0x0002e684) title_pane_t1_ParamLimits

0xc302,	// (0x000317f1) title_pane_t2_ParamLimits

0xc328,	// (0x00031817) title_pane_t3_ParamLimits

0xf59b,	// (0x00034a8a) title_pane_t_ParamLimits

0xce60,	// (0x0003234f) level_1_signal_ParamLimits

0xce6d,	// (0x0003235c) level_2_signal_ParamLimits

0xce7a,	// (0x00032369) level_3_signal_ParamLimits

0xce87,	// (0x00032376) level_4_signal_ParamLimits

0xce94,	// (0x00032383) level_5_signal_ParamLimits

0xcea1,	// (0x00032390) level_6_signal_ParamLimits

0xceae,	// (0x0003239d) level_7_signal_ParamLimits

0xce60,	// (0x0003234f) level_1_battery_ParamLimits

0xce6d,	// (0x0003235c) level_2_battery_ParamLimits

0xce7a,	// (0x00032369) level_3_battery_ParamLimits

0xce87,	// (0x00032376) level_4_battery_ParamLimits

0xce94,	// (0x00032383) level_5_battery_ParamLimits

0xcea1,	// (0x00032390) level_6_battery_ParamLimits

0xceae,	// (0x0003239d) level_7_battery_ParamLimits

0xe02b,	// (0x0003351a) bg_status_flat_pane_g1

0xe033,	// (0x00033522) bg_status_flat_pane_g2

0xe03b,	// (0x0003352a) bg_status_flat_pane_g3

0xe043,	// (0x00033532) bg_status_flat_pane_g4

0xe04b,	// (0x0003353a) bg_status_flat_pane_g5

0xe053,	// (0x00033542) bg_status_flat_pane_g6

0xe05b,	// (0x0003354a) bg_status_flat_pane_g7

0x9229,	// (0x0002e718) tabs_3_active_pane_t1_ParamLimits

0x9229,	// (0x0002e718) tabs_3_passive_pane_t1_ParamLimits

0x9243,	// (0x0002e732) tabs_4_active_pane_t1_ParamLimits

0x9243,	// (0x0002e732) tabs_4_1_passive_pane_t1_ParamLimits

0x9b31,	// (0x0002f020) tabs_2_active_pane_t1_ParamLimits

0x9b31,	// (0x0002f020) tabs_2_passive_pane_t1_ParamLimits

0xc348,	// (0x00031837) bg_active_tab_pane_cp4_ParamLimits

0x9b43,	// (0x0002f032) tabs_2_long_active_pane_t1_ParamLimits

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp4_ParamLimits

0x216c,	// (0x0002765b) list_single_midp_graphic_pane_t1_ParamLimits

0xc348,	// (0x00031837) bg_active_tab_pane_cp5_ParamLimits

0x9b56,	// (0x0002f045) tabs_3_long_active_pane_t1_ParamLimits

0xcaef,	// (0x00031fde) bg_passive_tab_pane_cp5_ParamLimits

0x216c,	// (0x0002765b) list_single_midp_graphic_pane_t1

0xa54b,	// (0x0002fa3a) bg_status_flat_pane_ParamLimits

0xd7f5,	// (0x00032ce4) indicator_pane_cp2_ParamLimits

0xd7f5,	// (0x00032ce4) indicator_pane_cp2

0xa6c2,	// (0x0002fbb1) navi_pane_srt_ParamLimits

0xa6c2,	// (0x0002fbb1) navi_pane_srt

0xd81d,	// (0x00032d0c) popup_clock_digital_analogue_window_cp1

0xc395,	// (0x00031884) indicator_pane_t1

0xd3da,	// (0x000328c9) copy_highlight_pane

0xd3da,	// (0x000328c9) cursor_graphics_pane

0xd3da,	// (0x000328c9) graphic_within_text_pane

0xd3da,	// (0x000328c9) link_highlight_pane

0xe730,	// (0x00033c1f) popup_preview_text_window_t5_ParamLimits

0xe730,	// (0x00033c1f) popup_preview_text_window_t5

0xd443,	// (0x00032932) cursor_digital_pane

0xd443,	// (0x00032932) cursor_primary_pane

0xd454,	// (0x00032943) cursor_primary_small_pane

0xd45c,	// (0x0003294b) cursor_secondary_pane

0xd464,	// (0x00032953) cursor_title_pane

0xd443,	// (0x00032932) link_highlight_digital_pane

0xd44b,	// (0x0003293a) link_highlight_primary_pane

0xd454,	// (0x00032943) link_highlight_primary_small_pane

0xd45c,	// (0x0003294b) link_highlight_secondary_pane

0xd464,	// (0x00032953) link_highlight_title_pane

0xd443,	// (0x00032932) copy_highlight_digital_pane

0xd443,	// (0x00032932) copy_highlight_primary_pane

0xd454,	// (0x00032943) copy_highlight_primary_small_pane

0xd45c,	// (0x0003294b) copy_highlight_secondary_pane

0xd464,	// (0x00032953) copy_highlight_title_pane

0xd45c,	// (0x0003294b) graphic_text_digital_pane

0xe0ab,	// (0x0003359a) graphic_text_primary_pane

0xe0b4,	// (0x000335a3) graphic_text_primary_small_pane

0xd454,	// (0x00032943) graphic_text_secondary_pane

0xd443,	// (0x00032932) graphic_text_title_pane

0x9d9f,	// (0x0002f28e) cursor_primary_pane_g1

0xe09d,	// (0x0003358c) cursor_text_primary_t1

0xa95a,	// (0x0002fe49) cursor_primary_small_pane_g1

0xe08f,	// (0x0003357e) cursor_text_primary_small_t1

0xa950,	// (0x0002fe3f) cursor_primary_small_pane_g1_copy1

0xe081,	// (0x00033570) cursor_text_primary_small_t1_copy1

0xe073,	// (0x00033562) cursor_text_title_t1

0xa946,	// (0x0002fe35) cursor_title_pane_g1

0x9d9f,	// (0x0002f28e) cursor_digital_pane_g1

0xd46c,	// (0x0003295b) cursor_text_digital_t1

0xe014,	// (0x00033503) link_highlight_primary_pane_g1

0xe01c,	// (0x0003350b) link_highlight_primary_pane_t1

0xd47a,	// (0x00032969) link_highlight_primary_small_pane_g1

0xd482,	// (0x00032971) link_highlight_primary_small_pane_t1

0xd47a,	// (0x00032969) link_highlight_secondary_pane_g1

0xd491,	// (0x00032980) link_highlight_secondary_pane_t1

0xdf88,	// (0x00033477) link_highlight_title_pane_g1

0xdf90,	// (0x0003347f) link_highlight_title_pane_t1

0xdf71,	// (0x00033460) link_highlight_digital_pane_g1

0xdf79,	// (0x00033468) link_highlight_digital_pane_t1

0xde65,	// (0x00033354) copy_highlight_primary_pane_g1

0xde6d,	// (0x0003335c) copy_highlight_primary_pane_t1

0xde3f,	// (0x0003332e) copy_highlight_primary_small_pane_g1

0xde56,	// (0x00033345) copy_highlight_primary_small_pane_t1

0xd4a0,	// (0x0003298f) copy_highlight_secondary_pane_g1

0xd4a8,	// (0x00032997) copy_highlight_secondary_pane_t1

0xde3f,	// (0x0003332e) copy_highlight_title_pane_g1

0xde47,	// (0x00033336) copy_highlight_title_pane_t1

0xde65,	// (0x00033354) copy_highlight_digital_pane_g1

0xeca6,	// (0x00034195) copy_highlight_digital_pane_t1

0xebfa,	// (0x000340e9) graphic_text_primary_pane_g1

0xec8a,	// (0x00034179) graphic_text_primary_pane_t1

0xec98,	// (0x00034187) graphic_text_primary_pane_t2

0x0001,

0x03e5,	// (0x000258d4) graphic_text_primary_pane_t

0xec66,	// (0x00034155) graphic_text_primary_small_pane_g1

0xec6e,	// (0x0003415d) graphic_text_primary_small_pane_t1

0xec7c,	// (0x0003416b) graphic_text_primary_small_pane_t2

0x0001,

0x03e0,	// (0x000258cf) graphic_text_primary_small_pane_t

0xec42,	// (0x00034131) graphic_text_secondary_pane_g1

0xec4a,	// (0x00034139) graphic_text_secondary_pane_t1

0xec58,	// (0x00034147) graphic_text_secondary_pane_t2

0x0001,

0x03db,	// (0x000258ca) graphic_text_secondary_pane_t

0xec1e,	// (0x0003410d) graphic_text_title_pane_g1

0xec26,	// (0x00034115) graphic_text_title_pane_t1

0xec34,	// (0x00034123) graphic_text_title_pane_t2

0x0001,

0x03d6,	// (0x000258c5) graphic_text_title_pane_t

0xebfa,	// (0x000340e9) graphic_text_digital_pane_g1

0xec02,	// (0x000340f1) graphic_text_digital_pane_t1

0xec10,	// (0x000340ff) graphic_text_digital_pane_t2

0x0001,

0x03d1,	// (0x000258c0) graphic_text_digital_pane_t

0xc348,	// (0x00031837) navi_icon_pane_srt_ParamLimits

0xc348,	// (0x00031837) navi_icon_pane_srt

0xc2ec,	// (0x000317db) navi_midp_pane_srt

0xc2ec,	// (0x000317db) navi_navi_pane_srt

0xc348,	// (0x00031837) navi_text_pane_srt_ParamLimits

0xc348,	// (0x00031837) navi_text_pane_srt

0xebc5,	// (0x000340b4) navi_navi_icon_text_pane_srt

0xebdf,	// (0x000340ce) navi_navi_pane_srt_g1_ParamLimits

0xebdf,	// (0x000340ce) navi_navi_pane_srt_g1

0xebcd,	// (0x000340bc) navi_navi_pane_srt_g2_ParamLimits

0xebcd,	// (0x000340bc) navi_navi_pane_srt_g2

0x0001,

0xf86f,	// (0x00034d5e) navi_navi_pane_srt_g_ParamLimits

0xf86f,	// (0x00034d5e) navi_navi_pane_srt_g

0xebf1,	// (0x000340e0) navi_navi_tabs_pane_srt

0xebc5,	// (0x000340b4) navi_navi_text_pane_srt

0xebc5,	// (0x000340b4) navi_navi_volume_pane_srt

0xebb6,	// (0x000340a5) navi_navi_text_pane_srt_t1

0x2a36,	// (0x00027f25) navi_navi_volume_pane_srt_g1

0x2a3e,	// (0x00027f2d) volume_small_pane_srt_ParamLimits

0x2a3e,	// (0x00027f2d) volume_small_pane_srt

0x170e,	// (0x00026bfd) volume_small_pane_srt_g1_ParamLimits

0x170e,	// (0x00026bfd) volume_small_pane_srt_g1

0x171e,	// (0x00026c0d) volume_small_pane_srt_g2_ParamLimits

0x171e,	// (0x00026c0d) volume_small_pane_srt_g2

0x172f,	// (0x00026c1e) volume_small_pane_srt_g3_ParamLimits

0x172f,	// (0x00026c1e) volume_small_pane_srt_g3

0x1740,	// (0x00026c2f) volume_small_pane_srt_g4_ParamLimits

0x1740,	// (0x00026c2f) volume_small_pane_srt_g4

0x1751,	// (0x00026c40) volume_small_pane_srt_g5_ParamLimits

0x1751,	// (0x00026c40) volume_small_pane_srt_g5

0x1762,	// (0x00026c51) volume_small_pane_srt_g6_ParamLimits

0x1762,	// (0x00026c51) volume_small_pane_srt_g6

0x1773,	// (0x00026c62) volume_small_pane_srt_g7_ParamLimits

0x1773,	// (0x00026c62) volume_small_pane_srt_g7

0x1784,	// (0x00026c73) volume_small_pane_srt_g8_ParamLimits

0x1784,	// (0x00026c73) volume_small_pane_srt_g8

0x1795,	// (0x00026c84) volume_small_pane_srt_g9_ParamLimits

0x1795,	// (0x00026c84) volume_small_pane_srt_g9

0x17a6,	// (0x00026c95) volume_small_pane_srt_g10_ParamLimits

0x17a6,	// (0x00026c95) volume_small_pane_srt_g10

0x0009,

0xf741,	// (0x00034c30) volume_small_pane_srt_g_ParamLimits

0xf741,	// (0x00034c30) volume_small_pane_srt_g

0xc5c9,	// (0x00031ab8) query_popup_data_pane_cp2

0xeb9c,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xeb9c,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1

0xe0ab,	// (0x0003359a) navi_tabs_2_long_pane_srt

0xe0ab,	// (0x0003359a) navi_tabs_2_pane_srt

0xe0ab,	// (0x0003359a) navi_tabs_3_long_pane_srt

0xe0ab,	// (0x0003359a) navi_tabs_3_pane_srt

0xe0ab,	// (0x0003359a) navi_tabs_4_pane_srt

0x2a16,	// (0x00027f05) tabs_2_active_pane_srt_ParamLimits

0x2a16,	// (0x00027f05) tabs_2_active_pane_srt

0x2a26,	// (0x00027f15) tabs_2_passive_pane_srt_ParamLimits

0x2a26,	// (0x00027f15) tabs_2_passive_pane_srt

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp1_srt_ParamLimits

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp1_srt

0xeb7a,	// (0x00034069) bg_passive_tab_pane_g1_cp1_srt

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp1_srt

0xeb83,	// (0x00034072) bg_passive_tab_pane_g3_cp1_srt

0xc33a,	// (0x00031829) bg_active_tab_pane_cp1_srt_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp1_srt

0xeb8c,	// (0x0003407b) tabs_2_active_pane_srt_g1

0xad73,	// (0x00030262) tabs_2_active_pane_srt_t1_ParamLimits

0xad73,	// (0x00030262) tabs_2_active_pane_srt_t1

0xeb7a,	// (0x00034069) bg_active_tab_pane_g1_cp1_srt

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp1_srt

0xeb83,	// (0x00034072) bg_active_tab_pane_g3_cp1_srt

0x29d1,	// (0x00027ec0) tabs_3_active_pane_srt_ParamLimits

0x29d1,	// (0x00027ec0) tabs_3_active_pane_srt

0x29e2,	// (0x00027ed1) tabs_3_passive_pane_cp_srt_ParamLimits

0x29e2,	// (0x00027ed1) tabs_3_passive_pane_cp_srt

0x29f3,	// (0x00027ee2) tabs_3_passive_pane_srt_ParamLimits

0x29f3,	// (0x00027ee2) tabs_3_passive_pane_srt

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp2_srt_ParamLimits

0xda12,	// (0x00032f01) bg_passive_tab_pane_cp2_srt

0xd4b7,	// (0x000329a6) bg_passive_tab_pane_g1_cp2_srt

0xd083,	// (0x00032572) bg_passive_tab_pane_g2_cp2_srt

0xd4c0,	// (0x000329af) bg_passive_tab_pane_g3_cp2_srt

0xc33a,	// (0x00031829) bg_active_tab_pane_cp2_srt_ParamLimits

0xc33a,	// (0x00031829) bg_active_tab_pane_cp2_srt

0xeb72,	// (0x00034061) tabs_3_active_pane_srt_g1

0xad5d,	// (0x0003024c) tabs_3_active_pane_srt_t1_ParamLimits

0xad5d,	// (0x0003024c) tabs_3_active_pane_srt_t1

0xd4b7,	// (0x000329a6) bg_active_tab_pane_g1_cp2_srt

0xd083,	// (0x00032572) bg_active_tab_pane_g2_cp2_srt

0xd4c0,	// (0x000329af) bg_active_tab_pane_g3_cp2_srt

0x2977,	// (0x00027e66) tabs_4_active_pane_srt_ParamLimits

0x2977,	// (0x00027e66) tabs_4_active_pane_srt

0x2989,	// (0x00027e78) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2989,	// (0x00027e78) tabs_4_passive_pane_cp2_srt

0xd5e4,	// (0x00032ad3) aid_size_cell_toolbar

0xe890,	// (0x00033d7f) main_idle_act_pane_ParamLimits

0xd6bc,	// (0x00032bab) popup_large_graphic_colour_window_ParamLimits

0xa416,	// (0x0002f905) popup_toolbar_window_ParamLimits

0xa416,	// (0x0002f905) popup_toolbar_window

0x6fbd,	// (0x0002c4ac) list_single_graphic_2heading_pane_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_graphic_2heading_pane

0xcc99,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane

0xccab,	// (0x0003219a) aid_size_cell_apps_grid_prt_pane

0xcaef,	// (0x00031fde) bg_wml_button_pane_cp1_ParamLimits

0xcaef,	// (0x00031fde) bg_wml_button_pane_cp1

0xa8f6,	// (0x0002fde5) form_midp_field_text_pane_t1_ParamLimits

0xda12,	// (0x00032f01) input_focus_pane_cp050_ParamLimits

0xdb5a,	// (0x00033049) list_midp_form_text_pane_ParamLimits

0xdb37,	// (0x00033026) input_focus_pane_cp051_ParamLimits

0xdb4b,	// (0x0003303a) list_midp_choice_pane_ParamLimits

0xa88b,	// (0x0002fd7a) list_single_2graphic_pane_cp3_ParamLimits

0xa88b,	// (0x0002fd7a) list_single_2graphic_pane_cp3

0xa8a1,	// (0x0002fd90) list_single_midp_graphic_pane_ParamLimits

0xa8a1,	// (0x0002fd90) list_single_midp_graphic_pane

0x08e7,	// (0x00025dd6) list_single_graphic_2heading_pane_g1_ParamLimits

0x08e7,	// (0x00025dd6) list_single_graphic_2heading_pane_g1

0x08f3,	// (0x00025de2) list_single_graphic_2heading_pane_g4_ParamLimits

0x08f3,	// (0x00025de2) list_single_graphic_2heading_pane_g4

0x08ff,	// (0x00025dee) list_single_graphic_2heading_pane_g5_ParamLimits

0x08ff,	// (0x00025dee) list_single_graphic_2heading_pane_g5

0x0002,

0xf77e,	// (0x00034c6d) list_single_graphic_2heading_pane_g_ParamLimits

0xf77e,	// (0x00034c6d) list_single_graphic_2heading_pane_g

0x090b,	// (0x00025dfa) list_single_graphic_2heading_pane_t1_ParamLimits

0x090b,	// (0x00025dfa) list_single_graphic_2heading_pane_t1

0x091f,	// (0x00025e0e) list_single_graphic_2heading_pane_t2_ParamLimits

0x091f,	// (0x00025e0e) list_single_graphic_2heading_pane_t2

0x093b,	// (0x00025e2a) list_single_graphic_2heading_pane_t3_ParamLimits

0x093b,	// (0x00025e2a) list_single_graphic_2heading_pane_t3

0x0002,

0xf785,	// (0x00034c74) list_single_graphic_2heading_pane_t_ParamLimits

0xf785,	// (0x00034c74) list_single_graphic_2heading_pane_t

0xd860,	// (0x00032d4f) bg_popup_sub_pane_cp2

0xd88a,	// (0x00032d79) grid_toobar_pane

0x20dd,	// (0x000275cc) cell_toolbar_pane_ParamLimits

0x20dd,	// (0x000275cc) cell_toolbar_pane

0xd8c6,	// (0x00032db5) cell_toolbar_pane_g1_ParamLimits

0xd8c6,	// (0x00032db5) cell_toolbar_pane_g1

0xd8da,	// (0x00032dc9) cell_toolbar_pane_g2_ParamLimits

0xd8da,	// (0x00032dc9) cell_toolbar_pane_g2

0x0001,

0x01e8,	// (0x000256d7) cell_toolbar_pane_g_ParamLimits

0x01e8,	// (0x000256d7) cell_toolbar_pane_g

0xd8fc,	// (0x00032deb) grid_highlight_pane_cp2_ParamLimits

0xd8fc,	// (0x00032deb) grid_highlight_pane_cp2

0xd916,	// (0x00032e05) toolbar_button_pane

0xd922,	// (0x00032e11) toolbar_button_pane_g1

0xd92a,	// (0x00032e19) toolbar_button_pane_g2

0xd932,	// (0x00032e21) toolbar_button_pane_g3

0xd93a,	// (0x00032e29) toolbar_button_pane_g4

0xd942,	// (0x00032e31) toolbar_button_pane_g5

0xd94a,	// (0x00032e39) toolbar_button_pane_g6

0xd952,	// (0x00032e41) toolbar_button_pane_g7

0xd95a,	// (0x00032e49) toolbar_button_pane_g8

0xd962,	// (0x00032e51) toolbar_button_pane_g9

0x0009,

0xf793,	// (0x00034c82) toolbar_button_pane_g

0x2115,	// (0x00027604) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2115,	// (0x00027604) list_single_2graphic_pane_g1_cp3

0x8ae8,	// (0x0002dfd7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8ae8,	// (0x0002dfd7) list_single_2graphic_pane_g2_cp3

0x2132,	// (0x00027621) list_single_2graphic_pane_g3_cp3

0x213a,	// (0x00027629) list_single_2graphic_pane_g4_cp3_ParamLimits

0x213a,	// (0x00027629) list_single_2graphic_pane_g4_cp3

0x2146,	// (0x00027635) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2146,	// (0x00027635) list_single_2graphic_pane_t1_cp3

0x2160,	// (0x0002764f) list_single_midp_graphic_pane_g2_ParamLimits

0x2160,	// (0x0002764f) list_single_midp_graphic_pane_g2

0xd5ec,	// (0x00032adb) aid_zoom_text_primary

0x6e8d,	// (0x0002c37c) aid_zoom_text_secondary

0xd574,	// (0x00032a63) status_small_pane_g7_ParamLimits

0xd574,	// (0x00032a63) status_small_pane_g7

0xd597,	// (0x00032a86) status_small_pane_t1_ParamLimits

0x9171,	// (0x0002e660) title_pane_g2

0x0003,

0xf592,	// (0x00034a81) title_pane_g

0x9a1e,	// (0x0002ef0d) aid_size_cell_colour_1_pane_ParamLimits

0x9a1e,	// (0x0002ef0d) aid_size_cell_colour_1_pane

0x9a32,	// (0x0002ef21) aid_size_cell_colour_2_pane_ParamLimits

0x9a32,	// (0x0002ef21) aid_size_cell_colour_2_pane

0x9a46,	// (0x0002ef35) aid_size_cell_colour_3_pane_ParamLimits

0x9a46,	// (0x0002ef35) aid_size_cell_colour_3_pane

0x9a5a,	// (0x0002ef49) aid_size_cell_colour_4_pane_ParamLimits

0x9a5a,	// (0x0002ef49) aid_size_cell_colour_4_pane

0x1145,	// (0x00026634) title_pane_stacon_g1_ParamLimits

0x1145,	// (0x00026634) title_pane_stacon_g1

0xdec4,	// (0x000333b3) popup_note_wait_window_g3_ParamLimits

0xdec4,	// (0x000333b3) popup_note_wait_window_g3

0xdf3a,	// (0x00033429) popup_note_wait_window_t5_ParamLimits

0xdf3a,	// (0x00033429) popup_note_wait_window_t5

0xc2ec,	// (0x000317db) main_feb_china_hwr_fs_writing_pane

0x9e3e,	// (0x0002f32d) popup_feb_china_hwr_fs_window_ParamLimits

0x9e3e,	// (0x0002f32d) popup_feb_china_hwr_fs_window

0x8af9,	// (0x0002dfe8) aid_size_cell_hwr_fs_ParamLimits

0x8af9,	// (0x0002dfe8) aid_size_cell_hwr_fs

0xda12,	// (0x00032f01) bg_popup_sub_pane_cp3_ParamLimits

0xda12,	// (0x00032f01) bg_popup_sub_pane_cp3

0x8b0e,	// (0x0002dffd) grid_hwr_fs_pane_ParamLimits

0x8b0e,	// (0x0002dffd) grid_hwr_fs_pane

0x21af,	// (0x0002769e) linegrid_hwr_fs_pane_ParamLimits

0x21af,	// (0x0002769e) linegrid_hwr_fs_pane

0x8b26,	// (0x0002e015) cell_hwr_fs_pane_ParamLimits

0x8b26,	// (0x0002e015) cell_hwr_fs_pane

0xda1e,	// (0x00032f0d) linegrid_hwr_fs_pane_g1_ParamLimits

0xda1e,	// (0x00032f0d) linegrid_hwr_fs_pane_g1

0xa85f,	// (0x0002fd4e) linegrid_hwr_fs_pane_g2_ParamLimits

0xa85f,	// (0x0002fd4e) linegrid_hwr_fs_pane_g2

0xda2a,	// (0x00032f19) linegrid_hwr_fs_pane_g3_ParamLimits

0xda2a,	// (0x00032f19) linegrid_hwr_fs_pane_g3

0x21f3,	// (0x000276e2) linegrid_hwr_fs_pane_g4_ParamLimits

0x21f3,	// (0x000276e2) linegrid_hwr_fs_pane_g4

0x220d,	// (0x000276fc) linegrid_hwr_fs_pane_g5_ParamLimits

0x220d,	// (0x000276fc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ad,	// (0x00034c9c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ad,	// (0x00034c9c) linegrid_hwr_fs_pane_g

0xda36,	// (0x00032f25) cell_hwr_fs_pane_g1_ParamLimits

0xda36,	// (0x00032f25) cell_hwr_fs_pane_g1

0xd82e,	// (0x00032d1d) cell_hwr_fs_pane_g2_ParamLimits

0xd82e,	// (0x00032d1d) cell_hwr_fs_pane_g2

0xa871,	// (0x0002fd60) cell_hwr_fs_pane_g3_ParamLimits

0xa871,	// (0x0002fd60) cell_hwr_fs_pane_g3

0xa87e,	// (0x0002fd6d) cell_hwr_fs_pane_g4_ParamLimits

0xa87e,	// (0x0002fd6d) cell_hwr_fs_pane_g4

0x0003,

0xf7b8,	// (0x00034ca7) cell_hwr_fs_pane_g_ParamLimits

0xf7b8,	// (0x00034ca7) cell_hwr_fs_pane_g

0x8b4c,	// (0x0002e03b) cell_hwr_fs_pane_t1

0xc2ec,	// (0x000317db) grid_highlight_pane_cp6

0xc2ec,	// (0x000317db) main_idle_act2_pane

0xca9e,	// (0x00031f8d) aid_inside_area_popup_secondary

0xa97a,	// (0x0002fe69) aid_inside_area_window_primary_ParamLimits

0xa97a,	// (0x0002fe69) aid_inside_area_window_primary

0xecb5,	// (0x000341a4) ai2_news_ticker_pane

0xecbd,	// (0x000341ac) aid_size_cell_ai1_link_ParamLimits

0xecbd,	// (0x000341ac) aid_size_cell_ai1_link

0xecd7,	// (0x000341c6) popup_ai2_data_window_ParamLimits

0xecd7,	// (0x000341c6) popup_ai2_data_window

0xeceb,	// (0x000341da) popup_ai2_link_window_ParamLimits

0xeceb,	// (0x000341da) popup_ai2_link_window

0xda12,	// (0x00032f01) bg_popup_sub_pane_cp4_ParamLimits

0xda12,	// (0x00032f01) bg_popup_sub_pane_cp4

0xecff,	// (0x000341ee) grid_ai2_link_pane_ParamLimits

0xecff,	// (0x000341ee) grid_ai2_link_pane

0xed16,	// (0x00034205) popup_ai2_link_window_g1_ParamLimits

0xed16,	// (0x00034205) popup_ai2_link_window_g1

0xed22,	// (0x00034211) popup_ai2_link_window_g2_ParamLimits

0xed22,	// (0x00034211) popup_ai2_link_window_g2

0x0001,

0x03ea,	// (0x000258d9) popup_ai2_link_window_g_ParamLimits

0x03ea,	// (0x000258d9) popup_ai2_link_window_g

0xed31,	// (0x00034220) ai2_mp_button_pane

0xed39,	// (0x00034228) ai2_mp_volume_pane

0xdb37,	// (0x00033026) bg_popup_sub_pane_cp5_ParamLimits

0xdb37,	// (0x00033026) bg_popup_sub_pane_cp5

0xed41,	// (0x00034230) heading_ai2_gene_pane_ParamLimits

0xed41,	// (0x00034230) heading_ai2_gene_pane

0xed4d,	// (0x0003423c) list_ai2_gene_pane_ParamLimits

0xed4d,	// (0x0003423c) list_ai2_gene_pane

0xed95,	// (0x00034284) cell_ai2_link_pane_ParamLimits

0xed95,	// (0x00034284) cell_ai2_link_pane

0xedab,	// (0x0003429a) cell_ai2_link_pane_g1

0xc2ec,	// (0x000317db) grid_highlight_pane_cp7

0x2a53,	// (0x00027f42) ai2_mp_volume_pane_g1

0xee84,	// (0x00034373) ai2_mp_volume_pane_g2

0xedf1,	// (0x000342e0) list_ai2_gene_pane_t1

0xee7c,	// (0x0003436b) ai2_mp_volume_pane_g3

0x0002,

0xf874,	// (0x00034d63) ai2_mp_volume_pane_g

0x2a5b,	// (0x00027f4a) volume_small_pane_cp3

0xee8c,	// (0x0003437b) aid_size_cell_ai2_button

0xee94,	// (0x00034383) grid_ai2_button_pane

0xee9d,	// (0x0003438c) cell_ai2_button_pane_ParamLimits

0xee9d,	// (0x0003438c) cell_ai2_button_pane

0xc2e2,	// (0x000317d1) cell_ai2_button_pane_g1

0xc2ec,	// (0x000317db) grid_highlight_pane_cp8

0xee3c,	// (0x0003432b) ai2_gene_pane_t1_ParamLimits

0xee3c,	// (0x0003432b) ai2_gene_pane_t1

0x9dd0,	// (0x0002f2bf) aid_height_parent_landscape

0xab19,	// (0x00030008) aid_height_set_list

0xe890,	// (0x00033d7f) aid_size_parent

0xeb1c,	// (0x0003400b) aid_size_cell_graphic_pane_ParamLimits

0xed5d,	// (0x0003424c) popup_ai2_data_window_g1_ParamLimits

0xed5d,	// (0x0003424c) popup_ai2_data_window_g1

0xed69,	// (0x00034258) ai2_news_ticker_pane_g1

0xed71,	// (0x00034260) ai2_news_ticker_pane_g2

0x0001,

0x03ef,	// (0x000258de) ai2_news_ticker_pane_g

0xed79,	// (0x00034268) ai2_news_ticker_pane_t1

0xed87,	// (0x00034276) ai2_news_ticker_pane_t2

0x0001,

0x03f4,	// (0x000258e3) ai2_news_ticker_pane_t

0xedb4,	// (0x000342a3) heading_ai2_gene_pane_g1

0xedbc,	// (0x000342ab) heading_ai2_gene_pane_t1_ParamLimits

0xedbc,	// (0x000342ab) heading_ai2_gene_pane_t1

0xedd1,	// (0x000342c0) list_highlight_pane_cp6

0xedd9,	// (0x000342c8) ai2_gene_pane_ParamLimits

0xedd9,	// (0x000342c8) ai2_gene_pane

0xedff,	// (0x000342ee) list_ai2_gene_pane_t2

0x0001,

0x03f9,	// (0x000258e8) list_ai2_gene_pane_t

0xee0d,	// (0x000342fc) list_highlight_pane_cp8_ParamLimits

0xee0d,	// (0x000342fc) list_highlight_pane_cp8

0xee1e,	// (0x0003430d) ai2_gene_pane_g1_ParamLimits

0xee1e,	// (0x0003430d) ai2_gene_pane_g1

0xee30,	// (0x0003431f) ai2_gene_pane_g2_ParamLimits

0xee30,	// (0x0003431f) ai2_gene_pane_g2

0x0001,

0x03fe,	// (0x000258ed) ai2_gene_pane_g_ParamLimits

0x03fe,	// (0x000258ed) ai2_gene_pane_g

0xc92e,	// (0x00031e1d) scroll_pane_cp12

0x8aa5,	// (0x0002df94) control_pane_t3_ParamLimits

0x8aa5,	// (0x0002df94) control_pane_t3

0xd588,	// (0x00032a77) status_small_pane_g8_ParamLimits

0xd588,	// (0x00032a77) status_small_pane_g8

0x9ed1,	// (0x0002f3c0) popup_find_window_ParamLimits

0xa14c,	// (0x0002f63b) popup_note_image_window_ParamLimits

0x67e8,	// (0x0002bcd7) list_double2_graphic_pane_vc_g1_ParamLimits

0x67e8,	// (0x0002bcd7) list_double2_graphic_pane_vc_g1

0x676e,	// (0x0002bc5d) list_double2_graphic_pane_vc_g2_ParamLimits

0x676e,	// (0x0002bc5d) list_double2_graphic_pane_vc_g2

0x677a,	// (0x0002bc69) list_double2_graphic_pane_vc_g3_ParamLimits

0x677a,	// (0x0002bc69) list_double2_graphic_pane_vc_g3

0x0002,

0xf78c,	// (0x00034c7b) list_double2_graphic_pane_vc_g_ParamLimits

0xf78c,	// (0x00034c7b) list_double2_graphic_pane_vc_g

0x6eb9,	// (0x0002c3a8) list_double2_graphic_pane_vc_t1_ParamLimits

0x6eb9,	// (0x0002c3a8) list_double2_graphic_pane_vc_t1

0x676e,	// (0x0002bc5d) list_single_heading_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_heading_pane_vc_g1

0x677a,	// (0x0002bc69) list_single_heading_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_heading_pane_vc_g

0x6ecf,	// (0x0002c3be) list_single_heading_pane_vc_t1_ParamLimits

0x6ecf,	// (0x0002c3be) list_single_heading_pane_vc_t1

0x6ee5,	// (0x0002c3d4) list_single_heading_pane_vc_t2_ParamLimits

0x6ee5,	// (0x0002c3d4) list_single_heading_pane_vc_t2

0x0001,

0xf7a8,	// (0x00034c97) list_single_heading_pane_vc_t_ParamLimits

0xf7a8,	// (0x00034c97) list_single_heading_pane_vc_t

0xd96a,	// (0x00032e59) list_setting_number_pane_vc_g1_ParamLimits

0xd96a,	// (0x00032e59) list_setting_number_pane_vc_g1

0xd976,	// (0x00032e65) list_setting_number_pane_vc_g2_ParamLimits

0xd976,	// (0x00032e65) list_setting_number_pane_vc_g2

0x0001,

0x0207,	// (0x000256f6) list_setting_number_pane_vc_g_ParamLimits

0x0207,	// (0x000256f6) list_setting_number_pane_vc_g

0xd982,	// (0x00032e71) list_setting_number_pane_vc_t1_ParamLimits

0xd982,	// (0x00032e71) list_setting_number_pane_vc_t1

0xd996,	// (0x00032e85) list_setting_number_pane_vc_t2_ParamLimits

0xd996,	// (0x00032e85) list_setting_number_pane_vc_t2

0xd9b2,	// (0x00032ea1) list_setting_number_pane_vc_t3_ParamLimits

0xd9b2,	// (0x00032ea1) list_setting_number_pane_vc_t3

0x0002,

0x020c,	// (0x000256fb) list_setting_number_pane_vc_t_ParamLimits

0x020c,	// (0x000256fb) list_setting_number_pane_vc_t

0xd9da,	// (0x00032ec9) set_value_pane_vc_ParamLimits

0xd9da,	// (0x00032ec9) set_value_pane_vc

0x6fbd,	// (0x0002c4ac) list_double2_graphic_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double2_graphic_pane_vc

0xea99,	// (0x00033f88) list_double2_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00033f88) list_double2_large_graphic_pane_vc

0x6fbd,	// (0x0002c4ac) list_double2_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double2_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_graphic_heading_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_graphic_heading_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_graphic_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_graphic_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_heading_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_heading_pane_vc

0xea99,	// (0x00033f88) list_double_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00033f88) list_double_large_graphic_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_number_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_number_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_pane_vc

0x6fbd,	// (0x0002c4ac) list_double_time_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_double_time_pane_vc

0x6fbd,	// (0x0002c4ac) list_setting_number_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_setting_number_pane_vc

0x6fbd,	// (0x0002c4ac) list_setting_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_setting_pane_vc

0x6fbd,	// (0x0002c4ac) list_single_graphic_heading_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_graphic_heading_pane_vc

0x6fbd,	// (0x0002c4ac) list_single_heading_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_heading_pane_vc

0x6fbd,	// (0x0002c4ac) list_single_number_heading_pane_vc_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_number_heading_pane_vc

0x67e8,	// (0x0002bcd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x67e8,	// (0x0002bcd7) list_double_graphic_heading_pane_vc_g1

0x676e,	// (0x0002bc5d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x676e,	// (0x0002bc5d) list_double_graphic_heading_pane_vc_g2

0x677a,	// (0x0002bc69) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x677a,	// (0x0002bc69) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf78c,	// (0x00034c7b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf78c,	// (0x00034c7b) list_double_graphic_heading_pane_vc_g

0x708e,	// (0x0002c57d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x708e,	// (0x0002c57d) list_double_graphic_heading_pane_vc_t1

0x6ecf,	// (0x0002c3be) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6ecf,	// (0x0002c3be) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf87b,	// (0x00034d6a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf87b,	// (0x00034d6a) list_double_graphic_heading_pane_vc_t

0xd96a,	// (0x00032e59) list_setting_pane_vc_g1_ParamLimits

0xd96a,	// (0x00032e59) list_setting_pane_vc_g1

0xd976,	// (0x00032e65) list_setting_pane_vc_g2_ParamLimits

0xd976,	// (0x00032e65) list_setting_pane_vc_g2

0x0001,

0x0207,	// (0x000256f6) list_setting_pane_vc_g_ParamLimits

0x0207,	// (0x000256f6) list_setting_pane_vc_g

0xf093,	// (0x00034582) list_setting_pane_vc_t1_ParamLimits

0xf093,	// (0x00034582) list_setting_pane_vc_t1

0xf0a7,	// (0x00034596) list_setting_pane_vc_t2_ParamLimits

0xf0a7,	// (0x00034596) list_setting_pane_vc_t2

0x0001,

0x044d,	// (0x0002593c) list_setting_pane_vc_t_ParamLimits

0x044d,	// (0x0002593c) list_setting_pane_vc_t

0xd9da,	// (0x00032ec9) set_value_pane_cp_vc_ParamLimits

0xd9da,	// (0x00032ec9) set_value_pane_cp_vc

0x676e,	// (0x0002bc5d) list_single_number_heading_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_single_number_heading_pane_vc_g1

0x677a,	// (0x0002bc69) list_single_number_heading_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_single_number_heading_pane_vc_g

0x6ecf,	// (0x0002c3be) list_single_number_heading_pane_vc_t1_ParamLimits

0x6ecf,	// (0x0002c3be) list_single_number_heading_pane_vc_t1

0x70a2,	// (0x0002c591) list_single_number_heading_pane_vc_t2_ParamLimits

0x70a2,	// (0x0002c591) list_single_number_heading_pane_vc_t2

0x67d6,	// (0x0002bcc5) list_single_number_heading_pane_vc_t3_ParamLimits

0x67d6,	// (0x0002bcc5) list_single_number_heading_pane_vc_t3

0x0002,

0xf895,	// (0x00034d84) list_single_number_heading_pane_vc_t_ParamLimits

0xf895,	// (0x00034d84) list_single_number_heading_pane_vc_t

0x67e8,	// (0x0002bcd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x67e8,	// (0x0002bcd7) list_single_graphic_heading_pane_vc_g1

0x676e,	// (0x0002bc5d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x676e,	// (0x0002bc5d) list_single_graphic_heading_pane_vc_g4

0x677a,	// (0x0002bc69) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x677a,	// (0x0002bc69) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78c,	// (0x00034c7b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78c,	// (0x00034c7b) list_single_graphic_heading_pane_vc_g

0x6ecf,	// (0x0002c3be) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6ecf,	// (0x0002c3be) list_single_graphic_heading_pane_vc_t1

0x70b6,	// (0x0002c5a5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x70b6,	// (0x0002c5a5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf89c,	// (0x00034d8b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf89c,	// (0x00034d8b) list_single_graphic_heading_pane_vc_t

0x676e,	// (0x0002bc5d) list_double2_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_double2_pane_vc_g1

0x677a,	// (0x0002bc69) list_double2_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_double2_pane_vc_g

0x6f85,	// (0x0002c474) list_double2_pane_vc_t1_ParamLimits

0x6f85,	// (0x0002c474) list_double2_pane_vc_t1

0x70ca,	// (0x0002c5b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x70ca,	// (0x0002c5b9) list_double2_large_graphic_pane_vc_g1

0x70d6,	// (0x0002c5c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x70d6,	// (0x0002c5c5) list_double2_large_graphic_pane_vc_g2

0x70e2,	// (0x0002c5d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x70e2,	// (0x0002c5d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00034b18) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00034b18) list_double2_large_graphic_pane_vc_g

0x70ee,	// (0x0002c5dd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x70ee,	// (0x0002c5dd) list_double2_large_graphic_pane_vc_t1

0x7104,	// (0x0002c5f3) list_double_time_pane_vc_g1_ParamLimits

0x7104,	// (0x0002c5f3) list_double_time_pane_vc_g1

0x7110,	// (0x0002c5ff) list_double_time_pane_vc_g2_ParamLimits

0x7110,	// (0x0002c5ff) list_double_time_pane_vc_g2

0x0001,

0xf8a1,	// (0x00034d90) list_double_time_pane_vc_g_ParamLimits

0xf8a1,	// (0x00034d90) list_double_time_pane_vc_g

0x711c,	// (0x0002c60b) list_double_time_pane_vc_t1_ParamLimits

0x711c,	// (0x0002c60b) list_double_time_pane_vc_t1

0x7135,	// (0x0002c624) list_double_time_pane_vc_t2_ParamLimits

0x7135,	// (0x0002c624) list_double_time_pane_vc_t2

0x7175,	// (0x0002c664) list_double_time_pane_vc_t3_ParamLimits

0x7175,	// (0x0002c664) list_double_time_pane_vc_t3

0x718d,	// (0x0002c67c) list_double_time_pane_vc_t4_ParamLimits

0x718d,	// (0x0002c67c) list_double_time_pane_vc_t4

0x0003,

0xf8a6,	// (0x00034d95) list_double_time_pane_vc_t_ParamLimits

0xf8a6,	// (0x00034d95) list_double_time_pane_vc_t

0x676e,	// (0x0002bc5d) list_double_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_double_pane_vc_g1

0x677a,	// (0x0002bc69) list_double_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_double_pane_vc_g

0x71a1,	// (0x0002c690) list_double_pane_vc_t1_ParamLimits

0x71a1,	// (0x0002c690) list_double_pane_vc_t1

0x71b3,	// (0x0002c6a2) list_double_pane_vc_t2_ParamLimits

0x71b3,	// (0x0002c6a2) list_double_pane_vc_t2

0x0001,

0xf8af,	// (0x00034d9e) list_double_pane_vc_t_ParamLimits

0xf8af,	// (0x00034d9e) list_double_pane_vc_t

0x676e,	// (0x0002bc5d) list_double_number_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_double_number_pane_vc_g1

0x677a,	// (0x0002bc69) list_double_number_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_double_number_pane_vc_g

0x71cb,	// (0x0002c6ba) list_double_number_pane_vc_t1_ParamLimits

0x71cb,	// (0x0002c6ba) list_double_number_pane_vc_t1

0x71df,	// (0x0002c6ce) list_double_number_pane_vc_t2_ParamLimits

0x71df,	// (0x0002c6ce) list_double_number_pane_vc_t2

0x71b3,	// (0x0002c6a2) list_double_number_pane_vc_t3_ParamLimits

0x71b3,	// (0x0002c6a2) list_double_number_pane_vc_t3

0x0002,

0xf8b4,	// (0x00034da3) list_double_number_pane_vc_t_ParamLimits

0xf8b4,	// (0x00034da3) list_double_number_pane_vc_t

0x71f1,	// (0x0002c6e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x71f1,	// (0x0002c6e0) list_double_large_graphic_pane_vc_g1

0x71fd,	// (0x0002c6ec) list_double_large_graphic_pane_vc_g2_ParamLimits

0x71fd,	// (0x0002c6ec) list_double_large_graphic_pane_vc_g2

0x70e2,	// (0x0002c5d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x70e2,	// (0x0002c5d1) list_double_large_graphic_pane_vc_g3

0x720c,	// (0x0002c6fb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x720c,	// (0x0002c6fb) list_double_large_graphic_pane_vc_g4

0x0003,

0xf8bb,	// (0x00034daa) list_double_large_graphic_pane_vc_g_ParamLimits

0xf8bb,	// (0x00034daa) list_double_large_graphic_pane_vc_g

0x7218,	// (0x0002c707) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7218,	// (0x0002c707) list_double_large_graphic_pane_vc_t1

0x722a,	// (0x0002c719) list_double_large_graphic_pane_vc_t2_ParamLimits

0x722a,	// (0x0002c719) list_double_large_graphic_pane_vc_t2

0x0001,

0xf8c4,	// (0x00034db3) list_double_large_graphic_pane_vc_t_ParamLimits

0xf8c4,	// (0x00034db3) list_double_large_graphic_pane_vc_t

0x676e,	// (0x0002bc5d) list_double_heading_pane_vc_g1_ParamLimits

0x676e,	// (0x0002bc5d) list_double_heading_pane_vc_g1

0x677a,	// (0x0002bc69) list_double_heading_pane_vc_g2_ParamLimits

0x677a,	// (0x0002bc69) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00034afb) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00034afb) list_double_heading_pane_vc_g

0x7243,	// (0x0002c732) list_double_heading_pane_vc_t1_ParamLimits

0x7243,	// (0x0002c732) list_double_heading_pane_vc_t1

0x6ecf,	// (0x0002c3be) list_double_heading_pane_vc_t2_ParamLimits

0x6ecf,	// (0x0002c3be) list_double_heading_pane_vc_t2

0x0001,

0xf8c9,	// (0x00034db8) list_double_heading_pane_vc_t_ParamLimits

0xf8c9,	// (0x00034db8) list_double_heading_pane_vc_t

0x7257,	// (0x0002c746) list_double_graphic_pane_vc_g1_ParamLimits

0x7257,	// (0x0002c746) list_double_graphic_pane_vc_g1

0x7267,	// (0x0002c756) list_double_graphic_pane_vc_g2_ParamLimits

0x7267,	// (0x0002c756) list_double_graphic_pane_vc_g2

0x7276,	// (0x0002c765) list_double_graphic_pane_vc_g3_ParamLimits

0x7276,	// (0x0002c765) list_double_graphic_pane_vc_g3

0x0002,

0xf8ce,	// (0x00034dbd) list_double_graphic_pane_vc_g_ParamLimits

0xf8ce,	// (0x00034dbd) list_double_graphic_pane_vc_g

0x7282,	// (0x0002c771) list_double_graphic_pane_vc_t1_ParamLimits

0x7282,	// (0x0002c771) list_double_graphic_pane_vc_t1

0x71b3,	// (0x0002c6a2) list_double_graphic_pane_vc_t2_ParamLimits

0x71b3,	// (0x0002c6a2) list_double_graphic_pane_vc_t2

0x0001,

0xf8d5,	// (0x00034dc4) list_double_graphic_pane_vc_t_ParamLimits

0xf8d5,	// (0x00034dc4) list_double_graphic_pane_vc_t

0x0987,	// (0x00025e76) aid_size_cell_fastswap

0x8794,	// (0x0002dc83) aid_size_cell_touch_ParamLimits

0x8794,	// (0x0002dc83) aid_size_cell_touch

0x0bf4,	// (0x000260e3) popup_fast_swap_wide_window_ParamLimits

0x0bf4,	// (0x000260e3) popup_fast_swap_wide_window

0x88df,	// (0x0002ddce) touch_pane_ParamLimits

0x88df,	// (0x0002ddce) touch_pane

0xc984,	// (0x00031e73) button_value_adjust_pane_cp2

0x6bb8,	// (0x0002c0a7) button_value_adjust_pane_cp4

0x6bd8,	// (0x0002c0c7) form_field_data_pane_cp2

0x9666,	// (0x0002eb55) form_field_data_wide_pane_cp2

0xcce2,	// (0x000321d1) bg_scroll_pane_ParamLimits

0x132d,	// (0x0002681c) scroll_handle_pane_ParamLimits

0x1341,	// (0x00026830) scroll_sc2_down_pane_ParamLimits

0x1341,	// (0x00026830) scroll_sc2_down_pane

0xcd13,	// (0x00032202) scroll_sc2_up_pane_ParamLimits

0xcd13,	// (0x00032202) scroll_sc2_up_pane

0xaeaa,	// (0x00030399) grid_wheel_folder_pane_g1_ParamLimits

0xaeaa,	// (0x00030399) grid_wheel_folder_pane_g1

0x15b7,	// (0x00026aa6) clock_nsta_pane_cp2_ParamLimits

0x15b7,	// (0x00026aa6) clock_nsta_pane_cp2

0x9ce1,	// (0x0002f1d0) listscroll_midp_pane_ParamLimits

0x9cf2,	// (0x0002f1e1) midp_canvas_pane

0xd5dc,	// (0x00032acb) nsta_clock_indic_pane

0xd614,	// (0x00032b03) listscroll_form_pane_vc

0xd61c,	// (0x00032b0b) listscroll_set_pane_vc_ParamLimits

0xd61c,	// (0x00032b0b) listscroll_set_pane_vc

0xa573,	// (0x0002fa62) clock_nsta_pane

0xa59d,	// (0x0002fa8c) indicator_nsta_pane

0xd860,	// (0x00032d4f) bg_popup_sub_pane_cp2_ParamLimits

0xd874,	// (0x00032d63) find_pane_cp2_ParamLimits

0xd874,	// (0x00032d63) find_pane_cp2

0xd88a,	// (0x00032d79) grid_toobar_pane_ParamLimits

0xd9e6,	// (0x00032ed5) list_form_gen_pane_vc_ParamLimits

0xd9e6,	// (0x00032ed5) list_form_gen_pane_vc

0xd9fc,	// (0x00032eeb) scroll_pane_cp8_vc_ParamLimits

0xd9fc,	// (0x00032eeb) scroll_pane_cp8_vc

0xda4c,	// (0x00032f3b) data_form_wide_pane_vc_ParamLimits

0xda4c,	// (0x00032f3b) data_form_wide_pane_vc

0xda58,	// (0x00032f47) form_field_data_wide_pane_vc_g1

0xda60,	// (0x00032f4f) form_field_data_wide_pane_vc_t1_ParamLimits

0xda60,	// (0x00032f4f) form_field_data_wide_pane_vc_t1

0xc998,	// (0x00031e87) input_focus_pane_cp6_vc_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_cp6_vc

0xa91a,	// (0x0002fe09) list_midp_pane_ParamLimits

0xe8a2,	// (0x00033d91) scroll_pane_cp16_ParamLimits

0xe8a2,	// (0x00033d91) scroll_pane_cp16

0xdcc1,	// (0x000331b0) button_value_adjust_pane_ParamLimits

0xdcc1,	// (0x000331b0) button_value_adjust_pane

0xab2a,	// (0x00030019) button_value_adjust_pane_cp6_ParamLimits

0xab2a,	// (0x00030019) button_value_adjust_pane_cp6

0xac40,	// (0x0003012f) settings_code_pane_cp_ParamLimits

0xac40,	// (0x0003012f) settings_code_pane_cp

0xc2e2,	// (0x000317d1) cell_touch_pane_g1

0xc2e2,	// (0x000317d1) cell_touch_pane_g2

0x0001,

0xf714,	// (0x00034c03) cell_touch_pane_g

0xad89,	// (0x00030278) cell_touch_pane_cp_ParamLimits

0xad89,	// (0x00030278) cell_touch_pane_cp

0xada5,	// (0x00030294) cell_touch_pane_ParamLimits

0xada5,	// (0x00030294) cell_touch_pane

0xc2e2,	// (0x000317d1) scroll_sc2_down_pane_g1

0xc2e2,	// (0x000317d1) scroll_sc2_up_pane_g1

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp4_vc

0xeeaf,	// (0x0003439e) list_set_graphic_pane_vc_g1_ParamLimits

0xeeaf,	// (0x0003439e) list_set_graphic_pane_vc_g1

0xeebb,	// (0x000343aa) list_set_graphic_pane_vc_g2_ParamLimits

0xeebb,	// (0x000343aa) list_set_graphic_pane_vc_g2

0x0001,

0x040f,	// (0x000258fe) list_set_graphic_pane_vc_g_ParamLimits

0x040f,	// (0x000258fe) list_set_graphic_pane_vc_g

0xeec7,	// (0x000343b6) text_primary_small_cp13_vc_ParamLimits

0xeec7,	// (0x000343b6) text_primary_small_cp13_vc

0xeedf,	// (0x000343ce) list_set_graphic_pane_vc_ParamLimits

0xeedf,	// (0x000343ce) list_set_graphic_pane_vc

0xc2ec,	// (0x000317db) input_focus_pane_cp2_vc

0xc2e2,	// (0x000317d1) setting_code_pane_vc_g1

0xeef3,	// (0x000343e2) setting_code_pane_vc_t1

0xef01,	// (0x000343f0) set_text_pane_vc_t1_ParamLimits

0xef01,	// (0x000343f0) set_text_pane_vc_t1

0xc2ec,	// (0x000317db) input_focus_pane_cp1_vc

0xef20,	// (0x0003440f) list_set_text_pane_vc

0xc2e2,	// (0x000317d1) setting_text_pane_vc_g1

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp2_vc

0xef2a,	// (0x00034419) setting_slider_graphic_pane_vc_g1

0xef32,	// (0x00034421) setting_slider_graphic_pane_vc_t1

0xef40,	// (0x0003442f) setting_slider_graphic_pane_vc_t2

0x0001,

0x0414,	// (0x00025903) setting_slider_graphic_pane_vc_t

0xef4e,	// (0x0003443d) slider_set_pane_cp_vc

0xef56,	// (0x00034445) slider_set_pane_vc_g1

0xef5f,	// (0x0003444e) slider_set_pane_vc_g2

0x0006,

0x0419,	// (0x00025908) slider_set_pane_vc_g

0xc9ff,	// (0x00031eee) set_opt_bg_pane_g1_copy1

0xca07,	// (0x00031ef6) set_opt_bg_pane_g2_copy1

0xef8b,	// (0x0003447a) set_opt_bg_pane_g3_copy1

0xca17,	// (0x00031f06) set_opt_bg_pane_g4_copy1

0xca1f,	// (0x00031f0e) set_opt_bg_pane_g5_copy1

0xca27,	// (0x00031f16) set_opt_bg_pane_g6_copy1

0xef93,	// (0x00034482) set_opt_bg_pane_g7_copy1

0xef9d,	// (0x0003448c) set_opt_bg_pane_g8_copy1

0xefa5,	// (0x00034494) set_opt_bg_pane_g9_copy1

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp_vc

0xefad,	// (0x0003449c) setting_slider_pane_vc_t1

0xef32,	// (0x00034421) setting_slider_pane_vc_t2

0xef40,	// (0x0003442f) setting_slider_pane_vc_t3

0x0002,

0x0428,	// (0x00025917) setting_slider_pane_vc_t

0xef4e,	// (0x0003443d) slider_set_pane_vc

0x238e,	// (0x0002787d) volume_set_pane_vc_g1

0x2a86,	// (0x00027f75) volume_set_pane_vc_g2

0x2a8f,	// (0x00027f7e) volume_set_pane_vc_g3

0x2a98,	// (0x00027f87) volume_set_pane_vc_g4

0x2aa1,	// (0x00027f90) volume_set_pane_vc_g5

0x2aaa,	// (0x00027f99) volume_set_pane_vc_g6

0x2ab3,	// (0x00027fa2) volume_set_pane_vc_g7

0x2abc,	// (0x00027fab) volume_set_pane_vc_g8

0x2ac5,	// (0x00027fb4) volume_set_pane_vc_g9

0x2ace,	// (0x00027fbd) volume_set_pane_vc_g10

0x0009,

0xf880,	// (0x00034d6f) volume_set_pane_vc_g

0xefbc,	// (0x000344ab) volume_set_pane_vc

0xefc4,	// (0x000344b3) button_value_adjust_pane_cp1_vc

0xefce,	// (0x000344bd) list_highlight_pane_cp2_vc

0xefd7,	// (0x000344c6) list_set_pane_vc_ParamLimits

0xefd7,	// (0x000344c6) list_set_pane_vc

0xf029,	// (0x00034518) main_pane_set_vc_t1_ParamLimits

0xf029,	// (0x00034518) main_pane_set_vc_t1

0xf03e,	// (0x0003452d) main_pane_set_vc_t2_ParamLimits

0xf03e,	// (0x0003452d) main_pane_set_vc_t2

0xf050,	// (0x0003453f) main_pane_set_vc_t3_ParamLimits

0xf050,	// (0x0003453f) main_pane_set_vc_t3

0xf062,	// (0x00034551) main_pane_set_vc_t4_ParamLimits

0xf062,	// (0x00034551) main_pane_set_vc_t4

0x0003,

0x0444,	// (0x00025933) main_pane_set_vc_t_ParamLimits

0x0444,	// (0x00025933) main_pane_set_vc_t

0xf074,	// (0x00034563) setting_code_pane_vc_ParamLimits

0xf074,	// (0x00034563) setting_code_pane_vc

0xf083,	// (0x00034572) setting_slider_graphic_pane_vc

0xf083,	// (0x00034572) setting_slider_pane_vc

0xf083,	// (0x00034572) setting_text_pane_vc

0xf083,	// (0x00034572) setting_volume_pane_vc

0xf08b,	// (0x0003457a) scroll_pane_cp121_vc

0xc972,	// (0x00031e61) set_content_pane_vc

0xf0c9,	// (0x000345b8) button_value_adjust_pane_g1

0xf0d2,	// (0x000345c1) button_value_adjust_pane_g2

0x0001,

0x0497,	// (0x00025986) button_value_adjust_pane_g

0xf0db,	// (0x000345ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf0db,	// (0x000345ca) form_field_slider_wide_pane_vc_t1

0xf0ef,	// (0x000345de) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf0ef,	// (0x000345de) form_field_slider_wide_pane_vc_t2

0x0001,

0x049c,	// (0x0002598b) form_field_slider_wide_pane_vc_t_ParamLimits

0x049c,	// (0x0002598b) form_field_slider_wide_pane_vc_t

0xc33a,	// (0x00031829) input_focus_pane_cp10_vc_ParamLimits

0xc33a,	// (0x00031829) input_focus_pane_cp10_vc

0xf101,	// (0x000345f0) slider_cont_pane_cp1_vc_ParamLimits

0xf101,	// (0x000345f0) slider_cont_pane_cp1_vc

0xef56,	// (0x00034445) slider_form_pane_g1_cp2

0xef5f,	// (0x0003444e) slider_form_pane_g2_cp2

0xf11a,	// (0x00034609) form_field_slider_pane_vc_t3

0xf128,	// (0x00034617) form_field_slider_pane_vc_t4

0xf136,	// (0x00034625) slider_form_pane_vc_ParamLimits

0xf136,	// (0x00034625) slider_form_pane_vc

0xf143,	// (0x00034632) form_field_slider_pane_vc_t1_ParamLimits

0xf143,	// (0x00034632) form_field_slider_pane_vc_t1

0xf0ef,	// (0x000345de) form_field_slider_pane_vc_t2_ParamLimits

0xf0ef,	// (0x000345de) form_field_slider_pane_vc_t2

0x0001,

0x04ac,	// (0x0002599b) form_field_slider_pane_vc_t_ParamLimits

0x04ac,	// (0x0002599b) form_field_slider_pane_vc_t

0xc33a,	// (0x00031829) input_focus_pane_cp9_vc_ParamLimits

0xc33a,	// (0x00031829) input_focus_pane_cp9_vc

0xf15f,	// (0x0003464e) slider_cont_pane_vc_ParamLimits

0xf15f,	// (0x0003464e) slider_cont_pane_vc

0xf171,	// (0x00034660) list_form_graphic_pane_cp_vc_ParamLimits

0xf171,	// (0x00034660) list_form_graphic_pane_cp_vc

0xda58,	// (0x00032f47) form_field_popup_wide_pane_vc_g1

0xf186,	// (0x00034675) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf186,	// (0x00034675) form_field_popup_wide_pane_vc_t1

0xc998,	// (0x00031e87) input_focus_pane_cp8_vc_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_cp8_vc

0xf19d,	// (0x0003468c) list_form_wide_pane_vc_ParamLimits

0xf19d,	// (0x0003468c) list_form_wide_pane_vc

0xf1a9,	// (0x00034698) list_form_graphic_pane_vc_g1

0xf1b1,	// (0x000346a0) list_form_graphic_pane_vc_t1_ParamLimits

0xf1b1,	// (0x000346a0) list_form_graphic_pane_vc_t1

0xc348,	// (0x00031837) list_highlight_pane_cp5_vc_ParamLimits

0xc348,	// (0x00031837) list_highlight_pane_cp5_vc

0xf1cd,	// (0x000346bc) list_form_graphic_pane_vc_ParamLimits

0xf1cd,	// (0x000346bc) list_form_graphic_pane_vc

0xda58,	// (0x00032f47) form_field_popup_pane_vc_g1

0xf1e3,	// (0x000346d2) form_field_popup_pane_vc_t1_ParamLimits

0xf1e3,	// (0x000346d2) form_field_popup_pane_vc_t1

0xc998,	// (0x00031e87) input_focus_pane_cp7_vc_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_cp7_vc

0xf1fa,	// (0x000346e9) list_form_pane_vc_ParamLimits

0xf1fa,	// (0x000346e9) list_form_pane_vc

0xf206,	// (0x000346f5) data_form_pane_vc_t1_ParamLimits

0xf206,	// (0x000346f5) data_form_pane_vc_t1

0xc9ff,	// (0x00031eee) input_focus_pane_vc_g1

0xca07,	// (0x00031ef6) input_focus_pane_vc_g2

0xca0f,	// (0x00031efe) input_focus_pane_vc_g3

0xca17,	// (0x00031f06) input_focus_pane_vc_g4

0xca1f,	// (0x00031f0e) input_focus_pane_vc_g5

0xca27,	// (0x00031f16) input_focus_pane_vc_g6

0xca2f,	// (0x00031f1e) input_focus_pane_vc_g7

0xca37,	// (0x00031f26) input_focus_pane_vc_g8

0xca3f,	// (0x00031f2e) input_focus_pane_vc_g9

0xc2e2,	// (0x000317d1) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x00034bbf) input_focus_pane_vc_g

0xda4c,	// (0x00032f3b) data_form_pane_vc_ParamLimits

0xda4c,	// (0x00032f3b) data_form_pane_vc

0xda58,	// (0x00032f47) form_field_data_pane_vc_g1

0xf221,	// (0x00034710) form_field_data_pane_vc_t1_ParamLimits

0xf221,	// (0x00034710) form_field_data_pane_vc_t1

0xc998,	// (0x00031e87) input_focus_pane_vc_ParamLimits

0xc998,	// (0x00031e87) input_focus_pane_vc

0xf23b,	// (0x0003472a) button_value_adjust_pane_cp3_vc

0xf243,	// (0x00034732) button_value_adjust_pane_cp5_vc

0xf24b,	// (0x0003473a) form_field_data_pane_vc_ParamLimits

0xf24b,	// (0x0003473a) form_field_data_pane_vc

0xf262,	// (0x00034751) form_field_data_pane_vc_cp2

0xf26a,	// (0x00034759) form_field_data_wide_pane_vc_ParamLimits

0xf26a,	// (0x00034759) form_field_data_wide_pane_vc

0xf280,	// (0x0003476f) form_field_data_wide_pane_vc_cp2

0xf288,	// (0x00034777) form_field_popup_pane_vc_ParamLimits

0xf288,	// (0x00034777) form_field_popup_pane_vc

0xf29f,	// (0x0003478e) form_field_popup_wide_pane_vc_ParamLimits

0xf29f,	// (0x0003478e) form_field_popup_wide_pane_vc

0xf2b5,	// (0x000347a4) form_field_slider_pane_vc_ParamLimits

0xf2b5,	// (0x000347a4) form_field_slider_pane_vc

0xf2c8,	// (0x000347b7) form_field_slider_wide_pane_vc_ParamLimits

0xf2c8,	// (0x000347b7) form_field_slider_wide_pane_vc

0xadc3,	// (0x000302b2) grid_touch_1_pane_ParamLimits

0xadc3,	// (0x000302b2) grid_touch_1_pane

0xadd7,	// (0x000302c6) grid_touch_2_pane_ParamLimits

0xadd7,	// (0x000302c6) grid_touch_2_pane

0xf300,	// (0x000347ef) touch_pane_g1_ParamLimits

0xf300,	// (0x000347ef) touch_pane_g1

0xf2db,	// (0x000347ca) cell_app_pane_cp_wide_ParamLimits

0xf2db,	// (0x000347ca) cell_app_pane_cp_wide

0xf2ec,	// (0x000347db) grid_popup_fast_wide_pane_ParamLimits

0xf2ec,	// (0x000347db) grid_popup_fast_wide_pane

0xf30e,	// (0x000347fd) scroll_pane_cp19_ParamLimits

0xf30e,	// (0x000347fd) scroll_pane_cp19

0xc2ec,	// (0x000317db) bg_popup_window_pane_cp20

0xf322,	// (0x00034811) listscroll_popup_fast_wide_pane

0xd63c,	// (0x00032b2b) grid_indicator_nsta_pane

0xf32a,	// (0x00034819) clock_nsta_pane_g1

0xf333,	// (0x00034822) clock_nsta_pane_t1

0xae01,	// (0x000302f0) cell_indicator_nsta_pane_ParamLimits

0xae01,	// (0x000302f0) cell_indicator_nsta_pane

0xf300,	// (0x000347ef) cell_indicator_nsta_pane_g1

0xae1e,	// (0x0003030d) cell_indicator_nsta_pane_g2

0x0001,

0xf8df,	// (0x00034dce) cell_indicator_nsta_pane_g

0xf34f,	// (0x0003483e) clock_nsta_pane_cp

0xf357,	// (0x00034846) indicator_nsta_pane_cp

0xf35f,	// (0x0003484e) nsta_clock_indic_pane_g1

0xc38d,	// (0x0003187c) grid_indicator_pane

0xce05,	// (0x000322f4) scroll_pane_cp29

0x1506,	// (0x000269f5) indicator_nsta_pane_cp2_ParamLimits

0x1506,	// (0x000269f5) indicator_nsta_pane_cp2

0xc348,	// (0x00031837) main_apps_wheel_pane

0xdb74,	// (0x00033063) form_midp_field_text_pane_ParamLimits

0xdca1,	// (0x00033190) scroll_bar_cp050_ParamLimits

0xf397,	// (0x00034886) cell_indicator_pane_ParamLimits

0xf397,	// (0x00034886) cell_indicator_pane

0xf3b4,	// (0x000348a3) cell_indicator_pane_g1

0xae34,	// (0x00030323) grid_wheel_folder_pane_ParamLimits

0xae34,	// (0x00030323) grid_wheel_folder_pane

0xae42,	// (0x00030331) list_wheel_apps_pane_ParamLimits

0xae42,	// (0x00030331) list_wheel_apps_pane

0xae50,	// (0x0003033f) main_apps_wheel_pane_g1_ParamLimits

0xae50,	// (0x0003033f) main_apps_wheel_pane_g1

0xae5c,	// (0x0003034b) main_apps_wheel_pane_g2_ParamLimits

0xae5c,	// (0x0003034b) main_apps_wheel_pane_g2

0x0001,

0xf8e4,	// (0x00034dd3) main_apps_wheel_pane_g_ParamLimits

0xf8e4,	// (0x00034dd3) main_apps_wheel_pane_g

0xae6a,	// (0x00030359) main_apps_wheel_pane_t1_ParamLimits

0xae6a,	// (0x00030359) main_apps_wheel_pane_t1

0xae7e,	// (0x0003036d) list_wheel_apps_pane_g1

0xae86,	// (0x00030375) list_wheel_apps_pane_g2

0xae8e,	// (0x0003037d) list_wheel_apps_pane_g3

0xae96,	// (0x00030385) list_wheel_apps_pane_g4

0xaea0,	// (0x0003038f) list_wheel_apps_pane_g5

0x0004,

0xf8e9,	// (0x00034dd8) list_wheel_apps_pane_g

0xd258,	// (0x00032747) navi_icon_text_pane

0xa46e,	// (0x0002f95d) aid_fill_nsta

0xaeb7,	// (0x000303a6) navi_icon_text_pane_g1

0xaec3,	// (0x000303b2) navi_icon_text_pane_t1

0xd0f4,	// (0x000325e3) list_set_graphic_pane_t1_ParamLimits

0xd0f4,	// (0x000325e3) list_set_graphic_pane_t1

0xe378,	// (0x00033867) popup_midp_note_alarm_window_t6_ParamLimits

0xe378,	// (0x00033867) popup_midp_note_alarm_window_t6

0xe38a,	// (0x00033879) popup_midp_note_alarm_window_t7_ParamLimits

0xe38a,	// (0x00033879) popup_midp_note_alarm_window_t7

0xe39c,	// (0x0003388b) popup_midp_note_alarm_window_t8_ParamLimits

0xe39c,	// (0x0003388b) popup_midp_note_alarm_window_t8

0xe3ae,	// (0x0003389d) popup_midp_note_alarm_window_t9_ParamLimits

0xe3ae,	// (0x0003389d) popup_midp_note_alarm_window_t9

0xe3c0,	// (0x000338af) popup_midp_note_alarm_window_t10_ParamLimits

0xe3c0,	// (0x000338af) popup_midp_note_alarm_window_t10

0xe3d2,	// (0x000338c1) popup_midp_note_alarm_window_t11_ParamLimits

0xe3d2,	// (0x000338c1) popup_midp_note_alarm_window_t11

0xe3e4,	// (0x000338d3) scroll_pane_cp17_ParamLimits

0xe3e4,	// (0x000338d3) scroll_pane_cp17

0x238e,	// (0x0002787d) volume_small_pane_cp_g1

0x2c28,	// (0x00028117) volume_small_pane_cp_g2

0x2c31,	// (0x00028120) volume_small_pane_cp_g3

0x2c3a,	// (0x00028129) volume_small_pane_cp_g4

0x2c43,	// (0x00028132) volume_small_pane_cp_g5

0x2c4c,	// (0x0002813b) volume_small_pane_cp_g6

0x2c55,	// (0x00028144) volume_small_pane_cp_g7

0x2c5e,	// (0x0002814d) volume_small_pane_cp_g8

0x2c67,	// (0x00028156) volume_small_pane_cp_g9

0x2c70,	// (0x0002815f) volume_small_pane_cp_g10

0xd404,	// (0x000328f3) midp_ticker_pane_g1_ParamLimits

0xd410,	// (0x000328ff) midp_ticker_pane_g2_ParamLimits

0x0182,	// (0x00025671) midp_ticker_pane_g_ParamLimits

0x9d8d,	// (0x0002f27c) midp_ticker_pane_t1_ParamLimits

0xa48e,	// (0x0002f97d) aid_fill_nsta_2

0xdc8d,	// (0x0003317c) list_form2_midp_pane

0xea77,	// (0x00033f66) midp_editing_number_pane_ParamLimits

0xea86,	// (0x00033f75) midp_ticker_pane_ParamLimits

0xf3be,	// (0x000348ad) form2_midp_field_pane

0xf3c6,	// (0x000348b5) scroll_pane_cp51

0xf3e6,	// (0x000348d5) form2_midp_button_pane_ParamLimits

0xf3e6,	// (0x000348d5) form2_midp_button_pane

0xf3f8,	// (0x000348e7) form2_midp_content_pane_ParamLimits

0xf3f8,	// (0x000348e7) form2_midp_content_pane

0xf412,	// (0x00034901) form2_midp_field_choice_group_pane

0xf41a,	// (0x00034909) form2_midp_field_pane_g1

0xf422,	// (0x00034911) form2_midp_field_pane_g2

0xf42a,	// (0x00034919) form2_midp_field_pane_g3

0xf432,	// (0x00034921) form2_midp_field_pane_g4

0x0003,

0x04ef,	// (0x000259de) form2_midp_field_pane_g

0xf43a,	// (0x00034929) form2_midp_gauge_slider_pane

0xf442,	// (0x00034931) form2_midp_gauge_wait_pane

0xf44a,	// (0x00034939) form2_midp_image_pane_ParamLimits

0xf44a,	// (0x00034939) form2_midp_image_pane

0xf465,	// (0x00034954) form2_midp_label_pane_ParamLimits

0xf465,	// (0x00034954) form2_midp_label_pane

0xaef1,	// (0x000303e0) form2_midp_label_pane_cp_ParamLimits

0xaef1,	// (0x000303e0) form2_midp_label_pane_cp

0xf47e,	// (0x0003496d) form2_midp_string_pane_ParamLimits

0xf47e,	// (0x0003496d) form2_midp_string_pane

0x7294,	// (0x0002c783) form2_midp_text_pane_ParamLimits

0x7294,	// (0x0002c783) form2_midp_text_pane

0xf490,	// (0x0003497f) form2_midp_time_pane

0xf4a0,	// (0x0003498f) input_focus_pane_cp51_ParamLimits

0xf4a0,	// (0x0003498f) input_focus_pane_cp51

0xf4b8,	// (0x000349a7) form2_midp_label_pane_t1_ParamLimits

0xf4b8,	// (0x000349a7) form2_midp_label_pane_t1

0x72ad,	// (0x0002c79c) form2_mdip_text_pane_t1_ParamLimits

0x72ad,	// (0x0002c79c) form2_mdip_text_pane_t1

0x72ca,	// (0x0002c7b9) form2_midp_time_pane_t1

0xf500,	// (0x000349ef) form2_midp_gauge_slider_pane_t1

0xaf12,	// (0x00030401) form2_midp_gauge_slider_pane_t2

0xaf24,	// (0x00030413) form2_midp_gauge_slider_pane_t3

0x0002,

0xf90e,	// (0x00034dfd) form2_midp_gauge_slider_pane_t

0xf512,	// (0x00034a01) form2_midp_slider_pane

0xf51e,	// (0x00034a0d) form2_midp_gauge_wait_pane_t1

0xf52c,	// (0x00034a1b) form2_midp_wait_pane_ParamLimits

0xf52c,	// (0x00034a1b) form2_midp_wait_pane

0xaf36,	// (0x00030425) list_single_2graphic_pane_cp4_ParamLimits

0xaf36,	// (0x00030425) list_single_2graphic_pane_cp4

0xa8a1,	// (0x0002fd90) list_single_midp_graphic_pane_cp_ParamLimits

0xa8a1,	// (0x0002fd90) list_single_midp_graphic_pane_cp

0xc2ec,	// (0x000317db) list_highlight_pane_cp20

0xf557,	// (0x00034a46) list_single_2graphic_pane_g1_cp4

0xedb4,	// (0x000342a3) list_single_2graphic_pane_g2_cp4

0xf55f,	// (0x00034a4e) list_single_2graphic_pane_t1_cp4

0xc348,	// (0x00031837) list_highlight_pane_cp21

0xf56e,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp

0xf57d,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp

0xaf4d,	// (0x0003043c) form2_mdip_string_pane_t1_ParamLimits

0xaf4d,	// (0x0003043c) form2_mdip_string_pane_t1

0xc2ec,	// (0x000317db) bg_wml_button_pane_cp2

0xc2e2,	// (0x000317d1) form2_midp_image_pane_g1

0x69b9,	// (0x0002bea8) list_double_large_graphic_pane_g5_ParamLimits

0x69b9,	// (0x0002bea8) list_double_large_graphic_pane_g5

0x9ce1,	// (0x0002f1d0) midp_form_pane_ParamLimits

0xc348,	// (0x00031837) main_apps_wheel_pane_ParamLimits

0xa1ca,	// (0x0002f6b9) popup_preview_window_ParamLimits

0xa1ca,	// (0x0002f6b9) popup_preview_window

0xd701,	// (0x00032bf0) popup_touch_info_window_ParamLimits

0xd701,	// (0x00032bf0) popup_touch_info_window

0xd71f,	// (0x00032c0e) popup_touch_menu_window_ParamLimits

0xd71f,	// (0x00032c0e) popup_touch_menu_window

0xc2d8,	// (0x000317c7) bg_popup_sub_pane_cp6

0x2e43,	// (0x00028332) list_touch_menu_pane

0x2e4b,	// (0x0002833a) list_single_touch_menu_pane_ParamLimits

0x2e4b,	// (0x0002833a) list_single_touch_menu_pane

0x2e60,	// (0x0002834f) list_single_touch_menu_pane_t1

0xc348,	// (0x00031837) bg_popup_sub_pane_cp7_ParamLimits

0xc348,	// (0x00031837) bg_popup_sub_pane_cp7

0x2e6e,	// (0x0002835d) heading_sub_pane

0x2e76,	// (0x00028365) list_touch_info_pane_ParamLimits

0x2e76,	// (0x00028365) list_touch_info_pane

0x2e85,	// (0x00028374) list_single_touch_info_pane_ParamLimits

0x2e85,	// (0x00028374) list_single_touch_info_pane

0x2e97,	// (0x00028386) list_single_touch_info_pane_t1

0x2ea5,	// (0x00028394) list_single_touch_info_pane_t2

0x0001,

0xf915,	// (0x00034e04) list_single_touch_info_pane_t

0xd3da,	// (0x000328c9) bg_popup_heading_pane_cp

0x2eb3,	// (0x000283a2) heading_sub_pane_t1

0xda12,	// (0x00032f01) bg_popup_preview_window_pane_cp_ParamLimits

0xda12,	// (0x00032f01) bg_popup_preview_window_pane_cp

0x2e6e,	// (0x0002835d) heading_preview_pane

0x2e76,	// (0x00028365) list_preview_pane_ParamLimits

0x2e76,	// (0x00028365) list_preview_pane

0x2ec1,	// (0x000283b0) popup_preview_window_g1

0x2e85,	// (0x00028374) list_single_preview_pane_ParamLimits

0x2e85,	// (0x00028374) list_single_preview_pane

0x2ec9,	// (0x000283b8) list_single_preview_pane_g1

0x2ed1,	// (0x000283c0) list_single_preview_pane_t1

0x2e97,	// (0x00028386) list_single_preview_pane_t2

0x0001,

0xf91a,	// (0x00034e09) list_single_preview_pane_t

0x2edf,	// (0x000283ce) bg_popup_heading_pane_cp2_ParamLimits

0x2edf,	// (0x000283ce) bg_popup_heading_pane_cp2

0x2ef5,	// (0x000283e4) heading_preview_pane_g1

0x2efd,	// (0x000283ec) heading_preview_pane_t1_ParamLimits

0x2efd,	// (0x000283ec) heading_preview_pane_t1

0xc3a4,	// (0x00031893) soft_indicator_pane_t1_ParamLimits

0xc90b,	// (0x00031dfa) scroll_pane_ParamLimits

0xcd01,	// (0x000321f0) scroll_sc2_left_pane

0xcd0a,	// (0x000321f9) scroll_sc2_right_pane

0xcd29,	// (0x00032218) scroll_bg_pane_g1_ParamLimits

0xcd3e,	// (0x0003222d) scroll_bg_pane_g2_ParamLimits

0xcd56,	// (0x00032245) scroll_bg_pane_g3_ParamLimits

0x0111,	// (0x00025600) scroll_bg_pane_g_ParamLimits

0xcd29,	// (0x00032218) scroll_handle_pane_g1_ParamLimits

0xcd78,	// (0x00032267) scroll_handle_pane_g2_ParamLimits

0xcd56,	// (0x00032245) scroll_handle_pane_g3_ParamLimits

0x0118,	// (0x00025607) scroll_handle_pane_g_ParamLimits

0xd64a,	// (0x00032b39) popup_choice_list_window_ParamLimits

0xd64a,	// (0x00032b39) popup_choice_list_window

0xd86c,	// (0x00032d5b) choice_list_pane

0xd8ee,	// (0x00032ddd) cell_toolbar_pane_t1

0xd916,	// (0x00032e05) toolbar_button_pane_ParamLimits

0xe7c2,	// (0x00033cb1) ai_gene_pane_1_t2_ParamLimits

0xe7c2,	// (0x00033cb1) ai_gene_pane_1_t2

0x0001,

0x0329,	// (0x00025818) ai_gene_pane_1_t_ParamLimits

0x0329,	// (0x00025818) ai_gene_pane_1_t

0x2f1a,	// (0x00028409) scroll_sc2_left_pane_g1

0x2f1a,	// (0x00028409) scroll_sc2_right_pane_g1

0xcaef,	// (0x00031fde) bg_popup_sub_pane_cp10

0x2f24,	// (0x00028413) list_choice_list_pane

0x2f3b,	// (0x0002842a) list_single_choice_list_pane_ParamLimits

0x2f3b,	// (0x0002842a) list_single_choice_list_pane

0x2f4f,	// (0x0002843e) list_single_choice_list_pane_g1

0x2f57,	// (0x00028446) list_single_choice_list_pane_t1_ParamLimits

0x2f57,	// (0x00028446) list_single_choice_list_pane_t1

0x2f6c,	// (0x0002845b) choice_list_pane_g1

0x2f74,	// (0x00028463) choice_list_pane_t1

0xc2d8,	// (0x000317c7) input_focus_pane_cp11

0xcc64,	// (0x00032153) title_pane_stacon_g2_ParamLimits

0xcc64,	// (0x00032153) title_pane_stacon_g2

0x0002,

0xf6ef,	// (0x00034bde) title_pane_stacon_g_ParamLimits

0xf6ef,	// (0x00034bde) title_pane_stacon_g

0xd3da,	// (0x000328c9) cursor_press_pane

0x9e89,	// (0x0002f378) popup_fep_hwr_window_ParamLimits

0x9e89,	// (0x0002f378) popup_fep_hwr_window

0xd69e,	// (0x00032b8d) popup_fep_vkb_window_ParamLimits

0xd69e,	// (0x00032b8d) popup_fep_vkb_window

0x2f82,	// (0x00028471) cursor_press_pane_g1

0x0002,

0xf943,	// (0x00034e32) fep_vkb_side_pane_g_ParamLimits

0x2fc3,	// (0x000284b2) fep_hwr_candidate_pane_ParamLimits

0x2fc3,	// (0x000284b2) fep_hwr_candidate_pane

0x2fed,	// (0x000284dc) fep_hwr_side_pane_ParamLimits

0x2fed,	// (0x000284dc) fep_hwr_side_pane

0x300d,	// (0x000284fc) fep_hwr_top_pane_ParamLimits

0x300d,	// (0x000284fc) fep_hwr_top_pane

0x3025,	// (0x00028514) fep_hwr_write_pane_ParamLimits

0x3025,	// (0x00028514) fep_hwr_write_pane

0xf943,	// (0x00034e32) fep_vkb_side_pane_g

0x305f,	// (0x0002854e) fep_hwr_top_pane_g1

0x3071,	// (0x00028560) fep_hwr_top_pane_g2

0x3083,	// (0x00028572) fep_hwr_top_pane_g3

0x0002,

0xf91f,	// (0x00034e0e) fep_hwr_top_pane_g

0x3098,	// (0x00028587) fep_hwr_top_text_pane

0xcecb,	// (0x000323ba) fep_hwr_top_text_pane_g1

0x3170,	// (0x0002865f) fep_hwr_top_text_pane_t1

0x31c0,	// (0x000286af) fep_hwr_candidate_pane_g1

0x3433,	// (0x00028922) fep_vkb_keypad_pane_g3_ParamLimits

0x3433,	// (0x00028922) fep_vkb_keypad_pane_g3

0x345b,	// (0x0002894a) fep_vkb_keypad_pane_g4_ParamLimits

0x345b,	// (0x0002894a) fep_vkb_keypad_pane_g4

0x34ca,	// (0x000289b9) fep_vkb_bottom_pane_g2_ParamLimits

0x34ca,	// (0x000289b9) fep_vkb_bottom_pane_g2

0x0001,

0xf94a,	// (0x00034e39) fep_vkb_bottom_pane_g_ParamLimits

0xf94a,	// (0x00034e39) fep_vkb_bottom_pane_g

0x2f1a,	// (0x00028409) cell_vkb_side_pane_g2

0x0001,

0xf954,	// (0x00034e43) cell_vkb_side_pane_g

0x3555,	// (0x00028a44) cell_vkb_side_pane_t1

0x3563,	// (0x00028a52) cell_vkb_side_pane_t1_copy1

0x2f1a,	// (0x00028409) bg_fep_vkb_candidate_pane_g2

0x3695,	// (0x00028b84) cell_vkb_candidate_pane_ParamLimits

0x31e7,	// (0x000286d6) aid_size_cell_vkb_ParamLimits

0x31e7,	// (0x000286d6) aid_size_cell_vkb

0x3695,	// (0x00028b84) cell_vkb_candidate_pane

0x36cb,	// (0x00028bba) bg_popup_fep_shadow_pane_g1

0x3275,	// (0x00028764) fep_vkb_bottom_pane_ParamLimits

0x3275,	// (0x00028764) fep_vkb_bottom_pane

0x32b2,	// (0x000287a1) fep_vkb_candidate_pane_ParamLimits

0x32b2,	// (0x000287a1) fep_vkb_candidate_pane

0x32ce,	// (0x000287bd) fep_vkb_keypad_pane_ParamLimits

0x32ce,	// (0x000287bd) fep_vkb_keypad_pane

0x3314,	// (0x00028803) fep_vkb_side_pane_ParamLimits

0x3314,	// (0x00028803) fep_vkb_side_pane

0x3350,	// (0x0002883f) fep_vkb_top_pane_ParamLimits

0x3350,	// (0x0002883f) fep_vkb_top_pane

0x338c,	// (0x0002887b) fep_vkb_top_pane_g1_ParamLimits

0x338c,	// (0x0002887b) fep_vkb_top_pane_g1

0x339b,	// (0x0002888a) fep_vkb_top_pane_g2_ParamLimits

0x339b,	// (0x0002888a) fep_vkb_top_pane_g2

0x33aa,	// (0x00028899) fep_vkb_top_pane_g3_ParamLimits

0x33aa,	// (0x00028899) fep_vkb_top_pane_g3

0x0003,

0xf93a,	// (0x00034e29) fep_vkb_top_pane_g_ParamLimits

0xf93a,	// (0x00034e29) fep_vkb_top_pane_g

0x33c8,	// (0x000288b7) fep_vkb_top_text_pane_ParamLimits

0x33c8,	// (0x000288b7) fep_vkb_top_text_pane

0xafe5,	// (0x000304d4) fep_vkb_side_pane_g1_ParamLimits

0xafe5,	// (0x000304d4) fep_vkb_side_pane_g1

0x3422,	// (0x00028911) grid_vkb_side_pane_ParamLimits

0x3422,	// (0x00028911) grid_vkb_side_pane

0x36d3,	// (0x00028bc2) bg_popup_fep_shadow_pane_g2

0x36dc,	// (0x00028bcb) bg_popup_fep_shadow_pane_g3

0x36e4,	// (0x00028bd3) bg_popup_fep_shadow_pane_g4

0x36ed,	// (0x00028bdc) bg_popup_fep_shadow_pane_g5

0x36f7,	// (0x00028be6) bg_popup_fep_shadow_pane_g6

0x36ff,	// (0x00028bee) bg_popup_fep_shadow_pane_g7

0xca17,	// (0x00031f06) bg_popup_fep_shadow_pane_g8

0x3479,	// (0x00028968) grid_vkb_keypad_number_pane_ParamLimits

0x3479,	// (0x00028968) grid_vkb_keypad_number_pane

0x3489,	// (0x00028978) grid_vkb_keypad_pane_ParamLimits

0x3489,	// (0x00028978) grid_vkb_keypad_pane

0x34af,	// (0x0002899e) fep_vkb_bottom_pane_g1_ParamLimits

0x34af,	// (0x0002899e) fep_vkb_bottom_pane_g1

0x34d8,	// (0x000289c7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x34d8,	// (0x000289c7) grid_vkb_keypad_bottom_left_pane

0x34ed,	// (0x000289dc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x34ed,	// (0x000289dc) grid_vkb_keypad_bottom_right_pane

0x3502,	// (0x000289f1) fep_vkb_top_text_pane_g1

0xb02c,	// (0x0003051b) fep_vkb_top_text_pane_t1

0xb03e,	// (0x0003052d) cell_vkb_side_pane_ParamLimits

0xb03e,	// (0x0003052d) cell_vkb_side_pane

0x2f1a,	// (0x00028409) cell_vkb_side_pane_g1

0x3571,	// (0x00028a60) cell_vkb_keypad_pane_ParamLimits

0x3571,	// (0x00028a60) cell_vkb_keypad_pane

0x35ec,	// (0x00028adb) cell_vkb_keypad_pane_g1

0x0008,

0xf967,	// (0x00034e56) bg_popup_fep_shadow_pane_g

0x3711,	// (0x00028c00) cell_hwr_side_pane_g1

0x3711,	// (0x00028c00) cell_hwr_side_pane_g2

0x35f6,	// (0x00028ae5) cell_vkb_keypad_pane_t1

0xb054,	// (0x00030543) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb054,	// (0x00030543) cell_vkb_keypad_bottom_left_pane

0xb069,	// (0x00030558) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb069,	// (0x00030558) cell_vkb_keypad_bottom_right_pane

0x2f1a,	// (0x00028409) cell_vkb_keypad_bottom_left_pane_g1

0x2f1a,	// (0x00028409) cell_vkb_keypad_bottom_right_pane_g1

0x365a,	// (0x00028b49) cell_vkb_keypad_number_pane_ParamLimits

0x365a,	// (0x00028b49) cell_vkb_keypad_number_pane

0x3679,	// (0x00028b68) cell_vkb_keypad_number_pane_g1

0x3683,	// (0x00028b72) cell_vkb_keypad_number_pane_g2

0x368c,	// (0x00028b7b) cell_vkb_keypad_number_pane_g3

0x0002,

0xf959,	// (0x00034e48) cell_vkb_keypad_number_pane_g

0x35f6,	// (0x00028ae5) cell_vkb_keypad_number_pane_t1

0x36b2,	// (0x00028ba1) fep_vkb_candidate_pane_g1

0x0001,

0xf97a,	// (0x00034e69) cell_hwr_side_pane_g

0x371b,	// (0x00028c0a) cell_hwr_side_pane_t1

0x3729,	// (0x00028c18) cell_hwr_side_pane_t1_copy1

0x3737,	// (0x00028c26) cell_hwr_candidate_pane_g1

0x3766,	// (0x00028c55) cell_hwr_candidate_pane_t1

0x2f1a,	// (0x00028409) cell_vkb_candidate_pane_g2

0x37ba,	// (0x00028ca9) cell_vkb_candidate_pane_t1

0x2f8a,	// (0x00028479) bg_popup_fep_shadow_pane_ParamLimits

0x2f8a,	// (0x00028479) bg_popup_fep_shadow_pane

0x303f,	// (0x0002852e) bg_fep_hwr_top_pane_g4

0x30ad,	// (0x0002859c) bg_hwr_side_pane_g1_ParamLimits

0x30ad,	// (0x0002859c) bg_hwr_side_pane_g1

0x8cbf,	// (0x0002e1ae) cell_hwr_side_pane_ParamLimits

0x8cbf,	// (0x0002e1ae) cell_hwr_side_pane

0x311b,	// (0x0002860a) fep_hwr_write_pane_g1_ParamLimits

0x311b,	// (0x0002860a) fep_hwr_write_pane_g1

0x3128,	// (0x00028617) fep_hwr_write_pane_g2_ParamLimits

0x3128,	// (0x00028617) fep_hwr_write_pane_g2

0x3135,	// (0x00028624) fep_hwr_write_pane_g3_ParamLimits

0x3135,	// (0x00028624) fep_hwr_write_pane_g3

0x8cdf,	// (0x0002e1ce) fep_hwr_write_pane_g4_ParamLimits

0x8cdf,	// (0x0002e1ce) fep_hwr_write_pane_g4

0x0005,

0xf926,	// (0x00034e15) fep_hwr_write_pane_g_ParamLimits

0xf926,	// (0x00034e15) fep_hwr_write_pane_g

0x303f,	// (0x0002852e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x303f,	// (0x0002852e) bg_fep_hwr_candidate_pane_g2

0x317e,	// (0x0002866d) cell_hwr_candidate_pane_ParamLimits

0x317e,	// (0x0002866d) cell_hwr_candidate_pane

0x31c0,	// (0x000286af) fep_hwr_candidate_pane_g1_ParamLimits

0x3215,	// (0x00028704) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3215,	// (0x00028704) bg_popup_fep_shadow_pane_cp2

0x33ba,	// (0x000288a9) fep_vkb_top_pane_g4_ParamLimits

0x33ba,	// (0x000288a9) fep_vkb_top_pane_g4

0x3400,	// (0x000288ef) fep_vkb_side_pane_g2_ParamLimits

0x3400,	// (0x000288ef) fep_vkb_side_pane_g2

0x9574,	// (0x0002ea63) list_setting_pane_t4_ParamLimits

0x9574,	// (0x0002ea63) list_setting_pane_t4

0x960e,	// (0x0002eafd) list_setting_number_pane_t5_ParamLimits

0x960e,	// (0x0002eafd) list_setting_number_pane_t5

0x9c26,	// (0x0002f115) list_double_heading_pane_cp2_ParamLimits

0x9c26,	// (0x0002f115) list_double_heading_pane_cp2

0xc9b2,	// (0x00031ea1) list_double_heading_pane_g1_cp2_ParamLimits

0xc9b2,	// (0x00031ea1) list_double_heading_pane_g1_cp2

0xc9be,	// (0x00031ead) list_double_heading_pane_g2_cp2_ParamLimits

0xc9be,	// (0x00031ead) list_double_heading_pane_g2_cp2

0x37c8,	// (0x00028cb7) list_double_heading_pane_t1_cp2_ParamLimits

0x37c8,	// (0x00028cb7) list_double_heading_pane_t1_cp2

0x37de,	// (0x00028ccd) list_double_heading_pane_t2_cp2_ParamLimits

0x37de,	// (0x00028ccd) list_double_heading_pane_t2_cp2

0xc2d0,	// (0x000317bf) aid_value_unit2

0x0c40,	// (0x0002612f) popup_preview_fixed_window

0xc484,	// (0x00031973) bg_popup_preview_window_pane_cp02

0x37f0,	// (0x00028cdf) list_preview_fixed_pane

0x3836,	// (0x00028d25) list_empty_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_empty_pane_fp

0x3836,	// (0x00028d25) list_single_cale_day_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_cale_day_pane_fp

0x3836,	// (0x00028d25) list_single_graphic_heading_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_graphic_heading_pane_fp

0x3836,	// (0x00028d25) list_single_graphic_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_graphic_pane_fp

0x3836,	// (0x00028d25) list_single_heading_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_heading_pane_fp

0x3836,	// (0x00028d25) list_single_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_pane_fp

0x384d,	// (0x00028d3c) list_single_pane_fp_g1_ParamLimits

0x384d,	// (0x00028d3c) list_single_pane_fp_g1

0x6951,	// (0x0002be40) list_single_pane_fp_g2_ParamLimits

0x6951,	// (0x0002be40) list_single_pane_fp_g2

0x72dd,	// (0x0002c7cc) list_single_pane_fp_g3_ParamLimits

0x72dd,	// (0x0002c7cc) list_single_pane_fp_g3

0x3859,	// (0x00028d48) list_single_pane_fp_g4_ParamLimits

0x3859,	// (0x00028d48) list_single_pane_fp_g4

0x0003,

0xf98d,	// (0x00034e7c) list_single_pane_fp_g_ParamLimits

0xf98d,	// (0x00034e7c) list_single_pane_fp_g

0x72f1,	// (0x0002c7e0) list_single_pane_fp_t1_ParamLimits

0x72f1,	// (0x0002c7e0) list_single_pane_fp_t1

0x7308,	// (0x0002c7f7) list_single_graphic_pane_fp_g1_ParamLimits

0x7308,	// (0x0002c7f7) list_single_graphic_pane_fp_g1

0x384d,	// (0x00028d3c) list_single_graphic_pane_fp_g2_ParamLimits

0x384d,	// (0x00028d3c) list_single_graphic_pane_fp_g2

0x6951,	// (0x0002be40) list_single_graphic_pane_fp_g3_ParamLimits

0x6951,	// (0x0002be40) list_single_graphic_pane_fp_g3

0x72dd,	// (0x0002c7cc) list_single_graphic_pane_fp_g4_ParamLimits

0x72dd,	// (0x0002c7cc) list_single_graphic_pane_fp_g4

0x3859,	// (0x00028d48) list_single_graphic_pane_fp_g5_ParamLimits

0x3859,	// (0x00028d48) list_single_graphic_pane_fp_g5

0x0004,

0xf996,	// (0x00034e85) list_single_graphic_pane_fp_g_ParamLimits

0xf996,	// (0x00034e85) list_single_graphic_pane_fp_g

0x7314,	// (0x0002c803) list_single_graphic_pane_fp_t1_ParamLimits

0x7314,	// (0x0002c803) list_single_graphic_pane_fp_t1

0x7308,	// (0x0002c7f7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7308,	// (0x0002c7f7) list_single_graphic_heading_pane_fp_g1

0x384d,	// (0x00028d3c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x384d,	// (0x00028d3c) list_single_graphic_heading_pane_fp_g2

0x6951,	// (0x0002be40) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6951,	// (0x0002be40) list_single_graphic_heading_pane_fp_g3

0x72dd,	// (0x0002c7cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x72dd,	// (0x0002c7cc) list_single_graphic_heading_pane_fp_g4

0x3859,	// (0x00028d48) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x3859,	// (0x00028d48) list_single_graphic_heading_pane_fp_g5

0x0004,

0xf996,	// (0x00034e85) list_single_graphic_heading_pane_fp_g_ParamLimits

0xf996,	// (0x00034e85) list_single_graphic_heading_pane_fp_g

0x732a,	// (0x0002c819) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x732a,	// (0x0002c819) list_single_graphic_heading_pane_fp_t1

0x7340,	// (0x0002c82f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7340,	// (0x0002c82f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xf9a1,	// (0x00034e90) list_single_graphic_heading_pane_fp_t_ParamLimits

0xf9a1,	// (0x00034e90) list_single_graphic_heading_pane_fp_t

0x7352,	// (0x0002c841) list_single_cale_day_pane_fp_g1_ParamLimits

0x7352,	// (0x0002c841) list_single_cale_day_pane_fp_g1

0x3865,	// (0x00028d54) list_single_cale_day_pane_fp_g2_ParamLimits

0x3865,	// (0x00028d54) list_single_cale_day_pane_fp_g2

0x738a,	// (0x0002c879) list_single_cale_day_pane_fp_g3_ParamLimits

0x738a,	// (0x0002c879) list_single_cale_day_pane_fp_g3

0x73b2,	// (0x0002c8a1) list_single_cale_day_pane_fp_g4_ParamLimits

0x73b2,	// (0x0002c8a1) list_single_cale_day_pane_fp_g4

0x73d6,	// (0x0002c8c5) list_single_cale_day_pane_fp_g5_ParamLimits

0x73d6,	// (0x0002c8c5) list_single_cale_day_pane_fp_g5

0x0004,

0xf9a6,	// (0x00034e95) list_single_cale_day_pane_fp_g_ParamLimits

0xf9a6,	// (0x00034e95) list_single_cale_day_pane_fp_g

0x73fa,	// (0x0002c8e9) list_single_cale_day_pane_fp_t1_ParamLimits

0x73fa,	// (0x0002c8e9) list_single_cale_day_pane_fp_t1

0x7420,	// (0x0002c90f) list_single_cale_day_pane_fp_t2_ParamLimits

0x7420,	// (0x0002c90f) list_single_cale_day_pane_fp_t2

0x7439,	// (0x0002c928) list_single_cale_day_pane_fp_t3_ParamLimits

0x7439,	// (0x0002c928) list_single_cale_day_pane_fp_t3

0x0002,

0xf9b1,	// (0x00034ea0) list_single_cale_day_pane_fp_t_ParamLimits

0xf9b1,	// (0x00034ea0) list_single_cale_day_pane_fp_t

0x384d,	// (0x00028d3c) list_empty_pane_fp_g1_ParamLimits

0x384d,	// (0x00028d3c) list_empty_pane_fp_g1

0x7452,	// (0x0002c941) list_empty_pane_fp_t1

0x7460,	// (0x0002c94f) list_empty_pane_fp_t2

0x0001,

0xf9b8,	// (0x00034ea7) list_empty_pane_fp_t

0x384d,	// (0x00028d3c) list_single_heading_pane_fp_g1_ParamLimits

0x384d,	// (0x00028d3c) list_single_heading_pane_fp_g1

0x6951,	// (0x0002be40) list_single_heading_pane_fp_g2_ParamLimits

0x6951,	// (0x0002be40) list_single_heading_pane_fp_g2

0x72dd,	// (0x0002c7cc) list_single_heading_pane_fp_g3_ParamLimits

0x72dd,	// (0x0002c7cc) list_single_heading_pane_fp_g3

0x0002,

0xf9bd,	// (0x00034eac) list_single_heading_pane_fp_g_ParamLimits

0xf9bd,	// (0x00034eac) list_single_heading_pane_fp_g

0x746e,	// (0x0002c95d) list_single_heading_pane_fp_t1_ParamLimits

0x746e,	// (0x0002c95d) list_single_heading_pane_fp_t1

0x7480,	// (0x0002c96f) list_single_heading_pane_fp_t2_ParamLimits

0x7480,	// (0x0002c96f) list_single_heading_pane_fp_t2

0x0001,

0xf9c4,	// (0x00034eb3) list_single_heading_pane_fp_t_ParamLimits

0xf9c4,	// (0x00034eb3) list_single_heading_pane_fp_t

0xcafb,	// (0x00031fea) aid_size_cell_fast

0xc467,	// (0x00031956) soft_indicator_pane_cp1_t1

0xcb38,	// (0x00032027) cell_app_pane_cp2_ParamLimits

0xcb38,	// (0x00032027) cell_app_pane_cp2

0x2fac,	// (0x0002849b) fep_hwr_candidate_drop_down_list_pane

0x31da,	// (0x000286c9) fep_hwr_candidate_pane_g3_ParamLimits

0x31da,	// (0x000286c9) fep_hwr_candidate_pane_g3

0xbd5c,	// (0x0003124b) fep_hwr_candidate_pane_g4_ParamLimits

0xbd5c,	// (0x0003124b) fep_hwr_candidate_pane_g4

0x0002,

0xf933,	// (0x00034e22) fep_hwr_candidate_pane_g_ParamLimits

0xf933,	// (0x00034e22) fep_hwr_candidate_pane_g

0x32a1,	// (0x00028790) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x32a1,	// (0x00028790) fep_vkb_candidate_drop_down_list_pane

0x36ba,	// (0x00028ba9) fep_vkb_candidate_pane_g3

0x36c2,	// (0x00028bb1) fep_vkb_candidate_pane_g4

0x0002,

0xf960,	// (0x00034e4f) fep_vkb_candidate_pane_g

0x3737,	// (0x00028c26) cell_hwr_candidate_pane_g1_ParamLimits

0x3745,	// (0x00028c34) cell_hwr_candidate_pane_g3_ParamLimits

0x3745,	// (0x00028c34) cell_hwr_candidate_pane_g3

0x42aa,	// (0x00029799) cell_hwr_candidate_pane_g4_ParamLimits

0x42aa,	// (0x00029799) cell_hwr_candidate_pane_g4

0x0002,

0xf97f,	// (0x00034e6e) cell_hwr_candidate_pane_g_ParamLimits

0xf97f,	// (0x00034e6e) cell_hwr_candidate_pane_g

0x3784,	// (0x00028c73) cell_vkb_candidate_pane_g3_ParamLimits

0x3784,	// (0x00028c73) cell_vkb_candidate_pane_g3

0x379f,	// (0x00028c8e) cell_vkb_candidate_pane_g4_ParamLimits

0x379f,	// (0x00028c8e) cell_vkb_candidate_pane_g4

0x3871,	// (0x00028d60) cell_app_pane_cp2_g1_ParamLimits

0x3871,	// (0x00028d60) cell_app_pane_cp2_g1

0x42cb,	// (0x000297ba) cell_app_pane_cp2_g2_ParamLimits

0x42cb,	// (0x000297ba) cell_app_pane_cp2_g2

0x0001,

0xf9c9,	// (0x00034eb8) cell_app_pane_cp2_g_ParamLimits

0xf9c9,	// (0x00034eb8) cell_app_pane_cp2_g

0x42d7,	// (0x000297c6) cell_app_pane_cp2_t1_ParamLimits

0x42d7,	// (0x000297c6) cell_app_pane_cp2_t1

0xc998,	// (0x00031e87) grid_highlight_pane_cp1_ParamLimits

0xc998,	// (0x00031e87) grid_highlight_pane_cp1

0x388f,	// (0x00028d7e) cell_hwr_candidate_pane_cp1_ParamLimits

0x388f,	// (0x00028d7e) cell_hwr_candidate_pane_cp1

0x3737,	// (0x00028c26) fep_hwr_candidate_drop_down_list_pane_g1

0x38ae,	// (0x00028d9d) fep_hwr_candidate_drop_down_list_pane_g2

0x38bb,	// (0x00028daa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xf9ce,	// (0x00034ebd) fep_hwr_candidate_drop_down_list_pane_g

0x38c8,	// (0x00028db7) fep_hwr_candidate_drop_down_list_scroll_pane

0x38d1,	// (0x00028dc0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x38d1,	// (0x00028dc0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x38de,	// (0x00028dcd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x38de,	// (0x00028dcd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x38eb,	// (0x00028dda) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x38eb,	// (0x00028dda) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x38f8,	// (0x00028de7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x38f8,	// (0x00028de7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x3913,	// (0x00028e02) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3913,	// (0x00028e02) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x392e,	// (0x00028e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x392e,	// (0x00028e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3949,	// (0x00028e38) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3949,	// (0x00028e38) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3964,	// (0x00028e53) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3964,	// (0x00028e53) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xf9d5,	// (0x00034ec4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xf9d5,	// (0x00034ec4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x42e9,	// (0x000297d8) cell_vkb_candidate_pane_cp1_ParamLimits

0x42e9,	// (0x000297d8) cell_vkb_candidate_pane_cp1

0x33ba,	// (0x000288a9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x33ba,	// (0x000288a9) fep_vkb_candidate_drop_down_list_pane_g1

0x4309,	// (0x000297f8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4309,	// (0x000297f8) fep_vkb_candidate_drop_down_list_pane_g2

0x4316,	// (0x00029805) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4316,	// (0x00029805) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xf9e6,	// (0x00034ed5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xf9e6,	// (0x00034ed5) fep_vkb_candidate_drop_down_list_pane_g

0x4323,	// (0x00029812) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4323,	// (0x00029812) fep_vkb_candidate_drop_down_list_scroll_pane

0x4330,	// (0x0002981f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4330,	// (0x0002981f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x433d,	// (0x0002982c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x433d,	// (0x0002982c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4349,	// (0x00029838) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4349,	// (0x00029838) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4355,	// (0x00029844) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4355,	// (0x00029844) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4376,	// (0x00029865) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4376,	// (0x00029865) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4397,	// (0x00029886) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4397,	// (0x00029886) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x43b8,	// (0x000298a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x43b8,	// (0x000298a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x43d9,	// (0x000298c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x43d9,	// (0x000298c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xf9ed,	// (0x00034edc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xf9ed,	// (0x00034edc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9160,	// (0x0002e64f) title_pane_g1_ParamLimits

0x9171,	// (0x0002e660) title_pane_g2_ParamLimits

0xf592,	// (0x00034a81) title_pane_g_ParamLimits

0xcebb,	// (0x000323aa) aid_call2_pane

0xcec3,	// (0x000323b2) aid_call_pane

0xcecb,	// (0x000323ba) popup_clock_analogue_window_g1

0xcecb,	// (0x000323ba) popup_clock_analogue_window_g2

0x1356,	// (0x00026845) popup_clock_analogue_window_g3

0x135f,	// (0x0002684e) popup_clock_analogue_window_g4

0xc2e2,	// (0x000317d1) popup_clock_analogue_window_g5

0x0004,

0xf709,	// (0x00034bf8) popup_clock_analogue_window_g

0x1367,	// (0x00026856) popup_clock_analogue_window_t1

0x139e,	// (0x0002688d) clock_digital_number_pane_ParamLimits

0x139e,	// (0x0002688d) clock_digital_number_pane

0x13aa,	// (0x00026899) clock_digital_number_pane_cp02_ParamLimits

0x13aa,	// (0x00026899) clock_digital_number_pane_cp02

0x13b6,	// (0x000268a5) clock_digital_number_pane_cp03_ParamLimits

0x13b6,	// (0x000268a5) clock_digital_number_pane_cp03

0x13c2,	// (0x000268b1) clock_digital_number_pane_cp04_ParamLimits

0x13c2,	// (0x000268b1) clock_digital_number_pane_cp04

0x13ce,	// (0x000268bd) clock_digital_separator_pane_ParamLimits

0x13ce,	// (0x000268bd) clock_digital_separator_pane

0x13da,	// (0x000268c9) popup_clock_digital_window_t1_ParamLimits

0x13da,	// (0x000268c9) popup_clock_digital_window_t1

0xc2e2,	// (0x000317d1) clock_digital_number_pane_g1

0xc2e2,	// (0x000317d1) clock_digital_number_pane_g2

0x0001,

0xf714,	// (0x00034c03) clock_digital_number_pane_g

0xc2e2,	// (0x000317d1) clock_digital_separator_pane_g1

0xc2e2,	// (0x000317d1) clock_digital_separator_pane_g2

0x0001,

0xf714,	// (0x00034c03) clock_digital_separator_pane_g

0xa46e,	// (0x0002f95d) aid_fill_nsta_ParamLimits

0xa59d,	// (0x0002fa8c) indicator_nsta_pane_ParamLimits

0xd815,	// (0x00032d04) popup_clock_analogue_window

0xd815,	// (0x00032d04) popup_clock_digital_window

0xd63c,	// (0x00032b2b) grid_indicator_nsta_pane_ParamLimits

0xf341,	// (0x00034830) clock_nsta_pane_t2

0x0001,

0xf8da,	// (0x00034dc9) clock_nsta_pane_t

0x131a,	// (0x00026809) aid_size_max_handle

0x899f,	// (0x0002de8e) aid_size_min_handle

0xd3da,	// (0x000328c9) editor_scroll_pane

0x43f4,	// (0x000298e3) ex_editor_pane

0xcab7,	// (0x00031fa6) scroll_pane_cp13

0xc937,	// (0x00031e26) scroll_pane_cp14

0xcef5,	// (0x000323e4) scroll_pane_cp36

0x9c37,	// (0x0002f126) list_single_graphic_hl_pane_cp2_ParamLimits

0x9c37,	// (0x0002f126) list_single_graphic_hl_pane_cp2

0xaca1,	// (0x00030190) list_single_graphic_hl_pane_ParamLimits

0xaca1,	// (0x00030190) list_single_graphic_hl_pane

0x7496,	// (0x0002c985) aid_size_min_hl_cp1

0x43fc,	// (0x000298eb) list_highlight_pane_cp34_ParamLimits

0x43fc,	// (0x000298eb) list_highlight_pane_cp34

0x440d,	// (0x000298fc) list_single_graphic_hl_pane_g1_ParamLimits

0x440d,	// (0x000298fc) list_single_graphic_hl_pane_g1

0x9841,	// (0x0002ed30) list_single_graphic_hl_pane_g2_ParamLimits

0x9841,	// (0x0002ed30) list_single_graphic_hl_pane_g2

0x9841,	// (0x0002ed30) list_single_graphic_hl_pane_g3_ParamLimits

0x9841,	// (0x0002ed30) list_single_graphic_hl_pane_g3

0x74ab,	// (0x0002c99a) list_single_graphic_hl_pane_g4_ParamLimits

0x74ab,	// (0x0002c99a) list_single_graphic_hl_pane_g4

0x74b7,	// (0x0002c9a6) list_single_graphic_hl_pane_g5_ParamLimits

0x74b7,	// (0x0002c9a6) list_single_graphic_hl_pane_g5

0x0004,

0xf9fe,	// (0x00034eed) list_single_graphic_hl_pane_g_ParamLimits

0xf9fe,	// (0x00034eed) list_single_graphic_hl_pane_g

0x74cb,	// (0x0002c9ba) list_single_graphic_hl_pane_t1_ParamLimits

0x74cb,	// (0x0002c9ba) list_single_graphic_hl_pane_t1

0x441a,	// (0x00029909) aid_size_min_hl_cp2

0x4423,	// (0x00029912) list_highlight_pane_cp34_cp2_ParamLimits

0x4423,	// (0x00029912) list_highlight_pane_cp34_cp2

0x440d,	// (0x000298fc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x440d,	// (0x000298fc) list_single_graphic_hl_pane_g1_cp2

0x4430,	// (0x0002991f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4430,	// (0x0002991f) list_single_graphic_hl_pane_g2_cp2

0x443c,	// (0x0002992b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x443c,	// (0x0002992b) list_single_graphic_hl_pane_g3_cp2

0xd311,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd311,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2

0x444a,	// (0x00029939) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x444a,	// (0x00029939) list_single_graphic_hl_pane_g5_cp2

0x89d1,	// (0x0002dec0) control_pane_g4_ParamLimits

0x89d1,	// (0x0002dec0) control_pane_g4

0xcaef,	// (0x00031fde) bg_popup_sub_pane_cp10_ParamLimits

0x2f24,	// (0x00028413) list_choice_list_pane_ParamLimits

0x2f33,	// (0x00028422) scroll_pane_cp23

0xc484,	// (0x00031973) bg_popup_preview_window_pane_cp02_ParamLimits

0x37f0,	// (0x00028cdf) list_preview_fixed_pane_ParamLimits

0x3806,	// (0x00028cf5) list_preview_fixed_pane_cp_ParamLimits

0x3806,	// (0x00028cf5) list_preview_fixed_pane_cp

0x3812,	// (0x00028d01) popup_preview_fixed_window_g1_ParamLimits

0x3812,	// (0x00028d01) popup_preview_fixed_window_g1

0x381e,	// (0x00028d0d) popup_preview_fixed_window_g2_ParamLimits

0x381e,	// (0x00028d0d) popup_preview_fixed_window_g2

0x0002,

0xf986,	// (0x00034e75) popup_preview_fixed_window_g_ParamLimits

0xf986,	// (0x00034e75) popup_preview_fixed_window_g

0x1209,	// (0x000266f8) aid_navi_side_left_pane_ParamLimits

0x121e,	// (0x0002670d) aid_navi_side_right_pane_ParamLimits

0x1236,	// (0x00026725) navi_icon_pane_stacon_ParamLimits

0x124a,	// (0x00026739) navi_navi_pane_stacon_ParamLimits

0x1236,	// (0x00026725) navi_text_pane_stacon_ParamLimits

0xc2d8,	// (0x000317c7) main_text_info_pane

0x4474,	// (0x00029963) listscroll_text_info_pane

0x447c,	// (0x0002996b) list_text_info_pane_ParamLimits

0x447c,	// (0x0002996b) list_text_info_pane

0x448b,	// (0x0002997a) scroll_pane_cp24_ParamLimits

0x448b,	// (0x0002997a) scroll_pane_cp24

0xb084,	// (0x00030573) list_text_info_pane_t1_ParamLimits

0xb084,	// (0x00030573) list_text_info_pane_t1

0x9dfe,	// (0x0002f2ed) popup_fast_swap2_window_ParamLimits

0x9dfe,	// (0x0002f2ed) popup_fast_swap2_window

0x44e2,	// (0x000299d1) aid_size_cell_fast2

0xc2d8,	// (0x000317c7) bg_popup_window_pane_cp17

0xdcb9,	// (0x000331a8) heading_pane_cp2

0xc66a,	// (0x00031b59) listscroll_fast2_pane

0x44ec,	// (0x000299db) grid_fast2_pane

0x44f6,	// (0x000299e5) listscroll_fast2_pane_g1

0x44fe,	// (0x000299ed) listscroll_fast2_pane_g2

0x0001,

0xfa09,	// (0x00034ef8) listscroll_fast2_pane_g

0xcab7,	// (0x00031fa6) scroll_pane_cp26

0x4508,	// (0x000299f7) cell_fast2_pane_ParamLimits

0x4508,	// (0x000299f7) cell_fast2_pane

0x451d,	// (0x00029a0c) cell_fast2_pane_g1

0x4526,	// (0x00029a15) cell_fast2_pane_g2

0x452f,	// (0x00029a1e) cell_fast2_pane_g3

0x0002,

0xfa0e,	// (0x00034efd) cell_fast2_pane_g

0xc6fe,	// (0x00031bed) grid_highlight_pane_cp9

0xc713,	// (0x00031c02) main_eswt_pane_ParamLimits

0xc713,	// (0x00031c02) main_eswt_pane

0x44a0,	// (0x0002998f) list_single_text_info_pane

0x4537,	// (0x00029a26) eswt_ctrl_button_pane

0x4537,	// (0x00029a26) eswt_ctrl_canvas_pane

0x453f,	// (0x00029a2e) eswt_ctrl_combo_pane

0x4537,	// (0x00029a26) eswt_ctrl_default_pane

0x4537,	// (0x00029a26) eswt_ctrl_label_pane

0x4547,	// (0x00029a36) eswt_ctrl_wait_pane

0x454f,	// (0x00029a3e) eswt_shell_pane

0xc2d8,	// (0x000317c7) listscroll_eswt_app_pane

0x456f,	// (0x00029a5e) popup_eswt_tasktip_window_ParamLimits

0x456f,	// (0x00029a5e) popup_eswt_tasktip_window

0xda12,	// (0x00032f01) bg_popup_window_pane_cp18

0x4580,	// (0x00029a6f) eswt_control_pane_g1_ParamLimits

0x4580,	// (0x00029a6f) eswt_control_pane_g1

0x458d,	// (0x00029a7c) eswt_control_pane_g2_ParamLimits

0x458d,	// (0x00029a7c) eswt_control_pane_g2

0x459a,	// (0x00029a89) eswt_control_pane_g3_ParamLimits

0x459a,	// (0x00029a89) eswt_control_pane_g3

0x45a7,	// (0x00029a96) eswt_control_pane_g4_ParamLimits

0x45a7,	// (0x00029a96) eswt_control_pane_g4

0x0003,

0xfa15,	// (0x00034f04) eswt_control_pane_g_ParamLimits

0xfa15,	// (0x00034f04) eswt_control_pane_g

0xc998,	// (0x00031e87) bg_button_pane_ParamLimits

0xc998,	// (0x00031e87) bg_button_pane

0xc713,	// (0x00031c02) common_borders_pane_copy2_ParamLimits

0xc713,	// (0x00031c02) common_borders_pane_copy2

0x45b4,	// (0x00029aa3) control_button_pane_g1_ParamLimits

0x45b4,	// (0x00029aa3) control_button_pane_g1

0x45c0,	// (0x00029aaf) control_button_pane_g2_ParamLimits

0x45c0,	// (0x00029aaf) control_button_pane_g2

0x45cc,	// (0x00029abb) control_button_pane_g3_ParamLimits

0x45cc,	// (0x00029abb) control_button_pane_g3

0x0002,

0xfa1e,	// (0x00034f0d) control_button_pane_g_ParamLimits

0xfa1e,	// (0x00034f0d) control_button_pane_g

0x45e0,	// (0x00029acf) control_button_pane_t1

0x45ee,	// (0x00029add) control_button_pane_t2

0x0001,

0xfa25,	// (0x00034f14) control_button_pane_t

0xd922,	// (0x00032e11) bg_button_pane_g1

0xd932,	// (0x00032e21) bg_button_pane_g2

0xd92a,	// (0x00032e19) bg_button_pane_g3

0xd942,	// (0x00032e31) bg_button_pane_g4

0xd93a,	// (0x00032e29) bg_button_pane_g5

0xd94a,	// (0x00032e39) bg_button_pane_g6

0xd952,	// (0x00032e41) bg_button_pane_g7

0xd962,	// (0x00032e51) bg_button_pane_g8

0xd95a,	// (0x00032e49) bg_button_pane_g9

0x0008,

0xf7ca,	// (0x00034cb9) bg_button_pane_g

0x2edf,	// (0x000283ce) common_borders_pane_ParamLimits

0x2edf,	// (0x000283ce) common_borders_pane

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy1_ParamLimits

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy1

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy1_ParamLimits

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy1

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy1_ParamLimits

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy1

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy1_ParamLimits

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy1

0x2f1a,	// (0x00028409) bg_eswt_ctrl_canvas_pane_g1

0x2edf,	// (0x000283ce) common_borders_pane_cp2_ParamLimits

0x2edf,	// (0x000283ce) common_borders_pane_cp2

0x2edf,	// (0x000283ce) common_borders_pane_cp3_ParamLimits

0x2edf,	// (0x000283ce) common_borders_pane_cp3

0x45fc,	// (0x00029aeb) separator_horizontal_pane

0x4604,	// (0x00029af3) separator_vertical_pane

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy2_ParamLimits

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy2

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy2_ParamLimits

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy2

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy2_ParamLimits

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy2

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy2_ParamLimits

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy2

0xc2d8,	// (0x000317c7) common_borders_pane_cp4

0x460d,	// (0x00029afc) separator_horizontal_pane_g1

0x4616,	// (0x00029b05) separator_horizontal_pane_g2

0x461f,	// (0x00029b0e) separator_horizontal_pane_g3

0x0002,

0xfa2a,	// (0x00034f19) separator_horizontal_pane_g

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy3_ParamLimits

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy3

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy3_ParamLimits

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy3

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy3_ParamLimits

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy3

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy3_ParamLimits

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy3

0xc2d8,	// (0x000317c7) common_borders_pane_cp5

0x4628,	// (0x00029b17) separator_vertical_pane_g1

0x4631,	// (0x00029b20) separator_vertical_pane_g2

0x463a,	// (0x00029b29) separator_vertical_pane_g3

0x0002,

0xfa31,	// (0x00034f20) separator_vertical_pane_g

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy4_ParamLimits

0x4580,	// (0x00029a6f) eswt_control_pane_g1_copy4

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy4_ParamLimits

0x458d,	// (0x00029a7c) eswt_control_pane_g2_copy4

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy4_ParamLimits

0x459a,	// (0x00029a89) eswt_control_pane_g3_copy4

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy4_ParamLimits

0x45a7,	// (0x00029a96) eswt_control_pane_g4_copy4

0xb0a2,	// (0x00030591) eswt_ctrl_combo_button_pane

0xb0aa,	// (0x00030599) eswt_ctrl_input_pane

0xb0b2,	// (0x000305a1) popup_choice_list_window_cp70

0xb0ba,	// (0x000305a9) eswt_ctrl_input_pane_t1

0xc2d8,	// (0x000317c7) input_focus_pane_cp70

0x2edf,	// (0x000283ce) bg_button_pane_cp70_ParamLimits

0x2edf,	// (0x000283ce) bg_button_pane_cp70

0xb0c8,	// (0x000305b7) eswt_ctrl_combo_button_pane_g1

0x4671,	// (0x00029b60) wait_bar_pane_cp70

0xda12,	// (0x00032f01) bg_popup_window_pane_cp70_ParamLimits

0xda12,	// (0x00032f01) bg_popup_window_pane_cp70

0x4679,	// (0x00029b68) popup_eswt_tasktip_window_t1

0x468f,	// (0x00029b7e) wait_bar_pane_cp71_ParamLimits

0x468f,	// (0x00029b7e) wait_bar_pane_cp71

0x469b,	// (0x00029b8a) grid_eswt_app_pane

0xcd01,	// (0x000321f0) scroll_pane_cp70

0xb0d0,	// (0x000305bf) cell_eswt_app_pane_ParamLimits

0xb0d0,	// (0x000305bf) cell_eswt_app_pane

0xb0fa,	// (0x000305e9) cell_eswt_app_pane_g1_ParamLimits

0xb0fa,	// (0x000305e9) cell_eswt_app_pane_g1

0xb129,	// (0x00030618) cell_eswt_app_pane_g2_ParamLimits

0xb129,	// (0x00030618) cell_eswt_app_pane_g2

0x0001,

0xfa38,	// (0x00034f27) cell_eswt_app_pane_g_ParamLimits

0xfa38,	// (0x00034f27) cell_eswt_app_pane_g

0xb152,	// (0x00030641) cell_eswt_app_pane_t1_ParamLimits

0xb152,	// (0x00030641) cell_eswt_app_pane_t1

0x4762,	// (0x00029c51) grid_highlight_pane_cp70_ParamLimits

0x4762,	// (0x00029c51) grid_highlight_pane_cp70

0xd2ad,	// (0x0003279c) set_content_pane_g1

0xd5b1,	// (0x00032aa0) status_small_volume_pane

0x397f,	// (0x00028e6e) status_small_volume_pane_g1

0x3987,	// (0x00028e76) volume_small2_pane

0x3990,	// (0x00028e7f) volume_small2_pane_g1

0x3999,	// (0x00028e88) volume_small2_pane_g2

0x39a2,	// (0x00028e91) volume_small2_pane_g3

0x39ab,	// (0x00028e9a) volume_small2_pane_g4

0x39b4,	// (0x00028ea3) volume_small2_pane_g5

0x39bd,	// (0x00028eac) volume_small2_pane_g6

0x39c6,	// (0x00028eb5) volume_small2_pane_g7

0x39cf,	// (0x00028ebe) volume_small2_pane_g8

0x39d8,	// (0x00028ec7) volume_small2_pane_g9

0x39e1,	// (0x00028ed0) volume_small2_pane_g10

0x0009,

0xfa3d,	// (0x00034f2c) volume_small2_pane_g

0x3502,	// (0x000289f1) fep_vkb_top_text_pane_g1_ParamLimits

0xb02c,	// (0x0003051b) fep_vkb_top_text_pane_t1_ParamLimits

0x382a,	// (0x00028d19) popup_preview_fixed_window_g3_ParamLimits

0x382a,	// (0x00028d19) popup_preview_fixed_window_g3

0xa401,	// (0x0002f8f0) popup_toolbar_trans_pane

0xab19,	// (0x00030008) aid_height_set_list_ParamLimits

0xe890,	// (0x00033d7f) aid_size_parent_ParamLimits

0xcaef,	// (0x00031fde) list_highlight_pane_cp2_ParamLimits

0xd2ad,	// (0x0003279c) set_content_pane_g1_ParamLimits

0xacb4,	// (0x000301a3) list_single_image_pane_ParamLimits

0xacb4,	// (0x000301a3) list_single_image_pane

0xb184,	// (0x00030673) aid_size_cell_image_ParamLimits

0xb184,	// (0x00030673) aid_size_cell_image

0xb191,	// (0x00030680) grid_single_image_pane_ParamLimits

0xb191,	// (0x00030680) grid_single_image_pane

0xc9b2,	// (0x00031ea1) list_single_image_pane_g1_ParamLimits

0xc9b2,	// (0x00031ea1) list_single_image_pane_g1

0xc9be,	// (0x00031ead) list_single_image_pane_g2_ParamLimits

0xc9be,	// (0x00031ead) list_single_image_pane_g2

0x0001,

0x0637,	// (0x00025b26) list_single_image_pane_g_ParamLimits

0x0637,	// (0x00025b26) list_single_image_pane_g

0x4787,	// (0x00029c76) list_single_image_pane_t1_ParamLimits

0x4787,	// (0x00029c76) list_single_image_pane_t1

0xb19d,	// (0x0003068c) cell_image_list_pane_ParamLimits

0xb19d,	// (0x0003068c) cell_image_list_pane

0xb1b1,	// (0x000306a0) cell_image_list_pane_g1

0xb1ba,	// (0x000306a9) cell_image_list_pane_g2

0x0001,

0xfa52,	// (0x00034f41) cell_image_list_pane_g

0x47c3,	// (0x00029cb2) aid_size_cell_tb_trans_pane

0xc998,	// (0x00031e87) bg_tb_trans_pane

0x47d5,	// (0x00029cc4) grid_tb_trans_pane

0xd922,	// (0x00032e11) bg_tb_trans_pane_g1

0xd932,	// (0x00032e21) bg_tb_trans_pane_g2

0xd92a,	// (0x00032e19) bg_tb_trans_pane_g3

0xd942,	// (0x00032e31) bg_tb_trans_pane_g4

0xd93a,	// (0x00032e29) bg_tb_trans_pane_g5

0xd962,	// (0x00032e51) bg_tb_trans_pane_g6

0xd95a,	// (0x00032e49) bg_tb_trans_pane_g7

0xd94a,	// (0x00032e39) bg_tb_trans_pane_g8

0xd952,	// (0x00032e41) bg_tb_trans_pane_g9

0x0008,

0xfa57,	// (0x00034f46) bg_tb_trans_pane_g

0x47e9,	// (0x00029cd8) cell_toolbar_trans_pane_ParamLimits

0x47e9,	// (0x00029cd8) cell_toolbar_trans_pane

0x2f1a,	// (0x00028409) cell_toolbar_trans_pane_g1

0xaed5,	// (0x000303c4) list_form2_midp_pane_t1

0xaee3,	// (0x000303d2) list_form2_midp_pane_t2

0x0001,

0xf909,	// (0x00034df8) list_form2_midp_pane_t

0xf3c6,	// (0x000348b5) scroll_pane_cp51_ParamLimits

0xf53c,	// (0x00034a2b) form2_midp_wait_pane_g1

0xf545,	// (0x00034a34) form2_midp_wait_pane_g2

0xf54e,	// (0x00034a3d) form2_midp_wait_pane_g3

0x0002,

0x04ff,	// (0x000259ee) form2_midp_wait_pane_g

0xc348,	// (0x00031837) list_highlight_pane_cp21_ParamLimits

0xf56e,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf57d,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_2graphic_im_pane_ParamLimits

0x6fbd,	// (0x0002c4ac) list_single_2graphic_im_pane

0xb1c3,	// (0x000306b2) list_single_2graphic_im_pane_g1_ParamLimits

0xb1c3,	// (0x000306b2) list_single_2graphic_im_pane_g1

0xb1d4,	// (0x000306c3) list_single_2graphic_im_pane_g2_ParamLimits

0xb1d4,	// (0x000306c3) list_single_2graphic_im_pane_g2

0xb1e0,	// (0x000306cf) list_single_2graphic_im_pane_g3_ParamLimits

0xb1e0,	// (0x000306cf) list_single_2graphic_im_pane_g3

0x0003,

0xfa6a,	// (0x00034f59) list_single_2graphic_im_pane_g_ParamLimits

0xfa6a,	// (0x00034f59) list_single_2graphic_im_pane_g

0xb1f4,	// (0x000306e3) list_single_2graphic_im_pane_t1_ParamLimits

0xb1f4,	// (0x000306e3) list_single_2graphic_im_pane_t1

0x3836,	// (0x00028d25) list_single_graphic_2heading_pane_fp_ParamLimits

0x3836,	// (0x00028d25) list_single_graphic_2heading_pane_fp

0x7308,	// (0x0002c7f7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7308,	// (0x0002c7f7) list_single_graphic_2heading_pane_fp_g1

0x384d,	// (0x00028d3c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x384d,	// (0x00028d3c) list_single_graphic_2heading_pane_fp_g2

0x6951,	// (0x0002be40) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6951,	// (0x0002be40) list_single_graphic_2heading_pane_fp_g3

0x72dd,	// (0x0002c7cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x72dd,	// (0x0002c7cc) list_single_graphic_2heading_pane_fp_g4

0x3859,	// (0x00028d48) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x3859,	// (0x00028d48) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xf996,	// (0x00034e85) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xf996,	// (0x00034e85) list_single_graphic_2heading_pane_fp_g

0x74e1,	// (0x0002c9d0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x74e1,	// (0x0002c9d0) list_single_graphic_2heading_pane_fp_t1

0x7340,	// (0x0002c82f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7340,	// (0x0002c82f) list_single_graphic_2heading_pane_fp_t2

0x74f7,	// (0x0002c9e6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x74f7,	// (0x0002c9e6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfa73,	// (0x00034f62) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfa73,	// (0x00034f62) list_single_graphic_2heading_pane_fp_t

0x3158,	// (0x00028647) fep_hwr_write_pane_g5_ParamLimits

0x3158,	// (0x00028647) fep_hwr_write_pane_g5

0x3164,	// (0x00028653) fep_hwr_write_pane_g6_ParamLimits

0x3164,	// (0x00028653) fep_hwr_write_pane_g6

0x454f,	// (0x00029a3e) eswt_shell_pane_ParamLimits

0xda12,	// (0x00032f01) bg_popup_window_pane_cp18_ParamLimits

0xe9d9,	// (0x00033ec8) heading_pane_cp70

0x4679,	// (0x00029b68) popup_eswt_tasktip_window_t1_ParamLimits

0xa4c2,	// (0x0002f9b1) aid_touch_tab_arrow_left

0xa4d8,	// (0x0002f9c7) aid_touch_tab_arrow_right

0x9189,	// (0x0002e678) title_pane_g3_ParamLimits

0x9189,	// (0x0002e678) title_pane_g3

0xc957,	// (0x00031e46) set_value_pane_g1

0xa401,	// (0x0002f8f0) popup_toolbar_trans_pane_ParamLimits

0x47c3,	// (0x00029cb2) aid_size_cell_tb_trans_pane_ParamLimits

0xc998,	// (0x00031e87) bg_tb_trans_pane_ParamLimits

0x47d5,	// (0x00029cc4) grid_tb_trans_pane_ParamLimits

0xc484,	// (0x00031973) cont_note_pane_ParamLimits

0xc484,	// (0x00031973) cont_note_pane

0xc713,	// (0x00031c02) cont_snote2_single_text_pane_ParamLimits

0xc713,	// (0x00031c02) cont_snote2_single_text_pane

0xc713,	// (0x00031c02) cont_snote2_single_graphic_pane_ParamLimits

0xc713,	// (0x00031c02) cont_snote2_single_graphic_pane

0xde9e,	// (0x0003338d) cont_note_wait_pane_ParamLimits

0xde9e,	// (0x0003338d) cont_note_wait_pane

0xde9e,	// (0x0003338d) cont_note_image_pane_ParamLimits

0xde9e,	// (0x0003338d) cont_note_image_pane

0x487d,	// (0x00029d6c) popup_note2_window_g1_ParamLimits

0x487d,	// (0x00029d6c) popup_note2_window_g1

0x48ae,	// (0x00029d9d) popup_note2_window_t1_ParamLimits

0x48ae,	// (0x00029d9d) popup_note2_window_t1

0x48f3,	// (0x00029de2) popup_note2_window_t2_ParamLimits

0x48f3,	// (0x00029de2) popup_note2_window_t2

0x4938,	// (0x00029e27) popup_note2_window_t3_ParamLimits

0x4938,	// (0x00029e27) popup_note2_window_t3

0x497d,	// (0x00029e6c) popup_note2_window_t4_ParamLimits

0x497d,	// (0x00029e6c) popup_note2_window_t4

0xc4fc,	// (0x000319eb) popup_note2_window_t5_ParamLimits

0xc4fc,	// (0x000319eb) popup_note2_window_t5

0x0004,

0xfa7f,	// (0x00034f6e) popup_note2_window_t_ParamLimits

0xfa7f,	// (0x00034f6e) popup_note2_window_t

0x49ac,	// (0x00029e9b) popup_note2_image_window_g1_ParamLimits

0x49ac,	// (0x00029e9b) popup_note2_image_window_g1

0x49b8,	// (0x00029ea7) popup_note2_image_window_g2_ParamLimits

0x49b8,	// (0x00029ea7) popup_note2_image_window_g2

0x0001,

0xfa8a,	// (0x00034f79) popup_note2_image_window_g_ParamLimits

0xfa8a,	// (0x00034f79) popup_note2_image_window_g

0x49ca,	// (0x00029eb9) popup_note2_image_window_t1_ParamLimits

0x49ca,	// (0x00029eb9) popup_note2_image_window_t1

0x49e2,	// (0x00029ed1) popup_note2_image_window_t2_ParamLimits

0x49e2,	// (0x00029ed1) popup_note2_image_window_t2

0x49fa,	// (0x00029ee9) popup_note2_image_window_t3_ParamLimits

0x49fa,	// (0x00029ee9) popup_note2_image_window_t3

0x0002,

0xfa8f,	// (0x00034f7e) popup_note2_image_window_t_ParamLimits

0xfa8f,	// (0x00034f7e) popup_note2_image_window_t

0xdeac,	// (0x0003339b) popup_note2_wait_window_g1_ParamLimits

0xdeac,	// (0x0003339b) popup_note2_wait_window_g1

0xdeb8,	// (0x000333a7) popup_note2_wait_window_g2_ParamLimits

0xdeb8,	// (0x000333a7) popup_note2_wait_window_g2

0xdec4,	// (0x000333b3) popup_note2_wait_window_g3_ParamLimits

0xdec4,	// (0x000333b3) popup_note2_wait_window_g3

0x0002,

0x025f,	// (0x0002574e) popup_note2_wait_window_g_ParamLimits

0x025f,	// (0x0002574e) popup_note2_wait_window_g

0x4a16,	// (0x00029f05) popup_note2_wait_window_t1_ParamLimits

0x4a16,	// (0x00029f05) popup_note2_wait_window_t1

0x4a34,	// (0x00029f23) popup_note2_wait_window_t2_ParamLimits

0x4a34,	// (0x00029f23) popup_note2_wait_window_t2

0x4a52,	// (0x00029f41) popup_note2_wait_window_t3_ParamLimits

0x4a52,	// (0x00029f41) popup_note2_wait_window_t3

0x4a64,	// (0x00029f53) popup_note2_wait_window_t4_ParamLimits

0x4a64,	// (0x00029f53) popup_note2_wait_window_t4

0x0003,

0xfa96,	// (0x00034f85) popup_note2_wait_window_t_ParamLimits

0xfa96,	// (0x00034f85) popup_note2_wait_window_t

0x4a76,	// (0x00029f65) wait_bar2_pane_ParamLimits

0x4a76,	// (0x00029f65) wait_bar2_pane

0x4a8e,	// (0x00029f7d) popup_snote2_single_text_window_g1_ParamLimits

0x4a8e,	// (0x00029f7d) popup_snote2_single_text_window_g1

0x4ab6,	// (0x00029fa5) popup_snote2_single_text_window_t1_ParamLimits

0x4ab6,	// (0x00029fa5) popup_snote2_single_text_window_t1

0x4b02,	// (0x00029ff1) popup_snote2_single_text_window_t2_ParamLimits

0x4b02,	// (0x00029ff1) popup_snote2_single_text_window_t2

0x4b4e,	// (0x0002a03d) popup_snote2_single_text_window_t3_ParamLimits

0x4b4e,	// (0x0002a03d) popup_snote2_single_text_window_t3

0x4b8f,	// (0x0002a07e) popup_snote2_single_text_window_t4_ParamLimits

0x4b8f,	// (0x0002a07e) popup_snote2_single_text_window_t4

0x4bc5,	// (0x0002a0b4) popup_snote2_single_text_window_t5_ParamLimits

0x4bc5,	// (0x0002a0b4) popup_snote2_single_text_window_t5

0x0004,

0xfa9f,	// (0x00034f8e) popup_snote2_single_text_window_t_ParamLimits

0xfa9f,	// (0x00034f8e) popup_snote2_single_text_window_t

0x4bf0,	// (0x0002a0df) popup_snote2_single_graphic_window_g1_ParamLimits

0x4bf0,	// (0x0002a0df) popup_snote2_single_graphic_window_g1

0x4c18,	// (0x0002a107) popup_snote2_single_graphic_window_g2_ParamLimits

0x4c18,	// (0x0002a107) popup_snote2_single_graphic_window_g2

0x0001,

0xfaaa,	// (0x00034f99) popup_snote2_single_graphic_window_g_ParamLimits

0xfaaa,	// (0x00034f99) popup_snote2_single_graphic_window_g

0x4c40,	// (0x0002a12f) popup_snote2_single_graphic_window_t1_ParamLimits

0x4c40,	// (0x0002a12f) popup_snote2_single_graphic_window_t1

0x4c8c,	// (0x0002a17b) popup_snote2_single_graphic_window_t2_ParamLimits

0x4c8c,	// (0x0002a17b) popup_snote2_single_graphic_window_t2

0x4b4e,	// (0x0002a03d) popup_snote2_single_graphic_window_t3_ParamLimits

0x4b4e,	// (0x0002a03d) popup_snote2_single_graphic_window_t3

0x4b8f,	// (0x0002a07e) popup_snote2_single_graphic_window_t4_ParamLimits

0x4b8f,	// (0x0002a07e) popup_snote2_single_graphic_window_t4

0x4bc5,	// (0x0002a0b4) popup_snote2_single_graphic_window_t5_ParamLimits

0x4bc5,	// (0x0002a0b4) popup_snote2_single_graphic_window_t5

0x0004,

0xfaaf,	// (0x00034f9e) popup_snote2_single_graphic_window_t_ParamLimits

0xfaaf,	// (0x00034f9e) popup_snote2_single_graphic_window_t

0xf376,	// (0x00034865) clock_nsta_pane_cp2_t1

0xf376,	// (0x00034865) clock_nsta_pane_cp2_t2

0x0001,

0x04c0,	// (0x000259af) clock_nsta_pane_cp2_t

0x6c84,	// (0x0002c173) form_field_data_wide_pane_g1_ParamLimits

0xc9b2,	// (0x00031ea1) form_field_data_wide_pane_g2_ParamLimits

0xc9b2,	// (0x00031ea1) form_field_data_wide_pane_g2

0xc9be,	// (0x00031ead) form_field_data_wide_pane_g3_ParamLimits

0xc9be,	// (0x00031ead) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x00034bae) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x00034bae) form_field_data_wide_pane_g

0xadeb,	// (0x000302da) grid_touch_3_pane_ParamLimits

0xadeb,	// (0x000302da) grid_touch_3_pane

0xb225,	// (0x00030714) cell_touch_3_pane_ParamLimits

0xb225,	// (0x00030714) cell_touch_3_pane

0x2f1a,	// (0x00028409) cell_touch_3_pane_g1

0x2f1a,	// (0x00028409) cell_touch_3_pane_g2

0x0001,

0xf954,	// (0x00034e43) cell_touch_3_pane_g

0xc52e,	// (0x00031a1d) cont_query_data_pane

0xc536,	// (0x00031a25) cont_query_data_pane_cp1

0x4d07,	// (0x0002a1f6) button_value_adjust_pane_cp7

0x4d0f,	// (0x0002a1fe) query_popup_pane_cp3

0xcf27,	// (0x00032416) bg_popup_sub_pane_cp22_ParamLimits

0x1435,	// (0x00026924) navi_navi_volume_pane_cp2

0x1450,	// (0x0002693f) popup_side_volume_key_window_g2

0x145f,	// (0x0002694e) popup_side_volume_key_window_g3

0x0002,

0xf71e,	// (0x00034c0d) popup_side_volume_key_window_g

0x147c,	// (0x0002696b) popup_side_volume_key_window_t2

0x0001,

0xf725,	// (0x00034c14) popup_side_volume_key_window_t

0xd177,	// (0x00032666) popup_side_volume_key_window_ParamLimits

0x93b8,	// (0x0002e8a7) list_double_graphic_pane_g4_ParamLimits

0x93b8,	// (0x0002e8a7) list_double_graphic_pane_g4

0x982c,	// (0x0002ed1b) list_single_2heading_msg_pane_ParamLimits

0x982c,	// (0x0002ed1b) list_single_2heading_msg_pane

0x984d,	// (0x0002ed3c) list_single_2heading_msg_pane_g1_ParamLimits

0x984d,	// (0x0002ed3c) list_single_2heading_msg_pane_g1

0x9859,	// (0x0002ed48) list_single_2heading_msg_pane_g2_ParamLimits

0x9859,	// (0x0002ed48) list_single_2heading_msg_pane_g2

0x986c,	// (0x0002ed5b) list_single_2heading_msg_pane_g3_ParamLimits

0x986c,	// (0x0002ed5b) list_single_2heading_msg_pane_g3

0x7523,	// (0x0002ca12) list_single_2heading_msg_pane_g4_ParamLimits

0x7523,	// (0x0002ca12) list_single_2heading_msg_pane_g4

0x0003,

0xfaba,	// (0x00034fa9) list_single_2heading_msg_pane_g_ParamLimits

0xfaba,	// (0x00034fa9) list_single_2heading_msg_pane_g

0x753b,	// (0x0002ca2a) list_single_2heading_msg_pane_t1_ParamLimits

0x753b,	// (0x0002ca2a) list_single_2heading_msg_pane_t1

0x9878,	// (0x0002ed67) list_single_2heading_msg_pane_t2_ParamLimits

0x9878,	// (0x0002ed67) list_single_2heading_msg_pane_t2

0x98e3,	// (0x0002edd2) list_single_2heading_msg_pane_t3_ParamLimits

0x98e3,	// (0x0002edd2) list_single_2heading_msg_pane_t3

0x75d0,	// (0x0002cabf) list_single_2heading_msg_pane_t4_ParamLimits

0x75d0,	// (0x0002cabf) list_single_2heading_msg_pane_t4

0x0003,

0xfac3,	// (0x00034fb2) list_single_2heading_msg_pane_t_ParamLimits

0xfac3,	// (0x00034fb2) list_single_2heading_msg_pane_t

0xc2f6,	// (0x000317e5) title_pane_g4_ParamLimits

0xc2f6,	// (0x000317e5) title_pane_g4

0x1159,	// (0x00026648) title_pane_stacon_g3_ParamLimits

0x1159,	// (0x00026648) title_pane_stacon_g3

0x4840,	// (0x00029d2f) list_single_2graphic_im_pane_g4_ParamLimits

0x4840,	// (0x00029d2f) list_single_2graphic_im_pane_g4

0xe7df,	// (0x00033cce) popup_side_volume_key_window_cp

0xecc9,	// (0x000341b8) main_idle_act2_pane_t1

0x210d,	// (0x000275fc) toolbar_button_pane_g10

0x9ac8,	// (0x0002efb7) popup_toolbar_window_cp1

0xf367,	// (0x00034856) clock_nsta_pane_cp_t1

0xf367,	// (0x00034856) clock_nsta_pane_cp_t2

0x0001,

0x04bb,	// (0x000259aa) clock_nsta_pane_cp_t

0x1435,	// (0x00026924) navi_navi_volume_pane_cp2_ParamLimits

0x1444,	// (0x00026933) popup_side_volume_key_window_g1_ParamLimits

0x1450,	// (0x0002693f) popup_side_volume_key_window_g2_ParamLimits

0x145f,	// (0x0002694e) popup_side_volume_key_window_g3_ParamLimits

0xf71e,	// (0x00034c0d) popup_side_volume_key_window_g_ParamLimits

0x2f98,	// (0x00028487) fep_hwr_aid_pane

0x303f,	// (0x0002852e) bg_fep_hwr_top_pane_g4_ParamLimits

0x305f,	// (0x0002854e) fep_hwr_top_pane_g1_ParamLimits

0x3071,	// (0x00028560) fep_hwr_top_pane_g2_ParamLimits

0x3083,	// (0x00028572) fep_hwr_top_pane_g3_ParamLimits

0xf91f,	// (0x00034e0e) fep_hwr_top_pane_g_ParamLimits

0x3098,	// (0x00028587) fep_hwr_top_text_pane_ParamLimits

0xe5d4,	// (0x00033ac3) aid_touch_tab_arrow_arrow_2

0xe5dd,	// (0x00033acc) aid_touch_tab_arrow_left_2

0x2fac,	// (0x0002849b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2fe3,	// (0x000284d2) fep_hwr_prediction_pane

0x330a,	// (0x000287f9) fep_vkb_prediction_pane

0xb00c,	// (0x000304fb) fep_vkb_side_pane_g3_ParamLimits

0xb00c,	// (0x000304fb) fep_vkb_side_pane_g3

0x3737,	// (0x00028c26) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x38ae,	// (0x00028d9d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x38bb,	// (0x00028daa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xf9ce,	// (0x00034ebd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x39ea,	// (0x00028ed9) fep_hwr_prediction_pane_g1

0x39f4,	// (0x00028ee3) fep_hwr_prediction_pane_g2

0x2f82,	// (0x00028471) fep_hwr_prediction_pane_g3

0x39fc,	// (0x00028eeb) fep_hwr_prediction_pane_g4

0x0003,

0xfacc,	// (0x00034fbb) fep_hwr_prediction_pane_g

0x4d34,	// (0x0002a223) fep_vkb_prediction_pane_g1

0x4d3e,	// (0x0002a22d) fep_vkb_prediction_pane_g2

0x4d46,	// (0x0002a235) fep_vkb_prediction_pane_g3

0x4d4e,	// (0x0002a23d) fep_vkb_prediction_pane_g4

0x0003,

0xfad5,	// (0x00034fc4) fep_vkb_prediction_pane_g

0x26f1,	// (0x00027be0) slider_set_pane_g3

0x2705,	// (0x00027bf4) slider_set_pane_g4

0x271d,	// (0x00027c0c) slider_set_pane_g5

0x26f1,	// (0x00027be0) slider_set_pane_g6

0x2733,	// (0x00027c22) slider_set_pane_g7

0xea5e,	// (0x00033f4d) slider_form_pane_g3

0xea67,	// (0x00033f56) slider_form_pane_g4

0xea6f,	// (0x00033f5e) slider_form_pane_g5

0xea5e,	// (0x00033f4d) slider_form_pane_g6

0xac60,	// (0x0003014f) slider_form_pane_g7

0xef67,	// (0x00034456) slider_set_pane_vc_g3

0xef70,	// (0x0003445f) slider_set_pane_vc_g4

0xef79,	// (0x00034468) slider_set_pane_vc_g5

0xef67,	// (0x00034456) slider_set_pane_vc_g6

0xef82,	// (0x00034471) slider_set_pane_vc_g7

0xef67,	// (0x00034456) slider_form_pane_vc_g1

0xef70,	// (0x0003445f) slider_form_pane_vc_g2

0xef79,	// (0x00034468) slider_form_pane_vc_g3

0xef67,	// (0x00034456) slider_form_pane_vc_g4

0xf111,	// (0x00034600) slider_form_pane_vc_g5

0x0004,

0x04a1,	// (0x00025990) slider_form_pane_vc_g

0xc2d8,	// (0x000317c7) main_idle_act3_pane

0x4d56,	// (0x0002a245) ai3_links_pane

0xb26e,	// (0x0003075d) popup_ai3_data_window_ParamLimits

0xb26e,	// (0x0003075d) popup_ai3_data_window

0xc2d8,	// (0x000317c7) grid_ai3_links_pane

0xb286,	// (0x00030775) cell_ai3_links_pane_ParamLimits

0xb286,	// (0x00030775) cell_ai3_links_pane

0x4d8f,	// (0x0002a27e) bg_popup_sub_pane_cp11

0x4d9c,	// (0x0002a28b) cell_ai3_links_pane_g1

0xc2d8,	// (0x000317c7) bg_popup_sub_pane_cp12

0x4dc1,	// (0x0002a2b0) heading_ai3_data_pane

0x4dc9,	// (0x0002a2b8) list_ai3_gene_pane

0x4dd5,	// (0x0002a2c4) popup_ai3_data_window_g1

0x4ddd,	// (0x0002a2cc) heading_ai3_data_pane_g1

0x4de5,	// (0x0002a2d4) heading_ai3_data_pane_t1

0x4df3,	// (0x0002a2e2) list_double_ai3_gene_pane_ParamLimits

0x4df3,	// (0x0002a2e2) list_double_ai3_gene_pane

0x4e00,	// (0x0002a2ef) list_single_ai3_gene_pane_ParamLimits

0x4e00,	// (0x0002a2ef) list_single_ai3_gene_pane

0x2edf,	// (0x000283ce) list_highlight_pane_cp7_ParamLimits

0x2edf,	// (0x000283ce) list_highlight_pane_cp7

0x4e0d,	// (0x0002a2fc) list_single_a13_gene_pane_t1_ParamLimits

0x4e0d,	// (0x0002a2fc) list_single_a13_gene_pane_t1

0x4e24,	// (0x0002a313) list_single_ai3_gene_pane_g1

0x4e2d,	// (0x0002a31c) list_single_ai3_gene_pane_g2

0x0001,

0xfade,	// (0x00034fcd) list_single_ai3_gene_pane_g

0x4e35,	// (0x0002a324) list_double_ai3_gene_pane_g1_ParamLimits

0x4e35,	// (0x0002a324) list_double_ai3_gene_pane_g1

0x4e41,	// (0x0002a330) list_double_ai3_gene_pane_t1_ParamLimits

0x4e41,	// (0x0002a330) list_double_ai3_gene_pane_t1

0x4e5d,	// (0x0002a34c) list_double_ai3_gene_pane_t2_ParamLimits

0x4e5d,	// (0x0002a34c) list_double_ai3_gene_pane_t2

0x4e72,	// (0x0002a361) list_double_ai3_gene_pane_t3_ParamLimits

0x4e72,	// (0x0002a361) list_double_ai3_gene_pane_t3

0x0002,

0xfae3,	// (0x00034fd2) list_double_ai3_gene_pane_t_ParamLimits

0xfae3,	// (0x00034fd2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x750d,	// (0x0002c9fc) aid_size_min_col_2

0xb258,	// (0x00030747) aid_size_min_msg_ParamLimits

0xb258,	// (0x00030747) aid_size_min_msg

0xb020,	// (0x0003050f) fep_vkb_top_text_pane_g2_ParamLimits

0xb020,	// (0x0003050f) fep_vkb_top_text_pane_g2

0x0001,

0xf94f,	// (0x00034e3e) fep_vkb_top_text_pane_g_ParamLimits

0xf94f,	// (0x00034e3e) fep_vkb_top_text_pane_g

0xc2d8,	// (0x000317c7) main_hc_apps_shell_pane

0x4e8f,	// (0x0002a37e) grid_hc_apps_pane_ParamLimits

0x4e8f,	// (0x0002a37e) grid_hc_apps_pane

0x4e9e,	// (0x0002a38d) list_hc_apps_pane

0x4ea6,	// (0x0002a395) scroll_pane_cp37_ParamLimits

0x4ea6,	// (0x0002a395) scroll_pane_cp37

0xb2a0,	// (0x0003078f) cell_hc_apps_pane_ParamLimits

0xb2a0,	// (0x0003078f) cell_hc_apps_pane

0xb360,	// (0x0003084f) cell_hc_apps_pane_g1_ParamLimits

0xb360,	// (0x0003084f) cell_hc_apps_pane_g1

0x4f93,	// (0x0002a482) cell_hc_apps_pane_g2_ParamLimits

0x4f93,	// (0x0002a482) cell_hc_apps_pane_g2

0x4faf,	// (0x0002a49e) cell_hc_apps_pane_g3_ParamLimits

0x4faf,	// (0x0002a49e) cell_hc_apps_pane_g3

0x0002,

0xfaea,	// (0x00034fd9) cell_hc_apps_pane_g_ParamLimits

0xfaea,	// (0x00034fd9) cell_hc_apps_pane_g

0xb38d,	// (0x0003087c) cell_hc_apps_pane_t1_ParamLimits

0xb38d,	// (0x0003087c) cell_hc_apps_pane_t1

0xc484,	// (0x00031973) grid_highlight_pane_cp10_ParamLimits

0xc484,	// (0x00031973) grid_highlight_pane_cp10

0xb3cb,	// (0x000308ba) list_single_hc_apps_pane_ParamLimits

0xb3cb,	// (0x000308ba) list_single_hc_apps_pane

0x5084,	// (0x0002a573) list_single_hc_apps_pane_g1

0x75f5,	// (0x0002cae4) list_single_hc_apps_pane_g2

0x0001,

0xfaf1,	// (0x00034fe0) list_single_hc_apps_pane_g

0x760e,	// (0x0002cafd) list_single_hc_apps_pane_g2_copy1

0x762a,	// (0x0002cb19) list_single_hc_apps_pane_t1

0xc348,	// (0x00031837) bg_set_opt_pane_cp_ParamLimits

0x0e18,	// (0x00026307) setting_slider_pane_t1_ParamLimits

0x0e31,	// (0x00026320) setting_slider_pane_t2_ParamLimits

0x0e4a,	// (0x00026339) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00034a91) setting_slider_pane_t_ParamLimits

0x0e61,	// (0x00026350) slider_set_pane_ParamLimits

0x1818,	// (0x00026d07) control_pane_g5_ParamLimits

0x1818,	// (0x00026d07) control_pane_g5

0xea20,	// (0x00033f0f) slider_set_pane_g1_ParamLimits

0x26e5,	// (0x00027bd4) slider_set_pane_g2_ParamLimits

0x26f1,	// (0x00027be0) slider_set_pane_g3_ParamLimits

0x2705,	// (0x00027bf4) slider_set_pane_g4_ParamLimits

0x271d,	// (0x00027c0c) slider_set_pane_g5_ParamLimits

0x26f1,	// (0x00027be0) slider_set_pane_g6_ParamLimits

0x2733,	// (0x00027c22) slider_set_pane_g7_ParamLimits

0xf838,	// (0x00034d27) slider_set_pane_g_ParamLimits

0xd258,	// (0x00032747) navi_icon_text_pane_ParamLimits

0xa48e,	// (0x0002f97d) aid_fill_nsta_2_ParamLimits

0xa4c2,	// (0x0002f9b1) aid_touch_tab_arrow_left_ParamLimits

0xa4d8,	// (0x0002f9c7) aid_touch_tab_arrow_right_ParamLimits

0xa573,	// (0x0002fa62) clock_nsta_pane_ParamLimits

0xaa08,	// (0x0002fef7) navi_icon_pane_g1_ParamLimits

0xaa14,	// (0x0002ff03) navi_text_pane_t1_ParamLimits

0xaeb7,	// (0x000303a6) navi_icon_text_pane_g1_ParamLimits

0xaec3,	// (0x000303b2) navi_icon_text_pane_t1_ParamLimits

0x5084,	// (0x0002a573) list_single_hc_apps_pane_g1_ParamLimits

0x75f5,	// (0x0002cae4) list_single_hc_apps_pane_g2_ParamLimits

0xfaf1,	// (0x00034fe0) list_single_hc_apps_pane_g_ParamLimits

0x760e,	// (0x0002cafd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x762a,	// (0x0002cb19) list_single_hc_apps_pane_t1_ParamLimits

0x88ca,	// (0x0002ddb9) popup_toolbar2_fixed_window_ParamLimits

0x88ca,	// (0x0002ddb9) popup_toolbar2_fixed_window

0xa3f7,	// (0x0002f8e6) popup_toolbar2_float_window

0xc2d8,	// (0x000317c7) bg_popup_sub_pane_cp27

0x509d,	// (0x0002a58c) grid_toolbar2_float_pane

0xc2d8,	// (0x000317c7) bg_popup_sub_pane_cp26

0x509d,	// (0x0002a58c) grid_toolbar2_fixed_pane

0xb3fe,	// (0x000308ed) cell_toolbar2_fixed_pane_ParamLimits

0xb3fe,	// (0x000308ed) cell_toolbar2_fixed_pane

0xb419,	// (0x00030908) cell_toolbar2_fixed_pane_g1

0x50bf,	// (0x0002a5ae) toolbar2_fixed_button_pane

0xd922,	// (0x00032e11) toolbar2_fixed_button_pane_g1

0xd932,	// (0x00032e21) toolbar2_fixed_button_pane_g2

0xd92a,	// (0x00032e19) toolbar2_fixed_button_pane_g3

0xd942,	// (0x00032e31) toolbar2_fixed_button_pane_g4

0xd93a,	// (0x00032e29) toolbar2_fixed_button_pane_g5

0xd94a,	// (0x00032e39) toolbar2_fixed_button_pane_g6

0xd952,	// (0x00032e41) toolbar2_fixed_button_pane_g7

0xd962,	// (0x00032e51) toolbar2_fixed_button_pane_g8

0xd95a,	// (0x00032e49) toolbar2_fixed_button_pane_g9

0x0008,

0xf7ca,	// (0x00034cb9) toolbar2_fixed_button_pane_g

0x50c7,	// (0x0002a5b6) cell_toolbar2_float_pane_ParamLimits

0x50c7,	// (0x0002a5b6) cell_toolbar2_float_pane

0x50d8,	// (0x0002a5c7) cell_toolbar2_float_pane_g1

0x50bf,	// (0x0002a5ae) toolbar2_fixed_button_pane_cp

0xafd3,	// (0x000304c2) fep_vkb_accented_list_pane_ParamLimits

0xafd3,	// (0x000304c2) fep_vkb_accented_list_pane

0x3709,	// (0x00028bf8) bg_popup_fep_shadow_pane_g9

0xd3da,	// (0x000328c9) bg_popup_fep_shadow_pane_cp3

0xca9e,	// (0x00031f8d) list_accented_list_pane

0x50e1,	// (0x0002a5d0) list_single_accented_list_pane_ParamLimits

0x50e1,	// (0x0002a5d0) list_single_accented_list_pane

0xd3da,	// (0x000328c9) list_highlight_pane_cp10

0x50f2,	// (0x0002a5e1) list_single_accented_list_pane_t1

0xa321,	// (0x0002f810) popup_slider_window_ParamLimits

0xa321,	// (0x0002f810) popup_slider_window

0x4d17,	// (0x0002a206) aid_indentation_list_msg

0xb512,	// (0x00030a01) bg_popup_window_pane_cp19

0x5216,	// (0x0002a705) popup_slider_window_g1

0x5232,	// (0x0002a721) popup_slider_window_g2

0x524e,	// (0x0002a73d) popup_slider_window_g3

0x0005,

0xfaf6,	// (0x00034fe5) popup_slider_window_g

0x52aa,	// (0x0002a799) popup_slider_window_t1

0x531e,	// (0x0002a80d) small_volume_slider_vertical_pane

0x2f1a,	// (0x00028409) small_volume_slider_vertical_pane_g1

0x2f1a,	// (0x00028409) small_volume_slider_vertical_pane_g2

0x533a,	// (0x0002a829) small_volume_slider_vertical_pane_g3

0x0002,

0xfb08,	// (0x00034ff7) small_volume_slider_vertical_pane_g

0x8838,	// (0x0002dd27) area_side_right_pane_ParamLimits

0x8838,	// (0x0002dd27) area_side_right_pane

0x8cf4,	// (0x0002e1e3) aid_size_side_button_ParamLimits

0x8cf4,	// (0x0002e1e3) aid_size_side_button

0x8d0d,	// (0x0002e1fc) grid_sctrl_middle_pane_ParamLimits

0x8d0d,	// (0x0002e1fc) grid_sctrl_middle_pane

0x3a38,	// (0x00028f27) sctrl_sk_bottom_pane

0x3a49,	// (0x00028f38) sctrl_sk_top_pane

0x3a5b,	// (0x00028f4a) aid_touch_sctrl_top

0x3a68,	// (0x00028f57) bg_sctrl_sk_pane_ParamLimits

0x3a68,	// (0x00028f57) bg_sctrl_sk_pane

0x3a76,	// (0x00028f65) sctrl_sk_top_pane_g1

0x3a83,	// (0x00028f72) sctrl_sk_top_pane_t1

0x3a5b,	// (0x00028f4a) aid_touch_sctrl_bottom

0x3a68,	// (0x00028f57) bg_sctrl_sk_pane_cp_ParamLimits

0x3a68,	// (0x00028f57) bg_sctrl_sk_pane_cp

0x3a9e,	// (0x00028f8d) sctrl_sk_bottom_pane_g1

0x3a83,	// (0x00028f72) sctrl_sk_bottom_pane_t1

0x8d27,	// (0x0002e216) cell_sctrl_middle_pane_ParamLimits

0x8d27,	// (0x0002e216) cell_sctrl_middle_pane

0x8d38,	// (0x0002e227) aid_touch_sctrl_middle_ParamLimits

0x8d38,	// (0x0002e227) aid_touch_sctrl_middle

0x8d45,	// (0x0002e234) bg_sctrl_middle_pane_ParamLimits

0x8d45,	// (0x0002e234) bg_sctrl_middle_pane

0x4119,	// (0x00029608) cell_sctrl_middle_pane_g1_ParamLimits

0x4119,	// (0x00029608) cell_sctrl_middle_pane_g1

0x8d53,	// (0x0002e242) cell_sctrl_middle_pane_g2_ParamLimits

0x8d53,	// (0x0002e242) cell_sctrl_middle_pane_g2

0x0001,

0xfb14,	// (0x00035003) cell_sctrl_middle_pane_g_ParamLimits

0xfb14,	// (0x00035003) cell_sctrl_middle_pane_g

0xd922,	// (0x00032e11) bg_sctrl_middle_pane_g1

0xd92a,	// (0x00032e19) bg_sctrl_middle_pane_g2

0xd932,	// (0x00032e21) bg_sctrl_middle_pane_g3

0xd93a,	// (0x00032e29) bg_sctrl_middle_pane_g4

0xd942,	// (0x00032e31) bg_sctrl_middle_pane_g5

0xd94a,	// (0x00032e39) bg_sctrl_middle_pane_g6

0xd952,	// (0x00032e41) bg_sctrl_middle_pane_g7

0xd95a,	// (0x00032e49) bg_sctrl_middle_pane_g8

0x0007,

0x0703,	// (0x00025bf2) bg_sctrl_middle_pane_g

0xd962,	// (0x00032e51) bg_sctrl_middle_pane_g8_copy1

0xd922,	// (0x00032e11) bg_sctrl_sk_pane_g1

0xd932,	// (0x00032e21) bg_sctrl_sk_pane_g2

0xd92a,	// (0x00032e19) bg_sctrl_sk_pane_g3

0x0008,

0xf7ca,	// (0x00034cb9) bg_sctrl_sk_pane_g

0xc8d1,	// (0x00031dc0) aid_size_touch_scroll_bar

0xd942,	// (0x00032e31) bg_sctrl_sk_pane_g4

0xd93a,	// (0x00032e29) bg_sctrl_sk_pane_g5

0xd94a,	// (0x00032e39) bg_sctrl_sk_pane_g6

0xd952,	// (0x00032e41) bg_sctrl_sk_pane_g7

0xd962,	// (0x00032e51) bg_sctrl_sk_pane_g8

0xd95a,	// (0x00032e49) bg_sctrl_sk_pane_g9

0xd664,	// (0x00032b53) popup_fep_china_hwr2_fs_candidate_window

0x9e5b,	// (0x0002f34a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9e5b,	// (0x0002f34a) popup_fep_china_hwr2_fs_control_window

0x3737,	// (0x00028c26) sctrl_sk_top_pane_g2

0x0001,

0xfb0f,	// (0x00034ffe) sctrl_sk_top_pane_g

0xb5ca,	// (0x00030ab9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb5ca,	// (0x00030ab9) aid_fep_china_hwr2_fs_cell

0xb5de,	// (0x00030acd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb5de,	// (0x00030acd) bg_popup_fep_shadow_pane_cp4

0xb5f5,	// (0x00030ae4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb5f5,	// (0x00030ae4) bg_popup_fep_shadow_pane_cp5

0xb607,	// (0x00030af6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb607,	// (0x00030af6) popup_fep_china_hwr2_fs_control_bar_grid

0xb61b,	// (0x00030b0a) popup_fep_china_hwr2_fs_control_funtion_grid

0x5396,	// (0x0002a885) aid_fep_china_hwr2_fs_candi_cell

0xc2d8,	// (0x000317c7) bg_popup_fep_shadow_pane_cp6

0x53a0,	// (0x0002a88f) popup_fep_china_hwr2_fs_candidate_grid

0xb623,	// (0x00030b12) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb623,	// (0x00030b12) cell_fep_china_hwr2_fs_funtion_grid

0x2f1a,	// (0x00028409) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x53c2,	// (0x0002a8b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x53c2,	// (0x0002a8b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x53d0,	// (0x0002a8bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x53d0,	// (0x0002a8bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfb19,	// (0x00035008) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfb19,	// (0x00035008) cell_fep_china_hwr2_fs_funtion_grid_g

0xb63b,	// (0x00030b2a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb63b,	// (0x00030b2a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb650,	// (0x00030b3f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb650,	// (0x00030b3f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfb1e,	// (0x0003500d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfb1e,	// (0x0003500d) cell_fep_china_hwr2_fs_funtion_grid_t

0x5417,	// (0x0002a906) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x541f,	// (0x0002a90e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5427,	// (0x0002a916) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfb23,	// (0x00035012) popup_fep_china_hwr2_fs_control_bar_grid_g

0x542f,	// (0x0002a91e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x542f,	// (0x0002a91e) cell_fep_china_hwr2_fs_candidate_grid

0x5448,	// (0x0002a937) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5450,	// (0x0002a93f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x2f1a,	// (0x00028409) cell_fep_china_hwr2_fs_candidate_grid_g1

0x2f1a,	// (0x00028409) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xf954,	// (0x00034e43) cell_fep_china_hwr2_fs_candidate_grid_g

0x5458,	// (0x0002a947) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd771,	// (0x00032c60) clock_nsta_pane_cp_24_ParamLimits

0xd771,	// (0x00032c60) clock_nsta_pane_cp_24

0xd7d9,	// (0x00032cc8) indicator_nsta_pane_cp_24_ParamLimits

0xd7d9,	// (0x00032cc8) indicator_nsta_pane_cp_24

0xe4de,	// (0x000339cd) heading_pane_g1

0x0001,

0x02e2,	// (0x000257d1) heading_pane_g

0xeb54,	// (0x00034043) grid_sct_catagory_button_pane

0xe8a2,	// (0x00033d91) scroll_pane_cp5_ParamLimits

0xf3d2,	// (0x000348c1) button_value_adjust_pane_cp5_ParamLimits

0xf3d2,	// (0x000348c1) button_value_adjust_pane_cp5

0xf490,	// (0x0003497f) form2_midp_time_pane_ParamLimits

0x5466,	// (0x0002a955) cell_sct_catagory_button_pane_ParamLimits

0x5466,	// (0x0002a955) cell_sct_catagory_button_pane

0x2edf,	// (0x000283ce) bg_button_pane_cp01_ParamLimits

0x2edf,	// (0x000283ce) bg_button_pane_cp01

0x2f1a,	// (0x00028409) cell_sct_catagory_button_pane_g1

0xa39a,	// (0x0002f889) popup_tb_extension_window

0xb66c,	// (0x00030b5b) aid_size_cell_ext_ParamLimits

0xb66c,	// (0x00030b5b) aid_size_cell_ext

0xc713,	// (0x00031c02) bg_tb_trans_pane_cp1_ParamLimits

0xc713,	// (0x00031c02) bg_tb_trans_pane_cp1

0xb692,	// (0x00030b81) grid_tb_ext_pane_ParamLimits

0xb692,	// (0x00030b81) grid_tb_ext_pane

0xb6d2,	// (0x00030bc1) cell_tb_ext_pane_ParamLimits

0xb6d2,	// (0x00030bc1) cell_tb_ext_pane

0xb6fa,	// (0x00030be9) cell_tb_ext_pane_g1_ParamLimits

0xb6fa,	// (0x00030be9) cell_tb_ext_pane_g1

0x54fe,	// (0x0002a9ed) cell_tb_ext_pane_t1

0xc484,	// (0x00031973) list_highlight_pane_cp11_ParamLimits

0xc484,	// (0x00031973) list_highlight_pane_cp11

0x0c8b,	// (0x0002617a) popup_uni_indicator_window_ParamLimits

0x0c8b,	// (0x0002617a) popup_uni_indicator_window

0xc998,	// (0x00031e87) bg_popup_sub_pane_cp14

0x5519,	// (0x0002aa08) list_uniindi_pane

0x5525,	// (0x0002aa14) uniindi_top_pane

0xc484,	// (0x00031973) bg_uniindi_top_pane

0x5544,	// (0x0002aa33) uniindi_top_pane_g1

0x555a,	// (0x0002aa49) uniindi_top_pane_g2

0x0003,

0xfb2a,	// (0x00035019) uniindi_top_pane_g

0x5584,	// (0x0002aa73) uniindi_top_pane_t1

0x55ae,	// (0x0002aa9d) list_single_uniindi_pane_ParamLimits

0x55ae,	// (0x0002aa9d) list_single_uniindi_pane

0x2f1a,	// (0x00028409) bg_uniindi_top_pane_g1

0x55c0,	// (0x0002aaaf) list_single_uniindi_pane_g1

0x55d3,	// (0x0002aac2) list_single_uniindi_pane_t1

0x0b0f,	// (0x00025ffe) control_bg_pane

0x55f8,	// (0x0002aae7) bg_sctrl_sk_pane_cp1

0x5601,	// (0x0002aaf0) bg_sctrl_sk_pane_cp2

0x560a,	// (0x0002aaf9) control_bg_pane_g1

0x5613,	// (0x0002ab02) control_bg_pane_g2

0x0001,

0xfb33,	// (0x00035022) control_bg_pane_g

0xf300,	// (0x000347ef) cell_indicator_nsta_pane_g1_ParamLimits

0xae1e,	// (0x0003030d) cell_indicator_nsta_pane_g2_ParamLimits

0xf8df,	// (0x00034dce) cell_indicator_nsta_pane_g_ParamLimits

0x72ca,	// (0x0002c7b9) form2_midp_time_pane_t1_ParamLimits

0x409a,	// (0x00029589) main_idle_act4_pane_ParamLimits

0x409a,	// (0x00029589) main_idle_act4_pane

0xa39a,	// (0x0002f889) popup_tb_extension_window_ParamLimits

0xb6b9,	// (0x00030ba8) tb_ext_find_pane_ParamLimits

0xb6b9,	// (0x00030ba8) tb_ext_find_pane

0x561c,	// (0x0002ab0b) ai_gene_pane_1_cp1

0xd45c,	// (0x0003294b) ai_gene_pane_2_cp1

0x5624,	// (0x0002ab13) list_single_idle_plugin_calendar_pane

0x562d,	// (0x0002ab1c) list_single_idle_plugin_notification_pane

0x5636,	// (0x0002ab25) list_single_idle_plugin_player_pane

0xb717,	// (0x00030c06) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb717,	// (0x00030c06) list_single_idle_plugin_shortcut_pane

0xb73f,	// (0x00030c2e) main_idle_act4_pane_t1

0xb755,	// (0x00030c44) main_idle_act4_pane_t2

0x0001,

0xfb38,	// (0x00035027) main_idle_act4_pane_t

0xb76d,	// (0x00030c5c) middle_sk_idle_act4_pane_ParamLimits

0xb76d,	// (0x00030c5c) middle_sk_idle_act4_pane

0xb789,	// (0x00030c78) popup_clock_digital_analogue_window_cp2

0xb7b0,	// (0x00030c9f) shortcut_wheel_idle_act4_pane_ParamLimits

0xb7b0,	// (0x00030c9f) shortcut_wheel_idle_act4_pane

0x2f1a,	// (0x00028409) shortcut_wheel_idle_act4_pane_g1

0x2f1a,	// (0x00028409) shortcut_wheel_idle_act4_pane_g2

0x2f1a,	// (0x00028409) shortcut_wheel_idle_act4_pane_g3

0x2f1a,	// (0x00028409) shortcut_wheel_idle_act4_pane_g4

0x2f1a,	// (0x00028409) shortcut_wheel_idle_act4_pane_g5

0x56c9,	// (0x0002abb8) shortcut_wheel_idle_act4_pane_g6

0x56d1,	// (0x0002abc0) shortcut_wheel_idle_act4_pane_g7

0x56d9,	// (0x0002abc8) shortcut_wheel_idle_act4_pane_g8

0x56e1,	// (0x0002abd0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfb3d,	// (0x0003502c) shortcut_wheel_idle_act4_pane_g

0x8d5f,	// (0x0002e24e) middle_sk_idle_act4_pane_g1_ParamLimits

0x8d5f,	// (0x0002e24e) middle_sk_idle_act4_pane_g1

0xb82d,	// (0x00030d1c) middle_sk_idle_act4_pane_g2_ParamLimits

0xb82d,	// (0x00030d1c) middle_sk_idle_act4_pane_g2

0x0001,

0xfb60,	// (0x0003504f) middle_sk_idle_act4_pane_g_ParamLimits

0xfb60,	// (0x0003504f) middle_sk_idle_act4_pane_g

0xb845,	// (0x00030d34) middle_sk_idle_act4_pane_t1_ParamLimits

0xb845,	// (0x00030d34) middle_sk_idle_act4_pane_t1

0xb874,	// (0x00030d63) grid_ai_shortcut_pane_ParamLimits

0xb874,	// (0x00030d63) grid_ai_shortcut_pane

0xb891,	// (0x00030d80) list_highlight_pane_cp16_ParamLimits

0xb891,	// (0x00030d80) list_highlight_pane_cp16

0xb89e,	// (0x00030d8d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb89e,	// (0x00030d8d) list_single_idle_plugin_shortcut_pane_g1

0xb8aa,	// (0x00030d99) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb8aa,	// (0x00030d99) list_single_idle_plugin_shortcut_pane_g2

0xb8c6,	// (0x00030db5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb8c6,	// (0x00030db5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfb65,	// (0x00035054) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfb65,	// (0x00035054) list_single_idle_plugin_shortcut_pane_g

0xb8db,	// (0x00030dca) cell_ai_shortcut_pane_ParamLimits

0xb8db,	// (0x00030dca) cell_ai_shortcut_pane

0xb8f1,	// (0x00030de0) cell_ai_shortcut_pane_g1_ParamLimits

0xb8f1,	// (0x00030de0) cell_ai_shortcut_pane_g1

0x561c,	// (0x0002ab0b) ai_gene_pane_1_cp2

0x580e,	// (0x0002acfd) ai_gene_pane_2_cp2

0x5816,	// (0x0002ad05) list_highlight_pane_cp15

0x581f,	// (0x0002ad0e) list_single_idle_plugin_calendar_pane_g1

0x5816,	// (0x0002ad05) list_highlight_pane_cp17

0x5827,	// (0x0002ad16) list_single_idle_plugin_calendar_pane_g1_copy1

0x582f,	// (0x0002ad1e) list_single_idle_plugin_player_pane_g1

0xed69,	// (0x00034258) list_single_idle_plugin_player_pane_g2

0x0001,

0xfb6c,	// (0x0003505b) list_single_idle_plugin_player_pane_g

0x5837,	// (0x0002ad26) list_single_idle_plugin_player_pane_t1

0x5845,	// (0x0002ad34) list_single_idle_plugin_player_pane_t2

0x5853,	// (0x0002ad42) list_single_idle_plugin_player_pane_t3

0x5861,	// (0x0002ad50) list_single_idle_plugin_player_pane_t4

0x0003,

0xfb71,	// (0x00035060) list_single_idle_plugin_player_pane_t

0x586f,	// (0x0002ad5e) wait_bar_pane_cp15

0x5877,	// (0x0002ad66) grid_ai_notification_pane

0xed69,	// (0x00034258) list_single_idle_plugin_notification_pane_g1

0xb913,	// (0x00030e02) cell_ai_notification_pane_ParamLimits

0xb913,	// (0x00030e02) cell_ai_notification_pane

0x588d,	// (0x0002ad7c) cell_ai_notification_pane_g1

0x5895,	// (0x0002ad84) cell_ai_notification_pane_t1

0xb920,	// (0x00030e0f) tb_ext_find_button_pane

0xb928,	// (0x00030e17) tb_ext_find_pane_g1

0xb930,	// (0x00030e1f) tb_ext_find_pane_t1

0xcecb,	// (0x000323ba) tb_ext_find_button_pane_g1

0x58c1,	// (0x0002adb0) tb_ext_find_button_pane_g2

0x0001,

0xfb7a,	// (0x00035069) tb_ext_find_button_pane_g

0xb73f,	// (0x00030c2e) main_idle_act4_pane_t1_ParamLimits

0xb755,	// (0x00030c44) main_idle_act4_pane_t2_ParamLimits

0xfb38,	// (0x00035027) main_idle_act4_pane_t_ParamLimits

0xb789,	// (0x00030c78) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb7a0,	// (0x00030c8f) sat_plugin_idle_act4_pane_ParamLimits

0xb7a0,	// (0x00030c8f) sat_plugin_idle_act4_pane

0xb93e,	// (0x00030e2d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb93e,	// (0x00030e2d) sat_plugin_idle_act4_pane_t1

0xb956,	// (0x00030e45) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb956,	// (0x00030e45) sat_plugin_idle_act4_pane_t2

0xb96e,	// (0x00030e5d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb96e,	// (0x00030e5d) sat_plugin_idle_act4_pane_t3

0xb986,	// (0x00030e75) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb986,	// (0x00030e75) sat_plugin_idle_act4_pane_t4

0x0003,

0xfb7f,	// (0x0003506e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfb7f,	// (0x0003506e) sat_plugin_idle_act4_pane_t

0x0bd4,	// (0x000260c3) popup_battery_window_ParamLimits

0x0bd4,	// (0x000260c3) popup_battery_window

0xc484,	// (0x00031973) bg_popup_sub_pane_cp25_ParamLimits

0xc484,	// (0x00031973) bg_popup_sub_pane_cp25

0x5916,	// (0x0002ae05) popup_battery_window_g1_ParamLimits

0x5916,	// (0x0002ae05) popup_battery_window_g1

0x5922,	// (0x0002ae11) popup_battery_window_t1_ParamLimits

0x5922,	// (0x0002ae11) popup_battery_window_t1

0x5934,	// (0x0002ae23) popup_battery_window_t2_ParamLimits

0x5934,	// (0x0002ae23) popup_battery_window_t2

0x0001,

0xfb88,	// (0x00035077) popup_battery_window_t_ParamLimits

0xfb88,	// (0x00035077) popup_battery_window_t

0x9cf2,	// (0x0002f1e1) midp_canvas_pane_ParamLimits

0x9d4f,	// (0x0002f23e) midp_keypad_pane_ParamLimits

0x9d4f,	// (0x0002f23e) midp_keypad_pane

0xcaef,	// (0x00031fde) main_midp_pane_ParamLimits

0xf385,	// (0x00034874) signal_pane_g2_cp_ParamLimits

0xb99e,	// (0x00030e8d) aid_size_cell_midp_keypad_ParamLimits

0xb99e,	// (0x00030e8d) aid_size_cell_midp_keypad

0xb9bc,	// (0x00030eab) midp_keyp_game_grid_pane_ParamLimits

0xb9bc,	// (0x00030eab) midp_keyp_game_grid_pane

0xb9e3,	// (0x00030ed2) midp_keyp_rocker_pane_ParamLimits

0xb9e3,	// (0x00030ed2) midp_keyp_rocker_pane

0xba3c,	// (0x00030f2b) midp_keyp_sk_left_pane_ParamLimits

0xba3c,	// (0x00030f2b) midp_keyp_sk_left_pane

0xba90,	// (0x00030f7f) midp_keyp_sk_right_pane_ParamLimits

0xba90,	// (0x00030f7f) midp_keyp_sk_right_pane

0xc2d8,	// (0x000317c7) bg_button_pane_cp03

0xbae4,	// (0x00030fd3) midp_keyp_sk_left_pane_g1

0xc2d8,	// (0x000317c7) bg_button_pane_cp04

0xbae4,	// (0x00030fd3) midp_keyp_sk_right_pane_g1

0x2f1a,	// (0x00028409) midp_keyp_rocker_pane_g1

0xbaed,	// (0x00030fdc) keyp_game_cell_pane_ParamLimits

0xbaed,	// (0x00030fdc) keyp_game_cell_pane

0xc2d8,	// (0x000317c7) bg_button_pane_cp02

0xbb11,	// (0x00031000) keyp_game_cell_pane_g1

0x887a,	// (0x0002dd69) popup_fep_vkb2_window_ParamLimits

0x887a,	// (0x0002dd69) popup_fep_vkb2_window

0x8d6d,	// (0x0002e25c) aid_size_cell_vkb2_ParamLimits

0x8d6d,	// (0x0002e25c) aid_size_cell_vkb2

0x8da3,	// (0x0002e292) popup_fep_vkb2_window_g1_ParamLimits

0x8da3,	// (0x0002e292) popup_fep_vkb2_window_g1

0x8dea,	// (0x0002e2d9) vkb2_area_bottom_pane_ParamLimits

0x8dea,	// (0x0002e2d9) vkb2_area_bottom_pane

0x8e3e,	// (0x0002e32d) vkb2_area_keypad_pane_ParamLimits

0x8e3e,	// (0x0002e32d) vkb2_area_keypad_pane

0x8e86,	// (0x0002e375) vkb2_area_top_pane_ParamLimits

0x8e86,	// (0x0002e375) vkb2_area_top_pane

0x8f0c,	// (0x0002e3fb) vkb2_top_entry_pane_ParamLimits

0x8f0c,	// (0x0002e3fb) vkb2_top_entry_pane

0x8f39,	// (0x0002e428) vkb2_top_grid_left_pane_ParamLimits

0x8f39,	// (0x0002e428) vkb2_top_grid_left_pane

0x8f59,	// (0x0002e448) vkb2_top_grid_right_pane_ParamLimits

0x8f59,	// (0x0002e448) vkb2_top_grid_right_pane

0x3d06,	// (0x000291f5) vkb2_cell_keypad_pane_ParamLimits

0x3d06,	// (0x000291f5) vkb2_cell_keypad_pane

0x8f9f,	// (0x0002e48e) vkb2_area_bottom_grid_pane_ParamLimits

0x8f9f,	// (0x0002e48e) vkb2_area_bottom_grid_pane

0x8fc9,	// (0x0002e4b8) vkb2_area_bottom_pane_g1_ParamLimits

0x8fc9,	// (0x0002e4b8) vkb2_area_bottom_pane_g1

0x8fef,	// (0x0002e4de) vkb2_area_bottom_pane_g2_ParamLimits

0x8fef,	// (0x0002e4de) vkb2_area_bottom_pane_g2

0x9020,	// (0x0002e50f) vkb2_area_bottom_pane_g3_ParamLimits

0x9020,	// (0x0002e50f) vkb2_area_bottom_pane_g3

0x0002,

0xfb8d,	// (0x0003507c) vkb2_area_bottom_pane_g_ParamLimits

0xfb8d,	// (0x0003507c) vkb2_area_bottom_pane_g

0x3eb0,	// (0x0002939f) vkb2_top_cell_left_pane_ParamLimits

0x3eb0,	// (0x0002939f) vkb2_top_cell_left_pane

0xbb1a,	// (0x00031009) vkb2_top_entry_pane_g1_ParamLimits

0xbb1a,	// (0x00031009) vkb2_top_entry_pane_g1

0xbb28,	// (0x00031017) vkb2_top_entry_pane_t1_ParamLimits

0xbb28,	// (0x00031017) vkb2_top_entry_pane_t1

0x5aa5,	// (0x0002af94) vkb2_top_entry_pane_t2_ParamLimits

0x5aa5,	// (0x0002af94) vkb2_top_entry_pane_t2

0x5ad7,	// (0x0002afc6) vkb2_top_entry_pane_t3_ParamLimits

0x5ad7,	// (0x0002afc6) vkb2_top_entry_pane_t3

0x0002,

0xfb94,	// (0x00035083) vkb2_top_entry_pane_t_ParamLimits

0xfb94,	// (0x00035083) vkb2_top_entry_pane_t

0x908a,	// (0x0002e579) vkb2_top_grid_right_pane_g1_ParamLimits

0x908a,	// (0x0002e579) vkb2_top_grid_right_pane_g1

0x3f13,	// (0x00029402) vkb2_top_grid_right_pane_g2_ParamLimits

0x3f13,	// (0x00029402) vkb2_top_grid_right_pane_g2

0x3f2b,	// (0x0002941a) vkb2_top_grid_right_pane_g3_ParamLimits

0x3f2b,	// (0x0002941a) vkb2_top_grid_right_pane_g3

0x90a0,	// (0x0002e58f) vkb2_top_grid_right_pane_g4_ParamLimits

0x90a0,	// (0x0002e58f) vkb2_top_grid_right_pane_g4

0x0003,

0xfb9b,	// (0x0003508a) vkb2_top_grid_right_pane_g_ParamLimits

0xfb9b,	// (0x0003508a) vkb2_top_grid_right_pane_g

0x3f59,	// (0x00029448) vkb2_top_cell_left_pane_g1

0x3f70,	// (0x0002945f) vkb2_cell_keypad_pane_g1_ParamLimits

0x3f70,	// (0x0002945f) vkb2_cell_keypad_pane_g1

0x5afb,	// (0x0002afea) vkb2_cell_keypad_pane_t1_ParamLimits

0x5afb,	// (0x0002afea) vkb2_cell_keypad_pane_t1

0x3f7e,	// (0x0002946d) vkb2_cell_bottom_grid_pane_ParamLimits

0x3f7e,	// (0x0002946d) vkb2_cell_bottom_grid_pane

0x3fb7,	// (0x000294a6) vkb2_cell_bottom_grid_pane_g1

0xb7d1,	// (0x00030cc0) aid_call2_pane_cp02

0xb7d9,	// (0x00030cc8) aid_call_pane_cp02

0xb7e1,	// (0x00030cd0) clock_digital_number_pane_cp10

0xb7e9,	// (0x00030cd8) clock_digital_number_pane_cp11

0xb7f1,	// (0x00030ce0) clock_digital_number_pane_cp12

0xb7f9,	// (0x00030ce8) clock_digital_number_pane_cp13

0xb801,	// (0x00030cf0) clock_digital_separator_pane_cp10

0xcecb,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g1

0xcecb,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g2

0xb809,	// (0x00030cf8) popup_clock_digital_analogue_window_cp2_g3

0xcecb,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g4

0xb809,	// (0x00030cf8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfb50,	// (0x0003503f) popup_clock_digital_analogue_window_cp2_g

0xb811,	// (0x00030d00) popup_clock_digital_analogue_window_cp2_t1

0xb81f,	// (0x00030d0e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfb5b,	// (0x0003504a) popup_clock_digital_analogue_window_cp2_t

0x2f1a,	// (0x00028409) clock_digital_number_pane_cp10_g1

0x2f1a,	// (0x00028409) clock_digital_number_pane_cp10_g2

0x0001,

0xf954,	// (0x00034e43) clock_digital_number_pane_cp10_g

0x2f1a,	// (0x00028409) clock_digital_separator_pane_cp10_g1

0x2f1a,	// (0x00028409) clock_digital_separator_pane_cp10_g2

0x0001,

0xf954,	// (0x00034e43) clock_digital_separator_pane_cp10_g

0x5566,	// (0x0002aa55) uniindi_top_pane_g3

0x5577,	// (0x0002aa66) uniindi_top_pane_g4

0x3d91,	// (0x00029280) vkb2_row_keypad_pane_ParamLimits

0x3d91,	// (0x00029280) vkb2_row_keypad_pane

0x3fd7,	// (0x000294c6) vkb2_cell_t_keypad_pane_ParamLimits

0x3fd7,	// (0x000294c6) vkb2_cell_t_keypad_pane

0x3fe7,	// (0x000294d6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3fe7,	// (0x000294d6) vkb2_cell_t_keypad_pane_cp08

0x3ffa,	// (0x000294e9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3ffa,	// (0x000294e9) vkb2_cell_t_keypad_pane_cp09

0x400e,	// (0x000294fd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x400e,	// (0x000294fd) vkb2_cell_t_keypad_pane_cp01

0x401f,	// (0x0002950e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x401f,	// (0x0002950e) vkb2_cell_t_keypad_pane_cp02

0x4030,	// (0x0002951f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x4030,	// (0x0002951f) vkb2_cell_t_keypad_pane_cp03

0x4041,	// (0x00029530) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x4041,	// (0x00029530) vkb2_cell_t_keypad_pane_cp04

0x4052,	// (0x00029541) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4052,	// (0x00029541) vkb2_cell_t_keypad_pane_cp05

0x4063,	// (0x00029552) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x4063,	// (0x00029552) vkb2_cell_t_keypad_pane_cp06

0x4074,	// (0x00029563) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x4074,	// (0x00029563) vkb2_cell_t_keypad_pane_cp07

0x4085,	// (0x00029574) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4085,	// (0x00029574) vkb2_cell_t_keypad_pane_cp10

0x3737,	// (0x00028c26) vkb2_cell_t_keypad_pane_g1

0x5b12,	// (0x0002b001) vkb2_cell_t_keypad_pane_t1

0x0b0f,	// (0x00025ffe) popup_grid_graphic2_window

0xbb61,	// (0x00031050) aid_size_cell_graphic2_ParamLimits

0xbb61,	// (0x00031050) aid_size_cell_graphic2

0xde9e,	// (0x0003338d) bg_popup_window_pane_cp21_ParamLimits

0xde9e,	// (0x0003338d) bg_popup_window_pane_cp21

0xbb93,	// (0x00031082) graphic2_pages_pane_ParamLimits

0xbb93,	// (0x00031082) graphic2_pages_pane

0xbbe9,	// (0x000310d8) grid_graphic2_control_pane_ParamLimits

0xbbe9,	// (0x000310d8) grid_graphic2_control_pane

0xbc1d,	// (0x0003110c) grid_graphic2_pane_ParamLimits

0xbc1d,	// (0x0003110c) grid_graphic2_pane

0xbc90,	// (0x0003117f) cell_graphic2_pane

0xc2d8,	// (0x000317c7) main_comp_mode_pane

0x4dc9,	// (0x0002a2b8) list_ai3_gene_pane_ParamLimits

0xb512,	// (0x00030a01) bg_popup_window_pane_cp19_ParamLimits

0x51b8,	// (0x0002a6a7) bg_touch_area_indi_pane_ParamLimits

0x51b8,	// (0x0002a6a7) bg_touch_area_indi_pane

0x51ce,	// (0x0002a6bd) bg_touch_area_indi_pane_cp01_ParamLimits

0x51ce,	// (0x0002a6bd) bg_touch_area_indi_pane_cp01

0x51e4,	// (0x0002a6d3) bg_touch_area_indi_pane_cp02_ParamLimits

0x51e4,	// (0x0002a6d3) bg_touch_area_indi_pane_cp02

0x51fc,	// (0x0002a6eb) bg_touch_area_indi_pane_cp03_ParamLimits

0x51fc,	// (0x0002a6eb) bg_touch_area_indi_pane_cp03

0x5216,	// (0x0002a705) popup_slider_window_g1_ParamLimits

0x5232,	// (0x0002a721) popup_slider_window_g2_ParamLimits

0x524e,	// (0x0002a73d) popup_slider_window_g3_ParamLimits

0xfaf6,	// (0x00034fe5) popup_slider_window_g_ParamLimits

0x52aa,	// (0x0002a799) popup_slider_window_t1_ParamLimits

0x531e,	// (0x0002a80d) small_volume_slider_vertical_pane_ParamLimits

0xbc90,	// (0x0003117f) cell_graphic2_pane_ParamLimits

0xbceb,	// (0x000311da) bg_button_pane_cp10_ParamLimits

0xbceb,	// (0x000311da) bg_button_pane_cp10

0xbcfe,	// (0x000311ed) bg_button_pane_cp11_ParamLimits

0xbcfe,	// (0x000311ed) bg_button_pane_cp11

0xbd11,	// (0x00031200) graphic2_pages_pane_g1_ParamLimits

0xbd11,	// (0x00031200) graphic2_pages_pane_g1

0xbd2c,	// (0x0003121b) graphic2_pages_pane_g2_ParamLimits

0xbd2c,	// (0x0003121b) graphic2_pages_pane_g2

0x0001,

0xfba9,	// (0x00035098) graphic2_pages_pane_g_ParamLimits

0xfba9,	// (0x00035098) graphic2_pages_pane_g

0xbd44,	// (0x00031233) graphic2_pages_pane_t1_ParamLimits

0xbd44,	// (0x00031233) graphic2_pages_pane_t1

0xbd69,	// (0x00031258) cell_graphic2_control_pane_ParamLimits

0xbd69,	// (0x00031258) cell_graphic2_control_pane

0xbd83,	// (0x00031272) cell_graphic2_pane_g1_ParamLimits

0xbd83,	// (0x00031272) cell_graphic2_pane_g1

0x90b6,	// (0x0002e5a5) cell_graphic2_pane_g2_ParamLimits

0x90b6,	// (0x0002e5a5) cell_graphic2_pane_g2

0xbd5c,	// (0x0003124b) cell_graphic2_pane_g3_ParamLimits

0xbd5c,	// (0x0003124b) cell_graphic2_pane_g3

0x90c3,	// (0x0002e5b2) cell_graphic2_pane_g4_ParamLimits

0x90c3,	// (0x0002e5b2) cell_graphic2_pane_g4

0xbd90,	// (0x0003127f) cell_graphic2_pane_g5_ParamLimits

0xbd90,	// (0x0003127f) cell_graphic2_pane_g5

0x0004,

0xfbae,	// (0x0003509d) cell_graphic2_pane_g_ParamLimits

0xfbae,	// (0x0003509d) cell_graphic2_pane_g

0xbdb0,	// (0x0003129f) cell_graphic2_pane_t1_ParamLimits

0xbdb0,	// (0x0003129f) cell_graphic2_pane_t1

0xe4d2,	// (0x000339c1) grid_highlight_pane_cp11_ParamLimits

0xe4d2,	// (0x000339c1) grid_highlight_pane_cp11

0xc998,	// (0x00031e87) bg_button_pane_cp05

0xbdc7,	// (0x000312b6) cell_graphic2_control_pane_g1

0x2f1a,	// (0x00028409) bg_touch_area_indi_pane_g1

0x5b24,	// (0x0002b013) aid_cmod_rocker_key_size

0x5b2e,	// (0x0002b01d) aid_cmode_itu_key_size

0x5b38,	// (0x0002b027) main_cmode_video_pane

0x5b42,	// (0x0002b031) main_comp_mode_itu_pane

0x5b4e,	// (0x0002b03d) main_comp_mode_rocker_pane

0x5b5a,	// (0x0002b049) cell_cmode_rocker_pane_ParamLimits

0x5b5a,	// (0x0002b049) cell_cmode_rocker_pane

0x5b6c,	// (0x0002b05b) cell_cmode_itu_pane_ParamLimits

0x5b6c,	// (0x0002b05b) cell_cmode_itu_pane

0xc998,	// (0x00031e87) bg_button_pane_cp06_ParamLimits

0xc998,	// (0x00031e87) bg_button_pane_cp06

0x33ba,	// (0x000288a9) cell_cmode_rocker_pane_g1_ParamLimits

0x33ba,	// (0x000288a9) cell_cmode_rocker_pane_g1

0x53c2,	// (0x0002a8b1) cell_cmode_rocker_pane_g2_ParamLimits

0x53c2,	// (0x0002a8b1) cell_cmode_rocker_pane_g2

0x0001,

0xfbb9,	// (0x000350a8) cell_cmode_rocker_pane_g_ParamLimits

0xfbb9,	// (0x000350a8) cell_cmode_rocker_pane_g

0xc2d8,	// (0x000317c7) bg_button_pane_cp07

0x5b81,	// (0x0002b070) cell_cmode_itu_pane_g1

0x5b8a,	// (0x0002b079) cell_cmode_itu_pane_t1

0x5b98,	// (0x0002b087) cell_cmode_itu_pane_t2

0x0001,

0xfbbe,	// (0x000350ad) cell_cmode_itu_pane_t

0x55e8,	// (0x0002aad7) aid_touch_ctrl_left

0x55f0,	// (0x0002aadf) aid_touch_ctrl_right

0xc2d8,	// (0x000317c7) compa_mode_pane

0xbdd4,	// (0x000312c3) aid_cmod_rocker_key_size_cp

0xbdde,	// (0x000312cd) aid_cmode_itu_key_size_cp

0x5ba6,	// (0x0002b095) compa_mode_pane_g1

0x5bae,	// (0x0002b09d) compa_mode_pane_g2

0x5bb6,	// (0x0002b0a5) compa_mode_pane_g3

0x0002,

0xfbc3,	// (0x000350b2) compa_mode_pane_g

0xbde8,	// (0x000312d7) main_comp_mode_itu_pane_cp

0xbdf0,	// (0x000312df) main_comp_mode_rocker_pane_cp

0xbdf8,	// (0x000312e7) cell_cmode_itu_pane_cp_ParamLimits

0xbdf8,	// (0x000312e7) cell_cmode_itu_pane_cp

0xbe0d,	// (0x000312fc) cell_cmode_rocker_pane_cp_ParamLimits

0xbe0d,	// (0x000312fc) cell_cmode_rocker_pane_cp

0xc998,	// (0x00031e87) bg_button_pane_cp06_cp_ParamLimits

0xc998,	// (0x00031e87) bg_button_pane_cp06_cp

0x33ba,	// (0x000288a9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x33ba,	// (0x000288a9) cell_cmode_rocker_pane_g1_cp

0x2f1a,	// (0x00028409) cell_cmode_rocker_pane_g2_cp

0xc2d8,	// (0x000317c7) bg_button_pane_cp07_cp

0xbe1f,	// (0x0003130e) cell_cmode_itu_pane_g1_cp

0xbe28,	// (0x00031317) cell_cmode_itu_pane_t1_cp

0xbe28,	// (0x00031317) cell_cmode_itu_pane_t2_cp

0xac56,	// (0x00030145) settings_code_pane_cp2

0xc348,	// (0x00031837) bg_popup_window_pane_cp3_ParamLimits

0xc652,	// (0x00031b41) heading_pane_cp3_ParamLimits

0xc65e,	// (0x00031b4d) listscroll_popup_graphic_pane_ParamLimits

0x2f98,	// (0x00028487) fep_hwr_aid_pane_ParamLimits

0x3a5b,	// (0x00028f4a) aid_touch_sctrl_top_ParamLimits

0x3a76,	// (0x00028f65) sctrl_sk_top_pane_g1_ParamLimits

0x3737,	// (0x00028c26) sctrl_sk_top_pane_g2_ParamLimits

0xfb0f,	// (0x00034ffe) sctrl_sk_top_pane_g_ParamLimits

0x3a83,	// (0x00028f72) sctrl_sk_top_pane_t1_ParamLimits

0x3a5b,	// (0x00028f4a) aid_touch_sctrl_bottom_ParamLimits

0x3a83,	// (0x00028f72) sctrl_sk_bottom_pane_t1_ParamLimits

0x5532,	// (0x0002aa21) aid_area_touch_clock

0x8ece,	// (0x0002e3bd) aid_vkb2_area_top_pane_cell_ParamLimits

0x8ece,	// (0x0002e3bd) aid_vkb2_area_top_pane_cell

0x8f79,	// (0x0002e468) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f79,	// (0x0002e468) aid_vkb2_area_bottom_pane_cell

0x5a9d,	// (0x0002af8c) popup_char_count_window

0x5bbe,	// (0x0002b0ad) popup_char_count_window_g1

0x5bc7,	// (0x0002b0b6) popup_char_count_window_g2

0x5bd0,	// (0x0002b0bf) popup_char_count_window_g3

0x0002,

0xfbca,	// (0x000350b9) popup_char_count_window_g

0x5bd9,	// (0x0002b0c8) popup_char_count_window_t1

0x3b36,	// (0x00029025) popup_fep_char_preview_window_ParamLimits

0x3b36,	// (0x00029025) popup_fep_char_preview_window

0x8eee,	// (0x0002e3dd) vkb2_top_candi_pane_ParamLimits

0x8eee,	// (0x0002e3dd) vkb2_top_candi_pane

0xbe36,	// (0x00031325) cell_vkb2_top_candi_pane_ParamLimits

0xbe36,	// (0x00031325) cell_vkb2_top_candi_pane

0x40a8,	// (0x00029597) bg_popup_fep_char_preview_window_ParamLimits

0x40a8,	// (0x00029597) bg_popup_fep_char_preview_window

0x40b6,	// (0x000295a5) popup_fep_char_preview_window_t1_ParamLimits

0x40b6,	// (0x000295a5) popup_fep_char_preview_window_t1

0x5be7,	// (0x0002b0d6) bg_popup_fep_char_preview_window_g1

0x5bef,	// (0x0002b0de) bg_popup_fep_char_preview_window_g2

0x5bf7,	// (0x0002b0e6) bg_popup_fep_char_preview_window_g3

0x5bff,	// (0x0002b0ee) bg_popup_fep_char_preview_window_g4

0x5c07,	// (0x0002b0f6) bg_popup_fep_char_preview_window_g5

0x40f0,	// (0x000295df) bg_popup_fep_char_preview_window_g6

0x5c0f,	// (0x0002b0fe) bg_popup_fep_char_preview_window_g7

0x5c17,	// (0x0002b106) bg_popup_fep_char_preview_window_g8

0x5c1f,	// (0x0002b10e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfbd1,	// (0x000350c0) bg_popup_fep_char_preview_window_g

0x3737,	// (0x00028c26) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3737,	// (0x00028c26) cell_vkb2_top_candi_pane_g1

0x3745,	// (0x00028c34) cell_vkb2_top_candi_pane_g2_ParamLimits

0x3745,	// (0x00028c34) cell_vkb2_top_candi_pane_g2

0x42aa,	// (0x00029799) cell_vkb2_top_candi_pane_g3_ParamLimits

0x42aa,	// (0x00029799) cell_vkb2_top_candi_pane_g3

0x40f8,	// (0x000295e7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x40f8,	// (0x000295e7) cell_vkb2_top_candi_pane_g4

0x4376,	// (0x00029865) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4376,	// (0x00029865) cell_vkb2_top_candi_pane_g5

0x4119,	// (0x00029608) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4119,	// (0x00029608) cell_vkb2_top_candi_pane_g6

0x0005,

0xfbe4,	// (0x000350d3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfbe4,	// (0x000350d3) cell_vkb2_top_candi_pane_g

0x4127,	// (0x00029616) cell_vkb2_top_candi_pane_t1

0x26d1,	// (0x00027bc0) aid_size_touch_slider_mark_ParamLimits

0x26d1,	// (0x00027bc0) aid_size_touch_slider_mark

0xbbcf,	// (0x000310be) grid_graphic2_catg_pane_ParamLimits

0xbbcf,	// (0x000310be) grid_graphic2_catg_pane

0xbc63,	// (0x00031152) popup_grid_graphic2_window_t1_ParamLimits

0xbc63,	// (0x00031152) popup_grid_graphic2_window_t1

0xbc79,	// (0x00031168) popup_grid_graphic2_window_t2_ParamLimits

0xbc79,	// (0x00031168) popup_grid_graphic2_window_t2

0x0001,

0xfba4,	// (0x00035093) popup_grid_graphic2_window_t_ParamLimits

0xfba4,	// (0x00035093) popup_grid_graphic2_window_t

0xc998,	// (0x00031e87) bg_button_pane_cp05_ParamLimits

0xbdc7,	// (0x000312b6) cell_graphic2_control_pane_g1_ParamLimits

0xbe9c,	// (0x0003138b) cell_graphic2_catg_pane_ParamLimits

0xbe9c,	// (0x0003138b) cell_graphic2_catg_pane

0xc2d8,	// (0x000317c7) bg_button_pane_cp12

0xbeae,	// (0x0003139d) cell_graphic2_catg_pane_g1

0x54fe,	// (0x0002a9ed) cell_tb_ext_pane_t1_ParamLimits

0x3ed0,	// (0x000293bf) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3ed0,	// (0x000293bf) vkb2_top_cell_right_narrow_pane

0x3ee8,	// (0x000293d7) vkb2_top_cell_right_wide_pane_ParamLimits

0x3ee8,	// (0x000293d7) vkb2_top_cell_right_wide_pane

0x2f8a,	// (0x00028479) bg_vkb2_func_pane_ParamLimits

0x2f8a,	// (0x00028479) bg_vkb2_func_pane

0x3f59,	// (0x00029448) vkb2_top_cell_left_pane_g1_ParamLimits

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp03

0x3fb7,	// (0x000294a6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd92a,	// (0x00032e19) bg_vkb2_func_pane_g1

0xd932,	// (0x00032e21) bg_vkb2_func_pane_g2

0xd942,	// (0x00032e31) bg_vkb2_func_pane_g3

0xd93a,	// (0x00032e29) bg_vkb2_func_pane_g4

0xd94a,	// (0x00032e39) bg_vkb2_func_pane_g5

0xd952,	// (0x00032e41) bg_vkb2_func_pane_g6

0xd95a,	// (0x00032e49) bg_vkb2_func_pane_g7

0xd962,	// (0x00032e51) bg_vkb2_func_pane_g8

0xd922,	// (0x00032e11) bg_vkb2_func_pane_g9

0x0008,

0x07ec,	// (0x00025cdb) bg_vkb2_func_pane_g

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp01

0x3f59,	// (0x00029448) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3f59,	// (0x00029448) vkb2_top_cell_right_wide_pane_g1

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2f8a,	// (0x00028479) bg_vkb2_fuc_pane_cp02

0x3fb7,	// (0x000294a6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3fb7,	// (0x000294a6) vkb2_top_cell_right_narrow_pane_g1

0xb44c,	// (0x0003093b) aid_touch_area_decrease_ParamLimits

0xb44c,	// (0x0003093b) aid_touch_area_decrease

0xb486,	// (0x00030975) aid_touch_area_increase_ParamLimits

0xb486,	// (0x00030975) aid_touch_area_increase

0xb4ae,	// (0x0003099d) aid_touch_area_mute_ParamLimits

0xb4ae,	// (0x0003099d) aid_touch_area_mute

0xb4de,	// (0x000309cd) aid_touch_area_slider_ParamLimits

0xb4de,	// (0x000309cd) aid_touch_area_slider

0xb51e,	// (0x00030a0d) popup_slider_window_g4_ParamLimits

0xb51e,	// (0x00030a0d) popup_slider_window_g4

0xb546,	// (0x00030a35) popup_slider_window_g5_ParamLimits

0xb546,	// (0x00030a35) popup_slider_window_g5

0xb57a,	// (0x00030a69) popup_slider_window_g6_ParamLimits

0xb57a,	// (0x00030a69) popup_slider_window_g6

0x52d8,	// (0x0002a7c7) popup_slider_window_t2_ParamLimits

0x52d8,	// (0x0002a7c7) popup_slider_window_t2

0x0001,

0xfb03,	// (0x00034ff2) popup_slider_window_t_ParamLimits

0xfb03,	// (0x00034ff2) popup_slider_window_t

0xb596,	// (0x00030a85) slider_pane_ParamLimits

0xb596,	// (0x00030a85) slider_pane

0x5c27,	// (0x0002b116) slider_pane_g1_ParamLimits

0x5c27,	// (0x0002b116) slider_pane_g1

0x5c3b,	// (0x0002b12a) slider_pane_g2_ParamLimits

0x5c3b,	// (0x0002b12a) slider_pane_g2

0x5c51,	// (0x0002b140) slider_pane_g3_ParamLimits

0x5c51,	// (0x0002b140) slider_pane_g3

0x0003,

0xfbf1,	// (0x000350e0) slider_pane_g_ParamLimits

0xfbf1,	// (0x000350e0) slider_pane_g

0xa3e2,	// (0x0002f8d1) popup_tb_float_extension_window_ParamLimits

0xa3e2,	// (0x0002f8d1) popup_tb_float_extension_window

0x5c7d,	// (0x0002b16c) aid_size_cell_tb_float_ext

0xc2d8,	// (0x000317c7) bg_popup_sub_window_cp28

0x5c89,	// (0x0002b178) grid_tb_float_ext_pane

0x5c93,	// (0x0002b182) cell_tb_float_ext_pane_ParamLimits

0x5c93,	// (0x0002b182) cell_tb_float_ext_pane

0x5cad,	// (0x0002b19c) cell_tb_float_ext_pane_g1

0x5cb6,	// (0x0002b1a5) grid_highlight_pane_cp12

0x8cd2,	// (0x0002e1c1) cell_last_hwr_side_pane_ParamLimits

0x8cd2,	// (0x0002e1c1) cell_last_hwr_side_pane

0x2f1a,	// (0x00028409) cell_last_hwr_side_pane_g1

0x5cbf,	// (0x0002b1ae) cell_last_hwr_side_pane_g2

0x0001,

0xfbfa,	// (0x000350e9) cell_last_hwr_side_pane_g

0x9055,	// (0x0002e544) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9055,	// (0x0002e544) vkb2_area_bottom_space_btn_pane

0x3737,	// (0x00028c26) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5b12,	// (0x0002b001) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4127,	// (0x00029616) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4146,	// (0x00029635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4146,	// (0x00029635) vkb2_area_bottom_space_btn_pane_g1

0x4180,	// (0x0002966f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x4180,	// (0x0002966f) vkb2_area_bottom_space_btn_pane_g2

0x41b6,	// (0x000296a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x41b6,	// (0x000296a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfbff,	// (0x000350ee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfbff,	// (0x000350ee) vkb2_area_bottom_space_btn_pane_g

0x304d,	// (0x0002853c) cel_fep_hwr_func_pane_ParamLimits

0x304d,	// (0x0002853c) cel_fep_hwr_func_pane

0x8ca7,	// (0x0002e196) cell_hwr_side_button_pane_ParamLimits

0x8ca7,	// (0x0002e196) cell_hwr_side_button_pane

0x5532,	// (0x0002aa21) aid_area_touch_clock_ParamLimits

0xc484,	// (0x00031973) bg_uniindi_top_pane_ParamLimits

0x5544,	// (0x0002aa33) uniindi_top_pane_g1_ParamLimits

0x555a,	// (0x0002aa49) uniindi_top_pane_g2_ParamLimits

0x5566,	// (0x0002aa55) uniindi_top_pane_g3_ParamLimits

0x5577,	// (0x0002aa66) uniindi_top_pane_g4_ParamLimits

0xfb2a,	// (0x00035019) uniindi_top_pane_g_ParamLimits

0x5584,	// (0x0002aa73) uniindi_top_pane_t1_ParamLimits

0xc484,	// (0x00031973) bg_vkb2_func_pane_cp01_ParamLimits

0xc484,	// (0x00031973) bg_vkb2_func_pane_cp01

0x5cc8,	// (0x0002b1b7) cel_fep_hwr_func_pane_g1_ParamLimits

0x5cc8,	// (0x0002b1b7) cel_fep_hwr_func_pane_g1

0xc484,	// (0x00031973) bg_vkb2_func_pane_cp02_ParamLimits

0xc484,	// (0x00031973) bg_vkb2_func_pane_cp02

0x5cc8,	// (0x0002b1b7) cell_hwr_side_button_pane_g1_ParamLimits

0x5cc8,	// (0x0002b1b7) cell_hwr_side_button_pane_g1

0xd83a,	// (0x00032d29) status_pane_g4_ParamLimits

0xd83a,	// (0x00032d29) status_pane_g4

0xd852,	// (0x00032d41) status_pane_t1

0xf4f8,	// (0x000349e7) form2_midp_gauge_slider_cont_pane

0xf500,	// (0x000349ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaf12,	// (0x00030401) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaf24,	// (0x00030413) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf90e,	// (0x00034dfd) form2_midp_gauge_slider_pane_t_ParamLimits

0xf512,	// (0x00034a01) form2_midp_slider_pane_ParamLimits

0x3af6,	// (0x00028fe5) aid_size_cell_func_vkb2_ParamLimits

0x3af6,	// (0x00028fe5) aid_size_cell_func_vkb2

0x5c69,	// (0x0002b158) slider_pane_g4_ParamLimits

0x5c69,	// (0x0002b158) slider_pane_g4

0x90d0,	// (0x0002e5bf) form2_midp_gauge_slider_pane_t2_cp01

0x90de,	// (0x0002e5cd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x90de,	// (0x0002e5cd) form2_midp_gauge_slider_pane_t3_cp01

0x422b,	// (0x0002971a) form2_midp_slider_pane_cp01

0xc2d8,	// (0x000317c7) navi_smil_pane

0x5cf8,	// (0x0002b1e7) navi_smil_pane_g1

0x5d00,	// (0x0002b1ef) navi_smil_pane_t1

0x5cd6,	// (0x0002b1c5) form2_midp_slider_pane_g1

0x5cdf,	// (0x0002b1ce) form2_midp_slider_pane_g2

0x5ce7,	// (0x0002b1d6) form2_midp_slider_pane_g3

0x5cd6,	// (0x0002b1c5) form2_midp_slider_pane_g4

0xbeb7,	// (0x000313a6) form2_midp_slider_pane_g5

0x0004,

0xfc08,	// (0x000350f7) form2_midp_slider_pane_g

0x41f0,	// (0x000296df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x41f0,	// (0x000296df) vkb2_area_bottom_space_btn_pane_g4

0xa5be,	// (0x0002faad) lc0_navi_pane_ParamLimits

0xa5be,	// (0x0002faad) lc0_navi_pane

0xa628,	// (0x0002fb17) lc0_stat_indi_pane_ParamLimits

0xa628,	// (0x0002fb17) lc0_stat_indi_pane

0xa63d,	// (0x0002fb2c) ls0_title_pane_ParamLimits

0xa63d,	// (0x0002fb2c) ls0_title_pane

0xc998,	// (0x00031e87) bg_popup_sub_pane_cp14_ParamLimits

0x5519,	// (0x0002aa08) list_uniindi_pane_ParamLimits

0x5525,	// (0x0002aa14) uniindi_top_pane_ParamLimits

0x55c0,	// (0x0002aaaf) list_single_uniindi_pane_g1_ParamLimits

0x55d3,	// (0x0002aac2) list_single_uniindi_pane_t1_ParamLimits

0x90fb,	// (0x0002e5ea) lc0_stat_clock_pane_ParamLimits

0x90fb,	// (0x0002e5ea) lc0_stat_clock_pane

0xbec0,	// (0x000313af) lc0_stat_indi_pane_g1_ParamLimits

0xbec0,	// (0x000313af) lc0_stat_indi_pane_g1

0xbecd,	// (0x000313bc) lc0_stat_indi_pane_g2_ParamLimits

0xbecd,	// (0x000313bc) lc0_stat_indi_pane_g2

0x0001,

0xfc13,	// (0x00035102) lc0_stat_indi_pane_g_ParamLimits

0xfc13,	// (0x00035102) lc0_stat_indi_pane_g

0x9108,	// (0x0002e5f7) lc0_uni_indicator_pane_ParamLimits

0x9108,	// (0x0002e5f7) lc0_uni_indicator_pane

0xbeda,	// (0x000313c9) ls0_title_pane_g1_ParamLimits

0xbeda,	// (0x000313c9) ls0_title_pane_g1

0xbeee,	// (0x000313dd) ls0_title_pane_t1_ParamLimits

0xbeee,	// (0x000313dd) ls0_title_pane_t1

0x9115,	// (0x0002e604) lc0_uni_indicator_pane_g1_ParamLimits

0x9115,	// (0x0002e604) lc0_uni_indicator_pane_g1

0x5d0e,	// (0x0002b1fd) lc0_stat_clock_pane_t1

0xc2d8,	// (0x000317c7) main_ai5_pane

0x5d1c,	// (0x0002b20b) ai5_sk_pane_ParamLimits

0x5d1c,	// (0x0002b20b) ai5_sk_pane

0xbf1c,	// (0x0003140b) cell_ai5_widget_pane_ParamLimits

0xbf1c,	// (0x0003140b) cell_ai5_widget_pane

0x5d29,	// (0x0002b218) aid_size_cell_widget_grid

0x5d3d,	// (0x0002b22c) bg_ai5_widget_pane_ParamLimits

0x5d3d,	// (0x0002b22c) bg_ai5_widget_pane

0xbfa5,	// (0x00031494) cell_ai5_widget_pane_g2

0xbfb5,	// (0x000314a4) cell_ai5_widget_pane_g3

0xbfc9,	// (0x000314b8) cell_ai5_widget_pane_g4

0xbfd5,	// (0x000314c4) cell_ai5_widget_pane_g5

0xbfe1,	// (0x000314d0) cell_ai5_widget_pane_g6

0xbfed,	// (0x000314dc) cell_ai5_widget_pane_g7

0xc035,	// (0x00031524) cell_ai5_widget_pane_t1_ParamLimits

0xc035,	// (0x00031524) cell_ai5_widget_pane_t1

0xc052,	// (0x00031541) cell_ai5_widget_pane_t2_ParamLimits

0xc052,	// (0x00031541) cell_ai5_widget_pane_t2

0xc06a,	// (0x00031559) cell_ai5_widget_pane_t3_ParamLimits

0xc06a,	// (0x00031559) cell_ai5_widget_pane_t3

0xc082,	// (0x00031571) cell_ai5_widget_pane_t4_ParamLimits

0xc082,	// (0x00031571) cell_ai5_widget_pane_t4

0xc09c,	// (0x0003158b) cell_ai5_widget_pane_t5_ParamLimits

0xc09c,	// (0x0003158b) cell_ai5_widget_pane_t5

0x5d49,	// (0x0002b238) cell_ai5_widget_pane_t6_ParamLimits

0x5d49,	// (0x0002b238) cell_ai5_widget_pane_t6

0x5d5b,	// (0x0002b24a) cell_ai5_widget_pane_t7_ParamLimits

0x5d5b,	// (0x0002b24a) cell_ai5_widget_pane_t7

0xc0bb,	// (0x000315aa) cell_ai5_widget_pane_t8_ParamLimits

0xc0bb,	// (0x000315aa) cell_ai5_widget_pane_t8

0x0009,

0xfc18,	// (0x00035107) cell_ai5_widget_pane_t_ParamLimits

0xfc18,	// (0x00035107) cell_ai5_widget_pane_t

0xc103,	// (0x000315f2) grid_ai5_widget_pane

0xc998,	// (0x00031e87) highlight_cell_ai5_widget_pane_ParamLimits

0xc998,	// (0x00031e87) highlight_cell_ai5_widget_pane

0xc119,	// (0x00031608) ai5_sk_left_pane

0xc123,	// (0x00031612) ai5_sk_middle_pane

0xc12d,	// (0x0003161c) ai5_sk_right_pane

0x5d74,	// (0x0002b263) bg_ai5_widget_pane_g1_ParamLimits

0x5d74,	// (0x0002b263) bg_ai5_widget_pane_g1

0x5d80,	// (0x0002b26f) bg_ai5_widget_pane_g2_ParamLimits

0x5d80,	// (0x0002b26f) bg_ai5_widget_pane_g2

0x5d8c,	// (0x0002b27b) bg_ai5_widget_pane_g3_ParamLimits

0x5d8c,	// (0x0002b27b) bg_ai5_widget_pane_g3

0x5d98,	// (0x0002b287) bg_ai5_widget_pane_g4_ParamLimits

0x5d98,	// (0x0002b287) bg_ai5_widget_pane_g4

0x5da4,	// (0x0002b293) bg_ai5_widget_pane_g5_ParamLimits

0x5da4,	// (0x0002b293) bg_ai5_widget_pane_g5

0x5db0,	// (0x0002b29f) bg_ai5_widget_pane_g6_ParamLimits

0x5db0,	// (0x0002b29f) bg_ai5_widget_pane_g6

0x5dbc,	// (0x0002b2ab) bg_ai5_widget_pane_g7_ParamLimits

0x5dbc,	// (0x0002b2ab) bg_ai5_widget_pane_g7

0x5dc8,	// (0x0002b2b7) bg_ai5_widget_pane_g8_ParamLimits

0x5dc8,	// (0x0002b2b7) bg_ai5_widget_pane_g8

0x5dd4,	// (0x0002b2c3) bg_ai5_widget_pane_g9_ParamLimits

0x5dd4,	// (0x0002b2c3) bg_ai5_widget_pane_g9

0x0008,

0xfc2d,	// (0x0003511c) bg_ai5_widget_pane_g_ParamLimits

0xfc2d,	// (0x0003511c) bg_ai5_widget_pane_g

0x5e07,	// (0x0002b2f6) cell_shortcut_ai5_widget_pane_ParamLimits

0x5e07,	// (0x0002b2f6) cell_shortcut_ai5_widget_pane

0xc38d,	// (0x0003187c) bg_cell_shortcut_ai5_widget_pane

0x5e18,	// (0x0002b307) cell_grid_ai5_widget_pane_g1

0x5e21,	// (0x0002b310) highlight_cell_shortcut_ai5_widget_pane

0xd92a,	// (0x00032e19) ai5_sk_left_pane_g1

0x5e29,	// (0x0002b318) ai5_sk_left_pane_g2

0x5e31,	// (0x0002b320) ai5_sk_left_pane_g3

0x5e39,	// (0x0002b328) ai5_sk_left_pane_g4

0x0003,

0xfc40,	// (0x0003512f) ai5_sk_left_pane_g

0x5e41,	// (0x0002b330) ai5_sk_left_pane_t1

0xd932,	// (0x00032e21) ai5_sk_right_pane_g1

0x5e4f,	// (0x0002b33e) ai5_sk_right_pane_g2

0x5e57,	// (0x0002b346) ai5_sk_right_pane_g3

0x5e5f,	// (0x0002b34e) ai5_sk_right_pane_g4

0x0003,

0xfc49,	// (0x00035138) ai5_sk_right_pane_g

0x5e67,	// (0x0002b356) ai5_sk_right_pane_t1

0xd932,	// (0x00032e21) ai5_sk_middle_pane_g1

0xd92a,	// (0x00032e19) ai5_sk_middle_pane_g2

0xd94a,	// (0x00032e39) ai5_sk_middle_pane_g3

0x5e57,	// (0x0002b346) ai5_sk_middle_pane_g4

0x5e31,	// (0x0002b320) ai5_sk_middle_pane_g5

0x5e75,	// (0x0002b364) ai5_sk_middle_pane_g6

0xc137,	// (0x00031626) ai5_sk_middle_pane_g7

0x0006,

0xfc52,	// (0x00035141) ai5_sk_middle_pane_g

0xa4aa,	// (0x0002f999) aid_touch_area_size_lc0_ParamLimits

0xa4aa,	// (0x0002f999) aid_touch_area_size_lc0

0x3766,	// (0x00028c55) cell_hwr_candidate_pane_t1_ParamLimits

0xd75c,	// (0x00032c4b) aid_touch_navi_pane

0xa72f,	// (0x0002fc1e) status_dt_navi_pane_ParamLimits

0xa72f,	// (0x0002fc1e) status_dt_navi_pane

0xa747,	// (0x0002fc36) status_dt_sta_pane_ParamLimits

0xa747,	// (0x0002fc36) status_dt_sta_pane

0xc13f,	// (0x0003162e) dt_sta_controll_pane

0xc14c,	// (0x0003163b) dt_sta_indi_pane

0xc159,	// (0x00031648) dt_sta_title_pane

0xc484,	// (0x00031973) bg_dt_sta_indi_pane_ParamLimits

0xc484,	// (0x00031973) bg_dt_sta_indi_pane

0xc16b,	// (0x0003165a) dt_sta_battery_pane

0xc173,	// (0x00031662) dt_sta_indi_pane_g1

0x5e7d,	// (0x0002b36c) dt_sta_indi_pane_g2

0x5e86,	// (0x0002b375) dt_sta_indi_pane_g3

0x0002,

0xfc61,	// (0x00035150) dt_sta_indi_pane_g

0x5e8f,	// (0x0002b37e) dt_sta_signal_pane

0xc998,	// (0x00031e87) bg_dt_sta_title_pane_ParamLimits

0xc998,	// (0x00031e87) bg_dt_sta_title_pane

0xe5a4,	// (0x00033a93) dt_sta_title_pane_g1

0xc17c,	// (0x0003166b) dt_sta_title_pane_t1_ParamLimits

0xc17c,	// (0x0003166b) dt_sta_title_pane_t1

0xc2d8,	// (0x000317c7) bg_dt_sta_control_pane

0xc191,	// (0x00031680) dt_sta_controll_pane_g1

0x5e98,	// (0x0002b387) bg_dt_sta_title_pane_g1

0x5ea1,	// (0x0002b390) bg_dt_sta_title_pane_g2

0x5eaa,	// (0x0002b399) bg_dt_sta_title_pane_g3

0x0002,

0xfc68,	// (0x00035157) bg_dt_sta_title_pane_g

0x2f1a,	// (0x00028409) bg_dt_sta_indi_pane_g1

0x5eb3,	// (0x0002b3a2) dt_sta_signal_pane_g1

0x5ebb,	// (0x0002b3aa) dt_sta_signal_pane_g2

0x0001,

0xfc6f,	// (0x0003515e) dt_sta_signal_pane_g

0x5ec3,	// (0x0002b3b2) dt_sta_battery_pane_g1

0x5ecc,	// (0x0002b3bb) dt_sta_battery_pane_t1

0x2f1a,	// (0x00028409) bg_dt_sta_control_pane_g1

0xcf49,	// (0x00032438) fep_china_uni_eep_pane

0xcf51,	// (0x00032440) fep_china_uni_entry_pane_ParamLimits

0xcf61,	// (0x00032450) popup_fep_china_uni_window_g1_ParamLimits

0xcf71,	// (0x00032460) popup_fep_china_uni_window_g2_ParamLimits

0xcf71,	// (0x00032460) popup_fep_china_uni_window_g2

0x0001,

0x0147,	// (0x00025636) popup_fep_china_uni_window_g_ParamLimits

0x0147,	// (0x00025636) popup_fep_china_uni_window_g

0x5edb,	// (0x0002b3ca) fep_china_uni_eep_pane_g1

0x5ee3,	// (0x0002b3d2) fep_china_uni_eep_pane_t1

0x5cef,	// (0x0002b1de) aid_touch_area_size_smil_player

0xd80d,	// (0x00032cfc) lc0_clock_pane

0xd846,	// (0x00032d35) status_pane_g5_ParamLimits

0xd846,	// (0x00032d35) status_pane_g5

0x9f76,	// (0x0002f465) popup_keymap_window

0xd826,	// (0x00032d15) status_icon_pane

0xbfb5,	// (0x000314a4) cell_ai5_widget_pane_g3_ParamLimits

0xbfc9,	// (0x000314b8) cell_ai5_widget_pane_g4_ParamLimits

0xbfd5,	// (0x000314c4) cell_ai5_widget_pane_g5_ParamLimits

0xbff9,	// (0x000314e8) cell_ai5_widget_pane_g8_ParamLimits

0xbff9,	// (0x000314e8) cell_ai5_widget_pane_g8

0xc00d,	// (0x000314fc) cell_ai5_widget_pane_g9_ParamLimits

0xc00d,	// (0x000314fc) cell_ai5_widget_pane_g9

0xc021,	// (0x00031510) cell_ai5_widget_pane_g10_ParamLimits

0xc021,	// (0x00031510) cell_ai5_widget_pane_g10

0x5ef2,	// (0x0002b3e1) status_icon_pane_g1

0xc2d8,	// (0x000317c7) bg_popup_sub_pane_cp13

0x5efa,	// (0x0002b3e9) popup_keymap_window_t1

0x9da9,	// (0x0002f298) control_pane_g6_ParamLimits

0x9da9,	// (0x0002f298) control_pane_g6

0x9db6,	// (0x0002f2a5) control_pane_g7_ParamLimits

0x9db6,	// (0x0002f2a5) control_pane_g7

0x9dc3,	// (0x0002f2b2) control_pane_g8_ParamLimits

0x9dc3,	// (0x0002f2b2) control_pane_g8

0xc13f,	// (0x0003162e) dt_sta_controll_pane_ParamLimits

0xc14c,	// (0x0003163b) dt_sta_indi_pane_ParamLimits

0xc159,	// (0x00031648) dt_sta_title_pane_ParamLimits

0xc8da,	// (0x00031dc9) aid_size_touch_scroll_bar_cale

0x0be8,	// (0x000260d7) popup_discreet_window_ParamLimits

0x0be8,	// (0x000260d7) popup_discreet_window

0x88c0,	// (0x0002ddaf) popup_sk_window

0xde9e,	// (0x0003338d) bg_popup_sub_pane_cp28_ParamLimits

0xde9e,	// (0x0003338d) bg_popup_sub_pane_cp28

0x5f08,	// (0x0002b3f7) popup_discreet_window_g1_ParamLimits

0x5f08,	// (0x0002b3f7) popup_discreet_window_g1

0x5f28,	// (0x0002b417) popup_discreet_window_t1_ParamLimits

0x5f28,	// (0x0002b417) popup_discreet_window_t1

0x5f46,	// (0x0002b435) popup_discreet_window_t2_ParamLimits

0x5f46,	// (0x0002b435) popup_discreet_window_t2

0x0002,

0xfc74,	// (0x00035163) popup_discreet_window_t_ParamLimits

0xfc74,	// (0x00035163) popup_discreet_window_t

0x4264,	// (0x00029753) popup_sk_window_g1

0x426e,	// (0x0002975d) popup_sk_window_g2

0x0001,

0xfc7b,	// (0x0003516a) popup_sk_window_g

0x5f98,	// (0x0002b487) popup_sk_window_t1

0x5fa6,	// (0x0002b495) popup_sk_window_t1_copy1

0xbfa5,	// (0x00031494) cell_ai5_widget_pane_g2_ParamLimits

0xc0cd,	// (0x000315bc) cell_ai5_widget_pane_t9_ParamLimits

0xc0cd,	// (0x000315bc) cell_ai5_widget_pane_t9

0xc2d8,	// (0x000317c7) main_fep_fshwr2_pane

0xc19a,	// (0x00031689) aid_fshwr2_btn_pane

0xc1a2,	// (0x00031691) aid_fshwr2_syb_pane

0xc1aa,	// (0x00031699) aid_fshwr2_txt_pane

0xc1b2,	// (0x000316a1) fshwr2_func_candi_pane

0xc1bc,	// (0x000316ab) fshwr2_hwr_syb_pane

0xc1ca,	// (0x000316b9) fshwr2_icf_pane

0xc2d8,	// (0x000317c7) fshwr2_icf_bg_pane

0xc1d4,	// (0x000316c3) fshwr2_icf_pane_t1_ParamLimits

0xc1d4,	// (0x000316c3) fshwr2_icf_pane_t1

0x2f1a,	// (0x00028409) fshwr2_func_candi_pane_g1

0x5fc8,	// (0x0002b4b7) fshwr2_func_candi_row_pane_ParamLimits

0x5fc8,	// (0x0002b4b7) fshwr2_func_candi_row_pane

0xc1ee,	// (0x000316dd) cell_fshwr2_syb_pane_ParamLimits

0xc1ee,	// (0x000316dd) cell_fshwr2_syb_pane

0x33ba,	// (0x000288a9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x33ba,	// (0x000288a9) fshwr2_hwr_syb_pane_g1

0xc2d8,	// (0x000317c7) bg_popup_call_pane_cp01

0x5fd9,	// (0x0002b4c8) fshwr2_func_candi_cell_pane_ParamLimits

0x5fd9,	// (0x0002b4c8) fshwr2_func_candi_cell_pane

0x600a,	// (0x0002b4f9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x600a,	// (0x0002b4f9) fshwr2_func_candi_cell_bg_pane

0x6024,	// (0x0002b513) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6024,	// (0x0002b513) fshwr2_func_candi_cell_pane_g1

0x6044,	// (0x0002b533) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6044,	// (0x0002b533) fshwr2_func_candi_cell_pane_t1

0xc2d8,	// (0x000317c7) bg_button_pane_cp08

0xd3da,	// (0x000328c9) cell_fshwr2_syb_bg_pane

0xc208,	// (0x000316f7) cell_fshwr2_syb_bg_pane_g1

0x6057,	// (0x0002b546) cell_fshwr2_syb_bg_pane_t1

0xc998,	// (0x00031e87) main_tmo_pane

0xaa87,	// (0x0002ff76) uni_indicator_pane_g1_ParamLimits

0xaa9c,	// (0x0002ff8b) uni_indicator_pane_g2_ParamLimits

0xaab1,	// (0x0002ffa0) uni_indicator_pane_g3_ParamLimits

0xe868,	// (0x00033d57) uni_indicator_pane_g4_ParamLimits

0xe868,	// (0x00033d57) uni_indicator_pane_g4

0xe87c,	// (0x00033d6b) uni_indicator_pane_g5_ParamLimits

0xe87c,	// (0x00033d6b) uni_indicator_pane_g5

0xe8ae,	// (0x00033d9d) uni_indicator_pane_g6_ParamLimits

0xe8ae,	// (0x00033d9d) uni_indicator_pane_g6

0xf811,	// (0x00034d00) uni_indicator_pane_g_ParamLimits

0xb42e,	// (0x0003091d) popup_tmo_note_window_ParamLimits

0xb42e,	// (0x0003091d) popup_tmo_note_window

0xc2d8,	// (0x000317c7) fshwr2_bg_pane

0x6035,	// (0x0002b524) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6035,	// (0x0002b524) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfc80,	// (0x0003516f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfc80,	// (0x0003516f) fshwr2_func_candi_cell_pane_g

0x2f1a,	// (0x00028409) bg_popup_window_pane_cp01

0x6066,	// (0x0002b555) bg_popup_window_pane_g1_cp01

0x606f,	// (0x0002b55e) bg_popup_window_pane_cp22_ParamLimits

0x606f,	// (0x0002b55e) bg_popup_window_pane_cp22

0x607d,	// (0x0002b56c) listscroll_tmo_link_pane_ParamLimits

0x607d,	// (0x0002b56c) listscroll_tmo_link_pane

0x60bd,	// (0x0002b5ac) popup_tmo_note_window_g1_ParamLimits

0x60bd,	// (0x0002b5ac) popup_tmo_note_window_g1

0x60ca,	// (0x0002b5b9) tmo_note_info_pane_ParamLimits

0x60ca,	// (0x0002b5b9) tmo_note_info_pane

0xc210,	// (0x000316ff) list_tmo_note_info_pane_g1_ParamLimits

0xc210,	// (0x000316ff) list_tmo_note_info_pane_g1

0x60e4,	// (0x0002b5d3) list_tmo_note_info_pane_g2_ParamLimits

0x60e4,	// (0x0002b5d3) list_tmo_note_info_pane_g2

0x0001,

0xfc85,	// (0x00035174) list_tmo_note_info_pane_g_ParamLimits

0xfc85,	// (0x00035174) list_tmo_note_info_pane_g

0x6100,	// (0x0002b5ef) list_tmo_note_info_text_pane_ParamLimits

0x6100,	// (0x0002b5ef) list_tmo_note_info_text_pane

0x6142,	// (0x0002b631) list_tmo_link_pane

0x614f,	// (0x0002b63e) scroll_pane_cp20

0x615c,	// (0x0002b64b) list_single_tmo_link_pane_ParamLimits

0x615c,	// (0x0002b64b) list_single_tmo_link_pane

0x616c,	// (0x0002b65b) list_single_tmo_link_pane_t1

0x617a,	// (0x0002b669) list_tmo_note_info_text_pane_t1_ParamLimits

0x617a,	// (0x0002b669) list_tmo_note_info_text_pane_t1

0x9ad2,	// (0x0002efc1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ad2,	// (0x0002efc1) aid_size_touch_scroll_bar_cp01

0x96e3,	// (0x0002ebd2) aid_size_touch_slider_marker

0x88b0,	// (0x0002dd9f) popup_settings_window_ParamLimits

0x88b0,	// (0x0002dd9f) popup_settings_window

0x6eb1,	// (0x0002c3a0) popup_candi_list_indi_window

0xd75c,	// (0x00032c4b) aid_touch_navi_pane_ParamLimits

0x3a2f,	// (0x00028f1e) rs_clock_indi_pane

0x3a38,	// (0x00028f27) sctrl_sk_bottom_pane_ParamLimits

0x3a49,	// (0x00028f38) sctrl_sk_top_pane_ParamLimits

0x3b50,	// (0x0002903f) popup_fep_tooltip_window

0x5d29,	// (0x0002b218) aid_size_cell_widget_grid_ParamLimits

0xbf99,	// (0x00031488) cell_ai5_widget_pane_g1_ParamLimits

0xbf99,	// (0x00031488) cell_ai5_widget_pane_g1

0xbfe1,	// (0x000314d0) cell_ai5_widget_pane_g6_ParamLimits

0xbfed,	// (0x000314dc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x0826,	// (0x00025d15) cell_ai5_widget_pane_g_ParamLimits

0x0826,	// (0x00025d15) cell_ai5_widget_pane_g

0xc0f1,	// (0x000315e0) cell_ai5_widget_pane_t10_ParamLimits

0xc0f1,	// (0x000315e0) cell_ai5_widget_pane_t10

0xc103,	// (0x000315f2) grid_ai5_widget_pane_ParamLimits

0x5de0,	// (0x0002b2cf) cell_contacts_ai5_widget_pane_ParamLimits

0x5de0,	// (0x0002b2cf) cell_contacts_ai5_widget_pane

0x5f5b,	// (0x0002b44a) popup_discreet_window_t3_ParamLimits

0x5f5b,	// (0x0002b44a) popup_discreet_window_t3

0x5fb4,	// (0x0002b4a3) popup_fshwr2_char_preview_window_ParamLimits

0x5fb4,	// (0x0002b4a3) popup_fshwr2_char_preview_window

0xc227,	// (0x00031716) tmo_note_info_pane_t1

0xc23c,	// (0x0003172b) tmo_note_info_pane_t2

0xc255,	// (0x00031744) tmo_note_info_pane_t3

0x611e,	// (0x0002b60d) tmo_note_info_pane_t4

0x6130,	// (0x0002b61f) tmo_note_info_pane_t5

0x0004,

0xfc8a,	// (0x00035179) tmo_note_info_pane_t

0x6142,	// (0x0002b631) list_tmo_link_pane_ParamLimits

0x614f,	// (0x0002b63e) scroll_pane_cp20_ParamLimits

0xc2d8,	// (0x000317c7) bg_popup_fep_char_preview_window_cp01

0x6193,	// (0x0002b682) popup_fshwr2_char_preview_window_t1

0x61a1,	// (0x0002b690) popup_candi_list_indi_window_g1

0x61aa,	// (0x0002b699) bg_cell_contacts_ai5_widget_pane

0x61b6,	// (0x0002b6a5) cell_contacts_ai5_widget_pane_g1

0x61ca,	// (0x0002b6b9) cell_contacts_ai5_widget_pane_g2

0x61d9,	// (0x0002b6c8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfc95,	// (0x00035184) cell_contacts_ai5_widget_pane_g

0x61ec,	// (0x0002b6db) cell_contacts_ai5_widget_pane_t1

0xc998,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6266,	// (0x0002b755) settings_container_pane

0xd3da,	// (0x000328c9) listscroll_set_pane_copy1

0xf08b,	// (0x0003457a) scroll_pane_cp121_copy1

0x6272,	// (0x0002b761) set_content_pane_copy1

0x627a,	// (0x0002b769) aid_height_set_list_copy1_ParamLimits

0x627a,	// (0x0002b769) aid_height_set_list_copy1

0xe890,	// (0x00033d7f) aid_size_parent_copy1_ParamLimits

0xe890,	// (0x00033d7f) aid_size_parent_copy1

0x6286,	// (0x0002b775) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6286,	// (0x0002b775) button_value_adjust_pane_cp6_copy1

0xcaef,	// (0x00031fde) list_highlight_pane_cp2_copy1_ParamLimits

0xcaef,	// (0x00031fde) list_highlight_pane_cp2_copy1

0x629a,	// (0x0002b789) list_set_pane_copy1_ParamLimits

0x629a,	// (0x0002b789) list_set_pane_copy1

0x6201,	// (0x0002b6f0) main_pane_set_t1_copy1_ParamLimits

0x6201,	// (0x0002b6f0) main_pane_set_t1_copy1

0x623b,	// (0x0002b72a) main_pane_set_t2_copy1_ParamLimits

0x623b,	// (0x0002b72a) main_pane_set_t2_copy1

0x6347,	// (0x0002b836) main_pane_set_t3_copy1

0x6355,	// (0x0002b844) main_pane_set_t4_copy1

0x625a,	// (0x0002b749) set_content_pane_g1_copy1_ParamLimits

0x625a,	// (0x0002b749) set_content_pane_g1_copy1

0x6363,	// (0x0002b852) setting_code_pane_copy1

0x636d,	// (0x0002b85c) setting_slider_graphic_pane_copy1

0x636d,	// (0x0002b85c) setting_slider_pane_copy1

0x6377,	// (0x0002b866) setting_text_pane_copy1

0x6381,	// (0x0002b870) setting_volume_pane_copy1

0x638a,	// (0x0002b879) settings_code_pane_cp2_copy1

0x6392,	// (0x0002b881) settings_code_pane_cp_copy1_ParamLimits

0x6392,	// (0x0002b881) settings_code_pane_cp_copy1

0x63a6,	// (0x0002b895) volume_set_pane_copy1

0x63ae,	// (0x0002b89d) volume_set_pane_g10_copy1

0x63b6,	// (0x0002b8a5) volume_set_pane_g1_copy1

0x63be,	// (0x0002b8ad) volume_set_pane_g2_copy1

0x63c6,	// (0x0002b8b5) volume_set_pane_g3_copy1

0x63ce,	// (0x0002b8bd) volume_set_pane_g4_copy1

0x63d6,	// (0x0002b8c5) volume_set_pane_g5_copy1

0x63de,	// (0x0002b8cd) volume_set_pane_g6_copy1

0x63e6,	// (0x0002b8d5) volume_set_pane_g7_copy1

0x63ee,	// (0x0002b8dd) volume_set_pane_g8_copy1

0x63f6,	// (0x0002b8e5) volume_set_pane_g9_copy1

0xc348,	// (0x00031837) bg_set_opt_pane_cp_copy1_ParamLimits

0xc348,	// (0x00031837) bg_set_opt_pane_cp_copy1

0x63fe,	// (0x0002b8ed) setting_slider_pane_t1_copy1_ParamLimits

0x63fe,	// (0x0002b8ed) setting_slider_pane_t1_copy1

0x641c,	// (0x0002b90b) setting_slider_pane_t2_copy1_ParamLimits

0x641c,	// (0x0002b90b) setting_slider_pane_t2_copy1

0x6436,	// (0x0002b925) setting_slider_pane_t3_copy1_ParamLimits

0x6436,	// (0x0002b925) setting_slider_pane_t3_copy1

0x644e,	// (0x0002b93d) slider_set_pane_copy1_ParamLimits

0x644e,	// (0x0002b93d) slider_set_pane_copy1

0xc9ff,	// (0x00031eee) set_opt_bg_pane_g1_copy2

0xca07,	// (0x00031ef6) set_opt_bg_pane_g2_copy2

0x6464,	// (0x0002b953) set_opt_bg_pane_g3_copy2

0xca17,	// (0x00031f06) set_opt_bg_pane_g4_copy2

0xca1f,	// (0x00031f0e) set_opt_bg_pane_g5_copy2

0xca27,	// (0x00031f16) set_opt_bg_pane_g6_copy2

0x646e,	// (0x0002b95d) set_opt_bg_pane_g7_copy2

0x6476,	// (0x0002b965) set_opt_bg_pane_g8_copy2

0x6480,	// (0x0002b96f) set_opt_bg_pane_g9_copy2

0x4278,	// (0x00029767) aid_size_touch_slider_mark_copy1_ParamLimits

0x4278,	// (0x00029767) aid_size_touch_slider_mark_copy1

0x648a,	// (0x0002b979) slider_set_pane_g1_copy1

0x428c,	// (0x0002977b) slider_set_pane_g2_copy1

0x26f1,	// (0x00027be0) slider_set_pane_g3_copy1_ParamLimits

0x26f1,	// (0x00027be0) slider_set_pane_g3_copy1

0x2705,	// (0x00027bf4) slider_set_pane_g4_copy1_ParamLimits

0x2705,	// (0x00027bf4) slider_set_pane_g4_copy1

0x271d,	// (0x00027c0c) slider_set_pane_g5_copy1_ParamLimits

0x271d,	// (0x00027c0c) slider_set_pane_g5_copy1

0x26f1,	// (0x00027be0) slider_set_pane_g6_copy1_ParamLimits

0x26f1,	// (0x00027be0) slider_set_pane_g6_copy1

0x4294,	// (0x00029783) slider_set_pane_g7_copy1_ParamLimits

0x4294,	// (0x00029783) slider_set_pane_g7_copy1

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp2_copy1

0x6493,	// (0x0002b982) setting_slider_graphic_pane_g1_copy1

0x649c,	// (0x0002b98b) setting_slider_graphic_pane_t1_copy1

0x64ac,	// (0x0002b99b) setting_slider_graphic_pane_t2_copy1

0x64bc,	// (0x0002b9ab) slider_set_pane_cp_copy1

0x64cc,	// (0x0002b9bb) input_focus_pane_cp1_copy1

0x64d5,	// (0x0002b9c4) list_set_text_pane_copy1

0x64dd,	// (0x0002b9cc) setting_text_pane_g1_copy1

0x7658,	// (0x0002cb47) set_text_pane_t1_copy1

0x64cc,	// (0x0002b9bb) input_focus_pane_cp2_copy1

0x64dd,	// (0x0002b9cc) setting_code_pane_g1_copy1

0x64e6,	// (0x0002b9d5) setting_code_pane_t1_copy1

0x64f4,	// (0x0002b9e3) list_set_graphic_pane_copy1

0xc2ec,	// (0x000317db) bg_set_opt_pane_cp4_copy1

0xd0dc,	// (0x000325cb) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0dc,	// (0x000325cb) list_set_graphic_pane_g1_copy1

0x6508,	// (0x0002b9f7) list_set_graphic_pane_g2_copy1

0xd0f4,	// (0x000325e3) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0f4,	// (0x000325e3) list_set_graphic_pane_t1_copy1

0x2f1a,	// (0x00028409) rs_clock_indi_pane_g1

0x6510,	// (0x0002b9ff) rs_clock_indi_pane_t1

0x651e,	// (0x0002ba0d) rs_indi_pane

0x6526,	// (0x0002ba15) rs_indi_pane_g1

0x652f,	// (0x0002ba1e) rs_indi_pane_g2

0x6538,	// (0x0002ba27) rs_indi_pane_g3

0x0002,

0xfc9c,	// (0x0003518b) rs_indi_pane_g

0xd3da,	// (0x000328c9) bg_popup_preview_window_pane_cp03

0x6541,	// (0x0002ba30) popup_fep_tooltip_window_t1

0x48a1,	// (0x00029d90) popup_note2_window_g2_ParamLimits

0x48a1,	// (0x00029d90) popup_note2_window_g2

0x0001,

0xfa7a,	// (0x00034f69) popup_note2_window_g_ParamLimits

0xfa7a,	// (0x00034f69) popup_note2_window_g

0x4d8f,	// (0x0002a27e) bg_popup_sub_pane_cp11_ParamLimits

0x4d9c,	// (0x0002a28b) cell_ai3_links_pane_g1_ParamLimits

0x4db3,	// (0x0002a2a2) cell_ai3_links_pane_t1

0x7658,	// (0x0002cb47) set_text_pane_t1_copy1_ParamLimits

0xd2e9,	// (0x000327d8) cell_graphic_popup_pane_cp2_ParamLimits

0xd2e9,	// (0x000327d8) cell_graphic_popup_pane_cp2

0x654f,	// (0x0002ba3e) cell_graphic_popup_pane_g1_cp2

0xc6ed,	// (0x00031bdc) cell_graphic_popup_pane_g2_cp2

0x6557,	// (0x0002ba46) cell_graphic_popup_pane_g3_cp2

0x655f,	// (0x0002ba4e) cell_graphic_popup_pane_t2_cp2

0xc6fe,	// (0x00031bed) grid_highlight_pane_cp3_cp2

0xcc99,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc998,	// (0x00031e87) main_tmo_pane_ParamLimits

0xb422,	// (0x00030911) popup_tmo_big_image_note_window

0xbf89,	// (0x00031478) cell_ai5_widget_list_pane

0xbf91,	// (0x00031480) cell_ai5_widget_lrg_icon_pane

0xc227,	// (0x00031716) tmo_note_info_pane_t1_ParamLimits

0xc23c,	// (0x0003172b) tmo_note_info_pane_t2_ParamLimits

0xc255,	// (0x00031744) tmo_note_info_pane_t3_ParamLimits

0x611e,	// (0x0002b60d) tmo_note_info_pane_t4_ParamLimits

0x6130,	// (0x0002b61f) tmo_note_info_pane_t5_ParamLimits

0xfc8a,	// (0x00035179) tmo_note_info_pane_t_ParamLimits

0x6266,	// (0x0002b755) settings_container_pane_ParamLimits

0x64c4,	// (0x0002b9b3) indicator_popup_pane_cp5

0x64c4,	// (0x0002b9b3) indicator_popup_pane_cp6

0x64f4,	// (0x0002b9e3) list_set_graphic_pane_copy1_ParamLimits

0xc2d8,	// (0x000317c7) bg_popup_window_pane_cp23

0x656d,	// (0x0002ba5c) popup_tmo_big_image_note_window_g1

0x6578,	// (0x0002ba67) popup_tmo_big_image_note_window_t1

0x6588,	// (0x0002ba77) popup_tmo_big_image_note_window_t2

0x6598,	// (0x0002ba87) popup_tmo_big_image_note_window_t3

0x0002,

0xfca3,	// (0x00035192) popup_tmo_big_image_note_window_t

0xc26a,	// (0x00031759) cell_ai5_widget_lrg_icon_pane_g1

0xc272,	// (0x00031761) cell_ai5_widget_lrg_icon_pane_t1

0xc280,	// (0x0003176f) cell_ai5_widget_list_row_pane_ParamLimits

0xc280,	// (0x0003176f) cell_ai5_widget_list_row_pane

0xc299,	// (0x00031788) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc299,	// (0x00031788) cell_ai5_widget_list_row_pane_g1

0xc2a6,	// (0x00031795) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc2a6,	// (0x00031795) cell_ai5_widget_list_row_pane_t1

0xc2be,	// (0x000317ad) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc2be,	// (0x000317ad) cell_ai5_widget_list_row_pane_t2

0x0001,

0x08cd,	// (0x00025dbc) cell_ai5_widget_list_row_pane_t_ParamLimits

0x08cd,	// (0x00025dbc) cell_ai5_widget_list_row_pane_t

0x0b0f,	// (0x00025ffe) main_fep_vtchi_ss_pane

0x65a8,	// (0x0002ba97) popup_fep_char_pre_window

0x65b0,	// (0x0002ba9f) popup_fep_ituss_window

0x65bb,	// (0x0002baaa) popup_fep_vkbss_window

0x65c4,	// (0x0002bab3) grid_vkbss_keypad_pane_ParamLimits

0x65c4,	// (0x0002bab3) grid_vkbss_keypad_pane

0x65d4,	// (0x0002bac3) ituss_keypad_pane

0x65dc,	// (0x0002bacb) aid_vkbss_key_offset_ParamLimits

0x65dc,	// (0x0002bacb) aid_vkbss_key_offset

0x65eb,	// (0x0002bada) cell_vkbss_key_pane_ParamLimits

0x65eb,	// (0x0002bada) cell_vkbss_key_pane

0x6601,	// (0x0002baf0) bg_cell_vkbss_key_g1_ParamLimits

0x6601,	// (0x0002baf0) bg_cell_vkbss_key_g1

0x660d,	// (0x0002bafc) cell_vkbss_key_3p_pane_ParamLimits

0x660d,	// (0x0002bafc) cell_vkbss_key_3p_pane

0x6627,	// (0x0002bb16) cell_vkbss_key_g1_ParamLimits

0x6627,	// (0x0002bb16) cell_vkbss_key_g1

0x6641,	// (0x0002bb30) cell_vkbss_key_t1_ParamLimits

0x6641,	// (0x0002bb30) cell_vkbss_key_t1

0x666c,	// (0x0002bb5b) cell_ituss_key_pane_ParamLimits

0x666c,	// (0x0002bb5b) cell_ituss_key_pane

0x667b,	// (0x0002bb6a) bg_cell_ituss_key_g1_ParamLimits

0x667b,	// (0x0002bb6a) bg_cell_ituss_key_g1

0x6687,	// (0x0002bb76) cell_ituss_key_pane_g1_ParamLimits

0x6687,	// (0x0002bb76) cell_ituss_key_pane_g1

0x6693,	// (0x0002bb82) cell_ituss_key_pane_g2_ParamLimits

0x6693,	// (0x0002bb82) cell_ituss_key_pane_g2

0x0001,

0xfcaa,	// (0x00035199) cell_ituss_key_pane_g_ParamLimits

0xfcaa,	// (0x00035199) cell_ituss_key_pane_g

0x66a6,	// (0x0002bb95) cell_ituss_key_t1_ParamLimits

0x66a6,	// (0x0002bb95) cell_ituss_key_t1

0x66c4,	// (0x0002bbb3) cell_ituss_key_t2_ParamLimits

0x66c4,	// (0x0002bbb3) cell_ituss_key_t2

0x66e3,	// (0x0002bbd2) cell_ituss_key_t3_ParamLimits

0x66e3,	// (0x0002bbd2) cell_ituss_key_t3

0x6702,	// (0x0002bbf1) cell_ituss_key_t4_ParamLimits

0x6702,	// (0x0002bbf1) cell_ituss_key_t4

0x0003,

0xfcaf,	// (0x0003519e) cell_ituss_key_t_ParamLimits

0xfcaf,	// (0x0003519e) cell_ituss_key_t

0x6721,	// (0x0002bc10) cell_vkbss_key_3p_pane_g1

0x6729,	// (0x0002bc18) cell_vkbss_key_3p_pane_g2

0x6731,	// (0x0002bc20) cell_vkbss_key_3p_pane_g3

0x0002,

0xfcb8,	// (0x000351a7) cell_vkbss_key_3p_pane_g

0xc2d8,	// (0x000317c7) bg_popup_fep_char_preview_window_cp02

0x6739,	// (0x0002bc28) popup_fep_char_pre_window_t1

0xbf7f,	// (0x0003146e) main_ai5_sk_pane

0x61aa,	// (0x0002b699) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x61b6,	// (0x0002b6a5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x61ca,	// (0x0002b6b9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x61d9,	// (0x0002b6c8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfc95,	// (0x00035184) cell_contacts_ai5_widget_pane_g_ParamLimits

0x61ec,	// (0x0002b6db) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc998,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc356,	// (0x00031845) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

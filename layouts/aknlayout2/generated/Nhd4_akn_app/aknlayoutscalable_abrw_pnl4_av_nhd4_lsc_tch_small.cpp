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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00039588 };

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
0x85ea,	// (0x00041b72) Screen

0x85f6,	// (0x00041b7e) application_window_ParamLimits

0x85f6,	// (0x00041b7e) application_window

0xb53f,	// (0x00044ac7) screen_g1

0x862e,	// (0x00041bb6) area_bottom_pane_ParamLimits

0x862e,	// (0x00041bb6) area_bottom_pane

0x86f9,	// (0x00041c81) area_top_pane_ParamLimits

0x86f9,	// (0x00041c81) area_top_pane

0x878d,	// (0x00041d15) main_pane_ParamLimits

0x878d,	// (0x00041d15) main_pane

0xb549,	// (0x00044ad1) misc_graphics

0xa3a5,	// (0x0004392d) battery_pane_ParamLimits

0xa3a5,	// (0x0004392d) battery_pane

0x293f,	// (0x0003bec7) bg_status_flat_pane_g8

0x2947,	// (0x0003becf) bg_status_flat_pane_g9

0x04ad,	// (0x00039a35) context_pane_ParamLimits

0x04ad,	// (0x00039a35) context_pane

0xa510,	// (0x00043a98) navi_pane_ParamLimits

0xa510,	// (0x00043a98) navi_pane

0xa58e,	// (0x00043b16) signal_pane_ParamLimits

0xa58e,	// (0x00043b16) signal_pane

0x0008,

0xf839,	// (0x00048dc1) bg_status_flat_pane_g

0xa61e,	// (0x00043ba6) status_pane_g1_ParamLimits

0xa61e,	// (0x00043ba6) status_pane_g1

0xa634,	// (0x00043bbc) status_pane_g2_ParamLimits

0xa634,	// (0x00043bbc) status_pane_g2

0x1f40,	// (0x0003b4c8) status_pane_g3_ParamLimits

0x1f40,	// (0x0003b4c8) status_pane_g3

0x0004,

0xf765,	// (0x00048ced) status_pane_g_ParamLimits

0xf765,	// (0x00048ced) status_pane_g

0xa640,	// (0x00043bc8) title_pane_ParamLimits

0xa640,	// (0x00043bc8) title_pane

0xa6a1,	// (0x00043c29) uni_indicator_pane_ParamLimits

0xa6a1,	// (0x00043c29) uni_indicator_pane

0xc387,	// (0x0004590f) bg_list_pane_ParamLimits

0xc387,	// (0x0004590f) bg_list_pane

0x9b93,	// (0x0004311b) find_pane

0x2154,	// (0x0003b6dc) listscroll_app_pane_ParamLimits

0x2154,	// (0x0003b6dc) listscroll_app_pane

0xc3a7,	// (0x0004592f) listscroll_form_pane

0x9b9b,	// (0x00043123) listscroll_gen_pane_ParamLimits

0x9b9b,	// (0x00043123) listscroll_gen_pane

0xf4c3,	// (0x00048a4b) listscroll_set_pane

0x3493,	// (0x0003ca1b) main_idle_act_pane

0xc21b,	// (0x000457a3) main_idle_trad_pane

0xc21b,	// (0x000457a3) main_list_empty_pane

0xba9d,	// (0x00045025) main_midp_pane

0xc3c1,	// (0x00045949) main_pane_g1_ParamLimits

0xc3c1,	// (0x00045949) main_pane_g1

0x9baf,	// (0x00043137) popup_ai_message_window_ParamLimits

0x9baf,	// (0x00043137) popup_ai_message_window

0x9c60,	// (0x000431e8) popup_fep_china_uni_window_ParamLimits

0x9c60,	// (0x000431e8) popup_fep_china_uni_window

0x9cba,	// (0x00043242) popup_fep_japan_candidate_window_ParamLimits

0x9cba,	// (0x00043242) popup_fep_japan_candidate_window

0x9cd8,	// (0x00043260) popup_fep_japan_predictive_window_ParamLimits

0x9cd8,	// (0x00043260) popup_fep_japan_predictive_window

0x9cea,	// (0x00043272) popup_find_window

0x9d07,	// (0x0004328f) popup_grid_graphic_window_ParamLimits

0x9d07,	// (0x0004328f) popup_grid_graphic_window

0xf501,	// (0x00048a89) popup_large_graphic_colour_window

0x9da5,	// (0x0004332d) popup_menu_window_ParamLimits

0x9da5,	// (0x0004332d) popup_menu_window

0x9f77,	// (0x000434ff) popup_note_image_window

0x9f3d,	// (0x000434c5) popup_note_wait_window_ParamLimits

0x9f3d,	// (0x000434c5) popup_note_wait_window

0x9f8f,	// (0x00043517) popup_note_window_ParamLimits

0x9f8f,	// (0x00043517) popup_note_window

0xa03e,	// (0x000435c6) popup_query_code_window_ParamLimits

0xa03e,	// (0x000435c6) popup_query_code_window

0xa078,	// (0x00043600) popup_query_data_code_window_ParamLimits

0xa078,	// (0x00043600) popup_query_data_code_window

0xa095,	// (0x0004361d) popup_query_data_window_ParamLimits

0xa095,	// (0x0004361d) popup_query_data_window

0xa117,	// (0x0004369f) popup_query_sat_info_window_ParamLimits

0xa117,	// (0x0004369f) popup_query_sat_info_window

0xa1ae,	// (0x00043736) popup_snote_single_graphic_window_ParamLimits

0xa1ae,	// (0x00043736) popup_snote_single_graphic_window

0xa1ae,	// (0x00043736) popup_snote_single_text_window_ParamLimits

0xa1ae,	// (0x00043736) popup_snote_single_text_window

0x0224,	// (0x000397ac) popup_sub_window_general

0xa30b,	// (0x00043893) popup_window_general_ParamLimits

0xa30b,	// (0x00043893) popup_window_general

0x0369,	// (0x000398f1) power_save_pane

0x99ed,	// (0x00042f75) control_pane_g1_ParamLimits

0x99ed,	// (0x00042f75) control_pane_g1

0x9a16,	// (0x00042f9e) control_pane_g2_ParamLimits

0x9a16,	// (0x00042f9e) control_pane_g2

0xc371,	// (0x000458f9) control_pane_g3_ParamLimits

0xc371,	// (0x000458f9) control_pane_g3

0x0007,

0xf74d,	// (0x00048cd5) control_pane_g_ParamLimits

0xf74d,	// (0x00048cd5) control_pane_g

0x9a7e,	// (0x00043006) control_pane_t1_ParamLimits

0x9a7e,	// (0x00043006) control_pane_t1

0x9ae6,	// (0x0004306e) control_pane_t2_ParamLimits

0x9ae6,	// (0x0004306e) control_pane_t2

0x0002,

0xf75e,	// (0x00048ce6) control_pane_t_ParamLimits

0xf75e,	// (0x00048ce6) control_pane_t

0x9964,	// (0x00042eec) navi_navi_volume_pane_cp1

0x996c,	// (0x00042ef4) status_small_icon_pane

0xc31d,	// (0x000458a5) status_small_pane_g1_ParamLimits

0xc31d,	// (0x000458a5) status_small_pane_g1

0x9974,	// (0x00042efc) status_small_pane_g2_ParamLimits

0x9974,	// (0x00042efc) status_small_pane_g2

0xc351,	// (0x000458d9) status_small_pane_g3_ParamLimits

0xc351,	// (0x000458d9) status_small_pane_g3

0x9980,	// (0x00042f08) status_small_pane_g4_ParamLimits

0x9980,	// (0x00042f08) status_small_pane_g4

0x998e,	// (0x00042f16) status_small_pane_g5_ParamLimits

0x998e,	// (0x00042f16) status_small_pane_g5

0x999c,	// (0x00042f24) status_small_pane_g6_ParamLimits

0x999c,	// (0x00042f24) status_small_pane_g6

0x0007,

0xf73c,	// (0x00048cc4) status_small_pane_g_ParamLimits

0xf73c,	// (0x00048cc4) status_small_pane_g

0x99b7,	// (0x00042f3f) status_small_pane_t1

0x99d9,	// (0x00042f61) status_small_wait_pane_ParamLimits

0x99d9,	// (0x00042f61) status_small_wait_pane

0x967a,	// (0x00042c02) aid_levels_signal_ParamLimits

0x967a,	// (0x00042c02) aid_levels_signal

0x9692,	// (0x00042c1a) signal_pane_g1_ParamLimits

0x9692,	// (0x00042c1a) signal_pane_g1

0x96ad,	// (0x00042c35) signal_pane_g2_ParamLimits

0x96ad,	// (0x00042c35) signal_pane_g2

0x0003,

0xf6cd,	// (0x00048c55) signal_pane_g_ParamLimits

0xf6cd,	// (0x00048c55) signal_pane_g

0xbe05,	// (0x0004538d) context_pane_g1

0x8988,	// (0x00041f10) title_pane_g1

0x89bf,	// (0x00041f47) title_pane_t1

0xb55f,	// (0x00044ae7) title_pane_t2

0xb585,	// (0x00044b0d) title_pane_t3

0x0002,

0xf530,	// (0x00048ab8) title_pane_t

0xa6c9,	// (0x00043c51) aid_levels_battery_ParamLimits

0xa6c9,	// (0x00043c51) aid_levels_battery

0xa6e5,	// (0x00043c6d) battery_pane_g1_ParamLimits

0xa6e5,	// (0x00043c6d) battery_pane_g1

0xa702,	// (0x00043c8a) battery_pane_g2_ParamLimits

0xa702,	// (0x00043c8a) battery_pane_g2

0x0001,

0xf770,	// (0x00048cf8) battery_pane_g_ParamLimits

0xf770,	// (0x00048cf8) battery_pane_g

0xc754,	// (0x00045cdc) uni_indicator_pane_g1

0xc76a,	// (0x00045cf2) uni_indicator_pane_g2

0xc780,	// (0x00045d08) uni_indicator_pane_g3

0x0005,

0xf8e1,	// (0x00048e69) uni_indicator_pane_g

0xc0ae,	// (0x00045636) navi_icon_pane_ParamLimits

0xc0ae,	// (0x00045636) navi_icon_pane

0xbff7,	// (0x0004557f) navi_midp_pane

0xc0ca,	// (0x00045652) navi_navi_pane

0xc0d4,	// (0x0004565c) navi_text_pane_ParamLimits

0xc0d4,	// (0x0004565c) navi_text_pane

0xb53f,	// (0x00044ac7) status_small_wait_pane_g1

0xb7d6,	// (0x00044d5e) status_small_wait_pane_g2

0x0001,

0xf8dc,	// (0x00048e64) status_small_wait_pane_g

0xc6ad,	// (0x00045c35) navi_navi_icon_text_pane

0x2f92,	// (0x0003c51a) navi_navi_pane_g1_ParamLimits

0x2f92,	// (0x0003c51a) navi_navi_pane_g1

0x2fa4,	// (0x0003c52c) navi_navi_pane_g2_ParamLimits

0x2fa4,	// (0x0003c52c) navi_navi_pane_g2

0x0001,

0xf8aa,	// (0x00048e32) navi_navi_pane_g_ParamLimits

0xf8aa,	// (0x00048e32) navi_navi_pane_g

0x2fb6,	// (0x0003c53e) navi_navi_tabs_pane

0x2fbf,	// (0x0003c547) navi_navi_text_pane

0xc6ad,	// (0x00045c35) navi_navi_volume_pane

0x2f66,	// (0x0003c4ee) navi_text_pane_t1

0x2f5a,	// (0x0003c4e2) navi_icon_pane_g1

0x2ead,	// (0x0003c435) navi_navi_text_pane_t1

0xaa03,	// (0x00043f8b) navi_navi_volume_pane_g1

0x0962,	// (0x00039eea) volume_small_pane

0x2e13,	// (0x0003c39b) navi_navi_icon_text_pane_g1

0xc605,	// (0x00045b8d) navi_navi_icon_text_pane_t1

0xc0ca,	// (0x00045652) navi_tabs_2_long_pane

0xc0ca,	// (0x00045652) navi_tabs_2_pane

0xc0ca,	// (0x00045652) navi_tabs_3_long_pane

0xc0ca,	// (0x00045652) navi_tabs_3_pane

0xc0ca,	// (0x00045652) navi_tabs_4_pane

0x093a,	// (0x00039ec2) tabs_2_active_pane_ParamLimits

0x093a,	// (0x00039ec2) tabs_2_active_pane

0x094a,	// (0x00039ed2) tabs_2_passive_pane_ParamLimits

0x094a,	// (0x00039ed2) tabs_2_passive_pane

0x0908,	// (0x00039e90) tabs_3_active_pane_ParamLimits

0x0908,	// (0x00039e90) tabs_3_active_pane

0x0918,	// (0x00039ea0) tabs_3_passive_pane_ParamLimits

0x0918,	// (0x00039ea0) tabs_3_passive_pane

0x0929,	// (0x00039eb1) tabs_3_passive_pane_cp_ParamLimits

0x0929,	// (0x00039eb1) tabs_3_passive_pane_cp

0x08c4,	// (0x00039e4c) tabs_4_active_pane_ParamLimits

0x08c4,	// (0x00039e4c) tabs_4_active_pane

0x08d5,	// (0x00039e5d) tabs_4_passive_pane_ParamLimits

0x08d5,	// (0x00039e5d) tabs_4_passive_pane

0x08e6,	// (0x00039e6e) tabs_4_passive_pane_cp_ParamLimits

0x08e6,	// (0x00039e6e) tabs_4_passive_pane_cp

0x08f7,	// (0x00039e7f) tabs_4_passive_pane_cp2_ParamLimits

0x08f7,	// (0x00039e7f) tabs_4_passive_pane_cp2

0x08a0,	// (0x00039e28) tabs_2_long_active_pane_ParamLimits

0x08a0,	// (0x00039e28) tabs_2_long_active_pane

0x08b2,	// (0x00039e3a) tabs_2_long_passive_pane_ParamLimits

0x08b2,	// (0x00039e3a) tabs_2_long_passive_pane

0x085b,	// (0x00039de3) tabs_3_long_active_pane_ParamLimits

0x085b,	// (0x00039de3) tabs_3_long_active_pane

0x0874,	// (0x00039dfc) tabs_3_long_passive_pane_ParamLimits

0x0874,	// (0x00039dfc) tabs_3_long_passive_pane

0x0887,	// (0x00039e0f) tabs_3_long_passive_pane_cp_ParamLimits

0x0887,	// (0x00039e0f) tabs_3_long_passive_pane_cp

0x0801,	// (0x00039d89) volume_small_pane_g1

0x080a,	// (0x00039d92) volume_small_pane_g2

0x0813,	// (0x00039d9b) volume_small_pane_g3

0x081c,	// (0x00039da4) volume_small_pane_g4

0x0825,	// (0x00039dad) volume_small_pane_g5

0x082e,	// (0x00039db6) volume_small_pane_g6

0x0837,	// (0x00039dbf) volume_small_pane_g7

0x0840,	// (0x00039dc8) volume_small_pane_g8

0x0849,	// (0x00039dd1) volume_small_pane_g9

0x0852,	// (0x00039dda) volume_small_pane_g10

0x0009,

0xf876,	// (0x00048dfe) volume_small_pane_g

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp2_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp2

0x8a4b,	// (0x00041fd3) tabs_3_active_pane_g1

0x8a53,	// (0x00041fdb) tabs_3_active_pane_t1

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp2_ParamLimits

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp2

0x8a4b,	// (0x00041fd3) tabs_3_passive_pane_g1

0x8a53,	// (0x00041fdb) tabs_3_passive_pane_t1

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp3_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp3

0x8a65,	// (0x00041fed) tabs_4_active_pane_g1

0x8a6d,	// (0x00041ff5) tabs_4_active_pane_t1

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp3_ParamLimits

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp3

0x8a65,	// (0x00041fed) tabs_4_1_passive_pane_g1

0x8a6d,	// (0x00041ff5) tabs_4_1_passive_pane_t1

0xba9d,	// (0x00045025) list_highlight_pane_cp2

0xc886,	// (0x00045e0e) list_set_pane_ParamLimits

0xc886,	// (0x00045e0e) list_set_pane

0xc920,	// (0x00045ea8) main_pane_set_t1_ParamLimits

0xc920,	// (0x00045ea8) main_pane_set_t1

0xc940,	// (0x00045ec8) main_pane_set_t2_ParamLimits

0xc940,	// (0x00045ec8) main_pane_set_t2

0xc954,	// (0x00045edc) main_pane_set_t3_ParamLimits

0xc954,	// (0x00045edc) main_pane_set_t3

0xc966,	// (0x00045eee) main_pane_set_t4_ParamLimits

0xc966,	// (0x00045eee) main_pane_set_t4

0x0003,

0xf946,	// (0x00048ece) main_pane_set_t_ParamLimits

0xf946,	// (0x00048ece) main_pane_set_t

0xc978,	// (0x00045f00) setting_code_pane

0xc982,	// (0x00045f0a) setting_slider_graphic_pane

0xc982,	// (0x00045f0a) setting_slider_pane

0xc982,	// (0x00045f0a) setting_text_pane

0xc982,	// (0x00045f0a) setting_volume_pane

0x8a7f,	// (0x00042007) volume_set_pane

0xb5a5,	// (0x00044b2d) bg_set_opt_pane_cp

0x8a87,	// (0x0004200f) setting_slider_pane_t1

0x8aa0,	// (0x00042028) setting_slider_pane_t2

0x8aba,	// (0x00042042) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00048abf) setting_slider_pane_t

0x8ad2,	// (0x0004205a) slider_set_pane

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp2

0xb5b3,	// (0x00044b3b) setting_slider_graphic_pane_g1

0x8ae8,	// (0x00042070) setting_slider_graphic_pane_t1

0x8af8,	// (0x00042080) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00048ac6) setting_slider_graphic_pane_t

0x8b08,	// (0x00042090) slider_set_pane_cp

0xb549,	// (0x00044ad1) input_focus_pane_cp1

0x347a,	// (0x0003ca02) list_set_text_pane

0xb53f,	// (0x00044ac7) setting_text_pane_g1

0xb549,	// (0x00044ad1) input_focus_pane_cp2

0xb53f,	// (0x00044ac7) setting_code_pane_g1

0xb5bc,	// (0x00044b44) setting_code_pane_t1

0xdbac,	// (0x00047134) set_text_pane_t1_ParamLimits

0xdbac,	// (0x00047134) set_text_pane_t1

0xb9b3,	// (0x00044f3b) set_opt_bg_pane_g1

0xb9bb,	// (0x00044f43) set_opt_bg_pane_g2

0xc83b,	// (0x00045dc3) set_opt_bg_pane_g3

0xb9cb,	// (0x00044f53) set_opt_bg_pane_g4

0xb9d3,	// (0x00044f5b) set_opt_bg_pane_g5

0xb9db,	// (0x00044f63) set_opt_bg_pane_g6

0xc845,	// (0x00045dcd) set_opt_bg_pane_g7

0xc84d,	// (0x00045dd5) set_opt_bg_pane_g8

0xc857,	// (0x00045ddf) set_opt_bg_pane_g9

0x0008,

0xf933,	// (0x00048ebb) set_opt_bg_pane_g

0xc82e,	// (0x00045db6) slider_set_pane_g1

0x09e1,	// (0x00039f69) slider_set_pane_g2

0x0006,

0xf924,	// (0x00048eac) slider_set_pane_g

0xaa0b,	// (0x00043f93) volume_set_pane_g1

0xaa13,	// (0x00043f9b) volume_set_pane_g2

0xaa1b,	// (0x00043fa3) volume_set_pane_g3

0xaa23,	// (0x00043fab) volume_set_pane_g4

0xaa2b,	// (0x00043fb3) volume_set_pane_g5

0xaa33,	// (0x00043fbb) volume_set_pane_g6

0xaa3b,	// (0x00043fc3) volume_set_pane_g7

0xaa43,	// (0x00043fcb) volume_set_pane_g8

0xaa4b,	// (0x00043fd3) volume_set_pane_g9

0xaa53,	// (0x00043fdb) volume_set_pane_g10

0x0009,

0xf8fc,	// (0x00048e84) volume_set_pane_g

0x8b10,	// (0x00042098) indicator_pane_ParamLimits

0x8b10,	// (0x00042098) indicator_pane

0x8b38,	// (0x000420c0) main_idle_pane_g2_ParamLimits

0x8b38,	// (0x000420c0) main_idle_pane_g2

0x8b70,	// (0x000420f8) main_pane_idle_g1_ParamLimits

0x8b70,	// (0x000420f8) main_pane_idle_g1

0xb5ca,	// (0x00044b52) popup_clock_digital_analogue_window_ParamLimits

0xb5ca,	// (0x00044b52) popup_clock_digital_analogue_window

0x8b97,	// (0x0004211f) soft_indicator_pane_ParamLimits

0x8b97,	// (0x0004211f) soft_indicator_pane

0x8bbb,	// (0x00042143) wallpaper_pane_ParamLimits

0x8bbb,	// (0x00042143) wallpaper_pane

0xb53f,	// (0x00044ac7) wallpaper_pane_g1

0x8bcd,	// (0x00042155) indicator_pane_g1_ParamLimits

0x8bcd,	// (0x00042155) indicator_pane_g1

0x3894,	// (0x0003ce1c) navi_navi_icon_text_pane_srt_g1

0xb5f8,	// (0x00044b80) soft_indicator_pane_t1

0xb612,	// (0x00044b9a) aid_ps_area_pane

0x8be3,	// (0x0004216b) aid_ps_clock_pane

0xb623,	// (0x00044bab) aid_ps_indicator_pane

0xb62f,	// (0x00044bb7) indicator_ps_pane_ParamLimits

0xb62f,	// (0x00044bb7) indicator_ps_pane

0xb63e,	// (0x00044bc6) power_save_pane_g1_ParamLimits

0xb63e,	// (0x00044bc6) power_save_pane_g1

0xb64a,	// (0x00044bd2) power_save_pane_g2_ParamLimits

0xb64a,	// (0x00044bd2) power_save_pane_g2

0xdb6c,	// (0x000470f4) aid_navinavi_width_pane

0xb612,	// (0x00044b9a) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00048acb) power_save_pane_g_ParamLimits

0xf543,	// (0x00048acb) power_save_pane_g

0xb658,	// (0x00044be0) power_save_pane_t1_ParamLimits

0xb658,	// (0x00044be0) power_save_pane_t1

0x8be3,	// (0x0004216b) aid_ps_clock_pane_ParamLimits

0xb623,	// (0x00044bab) aid_ps_indicator_pane_ParamLimits

0xb66a,	// (0x00044bf2) power_save_pane_t4_ParamLimits

0xb66a,	// (0x00044bf2) power_save_pane_t4

0x0001,

0xf548,	// (0x00048ad0) power_save_pane_t_ParamLimits

0xf548,	// (0x00048ad0) power_save_pane_t

0xb694,	// (0x00044c1c) power_save_t3_ParamLimits

0xb694,	// (0x00044c1c) power_save_t3

0xb67f,	// (0x00044c07) power_save_t2_ParamLimits

0xb67f,	// (0x00044c07) power_save_t2

0xb6a9,	// (0x00044c31) indicator_ps_pane_g1

0x8bf1,	// (0x00042179) ai_gene_pane_ParamLimits

0x8bf1,	// (0x00042179) ai_gene_pane

0x8c08,	// (0x00042190) ai_links_pane_ParamLimits

0x8c08,	// (0x00042190) ai_links_pane

0x8c20,	// (0x000421a8) indicator_pane_cp1_ParamLimits

0x8c20,	// (0x000421a8) indicator_pane_cp1

0x8c2f,	// (0x000421b7) main_pane_idle_g1_cp_ParamLimits

0x8c2f,	// (0x000421b7) main_pane_idle_g1_cp

0x8c47,	// (0x000421cf) popup_ai_links_title_window

0x8c50,	// (0x000421d8) soft_indicator_pane_cp1_ParamLimits

0x8c50,	// (0x000421d8) soft_indicator_pane_cp1

0x3251,	// (0x0003c7d9) ai_links_pane_g1

0x325a,	// (0x0003c7e2) grid_ai_links_pane

0xc74b,	// (0x00045cd3) ai_gene_pane_1

0x323f,	// (0x0003c7c7) ai_gene_pane_2

0x3248,	// (0x0003c7d0) list_highlight_pane_cp4

0xc727,	// (0x00045caf) cell_ai_link_pane_ParamLimits

0xc727,	// (0x00045caf) cell_ai_link_pane

0x3210,	// (0x0003c798) cell_ai_link_pane_g1

0xb7d6,	// (0x00044d5e) cell_ai_link_pane_g2

0x0001,

0xf8d7,	// (0x00048e5f) cell_ai_link_pane_g

0xb549,	// (0x00044ad1) grid_highlight_cp2

0xb549,	// (0x00044ad1) bg_popup_sub_pane_cp1

0xb6c0,	// (0x00044c48) popup_ai_links_title_window_t1

0x3160,	// (0x0003c6e8) ai_gene_pane_1_g1_ParamLimits

0x3160,	// (0x0003c6e8) ai_gene_pane_1_g1

0x316c,	// (0x0003c6f4) ai_gene_pane_1_g2_ParamLimits

0x316c,	// (0x0003c6f4) ai_gene_pane_1_g2

0x0001,

0xf8cd,	// (0x00048e55) ai_gene_pane_1_g_ParamLimits

0xf8cd,	// (0x00048e55) ai_gene_pane_1_g

0x3179,	// (0x0003c701) ai_gene_pane_1_t1_ParamLimits

0x3179,	// (0x0003c701) ai_gene_pane_1_t1

0x31ad,	// (0x0003c735) grid_ai_soft_ind_pane

0x314b,	// (0x0003c6d3) ai_gene_pane_2_t1_ParamLimits

0x314b,	// (0x0003c6d3) ai_gene_pane_2_t1

0x8c64,	// (0x000421ec) main_pane_empty_t1_ParamLimits

0x8c64,	// (0x000421ec) main_pane_empty_t1

0x8c7c,	// (0x00042204) main_pane_empty_t2_ParamLimits

0x8c7c,	// (0x00042204) main_pane_empty_t2

0x8c91,	// (0x00042219) main_pane_empty_t3_ParamLimits

0x8c91,	// (0x00042219) main_pane_empty_t3

0x8ca3,	// (0x0004222b) main_pane_empty_t4_ParamLimits

0x8ca3,	// (0x0004222b) main_pane_empty_t4

0x8cb5,	// (0x0004223d) main_pane_empty_t5_ParamLimits

0x8cb5,	// (0x0004223d) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00048ad5) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00048ad5) main_pane_empty_t

0xba38,	// (0x00044fc0) bg_popup_window_pane_ParamLimits

0xba38,	// (0x00044fc0) bg_popup_window_pane

0xc6a1,	// (0x00045c29) find_popup_pane_cp2_ParamLimits

0xc6a1,	// (0x00045c29) find_popup_pane_cp2

0x2ec7,	// (0x0003c44f) heading_pane_ParamLimits

0x2ec7,	// (0x0003c44f) heading_pane

0xb549,	// (0x00044ad1) bg_popup_sub_pane

0xc622,	// (0x00045baa) bg_popup_window_pane_g1_ParamLimits

0xc622,	// (0x00045baa) bg_popup_window_pane_g1

0xc631,	// (0x00045bb9) bg_popup_window_pane_g2_ParamLimits

0xc631,	// (0x00045bb9) bg_popup_window_pane_g2

0xc63d,	// (0x00045bc5) bg_popup_window_pane_g3_ParamLimits

0xc63d,	// (0x00045bc5) bg_popup_window_pane_g3

0xc649,	// (0x00045bd1) bg_popup_window_pane_g4_ParamLimits

0xc649,	// (0x00045bd1) bg_popup_window_pane_g4

0xc658,	// (0x00045be0) bg_popup_window_pane_g5_ParamLimits

0xc658,	// (0x00045be0) bg_popup_window_pane_g5

0xc668,	// (0x00045bf0) bg_popup_window_pane_g6_ParamLimits

0xc668,	// (0x00045bf0) bg_popup_window_pane_g6

0xc674,	// (0x00045bfc) bg_popup_window_pane_g7_ParamLimits

0xc674,	// (0x00045bfc) bg_popup_window_pane_g7

0xc683,	// (0x00045c0b) bg_popup_window_pane_g8_ParamLimits

0xc683,	// (0x00045c0b) bg_popup_window_pane_g8

0xc692,	// (0x00045c1a) bg_popup_window_pane_g9_ParamLimits

0xc692,	// (0x00045c1a) bg_popup_window_pane_g9

0x2ea1,	// (0x0003c429) bg_popup_window_pane_g10_ParamLimits

0x2ea1,	// (0x0003c429) bg_popup_window_pane_g10

0x0009,

0xf895,	// (0x00048e1d) bg_popup_window_pane_g_ParamLimits

0xf895,	// (0x00048e1d) bg_popup_window_pane_g

0x2dca,	// (0x0003c352) bg_popup_heading_pane_ParamLimits

0x2dca,	// (0x0003c352) bg_popup_heading_pane

0x0b1c,	// (0x0003a0a4) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b1c,	// (0x0003a0a4) tabs_4_passive_pane_cp_srt

0x0b2e,	// (0x0003a0b6) tabs_4_passive_pane_srt_ParamLimits

0x2dde,	// (0x0003c366) heading_pane_g2

0x0b2e,	// (0x0003a0b6) tabs_4_passive_pane_srt

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp3_srt

0x2de6,	// (0x0003c36e) heading_pane_t1_ParamLimits

0x2de6,	// (0x0003c36e) heading_pane_t1

0x2dfd,	// (0x0003c385) heading_pane_t2_ParamLimits

0x2dfd,	// (0x0003c385) heading_pane_t2

0x0001,

0xf890,	// (0x00048e18) heading_pane_t_ParamLimits

0xf890,	// (0x00048e18) heading_pane_t

0x2907,	// (0x0003be8f) bg_popup_heading_pane_g1

0x29b6,	// (0x0003bf3e) bg_popup_heading_pane_g2

0x29c0,	// (0x0003bf48) bg_popup_heading_pane_g3

0x29ca,	// (0x0003bf52) bg_popup_heading_pane_g4

0x29d4,	// (0x0003bf5c) bg_popup_heading_pane_g5

0x29de,	// (0x0003bf66) bg_popup_heading_pane_g6

0x29e6,	// (0x0003bf6e) bg_popup_heading_pane_g7

0x29ee,	// (0x0003bf76) bg_popup_heading_pane_g8

0x29f8,	// (0x0003bf80) bg_popup_heading_pane_g9

0x0008,

0xf84c,	// (0x00048dd4) bg_popup_heading_pane_g

0x20c8,	// (0x0003b650) bg_popup_sub_pane_g1

0x20d8,	// (0x0003b660) bg_popup_sub_pane_g2

0x20d0,	// (0x0003b658) bg_popup_sub_pane_g3

0x20e8,	// (0x0003b670) bg_popup_sub_pane_g4

0x20e0,	// (0x0003b668) bg_popup_sub_pane_g5

0x20f0,	// (0x0003b678) bg_popup_sub_pane_g6

0x20f8,	// (0x0003b680) bg_popup_sub_pane_g7

0x2108,	// (0x0003b690) bg_popup_sub_pane_g8

0x2100,	// (0x0003b688) bg_popup_sub_pane_g9

0x0008,

0xf826,	// (0x00048dae) bg_popup_sub_pane_g

0xb597,	// (0x00044b1f) bg_popup_window_pane_cp5_ParamLimits

0xb597,	// (0x00044b1f) bg_popup_window_pane_cp5

0xb6dd,	// (0x00044c65) popup_note_window_g1_ParamLimits

0xb6dd,	// (0x00044c65) popup_note_window_g1

0xb6e9,	// (0x00044c71) popup_note_window_t1_ParamLimits

0xb6e9,	// (0x00044c71) popup_note_window_t1

0xb6ff,	// (0x00044c87) popup_note_window_t2_ParamLimits

0xb6ff,	// (0x00044c87) popup_note_window_t2

0xb715,	// (0x00044c9d) popup_note_window_t3_ParamLimits

0xb715,	// (0x00044c9d) popup_note_window_t3

0xb72b,	// (0x00044cb3) popup_note_window_t4_ParamLimits

0xb72b,	// (0x00044cb3) popup_note_window_t4

0xb753,	// (0x00044cdb) popup_note_window_t5_ParamLimits

0xb753,	// (0x00044cdb) popup_note_window_t5

0x0004,

0xf558,	// (0x00048ae0) popup_note_window_t_ParamLimits

0xf558,	// (0x00048ae0) popup_note_window_t

0xb777,	// (0x00044cff) bg_popup_window_pane_cp6_ParamLimits

0xb777,	// (0x00044cff) bg_popup_window_pane_cp6

0x2883,	// (0x0003be0b) popup_note_image_window_g1_ParamLimits

0x2883,	// (0x0003be0b) popup_note_image_window_g1

0xc4c7,	// (0x00045a4f) popup_note_image_window_g2_ParamLimits

0xc4c7,	// (0x00045a4f) popup_note_image_window_g2

0x0001,

0xf81a,	// (0x00048da2) popup_note_image_window_g_ParamLimits

0xf81a,	// (0x00048da2) popup_note_image_window_g

0x28a8,	// (0x0003be30) popup_note_image_window_t1_ParamLimits

0x28a8,	// (0x0003be30) popup_note_image_window_t1

0x28c1,	// (0x0003be49) popup_note_image_window_t2_ParamLimits

0x28c1,	// (0x0003be49) popup_note_image_window_t2

0x28da,	// (0x0003be62) popup_note_image_window_t3_ParamLimits

0x28da,	// (0x0003be62) popup_note_image_window_t3

0x0002,

0xf81f,	// (0x00048da7) popup_note_image_window_t_ParamLimits

0xf81f,	// (0x00048da7) popup_note_image_window_t

0x274c,	// (0x0003bcd4) bg_popup_window_pane_cp7_ParamLimits

0x274c,	// (0x0003bcd4) bg_popup_window_pane_cp7

0x277c,	// (0x0003bd04) popup_note_wait_window_g1_ParamLimits

0x277c,	// (0x0003bd04) popup_note_wait_window_g1

0x2788,	// (0x0003bd10) popup_note_wait_window_g2_ParamLimits

0x2788,	// (0x0003bd10) popup_note_wait_window_g2

0x0002,

0xf808,	// (0x00048d90) popup_note_wait_window_g_ParamLimits

0xf808,	// (0x00048d90) popup_note_wait_window_g

0x27a0,	// (0x0003bd28) popup_note_wait_window_t1_ParamLimits

0x27a0,	// (0x0003bd28) popup_note_wait_window_t1

0xc468,	// (0x000459f0) popup_note_wait_window_t2_ParamLimits

0xc468,	// (0x000459f0) popup_note_wait_window_t2

0xc485,	// (0x00045a0d) popup_note_wait_window_t3_ParamLimits

0xc485,	// (0x00045a0d) popup_note_wait_window_t3

0xc498,	// (0x00045a20) popup_note_wait_window_t4_ParamLimits

0xc498,	// (0x00045a20) popup_note_wait_window_t4

0x0004,

0xf80f,	// (0x00048d97) popup_note_wait_window_t_ParamLimits

0xf80f,	// (0x00048d97) popup_note_wait_window_t

0x281c,	// (0x0003bda4) wait_bar_pane_ParamLimits

0x281c,	// (0x0003bda4) wait_bar_pane

0xb549,	// (0x00044ad1) wait_anim_pane

0xb549,	// (0x00044ad1) wait_border_pane

0xb53f,	// (0x00044ac7) wait_anim_pane_g1

0xb53f,	// (0x00044ac7) wait_anim_pane_g2

0x0001,

0xf6c8,	// (0x00048c50) wait_anim_pane_g

0x26f8,	// (0x0003bc80) wait_border_pane_g1

0x2703,	// (0x0003bc8b) wait_border_pane_g2

0x270c,	// (0x0003bc94) wait_border_pane_g3

0x0002,

0xf801,	// (0x00048d89) wait_border_pane_g

0x2563,	// (0x0003baeb) bg_popup_window_pane_cp16_ParamLimits

0x2563,	// (0x0003baeb) bg_popup_window_pane_cp16

0xc418,	// (0x000459a0) indicator_popup_pane_cp4_ParamLimits

0xc418,	// (0x000459a0) indicator_popup_pane_cp4

0x2677,	// (0x0003bbff) popup_query_data_window_t1_ParamLimits

0x2677,	// (0x0003bbff) popup_query_data_window_t1

0x2689,	// (0x0003bc11) popup_query_data_window_t2_ParamLimits

0x2689,	// (0x0003bc11) popup_query_data_window_t2

0x26a2,	// (0x0003bc2a) popup_query_data_window_t3_ParamLimits

0x26a2,	// (0x0003bc2a) popup_query_data_window_t3

0x0002,

0xf7fa,	// (0x00048d82) popup_query_data_window_t_ParamLimits

0xf7fa,	// (0x00048d82) popup_query_data_window_t

0xc42c,	// (0x000459b4) query_popup_data_pane_ParamLimits

0xc42c,	// (0x000459b4) query_popup_data_pane

0xc440,	// (0x000459c8) query_popup_data_pane_cp1_ParamLimits

0xc440,	// (0x000459c8) query_popup_data_pane_cp1

0x2563,	// (0x0003baeb) bg_popup_window_pane_cp10_ParamLimits

0x2563,	// (0x0003baeb) bg_popup_window_pane_cp10

0xa9c7,	// (0x00043f4f) indicator_popup_pane_ParamLimits

0xa9c7,	// (0x00043f4f) indicator_popup_pane

0xa9e9,	// (0x00043f71) popup_query_code_window_t1_ParamLimits

0xa9e9,	// (0x00043f71) popup_query_code_window_t1

0xc3cf,	// (0x00045957) popup_query_code_window_t2_ParamLimits

0xc3cf,	// (0x00045957) popup_query_code_window_t2

0x261a,	// (0x0003bba2) popup_query_code_window_t3_ParamLimits

0x261a,	// (0x0003bba2) popup_query_code_window_t3

0x0002,

0xf7f3,	// (0x00048d7b) popup_query_code_window_t_ParamLimits

0xf7f3,	// (0x00048d7b) popup_query_code_window_t

0x2649,	// (0x0003bbd1) query_popup_pane_ParamLimits

0x2649,	// (0x0003bbd1) query_popup_pane

0xb777,	// (0x00044cff) bg_popup_window_pane_cp15_ParamLimits

0xb777,	// (0x00044cff) bg_popup_window_pane_cp15

0x8ced,	// (0x00042275) indicator_popup_pane_cp1_ParamLimits

0x8ced,	// (0x00042275) indicator_popup_pane_cp1

0x8d00,	// (0x00042288) indicator_popup_pane_cp2_ParamLimits

0x8d00,	// (0x00042288) indicator_popup_pane_cp2

0x8d13,	// (0x0004229b) popup_query_data_code_window_g1_ParamLimits

0x8d13,	// (0x0004229b) popup_query_data_code_window_g1

0xb795,	// (0x00044d1d) popup_query_data_code_window_t1_ParamLimits

0xb795,	// (0x00044d1d) popup_query_data_code_window_t1

0xb7a7,	// (0x00044d2f) popup_query_data_code_window_t2_ParamLimits

0xb7a7,	// (0x00044d2f) popup_query_data_code_window_t2

0x8d26,	// (0x000422ae) popup_query_data_code_window_t3_ParamLimits

0x8d26,	// (0x000422ae) popup_query_data_code_window_t3

0x8d3c,	// (0x000422c4) popup_query_data_code_window_t4_ParamLimits

0x8d3c,	// (0x000422c4) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00048aeb) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00048aeb) popup_query_data_code_window_t

0x06df,	// (0x00039c67) list_single_midp_graphic_pane_g3

0x8d54,	// (0x000422dc) query_popup_data_pane_cp2_ParamLimits

0x8d67,	// (0x000422ef) query_popup_pane_cp2_ParamLimits

0x8d67,	// (0x000422ef) query_popup_pane_cp2

0xb549,	// (0x00044ad1) bg_popup_window_pane_cp11

0x2547,	// (0x0003bacf) heading_pane_cp5

0x254f,	// (0x0003bad7) listscroll_popup_info_pane

0xb549,	// (0x00044ad1) input_focus_pane_cp3

0xb7b9,	// (0x00044d41) query_popup_pane_t1

0xb7c7,	// (0x00044d4f) list_popup_info_pane_ParamLimits

0xb7c7,	// (0x00044d4f) list_popup_info_pane

0xb7d6,	// (0x00044d5e) listscroll_popup_info_pane_g1

0xb7de,	// (0x00044d66) scroll_pane_cp7

0x8d7a,	// (0x00042302) popup_info_list_pane_t1_ParamLimits

0x8d7a,	// (0x00042302) popup_info_list_pane_t1

0x8d94,	// (0x0004231c) popup_info_list_pane_t2_ParamLimits

0x8d94,	// (0x0004231c) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00048af4) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00048af4) popup_info_list_pane_t

0xb549,	// (0x00044ad1) bg_popup_window_pane_cp12

0xcb2b,	// (0x000460b3) find_popup_pane

0xb5a5,	// (0x00044b2d) bg_popup_window_pane_cp3

0xb7e8,	// (0x00044d70) heading_pane_cp3

0xb7f7,	// (0x00044d7f) listscroll_popup_graphic_pane

0xb549,	// (0x00044ad1) bg_popup_window_pane_cp4

0x8dfe,	// (0x00042386) heading_pane_cp4

0xb807,	// (0x00044d8f) listscroll_popup_colour_pane

0x8e08,	// (0x00042390) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8e08,	// (0x00042390) cell_large_graphic_colour_none_popup_pane

0x8e1c,	// (0x000423a4) grid_large_graphic_colour_popup_pane_ParamLimits

0x8e1c,	// (0x000423a4) grid_large_graphic_colour_popup_pane

0x8e40,	// (0x000423c8) listscroll_popup_colour_pane_g1_ParamLimits

0x8e40,	// (0x000423c8) listscroll_popup_colour_pane_g1

0x8e57,	// (0x000423df) listscroll_popup_colour_pane_g2_ParamLimits

0x8e57,	// (0x000423df) listscroll_popup_colour_pane_g2

0x8e6b,	// (0x000423f3) listscroll_popup_colour_pane_g3_ParamLimits

0x8e6b,	// (0x000423f3) listscroll_popup_colour_pane_g3

0x8e7b,	// (0x00042403) listscroll_popup_colour_pane_g4_ParamLimits

0x8e7b,	// (0x00042403) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00048af9) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00048af9) listscroll_popup_colour_pane_g

0xb80f,	// (0x00044d97) scroll_pane_cp6_ParamLimits

0xb80f,	// (0x00044d97) scroll_pane_cp6

0x8e8b,	// (0x00042413) cell_large_graphic_colour_popup_pane_ParamLimits

0x8e8b,	// (0x00042413) cell_large_graphic_colour_popup_pane

0x8eaa,	// (0x00042432) cell_large_graphic_colour_none_popup_pane_t1

0xb549,	// (0x00044ad1) grid_highlight_pane_cp5

0xb821,	// (0x00044da9) cell_large_graphic_colour_popup_pane_g1

0xb829,	// (0x00044db1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00048b02) cell_large_graphic_colour_popup_pane_g

0xb831,	// (0x00044db9) cell_large_graphic_colour_popup_pane_g2_copy1

0xb83a,	// (0x00044dc2) grid_highlight_pane_cp4

0xb842,	// (0x00044dca) bg_popup_window_pane_cp8_ParamLimits

0xb842,	// (0x00044dca) bg_popup_window_pane_cp8

0x8eb9,	// (0x00042441) popup_snote_single_text_window_g1_ParamLimits

0x8eb9,	// (0x00042441) popup_snote_single_text_window_g1

0x8ecb,	// (0x00042453) popup_snote_single_text_window_t1_ParamLimits

0x8ecb,	// (0x00042453) popup_snote_single_text_window_t1

0x8ede,	// (0x00042466) popup_snote_single_text_window_t2_ParamLimits

0x8ede,	// (0x00042466) popup_snote_single_text_window_t2

0x8ef1,	// (0x00042479) popup_snote_single_text_window_t3_ParamLimits

0x8ef1,	// (0x00042479) popup_snote_single_text_window_t3

0x8f2a,	// (0x000424b2) popup_snote_single_text_window_t4_ParamLimits

0x8f2a,	// (0x000424b2) popup_snote_single_text_window_t4

0x8f5e,	// (0x000424e6) popup_snote_single_text_window_t5_ParamLimits

0x8f5e,	// (0x000424e6) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00048b07) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00048b07) popup_snote_single_text_window_t

0xb85d,	// (0x00044de5) bg_popup_window_pane_cp9_ParamLimits

0xb85d,	// (0x00044de5) bg_popup_window_pane_cp9

0x8eb9,	// (0x00042441) popup_snote_single_graphic_window_g1_ParamLimits

0x8eb9,	// (0x00042441) popup_snote_single_graphic_window_g1

0xb86b,	// (0x00044df3) popup_snote_single_graphic_window_g2_ParamLimits

0xb86b,	// (0x00044df3) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00048b12) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00048b12) popup_snote_single_graphic_window_g

0xb877,	// (0x00044dff) popup_snote_single_graphic_window_t1_ParamLimits

0xb877,	// (0x00044dff) popup_snote_single_graphic_window_t1

0xb88a,	// (0x00044e12) popup_snote_single_graphic_window_t2_ParamLimits

0xb88a,	// (0x00044e12) popup_snote_single_graphic_window_t2

0x8ef1,	// (0x00042479) popup_snote_single_graphic_window_t3_ParamLimits

0x8ef1,	// (0x00042479) popup_snote_single_graphic_window_t3

0x8f2a,	// (0x000424b2) popup_snote_single_graphic_window_t4_ParamLimits

0x8f2a,	// (0x000424b2) popup_snote_single_graphic_window_t4

0x8f8d,	// (0x00042515) popup_snote_single_graphic_window_t5_ParamLimits

0x8f8d,	// (0x00042515) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00048b17) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00048b17) popup_snote_single_graphic_window_t

0x37f0,	// (0x0003cd78) grid_graphic_popup_pane_ParamLimits

0x37f0,	// (0x0003cd78) grid_graphic_popup_pane

0x381a,	// (0x0003cda2) listscroll_popup_graphic_pane_g1_ParamLimits

0x381a,	// (0x0003cda2) listscroll_popup_graphic_pane_g1

0xcac9,	// (0x00046051) listscroll_popup_graphic_pane_g2_ParamLimits

0xcac9,	// (0x00046051) listscroll_popup_graphic_pane_g2

0x0001,

0xf970,	// (0x00048ef8) listscroll_popup_graphic_pane_g_ParamLimits

0xf970,	// (0x00048ef8) listscroll_popup_graphic_pane_g

0x3842,	// (0x0003cdca) scroll_pane_cp5

0xca84,	// (0x0004600c) cell_graphic_popup_pane_ParamLimits

0xca84,	// (0x0004600c) cell_graphic_popup_pane

0x3760,	// (0x0003cce8) cell_graphic_popup_pane_g1

0x3768,	// (0x0003ccf0) cell_graphic_popup_pane_g2

0xb831,	// (0x00044db9) cell_graphic_popup_pane_g3

0x0002,

0xf969,	// (0x00048ef1) cell_graphic_popup_pane_g

0x3771,	// (0x0003ccf9) cell_graphic_popup_pane_t2

0xb83a,	// (0x00044dc2) grid_highlight_pane_cp3

0xb8af,	// (0x00044e37) list_gen_pane_ParamLimits

0xb8af,	// (0x00044e37) list_gen_pane

0xb8d7,	// (0x00044e5f) scroll_pane

0xc9ee,	// (0x00045f76) bg_list_pane_g1_ParamLimits

0xc9ee,	// (0x00045f76) bg_list_pane_g1

0xca09,	// (0x00045f91) bg_list_pane_g2_ParamLimits

0xca09,	// (0x00045f91) bg_list_pane_g2

0xca1c,	// (0x00045fa4) bg_list_pane_g3_ParamLimits

0xca1c,	// (0x00045fa4) bg_list_pane_g3

0xca2e,	// (0x00045fb6) bg_list_pane_g4_ParamLimits

0xca2e,	// (0x00045fb6) bg_list_pane_g4

0xca40,	// (0x00045fc8) bg_list_pane_g5_ParamLimits

0xca40,	// (0x00045fc8) bg_list_pane_g5

0x0004,

0xf95e,	// (0x00048ee6) bg_list_pane_g_ParamLimits

0xf95e,	// (0x00048ee6) bg_list_pane_g

0xc9b5,	// (0x00045f3d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double2_graphic_large_graphic_pane

0xc9b5,	// (0x00045f3d) list_double2_graphic_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double2_graphic_pane

0xc9b5,	// (0x00045f3d) list_double2_large_graphic_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double2_large_graphic_pane

0xc9b5,	// (0x00045f3d) list_double2_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double2_pane

0xc9b5,	// (0x00045f3d) list_double_graphic_heading_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_graphic_heading_pane

0xc9b5,	// (0x00045f3d) list_double_graphic_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_graphic_pane

0xc9b5,	// (0x00045f3d) list_double_heading_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_heading_pane

0xc9b5,	// (0x00045f3d) list_double_large_graphic_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_large_graphic_pane

0xc9b5,	// (0x00045f3d) list_double_number_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_number_pane

0xc9b5,	// (0x00045f3d) list_double_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_pane

0xc9b5,	// (0x00045f3d) list_double_time_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_double_time_pane

0xc9b5,	// (0x00045f3d) list_setting_number_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_setting_number_pane

0xc9b5,	// (0x00045f3d) list_setting_pane_ParamLimits

0xc9b5,	// (0x00045f3d) list_setting_pane

0x943d,	// (0x000429c5) list_single_2graphic_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_2graphic_pane

0x943d,	// (0x000429c5) list_single_graphic_heading_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_graphic_heading_pane

0x943d,	// (0x000429c5) list_single_graphic_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_graphic_pane

0x943d,	// (0x000429c5) list_single_heading_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_heading_pane

0x943d,	// (0x000429c5) list_single_large_graphic_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_large_graphic_pane

0x943d,	// (0x000429c5) list_single_number_heading_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_number_heading_pane

0x943d,	// (0x000429c5) list_single_number_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_number_pane

0x943d,	// (0x000429c5) list_single_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_pane

0xb549,	// (0x00044ad1) list_highlight_pane_cp1

0xdbd3,	// (0x0004715b) list_single_pane_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_pane_g1

0xdbdf,	// (0x00047167) list_single_pane_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_pane_g

0x8fc6,	// (0x0004254e) list_single_pane_t1_ParamLimits

0x8fc6,	// (0x0004254e) list_single_pane_t1

0xdbd3,	// (0x0004715b) list_single_number_pane_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_number_pane_g1

0xdbdf,	// (0x00047167) list_single_number_pane_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_number_pane_g

0x8fc6,	// (0x0004254e) list_single_number_pane_t1_ParamLimits

0x8fc6,	// (0x0004254e) list_single_number_pane_t1

0xaa5b,	// (0x00043fe3) list_single_number_pane_t2_ParamLimits

0xaa5b,	// (0x00043fe3) list_single_number_pane_t2

0x0001,

0xf91f,	// (0x00048ea7) list_single_number_pane_t_ParamLimits

0xf91f,	// (0x00048ea7) list_single_number_pane_t

0xdbc7,	// (0x0004714f) list_single_graphic_pane_g1_ParamLimits

0xdbc7,	// (0x0004714f) list_single_graphic_pane_g1

0xdbd3,	// (0x0004715b) list_single_graphic_pane_g2_ParamLimits

0xdbd3,	// (0x0004715b) list_single_graphic_pane_g2

0xdbdf,	// (0x00047167) list_single_graphic_pane_g3_ParamLimits

0xdbdf,	// (0x00047167) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00048b22) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00048b22) list_single_graphic_pane_g

0x8fc6,	// (0x0004254e) list_single_graphic_pane_t1_ParamLimits

0x8fc6,	// (0x0004254e) list_single_graphic_pane_t1

0xdbd3,	// (0x0004715b) list_single_heading_pane_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_heading_pane_g1

0xdbdf,	// (0x00047167) list_single_heading_pane_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_heading_pane_g

0xdbeb,	// (0x00047173) list_single_heading_pane_t1_ParamLimits

0xdbeb,	// (0x00047173) list_single_heading_pane_t1

0xdc01,	// (0x00047189) list_single_heading_pane_t2_ParamLimits

0xdc01,	// (0x00047189) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00048b2e) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00048b2e) list_single_heading_pane_t

0xdbd3,	// (0x0004715b) list_single_number_heading_pane_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_number_heading_pane_g1

0xdbdf,	// (0x00047167) list_single_number_heading_pane_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_number_heading_pane_g

0xdbeb,	// (0x00047173) list_single_number_heading_pane_t1_ParamLimits

0xdbeb,	// (0x00047173) list_single_number_heading_pane_t1

0xdc13,	// (0x0004719b) list_single_number_heading_pane_t2_ParamLimits

0xdc13,	// (0x0004719b) list_single_number_heading_pane_t2

0xdc25,	// (0x000471ad) list_single_number_heading_pane_t3_ParamLimits

0xdc25,	// (0x000471ad) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00048b33) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00048b33) list_single_number_heading_pane_t

0xdbc7,	// (0x0004714f) list_single_graphic_heading_pane_g1_ParamLimits

0xdbc7,	// (0x0004714f) list_single_graphic_heading_pane_g1

0x8fdc,	// (0x00042564) list_single_graphic_heading_pane_g4_ParamLimits

0x8fdc,	// (0x00042564) list_single_graphic_heading_pane_g4

0xdbdf,	// (0x00047167) list_single_graphic_heading_pane_g5_ParamLimits

0xdbdf,	// (0x00047167) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00048b3a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00048b3a) list_single_graphic_heading_pane_g

0xdbeb,	// (0x00047173) list_single_graphic_heading_pane_t1_ParamLimits

0xdbeb,	// (0x00047173) list_single_graphic_heading_pane_t1

0x8fed,	// (0x00042575) list_single_graphic_heading_pane_t2_ParamLimits

0x8fed,	// (0x00042575) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00048b41) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00048b41) list_single_graphic_heading_pane_t

0xdc37,	// (0x000471bf) list_single_large_graphic_pane_g1_ParamLimits

0xdc37,	// (0x000471bf) list_single_large_graphic_pane_g1

0xdbd3,	// (0x0004715b) list_single_large_graphic_pane_g2_ParamLimits

0xdbd3,	// (0x0004715b) list_single_large_graphic_pane_g2

0xdbdf,	// (0x00047167) list_single_large_graphic_pane_g3_ParamLimits

0xdbdf,	// (0x00047167) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00048b46) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00048b46) list_single_large_graphic_pane_g

0x2703,	// (0x0003bc8b) wait_border_pane_g2_copy1

0x8fff,	// (0x00042587) list_single_large_graphic_pane_g4_cp2

0xdc43,	// (0x000471cb) list_single_large_graphic_pane_t1_ParamLimits

0xdc43,	// (0x000471cb) list_single_large_graphic_pane_t1

0xdc59,	// (0x000471e1) list_double_pane_g1_ParamLimits

0xdc59,	// (0x000471e1) list_double_pane_g1

0xdc65,	// (0x000471ed) list_double_pane_g2_ParamLimits

0xdc65,	// (0x000471ed) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00048b4d) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00048b4d) list_double_pane_g

0x9007,	// (0x0004258f) list_double_pane_t1_ParamLimits

0x9007,	// (0x0004258f) list_double_pane_t1

0x901d,	// (0x000425a5) list_double_pane_t2_ParamLimits

0x901d,	// (0x000425a5) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00048b52) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00048b52) list_double_pane_t

0x902f,	// (0x000425b7) list_double2_pane_g1_ParamLimits

0x902f,	// (0x000425b7) list_double2_pane_g1

0xdc65,	// (0x000471ed) list_double2_pane_g2_ParamLimits

0xdc65,	// (0x000471ed) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00048b57) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00048b57) list_double2_pane_g

0x9007,	// (0x0004258f) list_double2_pane_t1_ParamLimits

0x9007,	// (0x0004258f) list_double2_pane_t1

0x9040,	// (0x000425c8) list_double2_pane_t2_ParamLimits

0x9040,	// (0x000425c8) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00048b5c) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00048b5c) list_double2_pane_t

0xdc59,	// (0x000471e1) list_double_number_pane_g1_ParamLimits

0xdc59,	// (0x000471e1) list_double_number_pane_g1

0xdc65,	// (0x000471ed) list_double_number_pane_g2_ParamLimits

0xdc65,	// (0x000471ed) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00048b4d) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00048b4d) list_double_number_pane_g

0x9052,	// (0x000425da) list_double_number_pane_t1_ParamLimits

0x9052,	// (0x000425da) list_double_number_pane_t1

0x9007,	// (0x0004258f) list_double_number_pane_t2_ParamLimits

0x9007,	// (0x0004258f) list_double_number_pane_t2

0x901d,	// (0x000425a5) list_double_number_pane_t3_ParamLimits

0x901d,	// (0x000425a5) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00048b61) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00048b61) list_double_number_pane_t

0x9064,	// (0x000425ec) list_double_graphic_pane_g1_ParamLimits

0x9064,	// (0x000425ec) list_double_graphic_pane_g1

0xdc71,	// (0x000471f9) list_double_graphic_pane_g2_ParamLimits

0xdc71,	// (0x000471f9) list_double_graphic_pane_g2

0xdc80,	// (0x00047208) list_double_graphic_pane_g3_ParamLimits

0xdc80,	// (0x00047208) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00048b68) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00048b68) list_double_graphic_pane_g

0x9007,	// (0x0004258f) list_double_graphic_pane_t1_ParamLimits

0x9007,	// (0x0004258f) list_double_graphic_pane_t1

0x901d,	// (0x000425a5) list_double_graphic_pane_t2_ParamLimits

0x901d,	// (0x000425a5) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x00048b52) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x00048b52) list_double_graphic_pane_t

0x9064,	// (0x000425ec) list_double2_graphic_pane_g1_ParamLimits

0x9064,	// (0x000425ec) list_double2_graphic_pane_g1

0xdc8c,	// (0x00047214) list_double2_graphic_pane_g2_ParamLimits

0xdc8c,	// (0x00047214) list_double2_graphic_pane_g2

0xdc98,	// (0x00047220) list_double2_graphic_pane_g3_ParamLimits

0xdc98,	// (0x00047220) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x00048b71) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x00048b71) list_double2_graphic_pane_g

0x9007,	// (0x0004258f) list_double2_graphic_pane_t1_ParamLimits

0x9007,	// (0x0004258f) list_double2_graphic_pane_t1

0x9040,	// (0x000425c8) list_double2_graphic_pane_t2_ParamLimits

0x9040,	// (0x000425c8) list_double2_graphic_pane_t2

0x0001,

0xf5d4,	// (0x00048b5c) list_double2_graphic_pane_t_ParamLimits

0xf5d4,	// (0x00048b5c) list_double2_graphic_pane_t

0x907c,	// (0x00042604) list_double_large_graphic_pane_g1_ParamLimits

0x907c,	// (0x00042604) list_double_large_graphic_pane_g1

0x902f,	// (0x000425b7) list_double_large_graphic_pane_g2_ParamLimits

0x902f,	// (0x000425b7) list_double_large_graphic_pane_g2

0xdc65,	// (0x000471ed) list_double_large_graphic_pane_g3_ParamLimits

0xdc65,	// (0x000471ed) list_double_large_graphic_pane_g3

0x908f,	// (0x00042617) list_double_large_graphic_pane_g4_ParamLimits

0x908f,	// (0x00042617) list_double_large_graphic_pane_g4

0x0004,

0xf5f0,	// (0x00048b78) list_double_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00048b78) list_double_large_graphic_pane_g

0x90a1,	// (0x00042629) list_double_large_graphic_pane_t1_ParamLimits

0x90a1,	// (0x00042629) list_double_large_graphic_pane_t1

0x90ba,	// (0x00042642) list_double_large_graphic_pane_t2_ParamLimits

0x90ba,	// (0x00042642) list_double_large_graphic_pane_t2

0x0001,

0xf5fb,	// (0x00048b83) list_double_large_graphic_pane_t_ParamLimits

0xf5fb,	// (0x00048b83) list_double_large_graphic_pane_t

0x90cc,	// (0x00042654) list_double2_large_graphic_pane_g1_ParamLimits

0x90cc,	// (0x00042654) list_double2_large_graphic_pane_g1

0x902f,	// (0x000425b7) list_double2_large_graphic_pane_g2_ParamLimits

0x902f,	// (0x000425b7) list_double2_large_graphic_pane_g2

0xdc65,	// (0x000471ed) list_double2_large_graphic_pane_g3_ParamLimits

0xdc65,	// (0x000471ed) list_double2_large_graphic_pane_g3

0x0002,

0xf600,	// (0x00048b88) list_double2_large_graphic_pane_g_ParamLimits

0xf600,	// (0x00048b88) list_double2_large_graphic_pane_g

0x90d8,	// (0x00042660) list_double2_large_graphic_pane_t1_ParamLimits

0x90d8,	// (0x00042660) list_double2_large_graphic_pane_t1

0x90ee,	// (0x00042676) list_double2_large_graphic_pane_t2_ParamLimits

0x90ee,	// (0x00042676) list_double2_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00048b8f) list_double2_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00048b8f) list_double2_large_graphic_pane_t

0x9100,	// (0x00042688) list_double_heading_pane_g1_ParamLimits

0x9100,	// (0x00042688) list_double_heading_pane_g1

0xdcb9,	// (0x00047241) list_double_heading_pane_g2_ParamLimits

0xdcb9,	// (0x00047241) list_double_heading_pane_g2

0x0001,

0xf60c,	// (0x00048b94) list_double_heading_pane_g_ParamLimits

0xf60c,	// (0x00048b94) list_double_heading_pane_g

0x9111,	// (0x00042699) list_double_heading_pane_t1_ParamLimits

0x9111,	// (0x00042699) list_double_heading_pane_t1

0x9040,	// (0x000425c8) list_double_heading_pane_t2_ParamLimits

0x9040,	// (0x000425c8) list_double_heading_pane_t2

0x0001,

0xf611,	// (0x00048b99) list_double_heading_pane_t_ParamLimits

0xf611,	// (0x00048b99) list_double_heading_pane_t

0x9127,	// (0x000426af) list_double_graphic_heading_pane_g1_ParamLimits

0x9127,	// (0x000426af) list_double_graphic_heading_pane_g1

0x9100,	// (0x00042688) list_double_graphic_heading_pane_g2_ParamLimits

0x9100,	// (0x00042688) list_double_graphic_heading_pane_g2

0xdcb9,	// (0x00047241) list_double_graphic_heading_pane_g3_ParamLimits

0xdcb9,	// (0x00047241) list_double_graphic_heading_pane_g3

0x0002,

0xf616,	// (0x00048b9e) list_double_graphic_heading_pane_g_ParamLimits

0xf616,	// (0x00048b9e) list_double_graphic_heading_pane_g

0x9111,	// (0x00042699) list_double_graphic_heading_pane_t1_ParamLimits

0x9111,	// (0x00042699) list_double_graphic_heading_pane_t1

0x9040,	// (0x000425c8) list_double_graphic_heading_pane_t2_ParamLimits

0x9040,	// (0x000425c8) list_double_graphic_heading_pane_t2

0x0001,

0xf611,	// (0x00048b99) list_double_graphic_heading_pane_t_ParamLimits

0xf611,	// (0x00048b99) list_double_graphic_heading_pane_t

0x902f,	// (0x000425b7) list_double_time_pane_g1_ParamLimits

0x902f,	// (0x000425b7) list_double_time_pane_g1

0xdc65,	// (0x000471ed) list_double_time_pane_g2_ParamLimits

0xdc65,	// (0x000471ed) list_double_time_pane_g2

0x0001,

0xf5cf,	// (0x00048b57) list_double_time_pane_g_ParamLimits

0xf5cf,	// (0x00048b57) list_double_time_pane_g

0xdcc5,	// (0x0004724d) list_double_time_pane_t1_ParamLimits

0xdcc5,	// (0x0004724d) list_double_time_pane_t1

0xdcdb,	// (0x00047263) list_double_time_pane_t2_ParamLimits

0xdcdb,	// (0x00047263) list_double_time_pane_t2

0xdced,	// (0x00047275) list_double_time_pane_t3_ParamLimits

0xdced,	// (0x00047275) list_double_time_pane_t3

0xdcff,	// (0x00047287) list_double_time_pane_t4_ParamLimits

0xdcff,	// (0x00047287) list_double_time_pane_t4

0x0003,

0xf61d,	// (0x00048ba5) list_double_time_pane_t_ParamLimits

0xf61d,	// (0x00048ba5) list_double_time_pane_t

0xdd11,	// (0x00047299) list_setting_pane_g1_ParamLimits

0xdd11,	// (0x00047299) list_setting_pane_g1

0xdd1d,	// (0x000472a5) list_setting_pane_g2_ParamLimits

0xdd1d,	// (0x000472a5) list_setting_pane_g2

0x0001,

0xf626,	// (0x00048bae) list_setting_pane_g_ParamLimits

0xf626,	// (0x00048bae) list_setting_pane_g

0x9133,	// (0x000426bb) list_setting_pane_t1_ParamLimits

0x9133,	// (0x000426bb) list_setting_pane_t1

0x914a,	// (0x000426d2) list_setting_pane_t2_ParamLimits

0x914a,	// (0x000426d2) list_setting_pane_t2

0x0002,

0xf62b,	// (0x00048bb3) list_setting_pane_t_ParamLimits

0xf62b,	// (0x00048bb3) list_setting_pane_t

0x9189,	// (0x00042711) set_value_pane_cp_ParamLimits

0x9189,	// (0x00042711) set_value_pane_cp

0xdd29,	// (0x000472b1) list_setting_number_pane_g1_ParamLimits

0xdd29,	// (0x000472b1) list_setting_number_pane_g1

0xdd35,	// (0x000472bd) list_setting_number_pane_g2_ParamLimits

0xdd35,	// (0x000472bd) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x00048bba) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x00048bba) list_setting_number_pane_g

0x9195,	// (0x0004271d) list_setting_number_pane_t1_ParamLimits

0x9195,	// (0x0004271d) list_setting_number_pane_t1

0xdd41,	// (0x000472c9) list_setting_number_pane_t2_ParamLimits

0xdd41,	// (0x000472c9) list_setting_number_pane_t2

0x91a9,	// (0x00042731) list_setting_number_pane_t3_ParamLimits

0x91a9,	// (0x00042731) list_setting_number_pane_t3

0x0003,

0xf637,	// (0x00048bbf) list_setting_number_pane_t_ParamLimits

0xf637,	// (0x00048bbf) list_setting_number_pane_t

0x9189,	// (0x00042711) set_value_pane_ParamLimits

0x9189,	// (0x00042711) set_value_pane

0xb90b,	// (0x00044e93) bg_set_opt_pane_ParamLimits

0xb90b,	// (0x00044e93) bg_set_opt_pane

0x91c1,	// (0x00042749) set_value_pane_t1

0xb92c,	// (0x00044eb4) slider_set_pane_cp3

0x91cf,	// (0x00042757) volume_small_pane_cp

0xb935,	// (0x00044ebd) list_form_gen_pane

0xb93e,	// (0x00044ec6) scroll_pane_cp8

0x91d8,	// (0x00042760) form_field_data_pane_ParamLimits

0x91d8,	// (0x00042760) form_field_data_pane

0x91ef,	// (0x00042777) form_field_data_wide_pane_ParamLimits

0x91ef,	// (0x00042777) form_field_data_wide_pane

0x920f,	// (0x00042797) form_field_popup_pane_ParamLimits

0x920f,	// (0x00042797) form_field_popup_pane

0x9227,	// (0x000427af) form_field_popup_wide_pane_ParamLimits

0x9227,	// (0x000427af) form_field_popup_wide_pane

0xdd93,	// (0x0004731b) form_field_slider_pane_ParamLimits

0xdd93,	// (0x0004731b) form_field_slider_pane

0x9244,	// (0x000427cc) form_field_slider_wide_pane_ParamLimits

0x9244,	// (0x000427cc) form_field_slider_wide_pane

0xb94f,	// (0x00044ed7) data_form_pane

0x9261,	// (0x000427e9) form_field_data_pane_t1

0xb95b,	// (0x00044ee3) input_focus_pane

0x927b,	// (0x00042803) data_form_wide_pane

0x9298,	// (0x00042820) form_field_data_wide_pane_t1

0xb84f,	// (0x00044dd7) input_focus_pane_cp6

0x92ba,	// (0x00042842) form_field_popup_pane_t1

0xb95b,	// (0x00044ee3) input_focus_pane_cp7

0xb989,	// (0x00044f11) list_form_pane

0x92dc,	// (0x00042864) form_field_popup_wide_pane_t1

0xb95b,	// (0x00044ee3) input_focus_pane_cp8

0xb995,	// (0x00044f1d) list_form_wide_pane

0x92f9,	// (0x00042881) form_field_slider_pane_t1_ParamLimits

0x92f9,	// (0x00042881) form_field_slider_pane_t1

0x9311,	// (0x00042899) form_field_slider_pane_t2_ParamLimits

0x9311,	// (0x00042899) form_field_slider_pane_t2

0x0001,

0xf647,	// (0x00048bcf) form_field_slider_pane_t_ParamLimits

0xf647,	// (0x00048bcf) form_field_slider_pane_t

0xb597,	// (0x00044b1f) input_focus_pane_cp9_ParamLimits

0xb597,	// (0x00044b1f) input_focus_pane_cp9

0x9326,	// (0x000428ae) slider_cont_pane_ParamLimits

0x9326,	// (0x000428ae) slider_cont_pane

0xb9a1,	// (0x00044f29) form_field_slider_wide_pane_t1_ParamLimits

0xb9a1,	// (0x00044f29) form_field_slider_wide_pane_t1

0x933a,	// (0x000428c2) form_field_slider_wide_pane_t2_ParamLimits

0x933a,	// (0x000428c2) form_field_slider_wide_pane_t2

0x0001,

0xf64c,	// (0x00048bd4) form_field_slider_wide_pane_t_ParamLimits

0xf64c,	// (0x00048bd4) form_field_slider_wide_pane_t

0xb597,	// (0x00044b1f) input_focus_pane_cp10_ParamLimits

0xb597,	// (0x00044b1f) input_focus_pane_cp10

0x934c,	// (0x000428d4) slider_cont_pane_cp1_ParamLimits

0x934c,	// (0x000428d4) slider_cont_pane_cp1

0x9360,	// (0x000428e8) slider_form_pane_cp

0xb9b3,	// (0x00044f3b) input_focus_pane_g1

0xb9bb,	// (0x00044f43) input_focus_pane_g2

0xb9c3,	// (0x00044f4b) input_focus_pane_g3

0xb9cb,	// (0x00044f53) input_focus_pane_g4

0xb9d3,	// (0x00044f5b) input_focus_pane_g5

0xb9db,	// (0x00044f63) input_focus_pane_g6

0xb9e3,	// (0x00044f6b) input_focus_pane_g7

0xb9eb,	// (0x00044f73) input_focus_pane_g8

0xb9f3,	// (0x00044f7b) input_focus_pane_g9

0xb53f,	// (0x00044ac7) input_focus_pane_g10

0x0009,

0xf651,	// (0x00048bd9) input_focus_pane_g

0x270c,	// (0x0003bc94) wait_border_pane_g3_copy1

0x9368,	// (0x000428f0) data_form_pane_t1

0xb53f,	// (0x00044ac7) wait_anim_pane_g1_copy1

0xaad9,	// (0x00044061) data_form_wide_pane_t1

0x9382,	// (0x0004290a) list_form_graphic_pane_cp_ParamLimits

0x9382,	// (0x0004290a) list_form_graphic_pane_cp

0x35eb,	// (0x0003cb73) slider_form_pane_g1

0x35f4,	// (0x0003cb7c) slider_form_pane_g2

0x0006,

0xf94f,	// (0x00048ed7) slider_form_pane_g

0x9382,	// (0x0004290a) list_form_graphic_pane_ParamLimits

0x9382,	// (0x0004290a) list_form_graphic_pane

0x9395,	// (0x0004291d) list_form_graphic_pane_g1

0x939d,	// (0x00042925) list_form_graphic_pane_t1_ParamLimits

0x939d,	// (0x00042925) list_form_graphic_pane_t1

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp5_ParamLimits

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp5

0x93b2,	// (0x0004293a) find_pane_g1

0xb9fb,	// (0x00044f83) input_find_pane

0x93bb,	// (0x00042943) input_find_pane_g1_ParamLimits

0x93bb,	// (0x00042943) input_find_pane_g1

0x93c7,	// (0x0004294f) input_find_pane_t1_ParamLimits

0x93c7,	// (0x0004294f) input_find_pane_t1

0x93dc,	// (0x00042964) input_find_pane_t2_ParamLimits

0x93dc,	// (0x00042964) input_find_pane_t2

0x0001,

0xf666,	// (0x00048bee) input_find_pane_t_ParamLimits

0xf666,	// (0x00048bee) input_find_pane_t

0xba04,	// (0x00044f8c) input_focus_pane_cp5_ParamLimits

0xba04,	// (0x00044f8c) input_focus_pane_cp5

0xba17,	// (0x00044f9f) bg_popup_window_pane_cp2_ParamLimits

0xba17,	// (0x00044f9f) bg_popup_window_pane_cp2

0xba24,	// (0x00044fac) listscroll_menu_pane_ParamLimits

0xba24,	// (0x00044fac) listscroll_menu_pane

0x93fd,	// (0x00042985) popup_submenu_window_ParamLimits

0x93fd,	// (0x00042985) popup_submenu_window

0xba30,	// (0x00044fb8) find_popup_pane_g1

0x9425,	// (0x000429ad) input_popup_find_pane_cp

0xba38,	// (0x00044fc0) input_focus_pane_cp4_ParamLimits

0xba38,	// (0x00044fc0) input_focus_pane_cp4

0xba46,	// (0x00044fce) input_popup_find_pane_t1_ParamLimits

0xba46,	// (0x00044fce) input_popup_find_pane_t1

0xb549,	// (0x00044ad1) bg_popup_sub_pane_cp

0xba74,	// (0x00044ffc) listscroll_popup_sub_pane

0xba7c,	// (0x00045004) list_submenu_pane_ParamLimits

0xba7c,	// (0x00045004) list_submenu_pane

0xba8d,	// (0x00045015) scroll_pane_cp4

0x943d,	// (0x000429c5) list_single_popup_submenu_pane_ParamLimits

0x943d,	// (0x000429c5) list_single_popup_submenu_pane

0x9451,	// (0x000429d9) list_single_popup_submenu_pane_g1

0x9459,	// (0x000429e1) list_single_popup_submenu_pane_t1_ParamLimits

0x9459,	// (0x000429e1) list_single_popup_submenu_pane_t1

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp1_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp1

0xba95,	// (0x0004501d) tabs_2_active_pane_g1

0x946e,	// (0x000429f6) tabs_2_active_pane_t1

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp1_ParamLimits

0xb597,	// (0x00044b1f) bg_passive_tab_pane_cp1

0xba95,	// (0x0004501d) tabs_2_passive_pane_g1

0x946e,	// (0x000429f6) tabs_2_passive_pane_t1

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp4

0x9480,	// (0x00042a08) tabs_2_long_active_pane_t1

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp4

0x06e7,	// (0x00039c6f) list_single_midp_graphic_pane_g4_ParamLimits

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp5

0x9493,	// (0x00042a1b) tabs_3_long_active_pane_t1

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp5

0x06e7,	// (0x00039c6f) list_single_midp_graphic_pane_g4

0xb5a5,	// (0x00044b2d) bg_popup_window_pane_cp13_ParamLimits

0xb5a5,	// (0x00044b2d) bg_popup_window_pane_cp13

0xbaa9,	// (0x00045031) listscroll_popup_fast_pane_ParamLimits

0xbaa9,	// (0x00045031) listscroll_popup_fast_pane

0xbab5,	// (0x0004503d) grid_popup_fast_pane_ParamLimits

0xbab5,	// (0x0004503d) grid_popup_fast_pane

0xbac7,	// (0x0004504f) scroll_pane_cp9_ParamLimits

0xbac7,	// (0x0004504f) scroll_pane_cp9

0x4f4e,	// (0x0003e4d6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f4e,	// (0x0003e4d6) list_single_graphic_hl_pane_t1_cp2

0xbada,	// (0x00045062) input_focus_pane_cp20_ParamLimits

0xbada,	// (0x00045062) input_focus_pane_cp20

0xbae8,	// (0x00045070) query_popup_data_pane_t1_ParamLimits

0xbae8,	// (0x00045070) query_popup_data_pane_t1

0xbafb,	// (0x00045083) query_popup_data_pane_t2_ParamLimits

0xbafb,	// (0x00045083) query_popup_data_pane_t2

0xbb41,	// (0x000450c9) query_popup_data_pane_t3_ParamLimits

0xbb41,	// (0x000450c9) query_popup_data_pane_t3

0xbb82,	// (0x0004510a) query_popup_data_pane_t4_ParamLimits

0xbb82,	// (0x0004510a) query_popup_data_pane_t4

0xbbbe,	// (0x00045146) query_popup_data_pane_t5_ParamLimits

0xbbbe,	// (0x00045146) query_popup_data_pane_t5

0x0004,

0xf66b,	// (0x00048bf3) query_popup_data_pane_t_ParamLimits

0xf66b,	// (0x00048bf3) query_popup_data_pane_t

0xb9b3,	// (0x00044f3b) bg_set_opt_pane_g1

0xb9bb,	// (0x00044f43) bg_set_opt_pane_g2

0xb9c3,	// (0x00044f4b) bg_set_opt_pane_g3

0xb9cb,	// (0x00044f53) bg_set_opt_pane_g4

0xb9d3,	// (0x00044f5b) bg_set_opt_pane_g5

0xb9db,	// (0x00044f63) bg_set_opt_pane_g6

0xb9e3,	// (0x00044f6b) bg_set_opt_pane_g7

0xb9eb,	// (0x00044f73) bg_set_opt_pane_g8

0xb9f3,	// (0x00044f7b) bg_set_opt_pane_g9

0x0008,

0xf676,	// (0x00048bfe) bg_set_opt_pane_g

0xf2ba,	// (0x00048842) control_top_pane_stacon_ParamLimits

0xf2ba,	// (0x00048842) control_top_pane_stacon

0xf30d,	// (0x00048895) signal_pane_stacon_ParamLimits

0xf30d,	// (0x00048895) signal_pane_stacon

0xbf4a,	// (0x000454d2) stacon_top_pane_g1_ParamLimits

0xbf4a,	// (0x000454d2) stacon_top_pane_g1

0xf332,	// (0x000488ba) title_pane_stacon_ParamLimits

0xf332,	// (0x000488ba) title_pane_stacon

0xf35c,	// (0x000488e4) uni_indicator_pane_stacon_ParamLimits

0xf35c,	// (0x000488e4) uni_indicator_pane_stacon

0xf371,	// (0x000488f9) battery_pane_stacon_ParamLimits

0xf371,	// (0x000488f9) battery_pane_stacon

0xf3b5,	// (0x0004893d) control_bottom_pane_stacon_ParamLimits

0xf3b5,	// (0x0004893d) control_bottom_pane_stacon

0xf3d8,	// (0x00048960) navi_pane_stacon_ParamLimits

0xf3d8,	// (0x00048960) navi_pane_stacon

0xbf6c,	// (0x000454f4) stacon_bottom_pane_g1_ParamLimits

0xbf6c,	// (0x000454f4) stacon_bottom_pane_g1

0xf07d,	// (0x00048605) aid_levels_signal_lsc_ParamLimits

0xf07d,	// (0x00048605) aid_levels_signal_lsc

0xf093,	// (0x0004861b) signal_pane_stacon_g1_ParamLimits

0xf093,	// (0x0004861b) signal_pane_stacon_g1

0xf0a7,	// (0x0004862f) signal_pane_stacon_g2_ParamLimits

0xf0a7,	// (0x0004862f) signal_pane_stacon_g2

0x0001,

0xf689,	// (0x00048c11) signal_pane_stacon_g_ParamLimits

0xf689,	// (0x00048c11) signal_pane_stacon_g

0xf0dc,	// (0x00048664) title_pane_stacon_t1_ParamLimits

0xf0dc,	// (0x00048664) title_pane_stacon_t1

0xbc02,	// (0x0004518a) uni_indicator_pane_stacon_g1

0xbc0c,	// (0x00045194) uni_indicator_pane_stacon_g2

0xbc16,	// (0x0004519e) uni_indicator_pane_stacon_g3

0xbc20,	// (0x000451a8) uni_indicator_pane_stacon_g4

0x0003,

0xf695,	// (0x00048c1d) uni_indicator_pane_stacon_g

0xf101,	// (0x00048689) control_top_pane_stacon_g1

0xf109,	// (0x00048691) control_top_pane_stacon_t1_ParamLimits

0xf109,	// (0x00048691) control_top_pane_stacon_t1

0xf140,	// (0x000486c8) aid_levels_battery_lsc_ParamLimits

0xf140,	// (0x000486c8) aid_levels_battery_lsc

0xf157,	// (0x000486df) battery_pane_stacon_g1_ParamLimits

0xf157,	// (0x000486df) battery_pane_stacon_g1

0xf16a,	// (0x000486f2) battery_pane_stacon_g2_ParamLimits

0xf16a,	// (0x000486f2) battery_pane_stacon_g2

0x0001,

0xf69e,	// (0x00048c26) battery_pane_stacon_g_ParamLimits

0xf69e,	// (0x00048c26) battery_pane_stacon_g

0xf1a8,	// (0x00048730) navi_icon_pane_stacon

0xf1bc,	// (0x00048744) navi_navi_pane_stacon

0xf1a8,	// (0x00048730) navi_text_pane_stacon

0xf101,	// (0x00048689) control_bottom_pane_stacon_g1

0xf1d0,	// (0x00048758) control_bottom_pane_stacon_t1_ParamLimits

0xf1d0,	// (0x00048758) control_bottom_pane_stacon_t1

0x94bf,	// (0x00042a47) grid_app_pane_ParamLimits

0x94bf,	// (0x00042a47) grid_app_pane

0x94f7,	// (0x00042a7f) scroll_pane_cp15_ParamLimits

0x94f7,	// (0x00042a7f) scroll_pane_cp15

0x950c,	// (0x00042a94) cell_app_pane_ParamLimits

0x950c,	// (0x00042a94) cell_app_pane

0x9551,	// (0x00042ad9) cell_app_pane_g1_ParamLimits

0x9551,	// (0x00042ad9) cell_app_pane_g1

0xbc44,	// (0x000451cc) cell_app_pane_g2_ParamLimits

0xbc44,	// (0x000451cc) cell_app_pane_g2

0x0001,

0xf6a3,	// (0x00048c2b) cell_app_pane_g_ParamLimits

0xf6a3,	// (0x00048c2b) cell_app_pane_g

0x9575,	// (0x00042afd) cell_app_pane_t1_ParamLimits

0x9575,	// (0x00042afd) cell_app_pane_t1

0xbc50,	// (0x000451d8) grid_highlight_pane_ParamLimits

0xbc50,	// (0x000451d8) grid_highlight_pane

0xb9b3,	// (0x00044f3b) cell_highlight_pane_g1

0xb9bb,	// (0x00044f43) cell_highlight_pane_g2

0xb9c3,	// (0x00044f4b) cell_highlight_pane_g3

0xb9cb,	// (0x00044f53) cell_highlight_pane_g4

0xb9d3,	// (0x00044f5b) cell_highlight_pane_g5

0xb9db,	// (0x00044f63) cell_highlight_pane_g6

0xb9e3,	// (0x00044f6b) cell_highlight_pane_g7

0xb9eb,	// (0x00044f73) cell_highlight_pane_g8

0xb9f3,	// (0x00044f7b) cell_highlight_pane_g9

0xb53f,	// (0x00044ac7) cell_highlight_pane_g10

0x0009,

0xf651,	// (0x00048bd9) cell_highlight_pane_g

0xbc61,	// (0x000451e9) bg_scroll_pane

0x9595,	// (0x00042b1d) scroll_handle_pane

0xbca8,	// (0x00045230) scroll_bg_pane_g1

0xbcbd,	// (0x00045245) scroll_bg_pane_g2

0xbcd5,	// (0x0004525d) scroll_bg_pane_g3

0x0002,

0xf6a8,	// (0x00048c30) scroll_bg_pane_g

0x95a9,	// (0x00042b31) scroll_handle_focus_pane_ParamLimits

0x95a9,	// (0x00042b31) scroll_handle_focus_pane

0xbca8,	// (0x00045230) scroll_handle_pane_g1

0xbcea,	// (0x00045272) scroll_handle_pane_g2

0xbcd5,	// (0x0004525d) scroll_handle_pane_g3

0x0002,

0xf6af,	// (0x00048c37) scroll_handle_pane_g

0xba38,	// (0x00044fc0) bg_popup_sub_pane_cp21_ParamLimits

0xba38,	// (0x00044fc0) bg_popup_sub_pane_cp21

0x95b6,	// (0x00042b3e) popup_fep_japan_predictive_window_t1_ParamLimits

0x95b6,	// (0x00042b3e) popup_fep_japan_predictive_window_t1

0x95cd,	// (0x00042b55) popup_fep_japan_predictive_window_t2_ParamLimits

0x95cd,	// (0x00042b55) popup_fep_japan_predictive_window_t2

0x9600,	// (0x00042b88) popup_fep_japan_predictive_window_t3_ParamLimits

0x9600,	// (0x00042b88) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b6,	// (0x00048c3e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b6,	// (0x00048c3e) popup_fep_japan_predictive_window_t

0xb549,	// (0x00044ad1) bg_popup_sub_pane_cp23

0x9637,	// (0x00042bbf) listscroll_japin_cand_pane

0xbcfe,	// (0x00045286) popup_fep_japan_candidate_window_t1

0xbd0c,	// (0x00045294) candidate_pane_ParamLimits

0xbd0c,	// (0x00045294) candidate_pane

0x963f,	// (0x00042bc7) scroll_pane_cp30

0xbd1e,	// (0x000452a6) list_single_popup_jap_candidate_pane_ParamLimits

0xbd1e,	// (0x000452a6) list_single_popup_jap_candidate_pane

0xb549,	// (0x00044ad1) list_highlight_pane_cp30

0xbd33,	// (0x000452bb) list_single_popup_jap_candidate_pane_t1

0xbd42,	// (0x000452ca) level_1_signal

0xbd4f,	// (0x000452d7) level_2_signal

0xbd5c,	// (0x000452e4) level_3_signal

0xbd69,	// (0x000452f1) level_4_signal

0xbd76,	// (0x000452fe) level_5_signal

0xbd83,	// (0x0004530b) level_6_signal

0xbd90,	// (0x00045318) level_7_signal

0xbd42,	// (0x000452ca) level_1_battery

0xbd4f,	// (0x000452d7) level_2_battery

0xbd5c,	// (0x000452e4) level_3_battery

0xbd69,	// (0x000452f1) level_4_battery

0xbd76,	// (0x000452fe) level_5_battery

0xbd83,	// (0x0004530b) level_6_battery

0xbd90,	// (0x00045318) level_7_battery

0xbdb5,	// (0x0004533d) list_menu_pane_ParamLimits

0xbdb5,	// (0x0004533d) list_menu_pane

0xbdcb,	// (0x00045353) scroll_pane_cp25_ParamLimits

0xbdcb,	// (0x00045353) scroll_pane_cp25

0x9647,	// (0x00042bcf) list_double2_graphic_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double2_graphic_pane_cp2

0x9647,	// (0x00042bcf) list_double2_large_graphic_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double2_large_graphic_pane_cp2

0x9647,	// (0x00042bcf) list_double2_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double2_pane_cp2

0x9647,	// (0x00042bcf) list_double_graphic_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double_graphic_pane_cp2

0x9647,	// (0x00042bcf) list_double_large_graphic_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double_large_graphic_pane_cp2

0x9647,	// (0x00042bcf) list_double_number_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double_number_pane_cp2

0x9647,	// (0x00042bcf) list_double_pane_cp2_ParamLimits

0x9647,	// (0x00042bcf) list_double_pane_cp2

0x9656,	// (0x00042bde) list_single_2graphic_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_2graphic_pane_cp2

0x9656,	// (0x00042bde) list_single_graphic_heading_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_graphic_heading_pane_cp2

0x9656,	// (0x00042bde) list_single_graphic_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_graphic_pane_cp2

0x9656,	// (0x00042bde) list_single_heading_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_heading_pane_cp2

0xbdf4,	// (0x0004537c) list_single_large_graphic_pane_cp2_ParamLimits

0xbdf4,	// (0x0004537c) list_single_large_graphic_pane_cp2

0x9656,	// (0x00042bde) list_single_number_heading_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_number_heading_pane_cp2

0x9656,	// (0x00042bde) list_single_number_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_number_pane_cp2

0x9668,	// (0x00042bf0) list_single_pane_cp2_ParamLimits

0x9668,	// (0x00042bf0) list_single_pane_cp2

0xbe0e,	// (0x00045396) bg_popup_sub_pane_cp22

0xf2a0,	// (0x00048828) popup_side_volume_key_window_g1

0xf2ac,	// (0x00048834) popup_side_volume_key_window_t1

0x9730,	// (0x00042cb8) volume_small_pane_cp1

0xb597,	// (0x00044b1f) bg_popup_sub_pane_cp24_ParamLimits

0xb597,	// (0x00044b1f) bg_popup_sub_pane_cp24

0xbe24,	// (0x000453ac) fep_china_uni_candidate_pane_ParamLimits

0xbe24,	// (0x000453ac) fep_china_uni_candidate_pane

0xbe38,	// (0x000453c0) fep_china_uni_entry_pane

0xbe48,	// (0x000453d0) popup_fep_china_uni_window_g1

0x9738,	// (0x00042cc0) fep_china_uni_entry_pane_g1

0x9740,	// (0x00042cc8) fep_china_uni_entry_pane_g2

0x0001,

0xf6e7,	// (0x00048c6f) fep_china_uni_entry_pane_g

0xbe64,	// (0x000453ec) fep_entry_item_pane

0xbe6e,	// (0x000453f6) fep_candidate_item_pane

0x9748,	// (0x00042cd0) fep_china_uni_candidate_pane_g1

0xbe76,	// (0x000453fe) fep_china_uni_candidate_pane_g2

0xbe7e,	// (0x00045406) fep_china_uni_candidate_pane_g3

0x9750,	// (0x00042cd8) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ec,	// (0x00048c74) fep_china_uni_candidate_pane_g

0xb53f,	// (0x00044ac7) fep_entry_item_pane_g1

0xbe86,	// (0x0004540e) fep_entry_item_pane_t1_ParamLimits

0xbe86,	// (0x0004540e) fep_entry_item_pane_t1

0xbe9c,	// (0x00045424) fep_candidate_item_pane_t1_ParamLimits

0xbe9c,	// (0x00045424) fep_candidate_item_pane_t1

0xbeb1,	// (0x00045439) fep_candidate_item_pane_t2_ParamLimits

0xbeb1,	// (0x00045439) fep_candidate_item_pane_t2

0x0001,

0xf6f5,	// (0x00048c7d) fep_candidate_item_pane_t_ParamLimits

0xf6f5,	// (0x00048c7d) fep_candidate_item_pane_t

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp31_ParamLimits

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp31

0xbec3,	// (0x0004544b) level_1_signal_lsc

0xbecc,	// (0x00045454) level_2_signal_lsc

0xbed5,	// (0x0004545d) level_3_signal_lsc

0xbede,	// (0x00045466) level_4_signal_lsc

0xbee7,	// (0x0004546f) level_5_signal_lsc

0xbef0,	// (0x00045478) level_6_signal_lsc

0xbef9,	// (0x00045481) level_7_signal_lsc

0xbef9,	// (0x00045481) level_1_battery_lsc

0xbf02,	// (0x0004548a) level_2_battery_lsc

0xbf0b,	// (0x00045493) level_3_battery_lsc

0xbf14,	// (0x0004549c) level_4_battery_lsc

0xbf1d,	// (0x000454a5) level_5_battery_lsc

0xbf26,	// (0x000454ae) level_6_battery_lsc

0xbec3,	// (0x0004544b) level_7_battery_lsc

0xbf2f,	// (0x000454b7) scroll_handle_focus_pane_g1

0xbf38,	// (0x000454c0) scroll_handle_focus_pane_g2

0xbf41,	// (0x000454c9) scroll_handle_focus_pane_g3

0x0002,

0xf6fa,	// (0x00048c82) scroll_handle_focus_pane_g

0x9758,	// (0x00042ce0) list_single_2graphic_pane_g1_ParamLimits

0x9758,	// (0x00042ce0) list_single_2graphic_pane_g1

0x8fdc,	// (0x00042564) list_single_2graphic_pane_g2_ParamLimits

0x8fdc,	// (0x00042564) list_single_2graphic_pane_g2

0xdbdf,	// (0x00047167) list_single_2graphic_pane_g3_ParamLimits

0xdbdf,	// (0x00047167) list_single_2graphic_pane_g3

0x9764,	// (0x00042cec) list_single_2graphic_pane_g4_ParamLimits

0x9764,	// (0x00042cec) list_single_2graphic_pane_g4

0x0003,

0xf701,	// (0x00048c89) list_single_2graphic_pane_g_ParamLimits

0xf701,	// (0x00048c89) list_single_2graphic_pane_g

0x9775,	// (0x00042cfd) list_single_2graphic_pane_t1_ParamLimits

0x9775,	// (0x00042cfd) list_single_2graphic_pane_t1

0x97a3,	// (0x00042d2b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x97a3,	// (0x00042d2b) list_double2_graphic_large_graphic_pane_g1

0x902f,	// (0x000425b7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x902f,	// (0x000425b7) list_double2_graphic_large_graphic_pane_g2

0xdc65,	// (0x000471ed) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdc65,	// (0x000471ed) list_double2_graphic_large_graphic_pane_g3

0xdda6,	// (0x0004732e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xdda6,	// (0x0004732e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70a,	// (0x00048c92) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70a,	// (0x00048c92) list_double2_graphic_large_graphic_pane_g

0xddb2,	// (0x0004733a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xddb2,	// (0x0004733a) list_double2_graphic_large_graphic_pane_t1

0xddc8,	// (0x00047350) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xddc8,	// (0x00047350) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf713,	// (0x00048c9b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf713,	// (0x00048c9b) list_double2_graphic_large_graphic_pane_t

0x9828,	// (0x00042db0) popup_fast_swap_window_ParamLimits

0x9828,	// (0x00042db0) popup_fast_swap_window

0x9844,	// (0x00042dcc) popup_side_volume_key_window

0xbff7,	// (0x0004557f) stacon_top_pane

0xc001,	// (0x00045589) status_pane_ParamLimits

0xc001,	// (0x00045589) status_pane

0xb535,	// (0x00044abd) status_small_pane

0xb549,	// (0x00044ad1) control_pane

0xb549,	// (0x00044ad1) stacon_bottom_pane

0xb93e,	// (0x00044ec6) scroll_pane_cp121

0xb935,	// (0x00044ebd) set_content_pane

0x97b5,	// (0x00042d3d) bg_active_tab_pane_g1_cp1

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp1

0x97c7,	// (0x00042d4f) bg_active_tab_pane_g3_cp1

0x97b5,	// (0x00042d3d) bg_passive_tab_pane_g1_cp1

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp1

0x97c7,	// (0x00042d4f) bg_passive_tab_pane_g3_cp1

0x97d0,	// (0x00042d58) bg_active_tab_pane_g1_cp2

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp2

0x97d9,	// (0x00042d61) bg_active_tab_pane_g3_cp2

0x97d0,	// (0x00042d58) bg_passive_tab_pane_g1_cp2

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp2

0x97d9,	// (0x00042d61) bg_passive_tab_pane_g3_cp2

0x97e2,	// (0x00042d6a) bg_active_tab_pane_g1_cp3

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp3

0x97eb,	// (0x00042d73) bg_active_tab_pane_g3_cp3

0x97e2,	// (0x00042d6a) bg_passive_tab_pane_g1_cp3

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp3

0x97eb,	// (0x00042d73) bg_passive_tab_pane_g3_cp3

0x97f4,	// (0x00042d7c) bg_active_tab_pane_g1_cp4

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp4

0x97ff,	// (0x00042d87) bg_active_tab_pane_g3_cp4

0x97f4,	// (0x00042d7c) bg_passive_tab_pane_g1_cp4

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp4

0x97ff,	// (0x00042d87) bg_passive_tab_pane_g3_cp4

0x980a,	// (0x00042d92) bg_active_tab_pane_g1_cp5

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp5

0x9813,	// (0x00042d9b) bg_active_tab_pane_g3_cp5

0x980a,	// (0x00042d92) bg_passive_tab_pane_g1_cp5

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp5

0x9813,	// (0x00042d9b) bg_passive_tab_pane_g3_cp5

0x3c02,	// (0x0003d18a) list_set_graphic_pane_ParamLimits

0x3c02,	// (0x0003d18a) list_set_graphic_pane

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp4

0xbf88,	// (0x00045510) list_set_graphic_pane_g1_ParamLimits

0xbf88,	// (0x00045510) list_set_graphic_pane_g1

0xbf94,	// (0x0004551c) list_set_graphic_pane_g2_ParamLimits

0xbf94,	// (0x0004551c) list_set_graphic_pane_g2

0x0001,

0xf718,	// (0x00048ca0) list_set_graphic_pane_g_ParamLimits

0xf718,	// (0x00048ca0) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x00049031) volume_small_pane_cp_g

0x981c,	// (0x00042da4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x981c,	// (0x00042da4) list_double2_large_graphic_pane_g1_cp2

0xbfb6,	// (0x0004553e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbfb6,	// (0x0004553e) list_double2_large_graphic_pane_g2_cp2

0xbfc7,	// (0x0004554f) list_double2_large_graphic_pane_g3_cp2

0xbfcf,	// (0x00045557) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbfcf,	// (0x00045557) list_double2_large_graphic_pane_t1_cp2

0xbfe5,	// (0x0004556d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbfe5,	// (0x0004556d) list_double2_large_graphic_pane_t2_cp2

0xc716,	// (0x00045c9e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc716,	// (0x00045c9e) list_double_large_graphic_pane_g1_cp2

0x31ce,	// (0x0003c756) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x31ce,	// (0x0003c756) list_double_large_graphic_pane_g2_cp2

0xc11d,	// (0x000456a5) list_double_large_graphic_pane_g3_cp2

0x31df,	// (0x0003c767) list_double_large_graphic_pane_g4_cp

0x31e7,	// (0x0003c76f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x31e7,	// (0x0003c76f) list_double_large_graphic_pane_t1_cp2

0x31fe,	// (0x0003c786) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x31fe,	// (0x0003c786) list_double_large_graphic_pane_t2_cp2

0xc00f,	// (0x00045597) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc00f,	// (0x00045597) list_double2_graphic_pane_g1_cp2

0xc01d,	// (0x000455a5) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc01d,	// (0x000455a5) list_double2_graphic_pane_g2_cp2

0xc02e,	// (0x000455b6) list_double2_graphic_pane_g3_cp2

0xc038,	// (0x000455c0) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc038,	// (0x000455c0) list_double2_graphic_pane_t1_cp2

0xc04e,	// (0x000455d6) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc04e,	// (0x000455d6) list_double2_graphic_pane_t2_cp2

0xc060,	// (0x000455e8) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc060,	// (0x000455e8) list_single_number_heading_pane_g1_cp2

0xc06c,	// (0x000455f4) list_single_number_heading_pane_g2_cp2

0xc074,	// (0x000455fc) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc074,	// (0x000455fc) list_single_number_heading_pane_t1_cp2

0xc08a,	// (0x00045612) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc08a,	// (0x00045612) list_single_number_heading_pane_t2_cp2

0xc09c,	// (0x00045624) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc09c,	// (0x00045624) list_single_number_heading_pane_t3_cp2

0xc060,	// (0x000455e8) list_single_heading_pane_g1_cp2_ParamLimits

0xc060,	// (0x000455e8) list_single_heading_pane_g1_cp2

0xc06c,	// (0x000455f4) list_single_heading_pane_g2_cp2

0xc074,	// (0x000455fc) list_single_heading_pane_t1_cp2_ParamLimits

0xc074,	// (0x000455fc) list_single_heading_pane_t1_cp2

0x2fc7,	// (0x0003c54f) list_single_heading_pane_t2_cp2_ParamLimits

0x2fc7,	// (0x0003c54f) list_single_heading_pane_t2_cp2

0x2f0f,	// (0x0003c497) list_double_graphic_pane_g1_cp2_ParamLimits

0x2f0f,	// (0x0003c497) list_double_graphic_pane_g1_cp2

0x2f1b,	// (0x0003c4a3) list_double_graphic_pane_g2_cp2_ParamLimits

0x2f1b,	// (0x0003c4a3) list_double_graphic_pane_g2_cp2

0x2f2a,	// (0x0003c4b2) list_double_graphic_pane_g3_cp2

0x2f32,	// (0x0003c4ba) list_double_graphic_pane_t1_cp2_ParamLimits

0x2f32,	// (0x0003c4ba) list_double_graphic_pane_t1_cp2

0x2f48,	// (0x0003c4d0) list_double_graphic_pane_t2_cp2_ParamLimits

0x2f48,	// (0x0003c4d0) list_double_graphic_pane_t2_cp2

0xc111,	// (0x00045699) list_double_number_pane_g1_cp2_ParamLimits

0xc111,	// (0x00045699) list_double_number_pane_g1_cp2

0xc11d,	// (0x000456a5) list_double_number_pane_g2_cp2

0x2ed3,	// (0x0003c45b) list_double_number_pane_t1_cp2_ParamLimits

0x2ed3,	// (0x0003c45b) list_double_number_pane_t1_cp2

0x2ee7,	// (0x0003c46f) list_double_number_pane_t2_cp2_ParamLimits

0x2ee7,	// (0x0003c46f) list_double_number_pane_t2_cp2

0x2efd,	// (0x0003c485) list_double_number_pane_t3_cp2_ParamLimits

0x2efd,	// (0x0003c485) list_double_number_pane_t3_cp2

0x2dbc,	// (0x0003c344) list_single_graphic_pane_g1_cp2_ParamLimits

0x2dbc,	// (0x0003c344) list_single_graphic_pane_g1_cp2

0xc17a,	// (0x00045702) list_single_graphic_pane_g2_cp2_ParamLimits

0xc17a,	// (0x00045702) list_single_graphic_pane_g2_cp2

0xc186,	// (0x0004570e) list_single_graphic_pane_g3_cp2

0x2d92,	// (0x0003c31a) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d92,	// (0x0003c31a) list_single_graphic_pane_t1_cp2

0xc17a,	// (0x00045702) list_single_number_pane_g1_cp2_ParamLimits

0xc17a,	// (0x00045702) list_single_number_pane_g1_cp2

0xc186,	// (0x0004570e) list_single_number_pane_g2_cp2

0x2d92,	// (0x0003c31a) list_single_number_pane_t1_cp2_ParamLimits

0x2d92,	// (0x0003c31a) list_single_number_pane_t1_cp2

0x2da8,	// (0x0003c330) list_single_number_pane_t2_cp2_ParamLimits

0x2da8,	// (0x0003c330) list_single_number_pane_t2_cp2

0xbfb6,	// (0x0004553e) list_double2_pane_g1_cp2_ParamLimits

0xbfb6,	// (0x0004553e) list_double2_pane_g1_cp2

0xbfc7,	// (0x0004554f) list_double2_pane_g2_cp2

0xc0e9,	// (0x00045671) list_double2_pane_t1_cp2_ParamLimits

0xc0e9,	// (0x00045671) list_double2_pane_t1_cp2

0xc0ff,	// (0x00045687) list_double2_pane_t2_cp2_ParamLimits

0xc0ff,	// (0x00045687) list_double2_pane_t2_cp2

0xc111,	// (0x00045699) list_double_pane_g1_cp2_ParamLimits

0xc111,	// (0x00045699) list_double_pane_g1_cp2

0xc11d,	// (0x000456a5) list_double_pane_g2_cp2

0xc125,	// (0x000456ad) list_double_pane_t1_cp2_ParamLimits

0xc125,	// (0x000456ad) list_double_pane_t1_cp2

0xc13b,	// (0x000456c3) list_double_pane_t2_cp2_ParamLimits

0xc13b,	// (0x000456c3) list_double_pane_t2_cp2

0x985e,	// (0x00042de6) list_single_pane_cp2_g3

0xc17a,	// (0x00045702) list_single_pane_g1_cp2_ParamLimits

0xc17a,	// (0x00045702) list_single_pane_g1_cp2

0xc186,	// (0x0004570e) list_single_pane_g2_cp2

0xc18e,	// (0x00045716) list_single_pane_t1_cp2_ParamLimits

0xc18e,	// (0x00045716) list_single_pane_t1_cp2

0x9866,	// (0x00042dee) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9866,	// (0x00042dee) list_single_large_graphic_pane_g1_cp2

0xc1a6,	// (0x0004572e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc1a6,	// (0x0004572e) list_single_large_graphic_pane_g2_cp2

0xc1b2,	// (0x0004573a) list_single_large_graphic_pane_g3_cp2

0x9872,	// (0x00042dfa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9872,	// (0x00042dfa) list_single_large_graphic_pane_g4_cp1

0xc1ba,	// (0x00045742) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc1ba,	// (0x00045742) list_single_large_graphic_pane_t1_cp2

0x2d5e,	// (0x0003c2e6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d5e,	// (0x0003c2e6) list_single_graphic_heading_pane_g1_cp2

0x2d2b,	// (0x0003c2b3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2d2b,	// (0x0003c2b3) list_single_graphic_heading_pane_g4_cp2

0xc186,	// (0x0004570e) list_single_graphic_heading_pane_g5_cp2

0x2d6a,	// (0x0003c2f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2d6a,	// (0x0003c2f2) list_single_graphic_heading_pane_t1_cp2

0x2d80,	// (0x0003c308) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d80,	// (0x0003c308) list_single_graphic_heading_pane_t2_cp2

0x2d1f,	// (0x0003c2a7) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2d1f,	// (0x0003c2a7) list_single_2graphic_pane_g1_cp2

0x2d2b,	// (0x0003c2b3) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2d2b,	// (0x0003c2b3) list_single_2graphic_pane_g2_cp2

0xc186,	// (0x0004570e) list_single_2graphic_pane_g3_cp2

0x2d3c,	// (0x0003c2c4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2d3c,	// (0x0003c2c4) list_single_2graphic_pane_g4_cp2

0x2d48,	// (0x0003c2d0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2d48,	// (0x0003c2d0) list_single_2graphic_pane_t1_cp2

0xb53f,	// (0x00044ac7) list_highlight_pane_g10_cp1

0x2907,	// (0x0003be8f) list_highlight_pane_g1_cp1

0x290f,	// (0x0003be97) list_highlight_pane_g2_cp1

0x2917,	// (0x0003be9f) list_highlight_pane_g3_cp1

0x291f,	// (0x0003bea7) list_highlight_pane_g4_cp1

0x2927,	// (0x0003beaf) list_highlight_pane_g5_cp1

0x292f,	// (0x0003beb7) list_highlight_pane_g6_cp1

0x2937,	// (0x0003bebf) list_highlight_pane_g7_cp1

0x293f,	// (0x0003bec7) list_highlight_pane_g8_cp1

0x2947,	// (0x0003becf) list_highlight_pane_g9_cp1

0xc4ab,	// (0x00045a33) form_field_slider_pane_t3

0xc4b9,	// (0x00045a41) form_field_slider_pane_t4

0x284b,	// (0x0003bdd3) slider_form_pane_ParamLimits

0x284b,	// (0x0003bdd3) slider_form_pane

0xb549,	// (0x00044ad1) control_abbreviations

0xb549,	// (0x00044ad1) control_conventions

0xb549,	// (0x00044ad1) control_definitions

0xb549,	// (0x00044ad1) format_table_attribute

0xc6ed,	// (0x00045c75) bg_popup_preview_window_pane_g9

0xb549,	// (0x00044ad1) format_table_data2

0xb549,	// (0x00044ad1) format_table_data3

0xb549,	// (0x00044ad1) format_table_data_example

0x0008,

0xb549,	// (0x00044ad1) intro_purpose

0xf8af,	// (0x00048e37) bg_popup_preview_window_pane_g

0xb549,	// (0x00044ad1) texts_category

0xb549,	// (0x00044ad1) texts_graphics

0xc1d0,	// (0x00045758) text_digital

0xc1df,	// (0x00045767) text_primary

0xc1ee,	// (0x00045776) text_primary_small

0xc1fd,	// (0x00045785) text_secondary

0xc20c,	// (0x00045794) text_title

0xca54,	// (0x00045fdc) bg_passive_tab_pane_g1_cp3_srt

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp3_srt

0xca5d,	// (0x00045fe5) bg_passive_tab_pane_g3_cp3_srt

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp3_srt_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp3_srt

0xca66,	// (0x00045fee) tabs_4_active_pane_srt_g1

0xca6e,	// (0x00045ff6) tabs_4_active_pane_srt_t1_ParamLimits

0xca6e,	// (0x00045ff6) tabs_4_active_pane_srt_t1

0xca54,	// (0x00045fdc) bg_active_tab_pane_g1_cp3_copy1

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp3_copy1

0xca5d,	// (0x00045fe5) bg_active_tab_pane_g3_cp3_copy1

0xb5a5,	// (0x00044b2d) tabs_2_long_active_pane_srt_ParamLimits

0xb5a5,	// (0x00044b2d) tabs_2_long_active_pane_srt

0xb5a5,	// (0x00044b2d) tabs_2_long_passive_pane_srt_ParamLimits

0xb5a5,	// (0x00044b2d) tabs_2_long_passive_pane_srt

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp4_srt_ParamLimits

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp4_srt

0xc805,	// (0x00045d8d) bg_passive_tab_pane_g1_cp4_srt

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp4_srt

0xc80e,	// (0x00045d96) bg_passive_tab_pane_g3_cp4_srt

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp4_srt_ParamLimits

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp4_srt

0xc817,	// (0x00045d9f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc817,	// (0x00045d9f) tabs_2_long_active_pane_srt_t1

0xc805,	// (0x00045d8d) bg_active_tab_pane_g1_cp4_srt

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp4_srt

0xc80e,	// (0x00045d96) bg_active_tab_pane_g3_cp4_srt

0xb597,	// (0x00044b1f) tabs_3_long_active_pane_srt_ParamLimits

0xb597,	// (0x00044b1f) tabs_3_long_active_pane_srt

0xb597,	// (0x00044b1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb597,	// (0x00044b1f) tabs_3_long_passive_pane_cp_srt

0xb597,	// (0x00044b1f) tabs_3_long_passive_pane_srt_ParamLimits

0xb597,	// (0x00044b1f) tabs_3_long_passive_pane_srt

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp5_srt_ParamLimits

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp5_srt

0x980a,	// (0x00042d92) bg_passive_tab_pane_g1_cp5_srt

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp5_srt

0x9813,	// (0x00042d9b) bg_passive_tab_pane_g3_cp5_srt

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp5_srt_ParamLimits

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp5_srt

0xc7ef,	// (0x00045d77) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7ef,	// (0x00045d77) tabs_3_long_active_pane_srt_t1

0x980a,	// (0x00042d92) bg_active_tab_pane_g1_cp5_srt

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp5_srt

0x9813,	// (0x00042d9b) bg_active_tab_pane_g3_cp5_srt

0x3402,	// (0x0003c98a) navi_text_pane_srt_t1

0x33fa,	// (0x0003c982) navi_icon_pane_srt_g1

0xc2f7,	// (0x0004587f) midp_editing_number_pane_srt

0xc21b,	// (0x000457a3) midp_ticker_pane_srt

0xc2ff,	// (0x00045887) midp_ticker_pane_srt_g1

0xc307,	// (0x0004588f) midp_ticker_pane_srt_g2

0x0001,

0xf737,	// (0x00048cbf) midp_ticker_pane_srt_g

0xc30f,	// (0x00045897) midp_ticker_pane_srt_t1

0x33eb,	// (0x0003c973) midp_editing_number_pane_t1_copy1

0x988c,	// (0x00042e14) listscroll_midp_pane

0x988c,	// (0x00042e14) midp_form_pane

0x98f7,	// (0x00042e7f) midp_info_popup_window_ParamLimits

0x98f7,	// (0x00042e7f) midp_info_popup_window

0xba38,	// (0x00044fc0) bg_popup_sub_pane_cp50_ParamLimits

0xba38,	// (0x00044fc0) bg_popup_sub_pane_cp50

0x253b,	// (0x0003bac3) listscroll_midp_info_pane_ParamLimits

0x253b,	// (0x0003bac3) listscroll_midp_info_pane

0x251b,	// (0x0003baa3) listscroll_form_midp_pane_ParamLimits

0x251b,	// (0x0003baa3) listscroll_form_midp_pane

0x2527,	// (0x0003baaf) scroll_bar_cp050

0x251b,	// (0x0003baa3) list_midp_pane

0xcbfc,	// (0x00046184) signal_pane_g2_cp

0x2435,	// (0x0003b9bd) listscroll_midp_info_pane_t1_ParamLimits

0x2435,	// (0x0003b9bd) listscroll_midp_info_pane_t1

0xa919,	// (0x00043ea1) listscroll_midp_info_pane_t2_ParamLimits

0xa919,	// (0x00043ea1) listscroll_midp_info_pane_t2

0xa957,	// (0x00043edf) listscroll_midp_info_pane_t3_ParamLimits

0xa957,	// (0x00043edf) listscroll_midp_info_pane_t3

0xa991,	// (0x00043f19) listscroll_midp_info_pane_t4_ParamLimits

0xa991,	// (0x00043f19) listscroll_midp_info_pane_t4

0x0003,

0xf7ea,	// (0x00048d72) listscroll_midp_info_pane_t_ParamLimits

0xf7ea,	// (0x00048d72) listscroll_midp_info_pane_t

0xba8d,	// (0x00045015) scroll_pane_cp21

0x23d5,	// (0x0003b95d) form_midp_field_choice_group_pane

0xa8dc,	// (0x00043e64) form_midp_field_text_pane

0x241b,	// (0x0003b9a3) form_midp_field_time_pane

0x2423,	// (0x0003b9ab) form_midp_gauge_slider_pane

0x242c,	// (0x0003b9b4) form_midp_gauge_wait_pane

0xb549,	// (0x00044ad1) form_midp_image_pane

0xa8c4,	// (0x00043e4c) list_single_midp_pane_ParamLimits

0xa8c4,	// (0x00043e4c) list_single_midp_pane

0xa8a2,	// (0x00043e2a) form_midp_field_text_pane_t1

0x2154,	// (0x0003b6dc) input_focus_pane_cp050

0x23c4,	// (0x0003b94c) list_midp_form_text_pane

0x2359,	// (0x0003b8e1) form_midp_field_choice_group_pane_t1

0x2367,	// (0x0003b8ef) input_focus_pane_cp051

0x237b,	// (0x0003b903) list_midp_choice_pane

0xb549,	// (0x00044ad1) status_idle_pane

0x233d,	// (0x0003b8c5) form_midp_field_time_pane_t1

0xb53f,	// (0x00044ac7) wait_anim_pane_g2_copy1

0x234b,	// (0x0003b8d3) form_midp_field_time_pane_t2

0x0001,

0xc27b,	// (0x00045803) aid_navinavi_width_2_pane

0xf7e5,	// (0x00048d6d) form_midp_field_time_pane_t

0xb549,	// (0x00044ad1) input_focus_pane_cp052

0xb549,	// (0x00044ad1) bg_input_focus_pane_cp040

0x22fd,	// (0x0003b885) form_midp_gauge_slider_pane_t1

0x230b,	// (0x0003b893) form_midp_gauge_slider_pane_t2

0xa886,	// (0x00043e0e) form_midp_gauge_slider_pane_t3

0xa894,	// (0x00043e1c) form_midp_gauge_slider_pane_t4

0x0003,

0xf7dc,	// (0x00048d64) form_midp_gauge_slider_pane_t

0x2335,	// (0x0003b8bd) form_midp_slider_pane

0xb5a5,	// (0x00044b2d) bg_input_focus_pane_cp041_ParamLimits

0xb5a5,	// (0x00044b2d) bg_input_focus_pane_cp041

0x22ca,	// (0x0003b852) form_midp_gauge_wait_pane_t1_ParamLimits

0x22ca,	// (0x0003b852) form_midp_gauge_wait_pane_t1

0x22dc,	// (0x0003b864) form_midp_gauge_wait_pane_t2_ParamLimits

0x22dc,	// (0x0003b864) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d7,	// (0x00048d5f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d7,	// (0x00048d5f) form_midp_gauge_wait_pane_t

0x22ee,	// (0x0003b876) form_midp_wait_pane_ParamLimits

0x22ee,	// (0x0003b876) form_midp_wait_pane

0xa850,	// (0x00043dd8) form_midp_image_pane_g1

0xa859,	// (0x00043de1) form_midp_image_pane_t1

0xa868,	// (0x00043df0) form_midp_image_pane_t2

0xa877,	// (0x00043dff) form_midp_image_pane_t3

0x0002,

0xf7d0,	// (0x00048d58) form_midp_image_pane_t

0x228b,	// (0x0003b813) list_single_midp_pane_g1

0xdf0a,	// (0x00047492) list_single_midp_pane_t1

0xa83b,	// (0x00043dc3) list_midp_form_item_pane_ParamLimits

0xa83b,	// (0x00043dc3) list_midp_form_item_pane

0xc223,	// (0x000457ab) list_midp_form_item_pane_t1

0xc232,	// (0x000457ba) midp_ticker_pane_g1

0xc23e,	// (0x000457c6) midp_ticker_pane_g2

0x0001,

0xf71d,	// (0x00048ca5) midp_ticker_pane_g

0xc24a,	// (0x000457d2) midp_ticker_pane_t1

0x3638,	// (0x0003cbc0) midp_editing_number_pane_t1

0x3616,	// (0x0003cb9e) midp_editing_number_pane

0x3625,	// (0x0003cbad) midp_ticker_pane

0x2547,	// (0x0003bacf) ai_message_heading_pane

0xb549,	// (0x00044ad1) bg_popup_window_pane_cp14

0x254f,	// (0x0003bad7) listscroll_ai_message_pane

0x3375,	// (0x0003c8fd) ai_message_heading_pane_g1_ParamLimits

0x3375,	// (0x0003c8fd) ai_message_heading_pane_g1

0xc7b7,	// (0x00045d3f) ai_message_heading_pane_g2_ParamLimits

0xc7b7,	// (0x00045d3f) ai_message_heading_pane_g2

0x338d,	// (0x0003c915) ai_message_heading_pane_g3_ParamLimits

0x338d,	// (0x0003c915) ai_message_heading_pane_g3

0x3399,	// (0x0003c921) ai_message_heading_pane_g4_ParamLimits

0x3399,	// (0x0003c921) ai_message_heading_pane_g4

0x0003,

0xf911,	// (0x00048e99) ai_message_heading_pane_g_ParamLimits

0xf911,	// (0x00048e99) ai_message_heading_pane_g

0xc7c3,	// (0x00045d4b) ai_message_heading_pane_t1_ParamLimits

0xc7c3,	// (0x00045d4b) ai_message_heading_pane_t1

0xc7dd,	// (0x00045d65) ai_message_heading_pane_t2_ParamLimits

0xc7dd,	// (0x00045d65) ai_message_heading_pane_t2

0x0001,

0xf91a,	// (0x00048ea2) ai_message_heading_pane_t_ParamLimits

0xf91a,	// (0x00048ea2) ai_message_heading_pane_t

0x33d1,	// (0x0003c959) bg_popup_heading_pane_cp1_ParamLimits

0x33d1,	// (0x0003c959) bg_popup_heading_pane_cp1

0x3363,	// (0x0003c8eb) list_ai_message_pane_ParamLimits

0x3363,	// (0x0003c8eb) list_ai_message_pane

0xba8d,	// (0x00045015) scroll_pane_cp10

0x32ff,	// (0x0003c887) list_ai_message_pane_g1

0x3307,	// (0x0003c88f) list_ai_message_pane_g2

0x0001,

0xf8ee,	// (0x00048e76) list_ai_message_pane_g

0x330f,	// (0x0003c897) list_ai_message_pane_t1_ParamLimits

0x330f,	// (0x0003c897) list_ai_message_pane_t1

0x3324,	// (0x0003c8ac) list_ai_message_pane_t2_ParamLimits

0x3324,	// (0x0003c8ac) list_ai_message_pane_t2

0x3339,	// (0x0003c8c1) list_ai_message_pane_t3_ParamLimits

0x3339,	// (0x0003c8c1) list_ai_message_pane_t3

0x334e,	// (0x0003c8d6) list_ai_message_pane_t4_ParamLimits

0x334e,	// (0x0003c8d6) list_ai_message_pane_t4

0x0003,

0xf8f3,	// (0x00048e7b) list_ai_message_pane_t_ParamLimits

0xf8f3,	// (0x00048e7b) list_ai_message_pane_t

0xc793,	// (0x00045d1b) cell_ai_soft_ind_pane_ParamLimits

0xc793,	// (0x00045d1b) cell_ai_soft_ind_pane

0xc25c,	// (0x000457e4) cell_ai_soft_ind_pane_g1_ParamLimits

0xc25c,	// (0x000457e4) cell_ai_soft_ind_pane_g1

0xb549,	// (0x00044ad1) grid_highlight_cp1

0xc269,	// (0x000457f1) text_secondary_cp56_ParamLimits

0xc269,	// (0x000457f1) text_secondary_cp56

0x32bf,	// (0x0003c847) example_general_pane_ParamLimits

0x32bf,	// (0x0003c847) example_general_pane

0x32cb,	// (0x0003c853) example_parent_pane_g1_ParamLimits

0x32cb,	// (0x0003c853) example_parent_pane_g1

0x32d7,	// (0x0003c85f) example_parent_pane_t1_ParamLimits

0x32d7,	// (0x0003c85f) example_parent_pane_t1

0x9fc1,	// (0x00043549) popup_preview_text_window_ParamLimits

0x9fc1,	// (0x00043549) popup_preview_text_window

0xc172,	// (0x000456fa) list_single_pane_cp2_g4

0xb777,	// (0x00044cff) bg_popup_preview_window_pane_ParamLimits

0xb777,	// (0x00044cff) bg_popup_preview_window_pane

0xc6f5,	// (0x00045c7d) popup_preview_text_window_t1_ParamLimits

0xc6f5,	// (0x00045c7d) popup_preview_text_window_t1

0x3037,	// (0x0003c5bf) popup_preview_text_window_t2_ParamLimits

0x3037,	// (0x0003c5bf) popup_preview_text_window_t2

0x3080,	// (0x0003c608) popup_preview_text_window_t3_ParamLimits

0x3080,	// (0x0003c608) popup_preview_text_window_t3

0x30c5,	// (0x0003c64d) popup_preview_text_window_t4_ParamLimits

0x30c5,	// (0x0003c64d) popup_preview_text_window_t4

0x0004,

0xf8c2,	// (0x00048e4a) popup_preview_text_window_t_ParamLimits

0xf8c2,	// (0x00048e4a) popup_preview_text_window_t

0x3143,	// (0x0003c6cb) scroll_pane_cp11

0x20c8,	// (0x0003b650) bg_popup_preview_window_pane_g1

0xc6b5,	// (0x00045c3d) bg_popup_preview_window_pane_g2

0xc6bd,	// (0x00045c45) bg_popup_preview_window_pane_g3

0xc6c5,	// (0x00045c4d) bg_popup_preview_window_pane_g4

0xc6cd,	// (0x00045c55) bg_popup_preview_window_pane_g5

0xc6d5,	// (0x00045c5d) bg_popup_preview_window_pane_g6

0xc6dd,	// (0x00045c65) bg_popup_preview_window_pane_g7

0xc6e5,	// (0x00045c6d) bg_popup_preview_window_pane_g8

0xdb78,	// (0x00047100) aid_popup_width_pane

0x9f3d,	// (0x000434c5) popup_midp_note_alarm_window_ParamLimits

0x9f3d,	// (0x000434c5) popup_midp_note_alarm_window

0xb94f,	// (0x00044ed7) data_form_pane_ParamLimits

0x9257,	// (0x000427df) form_field_data_pane_g1

0x9261,	// (0x000427e9) form_field_data_pane_t1_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_ParamLimits

0x927b,	// (0x00042803) data_form_wide_pane_ParamLimits

0x928c,	// (0x00042814) form_field_data_wide_pane_g1

0x9298,	// (0x00042820) form_field_data_wide_pane_t1_ParamLimits

0xb84f,	// (0x00044dd7) input_focus_pane_cp6_ParamLimits

0x942f,	// (0x000429b7) input_popup_find_pane_g1_ParamLimits

0x942f,	// (0x000429b7) input_popup_find_pane_g1

0xf17b,	// (0x00048703) aid_navi_side_left_pane

0xf190,	// (0x00048718) aid_navi_side_right_pane

0x2a02,	// (0x0003bf8a) bg_popup_window_pane_cp30_ParamLimits

0x2a02,	// (0x0003bf8a) bg_popup_window_pane_cp30

0x2a7c,	// (0x0003c004) popup_midp_note_alarm_window_g1_ParamLimits

0x2a7c,	// (0x0003c004) popup_midp_note_alarm_window_g1

0x2aac,	// (0x0003c034) popup_midp_note_alarm_window_t1_ParamLimits

0x2aac,	// (0x0003c034) popup_midp_note_alarm_window_t1

0xc4fe,	// (0x00045a86) popup_midp_note_alarm_window_t2_ParamLimits

0xc4fe,	// (0x00045a86) popup_midp_note_alarm_window_t2

0xc5ac,	// (0x00045b34) popup_midp_note_alarm_window_t3_ParamLimits

0xc5ac,	// (0x00045b34) popup_midp_note_alarm_window_t3

0xc5d4,	// (0x00045b5c) popup_midp_note_alarm_window_t4_ParamLimits

0xc5d4,	// (0x00045b5c) popup_midp_note_alarm_window_t4

0x2c43,	// (0x0003c1cb) popup_midp_note_alarm_window_t5_ParamLimits

0x2c43,	// (0x0003c1cb) popup_midp_note_alarm_window_t5

0x000a,

0xf85f,	// (0x00048de7) popup_midp_note_alarm_window_t_ParamLimits

0xf85f,	// (0x00048de7) popup_midp_note_alarm_window_t

0x2cef,	// (0x0003c277) wait_bar_pane_cp1_ParamLimits

0x2cef,	// (0x0003c277) wait_bar_pane_cp1

0xb549,	// (0x00044ad1) wait_anim_pane_copy1

0xb549,	// (0x00044ad1) wait_border_pane_copy1

0x26f8,	// (0x0003bc80) wait_border_pane_g1_copy1

0x92b2,	// (0x0004283a) form_field_popup_pane_g1

0x92ba,	// (0x00042842) form_field_popup_pane_t1_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_cp7_ParamLimits

0xb989,	// (0x00044f11) list_form_pane_ParamLimits

0x92d4,	// (0x0004285c) form_field_popup_wide_pane_g1

0x92dc,	// (0x00042864) form_field_popup_wide_pane_t1_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_cp8_ParamLimits

0xb995,	// (0x00044f1d) list_form_wide_pane_ParamLimits

0x37d8,	// (0x0003cd60) aid_size_cell_graphic_pane

0x9368,	// (0x000428f0) data_form_pane_t1_ParamLimits

0xaad9,	// (0x00044061) data_form_wide_pane_t1_ParamLimits

0xa404,	// (0x0004398c) bg_status_flat_pane

0x89bf,	// (0x00041f47) title_pane_t1_ParamLimits

0xb55f,	// (0x00044ae7) title_pane_t2_ParamLimits

0xb585,	// (0x00044b0d) title_pane_t3_ParamLimits

0xf530,	// (0x00048ab8) title_pane_t_ParamLimits

0xbd42,	// (0x000452ca) level_1_signal_ParamLimits

0xbd4f,	// (0x000452d7) level_2_signal_ParamLimits

0xbd5c,	// (0x000452e4) level_3_signal_ParamLimits

0xbd69,	// (0x000452f1) level_4_signal_ParamLimits

0xbd76,	// (0x000452fe) level_5_signal_ParamLimits

0xbd83,	// (0x0004530b) level_6_signal_ParamLimits

0xbd90,	// (0x00045318) level_7_signal_ParamLimits

0xbd42,	// (0x000452ca) level_1_battery_ParamLimits

0xbd4f,	// (0x000452d7) level_2_battery_ParamLimits

0xbd5c,	// (0x000452e4) level_3_battery_ParamLimits

0xbd69,	// (0x000452f1) level_4_battery_ParamLimits

0xbd76,	// (0x000452fe) level_5_battery_ParamLimits

0xbd83,	// (0x0004530b) level_6_battery_ParamLimits

0xbd90,	// (0x00045318) level_7_battery_ParamLimits

0x2907,	// (0x0003be8f) bg_status_flat_pane_g1

0x290f,	// (0x0003be97) bg_status_flat_pane_g2

0x2917,	// (0x0003be9f) bg_status_flat_pane_g3

0x291f,	// (0x0003bea7) bg_status_flat_pane_g4

0x2927,	// (0x0003beaf) bg_status_flat_pane_g5

0x292f,	// (0x0003beb7) bg_status_flat_pane_g6

0x2937,	// (0x0003bebf) bg_status_flat_pane_g7

0x8a53,	// (0x00041fdb) tabs_3_active_pane_t1_ParamLimits

0x8a53,	// (0x00041fdb) tabs_3_passive_pane_t1_ParamLimits

0x8a6d,	// (0x00041ff5) tabs_4_active_pane_t1_ParamLimits

0x8a6d,	// (0x00041ff5) tabs_4_1_passive_pane_t1_ParamLimits

0x946e,	// (0x000429f6) tabs_2_active_pane_t1_ParamLimits

0x946e,	// (0x000429f6) tabs_2_passive_pane_t1_ParamLimits

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp4_ParamLimits

0x9480,	// (0x00042a08) tabs_2_long_active_pane_t1_ParamLimits

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp4_ParamLimits

0x071b,	// (0x00039ca3) list_single_midp_graphic_pane_t1_ParamLimits

0xb5a5,	// (0x00044b2d) bg_active_tab_pane_cp5_ParamLimits

0x9493,	// (0x00042a1b) tabs_3_long_active_pane_t1_ParamLimits

0xba9d,	// (0x00045025) bg_passive_tab_pane_cp5_ParamLimits

0x071b,	// (0x00039ca3) list_single_midp_graphic_pane_t1

0xa404,	// (0x0004398c) bg_status_flat_pane_ParamLimits

0x04ef,	// (0x00039a77) indicator_pane_cp2_ParamLimits

0x04ef,	// (0x00039a77) indicator_pane_cp2

0xa582,	// (0x00043b0a) navi_pane_srt_ParamLimits

0xa582,	// (0x00043b0a) navi_pane_srt

0x063e,	// (0x00039bc6) popup_clock_digital_analogue_window_cp1

0xb5e9,	// (0x00044b71) indicator_pane_t1

0xc21b,	// (0x000457a3) copy_highlight_pane

0xc21b,	// (0x000457a3) cursor_graphics_pane

0xc21b,	// (0x000457a3) graphic_within_text_pane

0xc21b,	// (0x000457a3) link_highlight_pane

0x3106,	// (0x0003c68e) popup_preview_text_window_t5_ParamLimits

0x3106,	// (0x0003c68e) popup_preview_text_window_t5

0xc283,	// (0x0004580b) cursor_digital_pane

0xc283,	// (0x0004580b) cursor_primary_pane

0xc294,	// (0x0004581c) cursor_primary_small_pane

0xc29c,	// (0x00045824) cursor_secondary_pane

0xc2a4,	// (0x0004582c) cursor_title_pane

0xc283,	// (0x0004580b) link_highlight_digital_pane

0xc28b,	// (0x00045813) link_highlight_primary_pane

0xc294,	// (0x0004581c) link_highlight_primary_small_pane

0xc29c,	// (0x00045824) link_highlight_secondary_pane

0xc2a4,	// (0x0004582c) link_highlight_title_pane

0xc283,	// (0x0004580b) copy_highlight_digital_pane

0xc283,	// (0x0004580b) copy_highlight_primary_pane

0xc294,	// (0x0004581c) copy_highlight_primary_small_pane

0xc29c,	// (0x00045824) copy_highlight_secondary_pane

0xc2a4,	// (0x0004582c) copy_highlight_title_pane

0xc29c,	// (0x00045824) graphic_text_digital_pane

0x29a5,	// (0x0003bf2d) graphic_text_primary_pane

0x29ae,	// (0x0003bf36) graphic_text_primary_small_pane

0xc294,	// (0x0004581c) graphic_text_secondary_pane

0xc283,	// (0x0004580b) graphic_text_title_pane

0x9948,	// (0x00042ed0) cursor_primary_pane_g1

0x2997,	// (0x0003bf1f) cursor_text_primary_t1

0xc4f4,	// (0x00045a7c) cursor_primary_small_pane_g1

0x2989,	// (0x0003bf11) cursor_text_primary_small_t1

0xc4ea,	// (0x00045a72) cursor_primary_small_pane_g1_copy1

0x2971,	// (0x0003bef9) cursor_text_primary_small_t1_copy1

0x294f,	// (0x0003bed7) cursor_text_title_t1

0xc4e0,	// (0x00045a68) cursor_title_pane_g1

0x9948,	// (0x00042ed0) cursor_digital_pane_g1

0xc2ac,	// (0x00045834) cursor_text_digital_t1

0xc2ba,	// (0x00045842) link_highlight_primary_pane_g1

0x28f8,	// (0x0003be80) link_highlight_primary_pane_t1

0xc2ba,	// (0x00045842) link_highlight_primary_small_pane_g1

0xc2c2,	// (0x0004584a) link_highlight_primary_small_pane_t1

0xc2ba,	// (0x00045842) link_highlight_secondary_pane_g1

0xc2d1,	// (0x00045859) link_highlight_secondary_pane_t1

0x285d,	// (0x0003bde5) link_highlight_title_pane_g1

0x2874,	// (0x0003bdfc) link_highlight_title_pane_t1

0x285d,	// (0x0003bde5) link_highlight_digital_pane_g1

0x2865,	// (0x0003bded) link_highlight_digital_pane_t1

0x2717,	// (0x0003bc9f) copy_highlight_primary_pane_g1

0x273d,	// (0x0003bcc5) copy_highlight_primary_pane_t1

0x2717,	// (0x0003bc9f) copy_highlight_primary_small_pane_g1

0x272e,	// (0x0003bcb6) copy_highlight_primary_small_pane_t1

0xc2e0,	// (0x00045868) copy_highlight_secondary_pane_g1

0xc2e8,	// (0x00045870) copy_highlight_secondary_pane_t1

0x2717,	// (0x0003bc9f) copy_highlight_title_pane_g1

0x271f,	// (0x0003bca7) copy_highlight_title_pane_t1

0x2717,	// (0x0003bc9f) copy_highlight_digital_pane_g1

0x39a6,	// (0x0003cf2e) copy_highlight_digital_pane_t1

0x38fa,	// (0x0003ce82) graphic_text_primary_pane_g1

0x398a,	// (0x0003cf12) graphic_text_primary_pane_t1

0x3998,	// (0x0003cf20) graphic_text_primary_pane_t2

0x0001,

0xf98e,	// (0x00048f16) graphic_text_primary_pane_t

0x3966,	// (0x0003ceee) graphic_text_primary_small_pane_g1

0x396e,	// (0x0003cef6) graphic_text_primary_small_pane_t1

0x397c,	// (0x0003cf04) graphic_text_primary_small_pane_t2

0x0001,

0xf989,	// (0x00048f11) graphic_text_primary_small_pane_t

0x3942,	// (0x0003ceca) graphic_text_secondary_pane_g1

0x394a,	// (0x0003ced2) graphic_text_secondary_pane_t1

0x3958,	// (0x0003cee0) graphic_text_secondary_pane_t2

0x0001,

0xf984,	// (0x00048f0c) graphic_text_secondary_pane_t

0x391e,	// (0x0003cea6) graphic_text_title_pane_g1

0x3926,	// (0x0003ceae) graphic_text_title_pane_t1

0x3934,	// (0x0003cebc) graphic_text_title_pane_t2

0x0001,

0xf97f,	// (0x00048f07) graphic_text_title_pane_t

0x38fa,	// (0x0003ce82) graphic_text_digital_pane_g1

0x3902,	// (0x0003ce8a) graphic_text_digital_pane_t1

0x3910,	// (0x0003ce98) graphic_text_digital_pane_t2

0x0001,

0xf97a,	// (0x00048f02) graphic_text_digital_pane_t

0xb5a5,	// (0x00044b2d) navi_icon_pane_srt_ParamLimits

0xb5a5,	// (0x00044b2d) navi_icon_pane_srt

0xb549,	// (0x00044ad1) navi_midp_pane_srt

0xb549,	// (0x00044ad1) navi_navi_pane_srt

0xb5a5,	// (0x00044b2d) navi_text_pane_srt_ParamLimits

0xb5a5,	// (0x00044b2d) navi_text_pane_srt

0x38c5,	// (0x0003ce4d) navi_navi_icon_text_pane_srt

0x38cd,	// (0x0003ce55) navi_navi_pane_srt_g1_ParamLimits

0x38cd,	// (0x0003ce55) navi_navi_pane_srt_g1

0x38df,	// (0x0003ce67) navi_navi_pane_srt_g2_ParamLimits

0x38df,	// (0x0003ce67) navi_navi_pane_srt_g2

0x0001,

0xf975,	// (0x00048efd) navi_navi_pane_srt_g_ParamLimits

0xf975,	// (0x00048efd) navi_navi_pane_srt_g

0x38f1,	// (0x0003ce79) navi_navi_tabs_pane_srt

0x38c5,	// (0x0003ce4d) navi_navi_text_pane_srt

0x38c5,	// (0x0003ce4d) navi_navi_volume_pane_srt

0x38b6,	// (0x0003ce3e) navi_navi_text_pane_srt_t1

0x0b93,	// (0x0003a11b) navi_navi_volume_pane_srt_g1

0x0b9b,	// (0x0003a123) volume_small_pane_srt_ParamLimits

0x0b9b,	// (0x0003a123) volume_small_pane_srt

0xf3fb,	// (0x00048983) volume_small_pane_srt_g1_ParamLimits

0xf3fb,	// (0x00048983) volume_small_pane_srt_g1

0xf40b,	// (0x00048993) volume_small_pane_srt_g2_ParamLimits

0xf40b,	// (0x00048993) volume_small_pane_srt_g2

0xf41c,	// (0x000489a4) volume_small_pane_srt_g3_ParamLimits

0xf41c,	// (0x000489a4) volume_small_pane_srt_g3

0xf42d,	// (0x000489b5) volume_small_pane_srt_g4_ParamLimits

0xf42d,	// (0x000489b5) volume_small_pane_srt_g4

0xf43e,	// (0x000489c6) volume_small_pane_srt_g5_ParamLimits

0xf43e,	// (0x000489c6) volume_small_pane_srt_g5

0xf44f,	// (0x000489d7) volume_small_pane_srt_g6_ParamLimits

0xf44f,	// (0x000489d7) volume_small_pane_srt_g6

0xf460,	// (0x000489e8) volume_small_pane_srt_g7_ParamLimits

0xf460,	// (0x000489e8) volume_small_pane_srt_g7

0xf471,	// (0x000489f9) volume_small_pane_srt_g8_ParamLimits

0xf471,	// (0x000489f9) volume_small_pane_srt_g8

0xf482,	// (0x00048a0a) volume_small_pane_srt_g9_ParamLimits

0xf482,	// (0x00048a0a) volume_small_pane_srt_g9

0xf493,	// (0x00048a1b) volume_small_pane_srt_g10_ParamLimits

0xf493,	// (0x00048a1b) volume_small_pane_srt_g10

0x0009,

0xf722,	// (0x00048caa) volume_small_pane_srt_g_ParamLimits

0xf722,	// (0x00048caa) volume_small_pane_srt_g

0x8d54,	// (0x000422dc) query_popup_data_pane_cp2

0x389c,	// (0x0003ce24) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x389c,	// (0x0003ce24) navi_navi_icon_text_pane_srt_t1

0x29a5,	// (0x0003bf2d) navi_tabs_2_long_pane_srt

0x29a5,	// (0x0003bf2d) navi_tabs_2_pane_srt

0x29a5,	// (0x0003bf2d) navi_tabs_3_long_pane_srt

0x29a5,	// (0x0003bf2d) navi_tabs_3_pane_srt

0x29a5,	// (0x0003bf2d) navi_tabs_4_pane_srt

0xab4b,	// (0x000440d3) tabs_2_active_pane_srt_ParamLimits

0xab4b,	// (0x000440d3) tabs_2_active_pane_srt

0xab5b,	// (0x000440e3) tabs_2_passive_pane_srt_ParamLimits

0xab5b,	// (0x000440e3) tabs_2_passive_pane_srt

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp1_srt

0xcafb,	// (0x00046083) bg_passive_tab_pane_g1_cp1_srt

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp1_srt

0xcb04,	// (0x0004608c) bg_passive_tab_pane_g3_cp1_srt

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp1_srt_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp1_srt

0xcb0d,	// (0x00046095) tabs_2_active_pane_srt_g1

0xcb15,	// (0x0004609d) tabs_2_active_pane_srt_t1_ParamLimits

0xcb15,	// (0x0004609d) tabs_2_active_pane_srt_t1

0xcafb,	// (0x00046083) bg_active_tab_pane_g1_cp1_srt

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp1_srt

0xcb04,	// (0x0004608c) bg_active_tab_pane_g3_cp1_srt

0xab18,	// (0x000440a0) tabs_3_active_pane_srt_ParamLimits

0xab18,	// (0x000440a0) tabs_3_active_pane_srt

0xab29,	// (0x000440b1) tabs_3_passive_pane_cp_srt_ParamLimits

0xab29,	// (0x000440b1) tabs_3_passive_pane_cp_srt

0xab3a,	// (0x000440c2) tabs_3_passive_pane_srt_ParamLimits

0xab3a,	// (0x000440c2) tabs_3_passive_pane_srt

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2154,	// (0x0003b6dc) bg_passive_tab_pane_cp2_srt

0x9952,	// (0x00042eda) bg_passive_tab_pane_g1_cp2_srt

0x97be,	// (0x00042d46) bg_passive_tab_pane_g2_cp2_srt

0x995b,	// (0x00042ee3) bg_passive_tab_pane_g3_cp2_srt

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp2_srt_ParamLimits

0xb597,	// (0x00044b1f) bg_active_tab_pane_cp2_srt

0xcadd,	// (0x00046065) tabs_3_active_pane_srt_g1

0xcae5,	// (0x0004606d) tabs_3_active_pane_srt_t1_ParamLimits

0xcae5,	// (0x0004606d) tabs_3_active_pane_srt_t1

0x9952,	// (0x00042eda) bg_active_tab_pane_g1_cp2_srt

0x97be,	// (0x00042d46) bg_active_tab_pane_g2_cp2_srt

0x995b,	// (0x00042ee3) bg_active_tab_pane_g3_cp2_srt

0x0af8,	// (0x0003a080) tabs_4_active_pane_srt_ParamLimits

0x0af8,	// (0x0003a080) tabs_4_active_pane_srt

0x0b0a,	// (0x0003a092) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b0a,	// (0x0003a092) tabs_4_passive_pane_cp2_srt

0xf4b3,	// (0x00048a3b) aid_size_cell_toolbar

0x3493,	// (0x0003ca1b) main_idle_act_pane_ParamLimits

0xf501,	// (0x00048a89) popup_large_graphic_colour_window_ParamLimits

0xa273,	// (0x000437fb) popup_toolbar_window_ParamLimits

0xa273,	// (0x000437fb) popup_toolbar_window

0x3647,	// (0x0003cbcf) list_single_graphic_2heading_pane_ParamLimits

0x3647,	// (0x0003cbcf) list_single_graphic_2heading_pane

0xbc2a,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane

0xbc3c,	// (0x000451c4) aid_size_cell_apps_grid_prt_pane

0xba9d,	// (0x00045025) bg_wml_button_pane_cp1_ParamLimits

0xba9d,	// (0x00045025) bg_wml_button_pane_cp1

0xa8a2,	// (0x00043e2a) form_midp_field_text_pane_t1_ParamLimits

0x2154,	// (0x0003b6dc) input_focus_pane_cp050_ParamLimits

0x23c4,	// (0x0003b94c) list_midp_form_text_pane_ParamLimits

0x2367,	// (0x0003b8ef) input_focus_pane_cp051_ParamLimits

0x237b,	// (0x0003b903) list_midp_choice_pane_ParamLimits

0xa807,	// (0x00043d8f) list_single_2graphic_pane_cp3_ParamLimits

0xa807,	// (0x00043d8f) list_single_2graphic_pane_cp3

0xa81b,	// (0x00043da3) list_single_midp_graphic_pane_ParamLimits

0xa81b,	// (0x00043da3) list_single_midp_graphic_pane

0xddea,	// (0x00047372) list_single_graphic_2heading_pane_g1_ParamLimits

0xddea,	// (0x00047372) list_single_graphic_2heading_pane_g1

0xddf6,	// (0x0004737e) list_single_graphic_2heading_pane_g4_ParamLimits

0xddf6,	// (0x0004737e) list_single_graphic_2heading_pane_g4

0xde02,	// (0x0004738a) list_single_graphic_2heading_pane_g5_ParamLimits

0xde02,	// (0x0004738a) list_single_graphic_2heading_pane_g5

0x0002,

0xf775,	// (0x00048cfd) list_single_graphic_2heading_pane_g_ParamLimits

0xf775,	// (0x00048cfd) list_single_graphic_2heading_pane_g

0xde0e,	// (0x00047396) list_single_graphic_2heading_pane_t1_ParamLimits

0xde0e,	// (0x00047396) list_single_graphic_2heading_pane_t1

0xde22,	// (0x000473aa) list_single_graphic_2heading_pane_t2_ParamLimits

0xde22,	// (0x000473aa) list_single_graphic_2heading_pane_t2

0xde3c,	// (0x000473c4) list_single_graphic_2heading_pane_t3_ParamLimits

0xde3c,	// (0x000473c4) list_single_graphic_2heading_pane_t3

0x0002,

0xf77c,	// (0x00048d04) list_single_graphic_2heading_pane_t_ParamLimits

0xf77c,	// (0x00048d04) list_single_graphic_2heading_pane_t

0x2006,	// (0x0003b58e) bg_popup_sub_pane_cp2

0x2030,	// (0x0003b5b8) grid_toobar_pane

0x068a,	// (0x00039c12) cell_toolbar_pane_ParamLimits

0x068a,	// (0x00039c12) cell_toolbar_pane

0x206c,	// (0x0003b5f4) cell_toolbar_pane_g1_ParamLimits

0x206c,	// (0x0003b5f4) cell_toolbar_pane_g1

0xa71f,	// (0x00043ca7) cell_toolbar_pane_g2_ParamLimits

0xa71f,	// (0x00043ca7) cell_toolbar_pane_g2

0x0001,

0xf78a,	// (0x00048d12) cell_toolbar_pane_g_ParamLimits

0xf78a,	// (0x00048d12) cell_toolbar_pane_g

0x20a2,	// (0x0003b62a) grid_highlight_pane_cp2_ParamLimits

0x20a2,	// (0x0003b62a) grid_highlight_pane_cp2

0x20bc,	// (0x0003b644) toolbar_button_pane

0x20c8,	// (0x0003b650) toolbar_button_pane_g1

0x20d0,	// (0x0003b658) toolbar_button_pane_g2

0x20d8,	// (0x0003b660) toolbar_button_pane_g3

0x20e0,	// (0x0003b668) toolbar_button_pane_g4

0x20e8,	// (0x0003b670) toolbar_button_pane_g5

0x20f0,	// (0x0003b678) toolbar_button_pane_g6

0x20f8,	// (0x0003b680) toolbar_button_pane_g7

0x2100,	// (0x0003b688) toolbar_button_pane_g8

0x2108,	// (0x0003b690) toolbar_button_pane_g9

0x0009,

0xf78f,	// (0x00048d17) toolbar_button_pane_g

0x06c2,	// (0x00039c4a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x06c2,	// (0x00039c4a) list_single_2graphic_pane_g1_cp3

0xa733,	// (0x00043cbb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa733,	// (0x00043cbb) list_single_2graphic_pane_g2_cp3

0x06df,	// (0x00039c67) list_single_2graphic_pane_g3_cp3

0x06e7,	// (0x00039c6f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x06e7,	// (0x00039c6f) list_single_2graphic_pane_g4_cp3

0xa744,	// (0x00043ccc) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa744,	// (0x00043ccc) list_single_2graphic_pane_t1_cp3

0x070f,	// (0x00039c97) list_single_midp_graphic_pane_g2_ParamLimits

0x070f,	// (0x00039c97) list_single_midp_graphic_pane_g2

0xf4bb,	// (0x00048a43) aid_zoom_text_primary

0xddda,	// (0x00047362) aid_zoom_text_secondary

0xc35d,	// (0x000458e5) status_small_pane_g7_ParamLimits

0xc35d,	// (0x000458e5) status_small_pane_g7

0x99b7,	// (0x00042f3f) status_small_pane_t1_ParamLimits

0x899b,	// (0x00041f23) title_pane_g2

0x0003,

0xf527,	// (0x00048aaf) title_pane_g

0x8dae,	// (0x00042336) aid_size_cell_colour_1_pane_ParamLimits

0x8dae,	// (0x00042336) aid_size_cell_colour_1_pane

0x8dc2,	// (0x0004234a) aid_size_cell_colour_2_pane_ParamLimits

0x8dc2,	// (0x0004234a) aid_size_cell_colour_2_pane

0x8dd6,	// (0x0004235e) aid_size_cell_colour_3_pane_ParamLimits

0x8dd6,	// (0x0004235e) aid_size_cell_colour_3_pane

0x8dea,	// (0x00042372) aid_size_cell_colour_4_pane_ParamLimits

0x8dea,	// (0x00042372) aid_size_cell_colour_4_pane

0xf0b8,	// (0x00048640) title_pane_stacon_g1_ParamLimits

0xf0b8,	// (0x00048640) title_pane_stacon_g1

0x2794,	// (0x0003bd1c) popup_note_wait_window_g3_ParamLimits

0x2794,	// (0x0003bd1c) popup_note_wait_window_g3

0x280a,	// (0x0003bd92) popup_note_wait_window_t5_ParamLimits

0x280a,	// (0x0003bd92) popup_note_wait_window_t5

0xb549,	// (0x00044ad1) main_feb_china_hwr_fs_writing_pane

0x9c27,	// (0x000431af) popup_feb_china_hwr_fs_window_ParamLimits

0x9c27,	// (0x000431af) popup_feb_china_hwr_fs_window

0xa760,	// (0x00043ce8) aid_size_cell_hwr_fs_ParamLimits

0xa760,	// (0x00043ce8) aid_size_cell_hwr_fs

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp3_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp3

0xa775,	// (0x00043cfd) grid_hwr_fs_pane_ParamLimits

0xa775,	// (0x00043cfd) grid_hwr_fs_pane

0x075e,	// (0x00039ce6) linegrid_hwr_fs_pane_ParamLimits

0x075e,	// (0x00039ce6) linegrid_hwr_fs_pane

0xa78d,	// (0x00043d15) cell_hwr_fs_pane_ParamLimits

0xa78d,	// (0x00043d15) cell_hwr_fs_pane

0x2160,	// (0x0003b6e8) linegrid_hwr_fs_pane_g1_ParamLimits

0x2160,	// (0x0003b6e8) linegrid_hwr_fs_pane_g1

0xa7b3,	// (0x00043d3b) linegrid_hwr_fs_pane_g2_ParamLimits

0xa7b3,	// (0x00043d3b) linegrid_hwr_fs_pane_g2

0x217e,	// (0x0003b706) linegrid_hwr_fs_pane_g3_ParamLimits

0x217e,	// (0x0003b706) linegrid_hwr_fs_pane_g3

0xa7c5,	// (0x00043d4d) linegrid_hwr_fs_pane_g4_ParamLimits

0xa7c5,	// (0x00043d4d) linegrid_hwr_fs_pane_g4

0x07aa,	// (0x00039d32) linegrid_hwr_fs_pane_g5_ParamLimits

0x07aa,	// (0x00039d32) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b5,	// (0x00048d3d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b5,	// (0x00048d3d) linegrid_hwr_fs_pane_g

0x218a,	// (0x0003b712) cell_hwr_fs_pane_g1_ParamLimits

0x218a,	// (0x0003b712) cell_hwr_fs_pane_g1

0x1f40,	// (0x0003b4c8) cell_hwr_fs_pane_g2_ParamLimits

0x1f40,	// (0x0003b4c8) cell_hwr_fs_pane_g2

0xa7df,	// (0x00043d67) cell_hwr_fs_pane_g3_ParamLimits

0xa7df,	// (0x00043d67) cell_hwr_fs_pane_g3

0xa7ec,	// (0x00043d74) cell_hwr_fs_pane_g4_ParamLimits

0xa7ec,	// (0x00043d74) cell_hwr_fs_pane_g4

0x0003,

0xf7c0,	// (0x00048d48) cell_hwr_fs_pane_g_ParamLimits

0xf7c0,	// (0x00048d48) cell_hwr_fs_pane_g

0xa7f9,	// (0x00043d81) cell_hwr_fs_pane_t1

0xb549,	// (0x00044ad1) grid_highlight_pane_cp6

0xb549,	// (0x00044ad1) main_idle_act2_pane

0xba74,	// (0x00044ffc) aid_inside_area_popup_secondary

0xc613,	// (0x00045b9b) aid_inside_area_window_primary_ParamLimits

0xc613,	// (0x00045b9b) aid_inside_area_window_primary

0xcb33,	// (0x000460bb) ai2_news_ticker_pane

0x39bd,	// (0x0003cf45) aid_size_cell_ai1_link_ParamLimits

0x39bd,	// (0x0003cf45) aid_size_cell_ai1_link

0xcb3b,	// (0x000460c3) popup_ai2_data_window_ParamLimits

0xcb3b,	// (0x000460c3) popup_ai2_data_window

0x39ed,	// (0x0003cf75) popup_ai2_link_window_ParamLimits

0x39ed,	// (0x0003cf75) popup_ai2_link_window

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp4_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp4

0x3a01,	// (0x0003cf89) grid_ai2_link_pane_ParamLimits

0x3a01,	// (0x0003cf89) grid_ai2_link_pane

0x3a18,	// (0x0003cfa0) popup_ai2_link_window_g1_ParamLimits

0x3a18,	// (0x0003cfa0) popup_ai2_link_window_g1

0x3a24,	// (0x0003cfac) popup_ai2_link_window_g2_ParamLimits

0x3a24,	// (0x0003cfac) popup_ai2_link_window_g2

0x0001,

0xf993,	// (0x00048f1b) popup_ai2_link_window_g_ParamLimits

0xf993,	// (0x00048f1b) popup_ai2_link_window_g

0x3a33,	// (0x0003cfbb) ai2_mp_button_pane

0x3a3b,	// (0x0003cfc3) ai2_mp_volume_pane

0x2367,	// (0x0003b8ef) bg_popup_sub_pane_cp5_ParamLimits

0x2367,	// (0x0003b8ef) bg_popup_sub_pane_cp5

0x3a43,	// (0x0003cfcb) heading_ai2_gene_pane_ParamLimits

0x3a43,	// (0x0003cfcb) heading_ai2_gene_pane

0x3a4f,	// (0x0003cfd7) list_ai2_gene_pane_ParamLimits

0x3a4f,	// (0x0003cfd7) list_ai2_gene_pane

0x3a97,	// (0x0003d01f) cell_ai2_link_pane_ParamLimits

0x3a97,	// (0x0003d01f) cell_ai2_link_pane

0x3aad,	// (0x0003d035) cell_ai2_link_pane_g1

0xb549,	// (0x00044ad1) grid_highlight_pane_cp7

0x0bb0,	// (0x0003a138) ai2_mp_volume_pane_g1

0x3b7d,	// (0x0003d105) ai2_mp_volume_pane_g2

0x3af2,	// (0x0003d07a) list_ai2_gene_pane_t1

0x3b85,	// (0x0003d10d) ai2_mp_volume_pane_g3

0x0002,

0xf9ac,	// (0x00048f34) ai2_mp_volume_pane_g

0xab6b,	// (0x000440f3) volume_small_pane_cp3

0x3b8d,	// (0x0003d115) aid_size_cell_ai2_button

0x3b95,	// (0x0003d11d) grid_ai2_button_pane

0x3b9e,	// (0x0003d126) cell_ai2_button_pane_ParamLimits

0x3b9e,	// (0x0003d126) cell_ai2_button_pane

0xb53f,	// (0x00044ac7) cell_ai2_button_pane_g1

0xb549,	// (0x00044ad1) grid_highlight_pane_cp8

0x3b3d,	// (0x0003d0c5) ai2_gene_pane_t1_ParamLimits

0x3b3d,	// (0x0003d0c5) ai2_gene_pane_t1

0x9b89,	// (0x00043111) aid_height_parent_landscape

0xc861,	// (0x00045de9) aid_height_set_list

0x3493,	// (0x0003ca1b) aid_size_parent

0x37d8,	// (0x0003cd60) aid_size_cell_graphic_pane_ParamLimits

0x3a5f,	// (0x0003cfe7) popup_ai2_data_window_g1_ParamLimits

0x3a5f,	// (0x0003cfe7) popup_ai2_data_window_g1

0x3a6b,	// (0x0003cff3) ai2_news_ticker_pane_g1

0x3a73,	// (0x0003cffb) ai2_news_ticker_pane_g2

0x0001,

0xf998,	// (0x00048f20) ai2_news_ticker_pane_g

0x3a7b,	// (0x0003d003) ai2_news_ticker_pane_t1

0x3a89,	// (0x0003d011) ai2_news_ticker_pane_t2

0x0001,

0xf99d,	// (0x00048f25) ai2_news_ticker_pane_t

0x3ab6,	// (0x0003d03e) heading_ai2_gene_pane_g1

0x3abe,	// (0x0003d046) heading_ai2_gene_pane_t1_ParamLimits

0x3abe,	// (0x0003d046) heading_ai2_gene_pane_t1

0x3ad3,	// (0x0003d05b) list_highlight_pane_cp6

0x3adb,	// (0x0003d063) ai2_gene_pane_ParamLimits

0x3adb,	// (0x0003d063) ai2_gene_pane

0x3b00,	// (0x0003d088) list_ai2_gene_pane_t2

0x0001,

0xf9a2,	// (0x00048f2a) list_ai2_gene_pane_t

0x3b0e,	// (0x0003d096) list_highlight_pane_cp8_ParamLimits

0x3b0e,	// (0x0003d096) list_highlight_pane_cp8

0x3b1f,	// (0x0003d0a7) ai2_gene_pane_g1_ParamLimits

0x3b1f,	// (0x0003d0a7) ai2_gene_pane_g1

0x3b31,	// (0x0003d0b9) ai2_gene_pane_g2_ParamLimits

0x3b31,	// (0x0003d0b9) ai2_gene_pane_g2

0x0001,

0xf9a7,	// (0x00048f2f) ai2_gene_pane_g_ParamLimits

0xf9a7,	// (0x00048f2f) ai2_gene_pane_g

0xb8fa,	// (0x00044e82) scroll_pane_cp12

0x9b46,	// (0x000430ce) control_pane_t3_ParamLimits

0x9b46,	// (0x000430ce) control_pane_t3

0x99a8,	// (0x00042f30) status_small_pane_g8_ParamLimits

0x99a8,	// (0x00042f30) status_small_pane_g8

0x9cea,	// (0x00043272) popup_find_window_ParamLimits

0x9f77,	// (0x000434ff) popup_note_image_window_ParamLimits

0xde54,	// (0x000473dc) list_double2_graphic_pane_vc_g1_ParamLimits

0xde54,	// (0x000473dc) list_double2_graphic_pane_vc_g1

0xde60,	// (0x000473e8) list_double2_graphic_pane_vc_g2_ParamLimits

0xde60,	// (0x000473e8) list_double2_graphic_pane_vc_g2

0xde6c,	// (0x000473f4) list_double2_graphic_pane_vc_g3_ParamLimits

0xde6c,	// (0x000473f4) list_double2_graphic_pane_vc_g3

0x0002,

0xf783,	// (0x00048d0b) list_double2_graphic_pane_vc_g_ParamLimits

0xf783,	// (0x00048d0b) list_double2_graphic_pane_vc_g

0xdc43,	// (0x000471cb) list_double2_graphic_pane_vc_t1_ParamLimits

0xdc43,	// (0x000471cb) list_double2_graphic_pane_vc_t1

0xdbd3,	// (0x0004715b) list_single_heading_pane_vc_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_heading_pane_vc_g1

0xdbdf,	// (0x00047167) list_single_heading_pane_vc_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_heading_pane_vc_g

0xde78,	// (0x00047400) list_single_heading_pane_vc_t1_ParamLimits

0xde78,	// (0x00047400) list_single_heading_pane_vc_t1

0xde8e,	// (0x00047416) list_single_heading_pane_vc_t2_ParamLimits

0xde8e,	// (0x00047416) list_single_heading_pane_vc_t2

0x0001,

0xf7a4,	// (0x00048d2c) list_single_heading_pane_vc_t_ParamLimits

0xf7a4,	// (0x00048d2c) list_single_heading_pane_vc_t

0x2110,	// (0x0003b698) list_setting_number_pane_vc_g1_ParamLimits

0x2110,	// (0x0003b698) list_setting_number_pane_vc_g1

0x211c,	// (0x0003b6a4) list_setting_number_pane_vc_g2_ParamLimits

0x211c,	// (0x0003b6a4) list_setting_number_pane_vc_g2

0x0001,

0xf7a9,	// (0x00048d31) list_setting_number_pane_vc_g_ParamLimits

0xf7a9,	// (0x00048d31) list_setting_number_pane_vc_g

0xdea0,	// (0x00047428) list_setting_number_pane_vc_t1_ParamLimits

0xdea0,	// (0x00047428) list_setting_number_pane_vc_t1

0xdeb4,	// (0x0004743c) list_setting_number_pane_vc_t2_ParamLimits

0xdeb4,	// (0x0004743c) list_setting_number_pane_vc_t2

0xded0,	// (0x00047458) list_setting_number_pane_vc_t3_ParamLimits

0xded0,	// (0x00047458) list_setting_number_pane_vc_t3

0x0002,

0xf7ae,	// (0x00048d36) list_setting_number_pane_vc_t_ParamLimits

0xf7ae,	// (0x00048d36) list_setting_number_pane_vc_t

0xdefa,	// (0x00047482) set_value_pane_vc_ParamLimits

0xdefa,	// (0x00047482) set_value_pane_vc

0x3647,	// (0x0003cbcf) list_double2_graphic_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double2_graphic_pane_vc

0x3647,	// (0x0003cbcf) list_double2_large_graphic_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double2_large_graphic_pane_vc

0x3647,	// (0x0003cbcf) list_double2_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double2_pane_vc

0x3647,	// (0x0003cbcf) list_double_graphic_heading_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_graphic_heading_pane_vc

0x3647,	// (0x0003cbcf) list_double_graphic_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_graphic_pane_vc

0x3647,	// (0x0003cbcf) list_double_heading_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_heading_pane_vc

0xdf19,	// (0x000474a1) list_double_large_graphic_pane_vc_ParamLimits

0xdf19,	// (0x000474a1) list_double_large_graphic_pane_vc

0x3647,	// (0x0003cbcf) list_double_number_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_number_pane_vc

0x3647,	// (0x0003cbcf) list_double_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_pane_vc

0x3647,	// (0x0003cbcf) list_double_time_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_double_time_pane_vc

0x3647,	// (0x0003cbcf) list_setting_number_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_setting_number_pane_vc

0x3647,	// (0x0003cbcf) list_setting_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_setting_pane_vc

0x3647,	// (0x0003cbcf) list_single_graphic_heading_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_single_graphic_heading_pane_vc

0x3647,	// (0x0003cbcf) list_single_heading_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_single_heading_pane_vc

0x3647,	// (0x0003cbcf) list_single_number_heading_pane_vc_ParamLimits

0x3647,	// (0x0003cbcf) list_single_number_heading_pane_vc

0xdbc7,	// (0x0004714f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdbc7,	// (0x0004714f) list_double_graphic_heading_pane_vc_g1

0xde60,	// (0x000473e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xde60,	// (0x000473e8) list_double_graphic_heading_pane_vc_g2

0xde6c,	// (0x000473f4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xde6c,	// (0x000473f4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b3,	// (0x00048f3b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b3,	// (0x00048f3b) list_double_graphic_heading_pane_vc_g

0xdf38,	// (0x000474c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xdf38,	// (0x000474c0) list_double_graphic_heading_pane_vc_t1

0xdf4c,	// (0x000474d4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xdf4c,	// (0x000474d4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x00048f42) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x00048f42) list_double_graphic_heading_pane_vc_t

0x2110,	// (0x0003b698) list_setting_pane_vc_g1_ParamLimits

0x2110,	// (0x0003b698) list_setting_pane_vc_g1

0x211c,	// (0x0003b6a4) list_setting_pane_vc_g2_ParamLimits

0x211c,	// (0x0003b6a4) list_setting_pane_vc_g2

0x0001,

0xf7a9,	// (0x00048d31) list_setting_pane_vc_g_ParamLimits

0xf7a9,	// (0x00048d31) list_setting_pane_vc_g

0xdf64,	// (0x000474ec) list_setting_pane_vc_t1_ParamLimits

0xdf64,	// (0x000474ec) list_setting_pane_vc_t1

0xdf80,	// (0x00047508) list_setting_pane_vc_t2_ParamLimits

0xdf80,	// (0x00047508) list_setting_pane_vc_t2

0x0001,

0xf9fd,	// (0x00048f85) list_setting_pane_vc_t_ParamLimits

0xf9fd,	// (0x00048f85) list_setting_pane_vc_t

0xdefa,	// (0x00047482) set_value_pane_cp_vc_ParamLimits

0xdefa,	// (0x00047482) set_value_pane_cp_vc

0xdbd3,	// (0x0004715b) list_single_number_heading_pane_vc_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_single_number_heading_pane_vc_g1

0xdbdf,	// (0x00047167) list_single_number_heading_pane_vc_g2_ParamLimits

0xdbdf,	// (0x00047167) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00048b29) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00048b29) list_single_number_heading_pane_vc_g

0xdbeb,	// (0x00047173) list_single_number_heading_pane_vc_t1_ParamLimits

0xdbeb,	// (0x00047173) list_single_number_heading_pane_vc_t1

0xdf9a,	// (0x00047522) list_single_number_heading_pane_vc_t2_ParamLimits

0xdf9a,	// (0x00047522) list_single_number_heading_pane_vc_t2

0xdfb0,	// (0x00047538) list_single_number_heading_pane_vc_t3_ParamLimits

0xdfb0,	// (0x00047538) list_single_number_heading_pane_vc_t3

0x0002,

0xfa02,	// (0x00048f8a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa02,	// (0x00048f8a) list_single_number_heading_pane_vc_t

0xdfc2,	// (0x0004754a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdfc2,	// (0x0004754a) list_single_graphic_heading_pane_vc_g1

0xdbd3,	// (0x0004715b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdbd3,	// (0x0004715b) list_single_graphic_heading_pane_vc_g4

0xdbdf,	// (0x00047167) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdbdf,	// (0x00047167) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa09,	// (0x00048f91) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x00048f91) list_single_graphic_heading_pane_vc_g

0xdbeb,	// (0x00047173) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdbeb,	// (0x00047173) list_single_graphic_heading_pane_vc_t1

0xdc13,	// (0x0004719b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xdc13,	// (0x0004719b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x00048f98) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x00048f98) list_single_graphic_heading_pane_vc_t

0xdbd3,	// (0x0004715b) list_double2_pane_vc_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_double2_pane_vc_g1

0xdbdf,	// (0x00047167) list_double2_pane_vc_g2_ParamLimits

0xdbdf,	// (0x00047167) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00048b29) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00048b29) list_double2_pane_vc_g

0xdfce,	// (0x00047556) list_double2_pane_vc_t1_ParamLimits

0xdfce,	// (0x00047556) list_double2_pane_vc_t1

0xdc37,	// (0x000471bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xdc37,	// (0x000471bf) list_double2_large_graphic_pane_vc_g1

0xdbd3,	// (0x0004715b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdbd3,	// (0x0004715b) list_double2_large_graphic_pane_vc_g2

0xdbdf,	// (0x00047167) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdbdf,	// (0x00047167) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00048b46) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00048b46) list_double2_large_graphic_pane_vc_g

0xdc43,	// (0x000471cb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdc43,	// (0x000471cb) list_double2_large_graphic_pane_vc_t1

0xdfe6,	// (0x0004756e) list_double_time_pane_vc_g1_ParamLimits

0xdfe6,	// (0x0004756e) list_double_time_pane_vc_g1

0xdff2,	// (0x0004757a) list_double_time_pane_vc_g2_ParamLimits

0xdff2,	// (0x0004757a) list_double_time_pane_vc_g2

0x0001,

0xfa15,	// (0x00048f9d) list_double_time_pane_vc_g_ParamLimits

0xfa15,	// (0x00048f9d) list_double_time_pane_vc_g

0xdffe,	// (0x00047586) list_double_time_pane_vc_t1_ParamLimits

0xdffe,	// (0x00047586) list_double_time_pane_vc_t1

0xe022,	// (0x000475aa) list_double_time_pane_vc_t2_ParamLimits

0xe022,	// (0x000475aa) list_double_time_pane_vc_t2

0xe071,	// (0x000475f9) list_double_time_pane_vc_t3_ParamLimits

0xe071,	// (0x000475f9) list_double_time_pane_vc_t3

0xe083,	// (0x0004760b) list_double_time_pane_vc_t4_ParamLimits

0xe083,	// (0x0004760b) list_double_time_pane_vc_t4

0x0003,

0xfa1a,	// (0x00048fa2) list_double_time_pane_vc_t_ParamLimits

0xfa1a,	// (0x00048fa2) list_double_time_pane_vc_t

0xdbd3,	// (0x0004715b) list_double_pane_vc_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_double_pane_vc_g1

0xdbdf,	// (0x00047167) list_double_pane_vc_g2_ParamLimits

0xdbdf,	// (0x00047167) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00048b29) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00048b29) list_double_pane_vc_g

0xe097,	// (0x0004761f) list_double_pane_vc_t1_ParamLimits

0xe097,	// (0x0004761f) list_double_pane_vc_t1

0xe0ab,	// (0x00047633) list_double_pane_vc_t2_ParamLimits

0xe0ab,	// (0x00047633) list_double_pane_vc_t2

0x0001,

0xfa23,	// (0x00048fab) list_double_pane_vc_t_ParamLimits

0xfa23,	// (0x00048fab) list_double_pane_vc_t

0xdbd3,	// (0x0004715b) list_double_number_pane_vc_g1_ParamLimits

0xdbd3,	// (0x0004715b) list_double_number_pane_vc_g1

0xdbdf,	// (0x00047167) list_double_number_pane_vc_g2_ParamLimits

0xdbdf,	// (0x00047167) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00048b29) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00048b29) list_double_number_pane_vc_g

0xe0c3,	// (0x0004764b) list_double_number_pane_vc_t1_ParamLimits

0xe0c3,	// (0x0004764b) list_double_number_pane_vc_t1

0xe097,	// (0x0004761f) list_double_number_pane_vc_t2_ParamLimits

0xe097,	// (0x0004761f) list_double_number_pane_vc_t2

0xe0d5,	// (0x0004765d) list_double_number_pane_vc_t3_ParamLimits

0xe0d5,	// (0x0004765d) list_double_number_pane_vc_t3

0x0002,

0xfa28,	// (0x00048fb0) list_double_number_pane_vc_t_ParamLimits

0xfa28,	// (0x00048fb0) list_double_number_pane_vc_t

0xe0ed,	// (0x00047675) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe0ed,	// (0x00047675) list_double_large_graphic_pane_vc_g1

0xe109,	// (0x00047691) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe109,	// (0x00047691) list_double_large_graphic_pane_vc_g2

0xe11d,	// (0x000476a5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe11d,	// (0x000476a5) list_double_large_graphic_pane_vc_g3

0xe12c,	// (0x000476b4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe12c,	// (0x000476b4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2f,	// (0x00048fb7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2f,	// (0x00048fb7) list_double_large_graphic_pane_vc_g

0xe138,	// (0x000476c0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe138,	// (0x000476c0) list_double_large_graphic_pane_vc_t1

0xe154,	// (0x000476dc) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe154,	// (0x000476dc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa38,	// (0x00048fc0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa38,	// (0x00048fc0) list_double_large_graphic_pane_vc_t

0xde60,	// (0x000473e8) list_double_heading_pane_vc_g1_ParamLimits

0xde60,	// (0x000473e8) list_double_heading_pane_vc_g1

0xde6c,	// (0x000473f4) list_double_heading_pane_vc_g2_ParamLimits

0xde6c,	// (0x000473f4) list_double_heading_pane_vc_g2

0x0001,

0xfa3d,	// (0x00048fc5) list_double_heading_pane_vc_g_ParamLimits

0xfa3d,	// (0x00048fc5) list_double_heading_pane_vc_g

0xe176,	// (0x000476fe) list_double_heading_pane_vc_t1_ParamLimits

0xe176,	// (0x000476fe) list_double_heading_pane_vc_t1

0xe18a,	// (0x00047712) list_double_heading_pane_vc_t2_ParamLimits

0xe18a,	// (0x00047712) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x00048fca) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00048fca) list_double_heading_pane_vc_t

0xe1a2,	// (0x0004772a) list_double_graphic_pane_vc_g1_ParamLimits

0xe1a2,	// (0x0004772a) list_double_graphic_pane_vc_g1

0xe1b5,	// (0x0004773d) list_double_graphic_pane_vc_g2_ParamLimits

0xe1b5,	// (0x0004773d) list_double_graphic_pane_vc_g2

0xdbd3,	// (0x0004715b) list_double_graphic_pane_vc_g3_ParamLimits

0xdbd3,	// (0x0004715b) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x00048fcf) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x00048fcf) list_double_graphic_pane_vc_g

0xe1d2,	// (0x0004775a) list_double_graphic_pane_vc_t1_ParamLimits

0xe1d2,	// (0x0004775a) list_double_graphic_pane_vc_t1

0xe1f1,	// (0x00047779) list_double_graphic_pane_vc_t2_ParamLimits

0xe1f1,	// (0x00047779) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x00048fd8) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x00048fd8) list_double_graphic_pane_vc_t

0xdb84,	// (0x0004710c) aid_size_cell_fastswap

0x8606,	// (0x00041b8e) aid_size_cell_touch_ParamLimits

0x8606,	// (0x00041b8e) aid_size_cell_touch

0xdb96,	// (0x0004711e) popup_fast_swap_wide_window_ParamLimits

0xdb96,	// (0x0004711e) popup_fast_swap_wide_window

0x8932,	// (0x00041eba) touch_pane_ParamLimits

0x8932,	// (0x00041eba) touch_pane

0xb947,	// (0x00044ecf) button_value_adjust_pane_cp2

0xdd83,	// (0x0004730b) button_value_adjust_pane_cp4

0xdd8b,	// (0x00047313) form_field_data_pane_cp2

0x9205,	// (0x0004278d) form_field_data_wide_pane_cp2

0xbc61,	// (0x000451e9) bg_scroll_pane_ParamLimits

0x9595,	// (0x00042b1d) scroll_handle_pane_ParamLimits

0xf211,	// (0x00048799) scroll_sc2_down_pane_ParamLimits

0xf211,	// (0x00048799) scroll_sc2_down_pane

0xbc92,	// (0x0004521a) scroll_sc2_up_pane_ParamLimits

0xbc92,	// (0x0004521a) scroll_sc2_up_pane

0xcc84,	// (0x0004620c) grid_wheel_folder_pane_g1_ParamLimits

0xcc84,	// (0x0004620c) grid_wheel_folder_pane_g1

0xf393,	// (0x0004891b) clock_nsta_pane_cp2_ParamLimits

0xf393,	// (0x0004891b) clock_nsta_pane_cp2

0x988c,	// (0x00042e14) listscroll_midp_pane_ParamLimits

0x9898,	// (0x00042e20) midp_canvas_pane

0xc37f,	// (0x00045907) nsta_clock_indic_pane

0xc3a7,	// (0x0004592f) listscroll_form_pane_vc

0xc3af,	// (0x00045937) listscroll_set_pane_vc_ParamLimits

0xc3af,	// (0x00045937) listscroll_set_pane_vc

0xa42c,	// (0x000439b4) clock_nsta_pane

0xa456,	// (0x000439de) indicator_nsta_pane

0x2006,	// (0x0003b58e) bg_popup_sub_pane_cp2_ParamLimits

0x201a,	// (0x0003b5a2) find_pane_cp2_ParamLimits

0x201a,	// (0x0003b5a2) find_pane_cp2

0x2030,	// (0x0003b5b8) grid_toobar_pane_ParamLimits

0x2128,	// (0x0003b6b0) list_form_gen_pane_vc_ParamLimits

0x2128,	// (0x0003b6b0) list_form_gen_pane_vc

0x213e,	// (0x0003b6c6) scroll_pane_cp8_vc_ParamLimits

0x213e,	// (0x0003b6c6) scroll_pane_cp8_vc

0x21ba,	// (0x0003b742) data_form_wide_pane_vc_ParamLimits

0x21ba,	// (0x0003b742) data_form_wide_pane_vc

0x21c6,	// (0x0003b74e) form_field_data_wide_pane_vc_g1

0x21ce,	// (0x0003b756) form_field_data_wide_pane_vc_t1_ParamLimits

0x21ce,	// (0x0003b756) form_field_data_wide_pane_vc_t1

0xb95b,	// (0x00044ee3) input_focus_pane_cp6_vc_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_cp6_vc

0x251b,	// (0x0003baa3) list_midp_pane_ParamLimits

0x3842,	// (0x0003cdca) scroll_pane_cp16_ParamLimits

0x3842,	// (0x0003cdca) scroll_pane_cp16

0x2571,	// (0x0003baf9) button_value_adjust_pane_ParamLimits

0x2571,	// (0x0003baf9) button_value_adjust_pane

0xc872,	// (0x00045dfa) button_value_adjust_pane_cp6_ParamLimits

0xc872,	// (0x00045dfa) button_value_adjust_pane_cp6

0xc98c,	// (0x00045f14) settings_code_pane_cp_ParamLimits

0xc98c,	// (0x00045f14) settings_code_pane_cp

0xb53f,	// (0x00044ac7) cell_touch_pane_g1

0xb53f,	// (0x00044ac7) cell_touch_pane_g2

0x0001,

0xf6c8,	// (0x00048c50) cell_touch_pane_g

0xcb51,	// (0x000460d9) cell_touch_pane_cp_ParamLimits

0xcb51,	// (0x000460d9) cell_touch_pane_cp

0xcb6d,	// (0x000460f5) cell_touch_pane_ParamLimits

0xcb6d,	// (0x000460f5) cell_touch_pane

0xb53f,	// (0x00044ac7) scroll_sc2_down_pane_g1

0xb53f,	// (0x00044ac7) scroll_sc2_up_pane_g1

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp4_vc

0x3bd2,	// (0x0003d15a) list_set_graphic_pane_vc_g1_ParamLimits

0x3bd2,	// (0x0003d15a) list_set_graphic_pane_vc_g1

0x3bde,	// (0x0003d166) list_set_graphic_pane_vc_g2_ParamLimits

0x3bde,	// (0x0003d166) list_set_graphic_pane_vc_g2

0x0001,

0xf9bf,	// (0x00048f47) list_set_graphic_pane_vc_g_ParamLimits

0xf9bf,	// (0x00048f47) list_set_graphic_pane_vc_g

0x3bea,	// (0x0003d172) text_primary_small_cp13_vc_ParamLimits

0x3bea,	// (0x0003d172) text_primary_small_cp13_vc

0x3c02,	// (0x0003d18a) list_set_graphic_pane_vc_ParamLimits

0x3c02,	// (0x0003d18a) list_set_graphic_pane_vc

0xb549,	// (0x00044ad1) input_focus_pane_cp2_vc

0xb53f,	// (0x00044ac7) setting_code_pane_vc_g1

0xb5bc,	// (0x00044b44) setting_code_pane_vc_t1

0x3c15,	// (0x0003d19d) set_text_pane_vc_t1_ParamLimits

0x3c15,	// (0x0003d19d) set_text_pane_vc_t1

0xb549,	// (0x00044ad1) input_focus_pane_cp1_vc

0x3c32,	// (0x0003d1ba) list_set_text_pane_vc

0xb53f,	// (0x00044ac7) setting_text_pane_vc_g1

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp2_vc

0xb5b3,	// (0x00044b3b) setting_slider_graphic_pane_vc_g1

0x3c3c,	// (0x0003d1c4) setting_slider_graphic_pane_vc_t1

0x3c4c,	// (0x0003d1d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x00048f4c) setting_slider_graphic_pane_vc_t

0x3c5c,	// (0x0003d1e4) slider_set_pane_cp_vc

0x3c64,	// (0x0003d1ec) slider_set_pane_vc_g1

0x3c6d,	// (0x0003d1f5) slider_set_pane_vc_g2

0x0006,

0xf9c9,	// (0x00048f51) slider_set_pane_vc_g

0xb9b3,	// (0x00044f3b) set_opt_bg_pane_g1_copy1

0xb9bb,	// (0x00044f43) set_opt_bg_pane_g2_copy1

0x3c99,	// (0x0003d221) set_opt_bg_pane_g3_copy1

0xb9cb,	// (0x00044f53) set_opt_bg_pane_g4_copy1

0xb9d3,	// (0x00044f5b) set_opt_bg_pane_g5_copy1

0xb9db,	// (0x00044f63) set_opt_bg_pane_g6_copy1

0x3ca1,	// (0x0003d229) set_opt_bg_pane_g7_copy1

0x3cab,	// (0x0003d233) set_opt_bg_pane_g8_copy1

0x3cb3,	// (0x0003d23b) set_opt_bg_pane_g9_copy1

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp_vc

0x3cbb,	// (0x0003d243) setting_slider_pane_vc_t1

0x3cca,	// (0x0003d252) setting_slider_pane_vc_t2

0x3cda,	// (0x0003d262) setting_slider_pane_vc_t3

0x0002,

0xf9d8,	// (0x00048f60) setting_slider_pane_vc_t

0x3cea,	// (0x0003d272) slider_set_pane_vc

0x0801,	// (0x00039d89) volume_set_pane_vc_g1

0x0bc1,	// (0x0003a149) volume_set_pane_vc_g2

0x0bca,	// (0x0003a152) volume_set_pane_vc_g3

0x0bd3,	// (0x0003a15b) volume_set_pane_vc_g4

0x0bdc,	// (0x0003a164) volume_set_pane_vc_g5

0x0be5,	// (0x0003a16d) volume_set_pane_vc_g6

0x0bee,	// (0x0003a176) volume_set_pane_vc_g7

0x0bf7,	// (0x0003a17f) volume_set_pane_vc_g8

0x0c00,	// (0x0003a188) volume_set_pane_vc_g9

0x0c09,	// (0x0003a191) volume_set_pane_vc_g10

0x0009,

0xf9df,	// (0x00048f67) volume_set_pane_vc_g

0x3cf2,	// (0x0003d27a) volume_set_pane_vc

0x3cfc,	// (0x0003d284) button_value_adjust_pane_cp1_vc

0x3d06,	// (0x0003d28e) list_highlight_pane_cp2_vc

0x3d0f,	// (0x0003d297) list_set_pane_vc_ParamLimits

0x3d0f,	// (0x0003d297) list_set_pane_vc

0x3d6d,	// (0x0003d2f5) main_pane_set_vc_t1_ParamLimits

0x3d6d,	// (0x0003d2f5) main_pane_set_vc_t1

0x3d82,	// (0x0003d30a) main_pane_set_vc_t2_ParamLimits

0x3d82,	// (0x0003d30a) main_pane_set_vc_t2

0x3d94,	// (0x0003d31c) main_pane_set_vc_t3_ParamLimits

0x3d94,	// (0x0003d31c) main_pane_set_vc_t3

0x3da6,	// (0x0003d32e) main_pane_set_vc_t4_ParamLimits

0x3da6,	// (0x0003d32e) main_pane_set_vc_t4

0x0003,

0xf9f4,	// (0x00048f7c) main_pane_set_vc_t_ParamLimits

0xf9f4,	// (0x00048f7c) main_pane_set_vc_t

0x3db8,	// (0x0003d340) setting_code_pane_vc_ParamLimits

0x3db8,	// (0x0003d340) setting_code_pane_vc

0x3dc7,	// (0x0003d34f) setting_slider_graphic_pane_vc

0x3dc7,	// (0x0003d34f) setting_slider_pane_vc

0x3dc7,	// (0x0003d34f) setting_text_pane_vc

0x3dc7,	// (0x0003d34f) setting_volume_pane_vc

0x3dcf,	// (0x0003d357) scroll_pane_cp121_vc

0xb935,	// (0x00044ebd) set_content_pane_vc

0x3dd7,	// (0x0003d35f) button_value_adjust_pane_g1

0x3de0,	// (0x0003d368) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x00048fdd) button_value_adjust_pane_g

0x3de9,	// (0x0003d371) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3de9,	// (0x0003d371) form_field_slider_wide_pane_vc_t1

0x3dfd,	// (0x0003d385) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3dfd,	// (0x0003d385) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x00048fe2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x00048fe2) form_field_slider_wide_pane_vc_t

0xb597,	// (0x00044b1f) input_focus_pane_cp10_vc_ParamLimits

0xb597,	// (0x00044b1f) input_focus_pane_cp10_vc

0x3e2b,	// (0x0003d3b3) slider_cont_pane_cp1_vc_ParamLimits

0x3e2b,	// (0x0003d3b3) slider_cont_pane_cp1_vc

0x3e3d,	// (0x0003d3c5) slider_form_pane_g1_cp2

0x3c6d,	// (0x0003d1f5) slider_form_pane_g2_cp2

0x3e6a,	// (0x0003d3f2) form_field_slider_pane_vc_t3

0x3e78,	// (0x0003d400) form_field_slider_pane_vc_t4

0x3e86,	// (0x0003d40e) slider_form_pane_vc_ParamLimits

0x3e86,	// (0x0003d40e) slider_form_pane_vc

0x3e93,	// (0x0003d41b) form_field_slider_pane_vc_t1_ParamLimits

0x3e93,	// (0x0003d41b) form_field_slider_pane_vc_t1

0x3dfd,	// (0x0003d385) form_field_slider_pane_vc_t2_ParamLimits

0x3dfd,	// (0x0003d385) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x00048ff4) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x00048ff4) form_field_slider_pane_vc_t

0xb597,	// (0x00044b1f) input_focus_pane_cp9_vc_ParamLimits

0xb597,	// (0x00044b1f) input_focus_pane_cp9_vc

0x3eaf,	// (0x0003d437) slider_cont_pane_vc_ParamLimits

0x3eaf,	// (0x0003d437) slider_cont_pane_vc

0x3ec3,	// (0x0003d44b) list_form_graphic_pane_cp_vc_ParamLimits

0x3ec3,	// (0x0003d44b) list_form_graphic_pane_cp_vc

0x21c6,	// (0x0003b74e) form_field_popup_wide_pane_vc_g1

0x3ed8,	// (0x0003d460) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3ed8,	// (0x0003d460) form_field_popup_wide_pane_vc_t1

0xb95b,	// (0x00044ee3) input_focus_pane_cp8_vc_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_cp8_vc

0x3f1d,	// (0x0003d4a5) list_form_wide_pane_vc_ParamLimits

0x3f1d,	// (0x0003d4a5) list_form_wide_pane_vc

0x3f29,	// (0x0003d4b1) list_form_graphic_pane_vc_g1

0x3f31,	// (0x0003d4b9) list_form_graphic_pane_vc_t1_ParamLimits

0x3f31,	// (0x0003d4b9) list_form_graphic_pane_vc_t1

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp5_vc_ParamLimits

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp5_vc

0x3f4d,	// (0x0003d4d5) list_form_graphic_pane_vc_ParamLimits

0x3f4d,	// (0x0003d4d5) list_form_graphic_pane_vc

0x21c6,	// (0x0003b74e) form_field_popup_pane_vc_g1

0x3f63,	// (0x0003d4eb) form_field_popup_pane_vc_t1_ParamLimits

0x3f63,	// (0x0003d4eb) form_field_popup_pane_vc_t1

0xb95b,	// (0x00044ee3) input_focus_pane_cp7_vc_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_cp7_vc

0x3f7a,	// (0x0003d502) list_form_pane_vc_ParamLimits

0x3f7a,	// (0x0003d502) list_form_pane_vc

0x3f86,	// (0x0003d50e) data_form_pane_vc_t1_ParamLimits

0x3f86,	// (0x0003d50e) data_form_pane_vc_t1

0xb9b3,	// (0x00044f3b) input_focus_pane_vc_g1

0xb9bb,	// (0x00044f43) input_focus_pane_vc_g2

0xb9c3,	// (0x00044f4b) input_focus_pane_vc_g3

0xb9cb,	// (0x00044f53) input_focus_pane_vc_g4

0xb9d3,	// (0x00044f5b) input_focus_pane_vc_g5

0xb9db,	// (0x00044f63) input_focus_pane_vc_g6

0xb9e3,	// (0x00044f6b) input_focus_pane_vc_g7

0xb9eb,	// (0x00044f73) input_focus_pane_vc_g8

0xb9f3,	// (0x00044f7b) input_focus_pane_vc_g9

0xb53f,	// (0x00044ac7) input_focus_pane_vc_g10

0x0009,

0xf651,	// (0x00048bd9) input_focus_pane_vc_g

0x21ba,	// (0x0003b742) data_form_pane_vc_ParamLimits

0x21ba,	// (0x0003b742) data_form_pane_vc

0x21c6,	// (0x0003b74e) form_field_data_pane_vc_g1

0x3fa1,	// (0x0003d529) form_field_data_pane_vc_t1_ParamLimits

0x3fa1,	// (0x0003d529) form_field_data_pane_vc_t1

0xb95b,	// (0x00044ee3) input_focus_pane_vc_ParamLimits

0xb95b,	// (0x00044ee3) input_focus_pane_vc

0x3fbb,	// (0x0003d543) button_value_adjust_pane_cp3_vc

0x3fc3,	// (0x0003d54b) button_value_adjust_pane_cp5_vc

0x3fcb,	// (0x0003d553) form_field_data_pane_vc_ParamLimits

0x3fcb,	// (0x0003d553) form_field_data_pane_vc

0x3fe2,	// (0x0003d56a) form_field_data_pane_vc_cp2

0x3fea,	// (0x0003d572) form_field_data_wide_pane_vc_ParamLimits

0x3fea,	// (0x0003d572) form_field_data_wide_pane_vc

0x4000,	// (0x0003d588) form_field_data_wide_pane_vc_cp2

0x4008,	// (0x0003d590) form_field_popup_pane_vc_ParamLimits

0x4008,	// (0x0003d590) form_field_popup_pane_vc

0x401f,	// (0x0003d5a7) form_field_popup_wide_pane_vc_ParamLimits

0x401f,	// (0x0003d5a7) form_field_popup_wide_pane_vc

0x4035,	// (0x0003d5bd) form_field_slider_pane_vc_ParamLimits

0x4035,	// (0x0003d5bd) form_field_slider_pane_vc

0x4048,	// (0x0003d5d0) form_field_slider_wide_pane_vc_ParamLimits

0x4048,	// (0x0003d5d0) form_field_slider_wide_pane_vc

0xcb8a,	// (0x00046112) grid_touch_1_pane_ParamLimits

0xcb8a,	// (0x00046112) grid_touch_1_pane

0xcb9e,	// (0x00046126) grid_touch_2_pane_ParamLimits

0xcb9e,	// (0x00046126) grid_touch_2_pane

0x412c,	// (0x0003d6b4) touch_pane_g1_ParamLimits

0x412c,	// (0x0003d6b4) touch_pane_g1

0x407f,	// (0x0003d607) cell_app_pane_cp_wide_ParamLimits

0x407f,	// (0x0003d607) cell_app_pane_cp_wide

0x4090,	// (0x0003d618) grid_popup_fast_wide_pane_ParamLimits

0x4090,	// (0x0003d618) grid_popup_fast_wide_pane

0x40a4,	// (0x0003d62c) scroll_pane_cp19_ParamLimits

0x40a4,	// (0x0003d62c) scroll_pane_cp19

0xb549,	// (0x00044ad1) bg_popup_window_pane_cp20

0x40b8,	// (0x0003d640) listscroll_popup_fast_wide_pane

0xcbc8,	// (0x00046150) grid_indicator_nsta_pane

0x40d2,	// (0x0003d65a) clock_nsta_pane_g1

0x40db,	// (0x0003d663) clock_nsta_pane_t1

0xcbd4,	// (0x0004615c) cell_indicator_nsta_pane_ParamLimits

0xcbd4,	// (0x0004615c) cell_indicator_nsta_pane

0x412c,	// (0x0003d6b4) cell_indicator_nsta_pane_g1

0xcbef,	// (0x00046177) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x00049005) cell_indicator_nsta_pane_g

0x414c,	// (0x0003d6d4) clock_nsta_pane_cp

0x4155,	// (0x0003d6dd) indicator_nsta_pane_cp

0x415f,	// (0x0003d6e7) nsta_clock_indic_pane_g1

0xb5e1,	// (0x00044b69) grid_indicator_pane

0x962f,	// (0x00042bb7) scroll_pane_cp29

0xf2e2,	// (0x0004886a) indicator_nsta_pane_cp2_ParamLimits

0xf2e2,	// (0x0004886a) indicator_nsta_pane_cp2

0xb5a5,	// (0x00044b2d) main_apps_wheel_pane

0xa8dc,	// (0x00043e64) form_midp_field_text_pane_ParamLimits

0x2527,	// (0x0003baaf) scroll_bar_cp050_ParamLimits

0x41b8,	// (0x0003d740) cell_indicator_pane_ParamLimits

0x41b8,	// (0x0003d740) cell_indicator_pane

0x41d1,	// (0x0003d759) cell_indicator_pane_g1

0xcc0e,	// (0x00046196) grid_wheel_folder_pane_ParamLimits

0xcc0e,	// (0x00046196) grid_wheel_folder_pane

0xcc1c,	// (0x000461a4) list_wheel_apps_pane_ParamLimits

0xcc1c,	// (0x000461a4) list_wheel_apps_pane

0xcc2a,	// (0x000461b2) main_apps_wheel_pane_g1_ParamLimits

0xcc2a,	// (0x000461b2) main_apps_wheel_pane_g1

0xcc36,	// (0x000461be) main_apps_wheel_pane_g2_ParamLimits

0xcc36,	// (0x000461be) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x00049021) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x00049021) main_apps_wheel_pane_g

0xcc44,	// (0x000461cc) main_apps_wheel_pane_t1_ParamLimits

0xcc44,	// (0x000461cc) main_apps_wheel_pane_t1

0xcc58,	// (0x000461e0) list_wheel_apps_pane_g1

0xcc60,	// (0x000461e8) list_wheel_apps_pane_g2

0xcc68,	// (0x000461f0) list_wheel_apps_pane_g3

0xcc70,	// (0x000461f8) list_wheel_apps_pane_g4

0xcc7a,	// (0x00046202) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x00049026) list_wheel_apps_pane_g

0xc0bc,	// (0x00045644) navi_icon_text_pane

0xa320,	// (0x000438a8) aid_fill_nsta

0x4298,	// (0x0003d820) navi_icon_text_pane_g1

0x42a4,	// (0x0003d82c) navi_icon_text_pane_t1

0xbfa0,	// (0x00045528) list_set_graphic_pane_t1_ParamLimits

0xbfa0,	// (0x00045528) list_set_graphic_pane_t1

0x2c72,	// (0x0003c1fa) popup_midp_note_alarm_window_t6_ParamLimits

0x2c72,	// (0x0003c1fa) popup_midp_note_alarm_window_t6

0x2c84,	// (0x0003c20c) popup_midp_note_alarm_window_t7_ParamLimits

0x2c84,	// (0x0003c20c) popup_midp_note_alarm_window_t7

0x2c96,	// (0x0003c21e) popup_midp_note_alarm_window_t8_ParamLimits

0x2c96,	// (0x0003c21e) popup_midp_note_alarm_window_t8

0x2ca8,	// (0x0003c230) popup_midp_note_alarm_window_t9_ParamLimits

0x2ca8,	// (0x0003c230) popup_midp_note_alarm_window_t9

0x2cba,	// (0x0003c242) popup_midp_note_alarm_window_t10_ParamLimits

0x2cba,	// (0x0003c242) popup_midp_note_alarm_window_t10

0x2ccc,	// (0x0003c254) popup_midp_note_alarm_window_t11_ParamLimits

0x2ccc,	// (0x0003c254) popup_midp_note_alarm_window_t11

0xc5f4,	// (0x00045b7c) scroll_pane_cp17_ParamLimits

0xc5f4,	// (0x00045b7c) scroll_pane_cp17

0x0801,	// (0x00039d89) volume_small_pane_cp_g1

0x0c12,	// (0x0003a19a) volume_small_pane_cp_g2

0x0c1b,	// (0x0003a1a3) volume_small_pane_cp_g3

0x0c24,	// (0x0003a1ac) volume_small_pane_cp_g4

0x0c2d,	// (0x0003a1b5) volume_small_pane_cp_g5

0x0bdc,	// (0x0003a164) volume_small_pane_cp_g6

0x0c36,	// (0x0003a1be) volume_small_pane_cp_g7

0x0c3f,	// (0x0003a1c7) volume_small_pane_cp_g8

0x0c48,	// (0x0003a1d0) volume_small_pane_cp_g9

0x0c51,	// (0x0003a1d9) volume_small_pane_cp_g10

0xc232,	// (0x000457ba) midp_ticker_pane_g1_ParamLimits

0xc23e,	// (0x000457c6) midp_ticker_pane_g2_ParamLimits

0xf71d,	// (0x00048ca5) midp_ticker_pane_g_ParamLimits

0xc24a,	// (0x000457d2) midp_ticker_pane_t1_ParamLimits

0xa344,	// (0x000438cc) aid_fill_nsta_2

0x2513,	// (0x0003ba9b) list_form2_midp_pane

0x3616,	// (0x0003cb9e) midp_editing_number_pane_ParamLimits

0x3625,	// (0x0003cbad) midp_ticker_pane_ParamLimits

0x42b6,	// (0x0003d83e) form2_midp_field_pane

0x42da,	// (0x0003d862) scroll_pane_cp51

0x42fa,	// (0x0003d882) form2_midp_button_pane_ParamLimits

0x42fa,	// (0x0003d882) form2_midp_button_pane

0x430c,	// (0x0003d894) form2_midp_content_pane_ParamLimits

0x430c,	// (0x0003d894) form2_midp_content_pane

0x4326,	// (0x0003d8ae) form2_midp_field_choice_group_pane

0x432e,	// (0x0003d8b6) form2_midp_field_pane_g1

0x4336,	// (0x0003d8be) form2_midp_field_pane_g2

0x433e,	// (0x0003d8c6) form2_midp_field_pane_g3

0x4346,	// (0x0003d8ce) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0004904b) form2_midp_field_pane_g

0x434e,	// (0x0003d8d6) form2_midp_gauge_slider_pane

0x4356,	// (0x0003d8de) form2_midp_gauge_wait_pane

0x435e,	// (0x0003d8e6) form2_midp_image_pane_ParamLimits

0x435e,	// (0x0003d8e6) form2_midp_image_pane

0xccad,	// (0x00046235) form2_midp_label_pane_ParamLimits

0xccad,	// (0x00046235) form2_midp_label_pane

0xccc6,	// (0x0004624e) form2_midp_label_pane_cp_ParamLimits

0xccc6,	// (0x0004624e) form2_midp_label_pane_cp

0x43b3,	// (0x0003d93b) form2_midp_string_pane_ParamLimits

0x43b3,	// (0x0003d93b) form2_midp_string_pane

0xe21b,	// (0x000477a3) form2_midp_text_pane_ParamLimits

0xe21b,	// (0x000477a3) form2_midp_text_pane

0x43c5,	// (0x0003d94d) form2_midp_time_pane

0x43d5,	// (0x0003d95d) input_focus_pane_cp51_ParamLimits

0x43d5,	// (0x0003d95d) input_focus_pane_cp51

0xcce5,	// (0x0004626d) form2_midp_label_pane_t1_ParamLimits

0xcce5,	// (0x0004626d) form2_midp_label_pane_t1

0xe234,	// (0x000477bc) form2_mdip_text_pane_t1_ParamLimits

0xe234,	// (0x000477bc) form2_mdip_text_pane_t1

0xe252,	// (0x000477da) form2_midp_time_pane_t1

0x4436,	// (0x0003d9be) form2_midp_gauge_slider_pane_t1

0xcd25,	// (0x000462ad) form2_midp_gauge_slider_pane_t2

0xcd37,	// (0x000462bf) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x00049054) form2_midp_gauge_slider_pane_t

0x446c,	// (0x0003d9f4) form2_midp_slider_pane

0x4478,	// (0x0003da00) form2_midp_gauge_wait_pane_t1

0x4486,	// (0x0003da0e) form2_midp_wait_pane_ParamLimits

0x4486,	// (0x0003da0e) form2_midp_wait_pane

0xcd49,	// (0x000462d1) list_single_2graphic_pane_cp4_ParamLimits

0xcd49,	// (0x000462d1) list_single_2graphic_pane_cp4

0xa81b,	// (0x00043da3) list_single_midp_graphic_pane_cp_ParamLimits

0xa81b,	// (0x00043da3) list_single_midp_graphic_pane_cp

0xb549,	// (0x00044ad1) list_highlight_pane_cp20

0x44d9,	// (0x0003da61) list_single_2graphic_pane_g1_cp4

0x3ab6,	// (0x0003d03e) list_single_2graphic_pane_g2_cp4

0x44e1,	// (0x0003da69) list_single_2graphic_pane_t1_cp4

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp21

0x44f0,	// (0x0003da78) list_single_midp_graphic_pane_g4_cp

0x44ff,	// (0x0003da87) list_single_midp_graphic_pane_t1_cp

0xcd5e,	// (0x000462e6) form2_mdip_string_pane_t1_ParamLimits

0xcd5e,	// (0x000462e6) form2_mdip_string_pane_t1

0xb549,	// (0x00044ad1) bg_wml_button_pane_cp2

0xb53f,	// (0x00044ac7) form2_midp_image_pane_g1

0xdca4,	// (0x0004722c) list_double_large_graphic_pane_g5_ParamLimits

0xdca4,	// (0x0004722c) list_double_large_graphic_pane_g5

0x988c,	// (0x00042e14) midp_form_pane_ParamLimits

0xb5a5,	// (0x00044b2d) main_apps_wheel_pane_ParamLimits

0x9ffe,	// (0x00043586) popup_preview_window_ParamLimits

0x9ffe,	// (0x00043586) popup_preview_window

0xa2cb,	// (0x00043853) popup_touch_info_window_ParamLimits

0xa2cb,	// (0x00043853) popup_touch_info_window

0xa2e9,	// (0x00043871) popup_touch_menu_window_ParamLimits

0xa2e9,	// (0x00043871) popup_touch_menu_window

0xb535,	// (0x00044abd) bg_popup_sub_pane_cp6

0x461b,	// (0x0003dba3) list_touch_menu_pane

0xcdd4,	// (0x0004635c) list_single_touch_menu_pane_ParamLimits

0xcdd4,	// (0x0004635c) list_single_touch_menu_pane

0xcde8,	// (0x00046370) list_single_touch_menu_pane_t1

0xb5a5,	// (0x00044b2d) bg_popup_sub_pane_cp7_ParamLimits

0xb5a5,	// (0x00044b2d) bg_popup_sub_pane_cp7

0x2547,	// (0x0003bacf) heading_sub_pane

0x4647,	// (0x0003dbcf) list_touch_info_pane_ParamLimits

0x4647,	// (0x0003dbcf) list_touch_info_pane

0x4657,	// (0x0003dbdf) list_single_touch_info_pane_ParamLimits

0x4657,	// (0x0003dbdf) list_single_touch_info_pane

0x4669,	// (0x0003dbf1) list_single_touch_info_pane_t1

0x4677,	// (0x0003dbff) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x00049062) list_single_touch_info_pane_t

0xc21b,	// (0x000457a3) bg_popup_heading_pane_cp

0x4685,	// (0x0003dc0d) heading_sub_pane_t1

0x2154,	// (0x0003b6dc) bg_popup_preview_window_pane_cp_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_preview_window_pane_cp

0x2547,	// (0x0003bacf) heading_preview_pane

0x4647,	// (0x0003dbcf) list_preview_pane_ParamLimits

0x4647,	// (0x0003dbcf) list_preview_pane

0x4693,	// (0x0003dc1b) popup_preview_window_g1

0x4657,	// (0x0003dbdf) list_single_preview_pane_ParamLimits

0x4657,	// (0x0003dbdf) list_single_preview_pane

0x469b,	// (0x0003dc23) list_single_preview_pane_g1

0x46a3,	// (0x0003dc2b) list_single_preview_pane_t1

0x4669,	// (0x0003dbf1) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x00049067) list_single_preview_pane_t

0x46b1,	// (0x0003dc39) bg_popup_heading_pane_cp2_ParamLimits

0x46b1,	// (0x0003dc39) bg_popup_heading_pane_cp2

0x46c7,	// (0x0003dc4f) heading_preview_pane_g1

0x46cf,	// (0x0003dc57) heading_preview_pane_t1_ParamLimits

0x46cf,	// (0x0003dc57) heading_preview_pane_t1

0xb5f8,	// (0x00044b80) soft_indicator_pane_t1_ParamLimits

0xb8d7,	// (0x00044e5f) scroll_pane_ParamLimits

0xbc80,	// (0x00045208) scroll_sc2_left_pane

0xbc89,	// (0x00045211) scroll_sc2_right_pane

0xbca8,	// (0x00045230) scroll_bg_pane_g1_ParamLimits

0xbcbd,	// (0x00045245) scroll_bg_pane_g2_ParamLimits

0xbcd5,	// (0x0004525d) scroll_bg_pane_g3_ParamLimits

0xf6a8,	// (0x00048c30) scroll_bg_pane_g_ParamLimits

0xbca8,	// (0x00045230) scroll_handle_pane_g1_ParamLimits

0xbcea,	// (0x00045272) scroll_handle_pane_g2_ParamLimits

0xbcd5,	// (0x0004525d) scroll_handle_pane_g3_ParamLimits

0xf6af,	// (0x00048c37) scroll_handle_pane_g_ParamLimits

0x9bcb,	// (0x00043153) popup_choice_list_window_ParamLimits

0x9bcb,	// (0x00043153) popup_choice_list_window

0x2012,	// (0x0003b59a) choice_list_pane

0x2094,	// (0x0003b61c) cell_toolbar_pane_t1

0x20bc,	// (0x0003b644) toolbar_button_pane_ParamLimits

0x3198,	// (0x0003c720) ai_gene_pane_1_t2_ParamLimits

0x3198,	// (0x0003c720) ai_gene_pane_1_t2

0x0001,

0xf8d2,	// (0x00048e5a) ai_gene_pane_1_t_ParamLimits

0xf8d2,	// (0x00048e5a) ai_gene_pane_1_t

0x46ec,	// (0x0003dc74) scroll_sc2_left_pane_g1

0x46ec,	// (0x0003dc74) scroll_sc2_right_pane_g1

0xba9d,	// (0x00045025) bg_popup_sub_pane_cp10

0x46f6,	// (0x0003dc7e) list_choice_list_pane

0xc9c8,	// (0x00045f50) list_single_choice_list_pane_ParamLimits

0xc9c8,	// (0x00045f50) list_single_choice_list_pane

0xcdf6,	// (0x0004637e) list_single_choice_list_pane_g1

0x9459,	// (0x000429e1) list_single_choice_list_pane_t1_ParamLimits

0x9459,	// (0x000429e1) list_single_choice_list_pane_t1

0x472a,	// (0x0003dcb2) choice_list_pane_g1

0xcdfe,	// (0x00046386) choice_list_pane_t1

0xb535,	// (0x00044abd) input_focus_pane_cp11

0xbbf5,	// (0x0004517d) title_pane_stacon_g2_ParamLimits

0xbbf5,	// (0x0004517d) title_pane_stacon_g2

0x0002,

0xf68e,	// (0x00048c16) title_pane_stacon_g_ParamLimits

0xf68e,	// (0x00048c16) title_pane_stacon_g

0xc21b,	// (0x000457a3) cursor_press_pane

0x9c72,	// (0x000431fa) popup_fep_hwr_window_ParamLimits

0x9c72,	// (0x000431fa) popup_fep_hwr_window

0xf4e3,	// (0x00048a6b) popup_fep_vkb_window_ParamLimits

0xf4e3,	// (0x00048a6b) popup_fep_vkb_window

0xce0c,	// (0x00046394) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x00049090) fep_vkb_side_pane_g_ParamLimits

0x0c93,	// (0x0003a21b) fep_hwr_candidate_pane_ParamLimits

0x0c93,	// (0x0003a21b) fep_hwr_candidate_pane

0x0cbd,	// (0x0003a245) fep_hwr_side_pane_ParamLimits

0x0cbd,	// (0x0003a245) fep_hwr_side_pane

0x0cdd,	// (0x0003a265) fep_hwr_top_pane_ParamLimits

0x0cdd,	// (0x0003a265) fep_hwr_top_pane

0x0cf5,	// (0x0003a27d) fep_hwr_write_pane_ParamLimits

0x0cf5,	// (0x0003a27d) fep_hwr_write_pane

0xfb08,	// (0x00049090) fep_vkb_side_pane_g

0x4748,	// (0x0003dcd0) fep_hwr_top_pane_g1

0x475a,	// (0x0003dce2) fep_hwr_top_pane_g2

0x0d2f,	// (0x0003a2b7) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0004906c) fep_hwr_top_pane_g

0x0d44,	// (0x0003a2cc) fep_hwr_top_text_pane

0xbdad,	// (0x00045335) fep_hwr_top_text_pane_g1

0x4790,	// (0x0003dd18) fep_hwr_top_text_pane_t1

0x0e3a,	// (0x0003a3c2) fep_hwr_candidate_pane_g1

0x49d5,	// (0x0003df5d) fep_vkb_keypad_pane_g3_ParamLimits

0x49d5,	// (0x0003df5d) fep_vkb_keypad_pane_g3

0x49fd,	// (0x0003df85) fep_vkb_keypad_pane_g4_ParamLimits

0x49fd,	// (0x0003df85) fep_vkb_keypad_pane_g4

0x4a6c,	// (0x0003dff4) fep_vkb_bottom_pane_g2_ParamLimits

0x4a6c,	// (0x0003dff4) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x00049097) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x00049097) fep_vkb_bottom_pane_g

0x46ec,	// (0x0003dc74) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x000490a1) cell_vkb_side_pane_g

0x4af7,	// (0x0003e07f) cell_vkb_side_pane_t1

0x4b05,	// (0x0003e08d) cell_vkb_side_pane_t1_copy1

0x46ec,	// (0x0003dc74) bg_fep_vkb_candidate_pane_g2

0x4c31,	// (0x0003e1b9) cell_vkb_candidate_pane_ParamLimits

0x479e,	// (0x0003dd26) aid_size_cell_vkb_ParamLimits

0x479e,	// (0x0003dd26) aid_size_cell_vkb

0x4c31,	// (0x0003e1b9) cell_vkb_candidate_pane

0x0e61,	// (0x0003a3e9) bg_popup_fep_shadow_pane_g1

0xce26,	// (0x000463ae) fep_vkb_bottom_pane_ParamLimits

0xce26,	// (0x000463ae) fep_vkb_bottom_pane

0x4862,	// (0x0003ddea) fep_vkb_candidate_pane_ParamLimits

0x4862,	// (0x0003ddea) fep_vkb_candidate_pane

0xce4b,	// (0x000463d3) fep_vkb_keypad_pane_ParamLimits

0xce4b,	// (0x000463d3) fep_vkb_keypad_pane

0xce80,	// (0x00046408) fep_vkb_side_pane_ParamLimits

0xce80,	// (0x00046408) fep_vkb_side_pane

0xcebc,	// (0x00046444) fep_vkb_top_pane_ParamLimits

0xcebc,	// (0x00046444) fep_vkb_top_pane

0x492e,	// (0x0003deb6) fep_vkb_top_pane_g1_ParamLimits

0x492e,	// (0x0003deb6) fep_vkb_top_pane_g1

0x493d,	// (0x0003dec5) fep_vkb_top_pane_g2_ParamLimits

0x493d,	// (0x0003dec5) fep_vkb_top_pane_g2

0x494c,	// (0x0003ded4) fep_vkb_top_pane_g3_ParamLimits

0x494c,	// (0x0003ded4) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x00049087) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x00049087) fep_vkb_top_pane_g

0x496a,	// (0x0003def2) fep_vkb_top_text_pane_ParamLimits

0x496a,	// (0x0003def2) fep_vkb_top_text_pane

0xcef1,	// (0x00046479) fep_vkb_side_pane_g1_ParamLimits

0xcef1,	// (0x00046479) fep_vkb_side_pane_g1

0x49c4,	// (0x0003df4c) grid_vkb_side_pane_ParamLimits

0x49c4,	// (0x0003df4c) grid_vkb_side_pane

0x0e69,	// (0x0003a3f1) bg_popup_fep_shadow_pane_g2

0x0e72,	// (0x0003a3fa) bg_popup_fep_shadow_pane_g3

0x0e7a,	// (0x0003a402) bg_popup_fep_shadow_pane_g4

0x0e83,	// (0x0003a40b) bg_popup_fep_shadow_pane_g5

0x0e8d,	// (0x0003a415) bg_popup_fep_shadow_pane_g6

0x0e95,	// (0x0003a41d) bg_popup_fep_shadow_pane_g7

0xb9cb,	// (0x00044f53) bg_popup_fep_shadow_pane_g8

0x4a1b,	// (0x0003dfa3) grid_vkb_keypad_number_pane_ParamLimits

0x4a1b,	// (0x0003dfa3) grid_vkb_keypad_number_pane

0x4a2b,	// (0x0003dfb3) grid_vkb_keypad_pane_ParamLimits

0x4a2b,	// (0x0003dfb3) grid_vkb_keypad_pane

0x4a51,	// (0x0003dfd9) fep_vkb_bottom_pane_g1_ParamLimits

0x4a51,	// (0x0003dfd9) fep_vkb_bottom_pane_g1

0x4a7a,	// (0x0003e002) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a7a,	// (0x0003e002) grid_vkb_keypad_bottom_left_pane

0x4a8f,	// (0x0003e017) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4a8f,	// (0x0003e017) grid_vkb_keypad_bottom_right_pane

0x4aa4,	// (0x0003e02c) fep_vkb_top_text_pane_g1

0xcf38,	// (0x000464c0) fep_vkb_top_text_pane_t1

0xcf4a,	// (0x000464d2) cell_vkb_side_pane_ParamLimits

0xcf4a,	// (0x000464d2) cell_vkb_side_pane

0x46ec,	// (0x0003dc74) cell_vkb_side_pane_g1

0x4b13,	// (0x0003e09b) cell_vkb_keypad_pane_ParamLimits

0x4b13,	// (0x0003e09b) cell_vkb_keypad_pane

0x4b88,	// (0x0003e110) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x000490b4) bg_popup_fep_shadow_pane_g

0x0ea7,	// (0x0003a42f) cell_hwr_side_pane_g1

0x0ea7,	// (0x0003a42f) cell_hwr_side_pane_g2

0x4b92,	// (0x0003e11a) cell_vkb_keypad_pane_t1

0xcf60,	// (0x000464e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf60,	// (0x000464e8) cell_vkb_keypad_bottom_left_pane

0xcf75,	// (0x000464fd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf75,	// (0x000464fd) cell_vkb_keypad_bottom_right_pane

0x46ec,	// (0x0003dc74) cell_vkb_keypad_bottom_left_pane_g1

0x46ec,	// (0x0003dc74) cell_vkb_keypad_bottom_right_pane_g1

0x4bf6,	// (0x0003e17e) cell_vkb_keypad_number_pane_ParamLimits

0x4bf6,	// (0x0003e17e) cell_vkb_keypad_number_pane

0x4c15,	// (0x0003e19d) cell_vkb_keypad_number_pane_g1

0x4c1f,	// (0x0003e1a7) cell_vkb_keypad_number_pane_g2

0x4c28,	// (0x0003e1b0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x000490a6) cell_vkb_keypad_number_pane_g

0x4b92,	// (0x0003e11a) cell_vkb_keypad_number_pane_t1

0x4c4c,	// (0x0003e1d4) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x000490c7) cell_hwr_side_pane_g

0x4c65,	// (0x0003e1ed) cell_hwr_side_pane_t1

0x0eb1,	// (0x0003a439) cell_hwr_side_pane_t1_copy1

0x0ebf,	// (0x0003a447) cell_hwr_candidate_pane_g1

0x0eee,	// (0x0003a476) cell_hwr_candidate_pane_t1

0x46ec,	// (0x0003dc74) cell_vkb_candidate_pane_g2

0x4cca,	// (0x0003e252) cell_vkb_candidate_pane_t1

0x0c5a,	// (0x0003a1e2) bg_popup_fep_shadow_pane_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_popup_fep_shadow_pane

0x0d0f,	// (0x0003a297) bg_fep_hwr_top_pane_g4

0x476c,	// (0x0003dcf4) bg_hwr_side_pane_g1_ParamLimits

0x476c,	// (0x0003dcf4) bg_hwr_side_pane_g1

0xab8c,	// (0x00044114) cell_hwr_side_pane_ParamLimits

0xab8c,	// (0x00044114) cell_hwr_side_pane

0x0dbb,	// (0x0003a343) fep_hwr_write_pane_g1_ParamLimits

0x0dbb,	// (0x0003a343) fep_hwr_write_pane_g1

0x0dc8,	// (0x0003a350) fep_hwr_write_pane_g2_ParamLimits

0x0dc8,	// (0x0003a350) fep_hwr_write_pane_g2

0x0dd5,	// (0x0003a35d) fep_hwr_write_pane_g3_ParamLimits

0x0dd5,	// (0x0003a35d) fep_hwr_write_pane_g3

0xabac,	// (0x00044134) fep_hwr_write_pane_g4_ParamLimits

0xabac,	// (0x00044134) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x00049073) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x00049073) fep_hwr_write_pane_g

0x0d0f,	// (0x0003a297) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d0f,	// (0x0003a297) bg_fep_hwr_candidate_pane_g2

0x0df8,	// (0x0003a380) cell_hwr_candidate_pane_ParamLimits

0x0df8,	// (0x0003a380) cell_hwr_candidate_pane

0x0e3a,	// (0x0003a3c2) fep_hwr_candidate_pane_g1_ParamLimits

0x47cc,	// (0x0003dd54) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x47cc,	// (0x0003dd54) bg_popup_fep_shadow_pane_cp2

0x495c,	// (0x0003dee4) fep_vkb_top_pane_g4_ParamLimits

0x495c,	// (0x0003dee4) fep_vkb_top_pane_g4

0x49a2,	// (0x0003df2a) fep_vkb_side_pane_g2_ParamLimits

0x49a2,	// (0x0003df2a) fep_vkb_side_pane_g2

0x915e,	// (0x000426e6) list_setting_pane_t4_ParamLimits

0x915e,	// (0x000426e6) list_setting_pane_t4

0xdd58,	// (0x000472e0) list_setting_number_pane_t5_ParamLimits

0xdd58,	// (0x000472e0) list_setting_number_pane_t5

0xbde4,	// (0x0004536c) list_double_heading_pane_cp2_ParamLimits

0xbde4,	// (0x0004536c) list_double_heading_pane_cp2

0xcf90,	// (0x00046518) list_double_heading_pane_g1_cp2_ParamLimits

0xcf90,	// (0x00046518) list_double_heading_pane_g1_cp2

0x4cd8,	// (0x0003e260) list_double_heading_pane_g2_cp2_ParamLimits

0x4cd8,	// (0x0003e260) list_double_heading_pane_g2_cp2

0x4cec,	// (0x0003e274) list_double_heading_pane_t1_cp2_ParamLimits

0x4cec,	// (0x0003e274) list_double_heading_pane_t1_cp2

0x4d02,	// (0x0003e28a) list_double_heading_pane_t2_cp2_ParamLimits

0x4d02,	// (0x0003e28a) list_double_heading_pane_t2_cp2

0xb52d,	// (0x00044ab5) aid_value_unit2

0xf073,	// (0x000485fb) popup_preview_fixed_window

0xb6cf,	// (0x00044c57) bg_popup_preview_window_pane_cp02

0x4d14,	// (0x0003e29c) list_preview_fixed_pane

0x4d5a,	// (0x0003e2e2) list_empty_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_empty_pane_fp

0x4d5a,	// (0x0003e2e2) list_single_cale_day_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_cale_day_pane_fp

0x4d5a,	// (0x0003e2e2) list_single_graphic_heading_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_graphic_heading_pane_fp

0x4d5a,	// (0x0003e2e2) list_single_graphic_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_graphic_pane_fp

0x4d5a,	// (0x0003e2e2) list_single_heading_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_heading_pane_fp

0x4d5a,	// (0x0003e2e2) list_single_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_pane_fp

0x4d70,	// (0x0003e2f8) list_single_pane_fp_g1_ParamLimits

0x4d70,	// (0x0003e2f8) list_single_pane_fp_g1

0xdc8c,	// (0x00047214) list_single_pane_fp_g2_ParamLimits

0xdc8c,	// (0x00047214) list_single_pane_fp_g2

0xe272,	// (0x000477fa) list_single_pane_fp_g3_ParamLimits

0xe272,	// (0x000477fa) list_single_pane_fp_g3

0x4d7c,	// (0x0003e304) list_single_pane_fp_g4_ParamLimits

0x4d7c,	// (0x0003e304) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x000490da) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x000490da) list_single_pane_fp_g

0xe286,	// (0x0004780e) list_single_pane_fp_t1_ParamLimits

0xe286,	// (0x0004780e) list_single_pane_fp_t1

0xe29d,	// (0x00047825) list_single_graphic_pane_fp_g1_ParamLimits

0xe29d,	// (0x00047825) list_single_graphic_pane_fp_g1

0x4d70,	// (0x0003e2f8) list_single_graphic_pane_fp_g2_ParamLimits

0x4d70,	// (0x0003e2f8) list_single_graphic_pane_fp_g2

0xdc8c,	// (0x00047214) list_single_graphic_pane_fp_g3_ParamLimits

0xdc8c,	// (0x00047214) list_single_graphic_pane_fp_g3

0xe272,	// (0x000477fa) list_single_graphic_pane_fp_g4_ParamLimits

0xe272,	// (0x000477fa) list_single_graphic_pane_fp_g4

0x4d7c,	// (0x0003e304) list_single_graphic_pane_fp_g5_ParamLimits

0x4d7c,	// (0x0003e304) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x000490e3) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x000490e3) list_single_graphic_pane_fp_g

0xe2a9,	// (0x00047831) list_single_graphic_pane_fp_t1_ParamLimits

0xe2a9,	// (0x00047831) list_single_graphic_pane_fp_t1

0xe29d,	// (0x00047825) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe29d,	// (0x00047825) list_single_graphic_heading_pane_fp_g1

0x4d70,	// (0x0003e2f8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d70,	// (0x0003e2f8) list_single_graphic_heading_pane_fp_g2

0xdc8c,	// (0x00047214) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xdc8c,	// (0x00047214) list_single_graphic_heading_pane_fp_g3

0xe272,	// (0x000477fa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xe272,	// (0x000477fa) list_single_graphic_heading_pane_fp_g4

0x4d7c,	// (0x0003e304) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4d7c,	// (0x0003e304) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x000490e3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x000490e3) list_single_graphic_heading_pane_fp_g

0xe2bf,	// (0x00047847) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe2bf,	// (0x00047847) list_single_graphic_heading_pane_fp_t1

0xe2d5,	// (0x0004785d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe2d5,	// (0x0004785d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x000490ee) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x000490ee) list_single_graphic_heading_pane_fp_t

0xe2e7,	// (0x0004786f) list_single_cale_day_pane_fp_g1_ParamLimits

0xe2e7,	// (0x0004786f) list_single_cale_day_pane_fp_g1

0x4d88,	// (0x0003e310) list_single_cale_day_pane_fp_g2_ParamLimits

0x4d88,	// (0x0003e310) list_single_cale_day_pane_fp_g2

0xe31f,	// (0x000478a7) list_single_cale_day_pane_fp_g3_ParamLimits

0xe31f,	// (0x000478a7) list_single_cale_day_pane_fp_g3

0xe347,	// (0x000478cf) list_single_cale_day_pane_fp_g4_ParamLimits

0xe347,	// (0x000478cf) list_single_cale_day_pane_fp_g4

0xe36b,	// (0x000478f3) list_single_cale_day_pane_fp_g5_ParamLimits

0xe36b,	// (0x000478f3) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x000490f3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x000490f3) list_single_cale_day_pane_fp_g

0xe38f,	// (0x00047917) list_single_cale_day_pane_fp_t1_ParamLimits

0xe38f,	// (0x00047917) list_single_cale_day_pane_fp_t1

0xe3b5,	// (0x0004793d) list_single_cale_day_pane_fp_t2_ParamLimits

0xe3b5,	// (0x0004793d) list_single_cale_day_pane_fp_t2

0xe3ce,	// (0x00047956) list_single_cale_day_pane_fp_t3_ParamLimits

0xe3ce,	// (0x00047956) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x000490fe) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x000490fe) list_single_cale_day_pane_fp_t

0x4d70,	// (0x0003e2f8) list_empty_pane_fp_g1_ParamLimits

0x4d70,	// (0x0003e2f8) list_empty_pane_fp_g1

0xe3e7,	// (0x0004796f) list_empty_pane_fp_t1

0xe3f5,	// (0x0004797d) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x00049105) list_empty_pane_fp_t

0x4d70,	// (0x0003e2f8) list_single_heading_pane_fp_g1_ParamLimits

0x4d70,	// (0x0003e2f8) list_single_heading_pane_fp_g1

0xdc8c,	// (0x00047214) list_single_heading_pane_fp_g2_ParamLimits

0xdc8c,	// (0x00047214) list_single_heading_pane_fp_g2

0xe272,	// (0x000477fa) list_single_heading_pane_fp_g3_ParamLimits

0xe272,	// (0x000477fa) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0004910a) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0004910a) list_single_heading_pane_fp_g

0xe403,	// (0x0004798b) list_single_heading_pane_fp_t1_ParamLimits

0xe403,	// (0x0004798b) list_single_heading_pane_fp_t1

0xe415,	// (0x0004799d) list_single_heading_pane_fp_t2_ParamLimits

0xe415,	// (0x0004799d) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x00049111) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x00049111) list_single_heading_pane_fp_t

0x94a5,	// (0x00042a2d) aid_size_cell_fast

0xb6b2,	// (0x00044c3a) soft_indicator_pane_cp1_t1

0x94ae,	// (0x00042a36) cell_app_pane_cp2_ParamLimits

0x94ae,	// (0x00042a36) cell_app_pane_cp2

0x0c7c,	// (0x0003a204) fep_hwr_candidate_drop_down_list_pane

0x0e54,	// (0x0003a3dc) fep_hwr_candidate_pane_g3_ParamLimits

0x0e54,	// (0x0003a3dc) fep_hwr_candidate_pane_g3

0xe265,	// (0x000477ed) fep_hwr_candidate_pane_g4_ParamLimits

0xe265,	// (0x000477ed) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x00049080) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x00049080) fep_hwr_candidate_pane_g

0x4851,	// (0x0003ddd9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4851,	// (0x0003ddd9) fep_vkb_candidate_drop_down_list_pane

0x4c54,	// (0x0003e1dc) fep_vkb_candidate_pane_g3

0x4c5c,	// (0x0003e1e4) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x000490ad) fep_vkb_candidate_pane_g

0x0ebf,	// (0x0003a447) cell_hwr_candidate_pane_g1_ParamLimits

0x0ecd,	// (0x0003a455) cell_hwr_candidate_pane_g3_ParamLimits

0x0ecd,	// (0x0003a455) cell_hwr_candidate_pane_g3

0x4c73,	// (0x0003e1fb) cell_hwr_candidate_pane_g4_ParamLimits

0x4c73,	// (0x0003e1fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x000490cc) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x000490cc) cell_hwr_candidate_pane_g

0x4c94,	// (0x0003e21c) cell_vkb_candidate_pane_g3_ParamLimits

0x4c94,	// (0x0003e21c) cell_vkb_candidate_pane_g3

0x4caf,	// (0x0003e237) cell_vkb_candidate_pane_g4_ParamLimits

0x4caf,	// (0x0003e237) cell_vkb_candidate_pane_g4

0xcf9c,	// (0x00046524) cell_app_pane_cp2_g1_ParamLimits

0xcf9c,	// (0x00046524) cell_app_pane_cp2_g1

0x4db2,	// (0x0003e33a) cell_app_pane_cp2_g2_ParamLimits

0x4db2,	// (0x0003e33a) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x00049116) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x00049116) cell_app_pane_cp2_g

0x4dbe,	// (0x0003e346) cell_app_pane_cp2_t1_ParamLimits

0x4dbe,	// (0x0003e346) cell_app_pane_cp2_t1

0xb95b,	// (0x00044ee3) grid_highlight_pane_cp1_ParamLimits

0xb95b,	// (0x00044ee3) grid_highlight_pane_cp1

0x0f0c,	// (0x0003a494) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f0c,	// (0x0003a494) cell_hwr_candidate_pane_cp1

0x0ebf,	// (0x0003a447) fep_hwr_candidate_drop_down_list_pane_g1

0x0f2b,	// (0x0003a4b3) fep_hwr_candidate_drop_down_list_pane_g2

0x0f38,	// (0x0003a4c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0004911b) fep_hwr_candidate_drop_down_list_pane_g

0x0f45,	// (0x0003a4cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f4e,	// (0x0003a4d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f4e,	// (0x0003a4d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f5b,	// (0x0003a4e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f5b,	// (0x0003a4e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f68,	// (0x0003a4f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f68,	// (0x0003a4f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f75,	// (0x0003a4fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f75,	// (0x0003a4fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f90,	// (0x0003a518) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f90,	// (0x0003a518) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fab,	// (0x0003a533) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fab,	// (0x0003a533) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fc6,	// (0x0003a54e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fc6,	// (0x0003a54e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0fe1,	// (0x0003a569) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0fe1,	// (0x0003a569) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x00049122) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x00049122) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4dd0,	// (0x0003e358) cell_vkb_candidate_pane_cp1_ParamLimits

0x4dd0,	// (0x0003e358) cell_vkb_candidate_pane_cp1

0x495c,	// (0x0003dee4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x495c,	// (0x0003dee4) fep_vkb_candidate_drop_down_list_pane_g1

0x4df0,	// (0x0003e378) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4df0,	// (0x0003e378) fep_vkb_candidate_drop_down_list_pane_g2

0x4dfd,	// (0x0003e385) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4dfd,	// (0x0003e385) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x00049133) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbab,	// (0x00049133) fep_vkb_candidate_drop_down_list_pane_g

0x4e0a,	// (0x0003e392) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e0a,	// (0x0003e392) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e17,	// (0x0003e39f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e17,	// (0x0003e39f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e24,	// (0x0003e3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e24,	// (0x0003e3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e30,	// (0x0003e3b8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e30,	// (0x0003e3b8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e3c,	// (0x0003e3c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e3c,	// (0x0003e3c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e5d,	// (0x0003e3e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e5d,	// (0x0003e3e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4e7e,	// (0x0003e406) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4e7e,	// (0x0003e406) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4e9f,	// (0x0003e427) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4e9f,	// (0x0003e427) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4ec0,	// (0x0003e448) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4ec0,	// (0x0003e448) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0004913a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0004913a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8988,	// (0x00041f10) title_pane_g1_ParamLimits

0x899b,	// (0x00041f23) title_pane_g2_ParamLimits

0xf527,	// (0x00048aaf) title_pane_g_ParamLimits

0xbd9d,	// (0x00045325) aid_call2_pane

0xbda5,	// (0x0004532d) aid_call_pane

0xbdad,	// (0x00045335) popup_clock_analogue_window_g1

0xbdad,	// (0x00045335) popup_clock_analogue_window_g2

0xf226,	// (0x000487ae) popup_clock_analogue_window_g3

0xf22f,	// (0x000487b7) popup_clock_analogue_window_g4

0xb53f,	// (0x00044ac7) popup_clock_analogue_window_g5

0x0004,

0xf6bd,	// (0x00048c45) popup_clock_analogue_window_g

0xf237,	// (0x000487bf) popup_clock_analogue_window_t1

0xf245,	// (0x000487cd) clock_digital_number_pane_ParamLimits

0xf245,	// (0x000487cd) clock_digital_number_pane

0xf251,	// (0x000487d9) clock_digital_number_pane_cp02_ParamLimits

0xf251,	// (0x000487d9) clock_digital_number_pane_cp02

0xf25d,	// (0x000487e5) clock_digital_number_pane_cp03_ParamLimits

0xf25d,	// (0x000487e5) clock_digital_number_pane_cp03

0xf269,	// (0x000487f1) clock_digital_number_pane_cp04_ParamLimits

0xf269,	// (0x000487f1) clock_digital_number_pane_cp04

0xf275,	// (0x000487fd) clock_digital_separator_pane_ParamLimits

0xf275,	// (0x000487fd) clock_digital_separator_pane

0xf281,	// (0x00048809) popup_clock_digital_window_t1_ParamLimits

0xf281,	// (0x00048809) popup_clock_digital_window_t1

0xb53f,	// (0x00044ac7) clock_digital_number_pane_g1

0xb53f,	// (0x00044ac7) clock_digital_number_pane_g2

0x0001,

0xf6c8,	// (0x00048c50) clock_digital_number_pane_g

0xb53f,	// (0x00044ac7) clock_digital_separator_pane_g1

0xb53f,	// (0x00044ac7) clock_digital_separator_pane_g2

0x0001,

0xf6c8,	// (0x00048c50) clock_digital_separator_pane_g

0xa320,	// (0x000438a8) aid_fill_nsta_ParamLimits

0xa456,	// (0x000439de) indicator_nsta_pane_ParamLimits

0x0636,	// (0x00039bbe) popup_clock_analogue_window

0x0636,	// (0x00039bbe) popup_clock_digital_window

0xcbc8,	// (0x00046150) grid_indicator_nsta_pane_ParamLimits

0x40e9,	// (0x0003d671) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x00049000) clock_nsta_pane_t

0xf207,	// (0x0004878f) aid_size_max_handle

0x958c,	// (0x00042b14) aid_size_min_handle

0xc21b,	// (0x000457a3) editor_scroll_pane

0x4edb,	// (0x0003e463) ex_editor_pane

0xba8d,	// (0x00045015) scroll_pane_cp13

0xb903,	// (0x00044e8b) scroll_pane_cp14

0xbddc,	// (0x00045364) scroll_pane_cp36

0x9656,	// (0x00042bde) list_single_graphic_hl_pane_cp2_ParamLimits

0x9656,	// (0x00042bde) list_single_graphic_hl_pane_cp2

0xab05,	// (0x0004408d) list_single_graphic_hl_pane_ParamLimits

0xab05,	// (0x0004408d) list_single_graphic_hl_pane

0xabc1,	// (0x00044149) aid_size_min_hl_cp1

0x4eec,	// (0x0003e474) list_highlight_pane_cp34_ParamLimits

0x4eec,	// (0x0003e474) list_highlight_pane_cp34

0x4efd,	// (0x0003e485) list_single_graphic_hl_pane_g1_ParamLimits

0x4efd,	// (0x0003e485) list_single_graphic_hl_pane_g1

0xabca,	// (0x00044152) list_single_graphic_hl_pane_g2_ParamLimits

0xabca,	// (0x00044152) list_single_graphic_hl_pane_g2

0xabca,	// (0x00044152) list_single_graphic_hl_pane_g3_ParamLimits

0xabca,	// (0x00044152) list_single_graphic_hl_pane_g3

0xabd6,	// (0x0004415e) list_single_graphic_hl_pane_g4_ParamLimits

0xabd6,	// (0x0004415e) list_single_graphic_hl_pane_g4

0xabe2,	// (0x0004416a) list_single_graphic_hl_pane_g5_ParamLimits

0xabe2,	// (0x0004416a) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0004914b) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0004914b) list_single_graphic_hl_pane_g

0xabf6,	// (0x0004417e) list_single_graphic_hl_pane_t1_ParamLimits

0xabf6,	// (0x0004417e) list_single_graphic_hl_pane_t1

0x4f0a,	// (0x0003e492) aid_size_min_hl_cp2

0x4f13,	// (0x0003e49b) list_highlight_pane_cp34_cp2_ParamLimits

0x4f13,	// (0x0003e49b) list_highlight_pane_cp34_cp2

0x4efd,	// (0x0003e485) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4efd,	// (0x0003e485) list_single_graphic_hl_pane_g1_cp2

0x4f20,	// (0x0003e4a8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f20,	// (0x0003e4a8) list_single_graphic_hl_pane_g2_cp2

0xcfba,	// (0x00046542) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcfba,	// (0x00046542) list_single_graphic_hl_pane_g3_cp2

0xc17a,	// (0x00045702) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc17a,	// (0x00045702) list_single_graphic_hl_pane_g4_cp2

0x4f3a,	// (0x0003e4c2) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f3a,	// (0x0003e4c2) list_single_graphic_hl_pane_g5_cp2

0x9a3f,	// (0x00042fc7) control_pane_g4_ParamLimits

0x9a3f,	// (0x00042fc7) control_pane_g4

0xba9d,	// (0x00045025) bg_popup_sub_pane_cp10_ParamLimits

0x46f6,	// (0x0003dc7e) list_choice_list_pane_ParamLimits

0x4705,	// (0x0003dc8d) scroll_pane_cp23

0xb6cf,	// (0x00044c57) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d14,	// (0x0003e29c) list_preview_fixed_pane_ParamLimits

0x4d2a,	// (0x0003e2b2) list_preview_fixed_pane_cp_ParamLimits

0x4d2a,	// (0x0003e2b2) list_preview_fixed_pane_cp

0x4d36,	// (0x0003e2be) popup_preview_fixed_window_g1_ParamLimits

0x4d36,	// (0x0003e2be) popup_preview_fixed_window_g1

0x4d42,	// (0x0003e2ca) popup_preview_fixed_window_g2_ParamLimits

0x4d42,	// (0x0003e2ca) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x000490d3) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x000490d3) popup_preview_fixed_window_g

0xf17b,	// (0x00048703) aid_navi_side_left_pane_ParamLimits

0xf190,	// (0x00048718) aid_navi_side_right_pane_ParamLimits

0xf1a8,	// (0x00048730) navi_icon_pane_stacon_ParamLimits

0xf1bc,	// (0x00048744) navi_navi_pane_stacon_ParamLimits

0xf1a8,	// (0x00048730) navi_text_pane_stacon_ParamLimits

0xdb8c,	// (0x00047114) main_text_info_pane

0x4f64,	// (0x0003e4ec) listscroll_text_info_pane

0x4f6c,	// (0x0003e4f4) list_text_info_pane_ParamLimits

0x4f6c,	// (0x0003e4f4) list_text_info_pane

0x4f7b,	// (0x0003e503) scroll_pane_cp24_ParamLimits

0x4f7b,	// (0x0003e503) scroll_pane_cp24

0xcfc8,	// (0x00046550) list_text_info_pane_t1_ParamLimits

0xcfc8,	// (0x00046550) list_text_info_pane_t1

0x9be7,	// (0x0004316f) popup_fast_swap2_window_ParamLimits

0x9be7,	// (0x0004316f) popup_fast_swap2_window

0x4fcd,	// (0x0003e555) aid_size_cell_fast2

0xb535,	// (0x00044abd) bg_popup_window_pane_cp17

0x2547,	// (0x0003bacf) heading_pane_cp2

0x4fd7,	// (0x0003e55f) listscroll_fast2_pane

0xcfe4,	// (0x0004656c) grid_fast2_pane

0xcfee,	// (0x00046576) listscroll_fast2_pane_g1

0xcff6,	// (0x0004657e) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x00049156) listscroll_fast2_pane_g

0xba8d,	// (0x00045015) scroll_pane_cp26

0x4ffb,	// (0x0003e583) cell_fast2_pane_ParamLimits

0x4ffb,	// (0x0003e583) cell_fast2_pane

0x5010,	// (0x0003e598) cell_fast2_pane_g1

0x5019,	// (0x0003e5a1) cell_fast2_pane_g2

0x5022,	// (0x0003e5aa) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0004915b) cell_fast2_pane_g

0xb83a,	// (0x00044dc2) grid_highlight_pane_cp9

0xf4cb,	// (0x00048a53) main_eswt_pane_ParamLimits

0xf4cb,	// (0x00048a53) main_eswt_pane

0x4f90,	// (0x0003e518) list_single_text_info_pane

0x502a,	// (0x0003e5b2) eswt_ctrl_button_pane

0x502a,	// (0x0003e5b2) eswt_ctrl_canvas_pane

0xd000,	// (0x00046588) eswt_ctrl_combo_pane

0x502a,	// (0x0003e5b2) eswt_ctrl_default_pane

0x502a,	// (0x0003e5b2) eswt_ctrl_label_pane

0x503a,	// (0x0003e5c2) eswt_ctrl_wait_pane

0xd008,	// (0x00046590) eswt_shell_pane

0xb535,	// (0x00044abd) listscroll_eswt_app_pane

0x5062,	// (0x0003e5ea) popup_eswt_tasktip_window_ParamLimits

0x5062,	// (0x0003e5ea) popup_eswt_tasktip_window

0x2154,	// (0x0003b6dc) bg_popup_window_pane_cp18

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_ParamLimits

0x5073,	// (0x0003e5fb) eswt_control_pane_g1

0x5080,	// (0x0003e608) eswt_control_pane_g2_ParamLimits

0x5080,	// (0x0003e608) eswt_control_pane_g2

0x508d,	// (0x0003e615) eswt_control_pane_g3_ParamLimits

0x508d,	// (0x0003e615) eswt_control_pane_g3

0x509a,	// (0x0003e622) eswt_control_pane_g4_ParamLimits

0x509a,	// (0x0003e622) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x00049162) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x00049162) eswt_control_pane_g

0xb95b,	// (0x00044ee3) bg_button_pane_ParamLimits

0xb95b,	// (0x00044ee3) bg_button_pane

0xb84f,	// (0x00044dd7) common_borders_pane_copy2_ParamLimits

0xb84f,	// (0x00044dd7) common_borders_pane_copy2

0x50a7,	// (0x0003e62f) control_button_pane_g1_ParamLimits

0x50a7,	// (0x0003e62f) control_button_pane_g1

0x50b3,	// (0x0003e63b) control_button_pane_g2_ParamLimits

0x50b3,	// (0x0003e63b) control_button_pane_g2

0x50bf,	// (0x0003e647) control_button_pane_g3_ParamLimits

0x50bf,	// (0x0003e647) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0004916b) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0004916b) control_button_pane_g

0x50d3,	// (0x0003e65b) control_button_pane_t1

0x50e1,	// (0x0003e669) control_button_pane_t2

0x0001,

0xfbea,	// (0x00049172) control_button_pane_t

0x20c8,	// (0x0003b650) bg_button_pane_g1

0x20d8,	// (0x0003b660) bg_button_pane_g2

0x20d0,	// (0x0003b658) bg_button_pane_g3

0x20e8,	// (0x0003b670) bg_button_pane_g4

0x20e0,	// (0x0003b668) bg_button_pane_g5

0x20f0,	// (0x0003b678) bg_button_pane_g6

0x20f8,	// (0x0003b680) bg_button_pane_g7

0x2108,	// (0x0003b690) bg_button_pane_g8

0x2100,	// (0x0003b688) bg_button_pane_g9

0x0008,

0xf826,	// (0x00048dae) bg_button_pane_g

0x46b1,	// (0x0003dc39) common_borders_pane_ParamLimits

0x46b1,	// (0x0003dc39) common_borders_pane

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy1_ParamLimits

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy1

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy1_ParamLimits

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy1

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy1_ParamLimits

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy1

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy1_ParamLimits

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy1

0x46ec,	// (0x0003dc74) bg_eswt_ctrl_canvas_pane_g1

0x46b1,	// (0x0003dc39) common_borders_pane_cp2_ParamLimits

0x46b1,	// (0x0003dc39) common_borders_pane_cp2

0x46b1,	// (0x0003dc39) common_borders_pane_cp3_ParamLimits

0x46b1,	// (0x0003dc39) common_borders_pane_cp3

0x50ef,	// (0x0003e677) separator_horizontal_pane

0x50f7,	// (0x0003e67f) separator_vertical_pane

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy2_ParamLimits

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy2

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy2_ParamLimits

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy2

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy2_ParamLimits

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy2

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy2_ParamLimits

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy2

0xb535,	// (0x00044abd) common_borders_pane_cp4

0x5100,	// (0x0003e688) separator_horizontal_pane_g1

0x5109,	// (0x0003e691) separator_horizontal_pane_g2

0x5112,	// (0x0003e69a) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x00049177) separator_horizontal_pane_g

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy3_ParamLimits

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy3

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy3_ParamLimits

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy3

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy3_ParamLimits

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy3

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy3_ParamLimits

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy3

0xb535,	// (0x00044abd) common_borders_pane_cp5

0x511b,	// (0x0003e6a3) separator_vertical_pane_g1

0x5124,	// (0x0003e6ac) separator_vertical_pane_g2

0x512d,	// (0x0003e6b5) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0004917e) separator_vertical_pane_g

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy4_ParamLimits

0x5073,	// (0x0003e5fb) eswt_control_pane_g1_copy4

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy4_ParamLimits

0x5080,	// (0x0003e608) eswt_control_pane_g2_copy4

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy4_ParamLimits

0x508d,	// (0x0003e615) eswt_control_pane_g3_copy4

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy4_ParamLimits

0x509a,	// (0x0003e622) eswt_control_pane_g4_copy4

0xd028,	// (0x000465b0) eswt_ctrl_combo_button_pane

0xd030,	// (0x000465b8) eswt_ctrl_input_pane

0xd038,	// (0x000465c0) popup_choice_list_window_cp70

0xd040,	// (0x000465c8) eswt_ctrl_input_pane_t1

0xb535,	// (0x00044abd) input_focus_pane_cp70

0x46b1,	// (0x0003dc39) bg_button_pane_cp70_ParamLimits

0x46b1,	// (0x0003dc39) bg_button_pane_cp70

0xd04e,	// (0x000465d6) eswt_ctrl_combo_button_pane_g1

0x5164,	// (0x0003e6ec) wait_bar_pane_cp70

0x2154,	// (0x0003b6dc) bg_popup_window_pane_cp70_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_window_pane_cp70

0x516c,	// (0x0003e6f4) popup_eswt_tasktip_window_t1

0x5182,	// (0x0003e70a) wait_bar_pane_cp71_ParamLimits

0x5182,	// (0x0003e70a) wait_bar_pane_cp71

0x518e,	// (0x0003e716) grid_eswt_app_pane

0xbc80,	// (0x00045208) scroll_pane_cp70

0xd056,	// (0x000465de) cell_eswt_app_pane_ParamLimits

0xd056,	// (0x000465de) cell_eswt_app_pane

0xd080,	// (0x00046608) cell_eswt_app_pane_g1_ParamLimits

0xd080,	// (0x00046608) cell_eswt_app_pane_g1

0xd0af,	// (0x00046637) cell_eswt_app_pane_g2_ParamLimits

0xd0af,	// (0x00046637) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x00049185) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x00049185) cell_eswt_app_pane_g

0xd0d3,	// (0x0004665b) cell_eswt_app_pane_t1_ParamLimits

0xd0d3,	// (0x0004665b) cell_eswt_app_pane_t1

0x524c,	// (0x0003e7d4) grid_highlight_pane_cp70_ParamLimits

0x524c,	// (0x0003e7d4) grid_highlight_pane_cp70

0xc111,	// (0x00045699) set_content_pane_g1

0x99d1,	// (0x00042f59) status_small_volume_pane

0xac0c,	// (0x00044194) status_small_volume_pane_g1

0xac14,	// (0x0004419c) volume_small2_pane

0xac1d,	// (0x000441a5) volume_small2_pane_g1

0xac26,	// (0x000441ae) volume_small2_pane_g2

0xac2f,	// (0x000441b7) volume_small2_pane_g3

0xac38,	// (0x000441c0) volume_small2_pane_g4

0xac41,	// (0x000441c9) volume_small2_pane_g5

0xac4a,	// (0x000441d2) volume_small2_pane_g6

0xac53,	// (0x000441db) volume_small2_pane_g7

0xac5c,	// (0x000441e4) volume_small2_pane_g8

0xac65,	// (0x000441ed) volume_small2_pane_g9

0xac6e,	// (0x000441f6) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0004918a) volume_small2_pane_g

0x4aa4,	// (0x0003e02c) fep_vkb_top_text_pane_g1_ParamLimits

0xcf38,	// (0x000464c0) fep_vkb_top_text_pane_t1_ParamLimits

0x4d4e,	// (0x0003e2d6) popup_preview_fixed_window_g3_ParamLimits

0x4d4e,	// (0x0003e2d6) popup_preview_fixed_window_g3

0xa25e,	// (0x000437e6) popup_toolbar_trans_pane

0xc861,	// (0x00045de9) aid_height_set_list_ParamLimits

0x3493,	// (0x0003ca1b) aid_size_parent_ParamLimits

0xba9d,	// (0x00045025) list_highlight_pane_cp2_ParamLimits

0xc111,	// (0x00045699) set_content_pane_g1_ParamLimits

0xc9dc,	// (0x00045f64) list_single_image_pane_ParamLimits

0xc9dc,	// (0x00045f64) list_single_image_pane

0xd105,	// (0x0004668d) aid_size_cell_image_ParamLimits

0xd105,	// (0x0004668d) aid_size_cell_image

0xd112,	// (0x0004669a) grid_single_image_pane_ParamLimits

0xd112,	// (0x0004669a) grid_single_image_pane

0xd11e,	// (0x000466a6) list_single_image_pane_g1_ParamLimits

0xd11e,	// (0x000466a6) list_single_image_pane_g1

0x5271,	// (0x0003e7f9) list_single_image_pane_g2_ParamLimits

0x5271,	// (0x0003e7f9) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0004919f) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0004919f) list_single_image_pane_g

0x5285,	// (0x0003e80d) list_single_image_pane_t1_ParamLimits

0x5285,	// (0x0003e80d) list_single_image_pane_t1

0xd12a,	// (0x000466b2) cell_image_list_pane_ParamLimits

0xd12a,	// (0x000466b2) cell_image_list_pane

0xd13e,	// (0x000466c6) cell_image_list_pane_g1

0xd147,	// (0x000466cf) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x000491a4) cell_image_list_pane_g

0xd150,	// (0x000466d8) aid_size_cell_tb_trans_pane

0xb95b,	// (0x00044ee3) bg_tb_trans_pane

0xd162,	// (0x000466ea) grid_tb_trans_pane

0x20c8,	// (0x0003b650) bg_tb_trans_pane_g1

0x20d8,	// (0x0003b660) bg_tb_trans_pane_g2

0x20d0,	// (0x0003b658) bg_tb_trans_pane_g3

0x20e8,	// (0x0003b670) bg_tb_trans_pane_g4

0x20e0,	// (0x0003b668) bg_tb_trans_pane_g5

0x2108,	// (0x0003b690) bg_tb_trans_pane_g6

0x2100,	// (0x0003b688) bg_tb_trans_pane_g7

0x20f0,	// (0x0003b678) bg_tb_trans_pane_g8

0x20f8,	// (0x0003b680) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x000491a9) bg_tb_trans_pane_g

0xd176,	// (0x000466fe) cell_toolbar_trans_pane_ParamLimits

0xd176,	// (0x000466fe) cell_toolbar_trans_pane

0x46ec,	// (0x0003dc74) cell_toolbar_trans_pane_g1

0xcc91,	// (0x00046219) list_form2_midp_pane_t1

0xcc9f,	// (0x00046227) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x00049046) list_form2_midp_pane_t

0x42da,	// (0x0003d862) scroll_pane_cp51_ParamLimits

0x4496,	// (0x0003da1e) form2_midp_wait_pane_g1

0x449f,	// (0x0003da27) form2_midp_wait_pane_g2

0x44a8,	// (0x0003da30) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0004905b) form2_midp_wait_pane_g

0xb5a5,	// (0x00044b2d) list_highlight_pane_cp21_ParamLimits

0x44f0,	// (0x0003da78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44ff,	// (0x0003da87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3647,	// (0x0003cbcf) list_single_2graphic_im_pane_ParamLimits

0x3647,	// (0x0003cbcf) list_single_2graphic_im_pane

0xd19c,	// (0x00046724) list_single_2graphic_im_pane_g1_ParamLimits

0xd19c,	// (0x00046724) list_single_2graphic_im_pane_g1

0xd1ad,	// (0x00046735) list_single_2graphic_im_pane_g2_ParamLimits

0xd1ad,	// (0x00046735) list_single_2graphic_im_pane_g2

0xd1b9,	// (0x00046741) list_single_2graphic_im_pane_g3_ParamLimits

0xd1b9,	// (0x00046741) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x000491bc) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x000491bc) list_single_2graphic_im_pane_g

0xd1cd,	// (0x00046755) list_single_2graphic_im_pane_t1_ParamLimits

0xd1cd,	// (0x00046755) list_single_2graphic_im_pane_t1

0x4d5a,	// (0x0003e2e2) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d5a,	// (0x0003e2e2) list_single_graphic_2heading_pane_fp

0xe29d,	// (0x00047825) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe29d,	// (0x00047825) list_single_graphic_2heading_pane_fp_g1

0x4d70,	// (0x0003e2f8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d70,	// (0x0003e2f8) list_single_graphic_2heading_pane_fp_g2

0xdc8c,	// (0x00047214) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xdc8c,	// (0x00047214) list_single_graphic_2heading_pane_fp_g3

0xe272,	// (0x000477fa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xe272,	// (0x000477fa) list_single_graphic_2heading_pane_fp_g4

0x4d7c,	// (0x0003e304) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4d7c,	// (0x0003e304) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x000490e3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x000490e3) list_single_graphic_2heading_pane_fp_g

0xe42b,	// (0x000479b3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe42b,	// (0x000479b3) list_single_graphic_2heading_pane_fp_t1

0xe2d5,	// (0x0004785d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe2d5,	// (0x0004785d) list_single_graphic_2heading_pane_fp_t2

0xe441,	// (0x000479c9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe441,	// (0x000479c9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x000491c5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x000491c5) list_single_graphic_2heading_pane_fp_t

0x4778,	// (0x0003dd00) fep_hwr_write_pane_g5_ParamLimits

0x4778,	// (0x0003dd00) fep_hwr_write_pane_g5

0x4784,	// (0x0003dd0c) fep_hwr_write_pane_g6_ParamLimits

0x4784,	// (0x0003dd0c) fep_hwr_write_pane_g6

0xd008,	// (0x00046590) eswt_shell_pane_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_window_pane_cp18_ParamLimits

0x2547,	// (0x0003bacf) heading_pane_cp70

0x516c,	// (0x0003e6f4) popup_eswt_tasktip_window_t1_ParamLimits

0xa37b,	// (0x00043903) aid_touch_tab_arrow_left

0xa391,	// (0x00043919) aid_touch_tab_arrow_right

0x89b3,	// (0x00041f3b) title_pane_g3_ParamLimits

0x89b3,	// (0x00041f3b) title_pane_g3

0xb923,	// (0x00044eab) set_value_pane_g1

0xa25e,	// (0x000437e6) popup_toolbar_trans_pane_ParamLimits

0xd150,	// (0x000466d8) aid_size_cell_tb_trans_pane_ParamLimits

0xb95b,	// (0x00044ee3) bg_tb_trans_pane_ParamLimits

0xd162,	// (0x000466ea) grid_tb_trans_pane_ParamLimits

0xb6cf,	// (0x00044c57) cont_note_pane_ParamLimits

0xb6cf,	// (0x00044c57) cont_note_pane

0xb84f,	// (0x00044dd7) cont_snote2_single_text_pane_ParamLimits

0xb84f,	// (0x00044dd7) cont_snote2_single_text_pane

0xb84f,	// (0x00044dd7) cont_snote2_single_graphic_pane_ParamLimits

0xb84f,	// (0x00044dd7) cont_snote2_single_graphic_pane

0x276e,	// (0x0003bcf6) cont_note_wait_pane_ParamLimits

0x276e,	// (0x0003bcf6) cont_note_wait_pane

0x276e,	// (0x0003bcf6) cont_note_image_pane_ParamLimits

0x276e,	// (0x0003bcf6) cont_note_image_pane

0x537b,	// (0x0003e903) popup_note2_window_g1_ParamLimits

0x537b,	// (0x0003e903) popup_note2_window_g1

0xd20b,	// (0x00046793) popup_note2_window_t1_ParamLimits

0xd20b,	// (0x00046793) popup_note2_window_t1

0xd250,	// (0x000467d8) popup_note2_window_t2_ParamLimits

0xd250,	// (0x000467d8) popup_note2_window_t2

0xd295,	// (0x0004681d) popup_note2_window_t3_ParamLimits

0xd295,	// (0x0004681d) popup_note2_window_t3

0x547b,	// (0x0003ea03) popup_note2_window_t4_ParamLimits

0x547b,	// (0x0003ea03) popup_note2_window_t4

0xb753,	// (0x00044cdb) popup_note2_window_t5_ParamLimits

0xb753,	// (0x00044cdb) popup_note2_window_t5

0x0004,

0xfc49,	// (0x000491d1) popup_note2_window_t_ParamLimits

0xfc49,	// (0x000491d1) popup_note2_window_t

0x54aa,	// (0x0003ea32) popup_note2_image_window_g1_ParamLimits

0x54aa,	// (0x0003ea32) popup_note2_image_window_g1

0xd2da,	// (0x00046862) popup_note2_image_window_g2_ParamLimits

0xd2da,	// (0x00046862) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x000491dc) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x000491dc) popup_note2_image_window_g

0x54c8,	// (0x0003ea50) popup_note2_image_window_t1_ParamLimits

0x54c8,	// (0x0003ea50) popup_note2_image_window_t1

0x54e0,	// (0x0003ea68) popup_note2_image_window_t2_ParamLimits

0x54e0,	// (0x0003ea68) popup_note2_image_window_t2

0x54f8,	// (0x0003ea80) popup_note2_image_window_t3_ParamLimits

0x54f8,	// (0x0003ea80) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x000491e1) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x000491e1) popup_note2_image_window_t

0x277c,	// (0x0003bd04) popup_note2_wait_window_g1_ParamLimits

0x277c,	// (0x0003bd04) popup_note2_wait_window_g1

0x2788,	// (0x0003bd10) popup_note2_wait_window_g2_ParamLimits

0x2788,	// (0x0003bd10) popup_note2_wait_window_g2

0x2794,	// (0x0003bd1c) popup_note2_wait_window_g3_ParamLimits

0x2794,	// (0x0003bd1c) popup_note2_wait_window_g3

0x0002,

0xf808,	// (0x00048d90) popup_note2_wait_window_g_ParamLimits

0xf808,	// (0x00048d90) popup_note2_wait_window_g

0x5514,	// (0x0003ea9c) popup_note2_wait_window_t1_ParamLimits

0x5514,	// (0x0003ea9c) popup_note2_wait_window_t1

0x5532,	// (0x0003eaba) popup_note2_wait_window_t2_ParamLimits

0x5532,	// (0x0003eaba) popup_note2_wait_window_t2

0x5550,	// (0x0003ead8) popup_note2_wait_window_t3_ParamLimits

0x5550,	// (0x0003ead8) popup_note2_wait_window_t3

0x5562,	// (0x0003eaea) popup_note2_wait_window_t4_ParamLimits

0x5562,	// (0x0003eaea) popup_note2_wait_window_t4

0x0003,

0xfc60,	// (0x000491e8) popup_note2_wait_window_t_ParamLimits

0xfc60,	// (0x000491e8) popup_note2_wait_window_t

0x5574,	// (0x0003eafc) wait_bar2_pane_ParamLimits

0x5574,	// (0x0003eafc) wait_bar2_pane

0x558c,	// (0x0003eb14) popup_snote2_single_text_window_g1_ParamLimits

0x558c,	// (0x0003eb14) popup_snote2_single_text_window_g1

0x55b4,	// (0x0003eb3c) popup_snote2_single_text_window_t1_ParamLimits

0x55b4,	// (0x0003eb3c) popup_snote2_single_text_window_t1

0x5600,	// (0x0003eb88) popup_snote2_single_text_window_t2_ParamLimits

0x5600,	// (0x0003eb88) popup_snote2_single_text_window_t2

0x564c,	// (0x0003ebd4) popup_snote2_single_text_window_t3_ParamLimits

0x564c,	// (0x0003ebd4) popup_snote2_single_text_window_t3

0x568d,	// (0x0003ec15) popup_snote2_single_text_window_t4_ParamLimits

0x568d,	// (0x0003ec15) popup_snote2_single_text_window_t4

0x56c3,	// (0x0003ec4b) popup_snote2_single_text_window_t5_ParamLimits

0x56c3,	// (0x0003ec4b) popup_snote2_single_text_window_t5

0x0004,

0xfc69,	// (0x000491f1) popup_snote2_single_text_window_t_ParamLimits

0xfc69,	// (0x000491f1) popup_snote2_single_text_window_t

0xd2ec,	// (0x00046874) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2ec,	// (0x00046874) popup_snote2_single_graphic_window_g1

0x5716,	// (0x0003ec9e) popup_snote2_single_graphic_window_g2_ParamLimits

0x5716,	// (0x0003ec9e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc74,	// (0x000491fc) popup_snote2_single_graphic_window_g_ParamLimits

0xfc74,	// (0x000491fc) popup_snote2_single_graphic_window_g

0x573e,	// (0x0003ecc6) popup_snote2_single_graphic_window_t1_ParamLimits

0x573e,	// (0x0003ecc6) popup_snote2_single_graphic_window_t1

0x578a,	// (0x0003ed12) popup_snote2_single_graphic_window_t2_ParamLimits

0x578a,	// (0x0003ed12) popup_snote2_single_graphic_window_t2

0x564c,	// (0x0003ebd4) popup_snote2_single_graphic_window_t3_ParamLimits

0x564c,	// (0x0003ebd4) popup_snote2_single_graphic_window_t3

0x568d,	// (0x0003ec15) popup_snote2_single_graphic_window_t4_ParamLimits

0x568d,	// (0x0003ec15) popup_snote2_single_graphic_window_t4

0x56c3,	// (0x0003ec4b) popup_snote2_single_graphic_window_t5_ParamLimits

0x56c3,	// (0x0003ec4b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc79,	// (0x00049201) popup_snote2_single_graphic_window_t_ParamLimits

0xfc79,	// (0x00049201) popup_snote2_single_graphic_window_t

0x4197,	// (0x0003d71f) clock_nsta_pane_cp2_t1

0x4197,	// (0x0003d71f) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0004901c) clock_nsta_pane_cp2_t

0x928c,	// (0x00042814) form_field_data_wide_pane_g1_ParamLimits

0xb969,	// (0x00044ef1) form_field_data_wide_pane_g2_ParamLimits

0xb969,	// (0x00044ef1) form_field_data_wide_pane_g2

0xb975,	// (0x00044efd) form_field_data_wide_pane_g3_ParamLimits

0xb975,	// (0x00044efd) form_field_data_wide_pane_g3

0x0002,

0xf640,	// (0x00048bc8) form_field_data_wide_pane_g_ParamLimits

0xf640,	// (0x00048bc8) form_field_data_wide_pane_g

0xcbb2,	// (0x0004613a) grid_touch_3_pane_ParamLimits

0xcbb2,	// (0x0004613a) grid_touch_3_pane

0xd314,	// (0x0004689c) cell_touch_3_pane_ParamLimits

0xd314,	// (0x0004689c) cell_touch_3_pane

0x46ec,	// (0x0003dc74) cell_touch_3_pane_g1

0x46ec,	// (0x0003dc74) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x000490a1) cell_touch_3_pane_g

0xb785,	// (0x00044d0d) cont_query_data_pane

0xb78d,	// (0x00044d15) cont_query_data_pane_cp1

0x5804,	// (0x0003ed8c) button_value_adjust_pane_cp7

0x580c,	// (0x0003ed94) query_popup_pane_cp3

0xbe0e,	// (0x00045396) bg_popup_sub_pane_cp22_ParamLimits

0x96f5,	// (0x00042c7d) navi_navi_volume_pane_cp2

0x9704,	// (0x00042c8c) popup_side_volume_key_window_g2

0x9713,	// (0x00042c9b) popup_side_volume_key_window_g3

0x0002,

0xf6d6,	// (0x00048c5e) popup_side_volume_key_window_g

0x9722,	// (0x00042caa) popup_side_volume_key_window_t2

0x0001,

0xf6dd,	// (0x00048c65) popup_side_volume_key_window_t

0x9844,	// (0x00042dcc) popup_side_volume_key_window_ParamLimits

0x9070,	// (0x000425f8) list_double_graphic_pane_g4_ParamLimits

0x9070,	// (0x000425f8) list_double_graphic_pane_g4

0xc9c8,	// (0x00045f50) list_single_2heading_msg_pane_ParamLimits

0xc9c8,	// (0x00045f50) list_single_2heading_msg_pane

0xac77,	// (0x000441ff) list_single_2heading_msg_pane_g1_ParamLimits

0xac77,	// (0x000441ff) list_single_2heading_msg_pane_g1

0xac83,	// (0x0004420b) list_single_2heading_msg_pane_g2_ParamLimits

0xac83,	// (0x0004420b) list_single_2heading_msg_pane_g2

0xac96,	// (0x0004421e) list_single_2heading_msg_pane_g3_ParamLimits

0xac96,	// (0x0004421e) list_single_2heading_msg_pane_g3

0xe461,	// (0x000479e9) list_single_2heading_msg_pane_g4_ParamLimits

0xe461,	// (0x000479e9) list_single_2heading_msg_pane_g4

0x0003,

0xfc84,	// (0x0004920c) list_single_2heading_msg_pane_g_ParamLimits

0xfc84,	// (0x0004920c) list_single_2heading_msg_pane_g

0xaca2,	// (0x0004422a) list_single_2heading_msg_pane_t1_ParamLimits

0xaca2,	// (0x0004422a) list_single_2heading_msg_pane_t1

0xacca,	// (0x00044252) list_single_2heading_msg_pane_t2_ParamLimits

0xacca,	// (0x00044252) list_single_2heading_msg_pane_t2

0xad35,	// (0x000442bd) list_single_2heading_msg_pane_t3_ParamLimits

0xad35,	// (0x000442bd) list_single_2heading_msg_pane_t3

0xe479,	// (0x00047a01) list_single_2heading_msg_pane_t4_ParamLimits

0xe479,	// (0x00047a01) list_single_2heading_msg_pane_t4

0x0003,

0xfc8d,	// (0x00049215) list_single_2heading_msg_pane_t_ParamLimits

0xfc8d,	// (0x00049215) list_single_2heading_msg_pane_t

0xb553,	// (0x00044adb) title_pane_g4_ParamLimits

0xb553,	// (0x00044adb) title_pane_g4

0xf0cc,	// (0x00048654) title_pane_stacon_g3_ParamLimits

0xf0cc,	// (0x00048654) title_pane_stacon_g3

0x533e,	// (0x0003e8c6) list_single_2graphic_im_pane_g4_ParamLimits

0x533e,	// (0x0003e8c6) list_single_2graphic_im_pane_g4

0xc70e,	// (0x00045c96) popup_side_volume_key_window_cp

0x39c9,	// (0x0003cf51) main_idle_act2_pane_t1

0x06ba,	// (0x00039c42) toolbar_button_pane_g10

0x8fbc,	// (0x00042544) popup_toolbar_window_cp1

0x4188,	// (0x0003d710) clock_nsta_pane_cp_t1

0x4188,	// (0x0003d710) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x00049017) clock_nsta_pane_cp_t

0x96f5,	// (0x00042c7d) navi_navi_volume_pane_cp2_ParamLimits

0xf2a0,	// (0x00048828) popup_side_volume_key_window_g1_ParamLimits

0x9704,	// (0x00042c8c) popup_side_volume_key_window_g2_ParamLimits

0x9713,	// (0x00042c9b) popup_side_volume_key_window_g3_ParamLimits

0xf6d6,	// (0x00048c5e) popup_side_volume_key_window_g_ParamLimits

0x0c68,	// (0x0003a1f0) fep_hwr_aid_pane

0x0d0f,	// (0x0003a297) bg_fep_hwr_top_pane_g4_ParamLimits

0x4748,	// (0x0003dcd0) fep_hwr_top_pane_g1_ParamLimits

0x475a,	// (0x0003dce2) fep_hwr_top_pane_g2_ParamLimits

0x0d2f,	// (0x0003a2b7) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0004906c) fep_hwr_top_pane_g_ParamLimits

0x0d44,	// (0x0003a2cc) fep_hwr_top_text_pane_ParamLimits

0x2f78,	// (0x0003c500) aid_touch_tab_arrow_arrow_2

0x2f81,	// (0x0003c509) aid_touch_tab_arrow_left_2

0x0c7c,	// (0x0003a204) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0cb3,	// (0x0003a23b) fep_hwr_prediction_pane

0x48b3,	// (0x0003de3b) fep_vkb_prediction_pane

0xcf18,	// (0x000464a0) fep_vkb_side_pane_g3_ParamLimits

0xcf18,	// (0x000464a0) fep_vkb_side_pane_g3

0x0ebf,	// (0x0003a447) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f2b,	// (0x0003a4b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f38,	// (0x0003a4c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0004911b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x113e,	// (0x0003a6c6) fep_hwr_prediction_pane_g1

0x1148,	// (0x0003a6d0) fep_hwr_prediction_pane_g2

0x1150,	// (0x0003a6d8) fep_hwr_prediction_pane_g3

0x1158,	// (0x0003a6e0) fep_hwr_prediction_pane_g4

0x0003,

0xfc96,	// (0x0004921e) fep_hwr_prediction_pane_g

0x5831,	// (0x0003edb9) fep_vkb_prediction_pane_g1

0x583b,	// (0x0003edc3) fep_vkb_prediction_pane_g2

0x5843,	// (0x0003edcb) fep_vkb_prediction_pane_g3

0x584b,	// (0x0003edd3) fep_vkb_prediction_pane_g4

0x0003,

0xfc9f,	// (0x00049227) fep_vkb_prediction_pane_g

0xaa81,	// (0x00044009) slider_set_pane_g3

0xaa95,	// (0x0004401d) slider_set_pane_g4

0xaaad,	// (0x00044035) slider_set_pane_g5

0xaa81,	// (0x00044009) slider_set_pane_g6

0xaac3,	// (0x0004404b) slider_set_pane_g7

0x35f4,	// (0x0003cb7c) slider_form_pane_g3

0x35fd,	// (0x0003cb85) slider_form_pane_g4

0x3605,	// (0x0003cb8d) slider_form_pane_g5

0x35f4,	// (0x0003cb7c) slider_form_pane_g6

0xc9ac,	// (0x00045f34) slider_form_pane_g7

0x3c75,	// (0x0003d1fd) slider_set_pane_vc_g3

0x3c7e,	// (0x0003d206) slider_set_pane_vc_g4

0x3c87,	// (0x0003d20f) slider_set_pane_vc_g5

0x3c75,	// (0x0003d1fd) slider_set_pane_vc_g6

0x3c90,	// (0x0003d218) slider_set_pane_vc_g7

0x3e46,	// (0x0003d3ce) slider_form_pane_vc_g1

0x3e4f,	// (0x0003d3d7) slider_form_pane_vc_g2

0x3e58,	// (0x0003d3e0) slider_form_pane_vc_g3

0x3e46,	// (0x0003d3ce) slider_form_pane_vc_g4

0x3e61,	// (0x0003d3e9) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x00048fe9) slider_form_pane_vc_g

0xdb8c,	// (0x00047114) main_idle_act3_pane

0x5853,	// (0x0003eddb) ai3_links_pane

0xd35d,	// (0x000468e5) popup_ai3_data_window_ParamLimits

0xd35d,	// (0x000468e5) popup_ai3_data_window

0xb535,	// (0x00044abd) grid_ai3_links_pane

0xd375,	// (0x000468fd) cell_ai3_links_pane_ParamLimits

0xd375,	// (0x000468fd) cell_ai3_links_pane

0x588c,	// (0x0003ee14) bg_popup_sub_pane_cp11

0x5899,	// (0x0003ee21) cell_ai3_links_pane_g1

0xb535,	// (0x00044abd) bg_popup_sub_pane_cp12

0x58be,	// (0x0003ee46) heading_ai3_data_pane

0x58c6,	// (0x0003ee4e) list_ai3_gene_pane

0x58d2,	// (0x0003ee5a) popup_ai3_data_window_g1

0x58da,	// (0x0003ee62) heading_ai3_data_pane_g1

0x58e2,	// (0x0003ee6a) heading_ai3_data_pane_t1

0xd38f,	// (0x00046917) list_double_ai3_gene_pane_ParamLimits

0xd38f,	// (0x00046917) list_double_ai3_gene_pane

0x58fd,	// (0x0003ee85) list_single_ai3_gene_pane_ParamLimits

0x58fd,	// (0x0003ee85) list_single_ai3_gene_pane

0x46b1,	// (0x0003dc39) list_highlight_pane_cp7_ParamLimits

0x46b1,	// (0x0003dc39) list_highlight_pane_cp7

0x590a,	// (0x0003ee92) list_single_a13_gene_pane_t1_ParamLimits

0x590a,	// (0x0003ee92) list_single_a13_gene_pane_t1

0x5921,	// (0x0003eea9) list_single_ai3_gene_pane_g1

0x592a,	// (0x0003eeb2) list_single_ai3_gene_pane_g2

0x0001,

0xfca8,	// (0x00049230) list_single_ai3_gene_pane_g

0x5932,	// (0x0003eeba) list_double_ai3_gene_pane_g1_ParamLimits

0x5932,	// (0x0003eeba) list_double_ai3_gene_pane_g1

0xd39c,	// (0x00046924) list_double_ai3_gene_pane_t1_ParamLimits

0xd39c,	// (0x00046924) list_double_ai3_gene_pane_t1

0x595a,	// (0x0003eee2) list_double_ai3_gene_pane_t2_ParamLimits

0x595a,	// (0x0003eee2) list_double_ai3_gene_pane_t2

0x596f,	// (0x0003eef7) list_double_ai3_gene_pane_t3_ParamLimits

0x596f,	// (0x0003eef7) list_double_ai3_gene_pane_t3

0x0002,

0xfcad,	// (0x00049235) list_double_ai3_gene_pane_t_ParamLimits

0xfcad,	// (0x00049235) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe457,	// (0x000479df) aid_size_min_col_2

0xd347,	// (0x000468cf) aid_size_min_msg_ParamLimits

0xd347,	// (0x000468cf) aid_size_min_msg

0xcf2c,	// (0x000464b4) fep_vkb_top_text_pane_g2_ParamLimits

0xcf2c,	// (0x000464b4) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0004909c) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0004909c) fep_vkb_top_text_pane_g

0xdb8c,	// (0x00047114) main_hc_apps_shell_pane

0x598c,	// (0x0003ef14) grid_hc_apps_pane_ParamLimits

0x598c,	// (0x0003ef14) grid_hc_apps_pane

0x599e,	// (0x0003ef26) list_hc_apps_pane

0x59a6,	// (0x0003ef2e) scroll_pane_cp37_ParamLimits

0x59a6,	// (0x0003ef2e) scroll_pane_cp37

0xd3b8,	// (0x00046940) cell_hc_apps_pane_ParamLimits

0xd3b8,	// (0x00046940) cell_hc_apps_pane

0xd476,	// (0x000469fe) cell_hc_apps_pane_g1_ParamLimits

0xd476,	// (0x000469fe) cell_hc_apps_pane_g1

0x5a90,	// (0x0003f018) cell_hc_apps_pane_g2_ParamLimits

0x5a90,	// (0x0003f018) cell_hc_apps_pane_g2

0x5aac,	// (0x0003f034) cell_hc_apps_pane_g3_ParamLimits

0x5aac,	// (0x0003f034) cell_hc_apps_pane_g3

0x0002,

0xfcb4,	// (0x0004923c) cell_hc_apps_pane_g_ParamLimits

0xfcb4,	// (0x0004923c) cell_hc_apps_pane_g

0xd4a2,	// (0x00046a2a) cell_hc_apps_pane_t1_ParamLimits

0xd4a2,	// (0x00046a2a) cell_hc_apps_pane_t1

0xb6cf,	// (0x00044c57) grid_highlight_pane_cp10_ParamLimits

0xb6cf,	// (0x00044c57) grid_highlight_pane_cp10

0xd4e0,	// (0x00046a68) list_single_hc_apps_pane_ParamLimits

0xd4e0,	// (0x00046a68) list_single_hc_apps_pane

0xd510,	// (0x00046a98) list_single_hc_apps_pane_g1

0xada3,	// (0x0004432b) list_single_hc_apps_pane_g2

0x0001,

0xfcbb,	// (0x00049243) list_single_hc_apps_pane_g

0xadbc,	// (0x00044344) list_single_hc_apps_pane_g2_copy1

0xadd8,	// (0x00044360) list_single_hc_apps_pane_t1

0xb5a5,	// (0x00044b2d) bg_set_opt_pane_cp_ParamLimits

0x8a87,	// (0x0004200f) setting_slider_pane_t1_ParamLimits

0x8aa0,	// (0x00042028) setting_slider_pane_t2_ParamLimits

0x8aba,	// (0x00042042) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00048abf) setting_slider_pane_t_ParamLimits

0x8ad2,	// (0x0004205a) slider_set_pane_ParamLimits

0xf4a4,	// (0x00048a2c) control_pane_g5_ParamLimits

0xf4a4,	// (0x00048a2c) control_pane_g5

0xc82e,	// (0x00045db6) slider_set_pane_g1_ParamLimits

0x09e1,	// (0x00039f69) slider_set_pane_g2_ParamLimits

0xaa81,	// (0x00044009) slider_set_pane_g3_ParamLimits

0xaa95,	// (0x0004401d) slider_set_pane_g4_ParamLimits

0xaaad,	// (0x00044035) slider_set_pane_g5_ParamLimits

0xaa81,	// (0x00044009) slider_set_pane_g6_ParamLimits

0xaac3,	// (0x0004404b) slider_set_pane_g7_ParamLimits

0xf924,	// (0x00048eac) slider_set_pane_g_ParamLimits

0xc0bc,	// (0x00045644) navi_icon_text_pane_ParamLimits

0xa344,	// (0x000438cc) aid_fill_nsta_2_ParamLimits

0xa37b,	// (0x00043903) aid_touch_tab_arrow_left_ParamLimits

0xa391,	// (0x00043919) aid_touch_tab_arrow_right_ParamLimits

0xa42c,	// (0x000439b4) clock_nsta_pane_ParamLimits

0x2f5a,	// (0x0003c4e2) navi_icon_pane_g1_ParamLimits

0x2f66,	// (0x0003c4ee) navi_text_pane_t1_ParamLimits

0x4298,	// (0x0003d820) navi_icon_text_pane_g1_ParamLimits

0x42a4,	// (0x0003d82c) navi_icon_text_pane_t1_ParamLimits

0xd510,	// (0x00046a98) list_single_hc_apps_pane_g1_ParamLimits

0xada3,	// (0x0004432b) list_single_hc_apps_pane_g2_ParamLimits

0xfcbb,	// (0x00049243) list_single_hc_apps_pane_g_ParamLimits

0xadbc,	// (0x00044344) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xadd8,	// (0x00044360) list_single_hc_apps_pane_t1_ParamLimits

0x88b8,	// (0x00041e40) popup_toolbar2_fixed_window_ParamLimits

0x88b8,	// (0x00041e40) popup_toolbar2_fixed_window

0xa254,	// (0x000437dc) popup_toolbar2_float_window

0xb535,	// (0x00044abd) bg_popup_sub_pane_cp27

0x5b8a,	// (0x0003f112) grid_toolbar2_float_pane

0xb535,	// (0x00044abd) bg_popup_sub_pane_cp26

0x5b8a,	// (0x0003f112) grid_toolbar2_fixed_pane

0xd529,	// (0x00046ab1) cell_toolbar2_fixed_pane_ParamLimits

0xd529,	// (0x00046ab1) cell_toolbar2_fixed_pane

0xd543,	// (0x00046acb) cell_toolbar2_fixed_pane_g1

0x016f,	// (0x000396f7) toolbar2_fixed_button_pane

0x20c8,	// (0x0003b650) toolbar2_fixed_button_pane_g1

0x20d8,	// (0x0003b660) toolbar2_fixed_button_pane_g2

0x20d0,	// (0x0003b658) toolbar2_fixed_button_pane_g3

0x20e8,	// (0x0003b670) toolbar2_fixed_button_pane_g4

0x20e0,	// (0x0003b668) toolbar2_fixed_button_pane_g5

0x20f0,	// (0x0003b678) toolbar2_fixed_button_pane_g6

0x20f8,	// (0x0003b680) toolbar2_fixed_button_pane_g7

0x2108,	// (0x0003b690) toolbar2_fixed_button_pane_g8

0x2100,	// (0x0003b688) toolbar2_fixed_button_pane_g9

0x0008,

0xf826,	// (0x00048dae) toolbar2_fixed_button_pane_g

0x5bab,	// (0x0003f133) cell_toolbar2_float_pane_ParamLimits

0x5bab,	// (0x0003f133) cell_toolbar2_float_pane

0x5bbc,	// (0x0003f144) cell_toolbar2_float_pane_g1

0x016f,	// (0x000396f7) toolbar2_fixed_button_pane_cp

0xce14,	// (0x0004639c) fep_vkb_accented_list_pane_ParamLimits

0xce14,	// (0x0004639c) fep_vkb_accented_list_pane

0x0e9f,	// (0x0003a427) bg_popup_fep_shadow_pane_g9

0xc21b,	// (0x000457a3) bg_popup_fep_shadow_pane_cp3

0xba74,	// (0x00044ffc) list_accented_list_pane

0x5bc5,	// (0x0003f14d) list_single_accented_list_pane_ParamLimits

0x5bc5,	// (0x0003f14d) list_single_accented_list_pane

0xc21b,	// (0x000457a3) list_highlight_pane_cp10

0x5bd6,	// (0x0003f15e) list_single_accented_list_pane_t1

0xa17e,	// (0x00043706) popup_slider_window_ParamLimits

0xa17e,	// (0x00043706) popup_slider_window

0x5814,	// (0x0003ed9c) aid_indentation_list_msg

0xd634,	// (0x00046bbc) bg_popup_window_pane_cp19

0x5cfc,	// (0x0003f284) popup_slider_window_g1

0x5d18,	// (0x0003f2a0) popup_slider_window_g2

0x5d34,	// (0x0003f2bc) popup_slider_window_g3

0x0005,

0xfcc0,	// (0x00049248) popup_slider_window_g

0x5d9a,	// (0x0003f322) popup_slider_window_t1

0x5e0e,	// (0x0003f396) small_volume_slider_vertical_pane

0x46ec,	// (0x0003dc74) small_volume_slider_vertical_pane_g1

0x46ec,	// (0x0003dc74) small_volume_slider_vertical_pane_g2

0x5e2a,	// (0x0003f3b2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd2,	// (0x0004925a) small_volume_slider_vertical_pane_g

0x86aa,	// (0x00041c32) area_side_right_pane_ParamLimits

0x86aa,	// (0x00041c32) area_side_right_pane

0xae06,	// (0x0004438e) aid_size_side_button_ParamLimits

0xae06,	// (0x0004438e) aid_size_side_button

0xae1f,	// (0x000443a7) grid_sctrl_middle_pane_ParamLimits

0xae1f,	// (0x000443a7) grid_sctrl_middle_pane

0x11f6,	// (0x0003a77e) sctrl_sk_bottom_pane

0x1207,	// (0x0003a78f) sctrl_sk_top_pane

0x1219,	// (0x0003a7a1) aid_touch_sctrl_top

0x1226,	// (0x0003a7ae) bg_sctrl_sk_pane_ParamLimits

0x1226,	// (0x0003a7ae) bg_sctrl_sk_pane

0x1234,	// (0x0003a7bc) sctrl_sk_top_pane_g1

0x1241,	// (0x0003a7c9) sctrl_sk_top_pane_t1

0x1219,	// (0x0003a7a1) aid_touch_sctrl_bottom

0x1226,	// (0x0003a7ae) bg_sctrl_sk_pane_cp_ParamLimits

0x1226,	// (0x0003a7ae) bg_sctrl_sk_pane_cp

0x125c,	// (0x0003a7e4) sctrl_sk_bottom_pane_g1

0x1241,	// (0x0003a7c9) sctrl_sk_bottom_pane_t1

0xae3e,	// (0x000443c6) cell_sctrl_middle_pane_ParamLimits

0xae3e,	// (0x000443c6) cell_sctrl_middle_pane

0xae61,	// (0x000443e9) aid_touch_sctrl_middle_ParamLimits

0xae61,	// (0x000443e9) aid_touch_sctrl_middle

0x1226,	// (0x0003a7ae) bg_sctrl_middle_pane_ParamLimits

0x1226,	// (0x0003a7ae) bg_sctrl_middle_pane

0x1b4e,	// (0x0003b0d6) cell_sctrl_middle_pane_g1_ParamLimits

0x1b4e,	// (0x0003b0d6) cell_sctrl_middle_pane_g1

0xae75,	// (0x000443fd) cell_sctrl_middle_pane_g2_ParamLimits

0xae75,	// (0x000443fd) cell_sctrl_middle_pane_g2

0x0001,

0xfcde,	// (0x00049266) cell_sctrl_middle_pane_g_ParamLimits

0xfcde,	// (0x00049266) cell_sctrl_middle_pane_g

0x20c8,	// (0x0003b650) bg_sctrl_middle_pane_g1

0x20d0,	// (0x0003b658) bg_sctrl_middle_pane_g2

0x20d8,	// (0x0003b660) bg_sctrl_middle_pane_g3

0x20e0,	// (0x0003b668) bg_sctrl_middle_pane_g4

0x20e8,	// (0x0003b670) bg_sctrl_middle_pane_g5

0x20f0,	// (0x0003b678) bg_sctrl_middle_pane_g6

0x20f8,	// (0x0003b680) bg_sctrl_middle_pane_g7

0x2100,	// (0x0003b688) bg_sctrl_middle_pane_g8

0x0007,

0xfce3,	// (0x0004926b) bg_sctrl_middle_pane_g

0x2108,	// (0x0003b690) bg_sctrl_middle_pane_g8_copy1

0x20c8,	// (0x0003b650) bg_sctrl_sk_pane_g1

0x20d8,	// (0x0003b660) bg_sctrl_sk_pane_g2

0x20d0,	// (0x0003b658) bg_sctrl_sk_pane_g3

0x0008,

0xf826,	// (0x00048dae) bg_sctrl_sk_pane_g

0xb89d,	// (0x00044e25) aid_size_touch_scroll_bar

0x20e8,	// (0x0003b670) bg_sctrl_sk_pane_g4

0x20e0,	// (0x0003b668) bg_sctrl_sk_pane_g5

0x20f0,	// (0x0003b678) bg_sctrl_sk_pane_g6

0x20f8,	// (0x0003b680) bg_sctrl_sk_pane_g7

0x2108,	// (0x0003b690) bg_sctrl_sk_pane_g8

0x2100,	// (0x0003b688) bg_sctrl_sk_pane_g9

0xf4d9,	// (0x00048a61) popup_fep_china_hwr2_fs_candidate_window

0x9c44,	// (0x000431cc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9c44,	// (0x000431cc) popup_fep_china_hwr2_fs_control_window

0x0ebf,	// (0x0003a447) sctrl_sk_top_pane_g2

0x0001,

0xfcd9,	// (0x00049261) sctrl_sk_top_pane_g

0xd6ca,	// (0x00046c52) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd6ca,	// (0x00046c52) aid_fep_china_hwr2_fs_cell

0xd6de,	// (0x00046c66) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd6de,	// (0x00046c66) bg_popup_fep_shadow_pane_cp4

0xd6f5,	// (0x00046c7d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6f5,	// (0x00046c7d) bg_popup_fep_shadow_pane_cp5

0xd707,	// (0x00046c8f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd707,	// (0x00046c8f) popup_fep_china_hwr2_fs_control_bar_grid

0xd71b,	// (0x00046ca3) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e86,	// (0x0003f40e) aid_fep_china_hwr2_fs_candi_cell

0xb535,	// (0x00044abd) bg_popup_fep_shadow_pane_cp6

0x5e90,	// (0x0003f418) popup_fep_china_hwr2_fs_candidate_grid

0xd723,	// (0x00046cab) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd723,	// (0x00046cab) cell_fep_china_hwr2_fs_funtion_grid

0x46ec,	// (0x0003dc74) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5eb2,	// (0x0003f43a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5eb2,	// (0x0003f43a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5ec0,	// (0x0003f448) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5ec0,	// (0x0003f448) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf4,	// (0x0004927c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf4,	// (0x0004927c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd73b,	// (0x00046cc3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd73b,	// (0x00046cc3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd750,	// (0x00046cd8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd750,	// (0x00046cd8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf9,	// (0x00049281) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf9,	// (0x00049281) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f07,	// (0x0003f48f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f0f,	// (0x0003f497) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f17,	// (0x0003f49f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfe,	// (0x00049286) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f1f,	// (0x0003f4a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f1f,	// (0x0003f4a7) cell_fep_china_hwr2_fs_candidate_grid

0x5f38,	// (0x0003f4c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f40,	// (0x0003f4c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46ec,	// (0x0003dc74) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46ec,	// (0x0003dc74) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x000490a1) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f48,	// (0x0003f4d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0455,	// (0x000399dd) clock_nsta_pane_cp_24_ParamLimits

0x0455,	// (0x000399dd) clock_nsta_pane_cp_24

0x04d3,	// (0x00039a5b) indicator_nsta_pane_cp_24_ParamLimits

0x04d3,	// (0x00039a5b) indicator_nsta_pane_cp_24

0x2dd6,	// (0x0003c35e) heading_pane_g1

0x0001,

0xf88b,	// (0x00048e13) heading_pane_g

0x3812,	// (0x0003cd9a) grid_sct_catagory_button_pane

0x3842,	// (0x0003cdca) scroll_pane_cp5_ParamLimits

0x42e6,	// (0x0003d86e) button_value_adjust_pane_cp5_ParamLimits

0x42e6,	// (0x0003d86e) button_value_adjust_pane_cp5

0x43c5,	// (0x0003d94d) form2_midp_time_pane_ParamLimits

0x5f56,	// (0x0003f4de) cell_sct_catagory_button_pane_ParamLimits

0x5f56,	// (0x0003f4de) cell_sct_catagory_button_pane

0x46b1,	// (0x0003dc39) bg_button_pane_cp01_ParamLimits

0x46b1,	// (0x0003dc39) bg_button_pane_cp01

0x46ec,	// (0x0003dc74) cell_sct_catagory_button_pane_g1

0xa1f7,	// (0x0004377f) popup_tb_extension_window

0xd76c,	// (0x00046cf4) aid_size_cell_ext_ParamLimits

0xd76c,	// (0x00046cf4) aid_size_cell_ext

0xb84f,	// (0x00044dd7) bg_tb_trans_pane_cp1_ParamLimits

0xb84f,	// (0x00044dd7) bg_tb_trans_pane_cp1

0xd792,	// (0x00046d1a) grid_tb_ext_pane_ParamLimits

0xd792,	// (0x00046d1a) grid_tb_ext_pane

0xd7d1,	// (0x00046d59) cell_tb_ext_pane_ParamLimits

0xd7d1,	// (0x00046d59) cell_tb_ext_pane

0xd7f9,	// (0x00046d81) cell_tb_ext_pane_g1_ParamLimits

0xd7f9,	// (0x00046d81) cell_tb_ext_pane_g1

0x5fec,	// (0x0003f574) cell_tb_ext_pane_t1

0xb6cf,	// (0x00044c57) list_highlight_pane_cp11_ParamLimits

0xb6cf,	// (0x00044c57) list_highlight_pane_cp11

0x88cd,	// (0x00041e55) popup_uni_indicator_window_ParamLimits

0x88cd,	// (0x00041e55) popup_uni_indicator_window

0xb95b,	// (0x00044ee3) bg_popup_sub_pane_cp14

0xd816,	// (0x00046d9e) list_uniindi_pane

0xd822,	// (0x00046daa) uniindi_top_pane

0xb6cf,	// (0x00044c57) bg_uniindi_top_pane

0xd841,	// (0x00046dc9) uniindi_top_pane_g1

0xd857,	// (0x00046ddf) uniindi_top_pane_g2

0x0003,

0xfd05,	// (0x0004928d) uniindi_top_pane_g

0xd874,	// (0x00046dfc) uniindi_top_pane_t1

0x609d,	// (0x0003f625) list_single_uniindi_pane_ParamLimits

0x609d,	// (0x0003f625) list_single_uniindi_pane

0x46ec,	// (0x0003dc74) bg_uniindi_top_pane_g1

0x60b0,	// (0x0003f638) list_single_uniindi_pane_g1

0x60c3,	// (0x0003f64b) list_single_uniindi_pane_t1

0xdb8c,	// (0x00047114) control_bg_pane

0x60e8,	// (0x0003f670) bg_sctrl_sk_pane_cp1

0x60f1,	// (0x0003f679) bg_sctrl_sk_pane_cp2

0x60fa,	// (0x0003f682) control_bg_pane_g1

0x6103,	// (0x0003f68b) control_bg_pane_g2

0x0001,

0xfd0e,	// (0x00049296) control_bg_pane_g

0x412c,	// (0x0003d6b4) cell_indicator_nsta_pane_g1_ParamLimits

0xcbef,	// (0x00046177) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x00049005) cell_indicator_nsta_pane_g_ParamLimits

0xe252,	// (0x000477da) form2_midp_time_pane_t1_ParamLimits

0x0c5a,	// (0x0003a1e2) main_idle_act4_pane_ParamLimits

0x0c5a,	// (0x0003a1e2) main_idle_act4_pane

0xa1f7,	// (0x0004377f) popup_tb_extension_window_ParamLimits

0xd7b7,	// (0x00046d3f) tb_ext_find_pane_ParamLimits

0xd7b7,	// (0x00046d3f) tb_ext_find_pane

0x610c,	// (0x0003f694) ai_gene_pane_1_cp1

0xc29c,	// (0x00045824) ai_gene_pane_2_cp1

0xd89e,	// (0x00046e26) list_single_idle_plugin_calendar_pane

0x611d,	// (0x0003f6a5) list_single_idle_plugin_notification_pane

0x6126,	// (0x0003f6ae) list_single_idle_plugin_player_pane

0xd8a7,	// (0x00046e2f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd8a7,	// (0x00046e2f) list_single_idle_plugin_shortcut_pane

0xd8cf,	// (0x00046e57) main_idle_act4_pane_t1

0xd8e6,	// (0x00046e6e) main_idle_act4_pane_t2

0x0001,

0xfd13,	// (0x0004929b) main_idle_act4_pane_t

0xd8fd,	// (0x00046e85) middle_sk_idle_act4_pane_ParamLimits

0xd8fd,	// (0x00046e85) middle_sk_idle_act4_pane

0xd919,	// (0x00046ea1) popup_clock_digital_analogue_window_cp2

0xd945,	// (0x00046ecd) shortcut_wheel_idle_act4_pane_ParamLimits

0xd945,	// (0x00046ecd) shortcut_wheel_idle_act4_pane

0x46ec,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g1

0x46ec,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g2

0x46ec,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g3

0x46ec,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g4

0x46ec,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g5

0x61b9,	// (0x0003f741) shortcut_wheel_idle_act4_pane_g6

0x61c1,	// (0x0003f749) shortcut_wheel_idle_act4_pane_g7

0x61c9,	// (0x0003f751) shortcut_wheel_idle_act4_pane_g8

0x61d1,	// (0x0003f759) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd18,	// (0x000492a0) shortcut_wheel_idle_act4_pane_g

0xd9c2,	// (0x00046f4a) middle_sk_idle_act4_pane_g1_ParamLimits

0xd9c2,	// (0x00046f4a) middle_sk_idle_act4_pane_g1

0xd9d0,	// (0x00046f58) middle_sk_idle_act4_pane_g2_ParamLimits

0xd9d0,	// (0x00046f58) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3b,	// (0x000492c3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3b,	// (0x000492c3) middle_sk_idle_act4_pane_g

0xd9e8,	// (0x00046f70) middle_sk_idle_act4_pane_t1_ParamLimits

0xd9e8,	// (0x00046f70) middle_sk_idle_act4_pane_t1

0xda17,	// (0x00046f9f) grid_ai_shortcut_pane_ParamLimits

0xda17,	// (0x00046f9f) grid_ai_shortcut_pane

0xda34,	// (0x00046fbc) list_highlight_pane_cp16_ParamLimits

0xda34,	// (0x00046fbc) list_highlight_pane_cp16

0xda41,	// (0x00046fc9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xda41,	// (0x00046fc9) list_single_idle_plugin_shortcut_pane_g1

0xda4d,	// (0x00046fd5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xda4d,	// (0x00046fd5) list_single_idle_plugin_shortcut_pane_g2

0xda69,	// (0x00046ff1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xda69,	// (0x00046ff1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd40,	// (0x000492c8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd40,	// (0x000492c8) list_single_idle_plugin_shortcut_pane_g

0xda7e,	// (0x00047006) cell_ai_shortcut_pane_ParamLimits

0xda7e,	// (0x00047006) cell_ai_shortcut_pane

0xda94,	// (0x0004701c) cell_ai_shortcut_pane_g1_ParamLimits

0xda94,	// (0x0004701c) cell_ai_shortcut_pane_g1

0x610c,	// (0x0003f694) ai_gene_pane_1_cp2

0x6301,	// (0x0003f889) ai_gene_pane_2_cp2

0x6309,	// (0x0003f891) list_highlight_pane_cp15

0xdab6,	// (0x0004703e) list_single_idle_plugin_calendar_pane_g1

0x6309,	// (0x0003f891) list_highlight_pane_cp17

0x631a,	// (0x0003f8a2) list_single_idle_plugin_calendar_pane_g1_copy1

0x6322,	// (0x0003f8aa) list_single_idle_plugin_player_pane_g1

0x3a6b,	// (0x0003cff3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd47,	// (0x000492cf) list_single_idle_plugin_player_pane_g

0x632a,	// (0x0003f8b2) list_single_idle_plugin_player_pane_t1

0x6338,	// (0x0003f8c0) list_single_idle_plugin_player_pane_t2

0x6346,	// (0x0003f8ce) list_single_idle_plugin_player_pane_t3

0x6354,	// (0x0003f8dc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4c,	// (0x000492d4) list_single_idle_plugin_player_pane_t

0x6362,	// (0x0003f8ea) wait_bar_pane_cp15

0x636a,	// (0x0003f8f2) grid_ai_notification_pane

0x3a6b,	// (0x0003cff3) list_single_idle_plugin_notification_pane_g1

0xdabe,	// (0x00047046) cell_ai_notification_pane_ParamLimits

0xdabe,	// (0x00047046) cell_ai_notification_pane

0x6380,	// (0x0003f908) cell_ai_notification_pane_g1

0x6388,	// (0x0003f910) cell_ai_notification_pane_t1

0xdacb,	// (0x00047053) tb_ext_find_button_pane

0xdad3,	// (0x0004705b) tb_ext_find_pane_g1

0xdadb,	// (0x00047063) tb_ext_find_pane_t1

0xbdad,	// (0x00045335) tb_ext_find_button_pane_g1

0xdae9,	// (0x00047071) tb_ext_find_button_pane_g2

0x0001,

0xfd55,	// (0x000492dd) tb_ext_find_button_pane_g

0xd8cf,	// (0x00046e57) main_idle_act4_pane_t1_ParamLimits

0xd8e6,	// (0x00046e6e) main_idle_act4_pane_t2_ParamLimits

0xfd13,	// (0x0004929b) main_idle_act4_pane_t_ParamLimits

0xd919,	// (0x00046ea1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd931,	// (0x00046eb9) sat_plugin_idle_act4_pane_ParamLimits

0xd931,	// (0x00046eb9) sat_plugin_idle_act4_pane

0xdaf2,	// (0x0004707a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdaf2,	// (0x0004707a) sat_plugin_idle_act4_pane_t1

0xdb0a,	// (0x00047092) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb0a,	// (0x00047092) sat_plugin_idle_act4_pane_t2

0xdb22,	// (0x000470aa) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb22,	// (0x000470aa) sat_plugin_idle_act4_pane_t3

0xdb3a,	// (0x000470c2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdb3a,	// (0x000470c2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5a,	// (0x000492e2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5a,	// (0x000492e2) sat_plugin_idle_act4_pane_t

0x8848,	// (0x00041dd0) popup_battery_window_ParamLimits

0x8848,	// (0x00041dd0) popup_battery_window

0xb6cf,	// (0x00044c57) bg_popup_sub_pane_cp25_ParamLimits

0xb6cf,	// (0x00044c57) bg_popup_sub_pane_cp25

0x6409,	// (0x0003f991) popup_battery_window_g1_ParamLimits

0x6409,	// (0x0003f991) popup_battery_window_g1

0x6415,	// (0x0003f99d) popup_battery_window_t1_ParamLimits

0x6415,	// (0x0003f99d) popup_battery_window_t1

0x6427,	// (0x0003f9af) popup_battery_window_t2_ParamLimits

0x6427,	// (0x0003f9af) popup_battery_window_t2

0x0001,

0xfd63,	// (0x000492eb) popup_battery_window_t_ParamLimits

0xfd63,	// (0x000492eb) popup_battery_window_t

0x9898,	// (0x00042e20) midp_canvas_pane_ParamLimits

0x990a,	// (0x00042e92) midp_keypad_pane_ParamLimits

0x990a,	// (0x00042e92) midp_keypad_pane

0xba9d,	// (0x00045025) main_midp_pane_ParamLimits

0xcbfc,	// (0x00046184) signal_pane_g2_cp_ParamLimits

0xe49e,	// (0x00047a26) aid_size_cell_midp_keypad_ParamLimits

0xe49e,	// (0x00047a26) aid_size_cell_midp_keypad

0xe4bc,	// (0x00047a44) midp_keyp_game_grid_pane_ParamLimits

0xe4bc,	// (0x00047a44) midp_keyp_game_grid_pane

0xe4e3,	// (0x00047a6b) midp_keyp_rocker_pane_ParamLimits

0xe4e3,	// (0x00047a6b) midp_keyp_rocker_pane

0xe534,	// (0x00047abc) midp_keyp_sk_left_pane_ParamLimits

0xe534,	// (0x00047abc) midp_keyp_sk_left_pane

0xe588,	// (0x00047b10) midp_keyp_sk_right_pane_ParamLimits

0xe588,	// (0x00047b10) midp_keyp_sk_right_pane

0xb535,	// (0x00044abd) bg_button_pane_cp03

0xe5dc,	// (0x00047b64) midp_keyp_sk_left_pane_g1

0xb535,	// (0x00044abd) bg_button_pane_cp04

0xe5dc,	// (0x00047b64) midp_keyp_sk_right_pane_g1

0x46ec,	// (0x0003dc74) midp_keyp_rocker_pane_g1

0xe5e5,	// (0x00047b6d) keyp_game_cell_pane_ParamLimits

0xe5e5,	// (0x00047b6d) keyp_game_cell_pane

0xb535,	// (0x00044abd) bg_button_pane_cp02

0xe609,	// (0x00047b91) keyp_game_cell_pane_g1

0x8868,	// (0x00041df0) popup_fep_vkb2_window_ParamLimits

0x8868,	// (0x00041df0) popup_fep_vkb2_window

0xae8d,	// (0x00044415) aid_size_cell_vkb2_ParamLimits

0xae8d,	// (0x00044415) aid_size_cell_vkb2

0xaec1,	// (0x00044449) popup_fep_vkb2_window_g1_ParamLimits

0xaec1,	// (0x00044449) popup_fep_vkb2_window_g1

0xaf11,	// (0x00044499) vkb2_area_bottom_pane_ParamLimits

0xaf11,	// (0x00044499) vkb2_area_bottom_pane

0xaf65,	// (0x000444ed) vkb2_area_keypad_pane_ParamLimits

0xaf65,	// (0x000444ed) vkb2_area_keypad_pane

0xafad,	// (0x00044535) vkb2_area_top_pane_ParamLimits

0xafad,	// (0x00044535) vkb2_area_top_pane

0xb039,	// (0x000445c1) vkb2_top_entry_pane_ParamLimits

0xb039,	// (0x000445c1) vkb2_top_entry_pane

0xb066,	// (0x000445ee) vkb2_top_grid_left_pane_ParamLimits

0xb066,	// (0x000445ee) vkb2_top_grid_left_pane

0xb087,	// (0x0004460f) vkb2_top_grid_right_pane_ParamLimits

0xb087,	// (0x0004460f) vkb2_top_grid_right_pane

0x14c7,	// (0x0003aa4f) vkb2_cell_keypad_pane_ParamLimits

0x14c7,	// (0x0003aa4f) vkb2_cell_keypad_pane

0xb0cf,	// (0x00044657) vkb2_area_bottom_grid_pane_ParamLimits

0xb0cf,	// (0x00044657) vkb2_area_bottom_grid_pane

0xb0f9,	// (0x00044681) vkb2_area_bottom_pane_g1_ParamLimits

0xb0f9,	// (0x00044681) vkb2_area_bottom_pane_g1

0xb11f,	// (0x000446a7) vkb2_area_bottom_pane_g2_ParamLimits

0xb11f,	// (0x000446a7) vkb2_area_bottom_pane_g2

0xb150,	// (0x000446d8) vkb2_area_bottom_pane_g3_ParamLimits

0xb150,	// (0x000446d8) vkb2_area_bottom_pane_g3

0x0002,

0xfd68,	// (0x000492f0) vkb2_area_bottom_pane_g_ParamLimits

0xfd68,	// (0x000492f0) vkb2_area_bottom_pane_g

0x1671,	// (0x0003abf9) vkb2_top_cell_left_pane_ParamLimits

0x1671,	// (0x0003abf9) vkb2_top_cell_left_pane

0xe612,	// (0x00047b9a) vkb2_top_entry_pane_g1_ParamLimits

0xe612,	// (0x00047b9a) vkb2_top_entry_pane_g1

0xe620,	// (0x00047ba8) vkb2_top_entry_pane_t1_ParamLimits

0xe620,	// (0x00047ba8) vkb2_top_entry_pane_t1

0x65d8,	// (0x0003fb60) vkb2_top_entry_pane_t2_ParamLimits

0x65d8,	// (0x0003fb60) vkb2_top_entry_pane_t2

0x660a,	// (0x0003fb92) vkb2_top_entry_pane_t3_ParamLimits

0x660a,	// (0x0003fb92) vkb2_top_entry_pane_t3

0x0002,

0xfd6f,	// (0x000492f7) vkb2_top_entry_pane_t_ParamLimits

0xfd6f,	// (0x000492f7) vkb2_top_entry_pane_t

0xb1ba,	// (0x00044742) vkb2_top_grid_right_pane_g1_ParamLimits

0xb1ba,	// (0x00044742) vkb2_top_grid_right_pane_g1

0x16d4,	// (0x0003ac5c) vkb2_top_grid_right_pane_g2_ParamLimits

0x16d4,	// (0x0003ac5c) vkb2_top_grid_right_pane_g2

0x16ec,	// (0x0003ac74) vkb2_top_grid_right_pane_g3_ParamLimits

0x16ec,	// (0x0003ac74) vkb2_top_grid_right_pane_g3

0xb1d0,	// (0x00044758) vkb2_top_grid_right_pane_g4_ParamLimits

0xb1d0,	// (0x00044758) vkb2_top_grid_right_pane_g4

0x0003,

0xfd76,	// (0x000492fe) vkb2_top_grid_right_pane_g_ParamLimits

0xfd76,	// (0x000492fe) vkb2_top_grid_right_pane_g

0x171a,	// (0x0003aca2) vkb2_top_cell_left_pane_g1

0x173c,	// (0x0003acc4) vkb2_cell_keypad_pane_g1_ParamLimits

0x173c,	// (0x0003acc4) vkb2_cell_keypad_pane_g1

0x662e,	// (0x0003fbb6) vkb2_cell_keypad_pane_t1_ParamLimits

0x662e,	// (0x0003fbb6) vkb2_cell_keypad_pane_t1

0x174a,	// (0x0003acd2) vkb2_cell_bottom_grid_pane_ParamLimits

0x174a,	// (0x0003acd2) vkb2_cell_bottom_grid_pane

0x1783,	// (0x0003ad0b) vkb2_cell_bottom_grid_pane_g1

0xd966,	// (0x00046eee) aid_call2_pane_cp02

0xd96e,	// (0x00046ef6) aid_call_pane_cp02

0xd976,	// (0x00046efe) clock_digital_number_pane_cp10

0xd97e,	// (0x00046f06) clock_digital_number_pane_cp11

0xd986,	// (0x00046f0e) clock_digital_number_pane_cp12

0xd98e,	// (0x00046f16) clock_digital_number_pane_cp13

0xd996,	// (0x00046f1e) clock_digital_separator_pane_cp10

0xbdad,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g1

0xbdad,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g2

0xd99e,	// (0x00046f26) popup_clock_digital_analogue_window_cp2_g3

0xbdad,	// (0x00045335) popup_clock_digital_analogue_window_cp2_g4

0xd99e,	// (0x00046f26) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2b,	// (0x000492b3) popup_clock_digital_analogue_window_cp2_g

0xd9a6,	// (0x00046f2e) popup_clock_digital_analogue_window_cp2_t1

0xd9b4,	// (0x00046f3c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd36,	// (0x000492be) popup_clock_digital_analogue_window_cp2_t

0x46ec,	// (0x0003dc74) clock_digital_number_pane_cp10_g1

0x46ec,	// (0x0003dc74) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x000490a1) clock_digital_number_pane_cp10_g

0x46ec,	// (0x0003dc74) clock_digital_separator_pane_cp10_g1

0x46ec,	// (0x0003dc74) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x000490a1) clock_digital_separator_pane_cp10_g

0xd863,	// (0x00046deb) uniindi_top_pane_g3

0x6066,	// (0x0003f5ee) uniindi_top_pane_g4

0x1552,	// (0x0003aada) vkb2_row_keypad_pane_ParamLimits

0x1552,	// (0x0003aada) vkb2_row_keypad_pane

0x17a3,	// (0x0003ad2b) vkb2_cell_t_keypad_pane_ParamLimits

0x17a3,	// (0x0003ad2b) vkb2_cell_t_keypad_pane

0x17b3,	// (0x0003ad3b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17b3,	// (0x0003ad3b) vkb2_cell_t_keypad_pane_cp08

0x17c6,	// (0x0003ad4e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17c6,	// (0x0003ad4e) vkb2_cell_t_keypad_pane_cp09

0x17da,	// (0x0003ad62) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17da,	// (0x0003ad62) vkb2_cell_t_keypad_pane_cp01

0x17eb,	// (0x0003ad73) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x17eb,	// (0x0003ad73) vkb2_cell_t_keypad_pane_cp02

0x17fc,	// (0x0003ad84) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x17fc,	// (0x0003ad84) vkb2_cell_t_keypad_pane_cp03

0x180d,	// (0x0003ad95) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x180d,	// (0x0003ad95) vkb2_cell_t_keypad_pane_cp04

0x181e,	// (0x0003ada6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x181e,	// (0x0003ada6) vkb2_cell_t_keypad_pane_cp05

0x182f,	// (0x0003adb7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x182f,	// (0x0003adb7) vkb2_cell_t_keypad_pane_cp06

0x1840,	// (0x0003adc8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1840,	// (0x0003adc8) vkb2_cell_t_keypad_pane_cp07

0x1851,	// (0x0003add9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1851,	// (0x0003add9) vkb2_cell_t_keypad_pane_cp10

0x0ebf,	// (0x0003a447) vkb2_cell_t_keypad_pane_g1

0x6645,	// (0x0003fbcd) vkb2_cell_t_keypad_pane_t1

0xdb8c,	// (0x00047114) popup_grid_graphic2_window

0xe659,	// (0x00047be1) aid_size_cell_graphic2_ParamLimits

0xe659,	// (0x00047be1) aid_size_cell_graphic2

0xe697,	// (0x00047c1f) bg_popup_window_pane_cp21_ParamLimits

0xe697,	// (0x00047c1f) bg_popup_window_pane_cp21

0xe6a5,	// (0x00047c2d) graphic2_pages_pane_ParamLimits

0xe6a5,	// (0x00047c2d) graphic2_pages_pane

0xe6fb,	// (0x00047c83) grid_graphic2_control_pane_ParamLimits

0xe6fb,	// (0x00047c83) grid_graphic2_control_pane

0xe743,	// (0x00047ccb) grid_graphic2_pane_ParamLimits

0xe743,	// (0x00047ccb) grid_graphic2_pane

0xe7ca,	// (0x00047d52) cell_graphic2_pane

0xdb8c,	// (0x00047114) main_comp_mode_pane

0x58c6,	// (0x0003ee4e) list_ai3_gene_pane_ParamLimits

0xd634,	// (0x00046bbc) bg_popup_window_pane_cp19_ParamLimits

0x5ca0,	// (0x0003f228) bg_touch_area_indi_pane_ParamLimits

0x5ca0,	// (0x0003f228) bg_touch_area_indi_pane

0x5cb6,	// (0x0003f23e) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cb6,	// (0x0003f23e) bg_touch_area_indi_pane_cp01

0x5ccc,	// (0x0003f254) bg_touch_area_indi_pane_cp02_ParamLimits

0x5ccc,	// (0x0003f254) bg_touch_area_indi_pane_cp02

0x5ce2,	// (0x0003f26a) bg_touch_area_indi_pane_cp03_ParamLimits

0x5ce2,	// (0x0003f26a) bg_touch_area_indi_pane_cp03

0x5cfc,	// (0x0003f284) popup_slider_window_g1_ParamLimits

0x5d18,	// (0x0003f2a0) popup_slider_window_g2_ParamLimits

0x5d34,	// (0x0003f2bc) popup_slider_window_g3_ParamLimits

0xfcc0,	// (0x00049248) popup_slider_window_g_ParamLimits

0x5d9a,	// (0x0003f322) popup_slider_window_t1_ParamLimits

0x5e0e,	// (0x0003f396) small_volume_slider_vertical_pane_ParamLimits

0xe7ca,	// (0x00047d52) cell_graphic2_pane_ParamLimits

0xe825,	// (0x00047dad) bg_button_pane_cp10_ParamLimits

0xe825,	// (0x00047dad) bg_button_pane_cp10

0xe838,	// (0x00047dc0) bg_button_pane_cp11_ParamLimits

0xe838,	// (0x00047dc0) bg_button_pane_cp11

0xe84b,	// (0x00047dd3) graphic2_pages_pane_g1_ParamLimits

0xe84b,	// (0x00047dd3) graphic2_pages_pane_g1

0xe866,	// (0x00047dee) graphic2_pages_pane_g2_ParamLimits

0xe866,	// (0x00047dee) graphic2_pages_pane_g2

0x0001,

0xfd84,	// (0x0004930c) graphic2_pages_pane_g_ParamLimits

0xfd84,	// (0x0004930c) graphic2_pages_pane_g

0xe87e,	// (0x00047e06) graphic2_pages_pane_t1_ParamLimits

0xe87e,	// (0x00047e06) graphic2_pages_pane_t1

0xe896,	// (0x00047e1e) cell_graphic2_control_pane_ParamLimits

0xe896,	// (0x00047e1e) cell_graphic2_control_pane

0xe8c8,	// (0x00047e50) cell_graphic2_pane_g1_ParamLimits

0xe8c8,	// (0x00047e50) cell_graphic2_pane_g1

0xdb52,	// (0x000470da) cell_graphic2_pane_g2_ParamLimits

0xdb52,	// (0x000470da) cell_graphic2_pane_g2

0xe265,	// (0x000477ed) cell_graphic2_pane_g3_ParamLimits

0xe265,	// (0x000477ed) cell_graphic2_pane_g3

0xdb5f,	// (0x000470e7) cell_graphic2_pane_g4_ParamLimits

0xdb5f,	// (0x000470e7) cell_graphic2_pane_g4

0xe8d5,	// (0x00047e5d) cell_graphic2_pane_g5_ParamLimits

0xe8d5,	// (0x00047e5d) cell_graphic2_pane_g5

0x0004,

0xfd89,	// (0x00049311) cell_graphic2_pane_g_ParamLimits

0xfd89,	// (0x00049311) cell_graphic2_pane_g

0xe8f2,	// (0x00047e7a) cell_graphic2_pane_t1_ParamLimits

0xe8f2,	// (0x00047e7a) cell_graphic2_pane_t1

0x2dca,	// (0x0003c352) grid_highlight_pane_cp11_ParamLimits

0x2dca,	// (0x0003c352) grid_highlight_pane_cp11

0xb6cf,	// (0x00044c57) bg_button_pane_cp05

0xe93c,	// (0x00047ec4) cell_graphic2_control_pane_g1

0x46ec,	// (0x0003dc74) bg_touch_area_indi_pane_g1

0x691e,	// (0x0003fea6) aid_cmod_rocker_key_size

0x6928,	// (0x0003feb0) aid_cmode_itu_key_size

0x6932,	// (0x0003feba) main_cmode_video_pane

0x693c,	// (0x0003fec4) main_comp_mode_itu_pane

0x6948,	// (0x0003fed0) main_comp_mode_rocker_pane

0x6954,	// (0x0003fedc) cell_cmode_rocker_pane_ParamLimits

0x6954,	// (0x0003fedc) cell_cmode_rocker_pane

0x6966,	// (0x0003feee) cell_cmode_itu_pane_ParamLimits

0x6966,	// (0x0003feee) cell_cmode_itu_pane

0xb95b,	// (0x00044ee3) bg_button_pane_cp06_ParamLimits

0xb95b,	// (0x00044ee3) bg_button_pane_cp06

0x495c,	// (0x0003dee4) cell_cmode_rocker_pane_g1_ParamLimits

0x495c,	// (0x0003dee4) cell_cmode_rocker_pane_g1

0x5eb2,	// (0x0003f43a) cell_cmode_rocker_pane_g2_ParamLimits

0x5eb2,	// (0x0003f43a) cell_cmode_rocker_pane_g2

0x0001,

0xfd99,	// (0x00049321) cell_cmode_rocker_pane_g_ParamLimits

0xfd99,	// (0x00049321) cell_cmode_rocker_pane_g

0xb535,	// (0x00044abd) bg_button_pane_cp07

0x697b,	// (0x0003ff03) cell_cmode_itu_pane_g1

0x6984,	// (0x0003ff0c) cell_cmode_itu_pane_t1

0x6992,	// (0x0003ff1a) cell_cmode_itu_pane_t2

0x0001,

0xfd9e,	// (0x00049326) cell_cmode_itu_pane_t

0x60d8,	// (0x0003f660) aid_touch_ctrl_left

0x60e0,	// (0x0003f668) aid_touch_ctrl_right

0xb535,	// (0x00044abd) compa_mode_pane

0xe962,	// (0x00047eea) aid_cmod_rocker_key_size_cp

0xe96c,	// (0x00047ef4) aid_cmode_itu_key_size_cp

0x69b4,	// (0x0003ff3c) compa_mode_pane_g1

0x69bc,	// (0x0003ff44) compa_mode_pane_g2

0x69c4,	// (0x0003ff4c) compa_mode_pane_g3

0x0002,

0xfda3,	// (0x0004932b) compa_mode_pane_g

0xe976,	// (0x00047efe) main_comp_mode_itu_pane_cp

0xe97e,	// (0x00047f06) main_comp_mode_rocker_pane_cp

0xe986,	// (0x00047f0e) cell_cmode_itu_pane_cp_ParamLimits

0xe986,	// (0x00047f0e) cell_cmode_itu_pane_cp

0xe99b,	// (0x00047f23) cell_cmode_rocker_pane_cp_ParamLimits

0xe99b,	// (0x00047f23) cell_cmode_rocker_pane_cp

0xb95b,	// (0x00044ee3) bg_button_pane_cp06_cp_ParamLimits

0xb95b,	// (0x00044ee3) bg_button_pane_cp06_cp

0x495c,	// (0x0003dee4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x495c,	// (0x0003dee4) cell_cmode_rocker_pane_g1_cp

0x46ec,	// (0x0003dc74) cell_cmode_rocker_pane_g2_cp

0xb535,	// (0x00044abd) bg_button_pane_cp07_cp

0xe9ad,	// (0x00047f35) cell_cmode_itu_pane_g1_cp

0xe9b6,	// (0x00047f3e) cell_cmode_itu_pane_t1_cp

0xe9b6,	// (0x00047f3e) cell_cmode_itu_pane_t2_cp

0xc9a2,	// (0x00045f2a) settings_code_pane_cp2

0xb5a5,	// (0x00044b2d) bg_popup_window_pane_cp3_ParamLimits

0xb7e8,	// (0x00044d70) heading_pane_cp3_ParamLimits

0xb7f7,	// (0x00044d7f) listscroll_popup_graphic_pane_ParamLimits

0x0c68,	// (0x0003a1f0) fep_hwr_aid_pane_ParamLimits

0x1219,	// (0x0003a7a1) aid_touch_sctrl_top_ParamLimits

0x1234,	// (0x0003a7bc) sctrl_sk_top_pane_g1_ParamLimits

0x0ebf,	// (0x0003a447) sctrl_sk_top_pane_g2_ParamLimits

0xfcd9,	// (0x00049261) sctrl_sk_top_pane_g_ParamLimits

0x1241,	// (0x0003a7c9) sctrl_sk_top_pane_t1_ParamLimits

0x1219,	// (0x0003a7a1) aid_touch_sctrl_bottom_ParamLimits

0x1241,	// (0x0003a7c9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd82f,	// (0x00046db7) aid_area_touch_clock

0xaff9,	// (0x00044581) aid_vkb2_area_top_pane_cell_ParamLimits

0xaff9,	// (0x00044581) aid_vkb2_area_top_pane_cell

0xb0a8,	// (0x00044630) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb0a8,	// (0x00044630) aid_vkb2_area_bottom_pane_cell

0x6590,	// (0x0003fb18) popup_char_count_window

0x6a1a,	// (0x0003ffa2) popup_char_count_window_g1

0x6a23,	// (0x0003ffab) popup_char_count_window_g2

0x6a2c,	// (0x0003ffb4) popup_char_count_window_g3

0x0002,

0xfdaa,	// (0x00049332) popup_char_count_window_g

0x6a35,	// (0x0003ffbd) popup_char_count_window_t1

0x12e8,	// (0x0003a870) popup_fep_char_preview_window_ParamLimits

0x12e8,	// (0x0003a870) popup_fep_char_preview_window

0xb019,	// (0x000445a1) vkb2_top_candi_pane_ParamLimits

0xb019,	// (0x000445a1) vkb2_top_candi_pane

0xe9c4,	// (0x00047f4c) cell_vkb2_top_candi_pane_ParamLimits

0xe9c4,	// (0x00047f4c) cell_vkb2_top_candi_pane

0x1866,	// (0x0003adee) bg_popup_fep_char_preview_window_ParamLimits

0x1866,	// (0x0003adee) bg_popup_fep_char_preview_window

0x1874,	// (0x0003adfc) popup_fep_char_preview_window_t1_ParamLimits

0x1874,	// (0x0003adfc) popup_fep_char_preview_window_t1

0x6a8d,	// (0x00040015) bg_popup_fep_char_preview_window_g1

0x6a95,	// (0x0004001d) bg_popup_fep_char_preview_window_g2

0x6a9d,	// (0x00040025) bg_popup_fep_char_preview_window_g3

0x6aa5,	// (0x0004002d) bg_popup_fep_char_preview_window_g4

0x6aad,	// (0x00040035) bg_popup_fep_char_preview_window_g5

0x6ab5,	// (0x0004003d) bg_popup_fep_char_preview_window_g6

0x6abd,	// (0x00040045) bg_popup_fep_char_preview_window_g7

0x6ac5,	// (0x0004004d) bg_popup_fep_char_preview_window_g8

0x6acd,	// (0x00040055) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb1,	// (0x00049339) bg_popup_fep_char_preview_window_g

0x0ebf,	// (0x0003a447) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ebf,	// (0x0003a447) cell_vkb2_top_candi_pane_g1

0x0ecd,	// (0x0003a455) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ecd,	// (0x0003a455) cell_vkb2_top_candi_pane_g2

0x4c73,	// (0x0003e1fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c73,	// (0x0003e1fb) cell_vkb2_top_candi_pane_g3

0x18b6,	// (0x0003ae3e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18b6,	// (0x0003ae3e) cell_vkb2_top_candi_pane_g4

0x4e5d,	// (0x0003e3e5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e5d,	// (0x0003e3e5) cell_vkb2_top_candi_pane_g5

0x18d7,	// (0x0003ae5f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18d7,	// (0x0003ae5f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0004934e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0004934e) cell_vkb2_top_candi_pane_g

0x18e5,	// (0x0003ae6d) cell_vkb2_top_candi_pane_t1

0xaa6d,	// (0x00043ff5) aid_size_touch_slider_mark_ParamLimits

0xaa6d,	// (0x00043ff5) aid_size_touch_slider_mark

0xe6e1,	// (0x00047c69) grid_graphic2_catg_pane_ParamLimits

0xe6e1,	// (0x00047c69) grid_graphic2_catg_pane

0xe79d,	// (0x00047d25) popup_grid_graphic2_window_t1_ParamLimits

0xe79d,	// (0x00047d25) popup_grid_graphic2_window_t1

0xe7b3,	// (0x00047d3b) popup_grid_graphic2_window_t2_ParamLimits

0xe7b3,	// (0x00047d3b) popup_grid_graphic2_window_t2

0x0001,

0xfd7f,	// (0x00049307) popup_grid_graphic2_window_t_ParamLimits

0xfd7f,	// (0x00049307) popup_grid_graphic2_window_t

0xb6cf,	// (0x00044c57) bg_button_pane_cp05_ParamLimits

0xe93c,	// (0x00047ec4) cell_graphic2_control_pane_g1_ParamLimits

0xea24,	// (0x00047fac) cell_graphic2_catg_pane_ParamLimits

0xea24,	// (0x00047fac) cell_graphic2_catg_pane

0xb535,	// (0x00044abd) bg_button_pane_cp12

0xea36,	// (0x00047fbe) cell_graphic2_catg_pane_g1

0x5fec,	// (0x0003f574) cell_tb_ext_pane_t1_ParamLimits

0x1691,	// (0x0003ac19) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1691,	// (0x0003ac19) vkb2_top_cell_right_narrow_pane

0x16a9,	// (0x0003ac31) vkb2_top_cell_right_wide_pane_ParamLimits

0x16a9,	// (0x0003ac31) vkb2_top_cell_right_wide_pane

0x0c5a,	// (0x0003a1e2) bg_vkb2_func_pane_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_vkb2_func_pane

0x171a,	// (0x0003aca2) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp03

0x1783,	// (0x0003ad0b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x20d0,	// (0x0003b658) bg_vkb2_func_pane_g1

0x20d8,	// (0x0003b660) bg_vkb2_func_pane_g2

0x20e8,	// (0x0003b670) bg_vkb2_func_pane_g3

0x20e0,	// (0x0003b668) bg_vkb2_func_pane_g4

0x20f0,	// (0x0003b678) bg_vkb2_func_pane_g5

0x20f8,	// (0x0003b680) bg_vkb2_func_pane_g6

0x2100,	// (0x0003b688) bg_vkb2_func_pane_g7

0x2108,	// (0x0003b690) bg_vkb2_func_pane_g8

0x20c8,	// (0x0003b650) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0004935b) bg_vkb2_func_pane_g

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp01

0x171a,	// (0x0003aca2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x171a,	// (0x0003aca2) vkb2_top_cell_right_wide_pane_g1

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c5a,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp02

0x1904,	// (0x0003ae8c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1904,	// (0x0003ae8c) vkb2_top_cell_right_narrow_pane_g1

0xd576,	// (0x00046afe) aid_touch_area_decrease_ParamLimits

0xd576,	// (0x00046afe) aid_touch_area_decrease

0xd5b0,	// (0x00046b38) aid_touch_area_increase_ParamLimits

0xd5b0,	// (0x00046b38) aid_touch_area_increase

0xd5d8,	// (0x00046b60) aid_touch_area_mute_ParamLimits

0xd5d8,	// (0x00046b60) aid_touch_area_mute

0xd600,	// (0x00046b88) aid_touch_area_slider_ParamLimits

0xd600,	// (0x00046b88) aid_touch_area_slider

0xd640,	// (0x00046bc8) popup_slider_window_g4_ParamLimits

0xd640,	// (0x00046bc8) popup_slider_window_g4

0xd65a,	// (0x00046be2) popup_slider_window_g5_ParamLimits

0xd65a,	// (0x00046be2) popup_slider_window_g5

0xd680,	// (0x00046c08) popup_slider_window_g6_ParamLimits

0xd680,	// (0x00046c08) popup_slider_window_g6

0x5dc8,	// (0x0003f350) popup_slider_window_t2_ParamLimits

0x5dc8,	// (0x0003f350) popup_slider_window_t2

0x0001,

0xfccd,	// (0x00049255) popup_slider_window_t_ParamLimits

0xfccd,	// (0x00049255) popup_slider_window_t

0xd696,	// (0x00046c1e) slider_pane_ParamLimits

0xd696,	// (0x00046c1e) slider_pane

0x6af0,	// (0x00040078) slider_pane_g1_ParamLimits

0x6af0,	// (0x00040078) slider_pane_g1

0x6b04,	// (0x0004008c) slider_pane_g2_ParamLimits

0x6b04,	// (0x0004008c) slider_pane_g2

0x6b1a,	// (0x000400a2) slider_pane_g3_ParamLimits

0x6b1a,	// (0x000400a2) slider_pane_g3

0x0003,

0xfde6,	// (0x0004936e) slider_pane_g_ParamLimits

0xfde6,	// (0x0004936e) slider_pane_g

0xa23f,	// (0x000437c7) popup_tb_float_extension_window_ParamLimits

0xa23f,	// (0x000437c7) popup_tb_float_extension_window

0x6b46,	// (0x000400ce) aid_size_cell_tb_float_ext

0xb535,	// (0x00044abd) bg_popup_sub_window_cp28

0xea3f,	// (0x00047fc7) grid_tb_float_ext_pane

0xea49,	// (0x00047fd1) cell_tb_float_ext_pane_ParamLimits

0xea49,	// (0x00047fd1) cell_tb_float_ext_pane

0xea63,	// (0x00047feb) cell_tb_float_ext_pane_g1

0xea6c,	// (0x00047ff4) grid_highlight_pane_cp12

0xab9f,	// (0x00044127) cell_last_hwr_side_pane_ParamLimits

0xab9f,	// (0x00044127) cell_last_hwr_side_pane

0x46ec,	// (0x0003dc74) cell_last_hwr_side_pane_g1

0x6b88,	// (0x00040110) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x00049377) cell_last_hwr_side_pane_g

0xb185,	// (0x0004470d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb185,	// (0x0004470d) vkb2_area_bottom_space_btn_pane

0x0ebf,	// (0x0003a447) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6645,	// (0x0003fbcd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x18e5,	// (0x0003ae6d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1924,	// (0x0003aeac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1924,	// (0x0003aeac) vkb2_area_bottom_space_btn_pane_g1

0x195e,	// (0x0003aee6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x195e,	// (0x0003aee6) vkb2_area_bottom_space_btn_pane_g2

0x1994,	// (0x0003af1c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1994,	// (0x0003af1c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0004937c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0004937c) vkb2_area_bottom_space_btn_pane_g

0x0d1d,	// (0x0003a2a5) cel_fep_hwr_func_pane_ParamLimits

0x0d1d,	// (0x0003a2a5) cel_fep_hwr_func_pane

0xab74,	// (0x000440fc) cell_hwr_side_button_pane_ParamLimits

0xab74,	// (0x000440fc) cell_hwr_side_button_pane

0xd82f,	// (0x00046db7) aid_area_touch_clock_ParamLimits

0xb6cf,	// (0x00044c57) bg_uniindi_top_pane_ParamLimits

0xd841,	// (0x00046dc9) uniindi_top_pane_g1_ParamLimits

0xd857,	// (0x00046ddf) uniindi_top_pane_g2_ParamLimits

0xd863,	// (0x00046deb) uniindi_top_pane_g3_ParamLimits

0x6066,	// (0x0003f5ee) uniindi_top_pane_g4_ParamLimits

0xfd05,	// (0x0004928d) uniindi_top_pane_g_ParamLimits

0xd874,	// (0x00046dfc) uniindi_top_pane_t1_ParamLimits

0xb6cf,	// (0x00044c57) bg_vkb2_func_pane_cp01_ParamLimits

0xb6cf,	// (0x00044c57) bg_vkb2_func_pane_cp01

0x6b91,	// (0x00040119) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b91,	// (0x00040119) cel_fep_hwr_func_pane_g1

0xb6cf,	// (0x00044c57) bg_vkb2_func_pane_cp02_ParamLimits

0xb6cf,	// (0x00044c57) bg_vkb2_func_pane_cp02

0x6b91,	// (0x00040119) cell_hwr_side_button_pane_g1_ParamLimits

0x6b91,	// (0x00040119) cell_hwr_side_button_pane_g1

0x1f4c,	// (0x0003b4d4) status_pane_g4_ParamLimits

0x1f4c,	// (0x0003b4d4) status_pane_g4

0x1f66,	// (0x0003b4ee) status_pane_t1

0x442e,	// (0x0003d9b6) form2_midp_gauge_slider_cont_pane

0x4436,	// (0x0003d9be) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcd25,	// (0x000462ad) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcd37,	// (0x000462bf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x00049054) form2_midp_gauge_slider_pane_t_ParamLimits

0x446c,	// (0x0003d9f4) form2_midp_slider_pane_ParamLimits

0x12b0,	// (0x0003a838) aid_size_cell_func_vkb2_ParamLimits

0x12b0,	// (0x0003a838) aid_size_cell_func_vkb2

0x6b32,	// (0x000400ba) slider_pane_g4_ParamLimits

0x6b32,	// (0x000400ba) slider_pane_g4

0xb1ee,	// (0x00044776) form2_midp_gauge_slider_pane_t2_cp01

0xb1fc,	// (0x00044784) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb1fc,	// (0x00044784) form2_midp_gauge_slider_pane_t3_cp01

0x1a09,	// (0x0003af91) form2_midp_slider_pane_cp01

0xb535,	// (0x00044abd) navi_smil_pane

0x6bca,	// (0x00040152) navi_smil_pane_g1

0x6bd2,	// (0x0004015a) navi_smil_pane_t1

0x6b9f,	// (0x00040127) form2_midp_slider_pane_g1

0x6ba8,	// (0x00040130) form2_midp_slider_pane_g2

0x6bb0,	// (0x00040138) form2_midp_slider_pane_g3

0x6b9f,	// (0x00040127) form2_midp_slider_pane_g4

0xea75,	// (0x00047ffd) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x00049385) form2_midp_slider_pane_g

0x19ce,	// (0x0003af56) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19ce,	// (0x0003af56) vkb2_area_bottom_space_btn_pane_g4

0xa477,	// (0x000439ff) lc0_navi_pane_ParamLimits

0xa477,	// (0x000439ff) lc0_navi_pane

0xa4e1,	// (0x00043a69) lc0_stat_indi_pane_ParamLimits

0xa4e1,	// (0x00043a69) lc0_stat_indi_pane

0xa4f6,	// (0x00043a7e) ls0_title_pane_ParamLimits

0xa4f6,	// (0x00043a7e) ls0_title_pane

0xb95b,	// (0x00044ee3) bg_popup_sub_pane_cp14_ParamLimits

0xd816,	// (0x00046d9e) list_uniindi_pane_ParamLimits

0xd822,	// (0x00046daa) uniindi_top_pane_ParamLimits

0x60b0,	// (0x0003f638) list_single_uniindi_pane_g1_ParamLimits

0x60c3,	// (0x0003f64b) list_single_uniindi_pane_t1_ParamLimits

0xb219,	// (0x000447a1) lc0_stat_clock_pane_ParamLimits

0xb219,	// (0x000447a1) lc0_stat_clock_pane

0xea80,	// (0x00048008) lc0_stat_indi_pane_g1_ParamLimits

0xea80,	// (0x00048008) lc0_stat_indi_pane_g1

0xea8d,	// (0x00048015) lc0_stat_indi_pane_g2_ParamLimits

0xea8d,	// (0x00048015) lc0_stat_indi_pane_g2

0x0001,

0xfe08,	// (0x00049390) lc0_stat_indi_pane_g_ParamLimits

0xfe08,	// (0x00049390) lc0_stat_indi_pane_g

0xb229,	// (0x000447b1) lc0_uni_indicator_pane_ParamLimits

0xb229,	// (0x000447b1) lc0_uni_indicator_pane

0xea9a,	// (0x00048022) ls0_title_pane_g1_ParamLimits

0xea9a,	// (0x00048022) ls0_title_pane_g1

0xeaae,	// (0x00048036) ls0_title_pane_t1_ParamLimits

0xeaae,	// (0x00048036) ls0_title_pane_t1

0xb239,	// (0x000447c1) lc0_uni_indicator_pane_g1_ParamLimits

0xb239,	// (0x000447c1) lc0_uni_indicator_pane_g1

0x6c44,	// (0x000401cc) lc0_stat_clock_pane_t1

0xdb8c,	// (0x00047114) main_ai5_pane

0x6c5a,	// (0x000401e2) ai5_sk_pane_ParamLimits

0x6c5a,	// (0x000401e2) ai5_sk_pane

0xeae6,	// (0x0004806e) cell_ai5_widget_pane_ParamLimits

0xeae6,	// (0x0004806e) cell_ai5_widget_pane

0x6d27,	// (0x000402af) aid_size_cell_widget_grid

0x6d35,	// (0x000402bd) bg_ai5_widget_pane_ParamLimits

0x6d35,	// (0x000402bd) bg_ai5_widget_pane

0x6db3,	// (0x0004033b) cell_ai5_widget_pane_g2

0x6dc7,	// (0x0004034f) cell_ai5_widget_pane_g3

0x6de1,	// (0x00040369) cell_ai5_widget_pane_g4

0x6df1,	// (0x00040379) cell_ai5_widget_pane_g5

0x6e01,	// (0x00040389) cell_ai5_widget_pane_g6

0x6e0d,	// (0x00040395) cell_ai5_widget_pane_g7

0x6e79,	// (0x00040401) cell_ai5_widget_pane_t1_ParamLimits

0x6e79,	// (0x00040401) cell_ai5_widget_pane_t1

0x6e96,	// (0x0004041e) cell_ai5_widget_pane_t2_ParamLimits

0x6e96,	// (0x0004041e) cell_ai5_widget_pane_t2

0x6eae,	// (0x00040436) cell_ai5_widget_pane_t3_ParamLimits

0x6eae,	// (0x00040436) cell_ai5_widget_pane_t3

0x6ec6,	// (0x0004044e) cell_ai5_widget_pane_t4_ParamLimits

0x6ec6,	// (0x0004044e) cell_ai5_widget_pane_t4

0xeb52,	// (0x000480da) cell_ai5_widget_pane_t5_ParamLimits

0xeb52,	// (0x000480da) cell_ai5_widget_pane_t5

0x6f0b,	// (0x00040493) cell_ai5_widget_pane_t6_ParamLimits

0x6f0b,	// (0x00040493) cell_ai5_widget_pane_t6

0x6f1d,	// (0x000404a5) cell_ai5_widget_pane_t7_ParamLimits

0x6f1d,	// (0x000404a5) cell_ai5_widget_pane_t7

0x6f3c,	// (0x000404c4) cell_ai5_widget_pane_t8_ParamLimits

0x6f3c,	// (0x000404c4) cell_ai5_widget_pane_t8

0x000b,

0xfe28,	// (0x000493b0) cell_ai5_widget_pane_t_ParamLimits

0xfe28,	// (0x000493b0) cell_ai5_widget_pane_t

0x6fc0,	// (0x00040548) grid_ai5_widget_pane

0xb95b,	// (0x00044ee3) highlight_cell_ai5_widget_pane_ParamLimits

0xb95b,	// (0x00044ee3) highlight_cell_ai5_widget_pane

0xeb72,	// (0x000480fa) ai5_sk_left_pane

0xeb7c,	// (0x00048104) ai5_sk_middle_pane

0xeb86,	// (0x0004810e) ai5_sk_right_pane

0x6ff2,	// (0x0004057a) bg_ai5_widget_pane_g1_ParamLimits

0x6ff2,	// (0x0004057a) bg_ai5_widget_pane_g1

0x6ffe,	// (0x00040586) bg_ai5_widget_pane_g2_ParamLimits

0x6ffe,	// (0x00040586) bg_ai5_widget_pane_g2

0x700a,	// (0x00040592) bg_ai5_widget_pane_g3_ParamLimits

0x700a,	// (0x00040592) bg_ai5_widget_pane_g3

0x7016,	// (0x0004059e) bg_ai5_widget_pane_g4_ParamLimits

0x7016,	// (0x0004059e) bg_ai5_widget_pane_g4

0x7022,	// (0x000405aa) bg_ai5_widget_pane_g5_ParamLimits

0x7022,	// (0x000405aa) bg_ai5_widget_pane_g5

0x702e,	// (0x000405b6) bg_ai5_widget_pane_g6_ParamLimits

0x702e,	// (0x000405b6) bg_ai5_widget_pane_g6

0x703a,	// (0x000405c2) bg_ai5_widget_pane_g7_ParamLimits

0x703a,	// (0x000405c2) bg_ai5_widget_pane_g7

0x7046,	// (0x000405ce) bg_ai5_widget_pane_g8_ParamLimits

0x7046,	// (0x000405ce) bg_ai5_widget_pane_g8

0x7052,	// (0x000405da) bg_ai5_widget_pane_g9_ParamLimits

0x7052,	// (0x000405da) bg_ai5_widget_pane_g9

0x0008,

0xfe41,	// (0x000493c9) bg_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x000493c9) bg_ai5_widget_pane_g

0x7084,	// (0x0004060c) cell_shortcut_ai5_widget_pane_ParamLimits

0x7084,	// (0x0004060c) cell_shortcut_ai5_widget_pane

0xc21b,	// (0x000457a3) bg_cell_shortcut_ai5_widget_pane

0x7095,	// (0x0004061d) cell_grid_ai5_widget_pane_g1

0xc21b,	// (0x000457a3) highlight_cell_shortcut_ai5_widget_pane

0x20d0,	// (0x0003b658) ai5_sk_left_pane_g1

0x709e,	// (0x00040626) ai5_sk_left_pane_g2

0x70a6,	// (0x0004062e) ai5_sk_left_pane_g3

0x70ae,	// (0x00040636) ai5_sk_left_pane_g4

0x0003,

0xfe54,	// (0x000493dc) ai5_sk_left_pane_g

0x70b6,	// (0x0004063e) ai5_sk_left_pane_t1

0x20d8,	// (0x0003b660) ai5_sk_right_pane_g1

0x70c4,	// (0x0004064c) ai5_sk_right_pane_g2

0x70cc,	// (0x00040654) ai5_sk_right_pane_g3

0x70d4,	// (0x0004065c) ai5_sk_right_pane_g4

0x0003,

0xfe5d,	// (0x000493e5) ai5_sk_right_pane_g

0x70dc,	// (0x00040664) ai5_sk_right_pane_t1

0x20d8,	// (0x0003b660) ai5_sk_middle_pane_g1

0x20d0,	// (0x0003b658) ai5_sk_middle_pane_g2

0x20f0,	// (0x0003b678) ai5_sk_middle_pane_g3

0x70cc,	// (0x00040654) ai5_sk_middle_pane_g4

0x70a6,	// (0x0004062e) ai5_sk_middle_pane_g5

0x70ea,	// (0x00040672) ai5_sk_middle_pane_g6

0xeb90,	// (0x00048118) ai5_sk_middle_pane_g7

0x0006,

0xfe66,	// (0x000493ee) ai5_sk_middle_pane_g

0xa363,	// (0x000438eb) aid_touch_area_size_lc0_ParamLimits

0xa363,	// (0x000438eb) aid_touch_area_size_lc0

0x0eee,	// (0x0003a476) cell_hwr_candidate_pane_t1_ParamLimits

0x03b1,	// (0x00039939) aid_touch_navi_pane

0xa5ef,	// (0x00043b77) status_dt_navi_pane_ParamLimits

0xa5ef,	// (0x00043b77) status_dt_navi_pane

0xa607,	// (0x00043b8f) status_dt_sta_pane_ParamLimits

0xa607,	// (0x00043b8f) status_dt_sta_pane

0xeb98,	// (0x00048120) dt_sta_controll_pane

0xeba5,	// (0x0004812d) dt_sta_indi_pane

0xebb2,	// (0x0004813a) dt_sta_title_pane

0xb6cf,	// (0x00044c57) bg_dt_sta_indi_pane_ParamLimits

0xb6cf,	// (0x00044c57) bg_dt_sta_indi_pane

0xebc4,	// (0x0004814c) dt_sta_battery_pane

0xebcc,	// (0x00048154) dt_sta_indi_pane_g1

0x713c,	// (0x000406c4) dt_sta_indi_pane_g2

0x7145,	// (0x000406cd) dt_sta_indi_pane_g3

0x0002,

0xfe75,	// (0x000493fd) dt_sta_indi_pane_g

0x714e,	// (0x000406d6) dt_sta_signal_pane

0xb95b,	// (0x00044ee3) bg_dt_sta_title_pane_ParamLimits

0xb95b,	// (0x00044ee3) bg_dt_sta_title_pane

0x2f2a,	// (0x0003c4b2) dt_sta_title_pane_g1

0xebd5,	// (0x0004815d) dt_sta_title_pane_t1_ParamLimits

0xebd5,	// (0x0004815d) dt_sta_title_pane_t1

0xb535,	// (0x00044abd) bg_dt_sta_control_pane

0xebea,	// (0x00048172) dt_sta_controll_pane_g1

0xebf3,	// (0x0004817b) bg_dt_sta_title_pane_g1

0xebfc,	// (0x00048184) bg_dt_sta_title_pane_g2

0xec05,	// (0x0004818d) bg_dt_sta_title_pane_g3

0x0002,

0xfe7c,	// (0x00049404) bg_dt_sta_title_pane_g

0x46ec,	// (0x0003dc74) bg_dt_sta_indi_pane_g1

0x7190,	// (0x00040718) dt_sta_signal_pane_g1

0x7198,	// (0x00040720) dt_sta_signal_pane_g2

0x0001,

0xfe83,	// (0x0004940b) dt_sta_signal_pane_g

0x71a0,	// (0x00040728) dt_sta_battery_pane_g1

0x71a9,	// (0x00040731) dt_sta_battery_pane_t1

0x46ec,	// (0x0003dc74) bg_dt_sta_control_pane_g1

0xbe30,	// (0x000453b8) fep_china_uni_eep_pane

0xbe38,	// (0x000453c0) fep_china_uni_entry_pane_ParamLimits

0xbe48,	// (0x000453d0) popup_fep_china_uni_window_g1_ParamLimits

0xbe58,	// (0x000453e0) popup_fep_china_uni_window_g2_ParamLimits

0xbe58,	// (0x000453e0) popup_fep_china_uni_window_g2

0x0001,

0xf6e2,	// (0x00048c6a) popup_fep_china_uni_window_g_ParamLimits

0xf6e2,	// (0x00048c6a) popup_fep_china_uni_window_g

0x71b8,	// (0x00040740) fep_china_uni_eep_pane_g1

0x71c0,	// (0x00040748) fep_china_uni_eep_pane_t1

0x6bc1,	// (0x00040149) aid_touch_area_size_smil_player

0x0507,	// (0x00039a8f) lc0_clock_pane

0x1f5a,	// (0x0003b4e2) status_pane_g5_ParamLimits

0x1f5a,	// (0x0003b4e2) status_pane_g5

0x9d9b,	// (0x00043323) popup_keymap_window

0x1f18,	// (0x0003b4a0) status_icon_pane

0x6dc7,	// (0x0004034f) cell_ai5_widget_pane_g3_ParamLimits

0x6de1,	// (0x00040369) cell_ai5_widget_pane_g4_ParamLimits

0x6df1,	// (0x00040379) cell_ai5_widget_pane_g5_ParamLimits

0x6e19,	// (0x000403a1) cell_ai5_widget_pane_g8_ParamLimits

0x6e19,	// (0x000403a1) cell_ai5_widget_pane_g8

0x6e2d,	// (0x000403b5) cell_ai5_widget_pane_g9_ParamLimits

0x6e2d,	// (0x000403b5) cell_ai5_widget_pane_g9

0x6e41,	// (0x000403c9) cell_ai5_widget_pane_g10_ParamLimits

0x6e41,	// (0x000403c9) cell_ai5_widget_pane_g10

0x71cf,	// (0x00040757) status_icon_pane_g1

0xb535,	// (0x00044abd) bg_popup_sub_pane_cp13

0x71d7,	// (0x0004075f) popup_keymap_window_t1

0x9a57,	// (0x00042fdf) control_pane_g6_ParamLimits

0x9a57,	// (0x00042fdf) control_pane_g6

0x9a64,	// (0x00042fec) control_pane_g7_ParamLimits

0x9a64,	// (0x00042fec) control_pane_g7

0x9a71,	// (0x00042ff9) control_pane_g8_ParamLimits

0x9a71,	// (0x00042ff9) control_pane_g8

0xeb98,	// (0x00048120) dt_sta_controll_pane_ParamLimits

0xeba5,	// (0x0004812d) dt_sta_indi_pane_ParamLimits

0xebb2,	// (0x0004813a) dt_sta_title_pane_ParamLimits

0xb8a6,	// (0x00044e2e) aid_size_touch_scroll_bar_cale

0x885c,	// (0x00041de4) popup_discreet_window_ParamLimits

0x885c,	// (0x00041de4) popup_discreet_window

0x88ae,	// (0x00041e36) popup_sk_window

0x276e,	// (0x0003bcf6) bg_popup_sub_pane_cp28_ParamLimits

0x276e,	// (0x0003bcf6) bg_popup_sub_pane_cp28

0x71e5,	// (0x0004076d) popup_discreet_window_g1_ParamLimits

0x71e5,	// (0x0004076d) popup_discreet_window_g1

0x7205,	// (0x0004078d) popup_discreet_window_t1_ParamLimits

0x7205,	// (0x0004078d) popup_discreet_window_t1

0x7223,	// (0x000407ab) popup_discreet_window_t2_ParamLimits

0x7223,	// (0x000407ab) popup_discreet_window_t2

0x0002,

0xfe88,	// (0x00049410) popup_discreet_window_t_ParamLimits

0xfe88,	// (0x00049410) popup_discreet_window_t

0x1a40,	// (0x0003afc8) popup_sk_window_g1

0x1a4a,	// (0x0003afd2) popup_sk_window_g2

0x0001,

0xfe8f,	// (0x00049417) popup_sk_window_g

0xb264,	// (0x000447ec) popup_sk_window_t1

0xb272,	// (0x000447fa) popup_sk_window_t1_copy1

0x6db3,	// (0x0004033b) cell_ai5_widget_pane_g2_ParamLimits

0x6f4e,	// (0x000404d6) cell_ai5_widget_pane_t9_ParamLimits

0x6f4e,	// (0x000404d6) cell_ai5_widget_pane_t9

0xb535,	// (0x00044abd) main_fep_fshwr2_pane

0xb280,	// (0x00044808) aid_fshwr2_btn_pane

0xb294,	// (0x0004481c) aid_fshwr2_syb_pane

0xb2a8,	// (0x00044830) aid_fshwr2_txt_pane

0xb2b8,	// (0x00044840) fshwr2_func_candi_pane

0xb2d8,	// (0x00044860) fshwr2_hwr_syb_pane

0xb2fa,	// (0x00044882) fshwr2_icf_pane

0xdb8c,	// (0x00047114) fshwr2_icf_bg_pane

0x1b12,	// (0x0003b09a) fshwr2_icf_pane_t1_ParamLimits

0x1b12,	// (0x0003b09a) fshwr2_icf_pane_t1

0xbdad,	// (0x00045335) fshwr2_func_candi_pane_g1

0xec0e,	// (0x00048196) fshwr2_func_candi_row_pane_ParamLimits

0xec0e,	// (0x00048196) fshwr2_func_candi_row_pane

0xb32a,	// (0x000448b2) cell_fshwr2_syb_pane_ParamLimits

0xb32a,	// (0x000448b2) cell_fshwr2_syb_pane

0x1b4e,	// (0x0003b0d6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b4e,	// (0x0003b0d6) fshwr2_hwr_syb_pane_g1

0xdb8c,	// (0x00047114) bg_popup_call_pane_cp01

0xb350,	// (0x000448d8) fshwr2_func_candi_cell_pane_ParamLimits

0xb350,	// (0x000448d8) fshwr2_func_candi_cell_pane

0x2557,	// (0x0003badf) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2557,	// (0x0003badf) fshwr2_func_candi_cell_bg_pane

0xb39b,	// (0x00044923) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb39b,	// (0x00044923) fshwr2_func_candi_cell_pane_g1

0xb3d2,	// (0x0004495a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb3d2,	// (0x0004495a) fshwr2_func_candi_cell_pane_t1

0xdb8c,	// (0x00047114) bg_button_pane_cp08

0xba9d,	// (0x00045025) cell_fshwr2_syb_bg_pane

0xb3ed,	// (0x00044975) cell_fshwr2_syb_bg_pane_g1

0xb400,	// (0x00044988) cell_fshwr2_syb_bg_pane_t1

0xb95b,	// (0x00044ee3) main_tmo_pane

0xc754,	// (0x00045cdc) uni_indicator_pane_g1_ParamLimits

0xc76a,	// (0x00045cf2) uni_indicator_pane_g2_ParamLimits

0xc780,	// (0x00045d08) uni_indicator_pane_g3_ParamLimits

0x3297,	// (0x0003c81f) uni_indicator_pane_g4_ParamLimits

0x3297,	// (0x0003c81f) uni_indicator_pane_g4

0x32ab,	// (0x0003c833) uni_indicator_pane_g5_ParamLimits

0x32ab,	// (0x0003c833) uni_indicator_pane_g5

0x32ab,	// (0x0003c833) uni_indicator_pane_g6_ParamLimits

0x32ab,	// (0x0003c833) uni_indicator_pane_g6

0xf8e1,	// (0x00048e69) uni_indicator_pane_g_ParamLimits

0xd558,	// (0x00046ae0) popup_tmo_note_window_ParamLimits

0xd558,	// (0x00046ae0) popup_tmo_note_window

0x1292,	// (0x0003a81a) fshwr2_bg_pane

0xb3c3,	// (0x0004494b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb3c3,	// (0x0004494b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe94,	// (0x0004941c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe94,	// (0x0004941c) fshwr2_func_candi_cell_pane_g

0x0ea7,	// (0x0003a42f) bg_popup_window_pane_cp01

0x1c04,	// (0x0003b18c) bg_popup_window_pane_g1_cp01

0x729c,	// (0x00040824) bg_popup_window_pane_cp22_ParamLimits

0x729c,	// (0x00040824) bg_popup_window_pane_cp22

0xec31,	// (0x000481b9) listscroll_tmo_link_pane_ParamLimits

0xec31,	// (0x000481b9) listscroll_tmo_link_pane

0x72ea,	// (0x00040872) popup_tmo_note_window_g1_ParamLimits

0x72ea,	// (0x00040872) popup_tmo_note_window_g1

0xec71,	// (0x000481f9) tmo_note_info_pane_ParamLimits

0xec71,	// (0x000481f9) tmo_note_info_pane

0xec8b,	// (0x00048213) list_tmo_note_info_pane_g1_ParamLimits

0xec8b,	// (0x00048213) list_tmo_note_info_pane_g1

0x7328,	// (0x000408b0) list_tmo_note_info_pane_g2_ParamLimits

0x7328,	// (0x000408b0) list_tmo_note_info_pane_g2

0x0001,

0xfe99,	// (0x00049421) list_tmo_note_info_pane_g_ParamLimits

0xfe99,	// (0x00049421) list_tmo_note_info_pane_g

0x7344,	// (0x000408cc) list_tmo_note_info_text_pane_ParamLimits

0x7344,	// (0x000408cc) list_tmo_note_info_text_pane

0x73c5,	// (0x0004094d) list_tmo_link_pane

0x73d2,	// (0x0004095a) scroll_pane_cp20

0x73df,	// (0x00040967) list_single_tmo_link_pane_ParamLimits

0x73df,	// (0x00040967) list_single_tmo_link_pane

0x73ef,	// (0x00040977) list_single_tmo_link_pane_t1

0x73fd,	// (0x00040985) list_tmo_note_info_text_pane_t1_ParamLimits

0x73fd,	// (0x00040985) list_tmo_note_info_text_pane_t1

0x93f1,	// (0x00042979) aid_size_touch_scroll_bar_cp01_ParamLimits

0x93f1,	// (0x00042979) aid_size_touch_scroll_bar_cp01

0x92f1,	// (0x00042879) aid_size_touch_slider_marker

0x889e,	// (0x00041e26) popup_settings_window_ParamLimits

0x889e,	// (0x00041e26) popup_settings_window

0xdde2,	// (0x0004736a) popup_candi_list_indi_window

0x03b1,	// (0x00039939) aid_touch_navi_pane_ParamLimits

0x11ed,	// (0x0003a775) rs_clock_indi_pane

0x11f6,	// (0x0003a77e) sctrl_sk_bottom_pane_ParamLimits

0x1207,	// (0x0003a78f) sctrl_sk_top_pane_ParamLimits

0xaeb9,	// (0x00044441) popup_fep_tooltip_window

0x6d27,	// (0x000402af) aid_size_cell_widget_grid_ParamLimits

0x6d9c,	// (0x00040324) cell_ai5_widget_pane_g1_ParamLimits

0x6d9c,	// (0x00040324) cell_ai5_widget_pane_g1

0x6e01,	// (0x00040389) cell_ai5_widget_pane_g6_ParamLimits

0x6e0d,	// (0x00040395) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0d,	// (0x00049395) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x00049395) cell_ai5_widget_pane_g

0x6f7d,	// (0x00040505) cell_ai5_widget_pane_t10_ParamLimits

0x6f7d,	// (0x00040505) cell_ai5_widget_pane_t10

0x6fc0,	// (0x00040548) grid_ai5_widget_pane_ParamLimits

0x705e,	// (0x000405e6) cell_contacts_ai5_widget_pane_ParamLimits

0x705e,	// (0x000405e6) cell_contacts_ai5_widget_pane

0x7238,	// (0x000407c0) popup_discreet_window_t3_ParamLimits

0x7238,	// (0x000407c0) popup_discreet_window_t3

0xb316,	// (0x0004489e) popup_fshwr2_char_preview_window_ParamLimits

0xb316,	// (0x0004489e) popup_fshwr2_char_preview_window

0xeca2,	// (0x0004822a) tmo_note_info_pane_t1

0xecb7,	// (0x0004823f) tmo_note_info_pane_t2

0xecce,	// (0x00048256) tmo_note_info_pane_t3

0x73a1,	// (0x00040929) tmo_note_info_pane_t4

0x73b3,	// (0x0004093b) tmo_note_info_pane_t5

0x0004,

0xfe9e,	// (0x00049426) tmo_note_info_pane_t

0x73c5,	// (0x0004094d) list_tmo_link_pane_ParamLimits

0x73d2,	// (0x0004095a) scroll_pane_cp20_ParamLimits

0xdb8c,	// (0x00047114) bg_popup_fep_char_preview_window_cp01

0xece3,	// (0x0004826b) popup_fshwr2_char_preview_window_t1

0x7424,	// (0x000409ac) popup_candi_list_indi_window_g1

0x742d,	// (0x000409b5) bg_cell_contacts_ai5_widget_pane

0x7439,	// (0x000409c1) cell_contacts_ai5_widget_pane_g1

0x4db2,	// (0x0003e33a) cell_contacts_ai5_widget_pane_g2

0x744e,	// (0x000409d6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea9,	// (0x00049431) cell_contacts_ai5_widget_pane_g

0x745a,	// (0x000409e2) cell_contacts_ai5_widget_pane_t1

0xb95b,	// (0x00044ee3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x74d1,	// (0x00040a59) settings_container_pane

0xc21b,	// (0x000457a3) listscroll_set_pane_copy1

0x3dcf,	// (0x0003d357) scroll_pane_cp121_copy1

0x2513,	// (0x0003ba9b) set_content_pane_copy1

0xecf1,	// (0x00048279) aid_height_set_list_copy1_ParamLimits

0xecf1,	// (0x00048279) aid_height_set_list_copy1

0x3493,	// (0x0003ca1b) aid_size_parent_copy1_ParamLimits

0x3493,	// (0x0003ca1b) aid_size_parent_copy1

0xecfd,	// (0x00048285) button_value_adjust_pane_cp6_copy1_ParamLimits

0xecfd,	// (0x00048285) button_value_adjust_pane_cp6_copy1

0xba9d,	// (0x00045025) list_highlight_pane_cp2_copy1_ParamLimits

0xba9d,	// (0x00045025) list_highlight_pane_cp2_copy1

0xed11,	// (0x00048299) list_set_pane_copy1_ParamLimits

0xed11,	// (0x00048299) list_set_pane_copy1

0x746c,	// (0x000409f4) main_pane_set_t1_copy1_ParamLimits

0x746c,	// (0x000409f4) main_pane_set_t1_copy1

0x74a6,	// (0x00040a2e) main_pane_set_t2_copy1_ParamLimits

0x74a6,	// (0x00040a2e) main_pane_set_t2_copy1

0xedbe,	// (0x00048346) main_pane_set_t3_copy1

0xedcc,	// (0x00048354) main_pane_set_t4_copy1

0x74c5,	// (0x00040a4d) set_content_pane_g1_copy1_ParamLimits

0x74c5,	// (0x00040a4d) set_content_pane_g1_copy1

0xedda,	// (0x00048362) setting_code_pane_copy1

0x75ce,	// (0x00040b56) setting_slider_graphic_pane_copy1

0x75ce,	// (0x00040b56) setting_slider_pane_copy1

0x75d6,	// (0x00040b5e) setting_text_pane_copy1

0x75d6,	// (0x00040b5e) setting_volume_pane_copy1

0xedda,	// (0x00048362) settings_code_pane_cp2_copy1

0xede2,	// (0x0004836a) settings_code_pane_cp_copy1_ParamLimits

0xede2,	// (0x0004836a) settings_code_pane_cp_copy1

0xb416,	// (0x0004499e) volume_set_pane_copy1

0xedf6,	// (0x0004837e) volume_set_pane_g10_copy1

0xedfe,	// (0x00048386) volume_set_pane_g1_copy1

0xee06,	// (0x0004838e) volume_set_pane_g2_copy1

0xee0e,	// (0x00048396) volume_set_pane_g3_copy1

0xee16,	// (0x0004839e) volume_set_pane_g4_copy1

0xee1e,	// (0x000483a6) volume_set_pane_g5_copy1

0xee26,	// (0x000483ae) volume_set_pane_g6_copy1

0xee2e,	// (0x000483b6) volume_set_pane_g7_copy1

0xee36,	// (0x000483be) volume_set_pane_g8_copy1

0xee3e,	// (0x000483c6) volume_set_pane_g9_copy1

0xb5a5,	// (0x00044b2d) bg_set_opt_pane_cp_copy1_ParamLimits

0xb5a5,	// (0x00044b2d) bg_set_opt_pane_cp_copy1

0xb41e,	// (0x000449a6) setting_slider_pane_t1_copy1_ParamLimits

0xb41e,	// (0x000449a6) setting_slider_pane_t1_copy1

0xb43d,	// (0x000449c5) setting_slider_pane_t2_copy1_ParamLimits

0xb43d,	// (0x000449c5) setting_slider_pane_t2_copy1

0xb457,	// (0x000449df) setting_slider_pane_t3_copy1_ParamLimits

0xb457,	// (0x000449df) setting_slider_pane_t3_copy1

0xb46f,	// (0x000449f7) slider_set_pane_copy1_ParamLimits

0xb46f,	// (0x000449f7) slider_set_pane_copy1

0xb9b3,	// (0x00044f3b) set_opt_bg_pane_g1_copy2

0xb9bb,	// (0x00044f43) set_opt_bg_pane_g2_copy2

0x7642,	// (0x00040bca) set_opt_bg_pane_g3_copy2

0xb9cb,	// (0x00044f53) set_opt_bg_pane_g4_copy2

0xb9d3,	// (0x00044f5b) set_opt_bg_pane_g5_copy2

0xb9db,	// (0x00044f63) set_opt_bg_pane_g6_copy2

0xee46,	// (0x000483ce) set_opt_bg_pane_g7_copy2

0x7654,	// (0x00040bdc) set_opt_bg_pane_g8_copy2

0x765e,	// (0x00040be6) set_opt_bg_pane_g9_copy2

0xb485,	// (0x00044a0d) aid_size_touch_slider_mark_copy1_ParamLimits

0xb485,	// (0x00044a0d) aid_size_touch_slider_mark_copy1

0xee4e,	// (0x000483d6) slider_set_pane_g1_copy1

0x1c90,	// (0x0003b218) slider_set_pane_g2_copy1

0xaa81,	// (0x00044009) slider_set_pane_g3_copy1_ParamLimits

0xaa81,	// (0x00044009) slider_set_pane_g3_copy1

0xaa95,	// (0x0004401d) slider_set_pane_g4_copy1_ParamLimits

0xaa95,	// (0x0004401d) slider_set_pane_g4_copy1

0xaaad,	// (0x00044035) slider_set_pane_g5_copy1_ParamLimits

0xaaad,	// (0x00044035) slider_set_pane_g5_copy1

0xaa81,	// (0x00044009) slider_set_pane_g6_copy1_ParamLimits

0xaa81,	// (0x00044009) slider_set_pane_g6_copy1

0xb499,	// (0x00044a21) slider_set_pane_g7_copy1_ParamLimits

0xb499,	// (0x00044a21) slider_set_pane_g7_copy1

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp2_copy1

0xee57,	// (0x000483df) setting_slider_graphic_pane_g1_copy1

0xee60,	// (0x000483e8) setting_slider_graphic_pane_t1_copy1

0xee70,	// (0x000483f8) setting_slider_graphic_pane_t2_copy1

0xee80,	// (0x00048408) slider_set_pane_cp_copy1

0x76aa,	// (0x00040c32) input_focus_pane_cp1_copy1

0x76b3,	// (0x00040c3b) list_set_text_pane_copy1

0x76bb,	// (0x00040c43) setting_text_pane_g1_copy1

0xee90,	// (0x00048418) set_text_pane_t1_copy1

0x76aa,	// (0x00040c32) input_focus_pane_cp2_copy1

0x76bb,	// (0x00040c43) setting_code_pane_g1_copy1

0x76c4,	// (0x00040c4c) setting_code_pane_t1_copy1

0x76d2,	// (0x00040c5a) list_set_graphic_pane_copy1

0xb549,	// (0x00044ad1) bg_set_opt_pane_cp4_copy1

0xbf88,	// (0x00045510) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf88,	// (0x00045510) list_set_graphic_pane_g1_copy1

0x76e6,	// (0x00040c6e) list_set_graphic_pane_g2_copy1

0xbfa0,	// (0x00045528) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfa0,	// (0x00045528) list_set_graphic_pane_t1_copy1

0x46ec,	// (0x0003dc74) rs_clock_indi_pane_g1

0x76ee,	// (0x00040c76) rs_clock_indi_pane_t1

0x76fc,	// (0x00040c84) rs_indi_pane

0x7704,	// (0x00040c8c) rs_indi_pane_g1

0x770d,	// (0x00040c95) rs_indi_pane_g2

0x7424,	// (0x000409ac) rs_indi_pane_g3

0x0002,

0xfeb0,	// (0x00049438) rs_indi_pane_g

0xc21b,	// (0x000457a3) bg_popup_preview_window_pane_cp03

0x7716,	// (0x00040c9e) popup_fep_tooltip_window_t1

0xd1fe,	// (0x00046786) popup_note2_window_g2_ParamLimits

0xd1fe,	// (0x00046786) popup_note2_window_g2

0x0001,

0xfc44,	// (0x000491cc) popup_note2_window_g_ParamLimits

0xfc44,	// (0x000491cc) popup_note2_window_g

0x588c,	// (0x0003ee14) bg_popup_sub_pane_cp11_ParamLimits

0x5899,	// (0x0003ee21) cell_ai3_links_pane_g1_ParamLimits

0x58b0,	// (0x0003ee38) cell_ai3_links_pane_t1

0xee90,	// (0x00048418) set_text_pane_t1_copy1_ParamLimits

0xc14d,	// (0x000456d5) cell_graphic_popup_pane_cp2_ParamLimits

0xc14d,	// (0x000456d5) cell_graphic_popup_pane_cp2

0xeeac,	// (0x00048434) cell_graphic_popup_pane_g1_cp2

0xb829,	// (0x00044db1) cell_graphic_popup_pane_g2_cp2

0x772c,	// (0x00040cb4) cell_graphic_popup_pane_g3_cp2

0xeeb4,	// (0x0004843c) cell_graphic_popup_pane_t2_cp2

0xb83a,	// (0x00044dc2) grid_highlight_pane_cp3_cp2

0xbc2a,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb95b,	// (0x00044ee3) main_tmo_pane_ParamLimits

0xd54c,	// (0x00046ad4) popup_tmo_big_image_note_window

0x6d8b,	// (0x00040313) cell_ai5_widget_list_pane

0x6d93,	// (0x0004031b) cell_ai5_widget_lrg_icon_pane

0xeca2,	// (0x0004822a) tmo_note_info_pane_t1_ParamLimits

0xecb7,	// (0x0004823f) tmo_note_info_pane_t2_ParamLimits

0xecce,	// (0x00048256) tmo_note_info_pane_t3_ParamLimits

0x73a1,	// (0x00040929) tmo_note_info_pane_t4_ParamLimits

0x73b3,	// (0x0004093b) tmo_note_info_pane_t5_ParamLimits

0xfe9e,	// (0x00049426) tmo_note_info_pane_t_ParamLimits

0x74d1,	// (0x00040a59) settings_container_pane_ParamLimits

0xee88,	// (0x00048410) indicator_popup_pane_cp5

0xee88,	// (0x00048410) indicator_popup_pane_cp6

0x76d2,	// (0x00040c5a) list_set_graphic_pane_copy1_ParamLimits

0xb535,	// (0x00044abd) bg_popup_window_pane_cp23

0x7742,	// (0x00040cca) popup_tmo_big_image_note_window_g1

0x774b,	// (0x00040cd3) popup_tmo_big_image_note_window_t1

0x775b,	// (0x00040ce3) popup_tmo_big_image_note_window_t2

0x776b,	// (0x00040cf3) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb7,	// (0x0004943f) popup_tmo_big_image_note_window_t

0x46ec,	// (0x0003dc74) cell_ai5_widget_lrg_icon_pane_g1

0x777b,	// (0x00040d03) cell_ai5_widget_lrg_icon_pane_t1

0x7789,	// (0x00040d11) cell_ai5_widget_list_row_pane_ParamLimits

0x7789,	// (0x00040d11) cell_ai5_widget_list_row_pane

0x77a0,	// (0x00040d28) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x77a0,	// (0x00040d28) cell_ai5_widget_list_row_pane_g1

0x77ad,	// (0x00040d35) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x77ad,	// (0x00040d35) cell_ai5_widget_list_row_pane_t1

0x77d8,	// (0x00040d60) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x77d8,	// (0x00040d60) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebe,	// (0x00049446) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebe,	// (0x00049446) cell_ai5_widget_list_row_pane_t

0xdb8c,	// (0x00047114) main_fep_vtchi_ss_pane

0x7828,	// (0x00040db0) popup_fep_char_pre_window

0x7830,	// (0x00040db8) popup_fep_ituss_window

0xeeec,	// (0x00048474) popup_fep_vkbss_window

0xba9d,	// (0x00045025) grid_vkbss_keypad_pane_ParamLimits

0xba9d,	// (0x00045025) grid_vkbss_keypad_pane

0x78a8,	// (0x00040e30) ituss_keypad_pane

0x1cd9,	// (0x0003b261) aid_vkbss_key_offset_ParamLimits

0x1cd9,	// (0x0003b261) aid_vkbss_key_offset

0xb4c3,	// (0x00044a4b) cell_vkbss_key_pane_ParamLimits

0xb4c3,	// (0x00044a4b) cell_vkbss_key_pane

0x78b8,	// (0x00040e40) bg_cell_vkbss_key_g1_ParamLimits

0x78b8,	// (0x00040e40) bg_cell_vkbss_key_g1

0xeef9,	// (0x00048481) cell_vkbss_key_3p_pane_ParamLimits

0xeef9,	// (0x00048481) cell_vkbss_key_3p_pane

0xef2f,	// (0x000484b7) cell_vkbss_key_g1_ParamLimits

0xef2f,	// (0x000484b7) cell_vkbss_key_g1

0xef65,	// (0x000484ed) cell_vkbss_key_t1_ParamLimits

0xef65,	// (0x000484ed) cell_vkbss_key_t1

0x1d30,	// (0x0003b2b8) cell_ituss_key_pane_ParamLimits

0x1d30,	// (0x0003b2b8) cell_ituss_key_pane

0x798c,	// (0x00040f14) bg_cell_ituss_key_g1_ParamLimits

0x798c,	// (0x00040f14) bg_cell_ituss_key_g1

0x7998,	// (0x00040f20) cell_ituss_key_pane_g1_ParamLimits

0x7998,	// (0x00040f20) cell_ituss_key_pane_g1

0x1d41,	// (0x0003b2c9) cell_ituss_key_pane_g2_ParamLimits

0x1d41,	// (0x0003b2c9) cell_ituss_key_pane_g2

0x0005,

0xfec5,	// (0x0004944d) cell_ituss_key_pane_g_ParamLimits

0xfec5,	// (0x0004944d) cell_ituss_key_pane_g

0x1dc5,	// (0x0003b34d) cell_ituss_key_t1_ParamLimits

0x1dc5,	// (0x0003b34d) cell_ituss_key_t1

0x1dff,	// (0x0003b387) cell_ituss_key_t2_ParamLimits

0x1dff,	// (0x0003b387) cell_ituss_key_t2

0x1e31,	// (0x0003b3b9) cell_ituss_key_t3_ParamLimits

0x1e31,	// (0x0003b3b9) cell_ituss_key_t3

0x1e62,	// (0x0003b3ea) cell_ituss_key_t4_ParamLimits

0x1e62,	// (0x0003b3ea) cell_ituss_key_t4

0x0005,

0xfed2,	// (0x0004945a) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0004945a) cell_ituss_key_t

0xefc1,	// (0x00048549) cell_vkbss_key_3p_pane_g1

0xefc9,	// (0x00048551) cell_vkbss_key_3p_pane_g2

0xefd1,	// (0x00048559) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00049467) cell_vkbss_key_3p_pane_g

0xc21b,	// (0x000457a3) bg_popup_fep_char_preview_window_cp02

0x79d6,	// (0x00040f5e) popup_fep_char_pre_window_t1

0xeb48,	// (0x000480d0) main_ai5_sk_pane

0x742d,	// (0x000409b5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7439,	// (0x000409c1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4db2,	// (0x0003e33a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x744e,	// (0x000409d6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea9,	// (0x00049431) cell_contacts_ai5_widget_pane_g_ParamLimits

0x745a,	// (0x000409e2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb95b,	// (0x00044ee3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefd9,	// (0x00048561) main_ai5_sk_pane_g1

0xa9e1,	// (0x00043f69) popup_query_code_window_g1

0xeedd,	// (0x00048465) popup_fep_vkb_icf_pane

0x787c,	// (0x00040e04) popup_fep_vtchi_icf_pane

0x79ed,	// (0x00040f75) bg_icf_pane

0x79ed,	// (0x00040f75) list_vkb_icf_pane

0x79f9,	// (0x00040f81) bg_icf_pane_cp01

0x7a0c,	// (0x00040f94) vtchi_icf_list_pane

0xf02e,	// (0x000485b6) list_vkb_icf_pane_t1_ParamLimits

0xf02e,	// (0x000485b6) list_vkb_icf_pane_t1

0x7a91,	// (0x00041019) vtchi_icf_list_pane_t1_ParamLimits

0x7a91,	// (0x00041019) vtchi_icf_list_pane_t1

0x7830,	// (0x00040db8) popup_fep_ituss_window_ParamLimits

0x787c,	// (0x00040e04) popup_fep_vtchi_icf_pane_ParamLimits

0x78a8,	// (0x00040e30) ituss_keypad_pane_ParamLimits

0x1ccf,	// (0x0003b257) ituss_sks_pane

0x79ed,	// (0x00040f75) bg_icf_pane_ParamLimits

0xeec2,	// (0x0004844a) icf_edit_indi_pane_ParamLimits

0xeec2,	// (0x0004844a) icf_edit_indi_pane

0x79ed,	// (0x00040f75) list_vkb_icf_pane_ParamLimits

0x79f9,	// (0x00040f81) bg_icf_pane_cp01_ParamLimits

0x781b,	// (0x00040da3) icf_edit_indi_pane_cp01_ParamLimits

0x781b,	// (0x00040da3) icf_edit_indi_pane_cp01

0x7a0c,	// (0x00040f94) vtchi_query_pane

0x6b91,	// (0x00040119) icf_edit_indi_pane_g1_ParamLimits

0x6b91,	// (0x00040119) icf_edit_indi_pane_g1

0xf046,	// (0x000485ce) icf_edit_indi_pane_g2_ParamLimits

0xf046,	// (0x000485ce) icf_edit_indi_pane_g2

0x0001,

0xff0a,	// (0x00049492) icf_edit_indi_pane_g_ParamLimits

0xff0a,	// (0x00049492) icf_edit_indi_pane_g

0xf05a,	// (0x000485e2) icf_edit_indi_pane_t1

0x7ab5,	// (0x0004103d) bg_input_focus_pane_cp042

0xb89d,	// (0x00044e25) vtchi_button_pane

0x7abe,	// (0x00041046) vtchi_query_pane_t1

0x7acc,	// (0x00041054) vtchi_query_pane_t2

0x7ada,	// (0x00041062) vtchi_query_pane_t3

0x0002,

0xfef9,	// (0x00049481) vtchi_query_pane_t

0xdb8c,	// (0x00047114) bg_button_pane_cp13

0x7ae8,	// (0x00041070) vtchi_button_pane_g1

0x1ee3,	// (0x0003b46b) ituss_sks_pane_g1

0x1eee,	// (0x0003b476) ituss_sks_pane_g2

0x0001,

0xff00,	// (0x00049488) ituss_sks_pane_g

0x7af0,	// (0x00041078) ituss_sks_pane_t1

0x7afe,	// (0x00041086) ituss_sks_pane_t2

0x0001,

0xff05,	// (0x0004948d) ituss_sks_pane_t

0x4167,	// (0x0003d6ef) indicator_nsta_pane_cp_g1

0x4170,	// (0x0003d6f8) indicator_nsta_pane_cp_g2

0x4178,	// (0x0003d700) indicator_nsta_pane_cp_g3

0x4180,	// (0x0003d708) indicator_nsta_pane_cp_g4

0x4170,	// (0x0003d6f8) indicator_nsta_pane_cp_g5

0x4178,	// (0x0003d700) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0004900a) indicator_nsta_pane_cp_g

0xe91d,	// (0x00047ea5) cell_graphic2_pane_t2_ParamLimits

0xe91d,	// (0x00047ea5) cell_graphic2_pane_t2

0x0001,

0xfd94,	// (0x0004931c) cell_graphic2_pane_t_ParamLimits

0xfd94,	// (0x0004931c) cell_graphic2_pane_t

0xe954,	// (0x00047edc) cell_graphic2_control_pane_t1

0x96c9,	// (0x00042c51) signal_pane_g3_ParamLimits

0x96c9,	// (0x00042c51) signal_pane_g3

0x96dd,	// (0x00042c65) signal_pane_g4_ParamLimits

0x96dd,	// (0x00042c65) signal_pane_g4

0x77ea,	// (0x00040d72) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x77ea,	// (0x00040d72) cell_ai5_widget_list_row_pane_t3

0x79ac,	// (0x00040f34) cell_ituss_key_pane_t1_ParamLimits

0x79ac,	// (0x00040f34) cell_ituss_key_pane_t1

0x21e2,	// (0x0003b76a) form_field_data_wide_pane_vc_t2_ParamLimits

0x21e2,	// (0x0003b76a) form_field_data_wide_pane_vc_t2

0x21f6,	// (0x0003b77e) form_field_data_wide_pane_vc_t3_ParamLimits

0x21f6,	// (0x0003b77e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c9,	// (0x00048d51) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c9,	// (0x00048d51) form_field_data_wide_pane_vc_t

0x3e11,	// (0x0003d399) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e11,	// (0x0003d399) form_field_slider_wide_pane_vc_t3

0x3eef,	// (0x0003d477) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3eef,	// (0x0003d477) form_field_popup_wide_pane_vc_t2

0x3f06,	// (0x0003d48e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f06,	// (0x0003d48e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x00048ff9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x00048ff9) form_field_popup_wide_pane_vc_t

0xb280,	// (0x00044808) aid_fshwr2_btn_pane_ParamLimits

0xb294,	// (0x0004481c) aid_fshwr2_syb_pane_ParamLimits

0xb2a8,	// (0x00044830) aid_fshwr2_txt_pane_ParamLimits

0x1292,	// (0x0003a81a) fshwr2_bg_pane_ParamLimits

0xb2b8,	// (0x00044840) fshwr2_func_candi_pane_ParamLimits

0xb2d8,	// (0x00044860) fshwr2_hwr_syb_pane_ParamLimits

0xb2fa,	// (0x00044882) fshwr2_icf_pane_ParamLimits

0xe1c6,	// (0x0004774e) list_double_graphic_pane_vc_g4_ParamLimits

0xe1c6,	// (0x0004774e) list_double_graphic_pane_vc_g4

0x1d61,	// (0x0003b2e9) cell_ituss_key_pane_g3_ParamLimits

0x1d61,	// (0x0003b2e9) cell_ituss_key_pane_g3

0x1e93,	// (0x0003b41b) cell_ituss_key_t5_ParamLimits

0x1e93,	// (0x0003b41b) cell_ituss_key_t5

0xeeec,	// (0x00048474) popup_fep_vkbss_window_ParamLimits

0x4ee3,	// (0x0003e46b) aid_cell_ai5_quarter

0xf05a,	// (0x000485e2) icf_edit_indi_pane_t1_ParamLimits

0x8cc7,	// (0x0004224f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8cc7,	// (0x0004224f) aid_tch_indicator_popup_pane_cp2

0x8cda,	// (0x00042262) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8cda,	// (0x00042262) aid_tch_query_popup_data_pane_cp2

0x2557,	// (0x0003badf) aid_tch_query_popup_pane_ParamLimits

0x2557,	// (0x0003badf) aid_tch_query_popup_pane

0x2557,	// (0x0003badf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2557,	// (0x0003badf) aid_tch_query_popup_data_pane_cp1

0xba9d,	// (0x00045025) cell_fshwr2_syb_bg_pane_ParamLimits

0xb3ed,	// (0x00044975) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb400,	// (0x00044988) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeedd,	// (0x00048465) popup_fep_vkb_icf_pane_ParamLimits

0xb1e6,	// (0x0004476e) bg_popup_fep_char_preview_window_g10

0x6e55,	// (0x000403dd) cell_ai5_widget_pane_g11_ParamLimits

0x6e55,	// (0x000403dd) cell_ai5_widget_pane_g11

0x6e61,	// (0x000403e9) cell_ai5_widget_pane_g12_ParamLimits

0x6e61,	// (0x000403e9) cell_ai5_widget_pane_g12

0x6e6d,	// (0x000403f5) cell_ai5_widget_pane_g13_ParamLimits

0x6e6d,	// (0x000403f5) cell_ai5_widget_pane_g13

0x6f9c,	// (0x00040524) cell_ai5_widget_pane_t11_ParamLimits

0x6f9c,	// (0x00040524) cell_ai5_widget_pane_t11

0x6fae,	// (0x00040536) cell_ai5_widget_pane_t12_ParamLimits

0x6fae,	// (0x00040536) cell_ai5_widget_pane_t12

0x1d6d,	// (0x0003b2f5) cell_ituss_key_pane_g4_ParamLimits

0x1d6d,	// (0x0003b2f5) cell_ituss_key_pane_g4

0x1d89,	// (0x0003b311) cell_ituss_key_pane_g5_ParamLimits

0x1d89,	// (0x0003b311) cell_ituss_key_pane_g5

0x1da5,	// (0x0003b32d) cell_ituss_key_pane_g6_ParamLimits

0x1da5,	// (0x0003b32d) cell_ituss_key_pane_g6

0x20c8,	// (0x0003b650) bg_icf_pane_g1

0xefe2,	// (0x0004856a) bg_icf_pane_g2

0xefec,	// (0x00048574) bg_icf_pane_g3

0xeff4,	// (0x0004857c) bg_icf_pane_g4

0xeffe,	// (0x00048586) bg_icf_pane_g5

0xf008,	// (0x00048590) bg_icf_pane_g6

0xf012,	// (0x0004859a) bg_icf_pane_g7

0xf01a,	// (0x000485a2) bg_icf_pane_g8

0xf024,	// (0x000485ac) bg_icf_pane_g9

0x0008,

0xfee6,	// (0x0004946e) bg_icf_pane_g

0x7895,	// (0x00040e1d) popup_hyb_candi_window_ParamLimits

0x7895,	// (0x00040e1d) popup_hyb_candi_window

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp01_ParamLimits

0x2154,	// (0x0003b6dc) bg_popup_sub_pane_cp01

0x7b39,	// (0x000410c1) entry_hyb_candi_pane_ParamLimits

0x7b39,	// (0x000410c1) entry_hyb_candi_pane

0x7b48,	// (0x000410d0) grid_hyb_candi_pane_ParamLimits

0x7b48,	// (0x000410d0) grid_hyb_candi_pane

0x7b5d,	// (0x000410e5) grid_hyb_phrase_pane_ParamLimits

0x7b5d,	// (0x000410e5) grid_hyb_phrase_pane

0x7b6c,	// (0x000410f4) cell_hyb_candi_pane_ParamLimits

0x7b6c,	// (0x000410f4) cell_hyb_candi_pane

0x7b8f,	// (0x00041117) cell_hyb_candi_scroll_pane

0xbdad,	// (0x00045335) cell_hyb_candi_pane_g1

0x7b98,	// (0x00041120) cell_hyb_candi_pane_t1

0x7ba6,	// (0x0004112e) cell_hyb_phrase_pane

0xbdad,	// (0x00045335) cell_hyb_phrase_pane_g1

0x7baf,	// (0x00041137) cell_hyb_phrase_pane_t1

0x7bbd,	// (0x00041145) entry_hyb_candi_pane_t1

0xc21b,	// (0x000457a3) input_focus_pane_cp06

0x7bcb,	// (0x00041153) cell_hyb_candi_scroll_pane_g1

0x7bd3,	// (0x0004115b) cell_hyb_candi_scroll_pane_g1_aid

0x7bdb,	// (0x00041163) cell_hyb_candi_scroll_pane_g2

0x7be3,	// (0x0004116b) cell_hyb_candi_scroll_pane_g2_aid

0x7beb,	// (0x00041173) cell_hyb_candi_scroll_pane_g3

0x7bf3,	// (0x0004117b) cell_hyb_candi_scroll_pane_g4

0xeadc,	// (0x00048064) ai5_page_g1

0x1ea5,	// (0x0003b42d) cell_ituss_key_t6_ParamLimits

0x1ea5,	// (0x0003b42d) cell_ituss_key_t6

0xb4af,	// (0x00044a37) icf_edit_indi_pane_cp02_ParamLimits

0xb4af,	// (0x00044a37) icf_edit_indi_pane_cp02

0x1cc2,	// (0x0003b24a) icf_edit_indi_pane_cp03_ParamLimits

0x1cc2,	// (0x0003b24a) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

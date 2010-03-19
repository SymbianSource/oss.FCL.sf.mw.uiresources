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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00031626 };

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
0xae1b,	// (0x0003c441) Screen

0xae27,	// (0x0003c44d) application_window_ParamLimits

0xae27,	// (0x0003c44d) application_window

0xdf05,	// (0x0003f52b) screen_g1

0xae5f,	// (0x0003c485) area_bottom_pane_ParamLimits

0xae5f,	// (0x0003c485) area_bottom_pane

0xf254,	// (0x0004087a) area_top_pane_ParamLimits

0xf254,	// (0x0004087a) area_top_pane

0xf2f2,	// (0x00040918) main_pane_ParamLimits

0xf2f2,	// (0x00040918) main_pane

0xdf0f,	// (0x0003f535) misc_graphics

0xcf07,	// (0x0003e52d) battery_pane_ParamLimits

0xcf07,	// (0x0003e52d) battery_pane

0x5182,	// (0x000367a8) bg_status_flat_pane_g8

0x518a,	// (0x000367b0) bg_status_flat_pane_g9

0x452b,	// (0x00035b51) context_pane_ParamLimits

0x452b,	// (0x00035b51) context_pane

0xd07e,	// (0x0003e6a4) navi_pane_ParamLimits

0xd07e,	// (0x0003e6a4) navi_pane

0xd107,	// (0x0003e72d) signal_pane_ParamLimits

0xd107,	// (0x0003e72d) signal_pane

0x0008,

0xf880,	// (0x00040ea6) bg_status_flat_pane_g

0xd197,	// (0x0003e7bd) status_pane_g1_ParamLimits

0xd197,	// (0x0003e7bd) status_pane_g1

0xd1ad,	// (0x0003e7d3) status_pane_g2_ParamLimits

0xd1ad,	// (0x0003e7d3) status_pane_g2

0x476b,	// (0x00035d91) status_pane_g3_ParamLimits

0x476b,	// (0x00035d91) status_pane_g3

0x0004,

0xf7b3,	// (0x00040dd9) status_pane_g_ParamLimits

0xf7b3,	// (0x00040dd9) status_pane_g

0xd1b9,	// (0x0003e7df) title_pane_ParamLimits

0xd1b9,	// (0x0003e7df) title_pane

0xd216,	// (0x0003e83c) uni_indicator_pane_ParamLimits

0xd216,	// (0x0003e83c) uni_indicator_pane

0x3d58,	// (0x0003537e) bg_list_pane_ParamLimits

0x3d58,	// (0x0003537e) bg_list_pane

0xba7e,	// (0x0003d0a4) find_pane

0xc760,	// (0x0003dd86) listscroll_app_pane_ParamLimits

0xc760,	// (0x0003dd86) listscroll_app_pane

0x3d8c,	// (0x000353b2) listscroll_form_pane

0xba86,	// (0x0003d0ac) listscroll_gen_pane_ParamLimits

0xba86,	// (0x0003d0ac) listscroll_gen_pane

0x3d8c,	// (0x000353b2) listscroll_set_pane

0x5d3b,	// (0x00037361) main_idle_act_pane

0x3a34,	// (0x0003505a) main_idle_trad_pane

0x3a34,	// (0x0003505a) main_list_empty_pane

0x3dba,	// (0x000353e0) main_midp_pane

0x3dc6,	// (0x000353ec) main_pane_g1_ParamLimits

0x3dc6,	// (0x000353ec) main_pane_g1

0xc76c,	// (0x0003dd92) popup_ai_message_window_ParamLimits

0xc76c,	// (0x0003dd92) popup_ai_message_window

0xc80c,	// (0x0003de32) popup_fep_china_uni_window_ParamLimits

0xc80c,	// (0x0003de32) popup_fep_china_uni_window

0x3ee4,	// (0x0003550a) popup_fep_japan_candidate_window_ParamLimits

0x3ee4,	// (0x0003550a) popup_fep_japan_candidate_window

0x3f0e,	// (0x00035534) popup_fep_japan_predictive_window_ParamLimits

0x3f0e,	// (0x00035534) popup_fep_japan_predictive_window

0xc86c,	// (0x0003de92) popup_find_window

0xc889,	// (0x0003deaf) popup_grid_graphic_window_ParamLimits

0xc889,	// (0x0003deaf) popup_grid_graphic_window

0x3f7f,	// (0x000355a5) popup_large_graphic_colour_window

0xc92d,	// (0x0003df53) popup_menu_window_ParamLimits

0xc92d,	// (0x0003df53) popup_menu_window

0xcb19,	// (0x0003e13f) popup_note_image_window

0xcad9,	// (0x0003e0ff) popup_note_wait_window_ParamLimits

0xcad9,	// (0x0003e0ff) popup_note_wait_window

0xcb31,	// (0x0003e157) popup_note_window_ParamLimits

0xcb31,	// (0x0003e157) popup_note_window

0xcbdf,	// (0x0003e205) popup_query_code_window_ParamLimits

0xcbdf,	// (0x0003e205) popup_query_code_window

0x41eb,	// (0x00035811) popup_query_data_code_window_ParamLimits

0x41eb,	// (0x00035811) popup_query_data_code_window

0xcc1f,	// (0x0003e245) popup_query_data_window_ParamLimits

0xcc1f,	// (0x0003e245) popup_query_data_window

0xccb3,	// (0x0003e2d9) popup_query_sat_info_window_ParamLimits

0xccb3,	// (0x0003e2d9) popup_query_sat_info_window

0xcd5e,	// (0x0003e384) popup_snote_single_graphic_window_ParamLimits

0xcd5e,	// (0x0003e384) popup_snote_single_graphic_window

0xcd5e,	// (0x0003e384) popup_snote_single_text_window_ParamLimits

0xcd5e,	// (0x0003e384) popup_snote_single_text_window

0x4286,	// (0x000358ac) popup_sub_window_general

0x43cc,	// (0x000359f2) popup_window_general_ParamLimits

0x43cc,	// (0x000359f2) popup_window_general

0x43e5,	// (0x00035a0b) power_save_pane

0xb93f,	// (0x0003cf65) control_pane_g1_ParamLimits

0xb93f,	// (0x0003cf65) control_pane_g1

0x0a1e,	// (0x00032044) control_pane_g2_ParamLimits

0x0a1e,	// (0x00032044) control_pane_g2

0x3d01,	// (0x00035327) control_pane_g3_ParamLimits

0x3d01,	// (0x00035327) control_pane_g3

0x0007,

0xf79b,	// (0x00040dc1) control_pane_g_ParamLimits

0xf79b,	// (0x00040dc1) control_pane_g

0xb981,	// (0x0003cfa7) control_pane_t1_ParamLimits

0xb981,	// (0x0003cfa7) control_pane_t1

0xb9df,	// (0x0003d005) control_pane_t2_ParamLimits

0xb9df,	// (0x0003d005) control_pane_t2

0x0002,

0xf7ac,	// (0x00040dd2) control_pane_t_ParamLimits

0xf7ac,	// (0x00040dd2) control_pane_t

0x3c22,	// (0x00035248) navi_navi_volume_pane_cp1

0x3c2b,	// (0x00035251) status_small_icon_pane

0x3c33,	// (0x00035259) status_small_pane_g1_ParamLimits

0x3c33,	// (0x00035259) status_small_pane_g1

0x3c67,	// (0x0003528d) status_small_pane_g2_ParamLimits

0x3c67,	// (0x0003528d) status_small_pane_g2

0x3c73,	// (0x00035299) status_small_pane_g3_ParamLimits

0x3c73,	// (0x00035299) status_small_pane_g3

0x3c7f,	// (0x000352a5) status_small_pane_g4_ParamLimits

0x3c7f,	// (0x000352a5) status_small_pane_g4

0x3c8b,	// (0x000352b1) status_small_pane_g5_ParamLimits

0x3c8b,	// (0x000352b1) status_small_pane_g5

0x3c9a,	// (0x000352c0) status_small_pane_g6_ParamLimits

0x3c9a,	// (0x000352c0) status_small_pane_g6

0x0007,

0xf78a,	// (0x00040db0) status_small_pane_g_ParamLimits

0xf78a,	// (0x00040db0) status_small_pane_g

0x3cca,	// (0x000352f0) status_small_pane_t1

0x3ced,	// (0x00035313) status_small_wait_pane_ParamLimits

0x3ced,	// (0x00035313) status_small_wait_pane

0xc5a4,	// (0x0003dbca) aid_levels_signal_ParamLimits

0xc5a4,	// (0x0003dbca) aid_levels_signal

0xc5bc,	// (0x0003dbe2) signal_pane_g1_ParamLimits

0xc5bc,	// (0x0003dbe2) signal_pane_g1

0xc5d7,	// (0x0003dbfd) signal_pane_g2_ParamLimits

0xc5d7,	// (0x0003dbfd) signal_pane_g2

0x0001,

0xf71f,	// (0x00040d45) signal_pane_g_ParamLimits

0xf71f,	// (0x00040d45) signal_pane_g

0x3507,	// (0x00034b2d) context_pane_g1

0xafdc,	// (0x0003c602) title_pane_g1

0xb011,	// (0x0003c637) title_pane_t1

0x222f,	// (0x00033855) title_pane_t2

0x2255,	// (0x0003387b) title_pane_t3

0x0002,

0xf573,	// (0x00040b99) title_pane_t

0xd23e,	// (0x0003e864) aid_levels_battery_ParamLimits

0xd23e,	// (0x0003e864) aid_levels_battery

0xd25a,	// (0x0003e880) battery_pane_g1_ParamLimits

0xd25a,	// (0x0003e880) battery_pane_g1

0xd277,	// (0x0003e89d) battery_pane_g2_ParamLimits

0xd277,	// (0x0003e89d) battery_pane_g2

0x0001,

0xf7be,	// (0x00040de4) battery_pane_g_ParamLimits

0xf7be,	// (0x00040de4) battery_pane_g

0xd49a,	// (0x0003eac0) uni_indicator_pane_g1

0xd4af,	// (0x0003ead5) uni_indicator_pane_g2

0xd4c4,	// (0x0003eaea) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x00040f4e) uni_indicator_pane_g

0x38a2,	// (0x00034ec8) navi_icon_pane_ParamLimits

0x38a2,	// (0x00034ec8) navi_icon_pane

0x37e9,	// (0x00034e0f) navi_midp_pane

0x38be,	// (0x00034ee4) navi_navi_pane

0x38c8,	// (0x00034eee) navi_text_pane_ParamLimits

0x38c8,	// (0x00034eee) navi_text_pane

0xdf05,	// (0x0003f52b) status_small_wait_pane_g1

0x2699,	// (0x00033cbf) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00040f49) status_small_wait_pane_g

0xd439,	// (0x0003ea5f) navi_navi_icon_text_pane

0xd441,	// (0x0003ea67) navi_navi_pane_g1_ParamLimits

0xd441,	// (0x0003ea67) navi_navi_pane_g1

0xd453,	// (0x0003ea79) navi_navi_pane_g2_ParamLimits

0xd453,	// (0x0003ea79) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x00040f17) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x00040f17) navi_navi_pane_g

0x5811,	// (0x00036e37) navi_navi_tabs_pane

0xd465,	// (0x0003ea8b) navi_navi_text_pane

0xd439,	// (0x0003ea5f) navi_navi_volume_pane

0xd427,	// (0x0003ea4d) navi_text_pane_t1

0xd41b,	// (0x0003ea41) navi_icon_pane_g1

0x5702,	// (0x00036d28) navi_navi_text_pane_t1

0xbc7f,	// (0x0003d2a5) navi_navi_volume_pane_g1

0xbc87,	// (0x0003d2ad) volume_small_pane

0xd377,	// (0x0003e99d) navi_navi_icon_text_pane_g1

0xd37f,	// (0x0003e9a5) navi_navi_icon_text_pane_t1

0x38be,	// (0x00034ee4) navi_tabs_2_long_pane

0x38be,	// (0x00034ee4) navi_tabs_2_pane

0x38be,	// (0x00034ee4) navi_tabs_3_long_pane

0x38be,	// (0x00034ee4) navi_tabs_3_pane

0x38be,	// (0x00034ee4) navi_tabs_4_pane

0xbc5f,	// (0x0003d285) tabs_2_active_pane_ParamLimits

0xbc5f,	// (0x0003d285) tabs_2_active_pane

0xbc6f,	// (0x0003d295) tabs_2_passive_pane_ParamLimits

0xbc6f,	// (0x0003d295) tabs_2_passive_pane

0xbc2d,	// (0x0003d253) tabs_3_active_pane_ParamLimits

0xbc2d,	// (0x0003d253) tabs_3_active_pane

0xbc3d,	// (0x0003d263) tabs_3_passive_pane_ParamLimits

0xbc3d,	// (0x0003d263) tabs_3_passive_pane

0xbc4e,	// (0x0003d274) tabs_3_passive_pane_cp_ParamLimits

0xbc4e,	// (0x0003d274) tabs_3_passive_pane_cp

0xbbe9,	// (0x0003d20f) tabs_4_active_pane_ParamLimits

0xbbe9,	// (0x0003d20f) tabs_4_active_pane

0xbbfa,	// (0x0003d220) tabs_4_passive_pane_ParamLimits

0xbbfa,	// (0x0003d220) tabs_4_passive_pane

0xbc0b,	// (0x0003d231) tabs_4_passive_pane_cp_ParamLimits

0xbc0b,	// (0x0003d231) tabs_4_passive_pane_cp

0xbc1c,	// (0x0003d242) tabs_4_passive_pane_cp2_ParamLimits

0xbc1c,	// (0x0003d242) tabs_4_passive_pane_cp2

0xbbc5,	// (0x0003d1eb) tabs_2_long_active_pane_ParamLimits

0xbbc5,	// (0x0003d1eb) tabs_2_long_active_pane

0xbbd7,	// (0x0003d1fd) tabs_2_long_passive_pane_ParamLimits

0xbbd7,	// (0x0003d1fd) tabs_2_long_passive_pane

0xbb7a,	// (0x0003d1a0) tabs_3_long_active_pane_ParamLimits

0xbb7a,	// (0x0003d1a0) tabs_3_long_active_pane

0xbb93,	// (0x0003d1b9) tabs_3_long_passive_pane_ParamLimits

0xbb93,	// (0x0003d1b9) tabs_3_long_passive_pane

0xbbac,	// (0x0003d1d2) tabs_3_long_passive_pane_cp_ParamLimits

0xbbac,	// (0x0003d1d2) tabs_3_long_passive_pane_cp

0x0d55,	// (0x0003237b) volume_small_pane_g1

0xbb29,	// (0x0003d14f) volume_small_pane_g2

0xbb32,	// (0x0003d158) volume_small_pane_g3

0xbb3b,	// (0x0003d161) volume_small_pane_g4

0xbb44,	// (0x0003d16a) volume_small_pane_g5

0xbb4d,	// (0x0003d173) volume_small_pane_g6

0xbb56,	// (0x0003d17c) volume_small_pane_g7

0xbb5f,	// (0x0003d185) volume_small_pane_g8

0xbb68,	// (0x0003d18e) volume_small_pane_g9

0xbb71,	// (0x0003d197) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00040ee3) volume_small_pane_g

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp2_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp2

0xb09d,	// (0x0003c6c3) tabs_3_active_pane_g1

0xb0a5,	// (0x0003c6cb) tabs_3_active_pane_t1

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp2_ParamLimits

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp2

0xb09d,	// (0x0003c6c3) tabs_3_passive_pane_g1

0xb0a5,	// (0x0003c6cb) tabs_3_passive_pane_t1

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp3_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp3

0xb0b7,	// (0x0003c6dd) tabs_4_active_pane_g1

0xb0bf,	// (0x0003c6e5) tabs_4_active_pane_t1

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp3_ParamLimits

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp3

0xb0b7,	// (0x0003c6dd) tabs_4_1_passive_pane_g1

0xb0bf,	// (0x0003c6e5) tabs_4_1_passive_pane_t1

0x3dba,	// (0x000353e0) list_highlight_pane_cp2

0xd582,	// (0x0003eba8) list_set_pane_ParamLimits

0xd582,	// (0x0003eba8) list_set_pane

0xd64a,	// (0x0003ec70) main_pane_set_t1_ParamLimits

0xd64a,	// (0x0003ec70) main_pane_set_t1

0xd66a,	// (0x0003ec90) main_pane_set_t2_ParamLimits

0xd66a,	// (0x0003ec90) main_pane_set_t2

0xd67e,	// (0x0003eca4) main_pane_set_t3_ParamLimits

0xd67e,	// (0x0003eca4) main_pane_set_t3

0xd692,	// (0x0003ecb8) main_pane_set_t4_ParamLimits

0xd692,	// (0x0003ecb8) main_pane_set_t4

0x0003,

0xf98d,	// (0x00040fb3) main_pane_set_t_ParamLimits

0xf98d,	// (0x00040fb3) main_pane_set_t

0xd6a6,	// (0x0003eccc) setting_code_pane

0x5e9b,	// (0x000374c1) setting_slider_graphic_pane

0x5e9b,	// (0x000374c1) setting_slider_pane

0x5e9b,	// (0x000374c1) setting_text_pane

0x5e9b,	// (0x000374c1) setting_volume_pane

0xf4da,	// (0x00040b00) volume_set_pane

0x2267,	// (0x0003388d) bg_set_opt_pane_cp

0xf4e4,	// (0x00040b0a) setting_slider_pane_t1

0xf4fa,	// (0x00040b20) setting_slider_pane_t2

0xf514,	// (0x00040b3a) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00040ba0) setting_slider_pane_t

0xf52c,	// (0x00040b52) slider_set_pane

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp2

0x22a9,	// (0x000338cf) setting_slider_graphic_pane_g1

0xf542,	// (0x00040b68) setting_slider_graphic_pane_t1

0xf552,	// (0x00040b78) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00040ba7) setting_slider_graphic_pane_t

0xf562,	// (0x00040b88) slider_set_pane_cp

0xdf0f,	// (0x0003f535) input_focus_pane_cp1

0x5d22,	// (0x00037348) list_set_text_pane

0xdf05,	// (0x0003f52b) setting_text_pane_g1

0xdf0f,	// (0x0003f535) input_focus_pane_cp2

0xdf05,	// (0x0003f52b) setting_code_pane_g1

0x22b2,	// (0x000338d8) setting_code_pane_t1

0xecaa,	// (0x000402d0) set_text_pane_t1_ParamLimits

0xecaa,	// (0x000402d0) set_text_pane_t1

0x2b55,	// (0x0003417b) set_opt_bg_pane_g1

0x2b5d,	// (0x00034183) set_opt_bg_pane_g2

0x5cfa,	// (0x00037320) set_opt_bg_pane_g3

0x2b6d,	// (0x00034193) set_opt_bg_pane_g4

0x2b75,	// (0x0003419b) set_opt_bg_pane_g5

0x2b7d,	// (0x000341a3) set_opt_bg_pane_g6

0x5d04,	// (0x0003732a) set_opt_bg_pane_g7

0x5d0e,	// (0x00037334) set_opt_bg_pane_g8

0x5d18,	// (0x0003733e) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x00040fa0) set_opt_bg_pane_g

0x5ced,	// (0x00037313) slider_set_pane_g1

0x0f61,	// (0x00032587) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00040f91) slider_set_pane_g

0x0ec1,	// (0x000324e7) volume_set_pane_g1

0x0ecb,	// (0x000324f1) volume_set_pane_g2

0x0ed5,	// (0x000324fb) volume_set_pane_g3

0x0edf,	// (0x00032505) volume_set_pane_g4

0x0ee9,	// (0x0003250f) volume_set_pane_g5

0x0ef3,	// (0x00032519) volume_set_pane_g6

0x0efd,	// (0x00032523) volume_set_pane_g7

0x0f07,	// (0x0003252d) volume_set_pane_g8

0x0f11,	// (0x00032537) volume_set_pane_g9

0x0f1b,	// (0x00032541) volume_set_pane_g10

0x0009,

0xf943,	// (0x00040f69) volume_set_pane_g

0xb0d1,	// (0x0003c6f7) indicator_pane_ParamLimits

0xb0d1,	// (0x0003c6f7) indicator_pane

0xb0fd,	// (0x0003c723) main_idle_pane_g2_ParamLimits

0xb0fd,	// (0x0003c723) main_idle_pane_g2

0xb135,	// (0x0003c75b) main_pane_idle_g1_ParamLimits

0xb135,	// (0x0003c75b) main_pane_idle_g1

0x2302,	// (0x00033928) popup_clock_digital_analogue_window_ParamLimits

0x2302,	// (0x00033928) popup_clock_digital_analogue_window

0xb163,	// (0x0003c789) soft_indicator_pane_ParamLimits

0xb163,	// (0x0003c789) soft_indicator_pane

0xb17f,	// (0x0003c7a5) wallpaper_pane_ParamLimits

0xb17f,	// (0x0003c7a5) wallpaper_pane

0xdf05,	// (0x0003f52b) wallpaper_pane_g1

0xb191,	// (0x0003c7b7) indicator_pane_g1_ParamLimits

0xb191,	// (0x0003c7b7) indicator_pane_g1

0x615f,	// (0x00037785) navi_navi_icon_text_pane_srt_g1

0x2356,	// (0x0003397c) soft_indicator_pane_t1

0x2370,	// (0x00033996) aid_ps_area_pane

0xb1aa,	// (0x0003c7d0) aid_ps_clock_pane

0x238f,	// (0x000339b5) aid_ps_indicator_pane

0x239b,	// (0x000339c1) indicator_ps_pane_ParamLimits

0x239b,	// (0x000339c1) indicator_ps_pane

0x23aa,	// (0x000339d0) power_save_pane_g1_ParamLimits

0x23aa,	// (0x000339d0) power_save_pane_g1

0x23b6,	// (0x000339dc) power_save_pane_g2_ParamLimits

0x23b6,	// (0x000339dc) power_save_pane_g2

0xf234,	// (0x0004085a) aid_navinavi_width_pane

0x2370,	// (0x00033996) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00040bac) power_save_pane_g_ParamLimits

0xf586,	// (0x00040bac) power_save_pane_g

0x23c4,	// (0x000339ea) power_save_pane_t1_ParamLimits

0x23c4,	// (0x000339ea) power_save_pane_t1

0xb1aa,	// (0x0003c7d0) aid_ps_clock_pane_ParamLimits

0x238f,	// (0x000339b5) aid_ps_indicator_pane_ParamLimits

0x23d6,	// (0x000339fc) power_save_pane_t4_ParamLimits

0x23d6,	// (0x000339fc) power_save_pane_t4

0x0001,

0xf58b,	// (0x00040bb1) power_save_pane_t_ParamLimits

0xf58b,	// (0x00040bb1) power_save_pane_t

0x2400,	// (0x00033a26) power_save_t3_ParamLimits

0x2400,	// (0x00033a26) power_save_t3

0x23eb,	// (0x00033a11) power_save_t2_ParamLimits

0x23eb,	// (0x00033a11) power_save_t2

0x2415,	// (0x00033a3b) indicator_ps_pane_g1

0xb1b8,	// (0x0003c7de) ai_gene_pane_ParamLimits

0xb1b8,	// (0x0003c7de) ai_gene_pane

0xb1cf,	// (0x0003c7f5) ai_links_pane_ParamLimits

0xb1cf,	// (0x0003c7f5) ai_links_pane

0xb1e7,	// (0x0003c80d) indicator_pane_cp1_ParamLimits

0xb1e7,	// (0x0003c80d) indicator_pane_cp1

0xb1f6,	// (0x0003c81c) main_pane_idle_g1_cp_ParamLimits

0xb1f6,	// (0x0003c81c) main_pane_idle_g1_cp

0x244e,	// (0x00033a74) popup_ai_links_title_window

0xb20e,	// (0x0003c834) soft_indicator_pane_cp1_ParamLimits

0xb20e,	// (0x0003c834) soft_indicator_pane_cp1

0x5ac0,	// (0x000370e6) ai_links_pane_g1

0x5ac9,	// (0x000370ef) grid_ai_links_pane

0xd491,	// (0x0003eab7) ai_gene_pane_1

0x5aae,	// (0x000370d4) ai_gene_pane_2

0x5ab7,	// (0x000370dd) list_highlight_pane_cp4

0xd46d,	// (0x0003ea93) cell_ai_link_pane_ParamLimits

0xd46d,	// (0x0003ea93) cell_ai_link_pane

0x5a7d,	// (0x000370a3) cell_ai_link_pane_g1

0x2699,	// (0x00033cbf) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00040f44) cell_ai_link_pane_g

0xdf0f,	// (0x0003f535) grid_highlight_cp2

0xdf0f,	// (0x0003f535) bg_popup_sub_pane_cp1

0x2471,	// (0x00033a97) popup_ai_links_title_window_t1

0x59c9,	// (0x00036fef) ai_gene_pane_1_g1_ParamLimits

0x59c9,	// (0x00036fef) ai_gene_pane_1_g1

0x59d5,	// (0x00036ffb) ai_gene_pane_1_g2_ParamLimits

0x59d5,	// (0x00036ffb) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x00040f3a) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x00040f3a) ai_gene_pane_1_g

0x59e2,	// (0x00037008) ai_gene_pane_1_t1_ParamLimits

0x59e2,	// (0x00037008) ai_gene_pane_1_t1

0x5a16,	// (0x0003703c) grid_ai_soft_ind_pane

0x59b4,	// (0x00036fda) ai_gene_pane_2_t1_ParamLimits

0x59b4,	// (0x00036fda) ai_gene_pane_2_t1

0xb222,	// (0x0003c848) main_pane_empty_t1_ParamLimits

0xb222,	// (0x0003c848) main_pane_empty_t1

0xb23a,	// (0x0003c860) main_pane_empty_t2_ParamLimits

0xb23a,	// (0x0003c860) main_pane_empty_t2

0xb24f,	// (0x0003c875) main_pane_empty_t3_ParamLimits

0xb24f,	// (0x0003c875) main_pane_empty_t3

0xb261,	// (0x0003c887) main_pane_empty_t4_ParamLimits

0xb261,	// (0x0003c887) main_pane_empty_t4

0xb273,	// (0x0003c899) main_pane_empty_t5_ParamLimits

0xb273,	// (0x0003c899) main_pane_empty_t5

0x0004,

0xf590,	// (0x00040bb6) main_pane_empty_t_ParamLimits

0xf590,	// (0x00040bb6) main_pane_empty_t

0x2ba6,	// (0x000341cc) bg_popup_window_pane_ParamLimits

0x2ba6,	// (0x000341cc) bg_popup_window_pane

0x5710,	// (0x00036d36) find_popup_pane_cp2_ParamLimits

0x5710,	// (0x00036d36) find_popup_pane_cp2

0x571c,	// (0x00036d42) heading_pane_ParamLimits

0x571c,	// (0x00036d42) heading_pane

0xdf0f,	// (0x0003f535) bg_popup_sub_pane

0xd39c,	// (0x0003e9c2) bg_popup_window_pane_g1_ParamLimits

0xd39c,	// (0x0003e9c2) bg_popup_window_pane_g1

0xd3ab,	// (0x0003e9d1) bg_popup_window_pane_g2_ParamLimits

0xd3ab,	// (0x0003e9d1) bg_popup_window_pane_g2

0xd3b7,	// (0x0003e9dd) bg_popup_window_pane_g3_ParamLimits

0xd3b7,	// (0x0003e9dd) bg_popup_window_pane_g3

0xd3c3,	// (0x0003e9e9) bg_popup_window_pane_g4_ParamLimits

0xd3c3,	// (0x0003e9e9) bg_popup_window_pane_g4

0xd3d2,	// (0x0003e9f8) bg_popup_window_pane_g5_ParamLimits

0xd3d2,	// (0x0003e9f8) bg_popup_window_pane_g5

0xd3e2,	// (0x0003ea08) bg_popup_window_pane_g6_ParamLimits

0xd3e2,	// (0x0003ea08) bg_popup_window_pane_g6

0xd3ee,	// (0x0003ea14) bg_popup_window_pane_g7_ParamLimits

0xd3ee,	// (0x0003ea14) bg_popup_window_pane_g7

0xd3fd,	// (0x0003ea23) bg_popup_window_pane_g8_ParamLimits

0xd3fd,	// (0x0003ea23) bg_popup_window_pane_g8

0xd40c,	// (0x0003ea32) bg_popup_window_pane_g9_ParamLimits

0xd40c,	// (0x0003ea32) bg_popup_window_pane_g9

0x56f6,	// (0x00036d1c) bg_popup_window_pane_g10_ParamLimits

0x56f6,	// (0x00036d1c) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00040f02) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00040f02) bg_popup_window_pane_g

0x561f,	// (0x00036c45) bg_popup_heading_pane_ParamLimits

0x561f,	// (0x00036c45) bg_popup_heading_pane

0x1087,	// (0x000326ad) tabs_4_passive_pane_cp_srt_ParamLimits

0x1087,	// (0x000326ad) tabs_4_passive_pane_cp_srt

0x1099,	// (0x000326bf) tabs_4_passive_pane_srt_ParamLimits

0x5633,	// (0x00036c59) heading_pane_g2

0x1099,	// (0x000326bf) tabs_4_passive_pane_srt

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp3_srt

0x563b,	// (0x00036c61) heading_pane_t1_ParamLimits

0x563b,	// (0x00036c61) heading_pane_t1

0x5652,	// (0x00036c78) heading_pane_t2_ParamLimits

0x5652,	// (0x00036c78) heading_pane_t2

0x0001,

0xf8d7,	// (0x00040efd) heading_pane_t_ParamLimits

0xf8d7,	// (0x00040efd) heading_pane_t

0x514a,	// (0x00036770) bg_popup_heading_pane_g1

0x51f9,	// (0x0003681f) bg_popup_heading_pane_g2

0x5203,	// (0x00036829) bg_popup_heading_pane_g3

0x520d,	// (0x00036833) bg_popup_heading_pane_g4

0x5217,	// (0x0003683d) bg_popup_heading_pane_g5

0x5221,	// (0x00036847) bg_popup_heading_pane_g6

0x5229,	// (0x0003684f) bg_popup_heading_pane_g7

0x5231,	// (0x00036857) bg_popup_heading_pane_g8

0x523b,	// (0x00036861) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00040eb9) bg_popup_heading_pane_g

0x48f6,	// (0x00035f1c) bg_popup_sub_pane_g1

0x4906,	// (0x00035f2c) bg_popup_sub_pane_g2

0x48fe,	// (0x00035f24) bg_popup_sub_pane_g3

0x4916,	// (0x00035f3c) bg_popup_sub_pane_g4

0x490e,	// (0x00035f34) bg_popup_sub_pane_g5

0x491e,	// (0x00035f44) bg_popup_sub_pane_g6

0x4926,	// (0x00035f4c) bg_popup_sub_pane_g7

0x4936,	// (0x00035f5c) bg_popup_sub_pane_g8

0x492e,	// (0x00035f54) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x00040e93) bg_popup_sub_pane_g

0x24e3,	// (0x00033b09) bg_popup_window_pane_cp5_ParamLimits

0x24e3,	// (0x00033b09) bg_popup_window_pane_cp5

0x24ff,	// (0x00033b25) popup_note_window_g1_ParamLimits

0x24ff,	// (0x00033b25) popup_note_window_g1

0x250b,	// (0x00033b31) popup_note_window_t1_ParamLimits

0x250b,	// (0x00033b31) popup_note_window_t1

0x2521,	// (0x00033b47) popup_note_window_t2_ParamLimits

0x2521,	// (0x00033b47) popup_note_window_t2

0x2537,	// (0x00033b5d) popup_note_window_t3_ParamLimits

0x2537,	// (0x00033b5d) popup_note_window_t3

0x254d,	// (0x00033b73) popup_note_window_t4_ParamLimits

0x254d,	// (0x00033b73) popup_note_window_t4

0x2575,	// (0x00033b9b) popup_note_window_t5_ParamLimits

0x2575,	// (0x00033b9b) popup_note_window_t5

0x0004,

0xf59b,	// (0x00040bc1) popup_note_window_t_ParamLimits

0xf59b,	// (0x00040bc1) popup_note_window_t

0x2599,	// (0x00033bbf) bg_popup_window_pane_cp6_ParamLimits

0x2599,	// (0x00033bbf) bg_popup_window_pane_cp6

0x50c6,	// (0x000366ec) popup_note_image_window_g1_ParamLimits

0x50c6,	// (0x000366ec) popup_note_image_window_g1

0x50d2,	// (0x000366f8) popup_note_image_window_g2_ParamLimits

0x50d2,	// (0x000366f8) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00040e87) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00040e87) popup_note_image_window_g

0x50eb,	// (0x00036711) popup_note_image_window_t1_ParamLimits

0x50eb,	// (0x00036711) popup_note_image_window_t1

0x5104,	// (0x0003672a) popup_note_image_window_t2_ParamLimits

0x5104,	// (0x0003672a) popup_note_image_window_t2

0x511d,	// (0x00036743) popup_note_image_window_t3_ParamLimits

0x511d,	// (0x00036743) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00040e8c) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00040e8c) popup_note_image_window_t

0x4f86,	// (0x000365ac) bg_popup_window_pane_cp7_ParamLimits

0x4f86,	// (0x000365ac) bg_popup_window_pane_cp7

0x4fb6,	// (0x000365dc) popup_note_wait_window_g1_ParamLimits

0x4fb6,	// (0x000365dc) popup_note_wait_window_g1

0x4fc2,	// (0x000365e8) popup_note_wait_window_g2_ParamLimits

0x4fc2,	// (0x000365e8) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00040e75) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00040e75) popup_note_wait_window_g

0x4fda,	// (0x00036600) popup_note_wait_window_t1_ParamLimits

0x4fda,	// (0x00036600) popup_note_wait_window_t1

0x5001,	// (0x00036627) popup_note_wait_window_t2_ParamLimits

0x5001,	// (0x00036627) popup_note_wait_window_t2

0x501f,	// (0x00036645) popup_note_wait_window_t3_ParamLimits

0x501f,	// (0x00036645) popup_note_wait_window_t3

0x5032,	// (0x00036658) popup_note_wait_window_t4_ParamLimits

0x5032,	// (0x00036658) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00040e7c) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00040e7c) popup_note_wait_window_t

0x5057,	// (0x0003667d) wait_bar_pane_ParamLimits

0x5057,	// (0x0003667d) wait_bar_pane

0xdf0f,	// (0x0003f535) wait_anim_pane

0xdf0f,	// (0x0003f535) wait_border_pane

0xdf05,	// (0x0003f52b) wait_anim_pane_g1

0xdf05,	// (0x0003f52b) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x00040d40) wait_anim_pane_g

0x4f2a,	// (0x00036550) wait_border_pane_g1

0x4f35,	// (0x0003655b) wait_border_pane_g2

0x4f3e,	// (0x00036564) wait_border_pane_g3

0x0002,

0xf848,	// (0x00040e6e) wait_border_pane_g

0x4d94,	// (0x000363ba) bg_popup_window_pane_cp16_ParamLimits

0x4d94,	// (0x000363ba) bg_popup_window_pane_cp16

0x4e94,	// (0x000364ba) indicator_popup_pane_cp4_ParamLimits

0x4e94,	// (0x000364ba) indicator_popup_pane_cp4

0x4ea8,	// (0x000364ce) popup_query_data_window_t1_ParamLimits

0x4ea8,	// (0x000364ce) popup_query_data_window_t1

0x4eba,	// (0x000364e0) popup_query_data_window_t2_ParamLimits

0x4eba,	// (0x000364e0) popup_query_data_window_t2

0x4ed3,	// (0x000364f9) popup_query_data_window_t3_ParamLimits

0x4ed3,	// (0x000364f9) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00040e67) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00040e67) popup_query_data_window_t

0x4eed,	// (0x00036513) query_popup_data_pane_ParamLimits

0x4eed,	// (0x00036513) query_popup_data_pane

0x4f01,	// (0x00036527) query_popup_data_pane_cp1_ParamLimits

0x4f01,	// (0x00036527) query_popup_data_pane_cp1

0x4d94,	// (0x000363ba) bg_popup_window_pane_cp10_ParamLimits

0x4d94,	// (0x000363ba) bg_popup_window_pane_cp10

0x4dc6,	// (0x000363ec) indicator_popup_pane_ParamLimits

0x4dc6,	// (0x000363ec) indicator_popup_pane

0x4de8,	// (0x0003640e) popup_query_code_window_t1_ParamLimits

0x4de8,	// (0x0003640e) popup_query_code_window_t1

0x4e02,	// (0x00036428) popup_query_code_window_t2_ParamLimits

0x4e02,	// (0x00036428) popup_query_code_window_t2

0x4e4b,	// (0x00036471) popup_query_code_window_t3_ParamLimits

0x4e4b,	// (0x00036471) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x00040e60) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x00040e60) popup_query_code_window_t

0x4e7a,	// (0x000364a0) query_popup_pane_ParamLimits

0x4e7a,	// (0x000364a0) query_popup_pane

0x2599,	// (0x00033bbf) bg_popup_window_pane_cp15_ParamLimits

0x2599,	// (0x00033bbf) bg_popup_window_pane_cp15

0x25b9,	// (0x00033bdf) indicator_popup_pane_cp1_ParamLimits

0x25b9,	// (0x00033bdf) indicator_popup_pane_cp1

0x25cc,	// (0x00033bf2) indicator_popup_pane_cp2_ParamLimits

0x25cc,	// (0x00033bf2) indicator_popup_pane_cp2

0x25e7,	// (0x00033c0d) popup_query_data_code_window_g1_ParamLimits

0x25e7,	// (0x00033c0d) popup_query_data_code_window_g1

0x25fa,	// (0x00033c20) popup_query_data_code_window_t1_ParamLimits

0x25fa,	// (0x00033c20) popup_query_data_code_window_t1

0x260c,	// (0x00033c32) popup_query_data_code_window_t2_ParamLimits

0x260c,	// (0x00033c32) popup_query_data_code_window_t2

0x261e,	// (0x00033c44) popup_query_data_code_window_t3_ParamLimits

0x261e,	// (0x00033c44) popup_query_data_code_window_t3

0x2634,	// (0x00033c5a) popup_query_data_code_window_t4_ParamLimits

0x2634,	// (0x00033c5a) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00040bcc) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00040bcc) popup_query_data_code_window_t

0x0bed,	// (0x00032213) list_single_midp_graphic_pane_g3

0x264e,	// (0x00033c74) query_popup_data_pane_cp2_ParamLimits

0x2661,	// (0x00033c87) query_popup_pane_cp2_ParamLimits

0x2661,	// (0x00033c87) query_popup_pane_cp2

0xdf0f,	// (0x0003f535) bg_popup_window_pane_cp11

0x4d8c,	// (0x000363b2) heading_pane_cp5

0x2751,	// (0x00033d77) listscroll_popup_info_pane

0xdf0f,	// (0x0003f535) input_focus_pane_cp3

0x267c,	// (0x00033ca2) query_popup_pane_t1

0x268a,	// (0x00033cb0) list_popup_info_pane_ParamLimits

0x268a,	// (0x00033cb0) list_popup_info_pane

0x2699,	// (0x00033cbf) listscroll_popup_info_pane_g1

0x26a1,	// (0x00033cc7) scroll_pane_cp7

0x26ab,	// (0x00033cd1) popup_info_list_pane_t1_ParamLimits

0x26ab,	// (0x00033cd1) popup_info_list_pane_t1

0x26c5,	// (0x00033ceb) popup_info_list_pane_t2_ParamLimits

0x26c5,	// (0x00033ceb) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00040bd5) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00040bd5) popup_info_list_pane_t

0xdf0f,	// (0x0003f535) bg_popup_window_pane_cp12

0x6179,	// (0x0003779f) find_popup_pane

0x2267,	// (0x0003388d) bg_popup_window_pane_cp3

0x26df,	// (0x00033d05) heading_pane_cp3

0x26eb,	// (0x00033d11) listscroll_popup_graphic_pane

0xdf0f,	// (0x0003f535) bg_popup_window_pane_cp4

0xb2d5,	// (0x0003c8fb) heading_pane_cp4

0x2751,	// (0x00033d77) listscroll_popup_colour_pane

0xb2df,	// (0x0003c905) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb2df,	// (0x0003c905) cell_large_graphic_colour_none_popup_pane

0xb2f3,	// (0x0003c919) grid_large_graphic_colour_popup_pane_ParamLimits

0xb2f3,	// (0x0003c919) grid_large_graphic_colour_popup_pane

0xb31f,	// (0x0003c945) listscroll_popup_colour_pane_g1_ParamLimits

0xb31f,	// (0x0003c945) listscroll_popup_colour_pane_g1

0xb336,	// (0x0003c95c) listscroll_popup_colour_pane_g2_ParamLimits

0xb336,	// (0x0003c95c) listscroll_popup_colour_pane_g2

0xc361,	// (0x0003d987) listscroll_popup_colour_pane_g3_ParamLimits

0xc361,	// (0x0003d987) listscroll_popup_colour_pane_g3

0xc371,	// (0x0003d997) listscroll_popup_colour_pane_g4_ParamLimits

0xc371,	// (0x0003d997) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00040bda) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00040bda) listscroll_popup_colour_pane_g

0x27eb,	// (0x00033e11) scroll_pane_cp6_ParamLimits

0x27eb,	// (0x00033e11) scroll_pane_cp6

0xc385,	// (0x0003d9ab) cell_large_graphic_colour_popup_pane_ParamLimits

0xc385,	// (0x0003d9ab) cell_large_graphic_colour_popup_pane

0x2822,	// (0x00033e48) cell_large_graphic_colour_none_popup_pane_t1

0xdf0f,	// (0x0003f535) grid_highlight_pane_cp5

0x2831,	// (0x00033e57) cell_large_graphic_colour_popup_pane_g1

0x2839,	// (0x00033e5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00040be3) cell_large_graphic_colour_popup_pane_g

0x2841,	// (0x00033e67) cell_large_graphic_colour_popup_pane_g2_copy1

0x284a,	// (0x00033e70) grid_highlight_pane_cp4

0x2852,	// (0x00033e78) bg_popup_window_pane_cp8_ParamLimits

0x2852,	// (0x00033e78) bg_popup_window_pane_cp8

0x286d,	// (0x00033e93) popup_snote_single_text_window_g1_ParamLimits

0x286d,	// (0x00033e93) popup_snote_single_text_window_g1

0x287f,	// (0x00033ea5) popup_snote_single_text_window_t1_ParamLimits

0x287f,	// (0x00033ea5) popup_snote_single_text_window_t1

0x2892,	// (0x00033eb8) popup_snote_single_text_window_t2_ParamLimits

0x2892,	// (0x00033eb8) popup_snote_single_text_window_t2

0x28a5,	// (0x00033ecb) popup_snote_single_text_window_t3_ParamLimits

0x28a5,	// (0x00033ecb) popup_snote_single_text_window_t3

0x28de,	// (0x00033f04) popup_snote_single_text_window_t4_ParamLimits

0x28de,	// (0x00033f04) popup_snote_single_text_window_t4

0x2912,	// (0x00033f38) popup_snote_single_text_window_t5_ParamLimits

0x2912,	// (0x00033f38) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00040be8) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00040be8) popup_snote_single_text_window_t

0x2941,	// (0x00033f67) bg_popup_window_pane_cp9_ParamLimits

0x2941,	// (0x00033f67) bg_popup_window_pane_cp9

0x286d,	// (0x00033e93) popup_snote_single_graphic_window_g1_ParamLimits

0x286d,	// (0x00033e93) popup_snote_single_graphic_window_g1

0x294f,	// (0x00033f75) popup_snote_single_graphic_window_g2_ParamLimits

0x294f,	// (0x00033f75) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00040bf3) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00040bf3) popup_snote_single_graphic_window_g

0x295b,	// (0x00033f81) popup_snote_single_graphic_window_t1_ParamLimits

0x295b,	// (0x00033f81) popup_snote_single_graphic_window_t1

0x296e,	// (0x00033f94) popup_snote_single_graphic_window_t2_ParamLimits

0x296e,	// (0x00033f94) popup_snote_single_graphic_window_t2

0x2981,	// (0x00033fa7) popup_snote_single_graphic_window_t3_ParamLimits

0x2981,	// (0x00033fa7) popup_snote_single_graphic_window_t3

0x29ba,	// (0x00033fe0) popup_snote_single_graphic_window_t4_ParamLimits

0x29ba,	// (0x00033fe0) popup_snote_single_graphic_window_t4

0x29ee,	// (0x00034014) popup_snote_single_graphic_window_t5_ParamLimits

0x29ee,	// (0x00034014) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00040bf8) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00040bf8) popup_snote_single_graphic_window_t

0x60b7,	// (0x000376dd) grid_graphic_popup_pane_ParamLimits

0x60b7,	// (0x000376dd) grid_graphic_popup_pane

0x60e5,	// (0x0003770b) listscroll_popup_graphic_pane_g1_ParamLimits

0x60e5,	// (0x0003770b) listscroll_popup_graphic_pane_g1

0xd7a6,	// (0x0003edcc) listscroll_popup_graphic_pane_g2_ParamLimits

0xd7a6,	// (0x0003edcc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00040fdd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00040fdd) listscroll_popup_graphic_pane_g

0x610d,	// (0x00037733) scroll_pane_cp5

0xd766,	// (0x0003ed8c) cell_graphic_popup_pane_ParamLimits

0xd766,	// (0x0003ed8c) cell_graphic_popup_pane

0x6040,	// (0x00037666) cell_graphic_popup_pane_g1

0x6048,	// (0x0003766e) cell_graphic_popup_pane_g2

0x2841,	// (0x00033e67) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00040fd6) cell_graphic_popup_pane_g

0x6051,	// (0x00037677) cell_graphic_popup_pane_t2

0x284a,	// (0x00033e70) grid_highlight_pane_cp3

0x2a2f,	// (0x00034055) list_gen_pane_ParamLimits

0x2a2f,	// (0x00034055) list_gen_pane

0x2a61,	// (0x00034087) scroll_pane

0xd721,	// (0x0003ed47) bg_list_pane_g1_ParamLimits

0xd721,	// (0x0003ed47) bg_list_pane_g1

0x5fbd,	// (0x000375e3) bg_list_pane_g2_ParamLimits

0x5fbd,	// (0x000375e3) bg_list_pane_g2

0x5fd0,	// (0x000375f6) bg_list_pane_g3_ParamLimits

0x5fd0,	// (0x000375f6) bg_list_pane_g3

0x5fe2,	// (0x00037608) bg_list_pane_g4_ParamLimits

0x5fe2,	// (0x00037608) bg_list_pane_g4

0xd73c,	// (0x0003ed62) bg_list_pane_g5_ParamLimits

0xd73c,	// (0x0003ed62) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00040fcb) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00040fcb) bg_list_pane_g

0xd6e4,	// (0x0003ed0a) list_double2_graphic_large_graphic_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double2_graphic_large_graphic_pane

0xd6e4,	// (0x0003ed0a) list_double2_graphic_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double2_graphic_pane

0xd6e4,	// (0x0003ed0a) list_double2_large_graphic_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double2_large_graphic_pane

0xd6e4,	// (0x0003ed0a) list_double2_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double2_pane

0xd6e4,	// (0x0003ed0a) list_double_graphic_heading_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_graphic_heading_pane

0xd6e4,	// (0x0003ed0a) list_double_graphic_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_graphic_pane

0xd6e4,	// (0x0003ed0a) list_double_heading_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_heading_pane

0xd6e4,	// (0x0003ed0a) list_double_large_graphic_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_large_graphic_pane

0xd6e4,	// (0x0003ed0a) list_double_number_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_number_pane

0xd6e4,	// (0x0003ed0a) list_double_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_pane

0xd6e4,	// (0x0003ed0a) list_double_time_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_double_time_pane

0xd6e4,	// (0x0003ed0a) list_setting_number_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_setting_number_pane

0xd6e4,	// (0x0003ed0a) list_setting_pane_ParamLimits

0xd6e4,	// (0x0003ed0a) list_setting_pane

0xbcce,	// (0x0003d2f4) list_single_2graphic_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_2graphic_pane

0xbcce,	// (0x0003d2f4) list_single_graphic_heading_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_graphic_heading_pane

0xbcce,	// (0x0003d2f4) list_single_graphic_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_graphic_pane

0xbcce,	// (0x0003d2f4) list_single_heading_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_heading_pane

0xd70c,	// (0x0003ed32) list_single_large_graphic_pane_ParamLimits

0xd70c,	// (0x0003ed32) list_single_large_graphic_pane

0xbcce,	// (0x0003d2f4) list_single_number_heading_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_number_heading_pane

0xbcce,	// (0x0003d2f4) list_single_number_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_number_pane

0xbcce,	// (0x0003d2f4) list_single_pane_ParamLimits

0xbcce,	// (0x0003d2f4) list_single_pane

0xdf0f,	// (0x0003f535) list_highlight_pane_cp1

0x0c1c,	// (0x00032242) list_single_pane_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_pane_g1

0x0c28,	// (0x0003224e) list_single_pane_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_pane_g

0x117a,	// (0x000327a0) list_single_pane_t1_ParamLimits

0x117a,	// (0x000327a0) list_single_pane_t1

0x0c1c,	// (0x00032242) list_single_number_pane_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_number_pane_g1

0x0c28,	// (0x0003224e) list_single_number_pane_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_number_pane_g

0x0bb2,	// (0x000321d8) list_single_number_pane_t1_ParamLimits

0x0bb2,	// (0x000321d8) list_single_number_pane_t1

0xbc90,	// (0x0003d2b6) list_single_number_pane_t2_ParamLimits

0xbc90,	// (0x0003d2b6) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00040f8c) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00040f8c) list_single_number_pane_t

0xb34d,	// (0x0003c973) list_single_graphic_pane_g1_ParamLimits

0xb34d,	// (0x0003c973) list_single_graphic_pane_g1

0x0c1c,	// (0x00032242) list_single_graphic_pane_g2_ParamLimits

0x0c1c,	// (0x00032242) list_single_graphic_pane_g2

0x0c28,	// (0x0003224e) list_single_graphic_pane_g3_ParamLimits

0x0c28,	// (0x0003224e) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00040c03) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00040c03) list_single_graphic_pane_g

0xb359,	// (0x0003c97f) list_single_graphic_pane_t1_ParamLimits

0xb359,	// (0x0003c97f) list_single_graphic_pane_t1

0x0c1c,	// (0x00032242) list_single_heading_pane_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_heading_pane_g1

0x0c28,	// (0x0003224e) list_single_heading_pane_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_heading_pane_g

0xb36f,	// (0x0003c995) list_single_heading_pane_t1_ParamLimits

0xb36f,	// (0x0003c995) list_single_heading_pane_t1

0xb385,	// (0x0003c9ab) list_single_heading_pane_t2_ParamLimits

0xb385,	// (0x0003c9ab) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00040c0f) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00040c0f) list_single_heading_pane_t

0x0c1c,	// (0x00032242) list_single_number_heading_pane_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_number_heading_pane_g1

0x0c28,	// (0x0003224e) list_single_number_heading_pane_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_number_heading_pane_g

0xb36f,	// (0x0003c995) list_single_number_heading_pane_t1_ParamLimits

0xb36f,	// (0x0003c995) list_single_number_heading_pane_t1

0xb397,	// (0x0003c9bd) list_single_number_heading_pane_t2_ParamLimits

0xb397,	// (0x0003c9bd) list_single_number_heading_pane_t2

0x1154,	// (0x0003277a) list_single_number_heading_pane_t3_ParamLimits

0x1154,	// (0x0003277a) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00040c14) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00040c14) list_single_number_heading_pane_t

0x0b8e,	// (0x000321b4) list_single_graphic_heading_pane_g1_ParamLimits

0x0b8e,	// (0x000321b4) list_single_graphic_heading_pane_g1

0xb3a9,	// (0x0003c9cf) list_single_graphic_heading_pane_g4_ParamLimits

0xb3a9,	// (0x0003c9cf) list_single_graphic_heading_pane_g4

0x0c28,	// (0x0003224e) list_single_graphic_heading_pane_g5_ParamLimits

0x0c28,	// (0x0003224e) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00040c1b) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00040c1b) list_single_graphic_heading_pane_g

0xb36f,	// (0x0003c995) list_single_graphic_heading_pane_t1_ParamLimits

0xb36f,	// (0x0003c995) list_single_graphic_heading_pane_t1

0xb3ba,	// (0x0003c9e0) list_single_graphic_heading_pane_t2_ParamLimits

0xb3ba,	// (0x0003c9e0) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00040c22) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00040c22) list_single_graphic_heading_pane_t

0x1190,	// (0x000327b6) list_single_large_graphic_pane_g1_ParamLimits

0x1190,	// (0x000327b6) list_single_large_graphic_pane_g1

0x119c,	// (0x000327c2) list_single_large_graphic_pane_g2_ParamLimits

0x119c,	// (0x000327c2) list_single_large_graphic_pane_g2

0x11a8,	// (0x000327ce) list_single_large_graphic_pane_g3_ParamLimits

0x11a8,	// (0x000327ce) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00040c27) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00040c27) list_single_large_graphic_pane_g

0x4f35,	// (0x0003655b) wait_border_pane_g2_copy1

0xb3cc,	// (0x0003c9f2) list_single_large_graphic_pane_g4_cp2

0x11b4,	// (0x000327da) list_single_large_graphic_pane_t1_ParamLimits

0x11b4,	// (0x000327da) list_single_large_graphic_pane_t1

0xb3d4,	// (0x0003c9fa) list_double_pane_g1_ParamLimits

0xb3d4,	// (0x0003c9fa) list_double_pane_g1

0xb3e0,	// (0x0003ca06) list_double_pane_g2_ParamLimits

0xb3e0,	// (0x0003ca06) list_double_pane_g2

0x0001,

0xf608,	// (0x00040c2e) list_double_pane_g_ParamLimits

0xf608,	// (0x00040c2e) list_double_pane_g

0xb3ec,	// (0x0003ca12) list_double_pane_t1_ParamLimits

0xb3ec,	// (0x0003ca12) list_double_pane_t1

0xb402,	// (0x0003ca28) list_double_pane_t2_ParamLimits

0xb402,	// (0x0003ca28) list_double_pane_t2

0x0001,

0xf60d,	// (0x00040c33) list_double_pane_t_ParamLimits

0xf60d,	// (0x00040c33) list_double_pane_t

0xb414,	// (0x0003ca3a) list_double2_pane_g1_ParamLimits

0xb414,	// (0x0003ca3a) list_double2_pane_g1

0xb3e0,	// (0x0003ca06) list_double2_pane_g2_ParamLimits

0xb3e0,	// (0x0003ca06) list_double2_pane_g2

0x0001,

0xf612,	// (0x00040c38) list_double2_pane_g_ParamLimits

0xf612,	// (0x00040c38) list_double2_pane_g

0xb3ec,	// (0x0003ca12) list_double2_pane_t1_ParamLimits

0xb3ec,	// (0x0003ca12) list_double2_pane_t1

0xb425,	// (0x0003ca4b) list_double2_pane_t2_ParamLimits

0xb425,	// (0x0003ca4b) list_double2_pane_t2

0x0001,

0xf617,	// (0x00040c3d) list_double2_pane_t_ParamLimits

0xf617,	// (0x00040c3d) list_double2_pane_t

0xb3d4,	// (0x0003c9fa) list_double_number_pane_g1_ParamLimits

0xb3d4,	// (0x0003c9fa) list_double_number_pane_g1

0xb3e0,	// (0x0003ca06) list_double_number_pane_g2_ParamLimits

0xb3e0,	// (0x0003ca06) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00040c2e) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00040c2e) list_double_number_pane_g

0xb437,	// (0x0003ca5d) list_double_number_pane_t1_ParamLimits

0xb437,	// (0x0003ca5d) list_double_number_pane_t1

0xb449,	// (0x0003ca6f) list_double_number_pane_t2_ParamLimits

0xb449,	// (0x0003ca6f) list_double_number_pane_t2

0xb45f,	// (0x0003ca85) list_double_number_pane_t3_ParamLimits

0xb45f,	// (0x0003ca85) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00040c42) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00040c42) list_double_number_pane_t

0xb471,	// (0x0003ca97) list_double_graphic_pane_g1_ParamLimits

0xb471,	// (0x0003ca97) list_double_graphic_pane_g1

0xb47d,	// (0x0003caa3) list_double_graphic_pane_g2_ParamLimits

0xb47d,	// (0x0003caa3) list_double_graphic_pane_g2

0xb48c,	// (0x0003cab2) list_double_graphic_pane_g3_ParamLimits

0xb48c,	// (0x0003cab2) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00040c49) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00040c49) list_double_graphic_pane_g

0xb4a4,	// (0x0003caca) list_double_graphic_pane_t1_ParamLimits

0xb4a4,	// (0x0003caca) list_double_graphic_pane_t1

0xb4ba,	// (0x0003cae0) list_double_graphic_pane_t2_ParamLimits

0xb4ba,	// (0x0003cae0) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00040c52) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00040c52) list_double_graphic_pane_t

0xb471,	// (0x0003ca97) list_double2_graphic_pane_g1_ParamLimits

0xb471,	// (0x0003ca97) list_double2_graphic_pane_g1

0xb4cc,	// (0x0003caf2) list_double2_graphic_pane_g2_ParamLimits

0xb4cc,	// (0x0003caf2) list_double2_graphic_pane_g2

0xb4d8,	// (0x0003cafe) list_double2_graphic_pane_g3_ParamLimits

0xb4d8,	// (0x0003cafe) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00040c57) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00040c57) list_double2_graphic_pane_g

0xb449,	// (0x0003ca6f) list_double2_graphic_pane_t1_ParamLimits

0xb449,	// (0x0003ca6f) list_double2_graphic_pane_t1

0xb4e4,	// (0x0003cb0a) list_double2_graphic_pane_t2_ParamLimits

0xb4e4,	// (0x0003cb0a) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00040c5e) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00040c5e) list_double2_graphic_pane_t

0xb4f6,	// (0x0003cb1c) list_double_large_graphic_pane_g1_ParamLimits

0xb4f6,	// (0x0003cb1c) list_double_large_graphic_pane_g1

0xb414,	// (0x0003ca3a) list_double_large_graphic_pane_g2_ParamLimits

0xb414,	// (0x0003ca3a) list_double_large_graphic_pane_g2

0xb3e0,	// (0x0003ca06) list_double_large_graphic_pane_g3_ParamLimits

0xb3e0,	// (0x0003ca06) list_double_large_graphic_pane_g3

0xb521,	// (0x0003cb47) list_double_large_graphic_pane_g4_ParamLimits

0xb521,	// (0x0003cb47) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00040c63) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00040c63) list_double_large_graphic_pane_g

0xb533,	// (0x0003cb59) list_double_large_graphic_pane_t1_ParamLimits

0xb533,	// (0x0003cb59) list_double_large_graphic_pane_t1

0xb54c,	// (0x0003cb72) list_double_large_graphic_pane_t2_ParamLimits

0xb54c,	// (0x0003cb72) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00040c6e) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00040c6e) list_double_large_graphic_pane_t

0xb55e,	// (0x0003cb84) list_double2_large_graphic_pane_g1_ParamLimits

0xb55e,	// (0x0003cb84) list_double2_large_graphic_pane_g1

0xb414,	// (0x0003ca3a) list_double2_large_graphic_pane_g2_ParamLimits

0xb414,	// (0x0003ca3a) list_double2_large_graphic_pane_g2

0xb3e0,	// (0x0003ca06) list_double2_large_graphic_pane_g3_ParamLimits

0xb3e0,	// (0x0003ca06) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00040c73) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00040c73) list_double2_large_graphic_pane_g

0xb56a,	// (0x0003cb90) list_double2_large_graphic_pane_t1_ParamLimits

0xb56a,	// (0x0003cb90) list_double2_large_graphic_pane_t1

0xb580,	// (0x0003cba6) list_double2_large_graphic_pane_t2_ParamLimits

0xb580,	// (0x0003cba6) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00040c7a) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00040c7a) list_double2_large_graphic_pane_t

0xb592,	// (0x0003cbb8) list_double_heading_pane_g1_ParamLimits

0xb592,	// (0x0003cbb8) list_double_heading_pane_g1

0xb5a3,	// (0x0003cbc9) list_double_heading_pane_g2_ParamLimits

0xb5a3,	// (0x0003cbc9) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00040c7f) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00040c7f) list_double_heading_pane_g

0xb5af,	// (0x0003cbd5) list_double_heading_pane_t1_ParamLimits

0xb5af,	// (0x0003cbd5) list_double_heading_pane_t1

0xb5c5,	// (0x0003cbeb) list_double_heading_pane_t2_ParamLimits

0xb5c5,	// (0x0003cbeb) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00040c84) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00040c84) list_double_heading_pane_t

0xb5d7,	// (0x0003cbfd) list_double_graphic_heading_pane_g1_ParamLimits

0xb5d7,	// (0x0003cbfd) list_double_graphic_heading_pane_g1

0xb592,	// (0x0003cbb8) list_double_graphic_heading_pane_g2_ParamLimits

0xb592,	// (0x0003cbb8) list_double_graphic_heading_pane_g2

0xb5a3,	// (0x0003cbc9) list_double_graphic_heading_pane_g3_ParamLimits

0xb5a3,	// (0x0003cbc9) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00040c89) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00040c89) list_double_graphic_heading_pane_g

0xb5e3,	// (0x0003cc09) list_double_graphic_heading_pane_t1_ParamLimits

0xb5e3,	// (0x0003cc09) list_double_graphic_heading_pane_t1

0xb5f9,	// (0x0003cc1f) list_double_graphic_heading_pane_t2_ParamLimits

0xb5f9,	// (0x0003cc1f) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00040c90) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00040c90) list_double_graphic_heading_pane_t

0xb414,	// (0x0003ca3a) list_double_time_pane_g1_ParamLimits

0xb414,	// (0x0003ca3a) list_double_time_pane_g1

0xb3e0,	// (0x0003ca06) list_double_time_pane_g2_ParamLimits

0xb3e0,	// (0x0003ca06) list_double_time_pane_g2

0x0001,

0xf612,	// (0x00040c38) list_double_time_pane_g_ParamLimits

0xf612,	// (0x00040c38) list_double_time_pane_g

0xb56a,	// (0x0003cb90) list_double_time_pane_t1_ParamLimits

0xb56a,	// (0x0003cb90) list_double_time_pane_t1

0xb60b,	// (0x0003cc31) list_double_time_pane_t2_ParamLimits

0xb60b,	// (0x0003cc31) list_double_time_pane_t2

0xb61d,	// (0x0003cc43) list_double_time_pane_t3_ParamLimits

0xb61d,	// (0x0003cc43) list_double_time_pane_t3

0xb62f,	// (0x0003cc55) list_double_time_pane_t4_ParamLimits

0xb62f,	// (0x0003cc55) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x00040c95) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x00040c95) list_double_time_pane_t

0xb641,	// (0x0003cc67) list_setting_pane_g1_ParamLimits

0xb641,	// (0x0003cc67) list_setting_pane_g1

0xb64d,	// (0x0003cc73) list_setting_pane_g2_ParamLimits

0xb64d,	// (0x0003cc73) list_setting_pane_g2

0x0001,

0xf678,	// (0x00040c9e) list_setting_pane_g_ParamLimits

0xf678,	// (0x00040c9e) list_setting_pane_g

0xb659,	// (0x0003cc7f) list_setting_pane_t1_ParamLimits

0xb659,	// (0x0003cc7f) list_setting_pane_t1

0xb673,	// (0x0003cc99) list_setting_pane_t2_ParamLimits

0xb673,	// (0x0003cc99) list_setting_pane_t2

0x0002,

0xf67d,	// (0x00040ca3) list_setting_pane_t_ParamLimits

0xf67d,	// (0x00040ca3) list_setting_pane_t

0xb6b2,	// (0x0003ccd8) set_value_pane_cp_ParamLimits

0xb6b2,	// (0x0003ccd8) set_value_pane_cp

0xb6c0,	// (0x0003cce6) list_setting_number_pane_g1_ParamLimits

0xb6c0,	// (0x0003cce6) list_setting_number_pane_g1

0xb6cc,	// (0x0003ccf2) list_setting_number_pane_g2_ParamLimits

0xb6cc,	// (0x0003ccf2) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x00040caa) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x00040caa) list_setting_number_pane_g

0xb6d8,	// (0x0003ccfe) list_setting_number_pane_t1_ParamLimits

0xb6d8,	// (0x0003ccfe) list_setting_number_pane_t1

0xb6f1,	// (0x0003cd17) list_setting_number_pane_t2_ParamLimits

0xb6f1,	// (0x0003cd17) list_setting_number_pane_t2

0xb70b,	// (0x0003cd31) list_setting_number_pane_t3_ParamLimits

0xb70b,	// (0x0003cd31) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x00040caf) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x00040caf) list_setting_number_pane_t

0xb6b2,	// (0x0003ccd8) set_value_pane_ParamLimits

0xb6b2,	// (0x0003ccd8) set_value_pane

0x2a95,	// (0x000340bb) bg_set_opt_pane_ParamLimits

0x2a95,	// (0x000340bb) bg_set_opt_pane

0x0275,	// (0x0003189b) set_value_pane_t1

0x2ab6,	// (0x000340dc) slider_set_pane_cp3

0x2abf,	// (0x000340e5) volume_small_pane_cp

0x2ac8,	// (0x000340ee) list_form_gen_pane

0x2ad1,	// (0x000340f7) scroll_pane_cp8

0xb74e,	// (0x0003cd74) form_field_data_pane_ParamLimits

0xb74e,	// (0x0003cd74) form_field_data_pane

0xb769,	// (0x0003cd8f) form_field_data_wide_pane_ParamLimits

0xb769,	// (0x0003cd8f) form_field_data_wide_pane

0x02d0,	// (0x000318f6) form_field_popup_pane_ParamLimits

0x02d0,	// (0x000318f6) form_field_popup_pane

0xb78d,	// (0x0003cdb3) form_field_popup_wide_pane_ParamLimits

0xb78d,	// (0x0003cdb3) form_field_popup_wide_pane

0x0313,	// (0x00031939) form_field_slider_pane_ParamLimits

0x0313,	// (0x00031939) form_field_slider_pane

0x0326,	// (0x0003194c) form_field_slider_wide_pane_ParamLimits

0x0326,	// (0x0003194c) form_field_slider_wide_pane

0x2ae2,	// (0x00034108) data_form_pane

0xb7b8,	// (0x0003cdde) form_field_data_pane_t1

0x2aee,	// (0x00034114) input_focus_pane

0x2afc,	// (0x00034122) data_form_wide_pane

0x0369,	// (0x0003198f) form_field_data_wide_pane_t1

0x285f,	// (0x00033e85) input_focus_pane_cp6

0xb7d2,	// (0x0003cdf8) form_field_popup_pane_t1

0x2aee,	// (0x00034114) input_focus_pane_cp7

0x2b28,	// (0x0003414e) list_form_pane

0x03ad,	// (0x000319d3) form_field_popup_wide_pane_t1

0x2aee,	// (0x00034114) input_focus_pane_cp8

0x2b34,	// (0x0003415a) list_form_wide_pane

0xb7f4,	// (0x0003ce1a) form_field_slider_pane_t1_ParamLimits

0xb7f4,	// (0x0003ce1a) form_field_slider_pane_t1

0xb80c,	// (0x0003ce32) form_field_slider_pane_t2_ParamLimits

0xb80c,	// (0x0003ce32) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x00040cbf) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x00040cbf) form_field_slider_pane_t

0x24e3,	// (0x00033b09) input_focus_pane_cp9_ParamLimits

0x24e3,	// (0x00033b09) input_focus_pane_cp9

0xb821,	// (0x0003ce47) slider_cont_pane_ParamLimits

0xb821,	// (0x0003ce47) slider_cont_pane

0x2b43,	// (0x00034169) form_field_slider_wide_pane_t1_ParamLimits

0x2b43,	// (0x00034169) form_field_slider_wide_pane_t1

0x040b,	// (0x00031a31) form_field_slider_wide_pane_t2_ParamLimits

0x040b,	// (0x00031a31) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x00040cc4) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x00040cc4) form_field_slider_wide_pane_t

0x24e3,	// (0x00033b09) input_focus_pane_cp10_ParamLimits

0x24e3,	// (0x00033b09) input_focus_pane_cp10

0xb835,	// (0x0003ce5b) slider_cont_pane_cp1_ParamLimits

0xb835,	// (0x0003ce5b) slider_cont_pane_cp1

0xb849,	// (0x0003ce6f) slider_form_pane_cp

0x2b55,	// (0x0003417b) input_focus_pane_g1

0x2b5d,	// (0x00034183) input_focus_pane_g2

0x2b65,	// (0x0003418b) input_focus_pane_g3

0x2b6d,	// (0x00034193) input_focus_pane_g4

0x2b75,	// (0x0003419b) input_focus_pane_g5

0x2b7d,	// (0x000341a3) input_focus_pane_g6

0x2b85,	// (0x000341ab) input_focus_pane_g7

0x2b8d,	// (0x000341b3) input_focus_pane_g8

0x2b95,	// (0x000341bb) input_focus_pane_g9

0xdf05,	// (0x0003f52b) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x00040cc9) input_focus_pane_g

0x4f3e,	// (0x00036564) wait_border_pane_g3_copy1

0xb851,	// (0x0003ce77) data_form_pane_t1

0xdf05,	// (0x0003f52b) wait_anim_pane_g1_copy1

0xbca2,	// (0x0003d2c8) data_form_wide_pane_t1

0x046b,	// (0x00031a91) list_form_graphic_pane_cp_ParamLimits

0x046b,	// (0x00031a91) list_form_graphic_pane_cp

0x5ec3,	// (0x000374e9) slider_form_pane_g1

0x5ecc,	// (0x000374f2) slider_form_pane_g2

0x0006,

0xf996,	// (0x00040fbc) slider_form_pane_g

0x046b,	// (0x00031a91) list_form_graphic_pane_ParamLimits

0x046b,	// (0x00031a91) list_form_graphic_pane

0x047d,	// (0x00031aa3) list_form_graphic_pane_g1

0x0485,	// (0x00031aab) list_form_graphic_pane_t1_ParamLimits

0x0485,	// (0x00031aab) list_form_graphic_pane_t1

0x2267,	// (0x0003388d) list_highlight_pane_cp5_ParamLimits

0x2267,	// (0x0003388d) list_highlight_pane_cp5

0xb86b,	// (0x0003ce91) find_pane_g1

0x2b9d,	// (0x000341c3) input_find_pane

0xb874,	// (0x0003ce9a) input_find_pane_g1_ParamLimits

0xb874,	// (0x0003ce9a) input_find_pane_g1

0xb880,	// (0x0003cea6) input_find_pane_t1_ParamLimits

0xb880,	// (0x0003cea6) input_find_pane_t1

0xb895,	// (0x0003cebb) input_find_pane_t2_ParamLimits

0xb895,	// (0x0003cebb) input_find_pane_t2

0x0001,

0xf6b8,	// (0x00040cde) input_find_pane_t_ParamLimits

0xf6b8,	// (0x00040cde) input_find_pane_t

0x2ba6,	// (0x000341cc) input_focus_pane_cp5_ParamLimits

0x2ba6,	// (0x000341cc) input_focus_pane_cp5

0xc3bc,	// (0x0003d9e2) bg_popup_window_pane_cp2_ParamLimits

0xc3bc,	// (0x0003d9e2) bg_popup_window_pane_cp2

0xc3c9,	// (0x0003d9ef) listscroll_menu_pane_ParamLimits

0xc3c9,	// (0x0003d9ef) listscroll_menu_pane

0xc3d5,	// (0x0003d9fb) popup_submenu_window_ParamLimits

0xc3d5,	// (0x0003d9fb) popup_submenu_window

0x2c09,	// (0x0003422f) find_popup_pane_g1

0x2c11,	// (0x00034237) input_popup_find_pane_cp

0x2ba6,	// (0x000341cc) input_focus_pane_cp4_ParamLimits

0x2ba6,	// (0x000341cc) input_focus_pane_cp4

0x2c29,	// (0x0003424f) input_popup_find_pane_t1_ParamLimits

0x2c29,	// (0x0003424f) input_popup_find_pane_t1

0xdf0f,	// (0x0003f535) bg_popup_sub_pane_cp

0x2f3f,	// (0x00034565) listscroll_popup_sub_pane

0x2f47,	// (0x0003456d) list_submenu_pane_ParamLimits

0x2f47,	// (0x0003456d) list_submenu_pane

0x2f58,	// (0x0003457e) scroll_pane_cp4

0x2f60,	// (0x00034586) list_single_popup_submenu_pane_ParamLimits

0x2f60,	// (0x00034586) list_single_popup_submenu_pane

0x2f75,	// (0x0003459b) list_single_popup_submenu_pane_g1

0x2f7d,	// (0x000345a3) list_single_popup_submenu_pane_t1_ParamLimits

0x2f7d,	// (0x000345a3) list_single_popup_submenu_pane_t1

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp1_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp1

0xc413,	// (0x0003da39) tabs_2_active_pane_g1

0xc41b,	// (0x0003da41) tabs_2_active_pane_t1

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp1_ParamLimits

0x24e3,	// (0x00033b09) bg_passive_tab_pane_cp1

0xc413,	// (0x0003da39) tabs_2_passive_pane_g1

0xc41b,	// (0x0003da41) tabs_2_passive_pane_t1

0x2267,	// (0x0003388d) bg_active_tab_pane_cp4

0xc42d,	// (0x0003da53) tabs_2_long_active_pane_t1

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp4

0x0bf5,	// (0x0003221b) list_single_midp_graphic_pane_g4_ParamLimits

0x2267,	// (0x0003388d) bg_active_tab_pane_cp5

0xc440,	// (0x0003da66) tabs_3_long_active_pane_t1

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp5

0x0bf5,	// (0x0003221b) list_single_midp_graphic_pane_g4

0x2267,	// (0x0003388d) bg_popup_window_pane_cp13_ParamLimits

0x2267,	// (0x0003388d) bg_popup_window_pane_cp13

0x2ff4,	// (0x0003461a) listscroll_popup_fast_pane_ParamLimits

0x2ff4,	// (0x0003461a) listscroll_popup_fast_pane

0x3003,	// (0x00034629) grid_popup_fast_pane_ParamLimits

0x3003,	// (0x00034629) grid_popup_fast_pane

0x3015,	// (0x0003463b) scroll_pane_cp9_ParamLimits

0x3015,	// (0x0003463b) scroll_pane_cp9

0x7819,	// (0x00038e3f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7819,	// (0x00038e3f) list_single_graphic_hl_pane_t1_cp2

0x3039,	// (0x0003465f) input_focus_pane_cp20_ParamLimits

0x3039,	// (0x0003465f) input_focus_pane_cp20

0x3047,	// (0x0003466d) query_popup_data_pane_t1_ParamLimits

0x3047,	// (0x0003466d) query_popup_data_pane_t1

0x305a,	// (0x00034680) query_popup_data_pane_t2_ParamLimits

0x305a,	// (0x00034680) query_popup_data_pane_t2

0x30a0,	// (0x000346c6) query_popup_data_pane_t3_ParamLimits

0x30a0,	// (0x000346c6) query_popup_data_pane_t3

0x30e1,	// (0x00034707) query_popup_data_pane_t4_ParamLimits

0x30e1,	// (0x00034707) query_popup_data_pane_t4

0x311d,	// (0x00034743) query_popup_data_pane_t5_ParamLimits

0x311d,	// (0x00034743) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x00040ce3) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x00040ce3) query_popup_data_pane_t

0x2b55,	// (0x0003417b) bg_set_opt_pane_g1

0x2b5d,	// (0x00034183) bg_set_opt_pane_g2

0x2b65,	// (0x0003418b) bg_set_opt_pane_g3

0x2b6d,	// (0x00034193) bg_set_opt_pane_g4

0x2b75,	// (0x0003419b) bg_set_opt_pane_g5

0x2b7d,	// (0x000341a3) bg_set_opt_pane_g6

0x2b85,	// (0x000341ab) bg_set_opt_pane_g7

0x2b8d,	// (0x000341b3) bg_set_opt_pane_g8

0x2b95,	// (0x000341bb) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x00040cee) bg_set_opt_pane_g

0x0808,	// (0x00031e2e) control_top_pane_stacon_ParamLimits

0x0808,	// (0x00031e2e) control_top_pane_stacon

0x085b,	// (0x00031e81) signal_pane_stacon_ParamLimits

0x085b,	// (0x00031e81) signal_pane_stacon

0x36c9,	// (0x00034cef) stacon_top_pane_g1_ParamLimits

0x36c9,	// (0x00034cef) stacon_top_pane_g1

0x0880,	// (0x00031ea6) title_pane_stacon_ParamLimits

0x0880,	// (0x00031ea6) title_pane_stacon

0x08aa,	// (0x00031ed0) uni_indicator_pane_stacon_ParamLimits

0x08aa,	// (0x00031ed0) uni_indicator_pane_stacon

0x08c2,	// (0x00031ee8) battery_pane_stacon_ParamLimits

0x08c2,	// (0x00031ee8) battery_pane_stacon

0x0906,	// (0x00031f2c) control_bottom_pane_stacon_ParamLimits

0x0906,	// (0x00031f2c) control_bottom_pane_stacon

0x0929,	// (0x00031f4f) navi_pane_stacon_ParamLimits

0x0929,	// (0x00031f4f) navi_pane_stacon

0x36eb,	// (0x00034d11) stacon_bottom_pane_g1_ParamLimits

0x36eb,	// (0x00034d11) stacon_bottom_pane_g1

0x04d9,	// (0x00031aff) aid_levels_signal_lsc_ParamLimits

0x04d9,	// (0x00031aff) aid_levels_signal_lsc

0x04f0,	// (0x00031b16) signal_pane_stacon_g1_ParamLimits

0x04f0,	// (0x00031b16) signal_pane_stacon_g1

0x0504,	// (0x00031b2a) signal_pane_stacon_g2_ParamLimits

0x0504,	// (0x00031b2a) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x00040d01) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x00040d01) signal_pane_stacon_g

0x0539,	// (0x00031b5f) title_pane_stacon_t1_ParamLimits

0x0539,	// (0x00031b5f) title_pane_stacon_t1

0x3161,	// (0x00034787) uni_indicator_pane_stacon_g1

0x316b,	// (0x00034791) uni_indicator_pane_stacon_g2

0x3175,	// (0x0003479b) uni_indicator_pane_stacon_g3

0x317f,	// (0x000347a5) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x00040d0d) uni_indicator_pane_stacon_g

0x055e,	// (0x00031b84) control_top_pane_stacon_g1

0x0566,	// (0x00031b8c) control_top_pane_stacon_t1_ParamLimits

0x0566,	// (0x00031b8c) control_top_pane_stacon_t1

0x059d,	// (0x00031bc3) aid_levels_battery_lsc_ParamLimits

0x059d,	// (0x00031bc3) aid_levels_battery_lsc

0x05b5,	// (0x00031bdb) battery_pane_stacon_g1_ParamLimits

0x05b5,	// (0x00031bdb) battery_pane_stacon_g1

0x05c8,	// (0x00031bee) battery_pane_stacon_g2_ParamLimits

0x05c8,	// (0x00031bee) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x00040d16) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x00040d16) battery_pane_stacon_g

0x0606,	// (0x00031c2c) navi_icon_pane_stacon

0x061a,	// (0x00031c40) navi_navi_pane_stacon

0x0606,	// (0x00031c2c) navi_text_pane_stacon

0x055e,	// (0x00031b84) control_bottom_pane_stacon_g1

0x0630,	// (0x00031c56) control_bottom_pane_stacon_t1_ParamLimits

0x0630,	// (0x00031c56) control_bottom_pane_stacon_t1

0xc452,	// (0x0003da78) grid_app_pane_ParamLimits

0xc452,	// (0x0003da78) grid_app_pane

0xc48a,	// (0x0003dab0) scroll_pane_cp15_ParamLimits

0xc48a,	// (0x0003dab0) scroll_pane_cp15

0xc4a7,	// (0x0003dacd) cell_app_pane_ParamLimits

0xc4a7,	// (0x0003dacd) cell_app_pane

0xc4e8,	// (0x0003db0e) cell_app_pane_g1_ParamLimits

0xc4e8,	// (0x0003db0e) cell_app_pane_g1

0x322c,	// (0x00034852) cell_app_pane_g2_ParamLimits

0x322c,	// (0x00034852) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x00040d1b) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x00040d1b) cell_app_pane_g

0x3238,	// (0x0003485e) cell_app_pane_t1_ParamLimits

0x3238,	// (0x0003485e) cell_app_pane_t1

0x324a,	// (0x00034870) grid_highlight_pane_ParamLimits

0x324a,	// (0x00034870) grid_highlight_pane

0x2b55,	// (0x0003417b) cell_highlight_pane_g1

0x2b5d,	// (0x00034183) cell_highlight_pane_g2

0x2b65,	// (0x0003418b) cell_highlight_pane_g3

0x2b6d,	// (0x00034193) cell_highlight_pane_g4

0x2b75,	// (0x0003419b) cell_highlight_pane_g5

0x2b7d,	// (0x000341a3) cell_highlight_pane_g6

0x2b85,	// (0x000341ab) cell_highlight_pane_g7

0x2b8d,	// (0x000341b3) cell_highlight_pane_g8

0x2b95,	// (0x000341bb) cell_highlight_pane_g9

0xdf05,	// (0x0003f52b) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x00040cc9) cell_highlight_pane_g

0x325b,	// (0x00034881) bg_scroll_pane

0x067a,	// (0x00031ca0) scroll_handle_pane

0x32a2,	// (0x000348c8) scroll_bg_pane_g1

0x32b7,	// (0x000348dd) scroll_bg_pane_g2

0x32cf,	// (0x000348f5) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x00040d20) scroll_bg_pane_g

0x32e4,	// (0x0003490a) scroll_handle_focus_pane_ParamLimits

0x32e4,	// (0x0003490a) scroll_handle_focus_pane

0x32a2,	// (0x000348c8) scroll_handle_pane_g1

0x32f1,	// (0x00034917) scroll_handle_pane_g2

0x32cf,	// (0x000348f5) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x00040d27) scroll_handle_pane_g

0x2ba6,	// (0x000341cc) bg_popup_sub_pane_cp21_ParamLimits

0x2ba6,	// (0x000341cc) bg_popup_sub_pane_cp21

0x3305,	// (0x0003492b) popup_fep_japan_predictive_window_t1_ParamLimits

0x3305,	// (0x0003492b) popup_fep_japan_predictive_window_t1

0x331c,	// (0x00034942) popup_fep_japan_predictive_window_t2_ParamLimits

0x331c,	// (0x00034942) popup_fep_japan_predictive_window_t2

0x334f,	// (0x00034975) popup_fep_japan_predictive_window_t3_ParamLimits

0x334f,	// (0x00034975) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x00040d2e) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x00040d2e) popup_fep_japan_predictive_window_t

0xdf0f,	// (0x0003f535) bg_popup_sub_pane_cp23

0x3386,	// (0x000349ac) listscroll_japin_cand_pane

0x338e,	// (0x000349b4) popup_fep_japan_candidate_window_t1

0x339c,	// (0x000349c2) candidate_pane_ParamLimits

0x339c,	// (0x000349c2) candidate_pane

0x33ae,	// (0x000349d4) scroll_pane_cp30

0x33b8,	// (0x000349de) list_single_popup_jap_candidate_pane_ParamLimits

0x33b8,	// (0x000349de) list_single_popup_jap_candidate_pane

0xdf0f,	// (0x0003f535) list_highlight_pane_cp30

0x33cc,	// (0x000349f2) list_single_popup_jap_candidate_pane_t1

0xc50c,	// (0x0003db32) level_1_signal

0xc51e,	// (0x0003db44) level_2_signal

0xc531,	// (0x0003db57) level_3_signal

0xc544,	// (0x0003db6a) level_4_signal

0xc557,	// (0x0003db7d) level_5_signal

0xc56a,	// (0x0003db90) level_6_signal

0xc57d,	// (0x0003dba3) level_7_signal

0xc50c,	// (0x0003db32) level_1_battery

0xc51e,	// (0x0003db44) level_2_battery

0xc531,	// (0x0003db57) level_3_battery

0xc544,	// (0x0003db6a) level_4_battery

0xc557,	// (0x0003db7d) level_5_battery

0xc56a,	// (0x0003db90) level_6_battery

0xc57d,	// (0x0003dba3) level_7_battery

0x344e,	// (0x00034a74) list_menu_pane_ParamLimits

0x344e,	// (0x00034a74) list_menu_pane

0x345f,	// (0x00034a85) scroll_pane_cp25_ParamLimits

0x345f,	// (0x00034a85) scroll_pane_cp25

0x3478,	// (0x00034a9e) list_double2_graphic_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double2_graphic_pane_cp2

0x3478,	// (0x00034a9e) list_double2_large_graphic_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double2_large_graphic_pane_cp2

0x3478,	// (0x00034a9e) list_double2_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double2_pane_cp2

0x3478,	// (0x00034a9e) list_double_graphic_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double_graphic_pane_cp2

0x3478,	// (0x00034a9e) list_double_large_graphic_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double_large_graphic_pane_cp2

0x3478,	// (0x00034a9e) list_double_number_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double_number_pane_cp2

0x3478,	// (0x00034a9e) list_double_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double_pane_cp2

0xc590,	// (0x0003dbb6) list_single_2graphic_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_2graphic_pane_cp2

0xc590,	// (0x0003dbb6) list_single_graphic_heading_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_graphic_heading_pane_cp2

0xc590,	// (0x0003dbb6) list_single_graphic_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_graphic_pane_cp2

0xc590,	// (0x0003dbb6) list_single_heading_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_heading_pane_cp2

0x34bb,	// (0x00034ae1) list_single_large_graphic_pane_cp2_ParamLimits

0x34bb,	// (0x00034ae1) list_single_large_graphic_pane_cp2

0xc590,	// (0x0003dbb6) list_single_number_heading_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_number_heading_pane_cp2

0xc590,	// (0x0003dbb6) list_single_number_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_number_pane_cp2

0xc590,	// (0x0003dbb6) list_single_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_pane_cp2

0x3510,	// (0x00034b36) bg_popup_sub_pane_cp22

0x072c,	// (0x00031d52) popup_side_volume_key_window_g1

0x0756,	// (0x00031d7c) popup_side_volume_key_window_t1

0x0774,	// (0x00031d9a) volume_small_pane_cp1

0x24e3,	// (0x00033b09) bg_popup_sub_pane_cp24_ParamLimits

0x24e3,	// (0x00033b09) bg_popup_sub_pane_cp24

0x3526,	// (0x00034b4c) fep_china_uni_candidate_pane_ParamLimits

0x3526,	// (0x00034b4c) fep_china_uni_candidate_pane

0x353a,	// (0x00034b60) fep_china_uni_entry_pane

0x354a,	// (0x00034b70) popup_fep_china_uni_window_g1

0x3566,	// (0x00034b8c) fep_china_uni_entry_pane_g1

0x3570,	// (0x00034b96) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00040d5b) fep_china_uni_entry_pane_g

0x357a,	// (0x00034ba0) fep_entry_item_pane

0x3584,	// (0x00034baa) fep_candidate_item_pane

0x358c,	// (0x00034bb2) fep_china_uni_candidate_pane_g1

0x3596,	// (0x00034bbc) fep_china_uni_candidate_pane_g2

0x359e,	// (0x00034bc4) fep_china_uni_candidate_pane_g3

0x35a6,	// (0x00034bcc) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x00040d60) fep_china_uni_candidate_pane_g

0xdf05,	// (0x0003f52b) fep_entry_item_pane_g1

0x35b0,	// (0x00034bd6) fep_entry_item_pane_t1_ParamLimits

0x35b0,	// (0x00034bd6) fep_entry_item_pane_t1

0x35c6,	// (0x00034bec) fep_candidate_item_pane_t1_ParamLimits

0x35c6,	// (0x00034bec) fep_candidate_item_pane_t1

0x35db,	// (0x00034c01) fep_candidate_item_pane_t2_ParamLimits

0x35db,	// (0x00034c01) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00040d69) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00040d69) fep_candidate_item_pane_t

0x2267,	// (0x0003388d) list_highlight_pane_cp31_ParamLimits

0x2267,	// (0x0003388d) list_highlight_pane_cp31

0x35ed,	// (0x00034c13) level_1_signal_lsc

0x35f6,	// (0x00034c1c) level_2_signal_lsc

0x35ff,	// (0x00034c25) level_3_signal_lsc

0x3608,	// (0x00034c2e) level_4_signal_lsc

0x3611,	// (0x00034c37) level_5_signal_lsc

0x361a,	// (0x00034c40) level_6_signal_lsc

0x3623,	// (0x00034c49) level_7_signal_lsc

0x3623,	// (0x00034c49) level_1_battery_lsc

0x362c,	// (0x00034c52) level_2_battery_lsc

0x3635,	// (0x00034c5b) level_3_battery_lsc

0x363e,	// (0x00034c64) level_4_battery_lsc

0x3647,	// (0x00034c6d) level_5_battery_lsc

0x3650,	// (0x00034c76) level_6_battery_lsc

0x35ed,	// (0x00034c13) level_7_battery_lsc

0x3659,	// (0x00034c7f) scroll_handle_focus_pane_g1

0x3662,	// (0x00034c88) scroll_handle_focus_pane_g2

0x366b,	// (0x00034c91) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x00040d6e) scroll_handle_focus_pane_g

0xb8b3,	// (0x0003ced9) list_single_2graphic_pane_g1_ParamLimits

0xb8b3,	// (0x0003ced9) list_single_2graphic_pane_g1

0xb3a9,	// (0x0003c9cf) list_single_2graphic_pane_g2_ParamLimits

0xb3a9,	// (0x0003c9cf) list_single_2graphic_pane_g2

0x0c28,	// (0x0003224e) list_single_2graphic_pane_g3_ParamLimits

0x0c28,	// (0x0003224e) list_single_2graphic_pane_g3

0xb8bf,	// (0x0003cee5) list_single_2graphic_pane_g4_ParamLimits

0xb8bf,	// (0x0003cee5) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00040d75) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00040d75) list_single_2graphic_pane_g

0xb8cb,	// (0x0003cef1) list_single_2graphic_pane_t1_ParamLimits

0xb8cb,	// (0x0003cef1) list_single_2graphic_pane_t1

0xb8f9,	// (0x0003cf1f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb8f9,	// (0x0003cf1f) list_double2_graphic_large_graphic_pane_g1

0xb414,	// (0x0003ca3a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb414,	// (0x0003ca3a) list_double2_graphic_large_graphic_pane_g2

0xb3e0,	// (0x0003ca06) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb3e0,	// (0x0003ca06) list_double2_graphic_large_graphic_pane_g3

0xb90b,	// (0x0003cf31) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb90b,	// (0x0003cf31) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x00040d7e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x00040d7e) list_double2_graphic_large_graphic_pane_g

0xb917,	// (0x0003cf3d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb917,	// (0x0003cf3d) list_double2_graphic_large_graphic_pane_t1

0xb92d,	// (0x0003cf53) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb92d,	// (0x0003cf53) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00040d87) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00040d87) list_double2_graphic_large_graphic_pane_t

0x37ad,	// (0x00034dd3) popup_fast_swap_window_ParamLimits

0x37ad,	// (0x00034dd3) popup_fast_swap_window

0x37cb,	// (0x00034df1) popup_side_volume_key_window

0x37e9,	// (0x00034e0f) stacon_top_pane

0x37f3,	// (0x00034e19) status_pane_ParamLimits

0x37f3,	// (0x00034e19) status_pane

0x37e9,	// (0x00034e0f) status_small_pane

0xdf0f,	// (0x0003f535) control_pane

0xdf0f,	// (0x0003f535) stacon_bottom_pane

0x2ad1,	// (0x000340f7) scroll_pane_cp121

0x2ac8,	// (0x000340ee) set_content_pane

0xc5f3,	// (0x0003dc19) bg_active_tab_pane_g1_cp1

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp1

0xc5fc,	// (0x0003dc22) bg_active_tab_pane_g3_cp1

0xc5f3,	// (0x0003dc19) bg_passive_tab_pane_g1_cp1

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp1

0xc5fc,	// (0x0003dc22) bg_passive_tab_pane_g3_cp1

0xc605,	// (0x0003dc2b) bg_active_tab_pane_g1_cp2

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp2

0xc60e,	// (0x0003dc34) bg_active_tab_pane_g3_cp2

0xc605,	// (0x0003dc2b) bg_passive_tab_pane_g1_cp2

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp2

0xc60e,	// (0x0003dc34) bg_passive_tab_pane_g3_cp2

0xc617,	// (0x0003dc3d) bg_active_tab_pane_g1_cp3

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp3

0xc620,	// (0x0003dc46) bg_active_tab_pane_g3_cp3

0xc617,	// (0x0003dc3d) bg_passive_tab_pane_g1_cp3

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp3

0xc620,	// (0x0003dc46) bg_passive_tab_pane_g3_cp3

0xc629,	// (0x0003dc4f) bg_active_tab_pane_g1_cp4

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp4

0xc632,	// (0x0003dc58) bg_active_tab_pane_g3_cp4

0xc629,	// (0x0003dc4f) bg_passive_tab_pane_g1_cp4

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp4

0xc632,	// (0x0003dc58) bg_passive_tab_pane_g3_cp4

0x3707,	// (0x00034d2d) bg_active_tab_pane_g1_cp5

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp5

0x3710,	// (0x00034d36) bg_active_tab_pane_g3_cp5

0x3707,	// (0x00034d2d) bg_passive_tab_pane_g1_cp5

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp5

0x3710,	// (0x00034d36) bg_passive_tab_pane_g3_cp5

0x2f60,	// (0x00034586) list_set_graphic_pane_ParamLimits

0x2f60,	// (0x00034586) list_set_graphic_pane

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp4

0xc63b,	// (0x0003dc61) list_set_graphic_pane_g1_ParamLimits

0xc63b,	// (0x0003dc61) list_set_graphic_pane_g1

0xc647,	// (0x0003dc6d) list_set_graphic_pane_g2_ParamLimits

0xc647,	// (0x0003dc6d) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00040d8c) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00040d8c) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x000410ff) volume_small_pane_cp_g

0x375e,	// (0x00034d84) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x375e,	// (0x00034d84) list_double2_large_graphic_pane_g1_cp2

0x376c,	// (0x00034d92) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x376c,	// (0x00034d92) list_double2_large_graphic_pane_g2_cp2

0x377d,	// (0x00034da3) list_double2_large_graphic_pane_g3_cp2

0x3785,	// (0x00034dab) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3785,	// (0x00034dab) list_double2_large_graphic_pane_t1_cp2

0x379b,	// (0x00034dc1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x379b,	// (0x00034dc1) list_double2_large_graphic_pane_t2_cp2

0x5a28,	// (0x0003704e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5a28,	// (0x0003704e) list_double_large_graphic_pane_g1_cp2

0x5a3b,	// (0x00037061) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5a3b,	// (0x00037061) list_double_large_graphic_pane_g2_cp2

0x3911,	// (0x00034f37) list_double_large_graphic_pane_g3_cp2

0x5a4c,	// (0x00037072) list_double_large_graphic_pane_g4_cp

0x5a54,	// (0x0003707a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5a54,	// (0x0003707a) list_double_large_graphic_pane_t1_cp2

0x5a6b,	// (0x00037091) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5a6b,	// (0x00037091) list_double_large_graphic_pane_t2_cp2

0x3801,	// (0x00034e27) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3801,	// (0x00034e27) list_double2_graphic_pane_g1_cp2

0x380f,	// (0x00034e35) list_double2_graphic_pane_g2_cp2_ParamLimits

0x380f,	// (0x00034e35) list_double2_graphic_pane_g2_cp2

0x3820,	// (0x00034e46) list_double2_graphic_pane_g3_cp2

0x382a,	// (0x00034e50) list_double2_graphic_pane_t1_cp2_ParamLimits

0x382a,	// (0x00034e50) list_double2_graphic_pane_t1_cp2

0x3840,	// (0x00034e66) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3840,	// (0x00034e66) list_double2_graphic_pane_t2_cp2

0x3852,	// (0x00034e78) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3852,	// (0x00034e78) list_single_number_heading_pane_g1_cp2

0x385e,	// (0x00034e84) list_single_number_heading_pane_g2_cp2

0x3866,	// (0x00034e8c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3866,	// (0x00034e8c) list_single_number_heading_pane_t1_cp2

0x387c,	// (0x00034ea2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x387c,	// (0x00034ea2) list_single_number_heading_pane_t2_cp2

0x3890,	// (0x00034eb6) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3890,	// (0x00034eb6) list_single_number_heading_pane_t3_cp2

0x3852,	// (0x00034e78) list_single_heading_pane_g1_cp2_ParamLimits

0x3852,	// (0x00034e78) list_single_heading_pane_g1_cp2

0x385e,	// (0x00034e84) list_single_heading_pane_g2_cp2

0x3866,	// (0x00034e8c) list_single_heading_pane_t1_cp2_ParamLimits

0x3866,	// (0x00034e8c) list_single_heading_pane_t1_cp2

0x5822,	// (0x00036e48) list_single_heading_pane_t2_cp2_ParamLimits

0x5822,	// (0x00036e48) list_single_heading_pane_t2_cp2

0x5764,	// (0x00036d8a) list_double_graphic_pane_g1_cp2_ParamLimits

0x5764,	// (0x00036d8a) list_double_graphic_pane_g1_cp2

0x5770,	// (0x00036d96) list_double_graphic_pane_g2_cp2_ParamLimits

0x5770,	// (0x00036d96) list_double_graphic_pane_g2_cp2

0x577f,	// (0x00036da5) list_double_graphic_pane_g3_cp2

0x5787,	// (0x00036dad) list_double_graphic_pane_t1_cp2_ParamLimits

0x5787,	// (0x00036dad) list_double_graphic_pane_t1_cp2

0x579d,	// (0x00036dc3) list_double_graphic_pane_t2_cp2_ParamLimits

0x579d,	// (0x00036dc3) list_double_graphic_pane_t2_cp2

0x3905,	// (0x00034f2b) list_double_number_pane_g1_cp2_ParamLimits

0x3905,	// (0x00034f2b) list_double_number_pane_g1_cp2

0x3911,	// (0x00034f37) list_double_number_pane_g2_cp2

0x5728,	// (0x00036d4e) list_double_number_pane_t1_cp2_ParamLimits

0x5728,	// (0x00036d4e) list_double_number_pane_t1_cp2

0x573c,	// (0x00036d62) list_double_number_pane_t2_cp2_ParamLimits

0x573c,	// (0x00036d62) list_double_number_pane_t2_cp2

0x5752,	// (0x00036d78) list_double_number_pane_t3_cp2_ParamLimits

0x5752,	// (0x00036d78) list_double_number_pane_t3_cp2

0x5611,	// (0x00036c37) list_single_graphic_pane_g1_cp2_ParamLimits

0x5611,	// (0x00036c37) list_single_graphic_pane_g1_cp2

0x396b,	// (0x00034f91) list_single_graphic_pane_g2_cp2_ParamLimits

0x396b,	// (0x00034f91) list_single_graphic_pane_g2_cp2

0x3977,	// (0x00034f9d) list_single_graphic_pane_g3_cp2

0x55e7,	// (0x00036c0d) list_single_graphic_pane_t1_cp2_ParamLimits

0x55e7,	// (0x00036c0d) list_single_graphic_pane_t1_cp2

0x396b,	// (0x00034f91) list_single_number_pane_g1_cp2_ParamLimits

0x396b,	// (0x00034f91) list_single_number_pane_g1_cp2

0x3977,	// (0x00034f9d) list_single_number_pane_g2_cp2

0x55e7,	// (0x00036c0d) list_single_number_pane_t1_cp2_ParamLimits

0x55e7,	// (0x00036c0d) list_single_number_pane_t1_cp2

0x55fd,	// (0x00036c23) list_single_number_pane_t2_cp2_ParamLimits

0x55fd,	// (0x00036c23) list_single_number_pane_t2_cp2

0x376c,	// (0x00034d92) list_double2_pane_g1_cp2_ParamLimits

0x376c,	// (0x00034d92) list_double2_pane_g1_cp2

0x377d,	// (0x00034da3) list_double2_pane_g2_cp2

0x38dd,	// (0x00034f03) list_double2_pane_t1_cp2_ParamLimits

0x38dd,	// (0x00034f03) list_double2_pane_t1_cp2

0x38f3,	// (0x00034f19) list_double2_pane_t2_cp2_ParamLimits

0x38f3,	// (0x00034f19) list_double2_pane_t2_cp2

0x3905,	// (0x00034f2b) list_double_pane_g1_cp2_ParamLimits

0x3905,	// (0x00034f2b) list_double_pane_g1_cp2

0x3911,	// (0x00034f37) list_double_pane_g2_cp2

0x3919,	// (0x00034f3f) list_double_pane_t1_cp2_ParamLimits

0x3919,	// (0x00034f3f) list_double_pane_t1_cp2

0x392f,	// (0x00034f55) list_double_pane_t2_cp2_ParamLimits

0x392f,	// (0x00034f55) list_double_pane_t2_cp2

0x395b,	// (0x00034f81) list_single_pane_cp2_g3

0x396b,	// (0x00034f91) list_single_pane_g1_cp2_ParamLimits

0x396b,	// (0x00034f91) list_single_pane_g1_cp2

0x3977,	// (0x00034f9d) list_single_pane_g2_cp2

0x397f,	// (0x00034fa5) list_single_pane_t1_cp2_ParamLimits

0x397f,	// (0x00034fa5) list_single_pane_t1_cp2

0x3997,	// (0x00034fbd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3997,	// (0x00034fbd) list_single_large_graphic_pane_g1_cp2

0x39a5,	// (0x00034fcb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x39a5,	// (0x00034fcb) list_single_large_graphic_pane_g2_cp2

0x39b1,	// (0x00034fd7) list_single_large_graphic_pane_g3_cp2

0x39b9,	// (0x00034fdf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x39b9,	// (0x00034fdf) list_single_large_graphic_pane_g4_cp1

0x39d3,	// (0x00034ff9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x39d3,	// (0x00034ff9) list_single_large_graphic_pane_t1_cp2

0x55b1,	// (0x00036bd7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x55b1,	// (0x00036bd7) list_single_graphic_heading_pane_g1_cp2

0x557e,	// (0x00036ba4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x557e,	// (0x00036ba4) list_single_graphic_heading_pane_g4_cp2

0x3977,	// (0x00034f9d) list_single_graphic_heading_pane_g5_cp2

0x55bd,	// (0x00036be3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x55bd,	// (0x00036be3) list_single_graphic_heading_pane_t1_cp2

0x55d3,	// (0x00036bf9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x55d3,	// (0x00036bf9) list_single_graphic_heading_pane_t2_cp2

0x5572,	// (0x00036b98) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5572,	// (0x00036b98) list_single_2graphic_pane_g1_cp2

0x557e,	// (0x00036ba4) list_single_2graphic_pane_g2_cp2_ParamLimits

0x557e,	// (0x00036ba4) list_single_2graphic_pane_g2_cp2

0x3977,	// (0x00034f9d) list_single_2graphic_pane_g3_cp2

0x558f,	// (0x00036bb5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x558f,	// (0x00036bb5) list_single_2graphic_pane_g4_cp2

0x559b,	// (0x00036bc1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x559b,	// (0x00036bc1) list_single_2graphic_pane_t1_cp2

0xdf05,	// (0x0003f52b) list_highlight_pane_g10_cp1

0x514a,	// (0x00036770) list_highlight_pane_g1_cp1

0x5152,	// (0x00036778) list_highlight_pane_g2_cp1

0x515a,	// (0x00036780) list_highlight_pane_g3_cp1

0x5162,	// (0x00036788) list_highlight_pane_g4_cp1

0x516a,	// (0x00036790) list_highlight_pane_g5_cp1

0x5172,	// (0x00036798) list_highlight_pane_g6_cp1

0x517a,	// (0x000367a0) list_highlight_pane_g7_cp1

0x5182,	// (0x000367a8) list_highlight_pane_g8_cp1

0x518a,	// (0x000367b0) list_highlight_pane_g9_cp1

0xd33d,	// (0x0003e963) form_field_slider_pane_t3

0xd34b,	// (0x0003e971) form_field_slider_pane_t4

0x5086,	// (0x000366ac) slider_form_pane_ParamLimits

0x5086,	// (0x000366ac) slider_form_pane

0xdf0f,	// (0x0003f535) control_abbreviations

0xdf0f,	// (0x0003f535) control_conventions

0xdf0f,	// (0x0003f535) control_definitions

0xdf0f,	// (0x0003f535) format_table_attribute

0x5878,	// (0x00036e9e) bg_popup_preview_window_pane_g9

0xdf0f,	// (0x0003f535) format_table_data2

0xdf0f,	// (0x0003f535) format_table_data3

0xdf0f,	// (0x0003f535) format_table_data_example

0x0008,

0xdf0f,	// (0x0003f535) intro_purpose

0xf8f6,	// (0x00040f1c) bg_popup_preview_window_pane_g

0xdf0f,	// (0x0003f535) texts_category

0xdf0f,	// (0x0003f535) texts_graphics

0x39e9,	// (0x0003500f) text_digital

0x39f8,	// (0x0003501e) text_primary

0x3a07,	// (0x0003502d) text_primary_small

0x3a16,	// (0x0003503c) text_secondary

0x3a25,	// (0x0003504b) text_title

0x6014,	// (0x0003763a) bg_passive_tab_pane_g1_cp3_srt

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp3_srt

0x601d,	// (0x00037643) bg_passive_tab_pane_g3_cp3_srt

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp3_srt_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp3_srt

0x6026,	// (0x0003764c) tabs_4_active_pane_srt_g1

0xd750,	// (0x0003ed76) tabs_4_active_pane_srt_t1_ParamLimits

0xd750,	// (0x0003ed76) tabs_4_active_pane_srt_t1

0x6014,	// (0x0003763a) bg_active_tab_pane_g1_cp3_copy1

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp3_copy1

0x601d,	// (0x00037643) bg_active_tab_pane_g3_cp3_copy1

0x2267,	// (0x0003388d) tabs_2_long_active_pane_srt_ParamLimits

0x2267,	// (0x0003388d) tabs_2_long_active_pane_srt

0x2267,	// (0x0003388d) tabs_2_long_passive_pane_srt_ParamLimits

0x2267,	// (0x0003388d) tabs_2_long_passive_pane_srt

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp4_srt

0x5cc8,	// (0x000372ee) bg_passive_tab_pane_g1_cp4_srt

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp4_srt

0x5cd1,	// (0x000372f7) bg_passive_tab_pane_g3_cp4_srt

0x2267,	// (0x0003388d) bg_active_tab_pane_cp4_srt_ParamLimits

0x2267,	// (0x0003388d) bg_active_tab_pane_cp4_srt

0xd546,	// (0x0003eb6c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd546,	// (0x0003eb6c) tabs_2_long_active_pane_srt_t1

0x5cc8,	// (0x000372ee) bg_active_tab_pane_g1_cp4_srt

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp4_srt

0x5cd1,	// (0x000372f7) bg_active_tab_pane_g3_cp4_srt

0x24e3,	// (0x00033b09) tabs_3_long_active_pane_srt_ParamLimits

0x24e3,	// (0x00033b09) tabs_3_long_active_pane_srt

0x24e3,	// (0x00033b09) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24e3,	// (0x00033b09) tabs_3_long_passive_pane_cp_srt

0x24e3,	// (0x00033b09) tabs_3_long_passive_pane_srt_ParamLimits

0x24e3,	// (0x00033b09) tabs_3_long_passive_pane_srt

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp5_srt

0x3707,	// (0x00034d2d) bg_passive_tab_pane_g1_cp5_srt

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp5_srt

0x3710,	// (0x00034d36) bg_passive_tab_pane_g3_cp5_srt

0x2267,	// (0x0003388d) bg_active_tab_pane_cp5_srt_ParamLimits

0x2267,	// (0x0003388d) bg_active_tab_pane_cp5_srt

0xd530,	// (0x0003eb56) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd530,	// (0x0003eb56) tabs_3_long_active_pane_srt_t1

0x3707,	// (0x00034d2d) bg_active_tab_pane_g1_cp5_srt

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp5_srt

0x3710,	// (0x00034d36) bg_active_tab_pane_g3_cp5_srt

0x5ca8,	// (0x000372ce) navi_text_pane_srt_t1

0x5ca0,	// (0x000372c6) navi_icon_pane_srt_g1

0x3bfc,	// (0x00035222) midp_editing_number_pane_srt

0x3a34,	// (0x0003505a) midp_ticker_pane_srt

0x3c04,	// (0x0003522a) midp_ticker_pane_srt_g1

0x3c0c,	// (0x00035232) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00040dab) midp_ticker_pane_srt_g

0x3c14,	// (0x0003523a) midp_ticker_pane_srt_t1

0x5c91,	// (0x000372b7) midp_editing_number_pane_t1_copy1

0xc66b,	// (0x0003dc91) listscroll_midp_pane

0xc66b,	// (0x0003dc91) midp_form_pane

0x3aaa,	// (0x000350d0) midp_info_popup_window_ParamLimits

0x3aaa,	// (0x000350d0) midp_info_popup_window

0x2ba6,	// (0x000341cc) bg_popup_sub_pane_cp50_ParamLimits

0x2ba6,	// (0x000341cc) bg_popup_sub_pane_cp50

0x4d80,	// (0x000363a6) listscroll_midp_info_pane_ParamLimits

0x4d80,	// (0x000363a6) listscroll_midp_info_pane

0x4d68,	// (0x0003638e) listscroll_form_midp_pane_ParamLimits

0x4d68,	// (0x0003638e) listscroll_form_midp_pane

0x4d74,	// (0x0003639a) scroll_bar_cp050

0xd331,	// (0x0003e957) list_midp_pane

0x6a9e,	// (0x000380c4) signal_pane_g2_cp

0x4c82,	// (0x000362a8) listscroll_midp_info_pane_t1_ParamLimits

0x4c82,	// (0x000362a8) listscroll_midp_info_pane_t1

0x4c9a,	// (0x000362c0) listscroll_midp_info_pane_t2_ParamLimits

0x4c9a,	// (0x000362c0) listscroll_midp_info_pane_t2

0x4cd8,	// (0x000362fe) listscroll_midp_info_pane_t3_ParamLimits

0x4cd8,	// (0x000362fe) listscroll_midp_info_pane_t3

0x4d12,	// (0x00036338) listscroll_midp_info_pane_t4_ParamLimits

0x4d12,	// (0x00036338) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00040e57) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00040e57) listscroll_midp_info_pane_t

0x2f58,	// (0x0003457e) scroll_pane_cp21

0x4c1c,	// (0x00036242) form_midp_field_choice_group_pane

0x4c25,	// (0x0003624b) form_midp_field_text_pane

0x4c68,	// (0x0003628e) form_midp_field_time_pane

0x4c70,	// (0x00036296) form_midp_gauge_slider_pane

0x4c79,	// (0x0003629f) form_midp_gauge_wait_pane

0xdf0f,	// (0x0003f535) form_midp_image_pane

0xbb0c,	// (0x0003d132) list_single_midp_pane_ParamLimits

0xbb0c,	// (0x0003d132) list_single_midp_pane

0xd309,	// (0x0003e92f) form_midp_field_text_pane_t1

0x49e8,	// (0x0003600e) input_focus_pane_cp050

0x4c0b,	// (0x00036231) list_midp_form_text_pane

0x4baf,	// (0x000361d5) form_midp_field_choice_group_pane_t1

0x4bbd,	// (0x000361e3) input_focus_pane_cp051

0x4bd1,	// (0x000361f7) list_midp_choice_pane

0xdf0f,	// (0x0003f535) status_idle_pane

0x4b93,	// (0x000361b9) form_midp_field_time_pane_t1

0xdf05,	// (0x0003f52b) wait_anim_pane_g2_copy1

0x4ba1,	// (0x000361c7) form_midp_field_time_pane_t2

0x0001,

0x3b5a,	// (0x00035180) aid_navinavi_width_2_pane

0xf82c,	// (0x00040e52) form_midp_field_time_pane_t

0xdf0f,	// (0x0003f535) input_focus_pane_cp052

0xdf0f,	// (0x0003f535) bg_input_focus_pane_cp040

0x4b53,	// (0x00036179) form_midp_gauge_slider_pane_t1

0x4b61,	// (0x00036187) form_midp_gauge_slider_pane_t2

0xd2ed,	// (0x0003e913) form_midp_gauge_slider_pane_t3

0xd2fb,	// (0x0003e921) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00040e49) form_midp_gauge_slider_pane_t

0x4b8b,	// (0x000361b1) form_midp_slider_pane

0x2267,	// (0x0003388d) bg_input_focus_pane_cp041_ParamLimits

0x2267,	// (0x0003388d) bg_input_focus_pane_cp041

0x4b20,	// (0x00036146) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b20,	// (0x00036146) form_midp_gauge_wait_pane_t1

0x4b32,	// (0x00036158) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b32,	// (0x00036158) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x00040e44) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x00040e44) form_midp_gauge_wait_pane_t

0x4b44,	// (0x0003616a) form_midp_wait_pane_ParamLimits

0x4b44,	// (0x0003616a) form_midp_wait_pane

0x4ae8,	// (0x0003610e) form_midp_image_pane_g1

0x4af1,	// (0x00036117) form_midp_image_pane_t1

0x4b00,	// (0x00036126) form_midp_image_pane_t2

0x4b0f,	// (0x00036135) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00040e3d) form_midp_image_pane_t

0x4adf,	// (0x00036105) list_single_midp_pane_g1

0x0d23,	// (0x00032349) list_single_midp_pane_t1

0xd2d6,	// (0x0003e8fc) list_midp_form_item_pane_ParamLimits

0xd2d6,	// (0x0003e8fc) list_midp_form_item_pane

0x3b02,	// (0x00035128) list_midp_form_item_pane_t1

0x3b11,	// (0x00035137) midp_ticker_pane_g1

0x3b1d,	// (0x00035143) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x00040d91) midp_ticker_pane_g

0xc713,	// (0x0003dd39) midp_ticker_pane_t1

0xd6d5,	// (0x0003ecfb) midp_editing_number_pane_t1

0x5eee,	// (0x00037514) midp_editing_number_pane

0x5efd,	// (0x00037523) midp_ticker_pane

0x5c81,	// (0x000372a7) ai_message_heading_pane

0xdf0f,	// (0x0003f535) bg_popup_window_pane_cp14

0x5c89,	// (0x000372af) listscroll_ai_message_pane

0x5c07,	// (0x0003722d) ai_message_heading_pane_g1_ParamLimits

0x5c07,	// (0x0003722d) ai_message_heading_pane_g1

0x5c13,	// (0x00037239) ai_message_heading_pane_g2_ParamLimits

0x5c13,	// (0x00037239) ai_message_heading_pane_g2

0x5c21,	// (0x00037247) ai_message_heading_pane_g3_ParamLimits

0x5c21,	// (0x00037247) ai_message_heading_pane_g3

0x5c2d,	// (0x00037253) ai_message_heading_pane_g4_ParamLimits

0x5c2d,	// (0x00037253) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x00040f7e) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x00040f7e) ai_message_heading_pane_g

0x5c39,	// (0x0003725f) ai_message_heading_pane_t1_ParamLimits

0x5c39,	// (0x0003725f) ai_message_heading_pane_t1

0x5c53,	// (0x00037279) ai_message_heading_pane_t2_ParamLimits

0x5c53,	// (0x00037279) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00040f87) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00040f87) ai_message_heading_pane_t

0x5c67,	// (0x0003728d) bg_popup_heading_pane_cp1_ParamLimits

0x5c67,	// (0x0003728d) bg_popup_heading_pane_cp1

0x5bf5,	// (0x0003721b) list_ai_message_pane_ParamLimits

0x5bf5,	// (0x0003721b) list_ai_message_pane

0x2f58,	// (0x0003457e) scroll_pane_cp10

0x5b91,	// (0x000371b7) list_ai_message_pane_g1

0x5b99,	// (0x000371bf) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00040f5b) list_ai_message_pane_g

0x5ba1,	// (0x000371c7) list_ai_message_pane_t1_ParamLimits

0x5ba1,	// (0x000371c7) list_ai_message_pane_t1

0x5bb6,	// (0x000371dc) list_ai_message_pane_t2_ParamLimits

0x5bb6,	// (0x000371dc) list_ai_message_pane_t2

0x5bcb,	// (0x000371f1) list_ai_message_pane_t3_ParamLimits

0x5bcb,	// (0x000371f1) list_ai_message_pane_t3

0x5be0,	// (0x00037206) list_ai_message_pane_t4_ParamLimits

0x5be0,	// (0x00037206) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x00040f60) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x00040f60) list_ai_message_pane_t

0xd516,	// (0x0003eb3c) cell_ai_soft_ind_pane_ParamLimits

0xd516,	// (0x0003eb3c) cell_ai_soft_ind_pane

0x3b3b,	// (0x00035161) cell_ai_soft_ind_pane_g1_ParamLimits

0x3b3b,	// (0x00035161) cell_ai_soft_ind_pane_g1

0xdf0f,	// (0x0003f535) grid_highlight_cp1

0x3b48,	// (0x0003516e) text_secondary_cp56_ParamLimits

0x3b48,	// (0x0003516e) text_secondary_cp56

0x5b4f,	// (0x00037175) example_general_pane_ParamLimits

0x5b4f,	// (0x00037175) example_general_pane

0x5b5b,	// (0x00037181) example_parent_pane_g1_ParamLimits

0x5b5b,	// (0x00037181) example_parent_pane_g1

0x5b67,	// (0x0003718d) example_parent_pane_t1_ParamLimits

0x5b67,	// (0x0003718d) example_parent_pane_t1

0xcb69,	// (0x0003e18f) popup_preview_text_window_ParamLimits

0xcb69,	// (0x0003e18f) popup_preview_text_window

0x3963,	// (0x00034f89) list_single_pane_cp2_g4

0x2599,	// (0x00033bbf) bg_popup_preview_window_pane_ParamLimits

0x2599,	// (0x00033bbf) bg_popup_preview_window_pane

0x5882,	// (0x00036ea8) popup_preview_text_window_t1_ParamLimits

0x5882,	// (0x00036ea8) popup_preview_text_window_t1

0x58a0,	// (0x00036ec6) popup_preview_text_window_t2_ParamLimits

0x58a0,	// (0x00036ec6) popup_preview_text_window_t2

0x58e9,	// (0x00036f0f) popup_preview_text_window_t3_ParamLimits

0x58e9,	// (0x00036f0f) popup_preview_text_window_t3

0x592e,	// (0x00036f54) popup_preview_text_window_t4_ParamLimits

0x592e,	// (0x00036f54) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x00040f2f) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x00040f2f) popup_preview_text_window_t

0x59ac,	// (0x00036fd2) scroll_pane_cp11

0x48f6,	// (0x00035f1c) bg_popup_preview_window_pane_g1

0x5836,	// (0x00036e5c) bg_popup_preview_window_pane_g2

0x5840,	// (0x00036e66) bg_popup_preview_window_pane_g3

0x584a,	// (0x00036e70) bg_popup_preview_window_pane_g4

0x5854,	// (0x00036e7a) bg_popup_preview_window_pane_g5

0x585e,	// (0x00036e84) bg_popup_preview_window_pane_g6

0x5866,	// (0x00036e8c) bg_popup_preview_window_pane_g7

0x586e,	// (0x00036e94) bg_popup_preview_window_pane_g8

0xf240,	// (0x00040866) aid_popup_width_pane

0xcad9,	// (0x0003e0ff) popup_midp_note_alarm_window_ParamLimits

0xcad9,	// (0x0003e0ff) popup_midp_note_alarm_window

0x2ae2,	// (0x00034108) data_form_pane_ParamLimits

0xb7ae,	// (0x0003cdd4) form_field_data_pane_g1

0xb7b8,	// (0x0003cdde) form_field_data_pane_t1_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_ParamLimits

0x2afc,	// (0x00034122) data_form_wide_pane_ParamLimits

0x035d,	// (0x00031983) form_field_data_wide_pane_g1

0x0369,	// (0x0003198f) form_field_data_wide_pane_t1_ParamLimits

0x285f,	// (0x00033e85) input_focus_pane_cp6_ParamLimits

0xc405,	// (0x0003da2b) input_popup_find_pane_g1_ParamLimits

0xc405,	// (0x0003da2b) input_popup_find_pane_g1

0x05d9,	// (0x00031bff) aid_navi_side_left_pane

0x05ee,	// (0x00031c14) aid_navi_side_right_pane

0x5245,	// (0x0003686b) bg_popup_window_pane_cp30_ParamLimits

0x5245,	// (0x0003686b) bg_popup_window_pane_cp30

0x52bf,	// (0x000368e5) popup_midp_note_alarm_window_g1_ParamLimits

0x52bf,	// (0x000368e5) popup_midp_note_alarm_window_g1

0x52ef,	// (0x00036915) popup_midp_note_alarm_window_t1_ParamLimits

0x52ef,	// (0x00036915) popup_midp_note_alarm_window_t1

0x5390,	// (0x000369b6) popup_midp_note_alarm_window_t2_ParamLimits

0x5390,	// (0x000369b6) popup_midp_note_alarm_window_t2

0x543e,	// (0x00036a64) popup_midp_note_alarm_window_t3_ParamLimits

0x543e,	// (0x00036a64) popup_midp_note_alarm_window_t3

0x5470,	// (0x00036a96) popup_midp_note_alarm_window_t4_ParamLimits

0x5470,	// (0x00036a96) popup_midp_note_alarm_window_t4

0x5496,	// (0x00036abc) popup_midp_note_alarm_window_t5_ParamLimits

0x5496,	// (0x00036abc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00040ecc) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00040ecc) popup_midp_note_alarm_window_t

0x5542,	// (0x00036b68) wait_bar_pane_cp1_ParamLimits

0x5542,	// (0x00036b68) wait_bar_pane_cp1

0xdf0f,	// (0x0003f535) wait_anim_pane_copy1

0xdf0f,	// (0x0003f535) wait_border_pane_copy1

0x4f2a,	// (0x00036550) wait_border_pane_g1_copy1

0x0383,	// (0x000319a9) form_field_popup_pane_g1

0xb7d2,	// (0x0003cdf8) form_field_popup_pane_t1_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_cp7_ParamLimits

0x2b28,	// (0x0003414e) list_form_pane_ParamLimits

0x03a5,	// (0x000319cb) form_field_popup_wide_pane_g1

0x03ad,	// (0x000319d3) form_field_popup_wide_pane_t1_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_cp8_ParamLimits

0x2b34,	// (0x0003415a) list_form_wide_pane_ParamLimits

0x60a1,	// (0x000376c7) aid_size_cell_graphic_pane

0xb851,	// (0x0003ce77) data_form_pane_t1_ParamLimits

0xbca2,	// (0x0003d2c8) data_form_wide_pane_t1_ParamLimits

0xcf66,	// (0x0003e58c) bg_status_flat_pane

0xb011,	// (0x0003c637) title_pane_t1_ParamLimits

0x222f,	// (0x00033855) title_pane_t2_ParamLimits

0x2255,	// (0x0003387b) title_pane_t3_ParamLimits

0xf573,	// (0x00040b99) title_pane_t_ParamLimits

0xc50c,	// (0x0003db32) level_1_signal_ParamLimits

0xc51e,	// (0x0003db44) level_2_signal_ParamLimits

0xc531,	// (0x0003db57) level_3_signal_ParamLimits

0xc544,	// (0x0003db6a) level_4_signal_ParamLimits

0xc557,	// (0x0003db7d) level_5_signal_ParamLimits

0xc56a,	// (0x0003db90) level_6_signal_ParamLimits

0xc57d,	// (0x0003dba3) level_7_signal_ParamLimits

0xc50c,	// (0x0003db32) level_1_battery_ParamLimits

0xc51e,	// (0x0003db44) level_2_battery_ParamLimits

0xc531,	// (0x0003db57) level_3_battery_ParamLimits

0xc544,	// (0x0003db6a) level_4_battery_ParamLimits

0xc557,	// (0x0003db7d) level_5_battery_ParamLimits

0xc56a,	// (0x0003db90) level_6_battery_ParamLimits

0xc57d,	// (0x0003dba3) level_7_battery_ParamLimits

0x514a,	// (0x00036770) bg_status_flat_pane_g1

0x5152,	// (0x00036778) bg_status_flat_pane_g2

0x515a,	// (0x00036780) bg_status_flat_pane_g3

0x5162,	// (0x00036788) bg_status_flat_pane_g4

0x516a,	// (0x00036790) bg_status_flat_pane_g5

0x5172,	// (0x00036798) bg_status_flat_pane_g6

0x517a,	// (0x000367a0) bg_status_flat_pane_g7

0xb0a5,	// (0x0003c6cb) tabs_3_active_pane_t1_ParamLimits

0xb0a5,	// (0x0003c6cb) tabs_3_passive_pane_t1_ParamLimits

0xb0bf,	// (0x0003c6e5) tabs_4_active_pane_t1_ParamLimits

0xb0bf,	// (0x0003c6e5) tabs_4_1_passive_pane_t1_ParamLimits

0xc41b,	// (0x0003da41) tabs_2_active_pane_t1_ParamLimits

0xc41b,	// (0x0003da41) tabs_2_passive_pane_t1_ParamLimits

0x2267,	// (0x0003388d) bg_active_tab_pane_cp4_ParamLimits

0xc42d,	// (0x0003da53) tabs_2_long_active_pane_t1_ParamLimits

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp4_ParamLimits

0x0c6a,	// (0x00032290) list_single_midp_graphic_pane_t1_ParamLimits

0x2267,	// (0x0003388d) bg_active_tab_pane_cp5_ParamLimits

0xc440,	// (0x0003da66) tabs_3_long_active_pane_t1_ParamLimits

0x3dba,	// (0x000353e0) bg_passive_tab_pane_cp5_ParamLimits

0x0c6a,	// (0x00032290) list_single_midp_graphic_pane_t1

0xcf66,	// (0x0003e58c) bg_status_flat_pane_ParamLimits

0x456f,	// (0x00035b95) indicator_pane_cp2_ParamLimits

0x456f,	// (0x00035b95) indicator_pane_cp2

0xd0fb,	// (0x0003e721) navi_pane_srt_ParamLimits

0xd0fb,	// (0x0003e721) navi_pane_srt

0x46d5,	// (0x00035cfb) popup_clock_digital_analogue_window_cp1

0x2347,	// (0x0003396d) indicator_pane_t1

0x3a34,	// (0x0003505a) copy_highlight_pane

0x3a34,	// (0x0003505a) cursor_graphics_pane

0x3a34,	// (0x0003505a) graphic_within_text_pane

0x3a34,	// (0x0003505a) link_highlight_pane

0x596f,	// (0x00036f95) popup_preview_text_window_t5_ParamLimits

0x596f,	// (0x00036f95) popup_preview_text_window_t5

0x3b64,	// (0x0003518a) cursor_digital_pane

0x3b64,	// (0x0003518a) cursor_primary_pane

0x3b75,	// (0x0003519b) cursor_primary_small_pane

0x3b7d,	// (0x000351a3) cursor_secondary_pane

0x3b85,	// (0x000351ab) cursor_title_pane

0x3b64,	// (0x0003518a) link_highlight_digital_pane

0x3b6c,	// (0x00035192) link_highlight_primary_pane

0x3b75,	// (0x0003519b) link_highlight_primary_small_pane

0x3b7d,	// (0x000351a3) link_highlight_secondary_pane

0x3b85,	// (0x000351ab) link_highlight_title_pane

0x3b64,	// (0x0003518a) copy_highlight_digital_pane

0x3b64,	// (0x0003518a) copy_highlight_primary_pane

0x3b75,	// (0x0003519b) copy_highlight_primary_small_pane

0x3b7d,	// (0x000351a3) copy_highlight_secondary_pane

0x3b85,	// (0x000351ab) copy_highlight_title_pane

0x3b7d,	// (0x000351a3) graphic_text_digital_pane

0x51e8,	// (0x0003680e) graphic_text_primary_pane

0x51f1,	// (0x00036817) graphic_text_primary_small_pane

0x3b75,	// (0x0003519b) graphic_text_secondary_pane

0x3b64,	// (0x0003518a) graphic_text_title_pane

0xc725,	// (0x0003dd4b) cursor_primary_pane_g1

0x51da,	// (0x00036800) cursor_text_primary_t1

0xd36d,	// (0x0003e993) cursor_primary_small_pane_g1

0x51cc,	// (0x000367f2) cursor_text_primary_small_t1

0xd363,	// (0x0003e989) cursor_primary_small_pane_g1_copy1

0x51b4,	// (0x000367da) cursor_text_primary_small_t1_copy1

0x5192,	// (0x000367b8) cursor_text_title_t1

0xd359,	// (0x0003e97f) cursor_title_pane_g1

0xc725,	// (0x0003dd4b) cursor_digital_pane_g1

0x3b97,	// (0x000351bd) cursor_text_digital_t1

0x3ba5,	// (0x000351cb) link_highlight_primary_pane_g1

0x513b,	// (0x00036761) link_highlight_primary_pane_t1

0x3ba5,	// (0x000351cb) link_highlight_primary_small_pane_g1

0x3bad,	// (0x000351d3) link_highlight_primary_small_pane_t1

0x3bbc,	// (0x000351e2) link_highlight_secondary_pane_g1

0x3bc4,	// (0x000351ea) link_highlight_secondary_pane_t1

0x50af,	// (0x000366d5) link_highlight_title_pane_g1

0x50b7,	// (0x000366dd) link_highlight_title_pane_t1

0x5098,	// (0x000366be) link_highlight_digital_pane_g1

0x50a0,	// (0x000366c6) link_highlight_digital_pane_t1

0x4f60,	// (0x00036586) copy_highlight_primary_pane_g1

0x4f77,	// (0x0003659d) copy_highlight_primary_pane_t1

0x4f60,	// (0x00036586) copy_highlight_primary_small_pane_g1

0x4f68,	// (0x0003658e) copy_highlight_primary_small_pane_t1

0x3bd3,	// (0x000351f9) copy_highlight_secondary_pane_g1

0x3bdb,	// (0x00035201) copy_highlight_secondary_pane_t1

0x4f49,	// (0x0003656f) copy_highlight_title_pane_g1

0x4f51,	// (0x00036577) copy_highlight_title_pane_t1

0x4f60,	// (0x00036586) copy_highlight_digital_pane_g1

0x6271,	// (0x00037897) copy_highlight_digital_pane_t1

0x61c5,	// (0x000377eb) graphic_text_primary_pane_g1

0x6255,	// (0x0003787b) graphic_text_primary_pane_t1

0x6263,	// (0x00037889) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00040ffb) graphic_text_primary_pane_t

0x6231,	// (0x00037857) graphic_text_primary_small_pane_g1

0x6239,	// (0x0003785f) graphic_text_primary_small_pane_t1

0x6247,	// (0x0003786d) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00040ff6) graphic_text_primary_small_pane_t

0x620d,	// (0x00037833) graphic_text_secondary_pane_g1

0x6215,	// (0x0003783b) graphic_text_secondary_pane_t1

0x6223,	// (0x00037849) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00040ff1) graphic_text_secondary_pane_t

0x61e9,	// (0x0003780f) graphic_text_title_pane_g1

0x61f1,	// (0x00037817) graphic_text_title_pane_t1

0x61ff,	// (0x00037825) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00040fec) graphic_text_title_pane_t

0x61c5,	// (0x000377eb) graphic_text_digital_pane_g1

0x61cd,	// (0x000377f3) graphic_text_digital_pane_t1

0x61db,	// (0x00037801) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00040fe7) graphic_text_digital_pane_t

0x2267,	// (0x0003388d) navi_icon_pane_srt_ParamLimits

0x2267,	// (0x0003388d) navi_icon_pane_srt

0xdf0f,	// (0x0003f535) navi_midp_pane_srt

0xdf0f,	// (0x0003f535) navi_navi_pane_srt

0x2267,	// (0x0003388d) navi_text_pane_srt_ParamLimits

0x2267,	// (0x0003388d) navi_text_pane_srt

0x6190,	// (0x000377b6) navi_navi_icon_text_pane_srt

0x6198,	// (0x000377be) navi_navi_pane_srt_g1_ParamLimits

0x6198,	// (0x000377be) navi_navi_pane_srt_g1

0x61aa,	// (0x000377d0) navi_navi_pane_srt_g2_ParamLimits

0x61aa,	// (0x000377d0) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00040fe2) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00040fe2) navi_navi_pane_srt_g

0x61bc,	// (0x000377e2) navi_navi_tabs_pane_srt

0x6190,	// (0x000377b6) navi_navi_text_pane_srt

0x6190,	// (0x000377b6) navi_navi_volume_pane_srt

0x6181,	// (0x000377a7) navi_navi_text_pane_srt_t1

0x10fe,	// (0x00032724) navi_navi_volume_pane_srt_g1

0x1106,	// (0x0003272c) volume_small_pane_srt_ParamLimits

0x1106,	// (0x0003272c) volume_small_pane_srt

0x094c,	// (0x00031f72) volume_small_pane_srt_g1_ParamLimits

0x094c,	// (0x00031f72) volume_small_pane_srt_g1

0x095c,	// (0x00031f82) volume_small_pane_srt_g2_ParamLimits

0x095c,	// (0x00031f82) volume_small_pane_srt_g2

0x096d,	// (0x00031f93) volume_small_pane_srt_g3_ParamLimits

0x096d,	// (0x00031f93) volume_small_pane_srt_g3

0x097e,	// (0x00031fa4) volume_small_pane_srt_g4_ParamLimits

0x097e,	// (0x00031fa4) volume_small_pane_srt_g4

0x098f,	// (0x00031fb5) volume_small_pane_srt_g5_ParamLimits

0x098f,	// (0x00031fb5) volume_small_pane_srt_g5

0x09a0,	// (0x00031fc6) volume_small_pane_srt_g6_ParamLimits

0x09a0,	// (0x00031fc6) volume_small_pane_srt_g6

0x09b1,	// (0x00031fd7) volume_small_pane_srt_g7_ParamLimits

0x09b1,	// (0x00031fd7) volume_small_pane_srt_g7

0x09c2,	// (0x00031fe8) volume_small_pane_srt_g8_ParamLimits

0x09c2,	// (0x00031fe8) volume_small_pane_srt_g8

0x09d3,	// (0x00031ff9) volume_small_pane_srt_g9_ParamLimits

0x09d3,	// (0x00031ff9) volume_small_pane_srt_g9

0x09e4,	// (0x0003200a) volume_small_pane_srt_g10_ParamLimits

0x09e4,	// (0x0003200a) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00040d96) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00040d96) volume_small_pane_srt_g

0x264e,	// (0x00033c74) query_popup_data_pane_cp2

0x6167,	// (0x0003778d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6167,	// (0x0003778d) navi_navi_icon_text_pane_srt_t1

0x51e8,	// (0x0003680e) navi_tabs_2_long_pane_srt

0x51e8,	// (0x0003680e) navi_tabs_2_pane_srt

0x51e8,	// (0x0003680e) navi_tabs_3_long_pane_srt

0x51e8,	// (0x0003680e) navi_tabs_3_pane_srt

0x51e8,	// (0x0003680e) navi_tabs_4_pane_srt

0x10de,	// (0x00032704) tabs_2_active_pane_srt_ParamLimits

0x10de,	// (0x00032704) tabs_2_active_pane_srt

0x10ee,	// (0x00032714) tabs_2_passive_pane_srt_ParamLimits

0x10ee,	// (0x00032714) tabs_2_passive_pane_srt

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp1_srt

0x6133,	// (0x00037759) bg_passive_tab_pane_g1_cp1_srt

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp1_srt

0x613c,	// (0x00037762) bg_passive_tab_pane_g3_cp1_srt

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp1_srt_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp1_srt

0x6145,	// (0x0003776b) tabs_2_active_pane_srt_g1

0xd7d0,	// (0x0003edf6) tabs_2_active_pane_srt_t1_ParamLimits

0xd7d0,	// (0x0003edf6) tabs_2_active_pane_srt_t1

0x6133,	// (0x00037759) bg_active_tab_pane_g1_cp1_srt

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp1_srt

0x613c,	// (0x00037762) bg_active_tab_pane_g3_cp1_srt

0x10ab,	// (0x000326d1) tabs_3_active_pane_srt_ParamLimits

0x10ab,	// (0x000326d1) tabs_3_active_pane_srt

0x10bc,	// (0x000326e2) tabs_3_passive_pane_cp_srt_ParamLimits

0x10bc,	// (0x000326e2) tabs_3_passive_pane_cp_srt

0x10cd,	// (0x000326f3) tabs_3_passive_pane_srt_ParamLimits

0x10cd,	// (0x000326f3) tabs_3_passive_pane_srt

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x49e8,	// (0x0003600e) bg_passive_tab_pane_cp2_srt

0x3bea,	// (0x00035210) bg_passive_tab_pane_g1_cp2_srt

0x367d,	// (0x00034ca3) bg_passive_tab_pane_g2_cp2_srt

0x3bf3,	// (0x00035219) bg_passive_tab_pane_g3_cp2_srt

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp2_srt_ParamLimits

0x24e3,	// (0x00033b09) bg_active_tab_pane_cp2_srt

0x6119,	// (0x0003773f) tabs_3_active_pane_srt_g1

0xd7ba,	// (0x0003ede0) tabs_3_active_pane_srt_t1_ParamLimits

0xd7ba,	// (0x0003ede0) tabs_3_active_pane_srt_t1

0x3bea,	// (0x00035210) bg_active_tab_pane_g1_cp2_srt

0x367d,	// (0x00034ca3) bg_active_tab_pane_g2_cp2_srt

0x3bf3,	// (0x00035219) bg_active_tab_pane_g3_cp2_srt

0x1063,	// (0x00032689) tabs_4_active_pane_srt_ParamLimits

0x1063,	// (0x00032689) tabs_4_active_pane_srt

0x1075,	// (0x0003269b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1075,	// (0x0003269b) tabs_4_passive_pane_cp2_srt

0x3d48,	// (0x0003536e) aid_size_cell_toolbar

0x5d3b,	// (0x00037361) main_idle_act_pane_ParamLimits

0x3f7f,	// (0x000355a5) popup_large_graphic_colour_window_ParamLimits

0xce2f,	// (0x0003e455) popup_toolbar_window_ParamLimits

0xce2f,	// (0x0003e455) popup_toolbar_window

0x101e,	// (0x00032644) list_single_graphic_2heading_pane_ParamLimits

0x101e,	// (0x00032644) list_single_graphic_2heading_pane

0x3189,	// (0x000347af) aid_size_cell_apps_grid_lsc_pane

0x319b,	// (0x000347c1) aid_size_cell_apps_grid_prt_pane

0x3dba,	// (0x000353e0) bg_wml_button_pane_cp1_ParamLimits

0x3dba,	// (0x000353e0) bg_wml_button_pane_cp1

0xd309,	// (0x0003e92f) form_midp_field_text_pane_t1_ParamLimits

0x49e8,	// (0x0003600e) input_focus_pane_cp050_ParamLimits

0x4c0b,	// (0x00036231) list_midp_form_text_pane_ParamLimits

0x4bbd,	// (0x000361e3) input_focus_pane_cp051_ParamLimits

0x4bd1,	// (0x000361f7) list_midp_choice_pane_ParamLimits

0xd2c0,	// (0x0003e8e6) list_single_2graphic_pane_cp3_ParamLimits

0xd2c0,	// (0x0003e8e6) list_single_2graphic_pane_cp3

0x6dc7,	// (0x000383ed) list_single_midp_graphic_pane_ParamLimits

0x6dc7,	// (0x000383ed) list_single_midp_graphic_pane

0xf46e,	// (0x00040a94) list_single_graphic_2heading_pane_g1_ParamLimits

0xf46e,	// (0x00040a94) list_single_graphic_2heading_pane_g1

0xf47a,	// (0x00040aa0) list_single_graphic_2heading_pane_g4_ParamLimits

0xf47a,	// (0x00040aa0) list_single_graphic_2heading_pane_g4

0xf486,	// (0x00040aac) list_single_graphic_2heading_pane_g5_ParamLimits

0xf486,	// (0x00040aac) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x00040de9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x00040de9) list_single_graphic_2heading_pane_g

0xf492,	// (0x00040ab8) list_single_graphic_2heading_pane_t1_ParamLimits

0xf492,	// (0x00040ab8) list_single_graphic_2heading_pane_t1

0xf4a6,	// (0x00040acc) list_single_graphic_2heading_pane_t2_ParamLimits

0xf4a6,	// (0x00040acc) list_single_graphic_2heading_pane_t2

0xf4c2,	// (0x00040ae8) list_single_graphic_2heading_pane_t3_ParamLimits

0xf4c2,	// (0x00040ae8) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00040df0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00040df0) list_single_graphic_2heading_pane_t

0x4834,	// (0x00035e5a) bg_popup_sub_pane_cp2

0x485e,	// (0x00035e84) grid_toobar_pane

0x0b5e,	// (0x00032184) cell_toolbar_pane_ParamLimits

0x0b5e,	// (0x00032184) cell_toolbar_pane

0x489a,	// (0x00035ec0) cell_toolbar_pane_g1_ParamLimits

0x489a,	// (0x00035ec0) cell_toolbar_pane_g1

0x48ae,	// (0x00035ed4) cell_toolbar_pane_g2_ParamLimits

0x48ae,	// (0x00035ed4) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00040dfe) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00040dfe) cell_toolbar_pane_g

0x48d0,	// (0x00035ef6) grid_highlight_pane_cp2_ParamLimits

0x48d0,	// (0x00035ef6) grid_highlight_pane_cp2

0x48ea,	// (0x00035f10) toolbar_button_pane

0x48f6,	// (0x00035f1c) toolbar_button_pane_g1

0x48fe,	// (0x00035f24) toolbar_button_pane_g2

0x4906,	// (0x00035f2c) toolbar_button_pane_g3

0x490e,	// (0x00035f34) toolbar_button_pane_g4

0x4916,	// (0x00035f3c) toolbar_button_pane_g5

0x491e,	// (0x00035f44) toolbar_button_pane_g6

0x4926,	// (0x00035f4c) toolbar_button_pane_g7

0x492e,	// (0x00035f54) toolbar_button_pane_g8

0x4936,	// (0x00035f5c) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00040e03) toolbar_button_pane_g

0x0bd0,	// (0x000321f6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0bd0,	// (0x000321f6) list_single_2graphic_pane_g1_cp3

0xba9a,	// (0x0003d0c0) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba9a,	// (0x0003d0c0) list_single_2graphic_pane_g2_cp3

0x0bed,	// (0x00032213) list_single_2graphic_pane_g3_cp3

0x0bf5,	// (0x0003221b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0bf5,	// (0x0003221b) list_single_2graphic_pane_g4_cp3

0x0c01,	// (0x00032227) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0c01,	// (0x00032227) list_single_2graphic_pane_t1_cp3

0x0c5e,	// (0x00032284) list_single_midp_graphic_pane_g2_ParamLimits

0x0c5e,	// (0x00032284) list_single_midp_graphic_pane_g2

0x3d50,	// (0x00035376) aid_zoom_text_primary

0x0b4e,	// (0x00032174) aid_zoom_text_secondary

0x3ca7,	// (0x000352cd) status_small_pane_g7_ParamLimits

0x3ca7,	// (0x000352cd) status_small_pane_g7

0x3cca,	// (0x000352f0) status_small_pane_t1_ParamLimits

0xafed,	// (0x0003c613) title_pane_g2

0x0003,

0xf56a,	// (0x00040b90) title_pane_g

0xb285,	// (0x0003c8ab) aid_size_cell_colour_1_pane_ParamLimits

0xb285,	// (0x0003c8ab) aid_size_cell_colour_1_pane

0xb299,	// (0x0003c8bf) aid_size_cell_colour_2_pane_ParamLimits

0xb299,	// (0x0003c8bf) aid_size_cell_colour_2_pane

0xb2ad,	// (0x0003c8d3) aid_size_cell_colour_3_pane_ParamLimits

0xb2ad,	// (0x0003c8d3) aid_size_cell_colour_3_pane

0xb2c1,	// (0x0003c8e7) aid_size_cell_colour_4_pane_ParamLimits

0xb2c1,	// (0x0003c8e7) aid_size_cell_colour_4_pane

0x0515,	// (0x00031b3b) title_pane_stacon_g1_ParamLimits

0x0515,	// (0x00031b3b) title_pane_stacon_g1

0x4fce,	// (0x000365f4) popup_note_wait_window_g3_ParamLimits

0x4fce,	// (0x000365f4) popup_note_wait_window_g3

0x5045,	// (0x0003666b) popup_note_wait_window_t5_ParamLimits

0x5045,	// (0x0003666b) popup_note_wait_window_t5

0xdf0f,	// (0x0003f535) main_feb_china_hwr_fs_writing_pane

0xc7ca,	// (0x0003ddf0) popup_feb_china_hwr_fs_window_ParamLimits

0xc7ca,	// (0x0003ddf0) popup_feb_china_hwr_fs_window

0xbaab,	// (0x0003d0d1) aid_size_cell_hwr_fs_ParamLimits

0xbaab,	// (0x0003d0d1) aid_size_cell_hwr_fs

0x49e8,	// (0x0003600e) bg_popup_sub_pane_cp3_ParamLimits

0x49e8,	// (0x0003600e) bg_popup_sub_pane_cp3

0xbac0,	// (0x0003d0e6) grid_hwr_fs_pane_ParamLimits

0xbac0,	// (0x0003d0e6) grid_hwr_fs_pane

0x0cad,	// (0x000322d3) linegrid_hwr_fs_pane_ParamLimits

0x0cad,	// (0x000322d3) linegrid_hwr_fs_pane

0xbad8,	// (0x0003d0fe) cell_hwr_fs_pane_ParamLimits

0xbad8,	// (0x0003d0fe) cell_hwr_fs_pane

0x49f4,	// (0x0003601a) linegrid_hwr_fs_pane_g1_ParamLimits

0x49f4,	// (0x0003601a) linegrid_hwr_fs_pane_g1

0xd294,	// (0x0003e8ba) linegrid_hwr_fs_pane_g2_ParamLimits

0xd294,	// (0x0003e8ba) linegrid_hwr_fs_pane_g2

0x4a12,	// (0x00036038) linegrid_hwr_fs_pane_g3_ParamLimits

0x4a12,	// (0x00036038) linegrid_hwr_fs_pane_g3

0x0ce1,	// (0x00032307) linegrid_hwr_fs_pane_g4_ParamLimits

0x0ce1,	// (0x00032307) linegrid_hwr_fs_pane_g4

0x0cff,	// (0x00032325) linegrid_hwr_fs_pane_g5_ParamLimits

0x0cff,	// (0x00032325) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x00040e29) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x00040e29) linegrid_hwr_fs_pane_g

0x4a1e,	// (0x00036044) cell_hwr_fs_pane_g1_ParamLimits

0x4a1e,	// (0x00036044) cell_hwr_fs_pane_g1

0x476b,	// (0x00035d91) cell_hwr_fs_pane_g2_ParamLimits

0x476b,	// (0x00035d91) cell_hwr_fs_pane_g2

0xd2a6,	// (0x0003e8cc) cell_hwr_fs_pane_g3_ParamLimits

0xd2a6,	// (0x0003e8cc) cell_hwr_fs_pane_g3

0xd2b3,	// (0x0003e8d9) cell_hwr_fs_pane_g4_ParamLimits

0xd2b3,	// (0x0003e8d9) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x00040e34) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x00040e34) cell_hwr_fs_pane_g

0xbafe,	// (0x0003d124) cell_hwr_fs_pane_t1

0xdf0f,	// (0x0003f535) grid_highlight_pane_cp6

0xdf0f,	// (0x0003f535) main_idle_act2_pane

0x2f3f,	// (0x00034565) aid_inside_area_popup_secondary

0xd38d,	// (0x0003e9b3) aid_inside_area_window_primary_ParamLimits

0xd38d,	// (0x0003e9b3) aid_inside_area_window_primary

0x6280,	// (0x000378a6) ai2_news_ticker_pane

0x6288,	// (0x000378ae) aid_size_cell_ai1_link_ParamLimits

0x6288,	// (0x000378ae) aid_size_cell_ai1_link

0x62a2,	// (0x000378c8) popup_ai2_data_window_ParamLimits

0x62a2,	// (0x000378c8) popup_ai2_data_window

0x62c0,	// (0x000378e6) popup_ai2_link_window_ParamLimits

0x62c0,	// (0x000378e6) popup_ai2_link_window

0x49e8,	// (0x0003600e) bg_popup_sub_pane_cp4_ParamLimits

0x49e8,	// (0x0003600e) bg_popup_sub_pane_cp4

0x62d6,	// (0x000378fc) grid_ai2_link_pane_ParamLimits

0x62d6,	// (0x000378fc) grid_ai2_link_pane

0x62ed,	// (0x00037913) popup_ai2_link_window_g1_ParamLimits

0x62ed,	// (0x00037913) popup_ai2_link_window_g1

0x62f9,	// (0x0003791f) popup_ai2_link_window_g2_ParamLimits

0x62f9,	// (0x0003791f) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00041000) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00041000) popup_ai2_link_window_g

0x630a,	// (0x00037930) ai2_mp_button_pane

0x6312,	// (0x00037938) ai2_mp_volume_pane

0x4bbd,	// (0x000361e3) bg_popup_sub_pane_cp5_ParamLimits

0x4bbd,	// (0x000361e3) bg_popup_sub_pane_cp5

0x631a,	// (0x00037940) heading_ai2_gene_pane_ParamLimits

0x631a,	// (0x00037940) heading_ai2_gene_pane

0x6326,	// (0x0003794c) list_ai2_gene_pane_ParamLimits

0x6326,	// (0x0003794c) list_ai2_gene_pane

0x636e,	// (0x00037994) cell_ai2_link_pane_ParamLimits

0x636e,	// (0x00037994) cell_ai2_link_pane

0x6384,	// (0x000379aa) cell_ai2_link_pane_g1

0xdf0f,	// (0x0003f535) grid_highlight_pane_cp7

0x111b,	// (0x00032741) ai2_mp_volume_pane_g1

0x6457,	// (0x00037a7d) ai2_mp_volume_pane_g2

0x63cc,	// (0x000379f2) list_ai2_gene_pane_t1

0x645f,	// (0x00037a85) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00041019) ai2_mp_volume_pane_g

0x1123,	// (0x00032749) volume_small_pane_cp3

0x6467,	// (0x00037a8d) aid_size_cell_ai2_button

0x646f,	// (0x00037a95) grid_ai2_button_pane

0x6478,	// (0x00037a9e) cell_ai2_button_pane_ParamLimits

0x6478,	// (0x00037a9e) cell_ai2_button_pane

0xdf05,	// (0x0003f52b) cell_ai2_button_pane_g1

0xdf0f,	// (0x0003f535) grid_highlight_pane_cp8

0x6417,	// (0x00037a3d) ai2_gene_pane_t1_ParamLimits

0x6417,	// (0x00037a3d) ai2_gene_pane_t1

0xc756,	// (0x0003dd7c) aid_height_parent_landscape

0xd55d,	// (0x0003eb83) aid_height_set_list

0x5d3b,	// (0x00037361) aid_size_parent

0x60a1,	// (0x000376c7) aid_size_cell_graphic_pane_ParamLimits

0x6336,	// (0x0003795c) popup_ai2_data_window_g1_ParamLimits

0x6336,	// (0x0003795c) popup_ai2_data_window_g1

0x6342,	// (0x00037968) ai2_news_ticker_pane_g1

0x634a,	// (0x00037970) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00041005) ai2_news_ticker_pane_g

0x6352,	// (0x00037978) ai2_news_ticker_pane_t1

0x6360,	// (0x00037986) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0004100a) ai2_news_ticker_pane_t

0x638d,	// (0x000379b3) heading_ai2_gene_pane_g1

0x6395,	// (0x000379bb) heading_ai2_gene_pane_t1_ParamLimits

0x6395,	// (0x000379bb) heading_ai2_gene_pane_t1

0x63aa,	// (0x000379d0) list_highlight_pane_cp6

0x63b2,	// (0x000379d8) ai2_gene_pane_ParamLimits

0x63b2,	// (0x000379d8) ai2_gene_pane

0x63da,	// (0x00037a00) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0004100f) list_ai2_gene_pane_t

0x63e8,	// (0x00037a0e) list_highlight_pane_cp8_ParamLimits

0x63e8,	// (0x00037a0e) list_highlight_pane_cp8

0x63f9,	// (0x00037a1f) ai2_gene_pane_g1_ParamLimits

0x63f9,	// (0x00037a1f) ai2_gene_pane_g1

0x640b,	// (0x00037a31) ai2_gene_pane_g2_ParamLimits

0x640b,	// (0x00037a31) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00041014) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00041014) ai2_gene_pane_g

0x2a84,	// (0x000340aa) scroll_pane_cp12

0xba3d,	// (0x0003d063) control_pane_t3_ParamLimits

0xba3d,	// (0x0003d063) control_pane_t3

0x3cbb,	// (0x000352e1) status_small_pane_g8_ParamLimits

0x3cbb,	// (0x000352e1) status_small_pane_g8

0xc86c,	// (0x0003de92) popup_find_window_ParamLimits

0xcb19,	// (0x0003e13f) popup_note_image_window_ParamLimits

0x0b8e,	// (0x000321b4) list_double2_graphic_pane_vc_g1_ParamLimits

0x0b8e,	// (0x000321b4) list_double2_graphic_pane_vc_g1

0x0b9a,	// (0x000321c0) list_double2_graphic_pane_vc_g2_ParamLimits

0x0b9a,	// (0x000321c0) list_double2_graphic_pane_vc_g2

0x0ba6,	// (0x000321cc) list_double2_graphic_pane_vc_g3_ParamLimits

0x0ba6,	// (0x000321cc) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x00040df7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x00040df7) list_double2_graphic_pane_vc_g

0x0bb2,	// (0x000321d8) list_double2_graphic_pane_vc_t1_ParamLimits

0x0bb2,	// (0x000321d8) list_double2_graphic_pane_vc_t1

0x0c1c,	// (0x00032242) list_single_heading_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_heading_pane_vc_g1

0x0c28,	// (0x0003224e) list_single_heading_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_heading_pane_vc_g

0x0c34,	// (0x0003225a) list_single_heading_pane_vc_t1_ParamLimits

0x0c34,	// (0x0003225a) list_single_heading_pane_vc_t1

0x0c4a,	// (0x00032270) list_single_heading_pane_vc_t2_ParamLimits

0x0c4a,	// (0x00032270) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x00040e18) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x00040e18) list_single_heading_pane_vc_t

0x493e,	// (0x00035f64) list_setting_number_pane_vc_g1_ParamLimits

0x493e,	// (0x00035f64) list_setting_number_pane_vc_g1

0x494a,	// (0x00035f70) list_setting_number_pane_vc_g2_ParamLimits

0x494a,	// (0x00035f70) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00040e1d) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00040e1d) list_setting_number_pane_vc_g

0x4956,	// (0x00035f7c) list_setting_number_pane_vc_t1_ParamLimits

0x4956,	// (0x00035f7c) list_setting_number_pane_vc_t1

0x496a,	// (0x00035f90) list_setting_number_pane_vc_t2_ParamLimits

0x496a,	// (0x00035f90) list_setting_number_pane_vc_t2

0x4986,	// (0x00035fac) list_setting_number_pane_vc_t3_ParamLimits

0x4986,	// (0x00035fac) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x00040e22) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x00040e22) list_setting_number_pane_vc_t

0x49ae,	// (0x00035fd4) set_value_pane_vc_ParamLimits

0x49ae,	// (0x00035fd4) set_value_pane_vc

0x101e,	// (0x00032644) list_double2_graphic_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double2_graphic_pane_vc

0x5f1f,	// (0x00037545) list_double2_large_graphic_pane_vc_ParamLimits

0x5f1f,	// (0x00037545) list_double2_large_graphic_pane_vc

0x101e,	// (0x00032644) list_double2_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double2_pane_vc

0x101e,	// (0x00032644) list_double_graphic_heading_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_graphic_heading_pane_vc

0x101e,	// (0x00032644) list_double_graphic_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_graphic_pane_vc

0x101e,	// (0x00032644) list_double_heading_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_heading_pane_vc

0x5f1f,	// (0x00037545) list_double_large_graphic_pane_vc_ParamLimits

0x5f1f,	// (0x00037545) list_double_large_graphic_pane_vc

0x101e,	// (0x00032644) list_double_number_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_number_pane_vc

0x101e,	// (0x00032644) list_double_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_pane_vc

0x101e,	// (0x00032644) list_double_time_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_double_time_pane_vc

0x101e,	// (0x00032644) list_setting_number_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_setting_number_pane_vc

0x101e,	// (0x00032644) list_setting_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_setting_pane_vc

0x101e,	// (0x00032644) list_single_graphic_heading_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_single_graphic_heading_pane_vc

0x101e,	// (0x00032644) list_single_heading_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_single_heading_pane_vc

0x101e,	// (0x00032644) list_single_number_heading_pane_vc_ParamLimits

0x101e,	// (0x00032644) list_single_number_heading_pane_vc

0x0b8e,	// (0x000321b4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0b8e,	// (0x000321b4) list_double_graphic_heading_pane_vc_g1

0x0c1c,	// (0x00032242) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0c1c,	// (0x00032242) list_double_graphic_heading_pane_vc_g2

0x0c28,	// (0x0003224e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0c28,	// (0x0003224e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x00041020) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00041020) list_double_graphic_heading_pane_vc_g

0x112c,	// (0x00032752) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x112c,	// (0x00032752) list_double_graphic_heading_pane_vc_t1

0x0c34,	// (0x0003225a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c34,	// (0x0003225a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00041027) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00041027) list_double_graphic_heading_pane_vc_t

0x493e,	// (0x00035f64) list_setting_pane_vc_g1_ParamLimits

0x493e,	// (0x00035f64) list_setting_pane_vc_g1

0x494a,	// (0x00035f70) list_setting_pane_vc_g2_ParamLimits

0x494a,	// (0x00035f70) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x00040e1d) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x00040e1d) list_setting_pane_vc_g

0x66f6,	// (0x00037d1c) list_setting_pane_vc_t1_ParamLimits

0x66f6,	// (0x00037d1c) list_setting_pane_vc_t1

0x670a,	// (0x00037d30) list_setting_pane_vc_t2_ParamLimits

0x670a,	// (0x00037d30) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0004106a) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0004106a) list_setting_pane_vc_t

0x49ae,	// (0x00035fd4) set_value_pane_cp_vc_ParamLimits

0x49ae,	// (0x00035fd4) set_value_pane_cp_vc

0x0c1c,	// (0x00032242) list_single_number_heading_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_single_number_heading_pane_vc_g1

0x0c28,	// (0x0003224e) list_single_number_heading_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_single_number_heading_pane_vc_g

0x0c34,	// (0x0003225a) list_single_number_heading_pane_vc_t1_ParamLimits

0x0c34,	// (0x0003225a) list_single_number_heading_pane_vc_t1

0x1140,	// (0x00032766) list_single_number_heading_pane_vc_t2_ParamLimits

0x1140,	// (0x00032766) list_single_number_heading_pane_vc_t2

0x1154,	// (0x0003277a) list_single_number_heading_pane_vc_t3_ParamLimits

0x1154,	// (0x0003277a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0004106f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0004106f) list_single_number_heading_pane_vc_t

0x0b8e,	// (0x000321b4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0b8e,	// (0x000321b4) list_single_graphic_heading_pane_vc_g1

0x0c1c,	// (0x00032242) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0c1c,	// (0x00032242) list_single_graphic_heading_pane_vc_g4

0x0c28,	// (0x0003224e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0c28,	// (0x0003224e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x00041020) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00041020) list_single_graphic_heading_pane_vc_g

0x0c34,	// (0x0003225a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c34,	// (0x0003225a) list_single_graphic_heading_pane_vc_t1

0x1166,	// (0x0003278c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1166,	// (0x0003278c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00041076) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00041076) list_single_graphic_heading_pane_vc_t

0x0c1c,	// (0x00032242) list_double2_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_double2_pane_vc_g1

0x0c28,	// (0x0003224e) list_double2_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_double2_pane_vc_g

0x117a,	// (0x000327a0) list_double2_pane_vc_t1_ParamLimits

0x117a,	// (0x000327a0) list_double2_pane_vc_t1

0x1190,	// (0x000327b6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1190,	// (0x000327b6) list_double2_large_graphic_pane_vc_g1

0x119c,	// (0x000327c2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x119c,	// (0x000327c2) list_double2_large_graphic_pane_vc_g2

0x11a8,	// (0x000327ce) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x11a8,	// (0x000327ce) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00040c27) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00040c27) list_double2_large_graphic_pane_vc_g

0x11b4,	// (0x000327da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x11b4,	// (0x000327da) list_double2_large_graphic_pane_vc_t1

0x11ca,	// (0x000327f0) list_double_time_pane_vc_g1_ParamLimits

0x11ca,	// (0x000327f0) list_double_time_pane_vc_g1

0x11d6,	// (0x000327fc) list_double_time_pane_vc_g2_ParamLimits

0x11d6,	// (0x000327fc) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0004107b) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0004107b) list_double_time_pane_vc_g

0x11e2,	// (0x00032808) list_double_time_pane_vc_t1_ParamLimits

0x11e2,	// (0x00032808) list_double_time_pane_vc_t1

0x11fb,	// (0x00032821) list_double_time_pane_vc_t2_ParamLimits

0x11fb,	// (0x00032821) list_double_time_pane_vc_t2

0x123b,	// (0x00032861) list_double_time_pane_vc_t3_ParamLimits

0x123b,	// (0x00032861) list_double_time_pane_vc_t3

0x1253,	// (0x00032879) list_double_time_pane_vc_t4_ParamLimits

0x1253,	// (0x00032879) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00041080) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00041080) list_double_time_pane_vc_t

0x0c1c,	// (0x00032242) list_double_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_double_pane_vc_g1

0x0c28,	// (0x0003224e) list_double_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_double_pane_vc_g

0x1267,	// (0x0003288d) list_double_pane_vc_t1_ParamLimits

0x1267,	// (0x0003288d) list_double_pane_vc_t1

0x1279,	// (0x0003289f) list_double_pane_vc_t2_ParamLimits

0x1279,	// (0x0003289f) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00041089) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00041089) list_double_pane_vc_t

0x0c1c,	// (0x00032242) list_double_number_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_double_number_pane_vc_g1

0x0c28,	// (0x0003224e) list_double_number_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_double_number_pane_vc_g

0x1291,	// (0x000328b7) list_double_number_pane_vc_t1_ParamLimits

0x1291,	// (0x000328b7) list_double_number_pane_vc_t1

0x12a5,	// (0x000328cb) list_double_number_pane_vc_t2_ParamLimits

0x12a5,	// (0x000328cb) list_double_number_pane_vc_t2

0x1279,	// (0x0003289f) list_double_number_pane_vc_t3_ParamLimits

0x1279,	// (0x0003289f) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0004108e) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0004108e) list_double_number_pane_vc_t

0x12b7,	// (0x000328dd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x12b7,	// (0x000328dd) list_double_large_graphic_pane_vc_g1

0x12c3,	// (0x000328e9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x12c3,	// (0x000328e9) list_double_large_graphic_pane_vc_g2

0x11a8,	// (0x000327ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x11a8,	// (0x000327ce) list_double_large_graphic_pane_vc_g3

0x12d2,	// (0x000328f8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x12d2,	// (0x000328f8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00041095) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00041095) list_double_large_graphic_pane_vc_g

0x12de,	// (0x00032904) list_double_large_graphic_pane_vc_t1_ParamLimits

0x12de,	// (0x00032904) list_double_large_graphic_pane_vc_t1

0x12f0,	// (0x00032916) list_double_large_graphic_pane_vc_t2_ParamLimits

0x12f0,	// (0x00032916) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004109e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004109e) list_double_large_graphic_pane_vc_t

0x0c1c,	// (0x00032242) list_double_heading_pane_vc_g1_ParamLimits

0x0c1c,	// (0x00032242) list_double_heading_pane_vc_g1

0x0c28,	// (0x0003224e) list_double_heading_pane_vc_g2_ParamLimits

0x0c28,	// (0x0003224e) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00040c0a) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00040c0a) list_double_heading_pane_vc_g

0x1309,	// (0x0003292f) list_double_heading_pane_vc_t1_ParamLimits

0x1309,	// (0x0003292f) list_double_heading_pane_vc_t1

0x0c34,	// (0x0003225a) list_double_heading_pane_vc_t2_ParamLimits

0x0c34,	// (0x0003225a) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x000410a3) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x000410a3) list_double_heading_pane_vc_t

0x131d,	// (0x00032943) list_double_graphic_pane_vc_g1_ParamLimits

0x131d,	// (0x00032943) list_double_graphic_pane_vc_g1

0x132d,	// (0x00032953) list_double_graphic_pane_vc_g2_ParamLimits

0x132d,	// (0x00032953) list_double_graphic_pane_vc_g2

0x133c,	// (0x00032962) list_double_graphic_pane_vc_g3_ParamLimits

0x133c,	// (0x00032962) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x000410a8) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x000410a8) list_double_graphic_pane_vc_g

0x1348,	// (0x0003296e) list_double_graphic_pane_vc_t1_ParamLimits

0x1348,	// (0x0003296e) list_double_graphic_pane_vc_t1

0x1279,	// (0x0003289f) list_double_graphic_pane_vc_t2_ParamLimits

0x1279,	// (0x0003289f) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x000410af) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x000410af) list_double_graphic_pane_vc_t

0xf24c,	// (0x00040872) aid_size_cell_fastswap

0xae37,	// (0x0003c45d) aid_size_cell_touch_ParamLimits

0xae37,	// (0x0003c45d) aid_size_cell_touch

0xf3d3,	// (0x000409f9) popup_fast_swap_wide_window_ParamLimits

0xf3d3,	// (0x000409f9) popup_fast_swap_wide_window

0xaf86,	// (0x0003c5ac) touch_pane_ParamLimits

0xaf86,	// (0x0003c5ac) touch_pane

0x2ada,	// (0x00034100) button_value_adjust_pane_cp2

0x2ada,	// (0x00034100) button_value_adjust_pane_cp4

0x02a1,	// (0x000318c7) form_field_data_pane_cp2

0xb783,	// (0x0003cda9) form_field_data_wide_pane_cp2

0x325b,	// (0x00034881) bg_scroll_pane_ParamLimits

0x067a,	// (0x00031ca0) scroll_handle_pane_ParamLimits

0x068e,	// (0x00031cb4) scroll_sc2_down_pane_ParamLimits

0x068e,	// (0x00031cb4) scroll_sc2_down_pane

0x328c,	// (0x000348b2) scroll_sc2_up_pane_ParamLimits

0x328c,	// (0x000348b2) scroll_sc2_up_pane

0xd911,	// (0x0003ef37) grid_wheel_folder_pane_g1_ParamLimits

0xd911,	// (0x0003ef37) grid_wheel_folder_pane_g1

0x08e4,	// (0x00031f0a) clock_nsta_pane_cp2_ParamLimits

0x08e4,	// (0x00031f0a) clock_nsta_pane_cp2

0xc66b,	// (0x0003dc91) listscroll_midp_pane_ParamLimits

0xc67c,	// (0x0003dca2) midp_canvas_pane

0x3d36,	// (0x0003535c) nsta_clock_indic_pane

0x3d8c,	// (0x000353b2) listscroll_form_pane_vc

0x3da8,	// (0x000353ce) listscroll_set_pane_vc_ParamLimits

0x3da8,	// (0x000353ce) listscroll_set_pane_vc

0xcf8e,	// (0x0003e5b4) clock_nsta_pane

0xcfb8,	// (0x0003e5de) indicator_nsta_pane

0x4834,	// (0x00035e5a) bg_popup_sub_pane_cp2_ParamLimits

0x4848,	// (0x00035e6e) find_pane_cp2_ParamLimits

0x4848,	// (0x00035e6e) find_pane_cp2

0x485e,	// (0x00035e84) grid_toobar_pane_ParamLimits

0x49bc,	// (0x00035fe2) list_form_gen_pane_vc_ParamLimits

0x49bc,	// (0x00035fe2) list_form_gen_pane_vc

0x49d2,	// (0x00035ff8) scroll_pane_cp8_vc_ParamLimits

0x49d2,	// (0x00035ff8) scroll_pane_cp8_vc

0x4a4e,	// (0x00036074) data_form_wide_pane_vc_ParamLimits

0x4a4e,	// (0x00036074) data_form_wide_pane_vc

0x4a5a,	// (0x00036080) form_field_data_wide_pane_vc_g1

0x4a62,	// (0x00036088) form_field_data_wide_pane_vc_t1_ParamLimits

0x4a62,	// (0x00036088) form_field_data_wide_pane_vc_t1

0x2aee,	// (0x00034114) input_focus_pane_cp6_vc_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_cp6_vc

0xd331,	// (0x0003e957) list_midp_pane_ParamLimits

0x610d,	// (0x00037733) scroll_pane_cp16_ParamLimits

0x610d,	// (0x00037733) scroll_pane_cp16

0x4da2,	// (0x000363c8) button_value_adjust_pane_ParamLimits

0x4da2,	// (0x000363c8) button_value_adjust_pane

0xd56e,	// (0x0003eb94) button_value_adjust_pane_cp6_ParamLimits

0xd56e,	// (0x0003eb94) button_value_adjust_pane_cp6

0xd6b0,	// (0x0003ecd6) settings_code_pane_cp_ParamLimits

0xd6b0,	// (0x0003ecd6) settings_code_pane_cp

0xdf05,	// (0x0003f52b) cell_touch_pane_g1

0xdf05,	// (0x0003f52b) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x00040d40) cell_touch_pane_g

0xd7e6,	// (0x0003ee0c) cell_touch_pane_cp_ParamLimits

0xd7e6,	// (0x0003ee0c) cell_touch_pane_cp

0xd802,	// (0x0003ee28) cell_touch_pane_ParamLimits

0xd802,	// (0x0003ee28) cell_touch_pane

0xdf05,	// (0x0003f52b) scroll_sc2_down_pane_g1

0xdf05,	// (0x0003f52b) scroll_sc2_up_pane_g1

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp4_vc

0x64ab,	// (0x00037ad1) list_set_graphic_pane_vc_g1_ParamLimits

0x64ab,	// (0x00037ad1) list_set_graphic_pane_vc_g1

0x64b7,	// (0x00037add) list_set_graphic_pane_vc_g2_ParamLimits

0x64b7,	// (0x00037add) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0004102c) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0004102c) list_set_graphic_pane_vc_g

0x64c3,	// (0x00037ae9) text_primary_small_cp13_vc_ParamLimits

0x64c3,	// (0x00037ae9) text_primary_small_cp13_vc

0x64db,	// (0x00037b01) list_set_graphic_pane_vc_ParamLimits

0x64db,	// (0x00037b01) list_set_graphic_pane_vc

0xdf0f,	// (0x0003f535) input_focus_pane_cp2_vc

0xdf05,	// (0x0003f52b) setting_code_pane_vc_g1

0x64ef,	// (0x00037b15) setting_code_pane_vc_t1

0x64fd,	// (0x00037b23) set_text_pane_vc_t1_ParamLimits

0x64fd,	// (0x00037b23) set_text_pane_vc_t1

0xdf0f,	// (0x0003f535) input_focus_pane_cp1_vc

0x651b,	// (0x00037b41) list_set_text_pane_vc

0xdf05,	// (0x0003f52b) setting_text_pane_vc_g1

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp2_vc

0x6525,	// (0x00037b4b) setting_slider_graphic_pane_vc_g1

0x652d,	// (0x00037b53) setting_slider_graphic_pane_vc_t1

0x653b,	// (0x00037b61) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x00041031) setting_slider_graphic_pane_vc_t

0x6549,	// (0x00037b6f) slider_set_pane_cp_vc

0x6551,	// (0x00037b77) slider_set_pane_vc_g1

0x655a,	// (0x00037b80) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00041036) slider_set_pane_vc_g

0x2b55,	// (0x0003417b) set_opt_bg_pane_g1_copy1

0x2b5d,	// (0x00034183) set_opt_bg_pane_g2_copy1

0x6586,	// (0x00037bac) set_opt_bg_pane_g3_copy1

0x2b6d,	// (0x00034193) set_opt_bg_pane_g4_copy1

0x2b75,	// (0x0003419b) set_opt_bg_pane_g5_copy1

0x2b7d,	// (0x000341a3) set_opt_bg_pane_g6_copy1

0x6590,	// (0x00037bb6) set_opt_bg_pane_g7_copy1

0x659a,	// (0x00037bc0) set_opt_bg_pane_g8_copy1

0x65a4,	// (0x00037bca) set_opt_bg_pane_g9_copy1

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp_vc

0x65f0,	// (0x00037c16) setting_slider_pane_vc_t1

0x652d,	// (0x00037b53) setting_slider_pane_vc_t2

0x653b,	// (0x00037b61) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00041045) setting_slider_pane_vc_t

0x6549,	// (0x00037b6f) slider_set_pane_vc

0x0d55,	// (0x0003237b) volume_set_pane_vc_g1

0x0d5e,	// (0x00032384) volume_set_pane_vc_g2

0x0d67,	// (0x0003238d) volume_set_pane_vc_g3

0x0d70,	// (0x00032396) volume_set_pane_vc_g4

0x0d79,	// (0x0003239f) volume_set_pane_vc_g5

0x0d82,	// (0x000323a8) volume_set_pane_vc_g6

0x0d8b,	// (0x000323b1) volume_set_pane_vc_g7

0x0d94,	// (0x000323ba) volume_set_pane_vc_g8

0x0d9d,	// (0x000323c3) volume_set_pane_vc_g9

0x0da6,	// (0x000323cc) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0004104c) volume_set_pane_vc_g

0x65ff,	// (0x00037c25) volume_set_pane_vc

0x6607,	// (0x00037c2d) button_value_adjust_pane_cp1_vc

0x6611,	// (0x00037c37) list_highlight_pane_cp2_vc

0x661a,	// (0x00037c40) list_set_pane_vc_ParamLimits

0x661a,	// (0x00037c40) list_set_pane_vc

0x6684,	// (0x00037caa) main_pane_set_vc_t1_ParamLimits

0x6684,	// (0x00037caa) main_pane_set_vc_t1

0x6699,	// (0x00037cbf) main_pane_set_vc_t2_ParamLimits

0x6699,	// (0x00037cbf) main_pane_set_vc_t2

0x66ab,	// (0x00037cd1) main_pane_set_vc_t3_ParamLimits

0x66ab,	// (0x00037cd1) main_pane_set_vc_t3

0x66bf,	// (0x00037ce5) main_pane_set_vc_t4_ParamLimits

0x66bf,	// (0x00037ce5) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00041061) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00041061) main_pane_set_vc_t

0x66d3,	// (0x00037cf9) setting_code_pane_vc_ParamLimits

0x66d3,	// (0x00037cf9) setting_code_pane_vc

0x66e4,	// (0x00037d0a) setting_slider_graphic_pane_vc

0x66e4,	// (0x00037d0a) setting_slider_pane_vc

0x66e4,	// (0x00037d0a) setting_text_pane_vc

0x66e4,	// (0x00037d0a) setting_volume_pane_vc

0x66ee,	// (0x00037d14) scroll_pane_cp121_vc

0x2ac8,	// (0x000340ee) set_content_pane_vc

0x672c,	// (0x00037d52) button_value_adjust_pane_g1

0x6735,	// (0x00037d5b) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x000410b4) button_value_adjust_pane_g

0x673e,	// (0x00037d64) form_field_slider_wide_pane_vc_t1_ParamLimits

0x673e,	// (0x00037d64) form_field_slider_wide_pane_vc_t1

0x6752,	// (0x00037d78) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6752,	// (0x00037d78) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x000410b9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x000410b9) form_field_slider_wide_pane_vc_t

0x24e3,	// (0x00033b09) input_focus_pane_cp10_vc_ParamLimits

0x24e3,	// (0x00033b09) input_focus_pane_cp10_vc

0x6764,	// (0x00037d8a) slider_cont_pane_cp1_vc_ParamLimits

0x6764,	// (0x00037d8a) slider_cont_pane_cp1_vc

0x6551,	// (0x00037b77) slider_form_pane_g1_cp2

0x655a,	// (0x00037b80) slider_form_pane_g2_cp2

0x677d,	// (0x00037da3) form_field_slider_pane_vc_t3

0x678b,	// (0x00037db1) form_field_slider_pane_vc_t4

0x6799,	// (0x00037dbf) slider_form_pane_vc_ParamLimits

0x6799,	// (0x00037dbf) slider_form_pane_vc

0x67a6,	// (0x00037dcc) form_field_slider_pane_vc_t1_ParamLimits

0x67a6,	// (0x00037dcc) form_field_slider_pane_vc_t1

0x6752,	// (0x00037d78) form_field_slider_pane_vc_t2_ParamLimits

0x6752,	// (0x00037d78) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x000410c9) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x000410c9) form_field_slider_pane_vc_t

0x24e3,	// (0x00033b09) input_focus_pane_cp9_vc_ParamLimits

0x24e3,	// (0x00033b09) input_focus_pane_cp9_vc

0x67c2,	// (0x00037de8) slider_cont_pane_vc_ParamLimits

0x67c2,	// (0x00037de8) slider_cont_pane_vc

0x67d4,	// (0x00037dfa) list_form_graphic_pane_cp_vc_ParamLimits

0x67d4,	// (0x00037dfa) list_form_graphic_pane_cp_vc

0x4a5a,	// (0x00036080) form_field_popup_wide_pane_vc_g1

0x67e9,	// (0x00037e0f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x67e9,	// (0x00037e0f) form_field_popup_wide_pane_vc_t1

0x2aee,	// (0x00034114) input_focus_pane_cp8_vc_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_cp8_vc

0x6800,	// (0x00037e26) list_form_wide_pane_vc_ParamLimits

0x6800,	// (0x00037e26) list_form_wide_pane_vc

0x680c,	// (0x00037e32) list_form_graphic_pane_vc_g1

0x6814,	// (0x00037e3a) list_form_graphic_pane_vc_t1_ParamLimits

0x6814,	// (0x00037e3a) list_form_graphic_pane_vc_t1

0x2267,	// (0x0003388d) list_highlight_pane_cp5_vc_ParamLimits

0x2267,	// (0x0003388d) list_highlight_pane_cp5_vc

0x6830,	// (0x00037e56) list_form_graphic_pane_vc_ParamLimits

0x6830,	// (0x00037e56) list_form_graphic_pane_vc

0x4a5a,	// (0x00036080) form_field_popup_pane_vc_g1

0x6846,	// (0x00037e6c) form_field_popup_pane_vc_t1_ParamLimits

0x6846,	// (0x00037e6c) form_field_popup_pane_vc_t1

0x2aee,	// (0x00034114) input_focus_pane_cp7_vc_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_cp7_vc

0x685d,	// (0x00037e83) list_form_pane_vc_ParamLimits

0x685d,	// (0x00037e83) list_form_pane_vc

0x6869,	// (0x00037e8f) data_form_pane_vc_t1_ParamLimits

0x6869,	// (0x00037e8f) data_form_pane_vc_t1

0x2b55,	// (0x0003417b) input_focus_pane_vc_g1

0x2b5d,	// (0x00034183) input_focus_pane_vc_g2

0x2b65,	// (0x0003418b) input_focus_pane_vc_g3

0x2b6d,	// (0x00034193) input_focus_pane_vc_g4

0x2b75,	// (0x0003419b) input_focus_pane_vc_g5

0x2b7d,	// (0x000341a3) input_focus_pane_vc_g6

0x2b85,	// (0x000341ab) input_focus_pane_vc_g7

0x2b8d,	// (0x000341b3) input_focus_pane_vc_g8

0x2b95,	// (0x000341bb) input_focus_pane_vc_g9

0xdf05,	// (0x0003f52b) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x00040cc9) input_focus_pane_vc_g

0x4a4e,	// (0x00036074) data_form_pane_vc_ParamLimits

0x4a4e,	// (0x00036074) data_form_pane_vc

0x4a5a,	// (0x00036080) form_field_data_pane_vc_g1

0x6886,	// (0x00037eac) form_field_data_pane_vc_t1_ParamLimits

0x6886,	// (0x00037eac) form_field_data_pane_vc_t1

0x2aee,	// (0x00034114) input_focus_pane_vc_ParamLimits

0x2aee,	// (0x00034114) input_focus_pane_vc

0x68a0,	// (0x00037ec6) button_value_adjust_pane_cp3_vc

0x68a8,	// (0x00037ece) button_value_adjust_pane_cp5_vc

0x68b0,	// (0x00037ed6) form_field_data_pane_vc_ParamLimits

0x68b0,	// (0x00037ed6) form_field_data_pane_vc

0x68cb,	// (0x00037ef1) form_field_data_pane_vc_cp2

0x68d3,	// (0x00037ef9) form_field_data_wide_pane_vc_ParamLimits

0x68d3,	// (0x00037ef9) form_field_data_wide_pane_vc

0x68ed,	// (0x00037f13) form_field_data_wide_pane_vc_cp2

0x68f5,	// (0x00037f1b) form_field_popup_pane_vc_ParamLimits

0x68f5,	// (0x00037f1b) form_field_popup_pane_vc

0x6910,	// (0x00037f36) form_field_popup_wide_pane_vc_ParamLimits

0x6910,	// (0x00037f36) form_field_popup_wide_pane_vc

0x692a,	// (0x00037f50) form_field_slider_pane_vc_ParamLimits

0x692a,	// (0x00037f50) form_field_slider_pane_vc

0x693d,	// (0x00037f63) form_field_slider_wide_pane_vc_ParamLimits

0x693d,	// (0x00037f63) form_field_slider_wide_pane_vc

0xd820,	// (0x0003ee46) grid_touch_1_pane_ParamLimits

0xd820,	// (0x0003ee46) grid_touch_1_pane

0xd834,	// (0x0003ee5a) grid_touch_2_pane_ParamLimits

0xd834,	// (0x0003ee5a) grid_touch_2_pane

0x6a14,	// (0x0003803a) touch_pane_g1_ParamLimits

0x6a14,	// (0x0003803a) touch_pane_g1

0x6976,	// (0x00037f9c) cell_app_pane_cp_wide_ParamLimits

0x6976,	// (0x00037f9c) cell_app_pane_cp_wide

0x6987,	// (0x00037fad) grid_popup_fast_wide_pane_ParamLimits

0x6987,	// (0x00037fad) grid_popup_fast_wide_pane

0x699b,	// (0x00037fc1) scroll_pane_cp19_ParamLimits

0x699b,	// (0x00037fc1) scroll_pane_cp19

0xdf0f,	// (0x0003f535) bg_popup_window_pane_cp20

0x69af,	// (0x00037fd5) listscroll_popup_fast_wide_pane

0x2fac,	// (0x000345d2) grid_indicator_nsta_pane

0x69b7,	// (0x00037fdd) clock_nsta_pane_g1

0x69c0,	// (0x00037fe6) clock_nsta_pane_t1

0xd860,	// (0x0003ee86) cell_indicator_nsta_pane_ParamLimits

0xd860,	// (0x0003ee86) cell_indicator_nsta_pane

0x6a14,	// (0x0003803a) cell_indicator_nsta_pane_g1

0xd87d,	// (0x0003eea3) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x000410d3) cell_indicator_nsta_pane_g

0x6a37,	// (0x0003805d) clock_nsta_pane_cp

0x6a3f,	// (0x00038065) indicator_nsta_pane_cp

0x6a47,	// (0x0003806d) nsta_clock_indic_pane_g1

0x2333,	// (0x00033959) grid_indicator_pane

0x337e,	// (0x000349a4) scroll_pane_cp29

0x0830,	// (0x00031e56) indicator_nsta_pane_cp2_ParamLimits

0x0830,	// (0x00031e56) indicator_nsta_pane_cp2

0x2267,	// (0x0003388d) main_apps_wheel_pane

0x4c25,	// (0x0003624b) form_midp_field_text_pane_ParamLimits

0x4d74,	// (0x0003639a) scroll_bar_cp050_ParamLimits

0x6ab0,	// (0x000380d6) cell_indicator_pane_ParamLimits

0x6ab0,	// (0x000380d6) cell_indicator_pane

0x6ac8,	// (0x000380ee) cell_indicator_pane_g1

0xd893,	// (0x0003eeb9) grid_wheel_folder_pane_ParamLimits

0xd893,	// (0x0003eeb9) grid_wheel_folder_pane

0xd8a1,	// (0x0003eec7) list_wheel_apps_pane_ParamLimits

0xd8a1,	// (0x0003eec7) list_wheel_apps_pane

0xd8af,	// (0x0003eed5) main_apps_wheel_pane_g1_ParamLimits

0xd8af,	// (0x0003eed5) main_apps_wheel_pane_g1

0xd8bf,	// (0x0003eee5) main_apps_wheel_pane_g2_ParamLimits

0xd8bf,	// (0x0003eee5) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x000410ef) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x000410ef) main_apps_wheel_pane_g

0xd8cf,	// (0x0003eef5) main_apps_wheel_pane_t1_ParamLimits

0xd8cf,	// (0x0003eef5) main_apps_wheel_pane_t1

0xd8e7,	// (0x0003ef0d) list_wheel_apps_pane_g1

0xd8ef,	// (0x0003ef15) list_wheel_apps_pane_g2

0xd8f7,	// (0x0003ef1d) list_wheel_apps_pane_g3

0xd8ff,	// (0x0003ef25) list_wheel_apps_pane_g4

0xd907,	// (0x0003ef2d) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x000410f4) list_wheel_apps_pane_g

0x38b0,	// (0x00034ed6) navi_icon_text_pane

0xce87,	// (0x0003e4ad) aid_fill_nsta

0xd924,	// (0x0003ef4a) navi_icon_text_pane_g1

0xd930,	// (0x0003ef56) navi_icon_text_pane_t1

0xc653,	// (0x0003dc79) list_set_graphic_pane_t1_ParamLimits

0xc653,	// (0x0003dc79) list_set_graphic_pane_t1

0x54c5,	// (0x00036aeb) popup_midp_note_alarm_window_t6_ParamLimits

0x54c5,	// (0x00036aeb) popup_midp_note_alarm_window_t6

0x54d7,	// (0x00036afd) popup_midp_note_alarm_window_t7_ParamLimits

0x54d7,	// (0x00036afd) popup_midp_note_alarm_window_t7

0x54e9,	// (0x00036b0f) popup_midp_note_alarm_window_t8_ParamLimits

0x54e9,	// (0x00036b0f) popup_midp_note_alarm_window_t8

0x54fb,	// (0x00036b21) popup_midp_note_alarm_window_t9_ParamLimits

0x54fb,	// (0x00036b21) popup_midp_note_alarm_window_t9

0x550d,	// (0x00036b33) popup_midp_note_alarm_window_t10_ParamLimits

0x550d,	// (0x00036b33) popup_midp_note_alarm_window_t10

0x551f,	// (0x00036b45) popup_midp_note_alarm_window_t11_ParamLimits

0x551f,	// (0x00036b45) popup_midp_note_alarm_window_t11

0x5531,	// (0x00036b57) scroll_pane_cp17_ParamLimits

0x5531,	// (0x00036b57) scroll_pane_cp17

0x0d55,	// (0x0003237b) volume_small_pane_cp_g1

0x135a,	// (0x00032980) volume_small_pane_cp_g2

0x1363,	// (0x00032989) volume_small_pane_cp_g3

0x136c,	// (0x00032992) volume_small_pane_cp_g4

0x1375,	// (0x0003299b) volume_small_pane_cp_g5

0x137e,	// (0x000329a4) volume_small_pane_cp_g6

0x1387,	// (0x000329ad) volume_small_pane_cp_g7

0x1390,	// (0x000329b6) volume_small_pane_cp_g8

0x1399,	// (0x000329bf) volume_small_pane_cp_g9

0x13a2,	// (0x000329c8) volume_small_pane_cp_g10

0x3b11,	// (0x00035137) midp_ticker_pane_g1_ParamLimits

0x3b1d,	// (0x00035143) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x00040d91) midp_ticker_pane_g_ParamLimits

0xc713,	// (0x0003dd39) midp_ticker_pane_t1_ParamLimits

0xcea7,	// (0x0003e4cd) aid_fill_nsta_2

0x4d60,	// (0x00036386) list_form2_midp_pane

0x5eee,	// (0x00037514) midp_editing_number_pane_ParamLimits

0x5efd,	// (0x00037523) midp_ticker_pane_ParamLimits

0x6bc1,	// (0x000381e7) form2_midp_field_pane

0x6be5,	// (0x0003820b) scroll_pane_cp51

0x6c05,	// (0x0003822b) form2_midp_button_pane_ParamLimits

0x6c05,	// (0x0003822b) form2_midp_button_pane

0x6c17,	// (0x0003823d) form2_midp_content_pane_ParamLimits

0x6c17,	// (0x0003823d) form2_midp_content_pane

0x6c31,	// (0x00038257) form2_midp_field_choice_group_pane

0x6c39,	// (0x0003825f) form2_midp_field_pane_g1

0x6c41,	// (0x00038267) form2_midp_field_pane_g2

0x6c49,	// (0x0003826f) form2_midp_field_pane_g3

0x6c51,	// (0x00038277) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00041119) form2_midp_field_pane_g

0x6c59,	// (0x0003827f) form2_midp_gauge_slider_pane

0x6c61,	// (0x00038287) form2_midp_gauge_wait_pane

0x6c69,	// (0x0003828f) form2_midp_image_pane_ParamLimits

0x6c69,	// (0x0003828f) form2_midp_image_pane

0x6c84,	// (0x000382aa) form2_midp_label_pane_ParamLimits

0x6c84,	// (0x000382aa) form2_midp_label_pane

0xd95e,	// (0x0003ef84) form2_midp_label_pane_cp_ParamLimits

0xd95e,	// (0x0003ef84) form2_midp_label_pane_cp

0x6cc4,	// (0x000382ea) form2_midp_string_pane_ParamLimits

0x6cc4,	// (0x000382ea) form2_midp_string_pane

0x13ab,	// (0x000329d1) form2_midp_text_pane_ParamLimits

0x13ab,	// (0x000329d1) form2_midp_text_pane

0x6cd6,	// (0x000382fc) form2_midp_time_pane

0x6ce6,	// (0x0003830c) input_focus_pane_cp51_ParamLimits

0x6ce6,	// (0x0003830c) input_focus_pane_cp51

0x6cfe,	// (0x00038324) form2_midp_label_pane_t1_ParamLimits

0x6cfe,	// (0x00038324) form2_midp_label_pane_t1

0x13cc,	// (0x000329f2) form2_mdip_text_pane_t1_ParamLimits

0x13cc,	// (0x000329f2) form2_mdip_text_pane_t1

0x13f0,	// (0x00032a16) form2_midp_time_pane_t1

0x6d4c,	// (0x00038372) form2_midp_gauge_slider_pane_t1

0xd97f,	// (0x0003efa5) form2_midp_gauge_slider_pane_t2

0xd991,	// (0x0003efb7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00041122) form2_midp_gauge_slider_pane_t

0x6d82,	// (0x000383a8) form2_midp_slider_pane

0x6d8e,	// (0x000383b4) form2_midp_gauge_wait_pane_t1

0x6d9c,	// (0x000383c2) form2_midp_wait_pane_ParamLimits

0x6d9c,	// (0x000383c2) form2_midp_wait_pane

0xd2c0,	// (0x0003e8e6) list_single_2graphic_pane_cp4_ParamLimits

0xd2c0,	// (0x0003e8e6) list_single_2graphic_pane_cp4

0xd9a3,	// (0x0003efc9) list_single_midp_graphic_pane_cp_ParamLimits

0xd9a3,	// (0x0003efc9) list_single_midp_graphic_pane_cp

0xdf0f,	// (0x0003f535) list_highlight_pane_cp20

0x6deb,	// (0x00038411) list_single_2graphic_pane_g1_cp4

0x638d,	// (0x000379b3) list_single_2graphic_pane_g2_cp4

0x6df3,	// (0x00038419) list_single_2graphic_pane_t1_cp4

0x2267,	// (0x0003388d) list_highlight_pane_cp21

0x6e02,	// (0x00038428) list_single_midp_graphic_pane_g4_cp

0x6e11,	// (0x00038437) list_single_midp_graphic_pane_t1_cp

0xd9c4,	// (0x0003efea) form2_mdip_string_pane_t1_ParamLimits

0xd9c4,	// (0x0003efea) form2_mdip_string_pane_t1

0xdf0f,	// (0x0003f535) bg_wml_button_pane_cp2

0xdf05,	// (0x0003f52b) form2_midp_image_pane_g1

0xecc5,	// (0x000402eb) list_double_large_graphic_pane_g5_ParamLimits

0xecc5,	// (0x000402eb) list_double_large_graphic_pane_g5

0xc66b,	// (0x0003dc91) midp_form_pane_ParamLimits

0x2267,	// (0x0003388d) main_apps_wheel_pane_ParamLimits

0xcb9f,	// (0x0003e1c5) popup_preview_window_ParamLimits

0xcb9f,	// (0x0003e1c5) popup_preview_window

0x437e,	// (0x000359a4) popup_touch_info_window_ParamLimits

0x437e,	// (0x000359a4) popup_touch_info_window

0x43a0,	// (0x000359c6) popup_touch_menu_window_ParamLimits

0x43a0,	// (0x000359c6) popup_touch_menu_window

0xdefb,	// (0x0003f521) bg_popup_sub_pane_cp6

0x6ecb,	// (0x000384f1) list_touch_menu_pane

0x6ed3,	// (0x000384f9) list_single_touch_menu_pane_ParamLimits

0x6ed3,	// (0x000384f9) list_single_touch_menu_pane

0x6eee,	// (0x00038514) list_single_touch_menu_pane_t1

0x2267,	// (0x0003388d) bg_popup_sub_pane_cp7_ParamLimits

0x2267,	// (0x0003388d) bg_popup_sub_pane_cp7

0x6efc,	// (0x00038522) heading_sub_pane

0x6f04,	// (0x0003852a) list_touch_info_pane_ParamLimits

0x6f04,	// (0x0003852a) list_touch_info_pane

0x6f13,	// (0x00038539) list_single_touch_info_pane_ParamLimits

0x6f13,	// (0x00038539) list_single_touch_info_pane

0x6f25,	// (0x0003854b) list_single_touch_info_pane_t1

0x6f33,	// (0x00038559) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00041130) list_single_touch_info_pane_t

0x3a34,	// (0x0003505a) bg_popup_heading_pane_cp

0x6f41,	// (0x00038567) heading_sub_pane_t1

0x49e8,	// (0x0003600e) bg_popup_preview_window_pane_cp_ParamLimits

0x49e8,	// (0x0003600e) bg_popup_preview_window_pane_cp

0x6efc,	// (0x00038522) heading_preview_pane

0x6f04,	// (0x0003852a) list_preview_pane_ParamLimits

0x6f04,	// (0x0003852a) list_preview_pane

0x6f4f,	// (0x00038575) popup_preview_window_g1

0x6f13,	// (0x00038539) list_single_preview_pane_ParamLimits

0x6f13,	// (0x00038539) list_single_preview_pane

0x6f57,	// (0x0003857d) list_single_preview_pane_g1

0x6f5f,	// (0x00038585) list_single_preview_pane_t1

0x6f25,	// (0x0003854b) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00041135) list_single_preview_pane_t

0x6f6d,	// (0x00038593) bg_popup_heading_pane_cp2_ParamLimits

0x6f6d,	// (0x00038593) bg_popup_heading_pane_cp2

0x6f83,	// (0x000385a9) heading_preview_pane_g1

0x6f8b,	// (0x000385b1) heading_preview_pane_t1_ParamLimits

0x6f8b,	// (0x000385b1) heading_preview_pane_t1

0x2356,	// (0x0003397c) soft_indicator_pane_t1_ParamLimits

0x2a61,	// (0x00034087) scroll_pane_ParamLimits

0x327a,	// (0x000348a0) scroll_sc2_left_pane

0x3283,	// (0x000348a9) scroll_sc2_right_pane

0x32a2,	// (0x000348c8) scroll_bg_pane_g1_ParamLimits

0x32b7,	// (0x000348dd) scroll_bg_pane_g2_ParamLimits

0x32cf,	// (0x000348f5) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x00040d20) scroll_bg_pane_g_ParamLimits

0x32a2,	// (0x000348c8) scroll_handle_pane_g1_ParamLimits

0x32f1,	// (0x00034917) scroll_handle_pane_g2_ParamLimits

0x32cf,	// (0x000348f5) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x00040d27) scroll_handle_pane_g_ParamLimits

0x3de2,	// (0x00035408) popup_choice_list_window_ParamLimits

0x3de2,	// (0x00035408) popup_choice_list_window

0x4840,	// (0x00035e66) choice_list_pane

0x48c2,	// (0x00035ee8) cell_toolbar_pane_t1

0x48ea,	// (0x00035f10) toolbar_button_pane_ParamLimits

0x5a01,	// (0x00037027) ai_gene_pane_1_t2_ParamLimits

0x5a01,	// (0x00037027) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x00040f3f) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x00040f3f) ai_gene_pane_1_t

0x6fa8,	// (0x000385ce) scroll_sc2_left_pane_g1

0x6fa8,	// (0x000385ce) scroll_sc2_right_pane_g1

0x3dba,	// (0x000353e0) bg_popup_sub_pane_cp10

0x6fb2,	// (0x000385d8) list_choice_list_pane

0x6fc9,	// (0x000385ef) list_single_choice_list_pane_ParamLimits

0x6fc9,	// (0x000385ef) list_single_choice_list_pane

0x6fdd,	// (0x00038603) list_single_choice_list_pane_g1

0x6fe5,	// (0x0003860b) list_single_choice_list_pane_t1_ParamLimits

0x6fe5,	// (0x0003860b) list_single_choice_list_pane_t1

0x6ffa,	// (0x00038620) choice_list_pane_g1

0x7002,	// (0x00038628) choice_list_pane_t1

0xdefb,	// (0x0003f521) input_focus_pane_cp11

0x3154,	// (0x0003477a) title_pane_stacon_g2_ParamLimits

0x3154,	// (0x0003477a) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x00040d06) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00040d06) title_pane_stacon_g

0x3a34,	// (0x0003505a) cursor_press_pane

0xc820,	// (0x0003de46) popup_fep_hwr_window_ParamLimits

0xc820,	// (0x0003de46) popup_fep_hwr_window

0x3f22,	// (0x00035548) popup_fep_vkb_window_ParamLimits

0x3f22,	// (0x00035548) popup_fep_vkb_window

0x7010,	// (0x00038636) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0004115e) fep_vkb_side_pane_g_ParamLimits

0x143c,	// (0x00032a62) fep_hwr_candidate_pane_ParamLimits

0x143c,	// (0x00032a62) fep_hwr_candidate_pane

0x1466,	// (0x00032a8c) fep_hwr_side_pane_ParamLimits

0x1466,	// (0x00032a8c) fep_hwr_side_pane

0x1488,	// (0x00032aae) fep_hwr_top_pane_ParamLimits

0x1488,	// (0x00032aae) fep_hwr_top_pane

0x14a0,	// (0x00032ac6) fep_hwr_write_pane_ParamLimits

0x14a0,	// (0x00032ac6) fep_hwr_write_pane

0xfb38,	// (0x0004115e) fep_vkb_side_pane_g

0x7018,	// (0x0003863e) fep_hwr_top_pane_g1

0x702a,	// (0x00038650) fep_hwr_top_pane_g2

0x14da,	// (0x00032b00) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0004113a) fep_hwr_top_pane_g

0x14ef,	// (0x00032b15) fep_hwr_top_text_pane

0x3446,	// (0x00034a6c) fep_hwr_top_text_pane_g1

0x7060,	// (0x00038686) fep_hwr_top_text_pane_t1

0x15f9,	// (0x00032c1f) fep_hwr_candidate_pane_g1

0x72ab,	// (0x000388d1) fep_vkb_keypad_pane_g3_ParamLimits

0x72ab,	// (0x000388d1) fep_vkb_keypad_pane_g3

0x72d7,	// (0x000388fd) fep_vkb_keypad_pane_g4_ParamLimits

0x72d7,	// (0x000388fd) fep_vkb_keypad_pane_g4

0x734e,	// (0x00038974) fep_vkb_bottom_pane_g2_ParamLimits

0x734e,	// (0x00038974) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00041165) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00041165) fep_vkb_bottom_pane_g

0x6fa8,	// (0x000385ce) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0004116f) cell_vkb_side_pane_g

0x73d9,	// (0x000389ff) cell_vkb_side_pane_t1

0x73e7,	// (0x00038a0d) cell_vkb_side_pane_t1_copy1

0x6fa8,	// (0x000385ce) bg_fep_vkb_candidate_pane_g2

0x752b,	// (0x00038b51) cell_vkb_candidate_pane_ParamLimits

0x706e,	// (0x00038694) aid_size_cell_vkb_ParamLimits

0x706e,	// (0x00038694) aid_size_cell_vkb

0x752b,	// (0x00038b51) cell_vkb_candidate_pane

0x1620,	// (0x00032c46) bg_popup_fep_shadow_pane_g1

0xda60,	// (0x0003f086) fep_vkb_bottom_pane_ParamLimits

0xda60,	// (0x0003f086) fep_vkb_bottom_pane

0x713d,	// (0x00038763) fep_vkb_candidate_pane_ParamLimits

0x713d,	// (0x00038763) fep_vkb_candidate_pane

0xda8c,	// (0x0003f0b2) fep_vkb_keypad_pane_ParamLimits

0xda8c,	// (0x0003f0b2) fep_vkb_keypad_pane

0xdab3,	// (0x0003f0d9) fep_vkb_side_pane_ParamLimits

0xdab3,	// (0x0003f0d9) fep_vkb_side_pane

0xdaef,	// (0x0003f115) fep_vkb_top_pane_ParamLimits

0xdaef,	// (0x0003f115) fep_vkb_top_pane

0x7204,	// (0x0003882a) fep_vkb_top_pane_g1_ParamLimits

0x7204,	// (0x0003882a) fep_vkb_top_pane_g1

0x7213,	// (0x00038839) fep_vkb_top_pane_g2_ParamLimits

0x7213,	// (0x00038839) fep_vkb_top_pane_g2

0x7222,	// (0x00038848) fep_vkb_top_pane_g3_ParamLimits

0x7222,	// (0x00038848) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00041155) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00041155) fep_vkb_top_pane_g

0x7240,	// (0x00038866) fep_vkb_top_text_pane_ParamLimits

0x7240,	// (0x00038866) fep_vkb_top_text_pane

0xdb2b,	// (0x0003f151) fep_vkb_side_pane_g1_ParamLimits

0xdb2b,	// (0x0003f151) fep_vkb_side_pane_g1

0x729a,	// (0x000388c0) grid_vkb_side_pane_ParamLimits

0x729a,	// (0x000388c0) grid_vkb_side_pane

0x1628,	// (0x00032c4e) bg_popup_fep_shadow_pane_g2

0x1631,	// (0x00032c57) bg_popup_fep_shadow_pane_g3

0x1639,	// (0x00032c5f) bg_popup_fep_shadow_pane_g4

0x1642,	// (0x00032c68) bg_popup_fep_shadow_pane_g5

0x164c,	// (0x00032c72) bg_popup_fep_shadow_pane_g6

0x1654,	// (0x00032c7a) bg_popup_fep_shadow_pane_g7

0x2b6d,	// (0x00034193) bg_popup_fep_shadow_pane_g8

0x72f9,	// (0x0003891f) grid_vkb_keypad_number_pane_ParamLimits

0x72f9,	// (0x0003891f) grid_vkb_keypad_number_pane

0x730d,	// (0x00038933) grid_vkb_keypad_pane_ParamLimits

0x730d,	// (0x00038933) grid_vkb_keypad_pane

0x7333,	// (0x00038959) fep_vkb_bottom_pane_g1_ParamLimits

0x7333,	// (0x00038959) fep_vkb_bottom_pane_g1

0x735c,	// (0x00038982) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x735c,	// (0x00038982) grid_vkb_keypad_bottom_left_pane

0x7371,	// (0x00038997) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7371,	// (0x00038997) grid_vkb_keypad_bottom_right_pane

0x7386,	// (0x000389ac) fep_vkb_top_text_pane_g1

0xdb72,	// (0x0003f198) fep_vkb_top_text_pane_t1

0xdb84,	// (0x0003f1aa) cell_vkb_side_pane_ParamLimits

0xdb84,	// (0x0003f1aa) cell_vkb_side_pane

0x6fa8,	// (0x000385ce) cell_vkb_side_pane_g1

0x73f5,	// (0x00038a1b) cell_vkb_keypad_pane_ParamLimits

0x73f5,	// (0x00038a1b) cell_vkb_keypad_pane

0x7482,	// (0x00038aa8) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00041182) bg_popup_fep_shadow_pane_g

0x1666,	// (0x00032c8c) cell_hwr_side_pane_g1

0x1666,	// (0x00032c8c) cell_hwr_side_pane_g2

0x748c,	// (0x00038ab2) cell_vkb_keypad_pane_t1

0xdb9a,	// (0x0003f1c0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb9a,	// (0x0003f1c0) cell_vkb_keypad_bottom_left_pane

0xdbaf,	// (0x0003f1d5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdbaf,	// (0x0003f1d5) cell_vkb_keypad_bottom_right_pane

0x6fa8,	// (0x000385ce) cell_vkb_keypad_bottom_left_pane_g1

0x6fa8,	// (0x000385ce) cell_vkb_keypad_bottom_right_pane_g1

0x74f0,	// (0x00038b16) cell_vkb_keypad_number_pane_ParamLimits

0x74f0,	// (0x00038b16) cell_vkb_keypad_number_pane

0x750f,	// (0x00038b35) cell_vkb_keypad_number_pane_g1

0x7519,	// (0x00038b3f) cell_vkb_keypad_number_pane_g2

0x7522,	// (0x00038b48) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00041174) cell_vkb_keypad_number_pane_g

0x748c,	// (0x00038ab2) cell_vkb_keypad_number_pane_t1

0x754c,	// (0x00038b72) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00041195) cell_hwr_side_pane_g

0x7565,	// (0x00038b8b) cell_hwr_side_pane_t1

0x1670,	// (0x00032c96) cell_hwr_side_pane_t1_copy1

0x167e,	// (0x00032ca4) cell_hwr_candidate_pane_g1

0x16ad,	// (0x00032cd3) cell_hwr_candidate_pane_t1

0x6fa8,	// (0x000385ce) cell_vkb_candidate_pane_g2

0x75a9,	// (0x00038bcf) cell_vkb_candidate_pane_t1

0x1403,	// (0x00032a29) bg_popup_fep_shadow_pane_ParamLimits

0x1403,	// (0x00032a29) bg_popup_fep_shadow_pane

0x14ba,	// (0x00032ae0) bg_fep_hwr_top_pane_g4

0x703c,	// (0x00038662) bg_hwr_side_pane_g1_ParamLimits

0x703c,	// (0x00038662) bg_hwr_side_pane_g1

0xbd26,	// (0x0003d34c) cell_hwr_side_pane_ParamLimits

0xbd26,	// (0x0003d34c) cell_hwr_side_pane

0x156a,	// (0x00032b90) fep_hwr_write_pane_g1_ParamLimits

0x156a,	// (0x00032b90) fep_hwr_write_pane_g1

0x1577,	// (0x00032b9d) fep_hwr_write_pane_g2_ParamLimits

0x1577,	// (0x00032b9d) fep_hwr_write_pane_g2

0x1584,	// (0x00032baa) fep_hwr_write_pane_g3_ParamLimits

0x1584,	// (0x00032baa) fep_hwr_write_pane_g3

0xbd46,	// (0x0003d36c) fep_hwr_write_pane_g4_ParamLimits

0xbd46,	// (0x0003d36c) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00041141) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00041141) fep_hwr_write_pane_g

0x14ba,	// (0x00032ae0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x14ba,	// (0x00032ae0) bg_fep_hwr_candidate_pane_g2

0x15a7,	// (0x00032bcd) cell_hwr_candidate_pane_ParamLimits

0x15a7,	// (0x00032bcd) cell_hwr_candidate_pane

0x15f9,	// (0x00032c1f) fep_hwr_candidate_pane_g1_ParamLimits

0x709c,	// (0x000386c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x709c,	// (0x000386c2) bg_popup_fep_shadow_pane_cp2

0x7232,	// (0x00038858) fep_vkb_top_pane_g4_ParamLimits

0x7232,	// (0x00038858) fep_vkb_top_pane_g4

0x7278,	// (0x0003889e) fep_vkb_side_pane_g2_ParamLimits

0x7278,	// (0x0003889e) fep_vkb_side_pane_g2

0xb687,	// (0x0003ccad) list_setting_pane_t4_ParamLimits

0xb687,	// (0x0003ccad) list_setting_pane_t4

0xb723,	// (0x0003cd49) list_setting_number_pane_t5_ParamLimits

0xb723,	// (0x0003cd49) list_setting_number_pane_t5

0x3478,	// (0x00034a9e) list_double_heading_pane_cp2_ParamLimits

0x3478,	// (0x00034a9e) list_double_heading_pane_cp2

0x2b08,	// (0x0003412e) list_double_heading_pane_g1_cp2_ParamLimits

0x2b08,	// (0x0003412e) list_double_heading_pane_g1_cp2

0x2b14,	// (0x0003413a) list_double_heading_pane_g2_cp2_ParamLimits

0x2b14,	// (0x0003413a) list_double_heading_pane_g2_cp2

0x75b7,	// (0x00038bdd) list_double_heading_pane_t1_cp2_ParamLimits

0x75b7,	// (0x00038bdd) list_double_heading_pane_t1_cp2

0x75cd,	// (0x00038bf3) list_double_heading_pane_t2_cp2_ParamLimits

0x75cd,	// (0x00038bf3) list_double_heading_pane_t2_cp2

0xdef3,	// (0x0003f519) aid_value_unit2

0xf3f7,	// (0x00040a1d) popup_preview_fixed_window

0x24f1,	// (0x00033b17) bg_popup_preview_window_pane_cp02

0x75df,	// (0x00038c05) list_preview_fixed_pane

0x7625,	// (0x00038c4b) list_empty_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_empty_pane_fp

0x7625,	// (0x00038c4b) list_single_cale_day_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_cale_day_pane_fp

0x7625,	// (0x00038c4b) list_single_graphic_heading_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_graphic_heading_pane_fp

0x7625,	// (0x00038c4b) list_single_graphic_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_graphic_pane_fp

0x7625,	// (0x00038c4b) list_single_heading_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_heading_pane_fp

0x7625,	// (0x00038c4b) list_single_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_pane_fp

0x763e,	// (0x00038c64) list_single_pane_fp_g1_ParamLimits

0x763e,	// (0x00038c64) list_single_pane_fp_g1

0x16cb,	// (0x00032cf1) list_single_pane_fp_g2_ParamLimits

0x16cb,	// (0x00032cf1) list_single_pane_fp_g2

0x16d7,	// (0x00032cfd) list_single_pane_fp_g3_ParamLimits

0x16d7,	// (0x00032cfd) list_single_pane_fp_g3

0x764a,	// (0x00038c70) list_single_pane_fp_g4_ParamLimits

0x764a,	// (0x00038c70) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x000411a8) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x000411a8) list_single_pane_fp_g

0x16eb,	// (0x00032d11) list_single_pane_fp_t1_ParamLimits

0x16eb,	// (0x00032d11) list_single_pane_fp_t1

0x1702,	// (0x00032d28) list_single_graphic_pane_fp_g1_ParamLimits

0x1702,	// (0x00032d28) list_single_graphic_pane_fp_g1

0x763e,	// (0x00038c64) list_single_graphic_pane_fp_g2_ParamLimits

0x763e,	// (0x00038c64) list_single_graphic_pane_fp_g2

0x16cb,	// (0x00032cf1) list_single_graphic_pane_fp_g3_ParamLimits

0x16cb,	// (0x00032cf1) list_single_graphic_pane_fp_g3

0x16d7,	// (0x00032cfd) list_single_graphic_pane_fp_g4_ParamLimits

0x16d7,	// (0x00032cfd) list_single_graphic_pane_fp_g4

0x764a,	// (0x00038c70) list_single_graphic_pane_fp_g5_ParamLimits

0x764a,	// (0x00038c70) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x000411b1) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x000411b1) list_single_graphic_pane_fp_g

0x170e,	// (0x00032d34) list_single_graphic_pane_fp_t1_ParamLimits

0x170e,	// (0x00032d34) list_single_graphic_pane_fp_t1

0x1702,	// (0x00032d28) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1702,	// (0x00032d28) list_single_graphic_heading_pane_fp_g1

0x763e,	// (0x00038c64) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x763e,	// (0x00038c64) list_single_graphic_heading_pane_fp_g2

0x16cb,	// (0x00032cf1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x16cb,	// (0x00032cf1) list_single_graphic_heading_pane_fp_g3

0x16d7,	// (0x00032cfd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x16d7,	// (0x00032cfd) list_single_graphic_heading_pane_fp_g4

0x764a,	// (0x00038c70) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x764a,	// (0x00038c70) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x000411b1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x000411b1) list_single_graphic_heading_pane_fp_g

0x1724,	// (0x00032d4a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1724,	// (0x00032d4a) list_single_graphic_heading_pane_fp_t1

0x173a,	// (0x00032d60) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x173a,	// (0x00032d60) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x000411bc) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x000411bc) list_single_graphic_heading_pane_fp_t

0x174c,	// (0x00032d72) list_single_cale_day_pane_fp_g1_ParamLimits

0x174c,	// (0x00032d72) list_single_cale_day_pane_fp_g1

0x7656,	// (0x00038c7c) list_single_cale_day_pane_fp_g2_ParamLimits

0x7656,	// (0x00038c7c) list_single_cale_day_pane_fp_g2

0x2c57,	// (0x0003427d) list_single_cale_day_pane_fp_g3_ParamLimits

0x2c57,	// (0x0003427d) list_single_cale_day_pane_fp_g3

0x2c7f,	// (0x000342a5) list_single_cale_day_pane_fp_g4_ParamLimits

0x2c7f,	// (0x000342a5) list_single_cale_day_pane_fp_g4

0x2ca3,	// (0x000342c9) list_single_cale_day_pane_fp_g5_ParamLimits

0x2ca3,	// (0x000342c9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x000411c1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x000411c1) list_single_cale_day_pane_fp_g

0x2cc7,	// (0x000342ed) list_single_cale_day_pane_fp_t1_ParamLimits

0x2cc7,	// (0x000342ed) list_single_cale_day_pane_fp_t1

0x2ced,	// (0x00034313) list_single_cale_day_pane_fp_t2_ParamLimits

0x2ced,	// (0x00034313) list_single_cale_day_pane_fp_t2

0x2d06,	// (0x0003432c) list_single_cale_day_pane_fp_t3_ParamLimits

0x2d06,	// (0x0003432c) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x000411cc) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x000411cc) list_single_cale_day_pane_fp_t

0x763e,	// (0x00038c64) list_empty_pane_fp_g1_ParamLimits

0x763e,	// (0x00038c64) list_empty_pane_fp_g1

0x2d1f,	// (0x00034345) list_empty_pane_fp_t1

0x2d2d,	// (0x00034353) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x000411d3) list_empty_pane_fp_t

0x763e,	// (0x00038c64) list_single_heading_pane_fp_g1_ParamLimits

0x763e,	// (0x00038c64) list_single_heading_pane_fp_g1

0x16cb,	// (0x00032cf1) list_single_heading_pane_fp_g2_ParamLimits

0x16cb,	// (0x00032cf1) list_single_heading_pane_fp_g2

0x16d7,	// (0x00032cfd) list_single_heading_pane_fp_g3_ParamLimits

0x16d7,	// (0x00032cfd) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x000411d8) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x000411d8) list_single_heading_pane_fp_g

0x2d3b,	// (0x00034361) list_single_heading_pane_fp_t1_ParamLimits

0x2d3b,	// (0x00034361) list_single_heading_pane_fp_t1

0x2d4d,	// (0x00034373) list_single_heading_pane_fp_t2_ParamLimits

0x2d4d,	// (0x00034373) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x000411df) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x000411df) list_single_heading_pane_fp_t

0x2feb,	// (0x00034611) aid_size_cell_fast

0x2463,	// (0x00033a89) soft_indicator_pane_cp1_t1

0x3028,	// (0x0003464e) cell_app_pane_cp2_ParamLimits

0x3028,	// (0x0003464e) cell_app_pane_cp2

0x1425,	// (0x00032a4b) fep_hwr_candidate_drop_down_list_pane

0x1613,	// (0x00032c39) fep_hwr_candidate_pane_g3_ParamLimits

0x1613,	// (0x00032c39) fep_hwr_candidate_pane_g3

0xdf19,	// (0x0003f53f) fep_hwr_candidate_pane_g4_ParamLimits

0xdf19,	// (0x0003f53f) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0004114e) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0004114e) fep_hwr_candidate_pane_g

0x712c,	// (0x00038752) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x712c,	// (0x00038752) fep_vkb_candidate_drop_down_list_pane

0x7554,	// (0x00038b7a) fep_vkb_candidate_pane_g3

0x755c,	// (0x00038b82) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0004117b) fep_vkb_candidate_pane_g

0x167e,	// (0x00032ca4) cell_hwr_candidate_pane_g1_ParamLimits

0x168c,	// (0x00032cb2) cell_hwr_candidate_pane_g3_ParamLimits

0x168c,	// (0x00032cb2) cell_hwr_candidate_pane_g3

0x8f11,	// (0x0003a537) cell_hwr_candidate_pane_g4_ParamLimits

0x8f11,	// (0x0003a537) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0004119a) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0004119a) cell_hwr_candidate_pane_g

0x7573,	// (0x00038b99) cell_vkb_candidate_pane_g3_ParamLimits

0x7573,	// (0x00038b99) cell_vkb_candidate_pane_g3

0x758e,	// (0x00038bb4) cell_vkb_candidate_pane_g4_ParamLimits

0x758e,	// (0x00038bb4) cell_vkb_candidate_pane_g4

0x7662,	// (0x00038c88) cell_app_pane_cp2_g1_ParamLimits

0x7662,	// (0x00038c88) cell_app_pane_cp2_g1

0x7680,	// (0x00038ca6) cell_app_pane_cp2_g2_ParamLimits

0x7680,	// (0x00038ca6) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x000411e4) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x000411e4) cell_app_pane_cp2_g

0x768c,	// (0x00038cb2) cell_app_pane_cp2_t1_ParamLimits

0x768c,	// (0x00038cb2) cell_app_pane_cp2_t1

0x2aee,	// (0x00034114) grid_highlight_pane_cp1_ParamLimits

0x2aee,	// (0x00034114) grid_highlight_pane_cp1

0x1784,	// (0x00032daa) cell_hwr_candidate_pane_cp1_ParamLimits

0x1784,	// (0x00032daa) cell_hwr_candidate_pane_cp1

0x167e,	// (0x00032ca4) fep_hwr_candidate_drop_down_list_pane_g1

0x17a8,	// (0x00032dce) fep_hwr_candidate_drop_down_list_pane_g2

0x17b5,	// (0x00032ddb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x000411e9) fep_hwr_candidate_drop_down_list_pane_g

0x17c2,	// (0x00032de8) fep_hwr_candidate_drop_down_list_scroll_pane

0x17cb,	// (0x00032df1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x17cb,	// (0x00032df1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17d8,	// (0x00032dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17d8,	// (0x00032dfe) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17e5,	// (0x00032e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17e5,	// (0x00032e0b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17f2,	// (0x00032e18) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17f2,	// (0x00032e18) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x180d,	// (0x00032e33) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x180d,	// (0x00032e33) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1828,	// (0x00032e4e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1828,	// (0x00032e4e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1843,	// (0x00032e69) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1843,	// (0x00032e69) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x185e,	// (0x00032e84) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x185e,	// (0x00032e84) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x000411f0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x000411f0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x769e,	// (0x00038cc4) cell_vkb_candidate_pane_cp1_ParamLimits

0x769e,	// (0x00038cc4) cell_vkb_candidate_pane_cp1

0x7232,	// (0x00038858) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7232,	// (0x00038858) fep_vkb_candidate_drop_down_list_pane_g1

0x76c4,	// (0x00038cea) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x76c4,	// (0x00038cea) fep_vkb_candidate_drop_down_list_pane_g2

0x76d1,	// (0x00038cf7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x76d1,	// (0x00038cf7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00041201) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00041201) fep_vkb_candidate_drop_down_list_pane_g

0x76de,	// (0x00038d04) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x76de,	// (0x00038d04) fep_vkb_candidate_drop_down_list_scroll_pane

0x76eb,	// (0x00038d11) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x76eb,	// (0x00038d11) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x76f8,	// (0x00038d1e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x76f8,	// (0x00038d1e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7704,	// (0x00038d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7704,	// (0x00038d2a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7710,	// (0x00038d36) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7710,	// (0x00038d36) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7731,	// (0x00038d57) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7731,	// (0x00038d57) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7752,	// (0x00038d78) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7752,	// (0x00038d78) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7773,	// (0x00038d99) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7773,	// (0x00038d99) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7794,	// (0x00038dba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7794,	// (0x00038dba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x00041208) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x00041208) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xafdc,	// (0x0003c602) title_pane_g1_ParamLimits

0xafed,	// (0x0003c613) title_pane_g2_ParamLimits

0xf56a,	// (0x00040b90) title_pane_g_ParamLimits

0x3436,	// (0x00034a5c) aid_call2_pane

0x343e,	// (0x00034a64) aid_call_pane

0x3446,	// (0x00034a6c) popup_clock_analogue_window_g1

0x3446,	// (0x00034a6c) popup_clock_analogue_window_g2

0x06a3,	// (0x00031cc9) popup_clock_analogue_window_g3

0x06ac,	// (0x00031cd2) popup_clock_analogue_window_g4

0xdf05,	// (0x0003f52b) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00040d35) popup_clock_analogue_window_g

0x06b4,	// (0x00031cda) popup_clock_analogue_window_t1

0x06c2,	// (0x00031ce8) clock_digital_number_pane_ParamLimits

0x06c2,	// (0x00031ce8) clock_digital_number_pane

0x06ce,	// (0x00031cf4) clock_digital_number_pane_cp02_ParamLimits

0x06ce,	// (0x00031cf4) clock_digital_number_pane_cp02

0x06da,	// (0x00031d00) clock_digital_number_pane_cp03_ParamLimits

0x06da,	// (0x00031d00) clock_digital_number_pane_cp03

0x06e6,	// (0x00031d0c) clock_digital_number_pane_cp04_ParamLimits

0x06e6,	// (0x00031d0c) clock_digital_number_pane_cp04

0x06f2,	// (0x00031d18) clock_digital_separator_pane_ParamLimits

0x06f2,	// (0x00031d18) clock_digital_separator_pane

0x06fe,	// (0x00031d24) popup_clock_digital_window_t1_ParamLimits

0x06fe,	// (0x00031d24) popup_clock_digital_window_t1

0xdf05,	// (0x0003f52b) clock_digital_number_pane_g1

0xdf05,	// (0x0003f52b) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x00040d40) clock_digital_number_pane_g

0xdf05,	// (0x0003f52b) clock_digital_separator_pane_g1

0xdf05,	// (0x0003f52b) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x00040d40) clock_digital_separator_pane_g

0xce87,	// (0x0003e4ad) aid_fill_nsta_ParamLimits

0xcfb8,	// (0x0003e5de) indicator_nsta_pane_ParamLimits

0x46cd,	// (0x00035cf3) popup_clock_analogue_window

0x46cd,	// (0x00035cf3) popup_clock_digital_window

0x2fac,	// (0x000345d2) grid_indicator_nsta_pane_ParamLimits

0x69ce,	// (0x00037ff4) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x000410ce) clock_nsta_pane_t

0x0667,	// (0x00031c8d) aid_size_max_handle

0xb8aa,	// (0x0003ced0) aid_size_min_handle

0x3a34,	// (0x0003505a) editor_scroll_pane

0x77af,	// (0x00038dd5) ex_editor_pane

0x2f58,	// (0x0003457e) scroll_pane_cp13

0x2a8d,	// (0x000340b3) scroll_pane_cp14

0x3470,	// (0x00034a96) scroll_pane_cp36

0xc590,	// (0x0003dbb6) list_single_graphic_hl_pane_cp2_ParamLimits

0xc590,	// (0x0003dbb6) list_single_graphic_hl_pane_cp2

0xd6f8,	// (0x0003ed1e) list_single_graphic_hl_pane_ParamLimits

0xd6f8,	// (0x0003ed1e) list_single_graphic_hl_pane

0x2d63,	// (0x00034389) aid_size_min_hl_cp1

0x77b7,	// (0x00038ddd) list_highlight_pane_cp34_ParamLimits

0x77b7,	// (0x00038ddd) list_highlight_pane_cp34

0x77c8,	// (0x00038dee) list_single_graphic_hl_pane_g1_ParamLimits

0x77c8,	// (0x00038dee) list_single_graphic_hl_pane_g1

0xbd5b,	// (0x0003d381) list_single_graphic_hl_pane_g2_ParamLimits

0xbd5b,	// (0x0003d381) list_single_graphic_hl_pane_g2

0xbd5b,	// (0x0003d381) list_single_graphic_hl_pane_g3_ParamLimits

0xbd5b,	// (0x0003d381) list_single_graphic_hl_pane_g3

0xecda,	// (0x00040300) list_single_graphic_hl_pane_g4_ParamLimits

0xecda,	// (0x00040300) list_single_graphic_hl_pane_g4

0xbd67,	// (0x0003d38d) list_single_graphic_hl_pane_g5_ParamLimits

0xbd67,	// (0x0003d38d) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x00041219) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x00041219) list_single_graphic_hl_pane_g

0xbd7b,	// (0x0003d3a1) list_single_graphic_hl_pane_t1_ParamLimits

0xbd7b,	// (0x0003d3a1) list_single_graphic_hl_pane_t1

0x77d5,	// (0x00038dfb) aid_size_min_hl_cp2

0x77de,	// (0x00038e04) list_highlight_pane_cp34_cp2_ParamLimits

0x77de,	// (0x00038e04) list_highlight_pane_cp34_cp2

0x77c8,	// (0x00038dee) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x77c8,	// (0x00038dee) list_single_graphic_hl_pane_g1_cp2

0x77eb,	// (0x00038e11) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x77eb,	// (0x00038e11) list_single_graphic_hl_pane_g2_cp2

0x77f7,	// (0x00038e1d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x77f7,	// (0x00038e1d) list_single_graphic_hl_pane_g3_cp2

0x4a92,	// (0x000360b8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4a92,	// (0x000360b8) list_single_graphic_hl_pane_g4_cp2

0x7805,	// (0x00038e2b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7805,	// (0x00038e2b) list_single_graphic_hl_pane_g5_cp2

0xb968,	// (0x0003cf8e) control_pane_g4_ParamLimits

0xb968,	// (0x0003cf8e) control_pane_g4

0x3dba,	// (0x000353e0) bg_popup_sub_pane_cp10_ParamLimits

0x6fb2,	// (0x000385d8) list_choice_list_pane_ParamLimits

0x6fc1,	// (0x000385e7) scroll_pane_cp23

0x24f1,	// (0x00033b17) bg_popup_preview_window_pane_cp02_ParamLimits

0x75df,	// (0x00038c05) list_preview_fixed_pane_ParamLimits

0x75f5,	// (0x00038c1b) list_preview_fixed_pane_cp_ParamLimits

0x75f5,	// (0x00038c1b) list_preview_fixed_pane_cp

0x7601,	// (0x00038c27) popup_preview_fixed_window_g1_ParamLimits

0x7601,	// (0x00038c27) popup_preview_fixed_window_g1

0x760d,	// (0x00038c33) popup_preview_fixed_window_g2_ParamLimits

0x760d,	// (0x00038c33) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x000411a1) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x000411a1) popup_preview_fixed_window_g

0x05d9,	// (0x00031bff) aid_navi_side_left_pane_ParamLimits

0x05ee,	// (0x00031c14) aid_navi_side_right_pane_ParamLimits

0x0606,	// (0x00031c2c) navi_icon_pane_stacon_ParamLimits

0x061a,	// (0x00031c40) navi_navi_pane_stacon_ParamLimits

0x0606,	// (0x00031c2c) navi_text_pane_stacon_ParamLimits

0xdefb,	// (0x0003f521) main_text_info_pane

0x782f,	// (0x00038e55) listscroll_text_info_pane

0x7837,	// (0x00038e5d) list_text_info_pane_ParamLimits

0x7837,	// (0x00038e5d) list_text_info_pane

0x7846,	// (0x00038e6c) scroll_pane_cp24_ParamLimits

0x7846,	// (0x00038e6c) scroll_pane_cp24

0xdbca,	// (0x0003f1f0) list_text_info_pane_t1_ParamLimits

0xdbca,	// (0x0003f1f0) list_text_info_pane_t1

0xc784,	// (0x0003ddaa) popup_fast_swap2_window_ParamLimits

0xc784,	// (0x0003ddaa) popup_fast_swap2_window

0x7889,	// (0x00038eaf) aid_size_cell_fast2

0xdefb,	// (0x0003f521) bg_popup_window_pane_cp17

0x4d8c,	// (0x000363b2) heading_pane_cp2

0x2751,	// (0x00033d77) listscroll_fast2_pane

0x7893,	// (0x00038eb9) grid_fast2_pane

0x789d,	// (0x00038ec3) listscroll_fast2_pane_g1

0x78a7,	// (0x00038ecd) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x00041224) listscroll_fast2_pane_g

0x2f58,	// (0x0003457e) scroll_pane_cp26

0x78b1,	// (0x00038ed7) cell_fast2_pane_ParamLimits

0x78b1,	// (0x00038ed7) cell_fast2_pane

0x78c8,	// (0x00038eee) cell_fast2_pane_g1

0x78d1,	// (0x00038ef7) cell_fast2_pane_g2

0x78da,	// (0x00038f00) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00041229) cell_fast2_pane_g

0x284a,	// (0x00033e70) grid_highlight_pane_cp9

0x285f,	// (0x00033e85) main_eswt_pane_ParamLimits

0x285f,	// (0x00033e85) main_eswt_pane

0x785b,	// (0x00038e81) list_single_text_info_pane

0x78e2,	// (0x00038f08) eswt_ctrl_button_pane

0x78e2,	// (0x00038f08) eswt_ctrl_canvas_pane

0x78ea,	// (0x00038f10) eswt_ctrl_combo_pane

0x78e2,	// (0x00038f08) eswt_ctrl_default_pane

0x78e2,	// (0x00038f08) eswt_ctrl_label_pane

0x78f2,	// (0x00038f18) eswt_ctrl_wait_pane

0x78fa,	// (0x00038f20) eswt_shell_pane

0xdefb,	// (0x0003f521) listscroll_eswt_app_pane

0x791a,	// (0x00038f40) popup_eswt_tasktip_window_ParamLimits

0x791a,	// (0x00038f40) popup_eswt_tasktip_window

0x49e8,	// (0x0003600e) bg_popup_window_pane_cp18

0x792b,	// (0x00038f51) eswt_control_pane_g1_ParamLimits

0x792b,	// (0x00038f51) eswt_control_pane_g1

0x7938,	// (0x00038f5e) eswt_control_pane_g2_ParamLimits

0x7938,	// (0x00038f5e) eswt_control_pane_g2

0x7945,	// (0x00038f6b) eswt_control_pane_g3_ParamLimits

0x7945,	// (0x00038f6b) eswt_control_pane_g3

0x7952,	// (0x00038f78) eswt_control_pane_g4_ParamLimits

0x7952,	// (0x00038f78) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x00041230) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x00041230) eswt_control_pane_g

0x2aee,	// (0x00034114) bg_button_pane_ParamLimits

0x2aee,	// (0x00034114) bg_button_pane

0x285f,	// (0x00033e85) common_borders_pane_copy2_ParamLimits

0x285f,	// (0x00033e85) common_borders_pane_copy2

0x795f,	// (0x00038f85) control_button_pane_g1_ParamLimits

0x795f,	// (0x00038f85) control_button_pane_g1

0x796b,	// (0x00038f91) control_button_pane_g2_ParamLimits

0x796b,	// (0x00038f91) control_button_pane_g2

0x7977,	// (0x00038f9d) control_button_pane_g3_ParamLimits

0x7977,	// (0x00038f9d) control_button_pane_g3

0x0002,

0xfc13,	// (0x00041239) control_button_pane_g_ParamLimits

0xfc13,	// (0x00041239) control_button_pane_g

0x798b,	// (0x00038fb1) control_button_pane_t1

0x7999,	// (0x00038fbf) control_button_pane_t2

0x0001,

0xfc1a,	// (0x00041240) control_button_pane_t

0x48f6,	// (0x00035f1c) bg_button_pane_g1

0x4906,	// (0x00035f2c) bg_button_pane_g2

0x48fe,	// (0x00035f24) bg_button_pane_g3

0x4916,	// (0x00035f3c) bg_button_pane_g4

0x490e,	// (0x00035f34) bg_button_pane_g5

0x491e,	// (0x00035f44) bg_button_pane_g6

0x4926,	// (0x00035f4c) bg_button_pane_g7

0x4936,	// (0x00035f5c) bg_button_pane_g8

0x492e,	// (0x00035f54) bg_button_pane_g9

0x0008,

0xf86d,	// (0x00040e93) bg_button_pane_g

0x6f6d,	// (0x00038593) common_borders_pane_ParamLimits

0x6f6d,	// (0x00038593) common_borders_pane

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy1_ParamLimits

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy1

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy1_ParamLimits

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy1

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy1_ParamLimits

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy1

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy1_ParamLimits

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy1

0x6fa8,	// (0x000385ce) bg_eswt_ctrl_canvas_pane_g1

0x6f6d,	// (0x00038593) common_borders_pane_cp2_ParamLimits

0x6f6d,	// (0x00038593) common_borders_pane_cp2

0x6f6d,	// (0x00038593) common_borders_pane_cp3_ParamLimits

0x6f6d,	// (0x00038593) common_borders_pane_cp3

0x79a7,	// (0x00038fcd) separator_horizontal_pane

0x79af,	// (0x00038fd5) separator_vertical_pane

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy2_ParamLimits

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy2

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy2_ParamLimits

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy2

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy2_ParamLimits

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy2

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy2_ParamLimits

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy2

0xdefb,	// (0x0003f521) common_borders_pane_cp4

0x79b8,	// (0x00038fde) separator_horizontal_pane_g1

0x79c1,	// (0x00038fe7) separator_horizontal_pane_g2

0x79ca,	// (0x00038ff0) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00041245) separator_horizontal_pane_g

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy3_ParamLimits

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy3

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy3_ParamLimits

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy3

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy3_ParamLimits

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy3

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy3_ParamLimits

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy3

0xdefb,	// (0x0003f521) common_borders_pane_cp5

0x79d3,	// (0x00038ff9) separator_vertical_pane_g1

0x79dc,	// (0x00039002) separator_vertical_pane_g2

0x79e5,	// (0x0003900b) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0004124c) separator_vertical_pane_g

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy4_ParamLimits

0x792b,	// (0x00038f51) eswt_control_pane_g1_copy4

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy4_ParamLimits

0x7938,	// (0x00038f5e) eswt_control_pane_g2_copy4

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy4_ParamLimits

0x7945,	// (0x00038f6b) eswt_control_pane_g3_copy4

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy4_ParamLimits

0x7952,	// (0x00038f78) eswt_control_pane_g4_copy4

0xdbec,	// (0x0003f212) eswt_ctrl_combo_button_pane

0xdbf4,	// (0x0003f21a) eswt_ctrl_input_pane

0xdbfc,	// (0x0003f222) popup_choice_list_window_cp70

0xdc04,	// (0x0003f22a) eswt_ctrl_input_pane_t1

0xdefb,	// (0x0003f521) input_focus_pane_cp70

0x6f6d,	// (0x00038593) bg_button_pane_cp70_ParamLimits

0x6f6d,	// (0x00038593) bg_button_pane_cp70

0xdc12,	// (0x0003f238) eswt_ctrl_combo_button_pane_g1

0x7a1c,	// (0x00039042) wait_bar_pane_cp70

0x49e8,	// (0x0003600e) bg_popup_window_pane_cp70_ParamLimits

0x49e8,	// (0x0003600e) bg_popup_window_pane_cp70

0x7a24,	// (0x0003904a) popup_eswt_tasktip_window_t1

0x7a3a,	// (0x00039060) wait_bar_pane_cp71_ParamLimits

0x7a3a,	// (0x00039060) wait_bar_pane_cp71

0x7a46,	// (0x0003906c) grid_eswt_app_pane

0x327a,	// (0x000348a0) scroll_pane_cp70

0xdc1a,	// (0x0003f240) cell_eswt_app_pane_ParamLimits

0xdc1a,	// (0x0003f240) cell_eswt_app_pane

0xdc4c,	// (0x0003f272) cell_eswt_app_pane_g1_ParamLimits

0xdc4c,	// (0x0003f272) cell_eswt_app_pane_g1

0xdc7b,	// (0x0003f2a1) cell_eswt_app_pane_g2_ParamLimits

0xdc7b,	// (0x0003f2a1) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00041253) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00041253) cell_eswt_app_pane_g

0xdca4,	// (0x0003f2ca) cell_eswt_app_pane_t1_ParamLimits

0xdca4,	// (0x0003f2ca) cell_eswt_app_pane_t1

0x7b0b,	// (0x00039131) grid_highlight_pane_cp70_ParamLimits

0x7b0b,	// (0x00039131) grid_highlight_pane_cp70

0x5e85,	// (0x000374ab) set_content_pane_g1

0x3ce4,	// (0x0003530a) status_small_volume_pane

0x1879,	// (0x00032e9f) status_small_volume_pane_g1

0x1881,	// (0x00032ea7) volume_small2_pane

0x188a,	// (0x00032eb0) volume_small2_pane_g1

0x1893,	// (0x00032eb9) volume_small2_pane_g2

0x189c,	// (0x00032ec2) volume_small2_pane_g3

0x18a5,	// (0x00032ecb) volume_small2_pane_g4

0x18ae,	// (0x00032ed4) volume_small2_pane_g5

0x18b7,	// (0x00032edd) volume_small2_pane_g6

0x18c0,	// (0x00032ee6) volume_small2_pane_g7

0x18c9,	// (0x00032eef) volume_small2_pane_g8

0x18d2,	// (0x00032ef8) volume_small2_pane_g9

0x18db,	// (0x00032f01) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00041258) volume_small2_pane_g

0x7386,	// (0x000389ac) fep_vkb_top_text_pane_g1_ParamLimits

0xdb72,	// (0x0003f198) fep_vkb_top_text_pane_t1_ParamLimits

0x7619,	// (0x00038c3f) popup_preview_fixed_window_g3_ParamLimits

0x7619,	// (0x00038c3f) popup_preview_fixed_window_g3

0xce1a,	// (0x0003e440) popup_toolbar_trans_pane

0xd55d,	// (0x0003eb83) aid_height_set_list_ParamLimits

0x5d3b,	// (0x00037361) aid_size_parent_ParamLimits

0x3dba,	// (0x000353e0) list_highlight_pane_cp2_ParamLimits

0x5e85,	// (0x000374ab) set_content_pane_g1_ParamLimits

0xbcfa,	// (0x0003d320) list_single_image_pane_ParamLimits

0xbcfa,	// (0x0003d320) list_single_image_pane

0xdcd6,	// (0x0003f2fc) aid_size_cell_image_ParamLimits

0xdcd6,	// (0x0003f2fc) aid_size_cell_image

0xdce3,	// (0x0003f309) grid_single_image_pane_ParamLimits

0xdce3,	// (0x0003f309) grid_single_image_pane

0x2b08,	// (0x0003412e) list_single_image_pane_g1_ParamLimits

0x2b08,	// (0x0003412e) list_single_image_pane_g1

0x2b14,	// (0x0003413a) list_single_image_pane_g2_ParamLimits

0x2b14,	// (0x0003413a) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0004126d) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0004126d) list_single_image_pane_g

0x7b32,	// (0x00039158) list_single_image_pane_t1_ParamLimits

0x7b32,	// (0x00039158) list_single_image_pane_t1

0xdcf1,	// (0x0003f317) cell_image_list_pane_ParamLimits

0xdcf1,	// (0x0003f317) cell_image_list_pane

0xdd0b,	// (0x0003f331) cell_image_list_pane_g1

0xdd14,	// (0x0003f33a) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00041272) cell_image_list_pane_g

0x7b70,	// (0x00039196) aid_size_cell_tb_trans_pane

0x2aee,	// (0x00034114) bg_tb_trans_pane

0x7b82,	// (0x000391a8) grid_tb_trans_pane

0x48f6,	// (0x00035f1c) bg_tb_trans_pane_g1

0x4906,	// (0x00035f2c) bg_tb_trans_pane_g2

0x48fe,	// (0x00035f24) bg_tb_trans_pane_g3

0x4916,	// (0x00035f3c) bg_tb_trans_pane_g4

0x490e,	// (0x00035f34) bg_tb_trans_pane_g5

0x4936,	// (0x00035f5c) bg_tb_trans_pane_g6

0x492e,	// (0x00035f54) bg_tb_trans_pane_g7

0x491e,	// (0x00035f44) bg_tb_trans_pane_g8

0x4926,	// (0x00035f4c) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00041277) bg_tb_trans_pane_g

0x7b96,	// (0x000391bc) cell_toolbar_trans_pane_ParamLimits

0x7b96,	// (0x000391bc) cell_toolbar_trans_pane

0x6fa8,	// (0x000385ce) cell_toolbar_trans_pane_g1

0xd942,	// (0x0003ef68) list_form2_midp_pane_t1

0xd950,	// (0x0003ef76) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00041114) list_form2_midp_pane_t

0x6be5,	// (0x0003820b) scroll_pane_cp51_ParamLimits

0x6dac,	// (0x000383d2) form2_midp_wait_pane_g1

0x6db5,	// (0x000383db) form2_midp_wait_pane_g2

0x6dbe,	// (0x000383e4) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00041129) form2_midp_wait_pane_g

0x2267,	// (0x0003388d) list_highlight_pane_cp21_ParamLimits

0x6e02,	// (0x00038428) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6e11,	// (0x00038437) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x101e,	// (0x00032644) list_single_2graphic_im_pane_ParamLimits

0x101e,	// (0x00032644) list_single_2graphic_im_pane

0xdd1d,	// (0x0003f343) list_single_2graphic_im_pane_g1_ParamLimits

0xdd1d,	// (0x0003f343) list_single_2graphic_im_pane_g1

0xdd2e,	// (0x0003f354) list_single_2graphic_im_pane_g2_ParamLimits

0xdd2e,	// (0x0003f354) list_single_2graphic_im_pane_g2

0xdd3a,	// (0x0003f360) list_single_2graphic_im_pane_g3_ParamLimits

0xdd3a,	// (0x0003f360) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0004128a) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0004128a) list_single_2graphic_im_pane_g

0xdd4e,	// (0x0003f374) list_single_2graphic_im_pane_t1_ParamLimits

0xdd4e,	// (0x0003f374) list_single_2graphic_im_pane_t1

0x7625,	// (0x00038c4b) list_single_graphic_2heading_pane_fp_ParamLimits

0x7625,	// (0x00038c4b) list_single_graphic_2heading_pane_fp

0x1702,	// (0x00032d28) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1702,	// (0x00032d28) list_single_graphic_2heading_pane_fp_g1

0x763e,	// (0x00038c64) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x763e,	// (0x00038c64) list_single_graphic_2heading_pane_fp_g2

0x16cb,	// (0x00032cf1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x16cb,	// (0x00032cf1) list_single_graphic_2heading_pane_fp_g3

0x16d7,	// (0x00032cfd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x16d7,	// (0x00032cfd) list_single_graphic_2heading_pane_fp_g4

0x764a,	// (0x00038c70) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x764a,	// (0x00038c70) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x000411b1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x000411b1) list_single_graphic_2heading_pane_fp_g

0x2da2,	// (0x000343c8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2da2,	// (0x000343c8) list_single_graphic_2heading_pane_fp_t1

0x173a,	// (0x00032d60) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x173a,	// (0x00032d60) list_single_graphic_2heading_pane_fp_t2

0x2db8,	// (0x000343de) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2db8,	// (0x000343de) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00041293) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00041293) list_single_graphic_2heading_pane_fp_t

0x7048,	// (0x0003866e) fep_hwr_write_pane_g5_ParamLimits

0x7048,	// (0x0003866e) fep_hwr_write_pane_g5

0x7054,	// (0x0003867a) fep_hwr_write_pane_g6_ParamLimits

0x7054,	// (0x0003867a) fep_hwr_write_pane_g6

0x78fa,	// (0x00038f20) eswt_shell_pane_ParamLimits

0x49e8,	// (0x0003600e) bg_popup_window_pane_cp18_ParamLimits

0x5c81,	// (0x000372a7) heading_pane_cp70

0x7a24,	// (0x0003904a) popup_eswt_tasktip_window_t1_ParamLimits

0xcedd,	// (0x0003e503) aid_touch_tab_arrow_left

0xcef3,	// (0x0003e519) aid_touch_tab_arrow_right

0xb005,	// (0x0003c62b) title_pane_g3_ParamLimits

0xb005,	// (0x0003c62b) title_pane_g3

0x2aad,	// (0x000340d3) set_value_pane_g1

0xce1a,	// (0x0003e440) popup_toolbar_trans_pane_ParamLimits

0x7b70,	// (0x00039196) aid_size_cell_tb_trans_pane_ParamLimits

0x2aee,	// (0x00034114) bg_tb_trans_pane_ParamLimits

0x7b82,	// (0x000391a8) grid_tb_trans_pane_ParamLimits

0x24f1,	// (0x00033b17) cont_note_pane_ParamLimits

0x24f1,	// (0x00033b17) cont_note_pane

0x285f,	// (0x00033e85) cont_snote2_single_text_pane_ParamLimits

0x285f,	// (0x00033e85) cont_snote2_single_text_pane

0x285f,	// (0x00033e85) cont_snote2_single_graphic_pane_ParamLimits

0x285f,	// (0x00033e85) cont_snote2_single_graphic_pane

0x4fa8,	// (0x000365ce) cont_note_wait_pane_ParamLimits

0x4fa8,	// (0x000365ce) cont_note_wait_pane

0x4fa8,	// (0x000365ce) cont_note_image_pane_ParamLimits

0x4fa8,	// (0x000365ce) cont_note_image_pane

0x7c2a,	// (0x00039250) popup_note2_window_g1_ParamLimits

0x7c2a,	// (0x00039250) popup_note2_window_g1

0x7c5b,	// (0x00039281) popup_note2_window_t1_ParamLimits

0x7c5b,	// (0x00039281) popup_note2_window_t1

0x7ca0,	// (0x000392c6) popup_note2_window_t2_ParamLimits

0x7ca0,	// (0x000392c6) popup_note2_window_t2

0x7ce5,	// (0x0003930b) popup_note2_window_t3_ParamLimits

0x7ce5,	// (0x0003930b) popup_note2_window_t3

0x7d2a,	// (0x00039350) popup_note2_window_t4_ParamLimits

0x7d2a,	// (0x00039350) popup_note2_window_t4

0x2575,	// (0x00033b9b) popup_note2_window_t5_ParamLimits

0x2575,	// (0x00033b9b) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0004129f) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0004129f) popup_note2_window_t

0x7d59,	// (0x0003937f) popup_note2_image_window_g1_ParamLimits

0x7d59,	// (0x0003937f) popup_note2_image_window_g1

0x7d65,	// (0x0003938b) popup_note2_image_window_g2_ParamLimits

0x7d65,	// (0x0003938b) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x000412aa) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x000412aa) popup_note2_image_window_g

0x7d77,	// (0x0003939d) popup_note2_image_window_t1_ParamLimits

0x7d77,	// (0x0003939d) popup_note2_image_window_t1

0x7d8f,	// (0x000393b5) popup_note2_image_window_t2_ParamLimits

0x7d8f,	// (0x000393b5) popup_note2_image_window_t2

0x7da7,	// (0x000393cd) popup_note2_image_window_t3_ParamLimits

0x7da7,	// (0x000393cd) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x000412af) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x000412af) popup_note2_image_window_t

0x4fb6,	// (0x000365dc) popup_note2_wait_window_g1_ParamLimits

0x4fb6,	// (0x000365dc) popup_note2_wait_window_g1

0x7dc3,	// (0x000393e9) popup_note2_wait_window_g2_ParamLimits

0x7dc3,	// (0x000393e9) popup_note2_wait_window_g2

0x4fce,	// (0x000365f4) popup_note2_wait_window_g3_ParamLimits

0x4fce,	// (0x000365f4) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x000412b6) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x000412b6) popup_note2_wait_window_g

0x7dcf,	// (0x000393f5) popup_note2_wait_window_t1_ParamLimits

0x7dcf,	// (0x000393f5) popup_note2_wait_window_t1

0x7ded,	// (0x00039413) popup_note2_wait_window_t2_ParamLimits

0x7ded,	// (0x00039413) popup_note2_wait_window_t2

0x7e0b,	// (0x00039431) popup_note2_wait_window_t3_ParamLimits

0x7e0b,	// (0x00039431) popup_note2_wait_window_t3

0x7e1d,	// (0x00039443) popup_note2_wait_window_t4_ParamLimits

0x7e1d,	// (0x00039443) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x000412bd) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x000412bd) popup_note2_wait_window_t

0x7e2f,	// (0x00039455) wait_bar2_pane_ParamLimits

0x7e2f,	// (0x00039455) wait_bar2_pane

0x7e47,	// (0x0003946d) popup_snote2_single_text_window_g1_ParamLimits

0x7e47,	// (0x0003946d) popup_snote2_single_text_window_g1

0x7e6f,	// (0x00039495) popup_snote2_single_text_window_t1_ParamLimits

0x7e6f,	// (0x00039495) popup_snote2_single_text_window_t1

0x7ebb,	// (0x000394e1) popup_snote2_single_text_window_t2_ParamLimits

0x7ebb,	// (0x000394e1) popup_snote2_single_text_window_t2

0x7f07,	// (0x0003952d) popup_snote2_single_text_window_t3_ParamLimits

0x7f07,	// (0x0003952d) popup_snote2_single_text_window_t3

0x7f48,	// (0x0003956e) popup_snote2_single_text_window_t4_ParamLimits

0x7f48,	// (0x0003956e) popup_snote2_single_text_window_t4

0x7f7e,	// (0x000395a4) popup_snote2_single_text_window_t5_ParamLimits

0x7f7e,	// (0x000395a4) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x000412c6) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x000412c6) popup_snote2_single_text_window_t

0x7fa9,	// (0x000395cf) popup_snote2_single_graphic_window_g1_ParamLimits

0x7fa9,	// (0x000395cf) popup_snote2_single_graphic_window_g1

0x7fd1,	// (0x000395f7) popup_snote2_single_graphic_window_g2_ParamLimits

0x7fd1,	// (0x000395f7) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x000412d1) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x000412d1) popup_snote2_single_graphic_window_g

0x7ff9,	// (0x0003961f) popup_snote2_single_graphic_window_t1_ParamLimits

0x7ff9,	// (0x0003961f) popup_snote2_single_graphic_window_t1

0x8045,	// (0x0003966b) popup_snote2_single_graphic_window_t2_ParamLimits

0x8045,	// (0x0003966b) popup_snote2_single_graphic_window_t2

0x7f07,	// (0x0003952d) popup_snote2_single_graphic_window_t3_ParamLimits

0x7f07,	// (0x0003952d) popup_snote2_single_graphic_window_t3

0x7f48,	// (0x0003956e) popup_snote2_single_graphic_window_t4_ParamLimits

0x7f48,	// (0x0003956e) popup_snote2_single_graphic_window_t4

0x7f7e,	// (0x000395a4) popup_snote2_single_graphic_window_t5_ParamLimits

0x7f7e,	// (0x000395a4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x000412d6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x000412d6) popup_snote2_single_graphic_window_t

0x6a8f,	// (0x000380b5) clock_nsta_pane_cp2_t1

0x6a8f,	// (0x000380b5) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x000410ea) clock_nsta_pane_cp2_t

0x035d,	// (0x00031983) form_field_data_wide_pane_g1_ParamLimits

0x2b08,	// (0x0003412e) form_field_data_wide_pane_g2_ParamLimits

0x2b08,	// (0x0003412e) form_field_data_wide_pane_g2

0x2b14,	// (0x0003413a) form_field_data_wide_pane_g3_ParamLimits

0x2b14,	// (0x0003413a) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00040cb8) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00040cb8) form_field_data_wide_pane_g

0xd84a,	// (0x0003ee70) grid_touch_3_pane_ParamLimits

0xd84a,	// (0x0003ee70) grid_touch_3_pane

0xdd7f,	// (0x0003f3a5) cell_touch_3_pane_ParamLimits

0xdd7f,	// (0x0003f3a5) cell_touch_3_pane

0x6fa8,	// (0x000385ce) cell_touch_3_pane_g1

0x6fa8,	// (0x000385ce) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0004116f) cell_touch_3_pane_g

0x25a7,	// (0x00033bcd) cont_query_data_pane

0x25af,	// (0x00033bd5) cont_query_data_pane_cp1

0x80c4,	// (0x000396ea) button_value_adjust_pane_cp7

0x80cc,	// (0x000396f2) query_popup_pane_cp3

0x3510,	// (0x00034b36) bg_popup_sub_pane_cp22_ParamLimits

0x071d,	// (0x00031d43) navi_navi_volume_pane_cp2

0x0738,	// (0x00031d5e) popup_side_volume_key_window_g2

0x0747,	// (0x00031d6d) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00040d4a) popup_side_volume_key_window_g

0x0764,	// (0x00031d8a) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x00040d51) popup_side_volume_key_window_t

0x37cb,	// (0x00034df1) popup_side_volume_key_window_ParamLimits

0xb498,	// (0x0003cabe) list_double_graphic_pane_g4_ParamLimits

0xb498,	// (0x0003cabe) list_double_graphic_pane_g4

0xbce4,	// (0x0003d30a) list_single_2heading_msg_pane_ParamLimits

0xbce4,	// (0x0003d30a) list_single_2heading_msg_pane

0xbd91,	// (0x0003d3b7) list_single_2heading_msg_pane_g1_ParamLimits

0xbd91,	// (0x0003d3b7) list_single_2heading_msg_pane_g1

0xbd9d,	// (0x0003d3c3) list_single_2heading_msg_pane_g2_ParamLimits

0xbd9d,	// (0x0003d3c3) list_single_2heading_msg_pane_g2

0xbdb0,	// (0x0003d3d6) list_single_2heading_msg_pane_g3_ParamLimits

0xbdb0,	// (0x0003d3d6) list_single_2heading_msg_pane_g3

0xbdbc,	// (0x0003d3e2) list_single_2heading_msg_pane_g4_ParamLimits

0xbdbc,	// (0x0003d3e2) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x000412e1) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x000412e1) list_single_2heading_msg_pane_g

0xbdd4,	// (0x0003d3fa) list_single_2heading_msg_pane_t1_ParamLimits

0xbdd4,	// (0x0003d3fa) list_single_2heading_msg_pane_t1

0xbdfc,	// (0x0003d422) list_single_2heading_msg_pane_t2_ParamLimits

0xbdfc,	// (0x0003d422) list_single_2heading_msg_pane_t2

0xbe67,	// (0x0003d48d) list_single_2heading_msg_pane_t3_ParamLimits

0xbe67,	// (0x0003d48d) list_single_2heading_msg_pane_t3

0x2e9d,	// (0x000344c3) list_single_2heading_msg_pane_t4_ParamLimits

0x2e9d,	// (0x000344c3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x000412ea) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x000412ea) list_single_2heading_msg_pane_t

0x21bb,	// (0x000337e1) title_pane_g4_ParamLimits

0x21bb,	// (0x000337e1) title_pane_g4

0x0529,	// (0x00031b4f) title_pane_stacon_g3_ParamLimits

0x0529,	// (0x00031b4f) title_pane_stacon_g3

0x7bed,	// (0x00039213) list_single_2graphic_im_pane_g4_ParamLimits

0x7bed,	// (0x00039213) list_single_2graphic_im_pane_g4

0x5a1e,	// (0x00037044) popup_side_volume_key_window_cp

0x6294,	// (0x000378ba) main_idle_act2_pane_t1

0x0bc8,	// (0x000321ee) toolbar_button_pane_g10

0xc3a6,	// (0x0003d9cc) popup_toolbar_window_cp1

0x6a80,	// (0x000380a6) clock_nsta_pane_cp_t1

0x6a80,	// (0x000380a6) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x000410e5) clock_nsta_pane_cp_t

0x071d,	// (0x00031d43) navi_navi_volume_pane_cp2_ParamLimits

0x072c,	// (0x00031d52) popup_side_volume_key_window_g1_ParamLimits

0x0738,	// (0x00031d5e) popup_side_volume_key_window_g2_ParamLimits

0x0747,	// (0x00031d6d) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00040d4a) popup_side_volume_key_window_g_ParamLimits

0x1411,	// (0x00032a37) fep_hwr_aid_pane

0x14ba,	// (0x00032ae0) bg_fep_hwr_top_pane_g4_ParamLimits

0x7018,	// (0x0003863e) fep_hwr_top_pane_g1_ParamLimits

0x702a,	// (0x00038650) fep_hwr_top_pane_g2_ParamLimits

0x14da,	// (0x00032b00) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0004113a) fep_hwr_top_pane_g_ParamLimits

0x14ef,	// (0x00032b15) fep_hwr_top_text_pane_ParamLimits

0x57d3,	// (0x00036df9) aid_touch_tab_arrow_arrow_2

0x57dc,	// (0x00036e02) aid_touch_tab_arrow_left_2

0x1425,	// (0x00032a4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x145c,	// (0x00032a82) fep_hwr_prediction_pane

0x7180,	// (0x000387a6) fep_vkb_prediction_pane

0xdb52,	// (0x0003f178) fep_vkb_side_pane_g3_ParamLimits

0xdb52,	// (0x0003f178) fep_vkb_side_pane_g3

0x167e,	// (0x00032ca4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x17a8,	// (0x00032dce) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x17b5,	// (0x00032ddb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x000411e9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18e4,	// (0x00032f0a) fep_hwr_prediction_pane_g1

0x18ee,	// (0x00032f14) fep_hwr_prediction_pane_g2

0x18f6,	// (0x00032f1c) fep_hwr_prediction_pane_g3

0x18fe,	// (0x00032f24) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x000412f3) fep_hwr_prediction_pane_g

0x80f3,	// (0x00039719) fep_vkb_prediction_pane_g1

0x80fd,	// (0x00039723) fep_vkb_prediction_pane_g2

0x8105,	// (0x0003972b) fep_vkb_prediction_pane_g3

0x810d,	// (0x00039733) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x000412fc) fep_vkb_prediction_pane_g

0x0f6d,	// (0x00032593) slider_set_pane_g3

0x0f81,	// (0x000325a7) slider_set_pane_g4

0x0f99,	// (0x000325bf) slider_set_pane_g5

0x0f6d,	// (0x00032593) slider_set_pane_g6

0x0faf,	// (0x000325d5) slider_set_pane_g7

0x5ecc,	// (0x000374f2) slider_form_pane_g3

0x5ed5,	// (0x000374fb) slider_form_pane_g4

0x5edd,	// (0x00037503) slider_form_pane_g5

0x5ecc,	// (0x000374f2) slider_form_pane_g6

0xd6cc,	// (0x0003ecf2) slider_form_pane_g7

0x6562,	// (0x00037b88) slider_set_pane_vc_g3

0x656b,	// (0x00037b91) slider_set_pane_vc_g4

0x6574,	// (0x00037b9a) slider_set_pane_vc_g5

0x6562,	// (0x00037b88) slider_set_pane_vc_g6

0x657d,	// (0x00037ba3) slider_set_pane_vc_g7

0x6562,	// (0x00037b88) slider_form_pane_vc_g1

0x656b,	// (0x00037b91) slider_form_pane_vc_g2

0x6574,	// (0x00037b9a) slider_form_pane_vc_g3

0x6562,	// (0x00037b88) slider_form_pane_vc_g4

0x6774,	// (0x00037d9a) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x000410be) slider_form_pane_vc_g

0xdefb,	// (0x0003f521) main_idle_act3_pane

0x8115,	// (0x0003973b) ai3_links_pane

0xddc9,	// (0x0003f3ef) popup_ai3_data_window_ParamLimits

0xddc9,	// (0x0003f3ef) popup_ai3_data_window

0xdefb,	// (0x0003f521) grid_ai3_links_pane

0xdde7,	// (0x0003f40d) cell_ai3_links_pane_ParamLimits

0xdde7,	// (0x0003f40d) cell_ai3_links_pane

0x8164,	// (0x0003978a) bg_popup_sub_pane_cp11

0x8171,	// (0x00039797) cell_ai3_links_pane_g1

0xdefb,	// (0x0003f521) bg_popup_sub_pane_cp12

0x8196,	// (0x000397bc) heading_ai3_data_pane

0x819e,	// (0x000397c4) list_ai3_gene_pane

0x81aa,	// (0x000397d0) popup_ai3_data_window_g1

0x81b2,	// (0x000397d8) heading_ai3_data_pane_g1

0x81ba,	// (0x000397e0) heading_ai3_data_pane_t1

0x81c8,	// (0x000397ee) list_double_ai3_gene_pane_ParamLimits

0x81c8,	// (0x000397ee) list_double_ai3_gene_pane

0x81d5,	// (0x000397fb) list_single_ai3_gene_pane_ParamLimits

0x81d5,	// (0x000397fb) list_single_ai3_gene_pane

0x6f6d,	// (0x00038593) list_highlight_pane_cp7_ParamLimits

0x6f6d,	// (0x00038593) list_highlight_pane_cp7

0x81e2,	// (0x00039808) list_single_a13_gene_pane_t1_ParamLimits

0x81e2,	// (0x00039808) list_single_a13_gene_pane_t1

0x81f9,	// (0x0003981f) list_single_ai3_gene_pane_g1

0x8202,	// (0x00039828) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00041305) list_single_ai3_gene_pane_g

0x820a,	// (0x00039830) list_double_ai3_gene_pane_g1_ParamLimits

0x820a,	// (0x00039830) list_double_ai3_gene_pane_g1

0x8216,	// (0x0003983c) list_double_ai3_gene_pane_t1_ParamLimits

0x8216,	// (0x0003983c) list_double_ai3_gene_pane_t1

0x8232,	// (0x00039858) list_double_ai3_gene_pane_t2_ParamLimits

0x8232,	// (0x00039858) list_double_ai3_gene_pane_t2

0x8247,	// (0x0003986d) list_double_ai3_gene_pane_t3_ParamLimits

0x8247,	// (0x0003986d) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0004130a) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0004130a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2dce,	// (0x000343f4) aid_size_min_col_2

0xddb3,	// (0x0003f3d9) aid_size_min_msg_ParamLimits

0xddb3,	// (0x0003f3d9) aid_size_min_msg

0xdb66,	// (0x0003f18c) fep_vkb_top_text_pane_g2_ParamLimits

0xdb66,	// (0x0003f18c) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0004116a) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0004116a) fep_vkb_top_text_pane_g

0xdefb,	// (0x0003f521) main_hc_apps_shell_pane

0x8264,	// (0x0003988a) grid_hc_apps_pane_ParamLimits

0x8264,	// (0x0003988a) grid_hc_apps_pane

0x8273,	// (0x00039899) list_hc_apps_pane

0x827b,	// (0x000398a1) scroll_pane_cp37_ParamLimits

0x827b,	// (0x000398a1) scroll_pane_cp37

0xde01,	// (0x0003f427) cell_hc_apps_pane_ParamLimits

0xde01,	// (0x0003f427) cell_hc_apps_pane

0xdf26,	// (0x0003f54c) cell_hc_apps_pane_g1_ParamLimits

0xdf26,	// (0x0003f54c) cell_hc_apps_pane_g1

0x8370,	// (0x00039996) cell_hc_apps_pane_g2_ParamLimits

0x8370,	// (0x00039996) cell_hc_apps_pane_g2

0x838c,	// (0x000399b2) cell_hc_apps_pane_g3_ParamLimits

0x838c,	// (0x000399b2) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x00041311) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x00041311) cell_hc_apps_pane_g

0xdf53,	// (0x0003f579) cell_hc_apps_pane_t1_ParamLimits

0xdf53,	// (0x0003f579) cell_hc_apps_pane_t1

0x24f1,	// (0x00033b17) grid_highlight_pane_cp10_ParamLimits

0x24f1,	// (0x00033b17) grid_highlight_pane_cp10

0xdf93,	// (0x0003f5b9) list_single_hc_apps_pane_ParamLimits

0xdf93,	// (0x0003f5b9) list_single_hc_apps_pane

0xdfcd,	// (0x0003f5f3) list_single_hc_apps_pane_g1

0xbed5,	// (0x0003d4fb) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x00041318) list_single_hc_apps_pane_g

0xbeee,	// (0x0003d514) list_single_hc_apps_pane_g2_copy1

0xbf0a,	// (0x0003d530) list_single_hc_apps_pane_t1

0x2267,	// (0x0003388d) bg_set_opt_pane_cp_ParamLimits

0xf4e4,	// (0x00040b0a) setting_slider_pane_t1_ParamLimits

0xf4fa,	// (0x00040b20) setting_slider_pane_t2_ParamLimits

0xf514,	// (0x00040b3a) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00040ba0) setting_slider_pane_t_ParamLimits

0xf52c,	// (0x00040b52) slider_set_pane_ParamLimits

0x0a5a,	// (0x00032080) control_pane_g5_ParamLimits

0x0a5a,	// (0x00032080) control_pane_g5

0x5ced,	// (0x00037313) slider_set_pane_g1_ParamLimits

0x0f61,	// (0x00032587) slider_set_pane_g2_ParamLimits

0x0f6d,	// (0x00032593) slider_set_pane_g3_ParamLimits

0x0f81,	// (0x000325a7) slider_set_pane_g4_ParamLimits

0x0f99,	// (0x000325bf) slider_set_pane_g5_ParamLimits

0x0f6d,	// (0x00032593) slider_set_pane_g6_ParamLimits

0x0faf,	// (0x000325d5) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00040f91) slider_set_pane_g_ParamLimits

0x38b0,	// (0x00034ed6) navi_icon_text_pane_ParamLimits

0xcea7,	// (0x0003e4cd) aid_fill_nsta_2_ParamLimits

0xcedd,	// (0x0003e503) aid_touch_tab_arrow_left_ParamLimits

0xcef3,	// (0x0003e519) aid_touch_tab_arrow_right_ParamLimits

0xcf8e,	// (0x0003e5b4) clock_nsta_pane_ParamLimits

0xd41b,	// (0x0003ea41) navi_icon_pane_g1_ParamLimits

0xd427,	// (0x0003ea4d) navi_text_pane_t1_ParamLimits

0xd924,	// (0x0003ef4a) navi_icon_text_pane_g1_ParamLimits

0xd930,	// (0x0003ef56) navi_icon_text_pane_t1_ParamLimits

0xdfcd,	// (0x0003f5f3) list_single_hc_apps_pane_g1_ParamLimits

0xbed5,	// (0x0003d4fb) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x00041318) list_single_hc_apps_pane_g_ParamLimits

0xbeee,	// (0x0003d514) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbf0a,	// (0x0003d530) list_single_hc_apps_pane_t1_ParamLimits

0xaf71,	// (0x0003c597) popup_toolbar2_fixed_window_ParamLimits

0xaf71,	// (0x0003c597) popup_toolbar2_fixed_window

0xce10,	// (0x0003e436) popup_toolbar2_float_window

0xdefb,	// (0x0003f521) bg_popup_sub_pane_cp27

0x8446,	// (0x00039a6c) grid_toolbar2_float_pane

0xdefb,	// (0x0003f521) bg_popup_sub_pane_cp26

0x8446,	// (0x00039a6c) grid_toolbar2_fixed_pane

0xdfe6,	// (0x0003f60c) cell_toolbar2_fixed_pane_ParamLimits

0xdfe6,	// (0x0003f60c) cell_toolbar2_fixed_pane

0xe003,	// (0x0003f629) cell_toolbar2_fixed_pane_g1

0x8467,	// (0x00039a8d) toolbar2_fixed_button_pane

0x48f6,	// (0x00035f1c) toolbar2_fixed_button_pane_g1

0x4906,	// (0x00035f2c) toolbar2_fixed_button_pane_g2

0x48fe,	// (0x00035f24) toolbar2_fixed_button_pane_g3

0x4916,	// (0x00035f3c) toolbar2_fixed_button_pane_g4

0x490e,	// (0x00035f34) toolbar2_fixed_button_pane_g5

0x491e,	// (0x00035f44) toolbar2_fixed_button_pane_g6

0x4926,	// (0x00035f4c) toolbar2_fixed_button_pane_g7

0x4936,	// (0x00035f5c) toolbar2_fixed_button_pane_g8

0x492e,	// (0x00035f54) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x00040e93) toolbar2_fixed_button_pane_g

0x846f,	// (0x00039a95) cell_toolbar2_float_pane_ParamLimits

0x846f,	// (0x00039a95) cell_toolbar2_float_pane

0x8480,	// (0x00039aa6) cell_toolbar2_float_pane_g1

0x8467,	// (0x00039a8d) toolbar2_fixed_button_pane_cp

0xda4e,	// (0x0003f074) fep_vkb_accented_list_pane_ParamLimits

0xda4e,	// (0x0003f074) fep_vkb_accented_list_pane

0x165e,	// (0x00032c84) bg_popup_fep_shadow_pane_g9

0x3a34,	// (0x0003505a) bg_popup_fep_shadow_pane_cp3

0x2f3f,	// (0x00034565) list_accented_list_pane

0x8489,	// (0x00039aaf) list_single_accented_list_pane_ParamLimits

0x8489,	// (0x00039aaf) list_single_accented_list_pane

0x3a34,	// (0x0003505a) list_highlight_pane_cp10

0x849a,	// (0x00039ac0) list_single_accented_list_pane_t1

0xcd2c,	// (0x0003e352) popup_slider_window_ParamLimits

0xcd2c,	// (0x0003e352) popup_slider_window

0x80d4,	// (0x000396fa) aid_indentation_list_msg

0xe10e,	// (0x0003f734) bg_popup_window_pane_cp19

0x85d4,	// (0x00039bfa) popup_slider_window_g1

0x85f0,	// (0x00039c16) popup_slider_window_g2

0x860c,	// (0x00039c32) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x0004131d) popup_slider_window_g

0x8668,	// (0x00039c8e) popup_slider_window_t1

0x86dc,	// (0x00039d02) small_volume_slider_vertical_pane

0x6fa8,	// (0x000385ce) small_volume_slider_vertical_pane_g1

0x6fa8,	// (0x000385ce) small_volume_slider_vertical_pane_g2

0x86f8,	// (0x00039d1e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0004132f) small_volume_slider_vertical_pane_g

0xaedb,	// (0x0003c501) area_side_right_pane_ParamLimits

0xaedb,	// (0x0003c501) area_side_right_pane

0xbf38,	// (0x0003d55e) aid_size_side_button_ParamLimits

0xbf38,	// (0x0003d55e) aid_size_side_button

0xbf51,	// (0x0003d577) grid_sctrl_middle_pane_ParamLimits

0xbf51,	// (0x0003d577) grid_sctrl_middle_pane

0x193a,	// (0x00032f60) sctrl_sk_bottom_pane

0x194b,	// (0x00032f71) sctrl_sk_top_pane

0x195d,	// (0x00032f83) aid_touch_sctrl_top

0x196a,	// (0x00032f90) bg_sctrl_sk_pane_ParamLimits

0x196a,	// (0x00032f90) bg_sctrl_sk_pane

0x1978,	// (0x00032f9e) sctrl_sk_top_pane_g1

0x1985,	// (0x00032fab) sctrl_sk_top_pane_t1

0x195d,	// (0x00032f83) aid_touch_sctrl_bottom

0x196a,	// (0x00032f90) bg_sctrl_sk_pane_cp_ParamLimits

0x196a,	// (0x00032f90) bg_sctrl_sk_pane_cp

0x19a0,	// (0x00032fc6) sctrl_sk_bottom_pane_g1

0x1985,	// (0x00032fab) sctrl_sk_bottom_pane_t1

0xbf6b,	// (0x0003d591) cell_sctrl_middle_pane_ParamLimits

0xbf6b,	// (0x0003d591) cell_sctrl_middle_pane

0xbf7e,	// (0x0003d5a4) aid_touch_sctrl_middle_ParamLimits

0xbf7e,	// (0x0003d5a4) aid_touch_sctrl_middle

0xbf8b,	// (0x0003d5b1) bg_sctrl_middle_pane_ParamLimits

0xbf8b,	// (0x0003d5b1) bg_sctrl_middle_pane

0x201a,	// (0x00033640) cell_sctrl_middle_pane_g1_ParamLimits

0x201a,	// (0x00033640) cell_sctrl_middle_pane_g1

0xbf99,	// (0x0003d5bf) cell_sctrl_middle_pane_g2_ParamLimits

0xbf99,	// (0x0003d5bf) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x0004133b) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x0004133b) cell_sctrl_middle_pane_g

0x48f6,	// (0x00035f1c) bg_sctrl_middle_pane_g1

0x48fe,	// (0x00035f24) bg_sctrl_middle_pane_g2

0x4906,	// (0x00035f2c) bg_sctrl_middle_pane_g3

0x490e,	// (0x00035f34) bg_sctrl_middle_pane_g4

0x4916,	// (0x00035f3c) bg_sctrl_middle_pane_g5

0x491e,	// (0x00035f44) bg_sctrl_middle_pane_g6

0x4926,	// (0x00035f4c) bg_sctrl_middle_pane_g7

0x492e,	// (0x00035f54) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x00041340) bg_sctrl_middle_pane_g

0x4936,	// (0x00035f5c) bg_sctrl_middle_pane_g8_copy1

0x48f6,	// (0x00035f1c) bg_sctrl_sk_pane_g1

0x4906,	// (0x00035f2c) bg_sctrl_sk_pane_g2

0x48fe,	// (0x00035f24) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x00040e93) bg_sctrl_sk_pane_g

0x2a1d,	// (0x00034043) aid_size_touch_scroll_bar

0x4916,	// (0x00035f3c) bg_sctrl_sk_pane_g4

0x490e,	// (0x00035f34) bg_sctrl_sk_pane_g5

0x491e,	// (0x00035f44) bg_sctrl_sk_pane_g6

0x4926,	// (0x00035f4c) bg_sctrl_sk_pane_g7

0x4936,	// (0x00035f5c) bg_sctrl_sk_pane_g8

0x492e,	// (0x00035f54) bg_sctrl_sk_pane_g9

0x3e64,	// (0x0003548a) popup_fep_china_hwr2_fs_candidate_window

0xc7e8,	// (0x0003de0e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7e8,	// (0x0003de0e) popup_fep_china_hwr2_fs_control_window

0x167e,	// (0x00032ca4) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x00041336) sctrl_sk_top_pane_g

0xe1c6,	// (0x0003f7ec) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1c6,	// (0x0003f7ec) aid_fep_china_hwr2_fs_cell

0xe1dc,	// (0x0003f802) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe1dc,	// (0x0003f802) bg_popup_fep_shadow_pane_cp4

0xe1f3,	// (0x0003f819) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1f3,	// (0x0003f819) bg_popup_fep_shadow_pane_cp5

0xe205,	// (0x0003f82b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe205,	// (0x0003f82b) popup_fep_china_hwr2_fs_control_bar_grid

0xe219,	// (0x0003f83f) popup_fep_china_hwr2_fs_control_funtion_grid

0x8757,	// (0x00039d7d) aid_fep_china_hwr2_fs_candi_cell

0xdefb,	// (0x0003f521) bg_popup_fep_shadow_pane_cp6

0x8761,	// (0x00039d87) popup_fep_china_hwr2_fs_candidate_grid

0xe221,	// (0x0003f847) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe221,	// (0x0003f847) cell_fep_china_hwr2_fs_funtion_grid

0x6fa8,	// (0x000385ce) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8783,	// (0x00039da9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8783,	// (0x00039da9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8791,	// (0x00039db7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8791,	// (0x00039db7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x00041351) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x00041351) cell_fep_china_hwr2_fs_funtion_grid_g

0xe239,	// (0x0003f85f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe239,	// (0x0003f85f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe24e,	// (0x0003f874) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe24e,	// (0x0003f874) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00041356) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00041356) cell_fep_china_hwr2_fs_funtion_grid_t

0x87d8,	// (0x00039dfe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x87e0,	// (0x00039e06) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x87e8,	// (0x00039e0e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x0004135b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x87f0,	// (0x00039e16) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x87f0,	// (0x00039e16) cell_fep_china_hwr2_fs_candidate_grid

0x880f,	// (0x00039e35) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8817,	// (0x00039e3d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6fa8,	// (0x000385ce) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6fa8,	// (0x000385ce) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0004116f) cell_fep_china_hwr2_fs_candidate_grid_g

0x881f,	// (0x00039e45) cell_fep_china_hwr2_fs_candidate_grid_t1

0x44d3,	// (0x00035af9) clock_nsta_pane_cp_24_ParamLimits

0x44d3,	// (0x00035af9) clock_nsta_pane_cp_24

0x4553,	// (0x00035b79) indicator_nsta_pane_cp_24_ParamLimits

0x4553,	// (0x00035b79) indicator_nsta_pane_cp_24

0x562b,	// (0x00036c51) heading_pane_g1

0x0001,

0xf8d2,	// (0x00040ef8) heading_pane_g

0x60db,	// (0x00037701) grid_sct_catagory_button_pane

0x610d,	// (0x00037733) scroll_pane_cp5_ParamLimits

0x6bf1,	// (0x00038217) button_value_adjust_pane_cp5_ParamLimits

0x6bf1,	// (0x00038217) button_value_adjust_pane_cp5

0x6cd6,	// (0x000382fc) form2_midp_time_pane_ParamLimits

0x882d,	// (0x00039e53) cell_sct_catagory_button_pane_ParamLimits

0x882d,	// (0x00039e53) cell_sct_catagory_button_pane

0x6f6d,	// (0x00038593) bg_button_pane_cp01_ParamLimits

0x6f6d,	// (0x00038593) bg_button_pane_cp01

0x6fa8,	// (0x000385ce) cell_sct_catagory_button_pane_g1

0xcdad,	// (0x0003e3d3) popup_tb_extension_window

0xe26a,	// (0x0003f890) aid_size_cell_ext_ParamLimits

0xe26a,	// (0x0003f890) aid_size_cell_ext

0x285f,	// (0x00033e85) bg_tb_trans_pane_cp1_ParamLimits

0x285f,	// (0x00033e85) bg_tb_trans_pane_cp1

0xe290,	// (0x0003f8b6) grid_tb_ext_pane_ParamLimits

0xe290,	// (0x0003f8b6) grid_tb_ext_pane

0xe2d0,	// (0x0003f8f6) cell_tb_ext_pane_ParamLimits

0xe2d0,	// (0x0003f8f6) cell_tb_ext_pane

0xe2fa,	// (0x0003f920) cell_tb_ext_pane_g1_ParamLimits

0xe2fa,	// (0x0003f920) cell_tb_ext_pane_g1

0x88c3,	// (0x00039ee9) cell_tb_ext_pane_t1

0x24f1,	// (0x00033b17) list_highlight_pane_cp11_ParamLimits

0x24f1,	// (0x00033b17) list_highlight_pane_cp11

0xf401,	// (0x00040a27) popup_uni_indicator_window_ParamLimits

0xf401,	// (0x00040a27) popup_uni_indicator_window

0x2aee,	// (0x00034114) bg_popup_sub_pane_cp14

0x88de,	// (0x00039f04) list_uniindi_pane

0x88ea,	// (0x00039f10) uniindi_top_pane

0x24f1,	// (0x00033b17) bg_uniindi_top_pane

0x890b,	// (0x00039f31) uniindi_top_pane_g1

0x8921,	// (0x00039f47) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x00041362) uniindi_top_pane_g

0x894b,	// (0x00039f71) uniindi_top_pane_t1

0x8977,	// (0x00039f9d) list_single_uniindi_pane_ParamLimits

0x8977,	// (0x00039f9d) list_single_uniindi_pane

0x6fa8,	// (0x000385ce) bg_uniindi_top_pane_g1

0x8989,	// (0x00039faf) list_single_uniindi_pane_g1

0x899c,	// (0x00039fc2) list_single_uniindi_pane_t1

0xf2e8,	// (0x0004090e) control_bg_pane

0x89c1,	// (0x00039fe7) bg_sctrl_sk_pane_cp1

0x89ca,	// (0x00039ff0) bg_sctrl_sk_pane_cp2

0x89d3,	// (0x00039ff9) control_bg_pane_g1

0x89dc,	// (0x0003a002) control_bg_pane_g2

0x0001,

0xfd45,	// (0x0004136b) control_bg_pane_g

0x6a14,	// (0x0003803a) cell_indicator_nsta_pane_g1_ParamLimits

0xd87d,	// (0x0003eea3) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x000410d3) cell_indicator_nsta_pane_g_ParamLimits

0x13f0,	// (0x00032a16) form2_midp_time_pane_t1_ParamLimits

0x813c,	// (0x00039762) main_idle_act4_pane_ParamLimits

0x813c,	// (0x00039762) main_idle_act4_pane

0xcdad,	// (0x0003e3d3) popup_tb_extension_window_ParamLimits

0xe2b8,	// (0x0003f8de) tb_ext_find_pane_ParamLimits

0xe2b8,	// (0x0003f8de) tb_ext_find_pane

0x89e5,	// (0x0003a00b) ai_gene_pane_1_cp1

0x3b7d,	// (0x000351a3) ai_gene_pane_2_cp1

0x89ed,	// (0x0003a013) list_single_idle_plugin_calendar_pane

0x89f6,	// (0x0003a01c) list_single_idle_plugin_notification_pane

0x89ff,	// (0x0003a025) list_single_idle_plugin_player_pane

0xe317,	// (0x0003f93d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe317,	// (0x0003f93d) list_single_idle_plugin_shortcut_pane

0xe33f,	// (0x0003f965) main_idle_act4_pane_t1

0xe357,	// (0x0003f97d) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00041370) main_idle_act4_pane_t

0xe36f,	// (0x0003f995) middle_sk_idle_act4_pane_ParamLimits

0xe36f,	// (0x0003f995) middle_sk_idle_act4_pane

0xe38b,	// (0x0003f9b1) popup_clock_digital_analogue_window_cp2

0xe3b2,	// (0x0003f9d8) shortcut_wheel_idle_act4_pane_ParamLimits

0xe3b2,	// (0x0003f9d8) shortcut_wheel_idle_act4_pane

0x6fa8,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g1

0x6fa8,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g2

0x6fa8,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g3

0x6fa8,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g4

0x6fa8,	// (0x000385ce) shortcut_wheel_idle_act4_pane_g5

0x8a92,	// (0x0003a0b8) shortcut_wheel_idle_act4_pane_g6

0x8a9a,	// (0x0003a0c0) shortcut_wheel_idle_act4_pane_g7

0x8aa2,	// (0x0003a0c8) shortcut_wheel_idle_act4_pane_g8

0x8aaa,	// (0x0003a0d0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00041375) shortcut_wheel_idle_act4_pane_g

0xdecb,	// (0x0003f4f1) middle_sk_idle_act4_pane_g1_ParamLimits

0xdecb,	// (0x0003f4f1) middle_sk_idle_act4_pane_g1

0xe42f,	// (0x0003fa55) middle_sk_idle_act4_pane_g2_ParamLimits

0xe42f,	// (0x0003fa55) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00041398) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00041398) middle_sk_idle_act4_pane_g

0xe447,	// (0x0003fa6d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe447,	// (0x0003fa6d) middle_sk_idle_act4_pane_t1

0xe476,	// (0x0003fa9c) grid_ai_shortcut_pane_ParamLimits

0xe476,	// (0x0003fa9c) grid_ai_shortcut_pane

0xe493,	// (0x0003fab9) list_highlight_pane_cp16_ParamLimits

0xe493,	// (0x0003fab9) list_highlight_pane_cp16

0xe4a0,	// (0x0003fac6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe4a0,	// (0x0003fac6) list_single_idle_plugin_shortcut_pane_g1

0xe4ac,	// (0x0003fad2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe4ac,	// (0x0003fad2) list_single_idle_plugin_shortcut_pane_g2

0xe4ca,	// (0x0003faf0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe4ca,	// (0x0003faf0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0004139d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0004139d) list_single_idle_plugin_shortcut_pane_g

0xe4df,	// (0x0003fb05) cell_ai_shortcut_pane_ParamLimits

0xe4df,	// (0x0003fb05) cell_ai_shortcut_pane

0xe4f5,	// (0x0003fb1b) cell_ai_shortcut_pane_g1_ParamLimits

0xe4f5,	// (0x0003fb1b) cell_ai_shortcut_pane_g1

0x89e5,	// (0x0003a00b) ai_gene_pane_1_cp2

0x8bdb,	// (0x0003a201) ai_gene_pane_2_cp2

0x8be3,	// (0x0003a209) list_highlight_pane_cp15

0x8bec,	// (0x0003a212) list_single_idle_plugin_calendar_pane_g1

0x8be3,	// (0x0003a209) list_highlight_pane_cp17

0x8bf4,	// (0x0003a21a) list_single_idle_plugin_calendar_pane_g1_copy1

0x8bfc,	// (0x0003a222) list_single_idle_plugin_player_pane_g1

0x6342,	// (0x00037968) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x000413a4) list_single_idle_plugin_player_pane_g

0x8c04,	// (0x0003a22a) list_single_idle_plugin_player_pane_t1

0x8c12,	// (0x0003a238) list_single_idle_plugin_player_pane_t2

0x8c20,	// (0x0003a246) list_single_idle_plugin_player_pane_t3

0x8c2e,	// (0x0003a254) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x000413a9) list_single_idle_plugin_player_pane_t

0x8c3c,	// (0x0003a262) wait_bar_pane_cp15

0x8c44,	// (0x0003a26a) grid_ai_notification_pane

0x6342,	// (0x00037968) list_single_idle_plugin_notification_pane_g1

0xe517,	// (0x0003fb3d) cell_ai_notification_pane_ParamLimits

0xe517,	// (0x0003fb3d) cell_ai_notification_pane

0x8c5a,	// (0x0003a280) cell_ai_notification_pane_g1

0x8c62,	// (0x0003a288) cell_ai_notification_pane_t1

0xe524,	// (0x0003fb4a) tb_ext_find_button_pane

0xe52c,	// (0x0003fb52) tb_ext_find_pane_g1

0xe534,	// (0x0003fb5a) tb_ext_find_pane_t1

0x3446,	// (0x00034a6c) tb_ext_find_button_pane_g1

0x8c8e,	// (0x0003a2b4) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x000413b2) tb_ext_find_button_pane_g

0xe33f,	// (0x0003f965) main_idle_act4_pane_t1_ParamLimits

0xe357,	// (0x0003f97d) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00041370) main_idle_act4_pane_t_ParamLimits

0xe38b,	// (0x0003f9b1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3a2,	// (0x0003f9c8) sat_plugin_idle_act4_pane_ParamLimits

0xe3a2,	// (0x0003f9c8) sat_plugin_idle_act4_pane

0xe542,	// (0x0003fb68) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe542,	// (0x0003fb68) sat_plugin_idle_act4_pane_t1

0xe55a,	// (0x0003fb80) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe55a,	// (0x0003fb80) sat_plugin_idle_act4_pane_t2

0xe572,	// (0x0003fb98) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe572,	// (0x0003fb98) sat_plugin_idle_act4_pane_t3

0xe58a,	// (0x0003fbb0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe58a,	// (0x0003fbb0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x000413b7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x000413b7) sat_plugin_idle_act4_pane_t

0xf3ad,	// (0x000409d3) popup_battery_window_ParamLimits

0xf3ad,	// (0x000409d3) popup_battery_window

0x24f1,	// (0x00033b17) bg_popup_sub_pane_cp25_ParamLimits

0x24f1,	// (0x00033b17) bg_popup_sub_pane_cp25

0x8ce3,	// (0x0003a309) popup_battery_window_g1_ParamLimits

0x8ce3,	// (0x0003a309) popup_battery_window_g1

0x8cef,	// (0x0003a315) popup_battery_window_t1_ParamLimits

0x8cef,	// (0x0003a315) popup_battery_window_t1

0x8d01,	// (0x0003a327) popup_battery_window_t2_ParamLimits

0x8d01,	// (0x0003a327) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x000413c0) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x000413c0) popup_battery_window_t

0xc67c,	// (0x0003dca2) midp_canvas_pane_ParamLimits

0xc6d7,	// (0x0003dcfd) midp_keypad_pane_ParamLimits

0xc6d7,	// (0x0003dcfd) midp_keypad_pane

0x3dba,	// (0x000353e0) main_midp_pane_ParamLimits

0x6a9e,	// (0x000380c4) signal_pane_g2_cp_ParamLimits

0xe5a2,	// (0x0003fbc8) aid_size_cell_midp_keypad_ParamLimits

0xe5a2,	// (0x0003fbc8) aid_size_cell_midp_keypad

0xe5c0,	// (0x0003fbe6) midp_keyp_game_grid_pane_ParamLimits

0xe5c0,	// (0x0003fbe6) midp_keyp_game_grid_pane

0xe5e7,	// (0x0003fc0d) midp_keyp_rocker_pane_ParamLimits

0xe5e7,	// (0x0003fc0d) midp_keyp_rocker_pane

0xe62c,	// (0x0003fc52) midp_keyp_sk_left_pane_ParamLimits

0xe62c,	// (0x0003fc52) midp_keyp_sk_left_pane

0xe680,	// (0x0003fca6) midp_keyp_sk_right_pane_ParamLimits

0xe680,	// (0x0003fca6) midp_keyp_sk_right_pane

0xdefb,	// (0x0003f521) bg_button_pane_cp03

0xe6d4,	// (0x0003fcfa) midp_keyp_sk_left_pane_g1

0xdefb,	// (0x0003f521) bg_button_pane_cp04

0xe6d4,	// (0x0003fcfa) midp_keyp_sk_right_pane_g1

0x6fa8,	// (0x000385ce) midp_keyp_rocker_pane_g1

0xe6dd,	// (0x0003fd03) keyp_game_cell_pane_ParamLimits

0xe6dd,	// (0x0003fd03) keyp_game_cell_pane

0xdefb,	// (0x0003f521) bg_button_pane_cp02

0xe703,	// (0x0003fd29) keyp_game_cell_pane_g1

0xaf1d,	// (0x0003c543) popup_fep_vkb2_window_ParamLimits

0xaf1d,	// (0x0003c543) popup_fep_vkb2_window

0xbfa5,	// (0x0003d5cb) aid_size_cell_vkb2_ParamLimits

0xbfa5,	// (0x0003d5cb) aid_size_cell_vkb2

0xbfd3,	// (0x0003d5f9) popup_fep_vkb2_window_g1_ParamLimits

0xbfd3,	// (0x0003d5f9) popup_fep_vkb2_window_g1

0xc023,	// (0x0003d649) vkb2_area_bottom_pane_ParamLimits

0xc023,	// (0x0003d649) vkb2_area_bottom_pane

0xc07f,	// (0x0003d6a5) vkb2_area_keypad_pane_ParamLimits

0xc07f,	// (0x0003d6a5) vkb2_area_keypad_pane

0xc0cd,	// (0x0003d6f3) vkb2_area_top_pane_ParamLimits

0xc0cd,	// (0x0003d6f3) vkb2_area_top_pane

0xc153,	// (0x0003d779) vkb2_top_entry_pane_ParamLimits

0xc153,	// (0x0003d779) vkb2_top_entry_pane

0xc180,	// (0x0003d7a6) vkb2_top_grid_left_pane_ParamLimits

0xc180,	// (0x0003d7a6) vkb2_top_grid_left_pane

0xc1a0,	// (0x0003d7c6) vkb2_top_grid_right_pane_ParamLimits

0xc1a0,	// (0x0003d7c6) vkb2_top_grid_right_pane

0x1c16,	// (0x0003323c) vkb2_cell_keypad_pane_ParamLimits

0x1c16,	// (0x0003323c) vkb2_cell_keypad_pane

0xc1e6,	// (0x0003d80c) vkb2_area_bottom_grid_pane_ParamLimits

0xc1e6,	// (0x0003d80c) vkb2_area_bottom_grid_pane

0xc210,	// (0x0003d836) vkb2_area_bottom_pane_g1_ParamLimits

0xc210,	// (0x0003d836) vkb2_area_bottom_pane_g1

0xc236,	// (0x0003d85c) vkb2_area_bottom_pane_g2_ParamLimits

0xc236,	// (0x0003d85c) vkb2_area_bottom_pane_g2

0xc267,	// (0x0003d88d) vkb2_area_bottom_pane_g3_ParamLimits

0xc267,	// (0x0003d88d) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x000413c5) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x000413c5) vkb2_area_bottom_pane_g

0x1da5,	// (0x000333cb) vkb2_top_cell_left_pane_ParamLimits

0x1da5,	// (0x000333cb) vkb2_top_cell_left_pane

0xe70c,	// (0x0003fd32) vkb2_top_entry_pane_g1_ParamLimits

0xe70c,	// (0x0003fd32) vkb2_top_entry_pane_g1

0xe71a,	// (0x0003fd40) vkb2_top_entry_pane_t1_ParamLimits

0xe71a,	// (0x0003fd40) vkb2_top_entry_pane_t1

0x8e8e,	// (0x0003a4b4) vkb2_top_entry_pane_t2_ParamLimits

0x8e8e,	// (0x0003a4b4) vkb2_top_entry_pane_t2

0x8ea6,	// (0x0003a4cc) vkb2_top_entry_pane_t3_ParamLimits

0x8ea6,	// (0x0003a4cc) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x000413cc) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x000413cc) vkb2_top_entry_pane_t

0xc2d1,	// (0x0003d8f7) vkb2_top_grid_right_pane_g1_ParamLimits

0xc2d1,	// (0x0003d8f7) vkb2_top_grid_right_pane_g1

0x1e08,	// (0x0003342e) vkb2_top_grid_right_pane_g2_ParamLimits

0x1e08,	// (0x0003342e) vkb2_top_grid_right_pane_g2

0x1e20,	// (0x00033446) vkb2_top_grid_right_pane_g3_ParamLimits

0x1e20,	// (0x00033446) vkb2_top_grid_right_pane_g3

0xc2e7,	// (0x0003d90d) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2e7,	// (0x0003d90d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x000413d3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x000413d3) vkb2_top_grid_right_pane_g

0x1e4e,	// (0x00033474) vkb2_top_cell_left_pane_g1

0x1e65,	// (0x0003348b) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e65,	// (0x0003348b) vkb2_cell_keypad_pane_g1

0x8ebc,	// (0x0003a4e2) vkb2_cell_keypad_pane_t1_ParamLimits

0x8ebc,	// (0x0003a4e2) vkb2_cell_keypad_pane_t1

0x1e89,	// (0x000334af) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e89,	// (0x000334af) vkb2_cell_bottom_grid_pane

0x1ec2,	// (0x000334e8) vkb2_cell_bottom_grid_pane_g1

0xe3d3,	// (0x0003f9f9) aid_call2_pane_cp02

0xe3db,	// (0x0003fa01) aid_call_pane_cp02

0xe3e3,	// (0x0003fa09) clock_digital_number_pane_cp10

0xe3eb,	// (0x0003fa11) clock_digital_number_pane_cp11

0xe3f3,	// (0x0003fa19) clock_digital_number_pane_cp12

0xe3fb,	// (0x0003fa21) clock_digital_number_pane_cp13

0xe403,	// (0x0003fa29) clock_digital_separator_pane_cp10

0x3446,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g1

0x3446,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g2

0xe40b,	// (0x0003fa31) popup_clock_digital_analogue_window_cp2_g3

0x3446,	// (0x00034a6c) popup_clock_digital_analogue_window_cp2_g4

0xe40b,	// (0x0003fa31) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00041388) popup_clock_digital_analogue_window_cp2_g

0xe413,	// (0x0003fa39) popup_clock_digital_analogue_window_cp2_t1

0xe421,	// (0x0003fa47) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00041393) popup_clock_digital_analogue_window_cp2_t

0x6fa8,	// (0x000385ce) clock_digital_number_pane_cp10_g1

0x6fa8,	// (0x000385ce) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0004116f) clock_digital_number_pane_cp10_g

0x6fa8,	// (0x000385ce) clock_digital_separator_pane_cp10_g1

0x6fa8,	// (0x000385ce) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0004116f) clock_digital_separator_pane_cp10_g

0x892d,	// (0x00039f53) uniindi_top_pane_g3

0x893e,	// (0x00039f64) uniindi_top_pane_g4

0x1c86,	// (0x000332ac) vkb2_row_keypad_pane_ParamLimits

0x1c86,	// (0x000332ac) vkb2_row_keypad_pane

0x1ede,	// (0x00033504) vkb2_cell_t_keypad_pane_ParamLimits

0x1ede,	// (0x00033504) vkb2_cell_t_keypad_pane

0x1eee,	// (0x00033514) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1eee,	// (0x00033514) vkb2_cell_t_keypad_pane_cp08

0x1f03,	// (0x00033529) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f03,	// (0x00033529) vkb2_cell_t_keypad_pane_cp09

0x1f17,	// (0x0003353d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f17,	// (0x0003353d) vkb2_cell_t_keypad_pane_cp01

0x1f28,	// (0x0003354e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1f28,	// (0x0003354e) vkb2_cell_t_keypad_pane_cp02

0x1f39,	// (0x0003355f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f39,	// (0x0003355f) vkb2_cell_t_keypad_pane_cp03

0x1f4a,	// (0x00033570) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f4a,	// (0x00033570) vkb2_cell_t_keypad_pane_cp04

0x1f5b,	// (0x00033581) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f5b,	// (0x00033581) vkb2_cell_t_keypad_pane_cp05

0x1f6c,	// (0x00033592) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f6c,	// (0x00033592) vkb2_cell_t_keypad_pane_cp06

0x1f7f,	// (0x000335a5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f7f,	// (0x000335a5) vkb2_cell_t_keypad_pane_cp07

0x1f94,	// (0x000335ba) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f94,	// (0x000335ba) vkb2_cell_t_keypad_pane_cp10

0x167e,	// (0x00032ca4) vkb2_cell_t_keypad_pane_g1

0x8ed3,	// (0x0003a4f9) vkb2_cell_t_keypad_pane_t1

0xf2e8,	// (0x0004090e) popup_grid_graphic2_window

0xe753,	// (0x0003fd79) aid_size_cell_graphic2_ParamLimits

0xe753,	// (0x0003fd79) aid_size_cell_graphic2

0x4fa8,	// (0x000365ce) bg_popup_window_pane_cp21_ParamLimits

0x4fa8,	// (0x000365ce) bg_popup_window_pane_cp21

0xe785,	// (0x0003fdab) graphic2_pages_pane_ParamLimits

0xe785,	// (0x0003fdab) graphic2_pages_pane

0xe7dd,	// (0x0003fe03) grid_graphic2_control_pane_ParamLimits

0xe7dd,	// (0x0003fe03) grid_graphic2_control_pane

0xe811,	// (0x0003fe37) grid_graphic2_pane_ParamLimits

0xe811,	// (0x0003fe37) grid_graphic2_pane

0xe888,	// (0x0003feae) cell_graphic2_pane

0xdefb,	// (0x0003f521) main_comp_mode_pane

0x819e,	// (0x000397c4) list_ai3_gene_pane_ParamLimits

0xe10e,	// (0x0003f734) bg_popup_window_pane_cp19_ParamLimits

0x8572,	// (0x00039b98) bg_touch_area_indi_pane_ParamLimits

0x8572,	// (0x00039b98) bg_touch_area_indi_pane

0x8588,	// (0x00039bae) bg_touch_area_indi_pane_cp01_ParamLimits

0x8588,	// (0x00039bae) bg_touch_area_indi_pane_cp01

0x85a0,	// (0x00039bc6) bg_touch_area_indi_pane_cp02_ParamLimits

0x85a0,	// (0x00039bc6) bg_touch_area_indi_pane_cp02

0x85ba,	// (0x00039be0) bg_touch_area_indi_pane_cp03_ParamLimits

0x85ba,	// (0x00039be0) bg_touch_area_indi_pane_cp03

0x85d4,	// (0x00039bfa) popup_slider_window_g1_ParamLimits

0x85f0,	// (0x00039c16) popup_slider_window_g2_ParamLimits

0x860c,	// (0x00039c32) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x0004131d) popup_slider_window_g_ParamLimits

0x8668,	// (0x00039c8e) popup_slider_window_t1_ParamLimits

0x86dc,	// (0x00039d02) small_volume_slider_vertical_pane_ParamLimits

0xe888,	// (0x0003feae) cell_graphic2_pane_ParamLimits

0xe8eb,	// (0x0003ff11) bg_button_pane_cp10_ParamLimits

0xe8eb,	// (0x0003ff11) bg_button_pane_cp10

0xe8fe,	// (0x0003ff24) bg_button_pane_cp11_ParamLimits

0xe8fe,	// (0x0003ff24) bg_button_pane_cp11

0xe911,	// (0x0003ff37) graphic2_pages_pane_g1_ParamLimits

0xe911,	// (0x0003ff37) graphic2_pages_pane_g1

0xe92c,	// (0x0003ff52) graphic2_pages_pane_g2_ParamLimits

0xe92c,	// (0x0003ff52) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x000413e1) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x000413e1) graphic2_pages_pane_g

0xe944,	// (0x0003ff6a) graphic2_pages_pane_t1_ParamLimits

0xe944,	// (0x0003ff6a) graphic2_pages_pane_t1

0xe95c,	// (0x0003ff82) cell_graphic2_control_pane_ParamLimits

0xe95c,	// (0x0003ff82) cell_graphic2_control_pane

0xe976,	// (0x0003ff9c) cell_graphic2_pane_g1_ParamLimits

0xe976,	// (0x0003ff9c) cell_graphic2_pane_g1

0xded9,	// (0x0003f4ff) cell_graphic2_pane_g2_ParamLimits

0xded9,	// (0x0003f4ff) cell_graphic2_pane_g2

0xdf19,	// (0x0003f53f) cell_graphic2_pane_g3_ParamLimits

0xdf19,	// (0x0003f53f) cell_graphic2_pane_g3

0xdee6,	// (0x0003f50c) cell_graphic2_pane_g4_ParamLimits

0xdee6,	// (0x0003f50c) cell_graphic2_pane_g4

0xe983,	// (0x0003ffa9) cell_graphic2_pane_g5_ParamLimits

0xe983,	// (0x0003ffa9) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x000413e6) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x000413e6) cell_graphic2_pane_g

0xe9a3,	// (0x0003ffc9) cell_graphic2_pane_t1_ParamLimits

0xe9a3,	// (0x0003ffc9) cell_graphic2_pane_t1

0x561f,	// (0x00036c45) grid_highlight_pane_cp11_ParamLimits

0x561f,	// (0x00036c45) grid_highlight_pane_cp11

0x2aee,	// (0x00034114) bg_button_pane_cp05

0xe9d8,	// (0x0003fffe) cell_graphic2_control_pane_g1

0x6fa8,	// (0x000385ce) bg_touch_area_indi_pane_g1

0x916f,	// (0x0003a795) aid_cmod_rocker_key_size

0x9179,	// (0x0003a79f) aid_cmode_itu_key_size

0x9183,	// (0x0003a7a9) main_cmode_video_pane

0x918d,	// (0x0003a7b3) main_comp_mode_itu_pane

0x9199,	// (0x0003a7bf) main_comp_mode_rocker_pane

0x91a5,	// (0x0003a7cb) cell_cmode_rocker_pane_ParamLimits

0x91a5,	// (0x0003a7cb) cell_cmode_rocker_pane

0x91b9,	// (0x0003a7df) cell_cmode_itu_pane_ParamLimits

0x91b9,	// (0x0003a7df) cell_cmode_itu_pane

0x2aee,	// (0x00034114) bg_button_pane_cp06_ParamLimits

0x2aee,	// (0x00034114) bg_button_pane_cp06

0x7232,	// (0x00038858) cell_cmode_rocker_pane_g1_ParamLimits

0x7232,	// (0x00038858) cell_cmode_rocker_pane_g1

0x8783,	// (0x00039da9) cell_cmode_rocker_pane_g2_ParamLimits

0x8783,	// (0x00039da9) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x000413f6) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x000413f6) cell_cmode_rocker_pane_g

0xdefb,	// (0x0003f521) bg_button_pane_cp07

0x91d0,	// (0x0003a7f6) cell_cmode_itu_pane_g1

0x91d9,	// (0x0003a7ff) cell_cmode_itu_pane_t1

0x91e7,	// (0x0003a80d) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x000413fb) cell_cmode_itu_pane_t

0x89b1,	// (0x00039fd7) aid_touch_ctrl_left

0x89b9,	// (0x00039fdf) aid_touch_ctrl_right

0xdefb,	// (0x0003f521) compa_mode_pane

0xe9e5,	// (0x0004000b) aid_cmod_rocker_key_size_cp

0xe9ef,	// (0x00040015) aid_cmode_itu_key_size_cp

0x9209,	// (0x0003a82f) compa_mode_pane_g1

0x9211,	// (0x0003a837) compa_mode_pane_g2

0x9219,	// (0x0003a83f) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x00041400) compa_mode_pane_g

0xe9f9,	// (0x0004001f) main_comp_mode_itu_pane_cp

0xea01,	// (0x00040027) main_comp_mode_rocker_pane_cp

0xea09,	// (0x0004002f) cell_cmode_itu_pane_cp_ParamLimits

0xea09,	// (0x0004002f) cell_cmode_itu_pane_cp

0xea1e,	// (0x00040044) cell_cmode_rocker_pane_cp_ParamLimits

0xea1e,	// (0x00040044) cell_cmode_rocker_pane_cp

0x2aee,	// (0x00034114) bg_button_pane_cp06_cp_ParamLimits

0x2aee,	// (0x00034114) bg_button_pane_cp06_cp

0x7232,	// (0x00038858) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7232,	// (0x00038858) cell_cmode_rocker_pane_g1_cp

0x6fa8,	// (0x000385ce) cell_cmode_rocker_pane_g2_cp

0xdefb,	// (0x0003f521) bg_button_pane_cp07_cp

0xea30,	// (0x00040056) cell_cmode_itu_pane_g1_cp

0xea39,	// (0x0004005f) cell_cmode_itu_pane_t1_cp

0xea39,	// (0x0004005f) cell_cmode_itu_pane_t2_cp

0xd6c4,	// (0x0003ecea) settings_code_pane_cp2

0x2267,	// (0x0003388d) bg_popup_window_pane_cp3_ParamLimits

0x26df,	// (0x00033d05) heading_pane_cp3_ParamLimits

0x26eb,	// (0x00033d11) listscroll_popup_graphic_pane_ParamLimits

0x1411,	// (0x00032a37) fep_hwr_aid_pane_ParamLimits

0x195d,	// (0x00032f83) aid_touch_sctrl_top_ParamLimits

0x1978,	// (0x00032f9e) sctrl_sk_top_pane_g1_ParamLimits

0x167e,	// (0x00032ca4) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x00041336) sctrl_sk_top_pane_g_ParamLimits

0x1985,	// (0x00032fab) sctrl_sk_top_pane_t1_ParamLimits

0x195d,	// (0x00032f83) aid_touch_sctrl_bottom_ParamLimits

0x1985,	// (0x00032fab) sctrl_sk_bottom_pane_t1_ParamLimits

0x88f7,	// (0x00039f1d) aid_area_touch_clock

0xc115,	// (0x0003d73b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc115,	// (0x0003d73b) aid_vkb2_area_top_pane_cell

0xc1c0,	// (0x0003d7e6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc1c0,	// (0x0003d7e6) aid_vkb2_area_bottom_pane_cell

0x8e60,	// (0x0003a486) popup_char_count_window

0x926f,	// (0x0003a895) popup_char_count_window_g1

0x9278,	// (0x0003a89e) popup_char_count_window_g2

0x9281,	// (0x0003a8a7) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x00041407) popup_char_count_window_g

0x928a,	// (0x0003a8b0) popup_char_count_window_t1

0x1a32,	// (0x00033058) popup_fep_char_preview_window_ParamLimits

0x1a32,	// (0x00033058) popup_fep_char_preview_window

0xc135,	// (0x0003d75b) vkb2_top_candi_pane_ParamLimits

0xc135,	// (0x0003d75b) vkb2_top_candi_pane

0xea47,	// (0x0004006d) cell_vkb2_top_candi_pane_ParamLimits

0xea47,	// (0x0004006d) cell_vkb2_top_candi_pane

0x1fa9,	// (0x000335cf) bg_popup_fep_char_preview_window_ParamLimits

0x1fa9,	// (0x000335cf) bg_popup_fep_char_preview_window

0x1fb7,	// (0x000335dd) popup_fep_char_preview_window_t1_ParamLimits

0x1fb7,	// (0x000335dd) popup_fep_char_preview_window_t1

0x92e9,	// (0x0003a90f) bg_popup_fep_char_preview_window_g1

0x92f1,	// (0x0003a917) bg_popup_fep_char_preview_window_g2

0x92f9,	// (0x0003a91f) bg_popup_fep_char_preview_window_g3

0x9301,	// (0x0003a927) bg_popup_fep_char_preview_window_g4

0x9309,	// (0x0003a92f) bg_popup_fep_char_preview_window_g5

0x1ff1,	// (0x00033617) bg_popup_fep_char_preview_window_g6

0x9311,	// (0x0003a937) bg_popup_fep_char_preview_window_g7

0x9319,	// (0x0003a93f) bg_popup_fep_char_preview_window_g8

0x9321,	// (0x0003a947) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x0004140e) bg_popup_fep_char_preview_window_g

0x167e,	// (0x00032ca4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x167e,	// (0x00032ca4) cell_vkb2_top_candi_pane_g1

0x168c,	// (0x00032cb2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x168c,	// (0x00032cb2) cell_vkb2_top_candi_pane_g2

0x8f11,	// (0x0003a537) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8f11,	// (0x0003a537) cell_vkb2_top_candi_pane_g3

0x1ff9,	// (0x0003361f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1ff9,	// (0x0003361f) cell_vkb2_top_candi_pane_g4

0x7731,	// (0x00038d57) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7731,	// (0x00038d57) cell_vkb2_top_candi_pane_g5

0x201a,	// (0x00033640) cell_vkb2_top_candi_pane_g6_ParamLimits

0x201a,	// (0x00033640) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x00041421) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x00041421) cell_vkb2_top_candi_pane_g

0x2028,	// (0x0003364e) cell_vkb2_top_candi_pane_t1

0x0f4d,	// (0x00032573) aid_size_touch_slider_mark_ParamLimits

0x0f4d,	// (0x00032573) aid_size_touch_slider_mark

0xe7c1,	// (0x0003fde7) grid_graphic2_catg_pane_ParamLimits

0xe7c1,	// (0x0003fde7) grid_graphic2_catg_pane

0xe857,	// (0x0003fe7d) popup_grid_graphic2_window_t1_ParamLimits

0xe857,	// (0x0003fe7d) popup_grid_graphic2_window_t1

0xe86d,	// (0x0003fe93) popup_grid_graphic2_window_t2_ParamLimits

0xe86d,	// (0x0003fe93) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x000413dc) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x000413dc) popup_grid_graphic2_window_t

0x2aee,	// (0x00034114) bg_button_pane_cp05_ParamLimits

0xe9d8,	// (0x0003fffe) cell_graphic2_control_pane_g1_ParamLimits

0xea9b,	// (0x000400c1) cell_graphic2_catg_pane_ParamLimits

0xea9b,	// (0x000400c1) cell_graphic2_catg_pane

0xdefb,	// (0x0003f521) bg_button_pane_cp12

0xeaad,	// (0x000400d3) cell_graphic2_catg_pane_g1

0x88c3,	// (0x00039ee9) cell_tb_ext_pane_t1_ParamLimits

0x1dc5,	// (0x000333eb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1dc5,	// (0x000333eb) vkb2_top_cell_right_narrow_pane

0x1ddd,	// (0x00033403) vkb2_top_cell_right_wide_pane_ParamLimits

0x1ddd,	// (0x00033403) vkb2_top_cell_right_wide_pane

0x1403,	// (0x00032a29) bg_vkb2_func_pane_ParamLimits

0x1403,	// (0x00032a29) bg_vkb2_func_pane

0x1e4e,	// (0x00033474) vkb2_top_cell_left_pane_g1_ParamLimits

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp03

0x1ec2,	// (0x000334e8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x48fe,	// (0x00035f24) bg_vkb2_func_pane_g1

0x4906,	// (0x00035f2c) bg_vkb2_func_pane_g2

0x4916,	// (0x00035f3c) bg_vkb2_func_pane_g3

0x490e,	// (0x00035f34) bg_vkb2_func_pane_g4

0x491e,	// (0x00035f44) bg_vkb2_func_pane_g5

0x4926,	// (0x00035f4c) bg_vkb2_func_pane_g6

0x492e,	// (0x00035f54) bg_vkb2_func_pane_g7

0x4936,	// (0x00035f5c) bg_vkb2_func_pane_g8

0x48f6,	// (0x00035f1c) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x0004142e) bg_vkb2_func_pane_g

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp01

0x1e4e,	// (0x00033474) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e4e,	// (0x00033474) vkb2_top_cell_right_wide_pane_g1

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1403,	// (0x00032a29) bg_vkb2_fuc_pane_cp02

0x1ec2,	// (0x000334e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1ec2,	// (0x000334e8) vkb2_top_cell_right_narrow_pane_g1

0xe048,	// (0x0003f66e) aid_touch_area_decrease_ParamLimits

0xe048,	// (0x0003f66e) aid_touch_area_decrease

0xe082,	// (0x0003f6a8) aid_touch_area_increase_ParamLimits

0xe082,	// (0x0003f6a8) aid_touch_area_increase

0xe0aa,	// (0x0003f6d0) aid_touch_area_mute_ParamLimits

0xe0aa,	// (0x0003f6d0) aid_touch_area_mute

0xe0da,	// (0x0003f700) aid_touch_area_slider_ParamLimits

0xe0da,	// (0x0003f700) aid_touch_area_slider

0xe11a,	// (0x0003f740) popup_slider_window_g4_ParamLimits

0xe11a,	// (0x0003f740) popup_slider_window_g4

0xe142,	// (0x0003f768) popup_slider_window_g5_ParamLimits

0xe142,	// (0x0003f768) popup_slider_window_g5

0xe176,	// (0x0003f79c) popup_slider_window_g6_ParamLimits

0xe176,	// (0x0003f79c) popup_slider_window_g6

0x8696,	// (0x00039cbc) popup_slider_window_t2_ParamLimits

0x8696,	// (0x00039cbc) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0004132a) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0004132a) popup_slider_window_t

0xe192,	// (0x0003f7b8) slider_pane_ParamLimits

0xe192,	// (0x0003f7b8) slider_pane

0x9344,	// (0x0003a96a) slider_pane_g1_ParamLimits

0x9344,	// (0x0003a96a) slider_pane_g1

0x9358,	// (0x0003a97e) slider_pane_g2_ParamLimits

0x9358,	// (0x0003a97e) slider_pane_g2

0x936e,	// (0x0003a994) slider_pane_g3_ParamLimits

0x936e,	// (0x0003a994) slider_pane_g3

0x0003,

0xfe1b,	// (0x00041441) slider_pane_g_ParamLimits

0xfe1b,	// (0x00041441) slider_pane_g

0xcdf9,	// (0x0003e41f) popup_tb_float_extension_window_ParamLimits

0xcdf9,	// (0x0003e41f) popup_tb_float_extension_window

0x939a,	// (0x0003a9c0) aid_size_cell_tb_float_ext

0xdefb,	// (0x0003f521) bg_popup_sub_window_cp28

0x93a6,	// (0x0003a9cc) grid_tb_float_ext_pane

0x93b2,	// (0x0003a9d8) cell_tb_float_ext_pane_ParamLimits

0x93b2,	// (0x0003a9d8) cell_tb_float_ext_pane

0x93ce,	// (0x0003a9f4) cell_tb_float_ext_pane_g1

0x93d7,	// (0x0003a9fd) grid_highlight_pane_cp12

0xbd39,	// (0x0003d35f) cell_last_hwr_side_pane_ParamLimits

0xbd39,	// (0x0003d35f) cell_last_hwr_side_pane

0x6fa8,	// (0x000385ce) cell_last_hwr_side_pane_g1

0x93e0,	// (0x0003aa06) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0004144a) cell_last_hwr_side_pane_g

0xc29c,	// (0x0003d8c2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc29c,	// (0x0003d8c2) vkb2_area_bottom_space_btn_pane

0x167e,	// (0x00032ca4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8ed3,	// (0x0003a4f9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2028,	// (0x0003364e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2046,	// (0x0003366c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2046,	// (0x0003366c) vkb2_area_bottom_space_btn_pane_g1

0x2080,	// (0x000336a6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2080,	// (0x000336a6) vkb2_area_bottom_space_btn_pane_g2

0x20b6,	// (0x000336dc) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x20b6,	// (0x000336dc) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0004144f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0004144f) vkb2_area_bottom_space_btn_pane_g

0x14c8,	// (0x00032aee) cel_fep_hwr_func_pane_ParamLimits

0x14c8,	// (0x00032aee) cel_fep_hwr_func_pane

0xbd0e,	// (0x0003d334) cell_hwr_side_button_pane_ParamLimits

0xbd0e,	// (0x0003d334) cell_hwr_side_button_pane

0x88f7,	// (0x00039f1d) aid_area_touch_clock_ParamLimits

0x24f1,	// (0x00033b17) bg_uniindi_top_pane_ParamLimits

0x890b,	// (0x00039f31) uniindi_top_pane_g1_ParamLimits

0x8921,	// (0x00039f47) uniindi_top_pane_g2_ParamLimits

0x892d,	// (0x00039f53) uniindi_top_pane_g3_ParamLimits

0x893e,	// (0x00039f64) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x00041362) uniindi_top_pane_g_ParamLimits

0x894b,	// (0x00039f71) uniindi_top_pane_t1_ParamLimits

0x24f1,	// (0x00033b17) bg_vkb2_func_pane_cp01_ParamLimits

0x24f1,	// (0x00033b17) bg_vkb2_func_pane_cp01

0x93e9,	// (0x0003aa0f) cel_fep_hwr_func_pane_g1_ParamLimits

0x93e9,	// (0x0003aa0f) cel_fep_hwr_func_pane_g1

0x24f1,	// (0x00033b17) bg_vkb2_func_pane_cp02_ParamLimits

0x24f1,	// (0x00033b17) bg_vkb2_func_pane_cp02

0x93e9,	// (0x0003aa0f) cell_hwr_side_button_pane_g1_ParamLimits

0x93e9,	// (0x0003aa0f) cell_hwr_side_button_pane_g1

0x4777,	// (0x00035d9d) status_pane_g4_ParamLimits

0x4777,	// (0x00035d9d) status_pane_g4

0x4791,	// (0x00035db7) status_pane_t1

0x6d44,	// (0x0003836a) form2_midp_gauge_slider_cont_pane

0x6d4c,	// (0x00038372) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd97f,	// (0x0003efa5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd991,	// (0x0003efb7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00041122) form2_midp_gauge_slider_pane_t_ParamLimits

0x6d82,	// (0x000383a8) form2_midp_slider_pane_ParamLimits

0x19fa,	// (0x00033020) aid_size_cell_func_vkb2_ParamLimits

0x19fa,	// (0x00033020) aid_size_cell_func_vkb2

0x9386,	// (0x0003a9ac) slider_pane_g4_ParamLimits

0x9386,	// (0x0003a9ac) slider_pane_g4

0xc2fd,	// (0x0003d923) form2_midp_gauge_slider_pane_t2_cp01

0xc30b,	// (0x0003d931) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc30b,	// (0x0003d931) form2_midp_gauge_slider_pane_t3_cp01

0x212b,	// (0x00033751) form2_midp_slider_pane_cp01

0xdefb,	// (0x0003f521) navi_smil_pane

0x9422,	// (0x0003aa48) navi_smil_pane_g1

0x942a,	// (0x0003aa50) navi_smil_pane_t1

0x93f7,	// (0x0003aa1d) form2_midp_slider_pane_g1

0x9400,	// (0x0003aa26) form2_midp_slider_pane_g2

0x9408,	// (0x0003aa2e) form2_midp_slider_pane_g3

0x93f7,	// (0x0003aa1d) form2_midp_slider_pane_g4

0xeab6,	// (0x000400dc) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x00041458) form2_midp_slider_pane_g

0x20f0,	// (0x00033716) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20f0,	// (0x00033716) vkb2_area_bottom_space_btn_pane_g4

0xcfd9,	// (0x0003e5ff) lc0_navi_pane_ParamLimits

0xcfd9,	// (0x0003e5ff) lc0_navi_pane

0xd049,	// (0x0003e66f) lc0_stat_indi_pane_ParamLimits

0xd049,	// (0x0003e66f) lc0_stat_indi_pane

0xd05e,	// (0x0003e684) ls0_title_pane_ParamLimits

0xd05e,	// (0x0003e684) ls0_title_pane

0x2aee,	// (0x00034114) bg_popup_sub_pane_cp14_ParamLimits

0x88de,	// (0x00039f04) list_uniindi_pane_ParamLimits

0x88ea,	// (0x00039f10) uniindi_top_pane_ParamLimits

0x8989,	// (0x00039faf) list_single_uniindi_pane_g1_ParamLimits

0x899c,	// (0x00039fc2) list_single_uniindi_pane_t1_ParamLimits

0xc328,	// (0x0003d94e) lc0_stat_clock_pane_ParamLimits

0xc328,	// (0x0003d94e) lc0_stat_clock_pane

0xeabf,	// (0x000400e5) lc0_stat_indi_pane_g1_ParamLimits

0xeabf,	// (0x000400e5) lc0_stat_indi_pane_g1

0xeacc,	// (0x000400f2) lc0_stat_indi_pane_g2_ParamLimits

0xeacc,	// (0x000400f2) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x00041463) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x00041463) lc0_stat_indi_pane_g

0xc335,	// (0x0003d95b) lc0_uni_indicator_pane_ParamLimits

0xc335,	// (0x0003d95b) lc0_uni_indicator_pane

0xead9,	// (0x000400ff) ls0_title_pane_g1_ParamLimits

0xead9,	// (0x000400ff) ls0_title_pane_g1

0xeaed,	// (0x00040113) ls0_title_pane_t1_ParamLimits

0xeaed,	// (0x00040113) ls0_title_pane_t1

0xc342,	// (0x0003d968) lc0_uni_indicator_pane_g1_ParamLimits

0xc342,	// (0x0003d968) lc0_uni_indicator_pane_g1

0x949c,	// (0x0003aac2) lc0_stat_clock_pane_t1

0xdefb,	// (0x0003f521) main_ai5_pane

0x94aa,	// (0x0003aad0) ai5_sk_pane_ParamLimits

0x94aa,	// (0x0003aad0) ai5_sk_pane

0xeb1b,	// (0x00040141) cell_ai5_widget_pane_ParamLimits

0xeb1b,	// (0x00040141) cell_ai5_widget_pane

0x952d,	// (0x0003ab53) aid_size_cell_widget_grid

0x9541,	// (0x0003ab67) bg_ai5_widget_pane_ParamLimits

0x9541,	// (0x0003ab67) bg_ai5_widget_pane

0xeba8,	// (0x000401ce) cell_ai5_widget_pane_g2

0xebb8,	// (0x000401de) cell_ai5_widget_pane_g3

0xebd7,	// (0x000401fd) cell_ai5_widget_pane_g4

0xebe3,	// (0x00040209) cell_ai5_widget_pane_g5

0xebef,	// (0x00040215) cell_ai5_widget_pane_g6

0xebfb,	// (0x00040221) cell_ai5_widget_pane_g7

0xec43,	// (0x00040269) cell_ai5_widget_pane_t1_ParamLimits

0xec43,	// (0x00040269) cell_ai5_widget_pane_t1

0xec60,	// (0x00040286) cell_ai5_widget_pane_t2_ParamLimits

0xec60,	// (0x00040286) cell_ai5_widget_pane_t2

0xec78,	// (0x0004029e) cell_ai5_widget_pane_t3_ParamLimits

0xec78,	// (0x0004029e) cell_ai5_widget_pane_t3

0xec90,	// (0x000402b6) cell_ai5_widget_pane_t4_ParamLimits

0xec90,	// (0x000402b6) cell_ai5_widget_pane_t4

0xece6,	// (0x0004030c) cell_ai5_widget_pane_t5_ParamLimits

0xece6,	// (0x0004030c) cell_ai5_widget_pane_t5

0x968c,	// (0x0003acb2) cell_ai5_widget_pane_t6_ParamLimits

0x968c,	// (0x0003acb2) cell_ai5_widget_pane_t6

0x969e,	// (0x0003acc4) cell_ai5_widget_pane_t7_ParamLimits

0x969e,	// (0x0003acc4) cell_ai5_widget_pane_t7

0xed05,	// (0x0004032b) cell_ai5_widget_pane_t8_ParamLimits

0xed05,	// (0x0004032b) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x0004147d) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x0004147d) cell_ai5_widget_pane_t

0xed51,	// (0x00040377) grid_ai5_widget_pane

0x2aee,	// (0x00034114) highlight_cell_ai5_widget_pane_ParamLimits

0x2aee,	// (0x00034114) highlight_cell_ai5_widget_pane

0xed68,	// (0x0004038e) ai5_sk_left_pane

0xed72,	// (0x00040398) ai5_sk_middle_pane

0xed7c,	// (0x000403a2) ai5_sk_right_pane

0x9738,	// (0x0003ad5e) bg_ai5_widget_pane_g1_ParamLimits

0x9738,	// (0x0003ad5e) bg_ai5_widget_pane_g1

0x9744,	// (0x0003ad6a) bg_ai5_widget_pane_g2_ParamLimits

0x9744,	// (0x0003ad6a) bg_ai5_widget_pane_g2

0x9750,	// (0x0003ad76) bg_ai5_widget_pane_g3_ParamLimits

0x9750,	// (0x0003ad76) bg_ai5_widget_pane_g3

0x975c,	// (0x0003ad82) bg_ai5_widget_pane_g4_ParamLimits

0x975c,	// (0x0003ad82) bg_ai5_widget_pane_g4

0x9768,	// (0x0003ad8e) bg_ai5_widget_pane_g5_ParamLimits

0x9768,	// (0x0003ad8e) bg_ai5_widget_pane_g5

0x9774,	// (0x0003ad9a) bg_ai5_widget_pane_g6_ParamLimits

0x9774,	// (0x0003ad9a) bg_ai5_widget_pane_g6

0x9780,	// (0x0003ada6) bg_ai5_widget_pane_g7_ParamLimits

0x9780,	// (0x0003ada6) bg_ai5_widget_pane_g7

0x978c,	// (0x0003adb2) bg_ai5_widget_pane_g8_ParamLimits

0x978c,	// (0x0003adb2) bg_ai5_widget_pane_g8

0x9798,	// (0x0003adbe) bg_ai5_widget_pane_g9_ParamLimits

0x9798,	// (0x0003adbe) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00041492) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00041492) bg_ai5_widget_pane_g

0x97bf,	// (0x0003ade5) cell_shortcut_ai5_widget_pane_ParamLimits

0x97bf,	// (0x0003ade5) cell_shortcut_ai5_widget_pane

0x2333,	// (0x00033959) bg_cell_shortcut_ai5_widget_pane

0x97d1,	// (0x0003adf7) cell_grid_ai5_widget_pane_g1

0x97da,	// (0x0003ae00) highlight_cell_shortcut_ai5_widget_pane

0x48fe,	// (0x00035f24) ai5_sk_left_pane_g1

0x97e2,	// (0x0003ae08) ai5_sk_left_pane_g2

0x97ea,	// (0x0003ae10) ai5_sk_left_pane_g3

0x97f2,	// (0x0003ae18) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x000414a5) ai5_sk_left_pane_g

0x97fa,	// (0x0003ae20) ai5_sk_left_pane_t1

0x4906,	// (0x00035f2c) ai5_sk_right_pane_g1

0x9808,	// (0x0003ae2e) ai5_sk_right_pane_g2

0x9810,	// (0x0003ae36) ai5_sk_right_pane_g3

0x9818,	// (0x0003ae3e) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x000414ae) ai5_sk_right_pane_g

0x9820,	// (0x0003ae46) ai5_sk_right_pane_t1

0x4906,	// (0x00035f2c) ai5_sk_middle_pane_g1

0x48fe,	// (0x00035f24) ai5_sk_middle_pane_g2

0x491e,	// (0x00035f44) ai5_sk_middle_pane_g3

0x9810,	// (0x0003ae36) ai5_sk_middle_pane_g4

0x97ea,	// (0x0003ae10) ai5_sk_middle_pane_g5

0x982e,	// (0x0003ae54) ai5_sk_middle_pane_g6

0xed86,	// (0x000403ac) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x000414b7) ai5_sk_middle_pane_g

0xcec3,	// (0x0003e4e9) aid_touch_area_size_lc0_ParamLimits

0xcec3,	// (0x0003e4e9) aid_touch_area_size_lc0

0x16ad,	// (0x00032cd3) cell_hwr_candidate_pane_t1_ParamLimits

0x442f,	// (0x00035a55) aid_touch_navi_pane

0xd168,	// (0x0003e78e) status_dt_navi_pane_ParamLimits

0xd168,	// (0x0003e78e) status_dt_navi_pane

0xd180,	// (0x0003e7a6) status_dt_sta_pane_ParamLimits

0xd180,	// (0x0003e7a6) status_dt_sta_pane

0xed8e,	// (0x000403b4) dt_sta_controll_pane

0xed9b,	// (0x000403c1) dt_sta_indi_pane

0xeda8,	// (0x000403ce) dt_sta_title_pane

0x24f1,	// (0x00033b17) bg_dt_sta_indi_pane_ParamLimits

0x24f1,	// (0x00033b17) bg_dt_sta_indi_pane

0xedba,	// (0x000403e0) dt_sta_battery_pane

0xedc2,	// (0x000403e8) dt_sta_indi_pane_g1

0xedcb,	// (0x000403f1) dt_sta_indi_pane_g2

0xedd4,	// (0x000403fa) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x000414c6) dt_sta_indi_pane_g

0xeddd,	// (0x00040403) dt_sta_signal_pane

0x2aee,	// (0x00034114) bg_dt_sta_title_pane_ParamLimits

0x2aee,	// (0x00034114) bg_dt_sta_title_pane

0xede6,	// (0x0004040c) dt_sta_title_pane_g1

0xedee,	// (0x00040414) dt_sta_title_pane_t1_ParamLimits

0xedee,	// (0x00040414) dt_sta_title_pane_t1

0xdefb,	// (0x0003f521) bg_dt_sta_control_pane

0xee03,	// (0x00040429) dt_sta_controll_pane_g1

0xee0c,	// (0x00040432) bg_dt_sta_title_pane_g1

0xee15,	// (0x0004043b) bg_dt_sta_title_pane_g2

0xee1e,	// (0x00040444) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x000414cd) bg_dt_sta_title_pane_g

0x6fa8,	// (0x000385ce) bg_dt_sta_indi_pane_g1

0x98dc,	// (0x0003af02) dt_sta_signal_pane_g1

0x98e4,	// (0x0003af0a) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x000414d4) dt_sta_signal_pane_g

0x98ec,	// (0x0003af12) dt_sta_battery_pane_g1

0x98f5,	// (0x0003af1b) dt_sta_battery_pane_t1

0x6fa8,	// (0x000385ce) bg_dt_sta_control_pane_g1

0x3532,	// (0x00034b58) fep_china_uni_eep_pane

0x353a,	// (0x00034b60) fep_china_uni_entry_pane_ParamLimits

0x354a,	// (0x00034b70) popup_fep_china_uni_window_g1_ParamLimits

0x355a,	// (0x00034b80) popup_fep_china_uni_window_g2_ParamLimits

0x355a,	// (0x00034b80) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00040d56) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00040d56) popup_fep_china_uni_window_g

0x9904,	// (0x0003af2a) fep_china_uni_eep_pane_g1

0x990c,	// (0x0003af32) fep_china_uni_eep_pane_t1

0x9419,	// (0x0003aa3f) aid_touch_area_size_smil_player

0x4587,	// (0x00035bad) lc0_clock_pane

0x4785,	// (0x00035dab) status_pane_g5_ParamLimits

0x4785,	// (0x00035dab) status_pane_g5

0xc923,	// (0x0003df49) popup_keymap_window

0x4743,	// (0x00035d69) status_icon_pane

0xebb8,	// (0x000401de) cell_ai5_widget_pane_g3_ParamLimits

0xebd7,	// (0x000401fd) cell_ai5_widget_pane_g4_ParamLimits

0xebe3,	// (0x00040209) cell_ai5_widget_pane_g5_ParamLimits

0xec07,	// (0x0004022d) cell_ai5_widget_pane_g8_ParamLimits

0xec07,	// (0x0004022d) cell_ai5_widget_pane_g8

0xec1b,	// (0x00040241) cell_ai5_widget_pane_g9_ParamLimits

0xec1b,	// (0x00040241) cell_ai5_widget_pane_g9

0xec2f,	// (0x00040255) cell_ai5_widget_pane_g10_ParamLimits

0xec2f,	// (0x00040255) cell_ai5_widget_pane_g10

0x991b,	// (0x0003af41) status_icon_pane_g1

0xdefb,	// (0x0003f521) bg_popup_sub_pane_cp13

0x9923,	// (0x0003af49) popup_keymap_window_t1

0xc72f,	// (0x0003dd55) control_pane_g6_ParamLimits

0xc72f,	// (0x0003dd55) control_pane_g6

0xc73c,	// (0x0003dd62) control_pane_g7_ParamLimits

0xc73c,	// (0x0003dd62) control_pane_g7

0xc749,	// (0x0003dd6f) control_pane_g8_ParamLimits

0xc749,	// (0x0003dd6f) control_pane_g8

0xed8e,	// (0x000403b4) dt_sta_controll_pane_ParamLimits

0xed9b,	// (0x000403c1) dt_sta_indi_pane_ParamLimits

0xeda8,	// (0x000403ce) dt_sta_title_pane_ParamLimits

0x2a26,	// (0x0003404c) aid_size_touch_scroll_bar_cale

0xf3c5,	// (0x000409eb) popup_discreet_window_ParamLimits

0xf3c5,	// (0x000409eb) popup_discreet_window

0xaf67,	// (0x0003c58d) popup_sk_window

0x4fa8,	// (0x000365ce) bg_popup_sub_pane_cp28_ParamLimits

0x4fa8,	// (0x000365ce) bg_popup_sub_pane_cp28

0x9931,	// (0x0003af57) popup_discreet_window_g1_ParamLimits

0x9931,	// (0x0003af57) popup_discreet_window_g1

0x9951,	// (0x0003af77) popup_discreet_window_t1_ParamLimits

0x9951,	// (0x0003af77) popup_discreet_window_t1

0x996f,	// (0x0003af95) popup_discreet_window_t2_ParamLimits

0x996f,	// (0x0003af95) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x000414d9) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x000414d9) popup_discreet_window_t

0x2161,	// (0x00033787) popup_sk_window_g1

0x216b,	// (0x00033791) popup_sk_window_g2

0x0001,

0xfeba,	// (0x000414e0) popup_sk_window_g

0x99c1,	// (0x0003afe7) popup_sk_window_t1

0x99cf,	// (0x0003aff5) popup_sk_window_t1_copy1

0xeba8,	// (0x000401ce) cell_ai5_widget_pane_g2_ParamLimits

0xed17,	// (0x0004033d) cell_ai5_widget_pane_t9_ParamLimits

0xed17,	// (0x0004033d) cell_ai5_widget_pane_t9

0xdefb,	// (0x0003f521) main_fep_fshwr2_pane

0xee27,	// (0x0004044d) aid_fshwr2_btn_pane

0xee2f,	// (0x00040455) aid_fshwr2_syb_pane

0xee37,	// (0x0004045d) aid_fshwr2_txt_pane

0xee3f,	// (0x00040465) fshwr2_func_candi_pane

0xee49,	// (0x0004046f) fshwr2_hwr_syb_pane

0xee55,	// (0x0004047b) fshwr2_icf_pane

0xdefb,	// (0x0003f521) fshwr2_icf_bg_pane

0xee5f,	// (0x00040485) fshwr2_icf_pane_t1_ParamLimits

0xee5f,	// (0x00040485) fshwr2_icf_pane_t1

0x6fa8,	// (0x000385ce) fshwr2_func_candi_pane_g1

0x9a42,	// (0x0003b068) fshwr2_func_candi_row_pane_ParamLimits

0x9a42,	// (0x0003b068) fshwr2_func_candi_row_pane

0xee77,	// (0x0004049d) cell_fshwr2_syb_pane_ParamLimits

0xee77,	// (0x0004049d) cell_fshwr2_syb_pane

0x7232,	// (0x00038858) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7232,	// (0x00038858) fshwr2_hwr_syb_pane_g1

0xdefb,	// (0x0003f521) bg_popup_call_pane_cp01

0x9a6d,	// (0x0003b093) fshwr2_func_candi_cell_pane_ParamLimits

0x9a6d,	// (0x0003b093) fshwr2_func_candi_cell_pane

0x9a9f,	// (0x0003b0c5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9a9f,	// (0x0003b0c5) fshwr2_func_candi_cell_bg_pane

0x9ab9,	// (0x0003b0df) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ab9,	// (0x0003b0df) fshwr2_func_candi_cell_pane_g1

0x9ad9,	// (0x0003b0ff) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9ad9,	// (0x0003b0ff) fshwr2_func_candi_cell_pane_t1

0xdefb,	// (0x0003f521) bg_button_pane_cp08

0x3a34,	// (0x0003505a) cell_fshwr2_syb_bg_pane

0xee90,	// (0x000404b6) cell_fshwr2_syb_bg_pane_g1

0xee98,	// (0x000404be) cell_fshwr2_syb_bg_pane_t1

0x2aee,	// (0x00034114) main_tmo_pane

0xd49a,	// (0x0003eac0) uni_indicator_pane_g1_ParamLimits

0xd4af,	// (0x0003ead5) uni_indicator_pane_g2_ParamLimits

0xd4c4,	// (0x0003eaea) uni_indicator_pane_g3_ParamLimits

0xd4da,	// (0x0003eb00) uni_indicator_pane_g4_ParamLimits

0xd4da,	// (0x0003eb00) uni_indicator_pane_g4

0xd4ee,	// (0x0003eb14) uni_indicator_pane_g5_ParamLimits

0xd4ee,	// (0x0003eb14) uni_indicator_pane_g5

0xd502,	// (0x0003eb28) uni_indicator_pane_g6_ParamLimits

0xd502,	// (0x0003eb28) uni_indicator_pane_g6

0xf928,	// (0x00040f4e) uni_indicator_pane_g_ParamLimits

0xe018,	// (0x0003f63e) popup_tmo_note_window_ParamLimits

0xe018,	// (0x0003f63e) popup_tmo_note_window

0xdefb,	// (0x0003f521) fshwr2_bg_pane

0x9aca,	// (0x0003b0f0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9aca,	// (0x0003b0f0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x000414e5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x000414e5) fshwr2_func_candi_cell_pane_g

0x6fa8,	// (0x000385ce) bg_popup_window_pane_cp01

0x9b03,	// (0x0003b129) bg_popup_window_pane_g1_cp01

0x9b0c,	// (0x0003b132) bg_popup_window_pane_cp22_ParamLimits

0x9b0c,	// (0x0003b132) bg_popup_window_pane_cp22

0x9b1a,	// (0x0003b140) listscroll_tmo_link_pane_ParamLimits

0x9b1a,	// (0x0003b140) listscroll_tmo_link_pane

0x9b5a,	// (0x0003b180) popup_tmo_note_window_g1_ParamLimits

0x9b5a,	// (0x0003b180) popup_tmo_note_window_g1

0x9b67,	// (0x0003b18d) tmo_note_info_pane_ParamLimits

0x9b67,	// (0x0003b18d) tmo_note_info_pane

0xeea7,	// (0x000404cd) list_tmo_note_info_pane_g1_ParamLimits

0xeea7,	// (0x000404cd) list_tmo_note_info_pane_g1

0x9b98,	// (0x0003b1be) list_tmo_note_info_pane_g2_ParamLimits

0x9b98,	// (0x0003b1be) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x000414ea) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x000414ea) list_tmo_note_info_pane_g

0x9bb4,	// (0x0003b1da) list_tmo_note_info_text_pane_ParamLimits

0x9bb4,	// (0x0003b1da) list_tmo_note_info_text_pane

0x9c39,	// (0x0003b25f) list_tmo_link_pane

0x9c46,	// (0x0003b26c) scroll_pane_cp20

0x9c53,	// (0x0003b279) list_single_tmo_link_pane_ParamLimits

0x9c53,	// (0x0003b279) list_single_tmo_link_pane

0x9c63,	// (0x0003b289) list_single_tmo_link_pane_t1

0x9c71,	// (0x0003b297) list_tmo_note_info_text_pane_t1_ParamLimits

0x9c71,	// (0x0003b297) list_tmo_note_info_text_pane_t1

0xc3b0,	// (0x0003d9d6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc3b0,	// (0x0003d9d6) aid_size_touch_scroll_bar_cp01

0xb7ec,	// (0x0003ce12) aid_size_touch_slider_marker

0xaf57,	// (0x0003c57d) popup_settings_window_ParamLimits

0xaf57,	// (0x0003c57d) popup_settings_window

0x0b56,	// (0x0003217c) popup_candi_list_indi_window

0x442f,	// (0x00035a55) aid_touch_navi_pane_ParamLimits

0x1931,	// (0x00032f57) rs_clock_indi_pane

0x193a,	// (0x00032f60) sctrl_sk_bottom_pane_ParamLimits

0x194b,	// (0x00032f71) sctrl_sk_top_pane_ParamLimits

0x1a4c,	// (0x00033072) popup_fep_tooltip_window

0x952d,	// (0x0003ab53) aid_size_cell_widget_grid_ParamLimits

0xeb9c,	// (0x000401c2) cell_ai5_widget_pane_g1_ParamLimits

0xeb9c,	// (0x000401c2) cell_ai5_widget_pane_g1

0xebef,	// (0x00040215) cell_ai5_widget_pane_g6_ParamLimits

0xebfb,	// (0x00040221) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x00041468) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00041468) cell_ai5_widget_pane_g

0xed3b,	// (0x00040361) cell_ai5_widget_pane_t10_ParamLimits

0xed3b,	// (0x00040361) cell_ai5_widget_pane_t10

0xed51,	// (0x00040377) grid_ai5_widget_pane_ParamLimits

0x97a4,	// (0x0003adca) cell_contacts_ai5_widget_pane_ParamLimits

0x97a4,	// (0x0003adca) cell_contacts_ai5_widget_pane

0x9984,	// (0x0003afaa) popup_discreet_window_t3_ParamLimits

0x9984,	// (0x0003afaa) popup_discreet_window_t3

0x9a13,	// (0x0003b039) popup_fshwr2_char_preview_window_ParamLimits

0x9a13,	// (0x0003b039) popup_fshwr2_char_preview_window

0xeebe,	// (0x000404e4) tmo_note_info_pane_t1

0xeed3,	// (0x000404f9) tmo_note_info_pane_t2

0xeeec,	// (0x00040512) tmo_note_info_pane_t3

0x9c15,	// (0x0003b23b) tmo_note_info_pane_t4

0x9c27,	// (0x0003b24d) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x000414ef) tmo_note_info_pane_t

0x9c39,	// (0x0003b25f) list_tmo_link_pane_ParamLimits

0x9c46,	// (0x0003b26c) scroll_pane_cp20_ParamLimits

0xdefb,	// (0x0003f521) bg_popup_fep_char_preview_window_cp01

0x9c8a,	// (0x0003b2b0) popup_fshwr2_char_preview_window_t1

0x9c98,	// (0x0003b2be) popup_candi_list_indi_window_g1

0x9ca1,	// (0x0003b2c7) bg_cell_contacts_ai5_widget_pane

0x9cad,	// (0x0003b2d3) cell_contacts_ai5_widget_pane_g1

0x9cc1,	// (0x0003b2e7) cell_contacts_ai5_widget_pane_g2

0x9cd0,	// (0x0003b2f6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x000414fa) cell_contacts_ai5_widget_pane_g

0x9ce3,	// (0x0003b309) cell_contacts_ai5_widget_pane_t1

0x2aee,	// (0x00034114) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef66,	// (0x0004058c) settings_container_pane

0x3a34,	// (0x0003505a) listscroll_set_pane_copy1

0x66ee,	// (0x00037d14) scroll_pane_cp121_copy1

0x9d69,	// (0x0003b38f) set_content_pane_copy1

0xef72,	// (0x00040598) aid_height_set_list_copy1_ParamLimits

0xef72,	// (0x00040598) aid_height_set_list_copy1

0x5d3b,	// (0x00037361) aid_size_parent_copy1_ParamLimits

0x5d3b,	// (0x00037361) aid_size_parent_copy1

0xef7e,	// (0x000405a4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef7e,	// (0x000405a4) button_value_adjust_pane_cp6_copy1

0x3dba,	// (0x000353e0) list_highlight_pane_cp2_copy1_ParamLimits

0x3dba,	// (0x000353e0) list_highlight_pane_cp2_copy1

0xef92,	// (0x000405b8) list_set_pane_copy1_ParamLimits

0xef92,	// (0x000405b8) list_set_pane_copy1

0xef01,	// (0x00040527) main_pane_set_t1_copy1_ParamLimits

0xef01,	// (0x00040527) main_pane_set_t1_copy1

0xef3b,	// (0x00040561) main_pane_set_t2_copy1_ParamLimits

0xef3b,	// (0x00040561) main_pane_set_t2_copy1

0xf059,	// (0x0004067f) main_pane_set_t3_copy1

0xf067,	// (0x0004068d) main_pane_set_t4_copy1

0xef5a,	// (0x00040580) set_content_pane_g1_copy1_ParamLimits

0xef5a,	// (0x00040580) set_content_pane_g1_copy1

0xf075,	// (0x0004069b) setting_code_pane_copy1

0x9e7e,	// (0x0003b4a4) setting_slider_graphic_pane_copy1

0x9e7e,	// (0x0003b4a4) setting_slider_pane_copy1

0x9e7e,	// (0x0003b4a4) setting_text_pane_copy1

0x9e88,	// (0x0003b4ae) setting_volume_pane_copy1

0xf07f,	// (0x000406a5) settings_code_pane_cp2_copy1

0xf087,	// (0x000406ad) settings_code_pane_cp_copy1_ParamLimits

0xf087,	// (0x000406ad) settings_code_pane_cp_copy1

0xf09b,	// (0x000406c1) volume_set_pane_copy1

0xf0a7,	// (0x000406cd) volume_set_pane_g10_copy1

0xf0b3,	// (0x000406d9) volume_set_pane_g1_copy1

0xf0bd,	// (0x000406e3) volume_set_pane_g2_copy1

0xf0c7,	// (0x000406ed) volume_set_pane_g3_copy1

0xf0d1,	// (0x000406f7) volume_set_pane_g4_copy1

0xf0db,	// (0x00040701) volume_set_pane_g5_copy1

0xf0e5,	// (0x0004070b) volume_set_pane_g6_copy1

0xf0ef,	// (0x00040715) volume_set_pane_g7_copy1

0xf0f9,	// (0x0004071f) volume_set_pane_g8_copy1

0xf103,	// (0x00040729) volume_set_pane_g9_copy1

0x2267,	// (0x0003388d) bg_set_opt_pane_cp_copy1_ParamLimits

0x2267,	// (0x0003388d) bg_set_opt_pane_cp_copy1

0x9f1f,	// (0x0003b545) setting_slider_pane_t1_copy1_ParamLimits

0x9f1f,	// (0x0003b545) setting_slider_pane_t1_copy1

0xf10d,	// (0x00040733) setting_slider_pane_t2_copy1_ParamLimits

0xf10d,	// (0x00040733) setting_slider_pane_t2_copy1

0xf127,	// (0x0004074d) setting_slider_pane_t3_copy1_ParamLimits

0xf127,	// (0x0004074d) setting_slider_pane_t3_copy1

0xf13f,	// (0x00040765) slider_set_pane_copy1_ParamLimits

0xf13f,	// (0x00040765) slider_set_pane_copy1

0x2b55,	// (0x0003417b) set_opt_bg_pane_g1_copy2

0x2b5d,	// (0x00034183) set_opt_bg_pane_g2_copy2

0x9f85,	// (0x0003b5ab) set_opt_bg_pane_g3_copy2

0x2b6d,	// (0x00034193) set_opt_bg_pane_g4_copy2

0x2b75,	// (0x0003419b) set_opt_bg_pane_g5_copy2

0x2b7d,	// (0x000341a3) set_opt_bg_pane_g6_copy2

0xf155,	// (0x0004077b) set_opt_bg_pane_g7_copy2

0x9f99,	// (0x0003b5bf) set_opt_bg_pane_g8_copy2

0x9fa3,	// (0x0003b5c9) set_opt_bg_pane_g9_copy2

0x9fad,	// (0x0003b5d3) aid_size_touch_slider_mark_copy1_ParamLimits

0x9fad,	// (0x0003b5d3) aid_size_touch_slider_mark_copy1

0x9fc1,	// (0x0003b5e7) slider_set_pane_g1_copy1

0x9fca,	// (0x0003b5f0) slider_set_pane_g2_copy1

0x65ae,	// (0x00037bd4) slider_set_pane_g3_copy1_ParamLimits

0x65ae,	// (0x00037bd4) slider_set_pane_g3_copy1

0x65c2,	// (0x00037be8) slider_set_pane_g4_copy1_ParamLimits

0x65c2,	// (0x00037be8) slider_set_pane_g4_copy1

0x65da,	// (0x00037c00) slider_set_pane_g5_copy1_ParamLimits

0x65da,	// (0x00037c00) slider_set_pane_g5_copy1

0x65ae,	// (0x00037bd4) slider_set_pane_g6_copy1_ParamLimits

0x65ae,	// (0x00037bd4) slider_set_pane_g6_copy1

0xf15f,	// (0x00040785) slider_set_pane_g7_copy1_ParamLimits

0xf15f,	// (0x00040785) slider_set_pane_g7_copy1

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp2_copy1

0x9fe8,	// (0x0003b60e) setting_slider_graphic_pane_g1_copy1

0xf175,	// (0x0004079b) setting_slider_graphic_pane_t1_copy1

0xf185,	// (0x000407ab) setting_slider_graphic_pane_t2_copy1

0xf195,	// (0x000407bb) slider_set_pane_cp_copy1

0xa021,	// (0x0003b647) input_focus_pane_cp1_copy1

0xa02a,	// (0x0003b650) list_set_text_pane_copy1

0xa032,	// (0x0003b658) setting_text_pane_g1_copy1

0x2f25,	// (0x0003454b) set_text_pane_t1_copy1

0xa021,	// (0x0003b647) input_focus_pane_cp2_copy1

0xa032,	// (0x0003b658) setting_code_pane_g1_copy1

0xf19d,	// (0x000407c3) setting_code_pane_t1_copy1

0xf1ab,	// (0x000407d1) list_set_graphic_pane_copy1

0xdf0f,	// (0x0003f535) bg_set_opt_pane_cp4_copy1

0xc63b,	// (0x0003dc61) list_set_graphic_pane_g1_copy1_ParamLimits

0xc63b,	// (0x0003dc61) list_set_graphic_pane_g1_copy1

0xf1bd,	// (0x000407e3) list_set_graphic_pane_g2_copy1

0xc653,	// (0x0003dc79) list_set_graphic_pane_t1_copy1_ParamLimits

0xc653,	// (0x0003dc79) list_set_graphic_pane_t1_copy1

0x6fa8,	// (0x000385ce) rs_clock_indi_pane_g1

0xa063,	// (0x0003b689) rs_clock_indi_pane_t1

0xa071,	// (0x0003b697) rs_indi_pane

0xa079,	// (0x0003b69f) rs_indi_pane_g1

0xa082,	// (0x0003b6a8) rs_indi_pane_g2

0xa08b,	// (0x0003b6b1) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00041501) rs_indi_pane_g

0x3a34,	// (0x0003505a) bg_popup_preview_window_pane_cp03

0xa094,	// (0x0003b6ba) popup_fep_tooltip_window_t1

0x7c4e,	// (0x00039274) popup_note2_window_g2_ParamLimits

0x7c4e,	// (0x00039274) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0004129a) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0004129a) popup_note2_window_g

0x8164,	// (0x0003978a) bg_popup_sub_pane_cp11_ParamLimits

0x8171,	// (0x00039797) cell_ai3_links_pane_g1_ParamLimits

0x8188,	// (0x000397ae) cell_ai3_links_pane_t1

0x2f25,	// (0x0003454b) set_text_pane_t1_copy1_ParamLimits

0x3941,	// (0x00034f67) cell_graphic_popup_pane_cp2_ParamLimits

0x3941,	// (0x00034f67) cell_graphic_popup_pane_cp2

0xa0a2,	// (0x0003b6c8) cell_graphic_popup_pane_g1_cp2

0x2839,	// (0x00033e5f) cell_graphic_popup_pane_g2_cp2

0xa0aa,	// (0x0003b6d0) cell_graphic_popup_pane_g3_cp2

0xa0b2,	// (0x0003b6d8) cell_graphic_popup_pane_t2_cp2

0x284a,	// (0x00033e70) grid_highlight_pane_cp3_cp2

0x3189,	// (0x000347af) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2aee,	// (0x00034114) main_tmo_pane_ParamLimits

0xe00c,	// (0x0003f632) popup_tmo_big_image_note_window

0xeb8c,	// (0x000401b2) cell_ai5_widget_list_pane

0xeb94,	// (0x000401ba) cell_ai5_widget_lrg_icon_pane

0xeebe,	// (0x000404e4) tmo_note_info_pane_t1_ParamLimits

0xeed3,	// (0x000404f9) tmo_note_info_pane_t2_ParamLimits

0xeeec,	// (0x00040512) tmo_note_info_pane_t3_ParamLimits

0x9c15,	// (0x0003b23b) tmo_note_info_pane_t4_ParamLimits

0x9c27,	// (0x0003b24d) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x000414ef) tmo_note_info_pane_t_ParamLimits

0xef66,	// (0x0004058c) settings_container_pane_ParamLimits

0xa019,	// (0x0003b63f) indicator_popup_pane_cp5

0xa019,	// (0x0003b63f) indicator_popup_pane_cp6

0xf1ab,	// (0x000407d1) list_set_graphic_pane_copy1_ParamLimits

0xdefb,	// (0x0003f521) bg_popup_window_pane_cp23

0xa0c0,	// (0x0003b6e6) popup_tmo_big_image_note_window_g1

0xa0cc,	// (0x0003b6f2) popup_tmo_big_image_note_window_t1

0xa0dc,	// (0x0003b702) popup_tmo_big_image_note_window_t2

0xa0ec,	// (0x0003b712) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x00041508) popup_tmo_big_image_note_window_t

0xf1c5,	// (0x000407eb) cell_ai5_widget_lrg_icon_pane_g1

0xf1cd,	// (0x000407f3) cell_ai5_widget_lrg_icon_pane_t1

0xf1db,	// (0x00040801) cell_ai5_widget_list_row_pane_ParamLimits

0xf1db,	// (0x00040801) cell_ai5_widget_list_row_pane

0xf1f4,	// (0x0004081a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1f4,	// (0x0004081a) cell_ai5_widget_list_row_pane_g1

0xf201,	// (0x00040827) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf201,	// (0x00040827) cell_ai5_widget_list_row_pane_t1

0xf219,	// (0x0004083f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf219,	// (0x0004083f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x0004150f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x0004150f) cell_ai5_widget_list_row_pane_t

0xf2e8,	// (0x0004090e) main_fep_vtchi_ss_pane

0xa162,	// (0x0003b788) popup_fep_char_pre_window

0xa16a,	// (0x0003b790) popup_fep_ituss_window

0xa18b,	// (0x0003b7b1) popup_fep_vkbss_window

0xa1ac,	// (0x0003b7d2) grid_vkbss_keypad_pane_ParamLimits

0xa1ac,	// (0x0003b7d2) grid_vkbss_keypad_pane

0xa1bc,	// (0x0003b7e2) ituss_keypad_pane

0xa1d5,	// (0x0003b7fb) aid_vkbss_key_offset_ParamLimits

0xa1d5,	// (0x0003b7fb) aid_vkbss_key_offset

0xa1e1,	// (0x0003b807) cell_vkbss_key_pane_ParamLimits

0xa1e1,	// (0x0003b807) cell_vkbss_key_pane

0xa1f7,	// (0x0003b81d) bg_cell_vkbss_key_g1_ParamLimits

0xa1f7,	// (0x0003b81d) bg_cell_vkbss_key_g1

0xa203,	// (0x0003b829) cell_vkbss_key_3p_pane_ParamLimits

0xa203,	// (0x0003b829) cell_vkbss_key_3p_pane

0xa21d,	// (0x0003b843) cell_vkbss_key_g1_ParamLimits

0xa21d,	// (0x0003b843) cell_vkbss_key_g1

0xa237,	// (0x0003b85d) cell_vkbss_key_t1_ParamLimits

0xa237,	// (0x0003b85d) cell_vkbss_key_t1

0xa262,	// (0x0003b888) cell_ituss_key_pane_ParamLimits

0xa262,	// (0x0003b888) cell_ituss_key_pane

0xa272,	// (0x0003b898) bg_cell_ituss_key_g1_ParamLimits

0xa272,	// (0x0003b898) bg_cell_ituss_key_g1

0xa27e,	// (0x0003b8a4) cell_ituss_key_pane_g1_ParamLimits

0xa27e,	// (0x0003b8a4) cell_ituss_key_pane_g1

0xa28a,	// (0x0003b8b0) cell_ituss_key_pane_g2_ParamLimits

0xa28a,	// (0x0003b8b0) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x00041514) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x00041514) cell_ituss_key_pane_g

0xa2a6,	// (0x0003b8cc) cell_ituss_key_t1_ParamLimits

0xa2a6,	// (0x0003b8cc) cell_ituss_key_t1

0xa2d4,	// (0x0003b8fa) cell_ituss_key_t2_ParamLimits

0xa2d4,	// (0x0003b8fa) cell_ituss_key_t2

0xa305,	// (0x0003b92b) cell_ituss_key_t3_ParamLimits

0xa305,	// (0x0003b92b) cell_ituss_key_t3

0xa336,	// (0x0003b95c) cell_ituss_key_t4_ParamLimits

0xa336,	// (0x0003b95c) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x00041519) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x00041519) cell_ituss_key_t

0xa367,	// (0x0003b98d) cell_vkbss_key_3p_pane_g1

0xa36f,	// (0x0003b995) cell_vkbss_key_3p_pane_g2

0xa377,	// (0x0003b99d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x00041522) cell_vkbss_key_3p_pane_g

0xdefb,	// (0x0003f521) bg_popup_fep_char_preview_window_cp02

0xa37f,	// (0x0003b9a5) popup_fep_char_pre_window_t1

0xeb82,	// (0x000401a8) main_ai5_sk_pane

0x9ca1,	// (0x0003b2c7) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9cad,	// (0x0003b2d3) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9cc1,	// (0x0003b2e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9cd0,	// (0x0003b2f6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x000414fa) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9ce3,	// (0x0003b309) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2aee,	// (0x00034114) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf22b,	// (0x00040851) main_ai5_sk_pane_g1

0x4de0,	// (0x00036406) popup_query_code_window_g1

0xa180,	// (0x0003b7a6) popup_fep_vkb_icf_pane

0xa196,	// (0x0003b7bc) popup_fep_vtchi_icf_pane

0x2aee,	// (0x00034114) bg_icf_pane

0xa3a6,	// (0x0003b9cc) list_vkb_icf_pane

0x2aee,	// (0x00034114) bg_icf_pane_cp01

0x8467,	// (0x00039a8d) vtchi_icf_list_pane

0xa3c6,	// (0x0003b9ec) list_vkb_icf_pane_t1_ParamLimits

0xa3c6,	// (0x0003b9ec) list_vkb_icf_pane_t1

0xa3dd,	// (0x0003ba03) vtchi_icf_list_pane_t1_ParamLimits

0xa3dd,	// (0x0003ba03) vtchi_icf_list_pane_t1

0xa16a,	// (0x0003b790) popup_fep_ituss_window_ParamLimits

0xa196,	// (0x0003b7bc) popup_fep_vtchi_icf_pane_ParamLimits

0xa1bc,	// (0x0003b7e2) ituss_keypad_pane_ParamLimits

0xa1cc,	// (0x0003b7f2) ituss_sks_pane

0x2aee,	// (0x00034114) bg_icf_pane_ParamLimits

0xa397,	// (0x0003b9bd) icf_edit_indi_pane_ParamLimits

0xa397,	// (0x0003b9bd) icf_edit_indi_pane

0xa3a6,	// (0x0003b9cc) list_vkb_icf_pane_ParamLimits

0x2aee,	// (0x00034114) bg_icf_pane_cp01_ParamLimits

0xa3b2,	// (0x0003b9d8) icf_edit_indi_pane_cp01_ParamLimits

0xa3b2,	// (0x0003b9d8) icf_edit_indi_pane_cp01

0xa3be,	// (0x0003b9e4) vtchi_query_pane

0x7232,	// (0x00038858) icf_edit_indi_pane_g1_ParamLimits

0x7232,	// (0x00038858) icf_edit_indi_pane_g1

0xa3f6,	// (0x0003ba1c) icf_edit_indi_pane_g2_ParamLimits

0xa3f6,	// (0x0003ba1c) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00041529) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00041529) icf_edit_indi_pane_g

0xa402,	// (0x0003ba28) icf_edit_indi_pane_t1

0xa410,	// (0x0003ba36) bg_input_focus_pane_cp042

0x2a1d,	// (0x00034043) vtchi_button_pane

0xa419,	// (0x0003ba3f) vtchi_query_pane_t1

0xa427,	// (0x0003ba4d) vtchi_query_pane_t2

0xa435,	// (0x0003ba5b) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0004152e) vtchi_query_pane_t

0xdefb,	// (0x0003f521) bg_button_pane_cp13

0xa443,	// (0x0003ba69) vtchi_button_pane_g1

0x89d3,	// (0x00039ff9) ituss_sks_pane_g1

0xa44b,	// (0x0003ba71) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00041535) ituss_sks_pane_g

0xa454,	// (0x0003ba7a) ituss_sks_pane_t1

0xa462,	// (0x0003ba88) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0004153a) ituss_sks_pane_t

0x6a4f,	// (0x00038075) indicator_nsta_pane_cp_g1

0x6a58,	// (0x0003807e) indicator_nsta_pane_cp_g2

0x6a60,	// (0x00038086) indicator_nsta_pane_cp_g3

0x6a68,	// (0x0003808e) indicator_nsta_pane_cp_g4

0x6a70,	// (0x00038096) indicator_nsta_pane_cp_g5

0x6a78,	// (0x0003809e) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x000410d8) indicator_nsta_pane_cp_g

0xe9ba,	// (0x0003ffe0) cell_graphic2_pane_t2_ParamLimits

0xe9ba,	// (0x0003ffe0) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x000413f1) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x000413f1) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
